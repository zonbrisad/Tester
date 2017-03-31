   1              		.file	"Fl_Scroll.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  14              		.weak	_ZN9Fl_Widget9as_windowEv
  16              	_ZN9Fl_Widget9as_windowEv:
  17              	.LFB254:
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
  19              		.loc 1 1000 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 1000 0
  23 0000 31C0     		xorl	%eax, %eax
  24 0002 C3       		ret
  25              		.cfi_endproc
  26              	.LFE254:
  28              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  29              	.LCOLDE0:
  30              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  31              	.LHOTE0:
  32              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  33              		.align 2
  34              	.LCOLDB1:
  35              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  36              	.LHOTB1:
  37              		.align 2
  38              		.p2align 4,,15
  39              		.weak	_ZN9Fl_Widget12as_gl_windowEv
  41              	_ZN9Fl_Widget12as_gl_windowEv:
  42              	.LFB255:
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
  43              		.loc 1 1012 0
  44              		.cfi_startproc
  45              	.LVL1:
  46              		.loc 1 1012 0
  47 0000 31C0     		xorl	%eax, %eax
  48 0002 C3       		ret
  49              		.cfi_endproc
  50              	.LFE255:
  52              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  53              	.LCOLDE1:
  54              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  55              	.LHOTE1:
  56              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN8Fl_Group8as_groupEv
  65              	_ZN8Fl_Group8as_groupEv:
  66              	.LFB271:
  67              		.file 2 "fltk-1.3.4-1/FL/Fl_Group.H"
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
  68              		.loc 2 179 0
  69              		.cfi_startproc
  70              	.LVL2:
  71              		.loc 2 179 0
  72 0000 4889F8   		movq	%rdi, %rax
  73 0003 C3       		ret
  74              		.cfi_endproc
  75              	.LFE271:
  77              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  78              	.LCOLDE2:
  79              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  80              	.LHOTE2:
  81              		.section	.text.unlikely._ZN9Fl_Scroll9draw_clipEPviiii,"ax",@progbits
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZN9Fl_Scroll9draw_clipEPviiii,"ax",@progbits
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.globl	_ZN9Fl_Scroll9draw_clipEPviiii
  90              	_ZN9Fl_Scroll9draw_clipEPviiii:
  91              	.LFB499:
  92              		.file 3 "fltk-1.3.4-1/src/Fl_Scroll.cxx"
   1:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    1              		.file	"Fl_Scroll.cxx"
   2:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   17              	.LFB254:
  17:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  93              		.loc 3 52 0
  94              		.cfi_startproc
  95              	.LVL3:
  96 0000 4157     		pushq	%r15
  97              		.cfi_def_cfa_offset 16
  98              		.cfi_offset 15, -16
  99 0002 4156     		pushq	%r14
 100              		.cfi_def_cfa_offset 24
 101              		.cfi_offset 14, -24
 102 0004 4589C6   		movl	%r8d, %r14d
 103 0007 4155     		pushq	%r13
 104              		.cfi_def_cfa_offset 32
 105              		.cfi_offset 13, -32
 106 0009 4154     		pushq	%r12
 107              		.cfi_def_cfa_offset 40
 108              		.cfi_offset 12, -40
 109 000b 4989FC   		movq	%rdi, %r12
 110 000e 55       		pushq	%rbp
 111              		.cfi_def_cfa_offset 48
 112              		.cfi_offset 6, -48
 113 000f 53       		pushq	%rbx
 114              		.cfi_def_cfa_offset 56
 115              		.cfi_offset 3, -56
 116 0010 89D5     		movl	%edx, %ebp
 117 0012 89F3     		movl	%esi, %ebx
 118              	.LVL4:
 119 0014 4189CD   		movl	%ecx, %r13d
 120              	.LVL5:
 121 0017 4883EC08 		subq	$8, %rsp
 122              		.cfi_def_cfa_offset 64
 123              	.LBB324:
 124              	.LBB325:
 125              		.file 4 "fltk-1.3.4-1/FL/fl_draw.H"
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
 126              		.loc 4 82 0
 127 001b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 127      000000
 128              	.LVL6:
 129 0022 488B07   		movq	(%rdi), %rax
 130 0025 FF905001 		call	*336(%rax)
 130      0000
 131              	.LVL7:
 132 002b 410FB644 		movzbl	110(%r12), %eax
 132      246E
 133              	.LVL8:
 134 0031 3C21     		cmpb	$33, %al
 135 0033 7714     		ja	.L7
 136 0035 48BA3133 		movabsq	$13154595633, %rdx
 136      13100300 
 136      0000
 137 003f 480FA3C2 		btq	%rax, %rdx
 138 0043 0F829700 		jc	.L18
 138      0000
 139              	.L7:
 140              	.LVL9:
 141              	.LBE325:
 142              	.LBE324:
 143              	.LBB326:
 144              	.LBB327:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 145              		.loc 4 52 0
 146 0049 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 146      000000
 147 0050 418B7424 		movl	100(%r12), %esi
 147      64
 148 0055 488B07   		movq	(%rdi), %rax
 149 0058 FF908800 		call	*136(%rax)
 149      0000
 150              	.LVL10:
 151              	.LBE327:
 152              	.LBE326:
 153              	.LBB328:
 154              	.LBB329:
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
 155              		.loc 4 206 0
 156 005e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 156      000000
 157 0065 4589F0   		movl	%r14d, %r8d
 158 0068 4489E9   		movl	%r13d, %ecx
 159 006b 89EA     		movl	%ebp, %edx
 160 006d 89DE     		movl	%ebx, %esi
 161 006f 488B07   		movq	(%rdi), %rax
 162 0072 FF5020   		call	*32(%rax)
 163              	.LVL11:
 164              	.L6:
 165              	.LBE329:
 166              	.LBE328:
  53:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 167              		.loc 3 83 0
 168 0075 4C89E7   		movq	%r12, %rdi
 169 0078 E8000000 		call	_ZNK8Fl_Group5arrayEv
 169      00
 170              	.LVL12:
 171 007d 4889C3   		movq	%rax, %rbx
 172              	.LVL13:
 173 0080 418B8424 		movl	144(%r12), %eax
 173      90000000 
 174              	.LVL14:
 175 0088 8D50FD   		leal	-3(%rax), %edx
 176              	.LBB330:
  84:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 177              		.loc 3 84 0
 178 008b 83F802   		cmpl	$2, %eax
 179 008e 4C8D6CD3 		leaq	8(%rbx,%rdx,8), %r13
 179      08
 180              	.LVL15:
 181 0093 7426     		je	.L11
 182              	.LVL16:
 183              		.p2align 4,,10
 184 0095 0F1F00   		.p2align 3
 185              	.L10:
 186              	.LBB331:
  85:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 187              		.loc 3 85 0
 188 0098 4883C308 		addq	$8, %rbx
 189              	.LVL17:
 190 009c 488B6BF8 		movq	-8(%rbx), %rbp
 191              	.LVL18:
  86:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 192              		.loc 3 86 0
 193 00a0 4C89E7   		movq	%r12, %rdi
 194 00a3 4889EE   		movq	%rbp, %rsi
 195 00a6 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 195      00
 196              	.LVL19:
  87:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 197              		.loc 3 87 0
 198 00ab 4889EE   		movq	%rbp, %rsi
 199 00ae 4C89E7   		movq	%r12, %rdi
 200 00b1 E8000000 		call	_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
 200      00
 201              	.LVL20:
 202              	.LBE331:
  84:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 203              		.loc 3 84 0
 204 00b6 4939DD   		cmpq	%rbx, %r13
 205 00b9 75DD     		jne	.L10
 206              	.LVL21:
 207              	.L11:
 208              	.LBE330:
 209              	.LBB332:
 210              	.LBB333:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 211              		.loc 4 103 0
 212 00bb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 212      000000
 213 00c2 488B07   		movq	(%rdi), %rax
 214 00c5 488B8070 		movq	368(%rax), %rax
 214      010000
 215              	.LBE333:
 216              	.LBE332:
  88:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 217              		.loc 3 90 0
 218 00cc 4883C408 		addq	$8, %rsp
 219              		.cfi_remember_state
 220              		.cfi_def_cfa_offset 56
 221 00d0 5B       		popq	%rbx
 222              		.cfi_def_cfa_offset 48
 223              	.LVL22:
 224 00d1 5D       		popq	%rbp
 225              		.cfi_def_cfa_offset 40
 226 00d2 415C     		popq	%r12
 227              		.cfi_def_cfa_offset 32
 228              	.LVL23:
 229 00d4 415D     		popq	%r13
 230              		.cfi_def_cfa_offset 24
 231 00d6 415E     		popq	%r14
 232              		.cfi_def_cfa_offset 16
 233              	.LVL24:
 234 00d8 415F     		popq	%r15
 235              		.cfi_def_cfa_offset 8
 236              	.LBB335:
 237              	.LBB334:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 238              		.loc 4 103 0
 239 00da FFE0     		jmp	*%rax
 240              	.LVL25:
 241 00dc 0F1F4000 		.p2align 4,,10
 242              		.p2align 3
 243              	.L18:
 244              		.cfi_restore_state
 245 00e0 4D8B7C24 		movq	8(%r12), %r15
 245      08
 246              	.LVL26:
 247              	.LBE334:
 248              	.LBE335:
  70:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 249              		.loc 3 70 0
 250 00e5 4C89E7   		movq	%r12, %rdi
 251 00e8 E8000000 		call	_ZNK9Fl_Widget6windowEv
 251      00
 252              	.LVL27:
 253 00ed 4C39F8   		cmpq	%r15, %rax
 254 00f0 0F8553FF 		jne	.L7
 254      FFFF
  70:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 255              		.loc 3 70 0 is_stmt 0 discriminator 1
 256 00f6 488B3D00 		movq	_ZN2Fl10scheme_bg_E(%rip), %rdi
 256      000000
 257 00fd 4885FF   		testq	%rdi, %rdi
 258 0100 0F8443FF 		je	.L7
 258      FFFF
 259 0106 488B4728 		movq	40(%rdi), %rax
 260              	.LVL28:
  74:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261              		.loc 3 74 0 is_stmt 1
 262 010a 4883EC08 		subq	$8, %rsp
 263              		.cfi_def_cfa_offset 72
 264 010e 4531C9   		xorl	%r9d, %r9d
 265 0111 448B400C 		movl	12(%rax), %r8d
 266              	.LVL29:
 267 0115 8B7008   		movl	8(%rax), %esi
 268              	.LVL30:
 269 0118 89E8     		movl	%ebp, %eax
 270 011a 99       		cltd
 271 011b 41F7F8   		idivl	%r8d
 272 011e 89D8     		movl	%ebx, %eax
 273 0120 418D4C35 		leal	0(%r13,%rsi), %ecx
 273      00
 274 0125 4501F0   		addl	%r14d, %r8d
 275 0128 29D5     		subl	%edx, %ebp
 276              	.LVL31:
 277 012a 99       		cltd
 278 012b F7FE     		idivl	%esi
 279 012d 488B07   		movq	(%rdi), %rax
 280 0130 89DE     		movl	%ebx, %esi
 281 0132 6A00     		pushq	$0
 282              		.cfi_def_cfa_offset 80
 283 0134 29D6     		subl	%edx, %esi
 284 0136 89EA     		movl	%ebp, %edx
 285 0138 FF5038   		call	*56(%rax)
 286              	.LVL32:
  75:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 287              		.loc 3 75 0
 288 013b 58       		popq	%rax
 289              		.cfi_def_cfa_offset 72
 290 013c 5A       		popq	%rdx
 291              		.cfi_def_cfa_offset 64
 292 013d E933FFFF 		jmp	.L6
 292      FF
 293              		.cfi_endproc
 294              	.LFE499:
 296              		.section	.text.unlikely._ZN9Fl_Scroll9draw_clipEPviiii
 297              	.LCOLDE3:
 298              		.section	.text._ZN9Fl_Scroll9draw_clipEPviiii
 299              	.LHOTE3:
 300              		.section	.text.unlikely._ZN9Fl_Scroll5clearEv,"ax",@progbits
 301              		.align 2
 302              	.LCOLDB4:
 303              		.section	.text._ZN9Fl_Scroll5clearEv,"ax",@progbits
 304              	.LHOTB4:
 305              		.align 2
 306              		.p2align 4,,15
 307              		.globl	_ZN9Fl_Scroll5clearEv
 309              	_ZN9Fl_Scroll5clearEv:
 310              	.LFB497:
  25:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
 311              		.loc 3 25 0
 312              		.cfi_startproc
 313              	.LVL33:
 314 0000 4154     		pushq	%r12
 315              		.cfi_def_cfa_offset 16
 316              		.cfi_offset 12, -16
 317 0002 55       		pushq	%rbp
 318              		.cfi_def_cfa_offset 24
 319              		.cfi_offset 6, -24
  31:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 320              		.loc 3 31 0
 321 0003 488DAFB8 		leaq	184(%rdi), %rbp
 321      000000
  25:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
 322              		.loc 3 25 0
 323 000a 53       		pushq	%rbx
 324              		.cfi_def_cfa_offset 32
 325              		.cfi_offset 3, -32
  25:fltk-1.3.4-1/src/Fl_Scroll.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
 326              		.loc 3 25 0
 327 000b 4889FB   		movq	%rdi, %rbx
  32:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 328              		.loc 3 32 0
 329 000e 4C8DA370 		leaq	368(%rbx), %r12
 329      010000
  31:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 330              		.loc 3 31 0
 331 0015 4889EE   		movq	%rbp, %rsi
 332 0018 E8000000 		call	_ZN8Fl_Group6removeER9Fl_Widget
 332      00
 333              	.LVL34:
  32:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 334              		.loc 3 32 0
 335 001d 4C89E6   		movq	%r12, %rsi
 336 0020 4889DF   		movq	%rbx, %rdi
 337 0023 E8000000 		call	_ZN8Fl_Group6removeER9Fl_Widget
 337      00
 338              	.LVL35:
  33:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 339              		.loc 3 33 0
 340 0028 4889DF   		movq	%rbx, %rdi
 341 002b E8000000 		call	_ZN8Fl_Group5clearEv
 341      00
 342              	.LVL36:
  34:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 343              		.loc 3 34 0
 344 0030 4C89E6   		movq	%r12, %rsi
 345 0033 4889DF   		movq	%rbx, %rdi
 346 0036 E8000000 		call	_ZN8Fl_Group3addER9Fl_Widget
 346      00
 347              	.LVL37:
  35:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
 348              		.loc 3 35 0
 349 003b 4889EE   		movq	%rbp, %rsi
 350 003e 4889DF   		movq	%rbx, %rdi
  36:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 351              		.loc 3 36 0
 352 0041 5B       		popq	%rbx
 353              		.cfi_def_cfa_offset 24
 354              	.LVL38:
 355 0042 5D       		popq	%rbp
 356              		.cfi_def_cfa_offset 16
 357 0043 415C     		popq	%r12
 358              		.cfi_def_cfa_offset 8
  35:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
 359              		.loc 3 35 0
 360 0045 E9000000 		jmp	_ZN8Fl_Group3addER9Fl_Widget
 360      00
 361              	.LVL39:
 362              		.cfi_endproc
 363              	.LFE497:
 365              		.section	.text.unlikely._ZN9Fl_Scroll5clearEv
 366              	.LCOLDE4:
 367              		.section	.text._ZN9Fl_Scroll5clearEv
 368              	.LHOTE4:
 369              		.section	.text.unlikely._ZN9Fl_Scroll19fix_scrollbar_orderEv,"ax",@progbits
 370              		.align 2
 371              	.LCOLDB5:
 372              		.section	.text._ZN9Fl_Scroll19fix_scrollbar_orderEv,"ax",@progbits
 373              	.LHOTB5:
 374              		.align 2
 375              		.p2align 4,,15
 376              		.globl	_ZN9Fl_Scroll19fix_scrollbar_orderEv
 378              	_ZN9Fl_Scroll19fix_scrollbar_orderEv:
 379              	.LFB498:
  39:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 380              		.loc 3 39 0
 381              		.cfi_startproc
 382              	.LVL40:
 383 0000 53       		pushq	%rbx
 384              		.cfi_def_cfa_offset 16
 385              		.cfi_offset 3, -16
  39:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 386              		.loc 3 39 0
 387 0001 4889FB   		movq	%rdi, %rbx
  40:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 388              		.loc 3 40 0
 389 0004 E8000000 		call	_ZNK8Fl_Group5arrayEv
 389      00
 390              	.LVL41:
 391 0009 48638B90 		movslq	144(%rbx), %rcx
 391      000000
 392              	.LVL42:
 393              	.LBB336:
  41:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 394              		.loc 3 41 0
 395 0010 4C8D8BB8 		leaq	184(%rbx), %r9
 395      000000
 396 0017 4C394CC8 		cmpq	%r9, -8(%rax,%rcx,8)
 396      F8
 397 001c 7453     		je	.L21
 398 001e 4889CA   		movq	%rcx, %rdx
 399              	.LVL43:
 400              	.LBB337:
  42:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 401              		.loc 3 42 0 discriminator 1
 402 0021 31FF     		xorl	%edi, %edi
 403 0023 31C9     		xorl	%ecx, %ecx
 404 0025 85D2     		testl	%edx, %edx
 405 0027 4C8D9370 		leaq	368(%rbx), %r10
 405      010000
 406 002e 4889C6   		movq	%rax, %rsi
 407 0031 7E40     		jle	.L35
 408              	.LVL44:
 409              		.p2align 4,,10
 410 0033 0F1F4400 		.p2align 3
 410      00
 411              	.L26:
  43:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 412              		.loc 3 43 0
 413 0038 488B16   		movq	(%rsi), %rdx
 414 003b 4C39D2   		cmpq	%r10, %rdx
 415 003e 740F     		je	.L25
 416 0040 4939D1   		cmpq	%rdx, %r9
 417 0043 740A     		je	.L25
 418              	.LVL45:
  43:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 419              		.loc 3 43 0 is_stmt 0 discriminator 2
 420 0045 4C63C7   		movslq	%edi, %r8
 421 0048 83C701   		addl	$1, %edi
 422              	.LVL46:
 423 004b 4A8914C0 		movq	%rdx, (%rax,%r8,8)
 424              	.L25:
  42:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425              		.loc 3 42 0 is_stmt 1 discriminator 2
 426 004f 83C101   		addl	$1, %ecx
 427              	.LVL47:
 428 0052 4883C608 		addq	$8, %rsi
 429 0056 3B8B9000 		cmpl	144(%rbx), %ecx
 429      0000
 430 005c 7CDA     		jl	.L26
 431 005e 4863FF   		movslq	%edi, %rdi
 432 0061 48C1E703 		salq	$3, %rdi
 433              	.LVL48:
 434 0065 488D5708 		leaq	8(%rdi), %rdx
 435              	.LVL49:
 436              	.L24:
  44:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 437              		.loc 3 44 0
 438 0069 4C891438 		movq	%r10, (%rax,%rdi)
  45:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 439              		.loc 3 45 0
 440 006d 4C890C10 		movq	%r9, (%rax,%rdx)
 441              	.LVL50:
 442              	.L21:
 443              	.LBE337:
 444              	.LBE336:
  47:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 445              		.loc 3 47 0
 446 0071 5B       		popq	%rbx
 447              		.cfi_remember_state
 448              		.cfi_def_cfa_offset 8
 449              	.LVL51:
 450 0072 C3       		ret
 451              	.LVL52:
 452              	.L35:
 453              		.cfi_restore_state
 454              	.LBB339:
 455              	.LBB338:
  42:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456              		.loc 3 42 0
 457 0073 BA080000 		movl	$8, %edx
 457      00
 458 0078 31FF     		xorl	%edi, %edi
 459 007a EBED     		jmp	.L24
 460              	.LBE338:
 461              	.LBE339:
 462              		.cfi_endproc
 463              	.LFE498:
 465              		.section	.text.unlikely._ZN9Fl_Scroll19fix_scrollbar_orderEv
 466              	.LCOLDE5:
 467              		.section	.text._ZN9Fl_Scroll19fix_scrollbar_orderEv
 468              	.LHOTE5:
 469              		.section	.text.unlikely._ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE,"ax",@progbits
 470              		.align 2
 471              	.LCOLDB6:
 472              		.section	.text._ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE,"ax",@progbits
 473              	.LHOTB6:
 474              		.align 2
 475              		.p2align 4,,15
 476              		.globl	_ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE
 478              	_ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE:
 479              	.LFB500:
  91:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 480              		.loc 3 102 0
 481              		.cfi_startproc
 482              	.LVL53:
 483 0000 4157     		pushq	%r15
 484              		.cfi_def_cfa_offset 16
 485              		.cfi_offset 15, -16
 486 0002 4156     		pushq	%r14
 487              		.cfi_def_cfa_offset 24
 488              		.cfi_offset 14, -24
 489 0004 4155     		pushq	%r13
 490              		.cfi_def_cfa_offset 32
 491              		.cfi_offset 13, -32
 492 0006 4154     		pushq	%r12
 493              		.cfi_def_cfa_offset 40
 494              		.cfi_offset 12, -40
 495 0008 55       		pushq	%rbp
 496              		.cfi_def_cfa_offset 48
 497              		.cfi_offset 6, -48
 498 0009 53       		pushq	%rbx
 499              		.cfi_def_cfa_offset 56
 500              		.cfi_offset 3, -56
 501 000a 4889FD   		movq	%rdi, %rbp
 502 000d 4889F3   		movq	%rsi, %rbx
 503 0010 4883EC08 		subq	$8, %rsp
 504              		.cfi_def_cfa_offset 64
 505 0014 448B6720 		movl	32(%rdi), %r12d
 506              	.LVL54:
 103:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 507              		.loc 3 105 0
 508 0018 0FB67F6E 		movzbl	110(%rdi), %edi
 509              	.LVL55:
 510 001c E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 510      00
 511              	.LVL56:
 512 0021 4101C4   		addl	%eax, %r12d
 513 0024 44896304 		movl	%r12d, 4(%rbx)
 106:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 514              		.loc 3 106 0
 515 0028 0FB67D6E 		movzbl	110(%rbp), %edi
 516 002c 448B6524 		movl	36(%rbp), %r12d
 517              	.LVL57:
 518 0030 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 518      00
 519              	.LVL58:
 520 0035 4101C4   		addl	%eax, %r12d
 521 0038 44896308 		movl	%r12d, 8(%rbx)
 107:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 522              		.loc 3 107 0
 523 003c 0FB67D6E 		movzbl	110(%rbp), %edi
 524 0040 448B6528 		movl	40(%rbp), %r12d
 525              	.LVL59:
 526 0044 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 526      00
 527              	.LVL60:
 528 0049 4129C4   		subl	%eax, %r12d
 529 004c 4489630C 		movl	%r12d, 12(%rbx)
 108:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 530              		.loc 3 108 0
 531 0050 0FB67D6E 		movzbl	110(%rbp), %edi
 532 0054 448B652C 		movl	44(%rbp), %r12d
 533              	.LVL61:
 534 0058 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 534      00
 535              	.LVL62:
 536 005d 4129C4   		subl	%eax, %r12d
 109:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 537              		.loc 3 111 0
 538 0060 8B4304   		movl	4(%rbx), %eax
 112:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 539              		.loc 3 116 0
 540 0063 4889EF   		movq	%rbp, %rdi
 108:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 541              		.loc 3 108 0
 542 0066 44896310 		movl	%r12d, 16(%rbx)
 111:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 543              		.loc 3 111 0
 544 006a 894324   		movl	%eax, 36(%rbx)
 112:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 545              		.loc 3 112 0
 546 006d 894328   		movl	%eax, 40(%rbx)
 113:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 547              		.loc 3 113 0
 548 0070 8B4308   		movl	8(%rbx), %eax
 549 0073 894330   		movl	%eax, 48(%rbx)
 114:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 550              		.loc 3 114 0
 551 0076 89432C   		movl	%eax, 44(%rbx)
 552              	.LVL63:
 553              		.loc 3 116 0
 554 0079 E8000000 		call	_ZNK8Fl_Group5arrayEv
 554      00
 555              	.LVL64:
 556 007e 8B959000 		movl	144(%rbp), %edx
 556      0000
 557              	.LBB340:
 558              	.LBB341:
 117:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 559              		.loc 3 119 0
 560 0084 488DBDB8 		leaq	184(%rbp), %rdi
 560      000000
 561 008b 4C8D8570 		leaq	368(%rbp), %r8
 561      010000
 562              	.LBE341:
 563              	.LBE340:
 115:fltk-1.3.4-1/src/Fl_Scroll.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 564              		.loc 3 115 0
 565 0092 41B90100 		movl	$1, %r9d
 565      0000
 566 0098 488D34D0 		leaq	(%rax,%rdx,8), %rsi
 567              	.LVL65:
 568 009c 0F1F4000 		.p2align 4,,10
 569              		.p2align 3
 570              	.L37:
 571              	.LBB345:
 117:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 572              		.loc 3 117 0 discriminator 1
 573 00a0 4839F0   		cmpq	%rsi, %rax
 574 00a3 7441     		je	.L38
 575              	.L78:
 576              	.LBB342:
 118:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 577              		.loc 3 118 0
 578 00a5 4883C008 		addq	$8, %rax
 579              	.LVL66:
 580 00a9 488B50F8 		movq	-8(%rax), %rdx
 581              	.LVL67:
 582              		.loc 3 119 0
 583 00ad 4839FA   		cmpq	%rdi, %rdx
 584 00b0 74EE     		je	.L37
 585              		.loc 3 119 0 is_stmt 0 discriminator 1
 586 00b2 4C39C2   		cmpq	%r8, %rdx
 587 00b5 74E9     		je	.L37
 120:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 588              		.loc 3 120 0 is_stmt 1
 589 00b7 4585C9   		testl	%r9d, %r9d
 590 00ba 8B4A20   		movl	32(%rdx), %ecx
 591 00bd 0F843D01 		je	.L40
 591      0000
 592              	.LVL68:
 121:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 593              		.loc 3 122 0
 594 00c3 894B24   		movl	%ecx, 36(%rbx)
 595              	.LVL69:
 123:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 596              		.loc 3 123 0
 597 00c6 8B4A28   		movl	40(%rdx), %ecx
 121:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 598              		.loc 3 121 0
 599 00c9 4531C9   		xorl	%r9d, %r9d
 600              		.loc 3 123 0
 601 00cc 034A20   		addl	32(%rdx), %ecx
 602 00cf 894B28   		movl	%ecx, 40(%rbx)
 603              	.LVL70:
 124:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 604              		.loc 3 124 0
 605 00d2 8B4A2C   		movl	44(%rdx), %ecx
 606 00d5 034A24   		addl	36(%rdx), %ecx
 607              	.LBE342:
 117:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 608              		.loc 3 117 0
 609 00d8 4839F0   		cmpq	%rsi, %rax
 610              	.LBB343:
 611              		.loc 3 124 0
 612 00db 894B30   		movl	%ecx, 48(%rbx)
 613 00de 8B5224   		movl	36(%rdx), %edx
 614              	.LVL71:
 125:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 615              		.loc 3 125 0
 616 00e1 89532C   		movl	%edx, 44(%rbx)
 617              	.LBE343:
 117:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 618              		.loc 3 117 0
 619 00e4 75BF     		jne	.L78
 620              	.L38:
 621              	.LBE345:
 622              	.LBB346:
 126:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 623              		.loc 3 142 0
 624 00e6 8B85B000 		movl	176(%rbp), %eax
 624      0000
 625              	.LVL72:
 137:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 626              		.loc 3 137 0
 627 00ec 448B6B04 		movl	4(%rbx), %r13d
 628              	.LVL73:
 138:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 629              		.loc 3 138 0
 630 00f0 448B6308 		movl	8(%rbx), %r12d
 631              	.LVL74:
 139:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632              		.loc 3 139 0
 633 00f4 448B730C 		movl	12(%rbx), %r14d
 634              	.LVL75:
 140:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 635              		.loc 3 140 0
 636 00f8 448B7B10 		movl	16(%rbx), %r15d
 637              	.LVL76:
 638              		.loc 3 142 0
 639 00fc 85C0     		testl	%eax, %eax
 640 00fe 4589E9   		movl	%r13d, %r9d
 641              	.LVL77:
 138:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 642              		.loc 3 138 0
 643 0101 4489E1   		movl	%r12d, %ecx
 644              		.loc 3 142 0
 645 0104 0F841E02 		je	.L79
 645      0000
 646              	.L44:
 647              		.loc 3 142 0 is_stmt 0 discriminator 4
 648 010a 8903     		movl	%eax, (%rbx)
 143:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 649              		.loc 3 143 0 is_stmt 1 discriminator 4
 650 010c C7433800 		movl	$0, 56(%rbx)
 650      000000
 144:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 651              		.loc 3 144 0 discriminator 4
 652 0113 C7433400 		movl	$0, 52(%rbx)
 652      000000
 653 011a 0FB6556C 		movzbl	108(%rbp), %edx
 654              	.LVL78:
 655 011e 8B7B2C   		movl	44(%rbx), %edi
 656 0121 8B7330   		movl	48(%rbx), %esi
 145:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 657              		.loc 3 145 0 discriminator 4
 658 0124 F6C202   		testb	$2, %dl
 659 0127 7423     		je	.L46
 660              	.LVL79:
 146:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 661              		.loc 3 146 0
 662 0129 F6C204   		testb	$4, %dl
 663 012c 0F848601 		je	.L80
 663      0000
 664              	.L49:
 147:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 665              		.loc 3 147 0
 666 0132 C7433801 		movl	$1, 56(%rbx)
 666      000000
 148:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 667              		.loc 3 148 0
 668 0139 4129C6   		subl	%eax, %r14d
 669              	.LVL80:
 149:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 670              		.loc 3 149 0
 671 013c F6850C01 		testb	$4, 268(%rbp)
 671      000004
 672 0143 7403     		je	.L74
 673              		.loc 3 149 0 is_stmt 0 discriminator 1
 674 0145 4101C5   		addl	%eax, %r13d
 675              	.LVL81:
 676              	.L74:
 677 0148 0FB6556C 		movzbl	108(%rbp), %edx
 678              	.LVL82:
 679              	.L46:
 150:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 680              		.loc 3 152 0 is_stmt 1
 681 014c F6C201   		testb	$1, %dl
 682 014f 0F85EB00 		jne	.L81
 682      0000
 683              	.L75:
 684 0155 448B4324 		movl	36(%rbx), %r8d
 685 0159 8B5328   		movl	40(%rbx), %edx
 686              	.LVL83:
 687              	.L52:
 153:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 688              		.loc 3 167 0
 689 015c 44896B14 		movl	%r13d, 20(%rbx)
 168:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 690              		.loc 3 168 0
 691 0160 44896318 		movl	%r12d, 24(%rbx)
 169:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 692              		.loc 3 169 0
 693 0164 4489731C 		movl	%r14d, 28(%rbx)
 170:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 694              		.loc 3 170 0
 695 0168 44897B20 		movl	%r15d, 32(%rbx)
 696              	.LBE346:
 171:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 697              		.loc 3 174 0
 698 016c 44896B3C 		movl	%r13d, 60(%rbx)
 699              	.LVL84:
 175:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 700              		.loc 3 177 0
 701 0170 F6850C01 		testb	$1, 268(%rbp)
 701      000001
 702 0177 7505     		jne	.L58
 703              		.loc 3 177 0 is_stmt 0 discriminator 2
 704 0179 034B10   		addl	16(%rbx), %ecx
 705 017c 29C1     		subl	%eax, %ecx
 706              	.L58:
 707              		.loc 3 177 0 discriminator 4
 708 017e 894B40   		movl	%ecx, 64(%rbx)
 178:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 709              		.loc 3 178 0 is_stmt 1 discriminator 4
 710 0181 44897344 		movl	%r14d, 68(%rbx)
 179:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 711              		.loc 3 179 0 discriminator 4
 712 0185 894348   		movl	%eax, 72(%rbx)
 713              	.LVL85:
 180:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 714              		.loc 3 184 0 discriminator 4
 715 0188 F6850C01 		testb	$4, 268(%rbp)
 715      000004
 716 018f 750B     		jne	.L59
 717              		.loc 3 184 0 is_stmt 0 discriminator 2
 718 0191 8B4B0C   		movl	12(%rbx), %ecx
 719 0194 4401C9   		addl	%r9d, %ecx
 720 0197 29C1     		subl	%eax, %ecx
 721 0199 4189C9   		movl	%ecx, %r9d
 722              	.L59:
 185:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 723              		.loc 3 190 0 is_stmt 1 discriminator 4
 724 019c 4529C5   		subl	%r8d, %r13d
 725              	.LVL86:
 191:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 726              		.loc 3 193 0 discriminator 4
 727 019f 4429C2   		subl	%r8d, %edx
 184:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 728              		.loc 3 184 0 discriminator 4
 729 01a2 44894B5C 		movl	%r9d, 92(%rbx)
 194:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 730              		.loc 3 194 0 discriminator 4
 731 01a6 4585ED   		testl	%r13d, %r13d
 185:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 732              		.loc 3 185 0 discriminator 4
 733 01a9 44896360 		movl	%r12d, 96(%rbx)
 186:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 734              		.loc 3 186 0 discriminator 4
 735 01ad 894364   		movl	%eax, 100(%rbx)
 187:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 736              		.loc 3 187 0 discriminator 4
 737 01b0 44897B68 		movl	%r15d, 104(%rbx)
 190:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 738              		.loc 3 190 0 discriminator 4
 739 01b4 44896B4C 		movl	%r13d, 76(%rbx)
 191:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 740              		.loc 3 191 0 discriminator 4
 741 01b8 44897350 		movl	%r14d, 80(%rbx)
 192:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 742              		.loc 3 192 0 discriminator 4
 743 01bc C7435400 		movl	$0, 84(%rbx)
 743      000000
 744              		.loc 3 194 0 discriminator 4
 745 01c3 0F887701 		js	.L60
 745      0000
 193:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 746              		.loc 3 193 0
 747 01c9 895358   		movl	%edx, 88(%rbx)
 748              	.L61:
 195:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 749              		.loc 3 196 0
 750 01cc 4129FC   		subl	%edi, %r12d
 751              	.LVL87:
 197:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 752              		.loc 3 199 0
 753 01cf 29FE     		subl	%edi, %esi
 197:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 754              		.loc 3 197 0
 755 01d1 44897B70 		movl	%r15d, 112(%rbx)
 200:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 756              		.loc 3 200 0
 757 01d5 4585E4   		testl	%r12d, %r12d
 196:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 758              		.loc 3 196 0
 759 01d8 4489636C 		movl	%r12d, 108(%rbx)
 198:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 760              		.loc 3 198 0
 761 01dc C7437400 		movl	$0, 116(%rbx)
 761      000000
 762              		.loc 3 200 0
 763 01e3 0F881F01 		js	.L62
 763      0000
 199:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 764              		.loc 3 199 0
 765 01e9 897378   		movl	%esi, 120(%rbx)
 201:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 766              		.loc 3 213 0
 767 01ec 4883C408 		addq	$8, %rsp
 768              		.cfi_remember_state
 769              		.cfi_def_cfa_offset 56
 770 01f0 5B       		popq	%rbx
 771              		.cfi_def_cfa_offset 48
 772              	.LVL88:
 773 01f1 5D       		popq	%rbp
 774              		.cfi_def_cfa_offset 40
 775              	.LVL89:
 776 01f2 415C     		popq	%r12
 777              		.cfi_def_cfa_offset 32
 778 01f4 415D     		popq	%r13
 779              		.cfi_def_cfa_offset 24
 780 01f6 415E     		popq	%r14
 781              		.cfi_def_cfa_offset 16
 782              	.LVL90:
 783 01f8 415F     		popq	%r15
 784              		.cfi_def_cfa_offset 8
 785              	.LVL91:
 786 01fa C3       		ret
 787              	.LVL92:
 788 01fb 0F1F4400 		.p2align 4,,10
 788      00
 789              		.p2align 3
 790              	.L40:
 791              		.cfi_restore_state
 792              	.LBB347:
 793              	.LBB344:
 127:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 794              		.loc 3 127 0
 795 0200 394B24   		cmpl	%ecx, 36(%rbx)
 796 0203 7E03     		jle	.L41
 797              	.LVL93:
 127:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 798              		.loc 3 127 0 is_stmt 0 discriminator 1
 799 0205 894B24   		movl	%ecx, 36(%rbx)
 800              	.LVL94:
 801              	.L41:
 802 0208 8B4A24   		movl	36(%rdx), %ecx
 803              	.LVL95:
 128:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 804              		.loc 3 128 0 is_stmt 1
 805 020b 394B2C   		cmpl	%ecx, 44(%rbx)
 806 020e 7E03     		jle	.L42
 807              	.LVL96:
 128:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 808              		.loc 3 128 0 is_stmt 0 discriminator 1
 809 0210 894B2C   		movl	%ecx, 44(%rbx)
 810              	.LVL97:
 811              	.L42:
 129:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 812              		.loc 3 129 0 is_stmt 1
 813 0213 8B4A28   		movl	40(%rdx), %ecx
 814 0216 034A20   		addl	32(%rdx), %ecx
 815 0219 3B4B28   		cmpl	40(%rbx), %ecx
 816 021c 7E03     		jle	.L43
 817              	.LVL98:
 129:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 818              		.loc 3 129 0 is_stmt 0 discriminator 1
 819 021e 894B28   		movl	%ecx, 40(%rbx)
 820              	.LVL99:
 821              	.L43:
 130:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 822              		.loc 3 130 0 is_stmt 1
 823 0221 8B4A2C   		movl	44(%rdx), %ecx
 824 0224 034A24   		addl	36(%rdx), %ecx
 825 0227 3B4B30   		cmpl	48(%rbx), %ecx
 826 022a 0F8E70FE 		jle	.L37
 826      FFFF
 827              	.LVL100:
 130:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 828              		.loc 3 130 0 is_stmt 0 discriminator 1
 829 0230 894B30   		movl	%ecx, 48(%rbx)
 830 0233 E968FEFF 		jmp	.L37
 830      FF
 831              	.LVL101:
 832 0238 0F1F8400 		.p2align 4,,10
 832      00000000 
 833              		.p2align 3
 834              	.L81:
 835              	.LBE344:
 836              	.LBE347:
 837              	.LBB348:
 153:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 838              		.loc 3 153 0 is_stmt 1
 839 0240 83E204   		andl	$4, %edx
 840 0243 0F849700 		je	.L69
 840      0000
 841 0249 448B4324 		movl	36(%rbx), %r8d
 842 024d 8B5328   		movl	40(%rbx), %edx
 843              	.L55:
 154:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 844              		.loc 3 154 0
 845 0250 C7433401 		movl	$1, 52(%rbx)
 845      000000
 846              	.LVL102:
 156:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 847              		.loc 3 156 0
 848 0257 F6850C01 		testb	$1, 268(%rbp)
 848      000001
 849 025e 458D1404 		leal	(%r12,%rax), %r10d
 850 0262 450F45E2 		cmovne	%r10d, %r12d
 851              	.LVL103:
 158:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 852              		.loc 3 158 0
 853 0266 448B5338 		movl	56(%rbx), %r10d
 155:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 854              		.loc 3 155 0
 855 026a 4129C7   		subl	%eax, %r15d
 856              	.LVL104:
 158:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 857              		.loc 3 158 0
 858 026d 4585D2   		testl	%r10d, %r10d
 859 0270 0F85E6FE 		jne	.L52
 859      FFFF
 860 0276 440FB655 		movzbl	108(%rbp), %r10d
 860      6C
 861              	.LVL105:
 158:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 862              		.loc 3 158 0 is_stmt 0 discriminator 1
 863 027b 41F6C202 		testb	$2, %r10b
 864 027f 0F84D7FE 		je	.L52
 864      FFFF
 865              	.LVL106:
 159:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 866              		.loc 3 159 0 is_stmt 1
 867 0285 4183E204 		andl	$4, %r10d
 868 0289 7509     		jne	.L57
 159:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 869              		.loc 3 159 0 is_stmt 0 discriminator 2
 870 028b 4139FC   		cmpl	%edi, %r12d
 871 028e 0F8EBB00 		jle	.L82
 871      0000
 872              	.L57:
 160:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 873              		.loc 3 160 0 is_stmt 1
 874 0294 C7433801 		movl	$1, 56(%rbx)
 874      000000
 161:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 875              		.loc 3 161 0
 876 029b 4129C6   		subl	%eax, %r14d
 877              	.LVL107:
 162:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 878              		.loc 3 162 0
 879 029e F6850C01 		testb	$4, 268(%rbp)
 879      000004
 880 02a5 458D5405 		leal	0(%r13,%rax), %r10d
 880      00
 881 02aa 450F45EA 		cmovne	%r10d, %r13d
 882              	.LVL108:
 883 02ae E9A9FEFF 		jmp	.L52
 883      FF
 884              	.LVL109:
 885              		.p2align 4,,10
 886 02b3 0F1F4400 		.p2align 3
 886      00
 887              	.L80:
 146:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 888              		.loc 3 146 0 discriminator 2
 889 02b8 4139FC   		cmpl	%edi, %r12d
 890 02bb 0F8F71FE 		jg	.L49
 890      FFFF
 146:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 891              		.loc 3 146 0 is_stmt 0 discriminator 4
 892 02c1 478D043C 		leal	(%r12,%r15), %r8d
 893 02c5 4439C6   		cmpl	%r8d, %esi
 894 02c8 0F8F64FE 		jg	.L49
 894      FFFF
 895              	.LVL110:
 152:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 896              		.loc 3 152 0 is_stmt 1
 897 02ce 83E201   		andl	$1, %edx
 898 02d1 0F847EFE 		je	.L75
 898      FFFF
 899              	.LVL111:
 900 02d7 660F1F84 		.p2align 4,,10
 900      00000000 
 900      00
 901              		.p2align 3
 902              	.L69:
 153:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 903              		.loc 3 153 0 discriminator 2
 904 02e0 448B4324 		movl	36(%rbx), %r8d
 905 02e4 8B5328   		movl	40(%rbx), %edx
 906 02e7 4539E8   		cmpl	%r13d, %r8d
 907 02ea 0F8C60FF 		jl	.L55
 907      FFFF
 153:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 908              		.loc 3 153 0 is_stmt 0 discriminator 4
 909 02f0 478D142E 		leal	(%r14,%r13), %r10d
 910 02f4 4439D2   		cmpl	%r10d, %edx
 911 02f7 0F8F53FF 		jg	.L55
 911      FFFF
 912 02fd E95AFEFF 		jmp	.L52
 912      FF
 913              	.LVL112:
 914              		.p2align 4,,10
 915 0302 660F1F44 		.p2align 3
 915      0000
 916              	.L62:
 917              	.LBE348:
 200:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 918              		.loc 3 200 0 is_stmt 1 discriminator 1
 919 0308 4429E6   		subl	%r12d, %esi
 920 030b 44896374 		movl	%r12d, 116(%rbx)
 921 030f 897378   		movl	%esi, 120(%rbx)
 922              		.loc 3 213 0 discriminator 1
 923 0312 4883C408 		addq	$8, %rsp
 924              		.cfi_remember_state
 925              		.cfi_def_cfa_offset 56
 926 0316 5B       		popq	%rbx
 927              		.cfi_def_cfa_offset 48
 928              	.LVL113:
 929 0317 5D       		popq	%rbp
 930              		.cfi_def_cfa_offset 40
 931              	.LVL114:
 932 0318 415C     		popq	%r12
 933              		.cfi_def_cfa_offset 32
 934 031a 415D     		popq	%r13
 935              		.cfi_def_cfa_offset 24
 936 031c 415E     		popq	%r14
 937              		.cfi_def_cfa_offset 16
 938              	.LVL115:
 939 031e 415F     		popq	%r15
 940              		.cfi_def_cfa_offset 8
 941              	.LVL116:
 942 0320 C3       		ret
 943              	.LVL117:
 944              		.p2align 4,,10
 945 0321 0F1F8000 		.p2align 3
 945      000000
 946              	.L79:
 947              		.cfi_restore_state
 948              	.LBB349:
 142:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 949              		.loc 3 142 0 discriminator 2
 950 0328 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 950      00
 951              	.LVL118:
 952 032d 8B4B08   		movl	8(%rbx), %ecx
 953 0330 448B4B04 		movl	4(%rbx), %r9d
 954 0334 E9D1FDFF 		jmp	.L44
 954      FF
 955              	.LVL119:
 956 0339 0F1F8000 		.p2align 4,,10
 956      000000
 957              		.p2align 3
 958              	.L60:
 959              	.LBE349:
 194:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 960              		.loc 3 194 0 discriminator 1
 961 0340 4429EA   		subl	%r13d, %edx
 962 0343 44896B54 		movl	%r13d, 84(%rbx)
 963 0347 895358   		movl	%edx, 88(%rbx)
 964 034a E97DFEFF 		jmp	.L61
 964      FF
 965              	.LVL120:
 966              	.L82:
 967              	.LBB350:
 159:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 968              		.loc 3 159 0 discriminator 4
 969 034f 478D143C 		leal	(%r12,%r15), %r10d
 970 0353 4139F2   		cmpl	%esi, %r10d
 971 0356 0F8C38FF 		jl	.L57
 971      FFFF
 972 035c E9FBFDFF 		jmp	.L52
 972      FF
 973              	.LBE350:
 974              		.cfi_endproc
 975              	.LFE500:
 977              		.section	.text.unlikely._ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE
 978              	.LCOLDE6:
 979              		.section	.text._ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE
 980              	.LHOTE6:
 981              		.section	.text.unlikely._ZN9Fl_Scroll4bboxERiS0_S0_S0_,"ax",@progbits
 982              		.align 2
 983              	.LCOLDB7:
 984              		.section	.text._ZN9Fl_Scroll4bboxERiS0_S0_S0_,"ax",@progbits
 985              	.LHOTB7:
 986              		.align 2
 987              		.p2align 4,,15
 988              		.globl	_ZN9Fl_Scroll4bboxERiS0_S0_S0_
 990              	_ZN9Fl_Scroll4bboxERiS0_S0_S0_:
 991              	.LFB501:
 214:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 992              		.loc 3 225 0
 993              		.cfi_startproc
 994              	.LVL121:
 995 0000 4157     		pushq	%r15
 996              		.cfi_def_cfa_offset 16
 997              		.cfi_offset 15, -16
 998 0002 4156     		pushq	%r14
 999              		.cfi_def_cfa_offset 24
 1000              		.cfi_offset 14, -24
 1001 0004 4D89C7   		movq	%r8, %r15
 1002 0007 4155     		pushq	%r13
 1003              		.cfi_def_cfa_offset 32
 1004              		.cfi_offset 13, -32
 1005 0009 4154     		pushq	%r12
 1006              		.cfi_def_cfa_offset 40
 1007              		.cfi_offset 12, -40
 1008 000b 4989F6   		movq	%rsi, %r14
 1009 000e 55       		pushq	%rbp
 1010              		.cfi_def_cfa_offset 48
 1011              		.cfi_offset 6, -48
 1012 000f 53       		pushq	%rbx
 1013              		.cfi_def_cfa_offset 56
 1014              		.cfi_offset 3, -56
 1015 0010 4889FB   		movq	%rdi, %rbx
 1016 0013 4989D5   		movq	%rdx, %r13
 1017 0016 4989CC   		movq	%rcx, %r12
 1018 0019 4883EC08 		subq	$8, %rsp
 1019              		.cfi_def_cfa_offset 64
 1020 001d 8B6F20   		movl	32(%rdi), %ebp
 1021              	.LVL122:
 226:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1022              		.loc 3 226 0
 1023 0020 0FB67F6E 		movzbl	110(%rdi), %edi
 1024              	.LVL123:
 1025 0024 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 1025      00
 1026              	.LVL124:
 1027 0029 01C5     		addl	%eax, %ebp
 1028 002b 41892E   		movl	%ebp, (%r14)
 227:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 1029              		.loc 3 227 0
 1030 002e 0FB67B6E 		movzbl	110(%rbx), %edi
 1031 0032 8B6B24   		movl	36(%rbx), %ebp
 1032              	.LVL125:
 1033 0035 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 1033      00
 1034              	.LVL126:
 1035 003a 01C5     		addl	%eax, %ebp
 1036 003c 41896D00 		movl	%ebp, 0(%r13)
 228:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 1037              		.loc 3 228 0
 1038 0040 0FB67B6E 		movzbl	110(%rbx), %edi
 1039 0044 8B6B28   		movl	40(%rbx), %ebp
 1040              	.LVL127:
 1041 0047 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 1041      00
 1042              	.LVL128:
 1043 004c 29C5     		subl	%eax, %ebp
 1044 004e 41892C24 		movl	%ebp, (%r12)
 229:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 1045              		.loc 3 229 0
 1046 0052 0FB67B6E 		movzbl	110(%rbx), %edi
 1047 0056 8B6B2C   		movl	44(%rbx), %ebp
 1048              	.LVL129:
 1049 0059 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 1049      00
 1050              	.LVL130:
 1051 005e 29C5     		subl	%eax, %ebp
 1052 0060 41892F   		movl	%ebp, (%r15)
 1053              	.LVL131:
 230:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1054              		.loc 3 230 0
 1055 0063 F6831801 		testb	$2, 280(%rbx)
 1055      000002
 1056 006a 7513     		jne	.L85
 1057              	.LVL132:
 231:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 1058              		.loc 3 231 0
 1059 006c 8B83E000 		movl	224(%rbx), %eax
 1059      0000
 1060 0072 41290424 		subl	%eax, (%r12)
 1061              	.LVL133:
 232:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 1062              		.loc 3 232 0
 1063 0076 F6830C01 		testb	$4, 268(%rbx)
 1063      000004
 1064 007d 7539     		jne	.L97
 1065              	.LVL134:
 1066              	.L85:
 233:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 1067              		.loc 3 234 0
 1068 007f F683D001 		testb	$2, 464(%rbx)
 1068      000002
 1069 0086 751C     		jne	.L83
 1070              	.LVL135:
 235:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1071              		.loc 3 235 0
 1072 0088 8B839C01 		movl	412(%rbx), %eax
 1072      0000
 1073 008e 412907   		subl	%eax, (%r15)
 1074              	.LVL136:
 236:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 1075              		.loc 3 236 0
 1076 0091 F6830C01 		testb	$1, 268(%rbx)
 1076      000001
 1077 0098 740A     		je	.L83
 1078              	.LVL137:
 1079              		.loc 3 236 0 is_stmt 0 discriminator 1
 1080 009a 8B839C01 		movl	412(%rbx), %eax
 1080      0000
 1081 00a0 41014500 		addl	%eax, 0(%r13)
 1082              	.LVL138:
 1083              	.L83:
 237:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 1084              		.loc 3 238 0 is_stmt 1
 1085 00a4 4883C408 		addq	$8, %rsp
 1086              		.cfi_remember_state
 1087              		.cfi_def_cfa_offset 56
 1088 00a8 5B       		popq	%rbx
 1089              		.cfi_def_cfa_offset 48
 1090              	.LVL139:
 1091 00a9 5D       		popq	%rbp
 1092              		.cfi_def_cfa_offset 40
 1093 00aa 415C     		popq	%r12
 1094              		.cfi_def_cfa_offset 32
 1095              	.LVL140:
 1096 00ac 415D     		popq	%r13
 1097              		.cfi_def_cfa_offset 24
 1098              	.LVL141:
 1099 00ae 415E     		popq	%r14
 1100              		.cfi_def_cfa_offset 16
 1101              	.LVL142:
 1102 00b0 415F     		popq	%r15
 1103              		.cfi_def_cfa_offset 8
 1104              	.LVL143:
 1105 00b2 C3       		ret
 1106              	.LVL144:
 1107              		.p2align 4,,10
 1108 00b3 0F1F4400 		.p2align 3
 1108      00
 1109              	.L97:
 1110              		.cfi_restore_state
 232:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 1111              		.loc 3 232 0 discriminator 1
 1112 00b8 8B83E000 		movl	224(%rbx), %eax
 1112      0000
 1113 00be 410106   		addl	%eax, (%r14)
 1114 00c1 EBBC     		jmp	.L85
 1115              		.cfi_endproc
 1116              	.LFE501:
 1118              		.section	.text.unlikely._ZN9Fl_Scroll4bboxERiS0_S0_S0_
 1119              	.LCOLDE7:
 1120              		.section	.text._ZN9Fl_Scroll4bboxERiS0_S0_S0_
 1121              	.LHOTE7:
 1122              		.section	.text.unlikely._ZN9Fl_Scroll9scroll_toEii,"ax",@progbits
 1123              		.align 2
 1124              	.LCOLDB8:
 1125              		.section	.text._ZN9Fl_Scroll9scroll_toEii,"ax",@progbits
 1126              	.LHOTB8:
 1127              		.align 2
 1128              		.p2align 4,,15
 1129              		.globl	_ZN9Fl_Scroll9scroll_toEii
 1131              	_ZN9Fl_Scroll9scroll_toEii:
 1132              	.LFB504:
 239:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1133              		.loc 3 396 0
 1134              		.cfi_startproc
 1135              	.LVL145:
 1136 0000 4157     		pushq	%r15
 1137              		.cfi_def_cfa_offset 16
 1138              		.cfi_offset 15, -16
 1139 0002 4156     		pushq	%r14
 1140              		.cfi_def_cfa_offset 24
 1141              		.cfi_offset 14, -24
 1142 0004 4155     		pushq	%r13
 1143              		.cfi_def_cfa_offset 32
 1144              		.cfi_offset 13, -32
 1145 0006 4154     		pushq	%r12
 1146              		.cfi_def_cfa_offset 40
 1147              		.cfi_offset 12, -40
 1148 0008 55       		pushq	%rbp
 1149              		.cfi_def_cfa_offset 48
 1150              		.cfi_offset 6, -48
 1151 0009 53       		pushq	%rbx
 1152              		.cfi_def_cfa_offset 56
 1153              		.cfi_offset 3, -56
 1154 000a 4883EC18 		subq	$24, %rsp
 1155              		.cfi_def_cfa_offset 80
 397:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 1156              		.loc 3 397 0
 1157 000e 8BAFA000 		movl	160(%rdi), %ebp
 1157      0000
 398:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 1158              		.loc 3 398 0
 1159 0014 448BA7A4 		movl	164(%rdi), %r12d
 1159      000000
 397:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 1160              		.loc 3 397 0
 1161 001b 29F5     		subl	%esi, %ebp
 1162              	.LVL146:
 1163              		.loc 3 398 0
 1164 001d 4129D4   		subl	%edx, %r12d
 1165              	.LVL147:
 399:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 1166              		.loc 3 399 0
 1167 0020 89E8     		movl	%ebp, %eax
 1168 0022 4409E0   		orl	%r12d, %eax
 1169 0025 7519     		jne	.L107
 400:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 1170              		.loc 3 410 0
 1171 0027 4883C418 		addq	$24, %rsp
 1172              		.cfi_remember_state
 1173              		.cfi_def_cfa_offset 56
 1174 002b 5B       		popq	%rbx
 1175              		.cfi_def_cfa_offset 48
 1176 002c 5D       		popq	%rbp
 1177              		.cfi_def_cfa_offset 40
 1178              	.LVL148:
 1179 002d 415C     		popq	%r12
 1180              		.cfi_def_cfa_offset 32
 1181              	.LVL149:
 1182 002f 415D     		popq	%r13
 1183              		.cfi_def_cfa_offset 24
 1184 0031 415E     		popq	%r14
 1185              		.cfi_def_cfa_offset 16
 1186 0033 415F     		popq	%r15
 1187              		.cfi_def_cfa_offset 8
 1188 0035 C3       		ret
 1189              	.LVL150:
 1190 0036 662E0F1F 		.p2align 4,,10
 1190      84000000 
 1190      0000
 1191              		.p2align 3
 1192              	.L107:
 1193              		.cfi_restore_state
 1194 0040 4889FB   		movq	%rdi, %rbx
 401:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 1195              		.loc 3 401 0
 1196 0043 8997A400 		movl	%edx, 164(%rdi)
 1196      0000
 400:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 1197              		.loc 3 400 0
 1198 0049 89B7A000 		movl	%esi, 160(%rdi)
 1198      0000
 402:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 1199              		.loc 3 402 0
 1200 004f E8000000 		call	_ZNK8Fl_Group5arrayEv
 1200      00
 1201              	.LVL151:
 1202 0054 8B939000 		movl	144(%rbx), %edx
 1202      0000
 1203 005a 4989C7   		movq	%rax, %r15
 1204              	.LVL152:
 1205              	.LBB351:
 1206              	.LBB352:
 405:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1207              		.loc 3 405 0
 1208 005d 4C8DB370 		leaq	368(%rbx), %r14
 1208      010000
 1209 0064 4C8D2CD0 		leaq	(%rax,%rdx,8), %r13
 1210 0068 488D83B8 		leaq	184(%rbx), %rax
 1210      000000
 1211              	.LVL153:
 1212 006f 48894424 		movq	%rax, 8(%rsp)
 1212      08
 1213              		.p2align 4,,10
 1214 0074 0F1F4000 		.p2align 3
 1215              	.L100:
 1216              	.LBE352:
 403:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 1217              		.loc 3 403 0 discriminator 1
 1218 0078 4D39EF   		cmpq	%r13, %r15
 1219 007b 7432     		je	.L101
 1220              	.L108:
 1221              	.LBB355:
 404:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 1222              		.loc 3 404 0
 1223 007d 4983C708 		addq	$8, %r15
 1224              	.LVL154:
 1225 0081 498B7FF8 		movq	-8(%r15), %rdi
 1226              	.LVL155:
 405:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1227              		.loc 3 405 0
 1228 0085 4C39F7   		cmpq	%r14, %rdi
 1229 0088 74EE     		je	.L100
 405:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1230              		.loc 3 405 0 is_stmt 0 discriminator 1
 1231 008a 483B7C24 		cmpq	8(%rsp), %rdi
 1231      08
 1232 008f 74E7     		je	.L100
 1233              	.LVL156:
 1234              	.LBB353:
 1235              	.LBB354:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1236              		.loc 1 332 0 is_stmt 1
 1237 0091 8B5724   		movl	36(%rdi), %edx
 1238 0094 8B7720   		movl	32(%rdi), %esi
 1239 0097 4C8B0F   		movq	(%rdi), %r9
 1240 009a 8B4F28   		movl	40(%rdi), %ecx
 1241 009d 448B472C 		movl	44(%rdi), %r8d
 1242 00a1 4401E2   		addl	%r12d, %edx
 1243              	.LVL157:
 1244 00a4 01EE     		addl	%ebp, %esi
 1245              	.LVL158:
 1246 00a6 41FF5120 		call	*32(%r9)
 1247              	.LVL159:
 1248              	.LBE354:
 1249              	.LBE353:
 1250              	.LBE355:
 403:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 1251              		.loc 3 403 0
 1252 00aa 4D39EF   		cmpq	%r13, %r15
 1253 00ad 75CE     		jne	.L108
 1254              	.L101:
 1255 00af 488B6B08 		movq	8(%rbx), %rbp
 1256              	.LVL160:
 1257              	.LBE351:
 408:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 1258              		.loc 3 408 0
 1259 00b3 4889DF   		movq	%rbx, %rdi
 1260 00b6 E8000000 		call	_ZNK9Fl_Widget6windowEv
 1260      00
 1261              	.LVL161:
 1262 00bb 4839E8   		cmpq	%rbp, %rax
 1263 00be 7420     		je	.L109
 1264              	.L103:
 409:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 1265              		.loc 3 409 0
 1266 00c0 BE040000 		movl	$4, %esi
 1266      00
 1267              	.L106:
 1268              		.loc 3 410 0
 1269 00c5 4883C418 		addq	$24, %rsp
 1270              		.cfi_remember_state
 1271              		.cfi_def_cfa_offset 56
 408:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 1272              		.loc 3 408 0
 1273 00c9 4889DF   		movq	%rbx, %rdi
 1274              		.loc 3 410 0
 1275 00cc 5B       		popq	%rbx
 1276              		.cfi_def_cfa_offset 48
 1277              	.LVL162:
 1278 00cd 5D       		popq	%rbp
 1279              		.cfi_def_cfa_offset 40
 1280 00ce 415C     		popq	%r12
 1281              		.cfi_def_cfa_offset 32
 1282              	.LVL163:
 1283 00d0 415D     		popq	%r13
 1284              		.cfi_def_cfa_offset 24
 1285 00d2 415E     		popq	%r14
 1286              		.cfi_def_cfa_offset 16
 1287 00d4 415F     		popq	%r15
 1288              		.cfi_def_cfa_offset 8
 1289              	.LVL164:
 408:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 1290              		.loc 3 408 0
 1291 00d6 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 1291      00
 1292              	.LVL165:
 1293 00db 0F1F4400 		.p2align 4,,10
 1293      00
 1294              		.p2align 3
 1295              	.L109:
 1296              		.cfi_restore_state
 408:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 1297              		.loc 3 408 0 is_stmt 0 discriminator 1
 1298 00e0 48833D00 		cmpq	$0, _ZN2Fl10scheme_bg_E(%rip)
 1298      00000000 
 1299 00e8 BE800000 		movl	$128, %esi
 1299      00
 1300 00ed 75D6     		jne	.L106
 1301 00ef EBCF     		jmp	.L103
 1302              		.cfi_endproc
 1303              	.LFE504:
 1305              		.section	.text.unlikely._ZN9Fl_Scroll9scroll_toEii
 1306              	.LCOLDE8:
 1307              		.section	.text._ZN9Fl_Scroll9scroll_toEii
 1308              	.LHOTE8:
 1309              		.section	.text.unlikely._ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv,"ax",@progbits
 1310              		.align 2
 1311              	.LCOLDB9:
 1312              		.section	.text._ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv,"ax",@progbits
 1313              	.LHOTB9:
 1314              		.align 2
 1315              		.p2align 4,,15
 1316              		.globl	_ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv
 1318              	_ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv:
 1319              	.LFB505:
 411:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1320              		.loc 3 412 0 is_stmt 1
 1321              		.cfi_startproc
 1322              	.LVL166:
 1323 0000 488B4708 		movq	8(%rdi), %rax
 1324              	.LVL167:
 413:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1325              		.loc 3 414 0
 1326 0004 F20F2C77 		cvttsd2si	120(%rdi), %esi
 1326      78
 1327 0009 8B90A400 		movl	164(%rax), %edx
 1327      0000
 1328 000f 4889C7   		movq	%rax, %rdi
 1329              	.LVL168:
 1330 0012 E9000000 		jmp	_ZN9Fl_Scroll9scroll_toEii
 1330      00
 1331              	.LVL169:
 1332              		.cfi_endproc
 1333              	.LFE505:
 1335              		.section	.text.unlikely._ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv
 1336              	.LCOLDE9:
 1337              		.section	.text._ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv
 1338              	.LHOTE9:
 1339              		.section	.text.unlikely._ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv,"ax",@progbits
 1340              		.align 2
 1341              	.LCOLDB10:
 1342              		.section	.text._ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv,"ax",@progbits
 1343              	.LHOTB10:
 1344              		.align 2
 1345              		.p2align 4,,15
 1346              		.globl	_ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv
 1348              	_ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv:
 1349              	.LFB506:
 415:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 1350              		.loc 3 417 0
 1351              		.cfi_startproc
 1352              	.LVL170:
 1353 0000 488B4708 		movq	8(%rdi), %rax
 1354              	.LVL171:
 418:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 1355              		.loc 3 419 0
 1356 0004 F20F2C57 		cvttsd2si	120(%rdi), %edx
 1356      78
 1357 0009 8BB0A000 		movl	160(%rax), %esi
 1357      0000
 1358 000f 4889C7   		movq	%rax, %rdi
 1359              	.LVL172:
 1360 0012 E9000000 		jmp	_ZN9Fl_Scroll9scroll_toEii
 1360      00
 1361              	.LVL173:
 1362              		.cfi_endproc
 1363              	.LFE506:
 1365              		.section	.text.unlikely._ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv
 1366              	.LCOLDE10:
 1367              		.section	.text._ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv
 1368              	.LHOTE10:
 1369              		.section	.text.unlikely._ZN9Fl_ScrollC2EiiiiPKc,"ax",@progbits
 1370              		.align 2
 1371              	.LCOLDB11:
 1372              		.section	.text._ZN9Fl_ScrollC2EiiiiPKc,"ax",@progbits
 1373              	.LHOTB11:
 1374              		.align 2
 1375              		.p2align 4,,15
 1376              		.globl	_ZN9Fl_ScrollC2EiiiiPKc
 1378              	_ZN9Fl_ScrollC2EiiiiPKc:
 1379              	.LFB508:
 420:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 1380              		.loc 3 432 0
 1381              		.cfi_startproc
 1382              	.LVL174:
 1383 0000 4157     		pushq	%r15
 1384              		.cfi_def_cfa_offset 16
 1385              		.cfi_offset 15, -16
 1386 0002 4156     		pushq	%r14
 1387              		.cfi_def_cfa_offset 24
 1388              		.cfi_offset 14, -24
 1389 0004 4989FF   		movq	%rdi, %r15
 1390 0007 4155     		pushq	%r13
 1391              		.cfi_def_cfa_offset 32
 1392              		.cfi_offset 13, -32
 1393 0009 4154     		pushq	%r12
 1394              		.cfi_def_cfa_offset 40
 1395              		.cfi_offset 12, -40
 1396 000b 4189D5   		movl	%edx, %r13d
 1397 000e 55       		pushq	%rbp
 1398              		.cfi_def_cfa_offset 48
 1399              		.cfi_offset 6, -48
 1400 000f 53       		pushq	%rbx
 1401              		.cfi_def_cfa_offset 56
 1402              		.cfi_offset 3, -56
 1403 0010 4189F4   		movl	%esi, %r12d
 1404 0013 89CD     		movl	%ecx, %ebp
 1405 0015 4489C3   		movl	%r8d, %ebx
 1406 0018 4883EC18 		subq	$24, %rsp
 1407              		.cfi_def_cfa_offset 80
 1408              	.LBB356:
 433:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 1409              		.loc 3 434 0
 1410 001c 458D342C 		leal	(%r12,%rbp), %r14d
 435:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1411              		.loc 3 437 0
 1412 0020 E8000000 		call	_ZN8Fl_GroupC2EiiiiPKc
 1412      00
 1413              	.LVL175:
 1414 0025 49C70700 		movq	$_ZTV9Fl_Scroll+16, (%r15)
 1414      000000
 435:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 1415              		.loc 3 435 0
 1416 002c E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 1416      00
 1417              	.LVL176:
 1418              		.loc 3 437 0
 1419 0031 4189D8   		movl	%ebx, %r8d
 436:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1420              		.loc 3 436 0
 1421 0034 4401EB   		addl	%r13d, %ebx
 1422              	.LVL177:
 1423              		.loc 3 437 0
 1424 0037 4129C0   		subl	%eax, %r8d
 1425              	.LVL178:
 1426 003a 44894424 		movl	%r8d, 12(%rsp)
 1426      0C
 1427 003f E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 1427      00
 1428              	.LVL179:
 1429 0044 89442408 		movl	%eax, 8(%rsp)
 434:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 1430              		.loc 3 434 0
 1431 0048 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 1431      00
 1432              	.LVL180:
 1433              		.loc 3 437 0
 1434 004d 448B4424 		movl	12(%rsp), %r8d
 1434      0C
 1435 0052 8B4C2408 		movl	8(%rsp), %ecx
 1436 0056 498DBFB8 		leaq	184(%r15), %rdi
 1436      000000
 1437 005d 4489F6   		movl	%r14d, %esi
 1438 0060 4489EA   		movl	%r13d, %edx
 1439 0063 4531C9   		xorl	%r9d, %r9d
 1440 0066 29C6     		subl	%eax, %esi
 1441 0068 E8000000 		call	_ZN12Fl_ScrollbarC1EiiiiPKc
 1441      00
 1442              	.LVL181:
 1443 006d E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 1443      00
 1444              	.LVL182:
 1445 0072 4189C6   		movl	%eax, %r14d
 1446 0075 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 1446      00
 1447              	.LVL183:
 1448 007a 29C5     		subl	%eax, %ebp
 1449              	.LVL184:
 436:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1450              		.loc 3 436 0
 1451 007c E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 1451      00
 1452              	.LVL185:
 1453              		.loc 3 437 0
 1454 0081 89DA     		movl	%ebx, %edx
 1455 0083 498DBF70 		leaq	368(%r15), %rdi
 1455      010000
 1456 008a 4589F0   		movl	%r14d, %r8d
 1457 008d 89E9     		movl	%ebp, %ecx
 1458 008f 4489E6   		movl	%r12d, %esi
 1459 0092 29C2     		subl	%eax, %edx
 1460 0094 4531C9   		xorl	%r9d, %r9d
 1461 0097 E8000000 		call	_ZN12Fl_ScrollbarC1EiiiiPKc
 1461      00
 1462              	.LVL186:
 1463              	.LBB357:
 1464              	.LBB358:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1465              		.loc 1 279 0
 1466 009c 41C6476C 		movb	$3, 108(%r15)
 1466      03
 1467              	.LVL187:
 1468              	.LBE358:
 1469              	.LBE357:
 438:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1470              		.loc 3 439 0
 1471 00a1 41C787A8 		movl	$0, 168(%r15)
 1471      00000000 
 1471      000000
 1472 00ac 41C787A0 		movl	$0, 160(%r15)
 1472      00000000 
 1472      000000
 440:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 1473              		.loc 3 440 0
 1474 00b7 41C787AC 		movl	$0, 172(%r15)
 1474      00000000 
 1474      000000
 1475 00c2 41C787A4 		movl	$0, 164(%r15)
 1475      00000000 
 1475      000000
 441:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1476              		.loc 3 441 0
 1477 00cd 41C787B0 		movl	$0, 176(%r15)
 1477      00000000 
 1477      000000
 1478              	.LVL188:
 1479              	.LBB359:
 1480              	.LBB360:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1481              		.loc 1 279 0
 1482 00d8 41C687DC 		movb	$1, 476(%r15)
 1482      01000001 
 1483              	.LVL189:
 1484              	.LBE360:
 1485              	.LBE359:
 1486              	.LBB361:
 1487              	.LBB362:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1488              		.loc 1 574 0
 1489 00e0 49C78780 		movq	$_ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv, 384(%r15)
 1489      01000000 
 1489      000000
 1490              	.LVL190:
 1491              	.LBE362:
 1492              	.LBE361:
 1493              	.LBB363:
 1494              	.LBB364:
 1495 00eb 49C787C8 		movq	$_ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv, 200(%r15)
 1495      00000000 
 1495      000000
 1496              	.LVL191:
 1497              	.LBE364:
 1498              	.LBE363:
 1499              	.LBE356:
 442:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 1500              		.loc 3 445 0
 1501 00f6 4883C418 		addq	$24, %rsp
 1502              		.cfi_def_cfa_offset 56
 1503 00fa 5B       		popq	%rbx
 1504              		.cfi_def_cfa_offset 48
 1505 00fb 5D       		popq	%rbp
 1506              		.cfi_def_cfa_offset 40
 1507 00fc 415C     		popq	%r12
 1508              		.cfi_def_cfa_offset 32
 1509              	.LVL192:
 1510 00fe 415D     		popq	%r13
 1511              		.cfi_def_cfa_offset 24
 1512              	.LVL193:
 1513 0100 415E     		popq	%r14
 1514              		.cfi_def_cfa_offset 16
 1515 0102 415F     		popq	%r15
 1516              		.cfi_def_cfa_offset 8
 1517              	.LVL194:
 1518 0104 C3       		ret
 1519              		.cfi_endproc
 1520              	.LFE508:
 1522              		.section	.text.unlikely._ZN9Fl_ScrollC2EiiiiPKc
 1523              	.LCOLDE11:
 1524              		.section	.text._ZN9Fl_ScrollC2EiiiiPKc
 1525              	.LHOTE11:
 1526              		.globl	_ZN9Fl_ScrollC1EiiiiPKc
 1527              		.set	_ZN9Fl_ScrollC1EiiiiPKc,_ZN9Fl_ScrollC2EiiiiPKc
 1528              		.section	.text.unlikely._ZN9Fl_Scroll4drawEv,"ax",@progbits
 1529              		.align 2
 1530              	.LCOLDB12:
 1531              		.section	.text._ZN9Fl_Scroll4drawEv,"ax",@progbits
 1532              	.LHOTB12:
 1533              		.align 2
 1534              		.p2align 4,,15
 1535              		.globl	_ZN9Fl_Scroll4drawEv
 1537              	_ZN9Fl_Scroll4drawEv:
 1538              	.LFB502:
 240:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 1539              		.loc 3 240 0
 1540              		.cfi_startproc
 1541              	.LVL195:
 1542 0000 4156     		pushq	%r14
 1543              		.cfi_def_cfa_offset 16
 1544              		.cfi_offset 14, -16
 1545 0002 4155     		pushq	%r13
 1546              		.cfi_def_cfa_offset 24
 1547              		.cfi_offset 13, -24
 1548 0004 4154     		pushq	%r12
 1549              		.cfi_def_cfa_offset 32
 1550              		.cfi_offset 12, -32
 1551 0006 55       		pushq	%rbp
 1552              		.cfi_def_cfa_offset 40
 1553              		.cfi_offset 6, -40
 1554 0007 53       		pushq	%rbx
 1555              		.cfi_def_cfa_offset 48
 1556              		.cfi_offset 3, -48
 1557 0008 4889FB   		movq	%rdi, %rbx
 1558 000b 4881ECA0 		subq	$160, %rsp
 1558      000000
 1559              		.cfi_def_cfa_offset 208
 240:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 1560              		.loc 3 240 0
 1561 0012 64488B04 		movq	%fs:40, %rax
 1561      25280000 
 1561      00
 1562 001b 48898424 		movq	%rax, 152(%rsp)
 1562      98000000 
 1563 0023 31C0     		xorl	%eax, %eax
 241:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 1564              		.loc 3 241 0
 1565 0025 E8000000 		call	_ZN9Fl_Scroll19fix_scrollbar_orderEv
 1565      00
 1566              	.LVL196:
 242:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 1567              		.loc 3 242 0
 1568 002a 4C8D4424 		leaq	12(%rsp), %r8
 1568      0C
 1569 002f 488D4C24 		leaq	8(%rsp), %rcx
 1569      08
 1570 0034 488D5424 		leaq	4(%rsp), %rdx
 1570      04
 1571 0039 4889E6   		movq	%rsp, %rsi
 1572 003c 4889DF   		movq	%rbx, %rdi
 1573 003f E8000000 		call	_ZN9Fl_Scroll4bboxERiS0_S0_S0_
 1573      00
 1574              	.LVL197:
 1575 0044 0FB66B6D 		movzbl	109(%rbx), %ebp
 1576              	.LVL198:
 1577              	.LBB365:
 246:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 1578              		.loc 3 246 0
 1579 0048 4084ED   		testb	%bpl, %bpl
 1580 004b 0F880F04 		js	.L153
 1580      0000
 1581              	.LBB366:
 250:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1582              		.loc 3 250 0
 1583 0051 40F6C504 		testb	$4, %bpl
 1584 0055 0F858502 		jne	.L154
 1584      0000
 1585              	.L118:
 1586              	.LBE366:
 1587              	.LBB371:
 272:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 1588              		.loc 3 272 0
 1589 005b 40F6C501 		testb	$1, %bpl
 1590 005f 0F850B02 		jne	.L155
 1590      0000
 1591              	.L116:
 1592              	.LBE371:
 1593              	.LBE365:
 1594              	.LBB382:
 283:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 1595              		.loc 3 283 0
 1596 0065 488D7424 		leaq	16(%rsp), %rsi
 1596      10
 1597 006a 4889DF   		movq	%rbx, %rdi
 1598 006d E8000000 		call	_ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE
 1598      00
 1599              	.LVL199:
 286:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 1600              		.loc 3 286 0
 1601 0072 8B4C2448 		movl	72(%rsp), %ecx
 1602 0076 8B831801 		movl	280(%rbx), %eax
 1602      0000
 1603 007c 85C9     		testl	%ecx, %ecx
 1604 007e 7550     		jne	.L156
 1605              	.LVL200:
 290:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 1606              		.loc 3 290 0 discriminator 1
 1607 0080 A802     		testb	$2, %al
 1608 0082 0F844803 		je	.L131
 1608      0000
 1609              	.LVL201:
 1610              	.L130:
 295:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 1611              		.loc 3 295 0
 1612 0088 8B542444 		movl	68(%rsp), %edx
 1613 008c 8B83D001 		movl	464(%rbx), %eax
 1613      0000
 1614 0092 85D2     		testl	%edx, %edx
 1615 0094 755A     		jne	.L157
 1616              	.L132:
 1617              	.LVL202:
 299:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1618              		.loc 3 299 0 discriminator 1
 1619 0096 A802     		testb	$2, %al
 1620 0098 0F854201 		jne	.L134
 1620      0000
 1621              	.LVL203:
 301:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1622              		.loc 3 301 0
 1623 009e 448B4424 		movl	88(%rsp), %r8d
 1623      58
 1624 00a3 8B4C2454 		movl	84(%rsp), %ecx
 1625              	.LBB383:
 1626              	.LBB384:
 702:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1627              		.loc 1 702 0
 1628 00a7 83C802   		orl	$2, %eax
 1629              	.LBE384:
 1630              	.LBE383:
 301:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1631              		.loc 3 301 0
 1632 00aa 8B542450 		movl	80(%rsp), %edx
 1633 00ae 8B74244C 		movl	76(%rsp), %esi
 1634 00b2 4889DF   		movq	%rbx, %rdi
 1635              	.LBB386:
 1636              	.LBB385:
 702:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1637              		.loc 1 702 0
 1638 00b5 8983D001 		movl	%eax, 464(%rbx)
 1638      0000
 1639              	.LBE385:
 1640              	.LBE386:
 1641 00bb 41BD80FF 		movl	$-128, %r13d
 1641      FFFF
 301:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1642              		.loc 3 301 0
 1643 00c1 E8000000 		call	_ZN9Fl_Scroll9draw_clipEPviiii
 1643      00
 1644              	.LVL204:
 1645 00c6 EB3F     		jmp	.L136
 1646              	.LVL205:
 1647 00c8 0F1F8400 		.p2align 4,,10
 1647      00000000 
 1648              		.p2align 3
 1649              	.L156:
 286:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 1650              		.loc 3 286 0 discriminator 1
 1651 00d0 A802     		testb	$2, %al
 1652 00d2 74B4     		je	.L130
 1653              	.LVL206:
 295:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 1654              		.loc 3 295 0
 1655 00d4 8B542444 		movl	68(%rsp), %edx
 1656              	.LBB387:
 1657              	.LBB388:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1658              		.loc 1 696 0
 1659 00d8 83E0FD   		andl	$-3, %eax
 1660              	.LBE388:
 1661              	.LBE387:
 288:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 1662              		.loc 3 288 0
 1663 00db BD80FFFF 		movl	$-128, %ebp
 1663      FF
 1664              	.LBB390:
 1665              	.LBB389:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1666              		.loc 1 696 0
 1667 00e0 89831801 		movl	%eax, 280(%rbx)
 1667      0000
 1668              	.LVL207:
 1669 00e6 8B83D001 		movl	464(%rbx), %eax
 1669      0000
 1670              	.LBE389:
 1671              	.LBE390:
 295:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 1672              		.loc 3 295 0
 1673 00ec 85D2     		testl	%edx, %edx
 1674 00ee 74A6     		je	.L132
 1675              	.LVL208:
 1676              	.L157:
 295:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 1677              		.loc 3 295 0 is_stmt 0 discriminator 1
 1678 00f0 A802     		testb	$2, %al
 1679 00f2 0F84E800 		je	.L134
 1679      0000
 1680              	.LVL209:
 1681              	.LBB391:
 1682              	.LBB392:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1683              		.loc 1 696 0 is_stmt 1
 1684 00f8 83E0FD   		andl	$-3, %eax
 1685              	.LBE392:
 1686              	.LBE391:
 1687 00fb 41BD80FF 		movl	$-128, %r13d
 1687      FFFF
 1688              	.LBB394:
 1689              	.LBB393:
 1690 0101 8983D001 		movl	%eax, 464(%rbx)
 1690      0000
 1691              	.LVL210:
 1692              	.L136:
 1693              	.LBE393:
 1694              	.LBE394:
 309:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1695              		.loc 3 309 0
 1696 0107 4C8DA3B8 		leaq	184(%rbx), %r12
 1696      000000
 1697 010e 448B4424 		movl	120(%rsp), %r8d
 1697      78
 1698 0113 8B4C2474 		movl	116(%rsp), %ecx
 1699 0117 8B542470 		movl	112(%rsp), %edx
 1700 011b 8B74246C 		movl	108(%rsp), %esi
 313:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 1701              		.loc 3 313 0
 1702 011f 488DAB70 		leaq	368(%rbx), %rbp
 1702      010000
 309:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1703              		.loc 3 309 0
 1704 0126 4C89E7   		movq	%r12, %rdi
 1705 0129 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 1705      00
 1706              	.LVL211:
 310:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 1707              		.loc 3 310 0
 1708 012e 8B74247C 		movl	124(%rsp), %esi
 1709              	.LBB395:
 1710              	.LBB396:
 1711              		.file 5 "fltk-1.3.4-1/FL/Fl_Scrollbar.H"
   1:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //
   2:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** // "$Id: Fl_Scrollbar.H 9116 2011-10-02 06:25:13Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //
   4:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** // Scroll bar header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //
   6:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //
   8:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //
  12:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //
  14:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //
  16:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** //
  18:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  19:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****    Fl_Scrollbar widget . */
  21:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  22:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** #ifndef Fl_Scrollbar_H
  23:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** #define Fl_Scrollbar_H
  24:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  25:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** #include "Fl_Slider.H"
  26:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  27:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   The Fl_Scrollbar widget displays a slider with arrow buttons at
  29:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   the ends of the scrollbar. Clicking on the arrows move up/left and
  30:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   down/right by linesize(). Scrollbars also accept FL_SHORTCUT events:
  31:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   the arrows move by linesize(), and vertical scrollbars take Page
  32:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   Up/Down (they move by the page size minus linesize()) and Home/End
  33:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   (they jump to the top or bottom).
  34:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  35:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   Scrollbars have step(1) preset (they always return integers). If
  36:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   desired you can set the step() to non-integer values. You will then
  37:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   have to use casts to get at the floating-point versions of value()
  38:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   from Fl_Slider.
  39:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  40:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   \image html  scrollbar.png 
  41:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   \image latex scrollbar.png "Fl_Scrollbar" width=4cm
  42:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** */
  43:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** class FL_EXPORT Fl_Scrollbar : public Fl_Slider {
  44:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  45:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   int linesize_;
  46:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   int pushed_;
  47:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   static void timeout_cb(void*);
  48:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   void increment_cb();
  49:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** protected:
  50:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   void draw();
  51:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  52:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** public:
  53:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  54:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   Fl_Scrollbar(int X,int Y,int W,int H, const char *L = 0);
  55:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   ~Fl_Scrollbar();
  56:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   int handle(int);
  57:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  58:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   /**
  59:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     Gets the integer value (position) of the slider in the scrollbar.
  60:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     You can get the floating point value with Fl_Slider::value().
  61:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  62:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     \see Fl_Scrollbar::value(int p)
  63:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     \see Fl_Scrollbar::value(int pos, int size, int first, int total)
  64:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   */
  65:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   int value() const {return int(Fl_Slider::value());}
  66:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  67:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   /**
  68:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     Sets the value (position) of the slider in the scrollbar.
  69:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  70:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     \see Fl_Scrollbar::value()
  71:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     \see Fl_Scrollbar::value(int pos, int size, int first, int total)
  72:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   */
  73:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   int value(int p) {return int(Fl_Slider::value((double)p));}
  74:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  75:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   /**
  76:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     Sets the position, size and range of the slider in the scrollbar.
  77:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     \param[in] pos   position, first line displayed
  78:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     \param[in] windowSize  number of lines displayed
  79:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     \param[in] first number of first line
  80:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     \param[in] total total number of lines
  81:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  82:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     You should call this every time your window changes size, your data
  83:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     changes size, or your scroll position changes (even if in response
  84:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     to a callback from this scrollbar).
  85:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     All necessary calls to redraw() are done.
  86:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  87:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     Calls Fl_Slider::scrollvalue(int pos, int size, int first, int total).
  88:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   */
  89:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   int value(int pos, int windowSize, int first, int total) {
  90:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     return scrollvalue(pos, windowSize, first, total);
 1712              		.loc 5 90 0
 1713 0132 448B8424 		movl	136(%rsp), %r8d
 1713      88000000 
 1714 013a 4C89E7   		movq	%r12, %rdi
 1715 013d 8B8C2484 		movl	132(%rsp), %ecx
 1715      000000
 1716 0144 8B942480 		movl	128(%rsp), %edx
 1716      000000
 1717              	.LBE396:
 1718              	.LBE395:
 310:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 1719              		.loc 3 310 0
 1720 014b 89B3A400 		movl	%esi, 164(%rbx)
 1720      0000
 1721 0151 89B3AC00 		movl	%esi, 172(%rbx)
 1721      0000
 1722              	.LVL212:
 1723              	.LBB398:
 1724              	.LBB397:
 1725              		.loc 5 90 0
 1726 0157 E8000000 		call	_ZN9Fl_Slider11scrollvalueEiiii
 1726      00
 1727              	.LVL213:
 1728              	.LBE397:
 1729              	.LBE398:
 313:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 1730              		.loc 3 313 0
 1731 015c 448B4424 		movl	88(%rsp), %r8d
 1731      58
 1732 0161 8B4C2454 		movl	84(%rsp), %ecx
 1733 0165 4889EF   		movq	%rbp, %rdi
 1734 0168 8B542450 		movl	80(%rsp), %edx
 1735 016c 8B74244C 		movl	76(%rsp), %esi
 1736 0170 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 1736      00
 1737              	.LVL214:
 314:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1738              		.loc 3 314 0
 1739 0175 8B74245C 		movl	92(%rsp), %esi
 1740              	.LBB399:
 1741              	.LBB400:
 1742              		.loc 5 90 0
 1743 0179 448B4424 		movl	104(%rsp), %r8d
 1743      68
 1744 017e 4889EF   		movq	%rbp, %rdi
 1745 0181 8B4C2464 		movl	100(%rsp), %ecx
 1746 0185 8B542460 		movl	96(%rsp), %edx
 1747              	.LBE400:
 1748              	.LBE399:
 314:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1749              		.loc 3 314 0
 1750 0189 89B3A000 		movl	%esi, 160(%rbx)
 1750      0000
 1751 018f 89B3A800 		movl	%esi, 168(%rbx)
 1751      0000
 1752              	.LVL215:
 1753              	.LBB402:
 1754              	.LBB401:
 1755              		.loc 5 90 0
 1756 0195 E8000000 		call	_ZN9Fl_Slider11scrollvalueEiiii
 1756      00
 1757              	.LVL216:
 1758              	.LBE401:
 1759              	.LBE402:
 1760              	.LBE382:
 319:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 1761              		.loc 3 319 0
 1762 019a 4584ED   		testb	%r13b, %r13b
 320:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 1763              		.loc 3 320 0
 1764 019d 4C89E6   		movq	%r12, %rsi
 1765 01a0 4889DF   		movq	%rbx, %rdi
 319:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 1766              		.loc 3 319 0
 1767 01a3 7863     		js	.L158
 328:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1768              		.loc 3 328 0
 1769 01a5 E8000000 		call	_ZNK8Fl_Group12update_childER9Fl_Widget
 1769      00
 1770              	.LVL217:
 329:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 1771              		.loc 3 329 0
 1772 01aa 4889EE   		movq	%rbp, %rsi
 1773 01ad 4889DF   		movq	%rbx, %rdi
 1774 01b0 E8000000 		call	_ZNK8Fl_Group12update_childER9Fl_Widget
 1774      00
 1775              	.LVL218:
 1776              	.L114:
 331:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1777              		.loc 3 331 0
 1778 01b5 488B8424 		movq	152(%rsp), %rax
 1778      98000000 
 1779 01bd 64483304 		xorq	%fs:40, %rax
 1779      25280000 
 1779      00
 1780 01c6 0F85EE02 		jne	.L159
 1780      0000
 1781 01cc 4881C4A0 		addq	$160, %rsp
 1781      000000
 1782              		.cfi_remember_state
 1783              		.cfi_def_cfa_offset 48
 1784 01d3 5B       		popq	%rbx
 1785              		.cfi_def_cfa_offset 40
 1786              	.LVL219:
 1787 01d4 5D       		popq	%rbp
 1788              		.cfi_def_cfa_offset 32
 1789              	.LVL220:
 1790 01d5 415C     		popq	%r12
 1791              		.cfi_def_cfa_offset 24
 1792              	.LVL221:
 1793 01d7 415D     		popq	%r13
 1794              		.cfi_def_cfa_offset 16
 1795 01d9 415E     		popq	%r14
 1796              		.cfi_def_cfa_offset 8
 1797 01db C3       		ret
 1798              	.LVL222:
 1799 01dc 0F1F4000 		.p2align 4,,10
 1800              		.p2align 3
 1801              	.L134:
 1802              		.cfi_restore_state
 1803              	.LBB407:
 304:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1804              		.loc 3 304 0
 1805 01e0 8B442410 		movl	16(%rsp), %eax
 1806 01e4 3B839C01 		cmpl	412(%rbx), %eax
 1806      0000
 1807 01ea 41BD80FF 		movl	$-128, %r13d
 1807      FFFF
 1808 01f0 0F8511FF 		jne	.L136
 1808      FFFF
 1809              	.LVL223:
 1810 01f6 3B83E000 		cmpl	224(%rbx), %eax
 1810      0000
 1811 01fc 440F44ED 		cmove	%ebp, %r13d
 1812 0200 E902FFFF 		jmp	.L136
 1812      FF
 1813              	.LVL224:
 1814              		.p2align 4,,10
 1815 0205 0F1F00   		.p2align 3
 1816              	.L158:
 1817              	.LBE407:
 320:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 1818              		.loc 3 320 0
 1819 0208 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 1819      00
 1820              	.LVL225:
 321:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 1821              		.loc 3 321 0
 1822 020d 4889EE   		movq	%rbp, %rsi
 1823 0210 4889DF   		movq	%rbx, %rdi
 1824 0213 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 1824      00
 1825              	.LVL226:
 322:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 1826              		.loc 3 322 0
 1827 0218 F6831801 		testb	$2, 280(%rbx)
 1827      000002
 1828 021f 7594     		jne	.L114
 1829              	.LVL227:
 322:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 1830              		.loc 3 322 0 is_stmt 0 discriminator 1
 1831 0221 F683D001 		testb	$2, 464(%rbx)
 1831      000002
 1832 0228 758B     		jne	.L114
 1833              	.LVL228:
 1834              	.LBB408:
 1835              	.LBB409:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1836              		.loc 4 52 0 is_stmt 1
 1837 022a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1837      000000
 1838 0231 8B7364   		movl	100(%rbx), %esi
 1839 0234 488B07   		movq	(%rdi), %rax
 1840 0237 FF908800 		call	*136(%rax)
 1840      0000
 1841              	.LVL229:
 1842              	.LBE409:
 1843              	.LBE408:
 1844              	.LBB410:
 1845              	.LBB411:
 1846              		.loc 4 206 0
 1847 023d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1847      000000
 1848 0244 8B8BE000 		movl	224(%rbx), %ecx
 1848      0000
 1849 024a 8B939401 		movl	404(%rbx), %edx
 1849      0000
 1850 0250 8BB3D800 		movl	216(%rbx), %esi
 1850      0000
 1851 0256 448B839C 		movl	412(%rbx), %r8d
 1851      010000
 1852 025d 488B07   		movq	(%rdi), %rax
 1853 0260 FF5020   		call	*32(%rax)
 1854              	.LVL230:
 1855 0263 E94DFFFF 		jmp	.L114
 1855      FF
 1856              	.LVL231:
 1857 0268 0F1F8400 		.p2align 4,,10
 1857      00000000 
 1858              		.p2align 3
 1859              	.L155:
 1860              	.LBE411:
 1861              	.LBE410:
 1862              	.LBB412:
 1863              	.LBB378:
 1864              	.LBB372:
 1865              	.LBB373:
 1866              	.LBB374:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1867              		.loc 4 82 0
 1868 0270 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1868      000000
 1869 0277 8B542404 		movl	4(%rsp), %edx
 1870 027b 448B4424 		movl	12(%rsp), %r8d
 1870      0C
 1871 0280 8B4C2408 		movl	8(%rsp), %ecx
 1872 0284 8B3424   		movl	(%rsp), %esi
 1873 0287 488B07   		movq	(%rdi), %rax
 1874 028a FF905001 		call	*336(%rax)
 1874      0000
 1875              	.LVL232:
 1876              	.LBE374:
 1877              	.LBE373:
 274:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 1878              		.loc 3 274 0
 1879 0290 4889DF   		movq	%rbx, %rdi
 1880 0293 E8000000 		call	_ZNK8Fl_Group5arrayEv
 1880      00
 1881              	.LVL233:
 1882 0298 4989C4   		movq	%rax, %r12
 1883              	.LVL234:
 1884 029b 8B839000 		movl	144(%rbx), %eax
 1884      0000
 1885              	.LVL235:
 1886 02a1 8D50FD   		leal	-3(%rax), %edx
 1887              	.LBB375:
 275:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1888              		.loc 3 275 0
 1889 02a4 83F802   		cmpl	$2, %eax
 1890 02a7 4D8D6CD4 		leaq	8(%r12,%rdx,8), %r13
 1890      08
 1891 02ac 7418     		je	.L127
 1892              	.LVL236:
 1893 02ae 6690     		.p2align 4,,10
 1894              		.p2align 3
 1895              	.L126:
 275:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1896              		.loc 3 275 0 is_stmt 0 discriminator 2
 1897 02b0 4983C408 		addq	$8, %r12
 1898              	.LVL237:
 1899 02b4 498B7424 		movq	-8(%r12), %rsi
 1899      F8
 1900 02b9 4889DF   		movq	%rbx, %rdi
 1901 02bc E8000000 		call	_ZNK8Fl_Group12update_childER9Fl_Widget
 1901      00
 1902              	.LVL238:
 1903 02c1 4D39EC   		cmpq	%r13, %r12
 1904 02c4 75EA     		jne	.L126
 1905              	.L127:
 1906              	.LBE375:
 1907              	.LBB376:
 1908              	.LBB377:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1909              		.loc 4 103 0 is_stmt 1
 1910 02c6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1910      000000
 1911 02cd 488B07   		movq	(%rdi), %rax
 1912 02d0 FF907001 		call	*368(%rax)
 1912      0000
 1913              	.LVL239:
 1914 02d6 E98AFDFF 		jmp	.L116
 1914      FF
 1915              	.LVL240:
 1916 02db 0F1F4400 		.p2align 4,,10
 1916      00
 1917              		.p2align 3
 1918              	.L154:
 1919              	.LBE377:
 1920              	.LBE376:
 1921              	.LBE372:
 1922              	.LBE378:
 1923              	.LBB379:
 1924              	.LBB367:
 252:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1925              		.loc 3 252 0
 1926 02e0 448B8BAC 		movl	172(%rbx), %r9d
 1926      000000
 1927 02e7 448B83A8 		movl	168(%rbx), %r8d
 1927      000000
 1928 02ee 442B8BA4 		subl	164(%rbx), %r9d
 1928      000000
 1929 02f5 442B83A0 		subl	160(%rbx), %r8d
 1929      000000
 1930 02fc 53       		pushq	%rbx
 1931              		.cfi_def_cfa_offset 216
 1932 02fd 68000000 		pushq	$_ZN9Fl_Scroll9draw_clipEPviiii
 1932      00
 1933              		.cfi_def_cfa_offset 224
 1934 0302 8B542418 		movl	24(%rsp), %edx
 1935 0306 8B4C241C 		movl	28(%rsp), %ecx
 1936 030a 8B742414 		movl	20(%rsp), %esi
 1937 030e 8B7C2410 		movl	16(%rsp), %edi
 1938 0312 E8000000 		call	_Z9fl_scrolliiiiiiPFvPviiiiES_
 1938      00
 1939              	.LVL241:
 255:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 1940              		.loc 3 255 0
 1941 0317 4889DF   		movq	%rbx, %rdi
 1942 031a E8000000 		call	_ZNK8Fl_Group5arrayEv
 1942      00
 1943              	.LVL242:
 1944 031f 8B939000 		movl	144(%rbx), %edx
 1944      0000
 1945              	.LVL243:
 1946              	.LBB368:
 261:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 1947              		.loc 3 261 0
 1948 0325 5E       		popq	%rsi
 1949              		.cfi_def_cfa_offset 216
 1950 0326 5F       		popq	%rdi
 1951              		.cfi_def_cfa_offset 208
 1952 0327 83FA02   		cmpl	$2, %edx
 1953 032a 0F847401 		je	.L142
 1953      0000
 1954 0330 83EA03   		subl	$3, %edx
 1955              	.LVL244:
 1956 0333 4531E4   		xorl	%r12d, %r12d
 1957 0336 41BE3F42 		movl	$999999, %r14d
 1957      0F00
 1958 033c 488D7CD0 		leaq	8(%rax,%rdx,8), %rdi
 1958      08
 1959 0341 4531ED   		xorl	%r13d, %r13d
 1960 0344 B93F420F 		movl	$999999, %ecx
 1960      00
 1961              	.LVL245:
 1962 0349 0F1F8000 		.p2align 4,,10
 1962      000000
 1963              		.p2align 3
 1964              	.L120:
 262:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1965              		.loc 3 262 0
 1966 0350 488B30   		movq	(%rax), %rsi
 1967 0353 8B5620   		movl	32(%rsi), %edx
 1968              	.LVL246:
 1969 0356 39D1     		cmpl	%edx, %ecx
 1970 0358 0F4FCA   		cmovg	%edx, %ecx
 1971              	.LVL247:
 263:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 1972              		.loc 3 263 0
 1973 035b 035628   		addl	40(%rsi), %edx
 1974 035e 4139D5   		cmpl	%edx, %r13d
 1975 0361 440F4CEA 		cmovl	%edx, %r13d
 1976              	.LVL248:
 1977 0365 8B5624   		movl	36(%rsi), %edx
 1978              	.LVL249:
 1979 0368 4139D6   		cmpl	%edx, %r14d
 1980 036b 440F4FF2 		cmovg	%edx, %r14d
 1981              	.LVL250:
 265:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 1982              		.loc 3 265 0
 1983 036f 03562C   		addl	44(%rsi), %edx
 1984 0372 4139D4   		cmpl	%edx, %r12d
 1985 0375 440F4CE2 		cmovl	%edx, %r12d
 1986              	.LVL251:
 261:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 1987              		.loc 3 261 0
 1988 0379 4883C008 		addq	$8, %rax
 1989              	.LVL252:
 1990 037d 4839C7   		cmpq	%rax, %rdi
 1991 0380 75CE     		jne	.L120
 1992              	.LVL253:
 1993              	.L119:
 1994              	.LBE368:
 267:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 1995              		.loc 3 267 0
 1996 0382 8B3424   		movl	(%rsp), %esi
 1997 0385 39CE     		cmpl	%ecx, %esi
 1998 0387 0F8CB300 		jl	.L160
 1998      0000
 1999              	.LVL254:
 2000              	.L121:
 268:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 2001              		.loc 3 268 0
 2002 038d 8B4C2408 		movl	8(%rsp), %ecx
 2003 0391 01F1     		addl	%esi, %ecx
 2004 0393 4139CD   		cmpl	%ecx, %r13d
 2005 0396 0F8C8400 		jl	.L161
 2005      0000
 2006              	.L122:
 269:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2007              		.loc 3 269 0
 2008 039c 8B542404 		movl	4(%rsp), %edx
 2009 03a0 4139D6   		cmpl	%edx, %r14d
 2010 03a3 7F5B     		jg	.L162
 2011              	.L123:
 270:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 2012              		.loc 3 270 0
 2013 03a5 0354240C 		addl	12(%rsp), %edx
 2014 03a9 4139D4   		cmpl	%edx, %r12d
 2015 03ac 4189D0   		movl	%edx, %r8d
 2016 03af 0F8DA6FC 		jge	.L118
 2016      FFFF
 270:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 2017              		.loc 3 270 0 is_stmt 0 discriminator 1
 2018 03b5 8B4C2408 		movl	8(%rsp), %ecx
 2019 03b9 8B3424   		movl	(%rsp), %esi
 2020 03bc 4529E0   		subl	%r12d, %r8d
 2021 03bf 4489E2   		movl	%r12d, %edx
 2022 03c2 4889DF   		movq	%rbx, %rdi
 2023 03c5 E8000000 		call	_ZN9Fl_Scroll9draw_clipEPviiii
 2023      00
 2024              	.LVL255:
 2025 03ca E98CFCFF 		jmp	.L118
 2025      FF
 2026              	.LVL256:
 2027 03cf 90       		.p2align 4,,10
 2028              		.p2align 3
 2029              	.L131:
 2030              	.LBE367:
 2031              	.LBE379:
 2032              	.LBE412:
 2033              	.LBB413:
 292:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 2034              		.loc 3 292 0 is_stmt 1
 2035 03d0 448B4424 		movl	120(%rsp), %r8d
 2035      78
 2036 03d5 8B4C2474 		movl	116(%rsp), %ecx
 2037              	.LBB403:
 2038              	.LBB404:
 702:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2039              		.loc 1 702 0
 2040 03d9 83C802   		orl	$2, %eax
 2041              	.LBE404:
 2042              	.LBE403:
 292:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 2043              		.loc 3 292 0
 2044 03dc 8B542470 		movl	112(%rsp), %edx
 2045 03e0 8B74246C 		movl	108(%rsp), %esi
 2046 03e4 4889DF   		movq	%rbx, %rdi
 2047              	.LBB406:
 2048              	.LBB405:
 702:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2049              		.loc 1 702 0
 2050 03e7 89831801 		movl	%eax, 280(%rbx)
 2050      0000
 2051              	.LBE405:
 2052              	.LBE406:
 293:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2053              		.loc 3 293 0
 2054 03ed BD80FFFF 		movl	$-128, %ebp
 2054      FF
 292:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 2055              		.loc 3 292 0
 2056 03f2 E8000000 		call	_ZN9Fl_Scroll9draw_clipEPviiii
 2056      00
 2057              	.LVL257:
 2058 03f7 E98CFCFF 		jmp	.L130
 2058      FF
 2059              	.LVL258:
 2060 03fc 0F1F4000 		.p2align 4,,10
 2061              		.p2align 3
 2062              	.L162:
 2063              	.LBE413:
 2064              	.LBB414:
 2065              	.LBB380:
 2066              	.LBB369:
 269:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2067              		.loc 3 269 0 discriminator 1
 2068 0400 8B4C2408 		movl	8(%rsp), %ecx
 2069 0404 8B3424   		movl	(%rsp), %esi
 2070 0407 4129D6   		subl	%edx, %r14d
 2071 040a 4589F0   		movl	%r14d, %r8d
 2072 040d 4889DF   		movq	%rbx, %rdi
 2073 0410 E8000000 		call	_ZN9Fl_Scroll9draw_clipEPviiii
 2073      00
 2074              	.LVL259:
 2075 0415 8B542404 		movl	4(%rsp), %edx
 2076 0419 EB8A     		jmp	.L123
 2077 041b 0F1F4400 		.p2align 4,,10
 2077      00
 2078              		.p2align 3
 2079              	.L161:
 268:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 2080              		.loc 3 268 0 discriminator 1
 2081 0420 448B4424 		movl	12(%rsp), %r8d
 2081      0C
 2082 0425 8B542404 		movl	4(%rsp), %edx
 2083 0429 4429E9   		subl	%r13d, %ecx
 2084 042c 4489EE   		movl	%r13d, %esi
 2085 042f 4889DF   		movq	%rbx, %rdi
 2086 0432 E8000000 		call	_ZN9Fl_Scroll9draw_clipEPviiii
 2086      00
 2087              	.LVL260:
 2088 0437 E960FFFF 		jmp	.L122
 2088      FF
 2089              	.LVL261:
 2090 043c 0F1F4000 		.p2align 4,,10
 2091              		.p2align 3
 2092              	.L160:
 267:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 2093              		.loc 3 267 0 discriminator 1
 2094 0440 448B4424 		movl	12(%rsp), %r8d
 2094      0C
 2095 0445 8B542404 		movl	4(%rsp), %edx
 2096 0449 29F1     		subl	%esi, %ecx
 2097 044b 4889DF   		movq	%rbx, %rdi
 2098 044e E8000000 		call	_ZN9Fl_Scroll9draw_clipEPviiii
 2098      00
 2099              	.LVL262:
 2100 0453 8B3424   		movl	(%rsp), %esi
 2101 0456 E932FFFF 		jmp	.L121
 2101      FF
 2102              	.LVL263:
 2103 045b 0F1F4400 		.p2align 4,,10
 2103      00
 2104              		.p2align 3
 2105              	.L153:
 2106              	.LBE369:
 2107              	.LBE380:
 247:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2108              		.loc 3 247 0
 2109 0460 8B4364   		movl	100(%rbx), %eax
 2110 0463 0FB6736E 		movzbl	110(%rbx), %esi
 2111 0467 4883EC08 		subq	$8, %rsp
 2112              		.cfi_def_cfa_offset 216
 2113 046b 448B4B2C 		movl	44(%rbx), %r9d
 2114 046f 8B4B24   		movl	36(%rbx), %ecx
 2115 0472 4889DF   		movq	%rbx, %rdi
 2116 0475 8B5320   		movl	32(%rbx), %edx
 2117 0478 448B4328 		movl	40(%rbx), %r8d
 2118 047c 50       		pushq	%rax
 2119              		.cfi_def_cfa_offset 224
 2120 047d E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2120      00
 2121              	.LVL264:
 248:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 2122              		.loc 3 248 0
 2123 0482 448B4424 		movl	28(%rsp), %r8d
 2123      1C
 2124 0487 8B4C2418 		movl	24(%rsp), %ecx
 2125 048b 4889DF   		movq	%rbx, %rdi
 2126 048e 8B542414 		movl	20(%rsp), %edx
 2127 0492 8B742410 		movl	16(%rsp), %esi
 2128 0496 E8000000 		call	_ZN9Fl_Scroll9draw_clipEPviiii
 2128      00
 2129              	.LVL265:
 2130 049b 4158     		popq	%r8
 2131              		.cfi_def_cfa_offset 216
 2132 049d 4159     		popq	%r9
 2133              		.cfi_def_cfa_offset 208
 2134 049f E9C1FBFF 		jmp	.L116
 2134      FF
 2135              	.LVL266:
 2136              	.L142:
 2137              	.LBB381:
 2138              	.LBB370:
 260:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 2139              		.loc 3 260 0
 2140 04a4 4531E4   		xorl	%r12d, %r12d
 259:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2141              		.loc 3 259 0
 2142 04a7 41BE3F42 		movl	$999999, %r14d
 2142      0F00
 258:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 2143              		.loc 3 258 0
 2144 04ad 4531ED   		xorl	%r13d, %r13d
 257:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 2145              		.loc 3 257 0
 2146 04b0 B93F420F 		movl	$999999, %ecx
 2146      00
 2147 04b5 E9C8FEFF 		jmp	.L119
 2147      FF
 2148              	.LVL267:
 2149              	.L159:
 2150              	.LBE370:
 2151              	.LBE381:
 2152              	.LBE414:
 331:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2153              		.loc 3 331 0
 2154 04ba E8000000 		call	__stack_chk_fail
 2154      00
 2155              	.LVL268:
 2156              		.cfi_endproc
 2157              	.LFE502:
 2159              		.section	.text.unlikely._ZN9Fl_Scroll4drawEv
 2160              	.LCOLDE12:
 2161              		.section	.text._ZN9Fl_Scroll4drawEv
 2162              	.LHOTE12:
 2163              		.section	.text.unlikely._ZN9Fl_Scroll6resizeEiiii,"ax",@progbits
 2164              		.align 2
 2165              	.LCOLDB13:
 2166              		.section	.text._ZN9Fl_Scroll6resizeEiiii,"ax",@progbits
 2167              	.LHOTB13:
 2168              		.align 2
 2169              		.p2align 4,,15
 2170              		.globl	_ZN9Fl_Scroll6resizeEiiii
 2172              	_ZN9Fl_Scroll6resizeEiiii:
 2173              	.LFB503:
 357:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 2174              		.loc 3 357 0
 2175              		.cfi_startproc
 2176              	.LVL269:
 2177 0000 4157     		pushq	%r15
 2178              		.cfi_def_cfa_offset 16
 2179              		.cfi_offset 15, -16
 2180 0002 4156     		pushq	%r14
 2181              		.cfi_def_cfa_offset 24
 2182              		.cfi_offset 14, -24
 359:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2183              		.loc 3 359 0
 2184 0004 89C8     		movl	%ecx, %eax
 357:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 2185              		.loc 3 357 0
 2186 0006 4155     		pushq	%r13
 2187              		.cfi_def_cfa_offset 32
 2188              		.cfi_offset 13, -32
 2189 0008 4154     		pushq	%r12
 2190              		.cfi_def_cfa_offset 40
 2191              		.cfi_offset 12, -40
 2192 000a 4189D6   		movl	%edx, %r14d
 2193 000d 55       		pushq	%rbp
 2194              		.cfi_def_cfa_offset 48
 2195              		.cfi_offset 6, -48
 2196 000e 53       		pushq	%rbx
 2197              		.cfi_def_cfa_offset 56
 2198              		.cfi_offset 3, -56
 2199 000f 4889FB   		movq	%rdi, %rbx
 358:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2200              		.loc 3 358 0
 2201 0012 4189D4   		movl	%edx, %r12d
 2202 0015 4189F5   		movl	%esi, %r13d
 357:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 2203              		.loc 3 357 0
 2204 0018 4883EC28 		subq	$40, %rsp
 2205              		.cfi_def_cfa_offset 96
 359:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2206              		.loc 3 359 0
 2207 001c 2B4728   		subl	40(%rdi), %eax
 358:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2208              		.loc 3 358 0
 2209 001f 442B6F20 		subl	32(%rdi), %r13d
 2210              	.LVL270:
 357:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 2211              		.loc 3 357 0
 2212 0023 894C2418 		movl	%ecx, 24(%rsp)
 2213 0027 8974240C 		movl	%esi, 12(%rsp)
 2214 002b 44894424 		movl	%r8d, 28(%rsp)
 2214      1C
 358:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2215              		.loc 3 358 0
 2216 0030 442B6724 		subl	36(%rdi), %r12d
 2217              	.LVL271:
 359:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2218              		.loc 3 359 0
 2219 0034 89442410 		movl	%eax, 16(%rsp)
 2220              	.LVL272:
 2221 0038 4489C0   		movl	%r8d, %eax
 2222              	.LVL273:
 2223 003b 2B472C   		subl	44(%rdi), %eax
 2224 003e 89442414 		movl	%eax, 20(%rsp)
 2225              	.LVL274:
 360:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2226              		.loc 3 360 0
 2227 0042 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 2227      00
 2228              	.LVL275:
 361:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 2229              		.loc 3 361 0
 2230 0047 4889DF   		movq	%rbx, %rdi
 2231 004a E8000000 		call	_ZN9Fl_Scroll19fix_scrollbar_orderEv
 2231      00
 2232              	.LVL276:
 363:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2233              		.loc 3 363 0
 2234 004f 4889DF   		movq	%rbx, %rdi
 2235 0052 E8000000 		call	_ZNK8Fl_Group5arrayEv
 2235      00
 2236              	.LVL277:
 2237 0057 8B939000 		movl	144(%rbx), %edx
 2237      0000
 2238              	.LVL278:
 2239 005d 4989C7   		movq	%rax, %r15
 2240 0060 8D4AFD   		leal	-3(%rdx), %ecx
 2241              	.LBB415:
 364:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 2242              		.loc 3 364 0
 2243 0063 83FA02   		cmpl	$2, %edx
 2244 0066 488D6CC8 		leaq	8(%rax,%rcx,8), %rbp
 2244      08
 2245 006b 7429     		je	.L168
 2246              	.LVL279:
 2247 006d 0F1F00   		.p2align 4,,10
 2248              		.p2align 3
 2249              	.L167:
 2250              	.LBB416:
 365:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2251              		.loc 3 365 0
 2252 0070 4983C708 		addq	$8, %r15
 2253              	.LVL280:
 2254 0074 498B7FF8 		movq	-8(%r15), %rdi
 2255              	.LVL281:
 2256              	.LBB417:
 2257              	.LBB418:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2258              		.loc 1 332 0
 2259 0078 8B5724   		movl	36(%rdi), %edx
 2260 007b 8B7720   		movl	32(%rdi), %esi
 2261 007e 488B07   		movq	(%rdi), %rax
 2262 0081 8B4F28   		movl	40(%rdi), %ecx
 2263 0084 448B472C 		movl	44(%rdi), %r8d
 2264 0088 4401E2   		addl	%r12d, %edx
 2265              	.LVL282:
 2266 008b 4401EE   		addl	%r13d, %esi
 2267              	.LVL283:
 2268 008e FF5020   		call	*32(%rax)
 2269              	.LVL284:
 2270              	.LBE418:
 2271              	.LBE417:
 2272              	.LBE416:
 364:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 2273              		.loc 3 364 0
 2274 0091 4939EF   		cmpq	%rbp, %r15
 2275 0094 75DA     		jne	.L167
 2276              	.LVL285:
 2277              	.L168:
 2278              	.LBE415:
 2279              	.LBB419:
 368:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 2280              		.loc 3 368 0
 2281 0096 8B442410 		movl	16(%rsp), %eax
 2282 009a 0B442414 		orl	20(%rsp), %eax
 2283 009e 0F85DC00 		jne	.L185
 2283      0000
 2284              	.LVL286:
 2285              	.LBB420:
 369:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 2286              		.loc 3 369 0
 2287 00a4 F6831801 		testb	$2, 280(%rbx)
 2287      000002
 2288 00ab 0F848F00 		je	.L186
 2288      0000
 2289              	.LVL287:
 2290              	.L169:
 2291 00b1 8BAB0C01 		movl	268(%rbx), %ebp
 2291      0000
 2292              	.LVL288:
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2293              		.loc 3 372 0
 2294 00b7 4489F2   		movl	%r14d, %edx
 371:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 2295              		.loc 3 371 0
 2296 00ba 4531E4   		xorl	%r12d, %r12d
 2297              	.LVL289:
 370:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 2298              		.loc 3 370 0
 2299 00bd 89E8     		movl	%ebp, %eax
 371:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 2300              		.loc 3 371 0
 2301 00bf 83E501   		andl	$1, %ebp
 370:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 2302              		.loc 3 370 0
 2303 00c2 83E004   		andl	$4, %eax
 2304              	.LVL290:
 2305              	.L170:
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2306              		.loc 3 372 0 discriminator 4
 2307 00c5 85C0     		testl	%eax, %eax
 2308 00c7 8B8BE000 		movl	224(%rbx), %ecx
 2308      0000
 2309 00cd 7461     		je	.L171
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2310              		.loc 3 372 0 is_stmt 0
 2311 00cf 8B74240C 		movl	12(%rsp), %esi
 2312              	.LVL291:
 2313              	.L172:
 2314              	.LBB421:
 2315              	.LBB422:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2316              		.loc 1 332 0 is_stmt 1 discriminator 8
 2317 00d3 448B83E4 		movl	228(%rbx), %r8d
 2317      000000
 2318              	.LBE422:
 2319              	.LBE421:
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2320              		.loc 3 372 0 discriminator 8
 2321 00da 488DBBB8 		leaq	184(%rbx), %rdi
 2321      000000
 2322              	.LVL292:
 2323              	.LBB424:
 2324              	.LBB423:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2325              		.loc 1 332 0 discriminator 8
 2326 00e1 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 2326      00
 2327              	.LVL293:
 2328              	.LBE423:
 2329              	.LBE424:
 373:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2330              		.loc 3 373 0 discriminator 8
 2331 00e6 85ED     		testl	%ebp, %ebp
 2332 00e8 448B839C 		movl	412(%rbx), %r8d
 2332      010000
 2333 00ef 4489F2   		movl	%r14d, %edx
 2334 00f2 750B     		jne	.L174
 2335              	.LVL294:
 373:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2336              		.loc 3 373 0 is_stmt 0 discriminator 1
 2337 00f4 44037424 		addl	28(%rsp), %r14d
 2337      1C
 2338 00f9 4489F2   		movl	%r14d, %edx
 2339              	.LVL295:
 2340 00fc 4429C2   		subl	%r8d, %edx
 2341              	.LVL296:
 2342              	.L174:
 373:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2343              		.loc 3 373 0 discriminator 4
 2344 00ff 4584E4   		testb	%r12b, %r12b
 2345 0102 8B74240C 		movl	12(%rsp), %esi
 2346 0106 7406     		je	.L175
 2347              	.LVL297:
 373:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2348              		.loc 3 373 0 discriminator 5
 2349 0108 03B3E000 		addl	224(%rbx), %esi
 2349      0000
 2350              	.LVL298:
 2351              	.L175:
 2352              	.LBB425:
 2353              	.LBB426:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2354              		.loc 1 332 0 is_stmt 1 discriminator 8
 2355 010e 8B8B9801 		movl	408(%rbx), %ecx
 2355      0000
 2356              	.LBE426:
 2357              	.LBE425:
 2358              	.LBE420:
 2359              	.LBE419:
 378:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2360              		.loc 3 378 0 discriminator 8
 2361 0114 4883C428 		addq	$40, %rsp
 2362              		.cfi_remember_state
 2363              		.cfi_def_cfa_offset 56
 2364              	.LBB431:
 2365              	.LBB429:
 373:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 2366              		.loc 3 373 0 discriminator 8
 2367 0118 488DBB70 		leaq	368(%rbx), %rdi
 2367      010000
 2368              	.LVL299:
 2369              	.LBE429:
 2370              	.LBE431:
 378:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2371              		.loc 3 378 0 discriminator 8
 2372 011f 5B       		popq	%rbx
 2373              		.cfi_def_cfa_offset 48
 2374              	.LVL300:
 2375 0120 5D       		popq	%rbp
 2376              		.cfi_def_cfa_offset 40
 2377 0121 415C     		popq	%r12
 2378              		.cfi_def_cfa_offset 32
 2379 0123 415D     		popq	%r13
 2380              		.cfi_def_cfa_offset 24
 2381              	.LVL301:
 2382 0125 415E     		popq	%r14
 2383              		.cfi_def_cfa_offset 16
 2384 0127 415F     		popq	%r15
 2385              		.cfi_def_cfa_offset 8
 2386              	.LBB432:
 2387              	.LBB430:
 2388              	.LBB428:
 2389              	.LBB427:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2390              		.loc 1 332 0 discriminator 8
 2391 0129 E9000000 		jmp	_ZN9Fl_Widget6resizeEiiii
 2391      00
 2392              	.LVL302:
 2393 012e 6690     		.p2align 4,,10
 2394              		.p2align 3
 2395              	.L171:
 2396              		.cfi_restore_state
 2397              	.LBE427:
 2398              	.LBE428:
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2399              		.loc 3 372 0 discriminator 5
 2400 0130 8B742418 		movl	24(%rsp), %esi
 2401 0134 0374240C 		addl	12(%rsp), %esi
 2402 0138 29CE     		subl	%ecx, %esi
 2403 013a EB97     		jmp	.L172
 2404              	.LVL303:
 2405 013c 0F1F4000 		.p2align 4,,10
 2406              		.p2align 3
 2407              	.L186:
 369:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 2408              		.loc 3 369 0 discriminator 1
 2409 0140 F683D001 		testb	$2, 464(%rbx)
 2409      000002
 2410 0147 0F8564FF 		jne	.L169
 2410      FFFF
 2411              	.LVL304:
 2412 014d 8BAB0C01 		movl	268(%rbx), %ebp
 2412      0000
 2413              	.LVL305:
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2414              		.loc 3 372 0 discriminator 6
 2415 0153 4489F2   		movl	%r14d, %edx
 370:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 2416              		.loc 3 370 0 discriminator 6
 2417 0156 89E8     		movl	%ebp, %eax
 2418 0158 83E004   		andl	$4, %eax
 2419 015b 410F95C4 		setne	%r12b
 2420              	.LVL306:
 371:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 2421              		.loc 3 371 0 discriminator 6
 2422 015f 83E501   		andl	$1, %ebp
 2423              	.LVL307:
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2424              		.loc 3 372 0 discriminator 6
 2425 0162 4084ED   		testb	%bpl, %bpl
 2426 0165 0F845AFF 		je	.L170
 2426      FFFF
 2427              	.LVL308:
 372:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2428              		.loc 3 372 0 is_stmt 0 discriminator 1
 2429 016b 03939C01 		addl	412(%rbx), %edx
 2429      0000
 2430              	.LVL309:
 2431 0171 E94FFFFF 		jmp	.L170
 2431      FF
 2432              	.LVL310:
 2433 0176 662E0F1F 		.p2align 4,,10
 2433      84000000 
 2433      0000
 2434              		.p2align 3
 2435              	.L185:
 2436              	.LBE430:
 2437              	.LBE432:
 378:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2438              		.loc 3 378 0 is_stmt 1
 2439 0180 4883C428 		addq	$40, %rsp
 2440              		.cfi_def_cfa_offset 56
 2441              	.LBB433:
 376:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 2442              		.loc 3 376 0
 2443 0184 4889DF   		movq	%rbx, %rdi
 2444              	.LBE433:
 378:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2445              		.loc 3 378 0
 2446 0187 5B       		popq	%rbx
 2447              		.cfi_def_cfa_offset 48
 2448              	.LVL311:
 2449 0188 5D       		popq	%rbp
 2450              		.cfi_def_cfa_offset 40
 2451 0189 415C     		popq	%r12
 2452              		.cfi_def_cfa_offset 32
 2453              	.LVL312:
 2454 018b 415D     		popq	%r13
 2455              		.cfi_def_cfa_offset 24
 2456              	.LVL313:
 2457 018d 415E     		popq	%r14
 2458              		.cfi_def_cfa_offset 16
 2459              	.LVL314:
 2460 018f 415F     		popq	%r15
 2461              		.cfi_def_cfa_offset 8
 2462              	.LBB434:
 376:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 2463              		.loc 3 376 0
 2464 0191 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2464      00
 2465              	.LVL315:
 2466              	.LBE434:
 2467              		.cfi_endproc
 2468              	.LFE503:
 2470              		.section	.text.unlikely._ZN9Fl_Scroll6resizeEiiii
 2471              	.LCOLDE13:
 2472              		.section	.text._ZN9Fl_Scroll6resizeEiiii
 2473              	.LHOTE13:
 2474              		.section	.text.unlikely._ZN9Fl_Scroll6handleEi,"ax",@progbits
 2475              		.align 2
 2476              	.LCOLDB14:
 2477              		.section	.text._ZN9Fl_Scroll6handleEi,"ax",@progbits
 2478              	.LHOTB14:
 2479              		.align 2
 2480              		.p2align 4,,15
 2481              		.globl	_ZN9Fl_Scroll6handleEi
 2483              	_ZN9Fl_Scroll6handleEi:
 2484              	.LFB510:
 446:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 2485              		.loc 3 447 0
 2486              		.cfi_startproc
 2487              	.LVL316:
 2488 0000 55       		pushq	%rbp
 2489              		.cfi_def_cfa_offset 16
 2490              		.cfi_offset 6, -16
 2491 0001 53       		pushq	%rbx
 2492              		.cfi_def_cfa_offset 24
 2493              		.cfi_offset 3, -24
 2494 0002 89F5     		movl	%esi, %ebp
 2495 0004 4889FB   		movq	%rdi, %rbx
 2496 0007 4883EC08 		subq	$8, %rsp
 2497              		.cfi_def_cfa_offset 32
 448:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 2498              		.loc 3 448 0
 2499 000b E8000000 		call	_ZN9Fl_Scroll19fix_scrollbar_orderEv
 2499      00
 2500              	.LVL317:
 449:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 2501              		.loc 3 450 0
 2502 0010 4883C408 		addq	$8, %rsp
 2503              		.cfi_def_cfa_offset 24
 449:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2504              		.loc 3 449 0
 2505 0014 89EE     		movl	%ebp, %esi
 2506 0016 4889DF   		movq	%rbx, %rdi
 2507              		.loc 3 450 0
 2508 0019 5B       		popq	%rbx
 2509              		.cfi_def_cfa_offset 16
 2510              	.LVL318:
 2511 001a 5D       		popq	%rbp
 2512              		.cfi_def_cfa_offset 8
 2513              	.LVL319:
 449:fltk-1.3.4-1/src/Fl_Scroll.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2514              		.loc 3 449 0
 2515 001b E9000000 		jmp	_ZN8Fl_Group6handleEi
 2515      00
 2516              	.LVL320:
 2517              		.cfi_endproc
 2518              	.LFE510:
 2520              		.section	.text.unlikely._ZN9Fl_Scroll6handleEi
 2521              	.LCOLDE14:
 2522              		.section	.text._ZN9Fl_Scroll6handleEi
 2523              	.LHOTE14:
 2524              		.section	.text.unlikely._ZN9Fl_ScrollD2Ev,"axG",@progbits,_ZN9Fl_ScrollD5Ev,comdat
 2525              		.align 2
 2526              	.LCOLDB15:
 2527              		.section	.text._ZN9Fl_ScrollD2Ev,"axG",@progbits,_ZN9Fl_ScrollD5Ev,comdat
 2528              	.LHOTB15:
 2529              		.align 2
 2530              		.p2align 4,,15
 2531              		.weak	_ZN9Fl_ScrollD2Ev
 2533              	_ZN9Fl_ScrollD2Ev:
 2534              	.LFB512:
 2535              		.file 6 "fltk-1.3.4-1/FL/Fl_Scroll.H"
   1:fltk-1.3.4-1/FL/Fl_Scroll.H **** //
   2:fltk-1.3.4-1/FL/Fl_Scroll.H **** // "$Id: Fl_Scroll.H 10799 2015-07-18 23:59:54Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Scroll.H **** //
   4:fltk-1.3.4-1/FL/Fl_Scroll.H **** // Scroll header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Scroll.H **** //
   6:fltk-1.3.4-1/FL/Fl_Scroll.H **** // Copyright 1998-2015 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Scroll.H **** //
   8:fltk-1.3.4-1/FL/Fl_Scroll.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Scroll.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Scroll.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Scroll.H **** //
  12:fltk-1.3.4-1/FL/Fl_Scroll.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Scroll.H **** //
  14:fltk-1.3.4-1/FL/Fl_Scroll.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Scroll.H **** //
  16:fltk-1.3.4-1/FL/Fl_Scroll.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Scroll.H **** //
  18:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  19:fltk-1.3.4-1/FL/Fl_Scroll.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Scroll.H ****    Fl_Scroll widget . */
  21:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  22:fltk-1.3.4-1/FL/Fl_Scroll.H **** #ifndef Fl_Scroll_H
  23:fltk-1.3.4-1/FL/Fl_Scroll.H **** #define Fl_Scroll_H
  24:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  25:fltk-1.3.4-1/FL/Fl_Scroll.H **** #include "Fl_Group.H"
  26:fltk-1.3.4-1/FL/Fl_Scroll.H **** #include "Fl_Scrollbar.H"
  27:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  28:fltk-1.3.4-1/FL/Fl_Scroll.H **** /**
  29:fltk-1.3.4-1/FL/Fl_Scroll.H ****   This container widget lets you maneuver around a set of widgets much
  30:fltk-1.3.4-1/FL/Fl_Scroll.H ****   larger than your window.  If the child widgets are larger than the size
  31:fltk-1.3.4-1/FL/Fl_Scroll.H ****   of this object then scrollbars will appear so that you can scroll over
  32:fltk-1.3.4-1/FL/Fl_Scroll.H ****   to them:
  33:fltk-1.3.4-1/FL/Fl_Scroll.H ****   \image html Fl_Scroll.png
  34:fltk-1.3.4-1/FL/Fl_Scroll.H ****   \image latex  Fl_Scroll.png "Fl_Scroll" width=4cm
  35:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  36:fltk-1.3.4-1/FL/Fl_Scroll.H ****   If all of the child widgets are packed together into a solid
  37:fltk-1.3.4-1/FL/Fl_Scroll.H ****   rectangle then you want to set box() to FL_NO_BOX or
  38:fltk-1.3.4-1/FL/Fl_Scroll.H ****   one of the _FRAME types. This will result in the best output.
  39:fltk-1.3.4-1/FL/Fl_Scroll.H ****   However, if the child widgets are a sparse arrangement you must
  40:fltk-1.3.4-1/FL/Fl_Scroll.H ****   set box() to a real _BOX type. This can result in some
  41:fltk-1.3.4-1/FL/Fl_Scroll.H ****   blinking during redrawing, but that can be solved by using a
  42:fltk-1.3.4-1/FL/Fl_Scroll.H ****   Fl_Double_Window.
  43:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  44:fltk-1.3.4-1/FL/Fl_Scroll.H ****   By default you can scroll in both directions, and the scrollbars
  45:fltk-1.3.4-1/FL/Fl_Scroll.H ****   disappear if the data will fit in the area of the scroll.
  46:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  47:fltk-1.3.4-1/FL/Fl_Scroll.H ****   Use Fl_Scroll::type() to change this as follows :
  48:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  49:fltk-1.3.4-1/FL/Fl_Scroll.H ****   - 0                            - No scrollbars
  50:fltk-1.3.4-1/FL/Fl_Scroll.H ****   - Fl_Scroll::HORIZONTAL        - Only a horizontal scrollbar.
  51:fltk-1.3.4-1/FL/Fl_Scroll.H ****   - Fl_Scroll::VERTICAL          - Only a vertical scrollbar.
  52:fltk-1.3.4-1/FL/Fl_Scroll.H ****   - Fl_Scroll::BOTH              - The default is both scrollbars.
  53:fltk-1.3.4-1/FL/Fl_Scroll.H ****   - Fl_Scroll::HORIZONTAL_ALWAYS - Horizontal scrollbar always on, vertical always off.
  54:fltk-1.3.4-1/FL/Fl_Scroll.H ****   - Fl_Scroll::VERTICAL_ALWAYS   - Vertical scrollbar always on, horizontal always off.
  55:fltk-1.3.4-1/FL/Fl_Scroll.H ****   - Fl_Scroll::BOTH_ALWAYS       - Both always on.
  56:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  57:fltk-1.3.4-1/FL/Fl_Scroll.H ****   Use <B> scrollbar.align(int) ( see void Fl_Widget::align(Fl_Align) ) :</B>
  58:fltk-1.3.4-1/FL/Fl_Scroll.H ****   to change what side the scrollbars are drawn on.
  59:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  60:fltk-1.3.4-1/FL/Fl_Scroll.H ****   If the FL_ALIGN_LEFT bit is on, the vertical scrollbar is on the left.
  61:fltk-1.3.4-1/FL/Fl_Scroll.H ****   If the FL_ALIGN_TOP bit is on, the horizontal scrollbar is on
  62:fltk-1.3.4-1/FL/Fl_Scroll.H ****   the top. Note that only the alignment flags in scrollbar are
  63:fltk-1.3.4-1/FL/Fl_Scroll.H ****   considered. The flags in hscrollbar however are ignored.
  64:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  65:fltk-1.3.4-1/FL/Fl_Scroll.H ****   This widget can also be used to pan around a single child widget
  66:fltk-1.3.4-1/FL/Fl_Scroll.H ****   "canvas".  This child widget should be of your own class, with a
  67:fltk-1.3.4-1/FL/Fl_Scroll.H ****   draw() method that draws the contents.  The scrolling is done by
  68:fltk-1.3.4-1/FL/Fl_Scroll.H ****   changing the x() and y() of the widget, so this child
  69:fltk-1.3.4-1/FL/Fl_Scroll.H ****   must use the x() and y() to position its drawing.
  70:fltk-1.3.4-1/FL/Fl_Scroll.H ****   To speed up drawing it should test fl_not_clipped(int x,int y,int w,int h)
  71:fltk-1.3.4-1/FL/Fl_Scroll.H ****   to find out if a particular area of the widget must be drawn.
  72:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  73:fltk-1.3.4-1/FL/Fl_Scroll.H ****   Another very useful child is a single Fl_Pack, which is itself a group
  74:fltk-1.3.4-1/FL/Fl_Scroll.H ****   that packs its children together and changes size to surround them.
  75:fltk-1.3.4-1/FL/Fl_Scroll.H ****   Filling the Fl_Pack with Fl_Tabs groups (and then putting
  76:fltk-1.3.4-1/FL/Fl_Scroll.H ****   normal widgets inside those) gives you a very powerful scrolling list
  77:fltk-1.3.4-1/FL/Fl_Scroll.H ****   of individually-openable panels.
  78:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  79:fltk-1.3.4-1/FL/Fl_Scroll.H ****   Fluid lets you create these, but you can only lay out objects that
  80:fltk-1.3.4-1/FL/Fl_Scroll.H ****   fit inside the Fl_Scroll without scrolling.  Be sure to leave
  81:fltk-1.3.4-1/FL/Fl_Scroll.H ****   space for the scrollbars, as Fluid won't show these either.
  82:fltk-1.3.4-1/FL/Fl_Scroll.H **** 
  83:fltk-1.3.4-1/FL/Fl_Scroll.H ****   <I>You cannot use Fl_Window as a child of this since the
  84:fltk-1.3.4-1/FL/Fl_Scroll.H ****   clipping is not conveyed to it when drawn, and it will draw over the
  85:fltk-1.3.4-1/FL/Fl_Scroll.H ****   scrollbars and neighboring objects.</I>
  86:fltk-1.3.4-1/FL/Fl_Scroll.H **** */
  87:fltk-1.3.4-1/FL/Fl_Scroll.H **** class FL_EXPORT Fl_Scroll : public Fl_Group {
 2536              		.loc 6 87 0
 2537              		.cfi_startproc
 2538              	.LVL321:
 2539 0000 53       		pushq	%rbx
 2540              		.cfi_def_cfa_offset 16
 2541              		.cfi_offset 3, -16
 2542              		.loc 6 87 0
 2543 0001 4889FB   		movq	%rdi, %rbx
 2544              	.LBB436:
 2545 0004 48C70700 		movq	$_ZTV9Fl_Scroll+16, (%rdi)
 2545      000000
 2546 000b 488DBF70 		leaq	368(%rdi), %rdi
 2546      010000
 2547              	.LVL322:
 2548 0012 E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 2548      00
 2549              	.LVL323:
 2550 0017 488DBBB8 		leaq	184(%rbx), %rdi
 2550      000000
 2551 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 2551      00
 2552              	.LVL324:
 2553 0023 4889DF   		movq	%rbx, %rdi
 2554              	.LBE436:
 2555 0026 5B       		popq	%rbx
 2556              		.cfi_def_cfa_offset 8
 2557              	.LVL325:
 2558              	.LBB437:
 2559 0027 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 2559      00
 2560              	.LVL326:
 2561              	.LBE437:
 2562              		.cfi_endproc
 2563              	.LFE512:
 2565              		.section	.text.unlikely._ZN9Fl_ScrollD2Ev,"axG",@progbits,_ZN9Fl_ScrollD5Ev,comdat
 2566              	.LCOLDE15:
 2567              		.section	.text._ZN9Fl_ScrollD2Ev,"axG",@progbits,_ZN9Fl_ScrollD5Ev,comdat
 2568              	.LHOTE15:
 2569              		.weak	_ZN9Fl_ScrollD1Ev
 2570              		.set	_ZN9Fl_ScrollD1Ev,_ZN9Fl_ScrollD2Ev
 2571              		.section	.text.unlikely._ZN9Fl_ScrollD0Ev,"axG",@progbits,_ZN9Fl_ScrollD5Ev,comdat
 2572              		.align 2
 2573              	.LCOLDB16:
 2574              		.section	.text._ZN9Fl_ScrollD0Ev,"axG",@progbits,_ZN9Fl_ScrollD5Ev,comdat
 2575              	.LHOTB16:
 2576              		.align 2
 2577              		.p2align 4,,15
 2578              		.weak	_ZN9Fl_ScrollD0Ev
 2580              	_ZN9Fl_ScrollD0Ev:
 2581              	.LFB514:
 2582              		.loc 6 87 0
 2583              		.cfi_startproc
 2584              	.LVL327:
 2585 0000 53       		pushq	%rbx
 2586              		.cfi_def_cfa_offset 16
 2587              		.cfi_offset 3, -16
 2588              		.loc 6 87 0
 2589 0001 4889FB   		movq	%rdi, %rbx
 2590              	.LBB441:
 2591              	.LBB442:
 2592 0004 48C70700 		movq	$_ZTV9Fl_Scroll+16, (%rdi)
 2592      000000
 2593 000b 488DBF70 		leaq	368(%rdi), %rdi
 2593      010000
 2594              	.LVL328:
 2595 0012 E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 2595      00
 2596              	.LVL329:
 2597 0017 488DBBB8 		leaq	184(%rbx), %rdi
 2597      000000
 2598 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 2598      00
 2599              	.LVL330:
 2600 0023 4889DF   		movq	%rbx, %rdi
 2601 0026 E8000000 		call	_ZN8Fl_GroupD2Ev
 2601      00
 2602              	.LVL331:
 2603              	.LBE442:
 2604              	.LBE441:
 2605 002b 4889DF   		movq	%rbx, %rdi
 2606 002e 5B       		popq	%rbx
 2607              		.cfi_def_cfa_offset 8
 2608              	.LVL332:
 2609 002f E9000000 		jmp	_ZdlPv
 2609      00
 2610              	.LVL333:
 2611              		.cfi_endproc
 2612              	.LFE514:
 2614              		.section	.text.unlikely._ZN9Fl_ScrollD0Ev,"axG",@progbits,_ZN9Fl_ScrollD5Ev,comdat
 2615              	.LCOLDE16:
 2616              		.section	.text._ZN9Fl_ScrollD0Ev,"axG",@progbits,_ZN9Fl_ScrollD5Ev,comdat
 2617              	.LHOTE16:
 2618              		.weak	_ZTS9Fl_Scroll
 2619              		.section	.rodata._ZTS9Fl_Scroll,"aG",@progbits,_ZTS9Fl_Scroll,comdat
 2620              		.align 8
 2623              	_ZTS9Fl_Scroll:
 2624 0000 39466C5F 		.string	"9Fl_Scroll"
 2624      5363726F 
 2624      6C6C00
 2625              		.weak	_ZTI9Fl_Scroll
 2626              		.section	.rodata._ZTI9Fl_Scroll,"aG",@progbits,_ZTI9Fl_Scroll,comdat
 2627              		.align 8
 2630              	_ZTI9Fl_Scroll:
 2631 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 2631      00000000 
 2632 0008 00000000 		.quad	_ZTS9Fl_Scroll
 2632      00000000 
 2633 0010 00000000 		.quad	_ZTI8Fl_Group
 2633      00000000 
 2634              		.weak	_ZTV9Fl_Scroll
 2635              		.section	.rodata._ZTV9Fl_Scroll,"aG",@progbits,_ZTV9Fl_Scroll,comdat
 2636              		.align 8
 2639              	_ZTV9Fl_Scroll:
 2640 0000 00000000 		.quad	0
 2640      00000000 
 2641 0008 00000000 		.quad	_ZTI9Fl_Scroll
 2641      00000000 
 2642 0010 00000000 		.quad	_ZN9Fl_ScrollD1Ev
 2642      00000000 
 2643 0018 00000000 		.quad	_ZN9Fl_ScrollD0Ev
 2643      00000000 
 2644 0020 00000000 		.quad	_ZN9Fl_Scroll4drawEv
 2644      00000000 
 2645 0028 00000000 		.quad	_ZN9Fl_Scroll6handleEi
 2645      00000000 
 2646 0030 00000000 		.quad	_ZN9Fl_Scroll6resizeEiiii
 2646      00000000 
 2647 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 2647      00000000 
 2648 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 2648      00000000 
 2649 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 2649      00000000 
 2650 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 2650      00000000 
 2651 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 2651      00000000 
 2652              		.text
 2653              	.Letext0:
 2654              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 2655              	.Letext_cold0:
 2656              		.file 7 "fltk-1.3.4-1/FL/fl_types.h"
 2657              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2658              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2659              		.file 10 "/usr/include/libio.h"
 2660              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 2661              		.file 12 "fltk-1.3.4-1/FL/Fl.H"
 2662              		.file 13 "fltk-1.3.4-1/FL/Fl_Image.H"
 2663              		.file 14 "fltk-1.3.4-1/FL/Fl_Device.H"
 2664              		.file 15 "fltk-1.3.4-1/FL/Fl_Tiled_Image.H"
 2665              		.file 16 "fltk-1.3.4-1/FL/Fl_Valuator.H"
 2666              		.file 17 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Scroll.cxx
     /tmp/ccujwooc.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccujwooc.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccujwooc.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccujwooc.s:90     .text._ZN9Fl_Scroll9draw_clipEPviiii:0000000000000000 _ZN9Fl_Scroll9draw_clipEPviiii
     /tmp/ccujwooc.s:309    .text._ZN9Fl_Scroll5clearEv:0000000000000000 _ZN9Fl_Scroll5clearEv
     /tmp/ccujwooc.s:378    .text._ZN9Fl_Scroll19fix_scrollbar_orderEv:0000000000000000 _ZN9Fl_Scroll19fix_scrollbar_orderEv
     /tmp/ccujwooc.s:478    .text._ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE:0000000000000000 _ZN9Fl_Scroll17recalc_scrollbarsERNS_10ScrollInfoE
     /tmp/ccujwooc.s:990    .text._ZN9Fl_Scroll4bboxERiS0_S0_S0_:0000000000000000 _ZN9Fl_Scroll4bboxERiS0_S0_S0_
     /tmp/ccujwooc.s:1131   .text._ZN9Fl_Scroll9scroll_toEii:0000000000000000 _ZN9Fl_Scroll9scroll_toEii
     /tmp/ccujwooc.s:1318   .text._ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv:0000000000000000 _ZN9Fl_Scroll13hscrollbar_cbEP9Fl_WidgetPv
     /tmp/ccujwooc.s:1348   .text._ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv:0000000000000000 _ZN9Fl_Scroll12scrollbar_cbEP9Fl_WidgetPv
     /tmp/ccujwooc.s:1378   .text._ZN9Fl_ScrollC2EiiiiPKc:0000000000000000 _ZN9Fl_ScrollC2EiiiiPKc
     /tmp/ccujwooc.s:2639   .rodata._ZTV9Fl_Scroll:0000000000000000 _ZTV9Fl_Scroll
     /tmp/ccujwooc.s:1378   .text._ZN9Fl_ScrollC2EiiiiPKc:0000000000000000 _ZN9Fl_ScrollC1EiiiiPKc
     /tmp/ccujwooc.s:1537   .text._ZN9Fl_Scroll4drawEv:0000000000000000 _ZN9Fl_Scroll4drawEv
     /tmp/ccujwooc.s:2172   .text._ZN9Fl_Scroll6resizeEiiii:0000000000000000 _ZN9Fl_Scroll6resizeEiiii
     /tmp/ccujwooc.s:2483   .text._ZN9Fl_Scroll6handleEi:0000000000000000 _ZN9Fl_Scroll6handleEi
     /tmp/ccujwooc.s:2533   .text._ZN9Fl_ScrollD2Ev:0000000000000000 _ZN9Fl_ScrollD2Ev
     /tmp/ccujwooc.s:2533   .text._ZN9Fl_ScrollD2Ev:0000000000000000 _ZN9Fl_ScrollD1Ev
     /tmp/ccujwooc.s:2580   .text._ZN9Fl_ScrollD0Ev:0000000000000000 _ZN9Fl_ScrollD0Ev
     /tmp/ccujwooc.s:2623   .rodata._ZTS9Fl_Scroll:0000000000000000 _ZTS9Fl_Scroll
     /tmp/ccujwooc.s:2630   .rodata._ZTI9Fl_Scroll:0000000000000000 _ZTI9Fl_Scroll
                           .group:0000000000000000 _ZN9Fl_ScrollD5Ev
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
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b

UNDEFINED SYMBOLS
fl_graphics_driver
_ZNK8Fl_Group5arrayEv
_ZNK8Fl_Group10draw_childER9Fl_Widget
_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
_ZNK9Fl_Widget6windowEv
_ZN2Fl10scheme_bg_E
_ZN8Fl_Group6removeER9Fl_Widget
_ZN8Fl_Group5clearEv
_ZN8Fl_Group3addER9Fl_Widget
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN2Fl14scrollbar_sizeEv
_ZN9Fl_Widget6damageEh
_ZN8Fl_GroupC2EiiiiPKc
_ZN12Fl_ScrollbarC1EiiiiPKc
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Slider11scrollvalueEiiii
_ZNK8Fl_Group12update_childER9Fl_Widget
_Z9fl_scrolliiiiiiPFvPviiiiES_
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
__stack_chk_fail
_ZN9Fl_Widget6redrawEv
_ZN8Fl_Group6handleEi
_ZN12Fl_ScrollbarD1Ev
_ZN8Fl_GroupD2Ev
_ZdlPv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Group
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
