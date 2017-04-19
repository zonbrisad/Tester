   1              		.file	"Fl_Browser_.cxx"
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
  81              		.section	.text.unlikely._ZNK11Fl_Browser_9item_lastEv,"axG",@progbits,_ZNK11Fl_Browser_9item_lastE
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZNK11Fl_Browser_9item_lastEv,"axG",@progbits,_ZNK11Fl_Browser_9item_lastEv,comdat
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.weak	_ZNK11Fl_Browser_9item_lastEv
  90              	_ZNK11Fl_Browser_9item_lastEv:
  91              	.LFB278:
  92              		.file 3 "fltk-1.3.4-1/FL/Fl_Browser_.H"
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
  93              		.loc 3 122 0
  94              		.cfi_startproc
  95              	.LVL3:
  96              		.loc 3 122 0
  97 0000 31C0     		xorl	%eax, %eax
  98 0002 C3       		ret
  99              		.cfi_endproc
 100              	.LFE278:
 102              		.section	.text.unlikely._ZNK11Fl_Browser_9item_lastEv,"axG",@progbits,_ZNK11Fl_Browser_9item_lastE
 103              	.LCOLDE3:
 104              		.section	.text._ZNK11Fl_Browser_9item_lastEv,"axG",@progbits,_ZNK11Fl_Browser_9item_lastEv,comdat
 105              	.LHOTE3:
 106              		.section	.text.unlikely._ZNK11Fl_Browser_9item_textEPv,"axG",@progbits,_ZNK11Fl_Browser_9item_text
 107              		.align 2
 108              	.LCOLDB4:
 109              		.section	.text._ZNK11Fl_Browser_9item_textEPv,"axG",@progbits,_ZNK11Fl_Browser_9item_textEPv,comda
 110              	.LHOTB4:
 111              		.align 2
 112              		.p2align 4,,15
 113              		.weak	_ZNK11Fl_Browser_9item_textEPv
 115              	_ZNK11Fl_Browser_9item_textEPv:
 116              	.LFB279:
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
 117              		.loc 3 151 0
 118              		.cfi_startproc
 119              	.LVL4:
 120              		.loc 3 151 0
 121 0000 31C0     		xorl	%eax, %eax
 122 0002 C3       		ret
 123              		.cfi_endproc
 124              	.LFE279:
 126              		.section	.text.unlikely._ZNK11Fl_Browser_9item_textEPv,"axG",@progbits,_ZNK11Fl_Browser_9item_text
 127              	.LCOLDE4:
 128              		.section	.text._ZNK11Fl_Browser_9item_textEPv,"axG",@progbits,_ZNK11Fl_Browser_9item_textEPv,comda
 129              	.LHOTE4:
 130              		.section	.text.unlikely._ZN11Fl_Browser_9item_swapEPvS0_,"axG",@progbits,_ZN11Fl_Browser_9item_swa
 131              		.align 2
 132              	.LCOLDB5:
 133              		.section	.text._ZN11Fl_Browser_9item_swapEPvS0_,"axG",@progbits,_ZN11Fl_Browser_9item_swapEPvS0_,c
 134              	.LHOTB5:
 135              		.align 2
 136              		.p2align 4,,15
 137              		.weak	_ZN11Fl_Browser_9item_swapEPvS0_
 139              	_ZN11Fl_Browser_9item_swapEPvS0_:
 140              	.LFB280:
 152:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 153:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This optional method should be provided by the subclass 
 154:fltk-1.3.4-1/FL/Fl_Browser_.H ****     to efficiently swap browser items \p a and \p b, such as for sorting.
 155:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \param[in] a,b The two items to be swapped.
 156:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 157:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void item_swap(void *a,void *b) { (void)a; (void)b; }
 141              		.loc 3 157 0
 142              		.cfi_startproc
 143              	.LVL5:
 144 0000 F3C3     		rep ret
 145              		.cfi_endproc
 146              	.LFE280:
 148              		.section	.text.unlikely._ZN11Fl_Browser_9item_swapEPvS0_,"axG",@progbits,_ZN11Fl_Browser_9item_swa
 149              	.LCOLDE5:
 150              		.section	.text._ZN11Fl_Browser_9item_swapEPvS0_,"axG",@progbits,_ZN11Fl_Browser_9item_swapEPvS0_,c
 151              	.LHOTE5:
 152              		.section	.text.unlikely._ZNK11Fl_Browser_7item_atEi,"axG",@progbits,_ZNK11Fl_Browser_7item_atEi,co
 153              		.align 2
 154              	.LCOLDB6:
 155              		.section	.text._ZNK11Fl_Browser_7item_atEi,"axG",@progbits,_ZNK11Fl_Browser_7item_atEi,comdat
 156              	.LHOTB6:
 157              		.align 2
 158              		.p2align 4,,15
 159              		.weak	_ZNK11Fl_Browser_7item_atEi
 161              	_ZNK11Fl_Browser_7item_atEi:
 162              	.LFB281:
 158:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 159:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass 
 160:fltk-1.3.4-1/FL/Fl_Browser_.H ****     to return the item for the specified \p index. 
 161:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \param[in] index The \p index of the item to be returned
 162:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \returns The item at the specified \p index.
 163:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 164:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void *item_at(int index) const { (void)index; return 0L; }
 163              		.loc 3 164 0
 164              		.cfi_startproc
 165              	.LVL6:
 166              		.loc 3 164 0
 167 0000 31C0     		xorl	%eax, %eax
 168 0002 C3       		ret
 169              		.cfi_endproc
 170              	.LFE281:
 172              		.section	.text.unlikely._ZNK11Fl_Browser_7item_atEi,"axG",@progbits,_ZNK11Fl_Browser_7item_atEi,co
 173              	.LCOLDE6:
 174              		.section	.text._ZNK11Fl_Browser_7item_atEi,"axG",@progbits,_ZNK11Fl_Browser_7item_atEi,comdat
 175              	.LHOTE6:
 176              		.section	.text.unlikely._ZNK11Fl_Browser_17item_quick_heightEPv,"ax",@progbits
 177              		.align 2
 178              	.LCOLDB7:
 179              		.section	.text._ZNK11Fl_Browser_17item_quick_heightEPv,"ax",@progbits
 180              	.LHOTB7:
 181              		.align 2
 182              		.p2align 4,,15
 183              		.globl	_ZNK11Fl_Browser_17item_quick_heightEPv
 185              	_ZNK11Fl_Browser_17item_quick_heightEPv:
 186              	.LFB539:
 187              		.file 4 "fltk-1.3.4-1/src/Fl_Browser_.cxx"
   1:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    1              		.file	"Fl_Browser_.cxx"
   2:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   17              	.LFB233:
  17:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 567:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 574:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 588:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 625:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 628:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 629:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 633:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 634:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 636:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 638:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 639:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 640:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 641:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 642:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 643:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 644:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 645:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 646:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 647:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 648:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 649:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 650:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 651:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 652:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 653:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 654:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 655:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 656:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 666:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 669:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 672:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 675:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 678:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 680:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 690:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 709:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 716:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 717:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 718:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 722:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 725:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 728:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 729:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 730:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 731:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 732:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 734:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 735:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 736:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 737:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 738:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 739:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 740:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 741:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 742:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 743:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 744:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 745:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 746:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 747:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 748:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 749:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 750:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 751:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 753:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 754:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 755:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 756:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 757:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 758:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 759:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 760:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 761:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 762:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 763:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 765:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 767:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 768:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 769:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 770:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 772:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 773:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 774:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 775:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 776:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 777:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 778:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 779:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 780:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 781:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 782:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 783:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 784:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callb
 785:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  768:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 786:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 787:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 788:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 789:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 790:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 791:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 792:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 793:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 794:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 795:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 796:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 797:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 798:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 799:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 800:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 801:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 802:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 803:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 804:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 805:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 806:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 807:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 808:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 809:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 810:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 811:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 812:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 813:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 814:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 815:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 816:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 817:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 818:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 819:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 821:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 822:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 823:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 824:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 825:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 826:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 827:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 828:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 829:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 830:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 831:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 832:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that
 833:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 834:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 835:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 836:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 837:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 838:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  821:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 839:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 840:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 841:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 842:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 843:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 844:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 845:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 846:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 847:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 848:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 849:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 850:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 851:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 852:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 853:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 854:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 855:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 856:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 857:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 858:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 859:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on th
 860:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 861:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 862:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 863:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 864:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 865:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 866:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 867:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 868:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 869:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 871:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 872:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 873:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 874:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 875:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 876:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  859:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 877:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 878:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 879:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 880:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 881:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  864:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with ar
 882:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 883:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 884:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 885:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  868:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 886:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 887:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 888:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 889:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 890:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 891:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 892:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  875:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 893:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  876:fltk-1.3.4-1/FL/Fl_Widget.H ****   int test_shortcut();
 894:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 895:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  878:fltk-1.3.4-1/FL/Fl_Widget.H ****   static unsigned int label_shortcut(const char *t);
 896:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 897:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 898:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 899:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 900:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  883:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _clear_fullscreen() {flags_ &= ~FULLSCREEN;}
 901:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 902:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  885:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if w is a child of this widget.
 903:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 904:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  887:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return Returns 1 if \p w is a child of this widget, or
 905:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 906:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 907:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 908:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  891:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 909:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  892:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if this widget is a child of \p wgt.
 910:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  893:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns 1 if this widget is a child of \p wgt, or is
 911:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 912:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 913:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 914:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 915:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  898:fltk-1.3.4-1/FL/Fl_Widget.H ****   int inside(const Fl_Widget* wgt) const {return wgt ? wgt->c
 916:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 917:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 918:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 919:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  902:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 920:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  903:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw();
 921:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  904:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 922:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  905:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the label.
 923:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for t
 924:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  907:fltk-1.3.4-1/FL/Fl_Widget.H ****      of a widget.
 925:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  908:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 926:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 927:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  910:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 928:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 929:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widge
 930:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 931:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  914:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a bitmap of flags describing the kind of damage
 932:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  915:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), clear_damage(uchar)
 933:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  916:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 934:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 935:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 936:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  919:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears or sets the damage flags.
 937:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 938:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  921:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 939:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>a
 940:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 941:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  924:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 942:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 943:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 944:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 945:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  928:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c new bitmask of damage flags (default: 0)
 946:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 947:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 948:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 949:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 950:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 951:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 952:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  935:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 953:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 954:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 955:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 956:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 957:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  940:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for an area inside the widget.
 958:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  941:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 959:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  942:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 960:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 961:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  944:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 962:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  945:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 963:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 964:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 965:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  948:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int, Fl_Align) const;
 966:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 967:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label 
 968:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  951:fltk-1.3.4-1/FL/Fl_Widget.H ****       Labels with images will return w() and h() of the image
 969:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  952:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 970:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 971:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  954:fltk-1.3.4-1/FL/Fl_Widget.H ****       the arguments \p ww and \p hh and word wrapping
 972:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  955:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see fl_measure(const char*, int&, int&, int)
 973:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 974:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  957:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure_label(int& ww, int& hh) const {label_.measure(
 975:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  958:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 976:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  959:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* window() const ;
 977:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 978:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  961:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window_offset(int& xoff, int& yoff) const;
 979:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  962:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 980:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 981:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  964:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 982:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  965:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 983:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 984:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  967:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 985:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  968:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 986:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  969:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Group-specific methods.
 987:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  970:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 988:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  971:fltk-1.3.4-1/FL/Fl_Widget.H ****       Example:
 989:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  972:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 990:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  973:fltk-1.3.4-1/FL/Fl_Widget.H ****       void my_callback (Fl_Widget *w, void *) {
 991:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  974:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Group *g = w->as_group();
 992:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  975:fltk-1.3.4-1/FL/Fl_Widget.H **** 	if (g)
 993:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  976:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This group has %d children\n",g->children());
 994:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  977:fltk-1.3.4-1/FL/Fl_Widget.H **** 	else
 995:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  978:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This widget is not a group!\n");
 996:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  979:fltk-1.3.4-1/FL/Fl_Widget.H ****       }
 997:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  980:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 998:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  981:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 999:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  982:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Grou
1000:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1001:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
1002:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  985:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1003:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  986:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Group* as_group() {return 0;}
1004:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  987:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1005:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  988:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Window pointer if this widget is an Fl_Wi
1006:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  989:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1007:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
1008:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  991:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Window. If 
1009:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
1010:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  993:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
1011:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
1012:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  995:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1013:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Wind
1014:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1015:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  998:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_gl_window()
1016:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  999:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1017:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1000:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Window* as_window() {return 0;}
1018:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   19              		.loc 1 1000 0
1019:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   20              		.cfi_startproc
1020:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   21              	.LVL0:
1021:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   22              		.loc 1 1000 0
1022:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   23 0000 31C0     		xorl	%eax, %eax
1023:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   24 0002 C3       		ret
1024:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   25              		.cfi_endproc
1025:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   26              	.LFE233:
1026:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
1027:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   29              	.LCOLDE0:
1028:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   30              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
1029:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   31              	.LHOTE0:
1030:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   32              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
1031:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   33              		.align 2
1032:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   34              	.LCOLDB1:
1033:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   35              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
1034:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   36              	.LHOTB1:
1035:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   37              		.align 2
1036:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   38              		.p2align 4,,15
1037:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   39              		.weak	_ZN9Fl_Widget12as_gl_windowEv
1038:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   41              	_ZN9Fl_Widget12as_gl_windowEv:
1039:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   42              	.LFB234:
1040:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1001:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1041:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1002:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Gl_Window pointer if this widget is an Fl
1042:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1043:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1004:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 188              		.loc 4 1043 0
 189              		.cfi_startproc
 190              	.LVL7:
1044:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1005:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Gl_Window. 
 191              		.loc 4 1044 0
 192 0000 488B07   		movq	(%rdi), %rax
 193 0003 488B4070 		movq	112(%rax), %rax
 194 0007 FFE0     		jmp	*%rax
 195              	.LVL8:
 196              		.cfi_endproc
 197              	.LFE539:
 199              		.section	.text.unlikely._ZNK11Fl_Browser_17item_quick_heightEPv
 200              	.LCOLDE7:
 201              		.section	.text._ZNK11Fl_Browser_17item_quick_heightEPv
 202              	.LHOTE7:
 203              		.section	.text.unlikely._ZNK11Fl_Browser_11incr_heightEv,"ax",@progbits
 204              		.align 2
 205              	.LCOLDB8:
 206              		.section	.text._ZNK11Fl_Browser_11incr_heightEv,"ax",@progbits
 207              	.LHOTB8:
 208              		.align 2
 209              		.p2align 4,,15
 210              		.globl	_ZNK11Fl_Browser_11incr_heightEv
 212              	_ZNK11Fl_Browser_11incr_heightEv:
 213              	.LFB540:
1045:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
1046:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1007:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1047:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1008:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Gl_W
1048:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1009:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1049:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1010:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_window()
1050:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1051:fltk-1.3.4-1/src/Fl_Browser_.cxx **** 1012:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual class Fl_Gl_Window* as_gl_window() {return 0;}
1052:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   43              		.loc 1 1012 0
1053:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   44              		.cfi_startproc
 214              		.loc 4 1053 0
 215              		.cfi_startproc
 216              	.LVL9:
 217 0000 55       		pushq	%rbp
 218              		.cfi_def_cfa_offset 16
 219              		.cfi_offset 6, -16
 220 0001 53       		pushq	%rbx
 221              		.cfi_def_cfa_offset 24
 222              		.cfi_offset 3, -24
 223 0002 4889FB   		movq	%rdi, %rbx
 224 0005 4883EC08 		subq	$8, %rsp
 225              		.cfi_def_cfa_offset 32
1054:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   45              	.LVL1:
 226              		.loc 4 1054 0
 227 0009 488B07   		movq	(%rdi), %rax
 228 000c 488BA880 		movq	128(%rax), %rbp
 228      000000
 229 0013 FF5050   		call	*80(%rax)
 230              	.LVL10:
1055:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   46              		.loc 1 1012 0
 231              		.loc 4 1055 0
 232 0016 4883C408 		addq	$8, %rsp
 233              		.cfi_def_cfa_offset 24
1054:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   45              	.LVL1:
 234              		.loc 4 1054 0
 235 001a 4889C6   		movq	%rax, %rsi
 236 001d 4889DF   		movq	%rbx, %rdi
 237 0020 4889E8   		movq	%rbp, %rax
 238              		.loc 4 1055 0
 239 0023 5B       		popq	%rbx
 240              		.cfi_def_cfa_offset 16
 241              	.LVL11:
 242 0024 5D       		popq	%rbp
 243              		.cfi_def_cfa_offset 8
1054:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   45              	.LVL1:
 244              		.loc 4 1054 0
 245 0025 FFE0     		jmp	*%rax
 246              	.LVL12:
 247              		.cfi_endproc
 248              	.LFE540:
 250              		.section	.text.unlikely._ZNK11Fl_Browser_11incr_heightEv
 251              	.LCOLDE8:
 252              		.section	.text._ZNK11Fl_Browser_11incr_heightEv
 253              	.LHOTE8:
 254              		.section	.text.unlikely._ZNK11Fl_Browser_11full_heightEv,"ax",@progbits
 255              		.align 2
 256              	.LCOLDB9:
 257              		.section	.text._ZNK11Fl_Browser_11full_heightEv,"ax",@progbits
 258              	.LHOTB9:
 259              		.align 2
 260              		.p2align 4,,15
 261              		.globl	_ZNK11Fl_Browser_11full_heightEv
 263              	_ZNK11Fl_Browser_11full_heightEv:
 264              	.LFB541:
1056:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   47 0000 31C0     		xorl	%eax, %eax
1057:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   48 0002 C3       		ret
1058:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   49              		.cfi_endproc
1059:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   50              	.LFE234:
1060:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   52              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
1061:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   53              	.LCOLDE1:
1062:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   54              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
1063:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   55              	.LHOTE1:
1064:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   56              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
 265              		.loc 4 1064 0
 266              		.cfi_startproc
 267              	.LVL13:
 268 0000 4154     		pushq	%r12
 269              		.cfi_def_cfa_offset 16
 270              		.cfi_offset 12, -16
 271 0002 55       		pushq	%rbp
 272              		.cfi_def_cfa_offset 24
 273              		.cfi_offset 6, -24
 274 0003 53       		pushq	%rbx
 275              		.cfi_def_cfa_offset 32
 276              		.cfi_offset 3, -32
 277              	.LBB450:
1065:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   57              		.align 2
1066:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   58              	.LCOLDB2:
 278              		.loc 4 1066 0
 279 0004 488B07   		movq	(%rdi), %rax
 280              	.LBE450:
1064:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   57              		.align 2
 281              		.loc 4 1064 0
 282 0007 4889FB   		movq	%rdi, %rbx
 283              	.LBB451:
 284              		.loc 4 1066 0
 285 000a FF5050   		call	*80(%rax)
 286              	.LVL14:
 287 000d 4885C0   		testq	%rax, %rax
 288 0010 743C     		je	.L14
 289 0012 4889C5   		movq	%rax, %rbp
 290              		.loc 4 1066 0 is_stmt 0 discriminator 2
 291 0015 4531E4   		xorl	%r12d, %r12d
 292              	.LVL15:
 293 0018 0F1F8400 		.p2align 4,,10
 293      00000000 
 294              		.p2align 3
 295              	.L13:
1067:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   59              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,
 296              		.loc 4 1067 0 is_stmt 1 discriminator 2
 297 0020 488B03   		movq	(%rbx), %rax
 298 0023 4889EE   		movq	%rbp, %rsi
 299 0026 4889DF   		movq	%rbx, %rdi
 300 0029 FF908000 		call	*128(%rax)
 300      0000
 301              	.LVL16:
 302 002f 4101C4   		addl	%eax, %r12d
 303              	.LVL17:
1066:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   59              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,
 304              		.loc 4 1066 0 discriminator 2
 305 0032 488B03   		movq	(%rbx), %rax
 306 0035 4889EE   		movq	%rbp, %rsi
 307 0038 4889DF   		movq	%rbx, %rdi
 308 003b FF5058   		call	*88(%rax)
 309              	.LVL18:
 310 003e 4885C0   		testq	%rax, %rax
 311 0041 4889C5   		movq	%rax, %rbp
 312              	.LVL19:
 313 0044 75DA     		jne	.L13
 314              	.LVL20:
 315              	.L12:
 316              	.LBE451:
1068:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   60              	.LHOTB2:
1069:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   61              		.align 2
 317              		.loc 4 1069 0
 318 0046 4489E0   		movl	%r12d, %eax
 319 0049 5B       		popq	%rbx
 320              		.cfi_remember_state
 321              		.cfi_def_cfa_offset 24
 322              	.LVL21:
 323 004a 5D       		popq	%rbp
 324              		.cfi_def_cfa_offset 16
 325 004b 415C     		popq	%r12
 326              		.cfi_def_cfa_offset 8
 327 004d C3       		ret
 328              	.LVL22:
 329              	.L14:
 330              		.cfi_restore_state
1065:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   58              	.LCOLDB2:
 331              		.loc 4 1065 0
 332 004e 4531E4   		xorl	%r12d, %r12d
 333 0051 EBF3     		jmp	.L12
 334              		.cfi_endproc
 335              	.LFE541:
 337              		.section	.text.unlikely._ZNK11Fl_Browser_11full_heightEv
 338              	.LCOLDE9:
 339              		.section	.text._ZNK11Fl_Browser_11full_heightEv
 340              	.LHOTE9:
 341              		.section	.text.unlikely._ZNK11Fl_Browser_10full_widthEv,"ax",@progbits
 342              		.align 2
 343              	.LCOLDB10:
 344              		.section	.text._ZNK11Fl_Browser_10full_widthEv,"ax",@progbits
 345              	.LHOTB10:
 346              		.align 2
 347              		.p2align 4,,15
 348              		.globl	_ZNK11Fl_Browser_10full_widthEv
 350              	_ZNK11Fl_Browser_10full_widthEv:
 351              	.LFB542:
1070:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   62              		.p2align 4,,15
1071:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   63              		.weak	_ZN8Fl_Group8as_groupEv
1072:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   65              	_ZN8Fl_Group8as_groupEv:
1073:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   66              	.LFB250:
1074:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   67              		.file 2 "fltk-1.3.4-1/FL/Fl_Group.H"
1075:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    1:fltk-1.3.4-1/FL/Fl_Group.H **** //
1076:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Group.H **** // "$Id: Fl_Group.H 10446 2014-11-10 22:09:11Z AlbrechtS $"
1077:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    3:fltk-1.3.4-1/FL/Fl_Group.H **** //
 352              		.loc 4 1077 0
 353              		.cfi_startproc
 354              	.LVL23:
1078:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    4:fltk-1.3.4-1/FL/Fl_Group.H **** // Group header file for the Fast Light Tool Kit (FLTK).
 355              		.loc 4 1078 0
 356 0000 8B87B400 		movl	180(%rdi), %eax
 356      0000
1079:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    5:fltk-1.3.4-1/FL/Fl_Group.H **** //
 357              		.loc 4 1079 0
 358 0006 C3       		ret
 359              		.cfi_endproc
 360              	.LFE542:
 362              		.section	.text.unlikely._ZNK11Fl_Browser_10full_widthEv
 363              	.LCOLDE10:
 364              		.section	.text._ZNK11Fl_Browser_10full_widthEv
 365              	.LHOTE10:
 366              		.section	.text.unlikely._ZN11Fl_Browser_11item_selectEPvi,"ax",@progbits
 367              		.align 2
 368              	.LCOLDB11:
 369              		.section	.text._ZN11Fl_Browser_11item_selectEPvi,"ax",@progbits
 370              	.LHOTB11:
 371              		.align 2
 372              		.p2align 4,,15
 373              		.globl	_ZN11Fl_Browser_11item_selectEPvi
 375              	_ZN11Fl_Browser_11item_selectEPvi:
 376              	.LFB543:
1080:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    6:fltk-1.3.4-1/FL/Fl_Group.H **** // Copyright 1998-2010 by Bill Spitzak and others.
1081:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    7:fltk-1.3.4-1/FL/Fl_Group.H **** //
1082:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    8:fltk-1.3.4-1/FL/Fl_Group.H **** // This library is free software. Distribution and use rights 
1083:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with thi
1084:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   10:fltk-1.3.4-1/FL/Fl_Group.H **** // file is missing or damaged, see the license at:
1085:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   11:fltk-1.3.4-1/FL/Fl_Group.H **** //
1086:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   12:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/COPYING.php
1087:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   13:fltk-1.3.4-1/FL/Fl_Group.H **** //
1088:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   14:fltk-1.3.4-1/FL/Fl_Group.H **** // Please report all bugs and problems on the following page:
1089:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
1090:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   16:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/str.php
 377              		.loc 4 1090 0
 378              		.cfi_startproc
 379              	.LVL24:
 380 0000 F3C3     		rep ret
 381              		.cfi_endproc
 382              	.LFE543:
 384              		.section	.text.unlikely._ZN11Fl_Browser_11item_selectEPvi
 385              	.LCOLDE11:
 386              		.section	.text._ZN11Fl_Browser_11item_selectEPvi
 387              	.LHOTE11:
 388              		.section	.text.unlikely._ZNK11Fl_Browser_13item_selectedEPv,"ax",@progbits
 389              		.align 2
 390              	.LCOLDB12:
 391              		.section	.text._ZNK11Fl_Browser_13item_selectedEPv,"ax",@progbits
 392              	.LHOTB12:
 393              		.align 2
 394              		.p2align 4,,15
 395              		.globl	_ZNK11Fl_Browser_13item_selectedEPv
 397              	_ZNK11Fl_Browser_13item_selectedEPv:
 398              	.LFB544:
1091:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   17:fltk-1.3.4-1/FL/Fl_Group.H **** //
1092:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   18:fltk-1.3.4-1/FL/Fl_Group.H **** 
1093:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   19:fltk-1.3.4-1/FL/Fl_Group.H **** /* \file
1094:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
1095:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   21:fltk-1.3.4-1/FL/Fl_Group.H **** 
1096:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   22:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Group_H
1097:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   23:fltk-1.3.4-1/FL/Fl_Group.H **** #define Fl_Group_H
1098:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   24:fltk-1.3.4-1/FL/Fl_Group.H **** 
 399              		.loc 4 1098 0
 400              		.cfi_startproc
 401              	.LVL25:
 402              		.loc 4 1098 0
 403 0000 31C0     		xorl	%eax, %eax
 404 0002 4839B7D0 		cmpq	%rsi, 208(%rdi)
 404      000000
 405 0009 0F94C0   		sete	%al
 406 000c C3       		ret
 407              		.cfi_endproc
 408              	.LFE544:
 410              		.section	.text.unlikely._ZNK11Fl_Browser_13item_selectedEPv
 411              	.LCOLDE12:
 412              		.section	.text._ZNK11Fl_Browser_13item_selectedEPv
 413              	.LHOTE12:
 414              		.section	.text.unlikely._ZNK11Fl_Browser_4bboxERiS0_S0_S0_,"ax",@progbits
 415              		.align 2
 416              	.LCOLDB13:
 417              		.section	.text._ZNK11Fl_Browser_4bboxERiS0_S0_S0_,"ax",@progbits
 418              	.LHOTB13:
 419              		.align 2
 420              		.p2align 4,,15
 421              		.globl	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 423              	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_:
 424              	.LFB515:
  68:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 425              		.loc 4 68 0
 426              		.cfi_startproc
 427              	.LVL26:
 428 0000 4157     		pushq	%r15
 429              		.cfi_def_cfa_offset 16
 430              		.cfi_offset 15, -16
 431 0002 4156     		pushq	%r14
 432              		.cfi_def_cfa_offset 24
 433              		.cfi_offset 14, -24
 434 0004 4989D6   		movq	%rdx, %r14
 435 0007 4155     		pushq	%r13
 436              		.cfi_def_cfa_offset 32
 437              		.cfi_offset 13, -32
 438 0009 4154     		pushq	%r12
 439              		.cfi_def_cfa_offset 40
 440              		.cfi_offset 12, -40
 441 000b 4989F7   		movq	%rsi, %r15
 442 000e 55       		pushq	%rbp
 443              		.cfi_def_cfa_offset 48
 444              		.cfi_offset 6, -48
 445 000f 53       		pushq	%rbx
 446              		.cfi_def_cfa_offset 56
 447              		.cfi_offset 3, -56
 448 0010 4989CC   		movq	%rcx, %r12
 449 0013 4889FB   		movq	%rdi, %rbx
 450 0016 4883EC18 		subq	$24, %rsp
 451              		.cfi_def_cfa_offset 80
  69:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 452              		.loc 4 69 0
 453 001a 8B97F000 		movl	240(%rdi), %edx
 453      0000
 454              	.LVL27:
 455 0020 85D2     		testl	%edx, %edx
 456 0022 0F84E000 		je	.L36
 456      0000
 457              	.LVL28:
 458              	.L22:
 459              	.LBB452:
 460              	.LBB453:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 461              		.loc 1 363 0 discriminator 4
 462 0028 0FB66B6E 		movzbl	110(%rbx), %ebp
 463              	.LBE453:
 464              	.LBE452:
  70:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 465              		.loc 4 70 0 discriminator 4
 466 002c B8030000 		movl	$3, %eax
 466      00
 467 0031 448B6B20 		movl	32(%rbx), %r13d
 468 0035 4C894424 		movq	%r8, 8(%rsp)
 468      08
 469 003a 891424   		movl	%edx, (%rsp)
 470              	.LVL29:
 471 003d 85ED     		testl	%ebp, %ebp
 472 003f 0F44E8   		cmove	%eax, %ebp
 473              	.LVL30:
  71:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 474              		.loc 4 71 0 discriminator 4
 475 0042 89EF     		movl	%ebp, %edi
 476 0044 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 476      00
 477              	.LVL31:
 478 0049 4101C5   		addl	%eax, %r13d
  72:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 479              		.loc 4 72 0 discriminator 4
 480 004c 89EF     		movl	%ebp, %edi
  71:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 481              		.loc 4 71 0 discriminator 4
 482 004e 45892F   		movl	%r13d, (%r15)
 483 0051 448B6B24 		movl	36(%rbx), %r13d
 484              	.LVL32:
  72:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485              		.loc 4 72 0 discriminator 4
 486 0055 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 486      00
 487              	.LVL33:
  73:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 488              		.loc 4 73 0 discriminator 4
 489 005a 89EF     		movl	%ebp, %edi
  72:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 490              		.loc 4 72 0 discriminator 4
 491 005c 4101C5   		addl	%eax, %r13d
 492 005f 45892E   		movl	%r13d, (%r14)
 493 0062 448B6B28 		movl	40(%rbx), %r13d
 494              	.LVL34:
  73:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 495              		.loc 4 73 0 discriminator 4
 496 0066 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 496      00
 497              	.LVL35:
  74:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 498              		.loc 4 74 0 discriminator 4
 499 006b 89EF     		movl	%ebp, %edi
  73:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 500              		.loc 4 73 0 discriminator 4
 501 006d 4129C5   		subl	%eax, %r13d
 502 0070 45892C24 		movl	%r13d, (%r12)
 503 0074 448B6B2C 		movl	44(%rbx), %r13d
 504              	.LVL36:
  74:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 505              		.loc 4 74 0 discriminator 4
 506 0078 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 506      00
 507              	.LVL37:
 508 007d 4C8B4424 		movq	8(%rsp), %r8
 508      08
  75:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 509              		.loc 4 75 0 discriminator 4
 510 0082 8B1424   		movl	(%rsp), %edx
  74:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 511              		.loc 4 74 0 discriminator 4
 512 0085 4129C5   		subl	%eax, %r13d
 513 0088 458928   		movl	%r13d, (%r8)
 514              	.LVL38:
  75:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 515              		.loc 4 75 0 discriminator 4
 516 008b F6835801 		testb	$2, 344(%rbx)
 516      000002
  76:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 517              		.loc 4 76 0 discriminator 4
 518 0092 418B0424 		movl	(%r12), %eax
  75:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 519              		.loc 4 75 0 discriminator 4
 520 0096 750F     		jne	.L25
  76:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 521              		.loc 4 76 0
 522 0098 29D0     		subl	%edx, %eax
 523 009a 41890424 		movl	%eax, (%r12)
 524              	.LVL39:
  77:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 525              		.loc 4 77 0
 526 009e F6834C01 		testb	$4, 332(%rbx)
 526      000004
 527 00a5 7549     		jne	.L37
 528              	.LVL40:
 529              	.L25:
  79:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 530              		.loc 4 79 0
 531 00a7 85C0     		testl	%eax, %eax
 532 00a9 7850     		js	.L38
 533              	.L26:
 534              	.LVL41:
  80:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 535              		.loc 4 80 0
 536 00ab F6831002 		testb	$2, 528(%rbx)
 536      000002
  81:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 537              		.loc 4 81 0
 538 00b2 418B00   		movl	(%r8), %eax
  80:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 539              		.loc 4 80 0
 540 00b5 7514     		jne	.L28
  81:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 541              		.loc 4 81 0
 542 00b7 29D0     		subl	%edx, %eax
 543 00b9 418900   		movl	%eax, (%r8)
 544              	.LVL42:
  82:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 545              		.loc 4 82 0
 546 00bc F6834C01 		testb	$1, 332(%rbx)
 546      000001
 547 00c3 7406     		je	.L28
  82:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 548              		.loc 4 82 0 is_stmt 0 discriminator 1
 549 00c5 410116   		addl	%edx, (%r14)
 550 00c8 418B00   		movl	(%r8), %eax
 551              	.LVL43:
 552              	.L28:
 553 00cb 85C0     		testl	%eax, %eax
 554 00cd BA000000 		movl	$0, %edx
 554      00
 555 00d2 0F48C2   		cmovs	%edx, %eax
 556 00d5 418900   		movl	%eax, (%r8)
  85:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 557              		.loc 4 85 0 is_stmt 1
 558 00d8 4883C418 		addq	$24, %rsp
 559              		.cfi_remember_state
 560              		.cfi_def_cfa_offset 56
 561              	.LVL44:
 562 00dc 5B       		popq	%rbx
 563              		.cfi_def_cfa_offset 48
 564              	.LVL45:
 565 00dd 5D       		popq	%rbp
 566              		.cfi_def_cfa_offset 40
 567              	.LVL46:
 568 00de 415C     		popq	%r12
 569              		.cfi_def_cfa_offset 32
 570              	.LVL47:
 571 00e0 415D     		popq	%r13
 572              		.cfi_def_cfa_offset 24
 573 00e2 415E     		popq	%r14
 574              		.cfi_def_cfa_offset 16
 575              	.LVL48:
 576 00e4 415F     		popq	%r15
 577              		.cfi_def_cfa_offset 8
 578              	.LVL49:
 579 00e6 C3       		ret
 580              	.LVL50:
 581 00e7 660F1F84 		.p2align 4,,10
 581      00000000 
 581      00
 582              		.p2align 3
 583              	.L37:
 584              		.cfi_restore_state
  77:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 585              		.loc 4 77 0 discriminator 1
 586 00f0 410117   		addl	%edx, (%r15)
 587 00f3 418B0424 		movl	(%r12), %eax
  79:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 588              		.loc 4 79 0 discriminator 1
 589 00f7 85C0     		testl	%eax, %eax
 590 00f9 79B0     		jns	.L26
 591              	.LVL51:
 592              	.L38:
 593 00fb 41C70424 		movl	$0, (%r12)
 593      00000000 
 594 0103 EBA6     		jmp	.L26
 595              	.LVL52:
 596              		.p2align 4,,10
 597 0105 0F1F00   		.p2align 3
 598              	.L36:
 599 0108 4C890424 		movq	%r8, (%rsp)
  69:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 600              		.loc 4 69 0 discriminator 2
 601 010c E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 601      00
 602              	.LVL53:
 603 0111 4C8B0424 		movq	(%rsp), %r8
 604 0115 89C2     		movl	%eax, %edx
 605 0117 E90CFFFF 		jmp	.L22
 605      FF
 606              		.cfi_endproc
 607              	.LFE515:
 609              		.section	.text.unlikely._ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 610              	.LCOLDE13:
 611              		.section	.text._ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 612              	.LHOTE13:
 613              		.section	.text.unlikely._ZNK11Fl_Browser_8leftedgeEv,"ax",@progbits
 614              		.align 2
 615              	.LCOLDB14:
 616              		.section	.text._ZNK11Fl_Browser_8leftedgeEv,"ax",@progbits
 617              	.LHOTB14:
 618              		.align 2
 619              		.p2align 4,,15
 620              		.globl	_ZNK11Fl_Browser_8leftedgeEv
 622              	_ZNK11Fl_Browser_8leftedgeEv:
 623              	.LFB516:
  93:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 624              		.loc 4 93 0
 625              		.cfi_startproc
 626              	.LVL54:
 627 0000 4883EC28 		subq	$40, %rsp
 628              		.cfi_def_cfa_offset 48
  94:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 629              		.loc 4 94 0
 630 0004 488D5424 		leaq	12(%rsp), %rdx
 630      0C
 631 0009 4C8D4424 		leaq	20(%rsp), %r8
 631      14
 632 000e 488D4C24 		leaq	16(%rsp), %rcx
 632      10
 633 0013 488D7424 		leaq	8(%rsp), %rsi
 633      08
  93:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 634              		.loc 4 93 0
 635 0018 64488B04 		movq	%fs:40, %rax
 635      25280000 
 635      00
 636 0021 48894424 		movq	%rax, 24(%rsp)
 636      18
 637 0026 31C0     		xorl	%eax, %eax
  94:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 638              		.loc 4 94 0
 639 0028 E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 639      00
 640              	.LVL55:
  96:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 641              		.loc 4 96 0
 642 002d 488B5424 		movq	24(%rsp), %rdx
 642      18
 643 0032 64483314 		xorq	%fs:40, %rdx
 643      25280000 
 643      00
 644 003b 8B442408 		movl	8(%rsp), %eax
 645 003f 7505     		jne	.L42
 646 0041 4883C428 		addq	$40, %rsp
 647              		.cfi_remember_state
 648              		.cfi_def_cfa_offset 8
 649 0045 C3       		ret
 650              	.L42:
 651              		.cfi_restore_state
 652 0046 E8000000 		call	__stack_chk_fail
 652      00
 653              	.LVL56:
 654              		.cfi_endproc
 655              	.LFE516:
 657              		.section	.text.unlikely._ZNK11Fl_Browser_8leftedgeEv
 658              	.LCOLDE14:
 659              		.section	.text._ZNK11Fl_Browser_8leftedgeEv
 660              	.LHOTE14:
 661              		.section	.text.unlikely._ZN11Fl_Browser_11redraw_lineEPv,"ax",@progbits
 662              		.align 2
 663              	.LCOLDB15:
 664              		.section	.text._ZN11Fl_Browser_11redraw_lineEPv,"ax",@progbits
 665              	.LHOTB15:
 666              		.align 2
 667              		.p2align 4,,15
 668              		.globl	_ZN11Fl_Browser_11redraw_lineEPv
 670              	_ZN11Fl_Browser_11redraw_lineEPv:
 671              	.LFB518:
 126:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 672              		.loc 4 126 0
 673              		.cfi_startproc
 674              	.LVL57:
 127:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 675              		.loc 4 127 0
 676 0000 488B87D8 		movq	216(%rdi), %rax
 676      000000
 677 0007 4839F0   		cmpq	%rsi, %rax
 678 000a 743C     		je	.L48
 679 000c 4885C0   		testq	%rax, %rax
 680 000f 7437     		je	.L48
 128:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 681              		.loc 4 128 0
 682 0011 488B87E0 		movq	224(%rdi), %rax
 682      000000
 683 0018 4885C0   		testq	%rax, %rax
 684 001b 7413     		je	.L49
 685 001d 4839C6   		cmpq	%rax, %rsi
 686 0020 740E     		je	.L49
 129:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 687              		.loc 4 129 0
 688 0022 BE040000 		movl	$4, %esi
 688      00
 689              	.LVL58:
 690 0027 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 690      00
 691              	.LVL59:
 692 002c 0F1F4000 		.p2align 4,,10
 693              		.p2align 3
 694              	.L49:
 128:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 695              		.loc 4 128 0 discriminator 3
 696 0030 4889B7E0 		movq	%rsi, 224(%rdi)
 696      000000
 697 0037 BE020000 		movl	$2, %esi
 697      00
 698              	.LVL60:
 699 003c E9000000 		jmp	_ZN9Fl_Widget6damageEh
 699      00
 700              	.LVL61:
 701              		.p2align 4,,10
 702 0041 0F1F8000 		.p2align 3
 702      000000
 703              	.L48:
 127:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 704              		.loc 4 127 0 discriminator 3
 705 0048 4889B7D8 		movq	%rsi, 216(%rdi)
 705      000000
 706 004f BE020000 		movl	$2, %esi
 706      00
 707              	.LVL62:
 708 0054 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 708      00
 709              	.LVL63:
 710              		.cfi_endproc
 711              	.LFE518:
 713              		.section	.text.unlikely._ZN11Fl_Browser_11redraw_lineEPv
 714              	.LCOLDE15:
 715              		.section	.text._ZN11Fl_Browser_11redraw_lineEPv
 716              	.LHOTE15:
 717              		.section	.text.unlikely._ZN11Fl_Browser_10update_topEv,"ax",@progbits
 718              		.align 2
 719              	.LCOLDB16:
 720              		.section	.text._ZN11Fl_Browser_10update_topEv,"ax",@progbits
 721              	.LHOTB16:
 722              		.align 2
 723              		.p2align 4,,15
 724              		.globl	_ZN11Fl_Browser_10update_topEv
 726              	_ZN11Fl_Browser_10update_topEv:
 727              	.LFB519:
 133:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 728              		.loc 4 133 0
 729              		.cfi_startproc
 730              	.LVL64:
 731 0000 4157     		pushq	%r15
 732              		.cfi_def_cfa_offset 16
 733              		.cfi_offset 15, -16
 734 0002 4156     		pushq	%r14
 735              		.cfi_def_cfa_offset 24
 736              		.cfi_offset 14, -24
 737 0004 4155     		pushq	%r13
 738              		.cfi_def_cfa_offset 32
 739              		.cfi_offset 13, -32
 740 0006 4154     		pushq	%r12
 741              		.cfi_def_cfa_offset 40
 742              		.cfi_offset 12, -40
 743 0008 55       		pushq	%rbp
 744              		.cfi_def_cfa_offset 48
 745              		.cfi_offset 6, -48
 746 0009 53       		pushq	%rbx
 747              		.cfi_def_cfa_offset 56
 748              		.cfi_offset 3, -56
 749 000a 4889FB   		movq	%rdi, %rbx
 750 000d 4883EC08 		subq	$8, %rsp
 751              		.cfi_def_cfa_offset 64
 134:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752              		.loc 4 134 0
 753 0011 4C8BBFC8 		movq	200(%rdi), %r15
 753      000000
 754 0018 4D85FF   		testq	%r15, %r15
 755 001b 0F84D700 		je	.L79
 755      0000
 756              	.LBB454:
 135:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 757              		.loc 4 135 0
 758 0021 448BB7A0 		movl	160(%rdi), %r14d
 758      000000
 759 0028 448BAFA4 		movl	164(%rdi), %r13d
 759      000000
 760 002f 4539EE   		cmpl	%r13d, %r14d
 761 0032 0F84C801 		je	.L50
 761      0000
 762              	.LVL65:
 763              	.L69:
 764              	.LBB455:
 140:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 765              		.loc 4 140 0 discriminator 1
 766 0038 4489E8   		movl	%r13d, %eax
 767 003b C1E81F   		shrl	$31, %eax
 768 003e 4401E8   		addl	%r13d, %eax
 769 0041 D1F8     		sarl	%eax
 770 0043 4439F0   		cmpl	%r14d, %eax
 771 0046 0F8DE400 		jge	.L54
 771      0000
 772              	.LVL66:
 145:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 773              		.loc 4 145 0
 774 004c 442BABB0 		subl	176(%rbx), %r13d
 774      000000
 775              	.LVL67:
 776              	.L57:
 777              	.LBB456:
 778              	.LBB457:
 152:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 779              		.loc 4 152 0
 780 0053 488B03   		movq	(%rbx), %rax
 781 0056 4C89FE   		movq	%r15, %rsi
 782 0059 4889DF   		movq	%rbx, %rdi
 783 005c FF908000 		call	*128(%rax)
 783      0000
 784              	.LVL68:
 154:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 785              		.loc 4 154 0
 786 0062 4539EE   		cmpl	%r13d, %r14d
 152:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 787              		.loc 4 152 0
 788 0065 89C5     		movl	%eax, %ebp
 789              	.LVL69:
 154:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 790              		.loc 4 154 0
 791 0067 7C23     		jl	.L63
 792 0069 EB38     		jmp	.L59
 793              	.LVL70:
 794 006b 0F1F4400 		.p2align 4,,10
 794      00
 795              		.p2align 3
 796              	.L60:
 797              	.LBB458:
 158:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 798              		.loc 4 158 0
 799 0070 488B03   		movq	(%rbx), %rax
 800              	.LVL71:
 801 0073 4C89E6   		movq	%r12, %rsi
 802 0076 4889DF   		movq	%rbx, %rdi
 803 0079 4D89E7   		movq	%r12, %r15
 804 007c FF908000 		call	*128(%rax)
 804      0000
 805              	.LVL72:
 159:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 806              		.loc 4 159 0
 807 0082 4129C5   		subl	%eax, %r13d
 808              	.LVL73:
 158:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 809              		.loc 4 158 0
 810 0085 89C5     		movl	%eax, %ebp
 811              	.LVL74:
 812              	.LBE458:
 154:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 813              		.loc 4 154 0
 814 0087 4539F5   		cmpl	%r14d, %r13d
 815 008a 7E17     		jle	.L59
 816              	.LVL75:
 817              	.L63:
 818              	.LBB459:
 155:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 819              		.loc 4 155 0
 820 008c 488B03   		movq	(%rbx), %rax
 821              	.LVL76:
 822 008f 4C89FE   		movq	%r15, %rsi
 823 0092 4889DF   		movq	%rbx, %rdi
 824 0095 FF5060   		call	*96(%rax)
 825              	.LVL77:
 156:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 826              		.loc 4 156 0
 827 0098 4885C0   		testq	%rax, %rax
 155:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 828              		.loc 4 155 0
 829 009b 4989C4   		movq	%rax, %r12
 830              	.LVL78:
 156:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 831              		.loc 4 156 0
 832 009e 75D0     		jne	.L60
 833 00a0 4531ED   		xorl	%r13d, %r13d
 834              	.LVL79:
 835              	.L59:
 836              	.LBE459:
 161:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 837              		.loc 4 161 0
 838 00a3 4401ED   		addl	%r13d, %ebp
 839              	.LVL80:
 840 00a6 4439F5   		cmpl	%r14d, %ebp
 841 00a9 7E27     		jle	.L66
 842 00ab E95F0100 		jmp	.L80
 842      00
 843              	.LVL81:
 844              		.p2align 4,,10
 845              		.p2align 3
 846              	.L64:
 847              	.LBB460:
 166:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 848              		.loc 4 166 0
 849 00b0 488B03   		movq	(%rbx), %rax
 850              	.LVL82:
 851 00b3 4C89E6   		movq	%r12, %rsi
 852 00b6 4889DF   		movq	%rbx, %rdi
 853 00b9 4D89E7   		movq	%r12, %r15
 854 00bc 4189ED   		movl	%ebp, %r13d
 855 00bf FF908000 		call	*128(%rax)
 855      0000
 856              	.LVL83:
 857              	.LBE460:
 161:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 858              		.loc 4 161 0
 859 00c5 01E8     		addl	%ebp, %eax
 860              	.LVL84:
 861 00c7 4439F0   		cmpl	%r14d, %eax
 862 00ca 0F8FE900 		jg	.L65
 862      0000
 863 00d0 89C5     		movl	%eax, %ebp
 864              	.LVL85:
 865              	.L66:
 866              	.LBB461:
 162:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 867              		.loc 4 162 0
 868 00d2 488B03   		movq	(%rbx), %rax
 869 00d5 4C89FE   		movq	%r15, %rsi
 870 00d8 4889DF   		movq	%rbx, %rdi
 871 00db FF5058   		call	*88(%rax)
 872              	.LVL86:
 163:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 873              		.loc 4 163 0
 874 00de 4885C0   		testq	%rax, %rax
 162:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 875              		.loc 4 162 0
 876 00e1 4989C4   		movq	%rax, %r12
 877              	.LVL87:
 163:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 878              		.loc 4 163 0
 879 00e4 75CA     		jne	.L64
 163:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 880              		.loc 4 163 0 is_stmt 0 discriminator 1
 881 00e6 448D75FF 		leal	-1(%rbp), %r14d
 882              	.LVL88:
 883 00ea 4D89FC   		movq	%r15, %r12
 884 00ed 4489ED   		movl	%r13d, %ebp
 885 00f0 E9C40000 		jmp	.L65
 885      00
 886              	.LVL89:
 887              		.p2align 4,,10
 888 00f5 0F1F00   		.p2align 3
 889              	.L79:
 890              	.LBE461:
 891              	.LBE457:
 892              	.LBE456:
 893              	.LBE455:
 894              	.LBE454:
 134:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 895              		.loc 4 134 0 is_stmt 1 discriminator 1
 896 00f8 488B07   		movq	(%rdi), %rax
 897 00fb FF5050   		call	*80(%rax)
 898              	.LVL90:
 899              	.LBB477:
 135:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 900              		.loc 4 135 0 discriminator 1
 901 00fe 448BB3A0 		movl	160(%rbx), %r14d
 901      000000
 902 0105 448BABA4 		movl	164(%rbx), %r13d
 902      000000
 903              	.LBE477:
 134:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 904              		.loc 4 134 0 discriminator 1
 905 010c 4989C7   		movq	%rax, %r15
 906 010f 488983C8 		movq	%rax, 200(%rbx)
 906      000000
 907              	.LBB478:
 135:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 908              		.loc 4 135 0 discriminator 1
 909 0116 4539EE   		cmpl	%r13d, %r14d
 910 0119 0F84E100 		je	.L50
 910      0000
 911              	.LVL91:
 912              	.LBB473:
 140:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 913              		.loc 4 140 0
 914 011f 4885C0   		testq	%rax, %rax
 915 0122 0F8510FF 		jne	.L69
 915      FFFF
 916 0128 0F1F8400 		.p2align 4,,10
 916      00000000 
 917              		.p2align 3
 918              	.L54:
 141:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 919              		.loc 4 141 0
 920 0130 488B03   		movq	(%rbx), %rax
 921 0133 4889DF   		movq	%rbx, %rdi
 142:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 922              		.loc 4 142 0
 923 0136 4531ED   		xorl	%r13d, %r13d
 141:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 924              		.loc 4 141 0
 925 0139 FF5050   		call	*80(%rax)
 926              	.LVL92:
 927              	.LBB469:
 147:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 928              		.loc 4 147 0
 929 013c 4885C0   		testq	%rax, %rax
 930              	.LBE469:
 141:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 931              		.loc 4 141 0
 932 013f 4989C7   		movq	%rax, %r15
 933              	.LVL93:
 934              	.LBB470:
 147:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 935              		.loc 4 147 0
 936 0142 0F850BFF 		jne	.L57
 936      FFFF
 148:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 937              		.loc 4 148 0
 938 0148 48C783C8 		movq	$0, 200(%rbx)
 938      00000000 
 938      000000
 149:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 939              		.loc 4 149 0
 940 0153 C783B000 		movl	$0, 176(%rbx)
 940      00000000 
 940      0000
 150:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 941              		.loc 4 150 0
 942 015d C783A400 		movl	$0, 164(%rbx)
 942      00000000 
 942      0000
 943              	.LVL94:
 944              	.L58:
 945              	.LBE470:
 946              	.LBE473:
 947              	.LBE478:
 184:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 948              		.loc 4 184 0
 949 0167 4883C408 		addq	$8, %rsp
 950              		.cfi_remember_state
 951              		.cfi_def_cfa_offset 56
 952              	.LBB479:
 953              	.LBB474:
 182:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 954              		.loc 4 182 0
 955 016b 4889DF   		movq	%rbx, %rdi
 956 016e BE040000 		movl	$4, %esi
 956      00
 957              	.LBE474:
 958              	.LBE479:
 184:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 959              		.loc 4 184 0
 960 0173 5B       		popq	%rbx
 961              		.cfi_def_cfa_offset 48
 962              	.LVL95:
 963 0174 5D       		popq	%rbp
 964              		.cfi_def_cfa_offset 40
 965 0175 415C     		popq	%r12
 966              		.cfi_def_cfa_offset 32
 967 0177 415D     		popq	%r13
 968              		.cfi_def_cfa_offset 24
 969 0179 415E     		popq	%r14
 970              		.cfi_def_cfa_offset 16
 971              	.LVL96:
 972 017b 415F     		popq	%r15
 973              		.cfi_def_cfa_offset 8
 974              	.LBB480:
 975              	.LBB475:
 182:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 976              		.loc 4 182 0
 977 017d E9000000 		jmp	_ZN9Fl_Widget6damageEh
 977      00
 978              	.LVL97:
 979              		.p2align 4,,10
 980 0182 660F1F44 		.p2align 3
 980      0000
 981              	.L81:
 982              		.cfi_restore_state
 983              	.LBB471:
 984              	.LBB467:
 985              	.LBB462:
 986              	.LBB463:
 173:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 987              		.loc 4 173 0
 988 0188 488B03   		movq	(%rbx), %rax
 989 018b 4C89E6   		movq	%r12, %rsi
 990 018e 4889DF   		movq	%rbx, %rdi
 991 0191 FF5060   		call	*96(%rax)
 992              	.LVL98:
 174:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 993              		.loc 4 174 0
 994 0194 4885C0   		testq	%rax, %rax
 173:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 995              		.loc 4 173 0
 996 0197 4989C5   		movq	%rax, %r13
 997              	.LVL99:
 174:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 998              		.loc 4 174 0
 999 019a 7454     		je	.L73
 1000              	.LVL100:
 175:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 1001              		.loc 4 175 0
 1002 019c 488B03   		movq	(%rbx), %rax
 1003              	.LVL101:
 1004 019f 4C89EE   		movq	%r13, %rsi
 1005 01a2 4889DF   		movq	%rbx, %rdi
 1006              	.LBE463:
 169:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 1007              		.loc 4 169 0
 1008 01a5 4D89EC   		movq	%r13, %r12
 1009              	.LBB464:
 175:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 1010              		.loc 4 175 0
 1011 01a8 FF908000 		call	*128(%rax)
 1011      0000
 1012              	.LVL102:
 1013 01ae 29C5     		subl	%eax, %ebp
 1014              	.LVL103:
 1015 01b0 89ABA000 		movl	%ebp, 160(%rbx)
 1015      0000
 1016              	.LVL104:
 1017 01b6 4189EE   		movl	%ebp, %r14d
 1018              	.LVL105:
 1019              	.L65:
 170:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1020              		.loc 4 170 0
 1021 01b9 488B03   		movq	(%rbx), %rax
 1022 01bc 4C89E6   		movq	%r12, %rsi
 1023 01bf 4889DF   		movq	%rbx, %rdi
 1024 01c2 FF5070   		call	*112(%rax)
 1025              	.LVL106:
 171:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 1026              		.loc 4 171 0
 1027 01c5 01E8     		addl	%ebp, %eax
 1028              	.LVL107:
 1029 01c7 4139C6   		cmpl	%eax, %r14d
 1030 01ca 7DBC     		jge	.L81
 1031 01cc 4489F0   		movl	%r14d, %eax
 1032 01cf 29E8     		subl	%ebp, %eax
 1033              	.LVL108:
 1034              	.L68:
 1035              	.LBE464:
 1036              	.LBE462:
 178:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 1037              		.loc 4 178 0
 1038 01d1 4C89A3C8 		movq	%r12, 200(%rbx)
 1038      000000
 179:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 1039              		.loc 4 179 0
 1040 01d8 8983B000 		movl	%eax, 176(%rbx)
 1040      0000
 180:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1041              		.loc 4 180 0
 1042 01de 4489B3A4 		movl	%r14d, 164(%rbx)
 1042      000000
 1043 01e5 EB80     		jmp	.L58
 1044              	.LVL109:
 1045 01e7 660F1F84 		.p2align 4,,10
 1045      00000000 
 1045      00
 1046              		.p2align 3
 1047              	.L73:
 1048              	.LBB466:
 1049              	.LBB465:
 1050 01f0 31C0     		xorl	%eax, %eax
 1051              	.LVL110:
 174:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 1052              		.loc 4 174 0
 1053 01f2 4531F6   		xorl	%r14d, %r14d
 1054              	.LVL111:
 1055 01f5 EBDA     		jmp	.L68
 1056              	.LVL112:
 1057 01f7 660F1F84 		.p2align 4,,10
 1057      00000000 
 1057      00
 1058              		.p2align 3
 1059              	.L50:
 1060              	.LBE465:
 1061              	.LBE466:
 1062              	.LBE467:
 1063              	.LBE471:
 1064              	.LBE475:
 1065              	.LBE480:
 184:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 1066              		.loc 4 184 0
 1067 0200 4883C408 		addq	$8, %rsp
 1068              		.cfi_remember_state
 1069              		.cfi_def_cfa_offset 56
 1070 0204 5B       		popq	%rbx
 1071              		.cfi_def_cfa_offset 48
 1072              	.LVL113:
 1073 0205 5D       		popq	%rbp
 1074              		.cfi_def_cfa_offset 40
 1075 0206 415C     		popq	%r12
 1076              		.cfi_def_cfa_offset 32
 1077 0208 415D     		popq	%r13
 1078              		.cfi_def_cfa_offset 24
 1079 020a 415E     		popq	%r14
 1080              		.cfi_def_cfa_offset 16
 1081 020c 415F     		popq	%r15
 1082              		.cfi_def_cfa_offset 8
 1083 020e C3       		ret
 1084              	.LVL114:
 1085              	.L80:
 1086              		.cfi_restore_state
 1087              	.LBB481:
 1088              	.LBB476:
 1089              	.LBB472:
 1090              	.LBB468:
 161:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1091              		.loc 4 161 0
 1092 020f 4489ED   		movl	%r13d, %ebp
 1093 0212 4D89FC   		movq	%r15, %r12
 1094 0215 EBA2     		jmp	.L65
 1095              	.LBE468:
 1096              	.LBE472:
 1097              	.LBE476:
 1098              	.LBE481:
 1099              		.cfi_endproc
 1100              	.LFE519:
 1102              		.section	.text.unlikely._ZN11Fl_Browser_10update_topEv
 1103              	.LCOLDE16:
 1104              		.section	.text._ZN11Fl_Browser_10update_topEv
 1105              	.LHOTE16:
 1106              		.section	.text.unlikely._ZN11Fl_Browser_4drawEv,"ax",@progbits
 1107              		.align 2
 1108              	.LCOLDB17:
 1109              		.section	.text._ZN11Fl_Browser_4drawEv,"ax",@progbits
 1110              	.LHOTB17:
 1111              		.align 2
 1112              		.p2align 4,,15
 1113              		.globl	_ZN11Fl_Browser_4drawEv
 1115              	_ZN11Fl_Browser_4drawEv:
 1116              	.LFB524:
 329:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 1117              		.loc 4 329 0
 1118              		.cfi_startproc
 1119              	.LVL115:
 1120 0000 4157     		pushq	%r15
 1121              		.cfi_def_cfa_offset 16
 1122              		.cfi_offset 15, -16
 1123 0002 4156     		pushq	%r14
 1124              		.cfi_def_cfa_offset 24
 1125              		.cfi_offset 14, -24
 1126 0004 4155     		pushq	%r13
 1127              		.cfi_def_cfa_offset 32
 1128              		.cfi_offset 13, -32
 1129 0006 4154     		pushq	%r12
 1130              		.cfi_def_cfa_offset 40
 1131              		.cfi_offset 12, -40
 1132 0008 55       		pushq	%rbp
 1133              		.cfi_def_cfa_offset 48
 1134              		.cfi_offset 6, -48
 1135 0009 53       		pushq	%rbx
 1136              		.cfi_def_cfa_offset 56
 1137              		.cfi_offset 3, -56
 1138 000a 4889FB   		movq	%rdi, %rbx
 1139 000d 4883EC38 		subq	$56, %rsp
 1140              		.cfi_def_cfa_offset 112
 329:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 1141              		.loc 4 329 0
 1142 0011 64488B04 		movq	%fs:40, %rax
 1142      25280000 
 1142      00
 1143 001a 48894424 		movq	%rax, 40(%rsp)
 1143      28
 1144 001f 31C0     		xorl	%eax, %eax
 1145              	.LVL116:
 331:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1146              		.loc 4 331 0
 1147 0021 E8000000 		call	_ZN11Fl_Browser_10update_topEv
 1147      00
 1148              	.LVL117:
 332:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 1149              		.loc 4 332 0
 1150 0026 488B03   		movq	(%rbx), %rax
 1151 0029 488B90A8 		movq	168(%rax), %rdx
 1151      000000
 1152 0030 4881FA00 		cmpq	$_ZNK11Fl_Browser_10full_widthEv, %rdx
 1152      000000
 1153 0037 0F85E108 		jne	.L83
 1153      0000
 1154              	.LVL118:
 1155              	.LBB588:
 1156              	.LBB589:
1078:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    5:fltk-1.3.4-1/FL/Fl_Group.H **** //
 1157              		.loc 4 1078 0
 1158 003d 8B8BB400 		movl	180(%rbx), %ecx
 1158      0000
 1159 0043 894C2408 		movl	%ecx, 8(%rsp)
 1160              	.LVL119:
 1161              	.L84:
 1162              	.LBE589:
 1163              	.LBE588:
 333:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 1164              		.loc 4 333 0
 1165 0047 4889DF   		movq	%rbx, %rdi
 335:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1166              		.loc 4 335 0
 1167 004a 4531E4   		xorl	%r12d, %r12d
 333:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 1168              		.loc 4 333 0
 1169 004d FF90B000 		call	*176(%rax)
 1169      0000
 1170              	.LVL120:
 334:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 1171              		.loc 4 334 0
 1172 0053 4C8D4424 		leaq	36(%rsp), %r8
 1172      24
 1173 0058 488D4C24 		leaq	32(%rsp), %rcx
 1173      20
 1174 005d 488D5424 		leaq	28(%rsp), %rdx
 1174      1C
 1175 0062 488D7424 		leaq	24(%rsp), %rsi
 1175      18
 1176 0067 4889DF   		movq	%rbx, %rdi
 333:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 1177              		.loc 4 333 0
 1178 006a 4189C5   		movl	%eax, %r13d
 1179              	.LVL121:
 334:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 1180              		.loc 4 334 0
 1181 006d E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 1181      00
 1182              	.LVL122:
 1183              	.LBB590:
 337:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1184              		.loc 4 337 0
 1185 0072 807B6D00 		cmpb	$0, 109(%rbx)
 1186              	.LBE590:
 330:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 1187              		.loc 4 330 0
 1188 0076 C744240C 		movl	$0, 12(%rsp)
 1188      00000000 
 1189              	.LVL123:
 1190              	.LBB595:
 337:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1191              		.loc 4 337 0
 1192 007e 0F883604 		js	.L200
 1192      0000
 1193              		.p2align 4,,10
 1194 0084 0F1F4000 		.p2align 3
 1195              	.L86:
 1196              	.LVL124:
 1197              	.LBE595:
 343:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 1198              		.loc 4 343 0
 1199 0088 0FB683B8 		movzbl	184(%rbx), %eax
 1199      000000
 1200 008f A802     		testb	$2, %al
 1201 0091 7421     		je	.L88
 343:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 1202              		.loc 4 343 0 is_stmt 0 discriminator 1
 1203 0093 A804     		testb	$4, %al
 1204 0095 0F85C504 		jne	.L89
 1204      0000
 344:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1205              		.loc 4 344 0 is_stmt 1
 1206 009b 8BBBA000 		movl	160(%rbx), %edi
 1206      0000
 1207 00a1 85FF     		testl	%edi, %edi
 1208 00a3 0F85B704 		jne	.L89
 1208      0000
 344:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1209              		.loc 4 344 0 is_stmt 0 discriminator 1
 1210 00a9 443B6C24 		cmpl	36(%rsp), %r13d
 1210      24
 1211 00ae 0F8FAC04 		jg	.L89
 1211      0000
 1212              	.L88:
 351:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1213              		.loc 4 351 0 is_stmt 1
 1214 00b4 488B03   		movq	(%rbx), %rax
 1215 00b7 4889DF   		movq	%rbx, %rdi
 1216 00ba FF5050   		call	*80(%rax)
 1217              	.LVL125:
 1218 00bd 488983C8 		movq	%rax, 200(%rbx)
 1218      000000
 1219 00c4 8B835801 		movl	344(%rbx), %eax
 1219      0000
 1220 00ca C783B000 		movl	$0, 176(%rbx)
 1220      00000000 
 1220      0000
 1221 00d4 C783A400 		movl	$0, 164(%rbx)
 1221      00000000 
 1221      0000
 1222              	.LVL126:
 352:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 1223              		.loc 4 352 0
 1224 00de A802     		testb	$2, %al
 1225 00e0 750D     		jne	.L195
 1226              	.LVL127:
 1227              	.LBB596:
 1228              	.LBB597:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1229              		.loc 1 931 0
 1230 00e2 804B6D04 		orb	$4, 109(%rbx)
 1231              	.LBE597:
 1232              	.LBE596:
 1233              	.LBB598:
 1234              	.LBB599:
 702:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1235              		.loc 1 702 0
 1236 00e6 83C802   		orl	$2, %eax
 1237 00e9 89835801 		movl	%eax, 344(%rbx)
 1237      0000
 1238              	.LVL128:
 1239              	.L195:
 1240 00ef 0FB683B8 		movzbl	184(%rbx), %eax
 1240      000000
 1241              	.LVL129:
 1242              	.L90:
 1243              	.LBE599:
 1244              	.LBE598:
 358:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1245              		.loc 4 358 0
 1246 00f6 A801     		testb	$1, %al
 1247 00f8 0F84B204 		je	.L92
 1247      0000
 1248              	.L207:
 358:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1249              		.loc 4 358 0 is_stmt 0 discriminator 1
 1250 00fe A804     		testb	$4, %al
 1251 0100 751E     		jne	.L93
 359:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 1252              		.loc 4 359 0 is_stmt 1
 1253 0102 8BB3A800 		movl	168(%rbx), %esi
 1253      0000
 1254 0108 85F6     		testl	%esi, %esi
 1255 010a 7514     		jne	.L93
 359:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 1256              		.loc 4 359 0 is_stmt 0 discriminator 1
 1257 010c 8B4C2408 		movl	8(%rsp), %ecx
 1258 0110 3B4C2420 		cmpl	32(%rsp), %ecx
 1259 0114 0F8E9604 		jle	.L92
 1259      0000
 1260 011a 660F1F44 		.p2align 4,,10
 1260      0000
 1261              		.p2align 3
 1262              	.L93:
 1263 0120 8B931002 		movl	528(%rbx), %edx
 1263      0000
 1264              	.LVL130:
 360:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1265              		.loc 4 360 0 is_stmt 1
 1266 0126 F6C202   		testb	$2, %dl
 1267 0129 0F859106 		jne	.L201
 1267      0000
 1268              	.LVL131:
 1269              	.L94:
 376:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 1270              		.loc 4 376 0
 1271 012f A802     		testb	$2, %al
 1272 0131 7421     		je	.L95
 376:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 1273              		.loc 4 376 0 is_stmt 0 discriminator 1
 1274 0133 A804     		testb	$4, %al
 1275 0135 0F85A504 		jne	.L96
 1275      0000
 377:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1276              		.loc 4 377 0 is_stmt 1
 1277 013b 8B8BA000 		movl	160(%rbx), %ecx
 1277      0000
 1278 0141 85C9     		testl	%ecx, %ecx
 1279 0143 0F859704 		jne	.L96
 1279      0000
 377:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1280              		.loc 4 377 0 is_stmt 0 discriminator 1
 1281 0149 443B6C24 		cmpl	36(%rsp), %r13d
 1281      24
 1282 014e 0F8F8C04 		jg	.L96
 1282      0000
 1283              	.L95:
 384:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 1284              		.loc 4 384 0 is_stmt 1
 1285 0154 488B03   		movq	(%rbx), %rax
 1286 0157 4889DF   		movq	%rbx, %rdi
 1287 015a FF5050   		call	*80(%rax)
 1288              	.LVL132:
 1289 015d 488983C8 		movq	%rax, 200(%rbx)
 1289      000000
 1290 0164 8B835801 		movl	344(%rbx), %eax
 1290      0000
 1291 016a C783B000 		movl	$0, 176(%rbx)
 1291      00000000 
 1291      0000
 1292 0174 C783A400 		movl	$0, 164(%rbx)
 1292      00000000 
 1292      0000
 1293              	.LVL133:
 385:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 1294              		.loc 4 385 0
 1295 017e A802     		testb	$2, %al
 1296 0180 750E     		jne	.L97
 1297              	.LVL134:
 1298              	.LBB600:
 1299              	.LBB601:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1300              		.loc 1 931 0
 1301 0182 804B6D04 		orb	$4, 109(%rbx)
 1302              	.LBE601:
 1303              	.LBE600:
 1304              	.LBB602:
 1305              	.LBB603:
 702:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1306              		.loc 1 702 0
 1307 0186 83C802   		orl	$2, %eax
 1308 0189 89835801 		movl	%eax, 344(%rbx)
 1308      0000
 1309              	.LVL135:
 1310 018f 90       		.p2align 4,,10
 1311              		.p2align 3
 1312              	.L97:
 1313              	.LBE603:
 1314              	.LBE602:
 391:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 1315              		.loc 4 391 0
 1316 0190 4C8D4424 		leaq	36(%rsp), %r8
 1316      24
 1317 0195 488D4C24 		leaq	32(%rsp), %rcx
 1317      20
 1318 019a 488D5424 		leaq	28(%rsp), %rdx
 1318      1C
 1319 019f 488D7424 		leaq	24(%rsp), %rsi
 1319      18
 1320 01a4 4889DF   		movq	%rbx, %rdi
 1321 01a7 E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 1321      00
 1322              	.LVL136:
 1323              	.LBB604:
 1324              	.LBB605:
 1325              		.file 5 "fltk-1.3.4-1/FL/fl_draw.H"
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
 1326              		.loc 5 82 0
 1327 01ac 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1327      000000
 1328 01b3 448B4424 		movl	36(%rsp), %r8d
 1328      24
 1329 01b8 8B4C2420 		movl	32(%rsp), %ecx
 1330 01bc 8B54241C 		movl	28(%rsp), %edx
 1331 01c0 8B742418 		movl	24(%rsp), %esi
 1332 01c4 488B07   		movq	(%rdi), %rax
 1333 01c7 FF905001 		call	*336(%rax)
 1333      0000
 1334              	.LVL137:
 1335 01cd 4C8BBBC8 		movq	200(%rbx), %r15
 1335      000000
 1336              	.LVL138:
 1337              	.LBE605:
 1338              	.LBE604:
 397:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 1339              		.loc 4 397 0
 1340 01d4 8BABB000 		movl	176(%rbx), %ebp
 1340      0000
 1341 01da F7DD     		negl	%ebp
 1342              	.LVL139:
 1343              	.LBB606:
 398:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 1344              		.loc 4 398 0
 1345 01dc 4D85FF   		testq	%r15, %r15
 1346 01df 753C     		jne	.L115
 1347 01e1 E94A0100 		jmp	.L98
 1347      00
 1348              	.LVL140:
 1349 01e6 662E0F1F 		.p2align 4,,10
 1349      84000000 
 1349      0000
 1350              		.p2align 3
 1351              	.L202:
 1352              	.LBB607:
 1353              	.LBB608:
 401:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 1354              		.loc 4 401 0 discriminator 2
 1355 01f0 4C39BBD8 		cmpq	%r15, 216(%rbx)
 1355      000000
 1356 01f7 7449     		je	.L103
 401:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 1357              		.loc 4 401 0 is_stmt 0 discriminator 4
 1358 01f9 4C39BBE0 		cmpq	%r15, 224(%rbx)
 1358      000000
 1359 0200 7440     		je	.L103
 1360              	.LVL141:
 1361              	.L104:
 1362              	.LBE608:
 418:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 1363              		.loc 4 418 0 is_stmt 1
 1364 0202 4401F5   		addl	%r14d, %ebp
 1365              	.LVL142:
 1366              	.L102:
 1367              	.LBE607:
 398:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 1368              		.loc 4 398 0
 1369 0205 488B03   		movq	(%rbx), %rax
 1370 0208 4C89FE   		movq	%r15, %rsi
 1371 020b 4889DF   		movq	%rbx, %rdi
 1372 020e FF5058   		call	*88(%rax)
 1373              	.LVL143:
 1374 0211 4885C0   		testq	%rax, %rax
 1375 0214 4989C7   		movq	%rax, %r15
 1376              	.LVL144:
 1377 0217 0F841301 		je	.L98
 1377      0000
 1378              	.LVL145:
 1379              	.L115:
 398:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 1380              		.loc 4 398 0 is_stmt 0 discriminator 1
 1381 021d 3B6C2424 		cmpl	36(%rsp), %ebp
 1382 0221 0F8D7801 		jge	.L116
 1382      0000
 1383              	.LBB629:
 399:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 1384              		.loc 4 399 0 is_stmt 1
 1385 0227 488B03   		movq	(%rbx), %rax
 1386 022a 4C89FE   		movq	%r15, %rsi
 1387 022d 4889DF   		movq	%rbx, %rdi
 1388 0230 FF5070   		call	*112(%rax)
 1389              	.LVL146:
 400:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1390              		.loc 4 400 0
 1391 0233 85C0     		testl	%eax, %eax
 399:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 1392              		.loc 4 399 0
 1393 0235 4189C6   		movl	%eax, %r14d
 1394              	.LVL147:
 400:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1395              		.loc 4 400 0
 1396 0238 7ECB     		jle	.L102
 1397 023a 0FB6436D 		movzbl	109(%rbx), %eax
 1398              	.LVL148:
 1399              	.LBB625:
 401:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 1400              		.loc 4 401 0
 1401 023e A884     		testb	$-124, %al
 1402 0240 74AE     		je	.L202
 1403              	.L103:
 1404              	.LBB609:
 402:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 1405              		.loc 4 402 0
 1406 0242 488B13   		movq	(%rbx), %rdx
 1407 0245 488B92C8 		movq	200(%rdx), %rdx
 1407      000000
 1408 024c 4881FA00 		cmpq	$_ZNK11Fl_Browser_13item_selectedEPv, %rdx
 1408      000000
 1409 0253 0F85A702 		jne	.L203
 1409      0000
 1410              	.LVL149:
 1411              	.LBB610:
 1412              	.LBB611:
 1413              		.loc 4 1098 0
 1414 0259 4C3BBBD0 		cmpq	208(%rbx), %r15
 1414      000000
 1415 0260 0F84AA02 		je	.L108
 1415      0000
 1416              	.LVL150:
 1417              	.L105:
 1418              	.LBE611:
 1419              	.LBE610:
 405:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1420              		.loc 4 405 0
 1421 0266 84C0     		testb	%al, %al
 1422 0268 785F     		js	.L110
 1423              	.LVL151:
 1424              	.LBB612:
 1425              	.LBB613:
 1426              		.loc 5 82 0
 1427 026a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1427      000000
 1428 0271 8B54241C 		movl	28(%rsp), %edx
 1429 0275 4589F0   		movl	%r14d, %r8d
 1430 0278 8B4C2420 		movl	32(%rsp), %ecx
 1431 027c 8B742418 		movl	24(%rsp), %esi
 1432 0280 488B07   		movq	(%rdi), %rax
 1433 0283 01EA     		addl	%ebp, %edx
 1434              	.LVL152:
 1435 0285 FF905001 		call	*336(%rax)
 1435      0000
 1436              	.LVL153:
 1437              	.LBE613:
 1438              	.LBE612:
 1439              	.LBB614:
 1440              	.LBB615:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1441              		.loc 1 363 0
 1442 028b 0FB6736E 		movzbl	110(%rbx), %esi
 1443 028f 8B4364   		movl	100(%rbx), %eax
 1444              	.LVL154:
 1445              	.LBE615:
 1446              	.LBE614:
 407:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1447              		.loc 4 407 0
 1448 0292 BF030000 		movl	$3, %edi
 1448      00
 1449 0297 8B5320   		movl	32(%rbx), %edx
 1450 029a 8B4B24   		movl	36(%rbx), %ecx
 1451              	.LVL155:
 1452 029d 448B4B2C 		movl	44(%rbx), %r9d
 1453 02a1 448B4328 		movl	40(%rbx), %r8d
 1454 02a5 85F6     		testl	%esi, %esi
 1455 02a7 0F44F7   		cmove	%edi, %esi
 1456 02aa 4883EC08 		subq	$8, %rsp
 1457              		.cfi_def_cfa_offset 120
 1458 02ae 4889DF   		movq	%rbx, %rdi
 1459 02b1 50       		pushq	%rax
 1460              		.cfi_def_cfa_offset 128
 1461 02b2 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1461      00
 1462              	.LVL156:
 1463              	.LBB616:
 1464              	.LBB617:
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
 1465              		.loc 5 103 0
 1466 02b7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1466      000000
 1467 02be 488B07   		movq	(%rdi), %rax
 1468 02c1 FF907001 		call	*368(%rax)
 1468      0000
 1469              	.LVL157:
 1470 02c7 58       		popq	%rax
 1471              		.cfi_def_cfa_offset 120
 1472 02c8 5A       		popq	%rdx
 1473              		.cfi_def_cfa_offset 112
 1474              	.LVL158:
 1475              	.L110:
 1476              	.LBE617:
 1477              	.LBE616:
 410:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 1478              		.loc 4 410 0
 1479 02c9 448B83A8 		movl	168(%rbx), %r8d
 1479      000000
 1480 02d0 8B542418 		movl	24(%rsp), %edx
 1481 02d4 4589F1   		movl	%r14d, %r9d
 1482 02d7 8B4C241C 		movl	28(%rsp), %ecx
 1483 02db 488B03   		movq	(%rbx), %rax
 1484 02de 4C89FE   		movq	%r15, %rsi
 1485 02e1 4889DF   		movq	%rbx, %rdi
 1486 02e4 4429C2   		subl	%r8d, %edx
 1487 02e7 44034424 		addl	32(%rsp), %r8d
 1487      20
 1488 02ec 01E9     		addl	%ebp, %ecx
 1489 02ee FF908800 		call	*136(%rax)
 1489      0000
 1490              	.LVL159:
 411:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1491              		.loc 4 411 0
 1492 02f4 4C39BBD0 		cmpq	%r15, 208(%rbx)
 1492      000000
 1493 02fb 0F843F04 		je	.L204
 1493      0000
 1494              	.L112:
 415:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 1495              		.loc 4 415 0
 1496 0301 488B03   		movq	(%rbx), %rax
 1497 0304 4C89FE   		movq	%r15, %rsi
 1498 0307 4889DF   		movq	%rbx, %rdi
 1499 030a FF5078   		call	*120(%rax)
 1500              	.LVL160:
 416:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 1501              		.loc 4 416 0
 1502 030d 3B83B400 		cmpl	180(%rbx), %eax
 1502      0000
 1503 0313 0F8EE9FE 		jle	.L104
 1503      FFFF
 416:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 1504              		.loc 4 416 0 is_stmt 0 discriminator 1
 1505 0319 8983B400 		movl	%eax, 180(%rbx)
 1505      0000
 1506 031f 4C89BBE8 		movq	%r15, 232(%rbx)
 1506      000000
 1507 0326 E9D7FEFF 		jmp	.L104
 1507      FF
 1508              	.LVL161:
 1509 032b 0F1F4400 		.p2align 4,,10
 1509      00
 1510              		.p2align 3
 1511              	.L98:
 1512              	.LBE609:
 1513              	.LBE625:
 1514              	.LBE629:
 1515              	.LBE606:
 421:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1516              		.loc 4 421 0 is_stmt 1
 1517 0330 807B6D00 		cmpb	$0, 109(%rbx)
 1518 0334 7869     		js	.L116
 421:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1519              		.loc 4 421 0 is_stmt 0 discriminator 1
 1520 0336 448B4424 		movl	36(%rsp), %r8d
 1520      24
 1521 033b 4439C5   		cmpl	%r8d, %ebp
 1522 033e 7D5F     		jge	.L116
 1523              	.LVL162:
 1524              	.LBB633:
 1525              	.LBB634:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1526              		.loc 5 82 0 is_stmt 1
 1527 0340 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1527      000000
 1528 0347 8B54241C 		movl	28(%rsp), %edx
 1529 034b 4129E8   		subl	%ebp, %r8d
 1530              	.LVL163:
 1531 034e 8B4C2420 		movl	32(%rsp), %ecx
 1532 0352 8B742418 		movl	24(%rsp), %esi
 1533 0356 488B07   		movq	(%rdi), %rax
 1534 0359 01EA     		addl	%ebp, %edx
 1535              	.LVL164:
 1536 035b FF905001 		call	*336(%rax)
 1536      0000
 1537              	.LVL165:
 1538              	.LBE634:
 1539              	.LBE633:
 1540              	.LBB635:
 1541              	.LBB636:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1542              		.loc 1 363 0
 1543 0361 0FB6736E 		movzbl	110(%rbx), %esi
 1544              	.LBE636:
 1545              	.LBE635:
 423:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1546              		.loc 4 423 0
 1547 0365 B8030000 		movl	$3, %eax
 1547      00
 1548 036a 8B5320   		movl	32(%rbx), %edx
 1549 036d 8B4B24   		movl	36(%rbx), %ecx
 1550 0370 448B4B2C 		movl	44(%rbx), %r9d
 1551 0374 4889DF   		movq	%rbx, %rdi
 1552 0377 448B4328 		movl	40(%rbx), %r8d
 1553 037b 85F6     		testl	%esi, %esi
 1554 037d 0F44F0   		cmove	%eax, %esi
 1555 0380 8B4364   		movl	100(%rbx), %eax
 1556 0383 4883EC08 		subq	$8, %rsp
 1557              		.cfi_def_cfa_offset 120
 1558 0387 50       		pushq	%rax
 1559              		.cfi_def_cfa_offset 128
 1560 0388 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1560      00
 1561              	.LVL166:
 1562              	.LBB637:
 1563              	.LBB638:
 1564              		.loc 5 103 0
 1565 038d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1565      000000
 1566 0394 488B07   		movq	(%rdi), %rax
 1567 0397 FF907001 		call	*368(%rax)
 1567      0000
 1568              	.LVL167:
 1569 039d 58       		popq	%rax
 1570              		.cfi_def_cfa_offset 120
 1571 039e 5A       		popq	%rdx
 1572              		.cfi_def_cfa_offset 112
 1573              	.LVL168:
 1574              	.L116:
 1575              	.LBE638:
 1576              	.LBE637:
 1577              	.LBB639:
 1578              	.LBB640:
 1579 039f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1579      000000
 1580 03a6 488B07   		movq	(%rdi), %rax
 1581 03a9 FF907001 		call	*368(%rax)
 1581      0000
 1582              	.LVL169:
 1583              	.LBE640:
 1584              	.LBE639:
 1585              	.LBB641:
 1586              	.LBB642:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1587              		.loc 5 82 0
 1588 03af 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1588      000000
 1589 03b6 8B4B28   		movl	40(%rbx), %ecx
 1590 03b9 8B5324   		movl	36(%rbx), %edx
 1591 03bc 8B7320   		movl	32(%rbx), %esi
 1592 03bf 448B432C 		movl	44(%rbx), %r8d
 1593 03c3 488B07   		movq	(%rdi), %rax
 1594 03c6 FF905001 		call	*336(%rax)
 1594      0000
 1595              	.LVL170:
 1596              	.LBE642:
 1597              	.LBE641:
 430:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1598              		.loc 4 430 0
 1599 03cc 4585E4   		testl	%r12d, %r12d
 429:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 1600              		.loc 4 429 0
 1601 03cf 48C783E0 		movq	$0, 224(%rbx)
 1601      00000000 
 1601      000000
 1602 03da 48C783D8 		movq	$0, 216(%rbx)
 1602      00000000 
 1602      000000
 430:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1603              		.loc 4 430 0
 1604 03e5 0F855702 		jne	.L118
 1604      0000
 1605              	.LVL171:
 434:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 1606              		.loc 4 434 0
 1607 03eb 488B03   		movq	(%rbx), %rax
 1608 03ee 4889DF   		movq	%rbx, %rdi
 1609 03f1 FF90B000 		call	*176(%rax)
 1609      0000
 1610              	.LVL172:
 1611 03f7 4189C5   		movl	%eax, %r13d
 1612              	.LVL173:
 435:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 1613              		.loc 4 435 0
 1614 03fa 488B03   		movq	(%rbx), %rax
 1615              	.LVL174:
 1616 03fd 488B80A8 		movq	168(%rax), %rax
 1616      000000
 1617 0404 483D0000 		cmpq	$_ZNK11Fl_Browser_10full_widthEv, %rax
 1617      0000
 1618 040a 0F859003 		jne	.L119
 1618      0000
 1619              	.LVL175:
 1620              	.LBB643:
 1621              	.LBB644:
1078:fltk-1.3.4-1/src/Fl_Browser_.cxx ****    5:fltk-1.3.4-1/FL/Fl_Group.H **** //
 1622              		.loc 4 1078 0
 1623 0410 8B83B400 		movl	180(%rbx), %eax
 1623      0000
 1624 0416 89442408 		movl	%eax, 8(%rsp)
 1625              	.LVL176:
 1626              	.L120:
 1627              	.LBE644:
 1628              	.LBE643:
 436:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1629              		.loc 4 436 0
 1630 041a 0FB683B8 		movzbl	184(%rbx), %eax
 1630      000000
 1631 0421 A802     		testb	$2, %al
 1632 0423 0F84F701 		je	.L121
 1632      0000
 436:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1633              		.loc 4 436 0 is_stmt 0 discriminator 1
 1634 0429 A804     		testb	$4, %al
 1635 042b 751B     		jne	.L122
 437:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 1636              		.loc 4 437 0 is_stmt 1
 1637 042d 448B9BA0 		movl	160(%rbx), %r11d
 1637      000000
 1638 0434 4585DB   		testl	%r11d, %r11d
 1639 0437 750F     		jne	.L122
 437:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 1640              		.loc 4 437 0 is_stmt 0 discriminator 1
 1641 0439 443B6C24 		cmpl	36(%rsp), %r13d
 1641      24
 1642 043e 0F8EDC01 		jle	.L121
 1642      0000
 1643              		.p2align 4,,10
 1644 0444 0F1F4000 		.p2align 3
 1645              	.L122:
 1646              	.LVL177:
 438:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1647              		.loc 4 438 0 is_stmt 1
 1648 0448 F6835801 		testb	$2, 344(%rbx)
 1648      000002
 1649 044f 753C     		jne	.L194
 442:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 1650              		.loc 4 442 0
 1651 0451 A801     		testb	$1, %al
 1652 0453 0F84DC01 		je	.L125
 1652      0000
 1653              	.LVL178:
 1654              	.L208:
 442:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 1655              		.loc 4 442 0 is_stmt 0 discriminator 1
 1656 0459 A804     		testb	$4, %al
 1657 045b 7523     		jne	.L126
 443:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 1658              		.loc 4 443 0 is_stmt 1
 1659 045d 448B93A8 		movl	168(%rbx), %r10d
 1659      000000
 1660 0464 4585D2   		testl	%r10d, %r10d
 1661 0467 7517     		jne	.L126
 443:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 1662              		.loc 4 443 0 is_stmt 0 discriminator 1
 1663 0469 8B442408 		movl	8(%rsp), %eax
 1664 046d 3B442420 		cmpl	32(%rsp), %eax
 1665 0471 0F8EBE01 		jle	.L125
 1665      0000
 1666 0477 660F1F84 		.p2align 4,,10
 1666      00000000 
 1666      00
 1667              		.p2align 3
 1668              	.L126:
 1669              	.LVL179:
 444:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 1670              		.loc 4 444 0 is_stmt 1
 1671 0480 F6831002 		testb	$2, 528(%rbx)
 1671      000002
 1672 0487 0F84B501 		je	.L118
 1672      0000
 1673              	.LVL180:
 1674              	.L194:
 446:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 1675              		.loc 4 446 0 discriminator 1
 1676 048d BE800000 		movl	$128, %esi
 1676      00
 1677 0492 4889DF   		movq	%rbx, %rdi
 1678 0495 41BC0100 		movl	$1, %r12d
 1678      0000
 1679 049b E8000000 		call	_ZN9Fl_Widget6damageEh
 1679      00
 1680              	.LVL181:
 1681              	.LBB645:
 1682              	.LBB646:
 1683              		.loc 5 103 0 discriminator 1
 1684 04a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1684      000000
 1685 04a7 488B07   		movq	(%rdi), %rax
 1686 04aa FF907001 		call	*368(%rax)
 1686      0000
 1687              	.LVL182:
 1688              	.LBE646:
 1689              	.LBE645:
 1690              	.LBB647:
 337:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1691              		.loc 4 337 0 discriminator 1
 1692 04b0 807B6D00 		cmpb	$0, 109(%rbx)
 1693 04b4 0F89CEFB 		jns	.L86
 1693      FFFF
 1694              	.LVL183:
 1695              	.L200:
 1696              	.LBB591:
 1697              	.LBB592:
 1698              	.LBB593:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1699              		.loc 1 363 0
 1700 04ba 0FB6736E 		movzbl	110(%rbx), %esi
 1701              	.LBE593:
 1702              	.LBE592:
 338:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 1703              		.loc 4 338 0
 1704 04be B8030000 		movl	$3, %eax
 1704      00
 339:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 1705              		.loc 4 339 0
 1706 04c3 448B4B2C 		movl	44(%rbx), %r9d
 1707 04c7 448B4328 		movl	40(%rbx), %r8d
 1708 04cb 8B4B24   		movl	36(%rbx), %ecx
 1709 04ce 4889DF   		movq	%rbx, %rdi
 1710 04d1 8B5320   		movl	32(%rbx), %edx
 338:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 1711              		.loc 4 338 0
 1712 04d4 85F6     		testl	%esi, %esi
 1713 04d6 0F44F0   		cmove	%eax, %esi
 1714              	.LVL184:
 339:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 1715              		.loc 4 339 0
 1716 04d9 8B4364   		movl	100(%rbx), %eax
 1717 04dc 4883EC08 		subq	$8, %rsp
 1718              		.cfi_def_cfa_offset 120
 1719 04e0 50       		pushq	%rax
 1720              		.cfi_def_cfa_offset 128
 1721 04e1 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1721      00
 1722              	.LVL185:
 1723              	.LBE591:
 1724 04e6 4158     		popq	%r8
 1725              		.cfi_def_cfa_offset 120
 1726 04e8 4159     		popq	%r9
 1727              		.cfi_def_cfa_offset 112
 1728              	.LBB594:
 340:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1729              		.loc 4 340 0
 1730 04ea C744240C 		movl	$1, 12(%rsp)
 1730      01000000 
 1731              	.LBE594:
 1732 04f2 E991FBFF 		jmp	.L86
 1732      FF
 1733              	.LVL186:
 1734 04f7 660F1F84 		.p2align 4,,10
 1734      00000000 
 1734      00
 1735              		.p2align 3
 1736              	.L203:
 1737              	.LBE647:
 1738              	.LBB648:
 1739              	.LBB630:
 1740              	.LBB626:
 1741              	.LBB622:
 402:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 1742              		.loc 4 402 0
 1743 0500 4C89FE   		movq	%r15, %rsi
 1744 0503 4889DF   		movq	%rbx, %rdi
 1745 0506 FFD2     		call	*%rdx
 1746              	.LVL187:
 1747 0508 85C0     		testl	%eax, %eax
 1748 050a 0F841F04 		je	.L205
 1748      0000
 1749              	.L108:
 403:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 1750              		.loc 4 403 0
 1751 0510 4889DF   		movq	%rbx, %rdi
 1752 0513 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 1752      00
 1753              	.LVL188:
 1754 0518 85C0     		testl	%eax, %eax
 1755 051a 0F849002 		je	.L206
 1755      0000
 1756 0520 8B7368   		movl	104(%rbx), %esi
 1757              	.LVL189:
 1758              	.L109:
 1759              	.LBB618:
 1760              	.LBB619:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1761              		.loc 5 52 0 discriminator 4
 1762 0523 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1762      000000
 1763 052a 488B17   		movq	(%rdi), %rdx
 1764 052d FF928800 		call	*136(%rdx)
 1764      0000
 1765              	.LVL190:
 1766              	.LBE619:
 1767              	.LBE618:
 1768              	.LBB620:
 1769              	.LBB621:
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
 1770              		.loc 5 206 0 discriminator 4
 1771 0533 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1771      000000
 1772 053a 8B54241C 		movl	28(%rsp), %edx
 1773 053e 4589F0   		movl	%r14d, %r8d
 1774 0541 8B4C2420 		movl	32(%rsp), %ecx
 1775 0545 8B742418 		movl	24(%rsp), %esi
 1776 0549 488B07   		movq	(%rdi), %rax
 1777 054c 01EA     		addl	%ebp, %edx
 1778              	.LVL191:
 1779 054e FF5020   		call	*32(%rax)
 1780              	.LVL192:
 1781 0551 E973FDFF 		jmp	.L110
 1781      FF
 1782              	.LVL193:
 1783 0556 662E0F1F 		.p2align 4,,10
 1783      84000000 
 1783      0000
 1784              		.p2align 3
 1785              	.L89:
 1786 0560 8B935801 		movl	344(%rbx), %edx
 1786      0000
 1787              	.LVL194:
 1788              	.LBE621:
 1789              	.LBE620:
 1790              	.LBE622:
 1791              	.LBE626:
 1792              	.LBE630:
 1793              	.LBE648:
 345:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 1794              		.loc 4 345 0
 1795 0566 F6C202   		testb	$2, %dl
 1796 0569 0F8487FB 		je	.L90
 1796      FFFF
 1797              	.LVL195:
 1798              	.LBB649:
 1799              	.LBB650:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1800              		.loc 1 696 0
 1801 056f 83E2FD   		andl	$-3, %edx
 1802              	.LBE650:
 1803              	.LBE649:
 348:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 1804              		.loc 4 348 0
 1805 0572 4C8D4424 		leaq	36(%rsp), %r8
 1805      24
 1806 0577 488D4C24 		leaq	32(%rsp), %rcx
 1806      20
 1807              	.LBB652:
 1808              	.LBB651:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1809              		.loc 1 696 0
 1810 057c 89935801 		movl	%edx, 344(%rbx)
 1810      0000
 1811              	.LVL196:
 1812              	.LBE651:
 1813              	.LBE652:
 348:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 1814              		.loc 4 348 0
 1815 0582 488D7424 		leaq	24(%rsp), %rsi
 1815      18
 1816 0587 488D5424 		leaq	28(%rsp), %rdx
 1816      1C
 1817 058c 4889DF   		movq	%rbx, %rdi
 1818 058f E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 1818      00
 1819              	.LVL197:
 1820 0594 0FB683B8 		movzbl	184(%rbx), %eax
 1820      000000
 347:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1821              		.loc 4 347 0
 1822 059b C744240C 		movl	$1, 12(%rsp)
 1822      01000000 
 1823              	.LVL198:
 358:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1824              		.loc 4 358 0
 1825 05a3 A801     		testb	$1, %al
 1826 05a5 0F8553FB 		jne	.L207
 1826      FFFF
 1827              	.LVL199:
 1828 05ab 0F1F4400 		.p2align 4,,10
 1828      00
 1829              		.p2align 3
 1830              	.L92:
 1831 05b0 8B931002 		movl	528(%rbx), %edx
 1831      0000
 366:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 1832              		.loc 4 366 0
 1833 05b6 C783AC00 		movl	$0, 172(%rbx)
 1833      00000000 
 1833      0000
 1834              	.LVL200:
 367:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 1835              		.loc 4 367 0
 1836 05c0 F6C202   		testb	$2, %dl
 1837 05c3 0F8566FB 		jne	.L94
 1837      FFFF
 1838              	.LVL201:
 1839              	.LBB653:
 1840              	.LBB654:
 702:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1841              		.loc 1 702 0
 1842 05c9 83CA02   		orl	$2, %edx
 1843              	.LBE654:
 1844              	.LBE653:
 1845              	.LBB656:
 1846              	.LBB657:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1847              		.loc 1 931 0
 1848 05cc 804B6D04 		orb	$4, 109(%rbx)
 1849              	.LBE657:
 1850              	.LBE656:
 1851              	.LBB658:
 1852              	.LBB655:
 702:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1853              		.loc 1 702 0
 1854 05d0 89931002 		movl	%edx, 528(%rbx)
 1854      0000
 1855              	.LVL202:
 1856 05d6 E954FBFF 		jmp	.L94
 1856      FF
 1857              	.LVL203:
 1858 05db 0F1F4400 		.p2align 4,,10
 1858      00
 1859              		.p2align 3
 1860              	.L96:
 1861 05e0 8B835801 		movl	344(%rbx), %eax
 1861      0000
 1862              	.LVL204:
 1863              	.LBE655:
 1864              	.LBE658:
 378:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1865              		.loc 4 378 0
 1866 05e6 A802     		testb	$2, %al
 1867 05e8 0F84A2FB 		je	.L97
 1867      FFFF
 1868              	.LVL205:
 1869              	.LBB659:
 1870              	.LBB660:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1871              		.loc 1 696 0
 1872 05ee 83E0FD   		andl	$-3, %eax
 1873              	.LBE660:
 1874              	.LBE659:
 381:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 1875              		.loc 4 381 0
 1876 05f1 4C8D4424 		leaq	36(%rsp), %r8
 1876      24
 1877 05f6 488D4C24 		leaq	32(%rsp), %rcx
 1877      20
 1878 05fb 488D5424 		leaq	28(%rsp), %rdx
 1878      1C
 1879 0600 488D7424 		leaq	24(%rsp), %rsi
 1879      18
 1880              	.LBB662:
 1881              	.LBB661:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1882              		.loc 1 696 0
 1883 0605 89835801 		movl	%eax, 344(%rbx)
 1883      0000
 1884              	.LVL206:
 1885              	.LBE661:
 1886              	.LBE662:
 381:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 1887              		.loc 4 381 0
 1888 060b 4889DF   		movq	%rbx, %rdi
 1889 060e E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 1889      00
 1890              	.LVL207:
 380:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1891              		.loc 4 380 0
 1892 0613 C744240C 		movl	$1, 12(%rsp)
 1892      01000000 
 1893 061b E970FBFF 		jmp	.L97
 1893      FF
 1894              	.LVL208:
 1895              		.p2align 4,,10
 1896              		.p2align 3
 1897              	.L121:
 440:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1898              		.loc 4 440 0
 1899 0620 F6835801 		testb	$2, 344(%rbx)
 1899      000002
 1900 0627 0F8460FE 		je	.L194
 1900      FFFF
 442:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 1901              		.loc 4 442 0
 1902 062d A801     		testb	$1, %al
 1903 062f 0F8524FE 		jne	.L208
 1903      FFFF
 1904              	.LVL209:
 1905              	.L125:
 446:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 1906              		.loc 4 446 0
 1907 0635 F6831002 		testb	$2, 528(%rbx)
 1907      000002
 1908 063c 0F844BFE 		je	.L194
 1908      FFFF
 1909              	.LVL210:
 1910              	.L118:
 451:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 1911              		.loc 4 451 0
 1912 0642 8BABF000 		movl	240(%rbx), %ebp
 1912      0000
 1913              	.LVL211:
 1914 0648 85ED     		testl	%ebp, %ebp
 1915 064a 0F849302 		je	.L209
 1915      0000
 1916              	.L127:
 1917              	.LVL212:
 452:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 1918              		.loc 4 452 0 discriminator 4
 1919 0650 488BB3C8 		movq	200(%rbx), %rsi
 1919      000000
 1920 0657 4885F6   		testq	%rsi, %rsi
 1921 065a 0F846202 		je	.L130
 1921      0000
 452:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 1922              		.loc 4 452 0 is_stmt 0 discriminator 1
 1923 0660 488B03   		movq	(%rbx), %rax
 1924 0663 4889DF   		movq	%rbx, %rdi
 1925 0666 FF908000 		call	*128(%rax)
 1925      0000
 1926              	.LVL213:
 1927 066c 83F809   		cmpl	$9, %eax
 1928 066f 4189C4   		movl	%eax, %r12d
 1929              	.LVL214:
 1930 0672 0F8E4A02 		jle	.L130
 1930      0000
 1931              	.LVL215:
 1932              	.L129:
 453:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 1933              		.loc 4 453 0 is_stmt 1
 1934 0678 F6835801 		testb	$2, 344(%rbx)
 1934      000002
 1935 067f 0F857401 		jne	.L131
 1935      0000
 454:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1936              		.loc 4 454 0
 1937 0685 F6834C01 		testb	$4, 332(%rbx)
 1937      000004
 456:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 1938              		.loc 4 456 0
 1939 068c 448B4424 		movl	36(%rsp), %r8d
 1939      24
 1940 0691 8B54241C 		movl	28(%rsp), %edx
 1941              	.LVL216:
 454:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1942              		.loc 4 454 0
 1943 0695 0F853D02 		jne	.L210
 1943      0000
 454:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1944              		.loc 4 454 0 is_stmt 0 discriminator 2
 1945 069b 8B742420 		movl	32(%rsp), %esi
 1946 069f 03742418 		addl	24(%rsp), %esi
 1947              	.L133:
 454:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1948              		.loc 4 454 0 discriminator 4
 1949 06a3 4C8DB3F8 		leaq	248(%rbx), %r14
 1949      000000
 456:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 1950              		.loc 4 456 0 is_stmt 1 discriminator 4
 1951 06aa 89E9     		movl	%ebp, %ecx
 1952 06ac 4C89F7   		movq	%r14, %rdi
 1953 06af E8000000 		call	_ZN9Fl_Widget13damage_resizeEiiii
 1953      00
 1954              	.LVL217:
 1955              	.LBB663:
 1956              	.LBB664:
 1957              		.file 6 "fltk-1.3.4-1/FL/Fl_Scrollbar.H"
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
 1958              		.loc 6 90 0 discriminator 4
 1959 06b4 8BB3A000 		movl	160(%rbx), %esi
 1959      0000
 1960 06ba 8B542424 		movl	36(%rsp), %edx
 1961 06be 31C9     		xorl	%ecx, %ecx
 1962 06c0 4C89F7   		movq	%r14, %rdi
 1963 06c3 4589E8   		movl	%r13d, %r8d
 1964 06c6 E8000000 		call	_ZN9Fl_Slider11scrollvalueEiiii
 1964      00
 1965              	.LVL218:
 1966              	.LBE664:
 1967              	.LBE663:
 459:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 1968              		.loc 4 459 0 discriminator 4
 1969 06cb 448B4C24 		movl	12(%rsp), %r9d
 1969      0C
 1970              	.LBB665:
 1971              	.LBB666:
  91:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   }
  92:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  93:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   /**
  94:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     Get the size of step, in lines, that the arror keys move.
  95:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   */
  96:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   int linesize() const {return linesize_;}
  97:fltk-1.3.4-1/FL/Fl_Scrollbar.H **** 
  98:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   /**
  99:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     This number controls how big the steps are that the arrow keys do.
 100:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     In addition page up/down move by the size last sent to value()
 101:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****     minus one linesize().  The default is 16.
 102:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   */
 103:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   void linesize(int i) {linesize_ = i;}
 1972              		.loc 6 103 0 discriminator 4
 1973 06d0 4489A3A4 		movl	%r12d, 420(%rbx)
 1973      010000
 1974              	.LVL219:
 1975              	.LBE666:
 1976              	.LBE665:
 459:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 1977              		.loc 4 459 0 discriminator 4
 1978 06d7 4C89F6   		movq	%r14, %rsi
 1979 06da 4889DF   		movq	%rbx, %rdi
 1980 06dd 4585C9   		testl	%r9d, %r9d
 1981 06e0 0F840902 		je	.L134
 1981      0000
 459:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 1982              		.loc 4 459 0 is_stmt 0 discriminator 1
 1983 06e6 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 1983      00
 1984              	.LVL220:
 462:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1985              		.loc 4 462 0 is_stmt 1 discriminator 1
 1986 06eb F6831002 		testb	$2, 528(%rbx)
 1986      000002
 1987 06f2 0F840E01 		je	.L137
 1987      0000
 1988              	.LVL221:
 1989              	.L143:
 478:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 1990              		.loc 4 478 0
 1991 06f8 8B83A800 		movl	168(%rbx), %eax
 1991      0000
 1992              	.LBB667:
 1993              	.LBB668:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1994              		.loc 5 103 0
 1995 06fe 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1995      000000
 1996              	.LBE668:
 1997              	.LBE667:
 478:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 1998              		.loc 4 478 0
 1999 0705 8983AC00 		movl	%eax, 172(%rbx)
 1999      0000
 2000              	.LBB670:
 2001              	.LBB669:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2002              		.loc 5 103 0
 2003 070b 488B07   		movq	(%rdi), %rax
 2004 070e FF907001 		call	*368(%rax)
 2004      0000
 2005              	.LVL222:
 2006              	.LBE669:
 2007              	.LBE670:
 480:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 2008              		.loc 4 480 0
 2009 0714 488B4424 		movq	40(%rsp), %rax
 2009      28
 2010 0719 64483304 		xorq	%fs:40, %rax
 2010      25280000 
 2010      00
 2011 0722 0F851002 		jne	.L211
 2011      0000
 2012 0728 4883C438 		addq	$56, %rsp
 2013              		.cfi_remember_state
 2014              		.cfi_def_cfa_offset 56
 2015 072c 5B       		popq	%rbx
 2016              		.cfi_def_cfa_offset 48
 2017              	.LVL223:
 2018 072d 5D       		popq	%rbp
 2019              		.cfi_def_cfa_offset 40
 2020              	.LVL224:
 2021 072e 415C     		popq	%r12
 2022              		.cfi_def_cfa_offset 32
 2023              	.LVL225:
 2024 0730 415D     		popq	%r13
 2025              		.cfi_def_cfa_offset 24
 2026 0732 415E     		popq	%r14
 2027              		.cfi_def_cfa_offset 16
 2028 0734 415F     		popq	%r15
 2029              		.cfi_def_cfa_offset 8
 2030              	.LVL226:
 2031 0736 C3       		ret
 2032              	.LVL227:
 2033 0737 660F1F84 		.p2align 4,,10
 2033      00000000 
 2033      00
 2034              		.p2align 3
 2035              	.L204:
 2036              		.cfi_restore_state
 2037              	.LBB671:
 2038              	.LBB631:
 2039              	.LBB627:
 2040              	.LBB623:
 411:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2041              		.loc 4 411 0
 2042 0740 48391D00 		cmpq	%rbx, _ZN2Fl6focus_E(%rip)
 2042      000000
 2043 0747 0F85B4FB 		jne	.L112
 2043      FFFF
 2044              	.LVL228:
 412:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 2045              		.loc 4 412 0
 2046 074d 8B4364   		movl	100(%rbx), %eax
 2047 0750 8B4C241C 		movl	28(%rsp), %ecx
 2048 0754 4883EC08 		subq	$8, %rsp
 2049              		.cfi_def_cfa_offset 120
 2050 0758 4589F1   		movl	%r14d, %r9d
 2051 075b BE100000 		movl	$16, %esi
 2051      00
 2052 0760 4889DF   		movq	%rbx, %rdi
 2053 0763 50       		pushq	%rax
 2054              		.cfi_def_cfa_offset 128
 2055 0764 448B4424 		movl	48(%rsp), %r8d
 2055      30
 2056 0769 01E9     		addl	%ebp, %ecx
 2057 076b 8B542428 		movl	40(%rsp), %edx
 2058 076f E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2058      00
 2059              	.LVL229:
 413:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2060              		.loc 4 413 0
 2061 0774 8B442430 		movl	48(%rsp), %eax
 2062 0778 8B4C242C 		movl	44(%rsp), %ecx
 2063 077c 458D4E01 		leal	1(%r14), %r9d
 2064 0780 8B542428 		movl	40(%rsp), %edx
 2065 0784 31F6     		xorl	%esi, %esi
 2066 0786 4889DF   		movq	%rbx, %rdi
 2067 0789 448D4001 		leal	1(%rax), %r8d
 2068 078d 01E9     		addl	%ebp, %ecx
 2069 078f E8000000 		call	_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
 2069      00
 2070              	.LVL230:
 2071 0794 59       		popq	%rcx
 2072              		.cfi_def_cfa_offset 120
 2073 0795 5E       		popq	%rsi
 2074              		.cfi_def_cfa_offset 112
 2075 0796 E966FBFF 		jmp	.L112
 2075      FF
 2076              	.LVL231:
 2077 079b 0F1F4400 		.p2align 4,,10
 2077      00
 2078              		.p2align 3
 2079              	.L119:
 2080              	.LBE623:
 2081              	.LBE627:
 2082              	.LBE631:
 2083              	.LBE671:
 435:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 2084              		.loc 4 435 0
 2085 07a0 4889DF   		movq	%rbx, %rdi
 2086 07a3 FFD0     		call	*%rax
 2087              	.LVL232:
 2088 07a5 89442408 		movl	%eax, 8(%rsp)
 2089 07a9 E96CFCFF 		jmp	.L120
 2089      FF
 2090              	.LVL233:
 2091 07ae 6690     		.p2align 4,,10
 2092              		.p2align 3
 2093              	.L206:
 2094              	.LBB672:
 2095              	.LBB632:
 2096              	.LBB628:
 2097              	.LBB624:
 403:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 2098              		.loc 4 403 0 discriminator 2
 2099 07b0 8B7B68   		movl	104(%rbx), %edi
 2100 07b3 E8000000 		call	_Z11fl_inactivej
 2100      00
 2101              	.LVL234:
 2102 07b8 89C6     		movl	%eax, %esi
 2103 07ba E964FDFF 		jmp	.L109
 2103      FF
 2104              	.LVL235:
 2105 07bf 90       		.p2align 4,,10
 2106              		.p2align 3
 2107              	.L201:
 2108              	.LBE624:
 2109              	.LBE628:
 2110              	.LBE632:
 2111              	.LBE672:
 2112              	.LBB673:
 2113              	.LBB674:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2114              		.loc 1 696 0
 2115 07c0 83E2FD   		andl	$-3, %edx
 2116              	.LBE674:
 2117              	.LBE673:
 363:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2118              		.loc 4 363 0
 2119 07c3 4C8D4424 		leaq	36(%rsp), %r8
 2119      24
 2120 07c8 488D4C24 		leaq	32(%rsp), %rcx
 2120      20
 2121              	.LBB676:
 2122              	.LBB675:
 696:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2123              		.loc 1 696 0
 2124 07cd 89931002 		movl	%edx, 528(%rbx)
 2124      0000
 2125              	.LVL236:
 2126              	.LBE675:
 2127              	.LBE676:
 363:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2128              		.loc 4 363 0
 2129 07d3 488D7424 		leaq	24(%rsp), %rsi
 2129      18
 2130 07d8 488D5424 		leaq	28(%rsp), %rdx
 2130      1C
 2131 07dd 4889DF   		movq	%rbx, %rdi
 2132 07e0 E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 2132      00
 2133              	.LVL237:
 2134 07e5 0FB683B8 		movzbl	184(%rbx), %eax
 2134      000000
 362:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 2135              		.loc 4 362 0
 2136 07ec C744240C 		movl	$1, 12(%rsp)
 2136      01000000 
 2137 07f4 E936F9FF 		jmp	.L94
 2137      FF
 2138              	.LVL238:
 2139              	.L131:
 462:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2140              		.loc 4 462 0
 2141 07f9 F6831002 		testb	$2, 528(%rbx)
 2141      000002
 2142 0800 0F85F2FE 		jne	.L143
 2142      FFFF
 2143              	.LVL239:
 2144              	.L137:
 463:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2145              		.loc 4 463 0
 2146 0806 F6834C01 		testb	$1, 332(%rbx)
 2146      000001
 465:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2147              		.loc 4 465 0
 2148 080d 8B4C2420 		movl	32(%rsp), %ecx
 2149              	.LVL240:
 463:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2150              		.loc 4 463 0
 2151 0811 0F85B600 		jne	.L212
 2151      0000
 2152              	.LVL241:
 2153              	.L139:
 463:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2154              		.loc 4 463 0 is_stmt 0 discriminator 2
 2155 0817 8B542424 		movl	36(%rsp), %edx
 2156 081b 0354241C 		addl	28(%rsp), %edx
 2157              	.L140:
 463:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2158              		.loc 4 463 0
 2159 081f 4C8DABB0 		leaq	432(%rbx), %r13
 2159      010000
 2160              	.LVL242:
 465:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2161              		.loc 4 465 0 is_stmt 1
 2162 0826 8B742418 		movl	24(%rsp), %esi
 2163 082a 4189E8   		movl	%ebp, %r8d
 2164 082d 4C89EF   		movq	%r13, %rdi
 2165 0830 E8000000 		call	_ZN9Fl_Widget13damage_resizeEiiii
 2165      00
 2166              	.LVL243:
 2167              	.LBB677:
 2168              	.LBB678:
  90:fltk-1.3.4-1/FL/Fl_Scrollbar.H ****   }
 2169              		.loc 6 90 0
 2170 0835 8BB3A800 		movl	168(%rbx), %esi
 2170      0000
 2171 083b 448B4424 		movl	8(%rsp), %r8d
 2171      08
 2172 0840 31C9     		xorl	%ecx, %ecx
 2173 0842 8B542420 		movl	32(%rsp), %edx
 2174 0846 4C89EF   		movq	%r13, %rdi
 2175 0849 E8000000 		call	_ZN9Fl_Slider11scrollvalueEiiii
 2175      00
 2176              	.LVL244:
 2177              	.LBE678:
 2178              	.LBE677:
 468:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 2179              		.loc 4 468 0
 2180 084e 448B4424 		movl	12(%rsp), %r8d
 2180      0C
 2181              	.LBB679:
 2182              	.LBB680:
 2183              		.loc 6 103 0
 2184 0853 4489A35C 		movl	%r12d, 604(%rbx)
 2184      020000
 2185              	.LVL245:
 2186              	.LBE680:
 2187              	.LBE679:
 468:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 2188              		.loc 4 468 0
 2189 085a 4C89EE   		movq	%r13, %rsi
 2190 085d 4889DF   		movq	%rbx, %rdi
 2191 0860 4585C0   		testl	%r8d, %r8d
 2192 0863 0F84AB00 		je	.L141
 2192      0000
 468:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 2193              		.loc 4 468 0 is_stmt 0 discriminator 1
 2194 0869 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 2194      00
 2195              	.LVL246:
 473:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2196              		.loc 4 473 0 is_stmt 1 discriminator 1
 2197 086e F6835801 		testb	$2, 344(%rbx)
 2197      000002
 2198 0875 0F857DFE 		jne	.L143
 2198      FFFF
 2199              	.LVL247:
 473:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2200              		.loc 4 473 0 is_stmt 0 discriminator 3
 2201 087b F6831002 		testb	$2, 528(%rbx)
 2201      000002
 2202 0882 0F8570FE 		jne	.L143
 2202      FFFF
 2203              	.LVL248:
 2204 0888 488B4308 		movq	8(%rbx), %rax
 2205              	.LBB681:
 2206              	.LBB682:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2207              		.loc 5 52 0 is_stmt 1
 2208 088c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2208      000000
 2209 0893 8B7064   		movl	100(%rax), %esi
 2210 0896 488B07   		movq	(%rdi), %rax
 2211 0899 FF908800 		call	*136(%rax)
 2211      0000
 2212              	.LVL249:
 2213              	.LBE682:
 2214              	.LBE681:
 2215              	.LBB683:
 2216              	.LBB684:
 2217              		.loc 5 206 0
 2218 089f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2218      000000
 2219 08a6 8B93D401 		movl	468(%rbx), %edx
 2219      0000
 2220 08ac 4189E8   		movl	%ebp, %r8d
 2221 08af 8BB31801 		movl	280(%rbx), %esi
 2221      0000
 2222 08b5 89E9     		movl	%ebp, %ecx
 2223 08b7 488B07   		movq	(%rdi), %rax
 2224 08ba FF5020   		call	*32(%rax)
 2225              	.LVL250:
 2226 08bd E936FEFF 		jmp	.L143
 2226      FF
 2227              	.LVL251:
 2228              	.L130:
 2229              	.LBE684:
 2230              	.LBE683:
 452:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 2231              		.loc 4 452 0
 2232 08c2 41BC0A00 		movl	$10, %r12d
 2232      0000
 2233 08c8 E9ABFDFF 		jmp	.L129
 2233      FF
 2234              	.LVL252:
 2235              	.L212:
 463:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2236              		.loc 4 463 0 discriminator 1
 2237 08cd 8B54241C 		movl	28(%rsp), %edx
 2238 08d1 29EA     		subl	%ebp, %edx
 2239 08d3 E947FFFF 		jmp	.L140
 2239      FF
 2240              	.LVL253:
 2241              	.L210:
 454:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2242              		.loc 4 454 0 discriminator 1
 2243 08d8 8B742418 		movl	24(%rsp), %esi
 2244 08dc 29EE     		subl	%ebp, %esi
 2245 08de E9C0FDFF 		jmp	.L133
 2245      FF
 2246              	.LVL254:
 2247              	.L209:
 451:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 2248              		.loc 4 451 0 discriminator 2
 2249 08e3 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 2249      00
 2250              	.LVL255:
 2251 08e8 89C5     		movl	%eax, %ebp
 2252 08ea E961FDFF 		jmp	.L127
 2252      FF
 2253              	.LVL256:
 2254              	.L134:
 460:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2255              		.loc 4 460 0
 2256 08ef E8000000 		call	_ZNK8Fl_Group12update_childER9Fl_Widget
 2256      00
 2257              	.LVL257:
 462:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2258              		.loc 4 462 0
 2259 08f4 F6831002 		testb	$2, 528(%rbx)
 2259      000002
 2260 08fb 0F85F7FD 		jne	.L143
 2260      FFFF
 463:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2261              		.loc 4 463 0
 2262 0901 F6834C01 		testb	$1, 332(%rbx)
 2262      000001
 465:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2263              		.loc 4 465 0
 2264 0908 8B4C2420 		movl	32(%rsp), %ecx
 2265              	.LVL258:
 463:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2266              		.loc 4 463 0
 2267 090c 0F8405FF 		je	.L139
 2267      FFFF
 2268 0912 EBB9     		jmp	.L212
 2269              	.LVL259:
 2270              	.L141:
 469:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 2271              		.loc 4 469 0
 2272 0914 E8000000 		call	_ZNK8Fl_Group12update_childER9Fl_Widget
 2272      00
 2273              	.LVL260:
 2274 0919 E9DAFDFF 		jmp	.L143
 2274      FF
 2275              	.LVL261:
 2276              	.L83:
 332:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 2277              		.loc 4 332 0
 2278 091e 4889DF   		movq	%rbx, %rdi
 2279 0921 FFD2     		call	*%rdx
 2280              	.LVL262:
 2281 0923 89442408 		movl	%eax, 8(%rsp)
 2282 0927 488B03   		movq	(%rbx), %rax
 2283 092a E918F7FF 		jmp	.L84
 2283      FF
 2284              	.LVL263:
 2285              	.L205:
 2286 092f 0FB6436D 		movzbl	109(%rbx), %eax
 2287 0933 E92EF9FF 		jmp	.L105
 2287      FF
 2288              	.LVL264:
 2289              	.L211:
 480:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 2290              		.loc 4 480 0
 2291 0938 E8000000 		call	__stack_chk_fail
 2291      00
 2292              	.LVL265:
 2293              		.cfi_endproc
 2294              	.LFE524:
 2296              		.section	.text.unlikely._ZN11Fl_Browser_4drawEv
 2297              	.LCOLDE17:
 2298              		.section	.text._ZN11Fl_Browser_4drawEv
 2299              	.LHOTE17:
 2300              		.section	.text.unlikely._ZN11Fl_Browser_8positionEi,"ax",@progbits
 2301              		.align 2
 2302              	.LCOLDB18:
 2303              		.section	.text._ZN11Fl_Browser_8positionEi,"ax",@progbits
 2304              	.LHOTB18:
 2305              		.align 2
 2306              		.p2align 4,,15
 2307              		.globl	_ZN11Fl_Browser_8positionEi
 2309              	_ZN11Fl_Browser_8positionEi:
 2310              	.LFB520:
 196:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 2311              		.loc 4 196 0
 2312              		.cfi_startproc
 2313              	.LVL266:
 2314 0000 85F6     		testl	%esi, %esi
 2315 0002 B8000000 		movl	$0, %eax
 2315      00
 2316 0007 0F48F0   		cmovs	%eax, %esi
 2317              	.LVL267:
 198:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 2318              		.loc 4 198 0
 2319 000a 39B7A000 		cmpl	%esi, 160(%rdi)
 2319      0000
 2320 0010 741E     		je	.L213
 200:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 2321              		.loc 4 200 0
 2322 0012 39B7A400 		cmpl	%esi, 164(%rdi)
 2322      0000
 199:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2323              		.loc 4 199 0
 2324 0018 89B7A000 		movl	%esi, 160(%rdi)
 2324      0000
 200:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 2325              		.loc 4 200 0
 2326 001e 7410     		je	.L213
 2327              	.LVL268:
 2328              	.LBB685:
 2329              	.LBB686:
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
 2330              		.loc 3 197 0
 2331 0020 BE040000 		movl	$4, %esi
 2331      00
 2332              	.LVL269:
 2333 0025 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 2333      00
 2334              	.LVL270:
 2335 002a 660F1F44 		.p2align 4,,10
 2335      0000
 2336              		.p2align 3
 2337              	.L213:
 2338 0030 F3C3     		rep ret
 2339              	.LBE686:
 2340              	.LBE685:
 2341              		.cfi_endproc
 2342              	.LFE520:
 2344              		.section	.text.unlikely._ZN11Fl_Browser_8positionEi
 2345              	.LCOLDE18:
 2346              		.section	.text._ZN11Fl_Browser_8positionEi
 2347              	.LHOTE18:
 2348              		.section	.text.unlikely._ZL18scrollbar_callbackP9Fl_WidgetPv,"ax",@progbits
 2349              	.LCOLDB19:
 2350              		.section	.text._ZL18scrollbar_callbackP9Fl_WidgetPv,"ax",@progbits
 2351              	.LHOTB19:
 2352              		.p2align 4,,15
 2354              	_ZL18scrollbar_callbackP9Fl_WidgetPv:
 2355              	.LFB513:
  53:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 2356              		.loc 4 53 0
 2357              		.cfi_startproc
 2358              	.LVL271:
  54:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 2359              		.loc 4 54 0
 2360 0000 F20F2C77 		cvttsd2si	120(%rdi), %esi
 2360      78
 2361 0005 488B7F08 		movq	8(%rdi), %rdi
 2362              	.LVL272:
 2363 0009 E9000000 		jmp	_ZN11Fl_Browser_8positionEi
 2363      00
 2364              	.LVL273:
 2365              		.cfi_endproc
 2366              	.LFE513:
 2368              		.section	.text.unlikely._ZL18scrollbar_callbackP9Fl_WidgetPv
 2369              	.LCOLDE19:
 2370              		.section	.text._ZL18scrollbar_callbackP9Fl_WidgetPv
 2371              	.LHOTE19:
 2372              		.section	.text.unlikely._ZN11Fl_Browser_9hpositionEi,"ax",@progbits
 2373              		.align 2
 2374              	.LCOLDB20:
 2375              		.section	.text._ZN11Fl_Browser_9hpositionEi,"ax",@progbits
 2376              	.LHOTB20:
 2377              		.align 2
 2378              		.p2align 4,,15
 2379              		.globl	_ZN11Fl_Browser_9hpositionEi
 2381              	_ZN11Fl_Browser_9hpositionEi:
 2382              	.LFB521:
 211:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2383              		.loc 4 211 0
 2384              		.cfi_startproc
 2385              	.LVL274:
 2386 0000 85F6     		testl	%esi, %esi
 2387 0002 B8000000 		movl	$0, %eax
 2387      00
 2388 0007 0F48F0   		cmovs	%eax, %esi
 2389              	.LVL275:
 213:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2390              		.loc 4 213 0
 2391 000a 39B7A800 		cmpl	%esi, 168(%rdi)
 2391      0000
 2392 0010 741E     		je	.L218
 215:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 2393              		.loc 4 215 0
 2394 0012 39B7AC00 		cmpl	%esi, 172(%rdi)
 2394      0000
 214:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2395              		.loc 4 214 0
 2396 0018 89B7A800 		movl	%esi, 168(%rdi)
 2396      0000
 215:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 2397              		.loc 4 215 0
 2398 001e 7410     		je	.L218
 2399              	.LVL276:
 2400              	.LBB687:
 2401              	.LBB688:
 2402              		.loc 3 197 0
 2403 0020 BE040000 		movl	$4, %esi
 2403      00
 2404              	.LVL277:
 2405 0025 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 2405      00
 2406              	.LVL278:
 2407 002a 660F1F44 		.p2align 4,,10
 2407      0000
 2408              		.p2align 3
 2409              	.L218:
 2410 0030 F3C3     		rep ret
 2411              	.LBE688:
 2412              	.LBE687:
 2413              		.cfi_endproc
 2414              	.LFE521:
 2416              		.section	.text.unlikely._ZN11Fl_Browser_9hpositionEi
 2417              	.LCOLDE20:
 2418              		.section	.text._ZN11Fl_Browser_9hpositionEi
 2419              	.LHOTE20:
 2420              		.section	.text.unlikely._ZL19hscrollbar_callbackP9Fl_WidgetPv,"ax",@progbits
 2421              	.LCOLDB21:
 2422              		.section	.text._ZL19hscrollbar_callbackP9Fl_WidgetPv,"ax",@progbits
 2423              	.LHOTB21:
 2424              		.p2align 4,,15
 2426              	_ZL19hscrollbar_callbackP9Fl_WidgetPv:
 2427              	.LFB514:
  57:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 2428              		.loc 4 57 0
 2429              		.cfi_startproc
 2430              	.LVL279:
  58:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2431              		.loc 4 58 0
 2432 0000 F20F2C77 		cvttsd2si	120(%rdi), %esi
 2432      78
 2433 0005 488B7F08 		movq	8(%rdi), %rdi
 2434              	.LVL280:
 2435 0009 E9000000 		jmp	_ZN11Fl_Browser_9hpositionEi
 2435      00
 2436              	.LVL281:
 2437              		.cfi_endproc
 2438              	.LFE514:
 2440              		.section	.text.unlikely._ZL19hscrollbar_callbackP9Fl_WidgetPv
 2441              	.LCOLDE21:
 2442              		.section	.text._ZL19hscrollbar_callbackP9Fl_WidgetPv
 2443              	.LHOTE21:
 2444              		.section	.text.unlikely._ZNK11Fl_Browser_9displayedEPv,"ax",@progbits
 2445              		.align 2
 2446              	.LCOLDB22:
 2447              		.section	.text._ZNK11Fl_Browser_9displayedEPv,"ax",@progbits
 2448              	.LHOTB22:
 2449              		.align 2
 2450              		.p2align 4,,15
 2451              		.globl	_ZNK11Fl_Browser_9displayedEPv
 2453              	_ZNK11Fl_Browser_9displayedEPv:
 2454              	.LFB522:
 228:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 2455              		.loc 4 228 0
 2456              		.cfi_startproc
 2457              	.LVL282:
 2458 0000 4155     		pushq	%r13
 2459              		.cfi_def_cfa_offset 16
 2460              		.cfi_offset 13, -16
 2461 0002 4154     		pushq	%r12
 2462              		.cfi_def_cfa_offset 24
 2463              		.cfi_offset 12, -24
 2464 0004 4989F5   		movq	%rsi, %r13
 2465 0007 55       		pushq	%rbp
 2466              		.cfi_def_cfa_offset 32
 2467              		.cfi_offset 6, -32
 2468 0008 53       		pushq	%rbx
 2469              		.cfi_def_cfa_offset 40
 2470              		.cfi_offset 3, -40
 2471 0009 4889FD   		movq	%rdi, %rbp
 2472 000c 4883EC28 		subq	$40, %rsp
 2473              		.cfi_def_cfa_offset 80
 229:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2474              		.loc 4 229 0
 2475 0010 4C8D4424 		leaq	20(%rsp), %r8
 2475      14
 2476 0015 488D4C24 		leaq	16(%rsp), %rcx
 2476      10
 2477 001a 488D5424 		leaq	12(%rsp), %rdx
 2477      0C
 2478 001f 488D7424 		leaq	8(%rsp), %rsi
 2478      08
 2479              	.LVL283:
 228:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 2480              		.loc 4 228 0
 2481 0024 64488B04 		movq	%fs:40, %rax
 2481      25280000 
 2481      00
 2482 002d 48894424 		movq	%rax, 24(%rsp)
 2482      18
 2483 0032 31C0     		xorl	%eax, %eax
 229:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2484              		.loc 4 229 0
 2485 0034 E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 2485      00
 2486              	.LVL284:
 2487              	.LBB689:
 231:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 2488              		.loc 4 231 0
 2489 0039 488B9DC8 		movq	200(%rbp), %rbx
 2489      000000
 2490              	.LBE689:
 230:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 2491              		.loc 4 230 0
 2492 0040 448B6424 		movl	20(%rsp), %r12d
 2492      14
 2493 0045 4403A5B0 		addl	176(%rbp), %r12d
 2493      000000
 2494              	.LVL285:
 2495              	.LBB690:
 231:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 2496              		.loc 4 231 0
 2497 004c 4885DB   		testq	%rbx, %rbx
 2498 004f 744F     		je	.L230
 2499 0051 4585E4   		testl	%r12d, %r12d
 2500 0054 7E4A     		jle	.L230
 232:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 2501              		.loc 4 232 0
 2502 0056 4C39EB   		cmpq	%r13, %rbx
 2503 0059 7434     		je	.L228
 2504 005b 0F1F4400 		.p2align 4,,10
 2504      00
 2505              		.p2align 3
 2506              	.L233:
 233:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 2507              		.loc 4 233 0 discriminator 2
 2508 0060 488B4500 		movq	0(%rbp), %rax
 2509 0064 4889DE   		movq	%rbx, %rsi
 2510 0067 4889EF   		movq	%rbp, %rdi
 2511 006a FF5070   		call	*112(%rax)
 2512              	.LVL286:
 2513 006d 4129C4   		subl	%eax, %r12d
 2514              	.LVL287:
 231:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 2515              		.loc 4 231 0 discriminator 2
 2516 0070 488B4500 		movq	0(%rbp), %rax
 2517 0074 4889DE   		movq	%rbx, %rsi
 2518 0077 4889EF   		movq	%rbp, %rdi
 2519 007a FF5058   		call	*88(%rax)
 2520              	.LVL288:
 2521 007d 4885C0   		testq	%rax, %rax
 2522 0080 4889C3   		movq	%rax, %rbx
 2523              	.LVL289:
 2524 0083 741B     		je	.L230
 2525 0085 4585E4   		testl	%r12d, %r12d
 2526 0088 7E16     		jle	.L230
 232:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 2527              		.loc 4 232 0
 2528 008a 4939DD   		cmpq	%rbx, %r13
 2529 008d 75D1     		jne	.L233
 2530              	.LVL290:
 2531              	.L228:
 2532 008f B8010000 		movl	$1, %eax
 2532      00
 2533 0094 EB0C     		jmp	.L226
 2534 0096 662E0F1F 		.p2align 4,,10
 2534      84000000 
 2534      0000
 2535              		.p2align 3
 2536              	.L230:
 2537              	.LBE690:
 235:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 2538              		.loc 4 235 0
 2539 00a0 31C0     		xorl	%eax, %eax
 2540              	.L226:
 236:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2541              		.loc 4 236 0
 2542 00a2 488B5424 		movq	24(%rsp), %rdx
 2542      18
 2543 00a7 64483314 		xorq	%fs:40, %rdx
 2543      25280000 
 2543      00
 2544 00b0 750B     		jne	.L236
 2545 00b2 4883C428 		addq	$40, %rsp
 2546              		.cfi_remember_state
 2547              		.cfi_def_cfa_offset 40
 2548 00b6 5B       		popq	%rbx
 2549              		.cfi_def_cfa_offset 32
 2550              	.LVL291:
 2551 00b7 5D       		popq	%rbp
 2552              		.cfi_def_cfa_offset 24
 2553              	.LVL292:
 2554 00b8 415C     		popq	%r12
 2555              		.cfi_def_cfa_offset 16
 2556              	.LVL293:
 2557 00ba 415D     		popq	%r13
 2558              		.cfi_def_cfa_offset 8
 2559              	.LVL294:
 2560 00bc C3       		ret
 2561              	.LVL295:
 2562              	.L236:
 2563              		.cfi_restore_state
 2564 00bd E8000000 		call	__stack_chk_fail
 2564      00
 2565              	.LVL296:
 2566              		.cfi_endproc
 2567              	.LFE522:
 2569              		.section	.text.unlikely._ZNK11Fl_Browser_9displayedEPv
 2570              	.LCOLDE22:
 2571              		.section	.text._ZNK11Fl_Browser_9displayedEPv
 2572              	.LHOTE22:
 2573              		.section	.text.unlikely._ZN11Fl_Browser_7displayEPv,"ax",@progbits
 2574              		.align 2
 2575              	.LCOLDB23:
 2576              		.section	.text._ZN11Fl_Browser_7displayEPv,"ax",@progbits
 2577              	.LHOTB23:
 2578              		.align 2
 2579              		.p2align 4,,15
 2580              		.globl	_ZN11Fl_Browser_7displayEPv
 2582              	_ZN11Fl_Browser_7displayEPv:
 2583              	.LFB523:
 245:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 2584              		.loc 4 245 0
 2585              		.cfi_startproc
 2586              	.LVL297:
 2587 0000 4157     		pushq	%r15
 2588              		.cfi_def_cfa_offset 16
 2589              		.cfi_offset 15, -16
 2590 0002 4156     		pushq	%r14
 2591              		.cfi_def_cfa_offset 24
 2592              		.cfi_offset 14, -24
 2593 0004 4155     		pushq	%r13
 2594              		.cfi_def_cfa_offset 32
 2595              		.cfi_offset 13, -32
 2596 0006 4154     		pushq	%r12
 2597              		.cfi_def_cfa_offset 40
 2598              		.cfi_offset 12, -40
 2599 0008 4989F5   		movq	%rsi, %r13
 2600 000b 55       		pushq	%rbp
 2601              		.cfi_def_cfa_offset 48
 2602              		.cfi_offset 6, -48
 2603 000c 53       		pushq	%rbx
 2604              		.cfi_def_cfa_offset 56
 2605              		.cfi_offset 3, -56
 2606 000d 4889FB   		movq	%rdi, %rbx
 2607 0010 4883EC28 		subq	$40, %rsp
 2608              		.cfi_def_cfa_offset 96
 245:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 2609              		.loc 4 245 0
 2610 0014 64488B04 		movq	%fs:40, %rax
 2610      25280000 
 2610      00
 2611 001d 48894424 		movq	%rax, 24(%rsp)
 2611      18
 2612 0022 31C0     		xorl	%eax, %eax
 248:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 2613              		.loc 4 248 0
 2614 0024 E8000000 		call	_ZN11Fl_Browser_10update_topEv
 2614      00
 2615              	.LVL298:
 249:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 2616              		.loc 4 249 0
 2617 0029 488B03   		movq	(%rbx), %rax
 2618 002c 4889DF   		movq	%rbx, %rdi
 2619 002f FF5050   		call	*80(%rax)
 2620              	.LVL299:
 2621 0032 4C39E8   		cmpq	%r13, %rax
 2622 0035 0F84FD00 		je	.L265
 2622      0000
 251:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 2623              		.loc 4 251 0
 2624 003b 4C8D4424 		leaq	20(%rsp), %r8
 2624      14
 2625 0040 488D4C24 		leaq	16(%rsp), %rcx
 2625      10
 2626 0045 488D5424 		leaq	12(%rsp), %rdx
 2626      0C
 2627 004a 488D7424 		leaq	8(%rsp), %rsi
 2627      08
 2628 004f 4889DF   		movq	%rbx, %rdi
 2629 0052 E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 2629      00
 2630              	.LVL300:
 253:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 2631              		.loc 4 253 0
 2632 0057 8B83B000 		movl	176(%rbx), %eax
 2632      0000
 252:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2633              		.loc 4 252 0
 2634 005d 488BABC8 		movq	200(%rbx), %rbp
 2634      000000
 2635              	.LVL301:
 253:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 2636              		.loc 4 253 0
 2637 0064 4189C6   		movl	%eax, %r14d
 2638 0067 41F7DE   		negl	%r14d
 2639              	.LVL302:
 257:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 2640              		.loc 4 257 0
 2641 006a 4939ED   		cmpq	%rbp, %r13
 253:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 2642              		.loc 4 253 0
 2643 006d 44897424 		movl	%r14d, 12(%rsp)
 2643      0C
 257:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 2644              		.loc 4 257 0
 2645 0072 0F844001 		je	.L266
 2645      0000
 260:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 2646              		.loc 4 260 0
 2647 0078 488B03   		movq	(%rbx), %rax
 2648 007b 4889EE   		movq	%rbp, %rsi
 2649 007e 4889DF   		movq	%rbx, %rdi
 2650 0081 FF5060   		call	*96(%rax)
 2651              	.LVL303:
 261:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 2652              		.loc 4 261 0
 2653 0084 4939C5   		cmpq	%rax, %r13
 260:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 2654              		.loc 4 260 0
 2655 0087 4989C4   		movq	%rax, %r12
 2656              	.LVL304:
 261:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 2657              		.loc 4 261 0
 2658 008a 0F848601 		je	.L267
 2658      0000
 2659              	.LVL305:
 2660              		.p2align 4,,10
 2661              		.p2align 3
 2662              	.L243:
 267:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 2663              		.loc 4 267 0
 2664 0090 4885ED   		testq	%rbp, %rbp
 2665 0093 750B     		jne	.L254
 2666 0095 4D85E4   		testq	%r12, %r12
 2667 0098 7476     		je	.L237
 2668 009a 660F1F44 		.p2align 4,,10
 2668      0000
 2669              		.p2align 3
 2670              	.L254:
 268:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 2671              		.loc 4 268 0
 2672 00a0 4885ED   		testq	%rbp, %rbp
 2673 00a3 742B     		je	.L246
 269:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2674              		.loc 4 269 0
 2675 00a5 488B03   		movq	(%rbx), %rax
 2676 00a8 4889EE   		movq	%rbp, %rsi
 2677 00ab 4889DF   		movq	%rbx, %rdi
 2678 00ae FF908000 		call	*128(%rax)
 2678      0000
 2679              	.LVL306:
 270:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 2680              		.loc 4 270 0
 2681 00b4 4C39ED   		cmpq	%r13, %rbp
 2682 00b7 0F84AB00 		je	.L268
 2682      0000
 279:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2683              		.loc 4 279 0
 2684 00bd 0144240C 		addl	%eax, 12(%rsp)
 280:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 2685              		.loc 4 280 0
 2686 00c1 488B03   		movq	(%rbx), %rax
 2687              	.LVL307:
 2688 00c4 4889EE   		movq	%rbp, %rsi
 2689 00c7 4889DF   		movq	%rbx, %rdi
 2690 00ca FF5058   		call	*88(%rax)
 2691              	.LVL308:
 2692 00cd 4889C5   		movq	%rax, %rbp
 2693              	.LVL309:
 2694              	.L246:
 282:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 2695              		.loc 4 282 0
 2696 00d0 4D85E4   		testq	%r12, %r12
 2697 00d3 74BB     		je	.L243
 283:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 2698              		.loc 4 283 0
 2699 00d5 488B03   		movq	(%rbx), %rax
 284:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 2700              		.loc 4 284 0
 2701 00d8 4589F7   		movl	%r14d, %r15d
 283:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 2702              		.loc 4 283 0
 2703 00db 4C89E6   		movq	%r12, %rsi
 2704 00de 4889DF   		movq	%rbx, %rdi
 2705 00e1 FF908000 		call	*128(%rax)
 2705      0000
 2706              	.LVL310:
 284:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 2707              		.loc 4 284 0
 2708 00e7 4129C7   		subl	%eax, %r15d
 2709              	.LVL311:
 285:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2710              		.loc 4 285 0
 2711 00ea 4D39EC   		cmpq	%r13, %r12
 2712 00ed 0F84A500 		je	.L269
 2712      0000
 290:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 2713              		.loc 4 290 0
 2714 00f3 488B03   		movq	(%rbx), %rax
 2715              	.LVL312:
 2716 00f6 4C89E6   		movq	%r12, %rsi
 2717 00f9 4889DF   		movq	%rbx, %rdi
 284:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 2718              		.loc 4 284 0
 2719 00fc 4589FE   		movl	%r15d, %r14d
 290:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 2720              		.loc 4 290 0
 2721 00ff FF5060   		call	*96(%rax)
 2722              	.LVL313:
 267:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 2723              		.loc 4 267 0
 2724 0102 4885ED   		testq	%rbp, %rbp
 290:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 2725              		.loc 4 290 0
 2726 0105 4989C4   		movq	%rax, %r12
 2727              	.LVL314:
 267:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 2728              		.loc 4 267 0
 2729 0108 7596     		jne	.L254
 2730 010a 4D85E4   		testq	%r12, %r12
 2731 010d 7591     		jne	.L254
 2732              	.LVL315:
 2733 010f 90       		.p2align 4,,10
 2734              		.p2align 3
 2735              	.L237:
 323:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 2736              		.loc 4 323 0
 2737 0110 488B4424 		movq	24(%rsp), %rax
 2737      18
 2738 0115 64483304 		xorq	%fs:40, %rax
 2738      25280000 
 2738      00
 2739 011e 0F851C01 		jne	.L270
 2739      0000
 2740 0124 4883C428 		addq	$40, %rsp
 2741              		.cfi_remember_state
 2742              		.cfi_def_cfa_offset 56
 2743 0128 5B       		popq	%rbx
 2744              		.cfi_def_cfa_offset 48
 2745              	.LVL316:
 2746 0129 5D       		popq	%rbp
 2747              		.cfi_def_cfa_offset 40
 2748 012a 415C     		popq	%r12
 2749              		.cfi_def_cfa_offset 32
 2750 012c 415D     		popq	%r13
 2751              		.cfi_def_cfa_offset 24
 2752              	.LVL317:
 2753 012e 415E     		popq	%r14
 2754              		.cfi_def_cfa_offset 16
 2755 0130 415F     		popq	%r15
 2756              		.cfi_def_cfa_offset 8
 2757 0132 C3       		ret
 2758              	.LVL318:
 2759              		.p2align 4,,10
 2760 0133 0F1F4400 		.p2align 3
 2760      00
 2761              	.L265:
 2762              		.cfi_restore_state
 2763              	.LBB691:
 2764              	.LBB692:
 198:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 2765              		.loc 4 198 0
 2766 0138 8B93A000 		movl	160(%rbx), %edx
 2766      0000
 2767 013e 85D2     		testl	%edx, %edx
 2768 0140 74CE     		je	.L237
 200:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 2769              		.loc 4 200 0
 2770 0142 8B83A400 		movl	164(%rbx), %eax
 2770      0000
 199:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2771              		.loc 4 199 0
 2772 0148 C783A000 		movl	$0, 160(%rbx)
 2772      00000000 
 2772      0000
 200:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 2773              		.loc 4 200 0
 2774 0152 85C0     		testl	%eax, %eax
 2775 0154 74BA     		je	.L237
 2776              	.LVL319:
 2777              	.LBB693:
 2778              	.LBB694:
 2779              		.loc 3 197 0
 2780 0156 BE040000 		movl	$4, %esi
 2780      00
 2781 015b 4889DF   		movq	%rbx, %rdi
 2782 015e E8000000 		call	_ZN9Fl_Widget6damageEh
 2782      00
 2783              	.LVL320:
 2784 0163 EBAB     		jmp	.L237
 2785              	.LVL321:
 2786              		.p2align 4,,10
 2787 0165 0F1F00   		.p2align 3
 2788              	.L268:
 2789              	.LBE694:
 2790              	.LBE693:
 2791              	.LBE692:
 2792              	.LBE691:
 271:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2793              		.loc 4 271 0
 2794 0168 8B54240C 		movl	12(%rsp), %edx
 2795 016c 8B4C2414 		movl	20(%rsp), %ecx
 2796 0170 39CA     		cmpl	%ecx, %edx
 2797 0172 7F59     		jg	.L248
 272:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 2798              		.loc 4 272 0
 2799 0174 01D0     		addl	%edx, %eax
 2800              	.LVL322:
 2801 0176 29C8     		subl	%ecx, %eax
 273:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 2802              		.loc 4 273 0
 2803 0178 85C0     		testl	%eax, %eax
 272:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 2804              		.loc 4 272 0
 2805 017a 8944240C 		movl	%eax, 12(%rsp)
 273:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 2806              		.loc 4 273 0
 2807 017e 7E90     		jle	.L237
 273:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 2808              		.loc 4 273 0 is_stmt 0 discriminator 1
 2809 0180 0383A400 		addl	164(%rbx), %eax
 2809      0000
 2810 0186 4889DF   		movq	%rbx, %rdi
 2811 0189 89C6     		movl	%eax, %esi
 2812 018b E8000000 		call	_ZN11Fl_Browser_8positionEi
 2812      00
 2813              	.LVL323:
 2814 0190 E97BFFFF 		jmp	.L237
 2814      FF
 2815              	.LVL324:
 2816              		.p2align 4,,10
 2817 0195 0F1F00   		.p2align 3
 2818              	.L269:
 286:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 2819              		.loc 4 286 0 is_stmt 1
 2820 0198 4585F6   		testl	%r14d, %r14d
 2821 019b 7852     		js	.L251
 286:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 2822              		.loc 4 286 0 is_stmt 0 discriminator 1
 2823 019d 8BB3A400 		movl	164(%rbx), %esi
 2823      0000
 2824 01a3 4889DF   		movq	%rbx, %rdi
 2825 01a6 4401FE   		addl	%r15d, %esi
 2826 01a9 E8000000 		call	_ZN11Fl_Browser_8positionEi
 2826      00
 2827              	.LVL325:
 2828 01ae E95DFFFF 		jmp	.L237
 2828      FF
 2829              	.LVL326:
 2830              		.p2align 4,,10
 2831 01b3 0F1F4400 		.p2align 3
 2831      00
 2832              	.L266:
 257:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 2833              		.loc 4 257 0 is_stmt 1 discriminator 1
 2834 01b8 8BB3A400 		movl	164(%rbx), %esi
 2834      0000
 2835 01be 4889DF   		movq	%rbx, %rdi
 2836 01c1 29C6     		subl	%eax, %esi
 2837 01c3 E8000000 		call	_ZN11Fl_Browser_8positionEi
 2837      00
 2838              	.LVL327:
 2839 01c8 E943FFFF 		jmp	.L237
 2839      FF
 2840              	.LVL328:
 2841              	.L248:
 275:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 2842              		.loc 4 275 0
 2843 01cd 29C1     		subl	%eax, %ecx
 2844 01cf 0393A400 		addl	164(%rbx), %edx
 2844      0000
 2845 01d5 4889DF   		movq	%rbx, %rdi
 2846 01d8 89C8     		movl	%ecx, %eax
 2847              	.LVL329:
 2848 01da C1E81F   		shrl	$31, %eax
 2849 01dd 01C1     		addl	%eax, %ecx
 2850 01df 89D6     		movl	%edx, %esi
 2851 01e1 D1F9     		sarl	%ecx
 2852 01e3 29CE     		subl	%ecx, %esi
 2853 01e5 E8000000 		call	_ZN11Fl_Browser_8positionEi
 2853      00
 2854              	.LVL330:
 2855 01ea E921FFFF 		jmp	.L237
 2855      FF
 2856              	.LVL331:
 2857              	.L251:
 287:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 2858              		.loc 4 287 0
 2859 01ef 8B542414 		movl	20(%rsp), %edx
 2860 01f3 8BB3A400 		movl	164(%rbx), %esi
 2860      0000
 2861 01f9 4889DF   		movq	%rbx, %rdi
 2862 01fc 29C2     		subl	%eax, %edx
 2863 01fe 4401FE   		addl	%r15d, %esi
 2864 0201 89D0     		movl	%edx, %eax
 2865              	.LVL332:
 2866 0203 C1EA1F   		shrl	$31, %edx
 2867 0206 01D0     		addl	%edx, %eax
 2868 0208 D1F8     		sarl	%eax
 2869 020a 29C6     		subl	%eax, %esi
 2870 020c E8000000 		call	_ZN11Fl_Browser_8positionEi
 2870      00
 2871              	.LVL333:
 2872 0211 E9FAFEFF 		jmp	.L237
 2872      FF
 2873              	.LVL334:
 2874              	.L267:
 261:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 2875              		.loc 4 261 0 discriminator 1
 2876 0216 8B6C240C 		movl	12(%rsp), %ebp
 2877              	.LVL335:
 2878 021a 03ABA400 		addl	164(%rbx), %ebp
 2878      0000
 2879 0220 4C89EE   		movq	%r13, %rsi
 2880 0223 488B03   		movq	(%rbx), %rax
 2881              	.LVL336:
 2882 0226 4889DF   		movq	%rbx, %rdi
 2883 0229 FF908000 		call	*128(%rax)
 2883      0000
 2884              	.LVL337:
 2885 022f 89EE     		movl	%ebp, %esi
 2886 0231 4889DF   		movq	%rbx, %rdi
 2887 0234 29C6     		subl	%eax, %esi
 2888 0236 E8000000 		call	_ZN11Fl_Browser_8positionEi
 2888      00
 2889              	.LVL338:
 2890 023b E9D0FEFF 		jmp	.L237
 2890      FF
 2891              	.LVL339:
 2892              	.L270:
 323:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 2893              		.loc 4 323 0
 2894 0240 E8000000 		call	__stack_chk_fail
 2894      00
 2895              	.LVL340:
 2896              		.cfi_endproc
 2897              	.LFE523:
 2899              		.section	.text.unlikely._ZN11Fl_Browser_7displayEPv
 2900              	.LCOLDE23:
 2901              		.section	.text._ZN11Fl_Browser_7displayEPv
 2902              	.LHOTE23:
 2903              		.section	.text.unlikely._ZN11Fl_Browser_8new_listEv,"ax",@progbits
 2904              		.align 2
 2905              	.LCOLDB24:
 2906              		.section	.text._ZN11Fl_Browser_8new_listEv,"ax",@progbits
 2907              	.LHOTB24:
 2908              		.align 2
 2909              		.p2align 4,,15
 2910              		.globl	_ZN11Fl_Browser_8new_listEv
 2912              	_ZN11Fl_Browser_8new_listEv:
 2913              	.LFB525:
 490:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 2914              		.loc 4 490 0
 2915              		.cfi_startproc
 2916              	.LVL341:
 491:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 2917              		.loc 4 491 0
 2918 0000 48C787C8 		movq	$0, 200(%rdi)
 2918      00000000 
 2918      000000
 492:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 2919              		.loc 4 492 0
 2920 000b C787A400 		movl	$0, 164(%rdi)
 2920      00000000 
 2920      0000
 2921              	.LBB695:
 2922              	.LBB696:
 2923              		.loc 3 197 0
 2924 0015 BE040000 		movl	$4, %esi
 2924      00
 2925              	.LBE696:
 2926              	.LBE695:
 492:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 2927              		.loc 4 492 0
 2928 001a C787A000 		movl	$0, 160(%rdi)
 2928      00000000 
 2928      0000
 493:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2929              		.loc 4 493 0
 2930 0024 C787AC00 		movl	$0, 172(%rdi)
 2930      00000000 
 2930      0000
 2931 002e C787A800 		movl	$0, 168(%rdi)
 2931      00000000 
 2931      0000
 494:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 2932              		.loc 4 494 0
 2933 0038 48C787D0 		movq	$0, 208(%rdi)
 2933      00000000 
 2933      000000
 495:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2934              		.loc 4 495 0
 2935 0043 C787B000 		movl	$0, 176(%rdi)
 2935      00000000 
 2935      0000
 496:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 2936              		.loc 4 496 0
 2937 004d C787B400 		movl	$0, 180(%rdi)
 2937      00000000 
 2937      0000
 497:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 2938              		.loc 4 497 0
 2939 0057 48C787E8 		movq	$0, 232(%rdi)
 2939      00000000 
 2939      000000
 2940              	.LVL342:
 2941              	.LBB698:
 2942              	.LBB697:
 2943              		.loc 3 197 0
 2944 0062 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 2944      00
 2945              	.LVL343:
 2946              	.LBE697:
 2947              	.LBE698:
 2948              		.cfi_endproc
 2949              	.LFE525:
 2951              		.section	.text.unlikely._ZN11Fl_Browser_8new_listEv
 2952              	.LCOLDE24:
 2953              		.section	.text._ZN11Fl_Browser_8new_listEv
 2954              	.LHOTE24:
 2955              		.section	.text.unlikely._ZN11Fl_Browser_8deletingEPv,"ax",@progbits
 2956              		.align 2
 2957              	.LCOLDB25:
 2958              		.section	.text._ZN11Fl_Browser_8deletingEPv,"ax",@progbits
 2959              	.LHOTB25:
 2960              		.align 2
 2961              		.p2align 4,,15
 2962              		.globl	_ZN11Fl_Browser_8deletingEPv
 2964              	_ZN11Fl_Browser_8deletingEPv:
 2965              	.LFB526:
 510:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 2966              		.loc 4 510 0
 2967              		.cfi_startproc
 2968              	.LVL344:
 2969 0000 55       		pushq	%rbp
 2970              		.cfi_def_cfa_offset 16
 2971              		.cfi_offset 6, -16
 2972 0001 53       		pushq	%rbx
 2973              		.cfi_def_cfa_offset 24
 2974              		.cfi_offset 3, -24
 2975 0002 4889F5   		movq	%rsi, %rbp
 2976 0005 4889FB   		movq	%rdi, %rbx
 2977 0008 4883EC08 		subq	$8, %rsp
 2978              		.cfi_def_cfa_offset 32
 511:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2979              		.loc 4 511 0
 2980 000c E8000000 		call	_ZNK11Fl_Browser_9displayedEPv
 2980      00
 2981              	.LVL345:
 2982 0011 85C0     		testl	%eax, %eax
 2983 0013 7543     		jne	.L280
 521:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 2984              		.loc 4 521 0
 2985 0015 C783A400 		movl	$0, 164(%rbx)
 2985      00000000 
 2985      0000
 522:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 2986              		.loc 4 522 0
 2987 001f C783B000 		movl	$0, 176(%rbx)
 2987      00000000 
 2987      0000
 523:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2988              		.loc 4 523 0
 2989 0029 48C783C8 		movq	$0, 200(%rbx)
 2989      00000000 
 2989      000000
 2990              	.L275:
 525:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2991              		.loc 4 525 0
 2992 0034 483BABD0 		cmpq	208(%rbx), %rbp
 2992      000000
 2993 003b 0F849700 		je	.L281
 2993      0000
 2994              	.L277:
 526:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 2995              		.loc 4 526 0
 2996 0041 483BABE8 		cmpq	232(%rbx), %rbp
 2996      000000
 2997 0048 746E     		je	.L282
 527:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 2998              		.loc 4 527 0
 2999 004a 4883C408 		addq	$8, %rsp
 3000              		.cfi_remember_state
 3001              		.cfi_def_cfa_offset 24
 3002 004e 5B       		popq	%rbx
 3003              		.cfi_def_cfa_offset 16
 3004              	.LVL346:
 3005 004f 5D       		popq	%rbp
 3006              		.cfi_def_cfa_offset 8
 3007              	.LVL347:
 3008 0050 C3       		ret
 3009              	.LVL348:
 3010              		.p2align 4,,10
 3011 0051 0F1F8000 		.p2align 3
 3011      000000
 3012              	.L280:
 3013              		.cfi_restore_state
 3014              	.LBB699:
 3015              	.LBB700:
 3016              		.loc 3 197 0
 3017 0058 BE040000 		movl	$4, %esi
 3017      00
 3018 005d 4889DF   		movq	%rbx, %rdi
 3019 0060 E8000000 		call	_ZN9Fl_Widget6damageEh
 3019      00
 3020              	.LVL349:
 3021              	.LBE700:
 3022              	.LBE699:
 513:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3023              		.loc 4 513 0
 3024 0065 483BABC8 		cmpq	200(%rbx), %rbp
 3024      000000
 3025 006c 75C6     		jne	.L275
 514:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 3026              		.loc 4 514 0
 3027 006e 8B83B000 		movl	176(%rbx), %eax
 3027      0000
 3028 0074 2983A400 		subl	%eax, 164(%rbx)
 3028      0000
 516:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 3029              		.loc 4 516 0
 3030 007a 4889EE   		movq	%rbp, %rsi
 3031 007d 488B03   		movq	(%rbx), %rax
 515:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 3032              		.loc 4 515 0
 3033 0080 C783B000 		movl	$0, 176(%rbx)
 3033      00000000 
 3033      0000
 516:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 3034              		.loc 4 516 0
 3035 008a 4889DF   		movq	%rbx, %rdi
 3036 008d FF5058   		call	*88(%rax)
 3037              	.LVL350:
 517:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3038              		.loc 4 517 0
 3039 0090 4885C0   		testq	%rax, %rax
 516:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 3040              		.loc 4 516 0
 3041 0093 488983C8 		movq	%rax, 200(%rbx)
 3041      000000
 517:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3042              		.loc 4 517 0
 3043 009a 7598     		jne	.L275
 517:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3044              		.loc 4 517 0 is_stmt 0 discriminator 1
 3045 009c 488B03   		movq	(%rbx), %rax
 3046 009f 4889EE   		movq	%rbp, %rsi
 3047 00a2 4889DF   		movq	%rbx, %rdi
 3048 00a5 FF5060   		call	*96(%rax)
 3049              	.LVL351:
 3050 00a8 488983C8 		movq	%rax, 200(%rbx)
 3050      000000
 3051 00af EB83     		jmp	.L275
 3052              		.p2align 4,,10
 3053 00b1 0F1F8000 		.p2align 3
 3053      000000
 3054              	.L282:
 526:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 3055              		.loc 4 526 0 is_stmt 1 discriminator 1
 3056 00b8 48C783E8 		movq	$0, 232(%rbx)
 3056      00000000 
 3056      000000
 3057 00c3 C783B400 		movl	$0, 180(%rbx)
 3057      00000000 
 3057      0000
 527:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 3058              		.loc 4 527 0 discriminator 1
 3059 00cd 4883C408 		addq	$8, %rsp
 3060              		.cfi_remember_state
 3061              		.cfi_def_cfa_offset 24
 3062 00d1 5B       		popq	%rbx
 3063              		.cfi_def_cfa_offset 16
 3064              	.LVL352:
 3065 00d2 5D       		popq	%rbp
 3066              		.cfi_def_cfa_offset 8
 3067              	.LVL353:
 3068 00d3 C3       		ret
 3069              	.LVL354:
 3070              		.p2align 4,,10
 3071 00d4 0F1F4000 		.p2align 3
 3072              	.L281:
 3073              		.cfi_restore_state
 525:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3074              		.loc 4 525 0 discriminator 1
 3075 00d8 48C783D0 		movq	$0, 208(%rbx)
 3075      00000000 
 3075      000000
 3076 00e3 E959FFFF 		jmp	.L277
 3076      FF
 3077              		.cfi_endproc
 3078              	.LFE526:
 3080              		.section	.text.unlikely._ZN11Fl_Browser_8deletingEPv
 3081              	.LCOLDE25:
 3082              		.section	.text._ZN11Fl_Browser_8deletingEPv
 3083              	.LHOTE25:
 3084              		.section	.text.unlikely._ZN11Fl_Browser_9replacingEPvS0_,"ax",@progbits
 3085              		.align 2
 3086              	.LCOLDB26:
 3087              		.section	.text._ZN11Fl_Browser_9replacingEPvS0_,"ax",@progbits
 3088              	.LHOTB26:
 3089              		.align 2
 3090              		.p2align 4,,15
 3091              		.globl	_ZN11Fl_Browser_9replacingEPvS0_
 3093              	_ZN11Fl_Browser_9replacingEPvS0_:
 3094              	.LFB527:
 538:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3095              		.loc 4 538 0
 3096              		.cfi_startproc
 3097              	.LVL355:
 3098 0000 4154     		pushq	%r12
 3099              		.cfi_def_cfa_offset 16
 3100              		.cfi_offset 12, -16
 3101 0002 55       		pushq	%rbp
 3102              		.cfi_def_cfa_offset 24
 3103              		.cfi_offset 6, -24
 3104 0003 4989D4   		movq	%rdx, %r12
 3105 0006 53       		pushq	%rbx
 3106              		.cfi_def_cfa_offset 32
 3107              		.cfi_offset 3, -32
 538:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3108              		.loc 4 538 0
 3109 0007 4889FB   		movq	%rdi, %rbx
 3110 000a 4889F5   		movq	%rsi, %rbp
 539:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 3111              		.loc 4 539 0
 3112 000d E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3112      00
 3113              	.LVL356:
 540:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 3114              		.loc 4 540 0
 3115 0012 483BABD0 		cmpq	208(%rbx), %rbp
 3115      000000
 3116 0019 744D     		je	.L288
 3117              	.L284:
 541:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 3118              		.loc 4 541 0
 3119 001b 483BABC8 		cmpq	200(%rbx), %rbp
 3119      000000
 3120 0022 7434     		je	.L289
 3121              	.L285:
 542:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3122              		.loc 4 542 0
 3123 0024 483BABE8 		cmpq	232(%rbx), %rbp
 3123      000000
 3124 002b 740B     		je	.L290
 543:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 3125              		.loc 4 543 0
 3126 002d 5B       		popq	%rbx
 3127              		.cfi_remember_state
 3128              		.cfi_def_cfa_offset 24
 3129              	.LVL357:
 3130 002e 5D       		popq	%rbp
 3131              		.cfi_def_cfa_offset 16
 3132              	.LVL358:
 3133 002f 415C     		popq	%r12
 3134              		.cfi_def_cfa_offset 8
 3135              	.LVL359:
 3136 0031 C3       		ret
 3137              	.LVL360:
 3138              		.p2align 4,,10
 3139 0032 660F1F44 		.p2align 3
 3139      0000
 3140              	.L290:
 3141              		.cfi_restore_state
 542:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3142              		.loc 4 542 0 discriminator 1
 3143 0038 48C783E8 		movq	$0, 232(%rbx)
 3143      00000000 
 3143      000000
 3144 0043 C783B400 		movl	$0, 180(%rbx)
 3144      00000000 
 3144      0000
 543:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 3145              		.loc 4 543 0 discriminator 1
 3146 004d 5B       		popq	%rbx
 3147              		.cfi_remember_state
 3148              		.cfi_def_cfa_offset 24
 3149              	.LVL361:
 3150 004e 5D       		popq	%rbp
 3151              		.cfi_def_cfa_offset 16
 3152              	.LVL362:
 3153 004f 415C     		popq	%r12
 3154              		.cfi_def_cfa_offset 8
 3155              	.LVL363:
 3156 0051 C3       		ret
 3157              	.LVL364:
 3158              		.p2align 4,,10
 3159 0052 660F1F44 		.p2align 3
 3159      0000
 3160              	.L289:
 3161              		.cfi_restore_state
 541:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 3162              		.loc 4 541 0 discriminator 1
 3163 0058 4C89A3C8 		movq	%r12, 200(%rbx)
 3163      000000
 3164 005f EBC3     		jmp	.L285
 3165              		.p2align 4,,10
 3166 0061 0F1F8000 		.p2align 3
 3166      000000
 3167              	.L288:
 540:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 3168              		.loc 4 540 0 discriminator 1
 3169 0068 4C89A3D0 		movq	%r12, 208(%rbx)
 3169      000000
 3170 006f EBAA     		jmp	.L284
 3171              		.cfi_endproc
 3172              	.LFE527:
 3174              		.section	.text.unlikely._ZN11Fl_Browser_9replacingEPvS0_
 3175              	.LCOLDE26:
 3176              		.section	.text._ZN11Fl_Browser_9replacingEPvS0_
 3177              	.LHOTE26:
 3178              		.section	.text.unlikely._ZN11Fl_Browser_8swappingEPvS0_,"ax",@progbits
 3179              		.align 2
 3180              	.LCOLDB27:
 3181              		.section	.text._ZN11Fl_Browser_8swappingEPvS0_,"ax",@progbits
 3182              	.LHOTB27:
 3183              		.align 2
 3184              		.p2align 4,,15
 3185              		.globl	_ZN11Fl_Browser_8swappingEPvS0_
 3187              	_ZN11Fl_Browser_8swappingEPvS0_:
 3188              	.LFB528:
 553:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 3189              		.loc 4 553 0
 3190              		.cfi_startproc
 3191              	.LVL365:
 3192 0000 4154     		pushq	%r12
 3193              		.cfi_def_cfa_offset 16
 3194              		.cfi_offset 12, -16
 3195 0002 55       		pushq	%rbp
 3196              		.cfi_def_cfa_offset 24
 3197              		.cfi_offset 6, -24
 3198 0003 4989D4   		movq	%rdx, %r12
 3199 0006 53       		pushq	%rbx
 3200              		.cfi_def_cfa_offset 32
 3201              		.cfi_offset 3, -32
 553:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 3202              		.loc 4 553 0
 3203 0007 4889FB   		movq	%rdi, %rbx
 3204 000a 4889F5   		movq	%rsi, %rbp
 554:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 3205              		.loc 4 554 0
 3206 000d E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3206      00
 3207              	.LVL366:
 555:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3208              		.loc 4 555 0
 3209 0012 4C89E6   		movq	%r12, %rsi
 3210 0015 4889DF   		movq	%rbx, %rdi
 3211 0018 E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3211      00
 3212              	.LVL367:
 556:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 3213              		.loc 4 556 0
 3214 001d 488B83D0 		movq	208(%rbx), %rax
 3214      000000
 3215 0024 4839C5   		cmpq	%rax, %rbp
 3216 0027 742F     		je	.L297
 557:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3217              		.loc 4 557 0
 3218 0029 4939C4   		cmpq	%rax, %r12
 3219 002c 7452     		je	.L298
 3220              	.L293:
 558:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 3221              		.loc 4 558 0
 3222 002e 488B83C8 		movq	200(%rbx), %rax
 3222      000000
 3223 0035 4839C5   		cmpq	%rax, %rbp
 3224 0038 7431     		je	.L299
 3225              	.L294:
 559:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 3226              		.loc 4 559 0
 3227 003a 4939C4   		cmpq	%rax, %r12
 3228 003d 7409     		je	.L300
 560:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 3229              		.loc 4 560 0
 3230 003f 5B       		popq	%rbx
 3231              		.cfi_remember_state
 3232              		.cfi_def_cfa_offset 24
 3233              	.LVL368:
 3234 0040 5D       		popq	%rbp
 3235              		.cfi_def_cfa_offset 16
 3236              	.LVL369:
 3237 0041 415C     		popq	%r12
 3238              		.cfi_def_cfa_offset 8
 3239              	.LVL370:
 3240 0043 C3       		ret
 3241              	.LVL371:
 3242              		.p2align 4,,10
 3243 0044 0F1F4000 		.p2align 3
 3244              	.L300:
 3245              		.cfi_restore_state
 559:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 3246              		.loc 4 559 0 discriminator 1
 3247 0048 4889ABC8 		movq	%rbp, 200(%rbx)
 3247      000000
 560:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 3248              		.loc 4 560 0 discriminator 1
 3249 004f 5B       		popq	%rbx
 3250              		.cfi_remember_state
 3251              		.cfi_def_cfa_offset 24
 3252              	.LVL372:
 3253 0050 5D       		popq	%rbp
 3254              		.cfi_def_cfa_offset 16
 3255              	.LVL373:
 3256 0051 415C     		popq	%r12
 3257              		.cfi_def_cfa_offset 8
 3258              	.LVL374:
 3259 0053 C3       		ret
 3260              	.LVL375:
 3261              		.p2align 4,,10
 3262 0054 0F1F4000 		.p2align 3
 3263              	.L297:
 3264              		.cfi_restore_state
 558:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 3265              		.loc 4 558 0 discriminator 1
 3266 0058 488B83C8 		movq	200(%rbx), %rax
 3266      000000
 556:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 3267              		.loc 4 556 0 discriminator 1
 3268 005f 4C89A3D0 		movq	%r12, 208(%rbx)
 3268      000000
 558:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 3269              		.loc 4 558 0 discriminator 1
 3270 0066 4839C5   		cmpq	%rax, %rbp
 3271 0069 75CF     		jne	.L294
 3272              	.L299:
 3273 006b 4C89A3C8 		movq	%r12, 200(%rbx)
 3273      000000
 560:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 3274              		.loc 4 560 0 discriminator 1
 3275 0072 5B       		popq	%rbx
 3276              		.cfi_remember_state
 3277              		.cfi_def_cfa_offset 24
 3278              	.LVL376:
 3279 0073 5D       		popq	%rbp
 3280              		.cfi_def_cfa_offset 16
 3281              	.LVL377:
 3282 0074 415C     		popq	%r12
 3283              		.cfi_def_cfa_offset 8
 3284              	.LVL378:
 3285 0076 C3       		ret
 3286              	.LVL379:
 3287 0077 660F1F84 		.p2align 4,,10
 3287      00000000 
 3287      00
 3288              		.p2align 3
 3289              	.L298:
 3290              		.cfi_restore_state
 557:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3291              		.loc 4 557 0 discriminator 1
 3292 0080 4889ABD0 		movq	%rbp, 208(%rbx)
 3292      000000
 3293 0087 EBA5     		jmp	.L293
 3294              		.cfi_endproc
 3295              	.LFE528:
 3297              		.section	.text.unlikely._ZN11Fl_Browser_8swappingEPvS0_
 3298              	.LCOLDE27:
 3299              		.section	.text._ZN11Fl_Browser_8swappingEPvS0_
 3300              	.LHOTE27:
 3301              		.section	.text.unlikely._ZN11Fl_Browser_9insertingEPvS0_,"ax",@progbits
 3302              		.align 2
 3303              	.LCOLDB28:
 3304              		.section	.text._ZN11Fl_Browser_9insertingEPvS0_,"ax",@progbits
 3305              	.LHOTB28:
 3306              		.align 2
 3307              		.p2align 4,,15
 3308              		.globl	_ZN11Fl_Browser_9insertingEPvS0_
 3310              	_ZN11Fl_Browser_9insertingEPvS0_:
 3311              	.LFB529:
 572:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3312              		.loc 4 572 0
 3313              		.cfi_startproc
 3314              	.LVL380:
 3315 0000 4154     		pushq	%r12
 3316              		.cfi_def_cfa_offset 16
 3317              		.cfi_offset 12, -16
 3318 0002 55       		pushq	%rbp
 3319              		.cfi_def_cfa_offset 24
 3320              		.cfi_offset 6, -24
 3321 0003 4989D4   		movq	%rdx, %r12
 3322 0006 53       		pushq	%rbx
 3323              		.cfi_def_cfa_offset 32
 3324              		.cfi_offset 3, -32
 572:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3325              		.loc 4 572 0
 3326 0007 4889F5   		movq	%rsi, %rbp
 3327 000a 4889FB   		movq	%rdi, %rbx
 573:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 3328              		.loc 4 573 0
 3329 000d E8000000 		call	_ZNK11Fl_Browser_9displayedEPv
 3329      00
 3330              	.LVL381:
 3331 0012 85C0     		testl	%eax, %eax
 3332 0014 7512     		jne	.L308
 574:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3333              		.loc 4 574 0
 3334 0016 483BABC8 		cmpq	200(%rbx), %rbp
 3334      000000
 3335 001d 741F     		je	.L309
 3336              	.L301:
 575:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 3337              		.loc 4 575 0
 3338 001f 5B       		popq	%rbx
 3339              		.cfi_remember_state
 3340              		.cfi_def_cfa_offset 24
 3341              	.LVL382:
 3342 0020 5D       		popq	%rbp
 3343              		.cfi_def_cfa_offset 16
 3344              	.LVL383:
 3345 0021 415C     		popq	%r12
 3346              		.cfi_def_cfa_offset 8
 3347              	.LVL384:
 3348 0023 C3       		ret
 3349              	.LVL385:
 3350              		.p2align 4,,10
 3351 0024 0F1F4000 		.p2align 3
 3352              	.L308:
 3353              		.cfi_restore_state
 3354              	.LBB701:
 3355              	.LBB702:
 3356              		.loc 3 197 0
 3357 0028 BE040000 		movl	$4, %esi
 3357      00
 3358 002d 4889DF   		movq	%rbx, %rdi
 3359 0030 E8000000 		call	_ZN9Fl_Widget6damageEh
 3359      00
 3360              	.LVL386:
 3361              	.LBE702:
 3362              	.LBE701:
 574:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3363              		.loc 4 574 0
 3364 0035 483BABC8 		cmpq	200(%rbx), %rbp
 3364      000000
 3365 003c 75E1     		jne	.L301
 3366              	.LVL387:
 3367              	.L309:
 574:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3368              		.loc 4 574 0 is_stmt 0 discriminator 1
 3369 003e 4C89A3C8 		movq	%r12, 200(%rbx)
 3369      000000
 575:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 3370              		.loc 4 575 0 is_stmt 1 discriminator 1
 3371 0045 5B       		popq	%rbx
 3372              		.cfi_def_cfa_offset 24
 3373              	.LVL388:
 3374 0046 5D       		popq	%rbp
 3375              		.cfi_def_cfa_offset 16
 3376              	.LVL389:
 3377 0047 415C     		popq	%r12
 3378              		.cfi_def_cfa_offset 8
 3379              	.LVL390:
 3380 0049 C3       		ret
 3381              		.cfi_endproc
 3382              	.LFE529:
 3384              		.section	.text.unlikely._ZN11Fl_Browser_9insertingEPvS0_
 3385              	.LCOLDE28:
 3386              		.section	.text._ZN11Fl_Browser_9insertingEPvS0_
 3387              	.LHOTE28:
 3388              		.section	.text.unlikely._ZN11Fl_Browser_9find_itemEi,"ax",@progbits
 3389              		.align 2
 3390              	.LCOLDB29:
 3391              		.section	.text._ZN11Fl_Browser_9find_itemEi,"ax",@progbits
 3392              	.LHOTB29:
 3393              		.align 2
 3394              		.p2align 4,,15
 3395              		.globl	_ZN11Fl_Browser_9find_itemEi
 3397              	_ZN11Fl_Browser_9find_itemEi:
 3398              	.LFB530:
 583:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3399              		.loc 4 583 0
 3400              		.cfi_startproc
 3401              	.LVL391:
 3402 0000 4155     		pushq	%r13
 3403              		.cfi_def_cfa_offset 16
 3404              		.cfi_offset 13, -16
 3405 0002 4154     		pushq	%r12
 3406              		.cfi_def_cfa_offset 24
 3407              		.cfi_offset 12, -24
 3408 0004 4189F5   		movl	%esi, %r13d
 3409 0007 55       		pushq	%rbp
 3410              		.cfi_def_cfa_offset 32
 3411              		.cfi_offset 6, -32
 3412 0008 53       		pushq	%rbx
 3413              		.cfi_def_cfa_offset 40
 3414              		.cfi_offset 3, -40
 3415 0009 4889FB   		movq	%rdi, %rbx
 3416 000c 4883EC28 		subq	$40, %rsp
 3417              		.cfi_def_cfa_offset 80
 583:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3418              		.loc 4 583 0
 3419 0010 64488B04 		movq	%fs:40, %rax
 3419      25280000 
 3419      00
 3420 0019 48894424 		movq	%rax, 24(%rsp)
 3420      18
 3421 001e 31C0     		xorl	%eax, %eax
 584:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 3422              		.loc 4 584 0
 3423 0020 E8000000 		call	_ZN11Fl_Browser_10update_topEv
 3423      00
 3424              	.LVL392:
 585:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3425              		.loc 4 585 0
 3426 0025 4C8D4424 		leaq	20(%rsp), %r8
 3426      14
 3427 002a 488D4C24 		leaq	16(%rsp), %rcx
 3427      10
 3428 002f 488D5424 		leaq	12(%rsp), %rdx
 3428      0C
 3429 0034 488D7424 		leaq	8(%rsp), %rsi
 3429      08
 3430 0039 4889DF   		movq	%rbx, %rdi
 3431 003c E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 3431      00
 3432              	.LVL393:
 3433              	.LBB703:
 587:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3434              		.loc 4 587 0
 3435 0041 488BABC8 		movq	200(%rbx), %rbp
 3435      000000
 3436              	.LBE703:
 586:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 3437              		.loc 4 586 0
 3438 0048 448B6424 		movl	12(%rsp), %r12d
 3438      0C
 3439 004d 442BA3B0 		subl	176(%rbx), %r12d
 3439      000000
 3440              	.LVL394:
 3441              	.LBB706:
 587:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3442              		.loc 4 587 0
 3443 0054 4885ED   		testq	%rbp, %rbp
 3444 0057 7440     		je	.L314
 3445 0059 0F1F8000 		.p2align 4,,10
 3445      000000
 3446              		.p2align 3
 3447              	.L321:
 3448              	.LBB704:
 588:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 3449              		.loc 4 588 0
 3450 0060 488B03   		movq	(%rbx), %rax
 3451 0063 4889EE   		movq	%rbp, %rsi
 3452 0066 4889DF   		movq	%rbx, %rdi
 3453 0069 FF5070   		call	*112(%rax)
 3454              	.LVL395:
 3455 006c 85C0     		testl	%eax, %eax
 3456 006e 7E15     		jle	.L313
 589:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3457              		.loc 4 589 0
 3458 0070 4101C4   		addl	%eax, %r12d
 3459              	.LVL396:
 590:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 3460              		.loc 4 590 0
 3461 0073 4539EC   		cmpl	%r13d, %r12d
 3462 0076 7D28     		jge	.L318
 590:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 3463              		.loc 4 590 0 is_stmt 0 discriminator 2
 3464 0078 8B442414 		movl	20(%rsp), %eax
 3465              	.LVL397:
 3466 007c 0344240C 		addl	12(%rsp), %eax
 3467 0080 4139C4   		cmpl	%eax, %r12d
 3468 0083 7D1B     		jge	.L318
 3469              	.L313:
 3470              	.LBE704:
 587:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3471              		.loc 4 587 0 is_stmt 1 discriminator 2
 3472 0085 488B03   		movq	(%rbx), %rax
 3473 0088 4889EE   		movq	%rbp, %rsi
 3474 008b 4889DF   		movq	%rbx, %rdi
 3475 008e FF5058   		call	*88(%rax)
 3476              	.LVL398:
 3477 0091 4885C0   		testq	%rax, %rax
 3478 0094 4889C5   		movq	%rax, %rbp
 3479              	.LVL399:
 3480 0097 75C7     		jne	.L321
 3481              	.LVL400:
 3482              	.L314:
 3483              	.LBE706:
 592:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 3484              		.loc 4 592 0
 3485 0099 31C0     		xorl	%eax, %eax
 3486 009b EB06     		jmp	.L312
 3487 009d 0F1F00   		.p2align 4,,10
 3488              		.p2align 3
 3489              	.L318:
 3490              	.LBB707:
 3491              	.LBB705:
 3492 00a0 4889E8   		movq	%rbp, %rax
 3493              	.L312:
 3494              	.LBE705:
 3495              	.LBE707:
 593:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3496              		.loc 4 593 0
 3497 00a3 488B5424 		movq	24(%rsp), %rdx
 3497      18
 3498 00a8 64483314 		xorq	%fs:40, %rdx
 3498      25280000 
 3498      00
 3499 00b1 750B     		jne	.L324
 3500 00b3 4883C428 		addq	$40, %rsp
 3501              		.cfi_remember_state
 3502              		.cfi_def_cfa_offset 40
 3503 00b7 5B       		popq	%rbx
 3504              		.cfi_def_cfa_offset 32
 3505              	.LVL401:
 3506 00b8 5D       		popq	%rbp
 3507              		.cfi_def_cfa_offset 24
 3508              	.LVL402:
 3509 00b9 415C     		popq	%r12
 3510              		.cfi_def_cfa_offset 16
 3511              	.LVL403:
 3512 00bb 415D     		popq	%r13
 3513              		.cfi_def_cfa_offset 8
 3514              	.LVL404:
 3515 00bd C3       		ret
 3516              	.LVL405:
 3517              	.L324:
 3518              		.cfi_restore_state
 3519 00be E8000000 		call	__stack_chk_fail
 3519      00
 3520              	.LVL406:
 3521              		.cfi_endproc
 3522              	.LFE530:
 3524              		.section	.text.unlikely._ZN11Fl_Browser_9find_itemEi
 3525              	.LCOLDE29:
 3526              		.section	.text._ZN11Fl_Browser_9find_itemEi
 3527              	.LHOTE29:
 3528              		.section	.text.unlikely._ZN11Fl_Browser_6selectEPvii,"ax",@progbits
 3529              		.align 2
 3530              	.LCOLDB30:
 3531              		.section	.text._ZN11Fl_Browser_6selectEPvii,"ax",@progbits
 3532              	.LHOTB30:
 3533              		.align 2
 3534              		.p2align 4,,15
 3535              		.globl	_ZN11Fl_Browser_6selectEPvii
 3537              	_ZN11Fl_Browser_6selectEPvii:
 3538              	.LFB531:
 608:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3539              		.loc 4 608 0
 3540              		.cfi_startproc
 3541              	.LVL407:
 3542 0000 4156     		pushq	%r14
 3543              		.cfi_def_cfa_offset 16
 3544              		.cfi_offset 14, -16
 3545 0002 4155     		pushq	%r13
 3546              		.cfi_def_cfa_offset 24
 3547              		.cfi_offset 13, -24
 3548 0004 4189CD   		movl	%ecx, %r13d
 3549 0007 4154     		pushq	%r12
 3550              		.cfi_def_cfa_offset 32
 3551              		.cfi_offset 12, -32
 3552 0009 55       		pushq	%rbp
 3553              		.cfi_def_cfa_offset 40
 3554              		.cfi_offset 6, -40
 3555 000a 4189D4   		movl	%edx, %r12d
 3556 000d 53       		pushq	%rbx
 3557              		.cfi_def_cfa_offset 48
 3558              		.cfi_offset 3, -48
 3559 000e 4889F5   		movq	%rsi, %rbp
 3560 0011 4889FB   		movq	%rdi, %rbx
 3561 0014 4883EC10 		subq	$16, %rsp
 3562              		.cfi_def_cfa_offset 64
 609:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 3563              		.loc 4 609 0
 3564 0018 807F6C03 		cmpb	$3, 108(%rdi)
 3565 001c 0F84BE00 		je	.L365
 3565      0000
 619:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 3566              		.loc 4 619 0
 3567 0022 85D2     		testl	%edx, %edx
 3568 0024 0F849600 		je	.L335
 3568      0000
 619:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 3569              		.loc 4 619 0 is_stmt 0 discriminator 1
 3570 002a 488BB7D0 		movq	208(%rdi), %rsi
 3570      000000
 3571              	.LVL408:
 3572 0031 4839F5   		cmpq	%rsi, %rbp
 3573 0034 0F849300 		je	.L336
 3573      0000
 621:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 3574              		.loc 4 621 0 is_stmt 1
 3575 003a 4885F6   		testq	%rsi, %rsi
 3576 003d 0F847001 		je	.L339
 3576      0000
 622:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3577              		.loc 4 622 0
 3578 0043 488B07   		movq	(%rdi), %rax
 3579 0046 488B80C0 		movq	192(%rax), %rax
 3579      000000
 3580 004d 483D0000 		cmpq	$_ZN11Fl_Browser_11item_selectEPvi, %rax
 3580      0000
 3581 0053 0F844701 		je	.L366
 3581      0000
 3582              	.L345:
 3583 0059 31D2     		xorl	%edx, %edx
 3584              	.LVL409:
 3585 005b 4889DF   		movq	%rbx, %rdi
 3586              	.LVL410:
 3587 005e FFD0     		call	*%rax
 3588              	.LVL411:
 623:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 3589              		.loc 4 623 0
 3590 0060 488BB3D0 		movq	208(%rbx), %rsi
 3590      000000
 3591 0067 4889DF   		movq	%rbx, %rdi
 3592 006a E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3592      00
 3593              	.LVL412:
 626:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3594              		.loc 4 626 0
 3595 006f 4585E4   		testl	%r12d, %r12d
 624:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 3596              		.loc 4 624 0
 3597 0072 48C783D0 		movq	$0, 208(%rbx)
 3597      00000000 
 3597      000000
 626:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3598              		.loc 4 626 0
 3599 007d 0F853001 		jne	.L339
 3599      0000
 3600              	.L334:
 633:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3601              		.loc 4 633 0
 3602 0083 4585ED   		testl	%r13d, %r13d
 637:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 3603              		.loc 4 637 0
 3604 0086 B8010000 		movl	$1, %eax
 3604      00
 633:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3605              		.loc 4 633 0
 3606 008b 7442     		je	.L354
 3607              	.LBB720:
 3608              	.LBB721:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3609              		.loc 1 786 0
 3610 008d 814B6080 		orl	$128, 96(%rbx)
 3610      000000
 3611              	.LBE721:
 3612              	.LBE720:
 3613              	.LBB722:
 3614              	.LBB723:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3615              		.loc 1 861 0
 3616 0094 488B5318 		movq	24(%rbx), %rdx
 3617 0098 4889DE   		movq	%rbx, %rsi
 3618 009b 4889DF   		movq	%rbx, %rdi
 3619 009e 8944240C 		movl	%eax, 12(%rsp)
 3620              	.LVL413:
 3621 00a2 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3621      00
 3622              	.LVL414:
 3623 00a7 8B44240C 		movl	12(%rsp), %eax
 3624              	.LBE723:
 3625              	.LBE722:
 638:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3626              		.loc 4 638 0
 3627 00ab 4883C410 		addq	$16, %rsp
 3628              		.cfi_remember_state
 3629              		.cfi_def_cfa_offset 48
 3630 00af 5B       		popq	%rbx
 3631              		.cfi_def_cfa_offset 40
 3632              	.LVL415:
 3633 00b0 5D       		popq	%rbp
 3634              		.cfi_def_cfa_offset 32
 3635              	.LVL416:
 3636 00b1 415C     		popq	%r12
 3637              		.cfi_def_cfa_offset 24
 3638              	.LVL417:
 3639 00b3 415D     		popq	%r13
 3640              		.cfi_def_cfa_offset 16
 3641              	.LVL418:
 3642 00b5 415E     		popq	%r14
 3643              		.cfi_def_cfa_offset 8
 3644 00b7 C3       		ret
 3645              	.LVL419:
 3646 00b8 0F1F8400 		.p2align 4,,10
 3646      00000000 
 3647              		.p2align 3
 3648              	.L335:
 3649              		.cfi_restore_state
 620:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3650              		.loc 4 620 0 discriminator 1
 3651 00c0 483BB7D0 		cmpq	208(%rdi), %rsi
 3651      000000
 3652 00c7 0F849B00 		je	.L367
 3652      0000
 3653              	.LVL420:
 3654              	.L336:
 615:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 3655              		.loc 4 615 0
 3656 00cd 31C0     		xorl	%eax, %eax
 3657              	.L354:
 638:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3658              		.loc 4 638 0
 3659 00cf 4883C410 		addq	$16, %rsp
 3660              		.cfi_remember_state
 3661              		.cfi_def_cfa_offset 48
 3662 00d3 5B       		popq	%rbx
 3663              		.cfi_def_cfa_offset 40
 3664              	.LVL421:
 3665 00d4 5D       		popq	%rbp
 3666              		.cfi_def_cfa_offset 32
 3667              	.LVL422:
 3668 00d5 415C     		popq	%r12
 3669              		.cfi_def_cfa_offset 24
 3670              	.LVL423:
 3671 00d7 415D     		popq	%r13
 3672              		.cfi_def_cfa_offset 16
 3673              	.LVL424:
 3674 00d9 415E     		popq	%r14
 3675              		.cfi_def_cfa_offset 8
 3676 00db C3       		ret
 3677              	.LVL425:
 3678 00dc 0F1F4000 		.p2align 4,,10
 3679              		.p2align 3
 3680              	.L365:
 3681              		.cfi_restore_state
 610:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3682              		.loc 4 610 0
 3683 00e0 488BB7D0 		movq	208(%rdi), %rsi
 3683      000000
 3684              	.LVL426:
 3685 00e7 4839EE   		cmpq	%rbp, %rsi
 3686 00ea 741C     		je	.L327
 611:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 3687              		.loc 4 611 0
 3688 00ec 4885F6   		testq	%rsi, %rsi
 3689 00ef 7405     		je	.L328
 611:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 3690              		.loc 4 611 0 is_stmt 0 discriminator 1
 3691 00f1 E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3691      00
 3692              	.LVL427:
 3693              	.L328:
 612:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 3694              		.loc 4 612 0 is_stmt 1
 3695 00f6 4889ABD0 		movq	%rbp, 208(%rbx)
 3695      000000
 613:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 3696              		.loc 4 613 0
 3697 00fd 4889EE   		movq	%rbp, %rsi
 3698 0100 4889DF   		movq	%rbx, %rdi
 3699 0103 E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3699      00
 3700              	.LVL428:
 3701              	.L327:
 615:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 3702              		.loc 4 615 0
 3703 0108 488B03   		movq	(%rbx), %rax
 3704 010b 4585E4   		testl	%r12d, %r12d
 3705 010e 410F95C6 		setne	%r14b
 3706 0112 488B80C8 		movq	200(%rax), %rax
 3706      000000
 3707 0119 483D0000 		cmpq	$_ZNK11Fl_Browser_13item_selectedEPv, %rax
 3707      0000
 3708 011f 0F85CB00 		jne	.L329
 3708      0000
 3709              	.LVL429:
 3710              	.LBB724:
 3711              	.LBB725:
 3712              		.loc 4 1098 0
 3713 0125 31C0     		xorl	%eax, %eax
 3714 0127 4839ABD0 		cmpq	%rbp, 208(%rbx)
 3714      000000
 3715 012e 0F94C0   		sete	%al
 3716              	.LVL430:
 3717              	.L330:
 3718              	.LBE725:
 3719              	.LBE724:
 615:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 3720              		.loc 4 615 0
 3721 0131 85C0     		testl	%eax, %eax
 3722 0133 0F94C0   		sete	%al
 3723 0136 4138C6   		cmpb	%al, %r14b
 3724 0139 7592     		jne	.L336
 616:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3725              		.loc 4 616 0
 3726 013b 488B03   		movq	(%rbx), %rax
 3727 013e 488B80C0 		movq	192(%rax), %rax
 3727      000000
 3728 0145 483D0000 		cmpq	$_ZN11Fl_Browser_11item_selectEPvi, %rax
 3728      0000
 3729 014b 0F85AF00 		jne	.L368
 3729      0000
 3730              	.L333:
 617:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 3731              		.loc 4 617 0
 3732 0151 4889EE   		movq	%rbp, %rsi
 3733 0154 4889DF   		movq	%rbx, %rdi
 3734 0157 E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3734      00
 3735              	.LVL431:
 3736 015c E922FFFF 		jmp	.L334
 3736      FF
 3737              	.LVL432:
 3738              		.p2align 4,,10
 3739 0161 0F1F8000 		.p2align 3
 3739      000000
 3740              	.L367:
 621:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 3741              		.loc 4 621 0
 3742 0168 4885F6   		testq	%rsi, %rsi
 3743 016b 0F8412FF 		je	.L334
 3743      FFFF
 622:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3744              		.loc 4 622 0
 3745 0171 488B07   		movq	(%rdi), %rax
 3746 0174 488B80C0 		movq	192(%rax), %rax
 3746      000000
 3747 017b 483D0000 		cmpq	$_ZN11Fl_Browser_11item_selectEPvi, %rax
 3747      0000
 3748 0181 0F85D2FE 		jne	.L345
 3748      FFFF
 623:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 3749              		.loc 4 623 0
 3750 0187 4889DF   		movq	%rbx, %rdi
 3751 018a E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3751      00
 3752              	.LVL433:
 624:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 3753              		.loc 4 624 0
 3754 018f 48C783D0 		movq	$0, 208(%rbx)
 3754      00000000 
 3754      000000
 3755 019a E9E4FEFF 		jmp	.L334
 3755      FF
 3756              	.LVL434:
 3757 019f 90       		.p2align 4,,10
 3758              		.p2align 3
 3759              	.L366:
 623:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 3760              		.loc 4 623 0
 3761 01a0 4889DF   		movq	%rbx, %rdi
 3762 01a3 E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3762      00
 3763              	.LVL435:
 624:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 3764              		.loc 4 624 0
 3765 01a8 48C783D0 		movq	$0, 208(%rbx)
 3765      00000000 
 3765      000000
 3766              	.L339:
 627:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 3767              		.loc 4 627 0
 3768 01b3 488B03   		movq	(%rbx), %rax
 3769 01b6 488B80C0 		movq	192(%rax), %rax
 3769      000000
 3770 01bd 483D0000 		cmpq	$_ZN11Fl_Browser_11item_selectEPvi, %rax
 3770      0000
 3771 01c3 754B     		jne	.L369
 3772              	.L340:
 629:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 3773              		.loc 4 629 0
 3774 01c5 4889EE   		movq	%rbp, %rsi
 3775 01c8 4889DF   		movq	%rbx, %rdi
 628:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3776              		.loc 4 628 0
 3777 01cb 4889ABD0 		movq	%rbp, 208(%rbx)
 3777      000000
 629:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 3778              		.loc 4 629 0
 3779 01d2 E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3779      00
 3780              	.LVL436:
 630:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3781              		.loc 4 630 0
 3782 01d7 4889EE   		movq	%rbp, %rsi
 3783 01da 4889DF   		movq	%rbx, %rdi
 3784 01dd E8000000 		call	_ZN11Fl_Browser_7displayEPv
 3784      00
 3785              	.LVL437:
 3786 01e2 E99CFEFF 		jmp	.L334
 3786      FF
 3787 01e7 660F1F84 		.p2align 4,,10
 3787      00000000 
 3787      00
 3788              		.p2align 3
 3789              	.L329:
 615:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 3790              		.loc 4 615 0
 3791 01f0 4889EE   		movq	%rbp, %rsi
 3792 01f3 4889DF   		movq	%rbx, %rdi
 3793 01f6 FFD0     		call	*%rax
 3794              	.LVL438:
 3795 01f8 E934FFFF 		jmp	.L330
 3795      FF
 3796 01fd 0F1F00   		.p2align 4,,10
 3797              		.p2align 3
 3798              	.L368:
 616:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3799              		.loc 4 616 0
 3800 0200 4489E2   		movl	%r12d, %edx
 3801 0203 4889EE   		movq	%rbp, %rsi
 3802 0206 4889DF   		movq	%rbx, %rdi
 3803 0209 FFD0     		call	*%rax
 3804              	.LVL439:
 3805 020b E941FFFF 		jmp	.L333
 3805      FF
 3806              		.p2align 4,,10
 3807              		.p2align 3
 3808              	.L369:
 627:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 3809              		.loc 4 627 0
 3810 0210 BA010000 		movl	$1, %edx
 3810      00
 3811 0215 4889EE   		movq	%rbp, %rsi
 3812 0218 4889DF   		movq	%rbx, %rdi
 3813 021b FFD0     		call	*%rax
 3814              	.LVL440:
 3815 021d EBA6     		jmp	.L340
 3816              		.cfi_endproc
 3817              	.LFE531:
 3819              		.section	.text.unlikely._ZN11Fl_Browser_6selectEPvii
 3820              	.LCOLDE30:
 3821              		.section	.text._ZN11Fl_Browser_6selectEPvii
 3822              	.LHOTE30:
 3823              		.section	.text.unlikely._ZN11Fl_Browser_8deselectEi,"ax",@progbits
 3824              		.align 2
 3825              	.LCOLDB31:
 3826              		.section	.text._ZN11Fl_Browser_8deselectEi,"ax",@progbits
 3827              	.LHOTB31:
 3828              		.align 2
 3829              		.p2align 4,,15
 3830              		.globl	_ZN11Fl_Browser_8deselectEi
 3832              	_ZN11Fl_Browser_8deselectEi:
 3833              	.LFB532:
 650:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 3834              		.loc 4 650 0
 3835              		.cfi_startproc
 3836              	.LVL441:
 3837 0000 4155     		pushq	%r13
 3838              		.cfi_def_cfa_offset 16
 3839              		.cfi_offset 13, -16
 3840 0002 4154     		pushq	%r12
 3841              		.cfi_def_cfa_offset 24
 3842              		.cfi_offset 12, -24
 3843 0004 55       		pushq	%rbp
 3844              		.cfi_def_cfa_offset 32
 3845              		.cfi_offset 6, -32
 3846 0005 53       		pushq	%rbx
 3847              		.cfi_def_cfa_offset 40
 3848              		.cfi_offset 3, -40
 3849 0006 4889FB   		movq	%rdi, %rbx
 3850 0009 4883EC08 		subq	$8, %rsp
 3851              		.cfi_def_cfa_offset 48
 3852              	.LBB736:
 651:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 3853              		.loc 4 651 0
 3854 000d 807F6C03 		cmpb	$3, 108(%rdi)
 3855 0011 745D     		je	.L387
 657:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 3856              		.loc 4 657 0
 3857 0013 488BB7D0 		movq	208(%rdi), %rsi
 3857      000000
 3858              	.LVL442:
 3859 001a 4885F6   		testq	%rsi, %rsi
 3860 001d 7441     		je	.L375
 658:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 3861              		.loc 4 658 0
 3862 001f 488B07   		movq	(%rdi), %rax
 3863 0022 488B80C0 		movq	192(%rax), %rax
 3863      000000
 3864 0029 483D0000 		cmpq	$_ZN11Fl_Browser_11item_selectEPvi, %rax
 3864      0000
 3865 002f 0F858B00 		jne	.L388
 3865      0000
 3866              	.LVL443:
 3867              	.L376:
 659:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 3868              		.loc 4 659 0
 3869 0035 4889DF   		movq	%rbx, %rdi
 3870 0038 E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 3870      00
 3871              	.LVL444:
 660:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 3872              		.loc 4 660 0
 3873 003d 48C783D0 		movq	$0, 208(%rbx)
 3873      00000000 
 3873      000000
 3874              	.LBE736:
 663:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3875              		.loc 4 663 0
 3876 0048 4883C408 		addq	$8, %rsp
 3877              		.cfi_remember_state
 3878              		.cfi_def_cfa_offset 40
 3879              	.LBB737:
 661:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 3880              		.loc 4 661 0
 3881 004c B8010000 		movl	$1, %eax
 3881      00
 3882              	.LBE737:
 663:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3883              		.loc 4 663 0
 3884 0051 5B       		popq	%rbx
 3885              		.cfi_def_cfa_offset 32
 3886              	.LVL445:
 3887 0052 5D       		popq	%rbp
 3888              		.cfi_def_cfa_offset 24
 3889 0053 415C     		popq	%r12
 3890              		.cfi_def_cfa_offset 16
 3891 0055 415D     		popq	%r13
 3892              		.cfi_def_cfa_offset 8
 3893 0057 C3       		ret
 3894              	.LVL446:
 3895 0058 0F1F8400 		.p2align 4,,10
 3895      00000000 
 3896              		.p2align 3
 3897              	.L375:
 3898              		.cfi_restore_state
 3899 0060 4883C408 		addq	$8, %rsp
 3900              		.cfi_remember_state
 3901              		.cfi_def_cfa_offset 40
 3902              	.LBB738:
 3903              	.LBB739:
 652:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 3904              		.loc 4 652 0
 3905 0064 31C0     		xorl	%eax, %eax
 3906              	.LBE739:
 3907              	.LBE738:
 663:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3908              		.loc 4 663 0
 3909 0066 5B       		popq	%rbx
 3910              		.cfi_def_cfa_offset 32
 3911              	.LVL447:
 3912 0067 5D       		popq	%rbp
 3913              		.cfi_def_cfa_offset 24
 3914 0068 415C     		popq	%r12
 3915              		.cfi_def_cfa_offset 16
 3916 006a 415D     		popq	%r13
 3917              		.cfi_def_cfa_offset 8
 3918 006c C3       		ret
 3919              	.LVL448:
 3920 006d 0F1F00   		.p2align 4,,10
 3921              		.p2align 3
 3922              	.L387:
 3923              		.cfi_restore_state
 3924              	.LBB744:
 3925              	.LBB742:
 3926              	.LBB740:
 653:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 3927              		.loc 4 653 0
 3928 0070 488B07   		movq	(%rdi), %rax
 3929 0073 4189F5   		movl	%esi, %r13d
 3930              	.LVL449:
 3931 0076 4531E4   		xorl	%r12d, %r12d
 3932 0079 FF5050   		call	*80(%rax)
 3933              	.LVL450:
 3934 007c 4885C0   		testq	%rax, %rax
 3935 007f 4889C5   		movq	%rax, %rbp
 3936              	.LVL451:
 3937 0082 74DC     		je	.L375
 3938              	.LVL452:
 3939              		.p2align 4,,10
 3940 0084 0F1F4000 		.p2align 3
 3941              	.L382:
 654:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 3942              		.loc 4 654 0
 3943 0088 31D2     		xorl	%edx, %edx
 3944 008a 4889EE   		movq	%rbp, %rsi
 3945 008d 4489E9   		movl	%r13d, %ecx
 3946 0090 4889DF   		movq	%rbx, %rdi
 3947 0093 E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 3947      00
 3948              	.LVL453:
 3949 0098 4109C4   		orl	%eax, %r12d
 3950              	.LVL454:
 653:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 3951              		.loc 4 653 0
 3952 009b 488B03   		movq	(%rbx), %rax
 3953 009e 4889EE   		movq	%rbp, %rsi
 3954 00a1 4889DF   		movq	%rbx, %rdi
 3955 00a4 FF5058   		call	*88(%rax)
 3956              	.LVL455:
 3957 00a7 4885C0   		testq	%rax, %rax
 3958 00aa 4889C5   		movq	%rax, %rbp
 3959              	.LVL456:
 3960 00ad 75D9     		jne	.L382
 3961              	.LBE740:
 3962              	.LBE742:
 3963              	.LBE744:
 663:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3964              		.loc 4 663 0
 3965 00af 4883C408 		addq	$8, %rsp
 3966              		.cfi_remember_state
 3967              		.cfi_def_cfa_offset 40
 3968              	.LBB745:
 3969              	.LBB743:
 3970              	.LBB741:
 654:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 3971              		.loc 4 654 0
 3972 00b3 4489E0   		movl	%r12d, %eax
 3973              	.LVL457:
 3974              	.LBE741:
 3975              	.LBE743:
 3976              	.LBE745:
 663:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3977              		.loc 4 663 0
 3978 00b6 5B       		popq	%rbx
 3979              		.cfi_def_cfa_offset 32
 3980              	.LVL458:
 3981 00b7 5D       		popq	%rbp
 3982              		.cfi_def_cfa_offset 24
 3983              	.LVL459:
 3984 00b8 415C     		popq	%r12
 3985              		.cfi_def_cfa_offset 16
 3986              	.LVL460:
 3987 00ba 415D     		popq	%r13
 3988              		.cfi_def_cfa_offset 8
 3989              	.LVL461:
 3990 00bc C3       		ret
 3991              	.LVL462:
 3992 00bd 0F1F00   		.p2align 4,,10
 3993              		.p2align 3
 3994              	.L388:
 3995              		.cfi_restore_state
 3996              	.LBB746:
 658:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 3997              		.loc 4 658 0
 3998 00c0 31D2     		xorl	%edx, %edx
 3999 00c2 FFD0     		call	*%rax
 4000              	.LVL463:
 4001 00c4 488BB3D0 		movq	208(%rbx), %rsi
 4001      000000
 4002 00cb E965FFFF 		jmp	.L376
 4002      FF
 4003              	.LBE746:
 4004              		.cfi_endproc
 4005              	.LFE532:
 4007              		.section	.text.unlikely._ZN11Fl_Browser_8deselectEi
 4008              	.LCOLDE31:
 4009              		.section	.text._ZN11Fl_Browser_8deselectEi
 4010              	.LHOTE31:
 4011              		.section	.text.unlikely._ZN11Fl_Browser_11select_onlyEPvi,"ax",@progbits
 4012              		.align 2
 4013              	.LCOLDB32:
 4014              		.section	.text._ZN11Fl_Browser_11select_onlyEPvi,"ax",@progbits
 4015              	.LHOTB32:
 4016              		.align 2
 4017              		.p2align 4,,15
 4018              		.globl	_ZN11Fl_Browser_11select_onlyEPvi
 4020              	_ZN11Fl_Browser_11select_onlyEPvi:
 4021              	.LFB533:
 672:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 4022              		.loc 4 672 0
 4023              		.cfi_startproc
 4024              	.LVL464:
 4025 0000 4156     		pushq	%r14
 4026              		.cfi_def_cfa_offset 16
 4027              		.cfi_offset 14, -16
 4028 0002 4155     		pushq	%r13
 4029              		.cfi_def_cfa_offset 24
 4030              		.cfi_offset 13, -24
 4031 0004 4189D6   		movl	%edx, %r14d
 4032 0007 4154     		pushq	%r12
 4033              		.cfi_def_cfa_offset 32
 4034              		.cfi_offset 12, -32
 4035 0009 55       		pushq	%rbp
 4036              		.cfi_def_cfa_offset 40
 4037              		.cfi_offset 6, -40
 4038 000a 4889FD   		movq	%rdi, %rbp
 4039 000d 53       		pushq	%rbx
 4040              		.cfi_def_cfa_offset 48
 4041              		.cfi_offset 3, -48
 4042 000e 4883EC10 		subq	$16, %rsp
 4043              		.cfi_def_cfa_offset 64
 672:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 4044              		.loc 4 672 0
 4045 0012 64488B04 		movq	%fs:40, %rax
 4045      25280000 
 4045      00
 4046 001b 48894424 		movq	%rax, 8(%rsp)
 4046      08
 4047 0020 31C0     		xorl	%eax, %eax
 673:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 4048              		.loc 4 673 0
 4049 0022 4885F6   		testq	%rsi, %rsi
 4050 0025 0F84C500 		je	.L406
 4050      0000
 4051 002b 4989F4   		movq	%rsi, %r12
 4052              	.LVL465:
 675:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4053              		.loc 4 675 0
 4054 002e 4889FE   		movq	%rdi, %rsi
 4055              	.LVL466:
 4056 0031 4889E7   		movq	%rsp, %rdi
 4057              	.LVL467:
 4058 0034 E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 4058      00
 4059              	.LVL468:
 674:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 4060              		.loc 4 674 0
 4061 0039 4531ED   		xorl	%r13d, %r13d
 4062              	.LBB747:
 676:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4063              		.loc 4 676 0
 4064 003c 807D6C03 		cmpb	$3, 108(%rbp)
 4065 0040 7456     		je	.L407
 4066              	.LVL469:
 4067              	.L393:
 4068              	.LBE747:
 682:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 4069              		.loc 4 682 0
 4070 0042 4489F1   		movl	%r14d, %ecx
 4071 0045 BA010000 		movl	$1, %edx
 4071      00
 4072 004a 4C89E6   		movq	%r12, %rsi
 4073 004d 4889EF   		movq	%rbp, %rdi
 4074 0050 E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 4074      00
 4075              	.LVL470:
 683:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4076              		.loc 4 683 0
 4077 0055 4109C5   		orl	%eax, %r13d
 4078              	.LVL471:
 4079 0058 48833C24 		cmpq	$0, (%rsp)
 4079      00
 4080 005d 740B     		je	.L396
 684:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 4081              		.loc 4 684 0
 4082 005f 4C89E6   		movq	%r12, %rsi
 4083 0062 4889EF   		movq	%rbp, %rdi
 4084 0065 E8000000 		call	_ZN11Fl_Browser_7displayEPv
 4084      00
 4085              	.LVL472:
 4086              	.L396:
 675:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4087              		.loc 4 675 0
 4088 006a 4889E7   		movq	%rsp, %rdi
 4089 006d E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 4089      00
 4090              	.LVL473:
 4091              	.L391:
 686:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4092              		.loc 4 686 0
 4093 0072 488B4C24 		movq	8(%rsp), %rcx
 4093      08
 4094 0077 6448330C 		xorq	%fs:40, %rcx
 4094      25280000 
 4094      00
 4095 0080 4489E8   		movl	%r13d, %eax
 4096 0083 757A     		jne	.L408
 4097 0085 4883C410 		addq	$16, %rsp
 4098              		.cfi_remember_state
 4099              		.cfi_def_cfa_offset 48
 4100 0089 5B       		popq	%rbx
 4101              		.cfi_def_cfa_offset 40
 4102 008a 5D       		popq	%rbp
 4103              		.cfi_def_cfa_offset 32
 4104              	.LVL474:
 4105 008b 415C     		popq	%r12
 4106              		.cfi_def_cfa_offset 24
 4107 008d 415D     		popq	%r13
 4108              		.cfi_def_cfa_offset 16
 4109 008f 415E     		popq	%r14
 4110              		.cfi_def_cfa_offset 8
 4111              	.LVL475:
 4112 0091 C3       		ret
 4113              	.LVL476:
 4114              		.p2align 4,,10
 4115 0092 660F1F44 		.p2align 3
 4115      0000
 4116              	.L407:
 4117              		.cfi_restore_state
 4118              	.LBB749:
 4119              	.LBB748:
 677:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4120              		.loc 4 677 0
 4121 0098 488B4500 		movq	0(%rbp), %rax
 4122 009c 4889EF   		movq	%rbp, %rdi
 4123 009f FF5050   		call	*80(%rax)
 4124              	.LVL477:
 4125 00a2 4885C0   		testq	%rax, %rax
 4126 00a5 4889C3   		movq	%rax, %rbx
 4127              	.LVL478:
 4128 00a8 751F     		jne	.L397
 4129 00aa EB96     		jmp	.L393
 4130              	.LVL479:
 4131 00ac 0F1F4000 		.p2align 4,,10
 4132              		.p2align 3
 4133              	.L409:
 677:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4134              		.loc 4 677 0 is_stmt 0 discriminator 2
 4135 00b0 488B4500 		movq	0(%rbp), %rax
 4136 00b4 4889DE   		movq	%rbx, %rsi
 4137 00b7 4889EF   		movq	%rbp, %rdi
 4138 00ba FF5058   		call	*88(%rax)
 4139              	.LVL480:
 4140 00bd 4885C0   		testq	%rax, %rax
 4141 00c0 4889C3   		movq	%rax, %rbx
 4142              	.LVL481:
 4143 00c3 0F8479FF 		je	.L393
 4143      FFFF
 4144              	.LVL482:
 4145              	.L397:
 678:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 4146              		.loc 4 678 0 is_stmt 1
 4147 00c9 4939DC   		cmpq	%rbx, %r12
 4148 00cc 7413     		je	.L395
 678:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 4149              		.loc 4 678 0 is_stmt 0 discriminator 1
 4150 00ce 4489F1   		movl	%r14d, %ecx
 4151 00d1 31D2     		xorl	%edx, %edx
 4152 00d3 4889DE   		movq	%rbx, %rsi
 4153 00d6 4889EF   		movq	%rbp, %rdi
 4154 00d9 E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 4154      00
 4155              	.LVL483:
 4156 00de 4109C5   		orl	%eax, %r13d
 4157              	.LVL484:
 4158              	.L395:
 679:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 4159              		.loc 4 679 0 is_stmt 1
 4160 00e1 48833C24 		cmpq	$0, (%rsp)
 4160      00
 4161 00e6 75C8     		jne	.L409
 4162 00e8 EB80     		jmp	.L396
 4163              	.LVL485:
 4164 00ea 660F1F44 		.p2align 4,,10
 4164      0000
 4165              		.p2align 3
 4166              	.L406:
 4167              	.LBE748:
 4168              	.LBE749:
 673:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 4169              		.loc 4 673 0 discriminator 1
 4170 00f0 89D6     		movl	%edx, %esi
 4171              	.LVL486:
 4172 00f2 E8000000 		call	_ZN11Fl_Browser_8deselectEi
 4172      00
 4173              	.LVL487:
 4174 00f7 4189C5   		movl	%eax, %r13d
 4175 00fa E973FFFF 		jmp	.L391
 4175      FF
 4176              	.L408:
 686:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4177              		.loc 4 686 0
 4178 00ff E8000000 		call	__stack_chk_fail
 4178      00
 4179              	.LVL488:
 4180              		.cfi_endproc
 4181              	.LFE533:
 4183              		.section	.text.unlikely._ZN11Fl_Browser_11select_onlyEPvi
 4184              	.LCOLDE32:
 4185              		.section	.text._ZN11Fl_Browser_11select_onlyEPvi
 4186              	.LHOTE32:
 4187              		.section	.text.unlikely._ZN11Fl_Browser_C2EiiiiPKc,"ax",@progbits
 4188              		.align 2
 4189              	.LCOLDB33:
 4190              		.section	.text._ZN11Fl_Browser_C2EiiiiPKc,"ax",@progbits
 4191              	.LHOTB33:
 4192              		.align 2
 4193              		.p2align 4,,15
 4194              		.globl	_ZN11Fl_Browser_C2EiiiiPKc
 4196              	_ZN11Fl_Browser_C2EiiiiPKc:
 4197              	.LFB536:
 955:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4198              		.loc 4 955 0
 4199              		.cfi_startproc
 4200              	.LVL489:
 4201 0000 53       		pushq	%rbx
 4202              		.cfi_def_cfa_offset 16
 4203              		.cfi_offset 3, -16
 955:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4204              		.loc 4 955 0
 4205 0001 4889FB   		movq	%rdi, %rbx
 4206              	.LBB750:
 958:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  942:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 4207              		.loc 4 958 0
 4208 0004 E8000000 		call	_ZN8Fl_GroupC2EiiiiPKc
 4208      00
 4209              	.LVL490:
 4210 0009 488DBBF8 		leaq	248(%rbx), %rdi
 4210      000000
 4211 0010 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 4211      000000
 4212 0017 4531C9   		xorl	%r9d, %r9d
 4213 001a 4531C0   		xorl	%r8d, %r8d
 4214 001d 31C9     		xorl	%ecx, %ecx
 4215 001f 31D2     		xorl	%edx, %edx
 4216 0021 31F6     		xorl	%esi, %esi
 4217 0023 E8000000 		call	_ZN12Fl_ScrollbarC1EiiiiPKc
 4217      00
 4218              	.LVL491:
 4219 0028 488DBBB0 		leaq	432(%rbx), %rdi
 4219      010000
 4220 002f 4531C9   		xorl	%r9d, %r9d
 4221 0032 4531C0   		xorl	%r8d, %r8d
 4222 0035 31C9     		xorl	%ecx, %ecx
 4223 0037 31D2     		xorl	%edx, %edx
 4224 0039 31F6     		xorl	%esi, %esi
 4225 003b E8000000 		call	_ZN12Fl_ScrollbarC1EiiiiPKc
 4225      00
 4226              	.LVL492:
 974:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  958:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4227              		.loc 4 974 0
 4228 0040 8B050000 		movl	FL_NORMAL_SIZE(%rip), %eax
 4228      0000
 4229              	.LBB751:
 4230              	.LBB752:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4231              		.loc 1 372 0
 4232 0046 C6436E00 		movb	$0, 110(%rbx)
 4233              	.LVL493:
 4234              	.LBE752:
 4235              	.LBE751:
 981:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  965:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 4236              		.loc 4 981 0
 4237 004a 4889DF   		movq	%rbx, %rdi
 4238              	.LBB753:
 4239              	.LBB754:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4240              		.loc 1 357 0
 4241 004d C7435402 		movl	$2, 84(%rbx)
 4241      000000
 4242              	.LVL494:
 4243              	.LBE754:
 4244              	.LBE753:
 962:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 4245              		.loc 4 962 0
 4246 0054 C783A400 		movl	$0, 164(%rbx)
 4246      00000000 
 4246      0000
 4247 005e C783A000 		movl	$0, 160(%rbx)
 4247      00000000 
 4247      0000
 963:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4248              		.loc 4 963 0
 4249 0068 C783AC00 		movl	$0, 172(%rbx)
 4249      00000000 
 4249      0000
 4250 0072 C783A800 		movl	$0, 168(%rbx)
 4250      00000000 
 4250      0000
 964:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  948:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int, Fl_Align) const;
 4251              		.loc 4 964 0
 4252 007c C783B000 		movl	$0, 176(%rbx)
 4252      00000000 
 4252      0000
 965:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4253              		.loc 4 965 0
 4254 0086 48C783C8 		movq	$0, 200(%rbx)
 4254      00000000 
 4254      000000
 4255              	.LVL495:
 4256              	.LBB755:
 4257              	.LBB756:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4258              		.loc 1 654 0
 4259 0091 C6436F06 		movb	$6, 111(%rbx)
 4260              	.LVL496:
 4261              	.LBE756:
 4262              	.LBE755:
 967:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  951:fltk-1.3.4-1/FL/Fl_Widget.H ****       Labels with images will return w() and h() of the image
 4263              		.loc 4 967 0
 4264 0095 48C783D0 		movq	$0, 208(%rbx)
 4264      00000000 
 4264      000000
 4265              	.LVL497:
 4266              	.LBB757:
 4267              	.LBB758:
 415:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4268              		.loc 1 415 0
 4269 00a0 C7436407 		movl	$7, 100(%rbx)
 4269      000000
 4270 00a7 C743680F 		movl	$15, 104(%rbx)
 4270      000000
 4271              	.LVL498:
 4272              	.LBE758:
 4273              	.LBE757:
 4274              	.LBB759:
 4275              	.LBB760:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4276              		.loc 1 574 0
 4277 00ae 48C78308 		movq	$_ZL18scrollbar_callbackP9Fl_WidgetPv, 264(%rbx)
 4277      01000000 
 4277      000000
 4278              	.LVL499:
 4279              	.LBE760:
 4280              	.LBE759:
 4281              	.LBB761:
 4282              	.LBB762:
 4283 00b9 48C783C0 		movq	$_ZL19hscrollbar_callbackP9Fl_WidgetPv, 448(%rbx)
 4283      01000000 
 4283      000000
 4284              	.LVL500:
 4285              	.LBE762:
 4286              	.LBE761:
 4287              	.LBB763:
 4288              	.LBB764:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4289              		.loc 1 279 0
 4290 00c4 C6831C02 		movb	$1, 540(%rbx)
 4290      000001
 4291              	.LVL501:
 4292              	.LBE764:
 4293              	.LBE763:
 973:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  957:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure_label(int& ww, int& hh) const {label_.measure(
 4294              		.loc 4 973 0
 4295 00cb C783BC00 		movl	$0, 188(%rbx)
 4295      00000000 
 4295      0000
 974:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  958:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4296              		.loc 4 974 0
 4297 00d5 8983C000 		movl	%eax, 192(%rbx)
 4297      0000
 975:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  959:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* window() const ;
 4298              		.loc 4 975 0
 4299 00db C783C400 		movl	$0, 196(%rbx)
 4299      00000000 
 4299      0000
 976:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 4300              		.loc 4 976 0
 4301 00e5 C683B800 		movb	$3, 184(%rbx)
 4301      000003
 977:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  961:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window_offset(int& xoff, int& yoff) const;
 4302              		.loc 4 977 0
 4303 00ec C783B400 		movl	$0, 180(%rbx)
 4303      00000000 
 4303      0000
 978:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  962:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4304              		.loc 4 978 0
 4305 00f6 48C783E8 		movq	$0, 232(%rbx)
 4305      00000000 
 4305      000000
 979:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 4306              		.loc 4 979 0
 4307 0101 C783F000 		movl	$0, 240(%rbx)
 4307      00000000 
 4307      0000
 980:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  964:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4308              		.loc 4 980 0
 4309 010b 48C783E0 		movq	$0, 224(%rbx)
 4309      00000000 
 4309      000000
 4310 0116 48C783D8 		movq	$0, 216(%rbx)
 4310      00000000 
 4310      000000
 4311              	.LBE750:
 982:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 4312              		.loc 4 982 0
 4313 0121 5B       		popq	%rbx
 4314              		.cfi_def_cfa_offset 8
 4315              	.LVL502:
 4316              	.LBB765:
 981:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  965:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 4317              		.loc 4 981 0
 4318 0122 E9000000 		jmp	_ZN8Fl_Group3endEv
 4318      00
 4319              	.LVL503:
 4320              	.LBE765:
 4321              		.cfi_endproc
 4322              	.LFE536:
 4324              		.section	.text.unlikely._ZN11Fl_Browser_C2EiiiiPKc
 4325              	.LCOLDE33:
 4326              		.section	.text._ZN11Fl_Browser_C2EiiiiPKc
 4327              	.LHOTE33:
 4328              		.globl	_ZN11Fl_Browser_C1EiiiiPKc
 4329              		.set	_ZN11Fl_Browser_C1EiiiiPKc,_ZN11Fl_Browser_C2EiiiiPKc
 4330              		.section	.text.unlikely._ZN11Fl_Browser_4sortEi,"ax",@progbits
 4331              		.align 2
 4332              	.LCOLDB34:
 4333              		.section	.text._ZN11Fl_Browser_4sortEi,"ax",@progbits
 4334              	.LHOTB34:
 4335              		.align 2
 4336              		.p2align 4,,15
 4337              		.globl	_ZN11Fl_Browser_4sortEi
 4339              	_ZN11Fl_Browser_4sortEi:
 4340              	.LFB538:
 993:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  977:fltk-1.3.4-1/FL/Fl_Widget.H **** 	else
 4341              		.loc 4 993 0
 4342              		.cfi_startproc
 4343              	.LVL504:
 4344 0000 4157     		pushq	%r15
 4345              		.cfi_def_cfa_offset 16
 4346              		.cfi_offset 15, -16
 4347 0002 4156     		pushq	%r14
 4348              		.cfi_def_cfa_offset 24
 4349              		.cfi_offset 14, -24
 997:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  981:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4350              		.loc 4 997 0
 4351 0004 83E601   		andl	$1, %esi
 4352              	.LVL505:
 993:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  977:fltk-1.3.4-1/FL/Fl_Widget.H **** 	else
 4353              		.loc 4 993 0
 4354 0007 4155     		pushq	%r13
 4355              		.cfi_def_cfa_offset 32
 4356              		.cfi_offset 13, -32
 4357 0009 4154     		pushq	%r12
 4358              		.cfi_def_cfa_offset 40
 4359              		.cfi_offset 12, -40
 4360 000b 55       		pushq	%rbp
 4361              		.cfi_def_cfa_offset 48
 4362              		.cfi_offset 6, -48
 4363 000c 53       		pushq	%rbx
 4364              		.cfi_def_cfa_offset 56
 4365              		.cfi_offset 3, -56
 4366 000d 4889FB   		movq	%rdi, %rbx
 4367 0010 4883EC28 		subq	$40, %rsp
 4368              		.cfi_def_cfa_offset 96
 998:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  982:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Grou
 4369              		.loc 4 998 0
 4370 0014 488B07   		movq	(%rdi), %rax
 997:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  981:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4371              		.loc 4 997 0
 4372 0017 89742418 		movl	%esi, 24(%rsp)
 4373              	.LVL506:
 998:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  982:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Grou
 4374              		.loc 4 998 0
 4375 001b FF5050   		call	*80(%rax)
 4376              	.LVL507:
 999:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 4377              		.loc 4 999 0
 4378 001e 4885C0   		testq	%rax, %rax
 4379 0021 C7442414 		movl	$-1, 20(%rsp)
 4379      FFFFFFFF 
 4380 0029 0F840301 		je	.L412
 4380      0000
 4381              	.LVL508:
 4382 002f 90       		.p2align 4,,10
 4383              		.p2align 3
 4384              	.L436:
1001:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  985:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4385              		.loc 4 1001 0
 4386 0030 488B13   		movq	(%rbx), %rdx
 4387 0033 4889C6   		movq	%rax, %rsi
 4388 0036 4889DF   		movq	%rbx, %rdi
 4389 0039 FF5258   		call	*88(%rdx)
 4390              	.LVL509:
1002:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  986:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Group* as_group() {return 0;}
 4391              		.loc 4 1002 0
 4392 003c 83442414 		addl	$1, 20(%rsp)
 4392      01
 4393              	.LVL510:
1000:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
 4394              		.loc 4 1000 0
 4395 0041 4885C0   		testq	%rax, %rax
 4396 0044 75EA     		jne	.L436
 4397              	.LVL511:
 4398              	.LBB778:
1004:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  988:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Window pointer if this widget is an Fl_Wi
 4399              		.loc 4 1004 0 discriminator 1
 4400 0046 8B542414 		movl	20(%rsp), %edx
 4401 004a 85D2     		testl	%edx, %edx
 4402 004c 0F84E000 		je	.L412
 4402      0000
 4403              	.LVL512:
 4404              		.p2align 4,,10
 4405 0052 660F1F44 		.p2align 3
 4405      0000
 4406              	.L424:
 4407              	.LBB779:
1006:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 4408              		.loc 4 1006 0
 4409 0058 488B03   		movq	(%rbx), %rax
 4410 005b 4889DF   		movq	%rbx, %rdi
 4411              	.LBB780:
1008:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 4412              		.loc 4 1008 0
 4413 005e 4531E4   		xorl	%r12d, %r12d
 4414              	.LBE780:
1006:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 4415              		.loc 4 1006 0
 4416 0061 FF5050   		call	*80(%rax)
 4417              	.LVL513:
 4418 0064 4889C6   		movq	%rax, %rsi
 4419 0067 48894424 		movq	%rax, 8(%rsp)
 4419      08
 4420              	.LVL514:
1007:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  991:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Window. If 
 4421              		.loc 4 1007 0
 4422 006c 488B03   		movq	(%rbx), %rax
 4423              	.LVL515:
 4424 006f 4889DF   		movq	%rbx, %rdi
 4425 0072 FF5058   		call	*88(%rax)
 4426              	.LVL516:
1005:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  989:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4427              		.loc 4 1005 0
 4428 0075 C644241F 		movb	$0, 31(%rsp)
 4428      00
1007:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  991:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Window. If 
 4429              		.loc 4 1007 0
 4430 007a 4989C5   		movq	%rax, %r13
 4431              	.LVL517:
 4432 007d EB32     		jmp	.L423
 4433              	.LVL518:
 4434 007f 90       		.p2align 4,,10
 4435              		.p2align 3
 4436              	.L450:
 4437              	.LBB786:
 4438              	.LBB781:
1013:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 4439              		.loc 4 1013 0
 4440 0080 E8000000 		call	strcmp
 4440      00
 4441              	.LVL519:
 4442 0085 85C0     		testl	%eax, %eax
 4443 0087 7868     		js	.L448
 4444              	.L419:
1023:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   25              		.cfi_endproc
 4445              		.loc 4 1023 0
 4446 0089 4885ED   		testq	%rbp, %rbp
 4447 008c 0F848E00 		je	.L422
 4447      0000
 4448              	.L420:
 4449              	.LVL520:
1024:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   26              	.LFE233:
 4450              		.loc 4 1024 0 discriminator 2
 4451 0092 488B03   		movq	(%rbx), %rax
 4452 0095 4889EE   		movq	%rbp, %rsi
 4453 0098 4889DF   		movq	%rbx, %rdi
 4454              	.LBE781:
1008:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 4455              		.loc 4 1008 0 discriminator 2
 4456 009b 4183C401 		addl	$1, %r12d
 4457              	.LVL521:
 4458              	.LBB782:
1024:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   26              	.LFE233:
 4459              		.loc 4 1024 0 discriminator 2
 4460 009f FF5060   		call	*96(%rax)
 4461              	.LVL522:
 4462              	.LBE782:
1008:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 4463              		.loc 4 1008 0 discriminator 2
 4464 00a2 443B6424 		cmpl	20(%rsp), %r12d
 4464      14
 4465              	.LBB783:
1024:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   26              	.LFE233:
 4466              		.loc 4 1024 0 discriminator 2
 4467 00a7 48894424 		movq	%rax, 8(%rsp)
 4467      08
 4468              	.LVL523:
 4469              	.LBE783:
1008:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 4470              		.loc 4 1008 0 discriminator 2
 4471 00ac 7D72     		jge	.L422
 4472 00ae 4989ED   		movq	%rbp, %r13
 4473              	.LVL524:
 4474              	.L423:
 4475              	.LBB784:
1009:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  993:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 4476              		.loc 4 1009 0
 4477 00b1 488B03   		movq	(%rbx), %rax
 4478 00b4 4531F6   		xorl	%r14d, %r14d
 4479 00b7 488B9090 		movq	144(%rax), %rdx
 4479      000000
 4480 00be 4881FA00 		cmpq	$_ZNK11Fl_Browser_9item_textEPv, %rdx
 4480      000000
 4481 00c5 0F857D00 		jne	.L449
 4481      0000
 4482              	.L426:
 4483 00cb 4531FF   		xorl	%r15d, %r15d
 4484              	.L417:
 4485              	.LVL525:
1011:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  995:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4486              		.loc 4 1011 0
 4487 00ce 4C89EE   		movq	%r13, %rsi
 4488 00d1 4889DF   		movq	%rbx, %rdi
 4489 00d4 FF5058   		call	*88(%rax)
 4490              	.LVL526:
 4491 00d7 4889C5   		movq	%rax, %rbp
 4492              	.LVL527:
1012:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Wind
 4493              		.loc 4 1012 0
 4494 00da 8B442418 		movl	24(%rsp), %eax
 4495              	.LVL528:
1013:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 4496              		.loc 4 1013 0
 4497 00de 4C89FE   		movq	%r15, %rsi
 4498 00e1 4C89F7   		movq	%r14, %rdi
1012:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Wind
 4499              		.loc 4 1012 0
 4500 00e4 85C0     		testl	%eax, %eax
 4501 00e6 7598     		jne	.L450
1018:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   20              		.cfi_startproc
 4502              		.loc 4 1018 0
 4503 00e8 E8000000 		call	strcmp
 4503      00
 4504              	.LVL529:
 4505 00ed 85C0     		testl	%eax, %eax
 4506 00ef 7E98     		jle	.L419
 4507              	.L448:
1019:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   21              	.LVL0:
 4508              		.loc 4 1019 0
 4509 00f1 488B03   		movq	(%rbx), %rax
 4510 00f4 488B8098 		movq	152(%rax), %rax
 4510      000000
1015:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  999:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4511              		.loc 4 1015 0
 4512 00fb C644241F 		movb	$1, 31(%rsp)
 4512      01
 4513 0100 483D0000 		cmpq	$_ZN11Fl_Browser_9item_swapEPvS0_, %rax
 4513      0000
 4514 0106 7481     		je	.L419
1019:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   21              	.LVL0:
 4515              		.loc 4 1019 0
 4516 0108 4C89EA   		movq	%r13, %rdx
 4517 010b 488B7424 		movq	8(%rsp), %rsi
 4517      08
 4518 0110 4889DF   		movq	%rbx, %rdi
 4519 0113 FFD0     		call	*%rax
 4520              	.LVL530:
1023:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   25              		.cfi_endproc
 4521              		.loc 4 1023 0
 4522 0115 4885ED   		testq	%rbp, %rbp
 4523 0118 0F8574FF 		jne	.L420
 4523      FFFF
 4524              	.LVL531:
 4525 011e 6690     		.p2align 4,,10
 4526              		.p2align 3
 4527              	.L422:
 4528              	.LBE784:
 4529              	.LBE786:
1026:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   29              	.LCOLDE0:
 4530              		.loc 4 1026 0
 4531 0120 807C241F 		cmpb	$0, 31(%rsp)
 4531      00
 4532 0125 740B     		je	.L412
 4533              	.LVL532:
 4534              	.LBE779:
1004:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  988:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Window pointer if this widget is an Fl_Wi
 4535              		.loc 4 1004 0 discriminator 2
 4536 0127 836C2414 		subl	$1, 20(%rsp)
 4536      01
 4537              	.LVL533:
 4538 012c 0F8526FF 		jne	.L424
 4538      FFFF
 4539              	.LVL534:
 4540              	.L412:
 4541              	.LBE778:
1029:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   32              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
 4542              		.loc 4 1029 0
 4543 0132 4883C428 		addq	$40, %rsp
 4544              		.cfi_remember_state
 4545              		.cfi_def_cfa_offset 56
 4546 0136 5B       		popq	%rbx
 4547              		.cfi_def_cfa_offset 48
 4548              	.LVL535:
 4549 0137 5D       		popq	%rbp
 4550              		.cfi_def_cfa_offset 40
 4551 0138 415C     		popq	%r12
 4552              		.cfi_def_cfa_offset 32
 4553 013a 415D     		popq	%r13
 4554              		.cfi_def_cfa_offset 24
 4555 013c 415E     		popq	%r14
 4556              		.cfi_def_cfa_offset 16
 4557 013e 415F     		popq	%r15
 4558              		.cfi_def_cfa_offset 8
 4559 0140 C3       		ret
 4560              	.LVL536:
 4561              		.p2align 4,,10
 4562 0141 0F1F8000 		.p2align 3
 4562      000000
 4563              	.L449:
 4564              		.cfi_restore_state
 4565              	.LBB789:
 4566              	.LBB788:
 4567              	.LBB787:
 4568              	.LBB785:
1009:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  993:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 4569              		.loc 4 1009 0
 4570 0148 488B7424 		movq	8(%rsp), %rsi
 4570      08
 4571 014d 4889DF   		movq	%rbx, %rdi
 4572 0150 FFD2     		call	*%rdx
 4573              	.LVL537:
 4574 0152 4989C6   		movq	%rax, %r14
 4575 0155 488B03   		movq	(%rbx), %rax
 4576 0158 488B9090 		movq	144(%rax), %rdx
 4576      000000
 4577              	.LVL538:
 4578 015f 4881FA00 		cmpq	$_ZNK11Fl_Browser_9item_textEPv, %rdx
 4578      000000
 4579 0166 0F845FFF 		je	.L426
 4579      FFFF
1010:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
 4580              		.loc 4 1010 0
 4581 016c 4C89EE   		movq	%r13, %rsi
 4582 016f 4889DF   		movq	%rbx, %rdi
 4583 0172 FFD2     		call	*%rdx
 4584              	.LVL539:
 4585 0174 4989C7   		movq	%rax, %r15
 4586 0177 488B03   		movq	(%rbx), %rax
 4587 017a E94FFFFF 		jmp	.L417
 4587      FF
 4588              	.LBE785:
 4589              	.LBE787:
 4590              	.LBE788:
 4591              	.LBE789:
 4592              		.cfi_endproc
 4593              	.LFE538:
 4595              		.section	.text.unlikely._ZN11Fl_Browser_4sortEi
 4596              	.LCOLDE34:
 4597              		.section	.text._ZN11Fl_Browser_4sortEi
 4598              	.LHOTE34:
 4599              		.section	.text.unlikely._ZN11Fl_Browser_6resizeEiiii,"ax",@progbits
 4600              		.align 2
 4601              	.LCOLDB35:
 4602              		.section	.text._ZN11Fl_Browser_6resizeEiiii,"ax",@progbits
 4603              	.LHOTB35:
 4604              		.align 2
 4605              		.p2align 4,,15
 4606              		.globl	_ZN11Fl_Browser_6resizeEiiii
 4608              	_ZN11Fl_Browser_6resizeEiiii:
 4609              	.LFB517:
 105:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 4610              		.loc 4 105 0
 4611              		.cfi_startproc
 4612              	.LVL540:
 4613 0000 55       		pushq	%rbp
 4614              		.cfi_def_cfa_offset 16
 4615              		.cfi_offset 6, -16
 4616 0001 53       		pushq	%rbx
 4617              		.cfi_def_cfa_offset 24
 4618              		.cfi_offset 3, -24
 4619 0002 4889FB   		movq	%rdi, %rbx
 4620 0005 4883EC18 		subq	$24, %rsp
 4621              		.cfi_def_cfa_offset 48
 106:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4622              		.loc 4 106 0
 4623 0009 8BAFF000 		movl	240(%rdi), %ebp
 4623      0000
 105:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 4624              		.loc 4 105 0
 4625 000f 8974240C 		movl	%esi, 12(%rsp)
 4626 0013 89542408 		movl	%edx, 8(%rsp)
 4627 0017 894C2404 		movl	%ecx, 4(%rsp)
 4628 001b 44890424 		movl	%r8d, (%rsp)
 106:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4629              		.loc 4 106 0
 4630 001f 85ED     		testl	%ebp, %ebp
 4631 0021 0F84B900 		je	.L458
 4631      0000
 4632              	.LVL541:
 4633              	.L452:
 107:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 4634              		.loc 4 107 0 discriminator 4
 4635 0027 448B0424 		movl	(%rsp), %r8d
 4636 002b 8B4C2404 		movl	4(%rsp), %ecx
 4637 002f 4889DF   		movq	%rbx, %rdi
 4638 0032 8B542408 		movl	8(%rsp), %edx
 4639 0036 8B74240C 		movl	12(%rsp), %esi
 4640 003a E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 4640      00
 4641              	.LVL542:
 109:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4642              		.loc 4 109 0 discriminator 4
 4643 003f 488D5424 		leaq	8(%rsp), %rdx
 4643      08
 4644              	.LVL543:
 4645 0044 488D4C24 		leaq	4(%rsp), %rcx
 4645      04
 4646              	.LVL544:
 4647 0049 488D7424 		leaq	12(%rsp), %rsi
 4647      0C
 4648              	.LVL545:
 4649 004e 4989E0   		movq	%rsp, %r8
 4650 0051 4889DF   		movq	%rbx, %rdi
 4651 0054 E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 4651      00
 4652              	.LVL546:
 110:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 4653              		.loc 4 110 0 discriminator 4
 4654 0059 F6834C01 		testb	$4, 332(%rbx)
 4654      000004
 112:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 4655              		.loc 4 112 0 discriminator 4
 4656 0060 448B0424 		movl	(%rsp), %r8d
 4657 0064 8B542408 		movl	8(%rsp), %edx
 4658              	.LVL547:
 110:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 4659              		.loc 4 110 0 discriminator 4
 4660 0068 7456     		je	.L453
 110:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 4661              		.loc 4 110 0 is_stmt 0 discriminator 1
 4662 006a 8B74240C 		movl	12(%rsp), %esi
 4663 006e 29EE     		subl	%ebp, %esi
 4664              	.L454:
 110:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 4665              		.loc 4 110 0 discriminator 4
 4666 0070 488DBBF8 		leaq	248(%rbx), %rdi
 4666      000000
 112:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 4667              		.loc 4 112 0 is_stmt 1 discriminator 4
 4668 0077 89E9     		movl	%ebp, %ecx
 4669 0079 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 4669      00
 4670              	.LVL548:
 113:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 4671              		.loc 4 113 0 discriminator 4
 4672 007e F6834C01 		testb	$1, 332(%rbx)
 4672      000001
 115:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 4673              		.loc 4 115 0 discriminator 4
 4674 0085 8B4C2404 		movl	4(%rsp), %ecx
 4675              	.LVL549:
 113:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 4676              		.loc 4 113 0 discriminator 4
 4677 0089 7545     		jne	.L459
 113:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 4678              		.loc 4 113 0 is_stmt 0 discriminator 2
 4679 008b 8B1424   		movl	(%rsp), %edx
 4680 008e 03542408 		addl	8(%rsp), %edx
 4681              	.L456:
 115:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 4682              		.loc 4 115 0 is_stmt 1
 4683 0092 8B74240C 		movl	12(%rsp), %esi
 113:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 4684              		.loc 4 113 0
 4685 0096 488DBBB0 		leaq	432(%rbx), %rdi
 4685      010000
 115:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 4686              		.loc 4 115 0
 4687 009d 4189E8   		movl	%ebp, %r8d
 4688 00a0 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 4688      00
 4689              	.LVL550:
 116:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 4690              		.loc 4 116 0
 4691 00a5 C783B400 		movl	$0, 180(%rbx)
 4691      00000000 
 4691      0000
 117:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 4692              		.loc 4 117 0
 4693 00af 4883C418 		addq	$24, %rsp
 4694              		.cfi_remember_state
 4695              		.cfi_def_cfa_offset 24
 4696              	.LVL551:
 4697 00b3 5B       		popq	%rbx
 4698              		.cfi_def_cfa_offset 16
 4699              	.LVL552:
 4700 00b4 5D       		popq	%rbp
 4701              		.cfi_def_cfa_offset 8
 4702              	.LVL553:
 4703 00b5 C3       		ret
 4704              	.LVL554:
 4705 00b6 662E0F1F 		.p2align 4,,10
 4705      84000000 
 4705      0000
 4706              		.p2align 3
 4707              	.L453:
 4708              		.cfi_restore_state
 110:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 4709              		.loc 4 110 0 discriminator 2
 4710 00c0 8B742404 		movl	4(%rsp), %esi
 4711 00c4 0374240C 		addl	12(%rsp), %esi
 4712 00c8 EBA6     		jmp	.L454
 4713              	.LVL555:
 4714 00ca 660F1F44 		.p2align 4,,10
 4714      0000
 4715              		.p2align 3
 4716              	.L459:
 113:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 4717              		.loc 4 113 0 discriminator 1
 4718 00d0 8B542408 		movl	8(%rsp), %edx
 4719 00d4 29EA     		subl	%ebp, %edx
 4720 00d6 EBBA     		jmp	.L456
 4721              	.LVL556:
 4722 00d8 0F1F8400 		.p2align 4,,10
 4722      00000000 
 4723              		.p2align 3
 4724              	.L458:
 106:fltk-1.3.4-1/src/Fl_Browser_.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4725              		.loc 4 106 0 discriminator 2
 4726 00e0 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 4726      00
 4727              	.LVL557:
 4728 00e5 89C5     		movl	%eax, %ebp
 4729 00e7 E93BFFFF 		jmp	.L452
 4729      FF
 4730              		.cfi_endproc
 4731              	.LFE517:
 4733              		.section	.text.unlikely._ZN11Fl_Browser_6resizeEiiii
 4734              	.LCOLDE35:
 4735              		.section	.text._ZN11Fl_Browser_6resizeEiiii
 4736              	.LHOTE35:
 4737              		.section	.text.unlikely._ZN11Fl_Browser_6handleEi,"ax",@progbits
 4738              		.align 2
 4739              	.LCOLDB36:
 4740              		.section	.text._ZN11Fl_Browser_6handleEi,"ax",@progbits
 4741              	.LHOTB36:
 4742              		.align 2
 4743              		.p2align 4,,15
 4744              		.globl	_ZN11Fl_Browser_6handleEi
 4746              	_ZN11Fl_Browser_6handleEi:
 4747              	.LFB534:
 693:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4748              		.loc 4 693 0
 4749              		.cfi_startproc
 4750              	.LVL558:
 4751 0000 4156     		pushq	%r14
 4752              		.cfi_def_cfa_offset 16
 4753              		.cfi_offset 14, -16
 4754 0002 4155     		pushq	%r13
 4755              		.cfi_def_cfa_offset 24
 4756              		.cfi_offset 13, -24
 4757 0004 4154     		pushq	%r12
 4758              		.cfi_def_cfa_offset 32
 4759              		.cfi_offset 12, -32
 4760 0006 55       		pushq	%rbp
 4761              		.cfi_def_cfa_offset 40
 4762              		.cfi_offset 6, -40
 4763 0007 4189F4   		movl	%esi, %r12d
 4764 000a 53       		pushq	%rbx
 4765              		.cfi_def_cfa_offset 48
 4766              		.cfi_offset 3, -48
 706:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 4767              		.loc 4 706 0
 4768 000b 4889FE   		movq	%rdi, %rsi
 4769              	.LVL559:
 693:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4770              		.loc 4 693 0
 4771 000e 4889FB   		movq	%rdi, %rbx
 4772 0011 4883EC30 		subq	$48, %rsp
 4773              		.cfi_def_cfa_offset 96
 706:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 4774              		.loc 4 706 0
 4775 0015 488D7C24 		leaq	32(%rsp), %rdi
 4775      20
 4776              	.LVL560:
 693:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4777              		.loc 4 693 0
 4778 001a 64488B04 		movq	%fs:40, %rax
 4778      25280000 
 4778      00
 4779 0023 48894424 		movq	%rax, 40(%rsp)
 4779      28
 4780 0028 31C0     		xorl	%eax, %eax
 706:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 4781              		.loc 4 706 0
 4782 002a E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 4782      00
 4783              	.LVL561:
 709:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 4784              		.loc 4 709 0
 4785 002f 418D4424 		leal	-3(%r12), %eax
 4785      FD
 4786 0034 83F801   		cmpl	$1, %eax
 4787 0037 7677     		jbe	.L662
 4788              	.LBB914:
 710:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 4789              		.loc 4 710 0
 4790 0039 4183FC08 		cmpl	$8, %r12d
 4791 003d 0F84A500 		je	.L680
 4791      0000
 4792              	.L466:
 4793              	.LBE914:
 771:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 4794              		.loc 4 771 0
 4795 0043 4489E6   		movl	%r12d, %esi
 4796 0046 4889DF   		movq	%rbx, %rdi
 4797 0049 E8000000 		call	_ZN8Fl_Group6handleEi
 4797      00
 4798              	.LVL562:
 4799 004e 85C0     		testl	%eax, %eax
 4800 0050 89C5     		movl	%eax, %ebp
 4801 0052 755C     		jne	.L662
 772:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4802              		.loc 4 772 0
 4803 0054 48837C24 		cmpq	$0, 32(%rsp)
 4803      2000
 4804 005a 7454     		je	.L662
 774:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4805              		.loc 4 774 0
 4806 005c 4C8D4424 		leaq	28(%rsp), %r8
 4806      1C
 4807 0061 488D4C24 		leaq	24(%rsp), %rcx
 4807      18
 4808 0066 488D5424 		leaq	20(%rsp), %rdx
 4808      14
 4809 006b 488D7424 		leaq	16(%rsp), %rsi
 4809      10
 4810 0070 4889DF   		movq	%rbx, %rdi
 4811 0073 E8000000 		call	_ZNK11Fl_Browser_4bboxERiS0_S0_S0_
 4811      00
 4812              	.LVL563:
 4813              	.LBB923:
 796:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4814              		.loc 4 796 0
 4815 0078 4183FC07 		cmpl	$7, %r12d
 4816 007c 7737     		ja	.L470
 4817 007e 42FF24E5 		jmp	*.L489(,%r12,8)
 4817      00000000 
 4818              		.section	.rodata._ZN11Fl_Browser_6handleEi,"a",@progbits
 4819              		.align 8
 4820              		.align 4
 4821              	.L489:
 4822 0000 00000000 		.quad	.L470
 4822      00000000 
 4823 0008 00000000 		.quad	.L488
 4823      00000000 
 4824 0010 00000000 		.quad	.L490
 4824      00000000 
 4825 0018 00000000 		.quad	.L470
 4825      00000000 
 4826 0020 00000000 		.quad	.L470
 4826      00000000 
 4827 0028 00000000 		.quad	.L491
 4827      00000000 
 4828 0030 00000000 		.quad	.L492
 4828      00000000 
 4829 0038 00000000 		.quad	.L492
 4829      00000000 
 4830              		.section	.text._ZN11Fl_Browser_6handleEi
 4831 0086 662E0F1F 		.p2align 4,,10
 4831      84000000 
 4831      0000
 4832              		.p2align 3
 4833              	.L492:
 4834              	.LVL564:
 4835              	.LBB924:
 941:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 4836              		.loc 4 941 0
 4837 0090 807B6C01 		cmpb	$1, 108(%rbx)
 4838 0094 761F     		jbe	.L470
 4839              	.LBB925:
 4840              	.LBB926:
 4841              		.file 7 "fltk-1.3.4-1/FL/Fl.H"
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
 4842              		.loc 7 1195 0
 4843 0096 BF010000 		movl	$1, %edi
 4843      00
 4844 009b E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 4844      00
 4845              	.LVL565:
 4846              	.LBE926:
 4847              	.LBE925:
 941:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 4848              		.loc 4 941 0
 4849 00a0 84C0     		testb	%al, %al
 4850 00a2 7411     		je	.L470
 942:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 4851              		.loc 4 942 0
 4852 00a4 4889DF   		movq	%rbx, %rdi
 4853 00a7 E8000000 		call	_ZN9Fl_Widget6redrawEv
 4853      00
 4854              	.LVL566:
 4855 00ac 0F1F4000 		.p2align 4,,10
 4856              		.p2align 3
 4857              	.L662:
 943:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 4858              		.loc 4 943 0
 4859 00b0 BD010000 		movl	$1, %ebp
 4859      00
 4860              	.L470:
 4861              	.LBE924:
 4862              	.LBE923:
 706:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 4863              		.loc 4 706 0
 4864 00b5 488D7C24 		leaq	32(%rsp), %rdi
 4864      20
 4865 00ba E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 4865      00
 4866              	.LVL567:
 948:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4867              		.loc 4 948 0
 4868 00bf 488B4C24 		movq	40(%rsp), %rcx
 4868      28
 4869 00c4 6448330C 		xorq	%fs:40, %rcx
 4869      25280000 
 4869      00
 4870 00cd 89E8     		movl	%ebp, %eax
 4871 00cf 0F854D08 		jne	.L681
 4871      0000
 4872 00d5 4883C430 		addq	$48, %rsp
 4873              		.cfi_remember_state
 4874              		.cfi_def_cfa_offset 48
 4875 00d9 5B       		popq	%rbx
 4876              		.cfi_def_cfa_offset 40
 4877              	.LVL568:
 4878 00da 5D       		popq	%rbp
 4879              		.cfi_def_cfa_offset 32
 4880 00db 415C     		popq	%r12
 4881              		.cfi_def_cfa_offset 24
 4882 00dd 415D     		popq	%r13
 4883              		.cfi_def_cfa_offset 16
 4884 00df 415E     		popq	%r14
 4885              		.cfi_def_cfa_offset 8
 4886 00e1 C3       		ret
 4887              	.LVL569:
 4888              		.p2align 4,,10
 4889 00e2 660F1F44 		.p2align 3
 4889      0000
 4890              	.L680:
 4891              		.cfi_restore_state
 4892 00e8 0FB6436C 		movzbl	108(%rbx), %eax
 4893              	.LVL570:
 4894              	.LBB1019:
 710:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 4895              		.loc 4 710 0 discriminator 1
 4896 00ec 3C01     		cmpb	$1, %al
 4897 00ee 0F864FFF 		jbe	.L466
 4897      FFFF
 4898              	.LBB915:
 711:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4899              		.loc 4 711 0
 4900 00f4 4C8BABD0 		movq	208(%rbx), %r13
 4900      000000
 4901              	.LVL571:
 712:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 4902              		.loc 4 712 0
 4903 00fb 4D85ED   		testq	%r13, %r13
 4904 00fe 0F843402 		je	.L539
 4904      0000
 4905 0104 4C89ED   		movq	%r13, %rbp
 4906              	.LVL572:
 4907              	.L540:
 714:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 4908              		.loc 4 714 0
 4909 0107 3C02     		cmpb	$2, %al
 715:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 4910              		.loc 4 715 0
 4911 0109 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 4911      0000
 714:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 4912              		.loc 4 714 0
 4913 010f 0F84AB01 		je	.L682
 4913      0000
 731:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4914              		.loc 4 731 0
 4915 0115 3D52FF00 		cmpl	$65362, %eax
 4915      00
 4916 011a 0F848700 		je	.L486
 4916      0000
 4917 0120 0F8EE200 		jle	.L683
 4917      0000
 4918 0126 3D54FF00 		cmpl	$65364, %eax
 4918      00
 4919 012b 0F842E01 		je	.L482
 4919      0000
 4920 0131 3D8DFF00 		cmpl	$65421, %eax
 4920      00
 4921 0136 0F8507FF 		jne	.L466
 4921      FFFF
 4922              	.L475:
 4923              	.LVL573:
 734:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 4924              		.loc 4 734 0
 4925 013c 0FB6536F 		movzbl	111(%rbx), %edx
 4926 0140 4889EE   		movq	%rbp, %rsi
 4927 0143 4889DF   		movq	%rbx, %rdi
 4928 0146 83E2F7   		andl	$-9, %edx
 4929 0149 E8000000 		call	_ZN11Fl_Browser_11select_onlyEPvi
 4929      00
 4930              	.LVL574:
 735:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 4931              		.loc 4 735 0
 4932 014e 48837C24 		cmpq	$0, 32(%rsp)
 4932      2000
 4933 0154 0F8456FF 		je	.L662
 4933      FFFF
 4934              	.LVL575:
 4935              	.L665:
 4936              	.LBE915:
 4937              	.LBE1019:
 4938              	.LBB1020:
 4939              	.LBB1014:
 934:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4940              		.loc 4 934 0 discriminator 1
 4941 015a F6436F08 		testb	$8, 111(%rbx)
 4942 015e 0F844CFF 		je	.L662
 4942      FFFF
 4943 0164 E9E70300 		jmp	.L536
 4943      00
 4944              	.LVL576:
 4945 0169 0F1F8000 		.p2align 4,,10
 4945      000000
 4946              		.p2align 3
 4947              	.L684:
 4948              	.LBE1014:
 4949              	.LBE1020:
 4950              	.LBB1021:
 4951              	.LBB920:
 4952              	.LBB916:
 4953              	.LBB917:
 4954              		.loc 4 1098 0
 4955 0170 31D2     		xorl	%edx, %edx
 4956 0172 4C39ABD0 		cmpq	%r13, 208(%rbx)
 4956      000000
 4957 0179 0F94C2   		sete	%dl
 4958              	.LVL577:
 4959              	.L484:
 4960              	.LBE917:
 4961              	.LBE916:
 756:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 4962              		.loc 4 756 0 discriminator 4
 4963 017c 4889EE   		movq	%rbp, %rsi
 4964 017f 4889DF   		movq	%rbx, %rdi
 4965 0182 E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 4965      00
 4966              	.LVL578:
 4967              	.L483:
 757:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 4968              		.loc 4 757 0
 4969 0187 48837C24 		cmpq	$0, 32(%rsp)
 4969      2000
 4970 018d 0F841DFF 		je	.L662
 4970      FFFF
 758:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 4971              		.loc 4 758 0
 4972 0193 488B03   		movq	(%rbx), %rax
 4973 0196 4889EE   		movq	%rbp, %rsi
 4974 0199 4889DF   		movq	%rbx, %rdi
 4975 019c FF5070   		call	*112(%rax)
 4976              	.LVL579:
 4977 019f 85C0     		testl	%eax, %eax
 4978 01a1 0F8FC903 		jg	.L481
 4978      0000
 4979              	.L486:
 754:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4980              		.loc 4 754 0
 4981 01a7 488B03   		movq	(%rbx), %rax
 4982 01aa 4889EE   		movq	%rbp, %rsi
 4983 01ad 4889DF   		movq	%rbx, %rdi
 4984 01b0 FF5060   		call	*96(%rax)
 4985              	.LVL580:
 4986 01b3 4885C0   		testq	%rax, %rax
 4987 01b6 4889C5   		movq	%rax, %rbp
 4988              	.LVL581:
 4989 01b9 0F84F1FE 		je	.L662
 4989      FFFF
 755:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 4990              		.loc 4 755 0
 4991 01bf F7050000 		testl	$327680, _ZN2Fl7e_stateE(%rip)
 4991      00000000 
 4991      0500
 4992 01c9 74BC     		je	.L483
 4993              	.LVL582:
 756:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 4994              		.loc 4 756 0
 4995 01cb 4D85ED   		testq	%r13, %r13
 4996 01ce 0FB64B6F 		movzbl	111(%rbx), %ecx
 4997 01d2 BA010000 		movl	$1, %edx
 4997      00
 4998 01d7 74A3     		je	.L484
 756:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 4999              		.loc 4 756 0 is_stmt 0 discriminator 1
 5000 01d9 488B03   		movq	(%rbx), %rax
 5001              	.LVL583:
 5002 01dc 488B80C8 		movq	200(%rax), %rax
 5002      000000
 5003 01e3 483D0000 		cmpq	$_ZNK11Fl_Browser_13item_selectedEPv, %rax
 5003      0000
 5004 01e9 7485     		je	.L684
 5005 01eb 894C240C 		movl	%ecx, 12(%rsp)
 5006 01ef 4C89EE   		movq	%r13, %rsi
 5007 01f2 4889DF   		movq	%rbx, %rdi
 5008 01f5 FFD0     		call	*%rax
 5009              	.LVL584:
 5010 01f7 8B4C240C 		movl	12(%rsp), %ecx
 5011 01fb 89C2     		movl	%eax, %edx
 5012 01fd E97AFFFF 		jmp	.L484
 5012      FF
 5013              	.LVL585:
 5014              		.p2align 4,,10
 5015 0202 660F1F44 		.p2align 3
 5015      0000
 5016              	.L683:
 731:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5017              		.loc 4 731 0 is_stmt 1
 5018 0208 83F820   		cmpl	$32, %eax
 5019 020b 0F845F01 		je	.L474
 5019      0000
 5020 0211 3D0DFF00 		cmpl	$65293, %eax
 5020      00
 5021 0216 0F8420FF 		je	.L475
 5021      FFFF
 5022 021c E922FEFF 		jmp	.L466
 5022      FF
 5023              	.LVL586:
 5024              		.p2align 4,,10
 5025 0221 0F1F8000 		.p2align 3
 5025      000000
 5026              	.L685:
 5027              	.LBB918:
 5028              	.LBB919:
 5029              		.loc 4 1098 0
 5030 0228 31D2     		xorl	%edx, %edx
 5031 022a 4C39ABD0 		cmpq	%r13, 208(%rbx)
 5031      000000
 5032 0231 0F94C2   		sete	%dl
 5033              	.LVL587:
 5034              	.L479:
 5035              	.LBE919:
 5036              	.LBE918:
 748:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5037              		.loc 4 748 0 discriminator 4
 5038 0234 4889EE   		movq	%rbp, %rsi
 5039 0237 4889DF   		movq	%rbx, %rdi
 5040 023a E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 5040      00
 5041              	.LVL588:
 5042              	.L478:
 749:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 5043              		.loc 4 749 0
 5044 023f 48837C24 		cmpq	$0, 32(%rsp)
 5044      2000
 5045 0245 0F8465FE 		je	.L662
 5045      FFFF
 750:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5046              		.loc 4 750 0
 5047 024b 488B03   		movq	(%rbx), %rax
 5048 024e 4889EE   		movq	%rbp, %rsi
 5049 0251 4889DF   		movq	%rbx, %rdi
 5050 0254 FF5070   		call	*112(%rax)
 5051              	.LVL589:
 5052 0257 85C0     		testl	%eax, %eax
 5053 0259 0F8F1103 		jg	.L481
 5053      0000
 5054              	.L482:
 746:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 5055              		.loc 4 746 0
 5056 025f 488B03   		movq	(%rbx), %rax
 5057 0262 4889EE   		movq	%rbp, %rsi
 5058 0265 4889DF   		movq	%rbx, %rdi
 5059 0268 FF5058   		call	*88(%rax)
 5060              	.LVL590:
 5061 026b 4885C0   		testq	%rax, %rax
 5062 026e 4889C5   		movq	%rax, %rbp
 5063              	.LVL591:
 5064 0271 0F8439FE 		je	.L662
 5064      FFFF
 747:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 5065              		.loc 4 747 0
 5066 0277 F7050000 		testl	$327680, _ZN2Fl7e_stateE(%rip)
 5066      00000000 
 5066      0500
 5067 0281 74BC     		je	.L478
 5068              	.LVL592:
 748:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5069              		.loc 4 748 0
 5070 0283 4D85ED   		testq	%r13, %r13
 5071 0286 0FB64B6F 		movzbl	111(%rbx), %ecx
 5072 028a BA010000 		movl	$1, %edx
 5072      00
 5073 028f 74A3     		je	.L479
 748:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5074              		.loc 4 748 0 is_stmt 0 discriminator 1
 5075 0291 488B03   		movq	(%rbx), %rax
 5076              	.LVL593:
 5077 0294 488B80C8 		movq	200(%rax), %rax
 5077      000000
 5078 029b 483D0000 		cmpq	$_ZNK11Fl_Browser_13item_selectedEPv, %rax
 5078      0000
 5079 02a1 7485     		je	.L685
 5080 02a3 894C240C 		movl	%ecx, 12(%rsp)
 5081 02a7 4C89EE   		movq	%r13, %rsi
 5082 02aa 4889DF   		movq	%rbx, %rdi
 5083 02ad FFD0     		call	*%rax
 5084              	.LVL594:
 5085 02af 8B4C240C 		movl	12(%rsp), %ecx
 5086 02b3 89C2     		movl	%eax, %edx
 5087 02b5 E97AFFFF 		jmp	.L479
 5087      FF
 5088              	.LVL595:
 5089 02ba 660F1F44 		.p2align 4,,10
 5089      0000
 5090              		.p2align 3
 5091              	.L682:
 715:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 5092              		.loc 4 715 0 is_stmt 1
 5093 02c0 3D52FF00 		cmpl	$65362, %eax
 5093      00
 5094 02c5 7425     		je	.L471
 5095 02c7 3D54FF00 		cmpl	$65364, %eax
 5095      00
 5096 02cc 0F8571FD 		jne	.L466
 5096      FFFF
 5097 02d2 EB48     		jmp	.L469
 5098              	.LVL596:
 5099              		.p2align 4,,10
 5100 02d4 0F1F4000 		.p2align 3
 5101              	.L686:
 723:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5102              		.loc 4 723 0
 5103 02d8 488B03   		movq	(%rbx), %rax
 5104              	.LVL597:
 5105 02db 4889EE   		movq	%rbp, %rsi
 5106 02de 4889DF   		movq	%rbx, %rdi
 5107 02e1 FF5070   		call	*112(%rax)
 5108              	.LVL598:
 5109 02e4 85C0     		testl	%eax, %eax
 5110 02e6 0F8FC402 		jg	.L661
 5110      0000
 5111              	.L471:
 722:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5112              		.loc 4 722 0
 5113 02ec 488B03   		movq	(%rbx), %rax
 5114 02ef 4889EE   		movq	%rbp, %rsi
 5115 02f2 4889DF   		movq	%rbx, %rdi
 5116 02f5 FF5060   		call	*96(%rax)
 5117              	.LVL599:
 5118 02f8 4885C0   		testq	%rax, %rax
 5119 02fb 4889C5   		movq	%rax, %rbp
 5120              	.LVL600:
 5121 02fe 75D8     		jne	.L686
 5122 0300 E9ABFDFF 		jmp	.L662
 5122      FF
 5123              		.p2align 4,,10
 5124 0305 0F1F00   		.p2align 3
 5125              	.L687:
 718:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5126              		.loc 4 718 0
 5127 0308 488B03   		movq	(%rbx), %rax
 5128              	.LVL601:
 5129 030b 4889EE   		movq	%rbp, %rsi
 5130 030e 4889DF   		movq	%rbx, %rdi
 5131 0311 FF5070   		call	*112(%rax)
 5132              	.LVL602:
 5133 0314 85C0     		testl	%eax, %eax
 5134 0316 0F8F9402 		jg	.L661
 5134      0000
 5135              	.L469:
 717:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5136              		.loc 4 717 0
 5137 031c 488B03   		movq	(%rbx), %rax
 5138 031f 4889EE   		movq	%rbp, %rsi
 5139 0322 4889DF   		movq	%rbx, %rdi
 5140 0325 FF5058   		call	*88(%rax)
 5141              	.LVL603:
 5142 0328 4885C0   		testq	%rax, %rax
 5143 032b 4889C5   		movq	%rax, %rbp
 5144              	.LVL604:
 5145 032e 75D8     		jne	.L687
 5146 0330 E97BFDFF 		jmp	.L662
 5146      FF
 5147              	.LVL605:
 5148              		.p2align 4,,10
 5149 0335 0F1F00   		.p2align 3
 5150              	.L539:
 712:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 5151              		.loc 4 712 0 discriminator 1
 5152 0338 488BABC8 		movq	200(%rbx), %rbp
 5152      000000
 5153              	.LVL606:
 5154 033f 4885ED   		testq	%rbp, %rbp
 5155 0342 0F85BFFD 		jne	.L540
 5155      FFFF
 712:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 5156              		.loc 4 712 0 is_stmt 0 discriminator 4
 5157 0348 488B03   		movq	(%rbx), %rax
 5158 034b 4889DF   		movq	%rbx, %rdi
 5159 034e FF5050   		call	*80(%rax)
 5160              	.LVL607:
 713:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5161              		.loc 4 713 0 is_stmt 1 discriminator 4
 5162 0351 4885C0   		testq	%rax, %rax
 712:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 5163              		.loc 4 712 0 discriminator 4
 5164 0354 4889C5   		movq	%rax, %rbp
 5165              	.LVL608:
 713:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5166              		.loc 4 713 0 discriminator 4
 5167 0357 0F84E6FC 		je	.L466
 5167      FFFF
 5168 035d 0FB6436C 		movzbl	108(%rbx), %eax
 5169              	.LVL609:
 5170 0361 E9A1FDFF 		jmp	.L540
 5170      FF
 5171              	.LVL610:
 5172 0366 662E0F1F 		.p2align 4,,10
 5172      84000000 
 5172      0000
 5173              		.p2align 3
 5174              	.L474:
 743:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5175              		.loc 4 743 0
 5176 0370 488B03   		movq	(%rbx), %rax
 5177 0373 0FB64B6F 		movzbl	111(%rbx), %ecx
 5178 0377 31D2     		xorl	%edx, %edx
 742:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 5179              		.loc 4 742 0
 5180 0379 4889ABD0 		movq	%rbp, 208(%rbx)
 5180      000000
 5181              	.LVL611:
 743:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5182              		.loc 4 743 0
 5183 0380 488B80C8 		movq	200(%rax), %rax
 5183      000000
 5184 0387 83E1F7   		andl	$-9, %ecx
 5185 038a 483D0000 		cmpq	$_ZNK11Fl_Browser_13item_selectedEPv, %rax
 5185      0000
 5186 0390 0F85BA02 		jne	.L688
 5186      0000
 5187              	.L477:
 5188 0396 4889EE   		movq	%rbp, %rsi
 5189 0399 4889DF   		movq	%rbx, %rdi
 744:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 5190              		.loc 4 744 0
 5191 039c BD010000 		movl	$1, %ebp
 5191      00
 5192              	.LVL612:
 743:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5193              		.loc 4 743 0
 5194 03a1 E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 5194      00
 5195              	.LVL613:
 744:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 5196              		.loc 4 744 0
 5197 03a6 E90AFDFF 		jmp	.L470
 5197      FF
 5198              	.LVL614:
 5199 03ab 0F1F4400 		.p2align 4,,10
 5199      00
 5200              		.p2align 3
 5201              	.L491:
 5202              	.LBE920:
 5203              	.LBE1021:
 5204              	.LBB1022:
 5205              	.LBB1015:
 5206              	.LBB927:
 5207              	.LBB928:
 603:fltk-1.3.4-1/FL/Fl.H ****   /**
 5208              		.loc 7 603 0
 5209 03b0 448B2500 		movl	_ZN2Fl3e_yE(%rip), %r12d
 5209      000000
 5210              	.LBE928:
 5211              	.LBE927:
 5212              	.LBB929:
 873:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 5213              		.loc 4 873 0
 5214 03b7 8B442414 		movl	20(%rsp), %eax
 5215 03bb 4139C4   		cmpl	%eax, %r12d
 5216 03be 0F8D0C02 		jge	.L512
 5216      0000
 873:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 5217              		.loc 4 873 0 is_stmt 0 discriminator 1
 5218 03c4 443B2500 		cmpl	_ZZN11Fl_Browser_6handleEiE2py(%rip), %r12d
 5218      000000
 5219 03cb 0F8DFF01 		jge	.L512
 5219      0000
 5220              	.LBB930:
 874:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 5221              		.loc 4 874 0 is_stmt 1
 5222 03d1 8B93A400 		movl	164(%rbx), %edx
 5222      0000
 876:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5223              		.loc 4 876 0
 5224 03d7 BE000000 		movl	$0, %esi
 5224      00
 5225 03dc 4889DF   		movq	%rbx, %rdi
 874:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 5226              		.loc 4 874 0
 5227 03df 4401E2   		addl	%r12d, %edx
 5228              	.LVL615:
 876:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5229              		.loc 4 876 0
 5230 03e2 29C2     		subl	%eax, %edx
 5231              	.LVL616:
 5232 03e4 0F49F2   		cmovns	%edx, %esi
 5233 03e7 E8000000 		call	_ZN11Fl_Browser_8positionEi
 5233      00
 5234              	.LVL617:
 5235              	.L513:
 5236 03ec 0FB6436C 		movzbl	108(%rbx), %eax
 5237              	.LVL618:
 5238              	.LBE930:
 5239              	.LBE929:
 5240              	.LBB933:
 883:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 5241              		.loc 4 883 0
 5242 03f0 84C0     		testb	%al, %al
 5243 03f2 7457     		je	.L515
 883:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 5244              		.loc 4 883 0 is_stmt 0 discriminator 2
 5245 03f4 4883BBC8 		cmpq	$0, 200(%rbx)
 5245      00000000 
 5246 03fc 744D     		je	.L515
 5247              	.LVL619:
 5248              	.LBB934:
 885:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 5249              		.loc 4 885 0 is_stmt 1
 5250 03fe 3C03     		cmpb	$3, %al
 5251 0400 0F84A402 		je	.L689
 5251      0000
 5252              	.LBB935:
 5253              	.LBB936:
 5254              	.LBB937:
 598:fltk-1.3.4-1/FL/Fl.H ****   /**
 5255              		.loc 7 598 0
 5256 0406 8B150000 		movl	_ZN2Fl3e_xE(%rip), %edx
 5256      0000
 5257 040c 8B4320   		movl	32(%rbx), %eax
 5258              	.LBE937:
 5259              	.LBE936:
 5260 040f 31C9     		xorl	%ecx, %ecx
 908:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  892:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if this widget is a child of \p wgt.
 5261              		.loc 4 908 0
 5262 0411 488BABD0 		movq	208(%rbx), %rbp
 5262      000000
 5263              	.LVL620:
 911:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 5264              		.loc 4 911 0
 5265 0418 39D0     		cmpl	%edx, %eax
 5266 041a 7F0B     		jg	.L530
 5267              	.LVL621:
 910:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 5268              		.loc 4 910 0
 5269 041c 034328   		addl	40(%rbx), %eax
 5270 041f 39D0     		cmpl	%edx, %eax
 5271 0421 0F8D5D03 		jge	.L690
 5271      0000
 5272              	.LVL622:
 5273              	.L530:
 913:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5274              		.loc 4 913 0 discriminator 2
 5275 0427 0FB6536F 		movzbl	111(%rbx), %edx
 5276 042b 4889EE   		movq	%rbp, %rsi
 5277 042e 4889DF   		movq	%rbx, %rdi
 912:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 5278              		.loc 4 912 0 discriminator 2
 5279 0431 880D0000 		movb	%cl, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 5279      0000
 5280              	.LVL623:
 913:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5281              		.loc 4 913 0 discriminator 2
 5282 0437 83E201   		andl	$1, %edx
 5283 043a E8000000 		call	_ZN11Fl_Browser_11select_onlyEPvi
 5283      00
 5284              	.LVL624:
 914:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  898:fltk-1.3.4-1/FL/Fl_Widget.H ****   int inside(const Fl_Widget* wgt) const {return wgt ? wgt->c
 5285              		.loc 4 914 0 discriminator 2
 5286 043f 48837C24 		cmpq	$0, 32(%rsp)
 5286      2000
 5287 0445 0F8465FC 		je	.L662
 5287      FFFF
 5288              	.LVL625:
 5289              	.L515:
 5290              	.LBE935:
 5291              	.LBE934:
 5292              	.LBE933:
 916:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 5293              		.loc 4 916 0
 5294 044b 44892500 		movl	%r12d, _ZZN11Fl_Browser_6handleEiE2py(%rip)
 5294      000000
 917:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 5295              		.loc 4 917 0
 5296 0452 BD010000 		movl	$1, %ebp
 5296      00
 5297 0457 E959FCFF 		jmp	.L470
 5297      FF
 5298 045c 0F1F4000 		.p2align 4,,10
 5299              		.p2align 3
 5300              	.L490:
 5301              	.LVL626:
 5302              	.LBB957:
 919:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  903:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw();
 5303              		.loc 4 919 0
 5304 0460 807B6C01 		cmpb	$1, 108(%rbx)
 5305 0464 0F840202 		je	.L691
 5305      0000
 5306              	.L531:
 5307              	.LBE957:
 925:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 5308              		.loc 4 925 0
 5309 046a 803D0000 		cmpb	$0, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 5309      000000
 5310 0471 0F84B101 		je	.L532
 5310      0000
 5311              	.LVL627:
 5312              	.LBB959:
 5313              	.LBB960:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5314              		.loc 1 786 0
 5315 0477 814B6080 		orl	$128, 96(%rbx)
 5315      000000
 5316              	.LVL628:
 5317              	.LBE960:
 5318              	.LBE959:
 927:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 5319              		.loc 4 927 0
 5320 047e F6436F04 		testb	$4, 111(%rbx)
 5321 0482 0F85AA01 		jne	.L660
 5321      0000
 5322              	.LVL629:
 5323              	.L534:
 931:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  915:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), clear_damage(uchar)
 5324              		.loc 4 931 0
 5325 0488 48837C24 		cmpq	$0, 32(%rsp)
 5325      2000
 5326 048e 0F841CFC 		je	.L662
 5326      FFFF
 934:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5327              		.loc 4 934 0
 5328 0494 8B050000 		movl	_ZN2Fl8e_clicksE(%rip), %eax
 5328      0000
 5329 049a 85C0     		testl	%eax, %eax
 5330 049c 0F840EFC 		je	.L662
 5330      FFFF
 5331 04a2 E9B3FCFF 		jmp	.L665
 5331      FF
 5332              	.LVL630:
 5333 04a7 660F1F84 		.p2align 4,,10
 5333      00000000 
 5333      00
 5334              		.p2align 3
 5335              	.L488:
 798:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5336              		.loc 4 798 0
 5337 04b0 8B4C241C 		movl	28(%rsp), %ecx
 5338 04b4 8B542418 		movl	24(%rsp), %edx
 5339 04b8 8B742414 		movl	20(%rsp), %esi
 5340 04bc 8B7C2410 		movl	16(%rsp), %edi
 5341 04c0 E8000000 		call	_ZN2Fl12event_insideEiiii
 5341      00
 5342              	.LVL631:
 5343 04c5 85C0     		testl	%eax, %eax
 5344 04c7 89C5     		movl	%eax, %ebp
 5345 04c9 0F84E6FB 		je	.L470
 5345      FFFF
 5346              	.LBB961:
 5347              	.LBB962:
 5348              		.loc 7 1195 0
 5349 04cf BF010000 		movl	$1, %edi
 5349      00
 5350 04d4 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 5350      00
 5351              	.LVL632:
 5352              	.LBE962:
 5353              	.LBE961:
 799:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 5354              		.loc 4 799 0
 5355 04d9 84C0     		testb	%al, %al
 5356 04db 0F85B401 		jne	.L692
 5356      0000
 5357              	.L493:
 5358 04e1 0FB6436C 		movzbl	108(%rbx), %eax
 5359              	.LBB963:
 5360              	.LBB964:
 603:fltk-1.3.4-1/FL/Fl.H ****   /**
 5361              		.loc 7 603 0
 5362 04e5 8B350000 		movl	_ZN2Fl3e_yE(%rip), %esi
 5362      0000
 5363              	.LBE964:
 5364              	.LBE963:
 804:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 5365              		.loc 4 804 0
 5366 04eb C6050000 		movb	$0, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 5366      000000
 803:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5367              		.loc 4 803 0
 5368 04f2 89350000 		movl	%esi, _ZZN11Fl_Browser_6handleEiE2py(%rip)
 5368      0000
 5369              	.LVL633:
 5370              	.LBB965:
 805:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 5371              		.loc 4 805 0
 5372 04f8 84C0     		testb	%al, %al
 5373 04fa 0F84B0FB 		je	.L662
 5373      FFFF
 805:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 5374              		.loc 4 805 0 is_stmt 0 discriminator 2
 5375 0500 4883BBC8 		cmpq	$0, 200(%rbx)
 5375      00000000 
 5376 0508 0F84A2FB 		je	.L662
 5376      FFFF
 5377              	.LVL634:
 5378              	.LBB966:
 807:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 5379              		.loc 4 807 0 is_stmt 1
 5380 050e 3C03     		cmpb	$3, %al
 5381 0510 0F848702 		je	.L693
 5381      0000
 808:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5382              		.loc 4 808 0
 5383 0516 4889DF   		movq	%rbx, %rdi
 5384 0519 E8000000 		call	_ZN11Fl_Browser_9find_itemEi
 5384      00
 5385              	.LVL635:
 5386 051e 31D2     		xorl	%edx, %edx
 5387 0520 4889C6   		movq	%rax, %rsi
 5388              	.L672:
 5389              	.LBB967:
 5390              	.LBB968:
 5391              	.LBB969:
 860:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5392              		.loc 4 860 0
 5393 0523 4889DF   		movq	%rbx, %rdi
 5394 0526 E8000000 		call	_ZN11Fl_Browser_11select_onlyEPvi
 5394      00
 5395              	.LVL636:
 862:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 5396              		.loc 4 862 0
 5397 052b 48837C24 		cmpq	$0, 32(%rsp)
 5397      2000
 860:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5398              		.loc 4 860 0
 5399 0531 88050000 		movb	%al, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 5399      0000
 862:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 5400              		.loc 4 862 0
 5401 0537 0F8473FB 		je	.L662
 5401      FFFF
 5402              	.L670:
 5403 053d 84C0     		testb	%al, %al
 5404 053f 0F846BFB 		je	.L662
 5404      FFFF
 5405              	.LVL637:
 862:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 5406              		.loc 4 862 0 is_stmt 0 discriminator 1
 5407 0545 F6436F01 		testb	$1, 111(%rbx)
 5408 0549 0F8461FB 		je	.L662
 5408      FFFF
 5409              	.LVL638:
 5410 054f 90       		.p2align 4,,10
 5411              		.p2align 3
 5412              	.L536:
 5413              	.LBE969:
 5414              	.LBE968:
 5415              	.LBE967:
 5416              	.LBE966:
 5417              	.LBE965:
 5418              	.LBB996:
 5419              	.LBB997:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5420              		.loc 1 786 0 is_stmt 1
 5421 0550 814B6080 		orl	$128, 96(%rbx)
 5421      000000
 5422              	.LVL639:
 5423              	.LBE997:
 5424              	.LBE996:
 5425              	.LBB998:
 5426              	.LBB999:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5427              		.loc 1 861 0
 5428 0557 488B5318 		movq	24(%rbx), %rdx
 5429 055b 4889DE   		movq	%rbx, %rsi
 5430 055e 4889DF   		movq	%rbx, %rdi
 5431              	.LBE999:
 5432              	.LBE998:
 938:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>a
 5433              		.loc 4 938 0
 5434 0561 BD010000 		movl	$1, %ebp
 5434      00
 5435              	.LBB1001:
 5436              	.LBB1000:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5437              		.loc 1 861 0
 5438 0566 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 5438      00
 5439              	.LVL640:
 5440 056b E945FBFF 		jmp	.L470
 5440      FF
 5441              	.LVL641:
 5442              		.p2align 4,,10
 5443              		.p2align 3
 5444              	.L481:
 5445              	.LBE1000:
 5446              	.LBE1001:
 5447              	.LBE1015:
 5448              	.LBE1022:
 5449              	.LBB1023:
 5450              	.LBB921:
 762:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5451              		.loc 4 762 0
 5452 0570 488BB3D0 		movq	208(%rbx), %rsi
 5452      000000
 5453 0577 4885F6   		testq	%rsi, %rsi
 5454 057a 7408     		je	.L487
 762:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5455              		.loc 4 762 0 is_stmt 0 discriminator 1
 5456 057c 4889DF   		movq	%rbx, %rdi
 5457 057f E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 5457      00
 5458              	.LVL642:
 5459              	.L487:
 763:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 5460              		.loc 4 763 0 is_stmt 1
 5461 0584 4889EE   		movq	%rbp, %rsi
 5462 0587 4889ABD0 		movq	%rbp, 208(%rbx)
 5462      000000
 5463 058e 4889DF   		movq	%rbx, %rdi
 5464 0591 E8000000 		call	_ZN11Fl_Browser_11redraw_lineEPv
 5464      00
 5465              	.LVL643:
 764:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5466              		.loc 4 764 0
 5467 0596 4889EE   		movq	%rbp, %rsi
 5468 0599 4889DF   		movq	%rbx, %rdi
 765:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 5469              		.loc 4 765 0
 5470 059c BD010000 		movl	$1, %ebp
 5470      00
 5471              	.LVL644:
 764:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5472              		.loc 4 764 0
 5473 05a1 E8000000 		call	_ZN11Fl_Browser_7displayEPv
 5473      00
 5474              	.LVL645:
 765:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 5475              		.loc 4 765 0
 5476 05a6 E90AFBFF 		jmp	.L470
 5476      FF
 5477              	.LVL646:
 5478 05ab 0F1F4400 		.p2align 4,,10
 5478      00
 5479              		.p2align 3
 5480              	.L661:
 724:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 5481              		.loc 4 724 0
 5482 05b0 0FB6536F 		movzbl	111(%rbx), %edx
 5483 05b4 4889EE   		movq	%rbp, %rsi
 5484 05b7 4889DF   		movq	%rbx, %rdi
 728:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 5485              		.loc 4 728 0
 5486 05ba BD010000 		movl	$1, %ebp
 5486      00
 5487              	.LVL647:
 724:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 5488              		.loc 4 724 0
 5489 05bf E8000000 		call	_ZN11Fl_Browser_11select_onlyEPvi
 5489      00
 5490              	.LVL648:
 725:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5491              		.loc 4 725 0
 5492 05c4 E9ECFAFF 		jmp	.L470
 5492      FF
 5493              	.LVL649:
 5494 05c9 0F1F8000 		.p2align 4,,10
 5494      000000
 5495              		.p2align 3
 5496              	.L512:
 5497              	.LBE921:
 5498              	.LBE1023:
 5499              	.LBB1024:
 5500              	.LBB1016:
 5501              	.LBB1002:
 5502              	.LBB931:
 877:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 5503              		.loc 4 877 0
 5504 05d0 0344241C 		addl	28(%rsp), %eax
 5505 05d4 4139C4   		cmpl	%eax, %r12d
 5506 05d7 0F8E0FFE 		jle	.L513
 5506      FFFF
 877:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 5507              		.loc 4 877 0 is_stmt 0 discriminator 1
 5508 05dd 443B2500 		cmpl	_ZZN11Fl_Browser_6handleEiE2py(%rip), %r12d
 5508      000000
 5509 05e4 0F8E02FE 		jle	.L513
 5509      FFFF
 5510              	.LBB932:
 878:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5511              		.loc 4 878 0 is_stmt 1
 5512 05ea 8BABA400 		movl	164(%rbx), %ebp
 5512      0000
 879:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 5513              		.loc 4 879 0
 5514 05f0 4889DF   		movq	%rbx, %rdi
 878:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5515              		.loc 4 878 0
 5516 05f3 4401E5   		addl	%r12d, %ebp
 5517 05f6 29C5     		subl	%eax, %ebp
 5518              	.LVL650:
 879:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 5519              		.loc 4 879 0
 5520 05f8 488B03   		movq	(%rbx), %rax
 5521 05fb FF90B000 		call	*176(%rax)
 5521      0000
 5522              	.LVL651:
 5523 0601 2B44241C 		subl	28(%rsp), %eax
 5524              	.LVL652:
 881:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 5525              		.loc 4 881 0
 5526 0605 BE000000 		movl	$0, %esi
 5526      00
 5527 060a 4889DF   		movq	%rbx, %rdi
 5528 060d 39C5     		cmpl	%eax, %ebp
 5529 060f 0F4FE8   		cmovg	%eax, %ebp
 5530              	.LVL653:
 5531 0612 85ED     		testl	%ebp, %ebp
 5532 0614 0F49F5   		cmovns	%ebp, %esi
 5533 0617 E8000000 		call	_ZN11Fl_Browser_8positionEi
 5533      00
 5534              	.LVL654:
 5535              	.LBE932:
 5536 061c E9CBFDFF 		jmp	.L513
 5536      FF
 5537              	.LVL655:
 5538              		.p2align 4,,10
 5539 0621 0F1F8000 		.p2align 3
 5539      000000
 5540              	.L532:
 5541              	.LBE931:
 5542              	.LBE1002:
 929:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 5543              		.loc 4 929 0
 5544 0628 F6436F02 		testb	$2, 111(%rbx)
 5545 062c 0F8456FE 		je	.L534
 5545      FFFF
 5546              	.LVL656:
 5547              	.L660:
 5548              	.LBB1003:
 5549              	.LBB1004:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5550              		.loc 1 861 0 discriminator 1
 5551 0632 488B5318 		movq	24(%rbx), %rdx
 5552 0636 4889DE   		movq	%rbx, %rsi
 5553 0639 4889DF   		movq	%rbx, %rdi
 5554 063c E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 5554      00
 5555              	.LVL657:
 5556 0641 E942FEFF 		jmp	.L534
 5556      FF
 5557              	.LVL658:
 5558 0646 662E0F1F 		.p2align 4,,10
 5558      84000000 
 5558      0000
 5559              		.p2align 3
 5560              	.L688:
 5561 0650 894C240C 		movl	%ecx, 12(%rsp)
 5562              	.LBE1004:
 5563              	.LBE1003:
 5564              	.LBE1016:
 5565              	.LBE1024:
 5566              	.LBB1025:
 5567              	.LBB922:
 743:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5568              		.loc 4 743 0
 5569 0654 4889EE   		movq	%rbp, %rsi
 5570 0657 4889DF   		movq	%rbx, %rdi
 5571 065a FFD0     		call	*%rax
 5572              	.LVL659:
 5573 065c 31D2     		xorl	%edx, %edx
 5574 065e 85C0     		testl	%eax, %eax
 5575 0660 8B4C240C 		movl	12(%rsp), %ecx
 5576 0664 0F94C2   		sete	%dl
 5577 0667 E92AFDFF 		jmp	.L477
 5577      FF
 5578              	.LVL660:
 5579              	.L691:
 5580              	.LBE922:
 5581              	.LBE1025:
 5582              	.LBB1026:
 5583              	.LBB1017:
 5584              	.LBB1005:
 5585              	.LBB958:
 921:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  905:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the label.
 5586              		.loc 4 921 0
 5587 066c 31F6     		xorl	%esi, %esi
 5588 066e 4889DF   		movq	%rbx, %rdi
 920:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  904:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5589              		.loc 4 920 0
 5590 0671 488BABD0 		movq	208(%rbx), %rbp
 5590      000000
 5591              	.LVL661:
 921:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  905:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the label.
 5592              		.loc 4 921 0
 5593 0678 E8000000 		call	_ZN11Fl_Browser_8deselectEi
 5593      00
 5594              	.LVL662:
 922:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for t
 5595              		.loc 4 922 0
 5596 067d 48837C24 		cmpq	$0, 32(%rsp)
 5596      2000
 5597 0683 0F8427FA 		je	.L662
 5597      FFFF
 923:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  907:fltk-1.3.4-1/FL/Fl_Widget.H ****      of a widget.
 5598              		.loc 4 923 0
 5599 0689 4889ABD0 		movq	%rbp, 208(%rbx)
 5599      000000
 5600              	.LBE958:
 5601 0690 E9D5FDFF 		jmp	.L531
 5601      FF
 5602              	.LVL663:
 5603              	.L692:
 5604              	.LBE1005:
 800:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 5605              		.loc 4 800 0
 5606 0695 4889DF   		movq	%rbx, %rdi
 5607 0698 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 5607      00
 5608              	.LVL664:
 801:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5609              		.loc 4 801 0
 5610 069d 4889DF   		movq	%rbx, %rdi
 5611 06a0 E8000000 		call	_ZN9Fl_Widget6redrawEv
 5611      00
 5612              	.LVL665:
 5613 06a5 E937FEFF 		jmp	.L493
 5613      FF
 5614              	.LVL666:
 5615              	.L689:
 5616              	.LBB1006:
 5617              	.LBB953:
 5618              	.LBB938:
 886:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5619              		.loc 4 886 0
 5620 06aa 4489E6   		movl	%r12d, %esi
 5621 06ad 4889DF   		movq	%rbx, %rdi
 5622 06b0 E8000000 		call	_ZN11Fl_Browser_9find_itemEi
 5622      00
 5623              	.LVL667:
 888:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 5624              		.loc 4 888 0
 5625 06b5 443B2500 		cmpl	_ZZN11Fl_Browser_6handleEiE2py(%rip), %r12d
 5625      000000
 886:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5626              		.loc 4 886 0
 5627 06bc 4989C6   		movq	%rax, %r14
 5628              	.LVL668:
 888:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 5629              		.loc 4 888 0
 5630 06bf 0F8E4101 		jle	.L518
 5630      0000
 889:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 5631              		.loc 4 889 0
 5632 06c5 488BB3D0 		movq	208(%rbx), %rsi
 5632      000000
 5633 06cc 4885F6   		testq	%rsi, %rsi
 5634 06cf 0F842902 		je	.L519
 5634      0000
 889:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 5635              		.loc 4 889 0 is_stmt 0 discriminator 1
 5636 06d5 488B03   		movq	(%rbx), %rax
 5637              	.LVL669:
 5638 06d8 4889DF   		movq	%rbx, %rdi
 5639 06db FF5058   		call	*88(%rax)
 5640              	.LVL670:
 890:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5641              		.loc 4 890 0 is_stmt 1 discriminator 1
 5642 06de 4D85F6   		testq	%r14, %r14
 889:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 5643              		.loc 4 889 0 discriminator 1
 5644 06e1 4889C5   		movq	%rax, %rbp
 5645              	.LVL671:
 890:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5646              		.loc 4 890 0 discriminator 1
 5647 06e4 0F84D502 		je	.L520
 5647      0000
 5648 06ea 488B03   		movq	(%rbx), %rax
 5649              	.LVL672:
 5650 06ed 4C89F6   		movq	%r14, %rsi
 5651 06f0 4889DF   		movq	%rbx, %rdi
 5652 06f3 FF5058   		call	*88(%rax)
 5653              	.LVL673:
 5654              	.LBB939:
 895:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 5655              		.loc 4 895 0 discriminator 1
 5656 06f6 4885ED   		testq	%rbp, %rbp
 5657              	.LBE939:
 890:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5658              		.loc 4 890 0 discriminator 1
 5659 06f9 4989C5   		movq	%rax, %r13
 5660              	.LVL674:
 5661              	.LBB946:
 895:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 5662              		.loc 4 895 0 discriminator 1
 5663 06fc 0F842601 		je	.L524
 5663      0000
 5664 0702 4839C5   		cmpq	%rax, %rbp
 5665 0705 755C     		jne	.L527
 5666 0707 E91C0100 		jmp	.L524
 5666      00
 5667              	.LVL675:
 5668 070c 0F1F4000 		.p2align 4,,10
 5669              		.p2align 3
 5670              	.L694:
 5671              	.LBB940:
 899:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  883:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _clear_fullscreen() {flags_ &= ~FULLSCREEN;}
 5672              		.loc 4 899 0
 5673 0710 08050000 		orb	%al, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 5673      0000
 900:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5674              		.loc 4 900 0
 5675 0716 84C0     		testb	%al, %al
 5676 0718 7428     		je	.L529
 5677              	.LVL676:
 900:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5678              		.loc 4 900 0 is_stmt 0 discriminator 1
 5679 071a F6436F01 		testb	$1, 111(%rbx)
 5680 071e 7422     		je	.L529
 5681              	.LVL677:
 5682              	.LBB941:
 5683              	.LBB942:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5684              		.loc 1 786 0 is_stmt 1
 5685 0720 814B6080 		orl	$128, 96(%rbx)
 5685      000000
 5686              	.LVL678:
 5687              	.LBE942:
 5688              	.LBE941:
 5689              	.LBB943:
 5690              	.LBB944:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5691              		.loc 1 861 0
 5692 0727 488B5318 		movq	24(%rbx), %rdx
 5693 072b 4889DE   		movq	%rbx, %rsi
 5694 072e 4889DF   		movq	%rbx, %rdi
 5695 0731 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 5695      00
 5696              	.LVL679:
 5697              	.LBE944:
 5698              	.LBE943:
 903:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  887:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return Returns 1 if \p w is a child of this widget, or
 5699              		.loc 4 903 0
 5700 0736 48837C24 		cmpq	$0, 32(%rsp)
 5700      2000
 5701 073c 0F846EF9 		je	.L662
 5701      FFFF
 5702              	.LVL680:
 5703              	.L529:
 5704              	.LBE940:
 895:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 5705              		.loc 4 895 0
 5706 0742 488B03   		movq	(%rbx), %rax
 5707 0745 4889EE   		movq	%rbp, %rsi
 5708 0748 4889DF   		movq	%rbx, %rdi
 5709 074b FF5058   		call	*88(%rax)
 5710              	.LVL681:
 5711 074e 4885C0   		testq	%rax, %rax
 5712 0751 4889C5   		movq	%rax, %rbp
 5713              	.LVL682:
 5714 0754 0F84C500 		je	.L526
 5714      0000
 5715 075a 4939C5   		cmpq	%rax, %r13
 5716 075d 0F84BC00 		je	.L526
 5716      0000
 5717              	.LVL683:
 5718              	.L527:
 5719              	.LBB945:
 897:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 5720              		.loc 4 897 0
 5721 0763 0FBE1500 		movsbl	_ZZN11Fl_Browser_6handleEiE8whichway(%rip), %edx
 5721      000000
 5722 076a 31C9     		xorl	%ecx, %ecx
 5723 076c 4889EE   		movq	%rbp, %rsi
 5724 076f 4889DF   		movq	%rbx, %rdi
 5725 0772 E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 5725      00
 5726              	.LVL684:
 898:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 5727              		.loc 4 898 0
 5728 0777 48837C24 		cmpq	$0, 32(%rsp)
 5728      2000
 5729 077d 7591     		jne	.L694
 5730 077f E92CF9FF 		jmp	.L662
 5730      FF
 5731              	.LVL685:
 5732              	.L690:
 5733              	.LBE945:
 5734              	.LBE946:
 5735              	.LBE938:
 5736              	.LBB949:
 911:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 5737              		.loc 4 911 0 discriminator 3
 5738 0784 4489E6   		movl	%r12d, %esi
 5739 0787 4889DF   		movq	%rbx, %rdi
 5740 078a E8000000 		call	_ZN11Fl_Browser_9find_itemEi
 5740      00
 5741              	.LVL686:
 5742 078f 4839C5   		cmpq	%rax, %rbp
 5743 0792 4889C5   		movq	%rax, %rbp
 5744              	.LVL687:
 5745 0795 0F95C1   		setne	%cl
 5746 0798 E98AFCFF 		jmp	.L530
 5746      FF
 5747              	.LVL688:
 5748              	.L693:
 5749              	.LBE949:
 5750              	.LBE953:
 5751              	.LBE1006:
 5752              	.LBB1007:
 5753              	.LBB992:
 5754              	.LBB988:
 816:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 5755              		.loc 4 816 0
 5756 079d 4889DF   		movq	%rbx, %rdi
 5757 07a0 E8000000 		call	_ZN11Fl_Browser_9find_itemEi
 5757      00
 5758              	.LVL689:
 5759 07a5 4989C4   		movq	%rax, %r12
 5760              	.LVL690:
 5761              	.LBB983:
 5762              	.LBB978:
 5763              	.LBB979:
 709:fltk-1.3.4-1/FL/Fl.H ****   /**
 5764              		.loc 7 709 0
 5765 07a8 8B050000 		movl	_ZN2Fl7e_stateE(%rip), %eax
 5765      0000
 5766              	.LVL691:
 5767              	.LBE979:
 5768              	.LBE978:
 5769              	.LBE983:
 817:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 5770              		.loc 4 817 0
 5771 07ae C6050000 		movb	$1, _ZZN11Fl_Browser_6handleEiE8whichway(%rip)
 5771      000001
 5772              	.LVL692:
 5773              	.LBB984:
 818:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5774              		.loc 4 818 0
 5775 07b5 A9000004 		testl	$262144, %eax
 5775      00
 5776 07ba 7478     		je	.L496
 5777              	.L497:
 820:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5778              		.loc 4 820 0
 5779 07bc 4D85E4   		testq	%r12, %r12
 5780 07bf 0F84EBF8 		je	.L662
 5780      FFFF
 821:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 5781              		.loc 4 821 0
 5782 07c5 488B03   		movq	(%rbx), %rax
 5783 07c8 4C89E6   		movq	%r12, %rsi
 5784 07cb 4889DF   		movq	%rbx, %rdi
 5785 07ce FF90C800 		call	*200(%rax)
 5785      0000
 5786              	.LVL693:
 5787 07d4 85C0     		testl	%eax, %eax
 822:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 5788              		.loc 4 822 0
 5789 07d6 4C89E6   		movq	%r12, %rsi
 5790 07d9 4889DF   		movq	%rbx, %rdi
 821:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 5791              		.loc 4 821 0
 5792 07dc 0F94C0   		sete	%al
 822:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 5793              		.loc 4 822 0
 5794 07df 31C9     		xorl	%ecx, %ecx
 5795 07e1 0FB6D0   		movzbl	%al, %edx
 821:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 5796              		.loc 4 821 0
 5797 07e4 88050000 		movb	%al, _ZZN11Fl_Browser_6handleEiE8whichway(%rip)
 5797      0000
 822:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 5798              		.loc 4 822 0
 5799 07ea E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 5799      00
 5800              	.LVL694:
 824:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 5801              		.loc 4 824 0
 5802 07ef 48837C24 		cmpq	$0, 32(%rsp)
 5802      2000
 822:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 5803              		.loc 4 822 0
 5804 07f5 88050000 		movb	%al, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 5804      0000
 824:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 5805              		.loc 4 824 0
 5806 07fb 0F853CFD 		jne	.L670
 5806      FFFF
 5807 0801 E9AAF8FF 		jmp	.L662
 5807      FF
 5808              	.LVL695:
 5809              	.L518:
 5810              	.LBE984:
 5811              	.LBE988:
 5812              	.LBE992:
 5813              	.LBE1007:
 5814              	.LBB1008:
 5815              	.LBB954:
 5816              	.LBB950:
 893:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 5817              		.loc 4 893 0
 5818 0806 4C8BABD0 		movq	208(%rbx), %r13
 5818      000000
 5819              	.LVL696:
 5820              	.LBB947:
 895:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 5821              		.loc 4 895 0
 5822 080d 4C39E8   		cmpq	%r13, %rax
 5823 0810 740D     		je	.L526
 5824 0812 4885C0   		testq	%rax, %rax
 5825 0815 7408     		je	.L526
 5826 0817 4889C5   		movq	%rax, %rbp
 5827 081a E944FFFF 		jmp	.L527
 5827      FF
 5828              	.LVL697:
 5829              	.L526:
 5830              	.LBE947:
 906:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 5831              		.loc 4 906 0
 5832 081f 4D85F6   		testq	%r14, %r14
 5833 0822 0F8423FC 		je	.L515
 5833      FFFF
 5834              	.LVL698:
 5835              	.L524:
 5836 0828 4C89B3D0 		movq	%r14, 208(%rbx)
 5836      000000
 5837 082f E917FCFF 		jmp	.L515
 5837      FF
 5838              	.LVL699:
 5839              	.L496:
 5840              	.LBE950:
 5841              	.LBE954:
 5842              	.LBE1008:
 5843              	.LBB1009:
 5844              	.LBB993:
 5845              	.LBB989:
 5846              	.LBB985:
 5847              	.LBB980:
 830:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 5848              		.loc 4 830 0
 5849 0834 A9000001 		testl	$65536, %eax
 5849      00
 5850 0839 0F84D900 		je	.L499
 5850      0000
 5851              	.LBB970:
 831:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that
 5852              		.loc 4 831 0
 5853 083f 488BABD0 		movq	208(%rbx), %rbp
 5853      000000
 5854 0846 4939EC   		cmpq	%rbp, %r12
 5855 0849 0F846DFF 		je	.L497
 5855      FFFF
 833:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 5856              		.loc 4 833 0
 5857 084f 4D85E4   		testq	%r12, %r12
 5858 0852 0F845201 		je	.L500
 5858      0000
 833:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 5859              		.loc 4 833 0 is_stmt 0 discriminator 2
 5860 0858 488B03   		movq	(%rbx), %rax
 5861 085b 4C89E6   		movq	%r12, %rsi
 5862 085e 4889DF   		movq	%rbx, %rdi
 5863 0861 FF90C800 		call	*200(%rax)
 5863      0000
 5864              	.LVL700:
 5865              	.LBB971:
 838:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 5866              		.loc 4 838 0 is_stmt 1 discriminator 2
 5867 0867 4C8BABD0 		movq	208(%rbx), %r13
 5867      000000
 5868              	.LBE971:
 833:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 5869              		.loc 4 833 0 discriminator 2
 5870 086e 85C0     		testl	%eax, %eax
 5871 0870 0F940500 		sete	_ZZN11Fl_Browser_6handleEiE8whichway(%rip)
 5871      000000
 5872              	.LBB972:
 839:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 5873              		.loc 4 839 0 discriminator 2
 5874 0877 4D39EC   		cmpq	%r13, %r12
 838:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 5875              		.loc 4 838 0 discriminator 2
 5876 087a 4C89E8   		movq	%r13, %rax
 5877              	.LVL701:
 839:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 5878              		.loc 4 839 0 discriminator 2
 5879 087d 0F84F100 		je	.L501
 5879      0000
 840:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 5880              		.loc 4 840 0
 5881 0883 4D85ED   		testq	%r13, %r13
 5882 0886 7511     		jne	.L504
 5883 0888 E9A10000 		jmp	.L502
 5883      00
 5884 088d 0F1F00   		.p2align 4,,10
 5885              		.p2align 3
 5886              	.L654:
 5887 0890 4885C0   		testq	%rax, %rax
 5888 0893 0F848E00 		je	.L695
 5888      0000
 5889              	.LVL702:
 5890              	.L504:
 838:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 5891              		.loc 4 838 0
 5892 0899 488B13   		movq	(%rbx), %rdx
 5893 089c 4889C6   		movq	%rax, %rsi
 5894 089f 4889DF   		movq	%rbx, %rdi
 5895 08a2 FF5258   		call	*88(%rdx)
 5896              	.LVL703:
 839:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 5897              		.loc 4 839 0
 5898 08a5 4939C4   		cmpq	%rax, %r12
 5899 08a8 75E6     		jne	.L654
 5900              	.LVL704:
 5901              	.LBE972:
 5902              	.LBB973:
 843:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5903              		.loc 4 843 0
 5904 08aa 488BABD0 		movq	208(%rbx), %rbp
 5904      000000
 5905              	.LVL705:
 5906 08b1 4939EC   		cmpq	%rbp, %r12
 5907 08b4 7522     		jne	.L508
 5908 08b6 E9B90000 		jmp	.L501
 5908      00
 5909              	.LVL706:
 5910 08bb 0F1F4400 		.p2align 4,,10
 5910      00
 5911              		.p2align 3
 5912              	.L697:
 843:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5913              		.loc 4 843 0 is_stmt 0 discriminator 2
 5914 08c0 488B03   		movq	(%rbx), %rax
 5915 08c3 4889EE   		movq	%rbp, %rsi
 5916 08c6 4889DF   		movq	%rbx, %rdi
 5917 08c9 FF5058   		call	*88(%rax)
 5918              	.LVL707:
 5919 08cc 4939C4   		cmpq	%rax, %r12
 5920 08cf 4889C5   		movq	%rax, %rbp
 5921              	.LVL708:
 5922 08d2 0F84C100 		je	.L696
 5922      0000
 5923              	.LVL709:
 5924              	.L508:
 844:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 5925              		.loc 4 844 0 is_stmt 1
 5926 08d8 0FB64B6F 		movzbl	111(%rbx), %ecx
 5927 08dc 0FBE1500 		movsbl	_ZZN11Fl_Browser_6handleEiE8whichway(%rip), %edx
 5927      000000
 5928 08e3 4889EE   		movq	%rbp, %rsi
 5929 08e6 4889DF   		movq	%rbx, %rdi
 5930 08e9 83E101   		andl	$1, %ecx
 5931 08ec E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 5931      00
 5932              	.LVL710:
 845:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 5933              		.loc 4 845 0
 5934 08f1 48837C24 		cmpq	$0, 32(%rsp)
 5934      2000
 5935 08f7 75C7     		jne	.L697
 5936 08f9 E9B2F7FF 		jmp	.L662
 5936      FF
 5937              	.LVL711:
 5938              	.L519:
 5939              	.LBE973:
 5940              	.LBE970:
 5941              	.LBE980:
 5942              	.LBE985:
 5943              	.LBE989:
 5944              	.LBE993:
 5945              	.LBE1009:
 5946              	.LBB1010:
 5947              	.LBB955:
 5948              	.LBB951:
 890:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5949              		.loc 4 890 0
 5950 08fe 4885C0   		testq	%rax, %rax
 5951 0901 0F8444FB 		je	.L515
 5951      FFFF
 5952 0907 488B03   		movq	(%rbx), %rax
 5953              	.LVL712:
 5954 090a 4C89F6   		movq	%r14, %rsi
 5955 090d 4889DF   		movq	%rbx, %rdi
 5956 0910 FF5058   		call	*88(%rax)
 5957              	.LVL713:
 5958 0913 E910FFFF 		jmp	.L524
 5958      FF
 5959              	.LVL714:
 5960              	.L499:
 5961              	.LBE951:
 5962              	.LBE955:
 5963              	.LBE1010:
 5964              	.LBB1011:
 5965              	.LBB994:
 5966              	.LBB990:
 5967              	.LBB986:
 5968              	.LBB981:
 860:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5969              		.loc 4 860 0
 5970 0918 31D2     		xorl	%edx, %edx
 5971 091a 4C89E6   		movq	%r12, %rsi
 5972 091d E901FCFF 		jmp	.L672
 5972      FF
 5973              	.LVL715:
 5974              	.L681:
 5975              	.LBE981:
 5976              	.LBE986:
 5977              	.LBE990:
 5978              	.LBE994:
 5979              	.LBE1011:
 5980              	.LBE1017:
 5981              	.LBE1026:
 948:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5982              		.loc 4 948 0
 5983 0922 E8000000 		call	__stack_chk_fail
 5983      00
 5984              	.LVL716:
 5985              	.L695:
 5986 0927 4C8BABD0 		movq	208(%rbx), %r13
 5986      000000
 5987              	.LVL717:
 5988              	.L502:
 5989              	.LBB1027:
 5990              	.LBB1018:
 5991              	.LBB1012:
 5992              	.LBB995:
 5993              	.LBB991:
 5994              	.LBB987:
 5995              	.LBB982:
 5996              	.LBB977:
 5997              	.LBB974:
 5998              	.LBB975:
 849:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5999              		.loc 4 849 0
 6000 092e 488B03   		movq	(%rbx), %rax
 6001 0931 4C89E6   		movq	%r12, %rsi
 6002 0934 EB30     		jmp	.L668
 6003              	.LVL718:
 6004              	.L510:
 850:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 6005              		.loc 4 850 0
 6006 0936 0FB64B6F 		movzbl	111(%rbx), %ecx
 6007 093a 0FBE1500 		movsbl	_ZZN11Fl_Browser_6handleEiE8whichway(%rip), %edx
 6007      000000
 6008 0941 4889EE   		movq	%rbp, %rsi
 6009 0944 4889DF   		movq	%rbx, %rdi
 6010 0947 83E101   		andl	$1, %ecx
 6011 094a E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 6011      00
 6012              	.LVL719:
 851:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6013              		.loc 4 851 0
 6014 094f 48837C24 		cmpq	$0, 32(%rsp)
 6014      2000
 6015 0955 0F8455F7 		je	.L662
 6015      FFFF
 852:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 6016              		.loc 4 852 0
 6017 095b 4C39ED   		cmpq	%r13, %rbp
 6018 095e 7414     		je	.L501
 849:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6019              		.loc 4 849 0 discriminator 2
 6020 0960 488B03   		movq	(%rbx), %rax
 6021 0963 4889EE   		movq	%rbp, %rsi
 6022              	.LVL720:
 6023              	.L668:
 849:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6024              		.loc 4 849 0 is_stmt 0
 6025 0966 4889DF   		movq	%rbx, %rdi
 6026 0969 FF5058   		call	*88(%rax)
 6027              	.LVL721:
 6028 096c 4885C0   		testq	%rax, %rax
 6029 096f 4889C5   		movq	%rax, %rbp
 6030              	.LVL722:
 6031 0972 75C2     		jne	.L510
 6032              	.LVL723:
 6033              	.L501:
 6034              	.LBE975:
 6035              	.LBE974:
 856:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 6036              		.loc 4 856 0 is_stmt 1
 6037 0974 C6050000 		movb	$1, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 6037      000001
 6038              	.L548:
 6039              	.LVL724:
 857:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6040              		.loc 4 857 0 discriminator 1
 6041 097b 0FB64B6F 		movzbl	111(%rbx), %ecx
 6042 097f 0FBE1500 		movsbl	_ZZN11Fl_Browser_6handleEiE8whichway(%rip), %edx
 6042      000000
 6043 0986 4C89E6   		movq	%r12, %rsi
 6044 0989 4889DF   		movq	%rbx, %rdi
 6045 098c 83E101   		andl	$1, %ecx
 6046 098f E8000000 		call	_ZN11Fl_Browser_6selectEPvii
 6046      00
 6047              	.LVL725:
 6048 0994 E917F7FF 		jmp	.L662
 6048      FF
 6049              	.LVL726:
 6050              	.L696:
 857:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6051              		.loc 4 857 0 is_stmt 0
 6052 0999 4D85E4   		testq	%r12, %r12
 856:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 6053              		.loc 4 856 0 is_stmt 1
 6054 099c C6050000 		movb	$1, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 6054      000001
 857:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6055              		.loc 4 857 0
 6056 09a3 75D6     		jne	.L548
 6057 09a5 E906F7FF 		jmp	.L662
 6057      FF
 6058              	.LVL727:
 6059              	.L500:
 6060              	.LBB976:
 843:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6061              		.loc 4 843 0
 6062 09aa 4885ED   		testq	%rbp, %rbp
 6063 09ad 0F8525FF 		jne	.L508
 6063      FFFF
 6064              	.LBE976:
 856:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 6065              		.loc 4 856 0
 6066 09b3 C6050000 		movb	$1, _ZZN11Fl_Browser_6handleEiE6change(%rip)
 6066      000001
 6067 09ba E9F1F6FF 		jmp	.L662
 6067      FF
 6068              	.LVL728:
 6069              	.L520:
 6070              	.LBE977:
 6071              	.LBE982:
 6072              	.LBE987:
 6073              	.LBE991:
 6074              	.LBE995:
 6075              	.LBE1012:
 6076              	.LBB1013:
 6077              	.LBB956:
 6078              	.LBB952:
 6079              	.LBB948:
 895:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 6080              		.loc 4 895 0
 6081 09bf 4885C0   		testq	%rax, %rax
 6082 09c2 0F8483FA 		je	.L515
 6082      FFFF
 6083              	.LBE948:
 890:fltk-1.3.4-1/src/Fl_Browser_.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6084              		.loc 4 890 0
 6085 09c8 4531ED   		xorl	%r13d, %r13d
 6086 09cb E993FDFF 		jmp	.L527
 6086      FF
 6087              	.LBE952:
 6088              	.LBE956:
 6089              	.LBE1013:
 6090              	.LBE1018:
 6091              	.LBE1027:
 6092              		.cfi_endproc
 6093              	.LFE534:
 6095              		.section	.text.unlikely._ZN11Fl_Browser_6handleEi
 6096              	.LCOLDE36:
 6097              		.section	.text._ZN11Fl_Browser_6handleEi
 6098              	.LHOTE36:
 6099              		.section	.bss._ZZN11Fl_Browser_6handleEiE8whichway,"aw",@nobits
 6102              	_ZZN11Fl_Browser_6handleEiE8whichway:
 6103 0000 00       		.zero	1
 6104              		.section	.bss._ZZN11Fl_Browser_6handleEiE6change,"aw",@nobits
 6107              	_ZZN11Fl_Browser_6handleEiE6change:
 6108 0000 00       		.zero	1
 6109              		.section	.bss._ZZN11Fl_Browser_6handleEiE2py,"aw",@nobits
 6110              		.align 4
 6113              	_ZZN11Fl_Browser_6handleEiE2py:
 6114 0000 00000000 		.zero	4
 6115              		.weak	_ZTS11Fl_Browser_
 6116              		.section	.rodata._ZTS11Fl_Browser_,"aG",@progbits,_ZTS11Fl_Browser_,comdat
 6117              		.align 8
 6120              	_ZTS11Fl_Browser_:
 6121 0000 3131466C 		.string	"11Fl_Browser_"
 6121      5F42726F 
 6121      77736572 
 6121      5F00
 6122              		.weak	_ZTI11Fl_Browser_
 6123              		.section	.rodata._ZTI11Fl_Browser_,"aG",@progbits,_ZTI11Fl_Browser_,comdat
 6124              		.align 8
 6127              	_ZTI11Fl_Browser_:
 6128 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 6128      00000000 
 6129 0008 00000000 		.quad	_ZTS11Fl_Browser_
 6129      00000000 
 6130 0010 00000000 		.quad	_ZTI8Fl_Group
 6130      00000000 
 6131              		.weak	_ZTV11Fl_Browser_
 6132              		.section	.rodata._ZTV11Fl_Browser_,"aG",@progbits,_ZTV11Fl_Browser_,comdat
 6133              		.align 8
 6136              	_ZTV11Fl_Browser_:
 6137 0000 00000000 		.quad	0
 6137      00000000 
 6138 0008 00000000 		.quad	_ZTI11Fl_Browser_
 6138      00000000 
 6139 0010 00000000 		.quad	0
 6139      00000000 
 6140 0018 00000000 		.quad	0
 6140      00000000 
 6141 0020 00000000 		.quad	_ZN11Fl_Browser_4drawEv
 6141      00000000 
 6142 0028 00000000 		.quad	_ZN11Fl_Browser_6handleEi
 6142      00000000 
 6143 0030 00000000 		.quad	_ZN11Fl_Browser_6resizeEiiii
 6143      00000000 
 6144 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 6144      00000000 
 6145 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 6145      00000000 
 6146 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 6146      00000000 
 6147 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 6147      00000000 
 6148 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 6148      00000000 
 6149 0060 00000000 		.quad	__cxa_pure_virtual
 6149      00000000 
 6150 0068 00000000 		.quad	__cxa_pure_virtual
 6150      00000000 
 6151 0070 00000000 		.quad	__cxa_pure_virtual
 6151      00000000 
 6152 0078 00000000 		.quad	_ZNK11Fl_Browser_9item_lastEv
 6152      00000000 
 6153 0080 00000000 		.quad	__cxa_pure_virtual
 6153      00000000 
 6154 0088 00000000 		.quad	__cxa_pure_virtual
 6154      00000000 
 6155 0090 00000000 		.quad	_ZNK11Fl_Browser_17item_quick_heightEPv
 6155      00000000 
 6156 0098 00000000 		.quad	__cxa_pure_virtual
 6156      00000000 
 6157 00a0 00000000 		.quad	_ZNK11Fl_Browser_9item_textEPv
 6157      00000000 
 6158 00a8 00000000 		.quad	_ZN11Fl_Browser_9item_swapEPvS0_
 6158      00000000 
 6159 00b0 00000000 		.quad	_ZNK11Fl_Browser_7item_atEi
 6159      00000000 
 6160 00b8 00000000 		.quad	_ZNK11Fl_Browser_10full_widthEv
 6160      00000000 
 6161 00c0 00000000 		.quad	_ZNK11Fl_Browser_11full_heightEv
 6161      00000000 
 6162 00c8 00000000 		.quad	_ZNK11Fl_Browser_11incr_heightEv
 6162      00000000 
 6163 00d0 00000000 		.quad	_ZN11Fl_Browser_11item_selectEPvi
 6163      00000000 
 6164 00d8 00000000 		.quad	_ZNK11Fl_Browser_13item_selectedEPv
 6164      00000000 
 6165              		.text
 6166              	.Letext0:
 6167              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 6168              	.Letext_cold0:
 6169              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 6170              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 6171              		.file 10 "/usr/include/libio.h"
 6172              		.file 11 "fltk-1.3.4-1/FL/fl_types.h"
 6173              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
 6174              		.file 13 "fltk-1.3.4-1/FL/Fl_Image.H"
 6175              		.file 14 "fltk-1.3.4-1/FL/Fl_Device.H"
 6176              		.file 15 "fltk-1.3.4-1/FL/Fl_Valuator.H"
 6177              		.file 16 "/usr/include/stdio.h"
 6178              		.file 17 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Browser_.cxx
     /tmp/ccnL7bwE.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccnL7bwE.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccnL7bwE.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccnL7bwE.s:90     .text._ZNK11Fl_Browser_9item_lastEv:0000000000000000 _ZNK11Fl_Browser_9item_lastEv
     /tmp/ccnL7bwE.s:115    .text._ZNK11Fl_Browser_9item_textEPv:0000000000000000 _ZNK11Fl_Browser_9item_textEPv
     /tmp/ccnL7bwE.s:139    .text._ZN11Fl_Browser_9item_swapEPvS0_:0000000000000000 _ZN11Fl_Browser_9item_swapEPvS0_
     /tmp/ccnL7bwE.s:161    .text._ZNK11Fl_Browser_7item_atEi:0000000000000000 _ZNK11Fl_Browser_7item_atEi
     /tmp/ccnL7bwE.s:185    .text._ZNK11Fl_Browser_17item_quick_heightEPv:0000000000000000 _ZNK11Fl_Browser_17item_quick_heightEPv
     /tmp/ccnL7bwE.s:212    .text._ZNK11Fl_Browser_11incr_heightEv:0000000000000000 _ZNK11Fl_Browser_11incr_heightEv
     /tmp/ccnL7bwE.s:263    .text._ZNK11Fl_Browser_11full_heightEv:0000000000000000 _ZNK11Fl_Browser_11full_heightEv
     /tmp/ccnL7bwE.s:350    .text._ZNK11Fl_Browser_10full_widthEv:0000000000000000 _ZNK11Fl_Browser_10full_widthEv
     /tmp/ccnL7bwE.s:375    .text._ZN11Fl_Browser_11item_selectEPvi:0000000000000000 _ZN11Fl_Browser_11item_selectEPvi
     /tmp/ccnL7bwE.s:397    .text._ZNK11Fl_Browser_13item_selectedEPv:0000000000000000 _ZNK11Fl_Browser_13item_selectedEPv
     /tmp/ccnL7bwE.s:423    .text._ZNK11Fl_Browser_4bboxERiS0_S0_S0_:0000000000000000 _ZNK11Fl_Browser_4bboxERiS0_S0_S0_
     /tmp/ccnL7bwE.s:622    .text._ZNK11Fl_Browser_8leftedgeEv:0000000000000000 _ZNK11Fl_Browser_8leftedgeEv
     /tmp/ccnL7bwE.s:670    .text._ZN11Fl_Browser_11redraw_lineEPv:0000000000000000 _ZN11Fl_Browser_11redraw_lineEPv
     /tmp/ccnL7bwE.s:726    .text._ZN11Fl_Browser_10update_topEv:0000000000000000 _ZN11Fl_Browser_10update_topEv
     /tmp/ccnL7bwE.s:1115   .text._ZN11Fl_Browser_4drawEv:0000000000000000 _ZN11Fl_Browser_4drawEv
     /tmp/ccnL7bwE.s:2309   .text._ZN11Fl_Browser_8positionEi:0000000000000000 _ZN11Fl_Browser_8positionEi
     /tmp/ccnL7bwE.s:2354   .text._ZL18scrollbar_callbackP9Fl_WidgetPv:0000000000000000 _ZL18scrollbar_callbackP9Fl_WidgetPv
     /tmp/ccnL7bwE.s:2381   .text._ZN11Fl_Browser_9hpositionEi:0000000000000000 _ZN11Fl_Browser_9hpositionEi
     /tmp/ccnL7bwE.s:2426   .text._ZL19hscrollbar_callbackP9Fl_WidgetPv:0000000000000000 _ZL19hscrollbar_callbackP9Fl_WidgetPv
     /tmp/ccnL7bwE.s:2453   .text._ZNK11Fl_Browser_9displayedEPv:0000000000000000 _ZNK11Fl_Browser_9displayedEPv
     /tmp/ccnL7bwE.s:2582   .text._ZN11Fl_Browser_7displayEPv:0000000000000000 _ZN11Fl_Browser_7displayEPv
     /tmp/ccnL7bwE.s:2912   .text._ZN11Fl_Browser_8new_listEv:0000000000000000 _ZN11Fl_Browser_8new_listEv
     /tmp/ccnL7bwE.s:2964   .text._ZN11Fl_Browser_8deletingEPv:0000000000000000 _ZN11Fl_Browser_8deletingEPv
     /tmp/ccnL7bwE.s:3093   .text._ZN11Fl_Browser_9replacingEPvS0_:0000000000000000 _ZN11Fl_Browser_9replacingEPvS0_
     /tmp/ccnL7bwE.s:3187   .text._ZN11Fl_Browser_8swappingEPvS0_:0000000000000000 _ZN11Fl_Browser_8swappingEPvS0_
     /tmp/ccnL7bwE.s:3310   .text._ZN11Fl_Browser_9insertingEPvS0_:0000000000000000 _ZN11Fl_Browser_9insertingEPvS0_
     /tmp/ccnL7bwE.s:3397   .text._ZN11Fl_Browser_9find_itemEi:0000000000000000 _ZN11Fl_Browser_9find_itemEi
     /tmp/ccnL7bwE.s:3537   .text._ZN11Fl_Browser_6selectEPvii:0000000000000000 _ZN11Fl_Browser_6selectEPvii
     /tmp/ccnL7bwE.s:3832   .text._ZN11Fl_Browser_8deselectEi:0000000000000000 _ZN11Fl_Browser_8deselectEi
     /tmp/ccnL7bwE.s:4020   .text._ZN11Fl_Browser_11select_onlyEPvi:0000000000000000 _ZN11Fl_Browser_11select_onlyEPvi
     /tmp/ccnL7bwE.s:4196   .text._ZN11Fl_Browser_C2EiiiiPKc:0000000000000000 _ZN11Fl_Browser_C2EiiiiPKc
     /tmp/ccnL7bwE.s:6136   .rodata._ZTV11Fl_Browser_:0000000000000000 _ZTV11Fl_Browser_
     /tmp/ccnL7bwE.s:4196   .text._ZN11Fl_Browser_C2EiiiiPKc:0000000000000000 _ZN11Fl_Browser_C1EiiiiPKc
     /tmp/ccnL7bwE.s:4339   .text._ZN11Fl_Browser_4sortEi:0000000000000000 _ZN11Fl_Browser_4sortEi
     /tmp/ccnL7bwE.s:4608   .text._ZN11Fl_Browser_6resizeEiiii:0000000000000000 _ZN11Fl_Browser_6resizeEiiii
     /tmp/ccnL7bwE.s:4746   .text._ZN11Fl_Browser_6handleEi:0000000000000000 _ZN11Fl_Browser_6handleEi
     /tmp/ccnL7bwE.s:6113   .bss._ZZN11Fl_Browser_6handleEiE2py:0000000000000000 _ZZN11Fl_Browser_6handleEiE2py
     /tmp/ccnL7bwE.s:6107   .bss._ZZN11Fl_Browser_6handleEiE6change:0000000000000000 _ZZN11Fl_Browser_6handleEiE6change
     /tmp/ccnL7bwE.s:6102   .bss._ZZN11Fl_Browser_6handleEiE8whichway:0000000000000000 _ZZN11Fl_Browser_6handleEiE8whichway
     /tmp/ccnL7bwE.s:6120   .rodata._ZTS11Fl_Browser_:0000000000000000 _ZTS11Fl_Browser_
     /tmp/ccnL7bwE.s:6127   .rodata._ZTI11Fl_Browser_:0000000000000000 _ZTI11Fl_Browser_
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

UNDEFINED SYMBOLS
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN2Fl14scrollbar_sizeEv
__stack_chk_fail
_ZN9Fl_Widget6damageEh
fl_graphics_driver
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_ZNK9Fl_Widget8active_rEv
_ZN9Fl_Widget13damage_resizeEiiii
_ZN9Fl_Slider11scrollvalueEiiii
_ZNK8Fl_Group10draw_childER9Fl_Widget
_ZN2Fl6focus_E
_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
_Z11fl_inactivej
_ZNK8Fl_Group12update_childER9Fl_Widget
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
_ZN17Fl_Widget_TrackerD1Ev
_ZN8Fl_GroupC2EiiiiPKc
_ZN12Fl_ScrollbarC1EiiiiPKc
FL_NORMAL_SIZE
_ZN8Fl_Group3endEv
strcmp
_ZN9Fl_Widget6resizeEiiii
_ZN8Fl_Group6handleEi
_ZN2Fl6optionENS_9Fl_OptionE
_ZN9Fl_Widget6redrawEv
_ZN2Fl8e_keysymE
_ZN2Fl7e_stateE
_ZN2Fl3e_yE
_ZN2Fl3e_xE
_ZN2Fl8e_clicksE
_ZN2Fl12event_insideEiiii
_ZN2Fl5focusEP9Fl_Widget
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Group
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
__cxa_pure_virtual
