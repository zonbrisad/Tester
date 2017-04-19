   1              		.file	"Fl_Pack.cxx"
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
  17              	.LFB233:
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
  26              	.LFE233:
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
  42              	.LFB234:
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
  50              	.LFE234:
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
  66              	.LFB250:
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
  75              	.LFE250:
  77              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  78              	.LCOLDE2:
  79              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  80              	.LHOTE2:
  81              		.section	.text.unlikely._ZN7Fl_PackD2Ev,"axG",@progbits,_ZN7Fl_PackD5Ev,comdat
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZN7Fl_PackD2Ev,"axG",@progbits,_ZN7Fl_PackD5Ev,comdat
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.weak	_ZN7Fl_PackD2Ev
  90              	_ZN7Fl_PackD2Ev:
  91              	.LFB476:
  92              		.file 3 "fltk-1.3.4-1/FL/Fl_Pack.H"
   1:fltk-1.3.4-1/FL/Fl_Pack.H **** //
   2:fltk-1.3.4-1/FL/Fl_Pack.H **** // "$Id: Fl_Pack.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Pack.H **** //
   4:fltk-1.3.4-1/FL/Fl_Pack.H **** // Pack header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Pack.H **** //
   6:fltk-1.3.4-1/FL/Fl_Pack.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Pack.H **** //
   8:fltk-1.3.4-1/FL/Fl_Pack.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Pack.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Pack.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Pack.H **** //
  12:fltk-1.3.4-1/FL/Fl_Pack.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Pack.H **** //
  14:fltk-1.3.4-1/FL/Fl_Pack.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Pack.H **** //
  16:fltk-1.3.4-1/FL/Fl_Pack.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Pack.H **** //
  18:fltk-1.3.4-1/FL/Fl_Pack.H **** 
  19:fltk-1.3.4-1/FL/Fl_Pack.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Pack.H ****    Fl_Pack widget . */
  21:fltk-1.3.4-1/FL/Fl_Pack.H **** 
  22:fltk-1.3.4-1/FL/Fl_Pack.H **** #ifndef Fl_Pack_H
  23:fltk-1.3.4-1/FL/Fl_Pack.H **** #define Fl_Pack_H
  24:fltk-1.3.4-1/FL/Fl_Pack.H **** 
  25:fltk-1.3.4-1/FL/Fl_Pack.H **** #include <FL/Fl_Group.H>
  26:fltk-1.3.4-1/FL/Fl_Pack.H **** 
  27:fltk-1.3.4-1/FL/Fl_Pack.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Pack.H ****   This widget was designed to add the functionality of compressing and
  29:fltk-1.3.4-1/FL/Fl_Pack.H ****   aligning widgets.
  30:fltk-1.3.4-1/FL/Fl_Pack.H ****   <P>If type() is Fl_Pack::HORIZONTAL all the children are
  31:fltk-1.3.4-1/FL/Fl_Pack.H ****   resized to the height of the Fl_Pack, and are moved next to
  32:fltk-1.3.4-1/FL/Fl_Pack.H ****   each other horizontally. If type() is not Fl_Pack::HORIZONTAL
  33:fltk-1.3.4-1/FL/Fl_Pack.H ****   then the children are resized to the width and are stacked below each
  34:fltk-1.3.4-1/FL/Fl_Pack.H ****   other.  Then the Fl_Pack resizes itself to surround the child
  35:fltk-1.3.4-1/FL/Fl_Pack.H ****   widgets.
  36:fltk-1.3.4-1/FL/Fl_Pack.H ****   <P>This widget is needed for the Fl_Tabs.
  37:fltk-1.3.4-1/FL/Fl_Pack.H ****   In addition you may want to put the Fl_Pack inside an 
  38:fltk-1.3.4-1/FL/Fl_Pack.H ****   Fl_Scroll.
  39:fltk-1.3.4-1/FL/Fl_Pack.H **** 
  40:fltk-1.3.4-1/FL/Fl_Pack.H ****   <P>The resizable for Fl_Pack is set to NULL by default.</p>
  41:fltk-1.3.4-1/FL/Fl_Pack.H ****   <P>See also: Fl_Group::resizable()
  42:fltk-1.3.4-1/FL/Fl_Pack.H **** */
  43:fltk-1.3.4-1/FL/Fl_Pack.H **** class FL_EXPORT Fl_Pack : public Fl_Group {
  93              		.loc 3 43 0
  94              		.cfi_startproc
  95              	.LVL3:
  96              	.LBB145:
  97              		.loc 3 43 0
  98 0000 48C70700 		movq	$_ZTV7Fl_Pack+16, (%rdi)
  98      000000
  99 0007 E9000000 		jmp	_ZN8Fl_GroupD2Ev
  99      00
 100              	.LVL4:
 101              	.LBE145:
 102              		.cfi_endproc
 103              	.LFE476:
 105              		.section	.text.unlikely._ZN7Fl_PackD2Ev,"axG",@progbits,_ZN7Fl_PackD5Ev,comdat
 106              	.LCOLDE3:
 107              		.section	.text._ZN7Fl_PackD2Ev,"axG",@progbits,_ZN7Fl_PackD5Ev,comdat
 108              	.LHOTE3:
 109              		.weak	_ZN7Fl_PackD1Ev
 110              		.set	_ZN7Fl_PackD1Ev,_ZN7Fl_PackD2Ev
 111              		.section	.text.unlikely._ZN7Fl_PackD0Ev,"axG",@progbits,_ZN7Fl_PackD5Ev,comdat
 112              		.align 2
 113              	.LCOLDB4:
 114              		.section	.text._ZN7Fl_PackD0Ev,"axG",@progbits,_ZN7Fl_PackD5Ev,comdat
 115              	.LHOTB4:
 116              		.align 2
 117              		.p2align 4,,15
 118              		.weak	_ZN7Fl_PackD0Ev
 120              	_ZN7Fl_PackD0Ev:
 121              	.LFB478:
 122              		.loc 3 43 0
 123              		.cfi_startproc
 124              	.LVL5:
 125 0000 53       		pushq	%rbx
 126              		.cfi_def_cfa_offset 16
 127              		.cfi_offset 3, -16
 128              		.loc 3 43 0
 129 0001 4889FB   		movq	%rdi, %rbx
 130              	.LBB146:
 131              	.LBB147:
 132 0004 48C70700 		movq	$_ZTV7Fl_Pack+16, (%rdi)
 132      000000
 133 000b E8000000 		call	_ZN8Fl_GroupD2Ev
 133      00
 134              	.LVL6:
 135              	.LBE147:
 136              	.LBE146:
 137 0010 4889DF   		movq	%rbx, %rdi
 138 0013 5B       		popq	%rbx
 139              		.cfi_def_cfa_offset 8
 140              	.LVL7:
 141 0014 E9000000 		jmp	_ZdlPv
 141      00
 142              	.LVL8:
 143              		.cfi_endproc
 144              	.LFE478:
 146              		.section	.text.unlikely._ZN7Fl_PackD0Ev,"axG",@progbits,_ZN7Fl_PackD5Ev,comdat
 147              	.LCOLDE4:
 148              		.section	.text._ZN7Fl_PackD0Ev,"axG",@progbits,_ZN7Fl_PackD5Ev,comdat
 149              	.LHOTE4:
 150              		.section	.text.unlikely._ZN7Fl_PackC2EiiiiPKc,"ax",@progbits
 151              		.align 2
 152              	.LCOLDB5:
 153              		.section	.text._ZN7Fl_PackC2EiiiiPKc,"ax",@progbits
 154              	.LHOTB5:
 155              		.align 2
 156              		.p2align 4,,15
 157              		.globl	_ZN7Fl_PackC2EiiiiPKc
 159              	_ZN7Fl_PackC2EiiiiPKc:
 160              	.LFB472:
 161              		.file 4 "fltk-1.3.4-1/src/Fl_Pack.cxx"
   1:fltk-1.3.4-1/src/Fl_Pack.cxx ****    1              		.file	"Fl_Pack.cxx"
   2:fltk-1.3.4-1/src/Fl_Pack.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Pack.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Pack.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Pack.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Pack.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Pack.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Pack.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Pack.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Pack.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Pack.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Pack.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Pack.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Pack.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Pack.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Pack.cxx ****   17              	.LFB233:
  17:fltk-1.3.4-1/src/Fl_Pack.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Pack.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Pack.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Pack.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Pack.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Pack.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Pack.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Pack.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Pack.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Pack.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Pack.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Pack.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Pack.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Pack.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Pack.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Pack.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Pack.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Pack.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Pack.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Pack.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Pack.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Pack.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 162              		.loc 4 38 0
 163              		.cfi_startproc
 164              	.LVL9:
 165 0000 53       		pushq	%rbx
 166              		.cfi_def_cfa_offset 16
 167              		.cfi_offset 3, -16
 168              		.loc 4 38 0
 169 0001 4889FB   		movq	%rdi, %rbx
 170              	.LBB148:
  39:fltk-1.3.4-1/src/Fl_Pack.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 171              		.loc 4 39 0
 172 0004 E8000000 		call	_ZN8Fl_GroupC2EiiiiPKc
 172      00
 173              	.LVL10:
 174 0009 48C70300 		movq	$_ZTV7Fl_Pack+16, (%rbx)
 174      000000
 175              	.LVL11:
 176              	.LBB149:
 177              	.LBB150:
 148:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 178              		.loc 2 148 0
 179 0010 48C78388 		movq	$0, 136(%rbx)
 179      00000000 
 179      000000
 180              	.LVL12:
 181              	.LBE150:
 182              	.LBE149:
  40:fltk-1.3.4-1/src/Fl_Pack.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Pack.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 183              		.loc 4 41 0
 184 001b C783A000 		movl	$0, 160(%rbx)
 184      00000000 
 184      0000
 185              	.LBE148:
  42:fltk-1.3.4-1/src/Fl_Pack.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Pack.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 186              		.loc 4 43 0
 187 0025 5B       		popq	%rbx
 188              		.cfi_def_cfa_offset 8
 189              	.LVL13:
 190 0026 C3       		ret
 191              		.cfi_endproc
 192              	.LFE472:
 194              		.section	.text.unlikely._ZN7Fl_PackC2EiiiiPKc
 195              	.LCOLDE5:
 196              		.section	.text._ZN7Fl_PackC2EiiiiPKc
 197              	.LHOTE5:
 198              		.globl	_ZN7Fl_PackC1EiiiiPKc
 199              		.set	_ZN7Fl_PackC1EiiiiPKc,_ZN7Fl_PackC2EiiiiPKc
 200              		.section	.text.unlikely._ZN7Fl_Pack4drawEv,"ax",@progbits
 201              		.align 2
 202              	.LCOLDB6:
 203              		.section	.text._ZN7Fl_Pack4drawEv,"ax",@progbits
 204              	.LHOTB6:
 205              		.align 2
 206              		.p2align 4,,15
 207              		.globl	_ZN7Fl_Pack4drawEv
 209              	_ZN7Fl_Pack4drawEv:
 210              	.LFB474:
  44:fltk-1.3.4-1/src/Fl_Pack.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Pack.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 211              		.loc 4 45 0
 212              		.cfi_startproc
 213              	.LVL14:
 214 0000 4157     		pushq	%r15
 215              		.cfi_def_cfa_offset 16
 216              		.cfi_offset 15, -16
 217 0002 4156     		pushq	%r14
 218              		.cfi_def_cfa_offset 24
 219              		.cfi_offset 14, -24
 220 0004 4155     		pushq	%r13
 221              		.cfi_def_cfa_offset 32
 222              		.cfi_offset 13, -32
 223 0006 4154     		pushq	%r12
 224              		.cfi_def_cfa_offset 40
 225              		.cfi_offset 12, -40
 226 0008 55       		pushq	%rbp
 227              		.cfi_def_cfa_offset 48
 228              		.cfi_offset 6, -48
 229 0009 53       		pushq	%rbx
 230              		.cfi_def_cfa_offset 56
 231              		.cfi_offset 3, -56
 232 000a 4889FB   		movq	%rdi, %rbx
 233 000d 4883EC38 		subq	$56, %rsp
 234              		.cfi_def_cfa_offset 112
 235 0011 8B6F20   		movl	32(%rdi), %ebp
 236              	.LVL15:
  46:fltk-1.3.4-1/src/Fl_Pack.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 237              		.loc 4 46 0
 238 0014 0FB67F6E 		movzbl	110(%rdi), %edi
 239              	.LVL16:
 240 0018 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 240      00
 241              	.LVL17:
  47:fltk-1.3.4-1/src/Fl_Pack.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 242              		.loc 4 47 0
 243 001d 0FB67B6E 		movzbl	110(%rbx), %edi
  46:fltk-1.3.4-1/src/Fl_Pack.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 244              		.loc 4 46 0
 245 0021 01E8     		addl	%ebp, %eax
 246 0023 8B6B24   		movl	36(%rbx), %ebp
 247 0026 4189C6   		movl	%eax, %r14d
 248 0029 89442410 		movl	%eax, 16(%rsp)
 249              	.LVL18:
 250              		.loc 4 47 0
 251 002d E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 251      00
 252              	.LVL19:
  48:fltk-1.3.4-1/src/Fl_Pack.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 253              		.loc 4 48 0
 254 0032 0FB67B6E 		movzbl	110(%rbx), %edi
  47:fltk-1.3.4-1/src/Fl_Pack.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 255              		.loc 4 47 0
 256 0036 01E8     		addl	%ebp, %eax
 257 0038 8B6B28   		movl	40(%rbx), %ebp
 258 003b 4189C7   		movl	%eax, %r15d
 259 003e 89442414 		movl	%eax, 20(%rsp)
 260              	.LVL20:
 261              		.loc 4 48 0
 262 0042 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 262      00
 263              	.LVL21:
  49:fltk-1.3.4-1/src/Fl_Pack.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 264              		.loc 4 49 0
 265 0047 0FB67B6E 		movzbl	110(%rbx), %edi
  48:fltk-1.3.4-1/src/Fl_Pack.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 266              		.loc 4 48 0
 267 004b 29C5     		subl	%eax, %ebp
 268 004d 896C2404 		movl	%ebp, 4(%rsp)
 269              	.LVL22:
 270 0051 8B6B2C   		movl	44(%rbx), %ebp
 271              	.LVL23:
 272              		.loc 4 49 0
 273 0054 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 273      00
 274              	.LVL24:
 275 0059 29C5     		subl	%eax, %ebp
  50:fltk-1.3.4-1/src/Fl_Pack.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Pack.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 276              		.loc 4 51 0
 277 005b 807B6C00 		cmpb	$0, 108(%rbx)
 278 005f 4489F0   		movl	%r14d, %eax
  52:fltk-1.3.4-1/src/Fl_Pack.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Pack.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Pack.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 279              		.loc 4 54 0
 280 0062 4889DF   		movq	%rbx, %rdi
  49:fltk-1.3.4-1/src/Fl_Pack.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 281              		.loc 4 49 0
 282 0065 896C2408 		movl	%ebp, 8(%rsp)
 283              	.LVL25:
  51:fltk-1.3.4-1/src/Fl_Pack.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 284              		.loc 4 51 0
 285 0069 410F44C7 		cmove	%r15d, %eax
 286 006d 89442418 		movl	%eax, 24(%rsp)
 287              	.LVL26:
 288 0071 0FB6436D 		movzbl	109(%rbx), %eax
 289              	.LVL27:
 290 0075 8844240F 		movb	%al, 15(%rsp)
 291              	.LVL28:
 292              		.loc 4 54 0
 293 0079 E8000000 		call	_ZNK8Fl_Group5arrayEv
 293      00
 294              	.LVL29:
 295              	.LBB151:
  55:fltk-1.3.4-1/src/Fl_Pack.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 296              		.loc 4 55 0
 297 007e 807B6C00 		cmpb	$0, 108(%rbx)
 298              	.LBE151:
  54:fltk-1.3.4-1/src/Fl_Pack.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 299              		.loc 4 54 0
 300 0082 4989C5   		movq	%rax, %r13
 301              	.LVL30:
 302              	.LBB168:
 303              		.loc 4 55 0
 304 0085 0F84B503 		je	.L11
 304      0000
 305 008b 48638390 		movslq	144(%rbx), %rax
 305      000000
 306              	.LVL31:
 307              	.LBB152:
  56:fltk-1.3.4-1/src/Fl_Pack.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 308              		.loc 4 56 0
 309 0092 8BABA000 		movl	160(%rbx), %ebp
 309      0000
 310              	.LVL32:
 311 0098 F7DD     		negl	%ebp
 312              	.LVL33:
 313 009a 89C2     		movl	%eax, %edx
 314 009c 4C8D34C5 		leaq	-8(,%rax,8), %r14
 314      F8FFFFFF 
 315              	.LVL34:
 316 00a4 4829D0   		subq	%rdx, %rax
 317 00a7 4C8D24C5 		leaq	-8(,%rax,8), %r12
 317      F8FFFFFF 
 318 00af EB0B     		jmp	.L12
 319              	.LVL35:
 320              		.p2align 4,,10
 321 00b1 0F1F8000 		.p2align 3
 321      000000
 322              	.L14:
 323 00b8 4983EE08 		subq	$8, %r14
 324              	.L12:
 325              	.LVL36:
 326              	.LBB153:
  57:fltk-1.3.4-1/src/Fl_Pack.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Pack.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Pack.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 327              		.loc 4 59 0 discriminator 1
 328 00bc 4D39E6   		cmpq	%r12, %r14
 329 00bf 743F     		je	.L58
 330              	.LVL37:
 331              	.LBB154:
 332              	.LBB155:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 333              		.loc 2 79 0
 334 00c1 4889DF   		movq	%rbx, %rdi
 335 00c4 E8000000 		call	_ZNK8Fl_Group5arrayEv
 335      00
 336              	.LVL38:
 337 00c9 4A8B0430 		movq	(%rax,%r14), %rax
 338              	.LBE155:
 339              	.LBE154:
  60:fltk-1.3.4-1/src/Fl_Pack.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 340              		.loc 4 60 0
 341 00cd F6406002 		testb	$2, 96(%rax)
 342 00d1 75E5     		jne	.L14
 343              	.LVL39:
 344              	.LBB156:
 345              	.LBB157:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 346              		.loc 2 79 0
 347 00d3 4889DF   		movq	%rbx, %rdi
 348 00d6 E8000000 		call	_ZNK8Fl_Group5arrayEv
 348      00
 349              	.LVL40:
 350              	.LBE157:
 351              	.LBE156:
  61:fltk-1.3.4-1/src/Fl_Pack.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 352              		.loc 4 61 0
 353 00db 488B8B88 		movq	136(%rbx), %rcx
 353      000000
 354 00e2 4A390C30 		cmpq	%rcx, (%rax,%r14)
 355 00e6 740F     		je	.L15
 356              	.LVL41:
 357              	.LBB158:
 358              	.LBB159:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 359              		.loc 2 79 0 discriminator 1
 360 00e8 4889DF   		movq	%rbx, %rdi
 361 00eb E8000000 		call	_ZNK8Fl_Group5arrayEv
 361      00
 362              	.LVL42:
 363 00f0 4A8B0430 		movq	(%rax,%r14), %rax
 364              	.LBE159:
 365              	.LBE158:
 366              		.loc 4 61 0 discriminator 1
 367 00f4 036828   		addl	40(%rax), %ebp
 368              	.LVL43:
 369              	.L15:
  62:fltk-1.3.4-1/src/Fl_Pack.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 370              		.loc 4 62 0
 371 00f7 03ABA000 		addl	160(%rbx), %ebp
 371      0000
 372              	.LVL44:
 373 00fd EBB9     		jmp	.L14
 374              	.LVL45:
 375 00ff 90       		.p2align 4,,10
 376              		.p2align 3
 377              	.L58:
 378              	.LBE153:
  57:fltk-1.3.4-1/src/Fl_Pack.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 379              		.loc 4 57 0
 380 0100 448B7C24 		movl	8(%rsp), %r15d
 380      08
 381              	.LVL46:
 382              	.L13:
 383 0105 8B839000 		movl	144(%rbx), %eax
 383      0000
 384              	.LBE152:
 385              	.LBE168:
  52:fltk-1.3.4-1/src/Fl_Pack.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 386              		.loc 4 52 0
 387 010b 8B742418 		movl	24(%rsp), %esi
 388 010f 0FB6536C 		movzbl	108(%rbx), %edx
 389 0113 448D60FF 		leal	-1(%rax), %r12d
 390              	.LBB169:
 391              	.LBB170:
 392              	.LBB171:
 393              	.LBB172:
  63:fltk-1.3.4-1/src/Fl_Pack.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Pack.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Pack.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Pack.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Pack.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Pack.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Pack.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Pack.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Pack.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Pack.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Pack.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Pack.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Pack.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Pack.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Pack.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Pack.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Pack.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Pack.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Pack.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Pack.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Pack.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Pack.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Pack.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Pack.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Pack.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Pack.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Pack.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Pack.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Pack.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Pack.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Pack.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Pack.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 394              		.loc 4 94 0
 395 0117 8B442408 		movl	8(%rsp), %eax
 396              	.LBE172:
 397              	.LBE171:
 398              	.LBE170:
 399              	.LBE169:
  52:fltk-1.3.4-1/src/Fl_Pack.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 400              		.loc 4 52 0
 401 011b 4189F6   		movl	%esi, %r14d
 402              	.LBB196:
 403              	.LBB191:
 404              	.LBB186:
 405              	.LBB181:
 406              		.loc 4 94 0
 407 011e 4429F8   		subl	%r15d, %eax
 408 0121 4189F7   		movl	%esi, %r15d
 409              	.LVL47:
 410 0124 89442418 		movl	%eax, 24(%rsp)
  92:fltk-1.3.4-1/src/Fl_Pack.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 411              		.loc 4 92 0
 412 0128 8B442404 		movl	4(%rsp), %eax
 413 012c 29E8     		subl	%ebp, %eax
 414              	.LBE181:
 415              	.LBE186:
 416              	.LBE191:
  74:fltk-1.3.4-1/src/Fl_Pack.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 417              		.loc 4 74 0
 418 012e 4183FCFF 		cmpl	$-1, %r12d
 419              	.LBB192:
 420              	.LBB187:
 421              	.LBB182:
  92:fltk-1.3.4-1/src/Fl_Pack.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 422              		.loc 4 92 0
 423 0132 8944241C 		movl	%eax, 28(%rsp)
 424              	.LBE182:
 425              	.LBE187:
 426              	.LBE192:
  74:fltk-1.3.4-1/src/Fl_Pack.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427              		.loc 4 74 0
 428 0136 0F845A01 		je	.L20
 428      0000
 429              	.LVL48:
 430 013c 0F1F4000 		.p2align 4,,10
 431              		.p2align 3
 432              	.L75:
 433              	.LBB193:
  75:fltk-1.3.4-1/src/Fl_Pack.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 434              		.loc 4 75 0
 435 0140 4983C508 		addq	$8, %r13
 436              	.LVL49:
 437 0144 498B6DF8 		movq	-8(%r13), %rbp
 438              	.LVL50:
 439              	.LBB188:
  76:fltk-1.3.4-1/src/Fl_Pack.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 440              		.loc 4 76 0
 441 0148 F6456002 		testb	$2, 96(%rbp)
 442 014c 0F853601 		jne	.L21
 442      0000
 443              	.LBB183:
  78:fltk-1.3.4-1/src/Fl_Pack.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 444              		.loc 4 78 0
 445 0152 84D2     		testb	%dl, %dl
 446 0154 0F84CE01 		je	.L22
 446      0000
 447              	.LVL51:
 448 015a 448B4D28 		movl	40(%rbp), %r9d
 449              	.LVL52:
  82:fltk-1.3.4-1/src/Fl_Pack.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 450              		.loc 4 82 0
 451 015e 448B5424 		movl	8(%rsp), %r10d
 451      08
 452 0163 4489F8   		movl	%r15d, %eax
  81:fltk-1.3.4-1/src/Fl_Pack.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 453              		.loc 4 81 0
 454 0166 448B5C24 		movl	20(%rsp), %r11d
 454      14
 455              	.LVL53:
 456              	.L23:
  90:fltk-1.3.4-1/src/Fl_Pack.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 457              		.loc 4 90 0
 458 016b 4585E4   		testl	%r12d, %r12d
 459 016e 0F84E603 		je	.L70
 459      0000
 460              	.LVL54:
 461              	.L24:
  95:fltk-1.3.4-1/src/Fl_Pack.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Pack.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 462              		.loc 4 96 0
 463 0174 8B93A000 		movl	160(%rbx), %edx
 463      0000
 464 017a 85D2     		testl	%edx, %edx
 465 017c 0F84AE00 		je	.L28
 465      0000
 466 0182 4539F7   		cmpl	%r14d, %r15d
 467 0185 0F8EA500 		jle	.L28
 467      0000
 468              	.LVL55:
 469              		.loc 4 96 0 is_stmt 0 discriminator 3
 470 018b 807B6E00 		cmpb	$0, 110(%rbx)
 471 018f 0F849B00 		je	.L28
 471      0000
 472              	.LVL56:
 473              		.loc 4 96 0 discriminator 5
 474 0195 3B4520   		cmpl	32(%rbp), %eax
 475 0198 0F84A203 		je	.L71
 475      0000
 476              	.L32:
 477              	.LBB173:
 478              	.LBB174:
 479              		.file 5 "fltk-1.3.4-1/FL/fl_draw.H"
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
 480              		.loc 5 52 0 is_stmt 1
 481 019e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 481      000000
 482 01a5 44895424 		movl	%r10d, 44(%rsp)
 482      2C
 483 01aa 44894C24 		movl	%r9d, 40(%rsp)
 483      28
 484 01af 44895C24 		movl	%r11d, 36(%rsp)
 484      24
 485 01b4 89442420 		movl	%eax, 32(%rsp)
 486              	.LVL57:
 487 01b8 8B7364   		movl	100(%rbx), %esi
 488 01bb 488B17   		movq	(%rdi), %rdx
 489 01be FF928800 		call	*136(%rdx)
 489      0000
 490              	.LVL58:
 491              	.LBE174:
 492              	.LBE173:
  97:fltk-1.3.4-1/src/Fl_Pack.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Pack.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Pack.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 493              		.loc 4 99 0
 494 01c4 807B6C00 		cmpb	$0, 108(%rbx)
 495 01c8 8B442420 		movl	32(%rsp), %eax
 496 01cc 448B5C24 		movl	36(%rsp), %r11d
 496      24
 497 01d1 448B4C24 		movl	40(%rsp), %r9d
 497      28
 498 01d6 448B5424 		movl	44(%rsp), %r10d
 498      2C
 499 01db 0F84AF01 		je	.L72
 499      0000
 500              	.LBB175:
 501              	.LBB176:
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
 502              		.loc 5 206 0
 503 01e1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 503      000000
 504 01e8 89442420 		movl	%eax, 32(%rsp)
 505              	.LVL59:
 506 01ec 4489F6   		movl	%r14d, %esi
 507 01ef 44895424 		movl	%r10d, 44(%rsp)
 507      2C
 508              	.LVL60:
 509 01f4 44894C24 		movl	%r9d, 40(%rsp)
 509      28
 510              	.LVL61:
 511 01f9 44895C24 		movl	%r11d, 36(%rsp)
 511      24
 512              	.LVL62:
 513 01fe 8B8BA000 		movl	160(%rbx), %ecx
 513      0000
 514 0204 488B07   		movq	(%rdi), %rax
 515 0207 448B4424 		movl	8(%rsp), %r8d
 515      08
 516 020c 8B542414 		movl	20(%rsp), %edx
 517 0210 FF5020   		call	*32(%rax)
 518              	.LVL63:
 519 0213 8B442420 		movl	32(%rsp), %eax
 520 0217 448B5C24 		movl	36(%rsp), %r11d
 520      24
 521 021c 448B4C24 		movl	40(%rsp), %r9d
 521      28
 522 0221 448B5424 		movl	44(%rsp), %r10d
 522      2C
 523              	.LVL64:
 524 0226 662E0F1F 		.p2align 4,,10
 524      84000000 
 524      0000
 525              		.p2align 3
 526              	.L28:
 527              	.LBE176:
 528              	.LBE175:
 100:fltk-1.3.4-1/src/Fl_Pack.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Pack.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Pack.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Pack.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Pack.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 529              		.loc 4 104 0
 530 0230 3B4520   		cmpl	32(%rbp), %eax
 531 0233 0F841701 		je	.L73
 531      0000
 532              	.L34:
 105:fltk-1.3.4-1/src/Fl_Pack.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 533              		.loc 4 105 0
 534 0239 89C6     		movl	%eax, %esi
 535 023b 488B4500 		movq	0(%rbp), %rax
 536 023f 4589D0   		movl	%r10d, %r8d
 537 0242 4489C9   		movl	%r9d, %ecx
 538 0245 4489DA   		movl	%r11d, %edx
 539 0248 4889EF   		movq	%rbp, %rdi
 540 024b FF5020   		call	*32(%rax)
 541              	.LVL65:
 542              	.LBB177:
 543              	.LBB178:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 544              		.loc 1 931 0
 545 024e C6456D80 		movb	$-128, 109(%rbp)
 546              	.LVL66:
 547              	.L55:
 548              	.LBE178:
 549              	.LBE177:
 106:fltk-1.3.4-1/src/Fl_Pack.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Pack.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Pack.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 550              		.loc 4 108 0
 551 0252 807C240F 		cmpb	$0, 15(%rsp)
 551      00
 109:fltk-1.3.4-1/src/Fl_Pack.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 552              		.loc 4 109 0
 553 0257 4889EE   		movq	%rbp, %rsi
 554 025a 4889DF   		movq	%rbx, %rdi
 108:fltk-1.3.4-1/src/Fl_Pack.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 555              		.loc 4 108 0
 556 025d 0F881501 		js	.L74
 556      0000
 557              	.LVL67:
 110:fltk-1.3.4-1/src/Fl_Pack.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Pack.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 558              		.loc 4 111 0
 559 0263 E8000000 		call	_ZNK8Fl_Group12update_childER9Fl_Widget
 559      00
 560              	.LVL68:
 561              	.L36:
 562 0268 0FB6536C 		movzbl	108(%rbx), %edx
 563              	.LVL69:
 112:fltk-1.3.4-1/src/Fl_Pack.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Pack.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 564              		.loc 4 113 0
 565 026c 84D2     		testb	%dl, %dl
 566 026e 0F84CC00 		je	.L37
 566      0000
 567 0274 8B4528   		movl	40(%rbp), %eax
 568              	.LVL70:
 569              	.L38:
 570              		.loc 4 113 0 is_stmt 0 discriminator 4
 571 0277 4101C7   		addl	%eax, %r15d
 572              	.LVL71:
 573 027a 4539FE   		cmpl	%r15d, %r14d
 574 027d 450F4CF7 		cmovl	%r15d, %r14d
 575              	.LVL72:
 114:fltk-1.3.4-1/src/Fl_Pack.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Pack.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Pack.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 576              		.loc 4 116 0 is_stmt 1 discriminator 4
 577 0281 4403BBA0 		addl	160(%rbx), %r15d
 577      000000
 578              	.LVL73:
 579              	.L21:
 580 0288 4183EC01 		subl	$1, %r12d
 581              	.LVL74:
 582              	.LBE183:
 583              	.LBE188:
 584              	.LBE193:
  74:fltk-1.3.4-1/src/Fl_Pack.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 585              		.loc 4 74 0 discriminator 1
 586 028c 4183FCFF 		cmpl	$-1, %r12d
 587 0290 0F85AAFE 		jne	.L75
 587      FFFF
 588              	.LVL75:
 589              	.L20:
 590              	.LBE196:
 117:fltk-1.3.4-1/src/Fl_Pack.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Pack.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Pack.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Pack.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 591              		.loc 4 120 0
 592 0296 84D2     		testb	%dl, %dl
 593 0298 0F844201 		je	.L39
 593      0000
 121:fltk-1.3.4-1/src/Fl_Pack.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 594              		.loc 4 121 0
 595 029e 8B6C2404 		movl	4(%rsp), %ebp
 596 02a2 036C2410 		addl	16(%rsp), %ebp
 597              	.LBB197:
 598              	.LBB198:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 599              		.loc 1 363 0
 600 02a6 0FB67B6E 		movzbl	110(%rbx), %edi
 601              	.LBE198:
 602              	.LBE197:
 603              		.loc 4 121 0
 604 02aa 4139EE   		cmpl	%ebp, %r14d
 605 02ad 0F8C1D02 		jl	.L76
 605      0000
 606              	.L41:
 122:fltk-1.3.4-1/src/Fl_Pack.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Pack.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Pack.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Pack.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 607              		.loc 4 125 0
 608 02b3 442B7424 		subl	16(%rsp), %r14d
 608      10
 609              	.LVL76:
 610 02b8 44897424 		movl	%r14d, 4(%rsp)
 610      04
 611              	.LVL77:
 612              	.L43:
 126:fltk-1.3.4-1/src/Fl_Pack.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Pack.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Pack.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Pack.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Pack.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Pack.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Pack.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Pack.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Pack.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 613              		.loc 4 134 0
 614 02bd E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 614      00
 615              	.LVL78:
 616 02c2 8B6C2404 		movl	4(%rsp), %ebp
 135:fltk-1.3.4-1/src/Fl_Pack.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 617              		.loc 4 135 0
 618 02c6 0FB67B6E 		movzbl	110(%rbx), %edi
 134:fltk-1.3.4-1/src/Fl_Pack.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 619              		.loc 4 134 0
 620 02ca 41BC0100 		movl	$1, %r12d
 620      0000
 621              	.LVL79:
 622 02d0 01C5     		addl	%eax, %ebp
 623              	.LVL80:
 624 02d2 85ED     		testl	%ebp, %ebp
 625 02d4 410F4EEC 		cmovle	%r12d, %ebp
 626              	.LVL81:
 627              		.loc 4 135 0
 628 02d8 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 628      00
 629              	.LVL82:
 630 02dd 448B4424 		movl	8(%rsp), %r8d
 630      08
 631 02e2 4101C0   		addl	%eax, %r8d
 632              	.LVL83:
 633 02e5 4585C0   		testl	%r8d, %r8d
 634 02e8 450F4EC4 		cmovle	%r12d, %r8d
 635              	.LVL84:
 136:fltk-1.3.4-1/src/Fl_Pack.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 636              		.loc 4 136 0
 637 02ec 3B6B28   		cmpl	40(%rbx), %ebp
 638 02ef 0F842302 		je	.L77
 638      0000
 639              	.L49:
 640              	.LVL85:
 137:fltk-1.3.4-1/src/Fl_Pack.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 641              		.loc 4 137 0
 642 02f5 8B5324   		movl	36(%rbx), %edx
 643 02f8 8B7320   		movl	32(%rbx), %esi
 644 02fb 89E9     		movl	%ebp, %ecx
 645 02fd 4889DF   		movq	%rbx, %rdi
 646 0300 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 646      00
 647              	.LVL86:
 648              	.L56:
 138:fltk-1.3.4-1/src/Fl_Pack.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Pack.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Pack.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Pack.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 649              		.loc 4 141 0
 650 0305 4889DF   		movq	%rbx, %rdi
 651 0308 E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 651      00
 652              	.LVL87:
 142:fltk-1.3.4-1/src/Fl_Pack.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Pack.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Pack.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 653              		.loc 4 144 0
 654 030d 4883C438 		addq	$56, %rsp
 655              		.cfi_remember_state
 656              		.cfi_def_cfa_offset 56
 142:fltk-1.3.4-1/src/Fl_Pack.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 657              		.loc 4 142 0
 658 0311 4889DF   		movq	%rbx, %rdi
 659              		.loc 4 144 0
 660 0314 5B       		popq	%rbx
 661              		.cfi_def_cfa_offset 48
 662              	.LVL88:
 663 0315 5D       		popq	%rbp
 664              		.cfi_def_cfa_offset 40
 665              	.LVL89:
 666 0316 415C     		popq	%r12
 667              		.cfi_def_cfa_offset 32
 668 0318 415D     		popq	%r13
 669              		.cfi_def_cfa_offset 24
 670              	.LVL90:
 671 031a 415E     		popq	%r14
 672              		.cfi_def_cfa_offset 16
 673 031c 415F     		popq	%r15
 674              		.cfi_def_cfa_offset 8
 675              	.LVL91:
 142:fltk-1.3.4-1/src/Fl_Pack.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 676              		.loc 4 142 0
 677 031e E9000000 		jmp	_ZNK9Fl_Widget10draw_labelEv
 677      00
 678              	.LVL92:
 679              		.p2align 4,,10
 680 0323 0F1F4400 		.p2align 3
 680      00
 681              	.L22:
 682              		.cfi_restore_state
 683 0328 448B552C 		movl	44(%rbp), %r10d
 684              	.LVL93:
 685              	.LBB199:
 686              	.LBB194:
 687              	.LBB189:
 688              	.LBB184:
  85:fltk-1.3.4-1/src/Fl_Pack.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 689              		.loc 4 85 0
 690 032c 448B4C24 		movl	4(%rsp), %r9d
 690      04
  78:fltk-1.3.4-1/src/Fl_Pack.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 691              		.loc 4 78 0
 692 0331 4589FB   		movl	%r15d, %r11d
  84:fltk-1.3.4-1/src/Fl_Pack.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 693              		.loc 4 84 0
 694 0334 8B442410 		movl	16(%rsp), %eax
 695 0338 E92EFEFF 		jmp	.L23
 695      FF
 696              	.LVL94:
 697 033d 0F1F00   		.p2align 4,,10
 698              		.p2align 3
 699              	.L37:
 700 0340 8B452C   		movl	44(%rbp), %eax
 701              	.LVL95:
 702 0343 E92FFFFF 		jmp	.L38
 702      FF
 703              	.LVL96:
 704 0348 0F1F8400 		.p2align 4,,10
 704      00000000 
 705              		.p2align 3
 706              	.L73:
 104:fltk-1.3.4-1/src/Fl_Pack.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 707              		.loc 4 104 0
 708 0350 443B5D24 		cmpl	36(%rbp), %r11d
 709 0354 0F85DFFE 		jne	.L34
 709      FFFF
 710              	.LVL97:
 711              	.L33:
 104:fltk-1.3.4-1/src/Fl_Pack.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 712              		.loc 4 104 0 is_stmt 0 discriminator 4
 713 035a 443B4D28 		cmpl	40(%rbp), %r9d
 714 035e 0F85D5FE 		jne	.L34
 714      FFFF
 715              	.LVL98:
 104:fltk-1.3.4-1/src/Fl_Pack.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 716              		.loc 4 104 0 discriminator 6
 717 0364 443B552C 		cmpl	44(%rbp), %r10d
 718 0368 0F85CBFE 		jne	.L34
 718      FFFF
 719 036e E9DFFEFF 		jmp	.L55
 719      FF
 720              	.LVL99:
 721              		.p2align 4,,10
 722 0373 0F1F4400 		.p2align 3
 722      00
 723              	.L74:
 109:fltk-1.3.4-1/src/Fl_Pack.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 724              		.loc 4 109 0 is_stmt 1
 725 0378 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 725      00
 726              	.LVL100:
 110:fltk-1.3.4-1/src/Fl_Pack.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 727              		.loc 4 110 0
 728 037d 4889EE   		movq	%rbp, %rsi
 729 0380 4889DF   		movq	%rbx, %rdi
 730 0383 E8000000 		call	_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
 730      00
 731              	.LVL101:
 732 0388 E9DBFEFF 		jmp	.L36
 732      FF
 733              	.LVL102:
 734 038d 0F1F00   		.p2align 4,,10
 735              		.p2align 3
 736              	.L72:
 737              	.LBB179:
 738              	.LBB180:
 739              		.loc 5 206 0
 740 0390 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 740      000000
 741 0397 89442420 		movl	%eax, 32(%rsp)
 742              	.LVL103:
 743 039b 4489F2   		movl	%r14d, %edx
 744 039e 44895424 		movl	%r10d, 44(%rsp)
 744      2C
 745              	.LVL104:
 746 03a3 44894C24 		movl	%r9d, 40(%rsp)
 746      28
 747              	.LVL105:
 748 03a8 44895C24 		movl	%r11d, 36(%rsp)
 748      24
 749              	.LVL106:
 750 03ad 448B83A0 		movl	160(%rbx), %r8d
 750      000000
 751 03b4 488B07   		movq	(%rdi), %rax
 752 03b7 8B4C2404 		movl	4(%rsp), %ecx
 753 03bb 8B742410 		movl	16(%rsp), %esi
 754 03bf FF5020   		call	*32(%rax)
 755              	.LVL107:
 756 03c2 448B5424 		movl	44(%rsp), %r10d
 756      2C
 757 03c7 448B4C24 		movl	40(%rsp), %r9d
 757      28
 758 03cc 448B5C24 		movl	36(%rsp), %r11d
 758      24
 759 03d1 8B442420 		movl	32(%rsp), %eax
 760 03d5 E956FEFF 		jmp	.L28
 760      FF
 761              	.LVL108:
 762 03da 660F1F44 		.p2align 4,,10
 762      0000
 763              		.p2align 3
 764              	.L39:
 765              	.LBE180:
 766              	.LBE179:
 767              	.LBE184:
 768              	.LBE189:
 769              	.LBE194:
 770              	.LBE199:
 127:fltk-1.3.4-1/src/Fl_Pack.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 771              		.loc 4 127 0
 772 03e0 8B6C2408 		movl	8(%rsp), %ebp
 773 03e4 036C2414 		addl	20(%rsp), %ebp
 774              	.LBB200:
 775              	.LBB201:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 776              		.loc 1 363 0
 777 03e8 0FB67B6E 		movzbl	110(%rbx), %edi
 778              	.LBE201:
 779              	.LBE200:
 127:fltk-1.3.4-1/src/Fl_Pack.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 780              		.loc 4 127 0
 781 03ec 4139EE   		cmpl	%ebp, %r14d
 782 03ef 7D39     		jge	.L45
 783              	.LVL109:
 127:fltk-1.3.4-1/src/Fl_Pack.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 784              		.loc 4 127 0 is_stmt 0 discriminator 1
 785 03f1 85FF     		testl	%edi, %edi
 786 03f3 7435     		je	.L45
 787              	.LVL110:
 788              	.LBB202:
 789              	.LBB203:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 790              		.loc 5 52 0 is_stmt 1
 791 03f5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 791      000000
 792 03fc 8B7364   		movl	100(%rbx), %esi
 793 03ff 488B07   		movq	(%rdi), %rax
 794 0402 FF908800 		call	*136(%rax)
 794      0000
 795              	.LVL111:
 796              	.LBE203:
 797              	.LBE202:
 798              	.LBB204:
 799              	.LBB205:
 800              		.loc 5 206 0
 801 0408 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 801      000000
 802 040f 4189E8   		movl	%ebp, %r8d
 803 0412 8B4C2404 		movl	4(%rsp), %ecx
 804 0416 4529F0   		subl	%r14d, %r8d
 805              	.LVL112:
 806 0419 4489F2   		movl	%r14d, %edx
 807 041c 8B742410 		movl	16(%rsp), %esi
 808 0420 488B07   		movq	(%rdi), %rax
 809 0423 FF5020   		call	*32(%rax)
 810              	.LVL113:
 811 0426 0FB67B6E 		movzbl	110(%rbx), %edi
 812              	.LVL114:
 813              	.L45:
 814              	.LBE205:
 815              	.LBE204:
 131:fltk-1.3.4-1/src/Fl_Pack.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 816              		.loc 4 131 0
 817 042a 442B7424 		subl	20(%rsp), %r14d
 817      14
 818              	.LVL115:
 819 042f 44897424 		movl	%r14d, 8(%rsp)
 819      08
 820              	.LVL116:
 821 0434 E984FEFF 		jmp	.L43
 821      FF
 822              	.LVL117:
 823 0439 0F1F8000 		.p2align 4,,10
 823      000000
 824              		.p2align 3
 825              	.L11:
 826 0440 48638390 		movslq	144(%rbx), %rax
 826      000000
 827              	.LVL118:
 828              	.LBB206:
 829              	.LBB160:
  66:fltk-1.3.4-1/src/Fl_Pack.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 830              		.loc 4 66 0
 831 0447 448BBBA0 		movl	160(%rbx), %r15d
 831      000000
 832              	.LVL119:
 833 044e 41F7DF   		negl	%r15d
 834              	.LVL120:
 835 0451 89C2     		movl	%eax, %edx
 836 0453 4C8D24C5 		leaq	-8(,%rax,8), %r12
 836      F8FFFFFF 
 837 045b 4829D0   		subq	%rdx, %rax
 838 045e 488D2CC5 		leaq	-8(,%rax,8), %rbp
 838      F8FFFFFF 
 839              	.LVL121:
 840 0466 EB0C     		jmp	.L16
 841              	.LVL122:
 842 0468 0F1F8400 		.p2align 4,,10
 842      00000000 
 843              		.p2align 3
 844              	.L17:
 845 0470 4983EC08 		subq	$8, %r12
 846              	.L16:
 847              	.LVL123:
 848              	.LBB161:
  68:fltk-1.3.4-1/src/Fl_Pack.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 849              		.loc 4 68 0 discriminator 1
 850 0474 4939EC   		cmpq	%rbp, %r12
 851 0477 7447     		je	.L59
 852              	.LVL124:
 853              	.LBB162:
 854              	.LBB163:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 855              		.loc 2 79 0
 856 0479 4889DF   		movq	%rbx, %rdi
 857 047c E8000000 		call	_ZNK8Fl_Group5arrayEv
 857      00
 858              	.LVL125:
 859 0481 4A8B0420 		movq	(%rax,%r12), %rax
 860              	.LBE163:
 861              	.LBE162:
  69:fltk-1.3.4-1/src/Fl_Pack.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 862              		.loc 4 69 0
 863 0485 F6406002 		testb	$2, 96(%rax)
 864 0489 75E5     		jne	.L17
 865              	.LVL126:
 866              	.LBB164:
 867              	.LBB165:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 868              		.loc 2 79 0
 869 048b 4889DF   		movq	%rbx, %rdi
 870 048e E8000000 		call	_ZNK8Fl_Group5arrayEv
 870      00
 871              	.LVL127:
 872              	.LBE165:
 873              	.LBE164:
  70:fltk-1.3.4-1/src/Fl_Pack.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 874              		.loc 4 70 0
 875 0493 488BB388 		movq	136(%rbx), %rsi
 875      000000
 876 049a 4A393420 		cmpq	%rsi, (%rax,%r12)
 877 049e 7410     		je	.L18
 878              	.LVL128:
 879              	.LBB166:
 880              	.LBB167:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 881              		.loc 2 79 0 discriminator 1
 882 04a0 4889DF   		movq	%rbx, %rdi
 883 04a3 E8000000 		call	_ZNK8Fl_Group5arrayEv
 883      00
 884              	.LVL129:
 885 04a8 4A8B0420 		movq	(%rax,%r12), %rax
 886              	.LBE167:
 887              	.LBE166:
  70:fltk-1.3.4-1/src/Fl_Pack.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 888              		.loc 4 70 0 discriminator 1
 889 04ac 4403782C 		addl	44(%rax), %r15d
 890              	.LVL130:
 891              	.L18:
  71:fltk-1.3.4-1/src/Fl_Pack.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 892              		.loc 4 71 0
 893 04b0 4403BBA0 		addl	160(%rbx), %r15d
 893      000000
 894              	.LVL131:
 895 04b7 EBB7     		jmp	.L17
 896              	.LVL132:
 897 04b9 0F1F8000 		.p2align 4,,10
 897      000000
 898              		.p2align 3
 899              	.L59:
 900              	.LBE161:
  65:fltk-1.3.4-1/src/Fl_Pack.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 901              		.loc 4 65 0
 902 04c0 8B6C2404 		movl	4(%rsp), %ebp
 903 04c4 E93CFCFF 		jmp	.L13
 903      FF
 904              	.LVL133:
 905 04c9 0F1F8000 		.p2align 4,,10
 905      000000
 906              		.p2align 3
 907              	.L76:
 908              	.LBE160:
 909              	.LBE206:
 121:fltk-1.3.4-1/src/Fl_Pack.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 910              		.loc 4 121 0 discriminator 1
 911 04d0 85FF     		testl	%edi, %edi
 912 04d2 0F84DBFD 		je	.L41
 912      FFFF
 913              	.LVL134:
 914              	.LBB207:
 915              	.LBB208:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 916              		.loc 5 52 0
 917 04d8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 917      000000
 918 04df 8B7364   		movl	100(%rbx), %esi
 919 04e2 488B07   		movq	(%rdi), %rax
 920 04e5 FF908800 		call	*136(%rax)
 920      0000
 921              	.LVL135:
 922              	.LBE208:
 923              	.LBE207:
 924              	.LBB209:
 925              	.LBB210:
 926              		.loc 5 206 0
 927 04eb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 927      000000
 928 04f2 89E9     		movl	%ebp, %ecx
 929 04f4 448B4424 		movl	8(%rsp), %r8d
 929      08
 930 04f9 4429F1   		subl	%r14d, %ecx
 931              	.LVL136:
 932 04fc 8B542414 		movl	20(%rsp), %edx
 933 0500 4489F6   		movl	%r14d, %esi
 934 0503 488B07   		movq	(%rdi), %rax
 935 0506 FF5020   		call	*32(%rax)
 936              	.LVL137:
 937 0509 0FB67B6E 		movzbl	110(%rbx), %edi
 938 050d E9A1FDFF 		jmp	.L41
 938      FF
 939              	.LVL138:
 940              		.p2align 4,,10
 941 0512 660F1F44 		.p2align 3
 941      0000
 942              	.L77:
 943              	.LBE210:
 944              	.LBE209:
 136:fltk-1.3.4-1/src/Fl_Pack.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 945              		.loc 4 136 0 discriminator 2
 946 0518 443B432C 		cmpl	44(%rbx), %r8d
 947 051c 0F85D3FD 		jne	.L49
 947      FFFF
 948              	.LVL139:
 140:fltk-1.3.4-1/src/Fl_Pack.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 949              		.loc 4 140 0
 950 0522 807C240F 		cmpb	$0, 15(%rsp)
 950      00
 951 0527 0F88D8FD 		js	.L56
 951      FFFF
 952              		.loc 4 144 0
 953 052d 4883C438 		addq	$56, %rsp
 954              		.cfi_remember_state
 955              		.cfi_def_cfa_offset 56
 956 0531 5B       		popq	%rbx
 957              		.cfi_def_cfa_offset 48
 958              	.LVL140:
 959 0532 5D       		popq	%rbp
 960              		.cfi_def_cfa_offset 40
 961              	.LVL141:
 962 0533 415C     		popq	%r12
 963              		.cfi_def_cfa_offset 32
 964 0535 415D     		popq	%r13
 965              		.cfi_def_cfa_offset 24
 966              	.LVL142:
 967 0537 415E     		popq	%r14
 968              		.cfi_def_cfa_offset 16
 969 0539 415F     		popq	%r15
 970              		.cfi_def_cfa_offset 8
 971              	.LVL143:
 972 053b C3       		ret
 973              	.LVL144:
 974 053c 0F1F4000 		.p2align 4,,10
 975              		.p2align 3
 976              	.L71:
 977              		.cfi_restore_state
 978              	.LBB211:
 979              	.LBB195:
 980              	.LBB190:
 981              	.LBB185:
  97:fltk-1.3.4-1/src/Fl_Pack.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 982              		.loc 4 97 0
 983 0540 443B5D24 		cmpl	36(%rbp), %r11d
 984 0544 0F8554FC 		jne	.L32
 984      FFFF
  97:fltk-1.3.4-1/src/Fl_Pack.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 985              		.loc 4 97 0 is_stmt 0 discriminator 1
 986 054a 807C240F 		cmpb	$0, 15(%rsp)
 986      00
 987 054f 0F8905FE 		jns	.L33
 987      FFFF
 988 0555 E944FCFF 		jmp	.L32
 988      FF
 989              	.LVL145:
 990              	.L70:
  90:fltk-1.3.4-1/src/Fl_Pack.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 991              		.loc 4 90 0 is_stmt 1 discriminator 1
 992 055a 483BAB88 		cmpq	136(%rbx), %rbp
 992      000000
 993 0561 0F850DFC 		jne	.L24
 993      FFFF
  91:fltk-1.3.4-1/src/Fl_Pack.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 994              		.loc 4 91 0
 995 0567 84D2     		testb	%dl, %dl
  94:fltk-1.3.4-1/src/Fl_Pack.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 996              		.loc 4 94 0
 997 0569 440F4454 		cmove	24(%rsp), %r10d
 997      2418
 998              	.LVL146:
 999 056f 440F454C 		cmovne	28(%rsp), %r9d
 999      241C
 1000              	.LVL147:
 1001 0575 E9FAFBFF 		jmp	.L24
 1001      FF
 1002              	.LBE185:
 1003              	.LBE190:
 1004              	.LBE195:
 1005              	.LBE211:
 1006              		.cfi_endproc
 1007              	.LFE474:
 1009              		.section	.text.unlikely._ZN7Fl_Pack4drawEv
 1010              	.LCOLDE6:
 1011              		.section	.text._ZN7Fl_Pack4drawEv
 1012              	.LHOTE6:
 1013              		.weak	_ZTS7Fl_Pack
 1014              		.section	.rodata._ZTS7Fl_Pack,"aG",@progbits,_ZTS7Fl_Pack,comdat
 1015              		.align 8
 1018              	_ZTS7Fl_Pack:
 1019 0000 37466C5F 		.string	"7Fl_Pack"
 1019      5061636B 
 1019      00
 1020              		.weak	_ZTI7Fl_Pack
 1021              		.section	.rodata._ZTI7Fl_Pack,"aG",@progbits,_ZTI7Fl_Pack,comdat
 1022              		.align 8
 1025              	_ZTI7Fl_Pack:
 1026 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1026      00000000 
 1027 0008 00000000 		.quad	_ZTS7Fl_Pack
 1027      00000000 
 1028 0010 00000000 		.quad	_ZTI8Fl_Group
 1028      00000000 
 1029              		.weak	_ZTV7Fl_Pack
 1030              		.section	.rodata._ZTV7Fl_Pack,"aG",@progbits,_ZTV7Fl_Pack,comdat
 1031              		.align 8
 1034              	_ZTV7Fl_Pack:
 1035 0000 00000000 		.quad	0
 1035      00000000 
 1036 0008 00000000 		.quad	_ZTI7Fl_Pack
 1036      00000000 
 1037 0010 00000000 		.quad	_ZN7Fl_PackD1Ev
 1037      00000000 
 1038 0018 00000000 		.quad	_ZN7Fl_PackD0Ev
 1038      00000000 
 1039 0020 00000000 		.quad	_ZN7Fl_Pack4drawEv
 1039      00000000 
 1040 0028 00000000 		.quad	_ZN8Fl_Group6handleEi
 1040      00000000 
 1041 0030 00000000 		.quad	_ZN8Fl_Group6resizeEiiii
 1041      00000000 
 1042 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1042      00000000 
 1043 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1043      00000000 
 1044 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 1044      00000000 
 1045 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1045      00000000 
 1046 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1046      00000000 
 1047              		.text
 1048              	.Letext0:
 1049              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 1050              	.Letext_cold0:
 1051              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 1052              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1053              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1054              		.file 9 "/usr/include/libio.h"
 1055              		.file 10 "fltk-1.3.4-1/FL/Enumerations.H"
 1056              		.file 11 "fltk-1.3.4-1/FL/Fl.H"
 1057              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 1058              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 1059              		.file 14 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Pack.cxx
     /tmp/ccQRty9f.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccQRty9f.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccQRty9f.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccQRty9f.s:90     .text._ZN7Fl_PackD2Ev:0000000000000000 _ZN7Fl_PackD2Ev
     /tmp/ccQRty9f.s:1034   .rodata._ZTV7Fl_Pack:0000000000000000 _ZTV7Fl_Pack
     /tmp/ccQRty9f.s:90     .text._ZN7Fl_PackD2Ev:0000000000000000 _ZN7Fl_PackD1Ev
     /tmp/ccQRty9f.s:120    .text._ZN7Fl_PackD0Ev:0000000000000000 _ZN7Fl_PackD0Ev
     /tmp/ccQRty9f.s:159    .text._ZN7Fl_PackC2EiiiiPKc:0000000000000000 _ZN7Fl_PackC2EiiiiPKc
     /tmp/ccQRty9f.s:159    .text._ZN7Fl_PackC2EiiiiPKc:0000000000000000 _ZN7Fl_PackC1EiiiiPKc
     /tmp/ccQRty9f.s:209    .text._ZN7Fl_Pack4drawEv:0000000000000000 _ZN7Fl_Pack4drawEv
     /tmp/ccQRty9f.s:1018   .rodata._ZTS7Fl_Pack:0000000000000000 _ZTS7Fl_Pack
     /tmp/ccQRty9f.s:1025   .rodata._ZTI7Fl_Pack:0000000000000000 _ZTI7Fl_Pack
                           .group:0000000000000000 _ZN7Fl_PackD5Ev
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
_ZN8Fl_GroupD2Ev
_ZdlPv
_ZN8Fl_GroupC2EiiiiPKc
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_ZNK8Fl_Group5arrayEv
fl_graphics_driver
_ZNK8Fl_Group12update_childER9Fl_Widget
_ZN9Fl_Widget6resizeEiiii
_ZNK9Fl_Widget8draw_boxEv
_ZNK9Fl_Widget10draw_labelEv
_ZNK8Fl_Group10draw_childER9Fl_Widget
_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Group
_ZN8Fl_Group6handleEi
_ZN8Fl_Group6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
