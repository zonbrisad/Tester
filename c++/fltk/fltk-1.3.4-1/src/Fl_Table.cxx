   1              		.file	"Fl_Table.cxx"
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
  17              	.LFB128:
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
  26              	.LFE128:
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
  42              	.LFB129:
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
  50              	.LFE129:
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
  66              	.LFB145:
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
  75              	.LFE145:
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
 104              		.section	.text.unlikely._ZN8Fl_TableD2Ev,"ax",@progbits
 105              		.align 2
 106              	.LCOLDB4:
 107              		.section	.text._ZN8Fl_TableD2Ev,"ax",@progbits
 108              	.LHOTB4:
 109              		.align 2
 110              		.p2align 4,,15
 111              		.globl	_ZN8Fl_TableD2Ev
 113              	_ZN8Fl_TableD2Ev:
 114              	.LFB576:
 115              		.file 4 "fltk-1.3.4-1/src/Fl_Table.cxx"
   1:fltk-1.3.4-1/src/Fl_Table.cxx ****    1              		.file	"Fl_Table.cxx"
   2:fltk-1.3.4-1/src/Fl_Table.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Table.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Table.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Table.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Table.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Table.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Table.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Table.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Table.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Table.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Table.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Table.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Table.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Table.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Table.cxx ****   17              	.LFB128:
  17:fltk-1.3.4-1/src/Fl_Table.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Table.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Table.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Table.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Table.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Table.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Table.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Table.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Table.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Table.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Table.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Table.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Table.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Table.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Table.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Table.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Table.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Table.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Table.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Table.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Table.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Table.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Table.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Table.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Table.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Table.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Table.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Table.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Table.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Table.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Table.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Table.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Table.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Table.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Table.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Table.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Table.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Table.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Table.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Table.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Table.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Table.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Table.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Table.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Table.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Table.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Table.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Table.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Table.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Table.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Table.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Table.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Table.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Table.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Table.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Table.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Table.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Table.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Table.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Table.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Table.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Table.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Table.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Table.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Table.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Table.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Table.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Table.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Table.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Table.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Table.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Table.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Table.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Table.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Table.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Table.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Table.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Table.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Table.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Table.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Table.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Table.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Table.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Table.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Table.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Table.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Table.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Table.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Table.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Table.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Table.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Table.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Table.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Table.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Table.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Table.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Table.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Table.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Table.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Table.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Table.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Table.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Table.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Table.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Table.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Table.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Table.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Table.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Table.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Table.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Table.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Table.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Table.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Table.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Table.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Table.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Table.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Table.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Table.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Table.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Table.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Table.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Table.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Table.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Table.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Table.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Table.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Table.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Table.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Table.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Table.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Table.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Table.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Table.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Table.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Table.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Table.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Table.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Table.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Table.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Table.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Table.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Table.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 116              		.loc 4 164 0
 117              		.cfi_startproc
 118              	.LVL4:
 119              		.loc 4 164 0
 120 0000 53       		pushq	%rbx
 121              		.cfi_def_cfa_offset 16
 122              		.cfi_offset 3, -16
 123              		.loc 4 164 0
 124 0001 4889FB   		movq	%rdi, %rbx
 125              	.LBB881:
 126 0004 48C70700 		movq	$_ZTV8Fl_Table+16, (%rdi)
 126      000000
 127              	.LVL5:
 128              	.LBB882:
 129              	.LBB883:
 236:fltk-1.3.4-1/FL/Fl_Table.H ****     IntVector(IntVector&o) { init(); copy(o.arr, o._size); }	// COPY CTOR
 130              		.loc 3 236 0
 131 000b 488BBFF8 		movq	248(%rdi), %rdi
 131      000000
 132              	.LVL6:
 133 0012 4885FF   		testq	%rdi, %rdi
 134 0015 7405     		je	.L6
 135 0017 E8000000 		call	free
 135      00
 136              	.LVL7:
 137              	.L6:
 138              	.LBE883:
 139              	.LBE882:
 140              	.LBB884:
 141              	.LBB885:
 142 001c 488BBBE8 		movq	232(%rbx), %rdi
 142      000000
 143 0023 4885FF   		testq	%rdi, %rdi
 144 0026 7405     		je	.L7
 145 0028 E8000000 		call	free
 145      00
 146              	.LVL8:
 147              	.L7:
 148              	.LBE885:
 149              	.LBE884:
 150              		.loc 4 164 0
 151 002d 4889DF   		movq	%rbx, %rdi
 152              	.LBE881:
 165:fltk-1.3.4-1/src/Fl_Table.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Table.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 153              		.loc 4 166 0
 154 0030 5B       		popq	%rbx
 155              		.cfi_def_cfa_offset 8
 156              	.LVL9:
 157              	.LBB886:
 164:fltk-1.3.4-1/src/Fl_Table.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 158              		.loc 4 164 0
 159 0031 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 159      00
 160              	.LVL10:
 161              	.LBE886:
 162              		.cfi_endproc
 163              	.LFE576:
 165              		.section	.text.unlikely._ZN8Fl_TableD2Ev
 166              	.LCOLDE4:
 167              		.section	.text._ZN8Fl_TableD2Ev
 168              	.LHOTE4:
 169              		.globl	_ZN8Fl_TableD1Ev
 170              		.set	_ZN8Fl_TableD1Ev,_ZN8Fl_TableD2Ev
 171              		.section	.text.unlikely._ZN8Fl_TableD0Ev,"ax",@progbits
 172              		.align 2
 173              	.LCOLDB5:
 174              		.section	.text._ZN8Fl_TableD0Ev,"ax",@progbits
 175              	.LHOTB5:
 176              		.align 2
 177              		.p2align 4,,15
 178              		.globl	_ZN8Fl_TableD0Ev
 180              	_ZN8Fl_TableD0Ev:
 181              	.LFB578:
 164:fltk-1.3.4-1/src/Fl_Table.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 182              		.loc 4 164 0
 183              		.cfi_startproc
 184              	.LVL11:
 185 0000 53       		pushq	%rbx
 186              		.cfi_def_cfa_offset 16
 187              		.cfi_offset 3, -16
 164:fltk-1.3.4-1/src/Fl_Table.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 188              		.loc 4 164 0
 189 0001 4889FB   		movq	%rdi, %rbx
 190              		.loc 4 166 0
 191 0004 E8000000 		call	_ZN8Fl_TableD1Ev
 191      00
 192              	.LVL12:
 193 0009 4889DF   		movq	%rbx, %rdi
 194 000c 5B       		popq	%rbx
 195              		.cfi_def_cfa_offset 8
 196              	.LVL13:
 197 000d E9000000 		jmp	_ZdlPv
 197      00
 198              	.LVL14:
 199              		.cfi_endproc
 200              	.LFE578:
 202              		.section	.text.unlikely._ZN8Fl_TableD0Ev
 203              	.LCOLDE5:
 204              		.section	.text._ZN8Fl_TableD0Ev
 205              	.LHOTE5:
 206              		.section	.text.unlikely._ZN8Fl_Table5clearEv,"axG",@progbits,_ZN8Fl_Table5clearEv,comdat
 207              		.align 2
 208              	.LCOLDB6:
 209              		.section	.text._ZN8Fl_Table5clearEv,"axG",@progbits,_ZN8Fl_Table5clearEv,comdat
 210              	.LHOTB6:
 211              		.align 2
 212              		.p2align 4,,15
 213              		.weak	_ZN8Fl_Table5clearEv
 215              	_ZN8Fl_Table5clearEv:
 216              	.LFB516:
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
 217              		.loc 3 493 0
 218              		.cfi_startproc
 219              	.LVL15:
 220 0000 53       		pushq	%rbx
 221              		.cfi_def_cfa_offset 16
 222              		.cfi_offset 3, -16
 223              		.loc 3 493 0
 224 0001 488B07   		movq	(%rdi), %rax
 225 0004 4889FB   		movq	%rdi, %rbx
 226 0007 31F6     		xorl	%esi, %esi
 227 0009 FF5060   		call	*96(%rax)
 228              	.LVL16:
 229 000c 488B03   		movq	(%rbx), %rax
 230 000f 4889DF   		movq	%rbx, %rdi
 231 0012 31F6     		xorl	%esi, %esi
 232 0014 FF5068   		call	*104(%rax)
 233              	.LVL17:
 234 0017 488BBB90 		movq	400(%rbx), %rdi
 234      010000
 235 001e 5B       		popq	%rbx
 236              		.cfi_def_cfa_offset 8
 237              	.LVL18:
 238 001f E9000000 		jmp	_ZN9Fl_Scroll5clearEv
 238      00
 239              	.LVL19:
 240              		.cfi_endproc
 241              	.LFE516:
 243              		.section	.text.unlikely._ZN8Fl_Table5clearEv,"axG",@progbits,_ZN8Fl_Table5clearEv,comdat
 244              	.LCOLDE6:
 245              		.section	.text._ZN8Fl_Table5clearEv,"axG",@progbits,_ZN8Fl_Table5clearEv,comdat
 246              	.LHOTE6:
 247              		.section	.text.unlikely._ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35,"ax",@progbits
 248              		.align 2
 249              	.LCOLDB7:
 250              		.section	.text._ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35,"ax",@progbits
 251              	.LHOTB7:
 252              		.align 2
 253              		.p2align 4,,15
 255              	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35:
 256              	.LFB643:
 167:fltk-1.3.4-1/src/Fl_Table.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Table.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Table.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Table.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Table.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Table.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Table.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Table.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Table.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Table.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Table.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Table.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Table.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Table.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Table.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Table.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Table.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Table.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Table.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Table.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Table.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Table.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Table.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Table.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Table.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Table.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Table.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Table.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Table.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Table.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Table.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Table.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Table.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Table.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Table.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Table.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Table.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Table.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Table.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Table.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Table.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Table.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Table.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Table.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Table.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Table.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Table.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Table.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Table.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Table.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Table.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Table.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Table.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Table.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Table.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Table.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Table.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Table.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Table.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Table.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Table.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Table.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Table.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Table.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Table.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Table.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Table.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Table.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Table.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Table.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Table.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Table.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Table.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Table.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Table.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Table.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Table.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Table.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Table.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Table.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Table.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Table.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Table.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Table.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Table.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Table.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Table.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Table.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Table.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Table.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Table.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Table.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Table.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Table.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Table.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Table.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Table.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Table.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Table.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Table.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Table.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Table.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Table.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Table.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Table.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Table.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Table.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Table.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Table.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Table.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Table.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Table.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Table.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Table.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Table.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Table.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Table.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Table.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Table.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Table.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Table.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Table.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Table.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Table.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Table.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Table.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Table.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Table.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Table.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Table.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Table.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Table.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Table.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Table.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Table.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Table.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Table.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Table.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Table.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Table.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Table.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Table.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Table.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Table.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Table.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Table.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Table.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Table.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Table.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Table.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Table.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Table.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Table.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Table.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Table.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Table.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Table.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Table.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Table.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Table.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Table.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Table.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Table.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Table.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Table.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Table.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Table.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Table.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Table.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Table.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Table.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Table.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Table.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Table.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Table.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Table.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Table.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Table.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Table.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Table.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Table.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Table.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Table.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Table.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Table.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Table.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Table.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Table.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Table.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Table.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Table.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Table.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Table.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Table.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Table.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Table.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Table.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Table.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Table.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Table.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Table.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Table.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Table.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Table.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Table.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Table.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Table.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Table.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Table.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Table.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Table.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Table.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Table.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Table.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Table.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Table.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Table.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Table.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Table.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Table.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Table.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Table.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Table.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Table.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Table.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Table.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Table.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Table.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Table.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Table.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Table.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Table.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Table.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Table.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Table.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Table.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Table.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Table.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Table.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Table.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Table.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Table.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Table.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Table.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Table.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Table.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Table.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Table.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Table.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Table.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Table.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Table.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Table.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Table.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Table.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Table.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Table.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Table.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Table.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Table.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Table.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Table.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Table.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Table.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Table.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Table.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Table.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Table.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Table.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Table.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Table.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Table.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Table.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Table.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Table.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Table.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Table.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Table.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Table.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Table.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Table.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Table.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Table.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Table.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Table.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Table.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Table.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Table.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Table.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Table.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Table.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Table.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Table.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Table.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Table.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Table.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Table.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Table.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Table.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Table.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Table.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Table.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Table.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Table.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Table.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Table.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Table.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Table.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Table.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Table.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Table.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Table.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Table.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Table.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Table.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Table.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Table.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Table.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Table.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Table.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Table.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Table.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Table.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Table.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Table.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Table.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Table.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Table.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Table.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Table.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Table.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Table.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Table.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Table.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Table.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Table.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Table.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Table.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Table.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Table.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Table.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Table.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Table.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Table.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Table.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Table.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Table.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Table.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Table.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Table.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Table.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_Table.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Table.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Table.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Table.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Table.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Table.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Table.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Table.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Table.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Table.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Table.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Table.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_Table.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Table.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_Table.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Table.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_Table.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_Table.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Table.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_Table.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Table.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Table.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Table.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Table.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_Table.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_Table.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Table.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/Fl_Table.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_Table.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Table.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Table.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_Table.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Table.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Table.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Table.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Table.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Table.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Table.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Table.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Table.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Table.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Table.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Table.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Table.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Table.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Table.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Table.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_Table.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Table.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 567:fltk-1.3.4-1/src/Fl_Table.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_Table.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/Fl_Table.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Table.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_Table.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Table.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Table.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 574:fltk-1.3.4-1/src/Fl_Table.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Table.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Table.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_Table.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Table.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_Table.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_Table.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Table.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_Table.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_Table.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_Table.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Table.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/Fl_Table.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_Table.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 588:fltk-1.3.4-1/src/Fl_Table.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_Table.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/Fl_Table.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_Table.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Table.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/Fl_Table.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_Table.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_Table.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Table.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Table.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Table.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Table.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Table.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Table.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Table.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_Table.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_Table.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_Table.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_Table.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_Table.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_Table.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/Fl_Table.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Table.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Table.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_Table.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_Table.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_Table.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/Fl_Table.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/Fl_Table.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_Table.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Table.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/Fl_Table.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/Fl_Table.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/Fl_Table.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_Table.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/Fl_Table.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_Table.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 625:fltk-1.3.4-1/src/Fl_Table.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_Table.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_Table.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 628:fltk-1.3.4-1/src/Fl_Table.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 629:fltk-1.3.4-1/src/Fl_Table.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_Table.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_Table.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632:fltk-1.3.4-1/src/Fl_Table.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 633:fltk-1.3.4-1/src/Fl_Table.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 634:fltk-1.3.4-1/src/Fl_Table.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635:fltk-1.3.4-1/src/Fl_Table.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 636:fltk-1.3.4-1/src/Fl_Table.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_Table.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 638:fltk-1.3.4-1/src/Fl_Table.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 639:fltk-1.3.4-1/src/Fl_Table.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 640:fltk-1.3.4-1/src/Fl_Table.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 641:fltk-1.3.4-1/src/Fl_Table.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 642:fltk-1.3.4-1/src/Fl_Table.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 643:fltk-1.3.4-1/src/Fl_Table.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 644:fltk-1.3.4-1/src/Fl_Table.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 645:fltk-1.3.4-1/src/Fl_Table.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 646:fltk-1.3.4-1/src/Fl_Table.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 647:fltk-1.3.4-1/src/Fl_Table.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 257              		.loc 4 647 0
 258              		.cfi_startproc
 259              	.LVL20:
 260 0000 55       		pushq	%rbp
 261              		.cfi_def_cfa_offset 16
 262              		.cfi_offset 6, -16
 263 0001 53       		pushq	%rbx
 264              		.cfi_def_cfa_offset 24
 265              		.cfi_offset 3, -24
 266 0002 89F3     		movl	%esi, %ebx
 267 0004 4889FD   		movq	%rdi, %rbp
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 649:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 268              		.loc 4 649 0
 269 0007 BAFF0000 		movl	$255, %edx
 269      00
 270 000c 89DF     		movl	%ebx, %edi
 271              	.LVL21:
 647:fltk-1.3.4-1/src/Fl_Table.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 272              		.loc 4 647 0
 273 000e 4883EC08 		subq	$8, %rsp
 274              		.cfi_def_cfa_offset 32
 275              		.loc 4 649 0
 276 0012 BE380000 		movl	$56, %esi
 276      00
 277              	.LVL22:
 278 0017 E8000000 		call	_Z9fl_cursor9Fl_Cursorjj
 278      00
 279              	.LVL23:
 650:fltk-1.3.4-1/src/Fl_Table.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 280              		.loc 4 650 0
 281 001c 899D0801 		movl	%ebx, 264(%rbp)
 281      0000
 651:fltk-1.3.4-1/src/Fl_Table.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 652:fltk-1.3.4-1/src/Fl_Table.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 282              		.loc 4 652 0
 283 0022 4883C408 		addq	$8, %rsp
 284              		.cfi_def_cfa_offset 24
 285 0026 5B       		popq	%rbx
 286              		.cfi_def_cfa_offset 16
 287              	.LVL24:
 288 0027 5D       		popq	%rbp
 289              		.cfi_def_cfa_offset 8
 290              	.LVL25:
 291 0028 C3       		ret
 292              		.cfi_endproc
 293              	.LFE643:
 295              		.section	.text.unlikely._ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 296              	.LCOLDE7:
 297              		.section	.text._ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 298              	.LHOTE7:
 299              		.section	.text.unlikely._ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37,"ax",@progbits
 300              		.align 2
 301              	.LCOLDB8:
 302              		.section	.text._ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37,"ax",@progbits
 303              	.LHOTB8:
 304              		.align 2
 305              		.p2align 4,,15
 307              	_ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37:
 308              	.LFB641:
 404:fltk-1.3.4-1/src/Fl_Table.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 309              		.loc 4 404 0
 310              		.cfi_startproc
 311              	.LVL26:
 312 0000 53       		pushq	%rbx
 313              		.cfi_def_cfa_offset 16
 314              		.cfi_offset 3, -16
 406:fltk-1.3.4-1/src/Fl_Table.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 315              		.loc 4 406 0
 316 0001 4889FE   		movq	%rdi, %rsi
 404:fltk-1.3.4-1/src/Fl_Table.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 317              		.loc 4 404 0
 318 0004 4889FB   		movq	%rdi, %rbx
 406:fltk-1.3.4-1/src/Fl_Table.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 319              		.loc 4 406 0
 320 0007 BF000000 		movl	$_ZN8Fl_Table14_auto_drag_cb2EPv, %edi
 320      00
 321              	.LVL27:
 322 000c E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 322      00
 323              	.LVL28:
 407:fltk-1.3.4-1/src/Fl_Table.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 324              		.loc 4 407 0
 325 0011 C783DC00 		movl	$0, 220(%rbx)
 325      00000000 
 325      0000
 408:fltk-1.3.4-1/src/Fl_Table.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 326              		.loc 4 408 0
 327 001b 5B       		popq	%rbx
 328              		.cfi_def_cfa_offset 8
 329              	.LVL29:
 330 001c C3       		ret
 331              		.cfi_endproc
 332              	.LFE641:
 334              		.section	.text.unlikely._ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37
 335              	.LCOLDE8:
 336              		.section	.text._ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37
 337              	.LHOTE8:
 338              		.section	.text.unlikely._ZN8Fl_Table19row_scroll_positionEi,"ax",@progbits
 339              		.align 2
 340              	.LCOLDB9:
 341              		.section	.text._ZN8Fl_Table19row_scroll_positionEi,"ax",@progbits
 342              	.LHOTB9:
 343              		.align 2
 344              		.p2align 4,,15
 345              		.globl	_ZN8Fl_Table19row_scroll_positionEi
 347              	_ZN8Fl_Table19row_scroll_positionEi:
 348              	.LFB570:
  61:fltk-1.3.4-1/src/Fl_Table.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 349              		.loc 4 61 0
 350              		.cfi_startproc
 351              	.LVL30:
  67:fltk-1.3.4-1/src/Fl_Table.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 352              		.loc 4 67 0
 353 0000 48638754 		movslq	340(%rdi), %rax
 353      010000
 354 0007 83F8FF   		cmpl	$-1, %eax
 355 000a 744C     		je	.L30
  67:fltk-1.3.4-1/src/Fl_Table.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 356              		.loc 4 67 0 is_stmt 0 discriminator 1
 357 000c 8B973401 		movl	308(%rdi), %edx
 357      0000
 358 0012 39F2     		cmpl	%esi, %edx
 359 0014 7F42     		jg	.L30
 360              	.L25:
 361              	.LVL31:
 362              	.LBB887:
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 363              		.loc 4 71 0 is_stmt 1 discriminator 3
 364 0016 39F2     		cmpl	%esi, %edx
 365 0018 7D36     		jge	.L26
 366 001a 4863CA   		movslq	%edx, %rcx
 367 001d 48C1E102 		salq	$2, %rcx
 368              		.p2align 4,,10
 369 0021 0F1F8000 		.p2align 3
 369      000000
 370              	.L28:
 371              	.LVL32:
 372              	.LBB888:
 373              	.LBB889:
 494:fltk-1.3.4-1/FL/Fl_Table.H ****   
 495:fltk-1.3.4-1/FL/Fl_Table.H ****   // \todo: add topline(), middleline(), bottomline()
 496:fltk-1.3.4-1/FL/Fl_Table.H ****   
 497:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 498:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the kind of box drawn around the data table,
 499:fltk-1.3.4-1/FL/Fl_Table.H ****    the default being FL_NO_BOX. Changing this value will cause the table
 500:fltk-1.3.4-1/FL/Fl_Table.H ****    to redraw.
 501:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 502:fltk-1.3.4-1/FL/Fl_Table.H ****   inline void table_box(Fl_Boxtype val) {
 503:fltk-1.3.4-1/FL/Fl_Table.H ****     table->box(val);
 504:fltk-1.3.4-1/FL/Fl_Table.H ****     table_resized();
 505:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 506:fltk-1.3.4-1/FL/Fl_Table.H ****   
 507:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 508:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current box type used for the data table.
 509:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 510:fltk-1.3.4-1/FL/Fl_Table.H ****   inline Fl_Boxtype table_box( void ) {
 511:fltk-1.3.4-1/FL/Fl_Table.H ****     return(table->box());
 512:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 513:fltk-1.3.4-1/FL/Fl_Table.H ****   
 514:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 515:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the number of rows in the table, and the table is redrawn.
 516:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 517:fltk-1.3.4-1/FL/Fl_Table.H ****   virtual void rows(int val);			// set/get number of rows
 518:fltk-1.3.4-1/FL/Fl_Table.H ****   
 519:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 520:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the number of rows in the table.
 521:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 522:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int rows() {
 523:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_rows);
 524:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 525:fltk-1.3.4-1/FL/Fl_Table.H ****   
 526:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 527:fltk-1.3.4-1/FL/Fl_Table.H ****    Set the number of columns in the table and redraw.
 528:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 529:fltk-1.3.4-1/FL/Fl_Table.H ****   virtual void cols(int val);			// set/get number of columns
 530:fltk-1.3.4-1/FL/Fl_Table.H ****   
 531:fltk-1.3.4-1/FL/Fl_Table.H ****   /** 
 532:fltk-1.3.4-1/FL/Fl_Table.H ****    Get the number of columns in the table.
 533:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 534:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int cols() {
 535:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_cols);
 536:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 537:fltk-1.3.4-1/FL/Fl_Table.H ****   
 538:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 539:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the range of row and column numbers for all visible 
 540:fltk-1.3.4-1/FL/Fl_Table.H ****    and partially visible cells in the table.
 541:fltk-1.3.4-1/FL/Fl_Table.H ****    
 542:fltk-1.3.4-1/FL/Fl_Table.H ****    These values can be used e.g. by your draw_cell() routine during
 543:fltk-1.3.4-1/FL/Fl_Table.H ****    CONTEXT_STARTPAGE to figure out what cells are about to be redrawn
 544:fltk-1.3.4-1/FL/Fl_Table.H ****    for the purposes of locking the data from a database before it's drawn.
 545:fltk-1.3.4-1/FL/Fl_Table.H ****    
 546:fltk-1.3.4-1/FL/Fl_Table.H ****    \code
 547:fltk-1.3.4-1/FL/Fl_Table.H ****           leftcol             rightcol
 548:fltk-1.3.4-1/FL/Fl_Table.H ****              :                   :
 549:fltk-1.3.4-1/FL/Fl_Table.H ****    toprow .. .-------------------.
 550:fltk-1.3.4-1/FL/Fl_Table.H ****              |                   |
 551:fltk-1.3.4-1/FL/Fl_Table.H ****              |  V I S I B L E    |
 552:fltk-1.3.4-1/FL/Fl_Table.H ****              |                   |
 553:fltk-1.3.4-1/FL/Fl_Table.H ****              |    T A B L E      |
 554:fltk-1.3.4-1/FL/Fl_Table.H ****              |                   |
 555:fltk-1.3.4-1/FL/Fl_Table.H ****    botrow .. '-------------------`
 556:fltk-1.3.4-1/FL/Fl_Table.H ****    \endcode
 557:fltk-1.3.4-1/FL/Fl_Table.H ****    
 558:fltk-1.3.4-1/FL/Fl_Table.H ****    e.g. in a table where the visible rows are 5-20, and the
 559:fltk-1.3.4-1/FL/Fl_Table.H ****    visible columns are 100-120, then those variables would be:
 560:fltk-1.3.4-1/FL/Fl_Table.H ****    
 561:fltk-1.3.4-1/FL/Fl_Table.H ****    - toprow = 5
 562:fltk-1.3.4-1/FL/Fl_Table.H ****    - botrow = 20
 563:fltk-1.3.4-1/FL/Fl_Table.H ****    - leftcol = 100
 564:fltk-1.3.4-1/FL/Fl_Table.H ****    - rightcol = 120
 565:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 566:fltk-1.3.4-1/FL/Fl_Table.H ****   inline void visible_cells(int& r1, int& r2, int& c1, int& c2) {
 567:fltk-1.3.4-1/FL/Fl_Table.H ****     r1 = toprow;
 568:fltk-1.3.4-1/FL/Fl_Table.H ****     r2 = botrow;
 569:fltk-1.3.4-1/FL/Fl_Table.H ****     c1 = leftcol;
 570:fltk-1.3.4-1/FL/Fl_Table.H ****     c2 = rightcol;
 571:fltk-1.3.4-1/FL/Fl_Table.H ****   } 
 572:fltk-1.3.4-1/FL/Fl_Table.H ****   
 573:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 574:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns 1 if someone is interactively resizing a row or column.
 575:fltk-1.3.4-1/FL/Fl_Table.H ****    You can currently call this only from within your callback().
 576:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 577:fltk-1.3.4-1/FL/Fl_Table.H ****   int is_interactive_resize() {
 578:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_resizing_row != -1 || _resizing_col != -1);
 579:fltk-1.3.4-1/FL/Fl_Table.H ****   } 
 580:fltk-1.3.4-1/FL/Fl_Table.H ****   
 581:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 582:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns if row resizing by the user is allowed.
 583:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 584:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int row_resize() {
 585:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_row_resize);
 586:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 587:fltk-1.3.4-1/FL/Fl_Table.H ****   
 588:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 589:fltk-1.3.4-1/FL/Fl_Table.H ****    Allows/disallows row resizing by the user.
 590:fltk-1.3.4-1/FL/Fl_Table.H ****    1=allow interactive resizing, 0=disallow interactive resizing.
 591:fltk-1.3.4-1/FL/Fl_Table.H ****    Since interactive resizing is done via the row headers,
 592:fltk-1.3.4-1/FL/Fl_Table.H ****    row_header() must also be enabled to allow resizing.
 593:fltk-1.3.4-1/FL/Fl_Table.H ****    */   
 594:fltk-1.3.4-1/FL/Fl_Table.H ****   void row_resize(int flag) {			// enable row resizing
 595:fltk-1.3.4-1/FL/Fl_Table.H ****     _row_resize = flag;
 596:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 597:fltk-1.3.4-1/FL/Fl_Table.H ****   
 598:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 599:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns if column resizing by the user is allowed.
 600:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 601:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int col_resize() {
 602:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_col_resize);
 603:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 604:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 605:fltk-1.3.4-1/FL/Fl_Table.H ****    Allows/disallows column resizing by the user.
 606:fltk-1.3.4-1/FL/Fl_Table.H ****    1=allow interactive resizing, 0=disallow interactive resizing.
 607:fltk-1.3.4-1/FL/Fl_Table.H ****    Since interactive resizing is done via the column headers,
 608:fltk-1.3.4-1/FL/Fl_Table.H ****    \p col_header() must also be enabled to allow resizing.
 609:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 610:fltk-1.3.4-1/FL/Fl_Table.H ****   void col_resize(int flag) {			// enable col resizing
 611:fltk-1.3.4-1/FL/Fl_Table.H ****     _col_resize = flag;
 612:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 613:fltk-1.3.4-1/FL/Fl_Table.H ****   
 614:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 615:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current column minimum resize value.
 616:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 617:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int col_resize_min() {			// column minimum resizing width
 618:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_col_resize_min);
 619:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 620:fltk-1.3.4-1/FL/Fl_Table.H ****   
 621:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 622:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the current column minimum resize value.
 623:fltk-1.3.4-1/FL/Fl_Table.H ****    This is used to prevent the user from interactively resizing
 624:fltk-1.3.4-1/FL/Fl_Table.H ****    any column to be smaller than 'pixels'. Must be a value >=1.
 625:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 626:fltk-1.3.4-1/FL/Fl_Table.H ****   void col_resize_min(int val) {
 627:fltk-1.3.4-1/FL/Fl_Table.H ****     _col_resize_min = ( val < 1 ) ? 1 : val;
 628:fltk-1.3.4-1/FL/Fl_Table.H ****   } 
 629:fltk-1.3.4-1/FL/Fl_Table.H ****   
 630:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 631:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current row minimum resize value.
 632:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 633:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int row_resize_min() {			// column minimum resizing width
 634:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_row_resize_min);
 635:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 636:fltk-1.3.4-1/FL/Fl_Table.H ****   
 637:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 638:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the current row minimum resize value.
 639:fltk-1.3.4-1/FL/Fl_Table.H ****    This is used to prevent the user from interactively resizing
 640:fltk-1.3.4-1/FL/Fl_Table.H ****    any row to be smaller than 'pixels'. Must be a value >=1.
 641:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 642:fltk-1.3.4-1/FL/Fl_Table.H ****   void row_resize_min(int val) {
 643:fltk-1.3.4-1/FL/Fl_Table.H ****     _row_resize_min = ( val < 1 ) ? 1 : val;
 644:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 645:fltk-1.3.4-1/FL/Fl_Table.H ****   
 646:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 647:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns if row headers are enabled or not.
 648:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 649:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int row_header() {			// set/get row header enable flag
 650:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_row_header);
 651:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 652:fltk-1.3.4-1/FL/Fl_Table.H ****   
 653:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 654:fltk-1.3.4-1/FL/Fl_Table.H ****    Enables/disables showing the row headers. 1=enabled, 0=disabled.
 655:fltk-1.3.4-1/FL/Fl_Table.H ****    If changed, the table is redrawn.
 656:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 657:fltk-1.3.4-1/FL/Fl_Table.H ****   void row_header(int flag) {
 658:fltk-1.3.4-1/FL/Fl_Table.H ****     _row_header = flag;
 659:fltk-1.3.4-1/FL/Fl_Table.H ****     table_resized();
 660:fltk-1.3.4-1/FL/Fl_Table.H ****     redraw();
 661:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 662:fltk-1.3.4-1/FL/Fl_Table.H ****   
 663:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 664:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns if column headers are enabled or not.
 665:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 666:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int col_header() {			// set/get col header enable flag
 667:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_col_header);
 668:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 669:fltk-1.3.4-1/FL/Fl_Table.H ****   
 670:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 671:fltk-1.3.4-1/FL/Fl_Table.H ****    Enable or disable column headers.
 672:fltk-1.3.4-1/FL/Fl_Table.H ****    If changed, the table is redrawn.
 673:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 674:fltk-1.3.4-1/FL/Fl_Table.H ****   void col_header(int flag) {
 675:fltk-1.3.4-1/FL/Fl_Table.H ****     _col_header = flag;
 676:fltk-1.3.4-1/FL/Fl_Table.H ****     table_resized();
 677:fltk-1.3.4-1/FL/Fl_Table.H ****     redraw();
 678:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 679:fltk-1.3.4-1/FL/Fl_Table.H ****   
 680:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 681:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the height in pixels for column headers and redraws the table.
 682:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 683:fltk-1.3.4-1/FL/Fl_Table.H ****   inline void col_header_height(int height) {	// set/get col header height
 684:fltk-1.3.4-1/FL/Fl_Table.H ****     _col_header_h = height;
 685:fltk-1.3.4-1/FL/Fl_Table.H ****     table_resized();
 686:fltk-1.3.4-1/FL/Fl_Table.H ****     redraw();
 687:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 688:fltk-1.3.4-1/FL/Fl_Table.H ****   
 689:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 690:fltk-1.3.4-1/FL/Fl_Table.H ****    Gets the column header height.
 691:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 692:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int col_header_height() {
 693:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_col_header_h);
 694:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 695:fltk-1.3.4-1/FL/Fl_Table.H ****   
 696:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 697:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the row header width to n and causes the screen to redraw.
 698:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 699:fltk-1.3.4-1/FL/Fl_Table.H ****   inline void row_header_width(int width) {	// set/get row header width
 700:fltk-1.3.4-1/FL/Fl_Table.H ****     _row_header_w = width;
 701:fltk-1.3.4-1/FL/Fl_Table.H ****     table_resized();
 702:fltk-1.3.4-1/FL/Fl_Table.H ****     redraw();
 703:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 704:fltk-1.3.4-1/FL/Fl_Table.H ****   
 705:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 706:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current row header width (in pixels).
 707:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 708:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int row_header_width() {
 709:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_row_header_w);
 710:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 711:fltk-1.3.4-1/FL/Fl_Table.H ****   
 712:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 713:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the row header color and causes the screen to redraw.
 714:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 715:fltk-1.3.4-1/FL/Fl_Table.H ****   inline void row_header_color(Fl_Color val) {	// set/get row header color
 716:fltk-1.3.4-1/FL/Fl_Table.H ****     _row_header_color = val;
 717:fltk-1.3.4-1/FL/Fl_Table.H ****     redraw();
 718:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 719:fltk-1.3.4-1/FL/Fl_Table.H ****   
 720:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 721:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current row header color.
 722:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 723:fltk-1.3.4-1/FL/Fl_Table.H ****   inline Fl_Color row_header_color() {
 724:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_row_header_color);
 725:fltk-1.3.4-1/FL/Fl_Table.H ****   } 
 726:fltk-1.3.4-1/FL/Fl_Table.H ****   
 727:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 728:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the color for column headers and redraws the table.
 729:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 730:fltk-1.3.4-1/FL/Fl_Table.H ****   inline void col_header_color(Fl_Color val) {	// set/get col header color
 731:fltk-1.3.4-1/FL/Fl_Table.H ****     _col_header_color = val;
 732:fltk-1.3.4-1/FL/Fl_Table.H ****     redraw();
 733:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 734:fltk-1.3.4-1/FL/Fl_Table.H ****   
 735:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 736:fltk-1.3.4-1/FL/Fl_Table.H ****    Gets the color for column headers.
 737:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 738:fltk-1.3.4-1/FL/Fl_Table.H ****   inline Fl_Color col_header_color() {
 739:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_col_header_color);
 740:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 741:fltk-1.3.4-1/FL/Fl_Table.H ****   
 742:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 743:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the height of the specified row in pixels,
 744:fltk-1.3.4-1/FL/Fl_Table.H ****    and the table is redrawn.
 745:fltk-1.3.4-1/FL/Fl_Table.H ****    callback() will be invoked with CONTEXT_RC_RESIZE
 746:fltk-1.3.4-1/FL/Fl_Table.H ****    if the row's height was actually changed, and when() is FL_WHEN_CHANGED.
 747:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 748:fltk-1.3.4-1/FL/Fl_Table.H ****   void row_height(int row, int height);		// set/get row height
 749:fltk-1.3.4-1/FL/Fl_Table.H ****   
 750:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 751:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current height of the specified row as a value in pixels.
 752:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 753:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int row_height(int row) {
 754:fltk-1.3.4-1/FL/Fl_Table.H ****     return((row<0 || row>=(int)_rowheights.size()) ? 0 : _rowheights[row]);
 374              		.loc 3 754 0
 375 0028 4531C0   		xorl	%r8d, %r8d
 376 002b 85D2     		testl	%edx, %edx
 377 002d 7813     		js	.L27
 378              	.LVL33:
 379 002f 39970001 		cmpl	%edx, 256(%rdi)
 379      0000
 380 0035 7E0B     		jle	.L27
 381              	.LVL34:
 382 0037 4C8B87F8 		movq	248(%rdi), %r8
 382      000000
 383 003e 4D630408 		movslq	(%r8,%rcx), %r8
 384              	.LVL35:
 385              	.L27:
 386              	.LBE889:
 387              	.LBE888:
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 388              		.loc 4 71 0
 389 0042 83C201   		addl	$1, %edx
 390              	.LVL36:
  72:fltk-1.3.4-1/src/Fl_Table.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391              		.loc 4 72 0
 392 0045 4C01C0   		addq	%r8, %rax
 393              	.LVL37:
 394 0048 4883C104 		addq	$4, %rcx
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 395              		.loc 4 71 0
 396 004c 39D6     		cmpl	%edx, %esi
 397 004e 75D8     		jne	.L28
 398              	.L26:
 399              	.LBE887:
  75:fltk-1.3.4-1/src/Fl_Table.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 400              		.loc 4 75 0
 401 0050 F3C3     		rep ret
 402              	.LVL38:
 403              		.p2align 4,,10
 404 0052 660F1F44 		.p2align 3
 404      0000
 405              	.L30:
  62:fltk-1.3.4-1/src/Fl_Table.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 406              		.loc 4 62 0
 407 0058 31D2     		xorl	%edx, %edx
  63:fltk-1.3.4-1/src/Fl_Table.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 408              		.loc 4 63 0
 409 005a 31C0     		xorl	%eax, %eax
 410 005c EBB8     		jmp	.L25
 411              		.cfi_endproc
 412              	.LFE570:
 414              		.section	.text.unlikely._ZN8Fl_Table19row_scroll_positionEi
 415              	.LCOLDE9:
 416              		.section	.text._ZN8Fl_Table19row_scroll_positionEi
 417              	.LHOTE9:
 418              		.section	.text.unlikely._ZN8Fl_Table19col_scroll_positionEi,"ax",@progbits
 419              		.align 2
 420              	.LCOLDB10:
 421              		.section	.text._ZN8Fl_Table19col_scroll_positionEi,"ax",@progbits
 422              	.LHOTB10:
 423              		.align 2
 424              		.p2align 4,,15
 425              		.globl	_ZN8Fl_Table19col_scroll_positionEi
 427              	_ZN8Fl_Table19col_scroll_positionEi:
 428              	.LFB571:
  78:fltk-1.3.4-1/src/Fl_Table.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 429              		.loc 4 78 0
 430              		.cfi_startproc
 431              	.LVL39:
  84:fltk-1.3.4-1/src/Fl_Table.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 432              		.loc 4 84 0
 433 0000 48638758 		movslq	344(%rdi), %rax
 433      010000
 434 0007 83F8FF   		cmpl	$-1, %eax
 435 000a 744C     		je	.L40
  84:fltk-1.3.4-1/src/Fl_Table.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 436              		.loc 4 84 0 is_stmt 0 discriminator 1
 437 000c 8B973C01 		movl	316(%rdi), %edx
 437      0000
 438 0012 39F2     		cmpl	%esi, %edx
 439 0014 7F42     		jg	.L40
 440              	.L35:
 441              	.LVL40:
 442              	.LBB890:
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 443              		.loc 4 88 0 is_stmt 1 discriminator 3
 444 0016 39F2     		cmpl	%esi, %edx
 445 0018 7D36     		jge	.L36
 446 001a 4863CA   		movslq	%edx, %rcx
 447 001d 48C1E102 		salq	$2, %rcx
 448              		.p2align 4,,10
 449 0021 0F1F8000 		.p2align 3
 449      000000
 450              	.L38:
 451              	.LVL41:
 452              	.LBB891:
 453              	.LBB892:
 755:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 756:fltk-1.3.4-1/FL/Fl_Table.H ****   
 757:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 758:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the width of the specified column in pixels, and the table is redrawn.
 759:fltk-1.3.4-1/FL/Fl_Table.H ****    callback() will be invoked with CONTEXT_RC_RESIZE
 760:fltk-1.3.4-1/FL/Fl_Table.H ****    if the column's width was actually changed, and when() is FL_WHEN_CHANGED.
 761:fltk-1.3.4-1/FL/Fl_Table.H ****    */   
 762:fltk-1.3.4-1/FL/Fl_Table.H ****   void col_width(int col, int width);		// set/get a column's width
 763:fltk-1.3.4-1/FL/Fl_Table.H ****   
 764:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 765:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current width of the specified column in pixels.
 766:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 767:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int col_width(int col) {
 768:fltk-1.3.4-1/FL/Fl_Table.H ****     return((col<0 || col>=(int)_colwidths.size()) ? 0 : _colwidths[col]);
 454              		.loc 3 768 0
 455 0028 4531C0   		xorl	%r8d, %r8d
 456 002b 85D2     		testl	%edx, %edx
 457 002d 7813     		js	.L37
 458              	.LVL42:
 459 002f 3997F000 		cmpl	%edx, 240(%rdi)
 459      0000
 460 0035 7E0B     		jle	.L37
 461              	.LVL43:
 462 0037 4C8B87E8 		movq	232(%rdi), %r8
 462      000000
 463 003e 4D630408 		movslq	(%r8,%rcx), %r8
 464              	.LVL44:
 465              	.L37:
 466              	.LBE892:
 467              	.LBE891:
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 468              		.loc 4 88 0
 469 0042 83C201   		addl	$1, %edx
 470              	.LVL45:
  89:fltk-1.3.4-1/src/Fl_Table.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 471              		.loc 4 89 0
 472 0045 4C01C0   		addq	%r8, %rax
 473              	.LVL46:
 474 0048 4883C104 		addq	$4, %rcx
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 475              		.loc 4 88 0
 476 004c 39D6     		cmpl	%edx, %esi
 477 004e 75D8     		jne	.L38
 478              	.L36:
 479              	.LBE890:
  92:fltk-1.3.4-1/src/Fl_Table.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 480              		.loc 4 92 0
 481 0050 F3C3     		rep ret
 482              	.LVL47:
 483              		.p2align 4,,10
 484 0052 660F1F44 		.p2align 3
 484      0000
 485              	.L40:
  79:fltk-1.3.4-1/src/Fl_Table.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 486              		.loc 4 79 0
 487 0058 31D2     		xorl	%edx, %edx
  80:fltk-1.3.4-1/src/Fl_Table.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 488              		.loc 4 80 0
 489 005a 31C0     		xorl	%eax, %eax
 490 005c EBB8     		jmp	.L35
 491              		.cfi_endproc
 492              	.LFE571:
 494              		.section	.text.unlikely._ZN8Fl_Table19col_scroll_positionEi
 495              	.LCOLDE10:
 496              		.section	.text._ZN8Fl_Table19col_scroll_positionEi
 497              	.LHOTE10:
 498              		.section	.text.unlikely._ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_,"ax",@progbits
 499              		.align 2
 500              	.LCOLDB11:
 501              		.section	.text._ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_,"ax",@progbits
 502              	.LHOTB11:
 503              		.align 2
 504              		.p2align 4,,15
 505              		.globl	_ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_
 507              	_ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_:
 508              	.LFB581:
 219:fltk-1.3.4-1/src/Fl_Table.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 509              		.loc 4 219 0
 510              		.cfi_startproc
 511              	.LVL48:
 221:fltk-1.3.4-1/src/Fl_Table.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 512              		.loc 4 221 0
 513 0000 448B02   		movl	(%rdx), %r8d
 220:fltk-1.3.4-1/src/Fl_Table.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 514              		.loc 4 220 0
 515 0003 31C0     		xorl	%eax, %eax
 221:fltk-1.3.4-1/src/Fl_Table.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 516              		.loc 4 221 0
 517 0005 4585C0   		testl	%r8d, %r8d
 518 0008 0F888200 		js	.L75
 518      0000
 519              	.LVL49:
 520              	.L45:
 222:fltk-1.3.4-1/src/Fl_Table.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 521              		.loc 4 222 0
 522 000e 448B01   		movl	(%rcx), %r8d
 523 0011 4585C0   		testl	%r8d, %r8d
 524 0014 7862     		js	.L76
 223:fltk-1.3.4-1/src/Fl_Table.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 525              		.loc 4 223 0
 526 0016 83FE04   		cmpl	$4, %esi
 527 0019 7445     		je	.L50
 528 001b 83FE08   		cmpl	$8, %esi
 529 001e 7520     		jne	.L47
 530              	.LVL50:
 531              	.L78:
 226:fltk-1.3.4-1/src/Fl_Table.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 532              		.loc 4 226 0
 533 0020 8B32     		movl	(%rdx), %esi
 534              	.LVL51:
 535 0022 8B8FA000 		movl	160(%rdi), %ecx
 535      0000
 536              	.LVL52:
 537 0028 39CE     		cmpl	%ecx, %esi
 538 002a 7C32     		jl	.L48
 539 002c 85F6     		testl	%esi, %esi
 540 002e 742E     		je	.L48
 226:fltk-1.3.4-1/src/Fl_Table.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 541              		.loc 4 226 0 is_stmt 0 discriminator 2
 542 0030 83E901   		subl	$1, %ecx
 543 0033 B8010000 		movl	$1, %eax
 543      00
 544 0038 890A     		movl	%ecx, (%rdx)
 545              	.LVL53:
 546 003a C3       		ret
 547              	.LVL54:
 548 003b 0F1F4400 		.p2align 4,,10
 548      00
 549              		.p2align 3
 550              	.L47:
 237:fltk-1.3.4-1/src/Fl_Table.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 551              		.loc 4 237 0 is_stmt 1
 552 0040 8BB7A000 		movl	160(%rdi), %esi
 552      0000
 553              	.LVL55:
 554 0046 3932     		cmpl	%esi, (%rdx)
 555 0048 7D56     		jge	.L77
 556              	.L51:
 557              	.LVL56:
 238:fltk-1.3.4-1/src/Fl_Table.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 558              		.loc 4 238 0
 559 004a 8B97A400 		movl	164(%rdi), %edx
 559      0000
 560              	.LVL57:
 561 0050 3911     		cmpl	%edx, (%rcx)
 562 0052 7C0A     		jl	.L48
 563              	.L73:
 238:fltk-1.3.4-1/src/Fl_Table.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 564              		.loc 4 238 0 is_stmt 0 discriminator 1
 565 0054 83EA01   		subl	$1, %edx
 566 0057 B8010000 		movl	$1, %eax
 566      00
 567              	.LVL58:
 568 005c 8911     		movl	%edx, (%rcx)
 569              	.LVL59:
 570              	.L48:
 242:fltk-1.3.4-1/src/Fl_Table.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 571              		.loc 4 242 0 is_stmt 1
 572 005e F3C3     		rep ret
 573              	.LVL60:
 574              		.p2align 4,,10
 575              		.p2align 3
 576              	.L50:
 231:fltk-1.3.4-1/src/Fl_Table.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 577              		.loc 4 231 0
 578 0060 8B97A400 		movl	164(%rdi), %edx
 578      0000
 579              	.LVL61:
 580 0066 4139D0   		cmpl	%edx, %r8d
 581 0069 7CF3     		jl	.L48
 582 006b 4585C0   		testl	%r8d, %r8d
 583 006e 75E4     		jne	.L73
 242:fltk-1.3.4-1/src/Fl_Table.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 584              		.loc 4 242 0
 585 0070 F3C3     		rep ret
 586              	.LVL62:
 587              		.p2align 4,,10
 588 0072 660F1F44 		.p2align 3
 588      0000
 589              	.L76:
 223:fltk-1.3.4-1/src/Fl_Table.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 590              		.loc 4 223 0 discriminator 1
 591 0078 83FE04   		cmpl	$4, %esi
 222:fltk-1.3.4-1/src/Fl_Table.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 592              		.loc 4 222 0 discriminator 1
 593 007b C7010000 		movl	$0, (%rcx)
 593      0000
 594              	.LVL63:
 595 0081 B8010000 		movl	$1, %eax
 595      00
 223:fltk-1.3.4-1/src/Fl_Table.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 596              		.loc 4 223 0 discriminator 1
 597 0086 74D6     		je	.L48
 223:fltk-1.3.4-1/src/Fl_Table.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 598              		.loc 4 223 0 is_stmt 0
 599 0088 83FE08   		cmpl	$8, %esi
 600 008b 75B3     		jne	.L47
 601 008d EB91     		jmp	.L78
 602              	.LVL64:
 603 008f 90       		.p2align 4,,10
 604              		.p2align 3
 605              	.L75:
 221:fltk-1.3.4-1/src/Fl_Table.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 606              		.loc 4 221 0 is_stmt 1 discriminator 1
 607 0090 C7020000 		movl	$0, (%rdx)
 607      0000
 608              	.LVL65:
 609 0096 B8010000 		movl	$1, %eax
 609      00
 610 009b E96EFFFF 		jmp	.L45
 610      FF
 611              	.LVL66:
 612              		.p2align 4,,10
 613              		.p2align 3
 614              	.L77:
 237:fltk-1.3.4-1/src/Fl_Table.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 615              		.loc 4 237 0 discriminator 1
 616 00a0 83EE01   		subl	$1, %esi
 617 00a3 B8010000 		movl	$1, %eax
 617      00
 618 00a8 8932     		movl	%esi, (%rdx)
 619              	.LVL67:
 620 00aa EB9E     		jmp	.L51
 621              		.cfi_endproc
 622              	.LFE581:
 624              		.section	.text.unlikely._ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_
 625              	.LCOLDE11:
 626              		.section	.text._ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_
 627              	.LHOTE11:
 628              		.section	.rodata.str1.8,"aMS",@progbits,1
 629              		.align 8
 630              	.LC12:
 631 0000 466C5F54 		.string	"Fl_Table::get_bounds(): context %d unimplemented\n"
 631      61626C65 
 631      3A3A6765 
 631      745F626F 
 631      756E6473 
 632              		.section	.text.unlikely._ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_,"ax",@progbits
 633              		.align 2
 634              	.LCOLDB13:
 635              		.section	.text._ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_,"ax",@progbits
 636              	.LHOTB13:
 637              		.align 2
 638              		.p2align 4,,15
 639              		.globl	_ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_
 641              	_ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_:
 642              	.LFB582:
 245:fltk-1.3.4-1/src/Fl_Table.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 643              		.loc 4 245 0
 644              		.cfi_startproc
 645              	.LVL68:
 246:fltk-1.3.4-1/src/Fl_Table.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 646              		.loc 4 246 0
 647 0000 83FE08   		cmpl	$8, %esi
 648 0003 747B     		je	.L81
 649 0005 83FE20   		cmpl	$32, %esi
 650 0008 744E     		je	.L82
 651 000a 83FE04   		cmpl	$4, %esi
 652 000d 7421     		je	.L87
 653              	.LVL69:
 654              	.LBB903:
 655              	.LBB904:
 656              		.file 5 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
   1:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** /* Checking macros for stdio functions.
   2:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    Copyright (C) 2004-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifndef _STDIO_H
  20:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # error "Never include <bits/stdio2.h> directly; use <stdio.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
  24:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...) __THROW;
  25:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
  26:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format,
  27:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   _G_va_list __ap) __THROW;
  28:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  29:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifdef __va_arg_pack
  30:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  31:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (sprintf (char *__restrict __s, const char *__restrict __fmt, ...))
  32:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  33:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___sprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  __bos (__s), __fmt, __va_arg_pack ());
  35:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  36:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #elif !defined __cplusplus
  37:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # define sprintf(str, ...) \
  38:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___sprintf_chk (str, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  39:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   __VA_ARGS__)
  40:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  41:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  42:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  43:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsprintf (char *__restrict __s, const char *__restrict __fmt,
  44:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 _G_va_list __ap))
  45:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  46:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  47:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __ap);
  48:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  49:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  50:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if defined __USE_ISOC99 || defined __USE_UNIX98
  51:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  52:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
  53:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __slen, const char *__restrict __format,
  54:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   ...) __THROW;
  55:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
  56:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    size_t __slen, const char *__restrict __format,
  57:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    _G_va_list __ap) __THROW;
  58:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  59:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  60:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  61:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (snprintf (char *__restrict __s, size_t __n,
  62:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 const char *__restrict __fmt, ...))
  63:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  64:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __va_arg_pack ());
  66:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  67:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
  68:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define snprintf(str, len, ...) \
  69:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___snprintf_chk (str, len, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  70:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    __VA_ARGS__)
  71:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
  72:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  73:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  74:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsnprintf (char *__restrict __s, size_t __n,
  75:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  const char *__restrict __fmt, _G_va_list __ap))
  76:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  77:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsnprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  78:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				    __bos (__s), __fmt, __ap);
  79:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  80:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  81:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  82:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  83:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if __USE_FORTIFY_LEVEL > 1
  84:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  85:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
  86:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...);
  87:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __printf_chk (int __flag, const char *__restrict __format, ...);
  88:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
  89:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format, _G_va_list __ap);
  90:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vprintf_chk (int __flag, const char *__restrict __format,
  91:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  _G_va_list __ap);
  92:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  94:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  95:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
  96:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt,
  98:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
 657              		.loc 5 98 0
 658 000f 488B3D00 		movq	stderr(%rip), %rdi
 658      000000
 659              	.LVL70:
 660 0016 89F1     		movl	%esi, %ecx
 661              	.LVL71:
 662 0018 BA000000 		movl	$.LC12, %edx
 662      00
 663              	.LVL72:
 664 001d BE010000 		movl	$1, %esi
 664      00
 665              	.LVL73:
 666 0022 31C0     		xorl	%eax, %eax
 667 0024 E9000000 		jmp	__fprintf_chk
 667      00
 668              	.LVL74:
 669 0029 0F1F8000 		.p2align 4,,10
 669      000000
 670              		.p2align 3
 671              	.L87:
 672              	.LBE904:
 673              	.LBE903:
 674              	.LBB905:
 675              	.LBB906:
 257:fltk-1.3.4-1/src/Fl_Table.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 676              		.loc 4 257 0
 677 0030 8B877C01 		movl	380(%rdi), %eax
 677      0000
 678 0036 8902     		movl	%eax, (%rdx)
 258:fltk-1.3.4-1/src/Fl_Table.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 679              		.loc 4 258 0
 680 0038 8B877001 		movl	368(%rdi), %eax
 680      0000
 681 003e 8901     		movl	%eax, (%rcx)
 682 0040 8B87A800 		movl	168(%rdi), %eax
 682      0000
 683              	.LVL75:
 259:fltk-1.3.4-1/src/Fl_Table.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 684              		.loc 4 259 0
 685 0046 418900   		movl	%eax, (%r8)
 260:fltk-1.3.4-1/src/Fl_Table.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 686              		.loc 4 260 0
 687 0049 8B877801 		movl	376(%rdi), %eax
 687      0000
 688 004f 418901   		movl	%eax, (%r9)
 689 0052 C3       		ret
 690              	.LVL76:
 691              		.p2align 4,,10
 692 0053 0F1F4400 		.p2align 3
 692      00
 693              	.L82:
 694              	.LBE906:
 695              	.LBE905:
 265:fltk-1.3.4-1/src/Fl_Table.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 696              		.loc 4 265 0
 697 0058 8B875C01 		movl	348(%rdi), %eax
 697      0000
 698 005e 8902     		movl	%eax, (%rdx)
 699 0060 8B876001 		movl	352(%rdi), %eax
 699      0000
 700 0066 8901     		movl	%eax, (%rcx)
 701 0068 8B876401 		movl	356(%rdi), %eax
 701      0000
 702 006e 418900   		movl	%eax, (%r8)
 703 0071 8B876801 		movl	360(%rdi), %eax
 703      0000
 704 0077 418901   		movl	%eax, (%r9)
 266:fltk-1.3.4-1/src/Fl_Table.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 705              		.loc 4 266 0
 706 007a C3       		ret
 707 007b 0F1F4400 		.p2align 4,,10
 707      00
 708              		.p2align 3
 709              	.L81:
 249:fltk-1.3.4-1/src/Fl_Table.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 710              		.loc 4 249 0
 711 0080 8B876C01 		movl	364(%rdi), %eax
 711      0000
 712 0086 8902     		movl	%eax, (%rdx)
 250:fltk-1.3.4-1/src/Fl_Table.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 713              		.loc 4 250 0
 714 0088 8B878001 		movl	384(%rdi), %eax
 714      0000
 715 008e 8901     		movl	%eax, (%rcx)
 251:fltk-1.3.4-1/src/Fl_Table.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 716              		.loc 4 251 0
 717 0090 8B877401 		movl	372(%rdi), %eax
 717      0000
 718 0096 418900   		movl	%eax, (%r8)
 719 0099 8B87AC00 		movl	172(%rdi), %eax
 719      0000
 720              	.LVL77:
 252:fltk-1.3.4-1/src/Fl_Table.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 721              		.loc 4 252 0
 722 009f 418901   		movl	%eax, (%r9)
 253:fltk-1.3.4-1/src/Fl_Table.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 723              		.loc 4 253 0
 724 00a2 C3       		ret
 725              		.cfi_endproc
 726              	.LFE582:
 728              		.section	.text.unlikely._ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_
 729              	.LCOLDE13:
 730              		.section	.text._ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_
 731              	.LHOTE13:
 732              		.section	.rodata.str1.8
 733 0032 00000000 		.align 8
 733      0000
 734              	.LC14:
 735 0038 466C5F54 		.string	"Fl_Table::find_cell: unknown context %d\n"
 735      61626C65 
 735      3A3A6669 
 735      6E645F63 
 735      656C6C3A 
 736              		.section	.text.unlikely._ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_,"ax",@progbits
 737              		.align 2
 738              	.LCOLDB15:
 739              		.section	.text._ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_,"ax",@progbits
 740              	.LHOTB15:
 741              		.align 2
 742              		.p2align 4,,15
 743              		.globl	_ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
 745              	_ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_:
 746              	.LFB584:
 361:fltk-1.3.4-1/src/Fl_Table.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 747              		.loc 4 361 0
 748              		.cfi_startproc
 749              	.LVL78:
 750 0000 4157     		pushq	%r15
 751              		.cfi_def_cfa_offset 16
 752              		.cfi_offset 15, -16
 753 0002 4156     		pushq	%r14
 754              		.cfi_def_cfa_offset 24
 755              		.cfi_offset 14, -24
 756 0004 4189F7   		movl	%esi, %r15d
 757 0007 4155     		pushq	%r13
 758              		.cfi_def_cfa_offset 32
 759              		.cfi_offset 13, -32
 760 0009 4154     		pushq	%r12
 761              		.cfi_def_cfa_offset 40
 762              		.cfi_offset 12, -40
 763 000b 4989FE   		movq	%rdi, %r14
 764 000e 55       		pushq	%rbp
 765              		.cfi_def_cfa_offset 48
 766              		.cfi_offset 6, -48
 767 000f 53       		pushq	%rbx
 768              		.cfi_def_cfa_offset 56
 769              		.cfi_offset 3, -56
 770 0010 4C89C5   		movq	%r8, %rbp
 771 0013 4883EC18 		subq	$24, %rsp
 772              		.cfi_def_cfa_offset 80
 361:fltk-1.3.4-1/src/Fl_Table.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 773              		.loc 4 361 0
 774 0017 8954240C 		movl	%edx, 12(%rsp)
 775 001b 894C2408 		movl	%ecx, 8(%rsp)
 362:fltk-1.3.4-1/src/Fl_Table.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 776              		.loc 4 362 0
 777 001f 488D5424 		leaq	12(%rsp), %rdx
 777      0C
 778              	.LVL79:
 779 0024 488D4C24 		leaq	8(%rsp), %rcx
 779      08
 780              	.LVL80:
 361:fltk-1.3.4-1/src/Fl_Table.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 781              		.loc 4 361 0
 782 0029 4C890C24 		movq	%r9, (%rsp)
 783 002d 488B5C24 		movq	80(%rsp), %rbx
 783      50
 784 0032 4C8B6424 		movq	88(%rsp), %r12
 784      58
 362:fltk-1.3.4-1/src/Fl_Table.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 785              		.loc 4 362 0
 786 0037 E8000000 		call	_ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_
 786      00
 787              	.LVL81:
 788 003c 85C0     		testl	%eax, %eax
 789 003e 0F850B02 		jne	.L126
 789      0000
 790              	.LBB907:
 791              	.LBB908:
  84:fltk-1.3.4-1/src/Fl_Table.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 792              		.loc 4 84 0
 793 0044 4963B658 		movslq	344(%r14), %rsi
 793      010000
 794              	.LBE908:
 795              	.LBE907:
 366:fltk-1.3.4-1/src/Fl_Table.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 796              		.loc 4 366 0
 797 004b 48637C24 		movslq	8(%rsp), %rdi
 797      08
 798              	.LVL82:
 799              	.LBB914:
 800              	.LBB912:
  84:fltk-1.3.4-1/src/Fl_Table.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 801              		.loc 4 84 0
 802 0050 83FEFF   		cmpl	$-1, %esi
 803 0053 0F845701 		je	.L106
 803      0000
 804 0059 418B963C 		movl	316(%r14), %edx
 804      010000
 805 0060 39D7     		cmpl	%edx, %edi
 806 0062 0F8C4801 		jl	.L106
 806      0000
 807              	.L91:
 808              	.LVL83:
 809              	.LBB909:
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 810              		.loc 4 88 0
 811 0068 39D7     		cmpl	%edx, %edi
 812 006a 7E35     		jle	.L92
 813 006c 4863CA   		movslq	%edx, %rcx
 814 006f 48C1E102 		salq	$2, %rcx
 815              		.p2align 4,,10
 816 0073 0F1F4400 		.p2align 3
 816      00
 817              	.L94:
 818              	.LVL84:
 819              	.LBB910:
 820              	.LBB911:
 821              		.loc 3 768 0
 822 0078 4531C0   		xorl	%r8d, %r8d
 823 007b 85D2     		testl	%edx, %edx
 824 007d 7814     		js	.L93
 825              	.LVL85:
 826 007f 413996F0 		cmpl	%edx, 240(%r14)
 826      000000
 827 0086 7E0B     		jle	.L93
 828              	.LVL86:
 829 0088 4D8B86E8 		movq	232(%r14), %r8
 829      000000
 830 008f 4D630408 		movslq	(%r8,%rcx), %r8
 831              	.LVL87:
 832              	.L93:
 833              	.LBE911:
 834              	.LBE910:
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 835              		.loc 4 88 0
 836 0093 83C201   		addl	$1, %edx
 837              	.LVL88:
  89:fltk-1.3.4-1/src/Fl_Table.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 838              		.loc 4 89 0
 839 0096 4C01C6   		addq	%r8, %rsi
 840              	.LVL89:
 841 0099 4883C104 		addq	$4, %rcx
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 842              		.loc 4 88 0
 843 009d 39D7     		cmpl	%edx, %edi
 844 009f 75D7     		jne	.L94
 845              	.L92:
 846              	.LVL90:
 847 00a1 498B96A0 		movq	416(%r14), %rdx
 847      010000
 848              	.LBE909:
 849              	.LBE912:
 850              	.LBE914:
 366:fltk-1.3.4-1/src/Fl_Table.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 851              		.loc 4 366 0
 852 00a8 418B8E5C 		movl	348(%r14), %ecx
 852      010000
 367:fltk-1.3.4-1/src/Fl_Table.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 853              		.loc 4 367 0
 854 00af 4C636C24 		movslq	12(%rsp), %r13
 854      0C
 855              	.LVL91:
 366:fltk-1.3.4-1/src/Fl_Table.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 856              		.loc 4 366 0
 857 00b4 F20F2C52 		cvttsd2si	120(%rdx), %edx
 857      78
 858 00b9 29D1     		subl	%edx, %ecx
 859 00bb 01CE     		addl	%ecx, %esi
 860 00bd 897500   		movl	%esi, 0(%rbp)
 861              	.LVL92:
 862              	.LBB915:
 863              	.LBB916:
  67:fltk-1.3.4-1/src/Fl_Table.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 864              		.loc 4 67 0
 865 00c0 4963B654 		movslq	340(%r14), %rsi
 865      010000
 866 00c7 83FEFF   		cmpl	$-1, %esi
 867 00ca 0F84D000 		je	.L110
 867      0000
 868 00d0 418B9634 		movl	308(%r14), %edx
 868      010000
 869 00d7 4139D5   		cmpl	%edx, %r13d
 870 00da 0F8CC000 		jl	.L110
 870      0000
 871              	.L95:
 872              	.LVL93:
 873              	.LBB917:
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 874              		.loc 4 71 0
 875 00e0 4139D5   		cmpl	%edx, %r13d
 876 00e3 7E35     		jle	.L96
 877 00e5 4863CA   		movslq	%edx, %rcx
 878 00e8 48C1E102 		salq	$2, %rcx
 879 00ec 0F1F4000 		.p2align 4,,10
 880              		.p2align 3
 881              	.L98:
 882              	.LVL94:
 883              	.LBB918:
 884              	.LBB919:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 885              		.loc 3 754 0
 886 00f0 4531C0   		xorl	%r8d, %r8d
 887 00f3 85D2     		testl	%edx, %edx
 888 00f5 7814     		js	.L97
 889              	.LVL95:
 890 00f7 41399600 		cmpl	%edx, 256(%r14)
 890      010000
 891 00fe 7E0B     		jle	.L97
 892              	.LVL96:
 893 0100 4D8B86F8 		movq	248(%r14), %r8
 893      000000
 894 0107 4D630408 		movslq	(%r8,%rcx), %r8
 895              	.LVL97:
 896              	.L97:
 897              	.LBE919:
 898              	.LBE918:
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 899              		.loc 4 71 0
 900 010b 83C201   		addl	$1, %edx
 901              	.LVL98:
  72:fltk-1.3.4-1/src/Fl_Table.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 902              		.loc 4 72 0
 903 010e 4C01C6   		addq	%r8, %rsi
 904              	.LVL99:
 905 0111 4883C104 		addq	$4, %rcx
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 906              		.loc 4 71 0
 907 0115 4139D5   		cmpl	%edx, %r13d
 908 0118 75D6     		jne	.L98
 909              	.L96:
 910              	.LVL100:
 911 011a 498B9698 		movq	408(%r14), %rdx
 911      010000
 912              	.LBE917:
 913              	.LBE916:
 914              	.LBE915:
 367:fltk-1.3.4-1/src/Fl_Table.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 915              		.loc 4 367 0
 916 0121 418B8E60 		movl	352(%r14), %ecx
 916      010000
 917 0128 F20F2C52 		cvttsd2si	120(%rdx), %edx
 917      78
 918 012d 29D1     		subl	%edx, %ecx
 919              	.LBB921:
 920              	.LBB922:
 921              		.loc 3 768 0
 922 012f 31D2     		xorl	%edx, %edx
 923              	.LBE922:
 924              	.LBE921:
 367:fltk-1.3.4-1/src/Fl_Table.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 925              		.loc 4 367 0
 926 0131 01CE     		addl	%ecx, %esi
 927 0133 488B0C24 		movq	(%rsp), %rcx
 928              	.LBB926:
 929              	.LBB923:
 930              		.loc 3 768 0
 931 0137 85FF     		testl	%edi, %edi
 932              	.LBE923:
 933              	.LBE926:
 367:fltk-1.3.4-1/src/Fl_Table.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 934              		.loc 4 367 0
 935 0139 8931     		movl	%esi, (%rcx)
 936              	.LVL101:
 937              	.LBB927:
 938              	.LBB924:
 939              		.loc 3 768 0
 940 013b 780D     		js	.L99
 941              	.LVL102:
 942 013d 413BBEF0 		cmpl	240(%r14), %edi
 942      000000
 943 0144 0F8CF600 		jl	.L127
 943      0000
 944              	.LVL103:
 945              	.L99:
 946              	.LBE924:
 947              	.LBE927:
 368:fltk-1.3.4-1/src/Fl_Table.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 948              		.loc 4 368 0
 949 014a 8913     		movl	%edx, (%rbx)
 950              	.LVL104:
 951              	.LBB928:
 952              	.LBB929:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 953              		.loc 3 754 0
 954 014c 31D2     		xorl	%edx, %edx
 955 014e 4585ED   		testl	%r13d, %r13d
 956 0151 780D     		js	.L100
 957              	.LVL105:
 958 0153 453BAE00 		cmpl	256(%r14), %r13d
 958      010000
 959 015a 0F8CA000 		jl	.L128
 959      0000
 960              	.LVL106:
 961              	.L100:
 962              	.LBE929:
 963              	.LBE928:
 371:fltk-1.3.4-1/src/Fl_Table.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 964              		.loc 4 371 0
 965 0160 4183FF08 		cmpl	$8, %r15d
 369:fltk-1.3.4-1/src/Fl_Table.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 966              		.loc 4 369 0
 967 0164 41891424 		movl	%edx, (%r12)
 371:fltk-1.3.4-1/src/Fl_Table.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 968              		.loc 4 371 0
 969 0168 0F84AB00 		je	.L102
 969      0000
 970              	.L129:
 971 016e 7750     		ja	.L103
 972 0170 4183FF04 		cmpl	$4, %r15d
 973 0174 7556     		jne	.L101
 378:fltk-1.3.4-1/src/Fl_Table.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 974              		.loc 4 378 0
 975 0176 418B967C 		movl	380(%r14), %edx
 975      010000
 976 017d 895500   		movl	%edx, 0(%rbp)
 977 0180 418B96A8 		movl	168(%r14), %edx
 977      000000
 978              	.LVL107:
 379:fltk-1.3.4-1/src/Fl_Table.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 979              		.loc 4 379 0
 980 0187 8913     		movl	%edx, (%rbx)
 981              	.LVL108:
 982              	.L90:
 394:fltk-1.3.4-1/src/Fl_Table.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 983              		.loc 4 394 0
 984 0189 4883C418 		addq	$24, %rsp
 985              		.cfi_remember_state
 986              		.cfi_def_cfa_offset 56
 987              	.LVL109:
 988 018d 5B       		popq	%rbx
 989              		.cfi_def_cfa_offset 48
 990 018e 5D       		popq	%rbp
 991              		.cfi_def_cfa_offset 40
 992              	.LVL110:
 993 018f 415C     		popq	%r12
 994              		.cfi_def_cfa_offset 32
 995 0191 415D     		popq	%r13
 996              		.cfi_def_cfa_offset 24
 997 0193 415E     		popq	%r14
 998              		.cfi_def_cfa_offset 16
 999              	.LVL111:
 1000 0195 415F     		popq	%r15
 1001              		.cfi_def_cfa_offset 8
 1002              	.LVL112:
 1003 0197 C3       		ret
 1004              	.LVL113:
 1005 0198 0F1F8400 		.p2align 4,,10
 1005      00000000 
 1006              		.p2align 3
 1007              	.L110:
 1008              		.cfi_restore_state
 1009              	.LBB932:
 1010              	.LBB920:
  62:fltk-1.3.4-1/src/Fl_Table.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 1011              		.loc 4 62 0
 1012 01a0 31D2     		xorl	%edx, %edx
  63:fltk-1.3.4-1/src/Fl_Table.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1013              		.loc 4 63 0
 1014 01a2 31F6     		xorl	%esi, %esi
 1015 01a4 E937FFFF 		jmp	.L95
 1015      FF
 1016              	.LVL114:
 1017 01a9 0F1F8000 		.p2align 4,,10
 1017      000000
 1018              		.p2align 3
 1019              	.L106:
 1020              	.LBE920:
 1021              	.LBE932:
 1022              	.LBB933:
 1023              	.LBB913:
  79:fltk-1.3.4-1/src/Fl_Table.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1024              		.loc 4 79 0
 1025 01b0 31D2     		xorl	%edx, %edx
  80:fltk-1.3.4-1/src/Fl_Table.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1026              		.loc 4 80 0
 1027 01b2 31F6     		xorl	%esi, %esi
 1028 01b4 E9AFFEFF 		jmp	.L91
 1028      FF
 1029              	.LVL115:
 1030 01b9 0F1F8000 		.p2align 4,,10
 1030      000000
 1031              		.p2align 3
 1032              	.L103:
 1033              	.LBE913:
 1034              	.LBE933:
 371:fltk-1.3.4-1/src/Fl_Table.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 1035              		.loc 4 371 0
 1036 01c0 4183FF10 		cmpl	$16, %r15d
 1037 01c4 74C3     		je	.L90
 1038 01c6 4183FF20 		cmpl	$32, %r15d
 1039 01ca 74BD     		je	.L90
 1040              	.L101:
 1041              	.LVL116:
 1042              	.LBB934:
 1043              	.LBB935:
 1044              		.loc 5 98 0
 1045 01cc 488B3D00 		movq	stderr(%rip), %rdi
 1045      000000
 1046 01d3 4489F9   		movl	%r15d, %ecx
 1047 01d6 BA000000 		movl	$.LC14, %edx
 1047      00
 1048 01db BE010000 		movl	$1, %esi
 1048      00
 1049 01e0 31C0     		xorl	%eax, %eax
 1050 01e2 E8000000 		call	__fprintf_chk
 1050      00
 1051              	.LVL117:
 1052              	.LBE935:
 1053              	.LBE934:
 394:fltk-1.3.4-1/src/Fl_Table.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 1054              		.loc 4 394 0
 1055 01e7 4883C418 		addq	$24, %rsp
 1056              		.cfi_remember_state
 1057              		.cfi_def_cfa_offset 56
 1058              	.LVL118:
 391:fltk-1.3.4-1/src/Fl_Table.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 1059              		.loc 4 391 0
 1060 01eb B8FFFFFF 		movl	$-1, %eax
 1060      FF
 394:fltk-1.3.4-1/src/Fl_Table.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 1061              		.loc 4 394 0
 1062 01f0 5B       		popq	%rbx
 1063              		.cfi_def_cfa_offset 48
 1064 01f1 5D       		popq	%rbp
 1065              		.cfi_def_cfa_offset 40
 1066              	.LVL119:
 1067 01f2 415C     		popq	%r12
 1068              		.cfi_def_cfa_offset 32
 1069 01f4 415D     		popq	%r13
 1070              		.cfi_def_cfa_offset 24
 1071 01f6 415E     		popq	%r14
 1072              		.cfi_def_cfa_offset 16
 1073              	.LVL120:
 1074 01f8 415F     		popq	%r15
 1075              		.cfi_def_cfa_offset 8
 1076              	.LVL121:
 1077 01fa C3       		ret
 1078              	.LVL122:
 1079 01fb 0F1F4400 		.p2align 4,,10
 1079      00
 1080              		.p2align 3
 1081              	.L128:
 1082              		.cfi_restore_state
 1083              	.LBB936:
 1084              	.LBB930:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 1085              		.loc 3 754 0
 1086 0200 498B96F8 		movq	248(%r14), %rdx
 1086      000000
 1087              	.LBE930:
 1088              	.LBE936:
 371:fltk-1.3.4-1/src/Fl_Table.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 1089              		.loc 4 371 0
 1090 0207 4183FF08 		cmpl	$8, %r15d
 1091              	.LBB937:
 1092              	.LBB931:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 1093              		.loc 3 754 0
 1094 020b 428B14AA 		movl	(%rdx,%r13,4), %edx
 1095              	.LVL123:
 1096              	.LBE931:
 1097              	.LBE937:
 369:fltk-1.3.4-1/src/Fl_Table.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 1098              		.loc 4 369 0
 1099 020f 41891424 		movl	%edx, (%r12)
 371:fltk-1.3.4-1/src/Fl_Table.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 1100              		.loc 4 371 0
 1101 0213 0F8555FF 		jne	.L129
 1101      FFFF
 1102              	.LVL124:
 1103              	.L102:
 373:fltk-1.3.4-1/src/Fl_Table.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 1104              		.loc 4 373 0
 1105 0219 418B9680 		movl	384(%r14), %edx
 1105      010000
 1106 0220 488B1C24 		movq	(%rsp), %rbx
 1107 0224 8913     		movl	%edx, (%rbx)
 1108 0226 418B96AC 		movl	172(%r14), %edx
 1108      000000
 1109              	.LVL125:
 374:fltk-1.3.4-1/src/Fl_Table.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1110              		.loc 4 374 0
 1111 022d 41891424 		movl	%edx, (%r12)
 394:fltk-1.3.4-1/src/Fl_Table.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 1112              		.loc 4 394 0
 1113 0231 4883C418 		addq	$24, %rsp
 1114              		.cfi_remember_state
 1115              		.cfi_def_cfa_offset 56
 1116              	.LVL126:
 1117 0235 5B       		popq	%rbx
 1118              		.cfi_def_cfa_offset 48
 1119 0236 5D       		popq	%rbp
 1120              		.cfi_def_cfa_offset 40
 1121              	.LVL127:
 1122 0237 415C     		popq	%r12
 1123              		.cfi_def_cfa_offset 32
 1124 0239 415D     		popq	%r13
 1125              		.cfi_def_cfa_offset 24
 1126 023b 415E     		popq	%r14
 1127              		.cfi_def_cfa_offset 16
 1128              	.LVL128:
 1129 023d 415F     		popq	%r15
 1130              		.cfi_def_cfa_offset 8
 1131              	.LVL129:
 1132 023f C3       		ret
 1133              	.LVL130:
 1134              		.p2align 4,,10
 1135              		.p2align 3
 1136              	.L127:
 1137              		.cfi_restore_state
 1138              	.LBB938:
 1139              	.LBB925:
 1140              		.loc 3 768 0
 1141 0240 498B96E8 		movq	232(%r14), %rdx
 1141      000000
 1142 0247 8B14BA   		movl	(%rdx,%rdi,4), %edx
 1143 024a E9FBFEFF 		jmp	.L99
 1143      FF
 1144              	.LVL131:
 1145              	.L126:
 1146              	.LBE925:
 1147              	.LBE938:
 363:fltk-1.3.4-1/src/Fl_Table.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1148              		.loc 4 363 0
 1149 024f 488B0424 		movq	(%rsp), %rax
 1150 0253 41C70424 		movl	$0, (%r12)
 1150      00000000 
 1151 025b C7030000 		movl	$0, (%rbx)
 1151      0000
 1152 0261 C7000000 		movl	$0, (%rax)
 1152      0000
 1153 0267 C7450000 		movl	$0, 0(%rbp)
 1153      000000
 364:fltk-1.3.4-1/src/Fl_Table.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 1154              		.loc 4 364 0
 1155 026e B8FFFFFF 		movl	$-1, %eax
 1155      FF
 1156 0273 E911FFFF 		jmp	.L90
 1156      FF
 1157              		.cfi_endproc
 1158              	.LFE584:
 1160              		.section	.text.unlikely._ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
 1161              	.LCOLDE15:
 1162              		.section	.text._ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
 1163              	.LHOTE15:
 1164              		.section	.text.unlikely._ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE,"ax",@progbits
 1165              		.align 2
 1166              	.LCOLDB16:
 1167              		.section	.text._ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE,"ax",@progbits
 1168              	.LHOTB16:
 1169              		.align 2
 1170              		.p2align 4,,15
 1171              		.globl	_ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE
 1173              	_ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE:
 1174              	.LFB583:
 281:fltk-1.3.4-1/src/Fl_Table.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1175              		.loc 4 281 0
 1176              		.cfi_startproc
 1177              	.LVL132:
 1178 0000 4157     		pushq	%r15
 1179              		.cfi_def_cfa_offset 16
 1180              		.cfi_offset 15, -16
 1181 0002 4156     		pushq	%r14
 1182              		.cfi_def_cfa_offset 24
 1183              		.cfi_offset 14, -24
 1184 0004 4989FF   		movq	%rdi, %r15
 1185 0007 4155     		pushq	%r13
 1186              		.cfi_def_cfa_offset 32
 1187              		.cfi_offset 13, -32
 1188 0009 4154     		pushq	%r12
 1189              		.cfi_def_cfa_offset 40
 1190              		.cfi_offset 12, -40
 1191 000b 55       		pushq	%rbp
 1192              		.cfi_def_cfa_offset 48
 1193              		.cfi_offset 6, -48
 1194 000c 53       		pushq	%rbx
 1195              		.cfi_def_cfa_offset 56
 1196              		.cfi_offset 3, -56
 1197 000d 4889F3   		movq	%rsi, %rbx
 1198 0010 4889D5   		movq	%rdx, %rbp
 1199 0013 4883EC38 		subq	$56, %rsp
 1200              		.cfi_def_cfa_offset 112
 283:fltk-1.3.4-1/src/Fl_Table.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 1201              		.loc 4 283 0
 1202 0017 C7020000 		movl	$0, (%rdx)
 1202      0000
 1203 001d C7030000 		movl	$0, (%rbx)
 1203      0000
 281:fltk-1.3.4-1/src/Fl_Table.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1204              		.loc 4 281 0
 1205 0023 64488B34 		movq	%fs:40, %rsi
 1205      25280000 
 1205      00
 1206 002c 48897424 		movq	%rsi, 40(%rsp)
 1206      28
 1207 0031 31F6     		xorl	%esi, %esi
 1208              	.LVL133:
 284:fltk-1.3.4-1/src/Fl_Table.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 1209              		.loc 4 284 0
 1210 0033 C7010000 		movl	$0, (%rcx)
 1210      0000
 1211              	.LVL134:
 287:fltk-1.3.4-1/src/Fl_Table.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 1212              		.loc 4 287 0
 1213 0039 80BFB800 		cmpb	$0, 184(%rdi)
 1213      000000
 281:fltk-1.3.4-1/src/Fl_Table.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1214              		.loc 4 281 0
 1215 0040 48894C24 		movq	%rcx, 8(%rsp)
 1215      08
 287:fltk-1.3.4-1/src/Fl_Table.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 1216              		.loc 4 287 0
 1217 0045 0F853502 		jne	.L177
 1217      0000
 1218              	.LVL135:
 1219              	.L131:
 311:fltk-1.3.4-1/src/Fl_Table.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1220              		.loc 4 311 0
 1221 004b 4180BFB9 		cmpb	$0, 185(%r15)
 1221      00000000 
 1222 0053 0F84D700 		je	.L138
 1222      0000
 1223              	.LVL136:
 1224              	.LBB939:
 1225              	.LBB940:
 249:fltk-1.3.4-1/src/Fl_Table.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 1226              		.loc 4 249 0
 1227 0059 418BBF6C 		movl	364(%r15), %edi
 1227      010000
 250:fltk-1.3.4-1/src/Fl_Table.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1228              		.loc 4 250 0
 1229 0060 418BB780 		movl	384(%r15), %esi
 1229      010000
 251:fltk-1.3.4-1/src/Fl_Table.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1230              		.loc 4 251 0
 1231 0067 418B9774 		movl	372(%r15), %edx
 1231      010000
 1232 006e 418B8FAC 		movl	172(%r15), %ecx
 1232      000000
 1233              	.LVL137:
 249:fltk-1.3.4-1/src/Fl_Table.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 1234              		.loc 4 249 0
 1235 0075 897C2418 		movl	%edi, 24(%rsp)
 250:fltk-1.3.4-1/src/Fl_Table.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1236              		.loc 4 250 0
 1237 0079 8974241C 		movl	%esi, 28(%rsp)
 251:fltk-1.3.4-1/src/Fl_Table.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1238              		.loc 4 251 0
 1239 007d 89542420 		movl	%edx, 32(%rsp)
 252:fltk-1.3.4-1/src/Fl_Table.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1240              		.loc 4 252 0
 1241 0081 894C2424 		movl	%ecx, 36(%rsp)
 1242              	.LVL138:
 1243              	.LBE940:
 1244              	.LBE939:
 314:fltk-1.3.4-1/src/Fl_Table.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1245              		.loc 4 314 0
 1246 0085 E8000000 		call	_ZN2Fl12event_insideEiiii
 1246      00
 1247              	.LVL139:
 1248 008a 85C0     		testl	%eax, %eax
 1249 008c 0F849E00 		je	.L138
 1249      0000
 316:fltk-1.3.4-1/src/Fl_Table.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1250              		.loc 4 316 0
 1251 0092 418B8F3C 		movl	316(%r15), %ecx
 1251      010000
 1252 0099 894D00   		movl	%ecx, 0(%rbp)
 1253 009c 41398F40 		cmpl	%ecx, 320(%r15)
 1253      010000
 1254 00a3 0F8CA701 		jl	.L139
 1254      0000
 1255 00a9 488D4424 		leaq	24(%rsp), %rax
 1255      18
 1256 00ae 4C8D7424 		leaq	36(%rsp), %r14
 1256      24
 1257 00b3 4C8D6C24 		leaq	32(%rsp), %r13
 1257      20
 1258 00b8 4C8D6424 		leaq	28(%rsp), %r12
 1258      1C
 1259 00bd 48890424 		movq	%rax, (%rsp)
 1260 00c1 EB1B     		jmp	.L153
 1261              		.p2align 4,,10
 1262 00c3 0F1F4400 		.p2align 3
 1262      00
 1263              	.L140:
 1264 00c8 8B4500   		movl	0(%rbp), %eax
 1265 00cb 8D4801   		leal	1(%rax), %ecx
 1266 00ce 894D00   		movl	%ecx, 0(%rbp)
 1267 00d1 41398F40 		cmpl	%ecx, 320(%r15)
 1267      010000
 1268 00d8 0F8C7201 		jl	.L139
 1268      0000
 1269              	.L153:
 317:fltk-1.3.4-1/src/Fl_Table.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 1270              		.loc 4 317 0
 1271 00de 4156     		pushq	%r14
 1272              		.cfi_def_cfa_offset 120
 1273 00e0 4155     		pushq	%r13
 1274              		.cfi_def_cfa_offset 128
 1275 00e2 31D2     		xorl	%edx, %edx
 1276 00e4 4C8B4424 		movq	16(%rsp), %r8
 1276      10
 1277 00e9 4D89E1   		movq	%r12, %r9
 1278 00ec BE080000 		movl	$8, %esi
 1278      00
 1279 00f1 4C89FF   		movq	%r15, %rdi
 1280 00f4 E8000000 		call	_ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
 1280      00
 1281              	.LVL140:
 318:fltk-1.3.4-1/src/Fl_Table.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1282              		.loc 4 318 0
 1283 00f9 8B442428 		movl	40(%rsp), %eax
 1284              	.LBB941:
 1285              	.LBB942:
 1286              		.file 6 "fltk-1.3.4-1/FL/Fl.H"
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
 1287              		.loc 6 598 0
 1288 00fd 8B150000 		movl	_ZN2Fl3e_xE(%rip), %edx
 1288      0000
 1289              	.LBE942:
 1290              	.LBE941:
 318:fltk-1.3.4-1/src/Fl_Table.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1291              		.loc 4 318 0
 1292 0103 4158     		popq	%r8
 1293              		.cfi_def_cfa_offset 120
 1294 0105 4159     		popq	%r9
 1295              		.cfi_def_cfa_offset 112
 1296 0107 39C2     		cmpl	%eax, %edx
 1297 0109 7CBD     		jl	.L140
 1298 010b 8B4C2420 		movl	32(%rsp), %ecx
 1299 010f 01C1     		addl	%eax, %ecx
 1300 0111 39CA     		cmpl	%ecx, %edx
 1301 0113 7DB3     		jge	.L140
 1302              	.LVL141:
 323:fltk-1.3.4-1/src/Fl_Table.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 1303              		.loc 4 323 0
 1304 0115 4180BFBB 		cmpb	$0, 187(%r15)
 1304      00000000 
 1305 011d 0F855002 		jne	.L178
 1305      0000
 1306              	.L171:
 327:fltk-1.3.4-1/src/Fl_Table.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 1307              		.loc 4 327 0 discriminator 1
 1308 0123 B8080000 		movl	$8, %eax
 1308      00
 1309 0128 E9000100 		jmp	.L133
 1309      00
 1310              	.LVL142:
 1311 012d 0F1F00   		.p2align 4,,10
 1312              		.p2align 3
 1313              	.L138:
 337:fltk-1.3.4-1/src/Fl_Table.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1314              		.loc 4 337 0
 1315 0130 418B8F78 		movl	376(%r15), %ecx
 1315      010000
 1316 0137 418B9774 		movl	372(%r15), %edx
 1316      010000
 1317 013e 418BB770 		movl	368(%r15), %esi
 1317      010000
 1318 0145 418BBF6C 		movl	364(%r15), %edi
 1318      010000
 1319 014c E8000000 		call	_ZN2Fl12event_insideEiiii
 1319      00
 1320              	.LVL143:
 1321 0151 85C0     		testl	%eax, %eax
 1322 0153 0F84F700 		je	.L139
 1322      0000
 338:fltk-1.3.4-1/src/Fl_Table.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 1323              		.loc 4 338 0
 1324 0159 418B9734 		movl	308(%r15), %edx
 1324      010000
 1325 0160 8913     		movl	%edx, (%rbx)
 1326 0162 413B9738 		cmpl	312(%r15), %edx
 1326      010000
 1327 0169 0F8FFD00 		jg	.L145
 1327      0000
 1328 016f 488D4424 		leaq	24(%rsp), %rax
 1328      18
 1329 0174 4C8D7424 		leaq	36(%rsp), %r14
 1329      24
 1330 0179 4C8D6C24 		leaq	32(%rsp), %r13
 1330      20
 1331 017e 4C8D6424 		leaq	28(%rsp), %r12
 1331      1C
 1332 0183 48890424 		movq	%rax, (%rsp)
 1333              	.L147:
 339:fltk-1.3.4-1/src/Fl_Table.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 1334              		.loc 4 339 0
 1335 0187 4156     		pushq	%r14
 1336              		.cfi_def_cfa_offset 120
 1337 0189 4155     		pushq	%r13
 1338              		.cfi_def_cfa_offset 128
 1339 018b BE100000 		movl	$16, %esi
 1339      00
 1340 0190 4C8B4424 		movq	16(%rsp), %r8
 1340      10
 1341 0195 8B4D00   		movl	0(%rbp), %ecx
 1342 0198 4C89FF   		movq	%r15, %rdi
 1343 019b 4D89E1   		movq	%r12, %r9
 1344 019e E8000000 		call	_ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
 1344      00
 1345              	.LVL144:
 340:fltk-1.3.4-1/src/Fl_Table.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1346              		.loc 4 340 0
 1347 01a3 8B44242C 		movl	44(%rsp), %eax
 1348              	.LBB943:
 1349              	.LBB944:
 599:fltk-1.3.4-1/FL/Fl.H ****   /**
 600:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position of the event relative to the Fl_Window
 601:fltk-1.3.4-1/FL/Fl.H ****     it was passed to.
 602:fltk-1.3.4-1/FL/Fl.H ****   */
 603:fltk-1.3.4-1/FL/Fl.H ****   static int event_y()	{return e_y;}
 1350              		.loc 6 603 0
 1351 01a7 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 1351      0000
 1352              	.LBE944:
 1353              	.LBE943:
 340:fltk-1.3.4-1/src/Fl_Table.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1354              		.loc 4 340 0
 1355 01ad 5E       		popq	%rsi
 1356              		.cfi_def_cfa_offset 120
 1357 01ae 5F       		popq	%rdi
 1358              		.cfi_def_cfa_offset 112
 1359 01af 39D0     		cmpl	%edx, %eax
 1360 01b1 0F8FB500 		jg	.L145
 1360      0000
 341:fltk-1.3.4-1/src/Fl_Table.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 1361              		.loc 4 341 0
 1362 01b7 03442424 		addl	36(%rsp), %eax
 1363 01bb 39D0     		cmpl	%edx, %eax
 1364 01bd 0F8E9500 		jle	.L148
 1364      0000
 342:fltk-1.3.4-1/src/Fl_Table.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1365              		.loc 4 342 0
 1366 01c3 418B8F3C 		movl	316(%r15), %ecx
 1366      010000
 1367 01ca 894D00   		movl	%ecx, 0(%rbp)
 1368 01cd 413B8F40 		cmpl	320(%r15), %ecx
 1368      010000
 1369 01d4 7E1C     		jle	.L149
 1370 01d6 E97D0000 		jmp	.L148
 1370      00
 1371 01db 0F1F4400 		.p2align 4,,10
 1371      00
 1372              		.p2align 3
 1373              	.L179:
 342:fltk-1.3.4-1/src/Fl_Table.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1374              		.loc 4 342 0 is_stmt 0 discriminator 2
 1375 01e0 8B4500   		movl	0(%rbp), %eax
 1376 01e3 8D4801   		leal	1(%rax), %ecx
 1377 01e6 894D00   		movl	%ecx, 0(%rbp)
 1378 01e9 41398F40 		cmpl	%ecx, 320(%r15)
 1378      010000
 1379 01f0 7C66     		jl	.L148
 1380              	.L149:
 343:fltk-1.3.4-1/src/Fl_Table.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 1381              		.loc 4 343 0 is_stmt 1
 1382 01f2 4156     		pushq	%r14
 1383              		.cfi_def_cfa_offset 120
 1384 01f4 4155     		pushq	%r13
 1385              		.cfi_def_cfa_offset 128
 1386 01f6 4D89E1   		movq	%r12, %r9
 1387 01f9 4C8B4424 		movq	16(%rsp), %r8
 1387      10
 1388 01fe 8B13     		movl	(%rbx), %edx
 1389 0200 BE100000 		movl	$16, %esi
 1389      00
 1390 0205 4C89FF   		movq	%r15, %rdi
 1391 0208 E8000000 		call	_ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
 1391      00
 1392              	.LVL145:
 344:fltk-1.3.4-1/src/Fl_Table.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1393              		.loc 4 344 0
 1394 020d 8B4C2434 		movl	52(%rsp), %ecx
 1395 0211 8B542430 		movl	48(%rsp), %edx
 1396 0215 8B74242C 		movl	44(%rsp), %esi
 1397 0219 8B7C2428 		movl	40(%rsp), %edi
 1398 021d E8000000 		call	_ZN2Fl12event_insideEiiii
 1398      00
 1399              	.LVL146:
 1400 0222 85C0     		testl	%eax, %eax
 1401 0224 5A       		popq	%rdx
 1402              		.cfi_def_cfa_offset 120
 1403 0225 59       		popq	%rcx
 1404              		.cfi_def_cfa_offset 112
 1405 0226 74B8     		je	.L179
 345:fltk-1.3.4-1/src/Fl_Table.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 1406              		.loc 4 345 0
 1407 0228 B8100000 		movl	$16, %eax
 1407      00
 1408              	.LVL147:
 1409              	.L133:
 355:fltk-1.3.4-1/src/Fl_Table.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 1410              		.loc 4 355 0
 1411 022d 488B5C24 		movq	40(%rsp), %rbx
 1411      28
 1412 0232 6448331C 		xorq	%fs:40, %rbx
 1412      25280000 
 1412      00
 1413              	.LVL148:
 1414 023b 0F856501 		jne	.L180
 1414      0000
 1415 0241 4883C438 		addq	$56, %rsp
 1416              		.cfi_remember_state
 1417              		.cfi_def_cfa_offset 56
 1418 0245 5B       		popq	%rbx
 1419              		.cfi_def_cfa_offset 48
 1420 0246 5D       		popq	%rbp
 1421              		.cfi_def_cfa_offset 40
 1422              	.LVL149:
 1423 0247 415C     		popq	%r12
 1424              		.cfi_def_cfa_offset 32
 1425 0249 415D     		popq	%r13
 1426              		.cfi_def_cfa_offset 24
 1427 024b 415E     		popq	%r14
 1428              		.cfi_def_cfa_offset 16
 1429 024d 415F     		popq	%r15
 1430              		.cfi_def_cfa_offset 8
 1431              	.LVL150:
 1432 024f C3       		ret
 1433              	.LVL151:
 1434              		.p2align 4,,10
 1435              		.p2align 3
 1436              	.L139:
 1437              		.cfi_restore_state
 307:fltk-1.3.4-1/src/Fl_Table.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 1438              		.loc 4 307 0
 1439 0250 31C0     		xorl	%eax, %eax
 1440 0252 EBD9     		jmp	.L133
 1441              	.LVL152:
 1442              		.p2align 4,,10
 1443 0254 0F1F4000 		.p2align 3
 1444              	.L148:
 338:fltk-1.3.4-1/src/Fl_Table.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 1445              		.loc 4 338 0
 1446 0258 8B03     		movl	(%rbx), %eax
 1447 025a 8D5001   		leal	1(%rax), %edx
 1448 025d 8913     		movl	%edx, (%rbx)
 1449 025f 41399738 		cmpl	%edx, 312(%r15)
 1449      010000
 1450 0266 0F8D1BFF 		jge	.L147
 1450      FFFF
 1451              	.L145:
 350:fltk-1.3.4-1/src/Fl_Table.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 1452              		.loc 4 350 0
 1453 026c C7450000 		movl	$0, 0(%rbp)
 1453      000000
 351:fltk-1.3.4-1/src/Fl_Table.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1454              		.loc 4 351 0
 1455 0273 B8200000 		movl	$32, %eax
 1455      00
 350:fltk-1.3.4-1/src/Fl_Table.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 1456              		.loc 4 350 0
 1457 0278 C7030000 		movl	$0, (%rbx)
 1457      0000
 351:fltk-1.3.4-1/src/Fl_Table.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1458              		.loc 4 351 0
 1459 027e EBAD     		jmp	.L133
 1460              	.LVL153:
 1461              		.p2align 4,,10
 1462              		.p2align 3
 1463              	.L177:
 289:fltk-1.3.4-1/src/Fl_Table.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1464              		.loc 4 289 0
 1465 0280 488D4424 		leaq	24(%rsp), %rax
 1465      18
 1466 0285 4C8D7424 		leaq	36(%rsp), %r14
 1466      24
 1467 028a 4C8D6C24 		leaq	32(%rsp), %r13
 1467      20
 1468 028f 4C8D6424 		leaq	28(%rsp), %r12
 1468      1C
 1469 0294 BE040000 		movl	$4, %esi
 1469      00
 1470 0299 4889C2   		movq	%rax, %rdx
 1471              	.LVL154:
 1472 029c 4D89F1   		movq	%r14, %r9
 1473 029f 4D89E8   		movq	%r13, %r8
 1474 02a2 4C89E1   		movq	%r12, %rcx
 1475              	.LVL155:
 1476 02a5 48890424 		movq	%rax, (%rsp)
 1477 02a9 E8000000 		call	_ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_
 1477      00
 1478              	.LVL156:
 290:fltk-1.3.4-1/src/Fl_Table.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 1479              		.loc 4 290 0
 1480 02ae 8B4C2424 		movl	36(%rsp), %ecx
 1481 02b2 8B542420 		movl	32(%rsp), %edx
 1482 02b6 8B74241C 		movl	28(%rsp), %esi
 1483 02ba 8B7C2418 		movl	24(%rsp), %edi
 1484 02be E8000000 		call	_ZN2Fl12event_insideEiiii
 1484      00
 1485              	.LVL157:
 1486 02c3 85C0     		testl	%eax, %eax
 1487 02c5 0F8480FD 		je	.L131
 1487      FFFF
 292:fltk-1.3.4-1/src/Fl_Table.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 1488              		.loc 4 292 0
 1489 02cb 418B9734 		movl	308(%r15), %edx
 1489      010000
 1490 02d2 8913     		movl	%edx, (%rbx)
 1491 02d4 413B9738 		cmpl	312(%r15), %edx
 1491      010000
 1492 02db 7E1F     		jle	.L164
 1493 02dd E96EFFFF 		jmp	.L139
 1493      FF
 1494              		.p2align 4,,10
 1495 02e2 660F1F44 		.p2align 3
 1495      0000
 1496              	.L134:
 1497 02e8 8B03     		movl	(%rbx), %eax
 1498 02ea 8D5001   		leal	1(%rax), %edx
 1499 02ed 8913     		movl	%edx, (%rbx)
 1500 02ef 41399738 		cmpl	%edx, 312(%r15)
 1500      010000
 1501 02f6 0F8C54FF 		jl	.L139
 1501      FFFF
 1502              	.L164:
 293:fltk-1.3.4-1/src/Fl_Table.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 1503              		.loc 4 293 0
 1504 02fc 4156     		pushq	%r14
 1505              		.cfi_def_cfa_offset 120
 1506 02fe 4155     		pushq	%r13
 1507              		.cfi_def_cfa_offset 128
 1508 0300 31C9     		xorl	%ecx, %ecx
 1509 0302 4C8B4424 		movq	16(%rsp), %r8
 1509      10
 1510 0307 4D89E1   		movq	%r12, %r9
 1511 030a BE040000 		movl	$4, %esi
 1511      00
 1512 030f 4C89FF   		movq	%r15, %rdi
 1513 0312 E8000000 		call	_ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
 1513      00
 1514              	.LVL158:
 294:fltk-1.3.4-1/src/Fl_Table.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1515              		.loc 4 294 0
 1516 0317 8B44242C 		movl	44(%rsp), %eax
 1517              	.LBB945:
 1518              	.LBB946:
 1519              		.loc 6 603 0
 1520 031b 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 1520      0000
 1521              	.LBE946:
 1522              	.LBE945:
 294:fltk-1.3.4-1/src/Fl_Table.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1523              		.loc 4 294 0
 1524 0321 415A     		popq	%r10
 1525              		.cfi_def_cfa_offset 120
 1526 0323 415B     		popq	%r11
 1527              		.cfi_def_cfa_offset 112
 1528 0325 39D0     		cmpl	%edx, %eax
 1529 0327 7FBF     		jg	.L134
 1530 0329 8B4C2424 		movl	36(%rsp), %ecx
 1531 032d 01C1     		addl	%eax, %ecx
 1532 032f 39D1     		cmpl	%edx, %ecx
 1533 0331 7EB5     		jle	.L134
 1534              	.LVL159:
 299:fltk-1.3.4-1/src/Fl_Table.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1535              		.loc 4 299 0
 1536 0333 4180BFBA 		cmpb	$0, 186(%r15)
 1536      00000000 
 1537 033b 750A     		jne	.L181
 1538              	.L170:
 303:fltk-1.3.4-1/src/Fl_Table.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 1539              		.loc 4 303 0 discriminator 1
 1540 033d B8040000 		movl	$4, %eax
 1540      00
 1541 0342 E9E6FEFF 		jmp	.L133
 1541      FF
 1542              	.L181:
 300:fltk-1.3.4-1/src/Fl_Table.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 1543              		.loc 4 300 0
 1544 0347 83C003   		addl	$3, %eax
 1545 034a 39D0     		cmpl	%edx, %eax
 1546 034c 7C11     		jl	.L136
 300:fltk-1.3.4-1/src/Fl_Table.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 1547              		.loc 4 300 0 is_stmt 0 discriminator 1
 1548 034e 488B4424 		movq	8(%rsp), %rax
 1548      08
 1549 0353 C7000300 		movl	$3, (%rax)
 1549      0000
 1550 0359 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 1550      0000
 1551              	.L136:
 301:fltk-1.3.4-1/src/Fl_Table.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1552              		.loc 4 301 0 is_stmt 1
 1553 035f 83E903   		subl	$3, %ecx
 1554 0362 39D1     		cmpl	%edx, %ecx
 1555 0364 7FD7     		jg	.L170
 301:fltk-1.3.4-1/src/Fl_Table.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1556              		.loc 4 301 0 is_stmt 0 discriminator 1
 1557 0366 488B4424 		movq	8(%rsp), %rax
 1557      08
 1558 036b C7000400 		movl	$4, (%rax)
 1558      0000
 1559 0371 EBCA     		jmp	.L170
 1560              	.LVL160:
 1561              	.L178:
 324:fltk-1.3.4-1/src/Fl_Table.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1562              		.loc 4 324 0 is_stmt 1
 1563 0373 83C003   		addl	$3, %eax
 1564 0376 39C2     		cmpl	%eax, %edx
 1565 0378 7F11     		jg	.L142
 324:fltk-1.3.4-1/src/Fl_Table.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1566              		.loc 4 324 0 is_stmt 0 discriminator 1
 1567 037a 488B4424 		movq	8(%rsp), %rax
 1567      08
 1568 037f C7000100 		movl	$1, (%rax)
 1568      0000
 1569 0385 8B150000 		movl	_ZN2Fl3e_xE(%rip), %edx
 1569      0000
 1570              	.L142:
 325:fltk-1.3.4-1/src/Fl_Table.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 1571              		.loc 4 325 0 is_stmt 1
 1572 038b 83E903   		subl	$3, %ecx
 1573 038e 39CA     		cmpl	%ecx, %edx
 1574 0390 0F8C8DFD 		jl	.L171
 1574      FFFF
 325:fltk-1.3.4-1/src/Fl_Table.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 1575              		.loc 4 325 0 is_stmt 0 discriminator 1
 1576 0396 488B4424 		movq	8(%rsp), %rax
 1576      08
 1577 039b C7000200 		movl	$2, (%rax)
 1577      0000
 1578 03a1 E97DFDFF 		jmp	.L171
 1578      FF
 1579              	.LVL161:
 1580              	.L180:
 355:fltk-1.3.4-1/src/Fl_Table.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 1581              		.loc 4 355 0 is_stmt 1
 1582 03a6 E8000000 		call	__stack_chk_fail
 1582      00
 1583              	.LVL162:
 1584              		.cfi_endproc
 1585              	.LFE583:
 1587              		.section	.text.unlikely._ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE
 1588              	.LCOLDE16:
 1589              		.section	.text._ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE
 1590              	.LHOTE16:
 1591              		.section	.text.unlikely._ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34,"ax",
 1592              		.align 2
 1593              	.LCOLDB17:
 1594              		.section	.text._ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34,"ax",@progbits
 1595              	.LHOTB17:
 1596              		.align 2
 1597              		.p2align 4,,15
 1599              	_ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34:
 1600              	.LFB644:
 653:fltk-1.3.4-1/src/Fl_Table.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 654:fltk-1.3.4-1/src/Fl_Table.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 655:fltk-1.3.4-1/src/Fl_Table.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 656:fltk-1.3.4-1/src/Fl_Table.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_Table.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_Table.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_Table.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_Table.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_Table.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_Table.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_Table.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_Table.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_Table.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 666:fltk-1.3.4-1/src/Fl_Table.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_Table.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_Table.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 669:fltk-1.3.4-1/src/Fl_Table.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_Table.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_Table.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 672:fltk-1.3.4-1/src/Fl_Table.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_Table.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_Table.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 675:fltk-1.3.4-1/src/Fl_Table.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_Table.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_Table.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 678:fltk-1.3.4-1/src/Fl_Table.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_Table.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 680:fltk-1.3.4-1/src/Fl_Table.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_Table.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_Table.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_Table.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_Table.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_Table.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_Table.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687:fltk-1.3.4-1/src/Fl_Table.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_Table.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_Table.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 690:fltk-1.3.4-1/src/Fl_Table.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_Table.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_Table.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_Table.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_Table.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_Table.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_Table.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_Table.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_Table.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_Table.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_Table.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_Table.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_Table.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_Table.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_Table.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_Table.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_Table.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 709:fltk-1.3.4-1/src/Fl_Table.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_Table.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_Table.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_Table.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_Table.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_Table.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_Table.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 716:fltk-1.3.4-1/src/Fl_Table.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 717:fltk-1.3.4-1/src/Fl_Table.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 718:fltk-1.3.4-1/src/Fl_Table.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_Table.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_Table.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721:fltk-1.3.4-1/src/Fl_Table.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 722:fltk-1.3.4-1/src/Fl_Table.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_Table.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_Table.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 725:fltk-1.3.4-1/src/Fl_Table.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_Table.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_Table.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 728:fltk-1.3.4-1/src/Fl_Table.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 729:fltk-1.3.4-1/src/Fl_Table.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 730:fltk-1.3.4-1/src/Fl_Table.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 731:fltk-1.3.4-1/src/Fl_Table.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 732:fltk-1.3.4-1/src/Fl_Table.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/src/Fl_Table.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 734:fltk-1.3.4-1/src/Fl_Table.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 735:fltk-1.3.4-1/src/Fl_Table.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 736:fltk-1.3.4-1/src/Fl_Table.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 737:fltk-1.3.4-1/src/Fl_Table.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 738:fltk-1.3.4-1/src/Fl_Table.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 739:fltk-1.3.4-1/src/Fl_Table.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 740:fltk-1.3.4-1/src/Fl_Table.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 741:fltk-1.3.4-1/src/Fl_Table.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 742:fltk-1.3.4-1/src/Fl_Table.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 743:fltk-1.3.4-1/src/Fl_Table.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 744:fltk-1.3.4-1/src/Fl_Table.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 745:fltk-1.3.4-1/src/Fl_Table.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 746:fltk-1.3.4-1/src/Fl_Table.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 747:fltk-1.3.4-1/src/Fl_Table.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 748:fltk-1.3.4-1/src/Fl_Table.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 749:fltk-1.3.4-1/src/Fl_Table.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 750:fltk-1.3.4-1/src/Fl_Table.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 751:fltk-1.3.4-1/src/Fl_Table.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752:fltk-1.3.4-1/src/Fl_Table.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 753:fltk-1.3.4-1/src/Fl_Table.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 754:fltk-1.3.4-1/src/Fl_Table.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 755:fltk-1.3.4-1/src/Fl_Table.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 756:fltk-1.3.4-1/src/Fl_Table.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 757:fltk-1.3.4-1/src/Fl_Table.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 758:fltk-1.3.4-1/src/Fl_Table.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 759:fltk-1.3.4-1/src/Fl_Table.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 760:fltk-1.3.4-1/src/Fl_Table.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 761:fltk-1.3.4-1/src/Fl_Table.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 762:fltk-1.3.4-1/src/Fl_Table.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 763:fltk-1.3.4-1/src/Fl_Table.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/src/Fl_Table.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 765:fltk-1.3.4-1/src/Fl_Table.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/src/Fl_Table.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 767:fltk-1.3.4-1/src/Fl_Table.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 768:fltk-1.3.4-1/src/Fl_Table.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 769:fltk-1.3.4-1/src/Fl_Table.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 770:fltk-1.3.4-1/src/Fl_Table.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771:fltk-1.3.4-1/src/Fl_Table.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 772:fltk-1.3.4-1/src/Fl_Table.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 773:fltk-1.3.4-1/src/Fl_Table.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 774:fltk-1.3.4-1/src/Fl_Table.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 775:fltk-1.3.4-1/src/Fl_Table.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 776:fltk-1.3.4-1/src/Fl_Table.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 777:fltk-1.3.4-1/src/Fl_Table.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 778:fltk-1.3.4-1/src/Fl_Table.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 779:fltk-1.3.4-1/src/Fl_Table.cxx ****  762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 780:fltk-1.3.4-1/src/Fl_Table.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 781:fltk-1.3.4-1/src/Fl_Table.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 782:fltk-1.3.4-1/src/Fl_Table.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 783:fltk-1.3.4-1/src/Fl_Table.cxx ****  766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 784:fltk-1.3.4-1/src/Fl_Table.cxx ****  767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callb
 785:fltk-1.3.4-1/src/Fl_Table.cxx ****  768:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 786:fltk-1.3.4-1/src/Fl_Table.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 787:fltk-1.3.4-1/src/Fl_Table.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 788:fltk-1.3.4-1/src/Fl_Table.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 789:fltk-1.3.4-1/src/Fl_Table.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 790:fltk-1.3.4-1/src/Fl_Table.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 791:fltk-1.3.4-1/src/Fl_Table.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 792:fltk-1.3.4-1/src/Fl_Table.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 793:fltk-1.3.4-1/src/Fl_Table.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 794:fltk-1.3.4-1/src/Fl_Table.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 795:fltk-1.3.4-1/src/Fl_Table.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 796:fltk-1.3.4-1/src/Fl_Table.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 797:fltk-1.3.4-1/src/Fl_Table.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 798:fltk-1.3.4-1/src/Fl_Table.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 799:fltk-1.3.4-1/src/Fl_Table.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 800:fltk-1.3.4-1/src/Fl_Table.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 801:fltk-1.3.4-1/src/Fl_Table.cxx ****  784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 802:fltk-1.3.4-1/src/Fl_Table.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 803:fltk-1.3.4-1/src/Fl_Table.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 804:fltk-1.3.4-1/src/Fl_Table.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 805:fltk-1.3.4-1/src/Fl_Table.cxx ****  788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 806:fltk-1.3.4-1/src/Fl_Table.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 807:fltk-1.3.4-1/src/Fl_Table.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 808:fltk-1.3.4-1/src/Fl_Table.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 809:fltk-1.3.4-1/src/Fl_Table.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 810:fltk-1.3.4-1/src/Fl_Table.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 811:fltk-1.3.4-1/src/Fl_Table.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 812:fltk-1.3.4-1/src/Fl_Table.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 813:fltk-1.3.4-1/src/Fl_Table.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 814:fltk-1.3.4-1/src/Fl_Table.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 815:fltk-1.3.4-1/src/Fl_Table.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 816:fltk-1.3.4-1/src/Fl_Table.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 817:fltk-1.3.4-1/src/Fl_Table.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 818:fltk-1.3.4-1/src/Fl_Table.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 819:fltk-1.3.4-1/src/Fl_Table.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820:fltk-1.3.4-1/src/Fl_Table.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 821:fltk-1.3.4-1/src/Fl_Table.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 822:fltk-1.3.4-1/src/Fl_Table.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 823:fltk-1.3.4-1/src/Fl_Table.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 824:fltk-1.3.4-1/src/Fl_Table.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 825:fltk-1.3.4-1/src/Fl_Table.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 826:fltk-1.3.4-1/src/Fl_Table.cxx ****  809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 827:fltk-1.3.4-1/src/Fl_Table.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 828:fltk-1.3.4-1/src/Fl_Table.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 829:fltk-1.3.4-1/src/Fl_Table.cxx ****  812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 830:fltk-1.3.4-1/src/Fl_Table.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 831:fltk-1.3.4-1/src/Fl_Table.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 832:fltk-1.3.4-1/src/Fl_Table.cxx ****  815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that
 833:fltk-1.3.4-1/src/Fl_Table.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 834:fltk-1.3.4-1/src/Fl_Table.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 835:fltk-1.3.4-1/src/Fl_Table.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 836:fltk-1.3.4-1/src/Fl_Table.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 837:fltk-1.3.4-1/src/Fl_Table.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 838:fltk-1.3.4-1/src/Fl_Table.cxx ****  821:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 839:fltk-1.3.4-1/src/Fl_Table.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 840:fltk-1.3.4-1/src/Fl_Table.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 841:fltk-1.3.4-1/src/Fl_Table.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 842:fltk-1.3.4-1/src/Fl_Table.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 843:fltk-1.3.4-1/src/Fl_Table.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 844:fltk-1.3.4-1/src/Fl_Table.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 845:fltk-1.3.4-1/src/Fl_Table.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 846:fltk-1.3.4-1/src/Fl_Table.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 847:fltk-1.3.4-1/src/Fl_Table.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 848:fltk-1.3.4-1/src/Fl_Table.cxx ****  831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 849:fltk-1.3.4-1/src/Fl_Table.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 850:fltk-1.3.4-1/src/Fl_Table.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 851:fltk-1.3.4-1/src/Fl_Table.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 852:fltk-1.3.4-1/src/Fl_Table.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 853:fltk-1.3.4-1/src/Fl_Table.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 854:fltk-1.3.4-1/src/Fl_Table.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 855:fltk-1.3.4-1/src/Fl_Table.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 856:fltk-1.3.4-1/src/Fl_Table.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 857:fltk-1.3.4-1/src/Fl_Table.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 858:fltk-1.3.4-1/src/Fl_Table.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 859:fltk-1.3.4-1/src/Fl_Table.cxx ****  842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on th
 860:fltk-1.3.4-1/src/Fl_Table.cxx ****  843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 861:fltk-1.3.4-1/src/Fl_Table.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 862:fltk-1.3.4-1/src/Fl_Table.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 863:fltk-1.3.4-1/src/Fl_Table.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 864:fltk-1.3.4-1/src/Fl_Table.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 865:fltk-1.3.4-1/src/Fl_Table.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 866:fltk-1.3.4-1/src/Fl_Table.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 867:fltk-1.3.4-1/src/Fl_Table.cxx ****  850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 868:fltk-1.3.4-1/src/Fl_Table.cxx ****  851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 869:fltk-1.3.4-1/src/Fl_Table.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870:fltk-1.3.4-1/src/Fl_Table.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 871:fltk-1.3.4-1/src/Fl_Table.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 872:fltk-1.3.4-1/src/Fl_Table.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 873:fltk-1.3.4-1/src/Fl_Table.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 874:fltk-1.3.4-1/src/Fl_Table.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 875:fltk-1.3.4-1/src/Fl_Table.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 876:fltk-1.3.4-1/src/Fl_Table.cxx ****  859:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 877:fltk-1.3.4-1/src/Fl_Table.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 878:fltk-1.3.4-1/src/Fl_Table.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 879:fltk-1.3.4-1/src/Fl_Table.cxx ****  862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 880:fltk-1.3.4-1/src/Fl_Table.cxx ****  863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 881:fltk-1.3.4-1/src/Fl_Table.cxx ****  864:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with ar
 882:fltk-1.3.4-1/src/Fl_Table.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 883:fltk-1.3.4-1/src/Fl_Table.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 884:fltk-1.3.4-1/src/Fl_Table.cxx ****  867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 885:fltk-1.3.4-1/src/Fl_Table.cxx ****  868:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 886:fltk-1.3.4-1/src/Fl_Table.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 887:fltk-1.3.4-1/src/Fl_Table.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 888:fltk-1.3.4-1/src/Fl_Table.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 889:fltk-1.3.4-1/src/Fl_Table.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 890:fltk-1.3.4-1/src/Fl_Table.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 891:fltk-1.3.4-1/src/Fl_Table.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 892:fltk-1.3.4-1/src/Fl_Table.cxx ****  875:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 893:fltk-1.3.4-1/src/Fl_Table.cxx ****  876:fltk-1.3.4-1/FL/Fl_Widget.H ****   int test_shortcut();
 894:fltk-1.3.4-1/src/Fl_Table.cxx ****  877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 895:fltk-1.3.4-1/src/Fl_Table.cxx ****  878:fltk-1.3.4-1/FL/Fl_Widget.H ****   static unsigned int label_shortcut(const char *t);
 896:fltk-1.3.4-1/src/Fl_Table.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 897:fltk-1.3.4-1/src/Fl_Table.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 898:fltk-1.3.4-1/src/Fl_Table.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 899:fltk-1.3.4-1/src/Fl_Table.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 900:fltk-1.3.4-1/src/Fl_Table.cxx ****  883:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _clear_fullscreen() {flags_ &= ~FULLSCREEN;}
 901:fltk-1.3.4-1/src/Fl_Table.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 902:fltk-1.3.4-1/src/Fl_Table.cxx ****  885:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if w is a child of this widget.
 903:fltk-1.3.4-1/src/Fl_Table.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 904:fltk-1.3.4-1/src/Fl_Table.cxx ****  887:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return Returns 1 if \p w is a child of this widget, or
 905:fltk-1.3.4-1/src/Fl_Table.cxx ****  888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 906:fltk-1.3.4-1/src/Fl_Table.cxx ****  889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 907:fltk-1.3.4-1/src/Fl_Table.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 908:fltk-1.3.4-1/src/Fl_Table.cxx ****  891:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 909:fltk-1.3.4-1/src/Fl_Table.cxx ****  892:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if this widget is a child of \p wgt.
 910:fltk-1.3.4-1/src/Fl_Table.cxx ****  893:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns 1 if this widget is a child of \p wgt, or is
 911:fltk-1.3.4-1/src/Fl_Table.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 912:fltk-1.3.4-1/src/Fl_Table.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 913:fltk-1.3.4-1/src/Fl_Table.cxx ****  896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 914:fltk-1.3.4-1/src/Fl_Table.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 915:fltk-1.3.4-1/src/Fl_Table.cxx ****  898:fltk-1.3.4-1/FL/Fl_Widget.H ****   int inside(const Fl_Widget* wgt) const {return wgt ? wgt->c
 916:fltk-1.3.4-1/src/Fl_Table.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 917:fltk-1.3.4-1/src/Fl_Table.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 918:fltk-1.3.4-1/src/Fl_Table.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 919:fltk-1.3.4-1/src/Fl_Table.cxx ****  902:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 920:fltk-1.3.4-1/src/Fl_Table.cxx ****  903:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw();
 921:fltk-1.3.4-1/src/Fl_Table.cxx ****  904:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 922:fltk-1.3.4-1/src/Fl_Table.cxx ****  905:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the label.
 923:fltk-1.3.4-1/src/Fl_Table.cxx ****  906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for t
 924:fltk-1.3.4-1/src/Fl_Table.cxx ****  907:fltk-1.3.4-1/FL/Fl_Widget.H ****      of a widget.
 925:fltk-1.3.4-1/src/Fl_Table.cxx ****  908:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 926:fltk-1.3.4-1/src/Fl_Table.cxx ****  909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 927:fltk-1.3.4-1/src/Fl_Table.cxx ****  910:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 928:fltk-1.3.4-1/src/Fl_Table.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 929:fltk-1.3.4-1/src/Fl_Table.cxx ****  912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widge
 930:fltk-1.3.4-1/src/Fl_Table.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 931:fltk-1.3.4-1/src/Fl_Table.cxx ****  914:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a bitmap of flags describing the kind of damage
 932:fltk-1.3.4-1/src/Fl_Table.cxx ****  915:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), clear_damage(uchar)
 933:fltk-1.3.4-1/src/Fl_Table.cxx ****  916:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 934:fltk-1.3.4-1/src/Fl_Table.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 935:fltk-1.3.4-1/src/Fl_Table.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 936:fltk-1.3.4-1/src/Fl_Table.cxx ****  919:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears or sets the damage flags.
 937:fltk-1.3.4-1/src/Fl_Table.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 938:fltk-1.3.4-1/src/Fl_Table.cxx ****  921:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 939:fltk-1.3.4-1/src/Fl_Table.cxx ****  922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>a
 940:fltk-1.3.4-1/src/Fl_Table.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 941:fltk-1.3.4-1/src/Fl_Table.cxx ****  924:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 942:fltk-1.3.4-1/src/Fl_Table.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 943:fltk-1.3.4-1/src/Fl_Table.cxx ****  926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 944:fltk-1.3.4-1/src/Fl_Table.cxx ****  927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 945:fltk-1.3.4-1/src/Fl_Table.cxx ****  928:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c new bitmask of damage flags (default: 0)
 946:fltk-1.3.4-1/src/Fl_Table.cxx ****  929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 947:fltk-1.3.4-1/src/Fl_Table.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 948:fltk-1.3.4-1/src/Fl_Table.cxx ****  931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 949:fltk-1.3.4-1/src/Fl_Table.cxx ****  932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 950:fltk-1.3.4-1/src/Fl_Table.cxx ****  933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 951:fltk-1.3.4-1/src/Fl_Table.cxx ****  934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 952:fltk-1.3.4-1/src/Fl_Table.cxx ****  935:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 953:fltk-1.3.4-1/src/Fl_Table.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 954:fltk-1.3.4-1/src/Fl_Table.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 955:fltk-1.3.4-1/src/Fl_Table.cxx ****  938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 956:fltk-1.3.4-1/src/Fl_Table.cxx ****  939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 957:fltk-1.3.4-1/src/Fl_Table.cxx ****  940:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for an area inside the widget.
 958:fltk-1.3.4-1/src/Fl_Table.cxx ****  941:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 959:fltk-1.3.4-1/src/Fl_Table.cxx ****  942:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 960:fltk-1.3.4-1/src/Fl_Table.cxx ****  943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 961:fltk-1.3.4-1/src/Fl_Table.cxx ****  944:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 962:fltk-1.3.4-1/src/Fl_Table.cxx ****  945:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 963:fltk-1.3.4-1/src/Fl_Table.cxx ****  946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 964:fltk-1.3.4-1/src/Fl_Table.cxx ****  947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 965:fltk-1.3.4-1/src/Fl_Table.cxx ****  948:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int, Fl_Align) const;
 966:fltk-1.3.4-1/src/Fl_Table.cxx ****  949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 967:fltk-1.3.4-1/src/Fl_Table.cxx ****  950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label 
 968:fltk-1.3.4-1/src/Fl_Table.cxx ****  951:fltk-1.3.4-1/FL/Fl_Widget.H ****       Labels with images will return w() and h() of the image
 969:fltk-1.3.4-1/src/Fl_Table.cxx ****  952:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 970:fltk-1.3.4-1/src/Fl_Table.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 971:fltk-1.3.4-1/src/Fl_Table.cxx ****  954:fltk-1.3.4-1/FL/Fl_Widget.H ****       the arguments \p ww and \p hh and word wrapping
 972:fltk-1.3.4-1/src/Fl_Table.cxx ****  955:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see fl_measure(const char*, int&, int&, int)
 973:fltk-1.3.4-1/src/Fl_Table.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 974:fltk-1.3.4-1/src/Fl_Table.cxx ****  957:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure_label(int& ww, int& hh) const {label_.measure(
 975:fltk-1.3.4-1/src/Fl_Table.cxx ****  958:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 976:fltk-1.3.4-1/src/Fl_Table.cxx ****  959:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* window() const ;
 977:fltk-1.3.4-1/src/Fl_Table.cxx ****  960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 978:fltk-1.3.4-1/src/Fl_Table.cxx ****  961:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window_offset(int& xoff, int& yoff) const;
 979:fltk-1.3.4-1/src/Fl_Table.cxx ****  962:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 980:fltk-1.3.4-1/src/Fl_Table.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 981:fltk-1.3.4-1/src/Fl_Table.cxx ****  964:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 982:fltk-1.3.4-1/src/Fl_Table.cxx ****  965:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 983:fltk-1.3.4-1/src/Fl_Table.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 984:fltk-1.3.4-1/src/Fl_Table.cxx ****  967:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 985:fltk-1.3.4-1/src/Fl_Table.cxx ****  968:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 986:fltk-1.3.4-1/src/Fl_Table.cxx ****  969:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Group-specific methods.
 987:fltk-1.3.4-1/src/Fl_Table.cxx ****  970:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 988:fltk-1.3.4-1/src/Fl_Table.cxx ****  971:fltk-1.3.4-1/FL/Fl_Widget.H ****       Example:
 989:fltk-1.3.4-1/src/Fl_Table.cxx ****  972:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 990:fltk-1.3.4-1/src/Fl_Table.cxx ****  973:fltk-1.3.4-1/FL/Fl_Widget.H ****       void my_callback (Fl_Widget *w, void *) {
 991:fltk-1.3.4-1/src/Fl_Table.cxx ****  974:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Group *g = w->as_group();
 992:fltk-1.3.4-1/src/Fl_Table.cxx ****  975:fltk-1.3.4-1/FL/Fl_Widget.H **** 	if (g)
 993:fltk-1.3.4-1/src/Fl_Table.cxx ****  976:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This group has %d children\n",g->children());
 994:fltk-1.3.4-1/src/Fl_Table.cxx ****  977:fltk-1.3.4-1/FL/Fl_Widget.H **** 	else
 995:fltk-1.3.4-1/src/Fl_Table.cxx ****  978:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This widget is not a group!\n");
 996:fltk-1.3.4-1/src/Fl_Table.cxx ****  979:fltk-1.3.4-1/FL/Fl_Widget.H ****       }
 997:fltk-1.3.4-1/src/Fl_Table.cxx ****  980:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 998:fltk-1.3.4-1/src/Fl_Table.cxx ****  981:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 999:fltk-1.3.4-1/src/Fl_Table.cxx ****  982:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Grou
1000:fltk-1.3.4-1/src/Fl_Table.cxx ****  983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1001:fltk-1.3.4-1/src/Fl_Table.cxx ****  984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
1002:fltk-1.3.4-1/src/Fl_Table.cxx ****  985:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1003:fltk-1.3.4-1/src/Fl_Table.cxx ****  986:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Group* as_group() {return 0;}
1004:fltk-1.3.4-1/src/Fl_Table.cxx ****  987:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1005:fltk-1.3.4-1/src/Fl_Table.cxx ****  988:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Window pointer if this widget is an Fl_Wi
1006:fltk-1.3.4-1/src/Fl_Table.cxx ****  989:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1007:fltk-1.3.4-1/src/Fl_Table.cxx ****  990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
1008:fltk-1.3.4-1/src/Fl_Table.cxx ****  991:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Window. If 
1009:fltk-1.3.4-1/src/Fl_Table.cxx ****  992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
1010:fltk-1.3.4-1/src/Fl_Table.cxx ****  993:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
1011:fltk-1.3.4-1/src/Fl_Table.cxx ****  994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
1012:fltk-1.3.4-1/src/Fl_Table.cxx ****  995:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1013:fltk-1.3.4-1/src/Fl_Table.cxx ****  996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Wind
1014:fltk-1.3.4-1/src/Fl_Table.cxx ****  997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1015:fltk-1.3.4-1/src/Fl_Table.cxx ****  998:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_gl_window()
1016:fltk-1.3.4-1/src/Fl_Table.cxx ****  999:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1017:fltk-1.3.4-1/src/Fl_Table.cxx **** 1000:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Window* as_window() {return 0;}
1018:fltk-1.3.4-1/src/Fl_Table.cxx ****   19              		.loc 1 1000 0
1019:fltk-1.3.4-1/src/Fl_Table.cxx ****   20              		.cfi_startproc
1020:fltk-1.3.4-1/src/Fl_Table.cxx ****   21              	.LVL0:
1021:fltk-1.3.4-1/src/Fl_Table.cxx ****   22              		.loc 1 1000 0
1022:fltk-1.3.4-1/src/Fl_Table.cxx ****   23 0000 31C0     		xorl	%eax, %eax
1023:fltk-1.3.4-1/src/Fl_Table.cxx ****   24 0002 C3       		ret
1024:fltk-1.3.4-1/src/Fl_Table.cxx ****   25              		.cfi_endproc
1025:fltk-1.3.4-1/src/Fl_Table.cxx ****   26              	.LFE128:
1026:fltk-1.3.4-1/src/Fl_Table.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
1027:fltk-1.3.4-1/src/Fl_Table.cxx ****   29              	.LCOLDE0:
1028:fltk-1.3.4-1/src/Fl_Table.cxx ****   30              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
1029:fltk-1.3.4-1/src/Fl_Table.cxx ****   31              	.LHOTE0:
1030:fltk-1.3.4-1/src/Fl_Table.cxx ****   32              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
1031:fltk-1.3.4-1/src/Fl_Table.cxx ****   33              		.align 2
1032:fltk-1.3.4-1/src/Fl_Table.cxx ****   34              	.LCOLDB1:
1033:fltk-1.3.4-1/src/Fl_Table.cxx ****   35              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
1034:fltk-1.3.4-1/src/Fl_Table.cxx ****   36              	.LHOTB1:
1035:fltk-1.3.4-1/src/Fl_Table.cxx ****   37              		.align 2
1036:fltk-1.3.4-1/src/Fl_Table.cxx ****   38              		.p2align 4,,15
1037:fltk-1.3.4-1/src/Fl_Table.cxx ****   39              		.weak	_ZN9Fl_Widget12as_gl_windowEv
1038:fltk-1.3.4-1/src/Fl_Table.cxx ****   41              	_ZN9Fl_Widget12as_gl_windowEv:
1039:fltk-1.3.4-1/src/Fl_Table.cxx ****   42              	.LFB129:
1040:fltk-1.3.4-1/src/Fl_Table.cxx **** 1001:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1041:fltk-1.3.4-1/src/Fl_Table.cxx **** 1002:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Gl_Window pointer if this widget is an Fl
1042:fltk-1.3.4-1/src/Fl_Table.cxx **** 1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1043:fltk-1.3.4-1/src/Fl_Table.cxx **** 1004:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
1044:fltk-1.3.4-1/src/Fl_Table.cxx **** 1005:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Gl_Window. 
1045:fltk-1.3.4-1/src/Fl_Table.cxx **** 1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
1046:fltk-1.3.4-1/src/Fl_Table.cxx **** 1007:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1047:fltk-1.3.4-1/src/Fl_Table.cxx **** 1008:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Gl_W
1048:fltk-1.3.4-1/src/Fl_Table.cxx **** 1009:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1049:fltk-1.3.4-1/src/Fl_Table.cxx **** 1010:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_window()
1050:fltk-1.3.4-1/src/Fl_Table.cxx **** 1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1051:fltk-1.3.4-1/src/Fl_Table.cxx **** 1012:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual class Fl_Gl_Window* as_gl_window() {return 0;}
1052:fltk-1.3.4-1/src/Fl_Table.cxx ****   43              		.loc 1 1012 0
1053:fltk-1.3.4-1/src/Fl_Table.cxx ****   44              		.cfi_startproc
1054:fltk-1.3.4-1/src/Fl_Table.cxx ****   45              	.LVL1:
1055:fltk-1.3.4-1/src/Fl_Table.cxx ****   46              		.loc 1 1012 0
1056:fltk-1.3.4-1/src/Fl_Table.cxx ****   47 0000 31C0     		xorl	%eax, %eax
1057:fltk-1.3.4-1/src/Fl_Table.cxx ****   48 0002 C3       		ret
1058:fltk-1.3.4-1/src/Fl_Table.cxx ****   49              		.cfi_endproc
1059:fltk-1.3.4-1/src/Fl_Table.cxx ****   50              	.LFE129:
1060:fltk-1.3.4-1/src/Fl_Table.cxx ****   52              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
1061:fltk-1.3.4-1/src/Fl_Table.cxx ****   53              	.LCOLDE1:
1062:fltk-1.3.4-1/src/Fl_Table.cxx ****   54              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
1063:fltk-1.3.4-1/src/Fl_Table.cxx ****   55              	.LHOTE1:
1064:fltk-1.3.4-1/src/Fl_Table.cxx ****   56              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
1065:fltk-1.3.4-1/src/Fl_Table.cxx ****   57              		.align 2
1066:fltk-1.3.4-1/src/Fl_Table.cxx ****   58              	.LCOLDB2:
1067:fltk-1.3.4-1/src/Fl_Table.cxx ****   59              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,
1068:fltk-1.3.4-1/src/Fl_Table.cxx ****   60              	.LHOTB2:
1069:fltk-1.3.4-1/src/Fl_Table.cxx ****   61              		.align 2
1070:fltk-1.3.4-1/src/Fl_Table.cxx ****   62              		.p2align 4,,15
1071:fltk-1.3.4-1/src/Fl_Table.cxx ****   63              		.weak	_ZN8Fl_Group8as_groupEv
1072:fltk-1.3.4-1/src/Fl_Table.cxx ****   65              	_ZN8Fl_Group8as_groupEv:
1073:fltk-1.3.4-1/src/Fl_Table.cxx ****   66              	.LFB145:
1074:fltk-1.3.4-1/src/Fl_Table.cxx ****   67              		.file 2 "fltk-1.3.4-1/FL/Fl_Group.H"
1075:fltk-1.3.4-1/src/Fl_Table.cxx ****    1:fltk-1.3.4-1/FL/Fl_Group.H **** //
1076:fltk-1.3.4-1/src/Fl_Table.cxx ****    2:fltk-1.3.4-1/FL/Fl_Group.H **** // "$Id: Fl_Group.H 10446 2014-11-10 22:09:11Z AlbrechtS $"
1077:fltk-1.3.4-1/src/Fl_Table.cxx ****    3:fltk-1.3.4-1/FL/Fl_Group.H **** //
1078:fltk-1.3.4-1/src/Fl_Table.cxx ****    4:fltk-1.3.4-1/FL/Fl_Group.H **** // Group header file for the Fast Light Tool Kit (FLTK).
1079:fltk-1.3.4-1/src/Fl_Table.cxx ****    5:fltk-1.3.4-1/FL/Fl_Group.H **** //
1080:fltk-1.3.4-1/src/Fl_Table.cxx ****    6:fltk-1.3.4-1/FL/Fl_Group.H **** // Copyright 1998-2010 by Bill Spitzak and others.
1081:fltk-1.3.4-1/src/Fl_Table.cxx ****    7:fltk-1.3.4-1/FL/Fl_Group.H **** //
1082:fltk-1.3.4-1/src/Fl_Table.cxx ****    8:fltk-1.3.4-1/FL/Fl_Group.H **** // This library is free software. Distribution and use rights 
1083:fltk-1.3.4-1/src/Fl_Table.cxx ****    9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with thi
1084:fltk-1.3.4-1/src/Fl_Table.cxx ****   10:fltk-1.3.4-1/FL/Fl_Group.H **** // file is missing or damaged, see the license at:
1085:fltk-1.3.4-1/src/Fl_Table.cxx ****   11:fltk-1.3.4-1/FL/Fl_Group.H **** //
1086:fltk-1.3.4-1/src/Fl_Table.cxx ****   12:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/COPYING.php
1087:fltk-1.3.4-1/src/Fl_Table.cxx ****   13:fltk-1.3.4-1/FL/Fl_Group.H **** //
 1601              		.loc 4 1087 0
 1602              		.cfi_startproc
 1603              	.LVL163:
 1604 0000 4155     		pushq	%r13
 1605              		.cfi_def_cfa_offset 16
 1606              		.cfi_offset 13, -16
 1607 0002 4154     		pushq	%r12
 1608              		.cfi_def_cfa_offset 24
 1609              		.cfi_offset 12, -24
 1610 0004 4189CD   		movl	%ecx, %r13d
 1611 0007 55       		pushq	%rbp
 1612              		.cfi_def_cfa_offset 32
 1613              		.cfi_offset 6, -32
 1614 0008 53       		pushq	%rbx
 1615              		.cfi_def_cfa_offset 40
 1616              		.cfi_offset 3, -40
 1617 0009 4889FB   		movq	%rdi, %rbx
 1618 000c 89F5     		movl	%esi, %ebp
 1619 000e 4189D4   		movl	%edx, %r12d
 1620 0011 4883EC28 		subq	$40, %rsp
 1621              		.cfi_def_cfa_offset 80
 1622              		.loc 4 1087 0
 1623 0015 64488B04 		movq	%fs:40, %rax
 1623      25280000 
 1623      00
 1624 001e 48894424 		movq	%rax, 24(%rsp)
 1624      18
 1625 0023 31C0     		xorl	%eax, %eax
1088:fltk-1.3.4-1/src/Fl_Table.cxx ****   14:fltk-1.3.4-1/FL/Fl_Group.H **** // Please report all bugs and problems on the following page:
1089:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
1090:fltk-1.3.4-1/src/Fl_Table.cxx ****   16:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/str.php
 1626              		.loc 4 1090 0
 1627 0025 488D4424 		leaq	20(%rsp), %rax
 1627      14
 1628 002a 50       		pushq	%rax
 1629              		.cfi_def_cfa_offset 88
 1630 002b 488D4424 		leaq	24(%rsp), %rax
 1630      18
 1631 0030 50       		pushq	%rax
 1632              		.cfi_def_cfa_offset 96
 1633 0031 4C8D4C24 		leaq	28(%rsp), %r9
 1633      1C
 1634 0036 4C8D4424 		leaq	24(%rsp), %r8
 1634      18
 1635 003b E8000000 		call	_ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
 1635      00
 1636              	.LVL164:
1091:fltk-1.3.4-1/src/Fl_Table.cxx ****   17:fltk-1.3.4-1/FL/Fl_Group.H **** //
 1637              		.loc 4 1091 0
 1638 0040 488B03   		movq	(%rbx), %rax
 1639 0043 59       		popq	%rcx
 1640              		.cfi_def_cfa_offset 88
 1641 0044 5E       		popq	%rsi
 1642              		.cfi_def_cfa_offset 80
 1643 0045 488B4050 		movq	80(%rax), %rax
 1644 0049 483D0000 		cmpq	$_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii, %rax
 1644      0000
 1645 004f 751F     		jne	.L189
 1646              	.L182:
1092:fltk-1.3.4-1/src/Fl_Table.cxx ****   18:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1647              		.loc 4 1092 0
 1648 0051 488B4424 		movq	24(%rsp), %rax
 1648      18
 1649 0056 64483304 		xorq	%fs:40, %rax
 1649      25280000 
 1649      00
 1650 005f 7534     		jne	.L190
 1651 0061 4883C428 		addq	$40, %rsp
 1652              		.cfi_remember_state
 1653              		.cfi_def_cfa_offset 40
 1654 0065 5B       		popq	%rbx
 1655              		.cfi_def_cfa_offset 32
 1656              	.LVL165:
 1657 0066 5D       		popq	%rbp
 1658              		.cfi_def_cfa_offset 24
 1659              	.LVL166:
 1660 0067 415C     		popq	%r12
 1661              		.cfi_def_cfa_offset 16
 1662              	.LVL167:
 1663 0069 415D     		popq	%r13
 1664              		.cfi_def_cfa_offset 8
 1665              	.LVL168:
 1666 006b C3       		ret
 1667              	.LVL169:
 1668 006c 0F1F4000 		.p2align 4,,10
 1669              		.p2align 3
 1670              	.L189:
 1671              		.cfi_restore_state
1091:fltk-1.3.4-1/src/Fl_Table.cxx ****   17:fltk-1.3.4-1/FL/Fl_Group.H **** //
 1672              		.loc 4 1091 0
 1673 0070 8B542414 		movl	20(%rsp), %edx
 1674 0074 4489E9   		movl	%r13d, %ecx
 1675 0077 89EE     		movl	%ebp, %esi
 1676 0079 4889DF   		movq	%rbx, %rdi
 1677 007c 52       		pushq	%rdx
 1678              		.cfi_def_cfa_offset 88
 1679 007d 8B542418 		movl	24(%rsp), %edx
 1680 0081 52       		pushq	%rdx
 1681              		.cfi_def_cfa_offset 96
 1682 0082 4489E2   		movl	%r12d, %edx
 1683 0085 448B4C24 		movl	28(%rsp), %r9d
 1683      1C
 1684 008a 448B4424 		movl	24(%rsp), %r8d
 1684      18
 1685 008f FFD0     		call	*%rax
 1686              	.LVL170:
 1687 0091 58       		popq	%rax
 1688              		.cfi_def_cfa_offset 88
 1689 0092 5A       		popq	%rdx
 1690              		.cfi_def_cfa_offset 80
 1691 0093 EBBC     		jmp	.L182
 1692              	.L190:
 1693              		.loc 4 1092 0
 1694 0095 E8000000 		call	__stack_chk_fail
 1694      00
 1695              	.LVL171:
 1696              		.cfi_endproc
 1697              	.LFE644:
 1699              		.section	.text.unlikely._ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34
 1700              	.LCOLDE17:
 1701              		.section	.text._ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34
 1702              	.LHOTE17:
 1703              		.section	.text.unlikely._ZN8Fl_Table16_start_auto_dragEv,"ax",@progbits
 1704              		.align 2
 1705              	.LCOLDB19:
 1706              		.section	.text._ZN8Fl_Table16_start_auto_dragEv,"ax",@progbits
 1707              	.LHOTB19:
 1708              		.align 2
 1709              		.p2align 4,,15
 1710              		.globl	_ZN8Fl_Table16_start_auto_dragEv
 1712              	_ZN8Fl_Table16_start_auto_dragEv:
 1713              	.LFB585:
 397:fltk-1.3.4-1/src/Fl_Table.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 1714              		.loc 4 397 0
 1715              		.cfi_startproc
 1716              	.LVL172:
 398:fltk-1.3.4-1/src/Fl_Table.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 1717              		.loc 4 398 0
 1718 0000 8B87DC00 		movl	220(%rdi), %eax
 1718      0000
 1719 0006 85C0     		testl	%eax, %eax
 1720 0008 7406     		je	.L193
 1721 000a F3C3     		rep ret
 1722 000c 0F1F4000 		.p2align 4,,10
 1723              		.p2align 3
 1724              	.L193:
 1725              	.LVL173:
 1726              	.LBB951:
 1727              	.LBB952:
 400:fltk-1.3.4-1/src/Fl_Table.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1728              		.loc 4 400 0
 1729 0010 F20F1005 		movsd	.LC18(%rip), %xmm0
 1729      00000000 
 399:fltk-1.3.4-1/src/Fl_Table.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 1730              		.loc 4 399 0
 1731 0018 C787DC00 		movl	$1, 220(%rdi)
 1731      00000100 
 1731      0000
 400:fltk-1.3.4-1/src/Fl_Table.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1732              		.loc 4 400 0
 1733 0022 4889FE   		movq	%rdi, %rsi
 1734 0025 BF000000 		movl	$_ZN8Fl_Table14_auto_drag_cb2EPv, %edi
 1734      00
 1735              	.LVL174:
 1736 002a E9000000 		jmp	_ZN2Fl11add_timeoutEdPFvPvES0_
 1736      00
 1737              	.LVL175:
 1738              	.LBE952:
 1739              	.LBE951:
 1740              		.cfi_endproc
 1741              	.LFE585:
 1743              		.section	.text.unlikely._ZN8Fl_Table16_start_auto_dragEv
 1744              	.LCOLDE19:
 1745              		.section	.text._ZN8Fl_Table16_start_auto_dragEv
 1746              	.LHOTE19:
 1747              		.section	.text.unlikely._ZN8Fl_Table15_stop_auto_dragEv,"ax",@progbits
 1748              		.align 2
 1749              	.LCOLDB20:
 1750              		.section	.text._ZN8Fl_Table15_stop_auto_dragEv,"ax",@progbits
 1751              	.LHOTB20:
 1752              		.align 2
 1753              		.p2align 4,,15
 1754              		.globl	_ZN8Fl_Table15_stop_auto_dragEv
 1756              	_ZN8Fl_Table15_stop_auto_dragEv:
 1757              	.LFB586:
 404:fltk-1.3.4-1/src/Fl_Table.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 1758              		.loc 4 404 0
 1759              		.cfi_startproc
 1760              	.LVL176:
 405:fltk-1.3.4-1/src/Fl_Table.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1761              		.loc 4 405 0
 1762 0000 8B87DC00 		movl	220(%rdi), %eax
 1762      0000
 1763 0006 85C0     		testl	%eax, %eax
 1764 0008 7506     		jne	.L196
 1765 000a F3C3     		rep ret
 1766 000c 0F1F4000 		.p2align 4,,10
 1767              		.p2align 3
 1768              	.L196:
 1769 0010 E9000000 		jmp	_ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37
 1769      00
 1770              	.LVL177:
 1771              		.cfi_endproc
 1772              	.LFE586:
 1774              		.section	.text.unlikely._ZN8Fl_Table15_stop_auto_dragEv
 1775              	.LCOLDE20:
 1776              		.section	.text._ZN8Fl_Table15_stop_auto_dragEv
 1777              	.LHOTE20:
 1778              		.section	.text.unlikely._ZN8Fl_Table13_auto_drag_cbEv,"ax",@progbits
 1779              		.align 2
 1780              	.LCOLDB22:
 1781              		.section	.text._ZN8Fl_Table13_auto_drag_cbEv,"ax",@progbits
 1782              	.LHOTB22:
 1783              		.align 2
 1784              		.p2align 4,,15
 1785              		.globl	_ZN8Fl_Table13_auto_drag_cbEv
 1787              	_ZN8Fl_Table13_auto_drag_cbEv:
 1788              	.LFB588:
 415:fltk-1.3.4-1/src/Fl_Table.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 1789              		.loc 4 415 0
 1790              		.cfi_startproc
 1791              	.LVL178:
 1792 0000 4154     		pushq	%r12
 1793              		.cfi_def_cfa_offset 16
 1794              		.cfi_offset 12, -16
 1795 0002 55       		pushq	%rbp
 1796              		.cfi_def_cfa_offset 24
 1797              		.cfi_offset 6, -24
 1798 0003 53       		pushq	%rbx
 1799              		.cfi_def_cfa_offset 32
 1800              		.cfi_offset 3, -32
 418:fltk-1.3.4-1/src/Fl_Table.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 1801              		.loc 4 418 0
 1802 0004 8B87E000 		movl	224(%rdi), %eax
 1802      0000
 415:fltk-1.3.4-1/src/Fl_Table.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 1803              		.loc 4 415 0
 1804 000a 4889FB   		movq	%rdi, %rbx
 416:fltk-1.3.4-1/src/Fl_Table.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 1805              		.loc 4 416 0
 1806 000d 448B2500 		movl	_ZN2Fl3e_xE(%rip), %r12d
 1806      000000
 1807              	.LVL179:
 418:fltk-1.3.4-1/src/Fl_Table.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 1808              		.loc 4 418 0
 1809 0014 83F808   		cmpl	$8, %eax
 1810 0017 0F84AB01 		je	.L215
 1810      0000
 420:fltk-1.3.4-1/src/Fl_Table.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 1811              		.loc 4 420 0
 1812 001d 83F804   		cmpl	$4, %eax
 417:fltk-1.3.4-1/src/Fl_Table.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 1813              		.loc 4 417 0
 1814 0020 8B2D0000 		movl	_ZN2Fl3e_yE(%rip), %ebp
 1814      0000
 1815 0026 8B4720   		movl	32(%rdi), %eax
 420:fltk-1.3.4-1/src/Fl_Table.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 1816              		.loc 4 420 0
 1817 0029 0F84B101 		je	.L216
 1817      0000
 1818              	.LVL180:
 1819              	.L199:
 422:fltk-1.3.4-1/src/Fl_Table.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 1820              		.loc 4 422 0
 1821 002f 8B5328   		movl	40(%rbx), %edx
 1822 0032 01C2     		addl	%eax, %edx
 1823 0034 8D4AED   		leal	-19(%rdx), %ecx
 1824 0037 4139CC   		cmpl	%ecx, %r12d
 1825 003a 0F8C3801 		jl	.L201
 1825      0000
 1826              	.LVL181:
 424:fltk-1.3.4-1/src/Fl_Table.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 1827              		.loc 4 424 0
 1828 0040 488BBBA0 		movq	416(%rbx), %rdi
 1828      010000
 1829              	.LVL182:
 423:fltk-1.3.4-1/src/Fl_Table.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1830              		.loc 4 423 0
 1831 0047 83EA14   		subl	$20, %edx
 1832 004a 89150000 		movl	%edx, _ZN2Fl3e_xE(%rip)
 1832      0000
 424:fltk-1.3.4-1/src/Fl_Table.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 1833              		.loc 4 424 0
 1834 0050 F6476002 		testb	$2, 96(%rdi)
 1835 0054 0F84C601 		je	.L217
 1835      0000
 1836              	.LVL183:
 1837              	.L202:
 1838              	.LBB953:
 1839              	.LBB954:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1840              		.loc 1 861 0
 1841 005a 488B5718 		movq	24(%rdi), %rdx
 1842 005e 4889FE   		movq	%rdi, %rsi
 1843 0061 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 1843      00
 1844              	.LVL184:
 1845              	.LBE954:
 1846              	.LBE953:
 427:fltk-1.3.4-1/src/Fl_Table.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 1847              		.loc 4 427 0
 1848 0066 8B050000 		movl	_ZN2Fl3e_xE(%rip), %eax
 1848      0000
 1849 006c 83E81E   		subl	$30, %eax
 1850 006f 89832001 		movl	%eax, 288(%rbx)
 1850      0000
 1851              	.LVL185:
 1852              	.L203:
 1853 0075 8B4324   		movl	36(%rbx), %eax
 1854              	.LVL186:
 437:fltk-1.3.4-1/src/Fl_Table.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 1855              		.loc 4 437 0
 1856 0078 8B532C   		movl	44(%rbx), %edx
 1857 007b 01C2     		addl	%eax, %edx
 1858 007d 8D4AED   		leal	-19(%rdx), %ecx
 1859 0080 39CD     		cmpl	%ecx, %ebp
 1860 0082 0F8CA800 		jl	.L205
 1860      0000
 1861              	.LVL187:
 439:fltk-1.3.4-1/src/Fl_Table.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 1862              		.loc 4 439 0
 1863 0088 488BBB98 		movq	408(%rbx), %rdi
 1863      010000
 1864              	.LVL188:
 438:fltk-1.3.4-1/src/Fl_Table.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1865              		.loc 4 438 0
 1866 008f 83EA14   		subl	$20, %edx
 1867 0092 89150000 		movl	%edx, _ZN2Fl3e_yE(%rip)
 1867      0000
 439:fltk-1.3.4-1/src/Fl_Table.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 1868              		.loc 4 439 0
 1869 0098 F6476002 		testb	$2, 96(%rdi)
 1870 009c 0F844E01 		je	.L218
 1870      0000
 1871              	.LVL189:
 1872              	.L206:
 1873              	.LBB955:
 1874              	.LBB956:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1875              		.loc 1 861 0
 1876 00a2 488B5718 		movq	24(%rdi), %rdx
 1877 00a6 4889FE   		movq	%rdi, %rsi
 1878 00a9 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 1878      00
 1879              	.LVL190:
 1880              	.LBE956:
 1881              	.LBE955:
 443:fltk-1.3.4-1/src/Fl_Table.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 1882              		.loc 4 443 0
 1883 00ae 8B050000 		movl	_ZN2Fl3e_yE(%rip), %eax
 1883      0000
 1884 00b4 83E81E   		subl	$30, %eax
 1885 00b7 89832401 		movl	%eax, 292(%rbx)
 1885      0000
 1886              	.LVL191:
 1887              	.L207:
 454:fltk-1.3.4-1/src/Fl_Table.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1888              		.loc 4 454 0
 1889 00bd 488B03   		movq	(%rbx), %rax
 1890 00c0 BE050000 		movl	$5, %esi
 1890      00
 1891 00c5 4889DF   		movq	%rbx, %rdi
 453:fltk-1.3.4-1/src/Fl_Table.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 1892              		.loc 4 453 0
 1893 00c8 C783DC00 		movl	$2, 220(%rbx)
 1893      00000200 
 1893      0000
 454:fltk-1.3.4-1/src/Fl_Table.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1894              		.loc 4 454 0
 1895 00d2 FF5018   		call	*24(%rax)
 1896              	.LVL192:
 455:fltk-1.3.4-1/src/Fl_Table.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 1897              		.loc 4 455 0
 1898 00d5 C783DC00 		movl	$1, 220(%rbx)
 1898      00000100 
 1898      0000
 456:fltk-1.3.4-1/src/Fl_Table.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 1899              		.loc 4 456 0
 1900 00df 44892500 		movl	%r12d, _ZN2Fl3e_xE(%rip)
 1900      000000
 457:fltk-1.3.4-1/src/Fl_Table.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1901              		.loc 4 457 0
 1902 00e6 892D0000 		movl	%ebp, _ZN2Fl3e_yE(%rip)
 1902      0000
 458:fltk-1.3.4-1/src/Fl_Table.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 1903              		.loc 4 458 0
 1904 00ec E8000000 		call	_ZN2Fl5checkEv
 1904      00
 1905              	.LVL193:
 459:fltk-1.3.4-1/src/Fl_Table.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 1906              		.loc 4 459 0
 1907 00f1 E8000000 		call	_ZN2Fl5flushEv
 1907      00
 1908              	.LVL194:
 460:fltk-1.3.4-1/src/Fl_Table.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1909              		.loc 4 460 0
 1910 00f6 F7050000 		testl	$2130706432, _ZN2Fl7e_stateE(%rip)
 1910      00000000 
 1910      007F
 1911 0100 7426     		je	.L197
 460:fltk-1.3.4-1/src/Fl_Table.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1912              		.loc 4 460 0 is_stmt 0 discriminator 1
 1913 0102 8B83DC00 		movl	220(%rbx), %eax
 1913      0000
 1914 0108 85C0     		testl	%eax, %eax
 1915 010a 741C     		je	.L197
 461:fltk-1.3.4-1/src/Fl_Table.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 1916              		.loc 4 461 0 is_stmt 1
 1917 010c 4889DE   		movq	%rbx, %rsi
 1918 010f F20F1005 		movsd	.LC21(%rip), %xmm0
 1918      00000000 
 463:fltk-1.3.4-1/src/Fl_Table.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 1919              		.loc 4 463 0
 1920 0117 5B       		popq	%rbx
 1921              		.cfi_remember_state
 1922              		.cfi_def_cfa_offset 24
 1923              	.LVL195:
 1924 0118 5D       		popq	%rbp
 1925              		.cfi_def_cfa_offset 16
 1926              	.LVL196:
 1927 0119 415C     		popq	%r12
 1928              		.cfi_def_cfa_offset 8
 1929              	.LVL197:
 461:fltk-1.3.4-1/src/Fl_Table.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 1930              		.loc 4 461 0
 1931 011b BF000000 		movl	$_ZN8Fl_Table14_auto_drag_cb2EPv, %edi
 1931      00
 1932 0120 E9000000 		jmp	_ZN2Fl11add_timeoutEdPFvPvES0_
 1932      00
 1933              	.LVL198:
 1934              		.p2align 4,,10
 1935 0125 0F1F00   		.p2align 3
 1936              	.L197:
 1937              		.cfi_restore_state
 463:fltk-1.3.4-1/src/Fl_Table.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 1938              		.loc 4 463 0
 1939 0128 5B       		popq	%rbx
 1940              		.cfi_remember_state
 1941              		.cfi_def_cfa_offset 24
 1942              	.LVL199:
 1943 0129 5D       		popq	%rbp
 1944              		.cfi_def_cfa_offset 16
 1945              	.LVL200:
 1946 012a 415C     		popq	%r12
 1947              		.cfi_def_cfa_offset 8
 1948              	.LVL201:
 1949 012c C3       		ret
 1950              	.LVL202:
 1951 012d 0F1F00   		.p2align 4,,10
 1952              		.p2align 3
 1953              	.L205:
 1954              		.cfi_restore_state
 445:fltk-1.3.4-1/src/Fl_Table.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 1955              		.loc 4 445 0
 1956 0130 0383AC00 		addl	172(%rbx), %eax
 1956      0000
 1957 0136 39C5     		cmpl	%eax, %ebp
 1958 0138 7D83     		jge	.L207
 1959              	.LVL203:
 447:fltk-1.3.4-1/src/Fl_Table.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 1960              		.loc 4 447 0
 1961 013a 488BBB98 		movq	408(%rbx), %rdi
 1961      010000
 1962              	.LVL204:
 446:fltk-1.3.4-1/src/Fl_Table.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 1963              		.loc 4 446 0
 1964 0141 83C001   		addl	$1, %eax
 1965 0144 89050000 		movl	%eax, _ZN2Fl3e_yE(%rip)
 1965      0000
 447:fltk-1.3.4-1/src/Fl_Table.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 1966              		.loc 4 447 0
 1967 014a F6476002 		testb	$2, 96(%rdi)
 1968 014e 0F84FC00 		je	.L219
 1968      0000
 1969              	.LVL205:
 1970              	.L208:
 1971              	.LBB957:
 1972              	.LBB958:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1973              		.loc 1 861 0
 1974 0154 488B5718 		movq	24(%rdi), %rdx
 1975 0158 4889FE   		movq	%rdi, %rsi
 1976 015b E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 1976      00
 1977              	.LVL206:
 1978              	.LBE958:
 1979              	.LBE957:
 451:fltk-1.3.4-1/src/Fl_Table.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 1980              		.loc 4 451 0
 1981 0160 8B050000 		movl	_ZN2Fl3e_yE(%rip), %eax
 1981      0000
 1982 0166 83C01E   		addl	$30, %eax
 1983 0169 89832401 		movl	%eax, 292(%rbx)
 1983      0000
 1984 016f E949FFFF 		jmp	.L207
 1984      FF
 1985              	.LVL207:
 1986              		.p2align 4,,10
 1987 0174 0F1F4000 		.p2align 3
 1988              	.L201:
 429:fltk-1.3.4-1/src/Fl_Table.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 1989              		.loc 4 429 0
 1990 0178 0383A800 		addl	168(%rbx), %eax
 1990      0000
 1991 017e 4139C4   		cmpl	%eax, %r12d
 1992 0181 0F8DEEFE 		jge	.L203
 1992      FFFF
 1993              	.LVL208:
 431:fltk-1.3.4-1/src/Fl_Table.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 1994              		.loc 4 431 0
 1995 0187 488BBBA0 		movq	416(%rbx), %rdi
 1995      010000
 1996              	.LVL209:
 430:fltk-1.3.4-1/src/Fl_Table.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1997              		.loc 4 430 0
 1998 018e 83C001   		addl	$1, %eax
 1999 0191 89050000 		movl	%eax, _ZN2Fl3e_xE(%rip)
 1999      0000
 431:fltk-1.3.4-1/src/Fl_Table.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 2000              		.loc 4 431 0
 2001 0197 F6476002 		testb	$2, 96(%rdi)
 2002 019b 0F84DF00 		je	.L220
 2002      0000
 2003              	.LVL210:
 2004              	.L204:
 2005              	.LBB959:
 2006              	.LBB960:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2007              		.loc 1 861 0
 2008 01a1 488B5718 		movq	24(%rdi), %rdx
 2009 01a5 4889FE   		movq	%rdi, %rsi
 2010 01a8 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 2010      00
 2011              	.LVL211:
 2012              	.LBE960:
 2013              	.LBE959:
 435:fltk-1.3.4-1/src/Fl_Table.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 2014              		.loc 4 435 0
 2015 01ad 8B050000 		movl	_ZN2Fl3e_xE(%rip), %eax
 2015      0000
 2016 01b3 83C01E   		addl	$30, %eax
 2017 01b6 89832001 		movl	%eax, 288(%rbx)
 2017      0000
 2018 01bc E9B4FEFF 		jmp	.L203
 2018      FF
 2019              	.LVL212:
 2020              		.p2align 4,,10
 2021 01c1 0F1F8000 		.p2align 3
 2021      000000
 2022              	.L215:
 419:fltk-1.3.4-1/src/Fl_Table.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 2023              		.loc 4 419 0
 2024 01c8 8BAFAC00 		movl	172(%rdi), %ebp
 2024      0000
 2025 01ce 8B4720   		movl	32(%rdi), %eax
 2026 01d1 036F24   		addl	36(%rdi), %ebp
 2027              	.LVL213:
 2028 01d4 E956FEFF 		jmp	.L199
 2028      FF
 2029              	.LVL214:
 2030 01d9 0F1F8000 		.p2align 4,,10
 2030      000000
 2031              		.p2align 3
 2032              	.L216:
 421:fltk-1.3.4-1/src/Fl_Table.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2033              		.loc 4 421 0
 2034 01e0 448BA7A8 		movl	168(%rdi), %r12d
 2034      000000
 2035              	.LVL215:
 2036 01e7 4101C4   		addl	%eax, %r12d
 2037              	.LVL216:
 2038 01ea E940FEFF 		jmp	.L199
 2038      FF
 2039              	.LVL217:
 2040 01ef 90       		.p2align 4,,10
 2041              		.p2align 3
 2042              	.L218:
 440:fltk-1.3.4-1/src/Fl_Table.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2043              		.loc 4 440 0
 2044 01f0 660FEFC0 		pxor	%xmm0, %xmm0
 2045 01f4 F20F2C47 		cvttsd2si	120(%rdi), %eax
 2045      78
 2046 01f9 83C01E   		addl	$30, %eax
 2047 01fc F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2048 0200 E8000000 		call	_ZN11Fl_Valuator5clampEd
 2048      00
 2049              	.LVL218:
 2050 0205 488BBB98 		movq	408(%rbx), %rdi
 2050      010000
 2051 020c E8000000 		call	_ZN11Fl_Valuator5valueEd
 2051      00
 2052              	.LVL219:
 2053 0211 488BBB98 		movq	408(%rbx), %rdi
 2053      010000
 2054 0218 E985FEFF 		jmp	.L206
 2054      FF
 2055              	.LVL220:
 2056 021d 0F1F00   		.p2align 4,,10
 2057              		.p2align 3
 2058              	.L217:
 425:fltk-1.3.4-1/src/Fl_Table.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2059              		.loc 4 425 0
 2060 0220 660FEFC0 		pxor	%xmm0, %xmm0
 2061 0224 F20F2C47 		cvttsd2si	120(%rdi), %eax
 2061      78
 2062 0229 83C01E   		addl	$30, %eax
 2063 022c F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2064 0230 E8000000 		call	_ZN11Fl_Valuator5clampEd
 2064      00
 2065              	.LVL221:
 2066 0235 488BBBA0 		movq	416(%rbx), %rdi
 2066      010000
 2067 023c E8000000 		call	_ZN11Fl_Valuator5valueEd
 2067      00
 2068              	.LVL222:
 2069 0241 488BBBA0 		movq	416(%rbx), %rdi
 2069      010000
 2070 0248 E90DFEFF 		jmp	.L202
 2070      FF
 2071              	.LVL223:
 2072 024d 0F1F00   		.p2align 4,,10
 2073              		.p2align 3
 2074              	.L219:
 448:fltk-1.3.4-1/src/Fl_Table.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2075              		.loc 4 448 0
 2076 0250 660FEFC0 		pxor	%xmm0, %xmm0
 2077 0254 F20F2C47 		cvttsd2si	120(%rdi), %eax
 2077      78
 2078 0259 83E81E   		subl	$30, %eax
 2079 025c F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2080 0260 E8000000 		call	_ZN11Fl_Valuator5clampEd
 2080      00
 2081              	.LVL224:
 2082 0265 488BBB98 		movq	408(%rbx), %rdi
 2082      010000
 2083 026c E8000000 		call	_ZN11Fl_Valuator5valueEd
 2083      00
 2084              	.LVL225:
 2085 0271 488BBB98 		movq	408(%rbx), %rdi
 2085      010000
 2086 0278 E9D7FEFF 		jmp	.L208
 2086      FF
 2087              	.LVL226:
 2088 027d 0F1F00   		.p2align 4,,10
 2089              		.p2align 3
 2090              	.L220:
 432:fltk-1.3.4-1/src/Fl_Table.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2091              		.loc 4 432 0
 2092 0280 660FEFC0 		pxor	%xmm0, %xmm0
 2093 0284 F20F2C47 		cvttsd2si	120(%rdi), %eax
 2093      78
 2094 0289 83E81E   		subl	$30, %eax
 2095 028c F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2096 0290 E8000000 		call	_ZN11Fl_Valuator5clampEd
 2096      00
 2097              	.LVL227:
 2098 0295 488BBBA0 		movq	416(%rbx), %rdi
 2098      010000
 2099 029c E8000000 		call	_ZN11Fl_Valuator5valueEd
 2099      00
 2100              	.LVL228:
 2101 02a1 488BBBA0 		movq	416(%rbx), %rdi
 2101      010000
 2102 02a8 E9F4FEFF 		jmp	.L204
 2102      FF
 2103              		.cfi_endproc
 2104              	.LFE588:
 2106              		.section	.text.unlikely._ZN8Fl_Table13_auto_drag_cbEv
 2107              	.LCOLDE22:
 2108              		.section	.text._ZN8Fl_Table13_auto_drag_cbEv
 2109              	.LHOTE22:
 2110              		.section	.text.unlikely._ZN8Fl_Table14_auto_drag_cb2EPv,"ax",@progbits
 2111              		.align 2
 2112              	.LCOLDB23:
 2113              		.section	.text._ZN8Fl_Table14_auto_drag_cb2EPv,"ax",@progbits
 2114              	.LHOTB23:
 2115              		.align 2
 2116              		.p2align 4,,15
 2117              		.globl	_ZN8Fl_Table14_auto_drag_cb2EPv
 2119              	_ZN8Fl_Table14_auto_drag_cb2EPv:
 2120              	.LFB587:
 410:fltk-1.3.4-1/src/Fl_Table.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 2121              		.loc 4 410 0
 2122              		.cfi_startproc
 2123              	.LVL229:
 411:fltk-1.3.4-1/src/Fl_Table.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2124              		.loc 4 411 0
 2125 0000 E9000000 		jmp	_ZN8Fl_Table13_auto_drag_cbEv
 2125      00
 2126              	.LVL230:
 2127              		.cfi_endproc
 2128              	.LFE587:
 2130              		.section	.text.unlikely._ZN8Fl_Table14_auto_drag_cb2EPv
 2131              	.LCOLDE23:
 2132              		.section	.text._ZN8Fl_Table14_auto_drag_cb2EPv
 2133              	.LHOTE23:
 2134              		.section	.text.unlikely._ZN8Fl_Table17recalc_dimensionsEv,"ax",@progbits
 2135              		.align 2
 2136              	.LCOLDB24:
 2137              		.section	.text._ZN8Fl_Table17recalc_dimensionsEv,"ax",@progbits
 2138              	.LHOTB24:
 2139              		.align 2
 2140              		.p2align 4,,15
 2141              		.globl	_ZN8Fl_Table17recalc_dimensionsEv
 2143              	_ZN8Fl_Table17recalc_dimensionsEv:
 2144              	.LFB589:
 466:fltk-1.3.4-1/src/Fl_Table.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 2145              		.loc 4 466 0
 2146              		.cfi_startproc
 2147              	.LVL231:
 2148 0000 4157     		pushq	%r15
 2149              		.cfi_def_cfa_offset 16
 2150              		.cfi_offset 15, -16
 2151 0002 4156     		pushq	%r14
 2152              		.cfi_def_cfa_offset 24
 2153              		.cfi_offset 14, -24
 2154 0004 4155     		pushq	%r13
 2155              		.cfi_def_cfa_offset 32
 2156              		.cfi_offset 13, -32
 2157 0006 4154     		pushq	%r12
 2158              		.cfi_def_cfa_offset 40
 2159              		.cfi_offset 12, -40
 2160 0008 55       		pushq	%rbp
 2161              		.cfi_def_cfa_offset 48
 2162              		.cfi_offset 6, -48
 2163 0009 53       		pushq	%rbx
 2164              		.cfi_def_cfa_offset 56
 2165              		.cfi_offset 3, -56
 2166 000a 4889FB   		movq	%rdi, %rbx
 2167 000d 4883EC08 		subq	$8, %rsp
 2168              		.cfi_def_cfa_offset 64
 2169 0011 8B6F20   		movl	32(%rdi), %ebp
 2170              	.LVL232:
 468:fltk-1.3.4-1/src/Fl_Table.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 2171              		.loc 4 468 0
 2172 0014 0FB67F6E 		movzbl	110(%rdi), %edi
 2173              	.LVL233:
 2174 0018 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 2174      00
 2175              	.LVL234:
 2176 001d 01C5     		addl	%eax, %ebp
 2177 001f 488B8390 		movq	400(%rbx), %rax
 2177      010000
 2178 0026 89AB7C01 		movl	%ebp, 380(%rbx)
 2178      0000
 2179 002c 89AB6C01 		movl	%ebp, 364(%rbx)
 2179      0000
 2180              	.LVL235:
 2181 0032 0FB6786E 		movzbl	110(%rax), %edi
 2182 0036 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 2182      00
 2183              	.LVL236:
 469:fltk-1.3.4-1/src/Fl_Table.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 2184              		.loc 4 469 0
 2185 003b 0FB67B6E 		movzbl	110(%rbx), %edi
 468:fltk-1.3.4-1/src/Fl_Table.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 2186              		.loc 4 468 0
 2187 003f 01C5     		addl	%eax, %ebp
 2188 0041 89AB5C01 		movl	%ebp, 348(%rbx)
 2188      0000
 2189 0047 8B6B24   		movl	36(%rbx), %ebp
 2190              	.LVL237:
 469:fltk-1.3.4-1/src/Fl_Table.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 2191              		.loc 4 469 0
 2192 004a E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 2192      00
 2193              	.LVL238:
 2194 004f 01C5     		addl	%eax, %ebp
 2195 0051 488B8390 		movq	400(%rbx), %rax
 2195      010000
 2196 0058 89AB8001 		movl	%ebp, 384(%rbx)
 2196      0000
 2197 005e 89AB7001 		movl	%ebp, 368(%rbx)
 2197      0000
 2198              	.LVL239:
 2199 0064 0FB6786E 		movzbl	110(%rax), %edi
 2200 0068 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 2200      00
 2201              	.LVL240:
 470:fltk-1.3.4-1/src/Fl_Table.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 2202              		.loc 4 470 0
 2203 006d 0FB67B6E 		movzbl	110(%rbx), %edi
 469:fltk-1.3.4-1/src/Fl_Table.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 2204              		.loc 4 469 0
 2205 0071 01C5     		addl	%eax, %ebp
 2206 0073 89AB6001 		movl	%ebp, 352(%rbx)
 2206      0000
 2207 0079 8B6B28   		movl	40(%rbx), %ebp
 2208              	.LVL241:
 470:fltk-1.3.4-1/src/Fl_Table.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 2209              		.loc 4 470 0
 2210 007c E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 2210      00
 2211              	.LVL242:
 2212 0081 29C5     		subl	%eax, %ebp
 2213 0083 488B8390 		movq	400(%rbx), %rax
 2213      010000
 2214 008a 89AB8401 		movl	%ebp, 388(%rbx)
 2214      0000
 2215 0090 89AB7401 		movl	%ebp, 372(%rbx)
 2215      0000
 2216              	.LVL243:
 2217 0096 0FB6786E 		movzbl	110(%rax), %edi
 2218 009a E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 2218      00
 2219              	.LVL244:
 471:fltk-1.3.4-1/src/Fl_Table.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2220              		.loc 4 471 0
 2221 009f 0FB67B6E 		movzbl	110(%rbx), %edi
 470:fltk-1.3.4-1/src/Fl_Table.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 2222              		.loc 4 470 0
 2223 00a3 29C5     		subl	%eax, %ebp
 2224 00a5 89AB6401 		movl	%ebp, 356(%rbx)
 2224      0000
 2225 00ab 8B6B2C   		movl	44(%rbx), %ebp
 2226              	.LVL245:
 471:fltk-1.3.4-1/src/Fl_Table.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2227              		.loc 4 471 0
 2228 00ae E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 2228      00
 2229              	.LVL246:
 2230 00b3 29C5     		subl	%eax, %ebp
 2231 00b5 488B8390 		movq	400(%rbx), %rax
 2231      010000
 2232 00bc 89AB8801 		movl	%ebp, 392(%rbx)
 2232      0000
 2233 00c2 89AB7801 		movl	%ebp, 376(%rbx)
 2233      0000
 2234              	.LVL247:
 2235 00c8 0FB6786E 		movzbl	110(%rax), %edi
 2236 00cc E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 2236      00
 2237              	.LVL248:
 2238 00d1 29C5     		subl	%eax, %ebp
 473:fltk-1.3.4-1/src/Fl_Table.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2239              		.loc 4 473 0
 2240 00d3 80BBB900 		cmpb	$0, 185(%rbx)
 2240      000000
 471:fltk-1.3.4-1/src/Fl_Table.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2241              		.loc 4 471 0
 2242 00da 89E8     		movl	%ebp, %eax
 2243 00dc 89AB6801 		movl	%ebp, 360(%rbx)
 2243      0000
 2244              	.LVL249:
 473:fltk-1.3.4-1/src/Fl_Table.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2245              		.loc 4 473 0
 2246 00e2 7420     		je	.L223
 2247 00e4 8B93AC00 		movl	172(%rbx), %edx
 2247      0000
 2248              	.LVL250:
 474:fltk-1.3.4-1/src/Fl_Table.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 2249              		.loc 4 474 0
 2250 00ea 01936001 		addl	%edx, 352(%rbx)
 2250      0000
 2251              	.LVL251:
 2252 00f0 01937001 		addl	%edx, 368(%rbx)
 2252      0000
 2253              	.LVL252:
 475:fltk-1.3.4-1/src/Fl_Table.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 2254              		.loc 4 475 0
 2255 00f6 29937801 		subl	%edx, 376(%rbx)
 2255      0000
 2256 00fc 29D0     		subl	%edx, %eax
 2257 00fe 89836801 		movl	%eax, 360(%rbx)
 2257      0000
 2258              	.LVL253:
 2259              	.L223:
 477:fltk-1.3.4-1/src/Fl_Table.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 2260              		.loc 4 477 0
 2261 0104 80BBB800 		cmpb	$0, 184(%rbx)
 2261      000000
 2262 010b 0F85FF00 		jne	.L224
 2262      0000
 2263 0111 448BA364 		movl	356(%rbx), %r12d
 2263      010000
 2264              	.L225:
 2265              	.LBB961:
 484:fltk-1.3.4-1/src/Fl_Table.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 2266              		.loc 4 484 0
 2267 0118 39833001 		cmpl	%eax, 304(%rbx)
 2267      0000
 485:fltk-1.3.4-1/src/Fl_Table.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 2268              		.loc 4 485 0
 2269 011e 448BBB2C 		movl	300(%rbx), %r15d
 2269      010000
 484:fltk-1.3.4-1/src/Fl_Table.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 2270              		.loc 4 484 0
 2271 0125 400F9EC5 		setle	%bpl
 2272              	.LVL254:
 485:fltk-1.3.4-1/src/Fl_Table.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 2273              		.loc 4 485 0
 2274 0129 4539E7   		cmpl	%r12d, %r15d
 2275 012c 410F9EC5 		setle	%r13b
 2276              	.LVL255:
 491:fltk-1.3.4-1/src/Fl_Table.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 2277              		.loc 4 491 0
 2278 0130 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 2278      00
 2279              	.LVL256:
 494:fltk-1.3.4-1/src/Fl_Table.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 2280              		.loc 4 494 0
 2281 0135 4539E7   		cmpl	%r12d, %r15d
 491:fltk-1.3.4-1/src/Fl_Table.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 2282              		.loc 4 491 0
 2283 0138 4189C6   		movl	%eax, %r14d
 2284              	.LVL257:
 494:fltk-1.3.4-1/src/Fl_Table.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 2285              		.loc 4 494 0
 2286 013b 0F8E3F01 		jle	.L234
 2286      0000
 2287 0141 4084ED   		testb	%bpl, %bpl
 2288 0144 0F843601 		je	.L234
 2288      0000
 494:fltk-1.3.4-1/src/Fl_Table.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 2289              		.loc 4 494 0 is_stmt 0 discriminator 1
 2290 014a 2B836801 		subl	360(%rbx), %eax
 2290      0000
 2291              	.LVL258:
 2292 0150 31D2     		xorl	%edx, %edx
 2293 0152 03833001 		addl	304(%rbx), %eax
 2293      0000
 2294 0158 85C0     		testl	%eax, %eax
 2295 015a 0F9EC2   		setle	%dl
 2296              	.LVL259:
 2297              	.L228:
 495:fltk-1.3.4-1/src/Fl_Table.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2298              		.loc 4 495 0 is_stmt 1
 2299 015d 85D2     		testl	%edx, %edx
 2300 015f 0F85DB00 		jne	.L229
 2300      0000
 2301 0165 4584ED   		testb	%r13b, %r13b
 2302 0168 0F84D200 		je	.L229
 2302      0000
 495:fltk-1.3.4-1/src/Fl_Table.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2303              		.loc 4 495 0 is_stmt 0 discriminator 1
 2304 016e 4489F0   		movl	%r14d, %eax
 2305 0171 2B836401 		subl	356(%rbx), %eax
 2305      0000
 2306 0177 4531ED   		xorl	%r13d, %r13d
 2307              	.LVL260:
 2308 017a 03832C01 		addl	300(%rbx), %eax
 2308      0000
 2309 0180 85C0     		testl	%eax, %eax
 2310 0182 410F9EC5 		setle	%r13b
 2311              	.LVL261:
 2312              	.L230:
 498:fltk-1.3.4-1/src/Fl_Table.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 2313              		.loc 4 498 0 is_stmt 1
 2314 0186 488BBB98 		movq	408(%rbx), %rdi
 2314      010000
 2315 018d 488B07   		movq	(%rdi), %rax
 2316 0190 FF5028   		call	*40(%rax)
 2317              	.LVL262:
 499:fltk-1.3.4-1/src/Fl_Table.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 2318              		.loc 4 499 0
 2319 0193 488BBBA0 		movq	416(%rbx), %rdi
 2319      010000
 498:fltk-1.3.4-1/src/Fl_Table.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 2320              		.loc 4 498 0
 2321 019a 4429B364 		subl	%r14d, 356(%rbx)
 2321      010000
 2322 01a1 4429B374 		subl	%r14d, 372(%rbx)
 2322      010000
 499:fltk-1.3.4-1/src/Fl_Table.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 2323              		.loc 4 499 0
 2324 01a8 4585ED   		testl	%r13d, %r13d
 2325 01ab 488B07   		movq	(%rdi), %rax
 2326 01ae 0F85B800 		jne	.L248
 2326      0000
 2327              	.LVL263:
 2328              	.L232:
 500:fltk-1.3.4-1/src/Fl_Table.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 2329              		.loc 4 500 0
 2330 01b4 FF5028   		call	*40(%rax)
 2331              	.LVL264:
 2332 01b7 448B8378 		movl	376(%rbx), %r8d
 2332      010000
 2333 01be 4429B368 		subl	%r14d, 360(%rbx)
 2333      010000
 2334 01c5 4529F0   		subl	%r14d, %r8d
 2335 01c8 44898378 		movl	%r8d, 376(%rbx)
 2335      010000
 2336              	.L233:
 2337              	.LBE961:
 503:fltk-1.3.4-1/src/Fl_Table.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 2338              		.loc 4 503 0
 2339 01cf 488BBB90 		movq	400(%rbx), %rdi
 2339      010000
 2340 01d6 8B8B7401 		movl	372(%rbx), %ecx
 2340      0000
 2341 01dc 8B937001 		movl	368(%rbx), %edx
 2341      0000
 2342 01e2 8BB36C01 		movl	364(%rbx), %esi
 2342      0000
 2343 01e8 488B07   		movq	(%rdi), %rax
 2344 01eb FF5020   		call	*32(%rax)
 2345              	.LVL265:
 504:fltk-1.3.4-1/src/Fl_Table.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2346              		.loc 4 504 0
 2347 01ee 488BBB90 		movq	400(%rbx), %rdi
 2347      010000
 505:fltk-1.3.4-1/src/Fl_Table.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 2348              		.loc 4 505 0
 2349 01f5 4883C408 		addq	$8, %rsp
 2350              		.cfi_remember_state
 2351              		.cfi_def_cfa_offset 56
 2352 01f9 5B       		popq	%rbx
 2353              		.cfi_def_cfa_offset 48
 2354              	.LVL266:
 2355 01fa 5D       		popq	%rbp
 2356              		.cfi_def_cfa_offset 40
 2357 01fb 415C     		popq	%r12
 2358              		.cfi_def_cfa_offset 32
 2359 01fd 415D     		popq	%r13
 2360              		.cfi_def_cfa_offset 24
 2361 01ff 415E     		popq	%r14
 2362              		.cfi_def_cfa_offset 16
 2363              	.LVL267:
 2364 0201 415F     		popq	%r15
 2365              		.cfi_def_cfa_offset 8
 504:fltk-1.3.4-1/src/Fl_Table.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2366              		.loc 4 504 0
 2367 0203 E9000000 		jmp	_ZN8Fl_Group10init_sizesEv
 2367      00
 2368              	.LVL268:
 2369 0208 0F1F8400 		.p2align 4,,10
 2369      00000000 
 2370              		.p2align 3
 2371              	.L224:
 2372              		.cfi_restore_state
 2373 0210 8B93A800 		movl	168(%rbx), %edx
 2373      0000
 2374              	.LVL269:
 479:fltk-1.3.4-1/src/Fl_Table.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 2375              		.loc 4 479 0
 2376 0216 448BA364 		movl	356(%rbx), %r12d
 2376      010000
 478:fltk-1.3.4-1/src/Fl_Table.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2377              		.loc 4 478 0
 2378 021d 01935C01 		addl	%edx, 348(%rbx)
 2378      0000
 2379              	.LVL270:
 2380 0223 01936C01 		addl	%edx, 364(%rbx)
 2380      0000
 2381              	.LVL271:
 479:fltk-1.3.4-1/src/Fl_Table.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 2382              		.loc 4 479 0
 2383 0229 4129D4   		subl	%edx, %r12d
 2384 022c 29937401 		subl	%edx, 372(%rbx)
 2384      0000
 2385 0232 4489A364 		movl	%r12d, 356(%rbx)
 2385      010000
 2386              	.LVL272:
 2387 0239 E9DAFEFF 		jmp	.L225
 2387      FF
 2388              	.LVL273:
 2389 023e 6690     		.p2align 4,,10
 2390              		.p2align 3
 2391              	.L229:
 2392              	.LBB962:
 497:fltk-1.3.4-1/src/Fl_Table.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 2393              		.loc 4 497 0
 2394 0240 85D2     		testl	%edx, %edx
 485:fltk-1.3.4-1/src/Fl_Table.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 2395              		.loc 4 485 0
 2396 0242 450FB6ED 		movzbl	%r13b, %r13d
 497:fltk-1.3.4-1/src/Fl_Table.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 2397              		.loc 4 497 0
 2398 0246 0F843AFF 		je	.L230
 2398      FFFF
 497:fltk-1.3.4-1/src/Fl_Table.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 2399              		.loc 4 497 0 is_stmt 0 discriminator 1
 2400 024c 488BBB98 		movq	408(%rbx), %rdi
 2400      010000
 2401 0253 488B07   		movq	(%rdi), %rax
 2402 0256 FF5030   		call	*48(%rax)
 2403              	.LVL274:
 499:fltk-1.3.4-1/src/Fl_Table.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 2404              		.loc 4 499 0 is_stmt 1 discriminator 1
 2405 0259 488BBBA0 		movq	416(%rbx), %rdi
 2405      010000
 2406 0260 4585ED   		testl	%r13d, %r13d
 2407 0263 488B07   		movq	(%rdi), %rax
 2408 0266 0F8448FF 		je	.L232
 2408      FFFF
 2409              	.LVL275:
 2410              	.L248:
 2411 026c FF5030   		call	*48(%rax)
 2412              	.LVL276:
 2413 026f 448B8378 		movl	376(%rbx), %r8d
 2413      010000
 2414 0276 E954FFFF 		jmp	.L233
 2414      FF
 2415              	.LVL277:
 2416 027b 0F1F4400 		.p2align 4,,10
 2416      00
 2417              		.p2align 3
 2418              	.L234:
 484:fltk-1.3.4-1/src/Fl_Table.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 2419              		.loc 4 484 0
 2420 0280 400FB6D5 		movzbl	%bpl, %edx
 2421 0284 E9D4FEFF 		jmp	.L228
 2421      FF
 2422              	.LBE962:
 2423              		.cfi_endproc
 2424              	.LFE589:
 2426              		.section	.text.unlikely._ZN8Fl_Table17recalc_dimensionsEv
 2427              	.LCOLDE24:
 2428              		.section	.text._ZN8Fl_Table17recalc_dimensionsEv
 2429              	.LHOTE24:
 2430              		.section	.text.unlikely._ZN8Fl_Table14table_scrolledEv,"ax",@progbits
 2431              		.align 2
 2432              	.LCOLDB25:
 2433              		.section	.text._ZN8Fl_Table14table_scrolledEv,"ax",@progbits
 2434              	.LHOTB25:
 2435              		.align 2
 2436              		.p2align 4,,15
 2437              		.globl	_ZN8Fl_Table14table_scrolledEv
 2439              	_ZN8Fl_Table14table_scrolledEv:
 2440              	.LFB590:
 513:fltk-1.3.4-1/src/Fl_Table.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2441              		.loc 4 513 0
 2442              		.cfi_startproc
 2443              	.LVL278:
 516:fltk-1.3.4-1/src/Fl_Table.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 2444              		.loc 4 516 0
 2445 0000 448B87A0 		movl	160(%rdi), %r8d
 2445      000000
 515:fltk-1.3.4-1/src/Fl_Table.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 2446              		.loc 4 515 0
 2447 0007 4C8B9798 		movq	408(%rdi), %r10
 2447      010000
 2448              	.LVL279:
 516:fltk-1.3.4-1/src/Fl_Table.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 2449              		.loc 4 516 0
 2450 000e 4585C0   		testl	%r8d, %r8d
 2451              	.LBB997:
 2452              	.LBB998:
 2453              		.file 7 "fltk-1.3.4-1/FL/Fl_Scrollbar.H"
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
 2454              		.loc 7 65 0
 2455 0011 F2450F2C 		cvttsd2si	120(%r10), %r9d
 2455      4A78
 2456              	.LVL280:
 2457              	.LBE998:
 2458              	.LBE997:
 516:fltk-1.3.4-1/src/Fl_Table.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 2459              		.loc 4 516 0
 2460 0017 0F8E4802 		jle	.L271
 2460      0000
 2461 001d 31F6     		xorl	%esi, %esi
 2462 001f 31C0     		xorl	%eax, %eax
 2463 0021 31D2     		xorl	%edx, %edx
 2464 0023 EB13     		jmp	.L256
 2465              	.LVL281:
 2466              		.p2align 4,,10
 2467 0025 0F1F00   		.p2align 3
 2468              	.L252:
 516:fltk-1.3.4-1/src/Fl_Table.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 2469              		.loc 4 516 0 is_stmt 0 discriminator 2
 2470 0028 83C001   		addl	$1, %eax
 2471              	.LVL282:
 2472 002b 4883C604 		addq	$4, %rsi
 2473 002f 4439C0   		cmpl	%r8d, %eax
 2474 0032 0F84B001 		je	.L303
 2474      0000
 2475              	.LVL283:
 2476              	.L256:
 2477              	.LBB999:
 2478              	.LBB1000:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 2479              		.loc 3 754 0 is_stmt 1
 2480 0038 31C9     		xorl	%ecx, %ecx
 2481 003a 85C0     		testl	%eax, %eax
 2482 003c 7812     		js	.L251
 2483              	.LVL284:
 2484 003e 39870001 		cmpl	%eax, 256(%rdi)
 2484      0000
 2485 0044 7E0A     		jle	.L251
 2486              	.LVL285:
 2487 0046 488B8FF8 		movq	248(%rdi), %rcx
 2487      000000
 2488 004d 8B0C31   		movl	(%rcx,%rsi), %ecx
 2489              	.LVL286:
 2490              	.L251:
 2491              	.LBE1000:
 2492              	.LBE999:
 517:fltk-1.3.4-1/src/Fl_Table.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2493              		.loc 4 517 0
 2494 0050 01CA     		addl	%ecx, %edx
 2495              	.LVL287:
 518:fltk-1.3.4-1/src/Fl_Table.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 2496              		.loc 4 518 0
 2497 0052 4439CA   		cmpl	%r9d, %edx
 2498 0055 7ED1     		jle	.L252
 2499              	.LVL288:
 2500              	.LBB1001:
 2501              	.LBB1002:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 2502              		.loc 3 754 0
 2503 0057 31C9     		xorl	%ecx, %ecx
 2504 0059 85C0     		testl	%eax, %eax
 2505 005b 780C     		js	.L253
 2506              	.LVL289:
 2507 005d 39870001 		cmpl	%eax, 256(%rdi)
 2507      0000
 2508 0063 0F8FDF01 		jg	.L304
 2508      0000
 2509              	.LVL290:
 2510              	.L253:
 2511              	.LBE1002:
 2512              	.LBE1001:
 518:fltk-1.3.4-1/src/Fl_Table.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 2513              		.loc 4 518 0
 2514 0069 29CA     		subl	%ecx, %edx
 2515              	.LVL291:
 520:fltk-1.3.4-1/src/Fl_Table.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 2516              		.loc 4 520 0
 2517 006b 89873401 		movl	%eax, 308(%rdi)
 2517      0000
 2518 0071 8987B000 		movl	%eax, 176(%rdi)
 2518      0000
 521:fltk-1.3.4-1/src/Fl_Table.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 2519              		.loc 4 521 0
 2520 0077 89975401 		movl	%edx, 340(%rdi)
 2520      0000
 523:fltk-1.3.4-1/src/Fl_Table.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2521              		.loc 4 523 0
 2522 007d F2450F2C 		cvttsd2si	120(%r10), %r9d
 2522      4A78
 2523 0083 44038F68 		addl	360(%rdi), %r9d
 2523      010000
 2524              	.LVL292:
 524:fltk-1.3.4-1/src/Fl_Table.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 2525              		.loc 4 524 0
 2526 008a 4139C0   		cmpl	%eax, %r8d
 2527 008d 0F8E7501 		jle	.L301
 2527      0000
 2528              	.LVL293:
 2529 0093 4863C8   		movslq	%eax, %rcx
 2530 0096 48C1E102 		salq	$2, %rcx
 2531 009a EB14     		jmp	.L259
 2532 009c 0F1F4000 		.p2align 4,,10
 2533              		.p2align 3
 2534              	.L305:
 2535 00a0 83C001   		addl	$1, %eax
 2536              	.LVL294:
 2537 00a3 4883C104 		addq	$4, %rcx
 2538 00a7 4439C0   		cmpl	%r8d, %eax
 2539 00aa 0F845801 		je	.L301
 2539      0000
 2540              	.L259:
 2541              	.LVL295:
 2542              	.LBB1004:
 2543              	.LBB1005:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 2544              		.loc 3 754 0
 2545 00b0 31F6     		xorl	%esi, %esi
 2546 00b2 85C0     		testl	%eax, %eax
 2547 00b4 7812     		js	.L257
 2548              	.LVL296:
 2549 00b6 39870001 		cmpl	%eax, 256(%rdi)
 2549      0000
 2550 00bc 7E0A     		jle	.L257
 2551              	.LVL297:
 2552 00be 488BB7F8 		movq	248(%rdi), %rsi
 2552      000000
 2553 00c5 8B340E   		movl	(%rsi,%rcx), %esi
 2554              	.LVL298:
 2555              	.L257:
 2556              	.LBE1005:
 2557              	.LBE1004:
 525:fltk-1.3.4-1/src/Fl_Table.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2558              		.loc 4 525 0
 2559 00c8 01F2     		addl	%esi, %edx
 2560              	.LVL299:
 526:fltk-1.3.4-1/src/Fl_Table.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 2561              		.loc 4 526 0
 2562 00ca 4139D1   		cmpl	%edx, %r9d
 2563 00cd 7FD1     		jg	.L305
 2564              	.LVL300:
 2565              	.L258:
 531:fltk-1.3.4-1/src/Fl_Table.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 2566              		.loc 4 531 0 discriminator 4
 2567 00cf 448B87A4 		movl	164(%rdi), %r8d
 2567      000000
 530:fltk-1.3.4-1/src/Fl_Table.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 2568              		.loc 4 530 0 discriminator 4
 2569 00d6 4C8B97A0 		movq	416(%rdi), %r10
 2569      010000
 2570              	.LVL301:
 528:fltk-1.3.4-1/src/Fl_Table.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 2571              		.loc 4 528 0 discriminator 4
 2572 00dd 89873801 		movl	%eax, 312(%rdi)
 2572      0000
 2573              	.LVL302:
 531:fltk-1.3.4-1/src/Fl_Table.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 2574              		.loc 4 531 0 discriminator 4
 2575 00e3 4585C0   		testl	%r8d, %r8d
 2576              	.LBB1006:
 2577              	.LBB1007:
 2578              		.loc 7 65 0 discriminator 4
 2579 00e6 F2450F2C 		cvttsd2si	120(%r10), %r9d
 2579      4A78
 2580              	.LVL303:
 2581              	.LBE1007:
 2582              	.LBE1006:
 531:fltk-1.3.4-1/src/Fl_Table.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 2583              		.loc 4 531 0 discriminator 4
 2584 00ec 0F8E6801 		jle	.L280
 2584      0000
 531:fltk-1.3.4-1/src/Fl_Table.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 2585              		.loc 4 531 0 is_stmt 0
 2586 00f2 31F6     		xorl	%esi, %esi
 2587 00f4 31C0     		xorl	%eax, %eax
 2588 00f6 31D2     		xorl	%edx, %edx
 2589 00f8 EB16     		jmp	.L266
 2590              	.LVL304:
 2591 00fa 660F1F44 		.p2align 4,,10
 2591      0000
 2592              		.p2align 3
 2593              	.L262:
 531:fltk-1.3.4-1/src/Fl_Table.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 2594              		.loc 4 531 0 discriminator 2
 2595 0100 83C001   		addl	$1, %eax
 2596              	.LVL305:
 2597 0103 4883C604 		addq	$4, %rsi
 2598 0107 4439C0   		cmpl	%r8d, %eax
 2599 010a 0F840001 		je	.L306
 2599      0000
 2600              	.LVL306:
 2601              	.L266:
 2602              	.LBB1008:
 2603              	.LBB1009:
 2604              		.loc 3 768 0 is_stmt 1
 2605 0110 31C9     		xorl	%ecx, %ecx
 2606 0112 85C0     		testl	%eax, %eax
 2607 0114 7812     		js	.L261
 2608              	.LVL307:
 2609 0116 3987F000 		cmpl	%eax, 240(%rdi)
 2609      0000
 2610 011c 7E0A     		jle	.L261
 2611              	.LVL308:
 2612 011e 488B8FE8 		movq	232(%rdi), %rcx
 2612      000000
 2613 0125 8B0C31   		movl	(%rcx,%rsi), %ecx
 2614              	.LVL309:
 2615              	.L261:
 2616              	.LBE1009:
 2617              	.LBE1008:
 532:fltk-1.3.4-1/src/Fl_Table.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2618              		.loc 4 532 0
 2619 0128 01CA     		addl	%ecx, %edx
 2620              	.LVL310:
 533:fltk-1.3.4-1/src/Fl_Table.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 2621              		.loc 4 533 0
 2622 012a 4439CA   		cmpl	%r9d, %edx
 2623 012d 7ED1     		jle	.L262
 2624              	.LVL311:
 2625              	.LBB1010:
 2626              	.LBB1011:
 2627              		.loc 3 768 0
 2628 012f 31C9     		xorl	%ecx, %ecx
 2629 0131 85C0     		testl	%eax, %eax
 2630 0133 780C     		js	.L263
 2631              	.LVL312:
 2632 0135 3987F000 		cmpl	%eax, 240(%rdi)
 2632      0000
 2633 013b 0F8FEF00 		jg	.L307
 2633      0000
 2634              	.LVL313:
 2635              	.L263:
 2636              	.LBE1011:
 2637              	.LBE1010:
 533:fltk-1.3.4-1/src/Fl_Table.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 2638              		.loc 4 533 0
 2639 0141 29CA     		subl	%ecx, %edx
 2640              	.LVL314:
 535:fltk-1.3.4-1/src/Fl_Table.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 2641              		.loc 4 535 0
 2642 0143 89873C01 		movl	%eax, 316(%rdi)
 2642      0000
 2643 0149 8987B400 		movl	%eax, 180(%rdi)
 2643      0000
 536:fltk-1.3.4-1/src/Fl_Table.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2644              		.loc 4 536 0
 2645 014f 89975801 		movl	%edx, 344(%rdi)
 2645      0000
 540:fltk-1.3.4-1/src/Fl_Table.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 2646              		.loc 4 540 0
 2647 0155 F2450F2C 		cvttsd2si	120(%r10), %r9d
 2647      4A78
 2648 015b 44038F64 		addl	356(%rdi), %r9d
 2648      010000
 2649              	.LVL315:
 541:fltk-1.3.4-1/src/Fl_Table.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 2650              		.loc 4 541 0
 2651 0162 4439C0   		cmpl	%r8d, %eax
 2652 0165 7D79     		jge	.L302
 2653              	.LVL316:
 2654 0167 4863C8   		movslq	%eax, %rcx
 2655 016a 48C1E102 		salq	$2, %rcx
 2656 016e EB0C     		jmp	.L269
 2657              		.p2align 4,,10
 2658              		.p2align 3
 2659              	.L308:
 2660 0170 83C001   		addl	$1, %eax
 2661              	.LVL317:
 2662 0173 4883C104 		addq	$4, %rcx
 2663 0177 4439C0   		cmpl	%r8d, %eax
 2664 017a 7464     		je	.L302
 2665              	.L269:
 2666              	.LVL318:
 2667              	.LBB1013:
 2668              	.LBB1014:
 2669              		.loc 3 768 0
 2670 017c 31F6     		xorl	%esi, %esi
 2671 017e 85C0     		testl	%eax, %eax
 2672 0180 7812     		js	.L267
 2673              	.LVL319:
 2674 0182 3987F000 		cmpl	%eax, 240(%rdi)
 2674      0000
 2675 0188 7E0A     		jle	.L267
 2676              	.LVL320:
 2677 018a 488BB7E8 		movq	232(%rdi), %rsi
 2677      000000
 2678 0191 8B340E   		movl	(%rsi,%rcx), %esi
 2679              	.LVL321:
 2680              	.L267:
 2681              	.LBE1014:
 2682              	.LBE1013:
 542:fltk-1.3.4-1/src/Fl_Table.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2683              		.loc 4 542 0
 2684 0194 01F2     		addl	%esi, %edx
 2685              	.LVL322:
 543:fltk-1.3.4-1/src/Fl_Table.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 2686              		.loc 4 543 0
 2687 0196 4139D1   		cmpl	%edx, %r9d
 2688 0199 7FD5     		jg	.L308
 2689              	.LVL323:
 2690              	.L268:
 545:fltk-1.3.4-1/src/Fl_Table.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 2691              		.loc 4 545 0 discriminator 4
 2692 019b 89874001 		movl	%eax, 320(%rdi)
 2692      0000
 547:fltk-1.3.4-1/src/Fl_Table.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 2693              		.loc 4 547 0 discriminator 4
 2694 01a1 488B07   		movq	(%rdi), %rax
 2695 01a4 488B4050 		movq	80(%rax), %rax
 2696 01a8 483D0000 		cmpq	$_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii, %rax
 2696      0000
 2697 01ae 7508     		jne	.L309
 548:fltk-1.3.4-1/src/Fl_Table.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2698              		.loc 4 548 0
 2699 01b0 F3C3     		rep ret
 2700              		.p2align 4,,10
 2701 01b2 660F1F44 		.p2align 3
 2701      0000
 2702              	.L309:
 513:fltk-1.3.4-1/src/Fl_Table.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2703              		.loc 4 513 0 discriminator 4
 2704 01b8 4883EC08 		subq	$8, %rsp
 2705              		.cfi_def_cfa_offset 16
 547:fltk-1.3.4-1/src/Fl_Table.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 2706              		.loc 4 547 0 discriminator 4
 2707 01bc 31D2     		xorl	%edx, %edx
 2708 01be 4531C9   		xorl	%r9d, %r9d
 2709 01c1 6A00     		pushq	$0
 2710              		.cfi_def_cfa_offset 24
 2711 01c3 4531C0   		xorl	%r8d, %r8d
 2712 01c6 6A00     		pushq	$0
 2713              		.cfi_def_cfa_offset 32
 2714 01c8 31C9     		xorl	%ecx, %ecx
 2715 01ca BE400000 		movl	$64, %esi
 2715      00
 2716 01cf FFD0     		call	*%rax
 2717              	.LVL324:
 2718 01d1 58       		popq	%rax
 2719              		.cfi_def_cfa_offset 24
 2720 01d2 5A       		popq	%rdx
 2721              		.cfi_def_cfa_offset 16
 548:fltk-1.3.4-1/src/Fl_Table.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2722              		.loc 4 548 0 discriminator 4
 2723 01d3 4883C408 		addq	$8, %rsp
 2724              		.cfi_def_cfa_offset 8
 2725 01d7 C3       		ret
 2726              	.LVL325:
 2727 01d8 0F1F8400 		.p2align 4,,10
 2727      00000000 
 2728              		.p2align 3
 2729              	.L302:
 2730 01e0 83E801   		subl	$1, %eax
 2731              	.LVL326:
 2732 01e3 EBB6     		jmp	.L268
 2733              	.LVL327:
 2734              		.p2align 4,,10
 2735 01e5 0F1F00   		.p2align 3
 2736              	.L303:
 2737 01e8 83E801   		subl	$1, %eax
 2738              	.LVL328:
 2739 01eb 89C1     		movl	%eax, %ecx
 2740              	.LVL329:
 2741              	.L250:
 520:fltk-1.3.4-1/src/Fl_Table.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 2742              		.loc 4 520 0
 2743 01ed 898F3401 		movl	%ecx, 308(%rdi)
 2743      0000
 2744 01f3 898FB000 		movl	%ecx, 176(%rdi)
 2744      0000
 521:fltk-1.3.4-1/src/Fl_Table.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 2745              		.loc 4 521 0
 2746 01f9 89975401 		movl	%edx, 340(%rdi)
 2746      0000
 2747              	.LVL330:
 2748 01ff E9CBFEFF 		jmp	.L258
 2748      FF
 2749              	.LVL331:
 2750              		.p2align 4,,10
 2751 0204 0F1F4000 		.p2align 3
 2752              	.L301:
 2753 0208 83E801   		subl	$1, %eax
 2754              	.LVL332:
 2755 020b E9BFFEFF 		jmp	.L258
 2755      FF
 2756              	.LVL333:
 2757              		.p2align 4,,10
 2758              		.p2align 3
 2759              	.L306:
 2760 0210 83E801   		subl	$1, %eax
 2761              	.LVL334:
 2762 0213 89C1     		movl	%eax, %ecx
 2763              	.LVL335:
 2764              	.L260:
 535:fltk-1.3.4-1/src/Fl_Table.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 2765              		.loc 4 535 0
 2766 0215 898F3C01 		movl	%ecx, 316(%rdi)
 2766      0000
 2767 021b 898FB400 		movl	%ecx, 180(%rdi)
 2767      0000
 536:fltk-1.3.4-1/src/Fl_Table.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2768              		.loc 4 536 0
 2769 0221 89975801 		movl	%edx, 344(%rdi)
 2769      0000
 2770              	.LVL336:
 2771 0227 E96FFFFF 		jmp	.L268
 2771      FF
 2772              	.LVL337:
 2773 022c 0F1F4000 		.p2align 4,,10
 2774              		.p2align 3
 2775              	.L307:
 2776              	.LBB1015:
 2777              	.LBB1012:
 2778              		.loc 3 768 0
 2779 0230 488BB7E8 		movq	232(%rdi), %rsi
 2779      000000
 2780 0237 4863C8   		movslq	%eax, %rcx
 2781 023a 8B0C8E   		movl	(%rsi,%rcx,4), %ecx
 2782 023d E9FFFEFF 		jmp	.L263
 2782      FF
 2783              	.LVL338:
 2784              		.p2align 4,,10
 2785 0242 660F1F44 		.p2align 3
 2785      0000
 2786              	.L304:
 2787              	.LBE1012:
 2788              	.LBE1015:
 2789              	.LBB1016:
 2790              	.LBB1003:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 2791              		.loc 3 754 0
 2792 0248 488BB7F8 		movq	248(%rdi), %rsi
 2792      000000
 2793 024f 4863C8   		movslq	%eax, %rcx
 2794 0252 8B0C8E   		movl	(%rsi,%rcx,4), %ecx
 2795 0255 E90FFEFF 		jmp	.L253
 2795      FF
 2796              	.LVL339:
 2797              	.L280:
 2798              	.LBE1003:
 2799              	.LBE1016:
 531:fltk-1.3.4-1/src/Fl_Table.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 2800              		.loc 4 531 0
 2801 025a B9FFFFFF 		movl	$-1, %ecx
 2801      FF
 2802 025f 31D2     		xorl	%edx, %edx
 2803 0261 89C8     		movl	%ecx, %eax
 2804 0263 EBB0     		jmp	.L260
 2805              	.LVL340:
 2806              	.L271:
 516:fltk-1.3.4-1/src/Fl_Table.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 2807              		.loc 4 516 0
 2808 0265 B9FFFFFF 		movl	$-1, %ecx
 2808      FF
 2809 026a 31D2     		xorl	%edx, %edx
 2810 026c 89C8     		movl	%ecx, %eax
 2811 026e E97AFFFF 		jmp	.L250
 2811      FF
 2812              		.cfi_endproc
 2813              	.LFE590:
 2815              		.section	.text.unlikely._ZN8Fl_Table14table_scrolledEv
 2816              	.LCOLDE25:
 2817              		.section	.text._ZN8Fl_Table14table_scrolledEv
 2818              	.LHOTE25:
 2819              		.section	.text.unlikely._ZN8Fl_Table12row_positionEi,"ax",@progbits
 2820              		.align 2
 2821              	.LCOLDB26:
 2822              		.section	.text._ZN8Fl_Table12row_positionEi,"ax",@progbits
 2823              	.LHOTB26:
 2824              		.align 2
 2825              		.p2align 4,,15
 2826              		.globl	_ZN8Fl_Table12row_positionEi
 2828              	_ZN8Fl_Table12row_positionEi:
 2829              	.LFB568:
  29:fltk-1.3.4-1/src/Fl_Table.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 2830              		.loc 4 29 0
 2831              		.cfi_startproc
 2832              	.LVL341:
  30:fltk-1.3.4-1/src/Fl_Table.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
 2833              		.loc 4 30 0
 2834 0000 39B7B000 		cmpl	%esi, 176(%rdi)
 2834      0000
 2835 0006 0F84C000 		je	.L326
 2835      0000
  29:fltk-1.3.4-1/src/Fl_Table.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 2836              		.loc 4 29 0
 2837 000c 55       		pushq	%rbp
 2838              		.cfi_def_cfa_offset 16
 2839              		.cfi_offset 6, -16
 2840 000d 53       		pushq	%rbx
 2841              		.cfi_def_cfa_offset 24
 2842              		.cfi_offset 3, -24
 2843 000e 89F5     		movl	%esi, %ebp
 2844 0010 4889FB   		movq	%rdi, %rbx
 2845 0013 4883EC08 		subq	$8, %rsp
 2846              		.cfi_def_cfa_offset 32
  31:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 2847              		.loc 4 31 0
 2848 0017 85F6     		testl	%esi, %esi
 2849 0019 0F88C100 		js	.L318
 2849      0000
 2850 001f 8B87A000 		movl	160(%rdi), %eax
 2850      0000
 2851              	.LVL342:
  32:fltk-1.3.4-1/src/Fl_Table.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 2852              		.loc 4 32 0
 2853 0025 8D50FF   		leal	-1(%rax), %edx
 2854 0028 39C6     		cmpl	%eax, %esi
 2855 002a 0F4DEA   		cmovge	%edx, %ebp
 2856              	.LVL343:
 2857              	.L312:
  33:fltk-1.3.4-1/src/Fl_Table.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 2858              		.loc 4 33 0
 2859 002d 8B836801 		movl	360(%rbx), %eax
 2859      0000
 2860 0033 39833001 		cmpl	%eax, 304(%rbx)
 2860      0000
 2861 0039 0F8E8700 		jle	.L310
 2861      0000
 2862              	.LVL344:
 2863              	.LBB1017:
 2864              	.LBB1018:
  67:fltk-1.3.4-1/src/Fl_Table.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 2865              		.loc 4 67 0
 2866 003f 48638B54 		movslq	340(%rbx), %rcx
 2866      010000
 2867 0046 83F9FF   		cmpl	$-1, %ecx
 2868 0049 0F848100 		je	.L320
 2868      0000
 2869 004f 8B833401 		movl	308(%rbx), %eax
 2869      0000
 2870 0055 39C5     		cmpl	%eax, %ebp
 2871 0057 7C77     		jl	.L320
 2872              	.L313:
 2873              	.LVL345:
 2874              	.LBB1019:
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 2875              		.loc 4 71 0
 2876 0059 39C5     		cmpl	%eax, %ebp
 2877 005b 7E32     		jle	.L314
 2878 005d 4863D0   		movslq	%eax, %rdx
 2879 0060 48C1E202 		salq	$2, %rdx
 2880              	.LVL346:
 2881              		.p2align 4,,10
 2882 0064 0F1F4000 		.p2align 3
 2883              	.L316:
 2884              	.LBB1020:
 2885              	.LBB1021:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 2886              		.loc 3 754 0
 2887 0068 31FF     		xorl	%edi, %edi
 2888 006a 85C0     		testl	%eax, %eax
 2889 006c 7813     		js	.L315
 2890              	.LVL347:
 2891 006e 39830001 		cmpl	%eax, 256(%rbx)
 2891      0000
 2892 0074 7E0B     		jle	.L315
 2893              	.LVL348:
 2894 0076 488BB3F8 		movq	248(%rbx), %rsi
 2894      000000
 2895 007d 48633C16 		movslq	(%rsi,%rdx), %rdi
 2896              	.LVL349:
 2897              	.L315:
 2898              	.LBE1021:
 2899              	.LBE1020:
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 2900              		.loc 4 71 0
 2901 0081 83C001   		addl	$1, %eax
 2902              	.LVL350:
  72:fltk-1.3.4-1/src/Fl_Table.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2903              		.loc 4 72 0
 2904 0084 4801F9   		addq	%rdi, %rcx
 2905              	.LVL351:
 2906 0087 4883C204 		addq	$4, %rdx
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 2907              		.loc 4 71 0
 2908 008b 39C5     		cmpl	%eax, %ebp
 2909 008d 75D9     		jne	.L316
 2910              	.L314:
 2911              	.LVL352:
 2912              	.LBE1019:
 2913              	.LBE1018:
 2914              	.LBE1017:
  34:fltk-1.3.4-1/src/Fl_Table.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2915              		.loc 4 34 0
 2916 008f 660FEFC9 		pxor	%xmm1, %xmm1
  35:fltk-1.3.4-1/src/Fl_Table.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
 2917              		.loc 4 35 0
 2918 0093 488BBB98 		movq	408(%rbx), %rdi
 2918      010000
  34:fltk-1.3.4-1/src/Fl_Table.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2919              		.loc 4 34 0
 2920 009a F2480F2A 		cvtsi2sdq	%rcx, %xmm1
 2920      C9
 2921              	.LVL353:
 2922 009f F20F1087 		movsd	144(%rdi), %xmm0
 2922      90000000 
 2923              	.LVL354:
 2924 00a7 F20F5DC1 		minsd	%xmm1, %xmm0
 2925              	.LVL355:
  38:fltk-1.3.4-1/src/Fl_Table.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 2926              		.loc 4 38 0
 2927 00ab E8000000 		call	_ZN11Fl_Valuator5valueEd
 2927      00
 2928              	.LVL356:
  39:fltk-1.3.4-1/src/Fl_Table.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 2929              		.loc 4 39 0
 2930 00b0 4889DF   		movq	%rbx, %rdi
 2931 00b3 E8000000 		call	_ZN8Fl_Table14table_scrolledEv
 2931      00
 2932              	.LVL357:
  40:fltk-1.3.4-1/src/Fl_Table.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2933              		.loc 4 40 0
 2934 00b8 4889DF   		movq	%rbx, %rdi
 2935 00bb E8000000 		call	_ZN9Fl_Widget6redrawEv
 2935      00
 2936              	.LVL358:
  41:fltk-1.3.4-1/src/Fl_Table.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 2937              		.loc 4 41 0
 2938 00c0 89ABB000 		movl	%ebp, 176(%rbx)
 2938      0000
 2939              	.LVL359:
 2940              	.L310:
  42:fltk-1.3.4-1/src/Fl_Table.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2941              		.loc 4 42 0
 2942 00c6 4883C408 		addq	$8, %rsp
 2943              		.cfi_def_cfa_offset 24
 2944 00ca 5B       		popq	%rbx
 2945              		.cfi_restore 3
 2946              		.cfi_def_cfa_offset 16
 2947              	.LVL360:
 2948 00cb 5D       		popq	%rbp
 2949              		.cfi_restore 6
 2950              		.cfi_def_cfa_offset 8
 2951              	.LVL361:
 2952              	.L326:
 2953 00cc F3C3     		rep ret
 2954              	.LVL362:
 2955 00ce 6690     		.p2align 4,,10
 2956              		.p2align 3
 2957              	.L320:
 2958              		.cfi_def_cfa_offset 32
 2959              		.cfi_offset 3, -24
 2960              		.cfi_offset 6, -16
 2961              	.LBB1023:
 2962              	.LBB1022:
  62:fltk-1.3.4-1/src/Fl_Table.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 2963              		.loc 4 62 0
 2964 00d0 31C0     		xorl	%eax, %eax
  63:fltk-1.3.4-1/src/Fl_Table.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2965              		.loc 4 63 0
 2966 00d2 31C9     		xorl	%ecx, %ecx
 2967 00d4 E980FFFF 		jmp	.L313
 2967      FF
 2968              	.LVL363:
 2969 00d9 0F1F8000 		.p2align 4,,10
 2969      000000
 2970              		.p2align 3
 2971              	.L318:
 2972              	.LBE1022:
 2973              	.LBE1023:
  31:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 2974              		.loc 4 31 0
 2975 00e0 31ED     		xorl	%ebp, %ebp
 2976 00e2 E946FFFF 		jmp	.L312
 2976      FF
 2977              		.cfi_endproc
 2978              	.LFE568:
 2980              		.section	.text.unlikely._ZN8Fl_Table12row_positionEi
 2981              	.LCOLDE26:
 2982              		.section	.text._ZN8Fl_Table12row_positionEi
 2983              	.LHOTE26:
 2984              		.section	.text.unlikely._ZN8Fl_Table12col_positionEi,"ax",@progbits
 2985              		.align 2
 2986              	.LCOLDB27:
 2987              		.section	.text._ZN8Fl_Table12col_positionEi,"ax",@progbits
 2988              	.LHOTB27:
 2989              		.align 2
 2990              		.p2align 4,,15
 2991              		.globl	_ZN8Fl_Table12col_positionEi
 2993              	_ZN8Fl_Table12col_positionEi:
 2994              	.LFB569:
  45:fltk-1.3.4-1/src/Fl_Table.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 2995              		.loc 4 45 0
 2996              		.cfi_startproc
 2997              	.LVL364:
  46:fltk-1.3.4-1/src/Fl_Table.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 2998              		.loc 4 46 0
 2999 0000 39B7B400 		cmpl	%esi, 180(%rdi)
 2999      0000
 3000 0006 0F84C000 		je	.L343
 3000      0000
  45:fltk-1.3.4-1/src/Fl_Table.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 3001              		.loc 4 45 0
 3002 000c 55       		pushq	%rbp
 3003              		.cfi_def_cfa_offset 16
 3004              		.cfi_offset 6, -16
 3005 000d 53       		pushq	%rbx
 3006              		.cfi_def_cfa_offset 24
 3007              		.cfi_offset 3, -24
 3008 000e 89F5     		movl	%esi, %ebp
 3009 0010 4889FB   		movq	%rdi, %rbx
 3010 0013 4883EC08 		subq	$8, %rsp
 3011              		.cfi_def_cfa_offset 32
  47:fltk-1.3.4-1/src/Fl_Table.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 3012              		.loc 4 47 0
 3013 0017 85F6     		testl	%esi, %esi
 3014 0019 0F88C100 		js	.L335
 3014      0000
 3015 001f 8B87A400 		movl	164(%rdi), %eax
 3015      0000
 3016              	.LVL365:
  48:fltk-1.3.4-1/src/Fl_Table.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 3017              		.loc 4 48 0
 3018 0025 8D50FF   		leal	-1(%rax), %edx
 3019 0028 39C6     		cmpl	%eax, %esi
 3020 002a 0F4DEA   		cmovge	%edx, %ebp
 3021              	.LVL366:
 3022              	.L329:
  49:fltk-1.3.4-1/src/Fl_Table.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 3023              		.loc 4 49 0
 3024 002d 8B836401 		movl	356(%rbx), %eax
 3024      0000
 3025 0033 39832C01 		cmpl	%eax, 300(%rbx)
 3025      0000
 3026 0039 0F8E8700 		jle	.L327
 3026      0000
 3027              	.LVL367:
 3028              	.LBB1024:
 3029              	.LBB1025:
  84:fltk-1.3.4-1/src/Fl_Table.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 3030              		.loc 4 84 0
 3031 003f 48638B58 		movslq	344(%rbx), %rcx
 3031      010000
 3032 0046 83F9FF   		cmpl	$-1, %ecx
 3033 0049 0F848100 		je	.L337
 3033      0000
 3034 004f 8B833C01 		movl	316(%rbx), %eax
 3034      0000
 3035 0055 39C5     		cmpl	%eax, %ebp
 3036 0057 7C77     		jl	.L337
 3037              	.L330:
 3038              	.LVL368:
 3039              	.LBB1026:
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 3040              		.loc 4 88 0
 3041 0059 39C5     		cmpl	%eax, %ebp
 3042 005b 7E32     		jle	.L331
 3043 005d 4863D0   		movslq	%eax, %rdx
 3044 0060 48C1E202 		salq	$2, %rdx
 3045              	.LVL369:
 3046              		.p2align 4,,10
 3047 0064 0F1F4000 		.p2align 3
 3048              	.L333:
 3049              	.LBB1027:
 3050              	.LBB1028:
 3051              		.loc 3 768 0
 3052 0068 31FF     		xorl	%edi, %edi
 3053 006a 85C0     		testl	%eax, %eax
 3054 006c 7813     		js	.L332
 3055              	.LVL370:
 3056 006e 3983F000 		cmpl	%eax, 240(%rbx)
 3056      0000
 3057 0074 7E0B     		jle	.L332
 3058              	.LVL371:
 3059 0076 488BB3E8 		movq	232(%rbx), %rsi
 3059      000000
 3060 007d 48633C16 		movslq	(%rsi,%rdx), %rdi
 3061              	.LVL372:
 3062              	.L332:
 3063              	.LBE1028:
 3064              	.LBE1027:
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 3065              		.loc 4 88 0
 3066 0081 83C001   		addl	$1, %eax
 3067              	.LVL373:
  89:fltk-1.3.4-1/src/Fl_Table.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 3068              		.loc 4 89 0
 3069 0084 4801F9   		addq	%rdi, %rcx
 3070              	.LVL374:
 3071 0087 4883C204 		addq	$4, %rdx
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 3072              		.loc 4 88 0
 3073 008b 39C5     		cmpl	%eax, %ebp
 3074 008d 75D9     		jne	.L333
 3075              	.L331:
 3076              	.LVL375:
 3077              	.LBE1026:
 3078              	.LBE1025:
 3079              	.LBE1024:
  50:fltk-1.3.4-1/src/Fl_Table.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 3080              		.loc 4 50 0
 3081 008f 660FEFC9 		pxor	%xmm1, %xmm1
  51:fltk-1.3.4-1/src/Fl_Table.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 3082              		.loc 4 51 0
 3083 0093 488BBBA0 		movq	416(%rbx), %rdi
 3083      010000
  50:fltk-1.3.4-1/src/Fl_Table.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 3084              		.loc 4 50 0
 3085 009a F2480F2A 		cvtsi2sdq	%rcx, %xmm1
 3085      C9
 3086              	.LVL376:
 3087 009f F20F1087 		movsd	144(%rdi), %xmm0
 3087      90000000 
 3088              	.LVL377:
 3089 00a7 F20F5DC1 		minsd	%xmm1, %xmm0
 3090              	.LVL378:
  54:fltk-1.3.4-1/src/Fl_Table.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 3091              		.loc 4 54 0
 3092 00ab E8000000 		call	_ZN11Fl_Valuator5valueEd
 3092      00
 3093              	.LVL379:
  55:fltk-1.3.4-1/src/Fl_Table.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 3094              		.loc 4 55 0
 3095 00b0 4889DF   		movq	%rbx, %rdi
 3096 00b3 E8000000 		call	_ZN8Fl_Table14table_scrolledEv
 3096      00
 3097              	.LVL380:
  56:fltk-1.3.4-1/src/Fl_Table.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 3098              		.loc 4 56 0
 3099 00b8 4889DF   		movq	%rbx, %rdi
 3100 00bb E8000000 		call	_ZN9Fl_Widget6redrawEv
 3100      00
 3101              	.LVL381:
  57:fltk-1.3.4-1/src/Fl_Table.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 3102              		.loc 4 57 0
 3103 00c0 89ABB400 		movl	%ebp, 180(%rbx)
 3103      0000
 3104              	.LVL382:
 3105              	.L327:
  58:fltk-1.3.4-1/src/Fl_Table.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3106              		.loc 4 58 0
 3107 00c6 4883C408 		addq	$8, %rsp
 3108              		.cfi_def_cfa_offset 24
 3109 00ca 5B       		popq	%rbx
 3110              		.cfi_restore 3
 3111              		.cfi_def_cfa_offset 16
 3112              	.LVL383:
 3113 00cb 5D       		popq	%rbp
 3114              		.cfi_restore 6
 3115              		.cfi_def_cfa_offset 8
 3116              	.LVL384:
 3117              	.L343:
 3118 00cc F3C3     		rep ret
 3119              	.LVL385:
 3120 00ce 6690     		.p2align 4,,10
 3121              		.p2align 3
 3122              	.L337:
 3123              		.cfi_def_cfa_offset 32
 3124              		.cfi_offset 3, -24
 3125              		.cfi_offset 6, -16
 3126              	.LBB1030:
 3127              	.LBB1029:
  79:fltk-1.3.4-1/src/Fl_Table.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 3128              		.loc 4 79 0
 3129 00d0 31C0     		xorl	%eax, %eax
  80:fltk-1.3.4-1/src/Fl_Table.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 3130              		.loc 4 80 0
 3131 00d2 31C9     		xorl	%ecx, %ecx
 3132 00d4 E980FFFF 		jmp	.L330
 3132      FF
 3133              	.LVL386:
 3134 00d9 0F1F8000 		.p2align 4,,10
 3134      000000
 3135              		.p2align 3
 3136              	.L335:
 3137              	.LBE1029:
 3138              	.LBE1030:
  47:fltk-1.3.4-1/src/Fl_Table.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 3139              		.loc 4 47 0
 3140 00e0 31ED     		xorl	%ebp, %ebp
 3141 00e2 E946FFFF 		jmp	.L329
 3141      FF
 3142              		.cfi_endproc
 3143              	.LFE569:
 3145              		.section	.text.unlikely._ZN8Fl_Table12col_positionEi
 3146              	.LCOLDE27:
 3147              		.section	.text._ZN8Fl_Table12col_positionEi
 3148              	.LHOTE27:
 3149              		.section	.text.unlikely._ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv,"ax",@progbits
 3150              		.align 2
 3151              	.LCOLDB28:
 3152              		.section	.text._ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv,"ax",@progbits
 3153              	.LHOTB28:
 3154              		.align 2
 3155              		.p2align 4,,15
 3156              		.globl	_ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv
 3158              	_ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv:
 3159              	.LFB592:
 602:fltk-1.3.4-1/src/Fl_Table.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3160              		.loc 4 602 0
 3161              		.cfi_startproc
 3162              	.LVL387:
 3163 0000 53       		pushq	%rbx
 3164              		.cfi_def_cfa_offset 16
 3165              		.cfi_offset 3, -16
 604:fltk-1.3.4-1/src/Fl_Table.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3166              		.loc 4 604 0
 3167 0001 4889F7   		movq	%rsi, %rdi
 3168              	.LVL388:
 602:fltk-1.3.4-1/src/Fl_Table.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3169              		.loc 4 602 0
 3170 0004 4889F3   		movq	%rsi, %rbx
 604:fltk-1.3.4-1/src/Fl_Table.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3171              		.loc 4 604 0
 3172 0007 E8000000 		call	_ZN8Fl_Table17recalc_dimensionsEv
 3172      00
 3173              	.LVL389:
 605:fltk-1.3.4-1/src/Fl_Table.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 3174              		.loc 4 605 0
 3175 000c 4889DF   		movq	%rbx, %rdi
 3176 000f E8000000 		call	_ZN8Fl_Table14table_scrolledEv
 3176      00
 3177              	.LVL390:
 606:fltk-1.3.4-1/src/Fl_Table.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 3178              		.loc 4 606 0
 3179 0014 4889DF   		movq	%rbx, %rdi
 607:fltk-1.3.4-1/src/Fl_Table.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 3180              		.loc 4 607 0
 3181 0017 5B       		popq	%rbx
 3182              		.cfi_def_cfa_offset 8
 3183              	.LVL391:
 606:fltk-1.3.4-1/src/Fl_Table.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 3184              		.loc 4 606 0
 3185 0018 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 3185      00
 3186              	.LVL392:
 3187              		.cfi_endproc
 3188              	.LFE592:
 3190              		.section	.text.unlikely._ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv
 3191              	.LCOLDE28:
 3192              		.section	.text._ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv
 3193              	.LHOTE28:
 3194              		.section	.text.unlikely._ZN8Fl_Table13table_resizedEv,"ax",@progbits
 3195              		.align 2
 3196              	.LCOLDB31:
 3197              		.section	.text._ZN8Fl_Table13table_resizedEv,"ax",@progbits
 3198              	.LHOTB31:
 3199              		.align 2
 3200              		.p2align 4,,15
 3201              		.globl	_ZN8Fl_Table13table_resizedEv
 3203              	_ZN8Fl_Table13table_resizedEv:
 3204              	.LFB591:
 555:fltk-1.3.4-1/src/Fl_Table.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3205              		.loc 4 555 0
 3206              		.cfi_startproc
 3207              	.LVL393:
 3208 0000 4154     		pushq	%r12
 3209              		.cfi_def_cfa_offset 16
 3210              		.cfi_offset 12, -16
 3211 0002 55       		pushq	%rbp
 3212              		.cfi_def_cfa_offset 24
 3213              		.cfi_offset 6, -24
 3214 0003 53       		pushq	%rbx
 3215              		.cfi_def_cfa_offset 32
 3216              		.cfi_offset 3, -32
 3217 0004 4889FB   		movq	%rdi, %rbx
 3218 0007 4883EC10 		subq	$16, %rsp
 3219              		.cfi_def_cfa_offset 48
 3220              	.LBB1031:
 3221              	.LBB1032:
  67:fltk-1.3.4-1/src/Fl_Table.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 3222              		.loc 4 67 0
 3223 000b 48638B54 		movslq	340(%rbx), %rcx
 3223      010000
 3224 0012 8BBFA000 		movl	160(%rdi), %edi
 3224      0000
 3225              	.LVL394:
 3226 0018 83F9FF   		cmpl	$-1, %ecx
 3227 001b 0F84A702 		je	.L360
 3227      0000
 3228 0021 8B833401 		movl	308(%rbx), %eax
 3228      0000
 3229 0027 39C7     		cmpl	%eax, %edi
 3230 0029 0F8C9902 		jl	.L360
 3230      0000
 3231              	.L347:
 3232              	.LVL395:
 3233              	.LBB1033:
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 3234              		.loc 4 71 0
 3235 002f 39C7     		cmpl	%eax, %edi
 3236 0031 7E34     		jle	.L348
 3237 0033 4863D0   		movslq	%eax, %rdx
 3238 0036 48C1E202 		salq	$2, %rdx
 3239 003a 660F1F44 		.p2align 4,,10
 3239      0000
 3240              		.p2align 3
 3241              	.L350:
 3242              	.LVL396:
 3243              	.LBB1034:
 3244              	.LBB1035:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 3245              		.loc 3 754 0
 3246 0040 31F6     		xorl	%esi, %esi
 3247 0042 85C0     		testl	%eax, %eax
 3248 0044 7813     		js	.L349
 3249              	.LVL397:
 3250 0046 39830001 		cmpl	%eax, 256(%rbx)
 3250      0000
 3251 004c 7E0B     		jle	.L349
 3252              	.LVL398:
 3253 004e 488BB3F8 		movq	248(%rbx), %rsi
 3253      000000
 3254 0055 48633416 		movslq	(%rsi,%rdx), %rsi
 3255              	.LVL399:
 3256              	.L349:
 3257              	.LBE1035:
 3258              	.LBE1034:
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 3259              		.loc 4 71 0
 3260 0059 83C001   		addl	$1, %eax
 3261              	.LVL400:
  72:fltk-1.3.4-1/src/Fl_Table.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3262              		.loc 4 72 0
 3263 005c 4801F1   		addq	%rsi, %rcx
 3264              	.LVL401:
 3265 005f 4883C204 		addq	$4, %rdx
  71:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 3266              		.loc 4 71 0
 3267 0063 39C7     		cmpl	%eax, %edi
 3268 0065 75D9     		jne	.L350
 3269              	.L348:
 3270              	.LVL402:
 3271              	.LBE1033:
 3272              	.LBE1032:
 3273              	.LBE1031:
 556:fltk-1.3.4-1/src/Fl_Table.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 3274              		.loc 4 556 0
 3275 0067 898B3001 		movl	%ecx, 304(%rbx)
 3275      0000
 3276              	.LBB1037:
 3277              	.LBB1038:
  84:fltk-1.3.4-1/src/Fl_Table.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 3278              		.loc 4 84 0
 3279 006d 48638B58 		movslq	344(%rbx), %rcx
 3279      010000
 3280 0074 8BBBA400 		movl	164(%rbx), %edi
 3280      0000
 3281              	.LVL403:
 3282 007a 83F9FF   		cmpl	$-1, %ecx
 3283 007d 0F843502 		je	.L364
 3283      0000
 3284 0083 8B833C01 		movl	316(%rbx), %eax
 3284      0000
 3285 0089 39F8     		cmpl	%edi, %eax
 3286 008b 0F8F2702 		jg	.L364
 3286      0000
 3287              	.L351:
 3288              	.LVL404:
 3289              	.LBB1039:
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 3290              		.loc 4 88 0
 3291 0091 39C7     		cmpl	%eax, %edi
 3292 0093 7E32     		jle	.L352
 3293 0095 4863D0   		movslq	%eax, %rdx
 3294 0098 48C1E202 		salq	$2, %rdx
 3295 009c 0F1F4000 		.p2align 4,,10
 3296              		.p2align 3
 3297              	.L354:
 3298              	.LVL405:
 3299              	.LBB1040:
 3300              	.LBB1041:
 3301              		.loc 3 768 0
 3302 00a0 31F6     		xorl	%esi, %esi
 3303 00a2 85C0     		testl	%eax, %eax
 3304 00a4 7813     		js	.L353
 3305              	.LVL406:
 3306 00a6 3983F000 		cmpl	%eax, 240(%rbx)
 3306      0000
 3307 00ac 7E0B     		jle	.L353
 3308              	.LVL407:
 3309 00ae 488BB3E8 		movq	232(%rbx), %rsi
 3309      000000
 3310 00b5 48633416 		movslq	(%rsi,%rdx), %rsi
 3311              	.LVL408:
 3312              	.L353:
 3313              	.LBE1041:
 3314              	.LBE1040:
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 3315              		.loc 4 88 0
 3316 00b9 83C001   		addl	$1, %eax
 3317              	.LVL409:
  89:fltk-1.3.4-1/src/Fl_Table.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 3318              		.loc 4 89 0
 3319 00bc 4801F1   		addq	%rsi, %rcx
 3320              	.LVL410:
 3321 00bf 4883C204 		addq	$4, %rdx
  88:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 3322              		.loc 4 88 0
 3323 00c3 39C7     		cmpl	%eax, %edi
 3324 00c5 75D9     		jne	.L354
 3325              	.L352:
 3326              	.LVL411:
 3327              	.LBE1039:
 3328              	.LBE1038:
 3329              	.LBE1037:
 557:fltk-1.3.4-1/src/Fl_Table.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3330              		.loc 4 557 0
 3331 00c7 898B2C01 		movl	%ecx, 300(%rbx)
 3331      0000
 558:fltk-1.3.4-1/src/Fl_Table.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 3332              		.loc 4 558 0
 3333 00cd 4889DF   		movq	%rbx, %rdi
 3334 00d0 E8000000 		call	_ZN8Fl_Table17recalc_dimensionsEv
 3334      00
 3335              	.LVL412:
 3336              	.LBB1043:
 565:fltk-1.3.4-1/src/Fl_Table.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 3337              		.loc 4 565 0
 3338 00d5 8B833001 		movl	304(%rbx), %eax
 3338      0000
 3339 00db F30F101D 		movss	.LC29(%rip), %xmm3
 3339      00000000 
 3340 00e3 85C0     		testl	%eax, %eax
 3341 00e5 740E     		je	.L355
 565:fltk-1.3.4-1/src/Fl_Table.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 3342              		.loc 4 565 0 is_stmt 0 discriminator 1
 3343 00e7 8B936801 		movl	360(%rbx), %edx
 3343      0000
 3344 00ed 39D0     		cmpl	%edx, %eax
 3345 00ef 0F8DE301 		jge	.L378
 3345      0000
 3346              	.L355:
 3347              	.LVL413:
 566:fltk-1.3.4-1/src/Fl_Table.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 3348              		.loc 4 566 0 is_stmt 1 discriminator 6
 3349 00f5 8B832C01 		movl	300(%rbx), %eax
 3349      0000
 3350 00fb F30F1015 		movss	.LC29(%rip), %xmm2
 3350      00000000 
 3351 0103 85C0     		testl	%eax, %eax
 3352 0105 741E     		je	.L356
 566:fltk-1.3.4-1/src/Fl_Table.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 3353              		.loc 4 566 0 is_stmt 0 discriminator 1
 3354 0107 8B936401 		movl	356(%rbx), %edx
 3354      0000
 3355 010d 39D0     		cmpl	%edx, %eax
 3356 010f 7C14     		jl	.L356
 566:fltk-1.3.4-1/src/Fl_Table.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 3357              		.loc 4 566 0 discriminator 3
 3358 0111 660FEFD2 		pxor	%xmm2, %xmm2
 3359 0115 660FEFC0 		pxor	%xmm0, %xmm0
 3360 0119 F30F2AD2 		cvtsi2ss	%edx, %xmm2
 3361 011d F30F2AC0 		cvtsi2ss	%eax, %xmm0
 3362 0121 F30F5ED0 		divss	%xmm0, %xmm2
 3363              	.L356:
 3364 0125 F30F1154 		movss	%xmm2, 12(%rsp)
 3364      240C
 577:fltk-1.3.4-1/src/Fl_Table.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 3365              		.loc 4 577 0 is_stmt 1 discriminator 6
 3366 012b 4531E4   		xorl	%r12d, %r12d
 3367 012e F30F115C 		movss	%xmm3, 8(%rsp)
 3367      2408
 3368              	.LVL414:
 572:fltk-1.3.4-1/src/Fl_Table.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3369              		.loc 4 572 0 discriminator 6
 3370 0134 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 3370      00
 3371              	.LVL415:
 3372 0139 89C5     		movl	%eax, %ebp
 3373              	.LVL416:
 574:fltk-1.3.4-1/src/Fl_Table.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3374              		.loc 4 574 0 discriminator 6
 3375 013b 8B833001 		movl	304(%rbx), %eax
 3375      0000
 3376              	.LVL417:
 3377 0141 2B836801 		subl	360(%rbx), %eax
 3377      0000
 3378 0147 488BBB98 		movq	408(%rbx), %rdi
 3378      010000
 3379 014e 660FEFC9 		pxor	%xmm1, %xmm1
 3380 0152 660FEFC0 		pxor	%xmm0, %xmm0
 3381 0156 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 3382 015a E8000000 		call	_ZN9Fl_Slider6boundsEdd
 3382      00
 3383              	.LVL418:
 575:fltk-1.3.4-1/src/Fl_Table.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 3384              		.loc 4 575 0 discriminator 6
 3385 015f 488BBB98 		movq	408(%rbx), %rdi
 3385      010000
 3386 0166 BE0A0000 		movl	$10, %esi
 3386      00
 3387 016b E8000000 		call	_ZN11Fl_Valuator9precisionEi
 3387      00
 3388              	.LVL419:
 576:fltk-1.3.4-1/src/Fl_Table.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3389              		.loc 4 576 0 discriminator 6
 3390 0170 660FEFC0 		pxor	%xmm0, %xmm0
 3391 0174 488BBB98 		movq	408(%rbx), %rdi
 3391      010000
 3392 017b F30F105C 		movss	8(%rsp), %xmm3
 3392      2408
 3393 0181 F30F5AC3 		cvtss2sd	%xmm3, %xmm0
 3394 0185 E8000000 		call	_ZN9Fl_Slider11slider_sizeEd
 3394      00
 3395              	.LVL420:
 3396 018a 488B93A0 		movq	416(%rbx), %rdx
 3396      010000
 577:fltk-1.3.4-1/src/Fl_Table.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 3397              		.loc 4 577 0 discriminator 6
 3398 0191 488BBB98 		movq	408(%rbx), %rdi
 3398      010000
 3399 0198 4489E1   		movl	%r12d, %ecx
 579:fltk-1.3.4-1/src/Fl_Table.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 3400              		.loc 4 579 0 discriminator 6
 3401 019b 8BB38401 		movl	388(%rbx), %esi
 3401      0000
 3402 01a1 448B8388 		movl	392(%rbx), %r8d
 3402      010000
 577:fltk-1.3.4-1/src/Fl_Table.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 3403              		.loc 4 577 0 discriminator 6
 3404 01a8 F6426002 		testb	$2, 96(%rdx)
 579:fltk-1.3.4-1/src/Fl_Table.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 3405              		.loc 4 579 0 discriminator 6
 3406 01ac 488B07   		movq	(%rdi), %rax
 3407 01af 8B938001 		movl	384(%rbx), %edx
 3407      0000
 577:fltk-1.3.4-1/src/Fl_Table.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 3408              		.loc 4 577 0 discriminator 6
 3409 01b5 0F44CD   		cmove	%ebp, %ecx
 579:fltk-1.3.4-1/src/Fl_Table.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 3410              		.loc 4 579 0 discriminator 6
 3411 01b8 03B37C01 		addl	380(%rbx), %esi
 3411      0000
 3412 01be 4129C8   		subl	%ecx, %r8d
 3413 01c1 89E9     		movl	%ebp, %ecx
 3414 01c3 29EE     		subl	%ebp, %esi
 3415 01c5 FF5020   		call	*32(%rax)
 3416              	.LVL421:
 580:fltk-1.3.4-1/src/Fl_Table.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3417              		.loc 4 580 0 discriminator 6
 3418 01c8 488BBB98 		movq	408(%rbx), %rdi
 3418      010000
 3419              	.LVL422:
 3420 01cf 660FEFC0 		pxor	%xmm0, %xmm0
 3421 01d3 F20F2C47 		cvttsd2si	120(%rdi), %eax
 3421      78
 3422 01d8 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 3423 01dc E8000000 		call	_ZN11Fl_Valuator5clampEd
 3423      00
 3424              	.LVL423:
 3425 01e1 488BBB98 		movq	408(%rbx), %rdi
 3425      010000
 3426 01e8 E8000000 		call	_ZN11Fl_Valuator5valueEd
 3426      00
 3427              	.LVL424:
 582:fltk-1.3.4-1/src/Fl_Table.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 3428              		.loc 4 582 0 discriminator 6
 3429 01ed 8B832C01 		movl	300(%rbx), %eax
 3429      0000
 3430 01f3 2B836401 		subl	356(%rbx), %eax
 3430      0000
 3431 01f9 660FEFC9 		pxor	%xmm1, %xmm1
 3432 01fd 488BBBA0 		movq	416(%rbx), %rdi
 3432      010000
 3433 0204 660FEFC0 		pxor	%xmm0, %xmm0
 3434 0208 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 3435 020c E8000000 		call	_ZN9Fl_Slider6boundsEdd
 3435      00
 3436              	.LVL425:
 583:fltk-1.3.4-1/src/Fl_Table.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3437              		.loc 4 583 0 discriminator 6
 3438 0211 488BBBA0 		movq	416(%rbx), %rdi
 3438      010000
 3439 0218 BE0A0000 		movl	$10, %esi
 3439      00
 3440 021d E8000000 		call	_ZN11Fl_Valuator9precisionEi
 3440      00
 3441              	.LVL426:
 584:fltk-1.3.4-1/src/Fl_Table.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 3442              		.loc 4 584 0 discriminator 6
 3443 0222 660FEFC0 		pxor	%xmm0, %xmm0
 3444 0226 488BBBA0 		movq	416(%rbx), %rdi
 3444      010000
 3445 022d F30F1054 		movss	12(%rsp), %xmm2
 3445      240C
 3446 0233 F30F5AC2 		cvtss2sd	%xmm2, %xmm0
 3447 0237 E8000000 		call	_ZN9Fl_Slider11slider_sizeEd
 3447      00
 3448              	.LVL427:
 3449 023c 488B9398 		movq	408(%rbx), %rdx
 3449      010000
 585:fltk-1.3.4-1/src/Fl_Table.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3450              		.loc 4 585 0 discriminator 6
 3451 0243 488BBBA0 		movq	416(%rbx), %rdi
 3451      010000
 587:fltk-1.3.4-1/src/Fl_Table.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3452              		.loc 4 587 0 discriminator 6
 3453 024a 4189E8   		movl	%ebp, %r8d
 3454 024d 8B8B8401 		movl	388(%rbx), %ecx
 3454      0000
 3455 0253 8BB37C01 		movl	380(%rbx), %esi
 3455      0000
 585:fltk-1.3.4-1/src/Fl_Table.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3456              		.loc 4 585 0 discriminator 6
 3457 0259 F6426002 		testb	$2, 96(%rdx)
 587:fltk-1.3.4-1/src/Fl_Table.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3458              		.loc 4 587 0 discriminator 6
 3459 025d 8B938801 		movl	392(%rbx), %edx
 3459      0000
 3460 0263 488B07   		movq	(%rdi), %rax
 585:fltk-1.3.4-1/src/Fl_Table.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3461              		.loc 4 585 0 discriminator 6
 3462 0266 440F44E5 		cmove	%ebp, %r12d
 587:fltk-1.3.4-1/src/Fl_Table.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3463              		.loc 4 587 0 discriminator 6
 3464 026a 03938001 		addl	384(%rbx), %edx
 3464      0000
 3465 0270 4429E1   		subl	%r12d, %ecx
 3466 0273 29EA     		subl	%ebp, %edx
 3467 0275 FF5020   		call	*32(%rax)
 3468              	.LVL428:
 588:fltk-1.3.4-1/src/Fl_Table.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 3469              		.loc 4 588 0 discriminator 6
 3470 0278 488BBBA0 		movq	416(%rbx), %rdi
 3470      010000
 3471              	.LVL429:
 3472 027f 660FEFC0 		pxor	%xmm0, %xmm0
 3473 0283 F20F2C47 		cvttsd2si	120(%rdi), %eax
 3473      78
 3474 0288 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 3475 028c E8000000 		call	_ZN11Fl_Valuator5clampEd
 3475      00
 3476              	.LVL430:
 3477 0291 488BBBA0 		movq	416(%rbx), %rdi
 3477      010000
 3478 0298 E8000000 		call	_ZN11Fl_Valuator5valueEd
 3478      00
 3479              	.LVL431:
 3480              	.LBE1043:
 592:fltk-1.3.4-1/src/Fl_Table.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 3481              		.loc 4 592 0 discriminator 6
 3482 029d 4889DF   		movq	%rbx, %rdi
 3483 02a0 E8000000 		call	_ZN8Fl_Group10init_sizesEv
 3483      00
 3484              	.LVL432:
 599:fltk-1.3.4-1/src/Fl_Table.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3485              		.loc 4 599 0 discriminator 6
 3486 02a5 4883C410 		addq	$16, %rsp
 3487              		.cfi_remember_state
 3488              		.cfi_def_cfa_offset 32
 595:fltk-1.3.4-1/src/Fl_Table.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3489              		.loc 4 595 0 discriminator 6
 3490 02a9 4889DF   		movq	%rbx, %rdi
 599:fltk-1.3.4-1/src/Fl_Table.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 3491              		.loc 4 599 0 discriminator 6
 3492 02ac 5B       		popq	%rbx
 3493              		.cfi_def_cfa_offset 24
 3494              	.LVL433:
 3495 02ad 5D       		popq	%rbp
 3496              		.cfi_def_cfa_offset 16
 3497              	.LVL434:
 3498 02ae 415C     		popq	%r12
 3499              		.cfi_def_cfa_offset 8
 595:fltk-1.3.4-1/src/Fl_Table.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3500              		.loc 4 595 0 discriminator 6
 3501 02b0 E9000000 		jmp	_ZN8Fl_Table14table_scrolledEv
 3501      00
 3502              	.LVL435:
 3503              		.p2align 4,,10
 3504 02b5 0F1F00   		.p2align 3
 3505              	.L364:
 3506              		.cfi_restore_state
 3507              	.LBB1044:
 3508              	.LBB1042:
  79:fltk-1.3.4-1/src/Fl_Table.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 3509              		.loc 4 79 0
 3510 02b8 31C0     		xorl	%eax, %eax
  80:fltk-1.3.4-1/src/Fl_Table.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 3511              		.loc 4 80 0
 3512 02ba 31C9     		xorl	%ecx, %ecx
 3513 02bc E9D0FDFF 		jmp	.L351
 3513      FF
 3514              	.LVL436:
 3515              		.p2align 4,,10
 3516 02c1 0F1F8000 		.p2align 3
 3516      000000
 3517              	.L360:
 3518              	.LBE1042:
 3519              	.LBE1044:
 3520              	.LBB1045:
 3521              	.LBB1036:
  62:fltk-1.3.4-1/src/Fl_Table.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 3522              		.loc 4 62 0
 3523 02c8 31C0     		xorl	%eax, %eax
  63:fltk-1.3.4-1/src/Fl_Table.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3524              		.loc 4 63 0
 3525 02ca 31C9     		xorl	%ecx, %ecx
 3526 02cc E95EFDFF 		jmp	.L347
 3526      FF
 3527              	.LVL437:
 3528              		.p2align 4,,10
 3529 02d1 0F1F8000 		.p2align 3
 3529      000000
 3530              	.L378:
 3531              	.LBE1036:
 3532              	.LBE1045:
 3533              	.LBB1046:
 565:fltk-1.3.4-1/src/Fl_Table.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 3534              		.loc 4 565 0 discriminator 3
 3535 02d8 660FEFDB 		pxor	%xmm3, %xmm3
 3536 02dc 660FEFC0 		pxor	%xmm0, %xmm0
 3537 02e0 F30F2ADA 		cvtsi2ss	%edx, %xmm3
 3538 02e4 F30F2AC0 		cvtsi2ss	%eax, %xmm0
 3539 02e8 F30F5ED8 		divss	%xmm0, %xmm3
 3540 02ec E904FEFF 		jmp	.L355
 3540      FF
 3541              	.LBE1046:
 3542              		.cfi_endproc
 3543              	.LFE591:
 3545              		.section	.text.unlikely._ZN8Fl_Table13table_resizedEv
 3546              	.LCOLDE31:
 3547              		.section	.text._ZN8Fl_Table13table_resizedEv
 3548              	.LHOTE31:
 3549              		.section	.text.unlikely._ZN8Fl_TableC2EiiiiPKc,"ax",@progbits
 3550              		.align 2
 3551              	.LCOLDB32:
 3552              		.section	.text._ZN8Fl_TableC2EiiiiPKc,"ax",@progbits
 3553              	.LHOTB32:
 3554              		.align 2
 3555              		.p2align 4,,15
 3556              		.globl	_ZN8Fl_TableC2EiiiiPKc
 3558              	_ZN8Fl_TableC2EiiiiPKc:
 3559              	.LFB573:
  95:fltk-1.3.4-1/src/Fl_Table.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 3560              		.loc 4 95 0
 3561              		.cfi_startproc
 3562              	.LVL438:
 3563 0000 4157     		pushq	%r15
 3564              		.cfi_def_cfa_offset 16
 3565              		.cfi_offset 15, -16
 3566 0002 4156     		pushq	%r14
 3567              		.cfi_def_cfa_offset 24
 3568              		.cfi_offset 14, -24
 3569 0004 4155     		pushq	%r13
 3570              		.cfi_def_cfa_offset 32
 3571              		.cfi_offset 13, -32
 3572 0006 4154     		pushq	%r12
 3573              		.cfi_def_cfa_offset 40
 3574              		.cfi_offset 12, -40
 3575 0008 55       		pushq	%rbp
 3576              		.cfi_def_cfa_offset 48
 3577              		.cfi_offset 6, -48
 3578 0009 53       		pushq	%rbx
 3579              		.cfi_def_cfa_offset 56
 3580              		.cfi_offset 3, -56
 3581 000a 4889FB   		movq	%rdi, %rbx
 3582 000d 4883EC08 		subq	$8, %rsp
 3583              		.cfi_def_cfa_offset 64
 3584              	.LBB1047:
  95:fltk-1.3.4-1/src/Fl_Table.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 3585              		.loc 4 95 0
 3586 0011 E8000000 		call	_ZN8Fl_GroupC2EiiiiPKc
 3586      00
 3587              	.LVL439:
 3588 0016 8B4364   		movl	100(%rbx), %eax
 3589 0019 48C70300 		movq	$_ZTV8Fl_Table+16, (%rbx)
 3589      000000
 3590              	.LVL440:
 3591              	.LBB1048:
 3592              	.LBB1049:
 3593              	.LBB1050:
 227:fltk-1.3.4-1/FL/Fl_Table.H ****       _size = 0;
 3594              		.loc 3 227 0
 3595 0020 48C783E8 		movq	$0, 232(%rbx)
 3595      00000000 
 3595      000000
 228:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 3596              		.loc 3 228 0
 3597 002b C783F000 		movl	$0, 240(%rbx)
 3597      00000000 
 3597      0000
 3598              	.LVL441:
 3599              	.LBE1050:
 3600              	.LBE1049:
 3601              	.LBE1048:
 3602              	.LBB1051:
 3603              	.LBB1052:
 3604              	.LBB1053:
 227:fltk-1.3.4-1/FL/Fl_Table.H ****       _size = 0;
 3605              		.loc 3 227 0
 3606 0035 48C783F8 		movq	$0, 248(%rbx)
 3606      00000000 
 3606      000000
 228:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 3607              		.loc 3 228 0
 3608 0040 C7830001 		movl	$0, 256(%rbx)
 3608      00000000 
 3608      0000
 3609              	.LVL442:
 3610              	.LBE1053:
 3611              	.LBE1052:
 3612              	.LBE1051:
 102:fltk-1.3.4-1/src/Fl_Table.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 3613              		.loc 4 102 0
 3614 004a 8983D400 		movl	%eax, 212(%rbx)
 3614      0000
 103:fltk-1.3.4-1/src/Fl_Table.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3615              		.loc 4 103 0
 3616 0050 8983D800 		movl	%eax, 216(%rbx)
 3616      0000
  96:fltk-1.3.4-1/src/Fl_Table.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 3617              		.loc 4 96 0
 3618 0056 C783A000 		movl	$0, 160(%rbx)
 3618      00000000 
 3618      0000
  97:fltk-1.3.4-1/src/Fl_Table.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 3619              		.loc 4 97 0
 3620 0060 C783A400 		movl	$0, 164(%rbx)
 3620      00000000 
 3620      0000
  98:fltk-1.3.4-1/src/Fl_Table.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3621              		.loc 4 98 0
 3622 006a C783A800 		movl	$40, 168(%rbx)
 3622      00002800 
 3622      0000
  99:fltk-1.3.4-1/src/Fl_Table.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 3623              		.loc 4 99 0
 3624 0074 C783AC00 		movl	$18, 172(%rbx)
 3624      00001200 
 3624      0000
 100:fltk-1.3.4-1/src/Fl_Table.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 3625              		.loc 4 100 0
 3626 007e C683B800 		movb	$0, 184(%rbx)
 3626      000000
 101:fltk-1.3.4-1/src/Fl_Table.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 3627              		.loc 4 101 0
 3628 0085 C683B900 		movb	$0, 185(%rbx)
 3628      000000
 3629              	.LVL443:
 104:fltk-1.3.4-1/src/Fl_Table.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3630              		.loc 4 104 0
 3631 008c C683BA00 		movb	$0, 186(%rbx)
 3631      000000
 105:fltk-1.3.4-1/src/Fl_Table.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 3632              		.loc 4 105 0
 3633 0093 C683BB00 		movb	$0, 187(%rbx)
 3633      000000
 106:fltk-1.3.4-1/src/Fl_Table.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 3634              		.loc 4 106 0
 3635 009a C783BC00 		movl	$1, 188(%rbx)
 3635      00000100 
 3635      0000
 107:fltk-1.3.4-1/src/Fl_Table.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 3636              		.loc 4 107 0
 3637 00a4 C783C000 		movl	$1, 192(%rbx)
 3637      00000100 
 3637      0000
 108:fltk-1.3.4-1/src/Fl_Table.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 3638              		.loc 4 108 0
 3639 00ae C783C400 		movl	$-1, 196(%rbx)
 3639      0000FFFF 
 3639      FFFF
 109:fltk-1.3.4-1/src/Fl_Table.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3640              		.loc 4 109 0
 3641 00b8 C783C800 		movl	$-1, 200(%rbx)
 3641      0000FFFF 
 3641      FFFF
 110:fltk-1.3.4-1/src/Fl_Table.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 3642              		.loc 4 110 0
 3643 00c2 C783CC00 		movl	$-1, 204(%rbx)
 3643      0000FFFF 
 3643      FFFF
 111:fltk-1.3.4-1/src/Fl_Table.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 3644              		.loc 4 111 0
 3645 00cc C783D000 		movl	$-1, 208(%rbx)
 3645      0000FFFF 
 3645      FFFF
 112:fltk-1.3.4-1/src/Fl_Table.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 3646              		.loc 4 112 0
 3647 00d6 C7832C01 		movl	$0, 300(%rbx)
 3647      00000000 
 3647      0000
 113:fltk-1.3.4-1/src/Fl_Table.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 3648              		.loc 4 113 0
 3649 00e0 C7833001 		movl	$0, 304(%rbx)
 3649      00000000 
 3649      0000
 114:fltk-1.3.4-1/src/Fl_Table.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 3650              		.loc 4 114 0
 3651 00ea C7833401 		movl	$0, 308(%rbx)
 3651      00000000 
 3651      0000
 115:fltk-1.3.4-1/src/Fl_Table.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 3652              		.loc 4 115 0
 3653 00f4 C7833801 		movl	$0, 312(%rbx)
 3653      00000000 
 3653      0000
 116:fltk-1.3.4-1/src/Fl_Table.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 3654              		.loc 4 116 0
 3655 00fe C7833C01 		movl	$0, 316(%rbx)
 3655      00000000 
 3655      0000
 117:fltk-1.3.4-1/src/Fl_Table.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 3656              		.loc 4 117 0
 3657 0108 C7834001 		movl	$0, 320(%rbx)
 3657      00000000 
 3657      0000
 118:fltk-1.3.4-1/src/Fl_Table.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 3658              		.loc 4 118 0
 3659 0112 C7835401 		movl	$-1, 340(%rbx)
 3659      0000FFFF 
 3659      FFFF
 119:fltk-1.3.4-1/src/Fl_Table.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3660              		.loc 4 119 0
 3661 011c C7835801 		movl	$-1, 344(%rbx)
 3661      0000FFFF 
 3661      FFFF
 120:fltk-1.3.4-1/src/Fl_Table.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 3662              		.loc 4 120 0
 3663 0126 C7830801 		movl	$0, 264(%rbx)
 3663      00000000 
 3663      0000
 121:fltk-1.3.4-1/src/Fl_Table.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 3664              		.loc 4 121 0
 3665 0130 C7831801 		movl	$-1, 280(%rbx)
 3665      0000FFFF 
 3665      FFFF
 122:fltk-1.3.4-1/src/Fl_Table.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 3666              		.loc 4 122 0
 3667 013a C7831C01 		movl	$-1, 284(%rbx)
 3667      0000FFFF 
 3667      FFFF
 139:fltk-1.3.4-1/src/Fl_Table.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3668              		.loc 4 139 0
 3669 0144 8B6B28   		movl	40(%rbx), %ebp
 3670 0147 036B20   		addl	32(%rbx), %ebp
 123:fltk-1.3.4-1/src/Fl_Table.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 3671              		.loc 4 123 0
 3672 014a C7832001 		movl	$-1, 288(%rbx)
 3672      0000FFFF 
 3672      FFFF
 124:fltk-1.3.4-1/src/Fl_Table.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 3673              		.loc 4 124 0
 3674 0154 C7832401 		movl	$-1, 292(%rbx)
 3674      0000FFFF 
 3674      FFFF
 125:fltk-1.3.4-1/src/Fl_Table.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 3675              		.loc 4 125 0
 3676 015e C7832801 		movl	$-1, 296(%rbx)
 3676      0000FFFF 
 3676      FFFF
 126:fltk-1.3.4-1/src/Fl_Table.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 3677              		.loc 4 126 0
 3678 0168 C783DC00 		movl	$0, 220(%rbx)
 3678      00000000 
 3678      0000
 127:fltk-1.3.4-1/src/Fl_Table.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 3679              		.loc 4 127 0
 3680 0172 C7834801 		movl	$-1, 328(%rbx)
 3680      0000FFFF 
 3680      FFFF
 128:fltk-1.3.4-1/src/Fl_Table.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 3681              		.loc 4 128 0
 3682 017c C7834401 		movl	$-1, 324(%rbx)
 3682      0000FFFF 
 3682      FFFF
 129:fltk-1.3.4-1/src/Fl_Table.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 3683              		.loc 4 129 0
 3684 0186 C7834C01 		movl	$-1, 332(%rbx)
 3684      0000FFFF 
 3684      FFFF
 130:fltk-1.3.4-1/src/Fl_Table.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 3685              		.loc 4 130 0
 3686 0190 C7835001 		movl	$-1, 336(%rbx)
 3686      0000FFFF 
 3686      FFFF
 3687              	.LVL444:
 3688              	.LBB1054:
 3689              	.LBB1055:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3690              		.loc 1 372 0
 3691 019a C6436E09 		movb	$9, 110(%rbx)
 3692              	.LVL445:
 3693              	.LBE1055:
 3694              	.LBE1054:
 139:fltk-1.3.4-1/src/Fl_Table.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3695              		.loc 4 139 0
 3696 019e E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 3696      00
 3697              	.LVL446:
 140:fltk-1.3.4-1/src/Fl_Table.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 3698              		.loc 4 140 0
 3699 01a3 29C5     		subl	%eax, %ebp
 3700 01a5 448B7324 		movl	36(%rbx), %r14d
 3701 01a9 4189ED   		movl	%ebp, %r13d
 3702              	.LVL447:
 3703 01ac E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 3703      00
 3704              	.LVL448:
 3705 01b1 8B6B2C   		movl	44(%rbx), %ebp
 3706 01b4 4189C7   		movl	%eax, %r15d
 3707              	.LVL449:
 3708 01b7 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 3708      00
 3709              	.LVL450:
 3710 01bc BFB80000 		movl	$184, %edi
 3710      00
 3711 01c1 29C5     		subl	%eax, %ebp
 3712 01c3 4189EC   		movl	%ebp, %r12d
 3713 01c6 E8000000 		call	_Znwm
 3713      00
 3714              	.LVL451:
 3715 01cb 4589E0   		movl	%r12d, %r8d
 3716 01ce 4889C5   		movq	%rax, %rbp
 3717 01d1 4489F9   		movl	%r15d, %ecx
 3718 01d4 4489F2   		movl	%r14d, %edx
 3719 01d7 4489EE   		movl	%r13d, %esi
 3720 01da 4531C9   		xorl	%r9d, %r9d
 3721 01dd 4889C7   		movq	%rax, %rdi
 3722 01e0 E8000000 		call	_ZN12Fl_ScrollbarC1EiiiiPKc
 3722      00
 3723              	.LVL452:
 3724 01e5 4889AB98 		movq	%rbp, 408(%rbx)
 3724      010000
 3725              	.LVL453:
 3726              	.LBB1056:
 3727              	.LBB1057:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3728              		.loc 1 568 0
 3729 01ec 48895D18 		movq	%rbx, 24(%rbp)
 3730              	.LBE1057:
 3731              	.LBE1056:
 3732              	.LBB1059:
 3733              	.LBB1060:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3734              		.loc 1 279 0
 3735 01f0 C6456C00 		movb	$0, 108(%rbp)
 3736              	.LVL454:
 3737              	.LBE1060:
 3738              	.LBE1059:
 3739              	.LBB1061:
 3740              	.LBB1058:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3741              		.loc 1 568 0
 3742 01f4 48C74510 		movq	$_ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv, 16(%rbp)
 3742      00000000 
 3743              	.LBE1058:
 3744              	.LBE1061:
 144:fltk-1.3.4-1/src/Fl_Table.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 3745              		.loc 4 144 0
 3746 01fc 8B6B2C   		movl	44(%rbx), %ebp
 3747              	.LVL455:
 3748 01ff 036B24   		addl	36(%rbx), %ebp
 3749 0202 448B6B20 		movl	32(%rbx), %r13d
 3750              	.LVL456:
 3751 0206 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 3751      00
 3752              	.LVL457:
 3753 020b 448B7328 		movl	40(%rbx), %r14d
 145:fltk-1.3.4-1/src/Fl_Table.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 3754              		.loc 4 145 0
 3755 020f 29C5     		subl	%eax, %ebp
 3756 0211 4189EC   		movl	%ebp, %r12d
 3757              	.LVL458:
 3758 0214 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 3758      00
 3759              	.LVL459:
 3760 0219 BFB80000 		movl	$184, %edi
 3760      00
 3761 021e 4189C7   		movl	%eax, %r15d
 3762 0221 E8000000 		call	_Znwm
 3762      00
 3763              	.LVL460:
 3764 0226 4589F8   		movl	%r15d, %r8d
 3765 0229 4489F1   		movl	%r14d, %ecx
 3766 022c 4489E2   		movl	%r12d, %edx
 3767 022f 4489EE   		movl	%r13d, %esi
 3768 0232 4531C9   		xorl	%r9d, %r9d
 3769 0235 4889C7   		movq	%rax, %rdi
 3770 0238 4889C5   		movq	%rax, %rbp
 3771 023b E8000000 		call	_ZN12Fl_ScrollbarC1EiiiiPKc
 3771      00
 3772              	.LVL461:
 3773 0240 448B6320 		movl	32(%rbx), %r12d
 3774 0244 448B6B24 		movl	36(%rbx), %r13d
 149:fltk-1.3.4-1/src/Fl_Table.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 3775              		.loc 4 149 0
 3776 0248 BF280200 		movl	$552, %edi
 3776      00
 3777 024d 448B7328 		movl	40(%rbx), %r14d
 3778 0251 448B7B2C 		movl	44(%rbx), %r15d
 145:fltk-1.3.4-1/src/Fl_Table.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 3779              		.loc 4 145 0
 3780 0255 4889ABA0 		movq	%rbp, 416(%rbx)
 3780      010000
 3781              	.LVL462:
 3782              	.LBB1062:
 3783              	.LBB1063:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3784              		.loc 1 568 0
 3785 025c 48895D18 		movq	%rbx, 24(%rbp)
 3786              	.LBE1063:
 3787              	.LBE1062:
 3788              	.LBB1065:
 3789              	.LBB1066:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3790              		.loc 1 279 0
 3791 0260 C6456C01 		movb	$1, 108(%rbp)
 3792              	.LVL463:
 3793              	.LBE1066:
 3794              	.LBE1065:
 3795              	.LBB1067:
 3796              	.LBB1064:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3797              		.loc 1 568 0
 3798 0264 48C74510 		movq	$_ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv, 16(%rbp)
 3798      00000000 
 3799              	.LBE1064:
 3800              	.LBE1067:
 149:fltk-1.3.4-1/src/Fl_Table.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 3801              		.loc 4 149 0
 3802 026c E8000000 		call	_Znwm
 3802      00
 3803              	.LVL464:
 3804 0271 4589F8   		movl	%r15d, %r8d
 3805 0274 4889C5   		movq	%rax, %rbp
 3806              	.LVL465:
 3807 0277 4489F1   		movl	%r14d, %ecx
 3808 027a 4489EA   		movl	%r13d, %edx
 3809 027d 4489E6   		movl	%r12d, %esi
 3810 0280 4889C7   		movq	%rax, %rdi
 3811 0283 4531C9   		xorl	%r9d, %r9d
 3812 0286 E8000000 		call	_ZN9Fl_ScrollC1EiiiiPKc
 3812      00
 3813              	.LVL466:
 3814 028b 4889AB90 		movq	%rbp, 400(%rbx)
 3814      010000
 3815              	.LVL467:
 152:fltk-1.3.4-1/src/Fl_Table.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 3816              		.loc 4 152 0
 3817 0292 4889EF   		movq	%rbp, %rdi
 3818              	.LBB1068:
 3819              	.LBB1069:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3820              		.loc 1 372 0
 3821 0295 C6456E00 		movb	$0, 110(%rbp)
 3822              	.LVL468:
 3823              	.LBE1069:
 3824              	.LBE1068:
 3825              	.LBB1070:
 3826              	.LBB1071:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3827              		.loc 1 279 0
 3828 0299 C6456C00 		movb	$0, 108(%rbp)
 3829              	.LVL469:
 3830              	.LBE1071:
 3831              	.LBE1070:
 152:fltk-1.3.4-1/src/Fl_Table.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 3832              		.loc 4 152 0
 3833 029d E8000000 		call	_ZN9Fl_Widget4hideEv
 3833      00
 3834              	.LVL470:
 153:fltk-1.3.4-1/src/Fl_Table.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3835              		.loc 4 153 0
 3836 02a2 488BBB90 		movq	400(%rbx), %rdi
 3836      010000
 3837 02a9 E8000000 		call	_ZN8Fl_Group3endEv
 3837      00
 3838              	.LVL471:
 155:fltk-1.3.4-1/src/Fl_Table.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 3839              		.loc 4 155 0
 3840 02ae 4889DF   		movq	%rbx, %rdi
 3841 02b1 E8000000 		call	_ZN8Fl_Table13table_resizedEv
 3841      00
 3842              	.LVL472:
 156:fltk-1.3.4-1/src/Fl_Table.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 3843              		.loc 4 156 0
 3844 02b6 4889DF   		movq	%rbx, %rdi
 3845 02b9 E8000000 		call	_ZN9Fl_Widget6redrawEv
 3845      00
 3846              	.LVL473:
 158:fltk-1.3.4-1/src/Fl_Table.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 3847              		.loc 4 158 0
 3848 02be 4889DF   		movq	%rbx, %rdi
 3849 02c1 E8000000 		call	_ZN8Fl_Group3endEv
 3849      00
 3850              	.LVL474:
 160:fltk-1.3.4-1/src/Fl_Table.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 3851              		.loc 4 160 0
 3852 02c6 488BBB90 		movq	400(%rbx), %rdi
 3852      010000
 3853              	.LBE1047:
 161:fltk-1.3.4-1/src/Fl_Table.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 3854              		.loc 4 161 0
 3855 02cd 4883C408 		addq	$8, %rsp
 3856              		.cfi_def_cfa_offset 56
 3857 02d1 5B       		popq	%rbx
 3858              		.cfi_def_cfa_offset 48
 3859              	.LVL475:
 3860 02d2 5D       		popq	%rbp
 3861              		.cfi_def_cfa_offset 40
 3862              	.LVL476:
 3863 02d3 415C     		popq	%r12
 3864              		.cfi_def_cfa_offset 32
 3865 02d5 415D     		popq	%r13
 3866              		.cfi_def_cfa_offset 24
 3867 02d7 415E     		popq	%r14
 3868              		.cfi_def_cfa_offset 16
 3869 02d9 415F     		popq	%r15
 3870              		.cfi_def_cfa_offset 8
 3871              	.LBB1072:
 160:fltk-1.3.4-1/src/Fl_Table.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 3872              		.loc 4 160 0
 3873 02db E9000000 		jmp	_ZN8Fl_Group5beginEv
 3873      00
 3874              	.LVL477:
 3875              	.LBE1072:
 3876              		.cfi_endproc
 3877              	.LFE573:
 3879              		.section	.text.unlikely._ZN8Fl_TableC2EiiiiPKc
 3880              	.LCOLDE32:
 3881              		.section	.text._ZN8Fl_TableC2EiiiiPKc
 3882              	.LHOTE32:
 3883              		.globl	_ZN8Fl_TableC1EiiiiPKc
 3884              		.set	_ZN8Fl_TableC1EiiiiPKc,_ZN8Fl_TableC2EiiiiPKc
 3885              		.section	.text.unlikely._ZN8Fl_Table4rowsEi,"ax",@progbits
 3886              		.align 2
 3887              	.LCOLDB33:
 3888              		.section	.text._ZN8Fl_Table4rowsEi,"ax",@progbits
 3889              	.LHOTB33:
 3890              		.align 2
 3891              		.p2align 4,,15
 3892              		.globl	_ZN8Fl_Table4rowsEi
 3894              	_ZN8Fl_Table4rowsEi:
 3895              	.LFB593:
 610:fltk-1.3.4-1/src/Fl_Table.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3896              		.loc 4 610 0
 3897              		.cfi_startproc
 3898              	.LVL478:
 3899 0000 4156     		pushq	%r14
 3900              		.cfi_def_cfa_offset 16
 3901              		.cfi_offset 14, -16
 3902 0002 4155     		pushq	%r13
 3903              		.cfi_def_cfa_offset 24
 3904              		.cfi_offset 13, -24
 3905 0004 4189F5   		movl	%esi, %r13d
 3906 0007 4154     		pushq	%r12
 3907              		.cfi_def_cfa_offset 32
 3908              		.cfi_offset 12, -32
 3909 0009 55       		pushq	%rbp
 3910              		.cfi_def_cfa_offset 40
 3911              		.cfi_offset 6, -40
 3912 000a 41BC1900 		movl	$25, %r12d
 3912      0000
 3913 0010 53       		pushq	%rbx
 3914              		.cfi_def_cfa_offset 48
 3915              		.cfi_offset 3, -48
 3916 0011 448BB700 		movl	256(%rdi), %r14d
 3916      010000
 610:fltk-1.3.4-1/src/Fl_Table.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3917              		.loc 4 610 0
 3918 0018 4889FB   		movq	%rdi, %rbx
 611:fltk-1.3.4-1/src/Fl_Table.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 3919              		.loc 4 611 0
 3920 001b 8BAFA000 		movl	160(%rdi), %ebp
 3920      0000
 3921              	.LVL479:
 612:fltk-1.3.4-1/src/Fl_Table.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 3922              		.loc 4 612 0
 3923 0021 89B7A000 		movl	%esi, 160(%rdi)
 3923      0000
 3924              	.LVL480:
 3925              	.LBB1082:
 614:fltk-1.3.4-1/src/Fl_Table.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3926              		.loc 4 614 0
 3927 0027 4585F6   		testl	%r14d, %r14d
 3928 002a 740F     		je	.L382
 3929              	.LVL481:
 3930              	.LBB1083:
 3931              	.LBB1084:
 254:fltk-1.3.4-1/FL/Fl_Table.H ****   };
 3932              		.loc 3 254 0 discriminator 1
 3933 002c 488B97F8 		movq	248(%rdi), %rdx
 3933      000000
 3934 0033 418D46FF 		leal	-1(%r14), %eax
 3935 0037 448B2482 		movl	(%rdx,%rax,4), %r12d
 3936              	.LVL482:
 3937              	.L382:
 3938              	.LBE1084:
 3939              	.LBE1083:
 3940              	.LBB1085:
 3941              	.LBB1086:
 247:fltk-1.3.4-1/FL/Fl_Table.H ****         arr = (int*)realloc(arr, count * sizeof(int));
 3942              		.loc 3 247 0 discriminator 4
 3943 003b 4539F5   		cmpl	%r14d, %r13d
 3944 003e 7421     		je	.L383
 3945              	.LVL483:
 3946              	.LBB1087:
 3947              	.LBB1088:
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 3948              		.loc 3 248 0
 3949 0040 488BBBF8 		movq	248(%rbx), %rdi
 3949      000000
 3950              	.LVL484:
 3951 0047 4489EE   		movl	%r13d, %esi
 3952              	.LVL485:
 3953 004a 48C1E602 		salq	$2, %rsi
 3954 004e E8000000 		call	realloc
 3954      00
 3955              	.LVL486:
 249:fltk-1.3.4-1/FL/Fl_Table.H ****       }
 3956              		.loc 3 249 0
 3957 0053 4489AB00 		movl	%r13d, 256(%rbx)
 3957      010000
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 3958              		.loc 3 248 0
 3959 005a 488983F8 		movq	%rax, 248(%rbx)
 3959      000000
 3960              	.LVL487:
 3961              	.L383:
 3962              	.LBE1088:
 3963              	.LBE1087:
 3964              	.LBE1086:
 3965              	.LBE1085:
 617:fltk-1.3.4-1/src/Fl_Table.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 3966              		.loc 4 617 0
 3967 0061 4539F5   		cmpl	%r14d, %r13d
 3968 0064 7E36     		jle	.L387
 3969 0066 418D55FF 		leal	-1(%r13), %edx
 3970 006a 4963CE   		movslq	%r14d, %rcx
 3971 006d 488D048D 		leaq	0(,%rcx,4), %rax
 3971      00000000 
 3972 0075 4429F2   		subl	%r14d, %edx
 3973 0078 488D4C11 		leaq	1(%rcx,%rdx), %rcx
 3973      01
 3974 007d 48C1E102 		salq	$2, %rcx
 3975              	.LVL488:
 3976              		.p2align 4,,10
 3977 0081 0F1F8000 		.p2align 3
 3977      000000
 3978              	.L388:
 618:fltk-1.3.4-1/src/Fl_Table.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 3979              		.loc 4 618 0
 3980 0088 488B93F8 		movq	248(%rbx), %rdx
 3980      000000
 3981 008f 44892402 		movl	%r12d, (%rdx,%rax)
 3982 0093 4883C004 		addq	$4, %rax
 617:fltk-1.3.4-1/src/Fl_Table.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 3983              		.loc 4 617 0
 3984 0097 4839C8   		cmpq	%rcx, %rax
 3985 009a 75EC     		jne	.L388
 3986              	.LVL489:
 3987              	.L387:
 3988              	.LBE1082:
 621:fltk-1.3.4-1/src/Fl_Table.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 3989              		.loc 4 621 0
 3990 009c 4889DF   		movq	%rbx, %rdi
 3991 009f E8000000 		call	_ZN8Fl_Table13table_resizedEv
 3991      00
 3992              	.LVL490:
 624:fltk-1.3.4-1/src/Fl_Table.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 3993              		.loc 4 624 0
 3994 00a4 4439ED   		cmpl	%r13d, %ebp
 3995 00a7 7F08     		jg	.L386
 624:fltk-1.3.4-1/src/Fl_Table.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 3996              		.loc 4 624 0 is_stmt 0 discriminator 1
 3997 00a9 3BAB3801 		cmpl	312(%rbx), %ebp
 3997      0000
 3998 00af 7F17     		jg	.L381
 3999              	.L386:
 627:fltk-1.3.4-1/src/Fl_Table.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 4000              		.loc 4 627 0 is_stmt 1
 4001 00b1 4889DF   		movq	%rbx, %rdi
 629:fltk-1.3.4-1/src/Fl_Table.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 4002              		.loc 4 629 0
 4003 00b4 5B       		popq	%rbx
 4004              		.cfi_remember_state
 4005              		.cfi_def_cfa_offset 40
 4006              	.LVL491:
 4007 00b5 5D       		popq	%rbp
 4008              		.cfi_def_cfa_offset 32
 4009              	.LVL492:
 4010 00b6 415C     		popq	%r12
 4011              		.cfi_def_cfa_offset 24
 4012              	.LVL493:
 4013 00b8 415D     		popq	%r13
 4014              		.cfi_def_cfa_offset 16
 4015              	.LVL494:
 4016 00ba 415E     		popq	%r14
 4017              		.cfi_def_cfa_offset 8
 627:fltk-1.3.4-1/src/Fl_Table.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 4018              		.loc 4 627 0
 4019 00bc E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 4019      00
 4020              	.LVL495:
 4021              		.p2align 4,,10
 4022 00c1 0F1F8000 		.p2align 3
 4022      000000
 4023              	.L381:
 4024              		.cfi_restore_state
 629:fltk-1.3.4-1/src/Fl_Table.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 4025              		.loc 4 629 0
 4026 00c8 5B       		popq	%rbx
 4027              		.cfi_def_cfa_offset 40
 4028              	.LVL496:
 4029 00c9 5D       		popq	%rbp
 4030              		.cfi_def_cfa_offset 32
 4031              	.LVL497:
 4032 00ca 415C     		popq	%r12
 4033              		.cfi_def_cfa_offset 24
 4034              	.LVL498:
 4035 00cc 415D     		popq	%r13
 4036              		.cfi_def_cfa_offset 16
 4037              	.LVL499:
 4038 00ce 415E     		popq	%r14
 4039              		.cfi_def_cfa_offset 8
 4040 00d0 C3       		ret
 4041              		.cfi_endproc
 4042              	.LFE593:
 4044              		.section	.text.unlikely._ZN8Fl_Table4rowsEi
 4045              	.LCOLDE33:
 4046              		.section	.text._ZN8Fl_Table4rowsEi
 4047              	.LHOTE33:
 4048              		.section	.text.unlikely._ZN8Fl_Table4colsEi,"ax",@progbits
 4049              		.align 2
 4050              	.LCOLDB34:
 4051              		.section	.text._ZN8Fl_Table4colsEi,"ax",@progbits
 4052              	.LHOTB34:
 4053              		.align 2
 4054              		.p2align 4,,15
 4055              		.globl	_ZN8Fl_Table4colsEi
 4057              	_ZN8Fl_Table4colsEi:
 4058              	.LFB594:
 632:fltk-1.3.4-1/src/Fl_Table.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 4059              		.loc 4 632 0
 4060              		.cfi_startproc
 4061              	.LVL500:
 4062 0000 4155     		pushq	%r13
 4063              		.cfi_def_cfa_offset 16
 4064              		.cfi_offset 13, -16
 4065 0002 4154     		pushq	%r12
 4066              		.cfi_def_cfa_offset 24
 4067              		.cfi_offset 12, -24
 4068 0004 4189F4   		movl	%esi, %r12d
 4069 0007 55       		pushq	%rbp
 4070              		.cfi_def_cfa_offset 32
 4071              		.cfi_offset 6, -32
 4072 0008 53       		pushq	%rbx
 4073              		.cfi_def_cfa_offset 40
 4074              		.cfi_offset 3, -40
 4075 0009 BD500000 		movl	$80, %ebp
 4075      00
 4076 000e 4889FB   		movq	%rdi, %rbx
 4077 0011 4883EC08 		subq	$8, %rsp
 4078              		.cfi_def_cfa_offset 48
 4079 0015 448BAFF0 		movl	240(%rdi), %r13d
 4079      000000
 633:fltk-1.3.4-1/src/Fl_Table.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4080              		.loc 4 633 0
 4081 001c 89B7A400 		movl	%esi, 164(%rdi)
 4081      0000
 4082              	.LVL501:
 4083              	.LBB1098:
 635:fltk-1.3.4-1/src/Fl_Table.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 4084              		.loc 4 635 0
 4085 0022 4585ED   		testl	%r13d, %r13d
 4086 0025 7410     		je	.L395
 4087              	.LVL502:
 635:fltk-1.3.4-1/src/Fl_Table.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 4088              		.loc 4 635 0 is_stmt 0 discriminator 1
 4089 0027 418D45FF 		leal	-1(%r13), %eax
 4090 002b 488B97E8 		movq	232(%rdi), %rdx
 4090      000000
 4091 0032 4898     		cltq
 4092 0034 8B2C82   		movl	(%rdx,%rax,4), %ebp
 4093              	.LVL503:
 4094              	.L395:
 4095              	.LBB1099:
 4096              	.LBB1100:
 247:fltk-1.3.4-1/FL/Fl_Table.H ****         arr = (int*)realloc(arr, count * sizeof(int));
 4097              		.loc 3 247 0 is_stmt 1 discriminator 4
 4098 0037 4539EC   		cmpl	%r13d, %r12d
 4099 003a 7421     		je	.L396
 4100              	.LVL504:
 4101              	.LBB1101:
 4102              	.LBB1102:
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 4103              		.loc 3 248 0
 4104 003c 488BBBE8 		movq	232(%rbx), %rdi
 4104      000000
 4105              	.LVL505:
 4106 0043 4489E6   		movl	%r12d, %esi
 4107              	.LVL506:
 4108 0046 48C1E602 		salq	$2, %rsi
 4109 004a E8000000 		call	realloc
 4109      00
 4110              	.LVL507:
 249:fltk-1.3.4-1/FL/Fl_Table.H ****       }
 4111              		.loc 3 249 0
 4112 004f 4489A3F0 		movl	%r12d, 240(%rbx)
 4112      000000
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 4113              		.loc 3 248 0
 4114 0056 488983E8 		movq	%rax, 232(%rbx)
 4114      000000
 4115              	.LVL508:
 4116              	.L396:
 4117              	.LBE1102:
 4118              	.LBE1101:
 4119              	.LBE1100:
 4120              	.LBE1099:
 638:fltk-1.3.4-1/src/Fl_Table.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4121              		.loc 4 638 0
 4122 005d 4539EC   		cmpl	%r13d, %r12d
 4123 0060 7E31     		jle	.L398
 4124 0062 4183EC01 		subl	$1, %r12d
 4125              	.LVL509:
 4126 0066 4963D5   		movslq	%r13d, %rdx
 4127 0069 4529EC   		subl	%r13d, %r12d
 4128              	.LVL510:
 4129 006c 488D0495 		leaq	0(,%rdx,4), %rax
 4129      00000000 
 4130 0074 4A8D4C22 		leaq	1(%rdx,%r12), %rcx
 4130      01
 4131 0079 48C1E102 		salq	$2, %rcx
 4132              	.LVL511:
 4133 007d 0F1F00   		.p2align 4,,10
 4134              		.p2align 3
 4135              	.L399:
 639:fltk-1.3.4-1/src/Fl_Table.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 4136              		.loc 4 639 0
 4137 0080 488B93E8 		movq	232(%rbx), %rdx
 4137      000000
 4138 0087 892C02   		movl	%ebp, (%rdx,%rax)
 4139 008a 4883C004 		addq	$4, %rax
 638:fltk-1.3.4-1/src/Fl_Table.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4140              		.loc 4 638 0
 4141 008e 4839C8   		cmpq	%rcx, %rax
 4142 0091 75ED     		jne	.L399
 4143              	.LVL512:
 4144              	.L398:
 4145              	.LBE1098:
 642:fltk-1.3.4-1/src/Fl_Table.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 4146              		.loc 4 642 0
 4147 0093 4889DF   		movq	%rbx, %rdi
 4148 0096 E8000000 		call	_ZN8Fl_Table13table_resizedEv
 4148      00
 4149              	.LVL513:
 644:fltk-1.3.4-1/src/Fl_Table.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 4150              		.loc 4 644 0
 4151 009b 4883C408 		addq	$8, %rsp
 4152              		.cfi_def_cfa_offset 40
 643:fltk-1.3.4-1/src/Fl_Table.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 4153              		.loc 4 643 0
 4154 009f 4889DF   		movq	%rbx, %rdi
 644:fltk-1.3.4-1/src/Fl_Table.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 4155              		.loc 4 644 0
 4156 00a2 5B       		popq	%rbx
 4157              		.cfi_def_cfa_offset 32
 4158              	.LVL514:
 4159 00a3 5D       		popq	%rbp
 4160              		.cfi_def_cfa_offset 24
 4161              	.LVL515:
 4162 00a4 415C     		popq	%r12
 4163              		.cfi_def_cfa_offset 16
 4164 00a6 415D     		popq	%r13
 4165              		.cfi_def_cfa_offset 8
 643:fltk-1.3.4-1/src/Fl_Table.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 4166              		.loc 4 643 0
 4167 00a8 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 4167      00
 4168              	.LVL516:
 4169              		.cfi_endproc
 4170              	.LFE594:
 4172              		.section	.text.unlikely._ZN8Fl_Table4colsEi
 4173              	.LCOLDE34:
 4174              		.section	.text._ZN8Fl_Table4colsEi
 4175              	.LHOTE34:
 4176              		.section	.text.unlikely._ZN8Fl_Table10row_heightEii,"ax",@progbits
 4177              		.align 2
 4178              	.LCOLDB35:
 4179              		.section	.text._ZN8Fl_Table10row_heightEii,"ax",@progbits
 4180              	.LHOTB35:
 4181              		.align 2
 4182              		.p2align 4,,15
 4183              		.globl	_ZN8Fl_Table10row_heightEii
 4185              	_ZN8Fl_Table10row_heightEii:
 4186              	.LFB579:
 169:fltk-1.3.4-1/src/Fl_Table.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 4187              		.loc 4 169 0
 4188              		.cfi_startproc
 4189              	.LVL517:
 170:fltk-1.3.4-1/src/Fl_Table.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 4190              		.loc 4 170 0
 4191 0000 85F6     		testl	%esi, %esi
 4192 0002 0F889200 		js	.L419
 4192      0000
 169:fltk-1.3.4-1/src/Fl_Table.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 4193              		.loc 4 169 0
 4194 0008 4155     		pushq	%r13
 4195              		.cfi_def_cfa_offset 16
 4196              		.cfi_offset 13, -16
 4197 000a 4154     		pushq	%r12
 4198              		.cfi_def_cfa_offset 24
 4199              		.cfi_offset 12, -24
 4200 000c 4189D4   		movl	%edx, %r12d
 4201 000f 55       		pushq	%rbp
 4202              		.cfi_def_cfa_offset 32
 4203              		.cfi_offset 6, -32
 4204 0010 53       		pushq	%rbx
 4205              		.cfi_def_cfa_offset 40
 4206              		.cfi_offset 3, -40
 4207 0011 89F5     		movl	%esi, %ebp
 4208 0013 4889FB   		movq	%rdi, %rbx
 4209 0016 4883EC08 		subq	$8, %rsp
 4210              		.cfi_def_cfa_offset 48
 4211 001a 448BAF00 		movl	256(%rdi), %r13d
 4211      010000
 4212              	.LVL518:
 171:fltk-1.3.4-1/src/Fl_Table.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 4213              		.loc 4 171 0
 4214 0021 4439EE   		cmpl	%r13d, %esi
 4215 0024 7D7A     		jge	.L407
 4216              	.LVL519:
 4217              	.LBB1133:
 4218              	.LBB1134:
 244:fltk-1.3.4-1/FL/Fl_Table.H ****     unsigned int size() { return(_size); }
 4219              		.loc 3 244 0 discriminator 1
 4220 0026 488B97F8 		movq	248(%rdi), %rdx
 4220      000000
 4221              	.LVL520:
 4222 002d 4863C6   		movslq	%esi, %rax
 4223 0030 488D0482 		leaq	(%rdx,%rax,4), %rax
 4224              	.LVL521:
 4225              	.LBE1134:
 4226              	.LBE1133:
 171:fltk-1.3.4-1/src/Fl_Table.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 4227              		.loc 4 171 0 discriminator 1
 4228 0034 443920   		cmpl	%r12d, (%rax)
 4229 0037 7457     		je	.L404
 4230              	.LVL522:
 4231              	.L409:
 4232              	.LBB1135:
 4233              	.LBB1136:
 181:fltk-1.3.4-1/src/Fl_Table.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 4234              		.loc 4 181 0
 4235 0039 448920   		movl	%r12d, (%rax)
 182:fltk-1.3.4-1/src/Fl_Table.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 4236              		.loc 4 182 0
 4237 003c 4889DF   		movq	%rbx, %rdi
 4238 003f E8000000 		call	_ZN8Fl_Table13table_resizedEv
 4238      00
 4239              	.LVL523:
 183:fltk-1.3.4-1/src/Fl_Table.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 4240              		.loc 4 183 0
 4241 0044 3BAB3801 		cmpl	312(%rbx), %ebp
 4241      0000
 4242 004a 0F8ED000 		jle	.L420
 4242      0000
 4243              	.L415:
 4244              	.LVL524:
 187:fltk-1.3.4-1/src/Fl_Table.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 4245              		.loc 4 187 0
 4246 0050 48837B10 		cmpq	$0, 16(%rbx)
 4246      00
 4247 0055 7439     		je	.L404
 4248              	.LVL525:
 4249 0057 F6436F01 		testb	$1, 111(%rbx)
 4250 005b 7433     		je	.L404
 4251              	.LVL526:
 4252              	.LBB1137:
 4253              	.LBB1138:
 769:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 770:fltk-1.3.4-1/FL/Fl_Table.H ****   
 771:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 772:fltk-1.3.4-1/FL/Fl_Table.H ****    Convenience method to set the height of all rows to the
 773:fltk-1.3.4-1/FL/Fl_Table.H ****    same value, in pixels. The screen is redrawn.
 774:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 775:fltk-1.3.4-1/FL/Fl_Table.H ****   void row_height_all(int height) {		// set all row/col heights
 776:fltk-1.3.4-1/FL/Fl_Table.H ****     for ( int r=0; r<rows(); r++ ) {
 777:fltk-1.3.4-1/FL/Fl_Table.H ****       row_height(r, height);
 778:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 779:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 780:fltk-1.3.4-1/FL/Fl_Table.H ****   
 781:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 782:fltk-1.3.4-1/FL/Fl_Table.H ****    Convenience method to set the width of all columns to the
 783:fltk-1.3.4-1/FL/Fl_Table.H ****    same value, in pixels. The screen is redrawn.
 784:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 785:fltk-1.3.4-1/FL/Fl_Table.H ****   void col_width_all(int width) {
 786:fltk-1.3.4-1/FL/Fl_Table.H ****     for ( int c=0; c<cols(); c++ ) {
 787:fltk-1.3.4-1/FL/Fl_Table.H ****       col_width(c, width);
 788:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 789:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 790:fltk-1.3.4-1/FL/Fl_Table.H ****   
 791:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 792:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the row scroll position to 'row', and causes the screen to redraw.
 793:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 794:fltk-1.3.4-1/FL/Fl_Table.H ****   void row_position(int row);			// set/get table's current scroll position
 795:fltk-1.3.4-1/FL/Fl_Table.H ****   
 796:fltk-1.3.4-1/FL/Fl_Table.H ****   /** 
 797:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets the column scroll position to column 'col', and causes the screen to redraw.
 798:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 799:fltk-1.3.4-1/FL/Fl_Table.H ****   void col_position(int col);
 800:fltk-1.3.4-1/FL/Fl_Table.H ****   
 801:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 802:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current row scroll position as a row number.
 803:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 804:fltk-1.3.4-1/FL/Fl_Table.H ****   int row_position() {				// current row position
 805:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_row_position);
 806:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 807:fltk-1.3.4-1/FL/Fl_Table.H ****   
 808:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 809:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current column scroll position as a column number.
 810:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 811:fltk-1.3.4-1/FL/Fl_Table.H ****   int col_position() {				// current col position
 812:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_col_position);
 813:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 814:fltk-1.3.4-1/FL/Fl_Table.H ****   
 815:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 816:fltk-1.3.4-1/FL/Fl_Table.H ****    Sets which row should be at the top of the table,
 817:fltk-1.3.4-1/FL/Fl_Table.H ****    scrolling as necessary, and the table is redrawn. If the table
 818:fltk-1.3.4-1/FL/Fl_Table.H ****    cannot be scrolled that far, it is scrolled as far as possible.
 819:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 820:fltk-1.3.4-1/FL/Fl_Table.H ****   inline void top_row(int row) {		// set/get top row (deprecated)
 821:fltk-1.3.4-1/FL/Fl_Table.H ****     row_position(row);
 822:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 823:fltk-1.3.4-1/FL/Fl_Table.H ****   
 824:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 825:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the current top row shown in the table.
 826:fltk-1.3.4-1/FL/Fl_Table.H ****    This row may be partially obscured.
 827:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 828:fltk-1.3.4-1/FL/Fl_Table.H ****   inline int top_row() {
 829:fltk-1.3.4-1/FL/Fl_Table.H ****     return(row_position());
 830:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 831:fltk-1.3.4-1/FL/Fl_Table.H ****   int is_selected(int r, int c);		// selected cell
 832:fltk-1.3.4-1/FL/Fl_Table.H ****   void get_selection(int &row_top, int &col_left, int &row_bot, int &col_right);
 833:fltk-1.3.4-1/FL/Fl_Table.H ****   void set_selection(int row_top, int col_left, int row_bot, int col_right);
 834:fltk-1.3.4-1/FL/Fl_Table.H ****   int move_cursor(int R, int C, int shiftselect);
 835:fltk-1.3.4-1/FL/Fl_Table.H ****   int move_cursor(int R, int C);
 836:fltk-1.3.4-1/FL/Fl_Table.H ****   
 837:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 838:fltk-1.3.4-1/FL/Fl_Table.H ****    Changes the size of the Fl_Table, causing it to redraw.
 839:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 840:fltk-1.3.4-1/FL/Fl_Table.H ****   void resize(int X, int Y, int W, int H);	// fltk resize() override
 841:fltk-1.3.4-1/FL/Fl_Table.H ****   void draw(void);				// fltk draw() override
 842:fltk-1.3.4-1/FL/Fl_Table.H ****   
 843:fltk-1.3.4-1/FL/Fl_Table.H ****   // This crashes sortapp() during init.
 844:fltk-1.3.4-1/FL/Fl_Table.H ****   //  void box(Fl_Boxtype val) {
 845:fltk-1.3.4-1/FL/Fl_Table.H ****   //    Fl_Group::box(val);
 846:fltk-1.3.4-1/FL/Fl_Table.H ****   //    if ( table ) {
 847:fltk-1.3.4-1/FL/Fl_Table.H ****   //      resize(x(), y(), w(), h());
 848:fltk-1.3.4-1/FL/Fl_Table.H ****   //    }
 849:fltk-1.3.4-1/FL/Fl_Table.H ****   //  }
 850:fltk-1.3.4-1/FL/Fl_Table.H ****   //  Fl_Boxtype box(void) const {
 851:fltk-1.3.4-1/FL/Fl_Table.H ****   //    return(Fl_Group::box());
 852:fltk-1.3.4-1/FL/Fl_Table.H ****   //  }
 853:fltk-1.3.4-1/FL/Fl_Table.H ****   
 854:fltk-1.3.4-1/FL/Fl_Table.H ****   // Child group
 855:fltk-1.3.4-1/FL/Fl_Table.H ****   void init_sizes() {
 856:fltk-1.3.4-1/FL/Fl_Table.H ****     table->init_sizes();
 857:fltk-1.3.4-1/FL/Fl_Table.H ****     table->redraw();
 858:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 859:fltk-1.3.4-1/FL/Fl_Table.H ****   void add(Fl_Widget& wgt) {
 860:fltk-1.3.4-1/FL/Fl_Table.H ****     table->add(wgt);
 861:fltk-1.3.4-1/FL/Fl_Table.H ****     if ( table->children() > 2 ) {
 862:fltk-1.3.4-1/FL/Fl_Table.H ****       table->show();
 863:fltk-1.3.4-1/FL/Fl_Table.H ****     } else {
 864:fltk-1.3.4-1/FL/Fl_Table.H ****       table->hide();
 865:fltk-1.3.4-1/FL/Fl_Table.H ****     } 
 866:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 867:fltk-1.3.4-1/FL/Fl_Table.H ****   void add(Fl_Widget* wgt) {
 868:fltk-1.3.4-1/FL/Fl_Table.H ****     add(*wgt);
 869:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 870:fltk-1.3.4-1/FL/Fl_Table.H ****   void insert(Fl_Widget& wgt, int n) {
 871:fltk-1.3.4-1/FL/Fl_Table.H ****     table->insert(wgt,n);
 872:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 873:fltk-1.3.4-1/FL/Fl_Table.H ****   void insert(Fl_Widget& wgt, Fl_Widget* w2) {
 874:fltk-1.3.4-1/FL/Fl_Table.H ****     table->insert(wgt,w2);
 875:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 876:fltk-1.3.4-1/FL/Fl_Table.H ****   void remove(Fl_Widget& wgt) {
 877:fltk-1.3.4-1/FL/Fl_Table.H ****     table->remove(wgt);
 878:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 879:fltk-1.3.4-1/FL/Fl_Table.H ****   void begin() {
 880:fltk-1.3.4-1/FL/Fl_Table.H ****     table->begin();
 881:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 882:fltk-1.3.4-1/FL/Fl_Table.H ****   void end() {
 883:fltk-1.3.4-1/FL/Fl_Table.H ****     table->end();
 884:fltk-1.3.4-1/FL/Fl_Table.H ****     // HACK: Avoid showing Fl_Scroll; seems to erase screen
 885:fltk-1.3.4-1/FL/Fl_Table.H ****     //       causing unnecessary flicker, even if its box() is FL_NO_BOX.
 886:fltk-1.3.4-1/FL/Fl_Table.H ****     //
 887:fltk-1.3.4-1/FL/Fl_Table.H ****     if ( table->children() > 2 ) {
 888:fltk-1.3.4-1/FL/Fl_Table.H ****       table->show();
 889:fltk-1.3.4-1/FL/Fl_Table.H ****     } else {
 890:fltk-1.3.4-1/FL/Fl_Table.H ****       table->hide();
 891:fltk-1.3.4-1/FL/Fl_Table.H ****     } 
 892:fltk-1.3.4-1/FL/Fl_Table.H ****     Fl_Group::current(Fl_Group::parent());
 893:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 894:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Widget * const *array() {
 895:fltk-1.3.4-1/FL/Fl_Table.H ****     return(table->array());
 896:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 897:fltk-1.3.4-1/FL/Fl_Table.H ****   
 898:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 899:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the child widget by an index.
 900:fltk-1.3.4-1/FL/Fl_Table.H ****    
 901:fltk-1.3.4-1/FL/Fl_Table.H ****    When using the Fl_Table as a container for FLTK widgets, this method returns 
 902:fltk-1.3.4-1/FL/Fl_Table.H ****    the widget pointer from the internal array of widgets in the container.
 903:fltk-1.3.4-1/FL/Fl_Table.H ****    
 904:fltk-1.3.4-1/FL/Fl_Table.H ****    Typically used in loops, eg:
 905:fltk-1.3.4-1/FL/Fl_Table.H ****    \code
 906:fltk-1.3.4-1/FL/Fl_Table.H ****    for ( int i=0; i<children(); i++ ) {
 907:fltk-1.3.4-1/FL/Fl_Table.H ****      Fl_Widget *w = child(i);
 908:fltk-1.3.4-1/FL/Fl_Table.H ****      [..]
 909:fltk-1.3.4-1/FL/Fl_Table.H ****    }
 910:fltk-1.3.4-1/FL/Fl_Table.H ****    \endcode
 911:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 912:fltk-1.3.4-1/FL/Fl_Table.H ****   Fl_Widget *child(int n) const {
 913:fltk-1.3.4-1/FL/Fl_Table.H ****     return(table->child(n));
 914:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 915:fltk-1.3.4-1/FL/Fl_Table.H ****   
 916:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 917:fltk-1.3.4-1/FL/Fl_Table.H ****    Returns the number of children in the table.
 918:fltk-1.3.4-1/FL/Fl_Table.H ****    
 919:fltk-1.3.4-1/FL/Fl_Table.H ****    When using the Fl_Table as a container for FLTK widgets, this method returns 
 920:fltk-1.3.4-1/FL/Fl_Table.H ****    how many child widgets the table has.
 921:fltk-1.3.4-1/FL/Fl_Table.H ****    
 922:fltk-1.3.4-1/FL/Fl_Table.H ****    \see child(int)
 923:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 924:fltk-1.3.4-1/FL/Fl_Table.H ****   int children() const {
 925:fltk-1.3.4-1/FL/Fl_Table.H ****     return(table->children()-2);    // -2: skip Fl_Scroll's h/v scrollbar widgets
 926:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 927:fltk-1.3.4-1/FL/Fl_Table.H ****   int find(const Fl_Widget *wgt) const {
 928:fltk-1.3.4-1/FL/Fl_Table.H ****     return(table->find(wgt));
 929:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 930:fltk-1.3.4-1/FL/Fl_Table.H ****   int find(const Fl_Widget &wgt) const {
 931:fltk-1.3.4-1/FL/Fl_Table.H ****     return(table->find(wgt));
 932:fltk-1.3.4-1/FL/Fl_Table.H ****   } 
 933:fltk-1.3.4-1/FL/Fl_Table.H ****   // CALLBACKS
 934:fltk-1.3.4-1/FL/Fl_Table.H ****   
 935:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 936:fltk-1.3.4-1/FL/Fl_Table.H ****    * Returns the current row the event occurred on.
 937:fltk-1.3.4-1/FL/Fl_Table.H ****    *
 938:fltk-1.3.4-1/FL/Fl_Table.H ****    * This function should only be used from within the user's callback function.
 939:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 940:fltk-1.3.4-1/FL/Fl_Table.H ****   int callback_row() {
 941:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_callback_row);
 942:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 943:fltk-1.3.4-1/FL/Fl_Table.H ****   
 944:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 945:fltk-1.3.4-1/FL/Fl_Table.H ****    * Returns the current column the event occurred on.
 946:fltk-1.3.4-1/FL/Fl_Table.H ****    *
 947:fltk-1.3.4-1/FL/Fl_Table.H ****    * This function should only be used from within the user's callback function.
 948:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 949:fltk-1.3.4-1/FL/Fl_Table.H ****   int callback_col() {
 950:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_callback_col);
 951:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 952:fltk-1.3.4-1/FL/Fl_Table.H ****   
 953:fltk-1.3.4-1/FL/Fl_Table.H ****   /**
 954:fltk-1.3.4-1/FL/Fl_Table.H ****    * Returns the current 'table context'.
 955:fltk-1.3.4-1/FL/Fl_Table.H ****    *
 956:fltk-1.3.4-1/FL/Fl_Table.H ****    * This function should only be used from within the user's callback function.
 957:fltk-1.3.4-1/FL/Fl_Table.H ****    */
 958:fltk-1.3.4-1/FL/Fl_Table.H ****   TableContext callback_context() {
 959:fltk-1.3.4-1/FL/Fl_Table.H ****     return(_callback_context);
 960:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 961:fltk-1.3.4-1/FL/Fl_Table.H ****   
 962:fltk-1.3.4-1/FL/Fl_Table.H ****   void do_callback(TableContext context, int row, int col) {
 963:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_context = context;
 4254              		.loc 3 963 0
 4255 005d C7830C01 		movl	$64, 268(%rbx)
 4255      00004000 
 4255      0000
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_row = row;
 4256              		.loc 3 964 0
 4257 0067 89AB1001 		movl	%ebp, 272(%rbx)
 4257      0000
 4258              	.LBB1139:
 4259              	.LBB1140:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4260              		.loc 1 861 0
 4261 006d 4889DE   		movq	%rbx, %rsi
 4262              	.LBE1140:
 4263              	.LBE1139:
 965:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 4264              		.loc 3 965 0
 4265 0070 C7831401 		movl	$0, 276(%rbx)
 4265      00000000 
 4265      0000
 4266              	.LVL527:
 4267              	.LBB1144:
 4268              	.LBB1141:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4269              		.loc 1 861 0
 4270 007a 488B5318 		movq	24(%rbx), %rdx
 4271              	.LBE1141:
 4272              	.LBE1144:
 4273              	.LBE1138:
 4274              	.LBE1137:
 4275              	.LBE1136:
 4276              	.LBE1135:
 190:fltk-1.3.4-1/src/Fl_Table.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 4277              		.loc 4 190 0
 4278 007e 4883C408 		addq	$8, %rsp
 4279              		.cfi_remember_state
 4280              		.cfi_def_cfa_offset 40
 4281              	.LBB1154:
 4282              	.LBB1151:
 4283              	.LBB1149:
 4284              	.LBB1147:
 4285              	.LBB1145:
 4286              	.LBB1142:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4287              		.loc 1 861 0
 4288 0082 4889DF   		movq	%rbx, %rdi
 4289              	.LBE1142:
 4290              	.LBE1145:
 4291              	.LBE1147:
 4292              	.LBE1149:
 4293              	.LBE1151:
 4294              	.LBE1154:
 190:fltk-1.3.4-1/src/Fl_Table.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 4295              		.loc 4 190 0
 4296 0085 5B       		popq	%rbx
 4297              		.cfi_restore 3
 4298              		.cfi_def_cfa_offset 32
 4299              	.LVL528:
 4300 0086 5D       		popq	%rbp
 4301              		.cfi_restore 6
 4302              		.cfi_def_cfa_offset 24
 4303              	.LVL529:
 4304 0087 415C     		popq	%r12
 4305              		.cfi_restore 12
 4306              		.cfi_def_cfa_offset 16
 4307              	.LVL530:
 4308 0089 415D     		popq	%r13
 4309              		.cfi_restore 13
 4310              		.cfi_def_cfa_offset 8
 4311              	.LBB1155:
 4312              	.LBB1152:
 4313              	.LBB1150:
 4314              	.LBB1148:
 4315              	.LBB1146:
 4316              	.LBB1143:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4317              		.loc 1 861 0
 4318 008b E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 4318      00
 4319              	.LVL531:
 4320              		.p2align 4,,10
 4321              		.p2align 3
 4322              	.L404:
 4323              		.cfi_restore_state
 4324              	.LBE1143:
 4325              	.LBE1146:
 4326              	.LBE1148:
 4327              	.LBE1150:
 4328              	.LBE1152:
 4329              	.LBE1155:
 190:fltk-1.3.4-1/src/Fl_Table.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 4330              		.loc 4 190 0
 4331 0090 4883C408 		addq	$8, %rsp
 4332              		.cfi_def_cfa_offset 40
 4333 0094 5B       		popq	%rbx
 4334              		.cfi_restore 3
 4335              		.cfi_def_cfa_offset 32
 4336              	.LVL532:
 4337 0095 5D       		popq	%rbp
 4338              		.cfi_restore 6
 4339              		.cfi_def_cfa_offset 24
 4340              	.LVL533:
 4341 0096 415C     		popq	%r12
 4342              		.cfi_restore 12
 4343              		.cfi_def_cfa_offset 16
 4344              	.LVL534:
 4345 0098 415D     		popq	%r13
 4346              		.cfi_restore 13
 4347              		.cfi_def_cfa_offset 8
 4348              	.L419:
 4349 009a F3C3     		rep ret
 4350              	.LVL535:
 4351 009c 0F1F4000 		.p2align 4,,10
 4352              		.p2align 3
 4353              	.L407:
 4354              		.cfi_def_cfa_offset 48
 4355              		.cfi_offset 3, -40
 4356              		.cfi_offset 6, -32
 4357              		.cfi_offset 12, -24
 4358              		.cfi_offset 13, -16
 4359              	.LBB1156:
 4360              	.LBB1157:
 247:fltk-1.3.4-1/FL/Fl_Table.H ****         arr = (int*)realloc(arr, count * sizeof(int));
 4361              		.loc 3 247 0
 4362 00a0 746E     		je	.L421
 4363              	.LVL536:
 4364              	.LBB1158:
 4365              	.LBB1159:
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 4366              		.loc 3 248 0
 4367 00a2 488BBFF8 		movq	248(%rdi), %rdi
 4367      000000
 4368 00a9 89F6     		movl	%esi, %esi
 4369              	.LVL537:
 4370 00ab 48C1E602 		salq	$2, %rsi
 4371 00af E8000000 		call	realloc
 4371      00
 4372              	.LVL538:
 249:fltk-1.3.4-1/FL/Fl_Table.H ****       }
 4373              		.loc 3 249 0
 4374 00b4 89AB0001 		movl	%ebp, 256(%rbx)
 4374      0000
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 4375              		.loc 3 248 0
 4376 00ba 488983F8 		movq	%rax, 248(%rbx)
 4376      000000
 4377              	.LVL539:
 4378              	.L411:
 4379              	.LBE1159:
 4380              	.LBE1158:
 4381              	.LBE1157:
 4382              	.LBE1156:
 178:fltk-1.3.4-1/src/Fl_Table.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 4383              		.loc 4 178 0
 4384 00c1 4439ED   		cmpl	%r13d, %ebp
 4385 00c4 7E67     		jle	.L412
 4386 00c6 4963D5   		movslq	%r13d, %rdx
 4387 00c9 41F7D5   		notl	%r13d
 4388              	.LVL540:
 4389 00cc 418D742D 		leal	0(%r13,%rbp), %esi
 4389      00
 4390 00d1 488D0C95 		leaq	0(,%rdx,4), %rcx
 4390      00000000 
 4391 00d9 488D7432 		leaq	1(%rdx,%rsi), %rsi
 4391      01
 4392 00de 48C1E602 		salq	$2, %rsi
 4393 00e2 EB0B     		jmp	.L413
 4394              	.LVL541:
 4395              		.p2align 4,,10
 4396 00e4 0F1F4000 		.p2align 3
 4397              	.L422:
 4398 00e8 488B83F8 		movq	248(%rbx), %rax
 4398      000000
 4399              	.LVL542:
 4400              	.L413:
 179:fltk-1.3.4-1/src/Fl_Table.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 4401              		.loc 4 179 0
 4402 00ef 44892408 		movl	%r12d, (%rax,%rcx)
 4403 00f3 4883C104 		addq	$4, %rcx
 178:fltk-1.3.4-1/src/Fl_Table.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 4404              		.loc 4 178 0
 4405 00f7 4839CE   		cmpq	%rcx, %rsi
 4406 00fa 75EC     		jne	.L422
 4407 00fc 488B93F8 		movq	248(%rbx), %rdx
 4407      000000
 4408 0103 4863C5   		movslq	%ebp, %rax
 4409 0106 488D0482 		leaq	(%rdx,%rax,4), %rax
 4410 010a E92AFFFF 		jmp	.L409
 4410      FF
 4411              	.LVL543:
 4412 010f 90       		.p2align 4,,10
 4413              		.p2align 3
 4414              	.L421:
 4415 0110 488B87F8 		movq	248(%rdi), %rax
 4415      000000
 4416 0117 EBA8     		jmp	.L411
 4417              	.LVL544:
 4418 0119 0F1F8000 		.p2align 4,,10
 4418      000000
 4419              		.p2align 3
 4420              	.L420:
 4421              	.LBB1160:
 4422              	.LBB1153:
 184:fltk-1.3.4-1/src/Fl_Table.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 4423              		.loc 4 184 0
 4424 0120 4889DF   		movq	%rbx, %rdi
 4425 0123 E8000000 		call	_ZN9Fl_Widget6redrawEv
 4425      00
 4426              	.LVL545:
 4427 0128 E923FFFF 		jmp	.L415
 4427      FF
 4428              	.LVL546:
 4429              	.L412:
 4430 012d 4863D5   		movslq	%ebp, %rdx
 4431 0130 488D0490 		leaq	(%rax,%rdx,4), %rax
 4432 0134 E900FFFF 		jmp	.L409
 4432      FF
 4433              	.LBE1153:
 4434              	.LBE1160:
 4435              		.cfi_endproc
 4436              	.LFE579:
 4438              		.section	.text.unlikely._ZN8Fl_Table10row_heightEii
 4439              	.LCOLDE35:
 4440              		.section	.text._ZN8Fl_Table10row_heightEii
 4441              	.LHOTE35:
 4442              		.section	.text.unlikely._ZN8Fl_Table9col_widthEii,"ax",@progbits
 4443              		.align 2
 4444              	.LCOLDB36:
 4445              		.section	.text._ZN8Fl_Table9col_widthEii,"ax",@progbits
 4446              	.LHOTB36:
 4447              		.align 2
 4448              		.p2align 4,,15
 4449              		.globl	_ZN8Fl_Table9col_widthEii
 4451              	_ZN8Fl_Table9col_widthEii:
 4452              	.LFB580:
 194:fltk-1.3.4-1/src/Fl_Table.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 4453              		.loc 4 194 0
 4454              		.cfi_startproc
 4455              	.LVL547:
 195:fltk-1.3.4-1/src/Fl_Table.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 4456              		.loc 4 195 0
 4457 0000 85F6     		testl	%esi, %esi
 4458 0002 0F889000 		js	.L438
 4458      0000
 194:fltk-1.3.4-1/src/Fl_Table.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 4459              		.loc 4 194 0
 4460 0008 4156     		pushq	%r14
 4461              		.cfi_def_cfa_offset 16
 4462              		.cfi_offset 14, -16
 4463 000a 4155     		pushq	%r13
 4464              		.cfi_def_cfa_offset 24
 4465              		.cfi_offset 13, -24
 4466 000c 4189D5   		movl	%edx, %r13d
 4467 000f 4154     		pushq	%r12
 4468              		.cfi_def_cfa_offset 32
 4469              		.cfi_offset 12, -32
 4470 0011 55       		pushq	%rbp
 4471              		.cfi_def_cfa_offset 40
 4472              		.cfi_offset 6, -40
 4473 0012 89F5     		movl	%esi, %ebp
 4474 0014 53       		pushq	%rbx
 4475              		.cfi_def_cfa_offset 48
 4476              		.cfi_offset 3, -48
 4477 0015 448BA7F0 		movl	240(%rdi), %r12d
 4477      000000
 4478 001c 4889FB   		movq	%rdi, %rbx
 4479              	.LVL548:
 196:fltk-1.3.4-1/src/Fl_Table.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 4480              		.loc 4 196 0
 4481 001f 4439E6   		cmpl	%r12d, %esi
 4482 0022 7D7C     		jge	.L426
 4483              	.LVL549:
 4484              	.LBB1191:
 4485              	.LBB1192:
 244:fltk-1.3.4-1/FL/Fl_Table.H ****     unsigned int size() { return(_size); }
 4486              		.loc 3 244 0 discriminator 1
 4487 0024 488B97E8 		movq	232(%rdi), %rdx
 4487      000000
 4488              	.LVL550:
 4489 002b 4863C6   		movslq	%esi, %rax
 4490 002e 488D0482 		leaq	(%rdx,%rax,4), %rax
 4491              	.LVL551:
 4492              	.LBE1192:
 4493              	.LBE1191:
 196:fltk-1.3.4-1/src/Fl_Table.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 4494              		.loc 4 196 0 discriminator 1
 4495 0032 443928   		cmpl	%r13d, (%rax)
 4496 0035 7459     		je	.L423
 4497              	.LVL552:
 4498              	.L428:
 4499              	.LBB1193:
 4500              	.LBB1194:
 207:fltk-1.3.4-1/src/Fl_Table.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 4501              		.loc 4 207 0
 4502 0037 448928   		movl	%r13d, (%rax)
 208:fltk-1.3.4-1/src/Fl_Table.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4503              		.loc 4 208 0
 4504 003a 4889DF   		movq	%rbx, %rdi
 4505 003d E8000000 		call	_ZN8Fl_Table13table_resizedEv
 4505      00
 4506              	.LVL553:
 209:fltk-1.3.4-1/src/Fl_Table.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 4507              		.loc 4 209 0
 4508 0042 3BAB4001 		cmpl	320(%rbx), %ebp
 4508      0000
 4509 0048 0F8EE200 		jle	.L439
 4509      0000
 4510              	.L434:
 4511              	.LVL554:
 213:fltk-1.3.4-1/src/Fl_Table.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 4512              		.loc 4 213 0
 4513 004e 48837B10 		cmpq	$0, 16(%rbx)
 4513      00
 4514 0053 743B     		je	.L423
 4515              	.LVL555:
 4516 0055 F6436F01 		testb	$1, 111(%rbx)
 4517 0059 7435     		je	.L423
 4518              	.LVL556:
 4519              	.LBB1195:
 4520              	.LBB1196:
 963:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_row = row;
 4521              		.loc 3 963 0
 4522 005b C7830C01 		movl	$64, 268(%rbx)
 4522      00004000 
 4522      0000
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 4523              		.loc 3 964 0
 4524 0065 C7831001 		movl	$0, 272(%rbx)
 4524      00000000 
 4524      0000
 4525              	.LBB1197:
 4526              	.LBB1198:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4527              		.loc 1 861 0
 4528 006f 4889DE   		movq	%rbx, %rsi
 4529              	.LBE1198:
 4530              	.LBE1197:
 4531              		.loc 3 965 0
 4532 0072 89AB1401 		movl	%ebp, 276(%rbx)
 4532      0000
 4533              	.LVL557:
 4534              	.LBB1201:
 4535              	.LBB1199:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4536              		.loc 1 861 0
 4537 0078 488B5318 		movq	24(%rbx), %rdx
 4538 007c 4889DF   		movq	%rbx, %rdi
 4539              	.LBE1199:
 4540              	.LBE1201:
 4541              	.LBE1196:
 4542              	.LBE1195:
 4543              	.LBE1194:
 4544              	.LBE1193:
 216:fltk-1.3.4-1/src/Fl_Table.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4545              		.loc 4 216 0
 4546 007f 5B       		popq	%rbx
 4547              		.cfi_remember_state
 4548              		.cfi_restore 3
 4549              		.cfi_def_cfa_offset 40
 4550              	.LVL558:
 4551 0080 5D       		popq	%rbp
 4552              		.cfi_restore 6
 4553              		.cfi_def_cfa_offset 32
 4554              	.LVL559:
 4555 0081 415C     		popq	%r12
 4556              		.cfi_restore 12
 4557              		.cfi_def_cfa_offset 24
 4558 0083 415D     		popq	%r13
 4559              		.cfi_restore 13
 4560              		.cfi_def_cfa_offset 16
 4561              	.LVL560:
 4562 0085 415E     		popq	%r14
 4563              		.cfi_restore 14
 4564              		.cfi_def_cfa_offset 8
 4565              	.LBB1207:
 4566              	.LBB1205:
 4567              	.LBB1204:
 4568              	.LBB1203:
 4569              	.LBB1202:
 4570              	.LBB1200:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4571              		.loc 1 861 0
 4572 0087 E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 4572      00
 4573              	.LVL561:
 4574 008c 0F1F4000 		.p2align 4,,10
 4575              		.p2align 3
 4576              	.L423:
 4577              		.cfi_restore_state
 4578              	.LBE1200:
 4579              	.LBE1202:
 4580              	.LBE1203:
 4581              	.LBE1204:
 4582              	.LBE1205:
 4583              	.LBE1207:
 216:fltk-1.3.4-1/src/Fl_Table.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4584              		.loc 4 216 0
 4585 0090 5B       		popq	%rbx
 4586              		.cfi_restore 3
 4587              		.cfi_def_cfa_offset 40
 4588              	.LVL562:
 4589 0091 5D       		popq	%rbp
 4590              		.cfi_restore 6
 4591              		.cfi_def_cfa_offset 32
 4592              	.LVL563:
 4593 0092 415C     		popq	%r12
 4594              		.cfi_restore 12
 4595              		.cfi_def_cfa_offset 24
 4596 0094 415D     		popq	%r13
 4597              		.cfi_restore 13
 4598              		.cfi_def_cfa_offset 16
 4599              	.LVL564:
 4600 0096 415E     		popq	%r14
 4601              		.cfi_restore 14
 4602              		.cfi_def_cfa_offset 8
 4603              	.L438:
 4604 0098 F3C3     		rep ret
 4605              	.LVL565:
 4606 009a 660F1F44 		.p2align 4,,10
 4606      0000
 4607              		.p2align 3
 4608              	.L426:
 4609              		.cfi_def_cfa_offset 48
 4610              		.cfi_offset 3, -48
 4611              		.cfi_offset 6, -40
 4612              		.cfi_offset 12, -32
 4613              		.cfi_offset 13, -24
 4614              		.cfi_offset 14, -16
 202:fltk-1.3.4-1/src/Fl_Table.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 4615              		.loc 4 202 0
 4616 00a0 448D7601 		leal	1(%rsi), %r14d
 4617              	.LVL566:
 4618              	.LBB1208:
 4619              	.LBB1209:
 247:fltk-1.3.4-1/FL/Fl_Table.H ****         arr = (int*)realloc(arr, count * sizeof(int));
 4620              		.loc 3 247 0
 4621 00a4 4539E6   		cmpl	%r12d, %r14d
 4622 00a7 7477     		je	.L440
 4623              	.LVL567:
 4624              	.LBB1210:
 4625              	.LBB1211:
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 4626              		.loc 3 248 0
 4627 00a9 488BBFE8 		movq	232(%rdi), %rdi
 4627      000000
 4628 00b0 4489F6   		movl	%r14d, %esi
 4629              	.LVL568:
 4630 00b3 48C1E602 		salq	$2, %rsi
 4631 00b7 E8000000 		call	realloc
 4631      00
 4632              	.LVL569:
 249:fltk-1.3.4-1/FL/Fl_Table.H ****       }
 4633              		.loc 3 249 0
 4634 00bc 4489B3F0 		movl	%r14d, 240(%rbx)
 4634      000000
 248:fltk-1.3.4-1/FL/Fl_Table.H ****         _size = count;
 4635              		.loc 3 248 0
 4636 00c3 488983E8 		movq	%rax, 232(%rbx)
 4636      000000
 4637              	.LVL570:
 4638              	.L430:
 4639              	.LBE1211:
 4640              	.LBE1210:
 4641              	.LBE1209:
 4642              	.LBE1208:
 203:fltk-1.3.4-1/src/Fl_Table.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 4643              		.loc 4 203 0
 4644 00ca 4439E5   		cmpl	%r12d, %ebp
 4645 00cd 7E6E     		jle	.L431
 4646 00cf 4963D4   		movslq	%r12d, %rdx
 4647 00d2 41F7D4   		notl	%r12d
 4648              	.LVL571:
 4649 00d5 418D342C 		leal	(%r12,%rbp), %esi
 4650 00d9 488D0C95 		leaq	0(,%rdx,4), %rcx
 4650      00000000 
 4651 00e1 488D7432 		leaq	1(%rdx,%rsi), %rsi
 4651      01
 4652 00e6 48C1E602 		salq	$2, %rsi
 4653 00ea EB0B     		jmp	.L432
 4654              	.LVL572:
 4655 00ec 0F1F4000 		.p2align 4,,10
 4656              		.p2align 3
 4657              	.L441:
 4658 00f0 488B83E8 		movq	232(%rbx), %rax
 4658      000000
 4659              	.LVL573:
 4660              	.L432:
 204:fltk-1.3.4-1/src/Fl_Table.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 4661              		.loc 4 204 0
 4662 00f7 44892C08 		movl	%r13d, (%rax,%rcx)
 4663 00fb 4883C104 		addq	$4, %rcx
 203:fltk-1.3.4-1/src/Fl_Table.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 4664              		.loc 4 203 0
 4665 00ff 4839CE   		cmpq	%rcx, %rsi
 4666 0102 75EC     		jne	.L441
 4667 0104 488B93E8 		movq	232(%rbx), %rdx
 4667      000000
 4668 010b 4863C5   		movslq	%ebp, %rax
 4669 010e 488D0482 		leaq	(%rdx,%rax,4), %rax
 4670 0112 E920FFFF 		jmp	.L428
 4670      FF
 4671              	.LVL574:
 4672 0117 660F1F84 		.p2align 4,,10
 4672      00000000 
 4672      00
 4673              		.p2align 3
 4674              	.L440:
 4675 0120 488B87E8 		movq	232(%rdi), %rax
 4675      000000
 4676 0127 EBA1     		jmp	.L430
 4677              	.LVL575:
 4678 0129 0F1F8000 		.p2align 4,,10
 4678      000000
 4679              		.p2align 3
 4680              	.L439:
 4681              	.LBB1212:
 4682              	.LBB1206:
 210:fltk-1.3.4-1/src/Fl_Table.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 4683              		.loc 4 210 0
 4684 0130 4889DF   		movq	%rbx, %rdi
 4685 0133 E8000000 		call	_ZN9Fl_Widget6redrawEv
 4685      00
 4686              	.LVL576:
 4687 0138 E911FFFF 		jmp	.L434
 4687      FF
 4688              	.LVL577:
 4689              	.L431:
 4690 013d 4863D5   		movslq	%ebp, %rdx
 4691 0140 488D0490 		leaq	(%rax,%rdx,4), %rax
 4692 0144 E9EEFEFF 		jmp	.L428
 4692      FF
 4693              	.LBE1206:
 4694              	.LBE1212:
 4695              		.cfi_endproc
 4696              	.LFE580:
 4698              		.section	.text.unlikely._ZN8Fl_Table9col_widthEii
 4699              	.LCOLDE36:
 4700              		.section	.text._ZN8Fl_Table9col_widthEii
 4701              	.LHOTE36:
 4702              		.section	.text.unlikely._ZN8Fl_Table13change_cursorE9Fl_Cursor,"ax",@progbits
 4703              		.align 2
 4704              	.LCOLDB37:
 4705              		.section	.text._ZN8Fl_Table13change_cursorE9Fl_Cursor,"ax",@progbits
 4706              	.LHOTB37:
 4707              		.align 2
 4708              		.p2align 4,,15
 4709              		.globl	_ZN8Fl_Table13change_cursorE9Fl_Cursor
 4711              	_ZN8Fl_Table13change_cursorE9Fl_Cursor:
 4712              	.LFB595:
 647:fltk-1.3.4-1/src/Fl_Table.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 4713              		.loc 4 647 0
 4714              		.cfi_startproc
 4715              	.LVL578:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 4716              		.loc 4 648 0
 4717 0000 39B70801 		cmpl	%esi, 264(%rdi)
 4717      0000
 4718 0006 7408     		je	.L442
 4719 0008 E9000000 		jmp	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 4719      00
 4720              	.LVL579:
 4721 000d 0F1F00   		.p2align 4,,10
 4722              		.p2align 3
 4723              	.L442:
 4724 0010 F3C3     		rep ret
 4725              		.cfi_endproc
 4726              	.LFE595:
 4728              		.section	.text.unlikely._ZN8Fl_Table13change_cursorE9Fl_Cursor
 4729              	.LCOLDE37:
 4730              		.section	.text._ZN8Fl_Table13change_cursorE9Fl_Cursor
 4731              	.LHOTE37:
 4732              		.section	.text.unlikely._ZN8Fl_Table11damage_zoneEiiiiii,"ax",@progbits
 4733              		.align 2
 4734              	.LCOLDB38:
 4735              		.section	.text._ZN8Fl_Table11damage_zoneEiiiiii,"ax",@progbits
 4736              	.LHOTB38:
 4737              		.align 2
 4738              		.p2align 4,,15
 4739              		.globl	_ZN8Fl_Table11damage_zoneEiiiiii
 4741              	_ZN8Fl_Table11damage_zoneEiiiiii:
 4742              	.LFB596:
 654:fltk-1.3.4-1/src/Fl_Table.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 4743              		.loc 4 654 0
 4744              		.cfi_startproc
 4745              	.LVL580:
 657:fltk-1.3.4-1/src/Fl_Table.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 4746              		.loc 4 657 0
 4747 0000 39CE     		cmpl	%ecx, %esi
 654:fltk-1.3.4-1/src/Fl_Table.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 4748              		.loc 4 654 0
 4749 0002 8B442408 		movl	8(%rsp), %eax
 657:fltk-1.3.4-1/src/Fl_Table.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 4750              		.loc 4 657 0
 4751 0006 7E08     		jle	.L445
 4752 0008 4189F2   		movl	%esi, %r10d
 4753 000b 89CE     		movl	%ecx, %esi
 4754              	.LVL581:
 4755 000d 4489D1   		movl	%r10d, %ecx
 4756              	.LVL582:
 4757              	.L445:
 4758 0010 4139C9   		cmpl	%ecx, %r9d
 4759 0013 410F4DC9 		cmovge	%r9d, %ecx
 4760              	.LVL583:
 4761 0017 4439CE   		cmpl	%r9d, %esi
 4762 001a 410F4FF1 		cmovg	%r9d, %esi
 4763              	.LVL584:
 661:fltk-1.3.4-1/src/Fl_Table.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 4764              		.loc 4 661 0
 4765 001e 4439C2   		cmpl	%r8d, %edx
 4766 0021 7E09     		jle	.L446
 4767 0023 4189D1   		movl	%edx, %r9d
 4768              	.LVL585:
 4769 0026 4489C2   		movl	%r8d, %edx
 4770              	.LVL586:
 4771 0029 4589C8   		movl	%r9d, %r8d
 4772              	.LVL587:
 4773              	.L446:
 4774 002c 4439C0   		cmpl	%r8d, %eax
 4775 002f 440F4DC0 		cmovge	%eax, %r8d
 4776              	.LVL588:
 4777 0033 39C2     		cmpl	%eax, %edx
 4778 0035 0F4FD0   		cmovg	%eax, %edx
 4779              	.LVL589:
 665:fltk-1.3.4-1/src/Fl_Table.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 4780              		.loc 4 665 0
 4781 0038 85F6     		testl	%esi, %esi
 4782 003a 0F888800 		js	.L457
 4782      0000
 669:fltk-1.3.4-1/src/Fl_Table.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4783              		.loc 4 669 0
 4784 0040 85D2     		testl	%edx, %edx
 4785 0042 0F888E00 		js	.L458
 4785      0000
 4786              	.LVL590:
 4787              	.L449:
 673:fltk-1.3.4-1/src/Fl_Table.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 4788              		.loc 4 673 0
 4789 0048 448B8F34 		movl	308(%rdi), %r9d
 4789      010000
 674:fltk-1.3.4-1/src/Fl_Table.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 4790              		.loc 4 674 0
 4791 004f 8B873801 		movl	312(%rdi), %eax
 4791      0000
 4792 0055 4439CE   		cmpl	%r9d, %esi
 4793 0058 410F4CF1 		cmovl	%r9d, %esi
 4794              	.LVL591:
 4795 005c 39C8     		cmpl	%ecx, %eax
 4796 005e 0F4EC8   		cmovle	%eax, %ecx
 4797              	.LVL592:
 675:fltk-1.3.4-1/src/Fl_Table.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4798              		.loc 4 675 0
 4799 0061 8B873C01 		movl	316(%rdi), %eax
 4799      0000
 4800 0067 39C2     		cmpl	%eax, %edx
 4801 0069 0F4CD0   		cmovl	%eax, %edx
 4802              	.LVL593:
 676:fltk-1.3.4-1/src/Fl_Table.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4803              		.loc 4 676 0
 4804 006c 8B874001 		movl	320(%rdi), %eax
 4804      0000
 4805 0072 4139C0   		cmpl	%eax, %r8d
 4806 0075 440F4FC0 		cmovg	%eax, %r8d
 4807              	.LVL594:
 4808              	.LBB1215:
 4809              	.LBB1216:
 456:fltk-1.3.4-1/FL/Fl_Table.H ****       // Initialize redraw range
 4810              		.loc 3 456 0
 4811 0079 8B87C400 		movl	196(%rdi), %eax
 4811      0000
 4812 007f 83F8FF   		cmpl	$-1, %eax
 4813 0082 7464     		je	.L459
 464:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( botRow > _redraw_botrow ) _redraw_botrow = botRow;
 4814              		.loc 3 464 0
 4815 0084 39F0     		cmpl	%esi, %eax
 4816 0086 7E06     		jle	.L452
 4817 0088 89B7C400 		movl	%esi, 196(%rdi)
 4817      0000
 4818              	.L452:
 465:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( leftCol < _redraw_leftcol ) _redraw_leftcol = leftCol;
 4819              		.loc 3 465 0
 4820 008e 398FC800 		cmpl	%ecx, 200(%rdi)
 4820      0000
 4821 0094 7D06     		jge	.L453
 4822 0096 898FC800 		movl	%ecx, 200(%rdi)
 4822      0000
 4823              	.L453:
 466:fltk-1.3.4-1/FL/Fl_Table.H ****       if ( rightCol > _redraw_rightcol ) _redraw_rightcol = rightCol;
 4824              		.loc 3 466 0
 4825 009c 3997CC00 		cmpl	%edx, 204(%rdi)
 4825      0000
 4826 00a2 7E06     		jle	.L454
 4827 00a4 8997CC00 		movl	%edx, 204(%rdi)
 4827      0000
 4828              	.L454:
 467:fltk-1.3.4-1/FL/Fl_Table.H ****     }
 4829              		.loc 3 467 0
 4830 00aa 443987D0 		cmpl	%r8d, 208(%rdi)
 4830      000000
 4831 00b1 7D07     		jge	.L451
 4832 00b3 448987D0 		movl	%r8d, 208(%rdi)
 4832      000000
 4833              	.L451:
 471:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 4834              		.loc 3 471 0
 4835 00ba BE010000 		movl	$1, %esi
 4835      00
 4836              	.LVL595:
 4837 00bf E9000000 		jmp	_ZN9Fl_Widget6damageEh
 4837      00
 4838              	.LVL596:
 4839              		.p2align 4,,10
 4840 00c4 0F1F4000 		.p2align 3
 4841              	.L457:
 4842              	.LBE1216:
 4843              	.LBE1215:
 666:fltk-1.3.4-1/src/Fl_Table.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 4844              		.loc 4 666 0
 4845 00c8 85C9     		testl	%ecx, %ecx
 4846 00ca 7844     		js	.L444
 667:fltk-1.3.4-1/src/Fl_Table.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 4847              		.loc 4 667 0
 4848 00cc 31F6     		xorl	%esi, %esi
 4849              	.LVL597:
 669:fltk-1.3.4-1/src/Fl_Table.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4850              		.loc 4 669 0
 4851 00ce 85D2     		testl	%edx, %edx
 4852 00d0 0F8972FF 		jns	.L449
 4852      FFFF
 4853              	.L458:
 670:fltk-1.3.4-1/src/Fl_Table.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 4854              		.loc 4 670 0
 4855 00d6 4585C0   		testl	%r8d, %r8d
 4856 00d9 7835     		js	.L444
 671:fltk-1.3.4-1/src/Fl_Table.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4857              		.loc 4 671 0
 4858 00db 31D2     		xorl	%edx, %edx
 4859              	.LVL598:
 4860 00dd E966FFFF 		jmp	.L449
 4860      FF
 4861              	.LVL599:
 4862              		.p2align 4,,10
 4863 00e2 660F1F44 		.p2align 3
 4863      0000
 4864              	.L459:
 4865              	.LBB1218:
 4866              	.LBB1217:
 458:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_botrow = botRow;
 4867              		.loc 3 458 0
 4868 00e8 89B7C400 		movl	%esi, 196(%rdi)
 4868      0000
 459:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_leftcol = leftCol;
 4869              		.loc 3 459 0
 4870 00ee 898FC800 		movl	%ecx, 200(%rdi)
 4870      0000
 471:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 4871              		.loc 3 471 0
 4872 00f4 BE010000 		movl	$1, %esi
 4872      00
 4873              	.LVL600:
 460:fltk-1.3.4-1/FL/Fl_Table.H ****       _redraw_rightcol = rightCol;
 4874              		.loc 3 460 0
 4875 00f9 8997CC00 		movl	%edx, 204(%rdi)
 4875      0000
 461:fltk-1.3.4-1/FL/Fl_Table.H ****     } else {
 4876              		.loc 3 461 0
 4877 00ff 448987D0 		movl	%r8d, 208(%rdi)
 4877      000000
 471:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 4878              		.loc 3 471 0
 4879 0106 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 4879      00
 4880              	.LVL601:
 4881 010b 0F1F4400 		.p2align 4,,10
 4881      00
 4882              		.p2align 3
 4883              	.L444:
 4884 0110 F3C3     		rep ret
 4885              	.LBE1217:
 4886              	.LBE1218:
 4887              		.cfi_endproc
 4888              	.LFE596:
 4890              		.section	.text.unlikely._ZN8Fl_Table11damage_zoneEiiiiii
 4891              	.LCOLDE38:
 4892              		.section	.text._ZN8Fl_Table11damage_zoneEiiiiii
 4893              	.LHOTE38:
 4894              		.section	.text.unlikely._ZN8Fl_Table11move_cursorEiii,"ax",@progbits
 4895              		.align 2
 4896              	.LCOLDB39:
 4897              		.section	.text._ZN8Fl_Table11move_cursorEiii,"ax",@progbits
 4898              	.LHOTB39:
 4899              		.align 2
 4900              		.p2align 4,,15
 4901              		.globl	_ZN8Fl_Table11move_cursorEiii
 4903              	_ZN8Fl_Table11move_cursorEiii:
 4904              	.LFB597:
 680:fltk-1.3.4-1/src/Fl_Table.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 4905              		.loc 4 680 0
 4906              		.cfi_startproc
 4907              	.LVL602:
 4908 0000 4155     		pushq	%r13
 4909              		.cfi_def_cfa_offset 16
 4910              		.cfi_offset 13, -16
 4911 0002 4154     		pushq	%r12
 4912              		.cfi_def_cfa_offset 24
 4913              		.cfi_offset 12, -24
 4914 0004 4189CD   		movl	%ecx, %r13d
 4915 0007 55       		pushq	%rbp
 4916              		.cfi_def_cfa_offset 32
 4917              		.cfi_offset 6, -32
 4918 0008 53       		pushq	%rbx
 4919              		.cfi_def_cfa_offset 40
 4920              		.cfi_offset 3, -40
 681:fltk-1.3.4-1/src/Fl_Table.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4921              		.loc 4 681 0
 4922 0009 31C0     		xorl	%eax, %eax
 680:fltk-1.3.4-1/src/Fl_Table.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 4923              		.loc 4 680 0
 4924 000b 4989FC   		movq	%rdi, %r12
 4925 000e 4883EC08 		subq	$8, %rsp
 4926              		.cfi_def_cfa_offset 48
 681:fltk-1.3.4-1/src/Fl_Table.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4927              		.loc 4 681 0
 4928 0012 8B8F4C01 		movl	332(%rdi), %ecx
 4928      0000
 4929              	.LVL603:
 682:fltk-1.3.4-1/src/Fl_Table.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 4930              		.loc 4 682 0
 4931 0018 448B8750 		movl	336(%rdi), %r8d
 4931      010000
 681:fltk-1.3.4-1/src/Fl_Table.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4932              		.loc 4 681 0
 4933 001f 83F9FF   		cmpl	$-1, %ecx
 4934 0022 0F94C0   		sete	%al
 4935 0025 01C6     		addl	%eax, %esi
 4936              	.LVL604:
 682:fltk-1.3.4-1/src/Fl_Table.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 4937              		.loc 4 682 0
 4938 0027 31C0     		xorl	%eax, %eax
 4939 0029 4183F8FF 		cmpl	$-1, %r8d
 4940 002d 0F94C0   		sete	%al
 4941 0030 31ED     		xorl	%ebp, %ebp
 4942 0032 01C2     		addl	%eax, %edx
 4943              	.LVL605:
 4944 0034 01CE     		addl	%ecx, %esi
 4945              	.LVL606:
 4946 0036 8B87A000 		movl	160(%rdi), %eax
 4946      0000
 4947 003c 89F3     		movl	%esi, %ebx
 4948 003e 0F48DD   		cmovs	%ebp, %ebx
 4949              	.LVL607:
 686:fltk-1.3.4-1/src/Fl_Table.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4950              		.loc 4 686 0
 4951 0041 39D8     		cmpl	%ebx, %eax
 4952 0043 8D70FF   		leal	-1(%rax), %esi
 4953 0046 8B87A400 		movl	164(%rdi), %eax
 4953      0000
 4954 004c 0F4EDE   		cmovle	%esi, %ebx
 4955              	.LVL608:
 4956 004f 4401C2   		addl	%r8d, %edx
 4957              	.LVL609:
 4958 0052 0F49EA   		cmovns	%edx, %ebp
 4959              	.LVL610:
 688:fltk-1.3.4-1/src/Fl_Table.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4960              		.loc 4 688 0
 4961 0055 8D50FF   		leal	-1(%rax), %edx
 4962 0058 39E8     		cmpl	%ebp, %eax
 4963 005a 0F4EEA   		cmovle	%edx, %ebp
 4964              	.LVL611:
 689:fltk-1.3.4-1/src/Fl_Table.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 4965              		.loc 4 689 0
 4966 005d 39CB     		cmpl	%ecx, %ebx
 4967 005f 750B     		jne	.L474
 4968 0061 31C0     		xorl	%eax, %eax
 4969 0063 4439C5   		cmpl	%r8d, %ebp
 4970 0066 0F848300 		je	.L481
 4970      0000
 4971              	.L474:
 690:fltk-1.3.4-1/src/Fl_Table.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 4972              		.loc 4 690 0
 4973 006c 4883EC08 		subq	$8, %rsp
 4974              		.cfi_def_cfa_offset 56
 4975 0070 418B9424 		movl	328(%r12), %edx
 4975      48010000 
 4976 0078 418BB424 		movl	324(%r12), %esi
 4976      44010000 
 4977 0080 55       		pushq	%rbp
 4978              		.cfi_def_cfa_offset 64
 4979 0081 4189D9   		movl	%ebx, %r9d
 4980 0084 4C89E7   		movq	%r12, %rdi
 4981              	.LVL612:
 4982 0087 E8000000 		call	_ZN8Fl_Table11damage_zoneEiiiiii
 4982      00
 4983              	.LVL613:
 693:fltk-1.3.4-1/src/Fl_Table.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4984              		.loc 4 693 0
 4985 008c 4585ED   		testl	%r13d, %r13d
 691:fltk-1.3.4-1/src/Fl_Table.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 4986              		.loc 4 691 0
 4987 008f 41899C24 		movl	%ebx, 332(%r12)
 4987      4C010000 
 692:fltk-1.3.4-1/src/Fl_Table.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 4988              		.loc 4 692 0
 4989 0097 4189AC24 		movl	%ebp, 336(%r12)
 4989      50010000 
 693:fltk-1.3.4-1/src/Fl_Table.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4990              		.loc 4 693 0
 4991 009f 58       		popq	%rax
 4992              		.cfi_def_cfa_offset 56
 4993 00a0 5A       		popq	%rdx
 4994              		.cfi_def_cfa_offset 48
 4995 00a1 756D     		jne	.L486
 4996              	.L467:
 694:fltk-1.3.4-1/src/Fl_Table.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 4997              		.loc 4 694 0
 4998 00a3 41899C24 		movl	%ebx, 324(%r12)
 4998      44010000 
 695:fltk-1.3.4-1/src/Fl_Table.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 4999              		.loc 4 695 0
 5000 00ab 4189AC24 		movl	%ebp, 328(%r12)
 5000      48010000 
 5001              	.L471:
 697:fltk-1.3.4-1/src/Fl_Table.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 5002              		.loc 4 697 0
 5003 00b3 413B9C24 		cmpl	308(%r12), %ebx
 5003      34010000 
 5004 00bb 7E43     		jle	.L468
 697:fltk-1.3.4-1/src/Fl_Table.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 5005              		.loc 4 697 0 is_stmt 0 discriminator 2
 5006 00bd 413B9C24 		cmpl	312(%r12), %ebx
 5006      38010000 
 5007 00c5 7D39     		jge	.L468
 5008              	.L469:
 698:fltk-1.3.4-1/src/Fl_Table.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5009              		.loc 4 698 0 is_stmt 1
 5010 00c7 413BAC24 		cmpl	316(%r12), %ebp
 5010      3C010000 
 5011 00cf 7E0F     		jle	.L470
 698:fltk-1.3.4-1/src/Fl_Table.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5012              		.loc 4 698 0 is_stmt 0 discriminator 2
 5013 00d1 413BAC24 		cmpl	320(%r12), %ebp
 5013      40010000 
 699:fltk-1.3.4-1/src/Fl_Table.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 5014              		.loc 4 699 0 is_stmt 1 discriminator 2
 5015 00d9 B8010000 		movl	$1, %eax
 5015      00
 698:fltk-1.3.4-1/src/Fl_Table.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5016              		.loc 4 698 0 discriminator 2
 5017 00de 7C0F     		jl	.L481
 5018              	.L470:
 698:fltk-1.3.4-1/src/Fl_Table.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5019              		.loc 4 698 0 is_stmt 0 discriminator 3
 5020 00e0 89EE     		movl	%ebp, %esi
 5021 00e2 4C89E7   		movq	%r12, %rdi
 5022 00e5 E8000000 		call	_ZN8Fl_Table12col_positionEi
 5022      00
 5023              	.LVL614:
 699:fltk-1.3.4-1/src/Fl_Table.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 5024              		.loc 4 699 0 is_stmt 1 discriminator 3
 5025 00ea B8010000 		movl	$1, %eax
 5025      00
 5026              	.L481:
 700:fltk-1.3.4-1/src/Fl_Table.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5027              		.loc 4 700 0
 5028 00ef 4883C408 		addq	$8, %rsp
 5029              		.cfi_remember_state
 5030              		.cfi_def_cfa_offset 40
 5031 00f3 5B       		popq	%rbx
 5032              		.cfi_def_cfa_offset 32
 5033              	.LVL615:
 5034 00f4 5D       		popq	%rbp
 5035              		.cfi_def_cfa_offset 24
 5036              	.LVL616:
 5037 00f5 415C     		popq	%r12
 5038              		.cfi_def_cfa_offset 16
 5039              	.LVL617:
 5040 00f7 415D     		popq	%r13
 5041              		.cfi_def_cfa_offset 8
 5042              	.LVL618:
 5043 00f9 C3       		ret
 5044              	.LVL619:
 5045 00fa 660F1F44 		.p2align 4,,10
 5045      0000
 5046              		.p2align 3
 5047              	.L468:
 5048              		.cfi_restore_state
 697:fltk-1.3.4-1/src/Fl_Table.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 5049              		.loc 4 697 0 discriminator 3
 5050 0100 89DE     		movl	%ebx, %esi
 5051 0102 4C89E7   		movq	%r12, %rdi
 5052 0105 E8000000 		call	_ZN8Fl_Table12row_positionEi
 5052      00
 5053              	.LVL620:
 5054 010a EBBB     		jmp	.L469
 5055 010c 0F1F4000 		.p2align 4,,10
 5056              		.p2align 3
 5057              	.L486:
 693:fltk-1.3.4-1/src/Fl_Table.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5058              		.loc 4 693 0
 5059 0110 F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 5059      000001
 5060 0117 748A     		je	.L467
 5061 0119 EB98     		jmp	.L471
 5062              		.cfi_endproc
 5063              	.LFE597:
 5065              		.section	.text.unlikely._ZN8Fl_Table11move_cursorEiii
 5066              	.LCOLDE39:
 5067              		.section	.text._ZN8Fl_Table11move_cursorEiii
 5068              	.LHOTE39:
 5069              		.section	.text.unlikely._ZN8Fl_Table11move_cursorEii,"ax",@progbits
 5070              		.align 2
 5071              	.LCOLDB40:
 5072              		.section	.text._ZN8Fl_Table11move_cursorEii,"ax",@progbits
 5073              	.LHOTB40:
 5074              		.align 2
 5075              		.p2align 4,,15
 5076              		.globl	_ZN8Fl_Table11move_cursorEii
 5078              	_ZN8Fl_Table11move_cursorEii:
 5079              	.LFB598:
 702:fltk-1.3.4-1/src/Fl_Table.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 5080              		.loc 4 702 0
 5081              		.cfi_startproc
 5082              	.LVL621:
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 5083              		.loc 4 703 0
 5084 0000 B9010000 		movl	$1, %ecx
 5084      00
 5085 0005 E9000000 		jmp	_ZN8Fl_Table11move_cursorEiii
 5085      00
 5086              	.LVL622:
 5087              		.cfi_endproc
 5088              	.LFE598:
 5090              		.section	.text.unlikely._ZN8Fl_Table11move_cursorEii
 5091              	.LCOLDE40:
 5092              		.section	.text._ZN8Fl_Table11move_cursorEii
 5093              	.LHOTE40:
 5094              		.section	.text.unlikely._ZN8Fl_Table12_redraw_cellENS_12TableContextEii,"ax",@progbits
 5095              		.align 2
 5096              	.LCOLDB41:
 5097              		.section	.text._ZN8Fl_Table12_redraw_cellENS_12TableContextEii,"ax",@progbits
 5098              	.LHOTB41:
 5099              		.align 2
 5100              		.p2align 4,,15
 5101              		.globl	_ZN8Fl_Table12_redraw_cellENS_12TableContextEii
 5103              	_ZN8Fl_Table12_redraw_cellENS_12TableContextEii:
 5104              	.LFB601:
1087:fltk-1.3.4-1/src/Fl_Table.cxx ****   14:fltk-1.3.4-1/FL/Fl_Group.H **** // Please report all bugs and problems on the following page:
 5105              		.loc 4 1087 0
 5106              		.cfi_startproc
 5107              	.LVL623:
1088:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
 5108              		.loc 4 1088 0
 5109 0000 89D0     		movl	%edx, %eax
 5110 0002 C1E81F   		shrl	$31, %eax
 5111 0005 84C0     		testb	%al, %al
 5112 0007 7509     		jne	.L488
 5113 0009 89C8     		movl	%ecx, %eax
 5114 000b C1E81F   		shrl	$31, %eax
 5115 000e 84C0     		testb	%al, %al
 5116 0010 7406     		je	.L490
 5117              	.L488:
 5118 0012 F3C3     		rep ret
 5119              		.p2align 4,,10
 5120 0014 0F1F4000 		.p2align 3
 5121              	.L490:
 5122 0018 E9000000 		jmp	_ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34
 5122      00
 5123              	.LVL624:
 5124              		.cfi_endproc
 5125              	.LFE601:
 5127              		.section	.text.unlikely._ZN8Fl_Table12_redraw_cellENS_12TableContextEii
 5128              	.LCOLDE41:
 5129              		.section	.text._ZN8Fl_Table12_redraw_cellENS_12TableContextEii
 5130              	.LHOTE41:
 5131              		.section	.text.unlikely._ZN8Fl_Table11is_selectedEii,"ax",@progbits
 5132              		.align 2
 5133              	.LCOLDB42:
 5134              		.section	.text._ZN8Fl_Table11is_selectedEii,"ax",@progbits
 5135              	.LHOTB42:
 5136              		.align 2
 5137              		.p2align 4,,15
 5138              		.globl	_ZN8Fl_Table11is_selectedEii
 5140              	_ZN8Fl_Table11is_selectedEii:
 5141              	.LFB602:
1093:fltk-1.3.4-1/src/Fl_Table.cxx ****   19:fltk-1.3.4-1/FL/Fl_Group.H **** /* \file
1094:fltk-1.3.4-1/src/Fl_Table.cxx ****   20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
1095:fltk-1.3.4-1/src/Fl_Table.cxx ****   21:fltk-1.3.4-1/FL/Fl_Group.H **** 
1096:fltk-1.3.4-1/src/Fl_Table.cxx ****   22:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Group_H
1097:fltk-1.3.4-1/src/Fl_Table.cxx ****   23:fltk-1.3.4-1/FL/Fl_Group.H **** #define Fl_Group_H
1098:fltk-1.3.4-1/src/Fl_Table.cxx ****   24:fltk-1.3.4-1/FL/Fl_Group.H **** 
 5142              		.loc 4 1098 0
 5143              		.cfi_startproc
 5144              	.LVL625:
1099:fltk-1.3.4-1/src/Fl_Table.cxx ****   25:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Widget_H
1100:fltk-1.3.4-1/src/Fl_Table.cxx ****   26:fltk-1.3.4-1/FL/Fl_Group.H **** #include "Fl_Widget.H"
1101:fltk-1.3.4-1/src/Fl_Table.cxx ****   27:fltk-1.3.4-1/FL/Fl_Group.H **** #endif
 5145              		.loc 4 1101 0
 5146 0000 448B8750 		movl	336(%rdi), %r8d
 5146      010000
 5147 0007 448B8F48 		movl	328(%rdi), %r9d
 5147      010000
 5148 000e 4539C8   		cmpl	%r9d, %r8d
 5149 0011 7F09     		jg	.L492
 5150 0013 4489C8   		movl	%r9d, %eax
 5151 0016 4589C1   		movl	%r8d, %r9d
 5152 0019 4189C0   		movl	%eax, %r8d
 5153              	.L492:
 5154              	.LVL626:
1102:fltk-1.3.4-1/src/Fl_Table.cxx ****   28:fltk-1.3.4-1/FL/Fl_Group.H **** 
1103:fltk-1.3.4-1/src/Fl_Table.cxx ****   29:fltk-1.3.4-1/FL/Fl_Group.H **** /**
1104:fltk-1.3.4-1/src/Fl_Table.cxx ****   30:fltk-1.3.4-1/FL/Fl_Group.H ****   The Fl_Group class is the FLTK container widget. It maintain
1105:fltk-1.3.4-1/src/Fl_Table.cxx ****   31:fltk-1.3.4-1/FL/Fl_Group.H ****   an array of child widgets. These children can themselves be 
1106:fltk-1.3.4-1/src/Fl_Table.cxx ****   32:fltk-1.3.4-1/FL/Fl_Group.H ****   including Fl_Group. The most important subclass of Fl_Group
1107:fltk-1.3.4-1/src/Fl_Table.cxx ****   33:fltk-1.3.4-1/FL/Fl_Group.H ****   is Fl_Window, however groups can also be used to control rad
1108:fltk-1.3.4-1/src/Fl_Table.cxx ****   34:fltk-1.3.4-1/FL/Fl_Group.H ****   or to enforce resize behavior.
 5155              		.loc 4 1108 0
 5156 001c 8B8F4C01 		movl	332(%rdi), %ecx
 5156      0000
 5157 0022 8B874401 		movl	324(%rdi), %eax
 5157      0000
 5158 0028 39C1     		cmpl	%eax, %ecx
 5159 002a 7F06     		jg	.L493
 5160 002c 89C7     		movl	%eax, %edi
 5161              	.LVL627:
 5162 002e 89C8     		movl	%ecx, %eax
 5163 0030 89F9     		movl	%edi, %ecx
 5164              	.L493:
 5165              	.LVL628:
1109:fltk-1.3.4-1/src/Fl_Table.cxx ****   35:fltk-1.3.4-1/FL/Fl_Group.H **** 
1110:fltk-1.3.4-1/src/Fl_Table.cxx ****   36:fltk-1.3.4-1/FL/Fl_Group.H ****   The tab and arrow keys are used to move the focus between wi
1111:fltk-1.3.4-1/src/Fl_Table.cxx ****   37:fltk-1.3.4-1/FL/Fl_Group.H ****   this group, and to other groups. The only modifier grabbed i
1112:fltk-1.3.4-1/src/Fl_Table.cxx ****   38:fltk-1.3.4-1/FL/Fl_Group.H ****   (for shift-tab), so that ctrl-tab, alt-up, and such are free
1113:fltk-1.3.4-1/src/Fl_Table.cxx ****   39:fltk-1.3.4-1/FL/Fl_Group.H ****   for the app to use as shortcuts.
1114:fltk-1.3.4-1/src/Fl_Table.cxx ****   40:fltk-1.3.4-1/FL/Fl_Group.H **** */
1115:fltk-1.3.4-1/src/Fl_Table.cxx ****   41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
 5166              		.loc 4 1115 0
 5167 0032 39F0     		cmpl	%esi, %eax
 5168 0034 7F1A     		jg	.L495
 5169 0036 39F1     		cmpl	%esi, %ecx
 5170 0038 7C16     		jl	.L495
1116:fltk-1.3.4-1/src/Fl_Table.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 5171              		.loc 4 1116 0 discriminator 1
 5172 003a 4139D1   		cmpl	%edx, %r9d
 5173 003d 0F9EC0   		setle	%al
 5174              	.LVL629:
 5175 0040 4139D0   		cmpl	%edx, %r8d
 5176 0043 0F9DC2   		setge	%dl
 5177              	.LVL630:
 5178 0046 0FB6D2   		movzbl	%dl, %edx
 5179 0049 21D0     		andl	%edx, %eax
 5180 004b C3       		ret
 5181              	.LVL631:
 5182 004c 0F1F4000 		.p2align 4,,10
 5183              		.p2align 3
 5184              	.L495:
1117:fltk-1.3.4-1/src/Fl_Table.cxx ****   43:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget** array_;
1118:fltk-1.3.4-1/src/Fl_Table.cxx ****   44:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* savedfocus_;
 5185              		.loc 4 1118 0
 5186 0050 31C0     		xorl	%eax, %eax
 5187              	.LVL632:
1119:fltk-1.3.4-1/src/Fl_Table.cxx ****   45:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* resizable_;
 5188              		.loc 4 1119 0
 5189 0052 C3       		ret
 5190              		.cfi_endproc
 5191              	.LFE602:
 5193              		.section	.text.unlikely._ZN8Fl_Table11is_selectedEii
 5194              	.LCOLDE42:
 5195              		.section	.text._ZN8Fl_Table11is_selectedEii
 5196              	.LHOTE42:
 5197              		.section	.text.unlikely._ZN8Fl_Table13get_selectionERiS0_S0_S0_,"ax",@progbits
 5198              		.align 2
 5199              	.LCOLDB43:
 5200              		.section	.text._ZN8Fl_Table13get_selectionERiS0_S0_S0_,"ax",@progbits
 5201              	.LHOTB43:
 5202              		.align 2
 5203              		.p2align 4,,15
 5204              		.globl	_ZN8Fl_Table13get_selectionERiS0_S0_S0_
 5206              	_ZN8Fl_Table13get_selectionERiS0_S0_S0_:
 5207              	.LFB603:
1120:fltk-1.3.4-1/src/Fl_Table.cxx ****   46:fltk-1.3.4-1/FL/Fl_Group.H ****   int children_;
1121:fltk-1.3.4-1/src/Fl_Table.cxx ****   47:fltk-1.3.4-1/FL/Fl_Group.H ****   int *sizes_; // remembered initial sizes of children
1122:fltk-1.3.4-1/src/Fl_Table.cxx ****   48:fltk-1.3.4-1/FL/Fl_Group.H **** 
1123:fltk-1.3.4-1/src/Fl_Table.cxx ****   49:fltk-1.3.4-1/FL/Fl_Group.H ****   int navigation(int);
1124:fltk-1.3.4-1/src/Fl_Table.cxx ****   50:fltk-1.3.4-1/FL/Fl_Group.H ****   static Fl_Group *current_;
1125:fltk-1.3.4-1/src/Fl_Table.cxx ****   51:fltk-1.3.4-1/FL/Fl_Group.H ****  
1126:fltk-1.3.4-1/src/Fl_Table.cxx ****   52:fltk-1.3.4-1/FL/Fl_Group.H ****   // unimplemented copy ctor and assignment operator
1127:fltk-1.3.4-1/src/Fl_Table.cxx ****   53:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group(const Fl_Group&);
1128:fltk-1.3.4-1/src/Fl_Table.cxx ****   54:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group& operator=(const Fl_Group&);
1129:fltk-1.3.4-1/src/Fl_Table.cxx ****   55:fltk-1.3.4-1/FL/Fl_Group.H **** 
 5208              		.loc 4 1129 0
 5209              		.cfi_startproc
 5210              	.LVL633:
1130:fltk-1.3.4-1/src/Fl_Table.cxx ****   56:fltk-1.3.4-1/FL/Fl_Group.H **** protected:
 5211              		.loc 4 1130 0
 5212 0000 8B874801 		movl	328(%rdi), %eax
 5212      0000
 5213 0006 39875001 		cmpl	%eax, 336(%rdi)
 5213      0000
 5214 000c 7E2A     		jle	.L503
1131:fltk-1.3.4-1/src/Fl_Table.cxx ****   57:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw();
 5215              		.loc 4 1131 0
 5216 000e 8902     		movl	%eax, (%rdx)
1132:fltk-1.3.4-1/src/Fl_Table.cxx ****   58:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_child(Fl_Widget& widget) const;
 5217              		.loc 4 1132 0
 5218 0010 8B875001 		movl	336(%rdi), %eax
 5218      0000
 5219 0016 418900   		movl	%eax, (%r8)
1133:fltk-1.3.4-1/src/Fl_Table.cxx ****   59:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_children();
1134:fltk-1.3.4-1/src/Fl_Table.cxx ****   60:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_outside_label(const Fl_Widget& widget) const ;
1135:fltk-1.3.4-1/src/Fl_Table.cxx ****   61:fltk-1.3.4-1/FL/Fl_Group.H ****   void update_child(Fl_Widget& widget) const;
1136:fltk-1.3.4-1/src/Fl_Table.cxx ****   62:fltk-1.3.4-1/FL/Fl_Group.H ****   int  *sizes();
1137:fltk-1.3.4-1/src/Fl_Table.cxx ****   63:fltk-1.3.4-1/FL/Fl_Group.H **** 
 5220              		.loc 4 1137 0
 5221 0019 8B874401 		movl	324(%rdi), %eax
 5221      0000
 5222 001f 39874C01 		cmpl	%eax, 332(%rdi)
 5222      0000
 5223 0025 7F2A     		jg	.L507
 5224              	.L505:
1138:fltk-1.3.4-1/src/Fl_Table.cxx ****   64:fltk-1.3.4-1/FL/Fl_Group.H **** public:
1139:fltk-1.3.4-1/src/Fl_Table.cxx ****   65:fltk-1.3.4-1/FL/Fl_Group.H **** 
1140:fltk-1.3.4-1/src/Fl_Table.cxx ****   66:fltk-1.3.4-1/FL/Fl_Group.H ****   int handle(int);
1141:fltk-1.3.4-1/src/Fl_Table.cxx ****   67:fltk-1.3.4-1/FL/Fl_Group.H ****   void begin();
 5225              		.loc 4 1141 0
 5226 0027 8901     		movl	%eax, (%rcx)
1142:fltk-1.3.4-1/src/Fl_Table.cxx ****   68:fltk-1.3.4-1/FL/Fl_Group.H ****   void end();
 5227              		.loc 4 1142 0
 5228 0029 8B874C01 		movl	332(%rdi), %eax
 5228      0000
 5229 002f 8906     		movl	%eax, (%rsi)
 5230 0031 C3       		ret
 5231              		.p2align 4,,10
 5232 0032 660F1F44 		.p2align 3
 5232      0000
 5233              	.L503:
1134:fltk-1.3.4-1/src/Fl_Table.cxx ****   61:fltk-1.3.4-1/FL/Fl_Group.H ****   void update_child(Fl_Widget& widget) const;
 5234              		.loc 4 1134 0
 5235 0038 418900   		movl	%eax, (%r8)
1135:fltk-1.3.4-1/src/Fl_Table.cxx ****   62:fltk-1.3.4-1/FL/Fl_Group.H ****   int  *sizes();
 5236              		.loc 4 1135 0
 5237 003b 8B875001 		movl	336(%rdi), %eax
 5237      0000
 5238 0041 8902     		movl	%eax, (%rdx)
1137:fltk-1.3.4-1/src/Fl_Table.cxx ****   64:fltk-1.3.4-1/FL/Fl_Group.H **** public:
 5239              		.loc 4 1137 0
 5240 0043 8B874401 		movl	324(%rdi), %eax
 5240      0000
 5241 0049 39874C01 		cmpl	%eax, 332(%rdi)
 5241      0000
 5242 004f 7ED6     		jle	.L505
 5243              	.L507:
1138:fltk-1.3.4-1/src/Fl_Table.cxx ****   65:fltk-1.3.4-1/FL/Fl_Group.H **** 
 5244              		.loc 4 1138 0
 5245 0051 8906     		movl	%eax, (%rsi)
1139:fltk-1.3.4-1/src/Fl_Table.cxx ****   66:fltk-1.3.4-1/FL/Fl_Group.H ****   int handle(int);
 5246              		.loc 4 1139 0
 5247 0053 8B874C01 		movl	332(%rdi), %eax
 5247      0000
 5248 0059 8901     		movl	%eax, (%rcx)
 5249 005b C3       		ret
 5250              		.cfi_endproc
 5251              	.LFE603:
 5253              		.section	.text.unlikely._ZN8Fl_Table13get_selectionERiS0_S0_S0_
 5254              	.LCOLDE43:
 5255              		.section	.text._ZN8Fl_Table13get_selectionERiS0_S0_S0_
 5256              	.LHOTE43:
 5257              		.section	.text.unlikely._ZN8Fl_Table13set_selectionEiiii,"ax",@progbits
 5258              		.align 2
 5259              	.LCOLDB44:
 5260              		.section	.text._ZN8Fl_Table13set_selectionEiiii,"ax",@progbits
 5261              	.LHOTB44:
 5262              		.align 2
 5263              		.p2align 4,,15
 5264              		.globl	_ZN8Fl_Table13set_selectionEiiii
 5266              	_ZN8Fl_Table13set_selectionEiiii:
 5267              	.LFB604:
1143:fltk-1.3.4-1/src/Fl_Table.cxx ****   69:fltk-1.3.4-1/FL/Fl_Group.H ****   static Fl_Group *current();
1144:fltk-1.3.4-1/src/Fl_Table.cxx ****   70:fltk-1.3.4-1/FL/Fl_Group.H ****   static void current(Fl_Group *g);
1145:fltk-1.3.4-1/src/Fl_Table.cxx ****   71:fltk-1.3.4-1/FL/Fl_Group.H **** 
1146:fltk-1.3.4-1/src/Fl_Table.cxx ****   72:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1147:fltk-1.3.4-1/src/Fl_Table.cxx ****   73:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns how many child widgets the group has.
1148:fltk-1.3.4-1/src/Fl_Table.cxx ****   74:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1149:fltk-1.3.4-1/src/Fl_Table.cxx ****   75:fltk-1.3.4-1/FL/Fl_Group.H ****   int children() const {return children_;}
1150:fltk-1.3.4-1/src/Fl_Table.cxx ****   76:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1151:fltk-1.3.4-1/src/Fl_Table.cxx ****   77:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns array()[n].  <i>No range checking is done!</i>
1152:fltk-1.3.4-1/src/Fl_Table.cxx ****   78:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1153:fltk-1.3.4-1/src/Fl_Table.cxx ****   79:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* child(int n) const {return array()[n];}
1154:fltk-1.3.4-1/src/Fl_Table.cxx ****   80:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
1155:fltk-1.3.4-1/src/Fl_Table.cxx ****   81:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1156:fltk-1.3.4-1/src/Fl_Table.cxx ****   82:fltk-1.3.4-1/FL/Fl_Group.H ****     See int Fl_Group::find(const Fl_Widget *w) const 
1157:fltk-1.3.4-1/src/Fl_Table.cxx ****   83:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 5268              		.loc 4 1157 0
 5269              		.cfi_startproc
 5270              	.LVL634:
 5271 0000 4156     		pushq	%r14
 5272              		.cfi_def_cfa_offset 16
 5273              		.cfi_offset 14, -16
 5274 0002 4155     		pushq	%r13
 5275              		.cfi_def_cfa_offset 24
 5276              		.cfi_offset 13, -24
 5277 0004 4589C6   		movl	%r8d, %r14d
 5278 0007 4154     		pushq	%r12
 5279              		.cfi_def_cfa_offset 32
 5280              		.cfi_offset 12, -32
 5281 0009 55       		pushq	%rbp
 5282              		.cfi_def_cfa_offset 40
 5283              		.cfi_offset 6, -40
 5284 000a 4189D4   		movl	%edx, %r12d
 5285 000d 53       		pushq	%rbx
 5286              		.cfi_def_cfa_offset 48
 5287              		.cfi_offset 3, -48
 5288              		.loc 4 1157 0
 5289 000e 89F5     		movl	%esi, %ebp
 5290 0010 4189CD   		movl	%ecx, %r13d
1158:fltk-1.3.4-1/src/Fl_Table.cxx ****   84:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget& o) const {return find(&o);}
 5291              		.loc 4 1158 0
 5292 0013 8B974801 		movl	328(%rdi), %edx
 5292      0000
 5293              	.LVL635:
 5294 0019 8B8F4C01 		movl	332(%rdi), %ecx
 5294      0000
 5295              	.LVL636:
1157:fltk-1.3.4-1/src/Fl_Table.cxx ****   84:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget& o) const {return find(&o);}
 5296              		.loc 4 1157 0
 5297 001f 4889FB   		movq	%rdi, %rbx
 5298              		.loc 4 1158 0
 5299 0022 4883EC08 		subq	$8, %rsp
 5300              		.cfi_def_cfa_offset 56
 5301 0026 8BB74401 		movl	324(%rdi), %esi
 5301      0000
 5302              	.LVL637:
 5303 002c 4531C9   		xorl	%r9d, %r9d
 5304 002f 6A00     		pushq	$0
 5305              		.cfi_def_cfa_offset 64
 5306 0031 448B8750 		movl	336(%rdi), %r8d
 5306      010000
 5307              	.LVL638:
 5308 0038 E8000000 		call	_ZN8Fl_Table11damage_zoneEiiiiii
 5308      00
 5309              	.LVL639:
1159:fltk-1.3.4-1/src/Fl_Table.cxx ****   85:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* const* array() const;
 5310              		.loc 4 1159 0
 5311 003d 4489A348 		movl	%r12d, 328(%rbx)
 5311      010000
1160:fltk-1.3.4-1/src/Fl_Table.cxx ****   86:fltk-1.3.4-1/FL/Fl_Group.H **** 
 5312              		.loc 4 1160 0
 5313 0044 89AB4401 		movl	%ebp, 324(%rbx)
 5313      0000
1161:fltk-1.3.4-1/src/Fl_Table.cxx ****   87:fltk-1.3.4-1/FL/Fl_Group.H ****   void resize(int,int,int,int);
1162:fltk-1.3.4-1/src/Fl_Table.cxx ****   88:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1163:fltk-1.3.4-1/src/Fl_Table.cxx ****   89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, si
 5314              		.loc 4 1163 0
 5315 004a 4489E2   		movl	%r12d, %edx
1161:fltk-1.3.4-1/src/Fl_Table.cxx ****   87:fltk-1.3.4-1/FL/Fl_Group.H ****   void resize(int,int,int,int);
 5316              		.loc 4 1161 0
 5317 004d 4489B350 		movl	%r14d, 336(%rbx)
 5317      010000
1162:fltk-1.3.4-1/src/Fl_Table.cxx ****   89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, si
 5318              		.loc 4 1162 0
 5319 0054 4489AB4C 		movl	%r13d, 332(%rbx)
 5319      010000
 5320              		.loc 4 1163 0
 5321 005b 4589F0   		movl	%r14d, %r8d
 5322 005e 4489E9   		movl	%r13d, %ecx
 5323 0061 89EE     		movl	%ebp, %esi
 5324 0063 4889DF   		movq	%rbx, %rdi
 5325 0066 4531C9   		xorl	%r9d, %r9d
 5326 0069 C7042400 		movl	$0, (%rsp)
 5326      000000
 5327 0070 E8000000 		call	_ZN8Fl_Table11damage_zoneEiiiiii
 5327      00
 5328              	.LVL640:
1164:fltk-1.3.4-1/src/Fl_Table.cxx ****   90:fltk-1.3.4-1/FL/Fl_Group.H ****     and label string. The default boxtype is FL_NO_BOX.
 5329              		.loc 4 1164 0
 5330 0075 58       		popq	%rax
 5331              		.cfi_def_cfa_offset 56
 5332 0076 5A       		popq	%rdx
 5333              		.cfi_def_cfa_offset 48
 5334 0077 5B       		popq	%rbx
 5335              		.cfi_def_cfa_offset 40
 5336              	.LVL641:
 5337 0078 5D       		popq	%rbp
 5338              		.cfi_def_cfa_offset 32
 5339              	.LVL642:
 5340 0079 415C     		popq	%r12
 5341              		.cfi_def_cfa_offset 24
 5342              	.LVL643:
 5343 007b 415D     		popq	%r13
 5344              		.cfi_def_cfa_offset 16
 5345              	.LVL644:
 5346 007d 415E     		popq	%r14
 5347              		.cfi_def_cfa_offset 8
 5348              	.LVL645:
 5349 007f C3       		ret
 5350              		.cfi_endproc
 5351              	.LFE604:
 5353              		.section	.text.unlikely._ZN8Fl_Table13set_selectionEiiii
 5354              	.LCOLDE44:
 5355              		.section	.text._ZN8Fl_Table13set_selectionEiiii
 5356              	.LHOTE44:
 5357              		.section	.text.unlikely._ZN8Fl_Table6resizeEiiii,"ax",@progbits
 5358              		.align 2
 5359              	.LCOLDB45:
 5360              		.section	.text._ZN8Fl_Table6resizeEiiii,"ax",@progbits
 5361              	.LHOTB45:
 5362              		.align 2
 5363              		.p2align 4,,15
 5364              		.globl	_ZN8Fl_Table6resizeEiiii
 5366              	_ZN8Fl_Table6resizeEiiii:
 5367              	.LFB600:
1079:fltk-1.3.4-1/src/Fl_Table.cxx ****    6:fltk-1.3.4-1/FL/Fl_Group.H **** // Copyright 1998-2010 by Bill Spitzak and others.
 5368              		.loc 4 1079 0
 5369              		.cfi_startproc
 5370              	.LVL646:
 5371 0000 53       		pushq	%rbx
 5372              		.cfi_def_cfa_offset 16
 5373              		.cfi_offset 3, -16
1079:fltk-1.3.4-1/src/Fl_Table.cxx ****    6:fltk-1.3.4-1/FL/Fl_Group.H **** // Copyright 1998-2010 by Bill Spitzak and others.
 5374              		.loc 4 1079 0
 5375 0001 4889FB   		movq	%rdi, %rbx
1081:fltk-1.3.4-1/src/Fl_Table.cxx ****    8:fltk-1.3.4-1/FL/Fl_Group.H **** // This library is free software. Distribution and use rights 
 5376              		.loc 4 1081 0
 5377 0004 E8000000 		call	_ZN8Fl_Group6resizeEiiii
 5377      00
 5378              	.LVL647:
1082:fltk-1.3.4-1/src/Fl_Table.cxx ****    9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with thi
 5379              		.loc 4 1082 0
 5380 0009 4889DF   		movq	%rbx, %rdi
 5381 000c E8000000 		call	_ZN8Fl_Table13table_resizedEv
 5381      00
 5382              	.LVL648:
1083:fltk-1.3.4-1/src/Fl_Table.cxx ****   10:fltk-1.3.4-1/FL/Fl_Group.H **** // file is missing or damaged, see the license at:
 5383              		.loc 4 1083 0
 5384 0011 4889DF   		movq	%rbx, %rdi
1084:fltk-1.3.4-1/src/Fl_Table.cxx ****   11:fltk-1.3.4-1/FL/Fl_Group.H **** //
 5385              		.loc 4 1084 0
 5386 0014 5B       		popq	%rbx
 5387              		.cfi_def_cfa_offset 8
 5388              	.LVL649:
1083:fltk-1.3.4-1/src/Fl_Table.cxx ****   10:fltk-1.3.4-1/FL/Fl_Group.H **** // file is missing or damaged, see the license at:
 5389              		.loc 4 1083 0
 5390 0015 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 5390      00
 5391              	.LVL650:
 5392              		.cfi_endproc
 5393              	.LFE600:
 5395              		.section	.text.unlikely._ZN8Fl_Table6resizeEiiii
 5396              	.LCOLDE45:
 5397              		.section	.text._ZN8Fl_Table6resizeEiiii
 5398              	.LHOTE45:
 5399              		.section	.text.unlikely._ZN8Fl_Table6handleEi,"ax",@progbits
 5400              		.align 2
 5401              	.LCOLDB46:
 5402              		.section	.text._ZN8Fl_Table6handleEi,"ax",@progbits
 5403              	.LHOTB46:
 5404              		.align 2
 5405              		.p2align 4,,15
 5406              		.globl	_ZN8Fl_Table6handleEi
 5408              	_ZN8Fl_Table6handleEi:
 5409              	.LFB599:
 716:fltk-1.3.4-1/src/Fl_Table.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 5410              		.loc 4 716 0
 5411              		.cfi_startproc
 5412              	.LVL651:
 5413 0000 4157     		pushq	%r15
 5414              		.cfi_def_cfa_offset 16
 5415              		.cfi_offset 15, -16
 5416 0002 4156     		pushq	%r14
 5417              		.cfi_def_cfa_offset 24
 5418              		.cfi_offset 14, -24
 5419 0004 4155     		pushq	%r13
 5420              		.cfi_def_cfa_offset 32
 5421              		.cfi_offset 13, -32
 5422 0006 4154     		pushq	%r12
 5423              		.cfi_def_cfa_offset 40
 5424              		.cfi_offset 12, -40
 5425 0008 55       		pushq	%rbp
 5426              		.cfi_def_cfa_offset 48
 5427              		.cfi_offset 6, -48
 5428 0009 53       		pushq	%rbx
 5429              		.cfi_def_cfa_offset 56
 5430              		.cfi_offset 3, -56
 5431 000a 89F5     		movl	%esi, %ebp
 718:fltk-1.3.4-1/src/Fl_Table.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5432              		.loc 4 718 0
 5433 000c 89EE     		movl	%ebp, %esi
 5434              	.LVL652:
 716:fltk-1.3.4-1/src/Fl_Table.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 5435              		.loc 4 716 0
 5436 000e 4889FB   		movq	%rdi, %rbx
 5437 0011 4883EC38 		subq	$56, %rsp
 5438              		.cfi_def_cfa_offset 112
 716:fltk-1.3.4-1/src/Fl_Table.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 5439              		.loc 4 716 0
 5440 0015 64488B04 		movq	%fs:40, %rax
 5440      25280000 
 5440      00
 5441 001e 48894424 		movq	%rax, 40(%rsp)
 5441      28
 5442 0023 31C0     		xorl	%eax, %eax
 718:fltk-1.3.4-1/src/Fl_Table.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5443              		.loc 4 718 0
 5444 0025 E8000000 		call	_ZN8Fl_Group6handleEi
 5444      00
 5445              	.LVL653:
 722:fltk-1.3.4-1/src/Fl_Table.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5446              		.loc 4 722 0
 5447 002a 488D7424 		leaq	28(%rsp), %rsi
 5447      1C
 5448 002f 488D4C24 		leaq	36(%rsp), %rcx
 5448      24
 5449 0034 488D5424 		leaq	32(%rsp), %rdx
 5449      20
 718:fltk-1.3.4-1/src/Fl_Table.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5450              		.loc 4 718 0
 5451 0039 4189C5   		movl	%eax, %r13d
 5452              	.LVL654:
 722:fltk-1.3.4-1/src/Fl_Table.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5453              		.loc 4 722 0
 5454 003c 4889DF   		movq	%rbx, %rdi
 5455 003f E8000000 		call	_ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE
 5455      00
 5456              	.LVL655:
 723:fltk-1.3.4-1/src/Fl_Table.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5457              		.loc 4 723 0
 5458 0044 4585ED   		testl	%r13d, %r13d
 722:fltk-1.3.4-1/src/Fl_Table.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5459              		.loc 4 722 0
 5460 0047 4189C6   		movl	%eax, %r14d
 5461              	.LVL656:
 5462 004a 488B3500 		movq	_ZN2Fl6focus_E(%rip), %rsi
 5462      000000
 723:fltk-1.3.4-1/src/Fl_Table.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5463              		.loc 4 723 0
 5464 0051 7535     		jne	.L677
 5465              	.LVL657:
 5466              	.L603:
 5467              	.LBB1322:
 5468              	.LBB1323:
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
 5469              		.loc 6 676 0
 5470 0053 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 5470      0000
 5471              	.LBE1323:
 5472              	.LBE1322:
 5473              	.LBB1325:
 743:fltk-1.3.4-1/src/Fl_Table.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5474              		.loc 4 743 0
 5475 0059 83FD0B   		cmpl	$11, %ebp
 5476              	.LBE1325:
 5477              	.LBB1464:
 5478              	.LBB1465:
 645:fltk-1.3.4-1/FL/Fl.H ****   /**
 5479              		.loc 6 645 0
 5480 005c 8B150000 		movl	_ZN2Fl8e_clicksE(%rip), %edx
 5480      0000
 5481              	.LBE1465:
 5482              	.LBE1464:
 5483              	.LBB1466:
 5484              	.LBB1467:
 598:fltk-1.3.4-1/FL/Fl.H ****   /**
 5485              		.loc 6 598 0
 5486 0062 448B3D00 		movl	_ZN2Fl3e_xE(%rip), %r15d
 5486      000000
 5487              	.LBE1467:
 5488              	.LBE1466:
 5489              	.LBB1468:
 5490              	.LBB1469:
 603:fltk-1.3.4-1/FL/Fl.H ****   /**
 5491              		.loc 6 603 0
 5492 0069 448B1500 		movl	_ZN2Fl3e_yE(%rip), %r10d
 5492      000000
 5493              	.LBE1469:
 5494              	.LBE1468:
 5495              	.LBB1470:
 5496              	.LBB1324:
 5497              		.loc 6 676 0
 5498 0070 448DA018 		leal	-65256(%rax), %r12d
 5498      01FFFF
 5499              	.LBE1324:
 5500              	.LBE1470:
 5501              	.LBB1471:
 743:fltk-1.3.4-1/src/Fl_Table.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5502              		.loc 4 743 0
 5503 0077 0F873402 		ja	.L518
 5503      0000
 5504 007d FF24ED00 		jmp	*.L520(,%rbp,8)
 5504      000000
 5505              		.section	.rodata._ZN8Fl_Table6handleEi,"a",@progbits
 5506              		.align 8
 5507              		.align 4
 5508              	.L520:
 5509 0000 00000000 		.quad	.L518
 5509      00000000 
 5510 0008 00000000 		.quad	.L519
 5510      00000000 
 5511 0010 00000000 		.quad	.L521
 5511      00000000 
 5512 0018 00000000 		.quad	.L522
 5512      00000000 
 5513 0020 00000000 		.quad	.L523
 5513      00000000 
 5514 0028 00000000 		.quad	.L524
 5514      00000000 
 5515 0030 00000000 		.quad	.L525
 5515      00000000 
 5516 0038 00000000 		.quad	.L526
 5516      00000000 
 5517 0040 00000000 		.quad	.L527
 5517      00000000 
 5518 0048 00000000 		.quad	.L518
 5518      00000000 
 5519 0050 00000000 		.quad	.L518
 5519      00000000 
 5520 0058 00000000 		.quad	.L528
 5520      00000000 
 5521              		.section	.text._ZN8Fl_Table6handleEi
 5522              	.LVL658:
 5523              		.p2align 4,,10
 5524 0084 0F1F4000 		.p2align 3
 5525              	.L677:
 5526              	.LBE1471:
 724:fltk-1.3.4-1/src/Fl_Table.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 5527              		.loc 4 724 0
 5528 0088 488BBBA0 		movq	416(%rbx), %rdi
 5528      010000
 5529 008f E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 5529      00
 5530              	.LVL659:
 5531 0094 85C0     		testl	%eax, %eax
 5532 0096 0F843C04 		je	.L678
 5532      0000
 5533              	.LVL660:
 5534              	.L668:
 5535              	.LBB1472:
 5536              	.LBB1326:
 5537              	.LBB1327:
1064:fltk-1.3.4-1/src/Fl_Table.cxx ****   57              		.align 2
 5538              		.loc 4 1064 0
 5539 009c 41BC0100 		movl	$1, %r12d
 5539      0000
 5540              	.LVL661:
 5541              	.L549:
 5542              	.LBE1327:
 5543              	.LBE1326:
 5544              	.LBE1472:
1074:fltk-1.3.4-1/src/Fl_Table.cxx ****    1:fltk-1.3.4-1/FL/Fl_Group.H **** //
 5545              		.loc 4 1074 0
 5546 00a2 488B4C24 		movq	40(%rsp), %rcx
 5546      28
 5547 00a7 6448330C 		xorq	%fs:40, %rcx
 5547      25280000 
 5547      00
 5548 00b0 4489E0   		movl	%r12d, %eax
 5549 00b3 0F85DC0A 		jne	.L679
 5549      0000
 5550 00b9 4883C438 		addq	$56, %rsp
 5551              		.cfi_remember_state
 5552              		.cfi_def_cfa_offset 56
 5553 00bd 5B       		popq	%rbx
 5554              		.cfi_def_cfa_offset 48
 5555              	.LVL662:
 5556 00be 5D       		popq	%rbp
 5557              		.cfi_def_cfa_offset 40
 5558 00bf 415C     		popq	%r12
 5559              		.cfi_def_cfa_offset 32
 5560 00c1 415D     		popq	%r13
 5561              		.cfi_def_cfa_offset 24
 5562 00c3 415E     		popq	%r14
 5563              		.cfi_def_cfa_offset 16
 5564 00c5 415F     		popq	%r15
 5565              		.cfi_def_cfa_offset 8
 5566 00c7 C3       		ret
 5567              	.LVL663:
 5568 00c8 0F1F8400 		.p2align 4,,10
 5568      00000000 
 5569              		.p2align 3
 5570              	.L525:
 5571              		.cfi_restore_state
 5572              	.LBB1473:
 5573              	.LBB1458:
1001:fltk-1.3.4-1/src/Fl_Table.cxx ****  985:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5574              		.loc 4 1001 0
 5575 00d0 4889DF   		movq	%rbx, %rdi
 5576 00d3 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 5576      00
 5577              	.LVL664:
 5578              	.L526:
 5579              	.LBB1358:
 5580              	.LBB1359:
 405:fltk-1.3.4-1/src/Fl_Table.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5581              		.loc 4 405 0
 5582 00d8 8BBBDC00 		movl	220(%rbx), %edi
 5582      0000
 5583 00de 85FF     		testl	%edi, %edi
 5584 00e0 74BA     		je	.L668
 5585 00e2 4889DF   		movq	%rbx, %rdi
 5586              	.LBE1359:
 5587              	.LBE1358:
1006:fltk-1.3.4-1/src/Fl_Table.cxx ****  990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 5588              		.loc 4 1006 0
 5589 00e5 41BC0100 		movl	$1, %r12d
 5589      0000
 5590              	.LBB1361:
 5591              	.LBB1360:
 5592 00eb E8000000 		call	_ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37
 5592      00
 5593              	.LVL665:
 5594 00f0 EBB0     		jmp	.L549
 5595              	.LVL666:
 5596              		.p2align 4,,10
 5597 00f2 660F1F44 		.p2align 3
 5597      0000
 5598              	.L527:
 5599              	.LBE1360:
 5600              	.LBE1361:
 5601              	.LBB1362:
1011:fltk-1.3.4-1/src/Fl_Table.cxx ****  995:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5602              		.loc 4 1011 0
 5603 00f8 8BAB4C01 		movl	332(%rbx), %ebp
 5603      0000
1012:fltk-1.3.4-1/src/Fl_Table.cxx ****  996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Wind
 5604              		.loc 4 1012 0
 5605 00fe 448BAB50 		movl	336(%rbx), %r13d
 5605      010000
1013:fltk-1.3.4-1/src/Fl_Table.cxx ****  997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 5606              		.loc 4 1013 0
 5607 0105 2D50FF00 		subl	$65360, %eax
 5607      00
 5608 010a 83F807   		cmpl	$7, %eax
1011:fltk-1.3.4-1/src/Fl_Table.cxx ****  995:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5609              		.loc 4 1011 0
 5610 010d 89EA     		movl	%ebp, %edx
 5611              	.LVL667:
1012:fltk-1.3.4-1/src/Fl_Table.cxx ****  996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Wind
 5612              		.loc 4 1012 0
 5613 010f 4589E8   		movl	%r13d, %r8d
 5614              	.LVL668:
1013:fltk-1.3.4-1/src/Fl_Table.cxx ****  997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 5615              		.loc 4 1013 0
 5616 0112 0F875108 		ja	.L585
 5616      0000
 5617 0118 FF24C500 		jmp	*.L587(,%rax,8)
 5617      000000
 5618              		.section	.rodata._ZN8Fl_Table6handleEi
 5619              		.align 8
 5620              		.align 4
 5621              	.L587:
 5622 0060 00000000 		.quad	.L586
 5622      00000000 
 5623 0068 00000000 		.quad	.L588
 5623      00000000 
 5624 0070 00000000 		.quad	.L589
 5624      00000000 
 5625 0078 00000000 		.quad	.L590
 5625      00000000 
 5626 0080 00000000 		.quad	.L591
 5626      00000000 
 5627 0088 00000000 		.quad	.L592
 5627      00000000 
 5628 0090 00000000 		.quad	.L593
 5628      00000000 
 5629 0098 00000000 		.quad	.L594
 5629      00000000 
 5630              		.section	.text._ZN8Fl_Table6handleEi
 5631              	.LVL669:
 5632 011f 90       		.p2align 4,,10
 5633              		.p2align 3
 5634              	.L528:
 5635              	.LBE1362:
 972:fltk-1.3.4-1/src/Fl_Table.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5636              		.loc 4 972 0
 5637 0120 4183FE08 		cmpl	$8, %r14d
 5638 0124 0F84F606 		je	.L680
 5638      0000
 976:fltk-1.3.4-1/src/Fl_Table.cxx ****  960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 5639              		.loc 4 976 0
 5640 012a 4183FE04 		cmpl	$4, %r14d
 5641 012e 0F841404 		je	.L681
 5641      0000
 5642              	.L581:
 5643              	.LVL670:
 5644              	.LBB1363:
 5645              	.LBB1364:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 5646              		.loc 4 648 0
 5647 0134 448B9308 		movl	264(%rbx), %r10d
 5647      010000
 5648 013b 4585D2   		testl	%r10d, %r10d
 5649 013e 0F8458FF 		je	.L668
 5649      FFFF
 5650 0144 31F6     		xorl	%esi, %esi
 5651 0146 4889DF   		movq	%rbx, %rdi
 5652              	.LBE1364:
 5653              	.LBE1363:
 982:fltk-1.3.4-1/src/Fl_Table.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 5654              		.loc 4 982 0
 5655 0149 41BC0100 		movl	$1, %r12d
 5655      0000
 5656              	.LBB1366:
 5657              	.LBB1365:
 5658 014f E8000000 		call	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 5658      00
 5659              	.LVL671:
 5660 0154 E949FFFF 		jmp	.L549
 5660      FF
 5661              	.LVL672:
 5662 0159 0F1F8000 		.p2align 4,,10
 5662      000000
 5663              		.p2align 3
 5664              	.L519:
 5665              	.LBE1365:
 5666              	.LBE1366:
 746:fltk-1.3.4-1/src/Fl_Table.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 5667              		.loc 4 746 0
 5668 0160 4183FC01 		cmpl	$1, %r12d
 5669 0164 0F85BE03 		jne	.L529
 5669      0000
 5670 016a 85D2     		testl	%edx, %edx
 5671 016c 0F85B603 		jne	.L529
 5671      0000
 747:fltk-1.3.4-1/src/Fl_Table.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 5672              		.loc 4 747 0
 5673 0172 4839DE   		cmpq	%rbx, %rsi
 5674 0175 0F84C509 		je	.L682
 5674      0000
 5675              	.LVL673:
 5676              	.L530:
 5677 017b 44895424 		movl	%r10d, 12(%rsp)
 5677      0C
 5678              	.LVL674:
 752:fltk-1.3.4-1/src/Fl_Table.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5679              		.loc 4 752 0
 5680 0180 4883EC08 		subq	$8, %rsp
 5681              		.cfi_def_cfa_offset 120
 5682 0184 8B934801 		movl	328(%rbx), %edx
 5682      0000
 5683 018a 8B442428 		movl	40(%rsp), %eax
 5684 018e 8B8B4C01 		movl	332(%rbx), %ecx
 5684      0000
 5685 0194 4889DF   		movq	%rbx, %rdi
 5686 0197 8BB34401 		movl	324(%rbx), %esi
 5686      0000
 5687 019d 448B8350 		movl	336(%rbx), %r8d
 5687      010000
 5688 01a4 50       		pushq	%rax
 5689              		.cfi_def_cfa_offset 128
 5690 01a5 448B4C24 		movl	44(%rsp), %r9d
 5690      2C
 5691 01aa E8000000 		call	_ZN8Fl_Table11damage_zoneEiiiiii
 5691      00
 5692              	.LVL675:
 753:fltk-1.3.4-1/src/Fl_Table.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 5693              		.loc 4 753 0
 5694 01af 58       		popq	%rax
 5695              		.cfi_def_cfa_offset 120
 5696 01b0 4183FE10 		cmpl	$16, %r14d
 5697 01b4 5A       		popq	%rdx
 5698              		.cfi_def_cfa_offset 112
 5699 01b5 448B5424 		movl	12(%rsp), %r10d
 5699      0C
 5700 01ba 0F846007 		je	.L683
 5700      0000
 759:fltk-1.3.4-1/src/Fl_Table.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 5701              		.loc 4 759 0
 5702 01c0 8B442424 		movl	36(%rsp), %eax
 5703 01c4 85C0     		testl	%eax, %eax
 5704 01c6 7565     		jne	.L534
 768:fltk-1.3.4-1/src/Fl_Table.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 5705              		.loc 4 768 0
 5706 01c8 48837B10 		cmpq	$0, 16(%rbx)
 5706      00
 760:fltk-1.3.4-1/src/Fl_Table.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 5707              		.loc 4 760 0
 5708 01cd C7834C01 		movl	$-1, 332(%rbx)
 5708      0000FFFF 
 5708      FFFF
 5709 01d7 C7834401 		movl	$-1, 324(%rbx)
 5709      0000FFFF 
 5709      FFFF
 761:fltk-1.3.4-1/src/Fl_Table.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 5710              		.loc 4 761 0
 5711 01e1 C7835001 		movl	$-1, 336(%rbx)
 5711      0000FFFF 
 5711      FFFF
 5712 01eb C7834801 		movl	$-1, 328(%rbx)
 5712      0000FFFF 
 5712      FFFF
 5713              	.LVL676:
 768:fltk-1.3.4-1/src/Fl_Table.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 5714              		.loc 4 768 0
 5715 01f5 7436     		je	.L534
 5716              	.L670:
 5717 01f7 448B4C24 		movl	28(%rsp), %r9d
 5717      1C
 5718 01fc 8B7C2420 		movl	32(%rsp), %edi
 5719              	.L535:
 5720              	.LBB1367:
 5721              	.LBB1368:
 5722              	.LBB1369:
 5723              	.LBB1370:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5724              		.loc 1 861 0
 5725 0200 488B5318 		movq	24(%rbx), %rdx
 5726              	.LBE1370:
 5727              	.LBE1369:
 5728              		.loc 3 965 0
 5729 0204 89BB1401 		movl	%edi, 276(%rbx)
 5729      0000
 5730              	.LBB1373:
 5731              	.LBB1371:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5732              		.loc 1 861 0
 5733 020a 4889DE   		movq	%rbx, %rsi
 5734              	.LBE1371:
 5735              	.LBE1373:
 963:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_row = row;
 5736              		.loc 3 963 0
 5737 020d 4489B30C 		movl	%r14d, 268(%rbx)
 5737      010000
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 5738              		.loc 3 964 0
 5739 0214 44898B10 		movl	%r9d, 272(%rbx)
 5739      010000
 5740              	.LBB1374:
 5741              	.LBB1372:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5742              		.loc 1 861 0
 5743 021b 4889DF   		movq	%rbx, %rdi
 5744 021e 44895424 		movl	%r10d, 12(%rsp)
 5744      0C
 5745              	.LVL677:
 5746 0223 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 5746      00
 5747              	.LVL678:
 5748 0228 448B5424 		movl	12(%rsp), %r10d
 5748      0C
 5749              	.LVL679:
 5750              	.L534:
 5751              	.LBE1372:
 5752              	.LBE1374:
 5753              	.LBE1368:
 5754              	.LBE1367:
 777:fltk-1.3.4-1/src/Fl_Table.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 5755              		.loc 4 777 0
 5756 022d 4183FE04 		cmpl	$4, %r14d
 5757 0231 0F843106 		je	.L537
 5757      0000
 5758 0237 0F86B305 		jbe	.L684
 5758      0000
 5759 023d 4183FE08 		cmpl	$8, %r14d
 5760 0241 0F847906 		je	.L540
 5760      0000
 5761 0247 4183FE10 		cmpl	$16, %r14d
 5762 024b 0F855F06 		jne	.L536
 5762      0000
 5763 0251 448B4C24 		movl	28(%rsp), %r9d
 5763      1C
 5764              	.L541:
 5765 0256 4489C8   		movl	%r9d, %eax
 780:fltk-1.3.4-1/src/Fl_Table.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 5766              		.loc 4 780 0
 5767 0259 41BD0100 		movl	$1, %r13d
 5767      0000
 5768              	.LVL680:
 5769 025f 90       		.p2align 4,,10
 5770              		.p2align 3
 5771              	.L533:
 853:fltk-1.3.4-1/src/Fl_Table.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5772              		.loc 4 853 0
 5773 0260 89832801 		movl	%eax, 296(%rbx)
 5773      0000
 854:fltk-1.3.4-1/src/Fl_Table.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 5774              		.loc 4 854 0
 5775 0266 4589EC   		movl	%r13d, %r12d
 5776 0269 E934FEFF 		jmp	.L549
 5776      FF
 5777 026e 6690     		.p2align 4,,10
 5778              		.p2align 3
 5779              	.L522:
 986:fltk-1.3.4-1/src/Fl_Table.cxx ****  970:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 5780              		.loc 4 986 0
 5781 0270 4585ED   		testl	%r13d, %r13d
 5782 0273 0F8523FE 		jne	.L668
 5782      FFFF
 986:fltk-1.3.4-1/src/Fl_Table.cxx ****  970:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 5783              		.loc 4 986 0 is_stmt 0 discriminator 1
 5784 0279 4889DF   		movq	%rbx, %rdi
 5785 027c E8000000 		call	_ZN9Fl_Widget10take_focusEv
 5785      00
 5786              	.LVL681:
 5787 0281 E916FEFF 		jmp	.L668
 5787      FF
 5788 0286 662E0F1F 		.p2align 4,,10
 5788      84000000 
 5788      0000
 5789              		.p2align 3
 5790              	.L523:
 992:fltk-1.3.4-1/src/Fl_Table.cxx ****  976:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This group has %d children\n",g->children());
 5791              		.loc 4 992 0 is_stmt 1
 5792 0290 448B4424 		movl	36(%rsp), %r8d
 5792      24
 5793              	.LBB1375:
 5794              	.LBB1376:
 405:fltk-1.3.4-1/src/Fl_Table.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5795              		.loc 4 405 0
 5796 0295 448B8BDC 		movl	220(%rbx), %r9d
 5796      000000
 5797              	.LBE1376:
 5798              	.LBE1375:
 992:fltk-1.3.4-1/src/Fl_Table.cxx ****  976:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This group has %d children\n",g->children());
 5799              		.loc 4 992 0
 5800 029c B8010000 		movl	$1, %eax
 5800      00
 5801 02a1 4585C0   		testl	%r8d, %r8d
 5802 02a4 440F45E8 		cmovne	%eax, %r13d
 5803              	.LVL682:
 5804              	.LBB1379:
 5805              	.LBB1377:
 405:fltk-1.3.4-1/src/Fl_Table.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5806              		.loc 4 405 0
 5807 02a8 4585C9   		testl	%r9d, %r9d
 5808 02ab 0F85A705 		jne	.L685
 5808      0000
 5809              	.LVL683:
 5810              	.L518:
 5811              	.LBE1377:
 5812              	.LBE1379:
 5813              	.LBB1380:
 5814              	.LBB1381:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 5815              		.loc 4 648 0
 5816 02b1 8BB30801 		movl	264(%rbx), %esi
 5816      0000
 5817              	.LBE1381:
 5818              	.LBE1380:
 5819              	.LBE1458:
 5820              	.LBE1473:
 718:fltk-1.3.4-1/src/Fl_Table.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5821              		.loc 4 718 0
 5822 02b7 4589EC   		movl	%r13d, %r12d
 5823              	.LBB1474:
 5824              	.LBB1459:
 5825              	.LBB1383:
 5826              	.LBB1382:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 5827              		.loc 4 648 0
 5828 02ba 85F6     		testl	%esi, %esi
 5829 02bc 0F84E0FD 		je	.L549
 5829      FFFF
 5830              	.LVL684:
 5831 02c2 31F6     		xorl	%esi, %esi
 5832 02c4 4889DF   		movq	%rbx, %rdi
 5833 02c7 E8000000 		call	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 5833      00
 5834              	.LVL685:
 5835 02cc E9D1FDFF 		jmp	.L549
 5835      FF
 5836              	.LVL686:
 5837              		.p2align 4,,10
 5838 02d1 0F1F8000 		.p2align 3
 5838      000000
 5839              	.L521:
 5840              	.LBE1382:
 5841              	.LBE1383:
 5842              	.LBB1384:
 5843              	.LBB1385:
 405:fltk-1.3.4-1/src/Fl_Table.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5844              		.loc 4 405 0
 5845 02d8 448BBBDC 		movl	220(%rbx), %r15d
 5845      000000
 5846 02df 4585FF   		testl	%r15d, %r15d
 5847 02e2 0F852805 		jne	.L686
 5847      0000
 5848              	.L576:
 5849              	.LVL687:
 5850 02e8 4183FE20 		cmpl	$32, %r14d
 5851 02ec 7762     		ja	.L577
 5852 02ee 48B81001 		movabsq	$4295033104, %rax
 5852      01000100 
 5852      0000
 5853 02f8 4C0FA3F0 		btq	%r14, %rax
 5854 02fc 7352     		jnc	.L577
 5855              	.LBE1385:
 5856              	.LBE1384:
 953:fltk-1.3.4-1/src/Fl_Table.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5857              		.loc 4 953 0
 5858 02fe 4883BB18 		cmpq	$-1, 280(%rbx)
 5858      010000FF 
 5859 0306 7548     		jne	.L577
 5860              	.LVL688:
 951:fltk-1.3.4-1/src/Fl_Table.cxx ****  935:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 5861              		.loc 4 951 0
 5862 0308 48837B10 		cmpq	$0, 16(%rbx)
 5862      00
 5863 030d 7441     		je	.L577
 5864              	.LVL689:
 952:fltk-1.3.4-1/src/Fl_Table.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 5865              		.loc 4 952 0
 5866 030f F6436F04 		testb	$4, 111(%rbx)
 5867 0313 743B     		je	.L577
 954:fltk-1.3.4-1/src/Fl_Table.cxx ****  938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 5868              		.loc 4 954 0 discriminator 3
 5869 0315 8B832801 		movl	296(%rbx), %eax
 5869      0000
 953:fltk-1.3.4-1/src/Fl_Table.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5870              		.loc 4 953 0 discriminator 3
 5871 031b 3B44241C 		cmpl	28(%rsp), %eax
 5872 031f 752F     		jne	.L577
 5873              	.LVL690:
 5874              	.LBB1387:
 5875              	.LBB1388:
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 5876              		.loc 3 964 0
 5877 0321 89831001 		movl	%eax, 272(%rbx)
 5877      0000
 5878              		.loc 3 965 0
 5879 0327 8B442420 		movl	32(%rsp), %eax
 5880              	.LVL691:
 5881              	.LBB1389:
 5882              	.LBB1390:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5883              		.loc 1 861 0
 5884 032b 4889DE   		movq	%rbx, %rsi
 5885 032e 488B5318 		movq	24(%rbx), %rdx
 5886              	.LBE1390:
 5887              	.LBE1389:
 963:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_row = row;
 5888              		.loc 3 963 0
 5889 0332 4489B30C 		movl	%r14d, 268(%rbx)
 5889      010000
 5890              	.LBB1393:
 5891              	.LBB1391:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5892              		.loc 1 861 0
 5893 0339 4889DF   		movq	%rbx, %rdi
 5894              	.LBE1391:
 5895              	.LBE1393:
 5896              		.loc 3 965 0
 5897 033c 89831401 		movl	%eax, 276(%rbx)
 5897      0000
 5898              	.LVL692:
 5899              	.LBB1394:
 5900              	.LBB1392:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5901              		.loc 1 861 0
 5902 0342 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 5902      00
 5903              	.LVL693:
 5904 0347 660F1F84 		.p2align 4,,10
 5904      00000000 
 5904      00
 5905              		.p2align 3
 5906              	.L577:
 5907              	.LBE1392:
 5908              	.LBE1394:
 5909              	.LBE1388:
 5910              	.LBE1387:
 963:fltk-1.3.4-1/src/Fl_Table.cxx ****  947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5911              		.loc 4 963 0
 5912 0350 4183FC01 		cmpl	$1, %r12d
 5913 0354 0F845E04 		je	.L687
 5913      0000
 5914              	.LBE1459:
 5915              	.LBE1474:
 718:fltk-1.3.4-1/src/Fl_Table.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5916              		.loc 4 718 0
 5917 035a 4589EC   		movl	%r13d, %r12d
 5918 035d E940FDFF 		jmp	.L549
 5918      FF
 5919              		.p2align 4,,10
 5920 0362 660F1F44 		.p2align 3
 5920      0000
 5921              	.L524:
 5922              	.LBB1475:
 5923              	.LBB1460:
 857:fltk-1.3.4-1/src/Fl_Table.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5924              		.loc 4 857 0
 5925 0368 83BBDC00 		cmpl	$1, 220(%rbx)
 5925      000001
 5926 036f 0F8427FD 		je	.L668
 5926      FFFF
 5927              	.LBB1395:
 861:fltk-1.3.4-1/src/Fl_Table.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 5928              		.loc 4 861 0
 5929 0375 8BB31801 		movl	280(%rbx), %esi
 5929      0000
 5930 037b 85F6     		testl	%esi, %esi
 5931 037d 0F88FD01 		js	.L556
 5931      0000
 5932              	.LBB1396:
 868:fltk-1.3.4-1/src/Fl_Table.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5933              		.loc 4 868 0
 5934 0383 8B932001 		movl	288(%rbx), %edx
 5934      0000
 5935              	.LBB1397:
 5936              	.LBB1398:
 768:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 5937              		.loc 3 768 0
 5938 0389 31C0     		xorl	%eax, %eax
 5939              	.LBE1398:
 5940              	.LBE1397:
 868:fltk-1.3.4-1/src/Fl_Table.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5941              		.loc 4 868 0
 5942 038b 4429FA   		subl	%r15d, %edx
 5943              	.LVL694:
 5944              	.LBB1400:
 5945              	.LBB1399:
 768:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 5946              		.loc 3 768 0
 5947 038e 39B3F000 		cmpl	%esi, 240(%rbx)
 5947      0000
 5948 0394 7E0D     		jle	.L557
 5949              	.LVL695:
 5950 0396 488B8BE8 		movq	232(%rbx), %rcx
 5950      000000
 5951 039d 4863C6   		movslq	%esi, %rax
 5952 03a0 8B0481   		movl	(%rcx,%rax,4), %eax
 5953              	.LVL696:
 5954              	.L557:
 5955              	.LBE1399:
 5956              	.LBE1400:
 869:fltk-1.3.4-1/src/Fl_Table.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 5957              		.loc 4 869 0
 5958 03a3 29D0     		subl	%edx, %eax
 870:fltk-1.3.4-1/src/Fl_Table.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5959              		.loc 4 870 0
 5960 03a5 8B93C000 		movl	192(%rbx), %edx
 5960      0000
 5961              	.LVL697:
 871:fltk-1.3.4-1/src/Fl_Table.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 5962              		.loc 4 871 0
 5963 03ab 4889DF   		movq	%rbx, %rdi
 5964 03ae 44895424 		movl	%r10d, 12(%rsp)
 5964      0C
 5965              	.LVL698:
 5966 03b3 39D0     		cmpl	%edx, %eax
 5967 03b5 0F4DD0   		cmovge	%eax, %edx
 5968              	.LVL699:
 5969 03b8 E8000000 		call	_ZN8Fl_Table9col_widthEii
 5969      00
 5970              	.LVL700:
 873:fltk-1.3.4-1/src/Fl_Table.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 5971              		.loc 4 873 0
 5972 03bd 4889DF   		movq	%rbx, %rdi
 872:fltk-1.3.4-1/src/Fl_Table.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5973              		.loc 4 872 0
 5974 03c0 4489BB20 		movl	%r15d, 288(%rbx)
 5974      010000
 873:fltk-1.3.4-1/src/Fl_Table.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 5975              		.loc 4 873 0
 5976 03c7 E8000000 		call	_ZN8Fl_Table13table_resizedEv
 5976      00
 5977              	.LVL701:
 874:fltk-1.3.4-1/src/Fl_Table.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 5978              		.loc 4 874 0
 5979 03cc 4889DF   		movq	%rbx, %rdi
 5980 03cf E8000000 		call	_ZN9Fl_Widget6redrawEv
 5980      00
 5981              	.LVL702:
 5982              	.LBB1401:
 5983              	.LBB1402:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 5984              		.loc 4 648 0
 5985 03d4 83BB0801 		cmpl	$79, 264(%rbx)
 5985      00004F
 5986 03db 448B5424 		movl	12(%rsp), %r10d
 5986      0C
 5987 03e0 7412     		je	.L565
 5988 03e2 BE4F0000 		movl	$79, %esi
 5988      00
 5989 03e7 4889DF   		movq	%rbx, %rdi
 5990 03ea E8000000 		call	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 5990      00
 5991              	.LVL703:
 5992 03ef 448B5424 		movl	12(%rsp), %r10d
 5992      0C
 5993              	.LVL704:
 5994              	.L565:
 5995              	.LBE1402:
 5996              	.LBE1401:
 5997              	.LBE1396:
 5998              	.LBB1403:
 5999              	.LBB1404:
 897:fltk-1.3.4-1/src/Fl_Table.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 6000              		.loc 4 897 0
 6001 03f4 48837B10 		cmpq	$0, 16(%rbx)
 6001      00
 6002 03f9 743D     		je	.L560
 6003              	.LVL705:
 897:fltk-1.3.4-1/src/Fl_Table.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 6004              		.loc 4 897 0 is_stmt 0 discriminator 1
 6005 03fb F6436F01 		testb	$1, 111(%rbx)
 6006 03ff 7437     		je	.L560
 6007              	.LBB1405:
 6008              	.LBB1406:
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 6009              		.loc 3 964 0 is_stmt 1
 6010 0401 8B44241C 		movl	28(%rsp), %eax
 6011              	.LBB1407:
 6012              	.LBB1408:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6013              		.loc 1 861 0
 6014 0405 488B5318 		movq	24(%rbx), %rdx
 6015 0409 4889DE   		movq	%rbx, %rsi
 6016              	.LBE1408:
 6017              	.LBE1407:
 963:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_row = row;
 6018              		.loc 3 963 0
 6019 040c C7830C01 		movl	$64, 268(%rbx)
 6019      00004000 
 6019      0000
 6020              	.LBB1411:
 6021              	.LBB1409:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6022              		.loc 1 861 0
 6023 0416 4889DF   		movq	%rbx, %rdi
 6024 0419 44895424 		movl	%r10d, 12(%rsp)
 6024      0C
 6025              	.LVL706:
 6026              	.LBE1409:
 6027              	.LBE1411:
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 6028              		.loc 3 964 0
 6029 041e 89831001 		movl	%eax, 272(%rbx)
 6029      0000
 6030              		.loc 3 965 0
 6031 0424 8B442420 		movl	32(%rsp), %eax
 6032              	.LVL707:
 6033 0428 89831401 		movl	%eax, 276(%rbx)
 6033      0000
 6034              	.LVL708:
 6035              	.LBB1412:
 6036              	.LBB1410:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6037              		.loc 1 861 0
 6038 042e E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 6038      00
 6039              	.LVL709:
 6040 0433 448B5424 		movl	12(%rsp), %r10d
 6040      0C
 6041              	.LVL710:
 6042              	.L560:
 6043              	.LBE1410:
 6044              	.LBE1412:
 6045              	.LBE1406:
 6046              	.LBE1405:
 6047              	.LBE1404:
 6048              	.LBE1403:
 6049              	.LBE1395:
 933:fltk-1.3.4-1/src/Fl_Table.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 6050              		.loc 4 933 0
 6051 0438 8B831C01 		movl	284(%rbx), %eax
 6051      0000
 6052 043e 41BC0100 		movl	$1, %r12d
 6052      0000
 6053 0444 85C0     		testl	%eax, %eax
 6054 0446 0F8956FC 		jns	.L549
 6054      FFFF
 6055 044c 41BD0100 		movl	$1, %r13d
 6055      0000
 6056              	.LVL711:
 6057              	.L572:
 6058 0452 8B831801 		movl	280(%rbx), %eax
 6058      0000
 6059 0458 4589EC   		movl	%r13d, %r12d
 6060 045b 85C0     		testl	%eax, %eax
 6061 045d 0F893FFC 		jns	.L549
 6061      FFFF
 6062              	.L567:
 933:fltk-1.3.4-1/src/Fl_Table.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 6063              		.loc 4 933 0 is_stmt 0 discriminator 3
 6064 0463 8B83DC00 		movl	220(%rbx), %eax
 6064      0000
 6065 0469 4589EC   		movl	%r13d, %r12d
 6066 046c 85C0     		testl	%eax, %eax
 6067 046e 0F852EFC 		jne	.L549
 6067      FFFF
 6068              	.LVL712:
 6069 0474 8B5320   		movl	32(%rbx), %edx
 6070              	.LVL713:
 933:fltk-1.3.4-1/src/Fl_Table.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 6071              		.loc 4 933 0 discriminator 5
 6072 0477 8B4328   		movl	40(%rbx), %eax
 6073 047a 01D0     		addl	%edx, %eax
 6074 047c 83E813   		subl	$19, %eax
 6075 047f 4439F8   		cmpl	%r15d, %eax
 6076 0482 7E2A     		jle	.L575
 6077              	.LVL714:
 934:fltk-1.3.4-1/src/Fl_Table.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6078              		.loc 4 934 0 is_stmt 1
 6079 0484 0393A800 		addl	168(%rbx), %edx
 6079      0000
 6080 048a 4439FA   		cmpl	%r15d, %edx
 6081 048d 7F1F     		jg	.L575
 6082 048f 8B4324   		movl	36(%rbx), %eax
 6083              	.LVL715:
 935:fltk-1.3.4-1/src/Fl_Table.cxx ****  919:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears or sets the damage flags.
 6084              		.loc 4 935 0
 6085 0492 8B532C   		movl	44(%rbx), %edx
 6086 0495 01C2     		addl	%eax, %edx
 6087 0497 83EA13   		subl	$19, %edx
 6088 049a 4439D2   		cmpl	%r10d, %edx
 6089 049d 7E0F     		jle	.L575
 6090              	.LVL716:
 936:fltk-1.3.4-1/src/Fl_Table.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 6091              		.loc 4 936 0
 6092 049f 0383AC00 		addl	172(%rbx), %eax
 6092      0000
 6093 04a5 4439D0   		cmpl	%r10d, %eax
 6094 04a8 0F8EF4FB 		jle	.L549
 6094      FFFF
 6095              	.LVL717:
 6096              	.L575:
 6097              	.LBB1424:
 6098              	.LBB1425:
 6099              	.LBB1426:
 400:fltk-1.3.4-1/src/Fl_Table.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 6100              		.loc 4 400 0
 6101 04ae F20F1005 		movsd	.LC18(%rip), %xmm0
 6101      00000000 
 399:fltk-1.3.4-1/src/Fl_Table.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 6102              		.loc 4 399 0
 6103 04b6 C783DC00 		movl	$1, 220(%rbx)
 6103      00000100 
 6103      0000
 400:fltk-1.3.4-1/src/Fl_Table.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 6104              		.loc 4 400 0
 6105 04c0 4889DE   		movq	%rbx, %rsi
 6106 04c3 BF000000 		movl	$_ZN8Fl_Table14_auto_drag_cb2EPv, %edi
 6106      00
 6107 04c8 4589EC   		movl	%r13d, %r12d
 6108              	.LVL718:
 6109 04cb E8000000 		call	_ZN2Fl11add_timeoutEdPFvPvES0_
 6109      00
 6110              	.LVL719:
 6111 04d0 E9CDFBFF 		jmp	.L549
 6111      FF
 6112              	.LVL720:
 6113              		.p2align 4,,10
 6114 04d5 0F1F00   		.p2align 3
 6115              	.L678:
 6116              	.LBE1426:
 6117              	.LBE1425:
 6118              	.LBE1424:
 6119              	.LBE1460:
 6120              	.LBE1475:
 724:fltk-1.3.4-1/src/Fl_Table.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 6121              		.loc 4 724 0 discriminator 2
 6122 04d8 488BBB98 		movq	408(%rbx), %rdi
 6122      010000
 6123 04df E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 6123      00
 6124              	.LVL721:
 6125 04e4 85C0     		testl	%eax, %eax
 6126 04e6 0F85B0FB 		jne	.L668
 6126      FFFF
 727:fltk-1.3.4-1/src/Fl_Table.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 6127              		.loc 4 727 0
 6128 04ec 418D46FC 		leal	-4(%r14), %eax
 6129 04f0 83E0FB   		andl	$-5, %eax
 6130 04f3 7420     		je	.L661
 6131              	.LBB1476:
 6132              	.LBB1477:
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
 6133              		.loc 6 838 0
 6134 04f5 488B3500 		movq	_ZN2Fl6focus_E(%rip), %rsi
 6134      000000
 6135              	.LBE1477:
 6136              	.LBE1476:
 726:fltk-1.3.4-1/src/Fl_Table.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 6137              		.loc 4 726 0
 6138 04fc 4839F3   		cmpq	%rsi, %rbx
 6139 04ff 0F844EFB 		je	.L603
 6139      FFFF
 728:fltk-1.3.4-1/src/Fl_Table.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 6140              		.loc 4 728 0
 6141 0505 4889DF   		movq	%rbx, %rdi
 6142 0508 E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 6142      00
 6143              	.LVL722:
 727:fltk-1.3.4-1/src/Fl_Table.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 6144              		.loc 4 727 0
 6145 050d 85C0     		testl	%eax, %eax
 6146 050f 0F8587FB 		jne	.L668
 6146      FFFF
 6147              	.L661:
 6148 0515 488B3500 		movq	_ZN2Fl6focus_E(%rip), %rsi
 6148      000000
 6149 051c E932FBFF 		jmp	.L603
 6149      FF
 6150              		.p2align 4,,10
 6151 0521 0F1F8000 		.p2align 3
 6151      000000
 6152              	.L529:
 6153              	.LVL723:
 6154              	.LBB1478:
 6155              	.LBB1461:
 768:fltk-1.3.4-1/src/Fl_Table.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 6156              		.loc 4 768 0
 6157 0528 48837B10 		cmpq	$0, 16(%rbx)
 6157      00
 6158 052d 0F84FAFC 		je	.L534
 6158      FFFF
 768:fltk-1.3.4-1/src/Fl_Table.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 6159              		.loc 4 768 0 is_stmt 0 discriminator 1
 6160 0533 8B442424 		movl	36(%rsp), %eax
 6161 0537 85C0     		testl	%eax, %eax
 6162 0539 0F85EEFC 		jne	.L534
 6162      FFFF
 6163 053f E9B3FCFF 		jmp	.L670
 6163      FF
 6164              	.LVL724:
 6165              		.p2align 4,,10
 6166 0544 0F1F4000 		.p2align 3
 6167              	.L681:
 976:fltk-1.3.4-1/src/Fl_Table.cxx ****  960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 6168              		.loc 4 976 0 is_stmt 1 discriminator 1
 6169 0548 448B5C24 		movl	36(%rsp), %r11d
 6169      24
 6170 054d 4585DB   		testl	%r11d, %r11d
 6171 0550 0F84DEFB 		je	.L581
 6171      FFFF
 6172              	.LVL725:
 6173              	.LBB1427:
 6174              	.LBB1428:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 6175              		.loc 4 648 0
 6176 0556 83BB0801 		cmpl	$78, 264(%rbx)
 6176      00004E
 6177 055d 0F8439FB 		je	.L668
 6177      FFFF
 6178 0563 BE4E0000 		movl	$78, %esi
 6178      00
 6179 0568 4889DF   		movq	%rbx, %rdi
 6180              	.LBE1428:
 6181              	.LBE1427:
 982:fltk-1.3.4-1/src/Fl_Table.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 6182              		.loc 4 982 0
 6183 056b 41BC0100 		movl	$1, %r12d
 6183      0000
 6184              	.LBB1430:
 6185              	.LBB1429:
 6186 0571 E8000000 		call	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 6186      00
 6187              	.LVL726:
 6188 0576 E927FBFF 		jmp	.L549
 6188      FF
 6189              	.LVL727:
 6190 057b 0F1F4400 		.p2align 4,,10
 6190      00
 6191              		.p2align 3
 6192              	.L556:
 6193              	.LBE1429:
 6194              	.LBE1430:
 6195              	.LBB1431:
 6196              	.LBB1420:
 881:fltk-1.3.4-1/src/Fl_Table.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 6197              		.loc 4 881 0
 6198 0580 8BB31C01 		movl	284(%rbx), %esi
 6198      0000
 6199 0586 85F6     		testl	%esi, %esi
 6200 0588 0F88FE03 		js	.L563
 6200      0000
 6201              	.LBB1419:
 888:fltk-1.3.4-1/src/Fl_Table.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 6202              		.loc 4 888 0
 6203 058e 8B932401 		movl	292(%rbx), %edx
 6203      0000
 6204              	.LBB1413:
 6205              	.LBB1414:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 6206              		.loc 3 754 0
 6207 0594 31C0     		xorl	%eax, %eax
 6208              	.LBE1414:
 6209              	.LBE1413:
 888:fltk-1.3.4-1/src/Fl_Table.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 6210              		.loc 4 888 0
 6211 0596 4429D2   		subl	%r10d, %edx
 6212              	.LVL728:
 6213              	.LBB1416:
 6214              	.LBB1415:
 754:fltk-1.3.4-1/FL/Fl_Table.H ****   }
 6215              		.loc 3 754 0
 6216 0599 39B30001 		cmpl	%esi, 256(%rbx)
 6216      0000
 6217 059f 7E0D     		jle	.L564
 6218              	.LVL729:
 6219 05a1 488B8BF8 		movq	248(%rbx), %rcx
 6219      000000
 6220 05a8 4863C6   		movslq	%esi, %rax
 6221 05ab 8B0481   		movl	(%rcx,%rax,4), %eax
 6222              	.LVL730:
 6223              	.L564:
 6224              	.LBE1415:
 6225              	.LBE1416:
 889:fltk-1.3.4-1/src/Fl_Table.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 6226              		.loc 4 889 0
 6227 05ae 29D0     		subl	%edx, %eax
 890:fltk-1.3.4-1/src/Fl_Table.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6228              		.loc 4 890 0
 6229 05b0 8B93BC00 		movl	188(%rbx), %edx
 6229      0000
 6230              	.LVL731:
 891:fltk-1.3.4-1/src/Fl_Table.cxx ****  875:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 6231              		.loc 4 891 0
 6232 05b6 4889DF   		movq	%rbx, %rdi
 6233 05b9 44895424 		movl	%r10d, 12(%rsp)
 6233      0C
 6234              	.LVL732:
 6235 05be 39D0     		cmpl	%edx, %eax
 6236 05c0 0F4DD0   		cmovge	%eax, %edx
 6237              	.LVL733:
 6238 05c3 E8000000 		call	_ZN8Fl_Table10row_heightEii
 6238      00
 6239              	.LVL734:
 892:fltk-1.3.4-1/src/Fl_Table.cxx ****  876:fltk-1.3.4-1/FL/Fl_Widget.H ****   int test_shortcut();
 6240              		.loc 4 892 0
 6241 05c8 448B5424 		movl	12(%rsp), %r10d
 6241      0C
 893:fltk-1.3.4-1/src/Fl_Table.cxx ****  877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 6242              		.loc 4 893 0
 6243 05cd 4889DF   		movq	%rbx, %rdi
 892:fltk-1.3.4-1/src/Fl_Table.cxx ****  876:fltk-1.3.4-1/FL/Fl_Widget.H ****   int test_shortcut();
 6244              		.loc 4 892 0
 6245 05d0 44899324 		movl	%r10d, 292(%rbx)
 6245      010000
 893:fltk-1.3.4-1/src/Fl_Table.cxx ****  877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 6246              		.loc 4 893 0
 6247 05d7 E8000000 		call	_ZN8Fl_Table13table_resizedEv
 6247      00
 6248              	.LVL735:
 894:fltk-1.3.4-1/src/Fl_Table.cxx ****  878:fltk-1.3.4-1/FL/Fl_Widget.H ****   static unsigned int label_shortcut(const char *t);
 6249              		.loc 4 894 0
 6250 05dc 4889DF   		movq	%rbx, %rdi
 6251 05df E8000000 		call	_ZN9Fl_Widget6redrawEv
 6251      00
 6252              	.LVL736:
 6253              	.LBB1417:
 6254              	.LBB1418:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 6255              		.loc 4 648 0
 6256 05e4 83BB0801 		cmpl	$78, 264(%rbx)
 6256      00004E
 6257 05eb 448B5424 		movl	12(%rsp), %r10d
 6257      0C
 6258 05f0 0F84FEFD 		je	.L565
 6258      FFFF
 6259 05f6 BE4E0000 		movl	$78, %esi
 6259      00
 6260 05fb 4889DF   		movq	%rbx, %rdi
 6261 05fe E8000000 		call	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 6261      00
 6262              	.LVL737:
 6263 0603 448B5424 		movl	12(%rsp), %r10d
 6263      0C
 6264 0608 E9E7FDFF 		jmp	.L565
 6264      FF
 6265              	.LVL738:
 6266              	.L592:
 6267              	.LBE1418:
 6268              	.LBE1417:
 6269              	.LBE1419:
 6270              	.LBE1420:
 6271              	.LBE1431:
 6272              	.LBB1432:
 6273              	.LBB1328:
 6274              	.LBB1329:
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 6275              		.loc 4 703 0
 6276 060d 8B833801 		movl	312(%rbx), %eax
 6276      0000
 6277 0613 2B833401 		subl	308(%rbx), %eax
 6277      0000
 6278 0619 BE010000 		movl	$1, %esi
 6278      00
 6279 061e 29C6     		subl	%eax, %esi
 6280              	.LVL739:
 6281              	.L666:
 6282              	.LBE1329:
 6283              	.LBE1328:
 6284              	.LBB1330:
 6285              	.LBB1331:
 6286 0620 B9010000 		movl	$1, %ecx
 6286      00
 6287 0625 31D2     		xorl	%edx, %edx
 6288              	.LVL740:
 6289 0627 4889DF   		movq	%rbx, %rdi
 6290 062a E8000000 		call	_ZN8Fl_Table11move_cursorEiii
 6290      00
 6291              	.LVL741:
 6292 062f 4189C4   		movl	%eax, %r12d
 6293              	.LVL742:
 6294              	.L595:
 6295              	.LBE1331:
 6296              	.LBE1330:
1051:fltk-1.3.4-1/src/Fl_Table.cxx ****   43              		.loc 1 1012 0
 6297              		.loc 4 1051 0
 6298 0632 4585E4   		testl	%r12d, %r12d
 6299 0635 0F844D01 		je	.L596
 6299      0000
 6300 063b 483B1D00 		cmpq	_ZN2Fl6focus_E(%rip), %rbx
 6300      000000
 6301 0642 0F843403 		je	.L688
 6301      0000
 6302              	.LVL743:
 6303              	.LBB1333:
 6304              	.LBB1334:
 6305              	.LBB1335:
 6306              	.LBB1336:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6307              		.loc 1 861 0
 6308 0648 488B5318 		movq	24(%rbx), %rdx
 6309 064c 4889DE   		movq	%rbx, %rsi
 6310 064f 4889DF   		movq	%rbx, %rdi
 6311              	.LBE1336:
 6312              	.LBE1335:
 963:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_row = row;
 6313              		.loc 3 963 0
 6314 0652 C7830C01 		movl	$32, 268(%rbx)
 6314      00002000 
 6314      0000
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 6315              		.loc 3 964 0
 6316 065c C7831001 		movl	$-1, 272(%rbx)
 6316      0000FFFF 
 6316      FFFF
 6317              		.loc 3 965 0
 6318 0666 C7831401 		movl	$-1, 276(%rbx)
 6318      0000FFFF 
 6318      FFFF
 6319              	.LVL744:
 6320              	.LBB1338:
 6321              	.LBB1337:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6322              		.loc 1 861 0
 6323 0670 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 6323      00
 6324              	.LVL745:
 6325              	.LBE1337:
 6326              	.LBE1338:
 6327              	.LBE1334:
 6328              	.LBE1333:
1053:fltk-1.3.4-1/src/Fl_Table.cxx ****   45              	.LVL1:
 6329              		.loc 4 1053 0
 6330 0675 4889DF   		movq	%rbx, %rdi
 6331 0678 E8000000 		call	_ZN9Fl_Widget10take_focusEv
 6331      00
 6332              	.LVL746:
1056:fltk-1.3.4-1/src/Fl_Table.cxx ****   48 0002 C3       		ret
 6333              		.loc 4 1056 0
 6334 067d 48837B10 		cmpq	$0, 16(%rbx)
 6334      00
 6335 0682 0F841AFA 		je	.L549
 6335      FFFF
 6336              	.L667:
 6337 0688 448B8350 		movl	336(%rbx), %r8d
 6337      010000
 6338 068f 8B934C01 		movl	332(%rbx), %edx
 6338      0000
 6339              	.LVL747:
 6340              	.L604:
1058:fltk-1.3.4-1/src/Fl_Table.cxx ****   50              	.LFE129:
 6341              		.loc 4 1058 0 discriminator 1
 6342 0695 39D5     		cmpl	%edx, %ebp
 6343 0697 0F847302 		je	.L689
 6343      0000
 6344              	.L601:
 6345              	.LVL748:
 6346              	.LBB1339:
 6347              	.LBB1340:
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 6348              		.loc 3 964 0
 6349 069d 89931001 		movl	%edx, 272(%rbx)
 6349      0000
 6350              	.LBB1341:
 6351              	.LBB1342:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6352              		.loc 1 861 0
 6353 06a3 488B5318 		movq	24(%rbx), %rdx
 6354 06a7 4889DE   		movq	%rbx, %rsi
 6355              	.LBE1342:
 6356              	.LBE1341:
 963:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_row = row;
 6357              		.loc 3 963 0
 6358 06aa C7830C01 		movl	$16, 268(%rbx)
 6358      00001000 
 6358      0000
 6359              		.loc 3 965 0
 6360 06b4 44898314 		movl	%r8d, 276(%rbx)
 6360      010000
 6361              	.LVL749:
 6362              	.LBB1344:
 6363              	.LBB1343:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6364              		.loc 1 861 0
 6365 06bb 4889DF   		movq	%rbx, %rdi
 6366 06be E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 6366      00
 6367              	.LVL750:
 6368 06c3 E9D4F9FF 		jmp	.L668
 6368      FF
 6369              	.LVL751:
 6370              	.L591:
 6371              	.LBE1343:
 6372              	.LBE1344:
 6373              	.LBE1340:
 6374              	.LBE1339:
 6375              	.LBB1345:
 6376              	.LBB1346:
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 6377              		.loc 4 703 0
 6378 06c8 B9010000 		movl	$1, %ecx
 6378      00
 6379 06cd 31D2     		xorl	%edx, %edx
 6380              	.LVL752:
 6381 06cf BE010000 		movl	$1, %esi
 6381      00
 6382 06d4 4889DF   		movq	%rbx, %rdi
 6383 06d7 E8000000 		call	_ZN8Fl_Table11move_cursorEiii
 6383      00
 6384              	.LVL753:
 6385 06dc 4189C4   		movl	%eax, %r12d
 6386              	.LVL754:
 6387              	.LBE1346:
 6388              	.LBE1345:
1037:fltk-1.3.4-1/src/Fl_Table.cxx ****   41              	_ZN9Fl_Widget12as_gl_windowEv:
 6389              		.loc 4 1037 0
 6390 06df E94EFFFF 		jmp	.L595
 6390      FF
 6391              	.LVL755:
 6392              	.L589:
 6393              	.LBB1347:
 6394              	.LBB1348:
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 6395              		.loc 4 703 0
 6396 06e4 B9010000 		movl	$1, %ecx
 6396      00
 6397 06e9 31D2     		xorl	%edx, %edx
 6398              	.LVL756:
 6399 06eb BEFFFFFF 		movl	$-1, %esi
 6399      FF
 6400 06f0 4889DF   		movq	%rbx, %rdi
 6401 06f3 E8000000 		call	_ZN8Fl_Table11move_cursorEiii
 6401      00
 6402              	.LVL757:
 6403 06f8 4189C4   		movl	%eax, %r12d
 6404              	.LVL758:
 6405              	.LBE1348:
 6406              	.LBE1347:
1034:fltk-1.3.4-1/src/Fl_Table.cxx ****   37              		.align 2
 6407              		.loc 4 1034 0
 6408 06fb E932FFFF 		jmp	.L595
 6408      FF
 6409              	.LVL759:
 6410              	.L588:
 6411              	.LBB1349:
 6412              	.LBB1350:
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 6413              		.loc 4 703 0
 6414 0700 B9010000 		movl	$1, %ecx
 6414      00
 6415 0705 BAFFFFFF 		movl	$-1, %edx
 6415      FF
 6416              	.LVL760:
 6417 070a 31F6     		xorl	%esi, %esi
 6418 070c 4889DF   		movq	%rbx, %rdi
 6419 070f E8000000 		call	_ZN8Fl_Table11move_cursorEiii
 6419      00
 6420              	.LVL761:
 6421 0714 4189C4   		movl	%eax, %r12d
 6422              	.LVL762:
 6423              	.LBE1350:
 6424              	.LBE1349:
1028:fltk-1.3.4-1/src/Fl_Table.cxx ****   31              	.LHOTE0:
 6425              		.loc 4 1028 0
 6426 0717 E916FFFF 		jmp	.L595
 6426      FF
 6427              	.LVL763:
 6428              	.L586:
 6429              	.LBB1351:
 6430              	.LBB1352:
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 6431              		.loc 4 703 0
 6432 071c B9010000 		movl	$1, %ecx
 6432      00
 6433 0721 BAC0BDF0 		movl	$-1000000, %edx
 6433      FF
 6434              	.LVL764:
 6435 0726 31F6     		xorl	%esi, %esi
 6436 0728 4889DF   		movq	%rbx, %rdi
 6437 072b E8000000 		call	_ZN8Fl_Table11move_cursorEiii
 6437      00
 6438              	.LVL765:
 6439 0730 4189C4   		movl	%eax, %r12d
 6440              	.LVL766:
 6441              	.LBE1352:
 6442              	.LBE1351:
1016:fltk-1.3.4-1/src/Fl_Table.cxx **** 1000:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Window* as_window() {return 0;}
 6443              		.loc 4 1016 0
 6444 0733 E9FAFEFF 		jmp	.L595
 6444      FF
 6445              	.LVL767:
 6446              	.L594:
 6447              	.LBB1353:
 6448              	.LBB1354:
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 6449              		.loc 4 703 0
 6450 0738 B9010000 		movl	$1, %ecx
 6450      00
 6451 073d BA40420F 		movl	$1000000, %edx
 6451      00
 6452              	.LVL768:
 6453 0742 31F6     		xorl	%esi, %esi
 6454 0744 4889DF   		movq	%rbx, %rdi
 6455 0747 E8000000 		call	_ZN8Fl_Table11move_cursorEiii
 6455      00
 6456              	.LVL769:
 6457 074c 4189C4   		movl	%eax, %r12d
 6458              	.LVL770:
 6459              	.LBE1354:
 6460              	.LBE1353:
1019:fltk-1.3.4-1/src/Fl_Table.cxx ****   21              	.LVL0:
 6461              		.loc 4 1019 0
 6462 074f E9DEFEFF 		jmp	.L595
 6462      FF
 6463              	.LVL771:
 6464              	.L593:
 6465              	.LBB1355:
 6466              	.LBB1332:
 703:fltk-1.3.4-1/src/Fl_Table.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 6467              		.loc 4 703 0
 6468 0754 8BB33801 		movl	312(%rbx), %esi
 6468      0000
 6469 075a 2BB33401 		subl	308(%rbx), %esi
 6469      0000
 6470 0760 83EE01   		subl	$1, %esi
 6471 0763 E9B8FEFF 		jmp	.L666
 6471      FF
 6472              	.LVL772:
 6473              	.L590:
 6474              	.LBE1332:
 6475              	.LBE1355:
 6476              	.LBB1356:
 6477              	.LBB1357:
 6478 0768 B9010000 		movl	$1, %ecx
 6478      00
 6479 076d BA010000 		movl	$1, %edx
 6479      00
 6480              	.LVL773:
 6481 0772 31F6     		xorl	%esi, %esi
 6482 0774 4889DF   		movq	%rbx, %rdi
 6483 0777 E8000000 		call	_ZN8Fl_Table11move_cursorEiii
 6483      00
 6484              	.LVL774:
 6485 077c 4189C4   		movl	%eax, %r12d
 6486              	.LVL775:
 6487              	.LBE1357:
 6488              	.LBE1356:
1031:fltk-1.3.4-1/src/Fl_Table.cxx ****   34              	.LCOLDB1:
 6489              		.loc 4 1031 0
 6490 077f E9AEFEFF 		jmp	.L595
 6490      FF
 6491              	.LVL776:
 6492              		.p2align 4,,10
 6493 0784 0F1F4000 		.p2align 3
 6494              	.L596:
1056:fltk-1.3.4-1/src/Fl_Table.cxx ****   48 0002 C3       		ret
 6495              		.loc 4 1056 0
 6496 0788 48837B10 		cmpq	$0, 16(%rbx)
 6496      00
 6497 078d 0F84E101 		je	.L658
 6497      0000
 6498 0793 448B8350 		movl	336(%rbx), %r8d
 6498      010000
 6499 079a 8B934C01 		movl	332(%rbx), %edx
 6499      0000
 6500              	.LVL777:
 6501              	.L605:
1058:fltk-1.3.4-1/src/Fl_Table.cxx ****   50              	.LFE129:
 6502              		.loc 4 1058 0
 6503 07a0 F6436F02 		testb	$2, 111(%rbx)
 6504 07a4 0F85F3FE 		jne	.L601
 6504      FFFF
 6505 07aa 4531E4   		xorl	%r12d, %r12d
 6506 07ad E9E3FEFF 		jmp	.L604
 6506      FF
 6507              	.LVL778:
 6508              		.p2align 4,,10
 6509 07b2 660F1F44 		.p2align 3
 6509      0000
 6510              	.L687:
 6511              	.LBE1432:
 6512              	.LBB1433:
 6513              	.LBB1434:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 6514              		.loc 4 648 0
 6515 07b8 448BAB08 		movl	264(%rbx), %r13d
 6515      010000
 6516              	.LVL779:
 6517 07bf 4585ED   		testl	%r13d, %r13d
 6518 07c2 740A     		je	.L579
 6519 07c4 31F6     		xorl	%esi, %esi
 6520 07c6 4889DF   		movq	%rbx, %rdi
 6521 07c9 E8000000 		call	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 6521      00
 6522              	.LVL780:
 6523              	.L579:
 6524              	.LBE1434:
 6525              	.LBE1433:
 965:fltk-1.3.4-1/src/Fl_Table.cxx ****  949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6526              		.loc 4 965 0
 6527 07ce C7831801 		movl	$-1, 280(%rbx)
 6527      0000FFFF 
 6527      FFFF
 966:fltk-1.3.4-1/src/Fl_Table.cxx ****  950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label 
 6528              		.loc 4 966 0
 6529 07d8 C7831C01 		movl	$-1, 284(%rbx)
 6529      0000FFFF 
 6529      FFFF
 6530              	.LVL781:
 6531 07e2 E9BBF8FF 		jmp	.L549
 6531      FF
 6532              	.LVL782:
 6533 07e7 660F1F84 		.p2align 4,,10
 6533      00000000 
 6533      00
 6534              		.p2align 3
 6535              	.L684:
 777:fltk-1.3.4-1/src/Fl_Table.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 6536              		.loc 4 777 0
 6537 07f0 4585F6   		testl	%r14d, %r14d
 6538 07f3 0F85B700 		jne	.L536
 6538      0000
 785:fltk-1.3.4-1/src/Fl_Table.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 6539              		.loc 4 785 0
 6540 07f9 4183FC01 		cmpl	$1, %r12d
 6541 07fd 0F841502 		je	.L690
 6541      0000
 6542              	.L665:
 6543 0803 8B44241C 		movl	28(%rsp), %eax
 6544 0807 E954FAFF 		jmp	.L533
 6544      FF
 6545              	.LVL783:
 6546 080c 0F1F4000 		.p2align 4,,10
 6547              		.p2align 3
 6548              	.L686:
 6549              	.LBB1435:
 6550              	.LBB1386:
 6551 0810 4889DF   		movq	%rbx, %rdi
 6552 0813 E8000000 		call	_ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37
 6552      00
 6553              	.LVL784:
 6554 0818 E9CBFAFF 		jmp	.L576
 6554      FF
 6555              	.LVL785:
 6556 081d 0F1F00   		.p2align 4,,10
 6557              		.p2align 3
 6558              	.L680:
 6559              	.LBE1386:
 6560              	.LBE1435:
 972:fltk-1.3.4-1/src/Fl_Table.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6561              		.loc 4 972 0 discriminator 1
 6562 0820 8B6C2424 		movl	36(%rsp), %ebp
 6563 0824 85ED     		testl	%ebp, %ebp
 6564 0826 0F8408F9 		je	.L581
 6564      FFFF
 6565              	.LVL786:
 6566              	.LBB1436:
 6567              	.LBB1437:
 648:fltk-1.3.4-1/src/Fl_Table.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 6568              		.loc 4 648 0
 6569 082c 83BB0801 		cmpl	$79, 264(%rbx)
 6569      00004F
 6570 0833 0F8463F8 		je	.L668
 6570      FFFF
 6571 0839 BE4F0000 		movl	$79, %esi
 6571      00
 6572 083e 4889DF   		movq	%rbx, %rdi
 6573              	.LBE1437:
 6574              	.LBE1436:
 982:fltk-1.3.4-1/src/Fl_Table.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 6575              		.loc 4 982 0
 6576 0841 41BC0100 		movl	$1, %r12d
 6576      0000
 6577              	.LBB1439:
 6578              	.LBB1438:
 6579 0847 E8000000 		call	_ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
 6579      00
 6580              	.LVL787:
 6581 084c E951F8FF 		jmp	.L549
 6581      FF
 6582              	.LVL788:
 6583              		.p2align 4,,10
 6584 0851 0F1F8000 		.p2align 3
 6584      000000
 6585              	.L685:
 6586              	.LBE1438:
 6587              	.LBE1439:
 6588              	.LBB1440:
 6589              	.LBB1378:
 6590 0858 4889DF   		movq	%rbx, %rdi
 6591 085b E8000000 		call	_ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37
 6591      00
 6592              	.LVL789:
 6593 0860 E94CFAFF 		jmp	.L518
 6593      FF
 6594              	.LVL790:
 6595              		.p2align 4,,10
 6596 0865 0F1F00   		.p2align 3
 6597              	.L537:
 6598              	.LBE1378:
 6599              	.LBE1440:
 824:fltk-1.3.4-1/src/Fl_Table.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 6600              		.loc 4 824 0
 6601 0868 4183FC01 		cmpl	$1, %r12d
 6602 086c 7595     		jne	.L665
 826:fltk-1.3.4-1/src/Fl_Table.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 6603              		.loc 4 826 0
 6604 086e 8B442424 		movl	36(%rsp), %eax
 6605 0872 85C0     		testl	%eax, %eax
 6606 0874 0F846302 		je	.L551
 6606      0000
 832:fltk-1.3.4-1/src/Fl_Table.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 6607              		.loc 4 832 0
 6608 087a A803     		testb	$3, %al
 6609 087c 0F840803 		je	.L552
 6609      0000
 832:fltk-1.3.4-1/src/Fl_Table.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 6610              		.loc 4 832 0 is_stmt 0 discriminator 1
 6611 0882 8B44241C 		movl	28(%rsp), %eax
 6612 0886 8D50FF   		leal	-1(%rax), %edx
 6613              	.L553:
 832:fltk-1.3.4-1/src/Fl_Table.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 6614              		.loc 4 832 0 discriminator 4
 6615 0889 89931C01 		movl	%edx, 284(%rbx)
 6615      0000
 833:fltk-1.3.4-1/src/Fl_Table.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 6616              		.loc 4 833 0 is_stmt 1 discriminator 4
 6617 088f C7831801 		movl	$-1, 280(%rbx)
 6617      0000FFFF 
 6617      FFFF
 834:fltk-1.3.4-1/src/Fl_Table.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 6618              		.loc 4 834 0 discriminator 4
 6619 0899 44899324 		movl	%r10d, 292(%rbx)
 6619      010000
 6620              	.LVL791:
 6621              	.L664:
 844:fltk-1.3.4-1/src/Fl_Table.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 6622              		.loc 4 844 0
 6623 08a0 41BD0100 		movl	$1, %r13d
 6623      0000
 6624 08a6 E9B5F9FF 		jmp	.L533
 6624      FF
 6625              	.LVL792:
 6626 08ab 0F1F4400 		.p2align 4,,10
 6626      00
 6627              		.p2align 3
 6628              	.L536:
 6629 08b0 8B44241C 		movl	28(%rsp), %eax
 850:fltk-1.3.4-1/src/Fl_Table.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 6630              		.loc 4 850 0
 6631 08b4 4531ED   		xorl	%r13d, %r13d
 851:fltk-1.3.4-1/src/Fl_Table.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6632              		.loc 4 851 0
 6633 08b7 E9A4F9FF 		jmp	.L533
 6633      FF
 6634              	.LVL793:
 6635 08bc 0F1F4000 		.p2align 4,,10
 6636              		.p2align 3
 6637              	.L540:
 797:fltk-1.3.4-1/src/Fl_Table.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 6638              		.loc 4 797 0
 6639 08c0 4183FC01 		cmpl	$1, %r12d
 6640 08c4 0F8539FF 		jne	.L665
 6640      FFFF
 799:fltk-1.3.4-1/src/Fl_Table.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 6641              		.loc 4 799 0
 6642 08ca 8B442424 		movl	36(%rsp), %eax
 6643 08ce 85C0     		testl	%eax, %eax
 6644 08d0 0F84A801 		je	.L545
 6644      0000
 805:fltk-1.3.4-1/src/Fl_Table.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 6645              		.loc 4 805 0
 6646 08d6 A801     		testb	$1, %al
 6647 08d8 8B442420 		movl	32(%rsp), %eax
 6648 08dc 7403     		je	.L547
 805:fltk-1.3.4-1/src/Fl_Table.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 6649              		.loc 4 805 0 is_stmt 0 discriminator 1
 6650 08de 83E801   		subl	$1, %eax
 6651              	.L547:
 805:fltk-1.3.4-1/src/Fl_Table.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 6652              		.loc 4 805 0 discriminator 4
 6653 08e1 89831801 		movl	%eax, 280(%rbx)
 6653      0000
 806:fltk-1.3.4-1/src/Fl_Table.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6654              		.loc 4 806 0 is_stmt 1 discriminator 4
 6655 08e7 C7831C01 		movl	$-1, 284(%rbx)
 6655      0000FFFF 
 6655      FFFF
 808:fltk-1.3.4-1/src/Fl_Table.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6656              		.loc 4 808 0 discriminator 4
 6657 08f1 41BD0100 		movl	$1, %r13d
 6657      0000
 6658              	.LVL794:
 807:fltk-1.3.4-1/src/Fl_Table.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 6659              		.loc 4 807 0 discriminator 4
 6660 08f7 4489BB20 		movl	%r15d, 288(%rbx)
 6660      010000
 6661              	.LVL795:
 6662 08fe 8B44241C 		movl	28(%rsp), %eax
 6663 0902 E959F9FF 		jmp	.L533
 6663      FF
 6664              	.LVL796:
 6665 0907 660F1F84 		.p2align 4,,10
 6665      00000000 
 6665      00
 6666              		.p2align 3
 6667              	.L689:
 6668              	.LBB1441:
1059:fltk-1.3.4-1/src/Fl_Table.cxx ****   52              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
 6669              		.loc 4 1059 0
 6670 0910 4539C5   		cmpl	%r8d, %r13d
 6671 0913 0F8584FD 		jne	.L601
 6671      FFFF
 6672 0919 E984F7FF 		jmp	.L549
 6672      FF
 6673              	.LVL797:
 6674 091e 6690     		.p2align 4,,10
 6675              		.p2align 3
 6676              	.L683:
 6677              	.LBE1441:
 768:fltk-1.3.4-1/src/Fl_Table.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 6678              		.loc 4 768 0
 6679 0920 48837B10 		cmpq	$0, 16(%rbx)
 6679      00
 754:fltk-1.3.4-1/src/Fl_Table.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6680              		.loc 4 754 0
 6681 0925 8B44241C 		movl	28(%rsp), %eax
 755:fltk-1.3.4-1/src/Fl_Table.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 6682              		.loc 4 755 0
 6683 0929 8B7C2420 		movl	32(%rsp), %edi
 756:fltk-1.3.4-1/src/Fl_Table.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 6684              		.loc 4 756 0
 6685 092d C783E000 		movl	$16, 224(%rbx)
 6685      00001000 
 6685      0000
 6686              	.LVL798:
 754:fltk-1.3.4-1/src/Fl_Table.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6687              		.loc 4 754 0
 6688 0937 4189C1   		movl	%eax, %r9d
 6689 093a 89834C01 		movl	%eax, 332(%rbx)
 6689      0000
 6690 0940 89834401 		movl	%eax, 324(%rbx)
 6690      0000
 755:fltk-1.3.4-1/src/Fl_Table.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 6691              		.loc 4 755 0
 6692 0946 89BB5001 		movl	%edi, 336(%rbx)
 6692      0000
 6693 094c 89BB4801 		movl	%edi, 328(%rbx)
 6693      0000
 768:fltk-1.3.4-1/src/Fl_Table.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 6694              		.loc 4 768 0
 6695 0952 0F8448FF 		je	.L664
 6695      FFFF
 6696 0958 8B442424 		movl	36(%rsp), %eax
 6697 095c 85C0     		testl	%eax, %eax
 6698 095e 0F85F2F8 		jne	.L541
 6698      FFFF
 6699 0964 E997F8FF 		jmp	.L535
 6699      FF
 6700              	.LVL799:
 6701              	.L585:
 6702              	.LBB1442:
1056:fltk-1.3.4-1/src/Fl_Table.cxx ****   48 0002 C3       		ret
 6703              		.loc 4 1056 0
 6704 0969 48837B10 		cmpq	$0, 16(%rbx)
 6704      00
 6705 096e 0F852CFE 		jne	.L605
 6705      FFFF
 6706              	.LVL800:
 6707              	.L658:
 6708 0974 4531E4   		xorl	%r12d, %r12d
 6709 0977 E926F7FF 		jmp	.L549
 6709      FF
 6710              	.LVL801:
 6711              	.L688:
 6712 097c 48837B10 		cmpq	$0, 16(%rbx)
 6712      00
 6713 0981 0F8501FD 		jne	.L667
 6713      FFFF
 6714 0987 E916F7FF 		jmp	.L549
 6714      FF
 6715              	.LVL802:
 6716              	.L563:
 6717              	.LBE1442:
 6718              	.LBB1443:
 6719              	.LBB1421:
 901:fltk-1.3.4-1/src/Fl_Table.cxx ****  885:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if w is a child of this widget.
 6720              		.loc 4 901 0
 6721 098c 4183FC01 		cmpl	$1, %r12d
 6722 0990 0F85CDFA 		jne	.L567
 6722      FFFF
 902:fltk-1.3.4-1/src/Fl_Table.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 6723              		.loc 4 902 0 discriminator 1
 6724 0996 8B83E000 		movl	224(%rbx), %eax
 6724      0000
 6725 099c 83F810   		cmpl	$16, %eax
 6726 099f 750A     		jne	.L568
 6727 09a1 4183FE10 		cmpl	$16, %r14d
 6728 09a5 0F844902 		je	.L691
 6728      0000
 6729              	.L568:
 913:fltk-1.3.4-1/src/Fl_Table.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6730              		.loc 4 913 0 discriminator 1
 6731 09ab 83F804   		cmpl	$4, %eax
 6732 09ae 0F84E601 		je	.L692
 6732      0000
 922:fltk-1.3.4-1/src/Fl_Table.cxx ****  906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for t
 6733              		.loc 4 922 0 discriminator 1
 6734 09b4 83F808   		cmpl	$8, %eax
 6735 09b7 0F85A6FA 		jne	.L567
 6735      FFFF
 924:fltk-1.3.4-1/src/Fl_Table.cxx ****  908:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6736              		.loc 4 924 0
 6737 09bd 4180E61C 		andb	$28, %r14b
 6738              	.LVL803:
 6739 09c1 0F849CFA 		je	.L567
 6739      FFFF
 925:fltk-1.3.4-1/src/Fl_Table.cxx ****  909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 6740              		.loc 4 925 0
 6741 09c7 448B8350 		movl	336(%rbx), %r8d
 6741      010000
 6742 09ce 8B7C2420 		movl	32(%rsp), %edi
 6743 09d2 4139F8   		cmpl	%edi, %r8d
 6744 09d5 7431     		je	.L574
 6745 09d7 44895424 		movl	%r10d, 12(%rsp)
 6745      0C
 926:fltk-1.3.4-1/src/Fl_Table.cxx ****  910:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6746              		.loc 4 926 0
 6747 09dc 8B934801 		movl	328(%rbx), %edx
 6747      0000
 6748 09e2 8B8B4C01 		movl	332(%rbx), %ecx
 6748      0000
 6749 09e8 50       		pushq	%rax
 6750              		.cfi_def_cfa_offset 120
 6751 09e9 8BB34401 		movl	324(%rbx), %esi
 6751      0000
 6752 09ef 57       		pushq	%rdi
 6753              		.cfi_def_cfa_offset 128
 6754 09f0 4889DF   		movq	%rbx, %rdi
 6755 09f3 448B4C24 		movl	44(%rsp), %r9d
 6755      2C
 6756 09f8 E8000000 		call	_ZN8Fl_Table11damage_zoneEiiiiii
 6756      00
 6757              	.LVL804:
 6758 09fd 58       		popq	%rax
 6759              		.cfi_def_cfa_offset 120
 6760 09fe 5A       		popq	%rdx
 6761              		.cfi_def_cfa_offset 112
 6762 09ff 8B7C2420 		movl	32(%rsp), %edi
 6763 0a03 448B5424 		movl	12(%rsp), %r10d
 6763      0C
 6764              	.L574:
 928:fltk-1.3.4-1/src/Fl_Table.cxx ****  912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widge
 6765              		.loc 4 928 0
 6766 0a08 89BB5001 		movl	%edi, 336(%rbx)
 6766      0000
 6767              	.LVL805:
 6768 0a0e E925FAFF 		jmp	.L560
 6768      FF
 6769              	.LVL806:
 6770              		.p2align 4,,10
 6771 0a13 0F1F4400 		.p2align 3
 6771      00
 6772              	.L690:
 6773              	.LBE1421:
 6774              	.LBE1443:
 785:fltk-1.3.4-1/src/Fl_Table.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 6775              		.loc 4 785 0 discriminator 1
 6776 0a18 8B83A800 		movl	168(%rbx), %eax
 6776      0000
 6777 0a1e 034320   		addl	32(%rbx), %eax
 6778 0a21 4439F8   		cmpl	%r15d, %eax
 6779 0a24 0F8ED9FD 		jle	.L665
 6779      FFFF
 787:fltk-1.3.4-1/src/Fl_Table.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 6780              		.loc 4 787 0
 6781 0a2a 8B83A400 		movl	164(%rbx), %eax
 6781      0000
 790:fltk-1.3.4-1/src/Fl_Table.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6782              		.loc 4 790 0
 6783 0a30 4883EC08 		subq	$8, %rsp
 6784              		.cfi_def_cfa_offset 120
 786:fltk-1.3.4-1/src/Fl_Table.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 6785              		.loc 4 786 0
 6786 0a34 C7834801 		movl	$0, 328(%rbx)
 6786      00000000 
 6786      0000
 6787              	.LVL807:
 790:fltk-1.3.4-1/src/Fl_Table.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6788              		.loc 4 790 0
 6789 0a3e 6A00     		pushq	$0
 6790              		.cfi_def_cfa_offset 128
 788:fltk-1.3.4-1/src/Fl_Table.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 6791              		.loc 4 788 0
 6792 0a40 C7834401 		movl	$0, 324(%rbx)
 6792      00000000 
 6792      0000
 6793              	.LVL808:
 790:fltk-1.3.4-1/src/Fl_Table.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6794              		.loc 4 790 0
 6795 0a4a 4531C9   		xorl	%r9d, %r9d
 6796 0a4d 31D2     		xorl	%edx, %edx
 6797 0a4f 31F6     		xorl	%esi, %esi
 787:fltk-1.3.4-1/src/Fl_Table.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 6798              		.loc 4 787 0
 6799 0a51 448D40FF 		leal	-1(%rax), %r8d
 789:fltk-1.3.4-1/src/Fl_Table.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 6800              		.loc 4 789 0
 6801 0a55 8B83A000 		movl	160(%rbx), %eax
 6801      0000
 787:fltk-1.3.4-1/src/Fl_Table.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 6802              		.loc 4 787 0
 6803 0a5b 44898350 		movl	%r8d, 336(%rbx)
 6803      010000
 789:fltk-1.3.4-1/src/Fl_Table.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 6804              		.loc 4 789 0
 6805 0a62 8D48FF   		leal	-1(%rax), %ecx
 6806 0a65 898B4C01 		movl	%ecx, 332(%rbx)
 6806      0000
 6807              	.LVL809:
 6808              	.L663:
 843:fltk-1.3.4-1/src/Fl_Table.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6809              		.loc 4 843 0
 6810 0a6b 4889DF   		movq	%rbx, %rdi
 6811 0a6e E8000000 		call	_ZN8Fl_Table11damage_zoneEiiiiii
 6811      00
 6812              	.LVL810:
 6813 0a73 8B44242C 		movl	44(%rsp), %eax
 6814 0a77 5A       		popq	%rdx
 6815              		.cfi_def_cfa_offset 120
 6816 0a78 59       		popq	%rcx
 6817              		.cfi_def_cfa_offset 112
 6818 0a79 E922FEFF 		jmp	.L664
 6818      FF
 6819              	.LVL811:
 6820              	.L545:
 6821              	.LBB1444:
 6822              	.LBB1445:
 6823              		.loc 6 838 0
 6824 0a7e 488B3500 		movq	_ZN2Fl6focus_E(%rip), %rsi
 6824      000000
 6825              	.LBE1445:
 6826              	.LBE1444:
 811:fltk-1.3.4-1/src/Fl_Table.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 6827              		.loc 4 811 0
 6828 0a85 4839F3   		cmpq	%rsi, %rbx
 6829 0a88 7410     		je	.L548
 6830 0a8a 4889DF   		movq	%rbx, %rdi
 6831 0a8d E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 6831      00
 6832              	.LVL812:
 6833 0a92 85C0     		testl	%eax, %eax
 6834 0a94 0F85DAFE 		jne	.L658
 6834      FFFF
 6835              	.L548:
 814:fltk-1.3.4-1/src/Fl_Table.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6836              		.loc 4 814 0
 6837 0a9a 8B83A000 		movl	160(%rbx), %eax
 6837      0000
 812:fltk-1.3.4-1/src/Fl_Table.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6838              		.loc 4 812 0
 6839 0aa0 8B542420 		movl	32(%rsp), %edx
 816:fltk-1.3.4-1/src/Fl_Table.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 6840              		.loc 4 816 0
 6841 0aa4 4883EC08 		subq	$8, %rsp
 6842              		.cfi_remember_state
 6843              		.cfi_def_cfa_offset 120
 813:fltk-1.3.4-1/src/Fl_Table.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 6844              		.loc 4 813 0
 6845 0aa8 C7834401 		movl	$0, 324(%rbx)
 6845      00000000 
 6845      0000
 6846              	.LVL813:
 815:fltk-1.3.4-1/src/Fl_Table.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 6847              		.loc 4 815 0
 6848 0ab2 C783E000 		movl	$8, 224(%rbx)
 6848      00000800 
 6848      0000
 816:fltk-1.3.4-1/src/Fl_Table.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 6849              		.loc 4 816 0
 6850 0abc 4531C9   		xorl	%r9d, %r9d
 6851 0abf 6A00     		pushq	$0
 6852              		.cfi_def_cfa_offset 128
 6853 0ac1 31F6     		xorl	%esi, %esi
 814:fltk-1.3.4-1/src/Fl_Table.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6854              		.loc 4 814 0
 6855 0ac3 8D48FF   		leal	-1(%rax), %ecx
 812:fltk-1.3.4-1/src/Fl_Table.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6856              		.loc 4 812 0
 6857 0ac6 89935001 		movl	%edx, 336(%rbx)
 6857      0000
 6858 0acc 89934801 		movl	%edx, 328(%rbx)
 6858      0000
 816:fltk-1.3.4-1/src/Fl_Table.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 6859              		.loc 4 816 0
 6860 0ad2 4189D0   		movl	%edx, %r8d
 814:fltk-1.3.4-1/src/Fl_Table.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6861              		.loc 4 814 0
 6862 0ad5 898B4C01 		movl	%ecx, 332(%rbx)
 6862      0000
 6863 0adb EB8E     		jmp	.L663
 6864              	.LVL814:
 6865              	.L551:
 6866              		.cfi_restore_state
 6867              	.LBB1446:
 6868              	.LBB1447:
 6869              		.loc 6 838 0
 6870 0add 488B3500 		movq	_ZN2Fl6focus_E(%rip), %rsi
 6870      000000
 6871              	.LBE1447:
 6872              	.LBE1446:
 838:fltk-1.3.4-1/src/Fl_Table.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 6873              		.loc 4 838 0
 6874 0ae4 4839F3   		cmpq	%rsi, %rbx
 6875 0ae7 7410     		je	.L554
 6876 0ae9 4889DF   		movq	%rbx, %rdi
 6877 0aec E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 6877      00
 6878              	.LVL815:
 6879 0af1 85C0     		testl	%eax, %eax
 6880 0af3 0F857BFE 		jne	.L658
 6880      FFFF
 6881              	.L554:
 841:fltk-1.3.4-1/src/Fl_Table.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6882              		.loc 4 841 0
 6883 0af9 8B83A400 		movl	164(%rbx), %eax
 6883      0000
 839:fltk-1.3.4-1/src/Fl_Table.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 6884              		.loc 4 839 0
 6885 0aff 8B74241C 		movl	28(%rsp), %esi
 843:fltk-1.3.4-1/src/Fl_Table.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6886              		.loc 4 843 0
 6887 0b03 4883EC08 		subq	$8, %rsp
 6888              		.cfi_remember_state
 6889              		.cfi_def_cfa_offset 120
 840:fltk-1.3.4-1/src/Fl_Table.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 6890              		.loc 4 840 0
 6891 0b07 C7834801 		movl	$0, 328(%rbx)
 6891      00000000 
 6891      0000
 6892              	.LVL816:
 842:fltk-1.3.4-1/src/Fl_Table.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 6893              		.loc 4 842 0
 6894 0b11 C783E000 		movl	$4, 224(%rbx)
 6894      00000400 
 6894      0000
 843:fltk-1.3.4-1/src/Fl_Table.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6895              		.loc 4 843 0
 6896 0b1b 4531C9   		xorl	%r9d, %r9d
 6897 0b1e 6A00     		pushq	$0
 6898              		.cfi_def_cfa_offset 128
 6899 0b20 31D2     		xorl	%edx, %edx
 841:fltk-1.3.4-1/src/Fl_Table.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6900              		.loc 4 841 0
 6901 0b22 448D40FF 		leal	-1(%rax), %r8d
 839:fltk-1.3.4-1/src/Fl_Table.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 6902              		.loc 4 839 0
 6903 0b26 89B34C01 		movl	%esi, 332(%rbx)
 6903      0000
 6904 0b2c 89B34401 		movl	%esi, 324(%rbx)
 6904      0000
 843:fltk-1.3.4-1/src/Fl_Table.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6905              		.loc 4 843 0
 6906 0b32 89F1     		movl	%esi, %ecx
 841:fltk-1.3.4-1/src/Fl_Table.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6907              		.loc 4 841 0
 6908 0b34 44898350 		movl	%r8d, 336(%rbx)
 6908      010000
 6909 0b3b E92BFFFF 		jmp	.L663
 6909      FF
 6910              	.LVL817:
 6911              	.L682:
 6912              		.cfi_restore_state
 748:fltk-1.3.4-1/src/Fl_Table.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6913              		.loc 4 748 0
 6914 0b40 4889DF   		movq	%rbx, %rdi
 6915 0b43 44895424 		movl	%r10d, 12(%rsp)
 6915      0C
 750:fltk-1.3.4-1/src/Fl_Table.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6916              		.loc 4 750 0
 6917 0b48 41BD0100 		movl	$1, %r13d
 6917      0000
 6918              	.LVL818:
 748:fltk-1.3.4-1/src/Fl_Table.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6919              		.loc 4 748 0
 6920 0b4e E8000000 		call	_ZN9Fl_Widget10take_focusEv
 6920      00
 6921              	.LVL819:
 6922              	.LBB1448:
 6923              	.LBB1449:
 6924              	.LBB1450:
 6925              	.LBB1451:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6926              		.loc 1 861 0
 6927 0b53 488B5318 		movq	24(%rbx), %rdx
 6928              	.LBE1451:
 6929              	.LBE1450:
 963:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_row = row;
 6930              		.loc 3 963 0
 6931 0b57 C7830C01 		movl	$32, 268(%rbx)
 6931      00002000 
 6931      0000
 6932              	.LBB1454:
 6933              	.LBB1452:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6934              		.loc 1 861 0
 6935 0b61 4889DE   		movq	%rbx, %rsi
 6936              	.LBE1452:
 6937              	.LBE1454:
 964:fltk-1.3.4-1/FL/Fl_Table.H ****     _callback_col = col;
 6938              		.loc 3 964 0
 6939 0b64 C7831001 		movl	$-1, 272(%rbx)
 6939      0000FFFF 
 6939      FFFF
 6940              		.loc 3 965 0
 6941 0b6e C7831401 		movl	$-1, 276(%rbx)
 6941      0000FFFF 
 6941      FFFF
 6942              	.LVL820:
 6943              	.LBB1455:
 6944              	.LBB1453:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6945              		.loc 1 861 0
 6946 0b78 4889DF   		movq	%rbx, %rdi
 6947 0b7b E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 6947      00
 6948              	.LVL821:
 6949              	.LBE1453:
 6950              	.LBE1455:
 6951              	.LBE1449:
 6952              	.LBE1448:
 750:fltk-1.3.4-1/src/Fl_Table.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6953              		.loc 4 750 0
 6954 0b80 448B5424 		movl	12(%rsp), %r10d
 6954      0C
 6955 0b85 E9F1F5FF 		jmp	.L530
 6955      FF
 6956              	.LVL822:
 6957              	.L552:
 832:fltk-1.3.4-1/src/Fl_Table.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 6958              		.loc 4 832 0 discriminator 2
 6959 0b8a 8B54241C 		movl	28(%rsp), %edx
 6960 0b8e 89D0     		movl	%edx, %eax
 6961 0b90 E9F4FCFF 		jmp	.L553
 6961      FF
 6962              	.LVL823:
 6963              	.L679:
 6964              	.LBE1461:
 6965              	.LBE1478:
1074:fltk-1.3.4-1/src/Fl_Table.cxx ****    1:fltk-1.3.4-1/FL/Fl_Group.H **** //
 6966              		.loc 4 1074 0
 6967 0b95 E8000000 		call	__stack_chk_fail
 6967      00
 6968              	.LVL824:
 6969              	.L692:
 6970              	.LBB1479:
 6971              	.LBB1462:
 6972              	.LBB1456:
 6973              	.LBB1422:
 914:fltk-1.3.4-1/src/Fl_Table.cxx ****  898:fltk-1.3.4-1/FL/Fl_Widget.H ****   int inside(const Fl_Widget* wgt) const {return wgt ? wgt->c
 6974              		.loc 4 914 0
 6975 0b9a 4180E61C 		andb	$28, %r14b
 6976              	.LVL825:
 6977 0b9e 0F84AEF8 		je	.L572
 6977      FFFF
 916:fltk-1.3.4-1/src/Fl_Table.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 6978              		.loc 4 916 0
 6979 0ba4 8B8B4C01 		movl	332(%rbx), %ecx
 6979      0000
 6980 0baa 448B4C24 		movl	28(%rsp), %r9d
 6980      1C
 6981 0baf 4439C9   		cmpl	%r9d, %ecx
 6982 0bb2 7434     		je	.L573
 6983 0bb4 44895424 		movl	%r10d, 12(%rsp)
 6983      0C
 917:fltk-1.3.4-1/src/Fl_Table.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 6984              		.loc 4 917 0
 6985 0bb9 57       		pushq	%rdi
 6986              		.cfi_def_cfa_offset 120
 6987 0bba 4889DF   		movq	%rbx, %rdi
 6988 0bbd 8B442428 		movl	40(%rsp), %eax
 6989 0bc1 448B8350 		movl	336(%rbx), %r8d
 6989      010000
 6990 0bc8 8B934801 		movl	328(%rbx), %edx
 6990      0000
 6991 0bce 8BB34401 		movl	324(%rbx), %esi
 6991      0000
 6992 0bd4 50       		pushq	%rax
 6993              		.cfi_def_cfa_offset 128
 6994 0bd5 E8000000 		call	_ZN8Fl_Table11damage_zoneEiiiiii
 6994      00
 6995              	.LVL826:
 6996 0bda 4158     		popq	%r8
 6997              		.cfi_def_cfa_offset 120
 6998 0bdc 4159     		popq	%r9
 6999              		.cfi_def_cfa_offset 112
 7000 0bde 448B4C24 		movl	28(%rsp), %r9d
 7000      1C
 7001 0be3 448B5424 		movl	12(%rsp), %r10d
 7001      0C
 7002              	.L573:
 919:fltk-1.3.4-1/src/Fl_Table.cxx ****  903:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw();
 7003              		.loc 4 919 0
 7004 0be8 44898B4C 		movl	%r9d, 332(%rbx)
 7004      010000
 7005              	.LVL827:
 920:fltk-1.3.4-1/src/Fl_Table.cxx ****  904:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7006              		.loc 4 920 0
 7007 0bef E944F8FF 		jmp	.L560
 7007      FF
 7008              	.LVL828:
 7009              	.L691:
 905:fltk-1.3.4-1/src/Fl_Table.cxx ****  889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7010              		.loc 4 905 0
 7011 0bf4 85D2     		testl	%edx, %edx
 7012              	.LBE1422:
 7013              	.LBE1456:
 7014              	.LBE1462:
 7015              	.LBE1479:
 718:fltk-1.3.4-1/src/Fl_Table.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 7016              		.loc 4 718 0
 7017 0bf6 4589EC   		movl	%r13d, %r12d
 7018              	.LBB1480:
 7019              	.LBB1463:
 7020              	.LBB1457:
 7021              	.LBB1423:
 905:fltk-1.3.4-1/src/Fl_Table.cxx ****  889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7022              		.loc 4 905 0
 7023 0bf9 0F85A3F4 		jne	.L549
 7023      FFFF
 7024              	.LVL829:
 906:fltk-1.3.4-1/src/Fl_Table.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 7025              		.loc 4 906 0
 7026 0bff 8B8B4C01 		movl	332(%rbx), %ecx
 7026      0000
 7027 0c05 448B4C24 		movl	28(%rsp), %r9d
 7027      1C
 7028 0c0a 448B8350 		movl	336(%rbx), %r8d
 7028      010000
 7029 0c11 4439C9   		cmpl	%r9d, %ecx
 7030 0c14 7507     		jne	.L569
 906:fltk-1.3.4-1/src/Fl_Table.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 7031              		.loc 4 906 0 is_stmt 0 discriminator 1
 7032 0c16 443B4424 		cmpl	32(%rsp), %r8d
 7032      20
 7033 0c1b 742D     		je	.L570
 7034              	.L569:
 7035 0c1d 44895424 		movl	%r10d, 12(%rsp)
 7035      0C
 907:fltk-1.3.4-1/src/Fl_Table.cxx ****  891:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7036              		.loc 4 907 0 is_stmt 1
 7037 0c22 4152     		pushq	%r10
 7038              		.cfi_def_cfa_offset 120
 7039 0c24 4889DF   		movq	%rbx, %rdi
 7040 0c27 8B442428 		movl	40(%rsp), %eax
 7041 0c2b 8B934801 		movl	328(%rbx), %edx
 7041      0000
 7042 0c31 8BB34401 		movl	324(%rbx), %esi
 7042      0000
 7043 0c37 50       		pushq	%rax
 7044              		.cfi_def_cfa_offset 128
 7045 0c38 E8000000 		call	_ZN8Fl_Table11damage_zoneEiiiiii
 7045      00
 7046              	.LVL830:
 7047 0c3d 415B     		popq	%r11
 7048              		.cfi_def_cfa_offset 120
 7049 0c3f 5D       		popq	%rbp
 7050              		.cfi_def_cfa_offset 112
 7051 0c40 448B4C24 		movl	28(%rsp), %r9d
 7051      1C
 7052 0c45 448B5424 		movl	12(%rsp), %r10d
 7052      0C
 7053              	.L570:
 910:fltk-1.3.4-1/src/Fl_Table.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 7054              		.loc 4 910 0
 7055 0c4a 8B442420 		movl	32(%rsp), %eax
 909:fltk-1.3.4-1/src/Fl_Table.cxx ****  893:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns 1 if this widget is a child of \p wgt, or is
 7056              		.loc 4 909 0
 7057 0c4e 44898B4C 		movl	%r9d, 332(%rbx)
 7057      010000
 910:fltk-1.3.4-1/src/Fl_Table.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 7058              		.loc 4 910 0
 7059 0c55 89835001 		movl	%eax, 336(%rbx)
 7059      0000
 7060              	.LVL831:
 911:fltk-1.3.4-1/src/Fl_Table.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 7061              		.loc 4 911 0
 7062 0c5b E9D8F7FF 		jmp	.L560
 7062      FF
 7063              	.LBE1423:
 7064              	.LBE1457:
 7065              	.LBE1463:
 7066              	.LBE1480:
 7067              		.cfi_endproc
 7068              	.LFE599:
 7070              		.section	.text.unlikely._ZN8Fl_Table6handleEi
 7071              	.LCOLDE46:
 7072              		.section	.text._ZN8Fl_Table6handleEi
 7073              	.LHOTE46:
 7074              		.section	.text.unlikely._ZN8Fl_Table4drawEv,"ax",@progbits
 7075              		.align 2
 7076              	.LCOLDB47:
 7077              		.section	.text._ZN8Fl_Table4drawEv,"ax",@progbits
 7078              	.LHOTB47:
 7079              		.align 2
 7080              		.p2align 4,,15
 7081              		.globl	_ZN8Fl_Table4drawEv
 7083              	_ZN8Fl_Table4drawEv:
 7084              	.LFB605:
1165:fltk-1.3.4-1/src/Fl_Table.cxx ****   91:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1166:fltk-1.3.4-1/src/Fl_Table.cxx ****   92:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group(int,int,int,int, const char * = 0);
1167:fltk-1.3.4-1/src/Fl_Table.cxx ****   93:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual ~Fl_Group();
1168:fltk-1.3.4-1/src/Fl_Table.cxx ****   94:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget&);
1169:fltk-1.3.4-1/src/Fl_Table.cxx ****   95:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1170:fltk-1.3.4-1/src/Fl_Table.cxx ****   96:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::add(Fl_Widget &w) 
 7085              		.loc 4 1170 0
 7086              		.cfi_startproc
 7087              	.LVL832:
 7088 0000 4157     		pushq	%r15
 7089              		.cfi_def_cfa_offset 16
 7090              		.cfi_offset 15, -16
 7091 0002 4156     		pushq	%r14
 7092              		.cfi_def_cfa_offset 24
 7093              		.cfi_offset 14, -24
 7094 0004 4155     		pushq	%r13
 7095              		.cfi_def_cfa_offset 32
 7096              		.cfi_offset 13, -32
 7097 0006 4154     		pushq	%r12
 7098              		.cfi_def_cfa_offset 40
 7099              		.cfi_offset 12, -40
 7100 0008 55       		pushq	%rbp
 7101              		.cfi_def_cfa_offset 48
 7102              		.cfi_offset 6, -48
 7103 0009 53       		pushq	%rbx
 7104              		.cfi_def_cfa_offset 56
 7105              		.cfi_offset 3, -56
 7106 000a 4889FB   		movq	%rdi, %rbx
 7107 000d 4883EC38 		subq	$56, %rsp
 7108              		.cfi_def_cfa_offset 112
 7109              		.loc 4 1170 0
 7110 0011 64488B04 		movq	%fs:40, %rax
 7110      25280000 
 7110      00
 7111 001a 48894424 		movq	%rax, 40(%rsp)
 7111      28
 7112 001f 31C0     		xorl	%eax, %eax
1171:fltk-1.3.4-1/src/Fl_Table.cxx ****   97:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1172:fltk-1.3.4-1/src/Fl_Table.cxx ****   98:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget* o) {add(*o);}
1173:fltk-1.3.4-1/src/Fl_Table.cxx ****   99:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget&, int i);
1174:fltk-1.3.4-1/src/Fl_Table.cxx ****  100:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1175:fltk-1.3.4-1/src/Fl_Table.cxx ****  101:fltk-1.3.4-1/FL/Fl_Group.H ****     This does insert(w, find(before)).  This will append the
1176:fltk-1.3.4-1/src/Fl_Table.cxx ****  102:fltk-1.3.4-1/FL/Fl_Group.H ****     widget if \p before is not in the group.
 7113              		.loc 4 1176 0
 7114 0021 E8000000 		call	_ZN2Fl14scrollbar_sizeEv
 7114      00
 7115              	.LVL833:
 7116 0026 4189C4   		movl	%eax, %r12d
 7117              	.LVL834:
1177:fltk-1.3.4-1/src/Fl_Table.cxx ****  103:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1178:fltk-1.3.4-1/src/Fl_Table.cxx ****  104:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget& o, Fl_Widget* before) {insert(o,find(
1179:fltk-1.3.4-1/src/Fl_Table.cxx ****  105:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(int index);
 7118              		.loc 4 1179 0
 7119 0029 488B8398 		movq	408(%rbx), %rax
 7119      010000
 7120              	.LVL835:
 7121 0030 4885C0   		testq	%rax, %rax
 7122 0033 0F84EF02 		je	.L694
 7122      0000
 7123              	.LVL836:
 7124              		.loc 4 1179 0 is_stmt 0 discriminator 1
 7125 0039 443B6028 		cmpl	40(%rax), %r12d
 7126 003d 0F84E502 		je	.L694
 7126      0000
 7127              	.LVL837:
 7128              	.L695:
1180:fltk-1.3.4-1/src/Fl_Table.cxx ****  106:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget&);
1181:fltk-1.3.4-1/src/Fl_Table.cxx ****  107:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1182:fltk-1.3.4-1/src/Fl_Table.cxx ****  108:fltk-1.3.4-1/FL/Fl_Group.H ****     Removes the widget \p o from the group.
 7129              		.loc 4 1182 0 is_stmt 1
 7130 0043 4889DF   		movq	%rbx, %rdi
 7131 0046 E8000000 		call	_ZN8Fl_Table13table_resizedEv
 7131      00
 7132              	.LVL838:
 7133              	.L696:
1183:fltk-1.3.4-1/src/Fl_Table.cxx ****  109:fltk-1.3.4-1/FL/Fl_Group.H ****     \sa void remove(Fl_Widget&)
1184:fltk-1.3.4-1/src/Fl_Table.cxx ****  110:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1185:fltk-1.3.4-1/src/Fl_Table.cxx ****  111:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget* o) {remove(*o);}
1186:fltk-1.3.4-1/src/Fl_Table.cxx ****  112:fltk-1.3.4-1/FL/Fl_Group.H ****   void clear();
 7134              		.loc 4 1186 0
 7135 004b 488B03   		movq	(%rbx), %rax
 7136 004e 488B4050 		movq	80(%rax), %rax
 7137 0052 483D0000 		cmpq	$_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii, %rax
 7137      0000
 7138 0058 0F85E205 		jne	.L782
 7138      0000
 7139              	.L697:
 7140              	.LVL839:
 7141              	.LBB1609:
 7142              	.LBB1610:
 7143              		.file 8 "fltk-1.3.4-1/FL/fl_draw.H"
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
 7144              		.loc 8 82 0
 7145 005e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7145      000000
 7146 0065 8B8B8401 		movl	388(%rbx), %ecx
 7146      0000
 7147 006b 8B938001 		movl	384(%rbx), %edx
 7147      0000
 7148 0071 8BB37C01 		movl	380(%rbx), %esi
 7148      0000
 7149 0077 448B8388 		movl	392(%rbx), %r8d
 7149      010000
 7150 007e 488B07   		movq	(%rdi), %rax
 7151 0081 FF905001 		call	*336(%rax)
 7151      0000
 7152              	.LVL840:
 7153              	.LBE1610:
 7154              	.LBE1609:
1187:fltk-1.3.4-1/src/Fl_Table.cxx ****  113:fltk-1.3.4-1/FL/Fl_Group.H **** 
1188:fltk-1.3.4-1/src/Fl_Table.cxx ****  114:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1189:fltk-1.3.4-1/src/Fl_Table.cxx ****  115:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
1190:fltk-1.3.4-1/src/Fl_Table.cxx ****  116:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1191:fltk-1.3.4-1/src/Fl_Table.cxx ****  117:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget& o) {resizable_ = &o;}
1192:fltk-1.3.4-1/src/Fl_Table.cxx ****  118:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1193:fltk-1.3.4-1/src/Fl_Table.cxx ****  119:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable widget defines the resizing box for the grou
1194:fltk-1.3.4-1/src/Fl_Table.cxx ****  120:fltk-1.3.4-1/FL/Fl_Group.H ****     group is resized it calculates a new size and position for
1195:fltk-1.3.4-1/src/Fl_Table.cxx ****  121:fltk-1.3.4-1/FL/Fl_Group.H ****     children. Widgets that are horizontally or vertically insi
 7155              		.loc 4 1195 0
 7156 0087 4889DF   		movq	%rbx, %rdi
 7157 008a E8000000 		call	_ZN8Fl_Group4drawEv
 7157      00
 7158              	.LVL841:
 7159              	.LBB1611:
 7160              	.LBB1612:
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
 7161              		.loc 8 103 0
 7162 008f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7162      000000
 7163 0096 488B07   		movq	(%rdi), %rax
 7164 0099 FF907001 		call	*368(%rax)
 7164      0000
 7165              	.LVL842:
 7166              	.LBE1612:
 7167              	.LBE1611:
1196:fltk-1.3.4-1/src/Fl_Table.cxx ****  122:fltk-1.3.4-1/FL/Fl_Group.H ****     dimensions of the box are scaled to the new size. Widgets 
1197:fltk-1.3.4-1/src/Fl_Table.cxx ****  123:fltk-1.3.4-1/FL/Fl_Group.H ****     box are moved.
1198:fltk-1.3.4-1/src/Fl_Table.cxx ****  124:fltk-1.3.4-1/FL/Fl_Group.H **** 
1199:fltk-1.3.4-1/src/Fl_Table.cxx ****  125:fltk-1.3.4-1/FL/Fl_Group.H ****     In these examples the gray area is the resizable:
1200:fltk-1.3.4-1/src/Fl_Table.cxx ****  126:fltk-1.3.4-1/FL/Fl_Group.H **** 
 7168              		.loc 4 1200 0
 7169 009f 8B4364   		movl	100(%rbx), %eax
 7170 00a2 0FB6736E 		movzbl	110(%rbx), %esi
 7171 00a6 4883EC08 		subq	$8, %rsp
 7172              		.cfi_def_cfa_offset 120
 7173 00aa 448B4328 		movl	40(%rbx), %r8d
 7174 00ae 8B4B24   		movl	36(%rbx), %ecx
 7175 00b1 4889DF   		movq	%rbx, %rdi
 7176 00b4 8B5320   		movl	32(%rbx), %edx
 7177 00b7 448B4B2C 		movl	44(%rbx), %r9d
 7178 00bb 50       		pushq	%rax
 7179              		.cfi_def_cfa_offset 128
 7180 00bc E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 7180      00
 7181              	.LVL843:
1201:fltk-1.3.4-1/src/Fl_Table.cxx ****  127:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox1.png
1202:fltk-1.3.4-1/src/Fl_Table.cxx ****  128:fltk-1.3.4-1/FL/Fl_Group.H **** 
1203:fltk-1.3.4-1/src/Fl_Table.cxx ****  129:fltk-1.3.4-1/FL/Fl_Group.H ****     <br>
1204:fltk-1.3.4-1/src/Fl_Table.cxx ****  130:fltk-1.3.4-1/FL/Fl_Group.H ****     
1205:fltk-1.3.4-1/src/Fl_Table.cxx ****  131:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox2.png
1206:fltk-1.3.4-1/src/Fl_Table.cxx ****  132:fltk-1.3.4-1/FL/Fl_Group.H ****     
 7182              		.loc 4 1206 0
 7183 00c1 488B8390 		movq	400(%rbx), %rax
 7183      010000
 7184              	.LVL844:
 7185 00c8 5F       		popq	%rdi
 7186              		.cfi_def_cfa_offset 120
 7187 00c9 4158     		popq	%r8
 7188              		.cfi_def_cfa_offset 112
 7189 00cb F6406002 		testb	$2, 96(%rax)
 7190 00cf 741F     		je	.L698
 7191 00d1 0FB6536D 		movzbl	109(%rbx), %edx
 7192              	.LVL845:
1207:fltk-1.3.4-1/src/Fl_Table.cxx ****  133:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox1.png "before resize"  width=4cm
 7193              		.loc 4 1207 0
 7194 00d5 84D2     		testb	%dl, %dl
 7195 00d7 0F881302 		js	.L699
 7195      0000
 7196              	.LVL846:
 7197              		.loc 4 1207 0 is_stmt 0 discriminator 2
 7198 00dd 83E201   		andl	$1, %edx
 7199 00e0 0F850A02 		jne	.L699
 7199      0000
 7200              	.LVL847:
 7201 00e6 662E0F1F 		.p2align 4,,10
 7201      84000000 
 7201      0000
 7202              		.p2align 3
 7203              	.L698:
 7204              	.LBB1613:
 7205              	.LBB1614:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7206              		.loc 8 82 0 is_stmt 1
 7207 00f0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7207      000000
 7208 00f7 8B8B8401 		movl	388(%rbx), %ecx
 7208      0000
 7209 00fd 8B938001 		movl	384(%rbx), %edx
 7209      0000
 7210 0103 8BB37C01 		movl	380(%rbx), %esi
 7210      0000
 7211 0109 448B8388 		movl	392(%rbx), %r8d
 7211      010000
 7212 0110 488B07   		movq	(%rdi), %rax
 7213 0113 FF905001 		call	*336(%rax)
 7213      0000
 7214              	.LVL848:
 7215              	.LBE1614:
 7216              	.LBE1613:
 7217              	.LBB1615:
 7218              	.LBB1616:
1208:fltk-1.3.4-1/src/Fl_Table.cxx ****  134:fltk-1.3.4-1/FL/Fl_Group.H ****     
1209:fltk-1.3.4-1/src/Fl_Table.cxx ****  135:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox2.png "after resize"   width=4.85cm
1210:fltk-1.3.4-1/src/Fl_Table.cxx ****  136:fltk-1.3.4-1/FL/Fl_Group.H **** 
1211:fltk-1.3.4-1/src/Fl_Table.cxx ****  137:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable may be set to the group itself, in which cas
1212:fltk-1.3.4-1/src/Fl_Table.cxx ****  138:fltk-1.3.4-1/FL/Fl_Group.H ****     contents are resized. This is the default value for Fl_Gro
1213:fltk-1.3.4-1/src/Fl_Table.cxx ****  139:fltk-1.3.4-1/FL/Fl_Group.H ****     although NULL is the default for Fl_Window and Fl_Pack.
1214:fltk-1.3.4-1/src/Fl_Table.cxx ****  140:fltk-1.3.4-1/FL/Fl_Group.H **** 
1215:fltk-1.3.4-1/src/Fl_Table.cxx ****  141:fltk-1.3.4-1/FL/Fl_Group.H ****     If the resizable is NULL then all widgets remain a fixed s
 7219              		.loc 4 1215 0
 7220 0119 807B6D00 		cmpb	$0, 109(%rbx)
 7221 011d 0F882402 		js	.L711
 7221      0000
 7222              		.loc 4 1215 0 is_stmt 0 discriminator 1
 7223 0123 83BBCC00 		cmpl	$-1, 204(%rbx)
 7223      0000FF
 7224 012a 0F84B200 		je	.L704
 7224      0000
 7225              	.LVL849:
 7226              	.LBB1617:
 7227              	.LBB1618:
 7228              	.LBB1619:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7229              		.loc 8 82 0 is_stmt 1
 7230 0130 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7230      000000
 7231 0137 8B8B6401 		movl	356(%rbx), %ecx
 7231      0000
 7232 013d 8B936001 		movl	352(%rbx), %edx
 7232      0000
 7233 0143 8BB35C01 		movl	348(%rbx), %esi
 7233      0000
 7234 0149 448B8368 		movl	360(%rbx), %r8d
 7234      010000
 7235 0150 488B07   		movq	(%rdi), %rax
 7236 0153 FF905001 		call	*336(%rax)
 7236      0000
 7237              	.LVL850:
 7238              	.LBE1619:
 7239              	.LBE1618:
 7240              	.LBB1620:
1216:fltk-1.3.4-1/src/Fl_Table.cxx ****  142:fltk-1.3.4-1/FL/Fl_Group.H ****     and distance from the top-left corner.
1217:fltk-1.3.4-1/src/Fl_Table.cxx ****  143:fltk-1.3.4-1/FL/Fl_Group.H **** 
 7241              		.loc 4 1217 0
 7242 0159 448BB3CC 		movl	204(%rbx), %r14d
 7242      000000
 7243              	.LVL851:
 7244 0160 4439B3D0 		cmpl	%r14d, 208(%rbx)
 7244      000000
 7245 0167 7C5F     		jl	.L706
 7246 0169 0F1F8000 		.p2align 4,,10
 7246      000000
 7247              		.p2align 3
 7248              	.L707:
 7249 0170 4489F0   		movl	%r14d, %eax
 7250              	.LBB1621:
1218:fltk-1.3.4-1/src/Fl_Table.cxx ****  144:fltk-1.3.4-1/FL/Fl_Group.H ****     It is possible to achieve any type of resize behavior by u
 7251              		.loc 4 1218 0
 7252 0173 8BABC400 		movl	196(%rbx), %ebp
 7252      0000
 7253              	.LVL852:
 7254 0179 C1E81F   		shrl	$31, %eax
 7255 017c 3BABC800 		cmpl	200(%rbx), %ebp
 7255      0000
 7256 0182 4189C5   		movl	%eax, %r13d
 7257 0185 7F34     		jg	.L709
 7258 0187 660F1F84 		.p2align 4,,10
 7258      00000000 
 7258      00
 7259              		.p2align 3
 7260              	.L764:
 7261              	.LVL853:
 7262              	.LBB1622:
 7263              	.LBB1623:
1088:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
 7264              		.loc 4 1088 0
 7265 0190 89E8     		movl	%ebp, %eax
 7266 0192 C1E81F   		shrl	$31, %eax
 7267 0195 84C0     		testb	%al, %al
 7268 0197 7517     		jne	.L708
 7269 0199 4584ED   		testb	%r13b, %r13b
 7270 019c 7512     		jne	.L708
 7271 019e 4489F1   		movl	%r14d, %ecx
 7272 01a1 89EA     		movl	%ebp, %edx
 7273 01a3 BE100000 		movl	$16, %esi
 7273      00
 7274 01a8 4889DF   		movq	%rbx, %rdi
 7275 01ab E8000000 		call	_ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34
 7275      00
 7276              	.LVL854:
 7277              	.L708:
 7278              	.LBE1623:
 7279              	.LBE1622:
 7280              		.loc 4 1218 0 discriminator 2
 7281 01b0 83C501   		addl	$1, %ebp
 7282              	.LVL855:
 7283 01b3 39ABC800 		cmpl	%ebp, 200(%rbx)
 7283      0000
 7284 01b9 7DD5     		jge	.L764
 7285              	.L709:
 7286              	.LBE1621:
1217:fltk-1.3.4-1/src/Fl_Table.cxx ****  144:fltk-1.3.4-1/FL/Fl_Group.H ****     It is possible to achieve any type of resize behavior by u
 7287              		.loc 4 1217 0
 7288 01bb 4183C601 		addl	$1, %r14d
 7289              	.LVL856:
 7290 01bf 4439B3D0 		cmpl	%r14d, 208(%rbx)
 7290      000000
 7291 01c6 7DA8     		jge	.L707
 7292              	.LVL857:
 7293              	.L706:
 7294              	.LBE1620:
 7295              	.LBB1624:
 7296              	.LBB1625:
 7297              		.loc 8 103 0
 7298 01c8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7298      000000
 7299 01cf 488B07   		movq	(%rdi), %rax
 7300 01d2 FF907001 		call	*368(%rax)
 7300      0000
 7301              	.LVL858:
 7302              	.LBE1625:
 7303              	.LBE1624:
 7304              	.LBE1617:
 7305              	.LBE1616:
 7306              	.LBB1626:
1219:fltk-1.3.4-1/src/Fl_Table.cxx ****  145:fltk-1.3.4-1/FL/Fl_Group.H ****     invisible Fl_Box as the resizable and/or by using a hierar
1220:fltk-1.3.4-1/src/Fl_Table.cxx ****  146:fltk-1.3.4-1/FL/Fl_Group.H ****     of child Fl_Group's.
1221:fltk-1.3.4-1/src/Fl_Table.cxx ****  147:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1222:fltk-1.3.4-1/src/Fl_Table.cxx ****  148:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget* o) {resizable_ = o;}
1223:fltk-1.3.4-1/src/Fl_Table.cxx ****  149:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1224:fltk-1.3.4-1/src/Fl_Table.cxx ****  150:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
 7307              		.loc 4 1224 0
 7308 01d8 807B6D00 		cmpb	$0, 109(%rbx)
 7309 01dc 0F886501 		js	.L711
 7309      0000
 7310              	.LVL859:
 7311              	.L704:
 7312              	.LBE1626:
1225:fltk-1.3.4-1/src/Fl_Table.cxx ****  151:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1226:fltk-1.3.4-1/src/Fl_Table.cxx ****  152:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* resizable() const {return resizable_;}
1227:fltk-1.3.4-1/src/Fl_Table.cxx ****  153:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1228:fltk-1.3.4-1/src/Fl_Table.cxx ****  154:fltk-1.3.4-1/FL/Fl_Group.H ****     Adds a widget to the group and makes it the resizable widg
1229:fltk-1.3.4-1/src/Fl_Table.cxx ****  155:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1230:fltk-1.3.4-1/src/Fl_Table.cxx ****  156:fltk-1.3.4-1/FL/Fl_Group.H ****   void add_resizable(Fl_Widget& o) {resizable_ = &o; add(o);}
1231:fltk-1.3.4-1/src/Fl_Table.cxx ****  157:fltk-1.3.4-1/FL/Fl_Group.H ****   void init_sizes();
1232:fltk-1.3.4-1/src/Fl_Table.cxx ****  158:fltk-1.3.4-1/FL/Fl_Group.H **** 
1233:fltk-1.3.4-1/src/Fl_Table.cxx ****  159:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1234:fltk-1.3.4-1/src/Fl_Table.cxx ****  160:fltk-1.3.4-1/FL/Fl_Group.H ****     Controls whether the group widget clips the drawing of
1235:fltk-1.3.4-1/src/Fl_Table.cxx ****  161:fltk-1.3.4-1/FL/Fl_Group.H ****     child widgets to its bounding box.
1236:fltk-1.3.4-1/src/Fl_Table.cxx ****  162:fltk-1.3.4-1/FL/Fl_Group.H ****     
1237:fltk-1.3.4-1/src/Fl_Table.cxx ****  163:fltk-1.3.4-1/FL/Fl_Group.H ****     Set \p c to 1 if you want to clip the child widgets to the
1238:fltk-1.3.4-1/src/Fl_Table.cxx ****  164:fltk-1.3.4-1/FL/Fl_Group.H ****     bounding box.
1239:fltk-1.3.4-1/src/Fl_Table.cxx ****  165:fltk-1.3.4-1/FL/Fl_Group.H **** 
1240:fltk-1.3.4-1/src/Fl_Table.cxx ****  166:fltk-1.3.4-1/FL/Fl_Group.H ****     The default is to not clip (0) the drawing of child widget
1241:fltk-1.3.4-1/src/Fl_Table.cxx ****  167:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1242:fltk-1.3.4-1/src/Fl_Table.cxx ****  168:fltk-1.3.4-1/FL/Fl_Group.H ****   void clip_children(int c) { if (c) set_flag(CLIP_CHILDREN); 
1243:fltk-1.3.4-1/src/Fl_Table.cxx ****  169:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
1244:fltk-1.3.4-1/src/Fl_Table.cxx ****  170:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns the current clipping mode.
1245:fltk-1.3.4-1/src/Fl_Table.cxx ****  171:fltk-1.3.4-1/FL/Fl_Group.H **** 
1246:fltk-1.3.4-1/src/Fl_Table.cxx ****  172:fltk-1.3.4-1/FL/Fl_Group.H ****     \return true, if clipping is enabled, false otherwise.
1247:fltk-1.3.4-1/src/Fl_Table.cxx ****  173:fltk-1.3.4-1/FL/Fl_Group.H **** 
1248:fltk-1.3.4-1/src/Fl_Table.cxx ****  174:fltk-1.3.4-1/FL/Fl_Group.H ****     \see void Fl_Group::clip_children(int c)
1249:fltk-1.3.4-1/src/Fl_Table.cxx ****  175:fltk-1.3.4-1/FL/Fl_Group.H ****   */
1250:fltk-1.3.4-1/src/Fl_Table.cxx ****  176:fltk-1.3.4-1/FL/Fl_Group.H ****   unsigned int clip_children() { return (flags() & CLIP_CHILDR
1251:fltk-1.3.4-1/src/Fl_Table.cxx ****  177:fltk-1.3.4-1/FL/Fl_Group.H **** 
1252:fltk-1.3.4-1/src/Fl_Table.cxx ****  178:fltk-1.3.4-1/FL/Fl_Group.H ****   // Note: Doxygen docs in Fl_Widget.H to avoid redundancy.
1253:fltk-1.3.4-1/src/Fl_Table.cxx ****  179:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual Fl_Group* as_group() { return this; }
1254:fltk-1.3.4-1/src/Fl_Table.cxx ****   68              		.loc 2 179 0
1255:fltk-1.3.4-1/src/Fl_Table.cxx ****   69              		.cfi_startproc
1256:fltk-1.3.4-1/src/Fl_Table.cxx ****   70              	.LVL2:
1257:fltk-1.3.4-1/src/Fl_Table.cxx ****   71              		.loc 2 179 0
1258:fltk-1.3.4-1/src/Fl_Table.cxx ****   72 0000 4889F8   		movq	%rdi, %rax
1259:fltk-1.3.4-1/src/Fl_Table.cxx ****   73 0003 C3       		ret
1260:fltk-1.3.4-1/src/Fl_Table.cxx ****   74              		.cfi_endproc
1261:fltk-1.3.4-1/src/Fl_Table.cxx ****   75              	.LFE145:
1262:fltk-1.3.4-1/src/Fl_Table.cxx ****   77              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
1263:fltk-1.3.4-1/src/Fl_Table.cxx ****   78              	.LCOLDE2:
1264:fltk-1.3.4-1/src/Fl_Table.cxx ****   79              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,
1265:fltk-1.3.4-1/src/Fl_Table.cxx ****   80              	.LHOTE2:
1266:fltk-1.3.4-1/src/Fl_Table.cxx ****   81              		.section	.text.unlikely._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii,"axG",@
1267:fltk-1.3.4-1/src/Fl_Table.cxx ****   82              		.align 2
1268:fltk-1.3.4-1/src/Fl_Table.cxx ****   83              	.LCOLDB3:
1269:fltk-1.3.4-1/src/Fl_Table.cxx ****   84              		.section	.text._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii,"axG",@progbits,
1270:fltk-1.3.4-1/src/Fl_Table.cxx ****   85              	.LHOTB3:
1271:fltk-1.3.4-1/src/Fl_Table.cxx ****   86              		.align 2
1272:fltk-1.3.4-1/src/Fl_Table.cxx ****   87              		.p2align 4,,15
1273:fltk-1.3.4-1/src/Fl_Table.cxx ****   88              		.weak	_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii
1274:fltk-1.3.4-1/src/Fl_Table.cxx ****   90              	_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii:
1275:fltk-1.3.4-1/src/Fl_Table.cxx ****   91              	.LFB513:
1276:fltk-1.3.4-1/src/Fl_Table.cxx ****   92              		.file 3 "fltk-1.3.4-1/FL/Fl_Table.H"
1277:fltk-1.3.4-1/src/Fl_Table.cxx ****    1:fltk-1.3.4-1/FL/Fl_Table.H **** //
1278:fltk-1.3.4-1/src/Fl_Table.cxx ****    2:fltk-1.3.4-1/FL/Fl_Table.H **** // "$Id: Fl_Table.H 11094 2016-01-31 02:49:56Z AlbrechtS $"
1279:fltk-1.3.4-1/src/Fl_Table.cxx ****    3:fltk-1.3.4-1/FL/Fl_Table.H **** //
1280:fltk-1.3.4-1/src/Fl_Table.cxx ****    4:fltk-1.3.4-1/FL/Fl_Table.H **** // Fl_Table -- A table widget
1281:fltk-1.3.4-1/src/Fl_Table.cxx ****    5:fltk-1.3.4-1/FL/Fl_Table.H **** //
1282:fltk-1.3.4-1/src/Fl_Table.cxx ****    6:fltk-1.3.4-1/FL/Fl_Table.H **** // Copyright 2002 by Greg Ercolano.
1283:fltk-1.3.4-1/src/Fl_Table.cxx ****    7:fltk-1.3.4-1/FL/Fl_Table.H **** // Copyright (c) 2004 O'ksi'D
1284:fltk-1.3.4-1/src/Fl_Table.cxx ****    8:fltk-1.3.4-1/FL/Fl_Table.H **** //
1285:fltk-1.3.4-1/src/Fl_Table.cxx ****    9:fltk-1.3.4-1/FL/Fl_Table.H **** // This library is free software. Distribution and use rights 
1286:fltk-1.3.4-1/src/Fl_Table.cxx ****   10:fltk-1.3.4-1/FL/Fl_Table.H **** // the file "COPYING" which should have been included with thi
1287:fltk-1.3.4-1/src/Fl_Table.cxx ****   11:fltk-1.3.4-1/FL/Fl_Table.H **** // file is missing or damaged, see the license at:
1288:fltk-1.3.4-1/src/Fl_Table.cxx ****   12:fltk-1.3.4-1/FL/Fl_Table.H **** //
1289:fltk-1.3.4-1/src/Fl_Table.cxx ****   13:fltk-1.3.4-1/FL/Fl_Table.H **** //     http://www.fltk.org/COPYING.php
1290:fltk-1.3.4-1/src/Fl_Table.cxx ****   14:fltk-1.3.4-1/FL/Fl_Table.H **** //
1291:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Table.H **** // Please report all bugs and problems on the following page:
1292:fltk-1.3.4-1/src/Fl_Table.cxx ****   16:fltk-1.3.4-1/FL/Fl_Table.H **** //
1293:fltk-1.3.4-1/src/Fl_Table.cxx ****   17:fltk-1.3.4-1/FL/Fl_Table.H **** //     http://www.fltk.org/str.php
1294:fltk-1.3.4-1/src/Fl_Table.cxx ****   18:fltk-1.3.4-1/FL/Fl_Table.H **** //
1295:fltk-1.3.4-1/src/Fl_Table.cxx ****   19:fltk-1.3.4-1/FL/Fl_Table.H **** 
1296:fltk-1.3.4-1/src/Fl_Table.cxx ****   20:fltk-1.3.4-1/FL/Fl_Table.H **** #ifndef _FL_TABLE_H
1297:fltk-1.3.4-1/src/Fl_Table.cxx ****   21:fltk-1.3.4-1/FL/Fl_Table.H **** #define _FL_TABLE_H
1298:fltk-1.3.4-1/src/Fl_Table.cxx ****   22:fltk-1.3.4-1/FL/Fl_Table.H **** 
1299:fltk-1.3.4-1/src/Fl_Table.cxx ****   23:fltk-1.3.4-1/FL/Fl_Table.H **** #include <sys/types.h>
1300:fltk-1.3.4-1/src/Fl_Table.cxx ****   24:fltk-1.3.4-1/FL/Fl_Table.H **** #include <string.h>		// memcpy
1301:fltk-1.3.4-1/src/Fl_Table.cxx ****   25:fltk-1.3.4-1/FL/Fl_Table.H **** #ifdef WIN32
1302:fltk-1.3.4-1/src/Fl_Table.cxx ****   26:fltk-1.3.4-1/FL/Fl_Table.H **** #include <malloc.h>		// WINDOWS: malloc/realloc
1303:fltk-1.3.4-1/src/Fl_Table.cxx ****   27:fltk-1.3.4-1/FL/Fl_Table.H **** #else /*WIN32*/
1304:fltk-1.3.4-1/src/Fl_Table.cxx ****   28:fltk-1.3.4-1/FL/Fl_Table.H **** #include <stdlib.h>		// UNIX: malloc/realloc
 7313              		.loc 4 1304 0
 7314 01e2 488B8398 		movq	408(%rbx), %rax
 7314      010000
 7315              	.LVL860:
 7316 01e9 F6406002 		testb	$2, 96(%rax)
 7317 01ed 750D     		jne	.L745
 7318              		.loc 4 1304 0 is_stmt 0 discriminator 1
 7319 01ef 488B93A0 		movq	416(%rbx), %rdx
 7319      010000
 7320              	.LVL861:
 7321 01f6 F6426002 		testb	$2, 96(%rdx)
 7322 01fa 746E     		je	.L746
 7323              	.LVL862:
 7324              	.L745:
1305:fltk-1.3.4-1/src/Fl_Table.cxx ****   29:fltk-1.3.4-1/FL/Fl_Table.H **** #endif /*WIN32*/
1306:fltk-1.3.4-1/src/Fl_Table.cxx ****   30:fltk-1.3.4-1/FL/Fl_Table.H **** 
1307:fltk-1.3.4-1/src/Fl_Table.cxx ****   31:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl.H>
1308:fltk-1.3.4-1/src/Fl_Table.cxx ****   32:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Group.H>
1309:fltk-1.3.4-1/src/Fl_Table.cxx ****   33:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Scroll.H>
 7325              		.loc 4 1309 0 is_stmt 1
 7326 01fc 488B03   		movq	(%rbx), %rax
 7327 01ff 488B4050 		movq	80(%rax), %rax
 7328 0203 483D0000 		cmpq	$_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii, %rax
 7328      0000
 7329 0209 0F85A800 		jne	.L783
 7329      0000
 7330              	.LVL863:
 7331              	.L747:
 7332              	.LBE1615:
 7333              	.LBB1742:
 7334              	.LBB1743:
 7335              		.loc 8 103 0
 7336 020f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7336      000000
 7337              	.LBE1743:
 7338              	.LBE1742:
 7339              	.LBB1745:
1310:fltk-1.3.4-1/src/Fl_Table.cxx ****   34:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Box.H>
1311:fltk-1.3.4-1/src/Fl_Table.cxx ****   35:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Scrollbar.H>
 7340              		.loc 4 1311 0
 7341 0216 C783C800 		movl	$-1, 200(%rbx)
 7341      0000FFFF 
 7341      FFFF
 7342 0220 C783C400 		movl	$-1, 196(%rbx)
 7342      0000FFFF 
 7342      FFFF
 7343 022a C783D000 		movl	$-1, 208(%rbx)
 7343      0000FFFF 
 7343      FFFF
 7344 0234 C783CC00 		movl	$-1, 204(%rbx)
 7344      0000FFFF 
 7344      FFFF
 7345              	.LBE1745:
 7346              	.LBB1746:
 7347              	.LBB1744:
 7348              		.loc 8 103 0
 7349 023e 488B07   		movq	(%rdi), %rax
 7350 0241 FF907001 		call	*368(%rax)
 7350      0000
 7351              	.LVL864:
 7352              	.LBE1744:
 7353              	.LBE1746:
1312:fltk-1.3.4-1/src/Fl_Table.cxx ****   36:fltk-1.3.4-1/FL/Fl_Table.H **** 
1313:fltk-1.3.4-1/src/Fl_Table.cxx ****   37:fltk-1.3.4-1/FL/Fl_Table.H **** /**
1314:fltk-1.3.4-1/src/Fl_Table.cxx ****   38:fltk-1.3.4-1/FL/Fl_Table.H ****  A table of widgets or other content.
 7354              		.loc 4 1314 0
 7355 0247 488B4424 		movq	40(%rsp), %rax
 7355      28
 7356 024c 64483304 		xorq	%fs:40, %rax
 7356      25280000 
 7356      00
 7357 0255 0F85F905 		jne	.L784
 7357      0000
 7358 025b 4883C438 		addq	$56, %rsp
 7359              		.cfi_remember_state
 7360              		.cfi_def_cfa_offset 56
 7361 025f 5B       		popq	%rbx
 7362              		.cfi_def_cfa_offset 48
 7363              	.LVL865:
 7364 0260 5D       		popq	%rbp
 7365              		.cfi_def_cfa_offset 40
 7366 0261 415C     		popq	%r12
 7367              		.cfi_def_cfa_offset 32
 7368 0263 415D     		popq	%r13
 7369              		.cfi_def_cfa_offset 24
 7370 0265 415E     		popq	%r14
 7371              		.cfi_def_cfa_offset 16
 7372 0267 415F     		popq	%r15
 7373              		.cfi_def_cfa_offset 8
 7374 0269 C3       		ret
 7375              	.LVL866:
 7376              	.L746:
 7377              		.cfi_restore_state
 7378              	.LBB1747:
 7379              	.LBB1735:
 7380              	.LBB1736:
 7381              	.LBB1737:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7382              		.loc 8 52 0
 7383 026a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7383      000000
 7384 0271 448B6028 		movl	40(%rax), %r12d
 7385 0275 8B6820   		movl	32(%rax), %ebp
 7386 0278 448B6A2C 		movl	44(%rdx), %r13d
 7387              	.LVL867:
 7388 027c 448B7224 		movl	36(%rdx), %r14d
 7389              	.LVL868:
 7390 0280 8B7364   		movl	100(%rbx), %esi
 7391 0283 488B07   		movq	(%rdi), %rax
 7392              	.LVL869:
 7393 0286 FF908800 		call	*136(%rax)
 7393      0000
 7394              	.LVL870:
 7395              	.LBE1737:
 7396              	.LBE1736:
 7397              	.LBB1738:
 7398              	.LBB1739:
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
 7399              		.loc 8 206 0
 7400 028c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7400      000000
 7401 0293 4589E8   		movl	%r13d, %r8d
 7402 0296 4489E1   		movl	%r12d, %ecx
 7403 0299 4489F2   		movl	%r14d, %edx
 7404 029c 89EE     		movl	%ebp, %esi
 7405 029e 488B07   		movq	(%rdi), %rax
 7406 02a1 FF5020   		call	*32(%rax)
 7407              	.LVL871:
 7408              	.LBE1739:
 7409              	.LBE1738:
 7410              	.LBE1735:
1309:fltk-1.3.4-1/src/Fl_Table.cxx ****   34:fltk-1.3.4-1/FL/Fl_Table.H **** #include <FL/Fl_Box.H>
 7411              		.loc 4 1309 0
 7412 02a4 488B03   		movq	(%rbx), %rax
 7413 02a7 488B4050 		movq	80(%rax), %rax
 7414 02ab 483D0000 		cmpq	$_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii, %rax
 7414      0000
 7415 02b1 0F8458FF 		je	.L747
 7415      FFFF
 7416              	.LVL872:
 7417              	.L783:
 7418 02b7 8B936801 		movl	360(%rbx), %edx
 7418      0000
 7419 02bd 31C9     		xorl	%ecx, %ecx
 7420 02bf BE020000 		movl	$2, %esi
 7420      00
 7421 02c4 448B8B60 		movl	352(%rbx), %r9d
 7421      010000
 7422 02cb 448B835C 		movl	348(%rbx), %r8d
 7422      010000
 7423 02d2 4889DF   		movq	%rbx, %rdi
 7424 02d5 52       		pushq	%rdx
 7425              		.cfi_def_cfa_offset 120
 7426 02d6 8B936401 		movl	356(%rbx), %edx
 7426      0000
 7427 02dc 52       		pushq	%rdx
 7428              		.cfi_def_cfa_offset 128
 7429 02dd 31D2     		xorl	%edx, %edx
 7430 02df FFD0     		call	*%rax
 7431              	.LVL873:
 7432 02e1 59       		popq	%rcx
 7433              		.cfi_def_cfa_offset 120
 7434 02e2 5E       		popq	%rsi
 7435              		.cfi_def_cfa_offset 112
 7436 02e3 E927FFFF 		jmp	.L747
 7436      FF
 7437              	.LVL874:
 7438 02e8 0F1F8400 		.p2align 4,,10
 7438      00000000 
 7439              		.p2align 3
 7440              	.L699:
 7441              	.LBE1747:
1208:fltk-1.3.4-1/src/Fl_Table.cxx ****  135:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox2.png "after resize"   width=4.85cm
 7442              		.loc 4 1208 0
 7443 02f0 0FB6706E 		movzbl	110(%rax), %esi
 7444 02f4 8B4064   		movl	100(%rax), %eax
 7445              	.LVL875:
 7446 02f7 4883EC08 		subq	$8, %rsp
 7447              		.cfi_def_cfa_offset 120
 7448 02fb 8B936C01 		movl	364(%rbx), %edx
 7448      0000
 7449 0301 8B8B7001 		movl	368(%rbx), %ecx
 7449      0000
 7450 0307 4889DF   		movq	%rbx, %rdi
 7451 030a 448B8B78 		movl	376(%rbx), %r9d
 7451      010000
 7452 0311 448B8374 		movl	372(%rbx), %r8d
 7452      010000
 7453 0318 50       		pushq	%rax
 7454              		.cfi_def_cfa_offset 128
 7455              	.LVL876:
 7456 0319 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 7456      00
 7457              	.LVL877:
 7458 031e 58       		popq	%rax
 7459              		.cfi_def_cfa_offset 120
 7460 031f 5A       		popq	%rdx
 7461              		.cfi_def_cfa_offset 112
 7462 0320 E9CBFDFF 		jmp	.L698
 7462      FF
 7463              	.LVL878:
 7464              		.p2align 4,,10
 7465 0325 0F1F00   		.p2align 3
 7466              	.L694:
1180:fltk-1.3.4-1/src/Fl_Table.cxx ****  107:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 7467              		.loc 4 1180 0 discriminator 4
 7468 0328 488B83A0 		movq	416(%rbx), %rax
 7468      010000
1179:fltk-1.3.4-1/src/Fl_Table.cxx ****  106:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget&);
 7469              		.loc 4 1179 0 discriminator 4
 7470 032f 4885C0   		testq	%rax, %rax
 7471 0332 0F8413FD 		je	.L696
 7471      FFFF
 7472              	.LVL879:
1180:fltk-1.3.4-1/src/Fl_Table.cxx ****  107:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 7473              		.loc 4 1180 0
 7474 0338 443B602C 		cmpl	44(%rax), %r12d
 7475 033c 0F8501FD 		jne	.L695
 7475      FFFF
 7476 0342 E904FDFF 		jmp	.L696
 7476      FF
 7477              	.LVL880:
 7478              	.L711:
 7479              	.LBB1748:
 7480              	.LBB1740:
 7481              	.LBB1627:
 7482              	.LBB1628:
1227:fltk-1.3.4-1/src/Fl_Table.cxx ****  154:fltk-1.3.4-1/FL/Fl_Group.H ****     Adds a widget to the group and makes it the resizable widg
 7483              		.loc 4 1227 0
 7484 0347 80BBB800 		cmpb	$0, 184(%rbx)
 7484      000000
 7485 034e 0F85A103 		jne	.L785
 7485      0000
 7486              	.L702:
 7487              	.LVL881:
 7488              	.LBE1628:
 7489              	.LBB1637:
1236:fltk-1.3.4-1/src/Fl_Table.cxx ****  163:fltk-1.3.4-1/FL/Fl_Group.H ****     Set \p c to 1 if you want to clip the child widgets to the
 7490              		.loc 4 1236 0
 7491 0354 80BBB900 		cmpb	$0, 185(%rbx)
 7491      000000
 7492 035b 0F851203 		jne	.L786
 7492      0000
 7493              	.L717:
 7494              	.LVL882:
 7495              	.LBE1637:
 7496              	.LBB1651:
 7497              	.LBB1652:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7498              		.loc 8 82 0
 7499 0361 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7499      000000
 7500 0368 8B8B6401 		movl	356(%rbx), %ecx
 7500      0000
 7501 036e 8B936001 		movl	352(%rbx), %edx
 7501      0000
 7502 0374 8BB35C01 		movl	348(%rbx), %esi
 7502      0000
 7503 037a 448B8368 		movl	360(%rbx), %r8d
 7503      010000
 7504 0381 488B07   		movq	(%rdi), %rax
 7505 0384 FF905001 		call	*336(%rax)
 7505      0000
 7506              	.LVL883:
 7507              	.LBE1652:
 7508              	.LBE1651:
 7509              	.LBB1653:
1251:fltk-1.3.4-1/src/Fl_Table.cxx ****  178:fltk-1.3.4-1/FL/Fl_Group.H ****   // Note: Doxygen docs in Fl_Widget.H to avoid redundancy.
 7510              		.loc 4 1251 0
 7511 038a 448BB334 		movl	308(%rbx), %r14d
 7511      010000
 7512              	.LVL884:
 7513 0391 443BB338 		cmpl	312(%rbx), %r14d
 7513      010000
 7514 0398 7F5E     		jg	.L726
 7515 039a 660F1F44 		.p2align 4,,10
 7515      0000
 7516              		.p2align 3
 7517              	.L767:
 7518 03a0 4489F0   		movl	%r14d, %eax
 7519              	.LBB1654:
1252:fltk-1.3.4-1/src/Fl_Table.cxx ****  179:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual Fl_Group* as_group() { return this; }
 7520              		.loc 4 1252 0
 7521 03a3 8BAB3C01 		movl	316(%rbx), %ebp
 7521      0000
 7522              	.LVL885:
 7523 03a9 C1E81F   		shrl	$31, %eax
 7524 03ac 3BAB4001 		cmpl	320(%rbx), %ebp
 7524      0000
 7525 03b2 4189C5   		movl	%eax, %r13d
 7526 03b5 7F34     		jg	.L729
 7527 03b7 660F1F84 		.p2align 4,,10
 7527      00000000 
 7527      00
 7528              		.p2align 3
 7529              	.L768:
 7530              	.LVL886:
 7531              	.LBB1655:
 7532              	.LBB1656:
1088:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
 7533              		.loc 4 1088 0
 7534 03c0 89E8     		movl	%ebp, %eax
 7535 03c2 C1E81F   		shrl	$31, %eax
 7536 03c5 84C0     		testb	%al, %al
 7537 03c7 7517     		jne	.L728
 7538 03c9 4584ED   		testb	%r13b, %r13b
 7539 03cc 7512     		jne	.L728
 7540 03ce 89E9     		movl	%ebp, %ecx
 7541 03d0 4489F2   		movl	%r14d, %edx
 7542 03d3 BE100000 		movl	$16, %esi
 7542      00
 7543 03d8 4889DF   		movq	%rbx, %rdi
 7544 03db E8000000 		call	_ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34
 7544      00
 7545              	.LVL887:
 7546              	.L728:
 7547              	.LBE1656:
 7548              	.LBE1655:
1252:fltk-1.3.4-1/src/Fl_Table.cxx ****  179:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual Fl_Group* as_group() { return this; }
 7549              		.loc 4 1252 0 discriminator 2
 7550 03e0 83C501   		addl	$1, %ebp
 7551              	.LVL888:
 7552 03e3 39AB4001 		cmpl	%ebp, 320(%rbx)
 7552      0000
 7553 03e9 7DD5     		jge	.L768
 7554              	.L729:
 7555              	.LBE1654:
1251:fltk-1.3.4-1/src/Fl_Table.cxx ****  178:fltk-1.3.4-1/FL/Fl_Group.H ****   // Note: Doxygen docs in Fl_Widget.H to avoid redundancy.
 7556              		.loc 4 1251 0
 7557 03eb 4183C601 		addl	$1, %r14d
 7558              	.LVL889:
 7559 03ef 4439B338 		cmpl	%r14d, 312(%rbx)
 7559      010000
 7560 03f6 7DA8     		jge	.L767
 7561              	.LVL890:
 7562              	.L726:
 7563              	.LBE1653:
 7564              	.LBB1657:
 7565              	.LBB1658:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7566              		.loc 8 103 0
 7567 03f8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7567      000000
 7568 03ff 488B07   		movq	(%rdi), %rax
 7569 0402 FF907001 		call	*368(%rax)
 7569      0000
 7570              	.LVL891:
 7571              	.LBE1658:
 7572              	.LBE1657:
1259:fltk-1.3.4-1/src/Fl_Table.cxx ****   74              		.cfi_endproc
 7573              		.loc 4 1259 0
 7574 0408 80BBB800 		cmpb	$0, 184(%rbx)
 7574      000000
 7575 040f 0F84A301 		je	.L724
 7575      0000
 7576              	.LVL892:
1259:fltk-1.3.4-1/src/Fl_Table.cxx ****   74              		.cfi_endproc
 7577              		.loc 4 1259 0 is_stmt 0 discriminator 1
 7578 0415 80BBB900 		cmpb	$0, 185(%rbx)
 7578      000000
 7579 041c 0F855001 		jne	.L731
 7579      0000
 7580              	.LVL893:
 7581 0422 488B8390 		movq	400(%rbx), %rax
 7581      010000
1264:fltk-1.3.4-1/src/Fl_Table.cxx ****   80              	.LHOTE2:
 7582              		.loc 4 1264 0 is_stmt 1
 7583 0429 80786E00 		cmpb	$0, 110(%rax)
 7584 042d 7452     		je	.L734
 7585              	.LVL894:
 7586              	.L749:
1269:fltk-1.3.4-1/src/Fl_Table.cxx ****   85              	.LHOTB3:
 7587              		.loc 4 1269 0
 7588 042f 0FB6786E 		movzbl	110(%rax), %edi
 7589 0433 448B7B64 		movl	100(%rbx), %r15d
 7590              	.LVL895:
 7591 0437 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 7591      00
 7592              	.LVL896:
 7593              	.LBB1659:
 7594              	.LBB1660:
 7595              	.LBB1661:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7596              		.loc 8 52 0
 7597 043c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7597      000000
 7598              	.LBE1661:
 7599              	.LBE1660:
 7600              	.LBE1659:
1269:fltk-1.3.4-1/src/Fl_Table.cxx ****   85              	.LHOTB3:
 7601              		.loc 4 1269 0
 7602 0443 8944240C 		movl	%eax, 12(%rsp)
 7603              	.LBB1668:
 7604              	.LBB1664:
 7605              	.LBB1662:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7606              		.loc 8 52 0
 7607 0447 4489FE   		movl	%r15d, %esi
 7608 044a 448BB3A8 		movl	168(%rbx), %r14d
 7608      000000
 7609              	.LVL897:
 7610              	.LBE1662:
 7611              	.LBE1664:
 7612              	.LBE1668:
1269:fltk-1.3.4-1/src/Fl_Table.cxx ****   85              	.LHOTB3:
 7613              		.loc 4 1269 0
 7614 0451 448BAB70 		movl	368(%rbx), %r13d
 7614      010000
 7615 0458 8BAB7C01 		movl	380(%rbx), %ebp
 7615      0000
 7616              	.LVL898:
 7617              	.LBB1669:
 7618              	.LBB1665:
 7619              	.LBB1663:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7620              		.loc 8 52 0
 7621 045e 488B07   		movq	(%rdi), %rax
 7622              	.LVL899:
 7623 0461 FF908800 		call	*136(%rax)
 7623      0000
 7624              	.LVL900:
 7625              	.LBE1663:
 7626              	.LBE1665:
 7627              	.LBB1666:
 7628              	.LBB1667:
 7629              		.loc 8 206 0
 7630 0467 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7630      000000
 7631 046e 448B4424 		movl	12(%rsp), %r8d
 7631      0C
 7632 0473 4489F1   		movl	%r14d, %ecx
 7633 0476 4489EA   		movl	%r13d, %edx
 7634 0479 89EE     		movl	%ebp, %esi
 7635 047b 488B07   		movq	(%rdi), %rax
 7636 047e FF5020   		call	*32(%rax)
 7637              	.LVL901:
 7638              	.L734:
 7639              	.LBE1667:
 7640              	.LBE1666:
 7641              	.LBE1669:
1274:fltk-1.3.4-1/src/Fl_Table.cxx ****   91              	.LFB513:
 7642              		.loc 4 1274 0
 7643 0481 8BB32C01 		movl	300(%rbx), %esi
 7643      0000
 7644 0487 8B8B6401 		movl	356(%rbx), %ecx
 7644      0000
 7645 048d 39CE     		cmpl	%ecx, %esi
 7646 048f 0F8CE802 		jl	.L787
 7646      0000
 7647              	.L739:
1288:fltk-1.3.4-1/src/Fl_Table.cxx ****   13:fltk-1.3.4-1/FL/Fl_Table.H **** //     http://www.fltk.org/COPYING.php
 7648              		.loc 4 1288 0
 7649 0495 8B833001 		movl	304(%rbx), %eax
 7649      0000
 7650 049b 448B8368 		movl	360(%rbx), %r8d
 7650      010000
 7651 04a2 4439C0   		cmpl	%r8d, %eax
 7652 04a5 0F8D37FD 		jge	.L704
 7652      FFFF
 7653              	.LVL902:
1289:fltk-1.3.4-1/src/Fl_Table.cxx ****   14:fltk-1.3.4-1/FL/Fl_Table.H **** //
 7654              		.loc 4 1289 0
 7655 04ab 4129C0   		subl	%eax, %r8d
 7656 04ae 03836001 		addl	352(%rbx), %eax
 7656      0000
 7657              	.LBB1670:
 7658              	.LBB1671:
 7659              	.LBB1672:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7660              		.loc 8 52 0
 7661 04b4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7661      000000
 7662              	.LBE1672:
 7663              	.LBE1671:
 7664              	.LBE1670:
1289:fltk-1.3.4-1/src/Fl_Table.cxx ****   14:fltk-1.3.4-1/FL/Fl_Table.H **** //
 7665              		.loc 4 1289 0
 7666 04bb 4589C5   		movl	%r8d, %r13d
 7667 04be 448BBB64 		movl	356(%rbx), %r15d
 7667      010000
 7668 04c5 448BB35C 		movl	348(%rbx), %r14d
 7668      010000
 7669              	.LVL903:
 7670              	.LBB1679:
 7671              	.LBB1675:
 7672              	.LBB1673:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7673              		.loc 8 52 0
 7674 04cc 8B7364   		movl	100(%rbx), %esi
 7675              	.LBE1673:
 7676              	.LBE1675:
 7677              	.LBE1679:
1289:fltk-1.3.4-1/src/Fl_Table.cxx ****   14:fltk-1.3.4-1/FL/Fl_Table.H **** //
 7678              		.loc 4 1289 0
 7679 04cf 89C5     		movl	%eax, %ebp
 7680              	.LVL904:
 7681              	.LBB1680:
 7682              	.LBB1676:
 7683              	.LBB1674:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7684              		.loc 8 52 0
 7685 04d1 488B07   		movq	(%rdi), %rax
 7686              	.LVL905:
 7687 04d4 FF908800 		call	*136(%rax)
 7687      0000
 7688              	.LVL906:
 7689              	.LBE1674:
 7690              	.LBE1676:
 7691              	.LBB1677:
 7692              	.LBB1678:
 7693              		.loc 8 206 0
 7694 04da 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7694      000000
 7695 04e1 4589E8   		movl	%r13d, %r8d
 7696 04e4 4489F9   		movl	%r15d, %ecx
 7697 04e7 89EA     		movl	%ebp, %edx
 7698 04e9 4489F6   		movl	%r14d, %esi
 7699 04ec 488B07   		movq	(%rdi), %rax
 7700 04ef FF5020   		call	*32(%rax)
 7701              	.LVL907:
 7702              	.LBE1678:
 7703              	.LBE1677:
 7704              	.LBE1680:
1290:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Table.H **** // Please report all bugs and problems on the following page:
 7705              		.loc 4 1290 0
 7706 04f2 80BBB800 		cmpb	$0, 184(%rbx)
 7706      000000
 7707 04f9 0F84E3FC 		je	.L704
 7707      FFFF
1297:fltk-1.3.4-1/src/Fl_Table.cxx ****   22:fltk-1.3.4-1/FL/Fl_Table.H **** 
 7708              		.loc 4 1297 0
 7709 04ff 448BAB30 		movl	304(%rbx), %r13d
 7709      010000
 7710 0506 8BAB8801 		movl	392(%rbx), %ebp
 7710      0000
 7711 050c 4403AB60 		addl	352(%rbx), %r13d
 7711      010000
 7712 0513 03AB8001 		addl	384(%rbx), %ebp
 7712      0000
 7713 0519 488B83A0 		movq	416(%rbx), %rax
 7713      010000
 7714              	.LBB1681:
 7715              	.LBB1682:
 7716              	.LBB1683:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7717              		.loc 8 52 0
 7718 0520 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7718      000000
 7719 0527 8B7364   		movl	100(%rbx), %esi
 7720              	.LVL908:
 7721 052a 448BB3A8 		movl	168(%rbx), %r14d
 7721      000000
 7722              	.LBE1683:
 7723              	.LBE1682:
 7724              	.LBE1681:
1297:fltk-1.3.4-1/src/Fl_Table.cxx ****   22:fltk-1.3.4-1/FL/Fl_Table.H **** 
 7725              		.loc 4 1297 0
 7726 0531 4429ED   		subl	%r13d, %ebp
 7727              	.LVL909:
1296:fltk-1.3.4-1/src/Fl_Table.cxx ****   21:fltk-1.3.4-1/FL/Fl_Table.H **** #define _FL_TABLE_H
 7728              		.loc 4 1296 0
 7729 0534 F6406002 		testb	$2, 96(%rax)
 7730 0538 B8000000 		movl	$0, %eax
 7730      00
 7731              	.LVL910:
 7732 053d 440F45E0 		cmovne	%eax, %r12d
 7733              	.LVL911:
 7734              	.LBB1690:
 7735              	.LBB1686:
 7736              	.LBB1684:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7737              		.loc 8 52 0
 7738 0541 488B07   		movq	(%rdi), %rax
 7739              	.LBE1684:
 7740              	.LBE1686:
 7741              	.LBE1690:
1296:fltk-1.3.4-1/src/Fl_Table.cxx ****   21:fltk-1.3.4-1/FL/Fl_Table.H **** #define _FL_TABLE_H
 7742              		.loc 4 1296 0
 7743 0544 4429E5   		subl	%r12d, %ebp
 7744 0547 448BA37C 		movl	380(%rbx), %r12d
 7744      010000
 7745              	.LVL912:
 7746              	.LBB1691:
 7747              	.LBB1687:
 7748              	.LBB1685:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7749              		.loc 8 52 0
 7750 054e FF908800 		call	*136(%rax)
 7750      0000
 7751              	.LVL913:
 7752              	.LBE1685:
 7753              	.LBE1687:
 7754              	.LBB1688:
 7755              	.LBB1689:
 7756              		.loc 8 206 0
 7757 0554 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7757      000000
 7758 055b 4189E8   		movl	%ebp, %r8d
 7759 055e 4489F1   		movl	%r14d, %ecx
 7760 0561 4489EA   		movl	%r13d, %edx
 7761 0564 4489E6   		movl	%r12d, %esi
 7762 0567 488B07   		movq	(%rdi), %rax
 7763 056a FF5020   		call	*32(%rax)
 7764              	.LVL914:
 7765 056d E970FCFF 		jmp	.L704
 7765      FF
 7766              	.LVL915:
 7767              	.L731:
 7768              	.LBE1689:
 7769              	.LBE1688:
 7770              	.LBE1691:
 7771              	.LBB1692:
 7772              	.LBB1693:
 7773              	.LBB1694:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7774              		.loc 8 52 0
 7775 0572 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7775      000000
 7776 0579 448BBBAC 		movl	172(%rbx), %r15d
 7776      000000
 7777              	.LVL916:
 7778 0580 448BB3A8 		movl	168(%rbx), %r14d
 7778      000000
 7779              	.LVL917:
 7780              	.LBE1694:
 7781              	.LBE1693:
 7782              	.LBE1692:
1260:fltk-1.3.4-1/src/Fl_Table.cxx ****   75              	.LFE145:
 7783              		.loc 4 1260 0
 7784 0587 448BAB80 		movl	384(%rbx), %r13d
 7784      010000
 7785 058e 8BAB7C01 		movl	380(%rbx), %ebp
 7785      0000
 7786              	.LVL918:
 7787              	.LBB1699:
 7788              	.LBB1696:
 7789              	.LBB1695:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7790              		.loc 8 52 0
 7791 0594 8B7364   		movl	100(%rbx), %esi
 7792 0597 488B07   		movq	(%rdi), %rax
 7793 059a FF908800 		call	*136(%rax)
 7793      0000
 7794              	.LVL919:
 7795              	.LBE1695:
 7796              	.LBE1696:
 7797              	.LBB1697:
 7798              	.LBB1698:
 7799              		.loc 8 206 0
 7800 05a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7800      000000
 7801 05a7 4589F8   		movl	%r15d, %r8d
 7802 05aa 4489F1   		movl	%r14d, %ecx
 7803 05ad 4489EA   		movl	%r13d, %edx
 7804 05b0 89EE     		movl	%ebp, %esi
 7805 05b2 488B07   		movq	(%rdi), %rax
 7806 05b5 FF5020   		call	*32(%rax)
 7807              	.LVL920:
 7808              	.L724:
 7809 05b8 488B8390 		movq	400(%rbx), %rax
 7809      010000
 7810              	.LBE1698:
 7811              	.LBE1697:
 7812              	.LBE1699:
 7813              	.LBB1700:
 7814              	.LBB1701:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 7815              		.loc 1 363 0
 7816 05bf 0FB6786E 		movzbl	110(%rax), %edi
 7817              	.LBE1701:
 7818              	.LBE1700:
1264:fltk-1.3.4-1/src/Fl_Table.cxx ****   80              	.LHOTE2:
 7819              		.loc 4 1264 0
 7820 05c3 85FF     		testl	%edi, %edi
 7821 05c5 0F84B6FE 		je	.L734
 7821      FFFF
 7822              	.LVL921:
1265:fltk-1.3.4-1/src/Fl_Table.cxx ****   81              		.section	.text.unlikely._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii,"axG",@
 7823              		.loc 4 1265 0
 7824 05cb 80BBB900 		cmpb	$0, 185(%rbx)
 7824      000000
 7825 05d2 7450     		je	.L778
 7826 05d4 448B7B64 		movl	100(%rbx), %r15d
 7827              	.LVL922:
 7828 05d8 448BB3AC 		movl	172(%rbx), %r14d
 7828      000000
 7829              	.LVL923:
1266:fltk-1.3.4-1/src/Fl_Table.cxx ****   82              		.align 2
 7830              		.loc 4 1266 0
 7831 05df E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 7831      00
 7832              	.LVL924:
 7833              	.LBB1702:
 7834              	.LBB1703:
 7835              	.LBB1704:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7836              		.loc 8 52 0
 7837 05e4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7837      000000
 7838              	.LBE1704:
 7839              	.LBE1703:
 7840              	.LBE1702:
1266:fltk-1.3.4-1/src/Fl_Table.cxx ****   82              		.align 2
 7841              		.loc 4 1266 0
 7842 05eb 8944240C 		movl	%eax, 12(%rsp)
 7843 05ef 448BAB80 		movl	384(%rbx), %r13d
 7843      010000
 7844 05f6 8BAB6C01 		movl	364(%rbx), %ebp
 7844      0000
 7845              	.LVL925:
 7846              	.LBB1709:
 7847              	.LBB1706:
 7848              	.LBB1705:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 7849              		.loc 8 52 0
 7850 05fc 4489FE   		movl	%r15d, %esi
 7851 05ff 488B17   		movq	(%rdi), %rdx
 7852 0602 FF928800 		call	*136(%rdx)
 7852      0000
 7853              	.LVL926:
 7854              	.LBE1705:
 7855              	.LBE1706:
 7856              	.LBB1707:
 7857              	.LBB1708:
 7858              		.loc 8 206 0
 7859 0608 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7859      000000
 7860 060f 8B44240C 		movl	12(%rsp), %eax
 7861 0613 4589F0   		movl	%r14d, %r8d
 7862 0616 4489EA   		movl	%r13d, %edx
 7863 0619 89EE     		movl	%ebp, %esi
 7864 061b 4C8B0F   		movq	(%rdi), %r9
 7865 061e 89C1     		movl	%eax, %ecx
 7866 0620 41FF5120 		call	*32(%r9)
 7867              	.LVL927:
 7868              	.L778:
 7869 0624 0FB683B8 		movzbl	184(%rbx), %eax
 7869      000000
 7870              	.LVL928:
 7871              	.LBE1708:
 7872              	.LBE1707:
 7873              	.LBE1709:
1268:fltk-1.3.4-1/src/Fl_Table.cxx ****   84              		.section	.text._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii,"axG",@progbits,
 7874              		.loc 4 1268 0
 7875 062b 84C0     		testb	%al, %al
 7876 062d 0F844EFE 		je	.L734
 7876      FFFF
 7877 0633 488B8390 		movq	400(%rbx), %rax
 7877      010000
 7878 063a E9F0FDFF 		jmp	.L749
 7878      FF
 7879              	.LVL929:
 7880 063f 90       		.p2align 4,,10
 7881              		.p2align 3
 7882              	.L782:
 7883              	.LBE1627:
 7884              	.LBE1740:
 7885              	.LBE1748:
1186:fltk-1.3.4-1/src/Fl_Table.cxx ****  113:fltk-1.3.4-1/FL/Fl_Group.H **** 
 7886              		.loc 4 1186 0
 7887 0640 8B936801 		movl	360(%rbx), %edx
 7887      0000
 7888 0646 448B8B60 		movl	352(%rbx), %r9d
 7888      010000
 7889 064d 31C9     		xorl	%ecx, %ecx
 7890 064f 448B835C 		movl	348(%rbx), %r8d
 7890      010000
 7891 0656 BE010000 		movl	$1, %esi
 7891      00
 7892 065b 4889DF   		movq	%rbx, %rdi
 7893 065e 52       		pushq	%rdx
 7894              		.cfi_def_cfa_offset 120
 7895 065f 8B936401 		movl	356(%rbx), %edx
 7895      0000
 7896 0665 52       		pushq	%rdx
 7897              		.cfi_def_cfa_offset 128
 7898 0666 31D2     		xorl	%edx, %edx
 7899 0668 FFD0     		call	*%rax
 7900              	.LVL930:
 7901 066a 4159     		popq	%r9
 7902              		.cfi_def_cfa_offset 120
 7903 066c 415A     		popq	%r10
 7904              		.cfi_def_cfa_offset 112
 7905 066e E9EBF9FF 		jmp	.L697
 7905      FF
 7906              	.LVL931:
 7907              	.L786:
 7908              	.LBB1749:
 7909              	.LBB1741:
 7910              	.LBB1734:
 7911              	.LBB1710:
 7912              	.LBB1638:
 7913              	.LBB1639:
 249:fltk-1.3.4-1/src/Fl_Table.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 7914              		.loc 4 249 0
 7915 0673 8BB36C01 		movl	364(%rbx), %esi
 7915      0000
 250:fltk-1.3.4-1/src/Fl_Table.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 7916              		.loc 4 250 0
 7917 0679 8B938001 		movl	384(%rbx), %edx
 7917      0000
 251:fltk-1.3.4-1/src/Fl_Table.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 7918              		.loc 4 251 0
 7919 067f 8B8B7401 		movl	372(%rbx), %ecx
 7919      0000
 7920 0685 448B83AC 		movl	172(%rbx), %r8d
 7920      000000
 7921              	.LVL932:
 7922              	.LBE1639:
 7923              	.LBE1638:
 7924              	.LBB1641:
 7925              	.LBB1642:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7926              		.loc 8 82 0
 7927 068c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7927      000000
 7928              	.LBE1642:
 7929              	.LBE1641:
 7930              	.LBB1644:
 7931              	.LBB1640:
 249:fltk-1.3.4-1/src/Fl_Table.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 7932              		.loc 4 249 0
 7933 0693 89742418 		movl	%esi, 24(%rsp)
 250:fltk-1.3.4-1/src/Fl_Table.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 7934              		.loc 4 250 0
 7935 0697 8954241C 		movl	%edx, 28(%rsp)
 251:fltk-1.3.4-1/src/Fl_Table.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 7936              		.loc 4 251 0
 7937 069b 894C2420 		movl	%ecx, 32(%rsp)
 252:fltk-1.3.4-1/src/Fl_Table.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7938              		.loc 4 252 0
 7939 069f 44894424 		movl	%r8d, 36(%rsp)
 7939      24
 7940              	.LVL933:
 7941              	.LBE1640:
 7942              	.LBE1644:
 7943              	.LBB1645:
 7944              	.LBB1643:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7945              		.loc 8 82 0
 7946 06a4 488B07   		movq	(%rdi), %rax
 7947 06a7 FF905001 		call	*336(%rax)
 7947      0000
 7948              	.LVL934:
 7949              	.LBE1643:
 7950              	.LBE1645:
 7951              	.LBB1646:
1239:fltk-1.3.4-1/src/Fl_Table.cxx ****  166:fltk-1.3.4-1/FL/Fl_Group.H ****     The default is to not clip (0) the drawing of child widget
 7952              		.loc 4 1239 0
 7953 06ad 8BAB3C01 		movl	316(%rbx), %ebp
 7953      0000
 7954              	.LVL935:
 7955 06b3 3BAB4001 		cmpl	320(%rbx), %ebp
 7955      0000
 7956 06b9 7F25     		jg	.L720
 7957 06bb 0F1F4400 		.p2align 4,,10
 7957      00
 7958              		.p2align 3
 7959              	.L766:
 7960              	.LVL936:
 7961              	.LBB1647:
 7962              	.LBB1648:
1088:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
 7963              		.loc 4 1088 0
 7964 06c0 85ED     		testl	%ebp, %ebp
 7965 06c2 7811     		js	.L719
 7966 06c4 89E9     		movl	%ebp, %ecx
 7967 06c6 31D2     		xorl	%edx, %edx
 7968 06c8 BE080000 		movl	$8, %esi
 7968      00
 7969 06cd 4889DF   		movq	%rbx, %rdi
 7970 06d0 E8000000 		call	_ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34
 7970      00
 7971              	.LVL937:
 7972              	.L719:
 7973              	.LBE1648:
 7974              	.LBE1647:
1239:fltk-1.3.4-1/src/Fl_Table.cxx ****  166:fltk-1.3.4-1/FL/Fl_Group.H ****     The default is to not clip (0) the drawing of child widget
 7975              		.loc 4 1239 0 discriminator 2
 7976 06d5 83C501   		addl	$1, %ebp
 7977              	.LVL938:
 7978 06d8 39AB4001 		cmpl	%ebp, 320(%rbx)
 7978      0000
 7979 06de 7DE0     		jge	.L766
 7980              	.L720:
 7981              	.LBE1646:
 7982              	.LBB1649:
 7983              	.LBB1650:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7984              		.loc 8 103 0
 7985 06e0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7985      000000
 7986 06e7 488B07   		movq	(%rdi), %rax
 7987 06ea FF907001 		call	*368(%rax)
 7987      0000
 7988              	.LVL939:
 7989 06f0 E96CFCFF 		jmp	.L717
 7989      FF
 7990              	.LVL940:
 7991              	.L785:
 7992              	.LBE1650:
 7993              	.LBE1649:
 7994              	.LBE1710:
 7995              	.LBB1711:
 7996              	.LBB1629:
1228:fltk-1.3.4-1/src/Fl_Table.cxx ****  155:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 7997              		.loc 4 1228 0
 7998 06f5 4C8D4C24 		leaq	36(%rsp), %r9
 7998      24
 7999 06fa 4C8D4424 		leaq	32(%rsp), %r8
 7999      20
 8000 06ff 488D4C24 		leaq	28(%rsp), %rcx
 8000      1C
 8001 0704 488D5424 		leaq	24(%rsp), %rdx
 8001      18
 8002 0709 BE040000 		movl	$4, %esi
 8002      00
 8003 070e 4889DF   		movq	%rbx, %rdi
 8004 0711 E8000000 		call	_ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_
 8004      00
 8005              	.LVL941:
 8006              	.LBB1630:
 8007              	.LBB1631:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 8008              		.loc 8 82 0
 8009 0716 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8009      000000
 8010 071d 448B4424 		movl	36(%rsp), %r8d
 8010      24
 8011 0722 8B4C2420 		movl	32(%rsp), %ecx
 8012 0726 8B54241C 		movl	28(%rsp), %edx
 8013 072a 8B742418 		movl	24(%rsp), %esi
 8014 072e 488B07   		movq	(%rdi), %rax
 8015 0731 FF905001 		call	*336(%rax)
 8015      0000
 8016              	.LVL942:
 8017              	.LBE1631:
 8018              	.LBE1630:
 8019              	.LBB1632:
1230:fltk-1.3.4-1/src/Fl_Table.cxx ****  157:fltk-1.3.4-1/FL/Fl_Group.H ****   void init_sizes();
 8020              		.loc 4 1230 0
 8021 0737 8BAB3401 		movl	308(%rbx), %ebp
 8021      0000
 8022              	.LVL943:
 8023 073d 39AB3801 		cmpl	%ebp, 312(%rbx)
 8023      0000
 8024 0743 7C23     		jl	.L715
 8025              		.p2align 4,,10
 8026 0745 0F1F00   		.p2align 3
 8027              	.L765:
 8028              	.LVL944:
 8029              	.LBB1633:
 8030              	.LBB1634:
1088:fltk-1.3.4-1/src/Fl_Table.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
 8031              		.loc 4 1088 0
 8032 0748 85ED     		testl	%ebp, %ebp
 8033 074a 7811     		js	.L714
 8034 074c 31C9     		xorl	%ecx, %ecx
 8035 074e 89EA     		movl	%ebp, %edx
 8036 0750 BE040000 		movl	$4, %esi
 8036      00
 8037 0755 4889DF   		movq	%rbx, %rdi
 8038 0758 E8000000 		call	_ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34
 8038      00
 8039              	.LVL945:
 8040              	.L714:
 8041              	.LBE1634:
 8042              	.LBE1633:
1230:fltk-1.3.4-1/src/Fl_Table.cxx ****  157:fltk-1.3.4-1/FL/Fl_Group.H ****   void init_sizes();
 8043              		.loc 4 1230 0 discriminator 2
 8044 075d 83C501   		addl	$1, %ebp
 8045              	.LVL946:
 8046 0760 39AB3801 		cmpl	%ebp, 312(%rbx)
 8046      0000
 8047 0766 7DE0     		jge	.L765
 8048              	.L715:
 8049              	.LBE1632:
 8050              	.LBB1635:
 8051              	.LBB1636:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 8052              		.loc 8 103 0
 8053 0768 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8053      000000
 8054 076f 488B07   		movq	(%rdi), %rax
 8055 0772 FF907001 		call	*368(%rax)
 8055      0000
 8056              	.LVL947:
 8057 0778 E9D7FBFF 		jmp	.L702
 8057      FF
 8058              	.LVL948:
 8059              	.L787:
 8060              	.LBE1636:
 8061              	.LBE1635:
 8062              	.LBE1629:
 8063              	.LBE1711:
 8064              	.LBB1712:
 8065              	.LBB1713:
 8066              	.LBB1714:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 8067              		.loc 8 52 0
 8068 077d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8068      000000
 8069              	.LBE1714:
 8070              	.LBE1713:
 8071              	.LBE1712:
1275:fltk-1.3.4-1/src/Fl_Table.cxx ****   92              		.file 3 "fltk-1.3.4-1/FL/Fl_Table.H"
 8072              		.loc 4 1275 0
 8073 0784 29F1     		subl	%esi, %ecx
 8074 0786 03B35C01 		addl	348(%rbx), %esi
 8074      0000
 8075 078c 448BB368 		movl	360(%rbx), %r14d
 8075      010000
 8076 0793 4189CD   		movl	%ecx, %r13d
 8077 0796 448BBB60 		movl	352(%rbx), %r15d
 8077      010000
 8078              	.LBB1721:
 8079              	.LBB1717:
 8080              	.LBB1715:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 8081              		.loc 8 52 0
 8082 079d 488B07   		movq	(%rdi), %rax
 8083              	.LBE1715:
 8084              	.LBE1717:
 8085              	.LBE1721:
1275:fltk-1.3.4-1/src/Fl_Table.cxx ****   92              		.file 3 "fltk-1.3.4-1/FL/Fl_Table.H"
 8086              		.loc 4 1275 0
 8087 07a0 89F5     		movl	%esi, %ebp
 8088              	.LVL949:
 8089              	.LBB1722:
 8090              	.LBB1718:
 8091              	.LBB1716:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 8092              		.loc 8 52 0
 8093 07a2 8B7364   		movl	100(%rbx), %esi
 8094              	.LVL950:
 8095 07a5 FF908800 		call	*136(%rax)
 8095      0000
 8096              	.LVL951:
 8097              	.LBE1716:
 8098              	.LBE1718:
 8099              	.LBB1719:
 8100              	.LBB1720:
 8101              		.loc 8 206 0
 8102 07ab 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8102      000000
 8103 07b2 4589F0   		movl	%r14d, %r8d
 8104 07b5 4489E9   		movl	%r13d, %ecx
 8105 07b8 4489FA   		movl	%r15d, %edx
 8106 07bb 89EE     		movl	%ebp, %esi
 8107 07bd 488B07   		movq	(%rdi), %rax
 8108 07c0 FF5020   		call	*32(%rax)
 8109              	.LVL952:
 8110              	.LBE1720:
 8111              	.LBE1719:
 8112              	.LBE1722:
1277:fltk-1.3.4-1/src/Fl_Table.cxx ****    2:fltk-1.3.4-1/FL/Fl_Table.H **** // "$Id: Fl_Table.H 11094 2016-01-31 02:49:56Z AlbrechtS $"
 8113              		.loc 4 1277 0
 8114 07c3 80BBB900 		cmpb	$0, 185(%rbx)
 8114      000000
 8115 07ca 0F84C5FC 		je	.L739
 8115      FFFF
 8116 07d0 488B8390 		movq	400(%rbx), %rax
 8116      010000
1281:fltk-1.3.4-1/src/Fl_Table.cxx ****    6:fltk-1.3.4-1/FL/Fl_Table.H **** // Copyright 2002 by Greg Ercolano.
 8117              		.loc 4 1281 0
 8118 07d7 8BAB6401 		movl	356(%rbx), %ebp
 8118      0000
 8119 07dd 2BAB2C01 		subl	300(%rbx), %ebp
 8119      0000
 8120 07e3 8B7364   		movl	100(%rbx), %esi
 8121 07e6 448BB3AC 		movl	172(%rbx), %r14d
 8121      000000
 8122 07ed 0FB6786E 		movzbl	110(%rax), %edi
 8123 07f1 8974240C 		movl	%esi, 12(%rsp)
 8124              	.LVL953:
 8125 07f5 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 8125      00
 8126              	.LVL954:
 8127 07fa 01C5     		addl	%eax, %ebp
 8128              	.LVL955:
 8129 07fc 488B8390 		movq	400(%rbx), %rax
 8129      010000
1282:fltk-1.3.4-1/src/Fl_Table.cxx ****    7:fltk-1.3.4-1/FL/Fl_Table.H **** // Copyright (c) 2004 O'ksi'D
 8130              		.loc 4 1282 0
 8131 0803 0FB6786E 		movzbl	110(%rax), %edi
 8132 0807 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 8132      00
 8133              	.LVL956:
 8134              	.LBB1723:
 8135              	.LBB1724:
 8136              	.LBB1725:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 8137              		.loc 8 52 0
 8138 080c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8138      000000
 8139              	.LBE1725:
 8140              	.LBE1724:
 8141              	.LBE1723:
1278:fltk-1.3.4-1/src/Fl_Table.cxx ****    3:fltk-1.3.4-1/FL/Fl_Table.H **** //
 8142              		.loc 4 1278 0
 8143 0813 29C5     		subl	%eax, %ebp
 8144 0815 448BBB80 		movl	384(%rbx), %r15d
 8144      010000
 8145 081c 448BAB2C 		movl	300(%rbx), %r13d
 8145      010000
 8146              	.LBB1732:
 8147              	.LBB1728:
 8148              	.LBB1726:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 8149              		.loc 8 52 0
 8150 0823 8B74240C 		movl	12(%rsp), %esi
 8151              	.LBE1726:
 8152              	.LBE1728:
 8153              	.LBE1732:
1278:fltk-1.3.4-1/src/Fl_Table.cxx ****    3:fltk-1.3.4-1/FL/Fl_Table.H **** //
 8154              		.loc 4 1278 0
 8155 0827 4403AB5C 		addl	348(%rbx), %r13d
 8155      010000
 8156              	.LVL957:
 8157              	.LBB1733:
 8158              	.LBB1729:
 8159              	.LBB1727:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 8160              		.loc 8 52 0
 8161 082e 488B07   		movq	(%rdi), %rax
 8162 0831 FF908800 		call	*136(%rax)
 8162      0000
 8163              	.LVL958:
 8164              	.LBE1727:
 8165              	.LBE1729:
 8166              	.LBB1730:
 8167              	.LBB1731:
 8168              		.loc 8 206 0
 8169 0837 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8169      000000
 8170 083e 4589F0   		movl	%r14d, %r8d
 8171 0841 89E9     		movl	%ebp, %ecx
 8172 0843 4489FA   		movl	%r15d, %edx
 8173 0846 4489EE   		movl	%r13d, %esi
 8174 0849 488B07   		movq	(%rdi), %rax
 8175 084c FF5020   		call	*32(%rax)
 8176              	.LVL959:
 8177 084f E941FCFF 		jmp	.L739
 8177      FF
 8178              	.LVL960:
 8179              	.L784:
 8180              	.LBE1731:
 8181              	.LBE1730:
 8182              	.LBE1733:
 8183              	.LBE1734:
 8184              	.LBE1741:
 8185              	.LBE1749:
 8186              		.loc 4 1314 0
 8187 0854 E8000000 		call	__stack_chk_fail
 8187      00
 8188              	.LVL961:
 8189              		.cfi_endproc
 8190              	.LFE605:
 8192              		.section	.text.unlikely._ZN8Fl_Table4drawEv
 8193              	.LCOLDE47:
 8194              		.section	.text._ZN8Fl_Table4drawEv
 8195              	.LHOTE47:
 8196              		.weak	_ZTS8Fl_Table
 8197              		.section	.rodata._ZTS8Fl_Table,"aG",@progbits,_ZTS8Fl_Table,comdat
 8198              		.align 8
 8201              	_ZTS8Fl_Table:
 8202 0000 38466C5F 		.string	"8Fl_Table"
 8202      5461626C 
 8202      6500
 8203              		.weak	_ZTI8Fl_Table
 8204              		.section	.rodata._ZTI8Fl_Table,"aG",@progbits,_ZTI8Fl_Table,comdat
 8205              		.align 8
 8208              	_ZTI8Fl_Table:
 8209 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 8209      00000000 
 8210 0008 00000000 		.quad	_ZTS8Fl_Table
 8210      00000000 
 8211 0010 00000000 		.quad	_ZTI8Fl_Group
 8211      00000000 
 8212              		.weak	_ZTV8Fl_Table
 8213              		.section	.rodata._ZTV8Fl_Table,"aG",@progbits,_ZTV8Fl_Table,comdat
 8214              		.align 8
 8217              	_ZTV8Fl_Table:
 8218 0000 00000000 		.quad	0
 8218      00000000 
 8219 0008 00000000 		.quad	_ZTI8Fl_Table
 8219      00000000 
 8220 0010 00000000 		.quad	_ZN8Fl_TableD1Ev
 8220      00000000 
 8221 0018 00000000 		.quad	_ZN8Fl_TableD0Ev
 8221      00000000 
 8222 0020 00000000 		.quad	_ZN8Fl_Table4drawEv
 8222      00000000 
 8223 0028 00000000 		.quad	_ZN8Fl_Table6handleEi
 8223      00000000 
 8224 0030 00000000 		.quad	_ZN8Fl_Table6resizeEiiii
 8224      00000000 
 8225 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 8225      00000000 
 8226 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 8226      00000000 
 8227 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 8227      00000000 
 8228 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 8228      00000000 
 8229 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 8229      00000000 
 8230 0060 00000000 		.quad	_ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii
 8230      00000000 
 8231 0068 00000000 		.quad	_ZN8Fl_Table5clearEv
 8231      00000000 
 8232 0070 00000000 		.quad	_ZN8Fl_Table4rowsEi
 8232      00000000 
 8233 0078 00000000 		.quad	_ZN8Fl_Table4colsEi
 8233      00000000 
 8234              		.section	.rodata.cst8,"aM",@progbits,8
 8235              		.align 8
 8236              	.LC18:
 8237 0000 33333333 		.long	858993459
 8238 0004 3333D33F 		.long	1070805811
 8239              		.align 8
 8240              	.LC21:
 8241 0008 9A999999 		.long	2576980378
 8242 000c 9999A93F 		.long	1068079513
 8243              		.section	.rodata.cst4,"aM",@progbits,4
 8244              		.align 4
 8245              	.LC29:
 8246 0000 0000803F 		.long	1065353216
 8247              		.text
 8248              	.Letext0:
 8249              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 8250              	.Letext_cold0:
 8251              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 8252              		.file 10 "/usr/include/x86_64-linux-gnu/bits/types.h"
 8253              		.file 11 "/usr/include/stdio.h"
 8254              		.file 12 "/usr/include/libio.h"
 8255              		.file 13 "fltk-1.3.4-1/FL/fl_types.h"
 8256              		.file 14 "fltk-1.3.4-1/FL/Enumerations.H"
 8257              		.file 15 "fltk-1.3.4-1/FL/Fl_Image.H"
 8258              		.file 16 "fltk-1.3.4-1/FL/Fl_Device.H"
 8259              		.file 17 "fltk-1.3.4-1/FL/Fl_Scroll.H"
 8260              		.file 18 "fltk-1.3.4-1/FL/Fl_Valuator.H"
 8261              		.file 19 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Table.cxx
     /tmp/cc2I7u97.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/cc2I7u97.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/cc2I7u97.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/cc2I7u97.s:90     .text._ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii:0000000000000000 _ZN8Fl_Table9draw_cellENS_12TableContextEiiiiii
     /tmp/cc2I7u97.s:113    .text._ZN8Fl_TableD2Ev:0000000000000000 _ZN8Fl_TableD2Ev
     /tmp/cc2I7u97.s:8217   .rodata._ZTV8Fl_Table:0000000000000000 _ZTV8Fl_Table
     /tmp/cc2I7u97.s:113    .text._ZN8Fl_TableD2Ev:0000000000000000 _ZN8Fl_TableD1Ev
     /tmp/cc2I7u97.s:180    .text._ZN8Fl_TableD0Ev:0000000000000000 _ZN8Fl_TableD0Ev
     /tmp/cc2I7u97.s:215    .text._ZN8Fl_Table5clearEv:0000000000000000 _ZN8Fl_Table5clearEv
     /tmp/cc2I7u97.s:255    .text._ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35:0000000000000000 _ZN8Fl_Table13change_cursorE9Fl_Cursor.part.31.constprop.35
     /tmp/cc2I7u97.s:307    .text._ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37:0000000000000000 _ZN8Fl_Table15_stop_auto_dragEv.part.28.constprop.37
     /tmp/cc2I7u97.s:2119   .text._ZN8Fl_Table14_auto_drag_cb2EPv:0000000000000000 _ZN8Fl_Table14_auto_drag_cb2EPv
     /tmp/cc2I7u97.s:347    .text._ZN8Fl_Table19row_scroll_positionEi:0000000000000000 _ZN8Fl_Table19row_scroll_positionEi
     /tmp/cc2I7u97.s:427    .text._ZN8Fl_Table19col_scroll_positionEi:0000000000000000 _ZN8Fl_Table19col_scroll_positionEi
     /tmp/cc2I7u97.s:507    .text._ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_:0000000000000000 _ZN8Fl_Table13row_col_clampENS_12TableContextERiS1_
     /tmp/cc2I7u97.s:641    .text._ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_:0000000000000000 _ZN8Fl_Table10get_boundsENS_12TableContextERiS1_S1_S1_
     /tmp/cc2I7u97.s:745    .text._ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_:0000000000000000 _ZN8Fl_Table9find_cellENS_12TableContextEiiRiS1_S1_S1_
     /tmp/cc2I7u97.s:1173   .text._ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE:0000000000000000 _ZN8Fl_Table13cursor2rowcolERiS0_RNS_10ResizeFlagE
     /tmp/cc2I7u97.s:1599   .text._ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34:0000000000000000 _ZN8Fl_Table12_redraw_cellENS_12TableContextEii.part.32.constprop.34
     /tmp/cc2I7u97.s:1712   .text._ZN8Fl_Table16_start_auto_dragEv:0000000000000000 _ZN8Fl_Table16_start_auto_dragEv
     /tmp/cc2I7u97.s:1756   .text._ZN8Fl_Table15_stop_auto_dragEv:0000000000000000 _ZN8Fl_Table15_stop_auto_dragEv
     /tmp/cc2I7u97.s:1787   .text._ZN8Fl_Table13_auto_drag_cbEv:0000000000000000 _ZN8Fl_Table13_auto_drag_cbEv
     /tmp/cc2I7u97.s:2143   .text._ZN8Fl_Table17recalc_dimensionsEv:0000000000000000 _ZN8Fl_Table17recalc_dimensionsEv
     /tmp/cc2I7u97.s:2439   .text._ZN8Fl_Table14table_scrolledEv:0000000000000000 _ZN8Fl_Table14table_scrolledEv
     /tmp/cc2I7u97.s:2828   .text._ZN8Fl_Table12row_positionEi:0000000000000000 _ZN8Fl_Table12row_positionEi
     /tmp/cc2I7u97.s:2993   .text._ZN8Fl_Table12col_positionEi:0000000000000000 _ZN8Fl_Table12col_positionEi
     /tmp/cc2I7u97.s:3158   .text._ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv:0000000000000000 _ZN8Fl_Table9scroll_cbEP9Fl_WidgetPv
     /tmp/cc2I7u97.s:3203   .text._ZN8Fl_Table13table_resizedEv:0000000000000000 _ZN8Fl_Table13table_resizedEv
     /tmp/cc2I7u97.s:3558   .text._ZN8Fl_TableC2EiiiiPKc:0000000000000000 _ZN8Fl_TableC2EiiiiPKc
     /tmp/cc2I7u97.s:3558   .text._ZN8Fl_TableC2EiiiiPKc:0000000000000000 _ZN8Fl_TableC1EiiiiPKc
     /tmp/cc2I7u97.s:3894   .text._ZN8Fl_Table4rowsEi:0000000000000000 _ZN8Fl_Table4rowsEi
     /tmp/cc2I7u97.s:4057   .text._ZN8Fl_Table4colsEi:0000000000000000 _ZN8Fl_Table4colsEi
     /tmp/cc2I7u97.s:4185   .text._ZN8Fl_Table10row_heightEii:0000000000000000 _ZN8Fl_Table10row_heightEii
     /tmp/cc2I7u97.s:4451   .text._ZN8Fl_Table9col_widthEii:0000000000000000 _ZN8Fl_Table9col_widthEii
     /tmp/cc2I7u97.s:4711   .text._ZN8Fl_Table13change_cursorE9Fl_Cursor:0000000000000000 _ZN8Fl_Table13change_cursorE9Fl_Cursor
     /tmp/cc2I7u97.s:4741   .text._ZN8Fl_Table11damage_zoneEiiiiii:0000000000000000 _ZN8Fl_Table11damage_zoneEiiiiii
     /tmp/cc2I7u97.s:4903   .text._ZN8Fl_Table11move_cursorEiii:0000000000000000 _ZN8Fl_Table11move_cursorEiii
     /tmp/cc2I7u97.s:5078   .text._ZN8Fl_Table11move_cursorEii:0000000000000000 _ZN8Fl_Table11move_cursorEii
     /tmp/cc2I7u97.s:5103   .text._ZN8Fl_Table12_redraw_cellENS_12TableContextEii:0000000000000000 _ZN8Fl_Table12_redraw_cellENS_12TableContextEii
     /tmp/cc2I7u97.s:5140   .text._ZN8Fl_Table11is_selectedEii:0000000000000000 _ZN8Fl_Table11is_selectedEii
     /tmp/cc2I7u97.s:5206   .text._ZN8Fl_Table13get_selectionERiS0_S0_S0_:0000000000000000 _ZN8Fl_Table13get_selectionERiS0_S0_S0_
     /tmp/cc2I7u97.s:5266   .text._ZN8Fl_Table13set_selectionEiiii:0000000000000000 _ZN8Fl_Table13set_selectionEiiii
     /tmp/cc2I7u97.s:5366   .text._ZN8Fl_Table6resizeEiiii:0000000000000000 _ZN8Fl_Table6resizeEiiii
     /tmp/cc2I7u97.s:5408   .text._ZN8Fl_Table6handleEi:0000000000000000 _ZN8Fl_Table6handleEi
     /tmp/cc2I7u97.s:7083   .text._ZN8Fl_Table4drawEv:0000000000000000 _ZN8Fl_Table4drawEv
     /tmp/cc2I7u97.s:8201   .rodata._ZTS8Fl_Table:0000000000000000 _ZTS8Fl_Table
     /tmp/cc2I7u97.s:8208   .rodata._ZTI8Fl_Table:0000000000000000 _ZTI8Fl_Table
     /tmp/cc2I7u97.s:8236   .rodata.cst8:0000000000000000 .LC18
     /tmp/cc2I7u97.s:8240   .rodata.cst8:0000000000000008 .LC21
     /tmp/cc2I7u97.s:8245   .rodata.cst4:0000000000000000 .LC29
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
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.types.h.23.6b551a14160ee6e670a07567790a4689
                           .group:0000000000000000 wm4.time.h.53.beb46e650cd406cb917b6b96b45e640a
                           .group:0000000000000000 wm4.types.h.137.b47ba4422427ad6e74c43b7db72dcd74
                           .group:0000000000000000 wm4.stddef.h.238.847b6907dabda77be90a9ab7ad789e2e
                           .group:0000000000000000 wm4.types.h.187.bd5a05039b505b3620e6973f1b2ffeb1
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
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
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.a2ca0b29d01f5da7ea7f879d801b43ca
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d

UNDEFINED SYMBOLS
free
_ZN8Fl_GroupD2Ev
_ZdlPv
_ZN9Fl_Scroll5clearEv
_Z9fl_cursor9Fl_Cursorjj
_ZN2Fl14remove_timeoutEPFvPvES0_
stderr
__fprintf_chk
_ZN2Fl12event_insideEiiii
_ZN2Fl3e_xE
_ZN2Fl3e_yE
__stack_chk_fail
_ZN2Fl11add_timeoutEdPFvPvES0_
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZN2Fl5checkEv
_ZN2Fl5flushEv
_ZN2Fl7e_stateE
_ZN11Fl_Valuator5clampEd
_ZN11Fl_Valuator5valueEd
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN2Fl14scrollbar_sizeEv
_ZN8Fl_Group10init_sizesEv
_ZN9Fl_Widget6redrawEv
_ZN9Fl_Slider6boundsEdd
_ZN11Fl_Valuator9precisionEi
_ZN9Fl_Slider11slider_sizeEd
_ZN8Fl_GroupC2EiiiiPKc
_Znwm
_ZN12Fl_ScrollbarC1EiiiiPKc
_ZN9Fl_ScrollC1EiiiiPKc
_ZN9Fl_Widget4hideEv
_ZN8Fl_Group3endEv
_ZN8Fl_Group5beginEv
realloc
_ZN9Fl_Widget6damageEh
_ZN8Fl_Group6resizeEiiii
_ZN8Fl_Group6handleEi
_ZN2Fl6focus_E
_ZN2Fl8e_keysymE
_ZN2Fl8e_clicksE
_ZN2Fl12event_insideEPK9Fl_Widget
_ZN2Fl5focusEP9Fl_Widget
_ZN9Fl_Widget10take_focusEv
_ZNK9Fl_Widget8containsEPKS_
fl_graphics_driver
_ZN8Fl_Group4drawEv
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Group
_ZN9Fl_Widget4showEv
