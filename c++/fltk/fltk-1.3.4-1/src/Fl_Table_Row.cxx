   1              		.file	"Fl_Table_Row.cxx"
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
  81              		.section	.text.unlikely._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii,"axG",@progbits,_ZN8Fl_Tab
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii,"axG",@progbits,_ZN8Fl_Table9draw_c
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.weak	_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii
  90              	_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii:
  91              	.LFB513:
  92              		.file 3 "fltk-1.3.4-1/FL/Fl_Table.H"
   1:fltk-1.3.4-1/FL/Fl_Table.H **** //
   2:fltk-1.3.4-1/FL/Fl_Table.H **** // "$Id: Fl_Table.H 11094 2016-01-31 02:49:56Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Table.H **** //
   4:fltk-1.3.4-1/FL/Fl_Table.H **** // Fl_Table -- A table widget
   5:fltk-1.3.4-1/FL/Fl_Table.H **** //
   6:fltk-1.3.4-1/FL/Fl_Table.H **** // Copyright 2002 by Greg Ercolano.
   7:fltk-1.3.4-1/FL/Fl_Table.H **** // Copyright (c) 2004 O'ksi'D
   8:fltk-1.3.4-1/FL/Fl_Table.H **** //
   9:fltk-1.3.4-1/FL/Fl_Table.H **** // This library is free software. Distribution and use rights are outlined in
  10:fltk-1.3.4-1/FL/Fl_Table.H **** // the file "COPYING" which should have been included with this file.  If this
  11:fltk-1.3.4-1/FL/Fl_Table.H **** // file is missing or damaged, see the license at:
  12:fltk-1.3.4-1/FL/Fl_Table.H **** //
  13:fltk-1.3.4-1/FL/Fl_Table.H **** //     http://www.fltk.org/COPYING.php
  14:fltk-1.3.4-1/FL/Fl_Table.H **** //
  15:fltk-1.3.4-1/FL/Fl_Table.H **** // Please report all bugs and problems on the following page:
  16:fltk-1.3.4-1/FL/Fl_Table.H **** //
  17:fltk-1.3.4-1/FL/Fl_Table.H **** //     http://www.fltk.org/str.php
  18:fltk-1.3.4-1/FL/Fl_Table.H **** //
  19:fltk-1.3.4-1/FL/Fl_Table.H **** 
  20:fltk-1.3.4-1/FL/Fl_Table.H **** #ifndef _FL_TABLE_H
  21:fltk-1.3.4-1/FL/Fl_Table.H **** #define _FL_TABLE_H
  22:fltk-1.3.4-1/FL/Fl_Table.H **** 
  23:fltk-1.3.4-1/FL/Fl_Table.H **** #include <sys/types.h>
  24:fltk-1.3.4-1/FL/Fl_Table.H **** #include <string.h>		// memcpy
  25:fltk-1.3.4-1/FL/Fl_Table.H **** #ifdef WIN32
  26:fltk-1.3.4-1/FL/Fl_Table.H **** #include <malloc.h>		// WINDOWS: malloc/realloc
  27:fltk-1.3.4-1/FL/Fl_Table.H **** #else /*WIN32*/
  28:fltk-1.3.4-1/FL/Fl_Table.H **** #include <stdlib.h>		// UNIX: malloc/realloc
  29:fltk-1.3.4-1/FL/Fl_Table.H **** #endif /*WIN32*/
  30:fltk-1.3.4-1/FL/Fl_Table.H **** 
  31:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl.H>
  32:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Group.H>
  33:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Scroll.H>
  34:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Box.H>
  35:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Scrollbar.H>
  36:fltk-1.3.4-1/FL/Fl_Table.H **** 
  37:fltk-1.3.4-1/FL/Fl_Table.H **** /**
  38:fltk-1.3.4-1/FL/Fl_Table.H ****  A table of widgets or other content.
  39:fltk-1.3.4-1/FL/Fl_Table.H ****  
  40:fltk-1.3.4-1/FL/Fl_Table.H ****  This is the base class for table widgets.
  41:fltk-1.3.4-1/FL/Fl_Table.H ****  
  42:fltk-1.3.4-1/FL/Fl_Table.H ****  To be useful it must be subclassed and several virtual functions defined.
  43:fltk-1.3.4-1/FL/Fl_Table.H ****  Normally applications use widgets derived from this widget, and do not use this 
  44:fltk-1.3.4-1/FL/Fl_Table.H ****  widget directly; this widget is usually too low level to be used directly by 
  45:fltk-1.3.4-1/FL/Fl_Table.H ****  applications.
  46:fltk-1.3.4-1/FL/Fl_Table.H ****  
  47:fltk-1.3.4-1/FL/Fl_Table.H ****  This widget does \em not handle the data in the table. The draw_cell()
  48:fltk-1.3.4-1/FL/Fl_Table.H ****  method must be overridden by a subclass to manage drawing the contents of 
  49:fltk-1.3.4-1/FL/Fl_Table.H ****  the cells.
  50:fltk-1.3.4-1/FL/Fl_Table.H ****  
  51:fltk-1.3.4-1/FL/Fl_Table.H ****  This widget can be used in several ways:
  52:fltk-1.3.4-1/FL/Fl_Table.H ****  
  53:fltk-1.3.4-1/FL/Fl_Table.H ****  - As a custom widget; see examples/table-simple.cxx and test/table.cxx.
  54:fltk-1.3.4-1/FL/Fl_Table.H ****    Very optimal for even extremely large tables.
  55:fltk-1.3.4-1/FL/Fl_Table.H ****  - As a table made up of a single FLTK widget instanced all over the table,
  56:fltk-1.3.4-1/FL/Fl_Table.H ****    simulating a numeric spreadsheet. See examples/table-spreadsheet.cxx and
  57:fltk-1.3.4-1/FL/Fl_Table.H ****    examples/table-spreadsheet-with-keyboard-nav.cxx. Optimal for large tables.
  58:fltk-1.3.4-1/FL/Fl_Table.H ****  - As a regular container of FLTK widgets, one widget per cell.
  59:fltk-1.3.4-1/FL/Fl_Table.H ****    See examples/table-as-container.cxx. \em Not recommended for large tables.
  60:fltk-1.3.4-1/FL/Fl_Table.H ****  
  61:fltk-1.3.4-1/FL/Fl_Table.H ****  \image html table-simple.png
  62:fltk-1.3.4-1/FL/Fl_Table.H ****  \image latex table-simple.png "table-simple example" width=6cm
  63:fltk-1.3.4-1/FL/Fl_Table.H **** 
  64:fltk-1.3.4-1/FL/Fl_Table.H ****  \image html table-as-container.png
  65:fltk-1.3.4-1/FL/Fl_Table.H ****  \image latex table-as-container.png "table-as-container example" width=6cm
  66:fltk-1.3.4-1/FL/Fl_Table.H ****  
  67:fltk-1.3.4-1/FL/Fl_Table.H ****  When acting as part of a custom widget, events on the cells and/or headings
  68:fltk-1.3.4-1/FL/Fl_Table.H ****  generate callbacks when they are clicked by the user. You control when events 
  69:fltk-1.3.4-1/FL/Fl_Table.H ****  are generated based on the setting for Fl_Table::when().
  70:fltk-1.3.4-1/FL/Fl_Table.H ****  
  71:fltk-1.3.4-1/FL/Fl_Table.H ****  When acting as a container for FLTK widgets, the FLTK widgets maintain 
  72:fltk-1.3.4-1/FL/Fl_Table.H ****  themselves. Although the draw_cell() method must be overridden, its contents 
  73:fltk-1.3.4-1/FL/Fl_Table.H ****  can be very simple. See the draw_cell() code in examples/table-simple.cxx.
  74:fltk-1.3.4-1/FL/Fl_Table.H ****  
  75:fltk-1.3.4-1/FL/Fl_Table.H ****  The following variables are available to classes deriving from Fl_Table:
  76:fltk-1.3.4-1/FL/Fl_Table.H ****  
  77:fltk-1.3.4-1/FL/Fl_Table.H ****  \image html table-dimensions.png
  78:fltk-1.3.4-1/FL/Fl_Table.H ****  \image latex table-dimensions.png "Fl_Table Dimensions" width=6cm
  79:fltk-1.3.4-1/FL/Fl_Table.H ****  
  80:fltk-1.3.4-1/FL/Fl_Table.H ****  <table border=0>
  81:fltk-1.3.4-1/FL/Fl_Table.H ****  <tr><td>x()/y()/w()/h()</td>
  82:fltk-1.3.4-1/FL/Fl_Table.H ****  <td>Fl_Table widget's outer dimension. The outer edge of the border of the 
  83:fltk-1.3.4-1/FL/Fl_Table.H ****  Fl_Table. (Red in the diagram above)</td></tr>
  84:fltk-1.3.4-1/FL/Fl_Table.H ****  
  85:fltk-1.3.4-1/FL/Fl_Table.H ****  <tr><td>wix/wiy/wiw/wih</td>
  86:fltk-1.3.4-1/FL/Fl_Table.H ****  <td>Fl_Table widget's inner dimension. The inner edge of the border of the 
  87:fltk-1.3.4-1/FL/Fl_Table.H ****  Fl_Table. eg. if the Fl_Table's box() is FL_NO_BOX, these values are the same 
  88:fltk-1.3.4-1/FL/Fl_Table.H ****  as x()/y()/w()/h(). (Yellow in the diagram above)</td></tr>
  89:fltk-1.3.4-1/FL/Fl_Table.H ****  
  90:fltk-1.3.4-1/FL/Fl_Table.H ****  <tr><td>tox/toy/tow/toh</td>
  91:fltk-1.3.4-1/FL/Fl_Table.H ****  <td>The table's outer dimension. The outer edge of the border around the cells,
  92:fltk-1.3.4-1/FL/Fl_Table.H ****  but inside the row/col headings and scrollbars. (Green in the diagram above)
  93:fltk-1.3.4-1/FL/Fl_Table.H ****  </td></tr>
  94:fltk-1.3.4-1/FL/Fl_Table.H ****  
  95:fltk-1.3.4-1/FL/Fl_Table.H ****  <tr><td>tix/tiy/tiw/tih</td>
  96:fltk-1.3.4-1/FL/Fl_Table.H ****  <td>The table's inner dimension. The inner edge of the border around the cells,
  97:fltk-1.3.4-1/FL/Fl_Table.H ****  but inside the row/col headings and scrollbars. AKA the table's clip region. 
  98:fltk-1.3.4-1/FL/Fl_Table.H ****  eg. if the table_box() is FL_NO_BOX, these values are the same as
  99:fltk-1.3.4-1/FL/Fl_Table.H ****  tox/toy/tow/toh. (Blue in the diagram above)
 100:fltk-1.3.4-1/FL/Fl_Table.H ****  </td></tr></table>
 101:fltk-1.3.4-1/FL/Fl_Table.H ****  
 102:fltk-1.3.4-1/FL/Fl_Table.H ****  CORE DEVELOPERS
 103:fltk-1.3.4-1/FL/Fl_Table.H ****  
 104:fltk-1.3.4-1/FL/Fl_Table.H ****  - Greg Ercolano : 12/16/2002 - initial implementation 12/16/02. Fl_Table, Fl_Table_Row, docs.
 105:fltk-1.3.4-1/FL/Fl_Table.H ****  - Jean-Marc Lienher : 02/22/2004 - added keyboard nav + mouse selection, and ported Fl_Table into 
 106:fltk-1.3.4-1/FL/Fl_Table.H ****  
 107:fltk-1.3.4-1/FL/Fl_Table.H ****  OTHER CONTRIBUTORS
 108:fltk-1.3.4-1/FL/Fl_Table.H ****  
 109:fltk-1.3.4-1/FL/Fl_Table.H ****  - Inspired by the Feb 2000 version of FLVW's Flvw_Table widget. Mucho thanks to those folks.
 110:fltk-1.3.4-1/FL/Fl_Table.H ****  - Mister Satan : 04/07/2003 - MinGW porting mods, and singleinput.cxx; a cool Fl_Input oriented sp
 111:fltk-1.3.4-1/FL/Fl_Table.H ****  - Marek Paliwoda : 01/08/2003 - Porting mods for Borland
 112:fltk-1.3.4-1/FL/Fl_Table.H ****  - Ori Berger : 03/16/2006 - Optimizations for >500k rows/cols
 113:fltk-1.3.4-1/FL/Fl_Table.H ****  
 114:fltk-1.3.4-1/FL/Fl_Table.H ****  LICENSE
 115:fltk-1.3.4-1/FL/Fl_Table.H ****  
 116:fltk-1.3.4-1/FL/Fl_Table.H ****  Greg added the following license to the original distribution of Fl_Table. He 
 117:fltk-1.3.4-1/FL/Fl_Table.H ****  kindly gave his permission to integrate Fl_Table and Fl_Table_Row into FLTK,
 118:fltk-1.3.4-1/FL/Fl_Table.H ****  allowing FLTK license to apply while his widgets are part of the library.
 119:fltk-1.3.4-1/FL/Fl_Table.H ****  
 120:fltk-1.3.4-1/FL/Fl_Table.H ****  If used on its own, this is the license that applies:
 121:fltk-1.3.4-1/FL/Fl_Table.H **** 
 122:fltk-1.3.4-1/FL/Fl_Table.H ****  \verbatim 
 123:fltk-1.3.4-1/FL/Fl_Table.H ****  Fl_Table License
 124:fltk-1.3.4-1/FL/Fl_Table.H ****  December 16, 2002
 125:fltk-1.3.4-1/FL/Fl_Table.H ****  
 126:fltk-1.3.4-1/FL/Fl_Table.H ****  The Fl_Table library and included programs are provided under the terms
 127:fltk-1.3.4-1/FL/Fl_Table.H ****  of the GNU Library General Public License (LGPL) with the following
 128:fltk-1.3.4-1/FL/Fl_Table.H ****  exceptions:
 129:fltk-1.3.4-1/FL/Fl_Table.H ****  
 130:fltk-1.3.4-1/FL/Fl_Table.H ****  1. Modifications to the Fl_Table configure script, config
 131:fltk-1.3.4-1/FL/Fl_Table.H ****  header file, and makefiles by themselves to support
 132:fltk-1.3.4-1/FL/Fl_Table.H ****  a specific platform do not constitute a modified or
 133:fltk-1.3.4-1/FL/Fl_Table.H ****  derivative work.
 134:fltk-1.3.4-1/FL/Fl_Table.H ****  
 135:fltk-1.3.4-1/FL/Fl_Table.H ****  The authors do request that such modifications be
 136:fltk-1.3.4-1/FL/Fl_Table.H ****  contributed to the Fl_Table project - send all
 137:fltk-1.3.4-1/FL/Fl_Table.H ****  contributions to "erco at seriss dot com".
 138:fltk-1.3.4-1/FL/Fl_Table.H ****  
 139:fltk-1.3.4-1/FL/Fl_Table.H ****  2. Widgets that are subclassed from Fl_Table widgets do not
 140:fltk-1.3.4-1/FL/Fl_Table.H ****  constitute a derivative work.
 141:fltk-1.3.4-1/FL/Fl_Table.H ****  
 142:fltk-1.3.4-1/FL/Fl_Table.H ****  3. Static linking of applications and widgets to the
 143:fltk-1.3.4-1/FL/Fl_Table.H ****  Fl_Table library does not constitute a derivative work
 144:fltk-1.3.4-1/FL/Fl_Table.H ****  and does not require the author to provide source
 145:fltk-1.3.4-1/FL/Fl_Table.H ****  code for the application or widget, use the shared
 146:fltk-1.3.4-1/FL/Fl_Table.H ****  Fl_Table libraries, or link their applications or
 147:fltk-1.3.4-1/FL/Fl_Table.H ****  widgets against a user-supplied version of Fl_Table.
 148:fltk-1.3.4-1/FL/Fl_Table.H ****  
 149:fltk-1.3.4-1/FL/Fl_Table.H ****  If you link the application or widget to a modified
 150:fltk-1.3.4-1/FL/Fl_Table.H ****  version of Fl_Table, then the changes to Fl_Table must be
 151:fltk-1.3.4-1/FL/Fl_Table.H ****  provided under the terms of the LGPL in sections
 152:fltk-1.3.4-1/FL/Fl_Table.H ****  1, 2, and 4.
 153:fltk-1.3.4-1/FL/Fl_Table.H ****  
 154:fltk-1.3.4-1/FL/Fl_Table.H ****  4. You do not have to provide a copy of the Fl_Table license
 155:fltk-1.3.4-1/FL/Fl_Table.H ****  with programs that are linked to the Fl_Table library, nor
 156:fltk-1.3.4-1/FL/Fl_Table.H ****  do you have to identify the Fl_Table license in your
 157:fltk-1.3.4-1/FL/Fl_Table.H ****  program or documentation as required by section 6
 158:fltk-1.3.4-1/FL/Fl_Table.H ****  of the LGPL.
 159:fltk-1.3.4-1/FL/Fl_Table.H ****  
 160:fltk-1.3.4-1/FL/Fl_Table.H ****  However, programs must still identify their use of Fl_Table.
 161:fltk-1.3.4-1/FL/Fl_Table.H ****  The following example statement can be included in user
 162:fltk-1.3.4-1/FL/Fl_Table.H ****  documentation to satisfy this requirement:
 163:fltk-1.3.4-1/FL/Fl_Table.H ****  
 164:fltk-1.3.4-1/FL/Fl_Table.H ****  [program/widget] is based in part on the work of
 165:fltk-1.3.4-1/FL/Fl_Table.H ****  the Fl_Table project http://seriss.com/people/erco/fltk/Fl_Table/
 166:fltk-1.3.4-1/FL/Fl_Table.H ****  \endverbatim
 167:fltk-1.3.4-1/FL/Fl_Table.H ****  
 168:fltk-1.3.4-1/FL/Fl_Table.H ****  
 169:fltk-1.3.4-1/FL/Fl_Table.H ****  */
 170:fltk-1.3.4-1/FL/Fl_Table.H **** class FL_EXPORT Fl_Table : public Fl_Group {
 171:fltk-1.3.4-1/FL/Fl_Table.H **** public:
 172:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 173:fltk-1.3.4-1/FL/Fl_Table.H ****    The context bit flags for Fl_Table related callbacks.
 174:fltk-1.3.4-1/FL/Fl_Table.H **** 
 175:fltk-1.3.4-1/FL/Fl_Table.H ****    Used in draw_cell(), callback(), etc.
 176:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 177:fltk-1.3.4-1/FL/Fl_Table.H ****   enum TableContext {
 178:fltk-1.3.4-1/FL/Fl_Table.H ****     CONTEXT_NONE       = 0,	///< no known context
 179:fltk-1.3.4-1/FL/Fl_Table.H ****     CONTEXT_STARTPAGE  = 0x01,	///< before a page is redrawn
 180:fltk-1.3.4-1/FL/Fl_Table.H ****     CONTEXT_ENDPAGE    = 0x02,	///< after a page is redrawn
 181:fltk-1.3.4-1/FL/Fl_Table.H ****     CONTEXT_ROW_HEADER = 0x04,	///< in the row header
 182:fltk-1.3.4-1/FL/Fl_Table.H ****     CONTEXT_COL_HEADER = 0x08,	///< in the col header
 183:fltk-1.3.4-1/FL/Fl_Table.H ****     CONTEXT_CELL       = 0x10,	///< in one of the cells
 184:fltk-1.3.4-1/FL/Fl_Table.H ****     CONTEXT_TABLE      = 0x20,	///< in a dead zone of table
 185:fltk-1.3.4-1/FL/Fl_Table.H ****     CONTEXT_RC_RESIZE  = 0x40 	///< column or row being resized
 186:fltk-1.3.4-1/FL/Fl_Table.H ****   };
 187:fltk-1.3.4-1/FL/Fl_Table.H ****   
 188:fltk-1.3.4-1/FL/Fl_Table.H **** private:
 189:fltk-1.3.4-1/FL/Fl_Table.H ****   int _rows, _cols;	// total rows/cols
 190:fltk-1.3.4-1/FL/Fl_Table.H ****   int _row_header_w;	// width of row header
 191:fltk-1.3.4-1/FL/Fl_Table.H ****   int _col_header_h;	// height of column header
 192:fltk-1.3.4-1/FL/Fl_Table.H ****   int _row_position;	// last row_position set (not necessarily == toprow!)
 193:fltk-1.3.4-1/FL/Fl_Table.H ****   int _col_position;	// last col_position set (not necessarily == leftcol!)
 194:fltk-1.3.4-1/FL/Fl_Table.H ****   
 195:fltk-1.3.4-1/FL/Fl_Table.H ****   char _row_header;	// row header enabled?
 196:fltk-1.3.4-1/FL/Fl_Table.H ****   char _col_header;	// col header enabled?
 197:fltk-1.3.4-1/FL/Fl_Table.H ****   char _row_resize;	// row resizing enabled?
 198:fltk-1.3.4-1/FL/Fl_Table.H ****   char _col_resize;	// col resizing enabled?
 199:fltk-1.3.4-1/FL/Fl_Table.H ****   int _row_resize_min;	// row minimum resizing height (default=1)
 200:fltk-1.3.4-1/FL/Fl_Table.H ****   int _col_resize_min;	// col minimum resizing width (default=1)
 201:fltk-1.3.4-1/FL/Fl_Table.H ****   
 202:fltk-1.3.4-1/FL/Fl_Table.H ****   // OPTIMIZATION: partial row/column redraw variables
 203:fltk-1.3.4-1/FL/Fl_Table.H ****   int _redraw_toprow;
 204:fltk-1.3.4-1/FL/Fl_Table.H ****   int _redraw_botrow;
 205:fltk-1.3.4-1/FL/Fl_Table.H ****   int _redraw_leftcol;
 206:fltk-1.3.4-1/FL/Fl_Table.H ****   int _redraw_rightcol;
 207:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Color _row_header_color;
 208:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Color _col_header_color;
 209:fltk-1.3.4-1/FL/Fl_Table.H ****   
 210:fltk-1.3.4-1/FL/Fl_Table.H ****   int _auto_drag;
 211:fltk-1.3.4-1/FL/Fl_Table.H ****   int _selecting;
 212:fltk-1.3.4-1/FL/Fl_Table.H **** #if FLTK_ABI_VERSION >= 10301
 213:fltk-1.3.4-1/FL/Fl_Table.H ****   int _scrollbar_size;
 214:fltk-1.3.4-1/FL/Fl_Table.H **** #endif
 215:fltk-1.3.4-1/FL/Fl_Table.H **** #if FLTK_ABI_VERSION >= 10303
 216:fltk-1.3.4-1/FL/Fl_Table.H ****   enum {
 217:fltk-1.3.4-1/FL/Fl_Table.H ****     TABCELLNAV = 1<<0,			///> tab cell navigation flag
 218:fltk-1.3.4-1/FL/Fl_Table.H ****   };
 219:fltk-1.3.4-1/FL/Fl_Table.H ****   unsigned int flags_;
 220:fltk-1.3.4-1/FL/Fl_Table.H **** #endif
 221:fltk-1.3.4-1/FL/Fl_Table.H ****   
 222:fltk-1.3.4-1/FL/Fl_Table.H ****   // An STL-ish vector without templates
 223:fltk-1.3.4-1/FL/Fl_Table.H ****   class FL_EXPORT IntVector {
 224:fltk-1.3.4-1/FL/Fl_Table.H ****     int *arr;
 225:fltk-1.3.4-1/FL/Fl_Table.H ****     unsigned int _size;
 226:fltk-1.3.4-1/FL/Fl_Table.H ****     void init() {
 227:fltk-1.3.4-1/FL/Fl_Table.H ****       arr = NULL;
 228:fltk-1.3.4-1/FL/Fl_Table.H ****       _size = 0;
 229:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 230:fltk-1.3.4-1/FL/Fl_Table.H ****     void copy(int *newarr, unsigned int newsize) {
 231:fltk-1.3.4-1/FL/Fl_Table.H ****       size(newsize);
 232:fltk-1.3.4-1/FL/Fl_Table.H ****       memcpy(arr, newarr, newsize * sizeof(int));
 233:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 234:fltk-1.3.4-1/FL/Fl_Table.H ****   public:
 235:fltk-1.3.4-1/FL/Fl_Table.H ****     IntVector() { init(); }					// CTOR
 236:fltk-1.3.4-1/FL/Fl_Table.H ****     ~IntVector() { if ( arr ) free(arr); arr = NULL; }		// DTOR
 237:fltk-1.3.4-1/FL/Fl_Table.H ****     IntVector(IntVector&o) { init(); copy(o.arr, o._size); }	// COPY CTOR
 238:fltk-1.3.4-1/FL/Fl_Table.H ****     IntVector& operator=(IntVector&o) {				// ASSIGN
 239:fltk-1.3.4-1/FL/Fl_Table.H ****       init();
 240:fltk-1.3.4-1/FL/Fl_Table.H ****       copy(o.arr, o._size);
 241:fltk-1.3.4-1/FL/Fl_Table.H ****       return(*this);
 242:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 243:fltk-1.3.4-1/FL/Fl_Table.H ****     int operator[](int x) const { return(arr[x]); }
 244:fltk-1.3.4-1/FL/Fl_Table.H ****     int& operator[](int x) { return(arr[x]); }
 245:fltk-1.3.4-1/FL/Fl_Table.H ****     unsigned int size() { return(_size); }
 246:fltk-1.3.4-1/FL/Fl_Table.H ****     void size(unsigned int count) {
 247:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( count != _size ) {
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         arr = (int*)realloc(arr, count * sizeof(int));
 249:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 250:fltk-1.3.4-1/FL/Fl_Table.H ****       }
 251:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 252:fltk-1.3.4-1/FL/Fl_Table.H ****     int pop_back() { int tmp = arr[_size-1]; _size--; return(tmp); }
 253:fltk-1.3.4-1/FL/Fl_Table.H ****     void push_back(int val) { unsigned int x = _size; size(_size+1); arr[x] = val; }
 254:fltk-1.3.4-1/FL/Fl_Table.H ****     int back() { return(arr[_size-1]); }
 255:fltk-1.3.4-1/FL/Fl_Table.H ****   };
 256:fltk-1.3.4-1/FL/Fl_Table.H ****   
 257:fltk-1.3.4-1/FL/Fl_Table.H ****   IntVector _colwidths;			// column widths in pixels
 258:fltk-1.3.4-1/FL/Fl_Table.H ****   IntVector _rowheights;		// row heights in pixels
 259:fltk-1.3.4-1/FL/Fl_Table.H ****   
 260:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Cursor _last_cursor;		// last mouse cursor before changed to 'resize' cursor
 261:fltk-1.3.4-1/FL/Fl_Table.H ****   
 262:fltk-1.3.4-1/FL/Fl_Table.H ****   // EVENT CALLBACK DATA
 263:fltk-1.3.4-1/FL/Fl_Table.H ****   TableContext _callback_context;	// event context
 264:fltk-1.3.4-1/FL/Fl_Table.H ****   int _callback_row, _callback_col;	// event row/col
 265:fltk-1.3.4-1/FL/Fl_Table.H ****   
 266:fltk-1.3.4-1/FL/Fl_Table.H ****   // handle() state variables.
 267:fltk-1.3.4-1/FL/Fl_Table.H ****   //    Put here instead of local statics in handle(), so more
 268:fltk-1.3.4-1/FL/Fl_Table.H ****   //    than one Fl_Table can exist without crosstalk between them.
 269:fltk-1.3.4-1/FL/Fl_Table.H ****   //
 270:fltk-1.3.4-1/FL/Fl_Table.H ****   int _resizing_col;			// column being dragged
 271:fltk-1.3.4-1/FL/Fl_Table.H ****   int _resizing_row;			// row being dragged
 272:fltk-1.3.4-1/FL/Fl_Table.H ****   int _dragging_x;			// starting x position for horiz drag
 273:fltk-1.3.4-1/FL/Fl_Table.H ****   int _dragging_y;			// starting y position for vert drag
 274:fltk-1.3.4-1/FL/Fl_Table.H ****   int _last_row;			// last row we FL_PUSH'ed
 275:fltk-1.3.4-1/FL/Fl_Table.H ****   
 276:fltk-1.3.4-1/FL/Fl_Table.H ****   // Redraw single cell
 277:fltk-1.3.4-1/FL/Fl_Table.H ****   void _redraw_cell(TableContext context, int R, int C);
 278:fltk-1.3.4-1/FL/Fl_Table.H ****   
 279:fltk-1.3.4-1/FL/Fl_Table.H ****   void _start_auto_drag();
 280:fltk-1.3.4-1/FL/Fl_Table.H ****   void _stop_auto_drag();
 281:fltk-1.3.4-1/FL/Fl_Table.H ****   void _auto_drag_cb();
 282:fltk-1.3.4-1/FL/Fl_Table.H ****   static void _auto_drag_cb2(void *d);
 283:fltk-1.3.4-1/FL/Fl_Table.H ****   
 284:fltk-1.3.4-1/FL/Fl_Table.H **** protected:
 285:fltk-1.3.4-1/FL/Fl_Table.H ****   enum ResizeFlag {
 286:fltk-1.3.4-1/FL/Fl_Table.H ****     RESIZE_NONE      = 0,
 287:fltk-1.3.4-1/FL/Fl_Table.H ****     RESIZE_COL_LEFT  = 1,
 288:fltk-1.3.4-1/FL/Fl_Table.H ****     RESIZE_COL_RIGHT = 2,
 289:fltk-1.3.4-1/FL/Fl_Table.H ****     RESIZE_ROW_ABOVE = 3,
 290:fltk-1.3.4-1/FL/Fl_Table.H ****     RESIZE_ROW_BELOW = 4
 291:fltk-1.3.4-1/FL/Fl_Table.H ****   };
 292:fltk-1.3.4-1/FL/Fl_Table.H ****   
 293:fltk-1.3.4-1/FL/Fl_Table.H ****   int table_w, table_h;				// table's virtual size (in pixels)
 294:fltk-1.3.4-1/FL/Fl_Table.H ****   int toprow, botrow, leftcol, rightcol;	// four corners of viewable table
 295:fltk-1.3.4-1/FL/Fl_Table.H ****   
 296:fltk-1.3.4-1/FL/Fl_Table.H ****   // selection
 297:fltk-1.3.4-1/FL/Fl_Table.H ****   int current_row, current_col;
 298:fltk-1.3.4-1/FL/Fl_Table.H ****   int select_row, select_col;
 299:fltk-1.3.4-1/FL/Fl_Table.H ****   
 300:fltk-1.3.4-1/FL/Fl_Table.H ****   // OPTIMIZATION: Precomputed scroll positions for the toprow/leftcol
 301:fltk-1.3.4-1/FL/Fl_Table.H ****   int toprow_scrollpos;
 302:fltk-1.3.4-1/FL/Fl_Table.H ****   int leftcol_scrollpos;
 303:fltk-1.3.4-1/FL/Fl_Table.H ****   
 304:fltk-1.3.4-1/FL/Fl_Table.H ****   // Dimensions
 305:fltk-1.3.4-1/FL/Fl_Table.H ****   int tix, tiy, tiw, tih;			// data table inner dimension xywh
 306:fltk-1.3.4-1/FL/Fl_Table.H ****   int tox, toy, tow, toh;			// data table outer dimension xywh
 307:fltk-1.3.4-1/FL/Fl_Table.H ****   int wix, wiy, wiw, wih;			// widget inner dimension xywh
 308:fltk-1.3.4-1/FL/Fl_Table.H ****   
 309:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Scroll *table;				// container for child fltk widgets (if any)
 310:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Scrollbar *vscrollbar; 			// vertical scrollbar
 311:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Scrollbar *hscrollbar;			// horizontal scrollbar
 312:fltk-1.3.4-1/FL/Fl_Table.H ****   
 313:fltk-1.3.4-1/FL/Fl_Table.H ****   // Fltk
 314:fltk-1.3.4-1/FL/Fl_Table.H ****   int handle(int e);				// fltk handle() override
 315:fltk-1.3.4-1/FL/Fl_Table.H ****   
 316:fltk-1.3.4-1/FL/Fl_Table.H ****   // Class maintenance
 317:fltk-1.3.4-1/FL/Fl_Table.H ****   void recalc_dimensions();
 318:fltk-1.3.4-1/FL/Fl_Table.H ****   void table_resized();				// table resized; recalc
 319:fltk-1.3.4-1/FL/Fl_Table.H ****   void table_scrolled();			// table scrolled; recalc
 320:fltk-1.3.4-1/FL/Fl_Table.H ****   void get_bounds(TableContext context,		// return x/y/w/h bounds for context
 321:fltk-1.3.4-1/FL/Fl_Table.H ****                   int &X, int &Y, int &W, int &H);
 322:fltk-1.3.4-1/FL/Fl_Table.H ****   void change_cursor(Fl_Cursor newcursor);	// change mouse cursor to some other shape
 323:fltk-1.3.4-1/FL/Fl_Table.H ****   TableContext cursor2rowcol(int &R, int &C, ResizeFlag &resizeflag);
 324:fltk-1.3.4-1/FL/Fl_Table.H ****   // find r/c given current x/y event
 325:fltk-1.3.4-1/FL/Fl_Table.H ****   int find_cell(TableContext context,		// find cell's x/y/w/h given r/c
 326:fltk-1.3.4-1/FL/Fl_Table.H ****                 int R, int C, int &X, int &Y, int &W, int &H);
 327:fltk-1.3.4-1/FL/Fl_Table.H ****   int row_col_clamp(TableContext context, int &R, int &C);
 328:fltk-1.3.4-1/FL/Fl_Table.H ****   // clamp r/c to known universe
 329:fltk-1.3.4-1/FL/Fl_Table.H ****   
 330:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 331:fltk-1.3.4-1/FL/Fl_Table.H ****    Subclass should override this method to handle drawing the cells.
 332:fltk-1.3.4-1/FL/Fl_Table.H ****    
 333:fltk-1.3.4-1/FL/Fl_Table.H ****    This method will be called whenever the table is redrawn, once per cell.
 334:fltk-1.3.4-1/FL/Fl_Table.H ****    
 335:fltk-1.3.4-1/FL/Fl_Table.H ****    Only cells that are completely (or partially) visible will be told to draw.
 336:fltk-1.3.4-1/FL/Fl_Table.H ****    
 337:fltk-1.3.4-1/FL/Fl_Table.H ****    \p context will be one of the following:
 338:fltk-1.3.4-1/FL/Fl_Table.H ****    
 339:fltk-1.3.4-1/FL/Fl_Table.H ****    <table border=1>
 340:fltk-1.3.4-1/FL/Fl_Table.H ****    <tr>
 341:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>\p Fl_Table::CONTEXT_STARTPAGE</td>
 342:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>When table, or parts of the table, are about to be redrawn.<br>
 343:fltk-1.3.4-1/FL/Fl_Table.H ****        Use to initialize static data, such as font selections.<p>
 344:fltk-1.3.4-1/FL/Fl_Table.H ****        R/C will be zero,<br>
 345:fltk-1.3.4-1/FL/Fl_Table.H ****        X/Y/W/H will be the dimensions of the table's entire data area.<br>
 346:fltk-1.3.4-1/FL/Fl_Table.H ****        (Useful for locking a database before accessing; see
 347:fltk-1.3.4-1/FL/Fl_Table.H ****        also visible_cells())</td>
 348:fltk-1.3.4-1/FL/Fl_Table.H ****    </tr><tr>
 349:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>\p Fl_Table::CONTEXT_ENDPAGE</td>
 350:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>When table has completed being redrawn.<br>
 351:fltk-1.3.4-1/FL/Fl_Table.H ****        R/C will be zero, X/Y/W/H dimensions of table's data area.<br>
 352:fltk-1.3.4-1/FL/Fl_Table.H ****        (Useful for unlocking a database after accessing)</td>
 353:fltk-1.3.4-1/FL/Fl_Table.H ****    </tr><tr>
 354:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>\p Fl_Table::CONTEXT_ROW_HEADER</td>
 355:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>Whenever a row header cell needs to be drawn.<br>
 356:fltk-1.3.4-1/FL/Fl_Table.H ****        R will be the row number of the header being redrawn,<br>
 357:fltk-1.3.4-1/FL/Fl_Table.H ****        C will be zero,<br>
 358:fltk-1.3.4-1/FL/Fl_Table.H ****        X/Y/W/H will be the fltk drawing area of the row header in the window </td>
 359:fltk-1.3.4-1/FL/Fl_Table.H ****    </tr><tr>
 360:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>\p Fl_Table::CONTEXT_COL_HEADER</td>
 361:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>Whenever a column header cell needs to be drawn.<br>
 362:fltk-1.3.4-1/FL/Fl_Table.H ****        R will be zero, <br>
 363:fltk-1.3.4-1/FL/Fl_Table.H ****        C will be the column number of the header being redrawn,<br>
 364:fltk-1.3.4-1/FL/Fl_Table.H ****        X/Y/W/H will be the fltk drawing area of the column header in the window </td>
 365:fltk-1.3.4-1/FL/Fl_Table.H ****    </tr><tr>
 366:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>\p Fl_Table::CONTEXT_CELL</td>
 367:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>Whenever a data cell in the table needs to be drawn.<br>
 368:fltk-1.3.4-1/FL/Fl_Table.H ****        R/C will be the row/column of the cell to be drawn,<br>
 369:fltk-1.3.4-1/FL/Fl_Table.H ****        X/Y/W/H will be the fltk drawing area of the cell in the window </td>
 370:fltk-1.3.4-1/FL/Fl_Table.H ****    </tr><tr>
 371:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>\p Fl_Table::CONTEXT_RC_RESIZE</td>
 372:fltk-1.3.4-1/FL/Fl_Table.H ****    <td>Whenever table or row/column is resized or scrolled,
 373:fltk-1.3.4-1/FL/Fl_Table.H ****        either interactively or via col_width() or row_height().<br>
 374:fltk-1.3.4-1/FL/Fl_Table.H ****        R/C/X/Y/W/H will all be zero.
 375:fltk-1.3.4-1/FL/Fl_Table.H ****        <p> 
 376:fltk-1.3.4-1/FL/Fl_Table.H ****        Useful for fltk containers that need to resize or move
 377:fltk-1.3.4-1/FL/Fl_Table.H ****        the child fltk widgets.</td>
 378:fltk-1.3.4-1/FL/Fl_Table.H ****    </tr>
 379:fltk-1.3.4-1/FL/Fl_Table.H ****    </table>
 380:fltk-1.3.4-1/FL/Fl_Table.H ****    
 381:fltk-1.3.4-1/FL/Fl_Table.H ****    \p row and \p col will be set to the row and column number
 382:fltk-1.3.4-1/FL/Fl_Table.H ****    of the cell being drawn. In the case of row headers, \p col will be \a 0.
 383:fltk-1.3.4-1/FL/Fl_Table.H ****    In the case of column headers, \p row will be \a 0.
 384:fltk-1.3.4-1/FL/Fl_Table.H ****    
 385:fltk-1.3.4-1/FL/Fl_Table.H ****    <tt>x/y/w/h</tt> will be the position and dimensions of where the cell
 386:fltk-1.3.4-1/FL/Fl_Table.H ****    should be drawn.
 387:fltk-1.3.4-1/FL/Fl_Table.H ****    
 388:fltk-1.3.4-1/FL/Fl_Table.H ****    In the case of custom widgets, a minimal draw_cell() override might
 389:fltk-1.3.4-1/FL/Fl_Table.H ****    look like the following. With custom widgets it is up to the caller to handle
 390:fltk-1.3.4-1/FL/Fl_Table.H ****    drawing everything within the dimensions of the cell, including handling the
 391:fltk-1.3.4-1/FL/Fl_Table.H ****    selection color.  Note all clipping must be handled as well; this allows drawing
 392:fltk-1.3.4-1/FL/Fl_Table.H ****    outside the dimensions of the cell if so desired for 'custom effects'.
 393:fltk-1.3.4-1/FL/Fl_Table.H ****    
 394:fltk-1.3.4-1/FL/Fl_Table.H ****    \code
 395:fltk-1.3.4-1/FL/Fl_Table.H ****    // This is called whenever Fl_Table wants you to draw a cell
 396:fltk-1.3.4-1/FL/Fl_Table.H ****    void MyTable::draw_cell(TableContext context, int R=0, int C=0, int X=0, int Y=0, int W=0, int H
 397:fltk-1.3.4-1/FL/Fl_Table.H ****        static char s[40];
 398:fltk-1.3.4-1/FL/Fl_Table.H ****        sprintf(s, "%d/%d", R, C);              // text for each cell
 399:fltk-1.3.4-1/FL/Fl_Table.H ****        switch ( context ) {
 400:fltk-1.3.4-1/FL/Fl_Table.H **** 	   case CONTEXT_STARTPAGE:             // Fl_Table telling us it's starting to draw page
 401:fltk-1.3.4-1/FL/Fl_Table.H **** 	       fl_font(FL_HELVETICA, 16);
 402:fltk-1.3.4-1/FL/Fl_Table.H **** 	       return;
 403:fltk-1.3.4-1/FL/Fl_Table.H ****        
 404:fltk-1.3.4-1/FL/Fl_Table.H **** 	   case CONTEXT_ROW_HEADER:            // Fl_Table telling us to draw row/col headers
 405:fltk-1.3.4-1/FL/Fl_Table.H **** 	   case CONTEXT_COL_HEADER:
 406:fltk-1.3.4-1/FL/Fl_Table.H **** 	       fl_push_clip(X, Y, W, H);
 407:fltk-1.3.4-1/FL/Fl_Table.H **** 	       {
 408:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_draw_box(FL_THIN_UP_BOX, X, Y, W, H, color());
 409:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_color(FL_BLACK);
 410:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_draw(s, X, Y, W, H, FL_ALIGN_CENTER);
 411:fltk-1.3.4-1/FL/Fl_Table.H **** 	       }
 412:fltk-1.3.4-1/FL/Fl_Table.H **** 	       fl_pop_clip();
 413:fltk-1.3.4-1/FL/Fl_Table.H **** 	       return;
 414:fltk-1.3.4-1/FL/Fl_Table.H **** 	   
 415:fltk-1.3.4-1/FL/Fl_Table.H **** 	   case CONTEXT_CELL:                  // Fl_Table telling us to draw cells
 416:fltk-1.3.4-1/FL/Fl_Table.H **** 	       fl_push_clip(X, Y, W, H);
 417:fltk-1.3.4-1/FL/Fl_Table.H **** 	       {
 418:fltk-1.3.4-1/FL/Fl_Table.H **** 		   // BG COLOR
 419:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_color( row_selected(R) ? selection_color() : FL_WHITE);
 420:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_rectf(X, Y, W, H);
 421:fltk-1.3.4-1/FL/Fl_Table.H **** 		   
 422:fltk-1.3.4-1/FL/Fl_Table.H **** 		   // TEXT
 423:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_color(FL_BLACK);
 424:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_draw(s, X, Y, W, H, FL_ALIGN_CENTER);
 425:fltk-1.3.4-1/FL/Fl_Table.H **** 		   
 426:fltk-1.3.4-1/FL/Fl_Table.H **** 		   // BORDER
 427:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_color(FL_LIGHT2);
 428:fltk-1.3.4-1/FL/Fl_Table.H **** 		   fl_rect(X, Y, W, H);
 429:fltk-1.3.4-1/FL/Fl_Table.H **** 	       }
 430:fltk-1.3.4-1/FL/Fl_Table.H **** 	       fl_pop_clip();
 431:fltk-1.3.4-1/FL/Fl_Table.H **** 	       return;
 432:fltk-1.3.4-1/FL/Fl_Table.H **** 	   
 433:fltk-1.3.4-1/FL/Fl_Table.H ****        default:
 434:fltk-1.3.4-1/FL/Fl_Table.H **** 	   return;
 435:fltk-1.3.4-1/FL/Fl_Table.H ****        }
 436:fltk-1.3.4-1/FL/Fl_Table.H ****        //NOTREACHED
 437:fltk-1.3.4-1/FL/Fl_Table.H ****    }
 438:fltk-1.3.4-1/FL/Fl_Table.H ****    \endcode
 439:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 440:fltk-1.3.4-1/FL/Fl_Table.H ****   virtual void draw_cell(TableContext context, int R=0, int C=0, 
  93              		.loc 3 440 0
  94              		.cfi_startproc
  95              	.LVL3:
  96 0000 F3C3     		rep ret
  97              		.cfi_endproc
  98              	.LFE513:
 100              		.section	.text.unlikely._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii,"axG",@progbits,_ZN8Fl_Tab
 101              	.LCOLDE3:
 102              		.section	.text._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii,"axG",@progbits,_ZN8Fl_Table9draw_c
 103              	.LHOTE3:
 104              		.section	.text.unlikely._ZN12Fl_Table_RowD2Ev,"axG",@progbits,_ZN12Fl_Table_RowD5Ev,comdat
 105              		.align 2
 106              	.LCOLDB4:
 107              		.section	.text._ZN12Fl_Table_RowD2Ev,"axG",@progbits,_ZN12Fl_Table_RowD5Ev,comdat
 108              	.LHOTB4:
 109              		.align 2
 110              		.p2align 4,,15
 111              		.weak	_ZN12Fl_Table_RowD2Ev
 113              	_ZN12Fl_Table_RowD2Ev:
 114              	.LFB592:
 115              		.file 4 "fltk-1.3.4-1/FL/Fl_Table_Row.H"
   1:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
   2:fltk-1.3.4-1/FL/Fl_Table_Row.H **** // "$Id: Fl_Table_Row.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
   4:fltk-1.3.4-1/FL/Fl_Table_Row.H **** 
   5:fltk-1.3.4-1/FL/Fl_Table_Row.H **** #ifndef _FL_TABLE_ROW_H
   6:fltk-1.3.4-1/FL/Fl_Table_Row.H **** #define _FL_TABLE_ROW_H
   7:fltk-1.3.4-1/FL/Fl_Table_Row.H **** 
   8:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
   9:fltk-1.3.4-1/FL/Fl_Table_Row.H **** // Fl_Table_Row -- A row oriented table widget
  10:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
  11:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //    A class specializing in a table of rows.
  12:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //    Handles row-specific selection behavior.
  13:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
  14:fltk-1.3.4-1/FL/Fl_Table_Row.H **** // Copyright 2002 by Greg Ercolano.
  15:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
  16:fltk-1.3.4-1/FL/Fl_Table_Row.H **** // This library is free software. Distribution and use rights are outlined in
  17:fltk-1.3.4-1/FL/Fl_Table_Row.H **** // the file "COPYING" which should have been included with this file.  If this
  18:fltk-1.3.4-1/FL/Fl_Table_Row.H **** // file is missing or damaged, see the license at:
  19:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
  20:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //     http://www.fltk.org/COPYING.php
  21:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
  22:fltk-1.3.4-1/FL/Fl_Table_Row.H **** // Please report all bugs and problems to "erco at seriss dot com".
  23:fltk-1.3.4-1/FL/Fl_Table_Row.H **** //
  24:fltk-1.3.4-1/FL/Fl_Table_Row.H **** 
  25:fltk-1.3.4-1/FL/Fl_Table_Row.H **** #include "Fl_Table.H"
  26:fltk-1.3.4-1/FL/Fl_Table_Row.H **** 
  27:fltk-1.3.4-1/FL/Fl_Table_Row.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  A table with row selection capabilities.
  29:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  
  30:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  This class implements a simple table with the ability to select
  31:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  rows.  This widget is similar to an Fl_Browser with columns.  Most
  32:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  methods of importance will be found in the Fl_Table widget, such
  33:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  as Fl_Table::rows() and Fl_Table::cols().
  34:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  
  35:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  To be useful it must be subclassed and at minimum the draw_cell()
  36:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  method must be overridden to provide the content of the cells. This widget
  37:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  does \em not manage the cell's data content; it is up to the parent
  38:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  class's draw_cell() method override to provide this.
  39:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  
  40:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  Events on the cells and/or headings generate callbacks when they are 
  41:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  clicked by the user.  You control when events are generated based on
  42:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  the values you supply for Fl_Table::when().
  43:fltk-1.3.4-1/FL/Fl_Table_Row.H ****  */
  44:fltk-1.3.4-1/FL/Fl_Table_Row.H **** class FL_EXPORT Fl_Table_Row : public Fl_Table {
  45:fltk-1.3.4-1/FL/Fl_Table_Row.H **** public:
  46:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   enum TableRowSelectMode {
  47:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     SELECT_NONE,		// no selection allowed
  48:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     SELECT_SINGLE,		// single row selection
  49:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     SELECT_MULTI		// multiple row selection (default)
  50:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   }; 
  51:fltk-1.3.4-1/FL/Fl_Table_Row.H **** private:
  52:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   // An STL-ish vector without templates
  53:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   class FL_EXPORT CharVector {
  54:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     char *arr;
  55:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     int _size;
  56:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     void init() {
  57:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       arr = NULL;
  58:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       _size = 0;
  59:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  60:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     void copy(char *newarr, int newsize) {
  61:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       size(newsize);
  62:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       memcpy(arr, newarr, newsize * sizeof(char));
  63:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  64:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   public:
  65:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     CharVector() {				// CTOR
  66:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       init();
  67:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  68:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     ~CharVector() {				// DTOR
  69:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       if ( arr ) free(arr);
  70:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       arr = NULL;
  71:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  72:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     CharVector(CharVector&o) {			// COPY CTOR
  73:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       init();
  74:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       copy(o.arr, o._size);
  75:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  76:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     CharVector& operator=(CharVector&o) {	// ASSIGN
  77:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       init();
  78:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       copy(o.arr, o._size);
  79:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       return(*this);
  80:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  81:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     char operator[](int x) const {
  82:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       return(arr[x]);
  83:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  84:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     char& operator[](int x) {
  85:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       return(arr[x]);
  86:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  87:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     int size() {
  88:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       return(_size);
  89:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  90:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     void size(int count) {
  91:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       if ( count != _size ) {
  92:fltk-1.3.4-1/FL/Fl_Table_Row.H ****         arr = (char*)realloc(arr, count * sizeof(char));
  93:fltk-1.3.4-1/FL/Fl_Table_Row.H ****         _size = count;
  94:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       }
  95:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
  96:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     char pop_back() {
  97:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       char tmp = arr[_size-1];
  98:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       _size--;
  99:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       return(tmp);
 100:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 101:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     void push_back(char val) {
 102:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       int x = _size;
 103:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       size(_size+1);
 104:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       arr[x] = val;
 105:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 106:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     char back() {
 107:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       return(arr[_size-1]);
 108:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 109:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   };
 110:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   CharVector _rowselect;		// selection flag for each row
 111:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 112:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   // handle() state variables.
 113:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   //    Put here instead of local statics in handle(), so more
 114:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   //    than one instance can exist without crosstalk between.
 115:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   //
 116:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int _dragging_select;		// dragging out a selection?
 117:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int _last_row;
 118:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int _last_y;			// last event's Y position
 119:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int _last_push_x;		// last PUSH event's X position
 120:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int _last_push_y;		// last PUSH event's Y position
 121:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 122:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   TableRowSelectMode _selectmode;
 123:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 124:fltk-1.3.4-1/FL/Fl_Table_Row.H **** protected:
 125:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int handle(int event);
 126:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int find_cell(TableContext context,		// find cell's x/y/w/h given r/c
 127:fltk-1.3.4-1/FL/Fl_Table_Row.H ****                 int R, int C, int &X, int &Y, int &W, int &H) {
 128:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     return(Fl_Table::find_cell(context, R, C, X, Y, W, H));
 129:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   }
 130:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 131:fltk-1.3.4-1/FL/Fl_Table_Row.H **** public:
 132:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   /**
 133:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    The constructor for the Fl_Table_Row.
 134:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    This creates an empty table with no rows or columns,
 135:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    with headers and row/column resize behavior disabled.
 136:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    */   
 137:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   Fl_Table_Row(int X, int Y, int W, int H, const char *l=0) : Fl_Table(X,Y,W,H,l) {
 138:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     _dragging_select = 0;
 139:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     _last_row        = -1;
 140:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     _last_y          = -1;
 141:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     _last_push_x     = -1;
 142:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     _last_push_y     = -1;
 143:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     _selectmode      = SELECT_MULTI;
 144:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   }
 145:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 146:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   /**
 147:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    The destructor for the Fl_Table_Row.
 148:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    Destroys the table and its associated widgets.
 149:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    */
 150:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   ~Fl_Table_Row() { }
 116              		.loc 4 150 0
 117              		.cfi_startproc
 118              	.LVL4:
 119              		.loc 4 150 0
 120 0000 53       		pushq	%rbx
 121              		.cfi_def_cfa_offset 16
 122              		.cfi_offset 3, -16
 123              		.loc 4 150 0
 124 0001 4889FB   		movq	%rdi, %rbx
 125              	.LBB178:
 126 0004 48C70700 		movq	$_ZTV12Fl_Table_Row+16, (%rdi)
 126      000000
 127              	.LVL5:
 128              	.LBB179:
 129              	.LBB180:
  69:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       arr = NULL;
 130              		.loc 4 69 0
 131 000b 488BBFA8 		movq	424(%rdi), %rdi
 131      010000
 132              	.LVL6:
 133 0012 4885FF   		testq	%rdi, %rdi
 134 0015 7405     		je	.L6
 135 0017 E8000000 		call	free
 135      00
 136              	.LVL7:
 137              	.L6:
 138              	.LBE180:
 139              	.LBE179:
 140              		.loc 4 150 0
 141 001c 4889DF   		movq	%rbx, %rdi
 142              	.LBE178:
 143 001f 5B       		popq	%rbx
 144              		.cfi_def_cfa_offset 8
 145              	.LVL8:
 146              	.LBB181:
 147 0020 E9000000 		jmp	_ZN8Fl_TableD2Ev
 147      00
 148              	.LVL9:
 149              	.LBE181:
 150              		.cfi_endproc
 151              	.LFE592:
 153              		.section	.text.unlikely._ZN12Fl_Table_RowD2Ev,"axG",@progbits,_ZN12Fl_Table_RowD5Ev,comdat
 154              	.LCOLDE4:
 155              		.section	.text._ZN12Fl_Table_RowD2Ev,"axG",@progbits,_ZN12Fl_Table_RowD5Ev,comdat
 156              	.LHOTE4:
 157              		.weak	_ZN12Fl_Table_RowD1Ev
 158              		.set	_ZN12Fl_Table_RowD1Ev,_ZN12Fl_Table_RowD2Ev
 159              		.section	.text.unlikely._ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5,"ax",@progbits
 160              		.align 2
 161              	.LCOLDB5:
 162              		.section	.text._ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5,"ax",@progbits
 163              	.LHOTB5:
 164              		.align 2
 165              		.p2align 4,,15
 167              	_ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5:
 168              	.LFB609:
 169              		.file 5 "fltk-1.3.4-1/src/Fl_Table_Row.cxx"
   1:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    1              		.file	"Fl_Table_Row.cxx"
   2:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   17              	.LFB233:
  17:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 170              		.loc 5 122 0
 171              		.cfi_startproc
 172              	.LVL10:
 173              	.LBB182:
 174              	.LBB183:
 123:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 175              		.loc 5 133 0
 176 0000 83FE02   		cmpl	$2, %esi
 177 0003 7453     		je	.L13
 178              	.LVL11:
 179              	.LBB184:
 134:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 180              		.loc 5 139 0
 181 0005 448B87B0 		movl	432(%rdi), %r8d
 181      010000
 182 000c 4585C0   		testl	%r8d, %r8d
 183 000f 0F8E7C00 		jle	.L24
 183      0000
 184 0015 4189F2   		movl	%esi, %r10d
 185 0018 31D2     		xorl	%edx, %edx
 186 001a 4531C0   		xorl	%r8d, %r8d
 187 001d 31C0     		xorl	%eax, %eax
 188              	.LVL12:
 189 001f 90       		.p2align 4,,10
 190              		.p2align 3
 191              	.L19:
 192              	.LBB185:
 193              	.LBB186:
  85:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 194              		.loc 4 85 0
 195 0020 4889D1   		movq	%rdx, %rcx
 196 0023 48038FA8 		addq	424(%rdi), %rcx
 196      010000
 197              	.LVL13:
 198              	.LBE186:
 199              	.LBE185:
 140:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 200              		.loc 5 140 0
 201 002a 440FBE09 		movsbl	(%rcx), %r9d
 141:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 202              		.loc 5 141 0
 203 002e 448811   		movb	%r10b, (%rcx)
 140:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 204              		.loc 5 140 0
 205 0031 4139F1   		cmpl	%esi, %r9d
 206 0034 410F95C1 		setne	%r9b
 139:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 207              		.loc 5 139 0
 208 0038 83C001   		addl	$1, %eax
 209              	.LVL14:
 210 003b 4883C201 		addq	$1, %rdx
 140:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 211              		.loc 5 140 0
 212 003f 4509C8   		orl	%r9d, %r8d
 213              	.LVL15:
 139:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 214              		.loc 5 139 0
 215 0042 3987B001 		cmpl	%eax, 432(%rdi)
 215      0000
 216 0048 7FD6     		jg	.L19
 217              	.LBE184:
 218              	.LBE183:
 142:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 219              		.loc 5 144 0
 220 004a 4584C0   		testb	%r8b, %r8b
 221 004d 753D     		jne	.L18
 222 004f F3C3     		rep ret
 223              	.LVL16:
 224              		.p2align 4,,10
 225 0051 0F1F8000 		.p2align 3
 225      000000
 226              	.L13:
 227              	.LBB190:
 228              	.LBB187:
 134:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 229              		.loc 5 134 0
 230 0058 8B8FB001 		movl	432(%rdi), %ecx
 230      0000
 231 005e 31D2     		xorl	%edx, %edx
 232 0060 31C0     		xorl	%eax, %eax
 233 0062 85C9     		testl	%ecx, %ecx
 234 0064 7E26     		jle	.L18
 235              	.LVL17:
 236 0066 662E0F1F 		.p2align 4,,10
 236      84000000 
 236      0000
 237              		.p2align 3
 238              	.L21:
 239              	.LBB188:
 240              	.LBB189:
  85:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 241              		.loc 4 85 0
 242 0070 4889D1   		movq	%rdx, %rcx
 243 0073 48038FA8 		addq	424(%rdi), %rcx
 243      010000
 244              	.LVL18:
 245              	.LBE189:
 246              	.LBE188:
 134:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 247              		.loc 5 134 0
 248 007a 83C001   		addl	$1, %eax
 249              	.LVL19:
 250 007d 4883C201 		addq	$1, %rdx
 135:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 251              		.loc 5 135 0
 252 0081 803101   		xorb	$1, (%rcx)
 134:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 253              		.loc 5 134 0
 254 0084 3987B001 		cmpl	%eax, 432(%rdi)
 254      0000
 255 008a 7FE4     		jg	.L21
 256              	.LVL20:
 257              	.L18:
 258              	.LBE187:
 259              	.LBE190:
 145:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 260              		.loc 5 145 0
 261 008c E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 261      00
 262              	.LVL21:
 263              	.L24:
 264 0091 F3C3     		rep ret
 265              	.LBE182:
 266              		.cfi_endproc
 267              	.LFE609:
 269              		.section	.text.unlikely._ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5
 270              	.LCOLDE5:
 271              		.section	.text._ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5
 272              	.LHOTE5:
 273              		.section	.text.unlikely._ZN12Fl_Table_Row5clearEv,"axG",@progbits,_ZN12Fl_Table_Row5clearEv,comdat
 274              		.align 2
 275              	.LCOLDB6:
 276              		.section	.text._ZN12Fl_Table_Row5clearEv,"axG",@progbits,_ZN12Fl_Table_Row5clearEv,comdat
 277              	.LHOTB6:
 278              		.align 2
 279              		.p2align 4,,15
 280              		.weak	_ZN12Fl_Table_Row5clearEv
 282              	_ZN12Fl_Table_Row5clearEv:
 283              	.LFB597:
 151:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 152:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   void rows(int val);			// set number of rows
 153:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int rows() {				// get number of rows
 154:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     return(Fl_Table::rows());
 155:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   }
 156:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 157:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   /**
 158:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    Sets the table selection mode.
 159:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    
 160:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    - \p Fl_Table_Row::SELECT_NONE - No selection allowed
 161:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    - \p Fl_Table_Row::SELECT_SINGLE - Only single rows can be selected
 162:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    - \p Fl_Table_Row::SELECT_MULTI - Multiple rows can be selected
 163:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    */
 164:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   void type(TableRowSelectMode val);	// set selection mode
 165:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 166:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   TableRowSelectMode type() const {	// get selection mode
 167:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     return(_selectmode);
 168:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   }
 169:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 170:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   /**
 171:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    Checks to see if 'row' is selected. Returns 1 if selected, 0 if not. You can
 172:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    change the selection of a row by clicking on it, or by using
 173:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    select_row(row, flag)
 174:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    */
 175:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int row_selected(int row);		// is row selected? (0=no, 1=yes, -1=range err)
 176:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 177:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   /**
 178:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    Changes the selection state for 'row', depending on the value
 179:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    of 'flag'.  0=deselected, 1=select, 2=toggle existing state.
 180:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    */
 181:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   int select_row(int row, int flag=1);	// select state for row: flag:0=off, 1=on, 2=toggle
 182:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   // returns: 0=no change, 1=changed, -1=range err
 183:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 184:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   /**
 185:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    This convenience function changes the selection state 
 186:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    for \em all rows based on 'flag'. 0=deselect, 1=select, 2=toggle existing state.
 187:fltk-1.3.4-1/FL/Fl_Table_Row.H ****    */
 188:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   void select_all_rows(int flag=1);	// all rows to a known state
 189:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 190:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   void clear() {
 284              		.loc 4 190 0
 285              		.cfi_startproc
 286              	.LVL22:
 287 0000 53       		pushq	%rbx
 288              		.cfi_def_cfa_offset 16
 289              		.cfi_offset 3, -16
 191:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     rows(0);		// implies clearing selection
 290              		.loc 4 191 0
 291 0001 488B07   		movq	(%rdi), %rax
 190:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     rows(0);		// implies clearing selection
 292              		.loc 4 190 0
 293 0004 4889FB   		movq	%rdi, %rbx
 294              		.loc 4 191 0
 295 0007 31F6     		xorl	%esi, %esi
 296 0009 FF5060   		call	*96(%rax)
 297              	.LVL23:
 192:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     cols(0);
 298              		.loc 4 192 0
 299 000c 488B03   		movq	(%rbx), %rax
 300 000f 4889DF   		movq	%rbx, %rdi
 301 0012 31F6     		xorl	%esi, %esi
 302 0014 FF5068   		call	*104(%rax)
 303              	.LVL24:
 304              	.LBB193:
 305              	.LBB194:
 441:fltk-1.3.4-1/FL/Fl_Table.H ****                          int X=0, int Y=0, int W=0, int H=0)
 442:fltk-1.3.4-1/FL/Fl_Table.H ****   { }						// overridden by deriving class
 443:fltk-1.3.4-1/FL/Fl_Table.H ****   
 444:fltk-1.3.4-1/FL/Fl_Table.H ****   long row_scroll_position(int row);		// find scroll position of row (in pixels)
 445:fltk-1.3.4-1/FL/Fl_Table.H ****   long col_scroll_position(int col);		// find scroll position of col (in pixels)
 446:fltk-1.3.4-1/FL/Fl_Table.H ****   
 447:fltk-1.3.4-1/FL/Fl_Table.H ****   int is_fltk_container() { 			// does table contain fltk widgets?
 448:fltk-1.3.4-1/FL/Fl_Table.H ****     return( Fl_Group::children() > 3 );		// (ie. more than box and 2 scrollbars?)
 449:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 450:fltk-1.3.4-1/FL/Fl_Table.H ****   
 451:fltk-1.3.4-1/FL/Fl_Table.H ****   static void scroll_cb(Fl_Widget*,void*);	// h/v scrollbar callback
 452:fltk-1.3.4-1/FL/Fl_Table.H ****   
 453:fltk-1.3.4-1/FL/Fl_Table.H ****   void damage_zone(int r1, int c1, int r2, int c2, int r3 = 0, int c3 = 0);
 454:fltk-1.3.4-1/FL/Fl_Table.H ****   
 455:fltk-1.3.4-1/FL/Fl_Table.H ****   void redraw_range(int topRow, int botRow, int leftCol, int rightCol) {
 456:fltk-1.3.4-1/FL/Fl_Table.H ****     if ( _redraw_toprow == -1 ) {
 457:fltk-1.3.4-1/FL/Fl_Table.H ****       // Initialize redraw range
 458:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_toprow = topRow;
 459:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_botrow = botRow;
 460:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_leftcol = leftCol;
 461:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_rightcol = rightCol;
 462:fltk-1.3.4-1/FL/Fl_Table.H ****     } else {
 463:fltk-1.3.4-1/FL/Fl_Table.H ****       // Extend redraw range
 464:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( topRow < _redraw_toprow ) _redraw_toprow = topRow;
 465:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( botRow > _redraw_botrow ) _redraw_botrow = botRow;
 466:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( leftCol < _redraw_leftcol ) _redraw_leftcol = leftCol;
 467:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( rightCol > _redraw_rightcol ) _redraw_rightcol = rightCol;
 468:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 469:fltk-1.3.4-1/FL/Fl_Table.H ****     
 470:fltk-1.3.4-1/FL/Fl_Table.H ****     // Indicate partial redraw needed of some cells
 471:fltk-1.3.4-1/FL/Fl_Table.H ****     damage(FL_DAMAGE_CHILD);
 472:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 473:fltk-1.3.4-1/FL/Fl_Table.H ****   
 474:fltk-1.3.4-1/FL/Fl_Table.H **** public:
 475:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 476:fltk-1.3.4-1/FL/Fl_Table.H ****    The constructor for the Fl_Table.
 477:fltk-1.3.4-1/FL/Fl_Table.H ****    This creates an empty table with no rows or columns,
 478:fltk-1.3.4-1/FL/Fl_Table.H ****    with headers and row/column resize behavior disabled.
 479:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 480:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Table(int X, int Y, int W, int H, const char *l=0);
 481:fltk-1.3.4-1/FL/Fl_Table.H ****   
 482:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 483:fltk-1.3.4-1/FL/Fl_Table.H ****    The destructor for the Fl_Table.
 484:fltk-1.3.4-1/FL/Fl_Table.H ****    Destroys the table and its associated widgets.
 485:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 486:fltk-1.3.4-1/FL/Fl_Table.H ****   ~Fl_Table();
 487:fltk-1.3.4-1/FL/Fl_Table.H ****   
 488:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 489:fltk-1.3.4-1/FL/Fl_Table.H ****    Clears the table to zero rows (rows(0)), zero columns (cols(0)), and clears
 490:fltk-1.3.4-1/FL/Fl_Table.H ****    any widgets (table->clear()) that were added with begin()/end() or add()/insert()/etc.
 491:fltk-1.3.4-1/FL/Fl_Table.H ****    \see rows(int), cols(int)
 492:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 493:fltk-1.3.4-1/FL/Fl_Table.H ****   virtual void clear() { rows(0); cols(0); table->clear(); }
 306              		.loc 3 493 0
 307 0017 488B03   		movq	(%rbx), %rax
 308 001a 4889DF   		movq	%rbx, %rdi
 309 001d 31F6     		xorl	%esi, %esi
 310 001f FF5060   		call	*96(%rax)
 311              	.LVL25:
 312 0022 488B03   		movq	(%rbx), %rax
 313 0025 4889DF   		movq	%rbx, %rdi
 314 0028 31F6     		xorl	%esi, %esi
 315 002a FF5068   		call	*104(%rax)
 316              	.LVL26:
 317 002d 488BBB90 		movq	400(%rbx), %rdi
 317      010000
 318              	.LBE194:
 319              	.LBE193:
 193:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     Fl_Table::clear();	// clear the table
 194:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   }
 320              		.loc 4 194 0
 321 0034 5B       		popq	%rbx
 322              		.cfi_def_cfa_offset 8
 323              	.LVL27:
 324              	.LBB196:
 325              	.LBB195:
 326              		.loc 3 493 0
 327 0035 E9000000 		jmp	_ZN9Fl_Scroll5clearEv
 327      00
 328              	.LVL28:
 329              	.LBE195:
 330              	.LBE196:
 331              		.cfi_endproc
 332              	.LFE597:
 334              		.section	.text.unlikely._ZN12Fl_Table_Row5clearEv,"axG",@progbits,_ZN12Fl_Table_Row5clearEv,comdat
 335              	.LCOLDE6:
 336              		.section	.text._ZN12Fl_Table_Row5clearEv,"axG",@progbits,_ZN12Fl_Table_Row5clearEv,comdat
 337              	.LHOTE6:
 338              		.section	.text.unlikely._ZN12Fl_Table_RowD0Ev,"axG",@progbits,_ZN12Fl_Table_RowD5Ev,comdat
 339              		.align 2
 340              	.LCOLDB7:
 341              		.section	.text._ZN12Fl_Table_RowD0Ev,"axG",@progbits,_ZN12Fl_Table_RowD5Ev,comdat
 342              	.LHOTB7:
 343              		.align 2
 344              		.p2align 4,,15
 345              		.weak	_ZN12Fl_Table_RowD0Ev
 347              	_ZN12Fl_Table_RowD0Ev:
 348              	.LFB594:
 150:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 349              		.loc 4 150 0
 350              		.cfi_startproc
 351              	.LVL29:
 352 0000 53       		pushq	%rbx
 353              		.cfi_def_cfa_offset 16
 354              		.cfi_offset 3, -16
 150:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 355              		.loc 4 150 0
 356 0001 4889FB   		movq	%rdi, %rbx
 357              	.LBB202:
 358              	.LBB203:
 359 0004 48C70700 		movq	$_ZTV12Fl_Table_Row+16, (%rdi)
 359      000000
 360              	.LVL30:
 361              	.LBB204:
 362              	.LBB205:
  69:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       arr = NULL;
 363              		.loc 4 69 0
 364 000b 488BBFA8 		movq	424(%rdi), %rdi
 364      010000
 365              	.LVL31:
 366 0012 4885FF   		testq	%rdi, %rdi
 367 0015 7405     		je	.L28
 368 0017 E8000000 		call	free
 368      00
 369              	.LVL32:
 370              	.L28:
 371              	.LBE205:
 372              	.LBE204:
 150:fltk-1.3.4-1/FL/Fl_Table_Row.H ****   
 373              		.loc 4 150 0
 374 001c 4889DF   		movq	%rbx, %rdi
 375 001f E8000000 		call	_ZN8Fl_TableD2Ev
 375      00
 376              	.LVL33:
 377              	.LBE203:
 378              	.LBE202:
 379 0024 4889DF   		movq	%rbx, %rdi
 380 0027 5B       		popq	%rbx
 381              		.cfi_def_cfa_offset 8
 382              	.LVL34:
 383 0028 E9000000 		jmp	_ZdlPv
 383      00
 384              	.LVL35:
 385              		.cfi_endproc
 386              	.LFE594:
 388              		.section	.text.unlikely._ZN12Fl_Table_RowD0Ev,"axG",@progbits,_ZN12Fl_Table_RowD5Ev,comdat
 389              	.LCOLDE7:
 390              		.section	.text._ZN12Fl_Table_RowD0Ev,"axG",@progbits,_ZN12Fl_Table_RowD5Ev,comdat
 391              	.LHOTE7:
 392              		.section	.text.unlikely._ZN12Fl_Table_Row12row_selectedEi,"ax",@progbits
 393              		.align 2
 394              	.LCOLDB8:
 395              		.section	.text._ZN12Fl_Table_Row12row_selectedEi,"ax",@progbits
 396              	.LHOTB8:
 397              		.align 2
 398              		.p2align 4,,15
 399              		.globl	_ZN12Fl_Table_Row12row_selectedEi
 401              	_ZN12Fl_Table_Row12row_selectedEi:
 402              	.LFB598:
  33:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 403              		.loc 5 33 0
 404              		.cfi_startproc
 405              	.LVL36:
  34:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 406              		.loc 5 34 0
 407 0000 85F6     		testl	%esi, %esi
 408 0002 B8FFFFFF 		movl	$-1, %eax
 408      FF
 409 0007 7808     		js	.L37
 410              	.LVL37:
 411 0009 3BB7A000 		cmpl	160(%rdi), %esi
 411      0000
 412 000f 7C07     		jl	.L38
 413              	.LVL38:
 414              	.L37:
  36:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 415              		.loc 5 36 0
 416 0011 F3C3     		rep ret
 417              	.LVL39:
 418              		.p2align 4,,10
 419 0013 0F1F4400 		.p2align 3
 419      00
 420              	.L38:
  35:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
 421              		.loc 5 35 0
 422 0018 488B87A8 		movq	424(%rdi), %rax
 422      010000
 423 001f 4863F6   		movslq	%esi, %rsi
 424 0022 0FBE0430 		movsbl	(%rax,%rsi), %eax
  36:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 425              		.loc 5 36 0
 426 0026 C3       		ret
 427              		.cfi_endproc
 428              	.LFE598:
 430              		.section	.text.unlikely._ZN12Fl_Table_Row12row_selectedEi
 431              	.LCOLDE8:
 432              		.section	.text._ZN12Fl_Table_Row12row_selectedEi
 433              	.LHOTE8:
 434              		.section	.text.unlikely._ZN12Fl_Table_Row4typeENS_18TableRowSelectModeE,"ax",@progbits
 435              		.align 2
 436              	.LCOLDB9:
 437              		.section	.text._ZN12Fl_Table_Row4typeENS_18TableRowSelectModeE,"ax",@progbits
 438              	.LHOTB9:
 439              		.align 2
 440              		.p2align 4,,15
 441              		.globl	_ZN12Fl_Table_Row4typeENS_18TableRowSelectModeE
 443              	_ZN12Fl_Table_Row4typeENS_18TableRowSelectModeE:
 444              	.LFB599:
  39:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 445              		.loc 5 39 0
 446              		.cfi_startproc
 447              	.LVL40:
 448              	.LBB206:
  41:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 449              		.loc 5 41 0
 450 0000 85F6     		testl	%esi, %esi
 451              	.LBE206:
  40:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452              		.loc 5 40 0
 453 0002 89B7CC01 		movl	%esi, 460(%rdi)
 453      0000
 454              	.LBB213:
  41:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 455              		.loc 5 41 0
 456 0008 744E     		je	.L41
 457 000a 83FE01   		cmpl	$1, %esi
 458 000d 7541     		jne	.L54
 459              	.LVL41:
 460              	.LBB207:
 461              	.LBB208:
  51:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 462              		.loc 5 51 0 discriminator 1
 463 000f 8B8FA000 		movl	160(%rdi), %ecx
 463      0000
 464 0015 31D2     		xorl	%edx, %edx
 465 0017 31C0     		xorl	%eax, %eax
 466 0019 31F6     		xorl	%esi, %esi
 467              	.LVL42:
 468 001b 85C9     		testl	%ecx, %ecx
 469 001d 7E2A     		jle	.L44
 470              	.LVL43:
 471 001f 90       		.p2align 4,,10
 472              		.p2align 3
 473              	.L50:
 474              	.LBB209:
 475              	.LBB210:
  85:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 476              		.loc 4 85 0
 477 0020 4889D1   		movq	%rdx, %rcx
 478 0023 48038FA8 		addq	424(%rdi), %rcx
 478      010000
 479              	.LVL44:
 480              	.LBE210:
 481              	.LBE209:
  52:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 482              		.loc 5 52 0
 483 002a 803900   		cmpb	$0, (%rcx)
 484 002d 740B     		je	.L46
  53:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 485              		.loc 5 53 0
 486 002f 83C601   		addl	$1, %esi
 487              	.LVL45:
 488 0032 83FE01   		cmpl	$1, %esi
 489 0035 7403     		je	.L46
 490              	.LVL46:
  54:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 491              		.loc 5 54 0
 492 0037 C60100   		movb	$0, (%rcx)
 493              	.LVL47:
 494              	.L46:
  51:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 495              		.loc 5 51 0 discriminator 2
 496 003a 83C001   		addl	$1, %eax
 497              	.LVL48:
 498 003d 4883C201 		addq	$1, %rdx
 499 0041 3987A000 		cmpl	%eax, 160(%rdi)
 499      0000
 500 0047 7FD7     		jg	.L50
 501              	.LVL49:
 502              	.L44:
 503              	.LBE208:
 504              	.LBE207:
 505              	.LBB211:
  46:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 506              		.loc 5 46 0
 507 0049 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 507      00
 508              	.LVL50:
 509 004e 6690     		.p2align 4,,10
 510              		.p2align 3
 511              	.L54:
 512 0050 F3C3     		rep ret
 513              		.p2align 4,,10
 514 0052 660F1F44 		.p2align 3
 514      0000
 515              	.L41:
 516              	.LVL51:
 517              	.LBB212:
  43:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 518              		.loc 5 43 0 discriminator 3
 519 0058 8B87A000 		movl	160(%rdi), %eax
 519      0000
 520 005e 85C0     		testl	%eax, %eax
 521 0060 7EE7     		jle	.L44
  43:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 522              		.loc 5 43 0 is_stmt 0 discriminator 2
 523 0062 31D2     		xorl	%edx, %edx
 524 0064 31C0     		xorl	%eax, %eax
 525              	.LVL52:
 526 0066 662E0F1F 		.p2align 4,,10
 526      84000000 
 526      0000
 527              		.p2align 3
 528              	.L45:
  44:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 529              		.loc 5 44 0 is_stmt 1 discriminator 2
 530 0070 488B8FA8 		movq	424(%rdi), %rcx
 530      010000
  43:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 531              		.loc 5 43 0 discriminator 2
 532 0077 83C001   		addl	$1, %eax
 533              	.LVL53:
  44:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 534              		.loc 5 44 0 discriminator 2
 535 007a C6041100 		movb	$0, (%rcx,%rdx)
 536 007e 4883C201 		addq	$1, %rdx
  43:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 537              		.loc 5 43 0 discriminator 2
 538 0082 3B87A000 		cmpl	160(%rdi), %eax
 538      0000
 539 0088 7CE6     		jl	.L45
 540              	.LBE212:
  46:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 541              		.loc 5 46 0
 542 008a E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 542      00
 543              	.LVL54:
 544              	.LBE211:
 545              	.LBE213:
 546              		.cfi_endproc
 547              	.LFE599:
 549              		.section	.text.unlikely._ZN12Fl_Table_Row4typeENS_18TableRowSelectModeE
 550              	.LCOLDE9:
 551              		.section	.text._ZN12Fl_Table_Row4typeENS_18TableRowSelectModeE
 552              	.LHOTE9:
 553              		.section	.text.unlikely._ZN12Fl_Table_Row10select_rowEii,"ax",@progbits
 554              		.align 2
 555              	.LCOLDB10:
 556              		.section	.text._ZN12Fl_Table_Row10select_rowEii,"ax",@progbits
 557              	.LHOTB10:
 558              		.align 2
 559              		.p2align 4,,15
 560              		.globl	_ZN12Fl_Table_Row10select_rowEii
 562              	_ZN12Fl_Table_Row10select_rowEii:
 563              	.LFB600:
  78:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 564              		.loc 5 78 0
 565              		.cfi_startproc
 566              	.LVL55:
  80:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 567              		.loc 5 80 0
 568 0000 85F6     		testl	%esi, %esi
 569 0002 B8FFFFFF 		movl	$-1, %eax
 569      FF
 570 0007 0F888800 		js	.L97
 570      0000
 571              	.LVL56:
 572 000d 448B87A0 		movl	160(%rdi), %r8d
 572      000000
 573              	.LVL57:
 574 0014 4439C6   		cmpl	%r8d, %esi
 575 0017 7D7C     		jge	.L97
  78:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 576              		.loc 5 78 0
 577 0019 4157     		pushq	%r15
 578              		.cfi_def_cfa_offset 16
 579              		.cfi_offset 15, -16
 580 001b 4156     		pushq	%r14
 581              		.cfi_def_cfa_offset 24
 582              		.cfi_offset 14, -24
 583 001d 4189F7   		movl	%esi, %r15d
 584 0020 4155     		pushq	%r13
 585              		.cfi_def_cfa_offset 32
 586              		.cfi_offset 13, -32
 587 0022 4154     		pushq	%r12
 588              		.cfi_def_cfa_offset 40
 589              		.cfi_offset 12, -40
 590 0024 4189D5   		movl	%edx, %r13d
 591 0027 55       		pushq	%rbp
 592              		.cfi_def_cfa_offset 48
 593              		.cfi_offset 6, -48
 594 0028 53       		pushq	%rbx
 595              		.cfi_def_cfa_offset 56
 596              		.cfi_offset 3, -56
 597 0029 4889FB   		movq	%rdi, %rbx
 598 002c 4883EC18 		subq	$24, %rsp
 599              		.cfi_def_cfa_offset 80
 600              	.LBB235:
  81:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 601              		.loc 5 81 0
 602 0030 8B8FCC01 		movl	460(%rdi), %ecx
 602      0000
 603 0036 83F901   		cmpl	$1, %ecx
 604 0039 747D     		je	.L100
 605 003b 724A     		jb	.L91
 606 003d 83F902   		cmpl	$2, %ecx
 607 0040 755E     		jne	.L98
 608              	.LVL58:
 609              	.LBB236:
 610              	.LBB237:
 611              	.LBB238:
 612              	.LBB239:
  85:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 613              		.loc 4 85 0
 614 0042 4963C7   		movslq	%r15d, %rax
 615 0045 4889C1   		movq	%rax, %rcx
 616 0048 48038BA8 		addq	424(%rbx), %rcx
 616      010000
 617              	.LVL59:
 618              	.LBE239:
 619              	.LBE238:
 107:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 620              		.loc 5 107 0
 621 004f 4183FD02 		cmpl	$2, %r13d
 106:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 622              		.loc 5 106 0
 623 0053 0FB631   		movzbl	(%rcx), %esi
 624              	.LVL60:
 107:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 625              		.loc 5 107 0
 626 0056 0F84C401 		je	.L101
 626      0000
 627              	.LVL61:
 108:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 628              		.loc 5 108 0
 629 005c 448829   		movb	%r13b, (%rcx)
 630              	.LVL62:
 631              	.L75:
 109:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632              		.loc 5 109 0
 633 005f 488B93A8 		movq	424(%rbx), %rdx
 633      010000
 634 0066 403A3402 		cmpb	(%rdx,%rax), %sil
 635 006a 7434     		je	.L98
 110:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 636              		.loc 5 110 0
 637 006c 443BBB34 		cmpl	308(%rbx), %r15d
 637      010000
 114:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 638              		.loc 5 114 0
 639 0073 B8010000 		movl	$1, %eax
 639      00
 110:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 640              		.loc 5 110 0
 641 0078 7C0D     		jl	.L91
 110:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 642              		.loc 5 110 0 is_stmt 0 discriminator 1
 643 007a 443BBB38 		cmpl	312(%rbx), %r15d
 643      010000
 644 0081 0F8EF901 		jle	.L102
 644      0000
 645              	.LVL63:
 646              	.L91:
 647              	.LBE237:
 648              	.LBE236:
 649              	.LBE235:
 119:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 650              		.loc 5 119 0 is_stmt 1
 651 0087 4883C418 		addq	$24, %rsp
 652              		.cfi_def_cfa_offset 56
 653 008b 5B       		popq	%rbx
 654              		.cfi_restore 3
 655              		.cfi_def_cfa_offset 48
 656              	.LVL64:
 657 008c 5D       		popq	%rbp
 658              		.cfi_restore 6
 659              		.cfi_def_cfa_offset 40
 660 008d 415C     		popq	%r12
 661              		.cfi_restore 12
 662              		.cfi_def_cfa_offset 32
 663 008f 415D     		popq	%r13
 664              		.cfi_restore 13
 665              		.cfi_def_cfa_offset 24
 666              	.LVL65:
 667 0091 415E     		popq	%r14
 668              		.cfi_restore 14
 669              		.cfi_def_cfa_offset 16
 670 0093 415F     		popq	%r15
 671              		.cfi_restore 15
 672              		.cfi_def_cfa_offset 8
 673              	.LVL66:
 674              	.L97:
 675 0095 F3C3     		rep ret
 676              	.LVL67:
 677 0097 660F1F84 		.p2align 4,,10
 677      00000000 
 677      00
 678              		.p2align 3
 679              	.L98:
 680              		.cfi_def_cfa_offset 80
 681              		.cfi_offset 3, -56
 682              		.cfi_offset 6, -48
 683              		.cfi_offset 12, -40
 684              		.cfi_offset 13, -32
 685              		.cfi_offset 14, -24
 686              		.cfi_offset 15, -16
 687 00a0 4883C418 		addq	$24, %rsp
 688              		.cfi_remember_state
 689              		.cfi_def_cfa_offset 56
  79:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 690              		.loc 5 79 0
 691 00a4 31C0     		xorl	%eax, %eax
 119:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 692              		.loc 5 119 0
 693 00a6 5B       		popq	%rbx
 694              		.cfi_restore 3
 695              		.cfi_def_cfa_offset 48
 696              	.LVL68:
 697 00a7 5D       		popq	%rbp
 698              		.cfi_restore 6
 699              		.cfi_def_cfa_offset 40
 700 00a8 415C     		popq	%r12
 701              		.cfi_restore 12
 702              		.cfi_def_cfa_offset 32
 703 00aa 415D     		popq	%r13
 704              		.cfi_restore 13
 705              		.cfi_def_cfa_offset 24
 706              	.LVL69:
 707 00ac 415E     		popq	%r14
 708              		.cfi_restore 14
 709              		.cfi_def_cfa_offset 16
 710 00ae 415F     		popq	%r15
 711              		.cfi_restore 15
 712              		.cfi_def_cfa_offset 8
 713              	.LVL70:
 714 00b0 EBE3     		jmp	.L97
 715              	.LVL71:
 716              		.p2align 4,,10
 717 00b2 660F1F44 		.p2align 3
 717      0000
 718              	.L100:
 719              		.cfi_restore_state
 720              	.LBB276:
 721              	.LBB274:
 722              	.LBB246:
 723              	.LBB247:
  87:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 724              		.loc 5 87 0 discriminator 1
 725 00b8 4531E4   		xorl	%r12d, %r12d
 726 00bb 31ED     		xorl	%ebp, %ebp
 727 00bd 4585C0   		testl	%r8d, %r8d
 728 00c0 C744240C 		movl	$0, 12(%rsp)
 728      00000000 
 729              	.LBB248:
 730              	.LBB249:
  85:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 731              		.loc 4 85 0 discriminator 1
 732 00c8 4C63F6   		movslq	%esi, %r14
 733              	.LBE249:
 734              	.LBE248:
  87:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 735              		.loc 5 87 0 discriminator 1
 736 00cb 7F29     		jg	.L92
 737 00cd EBD1     		jmp	.L98
 738              	.LVL72:
 739 00cf 90       		.p2align 4,,10
 740              		.p2align 3
 741              	.L58:
 742              	.LBB251:
 743              	.LBB252:
  85:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 744              		.loc 4 85 0
 745 00d0 4C89E1   		movq	%r12, %rcx
 746 00d3 48038BA8 		addq	424(%rbx), %rcx
 746      010000
 747              	.LVL73:
 748              	.LBE252:
 749              	.LBE251:
  97:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 750              		.loc 5 97 0
 751 00da 803900   		cmpb	$0, (%rcx)
 752 00dd 0F85DD00 		jne	.L103
 752      0000
 753              	.LVL74:
 754              	.L61:
  87:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 755              		.loc 5 87 0 discriminator 2
 756 00e3 83C501   		addl	$1, %ebp
 757              	.LVL75:
 758 00e6 4983C401 		addq	$1, %r12
 759 00ea 3BABA000 		cmpl	160(%rbx), %ebp
 759      0000
 760 00f0 0F8DAA00 		jge	.L104
 760      0000
 761              	.LVL76:
 762              	.L92:
  88:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 763              		.loc 5 88 0
 764 00f6 4139EF   		cmpl	%ebp, %r15d
 765 00f9 75D5     		jne	.L58
 766              	.LVL77:
 767              	.LBB253:
 768              	.LBB250:
  85:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 769              		.loc 4 85 0
 770 00fb 4C89F0   		movq	%r14, %rax
 771 00fe 480383A8 		addq	424(%rbx), %rax
 771      010000
 772              	.LVL78:
 773              	.LBE250:
 774              	.LBE253:
  90:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 775              		.loc 5 90 0
 776 0105 4183FD02 		cmpl	$2, %r13d
  89:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 777              		.loc 5 89 0
 778 0109 0FB608   		movzbl	(%rax), %ecx
 779              	.LVL79:
  90:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 780              		.loc 5 90 0
 781 010c 0F841E01 		je	.L105
 781      0000
 782              	.LVL80:
  91:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 783              		.loc 5 91 0
 784 0112 448828   		movb	%r13b, (%rax)
 785              	.LVL81:
 786              	.L60:
  92:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 787              		.loc 5 92 0
 788 0115 488B83A8 		movq	424(%rbx), %rax
 788      010000
 789 011c 423A0C30 		cmpb	(%rax,%r14), %cl
 790 0120 74C1     		je	.L61
 791              	.LBB254:
 792              	.LBB255:
 456:fltk-1.3.4-1/FL/Fl_Table.H ****       // Initialize redraw range
 793              		.loc 3 456 0
 794 0122 8B83C400 		movl	196(%rbx), %eax
 794      0000
 795              	.LBE255:
 796              	.LBE254:
  93:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 797              		.loc 5 93 0
 798 0128 8B8B4001 		movl	320(%rbx), %ecx
 798      0000
 799              	.LVL82:
 800 012e 8BB33C01 		movl	316(%rbx), %esi
 800      0000
 801              	.LVL83:
 802              	.LBB259:
 803              	.LBB256:
 456:fltk-1.3.4-1/FL/Fl_Table.H ****       // Initialize redraw range
 804              		.loc 3 456 0
 805 0134 83F8FF   		cmpl	$-1, %eax
 806 0137 0F842301 		je	.L106
 806      0000
 464:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( botRow > _redraw_botrow ) _redraw_botrow = botRow;
 807              		.loc 3 464 0
 808 013d 4139C7   		cmpl	%eax, %r15d
 809 0140 7D07     		jge	.L64
 810 0142 4489BBC4 		movl	%r15d, 196(%rbx)
 810      000000
 811              	.L64:
 465:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( leftCol < _redraw_leftcol ) _redraw_leftcol = leftCol;
 812              		.loc 3 465 0
 813 0149 443BBBC8 		cmpl	200(%rbx), %r15d
 813      000000
 814 0150 7E07     		jle	.L65
 815 0152 4489BBC8 		movl	%r15d, 200(%rbx)
 815      000000
 816              	.L65:
 466:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( rightCol > _redraw_rightcol ) _redraw_rightcol = rightCol;
 817              		.loc 3 466 0
 818 0159 3BB3CC00 		cmpl	204(%rbx), %esi
 818      0000
 819 015f 7D06     		jge	.L66
 820 0161 89B3CC00 		movl	%esi, 204(%rbx)
 820      0000
 821              	.L66:
 467:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 822              		.loc 3 467 0
 823 0167 3B8BD000 		cmpl	208(%rbx), %ecx
 823      0000
 824 016d 7E06     		jle	.L63
 825 016f 898BD000 		movl	%ecx, 208(%rbx)
 825      0000
 826              	.L63:
 471:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 827              		.loc 3 471 0
 828 0175 BE010000 		movl	$1, %esi
 828      00
 829              	.LVL84:
 830 017a 4889DF   		movq	%rbx, %rdi
 831              	.LBE256:
 832              	.LBE259:
  87:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 833              		.loc 5 87 0
 834 017d 83C501   		addl	$1, %ebp
 835              	.LVL85:
 836              	.LBB260:
 837              	.LBB257:
 471:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 838              		.loc 3 471 0
 839 0180 E8000000 		call	_ZN9Fl_Widget6damageEh
 839      00
 840              	.LVL86:
 841 0185 4983C401 		addq	$1, %r12
 842              	.LBE257:
 843              	.LBE260:
  87:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 844              		.loc 5 87 0
 845 0189 3BABA000 		cmpl	160(%rbx), %ebp
 845      0000
  94:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 846              		.loc 5 94 0
 847 018f C744240C 		movl	$1, 12(%rsp)
 847      01000000 
 848              	.LVL87:
  87:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 849              		.loc 5 87 0
 850 0197 0F8C59FF 		jl	.L92
 850      FFFF
 851              	.LVL88:
 852 019d 0F1F00   		.p2align 4,,10
 853              		.p2align 3
 854              	.L104:
 855 01a0 8B44240C 		movl	12(%rsp), %eax
 856              	.LBE247:
 857              	.LBE246:
 858              	.LBE274:
 859              	.LBE276:
 119:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 860              		.loc 5 119 0
 861 01a4 4883C418 		addq	$24, %rsp
 862              		.cfi_remember_state
 863              		.cfi_def_cfa_offset 56
 864 01a8 5B       		popq	%rbx
 865              		.cfi_restore 3
 866              		.cfi_def_cfa_offset 48
 867              	.LVL89:
 868 01a9 5D       		popq	%rbp
 869              		.cfi_restore 6
 870              		.cfi_def_cfa_offset 40
 871              	.LVL90:
 872 01aa 415C     		popq	%r12
 873              		.cfi_restore 12
 874              		.cfi_def_cfa_offset 32
 875 01ac 415D     		popq	%r13
 876              		.cfi_restore 13
 877              		.cfi_def_cfa_offset 24
 878              	.LVL91:
 879 01ae 415E     		popq	%r14
 880              		.cfi_restore 14
 881              		.cfi_def_cfa_offset 16
 882 01b0 415F     		popq	%r15
 883              		.cfi_restore 15
 884              		.cfi_def_cfa_offset 8
 885              	.LVL92:
 886 01b2 E9DEFEFF 		jmp	.L97
 886      FF
 887              	.LVL93:
 888 01b7 660F1F84 		.p2align 4,,10
 888      00000000 
 888      00
 889              		.p2align 3
 890              	.L103:
 891              		.cfi_restore_state
 892              	.LBB277:
 893              	.LBB275:
 894              	.LBB270:
 895              	.LBB268:
  98:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 896              		.loc 5 98 0
 897 01c0 C60100   		movb	$0, (%rcx)
 898              	.LBB261:
 899              	.LBB262:
 456:fltk-1.3.4-1/FL/Fl_Table.H ****       // Initialize redraw range
 900              		.loc 3 456 0
 901 01c3 8B83C400 		movl	196(%rbx), %eax
 901      0000
 902              	.LBE262:
 903              	.LBE261:
  99:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 904              		.loc 5 99 0
 905 01c9 8B8B4001 		movl	320(%rbx), %ecx
 905      0000
 906 01cf 8BB33C01 		movl	316(%rbx), %esi
 906      0000
 907              	.LVL94:
 908              	.LBB265:
 909              	.LBB263:
 456:fltk-1.3.4-1/FL/Fl_Table.H ****       // Initialize redraw range
 910              		.loc 3 456 0
 911 01d5 83F8FF   		cmpl	$-1, %eax
 912 01d8 7466     		je	.L107
 464:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( botRow > _redraw_botrow ) _redraw_botrow = botRow;
 913              		.loc 3 464 0
 914 01da 39E8     		cmpl	%ebp, %eax
 915 01dc 7E06     		jle	.L69
 916 01de 89ABC400 		movl	%ebp, 196(%rbx)
 916      0000
 917              	.L69:
 465:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( leftCol < _redraw_leftcol ) _redraw_leftcol = leftCol;
 918              		.loc 3 465 0
 919 01e4 3BABC800 		cmpl	200(%rbx), %ebp
 919      0000
 920 01ea 7E06     		jle	.L70
 921 01ec 89ABC800 		movl	%ebp, 200(%rbx)
 921      0000
 922              	.L70:
 466:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( rightCol > _redraw_rightcol ) _redraw_rightcol = rightCol;
 923              		.loc 3 466 0
 924 01f2 3BB3CC00 		cmpl	204(%rbx), %esi
 924      0000
 925 01f8 7D06     		jge	.L71
 926 01fa 89B3CC00 		movl	%esi, 204(%rbx)
 926      0000
 927              	.L71:
 467:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 928              		.loc 3 467 0
 929 0200 3B8BD000 		cmpl	208(%rbx), %ecx
 929      0000
 930 0206 7E06     		jle	.L68
 931 0208 898BD000 		movl	%ecx, 208(%rbx)
 931      0000
 932              	.L68:
 471:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 933              		.loc 3 471 0
 934 020e BE010000 		movl	$1, %esi
 934      00
 935              	.LVL95:
 936 0213 4889DF   		movq	%rbx, %rdi
 937 0216 E8000000 		call	_ZN9Fl_Widget6damageEh
 937      00
 938              	.LVL96:
 939 021b E9C3FEFF 		jmp	.L61
 939      FF
 940              	.LVL97:
 941              		.p2align 4,,10
 942              		.p2align 3
 943              	.L101:
 944              	.LBE263:
 945              	.LBE265:
 946              	.LBE268:
 947              	.LBE270:
 948              	.LBB271:
 107:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 949              		.loc 5 107 0 discriminator 1
 950 0220 89F2     		movl	%esi, %edx
 951              	.LVL98:
 952 0222 83F201   		xorl	$1, %edx
 953 0225 8811     		movb	%dl, (%rcx)
 954 0227 E933FEFF 		jmp	.L75
 954      FF
 955              	.LVL99:
 956 022c 0F1F4000 		.p2align 4,,10
 957              		.p2align 3
 958              	.L105:
 959              	.LBE271:
 960              	.LBB272:
 961              	.LBB269:
  90:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 962              		.loc 5 90 0 discriminator 1
 963 0230 89CE     		movl	%ecx, %esi
 964 0232 83F601   		xorl	$1, %esi
 965 0235 408830   		movb	%sil, (%rax)
 966 0238 E9D8FEFF 		jmp	.L60
 966      FF
 967              	.LVL100:
 968 023d 0F1F00   		.p2align 4,,10
 969              		.p2align 3
 970              	.L107:
 971              	.LBB266:
 972              	.LBB264:
 458:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_botrow = botRow;
 973              		.loc 3 458 0
 974 0240 89ABC400 		movl	%ebp, 196(%rbx)
 974      0000
 459:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_leftcol = leftCol;
 975              		.loc 3 459 0
 976 0246 89ABC800 		movl	%ebp, 200(%rbx)
 976      0000
 460:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_rightcol = rightCol;
 977              		.loc 3 460 0
 978 024c 89B3CC00 		movl	%esi, 204(%rbx)
 978      0000
 461:fltk-1.3.4-1/FL/Fl_Table.H ****     } else {
 979              		.loc 3 461 0
 980 0252 898BD000 		movl	%ecx, 208(%rbx)
 980      0000
 981 0258 EBB4     		jmp	.L68
 982              	.LVL101:
 983 025a 660F1F44 		.p2align 4,,10
 983      0000
 984              		.p2align 3
 985              	.L106:
 986              	.LBE264:
 987              	.LBE266:
 988              	.LBB267:
 989              	.LBB258:
 458:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_botrow = botRow;
 990              		.loc 3 458 0
 991 0260 4489BBC4 		movl	%r15d, 196(%rbx)
 991      000000
 459:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_leftcol = leftCol;
 992              		.loc 3 459 0
 993 0267 4489BBC8 		movl	%r15d, 200(%rbx)
 993      000000
 460:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_rightcol = rightCol;
 994              		.loc 3 460 0
 995 026e 89B3CC00 		movl	%esi, 204(%rbx)
 995      0000
 461:fltk-1.3.4-1/FL/Fl_Table.H ****     } else {
 996              		.loc 3 461 0
 997 0274 898BD000 		movl	%ecx, 208(%rbx)
 997      0000
 998 027a E9F6FEFF 		jmp	.L63
 998      FF
 999              	.LVL102:
 1000 027f 90       		.p2align 4,,10
 1001              		.p2align 3
 1002              	.L102:
 1003              	.LBE258:
 1004              	.LBE267:
 1005              	.LBE269:
 1006              	.LBE272:
 1007              	.LBB273:
 1008              	.LBB240:
 1009              	.LBB241:
 456:fltk-1.3.4-1/FL/Fl_Table.H ****       // Initialize redraw range
 1010              		.loc 3 456 0
 1011 0280 8B83C400 		movl	196(%rbx), %eax
 1011      0000
 1012              	.LBE241:
 1013              	.LBE240:
 112:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 1014              		.loc 5 112 0
 1015 0286 8B934001 		movl	320(%rbx), %edx
 1015      0000
 1016 028c 8B8B3C01 		movl	316(%rbx), %ecx
 1016      0000
 1017              	.LVL103:
 1018              	.LBB244:
 1019              	.LBB242:
 456:fltk-1.3.4-1/FL/Fl_Table.H ****       // Initialize redraw range
 1020              		.loc 3 456 0
 1021 0292 83F8FF   		cmpl	$-1, %eax
 1022 0295 744F     		je	.L108
 464:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( botRow > _redraw_botrow ) _redraw_botrow = botRow;
 1023              		.loc 3 464 0
 1024 0297 4139C7   		cmpl	%eax, %r15d
 1025 029a 7D07     		jge	.L79
 1026 029c 4489BBC4 		movl	%r15d, 196(%rbx)
 1026      000000
 1027              	.L79:
 465:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( leftCol < _redraw_leftcol ) _redraw_leftcol = leftCol;
 1028              		.loc 3 465 0
 1029 02a3 443BBBC8 		cmpl	200(%rbx), %r15d
 1029      000000
 1030 02aa 7E07     		jle	.L80
 1031 02ac 4489BBC8 		movl	%r15d, 200(%rbx)
 1031      000000
 1032              	.L80:
 466:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( rightCol > _redraw_rightcol ) _redraw_rightcol = rightCol;
 1033              		.loc 3 466 0
 1034 02b3 3B8BCC00 		cmpl	204(%rbx), %ecx
 1034      0000
 1035 02b9 7D06     		jge	.L81
 1036 02bb 898BCC00 		movl	%ecx, 204(%rbx)
 1036      0000
 1037              	.L81:
 467:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 1038              		.loc 3 467 0
 1039 02c1 3B93D000 		cmpl	208(%rbx), %edx
 1039      0000
 1040 02c7 7E06     		jle	.L78
 1041 02c9 8993D000 		movl	%edx, 208(%rbx)
 1041      0000
 1042              	.L78:
 471:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 1043              		.loc 3 471 0
 1044 02cf BE010000 		movl	$1, %esi
 1044      00
 1045              	.LVL104:
 1046 02d4 4889DF   		movq	%rbx, %rdi
 1047 02d7 E8000000 		call	_ZN9Fl_Widget6damageEh
 1047      00
 1048              	.LVL105:
 1049              	.LBE242:
 1050              	.LBE244:
 114:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1051              		.loc 5 114 0
 1052 02dc B8010000 		movl	$1, %eax
 1052      00
 1053 02e1 E9A1FDFF 		jmp	.L91
 1053      FF
 1054              	.LVL106:
 1055              	.L108:
 1056              	.LBB245:
 1057              	.LBB243:
 458:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_botrow = botRow;
 1058              		.loc 3 458 0
 1059 02e6 4489BBC4 		movl	%r15d, 196(%rbx)
 1059      000000
 459:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_leftcol = leftCol;
 1060              		.loc 3 459 0
 1061 02ed 4489BBC8 		movl	%r15d, 200(%rbx)
 1061      000000
 460:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_rightcol = rightCol;
 1062              		.loc 3 460 0
 1063 02f4 898BCC00 		movl	%ecx, 204(%rbx)
 1063      0000
 461:fltk-1.3.4-1/FL/Fl_Table.H ****     } else {
 1064              		.loc 3 461 0
 1065 02fa 8993D000 		movl	%edx, 208(%rbx)
 1065      0000
 1066 0300 EBCD     		jmp	.L78
 1067              	.LBE243:
 1068              	.LBE245:
 1069              	.LBE273:
 1070              	.LBE275:
 1071              	.LBE277:
 1072              		.cfi_endproc
 1073              	.LFE600:
 1075              		.section	.text.unlikely._ZN12Fl_Table_Row10select_rowEii
 1076              	.LCOLDE10:
 1077              		.section	.text._ZN12Fl_Table_Row10select_rowEii
 1078              	.LHOTE10:
 1079              		.section	.text.unlikely._ZN12Fl_Table_Row15select_all_rowsEi,"ax",@progbits
 1080              		.align 2
 1081              	.LCOLDB11:
 1082              		.section	.text._ZN12Fl_Table_Row15select_all_rowsEi,"ax",@progbits
 1083              	.LHOTB11:
 1084              		.align 2
 1085              		.p2align 4,,15
 1086              		.globl	_ZN12Fl_Table_Row15select_all_rowsEi
 1088              	_ZN12Fl_Table_Row15select_all_rowsEi:
 1089              	.LFB601:
 122:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 1090              		.loc 5 122 0
 1091              		.cfi_startproc
 1092              	.LVL107:
 1093              	.LBB278:
 123:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 1094              		.loc 5 123 0
 1095 0000 8B87CC01 		movl	460(%rdi), %eax
 1095      0000
 1096 0006 83F801   		cmpl	$1, %eax
 1097 0009 7415     		je	.L111
 1098 000b 83F802   		cmpl	$2, %eax
 1099 000e 7508     		jne	.L116
 1100              	.L112:
 1101              	.LBE278:
 1102 0010 E9000000 		jmp	_ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5
 1102      00
 1103              	.LVL108:
 1104              		.p2align 4,,10
 1105 0015 0F1F00   		.p2align 3
 1106              	.L116:
 1107 0018 F3C3     		rep ret
 1108 001a 660F1F44 		.p2align 4,,10
 1108      0000
 1109              		.p2align 3
 1110              	.L111:
 1111              	.LBB280:
 1112              	.LBB279:
 128:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1113              		.loc 5 128 0
 1114 0020 85F6     		testl	%esi, %esi
 1115 0022 74EC     		je	.L112
 1116 0024 F3C3     		rep ret
 1117              	.LBE279:
 1118              	.LBE280:
 1119              		.cfi_endproc
 1120              	.LFE601:
 1122              		.section	.text.unlikely._ZN12Fl_Table_Row15select_all_rowsEi
 1123              	.LCOLDE11:
 1124              		.section	.text._ZN12Fl_Table_Row15select_all_rowsEi
 1125              	.LHOTE11:
 1126              		.section	.text.unlikely._ZN12Fl_Table_Row4rowsEi,"ax",@progbits
 1127              		.align 2
 1128              	.LCOLDB12:
 1129              		.section	.text._ZN12Fl_Table_Row4rowsEi,"ax",@progbits
 1130              	.LHOTB12:
 1131              		.align 2
 1132              		.p2align 4,,15
 1133              		.globl	_ZN12Fl_Table_Row4rowsEi
 1135              	_ZN12Fl_Table_Row4rowsEi:
 1136              	.LFB602:
 146:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1137              		.loc 5 152 0
 1138              		.cfi_startproc
 1139              	.LVL109:
 1140 0000 4155     		pushq	%r13
 1141              		.cfi_def_cfa_offset 16
 1142              		.cfi_offset 13, -16
 1143 0002 4154     		pushq	%r12
 1144              		.cfi_def_cfa_offset 24
 1145              		.cfi_offset 12, -24
 1146 0004 4189F5   		movl	%esi, %r13d
 1147 0007 55       		pushq	%rbp
 1148              		.cfi_def_cfa_offset 32
 1149              		.cfi_offset 6, -32
 1150 0008 53       		pushq	%rbx
 1151              		.cfi_def_cfa_offset 40
 1152              		.cfi_offset 3, -40
 1153 0009 4889FD   		movq	%rdi, %rbp
 1154 000c 4883EC08 		subq	$8, %rsp
 1155              		.cfi_def_cfa_offset 48
 153:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 1156              		.loc 5 153 0
 1157 0010 E8000000 		call	_ZN8Fl_Table4rowsEi
 1157      00
 1158              	.LVL110:
 1159 0015 48639DB0 		movslq	432(%rbp), %rbx
 1159      010000
 1160              	.LVL111:
 154:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1161              		.loc 5 154 0
 1162 001c 4139DD   		cmpl	%ebx, %r13d
 1163 001f 7E38     		jle	.L121
 1164              	.LVL112:
 1165              		.p2align 4,,10
 1166 0021 0F1F8000 		.p2align 3
 1166      000000
 1167              	.L123:
 1168              	.LBB287:
 1169              	.LBB288:
 103:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       arr[x] = val;
 1170              		.loc 4 103 0 discriminator 1
 1171 0028 448D6301 		leal	1(%rbx), %r12d
 1172              	.LVL113:
 1173              	.LBB289:
 1174              	.LBB290:
  92:fltk-1.3.4-1/FL/Fl_Table_Row.H ****         _size = count;
 1175              		.loc 4 92 0 discriminator 1
 1176 002c 488BBDA8 		movq	424(%rbp), %rdi
 1176      010000
 1177 0033 4963F4   		movslq	%r12d, %rsi
 1178 0036 E8000000 		call	realloc
 1178      00
 1179              	.LVL114:
  93:fltk-1.3.4-1/FL/Fl_Table_Row.H ****       }
 1180              		.loc 4 93 0 discriminator 1
 1181 003b 4489A5B0 		movl	%r12d, 432(%rbp)
 1181      010000
 1182              	.LVL115:
  92:fltk-1.3.4-1/FL/Fl_Table_Row.H ****         _size = count;
 1183              		.loc 4 92 0 discriminator 1
 1184 0042 488985A8 		movq	%rax, 424(%rbp)
 1184      010000
 1185              	.LBE290:
 1186              	.LBE289:
 104:fltk-1.3.4-1/FL/Fl_Table_Row.H ****     }
 1187              		.loc 4 104 0 discriminator 1
 1188 0049 C6041800 		movb	$0, (%rax,%rbx)
 1189              	.LVL116:
 1190 004d 48639DB0 		movslq	432(%rbp), %rbx
 1190      010000
 1191              	.LBE288:
 1192              	.LBE287:
 1193              		.loc 5 154 0 discriminator 1
 1194 0054 4139DD   		cmpl	%ebx, %r13d
 1195 0057 7FCF     		jg	.L123
 1196              	.LVL117:
 1197              	.L121:
 155:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1198              		.loc 5 155 0 discriminator 2
 1199 0059 4139DD   		cmpl	%ebx, %r13d
 1200 005c 7D07     		jge	.L117
 1201              	.LVL118:
 1202 005e 4489ADB0 		movl	%r13d, 432(%rbp)
 1202      010000
 1203              	.LVL119:
 1204              	.L117:
 156:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 1205              		.loc 5 156 0
 1206 0065 4883C408 		addq	$8, %rsp
 1207              		.cfi_def_cfa_offset 40
 1208 0069 5B       		popq	%rbx
 1209              		.cfi_def_cfa_offset 32
 1210 006a 5D       		popq	%rbp
 1211              		.cfi_def_cfa_offset 24
 1212              	.LVL120:
 1213 006b 415C     		popq	%r12
 1214              		.cfi_def_cfa_offset 16
 1215 006d 415D     		popq	%r13
 1216              		.cfi_def_cfa_offset 8
 1217              	.LVL121:
 1218 006f C3       		ret
 1219              		.cfi_endproc
 1220              	.LFE602:
 1222              		.section	.text.unlikely._ZN12Fl_Table_Row4rowsEi
 1223              	.LCOLDE12:
 1224              		.section	.text._ZN12Fl_Table_Row4rowsEi
 1225              	.LHOTE12:
 1226              		.section	.text.unlikely._ZN12Fl_Table_Row6handleEi,"ax",@progbits
 1227              		.align 2
 1228              	.LCOLDB13:
 1229              		.section	.text._ZN12Fl_Table_Row6handleEi,"ax",@progbits
 1230              	.LHOTB13:
 1231              		.align 2
 1232              		.p2align 4,,15
 1233              		.globl	_ZN12Fl_Table_Row6handleEi
 1235              	_ZN12Fl_Table_Row6handleEi:
 1236              	.LFB603:
 157:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1237              		.loc 5 168 0
 1238              		.cfi_startproc
 1239              	.LVL122:
 1240 0000 4157     		pushq	%r15
 1241              		.cfi_def_cfa_offset 16
 1242              		.cfi_offset 15, -16
 1243 0002 4156     		pushq	%r14
 1244              		.cfi_def_cfa_offset 24
 1245              		.cfi_offset 14, -24
 1246 0004 4189F7   		movl	%esi, %r15d
 1247 0007 4155     		pushq	%r13
 1248              		.cfi_def_cfa_offset 32
 1249              		.cfi_offset 13, -32
 1250 0009 4154     		pushq	%r12
 1251              		.cfi_def_cfa_offset 40
 1252              		.cfi_offset 12, -40
 1253 000b 55       		pushq	%rbp
 1254              		.cfi_def_cfa_offset 48
 1255              		.cfi_offset 6, -48
 1256 000c 53       		pushq	%rbx
 1257              		.cfi_def_cfa_offset 56
 1258              		.cfi_offset 3, -56
 1259 000d 4889FB   		movq	%rdi, %rbx
 1260 0010 4883EC38 		subq	$56, %rsp
 1261              		.cfi_def_cfa_offset 112
 1262              	.LBB291:
 1263              	.LBB292:
 1264              		.file 6 "fltk-1.3.4-1/FL/Fl.H"
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
 1265              		.loc 6 702 0
 1266 0014 448B2500 		movl	_ZN2Fl7e_stateE(%rip), %r12d
 1266      000000
 1267              	.LBE292:
 1268              	.LBE291:
 1269              	.LBB293:
 1270              	.LBB294:
 603:fltk-1.3.4-1/FL/Fl.H ****   /**
 1271              		.loc 6 603 0
 1272 001b 448B2D00 		movl	_ZN2Fl3e_yE(%rip), %r13d
 1272      000000
 1273              	.LBE294:
 1274              	.LBE293:
 1275              		.loc 5 168 0
 1276 0022 64488B04 		movq	%fs:40, %rax
 1276      25280000 
 1276      00
 1277 002b 48894424 		movq	%rax, 40(%rsp)
 1277      28
 1278 0030 31C0     		xorl	%eax, %eax
 1279              	.LBB295:
 1280              	.LBB296:
 676:fltk-1.3.4-1/FL/Fl.H ****   /**
 1281              		.loc 6 676 0
 1282 0032 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 1282      0000
 1283 0038 8DA81801 		leal	-65256(%rax), %ebp
 1283      FFFF
 1284              	.LBE296:
 1285              	.LBE295:
 1286              	.LBB297:
 1287              	.LBB298:
 598:fltk-1.3.4-1/FL/Fl.H ****   /**
 1288              		.loc 6 598 0
 1289 003e 8B050000 		movl	_ZN2Fl3e_xE(%rip), %eax
 1289      0000
 1290 0044 8944240C 		movl	%eax, 12(%rsp)
 1291              	.LBE298:
 1292              	.LBE297:
 169:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 1293              		.loc 5 185 0
 1294 0048 E8000000 		call	_ZN8Fl_Table6handleEi
 1294      00
 1295              	.LVL123:
 186:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1296              		.loc 5 191 0
 1297 004d 4489E2   		movl	%r12d, %edx
 185:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1298              		.loc 5 185 0
 1299 0050 4189C6   		movl	%eax, %r14d
 1300              	.LVL124:
 1301              		.loc 5 191 0
 1302 0053 B8000004 		movl	$262144, %eax
 1302      00
 1303              	.LVL125:
 1304 0058 81E20000 		andl	$65536, %edx
 1304      0100
 1305 005e 4181E400 		andl	$262144, %r12d
 1305      000400
 192:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1306              		.loc 5 196 0
 1307 0065 488D4C24 		leaq	36(%rsp), %rcx
 1307      24
 191:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 1308              		.loc 5 191 0
 1309 006a 0F44C2   		cmove	%edx, %eax
 1310              		.loc 5 196 0
 1311 006d 488D7424 		leaq	28(%rsp), %rsi
 1311      1C
 1312 0072 488D5424 		leaq	32(%rsp), %rdx
 1312      20
 1313 0077 4889DF   		movq	%rbx, %rdi
 191:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 1314              		.loc 5 191 0
 1315 007a 4189C4   		movl	%eax, %r12d
 1316              	.LVL126:
 1317              		.loc 5 196 0
 1318 007d E8000000 		call	_ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE
 1318      00
 1319              	.LVL127:
 1320              	.LBB299:
 197:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1321              		.loc 5 197 0
 1322 0082 4183FF02 		cmpl	$2, %r15d
 1323 0086 0F844C01 		je	.L129
 1323      0000
 1324              		.loc 5 197 0 is_stmt 0 discriminator 4
 1325 008c 4183FF05 		cmpl	$5, %r15d
 1326 0090 0F84A200 		je	.L130
 1326      0000
 1327 0096 4183FF01 		cmpl	$1, %r15d
 1328 009a 7434     		je	.L185
 1329              	.LVL128:
 1330              	.L128:
 1331              	.LBE299:
 198:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 1332              		.loc 5 323 0 is_stmt 1
 1333 009c 488B7C24 		movq	40(%rsp), %rdi
 1333      28
 1334 00a1 6448333C 		xorq	%fs:40, %rdi
 1334      25280000 
 1334      00
 321:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 1335              		.loc 5 321 0
 1336 00aa 4489ABC0 		movl	%r13d, 448(%rbx)
 1336      010000
 1337              		.loc 5 323 0
 1338 00b1 4489F0   		movl	%r14d, %eax
 1339 00b4 0F85F502 		jne	.L186
 1339      0000
 1340 00ba 4883C438 		addq	$56, %rsp
 1341              		.cfi_remember_state
 1342              		.cfi_def_cfa_offset 56
 1343 00be 5B       		popq	%rbx
 1344              		.cfi_def_cfa_offset 48
 1345              	.LVL129:
 1346 00bf 5D       		popq	%rbp
 1347              		.cfi_def_cfa_offset 40
 1348 00c0 415C     		popq	%r12
 1349              		.cfi_def_cfa_offset 32
 1350 00c2 415D     		popq	%r13
 1351              		.cfi_def_cfa_offset 24
 1352 00c4 415E     		popq	%r14
 1353              		.cfi_def_cfa_offset 16
 1354              	.LVL130:
 1355 00c6 415F     		popq	%r15
 1356              		.cfi_def_cfa_offset 8
 1357              	.LVL131:
 1358 00c8 C3       		ret
 1359              	.LVL132:
 1360 00c9 0F1F8000 		.p2align 4,,10
 1360      000000
 1361              		.p2align 3
 1362              	.L185:
 1363              		.cfi_restore_state
 1364              	.LBB360:
 1365              	.LBB300:
 1366              	.LBB301:
 199:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 1367              		.loc 5 199 0
 1368 00d0 83FD01   		cmpl	$1, %ebp
 1369 00d3 75C7     		jne	.L128
 1370              	.LBB302:
 200:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 1371              		.loc 5 200 0
 1372 00d5 8B4C240C 		movl	12(%rsp), %ecx
 1373              	.LBB303:
 206:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1374              		.loc 5 206 0
 1375 00d9 83F810   		cmpl	$16, %eax
 1376              	.LBE303:
 201:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 1377              		.loc 5 201 0
 1378 00dc 4489ABC8 		movl	%r13d, 456(%rbx)
 1378      010000
 200:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 1379              		.loc 5 200 0
 1380 00e3 898BC401 		movl	%ecx, 452(%rbx)
 1380      0000
 1381              	.LBB322:
 206:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1382              		.loc 5 206 0
 1383 00e9 75B1     		jne	.L128
 1384              	.LBB304:
 1385              	.LBB305:
 208:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1386              		.loc 5 208 0
 1387 00eb 4181FC00 		cmpl	$65536, %r12d
 1387      000100
 1388 00f2 0F840802 		je	.L133
 1388      0000
 1389 00f8 4181FC00 		cmpl	$262144, %r12d
 1389      000400
 1390 00ff 0F85D301 		jne	.L176
 1390      0000
 1391              	.LBB306:
 210:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 1392              		.loc 5 210 0
 1393 0105 8B74241C 		movl	28(%rsp), %esi
 1394 0109 BA020000 		movl	$2, %edx
 1394      00
 1395 010e 4889DF   		movq	%rbx, %rdi
 1396 0111 E8000000 		call	_ZN12Fl_Table_Row10select_rowEii
 1396      00
 1397              	.LVL133:
 1398              	.L135:
 1399              	.LBE306:
 1400              	.LBE305:
 234:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1401              		.loc 5 234 0
 1402 0116 8B44241C 		movl	28(%rsp), %eax
 235:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 1403              		.loc 5 235 0
 1404 011a C783B801 		movl	$1, 440(%rbx)
 1404      00000100 
 1404      0000
 1405              	.LVL134:
 236:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1406              		.loc 5 236 0
 1407 0124 41BE0100 		movl	$1, %r14d
 1407      0000
 234:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1408              		.loc 5 234 0
 1409 012a 8983BC01 		movl	%eax, 444(%rbx)
 1409      0000
 1410              	.LBE304:
 1411 0130 E967FFFF 		jmp	.L128
 1411      FF
 1412              	.LVL135:
 1413              		.p2align 4,,10
 1414 0135 0F1F00   		.p2align 3
 1415              	.L130:
 1416              	.LBE322:
 1417              	.LBE302:
 1418              	.LBE301:
 1419              	.LBB327:
 243:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1420              		.loc 5 243 0
 1421 0138 8B93B801 		movl	440(%rbx), %edx
 1421      0000
 1422 013e 85D2     		testl	%edx, %edx
 1423 0140 0F8456FF 		je	.L128
 1423      FFFF
 1424              	.LBB328:
 245:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 1425              		.loc 5 245 0
 1426 0146 8B8B7001 		movl	368(%rbx), %ecx
 1426      0000
 1427 014c 8B93C001 		movl	448(%rbx), %edx
 1427      0000
 1428              	.LVL136:
 1429              	.LBB329:
 248:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 1430              		.loc 5 248 0
 1431 0152 89CE     		movl	%ecx, %esi
 1432 0154 29D6     		subl	%edx, %esi
 1433              	.LVL137:
 1434 0156 85F6     		testl	%esi, %esi
 1435 0158 0F8EFA00 		jle	.L142
 1435      0000
 1436 015e 8BB3B000 		movl	176(%rbx), %esi
 1436      0000
 1437              	.LVL138:
 248:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 1438              		.loc 5 248 0 is_stmt 0 discriminator 1
 1439 0164 85F6     		testl	%esi, %esi
 1440 0166 0F8EEC00 		jle	.L142
 1440      0000
 1441              	.LBB330:
 250:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1442              		.loc 5 250 0 is_stmt 1
 1443 016c 4429EA   		subl	%r13d, %edx
 1444              	.LVL139:
 251:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1445              		.loc 5 251 0
 1446 016f 85D2     		testl	%edx, %edx
 1447 0171 7E56     		jle	.L183
 1448              	.LVL140:
 255:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 1449              		.loc 5 255 0
 1450 0173 29D6     		subl	%edx, %esi
 1451 0175 4889DF   		movq	%rbx, %rdi
 1452 0178 E8000000 		call	_ZN8Fl_Table12row_positionEi
 1452      00
 1453              	.LVL141:
 1454 017d 8BB3B000 		movl	176(%rbx), %esi
 1454      0000
 256:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1455              		.loc 5 256 0
 1456 0183 C7442420 		movl	$0, 32(%rsp)
 1456      00000000 
 1457              	.LVL142:
 257:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 1458              		.loc 5 257 0
 1459 018b 85F6     		testl	%esi, %esi
 256:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1460              		.loc 5 256 0
 1461 018d 8974241C 		movl	%esi, 28(%rsp)
 257:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 1462              		.loc 5 257 0
 1463 0191 7836     		js	.L183
 1464              	.LVL143:
 1465 0193 39B3A000 		cmpl	%esi, 160(%rbx)
 1465      0000
 1466 0199 7C2E     		jl	.L183
 1467              	.LVL144:
 1468              	.L161:
 1469              	.LBE330:
 1470              	.LBE329:
 1471              	.LBB333:
 1472              	.LBB334:
 1473              	.LBB335:
 271:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1474              		.loc 5 271 0
 1475 019b 4181FC00 		cmpl	$262144, %r12d
 1475      000400
 1476 01a2 0F85AC01 		jne	.L177
 1476      0000
 1477              	.LBB336:
 273:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1478              		.loc 5 273 0
 1479 01a8 8B83BC01 		movl	444(%rbx), %eax
 1479      0000
 1480 01ae 39C6     		cmpl	%eax, %esi
 1481 01b0 7411     		je	.L151
 274:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 1482              		.loc 5 274 0
 1483 01b2 BA020000 		movl	$2, %edx
 1483      00
 1484 01b7 4889DF   		movq	%rbx, %rdi
 1485 01ba E8000000 		call	_ZN12Fl_Table_Row10select_rowEii
 1485      00
 1486              	.LVL145:
 1487 01bf 8B44241C 		movl	28(%rsp), %eax
 1488              	.LVL146:
 1489              	.L151:
 1490              	.LBE336:
 1491              	.LBE335:
 294:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1492              		.loc 5 294 0
 1493 01c3 8983BC01 		movl	%eax, 444(%rbx)
 1493      0000
 1494              	.LVL147:
 1495              	.L183:
 293:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 1496              		.loc 5 293 0
 1497 01c9 41BE0100 		movl	$1, %r14d
 1497      0000
 1498              	.LBE334:
 1499 01cf E9C8FEFF 		jmp	.L128
 1499      FF
 1500              	.LVL148:
 1501              		.p2align 4,,10
 1502 01d4 0F1F4000 		.p2align 3
 1503              	.L129:
 1504              	.LBE333:
 1505              	.LBE328:
 1506              	.LBE327:
 1507              	.LBB348:
 301:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1508              		.loc 5 301 0
 1509 01d8 83FD01   		cmpl	$1, %ebp
 1510 01db 0F85BBFE 		jne	.L128
 1510      FFFF
 1511              	.LBB349:
 308:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 1512              		.loc 5 308 0
 1513 01e1 8B832C01 		movl	300(%rbx), %eax
 1513      0000
 1514              	.LVL149:
 1515 01e7 03835C01 		addl	348(%rbx), %eax
 1515      0000
 307:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 1516              		.loc 5 307 0
 1517 01ed 8B933001 		movl	304(%rbx), %edx
 1517      0000
 1518 01f3 03936001 		addl	352(%rbx), %edx
 1518      0000
 310:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 1519              		.loc 5 310 0
 1520 01f9 3B83C401 		cmpl	452(%rbx), %eax
 1520      0000
 302:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 1521              		.loc 5 302 0
 1522 01ff C783B801 		movl	$0, 440(%rbx)
 1522      00000000 
 1522      0000
 1523              	.LVL150:
 310:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 1524              		.loc 5 310 0
 1525 0209 7D35     		jge	.L165
 1526 020b 3944240C 		cmpl	%eax, 12(%rsp)
 1527 020f 7E2F     		jle	.L165
 1528              	.L155:
 1529              	.LVL151:
 1530              	.LBB350:
 1531              	.LBB351:
 1532              	.LBB352:
 123:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 1533              		.loc 5 123 0
 1534 0211 8B83CC01 		movl	460(%rbx), %eax
 1534      0000
 1535              	.LVL152:
 1536              	.LBE352:
 1537              	.LBE351:
 1538              	.LBE350:
 303:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 1539              		.loc 5 303 0
 1540 0217 41BE0100 		movl	$1, %r14d
 1540      0000
 1541              	.LBB355:
 1542              	.LBB354:
 1543              	.LBB353:
 123:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 1544              		.loc 5 123 0
 1545 021d 83E801   		subl	$1, %eax
 1546 0220 83F801   		cmpl	$1, %eax
 1547 0223 0F8773FE 		ja	.L128
 1547      FFFF
 1548              	.LBE353:
 1549 0229 31F6     		xorl	%esi, %esi
 1550 022b 4889DF   		movq	%rbx, %rdi
 1551 022e E8000000 		call	_ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5
 1551      00
 1552              	.LVL153:
 1553 0233 E964FEFF 		jmp	.L128
 1553      FF
 1554              	.LVL154:
 1555 0238 0F1F8400 		.p2align 4,,10
 1555      00000000 
 1556              		.p2align 3
 1557              	.L165:
 1558              	.LBE354:
 1559              	.LBE355:
 311:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1560              		.loc 5 311 0 discriminator 1
 1561 0240 3B93C801 		cmpl	456(%rbx), %edx
 1561      0000
 1562 0246 7D81     		jge	.L183
 1563 0248 4139D5   		cmpl	%edx, %r13d
 1564 024b 7FC4     		jg	.L155
 1565 024d E977FFFF 		jmp	.L183
 1565      FF
 1566              	.LVL155:
 1567              		.p2align 4,,10
 1568 0252 660F1F44 		.p2align 3
 1568      0000
 1569              	.L142:
 1570              	.LBE349:
 1571              	.LBE348:
 1572              	.LBB356:
 1573              	.LBB346:
 1574              	.LBB343:
 1575              	.LBB331:
 259:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1576              		.loc 5 259 0
 1577 0258 038B7801 		addl	376(%rbx), %ecx
 1577      0000
 1578              	.LVL156:
 1579 025e 89D7     		movl	%edx, %edi
 1580 0260 29CF     		subl	%ecx, %edi
 1581 0262 85FF     		testl	%edi, %edi
 1582 0264 7E5A     		jle	.L148
 1583              	.LVL157:
 259:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1584              		.loc 5 259 0 is_stmt 0 discriminator 1
 1585 0266 8B8B3801 		movl	312(%rbx), %ecx
 1585      0000
 1586 026c 398BA000 		cmpl	%ecx, 160(%rbx)
 1586      0000
 1587 0272 7E4C     		jle	.L148
 1588              	.LBB332:
 261:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 1589              		.loc 5 261 0 is_stmt 1
 1590 0274 4489EE   		movl	%r13d, %esi
 1591 0277 29D6     		subl	%edx, %esi
 1592              	.LVL158:
 262:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1593              		.loc 5 262 0
 1594 0279 85F6     		testl	%esi, %esi
 1595 027b 0F8E48FF 		jle	.L183
 1595      FFFF
 1596              	.LVL159:
 266:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 1597              		.loc 5 266 0
 1598 0281 03B3B000 		addl	176(%rbx), %esi
 1598      0000
 1599              	.LVL160:
 1600 0287 4889DF   		movq	%rbx, %rdi
 1601 028a E8000000 		call	_ZN8Fl_Table12row_positionEi
 1601      00
 1602              	.LVL161:
 267:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 1603              		.loc 5 267 0
 1604 028f 8BB33801 		movl	312(%rbx), %esi
 1604      0000
 1605 0295 C7442420 		movl	$0, 32(%rsp)
 1605      00000000 
 268:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 1606              		.loc 5 268 0
 1607 029d 85F6     		testl	%esi, %esi
 267:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 1608              		.loc 5 267 0
 1609 029f 8974241C 		movl	%esi, 28(%rsp)
 268:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 1610              		.loc 5 268 0
 1611 02a3 0F8820FF 		js	.L183
 1611      FFFF
 1612 02a9 3BB3A000 		cmpl	160(%rbx), %esi
 1612      0000
 1613 02af 0F8F14FF 		jg	.L183
 1613      FFFF
 1614 02b5 E9E1FEFF 		jmp	.L161
 1614      FF
 1615              	.LVL162:
 1616 02ba 660F1F44 		.p2align 4,,10
 1616      0000
 1617              		.p2align 3
 1618              	.L148:
 1619              	.LBE332:
 1620              	.LBE331:
 1621              	.LBE343:
 1622              	.LBB344:
 270:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 1623              		.loc 5 270 0
 1624 02c0 83F810   		cmpl	$16, %eax
 1625 02c3 0F85D3FD 		jne	.L128
 1625      FFFF
 1626 02c9 8B74241C 		movl	28(%rsp), %esi
 1627 02cd E9C9FEFF 		jmp	.L161
 1627      FF
 1628              	.LVL163:
 1629              		.p2align 4,,10
 1630 02d2 660F1F44 		.p2align 3
 1630      0000
 1631              	.L176:
 1632              	.LBE344:
 1633              	.LBE346:
 1634              	.LBE356:
 1635              	.LBB357:
 1636              	.LBB325:
 1637              	.LBB323:
 1638              	.LBB320:
 1639              	.LBB318:
 1640              	.LBB316:
 1641              	.LBB307:
 1642              	.LBB308:
 1643              	.LBB309:
 123:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 1644              		.loc 5 123 0
 1645 02d8 8B83CC01 		movl	460(%rbx), %eax
 1645      0000
 1646              	.LVL164:
 1647 02de 83E801   		subl	$1, %eax
 1648 02e1 83F801   		cmpl	$1, %eax
 1649 02e4 0F86B600 		jbe	.L187
 1649      0000
 1650              	.L140:
 1651              	.LVL165:
 1652              	.LBE309:
 1653              	.LBE308:
 1654              	.LBE307:
 230:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 1655              		.loc 5 230 0
 1656 02ea 8B74241C 		movl	28(%rsp), %esi
 1657 02ee BA010000 		movl	$1, %edx
 1657      00
 1658 02f3 4889DF   		movq	%rbx, %rdi
 1659 02f6 E8000000 		call	_ZN12Fl_Table_Row10select_rowEii
 1659      00
 1660              	.LVL166:
 231:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 1661              		.loc 5 231 0
 1662 02fb E916FEFF 		jmp	.L135
 1662      FF
 1663              	.LVL167:
 1664              		.p2align 4,,10
 1665              		.p2align 3
 1666              	.L133:
 1667              	.LBB311:
 214:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 1668              		.loc 5 214 0
 1669 0300 8B74241C 		movl	28(%rsp), %esi
 1670 0304 BA010000 		movl	$1, %edx
 1670      00
 1671 0309 4889DF   		movq	%rbx, %rdi
 1672 030c E8000000 		call	_ZN12Fl_Table_Row10select_rowEii
 1672      00
 1673              	.LVL168:
 1674              	.LBB312:
 215:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 1675              		.loc 5 215 0
 1676 0311 8BABBC01 		movl	444(%rbx), %ebp
 1676      0000
 1677 0317 85ED     		testl	%ebp, %ebp
 1678 0319 0F88F7FD 		js	.L135
 1678      FFFF
 1679              	.LBB313:
 216:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1680              		.loc 5 216 0
 1681 031f 448B6424 		movl	28(%rsp), %r12d
 1681      1C
 1682              	.LVL169:
 217:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 1683              		.loc 5 217 0
 1684 0324 4439E5   		cmpl	%r12d, %ebp
 1685 0327 7C0F     		jl	.L139
 1686 0329 89E8     		movl	%ebp, %eax
 1687 032b 4489E5   		movl	%r12d, %ebp
 1688              	.LVL170:
 1689 032e 4189C4   		movl	%eax, %r12d
 1690              	.LVL171:
 1691              		.p2align 4,,10
 1692 0331 0F1F8000 		.p2align 3
 1692      000000
 1693              	.L139:
 1694              	.LBB314:
 222:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 1695              		.loc 5 222 0 discriminator 2
 1696 0338 89EE     		movl	%ebp, %esi
 1697 033a BA010000 		movl	$1, %edx
 1697      00
 1698 033f 4889DF   		movq	%rbx, %rdi
 221:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 1699              		.loc 5 221 0 discriminator 2
 1700 0342 83C501   		addl	$1, %ebp
 1701              	.LVL172:
 222:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 1702              		.loc 5 222 0 discriminator 2
 1703 0345 E8000000 		call	_ZN12Fl_Table_Row10select_rowEii
 1703      00
 1704              	.LVL173:
 221:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 1705              		.loc 5 221 0 discriminator 2
 1706 034a 4439E5   		cmpl	%r12d, %ebp
 1707 034d 7EE9     		jle	.L139
 1708 034f E9C2FDFF 		jmp	.L135
 1708      FF
 1709              	.LVL174:
 1710              	.L177:
 1711              	.LBE314:
 1712              	.LBE313:
 1713              	.LBE312:
 1714              	.LBE311:
 1715              	.LBE316:
 1716              	.LBE318:
 1717              	.LBE320:
 1718              	.LBE323:
 1719              	.LBE325:
 1720              	.LBE357:
 1721              	.LBB358:
 1722              	.LBB347:
 1723              	.LBB345:
 1724              	.LBB342:
 1725              	.LBB341:
 1726              	.LBB340:
 280:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 1727              		.loc 5 280 0
 1728 0354 BA010000 		movl	$1, %edx
 1728      00
 1729 0359 4889DF   		movq	%rbx, %rdi
 1730 035c E8000000 		call	_ZN12Fl_Table_Row10select_rowEii
 1730      00
 1731              	.LVL175:
 1732              	.LBB337:
 281:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1733              		.loc 5 281 0
 1734 0361 8BABBC01 		movl	444(%rbx), %ebp
 1734      0000
 1735 0367 85ED     		testl	%ebp, %ebp
 1736 0369 782C     		js	.L182
 1737              	.LBB338:
 282:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 1738              		.loc 5 282 0
 1739 036b 448B6424 		movl	28(%rsp), %r12d
 1739      1C
 1740              	.LVL176:
 283:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 1741              		.loc 5 283 0
 1742 0370 4439E5   		cmpl	%r12d, %ebp
 1743 0373 7C0B     		jl	.L154
 1744 0375 89E8     		movl	%ebp, %eax
 1745 0377 4489E5   		movl	%r12d, %ebp
 1746              	.LVL177:
 1747 037a 4189C4   		movl	%eax, %r12d
 1748              	.LVL178:
 1749 037d 0F1F00   		.p2align 4,,10
 1750              		.p2align 3
 1751              	.L154:
 1752              	.LBB339:
 288:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 1753              		.loc 5 288 0 discriminator 2
 1754 0380 89EE     		movl	%ebp, %esi
 1755 0382 BA010000 		movl	$1, %edx
 1755      00
 1756 0387 4889DF   		movq	%rbx, %rdi
 287:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 1757              		.loc 5 287 0 discriminator 2
 1758 038a 83C501   		addl	$1, %ebp
 1759              	.LVL179:
 288:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 1760              		.loc 5 288 0 discriminator 2
 1761 038d E8000000 		call	_ZN12Fl_Table_Row10select_rowEii
 1761      00
 1762              	.LVL180:
 287:fltk-1.3.4-1/src/Fl_Table_Row.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 1763              		.loc 5 287 0 discriminator 2
 1764 0392 4439E5   		cmpl	%r12d, %ebp
 1765 0395 7EE9     		jle	.L154
 1766              	.LVL181:
 1767              	.L182:
 1768 0397 8B44241C 		movl	28(%rsp), %eax
 1769 039b E923FEFF 		jmp	.L151
 1769      FF
 1770              	.LVL182:
 1771              	.L187:
 1772              	.LBE339:
 1773              	.LBE338:
 1774              	.LBE337:
 1775              	.LBE340:
 1776              	.LBE341:
 1777              	.LBE342:
 1778              	.LBE345:
 1779              	.LBE347:
 1780              	.LBE358:
 1781              	.LBB359:
 1782              	.LBB326:
 1783              	.LBB324:
 1784              	.LBB321:
 1785              	.LBB319:
 1786              	.LBB317:
 1787              	.LBB315:
 1788              	.LBB310:
 1789 03a0 31F6     		xorl	%esi, %esi
 1790 03a2 4889DF   		movq	%rbx, %rdi
 1791 03a5 E8000000 		call	_ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5
 1791      00
 1792              	.LVL183:
 1793 03aa E93BFFFF 		jmp	.L140
 1793      FF
 1794              	.LVL184:
 1795              	.L186:
 1796              	.LBE310:
 1797              	.LBE315:
 1798              	.LBE317:
 1799              	.LBE319:
 1800              	.LBE321:
 1801              	.LBE324:
 1802              	.LBE326:
 1803              	.LBE359:
 1804              	.LBE300:
 1805              	.LBE360:
 1806              		.loc 5 323 0
 1807 03af E8000000 		call	__stack_chk_fail
 1807      00
 1808              	.LVL185:
 1809              		.cfi_endproc
 1810              	.LFE603:
 1812              		.section	.text.unlikely._ZN12Fl_Table_Row6handleEi
 1813              	.LCOLDE13:
 1814              		.section	.text._ZN12Fl_Table_Row6handleEi
 1815              	.LHOTE13:
 1816              		.weak	_ZTS12Fl_Table_Row
 1817              		.section	.rodata._ZTS12Fl_Table_Row,"aG",@progbits,_ZTS12Fl_Table_Row,comdat
 1818              		.align 8
 1821              	_ZTS12Fl_Table_Row:
 1822 0000 3132466C 		.string	"12Fl_Table_Row"
 1822      5F546162 
 1822      6C655F52 
 1822      6F7700
 1823              		.weak	_ZTI12Fl_Table_Row
 1824              		.section	.rodata._ZTI12Fl_Table_Row,"aG",@progbits,_ZTI12Fl_Table_Row,comdat
 1825              		.align 8
 1828              	_ZTI12Fl_Table_Row:
 1829 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1829      00000000 
 1830 0008 00000000 		.quad	_ZTS12Fl_Table_Row
 1830      00000000 
 1831 0010 00000000 		.quad	_ZTI8Fl_Table
 1831      00000000 
 1832              		.weak	_ZTV12Fl_Table_Row
 1833              		.section	.rodata._ZTV12Fl_Table_Row,"aG",@progbits,_ZTV12Fl_Table_Row,comdat
 1834              		.align 8
 1837              	_ZTV12Fl_Table_Row:
 1838 0000 00000000 		.quad	0
 1838      00000000 
 1839 0008 00000000 		.quad	_ZTI12Fl_Table_Row
 1839      00000000 
 1840 0010 00000000 		.quad	_ZN12Fl_Table_RowD1Ev
 1840      00000000 
 1841 0018 00000000 		.quad	_ZN12Fl_Table_RowD0Ev
 1841      00000000 
 1842 0020 00000000 		.quad	_ZN8Fl_Table4drawEv
 1842      00000000 
 1843 0028 00000000 		.quad	_ZN12Fl_Table_Row6handleEi
 1843      00000000 
 1844 0030 00000000 		.quad	_ZN8Fl_Table6resizeEiiii
 1844      00000000 
 1845 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1845      00000000 
 1846 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1846      00000000 
 1847 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 1847      00000000 
 1848 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1848      00000000 
 1849 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1849      00000000 
 1850 0060 00000000 		.quad	_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii
 1850      00000000 
 1851 0068 00000000 		.quad	_ZN12Fl_Table_Row5clearEv
 1851      00000000 
 1852 0070 00000000 		.quad	_ZN12Fl_Table_Row4rowsEi
 1852      00000000 
 1853 0078 00000000 		.quad	_ZN8Fl_Table4colsEi
 1853      00000000 
 1854              		.text
 1855              	.Letext0:
 1856              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 1857              	.Letext_cold0:
 1858              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1859              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1860              		.file 9 "/usr/include/libio.h"
 1861              		.file 10 "fltk-1.3.4-1/FL/fl_types.h"
 1862              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 1863              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 1864              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 1865              		.file 14 "fltk-1.3.4-1/FL/Fl_Scroll.H"
 1866              		.file 15 "/usr/include/stdio.h"
 1867              		.file 16 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Table_Row.cxx
     /tmp/ccpyqm8z.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccpyqm8z.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccpyqm8z.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccpyqm8z.s:90     .text._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii:0000000000000000 _ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii
     /tmp/ccpyqm8z.s:113    .text._ZN12Fl_Table_RowD2Ev:0000000000000000 _ZN12Fl_Table_RowD2Ev
     /tmp/ccpyqm8z.s:1837   .rodata._ZTV12Fl_Table_Row:0000000000000000 _ZTV12Fl_Table_Row
     /tmp/ccpyqm8z.s:113    .text._ZN12Fl_Table_RowD2Ev:0000000000000000 _ZN12Fl_Table_RowD1Ev
     /tmp/ccpyqm8z.s:167    .text._ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5:0000000000000000 _ZN12Fl_Table_Row15select_all_rowsEi.part.4.constprop.5
     /tmp/ccpyqm8z.s:282    .text._ZN12Fl_Table_Row5clearEv:0000000000000000 _ZN12Fl_Table_Row5clearEv
     /tmp/ccpyqm8z.s:347    .text._ZN12Fl_Table_RowD0Ev:0000000000000000 _ZN12Fl_Table_RowD0Ev
     /tmp/ccpyqm8z.s:401    .text._ZN12Fl_Table_Row12row_selectedEi:0000000000000000 _ZN12Fl_Table_Row12row_selectedEi
     /tmp/ccpyqm8z.s:443    .text._ZN12Fl_Table_Row4typeENS_18TableRowSelectModeE:0000000000000000 _ZN12Fl_Table_Row4typeENS_18TableRowSelectModeE
     /tmp/ccpyqm8z.s:562    .text._ZN12Fl_Table_Row10select_rowEii:0000000000000000 _ZN12Fl_Table_Row10select_rowEii
     /tmp/ccpyqm8z.s:1088   .text._ZN12Fl_Table_Row15select_all_rowsEi:0000000000000000 _ZN12Fl_Table_Row15select_all_rowsEi
     /tmp/ccpyqm8z.s:1135   .text._ZN12Fl_Table_Row4rowsEi:0000000000000000 _ZN12Fl_Table_Row4rowsEi
     /tmp/ccpyqm8z.s:1235   .text._ZN12Fl_Table_Row6handleEi:0000000000000000 _ZN12Fl_Table_Row6handleEi
     /tmp/ccpyqm8z.s:1821   .rodata._ZTS12Fl_Table_Row:0000000000000000 _ZTS12Fl_Table_Row
     /tmp/ccpyqm8z.s:1828   .rodata._ZTI12Fl_Table_Row:0000000000000000 _ZTI12Fl_Table_Row
                           .group:0000000000000000 _ZN12Fl_Table_RowD5Ev
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
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d

UNDEFINED SYMBOLS
free
_ZN8Fl_TableD2Ev
_ZN9Fl_Widget6redrawEv
_ZN9Fl_Scroll5clearEv
_ZdlPv
_ZN9Fl_Widget6damageEh
_ZN8Fl_Table4rowsEi
realloc
_ZN2Fl7e_stateE
_ZN2Fl3e_yE
_ZN2Fl8e_keysymE
_ZN2Fl3e_xE
_ZN8Fl_Table6handleEi
_ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE
_ZN8Fl_Table12row_positionEi
__stack_chk_fail
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Table
_ZN8Fl_Table4drawEv
_ZN8Fl_Table6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
_ZN8Fl_Table4colsEi
