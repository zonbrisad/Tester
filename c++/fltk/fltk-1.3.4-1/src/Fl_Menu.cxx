   1              		.file	"Fl_Menu.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  12              	.Ltext_cold0:
  13              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  14              		.weak	_ZN9Fl_Widget12as_gl_windowEv
  16              	_ZN9Fl_Widget12as_gl_windowEv:
  17              	.LFB234:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
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
 958:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 959:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* window() const ;
 960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 961:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window_offset(int& xoff, int& yoff) const;
 962:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Group.
 964:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 965:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need to
 966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If it returns
 967:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from Fl_Group,
 968:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its children
 969:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Group-specific methods.
 970:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 971:fltk-1.3.4-1/FL/Fl_Widget.H ****       Example:
 972:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 973:fltk-1.3.4-1/FL/Fl_Widget.H ****       void my_callback (Fl_Widget *w, void *) {
 974:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Group *g = w->as_group();
 975:fltk-1.3.4-1/FL/Fl_Widget.H **** 	if (g)
 976:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This group has %d children\n",g->children());
 977:fltk-1.3.4-1/FL/Fl_Widget.H **** 	else
 978:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This widget is not a group!\n");
 979:fltk-1.3.4-1/FL/Fl_Widget.H ****       }
 980:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 981:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 982:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Group.
 983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
 985:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 986:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Group* as_group() {return 0;}
 987:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 988:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Window pointer if this widget is an Fl_Window.
 989:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need to
 991:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Window. If it returns
 992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from Fl_Window,
 993:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its children
 994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
 995:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Window.
 997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 998:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_gl_window()
 999:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1000:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Window* as_window() {return 0;}
1001:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1002:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Gl_Window pointer if this widget is an Fl_Gl_Window.
1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1004:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need to
1005:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Gl_Window. If it returns
1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from Fl_Gl_Window.
1007:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1008:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Gl_Window.
1009:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1010:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_window()
1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1012:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual class Fl_Gl_Window* as_gl_window() {return 0;}
  19              		.loc 1 1012 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 1012 0
  23 0000 31C0     		xorl	%eax, %eax
  24 0002 C3       		ret
  25              		.cfi_endproc
  26              	.LFE234:
  28              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  29              	.LCOLDE0:
  30              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  31              	.LHOTE0:
  32              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  33              		.align 2
  34              	.LCOLDB1:
  35              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  36              	.LHOTB1:
  37              		.align 2
  38              		.p2align 4,,15
  39              		.weak	_ZN8Fl_Group8as_groupEv
  41              	_ZN8Fl_Group8as_groupEv:
  42              	.LFB250:
  43              		.file 2 "fltk-1.3.4-1/FL/Fl_Group.H"
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
 149:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 150:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
 151:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 152:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* resizable() const {return resizable_;}
 153:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 154:fltk-1.3.4-1/FL/Fl_Group.H ****     Adds a widget to the group and makes it the resizable widget.
 155:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 156:fltk-1.3.4-1/FL/Fl_Group.H ****   void add_resizable(Fl_Widget& o) {resizable_ = &o; add(o);}
 157:fltk-1.3.4-1/FL/Fl_Group.H ****   void init_sizes();
 158:fltk-1.3.4-1/FL/Fl_Group.H **** 
 159:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 160:fltk-1.3.4-1/FL/Fl_Group.H ****     Controls whether the group widget clips the drawing of
 161:fltk-1.3.4-1/FL/Fl_Group.H ****     child widgets to its bounding box.
 162:fltk-1.3.4-1/FL/Fl_Group.H ****     
 163:fltk-1.3.4-1/FL/Fl_Group.H ****     Set \p c to 1 if you want to clip the child widgets to the
 164:fltk-1.3.4-1/FL/Fl_Group.H ****     bounding box.
 165:fltk-1.3.4-1/FL/Fl_Group.H **** 
 166:fltk-1.3.4-1/FL/Fl_Group.H ****     The default is to not clip (0) the drawing of child widgets.
 167:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 168:fltk-1.3.4-1/FL/Fl_Group.H ****   void clip_children(int c) { if (c) set_flag(CLIP_CHILDREN); else clear_flag(CLIP_CHILDREN); }
 169:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 170:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns the current clipping mode.
 171:fltk-1.3.4-1/FL/Fl_Group.H **** 
 172:fltk-1.3.4-1/FL/Fl_Group.H ****     \return true, if clipping is enabled, false otherwise.
 173:fltk-1.3.4-1/FL/Fl_Group.H **** 
 174:fltk-1.3.4-1/FL/Fl_Group.H ****     \see void Fl_Group::clip_children(int c)
 175:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 176:fltk-1.3.4-1/FL/Fl_Group.H ****   unsigned int clip_children() { return (flags() & CLIP_CHILDREN) != 0; }
 177:fltk-1.3.4-1/FL/Fl_Group.H **** 
 178:fltk-1.3.4-1/FL/Fl_Group.H ****   // Note: Doxygen docs in Fl_Widget.H to avoid redundancy.
 179:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual Fl_Group* as_group() { return this; }
  44              		.loc 2 179 0
  45              		.cfi_startproc
  46              	.LVL1:
  47              		.loc 2 179 0
  48 0000 4889F8   		movq	%rdi, %rax
  49 0003 C3       		ret
  50              		.cfi_endproc
  51              	.LFE250:
  53              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  54              	.LCOLDE1:
  55              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  56              	.LHOTE1:
  57              		.section	.text.unlikely._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  58              		.align 2
  59              	.LCOLDB2:
  60              		.section	.text._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  61              	.LHOTB2:
  62              		.align 2
  63              		.p2align 4,,15
  64              		.weak	_ZN9Fl_Window9as_windowEv
  66              	_ZN9Fl_Window9as_windowEv:
  67              	.LFB305:
  68              		.file 3 "fltk-1.3.4-1/FL/Fl_Window.H"
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
 441:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxw   = maxw;
 442:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxh   = maxh;
 443:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dw     = dw;
 444:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dh     = dh;
 445:fltk-1.3.4-1/FL/Fl_Window.H ****     this->aspect = aspect;
 446:fltk-1.3.4-1/FL/Fl_Window.H ****     size_range_();
 447:fltk-1.3.4-1/FL/Fl_Window.H ****   }
 448:fltk-1.3.4-1/FL/Fl_Window.H **** 
 449:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::label(const char*)   */
 450:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* label() const	{return Fl_Widget::label();}
 451:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  See void Fl_Window::iconlabel(const char*)   */
 452:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* iconlabel() const	{return iconlabel_;}
 453:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Sets the window title bar label. */
 454:fltk-1.3.4-1/FL/Fl_Window.H ****   void label(const char*);
 455:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Sets the icon label. */
 456:fltk-1.3.4-1/FL/Fl_Window.H ****   void iconlabel(const char*);
 457:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Sets the icon label. */
 458:fltk-1.3.4-1/FL/Fl_Window.H ****   void label(const char* label, const char* iconlabel); // platform dependent
 459:fltk-1.3.4-1/FL/Fl_Window.H ****   void copy_label(const char* a);
 460:fltk-1.3.4-1/FL/Fl_Window.H **** 
 461:fltk-1.3.4-1/FL/Fl_Window.H ****   static void default_xclass(const char*);
 462:fltk-1.3.4-1/FL/Fl_Window.H ****   static const char *default_xclass();
 463:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* xclass() const;
 464:fltk-1.3.4-1/FL/Fl_Window.H ****   void xclass(const char* c);
 465:fltk-1.3.4-1/FL/Fl_Window.H **** 
 466:fltk-1.3.4-1/FL/Fl_Window.H ****   static void default_icon(const Fl_RGB_Image*);
 467:fltk-1.3.4-1/FL/Fl_Window.H ****   static void default_icons(const Fl_RGB_Image*[], int);
 468:fltk-1.3.4-1/FL/Fl_Window.H ****   void icon(const Fl_RGB_Image*);
 469:fltk-1.3.4-1/FL/Fl_Window.H ****   void icons(const Fl_RGB_Image*[], int);
 470:fltk-1.3.4-1/FL/Fl_Window.H **** 
 471:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
 472:fltk-1.3.4-1/FL/Fl_Window.H ****   static void default_icons(HICON big_icon, HICON small_icon);
 473:fltk-1.3.4-1/FL/Fl_Window.H ****   void icons(HICON big_icon, HICON small_icon);
 474:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 475:fltk-1.3.4-1/FL/Fl_Window.H **** 
 476:fltk-1.3.4-1/FL/Fl_Window.H ****   /* for legacy compatibility */
 477:fltk-1.3.4-1/FL/Fl_Window.H ****   const void* icon() const;
 478:fltk-1.3.4-1/FL/Fl_Window.H ****   void icon(const void * ic);
 479:fltk-1.3.4-1/FL/Fl_Window.H **** 
 480:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 481:fltk-1.3.4-1/FL/Fl_Window.H ****     Returns non-zero if show() has been called (but not hide()
 482:fltk-1.3.4-1/FL/Fl_Window.H ****     ). You can tell if a window is iconified with (w->shown()
 483:fltk-1.3.4-1/FL/Fl_Window.H ****     && !w->visible()).
 484:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 485:fltk-1.3.4-1/FL/Fl_Window.H ****   int shown() {return i != 0;}
 486:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 487:fltk-1.3.4-1/FL/Fl_Window.H ****     Puts the window on the screen. Usually (on X) this has the side
 488:fltk-1.3.4-1/FL/Fl_Window.H ****     effect of opening the display.
 489:fltk-1.3.4-1/FL/Fl_Window.H **** 
 490:fltk-1.3.4-1/FL/Fl_Window.H ****     If the window is already shown then it is restored and raised to the
 491:fltk-1.3.4-1/FL/Fl_Window.H ****     top.  This is really convenient because your program can call show()
 492:fltk-1.3.4-1/FL/Fl_Window.H ****     at any time, even if the window is already up.  It also means that
 493:fltk-1.3.4-1/FL/Fl_Window.H ****     show() serves the purpose of raise() in other toolkits.
 494:fltk-1.3.4-1/FL/Fl_Window.H **** 
 495:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window::show(int argc, char **argv) is used for top-level
 496:fltk-1.3.4-1/FL/Fl_Window.H ****     windows and allows standard arguments to be parsed from the
 497:fltk-1.3.4-1/FL/Fl_Window.H ****     command-line.
 498:fltk-1.3.4-1/FL/Fl_Window.H **** 
 499:fltk-1.3.4-1/FL/Fl_Window.H ****     \note For some obscure reasons Fl_Window::show() resets the current
 500:fltk-1.3.4-1/FL/Fl_Window.H ****     group by calling Fl_Group::current(0). The comments in the code
 501:fltk-1.3.4-1/FL/Fl_Window.H ****     say "get rid of very common user bug: forgot end()". Although
 502:fltk-1.3.4-1/FL/Fl_Window.H ****     this is true it may have unwanted side effects if you show() an
 503:fltk-1.3.4-1/FL/Fl_Window.H ****     unrelated window (maybe for an error message or warning) while
 504:fltk-1.3.4-1/FL/Fl_Window.H ****     building a window or any other group widget.
 505:fltk-1.3.4-1/FL/Fl_Window.H **** 
 506:fltk-1.3.4-1/FL/Fl_Window.H ****     \todo Check if we can remove resetting the current group in a later
 507:fltk-1.3.4-1/FL/Fl_Window.H ****     FLTK version (after 1.3.x). This may break "already broken" programs
 508:fltk-1.3.4-1/FL/Fl_Window.H ****     though if they rely on this "feature".
 509:fltk-1.3.4-1/FL/Fl_Window.H **** 
 510:fltk-1.3.4-1/FL/Fl_Window.H ****     \see Fl_Window::show(int argc, char **argv)
 511:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 512:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void show();
 513:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 514:fltk-1.3.4-1/FL/Fl_Window.H ****     Removes the window from the screen.  If the window is already hidden or
 515:fltk-1.3.4-1/FL/Fl_Window.H ****     has not been shown then this does nothing and is harmless.
 516:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 517:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void hide();
 518:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 519:fltk-1.3.4-1/FL/Fl_Window.H ****     Puts the window on the screen and parses command-line arguments.
 520:fltk-1.3.4-1/FL/Fl_Window.H **** 
 521:fltk-1.3.4-1/FL/Fl_Window.H ****     Usually (on X) this has the side effect of opening the display.
 522:fltk-1.3.4-1/FL/Fl_Window.H **** 
 523:fltk-1.3.4-1/FL/Fl_Window.H ****     This form should be used for top-level windows, at least for the
 524:fltk-1.3.4-1/FL/Fl_Window.H ****     first (main) window. It allows standard arguments to be parsed
 525:fltk-1.3.4-1/FL/Fl_Window.H ****     from the command-line. You can use \p argc and \p argv from
 526:fltk-1.3.4-1/FL/Fl_Window.H ****     main(int argc, char **argv) for this call.
 527:fltk-1.3.4-1/FL/Fl_Window.H **** 
 528:fltk-1.3.4-1/FL/Fl_Window.H ****     The first call also sets up some system-specific internal
 529:fltk-1.3.4-1/FL/Fl_Window.H ****     variables like the system colors.
 530:fltk-1.3.4-1/FL/Fl_Window.H **** 
 531:fltk-1.3.4-1/FL/Fl_Window.H ****     \todo explain which system parameters are set up.
 532:fltk-1.3.4-1/FL/Fl_Window.H **** 
 533:fltk-1.3.4-1/FL/Fl_Window.H ****     \param argc command-line argument count, usually from main()
 534:fltk-1.3.4-1/FL/Fl_Window.H ****     \param argv command-line argument vector, usually from main()
 535:fltk-1.3.4-1/FL/Fl_Window.H **** 
 536:fltk-1.3.4-1/FL/Fl_Window.H ****     \see virtual void Fl_Window::show()
 537:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 538:fltk-1.3.4-1/FL/Fl_Window.H ****   void show(int argc, char **argv);
 539:fltk-1.3.4-1/FL/Fl_Window.H **** 
 540:fltk-1.3.4-1/FL/Fl_Window.H ****   // Enables synchronous show(), docs in Fl_Window.cxx
 541:fltk-1.3.4-1/FL/Fl_Window.H ****   void wait_for_expose();
 542:fltk-1.3.4-1/FL/Fl_Window.H **** 
 543:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 544:fltk-1.3.4-1/FL/Fl_Window.H ****     Makes the window completely fill one or more screens, without any
 545:fltk-1.3.4-1/FL/Fl_Window.H ****     window manager border visible.  You must use fullscreen_off() to
 546:fltk-1.3.4-1/FL/Fl_Window.H ****     undo this. 
 547:fltk-1.3.4-1/FL/Fl_Window.H **** 
 548:fltk-1.3.4-1/FL/Fl_Window.H ****     \note On some platforms, this can result in the keyboard being
 549:fltk-1.3.4-1/FL/Fl_Window.H ****     grabbed. The window may also be recreated, meaning hide() and
 550:fltk-1.3.4-1/FL/Fl_Window.H ****     show() will be called.
 551:fltk-1.3.4-1/FL/Fl_Window.H **** 
 552:fltk-1.3.4-1/FL/Fl_Window.H ****     \see void Fl_Window::fullscreen_screens()
 553:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 554:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen();
 555:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 556:fltk-1.3.4-1/FL/Fl_Window.H ****     Turns off any side effects of fullscreen()
 557:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 558:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_off();
 559:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 560:fltk-1.3.4-1/FL/Fl_Window.H ****     Turns off any side effects of fullscreen() and does 
 561:fltk-1.3.4-1/FL/Fl_Window.H ****     resize(x,y,w,h).
 562:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 563:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_off(int X,int Y,int W,int H);
 564:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 565:fltk-1.3.4-1/FL/Fl_Window.H ****     Returns non zero if FULLSCREEN flag is set, 0 otherwise. 
 566:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 567:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int fullscreen_active() const { return flags() & FULLSCREEN; }
 568:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 569:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets which screens should be used when this window is in fullscreen
 570:fltk-1.3.4-1/FL/Fl_Window.H ****     mode. The window will be resized to the top of the screen with index
 571:fltk-1.3.4-1/FL/Fl_Window.H ****     \p top, the bottom of the screen with index \p bottom, etc. 
 572:fltk-1.3.4-1/FL/Fl_Window.H **** 
 573:fltk-1.3.4-1/FL/Fl_Window.H ****     If this method is never called, or if any argument is < 0, then the
 574:fltk-1.3.4-1/FL/Fl_Window.H ****     window will be resized to fill the screen it is currently on.
 575:fltk-1.3.4-1/FL/Fl_Window.H **** 
 576:fltk-1.3.4-1/FL/Fl_Window.H ****     \see void Fl_Window::fullscreen()
 577:fltk-1.3.4-1/FL/Fl_Window.H ****     */
 578:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_screens(int top, int bottom, int left, int right);
 579:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 580:fltk-1.3.4-1/FL/Fl_Window.H ****     Iconifies the window.  If you call this when shown() is false
 581:fltk-1.3.4-1/FL/Fl_Window.H ****     it will show() it as an icon.  If the window is already
 582:fltk-1.3.4-1/FL/Fl_Window.H ****     iconified this does nothing.
 583:fltk-1.3.4-1/FL/Fl_Window.H **** 
 584:fltk-1.3.4-1/FL/Fl_Window.H ****     Call show() to restore the window.
 585:fltk-1.3.4-1/FL/Fl_Window.H **** 
 586:fltk-1.3.4-1/FL/Fl_Window.H ****     When a window is iconified/restored (either by these calls or by the
 587:fltk-1.3.4-1/FL/Fl_Window.H ****     user) the handle() method is called with FL_HIDE and 
 588:fltk-1.3.4-1/FL/Fl_Window.H ****     FL_SHOW events and visible() is turned on and off.
 589:fltk-1.3.4-1/FL/Fl_Window.H **** 
 590:fltk-1.3.4-1/FL/Fl_Window.H ****     There is no way to control what is drawn in the icon except with the
 591:fltk-1.3.4-1/FL/Fl_Window.H ****     string passed to Fl_Window::xclass().  You should not rely on
 592:fltk-1.3.4-1/FL/Fl_Window.H ****     window managers displaying the icons.
 593:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 594:fltk-1.3.4-1/FL/Fl_Window.H ****   void iconize();
 595:fltk-1.3.4-1/FL/Fl_Window.H **** 
 596:fltk-1.3.4-1/FL/Fl_Window.H ****   int x_root() const ;
 597:fltk-1.3.4-1/FL/Fl_Window.H ****   int y_root() const ;
 598:fltk-1.3.4-1/FL/Fl_Window.H **** 
 599:fltk-1.3.4-1/FL/Fl_Window.H ****  static Fl_Window *current();
 600:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 601:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets things up so that the drawing functions in <FL/fl_draw.H> will go
 602:fltk-1.3.4-1/FL/Fl_Window.H ****     into this window. This is useful for incremental update of windows, such
 603:fltk-1.3.4-1/FL/Fl_Window.H ****     as in an idle callback, which will make your program behave much better
 604:fltk-1.3.4-1/FL/Fl_Window.H ****     if it draws a slow graphic. <B>Danger: incremental update is very hard to
 605:fltk-1.3.4-1/FL/Fl_Window.H ****     debug and maintain!</B>
 606:fltk-1.3.4-1/FL/Fl_Window.H **** 
 607:fltk-1.3.4-1/FL/Fl_Window.H ****     This method only works for the Fl_Window and Fl_Gl_Window derived classes.
 608:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 609:fltk-1.3.4-1/FL/Fl_Window.H ****   void make_current();
 610:fltk-1.3.4-1/FL/Fl_Window.H **** 
 611:fltk-1.3.4-1/FL/Fl_Window.H ****   // Note: Doxygen docs in Fl_Widget.H to avoid redundancy.
 612:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual Fl_Window* as_window() { return this; }
  69              		.loc 3 612 0
  70              		.cfi_startproc
  71              	.LVL2:
  72              		.loc 3 612 0
  73 0000 4889F8   		movq	%rdi, %rax
  74 0003 C3       		ret
  75              		.cfi_endproc
  76              	.LFE305:
  78              		.section	.text.unlikely._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  79              	.LCOLDE2:
  80              		.section	.text._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  81              	.LHOTE2:
  82              		.section	.text.unlikely._ZN10menuwindowD2Ev,"ax",@progbits
  83              		.align 2
  84              	.LCOLDB3:
  85              		.section	.text._ZN10menuwindowD2Ev,"ax",@progbits
  86              	.LHOTB3:
  87              		.align 2
  88              		.p2align 4,,15
  89              		.globl	_ZN10menuwindowD2Ev
  91              	_ZN10menuwindowD2Ev:
  92              	.LFB568:
  93              		.file 4 "fltk-1.3.4-1/src/Fl_Menu.cxx"
   1:fltk-1.3.4-1/src/Fl_Menu.cxx ****    1              		.file	"Fl_Menu.cxx"
   2:fltk-1.3.4-1/src/Fl_Menu.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Menu.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Menu.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
   5:fltk-1.3.4-1/src/Fl_Menu.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Menu.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Menu.cxx ****    7              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
   8:fltk-1.3.4-1/src/Fl_Menu.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Menu.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Menu.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Menu.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
  12:fltk-1.3.4-1/src/Fl_Menu.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Menu.cxx ****   13              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
  14:fltk-1.3.4-1/src/Fl_Menu.cxx ****   14              		.weak	_ZN9Fl_Widget12as_gl_windowEv
  15:fltk-1.3.4-1/src/Fl_Menu.cxx ****   16              	_ZN9Fl_Widget12as_gl_windowEv:
  16:fltk-1.3.4-1/src/Fl_Menu.cxx ****   17              	.LFB234:
  17:fltk-1.3.4-1/src/Fl_Menu.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Menu.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Menu.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Menu.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Menu.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Menu.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Menu.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Menu.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Menu.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Menu.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Menu.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Menu.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Menu.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Menu.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Menu.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Menu.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Menu.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Menu.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Menu.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Menu.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Menu.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Menu.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Menu.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Menu.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Menu.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Menu.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Menu.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Menu.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Menu.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Menu.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Menu.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Menu.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Menu.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Menu.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Menu.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Menu.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Menu.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Menu.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Menu.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Menu.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Menu.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Menu.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Menu.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Menu.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Menu.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Menu.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Menu.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Menu.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Menu.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Menu.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Menu.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Menu.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Menu.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Menu.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Menu.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Menu.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Menu.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Menu.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Menu.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Menu.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Menu.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Menu.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Menu.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Menu.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Menu.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Menu.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Menu.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Menu.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Menu.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Menu.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Menu.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Menu.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Menu.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Menu.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Menu.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Menu.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Menu.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Menu.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Menu.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Menu.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Menu.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Menu.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Menu.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Menu.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Menu.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Menu.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Menu.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Menu.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Menu.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Menu.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Menu.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Menu.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Menu.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Menu.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Menu.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Menu.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Menu.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Menu.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Menu.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Menu.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Menu.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Menu.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Menu.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Menu.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Menu.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Menu.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Menu.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Menu.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Menu.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Menu.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Menu.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Menu.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Menu.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Menu.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Menu.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Menu.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Menu.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Menu.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Menu.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Menu.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Menu.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Menu.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Menu.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Menu.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Menu.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Menu.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Menu.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Menu.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Menu.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Menu.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Menu.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Menu.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Menu.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Menu.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Menu.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Menu.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Menu.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Menu.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Menu.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Menu.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Menu.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Menu.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Menu.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Menu.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Menu.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Menu.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Menu.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Menu.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Menu.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Menu.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Menu.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Menu.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Menu.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Menu.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Menu.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Menu.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Menu.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Menu.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Menu.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Menu.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Menu.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Menu.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Menu.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Menu.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Menu.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Menu.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Menu.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Menu.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Menu.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Menu.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Menu.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Menu.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Menu.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Menu.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Menu.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Menu.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Menu.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Menu.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Menu.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Menu.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Menu.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Menu.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Menu.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Menu.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Menu.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Menu.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Menu.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Menu.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Menu.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Menu.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Menu.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Menu.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Menu.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Menu.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Menu.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Menu.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Menu.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Menu.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Menu.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Menu.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Menu.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Menu.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Menu.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Menu.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Menu.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Menu.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Menu.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Menu.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Menu.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Menu.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Menu.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Menu.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Menu.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Menu.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Menu.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Menu.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Menu.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Menu.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Menu.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Menu.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Menu.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Menu.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Menu.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Menu.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Menu.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Menu.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Menu.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Menu.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Menu.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Menu.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Menu.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Menu.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Menu.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Menu.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Menu.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Menu.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Menu.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Menu.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Menu.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Menu.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Menu.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Menu.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Menu.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Menu.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Menu.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Menu.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Menu.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Menu.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Menu.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Menu.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Menu.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Menu.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Menu.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Menu.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Menu.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Menu.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Menu.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Menu.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Menu.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Menu.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Menu.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Menu.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Menu.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Menu.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Menu.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Menu.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Menu.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Menu.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Menu.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Menu.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Menu.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Menu.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Menu.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Menu.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Menu.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Menu.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Menu.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Menu.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Menu.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Menu.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Menu.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Menu.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Menu.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Menu.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Menu.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Menu.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Menu.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Menu.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Menu.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Menu.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Menu.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Menu.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Menu.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Menu.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Menu.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Menu.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Menu.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Menu.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Menu.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Menu.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Menu.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Menu.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Menu.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Menu.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Menu.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Menu.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Menu.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Menu.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Menu.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Menu.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Menu.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Menu.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Menu.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Menu.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Menu.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Menu.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Menu.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Menu.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Menu.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Menu.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Menu.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Menu.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Menu.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Menu.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Menu.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Menu.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Menu.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Menu.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Menu.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Menu.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Menu.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Menu.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Menu.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Menu.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Menu.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Menu.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Menu.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Menu.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Menu.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Menu.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Menu.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Menu.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Menu.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Menu.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Menu.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Menu.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Menu.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Menu.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Menu.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Menu.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Menu.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Menu.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Menu.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Menu.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Menu.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Menu.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Menu.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Menu.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Menu.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Menu.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Menu.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Menu.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Menu.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Menu.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Menu.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Menu.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Menu.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Menu.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Menu.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Menu.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Menu.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Menu.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Menu.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Menu.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Menu.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Menu.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Menu.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Menu.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Menu.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Menu.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Menu.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Menu.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Menu.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Menu.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Menu.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Menu.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Menu.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Menu.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Menu.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Menu.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Menu.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Menu.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Menu.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Menu.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Menu.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Menu.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Menu.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Menu.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Menu.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Menu.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Menu.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Menu.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Menu.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Menu.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Menu.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  94              		.loc 4 424 0
  95              		.cfi_startproc
  96              	.LVL3:
  97 0000 53       		pushq	%rbx
  98              		.cfi_def_cfa_offset 16
  99              		.cfi_offset 3, -16
 100              		.loc 4 424 0
 101 0001 4889FB   		movq	%rdi, %rbx
 102              	.LBB469:
 103 0004 48C70700 		movq	$_ZTV10menuwindow+16, (%rdi)
 103      000000
 425:fltk-1.3.4-1/src/Fl_Menu.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 104              		.loc 4 425 0
 105 000b E8000000 		call	_ZN14Fl_Menu_Window4hideEv
 105      00
 106              	.LVL4:
 426:fltk-1.3.4-1/src/Fl_Menu.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 107              		.loc 4 426 0
 108 0010 488BBBF0 		movq	240(%rbx), %rdi
 108      000000
 109 0017 4885FF   		testq	%rdi, %rdi
 110 001a 7406     		je	.L5
 111              		.loc 4 426 0 is_stmt 0 discriminator 1
 112 001c 488B07   		movq	(%rdi), %rax
 113 001f FF5008   		call	*8(%rax)
 114              	.LVL5:
 115              	.L5:
 424:fltk-1.3.4-1/src/Fl_Menu.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 116              		.loc 4 424 0 is_stmt 1
 117 0022 4889DF   		movq	%rbx, %rdi
 118              	.LBE469:
 427:fltk-1.3.4-1/src/Fl_Menu.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 119              		.loc 4 427 0
 120 0025 5B       		popq	%rbx
 121              		.cfi_def_cfa_offset 8
 122              	.LVL6:
 123              	.LBB470:
 424:fltk-1.3.4-1/src/Fl_Menu.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 124              		.loc 4 424 0
 125 0026 E9000000 		jmp	_ZN14Fl_Menu_WindowD2Ev
 125      00
 126              	.LVL7:
 127              	.LBE470:
 128              		.cfi_endproc
 129              	.LFE568:
 131              		.section	.text.unlikely._ZN10menuwindowD2Ev
 132              	.LCOLDE3:
 133              		.section	.text._ZN10menuwindowD2Ev
 134              	.LHOTE3:
 135              		.globl	_ZN10menuwindowD1Ev
 136              		.set	_ZN10menuwindowD1Ev,_ZN10menuwindowD2Ev
 137              		.section	.text.unlikely._ZN9menutitleD2Ev,"axG",@progbits,_ZN9menutitleD5Ev,comdat
 138              		.align 2
 139              	.LCOLDB4:
 140              		.section	.text._ZN9menutitleD2Ev,"axG",@progbits,_ZN9menutitleD5Ev,comdat
 141              	.LHOTB4:
 142              		.align 2
 143              		.p2align 4,,15
 144              		.weak	_ZN9menutitleD2Ev
 146              	_ZN9menutitleD2Ev:
 147              	.LFB592:
 111:fltk-1.3.4-1/src/Fl_Menu.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 148              		.loc 4 111 0
 149              		.cfi_startproc
 150              	.LVL8:
 151              	.LBB471:
 111:fltk-1.3.4-1/src/Fl_Menu.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 152              		.loc 4 111 0
 153 0000 48C70700 		movq	$_ZTV9menutitle+16, (%rdi)
 153      000000
 154 0007 E9000000 		jmp	_ZN14Fl_Menu_WindowD2Ev
 154      00
 155              	.LVL9:
 156              	.LBE471:
 157              		.cfi_endproc
 158              	.LFE592:
 160              		.section	.text.unlikely._ZN9menutitleD2Ev,"axG",@progbits,_ZN9menutitleD5Ev,comdat
 161              	.LCOLDE4:
 162              		.section	.text._ZN9menutitleD2Ev,"axG",@progbits,_ZN9menutitleD5Ev,comdat
 163              	.LHOTE4:
 164              		.weak	_ZN9menutitleD1Ev
 165              		.set	_ZN9menutitleD1Ev,_ZN9menutitleD2Ev
 166              		.section	.text.unlikely._ZN9menutitleD0Ev,"axG",@progbits,_ZN9menutitleD5Ev,comdat
 167              		.align 2
 168              	.LCOLDB5:
 169              		.section	.text._ZN9menutitleD0Ev,"axG",@progbits,_ZN9menutitleD5Ev,comdat
 170              	.LHOTB5:
 171              		.align 2
 172              		.p2align 4,,15
 173              		.weak	_ZN9menutitleD0Ev
 175              	_ZN9menutitleD0Ev:
 176              	.LFB594:
 111:fltk-1.3.4-1/src/Fl_Menu.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 177              		.loc 4 111 0
 178              		.cfi_startproc
 179              	.LVL10:
 180 0000 53       		pushq	%rbx
 181              		.cfi_def_cfa_offset 16
 182              		.cfi_offset 3, -16
 111:fltk-1.3.4-1/src/Fl_Menu.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 183              		.loc 4 111 0
 184 0001 4889FB   		movq	%rdi, %rbx
 185              	.LBB472:
 186              	.LBB473:
 187 0004 48C70700 		movq	$_ZTV9menutitle+16, (%rdi)
 187      000000
 188 000b E8000000 		call	_ZN14Fl_Menu_WindowD2Ev
 188      00
 189              	.LVL11:
 190              	.LBE473:
 191              	.LBE472:
 192 0010 4889DF   		movq	%rbx, %rdi
 193 0013 5B       		popq	%rbx
 194              		.cfi_def_cfa_offset 8
 195              	.LVL12:
 196 0014 E9000000 		jmp	_ZdlPv
 196      00
 197              	.LVL13:
 198              		.cfi_endproc
 199              	.LFE594:
 201              		.section	.text.unlikely._ZN9menutitleD0Ev,"axG",@progbits,_ZN9menutitleD5Ev,comdat
 202              	.LCOLDE5:
 203              		.section	.text._ZN9menutitleD0Ev,"axG",@progbits,_ZN9menutitleD5Ev,comdat
 204              	.LHOTE5:
 205              		.section	.text.unlikely._ZN10menuwindowD0Ev,"ax",@progbits
 206              		.align 2
 207              	.LCOLDB6:
 208              		.section	.text._ZN10menuwindowD0Ev,"ax",@progbits
 209              	.LHOTB6:
 210              		.align 2
 211              		.p2align 4,,15
 212              		.globl	_ZN10menuwindowD0Ev
 214              	_ZN10menuwindowD0Ev:
 215              	.LFB570:
 424:fltk-1.3.4-1/src/Fl_Menu.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 216              		.loc 4 424 0
 217              		.cfi_startproc
 218              	.LVL14:
 219 0000 53       		pushq	%rbx
 220              		.cfi_def_cfa_offset 16
 221              		.cfi_offset 3, -16
 424:fltk-1.3.4-1/src/Fl_Menu.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 222              		.loc 4 424 0
 223 0001 4889FB   		movq	%rdi, %rbx
 224              		.loc 4 427 0
 225 0004 E8000000 		call	_ZN10menuwindowD1Ev
 225      00
 226              	.LVL15:
 227 0009 4889DF   		movq	%rbx, %rdi
 228 000c 5B       		popq	%rbx
 229              		.cfi_def_cfa_offset 8
 230              	.LVL16:
 231 000d E9000000 		jmp	_ZdlPv
 231      00
 232              	.LVL17:
 233              		.cfi_endproc
 234              	.LFE570:
 236              		.section	.text.unlikely._ZN10menuwindowD0Ev
 237              	.LCOLDE6:
 238              		.section	.text._ZN10menuwindowD0Ev
 239              	.LHOTE6:
 240              		.section	.text.unlikely._ZNK12Fl_Menu_Item4sizeEv,"ax",@progbits
 241              		.align 2
 242              	.LCOLDB7:
 243              		.section	.text._ZNK12Fl_Menu_Item4sizeEv,"ax",@progbits
 244              	.LHOTB7:
 245              		.align 2
 246              		.p2align 4,,15
 247              		.globl	_ZNK12Fl_Menu_Item4sizeEv
 249              	_ZNK12Fl_Menu_Item4sizeEv:
 250              	.LFB556:
  58:fltk-1.3.4-1/src/Fl_Menu.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 251              		.loc 4 58 0
 252              		.cfi_startproc
 253              	.LVL18:
  59:fltk-1.3.4-1/src/Fl_Menu.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 254              		.loc 4 59 0
 255 0000 4889F8   		movq	%rdi, %rax
  60:fltk-1.3.4-1/src/Fl_Menu.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 256              		.loc 4 60 0
 257 0003 31C9     		xorl	%ecx, %ecx
 258 0005 EB19     		jmp	.L20
 259              	.LVL19:
 260 0007 660F1F84 		.p2align 4,,10
 260      00000000 
 260      00
 261              		.p2align 3
 262              	.L17:
  65:fltk-1.3.4-1/src/Fl_Menu.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 263              		.loc 4 65 0
 264 0010 8B5020   		movl	32(%rax), %edx
 265 0013 83E240   		andl	$64, %edx
  66:fltk-1.3.4-1/src/Fl_Menu.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 266              		.loc 4 66 0
 267 0016 83FA01   		cmpl	$1, %edx
 268 0019 83D9FF   		sbbl	$-1, %ecx
 269              	.LVL20:
 270              	.L19:
  68:fltk-1.3.4-1/src/Fl_Menu.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 271              		.loc 4 68 0
 272 001c 4883C038 		addq	$56, %rax
 273              	.LVL21:
 274              	.L20:
  62:fltk-1.3.4-1/src/Fl_Menu.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 275              		.loc 4 62 0
 276 0020 48833800 		cmpq	$0, (%rax)
 277 0024 75EA     		jne	.L17
  63:fltk-1.3.4-1/src/Fl_Menu.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 278              		.loc 4 63 0
 279 0026 85C9     		testl	%ecx, %ecx
 280 0028 7406     		je	.L24
  64:fltk-1.3.4-1/src/Fl_Menu.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
 281              		.loc 4 64 0
 282 002a 83E901   		subl	$1, %ecx
 283              	.LVL22:
 284 002d EBED     		jmp	.L19
 285 002f 90       		.p2align 4,,10
 286              		.p2align 3
 287              	.L24:
  63:fltk-1.3.4-1/src/Fl_Menu.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 288              		.loc 4 63 0 discriminator 1
 289 0030 4829F8   		subq	%rdi, %rax
 290              	.LVL23:
 291 0033 48C1F803 		sarq	$3, %rax
 292 0037 69C0B76D 		imull	$-1227133513, %eax, %eax
 292      DBB6
 293 003d 83C001   		addl	$1, %eax
  70:fltk-1.3.4-1/src/Fl_Menu.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 294              		.loc 4 70 0 discriminator 1
 295 0040 C3       		ret
 296              		.cfi_endproc
 297              	.LFE556:
 299              		.section	.text.unlikely._ZNK12Fl_Menu_Item4sizeEv
 300              	.LCOLDE7:
 301              		.section	.text._ZNK12Fl_Menu_Item4sizeEv
 302              	.LHOTE7:
 303              		.section	.text.unlikely._ZNK12Fl_Menu_Item4nextEi,"ax",@progbits
 304              		.align 2
 305              	.LCOLDB8:
 306              		.section	.text._ZNK12Fl_Menu_Item4nextEi,"ax",@progbits
 307              	.LHOTB8:
 308              		.align 2
 309              		.p2align 4,,15
 310              		.globl	_ZNK12Fl_Menu_Item4nextEi
 312              	_ZNK12Fl_Menu_Item4nextEi:
 313              	.LFB558:
  94:fltk-1.3.4-1/src/Fl_Menu.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 314              		.loc 4 94 0
 315              		.cfi_startproc
 316              	.LVL24:
  95:fltk-1.3.4-1/src/Fl_Menu.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 317              		.loc 4 95 0
 318 0000 85F6     		testl	%esi, %esi
 319 0002 787B     		js	.L37
 320              	.LVL25:
  97:fltk-1.3.4-1/src/Fl_Menu.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 321              		.loc 4 97 0
 322 0004 F6472010 		testb	$16, 32(%rdi)
 323 0008 746D     		je	.L27
  97:fltk-1.3.4-1/src/Fl_Menu.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 324              		.loc 4 97 0 is_stmt 0 discriminator 1
 325 000a 83C601   		addl	$1, %esi
 326              	.LVL26:
 327              	.L28:
  94:fltk-1.3.4-1/src/Fl_Menu.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 328              		.loc 4 94 0 is_stmt 1
 329 000d 4889F8   		movq	%rdi, %rax
 330              	.LVL27:
 331              		.p2align 4,,10
 332              		.p2align 3
 333              	.L29:
 334 0010 488D5038 		leaq	56(%rax), %rdx
 335 0014 31C9     		xorl	%ecx, %ecx
 336 0016 EB0F     		jmp	.L30
 337              	.LVL28:
 338 0018 0F1F8400 		.p2align 4,,10
 338      00000000 
 339              		.p2align 3
 340              	.L49:
 341              	.LBB474:
 342              	.LBB475:
  81:fltk-1.3.4-1/src/Fl_Menu.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 343              		.loc 4 81 0
 344 0020 83C101   		addl	$1, %ecx
 345              	.LVL29:
 346              	.L34:
 347 0023 4883C238 		addq	$56, %rdx
 348              	.LVL30:
 349              	.L30:
  77:fltk-1.3.4-1/src/Fl_Menu.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 350              		.loc 4 77 0
 351 0027 48837AC8 		cmpq	$0, -56(%rdx)
 351      00
 352 002c 488D7AC8 		leaq	-56(%rdx), %rdi
 353              	.LVL31:
 354 0030 4889D0   		movq	%rdx, %rax
 355 0033 742B     		je	.L48
  80:fltk-1.3.4-1/src/Fl_Menu.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 356              		.loc 4 80 0
 357 0035 F642E840 		testb	$64, -24(%rdx)
 358 0039 75E5     		jne	.L49
 359              	.LVL32:
  76:fltk-1.3.4-1/src/Fl_Menu.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 360              		.loc 4 76 0
 361 003b 85C9     		testl	%ecx, %ecx
 362 003d 75E4     		jne	.L34
 363              	.L50:
 364              	.LVL33:
 365              	.LBE475:
 366              	.LBE474:
 100:fltk-1.3.4-1/src/Fl_Menu.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 367              		.loc 4 100 0
 368 003f F6475810 		testb	$16, 88(%rdi)
 369 0043 740B     		je	.L32
 100:fltk-1.3.4-1/src/Fl_Menu.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 370              		.loc 4 100 0 is_stmt 0 discriminator 2
 371 0045 48837F38 		cmpq	$0, 56(%rdi)
 371      00
 372 004a 75C4     		jne	.L29
 373 004c 0F1F4000 		.p2align 4,,10
 374              		.p2align 3
 375              	.L32:
 376              	.LVL34:
  98:fltk-1.3.4-1/src/Fl_Menu.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 377              		.loc 4 98 0 is_stmt 1
 378 0050 83EE01   		subl	$1, %esi
 379              	.LVL35:
 380 0053 75BB     		jne	.L29
 381              	.LVL36:
 382              	.L51:
 103:fltk-1.3.4-1/src/Fl_Menu.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 383              		.loc 4 103 0
 384 0055 F3C3     		rep ret
 385              	.LVL37:
 386 0057 660F1F84 		.p2align 4,,10
 386      00000000 
 386      00
 387              		.p2align 3
 388              	.L48:
 389              	.LBB478:
 390              	.LBB476:
  78:fltk-1.3.4-1/src/Fl_Menu.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 391              		.loc 4 78 0
 392 0060 85C9     		testl	%ecx, %ecx
 393 0062 7409     		je	.L39
  79:fltk-1.3.4-1/src/Fl_Menu.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 394              		.loc 4 79 0
 395 0064 83E901   		subl	$1, %ecx
 396              	.LVL38:
  76:fltk-1.3.4-1/src/Fl_Menu.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 397              		.loc 4 76 0
 398 0067 85C9     		testl	%ecx, %ecx
 399 0069 75B8     		jne	.L34
 400 006b EBD2     		jmp	.L50
 401              	.LVL39:
 402              	.L39:
 403              	.LBE476:
 404              	.LBE478:
  98:fltk-1.3.4-1/src/Fl_Menu.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 405              		.loc 4 98 0
 406 006d 83EE01   		subl	$1, %esi
 407              	.LVL40:
 408              	.LBB479:
 409              	.LBB477:
  78:fltk-1.3.4-1/src/Fl_Menu.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 410              		.loc 4 78 0
 411 0070 4889F8   		movq	%rdi, %rax
 412              	.LVL41:
 413              	.LBE477:
 414              	.LBE479:
  98:fltk-1.3.4-1/src/Fl_Menu.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415              		.loc 4 98 0
 416 0073 759B     		jne	.L29
 417              	.LVL42:
 418 0075 EBDE     		jmp	.L51
 419              	.LVL43:
 420              	.L27:
 421 0077 85F6     		testl	%esi, %esi
 422 0079 7592     		jne	.L28
 423 007b 4889F8   		movq	%rdi, %rax
 424 007e C3       		ret
 425              	.LVL44:
 426              	.L37:
  95:fltk-1.3.4-1/src/Fl_Menu.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 427              		.loc 4 95 0
 428 007f 31C0     		xorl	%eax, %eax
 429 0081 C3       		ret
 430              		.cfi_endproc
 431              	.LFE558:
 433              		.section	.text.unlikely._ZNK12Fl_Menu_Item4nextEi
 434              	.LCOLDE8:
 435              		.section	.text._ZNK12Fl_Menu_Item4nextEi
 436              	.LHOTE8:
 437              		.section	.text.unlikely._ZL7forwardi,"ax",@progbits
 438              	.LCOLDB9:
 439              		.section	.text._ZL7forwardi,"ax",@progbits
 440              	.LHOTB9:
 441              		.p2align 4,,15
 443              	_ZL7forwardi:
 444              	.LFB583:
 428:fltk-1.3.4-1/src/Fl_Menu.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Menu.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Menu.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Menu.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Menu.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Menu.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Menu.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Menu.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Menu.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Menu.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Menu.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Menu.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Menu.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Menu.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Menu.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Menu.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Menu.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Menu.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Menu.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Menu.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Menu.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Menu.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Menu.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Menu.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Menu.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Menu.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Menu.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Menu.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Menu.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Menu.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Menu.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Menu.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Menu.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Menu.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Menu.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Menu.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Menu.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Menu.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Menu.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Menu.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Menu.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Menu.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Menu.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Menu.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Menu.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Menu.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Menu.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Menu.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Menu.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Menu.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Menu.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Menu.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Menu.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Menu.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Menu.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Menu.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Menu.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Menu.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Menu.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Menu.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Menu.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Menu.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Menu.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Menu.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Menu.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Menu.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Menu.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Menu.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Menu.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Menu.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Menu.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Menu.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Menu.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Menu.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Menu.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Menu.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Menu.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Menu.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Menu.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Menu.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Menu.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Menu.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Menu.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Menu.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Menu.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Menu.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Menu.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Menu.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Menu.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Menu.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_Menu.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Menu.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Menu.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Menu.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Menu.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Menu.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Menu.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Menu.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Menu.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Menu.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Menu.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Menu.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_Menu.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Menu.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_Menu.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Menu.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_Menu.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_Menu.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Menu.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_Menu.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Menu.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Menu.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Menu.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Menu.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_Menu.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_Menu.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Menu.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/Fl_Menu.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_Menu.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Menu.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Menu.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_Menu.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Menu.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Menu.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Menu.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Menu.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Menu.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Menu.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Menu.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Menu.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Menu.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Menu.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Menu.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Menu.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Menu.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Menu.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Menu.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_Menu.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Menu.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 567:fltk-1.3.4-1/src/Fl_Menu.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_Menu.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/Fl_Menu.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Menu.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_Menu.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Menu.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Menu.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 574:fltk-1.3.4-1/src/Fl_Menu.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Menu.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Menu.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_Menu.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Menu.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_Menu.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_Menu.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Menu.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_Menu.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_Menu.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_Menu.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Menu.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/Fl_Menu.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_Menu.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 588:fltk-1.3.4-1/src/Fl_Menu.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_Menu.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/Fl_Menu.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_Menu.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Menu.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/Fl_Menu.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_Menu.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_Menu.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Menu.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Menu.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Menu.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Menu.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Menu.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Menu.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Menu.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_Menu.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_Menu.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_Menu.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_Menu.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_Menu.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_Menu.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/Fl_Menu.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Menu.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Menu.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_Menu.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_Menu.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_Menu.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/Fl_Menu.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/Fl_Menu.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_Menu.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Menu.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/Fl_Menu.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/Fl_Menu.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/Fl_Menu.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_Menu.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/Fl_Menu.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_Menu.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 625:fltk-1.3.4-1/src/Fl_Menu.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_Menu.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_Menu.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 628:fltk-1.3.4-1/src/Fl_Menu.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 629:fltk-1.3.4-1/src/Fl_Menu.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_Menu.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_Menu.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 445              		.loc 4 631 0
 446              		.cfi_startproc
 447              	.LVL45:
 448 0000 53       		pushq	%rbx
 449              		.cfi_def_cfa_offset 16
 450              		.cfi_offset 3, -16
 632:fltk-1.3.4-1/src/Fl_Menu.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 451              		.loc 4 632 0
 452 0001 488B1D00 		movq	_ZL1p(%rip), %rbx
 452      000000
 453              	.LVL46:
 633:fltk-1.3.4-1/src/Fl_Menu.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 634:fltk-1.3.4-1/src/Fl_Menu.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635:fltk-1.3.4-1/src/Fl_Menu.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 454              		.loc 4 635 0
 455 0008 83FFFF   		cmpl	$-1, %edi
 456 000b B8000000 		movl	$0, %eax
 456      00
 631:fltk-1.3.4-1/src/Fl_Menu.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 457              		.loc 4 631 0
 458 0010 4189FB   		movl	%edi, %r11d
 459              		.loc 4 635 0
 460 0013 440F44D8 		cmove	%eax, %r11d
 461              	.LVL47:
 636:fltk-1.3.4-1/src/Fl_Menu.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_Menu.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462              		.loc 4 637 0
 463 0017 443B5B08 		cmpl	8(%rbx), %r11d
 636:fltk-1.3.4-1/src/Fl_Menu.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 464              		.loc 4 636 0
 465 001b 4963C3   		movslq	%r11d, %rax
 466 001e 4C8B4CC3 		movq	16(%rbx,%rax,8), %r9
 466      10
 467              	.LVL48:
 468              		.loc 4 637 0
 469 0023 7453     		je	.L62
 470              		.loc 4 637 0 is_stmt 0 discriminator 2
 471 0025 458B8100 		movl	256(%r9), %r8d
 471      010000
 472              	.L55:
 473 002c 458B91FC 		movl	252(%r9), %r10d
 473      000000
 474 0033 EB18     		jmp	.L57
 475              	.LVL49:
 476              		.p2align 4,,10
 477 0035 0F1F00   		.p2align 3
 478              	.L64:
 479              	.LBB480:
 638:fltk-1.3.4-1/src/Fl_Menu.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 639:fltk-1.3.4-1/src/Fl_Menu.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 480              		.loc 4 639 0 is_stmt 1
 481 0038 498BB910 		movq	272(%r9), %rdi
 481      010000
 482 003f 4489C6   		movl	%r8d, %esi
 483 0042 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 483      00
 484              	.LVL50:
 640:fltk-1.3.4-1/src/Fl_Menu.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 485              		.loc 4 640 0
 486 0047 F6402011 		testb	$17, 32(%rax)
 487 004b 7413     		je	.L63
 488              	.LVL51:
 489              	.L57:
 490              	.LBE480:
 638:fltk-1.3.4-1/src/Fl_Menu.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 491              		.loc 4 638 0
 492 004d 4183C001 		addl	$1, %r8d
 493              	.LVL52:
 494 0051 4539D0   		cmpl	%r10d, %r8d
 495 0054 7CE2     		jl	.L64
 641:fltk-1.3.4-1/src/Fl_Menu.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 642:fltk-1.3.4-1/src/Fl_Menu.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 496              		.loc 4 642 0
 497 0056 31C0     		xorl	%eax, %eax
 643:fltk-1.3.4-1/src/Fl_Menu.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 498              		.loc 4 643 0
 499 0058 5B       		popq	%rbx
 500              		.cfi_remember_state
 501              		.cfi_def_cfa_offset 8
 502              	.LVL53:
 503 0059 C3       		ret
 504              	.LVL54:
 505 005a 660F1F44 		.p2align 4,,10
 505      0000
 506              		.p2align 3
 507              	.L63:
 508              		.cfi_restore_state
 509              	.LBB485:
 510              	.LBB481:
 511              	.LBB482:
 619:fltk-1.3.4-1/src/Fl_Menu.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 512              		.loc 4 619 0
 513 0060 488903   		movq	%rax, (%rbx)
 620:fltk-1.3.4-1/src/Fl_Menu.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 514              		.loc 4 620 0
 515 0063 44895B08 		movl	%r11d, 8(%rbx)
 516              	.LBE482:
 517              	.LBE481:
 640:fltk-1.3.4-1/src/Fl_Menu.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 518              		.loc 4 640 0
 519 0067 B8010000 		movl	$1, %eax
 519      00
 520              	.LVL55:
 521              	.LBB484:
 522              	.LBB483:
 621:fltk-1.3.4-1/src/Fl_Menu.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 523              		.loc 4 621 0
 524 006c 4489430C 		movl	%r8d, 12(%rbx)
 525              	.LVL56:
 526              	.LBE483:
 527              	.LBE484:
 528              	.LBE485:
 529              		.loc 4 643 0
 530 0070 5B       		popq	%rbx
 531              		.cfi_remember_state
 532              		.cfi_def_cfa_offset 8
 533              	.LVL57:
 534 0071 C3       		ret
 535              	.LVL58:
 536              		.p2align 4,,10
 537 0072 660F1F44 		.p2align 3
 537      0000
 538              	.L62:
 539              		.cfi_restore_state
 637:fltk-1.3.4-1/src/Fl_Menu.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 540              		.loc 4 637 0 discriminator 1
 541 0078 448B430C 		movl	12(%rbx), %r8d
 542 007c EBAE     		jmp	.L55
 543              		.cfi_endproc
 544              	.LFE583:
 546              		.section	.text.unlikely._ZL7forwardi
 547              	.LCOLDE9:
 548              		.section	.text._ZL7forwardi
 549              	.LHOTE9:
 550              		.section	.text.unlikely._ZL8backwardi,"ax",@progbits
 551              	.LCOLDB10:
 552              		.section	.text._ZL8backwardi,"ax",@progbits
 553              	.LHOTB10:
 554              		.p2align 4,,15
 556              	_ZL8backwardi:
 557              	.LFB584:
 644:fltk-1.3.4-1/src/Fl_Menu.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 645:fltk-1.3.4-1/src/Fl_Menu.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 558              		.loc 4 645 0
 559              		.cfi_startproc
 560              	.LVL59:
 646:fltk-1.3.4-1/src/Fl_Menu.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 561              		.loc 4 646 0
 562 0000 4C8B1500 		movq	_ZL1p(%rip), %r10
 562      000000
 563              	.LVL60:
 645:fltk-1.3.4-1/src/Fl_Menu.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 564              		.loc 4 645 0
 565 0007 4863C7   		movslq	%edi, %rax
 566 000a 4989C3   		movq	%rax, %r11
 647:fltk-1.3.4-1/src/Fl_Menu.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 648:fltk-1.3.4-1/src/Fl_Menu.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 567              		.loc 4 648 0
 568 000d 413B4208 		cmpl	8(%r10), %eax
 647:fltk-1.3.4-1/src/Fl_Menu.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 569              		.loc 4 647 0
 570 0011 4D8B4CC2 		movq	16(%r10,%rax,8), %r9
 570      10
 571              	.LVL61:
 572              		.loc 4 648 0
 573 0016 7450     		je	.L73
 574              		.loc 4 648 0 is_stmt 0 discriminator 2
 575 0018 458B8100 		movl	256(%r9), %r8d
 575      010000
 576              	.LVL62:
 649:fltk-1.3.4-1/src/Fl_Menu.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 577              		.loc 4 649 0 is_stmt 1 discriminator 2
 578 001f 4585C0   		testl	%r8d, %r8d
 579 0022 7921     		jns	.L70
 580 0024 EB4B     		jmp	.L74
 581              	.LVL63:
 582 0026 662E0F1F 		.p2align 4,,10
 582      84000000 
 582      0000
 583              		.p2align 3
 584              	.L76:
 585              	.LBB486:
 650:fltk-1.3.4-1/src/Fl_Menu.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 651:fltk-1.3.4-1/src/Fl_Menu.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 586              		.loc 4 651 0
 587 0030 498BB910 		movq	272(%r9), %rdi
 587      010000
 588 0037 4489C6   		movl	%r8d, %esi
 589 003a E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 589      00
 590              	.LVL64:
 652:fltk-1.3.4-1/src/Fl_Menu.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 591              		.loc 4 652 0
 592 003f F6402011 		testb	$17, 32(%rax)
 593 0043 740B     		je	.L75
 594              	.LVL65:
 595              	.L70:
 596              	.LBE486:
 650:fltk-1.3.4-1/src/Fl_Menu.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 597              		.loc 4 650 0
 598 0045 4183E801 		subl	$1, %r8d
 599              	.LVL66:
 600 0049 79E5     		jns	.L76
 653:fltk-1.3.4-1/src/Fl_Menu.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 654:fltk-1.3.4-1/src/Fl_Menu.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 601              		.loc 4 654 0
 602 004b 31C0     		xorl	%eax, %eax
 655:fltk-1.3.4-1/src/Fl_Menu.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 603              		.loc 4 655 0
 604 004d C3       		ret
 605              	.LVL67:
 606 004e 6690     		.p2align 4,,10
 607              		.p2align 3
 608              	.L75:
 609              	.LBB491:
 610              	.LBB487:
 611              	.LBB488:
 619:fltk-1.3.4-1/src/Fl_Menu.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 612              		.loc 4 619 0
 613 0050 498902   		movq	%rax, (%r10)
 620:fltk-1.3.4-1/src/Fl_Menu.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 614              		.loc 4 620 0
 615 0053 45895A08 		movl	%r11d, 8(%r10)
 616              	.LBE488:
 617              	.LBE487:
 652:fltk-1.3.4-1/src/Fl_Menu.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 618              		.loc 4 652 0
 619 0057 B8010000 		movl	$1, %eax
 619      00
 620              	.LVL68:
 621              	.LBB490:
 622              	.LBB489:
 621:fltk-1.3.4-1/src/Fl_Menu.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623              		.loc 4 621 0
 624 005c 4589420C 		movl	%r8d, 12(%r10)
 625              	.LVL69:
 626              	.LBE489:
 627              	.LBE490:
 652:fltk-1.3.4-1/src/Fl_Menu.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 628              		.loc 4 652 0
 629 0060 C3       		ret
 630              	.LVL70:
 631              		.p2align 4,,10
 632 0061 0F1F8000 		.p2align 3
 632      000000
 633              	.L73:
 634              	.LBE491:
 648:fltk-1.3.4-1/src/Fl_Menu.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 635              		.loc 4 648 0 discriminator 1
 636 0068 458B420C 		movl	12(%r10), %r8d
 637              	.LVL71:
 649:fltk-1.3.4-1/src/Fl_Menu.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 638              		.loc 4 649 0 discriminator 1
 639 006c 4585C0   		testl	%r8d, %r8d
 640 006f 79D4     		jns	.L70
 641              	.L74:
 642 0071 458B81FC 		movl	252(%r9), %r8d
 642      000000
 643              	.LVL72:
 644 0078 EBCB     		jmp	.L70
 645              		.cfi_endproc
 646              	.LFE584:
 648              		.section	.text.unlikely._ZL8backwardi
 649              	.LCOLDE10:
 650              		.section	.text._ZL8backwardi
 651              	.LHOTE10:
 652              		.section	.text.unlikely._ZL7setitemii,"ax",@progbits
 653              	.LCOLDB11:
 654              		.section	.text._ZL7setitemii,"ax",@progbits
 655              	.LHOTB11:
 656              		.p2align 4,,15
 658              	_ZL7setitemii:
 659              	.LFB582:
 624:fltk-1.3.4-1/src/Fl_Menu.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 660              		.loc 4 624 0
 661              		.cfi_startproc
 662              	.LVL73:
 626:fltk-1.3.4-1/src/Fl_Menu.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 663              		.loc 4 626 0
 664 0000 31C0     		xorl	%eax, %eax
 665 0002 85F6     		testl	%esi, %esi
 624:fltk-1.3.4-1/src/Fl_Menu.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 666              		.loc 4 624 0
 667 0004 4189FA   		movl	%edi, %r10d
 668 0007 4189F1   		movl	%esi, %r9d
 625:fltk-1.3.4-1/src/Fl_Menu.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 669              		.loc 4 625 0
 670 000a 4C8B0500 		movq	_ZL1p(%rip), %r8
 670      000000
 671              	.LVL74:
 626:fltk-1.3.4-1/src/Fl_Menu.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 672              		.loc 4 626 0
 673 0011 7814     		js	.L78
 626:fltk-1.3.4-1/src/Fl_Menu.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 674              		.loc 4 626 0 is_stmt 0 discriminator 1
 675 0013 4863C7   		movslq	%edi, %rax
 676 0016 498B44C0 		movq	16(%r8,%rax,8), %rax
 676      10
 677 001b 488BB810 		movq	272(%rax), %rdi
 677      010000
 678              	.LVL75:
 679 0022 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 679      00
 680              	.LVL76:
 681              	.L78:
 626:fltk-1.3.4-1/src/Fl_Menu.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 682              		.loc 4 626 0 discriminator 4
 683 0027 498900   		movq	%rax, (%r8)
 627:fltk-1.3.4-1/src/Fl_Menu.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 684              		.loc 4 627 0 is_stmt 1 discriminator 4
 685 002a 45895008 		movl	%r10d, 8(%r8)
 628:fltk-1.3.4-1/src/Fl_Menu.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 686              		.loc 4 628 0 discriminator 4
 687 002e 4589480C 		movl	%r9d, 12(%r8)
 688 0032 C3       		ret
 689              		.cfi_endproc
 690              	.LFE582:
 692              		.section	.text.unlikely._ZL7setitemii
 693              	.LCOLDE11:
 694              		.section	.text._ZL7setitemii
 695              	.LHOTE11:
 696              		.section	.text.unlikely._ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_,"ax",@progbits
 697              		.align 2
 698              	.LCOLDB12:
 699              		.section	.text._ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_,"ax",@progbits
 700              	.LHOTB12:
 701              		.align 2
 702              		.p2align 4,,15
 703              		.globl	_ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_
 705              	_ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_:
 706              	.LFB559:
 154:fltk-1.3.4-1/src/Fl_Menu.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 707              		.loc 4 154 0
 708              		.cfi_startproc
 709              	.LVL77:
 710 0000 53       		pushq	%rbx
 711              		.cfi_def_cfa_offset 16
 712              		.cfi_offset 3, -16
 713 0001 4889FB   		movq	%rdi, %rbx
 714 0004 4883EC50 		subq	$80, %rsp
 715              		.cfi_def_cfa_offset 96
 154:fltk-1.3.4-1/src/Fl_Menu.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 716              		.loc 4 154 0
 717 0008 64488B04 		movq	%fs:40, %rax
 717      25280000 
 717      00
 718 0011 48894424 		movq	%rax, 72(%rsp)
 718      48
 719 0016 31C0     		xorl	%eax, %eax
 156:fltk-1.3.4-1/src/Fl_Menu.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 720              		.loc 4 156 0
 721 0018 488B07   		movq	(%rdi), %rax
 160:fltk-1.3.4-1/src/Fl_Menu.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 722              		.loc 4 160 0
 723 001b 48837F28 		cmpq	$0, 40(%rdi)
 723      00
 157:fltk-1.3.4-1/src/Fl_Menu.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 724              		.loc 4 157 0
 725 0020 48C74424 		movq	$0, 24(%rsp)
 725      18000000 
 725      00
 158:fltk-1.3.4-1/src/Fl_Menu.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 726              		.loc 4 158 0
 727 0029 48C74424 		movq	$0, 32(%rsp)
 727      20000000 
 727      00
 156:fltk-1.3.4-1/src/Fl_Menu.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 728              		.loc 4 156 0
 729 0032 48894424 		movq	%rax, 16(%rsp)
 729      10
 159:fltk-1.3.4-1/src/Fl_Menu.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 730              		.loc 4 159 0
 731 0037 0FB64724 		movzbl	36(%rdi), %eax
 732 003b 88442438 		movb	%al, 56(%rsp)
 160:fltk-1.3.4-1/src/Fl_Menu.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 733              		.loc 4 160 0
 734 003f 0F848B00 		je	.L81
 734      0000
 160:fltk-1.3.4-1/src/Fl_Menu.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 735              		.loc 4 160 0 is_stmt 0 discriminator 1
 736 0045 8B4728   		movl	40(%rdi), %eax
 737 0048 89442428 		movl	%eax, 40(%rsp)
 161:fltk-1.3.4-1/src/Fl_Menu.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 738              		.loc 4 161 0 is_stmt 1 discriminator 1
 739 004c 8B472C   		movl	44(%rdi), %eax
 740 004f 85C0     		testl	%eax, %eax
 741 0051 0F84A100 		je	.L97
 741      0000
 742              	.L82:
 165:fltk-1.3.4-1/src/Fl_Menu.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 743              		.loc 4 165 0 discriminator 8
 744 0057 488D5424 		leaq	12(%rsp), %rdx
 744      0C
 745              	.LVL78:
 746 005c 4885F6   		testq	%rsi, %rsi
 747 005f 488D7C24 		leaq	16(%rsp), %rdi
 747      10
 748              	.LVL79:
 161:fltk-1.3.4-1/src/Fl_Menu.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 749              		.loc 4 161 0 discriminator 8
 750 0064 8944242C 		movl	%eax, 44(%rsp)
 162:fltk-1.3.4-1/src/Fl_Menu.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 751              		.loc 4 162 0 discriminator 8
 752 0068 C7442430 		movl	$0, 48(%rsp)
 752      00000000 
 165:fltk-1.3.4-1/src/Fl_Menu.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 753              		.loc 4 165 0 discriminator 8
 754 0070 480F45D6 		cmovne	%rsi, %rdx
 755 0074 488D7424 		leaq	8(%rsp), %rsi
 755      08
 756              	.LVL80:
 163:fltk-1.3.4-1/src/Fl_Menu.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 757              		.loc 4 163 0 discriminator 8
 758 0079 C6050000 		movb	$1, fl_draw_shortcut(%rip)
 758      000001
 164:fltk-1.3.4-1/src/Fl_Menu.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 759              		.loc 4 164 0 discriminator 8
 760 0080 C7442408 		movl	$0, 8(%rsp)
 760      00000000 
 761 0088 C744240C 		movl	$0, 12(%rsp)
 761      00000000 
 165:fltk-1.3.4-1/src/Fl_Menu.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 762              		.loc 4 165 0 discriminator 8
 763 0090 E8000000 		call	_ZNK8Fl_Label7measureERiS0_
 763      00
 764              	.LVL81:
 167:fltk-1.3.4-1/src/Fl_Menu.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 765              		.loc 4 167 0 discriminator 8
 766 0095 F643200A 		testb	$10, 32(%rbx)
 166:fltk-1.3.4-1/src/Fl_Menu.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 767              		.loc 4 166 0 discriminator 8
 768 0099 C6050000 		movb	$0, fl_draw_shortcut(%rip)
 768      000000
 769 00a0 8B442408 		movl	8(%rsp), %eax
 167:fltk-1.3.4-1/src/Fl_Menu.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 770              		.loc 4 167 0 discriminator 8
 771 00a4 740A     		je	.L88
 167:fltk-1.3.4-1/src/Fl_Menu.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 772              		.loc 4 167 0 is_stmt 0 discriminator 1
 773 00a6 8B050000 		movl	FL_NORMAL_SIZE(%rip), %eax
 773      0000
 774 00ac 03442408 		addl	8(%rsp), %eax
 775              	.LVL82:
 776              	.L88:
 169:fltk-1.3.4-1/src/Fl_Menu.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 777              		.loc 4 169 0 is_stmt 1
 778 00b0 488B4C24 		movq	72(%rsp), %rcx
 778      48
 779 00b5 6448330C 		xorq	%fs:40, %rcx
 779      25280000 
 779      00
 780 00be 7565     		jne	.L98
 781 00c0 4883C450 		addq	$80, %rsp
 782              		.cfi_remember_state
 783              		.cfi_def_cfa_offset 16
 784 00c4 5B       		popq	%rbx
 785              		.cfi_def_cfa_offset 8
 786              	.LVL83:
 787 00c5 C3       		ret
 788              	.LVL84:
 789 00c6 662E0F1F 		.p2align 4,,10
 789      84000000 
 789      0000
 790              		.p2align 3
 791              	.L81:
 792              		.cfi_restore_state
 160:fltk-1.3.4-1/src/Fl_Menu.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 793              		.loc 4 160 0 discriminator 2
 794 00d0 4885D2   		testq	%rdx, %rdx
 795 00d3 743B     		je	.L84
 796              	.LVL85:
 160:fltk-1.3.4-1/src/Fl_Menu.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 797              		.loc 4 160 0 is_stmt 0 discriminator 4
 798 00d5 8B828C00 		movl	140(%rdx), %eax
 798      0000
 799 00db 89442428 		movl	%eax, 40(%rsp)
 161:fltk-1.3.4-1/src/Fl_Menu.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 800              		.loc 4 161 0 is_stmt 1 discriminator 4
 801 00df 8B472C   		movl	44(%rdi), %eax
 802 00e2 85C0     		testl	%eax, %eax
 803 00e4 0F856DFF 		jne	.L82
 803      FFFF
 804              	.LVL86:
 805              	.L85:
 806 00ea 8B829000 		movl	144(%rdx), %eax
 806      0000
 807              	.LVL87:
 808 00f0 E962FFFF 		jmp	.L82
 808      FF
 809              	.LVL88:
 810              		.p2align 4,,10
 811 00f5 0F1F00   		.p2align 3
 812              	.L97:
 161:fltk-1.3.4-1/src/Fl_Menu.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 813              		.loc 4 161 0 is_stmt 0 discriminator 2
 814 00f8 4885D2   		testq	%rdx, %rdx
 815 00fb 75ED     		jne	.L85
 816              	.L89:
 161:fltk-1.3.4-1/src/Fl_Menu.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 817              		.loc 4 161 0
 818 00fd 8B050000 		movl	FL_NORMAL_SIZE(%rip), %eax
 818      0000
 819 0103 E94FFFFF 		jmp	.L82
 819      FF
 820 0108 0F1F8400 		.p2align 4,,10
 820      00000000 
 821              		.p2align 3
 822              	.L84:
 823 0110 8B472C   		movl	44(%rdi), %eax
 160:fltk-1.3.4-1/src/Fl_Menu.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 824              		.loc 4 160 0 is_stmt 1
 825 0113 C7442428 		movl	$0, 40(%rsp)
 825      00000000 
 161:fltk-1.3.4-1/src/Fl_Menu.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 826              		.loc 4 161 0
 827 011b 85C0     		testl	%eax, %eax
 828 011d 0F8534FF 		jne	.L82
 828      FFFF
 829 0123 EBD8     		jmp	.L89
 830              	.LVL89:
 831              	.L98:
 169:fltk-1.3.4-1/src/Fl_Menu.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 832              		.loc 4 169 0
 833 0125 E8000000 		call	__stack_chk_fail
 833      00
 834              	.LVL90:
 835              		.cfi_endproc
 836              	.LFE559:
 838              		.section	.text.unlikely._ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_
 839              	.LCOLDE12:
 840              		.section	.text._ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_
 841              	.LHOTE12:
 842              		.section	.rodata.str1.1,"aMS",@progbits,1
 843              	.LC13:
 844 0000 67746B2B 		.string	"gtk+"
 844      00
 845              		.section	.text.unlikely._ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i,"ax",@progbits
 846              		.align 2
 847              	.LCOLDB20:
 848              		.section	.text._ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i,"ax",@progbits
 849              	.LHOTB20:
 850              		.align 2
 851              		.p2align 4,,15
 852              		.globl	_ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
 854              	_ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i:
 855              	.LFB560:
 173:fltk-1.3.4-1/src/Fl_Menu.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 856              		.loc 4 173 0
 857              		.cfi_startproc
 858              	.LVL91:
 859 0000 4157     		pushq	%r15
 860              		.cfi_def_cfa_offset 16
 861              		.cfi_offset 15, -16
 862 0002 4156     		pushq	%r14
 863              		.cfi_def_cfa_offset 24
 864              		.cfi_offset 14, -24
 865 0004 4989FF   		movq	%rdi, %r15
 866 0007 4155     		pushq	%r13
 867              		.cfi_def_cfa_offset 32
 868              		.cfi_offset 13, -32
 869 0009 4154     		pushq	%r12
 870              		.cfi_def_cfa_offset 40
 871              		.cfi_offset 12, -40
 872 000b 4189D6   		movl	%edx, %r14d
 873 000e 55       		pushq	%rbp
 874              		.cfi_def_cfa_offset 48
 875              		.cfi_offset 6, -48
 876 000f 53       		pushq	%rbx
 877              		.cfi_def_cfa_offset 56
 878              		.cfi_offset 3, -56
 879 0010 4189CC   		movl	%ecx, %r12d
 880 0013 89F3     		movl	%esi, %ebx
 881 0015 4589C5   		movl	%r8d, %r13d
 882 0018 4C89CD   		movq	%r9, %rbp
 883 001b 4883EC68 		subq	$104, %rsp
 884              		.cfi_def_cfa_offset 160
 173:fltk-1.3.4-1/src/Fl_Menu.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 885              		.loc 4 173 0
 886 001f 64488B04 		movq	%fs:40, %rax
 886      25280000 
 886      00
 887 0028 48894424 		movq	%rax, 88(%rsp)
 887      58
 888 002d 31C0     		xorl	%eax, %eax
 175:fltk-1.3.4-1/src/Fl_Menu.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 889              		.loc 4 175 0
 890 002f 488B07   		movq	(%rdi), %rax
 179:fltk-1.3.4-1/src/Fl_Menu.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 891              		.loc 4 179 0
 892 0032 48837F28 		cmpq	$0, 40(%rdi)
 892      00
 176:fltk-1.3.4-1/src/Fl_Menu.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 893              		.loc 4 176 0
 894 0037 48C74424 		movq	$0, 40(%rsp)
 894      28000000 
 894      00
 177:fltk-1.3.4-1/src/Fl_Menu.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 895              		.loc 4 177 0
 896 0040 48C74424 		movq	$0, 48(%rsp)
 896      30000000 
 896      00
 175:fltk-1.3.4-1/src/Fl_Menu.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 897              		.loc 4 175 0
 898 0049 48894424 		movq	%rax, 32(%rsp)
 898      20
 178:fltk-1.3.4-1/src/Fl_Menu.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 899              		.loc 4 178 0
 900 004e 0FB64724 		movzbl	36(%rdi), %eax
 901 0052 88442448 		movb	%al, 72(%rsp)
 179:fltk-1.3.4-1/src/Fl_Menu.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 902              		.loc 4 179 0
 903 0056 0F84AC01 		je	.L100
 903      0000
 179:fltk-1.3.4-1/src/Fl_Menu.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 904              		.loc 4 179 0 is_stmt 0 discriminator 1
 905 005c 8B4728   		movl	40(%rdi), %eax
 906 005f 89442438 		movl	%eax, 56(%rsp)
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 907              		.loc 4 180 0 is_stmt 1 discriminator 1
 908 0063 8B472C   		movl	44(%rdi), %eax
 909 0066 85C0     		testl	%eax, %eax
 910 0068 0F85F701 		jne	.L101
 910      0000
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 911              		.loc 4 180 0 is_stmt 0 discriminator 2
 912 006e 4D85C9   		testq	%r9, %r9
 913 0071 0F84E801 		je	.L108
 913      0000
 914              	.L107:
 915              	.LVL92:
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 916              		.loc 4 181 0 is_stmt 1
 917 0077 418B7F30 		movl	48(%r15), %edi
 918              	.LVL93:
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 919              		.loc 4 180 0
 920 007b 8B859000 		movl	144(%rbp), %eax
 920      0000
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 921              		.loc 4 181 0
 922 0081 85FF     		testl	%edi, %edi
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 923              		.loc 4 180 0
 924 0083 8944243C 		movl	%eax, 60(%rsp)
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 925              		.loc 4 181 0
 926 0087 0F85A501 		jne	.L105
 926      0000
 927              	.LVL94:
 928              	.L106:
 182:fltk-1.3.4-1/src/Fl_Menu.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 929              		.loc 4 182 0
 930 008d 41F64720 		testb	$1, 32(%r15)
 930      01
 931 0092 8BBD9400 		movl	148(%rbp), %edi
 931      0000
 932              	.LVL95:
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 933              		.loc 4 181 0
 934 0098 897C2440 		movl	%edi, 64(%rsp)
 935              	.LVL96:
 182:fltk-1.3.4-1/src/Fl_Menu.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 936              		.loc 4 182 0
 937 009c 0F850E02 		jne	.L109
 937      0000
 938              	.LVL97:
 939              	.L110:
 940              	.LBB492:
 184:fltk-1.3.4-1/src/Fl_Menu.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 941              		.loc 4 184 0
 942 00a2 8B9424A0 		movl	160(%rsp), %edx
 942      000000
 943 00a9 85D2     		testl	%edx, %edx
 944 00ab 0F847F00 		je	.L116
 944      0000
 945              	.LBB493:
 946              	.LBB494:
 947              	.LBB495:
 948              		.file 5 "fltk-1.3.4-1/FL/Fl_Menu_.H"
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
 949              		.loc 5 173 0 discriminator 1
 950 00b1 440FB695 		movzbl	137(%rbp), %r10d
 950      89000000 
 951 00b9 8B4564   		movl	100(%rbp), %eax
 952 00bc 8B5568   		movl	104(%rbp), %edx
 953 00bf 89442404 		movl	%eax, 4(%rsp)
 954              	.LVL98:
 955              	.LBE495:
 956              	.LBE494:
 186:fltk-1.3.4-1/src/Fl_Menu.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 957              		.loc 4 186 0 discriminator 1
 958 00c3 B8010000 		movl	$1, %eax
 958      00
 959 00c8 4585D2   		testl	%r10d, %r10d
 960 00cb 440F44D0 		cmove	%eax, %r10d
 961              	.LVL99:
 962              	.L117:
 187:fltk-1.3.4-1/src/Fl_Menu.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 963              		.loc 4 187 0 discriminator 6
 964 00cf 8B742404 		movl	4(%rsp), %esi
 965 00d3 89D7     		movl	%edx, %edi
 966 00d5 44895424 		movl	%r10d, 12(%rsp)
 966      0C
 967              	.LVL100:
 968 00da 89542408 		movl	%edx, 8(%rsp)
 969 00de E8000000 		call	_Z11fl_contrastjj
 969      00
 970              	.LVL101:
 971 00e3 8B542408 		movl	8(%rsp), %edx
 972 00e7 448B5424 		movl	12(%rsp), %r10d
 972      0C
 973 00ec 39D0     		cmpl	%edx, %eax
 974 00ee 0F84EC03 		je	.L118
 974      0000
 188:fltk-1.3.4-1/src/Fl_Menu.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 975              		.loc 4 188 0
 976 00f4 83BC24A0 		cmpl	$2, 160(%rsp)
 976      00000002 
 977 00fc 0F85DE02 		jne	.L119
 977      0000
 978              	.LVL102:
 190:fltk-1.3.4-1/src/Fl_Menu.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 979              		.loc 4 190 0
 980 0102 4885ED   		testq	%rbp, %rbp
 981 0105 0F842504 		je	.L146
 981      0000
 982              	.LVL103:
 983              	.LBB496:
 984              	.LBB497:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 985              		.loc 1 363 0 discriminator 1
 986 010b 440FB655 		movzbl	110(%rbp), %r10d
 986      6E
 987              	.LVL104:
 988              	.L142:
 989              	.LBE497:
 990              	.LBE496:
 199:fltk-1.3.4-1/src/Fl_Menu.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 991              		.loc 4 199 0
 992 0110 448B4C24 		movl	4(%rsp), %r9d
 992      04
 993 0115 4489E1   		movl	%r12d, %ecx
 994 0118 89DE     		movl	%ebx, %esi
 995 011a 4589E8   		movl	%r13d, %r8d
 996 011d 4489F2   		movl	%r14d, %edx
 997 0120 4489D7   		movl	%r10d, %edi
 200:fltk-1.3.4-1/src/Fl_Menu.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 998              		.loc 4 200 0
 999 0123 83C303   		addl	$3, %ebx
 1000              	.LVL105:
 201:fltk-1.3.4-1/src/Fl_Menu.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 1001              		.loc 4 201 0
 1002 0126 4183EC08 		subl	$8, %r12d
 1003              	.LVL106:
 199:fltk-1.3.4-1/src/Fl_Menu.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 1004              		.loc 4 199 0
 1005 012a E8000000 		call	_Z11fl_draw_box10Fl_Boxtypeiiiij
 1005      00
 1006              	.LVL107:
 1007 012f 90       		.p2align 4,,10
 1008              		.p2align 3
 1009              	.L116:
 1010              	.LBE493:
 1011              	.LBE492:
 1012              	.LBB502:
 207:fltk-1.3.4-1/src/Fl_Menu.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 1013              		.loc 4 207 0
 1014 0130 418B5720 		movl	32(%r15), %edx
 1015 0134 F6C20A   		testb	$10, %dl
 1016 0137 7464     		je	.L122
 1017              	.LBB503:
 208:fltk-1.3.4-1/src/Fl_Menu.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1018              		.loc 4 208 0
 1019 0139 4489E8   		movl	%r13d, %eax
 1020 013c 2B050000 		subl	FL_NORMAL_SIZE(%rip), %eax
 1020      0000
 209:fltk-1.3.4-1/src/Fl_Menu.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 1021              		.loc 4 209 0
 1022 0142 4489EE   		movl	%r13d, %esi
 208:fltk-1.3.4-1/src/Fl_Menu.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1023              		.loc 4 208 0
 1024 0145 83C001   		addl	$1, %eax
 1025 0148 89C5     		movl	%eax, %ebp
 1026              	.LVL108:
 1027 014a C1ED1F   		shrl	$31, %ebp
 1028 014d 01C5     		addl	%eax, %ebp
 1029 014f D1FD     		sarl	%ebp
 1030              	.LVL109:
 209:fltk-1.3.4-1/src/Fl_Menu.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 1031              		.loc 4 209 0
 1032 0151 8D442D00 		leal	(%rbp,%rbp), %eax
 1033              	.LBB504:
 1034              	.LBB505:
 212:fltk-1.3.4-1/src/Fl_Menu.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 1035              		.loc 4 212 0
 1036 0155 4401F5   		addl	%r14d, %ebp
 1037              	.LVL110:
 1038              	.LBE505:
 1039              	.LBE504:
 209:fltk-1.3.4-1/src/Fl_Menu.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 1040              		.loc 4 209 0
 1041 0158 29C6     		subl	%eax, %esi
 1042              	.LVL111:
 1043              	.LBB591:
 211:fltk-1.3.4-1/src/Fl_Menu.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 1044              		.loc 4 211 0
 1045 015a 83E208   		andl	$8, %edx
 1046              	.LBE591:
 209:fltk-1.3.4-1/src/Fl_Menu.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 1047              		.loc 4 209 0
 1048 015d 89742404 		movl	%esi, 4(%rsp)
 1049              	.LVL112:
 1050              	.LBB592:
 211:fltk-1.3.4-1/src/Fl_Menu.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 1051              		.loc 4 211 0
 1052 0161 0F845901 		je	.L123
 1052      0000
 1053              	.LBB563:
 212:fltk-1.3.4-1/src/Fl_Menu.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 1054              		.loc 4 212 0
 1055 0167 E8000000 		call	_Z25fl_define_FL_ROUND_UP_BOXv
 1055      00
 1056              	.LVL113:
 1057 016c 8B4C2404 		movl	4(%rsp), %ecx
 1058 0170 8D7302   		leal	2(%rbx), %esi
 1059 0173 8D7801   		leal	1(%rax), %edi
 1060 0176 41B90700 		movl	$7, %r9d
 1060      0000
 1061 017c 89EA     		movl	%ebp, %edx
 1062 017e 4189C8   		movl	%ecx, %r8d
 1063 0181 E8000000 		call	_Z11fl_draw_box10Fl_Boxtypeiiiij
 1063      00
 1064              	.LVL114:
 1065              	.LBB506:
 213:fltk-1.3.4-1/src/Fl_Menu.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1066              		.loc 4 213 0
 1067 0186 41F64720 		testb	$4, 32(%r15)
 1067      04
 1068 018b 0F858F02 		jne	.L177
 1068      0000
 1069              	.LVL115:
 1070              	.L125:
 1071              	.LBE506:
 1072              	.LBE563:
 1073              	.LBE592:
 274:fltk-1.3.4-1/src/Fl_Menu.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 1074              		.loc 4 274 0
 1075 0191 8B442404 		movl	4(%rsp), %eax
 1076 0195 83C003   		addl	$3, %eax
 1077 0198 01C3     		addl	%eax, %ebx
 1078              	.LVL116:
 275:fltk-1.3.4-1/src/Fl_Menu.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1079              		.loc 4 275 0
 1080 019a 4129C4   		subl	%eax, %r12d
 1081              	.LVL117:
 1082              	.L122:
 1083              	.LBE503:
 1084              	.LBE502:
 278:fltk-1.3.4-1/src/Fl_Menu.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 1085              		.loc 4 278 0
 1086 019d 803D0000 		cmpb	$0, fl_draw_shortcut(%rip)
 1086      000000
 1087 01a4 7507     		jne	.L140
 278:fltk-1.3.4-1/src/Fl_Menu.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 1088              		.loc 4 278 0 is_stmt 0 discriminator 1
 1089 01a6 C6050000 		movb	$1, fl_draw_shortcut(%rip)
 1089      000001
 1090              	.L140:
 279:fltk-1.3.4-1/src/Fl_Menu.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1091              		.loc 4 279 0 is_stmt 1
 1092 01ad 418D4424 		leal	-6(%r12), %eax
 1092      FA
 1093 01b2 4183FC07 		cmpl	$7, %r12d
 1094 01b6 B9000000 		movl	$0, %ecx
 1094      00
 1095 01bb 8D7303   		leal	3(%rbx), %esi
 1096 01be 488D7C24 		leaq	32(%rsp), %rdi
 1096      20
 1097 01c3 41B90400 		movl	$4, %r9d
 1097      0000
 1098 01c9 0F4DC8   		cmovge	%eax, %ecx
 1099 01cc 4589E8   		movl	%r13d, %r8d
 1100 01cf 4489F2   		movl	%r14d, %edx
 1101 01d2 E8000000 		call	_ZNK8Fl_Label4drawEiiiij
 1101      00
 1102              	.LVL118:
 281:fltk-1.3.4-1/src/Fl_Menu.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1103              		.loc 4 281 0
 1104 01d7 488B4424 		movq	88(%rsp), %rax
 1104      58
 1105 01dc 64483304 		xorq	%fs:40, %rax
 1105      25280000 
 1105      00
 280:fltk-1.3.4-1/src/Fl_Menu.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 1106              		.loc 4 280 0
 1107 01e5 C6050000 		movb	$0, fl_draw_shortcut(%rip)
 1107      000000
 281:fltk-1.3.4-1/src/Fl_Menu.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1108              		.loc 4 281 0
 1109 01ec 0F85A805 		jne	.L178
 1109      0000
 1110 01f2 4883C468 		addq	$104, %rsp
 1111              		.cfi_remember_state
 1112              		.cfi_def_cfa_offset 56
 1113 01f6 5B       		popq	%rbx
 1114              		.cfi_def_cfa_offset 48
 1115              	.LVL119:
 1116 01f7 5D       		popq	%rbp
 1117              		.cfi_def_cfa_offset 40
 1118 01f8 415C     		popq	%r12
 1119              		.cfi_def_cfa_offset 32
 1120              	.LVL120:
 1121 01fa 415D     		popq	%r13
 1122              		.cfi_def_cfa_offset 24
 1123              	.LVL121:
 1124 01fc 415E     		popq	%r14
 1125              		.cfi_def_cfa_offset 16
 1126              	.LVL122:
 1127 01fe 415F     		popq	%r15
 1128              		.cfi_def_cfa_offset 8
 1129 0200 C3       		ret
 1130              	.LVL123:
 1131              		.p2align 4,,10
 1132 0201 0F1F8000 		.p2align 3
 1132      000000
 1133              	.L100:
 1134              		.cfi_restore_state
 179:fltk-1.3.4-1/src/Fl_Menu.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 1135              		.loc 4 179 0 discriminator 2
 1136 0208 4D85C9   		testq	%r9, %r9
 1137 020b 7443     		je	.L103
 1138              	.LVL124:
 179:fltk-1.3.4-1/src/Fl_Menu.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 1139              		.loc 4 179 0 is_stmt 0 discriminator 4
 1140 020d 418B818C 		movl	140(%r9), %eax
 1140      000000
 1141 0214 89442438 		movl	%eax, 56(%rsp)
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1142              		.loc 4 180 0 is_stmt 1 discriminator 4
 1143 0218 8B472C   		movl	44(%rdi), %eax
 1144 021b 85C0     		testl	%eax, %eax
 1145 021d 0F8454FE 		je	.L107
 1145      FFFF
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1146              		.loc 4 181 0
 1147 0223 8B7F30   		movl	48(%rdi), %edi
 1148              	.LVL125:
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1149              		.loc 4 180 0
 1150 0226 8944243C 		movl	%eax, 60(%rsp)
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1151              		.loc 4 181 0
 1152 022a 85FF     		testl	%edi, %edi
 1153 022c 0F845BFE 		je	.L106
 1153      FFFF
 1154              	.LVL126:
 1155              	.L105:
 182:fltk-1.3.4-1/src/Fl_Menu.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1156              		.loc 4 182 0 discriminator 8
 1157 0232 41F64720 		testb	$1, 32(%r15)
 1157      01
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1158              		.loc 4 181 0 discriminator 8
 1159 0237 897C2440 		movl	%edi, 64(%rsp)
 1160              	.LVL127:
 182:fltk-1.3.4-1/src/Fl_Menu.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1161              		.loc 4 182 0 discriminator 8
 1162 023b 7573     		jne	.L109
 1163              	.LVL128:
 1164              	.L114:
 183:fltk-1.3.4-1/src/Fl_Menu.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 1165              		.loc 4 183 0
 1166 023d 4885ED   		testq	%rbp, %rbp
 1167 0240 0F855CFE 		jne	.L110
 1167      FFFF
 1168 0246 EB41     		jmp	.L115
 1169              	.LVL129:
 1170 0248 0F1F8400 		.p2align 4,,10
 1170      00000000 
 1171              		.p2align 3
 1172              	.L103:
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1173              		.loc 4 180 0
 1174 0250 8B472C   		movl	44(%rdi), %eax
 179:fltk-1.3.4-1/src/Fl_Menu.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 1175              		.loc 4 179 0
 1176 0253 C7442438 		movl	$0, 56(%rsp)
 1176      00000000 
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1177              		.loc 4 180 0
 1178 025b 85C0     		testl	%eax, %eax
 1179 025d 7506     		jne	.L101
 1180              	.L108:
 1181 025f 8B050000 		movl	FL_NORMAL_SIZE(%rip), %eax
 1181      0000
 1182              	.L101:
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1183              		.loc 4 181 0 discriminator 8
 1184 0265 418B7F30 		movl	48(%r15), %edi
 1185              	.LVL130:
 180:fltk-1.3.4-1/src/Fl_Menu.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1186              		.loc 4 180 0 discriminator 8
 1187 0269 8944243C 		movl	%eax, 60(%rsp)
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1188              		.loc 4 181 0 discriminator 8
 1189 026d 85FF     		testl	%edi, %edi
 1190 026f 75C1     		jne	.L105
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1191              		.loc 4 181 0 is_stmt 0 discriminator 2
 1192 0271 4885ED   		testq	%rbp, %rbp
 1193 0274 0F8513FE 		jne	.L106
 1193      FFFF
 182:fltk-1.3.4-1/src/Fl_Menu.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1194              		.loc 4 182 0 is_stmt 1
 1195 027a 41F64720 		testb	$1, 32(%r15)
 1195      01
 181:fltk-1.3.4-1/src/Fl_Menu.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1196              		.loc 4 181 0
 1197 027f C7442440 		movl	$0, 64(%rsp)
 1197      00000000 
 1198              	.LVL131:
 182:fltk-1.3.4-1/src/Fl_Menu.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1199              		.loc 4 182 0
 1200 0287 7527     		jne	.L109
 1201              	.LVL132:
 1202              	.L115:
 1203              	.LBB601:
 184:fltk-1.3.4-1/src/Fl_Menu.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 1204              		.loc 4 184 0
 1205 0289 8B8424A0 		movl	160(%rsp), %eax
 1205      000000
 1206 0290 85C0     		testl	%eax, %eax
 1207 0292 0F8498FE 		je	.L116
 1207      FFFF
 1208              	.LBE601:
 183:fltk-1.3.4-1/src/Fl_Menu.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 1209              		.loc 4 183 0
 1210 0298 C7442404 		movl	$49, 4(%rsp)
 1210      31000000 
 1211              	.LBB602:
 1212              	.LBB498:
 185:fltk-1.3.4-1/src/Fl_Menu.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1213              		.loc 4 185 0
 1214 02a0 BA0F0000 		movl	$15, %edx
 1214      00
 186:fltk-1.3.4-1/src/Fl_Menu.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 1215              		.loc 4 186 0
 1216 02a5 41BA0100 		movl	$1, %r10d
 1216      0000
 1217 02ab E91FFEFF 		jmp	.L117
 1217      FF
 1218              	.LVL133:
 1219              		.p2align 4,,10
 1220              		.p2align 3
 1221              	.L109:
 1222              	.LBE498:
 1223              	.LBE602:
 182:fltk-1.3.4-1/src/Fl_Menu.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1224              		.loc 4 182 0 discriminator 1
 1225 02b0 E8000000 		call	_Z11fl_inactivej
 1225      00
 1226              	.LVL134:
 1227 02b5 89442440 		movl	%eax, 64(%rsp)
 1228 02b9 EB82     		jmp	.L114
 1229              	.LVL135:
 1230 02bb 0F1F4400 		.p2align 4,,10
 1230      00
 1231              		.p2align 3
 1232              	.L123:
 1233              	.LBB603:
 1234              	.LBB597:
 1235              	.LBB593:
 1236              	.LBB564:
 256:fltk-1.3.4-1/src/Fl_Menu.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1237              		.loc 4 256 0
 1238 02c0 8B4C2404 		movl	4(%rsp), %ecx
 1239 02c4 8D7302   		leal	2(%rbx), %esi
 1240 02c7 41B90700 		movl	$7, %r9d
 1240      0000
 1241 02cd 89EA     		movl	%ebp, %edx
 1242 02cf BF030000 		movl	$3, %edi
 1242      00
 1243 02d4 4189C8   		movl	%ecx, %r8d
 1244 02d7 E8000000 		call	_Z11fl_draw_box10Fl_Boxtypeiiiij
 1244      00
 1245              	.LVL136:
 1246              	.LBB565:
 257:fltk-1.3.4-1/src/Fl_Menu.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 1247              		.loc 4 257 0
 1248 02dc 41F64720 		testb	$4, 32(%r15)
 1248      04
 1249 02e1 0F84AAFE 		je	.L125
 1249      FFFF
 1250              	.LVL137:
 1251              	.LBB566:
 1252              	.LBB567:
 1253              	.LBB568:
 1254              		.file 6 "fltk-1.3.4-1/FL/Fl.H"
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
 1255              		.loc 6 369 0
 1256 02e7 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 1256      000000
 1257 02ee 4885FF   		testq	%rdi, %rdi
 1258 02f1 0F84C901 		je	.L137
 1258      0000
 1259 02f7 BE000000 		movl	$.LC13, %esi
 1259      00
 1260 02fc B9050000 		movl	$5, %ecx
 1260      00
 1261 0301 F3A6     		repz cmpsb
 1262 0303 0F85B701 		jne	.L137
 1262      0000
 1263              	.LVL138:
 1264              	.LBE568:
 1265              	.LBE567:
 1266              	.LBB569:
 1267              	.LBB570:
 1268              		.file 7 "fltk-1.3.4-1/FL/fl_draw.H"
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
 1269              		.loc 7 52 0
 1270 0309 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1270      000000
 1271 0310 BE0F0000 		movl	$15, %esi
 1271      00
 1272 0315 488B07   		movq	(%rdi), %rax
 1273 0318 FF908800 		call	*136(%rax)
 1273      0000
 1274              	.LVL139:
 1275              	.L144:
 1276              	.LBE570:
 1277              	.LBE569:
 264:fltk-1.3.4-1/src/Fl_Menu.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1278              		.loc 4 264 0
 1279 031e 8B742404 		movl	4(%rsp), %esi
 263:fltk-1.3.4-1/src/Fl_Menu.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 1280              		.loc 4 263 0
 1281 0322 8D4305   		leal	5(%rbx), %eax
 265:fltk-1.3.4-1/src/Fl_Menu.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 1282              		.loc 4 265 0
 1283 0325 BA565555 		movl	$1431655766, %edx
 1283      55
 1284              	.LBB571:
 1285              	.LBB572:
 1286              	.LBB573:
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
 1287              		.loc 7 223 0
 1288 032a 895C2418 		movl	%ebx, 24(%rsp)
 1289 032e 44896424 		movl	%r12d, 28(%rsp)
 1289      1C
 1290              	.LBE573:
 1291              	.LBE572:
 1292              	.LBE571:
 263:fltk-1.3.4-1/src/Fl_Menu.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 1293              		.loc 4 263 0
 1294 0333 89C7     		movl	%eax, %edi
 1295 0335 89442408 		movl	%eax, 8(%rsp)
 1296              	.LVL140:
 264:fltk-1.3.4-1/src/Fl_Menu.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1297              		.loc 4 264 0
 1298 0339 8D4EFA   		leal	-6(%rsi), %ecx
 1299              	.LVL141:
 265:fltk-1.3.4-1/src/Fl_Menu.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 1300              		.loc 4 265 0
 1301 033c 89C8     		movl	%ecx, %eax
 1302              	.LVL142:
 1303 033e F7EA     		imull	%edx
 1304 0340 89C8     		movl	%ecx, %eax
 1305 0342 C1F81F   		sarl	$31, %eax
 1306 0345 29C2     		subl	%eax, %edx
 267:fltk-1.3.4-1/src/Fl_Menu.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 1307              		.loc 4 267 0
 1308 0347 89F0     		movl	%esi, %eax
 265:fltk-1.3.4-1/src/Fl_Menu.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 1309              		.loc 4 265 0
 1310 0349 4189D1   		movl	%edx, %r9d
 1311              	.LVL143:
 266:fltk-1.3.4-1/src/Fl_Menu.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 1312              		.loc 4 266 0
 1313 034c 89CA     		movl	%ecx, %edx
 1314              	.LVL144:
 1315 034e 4429CA   		subl	%r9d, %edx
 1316              	.LVL145:
 267:fltk-1.3.4-1/src/Fl_Menu.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 1317              		.loc 4 267 0
 1318 0351 01D0     		addl	%edx, %eax
 1319 0353 89C6     		movl	%eax, %esi
 1320 0355 C1EE1F   		shrl	$31, %esi
 1321 0358 01F0     		addl	%esi, %eax
 1322 035a 428D340F 		leal	(%rdi,%r9), %esi
 1323 035e D1F8     		sarl	%eax
 1324 0360 01C5     		addl	%eax, %ebp
 1325 0362 8D440FFF 		leal	-1(%rdi,%rcx), %eax
 1326 0366 4429CD   		subl	%r9d, %ebp
 1327 0369 448D7DFE 		leal	-2(%rbp), %r15d
 1328              	.LVL146:
 1329 036d 89442410 		movl	%eax, 16(%rsp)
 1330 0371 8D4501   		leal	1(%rbp), %eax
 1331 0374 418D6901 		leal	1(%r9), %ebp
 1332 0378 8944240C 		movl	%eax, 12(%rsp)
 1333              	.LBB582:
 1334              	.LBB577:
 1335              	.LBB574:
 1336              		.loc 7 223 0
 1337 037c 4489FB   		movl	%r15d, %ebx
 1338              	.LVL147:
 1339 037f 4589CF   		movl	%r9d, %r15d
 1340              	.LVL148:
 1341 0382 89E8     		movl	%ebp, %eax
 1342 0384 89F5     		movl	%esi, %ebp
 1343 0386 29D0     		subl	%edx, %eax
 1344 0388 89442414 		movl	%eax, 20(%rsp)
 1345              	.LVL149:
 1346              	.L139:
 1347              	.LBE574:
 1348              	.LBE577:
 1349              	.LBB578:
 1350              	.LBB579:
 1351              		.loc 7 223 0 is_stmt 0 discriminator 2
 1352 038c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1352      000000
 1353 0393 458D241F 		leal	(%r15,%rbx), %r12d
 1354              	.LVL150:
 1355 0397 89DA     		movl	%ebx, %edx
 1356 0399 89E9     		movl	%ebp, %ecx
 1357 039b 8B742408 		movl	8(%rsp), %esi
 1358 039f 4589E0   		movl	%r12d, %r8d
 1359 03a2 4C8B17   		movq	(%rdi), %r10
 1360 03a5 41FF5260 		call	*96(%r10)
 1361              	.LVL151:
 1362              	.LBE579:
 1363              	.LBE578:
 1364              	.LBB580:
 1365              	.LBB575:
 1366 03a9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1366      000000
 1367 03b0 8B442414 		movl	20(%rsp), %eax
 1368 03b4 4489E2   		movl	%r12d, %edx
 1369 03b7 8B4C2410 		movl	16(%rsp), %ecx
 1370 03bb 89EE     		movl	%ebp, %esi
 1371 03bd 4C8B17   		movq	(%rdi), %r10
 1372 03c0 448D0418 		leal	(%rax,%rbx), %r8d
 1373              	.LBE575:
 1374              	.LBE580:
 268:fltk-1.3.4-1/src/Fl_Menu.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 1375              		.loc 4 268 0 is_stmt 1 discriminator 2
 1376 03c4 83C301   		addl	$1, %ebx
 1377              	.LVL152:
 1378              	.LBB581:
 1379              	.LBB576:
 1380              		.loc 7 223 0 discriminator 2
 1381 03c7 41FF5260 		call	*96(%r10)
 1382              	.LVL153:
 1383              	.LBE576:
 1384              	.LBE581:
 268:fltk-1.3.4-1/src/Fl_Menu.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 1385              		.loc 4 268 0 discriminator 2
 1386 03cb 3B5C240C 		cmpl	12(%rsp), %ebx
 1387 03cf 75BB     		jne	.L139
 1388 03d1 8B5C2418 		movl	24(%rsp), %ebx
 1389              	.LVL154:
 1390 03d5 448B6424 		movl	28(%rsp), %r12d
 1390      1C
 1391 03da E9B2FDFF 		jmp	.L125
 1391      FF
 1392              	.LVL155:
 1393 03df 90       		.p2align 4,,10
 1394              		.p2align 3
 1395              	.L119:
 1396              	.LBE582:
 1397              	.LBE566:
 1398              	.LBE565:
 1399              	.LBE564:
 1400              	.LBE593:
 1401              	.LBE597:
 1402              	.LBE603:
 1403              	.LBB604:
 1404              	.LBB499:
 193:fltk-1.3.4-1/src/Fl_Menu.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1405              		.loc 4 193 0
 1406 03e0 418B7F30 		movl	48(%r15), %edi
 1407 03e4 BE370000 		movl	$55, %esi
 1407      00
 1408 03e9 44895424 		movl	%r10d, 4(%rsp)
 1408      04
 1409              	.LVL156:
 1410 03ee E8000000 		call	_Z11fl_contrastjj
 1410      00
 1411              	.LVL157:
 1412 03f3 448B5424 		movl	4(%rsp), %r10d
 1412      04
 1413 03f8 89442440 		movl	%eax, 64(%rsp)
 1414              	.LVL158:
 192:fltk-1.3.4-1/src/Fl_Menu.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 1415              		.loc 4 192 0
 1416 03fc 41B93700 		movl	$55, %r9d
 1416      0000
 1417              	.LVL159:
 1418              	.L121:
 203:fltk-1.3.4-1/src/Fl_Menu.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 1419              		.loc 4 203 0
 1420 0402 418D4C24 		leal	-2(%r12), %ecx
 1420      FE
 1421 0407 418D56FF 		leal	-1(%r14), %edx
 1422 040b 8D7301   		leal	1(%rbx), %esi
 1423 040e 458D4502 		leal	2(%r13), %r8d
 1424 0412 4489D7   		movl	%r10d, %edi
 1425 0415 E8000000 		call	_Z11fl_draw_box10Fl_Boxtypeiiiij
 1425      00
 1426              	.LVL160:
 1427 041a E911FDFF 		jmp	.L116
 1427      FF
 1428              	.LVL161:
 1429 041f 90       		.p2align 4,,10
 1430              		.p2align 3
 1431              	.L177:
 1432              	.LBE499:
 1433              	.LBE604:
 1434              	.LBB605:
 1435              	.LBB598:
 1436              	.LBB594:
 1437              	.LBB587:
 1438              	.LBB560:
 1439              	.LBB507:
 214:fltk-1.3.4-1/src/Fl_Menu.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 1440              		.loc 4 214 0
 1441 0420 E8000000 		call	_Z25fl_define_FL_ROUND_UP_BOXv
 1441      00
 1442              	.LVL162:
 1443 0425 8D7801   		leal	1(%rax), %edi
 1444 0428 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 1444      00
 1445              	.LVL163:
 1446 042d 8B4C2404 		movl	4(%rsp), %ecx
 1447 0431 89CE     		movl	%ecx, %esi
 1448 0433 29C6     		subl	%eax, %esi
 1449 0435 89F2     		movl	%esi, %edx
 1450 0437 89F0     		movl	%esi, %eax
 1451 0439 C1EA1F   		shrl	$31, %edx
 1452 043c 01D0     		addl	%edx, %eax
 215:fltk-1.3.4-1/src/Fl_Menu.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 1453              		.loc 4 215 0
 1454 043e 89CA     		movl	%ecx, %edx
 214:fltk-1.3.4-1/src/Fl_Menu.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 1455              		.loc 4 214 0
 1456 0440 D1F8     		sarl	%eax
 1457 0442 448D4801 		leal	1(%rax), %r9d
 1458              	.LVL164:
 215:fltk-1.3.4-1/src/Fl_Menu.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 1459              		.loc 4 215 0
 1460 0446 4429CA   		subl	%r9d, %edx
 1461 0449 F6C201   		testb	$1, %dl
 1462 044c 0F85CE00 		jne	.L179
 1462      0000
 1463              	.L126:
 216:fltk-1.3.4-1/src/Fl_Menu.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1464              		.loc 4 216 0
 1465 0452 89D0     		movl	%edx, %eax
 1466              	.LBB508:
 1467              	.LBB509:
 1468              		.loc 6 369 0
 1469 0454 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 1469      000000
 1470              	.LBE509:
 1471              	.LBE508:
 216:fltk-1.3.4-1/src/Fl_Menu.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1472              		.loc 4 216 0
 1473 045b C1E81F   		shrl	$31, %eax
 1474 045e 01C2     		addl	%eax, %edx
 1475 0460 D1FA     		sarl	%edx
 1476              	.LVL165:
 1477              	.LBB511:
 1478              	.LBB510:
 1479              		.loc 6 369 0
 1480 0462 4885FF   		testq	%rdi, %rdi
 1481 0465 7412     		je	.L127
 1482 0467 BE000000 		movl	$.LC13, %esi
 1482      00
 1483 046c B9050000 		movl	$5, %ecx
 1483      00
 1484 0471 F3A6     		repz cmpsb
 1485 0473 0F84C700 		je	.L128
 1485      0000
 1486              	.L127:
 1487              	.LBE510:
 1488              	.LBE511:
 1489              	.LBB512:
 1490              	.LBB513:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1491              		.loc 7 52 0
 1492 0479 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1492      000000
 1493 0480 8954240C 		movl	%edx, 12(%rsp)
 1494 0484 44894C24 		movl	%r9d, 8(%rsp)
 1494      08
 1495              	.LVL166:
 1496 0489 418B7730 		movl	48(%r15), %esi
 1497 048d 488B07   		movq	(%rdi), %rax
 1498 0490 FF908800 		call	*136(%rax)
 1498      0000
 1499              	.LVL167:
 1500 0496 8B54240C 		movl	12(%rsp), %edx
 1501 049a 448B4C24 		movl	8(%rsp), %r9d
 1501      08
 1502 049f 448D3C13 		leal	(%rbx,%rdx), %r15d
 1503              	.LVL168:
 1504 04a3 01D5     		addl	%edx, %ebp
 1505              	.LVL169:
 1506              	.L143:
 1507              	.LBE513:
 1508              	.LBE512:
 224:fltk-1.3.4-1/src/Fl_Menu.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 1509              		.loc 4 224 0
 1510 04a5 4183F906 		cmpl	$6, %r9d
 1511 04a9 0F87B102 		ja	.L129
 1511      0000
 1512 04af 4489C8   		movl	%r9d, %eax
 1513 04b2 FF24C500 		jmp	*.L131(,%rax,8)
 1513      000000
 1514              		.section	.rodata._ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i,"a",@progbits
 1515              		.align 8
 1516              		.align 4
 1517              	.L131:
 1518 0000 00000000 		.quad	.L129
 1518      00000000 
 1519 0008 00000000 		.quad	.L130
 1519      00000000 
 1520 0010 00000000 		.quad	.L130
 1520      00000000 
 1521 0018 00000000 		.quad	.L132
 1521      00000000 
 1522 0020 00000000 		.quad	.L132
 1522      00000000 
 1523 0028 00000000 		.quad	.L132
 1523      00000000 
 1524 0030 00000000 		.quad	.L133
 1524      00000000 
 1525              		.section	.text._ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
 1526              	.LVL170:
 1527 04b9 0F1F8000 		.p2align 4,,10
 1527      000000
 1528              		.p2align 3
 1529              	.L137:
 1530              	.LBE507:
 1531              	.LBE560:
 1532              	.LBE587:
 1533              	.LBB588:
 1534              	.LBB586:
 1535              	.LBB585:
 1536              	.LBB583:
 1537              	.LBB584:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1538              		.loc 7 52 0
 1539 04c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1539      000000
 1540 04c7 418B7730 		movl	48(%r15), %esi
 1541 04cb 488B07   		movq	(%rdi), %rax
 1542 04ce FF908800 		call	*136(%rax)
 1542      0000
 1543              	.LVL171:
 1544 04d4 E945FEFF 		jmp	.L144
 1544      FF
 1545              	.LVL172:
 1546 04d9 0F1F8000 		.p2align 4,,10
 1546      000000
 1547              		.p2align 3
 1548              	.L118:
 1549              	.LBE584:
 1550              	.LBE583:
 1551              	.LBE585:
 1552              	.LBE586:
 1553              	.LBE588:
 1554              	.LBE594:
 1555              	.LBE598:
 1556              	.LBE605:
 1557              	.LBB606:
 1558              	.LBB500:
 196:fltk-1.3.4-1/src/Fl_Menu.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1559              		.loc 4 196 0
 1560 04e0 418B7F30 		movl	48(%r15), %edi
 1561 04e4 89D6     		movl	%edx, %esi
 1562 04e6 44895424 		movl	%r10d, 12(%rsp)
 1562      0C
 1563              	.LVL173:
 1564 04eb 89442408 		movl	%eax, 8(%rsp)
 1565 04ef 89542404 		movl	%edx, 4(%rsp)
 1566 04f3 E8000000 		call	_Z11fl_contrastjj
 1566      00
 1567              	.LVL174:
 198:fltk-1.3.4-1/src/Fl_Menu.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1568              		.loc 4 198 0
 1569 04f8 83BC24A0 		cmpl	$2, 160(%rsp)
 1569      00000002 
 196:fltk-1.3.4-1/src/Fl_Menu.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1570              		.loc 4 196 0
 1571 0500 89442440 		movl	%eax, 64(%rsp)
 1572              	.LVL175:
 198:fltk-1.3.4-1/src/Fl_Menu.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1573              		.loc 4 198 0
 1574 0504 448B4C24 		movl	8(%rsp), %r9d
 1574      08
 1575 0509 448B5424 		movl	12(%rsp), %r10d
 1575      0C
 1576 050e 0F85EEFE 		jne	.L121
 1576      FFFF
 1577 0514 E9F7FBFF 		jmp	.L142
 1577      FF
 1578              	.LVL176:
 1579 0519 0F1F8000 		.p2align 4,,10
 1579      000000
 1580              		.p2align 3
 1581              	.L179:
 1582              	.LBE500:
 1583              	.LBE606:
 1584              	.LBB607:
 1585              	.LBB599:
 1586              	.LBB595:
 1587              	.LBB589:
 1588              	.LBB561:
 1589              	.LBB558:
 215:fltk-1.3.4-1/src/Fl_Menu.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 1590              		.loc 4 215 0 discriminator 1
 1591 0520 448D4802 		leal	2(%rax), %r9d
 1592              	.LVL177:
 1593 0524 89CA     		movl	%ecx, %edx
 1594 0526 4429CA   		subl	%r9d, %edx
 1595 0529 E924FFFF 		jmp	.L126
 1595      FF
 1596              	.LVL178:
 1597 052e 6690     		.p2align 4,,10
 1598              		.p2align 3
 1599              	.L146:
 1600              	.LBE558:
 1601              	.LBE561:
 1602              	.LBE589:
 1603              	.LBE595:
 1604              	.LBE599:
 1605              	.LBE607:
 1606              	.LBB608:
 1607              	.LBB501:
 190:fltk-1.3.4-1/src/Fl_Menu.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1608              		.loc 4 190 0
 1609 0530 41BA0200 		movl	$2, %r10d
 1609      0000
 1610              	.LVL179:
 1611 0536 E9D5FBFF 		jmp	.L142
 1611      FF
 1612              	.LVL180:
 1613 053b 0F1F4400 		.p2align 4,,10
 1613      00
 1614              		.p2align 3
 1615              	.L128:
 1616              	.LBE501:
 1617              	.LBE608:
 1618              	.LBB609:
 1619              	.LBB600:
 1620              	.LBB596:
 1621              	.LBB590:
 1622              	.LBB562:
 1623              	.LBB559:
 1624              	.LBB514:
 1625              	.LBB515:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1626              		.loc 7 52 0
 1627 0540 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1627      000000
 1628 0547 8954240C 		movl	%edx, 12(%rsp)
 1629 054b BE0F0000 		movl	$15, %esi
 1629      00
 1630 0550 44894C24 		movl	%r9d, 8(%rsp)
 1630      08
 1631              	.LVL181:
 1632 0555 488B07   		movq	(%rdi), %rax
 1633 0558 FF908800 		call	*136(%rax)
 1633      0000
 1634              	.LVL182:
 1635              	.LBE515:
 1636              	.LBE514:
 219:fltk-1.3.4-1/src/Fl_Menu.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 1637              		.loc 4 219 0
 1638 055e 448B4C24 		movl	8(%rsp), %r9d
 1638      08
 1639              	.LBB516:
 1640              	.LBB517:
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
 1641              		.loc 7 317 0
 1642 0563 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1642      000000
 1643              	.LBE517:
 1644              	.LBE516:
 220:fltk-1.3.4-1/src/Fl_Menu.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 1645              		.loc 4 220 0
 1646 056a 8B54240C 		movl	12(%rsp), %edx
 1647              	.LBB520:
 1648              	.LBB518:
 1649              		.loc 7 317 0
 1650 056e F20F100D 		movsd	.LC14(%rip), %xmm1
 1650      00000000 
 1651 0576 660FEFC0 		pxor	%xmm0, %xmm0
 1652              	.LBE518:
 1653              	.LBE520:
 219:fltk-1.3.4-1/src/Fl_Menu.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 1654              		.loc 4 219 0
 1655 057a 418D41FF 		leal	-1(%r9), %eax
 220:fltk-1.3.4-1/src/Fl_Menu.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 1656              		.loc 4 220 0
 1657 057e 418D4902 		leal	2(%r9), %ecx
 1658 0582 448D3C13 		leal	(%rbx,%rdx), %r15d
 1659              	.LVL183:
 1660 0586 01D5     		addl	%edx, %ebp
 1661              	.LVL184:
 219:fltk-1.3.4-1/src/Fl_Menu.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 1662              		.loc 4 219 0
 1663 0588 89442408 		movl	%eax, 8(%rsp)
 1664              	.LVL185:
 1665              	.LBB521:
 1666              	.LBB519:
 1667              		.loc 7 317 0
 1668 058c 488B07   		movq	(%rdi), %rax
 1669 058f 8D55FF   		leal	-1(%rbp), %edx
 1670              	.LVL186:
 1671 0592 4189C8   		movl	%ecx, %r8d
 1672 0595 418D7701 		leal	1(%r15), %esi
 1673 0599 FF900801 		call	*264(%rax)
 1673      0000
 1674              	.LVL187:
 1675              	.LBE519:
 1676              	.LBE521:
 221:fltk-1.3.4-1/src/Fl_Menu.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 1677              		.loc 4 221 0
 1678 059f F30F1005 		movss	.LC16(%rip), %xmm0
 1678      00000000 
 1679 05a7 BE0F0000 		movl	$15, %esi
 1679      00
 1680 05ac BFFF0000 		movl	$255, %edi
 1680      00
 1681 05b1 E8000000 		call	_Z16fl_color_averagejjf
 1681      00
 1682              	.LVL188:
 1683              	.LBB522:
 1684              	.LBB523:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1685              		.loc 7 52 0
 1686 05b6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1686      000000
 1687 05bd 89C6     		movl	%eax, %esi
 1688 05bf 488B17   		movq	(%rdi), %rdx
 1689 05c2 FF928800 		call	*136(%rdx)
 1689      0000
 1690              	.LVL189:
 1691              	.LBE523:
 1692              	.LBE522:
 219:fltk-1.3.4-1/src/Fl_Menu.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 1693              		.loc 4 219 0
 1694 05c8 448B4C24 		movl	8(%rsp), %r9d
 1694      08
 1695 05cd E9D3FEFF 		jmp	.L143
 1695      FF
 1696              	.LVL190:
 1697              		.p2align 4,,10
 1698 05d2 660F1F44 		.p2align 3
 1698      0000
 1699              	.L133:
 1700              	.LBB524:
 1701              	.LBB525:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1702              		.loc 7 206 0
 1703 05d8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1703      000000
 1704 05df 44894C24 		movl	%r9d, 8(%rsp)
 1704      08
 1705              	.LVL191:
 1706 05e4 418D7704 		leal	4(%r15), %esi
 1707 05e8 41B80600 		movl	$6, %r8d
 1707      0000
 1708 05ee B9020000 		movl	$2, %ecx
 1708      00
 1709 05f3 89EA     		movl	%ebp, %edx
 1710 05f5 488B07   		movq	(%rdi), %rax
 1711 05f8 FF5020   		call	*32(%rax)
 1712              	.LVL192:
 1713              	.LBE525:
 1714              	.LBE524:
 1715              	.LBB526:
 1716              	.LBB527:
 1717 05fb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1717      000000
 1718 0602 418D7703 		leal	3(%r15), %esi
 1719 0606 8D5501   		leal	1(%rbp), %edx
 1720              	.LVL193:
 1721 0609 41B80400 		movl	$4, %r8d
 1721      0000
 1722 060f B9040000 		movl	$4, %ecx
 1722      00
 1723              	.LBE527:
 1724              	.LBE526:
 1725              	.LBB529:
 1726              	.LBB530:
 1727 0614 4183C702 		addl	$2, %r15d
 1728              	.LVL194:
 1729              	.LBE530:
 1730              	.LBE529:
 1731              	.LBB532:
 1732              	.LBB528:
 1733 0618 488B07   		movq	(%rdi), %rax
 1734 061b FF5020   		call	*32(%rax)
 1735              	.LVL195:
 1736              	.LBE528:
 1737              	.LBE532:
 1738              	.LBB533:
 1739              	.LBB531:
 1740 061e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1740      000000
 1741 0625 8D5502   		leal	2(%rbp), %edx
 1742              	.LVL196:
 1743 0628 41B80200 		movl	$2, %r8d
 1743      0000
 1744 062e B9060000 		movl	$6, %ecx
 1744      00
 1745 0633 4489FE   		movl	%r15d, %esi
 1746 0636 488B07   		movq	(%rdi), %rax
 1747 0639 FF5020   		call	*32(%rax)
 1748              	.LVL197:
 1749 063c 448B4C24 		movl	8(%rsp), %r9d
 1749      08
 1750              	.LVL198:
 1751              	.L134:
 1752              	.LBE531:
 1753              	.LBE533:
 1754              	.LBB534:
 1755              	.LBB535:
 1756              		.loc 6 369 0
 1757 0641 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 1757      000000
 1758 0648 4885FF   		testq	%rdi, %rdi
 1759 064b 0F8440FB 		je	.L125
 1759      FFFF
 1760 0651 BE000000 		movl	$.LC13, %esi
 1760      00
 1761 0656 B9050000 		movl	$5, %ecx
 1761      00
 1762 065b F3A6     		repz cmpsb
 1763 065d 0F852EFB 		jne	.L125
 1763      FFFF
 1764              	.LBE535:
 1765              	.LBE534:
 251:fltk-1.3.4-1/src/Fl_Menu.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1766              		.loc 4 251 0
 1767 0663 F30F1005 		movss	.LC17(%rip), %xmm0
 1767      00000000 
 1768 066b BE0F0000 		movl	$15, %esi
 1768      00
 1769 0670 BFFF0000 		movl	$255, %edi
 1769      00
 1770 0675 44894C24 		movl	%r9d, 8(%rsp)
 1770      08
 1771              	.LVL199:
 1772 067a E8000000 		call	_Z16fl_color_averagejjf
 1772      00
 1773              	.LVL200:
 1774              	.LBB536:
 1775              	.LBB537:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1776              		.loc 7 52 0
 1777 067f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1777      000000
 1778 0686 89C6     		movl	%eax, %esi
 1779 0688 488B17   		movq	(%rdi), %rdx
 1780 068b FF928800 		call	*136(%rdx)
 1780      0000
 1781              	.LVL201:
 1782              	.LBE537:
 1783              	.LBE536:
 1784              	.LBB538:
 1785              	.LBB539:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1786              		.loc 7 304 0
 1787 0691 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1787      000000
 1788              	.LBE539:
 1789              	.LBE538:
 252:fltk-1.3.4-1/src/Fl_Menu.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1790              		.loc 4 252 0
 1791 0698 448B4C24 		movl	8(%rsp), %r9d
 1791      08
 1792              	.LBB542:
 1793              	.LBB540:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1794              		.loc 7 304 0
 1795 069d 89EA     		movl	%ebp, %edx
 1796 069f F20F100D 		movsd	.LC18(%rip), %xmm1
 1796      00000000 
 1797 06a7 4489FE   		movl	%r15d, %esi
 1798 06aa F20F1005 		movsd	.LC19(%rip), %xmm0
 1798      00000000 
 1799 06b2 488B07   		movq	(%rdi), %rax
 1800              	.LBE540:
 1801              	.LBE542:
 252:fltk-1.3.4-1/src/Fl_Menu.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1802              		.loc 4 252 0
 1803 06b5 418D4901 		leal	1(%r9), %ecx
 1804              	.LVL202:
 1805              	.LBB543:
 1806              	.LBB541:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1807              		.loc 7 304 0
 1808 06b9 4189C8   		movl	%ecx, %r8d
 1809 06bc FF900001 		call	*256(%rax)
 1809      0000
 1810              	.LVL203:
 1811 06c2 E9CAFAFF 		jmp	.L125
 1811      FF
 1812              	.LVL204:
 1813 06c7 660F1F84 		.p2align 4,,10
 1813      00000000 
 1813      00
 1814              		.p2align 3
 1815              	.L132:
 1816              	.LBE541:
 1817              	.LBE543:
 1818              	.LBB544:
 1819              	.LBB545:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1820              		.loc 7 206 0
 1821 06d0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1821      000000
 1822              	.LBE545:
 1823              	.LBE544:
 240:fltk-1.3.4-1/src/Fl_Menu.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 1824              		.loc 4 240 0
 1825 06d7 418D41FE 		leal	-2(%r9), %eax
 1826              	.LVL205:
 1827              	.LBB548:
 1828              	.LBB546:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1829              		.loc 7 206 0
 1830 06db 418D7703 		leal	3(%r15), %esi
 1831 06df 4589C8   		movl	%r9d, %r8d
 1832 06e2 44894C24 		movl	%r9d, 12(%rsp)
 1832      0C
 1833              	.LVL206:
 1834 06e7 89EA     		movl	%ebp, %edx
 1835 06e9 89C1     		movl	%eax, %ecx
 1836 06eb 89442408 		movl	%eax, 8(%rsp)
 1837              	.LBE546:
 1838              	.LBE548:
 1839              	.LBB549:
 1840              	.LBB550:
 1841 06ef 4183C702 		addl	$2, %r15d
 1842              	.LVL207:
 1843              	.LBE550:
 1844              	.LBE549:
 1845              	.LBB552:
 1846              	.LBB547:
 1847 06f3 4C8B1F   		movq	(%rdi), %r11
 1848 06f6 41FF5320 		call	*32(%r11)
 1849              	.LVL208:
 1850              	.LBE547:
 1851              	.LBE552:
 1852              	.LBB553:
 1853              	.LBB551:
 1854 06fa 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1854      000000
 1855 0701 448B4C24 		movl	12(%rsp), %r9d
 1855      0C
 1856 0706 8D5501   		leal	1(%rbp), %edx
 1857              	.LVL209:
 1858 0709 8B442408 		movl	8(%rsp), %eax
 1859 070d 4489FE   		movl	%r15d, %esi
 1860 0710 4C8B17   		movq	(%rdi), %r10
 1861 0713 4489C9   		movl	%r9d, %ecx
 1862 0716 44894C24 		movl	%r9d, 8(%rsp)
 1862      08
 1863              	.LVL210:
 1864 071b 4189C0   		movl	%eax, %r8d
 1865 071e 41FF5220 		call	*32(%r10)
 1866              	.LVL211:
 1867 0722 448B4C24 		movl	8(%rsp), %r9d
 1867      08
 1868 0727 E915FFFF 		jmp	.L134
 1868      FF
 1869              	.LVL212:
 1870 072c 0F1F4000 		.p2align 4,,10
 1871              		.p2align 3
 1872              	.L130:
 1873              	.LBE551:
 1874              	.LBE553:
 1875              	.LBB554:
 1876              	.LBB555:
 1877 0730 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1877      000000
 1878 0737 4183C702 		addl	$2, %r15d
 1879              	.LVL213:
 1880 073b 4589C8   		movl	%r9d, %r8d
 1881 073e 4489C9   		movl	%r9d, %ecx
 1882 0741 89EA     		movl	%ebp, %edx
 1883 0743 4489FE   		movl	%r15d, %esi
 1884 0746 488B07   		movq	(%rdi), %rax
 1885 0749 44894C24 		movl	%r9d, 8(%rsp)
 1885      08
 1886 074e FF5020   		call	*32(%rax)
 1887              	.LVL214:
 1888 0751 448B4C24 		movl	8(%rsp), %r9d
 1888      08
 1889 0756 E9E6FEFF 		jmp	.L134
 1889      FF
 1890              	.LVL215:
 1891 075b 0F1F4400 		.p2align 4,,10
 1891      00
 1892              		.p2align 3
 1893              	.L129:
 1894              	.LBE555:
 1895              	.LBE554:
 1896              	.LBB556:
 1897              	.LBB557:
 1898              		.loc 7 317 0
 1899 0760 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1899      000000
 1900 0767 4183C702 		addl	$2, %r15d
 1901              	.LVL216:
 1902 076b 4589C8   		movl	%r9d, %r8d
 1903 076e 4489C9   		movl	%r9d, %ecx
 1904 0771 F20F100D 		movsd	.LC14(%rip), %xmm1
 1904      00000000 
 1905 0779 660FEFC0 		pxor	%xmm0, %xmm0
 1906 077d 89EA     		movl	%ebp, %edx
 1907 077f 488B07   		movq	(%rdi), %rax
 1908 0782 4489FE   		movl	%r15d, %esi
 1909 0785 44894C24 		movl	%r9d, 8(%rsp)
 1909      08
 1910 078a FF900801 		call	*264(%rax)
 1910      0000
 1911              	.LVL217:
 1912 0790 448B4C24 		movl	8(%rsp), %r9d
 1912      08
 1913 0795 E9A7FEFF 		jmp	.L134
 1913      FF
 1914              	.LVL218:
 1915              	.L178:
 1916              	.LBE557:
 1917              	.LBE556:
 1918              	.LBE559:
 1919              	.LBE562:
 1920              	.LBE590:
 1921              	.LBE596:
 1922              	.LBE600:
 1923              	.LBE609:
 281:fltk-1.3.4-1/src/Fl_Menu.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1924              		.loc 4 281 0
 1925 079a E8000000 		call	__stack_chk_fail
 1925      00
 1926              	.LVL219:
 1927              		.cfi_endproc
 1928              	.LFE560:
 1930              		.section	.text.unlikely._ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
 1931              	.LCOLDE20:
 1932              		.section	.text._ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
 1933              	.LHOTE20:
 1934              		.section	.text.unlikely._ZN9menutitle4drawEv,"ax",@progbits
 1935              		.align 2
 1936              	.LCOLDB21:
 1937              		.section	.text._ZN9menutitle4drawEv,"ax",@progbits
 1938              	.LHOTB21:
 1939              		.align 2
 1940              		.p2align 4,,15
 1941              		.globl	_ZN9menutitle4drawEv
 1943              	_ZN9menutitle4drawEv:
 1944              	.LFB574:
 505:fltk-1.3.4-1/src/Fl_Menu.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 1945              		.loc 4 505 0
 1946              		.cfi_startproc
 1947              	.LVL220:
 1948 0000 4889F8   		movq	%rdi, %rax
 1949 0003 4883EC10 		subq	$16, %rsp
 1950              		.cfi_def_cfa_offset 24
 506:fltk-1.3.4-1/src/Fl_Menu.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 1951              		.loc 4 506 0
 1952 0007 8B4F28   		movl	40(%rdi), %ecx
 1953 000a 4C8B0D00 		movq	_ZL6button(%rip), %r9
 1953      000000
 1954 0011 488BBFF0 		movq	240(%rdi), %rdi
 1954      000000
 1955              	.LVL221:
 1956 0018 31D2     		xorl	%edx, %edx
 1957 001a 448B402C 		movl	44(%rax), %r8d
 1958 001e 6A02     		pushq	$2
 1959              		.cfi_def_cfa_offset 32
 1960 0020 31F6     		xorl	%esi, %esi
 1961 0022 E8000000 		call	_ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
 1961      00
 1962              	.LVL222:
 507:fltk-1.3.4-1/src/Fl_Menu.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 1963              		.loc 4 507 0
 1964 0027 4883C418 		addq	$24, %rsp
 1965              		.cfi_def_cfa_offset 8
 1966 002b C3       		ret
 1967              		.cfi_endproc
 1968              	.LFE574:
 1970              		.section	.text.unlikely._ZN9menutitle4drawEv
 1971              	.LCOLDE21:
 1972              		.section	.text._ZN9menutitle4drawEv
 1973              	.LHOTE21:
 1974              		.section	.text.unlikely._ZN9menutitleC2EiiiiPK12Fl_Menu_Item,"ax",@progbits
 1975              		.align 2
 1976              	.LCOLDB22:
 1977              		.section	.text._ZN9menutitleC2EiiiiPK12Fl_Menu_Item,"ax",@progbits
 1978              	.LHOTB22:
 1979              		.align 2
 1980              		.p2align 4,,15
 1981              		.globl	_ZN9menutitleC2EiiiiPK12Fl_Menu_Item
 1983              	_ZN9menutitleC2EiiiiPK12Fl_Menu_Item:
 1984              	.LFB562:
 283:fltk-1.3.4-1/src/Fl_Menu.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 1985              		.loc 4 283 0
 1986              		.cfi_startproc
 1987              	.LVL223:
 1988 0000 55       		pushq	%rbp
 1989              		.cfi_def_cfa_offset 16
 1990              		.cfi_offset 6, -16
 1991 0001 53       		pushq	%rbx
 1992              		.cfi_def_cfa_offset 24
 1993              		.cfi_offset 3, -24
 1994 0002 4C89CD   		movq	%r9, %rbp
 1995 0005 4889FB   		movq	%rdi, %rbx
 1996              	.LBB610:
 284:fltk-1.3.4-1/src/Fl_Menu.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 1997              		.loc 4 284 0
 1998 0008 4531C9   		xorl	%r9d, %r9d
 1999              	.LVL224:
 2000              	.LBE610:
 283:fltk-1.3.4-1/src/Fl_Menu.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 2001              		.loc 4 283 0
 2002 000b 4883EC08 		subq	$8, %rsp
 2003              		.cfi_def_cfa_offset 32
 2004              	.LBB620:
 284:fltk-1.3.4-1/src/Fl_Menu.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 2005              		.loc 4 284 0
 2006 000f E8000000 		call	_ZN14Fl_Menu_WindowC2EiiiiPKc
 2006      00
 2007              	.LVL225:
 2008 0014 48C70300 		movq	$_ZTV9menutitle+16, (%rbx)
 2008      000000
 285:fltk-1.3.4-1/src/Fl_Menu.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2009              		.loc 4 285 0
 2010 001b 4889DF   		movq	%rbx, %rdi
 2011 001e E8000000 		call	_ZN8Fl_Group3endEv
 2011      00
 2012              	.LVL226:
 2013              	.LBB611:
 2014              	.LBB612:
 2015              	.LBB613:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2016              		.loc 1 149 0
 2017 0023 8B4360   		movl	96(%rbx), %eax
 2018              	.LVL227:
 2019              	.LBE613:
 2020              	.LBE612:
 2021              	.LBE611:
 289:fltk-1.3.4-1/src/Fl_Menu.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2022              		.loc 4 289 0
 2023 0026 4889ABF0 		movq	%rbp, 240(%rbx)
 2023      000000
 2024              	.LBB614:
 2025              	.LBB615:
 2026              	.LBB616:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2027              		.loc 1 149 0
 2028 002d 89C2     		movl	%eax, %edx
 2029 002f 81CA0850 		orl	$20488, %edx
 2029      0000
 2030 0035 895360   		movl	%edx, 96(%rbx)
 2031              	.LVL228:
 2032              	.LBE616:
 2033              	.LBE615:
 2034              	.LBE614:
 290:fltk-1.3.4-1/src/Fl_Menu.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 2035              		.loc 4 290 0
 2036 0038 8B5530   		movl	48(%rbp), %edx
 2037 003b 85D2     		testl	%edx, %edx
 2038 003d 750A     		jne	.L183
 2039 003f 48833D00 		cmpq	$0, _ZN2Fl7scheme_E(%rip)
 2039      00000000 
 2040 0047 7417     		je	.L186
 2041              	.L183:
 2042              	.LVL229:
 2043              	.LBB617:
 2044              	.LBB618:
 2045              	.LBB619:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2046              		.loc 1 149 0
 2047 0049 0D08D000 		orl	$53256, %eax
 2047      00
 2048 004e 894360   		movl	%eax, 96(%rbx)
 2049              	.LVL230:
 2050              	.L182:
 2051              	.LBE619:
 2052              	.LBE618:
 2053              	.LBE617:
 2054              	.LBE620:
 291:fltk-1.3.4-1/src/Fl_Menu.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2055              		.loc 4 291 0
 2056 0051 4883C408 		addq	$8, %rsp
 2057              		.cfi_remember_state
 2058              		.cfi_def_cfa_offset 24
 2059 0055 5B       		popq	%rbx
 2060              		.cfi_def_cfa_offset 16
 2061              	.LVL231:
 2062 0056 5D       		popq	%rbp
 2063              		.cfi_def_cfa_offset 8
 2064              	.LVL232:
 2065 0057 C3       		ret
 2066              	.LVL233:
 2067 0058 0F1F8400 		.p2align 4,,10
 2067      00000000 
 2068              		.p2align 3
 2069              	.L186:
 2070              		.cfi_restore_state
 2071              	.LBB621:
 290:fltk-1.3.4-1/src/Fl_Menu.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 2072              		.loc 4 290 0 discriminator 4
 2073 0060 807D2401 		cmpb	$1, 36(%rbp)
 2074 0064 77E3     		ja	.L183
 2075 0066 EBE9     		jmp	.L182
 2076              	.LBE621:
 2077              		.cfi_endproc
 2078              	.LFE562:
 2080              		.section	.text.unlikely._ZN9menutitleC2EiiiiPK12Fl_Menu_Item
 2081              	.LCOLDE22:
 2082              		.section	.text._ZN9menutitleC2EiiiiPK12Fl_Menu_Item
 2083              	.LHOTE22:
 2084              		.globl	_ZN9menutitleC1EiiiiPK12Fl_Menu_Item
 2085              		.set	_ZN9menutitleC1EiiiiPK12Fl_Menu_Item,_ZN9menutitleC2EiiiiPK12Fl_Menu_Item
 2086              		.section	.text.unlikely._ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii,"ax",@progbits
 2087              		.align 2
 2088              	.LCOLDB23:
 2089              		.section	.text._ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii,"ax",@progbits
 2090              	.LHOTB23:
 2091              		.align 2
 2092              		.p2align 4,,15
 2093              		.globl	_ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii
 2095              	_ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii:
 2096              	.LFB565:
 293:fltk-1.3.4-1/src/Fl_Menu.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2097              		.loc 4 293 0
 2098              		.cfi_startproc
 2099              	.LVL234:
 2100 0000 4157     		pushq	%r15
 2101              		.cfi_def_cfa_offset 16
 2102              		.cfi_offset 15, -16
 2103 0002 4156     		pushq	%r14
 2104              		.cfi_def_cfa_offset 24
 2105              		.cfi_offset 14, -24
 2106 0004 89C8     		movl	%ecx, %eax
 2107 0006 4155     		pushq	%r13
 2108              		.cfi_def_cfa_offset 32
 2109              		.cfi_offset 13, -32
 2110 0008 4154     		pushq	%r12
 2111              		.cfi_def_cfa_offset 40
 2112              		.cfi_offset 12, -40
 2113 000a 4589CD   		movl	%r9d, %r13d
 2114 000d 55       		pushq	%rbp
 2115              		.cfi_def_cfa_offset 48
 2116              		.cfi_offset 6, -48
 2117 000e 53       		pushq	%rbx
 2118              		.cfi_def_cfa_offset 56
 2119              		.cfi_offset 3, -56
 2120 000f 4589C4   		movl	%r8d, %r12d
 2121              	.LBB690:
 296:fltk-1.3.4-1/src/Fl_Menu.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2122              		.loc 4 296 0
 2123 0012 4531C9   		xorl	%r9d, %r9d
 2124              	.LVL235:
 2125              	.LBE690:
 293:fltk-1.3.4-1/src/Fl_Menu.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2126              		.loc 4 293 0
 2127 0015 4989F6   		movq	%rsi, %r14
 2128              	.LBB757:
 296:fltk-1.3.4-1/src/Fl_Menu.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2129              		.loc 4 296 0
 2130 0018 4589E8   		movl	%r13d, %r8d
 2131              	.LVL236:
 2132              	.LBE757:
 293:fltk-1.3.4-1/src/Fl_Menu.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2133              		.loc 4 293 0
 2134 001b 4883EC68 		subq	$104, %rsp
 2135              		.cfi_def_cfa_offset 160
 293:fltk-1.3.4-1/src/Fl_Menu.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2136              		.loc 4 293 0
 2137 001f 89D6     		movl	%edx, %esi
 2138              	.LVL237:
 2139 0021 4889FB   		movq	%rdi, %rbx
 2140 0024 894C2428 		movl	%ecx, 40(%rsp)
 2141 0028 488B8C24 		movq	168(%rsp), %rcx
 2141      A8000000 
 2142              	.LVL238:
 2143 0030 8954242C 		movl	%edx, 44(%rsp)
 2144              	.LBB758:
 296:fltk-1.3.4-1/src/Fl_Menu.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2145              		.loc 4 296 0
 2146 0034 89C2     		movl	%eax, %edx
 2147              	.LVL239:
 2148              	.LBE758:
 293:fltk-1.3.4-1/src/Fl_Menu.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2149              		.loc 4 293 0
 2150 0036 488BAC24 		movq	160(%rsp), %rbp
 2150      A0000000 
 2151 003e 48894C24 		movq	%rcx, 24(%rsp)
 2151      18
 2152 0043 64488B0C 		movq	%fs:40, %rcx
 2152      25280000 
 2152      00
 2153 004c 48894C24 		movq	%rcx, 88(%rsp)
 2153      58
 2154 0051 31C9     		xorl	%ecx, %ecx
 2155              	.LBB759:
 296:fltk-1.3.4-1/src/Fl_Menu.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2156              		.loc 4 296 0
 2157 0053 4489E1   		movl	%r12d, %ecx
 2158 0056 E8000000 		call	_ZN14Fl_Menu_WindowC2EiiiiPKc
 2158      00
 2159              	.LVL240:
 2160              	.LBB691:
 2161              	.LBB692:
 2162              	.LBB693:
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
 556:fltk-1.3.4-1/FL/Fl.H ****   /** Selects the window to grab.  
 557:fltk-1.3.4-1/FL/Fl.H ****    This is used when pop-up menu systems are active.
 558:fltk-1.3.4-1/FL/Fl.H ****    
 559:fltk-1.3.4-1/FL/Fl.H ****    Send all events to the passed window no matter where the pointer or
 560:fltk-1.3.4-1/FL/Fl.H ****    focus is (including in other programs). The window <I>does not have
 561:fltk-1.3.4-1/FL/Fl.H ****    to be shown()</I> , this lets the handle() method of a
 562:fltk-1.3.4-1/FL/Fl.H ****    "dummy" window override all event handling and allows you to
 563:fltk-1.3.4-1/FL/Fl.H ****    map and unmap a complex set of windows (under both X and WIN32
 564:fltk-1.3.4-1/FL/Fl.H ****    <I>some</I> window must be mapped because the system interface needs a
 565:fltk-1.3.4-1/FL/Fl.H ****    window id).
 566:fltk-1.3.4-1/FL/Fl.H ****    
 567:fltk-1.3.4-1/FL/Fl.H ****    If grab() is on it will also affect show() of windows by doing
 568:fltk-1.3.4-1/FL/Fl.H ****    system-specific operations (on X it turns on override-redirect).
 569:fltk-1.3.4-1/FL/Fl.H ****    These are designed to make menus popup reliably
 570:fltk-1.3.4-1/FL/Fl.H ****    and faster on the system.
 571:fltk-1.3.4-1/FL/Fl.H ****    
 572:fltk-1.3.4-1/FL/Fl.H ****    To turn off grabbing do Fl::grab(0).
 573:fltk-1.3.4-1/FL/Fl.H ****    
 574:fltk-1.3.4-1/FL/Fl.H ****    <I>Be careful that your program does not enter an infinite loop
 575:fltk-1.3.4-1/FL/Fl.H ****    while grab() is on.  On X this will lock up your screen!</I>
 576:fltk-1.3.4-1/FL/Fl.H ****    To avoid this potential lockup, all newer operating systems seem to 
 577:fltk-1.3.4-1/FL/Fl.H ****    limit mouse pointer grabbing to the time during which a mouse button 
 578:fltk-1.3.4-1/FL/Fl.H ****    is held down. Some OS's may not support grabbing at all.
 579:fltk-1.3.4-1/FL/Fl.H ****    */
 580:fltk-1.3.4-1/FL/Fl.H ****   static void grab(Fl_Window*); // platform dependent
 581:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 582:fltk-1.3.4-1/FL/Fl.H **** 
 583:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup fl_events Events handling functions
 584:fltk-1.3.4-1/FL/Fl.H **** 	Fl class events handling API declared in <FL/Fl.H>
 585:fltk-1.3.4-1/FL/Fl.H **** 	@{
 586:fltk-1.3.4-1/FL/Fl.H ****   */
 587:fltk-1.3.4-1/FL/Fl.H ****   // event information:
 588:fltk-1.3.4-1/FL/Fl.H ****   /**
 589:fltk-1.3.4-1/FL/Fl.H ****     Returns the last event that was processed. This can be used
 590:fltk-1.3.4-1/FL/Fl.H ****     to determine if a callback is being done in response to a
 591:fltk-1.3.4-1/FL/Fl.H ****     keypress, mouse click, etc.
 592:fltk-1.3.4-1/FL/Fl.H ****   */
 593:fltk-1.3.4-1/FL/Fl.H ****   static int event()		{return e_number;}
 594:fltk-1.3.4-1/FL/Fl.H ****   /**
 595:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position of the event relative to the Fl_Window
 596:fltk-1.3.4-1/FL/Fl.H ****     it was passed to.
 597:fltk-1.3.4-1/FL/Fl.H ****   */
 598:fltk-1.3.4-1/FL/Fl.H ****   static int event_x()	{return e_x;}
 599:fltk-1.3.4-1/FL/Fl.H ****   /**
 600:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position of the event relative to the Fl_Window
 601:fltk-1.3.4-1/FL/Fl.H ****     it was passed to.
 602:fltk-1.3.4-1/FL/Fl.H ****   */
 603:fltk-1.3.4-1/FL/Fl.H ****   static int event_y()	{return e_y;}
 604:fltk-1.3.4-1/FL/Fl.H ****   /**
 605:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position on the screen of the event.  To find the
 606:fltk-1.3.4-1/FL/Fl.H ****     absolute position of an Fl_Window on the screen, use the
 607:fltk-1.3.4-1/FL/Fl.H ****     difference between event_x_root(),event_y_root() and 
 608:fltk-1.3.4-1/FL/Fl.H ****     event_x(),event_y().
 609:fltk-1.3.4-1/FL/Fl.H ****   */
 610:fltk-1.3.4-1/FL/Fl.H ****   static int event_x_root()	{return e_x_root;}
 611:fltk-1.3.4-1/FL/Fl.H ****   /**
 612:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position on the screen of the event.  To find the
 613:fltk-1.3.4-1/FL/Fl.H ****     absolute position of an Fl_Window on the screen, use the
 614:fltk-1.3.4-1/FL/Fl.H ****     difference between event_x_root(),event_y_root() and 
 615:fltk-1.3.4-1/FL/Fl.H ****     event_x(),event_y().
 616:fltk-1.3.4-1/FL/Fl.H ****   */
 617:fltk-1.3.4-1/FL/Fl.H ****   static int event_y_root()	{return e_y_root;}
 618:fltk-1.3.4-1/FL/Fl.H ****   /**
 619:fltk-1.3.4-1/FL/Fl.H ****     Returns the current horizontal mouse scrolling associated with the
 620:fltk-1.3.4-1/FL/Fl.H ****     FL_MOUSEWHEEL event. Right is positive.
 621:fltk-1.3.4-1/FL/Fl.H ****   */
 622:fltk-1.3.4-1/FL/Fl.H ****   static int event_dx()	{return e_dx;}
 623:fltk-1.3.4-1/FL/Fl.H ****   /**
 624:fltk-1.3.4-1/FL/Fl.H ****     Returns the current vertical mouse scrolling associated with the
 625:fltk-1.3.4-1/FL/Fl.H ****     FL_MOUSEWHEEL event. Down is positive.
 626:fltk-1.3.4-1/FL/Fl.H ****   */
 627:fltk-1.3.4-1/FL/Fl.H ****   static int event_dy()	{return e_dy;}
 628:fltk-1.3.4-1/FL/Fl.H ****   /**
 629:fltk-1.3.4-1/FL/Fl.H ****     Return where the mouse is on the screen by doing a round-trip query to
 630:fltk-1.3.4-1/FL/Fl.H ****     the server.  You should use Fl::event_x_root() and 
 631:fltk-1.3.4-1/FL/Fl.H ****     Fl::event_y_root() if possible, but this is necessary if you are
 632:fltk-1.3.4-1/FL/Fl.H ****     not sure if a mouse event has been processed recently (such as to
 633:fltk-1.3.4-1/FL/Fl.H ****     position your first window).  If the display is not open, this will
 634:fltk-1.3.4-1/FL/Fl.H ****     open it.
 635:fltk-1.3.4-1/FL/Fl.H ****   */
 636:fltk-1.3.4-1/FL/Fl.H ****   static void get_mouse(int &,int &); // platform dependent
 637:fltk-1.3.4-1/FL/Fl.H ****   /**
 638:fltk-1.3.4-1/FL/Fl.H ****     Returns non zero if we had a double click event.
 639:fltk-1.3.4-1/FL/Fl.H ****     \retval Non-zero if the most recent FL_PUSH or FL_KEYBOARD was a "double click".  
 640:fltk-1.3.4-1/FL/Fl.H ****     \retval  N-1 for  N clicks. 
 641:fltk-1.3.4-1/FL/Fl.H ****     A double click is counted if the same button is pressed
 642:fltk-1.3.4-1/FL/Fl.H ****     again while event_is_click() is true.
 643:fltk-1.3.4-1/FL/Fl.H ****     
 644:fltk-1.3.4-1/FL/Fl.H ****    */
 645:fltk-1.3.4-1/FL/Fl.H ****   static int event_clicks()	{return e_clicks;}
 646:fltk-1.3.4-1/FL/Fl.H ****   /**
 647:fltk-1.3.4-1/FL/Fl.H ****     Manually sets the number returned by Fl::event_clicks().  
 648:fltk-1.3.4-1/FL/Fl.H ****     This can be used to set it to zero so that
 649:fltk-1.3.4-1/FL/Fl.H ****     later code does not think an item was double-clicked.
 650:fltk-1.3.4-1/FL/Fl.H ****     \param[in] i corresponds to no double-click if 0, i+1 mouse clicks otherwise
 651:fltk-1.3.4-1/FL/Fl.H ****     \see int event_clicks()
 652:fltk-1.3.4-1/FL/Fl.H ****   */
 653:fltk-1.3.4-1/FL/Fl.H ****   static void event_clicks(int i) {e_clicks = i;}
 654:fltk-1.3.4-1/FL/Fl.H ****   /**
 655:fltk-1.3.4-1/FL/Fl.H ****   Returns non-zero if the mouse has not moved far enough
 656:fltk-1.3.4-1/FL/Fl.H ****   and not enough time has passed since the last FL_PUSH or 
 657:fltk-1.3.4-1/FL/Fl.H ****   FL_KEYBOARD event for it to be considered a "drag" rather than a
 658:fltk-1.3.4-1/FL/Fl.H ****   "click".  You can test this on FL_DRAG, FL_RELEASE,
 659:fltk-1.3.4-1/FL/Fl.H ****   and FL_MOVE events.  
 660:fltk-1.3.4-1/FL/Fl.H ****   */
 661:fltk-1.3.4-1/FL/Fl.H ****   static int event_is_click()	{return e_is_click;}
 662:fltk-1.3.4-1/FL/Fl.H ****   /**
 663:fltk-1.3.4-1/FL/Fl.H ****    Clears the value returned by Fl::event_is_click().  
 664:fltk-1.3.4-1/FL/Fl.H ****    Useful to prevent the <I>next</I>
 665:fltk-1.3.4-1/FL/Fl.H ****    click from being counted as a double-click or to make a popup menu
 666:fltk-1.3.4-1/FL/Fl.H ****    pick an item with a single click.  Don't pass non-zero to this. 
 667:fltk-1.3.4-1/FL/Fl.H ****   */
 668:fltk-1.3.4-1/FL/Fl.H ****   static void event_is_click(int i) {e_is_click = i;}
 669:fltk-1.3.4-1/FL/Fl.H ****   /**
 670:fltk-1.3.4-1/FL/Fl.H ****     Gets which particular mouse button caused the current event.
 671:fltk-1.3.4-1/FL/Fl.H **** 
 672:fltk-1.3.4-1/FL/Fl.H ****     This returns garbage if the most recent event was not a FL_PUSH or FL_RELEASE event.
 673:fltk-1.3.4-1/FL/Fl.H ****     \retval FL_LEFT_MOUSE \retval FL_MIDDLE_MOUSE \retval FL_RIGHT_MOUSE.
 674:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::event_buttons()
 675:fltk-1.3.4-1/FL/Fl.H ****   */
 676:fltk-1.3.4-1/FL/Fl.H ****   static int event_button()	{return e_keysym-FL_Button;}
 677:fltk-1.3.4-1/FL/Fl.H ****   /**
 678:fltk-1.3.4-1/FL/Fl.H ****     Returns the keyboard and mouse button states of the last event.
 679:fltk-1.3.4-1/FL/Fl.H **** 
 680:fltk-1.3.4-1/FL/Fl.H ****     This is a bitfield of what shift states were on and what mouse buttons
 681:fltk-1.3.4-1/FL/Fl.H ****     were held down during the most recent event.
 682:fltk-1.3.4-1/FL/Fl.H **** 
 683:fltk-1.3.4-1/FL/Fl.H ****     The legal event state bits are:
 684:fltk-1.3.4-1/FL/Fl.H **** 
 685:fltk-1.3.4-1/FL/Fl.H ****     - FL_SHIFT
 686:fltk-1.3.4-1/FL/Fl.H ****     - FL_CAPS_LOCK
 687:fltk-1.3.4-1/FL/Fl.H ****     - FL_CTRL
 688:fltk-1.3.4-1/FL/Fl.H ****     - FL_ALT
 689:fltk-1.3.4-1/FL/Fl.H ****     - FL_NUM_LOCK
 690:fltk-1.3.4-1/FL/Fl.H ****     - FL_META
 691:fltk-1.3.4-1/FL/Fl.H ****     - FL_SCROLL_LOCK
 692:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON1
 693:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON2
 694:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON3
 695:fltk-1.3.4-1/FL/Fl.H ****     
 696:fltk-1.3.4-1/FL/Fl.H ****     X servers do not agree on shift states, and FL_NUM_LOCK, FL_META, and
 697:fltk-1.3.4-1/FL/Fl.H ****     FL_SCROLL_LOCK may not work. The values were selected to match the
 698:fltk-1.3.4-1/FL/Fl.H ****     XFree86 server on Linux. In addition there is a bug in the way X works
 699:fltk-1.3.4-1/FL/Fl.H ****     so that the shift state is not correctly reported until the first event
 700:fltk-1.3.4-1/FL/Fl.H ****     <I>after</I> the shift key is pressed or released.
 701:fltk-1.3.4-1/FL/Fl.H ****   */
 702:fltk-1.3.4-1/FL/Fl.H ****   static int event_state()	{return e_state;}
 703:fltk-1.3.4-1/FL/Fl.H **** 
 704:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if any of the passed event state bits are turned on.
 705:fltk-1.3.4-1/FL/Fl.H **** 
 706:fltk-1.3.4-1/FL/Fl.H ****     Use \p mask to pass the event states you're interested in.
 707:fltk-1.3.4-1/FL/Fl.H ****     The legal event state bits are defined in Fl::event_state().
 708:fltk-1.3.4-1/FL/Fl.H ****   */
 709:fltk-1.3.4-1/FL/Fl.H ****   static int event_state(int mask) {return e_state&mask;}
 710:fltk-1.3.4-1/FL/Fl.H ****   /**
 711:fltk-1.3.4-1/FL/Fl.H ****     Gets which key on the keyboard was last pushed.
 712:fltk-1.3.4-1/FL/Fl.H **** 
 713:fltk-1.3.4-1/FL/Fl.H ****     The returned integer 'key code' is not necessarily a text
 714:fltk-1.3.4-1/FL/Fl.H ****     equivalent for the keystroke. For instance: if someone presses '5' on the 
 715:fltk-1.3.4-1/FL/Fl.H ****     numeric keypad with numlock on, Fl::event_key() may return the 'key code'
 716:fltk-1.3.4-1/FL/Fl.H ****     for this key, and NOT the character '5'. To always get the '5', use Fl::event_text() instead.
 717:fltk-1.3.4-1/FL/Fl.H ****     
 718:fltk-1.3.4-1/FL/Fl.H ****     \returns an integer 'key code', or 0 if the last event was not a key press or release.
 719:fltk-1.3.4-1/FL/Fl.H ****     \see int event_key(int), event_text(), compose(int&).
 720:fltk-1.3.4-1/FL/Fl.H ****   */
 721:fltk-1.3.4-1/FL/Fl.H ****   static int event_key()	{return e_keysym;}
 722:fltk-1.3.4-1/FL/Fl.H ****   /**
 723:fltk-1.3.4-1/FL/Fl.H ****     Returns the keycode of the last key event, regardless of the NumLock state.
 724:fltk-1.3.4-1/FL/Fl.H ****       
 725:fltk-1.3.4-1/FL/Fl.H ****     If NumLock is deactivated, FLTK translates events from the 
 726:fltk-1.3.4-1/FL/Fl.H ****     numeric keypad into the corresponding arrow key events. 
 727:fltk-1.3.4-1/FL/Fl.H ****     event_key() returns the translated key code, whereas
 728:fltk-1.3.4-1/FL/Fl.H ****     event_original_key() returns the keycode before NumLock translation.
 729:fltk-1.3.4-1/FL/Fl.H ****   */
 730:fltk-1.3.4-1/FL/Fl.H ****   static int event_original_key(){return e_original_keysym;}
 731:fltk-1.3.4-1/FL/Fl.H ****   /** 
 732:fltk-1.3.4-1/FL/Fl.H ****     Returns true if the given \p key was held
 733:fltk-1.3.4-1/FL/Fl.H ****     down (or pressed) <I>during</I> the last event.  This is constant until
 734:fltk-1.3.4-1/FL/Fl.H ****     the next event is read from the server.
 735:fltk-1.3.4-1/FL/Fl.H ****     
 736:fltk-1.3.4-1/FL/Fl.H ****     Fl::get_key(int) returns true if the given key is held down <I>now</I>.
 737:fltk-1.3.4-1/FL/Fl.H ****     Under X this requires a round-trip to the server and is <I>much</I>
 738:fltk-1.3.4-1/FL/Fl.H ****     slower than Fl::event_key(int).
 739:fltk-1.3.4-1/FL/Fl.H ****     
 740:fltk-1.3.4-1/FL/Fl.H ****     Keys are identified by the <I>unshifted</I> values. FLTK defines a
 741:fltk-1.3.4-1/FL/Fl.H ****     set of symbols that should work on most modern machines for every key
 742:fltk-1.3.4-1/FL/Fl.H ****     on the keyboard:
 743:fltk-1.3.4-1/FL/Fl.H ****     
 744:fltk-1.3.4-1/FL/Fl.H ****     \li All keys on the main keyboard producing a printable ASCII
 745:fltk-1.3.4-1/FL/Fl.H **** 	character use the value of that ASCII character (as though shift,
 746:fltk-1.3.4-1/FL/Fl.H **** 	ctrl, and caps lock were not on). The space bar is 32.
 747:fltk-1.3.4-1/FL/Fl.H ****     \li All keys on the numeric keypad producing a printable ASCII
 748:fltk-1.3.4-1/FL/Fl.H **** 	character use the value of that ASCII character plus FL_KP.
 749:fltk-1.3.4-1/FL/Fl.H **** 	The highest possible value is FL_KP_Last so you can
 750:fltk-1.3.4-1/FL/Fl.H **** 	range-check to see if something is  on the keypad.
 751:fltk-1.3.4-1/FL/Fl.H ****     \li All numbered function keys use the number on the function key plus 
 752:fltk-1.3.4-1/FL/Fl.H **** 	FL_F.  The highest possible number is FL_F_Last, so you
 753:fltk-1.3.4-1/FL/Fl.H **** 	can range-check a value.
 754:fltk-1.3.4-1/FL/Fl.H ****     \li Buttons on the mouse are considered keys, and use the button
 755:fltk-1.3.4-1/FL/Fl.H **** 	number (where the left button is 1) plus FL_Button.
 756:fltk-1.3.4-1/FL/Fl.H ****     \li All other keys on the keypad have a symbol: FL_Escape,
 757:fltk-1.3.4-1/FL/Fl.H **** 	FL_BackSpace, FL_Tab, FL_Enter, FL_Print, FL_Scroll_Lock, FL_Pause,
 758:fltk-1.3.4-1/FL/Fl.H **** 	FL_Insert, FL_Home, FL_Page_Up, FL_Delete, FL_End, FL_Page_Down,
 759:fltk-1.3.4-1/FL/Fl.H **** 	FL_Left, FL_Up, FL_Right, FL_Down, FL_Iso_Key, FL_Shift_L, FL_Shift_R,
 760:fltk-1.3.4-1/FL/Fl.H **** 	FL_Control_L, FL_Control_R, FL_Caps_Lock, FL_Alt_L, FL_Alt_R,
 761:fltk-1.3.4-1/FL/Fl.H **** 	FL_Meta_L, FL_Meta_R, FL_Menu, FL_Num_Lock, FL_KP_Enter.  Be
 762:fltk-1.3.4-1/FL/Fl.H **** 	careful not to confuse these with the very similar, but all-caps,
 763:fltk-1.3.4-1/FL/Fl.H **** 	symbols used by Fl::event_state().
 764:fltk-1.3.4-1/FL/Fl.H **** 
 765:fltk-1.3.4-1/FL/Fl.H ****     On X Fl::get_key(FL_Button+n) does not work.
 766:fltk-1.3.4-1/FL/Fl.H ****     
 767:fltk-1.3.4-1/FL/Fl.H ****     On WIN32 Fl::get_key(FL_KP_Enter) and Fl::event_key(FL_KP_Enter) do not work.
 768:fltk-1.3.4-1/FL/Fl.H ****   */
 769:fltk-1.3.4-1/FL/Fl.H ****   static int event_key(int key);
 770:fltk-1.3.4-1/FL/Fl.H ****   /** 
 771:fltk-1.3.4-1/FL/Fl.H ****     Returns true if the given \p key is held down <I>now</I>.  
 772:fltk-1.3.4-1/FL/Fl.H ****     Under X this requires a round-trip to the server and is <I>much</I>
 773:fltk-1.3.4-1/FL/Fl.H ****     slower than Fl::event_key(int). \see event_key(int)
 774:fltk-1.3.4-1/FL/Fl.H ****   */
 775:fltk-1.3.4-1/FL/Fl.H ****   static int get_key(int key); // platform dependent
 776:fltk-1.3.4-1/FL/Fl.H ****   /** 
 777:fltk-1.3.4-1/FL/Fl.H ****     Returns the text associated with the current event, including FL_PASTE or FL_DND_RELEASE events
 778:fltk-1.3.4-1/FL/Fl.H ****     This can be used in response to FL_KEYUP, FL_KEYDOWN, FL_PASTE, and FL_DND_RELEASE.
 779:fltk-1.3.4-1/FL/Fl.H **** 
 780:fltk-1.3.4-1/FL/Fl.H ****     When responding to FL_KEYUP/FL_KEYDOWN, use this function instead of Fl::event_key()
 781:fltk-1.3.4-1/FL/Fl.H ****     to get the text equivalent of keystrokes suitable for inserting into strings 
 782:fltk-1.3.4-1/FL/Fl.H ****     and text widgets.
 783:fltk-1.3.4-1/FL/Fl.H **** 
 784:fltk-1.3.4-1/FL/Fl.H ****     The returned string is guaranteed to be NULL terminated.
 785:fltk-1.3.4-1/FL/Fl.H ****     However, see Fl::event_length() for the actual length of the string,
 786:fltk-1.3.4-1/FL/Fl.H ****     in case the string itself contains NULLs that are part of the text data.
 787:fltk-1.3.4-1/FL/Fl.H **** 
 788:fltk-1.3.4-1/FL/Fl.H ****     \returns A NULL terminated text string equivalent of the last keystroke.
 789:fltk-1.3.4-1/FL/Fl.H ****    */
 790:fltk-1.3.4-1/FL/Fl.H ****   static const char* event_text() {return e_text;}
 791:fltk-1.3.4-1/FL/Fl.H ****   /**
 792:fltk-1.3.4-1/FL/Fl.H ****     Returns the length of the text in Fl::event_text(). There
 793:fltk-1.3.4-1/FL/Fl.H ****     will always be a nul at this position in the text. However there may
 794:fltk-1.3.4-1/FL/Fl.H ****     be a nul before that if the keystroke translates to a nul character or
 795:fltk-1.3.4-1/FL/Fl.H ****     you paste a nul character.
 796:fltk-1.3.4-1/FL/Fl.H ****   */
 797:fltk-1.3.4-1/FL/Fl.H ****   static int event_length() {return e_length;}
 798:fltk-1.3.4-1/FL/Fl.H ****   
 799:fltk-1.3.4-1/FL/Fl.H ****   /** During an FL_PASTE event of non-textual data, returns a pointer to the pasted data.
 800:fltk-1.3.4-1/FL/Fl.H ****    The returned data is an Fl_Image * when the result of Fl::event_clipboard_type() is Fl::clipboar
 801:fltk-1.3.4-1/FL/Fl.H ****    */
 802:fltk-1.3.4-1/FL/Fl.H ****   static void *event_clipboard() { return e_clipboard_data; }
 803:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the type of the pasted data during an FL_PASTE event.
 804:fltk-1.3.4-1/FL/Fl.H ****    This type can be Fl::clipboard_plain_text or Fl::clipboard_image.
 805:fltk-1.3.4-1/FL/Fl.H ****    */
 806:fltk-1.3.4-1/FL/Fl.H ****   static const char *event_clipboard_type() {return e_clipboard_type; }
 807:fltk-1.3.4-1/FL/Fl.H **** 
 808:fltk-1.3.4-1/FL/Fl.H **** 
 809:fltk-1.3.4-1/FL/Fl.H ****   static int compose(int &del);
 810:fltk-1.3.4-1/FL/Fl.H ****   static void compose_reset();
 811:fltk-1.3.4-1/FL/Fl.H ****   static int event_inside(int,int,int,int);
 812:fltk-1.3.4-1/FL/Fl.H ****   static int event_inside(const Fl_Widget*);
 813:fltk-1.3.4-1/FL/Fl.H ****   static int test_shortcut(Fl_Shortcut);
 814:fltk-1.3.4-1/FL/Fl.H **** 
 815:fltk-1.3.4-1/FL/Fl.H ****   /**
 816:fltk-1.3.4-1/FL/Fl.H ****     Enables the system input methods facilities. This is the default.
 817:fltk-1.3.4-1/FL/Fl.H ****     \see disable_im()
 818:fltk-1.3.4-1/FL/Fl.H ****   */
 819:fltk-1.3.4-1/FL/Fl.H ****   static void enable_im();
 820:fltk-1.3.4-1/FL/Fl.H ****   /**
 821:fltk-1.3.4-1/FL/Fl.H ****     Disables the system input methods facilities.
 822:fltk-1.3.4-1/FL/Fl.H ****     \see enable_im()
 823:fltk-1.3.4-1/FL/Fl.H ****   */
 824:fltk-1.3.4-1/FL/Fl.H ****   static void disable_im();
 825:fltk-1.3.4-1/FL/Fl.H **** 
 826:fltk-1.3.4-1/FL/Fl.H ****   // event destinations:
 827:fltk-1.3.4-1/FL/Fl.H ****   static int handle(int, Fl_Window*);
 828:fltk-1.3.4-1/FL/Fl.H ****   static int handle_(int, Fl_Window*);
 829:fltk-1.3.4-1/FL/Fl.H ****   /**  Gets the widget that is below the mouse. 
 830:fltk-1.3.4-1/FL/Fl.H ****        \see  belowmouse(Fl_Widget*) */
 831:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* belowmouse() {return belowmouse_;}
 832:fltk-1.3.4-1/FL/Fl.H ****   static void belowmouse(Fl_Widget*);
 833:fltk-1.3.4-1/FL/Fl.H ****   /** Gets the widget that is being pushed.
 834:fltk-1.3.4-1/FL/Fl.H ****       \see void pushed(Fl_Widget*) */
 835:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* pushed()	{return pushed_;}
 836:fltk-1.3.4-1/FL/Fl.H ****   static void pushed(Fl_Widget*);
 837:fltk-1.3.4-1/FL/Fl.H ****   /** Gets the current Fl::focus() widget. \sa Fl::focus(Fl_Widget*) */
 838:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* focus()	{return focus_;}
 839:fltk-1.3.4-1/FL/Fl.H ****   static void focus(Fl_Widget*);
 840:fltk-1.3.4-1/FL/Fl.H ****   static void add_handler(Fl_Event_Handler h);
 841:fltk-1.3.4-1/FL/Fl.H ****   static void remove_handler(Fl_Event_Handler h);
 842:fltk-1.3.4-1/FL/Fl.H ****   static void add_system_handler(Fl_System_Handler h, void *data);
 843:fltk-1.3.4-1/FL/Fl.H ****   static void remove_system_handler(Fl_System_Handler h);
 844:fltk-1.3.4-1/FL/Fl.H ****   static void event_dispatch(Fl_Event_Dispatch d);
 845:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Event_Dispatch event_dispatch();
 846:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 847:fltk-1.3.4-1/FL/Fl.H **** 
 848:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup  fl_clipboard  Selection & Clipboard functions
 849:fltk-1.3.4-1/FL/Fl.H **** 	FLTK global copy/cut/paste functions declared in <FL/Fl.H>
 850:fltk-1.3.4-1/FL/Fl.H ****    @{ */
 851:fltk-1.3.4-1/FL/Fl.H ****   // cut/paste:
 852:fltk-1.3.4-1/FL/Fl.H ****   /**
 853:fltk-1.3.4-1/FL/Fl.H ****   Copies the data pointed to by \p stuff to the selection buffer 
 854:fltk-1.3.4-1/FL/Fl.H ****   (\p destination is 0), the clipboard (\p destination is 1), or
 855:fltk-1.3.4-1/FL/Fl.H ****   both (\p destination is 2). Copying to both is only relevant on X11,
 856:fltk-1.3.4-1/FL/Fl.H ****   on other platforms it maps to the clipboard (1).
 857:fltk-1.3.4-1/FL/Fl.H ****   \p len is the number of relevant bytes in \p stuff.
 858:fltk-1.3.4-1/FL/Fl.H ****   \p type is always Fl::clipboard_plain_text.
 859:fltk-1.3.4-1/FL/Fl.H ****   The selection buffer is used for
 860:fltk-1.3.4-1/FL/Fl.H ****   middle-mouse pastes and for drag-and-drop selections. The 
 861:fltk-1.3.4-1/FL/Fl.H ****   clipboard is used for traditional copy/cut/paste operations.
 862:fltk-1.3.4-1/FL/Fl.H ****    
 863:fltk-1.3.4-1/FL/Fl.H ****    \note This function is, at present, intended only to copy UTF-8 encoded textual data.
 864:fltk-1.3.4-1/FL/Fl.H ****    To copy graphical data, use the Fl_Copy_Surface class. The \p type argument may allow
 865:fltk-1.3.4-1/FL/Fl.H ****    in the future to copy other kinds of data.
 866:fltk-1.3.4-1/FL/Fl.H ****   */
 867:fltk-1.3.4-1/FL/Fl.H **** #if FLTK_ABI_VERSION >= 10303 || defined(FL_DOXYGEN)
 868:fltk-1.3.4-1/FL/Fl.H ****   static void copy(const char* stuff, int len, int destination = 0, const char *type = Fl::clipboar
 869:fltk-1.3.4-1/FL/Fl.H **** #else
 870:fltk-1.3.4-1/FL/Fl.H ****   static void copy(const char* stuff, int len, int destination, const char *type);
 871:fltk-1.3.4-1/FL/Fl.H ****   static void copy(const char* stuff, int len, int destination = 0);
 872:fltk-1.3.4-1/FL/Fl.H **** #endif
 873:fltk-1.3.4-1/FL/Fl.H ****   
 874:fltk-1.3.4-1/FL/Fl.H **** #if !(defined(__APPLE__) || defined(WIN32) || defined(FL_DOXYGEN))
 875:fltk-1.3.4-1/FL/Fl.H ****   static void copy_image(const unsigned char* data, int W, int H, int destination = 0); // platform
 876:fltk-1.3.4-1/FL/Fl.H **** #endif
 877:fltk-1.3.4-1/FL/Fl.H ****   /**
 878:fltk-1.3.4-1/FL/Fl.H ****   Pastes the data from the selection buffer (\p source is 0) or the clipboard 
 879:fltk-1.3.4-1/FL/Fl.H ****   (\p source is 1) into \p receiver.  
 880:fltk-1.3.4-1/FL/Fl.H **** 
 881:fltk-1.3.4-1/FL/Fl.H ****   The selection buffer (\p source is 0) is used for middle-mouse pastes and for
 882:fltk-1.3.4-1/FL/Fl.H ****   drag-and-drop selections. The clipboard (\p source is 1) is used for
 883:fltk-1.3.4-1/FL/Fl.H ****   copy/cut/paste operations.
 884:fltk-1.3.4-1/FL/Fl.H **** 
 885:fltk-1.3.4-1/FL/Fl.H ****   If \p source is 1, the optional \p type argument indicates what type of data is requested from th
 886:fltk-1.3.4-1/FL/Fl.H ****   At present, Fl::clipboard_plain_text (requesting text data) and
 887:fltk-1.3.4-1/FL/Fl.H ****   Fl::clipboard_image (requesting image data) are possible.
 888:fltk-1.3.4-1/FL/Fl.H ****   Set things up so the handle function of the \p receiver widget will be called with an FL_PASTE ev
 889:fltk-1.3.4-1/FL/Fl.H ****   time in the future if the clipboard does contain data of the requested type. 
 890:fltk-1.3.4-1/FL/Fl.H ****   While processing the FL_PASTE event:
 891:fltk-1.3.4-1/FL/Fl.H ****   \li if \p type is Fl::clipboard_plain_text, the text string from the specified \p source is in Fl
 892:fltk-1.3.4-1/FL/Fl.H ****    with UTF-8 encoding, and the number of bytes in Fl::event_length(). 
 893:fltk-1.3.4-1/FL/Fl.H ****    If Fl::paste() gets called during the drop step of a files-drag-and-drop operation,
 894:fltk-1.3.4-1/FL/Fl.H ****    Fl::event_text() contains a list of filenames (see \ref events_dnd).
 895:fltk-1.3.4-1/FL/Fl.H ****   \li if \p type is Fl::clipboard_image, the pointer returned by Fl::event_clipboard() can be safel
 896:fltk-1.3.4-1/FL/Fl.H ****    type Fl_Image * to obtain a pointer to the pasted image. Furthermore, starting with FLTK 1.3.4, 
 897:fltk-1.3.4-1/FL/Fl.H ****    of type Fl_RGB_Image across all platforms. 
 898:fltk-1.3.4-1/FL/Fl.H ****    If \p receiver accepts the clipboard image, receiver.handle() should return 1 and the
 899:fltk-1.3.4-1/FL/Fl.H ****    application should take ownership of this image (that is, delete it after use). 
 900:fltk-1.3.4-1/FL/Fl.H ****    Conversely, if receiver.handle() returns 0, the application must not use the image.
 901:fltk-1.3.4-1/FL/Fl.H **** 
 902:fltk-1.3.4-1/FL/Fl.H ****   The receiver should be prepared to be called \e directly by this, or for
 903:fltk-1.3.4-1/FL/Fl.H ****   it to happen \e later, or possibly <i>not at all</i>.  This
 904:fltk-1.3.4-1/FL/Fl.H ****   allows the window system to take as long as necessary to retrieve
 905:fltk-1.3.4-1/FL/Fl.H ****   the paste buffer (or even to screw up completely) without complex
 906:fltk-1.3.4-1/FL/Fl.H ****   and error-prone synchronization code in FLTK.
 907:fltk-1.3.4-1/FL/Fl.H **** 
 908:fltk-1.3.4-1/FL/Fl.H ****    \par Platform details for image data:
 909:fltk-1.3.4-1/FL/Fl.H ****    \li Unix/Linux platform: Clipboard images in PNG or BMP formats are recognized. Requires linking
 910:fltk-1.3.4-1/FL/Fl.H ****    \li MSWindows platform: Both bitmap and vectorial (Enhanced metafile) data from clipboard
 911:fltk-1.3.4-1/FL/Fl.H ****    can be pasted as image data.
 912:fltk-1.3.4-1/FL/Fl.H ****    \li Mac OS X platform: Both bitmap (TIFF) and vectorial (PDF) data from clipboard
 913:fltk-1.3.4-1/FL/Fl.H ****    can be pasted as image data.
 914:fltk-1.3.4-1/FL/Fl.H ****    */
 915:fltk-1.3.4-1/FL/Fl.H **** #if FLTK_ABI_VERSION >= 10303 || defined(FL_DOXYGEN)
 916:fltk-1.3.4-1/FL/Fl.H ****   static void paste(Fl_Widget &receiver, int source, const char *type = Fl::clipboard_plain_text); 
 917:fltk-1.3.4-1/FL/Fl.H **** #else
 918:fltk-1.3.4-1/FL/Fl.H ****   static void paste(Fl_Widget &receiver, int source, const char *type);
 919:fltk-1.3.4-1/FL/Fl.H ****   static void paste(Fl_Widget &receiver, int source /*=0*/);
 920:fltk-1.3.4-1/FL/Fl.H **** #endif
 921:fltk-1.3.4-1/FL/Fl.H ****   /**
 922:fltk-1.3.4-1/FL/Fl.H ****   FLTK will call the registered callback whenever there is a change to the
 923:fltk-1.3.4-1/FL/Fl.H ****   selection buffer or the clipboard. The source argument indicates which
 924:fltk-1.3.4-1/FL/Fl.H ****   of the two has changed. Only changes by other applications are reported.
 925:fltk-1.3.4-1/FL/Fl.H **** 
 926:fltk-1.3.4-1/FL/Fl.H ****   Example:
 927:fltk-1.3.4-1/FL/Fl.H ****   \code
 928:fltk-1.3.4-1/FL/Fl.H ****     void clip_callback(int source, void *data) {
 929:fltk-1.3.4-1/FL/Fl.H ****         if ( source == 0 ) printf("CLIP CALLBACK: selection buffer changed\n");
 930:fltk-1.3.4-1/FL/Fl.H **** 	if ( source == 1 ) printf("CLIP CALLBACK: clipboard changed\n");
 931:fltk-1.3.4-1/FL/Fl.H ****     }
 932:fltk-1.3.4-1/FL/Fl.H ****     [..]
 933:fltk-1.3.4-1/FL/Fl.H ****     int main() {
 934:fltk-1.3.4-1/FL/Fl.H ****         [..]
 935:fltk-1.3.4-1/FL/Fl.H **** 	Fl::add_clipboard_notify(clip_callback);
 936:fltk-1.3.4-1/FL/Fl.H **** 	[..]
 937:fltk-1.3.4-1/FL/Fl.H ****     }
 938:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 939:fltk-1.3.4-1/FL/Fl.H ****   \note Some systems require polling to monitor the clipboard and may
 940:fltk-1.3.4-1/FL/Fl.H ****   therefore have some delay in detecting changes.
 941:fltk-1.3.4-1/FL/Fl.H ****   */
 942:fltk-1.3.4-1/FL/Fl.H ****   static void add_clipboard_notify(Fl_Clipboard_Notify_Handler h, void *data = 0);
 943:fltk-1.3.4-1/FL/Fl.H ****   /**
 944:fltk-1.3.4-1/FL/Fl.H ****   Stop calling the specified callback when there are changes to the selection
 945:fltk-1.3.4-1/FL/Fl.H ****   buffer or the clipboard.
 946:fltk-1.3.4-1/FL/Fl.H ****   */
 947:fltk-1.3.4-1/FL/Fl.H ****   static void remove_clipboard_notify(Fl_Clipboard_Notify_Handler h);
 948:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non 0 if the clipboard contains data matching \p type.
 949:fltk-1.3.4-1/FL/Fl.H ****    \p type can be Fl::clipboard_plain_text or Fl::clipboard_image.
 950:fltk-1.3.4-1/FL/Fl.H ****    */
 951:fltk-1.3.4-1/FL/Fl.H ****   static int clipboard_contains(const char *type);
 952:fltk-1.3.4-1/FL/Fl.H ****   /**  Denotes plain textual data
 953:fltk-1.3.4-1/FL/Fl.H ****    */
 954:fltk-1.3.4-1/FL/Fl.H ****   static char const * const clipboard_plain_text;
 955:fltk-1.3.4-1/FL/Fl.H ****   /**  Denotes image data
 956:fltk-1.3.4-1/FL/Fl.H ****    */
 957:fltk-1.3.4-1/FL/Fl.H ****   static char const * const clipboard_image;
 958:fltk-1.3.4-1/FL/Fl.H **** 
 959:fltk-1.3.4-1/FL/Fl.H ****   /**
 960:fltk-1.3.4-1/FL/Fl.H ****     Initiate a Drag And Drop operation. The selection buffer should be
 961:fltk-1.3.4-1/FL/Fl.H ****     filled with relevant data before calling this method. FLTK will
 962:fltk-1.3.4-1/FL/Fl.H ****     then initiate the system wide drag and drop handling. Dropped data
 963:fltk-1.3.4-1/FL/Fl.H ****     will be marked as <i>text</i>.
 964:fltk-1.3.4-1/FL/Fl.H ****    
 965:fltk-1.3.4-1/FL/Fl.H ****     Create a selection first using:
 966:fltk-1.3.4-1/FL/Fl.H ****     Fl::copy(const char *stuff, int len, 0)
 967:fltk-1.3.4-1/FL/Fl.H ****   */
 968:fltk-1.3.4-1/FL/Fl.H ****   static int dnd(); // platform dependent
 969:fltk-1.3.4-1/FL/Fl.H **** 
 970:fltk-1.3.4-1/FL/Fl.H ****   // These are for back-compatibility only:
 971:fltk-1.3.4-1/FL/Fl.H ****   /**  back-compatibility only: Gets the widget owning the current selection  
 972:fltk-1.3.4-1/FL/Fl.H ****        \see Fl_Widget* selection_owner(Fl_Widget*) */
 973:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* selection_owner() {return selection_owner_;}
 974:fltk-1.3.4-1/FL/Fl.H ****   static void selection_owner(Fl_Widget*);
 975:fltk-1.3.4-1/FL/Fl.H ****   static void selection(Fl_Widget &owner, const char*, int len);
 976:fltk-1.3.4-1/FL/Fl.H ****   static void paste(Fl_Widget &receiver);
 977:fltk-1.3.4-1/FL/Fl.H **** /** @} */
 978:fltk-1.3.4-1/FL/Fl.H **** /** \defgroup  fl_screen  Screen functions
 979:fltk-1.3.4-1/FL/Fl.H **** 	fl global screen functions declared in <FL/Fl.H>
 980:fltk-1.3.4-1/FL/Fl.H ****      @{ */
 981:fltk-1.3.4-1/FL/Fl.H ****   // screen size:
 982:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the leftmost x coordinate of the main screen work area. */
 983:fltk-1.3.4-1/FL/Fl.H ****   static int x(); // platform dependent
 984:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the topmost y coordinate of the main screen work area. */
 985:fltk-1.3.4-1/FL/Fl.H ****   static int y(); // platform dependent
 986:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the width in pixels of the main screen work area. */
 987:fltk-1.3.4-1/FL/Fl.H ****   static int w(); // platform dependent
 988:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the height in pixels of the main screen work area. */
 989:fltk-1.3.4-1/FL/Fl.H ****   static int h(); // platform dependent
 990:fltk-1.3.4-1/FL/Fl.H **** 
 991:fltk-1.3.4-1/FL/Fl.H ****   // multi-head support:
 992:fltk-1.3.4-1/FL/Fl.H ****   static int screen_count();
 993:fltk-1.3.4-1/FL/Fl.H ****   /** 
 994:fltk-1.3.4-1/FL/Fl.H ****       Gets the bounding box of a screen that contains the mouse pointer.
 995:fltk-1.3.4-1/FL/Fl.H ****       \param[out]  X,Y,W,H the corresponding screen bounding box
 996:fltk-1.3.4-1/FL/Fl.H ****       \see void screen_xywh(int &x, int &y, int &w, int &h, int mx, int my) 
 997:fltk-1.3.4-1/FL/Fl.H ****   */
 998:fltk-1.3.4-1/FL/Fl.H ****   static void screen_xywh(int &X, int &Y, int &W, int &H) {
 999:fltk-1.3.4-1/FL/Fl.H ****     int x, y;
1000:fltk-1.3.4-1/FL/Fl.H ****     Fl::get_mouse(x, y);
1001:fltk-1.3.4-1/FL/Fl.H ****     screen_xywh(X, Y, W, H, x, y);
1002:fltk-1.3.4-1/FL/Fl.H ****   }
1003:fltk-1.3.4-1/FL/Fl.H ****   static void screen_xywh(int &X, int &Y, int &W, int &H, int mx, int my);
1004:fltk-1.3.4-1/FL/Fl.H ****   static void screen_xywh(int &X, int &Y, int &W, int &H, int n); 
1005:fltk-1.3.4-1/FL/Fl.H ****   static void screen_xywh(int &X, int &Y, int &W, int &H, int mx, int my, int mw, int mh);
1006:fltk-1.3.4-1/FL/Fl.H ****   static int screen_num(int x, int y);
1007:fltk-1.3.4-1/FL/Fl.H ****   static int screen_num(int x, int y, int w, int h);
1008:fltk-1.3.4-1/FL/Fl.H ****   static void screen_dpi(float &h, float &v, int n=0);
1009:fltk-1.3.4-1/FL/Fl.H ****   static void screen_work_area(int &X, int &Y, int &W, int &H, int mx, int my);
1010:fltk-1.3.4-1/FL/Fl.H ****   static void screen_work_area(int &X, int &Y, int &W, int &H, int n);
1011:fltk-1.3.4-1/FL/Fl.H ****   /** 
1012:fltk-1.3.4-1/FL/Fl.H ****    Gets the bounding box of the work area of the screen that contains the mouse pointer.
1013:fltk-1.3.4-1/FL/Fl.H ****    \param[out]  X,Y,W,H the work area bounding box
1014:fltk-1.3.4-1/FL/Fl.H ****    \see void screen_work_area(int &x, int &y, int &w, int &h, int mx, int my) 
1015:fltk-1.3.4-1/FL/Fl.H ****    */
1016:fltk-1.3.4-1/FL/Fl.H ****   static void screen_work_area(int &X, int &Y, int &W, int &H) {
1017:fltk-1.3.4-1/FL/Fl.H ****     int x, y;
1018:fltk-1.3.4-1/FL/Fl.H ****     Fl::get_mouse(x, y);
 2163              		.loc 6 1018 0
 2164 005b 488D7424 		leaq	80(%rsp), %rsi
 2164      50
 2165 0060 488D7C24 		leaq	76(%rsp), %rdi
 2165      4C
 2166              	.LBE693:
 2167              	.LBE692:
 2168              	.LBE691:
 296:fltk-1.3.4-1/src/Fl_Menu.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2169              		.loc 4 296 0
 2170 0065 48C70300 		movq	$_ZTV10menuwindow+16, (%rbx)
 2170      000000
 2171              	.LVL241:
 2172              	.LBB755:
 2173              	.LBB695:
 2174              	.LBB694:
 2175              		.loc 6 1018 0
 2176 006c E8000000 		call	_ZN2Fl9get_mouseERiS0_
 2176      00
 2177              	.LVL242:
1019:fltk-1.3.4-1/FL/Fl.H ****     screen_work_area(X, Y, W, H, x, y);
 2178              		.loc 6 1019 0
 2179 0071 448B4C24 		movl	80(%rsp), %r9d
 2179      50
 2180 0076 448B4424 		movl	76(%rsp), %r8d
 2180      4C
 2181 007b 488D4C24 		leaq	68(%rsp), %rcx
 2181      44
 2182              	.LVL243:
 2183 0080 488D5424 		leaq	64(%rsp), %rdx
 2183      40
 2184              	.LVL244:
 2185 0085 488D7424 		leaq	60(%rsp), %rsi
 2185      3C
 2186              	.LVL245:
 2187 008a 488D7C24 		leaq	56(%rsp), %rdi
 2187      38
 2188              	.LVL246:
 2189 008f E8000000 		call	_ZN2Fl16screen_work_areaERiS0_S0_S0_ii
 2189      00
 2190              	.LVL247:
 2191              	.LBE694:
 2192              	.LBE695:
 304:fltk-1.3.4-1/src/Fl_Menu.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2193              		.loc 4 304 0
 2194 0094 4889DF   		movq	%rbx, %rdi
 2195 0097 E8000000 		call	_ZN8Fl_Group3endEv
 2195      00
 2196              	.LVL248:
 2197              	.LBB696:
 2198              	.LBB697:
 2199              	.LBB698:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2200              		.loc 1 149 0
 2201 009c 814B6008 		orl	$20488, 96(%rbx)
 2201      500000
 2202              	.LVL249:
 2203              	.LBE698:
 2204              	.LBE697:
 2205              	.LBE696:
 309:fltk-1.3.4-1/src/Fl_Menu.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2206              		.loc 4 309 0
 2207 00a3 4D85F6   		testq	%r14, %r14
 308:fltk-1.3.4-1/src/Fl_Menu.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 2208              		.loc 4 308 0
 2209 00a6 4C89B310 		movq	%r14, 272(%rbx)
 2209      010000
 309:fltk-1.3.4-1/src/Fl_Menu.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2210              		.loc 4 309 0
 2211 00ad 740D     		je	.L188
 2212              	.LVL250:
 2213              	.LBB699:
 2214              	.LBB700:
 2215              		.file 8 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
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
 2216              		.loc 8 135 0
 2217 00af 4C89F7   		movq	%r14, %rdi
 2218 00b2 31F6     		xorl	%esi, %esi
 2219 00b4 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 2219      00
 2220              	.LVL251:
 2221 00b9 4989C6   		movq	%rax, %r14
 2222              	.LVL252:
 2223              	.L188:
 2224              	.LBE700:
 2225              	.LBE699:
 311:fltk-1.3.4-1/src/Fl_Menu.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2226              		.loc 4 311 0
 2227 00bc 4C8B0500 		movq	_ZL6button(%rip), %r8
 2227      000000
 310:fltk-1.3.4-1/src/Fl_Menu.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 2228              		.loc 4 310 0
 2229 00c3 C7830401 		movl	$-1, 260(%rbx)
 2229      0000FFFF 
 2229      FFFF
 311:fltk-1.3.4-1/src/Fl_Menu.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2230              		.loc 4 311 0
 2231 00cd 4D85C0   		testq	%r8, %r8
 2232 00d0 0F849A04 		je	.L189
 2232      0000
 2233 00d6 410FB640 		movzbl	110(%r8), %eax
 2233      6E
 2234              	.LVL253:
 2235              	.LBB701:
 2236              	.LBB702:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2237              		.loc 1 372 0
 2238 00db BA020000 		movl	$2, %edx
 2238      00
 2239 00e0 3C01     		cmpb	$1, %al
 2240 00e2 0F46C2   		cmovbe	%edx, %eax
 2241              	.LBE702:
 2242              	.LBE701:
 317:fltk-1.3.4-1/src/Fl_Menu.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 2243              		.loc 4 317 0
 2244 00e5 48833D00 		cmpq	$0, _ZN2Fl7scheme_E(%rip)
 2244      00000000 
 2245              	.LBB704:
 2246              	.LBB703:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2247              		.loc 1 372 0
 2248 00ed 88436E   		movb	%al, 110(%rbx)
 2249              	.LBE703:
 2250              	.LBE704:
 317:fltk-1.3.4-1/src/Fl_Menu.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 2251              		.loc 4 317 0
 2252 00f0 B8310000 		movl	$49, %eax
 2252      00
 2253 00f5 0F849504 		je	.L255
 2253      0000
 2254              	.LVL254:
 2255              	.L192:
 2256              	.LBB705:
 2257              	.LBB706:
 321:fltk-1.3.4-1/src/Fl_Menu.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 2258              		.loc 4 321 0 discriminator 6
 2259 00fb 4D85F6   		testq	%r14, %r14
 2260              	.LBE706:
 2261              	.LBE705:
 2262              	.LBB709:
 2263              	.LBB710:
 390:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2264              		.loc 1 390 0 discriminator 6
 2265 00fe 894364   		movl	%eax, 100(%rbx)
 2266              	.LVL255:
 2267              	.LBE710:
 2268              	.LBE709:
 318:fltk-1.3.4-1/src/Fl_Menu.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2269              		.loc 4 318 0 discriminator 6
 2270 0101 C7830001 		movl	$-1, 256(%rbx)
 2270      0000FFFF 
 2270      FFFF
 2271              	.LVL256:
 2272              	.LBB711:
 2273              	.LBB708:
 321:fltk-1.3.4-1/src/Fl_Menu.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 2274              		.loc 4 321 0 discriminator 6
 2275 010b 0F846F04 		je	.L225
 2275      0000
 2276 0111 4C89F0   		movq	%r14, %rax
 2277 0114 4531C9   		xorl	%r9d, %r9d
 2278 0117 EB32     		jmp	.L196
 2279              	.LVL257:
 2280 0119 0F1F8000 		.p2align 4,,10
 2280      000000
 2281              		.p2align 3
 2282              	.L195:
 2283              	.LBB707:
 324:fltk-1.3.4-1/src/Fl_Menu.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2284              		.loc 4 324 0
 2285 0120 7312     		jnb	.L194
 324:fltk-1.3.4-1/src/Fl_Menu.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2286              		.loc 4 324 0 is_stmt 0 discriminator 1
 2287 0122 418D51FF 		leal	-1(%r9), %edx
 2288 0126 31ED     		xorl	%ebp, %ebp
 2289              	.LVL258:
 2290 0128 4531ED   		xorl	%r13d, %r13d
 2291              	.LVL259:
 2292 012b 4531E4   		xorl	%r12d, %r12d
 2293 012e 89930001 		movl	%edx, 256(%rbx)
 2293      0000
 2294              	.LVL260:
 2295              	.L194:
 326:fltk-1.3.4-1/src/Fl_Menu.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 2296              		.loc 4 326 0 is_stmt 1
 2297 0134 48833800 		cmpq	$0, (%rax)
 2298 0138 742E     		je	.L193
 2299              	.L256:
 321:fltk-1.3.4-1/src/Fl_Menu.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 2300              		.loc 4 321 0
 2301 013a BE010000 		movl	$1, %esi
 2301      00
 2302 013f 4889C7   		movq	%rax, %rdi
 2303 0142 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 2303      00
 2304              	.LVL261:
 2305 0147 4183C101 		addl	$1, %r9d
 2306              	.LVL262:
 2307              	.L196:
 322:fltk-1.3.4-1/src/Fl_Menu.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 2308              		.loc 4 322 0
 2309 014b 4885ED   		testq	%rbp, %rbp
 2310 014e 74E4     		je	.L194
 323:fltk-1.3.4-1/src/Fl_Menu.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 2311              		.loc 4 323 0
 2312 0150 4839C5   		cmpq	%rax, %rbp
 2313 0153 75CB     		jne	.L195
 323:fltk-1.3.4-1/src/Fl_Menu.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 2314              		.loc 4 323 0 is_stmt 0 discriminator 1
 2315 0155 44898B00 		movl	%r9d, 256(%rbx)
 2315      010000
 2316              	.LVL263:
 2317 015c 31ED     		xorl	%ebp, %ebp
 2318              	.LVL264:
 326:fltk-1.3.4-1/src/Fl_Menu.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 2319              		.loc 4 326 0 is_stmt 1 discriminator 1
 2320 015e 48833800 		cmpq	$0, (%rax)
 2321 0162 75D6     		jne	.L256
 2322              	.LVL265:
 2323              		.p2align 4,,10
 2324 0164 0F1F4000 		.p2align 3
 2325              	.L193:
 2326              	.LBE707:
 2327              	.LBE708:
 2328              	.LBE711:
 330:fltk-1.3.4-1/src/Fl_Menu.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 2329              		.loc 4 330 0
 2330 0168 8BB424B0 		movl	176(%rsp), %esi
 2330      000000
 2331              	.LBB712:
 328:fltk-1.3.4-1/src/Fl_Menu.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2332              		.loc 4 328 0
 2333 016f 44898BFC 		movl	%r9d, 252(%rbx)
 2333      000000
 2334              	.LBE712:
 330:fltk-1.3.4-1/src/Fl_Menu.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 2335              		.loc 4 330 0
 2336 0176 85F6     		testl	%esi, %esi
 2337 0178 0F852203 		jne	.L257
 2337      0000
 342:fltk-1.3.4-1/src/Fl_Menu.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2338              		.loc 4 342 0
 2339 017e 488B4424 		movq	24(%rsp), %rax
 2339      18
 336:fltk-1.3.4-1/src/Fl_Menu.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 2340              		.loc 4 336 0
 2341 0183 C783F800 		movl	$1, 248(%rbx)
 2341      00000100 
 2341      0000
 2342              	.LVL266:
 341:fltk-1.3.4-1/src/Fl_Menu.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 2343              		.loc 4 341 0
 2344 018d C7442448 		movl	$0, 72(%rsp)
 2344      00000000 
 340:fltk-1.3.4-1/src/Fl_Menu.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2345              		.loc 4 340 0
 2346 0195 C7442424 		movl	$0, 36(%rsp)
 2346      00000000 
 342:fltk-1.3.4-1/src/Fl_Menu.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2347              		.loc 4 342 0
 2348 019d 4885C0   		testq	%rax, %rax
 2349 01a0 7417     		je	.L199
 342:fltk-1.3.4-1/src/Fl_Menu.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2350              		.loc 4 342 0 is_stmt 0 discriminator 1
 2351 01a2 488D7424 		leaq	72(%rsp), %rsi
 2351      48
 2352 01a7 4C89C2   		movq	%r8, %rdx
 2353 01aa 4889C7   		movq	%rax, %rdi
 2354 01ad E8000000 		call	_ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_
 2354      00
 2355              	.LVL267:
 2356 01b2 83C00C   		addl	$12, %eax
 2357 01b5 89442424 		movl	%eax, 36(%rsp)
 2358              	.LVL268:
 2359              	.L199:
 2360              	.LBB713:
 344:fltk-1.3.4-1/src/Fl_Menu.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2361              		.loc 4 344 0 is_stmt 1
 2362 01b9 4D85F6   		testq	%r14, %r14
 2363 01bc 0F844E03 		je	.L228
 2363      0000
 2364              	.LBB714:
 344:fltk-1.3.4-1/src/Fl_Menu.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2365              		.loc 4 344 0 is_stmt 0 discriminator 1
 2366 01c2 49833E00 		cmpq	$0, (%r14)
 2367 01c6 0F844403 		je	.L228
 2367      0000
 344:fltk-1.3.4-1/src/Fl_Menu.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2368              		.loc 4 344 0
 2369 01cc 31ED     		xorl	%ebp, %ebp
 2370 01ce 4531FF   		xorl	%r15d, %r15d
 2371 01d1 C7442420 		movl	$0, 32(%rsp)
 2371      00000000 
 2372 01d9 EB3C     		jmp	.L207
 2373              	.LVL269:
 2374 01db 0F1F4400 		.p2align 4,,10
 2374      00
 2375              		.p2align 3
 2376              	.L203:
 2377              	.LBB715:
 370:fltk-1.3.4-1/src/Fl_Menu.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 2378              		.loc 4 370 0 is_stmt 1
 2379 01e0 418B4E30 		movl	48(%r14), %ecx
 2380 01e4 85C9     		testl	%ecx, %ecx
 2381 01e6 750E     		jne	.L206
 2382 01e8 48833D00 		cmpq	$0, _ZN2Fl7scheme_E(%rip)
 2382      00000000 
 2383 01f0 0F849A02 		je	.L258
 2383      0000
 2384              	.L206:
 2385              	.LVL270:
 2386              	.LBB716:
 2387              	.LBB717:
 2388              	.LBB718:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2389              		.loc 1 149 0
 2390 01f6 814B6000 		orl	$32768, 96(%rbx)
 2390      800000
 2391              	.LVL271:
 2392              	.L220:
 2393              	.LBE718:
 2394              	.LBE717:
 2395              	.LBE716:
 2396              	.LBE715:
 344:fltk-1.3.4-1/src/Fl_Menu.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2397              		.loc 4 344 0 discriminator 2
 2398 01fd 4C89F7   		movq	%r14, %rdi
 2399 0200 BE010000 		movl	$1, %esi
 2399      00
 2400 0205 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 2400      00
 2401              	.LVL272:
 2402 020a 48833800 		cmpq	$0, (%rax)
 2403 020e 4989C6   		movq	%rax, %r14
 2404              	.LVL273:
 2405 0211 0F84F900 		je	.L259
 2405      0000
 2406              	.LVL274:
 2407              	.L207:
 2408              	.LBB723:
 346:fltk-1.3.4-1/src/Fl_Menu.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 2409              		.loc 4 346 0
 2410 0217 488B1500 		movq	_ZL6button(%rip), %rdx
 2410      000000
 2411 021e 488D7424 		leaq	76(%rsp), %rsi
 2411      4C
 2412 0223 4C89F7   		movq	%r14, %rdi
 2413 0226 E8000000 		call	_ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_
 2413      00
 2414              	.LVL275:
 347:fltk-1.3.4-1/src/Fl_Menu.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2415              		.loc 4 347 0
 2416 022b 8B54244C 		movl	76(%rsp), %edx
 2417 022f 8D4A03   		leal	3(%rdx), %ecx
 2418 0232 3B8BF800 		cmpl	248(%rbx), %ecx
 2418      0000
 2419 0238 7C09     		jl	.L201
 347:fltk-1.3.4-1/src/Fl_Menu.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2420              		.loc 4 347 0 is_stmt 0 discriminator 1
 2421 023a 83C204   		addl	$4, %edx
 2422 023d 8993F800 		movl	%edx, 248(%rbx)
 2422      0000
 2423              	.L201:
 348:fltk-1.3.4-1/src/Fl_Menu.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 2424              		.loc 4 348 0 is_stmt 1
 2425 0243 41F64620 		testb	$96, 32(%r14)
 2425      60
 2426 0248 7406     		je	.L202
 349:fltk-1.3.4-1/src/Fl_Menu.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2427              		.loc 4 349 0
 2428 024a 03050000 		addl	FL_NORMAL_SIZE(%rip), %eax
 2428      0000
 2429              	.LVL276:
 2430              	.L202:
 2431              	.LBB719:
 352:fltk-1.3.4-1/src/Fl_Menu.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 2432              		.loc 4 352 0
 2433 0250 418B7E08 		movl	8(%r14), %edi
 2434 0254 39C5     		cmpl	%eax, %ebp
 2435 0256 0F4CE8   		cmovl	%eax, %ebp
 2436              	.LVL277:
 2437 0259 85FF     		testl	%edi, %edi
 2438 025b 7483     		je	.L203
 2439              	.LBB720:
 355:fltk-1.3.4-1/src/Fl_Menu.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 2440              		.loc 4 355 0
 2441 025d 488D7424 		leaq	80(%rsp), %rsi
 2441      50
 2442 0262 E8000000 		call	_Z17fl_shortcut_labeljPPKc
 2442      00
 2443              	.LVL278:
 356:fltk-1.3.4-1/src/Fl_Menu.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2444              		.loc 4 356 0
 2445 0267 488B5424 		movq	80(%rsp), %rdx
 2445      50
 355:fltk-1.3.4-1/src/Fl_Menu.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 2446              		.loc 4 355 0
 2447 026c 48894424 		movq	%rax, 16(%rsp)
 2447      10
 2448              	.LVL279:
 356:fltk-1.3.4-1/src/Fl_Menu.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2449              		.loc 4 356 0
 2450 0271 4889D7   		movq	%rdx, %rdi
 2451 0274 48895424 		movq	%rdx, 8(%rsp)
 2451      08
 2452 0279 E8000000 		call	strlen
 2452      00
 2453              	.LVL280:
 2454 027e 488B5424 		movq	8(%rsp), %rdx
 2454      08
 2455 0283 89C6     		movl	%eax, %esi
 2456 0285 4889D7   		movq	%rdx, %rdi
 2457 0288 E8000000 		call	fl_utf_nb_char
 2457      00
 2458              	.LVL281:
 2459 028d 83F804   		cmpl	$4, %eax
 2460 0290 488B4C24 		movq	16(%rsp), %rcx
 2460      10
 2461 0295 7F49     		jg	.L204
 2462              	.LVL282:
 2463              	.LBB721:
 2464              	.LBB722:
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
 2465              		.loc 7 539 0
 2466 0297 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2466      000000
 2467 029e 488B5424 		movq	80(%rsp), %rdx
 2467      50
 2468 02a3 4889CE   		movq	%rcx, %rsi
 2469 02a6 488B07   		movq	(%rdi), %rax
 2470 02a9 4829CA   		subq	%rcx, %rdx
 2471 02ac FF90B801 		call	*440(%rax)
 2471      0000
 2472              	.LVL283:
 2473              	.LBE722:
 2474              	.LBE721:
 358:fltk-1.3.4-1/src/Fl_Menu.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2475              		.loc 4 358 0
 2476 02b2 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2477              	.LVL284:
 360:fltk-1.3.4-1/src/Fl_Menu.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2478              		.loc 4 360 0
 2479 02b6 488B7C24 		movq	80(%rsp), %rdi
 2479      50
 2480 02bb 4139C7   		cmpl	%eax, %r15d
 2481 02be 440F4CF8 		cmovl	%eax, %r15d
 2482              	.LVL285:
 2483 02c2 E8000000 		call	_Z8fl_widthPKc
 2483      00
 2484              	.LVL286:
 2485 02c7 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2486 02cb 8B4C2420 		movl	32(%rsp), %ecx
 2487 02cf 83C004   		addl	$4, %eax
 2488              	.LVL287:
 2489 02d2 39C1     		cmpl	%eax, %ecx
 2490 02d4 0F4DC1   		cmovge	%ecx, %eax
 2491              	.LVL288:
 2492 02d7 89442420 		movl	%eax, 32(%rsp)
 2493              	.LVL289:
 2494 02db E900FFFF 		jmp	.L203
 2494      FF
 2495              	.LVL290:
 2496              		.p2align 4,,10
 2497              		.p2align 3
 2498              	.L204:
 364:fltk-1.3.4-1/src/Fl_Menu.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 2499              		.loc 4 364 0
 2500 02e0 4889CF   		movq	%rcx, %rdi
 2501 02e3 E8000000 		call	_Z8fl_widthPKc
 2501      00
 2502              	.LVL291:
 2503 02e8 F20F2CC0 		cvttsd2si	%xmm0, %eax
 365:fltk-1.3.4-1/src/Fl_Menu.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2504              		.loc 4 365 0
 2505 02ec 8B7C2420 		movl	32(%rsp), %edi
 2506 02f0 89F9     		movl	%edi, %ecx
 2507 02f2 4401F9   		addl	%r15d, %ecx
 364:fltk-1.3.4-1/src/Fl_Menu.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 2508              		.loc 4 364 0
 2509 02f5 83C004   		addl	$4, %eax
 2510              	.LVL292:
 366:fltk-1.3.4-1/src/Fl_Menu.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 2511              		.loc 4 366 0
 2512 02f8 89C2     		movl	%eax, %edx
 2513 02fa 29FA     		subl	%edi, %edx
 2514 02fc 39C8     		cmpl	%ecx, %eax
 2515 02fe 440F4FFA 		cmovg	%edx, %r15d
 2516              	.LVL293:
 2517 0302 E9D9FEFF 		jmp	.L203
 2517      FF
 2518              	.LVL294:
 2519 0307 660F1F84 		.p2align 4,,10
 2519      00000000 
 2519      00
 2520              		.p2align 3
 2521              	.L259:
 2522 0310 44037C24 		addl	32(%rsp), %r15d
 2522      20
 2523              	.LVL295:
 2524 0315 44897C24 		movl	%r15d, 8(%rsp)
 2524      08
 2525              	.LVL296:
 2526              	.L200:
 2527              	.LBE720:
 2528              	.LBE719:
 2529              	.LBE723:
 2530              	.LBE714:
 2531              	.LBE713:
 373:fltk-1.3.4-1/src/Fl_Menu.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2532              		.loc 4 373 0
 2533 031a 8B930001 		movl	256(%rbx), %edx
 2533      0000
 372:fltk-1.3.4-1/src/Fl_Menu.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2534              		.loc 4 372 0
 2535 0320 8B442420 		movl	32(%rsp), %eax
 373:fltk-1.3.4-1/src/Fl_Menu.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2536              		.loc 4 373 0
 2537 0324 85D2     		testl	%edx, %edx
 372:fltk-1.3.4-1/src/Fl_Menu.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2538              		.loc 4 372 0
 2539 0326 89830801 		movl	%eax, 264(%rbx)
 2539      0000
 373:fltk-1.3.4-1/src/Fl_Menu.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2540              		.loc 4 373 0
 2541 032c 0F888E01 		js	.L229
 2541      0000
 2542 0332 4585E4   		testl	%r12d, %r12d
 2543 0335 0F858501 		jne	.L229
 2543      0000
 373:fltk-1.3.4-1/src/Fl_Menu.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2544              		.loc 4 373 0 is_stmt 0 discriminator 2
 2545 033b 89E8     		movl	%ebp, %eax
 2546 033d 8B74242C 		movl	44(%rsp), %esi
 2547 0341 C1E81F   		shrl	$31, %eax
 2548 0344 01E8     		addl	%ebp, %eax
 2549 0346 D1F8     		sarl	%eax
 2550 0348 29C6     		subl	%eax, %esi
 2551              	.LVL297:
 2552              	.L208:
 374:fltk-1.3.4-1/src/Fl_Menu.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2553              		.loc 4 374 0 is_stmt 1
 2554 034a 0FB67B6E 		movzbl	110(%rbx), %edi
 2555 034e 89742420 		movl	%esi, 32(%rsp)
 2556              	.LVL298:
 2557 0352 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 2557      00
 2558              	.LVL299:
 375:fltk-1.3.4-1/src/Fl_Menu.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 2559              		.loc 4 375 0
 2560 0357 8B4C2408 		movl	8(%rsp), %ecx
 2561 035b 448D3C00 		leal	(%rax,%rax), %r15d
 2562 035f 8B742420 		movl	32(%rsp), %esi
 2563 0363 428D5439 		leal	7(%rcx,%r15), %edx
 2563      07
 2564 0368 8B4C2424 		movl	36(%rsp), %ecx
 2565 036c 01D5     		addl	%edx, %ebp
 2566              	.LVL300:
 379:fltk-1.3.4-1/src/Fl_Menu.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 2567              		.loc 4 379 0
 2568 036e 8B542438 		movl	56(%rsp), %edx
 2569 0372 4139CC   		cmpl	%ecx, %r12d
 2570 0375 440F4CE1 		cmovl	%ecx, %r12d
 2571              	.LVL301:
 2572 0379 4439E5   		cmpl	%r12d, %ebp
 2573 037c 410F4CEC 		cmovl	%r12d, %ebp
 2574              	.LVL302:
 2575 0380 39D6     		cmpl	%edx, %esi
 2576 0382 0F4CF2   		cmovl	%edx, %esi
 2577              	.LVL303:
 383:fltk-1.3.4-1/src/Fl_Menu.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 2578              		.loc 4 383 0
 2579 0385 03542440 		addl	64(%rsp), %edx
 2580              	.LBB727:
 2581              	.LBB728:
 143:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 2582              		.loc 1 143 0
 2583 0389 896B28   		movl	%ebp, 40(%rbx)
 2584              	.LBE728:
 2585              	.LBE727:
 383:fltk-1.3.4-1/src/Fl_Menu.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 2586              		.loc 4 383 0
 2587 038c 29EA     		subl	%ebp, %edx
 2588 038e 39F2     		cmpl	%esi, %edx
 2589 0390 0F4EF2   		cmovle	%edx, %esi
 2590              	.LVL304:
 385:fltk-1.3.4-1/src/Fl_Menu.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 2591              		.loc 4 385 0
 2592 0393 8B93FC00 		movl	252(%rbx), %edx
 2592      0000
 2593 0399 4189F4   		movl	%esi, %r12d
 2594              	.LVL305:
 2595              	.LBB729:
 2596              	.LBB730:
 139:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 2597              		.loc 1 139 0
 2598 039c 897320   		movl	%esi, 32(%rbx)
 2599              	.LVL306:
 2600              	.LBE730:
 2601              	.LBE729:
 385:fltk-1.3.4-1/src/Fl_Menu.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 2602              		.loc 4 385 0
 2603 039f 85D2     		testl	%edx, %edx
 2604 03a1 740A     		je	.L209
 385:fltk-1.3.4-1/src/Fl_Menu.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 2605              		.loc 4 385 0 is_stmt 0 discriminator 1
 2606 03a3 0FAF93F8 		imull	248(%rbx), %edx
 2606      000000
 2607 03aa 83EA04   		subl	$4, %edx
 2608              	.L209:
 386:fltk-1.3.4-1/src/Fl_Menu.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 2609              		.loc 4 386 0 is_stmt 1 discriminator 4
 2610 03ad 8B8B0001 		movl	256(%rbx), %ecx
 2610      0000
 385:fltk-1.3.4-1/src/Fl_Menu.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 2611              		.loc 4 385 0 discriminator 4
 2612 03b3 428D543A 		leal	3(%rdx,%r15), %edx
 2612      03
 2613              	.LVL307:
 2614              	.LBB731:
 2615              	.LBB732:
 145:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 2616              		.loc 1 145 0 discriminator 4
 2617 03b8 89532C   		movl	%edx, 44(%rbx)
 2618              	.LVL308:
 2619              	.LBE732:
 2620              	.LBE731:
 386:fltk-1.3.4-1/src/Fl_Menu.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 2621              		.loc 4 386 0 discriminator 4
 2622 03bb 85C9     		testl	%ecx, %ecx
 2623 03bd 0F886D01 		js	.L210
 2623      0000
 387:fltk-1.3.4-1/src/Fl_Menu.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2624              		.loc 4 387 0
 2625 03c3 8B93F800 		movl	248(%rbx), %edx
 2625      0000
 2626 03c9 8B742428 		movl	40(%rsp), %esi
 2627              	.LVL309:
 2628 03cd 4129D5   		subl	%edx, %r13d
 2629              	.LVL310:
 2630 03d0 4489ED   		movl	%r13d, %ebp
 2631              	.LVL311:
 2632 03d3 C1ED1F   		shrl	$31, %ebp
 2633 03d6 4401ED   		addl	%r13d, %ebp
 2634 03d9 D1FD     		sarl	%ebp
 2635 03db 0FAFD1   		imull	%ecx, %edx
 2636 03de 8D6C3500 		leal	0(%rbp,%rsi), %ebp
 2637 03e2 29D5     		subl	%edx, %ebp
 2638 03e4 29C5     		subl	%eax, %ebp
 2639              	.LVL312:
 2640              	.L211:
 407:fltk-1.3.4-1/src/Fl_Menu.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2641              		.loc 4 407 0
 2642 03e6 4D85F6   		testq	%r14, %r14
 2643 03e9 0F84AA01 		je	.L214
 2643      0000
 2644              	.LVL313:
 2645              	.LBB733:
 2646              	.LBB734:
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 2647              		.loc 1 141 0 discriminator 1
 2648 03ef 896B24   		movl	%ebp, 36(%rbx)
 2649              	.LVL314:
 2650              	.L215:
 2651              	.LBE734:
 2652              	.LBE733:
 2653              	.LBB735:
 409:fltk-1.3.4-1/src/Fl_Menu.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 2654              		.loc 4 409 0
 2655 03f2 4C8B7424 		movq	24(%rsp), %r14
 2655      18
 2656              	.LVL315:
 2657 03f7 4D85F6   		testq	%r14, %r14
 2658 03fa 0F84B201 		je	.L216
 2658      0000
 2659              	.LBB736:
 410:fltk-1.3.4-1/src/Fl_Menu.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 2660              		.loc 4 410 0
 2661 0400 8B8424B8 		movl	184(%rsp), %eax
 2661      000000
 2662 0407 85C0     		testl	%eax, %eax
 2663 0409 0F84C100 		je	.L217
 2663      0000
 2664              	.LVL316:
 2665 040f 488B0500 		movq	_ZL6button(%rip), %rax
 2665      000000
 2666              	.LBB737:
 411:fltk-1.3.4-1/src/Fl_Menu.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2667              		.loc 4 411 0
 2668 0416 0FB6786E 		movzbl	110(%rax), %edi
 2669 041a E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 2669      00
 2670              	.LVL317:
 412:fltk-1.3.4-1/src/Fl_Menu.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 2671              		.loc 4 412 0
 2672 041f 488B1500 		movq	_ZL6button(%rip), %rdx
 2672      000000
 411:fltk-1.3.4-1/src/Fl_Menu.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2673              		.loc 4 411 0
 2674 0426 448D6001 		leal	1(%rax), %r12d
 2675              	.LVL318:
 413:fltk-1.3.4-1/src/Fl_Menu.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2676              		.loc 4 413 0
 2677 042a BFF80000 		movl	$248, %edi
 2677      00
 412:fltk-1.3.4-1/src/Fl_Menu.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 2678              		.loc 4 412 0
 2679 042f 438D0424 		leal	(%r12,%r12), %eax
 2680 0433 8B6A2C   		movl	44(%rdx), %ebp
 2681              	.LVL319:
 2682 0436 29C5     		subl	%eax, %ebp
 2683              	.LVL320:
 413:fltk-1.3.4-1/src/Fl_Menu.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2684              		.loc 4 413 0
 2685 0438 E8000000 		call	_Znwm
 2685      00
 2686              	.LVL321:
 2687 043d 8B542428 		movl	40(%rsp), %edx
 2688 0441 8B4C2424 		movl	36(%rsp), %ecx
 2689 0445 4989C5   		movq	%rax, %r13
 2690 0448 8B74242C 		movl	44(%rsp), %esi
 2691 044c 4D89F1   		movq	%r14, %r9
 2692 044f 4189E8   		movl	%ebp, %r8d
 2693 0452 4889C7   		movq	%rax, %rdi
 2694 0455 29EA     		subl	%ebp, %edx
 2695 0457 4429E2   		subl	%r12d, %edx
 2696 045a E8000000 		call	_ZN9menutitleC1EiiiiPK12Fl_Menu_Item
 2696      00
 2697              	.LVL322:
 2698 045f 4C89ABF0 		movq	%r13, 240(%rbx)
 2698      000000
 2699              	.LVL323:
 2700              	.L187:
 2701              	.LBE737:
 2702              	.LBE736:
 2703              	.LBE735:
 2704              	.LBE755:
 2705              	.LBE759:
 422:fltk-1.3.4-1/src/Fl_Menu.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 2706              		.loc 4 422 0
 2707 0466 488B4424 		movq	88(%rsp), %rax
 2707      58
 2708 046b 64483304 		xorq	%fs:40, %rax
 2708      25280000 
 2708      00
 2709 0474 0F858001 		jne	.L260
 2709      0000
 2710 047a 4883C468 		addq	$104, %rsp
 2711              		.cfi_remember_state
 2712              		.cfi_def_cfa_offset 56
 2713 047e 5B       		popq	%rbx
 2714              		.cfi_def_cfa_offset 48
 2715              	.LVL324:
 2716 047f 5D       		popq	%rbp
 2717              		.cfi_def_cfa_offset 40
 2718 0480 415C     		popq	%r12
 2719              		.cfi_def_cfa_offset 32
 2720 0482 415D     		popq	%r13
 2721              		.cfi_def_cfa_offset 24
 2722 0484 415E     		popq	%r14
 2723              		.cfi_def_cfa_offset 16
 2724 0486 415F     		popq	%r15
 2725              		.cfi_def_cfa_offset 8
 2726 0488 C3       		ret
 2727              	.LVL325:
 2728 0489 0F1F8000 		.p2align 4,,10
 2728      000000
 2729              		.p2align 3
 2730              	.L258:
 2731              		.cfi_restore_state
 2732              	.LBB760:
 2733              	.LBB756:
 2734              	.LBB740:
 2735              	.LBB725:
 2736              	.LBB724:
 370:fltk-1.3.4-1/src/Fl_Menu.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 2737              		.loc 4 370 0 discriminator 4
 2738 0490 41807E24 		cmpb	$1, 36(%r14)
 2738      01
 2739 0495 0F875BFD 		ja	.L206
 2739      FFFF
 2740 049b E95DFDFF 		jmp	.L220
 2740      FF
 2741              	.LVL326:
 2742              		.p2align 4,,10
 2743              		.p2align 3
 2744              	.L257:
 2745              	.LBE724:
 2746              	.LBE725:
 2747              	.LBE740:
 331:fltk-1.3.4-1/src/Fl_Menu.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2748              		.loc 4 331 0
 2749 04a0 C783F800 		movl	$0, 248(%rbx)
 2749      00000000 
 2749      0000
 332:fltk-1.3.4-1/src/Fl_Menu.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 2750              		.loc 4 332 0
 2751 04aa 48C783F0 		movq	$0, 240(%rbx)
 2751      00000000 
 2751      000000
 2752 04b5 EBAF     		jmp	.L187
 2753              	.LVL327:
 2754 04b7 660F1F84 		.p2align 4,,10
 2754      00000000 
 2754      00
 2755              		.p2align 3
 2756              	.L229:
 2757 04c0 8B74242C 		movl	44(%rsp), %esi
 2758 04c4 E981FEFF 		jmp	.L208
 2758      FF
 2759              	.LVL328:
 2760 04c9 0F1F8000 		.p2align 4,,10
 2760      000000
 2761              		.p2align 3
 2762              	.L217:
 2763              	.LBB741:
 2764              	.LBB739:
 2765              	.LBB738:
 416:fltk-1.3.4-1/src/Fl_Menu.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 2766              		.loc 4 416 0
 2767 04d0 44037C24 		addl	72(%rsp), %r15d
 2767      48
 417:fltk-1.3.4-1/src/Fl_Menu.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 2768              		.loc 4 417 0
 2769 04d5 BFF80000 		movl	$248, %edi
 2769      00
 2770 04da E8000000 		call	_Znwm
 2770      00
 2771              	.LVL329:
 2772 04df 4C8B4C24 		movq	24(%rsp), %r9
 2772      18
 2773 04e4 8B4C2424 		movl	36(%rsp), %ecx
 2774 04e8 4989C5   		movq	%rax, %r13
 2775 04eb 4489E6   		movl	%r12d, %esi
 2776 04ee 4889C7   		movq	%rax, %rdi
 416:fltk-1.3.4-1/src/Fl_Menu.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 2777              		.loc 4 416 0
 2778 04f1 4183C703 		addl	$3, %r15d
 2779              	.LVL330:
 417:fltk-1.3.4-1/src/Fl_Menu.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 2780              		.loc 4 417 0
 2781 04f5 4429FD   		subl	%r15d, %ebp
 2782              	.LVL331:
 2783 04f8 4589F8   		movl	%r15d, %r8d
 2784 04fb 8D55FE   		leal	-2(%rbp), %edx
 2785 04fe E8000000 		call	_ZN9menutitleC1EiiiiPK12Fl_Menu_Item
 2785      00
 2786              	.LVL332:
 2787 0503 4C89ABF0 		movq	%r13, 240(%rbx)
 2787      000000
 2788 050a E957FFFF 		jmp	.L187
 2788      FF
 2789              	.LVL333:
 2790 050f 90       		.p2align 4,,10
 2791              		.p2align 3
 2792              	.L228:
 2793              	.LBE738:
 2794              	.LBE739:
 2795              	.LBE741:
 2796              	.LBB742:
 2797              	.LBB726:
 344:fltk-1.3.4-1/src/Fl_Menu.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2798              		.loc 4 344 0
 2799 0510 C7442408 		movl	$0, 8(%rsp)
 2799      00000000 
 2800 0518 31ED     		xorl	%ebp, %ebp
 2801 051a C7442420 		movl	$0, 32(%rsp)
 2801      00000000 
 2802 0522 E9F3FDFF 		jmp	.L200
 2802      FF
 2803              	.LVL334:
 2804 0527 660F1F84 		.p2align 4,,10
 2804      00000000 
 2804      00
 2805              		.p2align 3
 2806              	.L210:
 2807              	.LBE726:
 2808              	.LBE742:
 389:fltk-1.3.4-1/src/Fl_Menu.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2809              		.loc 4 389 0
 2810 0530 8B442428 		movl	40(%rsp), %eax
 2811              	.LVL335:
 393:fltk-1.3.4-1/src/Fl_Menu.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2812              		.loc 4 393 0
 2813 0534 8B4C2444 		movl	68(%rsp), %ecx
 389:fltk-1.3.4-1/src/Fl_Menu.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2814              		.loc 4 389 0
 2815 0538 418D6C05 		leal	0(%r13,%rax), %ebp
 2815      00
 2816              	.LVL336:
 393:fltk-1.3.4-1/src/Fl_Menu.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2817              		.loc 4 393 0
 2818 053d 8B44243C 		movl	60(%rsp), %eax
 2819 0541 8D342A   		leal	(%rdx,%rbp), %esi
 2820              	.LVL337:
 2821 0544 01C1     		addl	%eax, %ecx
 2822 0546 39CE     		cmpl	%ecx, %esi
 2823 0548 0F8E98FE 		jle	.L211
 2823      FFFF
 2824              	.LVL338:
 393:fltk-1.3.4-1/src/Fl_Menu.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2825              		.loc 4 393 0 is_stmt 0 discriminator 1
 2826 054e 89E9     		movl	%ebp, %ecx
 2827 0550 29D1     		subl	%edx, %ecx
 2828 0552 39C8     		cmpl	%ecx, %eax
 2829 0554 0F8F8CFE 		jg	.L211
 2829      FFFF
 394:fltk-1.3.4-1/src/Fl_Menu.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 2830              		.loc 4 394 0 is_stmt 1
 2831 055a 4183FD01 		cmpl	$1, %r13d
 2832 055e 7E62     		jle	.L261
 2833              	.LVL339:
 396:fltk-1.3.4-1/src/Fl_Menu.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 2834              		.loc 4 396 0
 2835 0560 8B6C2428 		movl	40(%rsp), %ebp
 2836              	.LVL340:
 2837 0564 29D5     		subl	%edx, %ebp
 2838              	.LVL341:
 2839 0566 E97BFEFF 		jmp	.L211
 2839      FF
 2840              	.LVL342:
 2841 056b 0F1F4400 		.p2align 4,,10
 2841      00
 2842              		.p2align 3
 2843              	.L189:
 2844              	.LBB743:
 2845              	.LBB744:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2846              		.loc 1 372 0
 2847 0570 C6436E02 		movb	$2, 110(%rbx)
 2848              	.LBE744:
 2849              	.LBE743:
 317:fltk-1.3.4-1/src/Fl_Menu.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 2850              		.loc 4 317 0
 2851 0574 B8310000 		movl	$49, %eax
 2851      00
 2852 0579 E97DFBFF 		jmp	.L192
 2852      FF
 2853              	.LVL343:
 2854 057e 6690     		.p2align 4,,10
 2855              		.p2align 3
 2856              	.L225:
 2857              	.LBB745:
 320:fltk-1.3.4-1/src/Fl_Menu.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 2858              		.loc 4 320 0
 2859 0580 4531C9   		xorl	%r9d, %r9d
 2860 0583 E9E0FBFF 		jmp	.L193
 2860      FF
 2861              	.LVL344:
 2862 0588 0F1F8400 		.p2align 4,,10
 2862      00000000 
 2863              		.p2align 3
 2864              	.L255:
 2865 0590 418B4064 		movl	100(%r8), %eax
 2866              	.LVL345:
 2867              	.LBE745:
 317:fltk-1.3.4-1/src/Fl_Menu.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 2868              		.loc 4 317 0 discriminator 3
 2869 0594 E962FBFF 		jmp	.L192
 2869      FF
 2870              	.LVL346:
 2871              	.L214:
 2872              	.LBB746:
 2873              	.LBB747:
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 2874              		.loc 1 141 0 discriminator 2
 2875 0599 8D45FE   		leal	-2(%rbp), %eax
 2876              	.LVL347:
 2877              	.LBE747:
 2878              	.LBE746:
 2879              	.LBB749:
 2880              	.LBB750:
 143:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 2881              		.loc 1 143 0 discriminator 2
 2882 059c C7432801 		movl	$1, 40(%rbx)
 2882      000000
 2883              	.LBE750:
 2884              	.LBE749:
 2885              	.LBB751:
 2886              	.LBB752:
 145:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 2887              		.loc 1 145 0 discriminator 2
 2888 05a3 C7432C01 		movl	$1, 44(%rbx)
 2888      000000
 2889              	.LBE752:
 2890              	.LBE751:
 2891              	.LBB753:
 2892              	.LBB748:
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 2893              		.loc 1 141 0 discriminator 2
 2894 05aa 894324   		movl	%eax, 36(%rbx)
 2895              	.LVL348:
 2896 05ad E940FEFF 		jmp	.L215
 2896      FF
 2897              	.LVL349:
 2898              	.L216:
 2899              	.LBE748:
 2900              	.LBE753:
 2901              	.LBB754:
 420:fltk-1.3.4-1/src/Fl_Menu.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 2902              		.loc 4 420 0
 2903 05b2 48C783F0 		movq	$0, 240(%rbx)
 2903      00000000 
 2903      000000
 2904 05bd E9A4FEFF 		jmp	.L187
 2904      FF
 2905              	.LVL350:
 2906              	.L261:
 2907              	.LBE754:
 397:fltk-1.3.4-1/src/Fl_Menu.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 2908              		.loc 4 397 0
 2909 05c2 48837C24 		cmpq	$0, 24(%rsp)
 2909      1800
 2910 05c8 7418     		je	.L213
 2911              	.LVL351:
 400:fltk-1.3.4-1/src/Fl_Menu.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2912              		.loc 4 400 0
 2913 05ca 2BABF800 		subl	248(%rbx), %ebp
 2913      0000
 2914              	.LVL352:
 2915 05d0 0FB67B6E 		movzbl	110(%rbx), %edi
 2916 05d4 29D5     		subl	%edx, %ebp
 2917              	.LVL353:
 2918 05d6 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 2918      00
 2919              	.LVL354:
 2920 05db 29C5     		subl	%eax, %ebp
 2921              	.LVL355:
 2922 05dd E904FEFF 		jmp	.L211
 2922      FF
 2923              	.LVL356:
 2924              	.L213:
 403:fltk-1.3.4-1/src/Fl_Menu.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 2925              		.loc 4 403 0
 2926 05e2 038BF800 		addl	248(%rbx), %ecx
 2926      0000
 2927 05e8 0FB67B6E 		movzbl	110(%rbx), %edi
 2928 05ec 89CD     		movl	%ecx, %ebp
 2929              	.LVL357:
 2930 05ee E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 2930      00
 2931              	.LVL358:
 2932 05f3 01C5     		addl	%eax, %ebp
 2933              	.LVL359:
 2934 05f5 E9ECFDFF 		jmp	.L211
 2934      FF
 2935              	.LVL360:
 2936              	.L260:
 2937              	.LBE756:
 2938              	.LBE760:
 422:fltk-1.3.4-1/src/Fl_Menu.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 2939              		.loc 4 422 0
 2940 05fa E8000000 		call	__stack_chk_fail
 2940      00
 2941              	.LVL361:
 2942              		.cfi_endproc
 2943              	.LFE565:
 2945              		.section	.text.unlikely._ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii
 2946              	.LCOLDE23:
 2947              		.section	.text._ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii
 2948              	.LHOTE23:
 2949              		.globl	_ZN10menuwindowC1EPK12Fl_Menu_ItemiiiiS2_S2_iii
 2950              		.set	_ZN10menuwindowC1EPK12Fl_Menu_ItemiiiiS2_S2_iii,_ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_i
 2951              		.section	.text.unlikely._ZN10menuwindow8positionEii,"ax",@progbits
 2952              		.align 2
 2953              	.LCOLDB24:
 2954              		.section	.text._ZN10menuwindow8positionEii,"ax",@progbits
 2955              	.LHOTB24:
 2956              		.align 2
 2957              		.p2align 4,,15
 2958              		.globl	_ZN10menuwindow8positionEii
 2960              	_ZN10menuwindow8positionEii:
 2961              	.LFB571:
 429:fltk-1.3.4-1/src/Fl_Menu.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 2962              		.loc 4 429 0
 2963              		.cfi_startproc
 2964              	.LVL362:
 2965 0000 4154     		pushq	%r12
 2966              		.cfi_def_cfa_offset 16
 2967              		.cfi_offset 12, -16
 2968 0002 55       		pushq	%rbp
 2969              		.cfi_def_cfa_offset 24
 2970              		.cfi_offset 6, -24
 2971 0003 4189D4   		movl	%edx, %r12d
 2972 0006 53       		pushq	%rbx
 2973              		.cfi_def_cfa_offset 32
 2974              		.cfi_offset 3, -32
 429:fltk-1.3.4-1/src/Fl_Menu.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 2975              		.loc 4 429 0
 2976 0007 4889FB   		movq	%rdi, %rbx
 430:fltk-1.3.4-1/src/Fl_Menu.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2977              		.loc 4 430 0
 2978 000a 488BBFF0 		movq	240(%rdi), %rdi
 2978      000000
 2979              	.LVL363:
 429:fltk-1.3.4-1/src/Fl_Menu.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 2980              		.loc 4 429 0
 2981 0011 89F5     		movl	%esi, %ebp
 430:fltk-1.3.4-1/src/Fl_Menu.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2982              		.loc 4 430 0
 2983 0013 4885FF   		testq	%rdi, %rdi
 2984 0016 7416     		je	.L263
 2985              	.LVL364:
 2986              	.LBB761:
 2987              	.LBB762:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2988              		.loc 1 332 0 discriminator 1
 2989 0018 8B5724   		movl	36(%rdi), %edx
 2990              	.LVL365:
 2991 001b 488B07   		movq	(%rdi), %rax
 2992 001e 8B4F28   		movl	40(%rdi), %ecx
 2993 0021 448B472C 		movl	44(%rdi), %r8d
 2994 0025 4401E2   		addl	%r12d, %edx
 2995 0028 2B5324   		subl	36(%rbx), %edx
 2996 002b FF5020   		call	*32(%rax)
 2997              	.LVL366:
 2998              	.L263:
 2999              	.LBE762:
 3000              	.LBE761:
 3001              	.LBB763:
 3002              	.LBB764:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3003              		.loc 1 332 0 is_stmt 0
 3004 002e 488B03   		movq	(%rbx), %rax
 3005 0031 8B4B28   		movl	40(%rbx), %ecx
 3006 0034 4489E2   		movl	%r12d, %edx
 3007 0037 448B432C 		movl	44(%rbx), %r8d
 3008 003b 89EE     		movl	%ebp, %esi
 3009 003d 4889DF   		movq	%rbx, %rdi
 3010              	.LBE764:
 3011              	.LBE763:
 433:fltk-1.3.4-1/src/Fl_Menu.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 3012              		.loc 4 433 0 is_stmt 1
 3013 0040 5B       		popq	%rbx
 3014              		.cfi_def_cfa_offset 24
 3015              	.LVL367:
 3016 0041 5D       		popq	%rbp
 3017              		.cfi_def_cfa_offset 16
 3018              	.LVL368:
 3019 0042 415C     		popq	%r12
 3020              		.cfi_def_cfa_offset 8
 3021              	.LVL369:
 3022              	.LBB766:
 3023              	.LBB765:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3024              		.loc 1 332 0
 3025 0044 488B4020 		movq	32(%rax), %rax
 3026 0048 FFE0     		jmp	*%rax
 3027              	.LVL370:
 3028              	.LBE765:
 3029              	.LBE766:
 3030              		.cfi_endproc
 3031              	.LFE571:
 3033              		.section	.text.unlikely._ZN10menuwindow8positionEii
 3034              	.LCOLDE24:
 3035              		.section	.text._ZN10menuwindow8positionEii
 3036              	.LHOTE24:
 3037              		.section	.text.unlikely._ZN10menuwindow10autoscrollEi,"ax",@progbits
 3038              		.align 2
 3039              	.LCOLDB25:
 3040              		.section	.text._ZN10menuwindow10autoscrollEi,"ax",@progbits
 3041              	.LHOTB25:
 3042              		.align 2
 3043              		.p2align 4,,15
 3044              		.globl	_ZN10menuwindow10autoscrollEi
 3046              	_ZN10menuwindow10autoscrollEi:
 3047              	.LFB572:
 436:fltk-1.3.4-1/src/Fl_Menu.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3048              		.loc 4 436 0
 3049              		.cfi_startproc
 3050              	.LVL371:
 3051 0000 4154     		pushq	%r12
 3052              		.cfi_def_cfa_offset 16
 3053              		.cfi_offset 12, -16
 3054 0002 55       		pushq	%rbp
 3055              		.cfi_def_cfa_offset 24
 3056              		.cfi_offset 6, -24
 3057 0003 4889FD   		movq	%rdi, %rbp
 3058 0006 53       		pushq	%rbx
 3059              		.cfi_def_cfa_offset 32
 3060              		.cfi_offset 3, -32
 3061 0007 89F3     		movl	%esi, %ebx
 3062 0009 4883EC20 		subq	$32, %rsp
 3063              		.cfi_def_cfa_offset 64
 3064 000d 448B6724 		movl	36(%rdi), %r12d
 438:fltk-1.3.4-1/src/Fl_Menu.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3065              		.loc 4 438 0
 3066 0011 0FB67F6E 		movzbl	110(%rdi), %edi
 3067              	.LVL372:
 436:fltk-1.3.4-1/src/Fl_Menu.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3068              		.loc 4 436 0
 3069 0015 64488B04 		movq	%fs:40, %rax
 3069      25280000 
 3069      00
 3070 001e 48894424 		movq	%rax, 24(%rsp)
 3070      18
 3071 0023 31C0     		xorl	%eax, %eax
 3072              	.LVL373:
 438:fltk-1.3.4-1/src/Fl_Menu.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3073              		.loc 4 438 0
 3074 0025 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 3074      00
 3075              	.LVL374:
 3076 002a 0FAF9DF8 		imull	248(%rbp), %ebx
 3076      000000
 3077              	.LVL375:
 3078 0031 428D7420 		leal	2(%rax,%r12), %esi
 3078      02
 3079              	.LBB773:
 3080              	.LBB774:
1018:fltk-1.3.4-1/FL/Fl.H ****     screen_work_area(X, Y, W, H, x, y);
 3081              		.loc 6 1018 0
 3082 0036 488D7C24 		leaq	16(%rsp), %rdi
 3082      10
 3083              	.LBE774:
 3084              	.LBE773:
 438:fltk-1.3.4-1/src/Fl_Menu.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3085              		.loc 4 438 0
 3086 003b 01F3     		addl	%esi, %ebx
 3087              	.LVL376:
 3088              	.LBB776:
 3089              	.LBB775:
1018:fltk-1.3.4-1/FL/Fl.H ****     screen_work_area(X, Y, W, H, x, y);
 3090              		.loc 6 1018 0
 3091 003d 488D7424 		leaq	20(%rsp), %rsi
 3091      14
 3092 0042 E8000000 		call	_ZN2Fl9get_mouseERiS0_
 3092      00
 3093              	.LVL377:
 3094              		.loc 6 1019 0
 3095 0047 448B4C24 		movl	20(%rsp), %r9d
 3095      14
 3096 004c 448B4424 		movl	16(%rsp), %r8d
 3096      10
 3097 0051 488D5424 		leaq	12(%rsp), %rdx
 3097      0C
 3098              	.LVL378:
 3099 0056 488D4C24 		leaq	4(%rsp), %rcx
 3099      04
 3100              	.LVL379:
 3101 005b 488D7C24 		leaq	8(%rsp), %rdi
 3101      08
 3102              	.LVL380:
 3103 0060 4889E6   		movq	%rsp, %rsi
 3104 0063 E8000000 		call	_ZN2Fl16screen_work_areaERiS0_S0_S0_ii
 3104      00
 3105              	.LVL381:
 3106              	.LBE775:
 3107              	.LBE776:
 442:fltk-1.3.4-1/src/Fl_Menu.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 3108              		.loc 4 442 0
 3109 0068 8B1424   		movl	(%rsp), %edx
 3110 006b 39D3     		cmpl	%edx, %ebx
 3111 006d 7F39     		jg	.L269
 442:fltk-1.3.4-1/src/Fl_Menu.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 3112              		.loc 4 442 0 is_stmt 0 discriminator 1
 3113 006f 29DA     		subl	%ebx, %edx
 3114 0071 83C20A   		addl	$10, %edx
 3115              	.LVL382:
 3116              	.L270:
 3117              	.LBB777:
 3118              	.LBB778:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3119              		.loc 1 332 0 is_stmt 1
 3120 0074 488B4500 		movq	0(%rbp), %rax
 3121 0078 035524   		addl	36(%rbp), %edx
 3122              	.LVL383:
 3123 007b 4889EF   		movq	%rbp, %rdi
 3124 007e 8B4D28   		movl	40(%rbp), %ecx
 3125 0081 8B7520   		movl	32(%rbp), %esi
 3126 0084 448B452C 		movl	44(%rbp), %r8d
 3127 0088 FF5020   		call	*32(%rax)
 3128              	.LVL384:
 3129              	.L268:
 3130              	.LBE778:
 3131              	.LBE777:
 450:fltk-1.3.4-1/src/Fl_Menu.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3132              		.loc 4 450 0
 3133 008b 488B4424 		movq	24(%rsp), %rax
 3133      18
 3134 0090 64483304 		xorq	%fs:40, %rax
 3134      25280000 
 3134      00
 3135 0099 7524     		jne	.L275
 3136 009b 4883C420 		addq	$32, %rsp
 3137              		.cfi_remember_state
 3138              		.cfi_def_cfa_offset 32
 3139 009f 5B       		popq	%rbx
 3140              		.cfi_def_cfa_offset 24
 3141 00a0 5D       		popq	%rbp
 3142              		.cfi_def_cfa_offset 16
 3143              	.LVL385:
 3144 00a1 415C     		popq	%r12
 3145              		.cfi_def_cfa_offset 8
 3146 00a3 C3       		ret
 3147              	.LVL386:
 3148              		.p2align 4,,10
 3149 00a4 0F1F4000 		.p2align 3
 3150              	.L269:
 3151              		.cfi_restore_state
 444:fltk-1.3.4-1/src/Fl_Menu.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 3152              		.loc 4 444 0
 3153 00a8 039DF800 		addl	248(%rbp), %ebx
 3153      0000
 3154              	.LVL387:
 3155 00ae 2B5C2404 		subl	4(%rsp), %ebx
 3156              	.LVL388:
 445:fltk-1.3.4-1/src/Fl_Menu.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 3157              		.loc 4 445 0
 3158 00b2 29D3     		subl	%edx, %ebx
 3159              	.LVL389:
 3160 00b4 78D5     		js	.L268
 446:fltk-1.3.4-1/src/Fl_Menu.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 3161              		.loc 4 446 0
 3162 00b6 BAF6FFFF 		movl	$-10, %edx
 3162      FF
 3163 00bb 29DA     		subl	%ebx, %edx
 3164              	.LVL390:
 3165 00bd EBB5     		jmp	.L270
 3166              	.LVL391:
 3167              	.L275:
 450:fltk-1.3.4-1/src/Fl_Menu.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3168              		.loc 4 450 0
 3169 00bf E8000000 		call	__stack_chk_fail
 3169      00
 3170              	.LVL392:
 3171              		.cfi_endproc
 3172              	.LFE572:
 3174              		.section	.text.unlikely._ZN10menuwindow10autoscrollEi
 3175              	.LCOLDE25:
 3176              		.section	.text._ZN10menuwindow10autoscrollEi
 3177              	.LHOTE25:
 3178              		.section	.text.unlikely._ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii,"ax",@progbits
 3179              		.align 2
 3180              	.LCOLDB26:
 3181              		.section	.text._ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii,"ax",@progbits
 3182              	.LHOTB26:
 3183              		.align 2
 3184              		.p2align 4,,15
 3185              		.globl	_ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii
 3187              	_ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii:
 3188              	.LFB573:
 454:fltk-1.3.4-1/src/Fl_Menu.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3189              		.loc 4 454 0
 3190              		.cfi_startproc
 3191              	.LVL393:
 3192 0000 4157     		pushq	%r15
 3193              		.cfi_def_cfa_offset 16
 3194              		.cfi_offset 15, -16
 3195 0002 4156     		pushq	%r14
 3196              		.cfi_def_cfa_offset 24
 3197              		.cfi_offset 14, -24
 3198 0004 4155     		pushq	%r13
 3199              		.cfi_def_cfa_offset 32
 3200              		.cfi_offset 13, -32
 3201 0006 4154     		pushq	%r12
 3202              		.cfi_def_cfa_offset 40
 3203              		.cfi_offset 12, -40
 3204 0008 55       		pushq	%rbp
 3205              		.cfi_def_cfa_offset 48
 3206              		.cfi_offset 6, -48
 3207 0009 53       		pushq	%rbx
 3208              		.cfi_def_cfa_offset 56
 3209              		.cfi_offset 3, -56
 3210 000a 4883EC38 		subq	$56, %rsp
 3211              		.cfi_def_cfa_offset 112
 454:fltk-1.3.4-1/src/Fl_Menu.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3212              		.loc 4 454 0
 3213 000e 64488B04 		movq	%fs:40, %rax
 3213      25280000 
 3213      00
 3214 0017 48894424 		movq	%rax, 40(%rsp)
 3214      28
 3215 001c 31C0     		xorl	%eax, %eax
 455:fltk-1.3.4-1/src/Fl_Menu.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 3216              		.loc 4 455 0
 3217 001e 4885F6   		testq	%rsi, %rsi
 454:fltk-1.3.4-1/src/Fl_Menu.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3218              		.loc 4 454 0
 3219 0021 894C2410 		movl	%ecx, 16(%rsp)
 455:fltk-1.3.4-1/src/Fl_Menu.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 3220              		.loc 4 455 0
 3221 0025 0F843202 		je	.L276
 3221      0000
 3222 002b 4989FF   		movq	%rdi, %r15
 457:fltk-1.3.4-1/src/Fl_Menu.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3223              		.loc 4 457 0
 3224 002e 0FB67F6E 		movzbl	110(%rdi), %edi
 3225              	.LVL394:
 3226 0032 4189D6   		movl	%edx, %r14d
 3227              	.LVL395:
 3228 0035 4889F3   		movq	%rsi, %rbx
 3229 0038 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 3229      00
 3230              	.LVL396:
 461:fltk-1.3.4-1/src/Fl_Menu.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 3231              		.loc 4 461 0
 3232 003d 458BA7F8 		movl	248(%r15), %r12d
 3232      000000
 460:fltk-1.3.4-1/src/Fl_Menu.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3233              		.loc 4 460 0
 3234 0044 418B7728 		movl	40(%r15), %esi
 457:fltk-1.3.4-1/src/Fl_Menu.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3235              		.loc 4 457 0
 3236 0048 89C5     		movl	%eax, %ebp
 3237              	.LVL397:
 460:fltk-1.3.4-1/src/Fl_Menu.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3238              		.loc 4 460 0
 3239 004a 8D0400   		leal	(%rax,%rax), %eax
 3240              	.LVL398:
 464:fltk-1.3.4-1/src/Fl_Menu.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 3241              		.loc 4 464 0
 3242 004d 8B4C2410 		movl	16(%rsp), %ecx
 3243 0051 418B9700 		movl	256(%r15), %edx
 3243      010000
 460:fltk-1.3.4-1/src/Fl_Menu.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3244              		.loc 4 460 0
 3245 0058 29C6     		subl	%eax, %esi
 461:fltk-1.3.4-1/src/Fl_Menu.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 3246              		.loc 4 461 0
 3247 005a 4589E5   		movl	%r12d, %r13d
 460:fltk-1.3.4-1/src/Fl_Menu.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3248              		.loc 4 460 0
 3249 005d 8D46FF   		leal	-1(%rsi), %eax
 3250 0060 8974241C 		movl	%esi, 28(%rsp)
 461:fltk-1.3.4-1/src/Fl_Menu.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 3251              		.loc 4 461 0
 3252 0064 8D7501   		leal	1(%rbp), %esi
 3253 0067 450FAFEE 		imull	%r14d, %r13d
 460:fltk-1.3.4-1/src/Fl_Menu.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3254              		.loc 4 460 0
 3255 006b 89442408 		movl	%eax, 8(%rsp)
 3256              	.LVL399:
 462:fltk-1.3.4-1/src/Fl_Menu.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3257              		.loc 4 462 0
 3258 006f 418D4424 		leal	-4(%r12), %eax
 3258      FC
 3259              	.LVL400:
 461:fltk-1.3.4-1/src/Fl_Menu.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 3260              		.loc 4 461 0
 3261 0074 4101F5   		addl	%esi, %r13d
 3262              	.LVL401:
 464:fltk-1.3.4-1/src/Fl_Menu.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 3263              		.loc 4 464 0
 3264 0077 85C9     		testl	%ecx, %ecx
 462:fltk-1.3.4-1/src/Fl_Menu.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3265              		.loc 4 462 0
 3266 0079 89442418 		movl	%eax, 24(%rsp)
 3267              	.LVL402:
 464:fltk-1.3.4-1/src/Fl_Menu.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 3268              		.loc 4 464 0
 3269 007d 7472     		je	.L280
 464:fltk-1.3.4-1/src/Fl_Menu.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 3270              		.loc 4 464 0 is_stmt 0 discriminator 1
 3271 007f 4139D6   		cmpl	%edx, %r14d
 3272 0082 746D     		je	.L280
 3273              	.LVL403:
 3274              	.LBB779:
 3275              	.LBB780:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3276              		.loc 7 82 0 is_stmt 1
 3277 0084 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3277      000000
 3278 008b 8B44241C 		movl	28(%rsp), %eax
 3279              	.LVL404:
 3280 008f 418D55FF 		leal	-1(%r13), %edx
 3281              	.LVL405:
 3282 0093 458D4424 		leal	-2(%r12), %r8d
 3282      FE
 3283              	.LVL406:
 3284 0098 4C8B0F   		movq	(%rdi), %r9
 3285 009b 8D48FD   		leal	-3(%rax), %ecx
 3286              	.LVL407:
 3287 009e 41FF9150 		call	*336(%r9)
 3287      010000
 3288              	.LVL408:
 3289              	.LBE780:
 3290              	.LBE779:
 466:fltk-1.3.4-1/src/Fl_Menu.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 3291              		.loc 4 466 0
 3292 00a5 488B1500 		movq	_ZL6button(%rip), %rdx
 3292      000000
 3293 00ac 4885D2   		testq	%rdx, %rdx
 3294 00af 0F84EB02 		je	.L281
 3294      0000
 3295 00b5 8B5264   		movl	100(%rdx), %edx
 3296              	.LVL409:
 3297              	.L282:
 466:fltk-1.3.4-1/src/Fl_Menu.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 3298              		.loc 4 466 0 is_stmt 0 discriminator 4
 3299 00b8 4883EC08 		subq	$8, %rsp
 3300              		.cfi_def_cfa_offset 120
 3301 00bc 410FB677 		movzbl	110(%r15), %esi
 3301      6E
 3302 00c1 31C9     		xorl	%ecx, %ecx
 3303 00c3 52       		pushq	%rdx
 3304              		.cfi_def_cfa_offset 128
 3305 00c4 458B4F2C 		movl	44(%r15), %r9d
 3306 00c8 31D2     		xorl	%edx, %edx
 3307 00ca 458B4728 		movl	40(%r15), %r8d
 3308 00ce 4C89FF   		movq	%r15, %rdi
 3309 00d1 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 3309      00
 3310              	.LVL410:
 3311              	.LBB781:
 3312              	.LBB782:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3313              		.loc 7 103 0 is_stmt 1 discriminator 4
 3314 00d6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3314      000000
 3315 00dd 488B17   		movq	(%rdi), %rdx
 3316 00e0 FF927001 		call	*368(%rdx)
 3316      0000
 3317              	.LVL411:
 3318 00e6 415A     		popq	%r10
 3319              		.cfi_def_cfa_offset 120
 3320 00e8 415B     		popq	%r11
 3321              		.cfi_def_cfa_offset 112
 3322 00ea 418B9700 		movl	256(%r15), %edx
 3322      010000
 3323              	.LVL412:
 3324              	.L280:
 3325              	.LBE782:
 3326              	.LBE781:
 470:fltk-1.3.4-1/src/Fl_Menu.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 3327              		.loc 4 470 0
 3328 00f1 4883EC08 		subq	$8, %rsp
 3329              		.cfi_def_cfa_offset 120
 3330 00f5 4139D6   		cmpl	%edx, %r14d
 3331 00f8 4C8B0D00 		movq	_ZL6button(%rip), %r9
 3331      000000
 3332 00ff 0F94C2   		sete	%dl
 3333 0102 458D4424 		leal	-4(%r12), %r8d
 3333      FC
 3334 0107 89EE     		movl	%ebp, %esi
 3335 0109 0FB6D2   		movzbl	%dl, %edx
 3336 010c 4889DF   		movq	%rbx, %rdi
 3337 010f 52       		pushq	%rdx
 3338              		.cfi_def_cfa_offset 128
 3339 0110 8B4C2418 		movl	24(%rsp), %ecx
 3340 0114 4489EA   		movl	%r13d, %edx
 3341 0117 E8000000 		call	_ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
 3341      00
 3342              	.LVL413:
 3343 011c 8B5320   		movl	32(%rbx), %edx
 3344              	.LVL414:
 3345              	.LBB783:
 473:fltk-1.3.4-1/src/Fl_Menu.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3346              		.loc 4 473 0
 3347 011f 4158     		popq	%r8
 3348              		.cfi_def_cfa_offset 120
 3349 0121 4159     		popq	%r9
 3350              		.cfi_def_cfa_offset 112
 3351 0123 F6C260   		testb	$96, %dl
 3352 0126 0F85C401 		jne	.L298
 3352      0000
 3353              	.LBB784:
 478:fltk-1.3.4-1/src/Fl_Menu.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 3354              		.loc 4 478 0
 3355 012c 8B4B08   		movl	8(%rbx), %ecx
 3356 012f 85C9     		testl	%ecx, %ecx
 3357 0131 0F841E01 		je	.L284
 3357      0000
 3358              	.LBB785:
 480:fltk-1.3.4-1/src/Fl_Menu.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 3359              		.loc 4 480 0
 3360 0137 48837B28 		cmpq	$0, 40(%rbx)
 3360      00
 3361 013c 0F851E02 		jne	.L299
 3361      0000
 480:fltk-1.3.4-1/src/Fl_Menu.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 3362              		.loc 4 480 0 is_stmt 0 discriminator 2
 3363 0142 488B0500 		movq	_ZL6button(%rip), %rax
 3363      000000
 3364 0149 4885C0   		testq	%rax, %rax
 3365 014c 0F846E02 		je	.L293
 3365      0000
 3366 0152 8BB08C00 		movl	140(%rax), %esi
 3366      0000
 3367              	.LVL415:
 3368              	.L286:
 481:fltk-1.3.4-1/src/Fl_Menu.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3369              		.loc 4 481 0 is_stmt 1 discriminator 8
 3370 0158 8B532C   		movl	44(%rbx), %edx
 3371 015b 85D2     		testl	%edx, %edx
 3372 015d 7516     		jne	.L287
 481:fltk-1.3.4-1/src/Fl_Menu.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3373              		.loc 4 481 0 is_stmt 0 discriminator 2
 3374 015f 488B0500 		movq	_ZL6button(%rip), %rax
 3374      000000
 3375 0166 4885C0   		testq	%rax, %rax
 3376 0169 0F844102 		je	.L288
 3376      0000
 3377 016f 8B909000 		movl	144(%rax), %edx
 3377      0000
 3378              	.LVL416:
 3379              	.L287:
 3380              	.LBB786:
 3381              	.LBB787:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 3382              		.loc 7 509 0 is_stmt 1
 3383 0175 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3383      000000
 3384 017c 488B07   		movq	(%rdi), %rax
 3385 017f FF90B001 		call	*432(%rax)
 3385      0000
 3386              	.LVL417:
 3387              	.LBE787:
 3388              	.LBE786:
 483:fltk-1.3.4-1/src/Fl_Menu.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3389              		.loc 4 483 0
 3390 0185 8B7B08   		movl	8(%rbx), %edi
 3391 0188 488D7424 		leaq	32(%rsp), %rsi
 3391      20
 3392 018d E8000000 		call	_Z17fl_shortcut_labeljPPKc
 3392      00
 3393              	.LVL418:
 3394              	.LBB788:
 484:fltk-1.3.4-1/src/Fl_Menu.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 3395              		.loc 4 484 0
 3396 0192 488B5424 		movq	32(%rsp), %rdx
 3396      20
 3397              	.LBE788:
 483:fltk-1.3.4-1/src/Fl_Menu.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3398              		.loc 4 483 0
 3399 0197 4989C6   		movq	%rax, %r14
 3400              	.LVL419:
 3401              	.LBB792:
 484:fltk-1.3.4-1/src/Fl_Menu.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 3402              		.loc 4 484 0
 3403 019a 4889D7   		movq	%rdx, %rdi
 3404 019d 48895424 		movq	%rdx, 16(%rsp)
 3404      10
 3405              	.LVL420:
 3406 01a2 E8000000 		call	strlen
 3406      00
 3407              	.LVL421:
 3408 01a7 488B5424 		movq	16(%rsp), %rdx
 3408      10
 3409 01ac 89C6     		movl	%eax, %esi
 3410 01ae 4889D7   		movq	%rdx, %rdi
 3411 01b1 E8000000 		call	fl_utf_nb_char
 3411      00
 3412              	.LVL422:
 3413 01b6 83F804   		cmpl	$4, %eax
 3414 01b9 0F8FB101 		jg	.L289
 3414      0000
 3415              	.LBB789:
 486:fltk-1.3.4-1/src/Fl_Menu.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 3416              		.loc 4 486 0
 3417 01bf 488B4C24 		movq	32(%rsp), %rcx
 3417      20
 3418 01c4 4C29F1   		subq	%r14, %rcx
 3419 01c7 488D7901 		leaq	1(%rcx), %rdi
 3420 01cb 4989CC   		movq	%rcx, %r12
 3421 01ce E8000000 		call	malloc
 3421      00
 3422              	.LVL423:
 3423              	.LBB790:
 3424              	.LBB791:
 3425              		.file 9 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 3426              		.loc 9 53 0
 3427 01d3 4C89E2   		movq	%r12, %rdx
 3428 01d6 4C89F6   		movq	%r14, %rsi
 3429 01d9 4889C7   		movq	%rax, %rdi
 3430 01dc E8000000 		call	memcpy
 3430      00
 3431              	.LVL424:
 3432              	.LBE791:
 3433              	.LBE790:
 488:fltk-1.3.4-1/src/Fl_Menu.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 3434              		.loc 4 488 0
 3435 01e1 448B7424 		movl	8(%rsp), %r14d
 3435      08
 3436              	.LVL425:
 487:fltk-1.3.4-1/src/Fl_Menu.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3437              		.loc 4 487 0
 3438 01e6 42C60420 		movb	$0, (%rax,%r12)
 3438      00
 488:fltk-1.3.4-1/src/Fl_Menu.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 3439              		.loc 4 488 0
 3440 01eb 4889C7   		movq	%rax, %rdi
 3441 01ee 41B90800 		movl	$8, %r9d
 3441      0000
 3442 01f4 4489EA   		movl	%r13d, %edx
 3443 01f7 89EE     		movl	%ebp, %esi
 3444 01f9 4489F1   		movl	%r14d, %ecx
 3445 01fc 412B8F08 		subl	264(%r15), %ecx
 3445      010000
 3446 0203 6A01     		pushq	$1
 3447              		.cfi_def_cfa_offset 120
 3448 0205 6A00     		pushq	$0
 3449              		.cfi_def_cfa_offset 128
 3450 0207 448B6424 		movl	40(%rsp), %r12d
 3450      28
 3451 020c 48894424 		movq	%rax, 24(%rsp)
 3451      18
 3452              	.LVL426:
 3453 0211 4589E0   		movl	%r12d, %r8d
 3454 0214 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 3454      00
 3455              	.LVL427:
 489:fltk-1.3.4-1/src/Fl_Menu.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3456              		.loc 4 489 0
 3457 0219 418B8F08 		movl	264(%r15), %ecx
 3457      010000
 3458 0220 4489F6   		movl	%r14d, %esi
 3459 0223 6A01     		pushq	$1
 3460              		.cfi_def_cfa_offset 136
 3461 0225 6A00     		pushq	$0
 3462              		.cfi_def_cfa_offset 144
 3463 0227 488B7C24 		movq	64(%rsp), %rdi
 3463      40
 3464 022c 01EE     		addl	%ebp, %esi
 3465 022e 41B90400 		movl	$4, %r9d
 3465      0000
 3466 0234 4589E0   		movl	%r12d, %r8d
 3467 0237 4489EA   		movl	%r13d, %edx
 3468 023a 29CE     		subl	%ecx, %esi
 3469 023c E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 3469      00
 3470              	.LVL428:
 490:fltk-1.3.4-1/src/Fl_Menu.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 3471              		.loc 4 490 0
 3472 0241 4883C420 		addq	$32, %rsp
 3473              		.cfi_def_cfa_offset 112
 3474 0245 4C8B5C24 		movq	8(%rsp), %r11
 3474      08
 3475 024a 4C89DF   		movq	%r11, %rdi
 3476 024d E8000000 		call	free
 3476      00
 3477              	.LVL429:
 3478              	.L290:
 3479 0252 8B5320   		movl	32(%rbx), %edx
 3480              	.L284:
 3481              	.LBE789:
 3482              	.LBE792:
 3483              	.LBE785:
 3484              	.LBE784:
 3485              	.LBE783:
 497:fltk-1.3.4-1/src/Fl_Menu.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 3486              		.loc 4 497 0
 3487 0255 81E28000 		andl	$128, %edx
 3487      0000
 3488 025b 7523     		jne	.L300
 3489              	.LVL430:
 3490              	.L276:
 503:fltk-1.3.4-1/src/Fl_Menu.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 3491              		.loc 4 503 0
 3492 025d 488B4424 		movq	40(%rsp), %rax
 3492      28
 3493 0262 64483304 		xorq	%fs:40, %rax
 3493      25280000 
 3493      00
 3494 026b 0F855601 		jne	.L301
 3494      0000
 3495 0271 4883C438 		addq	$56, %rsp
 3496              		.cfi_remember_state
 3497              		.cfi_def_cfa_offset 56
 3498 0275 5B       		popq	%rbx
 3499              		.cfi_def_cfa_offset 48
 3500 0276 5D       		popq	%rbp
 3501              		.cfi_def_cfa_offset 40
 3502 0277 415C     		popq	%r12
 3503              		.cfi_def_cfa_offset 32
 3504 0279 415D     		popq	%r13
 3505              		.cfi_def_cfa_offset 24
 3506 027b 415E     		popq	%r14
 3507              		.cfi_def_cfa_offset 16
 3508 027d 415F     		popq	%r15
 3509              		.cfi_def_cfa_offset 8
 3510 027f C3       		ret
 3511              	.LVL431:
 3512              		.p2align 4,,10
 3513              		.p2align 3
 3514              	.L300:
 3515              		.cfi_restore_state
 3516              	.LBB803:
 3517              	.LBB804:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3518              		.loc 7 52 0
 3519 0280 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3519      000000
 3520 0287 BE270000 		movl	$39, %esi
 3520      00
 3521              	.LBE804:
 3522              	.LBE803:
 499:fltk-1.3.4-1/src/Fl_Menu.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 3523              		.loc 4 499 0
 3524 028c 83ED01   		subl	$1, %ebp
 3525              	.LVL432:
 3526              	.LBB806:
 3527              	.LBB805:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3528              		.loc 7 52 0
 3529 028f 488B07   		movq	(%rdi), %rax
 3530 0292 FF908800 		call	*136(%rax)
 3530      0000
 3531              	.LVL433:
 3532              	.LBE805:
 3533              	.LBE806:
 3534              	.LBB807:
 3535              	.LBB808:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3536              		.loc 7 255 0
 3537 0298 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3537      000000
 3538              	.LBE808:
 3539              	.LBE807:
 499:fltk-1.3.4-1/src/Fl_Menu.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 3540              		.loc 4 499 0
 3541 029f 44036C24 		addl	24(%rsp), %r13d
 3541      18
 3542              	.LVL434:
 3543              	.LBB812:
 3544              	.LBB809:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3545              		.loc 7 255 0
 3546 02a4 89EE     		movl	%ebp, %esi
 3547              	.LBE809:
 3548              	.LBE812:
 499:fltk-1.3.4-1/src/Fl_Menu.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 3549              		.loc 4 499 0
 3550 02a6 448B6424 		movl	28(%rsp), %r12d
 3550      1C
 3551              	.LBB813:
 3552              	.LBB810:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3553              		.loc 7 255 0
 3554 02ab 488B07   		movq	(%rdi), %rax
 3555              	.LBE810:
 3556              	.LBE813:
 499:fltk-1.3.4-1/src/Fl_Menu.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 3557              		.loc 4 499 0
 3558 02ae 4183C402 		addl	$2, %r12d
 3559              	.LVL435:
 3560              	.LBB814:
 3561              	.LBB811:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3562              		.loc 7 255 0
 3563 02b2 418D5501 		leal	1(%r13), %edx
 3564              	.LVL436:
 3565 02b6 4489E1   		movl	%r12d, %ecx
 3566 02b9 FF5030   		call	*48(%rax)
 3567              	.LVL437:
 3568              	.LBE811:
 3569              	.LBE814:
 3570              	.LBB815:
 3571              	.LBB816:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3572              		.loc 7 52 0
 3573 02bc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3573      000000
 3574 02c3 BE360000 		movl	$54, %esi
 3574      00
 3575 02c8 488B07   		movq	(%rdi), %rax
 3576 02cb FF908800 		call	*136(%rax)
 3576      0000
 3577              	.LVL438:
 3578              	.LBE816:
 3579              	.LBE815:
 3580              	.LBB817:
 3581              	.LBB818:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3582              		.loc 7 255 0
 3583 02d1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3583      000000
 3584 02d8 418D5502 		leal	2(%r13), %edx
 3585              	.LVL439:
 3586 02dc 4489E1   		movl	%r12d, %ecx
 3587 02df 89EE     		movl	%ebp, %esi
 3588 02e1 488B07   		movq	(%rdi), %rax
 3589 02e4 FF5030   		call	*48(%rax)
 3590              	.LVL440:
 3591 02e7 E971FFFF 		jmp	.L276
 3591      FF
 3592              	.LVL441:
 3593 02ec 0F1F4000 		.p2align 4,,10
 3594              		.p2align 3
 3595              	.L298:
 3596              	.LBE818:
 3597              	.LBE817:
 3598              	.LBB819:
 3599              	.LBB795:
 475:fltk-1.3.4-1/src/Fl_Menu.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 3600              		.loc 4 475 0
 3601 02f0 8B542418 		movl	24(%rsp), %edx
 474:fltk-1.3.4-1/src/Fl_Menu.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 3602              		.loc 4 474 0
 3603 02f4 418D4424 		leal	-11(%r12), %eax
 3603      F5
 476:fltk-1.3.4-1/src/Fl_Menu.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 3604              		.loc 4 476 0
 3605 02f9 448B7C24 		movl	8(%rsp), %r15d
 3605      08
 3606              	.LVL442:
 3607              	.LBB796:
 3608              	.LBB797:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3609              		.loc 7 244 0
 3610 02fe 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3610      000000
 3611 0305 4883EC08 		subq	$8, %rsp
 3612              		.cfi_def_cfa_offset 120
 3613              	.LBE797:
 3614              	.LBE796:
 474:fltk-1.3.4-1/src/Fl_Menu.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 3615              		.loc 4 474 0
 3616 0309 83E0FE   		andl	$-2, %eax
 3617              	.LVL443:
 475:fltk-1.3.4-1/src/Fl_Menu.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 3618              		.loc 4 475 0
 3619 030c 29C2     		subl	%eax, %edx
 476:fltk-1.3.4-1/src/Fl_Menu.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 3620              		.loc 4 476 0
 3621 030e 4101EF   		addl	%ebp, %r15d
 475:fltk-1.3.4-1/src/Fl_Menu.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 3622              		.loc 4 475 0
 3623 0311 89D1     		movl	%edx, %ecx
 476:fltk-1.3.4-1/src/Fl_Menu.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 3624              		.loc 4 476 0
 3625 0313 4129C7   		subl	%eax, %r15d
 3626              	.LBB800:
 3627              	.LBB798:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3628              		.loc 7 244 0
 3629 0316 4C8B17   		movq	(%rdi), %r10
 3630              	.LBE798:
 3631              	.LBE800:
 475:fltk-1.3.4-1/src/Fl_Menu.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 3632              		.loc 4 475 0
 3633 0319 C1E91F   		shrl	$31, %ecx
 477:fltk-1.3.4-1/src/Fl_Menu.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 3634              		.loc 4 477 0
 3635 031c 418D77FF 		leal	-1(%r15), %esi
 475:fltk-1.3.4-1/src/Fl_Menu.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 3636              		.loc 4 475 0
 3637 0320 01CA     		addl	%ecx, %edx
 477:fltk-1.3.4-1/src/Fl_Menu.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 3638              		.loc 4 477 0
 3639 0322 89C1     		movl	%eax, %ecx
 475:fltk-1.3.4-1/src/Fl_Menu.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 3640              		.loc 4 475 0
 3641 0324 D1FA     		sarl	%edx
 477:fltk-1.3.4-1/src/Fl_Menu.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 3642              		.loc 4 477 0
 3643 0326 D1F9     		sarl	%ecx
 475:fltk-1.3.4-1/src/Fl_Menu.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 3644              		.loc 4 475 0
 3645 0328 4401EA   		addl	%r13d, %edx
 3646              	.LVL444:
 3647              	.LBB801:
 3648              	.LBB799:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3649              		.loc 7 244 0
 3650 032b 458D4C0F 		leal	-1(%r15,%rcx), %r9d
 3650      FF
 3651              	.LVL445:
 3652 0330 448D040A 		leal	(%rdx,%rcx), %r8d
 3653              	.LVL446:
 3654 0334 89F1     		movl	%esi, %ecx
 3655 0336 4150     		pushq	%r8
 3656              		.cfi_def_cfa_offset 128
 3657 0338 448D0410 		leal	(%rax,%rdx), %r8d
 3658              	.LVL447:
 3659 033c 41FF92B0 		call	*176(%r10)
 3659      000000
 3660              	.LVL448:
 3661 0343 8B5320   		movl	32(%rbx), %edx
 3662 0346 5E       		popq	%rsi
 3663              		.cfi_def_cfa_offset 120
 3664 0347 5F       		popq	%rdi
 3665              		.cfi_def_cfa_offset 112
 3666              	.LBE799:
 3667              	.LBE801:
 3668              	.LBE795:
 3669              	.LBE819:
 497:fltk-1.3.4-1/src/Fl_Menu.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 3670              		.loc 4 497 0
 3671 0348 81E28000 		andl	$128, %edx
 3671      0000
 3672 034e 0F8409FF 		je	.L276
 3672      FFFF
 3673 0354 E927FFFF 		jmp	.L300
 3673      FF
 3674              	.LVL449:
 3675 0359 0F1F8000 		.p2align 4,,10
 3675      000000
 3676              		.p2align 3
 3677              	.L299:
 3678              	.LBB820:
 3679              	.LBB802:
 3680              	.LBB794:
 480:fltk-1.3.4-1/src/Fl_Menu.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 3681              		.loc 4 480 0 discriminator 1
 3682 0360 8B7328   		movl	40(%rbx), %esi
 3683 0363 E9F0FDFF 		jmp	.L286
 3683      FF
 3684              	.LVL450:
 3685 0368 0F1F8400 		.p2align 4,,10
 3685      00000000 
 3686              		.p2align 3
 3687              	.L289:
 3688              	.LBB793:
 493:fltk-1.3.4-1/src/Fl_Menu.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3689              		.loc 4 493 0
 3690 0370 8B44241C 		movl	28(%rsp), %eax
 3691 0374 6A01     		pushq	$1
 3692              		.cfi_def_cfa_offset 120
 3693 0376 4489EA   		movl	%r13d, %edx
 3694 0379 6A00     		pushq	$0
 3695              		.cfi_def_cfa_offset 128
 3696 037b 448B4424 		movl	40(%rsp), %r8d
 3696      28
 3697 0380 41B90800 		movl	$8, %r9d
 3697      0000
 3698 0386 89EE     		movl	%ebp, %esi
 3699 0388 4C89F7   		movq	%r14, %rdi
 3700 038b 8D48FB   		leal	-5(%rax), %ecx
 3701 038e E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 3701      00
 3702              	.LVL451:
 3703 0393 58       		popq	%rax
 3704              		.cfi_def_cfa_offset 120
 3705 0394 5A       		popq	%rdx
 3706              		.cfi_def_cfa_offset 112
 3707 0395 E9B8FEFF 		jmp	.L290
 3707      FF
 3708              	.LVL452:
 3709 039a 660F1F44 		.p2align 4,,10
 3709      0000
 3710              		.p2align 3
 3711              	.L281:
 3712 03a0 418B5764 		movl	100(%r15), %edx
 3713              	.LVL453:
 3714 03a4 E90FFDFF 		jmp	.L282
 3714      FF
 3715              	.LVL454:
 3716 03a9 0F1F8000 		.p2align 4,,10
 3716      000000
 3717              		.p2align 3
 3718              	.L288:
 3719              	.LBE793:
 481:fltk-1.3.4-1/src/Fl_Menu.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3720              		.loc 4 481 0 discriminator 4
 3721 03b0 8B150000 		movl	FL_NORMAL_SIZE(%rip), %edx
 3721      0000
 3722 03b6 E9BAFDFF 		jmp	.L287
 3722      FF
 3723              	.LVL455:
 3724 03bb 0F1F4400 		.p2align 4,,10
 3724      00
 3725              		.p2align 3
 3726              	.L293:
 480:fltk-1.3.4-1/src/Fl_Menu.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 3727              		.loc 4 480 0
 3728 03c0 31F6     		xorl	%esi, %esi
 3729 03c2 E991FDFF 		jmp	.L286
 3729      FF
 3730              	.LVL456:
 3731              	.L301:
 3732              	.LBE794:
 3733              	.LBE802:
 3734              	.LBE820:
 503:fltk-1.3.4-1/src/Fl_Menu.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 3735              		.loc 4 503 0
 3736 03c7 E8000000 		call	__stack_chk_fail
 3736      00
 3737              	.LVL457:
 3738              		.cfi_endproc
 3739              	.LFE573:
 3741              		.section	.text.unlikely._ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii
 3742              	.LCOLDE26:
 3743              		.section	.text._ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii
 3744              	.LHOTE26:
 3745              		.section	.text.unlikely._ZN10menuwindow4drawEv,"ax",@progbits
 3746              		.align 2
 3747              	.LCOLDB27:
 3748              		.section	.text._ZN10menuwindow4drawEv,"ax",@progbits
 3749              	.LHOTB27:
 3750              		.align 2
 3751              		.p2align 4,,15
 3752              		.globl	_ZN10menuwindow4drawEv
 3754              	_ZN10menuwindow4drawEv:
 3755              	.LFB575:
 509:fltk-1.3.4-1/src/Fl_Menu.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 3756              		.loc 4 509 0
 3757              		.cfi_startproc
 3758              	.LVL458:
 3759 0000 4154     		pushq	%r12
 3760              		.cfi_def_cfa_offset 16
 3761              		.cfi_offset 12, -16
 3762 0002 55       		pushq	%rbp
 3763              		.cfi_def_cfa_offset 24
 3764              		.cfi_offset 6, -24
 3765 0003 4989FC   		movq	%rdi, %r12
 3766 0006 53       		pushq	%rbx
 3767              		.cfi_def_cfa_offset 32
 3768              		.cfi_offset 3, -32
 3769              	.LBB821:
 510:fltk-1.3.4-1/src/Fl_Menu.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 3770              		.loc 4 510 0
 3771 0007 807F6D01 		cmpb	$1, 109(%rdi)
 3772 000b 0F848F00 		je	.L303
 3772      0000
 3773              	.LBB822:
 511:fltk-1.3.4-1/src/Fl_Menu.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3774              		.loc 4 511 0
 3775 0011 488B0500 		movq	_ZL6button(%rip), %rax
 3775      000000
 3776 0018 4885C0   		testq	%rax, %rax
 3777 001b 0F84DF00 		je	.L304
 3777      0000
 3778 0021 448B4864 		movl	100(%rax), %r9d
 3779              	.LVL459:
 3780              	.L305:
 511:fltk-1.3.4-1/src/Fl_Menu.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3781              		.loc 4 511 0 is_stmt 0 discriminator 4
 3782 0025 410FB67C 		movzbl	110(%r12), %edi
 3782      246E
 3783              	.LVL460:
 3784 002b 418B4C24 		movl	40(%r12), %ecx
 3784      28
 3785 0030 31D2     		xorl	%edx, %edx
 3786 0032 458B4424 		movl	44(%r12), %r8d
 3786      2C
 3787 0037 31F6     		xorl	%esi, %esi
 3788 0039 E8000000 		call	_Z11fl_draw_box10Fl_Boxtypeiiiij
 3788      00
 3789              	.LVL461:
 3790              	.LBB823:
 512:fltk-1.3.4-1/src/Fl_Menu.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 3791              		.loc 4 512 0 is_stmt 1 discriminator 4
 3792 003e 498BBC24 		movq	272(%r12), %rdi
 3792      10010000 
 3793 0046 4885FF   		testq	%rdi, %rdi
 3794 0049 743D     		je	.L315
 3795              	.LVL462:
 3796              	.LBB824:
 3797              	.LBB825:
 3798              	.LBB826:
 3799              		.loc 8 135 0
 3800 004b 31F6     		xorl	%esi, %esi
 3801 004d E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 3801      00
 3802              	.LVL463:
 3803              	.LBE826:
 3804              	.LBE825:
 514:fltk-1.3.4-1/src/Fl_Menu.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 3805              		.loc 4 514 0
 3806 0052 48833800 		cmpq	$0, (%rax)
 3807              	.LBB828:
 3808              	.LBB827:
 3809              		.loc 8 135 0
 3810 0056 4889C3   		movq	%rax, %rbx
 3811              	.LVL464:
 3812              	.LBE827:
 3813              	.LBE828:
 514:fltk-1.3.4-1/src/Fl_Menu.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 3814              		.loc 4 514 0
 3815 0059 742D     		je	.L315
 514:fltk-1.3.4-1/src/Fl_Menu.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 3816              		.loc 4 514 0 is_stmt 0 discriminator 2
 3817 005b 31ED     		xorl	%ebp, %ebp
 3818              	.LVL465:
 3819 005d 0F1F00   		.p2align 4,,10
 3820              		.p2align 3
 3821              	.L309:
 3822 0060 31C9     		xorl	%ecx, %ecx
 3823 0062 89EA     		movl	%ebp, %edx
 3824 0064 4889DE   		movq	%rbx, %rsi
 3825 0067 4C89E7   		movq	%r12, %rdi
 3826 006a 83C501   		addl	$1, %ebp
 3827              	.LVL466:
 3828 006d E8000000 		call	_ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii
 3828      00
 3829              	.LVL467:
 3830 0072 4889DF   		movq	%rbx, %rdi
 3831 0075 BE010000 		movl	$1, %esi
 3831      00
 3832 007a E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 3832      00
 3833              	.LVL468:
 3834 007f 48833800 		cmpq	$0, (%rax)
 3835 0083 4889C3   		movq	%rax, %rbx
 3836              	.LVL469:
 3837 0086 75D8     		jne	.L309
 3838              	.LVL470:
 3839              	.L315:
 3840 0088 458B8424 		movl	256(%r12), %r8d
 3840      00010000 
 3841              	.L307:
 3842              	.LBE824:
 3843              	.LBE823:
 3844              	.LBE822:
 3845              	.LBE821:
 523:fltk-1.3.4-1/src/Fl_Menu.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3846              		.loc 4 523 0 is_stmt 1
 3847 0090 5B       		popq	%rbx
 3848              		.cfi_remember_state
 3849              		.cfi_def_cfa_offset 24
 522:fltk-1.3.4-1/src/Fl_Menu.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 3850              		.loc 4 522 0
 3851 0091 45898424 		movl	%r8d, 260(%r12)
 3851      04010000 
 523:fltk-1.3.4-1/src/Fl_Menu.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3852              		.loc 4 523 0
 3853 0099 5D       		popq	%rbp
 3854              		.cfi_def_cfa_offset 16
 3855 009a 415C     		popq	%r12
 3856              		.cfi_def_cfa_offset 8
 3857              	.LVL471:
 3858 009c C3       		ret
 3859              	.LVL472:
 3860 009d 0F1F00   		.p2align 4,,10
 3861              		.p2align 3
 3862              	.L303:
 3863              		.cfi_restore_state
 3864              	.LBB829:
 517:fltk-1.3.4-1/src/Fl_Menu.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3865              		.loc 4 517 0
 3866 00a0 448B8704 		movl	260(%rdi), %r8d
 3866      010000
 3867 00a7 44398700 		cmpl	%r8d, 256(%rdi)
 3867      010000
 3868 00ae 74E0     		je	.L307
 518:fltk-1.3.4-1/src/Fl_Menu.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 3869              		.loc 4 518 0
 3870 00b0 488BBF10 		movq	272(%rdi), %rdi
 3870      010000
 3871              	.LVL473:
 3872 00b7 4489C6   		movl	%r8d, %esi
 3873 00ba E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 3873      00
 3874              	.LVL474:
 3875 00bf B9010000 		movl	$1, %ecx
 3875      00
 3876 00c4 4489C2   		movl	%r8d, %edx
 3877 00c7 4889C6   		movq	%rax, %rsi
 3878 00ca 4C89E7   		movq	%r12, %rdi
 3879 00cd E8000000 		call	_ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii
 3879      00
 3880              	.LVL475:
 519:fltk-1.3.4-1/src/Fl_Menu.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3881              		.loc 4 519 0
 3882 00d2 458B8424 		movl	256(%r12), %r8d
 3882      00010000 
 3883 00da 498BBC24 		movq	272(%r12), %rdi
 3883      10010000 
 3884 00e2 4489C6   		movl	%r8d, %esi
 3885 00e5 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 3885      00
 3886              	.LVL476:
 3887 00ea B9010000 		movl	$1, %ecx
 3887      00
 3888 00ef 4489C2   		movl	%r8d, %edx
 3889 00f2 4889C6   		movq	%rax, %rsi
 3890 00f5 4C89E7   		movq	%r12, %rdi
 3891 00f8 E8000000 		call	_ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii
 3891      00
 3892              	.LVL477:
 3893 00fd EB89     		jmp	.L315
 3894              	.LVL478:
 3895 00ff 90       		.p2align 4,,10
 3896              		.p2align 3
 3897              	.L304:
 3898 0100 448B4F64 		movl	100(%rdi), %r9d
 3899              	.LVL479:
 3900 0104 E91CFFFF 		jmp	.L305
 3900      FF
 3901              	.LBE829:
 3902              		.cfi_endproc
 3903              	.LFE575:
 3905              		.section	.text.unlikely._ZN10menuwindow4drawEv
 3906              	.LCOLDE27:
 3907              		.section	.text._ZN10menuwindow4drawEv
 3908              	.LHOTE27:
 3909              		.section	.text.unlikely._ZN10menuwindow12set_selectedEi,"ax",@progbits
 3910              		.align 2
 3911              	.LCOLDB28:
 3912              		.section	.text._ZN10menuwindow12set_selectedEi,"ax",@progbits
 3913              	.LHOTB28:
 3914              		.align 2
 3915              		.p2align 4,,15
 3916              		.globl	_ZN10menuwindow12set_selectedEi
 3918              	_ZN10menuwindow12set_selectedEi:
 3919              	.LFB576:
 525:fltk-1.3.4-1/src/Fl_Menu.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3920              		.loc 4 525 0
 3921              		.cfi_startproc
 3922              	.LVL480:
 526:fltk-1.3.4-1/src/Fl_Menu.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 3923              		.loc 4 526 0
 3924 0000 39B70001 		cmpl	%esi, 256(%rdi)
 3924      0000
 3925 0006 7418     		je	.L316
 526:fltk-1.3.4-1/src/Fl_Menu.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 3926              		.loc 4 526 0 is_stmt 0 discriminator 1
 3927 0008 89B70001 		movl	%esi, 256(%rdi)
 3927      0000
 3928 000e BE010000 		movl	$1, %esi
 3928      00
 3929              	.LVL481:
 3930 0013 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 3930      00
 3931              	.LVL482:
 3932 0018 0F1F8400 		.p2align 4,,10
 3932      00000000 
 3933              		.p2align 3
 3934              	.L316:
 3935 0020 F3C3     		rep ret
 3936              		.cfi_endproc
 3937              	.LFE576:
 3939              		.section	.text.unlikely._ZN10menuwindow12set_selectedEi
 3940              	.LCOLDE28:
 3941              		.section	.text._ZN10menuwindow12set_selectedEi
 3942              	.LHOTE28:
 3943              		.section	.text.unlikely._ZN10menuwindow13find_selectedEii,"ax",@progbits
 3944              		.align 2
 3945              	.LCOLDB29:
 3946              		.section	.text._ZN10menuwindow13find_selectedEii,"ax",@progbits
 3947              	.LHOTB29:
 3948              		.align 2
 3949              		.p2align 4,,15
 3950              		.globl	_ZN10menuwindow13find_selectedEii
 3952              	_ZN10menuwindow13find_selectedEii:
 3953              	.LFB577:
 531:fltk-1.3.4-1/src/Fl_Menu.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 3954              		.loc 4 531 0 is_stmt 1
 3955              		.cfi_startproc
 3956              	.LVL483:
 3957 0000 4889F8   		movq	%rdi, %rax
 532:fltk-1.3.4-1/src/Fl_Menu.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3958              		.loc 4 532 0
 3959 0003 488BBF10 		movq	272(%rdi), %rdi
 3959      010000
 3960              	.LVL484:
 3961 000a 4885FF   		testq	%rdi, %rdi
 3962 000d 0F840101 		je	.L338
 3962      0000
 532:fltk-1.3.4-1/src/Fl_Menu.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3963              		.loc 4 532 0 is_stmt 0 discriminator 2
 3964 0013 48833F00 		cmpq	$0, (%rdi)
 3965 0017 0F84F700 		je	.L338
 3965      0000
 3966              	.LVL485:
 531:fltk-1.3.4-1/src/Fl_Menu.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 3967              		.loc 4 531 0 is_stmt 1
 3968 001d 4155     		pushq	%r13
 3969              		.cfi_def_cfa_offset 16
 3970              		.cfi_offset 13, -16
 3971 001f 4154     		pushq	%r12
 3972              		.cfi_def_cfa_offset 24
 3973              		.cfi_offset 12, -24
 3974 0021 55       		pushq	%rbp
 3975              		.cfi_def_cfa_offset 32
 3976              		.cfi_offset 6, -32
 3977 0022 53       		pushq	%rbx
 3978              		.cfi_def_cfa_offset 40
 3979              		.cfi_offset 3, -40
 3980 0023 4883EC08 		subq	$8, %rsp
 3981              		.cfi_def_cfa_offset 48
 533:fltk-1.3.4-1/src/Fl_Menu.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 3982              		.loc 4 533 0
 3983 0027 2B7020   		subl	32(%rax), %esi
 3984              	.LVL486:
 535:fltk-1.3.4-1/src/Fl_Menu.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 3985              		.loc 4 535 0
 3986 002a 2B5024   		subl	36(%rax), %edx
 3987              	.LVL487:
 533:fltk-1.3.4-1/src/Fl_Menu.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 3988              		.loc 4 533 0
 3989 002d 4189F5   		movl	%esi, %r13d
 3990              	.LVL488:
 535:fltk-1.3.4-1/src/Fl_Menu.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 3991              		.loc 4 535 0
 3992 0030 89D3     		movl	%edx, %ebx
 3993 0032 0F888E00 		js	.L319
 3993      0000
 3994              	.LVL489:
 535:fltk-1.3.4-1/src/Fl_Menu.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 3995              		.loc 4 535 0 is_stmt 0 discriminator 2
 3996 0038 3B502C   		cmpl	44(%rax), %edx
 3997 003b 0F8D8500 		jge	.L319
 3997      0000
 3998 0041 4889C5   		movq	%rax, %rbp
 3999              	.LBB830:
 536:fltk-1.3.4-1/src/Fl_Menu.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4000              		.loc 4 536 0 is_stmt 1
 4001 0044 8B80F800 		movl	248(%rax), %eax
 4001      0000
 4002              	.LVL490:
 4003 004a 85C0     		testl	%eax, %eax
 4004 004c 756A     		jne	.L343
 4005              	.LVL491:
 4006              	.LBB831:
 4007              	.LBB832:
 4008              	.LBB833:
 4009              		.loc 8 135 0 discriminator 1
 4010 004e 31F6     		xorl	%esi, %esi
 4011              	.LVL492:
 4012 0050 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 4012      00
 4013              	.LVL493:
 4014              	.LBE833:
 4015              	.LBE832:
 540:fltk-1.3.4-1/src/Fl_Menu.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 4016              		.loc 4 540 0 discriminator 1
 4017 0055 48833800 		cmpq	$0, (%rax)
 4018              	.LBB835:
 4019              	.LBB834:
 4020              		.loc 8 135 0 discriminator 1
 4021 0059 4889C3   		movq	%rax, %rbx
 4022              	.LVL494:
 4023              	.LBE834:
 4024              	.LBE835:
 540:fltk-1.3.4-1/src/Fl_Menu.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 4025              		.loc 4 540 0 discriminator 1
 4026 005c 7468     		je	.L319
 540:fltk-1.3.4-1/src/Fl_Menu.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 4027              		.loc 4 540 0 is_stmt 0
 4028 005e 31ED     		xorl	%ebp, %ebp
 4029              	.LVL495:
 4030 0060 41BC0300 		movl	$3, %r12d
 4030      0000
 4031 0066 EB21     		jmp	.L322
 4032              	.LVL496:
 4033 0068 0F1F8400 		.p2align 4,,10
 4033      00000000 
 4034              		.p2align 3
 4035              	.L344:
 539:fltk-1.3.4-1/src/Fl_Menu.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 4036              		.loc 4 539 0 is_stmt 1
 4037 0070 4889DF   		movq	%rbx, %rdi
 4038 0073 BE010000 		movl	$1, %esi
 4038      00
 4039 0078 83C501   		addl	$1, %ebp
 4040              	.LVL497:
 4041 007b E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 4041      00
 4042              	.LVL498:
 540:fltk-1.3.4-1/src/Fl_Menu.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 4043              		.loc 4 540 0
 4044 0080 48833800 		cmpq	$0, (%rax)
 539:fltk-1.3.4-1/src/Fl_Menu.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 4045              		.loc 4 539 0
 4046 0084 4889C3   		movq	%rax, %rbx
 4047              	.LVL499:
 540:fltk-1.3.4-1/src/Fl_Menu.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 4048              		.loc 4 540 0
 4049 0087 743D     		je	.L319
 4050              	.LVL500:
 4051              	.L322:
 541:fltk-1.3.4-1/src/Fl_Menu.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 4052              		.loc 4 541 0
 4053 0089 488B1500 		movq	_ZL6button(%rip), %rdx
 4053      000000
 4054 0090 31F6     		xorl	%esi, %esi
 4055 0092 4889DF   		movq	%rbx, %rdi
 4056 0095 E8000000 		call	_ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_
 4056      00
 4057              	.LVL501:
 4058 009a 458D6404 		leal	16(%r12,%rax), %r12d
 4058      10
 4059              	.LVL502:
 542:fltk-1.3.4-1/src/Fl_Menu.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4060              		.loc 4 542 0
 4061 009f 4539E5   		cmpl	%r12d, %r13d
 4062 00a2 7DCC     		jge	.L344
 4063              	.LBE831:
 4064              	.LBE830:
 550:fltk-1.3.4-1/src/Fl_Menu.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 4065              		.loc 4 550 0
 4066 00a4 4883C408 		addq	$8, %rsp
 4067              		.cfi_remember_state
 4068              		.cfi_def_cfa_offset 40
 4069              	.LBB837:
 4070              	.LBB836:
 4071 00a8 89E8     		movl	%ebp, %eax
 4072              	.LBE836:
 4073              	.LBE837:
 4074 00aa 5B       		popq	%rbx
 4075              		.cfi_restore 3
 4076              		.cfi_def_cfa_offset 32
 4077              	.LVL503:
 4078 00ab 5D       		popq	%rbp
 4079              		.cfi_restore 6
 4080              		.cfi_def_cfa_offset 24
 4081              	.LVL504:
 4082 00ac 415C     		popq	%r12
 4083              		.cfi_restore 12
 4084              		.cfi_def_cfa_offset 16
 4085              	.LVL505:
 4086 00ae 415D     		popq	%r13
 4087              		.cfi_restore 13
 4088              		.cfi_def_cfa_offset 8
 4089              	.LVL506:
 4090 00b0 C3       		ret
 4091              	.LVL507:
 4092              		.p2align 4,,10
 4093 00b1 0F1F8000 		.p2align 3
 4093      000000
 4094              	.L343:
 4095              		.cfi_restore_state
 546:fltk-1.3.4-1/src/Fl_Menu.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 4096              		.loc 4 546 0
 4097 00b8 0FB67D6E 		movzbl	110(%rbp), %edi
 4098 00bc E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 4098      00
 4099              	.LVL508:
 4100 00c1 4139C5   		cmpl	%eax, %r13d
 4101 00c4 7D1A     		jge	.L345
 4102              	.LVL509:
 4103              	.L319:
 550:fltk-1.3.4-1/src/Fl_Menu.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 4104              		.loc 4 550 0
 4105 00c6 4883C408 		addq	$8, %rsp
 4106              		.cfi_remember_state
 4107              		.cfi_def_cfa_offset 40
 548:fltk-1.3.4-1/src/Fl_Menu.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4108              		.loc 4 548 0
 4109 00ca B8FFFFFF 		movl	$-1, %eax
 4109      FF
 550:fltk-1.3.4-1/src/Fl_Menu.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 4110              		.loc 4 550 0
 4111 00cf 5B       		popq	%rbx
 4112              		.cfi_restore 3
 4113              		.cfi_def_cfa_offset 32
 4114 00d0 5D       		popq	%rbp
 4115              		.cfi_restore 6
 4116              		.cfi_def_cfa_offset 24
 4117 00d1 415C     		popq	%r12
 4118              		.cfi_restore 12
 4119              		.cfi_def_cfa_offset 16
 4120 00d3 415D     		popq	%r13
 4121              		.cfi_restore 13
 4122              		.cfi_def_cfa_offset 8
 4123              	.LVL510:
 4124 00d5 C3       		ret
 4125              	.LVL511:
 4126 00d6 662E0F1F 		.p2align 4,,10
 4126      84000000 
 4126      0000
 4127              		.p2align 3
 4128              	.L345:
 4129              		.cfi_restore_state
 546:fltk-1.3.4-1/src/Fl_Menu.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 4130              		.loc 4 546 0 discriminator 2
 4131 00e0 443B6D28 		cmpl	40(%rbp), %r13d
 4132 00e4 7DE0     		jge	.L319
 4133              	.LVL512:
 547:fltk-1.3.4-1/src/Fl_Menu.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 4134              		.loc 4 547 0
 4135 00e6 0FB67D6E 		movzbl	110(%rbp), %edi
 4136 00ea E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 4136      00
 4137              	.LVL513:
 4138 00ef 89DA     		movl	%ebx, %edx
 4139 00f1 29C2     		subl	%eax, %edx
 4140 00f3 8D42FF   		leal	-1(%rdx), %eax
 4141 00f6 99       		cltd
 4142 00f7 F7BDF800 		idivl	248(%rbp)
 4142      0000
 4143              	.LVL514:
 548:fltk-1.3.4-1/src/Fl_Menu.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4144              		.loc 4 548 0
 4145 00fd 85C0     		testl	%eax, %eax
 4146 00ff 78C5     		js	.L319
 548:fltk-1.3.4-1/src/Fl_Menu.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4147              		.loc 4 548 0 is_stmt 0 discriminator 2
 4148 0101 3B85FC00 		cmpl	252(%rbp), %eax
 4148      0000
 4149 0107 7DBD     		jge	.L319
 550:fltk-1.3.4-1/src/Fl_Menu.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 4150              		.loc 4 550 0 is_stmt 1
 4151 0109 4883C408 		addq	$8, %rsp
 4152              		.cfi_def_cfa_offset 40
 4153 010d 5B       		popq	%rbx
 4154              		.cfi_restore 3
 4155              		.cfi_def_cfa_offset 32
 4156 010e 5D       		popq	%rbp
 4157              		.cfi_restore 6
 4158              		.cfi_def_cfa_offset 24
 4159              	.LVL515:
 4160 010f 415C     		popq	%r12
 4161              		.cfi_restore 12
 4162              		.cfi_def_cfa_offset 16
 4163 0111 415D     		popq	%r13
 4164              		.cfi_restore 13
 4165              		.cfi_def_cfa_offset 8
 4166              	.LVL516:
 4167 0113 C3       		ret
 4168              	.LVL517:
 4169              	.L338:
 548:fltk-1.3.4-1/src/Fl_Menu.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4170              		.loc 4 548 0
 4171 0114 B8FFFFFF 		movl	$-1, %eax
 4171      FF
 4172              	.LVL518:
 550:fltk-1.3.4-1/src/Fl_Menu.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 4173              		.loc 4 550 0
 4174 0119 C3       		ret
 4175              		.cfi_endproc
 4176              	.LFE577:
 4178              		.section	.text.unlikely._ZN10menuwindow13find_selectedEii
 4179              	.LCOLDE29:
 4180              		.section	.text._ZN10menuwindow13find_selectedEii
 4181              	.LHOTE29:
 4182              		.section	.text.unlikely._ZN10menuwindow6titlexEi,"ax",@progbits
 4183              		.align 2
 4184              	.LCOLDB30:
 4185              		.section	.text._ZN10menuwindow6titlexEi,"ax",@progbits
 4186              	.LHOTB30:
 4187              		.align 2
 4188              		.p2align 4,,15
 4189              		.globl	_ZN10menuwindow6titlexEi
 4191              	_ZN10menuwindow6titlexEi:
 4192              	.LFB578:
 553:fltk-1.3.4-1/src/Fl_Menu.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 4193              		.loc 4 553 0
 4194              		.cfi_startproc
 4195              	.LVL519:
 4196 0000 4154     		pushq	%r12
 4197              		.cfi_def_cfa_offset 16
 4198              		.cfi_offset 12, -16
 4199              	.LVL520:
 4200 0002 55       		pushq	%rbp
 4201              		.cfi_def_cfa_offset 24
 4202              		.cfi_offset 6, -24
 4203 0003 53       		pushq	%rbx
 4204              		.cfi_def_cfa_offset 32
 4205              		.cfi_offset 3, -32
 4206              	.LBB838:
 4207              	.LBB839:
 4208              		.loc 8 135 0
 4209 0004 488BBF10 		movq	272(%rdi), %rdi
 4209      010000
 4210              	.LVL521:
 4211              	.LBE839:
 4212              	.LBE838:
 553:fltk-1.3.4-1/src/Fl_Menu.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 4213              		.loc 4 553 0
 4214 000b 89F3     		movl	%esi, %ebx
 4215              	.LBB841:
 4216              	.LBB840:
 4217              		.loc 8 135 0
 4218 000d 31F6     		xorl	%esi, %esi
 4219              	.LVL522:
 4220 000f E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 4220      00
 4221              	.LVL523:
 4222              	.LBE840:
 4223              	.LBE841:
 556:fltk-1.3.4-1/src/Fl_Menu.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 4224              		.loc 4 556 0
 4225 0014 85DB     		testl	%ebx, %ebx
 4226 0016 7443     		je	.L349
 4227 0018 4889C5   		movq	%rax, %rbp
 4228 001b 41BC0300 		movl	$3, %r12d
 4228      0000
 4229              	.LVL524:
 4230              		.p2align 4,,10
 4231 0021 0F1F8000 		.p2align 3
 4231      000000
 4232              	.L348:
 556:fltk-1.3.4-1/src/Fl_Menu.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 4233              		.loc 4 556 0 is_stmt 0 discriminator 2
 4234 0028 488B1500 		movq	_ZL6button(%rip), %rdx
 4234      000000
 4235 002f 31F6     		xorl	%esi, %esi
 4236 0031 4889EF   		movq	%rbp, %rdi
 4237 0034 E8000000 		call	_ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_
 4237      00
 4238              	.LVL525:
 4239 0039 4889EF   		movq	%rbp, %rdi
 4240 003c BE010000 		movl	$1, %esi
 4240      00
 4241 0041 468D6420 		leal	16(%rax,%r12), %r12d
 4241      10
 4242              	.LVL526:
 4243 0046 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 4243      00
 4244              	.LVL527:
 4245 004b 83EB01   		subl	$1, %ebx
 4246              	.LVL528:
 4247 004e 4889C5   		movq	%rax, %rbp
 4248              	.LVL529:
 4249 0051 75D5     		jne	.L348
 4250              	.LVL530:
 4251              	.L347:
 558:fltk-1.3.4-1/src/Fl_Menu.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 4252              		.loc 4 558 0 is_stmt 1
 4253 0053 4489E0   		movl	%r12d, %eax
 4254 0056 5B       		popq	%rbx
 4255              		.cfi_remember_state
 4256              		.cfi_def_cfa_offset 24
 4257 0057 5D       		popq	%rbp
 4258              		.cfi_def_cfa_offset 16
 4259 0058 415C     		popq	%r12
 4260              		.cfi_def_cfa_offset 8
 4261 005a C3       		ret
 4262              	.LVL531:
 4263              	.L349:
 4264              		.cfi_restore_state
 555:fltk-1.3.4-1/src/Fl_Menu.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4265              		.loc 4 555 0
 4266 005b 41BC0300 		movl	$3, %r12d
 4266      0000
 4267 0061 EBF0     		jmp	.L347
 4268              		.cfi_endproc
 4269              	.LFE578:
 4271              		.section	.text.unlikely._ZN10menuwindow6titlexEi
 4272              	.LCOLDE30:
 4273              		.section	.text._ZN10menuwindow6titlexEi
 4274              	.LHOTE30:
 4275              		.section	.text.unlikely._ZN10menuwindow9is_insideEii,"ax",@progbits
 4276              		.align 2
 4277              	.LCOLDB31:
 4278              		.section	.text._ZN10menuwindow9is_insideEii,"ax",@progbits
 4279              	.LHOTB31:
 4280              		.align 2
 4281              		.p2align 4,,15
 4282              		.globl	_ZN10menuwindow9is_insideEii
 4284              	_ZN10menuwindow9is_insideEii:
 4285              	.LFB579:
 561:fltk-1.3.4-1/src/Fl_Menu.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4286              		.loc 4 561 0
 4287              		.cfi_startproc
 4288              	.LVL532:
 4289 0000 4154     		pushq	%r12
 4290              		.cfi_def_cfa_offset 16
 4291              		.cfi_offset 12, -16
 4292 0002 55       		pushq	%rbp
 4293              		.cfi_def_cfa_offset 24
 4294              		.cfi_offset 6, -24
 4295 0003 89F5     		movl	%esi, %ebp
 4296 0005 53       		pushq	%rbx
 4297              		.cfi_def_cfa_offset 32
 4298              		.cfi_offset 3, -32
 561:fltk-1.3.4-1/src/Fl_Menu.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4299              		.loc 4 561 0
 4300 0006 4189D4   		movl	%edx, %r12d
 4301 0009 4889FB   		movq	%rdi, %rbx
 562:fltk-1.3.4-1/src/Fl_Menu.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 4302              		.loc 4 562 0
 4303 000c E8000000 		call	_ZNK9Fl_Window6x_rootEv
 4303      00
 4304              	.LVL533:
 563:fltk-1.3.4-1/src/Fl_Menu.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4305              		.loc 4 563 0
 4306 0011 39E8     		cmpl	%ebp, %eax
 4307 0013 7E0B     		jle	.L367
 4308              	.L355:
 571:fltk-1.3.4-1/src/Fl_Menu.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 4309              		.loc 4 571 0
 4310 0015 5B       		popq	%rbx
 4311              		.cfi_remember_state
 4312              		.cfi_def_cfa_offset 24
 4313              	.LVL534:
 564:fltk-1.3.4-1/src/Fl_Menu.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 4314              		.loc 4 564 0
 4315 0016 31C0     		xorl	%eax, %eax
 571:fltk-1.3.4-1/src/Fl_Menu.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 4316              		.loc 4 571 0
 4317 0018 5D       		popq	%rbp
 4318              		.cfi_def_cfa_offset 16
 4319              	.LVL535:
 4320 0019 415C     		popq	%r12
 4321              		.cfi_def_cfa_offset 8
 4322              	.LVL536:
 4323 001b C3       		ret
 4324              	.LVL537:
 4325 001c 0F1F4000 		.p2align 4,,10
 4326              		.p2align 3
 4327              	.L367:
 4328              		.cfi_restore_state
 562:fltk-1.3.4-1/src/Fl_Menu.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 4329              		.loc 4 562 0
 4330 0020 4889DF   		movq	%rbx, %rdi
 4331 0023 E8000000 		call	_ZNK9Fl_Window6x_rootEv
 4331      00
 4332              	.LVL538:
 4333 0028 034328   		addl	40(%rbx), %eax
 4334 002b 39C5     		cmpl	%eax, %ebp
 4335 002d 7DE6     		jge	.L355
 563:fltk-1.3.4-1/src/Fl_Menu.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4336              		.loc 4 563 0 discriminator 1
 4337 002f 4889DF   		movq	%rbx, %rdi
 4338 0032 E8000000 		call	_ZNK9Fl_Window6y_rootEv
 4338      00
 4339              	.LVL539:
 562:fltk-1.3.4-1/src/Fl_Menu.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 4340              		.loc 4 562 0 discriminator 1
 4341 0037 4439E0   		cmpl	%r12d, %eax
 4342 003a 7FD9     		jg	.L355
 563:fltk-1.3.4-1/src/Fl_Menu.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4343              		.loc 4 563 0 discriminator 2
 4344 003c 4889DF   		movq	%rbx, %rdi
 4345 003f E8000000 		call	_ZNK9Fl_Window6y_rootEv
 4345      00
 4346              	.LVL540:
 4347 0044 03432C   		addl	44(%rbx), %eax
 4348 0047 4139C4   		cmpl	%eax, %r12d
 4349 004a 7DC9     		jge	.L355
 4350              	.LVL541:
 4351              	.LBB848:
 4352              	.LBB849:
 566:fltk-1.3.4-1/src/Fl_Menu.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 4353              		.loc 4 566 0
 4354 004c 8B83F800 		movl	248(%rbx), %eax
 4354      0000
 4355 0052 85C0     		testl	%eax, %eax
 4356 0054 740A     		je	.L368
 4357              	.L358:
 4358              	.LBE849:
 4359              	.LBE848:
 571:fltk-1.3.4-1/src/Fl_Menu.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 4360              		.loc 4 571 0
 4361 0056 5B       		popq	%rbx
 4362              		.cfi_remember_state
 4363              		.cfi_def_cfa_offset 24
 4364              	.LVL542:
 4365              	.LBB852:
 4366              	.LBB850:
 570:fltk-1.3.4-1/src/Fl_Menu.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 4367              		.loc 4 570 0
 4368 0057 B8010000 		movl	$1, %eax
 4368      00
 4369              	.LBE850:
 4370              	.LBE852:
 571:fltk-1.3.4-1/src/Fl_Menu.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 4371              		.loc 4 571 0
 4372 005c 5D       		popq	%rbp
 4373              		.cfi_def_cfa_offset 16
 4374              	.LVL543:
 4375 005d 415C     		popq	%r12
 4376              		.cfi_def_cfa_offset 8
 4377              	.LVL544:
 4378 005f C3       		ret
 4379              	.LVL545:
 4380              		.p2align 4,,10
 4381              		.p2align 3
 4382              	.L368:
 4383              		.cfi_restore_state
 4384              	.LBB853:
 4385              	.LBB851:
 566:fltk-1.3.4-1/src/Fl_Menu.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 4386              		.loc 4 566 0
 4387 0060 4489E2   		movl	%r12d, %edx
 4388 0063 89EE     		movl	%ebp, %esi
 4389 0065 4889DF   		movq	%rbx, %rdi
 4390 0068 E8000000 		call	_ZN10menuwindow13find_selectedEii
 4390      00
 4391              	.LVL546:
 4392 006d 83F8FF   		cmpl	$-1, %eax
 4393 0070 75E4     		jne	.L358
 4394 0072 EBA1     		jmp	.L355
 4395              	.LBE851:
 4396              	.LBE853:
 4397              		.cfi_endproc
 4398              	.LFE579:
 4400              		.section	.text.unlikely._ZN10menuwindow9is_insideEii
 4401              	.LCOLDE31:
 4402              		.section	.text._ZN10menuwindow9is_insideEii
 4403              	.LHOTE31:
 4404              		.section	.text.unlikely._ZN9menustate9is_insideEii,"ax",@progbits
 4405              		.align 2
 4406              	.LCOLDB32:
 4407              		.section	.text._ZN9menustate9is_insideEii,"ax",@progbits
 4408              	.LHOTB32:
 4409              		.align 2
 4410              		.p2align 4,,15
 4411              		.globl	_ZN9menustate9is_insideEii
 4413              	_ZN9menustate9is_insideEii:
 4414              	.LFB580:
 609:fltk-1.3.4-1/src/Fl_Menu.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 4415              		.loc 4 609 0
 4416              		.cfi_startproc
 4417              	.LVL547:
 4418 0000 4155     		pushq	%r13
 4419              		.cfi_def_cfa_offset 16
 4420              		.cfi_offset 13, -16
 4421              	.LVL548:
 4422 0002 4154     		pushq	%r12
 4423              		.cfi_def_cfa_offset 24
 4424              		.cfi_offset 12, -24
 4425 0004 4189F5   		movl	%esi, %r13d
 4426 0007 55       		pushq	%rbp
 4427              		.cfi_def_cfa_offset 32
 4428              		.cfi_offset 6, -32
 4429 0008 53       		pushq	%rbx
 4430              		.cfi_def_cfa_offset 40
 4431              		.cfi_offset 3, -40
 4432 0009 4889FD   		movq	%rdi, %rbp
 4433 000c 4189D4   		movl	%edx, %r12d
 4434 000f 4883EC08 		subq	$8, %rsp
 4435              		.cfi_def_cfa_offset 48
 611:fltk-1.3.4-1/src/Fl_Menu.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 4436              		.loc 4 611 0
 4437 0013 8B9FB000 		movl	176(%rdi), %ebx
 4437      0000
 4438 0019 83EB01   		subl	$1, %ebx
 4439 001c 790A     		jns	.L377
 4440 001e EB30     		jmp	.L372
 4441              	.LVL549:
 4442              		.p2align 4,,10
 4443              		.p2align 3
 4444              	.L381:
 611:fltk-1.3.4-1/src/Fl_Menu.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 4445              		.loc 4 611 0 is_stmt 0 discriminator 2
 4446 0020 83EB01   		subl	$1, %ebx
 4447              	.LVL550:
 4448 0023 83FBFF   		cmpl	$-1, %ebx
 4449 0026 7428     		je	.L372
 4450              	.LVL551:
 4451              	.L377:
 612:fltk-1.3.4-1/src/Fl_Menu.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 4452              		.loc 4 612 0 is_stmt 1
 4453 0028 4863C3   		movslq	%ebx, %rax
 4454 002b 4489E2   		movl	%r12d, %edx
 4455 002e 4489EE   		movl	%r13d, %esi
 4456 0031 488B7CC5 		movq	16(%rbp,%rax,8), %rdi
 4456      10
 4457 0036 E8000000 		call	_ZN10menuwindow9is_insideEii
 4457      00
 4458              	.LVL552:
 4459 003b 85C0     		testl	%eax, %eax
 4460 003d 74E1     		je	.L381
 616:fltk-1.3.4-1/src/Fl_Menu.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4461              		.loc 4 616 0
 4462 003f 4883C408 		addq	$8, %rsp
 4463              		.cfi_remember_state
 4464              		.cfi_def_cfa_offset 40
 613:fltk-1.3.4-1/src/Fl_Menu.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 4465              		.loc 4 613 0
 4466 0043 B8010000 		movl	$1, %eax
 4466      00
 616:fltk-1.3.4-1/src/Fl_Menu.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4467              		.loc 4 616 0
 4468 0048 5B       		popq	%rbx
 4469              		.cfi_def_cfa_offset 32
 4470              	.LVL553:
 4471 0049 5D       		popq	%rbp
 4472              		.cfi_def_cfa_offset 24
 4473              	.LVL554:
 4474 004a 415C     		popq	%r12
 4475              		.cfi_def_cfa_offset 16
 4476              	.LVL555:
 4477 004c 415D     		popq	%r13
 4478              		.cfi_def_cfa_offset 8
 4479              	.LVL556:
 4480 004e C3       		ret
 4481              	.LVL557:
 4482 004f 90       		.p2align 4,,10
 4483              		.p2align 3
 4484              	.L372:
 4485              		.cfi_restore_state
 4486 0050 4883C408 		addq	$8, %rsp
 4487              		.cfi_def_cfa_offset 40
 615:fltk-1.3.4-1/src/Fl_Menu.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 4488              		.loc 4 615 0
 4489 0054 31C0     		xorl	%eax, %eax
 616:fltk-1.3.4-1/src/Fl_Menu.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4490              		.loc 4 616 0
 4491 0056 5B       		popq	%rbx
 4492              		.cfi_def_cfa_offset 32
 4493 0057 5D       		popq	%rbp
 4494              		.cfi_def_cfa_offset 24
 4495              	.LVL558:
 4496 0058 415C     		popq	%r12
 4497              		.cfi_def_cfa_offset 16
 4498              	.LVL559:
 4499 005a 415D     		popq	%r13
 4500              		.cfi_def_cfa_offset 8
 4501              	.LVL560:
 4502 005c C3       		ret
 4503              		.cfi_endproc
 4504              	.LFE580:
 4506              		.section	.text.unlikely._ZN9menustate9is_insideEii
 4507              	.LCOLDE32:
 4508              		.section	.text._ZN9menustate9is_insideEii
 4509              	.LHOTE32:
 4510              		.section	.text.unlikely._ZNK12Fl_Menu_Item13find_shortcutEPib,"ax",@progbits
 4511              		.align 2
 4512              	.LCOLDB33:
 4513              		.section	.text._ZNK12Fl_Menu_Item13find_shortcutEPib,"ax",@progbits
 4514              	.LHOTB33:
 4515              		.align 2
 4516              		.p2align 4,,15
 4517              		.globl	_ZNK12Fl_Menu_Item13find_shortcutEPib
 4519              	_ZNK12Fl_Menu_Item13find_shortcutEPib:
 4520              	.LFB589:
 656:fltk-1.3.4-1/src/Fl_Menu.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_Menu.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_Menu.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_Menu.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_Menu.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_Menu.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_Menu.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_Menu.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_Menu.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_Menu.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 666:fltk-1.3.4-1/src/Fl_Menu.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_Menu.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_Menu.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 669:fltk-1.3.4-1/src/Fl_Menu.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_Menu.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_Menu.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 672:fltk-1.3.4-1/src/Fl_Menu.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_Menu.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_Menu.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 675:fltk-1.3.4-1/src/Fl_Menu.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_Menu.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_Menu.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 678:fltk-1.3.4-1/src/Fl_Menu.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_Menu.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 680:fltk-1.3.4-1/src/Fl_Menu.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_Menu.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_Menu.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_Menu.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_Menu.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_Menu.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_Menu.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687:fltk-1.3.4-1/src/Fl_Menu.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_Menu.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_Menu.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 690:fltk-1.3.4-1/src/Fl_Menu.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_Menu.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_Menu.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_Menu.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_Menu.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_Menu.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_Menu.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_Menu.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_Menu.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_Menu.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_Menu.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_Menu.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_Menu.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_Menu.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_Menu.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_Menu.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_Menu.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_Menu.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_Menu.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 709:fltk-1.3.4-1/src/Fl_Menu.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_Menu.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_Menu.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_Menu.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_Menu.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_Menu.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_Menu.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 716:fltk-1.3.4-1/src/Fl_Menu.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 717:fltk-1.3.4-1/src/Fl_Menu.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 718:fltk-1.3.4-1/src/Fl_Menu.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_Menu.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_Menu.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721:fltk-1.3.4-1/src/Fl_Menu.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 722:fltk-1.3.4-1/src/Fl_Menu.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_Menu.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_Menu.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 725:fltk-1.3.4-1/src/Fl_Menu.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_Menu.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_Menu.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 728:fltk-1.3.4-1/src/Fl_Menu.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 729:fltk-1.3.4-1/src/Fl_Menu.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 730:fltk-1.3.4-1/src/Fl_Menu.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 731:fltk-1.3.4-1/src/Fl_Menu.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 732:fltk-1.3.4-1/src/Fl_Menu.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/src/Fl_Menu.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 734:fltk-1.3.4-1/src/Fl_Menu.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 735:fltk-1.3.4-1/src/Fl_Menu.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 736:fltk-1.3.4-1/src/Fl_Menu.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 737:fltk-1.3.4-1/src/Fl_Menu.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 738:fltk-1.3.4-1/src/Fl_Menu.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 739:fltk-1.3.4-1/src/Fl_Menu.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 740:fltk-1.3.4-1/src/Fl_Menu.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 741:fltk-1.3.4-1/src/Fl_Menu.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 742:fltk-1.3.4-1/src/Fl_Menu.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 743:fltk-1.3.4-1/src/Fl_Menu.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 744:fltk-1.3.4-1/src/Fl_Menu.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 745:fltk-1.3.4-1/src/Fl_Menu.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 746:fltk-1.3.4-1/src/Fl_Menu.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 747:fltk-1.3.4-1/src/Fl_Menu.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 748:fltk-1.3.4-1/src/Fl_Menu.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 749:fltk-1.3.4-1/src/Fl_Menu.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 750:fltk-1.3.4-1/src/Fl_Menu.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 751:fltk-1.3.4-1/src/Fl_Menu.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752:fltk-1.3.4-1/src/Fl_Menu.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 753:fltk-1.3.4-1/src/Fl_Menu.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 754:fltk-1.3.4-1/src/Fl_Menu.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 755:fltk-1.3.4-1/src/Fl_Menu.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 756:fltk-1.3.4-1/src/Fl_Menu.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 757:fltk-1.3.4-1/src/Fl_Menu.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 758:fltk-1.3.4-1/src/Fl_Menu.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 759:fltk-1.3.4-1/src/Fl_Menu.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 760:fltk-1.3.4-1/src/Fl_Menu.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 761:fltk-1.3.4-1/src/Fl_Menu.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 762:fltk-1.3.4-1/src/Fl_Menu.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 763:fltk-1.3.4-1/src/Fl_Menu.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/src/Fl_Menu.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 765:fltk-1.3.4-1/src/Fl_Menu.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/src/Fl_Menu.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 767:fltk-1.3.4-1/src/Fl_Menu.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 768:fltk-1.3.4-1/src/Fl_Menu.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 769:fltk-1.3.4-1/src/Fl_Menu.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 770:fltk-1.3.4-1/src/Fl_Menu.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771:fltk-1.3.4-1/src/Fl_Menu.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 772:fltk-1.3.4-1/src/Fl_Menu.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 773:fltk-1.3.4-1/src/Fl_Menu.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 774:fltk-1.3.4-1/src/Fl_Menu.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 775:fltk-1.3.4-1/src/Fl_Menu.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 776:fltk-1.3.4-1/src/Fl_Menu.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 777:fltk-1.3.4-1/src/Fl_Menu.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 778:fltk-1.3.4-1/src/Fl_Menu.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 779:fltk-1.3.4-1/src/Fl_Menu.cxx ****  762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 780:fltk-1.3.4-1/src/Fl_Menu.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 781:fltk-1.3.4-1/src/Fl_Menu.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 782:fltk-1.3.4-1/src/Fl_Menu.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 783:fltk-1.3.4-1/src/Fl_Menu.cxx ****  766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 784:fltk-1.3.4-1/src/Fl_Menu.cxx ****  767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callb
 785:fltk-1.3.4-1/src/Fl_Menu.cxx ****  768:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 786:fltk-1.3.4-1/src/Fl_Menu.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 787:fltk-1.3.4-1/src/Fl_Menu.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 788:fltk-1.3.4-1/src/Fl_Menu.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 789:fltk-1.3.4-1/src/Fl_Menu.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 790:fltk-1.3.4-1/src/Fl_Menu.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 791:fltk-1.3.4-1/src/Fl_Menu.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 792:fltk-1.3.4-1/src/Fl_Menu.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 793:fltk-1.3.4-1/src/Fl_Menu.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 794:fltk-1.3.4-1/src/Fl_Menu.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 795:fltk-1.3.4-1/src/Fl_Menu.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 796:fltk-1.3.4-1/src/Fl_Menu.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 797:fltk-1.3.4-1/src/Fl_Menu.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 798:fltk-1.3.4-1/src/Fl_Menu.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 799:fltk-1.3.4-1/src/Fl_Menu.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 800:fltk-1.3.4-1/src/Fl_Menu.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 801:fltk-1.3.4-1/src/Fl_Menu.cxx ****  784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 802:fltk-1.3.4-1/src/Fl_Menu.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 803:fltk-1.3.4-1/src/Fl_Menu.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 804:fltk-1.3.4-1/src/Fl_Menu.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 805:fltk-1.3.4-1/src/Fl_Menu.cxx ****  788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 806:fltk-1.3.4-1/src/Fl_Menu.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 807:fltk-1.3.4-1/src/Fl_Menu.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 808:fltk-1.3.4-1/src/Fl_Menu.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 809:fltk-1.3.4-1/src/Fl_Menu.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 810:fltk-1.3.4-1/src/Fl_Menu.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 811:fltk-1.3.4-1/src/Fl_Menu.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 812:fltk-1.3.4-1/src/Fl_Menu.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 813:fltk-1.3.4-1/src/Fl_Menu.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 814:fltk-1.3.4-1/src/Fl_Menu.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 815:fltk-1.3.4-1/src/Fl_Menu.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 816:fltk-1.3.4-1/src/Fl_Menu.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 817:fltk-1.3.4-1/src/Fl_Menu.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 818:fltk-1.3.4-1/src/Fl_Menu.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 819:fltk-1.3.4-1/src/Fl_Menu.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820:fltk-1.3.4-1/src/Fl_Menu.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 821:fltk-1.3.4-1/src/Fl_Menu.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 822:fltk-1.3.4-1/src/Fl_Menu.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 823:fltk-1.3.4-1/src/Fl_Menu.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 824:fltk-1.3.4-1/src/Fl_Menu.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 825:fltk-1.3.4-1/src/Fl_Menu.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 826:fltk-1.3.4-1/src/Fl_Menu.cxx ****  809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 827:fltk-1.3.4-1/src/Fl_Menu.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 828:fltk-1.3.4-1/src/Fl_Menu.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 829:fltk-1.3.4-1/src/Fl_Menu.cxx ****  812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 830:fltk-1.3.4-1/src/Fl_Menu.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 831:fltk-1.3.4-1/src/Fl_Menu.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 832:fltk-1.3.4-1/src/Fl_Menu.cxx ****  815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that
 833:fltk-1.3.4-1/src/Fl_Menu.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 834:fltk-1.3.4-1/src/Fl_Menu.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 835:fltk-1.3.4-1/src/Fl_Menu.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 836:fltk-1.3.4-1/src/Fl_Menu.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 837:fltk-1.3.4-1/src/Fl_Menu.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 838:fltk-1.3.4-1/src/Fl_Menu.cxx ****  821:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 839:fltk-1.3.4-1/src/Fl_Menu.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 840:fltk-1.3.4-1/src/Fl_Menu.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 841:fltk-1.3.4-1/src/Fl_Menu.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 842:fltk-1.3.4-1/src/Fl_Menu.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 843:fltk-1.3.4-1/src/Fl_Menu.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 844:fltk-1.3.4-1/src/Fl_Menu.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 845:fltk-1.3.4-1/src/Fl_Menu.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 846:fltk-1.3.4-1/src/Fl_Menu.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 847:fltk-1.3.4-1/src/Fl_Menu.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 848:fltk-1.3.4-1/src/Fl_Menu.cxx ****  831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 849:fltk-1.3.4-1/src/Fl_Menu.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 850:fltk-1.3.4-1/src/Fl_Menu.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 851:fltk-1.3.4-1/src/Fl_Menu.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 852:fltk-1.3.4-1/src/Fl_Menu.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 853:fltk-1.3.4-1/src/Fl_Menu.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 854:fltk-1.3.4-1/src/Fl_Menu.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 855:fltk-1.3.4-1/src/Fl_Menu.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 856:fltk-1.3.4-1/src/Fl_Menu.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 857:fltk-1.3.4-1/src/Fl_Menu.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 858:fltk-1.3.4-1/src/Fl_Menu.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 859:fltk-1.3.4-1/src/Fl_Menu.cxx ****  842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on th
 860:fltk-1.3.4-1/src/Fl_Menu.cxx ****  843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 861:fltk-1.3.4-1/src/Fl_Menu.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 862:fltk-1.3.4-1/src/Fl_Menu.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 863:fltk-1.3.4-1/src/Fl_Menu.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 864:fltk-1.3.4-1/src/Fl_Menu.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 865:fltk-1.3.4-1/src/Fl_Menu.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 866:fltk-1.3.4-1/src/Fl_Menu.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 867:fltk-1.3.4-1/src/Fl_Menu.cxx ****  850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 868:fltk-1.3.4-1/src/Fl_Menu.cxx ****  851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 869:fltk-1.3.4-1/src/Fl_Menu.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870:fltk-1.3.4-1/src/Fl_Menu.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 871:fltk-1.3.4-1/src/Fl_Menu.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 872:fltk-1.3.4-1/src/Fl_Menu.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 873:fltk-1.3.4-1/src/Fl_Menu.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 874:fltk-1.3.4-1/src/Fl_Menu.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 875:fltk-1.3.4-1/src/Fl_Menu.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 876:fltk-1.3.4-1/src/Fl_Menu.cxx ****  859:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 877:fltk-1.3.4-1/src/Fl_Menu.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 878:fltk-1.3.4-1/src/Fl_Menu.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 879:fltk-1.3.4-1/src/Fl_Menu.cxx ****  862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 880:fltk-1.3.4-1/src/Fl_Menu.cxx ****  863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 881:fltk-1.3.4-1/src/Fl_Menu.cxx ****  864:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with ar
 882:fltk-1.3.4-1/src/Fl_Menu.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 883:fltk-1.3.4-1/src/Fl_Menu.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 884:fltk-1.3.4-1/src/Fl_Menu.cxx ****  867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 885:fltk-1.3.4-1/src/Fl_Menu.cxx ****  868:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 886:fltk-1.3.4-1/src/Fl_Menu.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 887:fltk-1.3.4-1/src/Fl_Menu.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 888:fltk-1.3.4-1/src/Fl_Menu.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 889:fltk-1.3.4-1/src/Fl_Menu.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 890:fltk-1.3.4-1/src/Fl_Menu.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 891:fltk-1.3.4-1/src/Fl_Menu.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 892:fltk-1.3.4-1/src/Fl_Menu.cxx ****  875:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 893:fltk-1.3.4-1/src/Fl_Menu.cxx ****  876:fltk-1.3.4-1/FL/Fl_Widget.H ****   int test_shortcut();
 894:fltk-1.3.4-1/src/Fl_Menu.cxx ****  877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 895:fltk-1.3.4-1/src/Fl_Menu.cxx ****  878:fltk-1.3.4-1/FL/Fl_Widget.H ****   static unsigned int label_shortcut(const char *t);
 896:fltk-1.3.4-1/src/Fl_Menu.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 897:fltk-1.3.4-1/src/Fl_Menu.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 898:fltk-1.3.4-1/src/Fl_Menu.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 899:fltk-1.3.4-1/src/Fl_Menu.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 900:fltk-1.3.4-1/src/Fl_Menu.cxx ****  883:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _clear_fullscreen() {flags_ &= ~FULLSCREEN;}
 901:fltk-1.3.4-1/src/Fl_Menu.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 902:fltk-1.3.4-1/src/Fl_Menu.cxx ****  885:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if w is a child of this widget.
 903:fltk-1.3.4-1/src/Fl_Menu.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 904:fltk-1.3.4-1/src/Fl_Menu.cxx ****  887:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return Returns 1 if \p w is a child of this widget, or
 905:fltk-1.3.4-1/src/Fl_Menu.cxx ****  888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 906:fltk-1.3.4-1/src/Fl_Menu.cxx ****  889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 907:fltk-1.3.4-1/src/Fl_Menu.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 908:fltk-1.3.4-1/src/Fl_Menu.cxx ****  891:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 909:fltk-1.3.4-1/src/Fl_Menu.cxx ****  892:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if this widget is a child of \p wgt.
 910:fltk-1.3.4-1/src/Fl_Menu.cxx ****  893:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns 1 if this widget is a child of \p wgt, or is
 911:fltk-1.3.4-1/src/Fl_Menu.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 912:fltk-1.3.4-1/src/Fl_Menu.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 913:fltk-1.3.4-1/src/Fl_Menu.cxx ****  896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 914:fltk-1.3.4-1/src/Fl_Menu.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 915:fltk-1.3.4-1/src/Fl_Menu.cxx ****  898:fltk-1.3.4-1/FL/Fl_Widget.H ****   int inside(const Fl_Widget* wgt) const {return wgt ? wgt->c
 916:fltk-1.3.4-1/src/Fl_Menu.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 917:fltk-1.3.4-1/src/Fl_Menu.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 918:fltk-1.3.4-1/src/Fl_Menu.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 919:fltk-1.3.4-1/src/Fl_Menu.cxx ****  902:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 920:fltk-1.3.4-1/src/Fl_Menu.cxx ****  903:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw();
 921:fltk-1.3.4-1/src/Fl_Menu.cxx ****  904:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 922:fltk-1.3.4-1/src/Fl_Menu.cxx ****  905:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the label.
 923:fltk-1.3.4-1/src/Fl_Menu.cxx ****  906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for t
 924:fltk-1.3.4-1/src/Fl_Menu.cxx ****  907:fltk-1.3.4-1/FL/Fl_Widget.H ****      of a widget.
 925:fltk-1.3.4-1/src/Fl_Menu.cxx ****  908:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 926:fltk-1.3.4-1/src/Fl_Menu.cxx ****  909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 927:fltk-1.3.4-1/src/Fl_Menu.cxx ****  910:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 928:fltk-1.3.4-1/src/Fl_Menu.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 929:fltk-1.3.4-1/src/Fl_Menu.cxx ****  912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widge
 930:fltk-1.3.4-1/src/Fl_Menu.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 931:fltk-1.3.4-1/src/Fl_Menu.cxx ****  914:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a bitmap of flags describing the kind of damage
 932:fltk-1.3.4-1/src/Fl_Menu.cxx ****  915:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), clear_damage(uchar)
 933:fltk-1.3.4-1/src/Fl_Menu.cxx ****  916:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 934:fltk-1.3.4-1/src/Fl_Menu.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 935:fltk-1.3.4-1/src/Fl_Menu.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 936:fltk-1.3.4-1/src/Fl_Menu.cxx ****  919:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears or sets the damage flags.
 937:fltk-1.3.4-1/src/Fl_Menu.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 938:fltk-1.3.4-1/src/Fl_Menu.cxx ****  921:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 939:fltk-1.3.4-1/src/Fl_Menu.cxx ****  922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>a
 940:fltk-1.3.4-1/src/Fl_Menu.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 941:fltk-1.3.4-1/src/Fl_Menu.cxx ****  924:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 942:fltk-1.3.4-1/src/Fl_Menu.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 943:fltk-1.3.4-1/src/Fl_Menu.cxx ****  926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 944:fltk-1.3.4-1/src/Fl_Menu.cxx ****  927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 945:fltk-1.3.4-1/src/Fl_Menu.cxx ****  928:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c new bitmask of damage flags (default: 0)
 946:fltk-1.3.4-1/src/Fl_Menu.cxx ****  929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 947:fltk-1.3.4-1/src/Fl_Menu.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 948:fltk-1.3.4-1/src/Fl_Menu.cxx ****  931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 949:fltk-1.3.4-1/src/Fl_Menu.cxx ****  932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 950:fltk-1.3.4-1/src/Fl_Menu.cxx ****  933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 951:fltk-1.3.4-1/src/Fl_Menu.cxx ****  934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 952:fltk-1.3.4-1/src/Fl_Menu.cxx ****  935:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 953:fltk-1.3.4-1/src/Fl_Menu.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 954:fltk-1.3.4-1/src/Fl_Menu.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 955:fltk-1.3.4-1/src/Fl_Menu.cxx ****  938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 956:fltk-1.3.4-1/src/Fl_Menu.cxx ****  939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 957:fltk-1.3.4-1/src/Fl_Menu.cxx ****  940:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for an area inside the widget.
 958:fltk-1.3.4-1/src/Fl_Menu.cxx ****  941:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 959:fltk-1.3.4-1/src/Fl_Menu.cxx ****  942:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 960:fltk-1.3.4-1/src/Fl_Menu.cxx ****  943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 961:fltk-1.3.4-1/src/Fl_Menu.cxx ****  944:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 962:fltk-1.3.4-1/src/Fl_Menu.cxx ****  945:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 963:fltk-1.3.4-1/src/Fl_Menu.cxx ****  946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 964:fltk-1.3.4-1/src/Fl_Menu.cxx ****  947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 965:fltk-1.3.4-1/src/Fl_Menu.cxx ****  948:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int, Fl_Align) const;
 966:fltk-1.3.4-1/src/Fl_Menu.cxx ****  949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 967:fltk-1.3.4-1/src/Fl_Menu.cxx ****  950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label 
 968:fltk-1.3.4-1/src/Fl_Menu.cxx ****  951:fltk-1.3.4-1/FL/Fl_Widget.H ****       Labels with images will return w() and h() of the image
 969:fltk-1.3.4-1/src/Fl_Menu.cxx ****  952:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 970:fltk-1.3.4-1/src/Fl_Menu.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 971:fltk-1.3.4-1/src/Fl_Menu.cxx ****  954:fltk-1.3.4-1/FL/Fl_Widget.H ****       the arguments \p ww and \p hh and word wrapping
 972:fltk-1.3.4-1/src/Fl_Menu.cxx ****  955:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see fl_measure(const char*, int&, int&, int)
 973:fltk-1.3.4-1/src/Fl_Menu.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 974:fltk-1.3.4-1/src/Fl_Menu.cxx ****  957:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure_label(int& ww, int& hh) const {label_.measure(
 975:fltk-1.3.4-1/src/Fl_Menu.cxx ****  958:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 976:fltk-1.3.4-1/src/Fl_Menu.cxx ****  959:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* window() const ;
 977:fltk-1.3.4-1/src/Fl_Menu.cxx ****  960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 978:fltk-1.3.4-1/src/Fl_Menu.cxx ****  961:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window_offset(int& xoff, int& yoff) const;
 979:fltk-1.3.4-1/src/Fl_Menu.cxx ****  962:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 980:fltk-1.3.4-1/src/Fl_Menu.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 981:fltk-1.3.4-1/src/Fl_Menu.cxx ****  964:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 982:fltk-1.3.4-1/src/Fl_Menu.cxx ****  965:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 983:fltk-1.3.4-1/src/Fl_Menu.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 984:fltk-1.3.4-1/src/Fl_Menu.cxx ****  967:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 985:fltk-1.3.4-1/src/Fl_Menu.cxx ****  968:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 986:fltk-1.3.4-1/src/Fl_Menu.cxx ****  969:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Group-specific methods.
 987:fltk-1.3.4-1/src/Fl_Menu.cxx ****  970:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 988:fltk-1.3.4-1/src/Fl_Menu.cxx ****  971:fltk-1.3.4-1/FL/Fl_Widget.H ****       Example:
 989:fltk-1.3.4-1/src/Fl_Menu.cxx ****  972:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 990:fltk-1.3.4-1/src/Fl_Menu.cxx ****  973:fltk-1.3.4-1/FL/Fl_Widget.H ****       void my_callback (Fl_Widget *w, void *) {
 991:fltk-1.3.4-1/src/Fl_Menu.cxx ****  974:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Group *g = w->as_group();
 992:fltk-1.3.4-1/src/Fl_Menu.cxx ****  975:fltk-1.3.4-1/FL/Fl_Widget.H **** 	if (g)
 993:fltk-1.3.4-1/src/Fl_Menu.cxx ****  976:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This group has %d children\n",g->children());
 994:fltk-1.3.4-1/src/Fl_Menu.cxx ****  977:fltk-1.3.4-1/FL/Fl_Widget.H **** 	else
 995:fltk-1.3.4-1/src/Fl_Menu.cxx ****  978:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This widget is not a group!\n");
 996:fltk-1.3.4-1/src/Fl_Menu.cxx ****  979:fltk-1.3.4-1/FL/Fl_Widget.H ****       }
 997:fltk-1.3.4-1/src/Fl_Menu.cxx ****  980:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 998:fltk-1.3.4-1/src/Fl_Menu.cxx ****  981:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 999:fltk-1.3.4-1/src/Fl_Menu.cxx ****  982:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Grou
1000:fltk-1.3.4-1/src/Fl_Menu.cxx ****  983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1001:fltk-1.3.4-1/src/Fl_Menu.cxx ****  984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
1002:fltk-1.3.4-1/src/Fl_Menu.cxx ****  985:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1003:fltk-1.3.4-1/src/Fl_Menu.cxx ****  986:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Group* as_group() {return 0;}
1004:fltk-1.3.4-1/src/Fl_Menu.cxx ****  987:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1005:fltk-1.3.4-1/src/Fl_Menu.cxx ****  988:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Window pointer if this widget is an Fl_Wi
1006:fltk-1.3.4-1/src/Fl_Menu.cxx ****  989:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1007:fltk-1.3.4-1/src/Fl_Menu.cxx ****  990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
1008:fltk-1.3.4-1/src/Fl_Menu.cxx ****  991:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Window. If 
1009:fltk-1.3.4-1/src/Fl_Menu.cxx ****  992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
1010:fltk-1.3.4-1/src/Fl_Menu.cxx ****  993:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
1011:fltk-1.3.4-1/src/Fl_Menu.cxx ****  994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
1012:fltk-1.3.4-1/src/Fl_Menu.cxx ****  995:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1013:fltk-1.3.4-1/src/Fl_Menu.cxx ****  996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Wind
1014:fltk-1.3.4-1/src/Fl_Menu.cxx ****  997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1015:fltk-1.3.4-1/src/Fl_Menu.cxx ****  998:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_gl_window()
1016:fltk-1.3.4-1/src/Fl_Menu.cxx ****  999:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1017:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1000:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Window* as_window() {return 0;}
1018:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1001:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1019:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1002:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Gl_Window pointer if this widget is an Fl
1020:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1021:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1004:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
1022:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1005:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Gl_Window. 
1023:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
1024:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1007:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1025:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1008:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Gl_W
1026:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1009:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1027:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1010:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_window()
1028:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1029:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1012:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual class Fl_Gl_Window* as_gl_window() {return 0;}
1030:fltk-1.3.4-1/src/Fl_Menu.cxx ****   19              		.loc 1 1012 0
1031:fltk-1.3.4-1/src/Fl_Menu.cxx ****   20              		.cfi_startproc
1032:fltk-1.3.4-1/src/Fl_Menu.cxx ****   21              	.LVL0:
1033:fltk-1.3.4-1/src/Fl_Menu.cxx ****   22              		.loc 1 1012 0
1034:fltk-1.3.4-1/src/Fl_Menu.cxx ****   23 0000 31C0     		xorl	%eax, %eax
1035:fltk-1.3.4-1/src/Fl_Menu.cxx ****   24 0002 C3       		ret
1036:fltk-1.3.4-1/src/Fl_Menu.cxx ****   25              		.cfi_endproc
 4521              		.loc 4 1036 0
 4522              		.cfi_startproc
 4523              	.LVL561:
 4524              	.LBB854:
1037:fltk-1.3.4-1/src/Fl_Menu.cxx ****   26              	.LFE234:
1038:fltk-1.3.4-1/src/Fl_Menu.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
 4525              		.loc 4 1038 0
 4526 0000 4885FF   		testq	%rdi, %rdi
 4527 0003 0F84C200 		je	.L402
 4527      0000
 4528              	.LVL562:
 4529              	.LBB855:
 4530              		.loc 4 1038 0 is_stmt 0 discriminator 2
 4531 0009 48833F00 		cmpq	$0, (%rdi)
 4532 000d 0F84B800 		je	.L402
 4532      0000
 4533              	.LBE855:
 4534              	.LBE854:
1036:fltk-1.3.4-1/src/Fl_Menu.cxx ****   26              	.LFE234:
 4535              		.loc 4 1036 0 is_stmt 1
 4536 0013 4155     		pushq	%r13
 4537              		.cfi_def_cfa_offset 16
 4538              		.cfi_offset 13, -16
 4539 0015 4154     		pushq	%r12
 4540              		.cfi_def_cfa_offset 24
 4541              		.cfi_offset 12, -24
 4542              	.LBB867:
 4543              	.LBB860:
 4544              		.loc 4 1038 0
 4545 0017 4531ED   		xorl	%r13d, %r13d
 4546              	.LBE860:
 4547              	.LBE867:
1036:fltk-1.3.4-1/src/Fl_Menu.cxx ****   26              	.LFE234:
 4548              		.loc 4 1036 0
 4549 001a 55       		pushq	%rbp
 4550              		.cfi_def_cfa_offset 32
 4551              		.cfi_offset 6, -32
 4552 001b 53       		pushq	%rbx
 4553              		.cfi_def_cfa_offset 40
 4554              		.cfi_offset 3, -40
 4555 001c 4889F5   		movq	%rsi, %rbp
 4556              	.LBB868:
 4557              	.LBB861:
 4558              		.loc 4 1038 0
 4559 001f 4889FB   		movq	%rdi, %rbx
1039:fltk-1.3.4-1/src/Fl_Menu.cxx ****   29              	.LCOLDE0:
1040:fltk-1.3.4-1/src/Fl_Menu.cxx ****   30              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
1041:fltk-1.3.4-1/src/Fl_Menu.cxx ****   31              	.LHOTE0:
 4560              		.loc 4 1041 0
 4561 0022 440FB6E2 		movzbl	%dl, %r12d
 4562              	.LBE861:
 4563              	.LBE868:
1036:fltk-1.3.4-1/src/Fl_Menu.cxx ****   26              	.LFE234:
 4564              		.loc 4 1036 0
 4565 0026 4883EC08 		subq	$8, %rsp
 4566              		.cfi_def_cfa_offset 48
 4567              	.LVL563:
 4568              	.L392:
 4569              	.LBB869:
 4570              	.LBB862:
1039:fltk-1.3.4-1/src/Fl_Menu.cxx ****   29              	.LCOLDE0:
 4571              		.loc 4 1039 0
 4572 002a F6432001 		testb	$1, 32(%rbx)
 4573 002e 7537     		jne	.L386
1040:fltk-1.3.4-1/src/Fl_Menu.cxx ****   31              	.LHOTE0:
 4574              		.loc 4 1040 0
 4575 0030 8B7B08   		movl	8(%rbx), %edi
 4576 0033 E8000000 		call	_ZN2Fl13test_shortcutEj
 4576      00
 4577              	.LVL564:
 4578              		.loc 4 1041 0
 4579 0038 85C0     		testl	%eax, %eax
 4580 003a 741C     		je	.L403
 4581              	.L387:
1042:fltk-1.3.4-1/src/Fl_Menu.cxx ****   32              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
 4582              		.loc 4 1042 0
 4583 003c 4885ED   		testq	%rbp, %rbp
 4584 003f 747C     		je	.L404
 4585              		.loc 4 1042 0 is_stmt 0 discriminator 1
 4586 0041 44896D00 		movl	%r13d, 0(%rbp)
 4587              	.LBE862:
 4588              	.LBE869:
1043:fltk-1.3.4-1/src/Fl_Menu.cxx ****   33              		.align 2
1044:fltk-1.3.4-1/src/Fl_Menu.cxx ****   34              	.LCOLDB1:
1045:fltk-1.3.4-1/src/Fl_Menu.cxx ****   35              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,
1046:fltk-1.3.4-1/src/Fl_Menu.cxx ****   36              	.LHOTB1:
1047:fltk-1.3.4-1/src/Fl_Menu.cxx ****   37              		.align 2
1048:fltk-1.3.4-1/src/Fl_Menu.cxx ****   38              		.p2align 4,,15
 4589              		.loc 4 1048 0 is_stmt 1 discriminator 1
 4590 0045 4883C408 		addq	$8, %rsp
 4591              		.cfi_remember_state
 4592              		.cfi_def_cfa_offset 40
 4593              	.LBB870:
 4594              	.LBB863:
 4595 0049 4889D8   		movq	%rbx, %rax
 4596              	.LBE863:
 4597              	.LBE870:
 4598 004c 5B       		popq	%rbx
 4599              		.cfi_restore 3
 4600              		.cfi_def_cfa_offset 32
 4601              	.LVL565:
 4602 004d 5D       		popq	%rbp
 4603              		.cfi_restore 6
 4604              		.cfi_def_cfa_offset 24
 4605              	.LVL566:
 4606 004e 415C     		popq	%r12
 4607              		.cfi_restore 12
 4608              		.cfi_def_cfa_offset 16
 4609              	.LVL567:
 4610 0050 415D     		popq	%r13
 4611              		.cfi_restore 13
 4612              		.cfi_def_cfa_offset 8
 4613              	.LVL568:
 4614 0052 C3       		ret
 4615              	.LVL569:
 4616              		.p2align 4,,10
 4617 0053 0F1F4400 		.p2align 3
 4617      00
 4618              	.L403:
 4619              		.cfi_restore_state
 4620              	.LBB871:
 4621              	.LBB864:
1041:fltk-1.3.4-1/src/Fl_Menu.cxx ****   32              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
 4622              		.loc 4 1041 0 discriminator 2
 4623 0058 488B3B   		movq	(%rbx), %rdi
 4624 005b 4489E6   		movl	%r12d, %esi
 4625 005e E8000000 		call	_ZN9Fl_Widget13test_shortcutEPKcb
 4625      00
 4626              	.LVL570:
 4627 0063 85C0     		testl	%eax, %eax
 4628 0065 75D5     		jne	.L387
 4629              	.L386:
 4630              	.LVL571:
 4631 0067 488D5338 		leaq	56(%rbx), %rdx
 4632              	.LBB856:
 4633              	.LBB857:
  75:fltk-1.3.4-1/src/Fl_Menu.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 4634              		.loc 4 75 0
 4635 006b 31C9     		xorl	%ecx, %ecx
 4636 006d EB08     		jmp	.L388
 4637              	.LVL572:
 4638 006f 90       		.p2align 4,,10
 4639              		.p2align 3
 4640              	.L406:
  81:fltk-1.3.4-1/src/Fl_Menu.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 4641              		.loc 4 81 0
 4642 0070 83C101   		addl	$1, %ecx
 4643              	.LVL573:
 4644              	.L391:
 4645 0073 4883C238 		addq	$56, %rdx
 4646              	.LVL574:
 4647              	.L388:
  77:fltk-1.3.4-1/src/Fl_Menu.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 4648              		.loc 4 77 0
 4649 0077 48837AC8 		cmpq	$0, -56(%rdx)
 4649      00
 4650 007c 488D42C8 		leaq	-56(%rdx), %rax
 4651              	.LVL575:
 4652 0080 4889D3   		movq	%rdx, %rbx
 4653 0083 742B     		je	.L405
  80:fltk-1.3.4-1/src/Fl_Menu.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 4654              		.loc 4 80 0
 4655 0085 F642E840 		testb	$64, -24(%rdx)
 4656 0089 75E5     		jne	.L406
 4657              	.LVL576:
  76:fltk-1.3.4-1/src/Fl_Menu.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 4658              		.loc 4 76 0
 4659 008b 85C9     		testl	%ecx, %ecx
 4660 008d 75E4     		jne	.L391
 4661              	.L407:
 4662              	.LVL577:
 4663              	.LBE857:
 4664              	.LBE856:
1038:fltk-1.3.4-1/src/Fl_Menu.cxx ****   29              	.LCOLDE0:
 4665              		.loc 4 1038 0
 4666 008f 4183C501 		addl	$1, %r13d
 4667              	.LVL578:
 4668 0093 48837838 		cmpq	$0, 56(%rax)
 4668      00
 4669 0098 7590     		jne	.L392
 4670              	.L385:
 4671              	.LBE864:
 4672              	.LBE871:
 4673              		.loc 4 1048 0
 4674 009a 4883C408 		addq	$8, %rsp
 4675              		.cfi_remember_state
 4676              		.cfi_def_cfa_offset 40
1047:fltk-1.3.4-1/src/Fl_Menu.cxx ****   38              		.p2align 4,,15
 4677              		.loc 4 1047 0
 4678 009e 31C0     		xorl	%eax, %eax
 4679              		.loc 4 1048 0
 4680 00a0 5B       		popq	%rbx
 4681              		.cfi_restore 3
 4682              		.cfi_def_cfa_offset 32
 4683 00a1 5D       		popq	%rbp
 4684              		.cfi_restore 6
 4685              		.cfi_def_cfa_offset 24
 4686              	.LVL579:
 4687 00a2 415C     		popq	%r12
 4688              		.cfi_restore 12
 4689              		.cfi_def_cfa_offset 16
 4690 00a4 415D     		popq	%r13
 4691              		.cfi_restore 13
 4692              		.cfi_def_cfa_offset 8
 4693              	.LVL580:
 4694 00a6 C3       		ret
 4695              	.LVL581:
 4696 00a7 660F1F84 		.p2align 4,,10
 4696      00000000 
 4696      00
 4697              		.p2align 3
 4698              	.L405:
 4699              		.cfi_restore_state
 4700              	.LBB872:
 4701              	.LBB865:
 4702              	.LBB859:
 4703              	.LBB858:
  78:fltk-1.3.4-1/src/Fl_Menu.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 4704              		.loc 4 78 0
 4705 00b0 85C9     		testl	%ecx, %ecx
 4706 00b2 74E6     		je	.L385
  79:fltk-1.3.4-1/src/Fl_Menu.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 4707              		.loc 4 79 0
 4708 00b4 83E901   		subl	$1, %ecx
 4709              	.LVL582:
  76:fltk-1.3.4-1/src/Fl_Menu.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 4710              		.loc 4 76 0
 4711 00b7 85C9     		testl	%ecx, %ecx
 4712 00b9 75B8     		jne	.L391
 4713 00bb EBD2     		jmp	.L407
 4714              	.LVL583:
 4715              	.L404:
 4716              	.LBE858:
 4717              	.LBE859:
 4718              	.LBE865:
 4719              	.LBE872:
 4720              		.loc 4 1048 0
 4721 00bd 4883C408 		addq	$8, %rsp
 4722              		.cfi_def_cfa_offset 40
 4723              	.LBB873:
 4724              	.LBB866:
 4725 00c1 4889D8   		movq	%rbx, %rax
 4726              	.LBE866:
 4727              	.LBE873:
 4728 00c4 5B       		popq	%rbx
 4729              		.cfi_restore 3
 4730              		.cfi_def_cfa_offset 32
 4731              	.LVL584:
 4732 00c5 5D       		popq	%rbp
 4733              		.cfi_restore 6
 4734              		.cfi_def_cfa_offset 24
 4735              	.LVL585:
 4736 00c6 415C     		popq	%r12
 4737              		.cfi_restore 12
 4738              		.cfi_def_cfa_offset 16
 4739 00c8 415D     		popq	%r13
 4740              		.cfi_restore 13
 4741              		.cfi_def_cfa_offset 8
 4742              	.LVL586:
 4743 00ca C3       		ret
 4744              	.LVL587:
 4745              	.L402:
1047:fltk-1.3.4-1/src/Fl_Menu.cxx ****   38              		.p2align 4,,15
 4746              		.loc 4 1047 0
 4747 00cb 31C0     		xorl	%eax, %eax
 4748              		.loc 4 1048 0
 4749 00cd C3       		ret
 4750              		.cfi_endproc
 4751              	.LFE589:
 4753              		.section	.text.unlikely._ZNK12Fl_Menu_Item13find_shortcutEPib
 4754              	.LCOLDE33:
 4755              		.section	.text._ZNK12Fl_Menu_Item13find_shortcutEPib
 4756              	.LHOTE33:
 4757              		.section	.text.unlikely._ZN10menuwindow17early_hide_handleEi,"ax",@progbits
 4758              		.align 2
 4759              	.LCOLDB34:
 4760              		.section	.text._ZN10menuwindow17early_hide_handleEi,"ax",@progbits
 4761              	.LHOTB34:
 4762              		.align 2
 4763              		.p2align 4,,15
 4764              		.globl	_ZN10menuwindow17early_hide_handleEi
 4766              	_ZN10menuwindow17early_hide_handleEi:
 4767              	.LFB586:
 685:fltk-1.3.4-1/src/Fl_Menu.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4768              		.loc 4 685 0
 4769              		.cfi_startproc
 4770              	.LVL588:
 4771 0000 4157     		pushq	%r15
 4772              		.cfi_def_cfa_offset 16
 4773              		.cfi_offset 15, -16
 4774 0002 4156     		pushq	%r14
 4775              		.cfi_def_cfa_offset 24
 4776              		.cfi_offset 14, -24
 4777 0004 4155     		pushq	%r13
 4778              		.cfi_def_cfa_offset 32
 4779              		.cfi_offset 13, -32
 4780 0006 4154     		pushq	%r12
 4781              		.cfi_def_cfa_offset 40
 4782              		.cfi_offset 12, -40
 4783 0008 4189F5   		movl	%esi, %r13d
 4784 000b 55       		pushq	%rbp
 4785              		.cfi_def_cfa_offset 48
 4786              		.cfi_offset 6, -48
 4787 000c 53       		pushq	%rbx
 4788              		.cfi_def_cfa_offset 56
 4789              		.cfi_offset 3, -56
 4790 000d 4989FC   		movq	%rdi, %r12
 4791 0010 4883EC28 		subq	$40, %rsp
 4792              		.cfi_def_cfa_offset 96
 687:fltk-1.3.4-1/src/Fl_Menu.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 4793              		.loc 4 687 0
 4794 0014 488B2D00 		movq	_ZL1p(%rip), %rbp
 4794      000000
 4795              	.LVL589:
 685:fltk-1.3.4-1/src/Fl_Menu.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4796              		.loc 4 685 0
 4797 001b 64488B04 		movq	%fs:40, %rax
 4797      25280000 
 4797      00
 4798 0024 48894424 		movq	%rax, 24(%rsp)
 4798      18
 4799 0029 31C0     		xorl	%eax, %eax
 4800              	.LBB874:
 688:fltk-1.3.4-1/src/Fl_Menu.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4801              		.loc 4 688 0
 4802 002b 83FE0C   		cmpl	$12, %esi
 4803 002e 0F875C01 		ja	.L409
 4803      0000
 4804 0034 89F0     		movl	%esi, %eax
 4805 0036 FF24C500 		jmp	*.L411(,%rax,8)
 4805      000000
 4806              		.section	.rodata._ZN10menuwindow17early_hide_handleEi,"a",@progbits
 4807              		.align 8
 4808              		.align 4
 4809              	.L411:
 4810 0000 00000000 		.quad	.L409
 4810      00000000 
 4811 0008 00000000 		.quad	.L410
 4811      00000000 
 4812 0010 00000000 		.quad	.L412
 4812      00000000 
 4813 0018 00000000 		.quad	.L410
 4813      00000000 
 4814 0020 00000000 		.quad	.L409
 4814      00000000 
 4815 0028 00000000 		.quad	.L410
 4815      00000000 
 4816 0030 00000000 		.quad	.L409
 4816      00000000 
 4817 0038 00000000 		.quad	.L409
 4817      00000000 
 4818 0040 00000000 		.quad	.L413
 4818      00000000 
 4819 0048 00000000 		.quad	.L409
 4819      00000000 
 4820 0050 00000000 		.quad	.L409
 4820      00000000 
 4821 0058 00000000 		.quad	.L414
 4821      00000000 
 4822 0060 00000000 		.quad	.L415
 4822      00000000 
 4823              		.section	.text._ZN10menuwindow17early_hide_handleEi
 4824 003d 0F1F00   		.p2align 4,,10
 4825              		.p2align 3
 4826              	.L414:
 4827              	.LBB875:
 752:fltk-1.3.4-1/src/Fl_Menu.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4828              		.loc 4 752 0
 4829 0040 83BDB800 		cmpl	$2, 184(%rbp)
 4829      000002
 4830 0047 0F841302 		je	.L528
 4830      0000
 4831              	.L410:
 4832              	.LBB876:
 765:fltk-1.3.4-1/src/Fl_Menu.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 4833              		.loc 4 765 0
 4834 004d 8B8DB400 		movl	180(%rbp), %ecx
 4834      0000
 4835              	.LBB877:
 4836              	.LBB878:
 610:fltk-1.3.4-1/FL/Fl.H ****   /**
 4837              		.loc 6 610 0
 4838 0053 448B3500 		movl	_ZN2Fl8e_x_rootE(%rip), %r14d
 4838      000000
 4839              	.LBE878:
 4840              	.LBE877:
 4841              	.LBB879:
 4842              	.LBB880:
 617:fltk-1.3.4-1/FL/Fl.H ****   /**
 4843              		.loc 6 617 0
 4844 005a 448B2500 		movl	_ZN2Fl8e_y_rootE(%rip), %r12d
 4844      000000
 4845              	.LVL590:
 4846              	.LBE880:
 4847              	.LBE879:
 763:fltk-1.3.4-1/src/Fl_Menu.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 4848              		.loc 4 763 0
 4849 0061 8B9DB000 		movl	176(%rbp), %ebx
 4849      0000
 4850              	.LVL591:
 765:fltk-1.3.4-1/src/Fl_Menu.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 4851              		.loc 4 765 0
 4852 0067 85C9     		testl	%ecx, %ecx
 4853 0069 0F84A100 		je	.L471
 4853      0000
 4854 006f 83FB01   		cmpl	$1, %ebx
 4855 0072 0F859800 		jne	.L471
 4855      0000
 4856 0078 BB010000 		movl	$1, %ebx
 4856      00
 4857              	.LVL592:
 4858 007d EB09     		jmp	.L446
 4859              	.LVL593:
 4860 007f 90       		.p2align 4,,10
 4861              		.p2align 3
 4862              	.L536:
 775:fltk-1.3.4-1/src/Fl_Menu.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 4863              		.loc 4 775 0
 4864 0080 85DB     		testl	%ebx, %ebx
 4865 0082 0F8E2802 		jle	.L535
 4865      0000
 4866              	.LVL594:
 4867              	.L446:
 771:fltk-1.3.4-1/src/Fl_Menu.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 4868              		.loc 4 771 0
 4869 0088 83EB01   		subl	$1, %ebx
 4870              	.LVL595:
 772:fltk-1.3.4-1/src/Fl_Menu.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4871              		.loc 4 772 0
 4872 008b 4489E2   		movl	%r12d, %edx
 4873 008e 4489F6   		movl	%r14d, %esi
 4874 0091 4C63FB   		movslq	%ebx, %r15
 4875 0094 4A8B7CFD 		movq	16(%rbp,%r15,8), %rdi
 4875      10
 4876 0099 E8000000 		call	_ZN10menuwindow13find_selectedEii
 4876      00
 4877              	.LVL596:
 773:fltk-1.3.4-1/src/Fl_Menu.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 4878              		.loc 4 773 0
 4879 009e 85C0     		testl	%eax, %eax
 4880 00a0 78DE     		js	.L536
 791:fltk-1.3.4-1/src/Fl_Menu.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 4881              		.loc 4 791 0
 4882 00a2 4585E4   		testl	%r12d, %r12d
 4883 00a5 0F856503 		jne	.L456
 4883      0000
 4884 00ab 85C0     		testl	%eax, %eax
 4885 00ad 0F8E5D03 		jle	.L456
 4885      0000
 791:fltk-1.3.4-1/src/Fl_Menu.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 4886              		.loc 4 791 0 is_stmt 0 discriminator 1
 4887 00b3 8D70FF   		leal	-1(%rax), %esi
 4888 00b6 89DF     		movl	%ebx, %edi
 4889 00b8 8944240C 		movl	%eax, 12(%rsp)
 4890 00bc E8000000 		call	_ZL7setitemii
 4890      00
 4891              	.LVL597:
 4892 00c1 8B44240C 		movl	12(%rsp), %eax
 4893              	.L457:
 793:fltk-1.3.4-1/src/Fl_Menu.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4894              		.loc 4 793 0 is_stmt 1
 4895 00c5 4183FD01 		cmpl	$1, %r13d
 4896 00c9 0F859101 		jne	.L528
 4896      0000
 794:fltk-1.3.4-1/src/Fl_Menu.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 4897              		.loc 4 794 0
 4898 00cf 488B5500 		movq	0(%rbp), %rdx
 796:fltk-1.3.4-1/src/Fl_Menu.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4899              		.loc 4 796 0
 4900 00d3 4885D2   		testq	%rdx, %rdx
 4901 00d6 741E     		je	.L458
 4902              	.LVL598:
 794:fltk-1.3.4-1/src/Fl_Menu.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 4903              		.loc 4 794 0
 4904 00d8 F6422060 		testb	$96, 32(%rdx)
 4905 00dc 7418     		je	.L458
 795:fltk-1.3.4-1/src/Fl_Menu.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 4906              		.loc 4 795 0
 4907 00de 4A8B4CFD 		movq	16(%rbp,%r15,8), %rcx
 4907      10
 4908 00e3 3B810001 		cmpl	256(%rcx), %eax
 4908      0000
 4909 00e9 740B     		je	.L458
 796:fltk-1.3.4-1/src/Fl_Menu.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4910              		.loc 4 796 0 discriminator 3
 4911 00eb 48837A10 		cmpq	$0, 16(%rdx)
 4911      00
 4912 00f0 0F844004 		je	.L537
 4912      0000
 4913              	.LVL599:
 4914              	.L458:
 799:fltk-1.3.4-1/src/Fl_Menu.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 4915              		.loc 4 799 0
 4916 00f6 C785B800 		movl	$1, 184(%rbp)
 4916      00000100 
 4916      0000
 4917              	.LBE876:
 802:fltk-1.3.4-1/src/Fl_Menu.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 4918              		.loc 4 802 0
 4919 0100 B8010000 		movl	$1, %eax
 4919      00
 4920 0105 E9910000 		jmp	.L428
 4920      00
 4921              	.LVL600:
 4922 010a 660F1F44 		.p2align 4,,10
 4922      0000
 4923              		.p2align 3
 4924              	.L471:
 4925              	.LBB889:
 4926              	.LBB881:
 4927              	.LBB882:
 611:fltk-1.3.4-1/src/Fl_Menu.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 4928              		.loc 4 611 0
 4929 0110 83EB01   		subl	$1, %ebx
 4930              	.LVL601:
 4931 0113 7917     		jns	.L450
 4932 0115 E9300400 		jmp	.L469
 4932      00
 4933              	.LVL602:
 4934 011a 660F1F44 		.p2align 4,,10
 4934      0000
 4935              		.p2align 3
 4936              	.L449:
 4937 0120 83EB01   		subl	$1, %ebx
 4938              	.LVL603:
 4939 0123 83FBFF   		cmpl	$-1, %ebx
 4940 0126 0F844401 		je	.L538
 4940      0000
 4941              	.L450:
 612:fltk-1.3.4-1/src/Fl_Menu.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 4942              		.loc 4 612 0
 4943 012c 4863C3   		movslq	%ebx, %rax
 4944 012f 4489E2   		movl	%r12d, %edx
 4945 0132 4489F6   		movl	%r14d, %esi
 4946 0135 488B7CC5 		movq	16(%rbp,%rax,8), %rdi
 4946      10
 4947 013a E8000000 		call	_ZN10menuwindow9is_insideEii
 4947      00
 4948              	.LVL604:
 4949 013f 85C0     		testl	%eax, %eax
 4950 0141 74DD     		je	.L449
 4951 0143 8B9DB000 		movl	176(%rbp), %ebx
 4951      0000
 4952              	.LVL605:
 4953 0149 E93AFFFF 		jmp	.L446
 4953      FF
 4954              	.LVL606:
 4955 014e 6690     		.p2align 4,,10
 4956              		.p2align 3
 4957              	.L413:
 4958              	.LBE882:
 4959              	.LBE881:
 4960              	.LBE889:
 690:fltk-1.3.4-1/src/Fl_Menu.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 4961              		.loc 4 690 0
 4962 0150 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 4962      0000
 4963 0156 3D1BFF00 		cmpl	$65307, %eax
 4963      00
 4964 015b 0F843003 		je	.L416
 4964      0000
 4965 0161 0F8EC901 		jle	.L539
 4965      0000
 4966 0167 3D53FF00 		cmpl	$65363, %eax
 4966      00
 4967 016c 0F844903 		je	.L422
 4967      0000
 4968 0172 0F8E2002 		jle	.L540
 4968      0000
 4969 0178 3D54FF00 		cmpl	$65364, %eax
 4969      00
 4970 017d 0F84D601 		je	.L426
 4970      0000
 4971 0183 3D8DFF00 		cmpl	$65421, %eax
 4971      00
 4972 0188 0F84C800 		je	.L529
 4972      0000
 4973              	.LVL607:
 4974 018e 6690     		.p2align 4,,10
 4975              		.p2align 3
 4976              	.L409:
 4977              	.LBE875:
 4978              	.LBE874:
 823:fltk-1.3.4-1/src/Fl_Menu.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 4979              		.loc 4 823 0
 4980 0190 4489EE   		movl	%r13d, %esi
 4981 0193 4C89E7   		movq	%r12, %rdi
 4982 0196 E8000000 		call	_ZN9Fl_Window6handleEi
 4982      00
 4983              	.LVL608:
 4984              	.L428:
 824:fltk-1.3.4-1/src/Fl_Menu.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 4985              		.loc 4 824 0
 4986 019b 488B4C24 		movq	24(%rsp), %rcx
 4986      18
 4987 01a0 6448330C 		xorq	%fs:40, %rcx
 4987      25280000 
 4987      00
 4988 01a9 0F850404 		jne	.L541
 4988      0000
 4989 01af 4883C428 		addq	$40, %rsp
 4990              		.cfi_remember_state
 4991              		.cfi_def_cfa_offset 56
 4992 01b3 5B       		popq	%rbx
 4993              		.cfi_def_cfa_offset 48
 4994 01b4 5D       		popq	%rbp
 4995              		.cfi_def_cfa_offset 40
 4996              	.LVL609:
 4997 01b5 415C     		popq	%r12
 4998              		.cfi_def_cfa_offset 32
 4999 01b7 415D     		popq	%r13
 5000              		.cfi_def_cfa_offset 24
 5001              	.LVL610:
 5002 01b9 415E     		popq	%r14
 5003              		.cfi_def_cfa_offset 16
 5004 01bb 415F     		popq	%r15
 5005              		.cfi_def_cfa_offset 8
 5006 01bd C3       		ret
 5007              	.LVL611:
 5008 01be 6690     		.p2align 4,,10
 5009              		.p2align 3
 5010              	.L412:
 5011              		.cfi_restore_state
 5012              	.LBB907:
 5013              	.LBB906:
 808:fltk-1.3.4-1/src/Fl_Menu.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5014              		.loc 4 808 0
 5015 01c0 8B150000 		movl	_ZN2Fl10e_is_clickE(%rip), %edx
 5015      0000
 5016 01c6 85D2     		testl	%edx, %edx
 5017 01c8 0F84CA00 		je	.L460
 5017      0000
 807:fltk-1.3.4-1/src/Fl_Menu.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 5018              		.loc 4 807 0
 5019 01ce 83BDB800 		cmpl	$1, 184(%rbp)
 5019      000001
 5020 01d5 0F84BD00 		je	.L460
 5020      0000
 808:fltk-1.3.4-1/src/Fl_Menu.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5021              		.loc 4 808 0
 5022 01db 8B85B400 		movl	180(%rbp), %eax
 5022      0000
 5023 01e1 85C0     		testl	%eax, %eax
 5024 01e3 747B     		je	.L528
 808:fltk-1.3.4-1/src/Fl_Menu.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5025              		.loc 4 808 0 is_stmt 0 discriminator 2
 5026 01e5 488B4500 		movq	0(%rbp), %rax
 5027 01e9 4885C0   		testq	%rax, %rax
 5028 01ec 7472     		je	.L528
 5029 01ee 8B4020   		movl	32(%rax), %eax
 5030              	.LVL612:
 808:fltk-1.3.4-1/src/Fl_Menu.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5031              		.loc 4 808 0 discriminator 4
 5032 01f1 A860     		testb	$96, %al
 5033 01f3 0F84AB00 		je	.L461
 5033      0000
 5034 01f9 EB65     		jmp	.L528
 5035              	.LVL613:
 5036 01fb 0F1F4400 		.p2align 4,,10
 5036      00
 5037              		.p2align 3
 5038              	.L415:
 5039              	.LBB890:
 739:fltk-1.3.4-1/src/Fl_Menu.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 5040              		.loc 4 739 0 is_stmt 1
 5041 0200 8B85B000 		movl	176(%rbp), %eax
 5041      0000
 5042              	.LVL614:
 5043 0206 85C0     		testl	%eax, %eax
 5044 0208 8D58FF   		leal	-1(%rax), %ebx
 5045              	.LVL615:
 5046 020b 750F     		jne	.L506
 5047 020d EB81     		jmp	.L409
 5048              	.LVL616:
 5049 020f 90       		.p2align 4,,10
 5050              		.p2align 3
 5051              	.L442:
 5052 0210 83EB01   		subl	$1, %ebx
 5053              	.LVL617:
 5054 0213 83FBFF   		cmpl	$-1, %ebx
 5055 0216 0F8474FF 		je	.L409
 5055      FFFF
 5056              	.LVL618:
 5057              	.L506:
 5058              	.LBB891:
 740:fltk-1.3.4-1/src/Fl_Menu.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 5059              		.loc 4 740 0
 5060 021c 4863C3   		movslq	%ebx, %rax
 5061              	.LVL619:
 741:fltk-1.3.4-1/src/Fl_Menu.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 5062              		.loc 4 741 0
 5063 021f 488D7424 		leaq	20(%rsp), %rsi
 5063      14
 5064 0224 31D2     		xorl	%edx, %edx
 5065 0226 488B44C5 		movq	16(%rbp,%rax,8), %rax
 5065      10
 5066              	.LVL620:
 5067 022b 488BB810 		movq	272(%rax), %rdi
 5067      010000
 5068 0232 E8000000 		call	_ZNK12Fl_Menu_Item13find_shortcutEPib
 5068      00
 5069              	.LVL621:
 742:fltk-1.3.4-1/src/Fl_Menu.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 5070              		.loc 4 742 0
 5071 0237 4885C0   		testq	%rax, %rax
 5072 023a 74D4     		je	.L442
 5073              	.LBB892:
 5074              	.LBB893:
 619:fltk-1.3.4-1/src/Fl_Menu.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 5075              		.loc 4 619 0
 5076 023c 488B1500 		movq	_ZL1p(%rip), %rdx
 5076      000000
 5077              	.LBE893:
 5078              	.LBE892:
 743:fltk-1.3.4-1/src/Fl_Menu.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5079              		.loc 4 743 0
 5080 0243 8B4C2414 		movl	20(%rsp), %ecx
 5081              	.LVL622:
 5082              	.LBB895:
 5083              	.LBB894:
 620:fltk-1.3.4-1/src/Fl_Menu.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5084              		.loc 4 620 0
 5085 0247 895A08   		movl	%ebx, 8(%rdx)
 619:fltk-1.3.4-1/src/Fl_Menu.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 5086              		.loc 4 619 0
 5087 024a 488902   		movq	%rax, (%rdx)
 621:fltk-1.3.4-1/src/Fl_Menu.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 5088              		.loc 4 621 0
 5089 024d 894A0C   		movl	%ecx, 12(%rdx)
 5090              	.LVL623:
 5091              	.LBE894:
 5092              	.LBE895:
 744:fltk-1.3.4-1/src/Fl_Menu.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 5093              		.loc 4 744 0
 5094 0250 F6402060 		testb	$96, 32(%rax)
 5095 0254 750A     		jne	.L528
 5096              	.LVL624:
 5097              	.L529:
 744:fltk-1.3.4-1/src/Fl_Menu.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 5098              		.loc 4 744 0 is_stmt 0 discriminator 1
 5099 0256 C785B800 		movl	$2, 184(%rbp)
 5099      00000200 
 5099      0000
 5100              	.LVL625:
 5101              	.L528:
 5102              	.LBE891:
 5103              	.LBE890:
 5104              	.LBB896:
 785:fltk-1.3.4-1/src/Fl_Menu.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 5105              		.loc 4 785 0 is_stmt 1
 5106 0260 B8010000 		movl	$1, %eax
 5106      00
 5107 0265 E931FFFF 		jmp	.L428
 5107      FF
 5108              	.LVL626:
 5109 026a 660F1F44 		.p2align 4,,10
 5109      0000
 5110              		.p2align 3
 5111              	.L538:
 5112 0270 488B0500 		movq	_ZL1p(%rip), %rax
 5112      000000
 5113              	.L448:
 5114              	.LVL627:
 767:fltk-1.3.4-1/src/Fl_Menu.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5115              		.loc 4 767 0
 5116 0277 4183FD01 		cmpl	$1, %r13d
 5117              	.LBB884:
 5118              	.LBB885:
 619:fltk-1.3.4-1/src/Fl_Menu.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 5119              		.loc 4 619 0
 5120 027b 48C70000 		movq	$0, (%rax)
 5120      000000
 620:fltk-1.3.4-1/src/Fl_Menu.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5121              		.loc 4 620 0
 5122 0282 C74008FF 		movl	$-1, 8(%rax)
 5122      FFFFFF
 621:fltk-1.3.4-1/src/Fl_Menu.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 5123              		.loc 4 621 0
 5124 0289 C7400C00 		movl	$0, 12(%rax)
 5124      000000
 5125              	.LVL628:
 5126              	.LBE885:
 5127              	.LBE884:
 767:fltk-1.3.4-1/src/Fl_Menu.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5128              		.loc 4 767 0
 5129 0290 75CE     		jne	.L528
 5130 0292 EB2A     		jmp	.L530
 5131              	.LVL629:
 5132              		.p2align 4,,10
 5133 0294 0F1F4000 		.p2align 3
 5134              	.L460:
 5135              	.LBE896:
 818:fltk-1.3.4-1/src/Fl_Menu.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5136              		.loc 4 818 0
 5137 0298 488B4500 		movq	0(%rbp), %rax
 5138 029c 4885C0   		testq	%rax, %rax
 5139 029f 74B5     		je	.L529
 5140 02a1 8B4020   		movl	32(%rax), %eax
 5141              	.L461:
 5142              	.LVL630:
 818:fltk-1.3.4-1/src/Fl_Menu.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5143              		.loc 4 818 0 is_stmt 0 discriminator 2
 5144 02a4 A811     		testb	$17, %al
 5145 02a6 74AE     		je	.L529
 5146 02a8 EBB6     		jmp	.L528
 5147              	.LVL631:
 5148 02aa 660F1F44 		.p2align 4,,10
 5148      0000
 5149              		.p2align 3
 5150              	.L535:
 5151              	.LBB897:
 777:fltk-1.3.4-1/src/Fl_Menu.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 5152              		.loc 4 777 0 is_stmt 1
 5153 02b0 4183FD01 		cmpl	$1, %r13d
 5154 02b4 8B4508   		movl	8(%rbp), %eax
 5155              	.LVL632:
 5156 02b7 751F     		jne	.L453
 5157 02b9 83F8FF   		cmpl	$-1, %eax
 5158 02bc 751A     		jne	.L453
 5159              	.LVL633:
 5160              	.L530:
 778:fltk-1.3.4-1/src/Fl_Menu.cxx ****  762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 5161              		.loc 4 778 0
 5162 02be C785B800 		movl	$2, 184(%rbp)
 5162      00000200 
 5162      0000
 779:fltk-1.3.4-1/src/Fl_Menu.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5163              		.loc 4 779 0
 5164 02c8 B8010000 		movl	$1, %eax
 5164      00
 5165 02cd E9C9FEFF 		jmp	.L428
 5165      FF
 5166              	.LVL634:
 5167              		.p2align 4,,10
 5168 02d2 660F1F44 		.p2align 3
 5168      0000
 5169              	.L453:
 781:fltk-1.3.4-1/src/Fl_Menu.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5170              		.loc 4 781 0
 5171 02d8 85C0     		testl	%eax, %eax
 5172 02da 488B5500 		movq	0(%rbp), %rdx
 5173 02de 0F856C01 		jne	.L470
 5173      0000
 5174 02e4 4885D2   		testq	%rdx, %rdx
 5175 02e7 0F846301 		je	.L470
 5175      0000
 5176              	.LVL635:
 781:fltk-1.3.4-1/src/Fl_Menu.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5177              		.loc 4 781 0 is_stmt 0 discriminator 3
 5178 02ed F6422060 		testb	$96, 32(%rdx)
 5179 02f1 0F85A4FE 		jne	.L428
 5179      FFFF
 782:fltk-1.3.4-1/src/Fl_Menu.cxx ****  766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 5180              		.loc 4 782 0 is_stmt 1
 5181 02f7 4183FD01 		cmpl	$1, %r13d
 5182 02fb 750A     		jne	.L464
 783:fltk-1.3.4-1/src/Fl_Menu.cxx ****  767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callb
 5183              		.loc 4 783 0
 5184 02fd C785B800 		movl	$2, 184(%rbp)
 5184      00000200 
 5184      0000
 5185              	.L464:
 5186              	.LVL636:
 5187              	.LBB886:
 5188              	.LBB887:
 619:fltk-1.3.4-1/src/Fl_Menu.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 5189              		.loc 4 619 0
 5190 0307 488B0500 		movq	_ZL1p(%rip), %rax
 5190      000000
 5191 030e 48C70000 		movq	$0, (%rax)
 5191      000000
 620:fltk-1.3.4-1/src/Fl_Menu.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5192              		.loc 4 620 0
 5193 0315 C74008FF 		movl	$-1, 8(%rax)
 5193      FFFFFF
 621:fltk-1.3.4-1/src/Fl_Menu.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 5194              		.loc 4 621 0
 5195 031c C7400C00 		movl	$0, 12(%rax)
 5195      000000
 5196 0323 E938FFFF 		jmp	.L528
 5196      FF
 5197              	.LVL637:
 5198 0328 0F1F8400 		.p2align 4,,10
 5198      00000000 
 5199              		.p2align 3
 5200              	.L539:
 5201              	.LBE887:
 5202              	.LBE886:
 5203              	.LBE897:
 690:fltk-1.3.4-1/src/Fl_Menu.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 5204              		.loc 4 690 0
 5205 0330 3D08FF00 		cmpl	$65288, %eax
 5205      00
 5206 0335 0F84EB00 		je	.L418
 5206      0000
 5207 033b 0F8E2102 		jle	.L542
 5207      0000
 5208 0341 3D09FF00 		cmpl	$65289, %eax
 5208      00
 5209 0346 0F850602 		jne	.L543
 5209      0000
 705:fltk-1.3.4-1/src/Fl_Menu.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5210              		.loc 4 705 0
 5211 034c F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 5211      000001
 5212 0353 0F85CD00 		jne	.L418
 5212      0000
 5213              	.L426:
 707:fltk-1.3.4-1/src/Fl_Menu.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5214              		.loc 4 707 0
 5215 0359 8B7D08   		movl	8(%rbp), %edi
 5216              	.LVL638:
 5217 035c 85FF     		testl	%edi, %edi
 5218 035e 0F859C01 		jne	.L432
 5218      0000
 707:fltk-1.3.4-1/src/Fl_Menu.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5219              		.loc 4 707 0 is_stmt 0 discriminator 1
 5220 0364 448B85B4 		movl	180(%rbp), %r8d
 5220      000000
 5221 036b 4585C0   		testl	%r8d, %r8d
 5222 036e 0F848C01 		je	.L432
 5222      0000
 712:fltk-1.3.4-1/src/Fl_Menu.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 5223              		.loc 4 712 0 is_stmt 1
 5224 0374 83BDB000 		cmpl	$1, 176(%rbp)
 5224      000001
 5225 037b 0F8EDFFE 		jle	.L528
 5225      FFFF
 713:fltk-1.3.4-1/src/Fl_Menu.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5226              		.loc 4 713 0
 5227 0381 BF010000 		movl	$1, %edi
 5227      00
 5228 0386 E8000000 		call	_ZL7forwardi
 5228      00
 5229              	.LVL639:
 715:fltk-1.3.4-1/src/Fl_Menu.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 5230              		.loc 4 715 0
 5231 038b B8010000 		movl	$1, %eax
 5231      00
 5232 0390 E906FEFF 		jmp	.L428
 5232      FF
 5233              	.LVL640:
 5234              		.p2align 4,,10
 5235 0395 0F1F00   		.p2align 3
 5236              	.L540:
 690:fltk-1.3.4-1/src/Fl_Menu.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 5237              		.loc 4 690 0
 5238 0398 3D51FF00 		cmpl	$65361, %eax
 5238      00
 5239 039d 0F84B400 		je	.L424
 5239      0000
 5240 03a3 3D52FF00 		cmpl	$65362, %eax
 5240      00
 5241 03a8 0F85E2FD 		jne	.L409
 5241      FFFF
 696:fltk-1.3.4-1/src/Fl_Menu.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 5242              		.loc 4 696 0
 5243 03ae 448B95B4 		movl	180(%rbp), %r10d
 5243      000000
 5244 03b5 8B7D08   		movl	8(%rbp), %edi
 5245              	.LVL641:
 5246 03b8 4585D2   		testl	%r10d, %r10d
 5247 03bb 7408     		je	.L430
 696:fltk-1.3.4-1/src/Fl_Menu.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 5248              		.loc 4 696 0 is_stmt 0 discriminator 1
 5249 03bd 85FF     		testl	%edi, %edi
 5250 03bf 0F849BFE 		je	.L528
 5250      FFFF
 5251              	.L430:
 698:fltk-1.3.4-1/src/Fl_Menu.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5252              		.loc 4 698 0 is_stmt 1
 5253 03c5 E8000000 		call	_ZL8backwardi
 5253      00
 5254              	.LVL642:
 5255 03ca 85C0     		testl	%eax, %eax
 5256 03cc 0F858EFE 		jne	.L528
 5256      FFFF
 700:fltk-1.3.4-1/src/Fl_Menu.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5257              		.loc 4 700 0
 5258 03d2 448B8DB4 		movl	180(%rbp), %r9d
 5258      000000
 5259 03d9 4585C9   		testl	%r9d, %r9d
 5260 03dc 0F847EFE 		je	.L528
 5260      FFFF
 700:fltk-1.3.4-1/src/Fl_Menu.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5261              		.loc 4 700 0 is_stmt 0 discriminator 1
 5262 03e2 8B4508   		movl	8(%rbp), %eax
 5263 03e5 83F801   		cmpl	$1, %eax
 5264 03e8 0F8572FE 		jne	.L528
 5264      FFFF
 701:fltk-1.3.4-1/src/Fl_Menu.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 5265              		.loc 4 701 0 is_stmt 1
 5266 03ee 488B5510 		movq	16(%rbp), %rdx
 5267 03f2 31FF     		xorl	%edi, %edi
 5268 03f4 8944240C 		movl	%eax, 12(%rsp)
 5269 03f8 8BB20001 		movl	256(%rdx), %esi
 5269      0000
 5270 03fe E8000000 		call	_ZL7setitemii
 5270      00
 5271              	.LVL643:
 5272 0403 8B44240C 		movl	12(%rsp), %eax
 5273 0407 E98FFDFF 		jmp	.L428
 5273      FF
 5274              	.LVL644:
 5275 040c 0F1F4000 		.p2align 4,,10
 5276              		.p2align 3
 5277              	.L456:
 5278              	.LBB898:
 792:fltk-1.3.4-1/src/Fl_Menu.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 5279              		.loc 4 792 0
 5280 0410 89C6     		movl	%eax, %esi
 5281 0412 89DF     		movl	%ebx, %edi
 5282 0414 8944240C 		movl	%eax, 12(%rsp)
 5283 0418 E8000000 		call	_ZL7setitemii
 5283      00
 5284              	.LVL645:
 5285 041d 8B44240C 		movl	12(%rsp), %eax
 5286 0421 E99FFCFF 		jmp	.L457
 5286      FF
 5287              	.LVL646:
 5288              	.L418:
 5289              	.LBE898:
 693:fltk-1.3.4-1/src/Fl_Menu.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5290              		.loc 4 693 0
 5291 0426 8B7D08   		movl	8(%rbp), %edi
 5292              	.LVL647:
 5293 0429 E8000000 		call	_ZL8backwardi
 5293      00
 5294              	.LVL648:
 5295 042e 85C0     		testl	%eax, %eax
 5296 0430 0F852AFE 		jne	.L528
 5296      FFFF
 693:fltk-1.3.4-1/src/Fl_Menu.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5297              		.loc 4 693 0 is_stmt 0 discriminator 1
 5298 0436 8B7D08   		movl	8(%rbp), %edi
 5299 0439 C7450CFF 		movl	$-1, 12(%rbp)
 5299      FFFFFF
 5300 0440 E8000000 		call	_ZL8backwardi
 5300      00
 5301              	.LVL649:
 694:fltk-1.3.4-1/src/Fl_Menu.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 5302              		.loc 4 694 0 is_stmt 1 discriminator 1
 5303 0445 B8010000 		movl	$1, %eax
 5303      00
 5304 044a E94CFDFF 		jmp	.L428
 5304      FF
 5305              	.LVL650:
 5306 044f 90       		.p2align 4,,10
 5307              		.p2align 3
 5308              	.L470:
 5309              	.LBB899:
 788:fltk-1.3.4-1/src/Fl_Menu.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 5310              		.loc 4 788 0
 5311 0450 31C0     		xorl	%eax, %eax
 5312 0452 E944FDFF 		jmp	.L428
 5312      FF
 5313              	.LVL651:
 5314              	.L424:
 5315              	.LBE899:
 722:fltk-1.3.4-1/src/Fl_Menu.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5316              		.loc 4 722 0
 5317 0457 8BB5B400 		movl	180(%rbp), %esi
 5317      0000
 5318              	.LVL652:
 5319 045d 8B4508   		movl	8(%rbp), %eax
 5320 0460 85F6     		testl	%esi, %esi
 5321 0462 0F841301 		je	.L439
 5321      0000
 722:fltk-1.3.4-1/src/Fl_Menu.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5322              		.loc 4 722 0 is_stmt 0 discriminator 1
 5323 0468 83F801   		cmpl	$1, %eax
 5324 046b 0F8E3101 		jle	.L544
 5324      0000
 5325              	.L440:
 724:fltk-1.3.4-1/src/Fl_Menu.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 5326              		.loc 4 724 0 is_stmt 1
 5327 0471 8D78FF   		leal	-1(%rax), %edi
 5328              	.LVL653:
 5329 0474 4863C7   		movslq	%edi, %rax
 5330 0477 488B44C5 		movq	16(%rbp,%rax,8), %rax
 5330      10
 5331 047c 8BB00001 		movl	256(%rax), %esi
 5331      0000
 5332 0482 E8000000 		call	_ZL7setitemii
 5332      00
 5333              	.LVL654:
 725:fltk-1.3.4-1/src/Fl_Menu.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5334              		.loc 4 725 0
 5335 0487 B8010000 		movl	$1, %eax
 5335      00
 5336 048c E90AFDFF 		jmp	.L428
 5336      FF
 5337              	.LVL655:
 5338              	.L416:
 5339              	.LBB900:
 5340              	.LBB901:
 619:fltk-1.3.4-1/src/Fl_Menu.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 5341              		.loc 4 619 0
 5342 0491 48C74500 		movq	$0, 0(%rbp)
 5342      00000000 
 620:fltk-1.3.4-1/src/Fl_Menu.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5343              		.loc 4 620 0
 5344 0499 C74508FF 		movl	$-1, 8(%rbp)
 5344      FFFFFF
 5345              	.LBE901:
 5346              	.LBE900:
 734:fltk-1.3.4-1/src/Fl_Menu.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 5347              		.loc 4 734 0
 5348 04a0 B8010000 		movl	$1, %eax
 5348      00
 5349              	.LBB903:
 5350              	.LBB902:
 621:fltk-1.3.4-1/src/Fl_Menu.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 5351              		.loc 4 621 0
 5352 04a5 C7450C00 		movl	$0, 12(%rbp)
 5352      000000
 5353              	.LVL656:
 5354              	.LBE902:
 5355              	.LBE903:
 733:fltk-1.3.4-1/src/Fl_Menu.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 5356              		.loc 4 733 0
 5357 04ac C785B800 		movl	$2, 184(%rbp)
 5357      00000200 
 5357      0000
 734:fltk-1.3.4-1/src/Fl_Menu.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 5358              		.loc 4 734 0
 5359 04b6 E9E0FCFF 		jmp	.L428
 5359      FF
 5360              	.L422:
 717:fltk-1.3.4-1/src/Fl_Menu.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5361              		.loc 4 717 0
 5362 04bb 8BBDB400 		movl	180(%rbp), %edi
 5362      0000
 5363              	.LVL657:
 5364 04c1 8B5508   		movl	8(%rbp), %edx
 5365 04c4 85FF     		testl	%edi, %edi
 5366 04c6 0F84A400 		je	.L435
 5366      0000
 717:fltk-1.3.4-1/src/Fl_Menu.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5367              		.loc 4 717 0 is_stmt 0 discriminator 1
 5368 04cc 85D2     		testl	%edx, %edx
 5369 04ce 0F8EBD00 		jle	.L436
 5369      0000
 717:fltk-1.3.4-1/src/Fl_Menu.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5370              		.loc 4 717 0 discriminator 2
 5371 04d4 83FA01   		cmpl	$1, %edx
 5372 04d7 8B85B000 		movl	176(%rbp), %eax
 5372      0000
 5373 04dd 0F84A500 		je	.L545
 5373      0000
 5374              	.L438:
 719:fltk-1.3.4-1/src/Fl_Menu.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5375              		.loc 4 719 0 is_stmt 1
 5376 04e3 83E801   		subl	$1, %eax
 5377 04e6 39D0     		cmpl	%edx, %eax
 5378 04e8 0F8E72FD 		jle	.L528
 5378      FFFF
 719:fltk-1.3.4-1/src/Fl_Menu.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5379              		.loc 4 719 0 is_stmt 0 discriminator 1
 5380 04ee 8D7A01   		leal	1(%rdx), %edi
 5381 04f1 E8000000 		call	_ZL7forwardi
 5381      00
 5382              	.LVL658:
 720:fltk-1.3.4-1/src/Fl_Menu.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 5383              		.loc 4 720 0 is_stmt 1 discriminator 1
 5384 04f6 B8010000 		movl	$1, %eax
 5384      00
 5385 04fb E99BFCFF 		jmp	.L428
 5385      FF
 5386              	.LVL659:
 5387              	.L432:
 708:fltk-1.3.4-1/src/Fl_Menu.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 5388              		.loc 4 708 0
 5389 0500 E8000000 		call	_ZL7forwardi
 5389      00
 5390              	.LVL660:
 5391 0505 85C0     		testl	%eax, %eax
 5392 0507 0F8553FD 		jne	.L528
 5392      FFFF
 5393 050d 813D0000 		cmpl	$65289, _ZN2Fl8e_keysymE(%rip)
 5393      000009FF 
 5393      0000
 5394 0517 0F8543FD 		jne	.L528
 5394      FFFF
 710:fltk-1.3.4-1/src/Fl_Menu.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 5395              		.loc 4 710 0
 5396 051d 8B7D08   		movl	8(%rbp), %edi
 709:fltk-1.3.4-1/src/Fl_Menu.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 5397              		.loc 4 709 0
 5398 0520 C7450CFF 		movl	$-1, 12(%rbp)
 5398      FFFFFF
 710:fltk-1.3.4-1/src/Fl_Menu.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 5399              		.loc 4 710 0
 5400 0527 E8000000 		call	_ZL7forwardi
 5400      00
 5401              	.LVL661:
 715:fltk-1.3.4-1/src/Fl_Menu.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 5402              		.loc 4 715 0
 5403 052c B8010000 		movl	$1, %eax
 5403      00
 5404 0531 E965FCFF 		jmp	.L428
 5404      FF
 5405              	.LVL662:
 5406              	.L537:
 5407              	.LBB904:
 797:fltk-1.3.4-1/src/Fl_Menu.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 5408              		.loc 4 797 0
 5409 0536 C785B800 		movl	$3, 184(%rbp)
 5409      00000300 
 5409      0000
 5410              	.LBE904:
 802:fltk-1.3.4-1/src/Fl_Menu.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 5411              		.loc 4 802 0
 5412 0540 B8010000 		movl	$1, %eax
 5412      00
 5413              	.LBB905:
 5414 0545 E951FCFF 		jmp	.L428
 5414      FF
 5415              	.LVL663:
 5416              	.L469:
 5417              	.LBB888:
 5418              	.LBB883:
 611:fltk-1.3.4-1/src/Fl_Menu.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 5419              		.loc 4 611 0
 5420 054a 4889E8   		movq	%rbp, %rax
 5421 054d E925FDFF 		jmp	.L448
 5421      FF
 5422              	.LVL664:
 5423              	.L543:
 5424              	.LBE883:
 5425              	.LBE888:
 5426              	.LBE905:
 690:fltk-1.3.4-1/src/Fl_Menu.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 5427              		.loc 4 690 0
 5428 0552 3D0DFF00 		cmpl	$65293, %eax
 5428      00
 5429 0557 0F84F9FC 		je	.L529
 5429      FFFF
 5430 055d E92EFCFF 		jmp	.L409
 5430      FF
 5431              	.L542:
 5432 0562 83F820   		cmpl	$32, %eax
 5433 0565 0F84EBFC 		je	.L529
 5433      FFFF
 5434 056b E920FCFF 		jmp	.L409
 5434      FF
 5435              	.LVL665:
 5436              	.L435:
 5437 0570 8B85B000 		movl	176(%rbp), %eax
 5437      0000
 5438 0576 E968FFFF 		jmp	.L438
 5438      FF
 5439              	.LVL666:
 5440              	.L439:
 723:fltk-1.3.4-1/src/Fl_Menu.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5441              		.loc 4 723 0
 5442 057b 85C0     		testl	%eax, %eax
 5443 057d 0F8EDDFC 		jle	.L528
 5443      FFFF
 5444 0583 E9E9FEFF 		jmp	.L440
 5444      FF
 5445              	.LVL667:
 5446              	.L545:
 717:fltk-1.3.4-1/src/Fl_Menu.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5447              		.loc 4 717 0 discriminator 3
 5448 0588 83F802   		cmpl	$2, %eax
 5449 058b 0F8552FF 		jne	.L438
 5449      FFFF
 5450              	.L436:
 718:fltk-1.3.4-1/src/Fl_Menu.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5451              		.loc 4 718 0
 5452 0591 31FF     		xorl	%edi, %edi
 5453 0593 E8000000 		call	_ZL7forwardi
 5453      00
 5454              	.LVL668:
 720:fltk-1.3.4-1/src/Fl_Menu.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 5455              		.loc 4 720 0
 5456 0598 B8010000 		movl	$1, %eax
 5456      00
 718:fltk-1.3.4-1/src/Fl_Menu.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5457              		.loc 4 718 0
 5458 059d E9F9FBFF 		jmp	.L428
 5458      FF
 5459              	.LVL669:
 5460              	.L544:
 722:fltk-1.3.4-1/src/Fl_Menu.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5461              		.loc 4 722 0 discriminator 2
 5462 05a2 31FF     		xorl	%edi, %edi
 5463              	.LVL670:
 5464 05a4 E8000000 		call	_ZL8backwardi
 5464      00
 5465              	.LVL671:
 725:fltk-1.3.4-1/src/Fl_Menu.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5466              		.loc 4 725 0 discriminator 2
 5467 05a9 B8010000 		movl	$1, %eax
 5467      00
 722:fltk-1.3.4-1/src/Fl_Menu.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5468              		.loc 4 722 0 discriminator 2
 5469 05ae E9E8FBFF 		jmp	.L428
 5469      FF
 5470              	.LVL672:
 5471              	.L541:
 5472              	.LBE906:
 5473              	.LBE907:
 824:fltk-1.3.4-1/src/Fl_Menu.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 5474              		.loc 4 824 0
 5475 05b3 E8000000 		call	__stack_chk_fail
 5475      00
 5476              	.LVL673:
 5477              		.cfi_endproc
 5478              	.LFE586:
 5480              		.section	.text.unlikely._ZN10menuwindow17early_hide_handleEi
 5481              	.LCOLDE34:
 5482              		.section	.text._ZN10menuwindow17early_hide_handleEi
 5483              	.LHOTE34:
 5484              		.section	.text.unlikely._ZN10menuwindow6handleEi,"ax",@progbits
 5485              		.align 2
 5486              	.LCOLDB35:
 5487              		.section	.text._ZN10menuwindow6handleEi,"ax",@progbits
 5488              	.LHOTB35:
 5489              		.align 2
 5490              		.p2align 4,,15
 5491              		.globl	_ZN10menuwindow6handleEi
 5493              	_ZN10menuwindow6handleEi:
 5494              	.LFB585:
 657:fltk-1.3.4-1/src/Fl_Menu.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 5495              		.loc 4 657 0
 5496              		.cfi_startproc
 5497              	.LVL674:
 5498 0000 4155     		pushq	%r13
 5499              		.cfi_def_cfa_offset 16
 5500              		.cfi_offset 13, -16
 5501 0002 4154     		pushq	%r12
 5502              		.cfi_def_cfa_offset 24
 5503              		.cfi_offset 12, -24
 5504 0004 55       		pushq	%rbp
 5505              		.cfi_def_cfa_offset 32
 5506              		.cfi_offset 6, -32
 5507 0005 53       		pushq	%rbx
 5508              		.cfi_def_cfa_offset 40
 5509              		.cfi_offset 3, -40
 5510 0006 4889FB   		movq	%rdi, %rbx
 5511 0009 4883EC08 		subq	$8, %rsp
 5512              		.cfi_def_cfa_offset 48
 663:fltk-1.3.4-1/src/Fl_Menu.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5513              		.loc 4 663 0
 5514 000d E8000000 		call	_ZN10menuwindow17early_hide_handleEi
 5514      00
 5515              	.LVL675:
 664:fltk-1.3.4-1/src/Fl_Menu.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 5516              		.loc 4 664 0
 5517 0012 4C8B2500 		movq	_ZL1p(%rip), %r12
 5517      000000
 663:fltk-1.3.4-1/src/Fl_Menu.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5518              		.loc 4 663 0
 5519 0019 4189C5   		movl	%eax, %r13d
 5520              	.LVL676:
 5521              	.LBB908:
 665:fltk-1.3.4-1/src/Fl_Menu.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 5522              		.loc 4 665 0
 5523 001c 4183BC24 		cmpl	$2, 184(%r12)
 5523      B8000000 
 5523      02
 5524 0025 7411     		je	.L569
 5525              	.LVL677:
 5526              	.L547:
 5527              	.LBE908:
 683:fltk-1.3.4-1/src/Fl_Menu.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5528              		.loc 4 683 0
 5529 0027 4883C408 		addq	$8, %rsp
 5530              		.cfi_remember_state
 5531              		.cfi_def_cfa_offset 40
 5532 002b 4489E8   		movl	%r13d, %eax
 5533 002e 5B       		popq	%rbx
 5534              		.cfi_def_cfa_offset 32
 5535 002f 5D       		popq	%rbp
 5536              		.cfi_def_cfa_offset 24
 5537 0030 415C     		popq	%r12
 5538              		.cfi_def_cfa_offset 16
 5539              	.LVL678:
 5540 0032 415D     		popq	%r13
 5541              		.cfi_def_cfa_offset 8
 5542              	.LVL679:
 5543 0034 C3       		ret
 5544              	.LVL680:
 5545              		.p2align 4,,10
 5546 0035 0F1F00   		.p2align 3
 5547              	.L569:
 5548              		.cfi_restore_state
 5549              	.LBB911:
 5550              	.LBB909:
 666:fltk-1.3.4-1/src/Fl_Menu.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 5551              		.loc 4 666 0
 5552 0038 488B03   		movq	(%rbx), %rax
 5553              	.LVL681:
 5554 003b 4889DF   		movq	%rbx, %rdi
 5555 003e FF5030   		call	*48(%rax)
 5556              	.LVL682:
 667:fltk-1.3.4-1/src/Fl_Menu.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 5557              		.loc 4 667 0
 5558 0041 498BBC24 		movq	192(%r12), %rdi
 5558      C0000000 
 5559 0049 4885FF   		testq	%rdi, %rdi
 5560 004c 7420     		je	.L549
 668:fltk-1.3.4-1/src/Fl_Menu.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 5561              		.loc 4 668 0
 5562 004e 488B07   		movq	(%rdi), %rax
 5563 0051 FF5030   		call	*48(%rax)
 5564              	.LVL683:
 669:fltk-1.3.4-1/src/Fl_Menu.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5565              		.loc 4 669 0
 5566 0054 498B8424 		movq	192(%r12), %rax
 5566      C0000000 
 5567 005c 488BB8F0 		movq	240(%rax), %rdi
 5567      000000
 5568 0063 4885FF   		testq	%rdi, %rdi
 5569 0066 7406     		je	.L549
 670:fltk-1.3.4-1/src/Fl_Menu.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 5570              		.loc 4 670 0
 5571 0068 488B07   		movq	(%rdi), %rax
 5572 006b FF5030   		call	*48(%rax)
 5573              	.LVL684:
 5574              	.L549:
 672:fltk-1.3.4-1/src/Fl_Menu.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 5575              		.loc 4 672 0
 5576 006e 418B9C24 		movl	176(%r12), %ebx
 5576      B0000000 
 5577              	.LVL685:
 673:fltk-1.3.4-1/src/Fl_Menu.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 5578              		.loc 4 673 0
 5579 0076 85DB     		testl	%ebx, %ebx
 5580 0078 7EAD     		jle	.L547
 5581 007a 660F1F44 		.p2align 4,,10
 5581      0000
 5582              		.p2align 3
 5583              	.L552:
 5584              	.LBB910:
 674:fltk-1.3.4-1/src/Fl_Menu.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 5585              		.loc 4 674 0
 5586 0080 83EB01   		subl	$1, %ebx
 5587              	.LVL686:
 5588 0083 4863C3   		movslq	%ebx, %rax
 5589 0086 498B6CC4 		movq	16(%r12,%rax,8), %rbp
 5589      10
 5590              	.LVL687:
 675:fltk-1.3.4-1/src/Fl_Menu.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5591              		.loc 4 675 0
 5592 008b 4885ED   		testq	%rbp, %rbp
 5593 008e 741C     		je	.L554
 676:fltk-1.3.4-1/src/Fl_Menu.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 5594              		.loc 4 676 0
 5595 0090 488B4500 		movq	0(%rbp), %rax
 5596 0094 4889EF   		movq	%rbp, %rdi
 5597 0097 FF5030   		call	*48(%rax)
 5598              	.LVL688:
 677:fltk-1.3.4-1/src/Fl_Menu.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5599              		.loc 4 677 0
 5600 009a 488BBDF0 		movq	240(%rbp), %rdi
 5600      000000
 5601 00a1 4885FF   		testq	%rdi, %rdi
 5602 00a4 7406     		je	.L554
 678:fltk-1.3.4-1/src/Fl_Menu.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 5603              		.loc 4 678 0
 5604 00a6 488B07   		movq	(%rdi), %rax
 5605 00a9 FF5030   		call	*48(%rax)
 5606              	.LVL689:
 5607              	.L554:
 5608              	.LBE910:
 673:fltk-1.3.4-1/src/Fl_Menu.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 5609              		.loc 4 673 0
 5610 00ac 85DB     		testl	%ebx, %ebx
 5611 00ae 75D0     		jne	.L552
 5612              	.LBE909:
 5613              	.LBE911:
 683:fltk-1.3.4-1/src/Fl_Menu.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5614              		.loc 4 683 0
 5615 00b0 4883C408 		addq	$8, %rsp
 5616              		.cfi_def_cfa_offset 40
 5617 00b4 4489E8   		movl	%r13d, %eax
 5618 00b7 5B       		popq	%rbx
 5619              		.cfi_def_cfa_offset 32
 5620              	.LVL690:
 5621 00b8 5D       		popq	%rbp
 5622              		.cfi_def_cfa_offset 24
 5623              	.LVL691:
 5624 00b9 415C     		popq	%r12
 5625              		.cfi_def_cfa_offset 16
 5626              	.LVL692:
 5627 00bb 415D     		popq	%r13
 5628              		.cfi_def_cfa_offset 8
 5629              	.LVL693:
 5630 00bd C3       		ret
 5631              		.cfi_endproc
 5632              	.LFE585:
 5634              		.section	.text.unlikely._ZN10menuwindow6handleEi
 5635              	.LCOLDE35:
 5636              		.section	.text._ZN10menuwindow6handleEi
 5637              	.LHOTE35:
 5638              		.section	.text.unlikely._ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i,"ax",@progbits
 5639              		.align 2
 5640              	.LCOLDB36:
 5641              		.section	.text._ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i,"ax",@progbits
 5642              	.LHOTB36:
 5643              		.align 2
 5644              		.p2align 4,,15
 5645              		.globl	_ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i
 5647              	_ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i:
 5648              	.LFB587:
 841:fltk-1.3.4-1/src/Fl_Menu.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5649              		.loc 4 841 0
 5650              		.cfi_startproc
 5651              	.LVL694:
 5652 0000 4157     		pushq	%r15
 5653              		.cfi_def_cfa_offset 16
 5654              		.cfi_offset 15, -16
 5655 0002 4156     		pushq	%r14
 5656              		.cfi_def_cfa_offset 24
 5657              		.cfi_offset 14, -24
 5658 0004 4155     		pushq	%r13
 5659              		.cfi_def_cfa_offset 32
 5660              		.cfi_offset 13, -32
 5661 0006 4154     		pushq	%r12
 5662              		.cfi_def_cfa_offset 40
 5663              		.cfi_offset 12, -40
 5664 0008 4D89CD   		movq	%r9, %r13
 5665 000b 55       		pushq	%rbp
 5666              		.cfi_def_cfa_offset 48
 5667              		.cfi_offset 6, -48
 5668 000c 53       		pushq	%rbx
 5669              		.cfi_def_cfa_offset 56
 5670              		.cfi_offset 3, -56
 5671 000d 4889FB   		movq	%rdi, %rbx
 842:fltk-1.3.4-1/src/Fl_Menu.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 5672              		.loc 4 842 0
 5673 0010 31FF     		xorl	%edi, %edi
 5674              	.LVL695:
 841:fltk-1.3.4-1/src/Fl_Menu.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5675              		.loc 4 841 0
 5676 0012 4881EC28 		subq	$552, %rsp
 5676      020000
 5677              		.cfi_def_cfa_offset 608
 841:fltk-1.3.4-1/src/Fl_Menu.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5678              		.loc 4 841 0
 5679 0019 4C8BA424 		movq	608(%rsp), %r12
 5679      60020000 
 5680 0021 8974240C 		movl	%esi, 12(%rsp)
 5681 0025 64488B04 		movq	%fs:40, %rax
 5681      25280000 
 5681      00
 5682 002e 48898424 		movq	%rax, 536(%rsp)
 5682      18020000 
 5683 0036 31C0     		xorl	%eax, %eax
 5684 0038 89542410 		movl	%edx, 16(%rsp)
 5685 003c 894C2414 		movl	%ecx, 20(%rsp)
 5686 0040 44894424 		movl	%r8d, 24(%rsp)
 5686      18
 5687 0045 488BAC24 		movq	616(%rsp), %rbp
 5687      68020000 
 842:fltk-1.3.4-1/src/Fl_Menu.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 5688              		.loc 4 842 0
 5689 004d E8000000 		call	_ZN8Fl_Group7currentEPS_
 5689      00
 5690              	.LVL696:
 5691              	.LBB912:
 845:fltk-1.3.4-1/src/Fl_Menu.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 5692              		.loc 4 845 0
 5693 0052 4D85E4   		testq	%r12, %r12
 5694              	.LBE912:
 844:fltk-1.3.4-1/src/Fl_Menu.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 5695              		.loc 4 844 0
 5696 0055 4C892500 		movq	%r12, _ZL6button(%rip)
 5696      000000
 5697              	.LBB914:
 845:fltk-1.3.4-1/src/Fl_Menu.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 5698              		.loc 4 845 0
 5699 005c 0F842605 		je	.L571
 5699      0000
 845:fltk-1.3.4-1/src/Fl_Menu.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 5700              		.loc 4 845 0 is_stmt 0 discriminator 1
 5701 0062 4C89E7   		movq	%r12, %rdi
 5702 0065 E8000000 		call	_ZNK9Fl_Widget6windowEv
 5702      00
 5703              	.LVL697:
 5704 006a 4885C0   		testq	%rax, %rax
 5705 006d 0F841505 		je	.L571
 5705      0000
 5706              	.LBB913:
 846:fltk-1.3.4-1/src/Fl_Menu.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 5707              		.loc 4 846 0 is_stmt 1
 5708 0073 4C89E7   		movq	%r12, %rdi
 5709 0076 E8000000 		call	_ZNK9Fl_Widget6windowEv
 5709      00
 5710              	.LVL698:
 5711 007b 4885C0   		testq	%rax, %rax
 5712 007e 7429     		je	.L628
 5713 0080 448B6424 		movl	12(%rsp), %r12d
 5713      0C
 5714 0085 448B7424 		movl	16(%rsp), %r14d
 5714      10
 5715              	.LVL699:
 5716              	.L573:
 846:fltk-1.3.4-1/src/Fl_Menu.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 5717              		.loc 4 846 0 is_stmt 0 discriminator 2
 5718 008a 4889C7   		movq	%rax, %rdi
 847:fltk-1.3.4-1/src/Fl_Menu.cxx ****  831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5719              		.loc 4 847 0 is_stmt 1 discriminator 2
 5720 008d 44036020 		addl	32(%rax), %r12d
 5721              	.LVL700:
 848:fltk-1.3.4-1/src/Fl_Menu.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 5722              		.loc 4 848 0 discriminator 2
 5723 0091 44037024 		addl	36(%rax), %r14d
 5724              	.LVL701:
 846:fltk-1.3.4-1/src/Fl_Menu.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 5725              		.loc 4 846 0 discriminator 2
 5726 0095 E8000000 		call	_ZNK9Fl_Widget6windowEv
 5726      00
 5727              	.LVL702:
 5728 009a 4885C0   		testq	%rax, %rax
 5729 009d 75EB     		jne	.L573
 5730 009f 44896424 		movl	%r12d, 12(%rsp)
 5730      0C
 5731 00a4 44897424 		movl	%r14d, 16(%rsp)
 5731      10
 5732              	.LVL703:
 5733              	.L628:
 5734              	.LBE913:
 5735              	.LBE914:
 854:fltk-1.3.4-1/src/Fl_Menu.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 5736              		.loc 4 854 0
 5737 00a9 4883EC08 		subq	$8, %rsp
 5738              		.cfi_def_cfa_offset 616
 5739 00ad 4889DE   		movq	%rbx, %rsi
 5740 00b0 6A00     		pushq	$0
 5741              		.cfi_def_cfa_offset 624
 5742 00b2 6A00     		pushq	$0
 5743              		.cfi_def_cfa_offset 632
 5744 00b4 8B842488 		movl	648(%rsp), %eax
 5744      020000
 5745 00bb 50       		pushq	%rax
 5746              		.cfi_def_cfa_offset 640
 5747 00bc 55       		pushq	%rbp
 5748              		.cfi_def_cfa_offset 648
 5749 00bd 4155     		pushq	%r13
 5750              		.cfi_def_cfa_offset 656
 5751 00bf 448B4C24 		movl	72(%rsp), %r9d
 5751      48
 5752 00c4 448B4424 		movl	68(%rsp), %r8d
 5752      44
 5753 00c9 8B4C2440 		movl	64(%rsp), %ecx
 5754 00cd 8B54243C 		movl	60(%rsp), %edx
 5755 00d1 488D7C24 		leaq	96(%rsp), %rdi
 5755      60
 5756 00d6 E8000000 		call	_ZN10menuwindowC1EPK12Fl_Menu_ItemiiiiS2_S2_iii
 5756      00
 5757              	.LVL704:
 5758              	.LBB915:
 5759              	.LBB916:
1020:fltk-1.3.4-1/FL/Fl.H ****   }
1021:fltk-1.3.4-1/FL/Fl.H **** 
1022:fltk-1.3.4-1/FL/Fl.H ****   /**   @} */
1023:fltk-1.3.4-1/FL/Fl.H **** 
1024:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup  fl_attributes  Color & Font functions
1025:fltk-1.3.4-1/FL/Fl.H **** 	fl global color, font functions.
1026:fltk-1.3.4-1/FL/Fl.H ****    These functions are declared in <FL/Fl.H> or <FL/fl_draw.H>. 
1027:fltk-1.3.4-1/FL/Fl.H ****      @{ */
1028:fltk-1.3.4-1/FL/Fl.H ****  
1029:fltk-1.3.4-1/FL/Fl.H ****   // color map:
1030:fltk-1.3.4-1/FL/Fl.H ****   static void	set_color(Fl_Color, uchar, uchar, uchar);
1031:fltk-1.3.4-1/FL/Fl.H ****   /**
1032:fltk-1.3.4-1/FL/Fl.H ****     Sets an entry in the fl_color index table. You can set it to any
1033:fltk-1.3.4-1/FL/Fl.H ****     8-bit RGB color. The color is not allocated until fl_color(i) is used.
1034:fltk-1.3.4-1/FL/Fl.H ****   */
1035:fltk-1.3.4-1/FL/Fl.H ****   static void	set_color(Fl_Color i, unsigned c); // platform dependent
1036:fltk-1.3.4-1/FL/Fl.H ****   static unsigned get_color(Fl_Color i);
1037:fltk-1.3.4-1/FL/Fl.H ****   static void	get_color(Fl_Color i, uchar &red, uchar &green, uchar &blue);
1038:fltk-1.3.4-1/FL/Fl.H ****   /**
1039:fltk-1.3.4-1/FL/Fl.H ****     Frees the specified color from the colormap, if applicable.
1040:fltk-1.3.4-1/FL/Fl.H ****     If overlay is non-zero then the color is freed from the
1041:fltk-1.3.4-1/FL/Fl.H ****     overlay colormap.
1042:fltk-1.3.4-1/FL/Fl.H ****   */
1043:fltk-1.3.4-1/FL/Fl.H ****   static void	free_color(Fl_Color i, int overlay = 0); // platform dependent
1044:fltk-1.3.4-1/FL/Fl.H **** 
1045:fltk-1.3.4-1/FL/Fl.H ****   // fonts:
1046:fltk-1.3.4-1/FL/Fl.H ****   static const char* get_font(Fl_Font);
1047:fltk-1.3.4-1/FL/Fl.H ****   /**
1048:fltk-1.3.4-1/FL/Fl.H ****     Get a human-readable string describing the family of this face.  This
1049:fltk-1.3.4-1/FL/Fl.H ****     is useful if you are presenting a choice to the user.  There is no
1050:fltk-1.3.4-1/FL/Fl.H ****     guarantee that each face has a different name.  The return value points
1051:fltk-1.3.4-1/FL/Fl.H ****     to a static buffer that is overwritten each call.
1052:fltk-1.3.4-1/FL/Fl.H ****     
1053:fltk-1.3.4-1/FL/Fl.H ****     The integer pointed to by \p attributes (if the pointer is not
1054:fltk-1.3.4-1/FL/Fl.H ****     zero) is set to zero, FL_BOLD or FL_ITALIC or 
1055:fltk-1.3.4-1/FL/Fl.H ****     FL_BOLD | FL_ITALIC.  To locate a "family" of fonts, search
1056:fltk-1.3.4-1/FL/Fl.H ****     forward and back for a set with non-zero attributes, these faces along
1057:fltk-1.3.4-1/FL/Fl.H ****     with the face with a zero attribute before them constitute a family.
1058:fltk-1.3.4-1/FL/Fl.H ****   */
1059:fltk-1.3.4-1/FL/Fl.H ****   static const char* get_font_name(Fl_Font, int* attributes = 0);
1060:fltk-1.3.4-1/FL/Fl.H ****   /**
1061:fltk-1.3.4-1/FL/Fl.H ****     Return an array of sizes in \p sizep.  The return value is the
1062:fltk-1.3.4-1/FL/Fl.H ****     length of this array.  The sizes are sorted from smallest to largest
1063:fltk-1.3.4-1/FL/Fl.H ****     and indicate what sizes can be given to fl_font() that will
1064:fltk-1.3.4-1/FL/Fl.H ****     be matched exactly (fl_font() will pick the closest size for
1065:fltk-1.3.4-1/FL/Fl.H ****     other sizes).  A zero in the first location of the array indicates a
1066:fltk-1.3.4-1/FL/Fl.H ****     scalable font, where any size works, although the array may list sizes
1067:fltk-1.3.4-1/FL/Fl.H ****     that work "better" than others.  Warning: the returned array
1068:fltk-1.3.4-1/FL/Fl.H ****     points at a static buffer that is overwritten each call.  Under X this
1069:fltk-1.3.4-1/FL/Fl.H ****     will open the display.
1070:fltk-1.3.4-1/FL/Fl.H ****   */
1071:fltk-1.3.4-1/FL/Fl.H ****   static int get_font_sizes(Fl_Font, int*& sizep);
1072:fltk-1.3.4-1/FL/Fl.H ****   static void set_font(Fl_Font, const char*);
1073:fltk-1.3.4-1/FL/Fl.H ****   static void set_font(Fl_Font, Fl_Font);
1074:fltk-1.3.4-1/FL/Fl.H ****   /**
1075:fltk-1.3.4-1/FL/Fl.H ****     FLTK will open the display, and add every fonts on the server to the
1076:fltk-1.3.4-1/FL/Fl.H ****     face table.  It will attempt to put "families" of faces together, so
1077:fltk-1.3.4-1/FL/Fl.H ****     that the normal one is first, followed by bold, italic, and bold
1078:fltk-1.3.4-1/FL/Fl.H ****     italic.
1079:fltk-1.3.4-1/FL/Fl.H ****     
1080:fltk-1.3.4-1/FL/Fl.H ****     The optional argument is a string to describe the set of fonts to
1081:fltk-1.3.4-1/FL/Fl.H ****     add.  Passing NULL will select only fonts that have the
1082:fltk-1.3.4-1/FL/Fl.H ****     ISO8859-1 character set (and are thus usable by normal text).  Passing
1083:fltk-1.3.4-1/FL/Fl.H ****     "-*" will select all fonts with any encoding as long as they have
1084:fltk-1.3.4-1/FL/Fl.H ****     normal X font names with dashes in them.  Passing "*" will list every
1085:fltk-1.3.4-1/FL/Fl.H ****     font that exists (on X this may produce some strange output).  Other
1086:fltk-1.3.4-1/FL/Fl.H ****     values may be useful but are system dependent.  With WIN32 NULL
1087:fltk-1.3.4-1/FL/Fl.H ****     selects fonts with ISO8859-1 encoding and non-NULL selects
1088:fltk-1.3.4-1/FL/Fl.H ****     all fonts.
1089:fltk-1.3.4-1/FL/Fl.H ****     
1090:fltk-1.3.4-1/FL/Fl.H ****     The return value is how many faces are in the table after this is done.
1091:fltk-1.3.4-1/FL/Fl.H ****   */
1092:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Font set_fonts(const char* = 0); // platform dependent
1093:fltk-1.3.4-1/FL/Fl.H **** 
1094:fltk-1.3.4-1/FL/Fl.H ****   /**   @} */
1095:fltk-1.3.4-1/FL/Fl.H ****  /** \defgroup  fl_drawings  Drawing functions
1096:fltk-1.3.4-1/FL/Fl.H ****   FLTK global graphics and GUI drawing functions.
1097:fltk-1.3.4-1/FL/Fl.H ****   These functions are declared in <FL/fl_draw.H>, 
1098:fltk-1.3.4-1/FL/Fl.H ****   and in <FL/x.H> for offscreen buffer-related ones.
1099:fltk-1.3.4-1/FL/Fl.H ****      @{ */
1100:fltk-1.3.4-1/FL/Fl.H ****   // <Hack to re-order the 'Drawing functions' group>
1101:fltk-1.3.4-1/FL/Fl.H ****  /** @} */
1102:fltk-1.3.4-1/FL/Fl.H **** 
1103:fltk-1.3.4-1/FL/Fl.H ****   // labeltypes:
1104:fltk-1.3.4-1/FL/Fl.H ****   static void set_labeltype(Fl_Labeltype,Fl_Label_Draw_F*,Fl_Label_Measure_F*);
1105:fltk-1.3.4-1/FL/Fl.H ****   /** Sets the functions to call to draw and measure a specific labeltype. */
1106:fltk-1.3.4-1/FL/Fl.H ****   static void set_labeltype(Fl_Labeltype, Fl_Labeltype from); // is it defined ?
1107:fltk-1.3.4-1/FL/Fl.H **** 
1108:fltk-1.3.4-1/FL/Fl.H ****   // boxtypes:
1109:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Box_Draw_F *get_boxtype(Fl_Boxtype);
1110:fltk-1.3.4-1/FL/Fl.H ****   static void set_boxtype(Fl_Boxtype, Fl_Box_Draw_F*,uchar,uchar,uchar,uchar);
1111:fltk-1.3.4-1/FL/Fl.H ****   static void set_boxtype(Fl_Boxtype, Fl_Boxtype from);
1112:fltk-1.3.4-1/FL/Fl.H ****   static int box_dx(Fl_Boxtype);
1113:fltk-1.3.4-1/FL/Fl.H ****   static int box_dy(Fl_Boxtype);
1114:fltk-1.3.4-1/FL/Fl.H ****   static int box_dw(Fl_Boxtype);
1115:fltk-1.3.4-1/FL/Fl.H ****   static int box_dh(Fl_Boxtype);
1116:fltk-1.3.4-1/FL/Fl.H **** 
1117:fltk-1.3.4-1/FL/Fl.H ****   static int draw_box_active();
1118:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Color box_color(Fl_Color);
1119:fltk-1.3.4-1/FL/Fl.H ****   static void set_box_color(Fl_Color);
1120:fltk-1.3.4-1/FL/Fl.H **** 
1121:fltk-1.3.4-1/FL/Fl.H ****   // back compatibility:
1122:fltk-1.3.4-1/FL/Fl.H ****   /** \addtogroup fl_windows 
1123:fltk-1.3.4-1/FL/Fl.H ****     @{ */
1124:fltk-1.3.4-1/FL/Fl.H ****   /** For back compatibility, sets the void Fl::fatal handler callback */
1125:fltk-1.3.4-1/FL/Fl.H ****   static void set_abort(Fl_Abort_Handler f) {fatal = f;}
1126:fltk-1.3.4-1/FL/Fl.H ****   static void (*atclose)(Fl_Window*,void*);
1127:fltk-1.3.4-1/FL/Fl.H ****   static void default_atclose(Fl_Window*,void*);
1128:fltk-1.3.4-1/FL/Fl.H ****   /** For back compatibility, sets the Fl::atclose handler callback. You
1129:fltk-1.3.4-1/FL/Fl.H ****       can now simply change the callback for the window instead.
1130:fltk-1.3.4-1/FL/Fl.H ****       \see Fl_Window::callback(Fl_Callback*) */
1131:fltk-1.3.4-1/FL/Fl.H ****   static void set_atclose(Fl_Atclose_Handler f) {atclose = f;}
1132:fltk-1.3.4-1/FL/Fl.H ****   /**   @} */
1133:fltk-1.3.4-1/FL/Fl.H **** 
1134:fltk-1.3.4-1/FL/Fl.H ****   /** \addtogroup fl_events 
1135:fltk-1.3.4-1/FL/Fl.H ****     @{ */
1136:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if the Shift key is pressed. */
1137:fltk-1.3.4-1/FL/Fl.H ****   static int event_shift() {return e_state&FL_SHIFT;}
1138:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if the Control key is pressed. */
1139:fltk-1.3.4-1/FL/Fl.H ****   static int event_ctrl() {return e_state&FL_CTRL;}
1140:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if the FL_COMMAND key is pressed, either FL_CTRL or on OSX FL_META. */
1141:fltk-1.3.4-1/FL/Fl.H ****   static int event_command() {return e_state&FL_COMMAND;}
1142:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if the Alt key is pressed. */
1143:fltk-1.3.4-1/FL/Fl.H ****   static int event_alt() {return e_state&FL_ALT;}
1144:fltk-1.3.4-1/FL/Fl.H ****   /**
1145:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse buttons state bits; if non-zero, then at least one
1146:fltk-1.3.4-1/FL/Fl.H ****     button is pressed now.  This function returns the button state at the 
1147:fltk-1.3.4-1/FL/Fl.H ****     time of the event. During an FL_RELEASE event, the state 
1148:fltk-1.3.4-1/FL/Fl.H ****     of the released button will be 0. To find out, which button 
1149:fltk-1.3.4-1/FL/Fl.H ****     caused an FL_RELEASE event, you can use Fl::event_button() instead.
1150:fltk-1.3.4-1/FL/Fl.H ****     \return a bit mask value like { [FL_BUTTON1] | [FL_BUTTON2] | [FL_BUTTON3] }
1151:fltk-1.3.4-1/FL/Fl.H ****   */
1152:fltk-1.3.4-1/FL/Fl.H ****   static int event_buttons() {return e_state&0x7f000000;}
1153:fltk-1.3.4-1/FL/Fl.H ****   /**
1154:fltk-1.3.4-1/FL/Fl.H ****     Returns non-zero if mouse button 1 is currently held down.
1155:fltk-1.3.4-1/FL/Fl.H ****     For more details, see Fl::event_buttons().
1156:fltk-1.3.4-1/FL/Fl.H ****   */
1157:fltk-1.3.4-1/FL/Fl.H ****   static int event_button1() {return e_state&FL_BUTTON1;}
1158:fltk-1.3.4-1/FL/Fl.H ****   /**
1159:fltk-1.3.4-1/FL/Fl.H ****     Returns non-zero if button 2 is currently held down.
1160:fltk-1.3.4-1/FL/Fl.H ****     For more details, see Fl::event_buttons().
1161:fltk-1.3.4-1/FL/Fl.H ****   */
1162:fltk-1.3.4-1/FL/Fl.H ****   static int event_button2() {return e_state&FL_BUTTON2;}
1163:fltk-1.3.4-1/FL/Fl.H ****   /**
1164:fltk-1.3.4-1/FL/Fl.H ****     Returns non-zero if button 3 is currently held down.
1165:fltk-1.3.4-1/FL/Fl.H ****     For more details, see Fl::event_buttons().
1166:fltk-1.3.4-1/FL/Fl.H ****   */
1167:fltk-1.3.4-1/FL/Fl.H ****   static int event_button3() {return e_state&FL_BUTTON3;}
1168:fltk-1.3.4-1/FL/Fl.H ****   /**   @} */
1169:fltk-1.3.4-1/FL/Fl.H **** 
1170:fltk-1.3.4-1/FL/Fl.H ****   /**
1171:fltk-1.3.4-1/FL/Fl.H ****     Sets an idle callback.
1172:fltk-1.3.4-1/FL/Fl.H **** 
1173:fltk-1.3.4-1/FL/Fl.H ****     \deprecated This method is obsolete - use the add_idle() method instead.
1174:fltk-1.3.4-1/FL/Fl.H ****   */
1175:fltk-1.3.4-1/FL/Fl.H ****   static void set_idle(Fl_Old_Idle_Handler cb) {idle = cb;}
1176:fltk-1.3.4-1/FL/Fl.H ****   /** See grab(Fl_Window*) */
1177:fltk-1.3.4-1/FL/Fl.H ****   static void grab(Fl_Window& win) {grab(&win);}
 5760              		.loc 6 1177 0
 5761 00db 4883C430 		addq	$48, %rsp
 5762              		.cfi_def_cfa_offset 608
 5763 00df 488D7C24 		leaq	48(%rsp), %rdi
 5763      30
 5764              	.LVL705:
 5765 00e4 E8000000 		call	_ZN2Fl4grabEP9Fl_Window
 5765      00
 5766              	.LVL706:
 5767              	.LBE916:
 5768              	.LBE915:
 856:fltk-1.3.4-1/src/Fl_Menu.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 5769              		.loc 4 856 0
 5770 00e9 488D8424 		leaq	336(%rsp), %rax
 5770      50010000 
 864:fltk-1.3.4-1/src/Fl_Menu.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 5771              		.loc 4 864 0
 5772 00f1 4D85ED   		testq	%r13, %r13
 858:fltk-1.3.4-1/src/Fl_Menu.cxx ****  842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on th
 5773              		.loc 4 858 0
 5774 00f4 C7842400 		movl	$1, 512(%rsp)
 5774      02000001 
 5774      000000
 860:fltk-1.3.4-1/src/Fl_Menu.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5775              		.loc 4 860 0
 5776 00ff C7842408 		movl	$0, 520(%rsp)
 5776      02000000 
 5776      000000
 861:fltk-1.3.4-1/src/Fl_Menu.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 5777              		.loc 4 861 0
 5778 010a 48C78424 		movq	$0, 528(%rsp)
 5778      10020000 
 5778      00000000 
 856:fltk-1.3.4-1/src/Fl_Menu.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 5779              		.loc 4 856 0
 5780 0116 48890500 		movq	%rax, _ZL1p(%rip)
 5780      000000
 857:fltk-1.3.4-1/src/Fl_Menu.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5781              		.loc 4 857 0
 5782 011d 488D4424 		leaq	48(%rsp), %rax
 5782      30
 5783 0122 48898424 		movq	%rax, 352(%rsp)
 5783      60010000 
 859:fltk-1.3.4-1/src/Fl_Menu.cxx ****  843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 5784              		.loc 4 859 0
 5785 012a 8B842470 		movl	624(%rsp), %eax
 5785      020000
 5786 0131 89842404 		movl	%eax, 516(%rsp)
 5786      020000
 864:fltk-1.3.4-1/src/Fl_Menu.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 5787              		.loc 4 864 0
 5788 0138 0F848F02 		je	.L574
 5788      0000
 864:fltk-1.3.4-1/src/Fl_Menu.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 5789              		.loc 4 864 0 is_stmt 0 discriminator 1
 5790 013e 8BB42430 		movl	304(%rsp), %esi
 5790      010000
 5791 0145 85F6     		testl	%esi, %esi
 5792 0147 0F888002 		js	.L574
 5792      0000
 865:fltk-1.3.4-1/src/Fl_Menu.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5793              		.loc 4 865 0 is_stmt 1
 5794 014d 31FF     		xorl	%edi, %edi
 5795 014f E8000000 		call	_ZL7setitemii
 5795      00
 5796              	.LVL707:
 5797 0154 488BAC24 		movq	336(%rsp), %rbp
 5797      50010000 
 5798              	.LVL708:
 5799              	.L575:
 5800              	.LBB917:
 5801              	.LBB918:
 915:fltk-1.3.4-1/src/Fl_Menu.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5802              		.loc 4 915 0
 5803 015c 48638424 		movslq	344(%rsp), %rax
 5803      58010000 
 5804 0164 4889C1   		movq	%rax, %rcx
 5805 0167 4C8BA4C4 		movq	352(%rsp,%rax,8), %r12
 5805      60010000 
 5806              	.LVL709:
 917:fltk-1.3.4-1/src/Fl_Menu.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 5807              		.loc 4 917 0
 5808 016f 8B4520   		movl	32(%rbp), %eax
 5809              	.LVL710:
 5810 0172 83E011   		andl	$17, %eax
 5811 0175 8944241C 		movl	%eax, 28(%rsp)
 5812 0179 0F85D001 		jne	.L603
 5812      0000
 5813              	.LVL711:
 5814 017f 90       		.p2align 4,,10
 5815              		.p2align 3
 5816              	.L685:
 922:fltk-1.3.4-1/src/Fl_Menu.cxx ****  906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for t
 5817              		.loc 4 922 0
 5818 0180 8B84245C 		movl	348(%rsp), %eax
 5818      010000
 5819              	.LVL712:
 5820              	.LBB919:
 5821              	.LBB920:
 526:fltk-1.3.4-1/src/Fl_Menu.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 5822              		.loc 4 526 0
 5823 0187 413B8424 		cmpl	256(%r12), %eax
 5823      00010000 
 5824 018f 741C     		je	.L595
 5825 0191 41898424 		movl	%eax, 256(%r12)
 5825      00010000 
 5826 0199 BE010000 		movl	$1, %esi
 5826      00
 5827 019e 4C89E7   		movq	%r12, %rdi
 5828 01a1 E8000000 		call	_ZN9Fl_Widget6damageEh
 5828      00
 5829              	.LVL713:
 5830 01a6 8B8C2458 		movl	344(%rsp), %ecx
 5830      010000
 5831              	.L595:
 5832              	.LBE920:
 5833              	.LBE919:
 924:fltk-1.3.4-1/src/Fl_Menu.cxx ****  908:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5834              		.loc 4 924 0
 5835 01ad 4939ED   		cmpq	%rbp, %r13
 5836 01b0 B8000000 		movl	$0, %eax
 5836      00
 5837 01b5 4C0F44E8 		cmove	%rax, %r13
 5838              	.LVL714:
 5839 01b9 8B4520   		movl	32(%rbp), %eax
 5840              	.LVL715:
 5841              	.LBB921:
 925:fltk-1.3.4-1/src/Fl_Menu.cxx ****  909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 5842              		.loc 4 925 0
 5843 01bc A860     		testb	$96, %al
 5844 01be 0F840904 		je	.L597
 5844      0000
 5845              	.LVL716:
 5846              	.LBB922:
 928:fltk-1.3.4-1/src/Fl_Menu.cxx ****  912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widge
 5847              		.loc 4 928 0
 5848 01c4 A840     		testb	$64, %al
 5849 01c6 488D7538 		leaq	56(%rbp), %rsi
 5850 01ca 7504     		jne	.L599
 929:fltk-1.3.4-1/src/Fl_Menu.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 5851              		.loc 4 929 0
 5852 01cc 488B7518 		movq	24(%rbp), %rsi
 5853              	.LVL717:
 5854              	.L599:
 932:fltk-1.3.4-1/src/Fl_Menu.cxx ****  916:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5855              		.loc 4 932 0
 5856 01d0 85C9     		testl	%ecx, %ecx
 5857 01d2 750F     		jne	.L600
 932:fltk-1.3.4-1/src/Fl_Menu.cxx ****  916:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5858              		.loc 4 932 0 is_stmt 0 discriminator 1
 5859 01d4 8BBC2404 		movl	516(%rsp), %edi
 5859      020000
 5860 01db 85FF     		testl	%edi, %edi
 5861 01dd 0F85EA04 		jne	.L703
 5861      0000
 5862              	.L600:
 5863 01e3 458B7424 		movl	32(%r12), %r14d
 5863      20
 5864              	.LVL718:
 937:fltk-1.3.4-1/src/Fl_Menu.cxx ****  921:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5865              		.loc 4 937 0 is_stmt 1
 5866 01e8 418B5C24 		movl	40(%r12), %ebx
 5866      28
 938:fltk-1.3.4-1/src/Fl_Menu.cxx ****  922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>a
 5867              		.loc 4 938 0
 5868 01ed 8BAC245C 		movl	348(%rsp), %ebp
 5868      010000
 5869              	.LVL719:
 5870 01f4 410FAFAC 		imull	248(%r12), %ebp
 5870      24F80000 
 5870      00
 937:fltk-1.3.4-1/src/Fl_Menu.cxx ****  921:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5871              		.loc 4 937 0
 5872 01fd 4401F3   		addl	%r14d, %ebx
 5873              	.LVL720:
 938:fltk-1.3.4-1/src/Fl_Menu.cxx ****  922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>a
 5874              		.loc 4 938 0
 5875 0200 41036C24 		addl	36(%r12), %ebp
 5875      24
 5876              	.LVL721:
 5877              	.LBB923:
 941:fltk-1.3.4-1/src/Fl_Menu.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 5878              		.loc 4 941 0
 5879 0205 4D85ED   		testq	%r13, %r13
 5880 0208 0F84E906 		je	.L635
 5880      0000
 5881              	.LBB924:
 942:fltk-1.3.4-1/src/Fl_Menu.cxx ****  926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 5882              		.loc 4 942 0
 5883 020e BF180100 		movl	$280, %edi
 5883      00
 5884 0213 48893424 		movq	%rsi, (%rsp)
 5885              	.LVL722:
 5886 0217 E8000000 		call	_Znwm
 5886      00
 5887              	.LVL723:
 5888 021c 4883EC08 		subq	$8, %rsp
 5889              		.cfi_def_cfa_offset 616
 5890              	.LVL724:
 5891 0220 4889C7   		movq	%rax, %rdi
 5892 0223 4989C4   		movq	%rax, %r12
 5893 0226 4156     		pushq	%r14
 5894              		.cfi_def_cfa_offset 624
 5895 0228 6A00     		pushq	$0
 5896              		.cfi_def_cfa_offset 632
 5897 022a 6A00     		pushq	$0
 5898              		.cfi_def_cfa_offset 640
 5899 022c 6A00     		pushq	$0
 5900              		.cfi_def_cfa_offset 648
 5901 022e 4155     		pushq	%r13
 5902              		.cfi_def_cfa_offset 656
 5903 0230 448B7424 		movl	64(%rsp), %r14d
 5903      40
 5904 0235 448B7C24 		movl	60(%rsp), %r15d
 5904      3C
 5905 023a 488B7424 		movq	48(%rsp), %rsi
 5905      30
 5906 023f 448B4C24 		movl	72(%rsp), %r9d
 5906      48
 5907 0244 448B4424 		movl	68(%rsp), %r8d
 5907      44
 5908 0249 4489F1   		movl	%r14d, %ecx
 5909 024c 4489FA   		movl	%r15d, %edx
 5910 024f E8000000 		call	_ZN10menuwindowC1EPK12Fl_Menu_ItemiiiiS2_S2_iii
 5910      00
 5911              	.LVL725:
 943:fltk-1.3.4-1/src/Fl_Menu.cxx ****  927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 5912              		.loc 4 943 0
 5913 0254 48639424 		movslq	560(%rsp), %rdx
 5913      30020000 
 5914              	.LBB925:
 945:fltk-1.3.4-1/src/Fl_Menu.cxx ****  929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 5915              		.loc 4 945 0
 5916 025c 418BB424 		movl	256(%r12), %esi
 5916      00010000 
 5917              	.LBE925:
 943:fltk-1.3.4-1/src/Fl_Menu.cxx ****  927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 5918              		.loc 4 943 0
 5919 0264 8D4201   		leal	1(%rdx), %eax
 5920 0267 4C89A4D4 		movq	%r12, 400(%rsp,%rdx,8)
 5920      90010000 
 5921 026f 89842430 		movl	%eax, 560(%rsp)
 5921      020000
 5922              	.LBB930:
 945:fltk-1.3.4-1/src/Fl_Menu.cxx ****  929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 5923              		.loc 4 945 0
 5924 0276 4883C430 		addq	$48, %rsp
 5925              		.cfi_def_cfa_offset 608
 5926              	.LVL726:
 5927 027a 85F6     		testl	%esi, %esi
 5928 027c 0F888301 		js	.L695
 5928      0000
 5929              	.LVL727:
 5930              	.LBB926:
 946:fltk-1.3.4-1/src/Fl_Menu.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5931              		.loc 4 946 0
 5932 0282 418B4424 		movl	36(%r12), %eax
 5932      24
 949:fltk-1.3.4-1/src/Fl_Menu.cxx ****  933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 5933              		.loc 4 949 0
 5934 0287 488D4C24 		leaq	44(%rsp), %rcx
 5934      2C
 5935 028c 488D5424 		leaq	40(%rsp), %rdx
 5935      28
 5936 0291 488D7424 		leaq	36(%rsp), %rsi
 5936      24
 5937 0296 488D7C24 		leaq	32(%rsp), %rdi
 5937      20
 5938 029b 4589F1   		movl	%r14d, %r9d
 5939 029e 4589F8   		movl	%r15d, %r8d
 5940              	.LBB927:
 950:fltk-1.3.4-1/src/Fl_Menu.cxx ****  934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 5941              		.loc 4 950 0
 5942 02a1 4531F6   		xorl	%r14d, %r14d
 5943 02a4 4C8DBC24 		leaq	352(%rsp), %r15
 5943      60010000 
 5944              	.LBE927:
 946:fltk-1.3.4-1/src/Fl_Menu.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5945              		.loc 4 946 0
 5946 02ac 29E8     		subl	%ebp, %eax
 5947 02ae 89C5     		movl	%eax, %ebp
 5948              	.LVL728:
 947:fltk-1.3.4-1/src/Fl_Menu.cxx ****  931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 5949              		.loc 4 947 0
 5950 02b0 418B4424 		movl	32(%r12), %eax
 5950      20
 5951              	.LVL729:
 5952 02b5 29D8     		subl	%ebx, %eax
 5953 02b7 89C3     		movl	%eax, %ebx
 5954              	.LVL730:
 949:fltk-1.3.4-1/src/Fl_Menu.cxx ****  933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 5955              		.loc 4 949 0
 5956 02b9 E8000000 		call	_ZN2Fl16screen_work_areaERiS0_S0_S0_ii
 5956      00
 5957              	.LVL731:
 5958              	.LBB929:
 950:fltk-1.3.4-1/src/Fl_Menu.cxx ****  934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 5959              		.loc 4 950 0
 5960 02be 8B8C2458 		movl	344(%rsp), %ecx
 5960      010000
 5961 02c5 85C9     		testl	%ecx, %ecx
 5962 02c7 784A     		js	.L607
 5963              	.LVL732:
 5964 02c9 0F1F8000 		.p2align 4,,10
 5964      000000
 5965              		.p2align 3
 5966              	.L666:
 5967              	.LBB928:
 951:fltk-1.3.4-1/src/Fl_Menu.cxx ****  935:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 5968              		.loc 4 951 0
 5969 02d0 498B3F   		movq	(%r15), %rdi
 5970              	.LVL733:
 952:fltk-1.3.4-1/src/Fl_Menu.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 5971              		.loc 4 952 0
 5972 02d3 8B442420 		movl	32(%rsp), %eax
 5973 02d7 8B5720   		movl	32(%rdi), %edx
 5974              	.LVL734:
 5975 02da 8D3413   		leal	(%rbx,%rdx), %esi
 5976              	.LVL735:
 5977 02dd 39C6     		cmpl	%eax, %esi
 5978 02df 7D06     		jge	.L605
 5979              	.LVL736:
 952:fltk-1.3.4-1/src/Fl_Menu.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 5980              		.loc 4 952 0 is_stmt 0 discriminator 1
 5981 02e1 89C3     		movl	%eax, %ebx
 5982              	.LVL737:
 5983 02e3 89C6     		movl	%eax, %esi
 5984 02e5 29D3     		subl	%edx, %ebx
 5985              	.LVL738:
 5986              	.L605:
 5987 02e7 8B4F24   		movl	36(%rdi), %ecx
 5988              	.LVL739:
 953:fltk-1.3.4-1/src/Fl_Menu.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5989              		.loc 4 953 0 is_stmt 1
 5990 02ea 8B442424 		movl	36(%rsp), %eax
 5991 02ee 8D540D00 		leal	0(%rbp,%rcx), %edx
 5992              	.LVL740:
 5993 02f2 39C2     		cmpl	%eax, %edx
 5994 02f4 7D06     		jge	.L606
 5995              	.LVL741:
 953:fltk-1.3.4-1/src/Fl_Menu.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5996              		.loc 4 953 0 is_stmt 0 discriminator 1
 5997 02f6 89C5     		movl	%eax, %ebp
 5998              	.LVL742:
 5999 02f8 89C2     		movl	%eax, %edx
 6000 02fa 29CD     		subl	%ecx, %ebp
 6001              	.LVL743:
 6002              	.L606:
 954:fltk-1.3.4-1/src/Fl_Menu.cxx ****  938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 6003              		.loc 4 954 0 is_stmt 1 discriminator 2
 6004 02fc E8000000 		call	_ZN10menuwindow8positionEii
 6004      00
 6005              	.LVL744:
 6006              	.LBE928:
 950:fltk-1.3.4-1/src/Fl_Menu.cxx ****  934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 6007              		.loc 4 950 0 discriminator 2
 6008 0301 4183C601 		addl	$1, %r14d
 6009              	.LVL745:
 6010 0305 4983C708 		addq	$8, %r15
 6011 0309 4439B424 		cmpl	%r14d, 344(%rsp)
 6011      58010000 
 6012 0311 7DBD     		jge	.L666
 6013              	.LVL746:
 6014              	.L607:
 6015              	.LBE929:
 956:fltk-1.3.4-1/src/Fl_Menu.cxx ****  940:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for an area inside the widget.
 6016              		.loc 4 956 0
 6017 0313 8B842400 		movl	512(%rsp), %eax
 6017      020000
 6018 031a 418BB424 		movl	256(%r12), %esi
 6018      00010000 
 6019 0322 8D78FF   		leal	-1(%rax), %edi
 6020 0325 E8000000 		call	_ZL7setitemii
 6020      00
 6021              	.LVL747:
 6022              	.LBE926:
 6023              	.LBE930:
 6024              	.LBE924:
 6025              	.LBE923:
 6026              	.LBE922:
 6027              	.LBE921:
 916:fltk-1.3.4-1/src/Fl_Menu.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 6028              		.loc 4 916 0
 6029 032a 488BAC24 		movq	336(%rsp), %rbp
 6029      50010000 
 6030              	.LVL748:
 915:fltk-1.3.4-1/src/Fl_Menu.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6031              		.loc 4 915 0
 6032 0332 48638424 		movslq	344(%rsp), %rax
 6032      58010000 
 6033              	.LVL749:
 917:fltk-1.3.4-1/src/Fl_Menu.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 6034              		.loc 4 917 0
 6035 033a F6452011 		testb	$17, 32(%rbp)
 915:fltk-1.3.4-1/src/Fl_Menu.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6036              		.loc 4 915 0
 6037 033e 4889C1   		movq	%rax, %rcx
 6038 0341 4C8BA4C4 		movq	352(%rsp,%rax,8), %r12
 6038      60010000 
 6039              	.LVL750:
 917:fltk-1.3.4-1/src/Fl_Menu.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 6040              		.loc 4 917 0
 6041 0349 0F8431FE 		je	.L685
 6041      FFFF
 6042              	.LVL751:
 6043              	.L603:
 6044              	.LBB944:
 6045              	.LBB945:
 526:fltk-1.3.4-1/src/Fl_Menu.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 6046              		.loc 4 526 0
 6047 034f 4183BC24 		cmpl	$-1, 256(%r12)
 6047      00010000 
 6047      FF
 6048 0358 0F840A05 		je	.L699
 6048      0000
 6049 035e 41C78424 		movl	$-1, 256(%r12)
 6049      00010000 
 6049      FFFFFFFF 
 6050 036a 4C89E7   		movq	%r12, %rdi
 6051 036d BE010000 		movl	$1, %esi
 6051      00
 6052 0372 E8000000 		call	_ZN9Fl_Widget6damageEh
 6052      00
 6053              	.LVL752:
 6054 0377 448BA424 		movl	624(%rsp), %r12d
 6054      70020000 
 6055              	.LVL753:
 6056 037f 8B842400 		movl	512(%rsp), %eax
 6056      020000
 6057              	.LBE945:
 6058              	.LBE944:
 6059              	.LBB946:
 885:fltk-1.3.4-1/src/Fl_Menu.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 6060              		.loc 4 885 0
 6061 0386 4139C4   		cmpl	%eax, %r12d
 6062 0389 4489E5   		movl	%r12d, %ebp
 6063 038c 0F8C9E00 		jl	.L665
 6063      0000
 6064              	.LVL754:
 6065              		.p2align 4,,10
 6066 0392 660F1F44 		.p2align 3
 6066      0000
 6067              	.L584:
 6068              	.LBE946:
 6069              	.LBB947:
 895:fltk-1.3.4-1/src/Fl_Menu.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 6070              		.loc 4 895 0
 6071 0398 488B9C24 		movq	336(%rsp), %rbx
 6071      50010000 
 6072              	.LVL755:
 896:fltk-1.3.4-1/src/Fl_Menu.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 6073              		.loc 4 896 0
 6074 03a0 E8000000 		call	_ZN2Fl4waitEv
 6074      00
 6075              	.LVL756:
 897:fltk-1.3.4-1/src/Fl_Menu.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 6076              		.loc 4 897 0
 6077 03a5 83BC2408 		cmpl	$2, 520(%rsp)
 6077      02000002 
 6078 03ad 0F84BB00 		je	.L704
 6078      0000
 898:fltk-1.3.4-1/src/Fl_Menu.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 6079              		.loc 4 898 0
 6080 03b3 488B8424 		movq	336(%rsp), %rax
 6080      50010000 
 6081 03bb 4839C3   		cmpq	%rax, %rbx
 6082 03be 0F855201 		jne	.L705
 6082      0000
 6083              	.L700:
 6084 03c4 8B842400 		movl	512(%rsp), %eax
 6084      020000
 6085 03cb EB43     		jmp	.L587
 6086              	.LVL757:
 6087              	.L574:
 6088              	.LBE947:
 6089              	.LBE918:
 6090              	.LBE917:
 870:fltk-1.3.4-1/src/Fl_Menu.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6091              		.loc 4 870 0
 6092 03cd 448B8424 		movl	624(%rsp), %r8d
 6092      70020000 
 869:fltk-1.3.4-1/src/Fl_Menu.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 6093              		.loc 4 869 0
 6094 03d5 48C78424 		movq	$0, 336(%rsp)
 6094      50010000 
 6094      00000000 
 6095 03e1 B8010000 		movl	$1, %eax
 6095      00
 6096 03e6 C7842458 		movl	$0, 344(%rsp)
 6096      01000000 
 6096      000000
 6097 03f1 C784245C 		movl	$-1, 348(%rsp)
 6097      010000FF 
 6097      FFFFFF
 870:fltk-1.3.4-1/src/Fl_Menu.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6098              		.loc 4 870 0
 6099 03fc 4585C0   		testl	%r8d, %r8d
 6100 03ff 0F859802 		jne	.L706
 6100      0000
 6101              	.LVL758:
 6102              	.L695:
 6103 0405 448BA424 		movl	624(%rsp), %r12d
 6103      70020000 
 6104 040d 0F1F00   		.p2align 4,,10
 6105              		.p2align 3
 6106              	.L587:
 6107              	.LVL759:
 6108              	.LBB963:
 6109              	.LBB956:
 6110              	.LBB948:
 885:fltk-1.3.4-1/src/Fl_Menu.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 6111              		.loc 4 885 0
 6112 0410 4139C4   		cmpl	%eax, %r12d
 6113 0413 4489E5   		movl	%r12d, %ebp
 6114 0416 7C18     		jl	.L665
 6115 0418 E97BFFFF 		jmp	.L584
 6115      FF
 6116              	.LVL760:
 6117 041d 0F1F00   		.p2align 4,,10
 6118              		.p2align 3
 6119              	.L582:
 885:fltk-1.3.4-1/src/Fl_Menu.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 6120              		.loc 4 885 0 is_stmt 0 discriminator 2
 6121 0420 83C501   		addl	$1, %ebp
 6122              	.LVL761:
 6123 0423 39AC2400 		cmpl	%ebp, 512(%rsp)
 6123      020000
 6124 042a 0F8E68FF 		jle	.L584
 6124      FFFF
 6125              	.L665:
 886:fltk-1.3.4-1/src/Fl_Menu.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6126              		.loc 4 886 0 is_stmt 1
 6127 0430 4863DD   		movslq	%ebp, %rbx
 6128 0433 4883C302 		addq	$2, %rbx
 6129 0437 488B84DC 		movq	336(%rsp,%rbx,8), %rax
 6129      50010000 
 6130              	.LVL762:
 6131 043f 4883B8A0 		cmpq	$0, 160(%rax)
 6131      00000000 
 6132 0447 75D7     		jne	.L582
 887:fltk-1.3.4-1/src/Fl_Menu.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 6133              		.loc 4 887 0
 6134 0449 488BB8F0 		movq	240(%rax), %rdi
 6134      000000
 6135 0450 4885FF   		testq	%rdi, %rdi
 6136 0453 740E     		je	.L583
 887:fltk-1.3.4-1/src/Fl_Menu.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 6137              		.loc 4 887 0 is_stmt 0 discriminator 1
 6138 0455 488B07   		movq	(%rdi), %rax
 6139              	.LVL763:
 6140 0458 FF5028   		call	*40(%rax)
 6141              	.LVL764:
 6142 045b 488B84DC 		movq	336(%rsp,%rbx,8), %rax
 6142      50010000 
 6143              	.L583:
 888:fltk-1.3.4-1/src/Fl_Menu.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 6144              		.loc 4 888 0 is_stmt 1
 6145 0463 488B10   		movq	(%rax), %rdx
 6146 0466 4889C7   		movq	%rax, %rdi
 6147 0469 FF5228   		call	*40(%rdx)
 6148              	.LVL765:
 6149 046c EBB2     		jmp	.L582
 6150              	.LVL766:
 6151              	.L704:
 6152              	.LBE948:
 6153              	.LBE956:
 6154              	.LBE963:
 984:fltk-1.3.4-1/src/Fl_Menu.cxx ****  968:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 6155              		.loc 4 984 0
 6156 046e 488BBC24 		movq	528(%rsp), %rdi
 6156      10020000 
 983:fltk-1.3.4-1/src/Fl_Menu.cxx ****  967:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 6157              		.loc 4 983 0
 6158 0476 488B9C24 		movq	336(%rsp), %rbx
 6158      50010000 
 6159              	.LVL767:
 984:fltk-1.3.4-1/src/Fl_Menu.cxx ****  968:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 6160              		.loc 4 984 0
 6161 047e 4885FF   		testq	%rdi, %rdi
 6162 0481 7406     		je	.L626
 984:fltk-1.3.4-1/src/Fl_Menu.cxx ****  968:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 6163              		.loc 4 984 0 is_stmt 0 discriminator 1
 6164 0483 488B07   		movq	(%rdi), %rax
 6165 0486 FF5008   		call	*8(%rax)
 6166              	.LVL768:
 6167              	.L626:
 6168 0489 8B942400 		movl	512(%rsp), %edx
 6168      020000
 6169              	.LBB964:
 6170              	.LBB957:
 6171              	.LBB949:
 6172              	.LBB939:
 6173              	.LBB933:
 969:fltk-1.3.4-1/src/Fl_Menu.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 6174              		.loc 4 969 0 is_stmt 1
 6175 0490 31C9     		xorl	%ecx, %ecx
 6176 0492 EB1C     		jmp	.L625
 6177              		.p2align 4,,10
 6178 0494 0F1F4000 		.p2align 3
 6179              	.L708:
 6180              	.LBE933:
 6181              	.LBE939:
 6182              	.LBE949:
 6183              	.LBE957:
 6184              	.LBE964:
 985:fltk-1.3.4-1/src/Fl_Menu.cxx ****  969:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Group-specific methods.
 6185              		.loc 4 985 0 discriminator 1
 6186 0498 83EA01   		subl	$1, %edx
 6187 049b B9010000 		movl	$1, %ecx
 6187      00
 6188 04a0 4863C2   		movslq	%edx, %rax
 6189 04a3 488BBCC4 		movq	352(%rsp,%rax,8), %rdi
 6189      60010000 
 6190 04ab 4885FF   		testq	%rdi, %rdi
 6191 04ae 7554     		jne	.L707
 6192              	.L625:
 985:fltk-1.3.4-1/src/Fl_Menu.cxx ****  969:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Group-specific methods.
 6193              		.loc 4 985 0 is_stmt 0
 6194 04b0 83FA01   		cmpl	$1, %edx
 6195 04b3 7FE3     		jg	.L708
 6196 04b5 84C9     		testb	%cl, %cl
 6197 04b7 0F854704 		jne	.L709
 6197      0000
 6198              	.L627:
 986:fltk-1.3.4-1/src/Fl_Menu.cxx ****  970:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 6199              		.loc 4 986 0 is_stmt 1
 6200 04bd 488D7C24 		leaq	48(%rsp), %rdi
 6200      30
 6201 04c2 E8000000 		call	_ZN14Fl_Menu_Window4hideEv
 6201      00
 6202              	.LVL769:
 987:fltk-1.3.4-1/src/Fl_Menu.cxx ****  971:fltk-1.3.4-1/FL/Fl_Widget.H ****       Example:
 6203              		.loc 4 987 0
 6204 04c7 31FF     		xorl	%edi, %edi
 6205 04c9 E8000000 		call	_ZN2Fl4grabEP9Fl_Window
 6205      00
 6206              	.LVL770:
 6207              	.L578:
 854:fltk-1.3.4-1/src/Fl_Menu.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 6208              		.loc 4 854 0
 6209 04ce 488D7C24 		leaq	48(%rsp), %rdi
 6209      30
 6210 04d3 E8000000 		call	_ZN10menuwindowD1Ev
 6210      00
 6211              	.LVL771:
 989:fltk-1.3.4-1/src/Fl_Menu.cxx ****  973:fltk-1.3.4-1/FL/Fl_Widget.H ****       void my_callback (Fl_Widget *w, void *) {
 6212              		.loc 4 989 0
 6213 04d8 488B8C24 		movq	536(%rsp), %rcx
 6213      18020000 
 6214 04e0 6448330C 		xorq	%fs:40, %rcx
 6214      25280000 
 6214      00
 6215 04e9 4889D8   		movq	%rbx, %rax
 6216 04ec 0F850004 		jne	.L710
 6216      0000
 6217 04f2 4881C428 		addq	$552, %rsp
 6217      020000
 6218              		.cfi_remember_state
 6219              		.cfi_def_cfa_offset 56
 6220 04f9 5B       		popq	%rbx
 6221              		.cfi_def_cfa_offset 48
 6222 04fa 5D       		popq	%rbp
 6223              		.cfi_def_cfa_offset 40
 6224 04fb 415C     		popq	%r12
 6225              		.cfi_def_cfa_offset 32
 6226 04fd 415D     		popq	%r13
 6227              		.cfi_def_cfa_offset 24
 6228 04ff 415E     		popq	%r14
 6229              		.cfi_def_cfa_offset 16
 6230 0501 415F     		popq	%r15
 6231              		.cfi_def_cfa_offset 8
 6232 0503 C3       		ret
 6233              	.LVL772:
 6234              	.L707:
 6235              		.cfi_restore_state
 6236 0504 89942400 		movl	%edx, 512(%rsp)
 6236      020000
 985:fltk-1.3.4-1/src/Fl_Menu.cxx ****  969:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Group-specific methods.
 6237              		.loc 4 985 0 discriminator 2
 6238 050b 488B07   		movq	(%rdi), %rax
 6239 050e FF5008   		call	*8(%rax)
 6240              	.LVL773:
 6241 0511 E973FFFF 		jmp	.L626
 6241      FF
 6242              	.LVL774:
 6243              	.L705:
 6244              	.LBB965:
 6245              	.LBB958:
 902:fltk-1.3.4-1/src/Fl_Menu.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 6246              		.loc 4 902 0
 6247 0516 488BBC24 		movq	528(%rsp), %rdi
 6247      10020000 
 6248 051e 4885FF   		testq	%rdi, %rdi
 6249 0521 741A     		je	.L588
 902:fltk-1.3.4-1/src/Fl_Menu.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 6250              		.loc 4 902 0 is_stmt 0 discriminator 2
 6251 0523 488B07   		movq	(%rdi), %rax
 6252 0526 FF5008   		call	*8(%rax)
 6253              	.LVL775:
 6254 0529 488B8424 		movq	336(%rsp), %rax
 6254      50010000 
 6255 0531 48C78424 		movq	$0, 528(%rsp)
 6255      10020000 
 6255      00000000 
 6256              	.L588:
 904:fltk-1.3.4-1/src/Fl_Menu.cxx ****  888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 6257              		.loc 4 904 0 is_stmt 1
 6258 053d 4885C0   		testq	%rax, %rax
 6259 0540 0F855903 		jne	.L589
 6259      0000
 906:fltk-1.3.4-1/src/Fl_Menu.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 6260              		.loc 4 906 0
 6261 0546 8B842400 		movl	512(%rsp), %eax
 6261      020000
 6262 054d 8D50FF   		leal	-1(%rax), %edx
 6263 0550 4863D2   		movslq	%edx, %rdx
 6264 0553 488BBCD4 		movq	352(%rsp,%rdx,8), %rdi
 6264      60010000 
 6265              	.LVL776:
 6266              	.LBB950:
 6267              	.LBB951:
 526:fltk-1.3.4-1/src/Fl_Menu.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 6268              		.loc 4 526 0
 6269 055b 83BF0001 		cmpl	$-1, 256(%rdi)
 6269      0000FF
 6270 0562 0F84A8FE 		je	.L587
 6270      FFFF
 6271 0568 C7870001 		movl	$-1, 256(%rdi)
 6271      0000FFFF 
 6271      FFFF
 6272 0572 BE010000 		movl	$1, %esi
 6272      00
 6273 0577 E8000000 		call	_ZN9Fl_Widget6damageEh
 6273      00
 6274              	.LVL777:
 6275 057c E943FEFF 		jmp	.L700
 6275      FF
 6276              	.LVL778:
 6277              		.p2align 4,,10
 6278 0581 0F1F8000 		.p2align 3
 6278      000000
 6279              	.L571:
 6280              	.LBE951:
 6281              	.LBE950:
 6282              	.LBE958:
 6283              	.LBE965:
 6284              	.LBB966:
 851:fltk-1.3.4-1/src/Fl_Menu.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6285              		.loc 4 851 0
 6286 0588 8B44240C 		movl	12(%rsp), %eax
 852:fltk-1.3.4-1/src/Fl_Menu.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 6287              		.loc 4 852 0
 6288 058c 448B7C24 		movl	16(%rsp), %r15d
 6288      10
 851:fltk-1.3.4-1/src/Fl_Menu.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6289              		.loc 4 851 0
 6290 0591 2B050000 		subl	_ZN2Fl3e_xE(%rip), %eax
 6290      0000
 852:fltk-1.3.4-1/src/Fl_Menu.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 6291              		.loc 4 852 0
 6292 0597 442B3D00 		subl	_ZN2Fl3e_yE(%rip), %r15d
 6292      000000
 851:fltk-1.3.4-1/src/Fl_Menu.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6293              		.loc 4 851 0
 6294 059e 03050000 		addl	_ZN2Fl8e_x_rootE(%rip), %eax
 6294      0000
 852:fltk-1.3.4-1/src/Fl_Menu.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 6295              		.loc 4 852 0
 6296 05a4 44033D00 		addl	_ZN2Fl8e_y_rootE(%rip), %r15d
 6296      000000
 851:fltk-1.3.4-1/src/Fl_Menu.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6297              		.loc 4 851 0
 6298 05ab 8944240C 		movl	%eax, 12(%rsp)
 6299              	.LVL779:
 852:fltk-1.3.4-1/src/Fl_Menu.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 6300              		.loc 4 852 0
 6301 05af 44897C24 		movl	%r15d, 16(%rsp)
 6301      10
 6302              	.LVL780:
 6303 05b4 E9F0FAFF 		jmp	.L628
 6303      FF
 6304              	.LVL781:
 6305              	.L711:
 6306 05b9 89842400 		movl	%eax, 512(%rsp)
 6306      020000
 6307              	.LBE966:
 6308              	.LBB967:
 6309              	.LBB959:
 6310              	.LBB952:
 972:fltk-1.3.4-1/src/Fl_Menu.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6311              		.loc 4 972 0 discriminator 2
 6312 05c0 488B07   		movq	(%rdi), %rax
 6313 05c3 FF5008   		call	*8(%rax)
 6314              	.LVL782:
 6315 05c6 8B8C2458 		movl	344(%rsp), %ecx
 6315      010000
 6316              	.L597:
 6317 05cd 8B842400 		movl	512(%rsp), %eax
 6317      020000
 6318 05d4 448D4101 		leal	1(%rcx), %r8d
 6319              	.LBB940:
 6320              	.LBB934:
 969:fltk-1.3.4-1/src/Fl_Menu.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 6321              		.loc 4 969 0
 6322 05d8 31F6     		xorl	%esi, %esi
 6323 05da EB1C     		jmp	.L621
 6324 05dc 0F1F4000 		.p2align 4,,10
 6325              		.p2align 3
 6326              	.L712:
 6327              	.LBE934:
 6328              	.LBE940:
 972:fltk-1.3.4-1/src/Fl_Menu.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6329              		.loc 4 972 0 discriminator 1
 6330 05e0 83E801   		subl	$1, %eax
 6331 05e3 BE010000 		movl	$1, %esi
 6331      00
 6332 05e8 4863D0   		movslq	%eax, %rdx
 6333 05eb 488BBCD4 		movq	352(%rsp,%rdx,8), %rdi
 6333      60010000 
 6334 05f3 4885FF   		testq	%rdi, %rdi
 6335 05f6 75C1     		jne	.L711
 6336              	.L621:
 972:fltk-1.3.4-1/src/Fl_Menu.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6337              		.loc 4 972 0 is_stmt 0
 6338 05f8 4439C0   		cmpl	%r8d, %eax
 6339 05fb 7FE3     		jg	.L712
 6340 05fd 4084F6   		testb	%sil, %sil
 6341 0600 0F852403 		jne	.L713
 6341      0000
 6342              	.L622:
 973:fltk-1.3.4-1/src/Fl_Menu.cxx ****  957:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure_label(int& ww, int& hh) const {label_.measure(
 6343              		.loc 4 973 0 is_stmt 1
 6344 0606 85C9     		testl	%ecx, %ecx
 6345 0608 0F85F7FD 		jne	.L695
 6345      FFFF
 973:fltk-1.3.4-1/src/Fl_Menu.cxx ****  957:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure_label(int& ww, int& hh) const {label_.measure(
 6346              		.loc 4 973 0 is_stmt 0 discriminator 1
 6347 060e 8B942404 		movl	516(%rsp), %edx
 6347      020000
 6348 0615 85D2     		testl	%edx, %edx
 6349 0617 0F84E8FD 		je	.L695
 6349      FFFF
 976:fltk-1.3.4-1/src/Fl_Menu.cxx ****  960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 6350              		.loc 4 976 0 is_stmt 1
 6351 061d 8BB4245C 		movl	348(%rsp), %esi
 6351      010000
 6352 0624 418B5C24 		movl	32(%r12), %ebx
 6352      20
 6353              	.LVL783:
 6354 0629 4C89E7   		movq	%r12, %rdi
 6355 062c E8000000 		call	_ZN10menuwindow6titlexEi
 6355      00
 6356              	.LVL784:
 978:fltk-1.3.4-1/src/Fl_Menu.cxx ****  962:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6357              		.loc 4 978 0
 6358 0631 01C3     		addl	%eax, %ebx
 6359              	.LVL785:
 6360 0633 418B4424 		movl	44(%r12), %eax
 6360      2C
 6361 0638 41034424 		addl	36(%r12), %eax
 6361      24
 6362 063d BF180100 		movl	$280, %edi
 6362      00
 6363 0642 4189C5   		movl	%eax, %r13d
 6364              	.LVL786:
 6365 0645 E8000000 		call	_Znwm
 6365      00
 6366              	.LVL787:
 6367 064a 4883EC08 		subq	$8, %rsp
 6368              		.cfi_def_cfa_offset 616
 6369 064e 4989C4   		movq	%rax, %r12
 6370 0651 4889C7   		movq	%rax, %rdi
 6371 0654 6A00     		pushq	$0
 6372              		.cfi_def_cfa_offset 624
 6373 0656 6A01     		pushq	$1
 6374              		.cfi_def_cfa_offset 632
 6375 0658 4531C9   		xorl	%r9d, %r9d
 6376 065b 6A00     		pushq	$0
 6377              		.cfi_def_cfa_offset 640
 6378 065d 55       		pushq	%rbp
 6379              		.cfi_def_cfa_offset 648
 6380 065e 4531C0   		xorl	%r8d, %r8d
 6381 0661 6A00     		pushq	$0
 6382              		.cfi_def_cfa_offset 656
 6383 0663 4489E9   		movl	%r13d, %ecx
 6384 0666 89DA     		movl	%ebx, %edx
 6385 0668 31F6     		xorl	%esi, %esi
 6386 066a E8000000 		call	_ZN10menuwindowC1EPK12Fl_Menu_ItemiiiiS2_S2_iii
 6386      00
 6387              	.LVL788:
 979:fltk-1.3.4-1/src/Fl_Menu.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 6388              		.loc 4 979 0
 6389 066f 498BBC24 		movq	240(%r12), %rdi
 6389      F0000000 
 978:fltk-1.3.4-1/src/Fl_Menu.cxx ****  962:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6390              		.loc 4 978 0
 6391 0677 4C89A424 		movq	%r12, 576(%rsp)
 6391      40020000 
 979:fltk-1.3.4-1/src/Fl_Menu.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 6392              		.loc 4 979 0
 6393 067f 4883C430 		addq	$48, %rsp
 6394              		.cfi_def_cfa_offset 608
 6395 0683 488B07   		movq	(%rdi), %rax
 6396 0686 FF5028   		call	*40(%rax)
 6397              	.LVL789:
 6398 0689 8B842400 		movl	512(%rsp), %eax
 6398      020000
 6399 0690 448BA424 		movl	624(%rsp), %r12d
 6399      70020000 
 6400 0698 E973FDFF 		jmp	.L587
 6400      FF
 6401              	.LVL790:
 6402              	.L706:
 6403              	.LBE952:
 6404              	.LBE959:
 6405              	.LBE967:
 872:fltk-1.3.4-1/src/Fl_Menu.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6406              		.loc 4 872 0
 6407 069d 488D7C24 		leaq	48(%rsp), %rdi
 6407      30
 6408 06a2 BE050000 		movl	$5, %esi
 6408      00
 6409 06a7 E8000000 		call	_ZN10menuwindow6handleEi
 6409      00
 6410              	.LVL791:
 6411 06ac 85C0     		testl	%eax, %eax
 6412 06ae 0F846802 		je	.L714
 6412      0000
 877:fltk-1.3.4-1/src/Fl_Menu.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 6413              		.loc 4 877 0
 6414 06b4 4C8BAC24 		movq	336(%rsp), %r13
 6414      50010000 
 6415              	.LVL792:
 878:fltk-1.3.4-1/src/Fl_Menu.cxx ****  862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6416              		.loc 4 878 0
 6417 06bc 4D85ED   		testq	%r13, %r13
 6418 06bf 0F84A301 		je	.L699
 6418      0000
 6419              	.LBB968:
 6420              	.LBB960:
 6421 06c5 4C89ED   		movq	%r13, %rbp
 6422 06c8 E98FFAFF 		jmp	.L575
 6422      FF
 6423              	.LVL793:
 6424              	.L703:
 6425 06cd 4989F6   		movq	%rsi, %r14
 6426              	.LBB953:
 6427              	.LBB941:
 933:fltk-1.3.4-1/src/Fl_Menu.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 6428              		.loc 4 933 0
 6429 06d0 8BB4245C 		movl	348(%rsp), %esi
 6429      010000
 6430              	.LVL794:
 6431 06d7 4C89E7   		movq	%r12, %rdi
 6432 06da 418B5C24 		movl	32(%r12), %ebx
 6432      20
 6433              	.LVL795:
 6434 06df E8000000 		call	_ZN10menuwindow6titlexEi
 6434      00
 6435              	.LVL796:
 934:fltk-1.3.4-1/src/Fl_Menu.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6436              		.loc 4 934 0
 6437 06e4 458B5424 		movl	44(%r12), %r10d
 6437      2C
 6438 06e9 45035424 		addl	36(%r12), %r10d
 6438      24
 933:fltk-1.3.4-1/src/Fl_Menu.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 6439              		.loc 4 933 0
 6440 06ee 01C3     		addl	%eax, %ebx
 6441              	.LVL797:
 6442 06f0 8B8C2458 		movl	344(%rsp), %ecx
 6442      010000
 6443              	.LVL798:
 6444              	.L601:
 6445              	.LBB935:
 959:fltk-1.3.4-1/src/Fl_Menu.cxx ****  943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 6446              		.loc 4 959 0
 6447 06f7 8BB42400 		movl	512(%rsp), %esi
 6447      020000
 6448 06fe 448D4101 		leal	1(%rcx), %r8d
 6449 0702 4439C6   		cmpl	%r8d, %esi
 6450 0705 89F0     		movl	%esi, %eax
 6451 0707 0F8FE000 		jg	.L715
 6451      0000
 6452              	.L692:
 6453 070d 4589D5   		movl	%r10d, %r13d
 6454              	.L611:
 6455 0710 89F1     		movl	%esi, %ecx
 6456              	.LBE935:
 939:fltk-1.3.4-1/src/Fl_Menu.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 6457              		.loc 4 939 0
 6458 0712 31F6     		xorl	%esi, %esi
 6459 0714 EB28     		jmp	.L617
 6460 0716 662E0F1F 		.p2align 4,,10
 6460      84000000 
 6460      0000
 6461              		.p2align 3
 6462              	.L717:
 6463              	.LBB936:
 966:fltk-1.3.4-1/src/Fl_Menu.cxx ****  950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label 
 6464              		.loc 4 966 0 discriminator 1
 6465 0720 83E801   		subl	$1, %eax
 6466 0723 BE010000 		movl	$1, %esi
 6466      00
 6467 0728 4863D0   		movslq	%eax, %rdx
 6468 072b 89C1     		movl	%eax, %ecx
 6469 072d 488BBCD4 		movq	352(%rsp,%rdx,8), %rdi
 6469      60010000 
 6470 0735 4885FF   		testq	%rdi, %rdi
 6471 0738 0F858900 		jne	.L716
 6471      0000
 6472              	.L617:
 966:fltk-1.3.4-1/src/Fl_Menu.cxx ****  950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label 
 6473              		.loc 4 966 0 is_stmt 0
 6474 073e 4439C0   		cmpl	%r8d, %eax
 6475 0741 7FDD     		jg	.L717
 6476 0743 4084F6   		testb	%sil, %sil
 6477 0746 4589EA   		movl	%r13d, %r10d
 6478 0749 0F85C101 		jne	.L718
 6478      0000
 6479              	.L618:
 969:fltk-1.3.4-1/src/Fl_Menu.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 6480              		.loc 4 969 0 is_stmt 1
 6481 074f 4885ED   		testq	%rbp, %rbp
 6482 0752 44891424 		movl	%r10d, (%rsp)
 6483 0756 0F842001 		je	.L719
 6483      0000
 6484 075c BF180100 		movl	$280, %edi
 6484      00
 6485 0761 E8000000 		call	_Znwm
 6485      00
 6486              	.LVL799:
 6487 0766 448B1424 		movl	(%rsp), %r10d
 6488 076a 4989C4   		movq	%rax, %r12
 6489 076d 41B80100 		movl	$1, %r8d
 6489      0000
 6490              	.L630:
 969:fltk-1.3.4-1/src/Fl_Menu.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 6491              		.loc 4 969 0 is_stmt 0 discriminator 8
 6492 0773 4883EC08 		subq	$8, %rsp
 6493              		.cfi_def_cfa_offset 616
 6494 0777 89DA     		movl	%ebx, %edx
 6495 0779 4C89E7   		movq	%r12, %rdi
 6496 077c 8B442424 		movl	36(%rsp), %eax
 6497 0780 4531C9   		xorl	%r9d, %r9d
 6498 0783 4489D1   		movl	%r10d, %ecx
 6499 0786 4C89F6   		movq	%r14, %rsi
 6500 0789 50       		pushq	%rax
 6501              		.cfi_def_cfa_offset 624
 6502 078a 8B842480 		movl	640(%rsp), %eax
 6502      020000
 6503 0791 50       		pushq	%rax
 6504              		.cfi_def_cfa_offset 632
 6505 0792 6A00     		pushq	$0
 6506              		.cfi_def_cfa_offset 640
 6507 0794 55       		pushq	%rbp
 6508              		.cfi_def_cfa_offset 648
 6509 0795 6A00     		pushq	$0
 6510              		.cfi_def_cfa_offset 656
 6511 0797 E8000000 		call	_ZN10menuwindowC1EPK12Fl_Menu_ItemiiiiS2_S2_iii
 6511      00
 6512              	.LVL800:
 967:fltk-1.3.4-1/src/Fl_Menu.cxx ****  951:fltk-1.3.4-1/FL/Fl_Widget.H ****       Labels with images will return w() and h() of the image
 6513              		.loc 4 967 0 is_stmt 1 discriminator 8
 6514 079c 48639424 		movslq	560(%rsp), %rdx
 6514      30020000 
 6515 07a4 8D4201   		leal	1(%rdx), %eax
 969:fltk-1.3.4-1/src/Fl_Menu.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 6516              		.loc 4 969 0 discriminator 8
 6517 07a7 4C89A4D4 		movq	%r12, 400(%rsp,%rdx,8)
 6517      90010000 
 967:fltk-1.3.4-1/src/Fl_Menu.cxx ****  951:fltk-1.3.4-1/FL/Fl_Widget.H ****       Labels with images will return w() and h() of the image
 6518              		.loc 4 967 0 discriminator 8
 6519 07af 89842430 		movl	%eax, 560(%rsp)
 6519      020000
 969:fltk-1.3.4-1/src/Fl_Menu.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 6520              		.loc 4 969 0 discriminator 8
 6521 07b6 4883C430 		addq	$48, %rsp
 6522              		.cfi_def_cfa_offset 608
 6523 07ba 448BA424 		movl	624(%rsp), %r12d
 6523      70020000 
 6524 07c2 E949FCFF 		jmp	.L587
 6524      FF
 6525              	.L716:
 6526 07c7 89842400 		movl	%eax, 512(%rsp)
 6526      020000
 966:fltk-1.3.4-1/src/Fl_Menu.cxx ****  950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label 
 6527              		.loc 4 966 0 discriminator 2
 6528 07ce 488B07   		movq	(%rdi), %rax
 6529 07d1 FF5008   		call	*8(%rax)
 6530              	.LVL801:
 6531 07d4 8B942458 		movl	344(%rsp), %edx
 6531      010000
 6532 07db 8B842400 		movl	512(%rsp), %eax
 6532      020000
 6533 07e2 448D4201 		leal	1(%rdx), %r8d
 6534 07e6 89C6     		movl	%eax, %esi
 6535 07e8 E923FFFF 		jmp	.L611
 6535      FF
 6536              	.L715:
 960:fltk-1.3.4-1/src/Fl_Menu.cxx ****  944:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 6537              		.loc 4 960 0 discriminator 1
 6538 07ed 4963F8   		movslq	%r8d, %rdi
 6539 07f0 488BBCFC 		movq	352(%rsp,%rdi,8), %rdi
 6539      60010000 
 959:fltk-1.3.4-1/src/Fl_Menu.cxx ****  943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 6540              		.loc 4 959 0 discriminator 1
 6541 07f8 4C3BB710 		cmpq	272(%rdi), %r14
 6541      010000
 6542 07ff 0F8508FF 		jne	.L692
 6542      FFFF
 6543              	.L614:
 6544 0805 83C102   		addl	$2, %ecx
 6545              	.LBE936:
 939:fltk-1.3.4-1/src/Fl_Menu.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 6546              		.loc 4 939 0
 6547 0808 31D2     		xorl	%edx, %edx
 6548 080a EB1E     		jmp	.L613
 6549              	.L721:
 6550              	.LBB937:
 962:fltk-1.3.4-1/src/Fl_Menu.cxx ****  946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 6551              		.loc 4 962 0 discriminator 1
 6552 080c 83E801   		subl	$1, %eax
 6553 080f 4863D0   		movslq	%eax, %rdx
 6554 0812 89C6     		movl	%eax, %esi
 6555 0814 488BBCD4 		movq	352(%rsp,%rdx,8), %rdi
 6555      60010000 
 6556 081c BA010000 		movl	$1, %edx
 6556      00
 6557 0821 4885FF   		testq	%rdi, %rdi
 6558 0824 0F850C01 		jne	.L720
 6558      0000
 6559              	.L613:
 962:fltk-1.3.4-1/src/Fl_Menu.cxx ****  946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 6560              		.loc 4 962 0 is_stmt 0
 6561 082a 39C8     		cmpl	%ecx, %eax
 6562 082c 7FDE     		jg	.L721
 6563 082e 84D2     		testb	%dl, %dl
 6564 0830 7407     		je	.L615
 6565 0832 89B42400 		movl	%esi, 512(%rsp)
 6565      020000
 6566              	.L615:
 963:fltk-1.3.4-1/src/Fl_Menu.cxx ****  947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6567              		.loc 4 963 0 is_stmt 1
 6568 0839 8D50FF   		leal	-1(%rax), %edx
 6569 083c 4863D2   		movslq	%edx, %rdx
 6570 083f 488BBCD4 		movq	352(%rsp,%rdx,8), %rdi
 6570      60010000 
 6571              	.LVL802:
 6572              	.LBB931:
 6573              	.LBB932:
 526:fltk-1.3.4-1/src/Fl_Menu.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 6574              		.loc 4 526 0
 6575 0847 83BF0001 		cmpl	$-1, 256(%rdi)
 6575      0000FF
 6576 084e 0F84B1FB 		je	.L695
 6576      FFFF
 6577 0854 C7870001 		movl	$-1, 256(%rdi)
 6577      0000FFFF 
 6577      FFFF
 6578 085e BE010000 		movl	$1, %esi
 6578      00
 6579 0863 E8000000 		call	_ZN9Fl_Widget6damageEh
 6579      00
 6580              	.LVL803:
 6581              	.L699:
 6582 0868 8B842400 		movl	512(%rsp), %eax
 6582      020000
 6583 086f 448BA424 		movl	624(%rsp), %r12d
 6583      70020000 
 6584 0877 E994FBFF 		jmp	.L587
 6584      FF
 6585              	.LVL804:
 6586              	.L719:
 6587 087c 458B6C24 		movl	32(%r12), %r13d
 6587      20
 6588              	.LVL805:
 6589              	.LBE932:
 6590              	.LBE931:
 969:fltk-1.3.4-1/src/Fl_Menu.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 6591              		.loc 4 969 0 discriminator 1
 6592 0881 BF180100 		movl	$280, %edi
 6592      00
 6593 0886 E8000000 		call	_Znwm
 6593      00
 6594              	.LVL806:
 6595 088b 4531C0   		xorl	%r8d, %r8d
 6596 088e 4989C4   		movq	%rax, %r12
 6597 0891 448B1424 		movl	(%rsp), %r10d
 6598 0895 44896C24 		movl	%r13d, 28(%rsp)
 6598      1C
 6599 089a E9D4FEFF 		jmp	.L630
 6599      FF
 6600              	.LVL807:
 6601              	.L589:
 6602              	.LBE937:
 6603              	.LBE941:
 6604              	.LBE953:
 910:fltk-1.3.4-1/src/Fl_Menu.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 6605              		.loc 4 910 0
 6606 089f 488BBC24 		movq	528(%rsp), %rdi
 6606      10020000 
 6607 08a7 4489A424 		movl	%r12d, 624(%rsp)
 6607      70020000 
 6608 08af 4885FF   		testq	%rdi, %rdi
 6609 08b2 7412     		je	.L592
 910:fltk-1.3.4-1/src/Fl_Menu.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 6610              		.loc 4 910 0 is_stmt 0 discriminator 2
 6611 08b4 488B07   		movq	(%rdi), %rax
 6612 08b7 FF5008   		call	*8(%rax)
 6613              	.LVL808:
 6614 08ba 48C78424 		movq	$0, 528(%rsp)
 6614      10020000 
 6614      00000000 
 6615              	.L592:
 6616              	.LVL809:
 912:fltk-1.3.4-1/src/Fl_Menu.cxx ****  896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 6617              		.loc 4 912 0 is_stmt 1
 6618 08c6 48638424 		movslq	344(%rsp), %rax
 6618      58010000 
 6619 08ce 8BB4245C 		movl	348(%rsp), %esi
 6619      010000
 911:fltk-1.3.4-1/src/Fl_Menu.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 6620              		.loc 4 911 0
 6621 08d5 4531ED   		xorl	%r13d, %r13d
 912:fltk-1.3.4-1/src/Fl_Menu.cxx ****  896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 6622              		.loc 4 912 0
 6623 08d8 488BBCC4 		movq	352(%rsp,%rax,8), %rdi
 6623      60010000 
 6624 08e0 E8000000 		call	_ZN10menuwindow10autoscrollEi
 6624      00
 6625              	.LVL810:
 6626 08e5 488BAC24 		movq	336(%rsp), %rbp
 6626      50010000 
 6627              	.LVL811:
 6628 08ed E96AF8FF 		jmp	.L575
 6628      FF
 6629              	.LVL812:
 6630              	.L710:
 6631              	.LBE960:
 6632              	.LBE968:
 989:fltk-1.3.4-1/src/Fl_Menu.cxx ****  973:fltk-1.3.4-1/FL/Fl_Widget.H ****       void my_callback (Fl_Widget *w, void *) {
 6633              		.loc 4 989 0
 6634 08f2 E8000000 		call	__stack_chk_fail
 6634      00
 6635              	.LVL813:
 6636              	.L635:
 6637 08f7 4189EA   		movl	%ebp, %r10d
 6638 08fa 4989F6   		movq	%rsi, %r14
 6639              	.LBB969:
 6640              	.LBB961:
 6641              	.LBB954:
 6642              	.LBB942:
 939:fltk-1.3.4-1/src/Fl_Menu.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 6643              		.loc 4 939 0
 6644 08fd 31ED     		xorl	%ebp, %ebp
 6645              	.LVL814:
 6646 08ff E9F3FDFF 		jmp	.L601
 6646      FF
 6647              	.LVL815:
 6648              	.L709:
 6649 0904 89942400 		movl	%edx, 512(%rsp)
 6649      020000
 6650 090b E9ADFBFF 		jmp	.L627
 6650      FF
 6651              	.LVL816:
 6652              	.L718:
 6653 0910 898C2400 		movl	%ecx, 512(%rsp)
 6653      020000
 6654 0917 E933FEFF 		jmp	.L618
 6654      FF
 6655              	.LVL817:
 6656              	.L714:
 6657              	.LBE942:
 6658              	.LBE954:
 6659              	.LBE961:
 6660              	.LBE969:
 873:fltk-1.3.4-1/src/Fl_Menu.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 6661              		.loc 4 873 0
 6662 091c 31FF     		xorl	%edi, %edi
 874:fltk-1.3.4-1/src/Fl_Menu.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 6663              		.loc 4 874 0
 6664 091e 31DB     		xorl	%ebx, %ebx
 6665              	.LVL818:
 873:fltk-1.3.4-1/src/Fl_Menu.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 6666              		.loc 4 873 0
 6667 0920 E8000000 		call	_ZN2Fl4grabEP9Fl_Window
 6667      00
 6668              	.LVL819:
 874:fltk-1.3.4-1/src/Fl_Menu.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 6669              		.loc 4 874 0
 6670 0925 E9A4FBFF 		jmp	.L578
 6670      FF
 6671              	.LVL820:
 6672              	.L713:
 6673 092a 89842400 		movl	%eax, 512(%rsp)
 6673      020000
 6674 0931 E9D0FCFF 		jmp	.L622
 6674      FF
 6675              	.LVL821:
 6676              	.L720:
 6677 0936 89842400 		movl	%eax, 512(%rsp)
 6677      020000
 6678              	.LBB970:
 6679              	.LBB962:
 6680              	.LBB955:
 6681              	.LBB943:
 6682              	.LBB938:
 962:fltk-1.3.4-1/src/Fl_Menu.cxx ****  946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 6683              		.loc 4 962 0 discriminator 2
 6684 093d 488B07   		movq	(%rdi), %rax
 6685 0940 FF5008   		call	*8(%rax)
 6686              	.LVL822:
 6687 0943 8B842400 		movl	512(%rsp), %eax
 6687      020000
 6688 094a 8B8C2458 		movl	344(%rsp), %ecx
 6688      010000
 6689 0951 89C6     		movl	%eax, %esi
 6690 0953 E9ADFEFF 		jmp	.L614
 6690      FF
 6691              	.LBE938:
 6692              	.LBE943:
 6693              	.LBE955:
 6694              	.LBE962:
 6695              	.LBE970:
 6696              		.cfi_endproc
 6697              	.LFE587:
 6699              		.section	.text.unlikely._ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i
 6700              	.LCOLDE36:
 6701              		.section	.text._ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i
 6702              	.LHOTE36:
 6703              		.section	.text.unlikely._ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_,"ax",@progbits
 6704              		.align 2
 6705              	.LCOLDB37:
 6706              		.section	.text._ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_,"ax",@progbits
 6707              	.LHOTB37:
 6708              		.align 2
 6709              		.p2align 4,,15
 6710              		.globl	_ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_
 6712              	_ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_:
 6713              	.LFB588:
1018:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1002:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Gl_Window pointer if this widget is an Fl
 6714              		.loc 4 1018 0
 6715              		.cfi_startproc
 6716              	.LVL823:
 6717 0000 4883EC10 		subq	$16, %rsp
 6718              		.cfi_def_cfa_offset 24
1021:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1005:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Gl_Window. 
 6719              		.loc 4 1021 0
 6720 0004 B8000000 		movl	$_ZZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_E5dummy, %eax
 6720      00
 6721 0009 4885C9   		testq	%rcx, %rcx
1020:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1004:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 6722              		.loc 4 1020 0
 6723 000c 48890D00 		movq	%rcx, _ZZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_E5dummy(%rip)
 6723      000000
1021:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1005:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Gl_Window. 
 6724              		.loc 4 1021 0
 6725 0013 B9000000 		movl	$0, %ecx
 6725      00
 6726              	.LVL824:
 6727 0018 6A00     		pushq	$0
 6728              		.cfi_def_cfa_offset 32
 6729 001a 480F44C1 		cmove	%rcx, %rax
 6730 001e 50       		pushq	%rax
 6731              		.cfi_def_cfa_offset 40
 6732 001f 4151     		pushq	%r9
 6733              		.cfi_def_cfa_offset 48
 6734 0021 4D89C1   		movq	%r8, %r9
 6735              	.LVL825:
 6736 0024 4531C0   		xorl	%r8d, %r8d
 6737              	.LVL826:
 6738 0027 E8000000 		call	_ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i
 6738      00
 6739              	.LVL827:
1022:fltk-1.3.4-1/src/Fl_Menu.cxx **** 1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 6740              		.loc 4 1022 0
 6741 002c 4883C428 		addq	$40, %rsp
 6742              		.cfi_def_cfa_offset 8
 6743 0030 C3       		ret
 6744              		.cfi_endproc
 6745              	.LFE588:
 6747              		.section	.text.unlikely._ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_
 6748              	.LCOLDE37:
 6749              		.section	.text._ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_
 6750              	.LHOTE37:
 6751              		.section	.text.unlikely._ZNK12Fl_Menu_Item13test_shortcutEv,"ax",@progbits
 6752              		.align 2
 6753              	.LCOLDB38:
 6754              		.section	.text._ZNK12Fl_Menu_Item13test_shortcutEv,"ax",@progbits
 6755              	.LHOTB38:
 6756              		.align 2
 6757              		.p2align 4,,15
 6758              		.globl	_ZNK12Fl_Menu_Item13test_shortcutEv
 6760              	_ZNK12Fl_Menu_Item13test_shortcutEv:
 6761              	.LFB590:
1049:fltk-1.3.4-1/src/Fl_Menu.cxx ****   39              		.weak	_ZN8Fl_Group8as_groupEv
1050:fltk-1.3.4-1/src/Fl_Menu.cxx ****   41              	_ZN8Fl_Group8as_groupEv:
1051:fltk-1.3.4-1/src/Fl_Menu.cxx ****   42              	.LFB250:
1052:fltk-1.3.4-1/src/Fl_Menu.cxx ****   43              		.file 2 "fltk-1.3.4-1/FL/Fl_Group.H"
1053:fltk-1.3.4-1/src/Fl_Menu.cxx ****    1:fltk-1.3.4-1/FL/Fl_Group.H **** //
1054:fltk-1.3.4-1/src/Fl_Menu.cxx ****    2:fltk-1.3.4-1/FL/Fl_Group.H **** // "$Id: Fl_Group.H 10446 2014-11-10 22:09:11Z AlbrechtS $"
1055:fltk-1.3.4-1/src/Fl_Menu.cxx ****    3:fltk-1.3.4-1/FL/Fl_Group.H **** //
1056:fltk-1.3.4-1/src/Fl_Menu.cxx ****    4:fltk-1.3.4-1/FL/Fl_Group.H **** // Group header file for the Fast Light Tool Kit (FLTK).
1057:fltk-1.3.4-1/src/Fl_Menu.cxx ****    5:fltk-1.3.4-1/FL/Fl_Group.H **** //
1058:fltk-1.3.4-1/src/Fl_Menu.cxx ****    6:fltk-1.3.4-1/FL/Fl_Group.H **** // Copyright 1998-2010 by Bill Spitzak and others.
1059:fltk-1.3.4-1/src/Fl_Menu.cxx ****    7:fltk-1.3.4-1/FL/Fl_Group.H **** //
1060:fltk-1.3.4-1/src/Fl_Menu.cxx ****    8:fltk-1.3.4-1/FL/Fl_Group.H **** // This library is free software. Distribution and use rights 
 6762              		.loc 4 1060 0
 6763              		.cfi_startproc
 6764              	.LVL828:
 6765              	.LBB971:
1061:fltk-1.3.4-1/src/Fl_Menu.cxx ****    9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with thi
1062:fltk-1.3.4-1/src/Fl_Menu.cxx ****   10:fltk-1.3.4-1/FL/Fl_Group.H **** // file is missing or damaged, see the license at:
1063:fltk-1.3.4-1/src/Fl_Menu.cxx ****   11:fltk-1.3.4-1/FL/Fl_Group.H **** //
 6766              		.loc 4 1063 0
 6767 0000 4885FF   		testq	%rdi, %rdi
 6768 0003 0F84CB00 		je	.L740
 6768      0000
 6769              	.LBE971:
1060:fltk-1.3.4-1/src/Fl_Menu.cxx ****    9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with thi
 6770              		.loc 4 1060 0
 6771 0009 4154     		pushq	%r12
 6772              		.cfi_def_cfa_offset 16
 6773              		.cfi_offset 12, -16
 6774 000b 55       		pushq	%rbp
 6775              		.cfi_def_cfa_offset 24
 6776              		.cfi_offset 6, -24
 6777              	.LBB986:
 6778              		.loc 4 1063 0
 6779 000c 31ED     		xorl	%ebp, %ebp
 6780              	.LBE986:
1060:fltk-1.3.4-1/src/Fl_Menu.cxx ****    9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with thi
 6781              		.loc 4 1060 0
 6782 000e 53       		pushq	%rbx
 6783              		.cfi_def_cfa_offset 32
 6784              		.cfi_offset 3, -32
 6785 000f 488B0F   		movq	(%rdi), %rcx
 6786 0012 4989FC   		movq	%rdi, %r12
 6787              	.LVL829:
 6788              	.LBB987:
 6789              	.LBB972:
 6790              		.loc 4 1063 0
 6791 0015 4885C9   		testq	%rcx, %rcx
 6792 0018 745F     		je	.L741
 6793              	.LVL830:
 6794 001a 660F1F44 		.p2align 4,,10
 6794      0000
 6795              		.p2align 3
 6796              	.L757:
 6797              	.LBB973:
1064:fltk-1.3.4-1/src/Fl_Menu.cxx ****   12:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/COPYING.php
 6798              		.loc 4 1064 0
 6799 0020 41F64424 		testb	$1, 32(%r12)
 6799      2001
 6800 0026 751B     		jne	.L752
 6801              	.LBB974:
1065:fltk-1.3.4-1/src/Fl_Menu.cxx ****   13:fltk-1.3.4-1/FL/Fl_Group.H **** //
1066:fltk-1.3.4-1/src/Fl_Menu.cxx ****   14:fltk-1.3.4-1/FL/Fl_Group.H **** // Please report all bugs and problems on the following page:
 6802              		.loc 4 1066 0
 6803 0028 418B7C24 		movl	8(%r12), %edi
 6803      08
 6804 002d E8000000 		call	_ZN2Fl13test_shortcutEj
 6804      00
 6805              	.LVL831:
 6806 0032 85C0     		testl	%eax, %eax
 6807 0034 0F859200 		jne	.L742
 6807      0000
 6808              	.LBB975:
1067:fltk-1.3.4-1/src/Fl_Menu.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
1068:fltk-1.3.4-1/src/Fl_Menu.cxx ****   16:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/str.php
1069:fltk-1.3.4-1/src/Fl_Menu.cxx ****   17:fltk-1.3.4-1/FL/Fl_Group.H **** //
 6809              		.loc 4 1069 0
 6810 003a 4885ED   		testq	%rbp, %rbp
 6811 003d 7459     		je	.L730
 6812              	.L753:
 6813 003f 498B0C24 		movq	(%r12), %rcx
 6814              	.L752:
 6815 0043 498D5C24 		leaq	56(%r12), %rbx
 6815      38
 6816              	.L729:
 6817              	.LVL832:
 6818 0048 4889DA   		movq	%rbx, %rdx
 6819              	.LBE975:
 6820              	.LBE974:
 6821              	.LBE973:
 6822              	.LBB980:
 6823              	.LBB981:
  75:fltk-1.3.4-1/src/Fl_Menu.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 6824              		.loc 4 75 0 discriminator 2
 6825 004b 31F6     		xorl	%esi, %esi
 6826 004d EB0B     		jmp	.L733
 6827              	.LVL833:
 6828 004f 90       		.p2align 4,,10
 6829              		.p2align 3
 6830              	.L756:
  81:fltk-1.3.4-1/src/Fl_Menu.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 6831              		.loc 4 81 0
 6832 0050 83C601   		addl	$1, %esi
 6833              	.LVL834:
 6834              	.L737:
 6835 0053 488B0A   		movq	(%rdx), %rcx
 6836 0056 4883C238 		addq	$56, %rdx
 6837              	.LVL835:
 6838              	.L733:
  77:fltk-1.3.4-1/src/Fl_Menu.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 6839              		.loc 4 77 0
 6840 005a 4885C9   		testq	%rcx, %rcx
 6841 005d 488D7AC8 		leaq	-56(%rdx), %rdi
 6842              	.LVL836:
 6843 0061 7425     		je	.L755
  80:fltk-1.3.4-1/src/Fl_Menu.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 6844              		.loc 4 80 0
 6845 0063 F642E840 		testb	$64, -24(%rdx)
 6846 0067 75E7     		jne	.L756
 6847              	.LVL837:
  76:fltk-1.3.4-1/src/Fl_Menu.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 6848              		.loc 4 76 0
 6849 0069 85F6     		testl	%esi, %esi
  83:fltk-1.3.4-1/src/Fl_Menu.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 6850              		.loc 4 83 0
 6851 006b 4989D4   		movq	%rdx, %r12
 6852              	.LVL838:
  76:fltk-1.3.4-1/src/Fl_Menu.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 6853              		.loc 4 76 0
 6854 006e 75E3     		jne	.L737
 6855              	.L758:
 6856 0070 488B4F38 		movq	56(%rdi), %rcx
 6857              	.LBE981:
 6858              	.LBE980:
1063:fltk-1.3.4-1/src/Fl_Menu.cxx ****   12:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/COPYING.php
 6859              		.loc 4 1063 0
 6860 0074 4885C9   		testq	%rcx, %rcx
 6861 0077 75A7     		jne	.L757
 6862              	.LVL839:
 6863              	.L741:
 6864 0079 4889E8   		movq	%rbp, %rax
 6865              	.LBE972:
 6866              	.LBE987:
1070:fltk-1.3.4-1/src/Fl_Menu.cxx ****   18:fltk-1.3.4-1/FL/Fl_Group.H **** 
1071:fltk-1.3.4-1/src/Fl_Menu.cxx ****   19:fltk-1.3.4-1/FL/Fl_Group.H **** /* \file
1072:fltk-1.3.4-1/src/Fl_Menu.cxx ****   20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
1073:fltk-1.3.4-1/src/Fl_Menu.cxx ****   21:fltk-1.3.4-1/FL/Fl_Group.H **** 
1074:fltk-1.3.4-1/src/Fl_Menu.cxx ****   22:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Group_H
1075:fltk-1.3.4-1/src/Fl_Menu.cxx ****   23:fltk-1.3.4-1/FL/Fl_Group.H **** #define Fl_Group_H
1076:fltk-1.3.4-1/src/Fl_Menu.cxx ****   24:fltk-1.3.4-1/FL/Fl_Group.H **** 
1077:fltk-1.3.4-1/src/Fl_Menu.cxx ****   25:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Widget_H
 6867              		.loc 4 1077 0
 6868 007c 5B       		popq	%rbx
 6869              		.cfi_remember_state
 6870              		.cfi_restore 3
 6871              		.cfi_def_cfa_offset 24
 6872 007d 5D       		popq	%rbp
 6873              		.cfi_restore 6
 6874              		.cfi_def_cfa_offset 16
 6875              	.LVL840:
 6876 007e 415C     		popq	%r12
 6877              		.cfi_restore 12
 6878              		.cfi_def_cfa_offset 8
 6879              	.LVL841:
 6880 0080 C3       		ret
 6881              	.LVL842:
 6882              		.p2align 4,,10
 6883 0081 0F1F8000 		.p2align 3
 6883      000000
 6884              	.L755:
 6885              		.cfi_restore_state
 6886              	.LBB988:
 6887              	.LBB985:
 6888              	.LBB983:
 6889              	.LBB982:
  78:fltk-1.3.4-1/src/Fl_Menu.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 6890              		.loc 4 78 0
 6891 0088 85F6     		testl	%esi, %esi
 6892 008a 74ED     		je	.L741
  79:fltk-1.3.4-1/src/Fl_Menu.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 6893              		.loc 4 79 0
 6894 008c 83EE01   		subl	$1, %esi
 6895              	.LVL843:
  83:fltk-1.3.4-1/src/Fl_Menu.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 6896              		.loc 4 83 0
 6897 008f 4989D4   		movq	%rdx, %r12
 6898              	.LVL844:
  76:fltk-1.3.4-1/src/Fl_Menu.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 6899              		.loc 4 76 0
 6900 0092 85F6     		testl	%esi, %esi
 6901 0094 75BD     		jne	.L737
 6902 0096 EBD8     		jmp	.L758
 6903              	.LVL845:
 6904              	.L730:
 6905 0098 418B4424 		movl	32(%r12), %eax
 6905      20
 6906              	.LVL846:
 6907              	.LBE982:
 6908              	.LBE983:
 6909              	.LBB984:
 6910              	.LBB979:
 6911              	.LBB978:
1069:fltk-1.3.4-1/src/Fl_Menu.cxx ****   18:fltk-1.3.4-1/FL/Fl_Group.H **** 
 6912              		.loc 4 1069 0 discriminator 1
 6913 009d A860     		testb	$96, %al
 6914 009f 749E     		je	.L753
 6915              	.LBB976:
1071:fltk-1.3.4-1/src/Fl_Menu.cxx ****   20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
 6916              		.loc 4 1071 0
 6917 00a1 A840     		testb	$64, %al
 6918 00a3 741B     		je	.L759
1071:fltk-1.3.4-1/src/Fl_Menu.cxx ****   20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
 6919              		.loc 4 1071 0 is_stmt 0 discriminator 1
 6920 00a5 498D5C24 		leaq	56(%r12), %rbx
 6920      38
 6921 00aa 4889DF   		movq	%rbx, %rdi
 6922              	.L732:
 6923              	.LVL847:
1072:fltk-1.3.4-1/src/Fl_Menu.cxx ****   21:fltk-1.3.4-1/FL/Fl_Group.H **** 
 6924              		.loc 4 1072 0 is_stmt 1 discriminator 4
 6925 00ad E8000000 		call	_ZNK12Fl_Menu_Item13test_shortcutEv
 6925      00
 6926              	.LVL848:
 6927 00b2 498B0C24 		movq	(%r12), %rcx
 6928 00b6 4889C5   		movq	%rax, %rbp
 6929              	.LVL849:
 6930              	.LBE976:
 6931 00b9 EB8D     		jmp	.L729
 6932              	.LVL850:
 6933 00bb 0F1F4400 		.p2align 4,,10
 6933      00
 6934              		.p2align 3
 6935              	.L759:
 6936              	.LBB977:
1071:fltk-1.3.4-1/src/Fl_Menu.cxx ****   20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
 6937              		.loc 4 1071 0 discriminator 2
 6938 00c0 498B7C24 		movq	24(%r12), %rdi
 6938      18
 6939 00c5 498D5C24 		leaq	56(%r12), %rbx
 6939      38
 6940 00ca EBE1     		jmp	.L732
 6941              	.LVL851:
 6942              	.L742:
 6943              	.LBE977:
 6944              	.LBE978:
 6945 00cc 4C89E0   		movq	%r12, %rax
 6946              	.LBE979:
 6947              	.LBE984:
 6948              	.LBE985:
 6949              	.LBE988:
 6950              		.loc 4 1077 0
 6951 00cf 5B       		popq	%rbx
 6952              		.cfi_restore 3
 6953              		.cfi_def_cfa_offset 24
 6954 00d0 5D       		popq	%rbp
 6955              		.cfi_restore 6
 6956              		.cfi_def_cfa_offset 16
 6957              	.LVL852:
 6958 00d1 415C     		popq	%r12
 6959              		.cfi_restore 12
 6960              		.cfi_def_cfa_offset 8
 6961              	.LVL853:
 6962 00d3 C3       		ret
 6963              	.LVL854:
 6964              	.L740:
1062:fltk-1.3.4-1/src/Fl_Menu.cxx ****   11:fltk-1.3.4-1/FL/Fl_Group.H **** //
 6965              		.loc 4 1062 0
 6966 00d4 31C0     		xorl	%eax, %eax
 6967              		.loc 4 1077 0
 6968 00d6 C3       		ret
 6969              		.cfi_endproc
 6970              	.LFE590:
 6972              		.section	.text.unlikely._ZNK12Fl_Menu_Item13test_shortcutEv
 6973              	.LCOLDE38:
 6974              		.section	.text._ZNK12Fl_Menu_Item13test_shortcutEv
 6975              	.LHOTE38:
 6976              		.section	.bss._ZZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_E5dummy,"aw",@nobits
 6977              		.align 32
 6980              	_ZZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_E5dummy:
 6981 0000 00000000 		.zero	56
 6981      00000000 
 6981      00000000 
 6981      00000000 
 6981      00000000 
 6982              		.weak	_ZTS9menutitle
 6983              		.section	.rodata._ZTS9menutitle,"aG",@progbits,_ZTS9menutitle,comdat
 6984              		.align 8
 6987              	_ZTS9menutitle:
 6988 0000 396D656E 		.string	"9menutitle"
 6988      75746974 
 6988      6C6500
 6989              		.weak	_ZTI9menutitle
 6990              		.section	.rodata._ZTI9menutitle,"aG",@progbits,_ZTI9menutitle,comdat
 6991              		.align 8
 6994              	_ZTI9menutitle:
 6995 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 6995      00000000 
 6996 0008 00000000 		.quad	_ZTS9menutitle
 6996      00000000 
 6997 0010 00000000 		.quad	_ZTI14Fl_Menu_Window
 6997      00000000 
 6998              		.weak	_ZTS10menuwindow
 6999              		.section	.rodata._ZTS10menuwindow,"aG",@progbits,_ZTS10menuwindow,comdat
 7000              		.align 8
 7003              	_ZTS10menuwindow:
 7004 0000 31306D65 		.string	"10menuwindow"
 7004      6E757769 
 7004      6E646F77 
 7004      00
 7005              		.weak	_ZTI10menuwindow
 7006              		.section	.rodata._ZTI10menuwindow,"aG",@progbits,_ZTI10menuwindow,comdat
 7007              		.align 8
 7010              	_ZTI10menuwindow:
 7011 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 7011      00000000 
 7012 0008 00000000 		.quad	_ZTS10menuwindow
 7012      00000000 
 7013 0010 00000000 		.quad	_ZTI14Fl_Menu_Window
 7013      00000000 
 7014              		.weak	_ZTV9menutitle
 7015              		.section	.rodata._ZTV9menutitle,"aG",@progbits,_ZTV9menutitle,comdat
 7016              		.align 8
 7019              	_ZTV9menutitle:
 7020 0000 00000000 		.quad	0
 7020      00000000 
 7021 0008 00000000 		.quad	_ZTI9menutitle
 7021      00000000 
 7022 0010 00000000 		.quad	_ZN9menutitleD1Ev
 7022      00000000 
 7023 0018 00000000 		.quad	_ZN9menutitleD0Ev
 7023      00000000 
 7024 0020 00000000 		.quad	_ZN9menutitle4drawEv
 7024      00000000 
 7025 0028 00000000 		.quad	_ZN9Fl_Window6handleEi
 7025      00000000 
 7026 0030 00000000 		.quad	_ZN9Fl_Window6resizeEiiii
 7026      00000000 
 7027 0038 00000000 		.quad	_ZN14Fl_Menu_Window4showEv
 7027      00000000 
 7028 0040 00000000 		.quad	_ZN14Fl_Menu_Window4hideEv
 7028      00000000 
 7029 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 7029      00000000 
 7030 0050 00000000 		.quad	_ZN9Fl_Window9as_windowEv
 7030      00000000 
 7031 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 7031      00000000 
 7032 0060 00000000 		.quad	_ZN14Fl_Menu_Window5flushEv
 7032      00000000 
 7033              		.weak	_ZTV10menuwindow
 7034              		.section	.rodata._ZTV10menuwindow,"aG",@progbits,_ZTV10menuwindow,comdat
 7035              		.align 8
 7038              	_ZTV10menuwindow:
 7039 0000 00000000 		.quad	0
 7039      00000000 
 7040 0008 00000000 		.quad	_ZTI10menuwindow
 7040      00000000 
 7041 0010 00000000 		.quad	_ZN10menuwindowD1Ev
 7041      00000000 
 7042 0018 00000000 		.quad	_ZN10menuwindowD0Ev
 7042      00000000 
 7043 0020 00000000 		.quad	_ZN10menuwindow4drawEv
 7043      00000000 
 7044 0028 00000000 		.quad	_ZN10menuwindow6handleEi
 7044      00000000 
 7045 0030 00000000 		.quad	_ZN9Fl_Window6resizeEiiii
 7045      00000000 
 7046 0038 00000000 		.quad	_ZN14Fl_Menu_Window4showEv
 7046      00000000 
 7047 0040 00000000 		.quad	_ZN14Fl_Menu_Window4hideEv
 7047      00000000 
 7048 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 7048      00000000 
 7049 0050 00000000 		.quad	_ZN9Fl_Window9as_windowEv
 7049      00000000 
 7050 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 7050      00000000 
 7051 0060 00000000 		.quad	_ZN14Fl_Menu_Window5flushEv
 7051      00000000 
 7052              		.section	.bss._ZL1p,"aw",@nobits
 7053              		.align 8
 7056              	_ZL1p:
 7057 0000 00000000 		.zero	8
 7057      00000000 
 7058              		.section	.bss._ZL6button,"aw",@nobits
 7059              		.align 8
 7062              	_ZL6button:
 7063 0000 00000000 		.zero	8
 7063      00000000 
 7064              		.section	.rodata.cst8,"aM",@progbits,8
 7065              		.align 8
 7066              	.LC14:
 7067 0000 00000000 		.long	0
 7068 0004 00807640 		.long	1081507840
 7069              		.section	.rodata.cst4,"aM",@progbits,4
 7070              		.align 4
 7071              	.LC16:
 7072 0000 CDCC4C3E 		.long	1045220557
 7073              		.align 4
 7074              	.LC17:
 7075 0004 0000003F 		.long	1056964608
 7076              		.section	.rodata.cst8
 7077              		.align 8
 7078              	.LC18:
 7079 0008 00000000 		.long	0
 7080 000c 00806640 		.long	1080459264
 7081              		.align 8
 7082              	.LC19:
 7083 0010 00000000 		.long	0
 7084 0014 00004E40 		.long	1078853632
 7085              		.text
 7086              	.Letext0:
 7087              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
 7088              	.Letext_cold0:
 7089              		.file 10 "fltk-1.3.4-1/FL/fl_types.h"
 7090              		.file 11 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 7091              		.file 12 "/usr/include/x86_64-linux-gnu/bits/types.h"
 7092              		.file 13 "/usr/include/libio.h"
 7093              		.file 14 "fltk-1.3.4-1/FL/Enumerations.H"
 7094              		.file 15 "fltk-1.3.4-1/FL/Fl_Image.H"
 7095              		.file 16 "fltk-1.3.4-1/FL/Fl_Device.H"
 7096              		.file 17 "fltk-1.3.4-1/FL/Fl_Menu_Window.H"
 7097              		.file 18 "/usr/include/stdio.h"
 7098              		.file 19 "/usr/include/string.h"
 7099              		.file 20 "fltk-1.3.4-1/FL/fl_utf8.h"
 7100              		.file 21 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Menu.cxx
     /tmp/ccG1iYPH.s:16     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccG1iYPH.s:41     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccG1iYPH.s:66     .text._ZN9Fl_Window9as_windowEv:0000000000000000 _ZN9Fl_Window9as_windowEv
     /tmp/ccG1iYPH.s:91     .text._ZN10menuwindowD2Ev:0000000000000000 _ZN10menuwindowD2Ev
     /tmp/ccG1iYPH.s:7038   .rodata._ZTV10menuwindow:0000000000000000 _ZTV10menuwindow
     /tmp/ccG1iYPH.s:91     .text._ZN10menuwindowD2Ev:0000000000000000 _ZN10menuwindowD1Ev
     /tmp/ccG1iYPH.s:146    .text._ZN9menutitleD2Ev:0000000000000000 _ZN9menutitleD2Ev
     /tmp/ccG1iYPH.s:7019   .rodata._ZTV9menutitle:0000000000000000 _ZTV9menutitle
     /tmp/ccG1iYPH.s:146    .text._ZN9menutitleD2Ev:0000000000000000 _ZN9menutitleD1Ev
     /tmp/ccG1iYPH.s:175    .text._ZN9menutitleD0Ev:0000000000000000 _ZN9menutitleD0Ev
     /tmp/ccG1iYPH.s:214    .text._ZN10menuwindowD0Ev:0000000000000000 _ZN10menuwindowD0Ev
     /tmp/ccG1iYPH.s:249    .text._ZNK12Fl_Menu_Item4sizeEv:0000000000000000 _ZNK12Fl_Menu_Item4sizeEv
     /tmp/ccG1iYPH.s:312    .text._ZNK12Fl_Menu_Item4nextEi:0000000000000000 _ZNK12Fl_Menu_Item4nextEi
     /tmp/ccG1iYPH.s:443    .text._ZL7forwardi:0000000000000000 _ZL7forwardi
     /tmp/ccG1iYPH.s:7056   .bss._ZL1p:0000000000000000 _ZL1p
     /tmp/ccG1iYPH.s:556    .text._ZL8backwardi:0000000000000000 _ZL8backwardi
     /tmp/ccG1iYPH.s:658    .text._ZL7setitemii:0000000000000000 _ZL7setitemii
     /tmp/ccG1iYPH.s:705    .text._ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_:0000000000000000 _ZNK12Fl_Menu_Item7measureEPiPK8Fl_Menu_
     /tmp/ccG1iYPH.s:854    .text._ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i:0000000000000000 _ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
     /tmp/ccG1iYPH.s:1943   .text._ZN9menutitle4drawEv:0000000000000000 _ZN9menutitle4drawEv
     /tmp/ccG1iYPH.s:7062   .bss._ZL6button:0000000000000000 _ZL6button
     /tmp/ccG1iYPH.s:1983   .text._ZN9menutitleC2EiiiiPK12Fl_Menu_Item:0000000000000000 _ZN9menutitleC2EiiiiPK12Fl_Menu_Item
     /tmp/ccG1iYPH.s:1983   .text._ZN9menutitleC2EiiiiPK12Fl_Menu_Item:0000000000000000 _ZN9menutitleC1EiiiiPK12Fl_Menu_Item
     /tmp/ccG1iYPH.s:2095   .text._ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii:0000000000000000 _ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii
     /tmp/ccG1iYPH.s:2095   .text._ZN10menuwindowC2EPK12Fl_Menu_ItemiiiiS2_S2_iii:0000000000000000 _ZN10menuwindowC1EPK12Fl_Menu_ItemiiiiS2_S2_iii
     /tmp/ccG1iYPH.s:2960   .text._ZN10menuwindow8positionEii:0000000000000000 _ZN10menuwindow8positionEii
     /tmp/ccG1iYPH.s:3046   .text._ZN10menuwindow10autoscrollEi:0000000000000000 _ZN10menuwindow10autoscrollEi
     /tmp/ccG1iYPH.s:3187   .text._ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii:0000000000000000 _ZN10menuwindow9drawentryEPK12Fl_Menu_Itemii
     /tmp/ccG1iYPH.s:3754   .text._ZN10menuwindow4drawEv:0000000000000000 _ZN10menuwindow4drawEv
     /tmp/ccG1iYPH.s:3918   .text._ZN10menuwindow12set_selectedEi:0000000000000000 _ZN10menuwindow12set_selectedEi
     /tmp/ccG1iYPH.s:3952   .text._ZN10menuwindow13find_selectedEii:0000000000000000 _ZN10menuwindow13find_selectedEii
     /tmp/ccG1iYPH.s:4191   .text._ZN10menuwindow6titlexEi:0000000000000000 _ZN10menuwindow6titlexEi
     /tmp/ccG1iYPH.s:4284   .text._ZN10menuwindow9is_insideEii:0000000000000000 _ZN10menuwindow9is_insideEii
     /tmp/ccG1iYPH.s:4413   .text._ZN9menustate9is_insideEii:0000000000000000 _ZN9menustate9is_insideEii
     /tmp/ccG1iYPH.s:4519   .text._ZNK12Fl_Menu_Item13find_shortcutEPib:0000000000000000 _ZNK12Fl_Menu_Item13find_shortcutEPib
     /tmp/ccG1iYPH.s:4766   .text._ZN10menuwindow17early_hide_handleEi:0000000000000000 _ZN10menuwindow17early_hide_handleEi
     /tmp/ccG1iYPH.s:5493   .text._ZN10menuwindow6handleEi:0000000000000000 _ZN10menuwindow6handleEi
     /tmp/ccG1iYPH.s:5647   .text._ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i:0000000000000000 _ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i
     /tmp/ccG1iYPH.s:6712   .text._ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_:0000000000000000 _ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_
     /tmp/ccG1iYPH.s:6980   .bss._ZZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_E5dummy:0000000000000000 _ZZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_E5dummy
     /tmp/ccG1iYPH.s:6760   .text._ZNK12Fl_Menu_Item13test_shortcutEv:0000000000000000 _ZNK12Fl_Menu_Item13test_shortcutEv
     /tmp/ccG1iYPH.s:6987   .rodata._ZTS9menutitle:0000000000000000 _ZTS9menutitle
     /tmp/ccG1iYPH.s:6994   .rodata._ZTI9menutitle:0000000000000000 _ZTI9menutitle
     /tmp/ccG1iYPH.s:7003   .rodata._ZTS10menuwindow:0000000000000000 _ZTS10menuwindow
     /tmp/ccG1iYPH.s:7010   .rodata._ZTI10menuwindow:0000000000000000 _ZTI10menuwindow
     /tmp/ccG1iYPH.s:7066   .rodata.cst8:0000000000000000 .LC14
     /tmp/ccG1iYPH.s:7071   .rodata.cst4:0000000000000000 .LC16
     /tmp/ccG1iYPH.s:7074   .rodata.cst4:0000000000000004 .LC17
     /tmp/ccG1iYPH.s:7078   .rodata.cst8:0000000000000008 .LC18
     /tmp/ccG1iYPH.s:7082   .rodata.cst8:0000000000000010 .LC19
                           .group:0000000000000000 _ZN9menutitleD5Ev
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_ZN14Fl_Menu_Window4hideEv
_ZN14Fl_Menu_WindowD2Ev
_ZdlPv
fl_draw_shortcut
_ZNK8Fl_Label7measureERiS0_
FL_NORMAL_SIZE
__stack_chk_fail
_Z11fl_contrastjj
_Z11fl_draw_box10Fl_Boxtypeiiiij
_Z25fl_define_FL_ROUND_UP_BOXv
_ZNK8Fl_Label4drawEiiiij
_Z11fl_inactivej
_ZN2Fl7scheme_E
fl_graphics_driver
_ZN2Fl6box_dwE10Fl_Boxtype
_Z16fl_color_averagejjf
_ZN14Fl_Menu_WindowC2EiiiiPKc
_ZN8Fl_Group3endEv
_ZN2Fl9get_mouseERiS0_
_ZN2Fl16screen_work_areaERiS0_S0_S0_ii
_Z17fl_shortcut_labeljPPKc
strlen
fl_utf_nb_char
_Z8fl_widthPKc
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_Znwm
_ZN2Fl6box_dhE10Fl_Boxtype
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
malloc
memcpy
_Z7fl_drawPKciiiijP8Fl_Imagei
free
_ZN9Fl_Widget6damageEh
_ZNK9Fl_Window6x_rootEv
_ZNK9Fl_Window6y_rootEv
_ZN2Fl13test_shortcutEj
_ZN9Fl_Widget13test_shortcutEPKcb
_ZN2Fl8e_x_rootE
_ZN2Fl8e_y_rootE
_ZN2Fl8e_keysymE
_ZN9Fl_Window6handleEi
_ZN2Fl10e_is_clickE
_ZN2Fl7e_stateE
_ZN8Fl_Group7currentEPS_
_ZNK9Fl_Widget6windowEv
_ZN2Fl4grabEP9Fl_Window
_ZN2Fl4waitEv
_ZN2Fl3e_xE
_ZN2Fl3e_yE
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI14Fl_Menu_Window
_ZN9Fl_Window6resizeEiiii
_ZN14Fl_Menu_Window4showEv
_ZN14Fl_Menu_Window5flushEv
