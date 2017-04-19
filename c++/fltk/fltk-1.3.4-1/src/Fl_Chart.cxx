   1              		.file	"Fl_Chart.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
  14              		.weak	_ZN9Fl_Widget8as_groupEv
  16              	_ZN9Fl_Widget8as_groupEv:
  17              	.LFB235:
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
  19              		.loc 1 986 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 986 0
  23 0000 31C0     		xorl	%eax, %eax
  24 0002 C3       		ret
  25              		.cfi_endproc
  26              	.LFE235:
  28              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
  29              	.LCOLDE0:
  30              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
  31              	.LHOTE0:
  32              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  33              		.align 2
  34              	.LCOLDB1:
  35              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  36              	.LHOTB1:
  37              		.align 2
  38              		.p2align 4,,15
  39              		.weak	_ZN9Fl_Widget9as_windowEv
  41              	_ZN9Fl_Widget9as_windowEv:
  42              	.LFB236:
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
  43              		.loc 1 1000 0
  44              		.cfi_startproc
  45              	.LVL1:
  46              		.loc 1 1000 0
  47 0000 31C0     		xorl	%eax, %eax
  48 0002 C3       		ret
  49              		.cfi_endproc
  50              	.LFE236:
  52              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  53              	.LCOLDE1:
  54              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  55              	.LHOTE1:
  56              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN9Fl_Widget12as_gl_windowEv
  65              	_ZN9Fl_Widget12as_gl_windowEv:
  66              	.LFB237:
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
  67              		.loc 1 1012 0
  68              		.cfi_startproc
  69              	.LVL2:
  70              		.loc 1 1012 0
  71 0000 31C0     		xorl	%eax, %eax
  72 0002 C3       		ret
  73              		.cfi_endproc
  74              	.LFE237:
  76              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  77              	.LCOLDE2:
  78              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  79              	.LHOTE2:
  80              		.section	.text.unlikely._ZL13draw_piechartiiiiiP14FL_CHART_ENTRYij,"ax",@progbits
  81              	.LCOLDB12:
  82              		.section	.text._ZL13draw_piechartiiiiiP14FL_CHART_ENTRYij,"ax",@progbits
  83              	.LHOTB12:
  84              		.p2align 4,,15
  86              	_ZL13draw_piechartiiiiiP14FL_CHART_ENTRYij:
  87              	.LFB500:
  88              		.file 2 "fltk-1.3.4-1/src/Fl_Chart.cxx"
   1:fltk-1.3.4-1/src/Fl_Chart.cxx ****    1              		.file	"Fl_Chart.cxx"
   2:fltk-1.3.4-1/src/Fl_Chart.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Chart.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Chart.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Chart.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Chart.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Chart.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Chart.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Chart.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Chart.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Chart.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Chart.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Chart.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Chart.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Chart.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Chart.cxx ****   17              	.LFB235:
  17:fltk-1.3.4-1/src/Fl_Chart.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Chart.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Chart.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Chart.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Chart.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Chart.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Chart.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Chart.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Chart.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Chart.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Chart.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Chart.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Chart.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Chart.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Chart.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Chart.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Chart.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Chart.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Chart.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Chart.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Chart.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Chart.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Chart.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Chart.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Chart.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Chart.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Chart.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Chart.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Chart.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Chart.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Chart.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Chart.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Chart.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Chart.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Chart.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Chart.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Chart.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Chart.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Chart.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Chart.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Chart.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Chart.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Chart.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Chart.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Chart.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Chart.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Chart.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Chart.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Chart.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Chart.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Chart.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Chart.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Chart.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Chart.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Chart.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Chart.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Chart.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Chart.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Chart.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Chart.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Chart.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Chart.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Chart.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Chart.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Chart.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Chart.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Chart.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Chart.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Chart.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Chart.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Chart.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Chart.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Chart.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Chart.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Chart.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Chart.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Chart.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Chart.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Chart.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Chart.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Chart.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Chart.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Chart.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Chart.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Chart.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Chart.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Chart.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Chart.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Chart.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Chart.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Chart.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Chart.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Chart.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Chart.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Chart.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Chart.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Chart.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Chart.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Chart.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Chart.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Chart.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Chart.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Chart.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Chart.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Chart.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Chart.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Chart.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Chart.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Chart.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Chart.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Chart.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Chart.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Chart.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Chart.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Chart.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Chart.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Chart.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Chart.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Chart.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Chart.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Chart.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Chart.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Chart.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Chart.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Chart.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Chart.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Chart.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Chart.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Chart.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Chart.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Chart.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Chart.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Chart.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Chart.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Chart.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Chart.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Chart.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Chart.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Chart.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Chart.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Chart.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Chart.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Chart.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Chart.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Chart.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Chart.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Chart.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Chart.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Chart.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Chart.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Chart.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Chart.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Chart.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Chart.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Chart.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Chart.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
  89              		.loc 2 174 0
  90              		.cfi_startproc
  91              	.LVL3:
  92 0000 4157     		pushq	%r15
  93              		.cfi_def_cfa_offset 16
  94              		.cfi_offset 15, -16
  95 0002 4156     		pushq	%r14
  96              		.cfi_def_cfa_offset 24
  97              		.cfi_offset 14, -24
  98 0004 4189D7   		movl	%edx, %r15d
  99 0007 4155     		pushq	%r13
 100              		.cfi_def_cfa_offset 32
 101              		.cfi_offset 13, -32
 102 0009 4154     		pushq	%r12
 103              		.cfi_def_cfa_offset 40
 104              		.cfi_offset 12, -40
 105 000b 4189F6   		movl	%esi, %r14d
 106 000e 55       		pushq	%rbp
 107              		.cfi_def_cfa_offset 48
 108              		.cfi_offset 6, -48
 109 000f 53       		pushq	%rbx
 110              		.cfi_def_cfa_offset 56
 111              		.cfi_offset 3, -56
 112 0010 89FB     		movl	%edi, %ebx
 113 0012 4489C5   		movl	%r8d, %ebp
 114 0015 4883EC78 		subq	$120, %rsp
 115              		.cfi_def_cfa_offset 176
 116              	.LBB136:
 117              	.LBB137:
 118              		.file 3 "fltk-1.3.4-1/FL/fl_draw.H"
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
 119              		.loc 3 527 0
 120 0019 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 120      000000
 121              	.LVL4:
 122              	.LBE137:
 123              	.LBE136:
 124              		.loc 2 174 0
 125 0020 448BA424 		movl	176(%rsp), %r12d
 125      B0000000 
 126 0028 894C2410 		movl	%ecx, 16(%rsp)
 127 002c 4C894C24 		movq	%r9, 8(%rsp)
 127      08
 128              	.LBB139:
 129              	.LBB138:
 130              		.loc 3 527 0
 131 0031 488B07   		movq	(%rdi), %rax
 132 0034 FF90D001 		call	*464(%rax)
 132      0000
 133              	.LVL5:
 134              	.LBE138:
 135              	.LBE139:
 175:fltk-1.3.4-1/src/Fl_Chart.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Chart.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Chart.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Chart.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Chart.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Chart.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Chart.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Chart.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Chart.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 136              		.loc 2 183 0
 137 003a 4585E4   		testl	%r12d, %r12d
 138 003d F20F1025 		movsd	.LC3(%rip), %xmm4
 138      00000000 
 139 0045 4C8B4C24 		movq	8(%rsp), %r9
 139      08
 140 004a 8B4C2410 		movl	16(%rsp), %ecx
 141 004e 7508     		jne	.L5
 142 0050 F20F1025 		movsd	.LC4(%rip), %xmm4
 142      00000000 
 143              	.L5:
 144              	.LVL6:
 184:fltk-1.3.4-1/src/Fl_Chart.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Chart.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Chart.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Chart.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Chart.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 145              		.loc 2 188 0 discriminator 4
 146 0058 85ED     		testl	%ebp, %ebp
 147 005a 0F8E0004 		jle	.L4
 147      0000
 148 0060 8D75FF   		leal	-1(%rbp), %esi
 149              		.loc 2 188 0 is_stmt 0
 150 0063 660FEFC9 		pxor	%xmm1, %xmm1
 151 0067 660FEFED 		pxor	%xmm5, %xmm5
 152 006b 4C89CA   		movq	%r9, %rdx
 153 006e 4883C601 		addq	$1, %rsi
 154 0072 488D3CB5 		leaq	0(,%rsi,4), %rdi
 154      00000000 
 155 007a 48C1E605 		salq	$5, %rsi
 156 007e 660F28D1 		movapd	%xmm1, %xmm2
 157 0082 4829FE   		subq	%rdi, %rsi
 158 0085 4C01CE   		addq	%r9, %rsi
 159              	.LVL7:
 160 0088 0F1F8400 		.p2align 4,,10
 160      00000000 
 161              		.p2align 3
 162              	.L10:
 189:fltk-1.3.4-1/src/Fl_Chart.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 163              		.loc 2 189 0 is_stmt 1
 164 0090 F30F1002 		movss	(%rdx), %xmm0
 165 0094 0F2EC5   		ucomiss	%xmm5, %xmm0
 166 0097 7608     		jbe	.L7
 167              		.loc 2 189 0 is_stmt 0 discriminator 1
 168 0099 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 169 009d F20F58D0 		addsd	%xmm0, %xmm2
 170              	.LVL8:
 171              	.L7:
 172 00a1 4883C21C 		addq	$28, %rdx
 188:fltk-1.3.4-1/src/Fl_Chart.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 173              		.loc 2 188 0 is_stmt 1 discriminator 2
 174 00a5 4839F2   		cmpq	%rsi, %rdx
 175 00a8 75E6     		jne	.L10
 190:fltk-1.3.4-1/src/Fl_Chart.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 176              		.loc 2 190 0
 177 00aa 660F2ED1 		ucomisd	%xmm1, %xmm2
 178 00ae 7A06     		jp	.L18
 179 00b0 0F84AA03 		je	.L4
 179      0000
 180              	.L18:
 181:fltk-1.3.4-1/src/Fl_Chart.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 181              		.loc 2 181 0
 182 00b6 660FEFDB 		pxor	%xmm3, %xmm3
 191:fltk-1.3.4-1/src/Fl_Chart.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 183              		.loc 2 191 0
 184 00ba F20F114C 		movsd	%xmm1, 8(%rsp)
 184      2408
 185              	.LVL9:
 186 00c0 4531ED   		xorl	%r13d, %r13d
 184:fltk-1.3.4-1/src/Fl_Chart.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 187              		.loc 2 184 0
 188 00c3 660FEFC0 		pxor	%xmm0, %xmm0
 181:fltk-1.3.4-1/src/Fl_Chart.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 189              		.loc 2 181 0
 190 00c7 F20F2AD8 		cvtsi2sd	%eax, %xmm3
 184:fltk-1.3.4-1/src/Fl_Chart.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 191              		.loc 2 184 0
 192 00cb F20F2AC1 		cvtsi2sd	%ecx, %xmm0
 185:fltk-1.3.4-1/src/Fl_Chart.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 193              		.loc 2 185 0
 194 00cf 4401F1   		addl	%r14d, %ecx
 195              	.LVL10:
 184:fltk-1.3.4-1/src/Fl_Chart.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 196              		.loc 2 184 0
 197 00d2 660F28F3 		movapd	%xmm3, %xmm6
 198 00d6 F20F58F3 		addsd	%xmm3, %xmm6
 199 00da F20F5CC6 		subsd	%xmm6, %xmm0
 185:fltk-1.3.4-1/src/Fl_Chart.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 200              		.loc 2 185 0
 201 00de 660FEFF6 		pxor	%xmm6, %xmm6
 202 00e2 F20F2AF3 		cvtsi2sd	%ebx, %xmm6
 203 00e6 498D5908 		leaq	8(%r9), %rbx
 204              	.LVL11:
 184:fltk-1.3.4-1/src/Fl_Chart.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 205              		.loc 2 184 0
 206 00ea F20F5EC4 		divsd	%xmm4, %xmm0
 207 00ee F20F1025 		movsd	.LC10(%rip), %xmm4
 207      00000000 
 208              	.LVL12:
 209 00f6 F20F5EC4 		divsd	%xmm4, %xmm0
 210 00fa 660F28F8 		movapd	%xmm0, %xmm7
 211 00fe F20F1144 		movsd	%xmm0, 40(%rsp)
 211      2428
 185:fltk-1.3.4-1/src/Fl_Chart.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 212              		.loc 2 185 0
 213 0104 660FEFC0 		pxor	%xmm0, %xmm0
 214 0108 F20F59E7 		mulsd	%xmm7, %xmm4
 215 010c F2410F2A 		cvtsi2sd	%r15d, %xmm0
 215      C7
 216 0111 F20F1164 		movsd	%xmm4, 72(%rsp)
 216      2448
 217 0117 F20F5905 		mulsd	.LC8(%rip), %xmm0
 217      00000000 
 218 011f F20F58C6 		addsd	%xmm6, %xmm0
 219 0123 F20F1144 		movsd	%xmm0, 80(%rsp)
 219      2450
 220 0129 660FEFC0 		pxor	%xmm0, %xmm0
 221 012d F20F2AC1 		cvtsi2sd	%ecx, %xmm0
 222 0131 F20F5CC4 		subsd	%xmm4, %xmm0
 223 0135 F20F5CC3 		subsd	%xmm3, %xmm0
 224 0139 F20F1144 		movsd	%xmm0, 88(%rsp)
 224      2458
 225              		.loc 2 191 0
 226 013f F20F1005 		movsd	.LC11(%rip), %xmm0
 226      00000000 
 227 0147 F20F5EC2 		divsd	%xmm2, %xmm0
 228 014b F20F1144 		movsd	%xmm0, 32(%rsp)
 228      2420
 229              	.LVL13:
 230 0151 E9C00200 		jmp	.L16
 230      00
 231              	.LVL14:
 232 0156 662E0F1F 		.p2align 4,,10
 232      84000000 
 232      0000
 233              		.p2align 3
 234              	.L33:
 235              	.LBB140:
 236              	.LBB141:
 237              	.LBB142:
 192:fltk-1.3.4-1/src/Fl_Chart.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Chart.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Chart.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Chart.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Chart.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Chart.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Chart.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Chart.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 238              		.loc 2 199 0
 239 0160 4585ED   		testl	%r13d, %r13d
 240 0163 0F85C002 		jne	.L20
 240      0000
 241 0169 F20F100D 		movsd	.LC8(%rip), %xmm1
 241      00000000 
 242 0171 4C8D7424 		leaq	104(%rsp), %r14
 242      68
 243 0176 4C8D7C24 		leaq	96(%rsp), %r15
 243      60
 244 017b F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 245 017f F20F594C 		mulsd	32(%rsp), %xmm1
 245      2420
 246 0185 4C89FE   		movq	%r15, %rsi
 247 0188 4C89F7   		movq	%r14, %rdi
 248 018b F20F1035 		movsd	.LC9(%rip), %xmm6
 248      00000000 
 249 0193 F30F116C 		movss	%xmm5, 56(%rsp)
 249      2438
 250 0199 F20F1174 		movsd	%xmm6, 48(%rsp)
 250      2430
 251 019f F20F59C1 		mulsd	%xmm1, %xmm0
 252 01a3 F20F5844 		addsd	8(%rsp), %xmm0
 252      2408
 253 01a9 F20F59C6 		mulsd	%xmm6, %xmm0
 254 01ad E8000000 		call	sincos
 254      00
 255              	.LVL15:
 200:fltk-1.3.4-1/src/Fl_Chart.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Chart.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 256              		.loc 2 201 0
 257 01b2 F20F1005 		movsd	.LC7(%rip), %xmm0
 257      00000000 
 258 01ba F20F104C 		movsd	96(%rsp), %xmm1
 258      2460
 259 01c0 F20F5944 		mulsd	40(%rsp), %xmm0
 259      2428
 260 01c6 F30F106C 		movss	56(%rsp), %xmm5
 260      2438
 202:fltk-1.3.4-1/src/Fl_Chart.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 261              		.loc 2 202 0
 262 01cc F20F1074 		movsd	88(%rsp), %xmm6
 262      2458
 201:fltk-1.3.4-1/src/Fl_Chart.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 263              		.loc 2 201 0
 264 01d2 F20F59C8 		mulsd	%xmm0, %xmm1
 265              		.loc 2 202 0
 266 01d6 F20F5944 		mulsd	104(%rsp), %xmm0
 266      2468
 201:fltk-1.3.4-1/src/Fl_Chart.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 267              		.loc 2 201 0
 268 01dc F20F584C 		addsd	80(%rsp), %xmm1
 268      2450
 269              		.loc 2 202 0
 270 01e2 F20F5CF0 		subsd	%xmm0, %xmm6
 201:fltk-1.3.4-1/src/Fl_Chart.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 271              		.loc 2 201 0
 272 01e6 F20F114C 		movsd	%xmm1, 16(%rsp)
 272      2410
 273              	.LVL16:
 274              		.loc 2 202 0
 275 01ec F20F1174 		movsd	%xmm6, 24(%rsp)
 275      2418
 276              	.LVL17:
 277              	.L13:
 278              	.LBB143:
 279              	.LBB144:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 280              		.loc 3 52 0
 281 01f2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 281      000000
 282 01f9 F30F116C 		movss	%xmm5, 68(%rsp)
 282      2444
 283              	.LVL18:
 284 01ff 8B73FC   		movl	-4(%rbx), %esi
 285 0202 488B17   		movq	(%rdi), %rdx
 286 0205 FF928800 		call	*136(%rdx)
 286      0000
 287              	.LVL19:
 288              	.LBE144:
 289              	.LBE143:
 290              	.LBB145:
 291              	.LBB146:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 292              		.loc 3 374 0
 293 020b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 293      000000
 294 0212 488B17   		movq	(%rdi), %rdx
 295 0215 FF92D800 		call	*216(%rdx)
 295      0000
 296              	.LVL20:
 297              	.LBE146:
 298              	.LBE145:
 299              	.LBB147:
 300              	.LBB148:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 301              		.loc 3 379 0
 302 021b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 302      000000
 303 0222 F20F104C 		movsd	24(%rsp), %xmm1
 303      2418
 304 0228 F20F1044 		movsd	16(%rsp), %xmm0
 304      2410
 305 022e 488B17   		movq	(%rdi), %rdx
 306 0231 FF92E000 		call	*224(%rdx)
 306      0000
 307              	.LVL21:
 308              	.LBE148:
 309              	.LBE147:
 310              	.LBB149:
 311              	.LBB150:
 416:fltk-1.3.4-1/FL/fl_draw.H **** /**
 312              		.loc 3 416 0
 313 0237 660FEFE4 		pxor	%xmm4, %xmm4
 314 023b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 314      000000
 315 0242 F20F106C 		movsd	8(%rsp), %xmm5
 315      2408
 316 0248 F20F1054 		movsd	40(%rsp), %xmm2
 316      2428
 317 024e F30F5A63 		cvtss2sd	-8(%rbx), %xmm4
 317      F8
 318 0253 488B17   		movq	(%rdi), %rdx
 319 0256 660F28DD 		movapd	%xmm5, %xmm3
 320 025a F20F104C 		movsd	24(%rsp), %xmm1
 320      2418
 321 0260 F20F5964 		mulsd	32(%rsp), %xmm4
 321      2420
 322 0266 F20F1044 		movsd	16(%rsp), %xmm0
 322      2410
 323 026c F20F58E5 		addsd	%xmm5, %xmm4
 324 0270 FF92F800 		call	*248(%rdx)
 324      0000
 325              	.LVL22:
 326              	.LBE150:
 327              	.LBE149:
 328              	.LBB151:
 329              	.LBB152:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 330              		.loc 3 440 0
 331 0276 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 331      000000
 332 027d 488B17   		movq	(%rdi), %rdx
 333 0280 FF922801 		call	*296(%rdx)
 333      0000
 334              	.LVL23:
 335              	.LBE152:
 336              	.LBE151:
 337              	.LBB153:
 338              	.LBB154:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 339              		.loc 3 52 0
 340 0286 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 340      000000
 341 028d 8BB424B8 		movl	184(%rsp), %esi
 341      000000
 342 0294 488B17   		movq	(%rdi), %rdx
 343 0297 FF928800 		call	*136(%rdx)
 343      0000
 344              	.LVL24:
 345              	.LBE154:
 346              	.LBE153:
 347              	.LBB155:
 348              	.LBB156:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 349              		.loc 3 370 0
 350 029d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 350      000000
 351 02a4 488B17   		movq	(%rdi), %rdx
 352 02a7 FF92D000 		call	*208(%rdx)
 352      0000
 353              	.LVL25:
 354              	.LBE156:
 355              	.LBE155:
 356              	.LBB157:
 357              	.LBB158:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 358              		.loc 3 379 0
 359 02ad 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 359      000000
 360 02b4 F20F104C 		movsd	24(%rsp), %xmm1
 360      2418
 361 02ba F20F1044 		movsd	16(%rsp), %xmm0
 361      2410
 362 02c0 488B17   		movq	(%rdi), %rdx
 363 02c3 FF92E000 		call	*224(%rdx)
 363      0000
 364              	.LVL26:
 365              	.LBE158:
 366              	.LBE157:
 367              	.LBB159:
 368              	.LBB160:
 416:fltk-1.3.4-1/FL/fl_draw.H **** /**
 369              		.loc 3 416 0
 370 02c9 660FEFE4 		pxor	%xmm4, %xmm4
 371 02cd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 371      000000
 372 02d4 F20F106C 		movsd	8(%rsp), %xmm5
 372      2408
 373 02da F20F1054 		movsd	40(%rsp), %xmm2
 373      2428
 374 02e0 F30F5A63 		cvtss2sd	-8(%rbx), %xmm4
 374      F8
 375 02e5 488B17   		movq	(%rdi), %rdx
 376 02e8 660F28DD 		movapd	%xmm5, %xmm3
 377 02ec F20F104C 		movsd	24(%rsp), %xmm1
 377      2418
 378 02f2 F20F5964 		mulsd	32(%rsp), %xmm4
 378      2420
 379 02f8 F20F1044 		movsd	16(%rsp), %xmm0
 379      2410
 380 02fe F20F58E5 		addsd	%xmm5, %xmm4
 381 0302 FF92F800 		call	*248(%rdx)
 381      0000
 382              	.LVL27:
 383              	.LBE160:
 384              	.LBE159:
 385              	.LBB161:
 386              	.LBB162:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 387              		.loc 3 436 0
 388 0308 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 388      000000
 389 030f 488B17   		movq	(%rdi), %rdx
 390 0312 FF922001 		call	*288(%rdx)
 390      0000
 391              	.LVL28:
 392              	.LBE162:
 393              	.LBE161:
 203:fltk-1.3.4-1/src/Fl_Chart.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Chart.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Chart.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Chart.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Chart.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Chart.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Chart.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Chart.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Chart.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Chart.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 394              		.loc 2 212 0
 395 0318 F20F1015 		movsd	.LC8(%rip), %xmm2
 395      00000000 
 396 0320 4C89F7   		movq	%r14, %rdi
 397 0323 660FEFC9 		pxor	%xmm1, %xmm1
 398 0327 4C89FE   		movq	%r15, %rsi
 399 032a F20F5954 		mulsd	32(%rsp), %xmm2
 399      2420
 400 0330 F20F1044 		movsd	48(%rsp), %xmm0
 400      2430
 401 0336 F30F5A4B 		cvtss2sd	-8(%rbx), %xmm1
 401      F8
 402 033b F20F59CA 		mulsd	%xmm2, %xmm1
 403 033f F20F1154 		movsd	%xmm2, 56(%rsp)
 403      2438
 404 0345 F20F584C 		addsd	8(%rsp), %xmm1
 404      2408
 405              	.LVL29:
 406 034b F20F59C1 		mulsd	%xmm1, %xmm0
 407 034f F20F114C 		movsd	%xmm1, 48(%rsp)
 407      2430
 408 0355 E8000000 		call	sincos
 408      00
 409              	.LVL30:
 213:fltk-1.3.4-1/src/Fl_Chart.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Chart.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 410              		.loc 2 214 0
 411 035a F20F1044 		movsd	72(%rsp), %xmm0
 411      2448
 412 0360 F20F105C 		movsd	96(%rsp), %xmm3
 412      2460
 413 0366 F20F107C 		movsd	16(%rsp), %xmm7
 413      2410
 414 036c F20F59D8 		mulsd	%xmm0, %xmm3
 215:fltk-1.3.4-1/src/Fl_Chart.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Chart.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Chart.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 415              		.loc 2 217 0
 416 0370 F20F5944 		mulsd	104(%rsp), %xmm0
 416      2468
 417 0376 F20F1074 		movsd	24(%rsp), %xmm6
 417      2418
 214:fltk-1.3.4-1/src/Fl_Chart.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 418              		.loc 2 214 0
 419 037c F20F58DF 		addsd	%xmm7, %xmm3
 420              	.LVL31:
 421              		.loc 2 217 0
 422 0380 F20F5CF0 		subsd	%xmm0, %xmm6
 215:fltk-1.3.4-1/src/Fl_Chart.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 423              		.loc 2 215 0
 424 0384 660F2EFB 		ucomisd	%xmm3, %xmm7
 425 0388 F20F115C 		movsd	%xmm3, 16(%rsp)
 425      2410
 426              	.LVL32:
 427              		.loc 2 217 0
 428 038e 660F28C6 		movapd	%xmm6, %xmm0
 215:fltk-1.3.4-1/src/Fl_Chart.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 429              		.loc 2 215 0
 430 0392 410F97C6 		seta	%r14b
 431              		.loc 2 217 0
 432 0396 E8000000 		call	rint
 432      00
 433              	.LVL33:
 216:fltk-1.3.4-1/src/Fl_Chart.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 434              		.loc 2 216 0
 435 039b F20F105C 		movsd	16(%rsp), %xmm3
 435      2410
 215:fltk-1.3.4-1/src/Fl_Chart.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 436              		.loc 2 215 0
 437 03a1 450FB6F6 		movzbl	%r14b, %r14d
 438              		.loc 2 217 0
 439 03a5 F20F1144 		movsd	%xmm0, 8(%rsp)
 439      2408
 215:fltk-1.3.4-1/src/Fl_Chart.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 440              		.loc 2 215 0
 441 03ab 468D34B5 		leal	4(,%r14,4), %r14d
 441      04000000 
 216:fltk-1.3.4-1/src/Fl_Chart.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 442              		.loc 2 216 0
 443 03b3 660F28C3 		movapd	%xmm3, %xmm0
 444 03b7 E8000000 		call	rint
 444      00
 445              	.LVL34:
 218:fltk-1.3.4-1/src/Fl_Chart.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Chart.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 446              		.loc 2 219 0
 447 03bc F20F1064 		movsd	8(%rsp), %xmm4
 447      2408
 448 03c2 6A01     		pushq	$1
 449              		.cfi_def_cfa_offset 184
 450 03c4 F20F2CF0 		cvttsd2si	%xmm0, %esi
 451 03c8 6A00     		pushq	$0
 452              		.cfi_def_cfa_offset 192
 453 03ca F20F2CD4 		cvttsd2si	%xmm4, %edx
 454 03ce 4589F1   		movl	%r14d, %r9d
 455 03d1 4531C0   		xorl	%r8d, %r8d
 456 03d4 31C9     		xorl	%ecx, %ecx
 457 03d6 4889DF   		movq	%rbx, %rdi
 458 03d9 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 458      00
 459              	.LVL35:
 220:fltk-1.3.4-1/src/Fl_Chart.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 460              		.loc 2 220 0
 461 03de 660FEFC0 		pxor	%xmm0, %xmm0
 462 03e2 F20F1054 		movsd	72(%rsp), %xmm2
 462      2448
 463 03e8 F20F104C 		movsd	64(%rsp), %xmm1
 463      2440
 464 03ee F30F5A43 		cvtss2sd	-8(%rbx), %xmm0
 464      F8
 465 03f3 F20F59D0 		mulsd	%xmm0, %xmm2
 466 03f7 F20F58D1 		addsd	%xmm1, %xmm2
 467 03fb F20F1154 		movsd	%xmm2, 24(%rsp)
 467      2418
 468              	.LVL36:
 469              	.LBE142:
 470 0401 58       		popq	%rax
 471              		.cfi_def_cfa_offset 184
 472 0402 5A       		popq	%rdx
 473              		.cfi_def_cfa_offset 176
 474 0403 F30F106C 		movss	68(%rsp), %xmm5
 474      2444
 475              	.LVL37:
 476              	.L11:
 477              	.LBE141:
 194:fltk-1.3.4-1/src/Fl_Chart.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 478              		.loc 2 194 0 discriminator 2
 479 0409 4183C501 		addl	$1, %r13d
 480              	.LVL38:
 481 040d 4883C31C 		addq	$28, %rbx
 482 0411 4439ED   		cmpl	%r13d, %ebp
 483 0414 744A     		je	.L4
 484              	.LVL39:
 485              	.L16:
 486              	.LBB164:
 195:fltk-1.3.4-1/src/Fl_Chart.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 487              		.loc 2 195 0
 488 0416 F30F1043 		movss	-8(%rbx), %xmm0
 488      F8
 489 041b 0F2EC5   		ucomiss	%xmm5, %xmm0
 490 041e 76E9     		jbe	.L11
 491              	.LVL40:
 492              	.LBB163:
 199:fltk-1.3.4-1/src/Fl_Chart.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 493              		.loc 2 199 0
 494 0420 4585E4   		testl	%r12d, %r12d
 495 0423 0F8537FD 		jne	.L33
 495      FFFF
 496              	.L20:
 197:fltk-1.3.4-1/src/Fl_Chart.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 497              		.loc 2 197 0
 498 0429 F20F107C 		movsd	88(%rsp), %xmm7
 498      2458
 499 042f 4C8D7424 		leaq	104(%rsp), %r14
 499      68
 500 0434 4C8D7C24 		leaq	96(%rsp), %r15
 500      60
 501 0439 F20F1074 		movsd	80(%rsp), %xmm6
 501      2450
 502 043f F20F117C 		movsd	%xmm7, 24(%rsp)
 502      2418
 503 0445 F20F103D 		movsd	.LC9(%rip), %xmm7
 503      00000000 
 504 044d F20F1174 		movsd	%xmm6, 16(%rsp)
 504      2410
 505 0453 F20F117C 		movsd	%xmm7, 48(%rsp)
 505      2430
 506 0459 E994FDFF 		jmp	.L13
 506      FF
 507              	.LVL41:
 508 045e 6690     		.p2align 4,,10
 509              		.p2align 3
 510              	.L4:
 511              	.LBE163:
 512              	.LBE164:
 513              	.LBE140:
 221:fltk-1.3.4-1/src/Fl_Chart.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Chart.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 514              		.loc 2 222 0
 515 0460 4883C478 		addq	$120, %rsp
 516              		.cfi_def_cfa_offset 56
 517 0464 5B       		popq	%rbx
 518              		.cfi_def_cfa_offset 48
 519 0465 5D       		popq	%rbp
 520              		.cfi_def_cfa_offset 40
 521              	.LVL42:
 522 0466 415C     		popq	%r12
 523              		.cfi_def_cfa_offset 32
 524 0468 415D     		popq	%r13
 525              		.cfi_def_cfa_offset 24
 526 046a 415E     		popq	%r14
 527              		.cfi_def_cfa_offset 16
 528 046c 415F     		popq	%r15
 529              		.cfi_def_cfa_offset 8
 530 046e C3       		ret
 531              		.cfi_endproc
 532              	.LFE500:
 534              		.section	.text.unlikely._ZL13draw_piechartiiiiiP14FL_CHART_ENTRYij
 535              	.LCOLDE12:
 536              		.section	.text._ZL13draw_piechartiiiiiP14FL_CHART_ENTRYij
 537              	.LHOTE12:
 538              		.section	.text.unlikely._ZN8Fl_Chart4drawEv,"ax",@progbits
 539              		.align 2
 540              	.LCOLDB16:
 541              		.section	.text._ZN8Fl_Chart4drawEv,"ax",@progbits
 542              	.LHOTB16:
 543              		.align 2
 544              		.p2align 4,,15
 545              		.globl	_ZN8Fl_Chart4drawEv
 547              	_ZN8Fl_Chart4drawEv:
 548              	.LFB501:
 223:fltk-1.3.4-1/src/Fl_Chart.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Chart.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 549              		.loc 2 224 0
 550              		.cfi_startproc
 551              	.LVL43:
 552 0000 4157     		pushq	%r15
 553              		.cfi_def_cfa_offset 16
 554              		.cfi_offset 15, -16
 555 0002 4156     		pushq	%r14
 556              		.cfi_def_cfa_offset 24
 557              		.cfi_offset 14, -24
 558 0004 4155     		pushq	%r13
 559              		.cfi_def_cfa_offset 32
 560              		.cfi_offset 13, -32
 561 0006 4154     		pushq	%r12
 562              		.cfi_def_cfa_offset 40
 563              		.cfi_offset 12, -40
 564 0008 55       		pushq	%rbp
 565              		.cfi_def_cfa_offset 48
 566              		.cfi_offset 6, -48
 567 0009 53       		pushq	%rbx
 568              		.cfi_def_cfa_offset 56
 569              		.cfi_offset 3, -56
 570 000a 4889FB   		movq	%rdi, %rbx
 571 000d 4883EC58 		subq	$88, %rsp
 572              		.cfi_def_cfa_offset 144
 225:fltk-1.3.4-1/src/Fl_Chart.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Chart.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 573              		.loc 2 226 0
 574 0011 E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 574      00
 575              	.LVL44:
 576              	.LBB236:
 577              	.LBB237:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 578              		.loc 1 363 0
 579 0016 440FB66B 		movzbl	110(%rbx), %r13d
 579      6E
 580 001b 8B6B20   		movl	32(%rbx), %ebp
 581              	.LVL45:
 582              	.LBE237:
 583              	.LBE236:
 227:fltk-1.3.4-1/src/Fl_Chart.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Chart.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 584              		.loc 2 228 0
 585 001e 4489EF   		movl	%r13d, %edi
 586 0021 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 586      00
 587              	.LVL46:
 229:fltk-1.3.4-1/src/Fl_Chart.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 588              		.loc 2 229 0
 589 0026 4489EF   		movl	%r13d, %edi
 228:fltk-1.3.4-1/src/Fl_Chart.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 590              		.loc 2 228 0
 591 0029 01E8     		addl	%ebp, %eax
 592 002b 8B6B24   		movl	36(%rbx), %ebp
 593 002e 4189C7   		movl	%eax, %r15d
 594 0031 89442438 		movl	%eax, 56(%rsp)
 595              	.LVL47:
 596              		.loc 2 229 0
 597 0035 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 597      00
 598              	.LVL48:
 599 003a 448B6328 		movl	40(%rbx), %r12d
 230:fltk-1.3.4-1/src/Fl_Chart.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 600              		.loc 2 230 0
 601 003e 4489EF   		movl	%r13d, %edi
 229:fltk-1.3.4-1/src/Fl_Chart.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 602              		.loc 2 229 0
 603 0041 01C5     		addl	%eax, %ebp
 604              	.LVL49:
 605              		.loc 2 230 0
 606 0043 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 606      00
 607              	.LVL50:
 231:fltk-1.3.4-1/src/Fl_Chart.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 608              		.loc 2 231 0
 609 0048 4489EF   		movl	%r13d, %edi
 610 004b 448B732C 		movl	44(%rbx), %r14d
 230:fltk-1.3.4-1/src/Fl_Chart.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 611              		.loc 2 230 0
 612 004f 4129C4   		subl	%eax, %r12d
 613              	.LVL51:
 614              		.loc 2 231 0
 615 0052 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 615      00
 616              	.LVL52:
 617              	.LBB238:
 618              	.LBB239:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 619              		.loc 3 82 0
 620 0057 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 620      000000
 621              	.LBE239:
 622              	.LBE238:
 623              		.loc 2 231 0
 624 005e 4129C6   		subl	%eax, %r14d
 625              	.LVL53:
 626              	.LBB242:
 627              	.LBB240:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 628              		.loc 3 82 0
 629 0061 4489E1   		movl	%r12d, %ecx
 630 0064 4589F0   		movl	%r14d, %r8d
 631 0067 89EA     		movl	%ebp, %edx
 632 0069 4489FE   		movl	%r15d, %esi
 633              	.LBE240:
 634              	.LBE242:
 232:fltk-1.3.4-1/src/Fl_Chart.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Chart.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Chart.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 635              		.loc 2 234 0
 636 006c 458D6EFF 		leal	-1(%r14), %r13d
 637              	.LBB243:
 638              	.LBB241:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 639              		.loc 3 82 0
 640 0070 488B07   		movq	(%rdi), %rax
 641 0073 FF905001 		call	*336(%rax)
 641      0000
 642              	.LVL54:
 643              	.LBE241:
 644              	.LBE243:
 645              	.LBB244:
 235:fltk-1.3.4-1/src/Fl_Chart.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Chart.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 646              		.loc 2 236 0
 647 0079 F20F1083 		movsd	144(%rbx), %xmm0
 647      90000000 
 648              	.LBE244:
 234:fltk-1.3.4-1/src/Fl_Chart.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 649              		.loc 2 234 0
 650 0081 418D4424 		leal	-1(%r12), %eax
 650      FF
 651              	.LBB249:
 652              		.loc 2 236 0
 653 0086 660F2E83 		ucomisd	152(%rbx), %xmm0
 653      98000000 
 654              	.LBE249:
 234:fltk-1.3.4-1/src/Fl_Chart.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 655              		.loc 2 234 0
 656 008e 89442430 		movl	%eax, 48(%rsp)
 657              	.LVL55:
 658              	.LBB250:
 659              		.loc 2 236 0
 660 0092 0F828D00 		jb	.L41
 660      0000
 661              	.LBB245:
 662              	.LBB246:
 237:fltk-1.3.4-1/src/Fl_Chart.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Chart.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 663              		.loc 2 238 0
 664 0098 8B5378   		movl	120(%rbx), %edx
 665              	.LBE246:
 237:fltk-1.3.4-1/src/Fl_Chart.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 666              		.loc 2 237 0
 667 009b 660FEFC9 		pxor	%xmm1, %xmm1
 668              	.LBB247:
 669              		.loc 2 238 0
 670 009f 85D2     		testl	%edx, %edx
 671              	.LBE247:
 237:fltk-1.3.4-1/src/Fl_Chart.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 672              		.loc 2 237 0
 673 00a1 F20F118B 		movsd	%xmm1, 152(%rbx)
 673      98000000 
 674 00a9 F20F118B 		movsd	%xmm1, 144(%rbx)
 674      90000000 
 675              	.LVL56:
 676              	.LBB248:
 677              		.loc 2 238 0
 678 00b1 7E72     		jle	.L41
 679 00b3 83EA01   		subl	$1, %edx
 680 00b6 488B8388 		movq	136(%rbx), %rax
 680      000000
 681              	.LVL57:
 682 00bd 4883C201 		addq	$1, %rdx
 683 00c1 660F28D1 		movapd	%xmm1, %xmm2
 684 00c5 488D0C95 		leaq	0(,%rdx,4), %rcx
 684      00000000 
 685 00cd 48C1E205 		salq	$5, %rdx
 686 00d1 4829CA   		subq	%rcx, %rdx
 687 00d4 4801C2   		addq	%rax, %rdx
 688 00d7 EB17     		jmp	.L46
 689              	.LVL58:
 690 00d9 0F1F8000 		.p2align 4,,10
 690      000000
 691              		.p2align 3
 692              	.L155:
 693 00e0 F20F1093 		movsd	144(%rbx), %xmm2
 693      90000000 
 694 00e8 F20F108B 		movsd	152(%rbx), %xmm1
 694      98000000 
 695              	.L46:
 239:fltk-1.3.4-1/src/Fl_Chart.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 696              		.loc 2 239 0
 697 00f0 660FEFC0 		pxor	%xmm0, %xmm0
 698 00f4 F30F5A00 		cvtss2sd	(%rax), %xmm0
 699 00f8 660F2ED0 		ucomisd	%xmm0, %xmm2
 700 00fc 7610     		jbe	.L42
 701              		.loc 2 239 0 is_stmt 0 discriminator 1
 702 00fe F20F1183 		movsd	%xmm0, 144(%rbx)
 702      90000000 
 703 0106 660FEFC0 		pxor	%xmm0, %xmm0
 704 010a F30F5A00 		cvtss2sd	(%rax), %xmm0
 705              	.L42:
 240:fltk-1.3.4-1/src/Fl_Chart.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 706              		.loc 2 240 0 is_stmt 1
 707 010e 660F2EC1 		ucomisd	%xmm1, %xmm0
 708 0112 7608     		jbe	.L44
 709              		.loc 2 240 0 is_stmt 0 discriminator 1
 710 0114 F20F1183 		movsd	%xmm0, 152(%rbx)
 710      98000000 
 711              	.L44:
 712 011c 4883C01C 		addq	$28, %rax
 238:fltk-1.3.4-1/src/Fl_Chart.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 713              		.loc 2 238 0 is_stmt 1 discriminator 2
 714 0120 4839D0   		cmpq	%rdx, %rax
 715 0123 75BB     		jne	.L155
 716              	.L41:
 717              	.LVL59:
 718              	.LBE248:
 719              	.LBE245:
 720              	.LBE250:
 721              	.LBB251:
 722              	.LBB252:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 723              		.loc 3 509 0
 724 0125 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 724      000000
 725 012c 8B93A800 		movl	168(%rbx), %edx
 725      0000
 726 0132 8BB3A400 		movl	164(%rbx), %esi
 726      0000
 727 0138 488B07   		movq	(%rdi), %rax
 728 013b FF90B001 		call	*432(%rax)
 728      0000
 729              	.LVL60:
 730 0141 440FB67B 		movzbl	108(%rbx), %r15d
 730      6C
 731              	.LVL61:
 732              	.LBE252:
 733              	.LBE251:
 241:fltk-1.3.4-1/src/Fl_Chart.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Chart.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Chart.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Chart.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Chart.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Chart.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 734              		.loc 2 246 0
 735 0146 4180FF01 		cmpb	$1, %r15b
 736 014a 0F846006 		je	.L37
 736      0000
 737 0150 0F82BA03 		jb	.L38
 737      0000
 738 0156 4180FF05 		cmpb	$5, %r15b
 739 015a 745C     		je	.L39
 740 015c 4180FF06 		cmpb	$6, %r15b
 741 0160 7566     		jne	.L156
 742              	.LVL62:
 247:fltk-1.3.4-1/src/Fl_Chart.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Chart.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Chart.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Chart.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Chart.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Chart.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Chart.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Chart.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Chart.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Chart.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Chart.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Chart.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Chart.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Chart.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Chart.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 743              		.loc 2 261 0
 744 0162 8B83AC00 		movl	172(%rbx), %eax
 744      0000
 745 0168 50       		pushq	%rax
 746              		.cfi_def_cfa_offset 152
 747 0169 6A01     		pushq	$1
 748              		.cfi_def_cfa_offset 160
 749              	.LVL63:
 750              	.L152:
 751 016b 8B542440 		movl	64(%rsp), %edx
 752 016f 8B7C2448 		movl	72(%rsp), %edi
 753 0173 4489E9   		movl	%r13d, %ecx
 754 0176 4C8B8B88 		movq	136(%rbx), %r9
 754      000000
 755 017d 448B4378 		movl	120(%rbx), %r8d
 756 0181 89EE     		movl	%ebp, %esi
 757 0183 E8000000 		call	_ZL13draw_piechartiiiiiP14FL_CHART_ENTRYij
 757      00
 758              	.LVL64:
 262:fltk-1.3.4-1/src/Fl_Chart.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 759              		.loc 2 262 0
 760 0188 4158     		popq	%r8
 761              		.cfi_def_cfa_offset 152
 762 018a 4159     		popq	%r9
 763              		.cfi_def_cfa_offset 144
 764              	.LVL65:
 765              	.L56:
 263:fltk-1.3.4-1/src/Fl_Chart.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Chart.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Chart.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Chart.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Chart.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Chart.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 766              		.loc 2 268 0
 767 018c 4889DF   		movq	%rbx, %rdi
 768 018f E8000000 		call	_ZNK9Fl_Widget10draw_labelEv
 768      00
 769              	.LVL66:
 770              	.LBB253:
 771              	.LBB254:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 772              		.loc 3 103 0
 773 0194 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 773      000000
 774 019b 488B07   		movq	(%rdi), %rax
 775 019e 488B8070 		movq	368(%rax), %rax
 775      010000
 776              	.LBE254:
 777              	.LBE253:
 269:fltk-1.3.4-1/src/Fl_Chart.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Chart.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 778              		.loc 2 270 0
 779 01a5 4883C458 		addq	$88, %rsp
 780              		.cfi_remember_state
 781              		.cfi_def_cfa_offset 56
 782 01a9 5B       		popq	%rbx
 783              		.cfi_def_cfa_offset 48
 784 01aa 5D       		popq	%rbp
 785              		.cfi_def_cfa_offset 40
 786 01ab 415C     		popq	%r12
 787              		.cfi_def_cfa_offset 32
 788 01ad 415D     		popq	%r13
 789              		.cfi_def_cfa_offset 24
 790 01af 415E     		popq	%r14
 791              		.cfi_def_cfa_offset 16
 792 01b1 415F     		popq	%r15
 793              		.cfi_def_cfa_offset 8
 794              	.LBB256:
 795              	.LBB255:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 796              		.loc 3 103 0
 797 01b3 FFE0     		jmp	*%rax
 798              	.LVL67:
 799              		.p2align 4,,10
 800 01b5 0F1F00   		.p2align 3
 801              	.L39:
 802              		.cfi_restore_state
 803              	.LBE255:
 804              	.LBE256:
 258:fltk-1.3.4-1/src/Fl_Chart.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 805              		.loc 2 258 0
 806 01b8 8B83AC00 		movl	172(%rbx), %eax
 806      0000
 807 01be 50       		pushq	%rax
 808              		.cfi_remember_state
 809              		.cfi_def_cfa_offset 152
 810 01bf 6A00     		pushq	$0
 811              		.cfi_def_cfa_offset 160
 812 01c1 EBA8     		jmp	.L152
 813              	.LVL68:
 814              		.p2align 4,,10
 815 01c3 0F1F4400 		.p2align 3
 815      00
 816              	.L156:
 817              		.cfi_restore_state
 818 01c8 8B83AC00 		movl	172(%rbx), %eax
 818      0000
 819              	.LBB257:
 820              	.LBB258:
 821              	.LBB259:
 822              	.LBB260:
 823              		.loc 3 527 0
 824 01ce 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 824      000000
 825              	.LBE260:
 826              	.LBE259:
 827              	.LBE258:
 828              	.LBE257:
 264:fltk-1.3.4-1/src/Fl_Chart.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 829              		.loc 2 264 0
 830 01d5 F20F108B 		movsd	152(%rbx), %xmm1
 830      98000000 
 831 01dd 448B637C 		movl	124(%rbx), %r12d
 832 01e1 F20F1083 		movsd	144(%rbx), %xmm0
 832      90000000 
 833 01e9 440FB6B3 		movzbl	160(%rbx), %r14d
 833      A0000000 
 834 01f1 8944243C 		movl	%eax, 60(%rsp)
 835              	.LVL69:
 836 01f5 488B8388 		movq	136(%rbx), %rax
 836      000000
 837 01fc F20F114C 		movsd	%xmm1, 8(%rsp)
 837      2408
 838 0202 F20F1104 		movsd	%xmm0, (%rsp)
 838      24
 839 0207 48894424 		movq	%rax, 64(%rsp)
 839      40
 840 020c 8B4378   		movl	120(%rbx), %eax
 841 020f 89442420 		movl	%eax, 32(%rsp)
 842              	.LVL70:
 843              	.LBB337:
 844              	.LBB332:
 845              	.LBB262:
 846              	.LBB261:
 847              		.loc 3 527 0
 848 0213 488B07   		movq	(%rdi), %rax
 849              	.LVL71:
 850 0216 FF90D001 		call	*464(%rax)
 850      0000
 851              	.LVL72:
 852              	.LBE261:
 853              	.LBE262:
 129:fltk-1.3.4-1/src/Fl_Chart.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 854              		.loc 2 129 0
 855 021c F20F1004 		movsd	(%rsp), %xmm0
 855      24
 856 0221 F20F104C 		movsd	8(%rsp), %xmm1
 856      2408
 127:fltk-1.3.4-1/src/Fl_Chart.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 857              		.loc 2 127 0
 858 0227 660FEFD2 		pxor	%xmm2, %xmm2
 129:fltk-1.3.4-1/src/Fl_Chart.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 859              		.loc 2 129 0
 860 022b 660F2EC8 		ucomisd	%xmm0, %xmm1
 127:fltk-1.3.4-1/src/Fl_Chart.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 861              		.loc 2 127 0
 862 022f F20F2AD0 		cvtsi2sd	%eax, %xmm2
 863              	.LVL73:
 129:fltk-1.3.4-1/src/Fl_Chart.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 864              		.loc 2 129 0
 865 0233 0F8A1F08 		jp	.L83
 865      0000
 866 0239 0F851908 		jne	.L83
 866      0000
 867 023f 660FEFC9 		pxor	%xmm1, %xmm1
 868 0243 660F28DA 		movapd	%xmm2, %xmm3
 869 0247 F20F58DA 		addsd	%xmm2, %xmm3
 870 024b F2410F2A 		cvtsi2sd	%r13d, %xmm1
 870      CD
 871 0250 F20F5CCB 		subsd	%xmm3, %xmm1
 872 0254 F20F114C 		movsd	%xmm1, 8(%rsp)
 872      2408
 873              	.LVL74:
 874              	.L85:
 131:fltk-1.3.4-1/src/Fl_Chart.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 875              		.loc 2 131 0
 876 025a 660FEFC9 		pxor	%xmm1, %xmm1
 877 025e 4401ED   		addl	%r13d, %ebp
 878              	.LVL75:
 879 0261 F20F5944 		mulsd	8(%rsp), %xmm0
 879      2408
 880 0267 F20F2ACD 		cvtsi2sd	%ebp, %xmm1
 881 026b F20F5CCA 		subsd	%xmm2, %xmm1
 882 026f F20F58C1 		addsd	%xmm1, %xmm0
 883 0273 E8000000 		call	rint
 883      00
 884              	.LVL76:
 132:fltk-1.3.4-1/src/Fl_Chart.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 885              		.loc 2 132 0
 886 0278 660FEFC9 		pxor	%xmm1, %xmm1
 887 027c 4584F6   		testb	%r14b, %r14b
 131:fltk-1.3.4-1/src/Fl_Chart.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 888              		.loc 2 131 0
 889 027f F2440F2C 		cvttsd2si	%xmm0, %r13d
 889      E8
 890              	.LVL77:
 132:fltk-1.3.4-1/src/Fl_Chart.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 891              		.loc 2 132 0
 892 0284 660FEFC0 		pxor	%xmm0, %xmm0
 893 0288 F20F2A4C 		cvtsi2sd	48(%rsp), %xmm1
 893      2430
 894 028e 0F84B409 		je	.L86
 894      0000
 895 0294 F20F2A44 		cvtsi2sd	32(%rsp), %xmm0
 895      2420
 896              	.L87:
 897 029a F20F5EC8 		divsd	%xmm0, %xmm1
 898              	.LBB263:
 134:fltk-1.3.4-1/src/Fl_Chart.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 899              		.loc 2 134 0
 900 029e 8B7C2420 		movl	32(%rsp), %edi
 901 02a2 85FF     		testl	%edi, %edi
 902              	.LBE263:
 132:fltk-1.3.4-1/src/Fl_Chart.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 903              		.loc 2 132 0
 904 02a4 F20F110C 		movsd	%xmm1, (%rsp)
 904      24
 905              	.LVL78:
 906              	.LBB316:
 134:fltk-1.3.4-1/src/Fl_Chart.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 907              		.loc 2 134 0
 908 02a9 0F8E720A 		jle	.L157
 908      0000
 909              	.LBB264:
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 910              		.loc 2 135 0
 911 02af F20F1005 		movsd	.LC13(%rip), %xmm0
 911      00000000 
 136:fltk-1.3.4-1/src/Fl_Chart.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 912              		.loc 2 136 0
 913 02b7 31ED     		xorl	%ebp, %ebp
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 914              		.loc 2 135 0
 915 02b9 F20F5904 		mulsd	(%rsp), %xmm0
 915      24
 916 02be E8000000 		call	rint
 916      00
 917              	.LVL79:
 918 02c3 F20F2CC0 		cvttsd2si	%xmm0, %eax
 919 02c7 448B7424 		movl	56(%rsp), %r14d
 919      38
 920              	.LVL80:
 136:fltk-1.3.4-1/src/Fl_Chart.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 921              		.loc 2 136 0
 922 02cc F20F1005 		movsd	.LC8(%rip), %xmm0
 922      00000000 
 923 02d4 F20F5904 		mulsd	(%rsp), %xmm0
 923      24
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 924              		.loc 2 135 0
 925 02d9 4401F0   		addl	%r14d, %eax
 926 02dc 89442418 		movl	%eax, 24(%rsp)
 927              	.LVL81:
 136:fltk-1.3.4-1/src/Fl_Chart.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 928              		.loc 2 136 0
 929 02e0 E8000000 		call	rint
 929      00
 930              	.LVL82:
 931 02e5 F20F2CC0 		cvttsd2si	%xmm0, %eax
 932 02e9 4C8B6424 		movq	64(%rsp), %r12
 932      40
 933              	.LVL83:
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 934              		.loc 2 135 0
 935 02ee F20F103D 		movsd	.LC13(%rip), %xmm7
 935      00000000 
 137:fltk-1.3.4-1/src/Fl_Chart.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 936              		.loc 2 137 0
 937 02f6 C7442410 		movl	$0, 16(%rsp)
 937      00000000 
 938 02fe 48895C24 		movq	%rbx, 72(%rsp)
 938      48
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 939              		.loc 2 135 0
 940 0303 F20F117C 		movsd	%xmm7, 40(%rsp)
 940      2428
 136:fltk-1.3.4-1/src/Fl_Chart.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 941              		.loc 2 136 0
 942 0309 468D3430 		leal	(%rax,%r14), %r14d
 943              	.LVL84:
 944 030d E9AF0000 		jmp	.L101
 944      00
 945              	.LVL85:
 946              		.p2align 4,,10
 947 0312 660F1F44 		.p2align 3
 947      0000
 948              	.L93:
 949              	.LBB265:
 950              	.LBB266:
 951              	.LBB267:
 145:fltk-1.3.4-1/src/Fl_Chart.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 952              		.loc 2 145 0
 953 0318 4183FF03 		cmpl	$3, %r15d
 954 031c 7508     		jne	.L92
 955 031e 84C0     		testb	%al, %al
 956 0320 0F855A07 		jne	.L158
 956      0000
 957              	.L92:
 958              	.LBE267:
 959              	.LBE266:
 960              	.LBE265:
 961              	.LBE264:
 134:fltk-1.3.4-1/src/Fl_Chart.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 962              		.loc 2 134 0
 963 0326 83C501   		addl	$1, %ebp
 964              	.LVL86:
 965 0329 396C2420 		cmpl	%ebp, 32(%rsp)
 966 032d 0F840A01 		je	.L159
 966      0000
 967              	.L148:
 968              	.LBB311:
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 969              		.loc 2 135 0
 970 0333 660FEFC9 		pxor	%xmm1, %xmm1
 971 0337 F20F1004 		movsd	(%rsp), %xmm0
 971      24
 972 033c F20F2ACD 		cvtsi2sd	%ebp, %xmm1
 973 0340 660F28E9 		movapd	%xmm1, %xmm5
 974 0344 F20F114C 		movsd	%xmm1, 16(%rsp)
 974      2410
 975              	.LVL87:
 976 034a F20F5C2D 		subsd	.LC8(%rip), %xmm5
 976      00000000 
 977 0352 F20F59C5 		mulsd	%xmm5, %xmm0
 978 0356 F20F116C 		movsd	%xmm5, 40(%rsp)
 978      2428
 979 035c E8000000 		call	rint
 979      00
 980              	.LVL88:
 136:fltk-1.3.4-1/src/Fl_Chart.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 981              		.loc 2 136 0
 982 0361 F20F104C 		movsd	16(%rsp), %xmm1
 982      2410
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 983              		.loc 2 135 0
 984 0367 8B5C2438 		movl	56(%rsp), %ebx
 985              	.LVL89:
 986 036b F20F2CC0 		cvttsd2si	%xmm0, %eax
 136:fltk-1.3.4-1/src/Fl_Chart.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 987              		.loc 2 136 0
 988 036f F20F580D 		addsd	.LC8(%rip), %xmm1
 988      00000000 
 989 0377 F20F590C 		mulsd	(%rsp), %xmm1
 989      24
 135:fltk-1.3.4-1/src/Fl_Chart.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 990              		.loc 2 135 0
 991 037c 01D8     		addl	%ebx, %eax
 992 037e 89442418 		movl	%eax, 24(%rsp)
 993              	.LVL90:
 136:fltk-1.3.4-1/src/Fl_Chart.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 994              		.loc 2 136 0
 995 0382 660F28C1 		movapd	%xmm1, %xmm0
 996 0386 E8000000 		call	rint
 996      00
 997              	.LVL91:
 998 038b F2440F2C 		cvttsd2si	%xmm0, %r14d
 998      F0
 999              	.LVL92:
 1000 0390 4101DE   		addl	%ebx, %r14d
 1001              	.LVL93:
 137:fltk-1.3.4-1/src/Fl_Chart.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 1002              		.loc 2 137 0
 1003 0393 85ED     		testl	%ebp, %ebp
 1004 0395 0F84EE09 		je	.L104
 1004      0000
 1005 039b 660FEFC0 		pxor	%xmm0, %xmm0
 1006 039f F3410F5A 		cvtss2sd	(%r12), %xmm0
 1006      0424
 1007 03a5 F20F5944 		mulsd	8(%rsp), %xmm0
 1007      2408
 1008 03ab E8000000 		call	rint
 1008      00
 1009              	.LVL94:
 1010 03b0 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1011 03b4 4489E9   		movl	%r13d, %ecx
 1012 03b7 29C1     		subl	%eax, %ecx
 1013 03b9 894C2410 		movl	%ecx, 16(%rsp)
 1014              	.L90:
 1015 03bd 4983C41C 		addq	$28, %r12
 1016              	.LVL95:
 1017              	.L101:
 138:fltk-1.3.4-1/src/Fl_Chart.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1018              		.loc 2 138 0
 1019 03c1 660FEFC0 		pxor	%xmm0, %xmm0
 1020 03c5 4489EB   		movl	%r13d, %ebx
 1021 03c8 F3410F5A 		cvtss2sd	(%r12), %xmm0
 1021      0424
 1022 03ce F20F5944 		mulsd	8(%rsp), %xmm0
 1022      2408
 1023 03d4 E8000000 		call	rint
 1023      00
 1024              	.LVL96:
 1025 03d9 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1026 03dd 29C3     		subl	%eax, %ebx
 1027              	.LVL97:
 1028              	.LBB307:
 139:fltk-1.3.4-1/src/Fl_Chart.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1029              		.loc 2 139 0
 1030 03df 4183FF04 		cmpl	$4, %r15d
 1031 03e3 0F846707 		je	.L160
 1031      0000
 1032              	.LBB299:
 142:fltk-1.3.4-1/src/Fl_Chart.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 1033              		.loc 2 142 0
 1034 03e9 85ED     		testl	%ebp, %ebp
 1035 03eb 0F95C0   		setne	%al
 1036 03ee 4183FF02 		cmpl	$2, %r15d
 1037 03f2 0F8520FF 		jne	.L93
 1037      FFFF
 1038 03f8 84C0     		testb	%al, %al
 1039 03fa 0F8418FF 		je	.L93
 1039      FFFF
 1040              	.LVL98:
 1041              	.LBB293:
 1042              	.LBB294:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1043              		.loc 3 52 0
 1044 0400 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1044      000000
 1045 0407 418B7424 		movl	-24(%r12), %esi
 1045      E8
 1046 040c 488B07   		movq	(%rdi), %rax
 1047              	.LVL99:
 1048              	.L151:
 1049              	.LBE294:
 1050              	.LBE293:
 1051              	.LBB295:
 1052              	.LBB268:
 1053              	.LBB269:
 1054              	.LBB270:
 1055 040f FF908800 		call	*136(%rax)
 1055      0000
 1056              	.LVL100:
 1057              	.LBE270:
 1058              	.LBE269:
 1059              	.LBB272:
 1060              	.LBB273:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1061              		.loc 3 223 0
 1062 0415 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1062      000000
 1063 041c 4189D8   		movl	%ebx, %r8d
 1064 041f 4489F1   		movl	%r14d, %ecx
 1065 0422 8B542410 		movl	16(%rsp), %edx
 1066 0426 8B742418 		movl	24(%rsp), %esi
 1067              	.LBE273:
 1068              	.LBE272:
 1069              	.LBE268:
 1070              	.LBE295:
 1071              	.LBE299:
 1072              	.LBE307:
 1073              	.LBE311:
 134:fltk-1.3.4-1/src/Fl_Chart.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1074              		.loc 2 134 0
 1075 042a 83C501   		addl	$1, %ebp
 1076              	.LBB312:
 1077              	.LBB308:
 1078              	.LBB300:
 1079              	.LBB296:
 1080              	.LBB290:
 1081              	.LBB275:
 1082              	.LBB274:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1083              		.loc 3 223 0
 1084 042d 488B07   		movq	(%rdi), %rax
 1085 0430 FF5060   		call	*96(%rax)
 1086              	.LVL101:
 1087              	.LBE274:
 1088              	.LBE275:
 1089              	.LBE290:
 1090              	.LBE296:
 1091              	.LBE300:
 1092              	.LBE308:
 1093              	.LBE312:
 134:fltk-1.3.4-1/src/Fl_Chart.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1094              		.loc 2 134 0
 1095 0433 396C2420 		cmpl	%ebp, 32(%rsp)
 1096 0437 0F85F6FE 		jne	.L148
 1096      FFFF
 1097              	.LVL102:
 1098              	.L159:
 1099              	.LBE316:
 1100              	.LBB317:
 1101              	.LBB318:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1102              		.loc 3 52 0
 1103 043d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1103      000000
 1104 0444 488B5C24 		movq	72(%rsp), %rbx
 1104      48
 1105              	.LVL103:
 1106              	.LBE318:
 1107              	.LBE317:
 1108              	.LBB321:
 1109              	.LBB322:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1110              		.loc 3 223 0
 1111 0449 31ED     		xorl	%ebp, %ebp
 1112              	.LVL104:
 1113              	.LBE322:
 1114              	.LBE321:
 1115              	.LBB325:
 1116              	.LBB319:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1117              		.loc 3 52 0
 1118 044b 8B74243C 		movl	60(%rsp), %esi
 1119 044f 488B07   		movq	(%rdi), %rax
 1120 0452 FF908800 		call	*136(%rax)
 1120      0000
 1121              	.LVL105:
 1122              	.LBE319:
 1123              	.LBE325:
 1124              	.LBB326:
 1125              	.LBB323:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1126              		.loc 3 223 0
 1127 0458 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1127      000000
 1128 045f 8B4C2430 		movl	48(%rsp), %ecx
 1129 0463 4589E8   		movl	%r13d, %r8d
 1130 0466 8B742438 		movl	56(%rsp), %esi
 1131 046a 4489EA   		movl	%r13d, %edx
 1132 046d 488B07   		movq	(%rdi), %rax
 1133 0470 01F1     		addl	%esi, %ecx
 1134              	.LVL106:
 1135 0472 FF5060   		call	*96(%rax)
 1136              	.LVL107:
 1137 0475 4C8B7424 		movq	64(%rsp), %r14
 1137      40
 1138              	.LVL108:
 1139 047a 448B7C24 		movl	32(%rsp), %r15d
 1139      20
 1140              	.LVL109:
 1141 047f 48895C24 		movq	%rbx, 16(%rsp)
 1141      10
 1142              	.LVL110:
 1143 0484 4983C608 		addq	$8, %r14
 1144 0488 4C89F3   		movq	%r14, %rbx
 1145              	.LVL111:
 1146 048b 0F1F4400 		.p2align 4,,10
 1146      00
 1147              		.p2align 3
 1148              	.L100:
 1149              	.LBE323:
 1150              	.LBE326:
 164:fltk-1.3.4-1/src/Fl_Chart.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1151              		.loc 2 164 0
 1152 0490 660FEFE4 		pxor	%xmm4, %xmm4
 166:fltk-1.3.4-1/src/Fl_Chart.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1153              		.loc 2 166 0
 1154 0494 F30F1043 		movss	-8(%rbx), %xmm0
 1154      F8
 164:fltk-1.3.4-1/src/Fl_Chart.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1155              		.loc 2 164 0
 1156 0499 4589EE   		movl	%r13d, %r14d
 1157 049c 0F2EC4   		ucomiss	%xmm4, %xmm0
 165:fltk-1.3.4-1/src/Fl_Chart.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1158              		.loc 2 165 0
 1159 049f F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 1160 04a3 F20F5944 		mulsd	8(%rsp), %xmm0
 1160      2408
 164:fltk-1.3.4-1/src/Fl_Chart.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1161              		.loc 2 164 0
 1162 04a9 4519E4   		sbbl	%r12d, %r12d
 1163 04ac 4183C402 		addl	$2, %r12d
 165:fltk-1.3.4-1/src/Fl_Chart.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1164              		.loc 2 165 0
 1165 04b0 E8000000 		call	rint
 1165      00
 1166              	.LVL112:
 164:fltk-1.3.4-1/src/Fl_Chart.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1167              		.loc 2 164 0
 1168 04b5 F20F2CD0 		cvttsd2si	%xmm0, %edx
 165:fltk-1.3.4-1/src/Fl_Chart.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1169              		.loc 2 165 0
 1170 04b9 660FEFC0 		pxor	%xmm0, %xmm0
 1171 04bd F20F2AC5 		cvtsi2sd	%ebp, %xmm0
 163:fltk-1.3.4-1/src/Fl_Chart.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 1172              		.loc 2 163 0
 1173 04c1 83C501   		addl	$1, %ebp
 1174              	.LVL113:
 164:fltk-1.3.4-1/src/Fl_Chart.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1175              		.loc 2 164 0
 1176 04c4 4129D6   		subl	%edx, %r14d
 165:fltk-1.3.4-1/src/Fl_Chart.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1177              		.loc 2 165 0
 1178 04c7 F20F5805 		addsd	.LC8(%rip), %xmm0
 1178      00000000 
 1179 04cf F20F5904 		mulsd	(%rsp), %xmm0
 1179      24
 1180 04d4 E8000000 		call	rint
 1180      00
 1181              	.LVL114:
 166:fltk-1.3.4-1/src/Fl_Chart.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1182              		.loc 2 166 0
 1183 04d9 F20F2CF0 		cvttsd2si	%xmm0, %esi
 1184 04dd 4531C0   		xorl	%r8d, %r8d
 1185 04e0 31C9     		xorl	%ecx, %ecx
 1186 04e2 4489F2   		movl	%r14d, %edx
 1187 04e5 4889DF   		movq	%rbx, %rdi
 1188 04e8 4589E1   		movl	%r12d, %r9d
 1189 04eb 4883C31C 		addq	$28, %rbx
 1190 04ef 03742438 		addl	56(%rsp), %esi
 1191 04f3 6A01     		pushq	$1
 1192              		.cfi_def_cfa_offset 152
 1193              	.LVL115:
 1194 04f5 6A00     		pushq	$0
 1195              		.cfi_def_cfa_offset 160
 1196 04f7 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1196      00
 1197              	.LVL116:
 163:fltk-1.3.4-1/src/Fl_Chart.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 1198              		.loc 2 163 0
 1199 04fc 4139EF   		cmpl	%ebp, %r15d
 1200 04ff 58       		popq	%rax
 1201              		.cfi_def_cfa_offset 152
 1202 0500 5A       		popq	%rdx
 1203              		.cfi_def_cfa_offset 144
 1204              	.LVL117:
 1205 0501 758D     		jne	.L100
 1206 0503 488B5C24 		movq	16(%rsp), %rbx
 1206      10
 1207 0508 E97FFCFF 		jmp	.L56
 1207      FF
 1208              	.LVL118:
 1209 050d 0F1F00   		.p2align 4,,10
 1210              		.p2align 3
 1211              	.L38:
 1212 0510 8B83AC00 		movl	172(%rbx), %eax
 1212      0000
 1213              	.LBE332:
 1214              	.LBE337:
 1215              	.LBB338:
 1216              	.LBB339:
 1217              	.LBB340:
 1218              	.LBB341:
 1219              		.loc 3 527 0
 1220 0516 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1220      000000
 1221              	.LBE341:
 1222              	.LBE340:
 1223              	.LBE339:
 1224              	.LBE338:
 249:fltk-1.3.4-1/src/Fl_Chart.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 1225              		.loc 2 249 0
 1226 051d F20F109B 		movsd	152(%rbx), %xmm3
 1226      98000000 
 1227 0525 440FB6BB 		movzbl	160(%rbx), %r15d
 1227      A0000000 
 1228 052d F20F1093 		movsd	144(%rbx), %xmm2
 1228      90000000 
 1229 0535 448B7378 		movl	120(%rbx), %r14d
 1230 0539 89442408 		movl	%eax, 8(%rsp)
 1231              	.LVL119:
 1232 053d 8B437C   		movl	124(%rbx), %eax
 1233              	.LVL120:
 1234 0540 F20F115C 		movsd	%xmm3, 24(%rsp)
 1234      2418
 1235              	.LVL121:
 1236 0546 F20F1114 		movsd	%xmm2, (%rsp)
 1236      24
 1237              	.LVL122:
 1238 054b 89442420 		movl	%eax, 32(%rsp)
 1239              	.LVL123:
 1240 054f 488B8388 		movq	136(%rbx), %rax
 1240      000000
 1241 0556 48894424 		movq	%rax, 16(%rsp)
 1241      10
 1242              	.LVL124:
 1243              	.LBB363:
 1244              	.LBB358:
 1245              	.LBB343:
 1246              	.LBB342:
 1247              		.loc 3 527 0
 1248 055b 488B07   		movq	(%rdi), %rax
 1249 055e FF90D001 		call	*464(%rax)
 1249      0000
 1250              	.LVL125:
 1251              	.LBE342:
 1252              	.LBE343:
  43:fltk-1.3.4-1/src/Fl_Chart.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 1253              		.loc 2 43 0
 1254 0564 F20F1014 		movsd	(%rsp), %xmm2
 1254      24
 1255 0569 F20F105C 		movsd	24(%rsp), %xmm3
 1255      2418
  42:fltk-1.3.4-1/src/Fl_Chart.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1256              		.loc 2 42 0
 1257 056f 660FEFC9 		pxor	%xmm1, %xmm1
  43:fltk-1.3.4-1/src/Fl_Chart.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 1258              		.loc 2 43 0
 1259 0573 660F2EDA 		ucomisd	%xmm2, %xmm3
  42:fltk-1.3.4-1/src/Fl_Chart.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1260              		.loc 2 42 0
 1261 0577 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 1262              	.LVL126:
  43:fltk-1.3.4-1/src/Fl_Chart.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 1263              		.loc 2 43 0
 1264 057b 0F8AAF04 		jp	.L47
 1264      0000
 1265 0581 0F85A904 		jne	.L47
 1265      0000
 1266 0587 660FEFE4 		pxor	%xmm4, %xmm4
 1267 058b F2410F2A 		cvtsi2sd	%r13d, %xmm4
 1267      E5
 1268 0590 F20F1124 		movsd	%xmm4, (%rsp)
 1268      24
 1269              	.LVL127:
 1270              	.L49:
  45:fltk-1.3.4-1/src/Fl_Chart.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 1271              		.loc 2 45 0
 1272 0595 F20F1005 		movsd	.LC14(%rip), %xmm0
 1272      00000000 
 1273 059d F20F103C 		movsd	(%rsp), %xmm7
 1273      24
 1274 05a2 660F57C2 		xorpd	%xmm2, %xmm0
 1275 05a6 F20F59C7 		mulsd	%xmm7, %xmm0
 1276 05aa 660F2EC8 		ucomisd	%xmm0, %xmm1
 1277 05ae 0F861C07 		jbe	.L145
 1277      0000
  46:fltk-1.3.4-1/src/Fl_Chart.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 1278              		.loc 2 46 0
 1279 05b4 660F28C7 		movapd	%xmm7, %xmm0
  47:fltk-1.3.4-1/src/Fl_Chart.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 1280              		.loc 2 47 0
 1281 05b8 4401ED   		addl	%r13d, %ebp
 1282              	.LVL128:
  46:fltk-1.3.4-1/src/Fl_Chart.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 1283              		.loc 2 46 0
 1284 05bb F20F5CE1 		subsd	%xmm1, %xmm4
 1285 05bf F20F59C2 		mulsd	%xmm2, %xmm0
 1286 05c3 F20F58E0 		addsd	%xmm0, %xmm4
 1287 05c7 660F28C3 		movapd	%xmm3, %xmm0
 1288 05cb F20F5CC2 		subsd	%xmm2, %xmm0
 1289 05cf F20F5EE0 		divsd	%xmm0, %xmm4
  47:fltk-1.3.4-1/src/Fl_Chart.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 1290              		.loc 2 47 0
 1291 05d3 660FEFC0 		pxor	%xmm0, %xmm0
 1292 05d7 F20F2AC5 		cvtsi2sd	%ebp, %xmm0
  46:fltk-1.3.4-1/src/Fl_Chart.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 1293              		.loc 2 46 0
 1294 05db F20F1124 		movsd	%xmm4, (%rsp)
 1294      24
 1295              	.LVL129:
  47:fltk-1.3.4-1/src/Fl_Chart.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 1296              		.loc 2 47 0
 1297 05e0 F20F5CC1 		subsd	%xmm1, %xmm0
 1298 05e4 F20F2CE8 		cvttsd2si	%xmm0, %ebp
 1299              	.LVL130:
 1300              	.L52:
  51:fltk-1.3.4-1/src/Fl_Chart.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1301              		.loc 2 51 0
 1302 05e8 660FEFC0 		pxor	%xmm0, %xmm0
 1303 05ec 4584FF   		testb	%r15b, %r15b
 1304 05ef 660FEFC9 		pxor	%xmm1, %xmm1
 1305 05f3 F2410F2A 		cvtsi2sd	%r12d, %xmm0
 1305      C4
 1306 05f8 0F845A06 		je	.L53
 1306      0000
 1307 05fe F2410F2A 		cvtsi2sd	%r14d, %xmm1
 1307      CE
 1308              	.L54:
 1309 0603 F20F5EC1 		divsd	%xmm1, %xmm0
 1310 0607 F20F1154 		movsd	%xmm2, 24(%rsp)
 1310      2418
 1311 060d F20F115C 		movsd	%xmm3, 32(%rsp)
 1311      2420
 1312 0613 E8000000 		call	rint
 1312      00
 1313              	.LVL131:
 1314              	.LBB344:
 1315              	.LBB345:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1316              		.loc 3 52 0
 1317 0618 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1317      000000
 1318              	.LBE345:
 1319              	.LBE344:
  51:fltk-1.3.4-1/src/Fl_Chart.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1320              		.loc 2 51 0
 1321 061f F20F1144 		movsd	%xmm0, 40(%rsp)
 1321      2428
 1322              	.LVL132:
 1323              	.LBB347:
 1324              	.LBB346:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1325              		.loc 3 52 0
 1326 0625 8B742408 		movl	8(%rsp), %esi
 1327 0629 488B07   		movq	(%rdi), %rax
 1328 062c FF908800 		call	*136(%rax)
 1328      0000
 1329              	.LVL133:
 1330              	.LBE346:
 1331              	.LBE347:
 1332              	.LBB348:
 1333              	.LBB349:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1334              		.loc 3 223 0
 1335 0632 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1335      000000
 1336 0639 8B742438 		movl	56(%rsp), %esi
 1337 063d 89EA     		movl	%ebp, %edx
 1338 063f 4189E8   		movl	%ebp, %r8d
 1339 0642 488B07   		movq	(%rdi), %rax
 1340 0645 428D0C26 		leal	(%rsi,%r12), %ecx
 1341              	.LVL134:
 1342 0649 FF5060   		call	*96(%rax)
 1343              	.LVL135:
 1344              	.LBE349:
 1345              	.LBE348:
  55:fltk-1.3.4-1/src/Fl_Chart.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1346              		.loc 2 55 0
 1347 064c 660FEFC0 		pxor	%xmm0, %xmm0
 1348 0650 BA000000 		movl	$0, %edx
 1348      00
 1349 0655 F20F1054 		movsd	24(%rsp), %xmm2
 1349      2418
 1350 065b 660F2ED0 		ucomisd	%xmm0, %xmm2
 1351 065f 0F9BC0   		setnp	%al
 1352 0662 0F45C2   		cmovne	%edx, %eax
 1353 0665 84C0     		testb	%al, %al
 1354 0667 7418     		je	.L55
 1355 0669 F20F105C 		movsd	32(%rsp), %xmm3
 1355      2420
 1356 066f 660F2ED8 		ucomisd	%xmm0, %xmm3
 1357 0673 0F9BC0   		setnp	%al
 1358 0676 0F45C2   		cmovne	%edx, %eax
 1359 0679 84C0     		testb	%al, %al
 1360 067b 0F850BFB 		jne	.L56
 1360      FFFF
 1361              	.L55:
 1362              	.LVL136:
 1363              	.LBB350:
  58:fltk-1.3.4-1/src/Fl_Chart.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1364              		.loc 2 58 0
 1365 0681 4585F6   		testl	%r14d, %r14d
 1366 0684 0F8ECD06 		jle	.L57
 1366      0000
 1367 068a 418D46FF 		leal	-1(%r14), %eax
 1368 068e 488B4C24 		movq	16(%rsp), %rcx
 1368      10
 1369              	.LBE350:
  51:fltk-1.3.4-1/src/Fl_Chart.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1370              		.loc 2 51 0
 1371 0693 F2440F2C 		cvttsd2si	40(%rsp), %r13d
 1371      6C2428
 1372              	.LVL137:
 1373              	.LBB353:
 1374              	.LBB351:
  63:fltk-1.3.4-1/src/Fl_Chart.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1375              		.loc 2 63 0
 1376 069a 48895C24 		movq	%rbx, 32(%rsp)
 1376      20
 1377 069f 448B6424 		movl	56(%rsp), %r12d
 1377      38
 1378              	.LVL138:
 1379 06a4 488D1485 		leaq	0(,%rax,4), %rdx
 1379      00000000 
 1380 06ac 48C1E005 		salq	$5, %rax
 1381 06b0 4C8D7904 		leaq	4(%rcx), %r15
 1382              	.LVL139:
 1383 06b4 4829D0   		subq	%rdx, %rax
 1384 06b7 48894424 		movq	%rax, 24(%rsp)
 1384      18
 1385 06bc 4C8D7401 		leaq	32(%rcx,%rax), %r14
 1385      20
 1386              	.LVL140:
 1387 06c1 418D4501 		leal	1(%r13), %eax
 1388 06c5 4C89FB   		movq	%r15, %rbx
 1389              	.LVL141:
 1390 06c8 4189C7   		movl	%eax, %r15d
 1391 06cb EB26     		jmp	.L61
 1392              	.LVL142:
 1393 06cd 0F1F00   		.p2align 4,,10
 1394              		.p2align 3
 1395              	.L58:
  62:fltk-1.3.4-1/src/Fl_Chart.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 1396              		.loc 2 62 0
 1397 06d0 7415     		je	.L59
  63:fltk-1.3.4-1/src/Fl_Chart.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1398              		.loc 2 63 0
 1399 06d2 448B03   		movl	(%rbx), %r8d
 1400 06d5 89EE     		movl	%ebp, %esi
 1401 06d7 8D4801   		leal	1(%rax), %ecx
 1402 06da 29C6     		subl	%eax, %esi
 1403 06dc 4489FA   		movl	%r15d, %edx
 1404 06df 4489E7   		movl	%r12d, %edi
 1405 06e2 E8000000 		call	_Z12fl_rectboundiiiij
 1405      00
 1406              	.LVL143:
 1407              	.L59:
 1408 06e7 4883C31C 		addq	$28, %rbx
 1409 06eb 4501EC   		addl	%r13d, %r12d
 1410              	.LBE351:
  58:fltk-1.3.4-1/src/Fl_Chart.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1411              		.loc 2 58 0
 1412 06ee 4C39F3   		cmpq	%r14, %rbx
 1413 06f1 7445     		je	.L161
 1414              	.L61:
 1415              	.LBB352:
  59:fltk-1.3.4-1/src/Fl_Chart.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 1416              		.loc 2 59 0
 1417 06f3 660FEFC0 		pxor	%xmm0, %xmm0
 1418 06f7 F30F5A43 		cvtss2sd	-4(%rbx), %xmm0
 1418      FC
 1419 06fc F20F5904 		mulsd	(%rsp), %xmm0
 1419      24
 1420 0701 E8000000 		call	rint
 1420      00
 1421              	.LVL144:
 1422 0706 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1423              	.LVL145:
  60:fltk-1.3.4-1/src/Fl_Chart.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1424              		.loc 2 60 0
 1425 070a 85C0     		testl	%eax, %eax
 1426 070c 79C2     		jns	.L58
  61:fltk-1.3.4-1/src/Fl_Chart.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 1427              		.loc 2 61 0
 1428 070e 448B03   		movl	(%rbx), %r8d
 1429 0711 B9010000 		movl	$1, %ecx
 1429      00
 1430 0716 4489E7   		movl	%r12d, %edi
 1431 0719 29C1     		subl	%eax, %ecx
 1432 071b 4489FA   		movl	%r15d, %edx
 1433 071e 89EE     		movl	%ebp, %esi
 1434 0720 4883C31C 		addq	$28, %rbx
 1435 0724 4501EC   		addl	%r13d, %r12d
 1436 0727 E8000000 		call	_Z12fl_rectboundiiiij
 1436      00
 1437              	.LVL146:
 1438              	.LBE352:
  58:fltk-1.3.4-1/src/Fl_Chart.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1439              		.loc 2 58 0
 1440 072c 4C39F3   		cmpq	%r14, %rbx
 1441 072f 75C2     		jne	.L61
 1442              		.p2align 4,,10
 1443 0731 0F1F8000 		.p2align 3
 1443      000000
 1444              	.L161:
 1445              	.LBE353:
 1446              	.LBB354:
 1447              	.LBB355:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1448              		.loc 3 52 0
 1449 0738 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1449      000000
 1450 073f 4589EC   		movl	%r13d, %r12d
 1451 0742 488B5C24 		movq	32(%rsp), %rbx
 1451      20
 1452              	.LVL147:
 1453 0747 41C1EC1F 		shrl	$31, %r12d
 1454 074b 8B742408 		movl	8(%rsp), %esi
 1455 074f 4501EC   		addl	%r13d, %r12d
 1456 0752 488B07   		movq	(%rdi), %rax
 1457 0755 41D1FC   		sarl	%r12d
 1458 0758 FF908800 		call	*136(%rax)
 1458      0000
 1459              	.LVL148:
 1460 075e 488B4424 		movq	16(%rsp), %rax
 1460      10
 1461 0763 488B4C24 		movq	24(%rsp), %rcx
 1461      18
 1462 0768 44036424 		addl	56(%rsp), %r12d
 1462      38
 1463 076d 4C8D7008 		leaq	8(%rax), %r14
 1464 0771 4C8D7C08 		leaq	36(%rax,%rcx), %r15
 1464      24
 1465              	.LVL149:
 1466 0776 662E0F1F 		.p2align 4,,10
 1466      84000000 
 1466      0000
 1467              		.p2align 3
 1468              	.L63:
 1469              	.LBE355:
 1470              	.LBE354:
  70:fltk-1.3.4-1/src/Fl_Chart.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 1471              		.loc 2 70 0
 1472 0780 6A01     		pushq	$1
 1473              		.cfi_def_cfa_offset 152
 1474              	.LVL150:
 1475 0782 6A00     		pushq	$0
 1476              		.cfi_def_cfa_offset 160
 1477 0784 4531C0   		xorl	%r8d, %r8d
 1478 0787 31C9     		xorl	%ecx, %ecx
 1479 0789 89EA     		movl	%ebp, %edx
 1480 078b 4489E6   		movl	%r12d, %esi
 1481 078e 4C89F7   		movq	%r14, %rdi
 1482 0791 41B90100 		movl	$1, %r9d
 1482      0000
 1483 0797 4983C61C 		addq	$28, %r14
 1484 079b E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1484      00
 1485              	.LVL151:
 1486 07a0 4501EC   		addl	%r13d, %r12d
  67:fltk-1.3.4-1/src/Fl_Chart.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 1487              		.loc 2 67 0
 1488 07a3 4D39FE   		cmpq	%r15, %r14
 1489 07a6 58       		popq	%rax
 1490              		.cfi_def_cfa_offset 152
 1491 07a7 5A       		popq	%rdx
 1492              		.cfi_def_cfa_offset 144
 1493              	.LVL152:
 1494 07a8 75D6     		jne	.L63
 1495 07aa E9DDF9FF 		jmp	.L56
 1495      FF
 1496              	.LVL153:
 1497 07af 90       		.p2align 4,,10
 1498              		.p2align 3
 1499              	.L37:
 1500 07b0 8B83AC00 		movl	172(%rbx), %eax
 1500      0000
 1501              	.LBE358:
 1502              	.LBE363:
 254:fltk-1.3.4-1/src/Fl_Chart.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1503              		.loc 2 254 0
 1504 07b6 448B6B78 		movl	120(%rbx), %r13d
 1505 07ba F20F109B 		movsd	152(%rbx), %xmm3
 1505      98000000 
 1506 07c2 F20F10B3 		movsd	144(%rbx), %xmm6
 1506      90000000 
 1507 07ca 89442420 		movl	%eax, 32(%rsp)
 1508              	.LVL154:
 1509 07ce 8B437C   		movl	124(%rbx), %eax
 1510              	.LBB364:
 1511              	.LBB365:
 1512              	.LBB366:
  83:fltk-1.3.4-1/src/Fl_Chart.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 1513              		.loc 2 83 0
 1514 07d1 4585ED   		testl	%r13d, %r13d
 1515              	.LBE366:
 1516              	.LBE365:
 1517              	.LBE364:
 254:fltk-1.3.4-1/src/Fl_Chart.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1518              		.loc 2 254 0
 1519 07d4 F20F115C 		movsd	%xmm3, 16(%rsp)
 1519      2410
 1520 07da F20F1174 		movsd	%xmm6, 8(%rsp)
 1520      2408
 1521 07e0 89442440 		movl	%eax, 64(%rsp)
 1522 07e4 0FB683A0 		movzbl	160(%rbx), %eax
 1522      000000
 1523 07eb 8844243C 		movb	%al, 60(%rsp)
 1524              	.LVL155:
 1525 07ef 488B8388 		movq	136(%rbx), %rax
 1525      000000
 1526              	.LVL156:
 1527 07f6 48894424 		movq	%rax, 40(%rsp)
 1527      28
 1528              	.LBB389:
 1529              	.LBB384:
 1530              	.LBB369:
  83:fltk-1.3.4-1/src/Fl_Chart.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 1531              		.loc 2 83 0
 1532 07fb 0F8E0D05 		jle	.L102
 1532      0000
 1533 0801 418D55FF 		leal	-1(%r13), %edx
 1534 0805 660FEFE4 		pxor	%xmm4, %xmm4
 1535 0809 4C8D7808 		leaq	8(%rax), %r15
 1536 080d 488D0C95 		leaq	0(,%rdx,4), %rcx
 1536      00000000 
 1537 0815 48C1E205 		salq	$5, %rdx
 1538 0819 F20F1164 		movsd	%xmm4, 24(%rsp)
 1538      2418
 1539 081f 660F28CC 		movapd	%xmm4, %xmm1
 1540 0823 4829CA   		subq	%rcx, %rdx
 1541 0826 4C8D6410 		leaq	36(%rax,%rdx), %r12
 1541      24
 1542              	.LVL157:
 1543 082b 0F1F4400 		.p2align 4,,10
 1543      00
 1544              		.p2align 3
 1545              	.L66:
 1546              	.LBB367:
  84:fltk-1.3.4-1/src/Fl_Chart.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 1547              		.loc 2 84 0
 1548 0830 4C89FF   		movq	%r15, %rdi
 1549 0833 F20F110C 		movsd	%xmm1, (%rsp)
 1549      24
 1550              	.LVL158:
 1551 0838 4983C71C 		addq	$28, %r15
 1552 083c E8000000 		call	_Z8fl_widthPKc
 1552      00
 1553              	.LVL159:
  85:fltk-1.3.4-1/src/Fl_Chart.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 1554              		.loc 2 85 0
 1555 0841 F20F100C 		movsd	(%rsp), %xmm1
 1555      24
 1556              	.LBE367:
  83:fltk-1.3.4-1/src/Fl_Chart.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 1557              		.loc 2 83 0
 1558 0846 4D39E7   		cmpq	%r12, %r15
 1559              	.LBB368:
  85:fltk-1.3.4-1/src/Fl_Chart.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 1560              		.loc 2 85 0
 1561 0849 F20F5FC1 		maxsd	%xmm1, %xmm0
 1562              	.LVL160:
 1563 084d 660F28C8 		movapd	%xmm0, %xmm1
 1564              	.LVL161:
 1565              	.LBE368:
  83:fltk-1.3.4-1/src/Fl_Chart.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 1566              		.loc 2 83 0
 1567 0851 75DD     		jne	.L66
 1568              	.LBE369:
  87:fltk-1.3.4-1/src/Fl_Chart.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 1569              		.loc 2 87 0
 1570 0853 660F2E44 		ucomisd	24(%rsp), %xmm0
 1570      2418
 1571 0859 7608     		jbe	.L64
 1572 085b F20F580D 		addsd	.LC15(%rip), %xmm1
 1572      00000000 
 1573              	.LVL162:
 1574              	.L64:
  90:fltk-1.3.4-1/src/Fl_Chart.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 1575              		.loc 2 90 0
 1576 0863 F20F105C 		movsd	16(%rsp), %xmm3
 1576      2410
 1577 0869 660F2E5C 		ucomisd	8(%rsp), %xmm3
 1577      2408
 1578 086f 0F8AF303 		jp	.L68
 1578      0000
 1579 0875 0F85ED03 		jne	.L68
 1579      0000
 1580 087b 660FEFD2 		pxor	%xmm2, %xmm2
 1581 087f F20F2A54 		cvtsi2sd	48(%rsp), %xmm2
 1581      2430
 1582 0885 F20F1114 		movsd	%xmm2, (%rsp)
 1582      24
 1583              	.LVL163:
 1584              	.L70:
  92:fltk-1.3.4-1/src/Fl_Chart.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 1585              		.loc 2 92 0
 1586 088a F20F1005 		movsd	.LC14(%rip), %xmm0
 1586      00000000 
 1587 0892 F20F105C 		movsd	8(%rsp), %xmm3
 1587      2408
 1588 0898 F20F1024 		movsd	(%rsp), %xmm4
 1588      24
 1589 089d 660F57C3 		xorpd	%xmm3, %xmm0
 1590 08a1 F20F59C4 		mulsd	%xmm4, %xmm0
 1591 08a5 660F2EC8 		ucomisd	%xmm0, %xmm1
 1592 08a9 0F86F103 		jbe	.L146
 1592      0000
  93:fltk-1.3.4-1/src/Fl_Chart.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1593              		.loc 2 93 0
 1594 08af 660F28C4 		movapd	%xmm4, %xmm0
 1595 08b3 F20F5CD1 		subsd	%xmm1, %xmm2
 1596 08b7 F20F59C3 		mulsd	%xmm3, %xmm0
 1597 08bb F20F58D0 		addsd	%xmm0, %xmm2
 1598 08bf F20F1044 		movsd	16(%rsp), %xmm0
 1598      2410
 1599 08c5 F20F5CC3 		subsd	%xmm3, %xmm0
 1600 08c9 F20F5ED0 		divsd	%xmm0, %xmm2
  94:fltk-1.3.4-1/src/Fl_Chart.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 1601              		.loc 2 94 0
 1602 08cd 660F28C1 		movapd	%xmm1, %xmm0
  93:fltk-1.3.4-1/src/Fl_Chart.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1603              		.loc 2 93 0
 1604 08d1 F20F1114 		movsd	%xmm2, (%rsp)
 1604      24
 1605              	.LVL164:
  94:fltk-1.3.4-1/src/Fl_Chart.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 1606              		.loc 2 94 0
 1607 08d6 E8000000 		call	rint
 1607      00
 1608              	.LVL165:
 1609 08db F2440F2C 		cvttsd2si	%xmm0, %r12d
 1609      E0
 1610 08e0 44036424 		addl	56(%rsp), %r12d
 1610      38
 1611 08e5 44896424 		movl	%r12d, 56(%rsp)
 1611      38
 1612              	.LVL166:
 1613              	.L73:
  98:fltk-1.3.4-1/src/Fl_Chart.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1614              		.loc 2 98 0
 1615 08ea 807C243C 		cmpb	$0, 60(%rsp)
 1615      00
 1616 08ef 660FEFC0 		pxor	%xmm0, %xmm0
 1617 08f3 660FEFC9 		pxor	%xmm1, %xmm1
 1618 08f7 F2410F2A 		cvtsi2sd	%r14d, %xmm0
 1618      C6
 1619 08fc 0F848E03 		je	.L74
 1619      0000
 1620 0902 F2410F2A 		cvtsi2sd	%r13d, %xmm1
 1620      CD
 1621              	.L75:
 1622 0907 F20F5EC1 		divsd	%xmm1, %xmm0
 1623 090b E8000000 		call	rint
 1623      00
 1624              	.LVL167:
 1625              	.LBB370:
 1626              	.LBB371:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1627              		.loc 3 52 0
 1628 0910 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1628      000000
 1629              	.LBE371:
 1630              	.LBE370:
  98:fltk-1.3.4-1/src/Fl_Chart.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1631              		.loc 2 98 0
 1632 0917 F20F1144 		movsd	%xmm0, 48(%rsp)
 1632      2430
 1633              	.LVL168:
 1634              	.LBB373:
 1635              	.LBB372:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1636              		.loc 3 52 0
 1637 091d 8B742420 		movl	32(%rsp), %esi
 1638 0921 488B07   		movq	(%rdi), %rax
 1639 0924 FF908800 		call	*136(%rax)
 1639      0000
 1640              	.LVL169:
 1641              	.LBE372:
 1642              	.LBE373:
 1643              	.LBB374:
 1644              	.LBB375:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1645              		.loc 3 223 0
 1646 092a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1646      000000
 1647 0931 8B742438 		movl	56(%rsp), %esi
 1648 0935 89EA     		movl	%ebp, %edx
 1649 0937 468D4435 		leal	0(%rbp,%r14), %r8d
 1649      00
 1650              	.LVL170:
 1651 093c 488B07   		movq	(%rdi), %rax
 1652 093f 89F1     		movl	%esi, %ecx
 1653 0941 FF5060   		call	*96(%rax)
 1654              	.LVL171:
 1655              	.LBE375:
 1656              	.LBE374:
 102:fltk-1.3.4-1/src/Fl_Chart.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 1657              		.loc 2 102 0
 1658 0944 F20F107C 		movsd	8(%rsp), %xmm7
 1658      2408
 1659 094a BA000000 		movl	$0, %edx
 1659      00
 1660 094f F20F1074 		movsd	24(%rsp), %xmm6
 1660      2418
 1661 0955 660F2EFE 		ucomisd	%xmm6, %xmm7
 1662 0959 0F9BC0   		setnp	%al
 1663 095c 0F45C2   		cmovne	%edx, %eax
 1664 095f 84C0     		testb	%al, %al
 1665 0961 7418     		je	.L113
 1666 0963 F20F107C 		movsd	16(%rsp), %xmm7
 1666      2410
 1667 0969 660F2EFE 		ucomisd	%xmm6, %xmm7
 1668 096d 0F9BC0   		setnp	%al
 1669 0970 0F45C2   		cmovne	%edx, %eax
 1670 0973 84C0     		testb	%al, %al
 1671 0975 0F8511F8 		jne	.L56
 1671      FFFF
 1672              	.L113:
 1673              	.LVL172:
 1674              	.LBB376:
 104:fltk-1.3.4-1/src/Fl_Chart.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1675              		.loc 2 104 0
 1676 097b 4585ED   		testl	%r13d, %r13d
 1677 097e 0F8EEC03 		jle	.L77
 1677      0000
 1678 0984 418D45FF 		leal	-1(%r13), %eax
 1679 0988 488B4C24 		movq	40(%rsp), %rcx
 1679      28
 1680              	.LBE376:
  98:fltk-1.3.4-1/src/Fl_Chart.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1681              		.loc 2 98 0
 1682 098d F2440F2C 		cvttsd2si	48(%rsp), %r15d
 1682      7C2430
 1683 0994 4189EE   		movl	%ebp, %r14d
 1684              	.LVL173:
 1685              	.LBB379:
 1686              	.LBB377:
 109:fltk-1.3.4-1/src/Fl_Chart.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1687              		.loc 2 109 0
 1688 0997 896C2410 		movl	%ebp, 16(%rsp)
 1689              	.LVL174:
 1690 099b 48895C24 		movq	%rbx, 24(%rsp)
 1690      18
 1691 09a0 488D1485 		leaq	0(,%rax,4), %rdx
 1691      00000000 
 1692 09a8 48C1E005 		salq	$5, %rax
 1693 09ac 8B5C2438 		movl	56(%rsp), %ebx
 1694              	.LVL175:
 1695 09b0 4C8D6104 		leaq	4(%rcx), %r12
 1696 09b4 4829D0   		subq	%rdx, %rax
 1697 09b7 48894424 		movq	%rax, 8(%rsp)
 1697      08
 1698              	.LVL176:
 1699 09bc 4C8D6C01 		leaq	32(%rcx,%rax), %r13
 1699      20
 1700              	.LVL177:
 1701 09c1 418D4701 		leal	1(%r15), %eax
 1702 09c5 4C89E5   		movq	%r12, %rbp
 1703              	.LVL178:
 1704 09c8 4189C4   		movl	%eax, %r12d
 1705 09cb EB27     		jmp	.L81
 1706              	.LVL179:
 1707 09cd 0F1F00   		.p2align 4,,10
 1708              		.p2align 3
 1709              	.L163:
 107:fltk-1.3.4-1/src/Fl_Chart.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 1710              		.loc 2 107 0
 1711 09d0 448B4500 		movl	0(%rbp), %r8d
 1712 09d4 8D5001   		leal	1(%rax), %edx
 1713 09d7 4489E1   		movl	%r12d, %ecx
 1714 09da 4489F6   		movl	%r14d, %esi
 1715 09dd 89DF     		movl	%ebx, %edi
 1716 09df E8000000 		call	_Z12fl_rectboundiiiij
 1716      00
 1717              	.LVL180:
 1718              	.L79:
 1719 09e4 4883C51C 		addq	$28, %rbp
 1720 09e8 4501FE   		addl	%r15d, %r14d
 1721              	.LBE377:
 104:fltk-1.3.4-1/src/Fl_Chart.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1722              		.loc 2 104 0
 1723 09eb 4C39ED   		cmpq	%r13, %rbp
 1724 09ee 0F849401 		je	.L162
 1724      0000
 1725              	.L81:
 1726              	.LBB378:
 105:fltk-1.3.4-1/src/Fl_Chart.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 1727              		.loc 2 105 0
 1728 09f4 660FEFC0 		pxor	%xmm0, %xmm0
 1729 09f8 F30F5A45 		cvtss2sd	-4(%rbp), %xmm0
 1729      FC
 1730 09fd F20F5904 		mulsd	(%rsp), %xmm0
 1730      24
 1731 0a02 E8000000 		call	rint
 1731      00
 1732              	.LVL181:
 1733 0a07 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1734              	.LVL182:
 106:fltk-1.3.4-1/src/Fl_Chart.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1735              		.loc 2 106 0
 1736 0a0b 83F800   		cmpl	$0, %eax
 1737 0a0e 7FC0     		jg	.L163
 108:fltk-1.3.4-1/src/Fl_Chart.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 1738              		.loc 2 108 0
 1739 0a10 74D2     		je	.L79
 109:fltk-1.3.4-1/src/Fl_Chart.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1740              		.loc 2 109 0
 1741 0a12 448B4500 		movl	0(%rbp), %r8d
 1742 0a16 BA010000 		movl	$1, %edx
 1742      00
 1743 0a1b 8D3C03   		leal	(%rbx,%rax), %edi
 1744 0a1e 29C2     		subl	%eax, %edx
 1745 0a20 4489E1   		movl	%r12d, %ecx
 1746 0a23 4489F6   		movl	%r14d, %esi
 1747 0a26 E8000000 		call	_Z12fl_rectboundiiiij
 1747      00
 1748              	.LVL183:
 1749 0a2b EBB7     		jmp	.L79
 1750              	.LVL184:
 1751 0a2d 0F1F00   		.p2align 4,,10
 1752              		.p2align 3
 1753              	.L47:
 1754              	.LBE378:
 1755              	.LBE379:
 1756              	.LBE384:
 1757              	.LBE389:
 1758              	.LBB390:
 1759              	.LBB359:
  44:fltk-1.3.4-1/src/Fl_Chart.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 1760              		.loc 2 44 0
 1761 0a30 660FEFE4 		pxor	%xmm4, %xmm4
 1762 0a34 660F28C3 		movapd	%xmm3, %xmm0
 1763 0a38 F2410F2A 		cvtsi2sd	%r13d, %xmm4
 1763      E5
 1764 0a3d F20F5CC2 		subsd	%xmm2, %xmm0
 1765 0a41 660F28F4 		movapd	%xmm4, %xmm6
 1766 0a45 F20F5EF0 		divsd	%xmm0, %xmm6
 1767 0a49 F20F1134 		movsd	%xmm6, (%rsp)
 1767      24
 1768              	.LVL185:
 1769 0a4e E942FBFF 		jmp	.L49
 1769      FF
 1770              	.LVL186:
 1771              		.p2align 4,,10
 1772 0a53 0F1F4400 		.p2align 3
 1772      00
 1773              	.L83:
 1774              	.LBE359:
 1775              	.LBE390:
 1776              	.LBB391:
 1777              	.LBB333:
 130:fltk-1.3.4-1/src/Fl_Chart.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 1778              		.loc 2 130 0
 1779 0a58 660FEFDB 		pxor	%xmm3, %xmm3
 1780 0a5c F20F5CC8 		subsd	%xmm0, %xmm1
 1781 0a60 660F28E2 		movapd	%xmm2, %xmm4
 1782 0a64 F2410F2A 		cvtsi2sd	%r13d, %xmm3
 1782      DD
 1783 0a69 F20F58E2 		addsd	%xmm2, %xmm4
 1784 0a6d F20F5CDC 		subsd	%xmm4, %xmm3
 1785 0a71 F20F5ED9 		divsd	%xmm1, %xmm3
 1786 0a75 F20F115C 		movsd	%xmm3, 8(%rsp)
 1786      2408
 1787              	.LVL187:
 1788 0a7b E9DAF7FF 		jmp	.L85
 1788      FF
 1789              	.LVL188:
 1790              		.p2align 4,,10
 1791              		.p2align 3
 1792              	.L158:
 1793              	.LBB327:
 1794              	.LBB313:
 1795              	.LBB309:
 1796              	.LBB301:
 1797              	.LBB297:
 1798              	.LBB291:
 1799              	.LBB276:
 1800              	.LBB277:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1801              		.loc 3 52 0
 1802 0a80 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1802      000000
 1803 0a87 418B7424 		movl	-24(%r12), %esi
 1803      E8
 1804 0a8c 488B07   		movq	(%rdi), %rax
 1805 0a8f FF908800 		call	*136(%rax)
 1805      0000
 1806              	.LVL189:
 1807              	.LBE277:
 1808              	.LBE276:
 1809              	.LBB278:
 147:fltk-1.3.4-1/src/Fl_Chart.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1810              		.loc 2 147 0
 1811 0a95 660FEFFF 		pxor	%xmm7, %xmm7
 1812 0a99 F3410F10 		movss	-28(%r12), %xmm0
 1812      4424E4
 1813 0aa0 F3410F10 		movss	(%r12), %xmm1
 1813      0C24
 1814 0aa6 0F2EC7   		ucomiss	%xmm7, %xmm0
 1815 0aa9 0F97C2   		seta	%dl
 1816 0aac 0F2ECF   		ucomiss	%xmm7, %xmm1
 1817 0aaf 0F97C0   		seta	%al
 1818 0ab2 38C2     		cmpb	%al, %dl
 1819 0ab4 0F845601 		je	.L94
 1819      0000
 1820              	.LVL190:
 1821              	.LBB279:
 149:fltk-1.3.4-1/src/Fl_Chart.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 1822              		.loc 2 149 0
 1823 0aba 0F28E0   		movaps	%xmm0, %xmm4
 1824 0abd F30F5CE1 		subss	%xmm1, %xmm4
 1825 0ac1 F30F5EC4 		divss	%xmm4, %xmm0
 1826              	.LVL191:
 1827 0ac5 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 1828              	.LVL192:
 1829 0ac9 F20F5844 		addsd	40(%rsp), %xmm0
 1829      2428
 1830              	.LVL193:
 1831 0acf F20F5904 		mulsd	(%rsp), %xmm0
 1831      24
 1832 0ad4 E8000000 		call	rint
 1832      00
 1833              	.LVL194:
 1834 0ad9 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1835              	.LBB280:
 1836              	.LBB281:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1837              		.loc 3 244 0
 1838 0add 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1838      000000
 1839 0ae4 4883EC08 		subq	$8, %rsp
 1840              		.cfi_def_cfa_offset 152
 1841              	.LVL195:
 1842 0ae8 4489EA   		movl	%r13d, %edx
 1843 0aeb 4C8B17   		movq	(%rdi), %r10
 1844              	.LBE281:
 1845              	.LBE280:
 149:fltk-1.3.4-1/src/Fl_Chart.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 1846              		.loc 2 149 0
 1847 0aee 03442440 		addl	64(%rsp), %eax
 1848              	.LVL196:
 1849              	.LBB283:
 1850              	.LBB282:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1851              		.loc 3 244 0
 1852 0af2 4155     		pushq	%r13
 1853              		.cfi_def_cfa_offset 160
 1854 0af4 8B742428 		movl	40(%rsp), %esi
 1855 0af8 448B4424 		movl	32(%rsp), %r8d
 1855      20
 1856 0afd 89442438 		movl	%eax, 56(%rsp)
 1857 0b01 4189C1   		movl	%eax, %r9d
 1858 0b04 89F1     		movl	%esi, %ecx
 1859 0b06 41FF92B0 		call	*176(%r10)
 1859      000000
 1860              	.LVL197:
 1861              	.LBE282:
 1862              	.LBE283:
 1863              	.LBB284:
 1864              	.LBB285:
 1865 0b0d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1865      000000
 1866 0b14 8B442438 		movl	56(%rsp), %eax
 1867 0b18 4489F1   		movl	%r14d, %ecx
 1868 0b1b 4589F1   		movl	%r14d, %r9d
 1869 0b1e 4189D8   		movl	%ebx, %r8d
 1870 0b21 4489EA   		movl	%r13d, %edx
 1871 0b24 4C8B17   		movq	(%rdi), %r10
 1872 0b27 89C6     		movl	%eax, %esi
 1873 0b29 44892C24 		movl	%r13d, (%rsp)
 1874 0b2d 41FF92B0 		call	*176(%r10)
 1874      000000
 1875              	.LVL198:
 1876 0b34 59       		popq	%rcx
 1877              		.cfi_def_cfa_offset 152
 1878 0b35 5E       		popq	%rsi
 1879              		.cfi_def_cfa_offset 144
 1880              	.LVL199:
 1881              	.L95:
 1882              	.LBE285:
 1883              	.LBE284:
 1884              	.LBE279:
 1885              	.LBE278:
 1886              	.LBB288:
 1887              	.LBB271:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1888              		.loc 3 52 0
 1889 0b36 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1889      000000
 1890 0b3d 8B74243C 		movl	60(%rsp), %esi
 1891 0b41 488B07   		movq	(%rdi), %rax
 1892 0b44 E9C6F8FF 		jmp	.L151
 1892      FF
 1893              	.LVL200:
 1894 0b49 0F1F8000 		.p2align 4,,10
 1894      000000
 1895              		.p2align 3
 1896              	.L160:
 1897              	.LBE271:
 1898              	.LBE288:
 1899              	.LBE291:
 1900              	.LBE297:
 1901              	.LBE301:
 1902              	.LBB302:
 1903              	.LBB303:
 1904 0b50 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1904      000000
 1905 0b57 418B7424 		movl	4(%r12), %esi
 1905      04
 1906 0b5c 488B07   		movq	(%rdi), %rax
 1907 0b5f FF908800 		call	*136(%rax)
 1907      0000
 1908              	.LVL201:
 1909              	.LBE303:
 1910              	.LBE302:
 1911              	.LBB304:
 1912              	.LBB305:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1913              		.loc 3 223 0
 1914 0b65 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1914      000000
 1915 0b6c 4189D8   		movl	%ebx, %r8d
 1916 0b6f 4489F1   		movl	%r14d, %ecx
 1917 0b72 4489EA   		movl	%r13d, %edx
 1918 0b75 4489F6   		movl	%r14d, %esi
 1919 0b78 488B07   		movq	(%rdi), %rax
 1920 0b7b FF5060   		call	*96(%rax)
 1921              	.LVL202:
 1922 0b7e E9A3F7FF 		jmp	.L92
 1922      FF
 1923              	.LVL203:
 1924              		.p2align 4,,10
 1925 0b83 0F1F4400 		.p2align 3
 1925      00
 1926              	.L162:
 1927              	.LBE305:
 1928              	.LBE304:
 1929              	.LBE309:
 1930              	.LBE313:
 1931              	.LBE327:
 1932              	.LBE333:
 1933              	.LBE391:
 1934              	.LBB392:
 1935              	.LBB385:
 1936              	.LBB380:
 1937              	.LBB381:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1938              		.loc 3 52 0
 1939 0b88 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1939      000000
 1940 0b8f 8B6C2410 		movl	16(%rsp), %ebp
 1941 0b93 488B5C24 		movq	24(%rsp), %rbx
 1941      18
 1942              	.LVL204:
 1943 0b98 8B742420 		movl	32(%rsp), %esi
 1944 0b9c 488B07   		movq	(%rdi), %rax
 1945 0b9f FF908800 		call	*136(%rax)
 1945      0000
 1946              	.LVL205:
 1947 0ba5 4489F8   		movl	%r15d, %eax
 1948 0ba8 488B4C24 		movq	40(%rsp), %rcx
 1948      28
 1949 0bad 448B6424 		movl	56(%rsp), %r12d
 1949      38
 1950 0bb2 C1E81F   		shrl	$31, %eax
 1951 0bb5 4401F8   		addl	%r15d, %eax
 1952 0bb8 D1F8     		sarl	%eax
 1953 0bba 4C8D6908 		leaq	8(%rcx), %r13
 1954 0bbe 4183EC02 		subl	$2, %r12d
 1955 0bc2 01C5     		addl	%eax, %ebp
 1956 0bc4 4889C8   		movq	%rcx, %rax
 1957 0bc7 488B4C24 		movq	8(%rsp), %rcx
 1957      08
 1958 0bcc 4C8D7408 		leaq	36(%rax,%rcx), %r14
 1958      24
 1959              	.LVL206:
 1960              		.p2align 4,,10
 1961 0bd1 0F1F8000 		.p2align 3
 1961      000000
 1962              	.L82:
 1963              	.LBE381:
 1964              	.LBE380:
 116:fltk-1.3.4-1/src/Fl_Chart.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1965              		.loc 2 116 0
 1966 0bd8 6A01     		pushq	$1
 1967              		.cfi_def_cfa_offset 152
 1968              	.LVL207:
 1969 0bda 6A00     		pushq	$0
 1970              		.cfi_def_cfa_offset 160
 1971 0bdc 4531C0   		xorl	%r8d, %r8d
 1972 0bdf 31C9     		xorl	%ecx, %ecx
 1973 0be1 89EA     		movl	%ebp, %edx
 1974 0be3 4C89EF   		movq	%r13, %rdi
 1975 0be6 41B90800 		movl	$8, %r9d
 1975      0000
 1976 0bec 4489E6   		movl	%r12d, %esi
 1977 0bef 4983C51C 		addq	$28, %r13
 1978 0bf3 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1978      00
 1979              	.LVL208:
 1980 0bf8 4401FD   		addl	%r15d, %ebp
 113:fltk-1.3.4-1/src/Fl_Chart.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 1981              		.loc 2 113 0
 1982 0bfb 4D39F5   		cmpq	%r14, %r13
 1983 0bfe 415A     		popq	%r10
 1984              		.cfi_def_cfa_offset 152
 1985 0c00 415B     		popq	%r11
 1986              		.cfi_def_cfa_offset 144
 1987              	.LVL209:
 1988 0c02 75D4     		jne	.L82
 1989 0c04 E983F5FF 		jmp	.L56
 1989      FF
 1990              	.LVL210:
 1991 0c09 0F1F8000 		.p2align 4,,10
 1991      000000
 1992              		.p2align 3
 1993              	.L94:
 1994              	.LBE385:
 1995              	.LBE392:
 1996              	.LBB393:
 1997              	.LBB334:
 1998              	.LBB328:
 1999              	.LBB314:
 2000              	.LBB310:
 2001              	.LBB306:
 2002              	.LBB298:
 2003              	.LBB292:
 2004              	.LBB289:
 2005              	.LBB286:
 2006              	.LBB287:
 249:fltk-1.3.4-1/FL/fl_draw.H **** 
 2007              		.loc 3 249 0
 2008 0c10 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2008      000000
 2009 0c17 4883EC08 		subq	$8, %rsp
 2010              		.cfi_def_cfa_offset 152
 2011              	.LVL211:
 2012 0c1b 4589F1   		movl	%r14d, %r9d
 2013 0c1e 4489EA   		movl	%r13d, %edx
 2014 0c21 488B07   		movq	(%rdi), %rax
 2015 0c24 4155     		pushq	%r13
 2016              		.cfi_def_cfa_offset 160
 2017 0c26 4156     		pushq	%r14
 2018              		.cfi_def_cfa_offset 168
 2019 0c28 53       		pushq	%rbx
 2020              		.cfi_def_cfa_offset 176
 2021 0c29 8B742438 		movl	56(%rsp), %esi
 2022 0c2d 448B4424 		movl	48(%rsp), %r8d
 2022      30
 2023 0c32 89F1     		movl	%esi, %ecx
 2024 0c34 FF90B800 		call	*184(%rax)
 2024      0000
 2025              	.LVL212:
 2026 0c3a 4883C420 		addq	$32, %rsp
 2027              		.cfi_def_cfa_offset 144
 2028              	.LVL213:
 2029 0c3e E9F3FEFF 		jmp	.L95
 2029      FF
 2030              	.LVL214:
 2031              		.p2align 4,,10
 2032 0c43 0F1F4400 		.p2align 3
 2032      00
 2033              	.L86:
 2034              	.LBE287:
 2035              	.LBE286:
 2036              	.LBE289:
 2037              	.LBE292:
 2038              	.LBE298:
 2039              	.LBE306:
 2040              	.LBE310:
 2041              	.LBE314:
 2042              	.LBE328:
 132:fltk-1.3.4-1/src/Fl_Chart.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2043              		.loc 2 132 0
 2044 0c48 F2410F2A 		cvtsi2sd	%r12d, %xmm0
 2044      C4
 2045 0c4d E948F6FF 		jmp	.L87
 2045      FF
 2046              	.LVL215:
 2047              		.p2align 4,,10
 2048 0c52 660F1F44 		.p2align 3
 2048      0000
 2049              	.L53:
 2050              	.LBE334:
 2051              	.LBE393:
 2052              	.LBB394:
 2053              	.LBB360:
  51:fltk-1.3.4-1/src/Fl_Chart.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 2054              		.loc 2 51 0
 2055 0c58 F20F2A4C 		cvtsi2sd	32(%rsp), %xmm1
 2055      2420
 2056 0c5e E9A0F9FF 		jmp	.L54
 2056      FF
 2057              	.LVL216:
 2058              		.p2align 4,,10
 2059 0c63 0F1F4400 		.p2align 3
 2059      00
 2060              	.L68:
 2061              	.LBE360:
 2062              	.LBE394:
 2063              	.LBB395:
 2064              	.LBB386:
  91:fltk-1.3.4-1/src/Fl_Chart.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 2065              		.loc 2 91 0
 2066 0c68 F20F1044 		movsd	16(%rsp), %xmm0
 2066      2410
 2067 0c6e 660FEFD2 		pxor	%xmm2, %xmm2
 2068 0c72 F20F5C44 		subsd	8(%rsp), %xmm0
 2068      2408
 2069 0c78 F20F2A54 		cvtsi2sd	48(%rsp), %xmm2
 2069      2430
 2070 0c7e 660F28E2 		movapd	%xmm2, %xmm4
 2071 0c82 F20F5EE0 		divsd	%xmm0, %xmm4
 2072 0c86 F20F1124 		movsd	%xmm4, (%rsp)
 2072      24
 2073              	.LVL217:
 2074 0c8b E9FAFBFF 		jmp	.L70
 2074      FF
 2075              	.LVL218:
 2076              		.p2align 4,,10
 2077              		.p2align 3
 2078              	.L74:
  98:fltk-1.3.4-1/src/Fl_Chart.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2079              		.loc 2 98 0
 2080 0c90 F20F2A4C 		cvtsi2sd	64(%rsp), %xmm1
 2080      2440
 2081 0c96 E96CFCFF 		jmp	.L75
 2081      FF
 2082              	.LVL219:
 2083 0c9b 0F1F4400 		.p2align 4,,10
 2083      00
 2084              		.p2align 3
 2085              	.L146:
  96:fltk-1.3.4-1/src/Fl_Chart.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 2086              		.loc 2 96 0
 2087 0ca0 F20F104C 		movsd	8(%rsp), %xmm1
 2087      2408
 2088              	.LVL220:
 2089 0ca6 660FEFC0 		pxor	%xmm0, %xmm0
 2090 0caa F20F590C 		mulsd	(%rsp), %xmm1
 2090      24
 2091 0caf F20F2A44 		cvtsi2sd	56(%rsp), %xmm0
 2091      2438
 2092 0cb5 F20F5CC1 		subsd	%xmm1, %xmm0
 2093 0cb9 E8000000 		call	rint
 2093      00
 2094              	.LVL221:
 2095 0cbe F20F2CC0 		cvttsd2si	%xmm0, %eax
 2096 0cc2 89442438 		movl	%eax, 56(%rsp)
 2097              	.LVL222:
 2098 0cc6 E91FFCFF 		jmp	.L73
 2098      FF
 2099              	.LVL223:
 2100 0ccb 0F1F4400 		.p2align 4,,10
 2100      00
 2101              		.p2align 3
 2102              	.L145:
 2103              	.LBE386:
 2104              	.LBE395:
 2105              	.LBB396:
 2106              	.LBB361:
  49:fltk-1.3.4-1/src/Fl_Chart.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 2107              		.loc 2 49 0
 2108 0cd0 660FEFC9 		pxor	%xmm1, %xmm1
 2109              	.LVL224:
 2110 0cd4 4401ED   		addl	%r13d, %ebp
 2111              	.LVL225:
 2112 0cd7 F20F1004 		movsd	(%rsp), %xmm0
 2112      24
 2113 0cdc F20F115C 		movsd	%xmm3, 40(%rsp)
 2113      2428
 2114 0ce2 F20F2ACD 		cvtsi2sd	%ebp, %xmm1
 2115 0ce6 F20F59C2 		mulsd	%xmm2, %xmm0
 2116 0cea F20F1154 		movsd	%xmm2, 24(%rsp)
 2116      2418
 2117 0cf0 F20F58C1 		addsd	%xmm1, %xmm0
 2118 0cf4 E8000000 		call	rint
 2118      00
 2119              	.LVL226:
 2120 0cf9 F20F105C 		movsd	40(%rsp), %xmm3
 2120      2428
 2121 0cff F20F2CE8 		cvttsd2si	%xmm0, %ebp
 2122 0d03 F20F1054 		movsd	24(%rsp), %xmm2
 2122      2418
 2123              	.LVL227:
 2124 0d09 E9DAF8FF 		jmp	.L52
 2124      FF
 2125              	.LVL228:
 2126              	.L102:
 2127              	.LBE361:
 2128              	.LBE396:
 2129              	.LBB397:
 2130              	.LBB387:
  81:fltk-1.3.4-1/src/Fl_Chart.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 2131              		.loc 2 81 0
 2132 0d0e 660FEFF6 		pxor	%xmm6, %xmm6
 2133              	.LVL229:
 2134 0d12 F20F1174 		movsd	%xmm6, 24(%rsp)
 2134      2418
 2135 0d18 660F28CE 		movapd	%xmm6, %xmm1
 2136 0d1c E942FBFF 		jmp	.L64
 2136      FF
 2137              	.LVL230:
 2138              	.L157:
 2139              	.LBE387:
 2140              	.LBE397:
 2141              	.LBB398:
 2142              	.LBB335:
 2143              	.LBB329:
 2144              	.LBB320:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2145              		.loc 3 52 0
 2146 0d21 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2146      000000
 2147 0d28 8B74243C 		movl	60(%rsp), %esi
 2148 0d2c 488B07   		movq	(%rdi), %rax
 2149 0d2f FF908800 		call	*136(%rax)
 2149      0000
 2150              	.LVL231:
 2151              	.LBE320:
 2152              	.LBE329:
 2153              	.LBB330:
 2154              	.LBB324:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2155              		.loc 3 223 0
 2156 0d35 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2156      000000
 2157 0d3c 8B4C2430 		movl	48(%rsp), %ecx
 2158 0d40 4589E8   		movl	%r13d, %r8d
 2159 0d43 8B742438 		movl	56(%rsp), %esi
 2160 0d47 4489EA   		movl	%r13d, %edx
 2161 0d4a 488B07   		movq	(%rdi), %rax
 2162 0d4d 01F1     		addl	%esi, %ecx
 2163              	.LVL232:
 2164 0d4f FF5060   		call	*96(%rax)
 2165              	.LVL233:
 2166 0d52 E935F4FF 		jmp	.L56
 2166      FF
 2167              	.LVL234:
 2168              	.L57:
 2169              	.LBE324:
 2170              	.LBE330:
 2171              	.LBE335:
 2172              	.LBE398:
 2173              	.LBB399:
 2174              	.LBB362:
 2175              	.LBB357:
 2176              	.LBB356:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2177              		.loc 3 52 0
 2178 0d57 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2178      000000
 2179 0d5e 8B742408 		movl	8(%rsp), %esi
 2180 0d62 488B07   		movq	(%rdi), %rax
 2181 0d65 FF908800 		call	*136(%rax)
 2181      0000
 2182              	.LVL235:
 2183 0d6b E91CF4FF 		jmp	.L56
 2183      FF
 2184              	.LVL236:
 2185              	.L77:
 2186              	.LBE356:
 2187              	.LBE357:
 2188              	.LBE362:
 2189              	.LBE399:
 2190              	.LBB400:
 2191              	.LBB388:
 2192              	.LBB383:
 2193              	.LBB382:
 2194 0d70 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2194      000000
 2195 0d77 8B742420 		movl	32(%rsp), %esi
 2196 0d7b 488B07   		movq	(%rdi), %rax
 2197 0d7e FF908800 		call	*136(%rax)
 2197      0000
 2198              	.LVL237:
 2199 0d84 E903F4FF 		jmp	.L56
 2199      FF
 2200              	.LVL238:
 2201              	.L104:
 2202              	.LBE382:
 2203              	.LBE383:
 2204              	.LBE388:
 2205              	.LBE400:
 2206              	.LBB401:
 2207              	.LBB336:
 2208              	.LBB331:
 2209              	.LBB315:
 137:fltk-1.3.4-1/src/Fl_Chart.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 2210              		.loc 2 137 0
 2211 0d89 C7442410 		movl	$0, 16(%rsp)
 2211      00000000 
 2212 0d91 E927F6FF 		jmp	.L90
 2212      FF
 2213              	.LBE315:
 2214              	.LBE331:
 2215              	.LBE336:
 2216              	.LBE401:
 2217              		.cfi_endproc
 2218              	.LFE501:
 2220              		.section	.text.unlikely._ZN8Fl_Chart4drawEv
 2221              	.LCOLDE16:
 2222              		.section	.text._ZN8Fl_Chart4drawEv
 2223              	.LHOTE16:
 2224              		.section	.text.unlikely._ZN8Fl_ChartD2Ev,"ax",@progbits
 2225              		.align 2
 2226              	.LCOLDB17:
 2227              		.section	.text._ZN8Fl_ChartD2Ev,"ax",@progbits
 2228              	.LHOTB17:
 2229              		.align 2
 2230              		.p2align 4,,15
 2231              		.globl	_ZN8Fl_ChartD2Ev
 2233              	_ZN8Fl_ChartD2Ev:
 2234              	.LFB506:
 271:fltk-1.3.4-1/src/Fl_Chart.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Chart.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Chart.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Chart.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Chart.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Chart.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Chart.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Chart.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Chart.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Chart.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Chart.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Chart.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Chart.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Chart.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Chart.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Chart.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Chart.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Chart.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Chart.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Chart.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Chart.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Chart.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Chart.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Chart.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Chart.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Chart.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Chart.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Chart.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Chart.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Chart.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Chart.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Chart.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Chart.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 2235              		.loc 2 303 0
 2236              		.cfi_startproc
 2237              	.LVL239:
 2238 0000 53       		pushq	%rbx
 2239              		.cfi_def_cfa_offset 16
 2240              		.cfi_offset 3, -16
 2241              		.loc 2 303 0
 2242 0001 4889FB   		movq	%rdi, %rbx
 2243              	.LBB402:
 2244 0004 48C70700 		movq	$_ZTV8Fl_Chart+16, (%rdi)
 2244      000000
 304:fltk-1.3.4-1/src/Fl_Chart.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 2245              		.loc 2 304 0
 2246 000b 488BBF88 		movq	136(%rdi), %rdi
 2246      000000
 2247              	.LVL240:
 2248 0012 E8000000 		call	free
 2248      00
 2249              	.LVL241:
 303:fltk-1.3.4-1/src/Fl_Chart.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 2250              		.loc 2 303 0
 2251 0017 4889DF   		movq	%rbx, %rdi
 2252              	.LBE402:
 305:fltk-1.3.4-1/src/Fl_Chart.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2253              		.loc 2 305 0
 2254 001a 5B       		popq	%rbx
 2255              		.cfi_def_cfa_offset 8
 2256              	.LVL242:
 2257              	.LBB403:
 303:fltk-1.3.4-1/src/Fl_Chart.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 2258              		.loc 2 303 0
 2259 001b E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 2259      00
 2260              	.LVL243:
 2261              	.LBE403:
 2262              		.cfi_endproc
 2263              	.LFE506:
 2265              		.section	.text.unlikely._ZN8Fl_ChartD2Ev
 2266              	.LCOLDE17:
 2267              		.section	.text._ZN8Fl_ChartD2Ev
 2268              	.LHOTE17:
 2269              		.globl	_ZN8Fl_ChartD1Ev
 2270              		.set	_ZN8Fl_ChartD1Ev,_ZN8Fl_ChartD2Ev
 2271              		.section	.text.unlikely._ZN8Fl_ChartD0Ev,"ax",@progbits
 2272              		.align 2
 2273              	.LCOLDB18:
 2274              		.section	.text._ZN8Fl_ChartD0Ev,"ax",@progbits
 2275              	.LHOTB18:
 2276              		.align 2
 2277              		.p2align 4,,15
 2278              		.globl	_ZN8Fl_ChartD0Ev
 2280              	_ZN8Fl_ChartD0Ev:
 2281              	.LFB508:
 303:fltk-1.3.4-1/src/Fl_Chart.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 2282              		.loc 2 303 0
 2283              		.cfi_startproc
 2284              	.LVL244:
 2285 0000 53       		pushq	%rbx
 2286              		.cfi_def_cfa_offset 16
 2287              		.cfi_offset 3, -16
 303:fltk-1.3.4-1/src/Fl_Chart.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 2288              		.loc 2 303 0
 2289 0001 4889FB   		movq	%rdi, %rbx
 2290              	.LBB404:
 2291              	.LBB405:
 2292 0004 48C70700 		movq	$_ZTV8Fl_Chart+16, (%rdi)
 2292      000000
 304:fltk-1.3.4-1/src/Fl_Chart.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 2293              		.loc 2 304 0
 2294 000b 488BBF88 		movq	136(%rdi), %rdi
 2294      000000
 2295              	.LVL245:
 2296 0012 E8000000 		call	free
 2296      00
 2297              	.LVL246:
 303:fltk-1.3.4-1/src/Fl_Chart.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 2298              		.loc 2 303 0
 2299 0017 4889DF   		movq	%rbx, %rdi
 2300 001a E8000000 		call	_ZN9Fl_WidgetD2Ev
 2300      00
 2301              	.LVL247:
 2302              	.LBE405:
 2303              	.LBE404:
 2304              		.loc 2 305 0
 2305 001f 4889DF   		movq	%rbx, %rdi
 2306 0022 5B       		popq	%rbx
 2307              		.cfi_def_cfa_offset 8
 2308              	.LVL248:
 2309 0023 E9000000 		jmp	_ZdlPv
 2309      00
 2310              	.LVL249:
 2311              		.cfi_endproc
 2312              	.LFE508:
 2314              		.section	.text.unlikely._ZN8Fl_ChartD0Ev
 2315              	.LCOLDE18:
 2316              		.section	.text._ZN8Fl_ChartD0Ev
 2317              	.LHOTE18:
 2318              		.section	.text.unlikely._ZN8Fl_ChartC2EiiiiPKc,"ax",@progbits
 2319              		.align 2
 2320              	.LCOLDB19:
 2321              		.section	.text._ZN8Fl_ChartC2EiiiiPKc,"ax",@progbits
 2322              	.LHOTB19:
 2323              		.align 2
 2324              		.p2align 4,,15
 2325              		.globl	_ZN8Fl_ChartC2EiiiiPKc
 2327              	_ZN8Fl_ChartC2EiiiiPKc:
 2328              	.LFB503:
 285:fltk-1.3.4-1/src/Fl_Chart.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2329              		.loc 2 285 0
 2330              		.cfi_startproc
 2331              	.LVL250:
 2332 0000 53       		pushq	%rbx
 2333              		.cfi_def_cfa_offset 16
 2334              		.cfi_offset 3, -16
 285:fltk-1.3.4-1/src/Fl_Chart.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2335              		.loc 2 285 0
 2336 0001 4889FB   		movq	%rdi, %rbx
 2337              	.LBB406:
 286:fltk-1.3.4-1/src/Fl_Chart.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 2338              		.loc 2 286 0
 2339 0004 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 2339      00
 2340              	.LVL251:
 293:fltk-1.3.4-1/src/Fl_Chart.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2341              		.loc 2 293 0
 2342 0009 660FEFC0 		pxor	%xmm0, %xmm0
 286:fltk-1.3.4-1/src/Fl_Chart.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 2343              		.loc 2 286 0
 2344 000d 48C70300 		movq	$_ZTV8Fl_Chart+16, (%rbx)
 2344      000000
 2345              	.LVL252:
 2346              	.LBB407:
 2347              	.LBB408:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2348              		.loc 1 372 0
 2349 0014 C6436E0E 		movb	$14, 110(%rbx)
 2350              	.LVL253:
 2351              	.LBE408:
 2352              	.LBE407:
 2353              	.LBB409:
 2354              	.LBB410:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2355              		.loc 1 357 0
 2356 0018 C7435402 		movl	$2, 84(%rbx)
 2356      000000
 2357              	.LVL254:
 2358              	.LBE410:
 2359              	.LBE409:
 297:fltk-1.3.4-1/src/Fl_Chart.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 2360              		.loc 2 297 0
 2361 001f BE810000 		movl	$129, %esi
 2361      00
 289:fltk-1.3.4-1/src/Fl_Chart.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2362              		.loc 2 289 0
 2363 0024 C7437800 		movl	$0, 120(%rbx)
 2363      000000
 290:fltk-1.3.4-1/src/Fl_Chart.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 2364              		.loc 2 290 0
 2365 002b C7437C00 		movl	$0, 124(%rbx)
 2365      000000
 297:fltk-1.3.4-1/src/Fl_Chart.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 2366              		.loc 2 297 0
 2367 0032 BF1C0000 		movl	$28, %edi
 2367      00
 293:fltk-1.3.4-1/src/Fl_Chart.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2368              		.loc 2 293 0
 2369 0037 F20F1183 		movsd	%xmm0, 152(%rbx)
 2369      98000000 
 291:fltk-1.3.4-1/src/Fl_Chart.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2370              		.loc 2 291 0
 2371 003f C7838000 		movl	$128, 128(%rbx)
 2371      00008000 
 2371      0000
 292:fltk-1.3.4-1/src/Fl_Chart.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 2372              		.loc 2 292 0
 2373 0049 C683A000 		movb	$1, 160(%rbx)
 2373      000001
 293:fltk-1.3.4-1/src/Fl_Chart.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 2374              		.loc 2 293 0
 2375 0050 F20F1183 		movsd	%xmm0, 144(%rbx)
 2375      90000000 
 294:fltk-1.3.4-1/src/Fl_Chart.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2376              		.loc 2 294 0
 2377 0058 C783A400 		movl	$0, 164(%rbx)
 2377      00000000 
 2377      0000
 295:fltk-1.3.4-1/src/Fl_Chart.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 2378              		.loc 2 295 0
 2379 0062 C783A800 		movl	$10, 168(%rbx)
 2379      00000A00 
 2379      0000
 296:fltk-1.3.4-1/src/Fl_Chart.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2380              		.loc 2 296 0
 2381 006c C783AC00 		movl	$0, 172(%rbx)
 2381      00000000 
 2381      0000
 297:fltk-1.3.4-1/src/Fl_Chart.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 2382              		.loc 2 297 0
 2383 0076 E8000000 		call	calloc
 2383      00
 2384              	.LVL255:
 2385 007b 48898388 		movq	%rax, 136(%rbx)
 2385      000000
 2386              	.LBE406:
 298:fltk-1.3.4-1/src/Fl_Chart.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 2387              		.loc 2 298 0
 2388 0082 5B       		popq	%rbx
 2389              		.cfi_def_cfa_offset 8
 2390              	.LVL256:
 2391 0083 C3       		ret
 2392              		.cfi_endproc
 2393              	.LFE503:
 2395              		.section	.text.unlikely._ZN8Fl_ChartC2EiiiiPKc
 2396              	.LCOLDE19:
 2397              		.section	.text._ZN8Fl_ChartC2EiiiiPKc
 2398              	.LHOTE19:
 2399              		.globl	_ZN8Fl_ChartC1EiiiiPKc
 2400              		.set	_ZN8Fl_ChartC1EiiiiPKc,_ZN8Fl_ChartC2EiiiiPKc
 2401              		.section	.text.unlikely._ZN8Fl_Chart5clearEv,"ax",@progbits
 2402              		.align 2
 2403              	.LCOLDB20:
 2404              		.section	.text._ZN8Fl_Chart5clearEv,"ax",@progbits
 2405              	.LHOTB20:
 2406              		.align 2
 2407              		.p2align 4,,15
 2408              		.globl	_ZN8Fl_Chart5clearEv
 2410              	_ZN8Fl_Chart5clearEv:
 2411              	.LFB509:
 306:fltk-1.3.4-1/src/Fl_Chart.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Chart.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Chart.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Chart.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Chart.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2412              		.loc 2 310 0
 2413              		.cfi_startproc
 2414              	.LVL257:
 311:fltk-1.3.4-1/src/Fl_Chart.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Chart.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2415              		.loc 2 312 0
 2416 0000 660FEFC0 		pxor	%xmm0, %xmm0
 311:fltk-1.3.4-1/src/Fl_Chart.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 2417              		.loc 2 311 0
 2418 0004 C7477800 		movl	$0, 120(%rdi)
 2418      000000
 2419              		.loc 2 312 0
 2420 000b F20F1187 		movsd	%xmm0, 152(%rdi)
 2420      98000000 
 2421 0013 F20F1187 		movsd	%xmm0, 144(%rdi)
 2421      90000000 
 313:fltk-1.3.4-1/src/Fl_Chart.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 2422              		.loc 2 313 0
 2423 001b E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2423      00
 2424              	.LVL258:
 2425              		.cfi_endproc
 2426              	.LFE509:
 2428              		.section	.text.unlikely._ZN8Fl_Chart5clearEv
 2429              	.LCOLDE20:
 2430              		.section	.text._ZN8Fl_Chart5clearEv
 2431              	.LHOTE20:
 2432              		.section	.text.unlikely._ZN8Fl_Chart3addEdPKcj,"ax",@progbits
 2433              		.align 2
 2434              	.LCOLDB21:
 2435              		.section	.text._ZN8Fl_Chart3addEdPKcj,"ax",@progbits
 2436              	.LHOTB21:
 2437              		.align 2
 2438              		.p2align 4,,15
 2439              		.globl	_ZN8Fl_Chart3addEdPKcj
 2441              	_ZN8Fl_Chart3addEdPKcj:
 2442              	.LFB510:
 314:fltk-1.3.4-1/src/Fl_Chart.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Chart.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Chart.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Chart.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Chart.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Chart.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Chart.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Chart.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Chart.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Chart.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 2443              		.loc 2 323 0
 2444              		.cfi_startproc
 2445              	.LVL259:
 2446 0000 4154     		pushq	%r12
 2447              		.cfi_def_cfa_offset 16
 2448              		.cfi_offset 12, -16
 2449 0002 55       		pushq	%rbp
 2450              		.cfi_def_cfa_offset 24
 2451              		.cfi_offset 6, -24
 2452 0003 4189D4   		movl	%edx, %r12d
 2453 0006 53       		pushq	%rbx
 2454              		.cfi_def_cfa_offset 32
 2455              		.cfi_offset 3, -32
 2456 0007 4889F5   		movq	%rsi, %rbp
 2457 000a 4889FB   		movq	%rdi, %rbx
 2458 000d 4883EC10 		subq	$16, %rsp
 2459              		.cfi_def_cfa_offset 48
 324:fltk-1.3.4-1/src/Fl_Chart.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Chart.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2460              		.loc 2 325 0
 2461 0011 8B5778   		movl	120(%rdi), %edx
 2462              	.LVL260:
 2463 0014 8B878000 		movl	128(%rdi), %eax
 2463      0000
 2464 001a 39C2     		cmpl	%eax, %edx
 2465 001c 0F8DEE00 		jge	.L172
 2465      0000
 2466 0022 488BBF88 		movq	136(%rdi), %rdi
 2466      000000
 2467              	.LVL261:
 2468              	.L173:
 326:fltk-1.3.4-1/src/Fl_Chart.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Chart.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Chart.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Chart.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Chart.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 2469              		.loc 2 330 0
 2470 0029 8B437C   		movl	124(%rbx), %eax
 2471 002c 85C0     		testl	%eax, %eax
 2472 002e 7E3E     		jle	.L174
 2473 0030 39D0     		cmpl	%edx, %eax
 2474 0032 7F3A     		jg	.L174
 2475              	.LBB411:
 2476              	.LBB412:
 2477              		.file 4 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 2478              		.loc 4 59 0
 2479 0034 83EA01   		subl	$1, %edx
 2480 0037 488D771C 		leaq	28(%rdi), %rsi
 2481 003b F20F1144 		movsd	%xmm0, 8(%rsp)
 2481      2408
 2482              	.LVL262:
 2483 0041 4863D2   		movslq	%edx, %rdx
 2484 0044 488D0495 		leaq	0(,%rdx,4), %rax
 2484      00000000 
 2485 004c 48C1E205 		salq	$5, %rdx
 2486 0050 4829C2   		subq	%rax, %rdx
 2487 0053 E8000000 		call	memmove
 2487      00
 2488              	.LVL263:
 2489              	.LBE412:
 2490              	.LBE411:
 331:fltk-1.3.4-1/src/Fl_Chart.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Chart.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2491              		.loc 2 332 0
 2492 0058 8B4378   		movl	120(%rbx), %eax
 2493 005b 488BBB88 		movq	136(%rbx), %rdi
 2493      000000
 2494 0062 F20F1044 		movsd	8(%rsp), %xmm0
 2494      2408
 2495 0068 8D50FF   		leal	-1(%rax), %edx
 2496 006b 895378   		movl	%edx, 120(%rbx)
 2497              	.L174:
 333:fltk-1.3.4-1/src/Fl_Chart.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Chart.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 2498              		.loc 2 334 0
 2499 006e 660FEFC9 		pxor	%xmm1, %xmm1
 2500 0072 4863D2   		movslq	%edx, %rdx
 2501 0075 488D0495 		leaq	0(,%rdx,4), %rax
 2501      00000000 
 2502 007d 48C1E205 		salq	$5, %rdx
 2503 0081 F20F5AC8 		cvtsd2ss	%xmm0, %xmm1
 2504 0085 4829C2   		subq	%rax, %rdx
 2505 0088 F30F110C 		movss	%xmm1, (%rdi,%rdx)
 2505      17
 335:fltk-1.3.4-1/src/Fl_Chart.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 2506              		.loc 2 335 0
 2507 008d 48634378 		movslq	120(%rbx), %rax
 2508 0091 488D1485 		leaq	0(,%rax,4), %rdx
 2508      00000000 
 2509 0099 48C1E005 		salq	$5, %rax
 2510 009d 4829D0   		subq	%rdx, %rax
 2511 00a0 48038388 		addq	136(%rbx), %rax
 2511      000000
 336:fltk-1.3.4-1/src/Fl_Chart.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2512              		.loc 2 336 0
 2513 00a7 4885ED   		testq	%rbp, %rbp
 335:fltk-1.3.4-1/src/Fl_Chart.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 2514              		.loc 2 335 0
 2515 00aa 44896004 		movl	%r12d, 4(%rax)
 2516              		.loc 2 336 0
 2517 00ae 7440     		je	.L175
 337:fltk-1.3.4-1/src/Fl_Chart.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 2518              		.loc 2 337 0
 2519 00b0 48637B78 		movslq	120(%rbx), %rdi
 2520 00b4 BA130000 		movl	$19, %edx
 2520      00
 2521 00b9 4889EE   		movq	%rbp, %rsi
 2522 00bc 488D04BD 		leaq	0(,%rdi,4), %rax
 2522      00000000 
 2523 00c4 48C1E705 		salq	$5, %rdi
 2524 00c8 4829C7   		subq	%rax, %rdi
 2525 00cb 4803BB88 		addq	136(%rbx), %rdi
 2525      000000
 2526 00d2 4883C708 		addq	$8, %rdi
 2527 00d6 E8000000 		call	fl_strlcpy
 2527      00
 2528              	.LVL264:
 2529              	.L176:
 338:fltk-1.3.4-1/src/Fl_Chart.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Chart.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Chart.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Chart.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2530              		.loc 2 341 0
 2531 00db 83437801 		addl	$1, 120(%rbx)
 342:fltk-1.3.4-1/src/Fl_Chart.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Chart.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2532              		.loc 2 343 0
 2533 00df 4883C410 		addq	$16, %rsp
 2534              		.cfi_remember_state
 2535              		.cfi_def_cfa_offset 32
 342:fltk-1.3.4-1/src/Fl_Chart.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 2536              		.loc 2 342 0
 2537 00e3 4889DF   		movq	%rbx, %rdi
 2538              		.loc 2 343 0
 2539 00e6 5B       		popq	%rbx
 2540              		.cfi_def_cfa_offset 24
 2541              	.LVL265:
 2542 00e7 5D       		popq	%rbp
 2543              		.cfi_def_cfa_offset 16
 2544              	.LVL266:
 2545 00e8 415C     		popq	%r12
 2546              		.cfi_def_cfa_offset 8
 2547              	.LVL267:
 342:fltk-1.3.4-1/src/Fl_Chart.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 2548              		.loc 2 342 0
 2549 00ea E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2549      00
 2550              	.LVL268:
 2551 00ef 90       		.p2align 4,,10
 2552              		.p2align 3
 2553              	.L175:
 2554              		.cfi_restore_state
 339:fltk-1.3.4-1/src/Fl_Chart.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 2555              		.loc 2 339 0
 2556 00f0 48634378 		movslq	120(%rbx), %rax
 2557 00f4 488D1485 		leaq	0(,%rax,4), %rdx
 2557      00000000 
 2558 00fc 48C1E005 		salq	$5, %rax
 2559 0100 4829D0   		subq	%rdx, %rax
 2560 0103 48038388 		addq	136(%rbx), %rax
 2560      000000
 2561 010a C6400800 		movb	$0, 8(%rax)
 2562 010e EBCB     		jmp	.L176
 2563              	.LVL269:
 2564              		.p2align 4,,10
 2565              		.p2align 3
 2566              	.L172:
 326:fltk-1.3.4-1/src/Fl_Chart.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 2567              		.loc 2 326 0
 2568 0110 8D908000 		leal	128(%rax), %edx
 2568      0000
 327:fltk-1.3.4-1/src/Fl_Chart.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 2569              		.loc 2 327 0
 2570 0116 05810000 		addl	$129, %eax
 2570      00
 2571 011b F20F1144 		movsd	%xmm0, 8(%rsp)
 2571      2408
 2572 0121 4863F0   		movslq	%eax, %rsi
 2573              	.LVL270:
 326:fltk-1.3.4-1/src/Fl_Chart.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 2574              		.loc 2 326 0
 2575 0124 89978000 		movl	%edx, 128(%rdi)
 2575      0000
 327:fltk-1.3.4-1/src/Fl_Chart.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 2576              		.loc 2 327 0
 2577 012a 488D04B5 		leaq	0(,%rsi,4), %rax
 2577      00000000 
 2578 0132 48C1E605 		salq	$5, %rsi
 2579 0136 488BBF88 		movq	136(%rdi), %rdi
 2579      000000
 2580 013d 4829C6   		subq	%rax, %rsi
 2581 0140 E8000000 		call	realloc
 2581      00
 2582              	.LVL271:
 2583 0145 8B5378   		movl	120(%rbx), %edx
 2584 0148 48898388 		movq	%rax, 136(%rbx)
 2584      000000
 2585 014f 4889C7   		movq	%rax, %rdi
 2586 0152 F20F1044 		movsd	8(%rsp), %xmm0
 2586      2408
 2587 0158 E9CCFEFF 		jmp	.L173
 2587      FF
 2588              		.cfi_endproc
 2589              	.LFE510:
 2591              		.section	.text.unlikely._ZN8Fl_Chart3addEdPKcj
 2592              	.LCOLDE21:
 2593              		.section	.text._ZN8Fl_Chart3addEdPKcj
 2594              	.LHOTE21:
 2595              		.section	.text.unlikely._ZN8Fl_Chart6insertEidPKcj,"ax",@progbits
 2596              		.align 2
 2597              	.LCOLDB22:
 2598              		.section	.text._ZN8Fl_Chart6insertEidPKcj,"ax",@progbits
 2599              	.LHOTB22:
 2600              		.align 2
 2601              		.p2align 4,,15
 2602              		.globl	_ZN8Fl_Chart6insertEidPKcj
 2604              	_ZN8Fl_Chart6insertEidPKcj:
 2605              	.LFB511:
 344:fltk-1.3.4-1/src/Fl_Chart.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Chart.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Chart.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Chart.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Chart.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Chart.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Chart.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Chart.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Chart.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Chart.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 2606              		.loc 2 353 0
 2607              		.cfi_startproc
 2608              	.LVL272:
 354:fltk-1.3.4-1/src/Fl_Chart.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Chart.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 2609              		.loc 2 355 0
 2610 0000 85F6     		testl	%esi, %esi
 2611 0002 0F8E2801 		jle	.L200
 2611      0000
 2612              		.loc 2 355 0 is_stmt 0 discriminator 1
 2613 0008 448B4F78 		movl	120(%rdi), %r9d
 2614 000c 418D4101 		leal	1(%r9), %eax
 2615 0010 39C6     		cmpl	%eax, %esi
 2616 0012 0F8F1801 		jg	.L200
 2616      0000
 353:fltk-1.3.4-1/src/Fl_Chart.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2617              		.loc 2 353 0 is_stmt 1
 2618 0018 4155     		pushq	%r13
 2619              		.cfi_def_cfa_offset 16
 2620              		.cfi_offset 13, -16
 2621 001a 4154     		pushq	%r12
 2622              		.cfi_def_cfa_offset 24
 2623              		.cfi_offset 12, -24
 2624 001c 4189CD   		movl	%ecx, %r13d
 2625 001f 55       		pushq	%rbp
 2626              		.cfi_def_cfa_offset 32
 2627              		.cfi_offset 6, -32
 2628 0020 53       		pushq	%rbx
 2629              		.cfi_def_cfa_offset 40
 2630              		.cfi_offset 3, -40
 2631 0021 4989D4   		movq	%rdx, %r12
 2632 0024 4863EE   		movslq	%esi, %rbp
 2633 0027 4889FB   		movq	%rdi, %rbx
 2634 002a 4883EC18 		subq	$24, %rsp
 2635              		.cfi_def_cfa_offset 64
 356:fltk-1.3.4-1/src/Fl_Chart.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Chart.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2636              		.loc 2 357 0
 2637 002e 8B878000 		movl	128(%rdi), %eax
 2637      0000
 2638 0034 4139C1   		cmpl	%eax, %r9d
 2639 0037 0F8D2301 		jge	.L186
 2639      0000
 2640 003d 488B8788 		movq	136(%rdi), %rax
 2640      000000
 2641              	.LVL273:
 2642              	.L187:
 358:fltk-1.3.4-1/src/Fl_Chart.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Chart.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Chart.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Chart.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Chart.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 2643              		.loc 2 362 0
 2644 0044 4439CD   		cmpl	%r9d, %ebp
 2645 0047 7F79     		jg	.L188
 2646 0049 4963F9   		movslq	%r9d, %rdi
 2647 004c 4129E9   		subl	%ebp, %r9d
 2648 004f 488D14BD 		leaq	0(,%rdi,4), %rdx
 2648      00000000 
 2649 0057 4989F8   		movq	%rdi, %r8
 2650 005a 4C29CF   		subq	%r9, %rdi
 2651 005d 49C1E005 		salq	$5, %r8
 2652 0061 4929D0   		subq	%rdx, %r8
 2653 0064 488D14BD 		leaq	0(,%rdi,4), %rdx
 2653      00000000 
 2654 006c 48C1E705 		salq	$5, %rdi
 2655 0070 4829D7   		subq	%rdx, %rdi
 2656 0073 4883EF1C 		subq	$28, %rdi
 2657 0077 EB0E     		jmp	.L190
 2658              	.LVL274:
 2659 0079 0F1F8000 		.p2align 4,,10
 2659      000000
 2660              		.p2align 3
 2661              	.L201:
 2662 0080 488B8388 		movq	136(%rbx), %rax
 2662      000000
 2663              	.L190:
 2664              		.loc 2 362 0 is_stmt 0 discriminator 2
 2665 0087 4A8B5400 		movq	-28(%rax,%r8), %rdx
 2665      E4
 2666 008c 468B4C00 		movl	-4(%rax,%r8), %r9d
 2666      FC
 2667 0091 4A891400 		movq	%rdx, (%rax,%r8)
 2668 0095 4A8B5400 		movq	-20(%rax,%r8), %rdx
 2668      EC
 2669 009a 46894C00 		movl	%r9d, 24(%rax,%r8)
 2669      18
 2670 009f 4A895400 		movq	%rdx, 8(%rax,%r8)
 2670      08
 2671 00a4 4A8B5400 		movq	-12(%rax,%r8), %rdx
 2671      F4
 2672 00a9 4A895400 		movq	%rdx, 16(%rax,%r8)
 2672      10
 2673 00ae 4983E81C 		subq	$28, %r8
 2674 00b2 4C39C7   		cmpq	%r8, %rdi
 2675 00b5 75C9     		jne	.L201
 2676 00b7 448B4B78 		movl	120(%rbx), %r9d
 2677 00bb 488B8388 		movq	136(%rbx), %rax
 2677      000000
 2678              	.L188:
 363:fltk-1.3.4-1/src/Fl_Chart.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 2679              		.loc 2 363 0 is_stmt 1
 2680 00c2 8B537C   		movl	124(%rbx), %edx
 2681 00c5 85D2     		testl	%edx, %edx
 2682 00c7 746F     		je	.L195
 2683 00c9 4439CA   		cmpl	%r9d, %edx
 2684 00cc 7F6A     		jg	.L195
 2685              	.L191:
 364:fltk-1.3.4-1/src/Fl_Chart.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Chart.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 2686              		.loc 2 365 0
 2687 00ce 660FEFC9 		pxor	%xmm1, %xmm1
 2688 00d2 488D14AD 		leaq	0(,%rbp,4), %rdx
 2688      00000000 
 2689 00da 48C1E505 		salq	$5, %rbp
 2690              	.LVL275:
 2691 00de 4829D5   		subq	%rdx, %rbp
 366:fltk-1.3.4-1/src/Fl_Chart.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Chart.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 2692              		.loc 2 367 0
 2693 00e1 4D85E4   		testq	%r12, %r12
 365:fltk-1.3.4-1/src/Fl_Chart.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2694              		.loc 2 365 0
 2695 00e4 F20F5AC8 		cvtsd2ss	%xmm0, %xmm1
 2696 00e8 488D55E4 		leaq	-28(%rbp), %rdx
 2697 00ec F30F114C 		movss	%xmm1, -28(%rax,%rbp)
 2697      28E4
 366:fltk-1.3.4-1/src/Fl_Chart.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2698              		.loc 2 366 0
 2699 00f2 488B8388 		movq	136(%rbx), %rax
 2699      000000
 2700 00f9 44896C28 		movl	%r13d, -24(%rax,%rbp)
 2700      E8
 2701              		.loc 2 367 0
 2702 00fe 7448     		je	.L193
 368:fltk-1.3.4-1/src/Fl_Chart.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 2703              		.loc 2 368 0
 2704 0100 48039388 		addq	136(%rbx), %rdx
 2704      000000
 2705 0107 4C89E6   		movq	%r12, %rsi
 2706 010a 488D7A08 		leaq	8(%rdx), %rdi
 2707 010e BA130000 		movl	$19, %edx
 2707      00
 2708 0113 E8000000 		call	fl_strlcpy
 2708      00
 2709              	.LVL276:
 2710              	.L194:
 369:fltk-1.3.4-1/src/Fl_Chart.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Chart.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Chart.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Chart.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Chart.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2711              		.loc 2 373 0
 2712 0118 4883C418 		addq	$24, %rsp
 2713              		.cfi_def_cfa_offset 40
 372:fltk-1.3.4-1/src/Fl_Chart.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2714              		.loc 2 372 0
 2715 011c 4889DF   		movq	%rbx, %rdi
 2716              		.loc 2 373 0
 2717 011f 5B       		popq	%rbx
 2718              		.cfi_restore 3
 2719              		.cfi_def_cfa_offset 32
 2720              	.LVL277:
 2721 0120 5D       		popq	%rbp
 2722              		.cfi_restore 6
 2723              		.cfi_def_cfa_offset 24
 2724 0121 415C     		popq	%r12
 2725              		.cfi_restore 12
 2726              		.cfi_def_cfa_offset 16
 2727              	.LVL278:
 2728 0123 415D     		popq	%r13
 2729              		.cfi_restore 13
 2730              		.cfi_def_cfa_offset 8
 2731              	.LVL279:
 372:fltk-1.3.4-1/src/Fl_Chart.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2732              		.loc 2 372 0
 2733 0125 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2733      00
 2734              	.LVL280:
 2735 012a 660F1F44 		.p2align 4,,10
 2735      0000
 2736              		.p2align 3
 2737              	.L200:
 2738 0130 F3C3     		rep ret
 2739              	.LVL281:
 2740              		.p2align 4,,10
 2741 0132 660F1F44 		.p2align 3
 2741      0000
 2742              	.L195:
 2743              		.cfi_def_cfa_offset 64
 2744              		.cfi_offset 3, -40
 2745              		.cfi_offset 6, -32
 2746              		.cfi_offset 12, -24
 2747              		.cfi_offset 13, -16
 363:fltk-1.3.4-1/src/Fl_Chart.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2748              		.loc 2 363 0 discriminator 3
 2749 0138 4183C101 		addl	$1, %r9d
 2750 013c 44894B78 		movl	%r9d, 120(%rbx)
 2751 0140 EB8C     		jmp	.L191
 2752              	.LVL282:
 2753              		.p2align 4,,10
 2754 0142 660F1F44 		.p2align 3
 2754      0000
 2755              	.L193:
 370:fltk-1.3.4-1/src/Fl_Chart.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 2756              		.loc 2 370 0
 2757 0148 488B8388 		movq	136(%rbx), %rax
 2757      000000
 2758 014f C64428EC 		movb	$0, -20(%rax,%rbp)
 2758      00
 2759 0154 EBC2     		jmp	.L194
 2760              	.LVL283:
 2761 0156 662E0F1F 		.p2align 4,,10
 2761      84000000 
 2761      0000
 2762              		.p2align 3
 2763              	.L186:
 358:fltk-1.3.4-1/src/Fl_Chart.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2764              		.loc 2 358 0
 2765 0160 8D908000 		leal	128(%rax), %edx
 2765      0000
 2766              	.LVL284:
 359:fltk-1.3.4-1/src/Fl_Chart.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2767              		.loc 2 359 0
 2768 0166 05810000 		addl	$129, %eax
 2768      00
 2769 016b F20F1144 		movsd	%xmm0, 8(%rsp)
 2769      2408
 2770 0171 4863F0   		movslq	%eax, %rsi
 2771              	.LVL285:
 2772 0174 488D04B5 		leaq	0(,%rsi,4), %rax
 2772      00000000 
 358:fltk-1.3.4-1/src/Fl_Chart.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2773              		.loc 2 358 0
 2774 017c 89978000 		movl	%edx, 128(%rdi)
 2774      0000
 359:fltk-1.3.4-1/src/Fl_Chart.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2775              		.loc 2 359 0
 2776 0182 48C1E605 		salq	$5, %rsi
 2777 0186 488BBF88 		movq	136(%rdi), %rdi
 2777      000000
 2778 018d 4829C6   		subq	%rax, %rsi
 2779 0190 E8000000 		call	realloc
 2779      00
 2780              	.LVL286:
 2781 0195 448B4B78 		movl	120(%rbx), %r9d
 2782 0199 48898388 		movq	%rax, 136(%rbx)
 2782      000000
 2783 01a0 F20F1044 		movsd	8(%rsp), %xmm0
 2783      2408
 2784 01a6 E999FEFF 		jmp	.L187
 2784      FF
 2785              		.cfi_endproc
 2786              	.LFE511:
 2788              		.section	.text.unlikely._ZN8Fl_Chart6insertEidPKcj
 2789              	.LCOLDE22:
 2790              		.section	.text._ZN8Fl_Chart6insertEidPKcj
 2791              	.LHOTE22:
 2792              		.section	.text.unlikely._ZN8Fl_Chart7replaceEidPKcj,"ax",@progbits
 2793              		.align 2
 2794              	.LCOLDB23:
 2795              		.section	.text._ZN8Fl_Chart7replaceEidPKcj,"ax",@progbits
 2796              	.LHOTB23:
 2797              		.align 2
 2798              		.p2align 4,,15
 2799              		.globl	_ZN8Fl_Chart7replaceEidPKcj
 2801              	_ZN8Fl_Chart7replaceEidPKcj:
 2802              	.LFB512:
 374:fltk-1.3.4-1/src/Fl_Chart.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Chart.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Chart.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Chart.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Chart.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Chart.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Chart.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Chart.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Chart.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Chart.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 2803              		.loc 2 383 0
 2804              		.cfi_startproc
 2805              	.LVL287:
 384:fltk-1.3.4-1/src/Fl_Chart.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 2806              		.loc 2 384 0
 2807 0000 85F6     		testl	%esi, %esi
 2808 0002 7E6C     		jle	.L207
 2809              		.loc 2 384 0 is_stmt 0 discriminator 1
 2810 0004 3B7778   		cmpl	120(%rdi), %esi
 2811 0007 7F67     		jg	.L207
 385:fltk-1.3.4-1/src/Fl_Chart.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 2812              		.loc 2 385 0 is_stmt 1
 2813 0009 660FEFC9 		pxor	%xmm1, %xmm1
 2814 000d 4863C6   		movslq	%esi, %rax
 2815 0010 4989D0   		movq	%rdx, %r8
 2816 0013 488D1485 		leaq	0(,%rax,4), %rdx
 2816      00000000 
 2817              	.LVL288:
 383:fltk-1.3.4-1/src/Fl_Chart.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 2818              		.loc 2 383 0
 2819 001b 53       		pushq	%rbx
 2820              		.cfi_def_cfa_offset 16
 2821              		.cfi_offset 3, -16
 2822              		.loc 2 385 0
 2823 001c 48C1E005 		salq	$5, %rax
 2824 0020 4889FB   		movq	%rdi, %rbx
 2825 0023 F20F5AC8 		cvtsd2ss	%xmm0, %xmm1
 2826 0027 4829D0   		subq	%rdx, %rax
 2827 002a 488B9388 		movq	136(%rbx), %rdx
 2827      000000
 386:fltk-1.3.4-1/src/Fl_Chart.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Chart.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 2828              		.loc 2 387 0
 2829 0031 4D85C0   		testq	%r8, %r8
 385:fltk-1.3.4-1/src/Fl_Chart.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 2830              		.loc 2 385 0
 2831 0034 488D78E4 		leaq	-28(%rax), %rdi
 2832              	.LVL289:
 2833 0038 F30F114C 		movss	%xmm1, -28(%rdx,%rax)
 2833      02E4
 386:fltk-1.3.4-1/src/Fl_Chart.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 2834              		.loc 2 386 0
 2835 003e 488B9388 		movq	136(%rbx), %rdx
 2835      000000
 2836 0045 894C02E8 		movl	%ecx, -24(%rdx,%rax)
 2837              		.loc 2 387 0
 2838 0049 742D     		je	.L204
 388:fltk-1.3.4-1/src/Fl_Chart.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2839              		.loc 2 388 0
 2840 004b 4803BB88 		addq	136(%rbx), %rdi
 2840      000000
 2841 0052 BA130000 		movl	$19, %edx
 2841      00
 2842 0057 4C89C6   		movq	%r8, %rsi
 2843              	.LVL290:
 2844 005a 4883C708 		addq	$8, %rdi
 2845 005e E8000000 		call	fl_strlcpy
 2845      00
 2846              	.LVL291:
 389:fltk-1.3.4-1/src/Fl_Chart.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Chart.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Chart.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Chart.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 2847              		.loc 2 392 0
 2848 0063 4889DF   		movq	%rbx, %rdi
 393:fltk-1.3.4-1/src/Fl_Chart.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 2849              		.loc 2 393 0
 2850 0066 5B       		popq	%rbx
 2851              		.cfi_restore 3
 2852              		.cfi_def_cfa_offset 8
 2853              	.LVL292:
 392:fltk-1.3.4-1/src/Fl_Chart.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 2854              		.loc 2 392 0
 2855 0067 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2855      00
 2856              	.LVL293:
 2857 006c 0F1F4000 		.p2align 4,,10
 2858              		.p2align 3
 2859              	.L207:
 2860 0070 F3C3     		rep ret
 2861              	.LVL294:
 2862              		.p2align 4,,10
 2863 0072 660F1F44 		.p2align 3
 2863      0000
 2864              	.L204:
 2865              		.cfi_def_cfa_offset 16
 2866              		.cfi_offset 3, -16
 390:fltk-1.3.4-1/src/Fl_Chart.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 2867              		.loc 2 390 0
 2868 0078 488B9388 		movq	136(%rbx), %rdx
 2868      000000
 392:fltk-1.3.4-1/src/Fl_Chart.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 2869              		.loc 2 392 0
 2870 007f 4889DF   		movq	%rbx, %rdi
 390:fltk-1.3.4-1/src/Fl_Chart.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 2871              		.loc 2 390 0
 2872 0082 C64402EC 		movb	$0, -20(%rdx,%rax)
 2872      00
 2873              		.loc 2 393 0
 2874 0087 5B       		popq	%rbx
 2875              		.cfi_restore 3
 2876              		.cfi_def_cfa_offset 8
 2877              	.LVL295:
 392:fltk-1.3.4-1/src/Fl_Chart.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 2878              		.loc 2 392 0
 2879 0088 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2879      00
 2880              	.LVL296:
 2881              		.cfi_endproc
 2882              	.LFE512:
 2884              		.section	.text.unlikely._ZN8Fl_Chart7replaceEidPKcj
 2885              	.LCOLDE23:
 2886              		.section	.text._ZN8Fl_Chart7replaceEidPKcj
 2887              	.LHOTE23:
 2888              		.section	.text.unlikely._ZN8Fl_Chart6boundsEdd,"ax",@progbits
 2889              		.align 2
 2890              	.LCOLDB24:
 2891              		.section	.text._ZN8Fl_Chart6boundsEdd,"ax",@progbits
 2892              	.LHOTB24:
 2893              		.align 2
 2894              		.p2align 4,,15
 2895              		.globl	_ZN8Fl_Chart6boundsEdd
 2897              	_ZN8Fl_Chart6boundsEdd:
 2898              	.LFB513:
 394:fltk-1.3.4-1/src/Fl_Chart.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Chart.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Chart.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Chart.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Chart.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Chart.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 2899              		.loc 2 399 0
 2900              		.cfi_startproc
 2901              	.LVL297:
 400:fltk-1.3.4-1/src/Fl_Chart.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 2902              		.loc 2 400 0
 2903 0000 F20F1187 		movsd	%xmm0, 144(%rdi)
 2903      90000000 
 401:fltk-1.3.4-1/src/Fl_Chart.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2904              		.loc 2 401 0
 2905 0008 F20F118F 		movsd	%xmm1, 152(%rdi)
 2905      98000000 
 402:fltk-1.3.4-1/src/Fl_Chart.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 2906              		.loc 2 402 0
 2907 0010 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2907      00
 2908              	.LVL298:
 2909              		.cfi_endproc
 2910              	.LFE513:
 2912              		.section	.text.unlikely._ZN8Fl_Chart6boundsEdd
 2913              	.LCOLDE24:
 2914              		.section	.text._ZN8Fl_Chart6boundsEdd
 2915              	.LHOTE24:
 2916              		.section	.text.unlikely._ZN8Fl_Chart7maxsizeEi,"ax",@progbits
 2917              		.align 2
 2918              	.LCOLDB25:
 2919              		.section	.text._ZN8Fl_Chart7maxsizeEi,"ax",@progbits
 2920              	.LHOTB25:
 2921              		.align 2
 2922              		.p2align 4,,15
 2923              		.globl	_ZN8Fl_Chart7maxsizeEi
 2925              	_ZN8Fl_Chart7maxsizeEi:
 2926              	.LFB514:
 403:fltk-1.3.4-1/src/Fl_Chart.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Chart.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Chart.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Chart.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Chart.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Chart.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Chart.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Chart.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Chart.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 2927              		.loc 2 411 0
 2928              		.cfi_startproc
 2929              	.LVL299:
 412:fltk-1.3.4-1/src/Fl_Chart.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Chart.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Chart.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2930              		.loc 2 414 0
 2931 0000 85F6     		testl	%esi, %esi
 2932 0002 787C     		js	.L209
 415:fltk-1.3.4-1/src/Fl_Chart.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Chart.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Chart.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 2933              		.loc 2 417 0
 2934 0004 8B4778   		movl	120(%rdi), %eax
 415:fltk-1.3.4-1/src/Fl_Chart.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 2935              		.loc 2 415 0
 2936 0007 89777C   		movl	%esi, 124(%rdi)
 2937              		.loc 2 417 0
 2938 000a 39C6     		cmpl	%eax, %esi
 2939 000c 7D72     		jge	.L209
 2940              	.LVL300:
 418:fltk-1.3.4-1/src/Fl_Chart.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 2941              		.loc 2 418 0 discriminator 3
 2942 000e 85F6     		testl	%esi, %esi
 2943 0010 7E61     		jle	.L213
 2944              		.loc 2 418 0 is_stmt 0 discriminator 2
 2945 0012 31D2     		xorl	%edx, %edx
 2946 0014 4531C0   		xorl	%r8d, %r8d
 2947 0017 EB0A     		jmp	.L214
 2948              	.LVL301:
 2949 0019 0F1F8000 		.p2align 4,,10
 2949      000000
 2950              		.p2align 3
 2951              	.L216:
 2952 0020 8B4778   		movl	120(%rdi), %eax
 2953              	.LVL302:
 2954              	.L214:
 419:fltk-1.3.4-1/src/Fl_Chart.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 2955              		.loc 2 419 0 is_stmt 1 discriminator 2
 2956 0023 4401C0   		addl	%r8d, %eax
 2957 0026 488B8F88 		movq	136(%rdi), %rcx
 2957      000000
 418:fltk-1.3.4-1/src/Fl_Chart.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 2958              		.loc 2 418 0 discriminator 2
 2959 002d 4183C001 		addl	$1, %r8d
 2960              	.LVL303:
 2961              		.loc 2 419 0 discriminator 2
 2962 0031 29F0     		subl	%esi, %eax
 2963 0033 4898     		cltq
 2964 0035 488D3485 		leaq	0(,%rax,4), %rsi
 2964      00000000 
 2965 003d 48C1E005 		salq	$5, %rax
 2966 0041 4829F0   		subq	%rsi, %rax
 2967 0044 4801C8   		addq	%rcx, %rax
 2968 0047 488B30   		movq	(%rax), %rsi
 2969 004a 48893411 		movq	%rsi, (%rcx,%rdx)
 2970 004e 488B7008 		movq	8(%rax), %rsi
 2971 0052 48897411 		movq	%rsi, 8(%rcx,%rdx)
 2971      08
 2972 0057 488B7010 		movq	16(%rax), %rsi
 2973 005b 48897411 		movq	%rsi, 16(%rcx,%rdx)
 2973      10
 2974 0060 8B4018   		movl	24(%rax), %eax
 2975 0063 89441118 		movl	%eax, 24(%rcx,%rdx)
 418:fltk-1.3.4-1/src/Fl_Chart.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 2976              		.loc 2 418 0 discriminator 2
 2977 0067 8B777C   		movl	124(%rdi), %esi
 2978 006a 4883C21C 		addq	$28, %rdx
 2979 006e 4439C6   		cmpl	%r8d, %esi
 2980 0071 7FAD     		jg	.L216
 2981              	.LVL304:
 2982              	.L213:
 420:fltk-1.3.4-1/src/Fl_Chart.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 2983              		.loc 2 420 0
 2984 0073 897778   		movl	%esi, 120(%rdi)
 421:fltk-1.3.4-1/src/Fl_Chart.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 2985              		.loc 2 421 0
 2986 0076 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2986      00
 2987              	.LVL305:
 2988 007b 0F1F4400 		.p2align 4,,10
 2988      00
 2989              		.p2align 3
 2990              	.L209:
 2991 0080 F3C3     		rep ret
 2992              		.cfi_endproc
 2993              	.LFE514:
 2995              		.section	.text.unlikely._ZN8Fl_Chart7maxsizeEi
 2996              	.LCOLDE25:
 2997              		.section	.text._ZN8Fl_Chart7maxsizeEi
 2998              	.LHOTE25:
 2999              		.weak	_ZTS8Fl_Chart
 3000              		.section	.rodata._ZTS8Fl_Chart,"aG",@progbits,_ZTS8Fl_Chart,comdat
 3001              		.align 8
 3004              	_ZTS8Fl_Chart:
 3005 0000 38466C5F 		.string	"8Fl_Chart"
 3005      43686172 
 3005      7400
 3006              		.weak	_ZTI8Fl_Chart
 3007              		.section	.rodata._ZTI8Fl_Chart,"aG",@progbits,_ZTI8Fl_Chart,comdat
 3008              		.align 8
 3011              	_ZTI8Fl_Chart:
 3012 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3012      00000000 
 3013 0008 00000000 		.quad	_ZTS8Fl_Chart
 3013      00000000 
 3014 0010 00000000 		.quad	_ZTI9Fl_Widget
 3014      00000000 
 3015              		.weak	_ZTV8Fl_Chart
 3016              		.section	.rodata._ZTV8Fl_Chart,"aG",@progbits,_ZTV8Fl_Chart,comdat
 3017              		.align 8
 3020              	_ZTV8Fl_Chart:
 3021 0000 00000000 		.quad	0
 3021      00000000 
 3022 0008 00000000 		.quad	_ZTI8Fl_Chart
 3022      00000000 
 3023 0010 00000000 		.quad	_ZN8Fl_ChartD1Ev
 3023      00000000 
 3024 0018 00000000 		.quad	_ZN8Fl_ChartD0Ev
 3024      00000000 
 3025 0020 00000000 		.quad	_ZN8Fl_Chart4drawEv
 3025      00000000 
 3026 0028 00000000 		.quad	_ZN9Fl_Widget6handleEi
 3026      00000000 
 3027 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 3027      00000000 
 3028 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3028      00000000 
 3029 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3029      00000000 
 3030 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 3030      00000000 
 3031 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3031      00000000 
 3032 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3032      00000000 
 3033              		.section	.rodata.cst8,"aM",@progbits,8
 3034              		.align 8
 3035              	.LC3:
 3036 0000 66666666 		.long	1717986918
 3037 0004 66660240 		.long	1073899110
 3038              		.align 8
 3039              	.LC4:
 3040 0008 00000000 		.long	0
 3041 000c 00000040 		.long	1073741824
 3042              		.align 8
 3043              	.LC7:
 3044 0010 33333333 		.long	858993459
 3045 0014 3333D33F 		.long	1070805811
 3046              		.align 8
 3047              	.LC8:
 3048 0018 00000000 		.long	0
 3049 001c 0000E03F 		.long	1071644672
 3050              		.align 8
 3051              	.LC9:
 3052 0020 399D52A2 		.long	2723323193
 3053 0024 46DF913F 		.long	1066524486
 3054              		.align 8
 3055              	.LC10:
 3056 0028 9A999999 		.long	2576980378
 3057 002c 9999F13F 		.long	1072798105
 3058              		.align 8
 3059              	.LC11:
 3060 0030 00000000 		.long	0
 3061 0034 00807640 		.long	1081507840
 3062              		.align 8
 3063              	.LC13:
 3064 0038 00000000 		.long	0
 3065 003c 0000E0BF 		.long	-1075838976
 3066              		.section	.rodata.cst16,"aM",@progbits,16
 3067              		.align 16
 3068              	.LC14:
 3069 0000 00000000 		.long	0
 3070 0004 00000080 		.long	-2147483648
 3071 0008 00000000 		.long	0
 3072 000c 00000000 		.long	0
 3073              		.section	.rodata.cst8
 3074              		.align 8
 3075              	.LC15:
 3076 0040 00000000 		.long	0
 3077 0044 00001040 		.long	1074790400
 3078              		.text
 3079              	.Letext0:
 3080              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 3081              	.Letext_cold0:
 3082              		.file 5 "fltk-1.3.4-1/FL/fl_types.h"
 3083              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3084              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3085              		.file 8 "/usr/include/libio.h"
 3086              		.file 9 "fltk-1.3.4-1/FL/Enumerations.H"
 3087              		.file 10 "fltk-1.3.4-1/FL/Fl.H"
 3088              		.file 11 "fltk-1.3.4-1/FL/Fl_Image.H"
 3089              		.file 12 "fltk-1.3.4-1/FL/Fl_Chart.H"
 3090              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 3091              		.file 14 "/usr/include/stdio.h"
 3092              		.file 15 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 3093              		.file 16 "/usr/include/stdlib.h"
 3094              		.file 17 "fltk-1.3.4-1/src/flstring.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Chart.cxx
     /tmp/ccqipLDy.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccqipLDy.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccqipLDy.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccqipLDy.s:86     .text._ZL13draw_piechartiiiiiP14FL_CHART_ENTRYij:0000000000000000 _ZL13draw_piechartiiiiiP14FL_CHART_ENTRYij
     /tmp/ccqipLDy.s:547    .text._ZN8Fl_Chart4drawEv:0000000000000000 _ZN8Fl_Chart4drawEv
     /tmp/ccqipLDy.s:2233   .text._ZN8Fl_ChartD2Ev:0000000000000000 _ZN8Fl_ChartD2Ev
     /tmp/ccqipLDy.s:3020   .rodata._ZTV8Fl_Chart:0000000000000000 _ZTV8Fl_Chart
     /tmp/ccqipLDy.s:2233   .text._ZN8Fl_ChartD2Ev:0000000000000000 _ZN8Fl_ChartD1Ev
     /tmp/ccqipLDy.s:2280   .text._ZN8Fl_ChartD0Ev:0000000000000000 _ZN8Fl_ChartD0Ev
     /tmp/ccqipLDy.s:2327   .text._ZN8Fl_ChartC2EiiiiPKc:0000000000000000 _ZN8Fl_ChartC2EiiiiPKc
     /tmp/ccqipLDy.s:2327   .text._ZN8Fl_ChartC2EiiiiPKc:0000000000000000 _ZN8Fl_ChartC1EiiiiPKc
     /tmp/ccqipLDy.s:2410   .text._ZN8Fl_Chart5clearEv:0000000000000000 _ZN8Fl_Chart5clearEv
     /tmp/ccqipLDy.s:2441   .text._ZN8Fl_Chart3addEdPKcj:0000000000000000 _ZN8Fl_Chart3addEdPKcj
     /tmp/ccqipLDy.s:2604   .text._ZN8Fl_Chart6insertEidPKcj:0000000000000000 _ZN8Fl_Chart6insertEidPKcj
     /tmp/ccqipLDy.s:2801   .text._ZN8Fl_Chart7replaceEidPKcj:0000000000000000 _ZN8Fl_Chart7replaceEidPKcj
     /tmp/ccqipLDy.s:2897   .text._ZN8Fl_Chart6boundsEdd:0000000000000000 _ZN8Fl_Chart6boundsEdd
     /tmp/ccqipLDy.s:2925   .text._ZN8Fl_Chart7maxsizeEi:0000000000000000 _ZN8Fl_Chart7maxsizeEi
     /tmp/ccqipLDy.s:3004   .rodata._ZTS8Fl_Chart:0000000000000000 _ZTS8Fl_Chart
     /tmp/ccqipLDy.s:3011   .rodata._ZTI8Fl_Chart:0000000000000000 _ZTI8Fl_Chart
     /tmp/ccqipLDy.s:3035   .rodata.cst8:0000000000000000 .LC3
     /tmp/ccqipLDy.s:3039   .rodata.cst8:0000000000000008 .LC4
     /tmp/ccqipLDy.s:3055   .rodata.cst8:0000000000000028 .LC10
     /tmp/ccqipLDy.s:3047   .rodata.cst8:0000000000000018 .LC8
     /tmp/ccqipLDy.s:3059   .rodata.cst8:0000000000000030 .LC11
     /tmp/ccqipLDy.s:3051   .rodata.cst8:0000000000000020 .LC9
     /tmp/ccqipLDy.s:3043   .rodata.cst8:0000000000000010 .LC7
     /tmp/ccqipLDy.s:3063   .rodata.cst8:0000000000000038 .LC13
     /tmp/ccqipLDy.s:3068   .rodata.cst16:0000000000000000 .LC14
     /tmp/ccqipLDy.s:3075   .rodata.cst8:0000000000000040 .LC15
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.features.h.19.ad7942cac365cc9b820965257723f4cc
                           .group:0000000000000000 wm4.cdefs.h.19.871bad770587d04922449df94ac50bdb
                           .group:0000000000000000 wm4.wordsize.h.4.256e8fdbd37801980286acdbc40d0280
                           .group:0000000000000000 wm4.cdefs.h.432.619afd0aac7c4b439843706c1b28ddea
                           .group:0000000000000000 wm4.stubs64.h.10.918ceb5fa58268542bf143e4c1efbcf3
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
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
                           .group:0000000000000000 wm4.Fl_Chart.H.30.130fa2de847a7c7489da44cfd83e946e
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

UNDEFINED SYMBOLS
fl_graphics_driver
sincos
rint
_Z7fl_drawPKciiiijP8Fl_Imagei
_ZNK9Fl_Widget8draw_boxEv
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_ZNK9Fl_Widget10draw_labelEv
_Z12fl_rectboundiiiij
_Z8fl_widthPKc
free
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN9Fl_WidgetC2EiiiiPKc
calloc
_ZN9Fl_Widget6redrawEv
memmove
fl_strlcpy
realloc
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Widget
_ZN9Fl_Widget6handleEi
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
