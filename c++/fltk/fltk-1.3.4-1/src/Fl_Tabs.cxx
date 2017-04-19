   1              		.file	"Fl_Tabs.cxx"
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
  81              		.section	.text.unlikely._ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21,"ax",@progbits
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21,"ax",@progbits
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  89              	_ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21:
  90              	.LFB527:
  91              		.file 3 "fltk-1.3.4-1/src/Fl_Tabs.cxx"
   1:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    1              		.file	"Fl_Tabs.cxx"
   2:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   17              	.LFB233:
  17:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Tabs.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
  92              		.loc 3 101 0
  93              		.cfi_startproc
  94              	.LVL3:
  95 0000 4154     		pushq	%r12
  96              		.cfi_def_cfa_offset 16
  97              		.cfi_offset 12, -16
  98 0002 55       		pushq	%rbp
  99              		.cfi_def_cfa_offset 24
 100              		.cfi_offset 6, -24
 101 0003 4989FC   		movq	%rdi, %r12
 102 0006 53       		pushq	%rbx
 103              		.cfi_def_cfa_offset 32
 104              		.cfi_offset 3, -32
 105 0007 8B5F2C   		movl	44(%rdi), %ebx
 106              	.LVL4:
 107 000a 8B6F24   		movl	36(%rdi), %ebp
 108              	.LVL5:
 102:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 109              		.loc 3 105 0
 110 000d E8000000 		call	_ZNK8Fl_Group5arrayEv
 110      00
 111              	.LVL6:
 112 0012 418B9424 		movl	144(%r12), %edx
 112      90000000 
 113              	.LVL7:
 114 001a 418B7424 		movl	36(%r12), %esi
 114      24
 115              	.LBB554:
 106:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 116              		.loc 3 106 0
 117 001f 85D2     		testl	%edx, %edx
 118 0021 7433     		je	.L6
 119 0023 83EA01   		subl	$1, %edx
 120              	.LVL8:
 121 0026 4C8D4CD0 		leaq	8(%rax,%rdx,8), %r9
 121      08
 122              	.LVL9:
 123 002b 0F1F4400 		.p2align 4,,10
 123      00
 124              		.p2align 3
 125              	.L8:
 126              	.LBB555:
 107:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 127              		.loc 3 107 0
 128 0030 4883C008 		addq	$8, %rax
 129              	.LVL10:
 130 0034 488B48F8 		movq	-8(%rax), %rcx
 131              	.LVL11:
 108:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 132              		.loc 3 108 0
 133 0038 448D041E 		leal	(%rsi,%rbx), %r8d
 134 003c 8B5124   		movl	36(%rcx), %edx
 135              	.LVL12:
 136 003f 89D7     		movl	%edx, %edi
 137 0041 29F7     		subl	%esi, %edi
 138 0043 4439C2   		cmpl	%r8d, %edx
 139 0046 0F4CDF   		cmovl	%edi, %ebx
 140              	.LVL13:
 109:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 141              		.loc 3 109 0
 142 0049 03512C   		addl	44(%rcx), %edx
 143 004c 39D5     		cmpl	%edx, %ebp
 144 004e 0F4CEA   		cmovl	%edx, %ebp
 145              	.LVL14:
 146              	.LBE555:
 106:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 147              		.loc 3 106 0
 148 0051 4C39C8   		cmpq	%r9, %rax
 149 0054 75DA     		jne	.L8
 150              	.LVL15:
 151              	.L6:
 152              	.LBE554:
 110:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 153              		.loc 3 111 0
 154 0056 41037424 		addl	44(%r12), %esi
 154      2C
 155 005b 29EE     		subl	%ebp, %esi
 156              	.LVL16:
 112:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 157              		.loc 3 112 0
 158 005d 39DE     		cmpl	%ebx, %esi
 159 005f 7E17     		jle	.L9
 160 0061 89F0     		movl	%esi, %eax
 161              	.LVL17:
 162 0063 BB000000 		movl	$0, %ebx
 162      00
 163              	.LVL18:
 164 0068 F7D8     		negl	%eax
 165 006a 85F6     		testl	%esi, %esi
 166 006c 0F4EC3   		cmovle	%ebx, %eax
 113:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 167              		.loc 3 114 0
 168 006f 5B       		popq	%rbx
 169              		.cfi_remember_state
 170              		.cfi_def_cfa_offset 24
 171 0070 5D       		popq	%rbp
 172              		.cfi_def_cfa_offset 16
 173 0071 415C     		popq	%r12
 174              		.cfi_def_cfa_offset 8
 175              	.LVL19:
 176 0073 C3       		ret
 177              	.LVL20:
 178              		.p2align 4,,10
 179 0074 0F1F4000 		.p2align 3
 180              	.L9:
 181              		.cfi_restore_state
 113:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 182              		.loc 3 113 0
 183 0078 85DB     		testl	%ebx, %ebx
 184 007a B8000000 		movl	$0, %eax
 184      00
 185              	.LVL21:
 186 007f 0F49C3   		cmovns	%ebx, %eax
 187              		.loc 3 114 0
 188 0082 5B       		popq	%rbx
 189              		.cfi_def_cfa_offset 24
 190              	.LVL22:
 191 0083 5D       		popq	%rbp
 192              		.cfi_def_cfa_offset 16
 193 0084 415C     		popq	%r12
 194              		.cfi_def_cfa_offset 8
 195              	.LVL23:
 196 0086 C3       		ret
 197              		.cfi_endproc
 198              	.LFE527:
 200              		.section	.text.unlikely._ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
 201              	.LCOLDE3:
 202              		.section	.text._ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
 203              	.LHOTE3:
 204              		.section	.text.unlikely._ZN7Fl_Tabs10tab_heightEv,"ax",@progbits
 205              		.align 2
 206              	.LCOLDB4:
 207              		.section	.text._ZN7Fl_Tabs10tab_heightEv,"ax",@progbits
 208              	.LHOTB4:
 209              		.align 2
 210              		.p2align 4,,15
 211              		.globl	_ZN7Fl_Tabs10tab_heightEv
 213              	_ZN7Fl_Tabs10tab_heightEv:
 214              	.LFB489:
 101:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 215              		.loc 3 101 0
 216              		.cfi_startproc
 217              	.LVL24:
 102:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 218              		.loc 3 102 0
 219 0000 8B879000 		movl	144(%rdi), %eax
 219      0000
 220 0006 85C0     		testl	%eax, %eax
 221 0008 7506     		jne	.L20
 222 000a 8B472C   		movl	44(%rdi), %eax
 223              	.LVL25:
 224              		.loc 3 114 0 discriminator 1
 225 000d C3       		ret
 226              	.LVL26:
 227 000e 6690     		.p2align 4,,10
 228              		.p2align 3
 229              	.L20:
 230 0010 E9000000 		jmp	_ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
 230      00
 231              	.LVL27:
 232              		.cfi_endproc
 233              	.LFE489:
 235              		.section	.text.unlikely._ZN7Fl_Tabs10tab_heightEv
 236              	.LCOLDE4:
 237              		.section	.text._ZN7Fl_Tabs10tab_heightEv
 238              	.LHOTE4:
 239              		.section	.text.unlikely._ZN7Fl_Tabs11redraw_tabsEv,"ax",@progbits
 240              		.align 2
 241              	.LCOLDB5:
 242              		.section	.text._ZN7Fl_Tabs11redraw_tabsEv,"ax",@progbits
 243              	.LHOTB5:
 244              		.align 2
 245              		.p2align 4,,15
 246              		.globl	_ZN7Fl_Tabs11redraw_tabsEv
 248              	_ZN7Fl_Tabs11redraw_tabsEv:
 249              	.LFB491:
 115:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 250              		.loc 3 145 0
 251              		.cfi_startproc
 252              	.LVL28:
 253 0000 55       		pushq	%rbp
 254              		.cfi_def_cfa_offset 16
 255              		.cfi_offset 6, -16
 256 0001 53       		pushq	%rbx
 257              		.cfi_def_cfa_offset 24
 258              		.cfi_offset 3, -24
 259 0002 4889FB   		movq	%rdi, %rbx
 260 0005 4883EC08 		subq	$8, %rsp
 261              		.cfi_def_cfa_offset 32
 262              	.LBB556:
 263              	.LBB557:
 102:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 264              		.loc 3 102 0
 265 0009 8B879000 		movl	144(%rdi), %eax
 265      0000
 266 000f 85C0     		testl	%eax, %eax
 267 0011 754D     		jne	.L22
 268 0013 8B6F2C   		movl	44(%rdi), %ebp
 269              	.LVL29:
 270              	.L23:
 271              	.LBE557:
 272              	.LBE556:
 146:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 273              		.loc 3 147 0
 274 0016 85ED     		testl	%ebp, %ebp
 148:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 275              		.loc 3 148 0
 276 0018 0FB67B6E 		movzbl	110(%rbx), %edi
 147:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 277              		.loc 3 147 0
 278 001c 782A     		js	.L24
 279              	.LVL30:
 280              		.loc 3 148 0
 281 001e E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 281      00
 282              	.LVL31:
 149:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 283              		.loc 3 149 0
 284 0023 8B4B24   		movl	36(%rbx), %ecx
 285 0026 8B5320   		movl	32(%rbx), %edx
 286 0029 448D0C28 		leal	(%rax,%rbp), %r9d
 287              	.LVL32:
 288              	.L26:
 150:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 289              		.loc 3 152 0
 290 002d 448B4328 		movl	40(%rbx), %r8d
 153:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 291              		.loc 3 154 0
 292 0031 4883C408 		addq	$8, %rsp
 293              		.cfi_remember_state
 294              		.cfi_def_cfa_offset 24
 152:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 295              		.loc 3 152 0
 296 0035 4889DF   		movq	%rbx, %rdi
 297              		.loc 3 154 0
 298 0038 5B       		popq	%rbx
 299              		.cfi_def_cfa_offset 16
 300              	.LVL33:
 301 0039 5D       		popq	%rbp
 302              		.cfi_def_cfa_offset 8
 152:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 303              		.loc 3 152 0
 304 003a BE040000 		movl	$4, %esi
 304      00
 305 003f E9000000 		jmp	_ZN9Fl_Widget6damageEhiiii
 305      00
 306              	.LVL34:
 307              		.p2align 4,,10
 308 0044 0F1F4000 		.p2align 3
 309              	.L24:
 310              		.cfi_restore_state
 151:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311              		.loc 3 151 0
 312 0048 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 312      00
 313              	.LVL35:
 152:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 314              		.loc 3 152 0
 315 004d 8B4B2C   		movl	44(%rbx), %ecx
 316 0050 034B24   		addl	36(%rbx), %ecx
 151:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 317              		.loc 3 151 0
 318 0053 29E8     		subl	%ebp, %eax
 319 0055 4189C1   		movl	%eax, %r9d
 320              	.LVL36:
 152:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 321              		.loc 3 152 0
 322 0058 8B5320   		movl	32(%rbx), %edx
 323 005b 29C1     		subl	%eax, %ecx
 324 005d EBCE     		jmp	.L26
 325              	.LVL37:
 326 005f 90       		.p2align 4,,10
 327              		.p2align 3
 328              	.L22:
 329              	.LBB559:
 330              	.LBB558:
 331 0060 E8000000 		call	_ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
 331      00
 332              	.LVL38:
 333 0065 89C5     		movl	%eax, %ebp
 334 0067 EBAD     		jmp	.L23
 335              	.LBE558:
 336              	.LBE559:
 337              		.cfi_endproc
 338              	.LFE491:
 340              		.section	.text.unlikely._ZN7Fl_Tabs11redraw_tabsEv
 341              	.LCOLDE5:
 342              		.section	.text._ZN7Fl_Tabs11redraw_tabsEv
 343              	.LHOTE5:
 344              		.section	.text.unlikely._ZN7Fl_Tabs4pushEP9Fl_Widget,"ax",@progbits
 345              		.align 2
 346              	.LCOLDB6:
 347              		.section	.text._ZN7Fl_Tabs4pushEP9Fl_Widget,"ax",@progbits
 348              	.LHOTB6:
 349              		.align 2
 350              		.p2align 4,,15
 351              		.globl	_ZN7Fl_Tabs4pushEP9Fl_Widget
 353              	_ZN7Fl_Tabs4pushEP9Fl_Widget:
 354              	.LFB493:
 155:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 355              		.loc 3 281 0
 356              		.cfi_startproc
 357              	.LVL39:
 282:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 358              		.loc 3 282 0
 359 0000 488B87A8 		movq	168(%rdi), %rax
 359      000000
 360 0007 4839F0   		cmpq	%rsi, %rax
 361 000a 7444     		je	.L32
 281:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362              		.loc 3 281 0
 363 000c 55       		pushq	%rbp
 364              		.cfi_def_cfa_offset 16
 365              		.cfi_offset 6, -16
 366 000d 53       		pushq	%rbx
 367              		.cfi_def_cfa_offset 24
 368              		.cfi_offset 3, -24
 369 000e 4889FD   		movq	%rdi, %rbp
 370 0011 4889F3   		movq	%rsi, %rbx
 371 0014 4883EC08 		subq	$8, %rsp
 372              		.cfi_def_cfa_offset 32
 283:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 373              		.loc 3 283 0
 374 0018 4885C0   		testq	%rax, %rax
 375 001b 7423     		je	.L29
 376              	.LVL40:
 377              		.loc 3 283 0 is_stmt 0 discriminator 1
 378 001d F6406002 		testb	$2, 96(%rax)
 379 0021 741D     		je	.L29
 380              	.LVL41:
 381              	.L30:
 284:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 382              		.loc 3 284 0 is_stmt 1
 383 0023 4889EF   		movq	%rbp, %rdi
 384              	.LVL42:
 385 0026 E8000000 		call	_ZN7Fl_Tabs11redraw_tabsEv
 385      00
 386              	.LVL43:
 387              	.L31:
 285:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 388              		.loc 3 285 0
 389 002b 48899DA8 		movq	%rbx, 168(%rbp)
 389      000000
 286:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 390              		.loc 3 287 0
 391 0032 4883C408 		addq	$8, %rsp
 392              		.cfi_remember_state
 393              		.cfi_def_cfa_offset 24
 286:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 394              		.loc 3 286 0
 395 0036 B8010000 		movl	$1, %eax
 395      00
 396              		.loc 3 287 0
 397 003b 5B       		popq	%rbx
 398              		.cfi_restore 3
 399              		.cfi_def_cfa_offset 16
 400              	.LVL44:
 401 003c 5D       		popq	%rbp
 402              		.cfi_restore 6
 403              		.cfi_def_cfa_offset 8
 404              	.LVL45:
 405 003d C3       		ret
 406              	.LVL46:
 407 003e 6690     		.p2align 4,,10
 408              		.p2align 3
 409              	.L29:
 410              		.cfi_restore_state
 283:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 411              		.loc 3 283 0 discriminator 4
 412 0040 4885DB   		testq	%rbx, %rbx
 413 0043 74E6     		je	.L31
 414              	.LVL47:
 283:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 415              		.loc 3 283 0 is_stmt 0 discriminator 5
 416 0045 F6436002 		testb	$2, 96(%rbx)
 417 0049 75D8     		jne	.L30
 418 004b EBDE     		jmp	.L31
 419              	.LVL48:
 420 004d 0F1F00   		.p2align 4,,10
 421              		.p2align 3
 422              	.L32:
 423              		.cfi_def_cfa_offset 8
 424              		.cfi_restore 3
 425              		.cfi_restore 6
 282:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 426              		.loc 3 282 0 is_stmt 1
 427 0050 31C0     		xorl	%eax, %eax
 428              		.loc 3 287 0
 429 0052 C3       		ret
 430              		.cfi_endproc
 431              	.LFE493:
 433              		.section	.text.unlikely._ZN7Fl_Tabs4pushEP9Fl_Widget
 434              	.LCOLDE6:
 435              		.section	.text._ZN7Fl_Tabs4pushEP9Fl_Widget
 436              	.LHOTE6:
 437              		.section	.text.unlikely._ZN7Fl_Tabs5valueEv,"ax",@progbits
 438              		.align 2
 439              	.LCOLDB7:
 440              		.section	.text._ZN7Fl_Tabs5valueEv,"ax",@progbits
 441              	.LHOTB7:
 442              		.align 2
 443              		.p2align 4,,15
 444              		.globl	_ZN7Fl_Tabs5valueEv
 446              	_ZN7Fl_Tabs5valueEv:
 447              	.LFB494:
 288:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 448              		.loc 3 297 0
 449              		.cfi_startproc
 450              	.LVL49:
 451 0000 4155     		pushq	%r13
 452              		.cfi_def_cfa_offset 16
 453              		.cfi_offset 13, -16
 454 0002 4154     		pushq	%r12
 455              		.cfi_def_cfa_offset 24
 456              		.cfi_offset 12, -24
 298:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 457              		.loc 3 298 0
 458 0004 4531ED   		xorl	%r13d, %r13d
 297:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 459              		.loc 3 297 0
 460 0007 55       		pushq	%rbp
 461              		.cfi_def_cfa_offset 32
 462              		.cfi_offset 6, -32
 463 0008 53       		pushq	%rbx
 464              		.cfi_def_cfa_offset 40
 465              		.cfi_offset 3, -40
 466 0009 4889FB   		movq	%rdi, %rbx
 467 000c 4883EC08 		subq	$8, %rsp
 468              		.cfi_def_cfa_offset 48
 299:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 469              		.loc 3 299 0
 470 0010 E8000000 		call	_ZNK8Fl_Group5arrayEv
 470      00
 471              	.LVL50:
 472 0015 8B9B9000 		movl	144(%rbx), %ebx
 472      0000
 473              	.LVL51:
 474 001b 4889C5   		movq	%rax, %rbp
 475              	.LVL52:
 476 001e 83EB01   		subl	$1, %ebx
 477 0021 EB16     		jmp	.L42
 478              	.LVL53:
 479              		.p2align 4,,10
 480 0023 0F1F4400 		.p2align 3
 480      00
 481              	.L48:
 482              	.LBB560:
 483              	.LBB561:
 300:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 484              		.loc 3 302 0 discriminator 1
 485 0028 498B1424 		movq	(%r12), %rdx
 486 002c 4C89E7   		movq	%r12, %rdi
 487 002f FF5230   		call	*48(%rdx)
 488              	.LVL54:
 489              	.L45:
 490 0032 4883C508 		addq	$8, %rbp
 491              	.LVL55:
 492 0036 83EB01   		subl	$1, %ebx
 493              	.LVL56:
 494              	.L42:
 495              	.LBE561:
 300:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 496              		.loc 3 300 0 discriminator 1
 497 0039 83FBFF   		cmpl	$-1, %ebx
 498 003c 7432     		je	.L43
 499              	.LVL57:
 500              	.LBB562:
 501              		.loc 3 302 0
 502 003e 4D85ED   		testq	%r13, %r13
 301:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 503              		.loc 3 301 0
 504 0041 4C8B6500 		movq	0(%rbp), %r12
 505              	.LVL58:
 506              		.loc 3 302 0
 507 0045 75E1     		jne	.L48
 508              	.LVL59:
 303:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 509              		.loc 3 303 0
 510 0047 41F64424 		testb	$2, 96(%r12)
 510      6002
 511 004d 7419     		je	.L46
 304:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 512              		.loc 3 304 0
 513 004f 85DB     		testl	%ebx, %ebx
 514 0051 75DF     		jne	.L45
 515              		.loc 3 304 0 is_stmt 0 discriminator 1
 516 0053 498B0424 		movq	(%r12), %rax
 517 0057 4C89E7   		movq	%r12, %rdi
 518 005a 4D89E5   		movq	%r12, %r13
 519              	.LVL60:
 520 005d FF5028   		call	*40(%rax)
 521              	.LVL61:
 522 0060 EBD0     		jmp	.L45
 523              	.LVL62:
 524              		.p2align 4,,10
 525 0062 660F1F44 		.p2align 3
 525      0000
 526              	.L46:
 527 0068 4D89E5   		movq	%r12, %r13
 528              	.LVL63:
 529 006b EBC5     		jmp	.L45
 530              	.LVL64:
 531 006d 0F1F00   		.p2align 4,,10
 532              		.p2align 3
 533              	.L43:
 534              	.LBE562:
 535              	.LBE560:
 305:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 536              		.loc 3 307 0 is_stmt 1
 537 0070 4883C408 		addq	$8, %rsp
 538              		.cfi_def_cfa_offset 40
 539 0074 4C89E8   		movq	%r13, %rax
 540 0077 5B       		popq	%rbx
 541              		.cfi_def_cfa_offset 32
 542              	.LVL65:
 543 0078 5D       		popq	%rbp
 544              		.cfi_def_cfa_offset 24
 545              	.LVL66:
 546 0079 415C     		popq	%r12
 547              		.cfi_def_cfa_offset 16
 548 007b 415D     		popq	%r13
 549              		.cfi_def_cfa_offset 8
 550              	.LVL67:
 551 007d C3       		ret
 552              		.cfi_endproc
 553              	.LFE494:
 555              		.section	.text.unlikely._ZN7Fl_Tabs5valueEv
 556              	.LCOLDE7:
 557              		.section	.text._ZN7Fl_Tabs5valueEv
 558              	.LHOTE7:
 559              		.section	.text.unlikely._ZN7Fl_Tabs5valueEP9Fl_Widget,"ax",@progbits
 560              		.align 2
 561              	.LCOLDB8:
 562              		.section	.text._ZN7Fl_Tabs5valueEP9Fl_Widget,"ax",@progbits
 563              	.LHOTB8:
 564              		.align 2
 565              		.p2align 4,,15
 566              		.globl	_ZN7Fl_Tabs5valueEP9Fl_Widget
 568              	_ZN7Fl_Tabs5valueEP9Fl_Widget:
 569              	.LFB495:
 308:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 570              		.loc 3 316 0
 571              		.cfi_startproc
 572              	.LVL68:
 573 0000 4156     		pushq	%r14
 574              		.cfi_def_cfa_offset 16
 575              		.cfi_offset 14, -16
 576 0002 4155     		pushq	%r13
 577              		.cfi_def_cfa_offset 24
 578              		.cfi_offset 13, -24
 579              	.LBB563:
 580              	.LBB564:
 317:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 581              		.loc 3 322 0
 582 0004 41BE0100 		movl	$1, %r14d
 582      0000
 583              	.LBE564:
 584              	.LBE563:
 316:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 585              		.loc 3 316 0
 586 000a 4154     		pushq	%r12
 587              		.cfi_def_cfa_offset 32
 588              		.cfi_offset 12, -32
 589 000c 55       		pushq	%rbp
 590              		.cfi_def_cfa_offset 40
 591              		.cfi_offset 6, -40
 592 000d 4989FC   		movq	%rdi, %r12
 593 0010 53       		pushq	%rbx
 594              		.cfi_def_cfa_offset 48
 595              		.cfi_offset 3, -48
 316:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 596              		.loc 3 316 0
 597 0011 4889F5   		movq	%rsi, %rbp
 318:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 598              		.loc 3 318 0
 599 0014 4531ED   		xorl	%r13d, %r13d
 317:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 600              		.loc 3 317 0
 601 0017 E8000000 		call	_ZNK8Fl_Group5arrayEv
 601      00
 602              	.LVL69:
 603 001c 4889C3   		movq	%rax, %rbx
 604              	.LVL70:
 605 001f 418B8424 		movl	144(%r12), %eax
 605      90000000 
 606              	.LVL71:
 607 0027 4C8D24C3 		leaq	(%rbx,%rax,8), %r12
 608              	.LVL72:
 609              	.L50:
 610              	.LBB567:
 319:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 611              		.loc 3 319 0 discriminator 1
 612 002b 4C39E3   		cmpq	%r12, %rbx
 613 002e 7418     		je	.L51
 614              	.L59:
 615              	.LBB565:
 320:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 616              		.loc 3 320 0
 617 0030 4883C308 		addq	$8, %rbx
 618              	.LVL73:
 619 0034 488B7BF8 		movq	-8(%rbx), %rdi
 620              	.LVL74:
 321:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 621              		.loc 3 321 0
 622 0038 4839EF   		cmpq	%rbp, %rdi
 623 003b 741B     		je	.L58
 323:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624              		.loc 3 325 0
 625 003d 488B07   		movq	(%rdi), %rax
 626 0040 FF5030   		call	*48(%rax)
 627              	.LVL75:
 628              	.LBE565:
 319:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 629              		.loc 3 319 0
 630 0043 4C39E3   		cmpq	%r12, %rbx
 631 0046 75E8     		jne	.L59
 632              	.L51:
 633              	.LBE567:
 326:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 634              		.loc 3 329 0
 635 0048 5B       		popq	%rbx
 636              		.cfi_remember_state
 637              		.cfi_def_cfa_offset 40
 638              	.LVL76:
 639 0049 4489E8   		movl	%r13d, %eax
 640 004c 5D       		popq	%rbp
 641              		.cfi_def_cfa_offset 32
 642              	.LVL77:
 643 004d 415C     		popq	%r12
 644              		.cfi_def_cfa_offset 24
 645 004f 415D     		popq	%r13
 646              		.cfi_def_cfa_offset 16
 647              	.LVL78:
 648 0051 415E     		popq	%r14
 649              		.cfi_def_cfa_offset 8
 650 0053 C3       		ret
 651              	.LVL79:
 652              		.p2align 4,,10
 653 0054 0F1F4000 		.p2align 3
 654              	.L58:
 655              		.cfi_restore_state
 656              	.LBB568:
 657              	.LBB566:
 322:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 658              		.loc 3 322 0
 659 0058 F6456002 		testb	$2, 96(%rbp)
 323:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 660              		.loc 3 323 0
 661 005c 488B4500 		movq	0(%rbp), %rax
 662 0060 4889EF   		movq	%rbp, %rdi
 663              	.LVL80:
 322:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 664              		.loc 3 322 0
 665 0063 450F45EE 		cmovne	%r14d, %r13d
 666              	.LVL81:
 323:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 667              		.loc 3 323 0
 668 0067 FF5028   		call	*40(%rax)
 669              	.LVL82:
 670 006a EBBF     		jmp	.L50
 671              	.LBE566:
 672              	.LBE568:
 673              		.cfi_endproc
 674              	.LFE495:
 676              		.section	.text.unlikely._ZN7Fl_Tabs5valueEP9Fl_Widget
 677              	.LCOLDE8:
 678              		.section	.text._ZN7Fl_Tabs5valueEP9Fl_Widget
 679              	.LHOTE8:
 680              		.section	.text.unlikely._ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti,"ax",@progbits
 681              		.align 2
 682              	.LCOLDB9:
 683              		.section	.text._ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti,"ax",@progbits
 684              	.LHOTB9:
 685              		.align 2
 686              		.p2align 4,,15
 687              		.globl	_ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti
 689              	_ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti:
 690              	.LFB497:
 330:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 691              		.loc 3 373 0
 692              		.cfi_startproc
 693              	.LVL83:
 694 0000 4157     		pushq	%r15
 695              		.cfi_def_cfa_offset 16
 696              		.cfi_offset 15, -16
 697 0002 4156     		pushq	%r14
 698              		.cfi_def_cfa_offset 24
 699              		.cfi_offset 14, -24
 700 0004 4989FF   		movq	%rdi, %r15
 701 0007 4155     		pushq	%r13
 702              		.cfi_def_cfa_offset 32
 703              		.cfi_offset 13, -32
 704 0009 4154     		pushq	%r12
 705              		.cfi_def_cfa_offset 40
 706              		.cfi_offset 12, -40
 707 000b 4189CD   		movl	%ecx, %r13d
 708 000e 55       		pushq	%rbp
 709              		.cfi_def_cfa_offset 48
 710              		.cfi_offset 6, -48
 711 000f 53       		pushq	%rbx
 712              		.cfi_def_cfa_offset 56
 713              		.cfi_offset 3, -56
 714 0010 4C89CD   		movq	%r9, %rbp
 715 0013 89F3     		movl	%esi, %ebx
 716 0015 4589C4   		movl	%r8d, %r12d
 717 0018 4883EC18 		subq	$24, %rsp
 718              		.cfi_def_cfa_offset 80
 719              	.LVL84:
 374:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 720              		.loc 3 375 0
 721 001c 0FB67F6E 		movzbl	110(%rdi), %edi
 722              	.LVL85:
 373:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 723              		.loc 3 373 0
 724 0020 89542408 		movl	%edx, 8(%rsp)
 725              		.loc 3 375 0
 726 0024 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 726      00
 727              	.LVL86:
 376:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 728              		.loc 3 376 0
 729 0029 410FB67F 		movzbl	110(%r15), %edi
 729      6E
 375:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 730              		.loc 3 375 0
 731 002e 8944240C 		movl	%eax, 12(%rsp)
 732              	.LVL87:
 733              		.loc 3 376 0
 734 0032 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 734      00
 735              	.LVL88:
 377:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 736              		.loc 3 377 0
 737 0037 0FB63500 		movzbl	fl_draw_shortcut(%rip), %esi
 737      000000
 378:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 738              		.loc 3 380 0
 739 003e 4939AFA8 		cmpq	%rbp, 168(%r15)
 739      000000
 378:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 740              		.loc 3 378 0
 741 0045 C6050000 		movb	$1, fl_draw_shortcut(%rip)
 741      000001
 742              		.loc 3 380 0
 743 004c 8B542408 		movl	8(%rsp), %edx
 744 0050 450FB677 		movzbl	110(%r15), %r14d
 744      6E
 377:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 745              		.loc 3 377 0
 746 0055 40887424 		movb	%sil, 7(%rsp)
 746      07
 747              	.LVL89:
 748              		.loc 3 380 0
 749 005a 0F850801 		jne	.L61
 749      0000
 750 0060 837C2450 		cmpl	$2, 80(%rsp)
 750      02
 751 0065 0F84FD00 		je	.L61
 751      0000
 752              	.LBB569:
 753              	.LBB570:
 754              		.file 4 "fltk-1.3.4-1/FL/Enumerations.H"
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
 755              		.loc 4 732 0 discriminator 3
 756 006b 4183FE01 		cmpl	$1, %r14d
 757 006f 4489F1   		movl	%r14d, %ecx
 758              	.LVL90:
 759 0072 7E0C     		jle	.L76
 760              		.loc 4 732 0 is_stmt 0
 761 0074 83C901   		orl	$1, %ecx
 762 0077 440FB6F1 		movzbl	%cl, %r14d
 763              	.LVL91:
 764 007b 0F1F4400 		.p2align 4,,10
 764      00
 765              		.p2align 3
 766              	.L76:
 767              	.LBE570:
 768              	.LBE569:
 381:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 769              		.loc 3 385 0 is_stmt 1 discriminator 4
 770 0080 428D0C2B 		leal	(%rbx,%r13), %ecx
 771 0084 39D1     		cmpl	%edx, %ecx
 772 0086 7E14     		jle	.L65
 773 0088 837C2450 		cmpl	$1, 80(%rsp)
 773      01
 774 008d 89D1     		movl	%edx, %ecx
 775 008f 400F94C6 		sete	%sil
 776              	.LVL92:
 777 0093 4429E9   		subl	%r13d, %ecx
 778 0096 4084F6   		testb	%sil, %sil
 779 0099 0F45D9   		cmovne	%ecx, %ebx
 780              	.LVL93:
 781              	.L65:
 782              	.LBB571:
 386:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 783              		.loc 3 387 0
 784 009c 4585E4   		testl	%r12d, %r12d
 785 009f 0F885301 		js	.L66
 785      0000
 786              	.LBB572:
 388:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 787              		.loc 3 388 0
 788 00a5 837C2450 		cmpl	$2, 80(%rsp)
 788      02
 789 00aa 0F84BF02 		je	.L94
 789      0000
 790              	.LVL94:
 791              	.LBB573:
 792              	.LBB574:
 793              		.file 5 "fltk-1.3.4-1/FL/fl_draw.H"
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
 794              		.loc 5 82 0
 795 00b0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 795      000000
 796 00b7 89D1     		movl	%edx, %ecx
 797 00b9 4589E0   		movl	%r12d, %r8d
 798 00bc 29D9     		subl	%ebx, %ecx
 799              	.LVL95:
 800 00be 418B5724 		movl	36(%r15), %edx
 801 00c2 89DE     		movl	%ebx, %esi
 802 00c4 488B07   		movq	(%rdi), %rax
 803              	.LVL96:
 804 00c7 FF905001 		call	*336(%rax)
 804      0000
 805              	.LVL97:
 806              	.LBE574:
 807              	.LBE573:
 389:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 808              		.loc 3 395 0
 809 00cd 418B4724 		movl	36(%r15), %eax
 391:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 810              		.loc 3 391 0
 811 00d1 44036424 		addl	12(%rsp), %r12d
 811      0C
 812              	.LVL98:
 813              		.loc 3 395 0
 814 00d6 4883EC08 		subq	$8, %rsp
 815              		.cfi_def_cfa_offset 88
 816 00da 4589E8   		movl	%r13d, %r8d
 817 00dd 4489F6   		movl	%r14d, %esi
 818 00e0 89DA     		movl	%ebx, %edx
 819 00e2 4C89FF   		movq	%r15, %rdi
 820 00e5 8D4802   		leal	2(%rax), %ecx
 821 00e8 8B4568   		movl	104(%rbp), %eax
 822 00eb 458D4C24 		leal	8(%r12), %r9d
 822      08
 823 00f0 50       		pushq	%rax
 824              		.cfi_def_cfa_offset 96
 825              	.LVL99:
 826 00f1 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 826      00
 827              	.LVL100:
 828 00f6 8B4550   		movl	80(%rbp), %eax
 829              	.LVL101:
 830 00f9 41BB0200 		movl	$2, %r11d
 830      0000
 831 00ff 4158     		popq	%r8
 832              		.cfi_def_cfa_offset 88
 833 0101 4159     		popq	%r9
 834              		.cfi_def_cfa_offset 80
 835 0103 4189C6   		movl	%eax, %r14d
 836              	.LVL102:
 837              	.L68:
 838              	.LBB575:
 839              	.LBB576:
 478:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 840              		.loc 1 478 0 discriminator 4
 841 0106 894550   		movl	%eax, 80(%rbp)
 842              	.LVL103:
 843              	.LBE576:
 844              	.LBE575:
 396:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 845              		.loc 3 402 0 discriminator 4
 846 0109 418B5724 		movl	36(%r15), %edx
 847 010d 4589E0   		movl	%r12d, %r8d
 848 0110 4531C9   		xorl	%r9d, %r9d
 849 0113 4529D8   		subl	%r11d, %r8d
 850 0116 4489E9   		movl	%r13d, %ecx
 851 0119 89DE     		movl	%ebx, %esi
 852 011b 4889EF   		movq	%rbp, %rdi
 853 011e 4401DA   		addl	%r11d, %edx
 854 0121 E8000000 		call	_ZNK9Fl_Widget10draw_labelEiiiij
 854      00
 855              	.LVL104:
 403:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 856              		.loc 3 407 0 discriminator 4
 857 0126 4C393D00 		cmpq	%r15, _ZN2Fl6focus_E(%rip)
 857      000000
 858              	.LBB577:
 859              	.LBB578:
 478:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 860              		.loc 1 478 0 discriminator 4
 861 012d 44897550 		movl	%r14d, 80(%rbp)
 862              	.LVL105:
 863              	.LBE578:
 864              	.LBE577:
 865              		.loc 3 407 0 discriminator 4
 866 0131 0F848901 		je	.L95
 866      0000
 867              	.LVL106:
 868              	.L74:
 869              	.LBE572:
 870              	.LBB583:
 871              	.LBB584:
 872              	.LBB585:
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
 873              		.loc 5 103 0
 874 0137 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 874      000000
 875 013e 488B07   		movq	(%rdi), %rax
 876 0141 FF907001 		call	*368(%rax)
 876      0000
 877              	.LVL107:
 878              	.LBE585:
 879              	.LBE584:
 880              	.LBE583:
 881              	.LBE571:
 408:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 882              		.loc 3 438 0
 883 0147 0FB64424 		movzbl	7(%rsp), %eax
 883      07
 884 014c 88050000 		movb	%al, fl_draw_shortcut(%rip)
 884      0000
 439:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 885              		.loc 3 439 0
 886 0152 4883C418 		addq	$24, %rsp
 887              		.cfi_remember_state
 888              		.cfi_def_cfa_offset 56
 889 0156 5B       		popq	%rbx
 890              		.cfi_def_cfa_offset 48
 891              	.LVL108:
 892 0157 5D       		popq	%rbp
 893              		.cfi_def_cfa_offset 40
 894              	.LVL109:
 895 0158 415C     		popq	%r12
 896              		.cfi_def_cfa_offset 32
 897              	.LVL110:
 898 015a 415D     		popq	%r13
 899              		.cfi_def_cfa_offset 24
 900              	.LVL111:
 901 015c 415E     		popq	%r14
 902              		.cfi_def_cfa_offset 16
 903 015e 415F     		popq	%r15
 904              		.cfi_def_cfa_offset 8
 905              	.LVL112:
 906 0160 C3       		ret
 907              	.LVL113:
 908              		.p2align 4,,10
 909 0161 0F1F8000 		.p2align 3
 909      000000
 910              	.L61:
 911              		.cfi_restore_state
 383:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 912              		.loc 3 383 0 discriminator 4
 913 0168 837C2450 		cmpl	$2, 80(%rsp)
 913      02
 914 016d 0F850DFF 		jne	.L76
 914      FFFF
 383:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 915              		.loc 3 383 0 is_stmt 0
 916 0173 4531DB   		xorl	%r11d, %r11d
 917              	.LBB599:
 387:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 918              		.loc 3 387 0 is_stmt 1
 919 0176 4585E4   		testl	%r12d, %r12d
 920 0179 0F887101 		js	.L78
 920      0000
 921              	.LVL114:
 922              	.L77:
 923              	.LBB594:
 924              	.LBB579:
 925              	.LBB580:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 926              		.loc 5 82 0 discriminator 1
 927 017f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 927      000000
 928              	.LBE580:
 929              	.LBE579:
 388:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 930              		.loc 3 388 0 discriminator 1
 931 0186 44036424 		addl	12(%rsp), %r12d
 931      0C
 932              	.LVL115:
 933              	.LBB582:
 934              	.LBB581:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 935              		.loc 5 82 0 discriminator 1
 936 018b 89D1     		movl	%edx, %ecx
 937 018d 44895C24 		movl	%r11d, 8(%rsp)
 937      08
 938              	.LVL116:
 939 0192 29D9     		subl	%ebx, %ecx
 940              	.LVL117:
 941 0194 418B5724 		movl	36(%r15), %edx
 942 0198 89DE     		movl	%ebx, %esi
 943 019a 4C8B0F   		movq	(%rdi), %r9
 944 019d 4589E0   		movl	%r12d, %r8d
 945 01a0 4129C0   		subl	%eax, %r8d
 946              	.LVL118:
 947 01a3 41FF9150 		call	*336(%r9)
 947      010000
 948              	.LVL119:
 949              	.LBE581:
 950              	.LBE582:
 395:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 951              		.loc 3 395 0 discriminator 1
 952 01aa 418B4768 		movl	104(%r15), %eax
 953 01ae 448B5C24 		movl	8(%rsp), %r11d
 953      08
 954 01b3 458D4C24 		leal	10(%r12), %r9d
 954      0A
 955 01b8 418B4F24 		movl	36(%r15), %ecx
 956 01bc 4883EC08 		subq	$8, %rsp
 957              		.cfi_def_cfa_offset 88
 958 01c0 4489F6   		movl	%r14d, %esi
 959 01c3 4589E8   		movl	%r13d, %r8d
 960 01c6 89DA     		movl	%ebx, %edx
 961 01c8 4C89FF   		movq	%r15, %rdi
 962 01cb 50       		pushq	%rax
 963              		.cfi_def_cfa_offset 96
 964              	.LVL120:
 965 01cc 4529D9   		subl	%r11d, %r9d
 966 01cf 4401D9   		addl	%r11d, %ecx
 967 01d2 44895C24 		movl	%r11d, 24(%rsp)
 967      18
 968 01d7 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 968      00
 969              	.LVL121:
 970 01dc 415A     		popq	%r10
 971              		.cfi_def_cfa_offset 88
 972 01de 415B     		popq	%r11
 973              		.cfi_def_cfa_offset 80
 974 01e0 448B7550 		movl	80(%rbp), %r14d
 975              	.LVL122:
 976 01e4 418B4750 		movl	80(%r15), %eax
 977              	.LVL123:
 978 01e8 448B5C24 		movl	8(%rsp), %r11d
 978      08
 979 01ed E914FFFF 		jmp	.L68
 979      FF
 980              	.LVL124:
 981              		.p2align 4,,10
 982 01f2 660F1F44 		.p2align 3
 982      0000
 983              	.L66:
 984              	.LBE594:
 985              	.LBB595:
 414:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 986              		.loc 3 414 0
 987 01f8 837C2450 		cmpl	$2, 80(%rsp)
 987      02
 988 01fd 0F84E500 		je	.L96
 988      0000
 989              	.LVL125:
 990              	.LBB586:
 991              	.LBB587:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 992              		.loc 5 82 0
 993 0203 418B472C 		movl	44(%r15), %eax
 994              	.LVL126:
 995 0207 41034724 		addl	36(%r15), %eax
 996 020b 29DA     		subl	%ebx, %edx
 997              	.LVL127:
 998 020d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 998      000000
 999 0214 89D1     		movl	%edx, %ecx
 1000 0216 4589E0   		movl	%r12d, %r8d
 1001 0219 41F7D8   		negl	%r8d
 1002              	.LVL128:
 1003 021c 89DE     		movl	%ebx, %esi
 1004 021e 428D1420 		leal	(%rax,%r12), %edx
 1005              	.LVL129:
 1006 0222 488B07   		movq	(%rdi), %rax
 1007 0225 FF905001 		call	*336(%rax)
 1007      0000
 1008              	.LVL130:
 1009              	.LBE587:
 1010              	.LBE586:
 417:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 1011              		.loc 3 417 0
 1012 022b 8B44240C 		movl	12(%rsp), %eax
 421:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1013              		.loc 3 421 0
 1014 022f 418B4F24 		movl	36(%r15), %ecx
 1015 0233 4883EC08 		subq	$8, %rsp
 1016              		.cfi_def_cfa_offset 88
 1017 0237 41034F2C 		addl	44(%r15), %ecx
 1018 023b 89DA     		movl	%ebx, %edx
 1019 023d 4489F6   		movl	%r14d, %esi
 1020 0240 4589E8   		movl	%r13d, %r8d
 1021 0243 4C89FF   		movq	%r15, %rdi
 417:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 1022              		.loc 3 417 0
 1023 0246 4429E0   		subl	%r12d, %eax
 1024 0249 4189C4   		movl	%eax, %r12d
 1025              	.LVL131:
 421:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1026              		.loc 3 421 0
 1027 024c 29C1     		subl	%eax, %ecx
 1028 024e 8B4568   		movl	104(%rbp), %eax
 1029              	.LVL132:
 1030 0251 458D4C24 		leal	8(%r12), %r9d
 1030      08
 1031 0256 83E90A   		subl	$10, %ecx
 1032 0259 50       		pushq	%rax
 1033              		.cfi_def_cfa_offset 96
 1034              	.LVL133:
 1035 025a E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1035      00
 1036              	.LVL134:
 1037 025f 8B4550   		movl	80(%rbp), %eax
 1038              	.LVL135:
 1039 0262 41BB0200 		movl	$2, %r11d
 1039      0000
 1040 0268 5A       		popq	%rdx
 1041              		.cfi_def_cfa_offset 88
 1042 0269 59       		popq	%rcx
 1043              		.cfi_def_cfa_offset 80
 1044 026a 4189C6   		movl	%eax, %r14d
 1045              	.LVL136:
 1046              	.L73:
 1047              	.LBB588:
 1048              	.LBB589:
 478:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1049              		.loc 1 478 0 discriminator 4
 1050 026d 894550   		movl	%eax, 80(%rbp)
 1051              	.LVL137:
 1052              	.LBE589:
 1053              	.LBE588:
 428:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 1054              		.loc 3 428 0 discriminator 4
 1055 0270 418B572C 		movl	44(%r15), %edx
 1056 0274 4589E0   		movl	%r12d, %r8d
 1057 0277 41035724 		addl	36(%r15), %edx
 1058 027b 4531C9   		xorl	%r9d, %r9d
 1059 027e 4529D8   		subl	%r11d, %r8d
 1060 0281 4489E9   		movl	%r13d, %ecx
 1061 0284 89DE     		movl	%ebx, %esi
 1062 0286 4889EF   		movq	%rbp, %rdi
 1063 0289 4429E2   		subl	%r12d, %edx
 1064 028c E8000000 		call	_ZNK9Fl_Widget10draw_labelEiiiij
 1064      00
 1065              	.LVL138:
 433:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 1066              		.loc 3 433 0 discriminator 4
 1067 0291 4C393D00 		cmpq	%r15, _ZN2Fl6focus_E(%rip)
 1067      000000
 1068              	.LBB590:
 1069              	.LBB591:
 478:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1070              		.loc 1 478 0 discriminator 4
 1071 0298 44897550 		movl	%r14d, 80(%rbp)
 1072              	.LVL139:
 1073              	.LBE591:
 1074              	.LBE590:
 433:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 1075              		.loc 3 433 0 discriminator 4
 1076 029c 0F8595FE 		jne	.L74
 1076      FFFF
 1077              	.LVL140:
 433:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 1078              		.loc 3 433 0 is_stmt 0 discriminator 1
 1079 02a2 F6456002 		testb	$2, 96(%rbp)
 1080 02a6 0F858BFE 		jne	.L74
 1080      FFFF
 1081              	.LVL141:
 434:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 1082              		.loc 3 434 0 is_stmt 1
 1083 02ac 418B4F2C 		movl	44(%r15), %ecx
 1084 02b0 41034F24 		addl	36(%r15), %ecx
 1085 02b4 4429E1   		subl	%r12d, %ecx
 1086 02b7 EB15     		jmp	.L93
 1087              	.LVL142:
 1088 02b9 0F1F8000 		.p2align 4,,10
 1088      000000
 1089              		.p2align 3
 1090              	.L95:
 1091              	.LBE595:
 1092              	.LBB596:
 407:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1093              		.loc 3 407 0 discriminator 1
 1094 02c0 F6456002 		testb	$2, 96(%rbp)
 1095 02c4 0F856DFE 		jne	.L74
 1095      FFFF
 1096              	.LVL143:
 408:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 1097              		.loc 3 408 0
 1098 02ca 418B4F24 		movl	36(%r15), %ecx
 1099              	.LVL144:
 1100              	.L93:
 1101              	.LBE596:
 1102              	.LBB597:
 434:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 1103              		.loc 3 434 0
 1104 02ce 410FB677 		movzbl	110(%r15), %esi
 1104      6E
 1105 02d3 4589E1   		movl	%r12d, %r9d
 1106 02d6 4589E8   		movl	%r13d, %r8d
 1107 02d9 89DA     		movl	%ebx, %edx
 1108 02db 4C89FF   		movq	%r15, %rdi
 1109 02de E8000000 		call	_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
 1109      00
 1110              	.LVL145:
 1111 02e3 E94FFEFF 		jmp	.L74
 1111      FF
 1112              	.LVL146:
 1113              	.L96:
 1114 02e8 41BB0200 		movl	$2, %r11d
 1114      0000
 1115              	.LVL147:
 1116 02ee 6690     		.p2align 4,,10
 1117              		.p2align 3
 1118              	.L78:
 1119              	.LBB592:
 1120              	.LBB593:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1121              		.loc 5 82 0 discriminator 1
 1122 02f0 29DA     		subl	%ebx, %edx
 1123 02f2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1123      000000
 1124 02f9 44895C24 		movl	%r11d, 8(%rsp)
 1124      08
 1125              	.LVL148:
 1126 02fe 89D1     		movl	%edx, %ecx
 1127 0300 418B572C 		movl	44(%r15), %edx
 1128 0304 41035724 		addl	36(%r15), %edx
 1129 0308 89DE     		movl	%ebx, %esi
 1130 030a 4C8B0F   		movq	(%rdi), %r9
 1131 030d 4401E2   		addl	%r12d, %edx
 1132 0310 29C2     		subl	%eax, %edx
 1133 0312 4429E0   		subl	%r12d, %eax
 1134              	.LVL149:
 1135 0315 4189C0   		movl	%eax, %r8d
 1136 0318 41FF9150 		call	*336(%r9)
 1136      010000
 1137              	.LVL150:
 1138              	.LBE593:
 1139              	.LBE592:
 417:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 1140              		.loc 3 417 0 discriminator 1
 1141 031f 8B44240C 		movl	12(%rsp), %eax
 421:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1142              		.loc 3 421 0 discriminator 1
 1143 0323 418B4F24 		movl	36(%r15), %ecx
 1144 0327 4883EC08 		subq	$8, %rsp
 1145              		.cfi_def_cfa_offset 88
 1146 032b 41034F2C 		addl	44(%r15), %ecx
 1147 032f 4489F6   		movl	%r14d, %esi
 1148 0332 4C89FF   		movq	%r15, %rdi
 1149 0335 4589E8   		movl	%r13d, %r8d
 1150 0338 89DA     		movl	%ebx, %edx
 417:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 1151              		.loc 3 417 0 discriminator 1
 1152 033a 4429E0   		subl	%r12d, %eax
 421:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1153              		.loc 3 421 0 discriminator 1
 1154 033d 448D480A 		leal	10(%rax), %r9d
 417:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 1155              		.loc 3 417 0 discriminator 1
 1156 0341 4189C4   		movl	%eax, %r12d
 1157              	.LVL151:
 421:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1158              		.loc 3 421 0 discriminator 1
 1159 0344 29C1     		subl	%eax, %ecx
 1160 0346 418B4768 		movl	104(%r15), %eax
 1161              	.LVL152:
 1162 034a 83E90A   		subl	$10, %ecx
 1163 034d 50       		pushq	%rax
 1164              		.cfi_def_cfa_offset 96
 1165              	.LVL153:
 1166 034e 448B5C24 		movl	24(%rsp), %r11d
 1166      18
 1167 0353 4529D9   		subl	%r11d, %r9d
 1168 0356 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1168      00
 1169              	.LVL154:
 1170 035b 5E       		popq	%rsi
 1171              		.cfi_def_cfa_offset 88
 1172 035c 5F       		popq	%rdi
 1173              		.cfi_def_cfa_offset 80
 1174 035d 448B7550 		movl	80(%rbp), %r14d
 1175              	.LVL155:
 1176 0361 418B4750 		movl	80(%r15), %eax
 1177              	.LVL156:
 1178 0365 448B5C24 		movl	8(%rsp), %r11d
 1178      08
 1179 036a E9FEFEFF 		jmp	.L73
 1179      FF
 1180              	.LVL157:
 1181              	.L94:
 1182              	.LBE597:
 1183              	.LBB598:
 1184 036f 41BB0200 		movl	$2, %r11d
 1184      0000
 1185 0375 E905FEFF 		jmp	.L77
 1185      FF
 1186              	.LBE598:
 1187              	.LBE599:
 1188              		.cfi_endproc
 1189              	.LFE497:
 1191              		.section	.text.unlikely._ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti
 1192              	.LCOLDE9:
 1193              		.section	.text._ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti
 1194              	.LHOTE9:
 1195              		.section	.text.unlikely._ZN7Fl_TabsC2EiiiiPKc,"ax",@progbits
 1196              		.align 2
 1197              	.LCOLDB10:
 1198              		.section	.text._ZN7Fl_TabsC2EiiiiPKc,"ax",@progbits
 1199              	.LHOTB10:
 1200              		.align 2
 1201              		.p2align 4,,15
 1202              		.globl	_ZN7Fl_TabsC2EiiiiPKc
 1204              	_ZN7Fl_TabsC2EiiiiPKc:
 1205              	.LFB499:
 440:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 1206              		.loc 3 462 0
 1207              		.cfi_startproc
 1208              	.LVL158:
 1209 0000 53       		pushq	%rbx
 1210              		.cfi_def_cfa_offset 16
 1211              		.cfi_offset 3, -16
 1212              		.loc 3 462 0
 1213 0001 4889FB   		movq	%rdi, %rbx
 1214              	.LBB600:
 463:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1215              		.loc 3 463 0
 1216 0004 E8000000 		call	_ZN8Fl_GroupC2EiiiiPKc
 1216      00
 1217              	.LVL159:
 1218 0009 48C70300 		movq	$_ZTV7Fl_Tabs+16, (%rbx)
 1218      000000
 1219              	.LVL160:
 1220              	.LBB601:
 1221              	.LBB602:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1222              		.loc 1 372 0
 1223 0010 C6436E06 		movb	$6, 110(%rbx)
 1224              	.LVL161:
 1225              	.LBE602:
 1226              	.LBE601:
 464:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 1227              		.loc 3 470 0
 1228 0014 48C783A0 		movq	$0, 160(%rbx)
 1228      00000000 
 1228      000000
 471:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1229              		.loc 3 472 0
 1230 001f 48C783A8 		movq	$0, 168(%rbx)
 1230      00000000 
 1230      000000
 473:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 1231              		.loc 3 473 0
 1232 002a 48C783B0 		movq	$0, 176(%rbx)
 1232      00000000 
 1232      000000
 474:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1233              		.loc 3 474 0
 1234 0035 48C783B8 		movq	$0, 184(%rbx)
 1234      00000000 
 1234      000000
 475:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 1235              		.loc 3 475 0
 1236 0040 C783C000 		movl	$0, 192(%rbx)
 1236      00000000 
 1236      0000
 1237              	.LBE600:
 476:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 1238              		.loc 3 476 0
 1239 004a 5B       		popq	%rbx
 1240              		.cfi_def_cfa_offset 8
 1241              	.LVL162:
 1242 004b C3       		ret
 1243              		.cfi_endproc
 1244              	.LFE499:
 1246              		.section	.text.unlikely._ZN7Fl_TabsC2EiiiiPKc
 1247              	.LCOLDE10:
 1248              		.section	.text._ZN7Fl_TabsC2EiiiiPKc
 1249              	.LHOTE10:
 1250              		.globl	_ZN7Fl_TabsC1EiiiiPKc
 1251              		.set	_ZN7Fl_TabsC1EiiiiPKc,_ZN7Fl_TabsC2EiiiiPKc
 1252              		.section	.text.unlikely._ZN7Fl_Tabs11client_areaERiS0_S0_S0_i,"ax",@progbits
 1253              		.align 2
 1254              	.LCOLDB11:
 1255              		.section	.text._ZN7Fl_Tabs11client_areaERiS0_S0_S0_i,"ax",@progbits
 1256              	.LHOTB11:
 1257              		.align 2
 1258              		.p2align 4,,15
 1259              		.globl	_ZN7Fl_Tabs11client_areaERiS0_S0_S0_i
 1261              	_ZN7Fl_Tabs11client_areaERiS0_S0_S0_i:
 1262              	.LFB505:
 477:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1263              		.loc 3 505 0
 1264              		.cfi_startproc
 1265              	.LVL163:
 1266 0000 4157     		pushq	%r15
 1267              		.cfi_def_cfa_offset 16
 1268              		.cfi_offset 15, -16
 1269 0002 4156     		pushq	%r14
 1270              		.cfi_def_cfa_offset 24
 1271              		.cfi_offset 14, -24
 1272 0004 4989CF   		movq	%rcx, %r15
 1273 0007 4155     		pushq	%r13
 1274              		.cfi_def_cfa_offset 32
 1275              		.cfi_offset 13, -32
 1276 0009 4154     		pushq	%r12
 1277              		.cfi_def_cfa_offset 40
 1278              		.cfi_offset 12, -40
 1279 000b 4989F6   		movq	%rsi, %r14
 1280 000e 55       		pushq	%rbp
 1281              		.cfi_def_cfa_offset 48
 1282              		.cfi_offset 6, -48
 1283 000f 53       		pushq	%rbx
 1284              		.cfi_def_cfa_offset 56
 1285              		.cfi_offset 3, -56
 1286 0010 4989D5   		movq	%rdx, %r13
 1287 0013 4889FB   		movq	%rdi, %rbx
 1288 0016 4D89C4   		movq	%r8, %r12
 1289 0019 4883EC08 		subq	$8, %rsp
 1290              		.cfi_def_cfa_offset 64
 1291              	.LBB603:
 506:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 1292              		.loc 3 507 0
 1293 001d 8B879000 		movl	144(%rdi), %eax
 1293      0000
 1294 0023 85C0     		testl	%eax, %eax
 1295 0025 0F858500 		jne	.L109
 1295      0000
 1296              	.LBB604:
 508:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 1297              		.loc 3 517 0
 1298 002b 8B774C   		movl	76(%rdi), %esi
 1299              	.LVL164:
 1300 002e 8B7F48   		movl	72(%rdi), %edi
 1301              	.LVL165:
 1302 0031 4489CD   		movl	%r9d, %ebp
 1303              	.LVL166:
 1304 0034 E8000000 		call	_Z9fl_heightii
 1304      00
 1305              	.LVL167:
 1306 0039 83C004   		addl	$4, %eax
 1307              	.LVL168:
 518:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 1308              		.loc 3 519 0
 1309 003c 85ED     		testl	%ebp, %ebp
 1310 003e 7538     		jne	.L110
 1311              	.LVL169:
 1312 0040 8B5320   		movl	32(%rbx), %edx
 1313              	.LVL170:
 520:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 1314              		.loc 3 529 0
 1315 0043 85C0     		testl	%eax, %eax
 526:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1316              		.loc 3 526 0
 1317 0045 418916   		movl	%edx, (%r14)
 1318 0048 8B5328   		movl	40(%rbx), %edx
 1319              	.LVL171:
 527:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1320              		.loc 3 527 0
 1321 004b 418917   		movl	%edx, (%r15)
 1322              		.loc 3 529 0
 1323 004e 7840     		js	.L103
 1324              	.LVL172:
 1325              	.L111:
 530:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1326              		.loc 3 530 0
 1327 0050 8B5324   		movl	36(%rbx), %edx
 1328 0053 01C2     		addl	%eax, %edx
 1329 0055 41895500 		movl	%edx, 0(%r13)
 1330              	.LVL173:
 531:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 1331              		.loc 3 531 0
 1332 0059 8B532C   		movl	44(%rbx), %edx
 1333 005c 29C2     		subl	%eax, %edx
 1334 005e 41891424 		movl	%edx, (%r12)
 1335              	.LBE604:
 1336              	.LBE603:
 532:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1337              		.loc 3 537 0
 1338 0062 4883C408 		addq	$8, %rsp
 1339              		.cfi_remember_state
 1340              		.cfi_def_cfa_offset 56
 1341 0066 5B       		popq	%rbx
 1342              		.cfi_def_cfa_offset 48
 1343              	.LVL174:
 1344 0067 5D       		popq	%rbp
 1345              		.cfi_def_cfa_offset 40
 1346              	.LVL175:
 1347 0068 415C     		popq	%r12
 1348              		.cfi_def_cfa_offset 32
 1349              	.LVL176:
 1350 006a 415D     		popq	%r13
 1351              		.cfi_def_cfa_offset 24
 1352              	.LVL177:
 1353 006c 415E     		popq	%r14
 1354              		.cfi_def_cfa_offset 16
 1355              	.LVL178:
 1356 006e 415F     		popq	%r15
 1357              		.cfi_def_cfa_offset 8
 1358              	.LVL179:
 1359 0070 C3       		ret
 1360              	.LVL180:
 1361              		.p2align 4,,10
 1362 0071 0F1F8000 		.p2align 3
 1362      000000
 1363              	.L110:
 1364              		.cfi_restore_state
 1365 0078 8B5320   		movl	32(%rbx), %edx
 1366              	.LBB620:
 1367              	.LBB605:
 522:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 1368              		.loc 3 522 0
 1369 007b F7D8     		negl	%eax
 1370              	.LVL181:
 1371 007d 83FDFF   		cmpl	$-1, %ebp
 1372 0080 0F45C5   		cmovne	%ebp, %eax
 1373              	.LVL182:
 529:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1374              		.loc 3 529 0
 1375 0083 85C0     		testl	%eax, %eax
 526:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1376              		.loc 3 526 0
 1377 0085 418916   		movl	%edx, (%r14)
 1378 0088 8B5328   		movl	40(%rbx), %edx
 1379              	.LVL183:
 527:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1380              		.loc 3 527 0
 1381 008b 418917   		movl	%edx, (%r15)
 529:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1382              		.loc 3 529 0
 1383 008e 79C0     		jns	.L111
 1384              	.L103:
 1385 0090 8B5324   		movl	36(%rbx), %edx
 1386              	.LVL184:
 533:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 1387              		.loc 3 533 0
 1388 0093 41895500 		movl	%edx, 0(%r13)
 1389              	.LVL185:
 534:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1390              		.loc 3 534 0
 1391 0097 03432C   		addl	44(%rbx), %eax
 1392              	.LVL186:
 1393 009a 41890424 		movl	%eax, (%r12)
 1394              	.LBE605:
 1395              	.LBE620:
 1396              		.loc 3 537 0
 1397 009e 4883C408 		addq	$8, %rsp
 1398              		.cfi_remember_state
 1399              		.cfi_def_cfa_offset 56
 1400 00a2 5B       		popq	%rbx
 1401              		.cfi_def_cfa_offset 48
 1402              	.LVL187:
 1403 00a3 5D       		popq	%rbp
 1404              		.cfi_def_cfa_offset 40
 1405              	.LVL188:
 1406 00a4 415C     		popq	%r12
 1407              		.cfi_def_cfa_offset 32
 1408              	.LVL189:
 1409 00a6 415D     		popq	%r13
 1410              		.cfi_def_cfa_offset 24
 1411              	.LVL190:
 1412 00a8 415E     		popq	%r14
 1413              		.cfi_def_cfa_offset 16
 1414              	.LVL191:
 1415 00aa 415F     		popq	%r15
 1416              		.cfi_def_cfa_offset 8
 1417              	.LVL192:
 1418 00ac C3       		ret
 1419              	.LVL193:
 1420 00ad 0F1F00   		.p2align 4,,10
 1421              		.p2align 3
 1422              	.L109:
 1423              		.cfi_restore_state
 1424              	.LBB621:
 1425              	.LBB606:
 1426              	.LBB607:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 1427              		.loc 2 79 0
 1428 00b0 E8000000 		call	_ZNK8Fl_Group5arrayEv
 1428      00
 1429              	.LVL194:
 1430 00b5 488B00   		movq	(%rax), %rax
 1431              	.LBE607:
 1432              	.LBE606:
 1433              	.LBB608:
 1434              	.LBB609:
 1435 00b8 4889DF   		movq	%rbx, %rdi
 1436 00bb 8B4020   		movl	32(%rax), %eax
 1437              	.LVL195:
 1438              	.LBE609:
 1439              	.LBE608:
 509:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 1440              		.loc 3 509 0
 1441 00be 418906   		movl	%eax, (%r14)
 1442              	.LVL196:
 1443              	.LBB611:
 1444              	.LBB610:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 1445              		.loc 2 79 0
 1446 00c1 E8000000 		call	_ZNK8Fl_Group5arrayEv
 1446      00
 1447              	.LVL197:
 1448 00c6 488B00   		movq	(%rax), %rax
 1449              	.LBE610:
 1450              	.LBE611:
 1451              	.LBB612:
 1452              	.LBB613:
 1453 00c9 4889DF   		movq	%rbx, %rdi
 1454 00cc 8B4024   		movl	36(%rax), %eax
 1455              	.LVL198:
 1456              	.LBE613:
 1457              	.LBE612:
 510:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 1458              		.loc 3 510 0
 1459 00cf 41894500 		movl	%eax, 0(%r13)
 1460              	.LVL199:
 1461              	.LBB615:
 1462              	.LBB614:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 1463              		.loc 2 79 0
 1464 00d3 E8000000 		call	_ZNK8Fl_Group5arrayEv
 1464      00
 1465              	.LVL200:
 1466 00d8 488B00   		movq	(%rax), %rax
 1467              	.LBE614:
 1468              	.LBE615:
 1469              	.LBB616:
 1470              	.LBB617:
 1471 00db 4889DF   		movq	%rbx, %rdi
 1472 00de 8B4028   		movl	40(%rax), %eax
 1473              	.LVL201:
 1474              	.LBE617:
 1475              	.LBE616:
 511:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1476              		.loc 3 511 0
 1477 00e1 418907   		movl	%eax, (%r15)
 1478              	.LVL202:
 1479              	.LBB619:
 1480              	.LBB618:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 1481              		.loc 2 79 0
 1482 00e4 E8000000 		call	_ZNK8Fl_Group5arrayEv
 1482      00
 1483              	.LVL203:
 1484 00e9 488B00   		movq	(%rax), %rax
 1485 00ec 8B402C   		movl	44(%rax), %eax
 1486              	.LVL204:
 1487              	.LBE618:
 1488              	.LBE619:
 512:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 1489              		.loc 3 512 0
 1490 00ef 41890424 		movl	%eax, (%r12)
 1491              	.LBE621:
 1492              		.loc 3 537 0
 1493 00f3 4883C408 		addq	$8, %rsp
 1494              		.cfi_def_cfa_offset 56
 1495 00f7 5B       		popq	%rbx
 1496              		.cfi_def_cfa_offset 48
 1497              	.LVL205:
 1498 00f8 5D       		popq	%rbp
 1499              		.cfi_def_cfa_offset 40
 1500 00f9 415C     		popq	%r12
 1501              		.cfi_def_cfa_offset 32
 1502              	.LVL206:
 1503 00fb 415D     		popq	%r13
 1504              		.cfi_def_cfa_offset 24
 1505              	.LVL207:
 1506 00fd 415E     		popq	%r14
 1507              		.cfi_def_cfa_offset 16
 1508              	.LVL208:
 1509 00ff 415F     		popq	%r15
 1510              		.cfi_def_cfa_offset 8
 1511              	.LVL209:
 1512 0101 C3       		ret
 1513              		.cfi_endproc
 1514              	.LFE505:
 1516              		.section	.text.unlikely._ZN7Fl_Tabs11client_areaERiS0_S0_S0_i
 1517              	.LCOLDE11:
 1518              		.section	.text._ZN7Fl_Tabs11client_areaERiS0_S0_S0_i
 1519              	.LHOTE11:
 1520              		.section	.text.unlikely._ZN7Fl_Tabs19clear_tab_positionsEv,"ax",@progbits
 1521              		.align 2
 1522              	.LCOLDB12:
 1523              		.section	.text._ZN7Fl_Tabs19clear_tab_positionsEv,"ax",@progbits
 1524              	.LHOTB12:
 1525              		.align 2
 1526              		.p2align 4,,15
 1527              		.globl	_ZN7Fl_Tabs19clear_tab_positionsEv
 1529              	_ZN7Fl_Tabs19clear_tab_positionsEv:
 1530              	.LFB506:
 538:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1531              		.loc 3 539 0
 1532              		.cfi_startproc
 1533              	.LVL210:
 1534 0000 53       		pushq	%rbx
 1535              		.cfi_def_cfa_offset 16
 1536              		.cfi_offset 3, -16
 1537              		.loc 3 539 0
 1538 0001 4889FB   		movq	%rdi, %rbx
 540:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 1539              		.loc 3 540 0
 1540 0004 488BBFB0 		movq	176(%rdi), %rdi
 1540      000000
 1541              	.LVL211:
 1542 000b 4885FF   		testq	%rdi, %rdi
 1543 000e 7410     		je	.L113
 541:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1544              		.loc 3 541 0
 1545 0010 E8000000 		call	free
 1545      00
 1546              	.LVL212:
 542:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 1547              		.loc 3 542 0
 1548 0015 48C783B0 		movq	$0, 176(%rbx)
 1548      00000000 
 1548      000000
 1549              	.L113:
 543:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 1550              		.loc 3 544 0
 1551 0020 488BBBB8 		movq	184(%rbx), %rdi
 1551      000000
 1552 0027 4885FF   		testq	%rdi, %rdi
 1553 002a 7410     		je	.L112
 545:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1554              		.loc 3 545 0
 1555 002c E8000000 		call	free
 1555      00
 1556              	.LVL213:
 546:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1557              		.loc 3 546 0
 1558 0031 48C783B8 		movq	$0, 184(%rbx)
 1558      00000000 
 1558      000000
 1559              	.L112:
 547:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 1560              		.loc 3 548 0
 1561 003c 5B       		popq	%rbx
 1562              		.cfi_def_cfa_offset 8
 1563              	.LVL214:
 1564 003d C3       		ret
 1565              		.cfi_endproc
 1566              	.LFE506:
 1568              		.section	.text.unlikely._ZN7Fl_Tabs19clear_tab_positionsEv
 1569              	.LCOLDE12:
 1570              		.section	.text._ZN7Fl_Tabs19clear_tab_positionsEv
 1571              	.LHOTE12:
 1572              		.section	.text.unlikely._ZN7Fl_Tabs13tab_positionsEv,"ax",@progbits
 1573              		.align 2
 1574              	.LCOLDB13:
 1575              		.section	.text._ZN7Fl_Tabs13tab_positionsEv,"ax",@progbits
 1576              	.LHOTB13:
 1577              		.align 2
 1578              		.p2align 4,,15
 1579              		.globl	_ZN7Fl_Tabs13tab_positionsEv
 1581              	_ZN7Fl_Tabs13tab_positionsEv:
 1582              	.LFB488:
  43:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 1583              		.loc 3 43 0
 1584              		.cfi_startproc
 1585              	.LVL215:
 1586 0000 4157     		pushq	%r15
 1587              		.cfi_def_cfa_offset 16
 1588              		.cfi_offset 15, -16
 1589 0002 4156     		pushq	%r14
 1590              		.cfi_def_cfa_offset 24
 1591              		.cfi_offset 14, -24
 1592 0004 4155     		pushq	%r13
 1593              		.cfi_def_cfa_offset 32
 1594              		.cfi_offset 13, -32
 1595 0006 4154     		pushq	%r12
 1596              		.cfi_def_cfa_offset 40
 1597              		.cfi_offset 12, -40
 1598 0008 55       		pushq	%rbp
 1599              		.cfi_def_cfa_offset 48
 1600              		.cfi_offset 6, -48
 1601 0009 53       		pushq	%rbx
 1602              		.cfi_def_cfa_offset 56
 1603              		.cfi_offset 3, -56
 1604 000a 4889FB   		movq	%rdi, %rbx
 1605 000d 4883EC28 		subq	$40, %rsp
 1606              		.cfi_def_cfa_offset 96
 1607 0011 4C63A790 		movslq	144(%rdi), %r12
 1607      000000
  43:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 1608              		.loc 3 43 0
 1609 0018 64488B04 		movq	%fs:40, %rax
 1609      25280000 
 1609      00
 1610 0021 48894424 		movq	%rax, 24(%rsp)
 1610      18
 1611 0026 31C0     		xorl	%eax, %eax
 1612              	.LVL216:
  45:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 1613              		.loc 3 45 0
 1614 0028 4439A7C0 		cmpl	%r12d, 192(%rdi)
 1614      000000
 1615 002f 7415     		je	.L123
  46:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 1616              		.loc 3 46 0
 1617 0031 E8000000 		call	_ZN7Fl_Tabs19clear_tab_positionsEv
 1617      00
 1618              	.LVL217:
  47:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 1619              		.loc 3 47 0
 1620 0036 4585E4   		testl	%r12d, %r12d
 1621 0039 0F854902 		jne	.L165
 1621      0000
 1622              	.L124:
  51:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1623              		.loc 3 51 0
 1624 003f 4489A3C0 		movl	%r12d, 192(%rbx)
 1624      000000
 1625              	.L123:
  53:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 1626              		.loc 3 53 0
 1627 0046 31C0     		xorl	%eax, %eax
 1628 0048 4585E4   		testl	%r12d, %r12d
 1629 004b 7523     		jne	.L166
 1630              	.L125:
  97:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 1631              		.loc 3 97 0
 1632 004d 488B4C24 		movq	24(%rsp), %rcx
 1632      18
 1633 0052 6448330C 		xorq	%fs:40, %rcx
 1633      25280000 
 1633      00
 1634 005b 0F856002 		jne	.L167
 1634      0000
 1635 0061 4883C428 		addq	$40, %rsp
 1636              		.cfi_remember_state
 1637              		.cfi_def_cfa_offset 56
 1638 0065 5B       		popq	%rbx
 1639              		.cfi_def_cfa_offset 48
 1640              	.LVL218:
 1641 0066 5D       		popq	%rbp
 1642              		.cfi_def_cfa_offset 40
 1643 0067 415C     		popq	%r12
 1644              		.cfi_def_cfa_offset 32
 1645 0069 415D     		popq	%r13
 1646              		.cfi_def_cfa_offset 24
 1647 006b 415E     		popq	%r14
 1648              		.cfi_def_cfa_offset 16
 1649 006d 415F     		popq	%r15
 1650              		.cfi_def_cfa_offset 8
 1651 006f C3       		ret
 1652              	.LVL219:
 1653              		.p2align 4,,10
 1654              		.p2align 3
 1655              	.L166:
 1656              		.cfi_restore_state
  55:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1657              		.loc 3 55 0
 1658 0070 4889DF   		movq	%rbx, %rdi
 1659 0073 E8000000 		call	_ZNK8Fl_Group5arrayEv
 1659      00
 1660              	.LVL220:
  60:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1661              		.loc 3 60 0
 1662 0078 0FB67B6E 		movzbl	110(%rbx), %edi
  55:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1663              		.loc 3 55 0
 1664 007c 4989C5   		movq	%rax, %r13
 1665              	.LVL221:
  57:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1666              		.loc 3 57 0
 1667 007f 0FB60500 		movzbl	fl_draw_shortcut(%rip), %eax
 1667      000000
 1668              	.LVL222:
  60:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1669              		.loc 3 60 0
 1670 0086 488BABB0 		movq	176(%rbx), %rbp
 1670      000000
  58:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1671              		.loc 3 58 0
 1672 008d C6050000 		movb	$1, fl_draw_shortcut(%rip)
 1672      000001
  57:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1673              		.loc 3 57 0
 1674 0094 8844240F 		movb	%al, 15(%rsp)
 1675              	.LVL223:
  60:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1676              		.loc 3 60 0
 1677 0098 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 1677      00
 1678              	.LVL224:
 1679              	.LBB622:
  61:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 1680              		.loc 3 61 0
 1681 009d 4585E4   		testl	%r12d, %r12d
 1682              	.LBE622:
  60:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1683              		.loc 3 60 0
 1684 00a0 894500   		movl	%eax, 0(%rbp)
 1685              	.LVL225:
 1686              	.LBB631:
  61:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 1687              		.loc 3 61 0
 1688 00a3 0F8E0E02 		jle	.L144
 1688      0000
 1689 00a9 31ED     		xorl	%ebp, %ebp
 1690 00ab 4531FF   		xorl	%r15d, %r15d
 1691 00ae 4531F6   		xorl	%r14d, %r14d
 1692              	.LVL226:
 1693              		.p2align 4,,10
 1694 00b1 0F1F8000 		.p2align 3
 1694      000000
 1695              	.L128:
 1696              	.LBB623:
  62:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 1697              		.loc 3 62 0
 1698 00b8 498B7C6D 		movq	0(%r13,%rbp,2), %rdi
 1698      00
 1699              	.LVL227:
 1700              	.LBB624:
 1701              	.LBB625:
 957:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1702              		.loc 1 957 0
 1703 00bd 488D5424 		leaq	20(%rsp), %rdx
 1703      14
 1704 00c2 488D7424 		leaq	16(%rsp), %rsi
 1704      10
 1705              	.LBE625:
 1706              	.LBE624:
  65:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 1707              		.loc 3 65 0
 1708 00c7 C7442410 		movl	$0, 16(%rsp)
 1708      00000000 
 1709 00cf C7442414 		movl	$0, 20(%rsp)
 1709      00000000 
 1710 00d7 F6476002 		testb	$2, 96(%rdi)
 1711 00db 450F44F7 		cmove	%r15d, %r14d
 1712              	.LVL228:
 1713              	.LBB628:
 1714              	.LBB626:
 957:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1715              		.loc 1 957 0
 1716 00df 4883C730 		addq	$48, %rdi
 1717              	.LVL229:
 1718              	.LBE626:
 1719              	.LBE628:
 1720              	.LBE623:
  61:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 1721              		.loc 3 61 0
 1722 00e3 4183C701 		addl	$1, %r15d
 1723              	.LVL230:
 1724              	.LBB630:
 1725              	.LBB629:
 1726              	.LBB627:
 957:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1727              		.loc 1 957 0
 1728 00e7 E8000000 		call	_ZNK8Fl_Label7measureERiS0_
 1728      00
 1729              	.LVL231:
 1730              	.LBE627:
 1731              	.LBE629:
  68:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 1732              		.loc 3 68 0
 1733 00ec 8B442410 		movl	16(%rsp), %eax
 1734 00f0 488B93B8 		movq	184(%rbx), %rdx
 1734      000000
 1735 00f7 83C00A   		addl	$10, %eax
 1736 00fa 89042A   		movl	%eax, (%rdx,%rbp)
  69:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 1737              		.loc 3 69 0
 1738 00fd 488B93B0 		movq	176(%rbx), %rdx
 1738      000000
 1739 0104 488BB3B8 		movq	184(%rbx), %rsi
 1739      000000
 1740 010b 8B042A   		movl	(%rdx,%rbp), %eax
 1741 010e 03042E   		addl	(%rsi,%rbp), %eax
 1742 0111 83C002   		addl	$2, %eax
 1743 0114 89442A04 		movl	%eax, 4(%rdx,%rbp)
 1744 0118 4883C504 		addq	$4, %rbp
 1745              	.LVL232:
 1746              	.LBE630:
  61:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 1747              		.loc 3 61 0
 1748 011c 4539E7   		cmpl	%r12d, %r15d
 1749 011f 7597     		jne	.L128
 1750 0121 4963D4   		movslq	%r12d, %rdx
 1751 0124 48C1E202 		salq	$2, %rdx
 1752              	.LVL233:
 1753              	.L126:
 1754              	.LBE631:
  71:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 1755              		.loc 3 71 0
 1756 0128 0FB64424 		movzbl	15(%rsp), %eax
 1756      0F
  74:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1757              		.loc 3 74 0
 1758 012d 480393B0 		addq	176(%rbx), %rdx
 1758      000000
 1759 0134 448B5B28 		movl	40(%rbx), %r11d
  71:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 1760              		.loc 3 71 0
 1761 0138 88050000 		movb	%al, fl_draw_shortcut(%rip)
 1761      0000
 1762              	.LVL234:
  74:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1763              		.loc 3 74 0
 1764 013e 443B1A   		cmpl	(%rdx), %r11d
 1765 0141 4489F0   		movl	%r14d, %eax
 1766 0144 0F8D03FF 		jge	.L125
 1766      FFFF
 1767              	.LBB632:
 1768              	.LBB633:
  79:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1769              		.loc 3 79 0
 1770 014a 458D4424 		leal	-1(%r12), %r8d
 1770      FF
 1771              	.LBE633:
 1772              	.LBE632:
  77:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 1773              		.loc 3 77 0
 1774 014f 44891A   		movl	%r11d, (%rdx)
 1775              	.LVL235:
 1776              	.LBB636:
 1777              	.LBB634:
  79:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1778              		.loc 3 79 0
 1779 0152 488B83B8 		movq	184(%rbx), %rax
 1779      000000
  80:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1780              		.loc 3 80 0
 1781 0159 488B93B0 		movq	176(%rbx), %rdx
 1781      000000
  79:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1782              		.loc 3 79 0
 1783 0160 4489D9   		movl	%r11d, %ecx
 1784 0163 4963E8   		movslq	%r8d, %rbp
 1785 0166 4C8D14AD 		leaq	0(,%rbp,4), %r10
 1785      00000000 
 1786 016e 2B0CA8   		subl	(%rax,%rbp,4), %ecx
  80:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1787              		.loc 3 80 0
 1788 0171 428B7C12 		movl	4(%rdx,%r10), %edi
 1788      04
 1789 0176 498D7204 		leaq	4(%r10), %rsi
  79:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1790              		.loc 3 79 0
 1791 017a 89C8     		movl	%ecx, %eax
 1792              	.LVL236:
 1793 017c 39CF     		cmpl	%ecx, %edi
 1794 017e 0F4EC7   		cmovle	%edi, %eax
 1795              	.LVL237:
 1796 0181 4489C7   		movl	%r8d, %edi
  81:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 1797              		.loc 3 81 0
 1798 0184 4C01D2   		addq	%r10, %rdx
 1799 0187 4829FD   		subq	%rdi, %rbp
 1800 018a 48C1E502 		salq	$2, %rbp
 1801 018e 3902     		cmpl	%eax, (%rdx)
 1802 0190 7F35     		jg	.L132
 1803 0192 EB3E     		jmp	.L131
 1804              	.LVL238:
 1805              		.p2align 4,,10
 1806 0194 0F1F4000 		.p2align 3
 1807              	.L133:
  79:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1808              		.loc 3 79 0
 1809 0198 488B83B8 		movq	184(%rbx), %rax
 1809      000000
 1810              	.LVL239:
  80:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1811              		.loc 3 80 0
 1812 019f 488B93B0 		movq	176(%rbx), %rdx
 1812      000000
 1813              	.LVL240:
  79:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1814              		.loc 3 79 0
 1815 01a6 4589D9   		movl	%r11d, %r9d
 1816 01a9 498D7AFC 		leaq	-4(%r10), %rdi
 1817 01ad 462B4C10 		subl	-4(%rax,%r10), %r9d
 1817      FC
 1818              	.LVL241:
  80:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1819              		.loc 3 80 0
 1820 01b2 428B0412 		movl	(%rdx,%r10), %eax
 1821 01b6 4989FA   		movq	%rdi, %r10
 1822 01b9 4139C1   		cmpl	%eax, %r9d
 1823 01bc 410F4EC1 		cmovle	%r9d, %eax
 1824              	.LVL242:
  81:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 1825              		.loc 3 81 0
 1826 01c0 4801FA   		addq	%rdi, %rdx
 1827 01c3 3902     		cmpl	%eax, (%rdx)
 1828 01c5 7E0B     		jle	.L131
 1829              	.L132:
  83:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 1830              		.loc 3 83 0
 1831 01c7 4183EB0A 		subl	$10, %r11d
 1832              	.LVL243:
 1833              	.LBE634:
  78:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 1834              		.loc 3 78 0
 1835 01cb 4C39D5   		cmpq	%r10, %rbp
 1836              	.LBB635:
  82:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 1837              		.loc 3 82 0
 1838 01ce 8902     		movl	%eax, (%rdx)
 1839              	.LBE635:
  78:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 1840              		.loc 3 78 0
 1841 01d0 75C6     		jne	.L133
 1842              	.L131:
 1843              	.LVL244:
 1844              	.LBE636:
 1845              	.LBB637:
  86:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 1846              		.loc 3 86 0
 1847 01d2 4585E4   		testl	%r12d, %r12d
 1848 01d5 7E67     		jle	.L134
 1849              	.LBB638:
  87:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 1850              		.loc 3 87 0
 1851 01d7 488B93B0 		movq	176(%rbx), %rdx
 1851      000000
 1852 01de 8B02     		movl	(%rdx), %eax
 1853              	.LVL245:
 1854 01e0 85C0     		testl	%eax, %eax
 1855 01e2 795A     		jns	.L134
 1856 01e4 438D3CA4 		leal	(%r12,%r12,4), %edi
 1857 01e8 4531C9   		xorl	%r9d, %r9d
 1858 01eb 31C0     		xorl	%eax, %eax
 1859 01ed 01FF     		addl	%edi, %edi
 1860 01ef F7DF     		negl	%edi
 1861 01f1 EB1F     		jmp	.L136
 1862              	.LVL246:
 1863              		.p2align 4,,10
 1864 01f3 0F1F4400 		.p2align 3
 1864      00
 1865              	.L159:
 1866 01f8 4883C004 		addq	$4, %rax
 1867 01fc 4183C10A 		addl	$10, %r9d
 1868 0200 83C70A   		addl	$10, %edi
 1869 0203 4889C2   		movq	%rax, %rdx
 1870              	.LVL247:
 1871 0206 480393B0 		addq	176(%rbx), %rdx
 1871      000000
 1872 020d 443B0A   		cmpl	(%rdx), %r9d
 1873 0210 7E2C     		jle	.L134
 1874              	.LVL248:
 1875              	.L136:
  88:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 1876              		.loc 3 88 0
 1877 0212 44890A   		movl	%r9d, (%rdx)
 1878              	.LVL249:
  89:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 1879              		.loc 3 89 0
 1880 0215 4C8B93B0 		movq	176(%rbx), %r10
 1880      000000
 1881 021c 8B5328   		movl	40(%rbx), %edx
 1882 021f 8D5417FF 		leal	-1(%rdi,%rdx), %edx
 1883 0223 412B1402 		subl	(%r10,%rax), %edx
 1884              	.LVL250:
  90:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 1885              		.loc 3 90 0
 1886 0227 4989C2   		movq	%rax, %r10
 1887 022a 4C0393B8 		addq	184(%rbx), %r10
 1887      000000
 1888 0231 413B12   		cmpl	(%r10), %edx
 1889 0234 7D03     		jge	.L137
  90:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 1890              		.loc 3 90 0 is_stmt 0 discriminator 1
 1891 0236 418912   		movl	%edx, (%r10)
 1892              	.L137:
 1893              	.LBE638:
  86:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 1894              		.loc 3 86 0 is_stmt 1 discriminator 2
 1895 0239 83FFF6   		cmpl	$-10, %edi
 1896 023c 75BA     		jne	.L159
 1897              	.LVL251:
 1898              	.L134:
 1899              	.LBE637:
  93:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1900              		.loc 3 93 0
 1901 023e 4539F4   		cmpl	%r14d, %r12d
 1902 0241 7E37     		jle	.L146
 1903 0243 4529F0   		subl	%r14d, %r8d
  93:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1904              		.loc 3 93 0 is_stmt 0 discriminator 2
 1905 0246 4889F0   		movq	%rsi, %rax
 1906 0249 4D29C4   		subq	%r8, %r12
 1907              	.LVL252:
 1908 024c 4E8D04A5 		leaq	-4(,%r12,4), %r8
 1908      FCFFFFFF 
 1909              		.p2align 4,,10
 1910 0254 0F1F4000 		.p2align 3
 1911              	.L139:
  94:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 1912              		.loc 3 94 0 is_stmt 1 discriminator 2
 1913 0258 488BB3B0 		movq	176(%rbx), %rsi
 1913      000000
 1914 025f 488BBBB8 		movq	184(%rbx), %rdi
 1914      000000
 1915 0266 8B5406FC 		movl	-4(%rsi,%rax), %edx
 1916 026a 035407FC 		addl	-4(%rdi,%rax), %edx
 1917 026e 891406   		movl	%edx, (%rsi,%rax)
 1918 0271 4883E804 		subq	$4, %rax
  93:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1919              		.loc 3 93 0 discriminator 2
 1920 0275 4C39C0   		cmpq	%r8, %rax
 1921 0278 75DE     		jne	.L139
 1922              	.L146:
  93:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1923              		.loc 3 93 0 is_stmt 0
 1924 027a 4489F0   		movl	%r14d, %eax
 1925 027d E9CBFDFF 		jmp	.L125
 1925      FF
 1926              	.LVL253:
 1927              		.p2align 4,,10
 1928 0282 660F1F44 		.p2align 3
 1928      0000
 1929              	.L165:
  48:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 1930              		.loc 3 48 0 is_stmt 1
 1931 0288 418D6C24 		leal	1(%r12), %ebp
 1931      01
 1932 028d 4863ED   		movslq	%ebp, %rbp
 1933 0290 48C1E502 		salq	$2, %rbp
 1934 0294 4889EF   		movq	%rbp, %rdi
 1935 0297 E8000000 		call	malloc
 1935      00
 1936              	.LVL254:
  49:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1937              		.loc 3 49 0
 1938 029c 4889EF   		movq	%rbp, %rdi
  48:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 1939              		.loc 3 48 0
 1940 029f 488983B0 		movq	%rax, 176(%rbx)
 1940      000000
  49:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1941              		.loc 3 49 0
 1942 02a6 E8000000 		call	malloc
 1942      00
 1943              	.LVL255:
 1944 02ab 488983B8 		movq	%rax, 184(%rbx)
 1944      000000
 1945 02b2 E988FDFF 		jmp	.L124
 1945      FF
 1946              	.LVL256:
 1947              	.L144:
 1948              	.LBB639:
  61:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 1949              		.loc 3 61 0
 1950 02b7 31D2     		xorl	%edx, %edx
 1951              	.LBE639:
  54:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1952              		.loc 3 54 0
 1953 02b9 4531F6   		xorl	%r14d, %r14d
 1954 02bc E967FEFF 		jmp	.L126
 1954      FF
 1955              	.LVL257:
 1956              	.L167:
  97:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 1957              		.loc 3 97 0
 1958 02c1 E8000000 		call	__stack_chk_fail
 1958      00
 1959              	.LVL258:
 1960              		.cfi_endproc
 1961              	.LFE488:
 1963              		.section	.text.unlikely._ZN7Fl_Tabs13tab_positionsEv
 1964              	.LCOLDE13:
 1965              		.section	.text._ZN7Fl_Tabs13tab_positionsEv
 1966              	.LHOTE13:
 1967              		.section	.text.unlikely._ZN7Fl_Tabs4drawEv,"ax",@progbits
 1968              		.align 2
 1969              	.LCOLDB14:
 1970              		.section	.text._ZN7Fl_Tabs4drawEv,"ax",@progbits
 1971              	.LHOTB14:
 1972              		.align 2
 1973              		.p2align 4,,15
 1974              		.globl	_ZN7Fl_Tabs4drawEv
 1976              	_ZN7Fl_Tabs4drawEv:
 1977              	.LFB496:
 333:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 1978              		.loc 3 333 0
 1979              		.cfi_startproc
 1980              	.LVL259:
 1981 0000 4157     		pushq	%r15
 1982              		.cfi_def_cfa_offset 16
 1983              		.cfi_offset 15, -16
 1984 0002 4156     		pushq	%r14
 1985              		.cfi_def_cfa_offset 24
 1986              		.cfi_offset 14, -24
 1987 0004 4989FF   		movq	%rdi, %r15
 1988 0007 4155     		pushq	%r13
 1989              		.cfi_def_cfa_offset 32
 1990              		.cfi_offset 13, -32
 1991 0009 4154     		pushq	%r12
 1992              		.cfi_def_cfa_offset 40
 1993              		.cfi_offset 12, -40
 1994 000b 55       		pushq	%rbp
 1995              		.cfi_def_cfa_offset 48
 1996              		.cfi_offset 6, -48
 1997 000c 53       		pushq	%rbx
 1998              		.cfi_def_cfa_offset 56
 1999              		.cfi_offset 3, -56
 2000 000d 4883EC18 		subq	$24, %rsp
 2001              		.cfi_def_cfa_offset 80
 334:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 2002              		.loc 3 334 0
 2003 0011 E8000000 		call	_ZN7Fl_Tabs5valueEv
 2003      00
 2004              	.LVL260:
 2005              	.LBB640:
 2006              	.LBB641:
 102:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 2007              		.loc 3 102 0
 2008 0016 458BAF90 		movl	144(%r15), %r13d
 2008      000000
 2009              	.LBE641:
 2010              	.LBE640:
 334:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 2011              		.loc 3 334 0
 2012 001d 4989C6   		movq	%rax, %r14
 2013              	.LVL261:
 2014              	.LBB644:
 2015              	.LBB642:
 102:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 2016              		.loc 3 102 0
 2017 0020 4585ED   		testl	%r13d, %r13d
 2018 0023 0F859701 		jne	.L169
 2018      0000
 2019 0029 410FB647 		movzbl	109(%r15), %eax
 2019      6D
 2020              	.LVL262:
 2021 002e 418B5F2C 		movl	44(%r15), %ebx
 2022              	.LVL263:
 2023              	.LBE642:
 2024              	.LBE644:
 2025              	.LBB645:
 337:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2026              		.loc 3 337 0
 2027 0032 84C0     		testb	%al, %al
 2028 0034 0F889D01 		js	.L195
 2028      0000
 2029              	.LVL264:
 2030              	.L171:
 352:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 2031              		.loc 3 352 0
 2032 003a 4D85F6   		testq	%r14, %r14
 2033 003d 7410     		je	.L178
 352:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 2034              		.loc 3 352 0 is_stmt 0 discriminator 1
 2035 003f 4C89F6   		movq	%r14, %rsi
 2036 0042 4C89FF   		movq	%r15, %rdi
 2037 0045 E8000000 		call	_ZNK8Fl_Group12update_childER9Fl_Widget
 2037      00
 2038              	.LVL265:
 2039              	.L194:
 2040 004a 410FB647 		movzbl	109(%r15), %eax
 2040      6D
 2041              	.L178:
 2042              	.LVL266:
 2043              	.LBE645:
 2044              	.LBB655:
 354:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 2045              		.loc 3 354 0 is_stmt 1
 2046 004f A884     		testb	$-124, %al
 2047 0051 7515     		jne	.L196
 2048              	.LVL267:
 2049              	.L168:
 2050              	.LBE655:
 371:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 2051              		.loc 3 371 0
 2052 0053 4883C418 		addq	$24, %rsp
 2053              		.cfi_remember_state
 2054              		.cfi_def_cfa_offset 56
 2055 0057 5B       		popq	%rbx
 2056              		.cfi_def_cfa_offset 48
 2057 0058 5D       		popq	%rbp
 2058              		.cfi_def_cfa_offset 40
 2059 0059 415C     		popq	%r12
 2060              		.cfi_def_cfa_offset 32
 2061 005b 415D     		popq	%r13
 2062              		.cfi_def_cfa_offset 24
 2063 005d 415E     		popq	%r14
 2064              		.cfi_def_cfa_offset 16
 2065              	.LVL268:
 2066 005f 415F     		popq	%r15
 2067              		.cfi_def_cfa_offset 8
 2068              	.LVL269:
 2069 0061 C3       		ret
 2070              	.LVL270:
 2071              		.p2align 4,,10
 2072 0062 660F1F44 		.p2align 3
 2072      0000
 2073              	.L196:
 2074              		.cfi_restore_state
 2075 0068 418B8790 		movl	144(%r15), %eax
 2075      000000
 2076              	.LBB657:
 2077              	.LBB656:
 356:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2078              		.loc 3 356 0
 2079 006f 4C89FF   		movq	%r15, %rdi
 2080 0072 8944240C 		movl	%eax, 12(%rsp)
 2081              	.LVL271:
 2082 0076 E8000000 		call	_ZN7Fl_Tabs13tab_positionsEv
 2082      00
 2083              	.LVL272:
 358:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2084              		.loc 3 358 0
 2085 007b 4C89FF   		movq	%r15, %rdi
 356:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2086              		.loc 3 356 0
 2087 007e 4189C4   		movl	%eax, %r12d
 2088 0081 89442408 		movl	%eax, 8(%rsp)
 2089              	.LVL273:
 358:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2090              		.loc 3 358 0
 2091 0085 E8000000 		call	_ZNK8Fl_Group5arrayEv
 2091      00
 2092              	.LVL274:
 359:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2093              		.loc 3 359 0
 2094 008a 4585E4   		testl	%r12d, %r12d
 358:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2095              		.loc 3 358 0
 2096 008d 4889C5   		movq	%rax, %rbp
 2097              	.LVL275:
 359:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2098              		.loc 3 359 0
 2099 0090 7E59     		jle	.L184
 2100 0092 8B442408 		movl	8(%rsp), %eax
 2101              	.LVL276:
 2102 0096 83E801   		subl	$1, %eax
 2103 0099 4C8D2C85 		leaq	4(,%rax,4), %r13
 2103      04000000 
 359:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2104              		.loc 3 359 0 is_stmt 0 discriminator 2
 2105 00a1 31C0     		xorl	%eax, %eax
 2106              	.LVL277:
 2107              		.p2align 4,,10
 2108 00a3 0F1F4400 		.p2align 3
 2108      00
 2109              	.L185:
 360:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2110              		.loc 3 360 0 is_stmt 1 discriminator 2
 2111 00a8 498BBFB0 		movq	176(%r15), %rdi
 2111      000000
 2112 00af 498B97B8 		movq	184(%r15), %rdx
 2112      000000
 361:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 2113              		.loc 3 361 0 discriminator 2
 2114 00b6 4883EC08 		subq	$8, %rsp
 2115              		.cfi_def_cfa_offset 88
 2116 00ba 418B7720 		movl	32(%r15), %esi
 2117              	.LVL278:
 2118 00be 4C8D6004 		leaq	4(%rax), %r12
 2119              	.LVL279:
 2120 00c2 4189D8   		movl	%ebx, %r8d
 2121 00c5 8B0C02   		movl	(%rdx,%rax), %ecx
 2122 00c8 8B540704 		movl	4(%rdi,%rax), %edx
 2123 00cc 01F2     		addl	%esi, %edx
 2124 00ce 033407   		addl	(%rdi,%rax), %esi
 2125 00d1 6A00     		pushq	$0
 2126              		.cfi_def_cfa_offset 96
 2127 00d3 4C8B4C45 		movq	0(%rbp,%rax,2), %r9
 2127      00
 2128 00d8 4C89FF   		movq	%r15, %rdi
 2129 00db E8000000 		call	_ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti
 2129      00
 2130              	.LVL280:
 359:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2131              		.loc 3 359 0 discriminator 2
 2132 00e0 4D39EC   		cmpq	%r13, %r12
 2133 00e3 4C89E0   		movq	%r12, %rax
 2134 00e6 5F       		popq	%rdi
 2135              		.cfi_def_cfa_offset 88
 2136 00e7 4158     		popq	%r8
 2137              		.cfi_def_cfa_offset 80
 2138 00e9 75BD     		jne	.L185
 2139              	.LVL281:
 2140              	.L184:
 362:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 2141              		.loc 3 362 0
 2142 00eb 8B44240C 		movl	12(%rsp), %eax
 2143 00ef 83E801   		subl	$1, %eax
 2144              	.LVL282:
 2145 00f2 39442408 		cmpl	%eax, 8(%rsp)
 2146 00f6 7D6A     		jge	.L182
 2147 00f8 8B54240C 		movl	12(%rsp), %edx
 2148 00fc 4898     		cltq
 2149 00fe 4C8D2C85 		leaq	0(,%rax,4), %r13
 2149      00000000 
 2150 0106 83EA02   		subl	$2, %edx
 2151 0109 2B542408 		subl	8(%rsp), %edx
 2152 010d 4829D0   		subq	%rdx, %rax
 2153              	.LVL283:
 2154 0110 4C8D2485 		leaq	-4(,%rax,4), %r12
 2154      FCFFFFFF 
 2155              	.LVL284:
 2156 0118 0F1F8400 		.p2align 4,,10
 2156      00000000 
 2157              		.p2align 3
 2158              	.L188:
 363:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2159              		.loc 3 363 0 discriminator 2
 2160 0120 498B87B0 		movq	176(%r15), %rax
 2160      000000
 2161 0127 498B97B8 		movq	184(%r15), %rdx
 2161      000000
 364:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 2162              		.loc 3 364 0 discriminator 2
 2163 012e 4883EC08 		subq	$8, %rsp
 2164              		.cfi_def_cfa_offset 88
 2165 0132 418B7720 		movl	32(%r15), %esi
 2166              	.LVL285:
 2167 0136 4189D8   		movl	%ebx, %r8d
 2168 0139 4C89FF   		movq	%r15, %rdi
 2169 013c 428B0C2A 		movl	(%rdx,%r13), %ecx
 2170 0140 428B5428 		movl	4(%rax,%r13), %edx
 2170      04
 2171 0145 01F2     		addl	%esi, %edx
 2172 0147 42033428 		addl	(%rax,%r13), %esi
 2173 014b 6A01     		pushq	$1
 2174              		.cfi_def_cfa_offset 96
 2175 014d 4E8B4C6D 		movq	0(%rbp,%r13,2), %r9
 2175      00
 2176 0152 4983ED04 		subq	$4, %r13
 2177 0156 E8000000 		call	_ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti
 2177      00
 2178              	.LVL286:
 362:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 2179              		.loc 3 362 0 discriminator 2
 2180 015b 4D39E5   		cmpq	%r12, %r13
 2181 015e 59       		popq	%rcx
 2182              		.cfi_def_cfa_offset 88
 2183 015f 5E       		popq	%rsi
 2184              		.cfi_def_cfa_offset 80
 2185 0160 75BE     		jne	.L188
 2186              	.LVL287:
 2187              	.L182:
 365:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2188              		.loc 3 365 0
 2189 0162 4D85F6   		testq	%r14, %r14
 2190 0165 0F84E8FE 		je	.L168
 2190      FFFF
 2191              	.LVL288:
 368:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 2192              		.loc 3 368 0
 2193 016b 4C637424 		movslq	8(%rsp), %r14
 2193      08
 2194              	.LVL289:
 367:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 2195              		.loc 3 367 0
 2196 0170 498B87B0 		movq	176(%r15), %rax
 2196      000000
 368:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 2197              		.loc 3 368 0
 2198 0177 4883EC08 		subq	$8, %rsp
 2199              		.cfi_def_cfa_offset 88
 367:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 2200              		.loc 3 367 0
 2201 017b 498B97B8 		movq	184(%r15), %rdx
 2201      000000
 2202 0182 418B7720 		movl	32(%r15), %esi
 2203              	.LVL290:
 368:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 2204              		.loc 3 368 0
 2205 0186 4189D8   		movl	%ebx, %r8d
 2206 0189 4C89FF   		movq	%r15, %rdi
 2207 018c 428B0CB2 		movl	(%rdx,%r14,4), %ecx
 2208 0190 428B54B0 		movl	4(%rax,%r14,4), %edx
 2208      04
 2209 0195 01F2     		addl	%esi, %edx
 2210 0197 420334B0 		addl	(%rax,%r14,4), %esi
 2211 019b 6A02     		pushq	$2
 2212              		.cfi_def_cfa_offset 96
 2213 019d 4E8B4CF5 		movq	0(%rbp,%r14,8), %r9
 2213      00
 2214 01a2 E8000000 		call	_ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti
 2214      00
 2215              	.LVL291:
 2216 01a7 58       		popq	%rax
 2217              		.cfi_def_cfa_offset 88
 2218 01a8 5A       		popq	%rdx
 2219              		.cfi_def_cfa_offset 80
 2220              	.LBE656:
 2221              	.LBE657:
 371:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 2222              		.loc 3 371 0
 2223 01a9 4883C418 		addq	$24, %rsp
 2224              		.cfi_remember_state
 2225              		.cfi_def_cfa_offset 56
 2226 01ad 5B       		popq	%rbx
 2227              		.cfi_def_cfa_offset 48
 2228 01ae 5D       		popq	%rbp
 2229              		.cfi_def_cfa_offset 40
 2230              	.LVL292:
 2231 01af 415C     		popq	%r12
 2232              		.cfi_def_cfa_offset 32
 2233 01b1 415D     		popq	%r13
 2234              		.cfi_def_cfa_offset 24
 2235 01b3 415E     		popq	%r14
 2236              		.cfi_def_cfa_offset 16
 2237 01b5 415F     		popq	%r15
 2238              		.cfi_def_cfa_offset 8
 2239              	.LVL293:
 2240 01b7 C3       		ret
 2241              	.LVL294:
 2242 01b8 0F1F8400 		.p2align 4,,10
 2242      00000000 
 2243              		.p2align 3
 2244              	.L169:
 2245              		.cfi_restore_state
 2246              	.LBB658:
 2247              	.LBB643:
 2248 01c0 4C89FF   		movq	%r15, %rdi
 2249 01c3 E8000000 		call	_ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
 2249      00
 2250              	.LVL295:
 2251 01c8 89C3     		movl	%eax, %ebx
 2252              	.LVL296:
 2253 01ca 410FB647 		movzbl	109(%r15), %eax
 2253      6D
 2254              	.LVL297:
 2255              	.LBE643:
 2256              	.LBE658:
 2257              	.LBB659:
 337:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2258              		.loc 3 337 0
 2259 01cf 84C0     		testb	%al, %al
 2260 01d1 0F8963FE 		jns	.L171
 2260      FFFF
 2261              	.L195:
 2262              	.LBB646:
 338:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 2263              		.loc 3 338 0
 2264 01d7 4D85F6   		testq	%r14, %r14
 2265 01da 0F84E800 		je	.L172
 2265      0000
 2266 01e0 418B6E64 		movl	100(%r14), %ebp
 2267              	.LVL298:
 2268              	.L173:
 340:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2269              		.loc 3 340 0 discriminator 4
 2270 01e4 4189D9   		movl	%ebx, %r9d
 2271 01e7 B9000000 		movl	$0, %ecx
 2271      00
 2272 01ec 410FB677 		movzbl	110(%r15), %esi
 2272      6E
 2273 01f1 41C1F91F 		sarl	$31, %r9d
 2274 01f5 418B5720 		movl	32(%r15), %edx
 2275 01f9 458B4728 		movl	40(%r15), %r8d
 2276 01fd 4489C8   		movl	%r9d, %eax
 2277 0200 45034F2C 		addl	44(%r15), %r9d
 2278 0204 4C89FF   		movq	%r15, %rdi
 2279 0207 31D8     		xorl	%ebx, %eax
 2280 0209 85DB     		testl	%ebx, %ebx
 2281 020b 0F49CB   		cmovns	%ebx, %ecx
 2282 020e 41034F24 		addl	36(%r15), %ecx
 2283 0212 4883EC08 		subq	$8, %rsp
 2284              		.cfi_def_cfa_offset 88
 2285 0216 55       		pushq	%rbp
 2286              		.cfi_def_cfa_offset 96
 2287 0217 4129C1   		subl	%eax, %r9d
 2288 021a E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2288      00
 2289              	.LVL299:
 2290              	.LBB647:
 342:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2291              		.loc 3 342 0 discriminator 4
 2292 021f 413B6F68 		cmpl	104(%r15), %ebp
 2293 0223 415B     		popq	%r11
 2294              		.cfi_def_cfa_offset 88
 2295 0225 415C     		popq	%r12
 2296              		.cfi_def_cfa_offset 80
 2297 0227 7468     		je	.L174
 2298              	.LBB648:
 345:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 2299              		.loc 3 345 0
 2300 0229 85DB     		testl	%ebx, %ebx
 2301 022b 0F887F00 		js	.L175
 2301      0000
 2302              	.LVL300:
 345:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 2303              		.loc 3 345 0 is_stmt 0 discriminator 1
 2304 0231 418B6F24 		movl	36(%r15), %ebp
 2305              	.LVL301:
 2306 0235 01DD     		addl	%ebx, %ebp
 2307              	.LVL302:
 2308              	.L176:
 2309              	.LBB649:
 2310              	.LBB650:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2311              		.loc 5 82 0 is_stmt 1 discriminator 4
 2312 0237 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2312      000000
 2313 023e 418B4F28 		movl	40(%r15), %ecx
 2314 0242 41B80500 		movl	$5, %r8d
 2314      0000
 2315 0248 418B7720 		movl	32(%r15), %esi
 2316 024c 89EA     		movl	%ebp, %edx
 2317 024e 488B07   		movq	(%rdi), %rax
 2318 0251 FF905001 		call	*336(%rax)
 2318      0000
 2319              	.LVL303:
 2320              	.LBE650:
 2321              	.LBE649:
 347:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2322              		.loc 3 347 0 discriminator 4
 2323 0257 418B4768 		movl	104(%r15), %eax
 2324 025b 410FB677 		movzbl	110(%r15), %esi
 2324      6E
 2325 0260 4883EC08 		subq	$8, %rsp
 2326              		.cfi_def_cfa_offset 88
 2327 0264 418B5720 		movl	32(%r15), %edx
 2328 0268 458B4728 		movl	40(%r15), %r8d
 2329 026c 41B90500 		movl	$5, %r9d
 2329      0000
 2330 0272 89E9     		movl	%ebp, %ecx
 2331 0274 4C89FF   		movq	%r15, %rdi
 2332 0277 50       		pushq	%rax
 2333              		.cfi_def_cfa_offset 96
 2334 0278 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2334      00
 2335              	.LVL304:
 2336              	.LBB651:
 2337              	.LBB652:
 2338              		.loc 5 103 0 discriminator 4
 2339 027d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2339      000000
 2340 0284 488B07   		movq	(%rdi), %rax
 2341 0287 FF907001 		call	*368(%rax)
 2341      0000
 2342              	.LVL305:
 2343 028d 4159     		popq	%r9
 2344              		.cfi_def_cfa_offset 88
 2345 028f 415A     		popq	%r10
 2346              		.cfi_def_cfa_offset 80
 2347              	.LVL306:
 2348              	.L174:
 2349              	.LBE652:
 2350              	.LBE651:
 2351              	.LBE648:
 2352              	.LBE647:
 350:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 2353              		.loc 3 350 0
 2354 0291 4D85F6   		testq	%r14, %r14
 2355 0294 0F84B0FD 		je	.L194
 2355      FFFF
 350:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 2356              		.loc 3 350 0 is_stmt 0 discriminator 1
 2357 029a 4C89F6   		movq	%r14, %rsi
 2358 029d 4C89FF   		movq	%r15, %rdi
 2359 02a0 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 2359      00
 2360              	.LVL307:
 2361 02a5 410FB647 		movzbl	109(%r15), %eax
 2361      6D
 2362 02aa E9A0FDFF 		jmp	.L178
 2362      FF
 2363              	.LVL308:
 2364 02af 90       		.p2align 4,,10
 2365              		.p2align 3
 2366              	.L175:
 2367              	.LBB654:
 2368              	.LBB653:
 345:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 2369              		.loc 3 345 0 is_stmt 1 discriminator 2
 2370 02b0 418B472C 		movl	44(%r15), %eax
 2371 02b4 41034724 		addl	36(%r15), %eax
 2372 02b8 8D6C03FB 		leal	-5(%rbx,%rax), %ebp
 2373              	.LVL309:
 2374 02bc E976FFFF 		jmp	.L176
 2374      FF
 2375              	.LVL310:
 2376              		.p2align 4,,10
 2377 02c1 0F1F8000 		.p2align 3
 2377      000000
 2378              	.L172:
 2379 02c8 418B6F64 		movl	100(%r15), %ebp
 2380              	.LVL311:
 2381 02cc E913FFFF 		jmp	.L173
 2381      FF
 2382              	.LBE653:
 2383              	.LBE654:
 2384              	.LBE646:
 2385              	.LBE659:
 2386              		.cfi_endproc
 2387              	.LFE496:
 2389              		.section	.text.unlikely._ZN7Fl_Tabs4drawEv
 2390              	.LCOLDE14:
 2391              		.section	.text._ZN7Fl_Tabs4drawEv
 2392              	.LHOTE14:
 2393              		.section	.text.unlikely._ZN7Fl_Tabs5whichEii,"ax",@progbits
 2394              		.align 2
 2395              	.LCOLDB15:
 2396              		.section	.text._ZN7Fl_Tabs5whichEii,"ax",@progbits
 2397              	.LHOTB15:
 2398              		.align 2
 2399              		.p2align 4,,15
 2400              		.globl	_ZN7Fl_Tabs5whichEii
 2402              	_ZN7Fl_Tabs5whichEii:
 2403              	.LFB490:
 123:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 2404              		.loc 3 123 0
 2405              		.cfi_startproc
 2406              	.LVL312:
 124:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 2407              		.loc 3 124 0
 2408 0000 8B879000 		movl	144(%rdi), %eax
 2408      0000
 2409 0006 85C0     		testl	%eax, %eax
 2410 0008 0F84C200 		je	.L213
 2410      0000
 123:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 2411              		.loc 3 123 0
 2412 000e 4154     		pushq	%r12
 2413              		.cfi_def_cfa_offset 16
 2414              		.cfi_offset 12, -16
 2415 0010 55       		pushq	%rbp
 2416              		.cfi_def_cfa_offset 24
 2417              		.cfi_offset 6, -24
 2418 0011 4189D4   		movl	%edx, %r12d
 2419 0014 53       		pushq	%rbx
 2420              		.cfi_def_cfa_offset 32
 2421              		.cfi_offset 3, -32
 2422 0015 4889FD   		movq	%rdi, %rbp
 2423              	.LVL313:
 2424 0018 89F3     		movl	%esi, %ebx
 2425              	.LBB689:
 2426              	.LBB690:
 2427 001a E8000000 		call	_ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
 2427      00
 2428              	.LVL314:
 2429              	.LBE690:
 2430              	.LBE689:
 126:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 2431              		.loc 3 126 0
 2432 001f 85C0     		testl	%eax, %eax
 2433 0021 0F888900 		js	.L214
 2433      0000
 2434 0027 8B5524   		movl	36(%rbp), %edx
 2435              	.LVL315:
 129:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2436              		.loc 3 129 0
 2437 002a 01D0     		addl	%edx, %eax
 2438 002c 4139C4   		cmpl	%eax, %r12d
 2439 002f 7F55     		jg	.L201
 2440 0031 4139D4   		cmpl	%edx, %r12d
 2441 0034 7C50     		jl	.L201
 2442              	.LVL316:
 2443              	.L202:
 131:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 2444              		.loc 3 131 0
 2445 0036 3B5D20   		cmpl	32(%rbp), %ebx
 2446 0039 7C4B     		jl	.L201
 2447              	.LVL317:
 2448 003b 448BA590 		movl	144(%rbp), %r12d
 2448      000000
 2449              	.LVL318:
 2450              	.LBB691:
 2451              	.LBB692:
 134:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2452              		.loc 3 134 0
 2453 0042 4889EF   		movq	%rbp, %rdi
 2454 0045 E8000000 		call	_ZN7Fl_Tabs13tab_positionsEv
 2454      00
 2455              	.LVL319:
 2456              	.LBB693:
 135:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 2457              		.loc 3 135 0
 2458 004a 4585E4   		testl	%r12d, %r12d
 2459 004d 7E37     		jle	.L201
 136:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 2460              		.loc 3 136 0
 2461 004f 488BB5B0 		movq	176(%rbp), %rsi
 2461      000000
 2462 0056 8B7D20   		movl	32(%rbp), %edi
 2463              	.LVL320:
 2464 0059 8B4604   		movl	4(%rsi), %eax
 2465 005c 01F8     		addl	%edi, %eax
 2466 005e 39C3     		cmpl	%eax, %ebx
 2467 0060 7C71     		jl	.L207
 2468 0062 B8010000 		movl	$1, %eax
 2468      00
 2469 0067 EB18     		jmp	.L205
 2470              	.LVL321:
 2471 0069 0F1F8000 		.p2align 4,,10
 2471      000000
 2472              		.p2align 3
 2473              	.L209:
 2474 0070 8B548604 		movl	4(%rsi,%rax,4), %edx
 2475 0074 488D4801 		leaq	1(%rax), %rcx
 2476 0078 01FA     		addl	%edi, %edx
 2477 007a 39D3     		cmpl	%edx, %ebx
 2478 007c 7C12     		jl	.L215
 2479 007e 4889C8   		movq	%rcx, %rax
 2480              	.LVL322:
 2481              	.L205:
 135:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 2482              		.loc 3 135 0
 2483 0081 4139C4   		cmpl	%eax, %r12d
 2484 0084 7FEA     		jg	.L209
 2485              	.LVL323:
 2486              	.L201:
 2487              	.LBE693:
 2488              	.LBE692:
 2489              	.LBE691:
 142:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 2490              		.loc 3 142 0
 2491 0086 5B       		popq	%rbx
 2492              		.cfi_remember_state
 2493              		.cfi_restore 3
 2494              		.cfi_def_cfa_offset 24
 2495              	.LVL324:
 124:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 2496              		.loc 3 124 0
 2497 0087 31C0     		xorl	%eax, %eax
 142:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 2498              		.loc 3 142 0
 2499 0089 5D       		popq	%rbp
 2500              		.cfi_restore 6
 2501              		.cfi_def_cfa_offset 16
 2502              	.LVL325:
 2503 008a 415C     		popq	%r12
 2504              		.cfi_restore 12
 2505              		.cfi_def_cfa_offset 8
 2506 008c C3       		ret
 2507              	.LVL326:
 2508 008d 0F1F00   		.p2align 4,,10
 2509              		.p2align 3
 2510              	.L215:
 2511              		.cfi_restore_state
 2512 0090 488D1CC5 		leaq	0(,%rax,8), %rbx
 2512      00000000 
 2513              	.LVL327:
 2514              	.L203:
 2515              	.LBB700:
 2516              	.LBB698:
 2517              	.LBB696:
 2518              	.LBB694:
 2519              	.LBB695:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 2520              		.loc 2 79 0
 2521 0098 4889EF   		movq	%rbp, %rdi
 2522 009b E8000000 		call	_ZNK8Fl_Group5arrayEv
 2522      00
 2523              	.LVL328:
 2524 00a0 488B0418 		movq	(%rax,%rbx), %rax
 2525              	.LVL329:
 2526              	.LBE695:
 2527              	.LBE694:
 2528              	.LBE696:
 2529              	.LBE698:
 2530              	.LBE700:
 142:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 2531              		.loc 3 142 0
 2532 00a4 5B       		popq	%rbx
 2533              		.cfi_remember_state
 2534              		.cfi_restore 3
 2535              		.cfi_def_cfa_offset 24
 2536 00a5 5D       		popq	%rbp
 2537              		.cfi_restore 6
 2538              		.cfi_def_cfa_offset 16
 2539              	.LVL330:
 2540 00a6 415C     		popq	%r12
 2541              		.cfi_restore 12
 2542              		.cfi_def_cfa_offset 8
 2543 00a8 C3       		ret
 2544              	.LVL331:
 2545 00a9 0F1F8000 		.p2align 4,,10
 2545      000000
 2546              		.p2align 3
 2547              	.L214:
 2548              		.cfi_restore_state
 127:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 2549              		.loc 3 127 0
 2550 00b0 8B552C   		movl	44(%rbp), %edx
 2551 00b3 035524   		addl	36(%rbp), %edx
 2552 00b6 4439E2   		cmpl	%r12d, %edx
 2553 00b9 7CCB     		jl	.L201
 2554              	.LVL332:
 127:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 2555              		.loc 3 127 0 is_stmt 0 discriminator 2
 2556 00bb 01D0     		addl	%edx, %eax
 2557 00bd 4139C4   		cmpl	%eax, %r12d
 2558 00c0 7CC4     		jl	.L201
 2559 00c2 E96FFFFF 		jmp	.L202
 2559      FF
 2560              	.LVL333:
 2561 00c7 660F1F84 		.p2align 4,,10
 2561      00000000 
 2561      00
 2562              		.p2align 3
 2563              	.L213:
 2564              		.cfi_def_cfa_offset 8
 2565              		.cfi_restore 3
 2566              		.cfi_restore 6
 2567              		.cfi_restore 12
 124:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 2568              		.loc 3 124 0 is_stmt 1
 2569 00d0 31C0     		xorl	%eax, %eax
 142:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 2570              		.loc 3 142 0
 2571 00d2 C3       		ret
 2572              	.LVL334:
 2573              	.L207:
 2574              		.cfi_def_cfa_offset 32
 2575              		.cfi_offset 3, -32
 2576              		.cfi_offset 6, -24
 2577              		.cfi_offset 12, -16
 2578              	.LBB701:
 2579              	.LBB699:
 2580              	.LBB697:
 136:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 2581              		.loc 3 136 0
 2582 00d3 31DB     		xorl	%ebx, %ebx
 2583              	.LVL335:
 2584 00d5 EBC1     		jmp	.L203
 2585              	.LBE697:
 2586              	.LBE699:
 2587              	.LBE701:
 2588              		.cfi_endproc
 2589              	.LFE490:
 2591              		.section	.text.unlikely._ZN7Fl_Tabs5whichEii
 2592              	.LCOLDE15:
 2593              		.section	.text._ZN7Fl_Tabs5whichEii
 2594              	.LHOTE15:
 2595              		.section	.text.unlikely._ZN7Fl_TabsD2Ev,"ax",@progbits
 2596              		.align 2
 2597              	.LCOLDB16:
 2598              		.section	.text._ZN7Fl_TabsD2Ev,"ax",@progbits
 2599              	.LHOTB16:
 2600              		.align 2
 2601              		.p2align 4,,15
 2602              		.globl	_ZN7Fl_TabsD2Ev
 2604              	_ZN7Fl_TabsD2Ev:
 2605              	.LFB502:
 478:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2606              		.loc 3 478 0
 2607              		.cfi_startproc
 2608              	.LVL336:
 2609 0000 53       		pushq	%rbx
 2610              		.cfi_def_cfa_offset 16
 2611              		.cfi_offset 3, -16
 478:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2612              		.loc 3 478 0
 2613 0001 4889FB   		movq	%rdi, %rbx
 2614              	.LBB702:
 2615 0004 48C70700 		movq	$_ZTV7Fl_Tabs+16, (%rdi)
 2615      000000
 479:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 2616              		.loc 3 479 0
 2617 000b E8000000 		call	_ZN7Fl_Tabs19clear_tab_positionsEv
 2617      00
 2618              	.LVL337:
 478:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2619              		.loc 3 478 0
 2620 0010 4889DF   		movq	%rbx, %rdi
 2621              	.LBE702:
 480:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 2622              		.loc 3 480 0
 2623 0013 5B       		popq	%rbx
 2624              		.cfi_def_cfa_offset 8
 2625              	.LVL338:
 2626              	.LBB703:
 478:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2627              		.loc 3 478 0
 2628 0014 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 2628      00
 2629              	.LVL339:
 2630              	.LBE703:
 2631              		.cfi_endproc
 2632              	.LFE502:
 2634              		.section	.text.unlikely._ZN7Fl_TabsD2Ev
 2635              	.LCOLDE16:
 2636              		.section	.text._ZN7Fl_TabsD2Ev
 2637              	.LHOTE16:
 2638              		.globl	_ZN7Fl_TabsD1Ev
 2639              		.set	_ZN7Fl_TabsD1Ev,_ZN7Fl_TabsD2Ev
 2640              		.section	.text.unlikely._ZN7Fl_TabsD0Ev,"ax",@progbits
 2641              		.align 2
 2642              	.LCOLDB17:
 2643              		.section	.text._ZN7Fl_TabsD0Ev,"ax",@progbits
 2644              	.LHOTB17:
 2645              		.align 2
 2646              		.p2align 4,,15
 2647              		.globl	_ZN7Fl_TabsD0Ev
 2649              	_ZN7Fl_TabsD0Ev:
 2650              	.LFB504:
 478:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2651              		.loc 3 478 0
 2652              		.cfi_startproc
 2653              	.LVL340:
 2654 0000 53       		pushq	%rbx
 2655              		.cfi_def_cfa_offset 16
 2656              		.cfi_offset 3, -16
 478:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2657              		.loc 3 478 0
 2658 0001 4889FB   		movq	%rdi, %rbx
 2659              	.LBB704:
 2660              	.LBB705:
 2661 0004 48C70700 		movq	$_ZTV7Fl_Tabs+16, (%rdi)
 2661      000000
 479:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 2662              		.loc 3 479 0
 2663 000b E8000000 		call	_ZN7Fl_Tabs19clear_tab_positionsEv
 2663      00
 2664              	.LVL341:
 478:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2665              		.loc 3 478 0
 2666 0010 4889DF   		movq	%rbx, %rdi
 2667 0013 E8000000 		call	_ZN8Fl_GroupD2Ev
 2667      00
 2668              	.LVL342:
 2669              	.LBE705:
 2670              	.LBE704:
 480:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 2671              		.loc 3 480 0
 2672 0018 4889DF   		movq	%rbx, %rdi
 2673 001b 5B       		popq	%rbx
 2674              		.cfi_def_cfa_offset 8
 2675              	.LVL343:
 2676 001c E9000000 		jmp	_ZdlPv
 2676      00
 2677              	.LVL344:
 2678              		.cfi_endproc
 2679              	.LFE504:
 2681              		.section	.text.unlikely._ZN7Fl_TabsD0Ev
 2682              	.LCOLDE17:
 2683              		.section	.text._ZN7Fl_TabsD0Ev
 2684              	.LHOTE17:
 2685              		.section	.text.unlikely._ZN7Fl_Tabs6handleEi,"ax",@progbits
 2686              		.align 2
 2687              	.LCOLDB18:
 2688              		.section	.text._ZN7Fl_Tabs6handleEi,"ax",@progbits
 2689              	.LHOTB18:
 2690              		.align 2
 2691              		.p2align 4,,15
 2692              		.globl	_ZN7Fl_Tabs6handleEi
 2694              	_ZN7Fl_Tabs6handleEi:
 2695              	.LFB492:
 156:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2696              		.loc 3 156 0
 2697              		.cfi_startproc
 2698              	.LVL345:
 2699 0000 4155     		pushq	%r13
 2700              		.cfi_def_cfa_offset 16
 2701              		.cfi_offset 13, -16
 2702 0002 4154     		pushq	%r12
 2703              		.cfi_def_cfa_offset 24
 2704              		.cfi_offset 12, -24
 2705 0004 55       		pushq	%rbp
 2706              		.cfi_def_cfa_offset 32
 2707              		.cfi_offset 6, -32
 2708 0005 53       		pushq	%rbx
 2709              		.cfi_def_cfa_offset 40
 2710              		.cfi_offset 3, -40
 2711 0006 89F5     		movl	%esi, %ebp
 2712 0008 4889FB   		movq	%rdi, %rbx
 2713 000b 4883EC28 		subq	$40, %rsp
 2714              		.cfi_def_cfa_offset 80
 156:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2715              		.loc 3 156 0
 2716 000f 64488B04 		movq	%fs:40, %rax
 2716      25280000 
 2716      00
 2717 0018 48894424 		movq	%rax, 24(%rsp)
 2717      18
 2718 001d 31C0     		xorl	%eax, %eax
 2719              	.LBB706:
 161:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2720              		.loc 3 161 0
 2721 001f 83FE10   		cmpl	$16, %esi
 2722 0022 7711     		ja	.L221
 2723 0024 89F0     		movl	%esi, %eax
 2724 0026 FF24C500 		jmp	*.L223(,%rax,8)
 2724      000000
 2725              		.section	.rodata._ZN7Fl_Tabs6handleEi,"a",@progbits
 2726              		.align 8
 2727              		.align 4
 2728              	.L223:
 2729 0000 00000000 		.quad	.L221
 2729      00000000 
 2730 0008 00000000 		.quad	.L222
 2730      00000000 
 2731 0010 00000000 		.quad	.L224
 2731      00000000 
 2732 0018 00000000 		.quad	.L221
 2732      00000000 
 2733 0020 00000000 		.quad	.L221
 2733      00000000 
 2734 0028 00000000 		.quad	.L224
 2734      00000000 
 2735 0030 00000000 		.quad	.L225
 2735      00000000 
 2736 0038 00000000 		.quad	.L225
 2736      00000000 
 2737 0040 00000000 		.quad	.L226
 2737      00000000 
 2738 0048 00000000 		.quad	.L221
 2738      00000000 
 2739 0050 00000000 		.quad	.L221
 2739      00000000 
 2740 0058 00000000 		.quad	.L227
 2740      00000000 
 2741 0060 00000000 		.quad	.L228
 2741      00000000 
 2742 0068 00000000 		.quad	.L221
 2742      00000000 
 2743 0070 00000000 		.quad	.L221
 2743      00000000 
 2744 0078 00000000 		.quad	.L221
 2744      00000000 
 2745 0080 00000000 		.quad	.L229
 2745      00000000 
 2746              		.section	.text._ZN7Fl_Tabs6handleEi
 2747 002d 0F1F00   		.p2align 4,,10
 2748              		.p2align 3
 2749              	.L229:
 2750              	.LBB707:
 263:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 2751              		.loc 3 263 0
 2752 0030 E8000000 		call	_ZN7Fl_Tabs5valueEv
 2752      00
 2753              	.LVL346:
 2754              	.L221:
 265:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 2755              		.loc 3 265 0
 2756 0035 89EE     		movl	%ebp, %esi
 2757 0037 4889DF   		movq	%rbx, %rdi
 2758 003a E8000000 		call	_ZN8Fl_Group6handleEi
 2758      00
 2759              	.LVL347:
 2760              	.L231:
 2761              	.LBE707:
 2762              	.LBE706:
 268:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 2763              		.loc 3 268 0 discriminator 2
 2764 003f 488B4C24 		movq	24(%rsp), %rcx
 2764      18
 2765 0044 6448330C 		xorq	%fs:40, %rcx
 2765      25280000 
 2765      00
 2766 004d 0F855504 		jne	.L315
 2766      0000
 268:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 2767              		.loc 3 268 0 is_stmt 0
 2768 0053 4883C428 		addq	$40, %rsp
 2769              		.cfi_remember_state
 2770              		.cfi_def_cfa_offset 40
 2771 0057 5B       		popq	%rbx
 2772              		.cfi_def_cfa_offset 32
 2773              	.LVL348:
 2774 0058 5D       		popq	%rbp
 2775              		.cfi_def_cfa_offset 24
 2776 0059 415C     		popq	%r12
 2777              		.cfi_def_cfa_offset 16
 2778 005b 415D     		popq	%r13
 2779              		.cfi_def_cfa_offset 8
 2780 005d C3       		ret
 2781              	.LVL349:
 2782 005e 6690     		.p2align 4,,10
 2783              		.p2align 3
 2784              	.L222:
 2785              		.cfi_restore_state
 2786              	.LBB788:
 2787              	.LBB786:
 2788              	.LBB708:
 2789              	.LBB709:
 2790              	.LBB710:
 102:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 2791              		.loc 3 102 0 is_stmt 1
 2792 0060 8BB79000 		movl	144(%rdi), %esi
 2792      0000
 2793              	.LVL350:
 2794 0066 85F6     		testl	%esi, %esi
 2795 0068 0F854A03 		jne	.L232
 2795      0000
 2796 006e 8B472C   		movl	44(%rdi), %eax
 2797              	.LVL351:
 2798              	.L233:
 2799              	.LBE710:
 2800              	.LBE709:
 165:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 2801              		.loc 3 165 0
 2802 0071 85C0     		testl	%eax, %eax
 2803              	.LBB712:
 2804              	.LBB713:
 2805              		.file 6 "fltk-1.3.4-1/FL/Fl.H"
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
 2806              		.loc 6 603 0
 2807 0073 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 2807      0000
 2808              	.LBE713:
 2809              	.LBE712:
 165:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 2810              		.loc 3 165 0
 2811 0079 0F884903 		js	.L234
 2811      0000
 2812              	.LVL352:
 166:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2813              		.loc 3 166 0
 2814 007f 034324   		addl	36(%rbx), %eax
 2815 0082 39D0     		cmpl	%edx, %eax
 2816 0084 0F8C4E03 		jl	.L236
 2816      0000
 2817              	.LVL353:
 2818              	.L235:
 2819              	.LBE708:
 173:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 2820              		.loc 3 173 0
 2821 008a 8B350000 		movl	_ZN2Fl3e_xE(%rip), %esi
 2821      0000
 2822 0090 4889DF   		movq	%rbx, %rdi
 2823 0093 E8000000 		call	_ZN7Fl_Tabs5whichEii
 2823      00
 2824              	.LVL354:
 2825 0098 4989C4   		movq	%rax, %r12
 2826              	.LVL355:
 2827              	.L237:
 2828              	.LBB715:
 192:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 2829              		.loc 3 192 0
 2830 009b 4C89E6   		movq	%r12, %rsi
 2831 009e 4889DF   		movq	%rbx, %rdi
 2832 00a1 E8000000 		call	_ZN7Fl_Tabs4pushEP9Fl_Widget
 2832      00
 2833              	.LVL356:
 2834              	.LBE715:
 194:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 2835              		.loc 3 194 0
 2836 00a6 B8010000 		movl	$1, %eax
 2836      00
 2837 00ab EB92     		jmp	.L231
 2838              	.LVL357:
 2839 00ad 0F1F00   		.p2align 4,,10
 2840              		.p2align 3
 2841              	.L225:
 2842              	.LBB730:
 2843              	.LBB731:
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
1019:fltk-1.3.4-1/FL/Fl.H ****     screen_work_area(X, Y, W, H, x, y);
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
1178:fltk-1.3.4-1/FL/Fl.H ****   /** Releases the current grabbed window, equals grab(0).
1179:fltk-1.3.4-1/FL/Fl.H ****   \deprecated Use Fl::grab(0) instead.
1180:fltk-1.3.4-1/FL/Fl.H ****   \see grab(Fl_Window*) */
1181:fltk-1.3.4-1/FL/Fl.H ****   static void release() {grab(0);}
1182:fltk-1.3.4-1/FL/Fl.H **** 
1183:fltk-1.3.4-1/FL/Fl.H ****   // Visible focus methods...
1184:fltk-1.3.4-1/FL/Fl.H ****   /**
1185:fltk-1.3.4-1/FL/Fl.H ****     Gets or sets the visible keyboard focus on buttons and other
1186:fltk-1.3.4-1/FL/Fl.H ****     non-text widgets. The default mode is to enable keyboard focus
1187:fltk-1.3.4-1/FL/Fl.H ****     for all widgets.
1188:fltk-1.3.4-1/FL/Fl.H ****   */
1189:fltk-1.3.4-1/FL/Fl.H ****   static void visible_focus(int v) { option(OPTION_VISIBLE_FOCUS, (v!=0)); }
1190:fltk-1.3.4-1/FL/Fl.H ****   /**
1191:fltk-1.3.4-1/FL/Fl.H ****     Gets or sets the visible keyboard focus on buttons and other
1192:fltk-1.3.4-1/FL/Fl.H ****     non-text widgets. The default mode is to enable keyboard focus
1193:fltk-1.3.4-1/FL/Fl.H ****     for all widgets.
1194:fltk-1.3.4-1/FL/Fl.H ****   */
1195:fltk-1.3.4-1/FL/Fl.H ****   static int  visible_focus() { return option(OPTION_VISIBLE_FOCUS); }
 2844              		.loc 6 1195 0
 2845 00b0 BF010000 		movl	$1, %edi
 2845      00
 2846 00b5 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 2846      00
 2847              	.LVL358:
 2848              	.LBE731:
 2849              	.LBE730:
 212:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 2850              		.loc 3 212 0
 2851 00ba 84C0     		testb	%al, %al
 2852 00bc 0F8473FF 		je	.L221
 2852      FFFF
 2853              	.LBB732:
 2854              	.LBB733:
 593:fltk-1.3.4-1/FL/Fl.H ****   /**
 2855              		.loc 6 593 0
 2856 00c2 8B050000 		movl	_ZN2Fl8e_numberE(%rip), %eax
 2856      0000
 2857              	.LBE733:
 2858              	.LBE732:
 216:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2859              		.loc 3 216 0
 2860 00c8 83F80C   		cmpl	$12, %eax
 2861 00cb 0F8764FF 		ja	.L221
 2861      FFFF
 2862 00d1 BAC41100 		movl	$4548, %edx
 2862      00
 2863 00d6 480FA3C2 		btq	%rax, %rdx
 2864 00da 0F8355FF 		jnc	.L221
 2864      FFFF
 218:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2865              		.loc 3 218 0
 2866 00e0 4889DF   		movq	%rbx, %rdi
 2867 00e3 E8000000 		call	_ZN7Fl_Tabs11redraw_tabsEv
 2867      00
 2868              	.LVL359:
 2869              	.LBB734:
 2870              	.LBB735:
 593:fltk-1.3.4-1/FL/Fl.H ****   /**
 2871              		.loc 6 593 0
 2872 00e8 8B050000 		movl	_ZN2Fl8e_numberE(%rip), %eax
 2872      0000
 2873              	.LBE735:
 2874              	.LBE734:
 219:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 2875              		.loc 3 219 0
 2876 00ee 83F806   		cmpl	$6, %eax
 2877 00f1 0F843EFF 		je	.L221
 2877      FFFF
 2878              	.LBB736:
 166:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2879              		.loc 3 166 0
 2880 00f7 83F807   		cmpl	$7, %eax
 2881 00fa 0F95C0   		setne	%al
 2882 00fd 0FB6C0   		movzbl	%al, %eax
 2883              	.LBE736:
 2884 0100 E93AFFFF 		jmp	.L231
 2884      FF
 2885              	.LVL360:
 2886              		.p2align 4,,10
 2887 0105 0F1F00   		.p2align 3
 2888              	.L226:
 224:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 2889              		.loc 3 224 0
 2890 0108 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 2890      0000
 2891 010e 3D53FF00 		cmpl	$65363, %eax
 2891      00
 2892 0113 0F84F702 		je	.L250
 2892      0000
 2893 0119 3D54FF00 		cmpl	$65364, %eax
 2893      00
 2894 011e 0F84CC02 		je	.L251
 2894      0000
 2895 0124 3D51FF00 		cmpl	$65361, %eax
 2895      00
 2896 0129 0F84E101 		je	.L316
 2896      0000
 249:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 2897              		.loc 3 249 0
 2898 012f BE080000 		movl	$8, %esi
 2898      00
 2899              	.LVL361:
 2900 0134 E8000000 		call	_ZN8Fl_Group6handleEi
 2900      00
 2901              	.LVL362:
 2902 0139 E901FFFF 		jmp	.L231
 2902      FF
 2903              	.LVL363:
 2904 013e 6690     		.p2align 4,,10
 2905              		.p2align 3
 2906              	.L227:
 2907              	.LBB737:
 196:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 2908              		.loc 3 196 0
 2909 0140 BE0B0000 		movl	$11, %esi
 2909      00
 2910              	.LVL364:
 2911 0145 E8000000 		call	_ZN8Fl_Group6handleEi
 2911      00
 2912              	.LVL365:
 2913              	.LBB738:
 2914              	.LBB739:
 102:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 2915              		.loc 3 102 0
 2916 014a 8B8B9000 		movl	144(%rbx), %ecx
 2916      0000
 2917              	.LBE739:
 2918              	.LBE738:
 196:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 2919              		.loc 3 196 0
 2920 0150 4189C4   		movl	%eax, %r12d
 2921              	.LVL366:
 2922              	.LBB742:
 2923              	.LBB743:
 2924              		.file 7 "fltk-1.3.4-1/FL/Fl_Tooltip.H"
   1:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
   2:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // "$Id: Fl_Tooltip.H 9706 2012-11-06 20:46:14Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
   4:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // Tooltip header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
   6:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
   8:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
  12:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
  14:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
  16:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
  18:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  19:fltk-1.3.4-1/FL/Fl_Tooltip.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Tooltip.H ****    Fl_Tooltip widget . */
  21:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  22:fltk-1.3.4-1/FL/Fl_Tooltip.H **** #ifndef Fl_Tooltip_H
  23:fltk-1.3.4-1/FL/Fl_Tooltip.H **** #define Fl_Tooltip_H
  24:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  25:fltk-1.3.4-1/FL/Fl_Tooltip.H **** #include <FL/Fl.H>
  26:fltk-1.3.4-1/FL/Fl_Tooltip.H **** #include <FL/Fl_Widget.H>
  27:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  28:fltk-1.3.4-1/FL/Fl_Tooltip.H **** /**
  29:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   The Fl_Tooltip class provides tooltip support for
  30:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   all FLTK widgets. It contains only static methods.
  31:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  32:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   \image html tooltip-options.png "Fl_Tooltip Options"
  33:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   \image latex src/tooltip-options.png "Fl_Tooltip Options" width=6cm
  34:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  35:fltk-1.3.4-1/FL/Fl_Tooltip.H **** */
  36:fltk-1.3.4-1/FL/Fl_Tooltip.H **** class FL_EXPORT Fl_Tooltip {
  37:fltk-1.3.4-1/FL/Fl_Tooltip.H **** public:
  38:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Gets the tooltip delay. The default delay is 1.0 seconds.  */
  39:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static float delay() { return delay_; }
  40:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Sets the tooltip delay. The default delay is 1.0 seconds.  */
  41:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void delay(float f) { delay_ = f; }
  42:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**
  43:fltk-1.3.4-1/FL/Fl_Tooltip.H ****     Gets the tooltip hover delay, the delay between tooltips.
  44:fltk-1.3.4-1/FL/Fl_Tooltip.H ****     The default delay is 0.2 seconds.
  45:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   */
  46:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static float hoverdelay() { return hoverdelay_; }
  47:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**
  48:fltk-1.3.4-1/FL/Fl_Tooltip.H ****     Sets the tooltip hover delay, the delay between tooltips.
  49:fltk-1.3.4-1/FL/Fl_Tooltip.H ****     The default delay is 0.2 seconds.
  50:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   */
  51:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void hoverdelay(float f) { hoverdelay_ = f; }
  52:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Returns non-zero if tooltips are enabled.  */
  53:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static int enabled() { return Fl::option(Fl::OPTION_SHOW_TOOLTIPS); }
  54:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Enables tooltips on all widgets (or disables if <i>b</i> is false).  */
  55:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void enable(int b = 1) { Fl::option(Fl::OPTION_SHOW_TOOLTIPS, (b!=0));}
  56:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Same as enable(0), disables tooltips on all widgets.  */
  57:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void disable() { enable(0); }
  58:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void (*enter)(Fl_Widget* w);
  59:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void enter_area(Fl_Widget* w, int X, int Y, int W, int H, const char* tip);
  60:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void (*exit)(Fl_Widget *w);
  61:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /** Gets the current widget target */
  62:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static Fl_Widget* current() {return widget_;}
 2925              		.loc 7 62 0
 2926 0153 488B2D00 		movq	_ZN10Fl_Tooltip7widget_E(%rip), %rbp
 2926      000000
 2927              	.LVL367:
 2928              	.LBE743:
 2929              	.LBE742:
 2930              	.LBB744:
 2931              	.LBB740:
 102:fltk-1.3.4-1/src/Fl_Tabs.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 2932              		.loc 3 102 0
 2933 015a 85C9     		testl	%ecx, %ecx
 2934 015c 0F854602 		jne	.L242
 2934      0000
 2935 0162 8B432C   		movl	44(%rbx), %eax
 2936              	.LVL368:
 2937              	.L243:
 2938              	.LBE740:
 2939              	.LBE744:
 199:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2940              		.loc 3 199 0
 2941 0165 85C0     		testl	%eax, %eax
 2942              	.LBB745:
 2943              	.LBB746:
 603:fltk-1.3.4-1/FL/Fl.H ****   /**
 2944              		.loc 6 603 0
 2945 0167 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 2945      0000
 2946              	.LBE746:
 2947              	.LBE745:
 199:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2948              		.loc 3 199 0
 2949 016d 0F881D03 		js	.L244
 2949      0000
 2950              	.LVL369:
 2951 0173 034324   		addl	36(%rbx), %eax
 2952 0176 89C1     		movl	%eax, %ecx
 200:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 2953              		.loc 3 200 0
 2954 0178 4489E0   		movl	%r12d, %eax
 199:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2955              		.loc 3 199 0
 2956 017b 39D1     		cmpl	%edx, %ecx
 2957 017d 0F8CBCFE 		jl	.L231
 2957      FFFF
 2958              	.LVL370:
 2959              	.L245:
 204:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 2960              		.loc 3 204 0
 2961 0183 8B350000 		movl	_ZN2Fl3e_xE(%rip), %esi
 2961      0000
 2962 0189 4889DF   		movq	%rbx, %rdi
 2963 018c E8000000 		call	_ZN7Fl_Tabs5whichEii
 2963      00
 2964              	.LVL371:
 205:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 2965              		.loc 3 205 0
 2966 0191 4885C0   		testq	%rax, %rax
 204:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 2967              		.loc 3 204 0
 2968 0194 4889C7   		movq	%rax, %rdi
 2969              	.LVL372:
 209:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 2970              		.loc 3 209 0
 2971 0197 4489E0   		movl	%r12d, %eax
 2972              	.LVL373:
 205:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 2973              		.loc 3 205 0
 2974 019a 480F44FB 		cmove	%rbx, %rdi
 2975              	.LVL374:
 207:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 2976              		.loc 3 207 0
 2977 019e 4839EF   		cmpq	%rbp, %rdi
 2978 01a1 0F8498FE 		je	.L231
 2978      FFFF
 2979              	.LVL375:
 2980 01a7 8944240C 		movl	%eax, 12(%rsp)
 208:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2981              		.loc 3 208 0
 2982 01ab FF150000 		call	*_ZN10Fl_Tooltip5enterE(%rip)
 2982      0000
 2983              	.LVL376:
 2984 01b1 8B44240C 		movl	12(%rsp), %eax
 2985 01b5 E985FEFF 		jmp	.L231
 2985      FF
 2986              	.LVL377:
 2987 01ba 660F1F44 		.p2align 4,,10
 2987      0000
 2988              		.p2align 3
 2989              	.L228:
 2990              	.LBE737:
 2991              	.LBB748:
 251:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 2992              		.loc 3 251 0 discriminator 1
 2993 01c0 8BBF9000 		movl	144(%rdi), %edi
 2993      0000
 2994 01c6 31ED     		xorl	%ebp, %ebp
 2995 01c8 4531E4   		xorl	%r12d, %r12d
 2996 01cb 85FF     		testl	%edi, %edi
 2997 01cd 7F1E     		jg	.L293
 2998 01cf E91C0100 		jmp	.L262
 2998      00
 2999              	.LVL378:
 3000              		.p2align 4,,10
 3001 01d4 0F1F4000 		.p2align 3
 3002              	.L259:
 251:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 3003              		.loc 3 251 0 is_stmt 0 discriminator 2
 3004 01d8 4183C401 		addl	$1, %r12d
 3005              	.LVL379:
 3006 01dc 4883C508 		addq	$8, %rbp
 3007 01e0 443BA390 		cmpl	144(%rbx), %r12d
 3007      000000
 3008 01e7 0F8D0301 		jge	.L262
 3008      0000
 3009              	.LVL380:
 3010              	.L293:
 3011              	.LBB749:
 3012              	.LBB750:
 3013              	.LBB751:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3014              		.loc 2 79 0 is_stmt 1
 3015 01ed 4889DF   		movq	%rbx, %rdi
 3016 01f0 E8000000 		call	_ZNK8Fl_Group5arrayEv
 3016      00
 3017              	.LVL381:
 3018 01f5 4C8B2C28 		movq	(%rax,%rbp), %r13
 3019              	.LVL382:
 3020              	.LBE751:
 3021              	.LBE750:
 3022              	.LBB752:
 253:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 3023              		.loc 3 253 0
 3024 01f9 31F6     		xorl	%esi, %esi
 3025 01fb 498B7D30 		movq	48(%r13), %rdi
 3026 01ff E8000000 		call	_ZN9Fl_Widget13test_shortcutEPKcb
 3026      00
 3027              	.LVL383:
 3028 0204 85C0     		testl	%eax, %eax
 3029 0206 74D0     		je	.L259
 3030              	.LVL384:
 3031              	.LBB753:
 3032              	.LBB754:
 3033              	.LBB755:
 660:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3034              		.loc 1 660 0
 3035 0208 418B6D60 		movl	96(%r13), %ebp
 3036              	.LBE755:
 3037              	.LBE754:
 255:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 3038              		.loc 3 255 0
 3039 020c 4C89EE   		movq	%r13, %rsi
 3040 020f 4889DF   		movq	%rbx, %rdi
 3041 0212 E8000000 		call	_ZN7Fl_Tabs5valueEP9Fl_Widget
 3041      00
 3042              	.LVL385:
 3043              	.LBB757:
 3044              	.LBB756:
 660:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3045              		.loc 1 660 0
 3046 0217 83E502   		andl	$2, %ebp
 3047              	.LVL386:
 3048              	.LBE756:
 3049              	.LBE757:
 256:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3050              		.loc 3 256 0
 3051 021a 85ED     		testl	%ebp, %ebp
 3052 021c 7407     		je	.L260
 3053              	.LVL387:
 3054              	.L312:
 3055              	.LBB758:
 3056              	.LBB759:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3057              		.loc 1 786 0 discriminator 1
 3058 021e 814B6080 		orl	$128, 96(%rbx)
 3058      000000
 3059              	.LVL388:
 3060              	.L260:
 3061              	.LBE759:
 3062              	.LBE758:
 3063              	.LBB760:
 3064              	.LBB761:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3065              		.loc 1 861 0
 3066 0225 488B5318 		movq	24(%rbx), %rdx
 3067 0229 4889DE   		movq	%rbx, %rsi
 3068 022c 4889DF   		movq	%rbx, %rdi
 3069 022f E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3069      00
 3070              	.LVL389:
 3071              	.LBE761:
 3072              	.LBE760:
 258:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 3073              		.loc 3 258 0
 3074 0234 B8010000 		movl	$1, %eax
 3074      00
 3075 0239 E901FEFF 		jmp	.L231
 3075      FF
 3076              	.LVL390:
 3077 023e 6690     		.p2align 4,,10
 3078              		.p2align 3
 3079              	.L224:
 3080              	.LBE753:
 3081              	.LBE752:
 3082              	.LBE749:
 3083              	.LBE748:
 173:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 3084              		.loc 3 173 0
 3085 0240 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 3085      0000
 3086 0246 8B350000 		movl	_ZN2Fl3e_xE(%rip), %esi
 3086      0000
 3087              	.LVL391:
 3088 024c E8000000 		call	_ZN7Fl_Tabs5whichEii
 3088      00
 3089              	.LVL392:
 3090              	.LBB762:
 174:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 3091              		.loc 3 174 0
 3092 0251 83FD02   		cmpl	$2, %ebp
 3093              	.LBE762:
 173:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 3094              		.loc 3 173 0
 3095 0254 4989C4   		movq	%rax, %r12
 3096              	.LVL393:
 3097              	.LBB763:
 174:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 3098              		.loc 3 174 0
 3099 0257 0F853EFE 		jne	.L237
 3099      FFFF
 3100              	.LBB716:
 175:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 3101              		.loc 3 175 0
 3102 025d 31F6     		xorl	%esi, %esi
 3103 025f 4889DF   		movq	%rbx, %rdi
 3104 0262 E8000000 		call	_ZN7Fl_Tabs4pushEP9Fl_Widget
 3104      00
 3105              	.LVL394:
 176:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 3106              		.loc 3 176 0
 3107 0267 4D85E4   		testq	%r12, %r12
 3108 026a 746F     		je	.L265
 3109              	.LBB717:
 3110              	.LBB718:
 3111              		.loc 6 1195 0
 3112 026c BF010000 		movl	$1, %edi
 3112      00
 3113 0271 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 3113      00
 3114              	.LVL395:
 3115              	.LBE718:
 3116              	.LBE717:
 176:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 3117              		.loc 3 176 0
 3118 0276 84C0     		testb	%al, %al
 3119 0278 7419     		je	.L239
 3120 027a 48391D00 		cmpq	%rbx, _ZN2Fl6focus_E(%rip)
 3120      000000
 3121 0281 7410     		je	.L239
 177:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 3122              		.loc 3 177 0
 3123 0283 4889DF   		movq	%rbx, %rdi
 3124 0286 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 3124      00
 3125              	.LVL396:
 178:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 3126              		.loc 3 178 0
 3127 028b 4889DF   		movq	%rbx, %rdi
 3128 028e E8000000 		call	_ZN7Fl_Tabs11redraw_tabsEv
 3128      00
 3129              	.LVL397:
 3130              	.L239:
 3131              	.LBB719:
 181:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 3132              		.loc 3 181 0 discriminator 1
 3133 0293 4C89E6   		movq	%r12, %rsi
 3134 0296 4889DF   		movq	%rbx, %rdi
 3135 0299 E8000000 		call	_ZN7Fl_Tabs5valueEP9Fl_Widget
 3135      00
 3136              	.LVL398:
 180:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 3137              		.loc 3 180 0 discriminator 1
 3138 029e 85C0     		testl	%eax, %eax
 3139 02a0 7466     		je	.L317
 3140              	.L241:
 3141              	.LBB720:
 185:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 3142              		.loc 3 185 0
 3143 02a2 488D7C24 		leaq	16(%rsp), %rdi
 3143      10
 3144 02a7 4C89E6   		movq	%r12, %rsi
 3145 02aa E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 3145      00
 3146              	.LVL399:
 3147              	.LBB721:
 3148              	.LBB722:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3149              		.loc 1 786 0
 3150 02af 814B6080 		orl	$128, 96(%rbx)
 3150      000000
 3151              	.LVL400:
 3152              	.LBE722:
 3153              	.LBE721:
 3154              	.LBB723:
 3155              	.LBB724:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3156              		.loc 1 861 0
 3157 02b6 488B5318 		movq	24(%rbx), %rdx
 3158 02ba 4889DE   		movq	%rbx, %rsi
 3159 02bd 4889DF   		movq	%rbx, %rdi
 3160 02c0 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3160      00
 3161              	.LVL401:
 3162              	.LBE724:
 3163              	.LBE723:
 188:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 3164              		.loc 3 188 0
 3165 02c5 48837C24 		cmpq	$0, 16(%rsp)
 3165      1000
 3166 02cb 0F84BF00 		je	.L318
 3166      0000
 185:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 3167              		.loc 3 185 0
 3168 02d1 488D7C24 		leaq	16(%rsp), %rdi
 3168      10
 3169 02d6 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 3169      00
 3170              	.LVL402:
 3171              	.L265:
 3172              	.LBE720:
 3173              	.LBE719:
 190:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 3174              		.loc 3 190 0
 3175 02db 4C89E7   		movq	%r12, %rdi
 3176 02de E8000000 		call	_ZN10Fl_Tooltip7currentEP9Fl_Widget
 3176      00
 3177              	.LVL403:
 3178              	.LBE716:
 3179              	.LBE763:
 194:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 3180              		.loc 3 194 0
 3181 02e3 B8010000 		movl	$1, %eax
 3181      00
 3182              	.LBB764:
 3183 02e8 E952FDFF 		jmp	.L231
 3183      FF
 3184              	.LVL404:
 3185 02ed 0F1F00   		.p2align 4,,10
 3186              		.p2align 3
 3187              	.L262:
 3188              	.LBE764:
 261:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 3189              		.loc 3 261 0
 3190 02f0 BE0C0000 		movl	$12, %esi
 3190      00
 3191 02f5 4889DF   		movq	%rbx, %rdi
 3192 02f8 E8000000 		call	_ZN8Fl_Group6handleEi
 3192      00
 3193              	.LVL405:
 3194 02fd E93DFDFF 		jmp	.L231
 3194      FF
 3195              	.LVL406:
 3196              		.p2align 4,,10
 3197 0302 660F1F44 		.p2align 3
 3197      0000
 3198              	.L317:
 3199              	.LBB765:
 3200              	.LBB728:
 3201              	.LBB726:
 181:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 3202              		.loc 3 181 0
 3203 0308 F6436F02 		testb	$2, 111(%rbx)
 3204 030c 7594     		jne	.L241
 3205 030e EBCB     		jmp	.L265
 3206              	.LVL407:
 3207              		.p2align 4,,10
 3208              		.p2align 3
 3209              	.L316:
 3210              	.LBE726:
 3211              	.LBE728:
 3212              	.LBE765:
 226:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 3213              		.loc 3 226 0
 3214 0310 8B979000 		movl	144(%rdi), %edx
 3214      0000
 3215 0316 85D2     		testl	%edx, %edx
 3216 0318 7507     		jne	.L253
 3217              	.LVL408:
 3218              	.L254:
 3219 031a 31C0     		xorl	%eax, %eax
 3220 031c E91EFDFF 		jmp	.L231
 3220      FF
 3221              	.LVL409:
 3222              	.L253:
 3223              	.LBB766:
 3224              	.LBB767:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3225              		.loc 2 79 0
 3226 0321 E8000000 		call	_ZNK8Fl_Group5arrayEv
 3226      00
 3227              	.LVL410:
 3228 0326 488B00   		movq	(%rax), %rax
 3229              	.LBE767:
 3230              	.LBE766:
 227:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 3231              		.loc 3 227 0
 3232 0329 F6406002 		testb	$2, 96(%rax)
 3233 032d 74EB     		je	.L254
 3234              	.LVL411:
 228:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 3235              		.loc 3 228 0 discriminator 1
 3236 032f 83BB9000 		cmpl	$1, 144(%rbx)
 3236      000001
 3237 0336 0F8E7101 		jle	.L274
 3237      0000
 228:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 3238              		.loc 3 228 0 is_stmt 0
 3239 033c 41BC0800 		movl	$8, %r12d
 3239      0000
 3240 0342 BD010000 		movl	$1, %ebp
 3240      00
 3241              	.LVL412:
 3242 0347 EB16     		jmp	.L256
 3243              	.LVL413:
 3244 0349 0F1F8000 		.p2align 4,,10
 3244      000000
 3245              		.p2align 3
 3246              	.L319:
 228:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 3247              		.loc 3 228 0 discriminator 2
 3248 0350 83C501   		addl	$1, %ebp
 3249              	.LVL414:
 3250 0353 4983C408 		addq	$8, %r12
 3251 0357 3BAB9000 		cmpl	144(%rbx), %ebp
 3251      0000
 3252 035d 7D12     		jge	.L255
 3253              	.LVL415:
 3254              	.L256:
 3255              	.LBB768:
 3256              	.LBB769:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3257              		.loc 2 79 0 is_stmt 1
 3258 035f 4889DF   		movq	%rbx, %rdi
 3259 0362 E8000000 		call	_ZNK8Fl_Group5arrayEv
 3259      00
 3260              	.LVL416:
 3261 0367 4A8B0420 		movq	(%rax,%r12), %rax
 3262              	.LBE769:
 3263              	.LBE768:
 229:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3264              		.loc 3 229 0
 3265 036b F6406002 		testb	$2, 96(%rax)
 3266 036f 75DF     		jne	.L319
 3267              	.LVL417:
 3268              	.L255:
 3269              	.LBB770:
 3270              	.LBB771:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3271              		.loc 2 79 0
 3272 0371 4889DF   		movq	%rbx, %rdi
 3273 0374 E8000000 		call	_ZNK8Fl_Group5arrayEv
 3273      00
 3274              	.LVL418:
 3275 0379 8D55FF   		leal	-1(%rbp), %edx
 3276              	.LBE771:
 3277              	.LBE770:
 230:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 3278              		.loc 3 230 0
 3279 037c 4889DF   		movq	%rbx, %rdi
 3280              	.LBB773:
 3281              	.LBB772:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3282              		.loc 2 79 0
 3283 037f 4863D2   		movslq	%edx, %rdx
 3284              	.LBE772:
 3285              	.LBE773:
 230:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 3286              		.loc 3 230 0
 3287 0382 488B34D0 		movq	(%rax,%rdx,8), %rsi
 3288 0386 E8000000 		call	_ZN7Fl_Tabs5valueEP9Fl_Widget
 3288      00
 3289              	.LVL419:
 3290 038b E98EFEFF 		jmp	.L312
 3290      FF
 3291              	.LVL420:
 3292              	.L318:
 3293              	.LBB774:
 3294              	.LBB729:
 3295              	.LBB727:
 3296              	.LBB725:
 188:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 3297              		.loc 3 188 0 discriminator 1
 3298 0390 488D7C24 		leaq	16(%rsp), %rdi
 3298      10
 3299 0395 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 3299      00
 3300              	.LVL421:
 3301 039a B8010000 		movl	$1, %eax
 3301      00
 3302 039f E99BFCFF 		jmp	.L231
 3302      FF
 3303              	.LVL422:
 3304              		.p2align 4,,10
 3305 03a4 0F1F4000 		.p2align 3
 3306              	.L242:
 3307              	.LBE725:
 3308              	.LBE727:
 3309              	.LBE729:
 3310              	.LBE774:
 3311              	.LBB775:
 3312              	.LBB747:
 3313              	.LBB741:
 3314 03a8 4889DF   		movq	%rbx, %rdi
 3315 03ab E8000000 		call	_ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
 3315      00
 3316              	.LVL423:
 3317 03b0 E9B0FDFF 		jmp	.L243
 3317      FF
 3318              	.LVL424:
 3319              		.p2align 4,,10
 3320 03b5 0F1F00   		.p2align 3
 3321              	.L232:
 3322              	.LBE741:
 3323              	.LBE747:
 3324              	.LBE775:
 3325              	.LBB776:
 3326              	.LBB714:
 3327              	.LBB711:
 3328 03b8 E8000000 		call	_ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
 3328      00
 3329              	.LVL425:
 3330 03bd E9AFFCFF 		jmp	.L233
 3330      FF
 3331              	.LVL426:
 3332              		.p2align 4,,10
 3333 03c2 660F1F44 		.p2align 3
 3333      0000
 3334              	.L234:
 3335              	.LBE711:
 3336              	.LBE714:
 168:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 3337              		.loc 3 168 0
 3338 03c8 8B4B2C   		movl	44(%rbx), %ecx
 3339 03cb 034B24   		addl	36(%rbx), %ecx
 3340 03ce 01C8     		addl	%ecx, %eax
 3341 03d0 39D0     		cmpl	%edx, %eax
 3342 03d2 0F8EB2FC 		jle	.L235
 3342      FFFF
 3343              	.LVL427:
 3344              	.L236:
 166:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 3345              		.loc 3 166 0 discriminator 1
 3346 03d8 BE010000 		movl	$1, %esi
 3346      00
 3347 03dd 4889DF   		movq	%rbx, %rdi
 3348 03e0 E8000000 		call	_ZN8Fl_Group6handleEi
 3348      00
 3349              	.LVL428:
 3350 03e5 E955FCFF 		jmp	.L231
 3350      FF
 3351              	.LVL429:
 3352 03ea 660F1F44 		.p2align 4,,10
 3352      0000
 3353              		.p2align 3
 3354              	.L251:
 3355              	.LBE776:
 244:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 3356              		.loc 3 244 0
 3357 03f0 E8000000 		call	_ZN9Fl_Widget6redrawEv
 3357      00
 3358              	.LVL430:
 245:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 3359              		.loc 3 245 0
 3360 03f5 BE060000 		movl	$6, %esi
 3360      00
 3361 03fa 4889DF   		movq	%rbx, %rdi
 3362 03fd E8000000 		call	_ZN8Fl_Group6handleEi
 3362      00
 3363              	.LVL431:
 3364 0402 E938FCFF 		jmp	.L231
 3364      FF
 3365              	.LVL432:
 3366 0407 660F1F84 		.p2align 4,,10
 3366      00000000 
 3366      00
 3367              		.p2align 3
 3368              	.L250:
 3369 0410 8BAF9000 		movl	144(%rdi), %ebp
 3369      0000
 3370              	.LVL433:
 235:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 3371              		.loc 3 235 0
 3372 0416 85ED     		testl	%ebp, %ebp
 3373 0418 0F84FCFE 		je	.L254
 3373      FFFF
 3374              	.LVL434:
 3375              	.LBB777:
 3376              	.LBB778:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3377              		.loc 2 79 0
 3378 041e E8000000 		call	_ZNK8Fl_Group5arrayEv
 3378      00
 3379              	.LVL435:
 3380 0423 8D55FF   		leal	-1(%rbp), %edx
 3381 0426 4863D2   		movslq	%edx, %rdx
 3382 0429 488B04D0 		movq	(%rax,%rdx,8), %rax
 3383              	.LBE778:
 3384              	.LBE777:
 236:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3385              		.loc 3 236 0
 3386 042d F6406002 		testb	$2, 96(%rax)
 3387 0431 0F84E3FE 		je	.L254
 3387      FFFF
 3388              	.LVL436:
 237:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 3389              		.loc 3 237 0 discriminator 1
 3390 0437 8B839000 		movl	144(%rbx), %eax
 3390      0000
 3391 043d 85C0     		testl	%eax, %eax
 3392 043f 7E76     		jle	.L275
 237:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 3393              		.loc 3 237 0 is_stmt 0
 3394 0441 4531E4   		xorl	%r12d, %r12d
 3395 0444 31ED     		xorl	%ebp, %ebp
 3396 0446 EB17     		jmp	.L258
 3397              	.LVL437:
 3398 0448 0F1F8400 		.p2align 4,,10
 3398      00000000 
 3399              		.p2align 3
 3400              	.L320:
 237:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 3401              		.loc 3 237 0 discriminator 2
 3402 0450 83C501   		addl	$1, %ebp
 3403              	.LVL438:
 3404 0453 4983C408 		addq	$8, %r12
 3405 0457 3BAB9000 		cmpl	144(%rbx), %ebp
 3405      0000
 3406 045d 7D12     		jge	.L257
 3407              	.LVL439:
 3408              	.L258:
 3409              	.LBB779:
 3410              	.LBB780:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3411              		.loc 2 79 0 is_stmt 1
 3412 045f 4889DF   		movq	%rbx, %rdi
 3413 0462 E8000000 		call	_ZNK8Fl_Group5arrayEv
 3413      00
 3414              	.LVL440:
 3415 0467 4A8B0420 		movq	(%rax,%r12), %rax
 3416              	.LBE780:
 3417              	.LBE779:
 238:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 3418              		.loc 3 238 0
 3419 046b F6406002 		testb	$2, 96(%rax)
 3420 046f 75DF     		jne	.L320
 3421              	.LVL441:
 3422              	.L257:
 3423              	.LBB781:
 3424              	.LBB782:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3425              		.loc 2 79 0
 3426 0471 4889DF   		movq	%rbx, %rdi
 3427 0474 E8000000 		call	_ZNK8Fl_Group5arrayEv
 3427      00
 3428              	.LVL442:
 3429 0479 8D5501   		leal	1(%rbp), %edx
 3430              	.LBE782:
 3431              	.LBE781:
 239:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 3432              		.loc 3 239 0
 3433 047c 4889DF   		movq	%rbx, %rdi
 3434              	.LBB784:
 3435              	.LBB783:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3436              		.loc 2 79 0
 3437 047f 4863D2   		movslq	%edx, %rdx
 3438              	.LBE783:
 3439              	.LBE784:
 239:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 3440              		.loc 3 239 0
 3441 0482 488B34D0 		movq	(%rax,%rdx,8), %rsi
 3442 0486 E8000000 		call	_ZN7Fl_Tabs5valueEP9Fl_Widget
 3442      00
 3443              	.LVL443:
 3444 048b E98EFDFF 		jmp	.L312
 3444      FF
 3445              	.LVL444:
 3446              		.p2align 4,,10
 3447              		.p2align 3
 3448              	.L244:
 3449              	.LBB785:
 201:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 3450              		.loc 3 201 0
 3451 0490 8B4B2C   		movl	44(%rbx), %ecx
 3452 0493 034B24   		addl	36(%rbx), %ecx
 3453 0496 01C1     		addl	%eax, %ecx
 202:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 3454              		.loc 3 202 0
 3455 0498 4489E0   		movl	%r12d, %eax
 201:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 3456              		.loc 3 201 0
 3457 049b 39CA     		cmpl	%ecx, %edx
 3458 049d 0F8C9CFB 		jl	.L231
 3458      FFFF
 3459              	.LVL445:
 3460 04a3 E9DBFCFF 		jmp	.L245
 3460      FF
 3461              	.LVL446:
 3462              	.L315:
 3463              	.LBE785:
 3464              	.LBE786:
 3465              	.LBE788:
 268:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 3466              		.loc 3 268 0
 3467 04a8 E8000000 		call	__stack_chk_fail
 3467      00
 3468              	.LVL447:
 3469              	.L274:
 3470              	.LBB789:
 3471              	.LBB787:
 228:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 3472              		.loc 3 228 0
 3473 04ad BD010000 		movl	$1, %ebp
 3473      00
 3474              	.LVL448:
 3475 04b2 E9BAFEFF 		jmp	.L255
 3475      FF
 3476              	.LVL449:
 3477              	.L275:
 237:fltk-1.3.4-1/src/Fl_Tabs.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 3478              		.loc 3 237 0
 3479 04b7 31ED     		xorl	%ebp, %ebp
 3480 04b9 EBB6     		jmp	.L257
 3481              	.LBE787:
 3482              	.LBE789:
 3483              		.cfi_endproc
 3484              	.LFE492:
 3486              		.section	.text.unlikely._ZN7Fl_Tabs6handleEi
 3487              	.LCOLDE18:
 3488              		.section	.text._ZN7Fl_Tabs6handleEi
 3489              	.LHOTE18:
 3490              		.weak	_ZTS7Fl_Tabs
 3491              		.section	.rodata._ZTS7Fl_Tabs,"aG",@progbits,_ZTS7Fl_Tabs,comdat
 3492              		.align 8
 3495              	_ZTS7Fl_Tabs:
 3496 0000 37466C5F 		.string	"7Fl_Tabs"
 3496      54616273 
 3496      00
 3497              		.weak	_ZTI7Fl_Tabs
 3498              		.section	.rodata._ZTI7Fl_Tabs,"aG",@progbits,_ZTI7Fl_Tabs,comdat
 3499              		.align 8
 3502              	_ZTI7Fl_Tabs:
 3503 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3503      00000000 
 3504 0008 00000000 		.quad	_ZTS7Fl_Tabs
 3504      00000000 
 3505 0010 00000000 		.quad	_ZTI8Fl_Group
 3505      00000000 
 3506              		.weak	_ZTV7Fl_Tabs
 3507              		.section	.rodata._ZTV7Fl_Tabs,"aG",@progbits,_ZTV7Fl_Tabs,comdat
 3508              		.align 8
 3511              	_ZTV7Fl_Tabs:
 3512 0000 00000000 		.quad	0
 3512      00000000 
 3513 0008 00000000 		.quad	_ZTI7Fl_Tabs
 3513      00000000 
 3514 0010 00000000 		.quad	_ZN7Fl_TabsD1Ev
 3514      00000000 
 3515 0018 00000000 		.quad	_ZN7Fl_TabsD0Ev
 3515      00000000 
 3516 0020 00000000 		.quad	_ZN7Fl_Tabs4drawEv
 3516      00000000 
 3517 0028 00000000 		.quad	_ZN7Fl_Tabs6handleEi
 3517      00000000 
 3518 0030 00000000 		.quad	_ZN8Fl_Group6resizeEiiii
 3518      00000000 
 3519 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3519      00000000 
 3520 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3520      00000000 
 3521 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 3521      00000000 
 3522 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3522      00000000 
 3523 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3523      00000000 
 3524              		.text
 3525              	.Letext0:
 3526              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 3527              	.Letext_cold0:
 3528              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3529              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3530              		.file 10 "/usr/include/libio.h"
 3531              		.file 11 "fltk-1.3.4-1/FL/fl_types.h"
 3532              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 3533              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 3534              		.file 14 "fltk-1.3.4-1/FL/Fl_Tabs.H"
 3535              		.file 15 "/usr/include/stdio.h"
 3536              		.file 16 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Tabs.cxx
     /tmp/ccsEw5NK.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccsEw5NK.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccsEw5NK.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccsEw5NK.s:89     .text._ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21:0000000000000000 _ZN7Fl_Tabs10tab_heightEv.part.18.constprop.21
     /tmp/ccsEw5NK.s:213    .text._ZN7Fl_Tabs10tab_heightEv:0000000000000000 _ZN7Fl_Tabs10tab_heightEv
     /tmp/ccsEw5NK.s:248    .text._ZN7Fl_Tabs11redraw_tabsEv:0000000000000000 _ZN7Fl_Tabs11redraw_tabsEv
     /tmp/ccsEw5NK.s:353    .text._ZN7Fl_Tabs4pushEP9Fl_Widget:0000000000000000 _ZN7Fl_Tabs4pushEP9Fl_Widget
     /tmp/ccsEw5NK.s:446    .text._ZN7Fl_Tabs5valueEv:0000000000000000 _ZN7Fl_Tabs5valueEv
     /tmp/ccsEw5NK.s:568    .text._ZN7Fl_Tabs5valueEP9Fl_Widget:0000000000000000 _ZN7Fl_Tabs5valueEP9Fl_Widget
     /tmp/ccsEw5NK.s:689    .text._ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti:0000000000000000 _ZN7Fl_Tabs8draw_tabEiiiiP9Fl_Widgeti
     /tmp/ccsEw5NK.s:1204   .text._ZN7Fl_TabsC2EiiiiPKc:0000000000000000 _ZN7Fl_TabsC2EiiiiPKc
     /tmp/ccsEw5NK.s:3511   .rodata._ZTV7Fl_Tabs:0000000000000000 _ZTV7Fl_Tabs
     /tmp/ccsEw5NK.s:1204   .text._ZN7Fl_TabsC2EiiiiPKc:0000000000000000 _ZN7Fl_TabsC1EiiiiPKc
     /tmp/ccsEw5NK.s:1261   .text._ZN7Fl_Tabs11client_areaERiS0_S0_S0_i:0000000000000000 _ZN7Fl_Tabs11client_areaERiS0_S0_S0_i
     /tmp/ccsEw5NK.s:1529   .text._ZN7Fl_Tabs19clear_tab_positionsEv:0000000000000000 _ZN7Fl_Tabs19clear_tab_positionsEv
     /tmp/ccsEw5NK.s:1581   .text._ZN7Fl_Tabs13tab_positionsEv:0000000000000000 _ZN7Fl_Tabs13tab_positionsEv
     /tmp/ccsEw5NK.s:1976   .text._ZN7Fl_Tabs4drawEv:0000000000000000 _ZN7Fl_Tabs4drawEv
     /tmp/ccsEw5NK.s:2402   .text._ZN7Fl_Tabs5whichEii:0000000000000000 _ZN7Fl_Tabs5whichEii
     /tmp/ccsEw5NK.s:2604   .text._ZN7Fl_TabsD2Ev:0000000000000000 _ZN7Fl_TabsD2Ev
     /tmp/ccsEw5NK.s:2604   .text._ZN7Fl_TabsD2Ev:0000000000000000 _ZN7Fl_TabsD1Ev
     /tmp/ccsEw5NK.s:2649   .text._ZN7Fl_TabsD0Ev:0000000000000000 _ZN7Fl_TabsD0Ev
     /tmp/ccsEw5NK.s:2694   .text._ZN7Fl_Tabs6handleEi:0000000000000000 _ZN7Fl_Tabs6handleEi
     /tmp/ccsEw5NK.s:3495   .rodata._ZTS7Fl_Tabs:0000000000000000 _ZTS7Fl_Tabs
     /tmp/ccsEw5NK.s:3502   .rodata._ZTI7Fl_Tabs:0000000000000000 _ZTI7Fl_Tabs
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
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
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
_ZNK8Fl_Group5arrayEv
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN9Fl_Widget6damageEhiiii
_ZN2Fl6box_dhE10Fl_Boxtype
fl_draw_shortcut
fl_graphics_driver
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_ZNK9Fl_Widget10draw_labelEiiiij
_ZN2Fl6focus_E
_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
_ZN8Fl_GroupC2EiiiiPKc
_Z9fl_heightii
free
_ZN2Fl6box_dxE10Fl_Boxtype
_ZNK8Fl_Label7measureERiS0_
malloc
__stack_chk_fail
_ZNK8Fl_Group12update_childER9Fl_Widget
_ZNK8Fl_Group10draw_childER9Fl_Widget
_ZN8Fl_GroupD2Ev
_ZdlPv
_ZN8Fl_Group6handleEi
_ZN2Fl3e_yE
_ZN2Fl3e_xE
_ZN2Fl6optionENS_9Fl_OptionE
_ZN2Fl8e_numberE
_ZN2Fl8e_keysymE
_ZN10Fl_Tooltip7widget_E
_ZN10Fl_Tooltip5enterE
_ZN9Fl_Widget13test_shortcutEPKcb
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZN2Fl5focusEP9Fl_Widget
_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
_ZN17Fl_Widget_TrackerD1Ev
_ZN10Fl_Tooltip7currentEP9Fl_Widget
_ZN9Fl_Widget6redrawEv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Group
_ZN8Fl_Group6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
