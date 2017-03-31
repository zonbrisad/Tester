   1              		.file	"Fl_Browser.cxx"
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
  81              		.section	.text.unlikely._ZNK10Fl_Browser10item_firstEv,"ax",@progbits
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZNK10Fl_Browser10item_firstEv,"ax",@progbits
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.globl	_ZNK10Fl_Browser10item_firstEv
  90              	_ZNK10Fl_Browser10item_firstEv:
  91              	.LFB558:
  92              		.file 3 "fltk-1.3.4-1/src/Fl_Browser.cxx"
   1:fltk-1.3.4-1/src/Fl_Browser.cxx ****    1              		.file	"Fl_Browser.cxx"
   2:fltk-1.3.4-1/src/Fl_Browser.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Browser.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Browser.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Browser.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Browser.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Browser.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Browser.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Browser.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Browser.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Browser.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Browser.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Browser.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Browser.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Browser.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Browser.cxx ****   17              	.LFB233:
  17:fltk-1.3.4-1/src/Fl_Browser.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Browser.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Browser.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Browser.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Browser.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Browser.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Browser.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Browser.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Browser.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Browser.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Browser.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Browser.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Browser.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Browser.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Browser.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Browser.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Browser.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Browser.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Browser.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Browser.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Browser.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Browser.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Browser.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Browser.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Browser.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Browser.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Browser.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Browser.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Browser.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Browser.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Browser.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Browser.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Browser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Browser.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Browser.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Browser.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Browser.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Browser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Browser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Browser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Browser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Browser.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Browser.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Browser.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Browser.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Browser.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Browser.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Browser.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Browser.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Browser.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Browser.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Browser.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Browser.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  93              		.loc 3 70 0
  94              		.cfi_startproc
  95              	.LVL3:
  96              		.loc 3 70 0
  97 0000 488B8768 		movq	616(%rdi), %rax
  97      020000
  98 0007 C3       		ret
  99              		.cfi_endproc
 100              	.LFE558:
 102              		.section	.text.unlikely._ZNK10Fl_Browser10item_firstEv
 103              	.LCOLDE3:
 104              		.section	.text._ZNK10Fl_Browser10item_firstEv
 105              	.LHOTE3:
 106              		.section	.text.unlikely._ZNK10Fl_Browser9item_nextEPv,"ax",@progbits
 107              		.align 2
 108              	.LCOLDB4:
 109              		.section	.text._ZNK10Fl_Browser9item_nextEPv,"ax",@progbits
 110              	.LHOTB4:
 111              		.align 2
 112              		.p2align 4,,15
 113              		.globl	_ZNK10Fl_Browser9item_nextEPv
 115              	_ZNK10Fl_Browser9item_nextEPv:
 116              	.LFB559:
  71:fltk-1.3.4-1/src/Fl_Browser.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Browser.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Browser.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Browser.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Browser.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Browser.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Browser.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Browser.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 117              		.loc 3 78 0
 118              		.cfi_startproc
 119              	.LVL4:
 120              		.loc 3 78 0
 121 0000 488B4608 		movq	8(%rsi), %rax
 122 0004 C3       		ret
 123              		.cfi_endproc
 124              	.LFE559:
 126              		.section	.text.unlikely._ZNK10Fl_Browser9item_nextEPv
 127              	.LCOLDE4:
 128              		.section	.text._ZNK10Fl_Browser9item_nextEPv
 129              	.LHOTE4:
 130              		.section	.text.unlikely._ZNK10Fl_Browser9item_prevEPv,"ax",@progbits
 131              		.align 2
 132              	.LCOLDB5:
 133              		.section	.text._ZNK10Fl_Browser9item_prevEPv,"ax",@progbits
 134              	.LHOTB5:
 135              		.align 2
 136              		.p2align 4,,15
 137              		.globl	_ZNK10Fl_Browser9item_prevEPv
 139              	_ZNK10Fl_Browser9item_prevEPv:
 140              	.LFB560:
  79:fltk-1.3.4-1/src/Fl_Browser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Browser.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Browser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Browser.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Browser.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Browser.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Browser.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Browser.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 141              		.loc 3 86 0
 142              		.cfi_startproc
 143              	.LVL5:
 144              		.loc 3 86 0
 145 0000 488B06   		movq	(%rsi), %rax
 146 0003 C3       		ret
 147              		.cfi_endproc
 148              	.LFE560:
 150              		.section	.text.unlikely._ZNK10Fl_Browser9item_prevEPv
 151              	.LCOLDE5:
 152              		.section	.text._ZNK10Fl_Browser9item_prevEPv
 153              	.LHOTE5:
 154              		.section	.text.unlikely._ZNK10Fl_Browser9item_lastEv,"ax",@progbits
 155              		.align 2
 156              	.LCOLDB6:
 157              		.section	.text._ZNK10Fl_Browser9item_lastEv,"ax",@progbits
 158              	.LHOTB6:
 159              		.align 2
 160              		.p2align 4,,15
 161              		.globl	_ZNK10Fl_Browser9item_lastEv
 163              	_ZNK10Fl_Browser9item_lastEv:
 164              	.LFB561:
  87:fltk-1.3.4-1/src/Fl_Browser.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Browser.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Browser.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Browser.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Browser.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Browser.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Browser.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Browser.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Browser.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Browser.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Browser.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Browser.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Browser.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Browser.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 165              		.loc 3 100 0
 166              		.cfi_startproc
 167              	.LVL6:
 168              		.loc 3 100 0
 169 0000 488B8770 		movq	624(%rdi), %rax
 169      020000
 170 0007 C3       		ret
 171              		.cfi_endproc
 172              	.LFE561:
 174              		.section	.text.unlikely._ZNK10Fl_Browser9item_lastEv
 175              	.LCOLDE6:
 176              		.section	.text._ZNK10Fl_Browser9item_lastEv
 177              	.LHOTE6:
 178              		.section	.text.unlikely._ZNK10Fl_Browser13item_selectedEPv,"ax",@progbits
 179              		.align 2
 180              	.LCOLDB7:
 181              		.section	.text._ZNK10Fl_Browser13item_selectedEPv,"ax",@progbits
 182              	.LHOTB7:
 183              		.align 2
 184              		.p2align 4,,15
 185              		.globl	_ZNK10Fl_Browser13item_selectedEPv
 187              	_ZNK10Fl_Browser13item_selectedEPv:
 188              	.LFB562:
 101:fltk-1.3.4-1/src/Fl_Browser.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Browser.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Browser.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Browser.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Browser.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Browser.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Browser.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Browser.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 189              		.loc 3 108 0
 190              		.cfi_startproc
 191              	.LVL7:
 109:fltk-1.3.4-1/src/Fl_Browser.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 192              		.loc 3 109 0
 193 0000 0FB64622 		movzbl	34(%rsi), %eax
 194 0004 83E001   		andl	$1, %eax
 110:fltk-1.3.4-1/src/Fl_Browser.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 195              		.loc 3 110 0
 196 0007 C3       		ret
 197              		.cfi_endproc
 198              	.LFE562:
 200              		.section	.text.unlikely._ZNK10Fl_Browser13item_selectedEPv
 201              	.LCOLDE7:
 202              		.section	.text._ZNK10Fl_Browser13item_selectedEPv
 203              	.LHOTE7:
 204              		.section	.text.unlikely._ZN10Fl_Browser11item_selectEPvi,"ax",@progbits
 205              		.align 2
 206              	.LCOLDB8:
 207              		.section	.text._ZN10Fl_Browser11item_selectEPvi,"ax",@progbits
 208              	.LHOTB8:
 209              		.align 2
 210              		.p2align 4,,15
 211              		.globl	_ZN10Fl_Browser11item_selectEPvi
 213              	_ZN10Fl_Browser11item_selectEPvi:
 214              	.LFB563:
 111:fltk-1.3.4-1/src/Fl_Browser.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Browser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Browser.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Browser.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Browser.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Browser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Browser.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 215              		.loc 3 117 0
 216              		.cfi_startproc
 217              	.LVL8:
 118:fltk-1.3.4-1/src/Fl_Browser.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 218              		.loc 3 118 0
 219 0000 85D2     		testl	%edx, %edx
 220 0002 750C     		jne	.L13
 119:fltk-1.3.4-1/src/Fl_Browser.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 221              		.loc 3 119 0
 222 0004 806622FE 		andb	$-2, 34(%rsi)
 223 0008 C3       		ret
 224 0009 0F1F8000 		.p2align 4,,10
 224      000000
 225              		.p2align 3
 226              	.L13:
 118:fltk-1.3.4-1/src/Fl_Browser.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 227              		.loc 3 118 0 discriminator 1
 228 0010 804E2201 		orb	$1, 34(%rsi)
 229 0014 C3       		ret
 230              		.cfi_endproc
 231              	.LFE563:
 233              		.section	.text.unlikely._ZN10Fl_Browser11item_selectEPvi
 234              	.LCOLDE8:
 235              		.section	.text._ZN10Fl_Browser11item_selectEPvi
 236              	.LHOTE8:
 237              		.section	.text.unlikely._ZNK10Fl_Browser9item_textEPv,"ax",@progbits
 238              		.align 2
 239              	.LCOLDB9:
 240              		.section	.text._ZNK10Fl_Browser9item_textEPv,"ax",@progbits
 241              	.LHOTB9:
 242              		.align 2
 243              		.p2align 4,,15
 244              		.globl	_ZNK10Fl_Browser9item_textEPv
 246              	_ZNK10Fl_Browser9item_textEPv:
 247              	.LFB564:
 120:fltk-1.3.4-1/src/Fl_Browser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Browser.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Browser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Browser.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Browser.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Browser.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Browser.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Browser.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 248              		.loc 3 127 0
 249              		.cfi_startproc
 250              	.LVL9:
 128:fltk-1.3.4-1/src/Fl_Browser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 251              		.loc 3 128 0
 252 0000 488D4623 		leaq	35(%rsi), %rax
 129:fltk-1.3.4-1/src/Fl_Browser.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 253              		.loc 3 129 0
 254 0004 C3       		ret
 255              		.cfi_endproc
 256              	.LFE564:
 258              		.section	.text.unlikely._ZNK10Fl_Browser9item_textEPv
 259              	.LCOLDE9:
 260              		.section	.text._ZNK10Fl_Browser9item_textEPv
 261              	.LHOTE9:
 262              		.section	.text.unlikely._ZNK10Fl_Browser11full_heightEv,"ax",@progbits
 263              		.align 2
 264              	.LCOLDB10:
 265              		.section	.text._ZNK10Fl_Browser11full_heightEv,"ax",@progbits
 266              	.LHOTB10:
 267              		.align 2
 268              		.p2align 4,,15
 269              		.globl	_ZNK10Fl_Browser11full_heightEv
 271              	_ZNK10Fl_Browser11full_heightEv:
 272              	.LFB576:
 130:fltk-1.3.4-1/src/Fl_Browser.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Browser.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Browser.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Browser.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Browser.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Browser.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Browser.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Browser.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Browser.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Browser.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Browser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Browser.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Browser.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Browser.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Browser.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Browser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Browser.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Browser.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Browser.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Browser.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Browser.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Browser.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Browser.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Browser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Browser.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Browser.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Browser.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Browser.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Browser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Browser.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Browser.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Browser.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Browser.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Browser.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Browser.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Browser.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Browser.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Browser.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Browser.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Browser.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Browser.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Browser.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Browser.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Browser.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Browser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Browser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Browser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Browser.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Browser.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Browser.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Browser.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Browser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Browser.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Browser.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Browser.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Browser.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Browser.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Browser.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Browser.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Browser.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Browser.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Browser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Browser.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Browser.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Browser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Browser.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Browser.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Browser.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Browser.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Browser.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Browser.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Browser.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Browser.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Browser.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Browser.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Browser.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Browser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Browser.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Browser.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Browser.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Browser.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Browser.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Browser.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Browser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Browser.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Browser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Browser.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Browser.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Browser.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Browser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Browser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Browser.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Browser.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Browser.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Browser.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Browser.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Browser.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Browser.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Browser.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Browser.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Browser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Browser.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Browser.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Browser.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Browser.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Browser.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Browser.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Browser.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Browser.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Browser.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Browser.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Browser.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Browser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Browser.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Browser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Browser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Browser.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Browser.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Browser.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Browser.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Browser.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Browser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Browser.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Browser.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Browser.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Browser.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Browser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Browser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Browser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Browser.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Browser.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Browser.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Browser.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Browser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Browser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Browser.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Browser.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Browser.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Browser.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Browser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Browser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Browser.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Browser.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Browser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Browser.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Browser.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Browser.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Browser.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Browser.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Browser.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Browser.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Browser.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Browser.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Browser.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Browser.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Browser.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Browser.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Browser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Browser.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Browser.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Browser.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Browser.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Browser.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Browser.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Browser.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Browser.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Browser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Browser.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Browser.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Browser.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Browser.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Browser.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Browser.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Browser.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Browser.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Browser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Browser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Browser.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Browser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Browser.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Browser.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Browser.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Browser.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Browser.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Browser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Browser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Browser.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Browser.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Browser.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Browser.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Browser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Browser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Browser.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Browser.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Browser.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Browser.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Browser.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Browser.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Browser.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Browser.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Browser.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Browser.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Browser.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Browser.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Browser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Browser.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Browser.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Browser.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Browser.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Browser.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Browser.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Browser.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Browser.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Browser.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Browser.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Browser.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Browser.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Browser.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Browser.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Browser.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Browser.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Browser.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Browser.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Browser.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Browser.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Browser.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Browser.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Browser.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Browser.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Browser.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Browser.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Browser.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Browser.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Browser.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Browser.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Browser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Browser.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Browser.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Browser.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Browser.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Browser.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Browser.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Browser.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Browser.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Browser.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Browser.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Browser.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Browser.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Browser.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Browser.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Browser.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Browser.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Browser.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Browser.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Browser.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Browser.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Browser.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Browser.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Browser.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Browser.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Browser.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Browser.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Browser.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Browser.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Browser.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Browser.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Browser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Browser.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Browser.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Browser.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Browser.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Browser.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Browser.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Browser.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Browser.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Browser.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Browser.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Browser.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Browser.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Browser.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Browser.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Browser.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Browser.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Browser.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Browser.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Browser.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Browser.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Browser.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Browser.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Browser.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Browser.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Browser.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Browser.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Browser.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Browser.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Browser.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Browser.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Browser.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Browser.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Browser.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Browser.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Browser.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Browser.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Browser.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Browser.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Browser.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Browser.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Browser.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Browser.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Browser.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Browser.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Browser.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Browser.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Browser.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Browser.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Browser.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Browser.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Browser.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Browser.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Browser.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Browser.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Browser.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Browser.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Browser.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Browser.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Browser.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Browser.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Browser.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Browser.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Browser.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Browser.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Browser.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Browser.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Browser.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Browser.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Browser.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Browser.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Browser.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Browser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Browser.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Browser.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Browser.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Browser.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Browser.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Browser.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Browser.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Browser.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Browser.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Browser.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273              		.loc 3 484 0
 274              		.cfi_startproc
 275              	.LVL10:
 485:fltk-1.3.4-1/src/Fl_Browser.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 276              		.loc 3 485 0
 277 0000 8B878802 		movl	648(%rdi), %eax
 277      0000
 486:fltk-1.3.4-1/src/Fl_Browser.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 278              		.loc 3 486 0
 279 0006 C3       		ret
 280              		.cfi_endproc
 281              	.LFE576:
 283              		.section	.text.unlikely._ZNK10Fl_Browser11full_heightEv
 284              	.LCOLDE10:
 285              		.section	.text._ZNK10Fl_Browser11full_heightEv
 286              	.LHOTE10:
 287              		.section	.text.unlikely._ZNK10Fl_Browser11incr_heightEv,"ax",@progbits
 288              		.align 2
 289              	.LCOLDB11:
 290              		.section	.text._ZNK10Fl_Browser11incr_heightEv,"ax",@progbits
 291              	.LHOTB11:
 292              		.align 2
 293              		.p2align 4,,15
 294              		.globl	_ZNK10Fl_Browser11incr_heightEv
 296              	_ZNK10Fl_Browser11incr_heightEv:
 297              	.LFB577:
 487:fltk-1.3.4-1/src/Fl_Browser.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Browser.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Browser.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Browser.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Browser.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Browser.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Browser.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Browser.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Browser.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 298              		.loc 3 495 0
 299              		.cfi_startproc
 300              	.LVL11:
 496:fltk-1.3.4-1/src/Fl_Browser.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 301              		.loc 3 496 0
 302 0000 8B87C000 		movl	192(%rdi), %eax
 302      0000
 303 0006 83C002   		addl	$2, %eax
 497:fltk-1.3.4-1/src/Fl_Browser.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 304              		.loc 3 497 0
 305 0009 C3       		ret
 306              		.cfi_endproc
 307              	.LFE577:
 309              		.section	.text.unlikely._ZNK10Fl_Browser11incr_heightEv
 310              	.LCOLDE11:
 311              		.section	.text._ZNK10Fl_Browser11incr_heightEv
 312              	.LHOTE11:
 313              		.section	.text.unlikely._ZNK10Fl_Browser10item_widthEPv,"ax",@progbits
 314              		.align 2
 315              	.LCOLDB12:
 316              		.section	.text._ZNK10Fl_Browser10item_widthEPv,"ax",@progbits
 317              	.LHOTB12:
 318              		.align 2
 319              		.p2align 4,,15
 320              		.globl	_ZNK10Fl_Browser10item_widthEPv
 322              	_ZNK10Fl_Browser10item_widthEPv:
 323              	.LFB575:
 423:fltk-1.3.4-1/src/Fl_Browser.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 324              		.loc 3 423 0
 325              		.cfi_startproc
 326              	.LVL12:
 327 0000 4157     		pushq	%r15
 328              		.cfi_def_cfa_offset 16
 329              		.cfi_offset 15, -16
 330 0002 4156     		pushq	%r14
 331              		.cfi_def_cfa_offset 24
 332              		.cfi_offset 14, -24
 333 0004 4155     		pushq	%r13
 334              		.cfi_def_cfa_offset 32
 335              		.cfi_offset 13, -32
 336 0006 4154     		pushq	%r12
 337              		.cfi_def_cfa_offset 40
 338              		.cfi_offset 12, -40
 339 0008 4989FD   		movq	%rdi, %r13
 340 000b 55       		pushq	%rbp
 341              		.cfi_def_cfa_offset 48
 342              		.cfi_offset 6, -48
 343 000c 53       		pushq	%rbx
 344              		.cfi_def_cfa_offset 56
 345              		.cfi_offset 3, -56
 425:fltk-1.3.4-1/src/Fl_Browser.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 346              		.loc 3 425 0
 347 000d 488D5E23 		leaq	35(%rsi), %rbx
 423:fltk-1.3.4-1/src/Fl_Browser.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 348              		.loc 3 423 0
 349 0011 4989F4   		movq	%rsi, %r12
 350 0014 4883EC18 		subq	$24, %rsp
 351              		.cfi_def_cfa_offset 80
 352 0018 4C8BB790 		movq	656(%rdi), %r14
 352      020000
 425:fltk-1.3.4-1/src/Fl_Browser.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353              		.loc 3 425 0
 354 001f 48891C24 		movq	%rbx, (%rsp)
 423:fltk-1.3.4-1/src/Fl_Browser.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 355              		.loc 3 423 0
 356 0023 64488B04 		movq	%fs:40, %rax
 356      25280000 
 356      00
 357 002c 48894424 		movq	%rax, 8(%rsp)
 357      08
 358 0031 31C0     		xorl	%eax, %eax
 359              	.LVL13:
 429:fltk-1.3.4-1/src/Fl_Browser.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 360              		.loc 3 429 0
 361 0033 418B16   		movl	(%r14), %edx
 362 0036 85D2     		testl	%edx, %edx
 363 0038 0F845802 		je	.L44
 363      0000
 364 003e 440FBEBF 		movsbl	665(%rdi), %r15d
 364      99020000 
 365 0046 31ED     		xorl	%ebp, %ebp
 366 0048 EB1D     		jmp	.L19
 367              	.LVL14:
 368 004a 660F1F44 		.p2align 4,,10
 368      0000
 369              		.p2align 3
 370              	.L64:
 371              	.LBB273:
 433:fltk-1.3.4-1/src/Fl_Browser.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 372              		.loc 3 433 0
 373 0050 488D5801 		leaq	1(%rax), %rbx
 434:fltk-1.3.4-1/src/Fl_Browser.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 374              		.loc 3 434 0
 375 0054 4983C604 		addq	$4, %r14
 376              	.LVL15:
 433:fltk-1.3.4-1/src/Fl_Browser.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 377              		.loc 3 433 0
 378 0058 48891C24 		movq	%rbx, (%rsp)
 379              	.LBE273:
 429:fltk-1.3.4-1/src/Fl_Browser.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 380              		.loc 3 429 0
 381 005c 418B06   		movl	(%r14), %eax
 382              	.LBB276:
 434:fltk-1.3.4-1/src/Fl_Browser.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 383              		.loc 3 434 0
 384 005f 41036EFC 		addl	-4(%r14), %ebp
 385              	.LVL16:
 386              	.LBE276:
 429:fltk-1.3.4-1/src/Fl_Browser.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 387              		.loc 3 429 0
 388 0063 85C0     		testl	%eax, %eax
 389 0065 7410     		je	.L18
 390              	.LVL17:
 391              	.L19:
 392              	.LBB277:
 393              	.LBB274:
 394              	.LBB275:
 395              		.file 4 "/usr/include/string.h"
   1:/usr/include/string.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/string.h ****    This file is part of the GNU C Library.
   3:/usr/include/string.h **** 
   4:/usr/include/string.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/string.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/string.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/string.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/string.h **** 
   9:/usr/include/string.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/string.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/string.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/string.h ****    Lesser General Public License for more details.
  13:/usr/include/string.h **** 
  14:/usr/include/string.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/string.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/string.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/string.h **** 
  18:/usr/include/string.h **** /*
  19:/usr/include/string.h ****  *	ISO C99 Standard: 7.21 String handling	<string.h>
  20:/usr/include/string.h ****  */
  21:/usr/include/string.h **** 
  22:/usr/include/string.h **** #ifndef	_STRING_H
  23:/usr/include/string.h **** #define	_STRING_H	1
  24:/usr/include/string.h **** 
  25:/usr/include/string.h **** #include <features.h>
  26:/usr/include/string.h **** 
  27:/usr/include/string.h **** __BEGIN_DECLS
  28:/usr/include/string.h **** 
  29:/usr/include/string.h **** /* Get size_t and NULL from <stddef.h>.  */
  30:/usr/include/string.h **** #define	__need_size_t
  31:/usr/include/string.h **** #define	__need_NULL
  32:/usr/include/string.h **** #include <stddef.h>
  33:/usr/include/string.h **** 
  34:/usr/include/string.h **** /* Tell the caller that we provide correct C++ prototypes.  */
  35:/usr/include/string.h **** #if defined __cplusplus && __GNUC_PREREQ (4, 4)
  36:/usr/include/string.h **** # define __CORRECT_ISO_CPP_STRING_H_PROTO
  37:/usr/include/string.h **** #endif
  38:/usr/include/string.h **** 
  39:/usr/include/string.h **** 
  40:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  41:/usr/include/string.h **** /* Copy N bytes of SRC to DEST.  */
  42:/usr/include/string.h **** extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
  43:/usr/include/string.h **** 		     size_t __n) __THROW __nonnull ((1, 2));
  44:/usr/include/string.h **** /* Copy N bytes of SRC to DEST, guaranteeing
  45:/usr/include/string.h ****    correct behavior for overlapping strings.  */
  46:/usr/include/string.h **** extern void *memmove (void *__dest, const void *__src, size_t __n)
  47:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  48:/usr/include/string.h **** __END_NAMESPACE_STD
  49:/usr/include/string.h **** 
  50:/usr/include/string.h **** /* Copy no more than N bytes of SRC to DEST, stopping when C is found.
  51:/usr/include/string.h ****    Return the position in DEST one byte past where C was copied,
  52:/usr/include/string.h ****    or NULL if C was not found in the first N bytes of SRC.  */
  53:/usr/include/string.h **** #if defined __USE_MISC || defined __USE_XOPEN
  54:/usr/include/string.h **** extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
  55:/usr/include/string.h **** 		      int __c, size_t __n)
  56:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  57:/usr/include/string.h **** #endif /* Misc || X/Open.  */
  58:/usr/include/string.h **** 
  59:/usr/include/string.h **** 
  60:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  61:/usr/include/string.h **** /* Set N bytes of S to C.  */
  62:/usr/include/string.h **** extern void *memset (void *__s, int __c, size_t __n) __THROW __nonnull ((1));
  63:/usr/include/string.h **** 
  64:/usr/include/string.h **** /* Compare N bytes of S1 and S2.  */
  65:/usr/include/string.h **** extern int memcmp (const void *__s1, const void *__s2, size_t __n)
  66:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
  67:/usr/include/string.h **** 
  68:/usr/include/string.h **** /* Search N bytes of S for C.  */
  69:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
  70:/usr/include/string.h **** extern "C++"
  71:/usr/include/string.h **** {
  72:/usr/include/string.h **** extern void *memchr (void *__s, int __c, size_t __n)
  73:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  74:/usr/include/string.h **** extern const void *memchr (const void *__s, int __c, size_t __n)
  75:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  76:/usr/include/string.h **** 
  77:/usr/include/string.h **** # ifdef __OPTIMIZE__
  78:/usr/include/string.h **** __extern_always_inline void *
  79:/usr/include/string.h **** memchr (void *__s, int __c, size_t __n) __THROW
  80:/usr/include/string.h **** {
  81:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  82:/usr/include/string.h **** }
  83:/usr/include/string.h **** 
  84:/usr/include/string.h **** __extern_always_inline const void *
  85:/usr/include/string.h **** memchr (const void *__s, int __c, size_t __n) __THROW
  86:/usr/include/string.h **** {
  87:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  88:/usr/include/string.h **** }
  89:/usr/include/string.h **** # endif
  90:/usr/include/string.h **** }
  91:/usr/include/string.h **** #else
  92:/usr/include/string.h **** extern void *memchr (const void *__s, int __c, size_t __n)
  93:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
  94:/usr/include/string.h **** #endif
  95:/usr/include/string.h **** __END_NAMESPACE_STD
  96:/usr/include/string.h **** 
  97:/usr/include/string.h **** #ifdef __USE_GNU
  98:/usr/include/string.h **** /* Search in S for C.  This is similar to `memchr' but there is no
  99:/usr/include/string.h ****    length limit.  */
 100:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 101:/usr/include/string.h **** extern "C++" void *rawmemchr (void *__s, int __c)
 102:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 103:/usr/include/string.h **** extern "C++" const void *rawmemchr (const void *__s, int __c)
 104:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 105:/usr/include/string.h **** # else
 106:/usr/include/string.h **** extern void *rawmemchr (const void *__s, int __c)
 107:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 108:/usr/include/string.h **** # endif
 109:/usr/include/string.h **** 
 110:/usr/include/string.h **** /* Search N bytes of S for the final occurrence of C.  */
 111:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 112:/usr/include/string.h **** extern "C++" void *memrchr (void *__s, int __c, size_t __n)
 113:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 114:/usr/include/string.h **** extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
 115:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 116:/usr/include/string.h **** # else
 117:/usr/include/string.h **** extern void *memrchr (const void *__s, int __c, size_t __n)
 118:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
 119:/usr/include/string.h **** # endif
 120:/usr/include/string.h **** #endif
 121:/usr/include/string.h **** 
 122:/usr/include/string.h **** 
 123:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 124:/usr/include/string.h **** /* Copy SRC to DEST.  */
 125:/usr/include/string.h **** extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
 126:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 127:/usr/include/string.h **** /* Copy no more than N characters of SRC to DEST.  */
 128:/usr/include/string.h **** extern char *strncpy (char *__restrict __dest,
 129:/usr/include/string.h **** 		      const char *__restrict __src, size_t __n)
 130:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 131:/usr/include/string.h **** 
 132:/usr/include/string.h **** /* Append SRC onto DEST.  */
 133:/usr/include/string.h **** extern char *strcat (char *__restrict __dest, const char *__restrict __src)
 134:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 135:/usr/include/string.h **** /* Append no more than N characters from SRC onto DEST.  */
 136:/usr/include/string.h **** extern char *strncat (char *__restrict __dest, const char *__restrict __src,
 137:/usr/include/string.h **** 		      size_t __n) __THROW __nonnull ((1, 2));
 138:/usr/include/string.h **** 
 139:/usr/include/string.h **** /* Compare S1 and S2.  */
 140:/usr/include/string.h **** extern int strcmp (const char *__s1, const char *__s2)
 141:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 142:/usr/include/string.h **** /* Compare N characters of S1 and S2.  */
 143:/usr/include/string.h **** extern int strncmp (const char *__s1, const char *__s2, size_t __n)
 144:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 145:/usr/include/string.h **** 
 146:/usr/include/string.h **** /* Compare the collated forms of S1 and S2.  */
 147:/usr/include/string.h **** extern int strcoll (const char *__s1, const char *__s2)
 148:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 149:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 150:/usr/include/string.h **** extern size_t strxfrm (char *__restrict __dest,
 151:/usr/include/string.h **** 		       const char *__restrict __src, size_t __n)
 152:/usr/include/string.h ****      __THROW __nonnull ((2));
 153:/usr/include/string.h **** __END_NAMESPACE_STD
 154:/usr/include/string.h **** 
 155:/usr/include/string.h **** #ifdef __USE_XOPEN2K8
 156:/usr/include/string.h **** /* The following functions are equivalent to the both above but they
 157:/usr/include/string.h ****    take the locale they use for the collation as an extra argument.
 158:/usr/include/string.h ****    This is not standardsized but something like will come.  */
 159:/usr/include/string.h **** # include <xlocale.h>
 160:/usr/include/string.h **** 
 161:/usr/include/string.h **** /* Compare the collated forms of S1 and S2 using rules from L.  */
 162:/usr/include/string.h **** extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
 163:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2, 3));
 164:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 165:/usr/include/string.h **** extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
 166:/usr/include/string.h **** 			 __locale_t __l) __THROW __nonnull ((2, 4));
 167:/usr/include/string.h **** #endif
 168:/usr/include/string.h **** 
 169:/usr/include/string.h **** #if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
 170:/usr/include/string.h **** /* Duplicate S, returning an identical malloc'd string.  */
 171:/usr/include/string.h **** extern char *strdup (const char *__s)
 172:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 173:/usr/include/string.h **** #endif
 174:/usr/include/string.h **** 
 175:/usr/include/string.h **** /* Return a malloc'd copy of at most N bytes of STRING.  The
 176:/usr/include/string.h ****    resultant string is terminated even if no null terminator
 177:/usr/include/string.h ****    appears before STRING[N].  */
 178:/usr/include/string.h **** #if defined __USE_XOPEN2K8
 179:/usr/include/string.h **** extern char *strndup (const char *__string, size_t __n)
 180:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 181:/usr/include/string.h **** #endif
 182:/usr/include/string.h **** 
 183:/usr/include/string.h **** #if defined __USE_GNU && defined __GNUC__
 184:/usr/include/string.h **** /* Duplicate S, returning an identical alloca'd string.  */
 185:/usr/include/string.h **** # define strdupa(s)							      \
 186:/usr/include/string.h ****   (__extension__							      \
 187:/usr/include/string.h ****     ({									      \
 188:/usr/include/string.h ****       const char *__old = (s);						      \
 189:/usr/include/string.h ****       size_t __len = strlen (__old) + 1;				      \
 190:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len);			      \
 191:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 192:/usr/include/string.h ****     }))
 193:/usr/include/string.h **** 
 194:/usr/include/string.h **** /* Return an alloca'd copy of at most N bytes of string.  */
 195:/usr/include/string.h **** # define strndupa(s, n)							      \
 196:/usr/include/string.h ****   (__extension__							      \
 197:/usr/include/string.h ****     ({									      \
 198:/usr/include/string.h ****       const char *__old = (s);						      \
 199:/usr/include/string.h ****       size_t __len = strnlen (__old, (n));				      \
 200:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len + 1);		      \
 201:/usr/include/string.h ****       __new[__len] = '\0';						      \
 202:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 203:/usr/include/string.h ****     }))
 204:/usr/include/string.h **** #endif
 205:/usr/include/string.h **** 
 206:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 207:/usr/include/string.h **** /* Find the first occurrence of C in S.  */
 208:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 209:/usr/include/string.h **** extern "C++"
 210:/usr/include/string.h **** {
 211:/usr/include/string.h **** extern char *strchr (char *__s, int __c)
 212:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 213:/usr/include/string.h **** extern const char *strchr (const char *__s, int __c)
 214:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 215:/usr/include/string.h **** 
 216:/usr/include/string.h **** # ifdef __OPTIMIZE__
 217:/usr/include/string.h **** __extern_always_inline char *
 218:/usr/include/string.h **** strchr (char *__s, int __c) __THROW
 219:/usr/include/string.h **** {
 220:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 396              		.loc 4 220 0
 397 0067 4489FE   		movl	%r15d, %esi
 398 006a 4889DF   		movq	%rbx, %rdi
 399 006d E8000000 		call	strchr
 399      00
 400              	.LVL18:
 401              	.LBE275:
 402              	.LBE274:
 432:fltk-1.3.4-1/src/Fl_Browser.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 403              		.loc 3 432 0
 404 0072 4885C0   		testq	%rax, %rax
 405 0075 75D9     		jne	.L64
 406              	.LVL19:
 407              	.L18:
 408 0077 0FB60B   		movzbl	(%rbx), %ecx
 409 007a 410FB685 		movzbl	664(%r13), %eax
 409      98020000 
 410 0082 458BBDC0 		movl	192(%r13), %r15d
 410      000000
 411              	.LVL20:
 412 0089 458BB5BC 		movl	188(%r13), %r14d
 412      000000
 413              	.LVL21:
 414              		.p2align 4,,10
 415              		.p2align 3
 416              	.L41:
 417              	.LBE277:
 442:fltk-1.3.4-1/src/Fl_Browser.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 418              		.loc 3 442 0
 419 0090 38C1     		cmpb	%al, %cl
 420 0092 754C     		jne	.L21
 442:fltk-1.3.4-1/src/Fl_Browser.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 421              		.loc 3 442 0 is_stmt 0 discriminator 1
 422 0094 0FB64301 		movzbl	1(%rbx), %eax
 423 0098 38C8     		cmpb	%cl, %al
 424 009a 0F84D501 		je	.L22
 424      0000
 425 00a0 84C0     		testb	%al, %al
 426 00a2 0F84CD01 		je	.L22
 426      0000
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 427              		.loc 3 444 0 is_stmt 1
 428 00a8 488D7B02 		leaq	2(%rbx), %rdi
 429 00ac 48893C24 		movq	%rdi, (%rsp)
 430 00b0 0FB64301 		movzbl	1(%rbx), %eax
 431 00b4 8D50D2   		leal	-46(%rax), %edx
 432 00b7 80FA46   		cmpb	$70, %dl
 433 00ba 0F87A001 		ja	.L23
 433      0000
 434 00c0 0FB6D2   		movzbl	%dl, %edx
 435 00c3 FF24D500 		jmp	*.L25(,%rdx,8)
 435      000000
 436              		.section	.rodata._ZNK10Fl_Browser10item_widthEPv,"a",@progbits
 437              		.align 8
 438              		.align 4
 439              	.L25:
 440 0000 00000000 		.quad	.L24
 440      00000000 
 441 0008 00000000 		.quad	.L23
 441      00000000 
 442 0010 00000000 		.quad	.L23
 442      00000000 
 443 0018 00000000 		.quad	.L23
 443      00000000 
 444 0020 00000000 		.quad	.L23
 444      00000000 
 445 0028 00000000 		.quad	.L23
 445      00000000 
 446 0030 00000000 		.quad	.L23
 446      00000000 
 447 0038 00000000 		.quad	.L23
 447      00000000 
 448 0040 00000000 		.quad	.L23
 448      00000000 
 449 0048 00000000 		.quad	.L23
 449      00000000 
 450 0050 00000000 		.quad	.L23
 450      00000000 
 451 0058 00000000 		.quad	.L23
 451      00000000 
 452 0060 00000000 		.quad	.L23
 452      00000000 
 453 0068 00000000 		.quad	.L23
 453      00000000 
 454 0070 00000000 		.quad	.L23
 454      00000000 
 455 0078 00000000 		.quad	.L23
 455      00000000 
 456 0080 00000000 		.quad	.L23
 456      00000000 
 457 0088 00000000 		.quad	.L23
 457      00000000 
 458 0090 00000000 		.quad	.L26
 458      00000000 
 459 0098 00000000 		.quad	.L23
 459      00000000 
 460 00a0 00000000 		.quad	.L27
 460      00000000 
 461 00a8 00000000 		.quad	.L27
 461      00000000 
 462 00b0 00000000 		.quad	.L23
 462      00000000 
 463 00b8 00000000 		.quad	.L23
 463      00000000 
 464 00c0 00000000 		.quad	.L28
 464      00000000 
 465 00c8 00000000 		.quad	.L23
 465      00000000 
 466 00d0 00000000 		.quad	.L23
 466      00000000 
 467 00d8 00000000 		.quad	.L23
 467      00000000 
 468 00e0 00000000 		.quad	.L23
 468      00000000 
 469 00e8 00000000 		.quad	.L23
 469      00000000 
 470 00f0 00000000 		.quad	.L29
 470      00000000 
 471 00f8 00000000 		.quad	.L30
 471      00000000 
 472 0100 00000000 		.quad	.L23
 472      00000000 
 473 0108 00000000 		.quad	.L23
 473      00000000 
 474 0110 00000000 		.quad	.L23
 474      00000000 
 475 0118 00000000 		.quad	.L23
 475      00000000 
 476 0120 00000000 		.quad	.L23
 476      00000000 
 477 0128 00000000 		.quad	.L31
 477      00000000 
 478 0130 00000000 		.quad	.L23
 478      00000000 
 479 0138 00000000 		.quad	.L23
 479      00000000 
 480 0140 00000000 		.quad	.L23
 480      00000000 
 481 0148 00000000 		.quad	.L23
 481      00000000 
 482 0150 00000000 		.quad	.L23
 482      00000000 
 483 0158 00000000 		.quad	.L23
 483      00000000 
 484 0160 00000000 		.quad	.L23
 484      00000000 
 485 0168 00000000 		.quad	.L23
 485      00000000 
 486 0170 00000000 		.quad	.L23
 486      00000000 
 487 0178 00000000 		.quad	.L23
 487      00000000 
 488 0180 00000000 		.quad	.L23
 488      00000000 
 489 0188 00000000 		.quad	.L23
 489      00000000 
 490 0190 00000000 		.quad	.L23
 490      00000000 
 491 0198 00000000 		.quad	.L23
 491      00000000 
 492 01a0 00000000 		.quad	.L32
 492      00000000 
 493 01a8 00000000 		.quad	.L23
 493      00000000 
 494 01b0 00000000 		.quad	.L23
 494      00000000 
 495 01b8 00000000 		.quad	.L23
 495      00000000 
 496 01c0 00000000 		.quad	.L33
 496      00000000 
 497 01c8 00000000 		.quad	.L23
 497      00000000 
 498 01d0 00000000 		.quad	.L23
 498      00000000 
 499 01d8 00000000 		.quad	.L34
 499      00000000 
 500 01e0 00000000 		.quad	.L23
 500      00000000 
 501 01e8 00000000 		.quad	.L23
 501      00000000 
 502 01f0 00000000 		.quad	.L29
 502      00000000 
 503 01f8 00000000 		.quad	.L30
 503      00000000 
 504 0200 00000000 		.quad	.L23
 504      00000000 
 505 0208 00000000 		.quad	.L23
 505      00000000 
 506 0210 00000000 		.quad	.L23
 506      00000000 
 507 0218 00000000 		.quad	.L23
 507      00000000 
 508 0220 00000000 		.quad	.L23
 508      00000000 
 509 0228 00000000 		.quad	.L35
 509      00000000 
 510 0230 00000000 		.quad	.L33
 510      00000000 
 511              		.section	.text._ZNK10Fl_Browser10item_widthEPv
 512 00ca 660F1F44 		.p2align 4,,10
 512      0000
 513              		.p2align 3
 514              	.L26:
 443:fltk-1.3.4-1/src/Fl_Browser.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 515              		.loc 3 443 0
 516 00d0 488D7B01 		leaq	1(%rbx), %rdi
 459:fltk-1.3.4-1/src/Fl_Browser.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 517              		.loc 3 459 0
 518 00d4 48893C24 		movq	%rdi, (%rsp)
 519              	.LVL22:
 520              	.L24:
 467:fltk-1.3.4-1/src/Fl_Browser.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521              		.loc 3 467 0
 522 00d8 380F     		cmpb	%cl, (%rdi)
 523 00da 0F848E01 		je	.L65
 523      0000
 524              	.LVL23:
 525              	.L21:
 470:fltk-1.3.4-1/src/Fl_Browser.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 526              		.loc 3 470 0
 527 00e0 85ED     		testl	%ebp, %ebp
 528 00e2 750D     		jne	.L40
 470:fltk-1.3.4-1/src/Fl_Browser.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 529              		.loc 3 470 0 is_stmt 0 discriminator 1
 530 00e4 498B4424 		movq	24(%r12), %rax
 530      18
 531 00e9 4885C0   		testq	%rax, %rax
 532 00ec 7403     		je	.L40
 533 00ee 8B6808   		movl	8(%rax), %ebp
 534              	.LVL24:
 535              	.L40:
 536              	.LBB278:
 537              	.LBB279:
 538              		.file 5 "fltk-1.3.4-1/FL/fl_draw.H"
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
 539              		.loc 5 509 0 is_stmt 1
 540 00f1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 540      000000
 541 00f8 4489F6   		movl	%r14d, %esi
 542 00fb 4489FA   		movl	%r15d, %edx
 543 00fe 488B07   		movq	(%rdi), %rax
 544 0101 FF90B001 		call	*432(%rax)
 544      0000
 545              	.LVL25:
 546              	.LBE279:
 547              	.LBE278:
 473:fltk-1.3.4-1/src/Fl_Browser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 548              		.loc 3 473 0
 549 0107 488B3C24 		movq	(%rsp), %rdi
 550 010b E8000000 		call	_Z8fl_widthPKc
 550      00
 551              	.LVL26:
 552 0110 F20F2CC0 		cvttsd2si	%xmm0, %eax
 474:fltk-1.3.4-1/src/Fl_Browser.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 553              		.loc 3 474 0
 554 0114 488B7424 		movq	8(%rsp), %rsi
 554      08
 555 0119 64483334 		xorq	%fs:40, %rsi
 555      25280000 
 555      00
 473:fltk-1.3.4-1/src/Fl_Browser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 556              		.loc 3 473 0
 557 0122 8D440506 		leal	6(%rbp,%rax), %eax
 474:fltk-1.3.4-1/src/Fl_Browser.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 558              		.loc 3 474 0
 559 0126 0F857101 		jne	.L66
 559      0000
 560 012c 4883C418 		addq	$24, %rsp
 561              		.cfi_remember_state
 562              		.cfi_def_cfa_offset 56
 563 0130 5B       		popq	%rbx
 564              		.cfi_def_cfa_offset 48
 565 0131 5D       		popq	%rbp
 566              		.cfi_def_cfa_offset 40
 567              	.LVL27:
 568 0132 415C     		popq	%r12
 569              		.cfi_def_cfa_offset 32
 570              	.LVL28:
 571 0134 415D     		popq	%r13
 572              		.cfi_def_cfa_offset 24
 573              	.LVL29:
 574 0136 415E     		popq	%r14
 575              		.cfi_def_cfa_offset 16
 576              	.LVL30:
 577 0138 415F     		popq	%r15
 578              		.cfi_def_cfa_offset 8
 579              	.LVL31:
 580 013a C3       		ret
 581              	.LVL32:
 582 013b 0F1F4400 		.p2align 4,,10
 582      00
 583              		.p2align 3
 584              	.L35:
 585              		.cfi_restore_state
 447:fltk-1.3.4-1/src/Fl_Browser.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 586              		.loc 3 447 0
 587 0140 89C8     		movl	%ecx, %eax
 588 0142 41BF0B00 		movl	$11, %r15d
 588      0000
 589 0148 0FB64B02 		movzbl	2(%rbx), %ecx
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 590              		.loc 3 444 0
 591 014c 4889FB   		movq	%rdi, %rbx
 447:fltk-1.3.4-1/src/Fl_Browser.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 592              		.loc 3 447 0
 593 014f E93CFFFF 		jmp	.L41
 593      FF
 594              	.LVL33:
 595              		.p2align 4,,10
 596 0154 0F1F4000 		.p2align 3
 597              	.L34:
 449:fltk-1.3.4-1/src/Fl_Browser.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 598              		.loc 3 449 0
 599 0158 89C8     		movl	%ecx, %eax
 600 015a 4183CE02 		orl	$2, %r14d
 601              	.LVL34:
 602 015e 0FB64B02 		movzbl	2(%rbx), %ecx
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 603              		.loc 3 444 0
 604 0162 4889FB   		movq	%rdi, %rbx
 449:fltk-1.3.4-1/src/Fl_Browser.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 605              		.loc 3 449 0
 606 0165 E926FFFF 		jmp	.L41
 606      FF
 607 016a 660F1F44 		.p2align 4,,10
 607      0000
 608              		.p2align 3
 609              	.L33:
 610              	.LVL35:
 450:fltk-1.3.4-1/src/Fl_Browser.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 611              		.loc 3 450 0
 612 0170 89C8     		movl	%ecx, %eax
 613 0172 41BE0400 		movl	$4, %r14d
 613      0000
 614 0178 0FB64B02 		movzbl	2(%rbx), %ecx
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 615              		.loc 3 444 0
 616 017c 4889FB   		movq	%rdi, %rbx
 450:fltk-1.3.4-1/src/Fl_Browser.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 617              		.loc 3 450 0
 618 017f E90CFFFF 		jmp	.L41
 618      FF
 619              	.LVL36:
 620              		.p2align 4,,10
 621 0184 0F1F4000 		.p2align 3
 622              	.L32:
 448:fltk-1.3.4-1/src/Fl_Browser.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 623              		.loc 3 448 0
 624 0188 89C8     		movl	%ecx, %eax
 625 018a 4183CE01 		orl	$1, %r14d
 626              	.LVL37:
 627 018e 0FB64B02 		movzbl	2(%rbx), %ecx
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 628              		.loc 3 444 0
 629 0192 4889FB   		movq	%rdi, %rbx
 448:fltk-1.3.4-1/src/Fl_Browser.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 630              		.loc 3 448 0
 631 0195 E9F6FEFF 		jmp	.L41
 631      FF
 632 019a 660F1F44 		.p2align 4,,10
 632      0000
 633              		.p2align 3
 634              	.L31:
 454:fltk-1.3.4-1/src/Fl_Browser.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635              		.loc 3 454 0
 636 01a0 BA0A0000 		movl	$10, %edx
 636      00
 637 01a5 4889E6   		movq	%rsp, %rsi
 638 01a8 E8000000 		call	strtol
 638      00
 639              	.LVL38:
 640 01ad 488B1C24 		movq	(%rsp), %rbx
 641 01b1 4189C7   		movl	%eax, %r15d
 642              	.LVL39:
 643 01b4 410FB685 		movzbl	664(%r13), %eax
 643      98020000 
 644              	.LVL40:
 645 01bc 0FB60B   		movzbl	(%rbx), %ecx
 646 01bf E9CCFEFF 		jmp	.L41
 646      FF
 647              	.LVL41:
 648              		.p2align 4,,10
 649 01c4 0F1F4000 		.p2align 3
 650              	.L30:
 446:fltk-1.3.4-1/src/Fl_Browser.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 651              		.loc 3 446 0
 652 01c8 89C8     		movl	%ecx, %eax
 653 01ca 41BF1200 		movl	$18, %r15d
 653      0000
 654 01d0 0FB64B02 		movzbl	2(%rbx), %ecx
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 655              		.loc 3 444 0
 656 01d4 4889FB   		movq	%rdi, %rbx
 446:fltk-1.3.4-1/src/Fl_Browser.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 657              		.loc 3 446 0
 658 01d7 E9B4FEFF 		jmp	.L41
 658      FF
 659              	.LVL42:
 660 01dc 0F1F4000 		.p2align 4,,10
 661              		.p2align 3
 662              	.L29:
 445:fltk-1.3.4-1/src/Fl_Browser.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 663              		.loc 3 445 0
 664 01e0 89C8     		movl	%ecx, %eax
 665 01e2 41BF1800 		movl	$24, %r15d
 665      0000
 666 01e8 0FB64B02 		movzbl	2(%rbx), %ecx
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 667              		.loc 3 444 0
 668 01ec 4889FB   		movq	%rdi, %rbx
 445:fltk-1.3.4-1/src/Fl_Browser.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 669              		.loc 3 445 0
 670 01ef E99CFEFF 		jmp	.L41
 670      FF
 671              	.LVL43:
 672              		.p2align 4,,10
 673 01f4 0F1F4000 		.p2align 3
 674              	.L28:
 453:fltk-1.3.4-1/src/Fl_Browser.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 675              		.loc 3 453 0
 676 01f8 BA0A0000 		movl	$10, %edx
 676      00
 677 01fd 4889E6   		movq	%rsp, %rsi
 678 0200 E8000000 		call	strtol
 678      00
 679              	.LVL44:
 680 0205 488B1C24 		movq	(%rsp), %rbx
 681 0209 4189C6   		movl	%eax, %r14d
 682              	.LVL45:
 683 020c 410FB685 		movzbl	664(%r13), %eax
 683      98020000 
 684              	.LVL46:
 685 0214 0FB60B   		movzbl	(%rbx), %ecx
 686 0217 E974FEFF 		jmp	.L41
 686      FF
 687              	.LVL47:
 688 021c 0F1F4000 		.p2align 4,,10
 689              		.p2align 3
 690              	.L27:
 452:fltk-1.3.4-1/src/Fl_Browser.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 691              		.loc 3 452 0 discriminator 2
 692 0220 0FB64302 		movzbl	2(%rbx), %eax
 693 0224 89C2     		movl	%eax, %edx
 694 0226 83E830   		subl	$48, %eax
 695 0229 83F809   		cmpl	$9, %eax
 696 022c 775C     		ja	.L67
 697 022e 488D4303 		leaq	3(%rbx), %rax
 698              		.p2align 4,,10
 699 0232 660F1F44 		.p2align 3
 699      0000
 700              	.L38:
 452:fltk-1.3.4-1/src/Fl_Browser.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 701              		.loc 3 452 0 is_stmt 0 discriminator 1
 702 0238 48890424 		movq	%rax, (%rsp)
 703 023c 0FB610   		movzbl	(%rax), %edx
 704 023f 4889C3   		movq	%rax, %rbx
 705 0242 488D4001 		leaq	1(%rax), %rax
 706 0246 89D6     		movl	%edx, %esi
 707 0248 83EA30   		subl	$48, %edx
 708 024b 83FA09   		cmpl	$9, %edx
 709 024e 76E8     		jbe	.L38
 710 0250 89C8     		movl	%ecx, %eax
 452:fltk-1.3.4-1/src/Fl_Browser.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 711              		.loc 3 452 0
 712 0252 89F1     		movl	%esi, %ecx
 713 0254 E937FEFF 		jmp	.L41
 713      FF
 714 0259 0F1F8000 		.p2align 4,,10
 714      000000
 715              		.p2align 3
 716              	.L23:
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 717              		.loc 3 444 0 is_stmt 1
 718 0260 89C8     		movl	%ecx, %eax
 719 0262 0FB64B02 		movzbl	2(%rbx), %ecx
 720 0266 4889FB   		movq	%rdi, %rbx
 721 0269 E922FEFF 		jmp	.L41
 721      FF
 722              	.LVL48:
 723              	.L65:
 724 026e 0FB64701 		movzbl	1(%rdi), %eax
 467:fltk-1.3.4-1/src/Fl_Browser.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 725              		.loc 3 467 0
 726 0272 4889FB   		movq	%rdi, %rbx
 727              	.LVL49:
 728              	.L22:
 467:fltk-1.3.4-1/src/Fl_Browser.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 729              		.loc 3 467 0 is_stmt 0 discriminator 1
 730 0275 84C0     		testb	%al, %al
 731 0277 0F8463FE 		je	.L21
 731      FFFF
 468:fltk-1.3.4-1/src/Fl_Browser.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 732              		.loc 3 468 0 is_stmt 1
 733 027d 4883C301 		addq	$1, %rbx
 734 0281 48891C24 		movq	%rbx, (%rsp)
 735 0285 E956FEFF 		jmp	.L21
 735      FF
 736              	.LVL50:
 737              	.L67:
 452:fltk-1.3.4-1/src/Fl_Browser.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 738              		.loc 3 452 0
 739 028a 89C8     		movl	%ecx, %eax
 444:fltk-1.3.4-1/src/Fl_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 740              		.loc 3 444 0
 741 028c 4889FB   		movq	%rdi, %rbx
 452:fltk-1.3.4-1/src/Fl_Browser.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 742              		.loc 3 452 0
 743 028f 89D1     		movl	%edx, %ecx
 744 0291 E9FAFDFF 		jmp	.L41
 744      FF
 745              	.LVL51:
 746              	.L44:
 427:fltk-1.3.4-1/src/Fl_Browser.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 747              		.loc 3 427 0
 748 0296 31ED     		xorl	%ebp, %ebp
 749 0298 E9DAFDFF 		jmp	.L18
 749      FF
 750              	.LVL52:
 751              	.L66:
 474:fltk-1.3.4-1/src/Fl_Browser.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 752              		.loc 3 474 0
 753 029d E8000000 		call	__stack_chk_fail
 753      00
 754              	.LVL53:
 755              		.cfi_endproc
 756              	.LFE575:
 758              		.section	.text.unlikely._ZNK10Fl_Browser10item_widthEPv
 759              	.LCOLDE12:
 760              		.section	.text._ZNK10Fl_Browser10item_widthEPv
 761              	.LHOTE12:
 762              		.section	.text.unlikely._ZNK10Fl_Browser9item_drawEPviiii,"ax",@progbits
 763              		.align 2
 764              	.LCOLDB13:
 765              		.section	.text._ZNK10Fl_Browser9item_drawEPviiii,"ax",@progbits
 766              	.LHOTB13:
 767              		.align 2
 768              		.p2align 4,,15
 769              		.globl	_ZNK10Fl_Browser9item_drawEPviiii
 771              	_ZNK10Fl_Browser9item_drawEPviiii:
 772              	.LFB578:
 498:fltk-1.3.4-1/src/Fl_Browser.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Browser.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Browser.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Browser.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Browser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Browser.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Browser.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Browser.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Browser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 773              		.loc 3 506 0
 774              		.cfi_startproc
 775              	.LVL54:
 776 0000 4157     		pushq	%r15
 777              		.cfi_def_cfa_offset 16
 778              		.cfi_offset 15, -16
 779 0002 4156     		pushq	%r14
 780              		.cfi_def_cfa_offset 24
 781              		.cfi_offset 14, -24
 782 0004 4889F0   		movq	%rsi, %rax
 783 0007 4155     		pushq	%r13
 784              		.cfi_def_cfa_offset 32
 785              		.cfi_offset 13, -32
 786 0009 4154     		pushq	%r12
 787              		.cfi_def_cfa_offset 40
 788              		.cfi_offset 12, -40
 507:fltk-1.3.4-1/src/Fl_Browser.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Browser.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 789              		.loc 3 508 0
 790 000b 4883C023 		addq	$35, %rax
 506:fltk-1.3.4-1/src/Fl_Browser.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 791              		.loc 3 506 0
 792 000f 55       		pushq	%rbp
 793              		.cfi_def_cfa_offset 48
 794              		.cfi_offset 6, -48
 795 0010 53       		pushq	%rbx
 796              		.cfi_def_cfa_offset 56
 797              		.cfi_offset 3, -56
 798 0011 4889FB   		movq	%rdi, %rbx
 799 0014 4883EC58 		subq	$88, %rsp
 800              		.cfi_def_cfa_offset 144
 801 0018 4C8BBF90 		movq	656(%rdi), %r15
 801      020000
 506:fltk-1.3.4-1/src/Fl_Browser.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 802              		.loc 3 506 0
 803 001f 48897424 		movq	%rsi, 24(%rsp)
 803      18
 804 0024 894C2424 		movl	%ecx, 36(%rsp)
 805 0028 64488B34 		movq	%fs:40, %rsi
 805      25280000 
 805      00
 806 0031 48897424 		movq	%rsi, 72(%rsp)
 806      48
 807 0036 31F6     		xorl	%esi, %esi
 808              	.LVL55:
 509:fltk-1.3.4-1/src/Fl_Browser.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Browser.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Browser.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Browser.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 809              		.loc 3 512 0
 810 0038 4183F806 		cmpl	$6, %r8d
 506:fltk-1.3.4-1/src/Fl_Browser.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 811              		.loc 3 506 0
 812 003c 44894424 		movl	%r8d, 12(%rsp)
 812      0C
 813 0041 44894C24 		movl	%r9d, 40(%rsp)
 813      28
 508:fltk-1.3.4-1/src/Fl_Browser.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 814              		.loc 3 508 0
 815 0046 48894424 		movq	%rax, 64(%rsp)
 815      40
 816              		.loc 3 512 0
 817 004b 0F8EE701 		jle	.L68
 817      0000
 818              	.LBB280:
 513:fltk-1.3.4-1/src/Fl_Browser.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Browser.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Browser.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Browser.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Browser.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_Browser.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Browser.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Browser.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Browser.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Browser.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Browser.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Browser.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Browser.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Browser.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Browser.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Browser.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Browser.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_Browser.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Browser.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_Browser.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Browser.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_Browser.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_Browser.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Browser.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Browser.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Browser.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Browser.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_Browser.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_Browser.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Browser.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/Fl_Browser.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_Browser.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Browser.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Browser.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_Browser.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Browser.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Browser.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Browser.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Browser.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Browser.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Browser.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Browser.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Browser.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Browser.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Browser.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Browser.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Browser.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Browser.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Browser.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Browser.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_Browser.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Browser.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 819              		.loc 3 566 0
 820 0051 4489C8   		movl	%r9d, %eax
 821 0054 4189D6   		movl	%edx, %r14d
 567:fltk-1.3.4-1/src/Fl_Browser.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_Browser.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 822              		.loc 3 568 0
 823 0057 41BD0100 		movl	$1, %r13d
 823      0000
 566:fltk-1.3.4-1/src/Fl_Browser.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 824              		.loc 3 566 0
 825 005d C1E81F   		shrl	$31, %eax
 826 0060 4401C8   		addl	%r9d, %eax
 827 0063 D1F8     		sarl	%eax
 828 0065 01C8     		addl	%ecx, %eax
 829 0067 89442430 		movl	%eax, 48(%rsp)
 830 006b 83C001   		addl	$1, %eax
 831 006e 89442434 		movl	%eax, 52(%rsp)
 832              	.LBB281:
 833              	.LBB282:
 834              	.LBB283:
 835              	.LBB284:
 836              	.LBB285:
 837              		.file 6 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 101:fltk-1.3.4-1/FL/Fl_Image.H ****   void draw_empty(int X, int Y);
 102:fltk-1.3.4-1/FL/Fl_Image.H **** 
 103:fltk-1.3.4-1/FL/Fl_Image.H ****   static void labeltype(const Fl_Label *lo, int lx, int ly, int lw, int lh, Fl_Align la);
 104:fltk-1.3.4-1/FL/Fl_Image.H ****   static void measure(const Fl_Label *lo, int &lw, int &lh);
 105:fltk-1.3.4-1/FL/Fl_Image.H **** 
 106:fltk-1.3.4-1/FL/Fl_Image.H **** public:
 107:fltk-1.3.4-1/FL/Fl_Image.H **** 
 108:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
 109:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image width in pixels.
 110:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 111:fltk-1.3.4-1/FL/Fl_Image.H ****   int w() const {return w_;}
 112:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 113:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image height in pixels.
 114:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 115:fltk-1.3.4-1/FL/Fl_Image.H ****   int h() const {return h_;}
 116:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 117:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image depth.
 118:fltk-1.3.4-1/FL/Fl_Image.H ****    The return value will be 0 for bitmaps, 1 for
 119:fltk-1.3.4-1/FL/Fl_Image.H ****    pixmaps, and 1 to 4 for color images.</P>
 120:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 121:fltk-1.3.4-1/FL/Fl_Image.H ****   int d() const {return d_;}
 122:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 123:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current line data size in bytes.
 124:fltk-1.3.4-1/FL/Fl_Image.H ****    \see ld(int)
 125:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 126:fltk-1.3.4-1/FL/Fl_Image.H ****   int ld() const {return ld_;}
 127:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 128:fltk-1.3.4-1/FL/Fl_Image.H ****    The count() method returns the number of data values
 129:fltk-1.3.4-1/FL/Fl_Image.H ****    associated with the image. The value will be 0 for images with
 130:fltk-1.3.4-1/FL/Fl_Image.H ****    no associated data, 1 for bitmap and color images, and greater
 131:fltk-1.3.4-1/FL/Fl_Image.H ****    than 2 for pixmap images.
 132:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 133:fltk-1.3.4-1/FL/Fl_Image.H ****   int count() const {return count_;}
 134:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 135:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns a pointer to the current image data array.
 136:fltk-1.3.4-1/FL/Fl_Image.H ****    Use the count() method to find the size of the data array.
 137:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 138:fltk-1.3.4-1/FL/Fl_Image.H ****   const char * const *data() const {return data_;}
 139:fltk-1.3.4-1/FL/Fl_Image.H ****   int fail();
 140:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image(int W, int H, int D);
 141:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual ~Fl_Image();
 142:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual Fl_Image *copy(int W, int H);
 143:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 144:fltk-1.3.4-1/FL/Fl_Image.H ****    The copy() method creates a copy of the specified
 145:fltk-1.3.4-1/FL/Fl_Image.H ****    image. If the width and height are provided, the image is
 146:fltk-1.3.4-1/FL/Fl_Image.H ****    resized to the specified size. The image should be deleted (or in
 147:fltk-1.3.4-1/FL/Fl_Image.H ****    the case of Fl_Shared_Image, released) when you are done
 148:fltk-1.3.4-1/FL/Fl_Image.H ****    with it.
 149:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 150:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image *copy() { return copy(w(), h()); }
 151:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void color_average(Fl_Color c, float i);
 152:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 153:fltk-1.3.4-1/FL/Fl_Image.H ****    The inactive() method calls
 154:fltk-1.3.4-1/FL/Fl_Image.H ****    color_average(FL_BACKGROUND_COLOR, 0.33f) to produce
 155:fltk-1.3.4-1/FL/Fl_Image.H ****    an image that appears grayed out.
 156:fltk-1.3.4-1/FL/Fl_Image.H **** 
 157:fltk-1.3.4-1/FL/Fl_Image.H ****    An internal copy is made of the original image before
 158:fltk-1.3.4-1/FL/Fl_Image.H ****    changes are applied, to avoid modifying the original image.
 159:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 160:fltk-1.3.4-1/FL/Fl_Image.H ****   void inactive() { color_average(FL_GRAY, .33f); }
 161:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void desaturate();
 162:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void label(Fl_Widget*w);
 163:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void label(Fl_Menu_Item*m);
 164:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 165:fltk-1.3.4-1/FL/Fl_Image.H ****    Draws the image with a bounding box.
 166:fltk-1.3.4-1/FL/Fl_Image.H ****    Arguments <tt>X,Y,W,H</tt> specify
 167:fltk-1.3.4-1/FL/Fl_Image.H ****    a bounding box for the image, with the origin        
 168:fltk-1.3.4-1/FL/Fl_Image.H ****    (upper-left corner) of the image offset by the \c cx
 169:fltk-1.3.4-1/FL/Fl_Image.H ****    and \c cy arguments.
 170:fltk-1.3.4-1/FL/Fl_Image.H ****    
 171:fltk-1.3.4-1/FL/Fl_Image.H ****    In other words:  <tt>fl_push_clip(X,Y,W,H)</tt> is applied,
 172:fltk-1.3.4-1/FL/Fl_Image.H ****    the image is drawn with its upper-left corner at <tt>X-cx,Y-cy</tt> and its own width and height
 173:fltk-1.3.4-1/FL/Fl_Image.H ****    <tt>fl_pop_clip</tt><tt>()</tt> is applied.
 174:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 175:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void draw(int X, int Y, int W, int H, int cx=0, int cy=0); // platform dependent
 176:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 177:fltk-1.3.4-1/FL/Fl_Image.H ****    Draws the image.
 178:fltk-1.3.4-1/FL/Fl_Image.H ****    This form specifies the upper-lefthand corner of the image.
 179:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 180:fltk-1.3.4-1/FL/Fl_Image.H ****   void draw(int X, int Y) {draw(X, Y, w(), h(), 0, 0);} // platform dependent
 838              		.loc 6 180 0
 839 0072 8D4101   		leal	1(%rcx), %eax
 840 0075 8944243C 		movl	%eax, 60(%rsp)
 841              	.LBE285:
 842              	.LBE284:
 843              	.LBE283:
 844              	.LBE282:
 845              	.LBE281:
 569:fltk-1.3.4-1/src/Fl_Browser.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Browser.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_Browser.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Browser.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Browser.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 846              		.loc 3 573 0
 847 0079 428D4409 		leal	-1(%rcx,%r9), %eax
 847      FF
 848 007e 89442438 		movl	%eax, 56(%rsp)
 849              	.LVL56:
 850              		.p2align 4,,10
 851 0082 660F1F44 		.p2align 3
 851      0000
 852              	.L102:
 515:fltk-1.3.4-1/src/Fl_Browser.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 853              		.loc 3 515 0
 854 0088 458B0F   		movl	(%r15), %r9d
 855 008b 4585C9   		testl	%r9d, %r9d
 856 008e 0F842C05 		je	.L106
 856      0000
 857              	.LVL57:
 858              	.LBB291:
 859              	.LBB292:
 860              		.loc 4 220 0
 861 0094 0FBEB399 		movsbl	665(%rbx), %esi
 861      020000
 862              	.LVL58:
 863 009b 488B7C24 		movq	64(%rsp), %rdi
 863      40
 864 00a0 E8000000 		call	strchr
 864      00
 865              	.LVL59:
 866              	.LBE292:
 867              	.LBE291:
 517:fltk-1.3.4-1/src/Fl_Browser.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 868              		.loc 3 517 0
 869 00a5 4885C0   		testq	%rax, %rax
 870              	.LBB294:
 871              	.LBB293:
 872              		.loc 4 220 0
 873 00a8 4889C5   		movq	%rax, %rbp
 874              	.LVL60:
 875              	.LBE293:
 876              	.LBE294:
 517:fltk-1.3.4-1/src/Fl_Browser.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 877              		.loc 3 517 0
 878 00ab 0F849F04 		je	.L107
 878      0000
 879              	.LVL61:
 517:fltk-1.3.4-1/src/Fl_Browser.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 880              		.loc 3 517 0 is_stmt 0 discriminator 1
 881 00b1 C60000   		movb	$0, (%rax)
 882 00b4 4983C704 		addq	$4, %r15
 883              	.LVL62:
 884 00b8 458B67FC 		movl	-4(%r15), %r12d
 885              	.LVL63:
 886              	.L71:
 887              	.LBB295:
 520:fltk-1.3.4-1/src/Fl_Browser.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 888              		.loc 3 520 0 is_stmt 1
 889 00bc 4584ED   		testb	%r13b, %r13b
 890 00bf 7443     		je	.L72
 891              	.LVL64:
 892              	.LBB290:
 522:fltk-1.3.4-1/src/Fl_Browser.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 893              		.loc 3 522 0
 894 00c1 4C8B6C24 		movq	24(%rsp), %r13
 894      18
 895 00c6 498B7D18 		movq	24(%r13), %rdi
 896 00ca 4885FF   		testq	%rdi, %rdi
 897 00cd 7435     		je	.L72
 898              	.LVL65:
 899              	.LBB288:
 900              	.LBB287:
 901              	.LBB286:
 902              		.loc 6 180 0
 903 00cf 488B07   		movq	(%rdi), %rax
 904 00d2 4883EC08 		subq	$8, %rsp
 905              		.cfi_def_cfa_offset 152
 906 00d6 8B4F08   		movl	8(%rdi), %ecx
 907 00d9 418D7602 		leal	2(%r14), %esi
 908              	.LVL66:
 909 00dd 6A00     		pushq	$0
 910              		.cfi_def_cfa_offset 160
 911 00df 4531C9   		xorl	%r9d, %r9d
 912 00e2 448B470C 		movl	12(%rdi), %r8d
 913 00e6 8B54244C 		movl	76(%rsp), %edx
 914 00ea FF5038   		call	*56(%rax)
 915              	.LVL67:
 916 00ed 498B4518 		movq	24(%r13), %rax
 917              	.LBE286:
 918              	.LBE287:
 524:fltk-1.3.4-1/src/Fl_Browser.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 919              		.loc 3 524 0
 920 00f1 8B4008   		movl	8(%rax), %eax
 921 00f4 83C002   		addl	$2, %eax
 922              	.LVL68:
 525:fltk-1.3.4-1/src/Fl_Browser.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 923              		.loc 3 525 0
 924 00f7 2944241C 		subl	%eax, 28(%rsp)
 925              	.LVL69:
 926              	.LBE288:
 927 00fb 5F       		popq	%rdi
 928              		.cfi_def_cfa_offset 152
 929 00fc 4158     		popq	%r8
 930              		.cfi_def_cfa_offset 144
 931              	.LBB289:
 932 00fe 4101C6   		addl	%eax, %r14d
 933              	.LVL70:
 934 0101 4129C4   		subl	%eax, %r12d
 935              	.LVL71:
 936              	.L72:
 937 0104 8B83C000 		movl	192(%rbx), %eax
 937      0000
 938 010a 418D7603 		leal	3(%r14), %esi
 939 010e 488B5424 		movq	64(%rsp), %rdx
 939      40
 940 0113 0FB68B98 		movzbl	664(%rbx), %ecx
 940      020000
 941 011a 89742410 		movl	%esi, 16(%rsp)
 942 011e 448B8BBC 		movl	188(%rbx), %r9d
 942      000000
 943              	.LBE289:
 944              	.LBE290:
 945              	.LBE295:
 946              	.LBB296:
 947              	.LBB297:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 948              		.loc 5 223 0
 949 0125 438D7434 		leal	-3(%r12,%r14), %esi
 949      FD
 950 012a 89442408 		movl	%eax, 8(%rsp)
 951              	.LVL72:
 952 012e 448BABC4 		movl	196(%rbx), %r13d
 952      000000
 953              	.LVL73:
 954 0135 0FB602   		movzbl	(%rdx), %eax
 955              	.LBE297:
 956              	.LBE296:
 531:fltk-1.3.4-1/src/Fl_Browser.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 957              		.loc 3 531 0
 958 0138 C7442414 		movl	$4, 20(%rsp)
 958      04000000 
 959              	.LBB300:
 960              	.LBB298:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 961              		.loc 5 223 0
 962 0140 89742420 		movl	%esi, 32(%rsp)
 963              	.LVL74:
 964              		.p2align 4,,10
 965 0144 0F1F4000 		.p2align 3
 966              	.L73:
 967              	.LBE298:
 968              	.LBE300:
 536:fltk-1.3.4-1/src/Fl_Browser.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 969              		.loc 3 536 0
 970 0148 38C8     		cmpb	%cl, %al
 971 014a 7544     		jne	.L97
 536:fltk-1.3.4-1/src/Fl_Browser.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 972              		.loc 3 536 0 is_stmt 0 discriminator 1
 973 014c 488D7201 		leaq	1(%rdx), %rsi
 974 0150 48897424 		movq	%rsi, 64(%rsp)
 974      40
 975 0155 0FB64A01 		movzbl	1(%rdx), %ecx
 976              	.LVL75:
 977 0159 38C1     		cmpb	%al, %cl
 978 015b 7433     		je	.L97
 979 015d 84C9     		testb	%cl, %cl
 980 015f 742F     		je	.L97
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 981              		.loc 3 537 0 is_stmt 1
 982 0161 488D7A02 		leaq	2(%rdx), %rdi
 983 0165 48897C24 		movq	%rdi, 64(%rsp)
 983      40
 984 016a 0FB64A01 		movzbl	1(%rdx), %ecx
 985 016e 83E92D   		subl	$45, %ecx
 986 0171 80F948   		cmpb	$72, %cl
 987 0174 0F877603 		ja	.L103
 987      0000
 988 017a 0FB6C9   		movzbl	%cl, %ecx
 989 017d FF24CD00 		jmp	*.L104(,%rcx,8)
 989      000000
 990              		.section	.rodata._ZNK10Fl_Browser9item_drawEPviiii,"a",@progbits
 991              		.align 8
 992              		.align 4
 993              	.L104:
 994 0000 00000000 		.quad	.L94
 994      00000000 
 995 0008 00000000 		.quad	.L97
 995      00000000 
 996 0010 00000000 		.quad	.L103
 996      00000000 
 997 0018 00000000 		.quad	.L103
 997      00000000 
 998 0020 00000000 		.quad	.L103
 998      00000000 
 999 0028 00000000 		.quad	.L103
 999      00000000 
 1000 0030 00000000 		.quad	.L103
 1000      00000000 
 1001 0038 00000000 		.quad	.L103
 1001      00000000 
 1002 0040 00000000 		.quad	.L103
 1002      00000000 
 1003 0048 00000000 		.quad	.L103
 1003      00000000 
 1004 0050 00000000 		.quad	.L103
 1004      00000000 
 1005 0058 00000000 		.quad	.L103
 1005      00000000 
 1006 0060 00000000 		.quad	.L103
 1006      00000000 
 1007 0068 00000000 		.quad	.L103
 1007      00000000 
 1008 0070 00000000 		.quad	.L103
 1008      00000000 
 1009 0078 00000000 		.quad	.L103
 1009      00000000 
 1010 0080 00000000 		.quad	.L103
 1010      00000000 
 1011 0088 00000000 		.quad	.L103
 1011      00000000 
 1012 0090 00000000 		.quad	.L103
 1012      00000000 
 1013 0098 00000000 		.quad	.L96
 1013      00000000 
 1014 00a0 00000000 		.quad	.L103
 1014      00000000 
 1015 00a8 00000000 		.quad	.L86
 1015      00000000 
 1016 00b0 00000000 		.quad	.L90
 1016      00000000 
 1017 00b8 00000000 		.quad	.L103
 1017      00000000 
 1018 00c0 00000000 		.quad	.L103
 1018      00000000 
 1019 00c8 00000000 		.quad	.L91
 1019      00000000 
 1020 00d0 00000000 		.quad	.L103
 1020      00000000 
 1021 00d8 00000000 		.quad	.L103
 1021      00000000 
 1022 00e0 00000000 		.quad	.L103
 1022      00000000 
 1023 00e8 00000000 		.quad	.L103
 1023      00000000 
 1024 00f0 00000000 		.quad	.L103
 1024      00000000 
 1025 00f8 00000000 		.quad	.L77
 1025      00000000 
 1026 0100 00000000 		.quad	.L79
 1026      00000000 
 1027 0108 00000000 		.quad	.L92
 1027      00000000 
 1028 0110 00000000 		.quad	.L103
 1028      00000000 
 1029 0118 00000000 		.quad	.L103
 1029      00000000 
 1030 0120 00000000 		.quad	.L103
 1030      00000000 
 1031 0128 00000000 		.quad	.L103
 1031      00000000 
 1032 0130 00000000 		.quad	.L93
 1032      00000000 
 1033 0138 00000000 		.quad	.L103
 1033      00000000 
 1034 0140 00000000 		.quad	.L103
 1034      00000000 
 1035 0148 00000000 		.quad	.L103
 1035      00000000 
 1036 0150 00000000 		.quad	.L103
 1036      00000000 
 1037 0158 00000000 		.quad	.L103
 1037      00000000 
 1038 0160 00000000 		.quad	.L103
 1038      00000000 
 1039 0168 00000000 		.quad	.L103
 1039      00000000 
 1040 0170 00000000 		.quad	.L103
 1040      00000000 
 1041 0178 00000000 		.quad	.L103
 1041      00000000 
 1042 0180 00000000 		.quad	.L103
 1042      00000000 
 1043 0188 00000000 		.quad	.L103
 1043      00000000 
 1044 0190 00000000 		.quad	.L95
 1044      00000000 
 1045 0198 00000000 		.quad	.L103
 1045      00000000 
 1046 01a0 00000000 		.quad	.L103
 1046      00000000 
 1047 01a8 00000000 		.quad	.L81
 1047      00000000 
 1048 01b0 00000000 		.quad	.L84
 1048      00000000 
 1049 01b8 00000000 		.quad	.L103
 1049      00000000 
 1050 01c0 00000000 		.quad	.L103
 1050      00000000 
 1051 01c8 00000000 		.quad	.L83
 1051      00000000 
 1052 01d0 00000000 		.quad	.L103
 1052      00000000 
 1053 01d8 00000000 		.quad	.L103
 1053      00000000 
 1054 01e0 00000000 		.quad	.L82
 1054      00000000 
 1055 01e8 00000000 		.quad	.L103
 1055      00000000 
 1056 01f0 00000000 		.quad	.L103
 1056      00000000 
 1057 01f8 00000000 		.quad	.L77
 1057      00000000 
 1058 0200 00000000 		.quad	.L79
 1058      00000000 
 1059 0208 00000000 		.quad	.L103
 1059      00000000 
 1060 0210 00000000 		.quad	.L103
 1060      00000000 
 1061 0218 00000000 		.quad	.L103
 1061      00000000 
 1062 0220 00000000 		.quad	.L103
 1062      00000000 
 1063 0228 00000000 		.quad	.L85
 1063      00000000 
 1064 0230 00000000 		.quad	.L80
 1064      00000000 
 1065 0238 00000000 		.quad	.L83
 1065      00000000 
 1066 0240 00000000 		.quad	.L95
 1066      00000000 
 1067              		.section	.text._ZNK10Fl_Browser9item_drawEPviiii
 1068              		.p2align 4,,10
 1069 0184 0F1F4000 		.p2align 3
 1070              	.L96:
 574:fltk-1.3.4-1/src/Fl_Browser.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Browser.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Browser.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_Browser.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Browser.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 1071              		.loc 3 578 0
 1072 0188 48897424 		movq	%rsi, 64(%rsp)
 1072      40
 1073              	.LVL76:
 1074 018d 0F1F00   		.p2align 4,,10
 1075              		.p2align 3
 1076              	.L97:
 1077              	.LBB301:
 1078              	.LBB302:
 1079              		.loc 5 509 0
 1080 0190 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1080      000000
 1081 0197 8B542408 		movl	8(%rsp), %edx
 1082 019b 4489CE   		movl	%r9d, %esi
 1083 019e 488B07   		movq	(%rdi), %rax
 1084 01a1 FF90B001 		call	*432(%rax)
 1084      0000
 1085              	.LVL77:
 1086              	.LBE302:
 1087              	.LBE301:
 579:fltk-1.3.4-1/src/Fl_Browser.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_Browser.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Browser.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_Browser.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_Browser.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 1088              		.loc 3 583 0
 1089 01a7 488B4424 		movq	24(%rsp), %rax
 1089      18
 1090 01ac F6402201 		testb	$1, 34(%rax)
 1091 01b0 0F855A03 		jne	.L128
 1091      0000
 1092              	.L98:
 584:fltk-1.3.4-1/src/Fl_Browser.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Browser.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 1093              		.loc 3 585 0
 1094 01b6 4889DF   		movq	%rbx, %rdi
 1095 01b9 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 1095      00
 1096              	.LVL78:
 1097 01be 85C0     		testl	%eax, %eax
 1098 01c0 0F843A03 		je	.L129
 1098      0000
 1099              	.L99:
 1100              	.LVL79:
 1101              	.LBB303:
 1102              	.LBB304:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1103              		.loc 5 52 0
 1104 01c6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1104      000000
 1105 01cd 4489EE   		movl	%r13d, %esi
 1106 01d0 488B07   		movq	(%rdi), %rax
 1107 01d3 FF908800 		call	*136(%rax)
 1107      0000
 1108              	.LVL80:
 1109              	.LBE304:
 1110              	.LBE303:
 586:fltk-1.3.4-1/src/Fl_Browser.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_Browser.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 1111              		.loc 3 587 0
 1112 01d9 4885ED   		testq	%rbp, %rbp
 1113 01dc 418D4C24 		leal	-6(%r12), %ecx
 1113      FA
 1114 01e1 0F844103 		je	.L100
 1114      0000
 1115              		.loc 3 587 0 is_stmt 0 discriminator 1
 1116 01e7 6A00     		pushq	$0
 1117              		.cfi_def_cfa_offset 152
 1118 01e9 6A00     		pushq	$0
 1119              		.cfi_def_cfa_offset 160
 588:fltk-1.3.4-1/src/Fl_Browser.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_Browser.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/Fl_Browser.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_Browser.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Browser.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1120              		.loc 3 592 0 is_stmt 1 discriminator 1
 1121 01eb 4883C501 		addq	$1, %rbp
 1122              	.LVL81:
 587:fltk-1.3.4-1/src/Fl_Browser.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1123              		.loc 3 587 0 discriminator 1
 1124 01ef 448B4C24 		movl	36(%rsp), %r9d
 1124      24
 1125 01f4 448B4424 		movl	56(%rsp), %r8d
 1125      38
 590:fltk-1.3.4-1/src/Fl_Browser.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 1126              		.loc 3 590 0 discriminator 1
 1127 01f9 4501E6   		addl	%r12d, %r14d
 1128              	.LVL82:
 587:fltk-1.3.4-1/src/Fl_Browser.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1129              		.loc 3 587 0 discriminator 1
 1130 01fc 8B542434 		movl	52(%rsp), %edx
 1131 0200 8B742420 		movl	32(%rsp), %esi
 1132 0204 4531ED   		xorl	%r13d, %r13d
 1133              	.LVL83:
 1134 0207 488B7C24 		movq	80(%rsp), %rdi
 1134      50
 1135 020c 4183C940 		orl	$64, %r9d
 1136 0210 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1136      00
 1137              	.LVL84:
 1138 0215 0FB68399 		movzbl	665(%rbx), %eax
 1138      020000
 1139              	.LVL85:
 591:fltk-1.3.4-1/src/Fl_Browser.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1140              		.loc 3 591 0 discriminator 1
 1141 021c 44296424 		subl	%r12d, 28(%rsp)
 1141      1C
 1142              	.LVL86:
 589:fltk-1.3.4-1/src/Fl_Browser.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1143              		.loc 3 589 0 discriminator 1
 1144 0221 8845FF   		movb	%al, -1(%rbp)
 591:fltk-1.3.4-1/src/Fl_Browser.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1145              		.loc 3 591 0 discriminator 1
 1146 0224 8B44241C 		movl	28(%rsp), %eax
 1147              	.LVL87:
 1148              		.loc 3 592 0 discriminator 1
 1149 0228 48896C24 		movq	%rbp, 80(%rsp)
 1149      50
 1150              	.LBE280:
 512:fltk-1.3.4-1/src/Fl_Browser.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 1151              		.loc 3 512 0 discriminator 1
 1152 022d 59       		popq	%rcx
 1153              		.cfi_def_cfa_offset 152
 1154 022e 5E       		popq	%rsi
 1155              		.cfi_def_cfa_offset 144
 1156 022f 83F806   		cmpl	$6, %eax
 1157 0232 0F8F50FE 		jg	.L102
 1157      FFFF
 1158              	.LVL88:
 1159              	.L68:
 593:fltk-1.3.4-1/src/Fl_Browser.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_Browser.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1160              		.loc 3 594 0
 1161 0238 488B4424 		movq	72(%rsp), %rax
 1161      48
 1162 023d 64483304 		xorq	%fs:40, %rax
 1162      25280000 
 1162      00
 1163 0246 0F858C03 		jne	.L130
 1163      0000
 1164 024c 4883C458 		addq	$88, %rsp
 1165              		.cfi_remember_state
 1166              		.cfi_def_cfa_offset 56
 1167 0250 5B       		popq	%rbx
 1168              		.cfi_def_cfa_offset 48
 1169              	.LVL89:
 1170 0251 5D       		popq	%rbp
 1171              		.cfi_def_cfa_offset 40
 1172 0252 415C     		popq	%r12
 1173              		.cfi_def_cfa_offset 32
 1174 0254 415D     		popq	%r13
 1175              		.cfi_def_cfa_offset 24
 1176 0256 415E     		popq	%r14
 1177              		.cfi_def_cfa_offset 16
 1178 0258 415F     		popq	%r15
 1179              		.cfi_def_cfa_offset 8
 1180              	.LVL90:
 1181 025a C3       		ret
 1182              	.LVL91:
 1183 025b 0F1F4400 		.p2align 4,,10
 1183      00
 1184              		.p2align 3
 1185              	.L80:
 1186              		.cfi_restore_state
 1187              	.LBB320:
 540:fltk-1.3.4-1/src/Fl_Browser.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1188              		.loc 3 540 0
 1189 0260 89C1     		movl	%eax, %ecx
 1190 0262 C7442408 		movl	$11, 8(%rsp)
 1190      0B000000 
 1191 026a 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1192              		.loc 3 537 0
 1193 026e 4889FA   		movq	%rdi, %rdx
 540:fltk-1.3.4-1/src/Fl_Browser.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1194              		.loc 3 540 0
 1195 0271 E9D2FEFF 		jmp	.L73
 1195      FF
 1196              	.LVL92:
 1197 0276 662E0F1F 		.p2align 4,,10
 1197      84000000 
 1197      0000
 1198              		.p2align 3
 1199              	.L85:
 545:fltk-1.3.4-1/src/Fl_Browser.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1200              		.loc 3 545 0
 1201 0280 89C1     		movl	%eax, %ecx
 1202 0282 C7442414 		movl	$8, 20(%rsp)
 1202      08000000 
 1203 028a 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1204              		.loc 3 537 0
 1205 028e 4889FA   		movq	%rdi, %rdx
 545:fltk-1.3.4-1/src/Fl_Browser.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1206              		.loc 3 545 0
 1207 0291 E9B2FEFF 		jmp	.L73
 1207      FF
 1208              	.LVL93:
 1209 0296 662E0F1F 		.p2align 4,,10
 1209      84000000 
 1209      0000
 1210              		.p2align 3
 1211              	.L82:
 542:fltk-1.3.4-1/src/Fl_Browser.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1212              		.loc 3 542 0
 1213 02a0 89C1     		movl	%eax, %ecx
 1214 02a2 4183C902 		orl	$2, %r9d
 1215              	.LVL94:
 1216 02a6 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1217              		.loc 3 537 0
 1218 02aa 4889FA   		movq	%rdi, %rdx
 542:fltk-1.3.4-1/src/Fl_Browser.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1219              		.loc 3 542 0
 1220 02ad E996FEFF 		jmp	.L73
 1220      FF
 1221              		.p2align 4,,10
 1222 02b2 660F1F44 		.p2align 3
 1222      0000
 1223              	.L83:
 1224              	.LVL95:
 543:fltk-1.3.4-1/src/Fl_Browser.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 1225              		.loc 3 543 0
 1226 02b8 89C1     		movl	%eax, %ecx
 1227 02ba 41B90400 		movl	$4, %r9d
 1227      0000
 1228 02c0 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1229              		.loc 3 537 0
 1230 02c4 4889FA   		movq	%rdi, %rdx
 543:fltk-1.3.4-1/src/Fl_Browser.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 1231              		.loc 3 543 0
 1232 02c7 E97CFEFF 		jmp	.L73
 1232      FF
 1233              	.LVL96:
 1234 02cc 0F1F4000 		.p2align 4,,10
 1235              		.p2align 3
 1236              	.L84:
 544:fltk-1.3.4-1/src/Fl_Browser.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1237              		.loc 3 544 0
 1238 02d0 89C1     		movl	%eax, %ecx
 1239 02d2 C7442414 		movl	$0, 20(%rsp)
 1239      00000000 
 1240 02da 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1241              		.loc 3 537 0
 1242 02de 4889FA   		movq	%rdi, %rdx
 544:fltk-1.3.4-1/src/Fl_Browser.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1243              		.loc 3 544 0
 1244 02e1 E962FEFF 		jmp	.L73
 1244      FF
 1245              	.LVL97:
 1246 02e6 662E0F1F 		.p2align 4,,10
 1246      84000000 
 1246      0000
 1247              		.p2align 3
 1248              	.L81:
 541:fltk-1.3.4-1/src/Fl_Browser.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 1249              		.loc 3 541 0
 1250 02f0 89C1     		movl	%eax, %ecx
 1251 02f2 4183C901 		orl	$1, %r9d
 1252              	.LVL98:
 1253 02f6 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1254              		.loc 3 537 0
 1255 02fa 4889FA   		movq	%rdi, %rdx
 541:fltk-1.3.4-1/src/Fl_Browser.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 1256              		.loc 3 541 0
 1257 02fd E946FEFF 		jmp	.L73
 1257      FF
 1258              		.p2align 4,,10
 1259 0302 660F1F44 		.p2align 3
 1259      0000
 1260              	.L95:
 1261              	.LBB305:
 1262              	.LBB306:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1263              		.loc 5 52 0
 1264 0308 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1264      000000
 1265 030f 44894C24 		movl	%r9d, 44(%rsp)
 1265      2C
 1266              	.LVL99:
 1267 0314 4489EE   		movl	%r13d, %esi
 1268 0317 488B07   		movq	(%rdi), %rax
 1269 031a FF908800 		call	*136(%rax)
 1269      0000
 1270              	.LVL100:
 1271              	.LBE306:
 1272              	.LBE305:
 1273              	.LBB307:
 1274              	.LBB299:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1275              		.loc 5 223 0
 1276 0320 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1276      000000
 1277 0327 8B542438 		movl	56(%rsp), %edx
 1278 032b 488B07   		movq	(%rdi), %rax
 1279              	.LVL101:
 1280              	.L126:
 1281 032e 4189D0   		movl	%edx, %r8d
 1282 0331 8B4C2420 		movl	32(%rsp), %ecx
 1283 0335 8B742410 		movl	16(%rsp), %esi
 1284 0339 FF5060   		call	*96(%rax)
 1285              	.LVL102:
 1286 033c 488B5424 		movq	64(%rsp), %rdx
 1286      40
 1287 0341 0FB68B98 		movzbl	664(%rbx), %ecx
 1287      020000
 1288 0348 448B4C24 		movl	44(%rsp), %r9d
 1288      2C
 1289 034d 0FB602   		movzbl	(%rdx), %eax
 1290 0350 E9F3FDFF 		jmp	.L73
 1290      FF
 1291              	.LVL103:
 1292              		.p2align 4,,10
 1293 0355 0F1F00   		.p2align 3
 1294              	.L93:
 1295              	.LBE299:
 1296              	.LBE307:
 562:fltk-1.3.4-1/src/Fl_Browser.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 1297              		.loc 3 562 0
 1298 0358 488D7424 		leaq	64(%rsp), %rsi
 1298      40
 1299 035d BA0A0000 		movl	$10, %edx
 1299      00
 1300 0362 44894C24 		movl	%r9d, 44(%rsp)
 1300      2C
 1301 0367 E8000000 		call	strtol
 1301      00
 1302              	.LVL104:
 1303 036c 488B5424 		movq	64(%rsp), %rdx
 1303      40
 1304 0371 89442408 		movl	%eax, 8(%rsp)
 1305              	.LVL105:
 1306 0375 0FB68B98 		movzbl	664(%rbx), %ecx
 1306      020000
 563:fltk-1.3.4-1/src/Fl_Browser.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1307              		.loc 3 563 0
 1308 037c 448B4C24 		movl	44(%rsp), %r9d
 1308      2C
 1309 0381 0FB602   		movzbl	(%rdx), %eax
 1310              	.LVL106:
 1311 0384 E9BFFDFF 		jmp	.L73
 1311      FF
 1312              	.LVL107:
 1313 0389 0F1F8000 		.p2align 4,,10
 1313      000000
 1314              		.p2align 3
 1315              	.L92:
 560:fltk-1.3.4-1/src/Fl_Browser.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 1316              		.loc 3 560 0
 1317 0390 89C1     		movl	%eax, %ecx
 559:fltk-1.3.4-1/src/Fl_Browser.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 1318              		.loc 3 559 0
 1319 0392 41BD0800 		movl	$8, %r13d
 1319      0000
 560:fltk-1.3.4-1/src/Fl_Browser.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 1320              		.loc 3 560 0
 1321 0398 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1322              		.loc 3 537 0
 1323 039c 4889FA   		movq	%rdi, %rdx
 560:fltk-1.3.4-1/src/Fl_Browser.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 1324              		.loc 3 560 0
 1325 039f E9A4FDFF 		jmp	.L73
 1325      FF
 1326              	.LVL108:
 1327              		.p2align 4,,10
 1328 03a4 0F1F4000 		.p2align 3
 1329              	.L79:
 539:fltk-1.3.4-1/src/Fl_Browser.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 1330              		.loc 3 539 0
 1331 03a8 89C1     		movl	%eax, %ecx
 1332 03aa C7442408 		movl	$18, 8(%rsp)
 1332      12000000 
 1333 03b2 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1334              		.loc 3 537 0
 1335 03b6 4889FA   		movq	%rdi, %rdx
 539:fltk-1.3.4-1/src/Fl_Browser.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 1336              		.loc 3 539 0
 1337 03b9 E98AFDFF 		jmp	.L73
 1337      FF
 1338              	.LVL109:
 1339 03be 6690     		.p2align 4,,10
 1340              		.p2align 3
 1341              	.L77:
 538:fltk-1.3.4-1/src/Fl_Browser.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1342              		.loc 3 538 0
 1343 03c0 89C1     		movl	%eax, %ecx
 1344 03c2 C7442408 		movl	$24, 8(%rsp)
 1344      18000000 
 1345 03ca 0FB64202 		movzbl	2(%rdx), %eax
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1346              		.loc 3 537 0
 1347 03ce 4889FA   		movq	%rdi, %rdx
 538:fltk-1.3.4-1/src/Fl_Browser.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1348              		.loc 3 538 0
 1349 03d1 E972FDFF 		jmp	.L73
 1349      FF
 1350              	.LVL110:
 1351 03d6 662E0F1F 		.p2align 4,,10
 1351      84000000 
 1351      0000
 1352              		.p2align 3
 1353              	.L91:
 556:fltk-1.3.4-1/src/Fl_Browser.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 1354              		.loc 3 556 0
 1355 03e0 488D7424 		leaq	64(%rsp), %rsi
 1355      40
 1356 03e5 BA0A0000 		movl	$10, %edx
 1356      00
 1357 03ea E8000000 		call	strtol
 1357      00
 1358              	.LVL111:
 1359 03ef 488B5424 		movq	64(%rsp), %rdx
 1359      40
 1360 03f4 4189C1   		movl	%eax, %r9d
 1361              	.LVL112:
 1362 03f7 0FB68B98 		movzbl	664(%rbx), %ecx
 1362      020000
 1363 03fe 0FB602   		movzbl	(%rdx), %eax
 1364              	.LVL113:
 557:fltk-1.3.4-1/src/Fl_Browser.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1365              		.loc 3 557 0
 1366 0401 E942FDFF 		jmp	.L73
 1366      FF
 1367              	.LVL114:
 1368 0406 662E0F1F 		.p2align 4,,10
 1368      84000000 
 1368      0000
 1369              		.p2align 3
 1370              	.L90:
 553:fltk-1.3.4-1/src/Fl_Browser.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 1371              		.loc 3 553 0
 1372 0410 488D7424 		leaq	64(%rsp), %rsi
 1372      40
 1373 0415 BA0A0000 		movl	$10, %edx
 1373      00
 1374 041a 44894C24 		movl	%r9d, 44(%rsp)
 1374      2C
 1375 041f E8000000 		call	strtol
 1375      00
 1376              	.LVL115:
 1377 0424 488B5424 		movq	64(%rsp), %rdx
 1377      40
 1378 0429 4189C5   		movl	%eax, %r13d
 1379              	.LVL116:
 1380 042c 0FB68B98 		movzbl	664(%rbx), %ecx
 1380      020000
 554:fltk-1.3.4-1/src/Fl_Browser.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 1381              		.loc 3 554 0
 1382 0433 448B4C24 		movl	44(%rsp), %r9d
 1382      2C
 1383 0438 0FB602   		movzbl	(%rdx), %eax
 1384              	.LVL117:
 1385 043b E908FDFF 		jmp	.L73
 1385      FF
 1386              	.LVL118:
 1387              		.p2align 4,,10
 1388              		.p2align 3
 1389              	.L86:
 547:fltk-1.3.4-1/src/Fl_Browser.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 1390              		.loc 3 547 0
 1391 0440 488B7424 		movq	24(%rsp), %rsi
 1391      18
 1392 0445 F6462201 		testb	$1, 34(%rsi)
 1393 0449 0F841101 		je	.L87
 1393      0000
 550:fltk-1.3.4-1/src/Fl_Browser.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1394              		.loc 3 550 0 discriminator 2
 1395 044f 0FB65202 		movzbl	2(%rdx), %edx
 1396 0453 89D6     		movl	%edx, %esi
 1397 0455 83EA30   		subl	$48, %edx
 1398 0458 83FA09   		cmpl	$9, %edx
 1399 045b 0F876B01 		ja	.L108
 1399      0000
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1400              		.loc 3 537 0
 1401 0461 4889FA   		movq	%rdi, %rdx
 1402              		.p2align 4,,10
 1403 0464 0F1F4000 		.p2align 3
 1404              	.L89:
 550:fltk-1.3.4-1/src/Fl_Browser.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1405              		.loc 3 550 0 discriminator 1
 1406 0468 4883C201 		addq	$1, %rdx
 1407 046c 48895424 		movq	%rdx, 64(%rsp)
 1407      40
 1408 0471 0FB60A   		movzbl	(%rdx), %ecx
 1409 0474 89CE     		movl	%ecx, %esi
 1410 0476 83E930   		subl	$48, %ecx
 1411 0479 83F909   		cmpl	$9, %ecx
 1412 047c 76EA     		jbe	.L89
 1413 047e 89C1     		movl	%eax, %ecx
 550:fltk-1.3.4-1/src/Fl_Browser.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1414              		.loc 3 550 0 is_stmt 0
 1415 0480 89F0     		movl	%esi, %eax
 1416 0482 E9C1FCFF 		jmp	.L73
 1416      FF
 1417 0487 660F1F84 		.p2align 4,,10
 1417      00000000 
 1417      00
 1418              		.p2align 3
 1419              	.L94:
 1420              	.LBB308:
 1421              	.LBB309:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1422              		.loc 5 52 0 is_stmt 1
 1423 0490 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1423      000000
 1424 0497 44894C24 		movl	%r9d, 44(%rsp)
 1424      2C
 1425              	.LVL119:
 1426 049c BE270000 		movl	$39, %esi
 1426      00
 1427 04a1 488B07   		movq	(%rdi), %rax
 1428 04a4 FF908800 		call	*136(%rax)
 1428      0000
 1429              	.LVL120:
 1430              	.LBE309:
 1431              	.LBE308:
 1432              	.LBB310:
 1433              	.LBB311:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1434              		.loc 5 223 0
 1435 04aa 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1435      000000
 1436 04b1 8B542430 		movl	48(%rsp), %edx
 1437 04b5 8B4C2420 		movl	32(%rsp), %ecx
 1438 04b9 8B742410 		movl	16(%rsp), %esi
 1439 04bd 488B07   		movq	(%rdi), %rax
 1440 04c0 4189D0   		movl	%edx, %r8d
 1441 04c3 FF5060   		call	*96(%rax)
 1442              	.LVL121:
 1443              	.LBE311:
 1444              	.LBE310:
 1445              	.LBB312:
 1446              	.LBB313:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1447              		.loc 5 52 0
 1448 04c6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1448      000000
 1449 04cd BE360000 		movl	$54, %esi
 1449      00
 1450 04d2 488B07   		movq	(%rdi), %rax
 1451 04d5 FF908800 		call	*136(%rax)
 1451      0000
 1452              	.LVL122:
 1453              	.LBE313:
 1454              	.LBE312:
 1455              	.LBB314:
 1456              	.LBB315:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1457              		.loc 5 223 0
 1458 04db 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1458      000000
 1459 04e2 8B542434 		movl	52(%rsp), %edx
 1460 04e6 488B07   		movq	(%rdi), %rax
 1461 04e9 E940FEFF 		jmp	.L126
 1461      FF
 1462              	.LVL123:
 1463 04ee 6690     		.p2align 4,,10
 1464              		.p2align 3
 1465              	.L103:
 1466              	.LBE315:
 1467              	.LBE314:
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1468              		.loc 3 537 0
 1469 04f0 89C1     		movl	%eax, %ecx
 1470 04f2 0FB64202 		movzbl	2(%rdx), %eax
 1471 04f6 4889FA   		movq	%rdi, %rdx
 1472 04f9 E94AFCFF 		jmp	.L73
 1472      FF
 1473              	.LVL124:
 1474 04fe 6690     		.p2align 4,,10
 1475              		.p2align 3
 1476              	.L129:
 585:fltk-1.3.4-1/src/Fl_Browser.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1477              		.loc 3 585 0 discriminator 1
 1478 0500 4489EF   		movl	%r13d, %edi
 1479 0503 E8000000 		call	_Z11fl_inactivej
 1479      00
 1480              	.LVL125:
 1481 0508 4189C5   		movl	%eax, %r13d
 1482              	.LVL126:
 1483 050b E9B6FCFF 		jmp	.L99
 1483      FF
 1484              	.LVL127:
 1485              		.p2align 4,,10
 1486              		.p2align 3
 1487              	.L128:
 584:fltk-1.3.4-1/src/Fl_Browser.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 1488              		.loc 3 584 0
 1489 0510 8B7368   		movl	104(%rbx), %esi
 1490 0513 4489EF   		movl	%r13d, %edi
 1491 0516 E8000000 		call	_Z11fl_contrastjj
 1491      00
 1492              	.LVL128:
 1493 051b 4189C5   		movl	%eax, %r13d
 1494              	.LVL129:
 1495 051e E993FCFF 		jmp	.L98
 1495      FF
 1496              	.LVL130:
 1497              		.p2align 4,,10
 1498 0523 0F1F4400 		.p2align 3
 1498      00
 1499              	.L100:
 587:fltk-1.3.4-1/src/Fl_Browser.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1500              		.loc 3 587 0
 1501 0528 6A00     		pushq	$0
 1502              		.cfi_def_cfa_offset 152
 1503 052a 6A00     		pushq	$0
 1504              		.cfi_def_cfa_offset 160
 1505 052c 448B4C24 		movl	36(%rsp), %r9d
 1505      24
 1506 0531 448B4424 		movl	56(%rsp), %r8d
 1506      38
 1507 0536 8B542434 		movl	52(%rsp), %edx
 1508 053a 8B742420 		movl	32(%rsp), %esi
 1509 053e 488B7C24 		movq	80(%rsp), %rdi
 1509      50
 1510 0543 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1510      00
 1511              	.LVL131:
 1512 0548 58       		popq	%rax
 1513              		.cfi_def_cfa_offset 152
 1514 0549 5A       		popq	%rdx
 1515              		.cfi_def_cfa_offset 144
 1516 054a E9E9FCFF 		jmp	.L68
 1516      FF
 1517              	.LVL132:
 1518 054f 90       		.p2align 4,,10
 1519              		.p2align 3
 1520              	.L107:
 1521 0550 448B6424 		movl	12(%rsp), %r12d
 1521      0C
 1522 0555 E962FBFF 		jmp	.L71
 1522      FF
 1523              	.LVL133:
 1524 055a 660F1F44 		.p2align 4,,10
 1524      0000
 1525              		.p2align 3
 1526              	.L87:
 548:fltk-1.3.4-1/src/Fl_Browser.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1527              		.loc 3 548 0
 1528 0560 488D7424 		leaq	64(%rsp), %rsi
 1528      40
 1529 0565 BA0A0000 		movl	$10, %edx
 1529      00
 1530 056a 44894C24 		movl	%r9d, 44(%rsp)
 1530      2C
 1531 056f E8000000 		call	strtol
 1531      00
 1532              	.LVL134:
 1533              	.LBB316:
 1534              	.LBB317:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1535              		.loc 5 52 0
 1536 0574 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1536      000000
 1537 057b 89C6     		movl	%eax, %esi
 1538 057d 488B17   		movq	(%rdi), %rdx
 1539 0580 FF928800 		call	*136(%rdx)
 1539      0000
 1540              	.LVL135:
 1541              	.LBE317:
 1542              	.LBE316:
 1543              	.LBB318:
 1544              	.LBB319:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1545              		.loc 5 206 0
 1546 0586 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1546      000000
 1547 058d 4489E1   		movl	%r12d, %ecx
 1548 0590 8B542424 		movl	36(%rsp), %edx
 1549 0594 448B4424 		movl	40(%rsp), %r8d
 1549      28
 1550 0599 4489F6   		movl	%r14d, %esi
 1551 059c 488B07   		movq	(%rdi), %rax
 1552 059f FF5020   		call	*32(%rax)
 1553              	.LVL136:
 1554 05a2 488B5424 		movq	64(%rsp), %rdx
 1554      40
 1555 05a7 0FB68B98 		movzbl	664(%rbx), %ecx
 1555      020000
 1556 05ae 448B4C24 		movl	44(%rsp), %r9d
 1556      2C
 1557 05b3 0FB602   		movzbl	(%rdx), %eax
 1558 05b6 E98DFBFF 		jmp	.L73
 1558      FF
 1559              	.LVL137:
 1560 05bb 0F1F4400 		.p2align 4,,10
 1560      00
 1561              		.p2align 3
 1562              	.L106:
 1563              	.LBE319:
 1564              	.LBE318:
 1565 05c0 448B6424 		movl	12(%rsp), %r12d
 1565      0C
 514:fltk-1.3.4-1/src/Fl_Browser.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1566              		.loc 3 514 0
 1567 05c5 31ED     		xorl	%ebp, %ebp
 1568 05c7 E9F0FAFF 		jmp	.L71
 1568      FF
 1569              	.LVL138:
 1570              	.L108:
 550:fltk-1.3.4-1/src/Fl_Browser.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1571              		.loc 3 550 0
 1572 05cc 89C1     		movl	%eax, %ecx
 537:fltk-1.3.4-1/src/Fl_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1573              		.loc 3 537 0
 1574 05ce 4889FA   		movq	%rdi, %rdx
 550:fltk-1.3.4-1/src/Fl_Browser.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1575              		.loc 3 550 0
 1576 05d1 89F0     		movl	%esi, %eax
 1577 05d3 E970FBFF 		jmp	.L73
 1577      FF
 1578              	.LVL139:
 1579              	.L130:
 1580              	.LBE320:
 1581              		.loc 3 594 0
 1582 05d8 E8000000 		call	__stack_chk_fail
 1582      00
 1583              	.LVL140:
 1584              		.cfi_endproc
 1585              	.LFE578:
 1587              		.section	.text.unlikely._ZNK10Fl_Browser9item_drawEPviiii
 1588              	.LCOLDE13:
 1589              		.section	.text._ZNK10Fl_Browser9item_drawEPviiii
 1590              	.LHOTE13:
 1591              		.section	.text.unlikely._ZN10Fl_Browser4hideEv,"axG",@progbits,_ZN10Fl_Browser4hideEv,comdat
 1592              		.align 2
 1593              	.LCOLDB14:
 1594              		.section	.text._ZN10Fl_Browser4hideEv,"axG",@progbits,_ZN10Fl_Browser4hideEv,comdat
 1595              	.LHOTB14:
 1596              		.align 2
 1597              		.p2align 4,,15
 1598              		.weak	_ZN10Fl_Browser4hideEv
 1600              	_ZN10Fl_Browser4hideEv:
 1601              	.LFB328:
 1602              		.file 7 "fltk-1.3.4-1/FL/Fl_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_Browser.H **** // "$Id: Fl_Browser.H 11453 2016-03-28 16:16:29Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_Browser.H **** // Browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_Browser.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Browser.H ****    Fl_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_Browser.H **** // Forms-compatible browser.  Probably useful for other
  23:fltk-1.3.4-1/FL/Fl_Browser.H **** // lists of textual data.  Notice that the line numbers
  24:fltk-1.3.4-1/FL/Fl_Browser.H **** // start from 1, and 0 means "no line".
  25:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  26:fltk-1.3.4-1/FL/Fl_Browser.H **** #ifndef Fl_Browser_H
  27:fltk-1.3.4-1/FL/Fl_Browser.H **** #define Fl_Browser_H
  28:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  29:fltk-1.3.4-1/FL/Fl_Browser.H **** #include "Fl_Browser_.H"
  30:fltk-1.3.4-1/FL/Fl_Browser.H **** #include "Fl_Image.H"
  31:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  32:fltk-1.3.4-1/FL/Fl_Browser.H **** struct FL_BLINE;
  33:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  34:fltk-1.3.4-1/FL/Fl_Browser.H **** /**
  35:fltk-1.3.4-1/FL/Fl_Browser.H ****   The Fl_Browser widget displays a scrolling list of text
  36:fltk-1.3.4-1/FL/Fl_Browser.H ****   lines, and manages all the storage for the text.  This is not a text
  37:fltk-1.3.4-1/FL/Fl_Browser.H ****   editor or spreadsheet!  But it is useful for showing a vertical list of
  38:fltk-1.3.4-1/FL/Fl_Browser.H ****   named objects to the user.
  39:fltk-1.3.4-1/FL/Fl_Browser.H ****   
  40:fltk-1.3.4-1/FL/Fl_Browser.H ****   Each line in the browser is identified by number. <I>The numbers
  41:fltk-1.3.4-1/FL/Fl_Browser.H ****   start at one</I> (this is so that zero can be reserved for "no line" in
  42:fltk-1.3.4-1/FL/Fl_Browser.H ****   the selective browsers). <I>Unless otherwise noted, the methods do not
  43:fltk-1.3.4-1/FL/Fl_Browser.H ****   check to see if the passed line number is in range and legal.  It must
  44:fltk-1.3.4-1/FL/Fl_Browser.H ****   always be greater than zero and &lt;= size().</I>
  45:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  46:fltk-1.3.4-1/FL/Fl_Browser.H ****   Each line contains a null-terminated string of text and a void *
  47:fltk-1.3.4-1/FL/Fl_Browser.H ****   data pointer.  The text string is displayed, the void *
  48:fltk-1.3.4-1/FL/Fl_Browser.H ****   pointer can be used by the callbacks to reference the object the text
  49:fltk-1.3.4-1/FL/Fl_Browser.H ****   describes.
  50:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  51:fltk-1.3.4-1/FL/Fl_Browser.H ****   The base class does nothing when the user clicks on it.  The
  52:fltk-1.3.4-1/FL/Fl_Browser.H ****   subclasses 
  53:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Select_Browser, 
  54:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Hold_Browser, and 
  55:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Multi_Browser react to user clicks to select lines in
  56:fltk-1.3.4-1/FL/Fl_Browser.H ****   the browser and do callbacks.
  57:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  58:fltk-1.3.4-1/FL/Fl_Browser.H ****   The base class
  59:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Browser_ provides the scrolling and selection mechanisms of
  60:fltk-1.3.4-1/FL/Fl_Browser.H ****   this and all the subclasses, but the dimensions and appearance of each
  61:fltk-1.3.4-1/FL/Fl_Browser.H ****   item are determined by the subclass. You can use Fl_Browser_
  62:fltk-1.3.4-1/FL/Fl_Browser.H ****   to display information other than text, or text that is dynamically
  63:fltk-1.3.4-1/FL/Fl_Browser.H ****   produced from your own data structures. If you find that loading the
  64:fltk-1.3.4-1/FL/Fl_Browser.H ****   browser is a lot of work or is inefficient, you may want to make a
  65:fltk-1.3.4-1/FL/Fl_Browser.H ****   subclass of Fl_Browser_.
  66:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  67:fltk-1.3.4-1/FL/Fl_Browser.H ****   Some common coding patterns used for working with Fl_Browser:
  68:fltk-1.3.4-1/FL/Fl_Browser.H ****   \code
  69:fltk-1.3.4-1/FL/Fl_Browser.H ****       // How to loop through all the items in the browser
  70:fltk-1.3.4-1/FL/Fl_Browser.H ****       for ( int t=1; t<=browser->size(); t++ ) {       // index 1 based..!
  71:fltk-1.3.4-1/FL/Fl_Browser.H **** 	  printf("item #%d, label='%s'\n", t, browser->text(t));
  72:fltk-1.3.4-1/FL/Fl_Browser.H ****       }
  73:fltk-1.3.4-1/FL/Fl_Browser.H ****   \endcode
  74:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  75:fltk-1.3.4-1/FL/Fl_Browser.H ****   Note: If you are <I>subclassing</I> Fl_Browser, it's more efficient
  76:fltk-1.3.4-1/FL/Fl_Browser.H ****   to use the protected methods item_first() and item_next(), since
  77:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Browser internally uses linked lists to manage the browser's items.
  78:fltk-1.3.4-1/FL/Fl_Browser.H ****   For more info, see find_item(int).
  79:fltk-1.3.4-1/FL/Fl_Browser.H **** */
  80:fltk-1.3.4-1/FL/Fl_Browser.H **** class FL_EXPORT Fl_Browser : public Fl_Browser_ {
  81:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  82:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *first;		// the array of lines
  83:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *last;
  84:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *cache;
  85:fltk-1.3.4-1/FL/Fl_Browser.H ****   int cacheline;		// line number of cache
  86:fltk-1.3.4-1/FL/Fl_Browser.H ****   int lines;                	// Number of lines
  87:fltk-1.3.4-1/FL/Fl_Browser.H ****   int full_height_;
  88:fltk-1.3.4-1/FL/Fl_Browser.H ****   const int* column_widths_;
  89:fltk-1.3.4-1/FL/Fl_Browser.H ****   char format_char_;		// alternative to @-sign
  90:fltk-1.3.4-1/FL/Fl_Browser.H ****   char column_char_;		// alternative to tab
  91:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  92:fltk-1.3.4-1/FL/Fl_Browser.H **** protected:
  93:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  94:fltk-1.3.4-1/FL/Fl_Browser.H ****   // required routines for Fl_Browser_ subclass:
  95:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_first() const ;
  96:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_next(void* item) const ;
  97:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_prev(void* item) const ;
  98:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_last()const ;
  99:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_selected(void* item) const ;
 100:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_select(void* item, int val);
 101:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_height(void* item) const ;
 102:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_width(void* item) const ;
 103:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_draw(void* item, int X, int Y, int W, int H) const ;
 104:fltk-1.3.4-1/FL/Fl_Browser.H ****   int full_height() const ;
 105:fltk-1.3.4-1/FL/Fl_Browser.H ****   int incr_height() const ;
 106:fltk-1.3.4-1/FL/Fl_Browser.H ****   const char *item_text(void *item) const;
 107:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Swap the items \p a and \p b.
 108:fltk-1.3.4-1/FL/Fl_Browser.H ****       You must call redraw() to make any changes visible.
 109:fltk-1.3.4-1/FL/Fl_Browser.H ****       \param[in] a,b the items to be swapped.
 110:fltk-1.3.4-1/FL/Fl_Browser.H ****       \see swap(int,int), item_swap()
 111:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 112:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_swap(void *a, void *b) { swap((FL_BLINE*)a, (FL_BLINE*)b); }
 113:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Return the item at specified \p line.
 114:fltk-1.3.4-1/FL/Fl_Browser.H ****       \param[in] line The line of the item to return. (1 based)
 115:fltk-1.3.4-1/FL/Fl_Browser.H ****       \returns The item, or NULL if line out of range.
 116:fltk-1.3.4-1/FL/Fl_Browser.H ****       \see item_at(), find_line(), lineno()
 117:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 118:fltk-1.3.4-1/FL/Fl_Browser.H ****   void *item_at(int line) const { return (void*)find_line(line); }
 119:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 120:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE* find_line(int line) const ;
 121:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE* _remove(int line) ;
 122:fltk-1.3.4-1/FL/Fl_Browser.H ****   void insert(int line, FL_BLINE* item);
 123:fltk-1.3.4-1/FL/Fl_Browser.H ****   int lineno(void *item) const ;
 124:fltk-1.3.4-1/FL/Fl_Browser.H ****   void swap(FL_BLINE *a, FL_BLINE *b);
 125:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 126:fltk-1.3.4-1/FL/Fl_Browser.H **** public:
 127:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 128:fltk-1.3.4-1/FL/Fl_Browser.H ****   void remove(int line);
 129:fltk-1.3.4-1/FL/Fl_Browser.H ****   void add(const char* newtext, void* d = 0);
 130:fltk-1.3.4-1/FL/Fl_Browser.H ****   void insert(int line, const char* newtext, void* d = 0);
 131:fltk-1.3.4-1/FL/Fl_Browser.H ****   void move(int to, int from);
 132:fltk-1.3.4-1/FL/Fl_Browser.H ****   int  load(const char* filename);
 133:fltk-1.3.4-1/FL/Fl_Browser.H ****   void swap(int a, int b);
 134:fltk-1.3.4-1/FL/Fl_Browser.H ****   void clear();
 135:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 136:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 137:fltk-1.3.4-1/FL/Fl_Browser.H ****     Returns how many lines are in the browser.
 138:fltk-1.3.4-1/FL/Fl_Browser.H ****     The last line number is equal to this.
 139:fltk-1.3.4-1/FL/Fl_Browser.H ****     Returns 0 if browser is empty.
 140:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 141:fltk-1.3.4-1/FL/Fl_Browser.H ****   int size() const { return lines; }
 142:fltk-1.3.4-1/FL/Fl_Browser.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 143:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 144:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 145:fltk-1.3.4-1/FL/Fl_Browser.H ****     Gets the default text size (in pixels) for the lines in the browser.
 146:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 147:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Fontsize textsize() const { return Fl_Browser_::textsize(); }
 148:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 149:fltk-1.3.4-1/FL/Fl_Browser.H ****   /*
 150:fltk-1.3.4-1/FL/Fl_Browser.H ****     Sets the default text size for the lines in the browser to newSize.
 151:fltk-1.3.4-1/FL/Fl_Browser.H ****     Defined and documented in Fl_Browser.cxx
 152:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 153:fltk-1.3.4-1/FL/Fl_Browser.H ****   void textsize(Fl_Fontsize newSize);
 154:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 155:fltk-1.3.4-1/FL/Fl_Browser.H ****   int topline() const ;
 156:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** For internal use only? */
 157:fltk-1.3.4-1/FL/Fl_Browser.H ****   enum Fl_Line_Position { TOP, BOTTOM, MIDDLE };
 158:fltk-1.3.4-1/FL/Fl_Browser.H ****   void lineposition(int line, Fl_Line_Position pos);
 159:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 160:fltk-1.3.4-1/FL/Fl_Browser.H ****     Scrolls the browser so the top item in the browser
 161:fltk-1.3.4-1/FL/Fl_Browser.H ****     is showing the specified \p line.
 162:fltk-1.3.4-1/FL/Fl_Browser.H ****     \param[in] line The line to be displayed at the top.
 163:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see topline(), middleline(), bottomline(), displayed(), lineposition()
 164:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 165:fltk-1.3.4-1/FL/Fl_Browser.H ****   void topline(int line) { lineposition(line, TOP); }
 166:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 167:fltk-1.3.4-1/FL/Fl_Browser.H ****     Scrolls the browser so the bottom item in the browser
 168:fltk-1.3.4-1/FL/Fl_Browser.H ****     is showing the specified \p line.
 169:fltk-1.3.4-1/FL/Fl_Browser.H ****     \param[in] line The line to be displayed at the bottom.
 170:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see topline(), middleline(), bottomline(), displayed(), lineposition()
 171:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 172:fltk-1.3.4-1/FL/Fl_Browser.H ****   void bottomline(int line) { lineposition(line, BOTTOM); }
 173:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 174:fltk-1.3.4-1/FL/Fl_Browser.H ****     Scrolls the browser so the middle item in the browser
 175:fltk-1.3.4-1/FL/Fl_Browser.H ****     is showing the specified \p line.
 176:fltk-1.3.4-1/FL/Fl_Browser.H ****     \param[in] line The line to be displayed in the middle.
 177:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see topline(), middleline(), bottomline(), displayed(), lineposition()
 178:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 179:fltk-1.3.4-1/FL/Fl_Browser.H ****   void middleline(int line) { lineposition(line, MIDDLE); }
 180:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 181:fltk-1.3.4-1/FL/Fl_Browser.H ****   int select(int line, int val=1);
 182:fltk-1.3.4-1/FL/Fl_Browser.H ****   int selected(int line) const ;
 183:fltk-1.3.4-1/FL/Fl_Browser.H ****   void show(int line);
 184:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Shows the entire Fl_Browser widget -- opposite of hide(). */
 185:fltk-1.3.4-1/FL/Fl_Browser.H ****   void show() { Fl_Widget::show(); }
 186:fltk-1.3.4-1/FL/Fl_Browser.H ****   void hide(int line);
 187:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Hides the entire Fl_Browser widget -- opposite of show(). */
 188:fltk-1.3.4-1/FL/Fl_Browser.H ****   void hide() { Fl_Widget::hide(); }
 1603              		.loc 7 188 0
 1604              		.cfi_startproc
 1605              	.LVL141:
 1606              		.loc 7 188 0
 1607 0000 E9000000 		jmp	_ZN9Fl_Widget4hideEv
 1607      00
 1608              	.LVL142:
 1609              		.cfi_endproc
 1610              	.LFE328:
 1612              		.section	.text.unlikely._ZN10Fl_Browser4hideEv,"axG",@progbits,_ZN10Fl_Browser4hideEv,comdat
 1613              	.LCOLDE14:
 1614              		.section	.text._ZN10Fl_Browser4hideEv,"axG",@progbits,_ZN10Fl_Browser4hideEv,comdat
 1615              	.LHOTE14:
 1616              		.section	.text.unlikely._ZN10Fl_Browser4showEv,"axG",@progbits,_ZN10Fl_Browser4showEv,comdat
 1617              		.align 2
 1618              	.LCOLDB15:
 1619              		.section	.text._ZN10Fl_Browser4showEv,"axG",@progbits,_ZN10Fl_Browser4showEv,comdat
 1620              	.LHOTB15:
 1621              		.align 2
 1622              		.p2align 4,,15
 1623              		.weak	_ZN10Fl_Browser4showEv
 1625              	_ZN10Fl_Browser4showEv:
 1626              	.LFB327:
 185:fltk-1.3.4-1/FL/Fl_Browser.H ****   void hide(int line);
 1627              		.loc 7 185 0
 1628              		.cfi_startproc
 1629              	.LVL143:
 185:fltk-1.3.4-1/FL/Fl_Browser.H ****   void hide(int line);
 1630              		.loc 7 185 0
 1631 0000 E9000000 		jmp	_ZN9Fl_Widget4showEv
 1631      00
 1632              	.LVL144:
 1633              		.cfi_endproc
 1634              	.LFE327:
 1636              		.section	.text.unlikely._ZN10Fl_Browser4showEv,"axG",@progbits,_ZN10Fl_Browser4showEv,comdat
 1637              	.LCOLDE15:
 1638              		.section	.text._ZN10Fl_Browser4showEv,"axG",@progbits,_ZN10Fl_Browser4showEv,comdat
 1639              	.LHOTE15:
 1640              		.section	.text.unlikely._ZNK10Fl_Browser11item_heightEPv,"ax",@progbits
 1641              		.align 2
 1642              	.LCOLDB16:
 1643              		.section	.text._ZNK10Fl_Browser11item_heightEPv,"ax",@progbits
 1644              	.LHOTB16:
 1645              		.align 2
 1646              		.p2align 4,,15
 1647              		.globl	_ZNK10Fl_Browser11item_heightEPv
 1649              	_ZNK10Fl_Browser11item_heightEPv:
 1650              	.LFB574:
 363:fltk-1.3.4-1/src/Fl_Browser.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1651              		.loc 3 363 0
 1652              		.cfi_startproc
 1653              	.LVL145:
 1654 0000 4157     		pushq	%r15
 1655              		.cfi_def_cfa_offset 16
 1656              		.cfi_offset 15, -16
 1657 0002 4156     		pushq	%r14
 1658              		.cfi_def_cfa_offset 24
 1659              		.cfi_offset 14, -24
 1660 0004 4155     		pushq	%r13
 1661              		.cfi_def_cfa_offset 32
 1662              		.cfi_offset 13, -32
 1663 0006 4154     		pushq	%r12
 1664              		.cfi_def_cfa_offset 40
 1665              		.cfi_offset 12, -40
 1666 0008 55       		pushq	%rbp
 1667              		.cfi_def_cfa_offset 48
 1668              		.cfi_offset 6, -48
 1669 0009 53       		pushq	%rbx
 1670              		.cfi_def_cfa_offset 56
 1671              		.cfi_offset 3, -56
 1672 000a 4883EC28 		subq	$40, %rsp
 1673              		.cfi_def_cfa_offset 96
 363:fltk-1.3.4-1/src/Fl_Browser.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1674              		.loc 3 363 0
 1675 000e 64488B04 		movq	%fs:40, %rax
 1675      25280000 
 1675      00
 1676 0017 48894424 		movq	%rax, 24(%rsp)
 1676      18
 1677 001c 31C0     		xorl	%eax, %eax
 1678              	.LVL146:
 365:fltk-1.3.4-1/src/Fl_Browser.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1679              		.loc 3 365 0
 1680 001e F6462202 		testb	$2, 34(%rsi)
 363:fltk-1.3.4-1/src/Fl_Browser.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1681              		.loc 3 363 0
 1682 0022 48897424 		movq	%rsi, 8(%rsp)
 1682      08
 365:fltk-1.3.4-1/src/Fl_Browser.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1683              		.loc 3 365 0
 1684 0027 0F85C300 		jne	.L134
 1684      0000
 1685              	.LBB354:
 1686              	.LBB355:
 1687              	.LBB356:
 369:fltk-1.3.4-1/src/Fl_Browser.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 1688              		.loc 3 369 0
 1689 002d 0FB67623 		movzbl	35(%rsi), %esi
 1690              	.LVL147:
 1691 0031 4989FE   		movq	%rdi, %r14
 1692              	.LVL148:
 1693 0034 4084F6   		testb	%sil, %sil
 1694 0037 745E     		je	.L191
 1695              	.LBB357:
 1696              	.LBB358:
 377:fltk-1.3.4-1/src/Fl_Browser.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1697              		.loc 3 377 0
 1698 0039 488B4424 		movq	8(%rsp), %rax
 1698      08
 1699 003e 4D8BA690 		movq	656(%r14), %r12
 1699      020000
 1700              	.LVL149:
 1701 0045 BD020000 		movl	$2, %ebp
 1701      00
 1702 004a 488D5023 		leaq	35(%rax), %rdx
 1703 004e 48895424 		movq	%rdx, 16(%rsp)
 1703      10
 1704              	.LVL150:
 1705              		.p2align 4,,10
 1706 0053 0F1F4400 		.p2align 3
 1706      00
 1707              	.L137:
 1708 0058 410FB686 		movzbl	664(%r14), %eax
 1708      98020000 
 1709 0060 458BAEBC 		movl	188(%r14), %r13d
 1709      000000
 1710              	.LVL151:
 1711 0067 458BBEC0 		movl	192(%r14), %r15d
 1711      000000
 1712              	.LVL152:
 1713 006e 6690     		.p2align 4,,10
 1714              		.p2align 3
 1715              	.L139:
 1716              	.LBB359:
 380:fltk-1.3.4-1/src/Fl_Browser.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1717              		.loc 3 380 0
 1718 0070 4038C6   		cmpb	%al, %sil
 1719 0073 0F859F00 		jne	.L167
 1719      0000
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 1720              		.loc 3 382 0
 1721 0079 488D5A02 		leaq	2(%rdx), %rbx
 1722 007d 48895C24 		movq	%rbx, 16(%rsp)
 1722      10
 1723 0082 807A0174 		cmpb	$116, 1(%rdx)
 1724 0086 0F87C001 		ja	.L187
 1724      0000
 1725 008c 0FB64201 		movzbl	1(%rdx), %eax
 1726 0090 FF24C500 		jmp	*.L143(,%rax,8)
 1726      000000
 1727              		.section	.rodata._ZNK10Fl_Browser11item_heightEPv,"a",@progbits
 1728              		.align 8
 1729              		.align 4
 1730              	.L143:
 1731 0000 00000000 		.quad	.L142
 1731      00000000 
 1732 0008 00000000 		.quad	.L187
 1732      00000000 
 1733 0010 00000000 		.quad	.L187
 1733      00000000 
 1734 0018 00000000 		.quad	.L187
 1734      00000000 
 1735 0020 00000000 		.quad	.L187
 1735      00000000 
 1736 0028 00000000 		.quad	.L187
 1736      00000000 
 1737 0030 00000000 		.quad	.L187
 1737      00000000 
 1738 0038 00000000 		.quad	.L187
 1738      00000000 
 1739 0040 00000000 		.quad	.L187
 1739      00000000 
 1740 0048 00000000 		.quad	.L187
 1740      00000000 
 1741 0050 00000000 		.quad	.L187
 1741      00000000 
 1742 0058 00000000 		.quad	.L187
 1742      00000000 
 1743 0060 00000000 		.quad	.L187
 1743      00000000 
 1744 0068 00000000 		.quad	.L187
 1744      00000000 
 1745 0070 00000000 		.quad	.L187
 1745      00000000 
 1746 0078 00000000 		.quad	.L187
 1746      00000000 
 1747 0080 00000000 		.quad	.L187
 1747      00000000 
 1748 0088 00000000 		.quad	.L187
 1748      00000000 
 1749 0090 00000000 		.quad	.L187
 1749      00000000 
 1750 0098 00000000 		.quad	.L187
 1750      00000000 
 1751 00a0 00000000 		.quad	.L187
 1751      00000000 
 1752 00a8 00000000 		.quad	.L187
 1752      00000000 
 1753 00b0 00000000 		.quad	.L187
 1753      00000000 
 1754 00b8 00000000 		.quad	.L187
 1754      00000000 
 1755 00c0 00000000 		.quad	.L187
 1755      00000000 
 1756 00c8 00000000 		.quad	.L187
 1756      00000000 
 1757 00d0 00000000 		.quad	.L187
 1757      00000000 
 1758 00d8 00000000 		.quad	.L187
 1758      00000000 
 1759 00e0 00000000 		.quad	.L187
 1759      00000000 
 1760 00e8 00000000 		.quad	.L187
 1760      00000000 
 1761 00f0 00000000 		.quad	.L187
 1761      00000000 
 1762 00f8 00000000 		.quad	.L187
 1762      00000000 
 1763 0100 00000000 		.quad	.L187
 1763      00000000 
 1764 0108 00000000 		.quad	.L187
 1764      00000000 
 1765 0110 00000000 		.quad	.L187
 1765      00000000 
 1766 0118 00000000 		.quad	.L187
 1766      00000000 
 1767 0120 00000000 		.quad	.L187
 1767      00000000 
 1768 0128 00000000 		.quad	.L187
 1768      00000000 
 1769 0130 00000000 		.quad	.L187
 1769      00000000 
 1770 0138 00000000 		.quad	.L187
 1770      00000000 
 1771 0140 00000000 		.quad	.L187
 1771      00000000 
 1772 0148 00000000 		.quad	.L187
 1772      00000000 
 1773 0150 00000000 		.quad	.L187
 1773      00000000 
 1774 0158 00000000 		.quad	.L187
 1774      00000000 
 1775 0160 00000000 		.quad	.L187
 1775      00000000 
 1776 0168 00000000 		.quad	.L187
 1776      00000000 
 1777 0170 00000000 		.quad	.L164
 1777      00000000 
 1778 0178 00000000 		.quad	.L187
 1778      00000000 
 1779 0180 00000000 		.quad	.L187
 1779      00000000 
 1780 0188 00000000 		.quad	.L187
 1780      00000000 
 1781 0190 00000000 		.quad	.L187
 1781      00000000 
 1782 0198 00000000 		.quad	.L187
 1782      00000000 
 1783 01a0 00000000 		.quad	.L187
 1783      00000000 
 1784 01a8 00000000 		.quad	.L187
 1784      00000000 
 1785 01b0 00000000 		.quad	.L187
 1785      00000000 
 1786 01b8 00000000 		.quad	.L187
 1786      00000000 
 1787 01c0 00000000 		.quad	.L187
 1787      00000000 
 1788 01c8 00000000 		.quad	.L187
 1788      00000000 
 1789 01d0 00000000 		.quad	.L187
 1789      00000000 
 1790 01d8 00000000 		.quad	.L187
 1790      00000000 
 1791 01e0 00000000 		.quad	.L187
 1791      00000000 
 1792 01e8 00000000 		.quad	.L187
 1792      00000000 
 1793 01f0 00000000 		.quad	.L187
 1793      00000000 
 1794 01f8 00000000 		.quad	.L187
 1794      00000000 
 1795 0200 00000000 		.quad	.L142
 1795      00000000 
 1796 0208 00000000 		.quad	.L187
 1796      00000000 
 1797 0210 00000000 		.quad	.L144
 1797      00000000 
 1798 0218 00000000 		.quad	.L144
 1798      00000000 
 1799 0220 00000000 		.quad	.L187
 1799      00000000 
 1800 0228 00000000 		.quad	.L187
 1800      00000000 
 1801 0230 00000000 		.quad	.L145
 1801      00000000 
 1802 0238 00000000 		.quad	.L187
 1802      00000000 
 1803 0240 00000000 		.quad	.L187
 1803      00000000 
 1804 0248 00000000 		.quad	.L187
 1804      00000000 
 1805 0250 00000000 		.quad	.L187
 1805      00000000 
 1806 0258 00000000 		.quad	.L187
 1806      00000000 
 1807 0260 00000000 		.quad	.L146
 1807      00000000 
 1808 0268 00000000 		.quad	.L147
 1808      00000000 
 1809 0270 00000000 		.quad	.L187
 1809      00000000 
 1810 0278 00000000 		.quad	.L187
 1810      00000000 
 1811 0280 00000000 		.quad	.L187
 1811      00000000 
 1812 0288 00000000 		.quad	.L187
 1812      00000000 
 1813 0290 00000000 		.quad	.L187
 1813      00000000 
 1814 0298 00000000 		.quad	.L148
 1814      00000000 
 1815 02a0 00000000 		.quad	.L187
 1815      00000000 
 1816 02a8 00000000 		.quad	.L187
 1816      00000000 
 1817 02b0 00000000 		.quad	.L187
 1817      00000000 
 1818 02b8 00000000 		.quad	.L187
 1818      00000000 
 1819 02c0 00000000 		.quad	.L187
 1819      00000000 
 1820 02c8 00000000 		.quad	.L187
 1820      00000000 
 1821 02d0 00000000 		.quad	.L187
 1821      00000000 
 1822 02d8 00000000 		.quad	.L187
 1822      00000000 
 1823 02e0 00000000 		.quad	.L187
 1823      00000000 
 1824 02e8 00000000 		.quad	.L187
 1824      00000000 
 1825 02f0 00000000 		.quad	.L187
 1825      00000000 
 1826 02f8 00000000 		.quad	.L187
 1826      00000000 
 1827 0300 00000000 		.quad	.L187
 1827      00000000 
 1828 0308 00000000 		.quad	.L187
 1828      00000000 
 1829 0310 00000000 		.quad	.L149
 1829      00000000 
 1830 0318 00000000 		.quad	.L187
 1830      00000000 
 1831 0320 00000000 		.quad	.L187
 1831      00000000 
 1832 0328 00000000 		.quad	.L187
 1832      00000000 
 1833 0330 00000000 		.quad	.L150
 1833      00000000 
 1834 0338 00000000 		.quad	.L187
 1834      00000000 
 1835 0340 00000000 		.quad	.L187
 1835      00000000 
 1836 0348 00000000 		.quad	.L151
 1836      00000000 
 1837 0350 00000000 		.quad	.L187
 1837      00000000 
 1838 0358 00000000 		.quad	.L187
 1838      00000000 
 1839 0360 00000000 		.quad	.L146
 1839      00000000 
 1840 0368 00000000 		.quad	.L147
 1840      00000000 
 1841 0370 00000000 		.quad	.L187
 1841      00000000 
 1842 0378 00000000 		.quad	.L187
 1842      00000000 
 1843 0380 00000000 		.quad	.L187
 1843      00000000 
 1844 0388 00000000 		.quad	.L187
 1844      00000000 
 1845 0390 00000000 		.quad	.L187
 1845      00000000 
 1846 0398 00000000 		.quad	.L152
 1846      00000000 
 1847 03a0 00000000 		.quad	.L150
 1847      00000000 
 1848              		.section	.text._ZNK10Fl_Browser11item_heightEPv
 1849              	.LVL153:
 1850              	.L191:
 1851              	.LBE359:
 1852              	.LBE358:
 1853              	.LBE357:
 1854              	.LBB374:
 1855              	.LBB375:
 1856              	.LBB376:
 1857              		.loc 5 509 0
 1858 0097 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1858      000000
 1859              	.LVL154:
 1860 009e 418B96C0 		movl	192(%r14), %edx
 1860      000000
 1861 00a5 BD020000 		movl	$2, %ebp
 1861      00
 1862 00aa 418BB6BC 		movl	188(%r14), %esi
 1862      000000
 1863 00b1 488B07   		movq	(%rdi), %rax
 1864 00b4 FF90B001 		call	*432(%rax)
 1864      0000
 1865              	.LVL155:
 1866              	.LBE376:
 1867              	.LBE375:
 1868              	.LBB377:
 1869              	.LBB378:
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
 1870              		.loc 5 527 0
 1871 00ba 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1871      000000
 1872 00c1 488B07   		movq	(%rdi), %rax
 1873 00c4 FF90D001 		call	*464(%rax)
 1873      0000
 1874              	.LVL156:
 1875 00ca 83F802   		cmpl	$2, %eax
 1876 00cd 0F4DE8   		cmovge	%eax, %ebp
 1877              	.LVL157:
 1878              	.L136:
 1879              	.LBE378:
 1880              	.LBE377:
 1881              	.LBE374:
 1882              	.LBE356:
 409:fltk-1.3.4-1/src/Fl_Browser.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 1883              		.loc 3 409 0
 1884 00d0 488B4424 		movq	8(%rsp), %rax
 1884      08
 1885 00d5 488B4018 		movq	24(%rax), %rax
 1886 00d9 4885C0   		testq	%rax, %rax
 1887 00dc 0F845402 		je	.L173
 1887      0000
 1888 00e2 8B400C   		movl	12(%rax), %eax
 1889              	.LVL158:
 1890 00e5 8D5001   		leal	1(%rax), %edx
 1891 00e8 83C002   		addl	$2, %eax
 1892 00eb 39EA     		cmpl	%ebp, %edx
 1893 00ed 0F4CC5   		cmovl	%ebp, %eax
 1894              	.LVL159:
 1895              	.L134:
 1896              	.LBE355:
 1897              	.LBE354:
 413:fltk-1.3.4-1/src/Fl_Browser.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1898              		.loc 3 413 0
 1899 00f0 488B5C24 		movq	24(%rsp), %rbx
 1899      18
 1900 00f5 6448331C 		xorq	%fs:40, %rbx
 1900      25280000 
 1900      00
 1901 00fe 0F853902 		jne	.L192
 1901      0000
 1902 0104 4883C428 		addq	$40, %rsp
 1903              		.cfi_remember_state
 1904              		.cfi_def_cfa_offset 56
 1905 0108 5B       		popq	%rbx
 1906              		.cfi_def_cfa_offset 48
 1907 0109 5D       		popq	%rbp
 1908              		.cfi_def_cfa_offset 40
 1909 010a 415C     		popq	%r12
 1910              		.cfi_def_cfa_offset 32
 1911 010c 415D     		popq	%r13
 1912              		.cfi_def_cfa_offset 24
 1913 010e 415E     		popq	%r14
 1914              		.cfi_def_cfa_offset 16
 1915 0110 415F     		popq	%r15
 1916              		.cfi_def_cfa_offset 8
 1917 0112 C3       		ret
 1918              	.LVL160:
 1919              		.p2align 4,,10
 1920 0113 0F1F4400 		.p2align 3
 1920      00
 1921              	.L167:
 1922              		.cfi_restore_state
 1923              	.LBB382:
 1924              	.LBB381:
 1925              	.LBB380:
 1926              	.LBB379:
 1927              	.LBB373:
 1928              	.LBB371:
 380:fltk-1.3.4-1/src/Fl_Browser.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1929              		.loc 3 380 0
 1930 0118 4889D3   		movq	%rdx, %rbx
 1931              	.LVL161:
 1932 011b 0F1F4400 		.p2align 4,,10
 1932      00
 1933              		.p2align 3
 1934              	.L164:
 399:fltk-1.3.4-1/src/Fl_Browser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 1935              		.loc 3 399 0
 1936 0120 418B0424 		movl	(%r12), %eax
 1937 0124 498D5424 		leaq	4(%r12), %rdx
 1937      04
 1938              	.LVL162:
 1939 0129 85C0     		testl	%eax, %eax
 1940 012b 0F84AC00 		je	.L156
 1940      0000
 1941              	.LBB360:
 1942              	.LBB361:
 1943              		.loc 4 220 0
 1944 0131 410FBEB6 		movsbl	665(%r14), %esi
 1944      99020000 
 1945 0139 4889DF   		movq	%rbx, %rdi
 1946 013c 48891424 		movq	%rdx, (%rsp)
 1947              	.LVL163:
 1948 0140 E8000000 		call	strchr
 1948      00
 1949              	.LVL164:
 1950              	.LBE361:
 1951              	.LBE360:
 1952              	.LBB362:
 401:fltk-1.3.4-1/src/Fl_Browser.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 1953              		.loc 3 401 0
 1954 0145 4885C0   		testq	%rax, %rax
 1955              	.LBE362:
 399:fltk-1.3.4-1/src/Fl_Browser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 1956              		.loc 3 399 0
 1957 0148 48894424 		movq	%rax, 16(%rsp)
 1957      10
 1958              	.LBB368:
 401:fltk-1.3.4-1/src/Fl_Browser.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 1959              		.loc 3 401 0
 1960 014d 488B1424 		movq	(%rsp), %rdx
 1961 0151 0F848F00 		je	.L162
 1961      0000
 1962 0157 4839C3   		cmpq	%rax, %rbx
 1963              	.LBE368:
 399:fltk-1.3.4-1/src/Fl_Browser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 1964              		.loc 3 399 0
 1965 015a 4989D4   		movq	%rdx, %r12
 1966              	.LBB369:
 401:fltk-1.3.4-1/src/Fl_Browser.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 1967              		.loc 3 401 0
 1968 015d 7339     		jnb	.L159
 1969              	.LVL165:
 1970              	.L158:
 1971              	.LBB363:
 1972              	.LBB364:
 1973              	.LBB365:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 1974              		.loc 5 509 0
 1975 015f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1975      000000
 1976 0166 4489FA   		movl	%r15d, %edx
 1977              	.LVL166:
 1978 0169 4489EE   		movl	%r13d, %esi
 1979 016c 488B07   		movq	(%rdi), %rax
 1980 016f FF90B001 		call	*432(%rax)
 1980      0000
 1981              	.LVL167:
 1982              	.LBE365:
 1983              	.LBE364:
 1984              	.LBB366:
 1985              	.LBB367:
 1986              		.loc 5 527 0
 1987 0175 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1987      000000
 1988 017c 488B07   		movq	(%rdi), %rax
 1989 017f FF90D001 		call	*464(%rax)
 1989      0000
 1990              	.LVL168:
 1991 0185 39C5     		cmpl	%eax, %ebp
 1992 0187 0F4CE8   		cmovl	%eax, %ebp
 1993              	.LVL169:
 1994              	.LBE367:
 1995              	.LBE366:
 1996              	.LBE363:
 1997              	.LBE369:
 405:fltk-1.3.4-1/src/Fl_Browser.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1998              		.loc 3 405 0
 1999 018a 488B4424 		movq	16(%rsp), %rax
 1999      10
 2000 018f 4885C0   		testq	%rax, %rax
 2001 0192 0F8438FF 		je	.L136
 2001      FFFF
 2002              	.L159:
 2003 0198 803800   		cmpb	$0, (%rax)
 2004 019b 0F842FFF 		je	.L136
 2004      FFFF
 2005              	.LBE371:
 377:fltk-1.3.4-1/src/Fl_Browser.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 2006              		.loc 3 377 0
 2007 01a1 488D5001 		leaq	1(%rax), %rdx
 2008 01a5 4885D2   		testq	%rdx, %rdx
 2009 01a8 48895424 		movq	%rdx, 16(%rsp)
 2009      10
 2010 01ad 0F841DFF 		je	.L136
 2010      FFFF
 2011 01b3 0FB67001 		movzbl	1(%rax), %esi
 2012 01b7 4084F6   		testb	%sil, %sil
 2013 01ba 0F8598FE 		jne	.L137
 2013      FFFF
 2014 01c0 E90BFFFF 		jmp	.L136
 2014      FF
 2015              		.p2align 4,,10
 2016 01c5 0F1F00   		.p2align 3
 2017              	.L142:
 2018              	.LBB372:
 381:fltk-1.3.4-1/src/Fl_Browser.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 2019              		.loc 3 381 0
 2020 01c8 488D5A01 		leaq	1(%rdx), %rbx
 399:fltk-1.3.4-1/src/Fl_Browser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 2021              		.loc 3 399 0
 2022 01cc 4885DB   		testq	%rbx, %rbx
 393:fltk-1.3.4-1/src/Fl_Browser.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2023              		.loc 3 393 0
 2024 01cf 48895C24 		movq	%rbx, 16(%rsp)
 2024      10
 2025              	.LDL1:
 2026              	.LVL170:
 399:fltk-1.3.4-1/src/Fl_Browser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 2027              		.loc 3 399 0
 2028 01d4 0F8546FF 		jne	.L164
 2028      FFFF
 2029 01da 4C89E2   		movq	%r12, %rdx
 2030              	.LVL171:
 2031              	.L156:
 400:fltk-1.3.4-1/src/Fl_Browser.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2032              		.loc 3 400 0
 2033 01dd 48C74424 		movq	$0, 16(%rsp)
 2033      10000000 
 2033      00
 2034              	.LVL172:
 2035              	.L162:
 2036              	.LBB370:
 401:fltk-1.3.4-1/src/Fl_Browser.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 2037              		.loc 3 401 0
 2038 01e6 803B00   		cmpb	$0, (%rbx)
 2039 01e9 0F84E1FE 		je	.L136
 2039      FFFF
 2040 01ef 4989D4   		movq	%rdx, %r12
 2041 01f2 E968FFFF 		jmp	.L158
 2041      FF
 2042              	.LVL173:
 2043 01f7 660F1F84 		.p2align 4,,10
 2043      00000000 
 2043      00
 2044              		.p2align 3
 2045              	.L152:
 2046              	.LBE370:
 2047 0200 89F0     		movl	%esi, %eax
 385:fltk-1.3.4-1/src/Fl_Browser.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 2048              		.loc 3 385 0
 2049 0202 41BF0B00 		movl	$11, %r15d
 2049      0000
 2050 0208 0FB67202 		movzbl	2(%rdx), %esi
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 2051              		.loc 3 382 0
 2052 020c 4889DA   		movq	%rbx, %rdx
 2053 020f E95CFEFF 		jmp	.L139
 2053      FF
 2054              	.LVL174:
 2055              		.p2align 4,,10
 2056 0214 0F1F4000 		.p2align 3
 2057              	.L151:
 387:fltk-1.3.4-1/src/Fl_Browser.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2058              		.loc 3 387 0
 2059 0218 89F0     		movl	%esi, %eax
 2060 021a 4183CD02 		orl	$2, %r13d
 2061              	.LVL175:
 2062 021e 0FB67202 		movzbl	2(%rdx), %esi
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 2063              		.loc 3 382 0
 2064 0222 4889DA   		movq	%rbx, %rdx
 2065 0225 E946FEFF 		jmp	.L139
 2065      FF
 2066 022a 660F1F44 		.p2align 4,,10
 2066      0000
 2067              		.p2align 3
 2068              	.L150:
 2069              	.LVL176:
 2070 0230 89F0     		movl	%esi, %eax
 388:fltk-1.3.4-1/src/Fl_Browser.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 2071              		.loc 3 388 0
 2072 0232 41BD0400 		movl	$4, %r13d
 2072      0000
 2073 0238 0FB67202 		movzbl	2(%rdx), %esi
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 2074              		.loc 3 382 0
 2075 023c 4889DA   		movq	%rbx, %rdx
 2076 023f E92CFEFF 		jmp	.L139
 2076      FF
 2077              	.LVL177:
 2078              		.p2align 4,,10
 2079 0244 0F1F4000 		.p2align 3
 2080              	.L149:
 386:fltk-1.3.4-1/src/Fl_Browser.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 2081              		.loc 3 386 0
 2082 0248 4183CD01 		orl	$1, %r13d
 2083              	.LVL178:
 2084              	.L187:
 2085 024c 89F0     		movl	%esi, %eax
 2086 024e 0FB67202 		movzbl	2(%rdx), %esi
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 2087              		.loc 3 382 0
 2088 0252 4889DA   		movq	%rbx, %rdx
 2089 0255 E916FEFF 		jmp	.L139
 2089      FF
 2090 025a 660F1F44 		.p2align 4,,10
 2090      0000
 2091              		.p2align 3
 2092              	.L147:
 2093              	.LVL179:
 2094 0260 89F0     		movl	%esi, %eax
 384:fltk-1.3.4-1/src/Fl_Browser.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 2095              		.loc 3 384 0
 2096 0262 41BF1200 		movl	$18, %r15d
 2096      0000
 2097 0268 0FB67202 		movzbl	2(%rdx), %esi
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 2098              		.loc 3 382 0
 2099 026c 4889DA   		movq	%rbx, %rdx
 2100 026f E9FCFDFF 		jmp	.L139
 2100      FF
 2101              	.LVL180:
 2102              		.p2align 4,,10
 2103 0274 0F1F4000 		.p2align 3
 2104              	.L146:
 2105 0278 89F0     		movl	%esi, %eax
 383:fltk-1.3.4-1/src/Fl_Browser.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 2106              		.loc 3 383 0
 2107 027a 41BF1800 		movl	$24, %r15d
 2107      0000
 2108 0280 0FB67202 		movzbl	2(%rdx), %esi
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 2109              		.loc 3 382 0
 2110 0284 4889DA   		movq	%rbx, %rdx
 2111 0287 E9E4FDFF 		jmp	.L139
 2111      FF
 2112              	.LVL181:
 2113 028c 0F1F4000 		.p2align 4,,10
 2114              		.p2align 3
 2115              	.L145:
 391:fltk-1.3.4-1/src/Fl_Browser.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 2116              		.loc 3 391 0
 2117 0290 488D7424 		leaq	16(%rsp), %rsi
 2117      10
 2118 0295 BA0A0000 		movl	$10, %edx
 2118      00
 2119 029a 4889DF   		movq	%rbx, %rdi
 2120 029d E8000000 		call	strtol
 2120      00
 2121              	.LVL182:
 2122 02a2 488B5424 		movq	16(%rsp), %rdx
 2122      10
 2123 02a7 4189C5   		movl	%eax, %r13d
 2124              	.LVL183:
 2125 02aa 410FB686 		movzbl	664(%r14), %eax
 2125      98020000 
 2126              	.LVL184:
 2127 02b2 0FB632   		movzbl	(%rdx), %esi
 2128 02b5 E9B6FDFF 		jmp	.L139
 2128      FF
 2129              	.LVL185:
 2130 02ba 660F1F44 		.p2align 4,,10
 2130      0000
 2131              		.p2align 3
 2132              	.L144:
 390:fltk-1.3.4-1/src/Fl_Browser.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 2133              		.loc 3 390 0
 2134 02c0 0FB64202 		movzbl	2(%rdx), %eax
 2135 02c4 89C1     		movl	%eax, %ecx
 2136 02c6 83E830   		subl	$48, %eax
 2137 02c9 83F809   		cmpl	$9, %eax
 2138 02cc 775C     		ja	.L193
 2139 02ce 488D4203 		leaq	3(%rdx), %rax
 2140              		.p2align 4,,10
 2141 02d2 660F1F44 		.p2align 3
 2141      0000
 2142              	.L155:
 2143 02d8 48894424 		movq	%rax, 16(%rsp)
 2143      10
 2144 02dd 0FB608   		movzbl	(%rax), %ecx
 2145 02e0 4889C2   		movq	%rax, %rdx
 2146 02e3 488D4001 		leaq	1(%rax), %rax
 2147 02e7 89CF     		movl	%ecx, %edi
 2148 02e9 83E930   		subl	$48, %ecx
 2149 02ec 83F909   		cmpl	$9, %ecx
 2150 02ef 76E7     		jbe	.L155
 2151 02f1 89F0     		movl	%esi, %eax
 2152 02f3 89FE     		movl	%edi, %esi
 2153 02f5 E976FDFF 		jmp	.L139
 2153      FF
 2154 02fa 660F1F44 		.p2align 4,,10
 2154      0000
 2155              		.p2align 3
 2156              	.L148:
 392:fltk-1.3.4-1/src/Fl_Browser.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 2157              		.loc 3 392 0
 2158 0300 488D7424 		leaq	16(%rsp), %rsi
 2158      10
 2159 0305 BA0A0000 		movl	$10, %edx
 2159      00
 2160 030a 4889DF   		movq	%rbx, %rdi
 2161 030d E8000000 		call	strtol
 2161      00
 2162              	.LVL186:
 2163 0312 488B5424 		movq	16(%rsp), %rdx
 2163      10
 2164 0317 4189C7   		movl	%eax, %r15d
 2165              	.LVL187:
 2166 031a 410FB686 		movzbl	664(%r14), %eax
 2166      98020000 
 2167              	.LVL188:
 2168 0322 0FB632   		movzbl	(%rdx), %esi
 2169 0325 E946FDFF 		jmp	.L139
 2169      FF
 2170              	.LVL189:
 2171              	.L193:
 390:fltk-1.3.4-1/src/Fl_Browser.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 2172              		.loc 3 390 0
 2173 032a 89F0     		movl	%esi, %eax
 382:fltk-1.3.4-1/src/Fl_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 2174              		.loc 3 382 0
 2175 032c 4889DA   		movq	%rbx, %rdx
 390:fltk-1.3.4-1/src/Fl_Browser.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 2176              		.loc 3 390 0
 2177 032f 89CE     		movl	%ecx, %esi
 2178 0331 E93AFDFF 		jmp	.L139
 2178      FF
 2179              	.LVL190:
 2180              	.L173:
 2181              	.LBE372:
 2182              	.LBE373:
 2183              	.LBE379:
 2184              	.LBE380:
 409:fltk-1.3.4-1/src/Fl_Browser.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 2185              		.loc 3 409 0
 2186 0336 89E8     		movl	%ebp, %eax
 2187 0338 E9B3FDFF 		jmp	.L134
 2187      FF
 2188              	.LVL191:
 2189              	.L192:
 2190              	.LBE381:
 2191              	.LBE382:
 413:fltk-1.3.4-1/src/Fl_Browser.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2192              		.loc 3 413 0
 2193 033d E8000000 		call	__stack_chk_fail
 2193      00
 2194              	.LVL192:
 2195              		.cfi_endproc
 2196              	.LFE574:
 2198              		.section	.text.unlikely._ZNK10Fl_Browser11item_heightEPv
 2199              	.LCOLDE16:
 2200              		.section	.text._ZNK10Fl_Browser11item_heightEPv
 2201              	.LHOTE16:
 2202              		.section	.text.unlikely._ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20,"ax",@progbits
 2203              		.align 2
 2204              	.LCOLDB17:
 2205              		.section	.text._ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20,"ax",@progbits
 2206              	.LHOTB17:
 2207              		.align 2
 2208              		.p2align 4,,15
 2210              	_ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20:
 2211              	.LFB639:
 595:fltk-1.3.4-1/src/Fl_Browser.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Browser.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Browser.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Browser.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Browser.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Browser.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Browser.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Browser.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_Browser.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_Browser.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_Browser.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_Browser.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_Browser.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_Browser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/Fl_Browser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Browser.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Browser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_Browser.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_Browser.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_Browser.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/Fl_Browser.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/Fl_Browser.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_Browser.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Browser.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/Fl_Browser.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/Fl_Browser.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/Fl_Browser.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_Browser.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/Fl_Browser.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_Browser.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 625:fltk-1.3.4-1/src/Fl_Browser.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_Browser.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_Browser.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 628:fltk-1.3.4-1/src/Fl_Browser.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 629:fltk-1.3.4-1/src/Fl_Browser.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_Browser.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_Browser.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632:fltk-1.3.4-1/src/Fl_Browser.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 633:fltk-1.3.4-1/src/Fl_Browser.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 634:fltk-1.3.4-1/src/Fl_Browser.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635:fltk-1.3.4-1/src/Fl_Browser.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 636:fltk-1.3.4-1/src/Fl_Browser.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_Browser.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 638:fltk-1.3.4-1/src/Fl_Browser.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 639:fltk-1.3.4-1/src/Fl_Browser.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 640:fltk-1.3.4-1/src/Fl_Browser.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 641:fltk-1.3.4-1/src/Fl_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 642:fltk-1.3.4-1/src/Fl_Browser.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 643:fltk-1.3.4-1/src/Fl_Browser.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 644:fltk-1.3.4-1/src/Fl_Browser.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 645:fltk-1.3.4-1/src/Fl_Browser.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 646:fltk-1.3.4-1/src/Fl_Browser.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 647:fltk-1.3.4-1/src/Fl_Browser.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 648:fltk-1.3.4-1/src/Fl_Browser.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 649:fltk-1.3.4-1/src/Fl_Browser.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 650:fltk-1.3.4-1/src/Fl_Browser.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 651:fltk-1.3.4-1/src/Fl_Browser.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 652:fltk-1.3.4-1/src/Fl_Browser.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 653:fltk-1.3.4-1/src/Fl_Browser.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 654:fltk-1.3.4-1/src/Fl_Browser.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 655:fltk-1.3.4-1/src/Fl_Browser.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 656:fltk-1.3.4-1/src/Fl_Browser.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_Browser.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_Browser.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_Browser.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_Browser.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_Browser.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_Browser.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_Browser.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_Browser.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_Browser.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 666:fltk-1.3.4-1/src/Fl_Browser.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_Browser.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_Browser.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 669:fltk-1.3.4-1/src/Fl_Browser.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_Browser.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_Browser.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 672:fltk-1.3.4-1/src/Fl_Browser.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_Browser.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_Browser.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 675:fltk-1.3.4-1/src/Fl_Browser.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_Browser.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_Browser.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 678:fltk-1.3.4-1/src/Fl_Browser.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_Browser.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 680:fltk-1.3.4-1/src/Fl_Browser.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_Browser.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_Browser.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_Browser.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_Browser.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_Browser.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_Browser.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687:fltk-1.3.4-1/src/Fl_Browser.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_Browser.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_Browser.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 690:fltk-1.3.4-1/src/Fl_Browser.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_Browser.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_Browser.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_Browser.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_Browser.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_Browser.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_Browser.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_Browser.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_Browser.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_Browser.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_Browser.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_Browser.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_Browser.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_Browser.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_Browser.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_Browser.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_Browser.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_Browser.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_Browser.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 709:fltk-1.3.4-1/src/Fl_Browser.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_Browser.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_Browser.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_Browser.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_Browser.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_Browser.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_Browser.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 716:fltk-1.3.4-1/src/Fl_Browser.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 717:fltk-1.3.4-1/src/Fl_Browser.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 718:fltk-1.3.4-1/src/Fl_Browser.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_Browser.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_Browser.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721:fltk-1.3.4-1/src/Fl_Browser.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 722:fltk-1.3.4-1/src/Fl_Browser.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_Browser.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_Browser.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 725:fltk-1.3.4-1/src/Fl_Browser.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_Browser.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_Browser.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 728:fltk-1.3.4-1/src/Fl_Browser.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 729:fltk-1.3.4-1/src/Fl_Browser.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 730:fltk-1.3.4-1/src/Fl_Browser.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 731:fltk-1.3.4-1/src/Fl_Browser.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 732:fltk-1.3.4-1/src/Fl_Browser.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/src/Fl_Browser.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 734:fltk-1.3.4-1/src/Fl_Browser.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 735:fltk-1.3.4-1/src/Fl_Browser.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 736:fltk-1.3.4-1/src/Fl_Browser.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 737:fltk-1.3.4-1/src/Fl_Browser.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 738:fltk-1.3.4-1/src/Fl_Browser.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 739:fltk-1.3.4-1/src/Fl_Browser.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 740:fltk-1.3.4-1/src/Fl_Browser.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 741:fltk-1.3.4-1/src/Fl_Browser.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 742:fltk-1.3.4-1/src/Fl_Browser.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 743:fltk-1.3.4-1/src/Fl_Browser.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 744:fltk-1.3.4-1/src/Fl_Browser.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 745:fltk-1.3.4-1/src/Fl_Browser.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 746:fltk-1.3.4-1/src/Fl_Browser.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 747:fltk-1.3.4-1/src/Fl_Browser.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 748:fltk-1.3.4-1/src/Fl_Browser.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 749:fltk-1.3.4-1/src/Fl_Browser.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 750:fltk-1.3.4-1/src/Fl_Browser.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 751:fltk-1.3.4-1/src/Fl_Browser.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752:fltk-1.3.4-1/src/Fl_Browser.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 753:fltk-1.3.4-1/src/Fl_Browser.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 754:fltk-1.3.4-1/src/Fl_Browser.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 755:fltk-1.3.4-1/src/Fl_Browser.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 756:fltk-1.3.4-1/src/Fl_Browser.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 757:fltk-1.3.4-1/src/Fl_Browser.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 758:fltk-1.3.4-1/src/Fl_Browser.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 759:fltk-1.3.4-1/src/Fl_Browser.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 760:fltk-1.3.4-1/src/Fl_Browser.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 761:fltk-1.3.4-1/src/Fl_Browser.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 762:fltk-1.3.4-1/src/Fl_Browser.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 763:fltk-1.3.4-1/src/Fl_Browser.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/src/Fl_Browser.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 765:fltk-1.3.4-1/src/Fl_Browser.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/src/Fl_Browser.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 767:fltk-1.3.4-1/src/Fl_Browser.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 768:fltk-1.3.4-1/src/Fl_Browser.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 769:fltk-1.3.4-1/src/Fl_Browser.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 770:fltk-1.3.4-1/src/Fl_Browser.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771:fltk-1.3.4-1/src/Fl_Browser.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 772:fltk-1.3.4-1/src/Fl_Browser.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 773:fltk-1.3.4-1/src/Fl_Browser.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 774:fltk-1.3.4-1/src/Fl_Browser.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 775:fltk-1.3.4-1/src/Fl_Browser.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 776:fltk-1.3.4-1/src/Fl_Browser.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 777:fltk-1.3.4-1/src/Fl_Browser.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 778:fltk-1.3.4-1/src/Fl_Browser.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 779:fltk-1.3.4-1/src/Fl_Browser.cxx ****  762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 780:fltk-1.3.4-1/src/Fl_Browser.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 781:fltk-1.3.4-1/src/Fl_Browser.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 782:fltk-1.3.4-1/src/Fl_Browser.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 783:fltk-1.3.4-1/src/Fl_Browser.cxx ****  766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 784:fltk-1.3.4-1/src/Fl_Browser.cxx ****  767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callb
 785:fltk-1.3.4-1/src/Fl_Browser.cxx ****  768:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 786:fltk-1.3.4-1/src/Fl_Browser.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 787:fltk-1.3.4-1/src/Fl_Browser.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 788:fltk-1.3.4-1/src/Fl_Browser.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 789:fltk-1.3.4-1/src/Fl_Browser.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 790:fltk-1.3.4-1/src/Fl_Browser.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 791:fltk-1.3.4-1/src/Fl_Browser.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 792:fltk-1.3.4-1/src/Fl_Browser.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 793:fltk-1.3.4-1/src/Fl_Browser.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 794:fltk-1.3.4-1/src/Fl_Browser.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 795:fltk-1.3.4-1/src/Fl_Browser.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 796:fltk-1.3.4-1/src/Fl_Browser.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 797:fltk-1.3.4-1/src/Fl_Browser.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 798:fltk-1.3.4-1/src/Fl_Browser.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 799:fltk-1.3.4-1/src/Fl_Browser.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 800:fltk-1.3.4-1/src/Fl_Browser.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 801:fltk-1.3.4-1/src/Fl_Browser.cxx ****  784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 802:fltk-1.3.4-1/src/Fl_Browser.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 803:fltk-1.3.4-1/src/Fl_Browser.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 804:fltk-1.3.4-1/src/Fl_Browser.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 805:fltk-1.3.4-1/src/Fl_Browser.cxx ****  788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 806:fltk-1.3.4-1/src/Fl_Browser.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 807:fltk-1.3.4-1/src/Fl_Browser.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 808:fltk-1.3.4-1/src/Fl_Browser.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 809:fltk-1.3.4-1/src/Fl_Browser.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 810:fltk-1.3.4-1/src/Fl_Browser.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 811:fltk-1.3.4-1/src/Fl_Browser.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 812:fltk-1.3.4-1/src/Fl_Browser.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 813:fltk-1.3.4-1/src/Fl_Browser.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 814:fltk-1.3.4-1/src/Fl_Browser.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 815:fltk-1.3.4-1/src/Fl_Browser.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 816:fltk-1.3.4-1/src/Fl_Browser.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 817:fltk-1.3.4-1/src/Fl_Browser.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 818:fltk-1.3.4-1/src/Fl_Browser.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 819:fltk-1.3.4-1/src/Fl_Browser.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820:fltk-1.3.4-1/src/Fl_Browser.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 821:fltk-1.3.4-1/src/Fl_Browser.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 822:fltk-1.3.4-1/src/Fl_Browser.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 823:fltk-1.3.4-1/src/Fl_Browser.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 824:fltk-1.3.4-1/src/Fl_Browser.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 825:fltk-1.3.4-1/src/Fl_Browser.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 826:fltk-1.3.4-1/src/Fl_Browser.cxx ****  809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 827:fltk-1.3.4-1/src/Fl_Browser.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 828:fltk-1.3.4-1/src/Fl_Browser.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 829:fltk-1.3.4-1/src/Fl_Browser.cxx ****  812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 830:fltk-1.3.4-1/src/Fl_Browser.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 831:fltk-1.3.4-1/src/Fl_Browser.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 832:fltk-1.3.4-1/src/Fl_Browser.cxx ****  815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that
 833:fltk-1.3.4-1/src/Fl_Browser.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 834:fltk-1.3.4-1/src/Fl_Browser.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 835:fltk-1.3.4-1/src/Fl_Browser.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 836:fltk-1.3.4-1/src/Fl_Browser.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2212              		.loc 3 836 0
 2213              		.cfi_startproc
 2214              	.LVL193:
 2215 0000 4154     		pushq	%r12
 2216              		.cfi_def_cfa_offset 16
 2217              		.cfi_offset 12, -16
 2218 0002 55       		pushq	%rbp
 2219              		.cfi_def_cfa_offset 24
 2220              		.cfi_offset 6, -24
 2221 0003 4889D5   		movq	%rdx, %rbp
 2222 0006 53       		pushq	%rbx
 2223              		.cfi_def_cfa_offset 32
 2224              		.cfi_offset 3, -32
 2225              		.loc 3 836 0
 2226 0007 4989FC   		movq	%rdi, %r12
 2227 000a 4889F3   		movq	%rsi, %rbx
 837:fltk-1.3.4-1/src/Fl_Browser.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 838:fltk-1.3.4-1/src/Fl_Browser.cxx ****  821:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 839:fltk-1.3.4-1/src/Fl_Browser.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 2228              		.loc 3 839 0
 2229 000d E8000000 		call	_ZN11Fl_Browser_8swappingEPvS0_
 2229      00
 2230              	.LVL194:
 840:fltk-1.3.4-1/src/Fl_Browser.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 841:fltk-1.3.4-1/src/Fl_Browser.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 842:fltk-1.3.4-1/src/Fl_Browser.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2231              		.loc 3 842 0
 2232 0012 488B4500 		movq	0(%rbp), %rax
 840:fltk-1.3.4-1/src/Fl_Browser.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 2233              		.loc 3 840 0
 2234 0016 488B13   		movq	(%rbx), %rdx
 2235              	.LVL195:
 841:fltk-1.3.4-1/src/Fl_Browser.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2236              		.loc 3 841 0
 2237 0019 488B7308 		movq	8(%rbx), %rsi
 2238              	.LVL196:
 843:fltk-1.3.4-1/src/Fl_Browser.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 2239              		.loc 3 843 0
 2240 001d 488B4D08 		movq	8(%rbp), %rcx
 2241              	.LVL197:
 844:fltk-1.3.4-1/src/Fl_Browser.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2242              		.loc 3 844 0
 2243 0021 4839C3   		cmpq	%rax, %rbx
 2244 0024 746A     		je	.L213
 845:fltk-1.3.4-1/src/Fl_Browser.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 846:fltk-1.3.4-1/src/Fl_Browser.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 847:fltk-1.3.4-1/src/Fl_Browser.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 848:fltk-1.3.4-1/src/Fl_Browser.cxx ****  831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 849:fltk-1.3.4-1/src/Fl_Browser.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 850:fltk-1.3.4-1/src/Fl_Browser.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 851:fltk-1.3.4-1/src/Fl_Browser.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 2245              		.loc 3 851 0
 2246 0026 4839D5   		cmpq	%rdx, %rbp
 2247 0029 0F849100 		je	.L214
 2247      0000
 852:fltk-1.3.4-1/src/Fl_Browser.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 853:fltk-1.3.4-1/src/Fl_Browser.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 854:fltk-1.3.4-1/src/Fl_Browser.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 855:fltk-1.3.4-1/src/Fl_Browser.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 856:fltk-1.3.4-1/src/Fl_Browser.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 857:fltk-1.3.4-1/src/Fl_Browser.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 858:fltk-1.3.4-1/src/Fl_Browser.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 859:fltk-1.3.4-1/src/Fl_Browser.cxx ****  842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on th
 860:fltk-1.3.4-1/src/Fl_Browser.cxx ****  843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 861:fltk-1.3.4-1/src/Fl_Browser.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2248              		.loc 3 861 0
 2249 002f 4885F6   		testq	%rsi, %rsi
 860:fltk-1.3.4-1/src/Fl_Browser.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2250              		.loc 3 860 0
 2251 0032 48895500 		movq	%rdx, 0(%rbp)
 2252              		.loc 3 861 0
 2253 0036 0F84F400 		je	.L204
 2253      0000
 2254 003c 48892E   		movq	%rbp, (%rsi)
 2255              	.L205:
 862:fltk-1.3.4-1/src/Fl_Browser.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 863:fltk-1.3.4-1/src/Fl_Browser.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 2256              		.loc 3 863 0
 2257 003f 4885C9   		testq	%rcx, %rcx
 862:fltk-1.3.4-1/src/Fl_Browser.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 2258              		.loc 3 862 0
 2259 0042 488903   		movq	%rax, (%rbx)
 2260              		.loc 3 863 0
 2261 0045 0F84A500 		je	.L206
 2261      0000
 864:fltk-1.3.4-1/src/Fl_Browser.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 865:fltk-1.3.4-1/src/Fl_Browser.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 2262              		.loc 3 865 0
 2263 004b 4885D2   		testq	%rdx, %rdx
 863:fltk-1.3.4-1/src/Fl_Browser.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 2264              		.loc 3 863 0
 2265 004e 488919   		movq	%rbx, (%rcx)
 2266              		.loc 3 865 0
 2267 0051 0F84B100 		je	.L208
 2267      0000
 2268              	.L215:
 866:fltk-1.3.4-1/src/Fl_Browser.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 867:fltk-1.3.4-1/src/Fl_Browser.cxx ****  850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 2269              		.loc 3 867 0
 2270 0057 4885C0   		testq	%rax, %rax
 865:fltk-1.3.4-1/src/Fl_Browser.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2271              		.loc 3 865 0
 2272 005a 48896A08 		movq	%rbp, 8(%rdx)
 866:fltk-1.3.4-1/src/Fl_Browser.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2273              		.loc 3 866 0
 2274 005e 48897508 		movq	%rsi, 8(%rbp)
 2275              		.loc 3 867 0
 2276 0062 0F84B800 		je	.L210
 2276      0000
 2277              	.L216:
 2278 0068 48895808 		movq	%rbx, 8(%rax)
 2279              	.L211:
 868:fltk-1.3.4-1/src/Fl_Browser.cxx ****  851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 2280              		.loc 3 868 0
 2281 006c 48894B08 		movq	%rcx, 8(%rbx)
 2282              	.L199:
 869:fltk-1.3.4-1/src/Fl_Browser.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870:fltk-1.3.4-1/src/Fl_Browser.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 871:fltk-1.3.4-1/src/Fl_Browser.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 872:fltk-1.3.4-1/src/Fl_Browser.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 873:fltk-1.3.4-1/src/Fl_Browser.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2283              		.loc 3 873 0
 2284 0070 5B       		popq	%rbx
 2285              		.cfi_remember_state
 2286              		.cfi_def_cfa_offset 24
 2287              	.LVL198:
 871:fltk-1.3.4-1/src/Fl_Browser.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 2288              		.loc 3 871 0
 2289 0071 41C78424 		movl	$0, 640(%r12)
 2289      80020000 
 2289      00000000 
 872:fltk-1.3.4-1/src/Fl_Browser.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2290              		.loc 3 872 0
 2291 007d 49C78424 		movq	$0, 632(%r12)
 2291      78020000 
 2291      00000000 
 2292              		.loc 3 873 0
 2293 0089 5D       		popq	%rbp
 2294              		.cfi_def_cfa_offset 16
 2295              	.LVL199:
 2296 008a 415C     		popq	%r12
 2297              		.cfi_def_cfa_offset 8
 2298              	.LVL200:
 2299 008c C3       		ret
 2300              	.LVL201:
 2301 008d 0F1F00   		.p2align 4,,10
 2302              		.p2align 3
 2303              	.L213:
 2304              		.cfi_restore_state
 845:fltk-1.3.4-1/src/Fl_Browser.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 2305              		.loc 3 845 0
 2306 0090 4885D2   		testq	%rdx, %rdx
 2307 0093 0F84A700 		je	.L196
 2307      0000
 2308 0099 48896A08 		movq	%rbp, 8(%rdx)
 2309              	.L197:
 850:fltk-1.3.4-1/src/Fl_Browser.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 2310              		.loc 3 850 0
 2311 009d 4885C9   		testq	%rcx, %rcx
 846:fltk-1.3.4-1/src/Fl_Browser.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 2312              		.loc 3 846 0
 2313 00a0 48895D08 		movq	%rbx, 8(%rbp)
 847:fltk-1.3.4-1/src/Fl_Browser.cxx ****  831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2314              		.loc 3 847 0
 2315 00a4 48894B08 		movq	%rcx, 8(%rbx)
 848:fltk-1.3.4-1/src/Fl_Browser.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 2316              		.loc 3 848 0
 2317 00a8 48895500 		movq	%rdx, 0(%rbp)
 849:fltk-1.3.4-1/src/Fl_Browser.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2318              		.loc 3 849 0
 2319 00ac 48892B   		movq	%rbp, (%rbx)
 850:fltk-1.3.4-1/src/Fl_Browser.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 2320              		.loc 3 850 0
 2321 00af 0F849B00 		je	.L198
 2321      0000
 2322 00b5 488919   		movq	%rbx, (%rcx)
 2323 00b8 EBB6     		jmp	.L199
 2324 00ba 660F1F44 		.p2align 4,,10
 2324      0000
 2325              		.p2align 3
 2326              	.L214:
 852:fltk-1.3.4-1/src/Fl_Browser.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 2327              		.loc 3 852 0
 2328 00c0 4885C0   		testq	%rax, %rax
 2329 00c3 0F84A700 		je	.L201
 2329      0000
 2330 00c9 48895808 		movq	%rbx, 8(%rax)
 2331              	.L202:
 857:fltk-1.3.4-1/src/Fl_Browser.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2332              		.loc 3 857 0
 2333 00cd 4885F6   		testq	%rsi, %rsi
 853:fltk-1.3.4-1/src/Fl_Browser.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2334              		.loc 3 853 0
 2335 00d0 48896B08 		movq	%rbp, 8(%rbx)
 854:fltk-1.3.4-1/src/Fl_Browser.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 2336              		.loc 3 854 0
 2337 00d4 48897508 		movq	%rsi, 8(%rbp)
 855:fltk-1.3.4-1/src/Fl_Browser.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2338              		.loc 3 855 0
 2339 00d8 488903   		movq	%rax, (%rbx)
 856:fltk-1.3.4-1/src/Fl_Browser.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 2340              		.loc 3 856 0
 2341 00db 48895D00 		movq	%rbx, 0(%rbp)
 857:fltk-1.3.4-1/src/Fl_Browser.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2342              		.loc 3 857 0
 2343 00df 747F     		je	.L203
 2344 00e1 48892E   		movq	%rbp, (%rsi)
 2345 00e4 EB8A     		jmp	.L199
 2346 00e6 662E0F1F 		.p2align 4,,10
 2346      84000000 
 2346      0000
 2347              		.p2align 3
 2348              	.L206:
 865:fltk-1.3.4-1/src/Fl_Browser.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2349              		.loc 3 865 0
 2350 00f0 4885D2   		testq	%rdx, %rdx
 863:fltk-1.3.4-1/src/Fl_Browser.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 2351              		.loc 3 863 0
 2352 00f3 49899C24 		movq	%rbx, 624(%r12)
 2352      70020000 
 865:fltk-1.3.4-1/src/Fl_Browser.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2353              		.loc 3 865 0
 2354 00fb 0F8556FF 		jne	.L215
 2354      FFFF
 2355              		.p2align 4,,10
 2356 0101 0F1F8000 		.p2align 3
 2356      000000
 2357              	.L208:
 867:fltk-1.3.4-1/src/Fl_Browser.cxx ****  851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 2358              		.loc 3 867 0
 2359 0108 4885C0   		testq	%rax, %rax
 865:fltk-1.3.4-1/src/Fl_Browser.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2360              		.loc 3 865 0
 2361 010b 4989AC24 		movq	%rbp, 616(%r12)
 2361      68020000 
 866:fltk-1.3.4-1/src/Fl_Browser.cxx ****  850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 2362              		.loc 3 866 0
 2363 0113 48897508 		movq	%rsi, 8(%rbp)
 867:fltk-1.3.4-1/src/Fl_Browser.cxx ****  851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 2364              		.loc 3 867 0
 2365 0117 0F854BFF 		jne	.L216
 2365      FFFF
 2366 011d 0F1F00   		.p2align 4,,10
 2367              		.p2align 3
 2368              	.L210:
 2369 0120 49899C24 		movq	%rbx, 616(%r12)
 2369      68020000 
 2370 0128 E93FFFFF 		jmp	.L211
 2370      FF
 2371 012d 0F1F00   		.p2align 4,,10
 2372              		.p2align 3
 2373              	.L204:
 861:fltk-1.3.4-1/src/Fl_Browser.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 2374              		.loc 3 861 0
 2375 0130 4989AC24 		movq	%rbp, 624(%r12)
 2375      70020000 
 2376 0138 E902FFFF 		jmp	.L205
 2376      FF
 2377 013d 0F1F00   		.p2align 4,,10
 2378              		.p2align 3
 2379              	.L196:
 845:fltk-1.3.4-1/src/Fl_Browser.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 2380              		.loc 3 845 0
 2381 0140 4989AC24 		movq	%rbp, 616(%r12)
 2381      68020000 
 2382 0148 E950FFFF 		jmp	.L197
 2382      FF
 2383 014d 0F1F00   		.p2align 4,,10
 2384              		.p2align 3
 2385              	.L198:
 850:fltk-1.3.4-1/src/Fl_Browser.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 2386              		.loc 3 850 0
 2387 0150 49899C24 		movq	%rbx, 624(%r12)
 2387      70020000 
 2388 0158 E913FFFF 		jmp	.L199
 2388      FF
 2389 015d 0F1F00   		.p2align 4,,10
 2390              		.p2align 3
 2391              	.L203:
 857:fltk-1.3.4-1/src/Fl_Browser.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2392              		.loc 3 857 0
 2393 0160 4989AC24 		movq	%rbp, 624(%r12)
 2393      70020000 
 2394 0168 E903FFFF 		jmp	.L199
 2394      FF
 2395 016d 0F1F00   		.p2align 4,,10
 2396              		.p2align 3
 2397              	.L201:
 852:fltk-1.3.4-1/src/Fl_Browser.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 2398              		.loc 3 852 0
 2399 0170 49899C24 		movq	%rbx, 616(%r12)
 2399      68020000 
 2400 0178 E950FFFF 		jmp	.L202
 2400      FF
 2401              		.cfi_endproc
 2402              	.LFE639:
 2404              		.section	.text.unlikely._ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20
 2405              	.LCOLDE17:
 2406              		.section	.text._ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20
 2407              	.LHOTE17:
 2408              		.section	.text.unlikely._ZN10Fl_Browser9item_swapEPvS0_,"axG",@progbits,_ZN10Fl_Browser9item_swapE
 2409              		.align 2
 2410              	.LCOLDB18:
 2411              		.section	.text._ZN10Fl_Browser9item_swapEPvS0_,"axG",@progbits,_ZN10Fl_Browser9item_swapEPvS0_,com
 2412              	.LHOTB18:
 2413              		.align 2
 2414              		.p2align 4,,15
 2415              		.weak	_ZN10Fl_Browser9item_swapEPvS0_
 2417              	_ZN10Fl_Browser9item_swapEPvS0_:
 2418              	.LFB319:
 112:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Return the item at specified \p line.
 2419              		.loc 7 112 0
 2420              		.cfi_startproc
 2421              	.LVL202:
 2422              	.LBB383:
 2423              	.LBB384:
 838:fltk-1.3.4-1/src/Fl_Browser.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 2424              		.loc 3 838 0
 2425 0000 4839D6   		cmpq	%rdx, %rsi
 2426 0003 0F94C1   		sete	%cl
 2427 0006 4885F6   		testq	%rsi, %rsi
 2428 0009 0F94C0   		sete	%al
 2429 000c 08C1     		orb	%al, %cl
 2430 000e 7510     		jne	.L217
 2431 0010 4885D2   		testq	%rdx, %rdx
 2432 0013 740B     		je	.L217
 2433 0015 E9000000 		jmp	_ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20
 2433      00
 2434              	.LVL203:
 2435 001a 660F1F44 		.p2align 4,,10
 2435      0000
 2436              		.p2align 3
 2437              	.L217:
 2438 0020 F3C3     		rep ret
 2439              	.LBE384:
 2440              	.LBE383:
 2441              		.cfi_endproc
 2442              	.LFE319:
 2444              		.section	.text.unlikely._ZN10Fl_Browser9item_swapEPvS0_,"axG",@progbits,_ZN10Fl_Browser9item_swapE
 2445              	.LCOLDE18:
 2446              		.section	.text._ZN10Fl_Browser9item_swapEPvS0_,"axG",@progbits,_ZN10Fl_Browser9item_swapEPvS0_,com
 2447              	.LHOTE18:
 2448              		.section	.text.unlikely._ZNK10Fl_Browser9find_lineEi,"ax",@progbits
 2449              		.align 2
 2450              	.LCOLDB19:
 2451              		.section	.text._ZNK10Fl_Browser9find_lineEi,"ax",@progbits
 2452              	.LHOTB19:
 2453              		.align 2
 2454              		.p2align 4,,15
 2455              		.globl	_ZNK10Fl_Browser9find_lineEi
 2457              	_ZNK10Fl_Browser9find_lineEi:
 2458              	.LFB565:
 147:fltk-1.3.4-1/src/Fl_Browser.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2459              		.loc 3 147 0
 2460              		.cfi_startproc
 2461              	.LVL204:
 149:fltk-1.3.4-1/src/Fl_Browser.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 2462              		.loc 3 149 0
 2463 0000 8B978002 		movl	640(%rdi), %edx
 2463      0000
 2464 0006 39F2     		cmpl	%esi, %edx
 2465 0008 0F84C200 		je	.L246
 2465      0000
 150:fltk-1.3.4-1/src/Fl_Browser.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 2466              		.loc 3 150 0
 2467 000e 85D2     		testl	%edx, %edx
 2468 0010 746E     		je	.L222
 150:fltk-1.3.4-1/src/Fl_Browser.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 2469              		.loc 3 150 0 is_stmt 0 discriminator 1
 2470 0012 89D0     		movl	%edx, %eax
 2471 0014 C1E81F   		shrl	$31, %eax
 2472 0017 01D0     		addl	%edx, %eax
 2473 0019 D1F8     		sarl	%eax
 2474 001b 39C6     		cmpl	%eax, %esi
 2475 001d 7E61     		jle	.L222
 150:fltk-1.3.4-1/src/Fl_Browser.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 2476              		.loc 3 150 0 discriminator 2
 2477 001f 8B8F8402 		movl	644(%rdi), %ecx
 2477      0000
 2478 0025 8D040A   		leal	(%rdx,%rcx), %eax
 2479 0028 4189C0   		movl	%eax, %r8d
 2480 002b 41C1E81F 		shrl	$31, %r8d
 2481 002f 4401C0   		addl	%r8d, %eax
 2482 0032 D1F8     		sarl	%eax
 2483 0034 39C6     		cmpl	%eax, %esi
 2484 0036 0F8DA400 		jge	.L234
 2484      0000
 2485              	.LVL205:
 151:fltk-1.3.4-1/src/Fl_Browser.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2486              		.loc 3 151 0 is_stmt 1
 2487 003c 488B8778 		movq	632(%rdi), %rax
 2487      020000
 2488              	.LVL206:
 157:fltk-1.3.4-1/src/Fl_Browser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 2489              		.loc 3 157 0
 2490 0043 4885C0   		testq	%rax, %rax
 2491 0046 0F94C1   		sete	%cl
 2492 0049 39D6     		cmpl	%edx, %esi
 2493 004b 7F53     		jg	.L245
 2494 004d 0F1F00   		.p2align 4,,10
 2495              		.p2align 3
 2496              	.L230:
 158:fltk-1.3.4-1/src/Fl_Browser.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2497              		.loc 3 158 0 discriminator 2
 2498 0050 39D6     		cmpl	%edx, %esi
 2499 0052 7D1B     		jge	.L228
 2500 0054 84C9     		testb	%cl, %cl
 2501 0056 740D     		je	.L232
 2502 0058 EB15     		jmp	.L228
 2503 005a 660F1F44 		.p2align 4,,10
 2503      0000
 2504              		.p2align 3
 2505              	.L247:
 158:fltk-1.3.4-1/src/Fl_Browser.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2506              		.loc 3 158 0 is_stmt 0 discriminator 1
 2507 0060 4885C0   		testq	%rax, %rax
 2508 0063 740A     		je	.L228
 2509              	.L232:
 2510 0065 83EA01   		subl	$1, %edx
 2511              	.LVL207:
 2512 0068 488B00   		movq	(%rax), %rax
 2513              	.LVL208:
 2514 006b 39D6     		cmpl	%edx, %esi
 2515 006d 7CF1     		jl	.L247
 2516              	.L228:
 159:fltk-1.3.4-1/src/Fl_Browser.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 2517              		.loc 3 159 0 is_stmt 1
 2518 006f 89B78002 		movl	%esi, 640(%rdi)
 2518      0000
 160:fltk-1.3.4-1/src/Fl_Browser.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2519              		.loc 3 160 0
 2520 0075 48898778 		movq	%rax, 632(%rdi)
 2520      020000
 162:fltk-1.3.4-1/src/Fl_Browser.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 2521              		.loc 3 162 0
 2522 007c C3       		ret
 2523              	.LVL209:
 2524 007d 0F1F00   		.p2align 4,,10
 2525              		.p2align 3
 2526              	.L222:
 2527 0080 8B978402 		movl	644(%rdi), %edx
 2527      0000
 2528              	.L223:
 152:fltk-1.3.4-1/src/Fl_Browser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 2529              		.loc 3 152 0
 2530 0086 89D0     		movl	%edx, %eax
 2531 0088 C1E81F   		shrl	$31, %eax
 2532 008b 01D0     		addl	%edx, %eax
 2533 008d D1F8     		sarl	%eax
 2534 008f 39C6     		cmpl	%eax, %esi
 2535 0091 7E2D     		jle	.L248
 2536              	.LVL210:
 155:fltk-1.3.4-1/src/Fl_Browser.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 2537              		.loc 3 155 0
 2538 0093 488B8770 		movq	624(%rdi), %rax
 2538      020000
 2539              	.LVL211:
 2540 009a EB0F     		jmp	.L244
 2541 009c 0F1F4000 		.p2align 4,,10
 2542              		.p2align 3
 2543              	.L245:
 157:fltk-1.3.4-1/src/Fl_Browser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 2544              		.loc 3 157 0 discriminator 2
 2545 00a0 84C9     		testb	%cl, %cl
 2546 00a2 75AC     		jne	.L230
 157:fltk-1.3.4-1/src/Fl_Browser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 2547              		.loc 3 157 0 is_stmt 0 discriminator 1
 2548 00a4 488B4008 		movq	8(%rax), %rax
 2549              	.LVL212:
 2550 00a8 83C201   		addl	$1, %edx
 2551              	.LVL213:
 2552              	.L244:
 2553 00ab 4885C0   		testq	%rax, %rax
 2554 00ae 0F94C1   		sete	%cl
 2555 00b1 39D6     		cmpl	%edx, %esi
 2556 00b3 7FEB     		jg	.L245
 2557 00b5 EB99     		jmp	.L230
 2558              	.LVL214:
 2559 00b7 660F1F84 		.p2align 4,,10
 2559      00000000 
 2559      00
 2560              		.p2align 3
 2561              	.L248:
 153:fltk-1.3.4-1/src/Fl_Browser.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2562              		.loc 3 153 0 is_stmt 1
 2563 00c0 488B8768 		movq	616(%rdi), %rax
 2563      020000
 2564              	.LVL215:
 2565 00c7 BA010000 		movl	$1, %edx
 2565      00
 2566 00cc EBDD     		jmp	.L244
 2567              	.LVL216:
 2568 00ce 6690     		.p2align 4,,10
 2569              		.p2align 3
 2570              	.L246:
 149:fltk-1.3.4-1/src/Fl_Browser.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 2571              		.loc 3 149 0 discriminator 1
 2572 00d0 488B8778 		movq	632(%rdi), %rax
 2572      020000
 2573 00d7 C3       		ret
 2574 00d8 0F1F8400 		.p2align 4,,10
 2574      00000000 
 2575              		.p2align 3
 2576              	.L234:
 2577 00e0 89CA     		movl	%ecx, %edx
 2578 00e2 EBA2     		jmp	.L223
 2579              		.cfi_endproc
 2580              	.LFE565:
 2582              		.section	.text.unlikely._ZNK10Fl_Browser9find_lineEi
 2583              	.LCOLDE19:
 2584              		.section	.text._ZNK10Fl_Browser9find_lineEi
 2585              	.LHOTE19:
 2586              		.section	.text.unlikely._ZNK10Fl_Browser7item_atEi,"axG",@progbits,_ZNK10Fl_Browser7item_atEi,comd
 2587              		.align 2
 2588              	.LCOLDB20:
 2589              		.section	.text._ZNK10Fl_Browser7item_atEi,"axG",@progbits,_ZNK10Fl_Browser7item_atEi,comdat
 2590              	.LHOTB20:
 2591              		.align 2
 2592              		.p2align 4,,15
 2593              		.weak	_ZNK10Fl_Browser7item_atEi
 2595              	_ZNK10Fl_Browser7item_atEi:
 2596              	.LFB320:
 118:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 2597              		.loc 7 118 0
 2598              		.cfi_startproc
 2599              	.LVL217:
 118:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 2600              		.loc 7 118 0
 2601 0000 E9000000 		jmp	_ZNK10Fl_Browser9find_lineEi
 2601      00
 2602              	.LVL218:
 2603              		.cfi_endproc
 2604              	.LFE320:
 2606              		.section	.text.unlikely._ZNK10Fl_Browser7item_atEi,"axG",@progbits,_ZNK10Fl_Browser7item_atEi,comd
 2607              	.LCOLDE20:
 2608              		.section	.text._ZNK10Fl_Browser7item_atEi,"axG",@progbits,_ZNK10Fl_Browser7item_atEi,comdat
 2609              	.LHOTE20:
 2610              		.section	.text.unlikely._ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18,"ax",@progbits
 2611              		.align 2
 2612              	.LCOLDB21:
 2613              		.section	.text._ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18,"ax",@progbits
 2614              	.LHOTB21:
 2615              		.align 2
 2616              		.p2align 4,,15
 2618              	_ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18:
 2619              	.LFB641:
 874:fltk-1.3.4-1/src/Fl_Browser.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 875:fltk-1.3.4-1/src/Fl_Browser.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 876:fltk-1.3.4-1/src/Fl_Browser.cxx ****  859:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 877:fltk-1.3.4-1/src/Fl_Browser.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 878:fltk-1.3.4-1/src/Fl_Browser.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 879:fltk-1.3.4-1/src/Fl_Browser.cxx ****  862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 880:fltk-1.3.4-1/src/Fl_Browser.cxx ****  863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 881:fltk-1.3.4-1/src/Fl_Browser.cxx ****  864:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with ar
 882:fltk-1.3.4-1/src/Fl_Browser.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 883:fltk-1.3.4-1/src/Fl_Browser.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 884:fltk-1.3.4-1/src/Fl_Browser.cxx ****  867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 885:fltk-1.3.4-1/src/Fl_Browser.cxx ****  868:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 886:fltk-1.3.4-1/src/Fl_Browser.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 887:fltk-1.3.4-1/src/Fl_Browser.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 888:fltk-1.3.4-1/src/Fl_Browser.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 889:fltk-1.3.4-1/src/Fl_Browser.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 890:fltk-1.3.4-1/src/Fl_Browser.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 891:fltk-1.3.4-1/src/Fl_Browser.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 892:fltk-1.3.4-1/src/Fl_Browser.cxx ****  875:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 893:fltk-1.3.4-1/src/Fl_Browser.cxx ****  876:fltk-1.3.4-1/FL/Fl_Widget.H ****   int test_shortcut();
 894:fltk-1.3.4-1/src/Fl_Browser.cxx ****  877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 895:fltk-1.3.4-1/src/Fl_Browser.cxx ****  878:fltk-1.3.4-1/FL/Fl_Widget.H ****   static unsigned int label_shortcut(const char *t);
 896:fltk-1.3.4-1/src/Fl_Browser.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 2620              		.loc 3 896 0
 2621              		.cfi_startproc
 2622              	.LVL219:
 2623 0000 4155     		pushq	%r13
 2624              		.cfi_def_cfa_offset 16
 2625              		.cfi_offset 13, -16
 2626 0002 4154     		pushq	%r12
 2627              		.cfi_def_cfa_offset 24
 2628              		.cfi_offset 12, -24
 2629 0004 4989D5   		movq	%rdx, %r13
 2630 0007 55       		pushq	%rbp
 2631              		.cfi_def_cfa_offset 32
 2632              		.cfi_offset 6, -32
 2633 0008 53       		pushq	%rbx
 2634              		.cfi_def_cfa_offset 40
 2635              		.cfi_offset 3, -40
 2636 0009 4889FB   		movq	%rdi, %rbx
 2637 000c 4883EC08 		subq	$8, %rsp
 2638              		.cfi_def_cfa_offset 48
 897:fltk-1.3.4-1/src/Fl_Browser.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 898:fltk-1.3.4-1/src/Fl_Browser.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 899:fltk-1.3.4-1/src/Fl_Browser.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 900:fltk-1.3.4-1/src/Fl_Browser.cxx ****  883:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _clear_fullscreen() {flags_ &= ~FULLSCREEN;}
 2639              		.loc 3 900 0
 2640 0010 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 2640      00
 2641              	.LVL220:
 2642 0015 4889C5   		movq	%rax, %rbp
 2643              	.LVL221:
 901:fltk-1.3.4-1/src/Fl_Browser.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 902:fltk-1.3.4-1/src/Fl_Browser.cxx ****  885:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if w is a child of this widget.
 2644              		.loc 3 902 0
 2645 0018 488B4018 		movq	24(%rax), %rax
 2646              	.LVL222:
 2647 001c 4885C0   		testq	%rax, %rax
 2648 001f 747F     		je	.L255
 2649              	.LVL223:
 2650 0021 8B400C   		movl	12(%rax), %eax
 2651              	.LVL224:
 2652 0024 448D6002 		leal	2(%rax), %r12d
 2653              	.LVL225:
 2654              	.L251:
 903:fltk-1.3.4-1/src/Fl_Browser.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 2655              		.loc 3 903 0
 2656 0028 48C74518 		movq	$0, 24(%rbp)
 2656      00000000 
 904:fltk-1.3.4-1/src/Fl_Browser.cxx ****  887:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return Returns 1 if \p w is a child of this widget, or
 2657              		.loc 3 904 0
 2658 0030 488B03   		movq	(%rbx), %rax
 2659 0033 4889EE   		movq	%rbp, %rsi
 2660 0036 4889DF   		movq	%rbx, %rdi
 2661 0039 FF5070   		call	*112(%rax)
 2662              	.LVL226:
 905:fltk-1.3.4-1/src/Fl_Browser.cxx ****  888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 2663              		.loc 3 905 0
 2664 003c 4D85ED   		testq	%r13, %r13
 2665 003f 7457     		je	.L256
 2666              	.LVL227:
 2667 0041 418B550C 		movl	12(%r13), %edx
 2668 0045 8D4A02   		leal	2(%rdx), %ecx
 2669              	.LVL228:
 2670              	.L252:
 906:fltk-1.3.4-1/src/Fl_Browser.cxx ****  889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 907:fltk-1.3.4-1/src/Fl_Browser.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 908:fltk-1.3.4-1/src/Fl_Browser.cxx ****  891:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2671              		.loc 3 908 0
 2672 0048 39C8     		cmpl	%ecx, %eax
 2673 004a 0F4DC8   		cmovge	%eax, %ecx
 2674              	.LVL229:
 2675 004d 4439E0   		cmpl	%r12d, %eax
 2676 0050 410F4CC4 		cmovl	%r12d, %eax
 2677              	.LVL230:
 2678 0054 29C1     		subl	%eax, %ecx
 2679              	.LVL231:
 909:fltk-1.3.4-1/src/Fl_Browser.cxx ****  892:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if this widget is a child of \p wgt.
 2680              		.loc 3 909 0
 2681 0056 018B8802 		addl	%ecx, 648(%rbx)
 2681      0000
 910:fltk-1.3.4-1/src/Fl_Browser.cxx ****  893:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns 1 if this widget is a child of \p wgt, or is
 911:fltk-1.3.4-1/src/Fl_Browser.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 2682              		.loc 3 911 0
 2683 005c 4C896D18 		movq	%r13, 24(%rbp)
 912:fltk-1.3.4-1/src/Fl_Browser.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 2684              		.loc 3 912 0
 2685 0060 85C9     		testl	%ecx, %ecx
 2686 0062 7E24     		jle	.L253
 913:fltk-1.3.4-1/src/Fl_Browser.cxx ****  896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 2687              		.loc 3 913 0
 2688 0064 4889DF   		movq	%rbx, %rdi
 2689 0067 E8000000 		call	_ZN9Fl_Widget6redrawEv
 2689      00
 2690              	.LVL232:
 2691              	.L254:
 914:fltk-1.3.4-1/src/Fl_Browser.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 915:fltk-1.3.4-1/src/Fl_Browser.cxx ****  898:fltk-1.3.4-1/FL/Fl_Widget.H ****   int inside(const Fl_Widget* wgt) const {return wgt ? wgt->c
 916:fltk-1.3.4-1/src/Fl_Browser.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 917:fltk-1.3.4-1/src/Fl_Browser.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 918:fltk-1.3.4-1/src/Fl_Browser.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 2692              		.loc 3 918 0
 2693 006c 4883C408 		addq	$8, %rsp
 2694              		.cfi_remember_state
 2695              		.cfi_def_cfa_offset 40
 917:fltk-1.3.4-1/src/Fl_Browser.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 2696              		.loc 3 917 0
 2697 0070 4889EA   		movq	%rbp, %rdx
 2698 0073 4889EE   		movq	%rbp, %rsi
 2699 0076 4889DF   		movq	%rbx, %rdi
 2700              		.loc 3 918 0
 2701 0079 5B       		popq	%rbx
 2702              		.cfi_def_cfa_offset 32
 2703              	.LVL233:
 2704 007a 5D       		popq	%rbp
 2705              		.cfi_def_cfa_offset 24
 2706              	.LVL234:
 2707 007b 415C     		popq	%r12
 2708              		.cfi_def_cfa_offset 16
 2709 007d 415D     		popq	%r13
 2710              		.cfi_def_cfa_offset 8
 2711              	.LVL235:
 917:fltk-1.3.4-1/src/Fl_Browser.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 2712              		.loc 3 917 0
 2713 007f E9000000 		jmp	_ZN11Fl_Browser_9replacingEPvS0_
 2713      00
 2714              	.LVL236:
 2715              		.p2align 4,,10
 2716 0084 0F1F4000 		.p2align 3
 2717              	.L253:
 2718              		.cfi_restore_state
 915:fltk-1.3.4-1/src/Fl_Browser.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2719              		.loc 3 915 0
 2720 0088 4889EE   		movq	%rbp, %rsi
 2721 008b 4889DF   		movq	%rbx, %rdi
 2722 008e E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 2722      00
 2723              	.LVL237:
 2724 0093 EBD7     		jmp	.L254
 2725              	.LVL238:
 2726              		.p2align 4,,10
 2727 0095 0F1F00   		.p2align 3
 2728              	.L256:
 905:fltk-1.3.4-1/src/Fl_Browser.cxx ****  889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2729              		.loc 3 905 0
 2730 0098 31C9     		xorl	%ecx, %ecx
 2731 009a EBAC     		jmp	.L252
 2732              	.LVL239:
 2733 009c 0F1F4000 		.p2align 4,,10
 2734              		.p2align 3
 2735              	.L255:
 902:fltk-1.3.4-1/src/Fl_Browser.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 2736              		.loc 3 902 0
 2737 00a0 4531E4   		xorl	%r12d, %r12d
 2738 00a3 EB83     		jmp	.L251
 2739              		.cfi_endproc
 2740              	.LFE641:
 2742              		.section	.text.unlikely._ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18
 2743              	.LCOLDE21:
 2744              		.section	.text._ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18
 2745              	.LHOTE21:
 2746              		.section	.text.unlikely._ZNK10Fl_Browser6linenoEPv,"ax",@progbits
 2747              		.align 2
 2748              	.LCOLDB22:
 2749              		.section	.text._ZNK10Fl_Browser6linenoEPv,"ax",@progbits
 2750              	.LHOTB22:
 2751              		.align 2
 2752              		.p2align 4,,15
 2753              		.globl	_ZNK10Fl_Browser6linenoEPv
 2755              	_ZNK10Fl_Browser6linenoEPv:
 2756              	.LFB566:
 171:fltk-1.3.4-1/src/Fl_Browser.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 2757              		.loc 3 171 0
 2758              		.cfi_startproc
 2759              	.LVL240:
 173:fltk-1.3.4-1/src/Fl_Browser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 2760              		.loc 3 173 0
 2761 0000 4885F6   		testq	%rsi, %rsi
 2762 0003 0F84BF00 		je	.L271
 2762      0000
 174:fltk-1.3.4-1/src/Fl_Browser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 2763              		.loc 3 174 0
 2764 0009 488B8F78 		movq	632(%rdi), %rcx
 2764      020000
 2765 0010 4839CE   		cmpq	%rcx, %rsi
 2766 0013 0F84DF00 		je	.L278
 2766      0000
 175:fltk-1.3.4-1/src/Fl_Browser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 2767              		.loc 3 175 0
 2768 0019 488B8768 		movq	616(%rdi), %rax
 2768      020000
 2769 0020 4839C6   		cmpq	%rax, %rsi
 2770 0023 0F84D700 		je	.L272
 2770      0000
 176:fltk-1.3.4-1/src/Fl_Browser.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 2771              		.loc 3 176 0
 2772 0029 483BB770 		cmpq	624(%rdi), %rsi
 2772      020000
 2773 0030 0F84DA00 		je	.L279
 2773      0000
 177:fltk-1.3.4-1/src/Fl_Browser.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 2774              		.loc 3 177 0
 2775 0036 4885C9   		testq	%rcx, %rcx
 2776 0039 0F849100 		je	.L262
 2776      0000
 2777 003f 8B878002 		movl	640(%rdi), %eax
 2777      0000
 2778 0045 448D4001 		leal	1(%rax), %r8d
 2779 0049 83E801   		subl	$1, %eax
 2780              	.L263:
 2781              	.LVL241:
 2782              	.LBB387:
 2783              	.LBB388:
 182:fltk-1.3.4-1/src/Fl_Browser.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 2784              		.loc 3 182 0
 2785 004c 488B11   		movq	(%rcx), %rdx
 2786              	.LVL242:
 184:fltk-1.3.4-1/src/Fl_Browser.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 2787              		.loc 3 184 0
 2788 004f 488B4908 		movq	8(%rcx), %rcx
 2789              	.LVL243:
 188:fltk-1.3.4-1/src/Fl_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 2790              		.loc 3 188 0
 2791 0053 4839D6   		cmpq	%rdx, %rsi
 2792 0056 742A     		je	.L264
 2793              	.LVL244:
 2794 0058 0F1F8400 		.p2align 4,,10
 2794      00000000 
 2795              		.p2align 3
 2796              	.L268:
 189:fltk-1.3.4-1/src/Fl_Browser.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 2797              		.loc 3 189 0
 2798 0060 4839CE   		cmpq	%rcx, %rsi
 2799 0063 743D     		je	.L274
 2800              	.LVL245:
 2801              	.L265:
 190:fltk-1.3.4-1/src/Fl_Browser.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 2802              		.loc 3 190 0
 2803 0065 4885D2   		testq	%rdx, %rdx
 2804 0068 7426     		je	.L266
 2805 006a 83E801   		subl	$1, %eax
 2806              	.LVL246:
 191:fltk-1.3.4-1/src/Fl_Browser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 2807              		.loc 3 191 0
 2808 006d 4885C9   		testq	%rcx, %rcx
 190:fltk-1.3.4-1/src/Fl_Browser.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 2809              		.loc 3 190 0
 2810 0070 488B12   		movq	(%rdx), %rdx
 2811              	.LVL247:
 191:fltk-1.3.4-1/src/Fl_Browser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 2812              		.loc 3 191 0
 2813 0073 7443     		je	.L267
 2814 0075 4183C001 		addl	$1, %r8d
 2815              	.LVL248:
 188:fltk-1.3.4-1/src/Fl_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 2816              		.loc 3 188 0
 2817 0079 4839D6   		cmpq	%rdx, %rsi
 191:fltk-1.3.4-1/src/Fl_Browser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 2818              		.loc 3 191 0
 2819 007c 488B4908 		movq	8(%rcx), %rcx
 2820              	.LVL249:
 188:fltk-1.3.4-1/src/Fl_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 2821              		.loc 3 188 0
 2822 0080 75DE     		jne	.L268
 2823              	.LVL250:
 2824              	.L264:
 193:fltk-1.3.4-1/src/Fl_Browser.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 2825              		.loc 3 193 0
 2826 0082 4889B778 		movq	%rsi, 632(%rdi)
 2826      020000
 194:fltk-1.3.4-1/src/Fl_Browser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 2827              		.loc 3 194 0
 2828 0089 89878002 		movl	%eax, 640(%rdi)
 2828      0000
 2829              	.LVL251:
 2830 008f C3       		ret
 2831              	.LVL252:
 2832              		.p2align 4,,10
 2833              		.p2align 3
 2834              	.L266:
 191:fltk-1.3.4-1/src/Fl_Browser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 2835              		.loc 3 191 0
 2836 0090 4885C9   		testq	%rcx, %rcx
 2837 0093 742A     		je	.L276
 2838 0095 488B4908 		movq	8(%rcx), %rcx
 2839              	.LVL253:
 2840 0099 4183C001 		addl	$1, %r8d
 2841              	.LVL254:
 189:fltk-1.3.4-1/src/Fl_Browser.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 2842              		.loc 3 189 0
 2843 009d 4839CE   		cmpq	%rcx, %rsi
 2844 00a0 75C3     		jne	.L265
 2845              	.L274:
 2846 00a2 4489C0   		movl	%r8d, %eax
 2847              	.LVL255:
 193:fltk-1.3.4-1/src/Fl_Browser.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 2848              		.loc 3 193 0
 2849 00a5 4889B778 		movq	%rsi, 632(%rdi)
 2849      020000
 194:fltk-1.3.4-1/src/Fl_Browser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 2850              		.loc 3 194 0
 2851 00ac 89878002 		movl	%eax, 640(%rdi)
 2851      0000
 2852              	.LVL256:
 2853 00b2 C3       		ret
 2854              	.LVL257:
 2855              		.p2align 4,,10
 2856 00b3 0F1F4400 		.p2align 3
 2856      00
 2857              	.L267:
 188:fltk-1.3.4-1/src/Fl_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 2858              		.loc 3 188 0
 2859 00b8 4839D6   		cmpq	%rdx, %rsi
 2860 00bb 75A8     		jne	.L265
 2861 00bd EBC3     		jmp	.L264
 2862              	.LVL258:
 2863              	.L276:
 2864 00bf EBFE     		jmp	.L276
 2865              	.LVL259:
 2866              		.p2align 4,,10
 2867 00c1 0F1F8000 		.p2align 3
 2867      000000
 2868              	.L271:
 2869              	.LBE388:
 2870              	.LBE387:
 173:fltk-1.3.4-1/src/Fl_Browser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 2871              		.loc 3 173 0
 2872 00c8 31C0     		xorl	%eax, %eax
 2873 00ca C3       		ret
 2874 00cb 0F1F4400 		.p2align 4,,10
 2874      00
 2875              		.p2align 3
 2876              	.L262:
 178:fltk-1.3.4-1/src/Fl_Browser.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 2877              		.loc 3 178 0
 2878 00d0 48898778 		movq	%rax, 632(%rdi)
 2878      020000
 2879 00d7 4889C1   		movq	%rax, %rcx
 179:fltk-1.3.4-1/src/Fl_Browser.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 2880              		.loc 3 179 0
 2881 00da C7878002 		movl	$1, 640(%rdi)
 2881      00000100 
 2881      0000
 2882 00e4 41B80200 		movl	$2, %r8d
 2882      0000
 2883 00ea 31C0     		xorl	%eax, %eax
 2884 00ec E95BFFFF 		jmp	.L263
 2884      FF
 2885              		.p2align 4,,10
 2886 00f1 0F1F8000 		.p2align 3
 2886      000000
 2887              	.L278:
 174:fltk-1.3.4-1/src/Fl_Browser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 2888              		.loc 3 174 0 discriminator 1
 2889 00f8 8B878002 		movl	640(%rdi), %eax
 2889      0000
 2890 00fe C3       		ret
 2891 00ff 90       		.p2align 4,,10
 2892              		.p2align 3
 2893              	.L272:
 175:fltk-1.3.4-1/src/Fl_Browser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 2894              		.loc 3 175 0
 2895 0100 B8010000 		movl	$1, %eax
 2895      00
 2896 0105 C3       		ret
 2897 0106 662E0F1F 		.p2align 4,,10
 2897      84000000 
 2897      0000
 2898              		.p2align 3
 2899              	.L279:
 176:fltk-1.3.4-1/src/Fl_Browser.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 2900              		.loc 3 176 0 discriminator 1
 2901 0110 8B878402 		movl	644(%rdi), %eax
 2901      0000
 2902 0116 C3       		ret
 2903              		.cfi_endproc
 2904              	.LFE566:
 2906              		.section	.text.unlikely._ZNK10Fl_Browser6linenoEPv
 2907              	.LCOLDE22:
 2908              		.section	.text._ZNK10Fl_Browser6linenoEPv
 2909              	.LHOTE22:
 2910              		.section	.text.unlikely._ZN10Fl_Browser7_removeEi,"ax",@progbits
 2911              		.align 2
 2912              	.LCOLDB23:
 2913              		.section	.text._ZN10Fl_Browser7_removeEi,"ax",@progbits
 2914              	.LHOTB23:
 2915              		.align 2
 2916              		.p2align 4,,15
 2917              		.globl	_ZN10Fl_Browser7_removeEi
 2919              	_ZN10Fl_Browser7_removeEi:
 2920              	.LFB567:
 206:fltk-1.3.4-1/src/Fl_Browser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2921              		.loc 3 206 0
 2922              		.cfi_startproc
 2923              	.LVL260:
 2924 0000 4154     		pushq	%r12
 2925              		.cfi_def_cfa_offset 16
 2926              		.cfi_offset 12, -16
 2927 0002 55       		pushq	%rbp
 2928              		.cfi_def_cfa_offset 24
 2929              		.cfi_offset 6, -24
 2930 0003 4189F4   		movl	%esi, %r12d
 2931 0006 53       		pushq	%rbx
 2932              		.cfi_def_cfa_offset 32
 2933              		.cfi_offset 3, -32
 210:fltk-1.3.4-1/src/Fl_Browser.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 2934              		.loc 3 210 0
 2935 0007 4183EC01 		subl	$1, %r12d
 206:fltk-1.3.4-1/src/Fl_Browser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2936              		.loc 3 206 0
 2937 000b 4889FB   		movq	%rdi, %rbx
 207:fltk-1.3.4-1/src/Fl_Browser.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 2938              		.loc 3 207 0
 2939 000e E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 2939      00
 2940              	.LVL261:
 2941 0013 4889C5   		movq	%rax, %rbp
 2942              	.LVL262:
 208:fltk-1.3.4-1/src/Fl_Browser.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2943              		.loc 3 208 0
 2944 0016 4889C6   		movq	%rax, %rsi
 2945 0019 E8000000 		call	_ZN11Fl_Browser_8deletingEPv
 2945      00
 2946              	.LVL263:
 210:fltk-1.3.4-1/src/Fl_Browser.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 2947              		.loc 3 210 0
 2948 001e 4489A380 		movl	%r12d, 640(%rbx)
 2948      020000
 211:fltk-1.3.4-1/src/Fl_Browser.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2949              		.loc 3 211 0
 2950 0025 488B4500 		movq	0(%rbp), %rax
 213:fltk-1.3.4-1/src/Fl_Browser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2951              		.loc 3 213 0
 2952 0029 4889EE   		movq	%rbp, %rsi
 212:fltk-1.3.4-1/src/Fl_Browser.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 2953              		.loc 3 212 0
 2954 002c 83AB8402 		subl	$1, 644(%rbx)
 2954      000001
 213:fltk-1.3.4-1/src/Fl_Browser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2955              		.loc 3 213 0
 2956 0033 4889DF   		movq	%rbx, %rdi
 211:fltk-1.3.4-1/src/Fl_Browser.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2957              		.loc 3 211 0
 2958 0036 48898378 		movq	%rax, 632(%rbx)
 2958      020000
 213:fltk-1.3.4-1/src/Fl_Browser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2959              		.loc 3 213 0
 2960 003d 488B03   		movq	(%rbx), %rax
 2961 0040 FF5070   		call	*112(%rax)
 2962              	.LVL264:
 2963 0043 29838802 		subl	%eax, 648(%rbx)
 2963      0000
 214:fltk-1.3.4-1/src/Fl_Browser.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2964              		.loc 3 214 0
 2965 0049 488B4500 		movq	0(%rbp), %rax
 2966 004d 4885C0   		testq	%rax, %rax
 2967 0050 743E     		je	.L281
 214:fltk-1.3.4-1/src/Fl_Browser.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2968              		.loc 3 214 0 is_stmt 0 discriminator 1
 2969 0052 488B5508 		movq	8(%rbp), %rdx
 2970 0056 48895008 		movq	%rdx, 8(%rax)
 2971              	.L282:
 216:fltk-1.3.4-1/src/Fl_Browser.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2972              		.loc 3 216 0 is_stmt 1
 2973 005a 488B4508 		movq	8(%rbp), %rax
 2974 005e 4885C0   		testq	%rax, %rax
 2975 0061 7415     		je	.L283
 216:fltk-1.3.4-1/src/Fl_Browser.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2976              		.loc 3 216 0 is_stmt 0 discriminator 1
 2977 0063 488B5500 		movq	0(%rbp), %rdx
 2978 0067 488910   		movq	%rdx, (%rax)
 220:fltk-1.3.4-1/src/Fl_Browser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 2979              		.loc 3 220 0 is_stmt 1 discriminator 1
 2980 006a 4889E8   		movq	%rbp, %rax
 2981 006d 5B       		popq	%rbx
 2982              		.cfi_remember_state
 2983              		.cfi_def_cfa_offset 24
 2984              	.LVL265:
 2985 006e 5D       		popq	%rbp
 2986              		.cfi_def_cfa_offset 16
 2987              	.LVL266:
 2988 006f 415C     		popq	%r12
 2989              		.cfi_def_cfa_offset 8
 2990              	.LVL267:
 2991 0071 C3       		ret
 2992              	.LVL268:
 2993              		.p2align 4,,10
 2994 0072 660F1F44 		.p2align 3
 2994      0000
 2995              	.L283:
 2996              		.cfi_restore_state
 217:fltk-1.3.4-1/src/Fl_Browser.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 2997              		.loc 3 217 0
 2998 0078 488B4500 		movq	0(%rbp), %rax
 2999 007c 48898370 		movq	%rax, 624(%rbx)
 2999      020000
 220:fltk-1.3.4-1/src/Fl_Browser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 3000              		.loc 3 220 0
 3001 0083 4889E8   		movq	%rbp, %rax
 3002 0086 5B       		popq	%rbx
 3003              		.cfi_remember_state
 3004              		.cfi_def_cfa_offset 24
 3005              	.LVL269:
 3006 0087 5D       		popq	%rbp
 3007              		.cfi_def_cfa_offset 16
 3008              	.LVL270:
 3009 0088 415C     		popq	%r12
 3010              		.cfi_def_cfa_offset 8
 3011 008a C3       		ret
 3012              	.LVL271:
 3013 008b 0F1F4400 		.p2align 4,,10
 3013      00
 3014              		.p2align 3
 3015              	.L281:
 3016              		.cfi_restore_state
 215:fltk-1.3.4-1/src/Fl_Browser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 3017              		.loc 3 215 0
 3018 0090 488B4508 		movq	8(%rbp), %rax
 3019 0094 48898368 		movq	%rax, 616(%rbx)
 3019      020000
 3020 009b EBBD     		jmp	.L282
 3021              		.cfi_endproc
 3022              	.LFE567:
 3024              		.section	.text.unlikely._ZN10Fl_Browser7_removeEi
 3025              	.LCOLDE23:
 3026              		.section	.text._ZN10Fl_Browser7_removeEi
 3027              	.LHOTE23:
 3028              		.section	.text.unlikely._ZN10Fl_Browser6removeEi,"ax",@progbits
 3029              		.align 2
 3030              	.LCOLDB24:
 3031              		.section	.text._ZN10Fl_Browser6removeEi,"ax",@progbits
 3032              	.LHOTB24:
 3033              		.align 2
 3034              		.p2align 4,,15
 3035              		.globl	_ZN10Fl_Browser6removeEi
 3037              	_ZN10Fl_Browser6removeEi:
 3038              	.LFB568:
 229:fltk-1.3.4-1/src/Fl_Browser.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3039              		.loc 3 229 0
 3040              		.cfi_startproc
 3041              	.LVL272:
 230:fltk-1.3.4-1/src/Fl_Browser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 3042              		.loc 3 230 0
 3043 0000 85F6     		testl	%esi, %esi
 3044 0002 7E08     		jle	.L289
 230:fltk-1.3.4-1/src/Fl_Browser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 3045              		.loc 3 230 0 is_stmt 0 discriminator 1
 3046 0004 3BB78402 		cmpl	644(%rdi), %esi
 3046      0000
 3047 000a 7E04     		jle	.L290
 3048              	.L289:
 3049 000c F3C3     		rep ret
 3050 000e 6690     		.p2align 4,,10
 3051              		.p2align 3
 3052              	.L290:
 229:fltk-1.3.4-1/src/Fl_Browser.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3053              		.loc 3 229 0 is_stmt 1
 3054 0010 4883EC08 		subq	$8, %rsp
 3055              		.cfi_def_cfa_offset 16
 231:fltk-1.3.4-1/src/Fl_Browser.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 3056              		.loc 3 231 0
 3057 0014 E8000000 		call	_ZN10Fl_Browser7_removeEi
 3057      00
 3058              	.LVL273:
 232:fltk-1.3.4-1/src/Fl_Browser.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 3059              		.loc 3 232 0
 3060 0019 4883C408 		addq	$8, %rsp
 3061              		.cfi_def_cfa_offset 8
 231:fltk-1.3.4-1/src/Fl_Browser.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 3062              		.loc 3 231 0
 3063 001d 4889C7   		movq	%rax, %rdi
 3064 0020 E9000000 		jmp	free
 3064      00
 3065              	.LVL274:
 3066              		.cfi_endproc
 3067              	.LFE568:
 3069              		.section	.text.unlikely._ZN10Fl_Browser6removeEi
 3070              	.LCOLDE24:
 3071              		.section	.text._ZN10Fl_Browser6removeEi
 3072              	.LHOTE24:
 3073              		.section	.text.unlikely._ZN10Fl_Browser6insertEiP8FL_BLINE,"ax",@progbits
 3074              		.align 2
 3075              	.LCOLDB25:
 3076              		.section	.text._ZN10Fl_Browser6insertEiP8FL_BLINE,"ax",@progbits
 3077              	.LHOTB25:
 3078              		.align 2
 3079              		.p2align 4,,15
 3080              		.globl	_ZN10Fl_Browser6insertEiP8FL_BLINE
 3082              	_ZN10Fl_Browser6insertEiP8FL_BLINE:
 3083              	.LFB569:
 243:fltk-1.3.4-1/src/Fl_Browser.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3084              		.loc 3 243 0
 3085              		.cfi_startproc
 3086              	.LVL275:
 3087 0000 4155     		pushq	%r13
 3088              		.cfi_def_cfa_offset 16
 3089              		.cfi_offset 13, -16
 3090 0002 4154     		pushq	%r12
 3091              		.cfi_def_cfa_offset 24
 3092              		.cfi_offset 12, -24
 3093 0004 4189F4   		movl	%esi, %r12d
 3094 0007 55       		pushq	%rbp
 3095              		.cfi_def_cfa_offset 32
 3096              		.cfi_offset 6, -32
 3097 0008 53       		pushq	%rbx
 3098              		.cfi_def_cfa_offset 40
 3099              		.cfi_offset 3, -40
 3100 0009 4889D5   		movq	%rdx, %rbp
 3101 000c 4889FB   		movq	%rdi, %rbx
 3102 000f 4883EC08 		subq	$8, %rsp
 3103              		.cfi_def_cfa_offset 48
 3104              	.LBB389:
 244:fltk-1.3.4-1/src/Fl_Browser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 3105              		.loc 3 244 0
 3106 0013 488BB768 		movq	616(%rdi), %rsi
 3106      020000
 3107              	.LVL276:
 3108 001a 4885F6   		testq	%rsi, %rsi
 3109 001d 0F849D00 		je	.L297
 3109      0000
 3110              	.LBB390:
 247:fltk-1.3.4-1/src/Fl_Browser.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3111              		.loc 3 247 0
 3112 0023 4183FC01 		cmpl	$1, %r12d
 3113 0027 0F8EBB00 		jle	.L298
 3113      0000
 3114              	.LBB391:
 253:fltk-1.3.4-1/src/Fl_Browser.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 3115              		.loc 3 253 0
 3116 002d 443BA784 		cmpl	644(%rdi), %r12d
 3116      020000
 3117 0034 7E5A     		jle	.L295
 254:fltk-1.3.4-1/src/Fl_Browser.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3118              		.loc 3 254 0
 3119 0036 488B8770 		movq	624(%rdi), %rax
 3119      020000
 3120 003d 488902   		movq	%rax, (%rdx)
 255:fltk-1.3.4-1/src/Fl_Browser.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 3121              		.loc 3 255 0
 3122 0040 48895008 		movq	%rdx, 8(%rax)
 256:fltk-1.3.4-1/src/Fl_Browser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3123              		.loc 3 256 0
 3124 0044 48C74208 		movq	$0, 8(%rdx)
 3124      00000000 
 257:fltk-1.3.4-1/src/Fl_Browser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 3125              		.loc 3 257 0
 3126 004c 48899370 		movq	%rdx, 624(%rbx)
 3126      020000
 3127              	.LVL277:
 3128              	.L293:
 3129              	.LBE391:
 3130              	.LBE390:
 3131              	.LBE389:
 269:fltk-1.3.4-1/src/Fl_Browser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3132              		.loc 3 269 0
 3133 0053 488B03   		movq	(%rbx), %rax
 268:fltk-1.3.4-1/src/Fl_Browser.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 3134              		.loc 3 268 0
 3135 0056 83838402 		addl	$1, 644(%rbx)
 3135      000001
 269:fltk-1.3.4-1/src/Fl_Browser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3136              		.loc 3 269 0
 3137 005d 4889EE   		movq	%rbp, %rsi
 266:fltk-1.3.4-1/src/Fl_Browser.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 3138              		.loc 3 266 0
 3139 0060 4489A380 		movl	%r12d, 640(%rbx)
 3139      020000
 267:fltk-1.3.4-1/src/Fl_Browser.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 3140              		.loc 3 267 0
 3141 0067 4889AB78 		movq	%rbp, 632(%rbx)
 3141      020000
 269:fltk-1.3.4-1/src/Fl_Browser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3142              		.loc 3 269 0
 3143 006e 4889DF   		movq	%rbx, %rdi
 3144 0071 FF5070   		call	*112(%rax)
 3145              	.LVL278:
 3146 0074 01838802 		addl	%eax, 648(%rbx)
 3146      0000
 271:fltk-1.3.4-1/src/Fl_Browser.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3147              		.loc 3 271 0
 3148 007a 4883C408 		addq	$8, %rsp
 3149              		.cfi_remember_state
 3150              		.cfi_def_cfa_offset 40
 270:fltk-1.3.4-1/src/Fl_Browser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3151              		.loc 3 270 0
 3152 007e 4889EE   		movq	%rbp, %rsi
 3153 0081 4889DF   		movq	%rbx, %rdi
 271:fltk-1.3.4-1/src/Fl_Browser.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3154              		.loc 3 271 0
 3155 0084 5B       		popq	%rbx
 3156              		.cfi_def_cfa_offset 32
 3157              	.LVL279:
 3158 0085 5D       		popq	%rbp
 3159              		.cfi_def_cfa_offset 24
 3160              	.LVL280:
 3161 0086 415C     		popq	%r12
 3162              		.cfi_def_cfa_offset 16
 3163              	.LVL281:
 3164 0088 415D     		popq	%r13
 3165              		.cfi_def_cfa_offset 8
 270:fltk-1.3.4-1/src/Fl_Browser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3166              		.loc 3 270 0
 3167 008a E9000000 		jmp	_ZN11Fl_Browser_11redraw_lineEPv
 3167      00
 3168              	.LVL282:
 3169 008f 90       		.p2align 4,,10
 3170              		.p2align 3
 3171              	.L295:
 3172              		.cfi_restore_state
 3173              	.LBB396:
 3174              	.LBB394:
 3175              	.LBB393:
 3176              	.LBB392:
 259:fltk-1.3.4-1/src/Fl_Browser.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3177              		.loc 3 259 0
 3178 0090 4489E6   		movl	%r12d, %esi
 3179 0093 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 3179      00
 3180              	.LVL283:
 260:fltk-1.3.4-1/src/Fl_Browser.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 3181              		.loc 3 260 0
 3182 0098 4889EA   		movq	%rbp, %rdx
 259:fltk-1.3.4-1/src/Fl_Browser.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3183              		.loc 3 259 0
 3184 009b 4989C5   		movq	%rax, %r13
 3185              	.LVL284:
 260:fltk-1.3.4-1/src/Fl_Browser.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 3186              		.loc 3 260 0
 3187 009e 4889C6   		movq	%rax, %rsi
 3188 00a1 E8000000 		call	_ZN11Fl_Browser_9insertingEPvS0_
 3188      00
 3189              	.LVL285:
 261:fltk-1.3.4-1/src/Fl_Browser.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 3190              		.loc 3 261 0
 3191 00a6 4C896D08 		movq	%r13, 8(%rbp)
 262:fltk-1.3.4-1/src/Fl_Browser.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 3192              		.loc 3 262 0
 3193 00aa 498B4500 		movq	0(%r13), %rax
 3194 00ae 48894500 		movq	%rax, 0(%rbp)
 263:fltk-1.3.4-1/src/Fl_Browser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 3195              		.loc 3 263 0
 3196 00b2 48896808 		movq	%rbp, 8(%rax)
 264:fltk-1.3.4-1/src/Fl_Browser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3197              		.loc 3 264 0
 3198 00b6 49896D00 		movq	%rbp, 0(%r13)
 3199 00ba EB97     		jmp	.L293
 3200              	.LVL286:
 3201 00bc 0F1F4000 		.p2align 4,,10
 3202              		.p2align 3
 3203              	.L297:
 3204              	.LBE392:
 3205              	.LBE393:
 3206              	.LBE394:
 245:fltk-1.3.4-1/src/Fl_Browser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 3207              		.loc 3 245 0
 3208 00c0 48C74208 		movq	$0, 8(%rdx)
 3208      00000000 
 3209 00c8 48C70200 		movq	$0, (%rdx)
 3209      000000
 246:fltk-1.3.4-1/src/Fl_Browser.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 3210              		.loc 3 246 0
 3211 00cf 48899370 		movq	%rdx, 624(%rbx)
 3211      020000
 3212 00d6 48899368 		movq	%rdx, 616(%rbx)
 3212      020000
 3213 00dd E971FFFF 		jmp	.L293
 3213      FF
 3214              		.p2align 4,,10
 3215 00e2 660F1F44 		.p2align 3
 3215      0000
 3216              	.L298:
 3217              	.LBB395:
 248:fltk-1.3.4-1/src/Fl_Browser.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 3218              		.loc 3 248 0
 3219 00e8 E8000000 		call	_ZN11Fl_Browser_9insertingEPvS0_
 3219      00
 3220              	.LVL287:
 249:fltk-1.3.4-1/src/Fl_Browser.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 3221              		.loc 3 249 0
 3222 00ed 48C74500 		movq	$0, 0(%rbp)
 3222      00000000 
 250:fltk-1.3.4-1/src/Fl_Browser.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 3223              		.loc 3 250 0
 3224 00f5 488B8368 		movq	616(%rbx), %rax
 3224      020000
 3225 00fc 48894508 		movq	%rax, 8(%rbp)
 251:fltk-1.3.4-1/src/Fl_Browser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 3226              		.loc 3 251 0
 3227 0100 488928   		movq	%rbp, (%rax)
 252:fltk-1.3.4-1/src/Fl_Browser.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3228              		.loc 3 252 0
 3229 0103 4889AB68 		movq	%rbp, 616(%rbx)
 3229      020000
 3230 010a E944FFFF 		jmp	.L293
 3230      FF
 3231              	.LBE395:
 3232              	.LBE396:
 3233              		.cfi_endproc
 3234              	.LFE569:
 3236              		.section	.text.unlikely._ZN10Fl_Browser6insertEiP8FL_BLINE
 3237              	.LCOLDE25:
 3238              		.section	.text._ZN10Fl_Browser6insertEiP8FL_BLINE
 3239              	.LHOTE25:
 3240              		.section	.rodata.str1.1,"aMS",@progbits,1
 3241              	.LC26:
 3242 0000 00       		.string	""
 3243              		.section	.text.unlikely._ZN10Fl_Browser6insertEiPKcPv,"ax",@progbits
 3244              		.align 2
 3245              	.LCOLDB27:
 3246              		.section	.text._ZN10Fl_Browser6insertEiPKcPv,"ax",@progbits
 3247              	.LHOTB27:
 3248              		.align 2
 3249              		.p2align 4,,15
 3250              		.globl	_ZN10Fl_Browser6insertEiPKcPv
 3252              	_ZN10Fl_Browser6insertEiPKcPv:
 3253              	.LFB570:
 286:fltk-1.3.4-1/src/Fl_Browser.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 3254              		.loc 3 286 0
 3255              		.cfi_startproc
 3256              	.LVL288:
 3257 0000 4157     		pushq	%r15
 3258              		.cfi_def_cfa_offset 16
 3259              		.cfi_offset 15, -16
 3260 0002 4156     		pushq	%r14
 3261              		.cfi_def_cfa_offset 24
 3262              		.cfi_offset 14, -24
 3263 0004 4989CF   		movq	%rcx, %r15
 3264 0007 4155     		pushq	%r13
 3265              		.cfi_def_cfa_offset 32
 3266              		.cfi_offset 13, -32
 3267 0009 4154     		pushq	%r12
 3268              		.cfi_def_cfa_offset 40
 3269              		.cfi_offset 12, -40
 3270 000b 4989FD   		movq	%rdi, %r13
 3271 000e 55       		pushq	%rbp
 3272              		.cfi_def_cfa_offset 48
 3273              		.cfi_offset 6, -48
 3274 000f 53       		pushq	%rbx
 3275              		.cfi_def_cfa_offset 56
 3276              		.cfi_offset 3, -56
 3277 0010 4189F6   		movl	%esi, %r14d
 3278 0013 4883EC08 		subq	$8, %rsp
 3279              		.cfi_def_cfa_offset 64
 287:fltk-1.3.4-1/src/Fl_Browser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 3280              		.loc 3 287 0
 3281 0017 4885D2   		testq	%rdx, %rdx
 3282 001a 745C     		je	.L301
 3283 001c 4889D7   		movq	%rdx, %rdi
 3284              	.LVL289:
 3285 001f 4989D4   		movq	%rdx, %r12
 3286 0022 E8000000 		call	strlen
 3286      00
 3287              	.LVL290:
 3288 0027 4863F8   		movslq	%eax, %rdi
 3289 002a 89C5     		movl	%eax, %ebp
 3290 002c 4883C728 		addq	$40, %rdi
 3291              	.LVL291:
 3292              	.L300:
 289:fltk-1.3.4-1/src/Fl_Browser.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3293              		.loc 3 289 0
 3294 0030 E8000000 		call	malloc
 3294      00
 3295              	.LVL292:
 3296              	.LBB397:
 3297              	.LBB398:
 3298              		.file 8 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
  91:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  92:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_MISC
  94:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
  95:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bcopy (const void *__src, void *__dest, size_t __len))
  96:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  98:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  99:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 100:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
 101:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bzero (void *__dest, size_t __len))
 102:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 103:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memset_chk (__dest, '\0', __len, __bos0 (__dest));
 104:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 105:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
 106:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 107:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 108:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strcpy (char *__restrict __dest, const char *__restrict __src))
 109:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 110:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strcpy_chk (__dest, __src, __bos (__dest));
 3299              		.loc 8 110 0
 3300 0035 488D7823 		leaq	35(%rax), %rdi
 3301              	.LBE398:
 3302              	.LBE397:
 289:fltk-1.3.4-1/src/Fl_Browser.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3303              		.loc 3 289 0
 3304 0039 4889C3   		movq	%rax, %rbx
 3305              	.LVL293:
 3306              	.LBB401:
 3307              	.LBB399:
 3308              		.loc 8 110 0
 3309 003c 4C89E6   		movq	%r12, %rsi
 3310              	.LBE399:
 3311              	.LBE401:
 290:fltk-1.3.4-1/src/Fl_Browser.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 3312              		.loc 3 290 0
 3313 003f 66896820 		movw	%bp, 32(%rax)
 291:fltk-1.3.4-1/src/Fl_Browser.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3314              		.loc 3 291 0
 3315 0043 C6402200 		movb	$0, 34(%rax)
 3316              	.LVL294:
 3317              	.LBB402:
 3318              	.LBB400:
 3319              		.loc 8 110 0
 3320 0047 E8000000 		call	strcpy
 3320      00
 3321              	.LVL295:
 3322              	.LBE400:
 3323              	.LBE402:
 293:fltk-1.3.4-1/src/Fl_Browser.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 3324              		.loc 3 293 0
 3325 004c 4C897B10 		movq	%r15, 16(%rbx)
 294:fltk-1.3.4-1/src/Fl_Browser.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3326              		.loc 3 294 0
 3327 0050 48C74318 		movq	$0, 24(%rbx)
 3327      00000000 
 296:fltk-1.3.4-1/src/Fl_Browser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3328              		.loc 3 296 0
 3329 0058 4883C408 		addq	$8, %rsp
 3330              		.cfi_remember_state
 3331              		.cfi_def_cfa_offset 56
 295:fltk-1.3.4-1/src/Fl_Browser.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 3332              		.loc 3 295 0
 3333 005c 4889DA   		movq	%rbx, %rdx
 3334 005f 4489F6   		movl	%r14d, %esi
 3335 0062 4C89EF   		movq	%r13, %rdi
 296:fltk-1.3.4-1/src/Fl_Browser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3336              		.loc 3 296 0
 3337 0065 5B       		popq	%rbx
 3338              		.cfi_def_cfa_offset 48
 3339              	.LVL296:
 3340 0066 5D       		popq	%rbp
 3341              		.cfi_def_cfa_offset 40
 3342 0067 415C     		popq	%r12
 3343              		.cfi_def_cfa_offset 32
 3344              	.LVL297:
 3345 0069 415D     		popq	%r13
 3346              		.cfi_def_cfa_offset 24
 3347              	.LVL298:
 3348 006b 415E     		popq	%r14
 3349              		.cfi_def_cfa_offset 16
 3350              	.LVL299:
 3351 006d 415F     		popq	%r15
 3352              		.cfi_def_cfa_offset 8
 3353              	.LVL300:
 295:fltk-1.3.4-1/src/Fl_Browser.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 3354              		.loc 3 295 0
 3355 006f E9000000 		jmp	_ZN10Fl_Browser6insertEiP8FL_BLINE
 3355      00
 3356              	.LVL301:
 3357              		.p2align 4,,10
 3358 0074 0F1F4000 		.p2align 3
 3359              	.L301:
 3360              		.cfi_restore_state
 3361 0078 31ED     		xorl	%ebp, %ebp
 3362 007a BF280000 		movl	$40, %edi
 3362      00
 3363              	.LVL302:
 287:fltk-1.3.4-1/src/Fl_Browser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 3364              		.loc 3 287 0
 3365 007f 41BC0000 		movl	$.LC26, %r12d
 3365      0000
 3366 0085 EBA9     		jmp	.L300
 3367              		.cfi_endproc
 3368              	.LFE570:
 3370              		.section	.text.unlikely._ZN10Fl_Browser6insertEiPKcPv
 3371              	.LCOLDE27:
 3372              		.section	.text._ZN10Fl_Browser6insertEiPKcPv
 3373              	.LHOTE27:
 3374              		.section	.text.unlikely._ZN10Fl_Browser4moveEii,"ax",@progbits
 3375              		.align 2
 3376              	.LCOLDB28:
 3377              		.section	.text._ZN10Fl_Browser4moveEii,"ax",@progbits
 3378              	.LHOTB28:
 3379              		.align 2
 3380              		.p2align 4,,15
 3381              		.globl	_ZN10Fl_Browser4moveEii
 3383              	_ZN10Fl_Browser4moveEii:
 3384              	.LFB571:
 304:fltk-1.3.4-1/src/Fl_Browser.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3385              		.loc 3 304 0
 3386              		.cfi_startproc
 3387              	.LVL303:
 305:fltk-1.3.4-1/src/Fl_Browser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 3388              		.loc 3 305 0
 3389 0000 85D2     		testl	%edx, %edx
 3390 0002 7E08     		jle	.L306
 305:fltk-1.3.4-1/src/Fl_Browser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 3391              		.loc 3 305 0 is_stmt 0 discriminator 1
 3392 0004 3B978402 		cmpl	644(%rdi), %edx
 3392      0000
 3393 000a 7E04     		jle	.L307
 3394              	.L306:
 3395 000c F3C3     		rep ret
 3396 000e 6690     		.p2align 4,,10
 3397              		.p2align 3
 3398              	.L307:
 304:fltk-1.3.4-1/src/Fl_Browser.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3399              		.loc 3 304 0 is_stmt 1
 3400 0010 55       		pushq	%rbp
 3401              		.cfi_def_cfa_offset 16
 3402              		.cfi_offset 6, -16
 3403 0011 53       		pushq	%rbx
 3404              		.cfi_def_cfa_offset 24
 3405              		.cfi_offset 3, -24
 3406 0012 89F5     		movl	%esi, %ebp
 306:fltk-1.3.4-1/src/Fl_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3407              		.loc 3 306 0
 3408 0014 89D6     		movl	%edx, %esi
 3409              	.LVL304:
 3410 0016 4889FB   		movq	%rdi, %rbx
 304:fltk-1.3.4-1/src/Fl_Browser.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3411              		.loc 3 304 0
 3412 0019 4883EC08 		subq	$8, %rsp
 3413              		.cfi_def_cfa_offset 32
 306:fltk-1.3.4-1/src/Fl_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3414              		.loc 3 306 0
 3415 001d E8000000 		call	_ZN10Fl_Browser7_removeEi
 3415      00
 3416              	.LVL305:
 307:fltk-1.3.4-1/src/Fl_Browser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 3417              		.loc 3 307 0
 3418 0022 4883C408 		addq	$8, %rsp
 3419              		.cfi_def_cfa_offset 24
 306:fltk-1.3.4-1/src/Fl_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3420              		.loc 3 306 0
 3421 0026 89EE     		movl	%ebp, %esi
 3422 0028 4889DF   		movq	%rbx, %rdi
 307:fltk-1.3.4-1/src/Fl_Browser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 3423              		.loc 3 307 0
 3424 002b 5B       		popq	%rbx
 3425              		.cfi_restore 3
 3426              		.cfi_def_cfa_offset 16
 3427              	.LVL306:
 3428 002c 5D       		popq	%rbp
 3429              		.cfi_restore 6
 3430              		.cfi_def_cfa_offset 8
 3431              	.LVL307:
 306:fltk-1.3.4-1/src/Fl_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3432              		.loc 3 306 0
 3433 002d 4889C2   		movq	%rax, %rdx
 3434 0030 E9000000 		jmp	_ZN10Fl_Browser6insertEiP8FL_BLINE
 3434      00
 3435              	.LVL308:
 3436              		.cfi_endproc
 3437              	.LFE571:
 3439              		.section	.text.unlikely._ZN10Fl_Browser4moveEii
 3440              	.LCOLDE28:
 3441              		.section	.text._ZN10Fl_Browser4moveEii
 3442              	.LHOTE28:
 3443              		.section	.text.unlikely._ZN10Fl_Browser4textEiPKc,"ax",@progbits
 3444              		.align 2
 3445              	.LCOLDB29:
 3446              		.section	.text._ZN10Fl_Browser4textEiPKc,"ax",@progbits
 3447              	.LHOTB29:
 3448              		.align 2
 3449              		.p2align 4,,15
 3450              		.globl	_ZN10Fl_Browser4textEiPKc
 3452              	_ZN10Fl_Browser4textEiPKc:
 3453              	.LFB572:
 320:fltk-1.3.4-1/src/Fl_Browser.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 3454              		.loc 3 320 0
 3455              		.cfi_startproc
 3456              	.LVL309:
 321:fltk-1.3.4-1/src/Fl_Browser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 3457              		.loc 3 321 0
 3458 0000 85F6     		testl	%esi, %esi
 3459 0002 7E1B     		jle	.L320
 320:fltk-1.3.4-1/src/Fl_Browser.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 3460              		.loc 3 320 0 discriminator 1
 3461 0004 4156     		pushq	%r14
 3462              		.cfi_def_cfa_offset 16
 3463              		.cfi_offset 14, -16
 3464 0006 4155     		pushq	%r13
 3465              		.cfi_def_cfa_offset 24
 3466              		.cfi_offset 13, -24
 3467 0008 4154     		pushq	%r12
 3468              		.cfi_def_cfa_offset 32
 3469              		.cfi_offset 12, -32
 3470 000a 55       		pushq	%rbp
 3471              		.cfi_def_cfa_offset 40
 3472              		.cfi_offset 6, -40
 3473 000b 53       		pushq	%rbx
 3474              		.cfi_def_cfa_offset 48
 3475              		.cfi_offset 3, -48
 321:fltk-1.3.4-1/src/Fl_Browser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 3476              		.loc 3 321 0 discriminator 1
 3477 000c 3BB78402 		cmpl	644(%rdi), %esi
 3477      0000
 3478 0012 4889FB   		movq	%rdi, %rbx
 3479 0015 7E11     		jle	.L321
 342:fltk-1.3.4-1/src/Fl_Browser.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3480              		.loc 3 342 0
 3481 0017 5B       		popq	%rbx
 3482              		.cfi_restore 3
 3483              		.cfi_def_cfa_offset 40
 3484 0018 5D       		popq	%rbp
 3485              		.cfi_restore 6
 3486              		.cfi_def_cfa_offset 32
 3487 0019 415C     		popq	%r12
 3488              		.cfi_restore 12
 3489              		.cfi_def_cfa_offset 24
 3490 001b 415D     		popq	%r13
 3491              		.cfi_restore 13
 3492              		.cfi_def_cfa_offset 16
 3493 001d 415E     		popq	%r14
 3494              		.cfi_restore 14
 3495              		.cfi_def_cfa_offset 8
 3496              	.L320:
 3497 001f F3C3     		rep ret
 3498              	.LVL310:
 3499              		.p2align 4,,10
 3500 0021 0F1F8000 		.p2align 3
 3500      000000
 3501              	.L321:
 3502              		.cfi_def_cfa_offset 48
 3503              		.cfi_offset 3, -48
 3504              		.cfi_offset 6, -40
 3505              		.cfi_offset 12, -32
 3506              		.cfi_offset 13, -24
 3507              		.cfi_offset 14, -16
 3508 0028 4989D4   		movq	%rdx, %r12
 322:fltk-1.3.4-1/src/Fl_Browser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 3509              		.loc 3 322 0
 3510 002b E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 3510      00
 3511              	.LVL311:
 323:fltk-1.3.4-1/src/Fl_Browser.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 3512              		.loc 3 323 0
 3513 0030 4D85E4   		testq	%r12, %r12
 322:fltk-1.3.4-1/src/Fl_Browser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 3514              		.loc 3 322 0
 3515 0033 4889C5   		movq	%rax, %rbp
 3516              	.LVL312:
 323:fltk-1.3.4-1/src/Fl_Browser.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 3517              		.loc 3 323 0
 3518 0036 0F84B400 		je	.L317
 3518      0000
 3519 003c 4C89E7   		movq	%r12, %rdi
 3520 003f E8000000 		call	strlen
 3520      00
 3521              	.LVL313:
 3522 0044 4989C6   		movq	%rax, %r14
 3523 0047 4863F8   		movslq	%eax, %rdi
 3524              	.LVL314:
 3525              	.L310:
 3526              	.LBB403:
 325:fltk-1.3.4-1/src/Fl_Browser.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 3527              		.loc 3 325 0
 3528 004a 0FBF4520 		movswl	32(%rbp), %eax
 3529 004e 39F8     		cmpl	%edi, %eax
 3530 0050 7C26     		jl	.L322
 3531              	.L312:
 3532              	.LVL315:
 3533              	.LBE403:
 3534              	.LBB407:
 3535              	.LBB408:
 3536              		.loc 8 110 0
 3537 0052 488D7D23 		leaq	35(%rbp), %rdi
 3538              	.LVL316:
 3539 0056 4C89E6   		movq	%r12, %rsi
 3540 0059 E8000000 		call	strcpy
 3540      00
 3541              	.LVL317:
 3542              	.LBE408:
 3543              	.LBE407:
 341:fltk-1.3.4-1/src/Fl_Browser.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 3544              		.loc 3 341 0
 3545 005e 4889EE   		movq	%rbp, %rsi
 3546 0061 4889DF   		movq	%rbx, %rdi
 342:fltk-1.3.4-1/src/Fl_Browser.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3547              		.loc 3 342 0
 3548 0064 5B       		popq	%rbx
 3549              		.cfi_remember_state
 3550              		.cfi_restore 3
 3551              		.cfi_def_cfa_offset 40
 3552              	.LVL318:
 3553 0065 5D       		popq	%rbp
 3554              		.cfi_restore 6
 3555              		.cfi_def_cfa_offset 32
 3556              	.LVL319:
 3557 0066 415C     		popq	%r12
 3558              		.cfi_restore 12
 3559              		.cfi_def_cfa_offset 24
 3560              	.LVL320:
 3561 0068 415D     		popq	%r13
 3562              		.cfi_restore 13
 3563              		.cfi_def_cfa_offset 16
 3564 006a 415E     		popq	%r14
 3565              		.cfi_restore 14
 3566              		.cfi_def_cfa_offset 8
 341:fltk-1.3.4-1/src/Fl_Browser.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 3567              		.loc 3 341 0
 3568 006c E9000000 		jmp	_ZN11Fl_Browser_11redraw_lineEPv
 3568      00
 3569              	.LVL321:
 3570              		.p2align 4,,10
 3571 0071 0F1F8000 		.p2align 3
 3571      000000
 3572              	.L322:
 3573              		.cfi_restore_state
 3574              	.LBB409:
 3575              	.LBB404:
 326:fltk-1.3.4-1/src/Fl_Browser.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 3576              		.loc 3 326 0
 3577 0078 4883C728 		addq	$40, %rdi
 3578 007c E8000000 		call	malloc
 3578      00
 3579              	.LVL322:
 327:fltk-1.3.4-1/src/Fl_Browser.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 3580              		.loc 3 327 0
 3581 0081 4889EE   		movq	%rbp, %rsi
 326:fltk-1.3.4-1/src/Fl_Browser.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 3582              		.loc 3 326 0
 3583 0084 4989C5   		movq	%rax, %r13
 3584              	.LVL323:
 327:fltk-1.3.4-1/src/Fl_Browser.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 3585              		.loc 3 327 0
 3586 0087 4889C2   		movq	%rax, %rdx
 3587 008a 4889DF   		movq	%rbx, %rdi
 3588 008d E8000000 		call	_ZN11Fl_Browser_9replacingEPvS0_
 3588      00
 3589              	.LVL324:
 328:fltk-1.3.4-1/src/Fl_Browser.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3590              		.loc 3 328 0
 3591 0092 4C89AB78 		movq	%r13, 632(%rbx)
 3591      020000
 329:fltk-1.3.4-1/src/Fl_Browser.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 3592              		.loc 3 329 0
 3593 0099 488B4510 		movq	16(%rbp), %rax
 3594 009d 49894510 		movq	%rax, 16(%r13)
 330:fltk-1.3.4-1/src/Fl_Browser.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 3595              		.loc 3 330 0
 3596 00a1 488B4518 		movq	24(%rbp), %rax
 331:fltk-1.3.4-1/src/Fl_Browser.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3597              		.loc 3 331 0
 3598 00a5 66458975 		movw	%r14w, 32(%r13)
 3598      20
 330:fltk-1.3.4-1/src/Fl_Browser.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 3599              		.loc 3 330 0
 3600 00aa 49894518 		movq	%rax, 24(%r13)
 332:fltk-1.3.4-1/src/Fl_Browser.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 3601              		.loc 3 332 0
 3602 00ae 0FB64522 		movzbl	34(%rbp), %eax
 3603 00b2 41884522 		movb	%al, 34(%r13)
 333:fltk-1.3.4-1/src/Fl_Browser.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 3604              		.loc 3 333 0
 3605 00b6 488B4500 		movq	0(%rbp), %rax
 334:fltk-1.3.4-1/src/Fl_Browser.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 3606              		.loc 3 334 0
 3607 00ba 4885C0   		testq	%rax, %rax
 333:fltk-1.3.4-1/src/Fl_Browser.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 3608              		.loc 3 333 0
 3609 00bd 49894500 		movq	%rax, 0(%r13)
 334:fltk-1.3.4-1/src/Fl_Browser.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 3610              		.loc 3 334 0
 3611 00c1 744D     		je	.L313
 334:fltk-1.3.4-1/src/Fl_Browser.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 3612              		.loc 3 334 0 is_stmt 0 discriminator 1
 3613 00c3 4C896808 		movq	%r13, 8(%rax)
 3614              	.L314:
 335:fltk-1.3.4-1/src/Fl_Browser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3615              		.loc 3 335 0 is_stmt 1
 3616 00c7 488B4508 		movq	8(%rbp), %rax
 336:fltk-1.3.4-1/src/Fl_Browser.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 3617              		.loc 3 336 0
 3618 00cb 4885C0   		testq	%rax, %rax
 335:fltk-1.3.4-1/src/Fl_Browser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3619              		.loc 3 335 0
 3620 00ce 49894508 		movq	%rax, 8(%r13)
 336:fltk-1.3.4-1/src/Fl_Browser.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 3621              		.loc 3 336 0
 3622 00d2 742C     		je	.L315
 336:fltk-1.3.4-1/src/Fl_Browser.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 3623              		.loc 3 336 0 is_stmt 0 discriminator 1
 3624 00d4 4C8928   		movq	%r13, (%rax)
 3625              	.L316:
 337:fltk-1.3.4-1/src/Fl_Browser.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3626              		.loc 3 337 0 is_stmt 1
 3627 00d7 4889EF   		movq	%rbp, %rdi
 3628              	.LBE404:
 3629 00da 4C89ED   		movq	%r13, %rbp
 3630              	.LVL325:
 3631              	.LBB405:
 3632 00dd E8000000 		call	free
 3632      00
 3633              	.LVL326:
 3634              	.LBE405:
 3635 00e2 E96BFFFF 		jmp	.L312
 3635      FF
 3636              	.LVL327:
 3637 00e7 660F1F84 		.p2align 4,,10
 3637      00000000 
 3637      00
 3638              		.p2align 3
 3639              	.L317:
 3640              	.LBE409:
 3641 00f0 31FF     		xorl	%edi, %edi
 3642 00f2 4531F6   		xorl	%r14d, %r14d
 323:fltk-1.3.4-1/src/Fl_Browser.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 3643              		.loc 3 323 0
 3644 00f5 41BC0000 		movl	$.LC26, %r12d
 3644      0000
 3645              	.LVL328:
 3646 00fb E94AFFFF 		jmp	.L310
 3646      FF
 3647              	.LVL329:
 3648              		.p2align 4,,10
 3649              		.p2align 3
 3650              	.L315:
 3651              	.LBB410:
 3652              	.LBB406:
 336:fltk-1.3.4-1/src/Fl_Browser.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 3653              		.loc 3 336 0 discriminator 2
 3654 0100 4C89AB70 		movq	%r13, 624(%rbx)
 3654      020000
 3655 0107 EBCE     		jmp	.L316
 3656 0109 0F1F8000 		.p2align 4,,10
 3656      000000
 3657              		.p2align 3
 3658              	.L313:
 334:fltk-1.3.4-1/src/Fl_Browser.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 3659              		.loc 3 334 0 discriminator 2
 3660 0110 4C89AB68 		movq	%r13, 616(%rbx)
 3660      020000
 3661 0117 EBAE     		jmp	.L314
 3662              	.LBE406:
 3663              	.LBE410:
 3664              		.cfi_endproc
 3665              	.LFE572:
 3667              		.section	.text.unlikely._ZN10Fl_Browser4textEiPKc
 3668              	.LCOLDE29:
 3669              		.section	.text._ZN10Fl_Browser4textEiPKc
 3670              	.LHOTE29:
 3671              		.section	.text.unlikely._ZN10Fl_Browser4dataEiPv,"ax",@progbits
 3672              		.align 2
 3673              	.LCOLDB30:
 3674              		.section	.text._ZN10Fl_Browser4dataEiPv,"ax",@progbits
 3675              	.LHOTB30:
 3676              		.align 2
 3677              		.p2align 4,,15
 3678              		.globl	_ZN10Fl_Browser4dataEiPv
 3680              	_ZN10Fl_Browser4dataEiPv:
 3681              	.LFB573:
 350:fltk-1.3.4-1/src/Fl_Browser.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 3682              		.loc 3 350 0
 3683              		.cfi_startproc
 3684              	.LVL330:
 351:fltk-1.3.4-1/src/Fl_Browser.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3685              		.loc 3 351 0
 3686 0000 85F6     		testl	%esi, %esi
 3687 0002 7E08     		jle	.L323
 351:fltk-1.3.4-1/src/Fl_Browser.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3688              		.loc 3 351 0 is_stmt 0 discriminator 1
 3689 0004 3BB78402 		cmpl	644(%rdi), %esi
 3689      0000
 3690 000a 7E04     		jle	.L325
 3691              	.L323:
 3692 000c F3C3     		rep ret
 3693 000e 6690     		.p2align 4,,10
 3694              		.p2align 3
 3695              	.L325:
 3696 0010 4989D1   		movq	%rdx, %r9
 352:fltk-1.3.4-1/src/Fl_Browser.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 3697              		.loc 3 352 0 is_stmt 1
 3698 0013 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 3698      00
 3699              	.LVL331:
 3700 0018 4C894810 		movq	%r9, 16(%rax)
 3701 001c C3       		ret
 3702              		.cfi_endproc
 3703              	.LFE573:
 3705              		.section	.text.unlikely._ZN10Fl_Browser4dataEiPv
 3706              	.LCOLDE30:
 3707              		.section	.text._ZN10Fl_Browser4dataEiPv
 3708              	.LHOTE30:
 3709              		.section	.text.unlikely._ZN10Fl_BrowserC2EiiiiPKc,"ax",@progbits
 3710              		.align 2
 3711              	.LCOLDB31:
 3712              		.section	.text._ZN10Fl_BrowserC2EiiiiPKc,"ax",@progbits
 3713              	.LHOTB31:
 3714              		.align 2
 3715              		.p2align 4,,15
 3716              		.globl	_ZN10Fl_BrowserC2EiiiiPKc
 3718              	_ZN10Fl_BrowserC2EiiiiPKc:
 3719              	.LFB580:
 603:fltk-1.3.4-1/src/Fl_Browser.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 3720              		.loc 3 603 0
 3721              		.cfi_startproc
 3722              	.LVL332:
 3723 0000 53       		pushq	%rbx
 3724              		.cfi_def_cfa_offset 16
 3725              		.cfi_offset 3, -16
 603:fltk-1.3.4-1/src/Fl_Browser.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 3726              		.loc 3 603 0
 3727 0001 4889FB   		movq	%rdi, %rbx
 3728              	.LBB411:
 604:fltk-1.3.4-1/src/Fl_Browser.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3729              		.loc 3 604 0
 3730 0004 E8000000 		call	_ZN11Fl_Browser_C2EiiiiPKc
 3730      00
 3731              	.LVL333:
 3732 0009 48C70300 		movq	$_ZTV10Fl_Browser+16, (%rbx)
 3732      000000
 605:fltk-1.3.4-1/src/Fl_Browser.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 3733              		.loc 3 605 0
 3734 0010 48C78390 		movq	$_ZL10no_columns, 656(%rbx)
 3734      02000000 
 3734      000000
 606:fltk-1.3.4-1/src/Fl_Browser.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 3735              		.loc 3 606 0
 3736 001b C7838402 		movl	$0, 644(%rbx)
 3736      00000000 
 3736      0000
 607:fltk-1.3.4-1/src/Fl_Browser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 3737              		.loc 3 607 0
 3738 0025 C7838802 		movl	$0, 648(%rbx)
 3738      00000000 
 3738      0000
 608:fltk-1.3.4-1/src/Fl_Browser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3739              		.loc 3 608 0
 3740 002f C7838002 		movl	$0, 640(%rbx)
 3740      00000000 
 3740      0000
 609:fltk-1.3.4-1/src/Fl_Browser.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 3741              		.loc 3 609 0
 3742 0039 C6839802 		movb	$64, 664(%rbx)
 3742      000040
 610:fltk-1.3.4-1/src/Fl_Browser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3743              		.loc 3 610 0
 3744 0040 C6839902 		movb	$9, 665(%rbx)
 3744      000009
 611:fltk-1.3.4-1/src/Fl_Browser.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 3745              		.loc 3 611 0
 3746 0047 48C78378 		movq	$0, 632(%rbx)
 3746      02000000 
 3746      000000
 3747 0052 48C78370 		movq	$0, 624(%rbx)
 3747      02000000 
 3747      000000
 3748 005d 48C78368 		movq	$0, 616(%rbx)
 3748      02000000 
 3748      000000
 3749              	.LBE411:
 612:fltk-1.3.4-1/src/Fl_Browser.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 3750              		.loc 3 612 0
 3751 0068 5B       		popq	%rbx
 3752              		.cfi_def_cfa_offset 8
 3753              	.LVL334:
 3754 0069 C3       		ret
 3755              		.cfi_endproc
 3756              	.LFE580:
 3758              		.section	.text.unlikely._ZN10Fl_BrowserC2EiiiiPKc
 3759              	.LCOLDE31:
 3760              		.section	.text._ZN10Fl_BrowserC2EiiiiPKc
 3761              	.LHOTE31:
 3762              		.globl	_ZN10Fl_BrowserC1EiiiiPKc
 3763              		.set	_ZN10Fl_BrowserC1EiiiiPKc,_ZN10Fl_BrowserC2EiiiiPKc
 3764              		.section	.text.unlikely._ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE,"ax",@progbits
 3765              		.align 2
 3766              	.LCOLDB32:
 3767              		.section	.text._ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE,"ax",@progbits
 3768              	.LHOTB32:
 3769              		.align 2
 3770              		.p2align 4,,15
 3771              		.globl	_ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
 3773              	_ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE:
 3774              	.LFB582:
 620:fltk-1.3.4-1/src/Fl_Browser.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3775              		.loc 3 620 0
 3776              		.cfi_startproc
 3777              	.LVL335:
 3778 0000 4156     		pushq	%r14
 3779              		.cfi_def_cfa_offset 16
 3780              		.cfi_offset 14, -16
 3781 0002 4155     		pushq	%r13
 3782              		.cfi_def_cfa_offset 24
 3783              		.cfi_offset 13, -24
 3784 0004 4189D6   		movl	%edx, %r14d
 3785 0007 4154     		pushq	%r12
 3786              		.cfi_def_cfa_offset 32
 3787              		.cfi_offset 12, -32
 3788 0009 55       		pushq	%rbp
 3789              		.cfi_def_cfa_offset 40
 3790              		.cfi_offset 6, -40
 3791 000a 4989FC   		movq	%rdi, %r12
 3792 000d 53       		pushq	%rbx
 3793              		.cfi_def_cfa_offset 48
 3794              		.cfi_offset 3, -48
 3795 000e 4883EC20 		subq	$32, %rsp
 3796              		.cfi_def_cfa_offset 80
 622:fltk-1.3.4-1/src/Fl_Browser.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3797              		.loc 3 622 0
 3798 0012 8BAF8402 		movl	644(%rdi), %ebp
 3798      0000
 626:fltk-1.3.4-1/src/Fl_Browser.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3799              		.loc 3 626 0
 3800 0018 488B9F68 		movq	616(%rdi), %rbx
 3800      020000
 620:fltk-1.3.4-1/src/Fl_Browser.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3801              		.loc 3 620 0
 3802 001f 64488B04 		movq	%fs:40, %rax
 3802      25280000 
 3802      00
 3803 0028 48894424 		movq	%rax, 24(%rsp)
 3803      18
 3804 002d 31C0     		xorl	%eax, %eax
 621:fltk-1.3.4-1/src/Fl_Browser.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 3805              		.loc 3 621 0
 3806 002f 85F6     		testl	%esi, %esi
 3807 0031 B8010000 		movl	$1, %eax
 3807      00
 3808 0036 0F4EF0   		cmovle	%eax, %esi
 3809              	.LVL336:
 3810 0039 39EE     		cmpl	%ebp, %esi
 3811 003b 0F4EEE   		cmovle	%esi, %ebp
 3812              	.LVL337:
 623:fltk-1.3.4-1/src/Fl_Browser.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 3813              		.loc 3 623 0
 3814 003e 4531ED   		xorl	%r13d, %r13d
 626:fltk-1.3.4-1/src/Fl_Browser.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3815              		.loc 3 626 0
 3816 0041 4885DB   		testq	%rbx, %rbx
 3817 0044 7526     		jne	.L354
 3818 0046 EB29     		jmp	.L330
 3819              	.LVL338:
 3820 0048 0F1F8400 		.p2align 4,,10
 3820      00000000 
 3821              		.p2align 3
 3822              	.L355:
 627:fltk-1.3.4-1/src/Fl_Browser.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 3823              		.loc 3 627 0 discriminator 2
 3824 0050 498B0424 		movq	(%r12), %rax
 3825 0054 4889DE   		movq	%rbx, %rsi
 3826 0057 4C89E7   		movq	%r12, %rdi
 3827 005a 83ED01   		subl	$1, %ebp
 3828              	.LVL339:
 3829 005d FF5070   		call	*112(%rax)
 3830              	.LVL340:
 626:fltk-1.3.4-1/src/Fl_Browser.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3831              		.loc 3 626 0 discriminator 2
 3832 0060 488B5B08 		movq	8(%rbx), %rbx
 3833              	.LVL341:
 627:fltk-1.3.4-1/src/Fl_Browser.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 3834              		.loc 3 627 0 discriminator 2
 3835 0064 4101C5   		addl	%eax, %r13d
 3836              	.LVL342:
 626:fltk-1.3.4-1/src/Fl_Browser.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3837              		.loc 3 626 0 discriminator 2
 3838 0067 4885DB   		testq	%rbx, %rbx
 3839 006a 7405     		je	.L330
 3840              	.LVL343:
 3841              	.L354:
 626:fltk-1.3.4-1/src/Fl_Browser.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3842              		.loc 3 626 0 is_stmt 0
 3843 006c 83FD01   		cmpl	$1, %ebp
 3844 006f 7FDF     		jg	.L355
 3845              	.L330:
 629:fltk-1.3.4-1/src/Fl_Browser.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 3846              		.loc 3 629 0 is_stmt 1
 3847 0071 4885DB   		testq	%rbx, %rbx
 3848 0074 740A     		je	.L333
 3849 0076 4183FE01 		cmpl	$1, %r14d
 3850 007a 0F84A000 		je	.L356
 3850      0000
 3851              	.L333:
 3852              	.LVL344:
 632:fltk-1.3.4-1/src/Fl_Browser.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 3853              		.loc 3 632 0
 3854 0080 4C8D4424 		leaq	20(%rsp), %r8
 3854      14
 3855 0085 488D4C24 		leaq	16(%rsp), %rcx
 3855      10
 3856 008a 488D5424 		leaq	12(%rsp), %rdx
 3856      0C
 3857 008f 488D7424 		leaq	8(%rsp), %rsi
 3857      08
 3858 0094 4C89E7   		movq	%r12, %rdi
 3859 0097 E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 3859      00
 3860              	.LVL345:
 634:fltk-1.3.4-1/src/Fl_Browser.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 3861              		.loc 3 634 0
 3862 009c 4183FE01 		cmpl	$1, %r14d
 3863 00a0 0F84BA00 		je	.L335
 3863      0000
 3864 00a6 4183FE02 		cmpl	$2, %r14d
 3865 00aa 745C     		je	.L336
 3866              	.LVL346:
 3867              	.L334:
 640:fltk-1.3.4-1/src/Fl_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3868              		.loc 3 640 0
 3869 00ac 498B0424 		movq	(%r12), %rax
 3870 00b0 488B80B0 		movq	176(%rax), %rax
 3870      000000
 3871 00b7 483D0000 		cmpq	$_ZNK10Fl_Browser11full_heightEv, %rax
 3871      0000
 3872 00bd 0F85AD00 		jne	.L337
 3872      0000
 3873              	.LVL347:
 3874              	.LBB416:
 3875              	.LBB417:
 485:fltk-1.3.4-1/src/Fl_Browser.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 3876              		.loc 3 485 0
 3877 00c3 418B8424 		movl	648(%r12), %eax
 3877      88020000 
 3878              	.LVL348:
 3879              	.L338:
 3880              	.LBE417:
 3881              	.LBE416:
 640:fltk-1.3.4-1/src/Fl_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3882              		.loc 3 640 0
 3883 00cb 8B542414 		movl	20(%rsp), %edx
 3884 00cf 29D0     		subl	%edx, %eax
 3885 00d1 4139C5   		cmpl	%eax, %r13d
 3886 00d4 7F62     		jg	.L357
 3887              	.L339:
 641:fltk-1.3.4-1/src/Fl_Browser.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 3888              		.loc 3 641 0
 3889 00d6 4489EE   		movl	%r13d, %esi
 3890 00d9 4C89E7   		movq	%r12, %rdi
 3891 00dc E8000000 		call	_ZN11Fl_Browser_8positionEi
 3891      00
 3892              	.LVL349:
 642:fltk-1.3.4-1/src/Fl_Browser.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 3893              		.loc 3 642 0
 3894 00e1 488B4424 		movq	24(%rsp), %rax
 3894      18
 3895 00e6 64483304 		xorq	%fs:40, %rax
 3895      25280000 
 3895      00
 3896 00ef 0F859000 		jne	.L358
 3896      0000
 3897 00f5 4883C420 		addq	$32, %rsp
 3898              		.cfi_remember_state
 3899              		.cfi_def_cfa_offset 48
 3900 00f9 5B       		popq	%rbx
 3901              		.cfi_def_cfa_offset 40
 3902              	.LVL350:
 3903 00fa 5D       		popq	%rbp
 3904              		.cfi_def_cfa_offset 32
 3905              	.LVL351:
 3906 00fb 415C     		popq	%r12
 3907              		.cfi_def_cfa_offset 24
 3908              	.LVL352:
 3909 00fd 415D     		popq	%r13
 3910              		.cfi_def_cfa_offset 16
 3911              	.LVL353:
 3912 00ff 415E     		popq	%r14
 3913              		.cfi_def_cfa_offset 8
 3914              	.LVL354:
 3915 0101 C3       		ret
 3916              	.LVL355:
 3917              		.p2align 4,,10
 3918 0102 660F1F44 		.p2align 3
 3918      0000
 3919              	.L336:
 3920              		.cfi_restore_state
 637:fltk-1.3.4-1/src/Fl_Browser.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 3921              		.loc 3 637 0
 3922 0108 8B442414 		movl	20(%rsp), %eax
 3923 010c 89C2     		movl	%eax, %edx
 3924 010e C1EA1F   		shrl	$31, %edx
 3925 0111 01D0     		addl	%edx, %eax
 3926 0113 D1F8     		sarl	%eax
 3927 0115 4129C5   		subl	%eax, %r13d
 3928              	.LVL356:
 3929 0118 EB92     		jmp	.L334
 3930              	.LVL357:
 3931 011a 660F1F44 		.p2align 4,,10
 3931      0000
 3932              		.p2align 3
 3933              	.L356:
 629:fltk-1.3.4-1/src/Fl_Browser.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 3934              		.loc 3 629 0 discriminator 1
 3935 0120 498B0424 		movq	(%r12), %rax
 3936 0124 4889DE   		movq	%rbx, %rsi
 3937 0127 4C89E7   		movq	%r12, %rdi
 3938 012a FF5070   		call	*112(%rax)
 3939              	.LVL358:
 3940 012d 4101C5   		addl	%eax, %r13d
 3941              	.LVL359:
 3942 0130 E94BFFFF 		jmp	.L333
 3942      FF
 3943              	.LVL360:
 3944              		.p2align 4,,10
 3945 0135 0F1F00   		.p2align 3
 3946              	.L357:
 640:fltk-1.3.4-1/src/Fl_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3947              		.loc 3 640 0 discriminator 1
 3948 0138 498B0424 		movq	(%r12), %rax
 3949 013c 488B80B0 		movq	176(%rax), %rax
 3949      000000
 3950 0143 483D0000 		cmpq	$_ZNK10Fl_Browser11full_heightEv, %rax
 3950      0000
 3951 0149 752F     		jne	.L340
 3952              	.LVL361:
 3953              	.LBB418:
 3954              	.LBB419:
 485:fltk-1.3.4-1/src/Fl_Browser.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 3955              		.loc 3 485 0
 3956 014b 418B8424 		movl	648(%r12), %eax
 3956      88020000 
 3957              	.LVL362:
 3958              	.L341:
 3959              	.LBE419:
 3960              	.LBE418:
 640:fltk-1.3.4-1/src/Fl_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3961              		.loc 3 640 0 discriminator 1
 3962 0153 29D0     		subl	%edx, %eax
 3963 0155 4189C5   		movl	%eax, %r13d
 3964              	.LVL363:
 3965 0158 E979FFFF 		jmp	.L339
 3965      FF
 3966              	.LVL364:
 3967 015d 0F1F00   		.p2align 4,,10
 3968              		.p2align 3
 3969              	.L335:
 636:fltk-1.3.4-1/src/Fl_Browser.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3970              		.loc 3 636 0
 3971 0160 442B6C24 		subl	20(%rsp), %r13d
 3971      14
 3972              	.LVL365:
 3973 0165 E942FFFF 		jmp	.L334
 3973      FF
 3974 016a 660F1F44 		.p2align 4,,10
 3974      0000
 3975              		.p2align 3
 3976              	.L337:
 640:fltk-1.3.4-1/src/Fl_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3977              		.loc 3 640 0
 3978 0170 4C89E7   		movq	%r12, %rdi
 3979 0173 FFD0     		call	*%rax
 3980              	.LVL366:
 3981 0175 E951FFFF 		jmp	.L338
 3981      FF
 3982              	.L340:
 640:fltk-1.3.4-1/src/Fl_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3983              		.loc 3 640 0 is_stmt 0 discriminator 1
 3984 017a 4C89E7   		movq	%r12, %rdi
 3985 017d FFD0     		call	*%rax
 3986              	.LVL367:
 3987 017f 8B542414 		movl	20(%rsp), %edx
 3988 0183 EBCE     		jmp	.L341
 3989              	.L358:
 642:fltk-1.3.4-1/src/Fl_Browser.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 3990              		.loc 3 642 0 is_stmt 1
 3991 0185 E8000000 		call	__stack_chk_fail
 3991      00
 3992              	.LVL368:
 3993              		.cfi_endproc
 3994              	.LFE582:
 3996              		.section	.text.unlikely._ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
 3997              	.LCOLDE32:
 3998              		.section	.text._ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
 3999              	.LHOTE32:
 4000              		.section	.text.unlikely._ZNK10Fl_Browser7toplineEv,"ax",@progbits
 4001              		.align 2
 4002              	.LCOLDB33:
 4003              		.section	.text._ZNK10Fl_Browser7toplineEv,"ax",@progbits
 4004              	.LHOTB33:
 4005              		.align 2
 4006              		.p2align 4,,15
 4007              		.globl	_ZNK10Fl_Browser7toplineEv
 4009              	_ZNK10Fl_Browser7toplineEv:
 4010              	.LFB583:
 649:fltk-1.3.4-1/src/Fl_Browser.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 4011              		.loc 3 649 0
 4012              		.cfi_startproc
 4013              	.LVL369:
 650:fltk-1.3.4-1/src/Fl_Browser.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 4014              		.loc 3 650 0
 4015 0000 488BB7C8 		movq	200(%rdi), %rsi
 4015      000000
 4016 0007 E9000000 		jmp	_ZNK10Fl_Browser6linenoEPv
 4016      00
 4017              	.LVL370:
 4018              		.cfi_endproc
 4019              	.LFE583:
 4021              		.section	.text.unlikely._ZNK10Fl_Browser7toplineEv
 4022              	.LCOLDE33:
 4023              		.section	.text._ZNK10Fl_Browser7toplineEv
 4024              	.LHOTE33:
 4025              		.section	.text.unlikely._ZN10Fl_Browser8textsizeEi,"ax",@progbits
 4026              		.align 2
 4027              	.LCOLDB34:
 4028              		.section	.text._ZN10Fl_Browser8textsizeEi,"ax",@progbits
 4029              	.LHOTB34:
 4030              		.align 2
 4031              		.p2align 4,,15
 4032              		.globl	_ZN10Fl_Browser8textsizeEi
 4034              	_ZN10Fl_Browser8textsizeEi:
 4035              	.LFB584:
 669:fltk-1.3.4-1/src/Fl_Browser.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4036              		.loc 3 669 0
 4037              		.cfi_startproc
 4038              	.LVL371:
 670:fltk-1.3.4-1/src/Fl_Browser.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 4039              		.loc 3 670 0
 4040 0000 39B7C000 		cmpl	%esi, 192(%rdi)
 4040      0000
 4041 0006 742E     		je	.L376
 669:fltk-1.3.4-1/src/Fl_Browser.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4042              		.loc 3 669 0
 4043 0008 55       		pushq	%rbp
 4044              		.cfi_def_cfa_offset 16
 4045              		.cfi_offset 6, -16
 4046 0009 53       		pushq	%rbx
 4047              		.cfi_def_cfa_offset 24
 4048              		.cfi_offset 3, -24
 4049 000a 4889FB   		movq	%rdi, %rbx
 4050              	.LVL372:
 4051 000d 4883EC08 		subq	$8, %rsp
 4052              		.cfi_def_cfa_offset 32
 4053              	.LBB427:
 4054              	.LBB428:
 4055              		.file 9 "fltk-1.3.4-1/FL/Fl_Browser_.H"
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
 4056              		.loc 9 305 0
 4057 0011 89B7C000 		movl	%esi, 192(%rdi)
 4057      0000
 4058              	.LVL373:
 4059              	.LBE428:
 4060              	.LBE427:
 673:fltk-1.3.4-1/src/Fl_Browser.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 4061              		.loc 3 673 0
 4062 0017 E8000000 		call	_ZN11Fl_Browser_8new_listEv
 4062      00
 4063              	.LVL374:
 675:fltk-1.3.4-1/src/Fl_Browser.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4064              		.loc 3 675 0
 4065 001c 8B838402 		movl	644(%rbx), %eax
 4065      0000
 674:fltk-1.3.4-1/src/Fl_Browser.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 4066              		.loc 3 674 0
 4067 0022 C7838802 		movl	$0, 648(%rbx)
 4067      00000000 
 4067      0000
 675:fltk-1.3.4-1/src/Fl_Browser.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4068              		.loc 3 675 0
 4069 002c 85C0     		testl	%eax, %eax
 4070 002e 7510     		jne	.L377
 4071              	.L360:
 679:fltk-1.3.4-1/src/Fl_Browser.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 4072              		.loc 3 679 0
 4073 0030 4883C408 		addq	$8, %rsp
 4074              		.cfi_def_cfa_offset 24
 4075 0034 5B       		popq	%rbx
 4076              		.cfi_restore 3
 4077              		.cfi_def_cfa_offset 16
 4078              	.LVL375:
 4079 0035 5D       		popq	%rbp
 4080              		.cfi_restore 6
 4081              		.cfi_def_cfa_offset 8
 4082              	.LVL376:
 4083              	.L376:
 4084 0036 F3C3     		rep ret
 4085              	.LVL377:
 4086 0038 0F1F8400 		.p2align 4,,10
 4086      00000000 
 4087              		.p2align 3
 4088              	.L377:
 4089              		.cfi_def_cfa_offset 32
 4090              		.cfi_offset 3, -24
 4091              		.cfi_offset 6, -16
 4092              	.LBB429:
 676:fltk-1.3.4-1/src/Fl_Browser.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4093              		.loc 3 676 0
 4094 0040 488B03   		movq	(%rbx), %rax
 4095 0043 488B4050 		movq	80(%rax), %rax
 4096 0047 483D0000 		cmpq	$_ZNK10Fl_Browser10item_firstEv, %rax
 4096      0000
 4097 004d 7551     		jne	.L362
 4098              	.LVL378:
 4099              	.LBB430:
 4100              	.LBB431:
  70:fltk-1.3.4-1/src/Fl_Browser.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 4101              		.loc 3 70 0
 4102 004f 488BAB68 		movq	616(%rbx), %rbp
 4102      020000
 4103              	.LVL379:
 4104              	.L367:
 4105              	.LBE431:
 4106              	.LBE430:
 676:fltk-1.3.4-1/src/Fl_Browser.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4107              		.loc 3 676 0 discriminator 3
 4108 0056 4885ED   		testq	%rbp, %rbp
 4109 0059 74D5     		je	.L360
 4110              	.L378:
 677:fltk-1.3.4-1/src/Fl_Browser.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4111              		.loc 3 677 0 discriminator 2
 4112 005b 488B03   		movq	(%rbx), %rax
 4113 005e 4889EE   		movq	%rbp, %rsi
 4114 0061 4889DF   		movq	%rbx, %rdi
 4115 0064 FF5070   		call	*112(%rax)
 4116              	.LVL380:
 4117 0067 01838802 		addl	%eax, 648(%rbx)
 4117      0000
 676:fltk-1.3.4-1/src/Fl_Browser.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4118              		.loc 3 676 0 discriminator 2
 4119 006d 488B03   		movq	(%rbx), %rax
 4120 0070 488B4058 		movq	88(%rax), %rax
 4121 0074 483D0000 		cmpq	$_ZNK10Fl_Browser9item_nextEPv, %rax
 4121      0000
 4122 007a 7514     		jne	.L366
 4123              	.LVL381:
 4124              	.LBB432:
 4125              	.LBB433:
  78:fltk-1.3.4-1/src/Fl_Browser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 4126              		.loc 3 78 0
 4127 007c 488B6D08 		movq	8(%rbp), %rbp
 4128              	.LVL382:
 4129              	.LBE433:
 4130              	.LBE432:
 676:fltk-1.3.4-1/src/Fl_Browser.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4131              		.loc 3 676 0
 4132 0080 4885ED   		testq	%rbp, %rbp
 4133 0083 75D6     		jne	.L378
 4134 0085 EBA9     		jmp	.L360
 4135 0087 660F1F84 		.p2align 4,,10
 4135      00000000 
 4135      00
 4136              		.p2align 3
 4137              	.L366:
 676:fltk-1.3.4-1/src/Fl_Browser.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4138              		.loc 3 676 0 is_stmt 0 discriminator 2
 4139 0090 4889EE   		movq	%rbp, %rsi
 4140 0093 4889DF   		movq	%rbx, %rdi
 4141 0096 FFD0     		call	*%rax
 4142              	.LVL383:
 4143 0098 4889C5   		movq	%rax, %rbp
 4144              	.LVL384:
 4145 009b EBB9     		jmp	.L367
 4146 009d 0F1F00   		.p2align 4,,10
 4147              		.p2align 3
 4148              	.L362:
 676:fltk-1.3.4-1/src/Fl_Browser.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4149              		.loc 3 676 0
 4150 00a0 4889DF   		movq	%rbx, %rdi
 4151 00a3 FFD0     		call	*%rax
 4152              	.LVL385:
 4153 00a5 4889C5   		movq	%rax, %rbp
 4154              	.LVL386:
 4155 00a8 EBAC     		jmp	.L367
 4156              	.LBE429:
 4157              		.cfi_endproc
 4158              	.LFE584:
 4160              		.section	.text.unlikely._ZN10Fl_Browser8textsizeEi
 4161              	.LCOLDE34:
 4162              		.section	.text._ZN10Fl_Browser8textsizeEi
 4163              	.LHOTE34:
 4164              		.section	.text.unlikely._ZN10Fl_Browser5clearEv,"ax",@progbits
 4165              		.align 2
 4166              	.LCOLDB35:
 4167              		.section	.text._ZN10Fl_Browser5clearEv,"ax",@progbits
 4168              	.LHOTB35:
 4169              		.align 2
 4170              		.p2align 4,,15
 4171              		.globl	_ZN10Fl_Browser5clearEv
 4173              	_ZN10Fl_Browser5clearEv:
 4174              	.LFB585:
 685:fltk-1.3.4-1/src/Fl_Browser.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4175              		.loc 3 685 0 is_stmt 1
 4176              		.cfi_startproc
 4177              	.LVL387:
 4178 0000 55       		pushq	%rbp
 4179              		.cfi_def_cfa_offset 16
 4180              		.cfi_offset 6, -16
 4181 0001 53       		pushq	%rbx
 4182              		.cfi_def_cfa_offset 24
 4183              		.cfi_offset 3, -24
 4184 0002 4889FD   		movq	%rdi, %rbp
 4185 0005 4883EC08 		subq	$8, %rsp
 4186              		.cfi_def_cfa_offset 32
 4187              	.LBB434:
 686:fltk-1.3.4-1/src/Fl_Browser.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4188              		.loc 3 686 0
 4189 0009 488BBF68 		movq	616(%rdi), %rdi
 4189      020000
 4190              	.LVL388:
 4191 0010 4885FF   		testq	%rdi, %rdi
 4192 0013 7414     		je	.L381
 4193              		.p2align 4,,10
 4194 0015 0F1F00   		.p2align 3
 4195              	.L385:
 4196              	.LBB435:
 687:fltk-1.3.4-1/src/Fl_Browser.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 4197              		.loc 3 687 0
 4198 0018 488B5F08 		movq	8(%rdi), %rbx
 4199              	.LVL389:
 688:fltk-1.3.4-1/src/Fl_Browser.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4200              		.loc 3 688 0
 4201 001c E8000000 		call	free
 4201      00
 4202              	.LVL390:
 4203              	.LBE435:
 686:fltk-1.3.4-1/src/Fl_Browser.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4204              		.loc 3 686 0
 4205 0021 4885DB   		testq	%rbx, %rbx
 4206 0024 4889DF   		movq	%rbx, %rdi
 4207 0027 75EF     		jne	.L385
 4208              	.LVL391:
 4209              	.L381:
 4210              	.LBE434:
 691:fltk-1.3.4-1/src/Fl_Browser.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 4211              		.loc 3 691 0
 4212 0029 C7858802 		movl	$0, 648(%rbp)
 4212      00000000 
 4212      0000
 692:fltk-1.3.4-1/src/Fl_Browser.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 4213              		.loc 3 692 0
 4214 0033 48C78568 		movq	$0, 616(%rbp)
 4214      02000000 
 4214      000000
 695:fltk-1.3.4-1/src/Fl_Browser.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 4215              		.loc 3 695 0
 4216 003e 4889EF   		movq	%rbp, %rdi
 4217              	.LVL392:
 693:fltk-1.3.4-1/src/Fl_Browser.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4218              		.loc 3 693 0
 4219 0041 48C78570 		movq	$0, 624(%rbp)
 4219      02000000 
 4219      000000
 694:fltk-1.3.4-1/src/Fl_Browser.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 4220              		.loc 3 694 0
 4221 004c C7858402 		movl	$0, 644(%rbp)
 4221      00000000 
 4221      0000
 696:fltk-1.3.4-1/src/Fl_Browser.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 4222              		.loc 3 696 0
 4223 0056 4883C408 		addq	$8, %rsp
 4224              		.cfi_def_cfa_offset 24
 4225 005a 5B       		popq	%rbx
 4226              		.cfi_def_cfa_offset 16
 4227 005b 5D       		popq	%rbp
 4228              		.cfi_def_cfa_offset 8
 4229              	.LVL393:
 695:fltk-1.3.4-1/src/Fl_Browser.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 4230              		.loc 3 695 0
 4231 005c E9000000 		jmp	_ZN11Fl_Browser_8new_listEv
 4231      00
 4232              	.LVL394:
 4233              		.cfi_endproc
 4234              	.LFE585:
 4236              		.section	.text.unlikely._ZN10Fl_Browser5clearEv
 4237              	.LCOLDE35:
 4238              		.section	.text._ZN10Fl_Browser5clearEv
 4239              	.LHOTE35:
 4240              		.section	.text.unlikely._ZN10Fl_Browser3addEPKcPv,"ax",@progbits
 4241              		.align 2
 4242              	.LCOLDB36:
 4243              		.section	.text._ZN10Fl_Browser3addEPKcPv,"ax",@progbits
 4244              	.LHOTB36:
 4245              		.align 2
 4246              		.p2align 4,,15
 4247              		.globl	_ZN10Fl_Browser3addEPKcPv
 4249              	_ZN10Fl_Browser3addEPKcPv:
 4250              	.LFB586:
 710:fltk-1.3.4-1/src/Fl_Browser.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 4251              		.loc 3 710 0
 4252              		.cfi_startproc
 4253              	.LVL395:
 711:fltk-1.3.4-1/src/Fl_Browser.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4254              		.loc 3 711 0
 4255 0000 8B8F8402 		movl	644(%rdi), %ecx
 4255      0000
 710:fltk-1.3.4-1/src/Fl_Browser.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 4256              		.loc 3 710 0
 4257 0006 4889F0   		movq	%rsi, %rax
 711:fltk-1.3.4-1/src/Fl_Browser.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4258              		.loc 3 711 0
 4259 0009 8D7101   		leal	1(%rcx), %esi
 4260              	.LVL396:
 4261 000c 4889D1   		movq	%rdx, %rcx
 4262 000f 4889C2   		movq	%rax, %rdx
 4263              	.LVL397:
 4264 0012 E9000000 		jmp	_ZN10Fl_Browser6insertEiPKcPv
 4264      00
 4265              	.LVL398:
 4266              		.cfi_endproc
 4267              	.LFE586:
 4269              		.section	.text.unlikely._ZN10Fl_Browser3addEPKcPv
 4270              	.LCOLDE36:
 4271              		.section	.text._ZN10Fl_Browser3addEPKcPv
 4272              	.LHOTE36:
 4273              		.section	.text.unlikely._ZNK10Fl_Browser4textEi,"ax",@progbits
 4274              		.align 2
 4275              	.LCOLDB37:
 4276              		.section	.text._ZNK10Fl_Browser4textEi,"ax",@progbits
 4277              	.LHOTB37:
 4278              		.align 2
 4279              		.p2align 4,,15
 4280              		.globl	_ZNK10Fl_Browser4textEi
 4282              	_ZNK10Fl_Browser4textEi:
 4283              	.LFB587:
 722:fltk-1.3.4-1/src/Fl_Browser.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 4284              		.loc 3 722 0
 4285              		.cfi_startproc
 4286              	.LVL399:
 723:fltk-1.3.4-1/src/Fl_Browser.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4287              		.loc 3 723 0
 4288 0000 31C0     		xorl	%eax, %eax
 4289 0002 85F6     		testl	%esi, %esi
 4290 0004 7E1A     		jle	.L390
 723:fltk-1.3.4-1/src/Fl_Browser.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4291              		.loc 3 723 0 is_stmt 0 discriminator 2
 4292 0006 3BB78402 		cmpl	644(%rdi), %esi
 4292      0000
 4293 000c 7F12     		jg	.L390
 724:fltk-1.3.4-1/src/Fl_Browser.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 4294              		.loc 3 724 0 is_stmt 1
 4295 000e E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4295      00
 4296              	.LVL400:
 4297 0013 4883C023 		addq	$35, %rax
 4298 0017 C3       		ret
 4299              	.LVL401:
 4300 0018 0F1F8400 		.p2align 4,,10
 4300      00000000 
 4301              		.p2align 3
 4302              	.L390:
 725:fltk-1.3.4-1/src/Fl_Browser.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4303              		.loc 3 725 0
 4304 0020 F3C3     		rep ret
 4305              		.cfi_endproc
 4306              	.LFE587:
 4308              		.section	.text.unlikely._ZNK10Fl_Browser4textEi
 4309              	.LCOLDE37:
 4310              		.section	.text._ZNK10Fl_Browser4textEi
 4311              	.LHOTE37:
 4312              		.section	.text.unlikely._ZNK10Fl_Browser4dataEi,"ax",@progbits
 4313              		.align 2
 4314              	.LCOLDB38:
 4315              		.section	.text._ZNK10Fl_Browser4dataEi,"ax",@progbits
 4316              	.LHOTB38:
 4317              		.align 2
 4318              		.p2align 4,,15
 4319              		.globl	_ZNK10Fl_Browser4dataEi
 4321              	_ZNK10Fl_Browser4dataEi:
 4322              	.LFB588:
 735:fltk-1.3.4-1/src/Fl_Browser.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 4323              		.loc 3 735 0
 4324              		.cfi_startproc
 4325              	.LVL402:
 736:fltk-1.3.4-1/src/Fl_Browser.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4326              		.loc 3 736 0
 4327 0000 31C0     		xorl	%eax, %eax
 4328 0002 85F6     		testl	%esi, %esi
 4329 0004 7E1A     		jle	.L394
 736:fltk-1.3.4-1/src/Fl_Browser.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4330              		.loc 3 736 0 is_stmt 0 discriminator 2
 4331 0006 3BB78402 		cmpl	644(%rdi), %esi
 4331      0000
 4332 000c 7F12     		jg	.L394
 737:fltk-1.3.4-1/src/Fl_Browser.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 4333              		.loc 3 737 0 is_stmt 1
 4334 000e E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4334      00
 4335              	.LVL403:
 4336 0013 488B4010 		movq	16(%rax), %rax
 4337 0017 C3       		ret
 4338              	.LVL404:
 4339 0018 0F1F8400 		.p2align 4,,10
 4339      00000000 
 4340              		.p2align 3
 4341              	.L394:
 738:fltk-1.3.4-1/src/Fl_Browser.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4342              		.loc 3 738 0
 4343 0020 F3C3     		rep ret
 4344              		.cfi_endproc
 4345              	.LFE588:
 4347              		.section	.text.unlikely._ZNK10Fl_Browser4dataEi
 4348              	.LCOLDE38:
 4349              		.section	.text._ZNK10Fl_Browser4dataEi
 4350              	.LHOTE38:
 4351              		.section	.text.unlikely._ZN10Fl_Browser6selectEii,"ax",@progbits
 4352              		.align 2
 4353              	.LCOLDB39:
 4354              		.section	.text._ZN10Fl_Browser6selectEii,"ax",@progbits
 4355              	.LHOTB39:
 4356              		.align 2
 4357              		.p2align 4,,15
 4358              		.globl	_ZN10Fl_Browser6selectEii
 4360              	_ZN10Fl_Browser6selectEii:
 4361              	.LFB589:
 748:fltk-1.3.4-1/src/Fl_Browser.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4362              		.loc 3 748 0
 4363              		.cfi_startproc
 4364              	.LVL405:
 749:fltk-1.3.4-1/src/Fl_Browser.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 4365              		.loc 3 749 0
 4366 0000 85F6     		testl	%esi, %esi
 4367 0002 7E08     		jle	.L398
 749:fltk-1.3.4-1/src/Fl_Browser.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 4368              		.loc 3 749 0 is_stmt 0 discriminator 2
 4369 0004 3BB78402 		cmpl	644(%rdi), %esi
 4369      0000
 4370 000a 7E04     		jle	.L402
 4371              	.L398:
 751:fltk-1.3.4-1/src/Fl_Browser.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 4372              		.loc 3 751 0 is_stmt 1
 4373 000c 31C0     		xorl	%eax, %eax
 4374 000e C3       		ret
 4375 000f 90       		.p2align 4,,10
 4376              		.p2align 3
 4377              	.L402:
 748:fltk-1.3.4-1/src/Fl_Browser.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4378              		.loc 3 748 0
 4379 0010 4883EC08 		subq	$8, %rsp
 4380              		.cfi_def_cfa_offset 16
 4381 0014 4189D2   		movl	%edx, %r10d
 750:fltk-1.3.4-1/src/Fl_Browser.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4382              		.loc 3 750 0
 4383 0017 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4383      00
 4384              	.LVL406:
 4385 001c 31C9     		xorl	%ecx, %ecx
 4386 001e 4489D2   		movl	%r10d, %edx
 4387 0021 4889C6   		movq	%rax, %rsi
 751:fltk-1.3.4-1/src/Fl_Browser.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 4388              		.loc 3 751 0
 4389 0024 4883C408 		addq	$8, %rsp
 4390              		.cfi_def_cfa_offset 8
 750:fltk-1.3.4-1/src/Fl_Browser.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4391              		.loc 3 750 0
 4392 0028 E9000000 		jmp	_ZN11Fl_Browser_6selectEPvii
 4392      00
 4393              	.LVL407:
 4394              		.cfi_endproc
 4395              	.LFE589:
 4397              		.section	.text.unlikely._ZN10Fl_Browser6selectEii
 4398              	.LCOLDE39:
 4399              		.section	.text._ZN10Fl_Browser6selectEii
 4400              	.LHOTE39:
 4401              		.section	.text.unlikely._ZNK10Fl_Browser8selectedEi,"ax",@progbits
 4402              		.align 2
 4403              	.LCOLDB40:
 4404              		.section	.text._ZNK10Fl_Browser8selectedEi,"ax",@progbits
 4405              	.LHOTB40:
 4406              		.align 2
 4407              		.p2align 4,,15
 4408              		.globl	_ZNK10Fl_Browser8selectedEi
 4410              	_ZNK10Fl_Browser8selectedEi:
 4411              	.LFB590:
 759:fltk-1.3.4-1/src/Fl_Browser.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 4412              		.loc 3 759 0
 4413              		.cfi_startproc
 4414              	.LVL408:
 760:fltk-1.3.4-1/src/Fl_Browser.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 4415              		.loc 3 760 0
 4416 0000 31C0     		xorl	%eax, %eax
 4417 0002 85F6     		testl	%esi, %esi
 4418 0004 7E08     		jle	.L404
 760:fltk-1.3.4-1/src/Fl_Browser.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 4419              		.loc 3 760 0 is_stmt 0 discriminator 2
 4420 0006 3BB78402 		cmpl	644(%rdi), %esi
 4420      0000
 4421 000c 7E02     		jle	.L407
 4422              	.L404:
 762:fltk-1.3.4-1/src/Fl_Browser.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4423              		.loc 3 762 0 is_stmt 1
 4424 000e F3C3     		rep ret
 4425              		.p2align 4,,10
 4426              		.p2align 3
 4427              	.L407:
 761:fltk-1.3.4-1/src/Fl_Browser.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 4428              		.loc 3 761 0
 4429 0010 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4429      00
 4430              	.LVL409:
 4431 0015 0FB64022 		movzbl	34(%rax), %eax
 4432 0019 83E001   		andl	$1, %eax
 4433 001c C3       		ret
 4434              		.cfi_endproc
 4435              	.LFE590:
 4437              		.section	.text.unlikely._ZNK10Fl_Browser8selectedEi
 4438              	.LCOLDE40:
 4439              		.section	.text._ZNK10Fl_Browser8selectedEi
 4440              	.LHOTE40:
 4441              		.section	.text.unlikely._ZN10Fl_Browser4showEi,"ax",@progbits
 4442              		.align 2
 4443              	.LCOLDB41:
 4444              		.section	.text._ZN10Fl_Browser4showEi,"ax",@progbits
 4445              	.LHOTB41:
 4446              		.align 2
 4447              		.p2align 4,,15
 4448              		.globl	_ZN10Fl_Browser4showEi
 4450              	_ZN10Fl_Browser4showEi:
 4451              	.LFB591:
 772:fltk-1.3.4-1/src/Fl_Browser.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4452              		.loc 3 772 0
 4453              		.cfi_startproc
 4454              	.LVL410:
 4455 0000 55       		pushq	%rbp
 4456              		.cfi_def_cfa_offset 16
 4457              		.cfi_offset 6, -16
 4458 0001 53       		pushq	%rbx
 4459              		.cfi_def_cfa_offset 24
 4460              		.cfi_offset 3, -24
 4461 0002 4889FB   		movq	%rdi, %rbx
 4462 0005 4883EC08 		subq	$8, %rsp
 4463              		.cfi_def_cfa_offset 32
 773:fltk-1.3.4-1/src/Fl_Browser.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 4464              		.loc 3 773 0
 4465 0009 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4465      00
 4466              	.LVL411:
 4467 000e 4889C5   		movq	%rax, %rbp
 4468              	.LVL412:
 774:fltk-1.3.4-1/src/Fl_Browser.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4469              		.loc 3 774 0
 4470 0011 0FB64022 		movzbl	34(%rax), %eax
 4471              	.LVL413:
 4472 0015 A802     		testb	$2, %al
 4473 0017 7507     		jne	.L416
 4474              	.L408:
 779:fltk-1.3.4-1/src/Fl_Browser.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4475              		.loc 3 779 0
 4476 0019 4883C408 		addq	$8, %rsp
 4477              		.cfi_remember_state
 4478              		.cfi_def_cfa_offset 24
 4479 001d 5B       		popq	%rbx
 4480              		.cfi_def_cfa_offset 16
 4481              	.LVL414:
 4482 001e 5D       		popq	%rbp
 4483              		.cfi_def_cfa_offset 8
 4484              	.LVL415:
 4485 001f C3       		ret
 4486              	.LVL416:
 4487              		.p2align 4,,10
 4488              		.p2align 3
 4489              	.L416:
 4490              		.cfi_restore_state
 775:fltk-1.3.4-1/src/Fl_Browser.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 4491              		.loc 3 775 0
 4492 0020 83E0FD   		andl	$-3, %eax
 776:fltk-1.3.4-1/src/Fl_Browser.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 4493              		.loc 3 776 0
 4494 0023 4889EE   		movq	%rbp, %rsi
 775:fltk-1.3.4-1/src/Fl_Browser.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 4495              		.loc 3 775 0
 4496 0026 884522   		movb	%al, 34(%rbp)
 776:fltk-1.3.4-1/src/Fl_Browser.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 4497              		.loc 3 776 0
 4498 0029 488B07   		movq	(%rdi), %rax
 4499 002c FF5070   		call	*112(%rax)
 4500              	.LVL417:
 4501 002f 01838802 		addl	%eax, 648(%rbx)
 4501      0000
 777:fltk-1.3.4-1/src/Fl_Browser.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 4502              		.loc 3 777 0
 4503 0035 4889EE   		movq	%rbp, %rsi
 4504 0038 4889DF   		movq	%rbx, %rdi
 4505 003b E8000000 		call	_ZNK11Fl_Browser_9displayedEPv
 4505      00
 4506              	.LVL418:
 4507 0040 85C0     		testl	%eax, %eax
 4508 0042 74D5     		je	.L408
 779:fltk-1.3.4-1/src/Fl_Browser.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4509              		.loc 3 779 0 discriminator 1
 4510 0044 4883C408 		addq	$8, %rsp
 4511              		.cfi_def_cfa_offset 24
 777:fltk-1.3.4-1/src/Fl_Browser.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 4512              		.loc 3 777 0 discriminator 1
 4513 0048 4889DF   		movq	%rbx, %rdi
 779:fltk-1.3.4-1/src/Fl_Browser.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4514              		.loc 3 779 0 discriminator 1
 4515 004b 5B       		popq	%rbx
 4516              		.cfi_def_cfa_offset 16
 4517              	.LVL419:
 4518 004c 5D       		popq	%rbp
 4519              		.cfi_def_cfa_offset 8
 4520              	.LVL420:
 777:fltk-1.3.4-1/src/Fl_Browser.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 4521              		.loc 3 777 0 discriminator 1
 4522 004d E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 4522      00
 4523              	.LVL421:
 4524              		.cfi_endproc
 4525              	.LFE591:
 4527              		.section	.text.unlikely._ZN10Fl_Browser4showEi
 4528              	.LCOLDE41:
 4529              		.section	.text._ZN10Fl_Browser4showEi
 4530              	.LHOTE41:
 4531              		.section	.text.unlikely._ZN10Fl_Browser4hideEi,"ax",@progbits
 4532              		.align 2
 4533              	.LCOLDB42:
 4534              		.section	.text._ZN10Fl_Browser4hideEi,"ax",@progbits
 4535              	.LHOTB42:
 4536              		.align 2
 4537              		.p2align 4,,15
 4538              		.globl	_ZN10Fl_Browser4hideEi
 4540              	_ZN10Fl_Browser4hideEi:
 4541              	.LFB592:
 790:fltk-1.3.4-1/src/Fl_Browser.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4542              		.loc 3 790 0
 4543              		.cfi_startproc
 4544              	.LVL422:
 4545 0000 55       		pushq	%rbp
 4546              		.cfi_def_cfa_offset 16
 4547              		.cfi_offset 6, -16
 4548 0001 53       		pushq	%rbx
 4549              		.cfi_def_cfa_offset 24
 4550              		.cfi_offset 3, -24
 4551 0002 4889FB   		movq	%rdi, %rbx
 4552 0005 4883EC08 		subq	$8, %rsp
 4553              		.cfi_def_cfa_offset 32
 791:fltk-1.3.4-1/src/Fl_Browser.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 4554              		.loc 3 791 0
 4555 0009 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4555      00
 4556              	.LVL423:
 792:fltk-1.3.4-1/src/Fl_Browser.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 4557              		.loc 3 792 0
 4558 000e F6402202 		testb	$2, 34(%rax)
 4559 0012 740C     		je	.L425
 4560              	.LVL424:
 4561              	.L417:
 797:fltk-1.3.4-1/src/Fl_Browser.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 4562              		.loc 3 797 0
 4563 0014 4883C408 		addq	$8, %rsp
 4564              		.cfi_remember_state
 4565              		.cfi_def_cfa_offset 24
 4566 0018 5B       		popq	%rbx
 4567              		.cfi_def_cfa_offset 16
 4568              	.LVL425:
 4569 0019 5D       		popq	%rbp
 4570              		.cfi_def_cfa_offset 8
 4571 001a C3       		ret
 4572              	.LVL426:
 4573 001b 0F1F4400 		.p2align 4,,10
 4573      00
 4574              		.p2align 3
 4575              	.L425:
 4576              		.cfi_restore_state
 4577 0020 4889C5   		movq	%rax, %rbp
 793:fltk-1.3.4-1/src/Fl_Browser.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4578              		.loc 3 793 0
 4579 0023 488B07   		movq	(%rdi), %rax
 4580              	.LVL427:
 4581 0026 4889EE   		movq	%rbp, %rsi
 4582 0029 FF5070   		call	*112(%rax)
 4583              	.LVL428:
 4584 002c 29838802 		subl	%eax, 648(%rbx)
 4584      0000
 795:fltk-1.3.4-1/src/Fl_Browser.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 4585              		.loc 3 795 0
 4586 0032 4889EE   		movq	%rbp, %rsi
 4587 0035 4889DF   		movq	%rbx, %rdi
 794:fltk-1.3.4-1/src/Fl_Browser.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 4588              		.loc 3 794 0
 4589 0038 804D2202 		orb	$2, 34(%rbp)
 795:fltk-1.3.4-1/src/Fl_Browser.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 4590              		.loc 3 795 0
 4591 003c E8000000 		call	_ZNK11Fl_Browser_9displayedEPv
 4591      00
 4592              	.LVL429:
 4593 0041 85C0     		testl	%eax, %eax
 4594 0043 74CF     		je	.L417
 797:fltk-1.3.4-1/src/Fl_Browser.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 4595              		.loc 3 797 0 discriminator 1
 4596 0045 4883C408 		addq	$8, %rsp
 4597              		.cfi_def_cfa_offset 24
 795:fltk-1.3.4-1/src/Fl_Browser.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 4598              		.loc 3 795 0 discriminator 1
 4599 0049 4889DF   		movq	%rbx, %rdi
 797:fltk-1.3.4-1/src/Fl_Browser.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 4600              		.loc 3 797 0 discriminator 1
 4601 004c 5B       		popq	%rbx
 4602              		.cfi_def_cfa_offset 16
 4603              	.LVL430:
 4604 004d 5D       		popq	%rbp
 4605              		.cfi_def_cfa_offset 8
 4606              	.LVL431:
 795:fltk-1.3.4-1/src/Fl_Browser.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 4607              		.loc 3 795 0 discriminator 1
 4608 004e E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 4608      00
 4609              	.LVL432:
 4610              		.cfi_endproc
 4611              	.LFE592:
 4613              		.section	.text.unlikely._ZN10Fl_Browser4hideEi
 4614              	.LCOLDE42:
 4615              		.section	.text._ZN10Fl_Browser4hideEi
 4616              	.LHOTE42:
 4617              		.section	.text.unlikely._ZN10Fl_Browser7displayEii,"ax",@progbits
 4618              		.align 2
 4619              	.LCOLDB43:
 4620              		.section	.text._ZN10Fl_Browser7displayEii,"ax",@progbits
 4621              	.LHOTB43:
 4622              		.align 2
 4623              		.p2align 4,,15
 4624              		.globl	_ZN10Fl_Browser7displayEii
 4626              	_ZN10Fl_Browser7displayEii:
 4627              	.LFB593:
 805:fltk-1.3.4-1/src/Fl_Browser.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 4628              		.loc 3 805 0
 4629              		.cfi_startproc
 4630              	.LVL433:
 806:fltk-1.3.4-1/src/Fl_Browser.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4631              		.loc 3 806 0
 4632 0000 85F6     		testl	%esi, %esi
 4633 0002 7E14     		jle	.L426
 806:fltk-1.3.4-1/src/Fl_Browser.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4634              		.loc 3 806 0 is_stmt 0 discriminator 1
 4635 0004 3BB78402 		cmpl	644(%rdi), %esi
 4635      0000
 4636 000a 7F0C     		jg	.L426
 807:fltk-1.3.4-1/src/Fl_Browser.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 4637              		.loc 3 807 0 is_stmt 1
 4638 000c 85D2     		testl	%edx, %edx
 4639 000e 7510     		jne	.L429
 807:fltk-1.3.4-1/src/Fl_Browser.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 4640              		.loc 3 807 0 is_stmt 0 discriminator 2
 4641 0010 E9000000 		jmp	_ZN10Fl_Browser4hideEi
 4641      00
 4642              	.LVL434:
 4643              		.p2align 4,,10
 4644 0015 0F1F00   		.p2align 3
 4645              	.L426:
 4646 0018 F3C3     		rep ret
 4647 001a 660F1F44 		.p2align 4,,10
 4647      0000
 4648              		.p2align 3
 4649              	.L429:
 807:fltk-1.3.4-1/src/Fl_Browser.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 4650              		.loc 3 807 0 discriminator 1
 4651 0020 E9000000 		jmp	_ZN10Fl_Browser4showEi
 4651      00
 4652              	.LVL435:
 4653              		.cfi_endproc
 4654              	.LFE593:
 4656              		.section	.text.unlikely._ZN10Fl_Browser7displayEii
 4657              	.LCOLDE43:
 4658              		.section	.text._ZN10Fl_Browser7displayEii
 4659              	.LHOTE43:
 4660              		.section	.text.unlikely._ZNK10Fl_Browser7visibleEi,"ax",@progbits
 4661              		.align 2
 4662              	.LCOLDB44:
 4663              		.section	.text._ZNK10Fl_Browser7visibleEi,"ax",@progbits
 4664              	.LHOTB44:
 4665              		.align 2
 4666              		.p2align 4,,15
 4667              		.globl	_ZNK10Fl_Browser7visibleEi
 4669              	_ZNK10Fl_Browser7visibleEi:
 4670              	.LFB594:
 816:fltk-1.3.4-1/src/Fl_Browser.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 4671              		.loc 3 816 0 is_stmt 1
 4672              		.cfi_startproc
 4673              	.LVL436:
 817:fltk-1.3.4-1/src/Fl_Browser.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 4674              		.loc 3 817 0
 4675 0000 31C0     		xorl	%eax, %eax
 4676 0002 85F6     		testl	%esi, %esi
 4677 0004 7E08     		jle	.L431
 817:fltk-1.3.4-1/src/Fl_Browser.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 4678              		.loc 3 817 0 is_stmt 0 discriminator 2
 4679 0006 3BB78402 		cmpl	644(%rdi), %esi
 4679      0000
 4680 000c 7E02     		jle	.L434
 4681              	.L431:
 819:fltk-1.3.4-1/src/Fl_Browser.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 4682              		.loc 3 819 0 is_stmt 1
 4683 000e F3C3     		rep ret
 4684              		.p2align 4,,10
 4685              		.p2align 3
 4686              	.L434:
 818:fltk-1.3.4-1/src/Fl_Browser.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4687              		.loc 3 818 0
 4688 0010 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4688      00
 4689              	.LVL437:
 4690 0015 0FB64022 		movzbl	34(%rax), %eax
 4691 0019 D0E8     		shrb	%al
 4692 001b 83F001   		xorl	$1, %eax
 4693 001e 83E001   		andl	$1, %eax
 4694 0021 C3       		ret
 4695              		.cfi_endproc
 4696              	.LFE594:
 4698              		.section	.text.unlikely._ZNK10Fl_Browser7visibleEi
 4699              	.LCOLDE44:
 4700              		.section	.text._ZNK10Fl_Browser7visibleEi
 4701              	.LHOTE44:
 4702              		.section	.text.unlikely._ZNK10Fl_Browser5valueEv,"ax",@progbits
 4703              		.align 2
 4704              	.LCOLDB45:
 4705              		.section	.text._ZNK10Fl_Browser5valueEv,"ax",@progbits
 4706              	.LHOTB45:
 4707              		.align 2
 4708              		.p2align 4,,15
 4709              		.globl	_ZNK10Fl_Browser5valueEv
 4711              	_ZNK10Fl_Browser5valueEv:
 4712              	.LFB595:
 826:fltk-1.3.4-1/src/Fl_Browser.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 4713              		.loc 3 826 0
 4714              		.cfi_startproc
 4715              	.LVL438:
 827:fltk-1.3.4-1/src/Fl_Browser.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4716              		.loc 3 827 0
 4717 0000 488BB7D0 		movq	208(%rdi), %rsi
 4717      000000
 4718 0007 E9000000 		jmp	_ZNK10Fl_Browser6linenoEPv
 4718      00
 4719              	.LVL439:
 4720              		.cfi_endproc
 4721              	.LFE595:
 4723              		.section	.text.unlikely._ZNK10Fl_Browser5valueEv
 4724              	.LCOLDE45:
 4725              		.section	.text._ZNK10Fl_Browser5valueEv
 4726              	.LHOTE45:
 4727              		.section	.text.unlikely._ZN10Fl_Browser4swapEP8FL_BLINES1_,"ax",@progbits
 4728              		.align 2
 4729              	.LCOLDB46:
 4730              		.section	.text._ZN10Fl_Browser4swapEP8FL_BLINES1_,"ax",@progbits
 4731              	.LHOTB46:
 4732              		.align 2
 4733              		.p2align 4,,15
 4734              		.globl	_ZN10Fl_Browser4swapEP8FL_BLINES1_
 4736              	_ZN10Fl_Browser4swapEP8FL_BLINES1_:
 4737              	.LFB596:
 836:fltk-1.3.4-1/src/Fl_Browser.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 4738              		.loc 3 836 0
 4739              		.cfi_startproc
 4740              	.LVL440:
 838:fltk-1.3.4-1/src/Fl_Browser.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 4741              		.loc 3 838 0
 4742 0000 4839D6   		cmpq	%rdx, %rsi
 4743 0003 0F94C1   		sete	%cl
 4744 0006 4885F6   		testq	%rsi, %rsi
 4745 0009 0F94C0   		sete	%al
 4746 000c 08C1     		orb	%al, %cl
 4747 000e 7510     		jne	.L436
 4748 0010 4885D2   		testq	%rdx, %rdx
 4749 0013 740B     		je	.L436
 4750 0015 E9000000 		jmp	_ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20
 4750      00
 4751              	.LVL441:
 4752 001a 660F1F44 		.p2align 4,,10
 4752      0000
 4753              		.p2align 3
 4754              	.L436:
 4755 0020 F3C3     		rep ret
 4756              		.cfi_endproc
 4757              	.LFE596:
 4759              		.section	.text.unlikely._ZN10Fl_Browser4swapEP8FL_BLINES1_
 4760              	.LCOLDE46:
 4761              		.section	.text._ZN10Fl_Browser4swapEP8FL_BLINES1_
 4762              	.LHOTE46:
 4763              		.section	.text.unlikely._ZN10Fl_Browser4swapEii,"ax",@progbits
 4764              		.align 2
 4765              	.LCOLDB47:
 4766              		.section	.text._ZN10Fl_Browser4swapEii,"ax",@progbits
 4767              	.LHOTB47:
 4768              		.align 2
 4769              		.p2align 4,,15
 4770              		.globl	_ZN10Fl_Browser4swapEii
 4772              	_ZN10Fl_Browser4swapEii:
 4773              	.LFB597:
 881:fltk-1.3.4-1/src/Fl_Browser.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 4774              		.loc 3 881 0
 4775              		.cfi_startproc
 4776              	.LVL442:
 882:fltk-1.3.4-1/src/Fl_Browser.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 4777              		.loc 3 882 0
 4778 0000 85F6     		testl	%esi, %esi
 4779 0002 7E60     		jle	.L444
 882:fltk-1.3.4-1/src/Fl_Browser.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 4780              		.loc 3 882 0 is_stmt 0 discriminator 1
 4781 0004 8B878402 		movl	644(%rdi), %eax
 4781      0000
 4782 000a 39D0     		cmpl	%edx, %eax
 4783 000c 410F9CC0 		setl	%r8b
 4784 0010 85D2     		testl	%edx, %edx
 4785 0012 0F9EC1   		setle	%cl
 4786 0015 4108C8   		orb	%cl, %r8b
 4787 0018 754A     		jne	.L444
 4788 001a 39C6     		cmpl	%eax, %esi
 4789 001c 7F46     		jg	.L444
 4790 001e 4189D1   		movl	%edx, %r9d
 881:fltk-1.3.4-1/src/Fl_Browser.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 4791              		.loc 3 881 0 is_stmt 1
 4792 0021 4883EC08 		subq	$8, %rsp
 4793              		.cfi_def_cfa_offset 16
 883:fltk-1.3.4-1/src/Fl_Browser.cxx ****  867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 4794              		.loc 3 883 0
 4795 0025 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4795      00
 4796              	.LVL443:
 4797 002a 4989C3   		movq	%rax, %r11
 4798              	.LVL444:
 884:fltk-1.3.4-1/src/Fl_Browser.cxx ****  868:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4799              		.loc 3 884 0
 4800 002d 4489CE   		movl	%r9d, %esi
 4801 0030 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4801      00
 4802              	.LVL445:
 4803              	.LBB436:
 4804              	.LBB437:
 838:fltk-1.3.4-1/src/Fl_Browser.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 4805              		.loc 3 838 0
 4806 0035 4939C3   		cmpq	%rax, %r11
 4807 0038 0F94C1   		sete	%cl
 4808 003b 4D85DB   		testq	%r11, %r11
 4809 003e 0F94C2   		sete	%dl
 4810 0041 08D1     		orb	%dl, %cl
 4811 0043 751B     		jne	.L438
 4812 0045 4885C0   		testq	%rax, %rax
 4813 0048 7416     		je	.L438
 4814 004a 4889C2   		movq	%rax, %rdx
 4815 004d 4C89DE   		movq	%r11, %rsi
 4816              	.LBE437:
 4817              	.LBE436:
 886:fltk-1.3.4-1/src/Fl_Browser.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4818              		.loc 3 886 0
 4819 0050 4883C408 		addq	$8, %rsp
 4820              		.cfi_remember_state
 4821              		.cfi_def_cfa_offset 8
 4822              	.LBB439:
 4823              	.LBB438:
 4824 0054 E9000000 		jmp	_ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20
 4824      00
 4825              	.LVL446:
 4826 0059 0F1F8000 		.p2align 4,,10
 4826      000000
 4827              		.p2align 3
 4828              	.L438:
 4829              		.cfi_restore_state
 4830              	.LBE438:
 4831              	.LBE439:
 4832 0060 4883C408 		addq	$8, %rsp
 4833              		.cfi_def_cfa_offset 8
 4834              	.LVL447:
 4835              	.L444:
 4836 0064 F3C3     		rep ret
 4837              		.cfi_endproc
 4838              	.LFE597:
 4840              		.section	.text.unlikely._ZN10Fl_Browser4swapEii
 4841              	.LCOLDE47:
 4842              		.section	.text._ZN10Fl_Browser4swapEii
 4843              	.LHOTE47:
 4844              		.section	.text.unlikely._ZN10Fl_Browser4iconEiP8Fl_Image,"ax",@progbits
 4845              		.align 2
 4846              	.LCOLDB48:
 4847              		.section	.text._ZN10Fl_Browser4iconEiP8Fl_Image,"ax",@progbits
 4848              	.LHOTB48:
 4849              		.align 2
 4850              		.p2align 4,,15
 4851              		.globl	_ZN10Fl_Browser4iconEiP8Fl_Image
 4853              	_ZN10Fl_Browser4iconEiP8Fl_Image:
 4854              	.LFB598:
 896:fltk-1.3.4-1/src/Fl_Browser.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 4855              		.loc 3 896 0
 4856              		.cfi_startproc
 4857              	.LVL448:
 898:fltk-1.3.4-1/src/Fl_Browser.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 4858              		.loc 3 898 0
 4859 0000 85F6     		testl	%esi, %esi
 4860 0002 7E08     		jle	.L445
 898:fltk-1.3.4-1/src/Fl_Browser.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 4861              		.loc 3 898 0 is_stmt 0 discriminator 1
 4862 0004 3BB78402 		cmpl	644(%rdi), %esi
 4862      0000
 4863 000a 7E04     		jle	.L447
 4864              	.L445:
 4865 000c F3C3     		rep ret
 4866 000e 6690     		.p2align 4,,10
 4867              		.p2align 3
 4868              	.L447:
 4869 0010 E9000000 		jmp	_ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18
 4869      00
 4870              	.LVL449:
 4871              		.cfi_endproc
 4872              	.LFE598:
 4874              		.section	.text.unlikely._ZN10Fl_Browser4iconEiP8Fl_Image
 4875              	.LCOLDE48:
 4876              		.section	.text._ZN10Fl_Browser4iconEiP8Fl_Image
 4877              	.LHOTE48:
 4878              		.section	.text.unlikely._ZNK10Fl_Browser4iconEi,"ax",@progbits
 4879              		.align 2
 4880              	.LCOLDB49:
 4881              		.section	.text._ZNK10Fl_Browser4iconEi,"ax",@progbits
 4882              	.LHOTB49:
 4883              		.align 2
 4884              		.p2align 4,,15
 4885              		.globl	_ZNK10Fl_Browser4iconEi
 4887              	_ZNK10Fl_Browser4iconEi:
 4888              	.LFB599:
 919:fltk-1.3.4-1/src/Fl_Browser.cxx ****  902:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 920:fltk-1.3.4-1/src/Fl_Browser.cxx ****  903:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw();
 921:fltk-1.3.4-1/src/Fl_Browser.cxx ****  904:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 922:fltk-1.3.4-1/src/Fl_Browser.cxx ****  905:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the label.
 923:fltk-1.3.4-1/src/Fl_Browser.cxx ****  906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for t
 924:fltk-1.3.4-1/src/Fl_Browser.cxx ****  907:fltk-1.3.4-1/FL/Fl_Widget.H ****      of a widget.
 925:fltk-1.3.4-1/src/Fl_Browser.cxx ****  908:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 926:fltk-1.3.4-1/src/Fl_Browser.cxx ****  909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 4889              		.loc 3 926 0 is_stmt 1
 4890              		.cfi_startproc
 4891              	.LVL450:
 927:fltk-1.3.4-1/src/Fl_Browser.cxx ****  910:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4892              		.loc 3 927 0
 4893 0000 E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 4893      00
 4894              	.LVL451:
 928:fltk-1.3.4-1/src/Fl_Browser.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 4895              		.loc 3 928 0
 4896 0005 4885C0   		testq	%rax, %rax
 4897 0008 7406     		je	.L450
 4898              		.loc 3 928 0 is_stmt 0 discriminator 1
 4899 000a 488B4018 		movq	24(%rax), %rax
 4900              	.LVL452:
 4901 000e C3       		ret
 4902              	.LVL453:
 4903 000f 90       		.p2align 4,,10
 4904              		.p2align 3
 4905              	.L450:
 4906              		.loc 3 928 0
 4907 0010 31C0     		xorl	%eax, %eax
 4908              	.LVL454:
 929:fltk-1.3.4-1/src/Fl_Browser.cxx ****  912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widge
 4909              		.loc 3 929 0 is_stmt 1
 4910 0012 C3       		ret
 4911              		.cfi_endproc
 4912              	.LFE599:
 4914              		.section	.text.unlikely._ZNK10Fl_Browser4iconEi
 4915              	.LCOLDE49:
 4916              		.section	.text._ZNK10Fl_Browser4iconEi
 4917              	.LHOTE49:
 4918              		.section	.text.unlikely._ZN10Fl_Browser11remove_iconEi,"ax",@progbits
 4919              		.align 2
 4920              	.LCOLDB50:
 4921              		.section	.text._ZN10Fl_Browser11remove_iconEi,"ax",@progbits
 4922              	.LHOTB50:
 4923              		.align 2
 4924              		.p2align 4,,15
 4925              		.globl	_ZN10Fl_Browser11remove_iconEi
 4927              	_ZN10Fl_Browser11remove_iconEi:
 4928              	.LFB600:
 930:fltk-1.3.4-1/src/Fl_Browser.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 931:fltk-1.3.4-1/src/Fl_Browser.cxx ****  914:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a bitmap of flags describing the kind of damage
 932:fltk-1.3.4-1/src/Fl_Browser.cxx ****  915:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), clear_damage(uchar)
 933:fltk-1.3.4-1/src/Fl_Browser.cxx ****  916:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 934:fltk-1.3.4-1/src/Fl_Browser.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 935:fltk-1.3.4-1/src/Fl_Browser.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 936:fltk-1.3.4-1/src/Fl_Browser.cxx ****  919:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears or sets the damage flags.
 4929              		.loc 3 936 0
 4930              		.cfi_startproc
 4931              	.LVL455:
 4932              	.LBB440:
 4933              	.LBB441:
 898:fltk-1.3.4-1/src/Fl_Browser.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 4934              		.loc 3 898 0
 4935 0000 85F6     		testl	%esi, %esi
 4936 0002 7E08     		jle	.L451
 4937 0004 3BB78402 		cmpl	644(%rdi), %esi
 4937      0000
 4938 000a 7E04     		jle	.L453
 4939              	.L451:
 4940 000c F3C3     		rep ret
 4941 000e 6690     		.p2align 4,,10
 4942              		.p2align 3
 4943              	.L453:
 4944 0010 31D2     		xorl	%edx, %edx
 4945 0012 E9000000 		jmp	_ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18
 4945      00
 4946              	.LVL456:
 4947              	.LBE441:
 4948              	.LBE440:
 4949              		.cfi_endproc
 4950              	.LFE600:
 4952              		.section	.text.unlikely._ZN10Fl_Browser11remove_iconEi
 4953              	.LCOLDE50:
 4954              		.section	.text._ZN10Fl_Browser11remove_iconEi
 4955              	.LHOTE50:
 4956              		.section	.text.unlikely._ZN15Fl_Hold_BrowserC2EiiiiPKc,"ax",@progbits
 4957              		.align 2
 4958              	.LCOLDB51:
 4959              		.section	.text._ZN15Fl_Hold_BrowserC2EiiiiPKc,"ax",@progbits
 4960              	.LHOTB51:
 4961              		.align 2
 4962              		.p2align 4,,15
 4963              		.globl	_ZN15Fl_Hold_BrowserC2EiiiiPKc
 4965              	_ZN15Fl_Hold_BrowserC2EiiiiPKc:
 4966              	.LFB602:
 937:fltk-1.3.4-1/src/Fl_Browser.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 938:fltk-1.3.4-1/src/Fl_Browser.cxx ****  921:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 939:fltk-1.3.4-1/src/Fl_Browser.cxx ****  922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>a
 940:fltk-1.3.4-1/src/Fl_Browser.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 941:fltk-1.3.4-1/src/Fl_Browser.cxx ****  924:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4967              		.loc 3 941 0
 4968              		.cfi_startproc
 4969              	.LVL457:
 4970 0000 53       		pushq	%rbx
 4971              		.cfi_def_cfa_offset 16
 4972              		.cfi_offset 3, -16
 4973              		.loc 3 941 0
 4974 0001 4889FB   		movq	%rdi, %rbx
 4975              	.LBB442:
 4976              	.LBB443:
 4977              	.LBB444:
 604:fltk-1.3.4-1/src/Fl_Browser.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4978              		.loc 3 604 0
 4979 0004 E8000000 		call	_ZN11Fl_Browser_C2EiiiiPKc
 4979      00
 4980              	.LVL458:
 605:fltk-1.3.4-1/src/Fl_Browser.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 4981              		.loc 3 605 0
 4982 0009 48C78390 		movq	$_ZL10no_columns, 656(%rbx)
 4982      02000000 
 4982      000000
 606:fltk-1.3.4-1/src/Fl_Browser.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 4983              		.loc 3 606 0
 4984 0014 C7838402 		movl	$0, 644(%rbx)
 4984      00000000 
 4984      0000
 607:fltk-1.3.4-1/src/Fl_Browser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 4985              		.loc 3 607 0
 4986 001e C7838802 		movl	$0, 648(%rbx)
 4986      00000000 
 4986      0000
 608:fltk-1.3.4-1/src/Fl_Browser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4987              		.loc 3 608 0
 4988 0028 C7838002 		movl	$0, 640(%rbx)
 4988      00000000 
 4988      0000
 609:fltk-1.3.4-1/src/Fl_Browser.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 4989              		.loc 3 609 0
 4990 0032 C6839802 		movb	$64, 664(%rbx)
 4990      000040
 610:fltk-1.3.4-1/src/Fl_Browser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4991              		.loc 3 610 0
 4992 0039 C6839902 		movb	$9, 665(%rbx)
 4992      000009
 611:fltk-1.3.4-1/src/Fl_Browser.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 4993              		.loc 3 611 0
 4994 0040 48C78378 		movq	$0, 632(%rbx)
 4994      02000000 
 4994      000000
 4995 004b 48C78370 		movq	$0, 624(%rbx)
 4995      02000000 
 4995      000000
 4996 0056 48C78368 		movq	$0, 616(%rbx)
 4996      02000000 
 4996      000000
 4997              	.LVL459:
 4998              	.LBE444:
 4999              	.LBE443:
 942:fltk-1.3.4-1/src/Fl_Browser.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 5000              		.loc 3 942 0
 5001 0061 48C70300 		movq	$_ZTV15Fl_Hold_Browser+16, (%rbx)
 5001      000000
 5002              	.LVL460:
 5003              	.LBB445:
 5004              	.LBB446:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5005              		.loc 1 279 0
 5006 0068 C6436C02 		movb	$2, 108(%rbx)
 5007              	.LVL461:
 5008              	.LBE446:
 5009              	.LBE445:
 5010              	.LBE442:
 943:fltk-1.3.4-1/src/Fl_Browser.cxx ****  926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 944:fltk-1.3.4-1/src/Fl_Browser.cxx ****  927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 945:fltk-1.3.4-1/src/Fl_Browser.cxx ****  928:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c new bitmask of damage flags (default: 0)
 5011              		.loc 3 945 0
 5012 006c 5B       		popq	%rbx
 5013              		.cfi_def_cfa_offset 8
 5014              	.LVL462:
 5015 006d C3       		ret
 5016              		.cfi_endproc
 5017              	.LFE602:
 5019              		.section	.text.unlikely._ZN15Fl_Hold_BrowserC2EiiiiPKc
 5020              	.LCOLDE51:
 5021              		.section	.text._ZN15Fl_Hold_BrowserC2EiiiiPKc
 5022              	.LHOTE51:
 5023              		.globl	_ZN15Fl_Hold_BrowserC1EiiiiPKc
 5024              		.set	_ZN15Fl_Hold_BrowserC1EiiiiPKc,_ZN15Fl_Hold_BrowserC2EiiiiPKc
 5025              		.section	.text.unlikely._ZN16Fl_Multi_BrowserC2EiiiiPKc,"ax",@progbits
 5026              		.align 2
 5027              	.LCOLDB52:
 5028              		.section	.text._ZN16Fl_Multi_BrowserC2EiiiiPKc,"ax",@progbits
 5029              	.LHOTB52:
 5030              		.align 2
 5031              		.p2align 4,,15
 5032              		.globl	_ZN16Fl_Multi_BrowserC2EiiiiPKc
 5034              	_ZN16Fl_Multi_BrowserC2EiiiiPKc:
 5035              	.LFB605:
 946:fltk-1.3.4-1/src/Fl_Browser.cxx ****  929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 947:fltk-1.3.4-1/src/Fl_Browser.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 948:fltk-1.3.4-1/src/Fl_Browser.cxx ****  931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 5036              		.loc 3 948 0
 5037              		.cfi_startproc
 5038              	.LVL463:
 5039 0000 53       		pushq	%rbx
 5040              		.cfi_def_cfa_offset 16
 5041              		.cfi_offset 3, -16
 5042              		.loc 3 948 0
 5043 0001 4889FB   		movq	%rdi, %rbx
 5044              	.LBB447:
 5045              	.LBB448:
 5046              	.LBB449:
 604:fltk-1.3.4-1/src/Fl_Browser.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5047              		.loc 3 604 0
 5048 0004 E8000000 		call	_ZN11Fl_Browser_C2EiiiiPKc
 5048      00
 5049              	.LVL464:
 605:fltk-1.3.4-1/src/Fl_Browser.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 5050              		.loc 3 605 0
 5051 0009 48C78390 		movq	$_ZL10no_columns, 656(%rbx)
 5051      02000000 
 5051      000000
 606:fltk-1.3.4-1/src/Fl_Browser.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 5052              		.loc 3 606 0
 5053 0014 C7838402 		movl	$0, 644(%rbx)
 5053      00000000 
 5053      0000
 607:fltk-1.3.4-1/src/Fl_Browser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 5054              		.loc 3 607 0
 5055 001e C7838802 		movl	$0, 648(%rbx)
 5055      00000000 
 5055      0000
 608:fltk-1.3.4-1/src/Fl_Browser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5056              		.loc 3 608 0
 5057 0028 C7838002 		movl	$0, 640(%rbx)
 5057      00000000 
 5057      0000
 609:fltk-1.3.4-1/src/Fl_Browser.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 5058              		.loc 3 609 0
 5059 0032 C6839802 		movb	$64, 664(%rbx)
 5059      000040
 610:fltk-1.3.4-1/src/Fl_Browser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5060              		.loc 3 610 0
 5061 0039 C6839902 		movb	$9, 665(%rbx)
 5061      000009
 611:fltk-1.3.4-1/src/Fl_Browser.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 5062              		.loc 3 611 0
 5063 0040 48C78378 		movq	$0, 632(%rbx)
 5063      02000000 
 5063      000000
 5064 004b 48C78370 		movq	$0, 624(%rbx)
 5064      02000000 
 5064      000000
 5065 0056 48C78368 		movq	$0, 616(%rbx)
 5065      02000000 
 5065      000000
 5066              	.LVL465:
 5067              	.LBE449:
 5068              	.LBE448:
 949:fltk-1.3.4-1/src/Fl_Browser.cxx ****  932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5069              		.loc 3 949 0
 5070 0061 48C70300 		movq	$_ZTV16Fl_Multi_Browser+16, (%rbx)
 5070      000000
 5071              	.LVL466:
 5072              	.LBB450:
 5073              	.LBB451:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5074              		.loc 1 279 0
 5075 0068 C6436C03 		movb	$3, 108(%rbx)
 5076              	.LVL467:
 5077              	.LBE451:
 5078              	.LBE450:
 5079              	.LBE447:
 950:fltk-1.3.4-1/src/Fl_Browser.cxx ****  933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 951:fltk-1.3.4-1/src/Fl_Browser.cxx ****  934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 952:fltk-1.3.4-1/src/Fl_Browser.cxx ****  935:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 5080              		.loc 3 952 0
 5081 006c 5B       		popq	%rbx
 5082              		.cfi_def_cfa_offset 8
 5083              	.LVL468:
 5084 006d C3       		ret
 5085              		.cfi_endproc
 5086              	.LFE605:
 5088              		.section	.text.unlikely._ZN16Fl_Multi_BrowserC2EiiiiPKc
 5089              	.LCOLDE52:
 5090              		.section	.text._ZN16Fl_Multi_BrowserC2EiiiiPKc
 5091              	.LHOTE52:
 5092              		.globl	_ZN16Fl_Multi_BrowserC1EiiiiPKc
 5093              		.set	_ZN16Fl_Multi_BrowserC1EiiiiPKc,_ZN16Fl_Multi_BrowserC2EiiiiPKc
 5094              		.section	.text.unlikely._ZN17Fl_Select_BrowserC2EiiiiPKc,"ax",@progbits
 5095              		.align 2
 5096              	.LCOLDB53:
 5097              		.section	.text._ZN17Fl_Select_BrowserC2EiiiiPKc,"ax",@progbits
 5098              	.LHOTB53:
 5099              		.align 2
 5100              		.p2align 4,,15
 5101              		.globl	_ZN17Fl_Select_BrowserC2EiiiiPKc
 5103              	_ZN17Fl_Select_BrowserC2EiiiiPKc:
 5104              	.LFB608:
 953:fltk-1.3.4-1/src/Fl_Browser.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 954:fltk-1.3.4-1/src/Fl_Browser.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 955:fltk-1.3.4-1/src/Fl_Browser.cxx ****  938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 5105              		.loc 3 955 0
 5106              		.cfi_startproc
 5107              	.LVL469:
 5108 0000 53       		pushq	%rbx
 5109              		.cfi_def_cfa_offset 16
 5110              		.cfi_offset 3, -16
 5111              		.loc 3 955 0
 5112 0001 4889FB   		movq	%rdi, %rbx
 5113              	.LBB452:
 5114              	.LBB453:
 5115              	.LBB454:
 604:fltk-1.3.4-1/src/Fl_Browser.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5116              		.loc 3 604 0
 5117 0004 E8000000 		call	_ZN11Fl_Browser_C2EiiiiPKc
 5117      00
 5118              	.LVL470:
 605:fltk-1.3.4-1/src/Fl_Browser.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 5119              		.loc 3 605 0
 5120 0009 48C78390 		movq	$_ZL10no_columns, 656(%rbx)
 5120      02000000 
 5120      000000
 606:fltk-1.3.4-1/src/Fl_Browser.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 5121              		.loc 3 606 0
 5122 0014 C7838402 		movl	$0, 644(%rbx)
 5122      00000000 
 5122      0000
 607:fltk-1.3.4-1/src/Fl_Browser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 5123              		.loc 3 607 0
 5124 001e C7838802 		movl	$0, 648(%rbx)
 5124      00000000 
 5124      0000
 608:fltk-1.3.4-1/src/Fl_Browser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5125              		.loc 3 608 0
 5126 0028 C7838002 		movl	$0, 640(%rbx)
 5126      00000000 
 5126      0000
 609:fltk-1.3.4-1/src/Fl_Browser.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 5127              		.loc 3 609 0
 5128 0032 C6839802 		movb	$64, 664(%rbx)
 5128      000040
 610:fltk-1.3.4-1/src/Fl_Browser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5129              		.loc 3 610 0
 5130 0039 C6839902 		movb	$9, 665(%rbx)
 5130      000009
 611:fltk-1.3.4-1/src/Fl_Browser.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 5131              		.loc 3 611 0
 5132 0040 48C78378 		movq	$0, 632(%rbx)
 5132      02000000 
 5132      000000
 5133 004b 48C78370 		movq	$0, 624(%rbx)
 5133      02000000 
 5133      000000
 5134 0056 48C78368 		movq	$0, 616(%rbx)
 5134      02000000 
 5134      000000
 5135              	.LVL471:
 5136              	.LBE454:
 5137              	.LBE453:
 956:fltk-1.3.4-1/src/Fl_Browser.cxx ****  939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5138              		.loc 3 956 0
 5139 0061 48C70300 		movq	$_ZTV17Fl_Select_Browser+16, (%rbx)
 5139      000000
 5140              	.LVL472:
 5141              	.LBB455:
 5142              	.LBB456:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5143              		.loc 1 279 0
 5144 0068 C6436C01 		movb	$1, 108(%rbx)
 5145              	.LVL473:
 5146              	.LBE456:
 5147              	.LBE455:
 5148              	.LBE452:
 957:fltk-1.3.4-1/src/Fl_Browser.cxx ****  940:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for an area inside the widget.
 958:fltk-1.3.4-1/src/Fl_Browser.cxx ****  941:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 959:fltk-1.3.4-1/src/Fl_Browser.cxx ****  942:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 5149              		.loc 3 959 0
 5150 006c 5B       		popq	%rbx
 5151              		.cfi_def_cfa_offset 8
 5152              	.LVL474:
 5153 006d C3       		ret
 5154              		.cfi_endproc
 5155              	.LFE608:
 5157              		.section	.text.unlikely._ZN17Fl_Select_BrowserC2EiiiiPKc
 5158              	.LCOLDE53:
 5159              		.section	.text._ZN17Fl_Select_BrowserC2EiiiiPKc
 5160              	.LHOTE53:
 5161              		.globl	_ZN17Fl_Select_BrowserC1EiiiiPKc
 5162              		.set	_ZN17Fl_Select_BrowserC1EiiiiPKc,_ZN17Fl_Select_BrowserC2EiiiiPKc
 5163              		.section	.text.unlikely._ZN10Fl_BrowserD2Ev,"axG",@progbits,_ZN10Fl_BrowserD5Ev,comdat
 5164              		.align 2
 5165              	.LCOLDB54:
 5166              		.section	.text._ZN10Fl_BrowserD2Ev,"axG",@progbits,_ZN10Fl_BrowserD5Ev,comdat
 5167              	.LHOTB54:
 5168              		.align 2
 5169              		.p2align 4,,15
 5170              		.weak	_ZN10Fl_BrowserD2Ev
 5172              	_ZN10Fl_BrowserD2Ev:
 5173              	.LFB335:
 189:fltk-1.3.4-1/FL/Fl_Browser.H ****   int visible(int line) const ;
 190:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 191:fltk-1.3.4-1/FL/Fl_Browser.H ****   int value() const ;
 192:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 193:fltk-1.3.4-1/FL/Fl_Browser.H ****     Sets the browser's value(), which selects the specified \p line.
 194:fltk-1.3.4-1/FL/Fl_Browser.H ****     This is the same as calling select(line).
 195:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see select(), selected(), value(), item_select(), item_selected()
 196:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 197:fltk-1.3.4-1/FL/Fl_Browser.H ****   void value(int line) { select(line); }
 198:fltk-1.3.4-1/FL/Fl_Browser.H ****   const char* text(int line) const ;
 199:fltk-1.3.4-1/FL/Fl_Browser.H ****   void text(int line, const char* newtext);
 200:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* data(int line) const ;
 201:fltk-1.3.4-1/FL/Fl_Browser.H ****   void data(int line, void* d);
 202:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 203:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Browser(int X, int Y, int W, int H, const char *L = 0);
 204:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 205:fltk-1.3.4-1/FL/Fl_Browser.H ****     The destructor deletes all list items and destroys the browser.
 206:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 207:fltk-1.3.4-1/FL/Fl_Browser.H ****   ~Fl_Browser() { clear(); }
 5174              		.loc 7 207 0
 5175              		.cfi_startproc
 5176              	.LVL475:
 5177 0000 53       		pushq	%rbx
 5178              		.cfi_def_cfa_offset 16
 5179              		.cfi_offset 3, -16
 5180              		.loc 7 207 0
 5181 0001 4889FB   		movq	%rdi, %rbx
 5182              	.LBB461:
 5183 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 5183      000000
 5184 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 5184      00
 5185              	.LVL476:
 5186              	.LBB462:
 5187              	.LBB463:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5188              		.loc 9 77 0
 5189 0010 488DBBB0 		leaq	432(%rbx), %rdi
 5189      010000
 5190 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 5190      000000
 5191 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5191      00
 5192              	.LVL477:
 5193 0023 488DBBF8 		leaq	248(%rbx), %rdi
 5193      000000
 5194 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5194      00
 5195              	.LVL478:
 5196 002f 4889DF   		movq	%rbx, %rdi
 5197              	.LBE463:
 5198              	.LBE462:
 5199              	.LBE461:
 5200              		.loc 7 207 0
 5201 0032 5B       		popq	%rbx
 5202              		.cfi_def_cfa_offset 8
 5203              	.LVL479:
 5204              	.LBB466:
 5205              	.LBB465:
 5206              	.LBB464:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5207              		.loc 9 77 0
 5208 0033 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 5208      00
 5209              	.LVL480:
 5210              	.LBE464:
 5211              	.LBE465:
 5212              	.LBE466:
 5213              		.cfi_endproc
 5214              	.LFE335:
 5216              		.section	.text.unlikely._ZN10Fl_BrowserD2Ev,"axG",@progbits,_ZN10Fl_BrowserD5Ev,comdat
 5217              	.LCOLDE54:
 5218              		.section	.text._ZN10Fl_BrowserD2Ev,"axG",@progbits,_ZN10Fl_BrowserD5Ev,comdat
 5219              	.LHOTE54:
 5220              		.weak	_ZN10Fl_BrowserD1Ev
 5221              		.set	_ZN10Fl_BrowserD1Ev,_ZN10Fl_BrowserD2Ev
 5222              		.section	.text.unlikely._ZN17Fl_Select_BrowserD2Ev,"axG",@progbits,_ZN17Fl_Select_BrowserD5Ev,comd
 5223              		.align 2
 5224              	.LCOLDB55:
 5225              		.section	.text._ZN17Fl_Select_BrowserD2Ev,"axG",@progbits,_ZN17Fl_Select_BrowserD5Ev,comdat
 5226              	.LHOTB55:
 5227              		.align 2
 5228              		.p2align 4,,15
 5229              		.weak	_ZN17Fl_Select_BrowserD2Ev
 5231              	_ZN17Fl_Select_BrowserD2Ev:
 5232              	.LFB611:
 5233              		.file 10 "fltk-1.3.4-1/FL/Fl_Select_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** // "$Id: Fl_Select_Browser.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** // Select browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Select_Browser.H ****    Fl_Select_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** #ifndef Fl_Select_Browser_H
  23:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** #define Fl_Select_Browser_H
  24:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** 
  25:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** #include "Fl_Browser.H"
  26:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** 
  27:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Select_Browser.H ****   The class is a subclass of Fl_Browser
  29:fltk-1.3.4-1/FL/Fl_Select_Browser.H ****   which lets the user select a single item, or no items by clicking on
  30:fltk-1.3.4-1/FL/Fl_Select_Browser.H ****   the empty space.  As long as the mouse button is held down on an
  31:fltk-1.3.4-1/FL/Fl_Select_Browser.H ****   unselected item it is highlighted. Normally the callback is done when the
  32:fltk-1.3.4-1/FL/Fl_Select_Browser.H ****   user presses the mouse, but you can change this with when().
  33:fltk-1.3.4-1/FL/Fl_Select_Browser.H ****   <P>See Fl_Browser for  methods to add and remove lines from the browser.
  34:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** */
  35:fltk-1.3.4-1/FL/Fl_Select_Browser.H **** class FL_EXPORT Fl_Select_Browser : public Fl_Browser {
 5234              		.loc 10 35 0
 5235              		.cfi_startproc
 5236              	.LVL481:
 5237 0000 53       		pushq	%rbx
 5238              		.cfi_def_cfa_offset 16
 5239              		.cfi_offset 3, -16
 5240              		.loc 10 35 0
 5241 0001 4889FB   		movq	%rdi, %rbx
 5242              	.LBB473:
 5243              	.LBB474:
 5244              	.LBB475:
 5245              		.loc 7 207 0
 5246 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 5246      000000
 5247 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 5247      00
 5248              	.LVL482:
 5249              	.LBB476:
 5250              	.LBB477:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5251              		.loc 9 77 0
 5252 0010 488DBBB0 		leaq	432(%rbx), %rdi
 5252      010000
 5253 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 5253      000000
 5254 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5254      00
 5255              	.LVL483:
 5256 0023 488DBBF8 		leaq	248(%rbx), %rdi
 5256      000000
 5257 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5257      00
 5258              	.LVL484:
 5259 002f 4889DF   		movq	%rbx, %rdi
 5260              	.LBE477:
 5261              	.LBE476:
 5262              	.LBE475:
 5263              	.LBE474:
 5264              	.LBE473:
 5265              		.loc 10 35 0
 5266 0032 5B       		popq	%rbx
 5267              		.cfi_def_cfa_offset 8
 5268              	.LVL485:
 5269              	.LBB482:
 5270              	.LBB481:
 5271              	.LBB480:
 5272              	.LBB479:
 5273              	.LBB478:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5274              		.loc 9 77 0
 5275 0033 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 5275      00
 5276              	.LVL486:
 5277              	.LBE478:
 5278              	.LBE479:
 5279              	.LBE480:
 5280              	.LBE481:
 5281              	.LBE482:
 5282              		.cfi_endproc
 5283              	.LFE611:
 5285              		.section	.text.unlikely._ZN17Fl_Select_BrowserD2Ev,"axG",@progbits,_ZN17Fl_Select_BrowserD5Ev,comd
 5286              	.LCOLDE55:
 5287              		.section	.text._ZN17Fl_Select_BrowserD2Ev,"axG",@progbits,_ZN17Fl_Select_BrowserD5Ev,comdat
 5288              	.LHOTE55:
 5289              		.weak	_ZN17Fl_Select_BrowserD1Ev
 5290              		.set	_ZN17Fl_Select_BrowserD1Ev,_ZN17Fl_Select_BrowserD2Ev
 5291              		.section	.text.unlikely._ZN16Fl_Multi_BrowserD2Ev,"axG",@progbits,_ZN16Fl_Multi_BrowserD5Ev,comdat
 5292              		.align 2
 5293              	.LCOLDB56:
 5294              		.section	.text._ZN16Fl_Multi_BrowserD2Ev,"axG",@progbits,_ZN16Fl_Multi_BrowserD5Ev,comdat
 5295              	.LHOTB56:
 5296              		.align 2
 5297              		.p2align 4,,15
 5298              		.weak	_ZN16Fl_Multi_BrowserD2Ev
 5300              	_ZN16Fl_Multi_BrowserD2Ev:
 5301              	.LFB615:
 5302              		.file 11 "fltk-1.3.4-1/FL/Fl_Multi_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** // "$Id: Fl_Multi_Browser.H 10882 2015-11-05 17:54:16Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** // Multi browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****    Fl_Multi_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** #ifndef Fl_Multi_Browser_H
  23:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** #define Fl_Multi_Browser_H
  24:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** 
  25:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** #include "Fl_Browser.H"
  26:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** 
  27:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   The Fl_Multi_Browser class is a subclass of Fl_Browser
  29:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   which lets the user select any set of the lines.  The user interface
  30:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   is Macintosh style: clicking an item turns off all the others and
  31:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   selects that one, dragging selects all the items the mouse moves over,
  32:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   and ctrl + click (Cmd+click on the Mac OS platform) toggles the items.  
  33:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   Shift + click extends the selection until the clicked item.
  34:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   This is different from how forms did it.  
  35:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   Normally the callback is done when the user releases the
  36:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   mouse, but you can change this with when().
  37:fltk-1.3.4-1/FL/Fl_Multi_Browser.H ****   <P>See Fl_Browser for methods to add and remove lines from the browser.
  38:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** */
  39:fltk-1.3.4-1/FL/Fl_Multi_Browser.H **** class FL_EXPORT Fl_Multi_Browser : public Fl_Browser {
 5303              		.loc 11 39 0
 5304              		.cfi_startproc
 5305              	.LVL487:
 5306 0000 53       		pushq	%rbx
 5307              		.cfi_def_cfa_offset 16
 5308              		.cfi_offset 3, -16
 5309              		.loc 11 39 0
 5310 0001 4889FB   		movq	%rdi, %rbx
 5311              	.LBB489:
 5312              	.LBB490:
 5313              	.LBB491:
 5314              		.loc 7 207 0
 5315 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 5315      000000
 5316 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 5316      00
 5317              	.LVL488:
 5318              	.LBB492:
 5319              	.LBB493:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5320              		.loc 9 77 0
 5321 0010 488DBBB0 		leaq	432(%rbx), %rdi
 5321      010000
 5322 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 5322      000000
 5323 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5323      00
 5324              	.LVL489:
 5325 0023 488DBBF8 		leaq	248(%rbx), %rdi
 5325      000000
 5326 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5326      00
 5327              	.LVL490:
 5328 002f 4889DF   		movq	%rbx, %rdi
 5329              	.LBE493:
 5330              	.LBE492:
 5331              	.LBE491:
 5332              	.LBE490:
 5333              	.LBE489:
 5334              		.loc 11 39 0
 5335 0032 5B       		popq	%rbx
 5336              		.cfi_def_cfa_offset 8
 5337              	.LVL491:
 5338              	.LBB498:
 5339              	.LBB497:
 5340              	.LBB496:
 5341              	.LBB495:
 5342              	.LBB494:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5343              		.loc 9 77 0
 5344 0033 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 5344      00
 5345              	.LVL492:
 5346              	.LBE494:
 5347              	.LBE495:
 5348              	.LBE496:
 5349              	.LBE497:
 5350              	.LBE498:
 5351              		.cfi_endproc
 5352              	.LFE615:
 5354              		.section	.text.unlikely._ZN16Fl_Multi_BrowserD2Ev,"axG",@progbits,_ZN16Fl_Multi_BrowserD5Ev,comdat
 5355              	.LCOLDE56:
 5356              		.section	.text._ZN16Fl_Multi_BrowserD2Ev,"axG",@progbits,_ZN16Fl_Multi_BrowserD5Ev,comdat
 5357              	.LHOTE56:
 5358              		.weak	_ZN16Fl_Multi_BrowserD1Ev
 5359              		.set	_ZN16Fl_Multi_BrowserD1Ev,_ZN16Fl_Multi_BrowserD2Ev
 5360              		.section	.text.unlikely._ZN15Fl_Hold_BrowserD2Ev,"axG",@progbits,_ZN15Fl_Hold_BrowserD5Ev,comdat
 5361              		.align 2
 5362              	.LCOLDB57:
 5363              		.section	.text._ZN15Fl_Hold_BrowserD2Ev,"axG",@progbits,_ZN15Fl_Hold_BrowserD5Ev,comdat
 5364              	.LHOTB57:
 5365              		.align 2
 5366              		.p2align 4,,15
 5367              		.weak	_ZN15Fl_Hold_BrowserD2Ev
 5369              	_ZN15Fl_Hold_BrowserD2Ev:
 5370              	.LFB619:
 5371              		.file 12 "fltk-1.3.4-1/FL/Fl_Hold_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** // "$Id: Fl_Hold_Browser.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** // Hold browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Hold_Browser.H ****    Fl_Hold_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** #ifndef Fl_Hold_Browser_H
  23:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** #define Fl_Hold_Browser_H
  24:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** 
  25:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** #include "Fl_Browser.H"
  26:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** 
  27:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Hold_Browser.H ****   The Fl_Hold_Browser is a subclass of Fl_Browser
  29:fltk-1.3.4-1/FL/Fl_Hold_Browser.H ****   which lets the user select a single item, or no items by clicking on
  30:fltk-1.3.4-1/FL/Fl_Hold_Browser.H ****   the empty space.  As long as the mouse button is held down the item
  31:fltk-1.3.4-1/FL/Fl_Hold_Browser.H ****   pointed to by it is highlighted, and this highlighting remains on when
  32:fltk-1.3.4-1/FL/Fl_Hold_Browser.H ****   the mouse button is released. Normally the callback is done when the
  33:fltk-1.3.4-1/FL/Fl_Hold_Browser.H ****   user releases the mouse, but you can change this with when().
  34:fltk-1.3.4-1/FL/Fl_Hold_Browser.H ****   <P>See Fl_Browser for methods to add and remove lines from the browser.
  35:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** */
  36:fltk-1.3.4-1/FL/Fl_Hold_Browser.H **** class FL_EXPORT Fl_Hold_Browser : public Fl_Browser {
 5372              		.loc 12 36 0
 5373              		.cfi_startproc
 5374              	.LVL493:
 5375 0000 53       		pushq	%rbx
 5376              		.cfi_def_cfa_offset 16
 5377              		.cfi_offset 3, -16
 5378              		.loc 12 36 0
 5379 0001 4889FB   		movq	%rdi, %rbx
 5380              	.LBB505:
 5381              	.LBB506:
 5382              	.LBB507:
 5383              		.loc 7 207 0
 5384 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 5384      000000
 5385 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 5385      00
 5386              	.LVL494:
 5387              	.LBB508:
 5388              	.LBB509:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5389              		.loc 9 77 0
 5390 0010 488DBBB0 		leaq	432(%rbx), %rdi
 5390      010000
 5391 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 5391      000000
 5392 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5392      00
 5393              	.LVL495:
 5394 0023 488DBBF8 		leaq	248(%rbx), %rdi
 5394      000000
 5395 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5395      00
 5396              	.LVL496:
 5397 002f 4889DF   		movq	%rbx, %rdi
 5398              	.LBE509:
 5399              	.LBE508:
 5400              	.LBE507:
 5401              	.LBE506:
 5402              	.LBE505:
 5403              		.loc 12 36 0
 5404 0032 5B       		popq	%rbx
 5405              		.cfi_def_cfa_offset 8
 5406              	.LVL497:
 5407              	.LBB514:
 5408              	.LBB513:
 5409              	.LBB512:
 5410              	.LBB511:
 5411              	.LBB510:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5412              		.loc 9 77 0
 5413 0033 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 5413      00
 5414              	.LVL498:
 5415              	.LBE510:
 5416              	.LBE511:
 5417              	.LBE512:
 5418              	.LBE513:
 5419              	.LBE514:
 5420              		.cfi_endproc
 5421              	.LFE619:
 5423              		.section	.text.unlikely._ZN15Fl_Hold_BrowserD2Ev,"axG",@progbits,_ZN15Fl_Hold_BrowserD5Ev,comdat
 5424              	.LCOLDE57:
 5425              		.section	.text._ZN15Fl_Hold_BrowserD2Ev,"axG",@progbits,_ZN15Fl_Hold_BrowserD5Ev,comdat
 5426              	.LHOTE57:
 5427              		.weak	_ZN15Fl_Hold_BrowserD1Ev
 5428              		.set	_ZN15Fl_Hold_BrowserD1Ev,_ZN15Fl_Hold_BrowserD2Ev
 5429              		.section	.text.unlikely._ZN10Fl_BrowserD0Ev,"axG",@progbits,_ZN10Fl_BrowserD5Ev,comdat
 5430              		.align 2
 5431              	.LCOLDB58:
 5432              		.section	.text._ZN10Fl_BrowserD0Ev,"axG",@progbits,_ZN10Fl_BrowserD5Ev,comdat
 5433              	.LHOTB58:
 5434              		.align 2
 5435              		.p2align 4,,15
 5436              		.weak	_ZN10Fl_BrowserD0Ev
 5438              	_ZN10Fl_BrowserD0Ev:
 5439              	.LFB337:
 5440              		.loc 7 207 0
 5441              		.cfi_startproc
 5442              	.LVL499:
 5443 0000 53       		pushq	%rbx
 5444              		.cfi_def_cfa_offset 16
 5445              		.cfi_offset 3, -16
 5446              		.loc 7 207 0
 5447 0001 4889FB   		movq	%rdi, %rbx
 5448              	.LBB520:
 5449              	.LBB521:
 5450 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 5450      000000
 5451 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 5451      00
 5452              	.LVL500:
 5453              	.LBB522:
 5454              	.LBB523:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5455              		.loc 9 77 0
 5456 0010 488DBBB0 		leaq	432(%rbx), %rdi
 5456      010000
 5457 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 5457      000000
 5458 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5458      00
 5459              	.LVL501:
 5460 0023 488DBBF8 		leaq	248(%rbx), %rdi
 5460      000000
 5461 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5461      00
 5462              	.LVL502:
 5463 002f 4889DF   		movq	%rbx, %rdi
 5464 0032 E8000000 		call	_ZN8Fl_GroupD2Ev
 5464      00
 5465              	.LVL503:
 5466              	.LBE523:
 5467              	.LBE522:
 5468              	.LBE521:
 5469              	.LBE520:
 5470              		.loc 7 207 0
 5471 0037 4889DF   		movq	%rbx, %rdi
 5472 003a 5B       		popq	%rbx
 5473              		.cfi_def_cfa_offset 8
 5474              	.LVL504:
 5475 003b E9000000 		jmp	_ZdlPv
 5475      00
 5476              	.LVL505:
 5477              		.cfi_endproc
 5478              	.LFE337:
 5480              		.section	.text.unlikely._ZN10Fl_BrowserD0Ev,"axG",@progbits,_ZN10Fl_BrowserD5Ev,comdat
 5481              	.LCOLDE58:
 5482              		.section	.text._ZN10Fl_BrowserD0Ev,"axG",@progbits,_ZN10Fl_BrowserD5Ev,comdat
 5483              	.LHOTE58:
 5484              		.section	.text.unlikely._ZN15Fl_Hold_BrowserD0Ev,"axG",@progbits,_ZN15Fl_Hold_BrowserD5Ev,comdat
 5485              		.align 2
 5486              	.LCOLDB59:
 5487              		.section	.text._ZN15Fl_Hold_BrowserD0Ev,"axG",@progbits,_ZN15Fl_Hold_BrowserD5Ev,comdat
 5488              	.LHOTB59:
 5489              		.align 2
 5490              		.p2align 4,,15
 5491              		.weak	_ZN15Fl_Hold_BrowserD0Ev
 5493              	_ZN15Fl_Hold_BrowserD0Ev:
 5494              	.LFB621:
 5495              		.loc 12 36 0
 5496              		.cfi_startproc
 5497              	.LVL506:
 5498 0000 53       		pushq	%rbx
 5499              		.cfi_def_cfa_offset 16
 5500              		.cfi_offset 3, -16
 5501              		.loc 12 36 0
 5502 0001 4889FB   		movq	%rdi, %rbx
 5503              	.LBB531:
 5504              	.LBB532:
 5505              	.LBB533:
 5506              	.LBB534:
 5507              		.loc 7 207 0
 5508 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 5508      000000
 5509 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 5509      00
 5510              	.LVL507:
 5511              	.LBB535:
 5512              	.LBB536:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5513              		.loc 9 77 0
 5514 0010 488DBBB0 		leaq	432(%rbx), %rdi
 5514      010000
 5515 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 5515      000000
 5516 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5516      00
 5517              	.LVL508:
 5518 0023 488DBBF8 		leaq	248(%rbx), %rdi
 5518      000000
 5519 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5519      00
 5520              	.LVL509:
 5521 002f 4889DF   		movq	%rbx, %rdi
 5522 0032 E8000000 		call	_ZN8Fl_GroupD2Ev
 5522      00
 5523              	.LVL510:
 5524              	.LBE536:
 5525              	.LBE535:
 5526              	.LBE534:
 5527              	.LBE533:
 5528              	.LBE532:
 5529              	.LBE531:
 5530              		.loc 12 36 0
 5531 0037 4889DF   		movq	%rbx, %rdi
 5532 003a 5B       		popq	%rbx
 5533              		.cfi_def_cfa_offset 8
 5534              	.LVL511:
 5535 003b E9000000 		jmp	_ZdlPv
 5535      00
 5536              	.LVL512:
 5537              		.cfi_endproc
 5538              	.LFE621:
 5540              		.section	.text.unlikely._ZN15Fl_Hold_BrowserD0Ev,"axG",@progbits,_ZN15Fl_Hold_BrowserD5Ev,comdat
 5541              	.LCOLDE59:
 5542              		.section	.text._ZN15Fl_Hold_BrowserD0Ev,"axG",@progbits,_ZN15Fl_Hold_BrowserD5Ev,comdat
 5543              	.LHOTE59:
 5544              		.section	.text.unlikely._ZN17Fl_Select_BrowserD0Ev,"axG",@progbits,_ZN17Fl_Select_BrowserD5Ev,comd
 5545              		.align 2
 5546              	.LCOLDB60:
 5547              		.section	.text._ZN17Fl_Select_BrowserD0Ev,"axG",@progbits,_ZN17Fl_Select_BrowserD5Ev,comdat
 5548              	.LHOTB60:
 5549              		.align 2
 5550              		.p2align 4,,15
 5551              		.weak	_ZN17Fl_Select_BrowserD0Ev
 5553              	_ZN17Fl_Select_BrowserD0Ev:
 5554              	.LFB613:
 5555              		.loc 10 35 0
 5556              		.cfi_startproc
 5557              	.LVL513:
 5558 0000 53       		pushq	%rbx
 5559              		.cfi_def_cfa_offset 16
 5560              		.cfi_offset 3, -16
 5561              		.loc 10 35 0
 5562 0001 4889FB   		movq	%rdi, %rbx
 5563              	.LBB544:
 5564              	.LBB545:
 5565              	.LBB546:
 5566              	.LBB547:
 5567              		.loc 7 207 0
 5568 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 5568      000000
 5569 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 5569      00
 5570              	.LVL514:
 5571              	.LBB548:
 5572              	.LBB549:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5573              		.loc 9 77 0
 5574 0010 488DBBB0 		leaq	432(%rbx), %rdi
 5574      010000
 5575 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 5575      000000
 5576 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5576      00
 5577              	.LVL515:
 5578 0023 488DBBF8 		leaq	248(%rbx), %rdi
 5578      000000
 5579 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5579      00
 5580              	.LVL516:
 5581 002f 4889DF   		movq	%rbx, %rdi
 5582 0032 E8000000 		call	_ZN8Fl_GroupD2Ev
 5582      00
 5583              	.LVL517:
 5584              	.LBE549:
 5585              	.LBE548:
 5586              	.LBE547:
 5587              	.LBE546:
 5588              	.LBE545:
 5589              	.LBE544:
 5590              		.loc 10 35 0
 5591 0037 4889DF   		movq	%rbx, %rdi
 5592 003a 5B       		popq	%rbx
 5593              		.cfi_def_cfa_offset 8
 5594              	.LVL518:
 5595 003b E9000000 		jmp	_ZdlPv
 5595      00
 5596              	.LVL519:
 5597              		.cfi_endproc
 5598              	.LFE613:
 5600              		.section	.text.unlikely._ZN17Fl_Select_BrowserD0Ev,"axG",@progbits,_ZN17Fl_Select_BrowserD5Ev,comd
 5601              	.LCOLDE60:
 5602              		.section	.text._ZN17Fl_Select_BrowserD0Ev,"axG",@progbits,_ZN17Fl_Select_BrowserD5Ev,comdat
 5603              	.LHOTE60:
 5604              		.section	.text.unlikely._ZN16Fl_Multi_BrowserD0Ev,"axG",@progbits,_ZN16Fl_Multi_BrowserD5Ev,comdat
 5605              		.align 2
 5606              	.LCOLDB61:
 5607              		.section	.text._ZN16Fl_Multi_BrowserD0Ev,"axG",@progbits,_ZN16Fl_Multi_BrowserD5Ev,comdat
 5608              	.LHOTB61:
 5609              		.align 2
 5610              		.p2align 4,,15
 5611              		.weak	_ZN16Fl_Multi_BrowserD0Ev
 5613              	_ZN16Fl_Multi_BrowserD0Ev:
 5614              	.LFB617:
 5615              		.loc 11 39 0
 5616              		.cfi_startproc
 5617              	.LVL520:
 5618 0000 53       		pushq	%rbx
 5619              		.cfi_def_cfa_offset 16
 5620              		.cfi_offset 3, -16
 5621              		.loc 11 39 0
 5622 0001 4889FB   		movq	%rdi, %rbx
 5623              	.LBB557:
 5624              	.LBB558:
 5625              	.LBB559:
 5626              	.LBB560:
 5627              		.loc 7 207 0
 5628 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 5628      000000
 5629 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 5629      00
 5630              	.LVL521:
 5631              	.LBB561:
 5632              	.LBB562:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 5633              		.loc 9 77 0
 5634 0010 488DBBB0 		leaq	432(%rbx), %rdi
 5634      010000
 5635 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 5635      000000
 5636 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5636      00
 5637              	.LVL522:
 5638 0023 488DBBF8 		leaq	248(%rbx), %rdi
 5638      000000
 5639 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 5639      00
 5640              	.LVL523:
 5641 002f 4889DF   		movq	%rbx, %rdi
 5642 0032 E8000000 		call	_ZN8Fl_GroupD2Ev
 5642      00
 5643              	.LVL524:
 5644              	.LBE562:
 5645              	.LBE561:
 5646              	.LBE560:
 5647              	.LBE559:
 5648              	.LBE558:
 5649              	.LBE557:
 5650              		.loc 11 39 0
 5651 0037 4889DF   		movq	%rbx, %rdi
 5652 003a 5B       		popq	%rbx
 5653              		.cfi_def_cfa_offset 8
 5654              	.LVL525:
 5655 003b E9000000 		jmp	_ZdlPv
 5655      00
 5656              	.LVL526:
 5657              		.cfi_endproc
 5658              	.LFE617:
 5660              		.section	.text.unlikely._ZN16Fl_Multi_BrowserD0Ev,"axG",@progbits,_ZN16Fl_Multi_BrowserD5Ev,comdat
 5661              	.LCOLDE61:
 5662              		.section	.text._ZN16Fl_Multi_BrowserD0Ev,"axG",@progbits,_ZN16Fl_Multi_BrowserD5Ev,comdat
 5663              	.LHOTE61:
 5664              		.weak	_ZTS10Fl_Browser
 5665              		.section	.rodata._ZTS10Fl_Browser,"aG",@progbits,_ZTS10Fl_Browser,comdat
 5666              		.align 8
 5669              	_ZTS10Fl_Browser:
 5670 0000 3130466C 		.string	"10Fl_Browser"
 5670      5F42726F 
 5670      77736572 
 5670      00
 5671              		.weak	_ZTI10Fl_Browser
 5672              		.section	.rodata._ZTI10Fl_Browser,"aG",@progbits,_ZTI10Fl_Browser,comdat
 5673              		.align 8
 5676              	_ZTI10Fl_Browser:
 5677 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5677      00000000 
 5678 0008 00000000 		.quad	_ZTS10Fl_Browser
 5678      00000000 
 5679 0010 00000000 		.quad	_ZTI11Fl_Browser_
 5679      00000000 
 5680              		.weak	_ZTS15Fl_Hold_Browser
 5681              		.section	.rodata._ZTS15Fl_Hold_Browser,"aG",@progbits,_ZTS15Fl_Hold_Browser,comdat
 5682              		.align 16
 5685              	_ZTS15Fl_Hold_Browser:
 5686 0000 3135466C 		.string	"15Fl_Hold_Browser"
 5686      5F486F6C 
 5686      645F4272 
 5686      6F777365 
 5686      7200
 5687              		.weak	_ZTI15Fl_Hold_Browser
 5688              		.section	.rodata._ZTI15Fl_Hold_Browser,"aG",@progbits,_ZTI15Fl_Hold_Browser,comdat
 5689              		.align 8
 5692              	_ZTI15Fl_Hold_Browser:
 5693 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5693      00000000 
 5694 0008 00000000 		.quad	_ZTS15Fl_Hold_Browser
 5694      00000000 
 5695 0010 00000000 		.quad	_ZTI10Fl_Browser
 5695      00000000 
 5696              		.weak	_ZTS16Fl_Multi_Browser
 5697              		.section	.rodata._ZTS16Fl_Multi_Browser,"aG",@progbits,_ZTS16Fl_Multi_Browser,comdat
 5698              		.align 16
 5701              	_ZTS16Fl_Multi_Browser:
 5702 0000 3136466C 		.string	"16Fl_Multi_Browser"
 5702      5F4D756C 
 5702      74695F42 
 5702      726F7773 
 5702      657200
 5703              		.weak	_ZTI16Fl_Multi_Browser
 5704              		.section	.rodata._ZTI16Fl_Multi_Browser,"aG",@progbits,_ZTI16Fl_Multi_Browser,comdat
 5705              		.align 8
 5708              	_ZTI16Fl_Multi_Browser:
 5709 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5709      00000000 
 5710 0008 00000000 		.quad	_ZTS16Fl_Multi_Browser
 5710      00000000 
 5711 0010 00000000 		.quad	_ZTI10Fl_Browser
 5711      00000000 
 5712              		.weak	_ZTS17Fl_Select_Browser
 5713              		.section	.rodata._ZTS17Fl_Select_Browser,"aG",@progbits,_ZTS17Fl_Select_Browser,comdat
 5714              		.align 16
 5717              	_ZTS17Fl_Select_Browser:
 5718 0000 3137466C 		.string	"17Fl_Select_Browser"
 5718      5F53656C 
 5718      6563745F 
 5718      42726F77 
 5718      73657200 
 5719              		.weak	_ZTI17Fl_Select_Browser
 5720              		.section	.rodata._ZTI17Fl_Select_Browser,"aG",@progbits,_ZTI17Fl_Select_Browser,comdat
 5721              		.align 8
 5724              	_ZTI17Fl_Select_Browser:
 5725 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5725      00000000 
 5726 0008 00000000 		.quad	_ZTS17Fl_Select_Browser
 5726      00000000 
 5727 0010 00000000 		.quad	_ZTI10Fl_Browser
 5727      00000000 
 5728              		.weak	_ZTV15Fl_Hold_Browser
 5729              		.section	.rodata._ZTV15Fl_Hold_Browser,"aG",@progbits,_ZTV15Fl_Hold_Browser,comdat
 5730              		.align 8
 5733              	_ZTV15Fl_Hold_Browser:
 5734 0000 00000000 		.quad	0
 5734      00000000 
 5735 0008 00000000 		.quad	_ZTI15Fl_Hold_Browser
 5735      00000000 
 5736 0010 00000000 		.quad	_ZN15Fl_Hold_BrowserD1Ev
 5736      00000000 
 5737 0018 00000000 		.quad	_ZN15Fl_Hold_BrowserD0Ev
 5737      00000000 
 5738 0020 00000000 		.quad	_ZN11Fl_Browser_4drawEv
 5738      00000000 
 5739 0028 00000000 		.quad	_ZN11Fl_Browser_6handleEi
 5739      00000000 
 5740 0030 00000000 		.quad	_ZN11Fl_Browser_6resizeEiiii
 5740      00000000 
 5741 0038 00000000 		.quad	_ZN10Fl_Browser4showEv
 5741      00000000 
 5742 0040 00000000 		.quad	_ZN10Fl_Browser4hideEv
 5742      00000000 
 5743 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 5743      00000000 
 5744 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5744      00000000 
 5745 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5745      00000000 
 5746 0060 00000000 		.quad	_ZNK10Fl_Browser10item_firstEv
 5746      00000000 
 5747 0068 00000000 		.quad	_ZNK10Fl_Browser9item_nextEPv
 5747      00000000 
 5748 0070 00000000 		.quad	_ZNK10Fl_Browser9item_prevEPv
 5748      00000000 
 5749 0078 00000000 		.quad	_ZNK10Fl_Browser9item_lastEv
 5749      00000000 
 5750 0080 00000000 		.quad	_ZNK10Fl_Browser11item_heightEPv
 5750      00000000 
 5751 0088 00000000 		.quad	_ZNK10Fl_Browser10item_widthEPv
 5751      00000000 
 5752 0090 00000000 		.quad	_ZNK11Fl_Browser_17item_quick_heightEPv
 5752      00000000 
 5753 0098 00000000 		.quad	_ZNK10Fl_Browser9item_drawEPviiii
 5753      00000000 
 5754 00a0 00000000 		.quad	_ZNK10Fl_Browser9item_textEPv
 5754      00000000 
 5755 00a8 00000000 		.quad	_ZN10Fl_Browser9item_swapEPvS0_
 5755      00000000 
 5756 00b0 00000000 		.quad	_ZNK10Fl_Browser7item_atEi
 5756      00000000 
 5757 00b8 00000000 		.quad	_ZNK11Fl_Browser_10full_widthEv
 5757      00000000 
 5758 00c0 00000000 		.quad	_ZNK10Fl_Browser11full_heightEv
 5758      00000000 
 5759 00c8 00000000 		.quad	_ZNK10Fl_Browser11incr_heightEv
 5759      00000000 
 5760 00d0 00000000 		.quad	_ZN10Fl_Browser11item_selectEPvi
 5760      00000000 
 5761 00d8 00000000 		.quad	_ZNK10Fl_Browser13item_selectedEPv
 5761      00000000 
 5762              		.weak	_ZTV16Fl_Multi_Browser
 5763              		.section	.rodata._ZTV16Fl_Multi_Browser,"aG",@progbits,_ZTV16Fl_Multi_Browser,comdat
 5764              		.align 8
 5767              	_ZTV16Fl_Multi_Browser:
 5768 0000 00000000 		.quad	0
 5768      00000000 
 5769 0008 00000000 		.quad	_ZTI16Fl_Multi_Browser
 5769      00000000 
 5770 0010 00000000 		.quad	_ZN16Fl_Multi_BrowserD1Ev
 5770      00000000 
 5771 0018 00000000 		.quad	_ZN16Fl_Multi_BrowserD0Ev
 5771      00000000 
 5772 0020 00000000 		.quad	_ZN11Fl_Browser_4drawEv
 5772      00000000 
 5773 0028 00000000 		.quad	_ZN11Fl_Browser_6handleEi
 5773      00000000 
 5774 0030 00000000 		.quad	_ZN11Fl_Browser_6resizeEiiii
 5774      00000000 
 5775 0038 00000000 		.quad	_ZN10Fl_Browser4showEv
 5775      00000000 
 5776 0040 00000000 		.quad	_ZN10Fl_Browser4hideEv
 5776      00000000 
 5777 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 5777      00000000 
 5778 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5778      00000000 
 5779 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5779      00000000 
 5780 0060 00000000 		.quad	_ZNK10Fl_Browser10item_firstEv
 5780      00000000 
 5781 0068 00000000 		.quad	_ZNK10Fl_Browser9item_nextEPv
 5781      00000000 
 5782 0070 00000000 		.quad	_ZNK10Fl_Browser9item_prevEPv
 5782      00000000 
 5783 0078 00000000 		.quad	_ZNK10Fl_Browser9item_lastEv
 5783      00000000 
 5784 0080 00000000 		.quad	_ZNK10Fl_Browser11item_heightEPv
 5784      00000000 
 5785 0088 00000000 		.quad	_ZNK10Fl_Browser10item_widthEPv
 5785      00000000 
 5786 0090 00000000 		.quad	_ZNK11Fl_Browser_17item_quick_heightEPv
 5786      00000000 
 5787 0098 00000000 		.quad	_ZNK10Fl_Browser9item_drawEPviiii
 5787      00000000 
 5788 00a0 00000000 		.quad	_ZNK10Fl_Browser9item_textEPv
 5788      00000000 
 5789 00a8 00000000 		.quad	_ZN10Fl_Browser9item_swapEPvS0_
 5789      00000000 
 5790 00b0 00000000 		.quad	_ZNK10Fl_Browser7item_atEi
 5790      00000000 
 5791 00b8 00000000 		.quad	_ZNK11Fl_Browser_10full_widthEv
 5791      00000000 
 5792 00c0 00000000 		.quad	_ZNK10Fl_Browser11full_heightEv
 5792      00000000 
 5793 00c8 00000000 		.quad	_ZNK10Fl_Browser11incr_heightEv
 5793      00000000 
 5794 00d0 00000000 		.quad	_ZN10Fl_Browser11item_selectEPvi
 5794      00000000 
 5795 00d8 00000000 		.quad	_ZNK10Fl_Browser13item_selectedEPv
 5795      00000000 
 5796              		.weak	_ZTV17Fl_Select_Browser
 5797              		.section	.rodata._ZTV17Fl_Select_Browser,"aG",@progbits,_ZTV17Fl_Select_Browser,comdat
 5798              		.align 8
 5801              	_ZTV17Fl_Select_Browser:
 5802 0000 00000000 		.quad	0
 5802      00000000 
 5803 0008 00000000 		.quad	_ZTI17Fl_Select_Browser
 5803      00000000 
 5804 0010 00000000 		.quad	_ZN17Fl_Select_BrowserD1Ev
 5804      00000000 
 5805 0018 00000000 		.quad	_ZN17Fl_Select_BrowserD0Ev
 5805      00000000 
 5806 0020 00000000 		.quad	_ZN11Fl_Browser_4drawEv
 5806      00000000 
 5807 0028 00000000 		.quad	_ZN11Fl_Browser_6handleEi
 5807      00000000 
 5808 0030 00000000 		.quad	_ZN11Fl_Browser_6resizeEiiii
 5808      00000000 
 5809 0038 00000000 		.quad	_ZN10Fl_Browser4showEv
 5809      00000000 
 5810 0040 00000000 		.quad	_ZN10Fl_Browser4hideEv
 5810      00000000 
 5811 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 5811      00000000 
 5812 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5812      00000000 
 5813 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5813      00000000 
 5814 0060 00000000 		.quad	_ZNK10Fl_Browser10item_firstEv
 5814      00000000 
 5815 0068 00000000 		.quad	_ZNK10Fl_Browser9item_nextEPv
 5815      00000000 
 5816 0070 00000000 		.quad	_ZNK10Fl_Browser9item_prevEPv
 5816      00000000 
 5817 0078 00000000 		.quad	_ZNK10Fl_Browser9item_lastEv
 5817      00000000 
 5818 0080 00000000 		.quad	_ZNK10Fl_Browser11item_heightEPv
 5818      00000000 
 5819 0088 00000000 		.quad	_ZNK10Fl_Browser10item_widthEPv
 5819      00000000 
 5820 0090 00000000 		.quad	_ZNK11Fl_Browser_17item_quick_heightEPv
 5820      00000000 
 5821 0098 00000000 		.quad	_ZNK10Fl_Browser9item_drawEPviiii
 5821      00000000 
 5822 00a0 00000000 		.quad	_ZNK10Fl_Browser9item_textEPv
 5822      00000000 
 5823 00a8 00000000 		.quad	_ZN10Fl_Browser9item_swapEPvS0_
 5823      00000000 
 5824 00b0 00000000 		.quad	_ZNK10Fl_Browser7item_atEi
 5824      00000000 
 5825 00b8 00000000 		.quad	_ZNK11Fl_Browser_10full_widthEv
 5825      00000000 
 5826 00c0 00000000 		.quad	_ZNK10Fl_Browser11full_heightEv
 5826      00000000 
 5827 00c8 00000000 		.quad	_ZNK10Fl_Browser11incr_heightEv
 5827      00000000 
 5828 00d0 00000000 		.quad	_ZN10Fl_Browser11item_selectEPvi
 5828      00000000 
 5829 00d8 00000000 		.quad	_ZNK10Fl_Browser13item_selectedEPv
 5829      00000000 
 5830              		.weak	_ZTV10Fl_Browser
 5831              		.section	.rodata._ZTV10Fl_Browser,"aG",@progbits,_ZTV10Fl_Browser,comdat
 5832              		.align 8
 5835              	_ZTV10Fl_Browser:
 5836 0000 00000000 		.quad	0
 5836      00000000 
 5837 0008 00000000 		.quad	_ZTI10Fl_Browser
 5837      00000000 
 5838 0010 00000000 		.quad	_ZN10Fl_BrowserD1Ev
 5838      00000000 
 5839 0018 00000000 		.quad	_ZN10Fl_BrowserD0Ev
 5839      00000000 
 5840 0020 00000000 		.quad	_ZN11Fl_Browser_4drawEv
 5840      00000000 
 5841 0028 00000000 		.quad	_ZN11Fl_Browser_6handleEi
 5841      00000000 
 5842 0030 00000000 		.quad	_ZN11Fl_Browser_6resizeEiiii
 5842      00000000 
 5843 0038 00000000 		.quad	_ZN10Fl_Browser4showEv
 5843      00000000 
 5844 0040 00000000 		.quad	_ZN10Fl_Browser4hideEv
 5844      00000000 
 5845 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 5845      00000000 
 5846 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5846      00000000 
 5847 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5847      00000000 
 5848 0060 00000000 		.quad	_ZNK10Fl_Browser10item_firstEv
 5848      00000000 
 5849 0068 00000000 		.quad	_ZNK10Fl_Browser9item_nextEPv
 5849      00000000 
 5850 0070 00000000 		.quad	_ZNK10Fl_Browser9item_prevEPv
 5850      00000000 
 5851 0078 00000000 		.quad	_ZNK10Fl_Browser9item_lastEv
 5851      00000000 
 5852 0080 00000000 		.quad	_ZNK10Fl_Browser11item_heightEPv
 5852      00000000 
 5853 0088 00000000 		.quad	_ZNK10Fl_Browser10item_widthEPv
 5853      00000000 
 5854 0090 00000000 		.quad	_ZNK11Fl_Browser_17item_quick_heightEPv
 5854      00000000 
 5855 0098 00000000 		.quad	_ZNK10Fl_Browser9item_drawEPviiii
 5855      00000000 
 5856 00a0 00000000 		.quad	_ZNK10Fl_Browser9item_textEPv
 5856      00000000 
 5857 00a8 00000000 		.quad	_ZN10Fl_Browser9item_swapEPvS0_
 5857      00000000 
 5858 00b0 00000000 		.quad	_ZNK10Fl_Browser7item_atEi
 5858      00000000 
 5859 00b8 00000000 		.quad	_ZNK11Fl_Browser_10full_widthEv
 5859      00000000 
 5860 00c0 00000000 		.quad	_ZNK10Fl_Browser11full_heightEv
 5860      00000000 
 5861 00c8 00000000 		.quad	_ZNK10Fl_Browser11incr_heightEv
 5861      00000000 
 5862 00d0 00000000 		.quad	_ZN10Fl_Browser11item_selectEPvi
 5862      00000000 
 5863 00d8 00000000 		.quad	_ZNK10Fl_Browser13item_selectedEPv
 5863      00000000 
 5864              		.section	.rodata._ZL10no_columns,"a",@progbits
 5865              		.align 4
 5868              	_ZL10no_columns:
 5869 0000 00000000 		.zero	4
 5870              		.text
 5871              	.Letext0:
 5872              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 5873              	.Letext_cold0:
 5874              		.file 13 "fltk-1.3.4-1/FL/fl_types.h"
 5875              		.file 14 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 5876              		.file 15 "/usr/include/x86_64-linux-gnu/bits/types.h"
 5877              		.file 16 "/usr/include/libio.h"
 5878              		.file 17 "fltk-1.3.4-1/FL/Enumerations.H"
 5879              		.file 18 "fltk-1.3.4-1/FL/Fl_Device.H"
 5880              		.file 19 "/usr/include/stdio.h"
 5881              		.file 20 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Browser.cxx
     /tmp/ccsXrHDX.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccsXrHDX.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccsXrHDX.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccsXrHDX.s:90     .text._ZNK10Fl_Browser10item_firstEv:0000000000000000 _ZNK10Fl_Browser10item_firstEv
     /tmp/ccsXrHDX.s:115    .text._ZNK10Fl_Browser9item_nextEPv:0000000000000000 _ZNK10Fl_Browser9item_nextEPv
     /tmp/ccsXrHDX.s:139    .text._ZNK10Fl_Browser9item_prevEPv:0000000000000000 _ZNK10Fl_Browser9item_prevEPv
     /tmp/ccsXrHDX.s:163    .text._ZNK10Fl_Browser9item_lastEv:0000000000000000 _ZNK10Fl_Browser9item_lastEv
     /tmp/ccsXrHDX.s:187    .text._ZNK10Fl_Browser13item_selectedEPv:0000000000000000 _ZNK10Fl_Browser13item_selectedEPv
     /tmp/ccsXrHDX.s:213    .text._ZN10Fl_Browser11item_selectEPvi:0000000000000000 _ZN10Fl_Browser11item_selectEPvi
     /tmp/ccsXrHDX.s:246    .text._ZNK10Fl_Browser9item_textEPv:0000000000000000 _ZNK10Fl_Browser9item_textEPv
     /tmp/ccsXrHDX.s:271    .text._ZNK10Fl_Browser11full_heightEv:0000000000000000 _ZNK10Fl_Browser11full_heightEv
     /tmp/ccsXrHDX.s:296    .text._ZNK10Fl_Browser11incr_heightEv:0000000000000000 _ZNK10Fl_Browser11incr_heightEv
     /tmp/ccsXrHDX.s:322    .text._ZNK10Fl_Browser10item_widthEPv:0000000000000000 _ZNK10Fl_Browser10item_widthEPv
     /tmp/ccsXrHDX.s:771    .text._ZNK10Fl_Browser9item_drawEPviiii:0000000000000000 _ZNK10Fl_Browser9item_drawEPviiii
     /tmp/ccsXrHDX.s:1600   .text._ZN10Fl_Browser4hideEv:0000000000000000 _ZN10Fl_Browser4hideEv
     /tmp/ccsXrHDX.s:1625   .text._ZN10Fl_Browser4showEv:0000000000000000 _ZN10Fl_Browser4showEv
     /tmp/ccsXrHDX.s:1649   .text._ZNK10Fl_Browser11item_heightEPv:0000000000000000 _ZNK10Fl_Browser11item_heightEPv
     /tmp/ccsXrHDX.s:2210   .text._ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20:0000000000000000 _ZN10Fl_Browser4swapEP8FL_BLINES1_.part.15.constprop.20
     /tmp/ccsXrHDX.s:2417   .text._ZN10Fl_Browser9item_swapEPvS0_:0000000000000000 _ZN10Fl_Browser9item_swapEPvS0_
     /tmp/ccsXrHDX.s:2457   .text._ZNK10Fl_Browser9find_lineEi:0000000000000000 _ZNK10Fl_Browser9find_lineEi
     /tmp/ccsXrHDX.s:2595   .text._ZNK10Fl_Browser7item_atEi:0000000000000000 _ZNK10Fl_Browser7item_atEi
     /tmp/ccsXrHDX.s:2618   .text._ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18:0000000000000000 _ZN10Fl_Browser4iconEiP8Fl_Image.part.16.constprop.18
     /tmp/ccsXrHDX.s:2755   .text._ZNK10Fl_Browser6linenoEPv:0000000000000000 _ZNK10Fl_Browser6linenoEPv
     /tmp/ccsXrHDX.s:2919   .text._ZN10Fl_Browser7_removeEi:0000000000000000 _ZN10Fl_Browser7_removeEi
     /tmp/ccsXrHDX.s:3037   .text._ZN10Fl_Browser6removeEi:0000000000000000 _ZN10Fl_Browser6removeEi
     /tmp/ccsXrHDX.s:3082   .text._ZN10Fl_Browser6insertEiP8FL_BLINE:0000000000000000 _ZN10Fl_Browser6insertEiP8FL_BLINE
     /tmp/ccsXrHDX.s:3252   .text._ZN10Fl_Browser6insertEiPKcPv:0000000000000000 _ZN10Fl_Browser6insertEiPKcPv
     /tmp/ccsXrHDX.s:3383   .text._ZN10Fl_Browser4moveEii:0000000000000000 _ZN10Fl_Browser4moveEii
     /tmp/ccsXrHDX.s:3452   .text._ZN10Fl_Browser4textEiPKc:0000000000000000 _ZN10Fl_Browser4textEiPKc
     /tmp/ccsXrHDX.s:3680   .text._ZN10Fl_Browser4dataEiPv:0000000000000000 _ZN10Fl_Browser4dataEiPv
     /tmp/ccsXrHDX.s:3718   .text._ZN10Fl_BrowserC2EiiiiPKc:0000000000000000 _ZN10Fl_BrowserC2EiiiiPKc
     /tmp/ccsXrHDX.s:5835   .rodata._ZTV10Fl_Browser:0000000000000000 _ZTV10Fl_Browser
     /tmp/ccsXrHDX.s:5868   .rodata._ZL10no_columns:0000000000000000 _ZL10no_columns
     /tmp/ccsXrHDX.s:3718   .text._ZN10Fl_BrowserC2EiiiiPKc:0000000000000000 _ZN10Fl_BrowserC1EiiiiPKc
     /tmp/ccsXrHDX.s:3773   .text._ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE:0000000000000000 _ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
     /tmp/ccsXrHDX.s:4009   .text._ZNK10Fl_Browser7toplineEv:0000000000000000 _ZNK10Fl_Browser7toplineEv
     /tmp/ccsXrHDX.s:4034   .text._ZN10Fl_Browser8textsizeEi:0000000000000000 _ZN10Fl_Browser8textsizeEi
     /tmp/ccsXrHDX.s:4173   .text._ZN10Fl_Browser5clearEv:0000000000000000 _ZN10Fl_Browser5clearEv
     /tmp/ccsXrHDX.s:4249   .text._ZN10Fl_Browser3addEPKcPv:0000000000000000 _ZN10Fl_Browser3addEPKcPv
     /tmp/ccsXrHDX.s:4282   .text._ZNK10Fl_Browser4textEi:0000000000000000 _ZNK10Fl_Browser4textEi
     /tmp/ccsXrHDX.s:4321   .text._ZNK10Fl_Browser4dataEi:0000000000000000 _ZNK10Fl_Browser4dataEi
     /tmp/ccsXrHDX.s:4360   .text._ZN10Fl_Browser6selectEii:0000000000000000 _ZN10Fl_Browser6selectEii
     /tmp/ccsXrHDX.s:4410   .text._ZNK10Fl_Browser8selectedEi:0000000000000000 _ZNK10Fl_Browser8selectedEi
     /tmp/ccsXrHDX.s:4450   .text._ZN10Fl_Browser4showEi:0000000000000000 _ZN10Fl_Browser4showEi
     /tmp/ccsXrHDX.s:4540   .text._ZN10Fl_Browser4hideEi:0000000000000000 _ZN10Fl_Browser4hideEi
     /tmp/ccsXrHDX.s:4626   .text._ZN10Fl_Browser7displayEii:0000000000000000 _ZN10Fl_Browser7displayEii
     /tmp/ccsXrHDX.s:4669   .text._ZNK10Fl_Browser7visibleEi:0000000000000000 _ZNK10Fl_Browser7visibleEi
     /tmp/ccsXrHDX.s:4711   .text._ZNK10Fl_Browser5valueEv:0000000000000000 _ZNK10Fl_Browser5valueEv
     /tmp/ccsXrHDX.s:4736   .text._ZN10Fl_Browser4swapEP8FL_BLINES1_:0000000000000000 _ZN10Fl_Browser4swapEP8FL_BLINES1_
     /tmp/ccsXrHDX.s:4772   .text._ZN10Fl_Browser4swapEii:0000000000000000 _ZN10Fl_Browser4swapEii
     /tmp/ccsXrHDX.s:4853   .text._ZN10Fl_Browser4iconEiP8Fl_Image:0000000000000000 _ZN10Fl_Browser4iconEiP8Fl_Image
     /tmp/ccsXrHDX.s:4887   .text._ZNK10Fl_Browser4iconEi:0000000000000000 _ZNK10Fl_Browser4iconEi
     /tmp/ccsXrHDX.s:4927   .text._ZN10Fl_Browser11remove_iconEi:0000000000000000 _ZN10Fl_Browser11remove_iconEi
     /tmp/ccsXrHDX.s:4965   .text._ZN15Fl_Hold_BrowserC2EiiiiPKc:0000000000000000 _ZN15Fl_Hold_BrowserC2EiiiiPKc
     /tmp/ccsXrHDX.s:5733   .rodata._ZTV15Fl_Hold_Browser:0000000000000000 _ZTV15Fl_Hold_Browser
     /tmp/ccsXrHDX.s:4965   .text._ZN15Fl_Hold_BrowserC2EiiiiPKc:0000000000000000 _ZN15Fl_Hold_BrowserC1EiiiiPKc
     /tmp/ccsXrHDX.s:5034   .text._ZN16Fl_Multi_BrowserC2EiiiiPKc:0000000000000000 _ZN16Fl_Multi_BrowserC2EiiiiPKc
     /tmp/ccsXrHDX.s:5767   .rodata._ZTV16Fl_Multi_Browser:0000000000000000 _ZTV16Fl_Multi_Browser
     /tmp/ccsXrHDX.s:5034   .text._ZN16Fl_Multi_BrowserC2EiiiiPKc:0000000000000000 _ZN16Fl_Multi_BrowserC1EiiiiPKc
     /tmp/ccsXrHDX.s:5103   .text._ZN17Fl_Select_BrowserC2EiiiiPKc:0000000000000000 _ZN17Fl_Select_BrowserC2EiiiiPKc
     /tmp/ccsXrHDX.s:5801   .rodata._ZTV17Fl_Select_Browser:0000000000000000 _ZTV17Fl_Select_Browser
     /tmp/ccsXrHDX.s:5103   .text._ZN17Fl_Select_BrowserC2EiiiiPKc:0000000000000000 _ZN17Fl_Select_BrowserC1EiiiiPKc
     /tmp/ccsXrHDX.s:5172   .text._ZN10Fl_BrowserD2Ev:0000000000000000 _ZN10Fl_BrowserD2Ev
     /tmp/ccsXrHDX.s:5172   .text._ZN10Fl_BrowserD2Ev:0000000000000000 _ZN10Fl_BrowserD1Ev
     /tmp/ccsXrHDX.s:5231   .text._ZN17Fl_Select_BrowserD2Ev:0000000000000000 _ZN17Fl_Select_BrowserD2Ev
     /tmp/ccsXrHDX.s:5231   .text._ZN17Fl_Select_BrowserD2Ev:0000000000000000 _ZN17Fl_Select_BrowserD1Ev
     /tmp/ccsXrHDX.s:5300   .text._ZN16Fl_Multi_BrowserD2Ev:0000000000000000 _ZN16Fl_Multi_BrowserD2Ev
     /tmp/ccsXrHDX.s:5300   .text._ZN16Fl_Multi_BrowserD2Ev:0000000000000000 _ZN16Fl_Multi_BrowserD1Ev
     /tmp/ccsXrHDX.s:5369   .text._ZN15Fl_Hold_BrowserD2Ev:0000000000000000 _ZN15Fl_Hold_BrowserD2Ev
     /tmp/ccsXrHDX.s:5369   .text._ZN15Fl_Hold_BrowserD2Ev:0000000000000000 _ZN15Fl_Hold_BrowserD1Ev
     /tmp/ccsXrHDX.s:5438   .text._ZN10Fl_BrowserD0Ev:0000000000000000 _ZN10Fl_BrowserD0Ev
     /tmp/ccsXrHDX.s:5493   .text._ZN15Fl_Hold_BrowserD0Ev:0000000000000000 _ZN15Fl_Hold_BrowserD0Ev
     /tmp/ccsXrHDX.s:5553   .text._ZN17Fl_Select_BrowserD0Ev:0000000000000000 _ZN17Fl_Select_BrowserD0Ev
     /tmp/ccsXrHDX.s:5613   .text._ZN16Fl_Multi_BrowserD0Ev:0000000000000000 _ZN16Fl_Multi_BrowserD0Ev
     /tmp/ccsXrHDX.s:5669   .rodata._ZTS10Fl_Browser:0000000000000000 _ZTS10Fl_Browser
     /tmp/ccsXrHDX.s:5676   .rodata._ZTI10Fl_Browser:0000000000000000 _ZTI10Fl_Browser
     /tmp/ccsXrHDX.s:5685   .rodata._ZTS15Fl_Hold_Browser:0000000000000000 _ZTS15Fl_Hold_Browser
     /tmp/ccsXrHDX.s:5692   .rodata._ZTI15Fl_Hold_Browser:0000000000000000 _ZTI15Fl_Hold_Browser
     /tmp/ccsXrHDX.s:5701   .rodata._ZTS16Fl_Multi_Browser:0000000000000000 _ZTS16Fl_Multi_Browser
     /tmp/ccsXrHDX.s:5708   .rodata._ZTI16Fl_Multi_Browser:0000000000000000 _ZTI16Fl_Multi_Browser
     /tmp/ccsXrHDX.s:5717   .rodata._ZTS17Fl_Select_Browser:0000000000000000 _ZTS17Fl_Select_Browser
     /tmp/ccsXrHDX.s:5724   .rodata._ZTI17Fl_Select_Browser:0000000000000000 _ZTI17Fl_Select_Browser
                           .group:0000000000000000 _ZN10Fl_BrowserD5Ev
                           .group:0000000000000000 _ZN17Fl_Select_BrowserD5Ev
                           .group:0000000000000000 _ZN16Fl_Multi_BrowserD5Ev
                           .group:0000000000000000 _ZN15Fl_Hold_BrowserD5Ev
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
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844

UNDEFINED SYMBOLS
strchr
fl_graphics_driver
_Z8fl_widthPKc
strtol
__stack_chk_fail
_ZNK9Fl_Widget8active_rEv
_Z7fl_drawPKciiiijP8Fl_Imagei
_Z11fl_inactivej
_Z11fl_contrastjj
_ZN9Fl_Widget4hideEv
_ZN9Fl_Widget4showEv
_ZN11Fl_Browser_8swappingEPvS0_
_ZN9Fl_Widget6redrawEv
_ZN11Fl_Browser_9replacingEPvS0_
_ZN11Fl_Browser_11redraw_lineEPv
_ZN11Fl_Browser_8deletingEPv
free
_ZN11Fl_Browser_9insertingEPvS0_
strlen
malloc
strcpy
_ZN11Fl_Browser_C2EiiiiPKc
_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
_ZN11Fl_Browser_8positionEi
_ZN11Fl_Browser_8new_listEv
_ZN11Fl_Browser_6selectEPvii
_ZNK11Fl_Browser_9displayedEPv
_ZTV11Fl_Browser_
_ZN12Fl_ScrollbarD1Ev
_ZN8Fl_GroupD2Ev
_ZdlPv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI11Fl_Browser_
_ZN11Fl_Browser_4drawEv
_ZN11Fl_Browser_6handleEi
_ZN11Fl_Browser_6resizeEiiii
_ZNK11Fl_Browser_17item_quick_heightEPv
_ZNK11Fl_Browser_10full_widthEv
