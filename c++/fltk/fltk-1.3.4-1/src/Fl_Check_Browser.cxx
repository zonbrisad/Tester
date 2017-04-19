   1              		.file	"Fl_Check_Browser.cxx"
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
  17              	.LFB179:
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
  26              	.LFE179:
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
  42              	.LFB180:
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
  50              	.LFE180:
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
  66              	.LFB196:
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
  75              	.LFE196:
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
  91              	.LFB504:
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
 100              	.LFE504:
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
 116              	.LFB505:
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
 124              	.LFE505:
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
 140              	.LFB506:
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
 146              	.LFE506:
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
 162              	.LFB507:
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
 170              	.LFE507:
 172              		.section	.text.unlikely._ZNK11Fl_Browser_7item_atEi,"axG",@progbits,_ZNK11Fl_Browser_7item_atEi,co
 173              	.LCOLDE6:
 174              		.section	.text._ZNK11Fl_Browser_7item_atEi,"axG",@progbits,_ZNK11Fl_Browser_7item_atEi,comdat
 175              	.LHOTE6:
 176              		.section	.text.unlikely._ZNK16Fl_Check_Browser10item_firstEv,"ax",@progbits
 177              		.align 2
 178              	.LCOLDB7:
 179              		.section	.text._ZNK16Fl_Check_Browser10item_firstEv,"ax",@progbits
 180              	.LHOTB7:
 181              		.align 2
 182              		.p2align 4,,15
 183              		.globl	_ZNK16Fl_Check_Browser10item_firstEv
 185              	_ZNK16Fl_Check_Browser10item_firstEv:
 186              	.LFB545:
 187              		.file 4 "fltk-1.3.4-1/src/Fl_Check_Browser.cxx"
   1:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    1              		.file	"Fl_Check_Browser.cxx"
   2:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   17              	.LFB179:
  17:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 188              		.loc 4 88 0
 189              		.cfi_startproc
 190              	.LVL7:
  89:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 191              		.loc 4 89 0
 192 0000 488B8768 		movq	616(%rdi), %rax
 192      020000
  90:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 193              		.loc 4 90 0
 194 0007 C3       		ret
 195              		.cfi_endproc
 196              	.LFE545:
 198              		.section	.text.unlikely._ZNK16Fl_Check_Browser10item_firstEv
 199              	.LCOLDE7:
 200              		.section	.text._ZNK16Fl_Check_Browser10item_firstEv
 201              	.LHOTE7:
 202              		.section	.text.unlikely._ZNK16Fl_Check_Browser9item_nextEPv,"ax",@progbits
 203              		.align 2
 204              	.LCOLDB8:
 205              		.section	.text._ZNK16Fl_Check_Browser9item_nextEPv,"ax",@progbits
 206              	.LHOTB8:
 207              		.align 2
 208              		.p2align 4,,15
 209              		.globl	_ZNK16Fl_Check_Browser9item_nextEPv
 211              	_ZNK16Fl_Check_Browser9item_nextEPv:
 212              	.LFB546:
  91:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 213              		.loc 4 92 0
 214              		.cfi_startproc
 215              	.LVL8:
  93:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 216              		.loc 4 93 0
 217 0000 488B06   		movq	(%rsi), %rax
  94:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 218              		.loc 4 94 0
 219 0003 C3       		ret
 220              		.cfi_endproc
 221              	.LFE546:
 223              		.section	.text.unlikely._ZNK16Fl_Check_Browser9item_nextEPv
 224              	.LCOLDE8:
 225              		.section	.text._ZNK16Fl_Check_Browser9item_nextEPv
 226              	.LHOTE8:
 227              		.section	.text.unlikely._ZNK16Fl_Check_Browser9item_prevEPv,"ax",@progbits
 228              		.align 2
 229              	.LCOLDB9:
 230              		.section	.text._ZNK16Fl_Check_Browser9item_prevEPv,"ax",@progbits
 231              	.LHOTB9:
 232              		.align 2
 233              		.p2align 4,,15
 234              		.globl	_ZNK16Fl_Check_Browser9item_prevEPv
 236              	_ZNK16Fl_Check_Browser9item_prevEPv:
 237              	.LFB547:
  95:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 238              		.loc 4 96 0
 239              		.cfi_startproc
 240              	.LVL9:
  97:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 241              		.loc 4 97 0
 242 0000 488B4608 		movq	8(%rsi), %rax
  98:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 243              		.loc 4 98 0
 244 0004 C3       		ret
 245              		.cfi_endproc
 246              	.LFE547:
 248              		.section	.text.unlikely._ZNK16Fl_Check_Browser9item_prevEPv
 249              	.LCOLDE9:
 250              		.section	.text._ZNK16Fl_Check_Browser9item_prevEPv
 251              	.LHOTE9:
 252              		.section	.text.unlikely._ZNK16Fl_Check_Browser11item_heightEPv,"ax",@progbits
 253              		.align 2
 254              	.LCOLDB10:
 255              		.section	.text._ZNK16Fl_Check_Browser11item_heightEPv,"ax",@progbits
 256              	.LHOTB10:
 257              		.align 2
 258              		.p2align 4,,15
 259              		.globl	_ZNK16Fl_Check_Browser11item_heightEPv
 261              	_ZNK16Fl_Check_Browser11item_heightEPv:
 262              	.LFB548:
  99:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 263              		.loc 4 100 0
 264              		.cfi_startproc
 265              	.LVL10:
 101:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 266              		.loc 4 101 0
 267 0000 8B87C000 		movl	192(%rdi), %eax
 267      0000
 268 0006 83C002   		addl	$2, %eax
 102:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 269              		.loc 4 102 0
 270 0009 C3       		ret
 271              		.cfi_endproc
 272              	.LFE548:
 274              		.section	.text.unlikely._ZNK16Fl_Check_Browser11item_heightEPv
 275              	.LCOLDE10:
 276              		.section	.text._ZNK16Fl_Check_Browser11item_heightEPv
 277              	.LHOTE10:
 278              		.section	.text.unlikely._ZNK16Fl_Check_Browser13item_selectedEPv,"ax",@progbits
 279              		.align 2
 280              	.LCOLDB11:
 281              		.section	.text._ZNK16Fl_Check_Browser13item_selectedEPv,"ax",@progbits
 282              	.LHOTB11:
 283              		.align 2
 284              		.p2align 4,,15
 285              		.globl	_ZNK16Fl_Check_Browser13item_selectedEPv
 287              	_ZNK16Fl_Check_Browser13item_selectedEPv:
 288              	.LFB552:
 103:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 289              		.loc 4 155 0
 290              		.cfi_startproc
 291              	.LVL11:
 156:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 292              		.loc 4 157 0
 293 0000 0FBE4611 		movsbl	17(%rsi), %eax
 158:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 294              		.loc 4 158 0
 295 0004 C3       		ret
 296              		.cfi_endproc
 297              	.LFE552:
 299              		.section	.text.unlikely._ZNK16Fl_Check_Browser13item_selectedEPv
 300              	.LCOLDE11:
 301              		.section	.text._ZNK16Fl_Check_Browser13item_selectedEPv
 302              	.LHOTE11:
 303              		.section	.text.unlikely._ZNK16Fl_Check_Browser10item_widthEPv,"ax",@progbits
 304              		.align 2
 305              	.LCOLDB12:
 306              		.section	.text._ZNK16Fl_Check_Browser10item_widthEPv,"ax",@progbits
 307              	.LHOTB12:
 308              		.align 2
 309              		.p2align 4,,15
 310              		.globl	_ZNK16Fl_Check_Browser10item_widthEPv
 312              	_ZNK16Fl_Check_Browser10item_widthEPv:
 313              	.LFB549:
 106:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 314              		.loc 4 106 0
 315              		.cfi_startproc
 316              	.LVL12:
 317 0000 55       		pushq	%rbp
 318              		.cfi_def_cfa_offset 16
 319              		.cfi_offset 6, -16
 320 0001 53       		pushq	%rbx
 321              		.cfi_def_cfa_offset 24
 322              		.cfi_offset 3, -24
 323 0002 4889FB   		movq	%rdi, %rbx
 324              	.LVL13:
 325 0005 4889F5   		movq	%rsi, %rbp
 326 0008 4883EC08 		subq	$8, %rsp
 327              		.cfi_def_cfa_offset 32
 328              	.LBB65:
 329              	.LBB66:
 330              		.file 5 "fltk-1.3.4-1/FL/fl_draw.H"
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
 331              		.loc 5 509 0
 332 000c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 332      000000
 333              	.LVL14:
 334 0013 8B93C000 		movl	192(%rbx), %edx
 334      0000
 335 0019 8BB3BC00 		movl	188(%rbx), %esi
 335      0000
 336              	.LVL15:
 337 001f 488B07   		movq	(%rdi), %rax
 338 0022 FF90B001 		call	*432(%rax)
 338      0000
 339              	.LVL16:
 340              	.LBE66:
 341              	.LBE65:
 108:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 342              		.loc 4 108 0
 343 0028 488B7D18 		movq	24(%rbp), %rdi
 344 002c E8000000 		call	_Z8fl_widthPKc
 344      00
 345              	.LVL17:
 346 0031 F20F2CC0 		cvttsd2si	%xmm0, %eax
 347 0035 8B93C000 		movl	192(%rbx), %edx
 347      0000
 109:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 348              		.loc 4 109 0
 349 003b 4883C408 		addq	$8, %rsp
 350              		.cfi_def_cfa_offset 24
 351 003f 5B       		popq	%rbx
 352              		.cfi_def_cfa_offset 16
 353              	.LVL18:
 354 0040 5D       		popq	%rbp
 355              		.cfi_def_cfa_offset 8
 356              	.LVL19:
 108:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 357              		.loc 4 108 0
 358 0041 8D440206 		leal	6(%rdx,%rax), %eax
 109:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 359              		.loc 4 109 0
 360 0045 C3       		ret
 361              		.cfi_endproc
 362              	.LFE549:
 364              		.section	.text.unlikely._ZNK16Fl_Check_Browser10item_widthEPv
 365              	.LCOLDE12:
 366              		.section	.text._ZNK16Fl_Check_Browser10item_widthEPv
 367              	.LHOTE12:
 368              		.section	.text.unlikely._ZNK16Fl_Check_Browser9item_drawEPviiii,"ax",@progbits
 369              		.align 2
 370              	.LCOLDB13:
 371              		.section	.text._ZNK16Fl_Check_Browser9item_drawEPviiii,"ax",@progbits
 372              	.LHOTB13:
 373              		.align 2
 374              		.p2align 4,,15
 375              		.globl	_ZNK16Fl_Check_Browser9item_drawEPviiii
 377              	_ZNK16Fl_Check_Browser9item_drawEPviiii:
 378              	.LFB550:
 111:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 379              		.loc 4 111 0
 380              		.cfi_startproc
 381              	.LVL20:
 382 0000 4157     		pushq	%r15
 383              		.cfi_def_cfa_offset 16
 384              		.cfi_offset 15, -16
 385 0002 4156     		pushq	%r14
 386              		.cfi_def_cfa_offset 24
 387              		.cfi_offset 14, -24
 388 0004 4989F7   		movq	%rsi, %r15
 389 0007 4155     		pushq	%r13
 390              		.cfi_def_cfa_offset 32
 391              		.cfi_offset 13, -32
 392 0009 4154     		pushq	%r12
 393              		.cfi_def_cfa_offset 40
 394              		.cfi_offset 12, -40
 395 000b 4189D4   		movl	%edx, %r12d
 396 000e 55       		pushq	%rbp
 397              		.cfi_def_cfa_offset 48
 398              		.cfi_offset 6, -48
 399 000f 53       		pushq	%rbx
 400              		.cfi_def_cfa_offset 56
 401              		.cfi_offset 3, -56
 402 0010 4889FD   		movq	%rdi, %rbp
 403 0013 4883EC38 		subq	$56, %rsp
 404              		.cfi_def_cfa_offset 112
 113:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 405              		.loc 4 113 0
 406 0017 488B4618 		movq	24(%rsi), %rax
 407 001b 448BB7C0 		movl	192(%rdi), %r14d
 407      000000
 111:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 408              		.loc 4 111 0
 409 0022 894C2404 		movl	%ecx, 4(%rsp)
 113:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 410              		.loc 4 113 0
 411 0026 48894424 		movq	%rax, 8(%rsp)
 411      08
 412              	.LVL21:
 115:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 413              		.loc 4 115 0
 414 002b E8000000 		call	_ZNK9Fl_Widget8active_rEv
 414      00
 415              	.LVL22:
 416 0030 85C0     		testl	%eax, %eax
 417 0032 0F84D801 		je	.L16
 417      0000
 418 0038 8B85C400 		movl	196(%rbp), %eax
 418      0000
 419 003e 89442410 		movl	%eax, 16(%rsp)
 420              	.LVL23:
 421              	.L17:
 116:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 422              		.loc 4 116 0 discriminator 4
 423 0042 4489F0   		movl	%r14d, %eax
 424 0045 2B85C000 		subl	192(%rbp), %eax
 424      0000
 425 004b 8B542404 		movl	4(%rsp), %edx
 119:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 426              		.loc 4 119 0 discriminator 4
 427 004f 4889EF   		movq	%rbp, %rdi
 117:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 428              		.loc 4 117 0 discriminator 4
 429 0052 458D6C24 		leal	2(%r12), %r13d
 429      02
 116:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 430              		.loc 4 116 0 discriminator 4
 431 0057 83C003   		addl	$3, %eax
 432 005a 89C3     		movl	%eax, %ebx
 433 005c C1EB1F   		shrl	$31, %ebx
 434 005f 01D8     		addl	%ebx, %eax
 435 0061 D1F8     		sarl	%eax
 436 0063 8D1C10   		leal	(%rax,%rdx), %ebx
 437              	.LVL24:
 119:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 438              		.loc 4 119 0 discriminator 4
 439 0066 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 439      00
 440              	.LVL25:
 441 006b 31F6     		xorl	%esi, %esi
 442 006d 85C0     		testl	%eax, %eax
 443 006f 0F848B01 		je	.L28
 443      0000
 444              	.L18:
 445              	.LVL26:
 446              	.LBB67:
 447              	.LBB68:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 448              		.loc 5 52 0 discriminator 4
 449 0075 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 449      000000
 450 007c 488B07   		movq	(%rdi), %rax
 451 007f FF908800 		call	*136(%rax)
 451      0000
 452              	.LVL27:
 453              	.LBE68:
 454              	.LBE67:
 121:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 455              		.loc 4 121 0 discriminator 4
 456 0085 8B85C000 		movl	192(%rbp), %eax
 456      0000
 457              	.LBB69:
 458              	.LBB70:
 238:fltk-1.3.4-1/FL/fl_draw.H **** 
 459              		.loc 5 238 0 discriminator 4
 460 008b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 460      000000
 461 0092 4883EC08 		subq	$8, %rsp
 462              		.cfi_def_cfa_offset 120
 463 0096 4489E9   		movl	%r13d, %ecx
 464 0099 89DA     		movl	%ebx, %edx
 465 009b 4489EE   		movl	%r13d, %esi
 466              	.LBE70:
 467              	.LBE69:
 121:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 468              		.loc 4 121 0 discriminator 4
 469 009e 448D40FE 		leal	-2(%rax), %r8d
 470              	.LBB73:
 471              	.LBB71:
 238:fltk-1.3.4-1/FL/fl_draw.H **** 
 472              		.loc 5 238 0 discriminator 4
 473 00a2 488B07   		movq	(%rdi), %rax
 474 00a5 53       		pushq	%rbx
 475              		.cfi_def_cfa_offset 128
 476              	.LBE71:
 477              	.LBE73:
 120:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 478              		.loc 4 120 0 discriminator 4
 479 00a6 478D4C05 		leal	0(%r13,%r8), %r9d
 479      00
 480              	.LVL28:
 481 00ab 4101D8   		addl	%ebx, %r8d
 482              	.LVL29:
 483              	.LBB74:
 484              	.LBB72:
 238:fltk-1.3.4-1/FL/fl_draw.H **** 
 485              		.loc 5 238 0 discriminator 4
 486 00ae 4151     		pushq	%r9
 487              		.cfi_def_cfa_offset 136
 488 00b0 4150     		pushq	%r8
 489              		.cfi_def_cfa_offset 144
 490 00b2 FF90A800 		call	*168(%rax)
 490      0000
 491              	.LVL30:
 492              	.LBE72:
 493              	.LBE74:
 494              	.LBB75:
 122:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 495              		.loc 4 122 0 discriminator 4
 496 00b8 4883C420 		addq	$32, %rsp
 497              		.cfi_def_cfa_offset 112
 498 00bc 41807F10 		cmpb	$0, 16(%r15)
 498      00
 499 00c1 0F84BF00 		je	.L22
 499      0000
 500 00c7 8B8DC000 		movl	192(%rbp), %ecx
 500      0000
 501              	.LBB76:
 123:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 502              		.loc 4 123 0
 503 00cd 418D4424 		leal	5(%r12), %eax
 503      05
 125:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 504              		.loc 4 125 0
 505 00d2 BA565555 		movl	$1431655766, %edx
 505      55
 506              	.LBB77:
 507              	.LBB78:
 508              	.LBB79:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 509              		.loc 5 223 0
 510 00d7 48896C24 		movq	%rbp, 40(%rsp)
 510      28
 511 00dc 44896C24 		movl	%r13d, 36(%rsp)
 511      24
 512              	.LBE79:
 513              	.LBE78:
 514              	.LBE77:
 123:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 515              		.loc 4 123 0
 516 00e1 89C7     		movl	%eax, %edi
 517 00e3 89442414 		movl	%eax, 20(%rsp)
 518              	.LVL31:
 124:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 519              		.loc 4 124 0
 520 00e7 8D71FA   		leal	-6(%rcx), %esi
 521              	.LVL32:
 125:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 522              		.loc 4 125 0
 523 00ea 89F0     		movl	%esi, %eax
 524              	.LVL33:
 525 00ec F7EA     		imull	%edx
 526 00ee 89F0     		movl	%esi, %eax
 527 00f0 C1F81F   		sarl	$31, %eax
 528 00f3 29C2     		subl	%eax, %edx
 529 00f5 4189D4   		movl	%edx, %r12d
 530              	.LVL34:
 126:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 531              		.loc 4 126 0
 532 00f8 89F2     		movl	%esi, %edx
 533              	.LVL35:
 534 00fa 4429E2   		subl	%r12d, %edx
 535              	.LVL36:
 127:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 536              		.loc 4 127 0
 537 00fd 8D440AFE 		leal	-2(%rdx,%rcx), %eax
 538 0101 89C1     		movl	%eax, %ecx
 539 0103 C1E91F   		shrl	$31, %ecx
 540 0106 01C1     		addl	%eax, %ecx
 541 0108 89F8     		movl	%edi, %eax
 542 010a 428D3C27 		leal	(%rdi,%r12), %edi
 543              	.LVL37:
 544 010e D1F9     		sarl	%ecx
 545 0110 8D4430FF 		leal	-1(%rax,%rsi), %eax
 546              	.LVL38:
 547 0114 01D9     		addl	%ebx, %ecx
 548 0116 4429E1   		subl	%r12d, %ecx
 549 0119 8944241C 		movl	%eax, 28(%rsp)
 550 011d 8D59FE   		leal	-2(%rcx), %ebx
 551              	.LVL39:
 552 0120 8D4101   		leal	1(%rcx), %eax
 553 0123 418D4C24 		leal	1(%r12), %ecx
 553      01
 554              	.LBB88:
 555              	.LBB83:
 556              	.LBB80:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 557              		.loc 5 223 0
 558 0128 29D1     		subl	%edx, %ecx
 559 012a 89DD     		movl	%ebx, %ebp
 560              	.LVL40:
 561 012c 89442418 		movl	%eax, 24(%rsp)
 562 0130 894C2420 		movl	%ecx, 32(%rsp)
 563 0134 89FB     		movl	%edi, %ebx
 564              	.LVL41:
 565              	.L23:
 566              	.LBE80:
 567              	.LBE83:
 568              	.LBB84:
 569              	.LBB85:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 570              		.loc 5 223 0 is_stmt 0 discriminator 2
 571 0136 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 571      000000
 572 013d 468D6C25 		leal	0(%rbp,%r12), %r13d
 572      00
 573              	.LVL42:
 574 0142 89EA     		movl	%ebp, %edx
 575 0144 89D9     		movl	%ebx, %ecx
 576 0146 8B742414 		movl	20(%rsp), %esi
 577 014a 4589E8   		movl	%r13d, %r8d
 578 014d 4C8B17   		movq	(%rdi), %r10
 579 0150 41FF5260 		call	*96(%r10)
 580              	.LVL43:
 581              	.LBE85:
 582              	.LBE84:
 583              	.LBB86:
 584              	.LBB81:
 585 0154 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 585      000000
 586 015b 8B442420 		movl	32(%rsp), %eax
 587 015f 4489EA   		movl	%r13d, %edx
 588 0162 8B4C241C 		movl	28(%rsp), %ecx
 589 0166 89DE     		movl	%ebx, %esi
 590 0168 4C8B17   		movq	(%rdi), %r10
 591 016b 448D0428 		leal	(%rax,%rbp), %r8d
 592              	.LBE81:
 593              	.LBE86:
 128:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 594              		.loc 4 128 0 is_stmt 1 discriminator 2
 595 016f 83C501   		addl	$1, %ebp
 596              	.LVL44:
 597              	.LBB87:
 598              	.LBB82:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 599              		.loc 5 223 0 discriminator 2
 600 0172 41FF5260 		call	*96(%r10)
 601              	.LVL45:
 602              	.LBE82:
 603              	.LBE87:
 128:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 604              		.loc 4 128 0 discriminator 2
 605 0176 3B6C2418 		cmpl	24(%rsp), %ebp
 606 017a 75BA     		jne	.L23
 607 017c 448B6C24 		movl	36(%rsp), %r13d
 607      24
 608 0181 488B6C24 		movq	40(%rsp), %rbp
 608      28
 609              	.LVL46:
 610              	.L22:
 611              	.LBE88:
 612              	.LBE76:
 613              	.LBE75:
 614              	.LBB89:
 615              	.LBB90:
 616              		.loc 5 509 0
 617 0186 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 617      000000
 618 018d 8BB5BC00 		movl	188(%rbp), %esi
 618      0000
 619 0193 4489F2   		movl	%r14d, %edx
 620 0196 488B07   		movq	(%rdi), %rax
 621 0199 FF90B001 		call	*432(%rax)
 621      0000
 622              	.LVL47:
 623              	.LBE90:
 624              	.LBE89:
 134:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 625              		.loc 4 134 0
 626 019f 41807F11 		cmpb	$0, 17(%r15)
 626      00
 627 01a4 7410     		je	.L21
 628              	.LVL48:
 135:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 629              		.loc 4 135 0
 630 01a6 8B7568   		movl	104(%rbp), %esi
 631 01a9 8B7C2410 		movl	16(%rsp), %edi
 632 01ad E8000000 		call	_Z11fl_contrastjj
 632      00
 633              	.LVL49:
 634 01b2 89442410 		movl	%eax, 16(%rsp)
 635              	.LVL50:
 636              	.L21:
 637              	.LBB91:
 638              	.LBB92:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 639              		.loc 5 52 0
 640 01b6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 640      000000
 641 01bd 8B742410 		movl	16(%rsp), %esi
 642 01c1 488B07   		movq	(%rdi), %rax
 643 01c4 FF908800 		call	*136(%rax)
 643      0000
 644              	.LVL51:
 645              	.LBE92:
 646              	.LBE91:
 138:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 647              		.loc 4 138 0
 648 01ca 8B442404 		movl	4(%rsp), %eax
 649 01ce 488B7C24 		movq	8(%rsp), %rdi
 649      08
 650 01d3 418D5406 		leal	-1(%r14,%rax), %edx
 650      FF
 651 01d8 8B85C000 		movl	192(%rbp), %eax
 651      0000
 139:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 652              		.loc 4 139 0
 653 01de 4883C438 		addq	$56, %rsp
 654              		.cfi_remember_state
 655              		.cfi_def_cfa_offset 56
 656 01e2 5B       		popq	%rbx
 657              		.cfi_def_cfa_offset 48
 658 01e3 5D       		popq	%rbp
 659              		.cfi_def_cfa_offset 40
 660              	.LVL52:
 138:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 661              		.loc 4 138 0
 662 01e4 418D7405 		leal	6(%r13,%rax), %esi
 662      06
 139:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 663              		.loc 4 139 0
 664 01e9 415C     		popq	%r12
 665              		.cfi_def_cfa_offset 32
 666 01eb 415D     		popq	%r13
 667              		.cfi_def_cfa_offset 24
 668 01ed 415E     		popq	%r14
 669              		.cfi_def_cfa_offset 16
 670 01ef 415F     		popq	%r15
 671              		.cfi_def_cfa_offset 8
 672              	.LVL53:
 138:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 673              		.loc 4 138 0
 674 01f1 E9000000 		jmp	_Z7fl_drawPKcii
 674      00
 675              	.LVL54:
 676 01f6 662E0F1F 		.p2align 4,,10
 676      84000000 
 676      0000
 677              		.p2align 3
 678              	.L28:
 679              		.cfi_restore_state
 119:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 680              		.loc 4 119 0 discriminator 1
 681 0200 31FF     		xorl	%edi, %edi
 682 0202 E8000000 		call	_Z11fl_inactivej
 682      00
 683              	.LVL55:
 684 0207 89C6     		movl	%eax, %esi
 685 0209 E967FEFF 		jmp	.L18
 685      FF
 686              	.LVL56:
 687 020e 6690     		.p2align 4,,10
 688              		.p2align 3
 689              	.L16:
 115:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 690              		.loc 4 115 0 discriminator 2
 691 0210 8BBDC400 		movl	196(%rbp), %edi
 691      0000
 692 0216 E8000000 		call	_Z11fl_inactivej
 692      00
 693              	.LVL57:
 694 021b 89442410 		movl	%eax, 16(%rsp)
 695 021f E91EFEFF 		jmp	.L17
 695      FF
 696              		.cfi_endproc
 697              	.LFE550:
 699              		.section	.text.unlikely._ZNK16Fl_Check_Browser9item_drawEPviiii
 700              	.LCOLDE13:
 701              		.section	.text._ZNK16Fl_Check_Browser9item_drawEPviiii
 702              	.LHOTE13:
 703              		.section	.text.unlikely._ZN16Fl_Check_Browser6handleEi,"ax",@progbits
 704              		.align 2
 705              	.LCOLDB14:
 706              		.section	.text._ZN16Fl_Check_Browser6handleEi,"ax",@progbits
 707              	.LHOTB14:
 708              		.align 2
 709              		.p2align 4,,15
 710              		.globl	_ZN16Fl_Check_Browser6handleEi
 712              	_ZN16Fl_Check_Browser6handleEi:
 713              	.LFB563:
 159:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 714              		.loc 4 312 0
 715              		.cfi_startproc
 716              	.LVL58:
 717 0000 55       		pushq	%rbp
 718              		.cfi_def_cfa_offset 16
 719              		.cfi_offset 6, -16
 720 0001 53       		pushq	%rbx
 721              		.cfi_def_cfa_offset 24
 722              		.cfi_offset 3, -24
 723 0002 4889FD   		movq	%rdi, %rbp
 724 0005 89F3     		movl	%esi, %ebx
 725 0007 4883EC08 		subq	$8, %rsp
 726              		.cfi_def_cfa_offset 32
 313:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 727              		.loc 4 313 0
 728 000b 83FE01   		cmpl	$1, %esi
 729 000e 7410     		je	.L33
 314:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 730              		.loc 4 316 0
 731 0010 4883C408 		addq	$8, %rsp
 732              		.cfi_remember_state
 733              		.cfi_def_cfa_offset 24
 315:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 734              		.loc 4 315 0
 735 0014 89DE     		movl	%ebx, %esi
 736              	.LVL59:
 737 0016 4889EF   		movq	%rbp, %rdi
 738              		.loc 4 316 0
 739 0019 5B       		popq	%rbx
 740              		.cfi_def_cfa_offset 16
 741              	.LVL60:
 742 001a 5D       		popq	%rbp
 743              		.cfi_def_cfa_offset 8
 315:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 744              		.loc 4 315 0
 745 001b E9000000 		jmp	_ZN11Fl_Browser_6handleEi
 745      00
 746              	.LVL61:
 747              		.p2align 4,,10
 748              		.p2align 3
 749              	.L33:
 750              		.cfi_restore_state
 314:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 751              		.loc 4 314 0
 752 0020 31F6     		xorl	%esi, %esi
 753 0022 E8000000 		call	_ZN11Fl_Browser_8deselectEi
 753      00
 754              	.LVL62:
 755              		.loc 4 316 0
 756 0027 4883C408 		addq	$8, %rsp
 757              		.cfi_def_cfa_offset 24
 315:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 758              		.loc 4 315 0
 759 002b 89DE     		movl	%ebx, %esi
 760 002d 4889EF   		movq	%rbp, %rdi
 761              		.loc 4 316 0
 762 0030 5B       		popq	%rbx
 763              		.cfi_def_cfa_offset 16
 764              	.LVL63:
 765 0031 5D       		popq	%rbp
 766              		.cfi_def_cfa_offset 8
 767              	.LVL64:
 315:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 768              		.loc 4 315 0
 769 0032 E9000000 		jmp	_ZN11Fl_Browser_6handleEi
 769      00
 770              	.LVL65:
 771              		.cfi_endproc
 772              	.LFE563:
 774              		.section	.text.unlikely._ZN16Fl_Check_Browser6handleEi
 775              	.LCOLDE14:
 776              		.section	.text._ZN16Fl_Check_Browser6handleEi
 777              	.LHOTE14:
 778              		.section	.text.unlikely._ZN16Fl_Check_Browser11item_selectEPvi,"ax",@progbits
 779              		.align 2
 780              	.LCOLDB15:
 781              		.section	.text._ZN16Fl_Check_Browser11item_selectEPvi,"ax",@progbits
 782              	.LHOTB15:
 783              		.align 2
 784              		.p2align 4,,15
 785              		.globl	_ZN16Fl_Check_Browser11item_selectEPvi
 787              	_ZN16Fl_Check_Browser11item_selectEPvi:
 788              	.LFB551:
 141:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 789              		.loc 4 141 0
 790              		.cfi_startproc
 791              	.LVL66:
 144:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 792              		.loc 4 144 0
 793 0000 85D2     		testl	%edx, %edx
 794 0002 7411     		je	.L34
 795              	.LVL67:
 796              	.LBB95:
 797              	.LBB96:
 145:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 798              		.loc 4 145 0
 799 0004 807E1000 		cmpb	$0, 16(%rsi)
 800 0008 7516     		jne	.L40
 149:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 801              		.loc 4 149 0
 802 000a C6461001 		movb	$1, 16(%rsi)
 150:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 803              		.loc 4 150 0
 804 000e 83878802 		addl	$1, 648(%rdi)
 804      000001
 805              	.LVL68:
 806              	.L34:
 807 0015 F3C3     		rep ret
 808              	.LVL69:
 809 0017 660F1F84 		.p2align 4,,10
 809      00000000 
 809      00
 810              		.p2align 3
 811              	.L40:
 146:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 812              		.loc 4 146 0
 813 0020 C6461000 		movb	$0, 16(%rsi)
 147:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 814              		.loc 4 147 0
 815 0024 83AF8802 		subl	$1, 648(%rdi)
 815      000001
 816 002b C3       		ret
 817              	.LBE96:
 818              	.LBE95:
 819              		.cfi_endproc
 820              	.LFE551:
 822              		.section	.text.unlikely._ZN16Fl_Check_Browser11item_selectEPvi
 823              	.LCOLDE15:
 824              		.section	.text._ZN16Fl_Check_Browser11item_selectEPvi
 825              	.LHOTE15:
 826              		.section	.text.unlikely._ZNK16Fl_Check_Browser9find_itemEi,"ax",@progbits
 827              		.align 2
 828              	.LCOLDB16:
 829              		.section	.text._ZNK16Fl_Check_Browser9find_itemEi,"ax",@progbits
 830              	.LHOTB16:
 831              		.align 2
 832              		.p2align 4,,15
 833              		.globl	_ZNK16Fl_Check_Browser9find_itemEi
 835              	_ZNK16Fl_Check_Browser9find_itemEi:
 836              	.LFB540:
  28:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
 837              		.loc 4 28 0
 838              		.cfi_startproc
 839              	.LVL70:
  32:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 840              		.loc 4 32 0
 841 0000 85F6     		testl	%esi, %esi
  30:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
 842              		.loc 4 30 0
 843 0002 488B8768 		movq	616(%rdi), %rax
 843      020000
 844              	.LVL71:
  32:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 845              		.loc 4 32 0
 846 0009 0F8E9A00 		jle	.L51
 846      0000
  32:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 847              		.loc 4 32 0 is_stmt 0 discriminator 1
 848 000f 3BB78402 		cmpl	644(%rdi), %esi
 848      0000
 849 0015 0F8F8E00 		jg	.L51
 849      0000
 850 001b 4885C0   		testq	%rax, %rax
 851 001e 0F848500 		je	.L51
 851      0000
  36:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 852              		.loc 4 36 0 is_stmt 1
 853 0024 8B978002 		movl	640(%rdi), %edx
 853      0000
 854 002a 39D6     		cmpl	%edx, %esi
 855 002c 7432     		je	.L54
  39:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 856              		.loc 4 39 0
 857 002e 8D4A01   		leal	1(%rdx), %ecx
 858 0031 39CE     		cmpl	%ecx, %esi
 859 0033 7443     		je	.L55
  42:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 860              		.loc 4 42 0
 861 0035 83EA01   		subl	$1, %edx
 862 0038 39D6     		cmpl	%edx, %esi
 863 003a 7454     		je	.L46
 864              	.LVL72:
  47:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 865              		.loc 4 47 0
 866 003c 89F2     		movl	%esi, %edx
 867 003e 83EA01   		subl	$1, %edx
 868              	.LVL73:
 869 0041 740D     		je	.L48
 870              	.LVL74:
 871              		.p2align 4,,10
 872 0043 0F1F4400 		.p2align 3
 872      00
 873              	.L52:
 874 0048 83EA01   		subl	$1, %edx
 875              	.LVL75:
  48:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 876              		.loc 4 48 0
 877 004b 488B00   		movq	(%rax), %rax
 878              	.LVL76:
  47:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 879              		.loc 4 47 0
 880 004e 75F8     		jne	.L52
 881              	.L48:
 882              	.LVL77:
  53:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 883              		.loc 4 53 0
 884 0050 48898778 		movq	%rax, 632(%rdi)
 884      020000
  54:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 885              		.loc 4 54 0
 886 0057 89B78002 		movl	%esi, 640(%rdi)
 886      0000
  56:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 887              		.loc 4 56 0
 888 005d C3       		ret
 889              	.LVL78:
 890 005e 6690     		.p2align 4,,10
 891              		.p2align 3
 892              	.L54:
  37:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 893              		.loc 4 37 0
 894 0060 488B8778 		movq	632(%rdi), %rax
 894      020000
 895              	.LVL79:
  54:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 896              		.loc 4 54 0
 897 0067 89B78002 		movl	%esi, 640(%rdi)
 897      0000
  53:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 898              		.loc 4 53 0
 899 006d 48898778 		movq	%rax, 632(%rdi)
 899      020000
  56:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 900              		.loc 4 56 0
 901 0074 C3       		ret
 902              	.LVL80:
 903              		.p2align 4,,10
 904 0075 0F1F00   		.p2align 3
 905              	.L55:
  40:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 906              		.loc 4 40 0
 907 0078 488B8778 		movq	632(%rdi), %rax
 907      020000
 908              	.LVL81:
 909 007f 488B00   		movq	(%rax), %rax
 910              	.LVL82:
  54:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 911              		.loc 4 54 0
 912 0082 89B78002 		movl	%esi, 640(%rdi)
 912      0000
  53:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 913              		.loc 4 53 0
 914 0088 48898778 		movq	%rax, 632(%rdi)
 914      020000
  56:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 915              		.loc 4 56 0
 916 008f C3       		ret
 917              	.LVL83:
 918              		.p2align 4,,10
 919              		.p2align 3
 920              	.L46:
  43:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 921              		.loc 4 43 0
 922 0090 488B8778 		movq	632(%rdi), %rax
 922      020000
 923              	.LVL84:
 924 0097 488B4008 		movq	8(%rax), %rax
 925              	.LVL85:
  54:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 926              		.loc 4 54 0
 927 009b 89B78002 		movl	%esi, 640(%rdi)
 927      0000
  53:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 928              		.loc 4 53 0
 929 00a1 48898778 		movq	%rax, 632(%rdi)
 929      020000
  56:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 930              		.loc 4 56 0
 931 00a8 C3       		ret
 932              	.LVL86:
 933              	.L51:
  33:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 934              		.loc 4 33 0
 935 00a9 31C0     		xorl	%eax, %eax
 936              	.LVL87:
  57:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 937              		.loc 4 57 0
 938 00ab C3       		ret
 939              		.cfi_endproc
 940              	.LFE540:
 942              		.section	.text.unlikely._ZNK16Fl_Check_Browser9find_itemEi
 943              	.LCOLDE16:
 944              		.section	.text._ZNK16Fl_Check_Browser9find_itemEi
 945              	.LHOTE16:
 946              		.section	.text.unlikely._ZNK16Fl_Check_Browser6linenoEPNS_7cb_itemE,"ax",@progbits
 947              		.align 2
 948              	.LCOLDB17:
 949              		.section	.text._ZNK16Fl_Check_Browser6linenoEPNS_7cb_itemE,"ax",@progbits
 950              	.LHOTB17:
 951              		.align 2
 952              		.p2align 4,,15
 953              		.globl	_ZNK16Fl_Check_Browser6linenoEPNS_7cb_itemE
 955              	_ZNK16Fl_Check_Browser6linenoEPNS_7cb_itemE:
 956              	.LFB541:
  59:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 957              		.loc 4 59 0
 958              		.cfi_startproc
 959              	.LVL88:
  60:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 960              		.loc 4 60 0
 961 0000 488B8768 		movq	616(%rdi), %rax
 961      020000
 962              	.LVL89:
  62:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 963              		.loc 4 62 0
 964 0007 4885C0   		testq	%rax, %rax
 965 000a 7424     		je	.L64
 966              	.LVL90:
  68:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 967              		.loc 4 68 0
 968 000c 4839F0   		cmpq	%rsi, %rax
 969 000f 7429     		je	.L62
 970              	.LVL91:
  72:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 971              		.loc 4 72 0
 972 0011 488B10   		movq	(%rax), %rdx
 973              	.LVL92:
  67:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 974              		.loc 4 67 0
 975 0014 4885D2   		testq	%rdx, %rdx
 976 0017 7417     		je	.L64
 977 0019 B8020000 		movl	$2, %eax
 977      00
 978              	.LVL93:
 979 001e 6690     		.p2align 4,,10
 980              		.p2align 3
 981              	.L59:
  68:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 982              		.loc 4 68 0
 983 0020 4839D6   		cmpq	%rdx, %rsi
 984 0023 7413     		je	.L65
  72:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 985              		.loc 4 72 0
 986 0025 488B12   		movq	(%rdx), %rdx
 987              	.LVL94:
  71:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 988              		.loc 4 71 0
 989 0028 83C001   		addl	$1, %eax
 990              	.LVL95:
  67:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 991              		.loc 4 67 0
 992 002b 4885D2   		testq	%rdx, %rdx
 993 002e 75F0     		jne	.L59
 994              	.LVL96:
 995              	.L64:
  63:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 996              		.loc 4 63 0
 997 0030 31C0     		xorl	%eax, %eax
  76:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 998              		.loc 4 76 0
 999 0032 C3       		ret
 1000              	.LVL97:
 1001              		.p2align 4,,10
 1002 0033 0F1F4400 		.p2align 3
 1002      00
 1003              	.L65:
 1004 0038 F3C3     		rep ret
 1005              	.LVL98:
 1006              	.L62:
  68:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 1007              		.loc 4 68 0
 1008 003a B8010000 		movl	$1, %eax
 1008      00
 1009              	.LVL99:
 1010 003f C3       		ret
 1011              		.cfi_endproc
 1012              	.LFE541:
 1014              		.section	.text.unlikely._ZNK16Fl_Check_Browser6linenoEPNS_7cb_itemE
 1015              	.LCOLDE17:
 1016              		.section	.text._ZNK16Fl_Check_Browser6linenoEPNS_7cb_itemE
 1017              	.LHOTE17:
 1018              		.section	.text.unlikely._ZN16Fl_Check_BrowserC2EiiiiPKc,"ax",@progbits
 1019              		.align 2
 1020              	.LCOLDB18:
 1021              		.section	.text._ZN16Fl_Check_BrowserC2EiiiiPKc,"ax",@progbits
 1022              	.LHOTB18:
 1023              		.align 2
 1024              		.p2align 4,,15
 1025              		.globl	_ZN16Fl_Check_BrowserC2EiiiiPKc
 1027              	_ZN16Fl_Check_BrowserC2EiiiiPKc:
 1028              	.LFB543:
  78:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 1029              		.loc 4 78 0
 1030              		.cfi_startproc
 1031              	.LVL100:
 1032 0000 53       		pushq	%rbx
 1033              		.cfi_def_cfa_offset 16
 1034              		.cfi_offset 3, -16
  78:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 1035              		.loc 4 78 0
 1036 0001 4889FB   		movq	%rdi, %rbx
 1037              	.LBB97:
  80:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1038              		.loc 4 80 0
 1039 0004 E8000000 		call	_ZN11Fl_Browser_C2EiiiiPKc
 1039      00
 1040              	.LVL101:
 1041 0009 48C70300 		movq	$_ZTV16Fl_Check_Browser+16, (%rbx)
 1041      000000
 1042              	.LVL102:
 1043              	.LBB98:
 1044              	.LBB99:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1045              		.loc 1 279 0
 1046 0010 C6436C01 		movb	$1, 108(%rbx)
 1047              	.LVL103:
 1048              	.LBE99:
 1049              	.LBE98:
 1050              	.LBB100:
 1051              	.LBB101:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1052              		.loc 1 654 0
 1053 0014 C6436F00 		movb	$0, 111(%rbx)
 1054              	.LVL104:
 1055              	.LBE101:
 1056              	.LBE100:
  83:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 1057              		.loc 4 83 0
 1058 0018 48C78370 		movq	$0, 624(%rbx)
 1058      02000000 
 1058      000000
 1059 0023 48C78368 		movq	$0, 616(%rbx)
 1059      02000000 
 1059      000000
  84:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 1060              		.loc 4 84 0
 1061 002e C7838802 		movl	$0, 648(%rbx)
 1061      00000000 
 1061      0000
 1062 0038 C7838402 		movl	$0, 644(%rbx)
 1062      00000000 
 1062      0000
  85:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 1063              		.loc 4 85 0
 1064 0042 C7838002 		movl	$-1, 640(%rbx)
 1064      0000FFFF 
 1064      FFFF
 1065              	.LBE97:
  86:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 1066              		.loc 4 86 0
 1067 004c 5B       		popq	%rbx
 1068              		.cfi_def_cfa_offset 8
 1069              	.LVL105:
 1070 004d C3       		ret
 1071              		.cfi_endproc
 1072              	.LFE543:
 1074              		.section	.text.unlikely._ZN16Fl_Check_BrowserC2EiiiiPKc
 1075              	.LCOLDE18:
 1076              		.section	.text._ZN16Fl_Check_BrowserC2EiiiiPKc
 1077              	.LHOTE18:
 1078              		.globl	_ZN16Fl_Check_BrowserC1EiiiiPKc
 1079              		.set	_ZN16Fl_Check_BrowserC1EiiiiPKc,_ZN16Fl_Check_BrowserC2EiiiiPKc
 1080              		.section	.text.unlikely._ZN16Fl_Check_Browser3addEPci,"ax",@progbits
 1081              		.align 2
 1082              	.LCOLDB19:
 1083              		.section	.text._ZN16Fl_Check_Browser3addEPci,"ax",@progbits
 1084              	.LHOTB19:
 1085              		.align 2
 1086              		.p2align 4,,15
 1087              		.globl	_ZN16Fl_Check_Browser3addEPci
 1089              	_ZN16Fl_Check_Browser3addEPci:
 1090              	.LFB554:
 172:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1091              		.loc 4 172 0
 1092              		.cfi_startproc
 1093              	.LVL106:
 1094 0000 4155     		pushq	%r13
 1095              		.cfi_def_cfa_offset 16
 1096              		.cfi_offset 13, -16
 1097 0002 4154     		pushq	%r12
 1098              		.cfi_def_cfa_offset 24
 1099              		.cfi_offset 12, -24
 1100 0004 4989F5   		movq	%rsi, %r13
 1101 0007 55       		pushq	%rbp
 1102              		.cfi_def_cfa_offset 32
 1103              		.cfi_offset 6, -32
 1104 0008 53       		pushq	%rbx
 1105              		.cfi_def_cfa_offset 40
 1106              		.cfi_offset 3, -40
 1107 0009 4189D4   		movl	%edx, %r12d
 1108 000c 4889FD   		movq	%rdi, %rbp
 173:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 1109              		.loc 4 173 0
 1110 000f BF200000 		movl	$32, %edi
 1110      00
 1111              	.LVL107:
 172:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1112              		.loc 4 172 0
 1113 0014 4883EC08 		subq	$8, %rsp
 1114              		.cfi_def_cfa_offset 48
 173:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 1115              		.loc 4 173 0
 1116 0018 E8000000 		call	malloc
 1116      00
 1117              	.LVL108:
 178:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 1118              		.loc 4 178 0
 1119 001d 4C89EF   		movq	%r13, %rdi
 174:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 1120              		.loc 4 174 0
 1121 0020 48C70000 		movq	$0, (%rax)
 1121      000000
 175:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 1122              		.loc 4 175 0
 1123 0027 48C74008 		movq	$0, 8(%rax)
 1123      00000000 
 176:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 1124              		.loc 4 176 0
 1125 002f 44886010 		movb	%r12b, 16(%rax)
 177:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 1126              		.loc 4 177 0
 1127 0033 C6401100 		movb	$0, 17(%rax)
 173:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 1128              		.loc 4 173 0
 1129 0037 4889C3   		movq	%rax, %rbx
 1130              	.LVL109:
 178:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 1131              		.loc 4 178 0
 1132 003a E8000000 		call	strdup
 1132      00
 1133              	.LVL110:
 180:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1134              		.loc 4 180 0
 1135 003f 4585E4   		testl	%r12d, %r12d
 178:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 1136              		.loc 4 178 0
 1137 0042 48894318 		movq	%rax, 24(%rbx)
 180:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1138              		.loc 4 180 0
 1139 0046 7407     		je	.L69
 181:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1140              		.loc 4 181 0
 1141 0048 83858802 		addl	$1, 648(%rbp)
 1141      000001
 1142              	.L69:
 184:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 1143              		.loc 4 184 0
 1144 004f 488B8570 		movq	624(%rbp), %rax
 1144      020000
 1145 0056 4885C0   		testq	%rax, %rax
 1146 0059 7435     		je	.L76
 187:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 1147              		.loc 4 187 0
 1148 005b 488918   		movq	%rbx, (%rax)
 188:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1149              		.loc 4 188 0
 1150 005e 488B8570 		movq	624(%rbp), %rax
 1150      020000
 189:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 1151              		.loc 4 189 0
 1152 0065 48899D70 		movq	%rbx, 624(%rbp)
 1152      020000
 188:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1153              		.loc 4 188 0
 1154 006c 48894308 		movq	%rax, 8(%rbx)
 1155              	.L71:
 191:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 1156              		.loc 4 191 0
 1157 0070 8B858402 		movl	644(%rbp), %eax
 1157      0000
 1158 0076 83C001   		addl	$1, %eax
 1159 0079 89858402 		movl	%eax, 644(%rbp)
 1159      0000
 194:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 1160              		.loc 4 194 0
 1161 007f 4883C408 		addq	$8, %rsp
 1162              		.cfi_remember_state
 1163              		.cfi_def_cfa_offset 40
 1164 0083 5B       		popq	%rbx
 1165              		.cfi_def_cfa_offset 32
 1166              	.LVL111:
 1167 0084 5D       		popq	%rbp
 1168              		.cfi_def_cfa_offset 24
 1169              	.LVL112:
 1170 0085 415C     		popq	%r12
 1171              		.cfi_def_cfa_offset 16
 1172              	.LVL113:
 1173 0087 415D     		popq	%r13
 1174              		.cfi_def_cfa_offset 8
 1175              	.LVL114:
 1176 0089 C3       		ret
 1177              	.LVL115:
 1178 008a 660F1F44 		.p2align 4,,10
 1178      0000
 1179              		.p2align 3
 1180              	.L76:
 1181              		.cfi_restore_state
 185:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1182              		.loc 4 185 0
 1183 0090 48899D70 		movq	%rbx, 624(%rbp)
 1183      020000
 1184 0097 48899D68 		movq	%rbx, 616(%rbp)
 1184      020000
 1185 009e EBD0     		jmp	.L71
 1186              		.cfi_endproc
 1187              	.LFE554:
 1189              		.section	.text.unlikely._ZN16Fl_Check_Browser3addEPci
 1190              	.LCOLDE19:
 1191              		.section	.text._ZN16Fl_Check_Browser3addEPci
 1192              	.LHOTE19:
 1193              		.section	.text.unlikely._ZN16Fl_Check_Browser3addEPc,"ax",@progbits
 1194              		.align 2
 1195              	.LCOLDB20:
 1196              		.section	.text._ZN16Fl_Check_Browser3addEPc,"ax",@progbits
 1197              	.LHOTB20:
 1198              		.align 2
 1199              		.p2align 4,,15
 1200              		.globl	_ZN16Fl_Check_Browser3addEPc
 1202              	_ZN16Fl_Check_Browser3addEPc:
 1203              	.LFB553:
 163:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 1204              		.loc 4 163 0
 1205              		.cfi_startproc
 1206              	.LVL116:
 164:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1207              		.loc 4 164 0
 1208 0000 31D2     		xorl	%edx, %edx
 1209 0002 E9000000 		jmp	_ZN16Fl_Check_Browser3addEPci
 1209      00
 1210              	.LVL117:
 1211              		.cfi_endproc
 1212              	.LFE553:
 1214              		.section	.text.unlikely._ZN16Fl_Check_Browser3addEPc
 1215              	.LCOLDE20:
 1216              		.section	.text._ZN16Fl_Check_Browser3addEPc
 1217              	.LHOTE20:
 1218              		.section	.text.unlikely._ZN16Fl_Check_Browser6removeEi,"ax",@progbits
 1219              		.align 2
 1220              	.LCOLDB21:
 1221              		.section	.text._ZN16Fl_Check_Browser6removeEi,"ax",@progbits
 1222              	.LHOTB21:
 1223              		.align 2
 1224              		.p2align 4,,15
 1225              		.globl	_ZN16Fl_Check_Browser6removeEi
 1227              	_ZN16Fl_Check_Browser6removeEi:
 1228              	.LFB555:
 200:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 1229              		.loc 4 200 0
 1230              		.cfi_startproc
 1231              	.LVL118:
 1232 0000 55       		pushq	%rbp
 1233              		.cfi_def_cfa_offset 16
 1234              		.cfi_offset 6, -16
 1235 0001 53       		pushq	%rbx
 1236              		.cfi_def_cfa_offset 24
 1237              		.cfi_offset 3, -24
 1238 0002 4889FD   		movq	%rdi, %rbp
 1239 0005 4883EC08 		subq	$8, %rsp
 1240              		.cfi_def_cfa_offset 32
 201:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 1241              		.loc 4 201 0
 1242 0009 E8000000 		call	_ZNK16Fl_Check_Browser9find_itemEi
 1242      00
 1243              	.LVL119:
 204:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 1244              		.loc 4 204 0
 1245 000e 4885C0   		testq	%rax, %rax
 1246 0011 0F84A100 		je	.L87
 1246      0000
 1247 0017 4889C3   		movq	%rax, %rbx
 206:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1248              		.loc 4 206 0
 1249 001a 4889C6   		movq	%rax, %rsi
 1250 001d E8000000 		call	_ZN11Fl_Browser_8deletingEPv
 1250      00
 1251              	.LVL120:
 209:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 1252              		.loc 4 209 0
 1253 0022 807B1000 		cmpb	$0, 16(%rbx)
 1254 0026 7558     		jne	.L88
 213:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1255              		.loc 4 213 0
 1256 0028 488B4308 		movq	8(%rbx), %rax
 1257 002c 4885C0   		testq	%rax, %rax
 1258 002f 745F     		je	.L82
 1259              	.L89:
 214:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 1260              		.loc 4 214 0
 1261 0031 488B13   		movq	(%rbx), %rdx
 1262 0034 488910   		movq	%rdx, (%rax)
 217:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 1263              		.loc 4 217 0
 1264 0037 488B03   		movq	(%rbx), %rax
 1265 003a 4885C0   		testq	%rax, %rax
 1266 003d 7469     		je	.L84
 1267              	.L90:
 218:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1268              		.loc 4 218 0
 1269 003f 488B5308 		movq	8(%rbx), %rdx
 1270 0043 48895008 		movq	%rdx, 8(%rax)
 1271              	.L85:
 222:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 1272              		.loc 4 222 0
 1273 0047 488B7B18 		movq	24(%rbx), %rdi
 1274 004b E8000000 		call	free
 1274      00
 1275              	.LVL121:
 223:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1276              		.loc 4 223 0
 1277 0050 4889DF   		movq	%rbx, %rdi
 1278 0053 E8000000 		call	free
 1278      00
 1279              	.LVL122:
 225:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1280              		.loc 4 225 0
 1281 0058 8B858402 		movl	644(%rbp), %eax
 1281      0000
 226:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 1282              		.loc 4 226 0
 1283 005e C7858002 		movl	$-1, 640(%rbp)
 1283      0000FFFF 
 1283      FFFF
 225:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1284              		.loc 4 225 0
 1285 0068 83E801   		subl	$1, %eax
 1286 006b 89858402 		movl	%eax, 644(%rbp)
 1286      0000
 230:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 1287              		.loc 4 230 0
 1288 0071 4883C408 		addq	$8, %rsp
 1289              		.cfi_remember_state
 1290              		.cfi_def_cfa_offset 24
 1291 0075 5B       		popq	%rbx
 1292              		.cfi_def_cfa_offset 16
 1293              	.LVL123:
 1294 0076 5D       		popq	%rbp
 1295              		.cfi_def_cfa_offset 8
 1296              	.LVL124:
 1297 0077 C3       		ret
 1298              	.LVL125:
 1299 0078 0F1F8400 		.p2align 4,,10
 1299      00000000 
 1300              		.p2align 3
 1301              	.L88:
 1302              		.cfi_restore_state
 210:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 1303              		.loc 4 210 0
 1304 0080 83AD8802 		subl	$1, 648(%rbp)
 1304      000001
 213:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1305              		.loc 4 213 0
 1306 0087 488B4308 		movq	8(%rbx), %rax
 1307 008b 4885C0   		testq	%rax, %rax
 1308 008e 75A1     		jne	.L89
 1309              	.L82:
 216:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1310              		.loc 4 216 0
 1311 0090 488B03   		movq	(%rbx), %rax
 1312 0093 48898568 		movq	%rax, 616(%rbp)
 1312      020000
 217:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 1313              		.loc 4 217 0
 1314 009a 488B03   		movq	(%rbx), %rax
 1315 009d 4885C0   		testq	%rax, %rax
 1316 00a0 759D     		jne	.L90
 1317              		.p2align 4,,10
 1318 00a2 660F1F44 		.p2align 3
 1318      0000
 1319              	.L84:
 220:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 1320              		.loc 4 220 0
 1321 00a8 488B4308 		movq	8(%rbx), %rax
 1322 00ac 48898570 		movq	%rax, 624(%rbp)
 1322      020000
 1323 00b3 EB92     		jmp	.L85
 1324              	.LVL126:
 1325              		.p2align 4,,10
 1326 00b5 0F1F00   		.p2align 3
 1327              	.L87:
 1328 00b8 8B878402 		movl	644(%rdi), %eax
 1328      0000
 1329              	.LVL127:
 230:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 1330              		.loc 4 230 0
 1331 00be 4883C408 		addq	$8, %rsp
 1332              		.cfi_def_cfa_offset 24
 1333 00c2 5B       		popq	%rbx
 1334              		.cfi_def_cfa_offset 16
 1335 00c3 5D       		popq	%rbp
 1336              		.cfi_def_cfa_offset 8
 1337              	.LVL128:
 1338 00c4 C3       		ret
 1339              		.cfi_endproc
 1340              	.LFE555:
 1342              		.section	.text.unlikely._ZN16Fl_Check_Browser6removeEi
 1343              	.LCOLDE21:
 1344              		.section	.text._ZN16Fl_Check_Browser6removeEi
 1345              	.LHOTE21:
 1346              		.section	.text.unlikely._ZN16Fl_Check_Browser5clearEv,"ax",@progbits
 1347              		.align 2
 1348              	.LCOLDB22:
 1349              		.section	.text._ZN16Fl_Check_Browser5clearEv,"ax",@progbits
 1350              	.LHOTB22:
 1351              		.align 2
 1352              		.p2align 4,,15
 1353              		.globl	_ZN16Fl_Check_Browser5clearEv
 1355              	_ZN16Fl_Check_Browser5clearEv:
 1356              	.LFB556:
 233:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 1357              		.loc 4 233 0
 1358              		.cfi_startproc
 1359              	.LVL129:
 1360 0000 4154     		pushq	%r12
 1361              		.cfi_def_cfa_offset 16
 1362              		.cfi_offset 12, -16
 1363 0002 55       		pushq	%rbp
 1364              		.cfi_def_cfa_offset 24
 1365              		.cfi_offset 6, -24
 1366 0003 53       		pushq	%rbx
 1367              		.cfi_def_cfa_offset 32
 1368              		.cfi_offset 3, -32
 234:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1369              		.loc 4 234 0
 1370 0004 488B9F68 		movq	616(%rdi), %rbx
 1370      020000
 1371              	.LVL130:
 237:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 1372              		.loc 4 237 0
 1373 000b 4885DB   		testq	%rbx, %rbx
 1374 000e 7468     		je	.L91
 1375 0010 4989FC   		movq	%rdi, %r12
 241:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 1376              		.loc 4 241 0
 1377 0013 E8000000 		call	_ZN11Fl_Browser_8new_listEv
 1377      00
 1378              	.LVL131:
 1379 0018 0F1F8400 		.p2align 4,,10
 1379      00000000 
 1380              		.p2align 3
 1381              	.L93:
 244:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1382              		.loc 4 244 0
 1383 0020 488B7B18 		movq	24(%rbx), %rdi
 243:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1384              		.loc 4 243 0
 1385 0024 488B2B   		movq	(%rbx), %rbp
 1386              	.LVL132:
 244:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1387              		.loc 4 244 0
 1388 0027 E8000000 		call	free
 1388      00
 1389              	.LVL133:
 245:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 1390              		.loc 4 245 0
 1391 002c 4889DF   		movq	%rbx, %rdi
 1392 002f 4889EB   		movq	%rbp, %rbx
 1393              	.LVL134:
 1394 0032 E8000000 		call	free
 1394      00
 1395              	.LVL135:
 242:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 1396              		.loc 4 242 0
 1397 0037 4885ED   		testq	%rbp, %rbp
 1398 003a 75E4     		jne	.L93
 249:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 1399              		.loc 4 249 0
 1400 003c 49C78424 		movq	$0, 624(%r12)
 1400      70020000 
 1400      00000000 
 1401 0048 49C78424 		movq	$0, 616(%r12)
 1401      68020000 
 1401      00000000 
 250:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1402              		.loc 4 250 0
 1403 0054 41C78424 		movl	$0, 648(%r12)
 1403      88020000 
 1403      00000000 
 1404 0060 41C78424 		movl	$0, 644(%r12)
 1404      84020000 
 1404      00000000 
 251:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1405              		.loc 4 251 0
 1406 006c 41C78424 		movl	$-1, 640(%r12)
 1406      80020000 
 1406      FFFFFFFF 
 1407              	.LVL136:
 1408              	.L91:
 252:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1409              		.loc 4 252 0
 1410 0078 5B       		popq	%rbx
 1411              		.cfi_def_cfa_offset 24
 1412              	.LVL137:
 1413 0079 5D       		popq	%rbp
 1414              		.cfi_def_cfa_offset 16
 1415 007a 415C     		popq	%r12
 1416              		.cfi_def_cfa_offset 8
 1417 007c C3       		ret
 1418              		.cfi_endproc
 1419              	.LFE556:
 1421              		.section	.text.unlikely._ZN16Fl_Check_Browser5clearEv
 1422              	.LCOLDE22:
 1423              		.section	.text._ZN16Fl_Check_Browser5clearEv
 1424              	.LHOTE22:
 1425              		.section	.text.unlikely._ZNK16Fl_Check_Browser7checkedEi,"ax",@progbits
 1426              		.align 2
 1427              	.LCOLDB23:
 1428              		.section	.text._ZNK16Fl_Check_Browser7checkedEi,"ax",@progbits
 1429              	.LHOTB23:
 1430              		.align 2
 1431              		.p2align 4,,15
 1432              		.globl	_ZNK16Fl_Check_Browser7checkedEi
 1434              	_ZNK16Fl_Check_Browser7checkedEi:
 1435              	.LFB557:
 255:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 1436              		.loc 4 255 0
 1437              		.cfi_startproc
 1438              	.LVL138:
 256:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1439              		.loc 4 256 0
 1440 0000 E8000000 		call	_ZNK16Fl_Check_Browser9find_itemEi
 1440      00
 1441              	.LVL139:
 258:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 1442              		.loc 4 258 0
 1443 0005 4885C0   		testq	%rax, %rax
 1444 0008 7406     		je	.L101
 258:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 1445              		.loc 4 258 0 is_stmt 0 discriminator 1
 1446 000a 0FBE4010 		movsbl	16(%rax), %eax
 1447              	.LVL140:
 1448 000e C3       		ret
 1449              	.LVL141:
 1450 000f 90       		.p2align 4,,10
 1451              		.p2align 3
 1452              	.L101:
 259:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1453              		.loc 4 259 0 is_stmt 1
 1454 0010 31C0     		xorl	%eax, %eax
 1455              	.LVL142:
 260:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 1456              		.loc 4 260 0
 1457 0012 C3       		ret
 1458              		.cfi_endproc
 1459              	.LFE557:
 1461              		.section	.text.unlikely._ZNK16Fl_Check_Browser7checkedEi
 1462              	.LCOLDE23:
 1463              		.section	.text._ZNK16Fl_Check_Browser7checkedEi
 1464              	.LHOTE23:
 1465              		.section	.text.unlikely._ZN16Fl_Check_Browser7checkedEii,"ax",@progbits
 1466              		.align 2
 1467              	.LCOLDB24:
 1468              		.section	.text._ZN16Fl_Check_Browser7checkedEii,"ax",@progbits
 1469              	.LHOTB24:
 1470              		.align 2
 1471              		.p2align 4,,15
 1472              		.globl	_ZN16Fl_Check_Browser7checkedEii
 1474              	_ZN16Fl_Check_Browser7checkedEii:
 1475              	.LFB558:
 263:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 1476              		.loc 4 263 0
 1477              		.cfi_startproc
 1478              	.LVL143:
 1479 0000 4883EC08 		subq	$8, %rsp
 1480              		.cfi_def_cfa_offset 16
 263:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 1481              		.loc 4 263 0
 1482 0004 4989F8   		movq	%rdi, %r8
 1483 0007 4189D1   		movl	%edx, %r9d
 264:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1484              		.loc 4 264 0
 1485 000a E8000000 		call	_ZNK16Fl_Check_Browser9find_itemEi
 1485      00
 1486              	.LVL144:
 266:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 1487              		.loc 4 266 0
 1488 000f 4885C0   		testq	%rax, %rax
 1489 0012 7444     		je	.L102
 266:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 1490              		.loc 4 266 0 is_stmt 0 discriminator 1
 1491 0014 0FBE5010 		movsbl	16(%rax), %edx
 1492 0018 4439CA   		cmpl	%r9d, %edx
 1493 001b 743B     		je	.L102
 268:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 1494              		.loc 4 268 0 is_stmt 1
 1495 001d 4585C9   		testl	%r9d, %r9d
 267:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 1496              		.loc 4 267 0
 1497 0020 44884810 		movb	%r9b, 16(%rax)
 268:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 1498              		.loc 4 268 0
 1499 0024 751A     		jne	.L110
 271:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1500              		.loc 4 271 0
 1501 0026 83AF8802 		subl	$1, 648(%rdi)
 1501      000001
 273:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1502              		.loc 4 273 0
 1503 002d 4C89C7   		movq	%r8, %rdi
 275:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1504              		.loc 4 275 0
 1505 0030 4883C408 		addq	$8, %rsp
 1506              		.cfi_remember_state
 1507              		.cfi_def_cfa_offset 8
 273:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1508              		.loc 4 273 0
 1509 0034 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 1509      00
 1510              	.LVL145:
 1511 0039 0F1F8000 		.p2align 4,,10
 1511      000000
 1512              		.p2align 3
 1513              	.L110:
 1514              		.cfi_restore_state
 269:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1515              		.loc 4 269 0
 1516 0040 83878802 		addl	$1, 648(%rdi)
 1516      000001
 273:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1517              		.loc 4 273 0
 1518 0047 4C89C7   		movq	%r8, %rdi
 275:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1519              		.loc 4 275 0
 1520 004a 4883C408 		addq	$8, %rsp
 1521              		.cfi_remember_state
 1522              		.cfi_def_cfa_offset 8
 273:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1523              		.loc 4 273 0
 1524 004e E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 1524      00
 1525              	.LVL146:
 1526              		.p2align 4,,10
 1527 0053 0F1F4400 		.p2align 3
 1527      00
 1528              	.L102:
 1529              		.cfi_restore_state
 275:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1530              		.loc 4 275 0
 1531 0058 4883C408 		addq	$8, %rsp
 1532              		.cfi_def_cfa_offset 8
 1533 005c C3       		ret
 1534              		.cfi_endproc
 1535              	.LFE558:
 1537              		.section	.text.unlikely._ZN16Fl_Check_Browser7checkedEii
 1538              	.LCOLDE24:
 1539              		.section	.text._ZN16Fl_Check_Browser7checkedEii
 1540              	.LHOTE24:
 1541              		.section	.text.unlikely._ZNK16Fl_Check_Browser5valueEv,"ax",@progbits
 1542              		.align 2
 1543              	.LCOLDB25:
 1544              		.section	.text._ZNK16Fl_Check_Browser5valueEv,"ax",@progbits
 1545              	.LHOTB25:
 1546              		.align 2
 1547              		.p2align 4,,15
 1548              		.globl	_ZNK16Fl_Check_Browser5valueEv
 1550              	_ZNK16Fl_Check_Browser5valueEv:
 1551              	.LFB559:
 278:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 1552              		.loc 4 278 0
 1553              		.cfi_startproc
 1554              	.LVL147:
 1555              	.LBB102:
 1556              	.LBB103:
  60:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1557              		.loc 4 60 0
 1558 0000 488B8768 		movq	616(%rdi), %rax
 1558      020000
 1559 0007 488B8FD0 		movq	208(%rdi), %rcx
 1559      000000
 1560              	.LVL148:
  62:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 1561              		.loc 4 62 0
 1562 000e 4885C0   		testq	%rax, %rax
 1563 0011 7425     		je	.L119
 1564              	.LVL149:
  68:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 1565              		.loc 4 68 0
 1566 0013 4839C8   		cmpq	%rcx, %rax
 1567 0016 742A     		je	.L117
 1568              	.LVL150:
  72:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1569              		.loc 4 72 0
 1570 0018 488B10   		movq	(%rax), %rdx
 1571              	.LVL151:
  67:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 1572              		.loc 4 67 0
 1573 001b 4885D2   		testq	%rdx, %rdx
 1574 001e 7418     		je	.L119
 1575 0020 B8020000 		movl	$2, %eax
 1575      00
 1576              	.LVL152:
 1577              		.p2align 4,,10
 1578 0025 0F1F00   		.p2align 3
 1579              	.L114:
  68:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 1580              		.loc 4 68 0
 1581 0028 4839D1   		cmpq	%rdx, %rcx
 1582 002b 7413     		je	.L120
  72:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1583              		.loc 4 72 0
 1584 002d 488B12   		movq	(%rdx), %rdx
 1585              	.LVL153:
  71:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 1586              		.loc 4 71 0
 1587 0030 83C001   		addl	$1, %eax
 1588              	.LVL154:
  67:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 1589              		.loc 4 67 0
 1590 0033 4885D2   		testq	%rdx, %rdx
 1591 0036 75F0     		jne	.L114
 1592              	.LVL155:
 1593              	.L119:
  63:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1594              		.loc 4 63 0
 1595 0038 31C0     		xorl	%eax, %eax
 1596              	.LVL156:
 1597              	.LBE103:
 1598              	.LBE102:
 280:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 1599              		.loc 4 280 0
 1600 003a C3       		ret
 1601              	.LVL157:
 1602 003b 0F1F4400 		.p2align 4,,10
 1602      00
 1603              		.p2align 3
 1604              	.L120:
 1605 0040 F3C3     		rep ret
 1606              	.LVL158:
 1607              	.L117:
 1608              	.LBB105:
 1609              	.LBB104:
  68:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 1610              		.loc 4 68 0
 1611 0042 B8010000 		movl	$1, %eax
 1611      00
 1612              	.LVL159:
 1613 0047 C3       		ret
 1614              	.LBE104:
 1615              	.LBE105:
 1616              		.cfi_endproc
 1617              	.LFE559:
 1619              		.section	.text.unlikely._ZNK16Fl_Check_Browser5valueEv
 1620              	.LCOLDE25:
 1621              		.section	.text._ZNK16Fl_Check_Browser5valueEv
 1622              	.LHOTE25:
 1623              		.section	.text.unlikely._ZNK16Fl_Check_Browser4textEi,"ax",@progbits
 1624              		.align 2
 1625              	.LCOLDB26:
 1626              		.section	.text._ZNK16Fl_Check_Browser4textEi,"ax",@progbits
 1627              	.LHOTB26:
 1628              		.align 2
 1629              		.p2align 4,,15
 1630              		.globl	_ZNK16Fl_Check_Browser4textEi
 1632              	_ZNK16Fl_Check_Browser4textEi:
 1633              	.LFB560:
 283:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 1634              		.loc 4 283 0
 1635              		.cfi_startproc
 1636              	.LVL160:
 284:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 1637              		.loc 4 284 0
 1638 0000 E8000000 		call	_ZNK16Fl_Check_Browser9find_itemEi
 1638      00
 1639              	.LVL161:
 286:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 1640              		.loc 4 286 0
 1641 0005 4885C0   		testq	%rax, %rax
 1642 0008 7406     		je	.L123
 286:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 1643              		.loc 4 286 0 is_stmt 0 discriminator 1
 1644 000a 488B4018 		movq	24(%rax), %rax
 1645              	.LVL162:
 1646 000e C3       		ret
 1647              	.LVL163:
 1648 000f 90       		.p2align 4,,10
 1649              		.p2align 3
 1650              	.L123:
 287:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 1651              		.loc 4 287 0 is_stmt 1
 1652 0010 31C0     		xorl	%eax, %eax
 1653              	.LVL164:
 288:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 1654              		.loc 4 288 0
 1655 0012 C3       		ret
 1656              		.cfi_endproc
 1657              	.LFE560:
 1659              		.section	.text.unlikely._ZNK16Fl_Check_Browser4textEi
 1660              	.LCOLDE26:
 1661              		.section	.text._ZNK16Fl_Check_Browser4textEi
 1662              	.LHOTE26:
 1663              		.section	.text.unlikely._ZN16Fl_Check_Browser9check_allEv,"ax",@progbits
 1664              		.align 2
 1665              	.LCOLDB27:
 1666              		.section	.text._ZN16Fl_Check_Browser9check_allEv,"ax",@progbits
 1667              	.LHOTB27:
 1668              		.align 2
 1669              		.p2align 4,,15
 1670              		.globl	_ZN16Fl_Check_Browser9check_allEv
 1672              	_ZN16Fl_Check_Browser9check_allEv:
 1673              	.LFB561:
 291:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1674              		.loc 4 291 0
 1675              		.cfi_startproc
 1676              	.LVL165:
 294:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1677              		.loc 4 294 0
 1678 0000 8B878402 		movl	644(%rdi), %eax
 1678      0000
 1679 0006 89878802 		movl	%eax, 648(%rdi)
 1679      0000
 295:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 1680              		.loc 4 295 0
 1681 000c 488B8768 		movq	616(%rdi), %rax
 1681      020000
 1682              	.LVL166:
 1683 0013 4885C0   		testq	%rax, %rax
 1684 0016 7414     		je	.L126
 1685 0018 0F1F8400 		.p2align 4,,10
 1685      00000000 
 1686              		.p2align 3
 1687              	.L130:
 296:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1688              		.loc 4 296 0 discriminator 2
 1689 0020 C6401001 		movb	$1, 16(%rax)
 295:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 1690              		.loc 4 295 0 discriminator 2
 1691 0024 488B00   		movq	(%rax), %rax
 1692              	.LVL167:
 1693 0027 4885C0   		testq	%rax, %rax
 1694 002a 75F4     		jne	.L130
 1695              	.L126:
 298:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 1696              		.loc 4 298 0
 1697 002c E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 1697      00
 1698              	.LVL168:
 1699              		.cfi_endproc
 1700              	.LFE561:
 1702              		.section	.text.unlikely._ZN16Fl_Check_Browser9check_allEv
 1703              	.LCOLDE27:
 1704              		.section	.text._ZN16Fl_Check_Browser9check_allEv
 1705              	.LHOTE27:
 1706              		.section	.text.unlikely._ZN16Fl_Check_Browser10check_noneEv,"ax",@progbits
 1707              		.align 2
 1708              	.LCOLDB28:
 1709              		.section	.text._ZN16Fl_Check_Browser10check_noneEv,"ax",@progbits
 1710              	.LHOTB28:
 1711              		.align 2
 1712              		.p2align 4,,15
 1713              		.globl	_ZN16Fl_Check_Browser10check_noneEv
 1715              	_ZN16Fl_Check_Browser10check_noneEv:
 1716              	.LFB562:
 302:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 1717              		.loc 4 302 0
 1718              		.cfi_startproc
 1719              	.LVL169:
 306:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1720              		.loc 4 306 0
 1721 0000 488B8768 		movq	616(%rdi), %rax
 1721      020000
 1722              	.LVL170:
 305:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 1723              		.loc 4 305 0
 1724 0007 C7878802 		movl	$0, 648(%rdi)
 1724      00000000 
 1724      0000
 306:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1725              		.loc 4 306 0
 1726 0011 4885C0   		testq	%rax, %rax
 1727 0014 7416     		je	.L134
 1728 0016 662E0F1F 		.p2align 4,,10
 1728      84000000 
 1728      0000
 1729              		.p2align 3
 1730              	.L138:
 307:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 1731              		.loc 4 307 0 discriminator 2
 1732 0020 C6401000 		movb	$0, 16(%rax)
 306:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1733              		.loc 4 306 0 discriminator 2
 1734 0024 488B00   		movq	(%rax), %rax
 1735              	.LVL171:
 1736 0027 4885C0   		testq	%rax, %rax
 1737 002a 75F4     		jne	.L138
 1738              	.L134:
 309:fltk-1.3.4-1/src/Fl_Check_Browser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1739              		.loc 4 309 0
 1740 002c E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 1740      00
 1741              	.LVL172:
 1742              		.cfi_endproc
 1743              	.LFE562:
 1745              		.section	.text.unlikely._ZN16Fl_Check_Browser10check_noneEv
 1746              	.LCOLDE28:
 1747              		.section	.text._ZN16Fl_Check_Browser10check_noneEv
 1748              	.LHOTE28:
 1749              		.section	.text.unlikely._ZN16Fl_Check_BrowserD2Ev,"axG",@progbits,_ZN16Fl_Check_BrowserD5Ev,comdat
 1750              		.align 2
 1751              	.LCOLDB29:
 1752              		.section	.text._ZN16Fl_Check_BrowserD2Ev,"axG",@progbits,_ZN16Fl_Check_BrowserD5Ev,comdat
 1753              	.LHOTB29:
 1754              		.align 2
 1755              		.p2align 4,,15
 1756              		.weak	_ZN16Fl_Check_BrowserD2Ev
 1758              	_ZN16Fl_Check_BrowserD2Ev:
 1759              	.LFB532:
 1760              		.file 6 "fltk-1.3.4-1/FL/Fl_Check_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** // "$Id: Fl_Check_Browser.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** // Fl_Check_Browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****    Fl_Check_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** #ifndef Fl_Check_Browser_H
  23:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** #define Fl_Check_Browser_H
  24:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  25:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** #include "Fl.H"
  26:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** #include "Fl_Browser_.H"
  27:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  28:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** /**
  29:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   The Fl_Check_Browser widget displays a scrolling list of text
  30:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   lines that may be selected and/or checked by the user.
  31:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** */
  32:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** class FL_EXPORT Fl_Check_Browser : public Fl_Browser_ {
  33:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   /* required routines for Fl_Browser_ subclass: */
  34:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  35:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   void *item_first() const;
  36:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   void *item_next(void *) const;
  37:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   void *item_prev(void *) const;
  38:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   int item_height(void *) const;
  39:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   int item_width(void *) const;
  40:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   void item_draw(void *, int, int, int, int) const;
  41:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   void item_select(void *, int);
  42:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   int item_selected(void *) const;
  43:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  44:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   /* private data */
  45:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  46:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   public: // IRIX 5.3 C++ compiler doesn't support private structures...
  47:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  48:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** #ifndef FL_DOXYGEN
  49:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   /** For internal use only. */
  50:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   struct cb_item {
  51:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 	  cb_item *next;	/**< For internal use only. */
  52:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 	  cb_item *prev;	/**< For internal use only. */
  53:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 	  char checked;		/**< For internal use only. */
  54:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 	  char selected;	/**< For internal use only. */
  55:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 	  char *text;		/**< For internal use only. */
  56:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   };
  57:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** #endif // !FL_DOXYGEN
  58:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  59:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   private:
  60:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  61:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   cb_item *first;
  62:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   cb_item *last;
  63:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   cb_item *cache;
  64:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   int cached_item;
  65:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   int nitems_;
  66:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   int nchecked_;
  67:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   cb_item *find_item(int) const;
  68:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   int lineno(cb_item *) const;
  69:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  70:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   public:
  71:fltk-1.3.4-1/FL/Fl_Check_Browser.H **** 
  72:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   Fl_Check_Browser(int x, int y, int w, int h, const char *l = 0);
  73:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****    /** The destructor deletes all list items and destroys the browser. */
  74:fltk-1.3.4-1/FL/Fl_Check_Browser.H ****   ~Fl_Check_Browser() { clear(); }
 1761              		.loc 6 74 0
 1762              		.cfi_startproc
 1763              	.LVL173:
 1764 0000 53       		pushq	%rbx
 1765              		.cfi_def_cfa_offset 16
 1766              		.cfi_offset 3, -16
 1767              		.loc 6 74 0
 1768 0001 4889FB   		movq	%rdi, %rbx
 1769              	.LBB110:
 1770 0004 48C70700 		movq	$_ZTV16Fl_Check_Browser+16, (%rdi)
 1770      000000
 1771 000b E8000000 		call	_ZN16Fl_Check_Browser5clearEv
 1771      00
 1772              	.LVL174:
 1773              	.LBB111:
 1774              	.LBB112:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 1775              		.loc 3 77 0
 1776 0010 488DBBB0 		leaq	432(%rbx), %rdi
 1776      010000
 1777 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 1777      000000
 1778 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 1778      00
 1779              	.LVL175:
 1780 0023 488DBBF8 		leaq	248(%rbx), %rdi
 1780      000000
 1781 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 1781      00
 1782              	.LVL176:
 1783 002f 4889DF   		movq	%rbx, %rdi
 1784              	.LBE112:
 1785              	.LBE111:
 1786              	.LBE110:
 1787              		.loc 6 74 0
 1788 0032 5B       		popq	%rbx
 1789              		.cfi_def_cfa_offset 8
 1790              	.LVL177:
 1791              	.LBB115:
 1792              	.LBB114:
 1793              	.LBB113:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 1794              		.loc 3 77 0
 1795 0033 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 1795      00
 1796              	.LVL178:
 1797              	.LBE113:
 1798              	.LBE114:
 1799              	.LBE115:
 1800              		.cfi_endproc
 1801              	.LFE532:
 1803              		.section	.text.unlikely._ZN16Fl_Check_BrowserD2Ev,"axG",@progbits,_ZN16Fl_Check_BrowserD5Ev,comdat
 1804              	.LCOLDE29:
 1805              		.section	.text._ZN16Fl_Check_BrowserD2Ev,"axG",@progbits,_ZN16Fl_Check_BrowserD5Ev,comdat
 1806              	.LHOTE29:
 1807              		.weak	_ZN16Fl_Check_BrowserD1Ev
 1808              		.set	_ZN16Fl_Check_BrowserD1Ev,_ZN16Fl_Check_BrowserD2Ev
 1809              		.section	.text.unlikely._ZN16Fl_Check_BrowserD0Ev,"axG",@progbits,_ZN16Fl_Check_BrowserD5Ev,comdat
 1810              		.align 2
 1811              	.LCOLDB30:
 1812              		.section	.text._ZN16Fl_Check_BrowserD0Ev,"axG",@progbits,_ZN16Fl_Check_BrowserD5Ev,comdat
 1813              	.LHOTB30:
 1814              		.align 2
 1815              		.p2align 4,,15
 1816              		.weak	_ZN16Fl_Check_BrowserD0Ev
 1818              	_ZN16Fl_Check_BrowserD0Ev:
 1819              	.LFB534:
 1820              		.loc 6 74 0
 1821              		.cfi_startproc
 1822              	.LVL179:
 1823 0000 53       		pushq	%rbx
 1824              		.cfi_def_cfa_offset 16
 1825              		.cfi_offset 3, -16
 1826              		.loc 6 74 0
 1827 0001 4889FB   		movq	%rdi, %rbx
 1828              	.LBB121:
 1829              	.LBB122:
 1830 0004 48C70700 		movq	$_ZTV16Fl_Check_Browser+16, (%rdi)
 1830      000000
 1831 000b E8000000 		call	_ZN16Fl_Check_Browser5clearEv
 1831      00
 1832              	.LVL180:
 1833              	.LBB123:
 1834              	.LBB124:
  77:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
 1835              		.loc 3 77 0
 1836 0010 488DBBB0 		leaq	432(%rbx), %rdi
 1836      010000
 1837 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 1837      000000
 1838 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 1838      00
 1839              	.LVL181:
 1840 0023 488DBBF8 		leaq	248(%rbx), %rdi
 1840      000000
 1841 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 1841      00
 1842              	.LVL182:
 1843 002f 4889DF   		movq	%rbx, %rdi
 1844 0032 E8000000 		call	_ZN8Fl_GroupD2Ev
 1844      00
 1845              	.LVL183:
 1846              	.LBE124:
 1847              	.LBE123:
 1848              	.LBE122:
 1849              	.LBE121:
 1850              		.loc 6 74 0
 1851 0037 4889DF   		movq	%rbx, %rdi
 1852 003a 5B       		popq	%rbx
 1853              		.cfi_def_cfa_offset 8
 1854              	.LVL184:
 1855 003b E9000000 		jmp	_ZdlPv
 1855      00
 1856              	.LVL185:
 1857              		.cfi_endproc
 1858              	.LFE534:
 1860              		.section	.text.unlikely._ZN16Fl_Check_BrowserD0Ev,"axG",@progbits,_ZN16Fl_Check_BrowserD5Ev,comdat
 1861              	.LCOLDE30:
 1862              		.section	.text._ZN16Fl_Check_BrowserD0Ev,"axG",@progbits,_ZN16Fl_Check_BrowserD5Ev,comdat
 1863              	.LHOTE30:
 1864              		.weak	_ZTS16Fl_Check_Browser
 1865              		.section	.rodata._ZTS16Fl_Check_Browser,"aG",@progbits,_ZTS16Fl_Check_Browser,comdat
 1866              		.align 16
 1869              	_ZTS16Fl_Check_Browser:
 1870 0000 3136466C 		.string	"16Fl_Check_Browser"
 1870      5F436865 
 1870      636B5F42 
 1870      726F7773 
 1870      657200
 1871              		.weak	_ZTI16Fl_Check_Browser
 1872              		.section	.rodata._ZTI16Fl_Check_Browser,"aG",@progbits,_ZTI16Fl_Check_Browser,comdat
 1873              		.align 8
 1876              	_ZTI16Fl_Check_Browser:
 1877 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1877      00000000 
 1878 0008 00000000 		.quad	_ZTS16Fl_Check_Browser
 1878      00000000 
 1879 0010 00000000 		.quad	_ZTI11Fl_Browser_
 1879      00000000 
 1880              		.weak	_ZTV16Fl_Check_Browser
 1881              		.section	.rodata._ZTV16Fl_Check_Browser,"aG",@progbits,_ZTV16Fl_Check_Browser,comdat
 1882              		.align 8
 1885              	_ZTV16Fl_Check_Browser:
 1886 0000 00000000 		.quad	0
 1886      00000000 
 1887 0008 00000000 		.quad	_ZTI16Fl_Check_Browser
 1887      00000000 
 1888 0010 00000000 		.quad	_ZN16Fl_Check_BrowserD1Ev
 1888      00000000 
 1889 0018 00000000 		.quad	_ZN16Fl_Check_BrowserD0Ev
 1889      00000000 
 1890 0020 00000000 		.quad	_ZN11Fl_Browser_4drawEv
 1890      00000000 
 1891 0028 00000000 		.quad	_ZN16Fl_Check_Browser6handleEi
 1891      00000000 
 1892 0030 00000000 		.quad	_ZN11Fl_Browser_6resizeEiiii
 1892      00000000 
 1893 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1893      00000000 
 1894 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1894      00000000 
 1895 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 1895      00000000 
 1896 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1896      00000000 
 1897 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1897      00000000 
 1898 0060 00000000 		.quad	_ZNK16Fl_Check_Browser10item_firstEv
 1898      00000000 
 1899 0068 00000000 		.quad	_ZNK16Fl_Check_Browser9item_nextEPv
 1899      00000000 
 1900 0070 00000000 		.quad	_ZNK16Fl_Check_Browser9item_prevEPv
 1900      00000000 
 1901 0078 00000000 		.quad	_ZNK11Fl_Browser_9item_lastEv
 1901      00000000 
 1902 0080 00000000 		.quad	_ZNK16Fl_Check_Browser11item_heightEPv
 1902      00000000 
 1903 0088 00000000 		.quad	_ZNK16Fl_Check_Browser10item_widthEPv
 1903      00000000 
 1904 0090 00000000 		.quad	_ZNK11Fl_Browser_17item_quick_heightEPv
 1904      00000000 
 1905 0098 00000000 		.quad	_ZNK16Fl_Check_Browser9item_drawEPviiii
 1905      00000000 
 1906 00a0 00000000 		.quad	_ZNK11Fl_Browser_9item_textEPv
 1906      00000000 
 1907 00a8 00000000 		.quad	_ZN11Fl_Browser_9item_swapEPvS0_
 1907      00000000 
 1908 00b0 00000000 		.quad	_ZNK11Fl_Browser_7item_atEi
 1908      00000000 
 1909 00b8 00000000 		.quad	_ZNK11Fl_Browser_10full_widthEv
 1909      00000000 
 1910 00c0 00000000 		.quad	_ZNK11Fl_Browser_11full_heightEv
 1910      00000000 
 1911 00c8 00000000 		.quad	_ZNK11Fl_Browser_11incr_heightEv
 1911      00000000 
 1912 00d0 00000000 		.quad	_ZN16Fl_Check_Browser11item_selectEPvi
 1912      00000000 
 1913 00d8 00000000 		.quad	_ZNK16Fl_Check_Browser13item_selectedEPv
 1913      00000000 
 1914              		.text
 1915              	.Letext0:
 1916              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 1917              	.Letext_cold0:
 1918              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1919              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1920              		.file 9 "/usr/include/libio.h"
 1921              		.file 10 "fltk-1.3.4-1/FL/fl_types.h"
 1922              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 1923              		.file 12 "fltk-1.3.4-1/FL/Fl_Device.H"
 1924              		.file 13 "/usr/include/stdio.h"
 1925              		.file 14 "/usr/include/stdlib.h"
 1926              		.file 15 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Check_Browser.cxx
     /tmp/ccks2d0O.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccks2d0O.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccks2d0O.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccks2d0O.s:90     .text._ZNK11Fl_Browser_9item_lastEv:0000000000000000 _ZNK11Fl_Browser_9item_lastEv
     /tmp/ccks2d0O.s:115    .text._ZNK11Fl_Browser_9item_textEPv:0000000000000000 _ZNK11Fl_Browser_9item_textEPv
     /tmp/ccks2d0O.s:139    .text._ZN11Fl_Browser_9item_swapEPvS0_:0000000000000000 _ZN11Fl_Browser_9item_swapEPvS0_
     /tmp/ccks2d0O.s:161    .text._ZNK11Fl_Browser_7item_atEi:0000000000000000 _ZNK11Fl_Browser_7item_atEi
     /tmp/ccks2d0O.s:185    .text._ZNK16Fl_Check_Browser10item_firstEv:0000000000000000 _ZNK16Fl_Check_Browser10item_firstEv
     /tmp/ccks2d0O.s:211    .text._ZNK16Fl_Check_Browser9item_nextEPv:0000000000000000 _ZNK16Fl_Check_Browser9item_nextEPv
     /tmp/ccks2d0O.s:236    .text._ZNK16Fl_Check_Browser9item_prevEPv:0000000000000000 _ZNK16Fl_Check_Browser9item_prevEPv
     /tmp/ccks2d0O.s:261    .text._ZNK16Fl_Check_Browser11item_heightEPv:0000000000000000 _ZNK16Fl_Check_Browser11item_heightEPv
     /tmp/ccks2d0O.s:287    .text._ZNK16Fl_Check_Browser13item_selectedEPv:0000000000000000 _ZNK16Fl_Check_Browser13item_selectedEPv
     /tmp/ccks2d0O.s:312    .text._ZNK16Fl_Check_Browser10item_widthEPv:0000000000000000 _ZNK16Fl_Check_Browser10item_widthEPv
     /tmp/ccks2d0O.s:377    .text._ZNK16Fl_Check_Browser9item_drawEPviiii:0000000000000000 _ZNK16Fl_Check_Browser9item_drawEPviiii
     /tmp/ccks2d0O.s:712    .text._ZN16Fl_Check_Browser6handleEi:0000000000000000 _ZN16Fl_Check_Browser6handleEi
     /tmp/ccks2d0O.s:787    .text._ZN16Fl_Check_Browser11item_selectEPvi:0000000000000000 _ZN16Fl_Check_Browser11item_selectEPvi
     /tmp/ccks2d0O.s:835    .text._ZNK16Fl_Check_Browser9find_itemEi:0000000000000000 _ZNK16Fl_Check_Browser9find_itemEi
     /tmp/ccks2d0O.s:955    .text._ZNK16Fl_Check_Browser6linenoEPNS_7cb_itemE:0000000000000000 _ZNK16Fl_Check_Browser6linenoEPNS_7cb_itemE
     /tmp/ccks2d0O.s:1027   .text._ZN16Fl_Check_BrowserC2EiiiiPKc:0000000000000000 _ZN16Fl_Check_BrowserC2EiiiiPKc
     /tmp/ccks2d0O.s:1885   .rodata._ZTV16Fl_Check_Browser:0000000000000000 _ZTV16Fl_Check_Browser
     /tmp/ccks2d0O.s:1027   .text._ZN16Fl_Check_BrowserC2EiiiiPKc:0000000000000000 _ZN16Fl_Check_BrowserC1EiiiiPKc
     /tmp/ccks2d0O.s:1089   .text._ZN16Fl_Check_Browser3addEPci:0000000000000000 _ZN16Fl_Check_Browser3addEPci
     /tmp/ccks2d0O.s:1202   .text._ZN16Fl_Check_Browser3addEPc:0000000000000000 _ZN16Fl_Check_Browser3addEPc
     /tmp/ccks2d0O.s:1227   .text._ZN16Fl_Check_Browser6removeEi:0000000000000000 _ZN16Fl_Check_Browser6removeEi
     /tmp/ccks2d0O.s:1355   .text._ZN16Fl_Check_Browser5clearEv:0000000000000000 _ZN16Fl_Check_Browser5clearEv
     /tmp/ccks2d0O.s:1434   .text._ZNK16Fl_Check_Browser7checkedEi:0000000000000000 _ZNK16Fl_Check_Browser7checkedEi
     /tmp/ccks2d0O.s:1474   .text._ZN16Fl_Check_Browser7checkedEii:0000000000000000 _ZN16Fl_Check_Browser7checkedEii
     /tmp/ccks2d0O.s:1550   .text._ZNK16Fl_Check_Browser5valueEv:0000000000000000 _ZNK16Fl_Check_Browser5valueEv
     /tmp/ccks2d0O.s:1632   .text._ZNK16Fl_Check_Browser4textEi:0000000000000000 _ZNK16Fl_Check_Browser4textEi
     /tmp/ccks2d0O.s:1672   .text._ZN16Fl_Check_Browser9check_allEv:0000000000000000 _ZN16Fl_Check_Browser9check_allEv
     /tmp/ccks2d0O.s:1715   .text._ZN16Fl_Check_Browser10check_noneEv:0000000000000000 _ZN16Fl_Check_Browser10check_noneEv
     /tmp/ccks2d0O.s:1758   .text._ZN16Fl_Check_BrowserD2Ev:0000000000000000 _ZN16Fl_Check_BrowserD2Ev
     /tmp/ccks2d0O.s:1758   .text._ZN16Fl_Check_BrowserD2Ev:0000000000000000 _ZN16Fl_Check_BrowserD1Ev
     /tmp/ccks2d0O.s:1818   .text._ZN16Fl_Check_BrowserD0Ev:0000000000000000 _ZN16Fl_Check_BrowserD0Ev
     /tmp/ccks2d0O.s:1869   .rodata._ZTS16Fl_Check_Browser:0000000000000000 _ZTS16Fl_Check_Browser
     /tmp/ccks2d0O.s:1876   .rodata._ZTI16Fl_Check_Browser:0000000000000000 _ZTI16Fl_Check_Browser
                           .group:0000000000000000 _ZN16Fl_Check_BrowserD5Ev
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
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
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
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2

UNDEFINED SYMBOLS
fl_graphics_driver
_Z8fl_widthPKc
_ZNK9Fl_Widget8active_rEv
_Z11fl_contrastjj
_Z7fl_drawPKcii
_Z11fl_inactivej
_ZN11Fl_Browser_6handleEi
_ZN11Fl_Browser_8deselectEi
_ZN11Fl_Browser_C2EiiiiPKc
malloc
strdup
_ZN11Fl_Browser_8deletingEPv
free
_ZN11Fl_Browser_8new_listEv
_ZN9Fl_Widget6redrawEv
_ZTV11Fl_Browser_
_ZN12Fl_ScrollbarD1Ev
_ZN8Fl_GroupD2Ev
_ZdlPv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI11Fl_Browser_
_ZN11Fl_Browser_4drawEv
_ZN11Fl_Browser_6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
_ZNK11Fl_Browser_17item_quick_heightEPv
_ZNK11Fl_Browser_10full_widthEv
_ZNK11Fl_Browser_11full_heightEv
_ZNK11Fl_Browser_11incr_heightEv
