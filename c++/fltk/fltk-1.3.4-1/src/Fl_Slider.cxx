   1              		.file	"Fl_Slider.cxx"
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
  17              	.LFB232:
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
  26              	.LFE232:
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
  42              	.LFB233:
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
  50              	.LFE233:
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
  66              	.LFB234:
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
  74              	.LFE234:
  76              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  77              	.LCOLDE2:
  78              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  79              	.LHOTE2:
  80              		.section	.text.unlikely._ZN9Fl_SliderD2Ev,"axG",@progbits,_ZN9Fl_SliderD5Ev,comdat
  81              		.align 2
  82              	.LCOLDB3:
  83              		.section	.text._ZN9Fl_SliderD2Ev,"axG",@progbits,_ZN9Fl_SliderD5Ev,comdat
  84              	.LHOTB3:
  85              		.align 2
  86              		.p2align 4,,15
  87              		.weak	_ZN9Fl_SliderD2Ev
  89              	_ZN9Fl_SliderD2Ev:
  90              	.LFB523:
  91              		.file 2 "fltk-1.3.4-1/FL/Fl_Slider.H"
   1:fltk-1.3.4-1/FL/Fl_Slider.H **** //
   2:fltk-1.3.4-1/FL/Fl_Slider.H **** // "$Id: Fl_Slider.H 9553 2012-05-28 15:39:12Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Slider.H **** //
   4:fltk-1.3.4-1/FL/Fl_Slider.H **** // Slider header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Slider.H **** //
   6:fltk-1.3.4-1/FL/Fl_Slider.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Slider.H **** //
   8:fltk-1.3.4-1/FL/Fl_Slider.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Slider.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Slider.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Slider.H **** //
  12:fltk-1.3.4-1/FL/Fl_Slider.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Slider.H **** //
  14:fltk-1.3.4-1/FL/Fl_Slider.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Slider.H **** //
  16:fltk-1.3.4-1/FL/Fl_Slider.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Slider.H **** //
  18:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  19:fltk-1.3.4-1/FL/Fl_Slider.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Slider.H ****    Fl_Slider widget . */
  21:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  22:fltk-1.3.4-1/FL/Fl_Slider.H **** #ifndef Fl_Slider_H
  23:fltk-1.3.4-1/FL/Fl_Slider.H **** #define Fl_Slider_H
  24:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  25:fltk-1.3.4-1/FL/Fl_Slider.H **** #ifndef Fl_Valuator_H
  26:fltk-1.3.4-1/FL/Fl_Slider.H **** #include "Fl_Valuator.H"
  27:fltk-1.3.4-1/FL/Fl_Slider.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  29:fltk-1.3.4-1/FL/Fl_Slider.H **** // values for type(), lowest bit indicate horizontal:
  30:fltk-1.3.4-1/FL/Fl_Slider.H **** #define FL_VERT_SLIDER		0
  31:fltk-1.3.4-1/FL/Fl_Slider.H **** #define FL_HOR_SLIDER		1
  32:fltk-1.3.4-1/FL/Fl_Slider.H **** #define FL_VERT_FILL_SLIDER	2
  33:fltk-1.3.4-1/FL/Fl_Slider.H **** #define FL_HOR_FILL_SLIDER	3
  34:fltk-1.3.4-1/FL/Fl_Slider.H **** #define FL_VERT_NICE_SLIDER	4
  35:fltk-1.3.4-1/FL/Fl_Slider.H **** #define FL_HOR_NICE_SLIDER	5
  36:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  37:fltk-1.3.4-1/FL/Fl_Slider.H **** /**
  38:fltk-1.3.4-1/FL/Fl_Slider.H ****   The Fl_Slider widget contains a sliding knob inside a box. It is
  39:fltk-1.3.4-1/FL/Fl_Slider.H ****   often used as a scrollbar.  Moving the box all the way to the
  40:fltk-1.3.4-1/FL/Fl_Slider.H ****   top/left sets it to the minimum(), and to the bottom/right to the
  41:fltk-1.3.4-1/FL/Fl_Slider.H ****   maximum().  The minimum() may be greater than the maximum() to
  42:fltk-1.3.4-1/FL/Fl_Slider.H ****   reverse the slider direction.
  43:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  44:fltk-1.3.4-1/FL/Fl_Slider.H ****   Use void Fl_Widget::type(int) to set how the slider is drawn, 
  45:fltk-1.3.4-1/FL/Fl_Slider.H ****   which can be one of the following:
  46:fltk-1.3.4-1/FL/Fl_Slider.H ****   
  47:fltk-1.3.4-1/FL/Fl_Slider.H ****   \li FL_VERTICAL - Draws a vertical slider (this is the default).
  48:fltk-1.3.4-1/FL/Fl_Slider.H ****   \li FL_HORIZONTAL - Draws a horizontal slider.
  49:fltk-1.3.4-1/FL/Fl_Slider.H ****   \li FL_VERT_FILL_SLIDER - Draws a filled vertical slider,
  50:fltk-1.3.4-1/FL/Fl_Slider.H ****       useful as a progress or value meter.
  51:fltk-1.3.4-1/FL/Fl_Slider.H ****   \li FL_HOR_FILL_SLIDER - Draws a filled horizontal  slider,
  52:fltk-1.3.4-1/FL/Fl_Slider.H ****       useful as a progress or value meter.
  53:fltk-1.3.4-1/FL/Fl_Slider.H ****   \li FL_VERT_NICE_SLIDER - Draws a vertical slider with  a nice
  54:fltk-1.3.4-1/FL/Fl_Slider.H ****       looking control knob.
  55:fltk-1.3.4-1/FL/Fl_Slider.H ****   \li FL_HOR_NICE_SLIDER - Draws a horizontal slider with  a
  56:fltk-1.3.4-1/FL/Fl_Slider.H ****       nice looking control knob.
  57:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  58:fltk-1.3.4-1/FL/Fl_Slider.H ****   \image html  slider.png 
  59:fltk-1.3.4-1/FL/Fl_Slider.H ****   \image latex slider.png "Fl_Slider" width=4cm
  60:fltk-1.3.4-1/FL/Fl_Slider.H **** */
  61:fltk-1.3.4-1/FL/Fl_Slider.H **** class FL_EXPORT Fl_Slider : public Fl_Valuator {
  92              		.loc 2 61 0
  93              		.cfi_startproc
  94              	.LVL3:
  95              	.LBB429:
  96              	.LBB430:
  97              		.file 3 "fltk-1.3.4-1/FL/Fl_Valuator.H"
   1:fltk-1.3.4-1/FL/Fl_Valuator.H **** //
   2:fltk-1.3.4-1/FL/Fl_Valuator.H **** // "$Id: Fl_Valuator.H 11316 2016-03-08 13:42:59Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Valuator.H **** //
   4:fltk-1.3.4-1/FL/Fl_Valuator.H **** // Valuator header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Valuator.H **** //
   6:fltk-1.3.4-1/FL/Fl_Valuator.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Valuator.H **** //
   8:fltk-1.3.4-1/FL/Fl_Valuator.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Valuator.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Valuator.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Valuator.H **** //
  12:fltk-1.3.4-1/FL/Fl_Valuator.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Valuator.H **** //
  14:fltk-1.3.4-1/FL/Fl_Valuator.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Valuator.H **** //
  16:fltk-1.3.4-1/FL/Fl_Valuator.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Valuator.H **** //
  18:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  19:fltk-1.3.4-1/FL/Fl_Valuator.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Valuator.H ****    Fl_Valuator widget . */
  21:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  22:fltk-1.3.4-1/FL/Fl_Valuator.H **** #ifndef Fl_Valuator_H
  23:fltk-1.3.4-1/FL/Fl_Valuator.H **** #define Fl_Valuator_H
  24:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  25:fltk-1.3.4-1/FL/Fl_Valuator.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Valuator.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Valuator.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  29:fltk-1.3.4-1/FL/Fl_Valuator.H **** // shared type() values for classes that work in both directions:
  30:fltk-1.3.4-1/FL/Fl_Valuator.H **** #define FL_VERTICAL		0 ///< The valuator can work vertically
  31:fltk-1.3.4-1/FL/Fl_Valuator.H **** #define FL_HORIZONTAL		1 ///< The valuator can work horizontally
  32:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  33:fltk-1.3.4-1/FL/Fl_Valuator.H **** /**
  34:fltk-1.3.4-1/FL/Fl_Valuator.H ****   The Fl_Valuator class controls a single floating-point value
  35:fltk-1.3.4-1/FL/Fl_Valuator.H ****   and provides a consistent interface to set the value, range, and step,
  36:fltk-1.3.4-1/FL/Fl_Valuator.H ****   and insures that callbacks are done the same for every object.
  37:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  38:fltk-1.3.4-1/FL/Fl_Valuator.H ****   There are probably more of these classes in FLTK than any others:
  39:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  40:fltk-1.3.4-1/FL/Fl_Valuator.H ****   <P ALIGN=CENTER>\image html valuators.png</P>
  41:fltk-1.3.4-1/FL/Fl_Valuator.H ****   \image latex valuators.png "Valuators derived from Fl_Valuators" width=10cm
  42:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  43:fltk-1.3.4-1/FL/Fl_Valuator.H ****   In the above diagram each box surrounds an actual subclass.  These
  44:fltk-1.3.4-1/FL/Fl_Valuator.H ****   are further differentiated by setting the type() of the widget to
  45:fltk-1.3.4-1/FL/Fl_Valuator.H ****   the symbolic value labeling the widget.
  46:fltk-1.3.4-1/FL/Fl_Valuator.H ****   The ones labelled "0" are the default versions with a type(0).
  47:fltk-1.3.4-1/FL/Fl_Valuator.H ****   For consistency the symbol FL_VERTICAL is defined as zero.
  48:fltk-1.3.4-1/FL/Fl_Valuator.H **** */
  49:fltk-1.3.4-1/FL/Fl_Valuator.H **** class FL_EXPORT Fl_Valuator : public Fl_Widget {
  98              		.loc 3 49 0
  99 0000 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
  99      000000
 100 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 100      00
 101              	.LVL4:
 102              	.LBE430:
 103              	.LBE429:
 104              		.cfi_endproc
 105              	.LFE523:
 107              		.section	.text.unlikely._ZN9Fl_SliderD2Ev,"axG",@progbits,_ZN9Fl_SliderD5Ev,comdat
 108              	.LCOLDE3:
 109              		.section	.text._ZN9Fl_SliderD2Ev,"axG",@progbits,_ZN9Fl_SliderD5Ev,comdat
 110              	.LHOTE3:
 111              		.weak	_ZN9Fl_SliderD1Ev
 112              		.set	_ZN9Fl_SliderD1Ev,_ZN9Fl_SliderD2Ev
 113              		.section	.text.unlikely._ZN9Fl_SliderD0Ev,"axG",@progbits,_ZN9Fl_SliderD5Ev,comdat
 114              		.align 2
 115              	.LCOLDB4:
 116              		.section	.text._ZN9Fl_SliderD0Ev,"axG",@progbits,_ZN9Fl_SliderD5Ev,comdat
 117              	.LHOTB4:
 118              		.align 2
 119              		.p2align 4,,15
 120              		.weak	_ZN9Fl_SliderD0Ev
 122              	_ZN9Fl_SliderD0Ev:
 123              	.LFB525:
 124              		.loc 2 61 0
 125              		.cfi_startproc
 126              	.LVL5:
 127 0000 53       		pushq	%rbx
 128              		.cfi_def_cfa_offset 16
 129              		.cfi_offset 3, -16
 130              		.loc 2 61 0
 131 0001 4889FB   		movq	%rdi, %rbx
 132              	.LBB431:
 133              	.LBB432:
 134              	.LBB433:
 135              		.loc 3 49 0
 136 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 136      000000
 137 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 137      00
 138              	.LVL6:
 139              	.LBE433:
 140              	.LBE432:
 141              	.LBE431:
 142              		.loc 2 61 0
 143 0010 4889DF   		movq	%rbx, %rdi
 144 0013 5B       		popq	%rbx
 145              		.cfi_def_cfa_offset 8
 146              	.LVL7:
 147 0014 E9000000 		jmp	_ZdlPv
 147      00
 148              	.LVL8:
 149              		.cfi_endproc
 150              	.LFE525:
 152              		.section	.text.unlikely._ZN9Fl_SliderD0Ev,"axG",@progbits,_ZN9Fl_SliderD5Ev,comdat
 153              	.LCOLDE4:
 154              		.section	.text._ZN9Fl_SliderD0Ev,"axG",@progbits,_ZN9Fl_SliderD5Ev,comdat
 155              	.LHOTE4:
 156              		.section	.text.unlikely._ZN14Fl_Fill_SliderD2Ev,"axG",@progbits,_ZN14Fl_Fill_SliderD5Ev,comdat
 157              		.align 2
 158              	.LCOLDB5:
 159              		.section	.text._ZN14Fl_Fill_SliderD2Ev,"axG",@progbits,_ZN14Fl_Fill_SliderD5Ev,comdat
 160              	.LHOTB5:
 161              		.align 2
 162              		.p2align 4,,15
 163              		.weak	_ZN14Fl_Fill_SliderD2Ev
 165              	_ZN14Fl_Fill_SliderD2Ev:
 166              	.LFB557:
 167              		.file 4 "fltk-1.3.4-1/FL/Fl_Fill_Slider.H"
   1:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //
   2:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** // "$Id: Fl_Fill_Slider.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //
   4:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** // Filled slider header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //
   6:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //
   8:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //
  12:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //
  14:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //
  16:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** //
  18:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** 
  19:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Fill_Slider.H ****    Fl_Fill_Slider widget . */
  21:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** 
  22:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** #ifndef Fl_Fill_Slider_H
  23:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** #define Fl_Fill_Slider_H
  24:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** 
  25:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** #include "Fl_Slider.H"
  26:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** /** Widget that draws a filled horizontal  slider,  useful as a progress or value meter*/
  27:fltk-1.3.4-1/FL/Fl_Fill_Slider.H **** class FL_EXPORT Fl_Fill_Slider : public Fl_Slider {
 168              		.loc 4 27 0
 169              		.cfi_startproc
 170              	.LVL9:
 171              	.LBB434:
 172              	.LBB435:
 173              	.LBB436:
 174              		.loc 3 49 0
 175 0000 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 175      000000
 176 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 176      00
 177              	.LVL10:
 178              	.LBE436:
 179              	.LBE435:
 180              	.LBE434:
 181              		.cfi_endproc
 182              	.LFE557:
 184              		.section	.text.unlikely._ZN14Fl_Fill_SliderD2Ev,"axG",@progbits,_ZN14Fl_Fill_SliderD5Ev,comdat
 185              	.LCOLDE5:
 186              		.section	.text._ZN14Fl_Fill_SliderD2Ev,"axG",@progbits,_ZN14Fl_Fill_SliderD5Ev,comdat
 187              	.LHOTE5:
 188              		.weak	_ZN14Fl_Fill_SliderD1Ev
 189              		.set	_ZN14Fl_Fill_SliderD1Ev,_ZN14Fl_Fill_SliderD2Ev
 190              		.section	.text.unlikely._ZN14Fl_Fill_SliderD0Ev,"axG",@progbits,_ZN14Fl_Fill_SliderD5Ev,comdat
 191              		.align 2
 192              	.LCOLDB6:
 193              		.section	.text._ZN14Fl_Fill_SliderD0Ev,"axG",@progbits,_ZN14Fl_Fill_SliderD5Ev,comdat
 194              	.LHOTB6:
 195              		.align 2
 196              		.p2align 4,,15
 197              		.weak	_ZN14Fl_Fill_SliderD0Ev
 199              	_ZN14Fl_Fill_SliderD0Ev:
 200              	.LFB559:
 201              		.loc 4 27 0
 202              		.cfi_startproc
 203              	.LVL11:
 204 0000 53       		pushq	%rbx
 205              		.cfi_def_cfa_offset 16
 206              		.cfi_offset 3, -16
 207              		.loc 4 27 0
 208 0001 4889FB   		movq	%rdi, %rbx
 209              	.LBB437:
 210              	.LBB438:
 211              	.LBB439:
 212              	.LBB440:
 213              		.loc 3 49 0
 214 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 214      000000
 215 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 215      00
 216              	.LVL12:
 217              	.LBE440:
 218              	.LBE439:
 219              	.LBE438:
 220              	.LBE437:
 221              		.loc 4 27 0
 222 0010 4889DF   		movq	%rbx, %rdi
 223 0013 5B       		popq	%rbx
 224              		.cfi_def_cfa_offset 8
 225              	.LVL13:
 226 0014 E9000000 		jmp	_ZdlPv
 226      00
 227              	.LVL14:
 228              		.cfi_endproc
 229              	.LFE559:
 231              		.section	.text.unlikely._ZN14Fl_Fill_SliderD0Ev,"axG",@progbits,_ZN14Fl_Fill_SliderD5Ev,comdat
 232              	.LCOLDE6:
 233              		.section	.text._ZN14Fl_Fill_SliderD0Ev,"axG",@progbits,_ZN14Fl_Fill_SliderD5Ev,comdat
 234              	.LHOTE6:
 235              		.section	.text.unlikely._ZN13Fl_Hor_SliderD2Ev,"axG",@progbits,_ZN13Fl_Hor_SliderD5Ev,comdat
 236              		.align 2
 237              	.LCOLDB7:
 238              		.section	.text._ZN13Fl_Hor_SliderD2Ev,"axG",@progbits,_ZN13Fl_Hor_SliderD5Ev,comdat
 239              	.LHOTB7:
 240              		.align 2
 241              		.p2align 4,,15
 242              		.weak	_ZN13Fl_Hor_SliderD2Ev
 244              	_ZN13Fl_Hor_SliderD2Ev:
 245              	.LFB553:
 246              		.file 5 "fltk-1.3.4-1/FL/Fl_Hor_Slider.H"
   1:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //
   2:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** // "$Id: Fl_Hor_Slider.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //
   4:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** // Horizontal slider header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //
   6:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //
   8:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //
  12:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //
  14:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //
  16:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** //
  18:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** 
  19:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Hor_Slider.H ****    Fl_Hor_Slider widget . */
  21:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** 
  22:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** #ifndef Fl_Hor_Slider_H
  23:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** #define Fl_Hor_Slider_H
  24:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** 
  25:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** #include "Fl_Slider.H"
  26:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** 
  27:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** /** Horizontal Slider class.
  28:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** 
  29:fltk-1.3.4-1/FL/Fl_Hor_Slider.H ****   \see class Fl_Slider.
  30:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** */
  31:fltk-1.3.4-1/FL/Fl_Hor_Slider.H **** class FL_EXPORT Fl_Hor_Slider : public Fl_Slider {
 247              		.loc 5 31 0
 248              		.cfi_startproc
 249              	.LVL15:
 250              	.LBB441:
 251              	.LBB442:
 252              	.LBB443:
 253              		.loc 3 49 0
 254 0000 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 254      000000
 255 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 255      00
 256              	.LVL16:
 257              	.LBE443:
 258              	.LBE442:
 259              	.LBE441:
 260              		.cfi_endproc
 261              	.LFE553:
 263              		.section	.text.unlikely._ZN13Fl_Hor_SliderD2Ev,"axG",@progbits,_ZN13Fl_Hor_SliderD5Ev,comdat
 264              	.LCOLDE7:
 265              		.section	.text._ZN13Fl_Hor_SliderD2Ev,"axG",@progbits,_ZN13Fl_Hor_SliderD5Ev,comdat
 266              	.LHOTE7:
 267              		.weak	_ZN13Fl_Hor_SliderD1Ev
 268              		.set	_ZN13Fl_Hor_SliderD1Ev,_ZN13Fl_Hor_SliderD2Ev
 269              		.section	.text.unlikely._ZN13Fl_Hor_SliderD0Ev,"axG",@progbits,_ZN13Fl_Hor_SliderD5Ev,comdat
 270              		.align 2
 271              	.LCOLDB8:
 272              		.section	.text._ZN13Fl_Hor_SliderD0Ev,"axG",@progbits,_ZN13Fl_Hor_SliderD5Ev,comdat
 273              	.LHOTB8:
 274              		.align 2
 275              		.p2align 4,,15
 276              		.weak	_ZN13Fl_Hor_SliderD0Ev
 278              	_ZN13Fl_Hor_SliderD0Ev:
 279              	.LFB555:
 280              		.loc 5 31 0
 281              		.cfi_startproc
 282              	.LVL17:
 283 0000 53       		pushq	%rbx
 284              		.cfi_def_cfa_offset 16
 285              		.cfi_offset 3, -16
 286              		.loc 5 31 0
 287 0001 4889FB   		movq	%rdi, %rbx
 288              	.LBB444:
 289              	.LBB445:
 290              	.LBB446:
 291              	.LBB447:
 292              		.loc 3 49 0
 293 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 293      000000
 294 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 294      00
 295              	.LVL18:
 296              	.LBE447:
 297              	.LBE446:
 298              	.LBE445:
 299              	.LBE444:
 300              		.loc 5 31 0
 301 0010 4889DF   		movq	%rbx, %rdi
 302 0013 5B       		popq	%rbx
 303              		.cfi_def_cfa_offset 8
 304              	.LVL19:
 305 0014 E9000000 		jmp	_ZdlPv
 305      00
 306              	.LVL20:
 307              		.cfi_endproc
 308              	.LFE555:
 310              		.section	.text.unlikely._ZN13Fl_Hor_SliderD0Ev,"axG",@progbits,_ZN13Fl_Hor_SliderD5Ev,comdat
 311              	.LCOLDE8:
 312              		.section	.text._ZN13Fl_Hor_SliderD0Ev,"axG",@progbits,_ZN13Fl_Hor_SliderD5Ev,comdat
 313              	.LHOTE8:
 314              		.section	.text.unlikely._ZN18Fl_Hor_Fill_SliderD2Ev,"axG",@progbits,_ZN18Fl_Hor_Fill_SliderD5Ev,co
 315              		.align 2
 316              	.LCOLDB9:
 317              		.section	.text._ZN18Fl_Hor_Fill_SliderD2Ev,"axG",@progbits,_ZN18Fl_Hor_Fill_SliderD5Ev,comdat
 318              	.LHOTB9:
 319              		.align 2
 320              		.p2align 4,,15
 321              		.weak	_ZN18Fl_Hor_Fill_SliderD2Ev
 323              	_ZN18Fl_Hor_Fill_SliderD2Ev:
 324              	.LFB549:
 325              		.file 6 "fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H"
   1:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //
   2:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** // "$Id: Fl_Hor_Fill_Slider.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //
   4:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** // Horizontal fill slider header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //
   6:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //
   8:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //
  12:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //
  14:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //
  16:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** //
  18:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** 
  19:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H ****    Fl_Hor_Fill_Slider widget . */
  21:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** 
  22:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** #ifndef Fl_Hor_Fill_Slider_H
  23:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** #define Fl_Hor_Fill_Slider_H
  24:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** 
  25:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** #include "Fl_Slider.H"
  26:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** 
  27:fltk-1.3.4-1/FL/Fl_Hor_Fill_Slider.H **** class FL_EXPORT Fl_Hor_Fill_Slider : public Fl_Slider {
 326              		.loc 6 27 0
 327              		.cfi_startproc
 328              	.LVL21:
 329              	.LBB448:
 330              	.LBB449:
 331              	.LBB450:
 332              		.loc 3 49 0
 333 0000 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 333      000000
 334 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 334      00
 335              	.LVL22:
 336              	.LBE450:
 337              	.LBE449:
 338              	.LBE448:
 339              		.cfi_endproc
 340              	.LFE549:
 342              		.section	.text.unlikely._ZN18Fl_Hor_Fill_SliderD2Ev,"axG",@progbits,_ZN18Fl_Hor_Fill_SliderD5Ev,co
 343              	.LCOLDE9:
 344              		.section	.text._ZN18Fl_Hor_Fill_SliderD2Ev,"axG",@progbits,_ZN18Fl_Hor_Fill_SliderD5Ev,comdat
 345              	.LHOTE9:
 346              		.weak	_ZN18Fl_Hor_Fill_SliderD1Ev
 347              		.set	_ZN18Fl_Hor_Fill_SliderD1Ev,_ZN18Fl_Hor_Fill_SliderD2Ev
 348              		.section	.text.unlikely._ZN18Fl_Hor_Fill_SliderD0Ev,"axG",@progbits,_ZN18Fl_Hor_Fill_SliderD5Ev,co
 349              		.align 2
 350              	.LCOLDB10:
 351              		.section	.text._ZN18Fl_Hor_Fill_SliderD0Ev,"axG",@progbits,_ZN18Fl_Hor_Fill_SliderD5Ev,comdat
 352              	.LHOTB10:
 353              		.align 2
 354              		.p2align 4,,15
 355              		.weak	_ZN18Fl_Hor_Fill_SliderD0Ev
 357              	_ZN18Fl_Hor_Fill_SliderD0Ev:
 358              	.LFB551:
 359              		.loc 6 27 0
 360              		.cfi_startproc
 361              	.LVL23:
 362 0000 53       		pushq	%rbx
 363              		.cfi_def_cfa_offset 16
 364              		.cfi_offset 3, -16
 365              		.loc 6 27 0
 366 0001 4889FB   		movq	%rdi, %rbx
 367              	.LBB451:
 368              	.LBB452:
 369              	.LBB453:
 370              	.LBB454:
 371              		.loc 3 49 0
 372 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 372      000000
 373 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 373      00
 374              	.LVL24:
 375              	.LBE454:
 376              	.LBE453:
 377              	.LBE452:
 378              	.LBE451:
 379              		.loc 6 27 0
 380 0010 4889DF   		movq	%rbx, %rdi
 381 0013 5B       		popq	%rbx
 382              		.cfi_def_cfa_offset 8
 383              	.LVL25:
 384 0014 E9000000 		jmp	_ZdlPv
 384      00
 385              	.LVL26:
 386              		.cfi_endproc
 387              	.LFE551:
 389              		.section	.text.unlikely._ZN18Fl_Hor_Fill_SliderD0Ev,"axG",@progbits,_ZN18Fl_Hor_Fill_SliderD5Ev,co
 390              	.LCOLDE10:
 391              		.section	.text._ZN18Fl_Hor_Fill_SliderD0Ev,"axG",@progbits,_ZN18Fl_Hor_Fill_SliderD5Ev,comdat
 392              	.LHOTE10:
 393              		.section	.text.unlikely._ZN18Fl_Hor_Nice_SliderD2Ev,"axG",@progbits,_ZN18Fl_Hor_Nice_SliderD5Ev,co
 394              		.align 2
 395              	.LCOLDB11:
 396              		.section	.text._ZN18Fl_Hor_Nice_SliderD2Ev,"axG",@progbits,_ZN18Fl_Hor_Nice_SliderD5Ev,comdat
 397              	.LHOTB11:
 398              		.align 2
 399              		.p2align 4,,15
 400              		.weak	_ZN18Fl_Hor_Nice_SliderD2Ev
 402              	_ZN18Fl_Hor_Nice_SliderD2Ev:
 403              	.LFB545:
 404              		.file 7 "fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H"
   1:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //
   2:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** // "$Id: Fl_Hor_Nice_Slider.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //
   4:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** // Horizontal "nice" slider header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //
   6:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //
   8:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //
  12:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //
  14:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //
  16:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** //
  18:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** 
  19:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H ****    Fl_Hor_Nice_Slider widget . */
  21:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** 
  22:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** #ifndef Fl_Hor_Nice_Slider_H
  23:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** #define Fl_Hor_Nice_Slider_H
  24:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** 
  25:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** #include "Fl_Slider.H"
  26:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** 
  27:fltk-1.3.4-1/FL/Fl_Hor_Nice_Slider.H **** class FL_EXPORT Fl_Hor_Nice_Slider : public Fl_Slider {
 405              		.loc 7 27 0
 406              		.cfi_startproc
 407              	.LVL27:
 408              	.LBB455:
 409              	.LBB456:
 410              	.LBB457:
 411              		.loc 3 49 0
 412 0000 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 412      000000
 413 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 413      00
 414              	.LVL28:
 415              	.LBE457:
 416              	.LBE456:
 417              	.LBE455:
 418              		.cfi_endproc
 419              	.LFE545:
 421              		.section	.text.unlikely._ZN18Fl_Hor_Nice_SliderD2Ev,"axG",@progbits,_ZN18Fl_Hor_Nice_SliderD5Ev,co
 422              	.LCOLDE11:
 423              		.section	.text._ZN18Fl_Hor_Nice_SliderD2Ev,"axG",@progbits,_ZN18Fl_Hor_Nice_SliderD5Ev,comdat
 424              	.LHOTE11:
 425              		.weak	_ZN18Fl_Hor_Nice_SliderD1Ev
 426              		.set	_ZN18Fl_Hor_Nice_SliderD1Ev,_ZN18Fl_Hor_Nice_SliderD2Ev
 427              		.section	.text.unlikely._ZN18Fl_Hor_Nice_SliderD0Ev,"axG",@progbits,_ZN18Fl_Hor_Nice_SliderD5Ev,co
 428              		.align 2
 429              	.LCOLDB12:
 430              		.section	.text._ZN18Fl_Hor_Nice_SliderD0Ev,"axG",@progbits,_ZN18Fl_Hor_Nice_SliderD5Ev,comdat
 431              	.LHOTB12:
 432              		.align 2
 433              		.p2align 4,,15
 434              		.weak	_ZN18Fl_Hor_Nice_SliderD0Ev
 436              	_ZN18Fl_Hor_Nice_SliderD0Ev:
 437              	.LFB547:
 438              		.loc 7 27 0
 439              		.cfi_startproc
 440              	.LVL29:
 441 0000 53       		pushq	%rbx
 442              		.cfi_def_cfa_offset 16
 443              		.cfi_offset 3, -16
 444              		.loc 7 27 0
 445 0001 4889FB   		movq	%rdi, %rbx
 446              	.LBB458:
 447              	.LBB459:
 448              	.LBB460:
 449              	.LBB461:
 450              		.loc 3 49 0
 451 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 451      000000
 452 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 452      00
 453              	.LVL30:
 454              	.LBE461:
 455              	.LBE460:
 456              	.LBE459:
 457              	.LBE458:
 458              		.loc 7 27 0
 459 0010 4889DF   		movq	%rbx, %rdi
 460 0013 5B       		popq	%rbx
 461              		.cfi_def_cfa_offset 8
 462              	.LVL31:
 463 0014 E9000000 		jmp	_ZdlPv
 463      00
 464              	.LVL32:
 465              		.cfi_endproc
 466              	.LFE547:
 468              		.section	.text.unlikely._ZN18Fl_Hor_Nice_SliderD0Ev,"axG",@progbits,_ZN18Fl_Hor_Nice_SliderD5Ev,co
 469              	.LCOLDE12:
 470              		.section	.text._ZN18Fl_Hor_Nice_SliderD0Ev,"axG",@progbits,_ZN18Fl_Hor_Nice_SliderD5Ev,comdat
 471              	.LHOTE12:
 472              		.section	.text.unlikely._ZN14Fl_Nice_SliderD2Ev,"axG",@progbits,_ZN14Fl_Nice_SliderD5Ev,comdat
 473              		.align 2
 474              	.LCOLDB13:
 475              		.section	.text._ZN14Fl_Nice_SliderD2Ev,"axG",@progbits,_ZN14Fl_Nice_SliderD5Ev,comdat
 476              	.LHOTB13:
 477              		.align 2
 478              		.p2align 4,,15
 479              		.weak	_ZN14Fl_Nice_SliderD2Ev
 481              	_ZN14Fl_Nice_SliderD2Ev:
 482              	.LFB541:
 483              		.file 8 "fltk-1.3.4-1/FL/Fl_Nice_Slider.H"
   1:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //
   2:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** // "$Id: Fl_Nice_Slider.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //
   4:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** // "Nice" slider header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //
   6:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //
   8:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //
  12:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //
  14:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //
  16:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** //
  18:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** 
  19:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Nice_Slider.H ****    Fl_Nice_Slider widget . */
  21:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** 
  22:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** #ifndef Fl_Nice_Slider_H
  23:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** #define Fl_Nice_Slider_H
  24:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** 
  25:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** #include "Fl_Slider.H"
  26:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** 
  27:fltk-1.3.4-1/FL/Fl_Nice_Slider.H **** class FL_EXPORT Fl_Nice_Slider : public Fl_Slider {
 484              		.loc 8 27 0
 485              		.cfi_startproc
 486              	.LVL33:
 487              	.LBB462:
 488              	.LBB463:
 489              	.LBB464:
 490              		.loc 3 49 0
 491 0000 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 491      000000
 492 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 492      00
 493              	.LVL34:
 494              	.LBE464:
 495              	.LBE463:
 496              	.LBE462:
 497              		.cfi_endproc
 498              	.LFE541:
 500              		.section	.text.unlikely._ZN14Fl_Nice_SliderD2Ev,"axG",@progbits,_ZN14Fl_Nice_SliderD5Ev,comdat
 501              	.LCOLDE13:
 502              		.section	.text._ZN14Fl_Nice_SliderD2Ev,"axG",@progbits,_ZN14Fl_Nice_SliderD5Ev,comdat
 503              	.LHOTE13:
 504              		.weak	_ZN14Fl_Nice_SliderD1Ev
 505              		.set	_ZN14Fl_Nice_SliderD1Ev,_ZN14Fl_Nice_SliderD2Ev
 506              		.section	.text.unlikely._ZN14Fl_Nice_SliderD0Ev,"axG",@progbits,_ZN14Fl_Nice_SliderD5Ev,comdat
 507              		.align 2
 508              	.LCOLDB14:
 509              		.section	.text._ZN14Fl_Nice_SliderD0Ev,"axG",@progbits,_ZN14Fl_Nice_SliderD5Ev,comdat
 510              	.LHOTB14:
 511              		.align 2
 512              		.p2align 4,,15
 513              		.weak	_ZN14Fl_Nice_SliderD0Ev
 515              	_ZN14Fl_Nice_SliderD0Ev:
 516              	.LFB543:
 517              		.loc 8 27 0
 518              		.cfi_startproc
 519              	.LVL35:
 520 0000 53       		pushq	%rbx
 521              		.cfi_def_cfa_offset 16
 522              		.cfi_offset 3, -16
 523              		.loc 8 27 0
 524 0001 4889FB   		movq	%rdi, %rbx
 525              	.LBB465:
 526              	.LBB466:
 527              	.LBB467:
 528              	.LBB468:
 529              		.loc 3 49 0
 530 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 530      000000
 531 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 531      00
 532              	.LVL36:
 533              	.LBE468:
 534              	.LBE467:
 535              	.LBE466:
 536              	.LBE465:
 537              		.loc 8 27 0
 538 0010 4889DF   		movq	%rbx, %rdi
 539 0013 5B       		popq	%rbx
 540              		.cfi_def_cfa_offset 8
 541              	.LVL37:
 542 0014 E9000000 		jmp	_ZdlPv
 542      00
 543              	.LVL38:
 544              		.cfi_endproc
 545              	.LFE543:
 547              		.section	.text.unlikely._ZN14Fl_Nice_SliderD0Ev,"axG",@progbits,_ZN14Fl_Nice_SliderD5Ev,comdat
 548              	.LCOLDE14:
 549              		.section	.text._ZN14Fl_Nice_SliderD0Ev,"axG",@progbits,_ZN14Fl_Nice_SliderD5Ev,comdat
 550              	.LHOTE14:
 551              		.section	.text.unlikely._ZN9Fl_Slider10_Fl_SliderEv,"ax",@progbits
 552              		.align 2
 553              	.LCOLDB16:
 554              		.section	.text._ZN9Fl_Slider10_Fl_SliderEv,"ax",@progbits
 555              	.LHOTB16:
 556              		.align 2
 557              		.p2align 4,,15
 558              		.globl	_ZN9Fl_Slider10_Fl_SliderEv
 560              	_ZN9Fl_Slider10_Fl_SliderEv:
 561              	.LFB502:
 562              		.file 9 "fltk-1.3.4-1/src/Fl_Slider.cxx"
   1:fltk-1.3.4-1/src/Fl_Slider.cxx ****    1              		.file	"Fl_Slider.cxx"
   2:fltk-1.3.4-1/src/Fl_Slider.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Slider.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Slider.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Slider.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Slider.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Slider.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Slider.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Slider.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Slider.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Slider.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Slider.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Slider.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Slider.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Slider.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Slider.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Slider.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Slider.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Slider.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Slider.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Slider.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Slider.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Slider.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Slider.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Slider.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Slider.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Slider.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Slider.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Slider.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
 563              		.loc 9 31 0
 564              		.cfi_startproc
 565              	.LVL39:
  32:fltk-1.3.4-1/src/Fl_Slider.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 566              		.loc 9 32 0
 567 0000 C787A400 		movl	$0x00000000, 164(%rdi)
 567      00000000 
 567      0000
  33:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 568              		.loc 9 33 0
 569 000a C687A800 		movb	$0, 168(%rdi)
 569      000000
 570 0011 C3       		ret
 571              		.cfi_endproc
 572              	.LFE502:
 574              		.section	.text.unlikely._ZN9Fl_Slider10_Fl_SliderEv
 575              	.LCOLDE16:
 576              		.section	.text._ZN9Fl_Slider10_Fl_SliderEv
 577              	.LHOTE16:
 578              		.section	.text.unlikely._ZN9Fl_SliderC2EiiiiPKc,"ax",@progbits
 579              		.align 2
 580              	.LCOLDB17:
 581              		.section	.text._ZN9Fl_SliderC2EiiiiPKc,"ax",@progbits
 582              	.LHOTB17:
 583              		.align 2
 584              		.p2align 4,,15
 585              		.globl	_ZN9Fl_SliderC2EiiiiPKc
 587              	_ZN9Fl_SliderC2EiiiiPKc:
 588              	.LFB508:
  34:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Slider.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Slider.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Slider.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Slider.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Slider.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Slider.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 589              		.loc 9 40 0
 590              		.cfi_startproc
 591              	.LVL40:
 592 0000 53       		pushq	%rbx
 593              		.cfi_def_cfa_offset 16
 594              		.cfi_offset 3, -16
 595              		.loc 9 40 0
 596 0001 4889FB   		movq	%rdi, %rbx
 597              	.LBB469:
  41:fltk-1.3.4-1/src/Fl_Slider.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 598              		.loc 9 41 0
 599 0004 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 599      00
 600              	.LVL41:
 601 0009 48C70300 		movq	$_ZTV9Fl_Slider+16, (%rbx)
 601      000000
 602              	.LVL42:
 603              	.LBB470:
 604              	.LBB471:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 605              		.loc 1 372 0
 606 0010 C6436E03 		movb	$3, 110(%rbx)
 607              	.LVL43:
 608              	.LBE471:
 609              	.LBE470:
 610              	.LBB472:
 611              	.LBB473:
  32:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 612              		.loc 9 32 0
 613 0014 C783A400 		movl	$0x00000000, 164(%rbx)
 613      00000000 
 613      0000
  33:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 614              		.loc 9 33 0
 615 001e C683A800 		movb	$0, 168(%rbx)
 615      000000
 616              	.LVL44:
 617              	.LBE473:
 618              	.LBE472:
 619              	.LBE469:
  42:fltk-1.3.4-1/src/Fl_Slider.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Slider.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Slider.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 620              		.loc 9 44 0
 621 0025 5B       		popq	%rbx
 622              		.cfi_def_cfa_offset 8
 623              	.LVL45:
 624 0026 C3       		ret
 625              		.cfi_endproc
 626              	.LFE508:
 628              		.section	.text.unlikely._ZN9Fl_SliderC2EiiiiPKc
 629              	.LCOLDE17:
 630              		.section	.text._ZN9Fl_SliderC2EiiiiPKc
 631              	.LHOTE17:
 632              		.globl	_ZN9Fl_SliderC1EiiiiPKc
 633              		.set	_ZN9Fl_SliderC1EiiiiPKc,_ZN9Fl_SliderC2EiiiiPKc
 634              		.section	.text.unlikely._ZN9Fl_SliderC2EhiiiiPKc,"ax",@progbits
 635              		.align 2
 636              	.LCOLDB18:
 637              		.section	.text._ZN9Fl_SliderC2EhiiiiPKc,"ax",@progbits
 638              	.LHOTB18:
 639              		.align 2
 640              		.p2align 4,,15
 641              		.globl	_ZN9Fl_SliderC2EhiiiiPKc
 643              	_ZN9Fl_SliderC2EhiiiiPKc:
 644              	.LFB511:
  45:fltk-1.3.4-1/src/Fl_Slider.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Slider.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Slider.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Slider.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Slider.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Slider.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 645              		.loc 9 50 0
 646              		.cfi_startproc
 647              	.LVL46:
 648 0000 55       		pushq	%rbp
 649              		.cfi_def_cfa_offset 16
 650              		.cfi_offset 6, -16
 651 0001 53       		pushq	%rbx
 652              		.cfi_def_cfa_offset 24
 653              		.cfi_offset 3, -24
 654 0002 89F5     		movl	%esi, %ebp
 655 0004 89D6     		movl	%edx, %esi
 656              	.LVL47:
 657 0006 89CA     		movl	%ecx, %edx
 658              	.LVL48:
 659 0008 4489C1   		movl	%r8d, %ecx
 660              	.LVL49:
 661 000b 4883EC08 		subq	$8, %rsp
 662              		.cfi_def_cfa_offset 32
 663              		.loc 9 50 0
 664 000f 4589C8   		movl	%r9d, %r8d
 665              	.LVL50:
 666 0012 4889FB   		movq	%rdi, %rbx
 667              	.LBB474:
  51:fltk-1.3.4-1/src/Fl_Slider.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 668              		.loc 9 51 0
 669 0015 4C8B4C24 		movq	32(%rsp), %r9
 669      20
 670              	.LVL51:
 671 001a E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 671      00
 672              	.LVL52:
 673              	.LBB475:
 674              	.LBB476:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 675              		.loc 1 279 0
 676 001f 40886B6C 		movb	%bpl, 108(%rbx)
 677              	.LBE476:
 678              	.LBE475:
  52:fltk-1.3.4-1/src/Fl_Slider.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Slider.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 679              		.loc 9 53 0
 680 0023 83ED04   		subl	$4, %ebp
  51:fltk-1.3.4-1/src/Fl_Slider.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 681              		.loc 9 51 0
 682 0026 48C70300 		movq	$_ZTV9Fl_Slider+16, (%rbx)
 682      000000
 683              	.LVL53:
 684              		.loc 9 53 0
 685 002d 4080FD02 		cmpb	$2, %bpl
 686              	.LBB477:
 687              	.LBB478:
  32:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 688              		.loc 9 32 0
 689 0031 C783A400 		movl	$0x00000000, 164(%rbx)
 689      00000000 
 689      0000
  33:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 690              		.loc 9 33 0
 691 003b C683A800 		movb	$0, 168(%rbx)
 691      000000
 692              	.LBE478:
 693              	.LBE477:
 694              		.loc 9 53 0
 695 0042 19C0     		sbbl	%eax, %eax
 696 0044 83E0FE   		andl	$-2, %eax
 697 0047 83C003   		addl	$3, %eax
 698              	.LVL54:
 699              	.LBB479:
 700              	.LBB480:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 701              		.loc 1 372 0
 702 004a 88436E   		movb	%al, 110(%rbx)
 703              	.LVL55:
 704              	.LBE480:
 705              	.LBE479:
 706              	.LBE474:
  54:fltk-1.3.4-1/src/Fl_Slider.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Slider.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Slider.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 707              		.loc 9 56 0
 708 004d 4883C408 		addq	$8, %rsp
 709              		.cfi_def_cfa_offset 24
 710 0051 5B       		popq	%rbx
 711              		.cfi_def_cfa_offset 16
 712              	.LVL56:
 713 0052 5D       		popq	%rbp
 714              		.cfi_def_cfa_offset 8
 715 0053 C3       		ret
 716              		.cfi_endproc
 717              	.LFE511:
 719              		.section	.text.unlikely._ZN9Fl_SliderC2EhiiiiPKc
 720              	.LCOLDE18:
 721              		.section	.text._ZN9Fl_SliderC2EhiiiiPKc
 722              	.LHOTE18:
 723              		.globl	_ZN9Fl_SliderC1EhiiiiPKc
 724              		.set	_ZN9Fl_SliderC1EhiiiiPKc,_ZN9Fl_SliderC2EhiiiiPKc
 725              		.section	.text.unlikely._ZN9Fl_Slider11slider_sizeEd,"ax",@progbits
 726              		.align 2
 727              	.LCOLDB22:
 728              		.section	.text._ZN9Fl_Slider11slider_sizeEd,"ax",@progbits
 729              	.LHOTB22:
 730              		.align 2
 731              		.p2align 4,,15
 732              		.globl	_ZN9Fl_Slider11slider_sizeEd
 734              	_ZN9Fl_Slider11slider_sizeEd:
 735              	.LFB513:
  57:fltk-1.3.4-1/src/Fl_Slider.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Slider.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 736              		.loc 9 58 0
 737              		.cfi_startproc
 738              	.LVL57:
  59:fltk-1.3.4-1/src/Fl_Slider.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 739              		.loc 9 59 0
 740 0000 660FEFD2 		pxor	%xmm2, %xmm2
 741 0004 660FEFC9 		pxor	%xmm1, %xmm1
 742 0008 660F2ED0 		ucomisd	%xmm0, %xmm2
 743 000c 7712     		ja	.L30
  60:fltk-1.3.4-1/src/Fl_Slider.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 744              		.loc 9 60 0
 745 000e 660F2E05 		ucomisd	.LC21(%rip), %xmm0
 745      00000000 
 746 0016 762A     		jbe	.L38
 747 0018 F30F100D 		movss	.LC19(%rip), %xmm1
 747      00000000 
 748              	.L30:
 749              	.LVL58:
  61:fltk-1.3.4-1/src/Fl_Slider.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 750              		.loc 9 61 0
 751 0020 0F2E8FA4 		ucomiss	164(%rdi), %xmm1
 751      000000
 752 0027 7A07     		jp	.L35
 753 0029 7505     		jne	.L35
 754 002b F3C3     		rep ret
 755 002d 0F1F00   		.p2align 4,,10
 756              		.p2align 3
 757              	.L35:
  62:fltk-1.3.4-1/src/Fl_Slider.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 758              		.loc 9 62 0
 759 0030 F30F118F 		movss	%xmm1, 164(%rdi)
 759      A4000000 
  63:fltk-1.3.4-1/src/Fl_Slider.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 760              		.loc 9 63 0
 761 0038 BE020000 		movl	$2, %esi
 761      00
 762 003d E9000000 		jmp	_ZN9Fl_Widget6damageEh
 762      00
 763              	.LVL59:
 764              	.L38:
 765 0042 660FEFC9 		pxor	%xmm1, %xmm1
 766 0046 F20F5AC8 		cvtsd2ss	%xmm0, %xmm1
 767 004a EBD4     		jmp	.L30
 768              		.cfi_endproc
 769              	.LFE513:
 771              		.section	.text.unlikely._ZN9Fl_Slider11slider_sizeEd
 772              	.LCOLDE22:
 773              		.section	.text._ZN9Fl_Slider11slider_sizeEd
 774              	.LHOTE22:
 775              		.section	.text.unlikely._ZN9Fl_Slider6boundsEdd,"ax",@progbits
 776              		.align 2
 777              	.LCOLDB23:
 778              		.section	.text._ZN9Fl_Slider6boundsEdd,"ax",@progbits
 779              	.LHOTB23:
 780              		.align 2
 781              		.p2align 4,,15
 782              		.globl	_ZN9Fl_Slider6boundsEdd
 784              	_ZN9Fl_Slider6boundsEdd:
 785              	.LFB514:
  64:fltk-1.3.4-1/src/Fl_Slider.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Slider.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Slider.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Slider.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Slider.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Slider.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Slider.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Slider.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 786              		.loc 9 71 0
 787              		.cfi_startproc
 788              	.LVL60:
  72:fltk-1.3.4-1/src/Fl_Slider.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 789              		.loc 9 72 0
 790 0000 660F2E87 		ucomisd	136(%rdi), %xmm0
 790      88000000 
 791 0008 7A02     		jp	.L40
 792 000a 7424     		je	.L42
 793              	.L40:
 794              	.LVL61:
 795              	.LBB481:
 796              	.LBB482:
  50:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  51:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double value_;
  52:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double previous_value_;
  53:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double min, max; // truncates to this range *after* rounding
  54:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double A; int B; // rounds to multiples of A/B, or no rounding if A is zero
  55:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  56:fltk-1.3.4-1/FL/Fl_Valuator.H **** protected:
  57:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /** Tells if the valuator is an FL_HORIZONTAL one */
  58:fltk-1.3.4-1/FL/Fl_Valuator.H ****   int horizontal() const {return type()& FL_HORIZONTAL;}
  59:fltk-1.3.4-1/FL/Fl_Valuator.H ****   Fl_Valuator(int X, int Y, int W, int H, const char* L);
  60:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  61:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /** Gets the previous floating point value before an event changed it */
  62:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double previous_value() const {return previous_value_;}
  63:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /** Stores the current value in the previous value */
  64:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void handle_push() {previous_value_ = value_;}
  65:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double softclamp(double);
  66:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void handle_drag(double newvalue);
  67:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void handle_release(); // use drag() value
  68:fltk-1.3.4-1/FL/Fl_Valuator.H ****   virtual void value_damage(); // cause damage() due to value() changing
  69:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /** Sets the current floating point value. */
  70:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void set_value(double v) {value_ = v;}
  71:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  72:fltk-1.3.4-1/FL/Fl_Valuator.H **** public:
  73:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  74:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Sets the minimum (a) and maximum (b) values for the valuator widget. */
  75:fltk-1.3.4-1/FL/Fl_Valuator.H ****     void bounds(double a, double b) {min=a; max=b;}
 797              		.loc 3 75 0
 798 000c F20F1187 		movsd	%xmm0, 136(%rdi)
 798      88000000 
 799              	.LBE482:
 800              	.LBE481:
  73:fltk-1.3.4-1/src/Fl_Slider.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Slider.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 801              		.loc 9 74 0
 802 0014 BE020000 		movl	$2, %esi
 802      00
 803              	.LBB484:
 804              	.LBB483:
 805              		.loc 3 75 0
 806 0019 F20F118F 		movsd	%xmm1, 144(%rdi)
 806      90000000 
 807              	.LVL62:
 808              	.LBE483:
 809              	.LBE484:
 810              		.loc 9 74 0
 811 0021 E9000000 		jmp	_ZN9Fl_Widget6damageEh
 811      00
 812              	.LVL63:
 813 0026 662E0F1F 		.p2align 4,,10
 813      84000000 
 813      0000
 814              		.p2align 3
 815              	.L42:
  72:fltk-1.3.4-1/src/Fl_Slider.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 816              		.loc 9 72 0 discriminator 2
 817 0030 660F2E8F 		ucomisd	144(%rdi), %xmm1
 817      90000000 
 818 0038 7AD2     		jp	.L40
 819 003a 75D0     		jne	.L40
 820 003c F3C3     		rep ret
 821              		.cfi_endproc
 822              	.LFE514:
 824              		.section	.text.unlikely._ZN9Fl_Slider6boundsEdd
 825              	.LCOLDE23:
 826              		.section	.text._ZN9Fl_Slider6boundsEdd
 827              	.LHOTE23:
 828              		.section	.text.unlikely._ZN9Fl_Slider11scrollvalueEiiii,"ax",@progbits
 829              		.align 2
 830              	.LCOLDB24:
 831              		.section	.text._ZN9Fl_Slider11scrollvalueEiiii,"ax",@progbits
 832              	.LHOTB24:
 833              		.align 2
 834              		.p2align 4,,15
 835              		.globl	_ZN9Fl_Slider11scrollvalueEiiii
 837              	_ZN9Fl_Slider11scrollvalueEiiii:
 838              	.LFB515:
  75:fltk-1.3.4-1/src/Fl_Slider.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Slider.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Slider.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Slider.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Slider.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Slider.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Slider.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Slider.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Slider.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Slider.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Slider.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Slider.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 839              		.loc 9 86 0
 840              		.cfi_startproc
 841              	.LVL64:
 842 0000 55       		pushq	%rbp
 843              		.cfi_def_cfa_offset 16
 844              		.cfi_offset 6, -16
 845 0001 53       		pushq	%rbx
 846              		.cfi_def_cfa_offset 24
 847              		.cfi_offset 3, -24
  87:fltk-1.3.4-1/src/Fl_Slider.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Slider.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 848              		.loc 9 88 0
 849 0002 8D0416   		leal	(%rsi,%rdx), %eax
  86:fltk-1.3.4-1/src/Fl_Slider.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 850              		.loc 9 86 0
 851 0005 4889FB   		movq	%rdi, %rbx
 852 0008 89F5     		movl	%esi, %ebp
 853 000a 4883EC18 		subq	$24, %rsp
 854              		.cfi_def_cfa_offset 48
 855              	.LBB485:
 856              	.LBB486:
  76:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Gets the minimum value for the valuator.  */
  77:fltk-1.3.4-1/FL/Fl_Valuator.H ****     double minimum() const {return min;}
  78:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Sets the minimum value for the valuator.  */
  79:fltk-1.3.4-1/FL/Fl_Valuator.H ****     void minimum(double a) {min = a;}
  80:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Gets the maximum value for the valuator.  */
  81:fltk-1.3.4-1/FL/Fl_Valuator.H ****     double maximum() const {return max;}
  82:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Sets the maximum value for the valuator.  */
  83:fltk-1.3.4-1/FL/Fl_Valuator.H ****     void maximum(double a) {max = a;}
  84:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**
  85:fltk-1.3.4-1/FL/Fl_Valuator.H ****     Sets the minimum and maximum values for the valuator. When
  86:fltk-1.3.4-1/FL/Fl_Valuator.H ****     the user manipulates the widget, the value is limited to this
  87:fltk-1.3.4-1/FL/Fl_Valuator.H ****     range. This clamping is done <I>after</I> rounding to the step
  88:fltk-1.3.4-1/FL/Fl_Valuator.H ****     value (this makes a difference if the range is not a multiple of
  89:fltk-1.3.4-1/FL/Fl_Valuator.H ****     the step).
  90:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  91:fltk-1.3.4-1/FL/Fl_Valuator.H ****     The minimum may be greater than the maximum. This has the
  92:fltk-1.3.4-1/FL/Fl_Valuator.H ****     effect of "reversing" the object so the larger values
  93:fltk-1.3.4-1/FL/Fl_Valuator.H ****     are in the opposite direction. This also switches which end of
  94:fltk-1.3.4-1/FL/Fl_Valuator.H ****     the filled sliders is filled.
  95:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
  96:fltk-1.3.4-1/FL/Fl_Valuator.H ****     Some widgets consider this a "soft" range.  This
  97:fltk-1.3.4-1/FL/Fl_Valuator.H ****     means they will stop at the range, but if the user releases and
  98:fltk-1.3.4-1/FL/Fl_Valuator.H ****     grabs the control again and tries to move it further, it is
  99:fltk-1.3.4-1/FL/Fl_Valuator.H ****     allowed.
 100:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
 101:fltk-1.3.4-1/FL/Fl_Valuator.H ****     The range may affect the display. You must redraw()
 102:fltk-1.3.4-1/FL/Fl_Valuator.H ****     the widget after changing the range.
 103:fltk-1.3.4-1/FL/Fl_Valuator.H ****   */
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void range(double a, double b) {min = a; max = b;}
 105:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void step(int a) {A = a; B = 1;}
 107:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 108:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void step(double a, int b) {A = a; B = b;}
 857              		.loc 3 108 0
 858 000e C787A000 		movl	$1, 160(%rdi)
 858      00000100 
 858      0000
 859              	.LVL65:
 860              	.LBE486:
 861              	.LBE485:
 862              		.loc 9 88 0
 863 0018 89C6     		movl	%eax, %esi
 864              	.LVL66:
 865              	.LBB489:
 866              	.LBB487:
 867              		.loc 3 108 0
 868 001a F20F101D 		movsd	.LC21(%rip), %xmm3
 868      00000000 
 869              	.LBE487:
 870              	.LBE489:
 871              		.loc 9 88 0
 872 0022 29CE     		subl	%ecx, %esi
 873              	.LBB490:
 874              	.LBB488:
 875              		.loc 3 108 0
 876 0024 F20F119F 		movsd	%xmm3, 152(%rdi)
 876      98000000 
 877              	.LBE488:
 878              	.LBE490:
 879              		.loc 9 88 0
 880 002c 428D3C01 		leal	(%rcx,%r8), %edi
 881              	.LVL67:
 882 0030 39F8     		cmpl	%edi, %eax
 883 0032 440F4FC6 		cmovg	%esi, %r8d
 884              	.LVL68:
  89:fltk-1.3.4-1/src/Fl_Slider.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 885              		.loc 9 89 0
 886 0036 4139D0   		cmpl	%edx, %r8d
 887 0039 0F8EA100 		jle	.L51
 887      0000
 888              		.loc 9 89 0 is_stmt 0 discriminator 1
 889 003f 660FEFC0 		pxor	%xmm0, %xmm0
 890 0043 660FEFC9 		pxor	%xmm1, %xmm1
 891              	.LBB491:
 892              	.LBB492:
  59:fltk-1.3.4-1/src/Fl_Slider.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 893              		.loc 9 59 0 is_stmt 1 discriminator 1
 894 0047 660FEFD2 		pxor	%xmm2, %xmm2
 895              	.LBE492:
 896              	.LBE491:
 897              		.loc 9 89 0 discriminator 1
 898 004b F20F2AC2 		cvtsi2sd	%edx, %xmm0
 899 004f F2410F2A 		cvtsi2sd	%r8d, %xmm1
 899      C8
 900 0054 F20F5EC1 		divsd	%xmm1, %xmm0
 901              	.LVL69:
 902              	.LBB495:
 903              	.LBB493:
  59:fltk-1.3.4-1/src/Fl_Slider.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 904              		.loc 9 59 0 discriminator 1
 905 0058 660FEFC9 		pxor	%xmm1, %xmm1
 906 005c 660F2ED0 		ucomisd	%xmm0, %xmm2
 907 0060 0F869200 		jbe	.L55
 907      0000
 908              	.LVL70:
 909              	.L46:
  61:fltk-1.3.4-1/src/Fl_Slider.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 910              		.loc 9 61 0
 911 0066 0F2E8BA4 		ucomiss	164(%rbx), %xmm1
 911      000000
 912 006d 0F8A9D00 		jp	.L47
 912      0000
 913 0073 0F859700 		jne	.L47
 913      0000
 914              	.LVL71:
 915              	.L48:
 916              	.LBE493:
 917              	.LBE495:
  90:fltk-1.3.4-1/src/Fl_Slider.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 918              		.loc 9 90 0 discriminator 4
 919 0079 660FEFC9 		pxor	%xmm1, %xmm1
 920 007d 4129D0   		subl	%edx, %r8d
 921 0080 4101C8   		addl	%ecx, %r8d
 922 0083 660FEFC0 		pxor	%xmm0, %xmm0
 923 0087 F20F2AC9 		cvtsi2sd	%ecx, %xmm1
 924              	.LVL72:
 925 008b F2410F2A 		cvtsi2sd	%r8d, %xmm0
 925      C0
 926              	.LVL73:
 927              	.LBB496:
 928              	.LBB497:
  72:fltk-1.3.4-1/src/Fl_Slider.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 929              		.loc 9 72 0 discriminator 4
 930 0090 660F2E8B 		ucomisd	136(%rbx), %xmm1
 930      88000000 
 931 0098 7A02     		jp	.L49
 932 009a 7434     		je	.L56
 933              	.L49:
 934              	.LVL74:
 935              	.LBB498:
 936              	.LBB499:
  75:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Gets the minimum value for the valuator.  */
 937              		.loc 3 75 0
 938 009c F20F118B 		movsd	%xmm1, 136(%rbx)
 938      88000000 
 939              	.LBE499:
 940              	.LBE498:
  74:fltk-1.3.4-1/src/Fl_Slider.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 941              		.loc 9 74 0
 942 00a4 BE020000 		movl	$2, %esi
 942      00
 943 00a9 4889DF   		movq	%rbx, %rdi
 944              	.LBB501:
 945              	.LBB500:
  75:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Gets the minimum value for the valuator.  */
 946              		.loc 3 75 0
 947 00ac F20F1183 		movsd	%xmm0, 144(%rbx)
 947      90000000 
 948              	.LVL75:
 949              	.LBE500:
 950              	.LBE501:
  74:fltk-1.3.4-1/src/Fl_Slider.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 951              		.loc 9 74 0
 952 00b4 E8000000 		call	_ZN9Fl_Widget6damageEh
 952      00
 953              	.LVL76:
 954              	.L50:
 955              	.LBE497:
 956              	.LBE496:
  91:fltk-1.3.4-1/src/Fl_Slider.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 957              		.loc 9 91 0 discriminator 4
 958 00b9 660FEFC0 		pxor	%xmm0, %xmm0
  92:fltk-1.3.4-1/src/Fl_Slider.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 959              		.loc 9 92 0 discriminator 4
 960 00bd 4883C418 		addq	$24, %rsp
 961              		.cfi_remember_state
 962              		.cfi_def_cfa_offset 24
  91:fltk-1.3.4-1/src/Fl_Slider.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 963              		.loc 9 91 0 discriminator 4
 964 00c1 4889DF   		movq	%rbx, %rdi
 965              		.loc 9 92 0 discriminator 4
 966 00c4 5B       		popq	%rbx
 967              		.cfi_def_cfa_offset 16
 968              	.LVL77:
  91:fltk-1.3.4-1/src/Fl_Slider.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 969              		.loc 9 91 0 discriminator 4
 970 00c5 F20F2AC5 		cvtsi2sd	%ebp, %xmm0
 971              		.loc 9 92 0 discriminator 4
 972 00c9 5D       		popq	%rbp
 973              		.cfi_def_cfa_offset 8
 974              	.LVL78:
  91:fltk-1.3.4-1/src/Fl_Slider.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 975              		.loc 9 91 0 discriminator 4
 976 00ca E9000000 		jmp	_ZN11Fl_Valuator5valueEd
 976      00
 977              	.LVL79:
 978 00cf 90       		.p2align 4,,10
 979              		.p2align 3
 980              	.L56:
 981              		.cfi_restore_state
 982              	.LBB503:
 983              	.LBB502:
  72:fltk-1.3.4-1/src/Fl_Slider.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 984              		.loc 9 72 0
 985 00d0 660F2E83 		ucomisd	144(%rbx), %xmm0
 985      90000000 
 986 00d8 7AC2     		jp	.L49
 987 00da 75C0     		jne	.L49
 988 00dc EBDB     		jmp	.L50
 989              	.LVL80:
 990 00de 6690     		.p2align 4,,10
 991              		.p2align 3
 992              	.L51:
 993              	.LBE502:
 994              	.LBE503:
  89:fltk-1.3.4-1/src/Fl_Slider.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 995              		.loc 9 89 0
 996 00e0 F20F1005 		movsd	.LC21(%rip), %xmm0
 996      00000000 
 997              	.L45:
 998              	.LVL81:
 999 00e8 660FEFC9 		pxor	%xmm1, %xmm1
 1000 00ec F20F5AC8 		cvtsd2ss	%xmm0, %xmm1
 1001 00f0 E971FFFF 		jmp	.L46
 1001      FF
 1002              	.LVL82:
 1003              		.p2align 4,,10
 1004 00f5 0F1F00   		.p2align 3
 1005              	.L55:
 1006              	.LBB504:
 1007              	.LBB494:
  60:fltk-1.3.4-1/src/Fl_Slider.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1008              		.loc 9 60 0
 1009 00f8 660F2EC3 		ucomisd	%xmm3, %xmm0
 1010 00fc 76EA     		jbe	.L45
 1011 00fe F30F100D 		movss	.LC19(%rip), %xmm1
 1011      00000000 
 1012 0106 E95BFFFF 		jmp	.L46
 1012      FF
 1013              	.LVL83:
 1014 010b 0F1F4400 		.p2align 4,,10
 1014      00
 1015              		.p2align 3
 1016              	.L47:
  62:fltk-1.3.4-1/src/Fl_Slider.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 1017              		.loc 9 62 0
 1018 0110 F30F118B 		movss	%xmm1, 164(%rbx)
 1018      A4000000 
  63:fltk-1.3.4-1/src/Fl_Slider.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1019              		.loc 9 63 0
 1020 0118 BE020000 		movl	$2, %esi
 1020      00
 1021 011d 4889DF   		movq	%rbx, %rdi
 1022 0120 44894424 		movl	%r8d, 12(%rsp)
 1022      0C
 1023 0125 894C2408 		movl	%ecx, 8(%rsp)
 1024 0129 89542404 		movl	%edx, 4(%rsp)
 1025 012d E8000000 		call	_ZN9Fl_Widget6damageEh
 1025      00
 1026              	.LVL84:
 1027 0132 448B4424 		movl	12(%rsp), %r8d
 1027      0C
 1028 0137 8B4C2408 		movl	8(%rsp), %ecx
 1029 013b 8B542404 		movl	4(%rsp), %edx
 1030 013f E935FFFF 		jmp	.L48
 1030      FF
 1031              	.LBE494:
 1032              	.LBE504:
 1033              		.cfi_endproc
 1034              	.LFE515:
 1036              		.section	.text.unlikely._ZN9Fl_Slider11scrollvalueEiiii
 1037              	.LCOLDE24:
 1038              		.section	.text._ZN9Fl_Slider11scrollvalueEiiii
 1039              	.LHOTE24:
 1040              		.section	.text.unlikely._ZN9Fl_Slider7draw_bgEiiii,"ax",@progbits
 1041              		.align 2
 1042              	.LCOLDB25:
 1043              		.section	.text._ZN9Fl_Slider7draw_bgEiiii,"ax",@progbits
 1044              	.LHOTB25:
 1045              		.align 2
 1046              		.p2align 4,,15
 1047              		.globl	_ZN9Fl_Slider7draw_bgEiiii
 1049              	_ZN9Fl_Slider7draw_bgEiiii:
 1050              	.LFB516:
  93:fltk-1.3.4-1/src/Fl_Slider.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Slider.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Slider.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Slider.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Slider.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Slider.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Slider.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Slider.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Slider.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 1051              		.loc 9 101 0
 1052              		.cfi_startproc
 1053              	.LVL85:
 1054 0000 4156     		pushq	%r14
 1055              		.cfi_def_cfa_offset 16
 1056              		.cfi_offset 14, -16
 1057 0002 4155     		pushq	%r13
 1058              		.cfi_def_cfa_offset 24
 1059              		.cfi_offset 13, -24
 1060 0004 4189CE   		movl	%ecx, %r14d
 1061 0007 4154     		pushq	%r12
 1062              		.cfi_def_cfa_offset 32
 1063              		.cfi_offset 12, -32
 1064 0009 55       		pushq	%rbp
 1065              		.cfi_def_cfa_offset 40
 1066              		.cfi_offset 6, -40
 1067 000a 4189D5   		movl	%edx, %r13d
 1068 000d 53       		pushq	%rbx
 1069              		.cfi_def_cfa_offset 48
 1070              		.cfi_offset 3, -48
 1071              		.loc 9 101 0
 1072 000e 4889FB   		movq	%rdi, %rbx
 1073              	.LBB505:
 1074              	.LBB506:
 1075              		.file 10 "fltk-1.3.4-1/FL/fl_draw.H"
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
 1076              		.loc 10 82 0
 1077 0011 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1077      000000
 1078              	.LVL86:
 1079              	.LBE506:
 1080              	.LBE505:
 1081              		.loc 9 101 0
 1082 0018 4189F4   		movl	%esi, %r12d
 1083              	.LVL87:
 1084 001b 4489C5   		movl	%r8d, %ebp
 1085              	.LVL88:
 1086              	.LBB508:
 1087              	.LBB507:
 1088              		.loc 10 82 0
 1089 001e 488B07   		movq	(%rdi), %rax
 1090 0021 FF905001 		call	*336(%rax)
 1090      0000
 1091              	.LVL89:
 1092              	.LBE507:
 1093              	.LBE508:
 102:fltk-1.3.4-1/src/Fl_Slider.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Slider.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 1094              		.loc 9 103 0
 1095 0027 4889DF   		movq	%rbx, %rdi
 1096 002a E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 1096      00
 1097              	.LVL90:
 1098              	.LBB509:
 1099              	.LBB510:
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
 1100              		.loc 10 103 0
 1101 002f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1101      000000
 1102 0036 488B07   		movq	(%rdi), %rax
 1103 0039 FF907001 		call	*368(%rax)
 1103      0000
 1104              	.LVL91:
 1105              	.LBE510:
 1106              	.LBE509:
 104:fltk-1.3.4-1/src/Fl_Slider.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Slider.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Slider.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 1107              		.loc 9 106 0
 1108 003f 4889DF   		movq	%rbx, %rdi
 1109 0042 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 1109      00
 1110              	.LVL92:
 1111 0047 0FB6536C 		movzbl	108(%rbx), %edx
 1112 004b 83F801   		cmpl	$1, %eax
 1113 004e 19C0     		sbbl	%eax, %eax
 1114 0050 83E008   		andl	$8, %eax
 1115              	.LVL93:
 107:fltk-1.3.4-1/src/Fl_Slider.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1116              		.loc 9 107 0
 1117 0053 80FA04   		cmpb	$4, %dl
 1118 0056 7458     		je	.L63
 1119              	.LVL94:
 108:fltk-1.3.4-1/src/Fl_Slider.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Slider.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 1120              		.loc 9 109 0
 1121 0058 80FA05   		cmpb	$5, %dl
 1122 005b 7413     		je	.L64
 1123              	.LVL95:
 1124              	.L57:
 110:fltk-1.3.4-1/src/Fl_Slider.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Slider.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Slider.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 1125              		.loc 9 112 0
 1126 005d 5B       		popq	%rbx
 1127              		.cfi_remember_state
 1128              		.cfi_def_cfa_offset 40
 1129              	.LVL96:
 1130 005e 5D       		popq	%rbp
 1131              		.cfi_def_cfa_offset 32
 1132              	.LVL97:
 1133 005f 415C     		popq	%r12
 1134              		.cfi_def_cfa_offset 24
 1135              	.LVL98:
 1136 0061 415D     		popq	%r13
 1137              		.cfi_def_cfa_offset 16
 1138              	.LVL99:
 1139 0063 415E     		popq	%r14
 1140              		.cfi_def_cfa_offset 8
 1141 0065 C3       		ret
 1142              	.LVL100:
 1143 0066 662E0F1F 		.p2align 4,,10
 1143      84000000 
 1143      0000
 1144              		.p2align 3
 1145              	.L64:
 1146              		.cfi_restore_state
 110:fltk-1.3.4-1/src/Fl_Slider.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1147              		.loc 9 110 0
 1148 0070 4189E9   		movl	%ebp, %r9d
 1149 0073 4883EC08 		subq	$8, %rsp
 1150              		.cfi_def_cfa_offset 56
 1151 0077 4489E2   		movl	%r12d, %edx
 1152 007a 41C1E91F 		shrl	$31, %r9d
 1153 007e 50       		pushq	%rax
 1154              		.cfi_def_cfa_offset 64
 1155 007f 4589F0   		movl	%r14d, %r8d
 1156 0082 4401CD   		addl	%r9d, %ebp
 1157              	.LVL101:
 1158 0085 4889DF   		movq	%rbx, %rdi
 1159 0088 41B90400 		movl	$4, %r9d
 1159      0000
 1160 008e D1FD     		sarl	%ebp
 1161 0090 BE070000 		movl	$7, %esi
 1161      00
 1162 0095 418D4C2D 		leal	-2(%r13,%rbp), %ecx
 1162      FE
 1163 009a E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1163      00
 1164              	.LVL102:
 1165 009f 58       		popq	%rax
 1166              		.cfi_def_cfa_offset 56
 1167 00a0 5A       		popq	%rdx
 1168              		.cfi_def_cfa_offset 48
 1169              		.loc 9 112 0
 1170 00a1 5B       		popq	%rbx
 1171              		.cfi_remember_state
 1172              		.cfi_def_cfa_offset 40
 1173              	.LVL103:
 1174 00a2 5D       		popq	%rbp
 1175              		.cfi_def_cfa_offset 32
 1176 00a3 415C     		popq	%r12
 1177              		.cfi_def_cfa_offset 24
 1178              	.LVL104:
 1179 00a5 415D     		popq	%r13
 1180              		.cfi_def_cfa_offset 16
 1181              	.LVL105:
 1182 00a7 415E     		popq	%r14
 1183              		.cfi_def_cfa_offset 8
 1184              	.LVL106:
 1185 00a9 C3       		ret
 1186              	.LVL107:
 1187 00aa 660F1F44 		.p2align 4,,10
 1187      0000
 1188              		.p2align 3
 1189              	.L63:
 1190              		.cfi_restore_state
 108:fltk-1.3.4-1/src/Fl_Slider.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 1191              		.loc 9 108 0
 1192 00b0 4489F2   		movl	%r14d, %edx
 1193 00b3 4883EC08 		subq	$8, %rsp
 1194              		.cfi_def_cfa_offset 56
 1195 00b7 4489E9   		movl	%r13d, %ecx
 1196 00ba C1EA1F   		shrl	$31, %edx
 1197 00bd 50       		pushq	%rax
 1198              		.cfi_def_cfa_offset 64
 1199 00be BE070000 		movl	$7, %esi
 1199      00
 1200 00c3 4101D6   		addl	%edx, %r14d
 1201              	.LVL108:
 1202 00c6 4189E9   		movl	%ebp, %r9d
 1203 00c9 41B80400 		movl	$4, %r8d
 1203      0000
 1204 00cf 41D1FE   		sarl	%r14d
 1205 00d2 4889DF   		movq	%rbx, %rdi
 1206 00d5 438D5434 		leal	-2(%r12,%r14), %edx
 1206      FE
 1207 00da E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1207      00
 1208              	.LVL109:
 1209 00df 59       		popq	%rcx
 1210              		.cfi_def_cfa_offset 56
 1211 00e0 5E       		popq	%rsi
 1212              		.cfi_def_cfa_offset 48
 1213 00e1 E977FFFF 		jmp	.L57
 1213      FF
 1214              		.cfi_endproc
 1215              	.LFE516:
 1217              		.section	.text.unlikely._ZN9Fl_Slider7draw_bgEiiii
 1218              	.LCOLDE25:
 1219              		.section	.text._ZN9Fl_Slider7draw_bgEiiii
 1220              	.LHOTE25:
 1221              		.section	.rodata.str1.1,"aMS",@progbits,1
 1222              	.LC27:
 1223 0000 67746B2B 		.string	"gtk+"
 1223      00
 1224              		.section	.text.unlikely._ZN9Fl_Slider4drawEiiii,"ax",@progbits
 1225              		.align 2
 1226              	.LCOLDB29:
 1227              		.section	.text._ZN9Fl_Slider4drawEiiii,"ax",@progbits
 1228              	.LHOTB29:
 1229              		.align 2
 1230              		.p2align 4,,15
 1231              		.globl	_ZN9Fl_Slider4drawEiiii
 1233              	_ZN9Fl_Slider4drawEiiii:
 1234              	.LFB517:
 113:fltk-1.3.4-1/src/Fl_Slider.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Slider.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 1235              		.loc 9 114 0
 1236              		.cfi_startproc
 1237              	.LVL110:
 1238 0000 4157     		pushq	%r15
 1239              		.cfi_def_cfa_offset 16
 1240              		.cfi_offset 15, -16
 1241 0002 4156     		pushq	%r14
 1242              		.cfi_def_cfa_offset 24
 1243              		.cfi_offset 14, -24
 1244 0004 4189CF   		movl	%ecx, %r15d
 1245 0007 4155     		pushq	%r13
 1246              		.cfi_def_cfa_offset 32
 1247              		.cfi_offset 13, -32
 1248 0009 4154     		pushq	%r12
 1249              		.cfi_def_cfa_offset 40
 1250              		.cfi_offset 12, -40
 1251 000b 4989FE   		movq	%rdi, %r14
 1252 000e 55       		pushq	%rbp
 1253              		.cfi_def_cfa_offset 48
 1254              		.cfi_offset 6, -48
 1255 000f 53       		pushq	%rbx
 1256              		.cfi_def_cfa_offset 56
 1257              		.cfi_offset 3, -56
 1258 0010 4489C0   		movl	%r8d, %eax
 1259 0013 4883EC28 		subq	$40, %rsp
 1260              		.cfi_def_cfa_offset 96
 1261 0017 F20F109F 		movsd	136(%rdi), %xmm3
 1261      88000000 
 1262              	.LVL111:
 1263 001f F20F10AF 		movsd	144(%rdi), %xmm5
 1263      90000000 
 1264              	.LVL112:
 115:fltk-1.3.4-1/src/Fl_Slider.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Slider.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Slider.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1265              		.loc 9 117 0
 1266 0027 660F2EDD 		ucomisd	%xmm5, %xmm3
 1267 002b 7A63     		jp	.L99
 1268 002d 7561     		jne	.L99
 1269 002f 450FB64E 		movzbl	108(%r14), %r9d
 1269      6C
 118:fltk-1.3.4-1/src/Fl_Slider.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1270              		.loc 9 118 0
 1271 0034 F20F1025 		movsd	.LC26(%rip), %xmm4
 1271      00000000 
 1272 003c 660F28C4 		movapd	%xmm4, %xmm0
 1273              	.LVL113:
 119:fltk-1.3.4-1/src/Fl_Slider.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Slider.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Slider.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Slider.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Slider.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Slider.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Slider.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1274              		.loc 9 125 0
 1275 0040 4589C8   		movl	%r9d, %r8d
 1276              	.LVL114:
 1277 0043 4183E001 		andl	$1, %r8d
 1278 0047 0F848900 		je	.L120
 1278      0000
 1279              	.LVL115:
 1280              	.L68:
 1281              	.LBB575:
 126:fltk-1.3.4-1/src/Fl_Slider.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Slider.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 1282              		.loc 9 127 0
 1283 004d 418D49FE 		leal	-2(%r9), %ecx
 1284              	.LVL116:
 1285 0051 80F901   		cmpb	$1, %cl
 1286 0054 0F865603 		jbe	.L121
 1286      0000
 1287              	.LBB576:
 128:fltk-1.3.4-1/src/Fl_Slider.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Slider.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Slider.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Slider.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Slider.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 1288              		.loc 9 132 0
 1289 005a 660FEFC9 		pxor	%xmm1, %xmm1
 133:fltk-1.3.4-1/src/Fl_Slider.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1290              		.loc 9 133 0
 1291 005e 89C7     		movl	%eax, %edi
 1292              	.LVL117:
 1293 0060 4489F9   		movl	%r15d, %ecx
 1294 0063 C1EF1F   		shrl	$31, %edi
 1295 0066 01C7     		addl	%eax, %edi
 132:fltk-1.3.4-1/src/Fl_Slider.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1296              		.loc 9 132 0
 1297 0068 F3410F2A 		cvtsi2ss	%r15d, %xmm1
 1297      CF
 1298              		.loc 9 133 0
 1299 006d D1FF     		sarl	%edi
 1300 006f 83C701   		addl	$1, %edi
 132:fltk-1.3.4-1/src/Fl_Slider.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1301              		.loc 9 132 0
 1302 0072 F3410F59 		mulss	164(%r14), %xmm1
 1302      8EA40000 
 1302      00
 1303 007b F30F5AC9 		cvtss2sd	%xmm1, %xmm1
 1304 007f F20F58CC 		addsd	%xmm4, %xmm1
 1305 0083 F20F2CD9 		cvttsd2si	%xmm1, %ebx
 1306              	.LVL118:
 1307 0087 E9840000 		jmp	.L86
 1307      00
 1308              	.LVL119:
 1309 008c 0F1F4000 		.p2align 4,,10
 1310              		.p2align 3
 1311              	.L99:
 1312              	.LBE576:
 1313              	.LBE575:
 120:fltk-1.3.4-1/src/Fl_Slider.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 1314              		.loc 9 120 0
 1315 0090 F2410F10 		movsd	120(%r14), %xmm0
 1315      4678
 1316 0096 660F28CD 		movapd	%xmm5, %xmm1
 1317 009a F20F5CC3 		subsd	%xmm3, %xmm0
 1318 009e F20F5CCB 		subsd	%xmm3, %xmm1
 1319 00a2 F20F5EC1 		divsd	%xmm1, %xmm0
 1320              	.LVL120:
 121:fltk-1.3.4-1/src/Fl_Slider.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 1321              		.loc 9 121 0
 1322 00a6 F20F100D 		movsd	.LC21(%rip), %xmm1
 1322      00000000 
 1323 00ae 660F2EC1 		ucomisd	%xmm1, %xmm0
 1324 00b2 0F861005 		jbe	.L122
 1324      0000
 1325              	.L95:
 122:fltk-1.3.4-1/src/Fl_Slider.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 1326              		.loc 9 122 0
 1327 00b8 660F28C1 		movapd	%xmm1, %xmm0
 1328              	.LVL121:
 1329              	.L115:
 1330 00bc 450FB64E 		movzbl	108(%r14), %r9d
 1330      6C
 1331 00c1 F20F1025 		movsd	.LC26(%rip), %xmm4
 1331      00000000 
 1332              	.LVL122:
 125:fltk-1.3.4-1/src/Fl_Slider.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 1333              		.loc 9 125 0
 1334 00c9 4589C8   		movl	%r9d, %r8d
 1335 00cc 4183E001 		andl	$1, %r8d
 1336 00d0 0F8577FF 		jne	.L68
 1336      FFFF
 1337              	.LVL123:
 1338              	.L120:
 1339              	.LBB578:
 127:fltk-1.3.4-1/src/Fl_Slider.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 1340              		.loc 9 127 0
 1341 00d6 418D49FE 		leal	-2(%r9), %ecx
 1342              	.LVL124:
 1343 00da 80F901   		cmpb	$1, %cl
 1344 00dd 0F86FD02 		jbe	.L123
 1344      0000
 1345              	.LBB577:
 132:fltk-1.3.4-1/src/Fl_Slider.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1346              		.loc 9 132 0
 1347 00e3 660FEFC9 		pxor	%xmm1, %xmm1
 1348              		.loc 9 133 0
 1349 00e7 4489FF   		movl	%r15d, %edi
 1350              	.LVL125:
 1351 00ea 89C1     		movl	%eax, %ecx
 1352 00ec C1EF1F   		shrl	$31, %edi
 1353 00ef 4401FF   		addl	%r15d, %edi
 132:fltk-1.3.4-1/src/Fl_Slider.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1354              		.loc 9 132 0
 1355 00f2 F30F2AC8 		cvtsi2ss	%eax, %xmm1
 1356              		.loc 9 133 0
 1357 00f6 D1FF     		sarl	%edi
 1358 00f8 83C701   		addl	$1, %edi
 132:fltk-1.3.4-1/src/Fl_Slider.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1359              		.loc 9 132 0
 1360 00fb F3410F59 		mulss	164(%r14), %xmm1
 1360      8EA40000 
 1360      00
 1361 0104 F30F5AC9 		cvtss2sd	%xmm1, %xmm1
 1362 0108 F20F58CC 		addsd	%xmm4, %xmm1
 1363 010c F20F2CD9 		cvttsd2si	%xmm1, %ebx
 1364              	.LVL126:
 1365              	.L86:
 134:fltk-1.3.4-1/src/Fl_Slider.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 1366              		.loc 9 134 0 discriminator 4
 1367 0110 4183E904 		subl	$4, %r9d
 1368 0114 448D5F04 		leal	4(%rdi), %r11d
 1369 0118 4180F901 		cmpb	$1, %r9b
 135:fltk-1.3.4-1/src/Fl_Slider.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Slider.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 1370              		.loc 9 136 0 discriminator 4
 1371 011c 660FEFC9 		pxor	%xmm1, %xmm1
 134:fltk-1.3.4-1/src/Fl_Slider.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 1372              		.loc 9 134 0 discriminator 4
 1373 0120 410F46FB 		cmovbe	%r11d, %edi
 1374              	.LVL127:
 1375 0124 39DF     		cmpl	%ebx, %edi
 1376 0126 0F4DDF   		cmovge	%edi, %ebx
 1377              	.LVL128:
 1378              		.loc 9 136 0 discriminator 4
 1379 0129 29D9     		subl	%ebx, %ecx
 1380              	.LVL129:
 1381 012b F20F2AC9 		cvtsi2sd	%ecx, %xmm1
 1382 012f F20F59C1 		mulsd	%xmm1, %xmm0
 1383              	.LVL130:
 1384 0133 F20F58C4 		addsd	%xmm4, %xmm0
 1385 0137 F20F2CE8 		cvttsd2si	%xmm0, %ebp
 1386              	.LVL131:
 1387              	.L70:
 1388              	.LBE577:
 1389              	.LBE578:
 137:fltk-1.3.4-1/src/Fl_Slider.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Slider.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Slider.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1390              		.loc 9 139 0
 1391 013b 4584C0   		testb	%r8b, %r8b
 1392 013e 0F84C002 		je	.L72
 1392      0000
 1393              	.LVL132:
 1394              	.L92:
 140:fltk-1.3.4-1/src/Fl_Slider.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1395              		.loc 9 140 0
 1396 0144 01F5     		addl	%esi, %ebp
 1397              	.LVL133:
 1398 0146 4189C5   		movl	%eax, %r13d
 141:fltk-1.3.4-1/src/Fl_Slider.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Slider.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1399              		.loc 9 142 0
 1400 0149 8954240C 		movl	%edx, 12(%rsp)
 1401              	.LVL134:
 1402              	.L73:
 143:fltk-1.3.4-1/src/Fl_Slider.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Slider.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Slider.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Slider.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Slider.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Slider.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Slider.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Slider.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Slider.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 1403              		.loc 9 151 0
 1404 014d 4189C0   		movl	%eax, %r8d
 1405 0150 4489F9   		movl	%r15d, %ecx
 1406 0153 4C89F7   		movq	%r14, %rdi
 1407 0156 89442410 		movl	%eax, 16(%rsp)
 1408 015a E8000000 		call	_ZN9Fl_Slider7draw_bgEiiii
 1408      00
 1409              	.LVL135:
 1410              	.LBB579:
 1411              	.LBB580:
  62:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  63:fltk-1.3.4-1/FL/Fl_Slider.H ****   float slider_size_;
  64:fltk-1.3.4-1/FL/Fl_Slider.H ****   uchar slider_;
  65:fltk-1.3.4-1/FL/Fl_Slider.H ****   void _Fl_Slider();
  66:fltk-1.3.4-1/FL/Fl_Slider.H ****   void draw_bg(int, int, int, int);
  67:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  68:fltk-1.3.4-1/FL/Fl_Slider.H **** protected:
  69:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  70:fltk-1.3.4-1/FL/Fl_Slider.H ****   // these allow subclasses to put the slider in a smaller area:
  71:fltk-1.3.4-1/FL/Fl_Slider.H ****   void draw(int, int, int, int);
  72:fltk-1.3.4-1/FL/Fl_Slider.H ****   int handle(int, int, int, int, int);
  73:fltk-1.3.4-1/FL/Fl_Slider.H ****   void draw();
  74:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  75:fltk-1.3.4-1/FL/Fl_Slider.H **** public:
  76:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  77:fltk-1.3.4-1/FL/Fl_Slider.H ****   int handle(int);
  78:fltk-1.3.4-1/FL/Fl_Slider.H ****   Fl_Slider(int X,int Y,int W,int H, const char *L = 0);
  79:fltk-1.3.4-1/FL/Fl_Slider.H ****   Fl_Slider(uchar t,int X,int Y,int W,int H, const char *L);
  80:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  81:fltk-1.3.4-1/FL/Fl_Slider.H ****   int scrollvalue(int pos,int size,int first,int total);
  82:fltk-1.3.4-1/FL/Fl_Slider.H ****   void bounds(double a, double b);
  83:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  84:fltk-1.3.4-1/FL/Fl_Slider.H ****   /**
  85:fltk-1.3.4-1/FL/Fl_Slider.H ****     Get the dimensions of the moving piece of slider.
  86:fltk-1.3.4-1/FL/Fl_Slider.H ****   */
  87:fltk-1.3.4-1/FL/Fl_Slider.H ****   float slider_size() const {return slider_size_;}
  88:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  89:fltk-1.3.4-1/FL/Fl_Slider.H ****   /**
  90:fltk-1.3.4-1/FL/Fl_Slider.H ****     Set the dimensions of the moving piece of slider. This is
  91:fltk-1.3.4-1/FL/Fl_Slider.H ****     the fraction of the size of the entire widget. If you set this
  92:fltk-1.3.4-1/FL/Fl_Slider.H ****     to 1 then the slider cannot move.  The default value is .08.
  93:fltk-1.3.4-1/FL/Fl_Slider.H **** 
  94:fltk-1.3.4-1/FL/Fl_Slider.H ****     For the "fill" sliders this is the size of the area around the
  95:fltk-1.3.4-1/FL/Fl_Slider.H ****     end that causes a drag effect rather than causing the slider to
  96:fltk-1.3.4-1/FL/Fl_Slider.H ****     jump to the mouse.
  97:fltk-1.3.4-1/FL/Fl_Slider.H ****   */
  98:fltk-1.3.4-1/FL/Fl_Slider.H ****   void slider_size(double v);
  99:fltk-1.3.4-1/FL/Fl_Slider.H **** 
 100:fltk-1.3.4-1/FL/Fl_Slider.H ****   /** Gets the slider box type. */
 101:fltk-1.3.4-1/FL/Fl_Slider.H ****   Fl_Boxtype slider() const {return (Fl_Boxtype)slider_;}
 1412              		.loc 2 101 0
 1413 015f 450FB6A6 		movzbl	168(%r14), %r12d
 1413      A8000000 
 1414              	.LBE580:
 1415              	.LBE579:
 152:fltk-1.3.4-1/src/Fl_Slider.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Slider.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Slider.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1416              		.loc 9 154 0
 1417 0167 8B442410 		movl	16(%rsp), %eax
 1418 016b 4585E4   		testl	%r12d, %r12d
 1419 016e 7512     		jne	.L74
 1420              	.LVL136:
 1421              		.loc 9 154 0 is_stmt 0 discriminator 1
 1422 0170 450FB666 		movzbl	110(%r14), %r12d
 1422      6E
 1423              	.LVL137:
 1424 0175 BA020000 		movl	$2, %edx
 1424      00
 1425 017a 4183E4FE 		andl	$-2, %r12d
 1426              	.LVL138:
 1427 017e 440F44E2 		cmove	%edx, %r12d
 1428              	.LVL139:
 1429              	.L74:
 1430 0182 410FB656 		movzbl	108(%r14), %edx
 1430      6C
 1431              	.LVL140:
 1432              	.LBB581:
 155:fltk-1.3.4-1/src/Fl_Slider.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1433              		.loc 9 155 0 is_stmt 1
 1434 0187 80FA04   		cmpb	$4, %dl
 1435 018a 0F847004 		je	.L124
 1435      0000
 1436              	.LVL141:
 1437              	.LBB582:
 156:fltk-1.3.4-1/src/Fl_Slider.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Slider.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Slider.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Slider.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1438              		.loc 9 159 0
 1439 0190 80FA05   		cmpb	$5, %dl
 1440 0193 0F84C704 		je	.L125
 1440      0000
 1441              	.LBB583:
 160:fltk-1.3.4-1/src/Fl_Slider.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Slider.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Slider.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Slider.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Slider.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 1442              		.loc 9 164 0
 1443 0199 85DB     		testl	%ebx, %ebx
 1444 019b 7E34     		jle	.L80
 1445 019d 4585ED   		testl	%r13d, %r13d
 1446 01a0 7E2F     		jle	.L80
 1447              		.loc 9 164 0 is_stmt 0 discriminator 1
 1448 01a2 418B5668 		movl	104(%r14), %edx
 1449 01a6 89442410 		movl	%eax, 16(%rsp)
 1450              	.LVL142:
 1451 01aa 4883EC08 		subq	$8, %rsp
 1452              		.cfi_def_cfa_offset 104
 1453 01ae 4589E9   		movl	%r13d, %r9d
 1454 01b1 4189D8   		movl	%ebx, %r8d
 1455 01b4 4489E6   		movl	%r12d, %esi
 1456 01b7 4C89F7   		movq	%r14, %rdi
 1457 01ba 52       		pushq	%rdx
 1458              		.cfi_def_cfa_offset 112
 1459 01bb 8B4C241C 		movl	28(%rsp), %ecx
 1460 01bf 89EA     		movl	%ebp, %edx
 1461 01c1 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1461      00
 1462              	.LVL143:
 1463 01c6 58       		popq	%rax
 1464              		.cfi_def_cfa_offset 104
 1465 01c7 410FB656 		movzbl	108(%r14), %edx
 1465      6C
 1466 01cc 59       		popq	%rcx
 1467              		.cfi_def_cfa_offset 96
 1468 01cd 8B442410 		movl	16(%rsp), %eax
 1469              	.LVL144:
 1470              	.L80:
 1471              	.LBB584:
 165:fltk-1.3.4-1/src/Fl_Slider.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Slider.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1472              		.loc 9 166 0 is_stmt 1
 1473 01d1 83EA02   		subl	$2, %edx
 1474 01d4 80FA01   		cmpb	$1, %dl
 1475 01d7 0F86A301 		jbe	.L76
 1475      0000
 1476              	.LVL145:
 1477              	.LBB585:
 1478              	.LBB586:
 1479              		.file 11 "fltk-1.3.4-1/FL/Fl.H"
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
 1480              		.loc 11 369 0
 1481 01dd 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 1481      000000
 1482 01e4 4885FF   		testq	%rdi, %rdi
 1483 01e7 0F849301 		je	.L76
 1483      0000
 1484 01ed BE000000 		movl	$.LC27, %esi
 1484      00
 1485 01f2 B9050000 		movl	$5, %ecx
 1485      00
 1486              	.LBE586:
 1487              	.LBE585:
 1488              		.loc 9 166 0
 1489 01f7 F3A6     		repz cmpsb
 1490 01f9 0F858101 		jne	.L76
 1490      0000
 1491              	.LBB587:
 167:fltk-1.3.4-1/src/Fl_Slider.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Slider.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1492              		.loc 9 168 0
 1493 01ff 4139C7   		cmpl	%eax, %r15d
 1494 0202 0F8E5002 		jle	.L81
 1494      0000
 1495              		.loc 9 168 0 is_stmt 0 discriminator 1
 1496 0208 418D4508 		leal	8(%r13), %eax
 1497 020c 39C3     		cmpl	%eax, %ebx
 1498 020e 0F8E6C01 		jle	.L76
 1498      0000
 1499              	.LVL146:
 1500              	.LBB588:
 169:fltk-1.3.4-1/src/Fl_Slider.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Slider.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Slider.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Slider.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 1501              		.loc 9 172 0 is_stmt 1
 1502 0214 89D9     		movl	%ebx, %ecx
 1503              	.LBB589:
 1504              	.LBB590:
 1505              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
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
 733:fltk-1.3.4-1/FL/Enumerations.H **** }
 734:fltk-1.3.4-1/FL/Enumerations.H **** /**
 735:fltk-1.3.4-1/FL/Enumerations.H ****   Get the unfilled, frame only version of a box.
 736:fltk-1.3.4-1/FL/Enumerations.H ****   If no frame version of a given box exists, the behavior of this function
 737:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 738:fltk-1.3.4-1/FL/Enumerations.H ****  */
 739:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_frame(Fl_Boxtype b) {
 740:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b%4<2)?b:(b+2));
 741:fltk-1.3.4-1/FL/Enumerations.H **** }
 742:fltk-1.3.4-1/FL/Enumerations.H **** 
 743:fltk-1.3.4-1/FL/Enumerations.H **** // back-compatibility box types:
 744:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME FL_ENGRAVED_FRAME
 745:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME_BOX FL_ENGRAVED_BOX
 746:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CIRCLE_BOX FL_ROUND_DOWN_BOX
 747:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_BOX FL_DIAMOND_DOWN_BOX
 748:fltk-1.3.4-1/FL/Enumerations.H **** 
 749:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Box Types
 750:fltk-1.3.4-1/FL/Enumerations.H **** 
 751:fltk-1.3.4-1/FL/Enumerations.H **** /**
 752:fltk-1.3.4-1/FL/Enumerations.H ****    The labeltype() method sets the type of the label.
 753:fltk-1.3.4-1/FL/Enumerations.H **** 
 754:fltk-1.3.4-1/FL/Enumerations.H ****    The following standard label types are included:
 755:fltk-1.3.4-1/FL/Enumerations.H **** 
 756:fltk-1.3.4-1/FL/Enumerations.H ****    \todo	The doxygen comments are incomplete, and some labeltypes
 757:fltk-1.3.4-1/FL/Enumerations.H ****    	start with an underscore. Also, there are three
 758:fltk-1.3.4-1/FL/Enumerations.H **** 		external functions undocumented (yet):
 759:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_SHADOW_LABEL()
 760:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_ENGRAVED_LABEL()
 761:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_EMBOSSED_LABEL()
 762:fltk-1.3.4-1/FL/Enumerations.H **** */
 763:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Labeltype {	// labeltypes:
 764:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NORMAL_LABEL	= 0, ///< draws the text (0)
 765:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_LABEL,         ///< does nothing
 766:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_LABEL,    ///< draws a drop shadow under the text
 767:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ENGRAVED_LABEL,	 ///< draws edges as though the text is engraved
 768:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_EMBOSSED_LABEL,  ///< draws edges as though the text is raised
 769:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_MULTI_LABEL,     ///< draws a composite label \see Fl_Multi_Label
 770:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ICON_LABEL,      ///< draws the icon associated with the text
 771:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_IMAGE_LABEL,     ///< the label displays an "icon" based on a Fl_Image
 772:fltk-1.3.4-1/FL/Enumerations.H **** 
 773:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FREE_LABELTYPE    ///< first free labeltype to use for creating own labeltypes
 774:fltk-1.3.4-1/FL/Enumerations.H **** };
 775:fltk-1.3.4-1/FL/Enumerations.H **** 
 776:fltk-1.3.4-1/FL/Enumerations.H **** /** 
 777:fltk-1.3.4-1/FL/Enumerations.H ****   Sets the current label type and return its corresponding Fl_Labeltype value. 
 778:fltk-1.3.4-1/FL/Enumerations.H ****   @{
 779:fltk-1.3.4-1/FL/Enumerations.H **** */
 780:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SYMBOL_LABEL FL_NORMAL_LABEL
 781:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_SHADOW_LABEL();
 782:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_LABEL fl_define_FL_SHADOW_LABEL()
 783:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_ENGRAVED_LABEL();
 784:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ENGRAVED_LABEL fl_define_FL_ENGRAVED_LABEL()
 785:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_EMBOSSED_LABEL();
 786:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_EMBOSSED_LABEL fl_define_FL_EMBOSSED_LABEL()
 787:fltk-1.3.4-1/FL/Enumerations.H **** /** @} */
 788:fltk-1.3.4-1/FL/Enumerations.H **** 
 789:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Alignment Flags 
 790:fltk-1.3.4-1/FL/Enumerations.H ****     Flags to control the label alignment. 
 791:fltk-1.3.4-1/FL/Enumerations.H **** 
 792:fltk-1.3.4-1/FL/Enumerations.H ****     This controls how the label is displayed next to or inside the widget. 
 793:fltk-1.3.4-1/FL/Enumerations.H ****     The default value is FL_ALIGN_CENTER (0) for most widgets, which centers
 794:fltk-1.3.4-1/FL/Enumerations.H ****     the label inside the widget.
 795:fltk-1.3.4-1/FL/Enumerations.H **** 
 796:fltk-1.3.4-1/FL/Enumerations.H ****     Flags can be or'd to achieve a combination of alignments, but there
 797:fltk-1.3.4-1/FL/Enumerations.H ****     are some "magic values" (e.g. combinations of TOP and BOTTOM and of
 798:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT and RIGHT) that have special meanings (see below). For instance:<BR>
 799:fltk-1.3.4-1/FL/Enumerations.H ****     FL_ALIGN_TOP_LEFT == (FL_ALIGN_TOP|FL_ALIGN_LEFT) != FL_ALIGN_LEFT_TOP.
 800:fltk-1.3.4-1/FL/Enumerations.H **** 
 801:fltk-1.3.4-1/FL/Enumerations.H ****     \code
 802:fltk-1.3.4-1/FL/Enumerations.H ****     Outside alignments (FL_ALIGN_INSIDE is not set):
 803:fltk-1.3.4-1/FL/Enumerations.H **** 
 804:fltk-1.3.4-1/FL/Enumerations.H ****                TOP_LEFT        TOP       TOP_RIGHT
 805:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 806:fltk-1.3.4-1/FL/Enumerations.H ****        LEFT_TOP|                                 |RIGHT_TOP
 807:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 808:fltk-1.3.4-1/FL/Enumerations.H ****            LEFT|             CENTER              |RIGHT
 809:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 810:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT_BOTTOM|                                 |RIGHT_BOTTOM
 811:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 812:fltk-1.3.4-1/FL/Enumerations.H ****                BOTTOM_LEFT   BOTTOM   BOTTOM_RIGHT
 813:fltk-1.3.4-1/FL/Enumerations.H **** 
 814:fltk-1.3.4-1/FL/Enumerations.H ****     Inside alignments (FL_ALIGN_INSIDE is set):
 815:fltk-1.3.4-1/FL/Enumerations.H **** 
 816:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 817:fltk-1.3.4-1/FL/Enumerations.H ****                |TOP_LEFT       TOP      TOP_RIGHT|
 818:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 819:fltk-1.3.4-1/FL/Enumerations.H ****                |LEFT         CENTER         RIGHT|
 820:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 821:fltk-1.3.4-1/FL/Enumerations.H ****                |BOTTOM_LEFT  BOTTOM  BOTTOM_RIGHT|
 822:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 823:fltk-1.3.4-1/FL/Enumerations.H ****     \endcode
 824:fltk-1.3.4-1/FL/Enumerations.H ****     \see #FL_ALIGN_CENTER, etc.
 825:fltk-1.3.4-1/FL/Enumerations.H ****  */
 826:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 827:fltk-1.3.4-1/FL/Enumerations.H **** /** FLTK type for alignment control */
 828:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned Fl_Align;
 829:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label horizontally in the middle. */
 830:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CENTER		= (Fl_Align)0;
 831:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the top of the widget. Inside labels appear below the top,
 832:fltk-1.3.4-1/FL/Enumerations.H ****       outside labels are drawn on top of the widget. */
 833:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP		= (Fl_Align)1;
 834:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the bottom of the widget. */
 835:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM		= (Fl_Align)2;
 836:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the left of the widget. Inside labels appear left-justified
 837:fltk-1.3.4-1/FL/Enumerations.H ****       starting at the left side of the widget, outside labels are right-justified and
 838:fltk-1.3.4-1/FL/Enumerations.H ****       drawn to the left of the widget. */
 839:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT		= (Fl_Align)4;
 840:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label to the right of the widget. */
 841:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT		= (Fl_Align)8;
 842:fltk-1.3.4-1/FL/Enumerations.H ****   /** Draw the label inside of the widget. */
 843:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_INSIDE		= (Fl_Align)16;
 844:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text on top of the image. */
 845:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_OVER_IMAGE	= (Fl_Align)0x0020;
 846:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text below the image. */
 847:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_OVER_TEXT	= (Fl_Align)0x0000;
 848:fltk-1.3.4-1/FL/Enumerations.H ****   /** All parts of the label that are lager than the widget will not be drawn . */
 849:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CLIP		= (Fl_Align)64;
 850:fltk-1.3.4-1/FL/Enumerations.H ****   /** Wrap text that does not fit the width of the widget. */
 851:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_WRAP		= (Fl_Align)128;
 852:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the right of the image. */
 853:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_NEXT_TO_TEXT = (Fl_Align)0x0100;
 854:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the left of the image. */
 855:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_NEXT_TO_IMAGE = (Fl_Align)0x0120;
 856:fltk-1.3.4-1/FL/Enumerations.H **** /** If the label contains an image, draw the image or deimage in the background. */
 857:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_BACKDROP  = (Fl_Align)0x0200;
 858:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_LEFT	= FL_ALIGN_TOP | FL_ALIGN_LEFT;
 859:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_RIGHT	= FL_ALIGN_TOP | FL_ALIGN_RIGHT;
 860:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_LEFT	= FL_ALIGN_BOTTOM | FL_ALIGN_LEFT;
 861:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_RIGHT	= FL_ALIGN_BOTTOM | FL_ALIGN_RIGHT;
 862:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_TOP	= 0x0007; // magic value
 863:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_TOP	= 0x000b; // magic value
 864:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_BOTTOM	= 0x000d; // magic value
 865:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_BOTTOM	= 0x000e; // magic value
 866:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_NOWRAP		= (Fl_Align)0; // for back compatibility
 867:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_POSITION_MASK   = 0x000f; // left, right, top, bottom
 868:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_MASK      = 0x0320; // l/r, t/b, backdrop
 869:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 870:fltk-1.3.4-1/FL/Enumerations.H **** 
 871:fltk-1.3.4-1/FL/Enumerations.H **** 
 872:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Font Numbers
 873:fltk-1.3.4-1/FL/Enumerations.H ****     The following constants define the standard FLTK fonts:
 874:fltk-1.3.4-1/FL/Enumerations.H ****  */
 875:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 876:fltk-1.3.4-1/FL/Enumerations.H **** /** A font number is an index into the internal font table. */
 877:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Font;
 878:fltk-1.3.4-1/FL/Enumerations.H **** 
 879:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA              = 0;	///< Helvetica (or Arial) normal (0)
 880:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD         = 1;	///< Helvetica (or Arial) bold
 881:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_ITALIC       = 2;	///< Helvetica (or Arial) oblique
 882:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD_ITALIC  = 3;	///< Helvetica (or Arial) bold-oblique
 883:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER                = 4;	///< Courier normal
 884:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD           = 5;	///< Courier bold 
 885:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_ITALIC         = 6;	///< Courier italic
 886:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD_ITALIC    = 7;	///< Courier bold-italic
 887:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES                  = 8;	///< Times roman
 888:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD             = 9;	///< Times roman bold
 889:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_ITALIC           = 10;	///< Times roman italic
 890:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD_ITALIC      = 11;	///< Times roman bold-italic
 891:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SYMBOL                 = 12;	///< Standard symbol font
 892:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN                 = 13;	///< Default monospaced screen font
 893:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN_BOLD            = 14;	///< Default monospaced bold screen font
 894:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ZAPF_DINGBATS          = 15;	///< Zapf-dingbats font
 895:fltk-1.3.4-1/FL/Enumerations.H **** 
 896:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_FREE_FONT              = 16;	///< first one to allocate
 897:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD                   = 1;	///< add this to helvetica, courier, or times
 898:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ITALIC                 = 2;	///< add this to helvetica, courier, or times
 899:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD_ITALIC            = 3;	///< add this to helvetica, courier, or times
 900:fltk-1.3.4-1/FL/Enumerations.H **** 
 901:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 902:fltk-1.3.4-1/FL/Enumerations.H **** 
 903:fltk-1.3.4-1/FL/Enumerations.H **** /** Size of a font in pixels.
 904:fltk-1.3.4-1/FL/Enumerations.H ****     This is the approximate height of a font in pixels.
 905:fltk-1.3.4-1/FL/Enumerations.H ****  */
 906:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Fontsize;
 907:fltk-1.3.4-1/FL/Enumerations.H **** 
 908:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Fontsize FL_NORMAL_SIZE;	///< normal font size
 909:fltk-1.3.4-1/FL/Enumerations.H **** 
 910:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Colors 
 911:fltk-1.3.4-1/FL/Enumerations.H ****     The Fl_Color type holds an FLTK color value.
 912:fltk-1.3.4-1/FL/Enumerations.H **** 
 913:fltk-1.3.4-1/FL/Enumerations.H ****     Colors are either 8-bit indexes into a <a href="fltk-colormap.png">virtual colormap</a>
 914:fltk-1.3.4-1/FL/Enumerations.H ****     or 24-bit RGB color values. (See \ref drawing_colors for the default FLTK colormap)
 915:fltk-1.3.4-1/FL/Enumerations.H **** 
 916:fltk-1.3.4-1/FL/Enumerations.H ****     Color indices occupy the lower 8 bits of the value, while
 917:fltk-1.3.4-1/FL/Enumerations.H ****     RGB colors occupy the upper 24 bits, for a byte organization of RGBI.
 918:fltk-1.3.4-1/FL/Enumerations.H **** 
 919:fltk-1.3.4-1/FL/Enumerations.H **** <pre>
 920:fltk-1.3.4-1/FL/Enumerations.H ****  Fl_Color => 0xrrggbbii
 921:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | |
 922:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | +--- \ref drawing_colors "index" between 0 and 255
 923:fltk-1.3.4-1/FL/Enumerations.H ****                 | | +----- blue color component (8 bit)
 924:fltk-1.3.4-1/FL/Enumerations.H ****                 | +------- green component (8 bit)
 925:fltk-1.3.4-1/FL/Enumerations.H ****                 +--------- red component (8 bit)
 926:fltk-1.3.4-1/FL/Enumerations.H ****  </pre>
 927:fltk-1.3.4-1/FL/Enumerations.H **** 
 928:fltk-1.3.4-1/FL/Enumerations.H ****     A color can have either an index or an rgb value. Colors with rgb set 
 929:fltk-1.3.4-1/FL/Enumerations.H ****     and an index >0 are reserved for special use.
 930:fltk-1.3.4-1/FL/Enumerations.H **** 
 931:fltk-1.3.4-1/FL/Enumerations.H ****  */
 932:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 933:fltk-1.3.4-1/FL/Enumerations.H **** /** An FLTK color value; see also \ref drawing_colors  */
 934:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned int Fl_Color;
 935:fltk-1.3.4-1/FL/Enumerations.H **** 
 936:fltk-1.3.4-1/FL/Enumerations.H **** // Standard colors. These are used as default colors in widgets and altered as necessary
 937:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_FOREGROUND_COLOR  = 0;	///< the default foreground color (0) used for labels and 
 938:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND2_COLOR = 7;	///< the default background color for text, list, and valu
 939:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_INACTIVE_COLOR    = 8;	///< the inactive foreground color
 940:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_SELECTION_COLOR   = 15;	///< the default selection/highlight color
 941:fltk-1.3.4-1/FL/Enumerations.H **** 
 942:fltk-1.3.4-1/FL/Enumerations.H ****   // boxtypes generally limit themselves to these colors so
 943:fltk-1.3.4-1/FL/Enumerations.H ****   // the whole ramp is not allocated:
 944:fltk-1.3.4-1/FL/Enumerations.H **** 
 945:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GRAY0   = 32;			// 'A'
 946:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK3   = 39;			// 'H'
 947:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK2   = 45;			// 'N'
 948:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK1   = 47;			// 'P'
 949:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND_COLOR  = 49;	// 'R' default background color
 950:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT1  = 50;			// 'S'
 951:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT2  = 52;			// 'U'
 952:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT3  = 54;			// 'W'
 953:fltk-1.3.4-1/FL/Enumerations.H **** 
 954:fltk-1.3.4-1/FL/Enumerations.H ****   // FLTK provides a 5x8x5 color cube that is used with colormap visuals
 955:fltk-1.3.4-1/FL/Enumerations.H **** 
 956:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLACK   = 56;
 957:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_RED     = 88;
 958:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GREEN   = 63;
 959:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_YELLOW  = 95;
 960:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLUE    = 216;
 961:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_MAGENTA = 248;
 962:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_CYAN    = 223;
 963:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_RED = 72;
 964:fltk-1.3.4-1/FL/Enumerations.H **** 
 965:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_GREEN    = 60;
 966:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_YELLOW   = 76;
 967:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_BLUE     = 136;
 968:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_MAGENTA  = 152;
 969:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_CYAN     = 140;
 970:fltk-1.3.4-1/FL/Enumerations.H **** 
 971:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_WHITE         = 255;
 972:fltk-1.3.4-1/FL/Enumerations.H **** 
 973:fltk-1.3.4-1/FL/Enumerations.H **** 
 974:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FREE_COLOR     (Fl_Color)16
 975:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_FREE_COLOR 16
 976:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY_RAMP      (Fl_Color)32
 977:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GRAY       24
 978:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY           FL_BACKGROUND_COLOR
 979:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_COLOR_CUBE     (Fl_Color)56
 980:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_RED        5
 981:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GREEN      8
 982:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_BLUE       5
 983:fltk-1.3.4-1/FL/Enumerations.H **** 
 984:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_inactive(Fl_Color c);
 985:fltk-1.3.4-1/FL/Enumerations.H **** 
 986:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_contrast(Fl_Color fg, Fl_Color bg);
 987:fltk-1.3.4-1/FL/Enumerations.H **** 
 988:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_color_average(Fl_Color c1, Fl_Color c2, float weight);
 989:fltk-1.3.4-1/FL/Enumerations.H **** 
 990:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a lighter version of the specified color. */
 991:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_lighter(Fl_Color c) { return fl_color_average(c, FL_WHITE, .67f); }
 992:fltk-1.3.4-1/FL/Enumerations.H **** 
 993:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a darker version of the specified color. */
 994:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_darker(Fl_Color c) { return fl_color_average(c, FL_BLACK, .67f); }
 1506              		.loc 12 994 0
 1507 0216 418B7E68 		movl	104(%r14), %edi
 1508 021a BE380000 		movl	$56, %esi
 1508      00
 1509              	.LBE590:
 1510              	.LBE589:
 1511              		.loc 9 172 0
 1512 021f 4429E9   		subl	%r13d, %ecx
 1513              	.LBB593:
 1514              	.LBB591:
 1515              		.loc 12 994 0
 1516 0222 F30F1005 		movss	.LC28(%rip), %xmm0
 1516      00000000 
 1517              	.LBE591:
 1518              	.LBE593:
 1519              		.loc 9 172 0
 1520 022a 89C8     		movl	%ecx, %eax
 173:fltk-1.3.4-1/src/Fl_Slider.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1521              		.loc 9 173 0
 1522 022c 8B4C240C 		movl	12(%rsp), %ecx
 172:fltk-1.3.4-1/src/Fl_Slider.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1523              		.loc 9 172 0
 1524 0230 83E804   		subl	$4, %eax
 1525 0233 89C2     		movl	%eax, %edx
 1526 0235 C1EA1F   		shrl	$31, %edx
 1527              		.loc 9 173 0
 1528 0238 83C103   		addl	$3, %ecx
 172:fltk-1.3.4-1/src/Fl_Slider.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1529              		.loc 9 172 0
 1530 023b 01D0     		addl	%edx, %eax
 1531              		.loc 9 173 0
 1532 023d 894C2410 		movl	%ecx, 16(%rsp)
 172:fltk-1.3.4-1/src/Fl_Slider.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1533              		.loc 9 172 0
 1534 0241 D1F8     		sarl	%eax
 1535 0243 448D3C28 		leal	(%rax,%rbp), %r15d
 1536              	.LVL147:
 1537              	.LBB594:
 1538              	.LBB592:
 1539              		.loc 12 994 0
 1540 0247 E8000000 		call	_Z16fl_color_averagejjf
 1540      00
 1541              	.LVL148:
 1542              	.LBE592:
 1543              	.LBE594:
 1544              	.LBB595:
 1545              	.LBB596:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1546              		.loc 10 52 0
 1547 024c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1547      000000
 1548 0253 89C6     		movl	%eax, %esi
 1549 0255 488B17   		movq	(%rdi), %rdx
 1550 0258 FF928800 		call	*136(%rdx)
 1550      0000
 1551              	.LVL149:
 1552              	.LBE596:
 1553              	.LBE595:
 174:fltk-1.3.4-1/src/Fl_Slider.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Slider.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Slider.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 1554              		.loc 9 176 0
 1555 025e 418D45F8 		leal	-8(%r13), %eax
 1556              	.LBB597:
 1557              	.LBB598:
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
 1558              		.loc 10 223 0
 1559 0262 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1559      000000
 1560              	.LBE598:
 1561              	.LBE597:
 1562              		.loc 9 176 0
 1563 0269 8B4C2410 		movl	16(%rsp), %ecx
 1564 026d 428D3438 		leal	(%rax,%r15), %esi
 1565 0271 8944241C 		movl	%eax, 28(%rsp)
 1566              	.LVL150:
 1567              	.LBB603:
 1568              	.LBB599:
 1569              		.loc 10 223 0
 1570 0275 4189C8   		movl	%ecx, %r8d
 1571              	.LBE599:
 1572              	.LBE603:
 1573              		.loc 9 176 0
 1574 0278 4189F2   		movl	%esi, %r10d
 1575 027b 89C6     		movl	%eax, %esi
 1576              	.LBB604:
 1577              	.LBB600:
 1578              		.loc 10 223 0
 1579 027d 488B07   		movq	(%rdi), %rax
 1580              	.LBE600:
 1581              	.LBE604:
 1582              		.loc 9 176 0
 1583 0280 01CE     		addl	%ecx, %esi
 1584              	.LVL151:
 1585              	.LBB605:
 1586              	.LBB601:
 1587              		.loc 10 223 0
 1588 0282 44895424 		movl	%r10d, 24(%rsp)
 1588      18
 1589 0287 4489D1   		movl	%r10d, %ecx
 1590              	.LVL152:
 1591              	.LBE601:
 1592              	.LBE605:
 1593              		.loc 9 176 0
 1594 028a 89F2     		movl	%esi, %edx
 1595              	.LBB606:
 1596              	.LBB602:
 1597              		.loc 10 223 0
 1598 028c 89742414 		movl	%esi, 20(%rsp)
 1599 0290 4489FE   		movl	%r15d, %esi
 1600              	.LVL153:
 1601 0293 FF5060   		call	*96(%rax)
 1602              	.LVL154:
 1603              	.LBE602:
 1604              	.LBE606:
 1605              	.LBB607:
 1606              	.LBB608:
 1607 0296 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1607      000000
 1608 029d 448B5424 		movl	24(%rsp), %r10d
 1608      18
 1609 02a2 418D7706 		leal	6(%r15), %esi
 1610              	.LVL155:
 1611 02a6 448B4424 		movl	16(%rsp), %r8d
 1611      10
 1612 02ab 8B542414 		movl	20(%rsp), %edx
 1613 02af 488B07   		movq	(%rdi), %rax
 1614 02b2 418D4A06 		leal	6(%r10), %ecx
 1615              	.LVL156:
 1616 02b6 FF5060   		call	*96(%rax)
 1617              	.LVL157:
 1618              	.LBE608:
 1619              	.LBE607:
 1620              	.LBB609:
 1621              	.LBB610:
 1622 02b9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1622      000000
 1623 02c0 448B5424 		movl	24(%rsp), %r10d
 1623      18
 1624 02c5 418D770C 		leal	12(%r15), %esi
 1625              	.LVL158:
 1626 02c9 448B4424 		movl	16(%rsp), %r8d
 1626      10
 1627 02ce 8B542414 		movl	20(%rsp), %edx
 1628 02d2 488B07   		movq	(%rdi), %rax
 1629 02d5 418D4A0C 		leal	12(%r10), %ecx
 1630              	.LVL159:
 1631 02d9 FF5060   		call	*96(%rax)
 1632              	.LVL160:
 1633              	.LBE610:
 1634              	.LBE609:
 1635              	.LBB611:
 1636              	.LBB612:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 1637              		.loc 12 991 0
 1638 02dc 418B7E68 		movl	104(%r14), %edi
 1639              	.LBE612:
 1640              	.LBE611:
 177:fltk-1.3.4-1/src/Fl_Slider.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Slider.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Slider.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Slider.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 1641              		.loc 9 180 0
 1642 02e0 458D4F01 		leal	1(%r15), %r9d
 1643              	.LBB615:
 1644              	.LBB613:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 1645              		.loc 12 991 0
 1646 02e4 BEFF0000 		movl	$255, %esi
 1646      00
 1647 02e9 F30F1005 		movss	.LC28(%rip), %xmm0
 1647      00000000 
 1648              	.LBE613:
 1649              	.LBE615:
 1650              		.loc 9 180 0
 1651 02f1 44894C24 		movl	%r9d, 24(%rsp)
 1651      18
 1652              	.LVL161:
 1653              	.LBB616:
 1654              	.LBB614:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 1655              		.loc 12 991 0
 1656 02f6 E8000000 		call	_Z16fl_color_averagejjf
 1656      00
 1657              	.LVL162:
 1658              	.LBE614:
 1659              	.LBE616:
 1660              	.LBB617:
 1661              	.LBB618:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1662              		.loc 10 52 0
 1663 02fb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1663      000000
 1664 0302 89C6     		movl	%eax, %esi
 1665 0304 488B17   		movq	(%rdi), %rdx
 1666 0307 FF928800 		call	*136(%rdx)
 1666      0000
 1667              	.LVL163:
 1668              	.LBE618:
 1669              	.LBE617:
 181:fltk-1.3.4-1/src/Fl_Slider.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Slider.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1670              		.loc 9 182 0
 1671 030d 448B4C24 		movl	24(%rsp), %r9d
 1671      18
 1672              	.LVL164:
 1673 0312 8B74241C 		movl	28(%rsp), %esi
 1674              	.LBB619:
 1675              	.LBB620:
 1676              		.loc 10 223 0
 1677 0316 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1677      000000
 1678 031d 448B4424 		movl	16(%rsp), %r8d
 1678      10
 1679 0322 8B542414 		movl	20(%rsp), %edx
 1680              	.LBE620:
 1681              	.LBE619:
 1682              		.loc 9 182 0
 1683 0326 428D040E 		leal	(%rsi,%r9), %eax
 1684              	.LBB623:
 1685              	.LBB621:
 1686              		.loc 10 223 0
 1687 032a 4489CE   		movl	%r9d, %esi
 1688              	.LBE621:
 1689              	.LBE623:
 1690              		.loc 9 182 0
 1691 032d 4189C2   		movl	%eax, %r10d
 1692              	.LVL165:
 1693              	.LBB624:
 1694              	.LBB622:
 1695              		.loc 10 223 0
 1696 0330 488B07   		movq	(%rdi), %rax
 1697              	.LVL166:
 1698 0333 4489D1   		movl	%r10d, %ecx
 1699 0336 44895424 		movl	%r10d, 24(%rsp)
 1699      18
 1700              	.LVL167:
 1701 033b FF5060   		call	*96(%rax)
 1702              	.LVL168:
 1703              	.LBE622:
 1704              	.LBE624:
 1705              	.LBB625:
 1706              	.LBB626:
 1707 033e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1707      000000
 1708 0345 8B442418 		movl	24(%rsp), %eax
 1709 0349 418D7707 		leal	7(%r15), %esi
 1710              	.LVL169:
 1711 034d 448B4424 		movl	16(%rsp), %r8d
 1711      10
 1712 0352 8B542414 		movl	20(%rsp), %edx
 1713 0356 8D4806   		leal	6(%rax), %ecx
 1714              	.LVL170:
 1715 0359 488B07   		movq	(%rdi), %rax
 1716 035c FF5060   		call	*96(%rax)
 1717              	.LVL171:
 1718              	.LBE626:
 1719              	.LBE625:
 1720              	.LBB627:
 1721              	.LBB628:
 1722 035f 8B442418 		movl	24(%rsp), %eax
 1723 0363 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1723      000000
 1724 036a 418D770D 		leal	13(%r15), %esi
 1725              	.LVL172:
 1726 036e 448B4424 		movl	16(%rsp), %r8d
 1726      10
 1727 0373 8B542414 		movl	20(%rsp), %edx
 1728 0377 8D480C   		leal	12(%rax), %ecx
 1729              	.LVL173:
 1730 037a 488B07   		movq	(%rdi), %rax
 1731 037d FF5060   		call	*96(%rax)
 1732              	.LVL174:
 1733              		.p2align 4,,10
 1734              		.p2align 3
 1735              	.L76:
 1736              	.LBE628:
 1737              	.LBE627:
 1738              	.LBE588:
 1739              	.LBE587:
 1740              	.LBE584:
 1741              	.LBE583:
 1742              	.LBE582:
 1743              	.LBE581:
 183:fltk-1.3.4-1/src/Fl_Slider.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Slider.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Slider.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Slider.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Slider.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Slider.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Slider.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Slider.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Slider.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Slider.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Slider.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Slider.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Slider.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Slider.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Slider.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Slider.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Slider.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Slider.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Slider.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Slider.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Slider.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Slider.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Slider.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Slider.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 1744              		.loc 9 206 0
 1745 0380 8B54240C 		movl	12(%rsp), %edx
 1746 0384 4589E8   		movl	%r13d, %r8d
 1747 0387 89D9     		movl	%ebx, %ecx
 1748 0389 89EE     		movl	%ebp, %esi
 1749 038b 4C89F7   		movq	%r14, %rdi
 1750 038e E8000000 		call	_ZNK9Fl_Widget10draw_labelEiiii
 1750      00
 1751              	.LVL175:
 207:fltk-1.3.4-1/src/Fl_Slider.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1752              		.loc 9 207 0
 1753 0393 4C393500 		cmpq	%r14, _ZN2Fl6focus_E(%rip)
 1753      000000
 1754 039a 0F848000 		je	.L126
 1754      0000
 208:fltk-1.3.4-1/src/Fl_Slider.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Slider.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Slider.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Slider.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 1755              		.loc 9 211 0
 1756 03a0 4883C428 		addq	$40, %rsp
 1757              		.cfi_remember_state
 1758              		.cfi_def_cfa_offset 56
 1759 03a4 5B       		popq	%rbx
 1760              		.cfi_def_cfa_offset 48
 1761              	.LVL176:
 1762 03a5 5D       		popq	%rbp
 1763              		.cfi_def_cfa_offset 40
 1764              	.LVL177:
 1765 03a6 415C     		popq	%r12
 1766              		.cfi_def_cfa_offset 32
 1767              	.LVL178:
 1768 03a8 415D     		popq	%r13
 1769              		.cfi_def_cfa_offset 24
 1770              	.LVL179:
 1771 03aa 415E     		popq	%r14
 1772              		.cfi_def_cfa_offset 16
 1773              	.LVL180:
 1774 03ac 415F     		popq	%r15
 1775              		.cfi_def_cfa_offset 8
 1776 03ae C3       		ret
 1777              	.LVL181:
 1778 03af 90       		.p2align 4,,10
 1779              		.p2align 3
 1780              	.L121:
 1781              		.cfi_restore_state
 1782              	.LBB674:
 128:fltk-1.3.4-1/src/Fl_Slider.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1783              		.loc 9 128 0
 1784 03b0 660FEFD2 		pxor	%xmm2, %xmm2
 129:fltk-1.3.4-1/src/Fl_Slider.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1785              		.loc 9 129 0
 1786 03b4 4489F9   		movl	%r15d, %ecx
 1787 03b7 660F2EDD 		ucomisd	%xmm5, %xmm3
 128:fltk-1.3.4-1/src/Fl_Slider.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1788              		.loc 9 128 0
 1789 03bb F2410F2A 		cvtsi2sd	%r15d, %xmm2
 1789      D7
 1790 03c0 F20F59D0 		mulsd	%xmm0, %xmm2
 1791 03c4 660F28C2 		movapd	%xmm2, %xmm0
 1792              	.LVL182:
 1793 03c8 F20F58C4 		addsd	%xmm4, %xmm0
 1794 03cc F20F2CE8 		cvttsd2si	%xmm0, %ebp
 1795              	.LVL183:
 129:fltk-1.3.4-1/src/Fl_Slider.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1796              		.loc 9 129 0
 1797 03d0 0F86E502 		jbe	.L127
 1797      0000
 1798              	.LVL184:
 1799              	.L91:
 129:fltk-1.3.4-1/src/Fl_Slider.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1800              		.loc 9 129 0 is_stmt 0 discriminator 1
 1801 03d6 89CB     		movl	%ecx, %ebx
 1802 03d8 29EB     		subl	%ebp, %ebx
 1803              	.LVL185:
 1804 03da E95CFDFF 		jmp	.L70
 1804      FF
 1805              	.LVL186:
 1806 03df 90       		.p2align 4,,10
 1807              		.p2align 3
 1808              	.L123:
 128:fltk-1.3.4-1/src/Fl_Slider.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1809              		.loc 9 128 0 is_stmt 1
 1810 03e0 660FEFC9 		pxor	%xmm1, %xmm1
 129:fltk-1.3.4-1/src/Fl_Slider.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1811              		.loc 9 129 0
 1812 03e4 660F2EDD 		ucomisd	%xmm5, %xmm3
 128:fltk-1.3.4-1/src/Fl_Slider.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1813              		.loc 9 128 0
 1814 03e8 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 1815 03ec F20F59C8 		mulsd	%xmm0, %xmm1
 1816 03f0 660F28C1 		movapd	%xmm1, %xmm0
 1817              	.LVL187:
 1818 03f4 F20F58C4 		addsd	%xmm4, %xmm0
 1819 03f8 F20F2CD8 		cvttsd2si	%xmm0, %ebx
 1820              	.LVL188:
 129:fltk-1.3.4-1/src/Fl_Slider.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1821              		.loc 9 129 0
 1822 03fc 0F87C202 		ja	.L98
 1822      0000
 130:fltk-1.3.4-1/src/Fl_Slider.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 1823              		.loc 9 130 0
 1824 0402 31ED     		xorl	%ebp, %ebp
 1825              	.LVL189:
 1826              	.L72:
 1827              	.LBE674:
 145:fltk-1.3.4-1/src/Fl_Slider.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1828              		.loc 9 145 0
 1829 0404 8D4C1500 		leal	0(%rbp,%rdx), %ecx
 1830 0408 4189DD   		movl	%ebx, %r13d
 147:fltk-1.3.4-1/src/Fl_Slider.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1831              		.loc 9 147 0
 1832 040b 89F5     		movl	%esi, %ebp
 1833              	.LVL190:
 145:fltk-1.3.4-1/src/Fl_Slider.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1834              		.loc 9 145 0
 1835 040d 4489FB   		movl	%r15d, %ebx
 1836              	.LVL191:
 1837 0410 894C240C 		movl	%ecx, 12(%rsp)
 1838              	.LVL192:
 1839 0414 E934FDFF 		jmp	.L73
 1839      FF
 1840              	.LVL193:
 1841 0419 0F1F8000 		.p2align 4,,10
 1841      000000
 1842              		.p2align 3
 1843              	.L126:
 208:fltk-1.3.4-1/src/Fl_Slider.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1844              		.loc 9 208 0
 1845 0420 410FB646 		movzbl	108(%r14), %eax
 1845      6C
 1846 0425 83E802   		subl	$2, %eax
 1847 0428 3C01     		cmpb	$1, %al
 1848 042a 0F86B001 		jbe	.L128
 1848      0000
 209:fltk-1.3.4-1/src/Fl_Slider.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 1849              		.loc 9 209 0
 1850 0430 8B4C240C 		movl	12(%rsp), %ecx
 1851 0434 4589E9   		movl	%r13d, %r9d
 1852 0437 4189D8   		movl	%ebx, %r8d
 1853 043a 89EA     		movl	%ebp, %edx
 1854 043c 4489E6   		movl	%r12d, %esi
 1855              	.L116:
 1856              		.loc 9 211 0
 1857 043f 4883C428 		addq	$40, %rsp
 1858              		.cfi_remember_state
 1859              		.cfi_def_cfa_offset 56
 209:fltk-1.3.4-1/src/Fl_Slider.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 1860              		.loc 9 209 0
 1861 0443 4C89F7   		movq	%r14, %rdi
 1862              		.loc 9 211 0
 1863 0446 5B       		popq	%rbx
 1864              		.cfi_def_cfa_offset 48
 1865              	.LVL194:
 1866 0447 5D       		popq	%rbp
 1867              		.cfi_def_cfa_offset 40
 1868              	.LVL195:
 1869 0448 415C     		popq	%r12
 1870              		.cfi_def_cfa_offset 32
 1871              	.LVL196:
 1872 044a 415D     		popq	%r13
 1873              		.cfi_def_cfa_offset 24
 1874              	.LVL197:
 1875 044c 415E     		popq	%r14
 1876              		.cfi_def_cfa_offset 16
 1877              	.LVL198:
 1878 044e 415F     		popq	%r15
 1879              		.cfi_def_cfa_offset 8
 209:fltk-1.3.4-1/src/Fl_Slider.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 1880              		.loc 9 209 0
 1881 0450 E9000000 		jmp	_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
 1881      00
 1882              	.LVL199:
 1883              		.p2align 4,,10
 1884 0455 0F1F00   		.p2align 3
 1885              	.L81:
 1886              		.cfi_restore_state
 1887              	.LBB675:
 1888              	.LBB671:
 1889              	.LBB669:
 1890              	.LBB668:
 1891              	.LBB667:
 1892              	.LBB629:
 185:fltk-1.3.4-1/src/Fl_Slider.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1893              		.loc 9 185 0
 1894 0458 0F8D22FF 		jge	.L76
 1894      FFFF
 185:fltk-1.3.4-1/src/Fl_Slider.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1895              		.loc 9 185 0 is_stmt 0 discriminator 1
 1896 045e 8D4308   		leal	8(%rbx), %eax
 1897 0461 4139C5   		cmpl	%eax, %r13d
 1898 0464 0F8E16FF 		jle	.L76
 1898      FFFF
 1899              	.LVL200:
 1900              	.LBB630:
 190:fltk-1.3.4-1/src/Fl_Slider.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1901              		.loc 9 190 0 is_stmt 1
 1902 046a 4489E9   		movl	%r13d, %ecx
 1903              	.LBB631:
 1904              	.LBB632:
 1905              		.loc 12 994 0
 1906 046d 418B7E68 		movl	104(%r14), %edi
 1907 0471 BE380000 		movl	$56, %esi
 1907      00
 1908              	.LBE632:
 1909              	.LBE631:
 190:fltk-1.3.4-1/src/Fl_Slider.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1910              		.loc 9 190 0
 1911 0476 29D9     		subl	%ebx, %ecx
 1912              	.LBB635:
 1913              	.LBB633:
 1914              		.loc 12 994 0
 1915 0478 F30F1005 		movss	.LC28(%rip), %xmm0
 1915      00000000 
 1916              	.LBE633:
 1917              	.LBE635:
 190:fltk-1.3.4-1/src/Fl_Slider.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1918              		.loc 9 190 0
 1919 0480 89C8     		movl	%ecx, %eax
 1920 0482 8B4C240C 		movl	12(%rsp), %ecx
 1921 0486 83E804   		subl	$4, %eax
 1922 0489 89C2     		movl	%eax, %edx
 1923 048b C1EA1F   		shrl	$31, %edx
 1924 048e 01D0     		addl	%edx, %eax
 1925 0490 D1F8     		sarl	%eax
 1926 0492 448D3C08 		leal	(%rax,%rcx), %r15d
 1927              	.LVL201:
 1928              	.LBB636:
 1929              	.LBB634:
 1930              		.loc 12 994 0
 1931 0496 E8000000 		call	_Z16fl_color_averagejjf
 1931      00
 1932              	.LVL202:
 1933              	.LBE634:
 1934              	.LBE636:
 1935              	.LBB637:
 1936              	.LBB638:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1937              		.loc 10 52 0
 1938 049b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1938      000000
 1939 04a2 89C6     		movl	%eax, %esi
 1940 04a4 488B17   		movq	(%rdi), %rdx
 1941 04a7 FF928800 		call	*136(%rdx)
 1941      0000
 1942              	.LVL203:
 1943              	.LBE638:
 1944              	.LBE637:
 193:fltk-1.3.4-1/src/Fl_Slider.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1945              		.loc 9 193 0
 1946 04ad 448D5504 		leal	4(%rbp), %r10d
 1947              	.LVL204:
 1948              	.LBB639:
 1949              	.LBB640:
 1950              		.loc 10 223 0
 1951 04b1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1951      000000
 1952              	.LBE640:
 1953              	.LBE639:
 193:fltk-1.3.4-1/src/Fl_Slider.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1954              		.loc 9 193 0
 1955 04b8 8D43F8   		leal	-8(%rbx), %eax
 1956              	.LBB644:
 1957              	.LBB641:
 1958              		.loc 10 223 0
 1959 04bb 4589F8   		movl	%r15d, %r8d
 1960              	.LBE641:
 1961              	.LBE644:
 193:fltk-1.3.4-1/src/Fl_Slider.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1962              		.loc 9 193 0
 1963 04be 4489D6   		movl	%r10d, %esi
 1964 04c1 428D0C38 		leal	(%rax,%r15), %ecx
 1965 04c5 8944241C 		movl	%eax, 28(%rsp)
 1966              	.LVL205:
 1967 04c9 01C6     		addl	%eax, %esi
 1968              	.LBB645:
 1969              	.LBB642:
 1970              		.loc 10 223 0
 1971 04cb 488B07   		movq	(%rdi), %rax
 1972 04ce 44895424 		movl	%r10d, 16(%rsp)
 1972      10
 1973              	.LVL206:
 1974              	.LBE642:
 1975              	.LBE645:
 193:fltk-1.3.4-1/src/Fl_Slider.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1976              		.loc 9 193 0
 1977 04d3 89CA     		movl	%ecx, %edx
 1978              	.LVL207:
 1979              	.LBB646:
 1980              	.LBB643:
 1981              		.loc 10 223 0
 1982 04d5 89742414 		movl	%esi, 20(%rsp)
 1983 04d9 89F1     		movl	%esi, %ecx
 1984 04db 89542418 		movl	%edx, 24(%rsp)
 1985 04df 4489D6   		movl	%r10d, %esi
 1986              	.LVL208:
 1987 04e2 FF5060   		call	*96(%rax)
 1988              	.LVL209:
 1989              	.LBE643:
 1990              	.LBE646:
 1991              	.LBB647:
 1992              	.LBB648:
 1993 04e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1993      000000
 1994 04ec 8B4C2418 		movl	24(%rsp), %ecx
 1995 04f0 458D4706 		leal	6(%r15), %r8d
 1996              	.LVL210:
 1997 04f4 8B742410 		movl	16(%rsp), %esi
 1998 04f8 488B07   		movq	(%rdi), %rax
 1999 04fb 8D5106   		leal	6(%rcx), %edx
 2000              	.LVL211:
 2001 04fe 8B4C2414 		movl	20(%rsp), %ecx
 2002 0502 FF5060   		call	*96(%rax)
 2003              	.LVL212:
 2004              	.LBE648:
 2005              	.LBE647:
 2006              	.LBB649:
 2007              	.LBB650:
 2008 0505 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2008      000000
 2009 050c 8B4C2418 		movl	24(%rsp), %ecx
 2010 0510 458D470C 		leal	12(%r15), %r8d
 2011              	.LVL213:
 2012 0514 8B742410 		movl	16(%rsp), %esi
 2013 0518 488B07   		movq	(%rdi), %rax
 2014 051b 8D510C   		leal	12(%rcx), %edx
 2015              	.LVL214:
 2016 051e 8B4C2414 		movl	20(%rsp), %ecx
 2017 0522 FF5060   		call	*96(%rax)
 2018              	.LVL215:
 2019              	.LBE650:
 2020              	.LBE649:
 2021              	.LBB651:
 2022              	.LBB652:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 2023              		.loc 12 991 0
 2024 0525 418B7E68 		movl	104(%r14), %edi
 2025              	.LBE652:
 2026              	.LBE651:
 197:fltk-1.3.4-1/src/Fl_Slider.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 2027              		.loc 9 197 0
 2028 0529 458D4701 		leal	1(%r15), %r8d
 2029              	.LBB655:
 2030              	.LBB653:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 2031              		.loc 12 991 0
 2032 052d BEFF0000 		movl	$255, %esi
 2032      00
 2033 0532 F30F1005 		movss	.LC28(%rip), %xmm0
 2033      00000000 
 2034              	.LBE653:
 2035              	.LBE655:
 197:fltk-1.3.4-1/src/Fl_Slider.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 2036              		.loc 9 197 0
 2037 053a 44894424 		movl	%r8d, 24(%rsp)
 2037      18
 2038              	.LVL216:
 2039              	.LBB656:
 2040              	.LBB654:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 2041              		.loc 12 991 0
 2042 053f E8000000 		call	_Z16fl_color_averagejjf
 2042      00
 2043              	.LVL217:
 2044              	.LBE654:
 2045              	.LBE656:
 2046              	.LBB657:
 2047              	.LBB658:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2048              		.loc 10 52 0
 2049 0544 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2049      000000
 2050 054b 89C6     		movl	%eax, %esi
 2051 054d 488B17   		movq	(%rdi), %rdx
 2052 0550 FF928800 		call	*136(%rdx)
 2052      0000
 2053              	.LVL218:
 2054              	.LBE658:
 2055              	.LBE657:
 199:fltk-1.3.4-1/src/Fl_Slider.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2056              		.loc 9 199 0
 2057 0556 448B4424 		movl	24(%rsp), %r8d
 2057      18
 2058 055b 8B44241C 		movl	28(%rsp), %eax
 2059              	.LBB659:
 2060              	.LBB660:
 2061              		.loc 10 223 0
 2062 055f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2062      000000
 2063 0566 8B4C2414 		movl	20(%rsp), %ecx
 2064 056a 8B742410 		movl	16(%rsp), %esi
 2065              	.LBE660:
 2066              	.LBE659:
 199:fltk-1.3.4-1/src/Fl_Slider.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2067              		.loc 9 199 0
 2068 056e 4401C0   		addl	%r8d, %eax
 2069 0571 89C2     		movl	%eax, %edx
 2070              	.LVL219:
 2071              	.LBB662:
 2072              	.LBB661:
 2073              		.loc 10 223 0
 2074 0573 488B07   		movq	(%rdi), %rax
 2075              	.LVL220:
 2076 0576 89542418 		movl	%edx, 24(%rsp)
 2077              	.LVL221:
 2078 057a FF5060   		call	*96(%rax)
 2079              	.LVL222:
 2080              	.LBE661:
 2081              	.LBE662:
 2082              	.LBB663:
 2083              	.LBB664:
 2084 057d 8B442418 		movl	24(%rsp), %eax
 2085 0581 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2085      000000
 2086 0588 458D4707 		leal	7(%r15), %r8d
 2087              	.LVL223:
 2088 058c 8B4C2414 		movl	20(%rsp), %ecx
 2089 0590 8B742410 		movl	16(%rsp), %esi
 2090 0594 8D5006   		leal	6(%rax), %edx
 2091              	.LVL224:
 2092 0597 488B07   		movq	(%rdi), %rax
 2093 059a FF5060   		call	*96(%rax)
 2094              	.LVL225:
 2095              	.LBE664:
 2096              	.LBE663:
 2097              	.LBB665:
 2098              	.LBB666:
 2099 059d 8B442418 		movl	24(%rsp), %eax
 2100 05a1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2100      000000
 2101 05a8 458D470D 		leal	13(%r15), %r8d
 2102              	.LVL226:
 2103 05ac 8B4C2414 		movl	20(%rsp), %ecx
 2104 05b0 8B742410 		movl	16(%rsp), %esi
 2105 05b4 8D500C   		leal	12(%rax), %edx
 2106              	.LVL227:
 2107 05b7 488B07   		movq	(%rdi), %rax
 2108 05ba FF5060   		call	*96(%rax)
 2109              	.LVL228:
 2110 05bd E9BEFDFF 		jmp	.L76
 2110      FF
 2111              	.LVL229:
 2112              		.p2align 4,,10
 2113 05c2 660F1F44 		.p2align 3
 2113      0000
 2114              	.L122:
 2115              	.LBE666:
 2116              	.LBE665:
 2117              	.LBE630:
 2118              	.LBE629:
 2119              	.LBE667:
 2120              	.LBE668:
 2121              	.LBE669:
 2122              	.LBE671:
 2123              	.LBE675:
 122:fltk-1.3.4-1/src/Fl_Slider.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 2124              		.loc 9 122 0
 2125 05c8 660FEFC9 		pxor	%xmm1, %xmm1
 2126 05cc 660F2EC8 		ucomisd	%xmm0, %xmm1
 2127 05d0 0F86E6FA 		jbe	.L115
 2127      FFFF
 2128 05d6 E9DDFAFF 		jmp	.L95
 2128      FF
 2129              	.LVL230:
 2130 05db 0F1F4400 		.p2align 4,,10
 2130      00
 2131              		.p2align 3
 2132              	.L128:
 2133              	.LBB676:
 2134              	.LBB677:
 186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) const;
 2135              		.loc 1 186 0
 2136 05e0 418B4E24 		movl	36(%r14), %ecx
 2137 05e4 418B5620 		movl	32(%r14), %edx
 2138 05e8 410FB676 		movzbl	110(%r14), %esi
 2138      6E
 2139 05ed 458B4E2C 		movl	44(%r14), %r9d
 2140 05f1 458B4628 		movl	40(%r14), %r8d
 2141 05f5 E945FEFF 		jmp	.L116
 2141      FF
 2142              	.LVL231:
 2143 05fa 660F1F44 		.p2align 4,,10
 2143      0000
 2144              		.p2align 3
 2145              	.L124:
 2146              	.LBE677:
 2147              	.LBE676:
 2148              	.LBB678:
 2149              	.LBB672:
 156:fltk-1.3.4-1/src/Fl_Slider.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2150              		.loc 9 156 0
 2151 0600 4883EC08 		subq	$8, %rsp
 2152              		.cfi_def_cfa_offset 104
 2153 0604 4589E9   		movl	%r13d, %r9d
 2154 0607 4189D8   		movl	%ebx, %r8d
 2155 060a 6A31     		pushq	$49
 2156              		.cfi_def_cfa_offset 112
 2157 060c 448B7C24 		movl	28(%rsp), %r15d
 2157      1C
 2158              	.LVL232:
 2159 0611 89EA     		movl	%ebp, %edx
 2160 0613 4489E6   		movl	%r12d, %esi
 2161 0616 4C89F7   		movq	%r14, %rdi
 2162 0619 4489F9   		movl	%r15d, %ecx
 2163 061c E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2163      00
 2164              	.LVL233:
 157:fltk-1.3.4-1/src/Fl_Slider.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 2165              		.loc 9 157 0
 2166 0621 418D45FC 		leal	-4(%r13), %eax
 158:fltk-1.3.4-1/src/Fl_Slider.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2167              		.loc 9 158 0
 2168 0625 418B7668 		movl	104(%r14), %esi
 2169 0629 448D43FC 		leal	-4(%rbx), %r8d
 2170 062d 8D5502   		leal	2(%rbp), %edx
 2171 0630 4589E9   		movl	%r13d, %r9d
 2172 0633 4C89F7   		movq	%r14, %rdi
 157:fltk-1.3.4-1/src/Fl_Slider.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 2173              		.loc 9 157 0
 2174 0636 89C1     		movl	%eax, %ecx
 2175 0638 C1E91F   		shrl	$31, %ecx
 158:fltk-1.3.4-1/src/Fl_Slider.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2176              		.loc 9 158 0
 2177 063b 893424   		movl	%esi, (%rsp)
 2178 063e BE070000 		movl	$7, %esi
 2178      00
 157:fltk-1.3.4-1/src/Fl_Slider.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 2179              		.loc 9 157 0
 2180 0643 01C1     		addl	%eax, %ecx
 2181 0645 D1F9     		sarl	%ecx
 2182              	.LVL234:
 158:fltk-1.3.4-1/src/Fl_Slider.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2183              		.loc 9 158 0
 2184 0647 8D0409   		leal	(%rcx,%rcx), %eax
 2185 064a 4401F9   		addl	%r15d, %ecx
 2186              	.LVL235:
 2187 064d 4129C1   		subl	%eax, %r9d
 2188 0650 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2188      00
 2189              	.LVL236:
 2190              	.LBE672:
 2191 0655 4158     		popq	%r8
 2192              		.cfi_def_cfa_offset 104
 2193 0657 4159     		popq	%r9
 2194              		.cfi_def_cfa_offset 96
 2195 0659 E922FDFF 		jmp	.L76
 2195      FF
 2196              	.LVL237:
 2197 065e 6690     		.p2align 4,,10
 2198              		.p2align 3
 2199              	.L125:
 2200              	.LBB673:
 2201              	.LBB670:
 160:fltk-1.3.4-1/src/Fl_Slider.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2202              		.loc 9 160 0
 2203 0660 4883EC08 		subq	$8, %rsp
 2204              		.cfi_def_cfa_offset 104
 2205 0664 4589E9   		movl	%r13d, %r9d
 2206 0667 4189D8   		movl	%ebx, %r8d
 2207 066a 6A31     		pushq	$49
 2208              		.cfi_def_cfa_offset 112
 2209 066c 448B7C24 		movl	28(%rsp), %r15d
 2209      1C
 2210              	.LVL238:
 2211 0671 89EA     		movl	%ebp, %edx
 2212 0673 4489E6   		movl	%r12d, %esi
 2213 0676 4C89F7   		movq	%r14, %rdi
 2214 0679 4489F9   		movl	%r15d, %ecx
 2215 067c E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2215      00
 2216              	.LVL239:
 161:fltk-1.3.4-1/src/Fl_Slider.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2217              		.loc 9 161 0
 2218 0681 8D43FC   		leal	-4(%rbx), %eax
 162:fltk-1.3.4-1/src/Fl_Slider.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 2219              		.loc 9 162 0
 2220 0684 418B7668 		movl	104(%r14), %esi
 2221 0688 418D4F02 		leal	2(%r15), %ecx
 2222 068c 458D4DFC 		leal	-4(%r13), %r9d
 2223 0690 4189D8   		movl	%ebx, %r8d
 2224 0693 4C89F7   		movq	%r14, %rdi
 161:fltk-1.3.4-1/src/Fl_Slider.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2225              		.loc 9 161 0
 2226 0696 89C2     		movl	%eax, %edx
 2227 0698 C1EA1F   		shrl	$31, %edx
 162:fltk-1.3.4-1/src/Fl_Slider.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 2228              		.loc 9 162 0
 2229 069b 893424   		movl	%esi, (%rsp)
 2230 069e BE070000 		movl	$7, %esi
 2230      00
 161:fltk-1.3.4-1/src/Fl_Slider.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2231              		.loc 9 161 0
 2232 06a3 01C2     		addl	%eax, %edx
 2233 06a5 D1FA     		sarl	%edx
 2234              	.LVL240:
 162:fltk-1.3.4-1/src/Fl_Slider.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 2235              		.loc 9 162 0
 2236 06a7 8D0412   		leal	(%rdx,%rdx), %eax
 2237 06aa 01EA     		addl	%ebp, %edx
 2238              	.LVL241:
 2239 06ac 4129C0   		subl	%eax, %r8d
 2240 06af E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2240      00
 2241              	.LVL242:
 2242              	.LBE670:
 2243 06b4 5E       		popq	%rsi
 2244              		.cfi_def_cfa_offset 104
 2245 06b5 5F       		popq	%rdi
 2246              		.cfi_def_cfa_offset 96
 2247 06b6 E9C5FCFF 		jmp	.L76
 2247      FF
 2248              	.LVL243:
 2249              	.L127:
 2250              	.LBE673:
 2251              	.LBE678:
 2252              	.LBB679:
 128:fltk-1.3.4-1/src/Fl_Slider.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 2253              		.loc 9 128 0
 2254 06bb 89EB     		movl	%ebp, %ebx
 130:fltk-1.3.4-1/src/Fl_Slider.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 2255              		.loc 9 130 0
 2256 06bd 31ED     		xorl	%ebp, %ebp
 2257              	.LVL244:
 2258 06bf E980FAFF 		jmp	.L92
 2258      FF
 2259              	.LVL245:
 2260              	.L98:
 129:fltk-1.3.4-1/src/Fl_Slider.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2261              		.loc 9 129 0
 2262 06c4 89C1     		movl	%eax, %ecx
 128:fltk-1.3.4-1/src/Fl_Slider.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 2263              		.loc 9 128 0
 2264 06c6 89DD     		movl	%ebx, %ebp
 2265 06c8 E909FDFF 		jmp	.L91
 2265      FF
 2266              	.LBE679:
 2267              		.cfi_endproc
 2268              	.LFE517:
 2270              		.section	.text.unlikely._ZN9Fl_Slider4drawEiiii
 2271              	.LCOLDE29:
 2272              		.section	.text._ZN9Fl_Slider4drawEiiii
 2273              	.LHOTE29:
 2274              		.section	.text.unlikely._ZN9Fl_Slider4drawEv,"ax",@progbits
 2275              		.align 2
 2276              	.LCOLDB30:
 2277              		.section	.text._ZN9Fl_Slider4drawEv,"ax",@progbits
 2278              	.LHOTB30:
 2279              		.align 2
 2280              		.p2align 4,,15
 2281              		.globl	_ZN9Fl_Slider4drawEv
 2283              	_ZN9Fl_Slider4drawEv:
 2284              	.LFB518:
 212:fltk-1.3.4-1/src/Fl_Slider.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Slider.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 2285              		.loc 9 213 0
 2286              		.cfi_startproc
 2287              	.LVL246:
 2288 0000 4156     		pushq	%r14
 2289              		.cfi_def_cfa_offset 16
 2290              		.cfi_offset 14, -16
 2291 0002 4155     		pushq	%r13
 2292              		.cfi_def_cfa_offset 24
 2293              		.cfi_offset 13, -24
 2294 0004 4154     		pushq	%r12
 2295              		.cfi_def_cfa_offset 32
 2296              		.cfi_offset 12, -32
 2297 0006 55       		pushq	%rbp
 2298              		.cfi_def_cfa_offset 40
 2299              		.cfi_offset 6, -40
 2300 0007 53       		pushq	%rbx
 2301              		.cfi_def_cfa_offset 48
 2302              		.cfi_offset 3, -48
 214:fltk-1.3.4-1/src/Fl_Slider.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2303              		.loc 9 214 0
 2304 0008 807F6D00 		cmpb	$0, 109(%rdi)
 213:fltk-1.3.4-1/src/Fl_Slider.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2305              		.loc 9 213 0
 2306 000c 4889FB   		movq	%rdi, %rbx
 2307              		.loc 9 214 0
 2308 000f 785F     		js	.L132
 2309              	.LVL247:
 2310              	.L130:
 215:fltk-1.3.4-1/src/Fl_Slider.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Slider.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Slider.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Slider.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 2311              		.loc 9 218 0
 2312 0011 0FB67B6E 		movzbl	110(%rbx), %edi
 2313 0015 448B732C 		movl	44(%rbx), %r14d
 2314              	.LVL248:
 2315 0019 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 2315      00
 2316              	.LVL249:
 217:fltk-1.3.4-1/src/Fl_Slider.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 2317              		.loc 9 217 0
 2318 001e 0FB67B6E 		movzbl	110(%rbx), %edi
 215:fltk-1.3.4-1/src/Fl_Slider.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2319              		.loc 9 215 0
 2320 0022 4129C6   		subl	%eax, %r14d
 2321 0025 448B6B28 		movl	40(%rbx), %r13d
 2322              	.LVL250:
 217:fltk-1.3.4-1/src/Fl_Slider.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 2323              		.loc 9 217 0
 2324 0029 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 2324      00
 2325              	.LVL251:
 216:fltk-1.3.4-1/src/Fl_Slider.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2326              		.loc 9 216 0
 2327 002e 0FB67B6E 		movzbl	110(%rbx), %edi
 2328 0032 8B6B24   		movl	36(%rbx), %ebp
 215:fltk-1.3.4-1/src/Fl_Slider.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2329              		.loc 9 215 0
 2330 0035 4129C5   		subl	%eax, %r13d
 2331              	.LVL252:
 216:fltk-1.3.4-1/src/Fl_Slider.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2332              		.loc 9 216 0
 2333 0038 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 2333      00
 2334              	.LVL253:
 215:fltk-1.3.4-1/src/Fl_Slider.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2335              		.loc 9 215 0
 2336 003d 0FB67B6E 		movzbl	110(%rbx), %edi
 2337 0041 448D2428 		leal	(%rax,%rbp), %r12d
 2338 0045 8B6B20   		movl	32(%rbx), %ebp
 2339              	.LVL254:
 2340 0048 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 2340      00
 2341              	.LVL255:
 2342              		.loc 9 218 0
 2343 004d 4589F0   		movl	%r14d, %r8d
 2344 0050 8D3428   		leal	(%rax,%rbp), %esi
 2345 0053 4489E9   		movl	%r13d, %ecx
 2346 0056 4489E2   		movl	%r12d, %edx
 2347 0059 4889DF   		movq	%rbx, %rdi
 219:fltk-1.3.4-1/src/Fl_Slider.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2348              		.loc 9 219 0
 2349 005c 5B       		popq	%rbx
 2350              		.cfi_remember_state
 2351              		.cfi_def_cfa_offset 40
 2352              	.LVL256:
 2353 005d 5D       		popq	%rbp
 2354              		.cfi_def_cfa_offset 32
 2355 005e 415C     		popq	%r12
 2356              		.cfi_def_cfa_offset 24
 2357 0060 415D     		popq	%r13
 2358              		.cfi_def_cfa_offset 16
 2359 0062 415E     		popq	%r14
 2360              		.cfi_def_cfa_offset 8
 218:fltk-1.3.4-1/src/Fl_Slider.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2361              		.loc 9 218 0
 2362 0064 E9000000 		jmp	_ZN9Fl_Slider4drawEiiii
 2362      00
 2363              	.LVL257:
 2364 0069 0F1F8000 		.p2align 4,,10
 2364      000000
 2365              		.p2align 3
 2366              	.L132:
 2367              		.cfi_restore_state
 214:fltk-1.3.4-1/src/Fl_Slider.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2368              		.loc 9 214 0 discriminator 1
 2369 0070 E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 2369      00
 2370              	.LVL258:
 2371 0075 EB9A     		jmp	.L130
 2372              		.cfi_endproc
 2373              	.LFE518:
 2375              		.section	.text.unlikely._ZN9Fl_Slider4drawEv
 2376              	.LCOLDE30:
 2377              		.section	.text._ZN9Fl_Slider4drawEv
 2378              	.LHOTE30:
 2379              		.section	.text.unlikely._ZN9Fl_Slider6handleEiiiii,"ax",@progbits
 2380              		.align 2
 2381              	.LCOLDB31:
 2382              		.section	.text._ZN9Fl_Slider6handleEiiiii,"ax",@progbits
 2383              	.LHOTB31:
 2384              		.align 2
 2385              		.p2align 4,,15
 2386              		.globl	_ZN9Fl_Slider6handleEiiiii
 2388              	_ZN9Fl_Slider6handleEiiiii:
 2389              	.LFB519:
 220:fltk-1.3.4-1/src/Fl_Slider.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Slider.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 2390              		.loc 9 221 0
 2391              		.cfi_startproc
 2392              	.LVL259:
 2393 0000 4157     		pushq	%r15
 2394              		.cfi_def_cfa_offset 16
 2395              		.cfi_offset 15, -16
 2396 0002 4156     		pushq	%r14
 2397              		.cfi_def_cfa_offset 24
 2398              		.cfi_offset 14, -24
 2399 0004 4155     		pushq	%r13
 2400              		.cfi_def_cfa_offset 32
 2401              		.cfi_offset 13, -32
 2402 0006 4154     		pushq	%r12
 2403              		.cfi_def_cfa_offset 40
 2404              		.cfi_offset 12, -40
 2405 0008 55       		pushq	%rbp
 2406              		.cfi_def_cfa_offset 48
 2407              		.cfi_offset 6, -48
 2408 0009 53       		pushq	%rbx
 2409              		.cfi_def_cfa_offset 56
 2410              		.cfi_offset 3, -56
 2411 000a 4883EC28 		subq	$40, %rsp
 2412              		.cfi_def_cfa_offset 96
 2413              		.loc 9 221 0
 2414 000e 64488B04 		movq	%fs:40, %rax
 2414      25280000 
 2414      00
 2415 0017 48894424 		movq	%rax, 24(%rsp)
 2415      18
 2416 001c 31C0     		xorl	%eax, %eax
 2417              	.LBB680:
 222:fltk-1.3.4-1/src/Fl_Slider.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Slider.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 2418              		.loc 9 223 0
 2419 001e 83FE08   		cmpl	$8, %esi
 2420 0021 0F874B02 		ja	.L182
 2420      0000
 2421 0027 89F0     		movl	%esi, %eax
 2422 0029 4889FB   		movq	%rdi, %rbx
 2423 002c 4189F7   		movl	%esi, %r15d
 2424 002f 4189D5   		movl	%edx, %r13d
 2425 0032 89CD     		movl	%ecx, %ebp
 2426 0034 FF24C500 		jmp	*.L136(,%rax,8)
 2426      000000
 2427              		.section	.rodata._ZN9Fl_Slider6handleEiiiii,"a",@progbits
 2428              		.align 8
 2429              		.align 4
 2430              	.L136:
 2431 0000 00000000 		.quad	.L182
 2431      00000000 
 2432 0008 00000000 		.quad	.L135
 2432      00000000 
 2433 0010 00000000 		.quad	.L137
 2433      00000000 
 2434 0018 00000000 		.quad	.L207
 2434      00000000 
 2435 0020 00000000 		.quad	.L207
 2435      00000000 
 2436 0028 00000000 		.quad	.L139
 2436      00000000 
 2437 0030 00000000 		.quad	.L140
 2437      00000000 
 2438 0038 00000000 		.quad	.L140
 2438      00000000 
 2439 0040 00000000 		.quad	.L141
 2439      00000000 
 2440              		.section	.text._ZN9Fl_Slider6handleEiiiii
 2441              	.LVL260:
 2442 003b 0F1F4400 		.p2align 4,,10
 2442      00
 2443              		.p2align 3
 2444              	.L223:
 2445              	.LBB681:
 2446              	.LBB682:
 2447              	.LBB683:
 2448              	.LBB684:
 2449              	.LBB685:
 224:fltk-1.3.4-1/src/Fl_Slider.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Slider.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Slider.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Slider.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Slider.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Slider.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Slider.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Slider.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Slider.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Slider.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Slider.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Slider.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Slider.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Slider.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Slider.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Slider.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Slider.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Slider.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Slider.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Slider.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Slider.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Slider.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Slider.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Slider.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Slider.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Slider.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 2450              		.loc 9 249 0
 2451 0040 4183FF01 		cmpl	$1, %r15d
 2452 0044 0F842E04 		je	.L177
 2452      0000
 2453 004a 660FEFF6 		pxor	%xmm6, %xmm6
 2454 004e 8B050000 		movl	_ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip), %eax
 2454      0000
 2455              	.LBE685:
 248:fltk-1.3.4-1/src/Fl_Slider.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 2456              		.loc 9 248 0
 2457 0054 4531E4   		xorl	%r12d, %r12d
 2458 0057 F20F2AF5 		cvtsi2sd	%ebp, %xmm6
 2459 005b F20F1134 		movsd	%xmm6, (%rsp)
 2459      24
 2460              	.LVL261:
 2461              	.L150:
 2462              	.LBE684:
 2463              	.LBE683:
 250:fltk-1.3.4-1/src/Fl_Slider.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Slider.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Slider.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Slider.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Slider.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Slider.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Slider.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Slider.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Slider.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Slider.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Slider.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Slider.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Slider.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Slider.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Slider.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Slider.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Slider.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Slider.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Slider.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Slider.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Slider.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Slider.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 2464              		.loc 9 271 0
 2465 0060 8B4C2408 		movl	8(%rsp), %ecx
 272:fltk-1.3.4-1/src/Fl_Slider.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Slider.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Slider.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Slider.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Slider.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Slider.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Slider.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Slider.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Slider.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Slider.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Slider.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Slider.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Slider.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Slider.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Slider.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Slider.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 2466              		.loc 9 287 0
 2467 0064 4589E6   		movl	%r12d, %r14d
 2468 0067 41C1EE1F 		shrl	$31, %r14d
 2469 006b 4501E6   		addl	%r12d, %r14d
 271:fltk-1.3.4-1/src/Fl_Slider.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2470              		.loc 9 271 0
 2471 006e 4189CD   		movl	%ecx, %r13d
 2472              	.LVL262:
 2473              		.loc 9 287 0
 2474 0071 41D1FE   		sarl	%r14d
 271:fltk-1.3.4-1/src/Fl_Slider.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2475              		.loc 9 271 0
 2476 0074 4129C5   		subl	%eax, %r13d
 2477              	.LVL263:
 282:fltk-1.3.4-1/src/Fl_Slider.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 2478              		.loc 9 282 0
 2479 0077 89C8     		movl	%ecx, %eax
 2480 0079 29E8     		subl	%ebp, %eax
 277:fltk-1.3.4-1/src/Fl_Slider.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2481              		.loc 9 277 0
 2482 007b 4585ED   		testl	%r13d, %r13d
 282:fltk-1.3.4-1/src/Fl_Slider.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 2483              		.loc 9 282 0
 2484 007e 8944240C 		movl	%eax, 12(%rsp)
 277:fltk-1.3.4-1/src/Fl_Slider.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2485              		.loc 9 277 0
 2486 0082 0F881703 		js	.L219
 2486      0000
 2487              	.LVL264:
 2488 0088 0F1F8400 		.p2align 4,,10
 2488      00000000 
 2489              		.p2align 3
 2490              	.L158:
 280:fltk-1.3.4-1/src/Fl_Slider.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 2491              		.loc 9 280 0
 2492 0090 4439ED   		cmpl	%r13d, %ebp
 2493 0093 0F8CAF02 		jl	.L161
 2493      0000
 2494 0099 660FEFC9 		pxor	%xmm1, %xmm1
 2495 009d F2410F2A 		cvtsi2sd	%r13d, %xmm1
 2495      CD
 2496              	.L160:
 2497              	.LVL265:
 284:fltk-1.3.4-1/src/Fl_Slider.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 2498              		.loc 9 284 0
 2499 00a2 F20F5CC2 		subsd	%xmm2, %xmm0
 2500 00a6 4889DF   		movq	%rbx, %rdi
 2501 00a9 F20F59C1 		mulsd	%xmm1, %xmm0
 2502 00ad F20F5E04 		divsd	(%rsp), %xmm0
 2502      24
 2503 00b2 F20F58C2 		addsd	%xmm2, %xmm0
 2504 00b6 E8000000 		call	_ZN11Fl_Valuator5roundEd
 2504      00
 2505              	.LVL266:
 286:fltk-1.3.4-1/src/Fl_Slider.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 2506              		.loc 9 286 0
 2507 00bb 4183FF01 		cmpl	$1, %r15d
 2508 00bf 0F84A302 		je	.L220
 2508      0000
 2509              	.L163:
 2510              	.LVL267:
 288:fltk-1.3.4-1/src/Fl_Slider.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Slider.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Slider.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Slider.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Slider.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2511              		.loc 9 292 0
 2512 00c5 4889DF   		movq	%rbx, %rdi
 2513 00c8 E8000000 		call	_ZN11Fl_Valuator5clampEd
 2513      00
 2514              	.LVL268:
 2515 00cd 4889DF   		movq	%rbx, %rdi
 2516 00d0 E8000000 		call	_ZN11Fl_Valuator11handle_dragEd
 2516      00
 2517              	.LVL269:
 2518              	.L207:
 2519              	.LBE682:
 293:fltk-1.3.4-1/src/Fl_Slider.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 2520              		.loc 9 293 0
 2521 00d5 B8010000 		movl	$1, %eax
 2521      00
 2522              	.LVL270:
 2523              	.L134:
 2524              	.LBE681:
 2525              	.LBE680:
 294:fltk-1.3.4-1/src/Fl_Slider.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Slider.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Slider.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Slider.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Slider.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Slider.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Slider.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Slider.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Slider.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Slider.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Slider.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Slider.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Slider.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Slider.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Slider.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Slider.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Slider.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Slider.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Slider.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Slider.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Slider.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Slider.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Slider.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Slider.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Slider.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Slider.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Slider.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Slider.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Slider.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Slider.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Slider.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Slider.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Slider.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Slider.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Slider.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Slider.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Slider.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Slider.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Slider.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Slider.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Slider.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Slider.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Slider.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Slider.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Slider.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Slider.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Slider.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Slider.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Slider.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Slider.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Slider.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Slider.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Slider.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Slider.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Slider.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Slider.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 2526              		.loc 9 349 0 discriminator 1
 2527 00da 488B7424 		movq	24(%rsp), %rsi
 2527      18
 2528 00df 64483334 		xorq	%fs:40, %rsi
 2528      25280000 
 2528      00
 2529 00e8 0F856E04 		jne	.L221
 2529      0000
 2530              		.loc 9 349 0 is_stmt 0
 2531 00ee 4883C428 		addq	$40, %rsp
 2532              		.cfi_remember_state
 2533              		.cfi_def_cfa_offset 56
 2534 00f2 5B       		popq	%rbx
 2535              		.cfi_def_cfa_offset 48
 2536 00f3 5D       		popq	%rbp
 2537              		.cfi_def_cfa_offset 40
 2538 00f4 415C     		popq	%r12
 2539              		.cfi_def_cfa_offset 32
 2540 00f6 415D     		popq	%r13
 2541              		.cfi_def_cfa_offset 24
 2542 00f8 415E     		popq	%r14
 2543              		.cfi_def_cfa_offset 16
 2544 00fa 415F     		popq	%r15
 2545              		.cfi_def_cfa_offset 8
 2546 00fc C3       		ret
 2547              	.LVL271:
 2548 00fd 0F1F00   		.p2align 4,,10
 2549              		.p2align 3
 2550              	.L135:
 2551              		.cfi_restore_state
 2552              	.LBB724:
 2553              	.LBB723:
 2554              	.LBB706:
 225:fltk-1.3.4-1/src/Fl_Slider.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2555              		.loc 9 225 0 is_stmt 1
 2556 0100 4C8D6424 		leaq	16(%rsp), %r12
 2556      10
 2557 0105 4889FE   		movq	%rdi, %rsi
 2558              	.LVL272:
 2559 0108 44894C24 		movl	%r9d, 8(%rsp)
 2559      08
 2560 010d 44890424 		movl	%r8d, (%rsp)
 2561 0111 4C89E7   		movq	%r12, %rdi
 2562 0114 E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 2562      00
 2563              	.LVL273:
 226:fltk-1.3.4-1/src/Fl_Slider.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 2564              		.loc 9 226 0
 2565 0119 448B4C24 		movl	8(%rsp), %r9d
 2565      08
 2566 011e 448B0424 		movl	(%rsp), %r8d
 2567 0122 89EE     		movl	%ebp, %esi
 2568 0124 4489EF   		movl	%r13d, %edi
 2569 0127 4489C9   		movl	%r9d, %ecx
 2570 012a 4489C2   		movl	%r8d, %edx
 2571 012d E8000000 		call	_ZN2Fl12event_insideEiiii
 2571      00
 2572              	.LVL274:
 2573 0132 85C0     		testl	%eax, %eax
 2574 0134 0F84E201 		je	.L166
 2574      0000
 2575              	.LVL275:
 228:fltk-1.3.4-1/src/Fl_Slider.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 2576              		.loc 9 228 0
 2577 013a 48837C24 		cmpq	$0, 16(%rsp)
 2577      1000
 2578              	.LBB707:
 2579              	.LBB708:
  64:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double softclamp(double);
 2580              		.loc 3 64 0
 2581 0140 F20F1043 		movsd	120(%rbx), %xmm0
 2581      78
 2582 0145 F20F1183 		movsd	%xmm0, 128(%rbx)
 2582      80000000 
 2583              	.LBE708:
 2584              	.LBE707:
 228:fltk-1.3.4-1/src/Fl_Slider.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 2585              		.loc 9 228 0
 2586 014d 0F84C401 		je	.L204
 2586      0000
 225:fltk-1.3.4-1/src/Fl_Slider.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2587              		.loc 9 225 0
 2588 0153 4C89E7   		movq	%r12, %rdi
 2589 0156 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 2589      00
 2590              	.LVL276:
 2591 015b 448B0424 		movl	(%rsp), %r8d
 2592 015f 448B4C24 		movl	8(%rsp), %r9d
 2592      08
 2593              	.LVL277:
 2594              	.L139:
 2595 0164 F20F1093 		movsd	136(%rbx), %xmm2
 2595      88000000 
 2596              	.LVL278:
 2597 016c F20F1083 		movsd	144(%rbx), %xmm0
 2597      90000000 
 2598              	.LVL279:
 2599              	.LBE706:
 2600              	.LBB709:
 233:fltk-1.3.4-1/src/Fl_Slider.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 2601              		.loc 9 233 0
 2602 0174 660F2ED0 		ucomisd	%xmm0, %xmm2
 2603 0178 7A0A     		jp	.L192
 234:fltk-1.3.4-1/src/Fl_Slider.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2604              		.loc 9 234 0
 2605 017a F20F100D 		movsd	.LC26(%rip), %xmm1
 2605      00000000 
 233:fltk-1.3.4-1/src/Fl_Slider.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 2606              		.loc 9 233 0
 2607 0182 742B     		je	.L143
 2608              	.L192:
 2609              	.LVL280:
 236:fltk-1.3.4-1/src/Fl_Slider.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2610              		.loc 9 236 0
 2611 0184 F20F104B 		movsd	120(%rbx), %xmm1
 2611      78
 2612 0189 660F28D8 		movapd	%xmm0, %xmm3
 2613 018d F20F5CCA 		subsd	%xmm2, %xmm1
 2614 0191 F20F5CDA 		subsd	%xmm2, %xmm3
 2615 0195 F20F5ECB 		divsd	%xmm3, %xmm1
 2616              	.LVL281:
 237:fltk-1.3.4-1/src/Fl_Slider.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 2617              		.loc 9 237 0
 2618 0199 F20F101D 		movsd	.LC21(%rip), %xmm3
 2618      00000000 
 2619 01a1 660F2ECB 		ucomisd	%xmm3, %xmm1
 2620 01a5 0F861503 		jbe	.L222
 2620      0000
 2621 01ab 660F28CB 		movapd	%xmm3, %xmm1
 2622              	.LVL282:
 2623              	.L143:
 2624 01af 0FB6536C 		movzbl	108(%rbx), %edx
 2625              	.LVL283:
 241:fltk-1.3.4-1/src/Fl_Slider.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 2626              		.loc 9 241 0
 2627 01b3 89D1     		movl	%edx, %ecx
 2628 01b5 83E101   		andl	$1, %ecx
 2629 01b8 0F857201 		jne	.L145
 2629      0000
 2630              	.LVL284:
 242:fltk-1.3.4-1/src/Fl_Slider.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 2631              		.loc 9 242 0
 2632 01be 8B050000 		movl	_ZN2Fl3e_yE(%rip), %eax
 2632      0000
 2633 01c4 29E8     		subl	%ebp, %eax
 241:fltk-1.3.4-1/src/Fl_Slider.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 2634              		.loc 9 241 0
 2635 01c6 4489CD   		movl	%r9d, %ebp
 2636              	.LVL285:
 242:fltk-1.3.4-1/src/Fl_Slider.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 2637              		.loc 9 242 0
 2638 01c9 89442408 		movl	%eax, 8(%rsp)
 2639              	.LVL286:
 2640              	.L180:
 2641              	.LBB702:
 246:fltk-1.3.4-1/src/Fl_Slider.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 2642              		.loc 9 246 0 discriminator 4
 2643 01cd 8D42FE   		leal	-2(%rdx), %eax
 2644 01d0 3C01     		cmpb	$1, %al
 2645 01d2 0F8668FE 		jbe	.L223
 2645      FFFF
 2646              	.LBB691:
 258:fltk-1.3.4-1/src/Fl_Slider.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 2647              		.loc 9 258 0
 2648 01d8 660FEFDB 		pxor	%xmm3, %xmm3
 2649 01dc F20F1025 		movsd	.LC26(%rip), %xmm4
 2649      00000000 
 2650 01e4 F30F2ADD 		cvtsi2ss	%ebp, %xmm3
 2651 01e8 F30F599B 		mulss	164(%rbx), %xmm3
 2651      A4000000 
 2652 01f0 F30F5ADB 		cvtss2sd	%xmm3, %xmm3
 2653 01f4 F20F58DC 		addsd	%xmm4, %xmm3
 2654 01f8 F20F2CC3 		cvttsd2si	%xmm3, %eax
 2655              	.LVL287:
 2656 01fc 39E8     		cmpl	%ebp, %eax
 2657 01fe 7D72     		jge	.L182
 259:fltk-1.3.4-1/src/Fl_Slider.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2658              		.loc 9 259 0
 2659 0200 84C9     		testb	%cl, %cl
 2660 0202 0F85F801 		jne	.L224
 2660      0000
 259:fltk-1.3.4-1/src/Fl_Slider.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2661              		.loc 9 259 0 is_stmt 0 discriminator 2
 2662 0208 4589C4   		movl	%r8d, %r12d
 2663 020b 41C1EC1F 		shrl	$31, %r12d
 2664 020f 4501C4   		addl	%r8d, %r12d
 2665 0212 4589E0   		movl	%r12d, %r8d
 2666 0215 41D1F8   		sarl	%r8d
 2667 0218 458D6001 		leal	1(%r8), %r12d
 2668              	.L152:
 2669              	.LVL288:
 260:fltk-1.3.4-1/src/Fl_Slider.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 2670              		.loc 9 260 0 is_stmt 1 discriminator 4
 2671 021c 83EA04   		subl	$4, %edx
 2672 021f 418D4C24 		leal	4(%r12), %ecx
 2672      04
 2673 0224 80FA01   		cmpb	$1, %dl
 2674 0227 440F46E1 		cmovbe	%ecx, %r12d
 2675              	.LVL289:
 2676 022b 4139C4   		cmpl	%eax, %r12d
 2677 022e 440F4CE0 		cmovl	%eax, %r12d
 2678              	.LVL290:
 2679              	.LBB692:
 262:fltk-1.3.4-1/src/Fl_Slider.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2680              		.loc 9 262 0 discriminator 4
 2681 0232 4183FF01 		cmpl	$1, %r15d
 2682 0236 0F84C402 		je	.L154
 2682      0000
 2683 023c 660FEFFF 		pxor	%xmm7, %xmm7
 2684 0240 4429E5   		subl	%r12d, %ebp
 2685              	.LVL291:
 2686 0243 8B050000 		movl	_ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip), %eax
 2686      0000
 2687 0249 F20F2AFD 		cvtsi2sd	%ebp, %xmm7
 2688 024d F20F113C 		movsd	%xmm7, (%rsp)
 2688      24
 2689 0252 E909FEFF 		jmp	.L150
 2689      FF
 2690              	.LVL292:
 2691 0257 660F1F84 		.p2align 4,,10
 2691      00000000 
 2691      00
 2692              		.p2align 3
 2693              	.L140:
 2694              	.LBE692:
 2695              	.LBE691:
 2696              	.LBE702:
 2697              	.LBE709:
 2698              	.LBB710:
 2699              	.LBB711:
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
 2700              		.loc 11 1195 0
 2701 0260 BF010000 		movl	$1, %edi
 2701      00
 2702 0265 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 2702      00
 2703              	.LVL293:
 2704              	.LBE711:
 2705              	.LBE710:
 339:fltk-1.3.4-1/src/Fl_Slider.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 2706              		.loc 9 339 0
 2707 026a 84C0     		testb	%al, %al
 2708 026c 0F857E01 		jne	.L225
 2708      0000
 2709              	.LVL294:
 2710              	.L182:
 347:fltk-1.3.4-1/src/Fl_Slider.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2711              		.loc 9 347 0
 2712 0272 31C0     		xorl	%eax, %eax
 2713 0274 E961FEFF 		jmp	.L134
 2713      FF
 2714              	.LVL295:
 2715 0279 0F1F8000 		.p2align 4,,10
 2715      000000
 2716              		.p2align 3
 2717              	.L137:
 295:fltk-1.3.4-1/src/Fl_Slider.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 2718              		.loc 9 295 0
 2719 0280 E8000000 		call	_ZN11Fl_Valuator14handle_releaseEv
 2719      00
 2720              	.LVL296:
 296:fltk-1.3.4-1/src/Fl_Slider.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2721              		.loc 9 296 0
 2722 0285 B8010000 		movl	$1, %eax
 2722      00
 2723 028a E94BFEFF 		jmp	.L134
 2723      FF
 2724              	.LVL297:
 2725 028f 90       		.p2align 4,,10
 2726              		.p2align 3
 2727              	.L141:
 2728              	.LBB712:
 298:fltk-1.3.4-1/src/Fl_Slider.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 2729              		.loc 9 298 0
 2730 0290 4C8D6424 		leaq	16(%rsp), %r12
 2730      10
 2731 0295 4889FE   		movq	%rdi, %rsi
 2732              	.LVL298:
 2733 0298 4C89E7   		movq	%r12, %rdi
 2734 029b E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 2734      00
 2735              	.LVL299:
 299:fltk-1.3.4-1/src/Fl_Slider.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2736              		.loc 9 299 0
 2737 02a0 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 2737      0000
 2738 02a6 3D52FF00 		cmpl	$65362, %eax
 2738      00
 2739 02ab 0F842702 		je	.L167
 2739      0000
 2740 02b1 0F8E8101 		jle	.L226
 2740      0000
 2741 02b7 3D53FF00 		cmpl	$65363, %eax
 2741      00
 2742 02bc 0F845E01 		je	.L170
 2742      0000
 2743 02c2 3D54FF00 		cmpl	$65364, %eax
 2743      00
 2744 02c7 0F852302 		jne	.L187
 2744      0000
 2745              	.LVL300:
 301:fltk-1.3.4-1/src/Fl_Slider.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2746              		.loc 9 301 0
 2747 02cd 31C0     		xorl	%eax, %eax
 309:fltk-1.3.4-1/src/Fl_Slider.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2748              		.loc 9 309 0
 2749 02cf F6436C01 		testb	$1, 108(%rbx)
 2750 02d3 7547     		jne	.L166
 2751              	.LVL301:
 2752              	.L215:
 327:fltk-1.3.4-1/src/Fl_Slider.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 2753              		.loc 9 327 0
 2754 02d5 48837C24 		cmpq	$0, 16(%rsp)
 2754      1000
 2755 02db F20F1043 		movsd	120(%rbx), %xmm0
 2755      78
 2756              	.LVL302:
 328:fltk-1.3.4-1/src/Fl_Slider.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2757              		.loc 9 328 0
 2758 02e0 BE010000 		movl	$1, %esi
 2758      00
 2759              	.LBB713:
 2760              	.LBB714:
  64:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double softclamp(double);
 2761              		.loc 3 64 0
 2762 02e5 F20F1183 		movsd	%xmm0, 128(%rbx)
 2762      80000000 
 2763              	.LBE714:
 2764              	.LBE713:
 327:fltk-1.3.4-1/src/Fl_Slider.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 2765              		.loc 9 327 0
 2766 02ed 7428     		je	.L204
 2767              	.LVL303:
 2768              	.L211:
 320:fltk-1.3.4-1/src/Fl_Slider.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 2769              		.loc 9 320 0
 2770 02ef 4889DF   		movq	%rbx, %rdi
 2771 02f2 E8000000 		call	_ZN11Fl_Valuator9incrementEdi
 2771      00
 2772              	.LVL304:
 2773 02f7 4889DF   		movq	%rbx, %rdi
 2774 02fa E8000000 		call	_ZN11Fl_Valuator5clampEd
 2774      00
 2775              	.LVL305:
 2776 02ff 4889DF   		movq	%rbx, %rdi
 2777 0302 E8000000 		call	_ZN11Fl_Valuator11handle_dragEd
 2777      00
 2778              	.LVL306:
 321:fltk-1.3.4-1/src/Fl_Slider.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 2779              		.loc 9 321 0
 2780 0307 48837C24 		cmpq	$0, 16(%rsp)
 2780      1000
 2781 030d 7408     		je	.L204
 322:fltk-1.3.4-1/src/Fl_Slider.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 2782              		.loc 9 322 0
 2783 030f 4889DF   		movq	%rbx, %rdi
 2784 0312 E8000000 		call	_ZN11Fl_Valuator14handle_releaseEv
 2784      00
 2785              	.LVL307:
 2786              	.L204:
 323:fltk-1.3.4-1/src/Fl_Slider.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 2787              		.loc 9 323 0
 2788 0317 B8010000 		movl	$1, %eax
 2788      00
 2789              	.L166:
 298:fltk-1.3.4-1/src/Fl_Slider.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 2790              		.loc 9 298 0
 2791 031c 4C89E7   		movq	%r12, %rdi
 2792 031f 890424   		movl	%eax, (%rsp)
 2793 0322 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 2793      00
 2794              	.LVL308:
 2795 0327 8B0424   		movl	(%rsp), %eax
 2796 032a E9ABFDFF 		jmp	.L134
 2796      FF
 2797              	.LVL309:
 2798 032f 90       		.p2align 4,,10
 2799              		.p2align 3
 2800              	.L145:
 2801              	.LBE712:
 2802              	.LBB717:
 242:fltk-1.3.4-1/src/Fl_Slider.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 2803              		.loc 9 242 0
 2804 0330 8B050000 		movl	_ZN2Fl3e_xE(%rip), %eax
 2804      0000
 241:fltk-1.3.4-1/src/Fl_Slider.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 2805              		.loc 9 241 0
 2806 0336 4489C5   		movl	%r8d, %ebp
 2807              	.LVL310:
 242:fltk-1.3.4-1/src/Fl_Slider.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 2808              		.loc 9 242 0
 2809 0339 4429E8   		subl	%r13d, %eax
 2810 033c 89442408 		movl	%eax, 8(%rsp)
 2811 0340 E988FEFF 		jmp	.L180
 2811      FF
 2812              	.LVL311:
 2813              		.p2align 4,,10
 2814 0345 0F1F00   		.p2align 3
 2815              	.L161:
 282:fltk-1.3.4-1/src/Fl_Slider.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 2816              		.loc 9 282 0
 2817 0348 8B44240C 		movl	12(%rsp), %eax
 2818 034c 4139C4   		cmpl	%eax, %r12d
 2819 034f 7C6F     		jl	.L162
 2820 0351 89050000 		movl	%eax, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 2820      0000
 2821 0357 F20F100C 		movsd	(%rsp), %xmm1
 2821      24
 2822 035c 4189ED   		movl	%ebp, %r13d
 2823 035f E93EFDFF 		jmp	.L160
 2823      FF
 2824              	.LVL312:
 2825              		.p2align 4,,10
 2826 0364 0F1F4000 		.p2align 3
 2827              	.L220:
 286:fltk-1.3.4-1/src/Fl_Slider.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 2828              		.loc 9 286 0 discriminator 1
 2829 0368 660F2E43 		ucomisd	120(%rbx), %xmm0
 2829      78
 2830 036d 0F8A52FD 		jp	.L163
 2830      FFFF
 2831 0373 0F854CFD 		jne	.L163
 2831      FFFF
 277:fltk-1.3.4-1/src/Fl_Slider.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2832              		.loc 9 277 0
 2833 0379 4585ED   		testl	%r13d, %r13d
 287:fltk-1.3.4-1/src/Fl_Slider.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 2834              		.loc 9 287 0
 2835 037c 44893500 		movl	%r14d, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 2835      000000
 2836              	.LVL313:
 288:fltk-1.3.4-1/src/Fl_Slider.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 2837              		.loc 9 288 0
 2838 0383 41BF0500 		movl	$5, %r15d
 2838      0000
 2839              	.LVL314:
 2840 0389 F20F1093 		movsd	136(%rbx), %xmm2
 2840      88000000 
 2841 0391 F20F1083 		movsd	144(%rbx), %xmm0
 2841      90000000 
 277:fltk-1.3.4-1/src/Fl_Slider.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2842              		.loc 9 277 0
 2843 0399 0F89F1FC 		jns	.L158
 2843      FFFF
 2844              	.LVL315:
 2845              	.L219:
 279:fltk-1.3.4-1/src/Fl_Slider.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2846              		.loc 9 279 0
 2847 039f 8B442408 		movl	8(%rsp), %eax
 2848 03a3 85C0     		testl	%eax, %eax
 2849 03a5 7831     		js	.L159
 2850 03a7 89050000 		movl	%eax, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 2850      0000
 2851 03ad 660FEFC9 		pxor	%xmm1, %xmm1
 278:fltk-1.3.4-1/src/Fl_Slider.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 2852              		.loc 9 278 0
 2853 03b1 4531ED   		xorl	%r13d, %r13d
 2854 03b4 E9E9FCFF 		jmp	.L160
 2854      FF
 2855              	.LVL316:
 2856 03b9 0F1F8000 		.p2align 4,,10
 2856      000000
 2857              		.p2align 3
 2858              	.L162:
 282:fltk-1.3.4-1/src/Fl_Slider.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 2859              		.loc 9 282 0 discriminator 1
 2860 03c0 44892500 		movl	%r12d, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 2860      000000
 2861 03c7 F20F100C 		movsd	(%rsp), %xmm1
 2861      24
 2862 03cc 4189ED   		movl	%ebp, %r13d
 2863 03cf E9CEFCFF 		jmp	.L160
 2863      FF
 2864              	.LVL317:
 2865              		.p2align 4,,10
 2866 03d4 0F1F4000 		.p2align 3
 2867              	.L159:
 279:fltk-1.3.4-1/src/Fl_Slider.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2868              		.loc 9 279 0 discriminator 1
 2869 03d8 C7050000 		movl	$0, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 2869      00000000 
 2869      0000
 2870 03e2 660FEFC9 		pxor	%xmm1, %xmm1
 278:fltk-1.3.4-1/src/Fl_Slider.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 2871              		.loc 9 278 0 discriminator 1
 2872 03e6 4531ED   		xorl	%r13d, %r13d
 2873 03e9 E9B4FCFF 		jmp	.L160
 2873      FF
 2874              	.LVL318:
 2875 03ee 6690     		.p2align 4,,10
 2876              		.p2align 3
 2877              	.L225:
 2878              	.LBE717:
 340:fltk-1.3.4-1/src/Fl_Slider.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2879              		.loc 9 340 0
 2880 03f0 4889DF   		movq	%rbx, %rdi
 2881 03f3 E8000000 		call	_ZN9Fl_Widget6redrawEv
 2881      00
 2882              	.LVL319:
 2883 03f8 E9D8FCFF 		jmp	.L207
 2883      FF
 2884              	.LVL320:
 2885 03fd 0F1F00   		.p2align 4,,10
 2886              		.p2align 3
 2887              	.L224:
 2888              	.LBB718:
 2889              	.LBB703:
 2890              	.LBB697:
 259:fltk-1.3.4-1/src/Fl_Slider.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2891              		.loc 9 259 0 discriminator 1
 2892 0400 4589CC   		movl	%r9d, %r12d
 2893 0403 41C1EC1F 		shrl	$31, %r12d
 2894 0407 4501CC   		addl	%r9d, %r12d
 2895 040a 4589E1   		movl	%r12d, %r9d
 2896 040d 41D1F9   		sarl	%r9d
 2897 0410 458D6101 		leal	1(%r9), %r12d
 2898 0414 E903FEFF 		jmp	.L152
 2898      FF
 2899              	.LVL321:
 2900 0419 0F1F8000 		.p2align 4,,10
 2900      000000
 2901              		.p2align 3
 2902              	.L170:
 2903              	.LBE697:
 2904              	.LBE703:
 2905              	.LBE718:
 2906              	.LBB719:
 301:fltk-1.3.4-1/src/Fl_Slider.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2907              		.loc 9 301 0
 2908 0420 31C0     		xorl	%eax, %eax
 325:fltk-1.3.4-1/src/Fl_Slider.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 2909              		.loc 9 325 0
 2910 0422 F6436C01 		testb	$1, 108(%rbx)
 2911 0426 0F85A9FE 		jne	.L215
 2911      FFFF
 2912 042c E9EBFEFF 		jmp	.L166
 2912      FF
 2913              	.LVL322:
 2914              		.p2align 4,,10
 2915 0431 0F1F8000 		.p2align 3
 2915      000000
 2916              	.L226:
 299:fltk-1.3.4-1/src/Fl_Slider.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2917              		.loc 9 299 0
 2918 0438 3D51FF00 		cmpl	$65361, %eax
 2918      00
 2919 043d 0F85AD00 		jne	.L187
 2919      0000
 2920              	.LVL323:
 301:fltk-1.3.4-1/src/Fl_Slider.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2921              		.loc 9 301 0
 2922 0443 31C0     		xorl	%eax, %eax
 317:fltk-1.3.4-1/src/Fl_Slider.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 2923              		.loc 9 317 0
 2924 0445 F6436C01 		testb	$1, 108(%rbx)
 2925 0449 0F84CDFE 		je	.L166
 2925      FFFF
 2926              	.LVL324:
 2927              	.L212:
 319:fltk-1.3.4-1/src/Fl_Slider.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 2928              		.loc 9 319 0
 2929 044f 48837C24 		cmpq	$0, 16(%rsp)
 2929      1000
 2930 0455 F20F1043 		movsd	120(%rbx), %xmm0
 2930      78
 2931              	.LVL325:
 2932              	.LBB715:
 2933              	.LBB716:
  64:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double softclamp(double);
 2934              		.loc 3 64 0
 2935 045a F20F1183 		movsd	%xmm0, 128(%rbx)
 2935      80000000 
 2936              	.LBE716:
 2937              	.LBE715:
 319:fltk-1.3.4-1/src/Fl_Slider.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 2938              		.loc 9 319 0
 2939 0462 0F84AFFE 		je	.L204
 2939      FFFF
 2940              	.LVL326:
 320:fltk-1.3.4-1/src/Fl_Slider.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 2941              		.loc 9 320 0
 2942 0468 BEFFFFFF 		movl	$-1, %esi
 2942      FF
 2943 046d E97DFEFF 		jmp	.L211
 2943      FF
 2944              	.LVL327:
 2945              		.p2align 4,,10
 2946 0472 660F1F44 		.p2align 3
 2946      0000
 2947              	.L177:
 2948              	.LBE719:
 2949              	.LBB720:
 2950              	.LBB704:
 2951              	.LBB698:
 2952              	.LBB688:
 2953              	.LBB686:
 250:fltk-1.3.4-1/src/Fl_Slider.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 2954              		.loc 9 250 0
 2955 0478 660FEFFF 		pxor	%xmm7, %xmm7
 251:fltk-1.3.4-1/src/Fl_Slider.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 2956              		.loc 9 251 0
 2957 047c 8B542408 		movl	8(%rsp), %edx
 250:fltk-1.3.4-1/src/Fl_Slider.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 2958              		.loc 9 250 0
 2959 0480 F20F2AFD 		cvtsi2sd	%ebp, %xmm7
 251:fltk-1.3.4-1/src/Fl_Slider.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 2960              		.loc 9 251 0
 2961 0484 F20F59CF 		mulsd	%xmm7, %xmm1
 2962              	.LVL328:
 250:fltk-1.3.4-1/src/Fl_Slider.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 2963              		.loc 9 250 0
 2964 0488 F20F113C 		movsd	%xmm7, (%rsp)
 2964      24
 251:fltk-1.3.4-1/src/Fl_Slider.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 2965              		.loc 9 251 0
 2966 048d F20F580D 		addsd	.LC26(%rip), %xmm1
 2966      00000000 
 2967 0495 F20F2CC1 		cvttsd2si	%xmm1, %eax
 2968 0499 29C2     		subl	%eax, %edx
 2969 049b 89D0     		movl	%edx, %eax
 252:fltk-1.3.4-1/src/Fl_Slider.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2970              		.loc 9 252 0
 2971 049d 8D520A   		leal	10(%rdx), %edx
 2972 04a0 83FA14   		cmpl	$20, %edx
 2973 04a3 0F869700 		jbe	.L203
 2973      0000
 252:fltk-1.3.4-1/src/Fl_Slider.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2974              		.loc 9 252 0 is_stmt 0 discriminator 1
 2975 04a9 C7050000 		movl	$0, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 2975      00000000 
 2975      0000
 2976              	.LBE686:
 2977 04b3 31C0     		xorl	%eax, %eax
 2978              	.LBE688:
 248:fltk-1.3.4-1/src/Fl_Slider.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 2979              		.loc 9 248 0 is_stmt 1 discriminator 1
 2980 04b5 4531E4   		xorl	%r12d, %r12d
 2981              	.LBB689:
 2982 04b8 E9A3FBFF 		jmp	.L150
 2982      FF
 2983              	.LVL329:
 2984 04bd 0F1F00   		.p2align 4,,10
 2985              		.p2align 3
 2986              	.L222:
 2987              	.LBE689:
 2988              	.LBE698:
 2989              	.LBE704:
 238:fltk-1.3.4-1/src/Fl_Slider.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 2990              		.loc 9 238 0
 2991 04c0 660FEFDB 		pxor	%xmm3, %xmm3
 2992 04c4 F20F5FD9 		maxsd	%xmm1, %xmm3
 2993 04c8 660F28CB 		movapd	%xmm3, %xmm1
 2994              	.LVL330:
 2995 04cc E9DEFCFF 		jmp	.L143
 2995      FF
 2996              	.LVL331:
 2997              		.p2align 4,,10
 2998 04d1 0F1F8000 		.p2align 3
 2998      000000
 2999              	.L167:
 3000              	.LBE720:
 3001              	.LBB721:
 301:fltk-1.3.4-1/src/Fl_Slider.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3002              		.loc 9 301 0
 3003 04d8 31C0     		xorl	%eax, %eax
 3004 04da F6436C01 		testb	$1, 108(%rbx)
 3005 04de 0F846BFF 		je	.L212
 3005      FFFF
 3006 04e4 E933FEFF 		jmp	.L166
 3006      FF
 3007              	.LVL332:
 3008 04e9 0F1F8000 		.p2align 4,,10
 3008      000000
 3009              		.p2align 3
 3010              	.L187:
 333:fltk-1.3.4-1/src/Fl_Slider.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 3011              		.loc 9 333 0
 3012 04f0 31C0     		xorl	%eax, %eax
 3013 04f2 E925FEFF 		jmp	.L166
 3013      FF
 3014              	.LVL333:
 3015 04f7 660F1F84 		.p2align 4,,10
 3015      00000000 
 3015      00
 3016              		.p2align 3
 3017              	.L154:
 3018              	.LBE721:
 3019              	.LBB722:
 3020              	.LBB705:
 3021              	.LBB699:
 3022              	.LBB695:
 3023              	.LBB693:
 263:fltk-1.3.4-1/src/Fl_Slider.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 3024              		.loc 9 263 0
 3025 0500 660FEFF6 		pxor	%xmm6, %xmm6
 3026 0504 4429E5   		subl	%r12d, %ebp
 3027              	.LVL334:
 265:fltk-1.3.4-1/src/Fl_Slider.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 3028              		.loc 9 265 0
 3029 0507 8B542408 		movl	8(%rsp), %edx
 3030              	.LVL335:
 263:fltk-1.3.4-1/src/Fl_Slider.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 3031              		.loc 9 263 0
 3032 050b F20F2AF5 		cvtsi2sd	%ebp, %xmm6
 264:fltk-1.3.4-1/src/Fl_Slider.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3033              		.loc 9 264 0
 3034 050f F20F59CE 		mulsd	%xmm6, %xmm1
 3035              	.LVL336:
 263:fltk-1.3.4-1/src/Fl_Slider.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 3036              		.loc 9 263 0
 3037 0513 F20F1134 		movsd	%xmm6, (%rsp)
 3037      24
 264:fltk-1.3.4-1/src/Fl_Slider.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3038              		.loc 9 264 0
 3039 0518 F20F58CC 		addsd	%xmm4, %xmm1
 3040 051c F20F2CC1 		cvttsd2si	%xmm1, %eax
 265:fltk-1.3.4-1/src/Fl_Slider.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 3041              		.loc 9 265 0
 3042 0520 29C2     		subl	%eax, %edx
 3043 0522 89D0     		movl	%edx, %eax
 3044 0524 7825     		js	.L227
 266:fltk-1.3.4-1/src/Fl_Slider.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 3045              		.loc 9 266 0
 3046 0526 4439E2   		cmpl	%r12d, %edx
 3047 0529 7E15     		jle	.L203
 266:fltk-1.3.4-1/src/Fl_Slider.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 3048              		.loc 9 266 0 is_stmt 0 discriminator 1
 3049 052b 44892500 		movl	%r12d, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 3049      000000
 3050 0532 4489E0   		movl	%r12d, %eax
 3051 0535 E926FBFF 		jmp	.L150
 3051      FF
 3052              	.LVL337:
 3053 053a 660F1F44 		.p2align 4,,10
 3053      0000
 3054              		.p2align 3
 3055              	.L203:
 3056              	.LBE693:
 3057              	.LBE695:
 3058              	.LBE699:
 3059              	.LBB700:
 3060              	.LBB690:
 3061              	.LBB687:
 251:fltk-1.3.4-1/src/Fl_Slider.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 3062              		.loc 9 251 0 is_stmt 1
 3063 0540 89050000 		movl	%eax, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 3063      0000
 3064 0546 E98AFBFF 		jmp	.L207
 3064      FF
 3065              	.LVL338:
 3066              	.L227:
 3067              	.LBE687:
 3068              	.LBE690:
 3069              	.LBE700:
 3070              	.LBB701:
 3071              	.LBB696:
 3072              	.LBB694:
 265:fltk-1.3.4-1/src/Fl_Slider.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 3073              		.loc 9 265 0 discriminator 1
 3074 054b C7050000 		movl	$0, _ZZN9Fl_Slider6handleEiiiiiE9offcenter(%rip)
 3074      00000000 
 3074      0000
 3075 0555 31C0     		xorl	%eax, %eax
 3076 0557 E904FBFF 		jmp	.L150
 3076      FF
 3077              	.LVL339:
 3078              	.L221:
 3079              	.LBE694:
 3080              	.LBE696:
 3081              	.LBE701:
 3082              	.LBE705:
 3083              	.LBE722:
 3084              	.LBE723:
 3085              	.LBE724:
 3086              		.loc 9 349 0
 3087 055c E8000000 		call	__stack_chk_fail
 3087      00
 3088              	.LVL340:
 3089              		.cfi_endproc
 3090              	.LFE519:
 3092              		.section	.text.unlikely._ZN9Fl_Slider6handleEiiiii
 3093              	.LCOLDE31:
 3094              		.section	.text._ZN9Fl_Slider6handleEiiiii
 3095              	.LHOTE31:
 3096              		.section	.text.unlikely._ZN9Fl_Slider6handleEi,"ax",@progbits
 3097              		.align 2
 3098              	.LCOLDB32:
 3099              		.section	.text._ZN9Fl_Slider6handleEi,"ax",@progbits
 3100              	.LHOTB32:
 3101              		.align 2
 3102              		.p2align 4,,15
 3103              		.globl	_ZN9Fl_Slider6handleEi
 3105              	_ZN9Fl_Slider6handleEi:
 3106              	.LFB520:
 350:fltk-1.3.4-1/src/Fl_Slider.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Slider.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 3107              		.loc 9 351 0
 3108              		.cfi_startproc
 3109              	.LVL341:
 3110 0000 4157     		pushq	%r15
 3111              		.cfi_def_cfa_offset 16
 3112              		.cfi_offset 15, -16
 3113 0002 4156     		pushq	%r14
 3114              		.cfi_def_cfa_offset 24
 3115              		.cfi_offset 14, -24
 3116 0004 4189F7   		movl	%esi, %r15d
 3117 0007 4155     		pushq	%r13
 3118              		.cfi_def_cfa_offset 32
 3119              		.cfi_offset 13, -32
 3120 0009 4154     		pushq	%r12
 3121              		.cfi_def_cfa_offset 40
 3122              		.cfi_offset 12, -40
 3123 000b 55       		pushq	%rbp
 3124              		.cfi_def_cfa_offset 48
 3125              		.cfi_offset 6, -48
 3126 000c 53       		pushq	%rbx
 3127              		.cfi_def_cfa_offset 56
 3128              		.cfi_offset 3, -56
 3129 000d 4889FB   		movq	%rdi, %rbx
 3130 0010 4883EC08 		subq	$8, %rsp
 3131              		.cfi_def_cfa_offset 64
 352:fltk-1.3.4-1/src/Fl_Slider.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3132              		.loc 9 352 0
 3133 0014 83FE01   		cmpl	$1, %esi
 3134 0017 7467     		je	.L233
 3135              	.LVL342:
 3136              	.L231:
 353:fltk-1.3.4-1/src/Fl_Slider.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Slider.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Slider.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Slider.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Slider.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Slider.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Slider.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Slider.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Slider.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3137              		.loc 9 361 0
 3138 0019 0FB67B6E 		movzbl	110(%rbx), %edi
 3139 001d 448B732C 		movl	44(%rbx), %r14d
 3140              	.LVL343:
 3141 0021 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 3141      00
 3142              	.LVL344:
 360:fltk-1.3.4-1/src/Fl_Slider.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3143              		.loc 9 360 0
 3144 0026 0FB67B6E 		movzbl	110(%rbx), %edi
 357:fltk-1.3.4-1/src/Fl_Slider.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 3145              		.loc 9 357 0
 3146 002a 4129C6   		subl	%eax, %r14d
 3147 002d 448B6B28 		movl	40(%rbx), %r13d
 3148              	.LVL345:
 360:fltk-1.3.4-1/src/Fl_Slider.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3149              		.loc 9 360 0
 3150 0031 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 3150      00
 3151              	.LVL346:
 359:fltk-1.3.4-1/src/Fl_Slider.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 3152              		.loc 9 359 0
 3153 0036 0FB67B6E 		movzbl	110(%rbx), %edi
 3154 003a 8B6B24   		movl	36(%rbx), %ebp
 357:fltk-1.3.4-1/src/Fl_Slider.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 3155              		.loc 9 357 0
 3156 003d 4129C5   		subl	%eax, %r13d
 3157              	.LVL347:
 359:fltk-1.3.4-1/src/Fl_Slider.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 3158              		.loc 9 359 0
 3159 0040 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 3159      00
 3160              	.LVL348:
 358:fltk-1.3.4-1/src/Fl_Slider.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3161              		.loc 9 358 0
 3162 0045 0FB67B6E 		movzbl	110(%rbx), %edi
 357:fltk-1.3.4-1/src/Fl_Slider.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 3163              		.loc 9 357 0
 3164 0049 448D2428 		leal	(%rax,%rbp), %r12d
 3165 004d 8B6B20   		movl	32(%rbx), %ebp
 3166              	.LVL349:
 358:fltk-1.3.4-1/src/Fl_Slider.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3167              		.loc 9 358 0
 3168 0050 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 3168      00
 3169              	.LVL350:
 362:fltk-1.3.4-1/src/Fl_Slider.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 3170              		.loc 9 362 0
 3171 0055 4883C408 		addq	$8, %rsp
 3172              		.cfi_remember_state
 3173              		.cfi_def_cfa_offset 56
 361:fltk-1.3.4-1/src/Fl_Slider.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 3174              		.loc 9 361 0
 3175 0059 8D1428   		leal	(%rax,%rbp), %edx
 3176 005c 4589F1   		movl	%r14d, %r9d
 3177 005f 4589E8   		movl	%r13d, %r8d
 3178 0062 4489E1   		movl	%r12d, %ecx
 3179 0065 4489FE   		movl	%r15d, %esi
 3180 0068 4889DF   		movq	%rbx, %rdi
 3181              		.loc 9 362 0
 3182 006b 5B       		popq	%rbx
 3183              		.cfi_def_cfa_offset 48
 3184              	.LVL351:
 3185 006c 5D       		popq	%rbp
 3186              		.cfi_def_cfa_offset 40
 3187 006d 415C     		popq	%r12
 3188              		.cfi_def_cfa_offset 32
 3189 006f 415D     		popq	%r13
 3190              		.cfi_def_cfa_offset 24
 3191 0071 415E     		popq	%r14
 3192              		.cfi_def_cfa_offset 16
 3193 0073 415F     		popq	%r15
 3194              		.cfi_def_cfa_offset 8
 3195              	.LVL352:
 361:fltk-1.3.4-1/src/Fl_Slider.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 3196              		.loc 9 361 0
 3197 0075 E9000000 		jmp	_ZN9Fl_Slider6handleEiiiii
 3197      00
 3198              	.LVL353:
 3199 007a 660F1F44 		.p2align 4,,10
 3199      0000
 3200              		.p2align 3
 3201              	.L233:
 3202              		.cfi_restore_state
 3203              	.LBB725:
 3204              	.LBB726:
 3205              		.loc 11 1195 0
 3206 0080 BF010000 		movl	$1, %edi
 3206      00
 3207 0085 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 3207      00
 3208              	.LVL354:
 3209              	.LBE726:
 3210              	.LBE725:
 352:fltk-1.3.4-1/src/Fl_Slider.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 3211              		.loc 9 352 0
 3212 008a 84C0     		testb	%al, %al
 3213 008c 748B     		je	.L231
 353:fltk-1.3.4-1/src/Fl_Slider.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3214              		.loc 9 353 0
 3215 008e 4889DF   		movq	%rbx, %rdi
 3216 0091 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 3216      00
 3217              	.LVL355:
 354:fltk-1.3.4-1/src/Fl_Slider.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 3218              		.loc 9 354 0
 3219 0096 4889DF   		movq	%rbx, %rdi
 3220 0099 E8000000 		call	_ZN9Fl_Widget6redrawEv
 3220      00
 3221              	.LVL356:
 3222 009e E976FFFF 		jmp	.L231
 3222      FF
 3223              		.cfi_endproc
 3224              	.LFE520:
 3226              		.section	.text.unlikely._ZN9Fl_Slider6handleEi
 3227              	.LCOLDE32:
 3228              		.section	.text._ZN9Fl_Slider6handleEi
 3229              	.LHOTE32:
 3230              		.section	.text.unlikely._ZN14Fl_Fill_SliderC2EiiiiPKc,"ax",@progbits
 3231              		.align 2
 3232              	.LCOLDB33:
 3233              		.section	.text._ZN14Fl_Fill_SliderC2EiiiiPKc,"ax",@progbits
 3234              	.LHOTB33:
 3235              		.align 2
 3236              		.p2align 4,,15
 3237              		.globl	_ZN14Fl_Fill_SliderC2EiiiiPKc
 3239              	_ZN14Fl_Fill_SliderC2EiiiiPKc:
 3240              	.LFB526:
 363:fltk-1.3.4-1/src/Fl_Slider.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Slider.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Slider.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 3241              		.loc 9 365 0
 3242              		.cfi_startproc
 3243              	.LVL357:
 3244 0000 53       		pushq	%rbx
 3245              		.cfi_def_cfa_offset 16
 3246              		.cfi_offset 3, -16
 3247              		.loc 9 365 0
 3248 0001 4889FB   		movq	%rdi, %rbx
 3249              	.LBB727:
 3250              	.LBB728:
 3251              	.LBB729:
  41:fltk-1.3.4-1/src/Fl_Slider.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 3252              		.loc 9 41 0
 3253 0004 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 3253      00
 3254              	.LVL358:
 3255              	.LBB730:
 3256              	.LBB731:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3257              		.loc 1 372 0
 3258 0009 C6436E03 		movb	$3, 110(%rbx)
 3259              	.LVL359:
 3260              	.LBE731:
 3261              	.LBE730:
 3262              	.LBB732:
 3263              	.LBB733:
  32:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 3264              		.loc 9 32 0
 3265 000d C783A400 		movl	$0x00000000, 164(%rbx)
 3265      00000000 
 3265      0000
  33:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 3266              		.loc 9 33 0
 3267 0017 C683A800 		movb	$0, 168(%rbx)
 3267      000000
 3268              	.LVL360:
 3269              	.LBE733:
 3270              	.LBE732:
 3271              	.LBE729:
 3272              	.LBE728:
 366:fltk-1.3.4-1/src/Fl_Slider.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3273              		.loc 9 366 0
 3274 001e 48C70300 		movq	$_ZTV14Fl_Fill_Slider+16, (%rbx)
 3274      000000
 3275              	.LVL361:
 3276              	.LBB734:
 3277              	.LBB735:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3278              		.loc 1 279 0
 3279 0025 C6436C02 		movb	$2, 108(%rbx)
 3280              	.LVL362:
 3281              	.LBE735:
 3282              	.LBE734:
 3283              	.LBE727:
 367:fltk-1.3.4-1/src/Fl_Slider.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Slider.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Slider.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 3284              		.loc 9 369 0
 3285 0029 5B       		popq	%rbx
 3286              		.cfi_def_cfa_offset 8
 3287              	.LVL363:
 3288 002a C3       		ret
 3289              		.cfi_endproc
 3290              	.LFE526:
 3292              		.section	.text.unlikely._ZN14Fl_Fill_SliderC2EiiiiPKc
 3293              	.LCOLDE33:
 3294              		.section	.text._ZN14Fl_Fill_SliderC2EiiiiPKc
 3295              	.LHOTE33:
 3296              		.globl	_ZN14Fl_Fill_SliderC1EiiiiPKc
 3297              		.set	_ZN14Fl_Fill_SliderC1EiiiiPKc,_ZN14Fl_Fill_SliderC2EiiiiPKc
 3298              		.section	.text.unlikely._ZN13Fl_Hor_SliderC2EiiiiPKc,"ax",@progbits
 3299              		.align 2
 3300              	.LCOLDB34:
 3301              		.section	.text._ZN13Fl_Hor_SliderC2EiiiiPKc,"ax",@progbits
 3302              	.LHOTB34:
 3303              		.align 2
 3304              		.p2align 4,,15
 3305              		.globl	_ZN13Fl_Hor_SliderC2EiiiiPKc
 3307              	_ZN13Fl_Hor_SliderC2EiiiiPKc:
 3308              	.LFB529:
 370:fltk-1.3.4-1/src/Fl_Slider.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Slider.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Slider.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 3309              		.loc 9 372 0
 3310              		.cfi_startproc
 3311              	.LVL364:
 3312 0000 53       		pushq	%rbx
 3313              		.cfi_def_cfa_offset 16
 3314              		.cfi_offset 3, -16
 3315              		.loc 9 372 0
 3316 0001 4889FB   		movq	%rdi, %rbx
 3317              	.LBB736:
 3318              	.LBB737:
 3319              	.LBB738:
  41:fltk-1.3.4-1/src/Fl_Slider.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 3320              		.loc 9 41 0
 3321 0004 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 3321      00
 3322              	.LVL365:
 3323              	.LBB739:
 3324              	.LBB740:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3325              		.loc 1 372 0
 3326 0009 C6436E03 		movb	$3, 110(%rbx)
 3327              	.LVL366:
 3328              	.LBE740:
 3329              	.LBE739:
 3330              	.LBB741:
 3331              	.LBB742:
  32:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 3332              		.loc 9 32 0
 3333 000d C783A400 		movl	$0x00000000, 164(%rbx)
 3333      00000000 
 3333      0000
  33:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 3334              		.loc 9 33 0
 3335 0017 C683A800 		movb	$0, 168(%rbx)
 3335      000000
 3336              	.LVL367:
 3337              	.LBE742:
 3338              	.LBE741:
 3339              	.LBE738:
 3340              	.LBE737:
 373:fltk-1.3.4-1/src/Fl_Slider.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3341              		.loc 9 373 0
 3342 001e 48C70300 		movq	$_ZTV13Fl_Hor_Slider+16, (%rbx)
 3342      000000
 3343              	.LVL368:
 3344              	.LBB743:
 3345              	.LBB744:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3346              		.loc 1 279 0
 3347 0025 C6436C01 		movb	$1, 108(%rbx)
 3348              	.LVL369:
 3349              	.LBE744:
 3350              	.LBE743:
 3351              	.LBE736:
 374:fltk-1.3.4-1/src/Fl_Slider.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Slider.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3352              		.loc 9 375 0
 3353 0029 5B       		popq	%rbx
 3354              		.cfi_def_cfa_offset 8
 3355              	.LVL370:
 3356 002a C3       		ret
 3357              		.cfi_endproc
 3358              	.LFE529:
 3360              		.section	.text.unlikely._ZN13Fl_Hor_SliderC2EiiiiPKc
 3361              	.LCOLDE34:
 3362              		.section	.text._ZN13Fl_Hor_SliderC2EiiiiPKc
 3363              	.LHOTE34:
 3364              		.globl	_ZN13Fl_Hor_SliderC1EiiiiPKc
 3365              		.set	_ZN13Fl_Hor_SliderC1EiiiiPKc,_ZN13Fl_Hor_SliderC2EiiiiPKc
 3366              		.section	.text.unlikely._ZN18Fl_Hor_Fill_SliderC2EiiiiPKc,"ax",@progbits
 3367              		.align 2
 3368              	.LCOLDB35:
 3369              		.section	.text._ZN18Fl_Hor_Fill_SliderC2EiiiiPKc,"ax",@progbits
 3370              	.LHOTB35:
 3371              		.align 2
 3372              		.p2align 4,,15
 3373              		.globl	_ZN18Fl_Hor_Fill_SliderC2EiiiiPKc
 3375              	_ZN18Fl_Hor_Fill_SliderC2EiiiiPKc:
 3376              	.LFB532:
 376:fltk-1.3.4-1/src/Fl_Slider.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Slider.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Slider.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 3377              		.loc 9 378 0
 3378              		.cfi_startproc
 3379              	.LVL371:
 3380 0000 53       		pushq	%rbx
 3381              		.cfi_def_cfa_offset 16
 3382              		.cfi_offset 3, -16
 3383              		.loc 9 378 0
 3384 0001 4889FB   		movq	%rdi, %rbx
 3385              	.LBB745:
 3386              	.LBB746:
 3387              	.LBB747:
  41:fltk-1.3.4-1/src/Fl_Slider.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 3388              		.loc 9 41 0
 3389 0004 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 3389      00
 3390              	.LVL372:
 3391              	.LBB748:
 3392              	.LBB749:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3393              		.loc 1 372 0
 3394 0009 C6436E03 		movb	$3, 110(%rbx)
 3395              	.LVL373:
 3396              	.LBE749:
 3397              	.LBE748:
 3398              	.LBB750:
 3399              	.LBB751:
  32:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 3400              		.loc 9 32 0
 3401 000d C783A400 		movl	$0x00000000, 164(%rbx)
 3401      00000000 
 3401      0000
  33:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 3402              		.loc 9 33 0
 3403 0017 C683A800 		movb	$0, 168(%rbx)
 3403      000000
 3404              	.LVL374:
 3405              	.LBE751:
 3406              	.LBE750:
 3407              	.LBE747:
 3408              	.LBE746:
 379:fltk-1.3.4-1/src/Fl_Slider.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3409              		.loc 9 379 0
 3410 001e 48C70300 		movq	$_ZTV18Fl_Hor_Fill_Slider+16, (%rbx)
 3410      000000
 3411              	.LVL375:
 3412              	.LBB752:
 3413              	.LBB753:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3414              		.loc 1 279 0
 3415 0025 C6436C03 		movb	$3, 108(%rbx)
 3416              	.LVL376:
 3417              	.LBE753:
 3418              	.LBE752:
 3419              	.LBE745:
 380:fltk-1.3.4-1/src/Fl_Slider.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Slider.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Slider.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 3420              		.loc 9 382 0
 3421 0029 5B       		popq	%rbx
 3422              		.cfi_def_cfa_offset 8
 3423              	.LVL377:
 3424 002a C3       		ret
 3425              		.cfi_endproc
 3426              	.LFE532:
 3428              		.section	.text.unlikely._ZN18Fl_Hor_Fill_SliderC2EiiiiPKc
 3429              	.LCOLDE35:
 3430              		.section	.text._ZN18Fl_Hor_Fill_SliderC2EiiiiPKc
 3431              	.LHOTE35:
 3432              		.globl	_ZN18Fl_Hor_Fill_SliderC1EiiiiPKc
 3433              		.set	_ZN18Fl_Hor_Fill_SliderC1EiiiiPKc,_ZN18Fl_Hor_Fill_SliderC2EiiiiPKc
 3434              		.section	.text.unlikely._ZN18Fl_Hor_Nice_SliderC2EiiiiPKc,"ax",@progbits
 3435              		.align 2
 3436              	.LCOLDB36:
 3437              		.section	.text._ZN18Fl_Hor_Nice_SliderC2EiiiiPKc,"ax",@progbits
 3438              	.LHOTB36:
 3439              		.align 2
 3440              		.p2align 4,,15
 3441              		.globl	_ZN18Fl_Hor_Nice_SliderC2EiiiiPKc
 3443              	_ZN18Fl_Hor_Nice_SliderC2EiiiiPKc:
 3444              	.LFB535:
 383:fltk-1.3.4-1/src/Fl_Slider.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Slider.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Slider.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 3445              		.loc 9 385 0
 3446              		.cfi_startproc
 3447              	.LVL378:
 3448 0000 53       		pushq	%rbx
 3449              		.cfi_def_cfa_offset 16
 3450              		.cfi_offset 3, -16
 3451              		.loc 9 385 0
 3452 0001 4889FB   		movq	%rdi, %rbx
 3453              	.LBB754:
 3454              	.LBB755:
 3455              	.LBB756:
  41:fltk-1.3.4-1/src/Fl_Slider.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 3456              		.loc 9 41 0
 3457 0004 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 3457      00
 3458              	.LVL379:
 3459              	.LBB757:
 3460              	.LBB758:
  32:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 3461              		.loc 9 32 0
 3462 0009 C783A400 		movl	$0x00000000, 164(%rbx)
 3462      00000000 
 3462      0000
  33:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 3463              		.loc 9 33 0
 3464 0013 C683A800 		movb	$0, 168(%rbx)
 3464      000000
 3465              	.LVL380:
 3466              	.LBE758:
 3467              	.LBE757:
 3468              	.LBE756:
 3469              	.LBE755:
 386:fltk-1.3.4-1/src/Fl_Slider.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 3470              		.loc 9 386 0
 3471 001a 48C70300 		movq	$_ZTV18Fl_Hor_Nice_Slider+16, (%rbx)
 3471      000000
 3472              	.LVL381:
 3473              	.LBB759:
 3474              	.LBB760:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3475              		.loc 1 279 0
 3476 0021 C6436C05 		movb	$5, 108(%rbx)
 3477              	.LVL382:
 3478              	.LBE760:
 3479              	.LBE759:
 3480              	.LBB761:
 3481              	.LBB762:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3482              		.loc 1 372 0
 3483 0025 C6436E01 		movb	$1, 110(%rbx)
 3484              	.LVL383:
 3485              	.LBE762:
 3486              	.LBE761:
 3487              	.LBE754:
 387:fltk-1.3.4-1/src/Fl_Slider.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Slider.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Slider.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Slider.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3488              		.loc 9 390 0
 3489 0029 5B       		popq	%rbx
 3490              		.cfi_def_cfa_offset 8
 3491              	.LVL384:
 3492 002a C3       		ret
 3493              		.cfi_endproc
 3494              	.LFE535:
 3496              		.section	.text.unlikely._ZN18Fl_Hor_Nice_SliderC2EiiiiPKc
 3497              	.LCOLDE36:
 3498              		.section	.text._ZN18Fl_Hor_Nice_SliderC2EiiiiPKc
 3499              	.LHOTE36:
 3500              		.globl	_ZN18Fl_Hor_Nice_SliderC1EiiiiPKc
 3501              		.set	_ZN18Fl_Hor_Nice_SliderC1EiiiiPKc,_ZN18Fl_Hor_Nice_SliderC2EiiiiPKc
 3502              		.section	.text.unlikely._ZN14Fl_Nice_SliderC2EiiiiPKc,"ax",@progbits
 3503              		.align 2
 3504              	.LCOLDB37:
 3505              		.section	.text._ZN14Fl_Nice_SliderC2EiiiiPKc,"ax",@progbits
 3506              	.LHOTB37:
 3507              		.align 2
 3508              		.p2align 4,,15
 3509              		.globl	_ZN14Fl_Nice_SliderC2EiiiiPKc
 3511              	_ZN14Fl_Nice_SliderC2EiiiiPKc:
 3512              	.LFB538:
 391:fltk-1.3.4-1/src/Fl_Slider.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Slider.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Slider.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 3513              		.loc 9 393 0
 3514              		.cfi_startproc
 3515              	.LVL385:
 3516 0000 53       		pushq	%rbx
 3517              		.cfi_def_cfa_offset 16
 3518              		.cfi_offset 3, -16
 3519              		.loc 9 393 0
 3520 0001 4889FB   		movq	%rdi, %rbx
 3521              	.LBB763:
 3522              	.LBB764:
 3523              	.LBB765:
  41:fltk-1.3.4-1/src/Fl_Slider.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 3524              		.loc 9 41 0
 3525 0004 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 3525      00
 3526              	.LVL386:
 3527              	.LBB766:
 3528              	.LBB767:
  32:fltk-1.3.4-1/src/Fl_Slider.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 3529              		.loc 9 32 0
 3530 0009 C783A400 		movl	$0x00000000, 164(%rbx)
 3530      00000000 
 3530      0000
  33:fltk-1.3.4-1/src/Fl_Slider.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 3531              		.loc 9 33 0
 3532 0013 C683A800 		movb	$0, 168(%rbx)
 3532      000000
 3533              	.LVL387:
 3534              	.LBE767:
 3535              	.LBE766:
 3536              	.LBE765:
 3537              	.LBE764:
 394:fltk-1.3.4-1/src/Fl_Slider.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3538              		.loc 9 394 0
 3539 001a 48C70300 		movq	$_ZTV14Fl_Nice_Slider+16, (%rbx)
 3539      000000
 3540              	.LVL388:
 3541              	.LBB768:
 3542              	.LBB769:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3543              		.loc 1 279 0
 3544 0021 C6436C04 		movb	$4, 108(%rbx)
 3545              	.LVL389:
 3546              	.LBE769:
 3547              	.LBE768:
 3548              	.LBB770:
 3549              	.LBB771:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3550              		.loc 1 372 0
 3551 0025 C6436E01 		movb	$1, 110(%rbx)
 3552              	.LVL390:
 3553              	.LBE771:
 3554              	.LBE770:
 3555              	.LBE763:
 395:fltk-1.3.4-1/src/Fl_Slider.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Slider.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Slider.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 3556              		.loc 9 397 0
 3557 0029 5B       		popq	%rbx
 3558              		.cfi_def_cfa_offset 8
 3559              	.LVL391:
 3560 002a C3       		ret
 3561              		.cfi_endproc
 3562              	.LFE538:
 3564              		.section	.text.unlikely._ZN14Fl_Nice_SliderC2EiiiiPKc
 3565              	.LCOLDE37:
 3566              		.section	.text._ZN14Fl_Nice_SliderC2EiiiiPKc
 3567              	.LHOTE37:
 3568              		.globl	_ZN14Fl_Nice_SliderC1EiiiiPKc
 3569              		.set	_ZN14Fl_Nice_SliderC1EiiiiPKc,_ZN14Fl_Nice_SliderC2EiiiiPKc
 3570              		.section	.bss._ZZN9Fl_Slider6handleEiiiiiE9offcenter,"aw",@nobits
 3571              		.align 4
 3574              	_ZZN9Fl_Slider6handleEiiiiiE9offcenter:
 3575 0000 00000000 		.zero	4
 3576              		.weak	_ZTS9Fl_Slider
 3577              		.section	.rodata._ZTS9Fl_Slider,"aG",@progbits,_ZTS9Fl_Slider,comdat
 3578              		.align 8
 3581              	_ZTS9Fl_Slider:
 3582 0000 39466C5F 		.string	"9Fl_Slider"
 3582      536C6964 
 3582      657200
 3583              		.weak	_ZTI9Fl_Slider
 3584              		.section	.rodata._ZTI9Fl_Slider,"aG",@progbits,_ZTI9Fl_Slider,comdat
 3585              		.align 8
 3588              	_ZTI9Fl_Slider:
 3589 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3589      00000000 
 3590 0008 00000000 		.quad	_ZTS9Fl_Slider
 3590      00000000 
 3591 0010 00000000 		.quad	_ZTI11Fl_Valuator
 3591      00000000 
 3592              		.weak	_ZTS14Fl_Fill_Slider
 3593              		.section	.rodata._ZTS14Fl_Fill_Slider,"aG",@progbits,_ZTS14Fl_Fill_Slider,comdat
 3594              		.align 16
 3597              	_ZTS14Fl_Fill_Slider:
 3598 0000 3134466C 		.string	"14Fl_Fill_Slider"
 3598      5F46696C 
 3598      6C5F536C 
 3598      69646572 
 3598      00
 3599              		.weak	_ZTI14Fl_Fill_Slider
 3600              		.section	.rodata._ZTI14Fl_Fill_Slider,"aG",@progbits,_ZTI14Fl_Fill_Slider,comdat
 3601              		.align 8
 3604              	_ZTI14Fl_Fill_Slider:
 3605 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3605      00000000 
 3606 0008 00000000 		.quad	_ZTS14Fl_Fill_Slider
 3606      00000000 
 3607 0010 00000000 		.quad	_ZTI9Fl_Slider
 3607      00000000 
 3608              		.weak	_ZTS13Fl_Hor_Slider
 3609              		.section	.rodata._ZTS13Fl_Hor_Slider,"aG",@progbits,_ZTS13Fl_Hor_Slider,comdat
 3610              		.align 16
 3613              	_ZTS13Fl_Hor_Slider:
 3614 0000 3133466C 		.string	"13Fl_Hor_Slider"
 3614      5F486F72 
 3614      5F536C69 
 3614      64657200 
 3615              		.weak	_ZTI13Fl_Hor_Slider
 3616              		.section	.rodata._ZTI13Fl_Hor_Slider,"aG",@progbits,_ZTI13Fl_Hor_Slider,comdat
 3617              		.align 8
 3620              	_ZTI13Fl_Hor_Slider:
 3621 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3621      00000000 
 3622 0008 00000000 		.quad	_ZTS13Fl_Hor_Slider
 3622      00000000 
 3623 0010 00000000 		.quad	_ZTI9Fl_Slider
 3623      00000000 
 3624              		.weak	_ZTS18Fl_Hor_Fill_Slider
 3625              		.section	.rodata._ZTS18Fl_Hor_Fill_Slider,"aG",@progbits,_ZTS18Fl_Hor_Fill_Slider,comdat
 3626              		.align 16
 3629              	_ZTS18Fl_Hor_Fill_Slider:
 3630 0000 3138466C 		.string	"18Fl_Hor_Fill_Slider"
 3630      5F486F72 
 3630      5F46696C 
 3630      6C5F536C 
 3630      69646572 
 3631              		.weak	_ZTI18Fl_Hor_Fill_Slider
 3632              		.section	.rodata._ZTI18Fl_Hor_Fill_Slider,"aG",@progbits,_ZTI18Fl_Hor_Fill_Slider,comdat
 3633              		.align 8
 3636              	_ZTI18Fl_Hor_Fill_Slider:
 3637 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3637      00000000 
 3638 0008 00000000 		.quad	_ZTS18Fl_Hor_Fill_Slider
 3638      00000000 
 3639 0010 00000000 		.quad	_ZTI9Fl_Slider
 3639      00000000 
 3640              		.weak	_ZTS18Fl_Hor_Nice_Slider
 3641              		.section	.rodata._ZTS18Fl_Hor_Nice_Slider,"aG",@progbits,_ZTS18Fl_Hor_Nice_Slider,comdat
 3642              		.align 16
 3645              	_ZTS18Fl_Hor_Nice_Slider:
 3646 0000 3138466C 		.string	"18Fl_Hor_Nice_Slider"
 3646      5F486F72 
 3646      5F4E6963 
 3646      655F536C 
 3646      69646572 
 3647              		.weak	_ZTI18Fl_Hor_Nice_Slider
 3648              		.section	.rodata._ZTI18Fl_Hor_Nice_Slider,"aG",@progbits,_ZTI18Fl_Hor_Nice_Slider,comdat
 3649              		.align 8
 3652              	_ZTI18Fl_Hor_Nice_Slider:
 3653 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3653      00000000 
 3654 0008 00000000 		.quad	_ZTS18Fl_Hor_Nice_Slider
 3654      00000000 
 3655 0010 00000000 		.quad	_ZTI9Fl_Slider
 3655      00000000 
 3656              		.weak	_ZTS14Fl_Nice_Slider
 3657              		.section	.rodata._ZTS14Fl_Nice_Slider,"aG",@progbits,_ZTS14Fl_Nice_Slider,comdat
 3658              		.align 16
 3661              	_ZTS14Fl_Nice_Slider:
 3662 0000 3134466C 		.string	"14Fl_Nice_Slider"
 3662      5F4E6963 
 3662      655F536C 
 3662      69646572 
 3662      00
 3663              		.weak	_ZTI14Fl_Nice_Slider
 3664              		.section	.rodata._ZTI14Fl_Nice_Slider,"aG",@progbits,_ZTI14Fl_Nice_Slider,comdat
 3665              		.align 8
 3668              	_ZTI14Fl_Nice_Slider:
 3669 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3669      00000000 
 3670 0008 00000000 		.quad	_ZTS14Fl_Nice_Slider
 3670      00000000 
 3671 0010 00000000 		.quad	_ZTI9Fl_Slider
 3671      00000000 
 3672              		.weak	_ZTV14Fl_Fill_Slider
 3673              		.section	.rodata._ZTV14Fl_Fill_Slider,"aG",@progbits,_ZTV14Fl_Fill_Slider,comdat
 3674              		.align 8
 3677              	_ZTV14Fl_Fill_Slider:
 3678 0000 00000000 		.quad	0
 3678      00000000 
 3679 0008 00000000 		.quad	_ZTI14Fl_Fill_Slider
 3679      00000000 
 3680 0010 00000000 		.quad	_ZN14Fl_Fill_SliderD1Ev
 3680      00000000 
 3681 0018 00000000 		.quad	_ZN14Fl_Fill_SliderD0Ev
 3681      00000000 
 3682 0020 00000000 		.quad	_ZN9Fl_Slider4drawEv
 3682      00000000 
 3683 0028 00000000 		.quad	_ZN9Fl_Slider6handleEi
 3683      00000000 
 3684 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 3684      00000000 
 3685 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3685      00000000 
 3686 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3686      00000000 
 3687 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 3687      00000000 
 3688 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3688      00000000 
 3689 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3689      00000000 
 3690 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 3690      00000000 
 3691 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 3691      00000000 
 3692              		.weak	_ZTV13Fl_Hor_Slider
 3693              		.section	.rodata._ZTV13Fl_Hor_Slider,"aG",@progbits,_ZTV13Fl_Hor_Slider,comdat
 3694              		.align 8
 3697              	_ZTV13Fl_Hor_Slider:
 3698 0000 00000000 		.quad	0
 3698      00000000 
 3699 0008 00000000 		.quad	_ZTI13Fl_Hor_Slider
 3699      00000000 
 3700 0010 00000000 		.quad	_ZN13Fl_Hor_SliderD1Ev
 3700      00000000 
 3701 0018 00000000 		.quad	_ZN13Fl_Hor_SliderD0Ev
 3701      00000000 
 3702 0020 00000000 		.quad	_ZN9Fl_Slider4drawEv
 3702      00000000 
 3703 0028 00000000 		.quad	_ZN9Fl_Slider6handleEi
 3703      00000000 
 3704 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 3704      00000000 
 3705 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3705      00000000 
 3706 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3706      00000000 
 3707 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 3707      00000000 
 3708 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3708      00000000 
 3709 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3709      00000000 
 3710 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 3710      00000000 
 3711 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 3711      00000000 
 3712              		.weak	_ZTV18Fl_Hor_Fill_Slider
 3713              		.section	.rodata._ZTV18Fl_Hor_Fill_Slider,"aG",@progbits,_ZTV18Fl_Hor_Fill_Slider,comdat
 3714              		.align 8
 3717              	_ZTV18Fl_Hor_Fill_Slider:
 3718 0000 00000000 		.quad	0
 3718      00000000 
 3719 0008 00000000 		.quad	_ZTI18Fl_Hor_Fill_Slider
 3719      00000000 
 3720 0010 00000000 		.quad	_ZN18Fl_Hor_Fill_SliderD1Ev
 3720      00000000 
 3721 0018 00000000 		.quad	_ZN18Fl_Hor_Fill_SliderD0Ev
 3721      00000000 
 3722 0020 00000000 		.quad	_ZN9Fl_Slider4drawEv
 3722      00000000 
 3723 0028 00000000 		.quad	_ZN9Fl_Slider6handleEi
 3723      00000000 
 3724 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 3724      00000000 
 3725 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3725      00000000 
 3726 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3726      00000000 
 3727 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 3727      00000000 
 3728 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3728      00000000 
 3729 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3729      00000000 
 3730 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 3730      00000000 
 3731 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 3731      00000000 
 3732              		.weak	_ZTV18Fl_Hor_Nice_Slider
 3733              		.section	.rodata._ZTV18Fl_Hor_Nice_Slider,"aG",@progbits,_ZTV18Fl_Hor_Nice_Slider,comdat
 3734              		.align 8
 3737              	_ZTV18Fl_Hor_Nice_Slider:
 3738 0000 00000000 		.quad	0
 3738      00000000 
 3739 0008 00000000 		.quad	_ZTI18Fl_Hor_Nice_Slider
 3739      00000000 
 3740 0010 00000000 		.quad	_ZN18Fl_Hor_Nice_SliderD1Ev
 3740      00000000 
 3741 0018 00000000 		.quad	_ZN18Fl_Hor_Nice_SliderD0Ev
 3741      00000000 
 3742 0020 00000000 		.quad	_ZN9Fl_Slider4drawEv
 3742      00000000 
 3743 0028 00000000 		.quad	_ZN9Fl_Slider6handleEi
 3743      00000000 
 3744 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 3744      00000000 
 3745 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3745      00000000 
 3746 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3746      00000000 
 3747 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 3747      00000000 
 3748 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3748      00000000 
 3749 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3749      00000000 
 3750 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 3750      00000000 
 3751 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 3751      00000000 
 3752              		.weak	_ZTV14Fl_Nice_Slider
 3753              		.section	.rodata._ZTV14Fl_Nice_Slider,"aG",@progbits,_ZTV14Fl_Nice_Slider,comdat
 3754              		.align 8
 3757              	_ZTV14Fl_Nice_Slider:
 3758 0000 00000000 		.quad	0
 3758      00000000 
 3759 0008 00000000 		.quad	_ZTI14Fl_Nice_Slider
 3759      00000000 
 3760 0010 00000000 		.quad	_ZN14Fl_Nice_SliderD1Ev
 3760      00000000 
 3761 0018 00000000 		.quad	_ZN14Fl_Nice_SliderD0Ev
 3761      00000000 
 3762 0020 00000000 		.quad	_ZN9Fl_Slider4drawEv
 3762      00000000 
 3763 0028 00000000 		.quad	_ZN9Fl_Slider6handleEi
 3763      00000000 
 3764 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 3764      00000000 
 3765 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3765      00000000 
 3766 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3766      00000000 
 3767 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 3767      00000000 
 3768 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3768      00000000 
 3769 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3769      00000000 
 3770 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 3770      00000000 
 3771 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 3771      00000000 
 3772              		.weak	_ZTV9Fl_Slider
 3773              		.section	.rodata._ZTV9Fl_Slider,"aG",@progbits,_ZTV9Fl_Slider,comdat
 3774              		.align 8
 3777              	_ZTV9Fl_Slider:
 3778 0000 00000000 		.quad	0
 3778      00000000 
 3779 0008 00000000 		.quad	_ZTI9Fl_Slider
 3779      00000000 
 3780 0010 00000000 		.quad	_ZN9Fl_SliderD1Ev
 3780      00000000 
 3781 0018 00000000 		.quad	_ZN9Fl_SliderD0Ev
 3781      00000000 
 3782 0020 00000000 		.quad	_ZN9Fl_Slider4drawEv
 3782      00000000 
 3783 0028 00000000 		.quad	_ZN9Fl_Slider6handleEi
 3783      00000000 
 3784 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 3784      00000000 
 3785 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3785      00000000 
 3786 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3786      00000000 
 3787 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 3787      00000000 
 3788 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3788      00000000 
 3789 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3789      00000000 
 3790 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 3790      00000000 
 3791 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 3791      00000000 
 3792              		.section	.rodata.cst4,"aM",@progbits,4
 3793              		.align 4
 3794              	.LC19:
 3795 0000 0000803F 		.long	1065353216
 3796              		.section	.rodata.cst8,"aM",@progbits,8
 3797              		.align 8
 3798              	.LC21:
 3799 0000 00000000 		.long	0
 3800 0004 0000F03F 		.long	1072693248
 3801              		.align 8
 3802              	.LC26:
 3803 0008 00000000 		.long	0
 3804 000c 0000E03F 		.long	1071644672
 3805              		.section	.rodata.cst4
 3806              		.align 4
 3807              	.LC28:
 3808 0004 1F852B3F 		.long	1059816735
 3809              		.text
 3810              	.Letext0:
 3811              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 3812              	.Letext_cold0:
 3813              		.file 13 "fltk-1.3.4-1/FL/fl_types.h"
 3814              		.file 14 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3815              		.file 15 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3816              		.file 16 "/usr/include/libio.h"
 3817              		.file 17 "fltk-1.3.4-1/FL/Fl_Image.H"
 3818              		.file 18 "fltk-1.3.4-1/FL/Fl_Device.H"
 3819              		.file 19 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Slider.cxx
     /tmp/cc21lRrs.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/cc21lRrs.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/cc21lRrs.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/cc21lRrs.s:89     .text._ZN9Fl_SliderD2Ev:0000000000000000 _ZN9Fl_SliderD2Ev
     /tmp/cc21lRrs.s:89     .text._ZN9Fl_SliderD2Ev:0000000000000000 _ZN9Fl_SliderD1Ev
     /tmp/cc21lRrs.s:122    .text._ZN9Fl_SliderD0Ev:0000000000000000 _ZN9Fl_SliderD0Ev
     /tmp/cc21lRrs.s:165    .text._ZN14Fl_Fill_SliderD2Ev:0000000000000000 _ZN14Fl_Fill_SliderD2Ev
     /tmp/cc21lRrs.s:165    .text._ZN14Fl_Fill_SliderD2Ev:0000000000000000 _ZN14Fl_Fill_SliderD1Ev
     /tmp/cc21lRrs.s:199    .text._ZN14Fl_Fill_SliderD0Ev:0000000000000000 _ZN14Fl_Fill_SliderD0Ev
     /tmp/cc21lRrs.s:244    .text._ZN13Fl_Hor_SliderD2Ev:0000000000000000 _ZN13Fl_Hor_SliderD2Ev
     /tmp/cc21lRrs.s:244    .text._ZN13Fl_Hor_SliderD2Ev:0000000000000000 _ZN13Fl_Hor_SliderD1Ev
     /tmp/cc21lRrs.s:278    .text._ZN13Fl_Hor_SliderD0Ev:0000000000000000 _ZN13Fl_Hor_SliderD0Ev
     /tmp/cc21lRrs.s:323    .text._ZN18Fl_Hor_Fill_SliderD2Ev:0000000000000000 _ZN18Fl_Hor_Fill_SliderD2Ev
     /tmp/cc21lRrs.s:323    .text._ZN18Fl_Hor_Fill_SliderD2Ev:0000000000000000 _ZN18Fl_Hor_Fill_SliderD1Ev
     /tmp/cc21lRrs.s:357    .text._ZN18Fl_Hor_Fill_SliderD0Ev:0000000000000000 _ZN18Fl_Hor_Fill_SliderD0Ev
     /tmp/cc21lRrs.s:402    .text._ZN18Fl_Hor_Nice_SliderD2Ev:0000000000000000 _ZN18Fl_Hor_Nice_SliderD2Ev
     /tmp/cc21lRrs.s:402    .text._ZN18Fl_Hor_Nice_SliderD2Ev:0000000000000000 _ZN18Fl_Hor_Nice_SliderD1Ev
     /tmp/cc21lRrs.s:436    .text._ZN18Fl_Hor_Nice_SliderD0Ev:0000000000000000 _ZN18Fl_Hor_Nice_SliderD0Ev
     /tmp/cc21lRrs.s:481    .text._ZN14Fl_Nice_SliderD2Ev:0000000000000000 _ZN14Fl_Nice_SliderD2Ev
     /tmp/cc21lRrs.s:481    .text._ZN14Fl_Nice_SliderD2Ev:0000000000000000 _ZN14Fl_Nice_SliderD1Ev
     /tmp/cc21lRrs.s:515    .text._ZN14Fl_Nice_SliderD0Ev:0000000000000000 _ZN14Fl_Nice_SliderD0Ev
     /tmp/cc21lRrs.s:560    .text._ZN9Fl_Slider10_Fl_SliderEv:0000000000000000 _ZN9Fl_Slider10_Fl_SliderEv
     /tmp/cc21lRrs.s:587    .text._ZN9Fl_SliderC2EiiiiPKc:0000000000000000 _ZN9Fl_SliderC2EiiiiPKc
     /tmp/cc21lRrs.s:3777   .rodata._ZTV9Fl_Slider:0000000000000000 _ZTV9Fl_Slider
     /tmp/cc21lRrs.s:587    .text._ZN9Fl_SliderC2EiiiiPKc:0000000000000000 _ZN9Fl_SliderC1EiiiiPKc
     /tmp/cc21lRrs.s:643    .text._ZN9Fl_SliderC2EhiiiiPKc:0000000000000000 _ZN9Fl_SliderC2EhiiiiPKc
     /tmp/cc21lRrs.s:643    .text._ZN9Fl_SliderC2EhiiiiPKc:0000000000000000 _ZN9Fl_SliderC1EhiiiiPKc
     /tmp/cc21lRrs.s:734    .text._ZN9Fl_Slider11slider_sizeEd:0000000000000000 _ZN9Fl_Slider11slider_sizeEd
     /tmp/cc21lRrs.s:784    .text._ZN9Fl_Slider6boundsEdd:0000000000000000 _ZN9Fl_Slider6boundsEdd
     /tmp/cc21lRrs.s:837    .text._ZN9Fl_Slider11scrollvalueEiiii:0000000000000000 _ZN9Fl_Slider11scrollvalueEiiii
     /tmp/cc21lRrs.s:1049   .text._ZN9Fl_Slider7draw_bgEiiii:0000000000000000 _ZN9Fl_Slider7draw_bgEiiii
     /tmp/cc21lRrs.s:1233   .text._ZN9Fl_Slider4drawEiiii:0000000000000000 _ZN9Fl_Slider4drawEiiii
     /tmp/cc21lRrs.s:2283   .text._ZN9Fl_Slider4drawEv:0000000000000000 _ZN9Fl_Slider4drawEv
     /tmp/cc21lRrs.s:2388   .text._ZN9Fl_Slider6handleEiiiii:0000000000000000 _ZN9Fl_Slider6handleEiiiii
     /tmp/cc21lRrs.s:3574   .bss._ZZN9Fl_Slider6handleEiiiiiE9offcenter:0000000000000000 _ZZN9Fl_Slider6handleEiiiiiE9offcenter
     /tmp/cc21lRrs.s:3105   .text._ZN9Fl_Slider6handleEi:0000000000000000 _ZN9Fl_Slider6handleEi
     /tmp/cc21lRrs.s:3239   .text._ZN14Fl_Fill_SliderC2EiiiiPKc:0000000000000000 _ZN14Fl_Fill_SliderC2EiiiiPKc
     /tmp/cc21lRrs.s:3677   .rodata._ZTV14Fl_Fill_Slider:0000000000000000 _ZTV14Fl_Fill_Slider
     /tmp/cc21lRrs.s:3239   .text._ZN14Fl_Fill_SliderC2EiiiiPKc:0000000000000000 _ZN14Fl_Fill_SliderC1EiiiiPKc
     /tmp/cc21lRrs.s:3307   .text._ZN13Fl_Hor_SliderC2EiiiiPKc:0000000000000000 _ZN13Fl_Hor_SliderC2EiiiiPKc
     /tmp/cc21lRrs.s:3697   .rodata._ZTV13Fl_Hor_Slider:0000000000000000 _ZTV13Fl_Hor_Slider
     /tmp/cc21lRrs.s:3307   .text._ZN13Fl_Hor_SliderC2EiiiiPKc:0000000000000000 _ZN13Fl_Hor_SliderC1EiiiiPKc
     /tmp/cc21lRrs.s:3375   .text._ZN18Fl_Hor_Fill_SliderC2EiiiiPKc:0000000000000000 _ZN18Fl_Hor_Fill_SliderC2EiiiiPKc
     /tmp/cc21lRrs.s:3717   .rodata._ZTV18Fl_Hor_Fill_Slider:0000000000000000 _ZTV18Fl_Hor_Fill_Slider
     /tmp/cc21lRrs.s:3375   .text._ZN18Fl_Hor_Fill_SliderC2EiiiiPKc:0000000000000000 _ZN18Fl_Hor_Fill_SliderC1EiiiiPKc
     /tmp/cc21lRrs.s:3443   .text._ZN18Fl_Hor_Nice_SliderC2EiiiiPKc:0000000000000000 _ZN18Fl_Hor_Nice_SliderC2EiiiiPKc
     /tmp/cc21lRrs.s:3737   .rodata._ZTV18Fl_Hor_Nice_Slider:0000000000000000 _ZTV18Fl_Hor_Nice_Slider
     /tmp/cc21lRrs.s:3443   .text._ZN18Fl_Hor_Nice_SliderC2EiiiiPKc:0000000000000000 _ZN18Fl_Hor_Nice_SliderC1EiiiiPKc
     /tmp/cc21lRrs.s:3511   .text._ZN14Fl_Nice_SliderC2EiiiiPKc:0000000000000000 _ZN14Fl_Nice_SliderC2EiiiiPKc
     /tmp/cc21lRrs.s:3757   .rodata._ZTV14Fl_Nice_Slider:0000000000000000 _ZTV14Fl_Nice_Slider
     /tmp/cc21lRrs.s:3511   .text._ZN14Fl_Nice_SliderC2EiiiiPKc:0000000000000000 _ZN14Fl_Nice_SliderC1EiiiiPKc
     /tmp/cc21lRrs.s:3581   .rodata._ZTS9Fl_Slider:0000000000000000 _ZTS9Fl_Slider
     /tmp/cc21lRrs.s:3588   .rodata._ZTI9Fl_Slider:0000000000000000 _ZTI9Fl_Slider
     /tmp/cc21lRrs.s:3597   .rodata._ZTS14Fl_Fill_Slider:0000000000000000 _ZTS14Fl_Fill_Slider
     /tmp/cc21lRrs.s:3604   .rodata._ZTI14Fl_Fill_Slider:0000000000000000 _ZTI14Fl_Fill_Slider
     /tmp/cc21lRrs.s:3613   .rodata._ZTS13Fl_Hor_Slider:0000000000000000 _ZTS13Fl_Hor_Slider
     /tmp/cc21lRrs.s:3620   .rodata._ZTI13Fl_Hor_Slider:0000000000000000 _ZTI13Fl_Hor_Slider
     /tmp/cc21lRrs.s:3629   .rodata._ZTS18Fl_Hor_Fill_Slider:0000000000000000 _ZTS18Fl_Hor_Fill_Slider
     /tmp/cc21lRrs.s:3636   .rodata._ZTI18Fl_Hor_Fill_Slider:0000000000000000 _ZTI18Fl_Hor_Fill_Slider
     /tmp/cc21lRrs.s:3645   .rodata._ZTS18Fl_Hor_Nice_Slider:0000000000000000 _ZTS18Fl_Hor_Nice_Slider
     /tmp/cc21lRrs.s:3652   .rodata._ZTI18Fl_Hor_Nice_Slider:0000000000000000 _ZTI18Fl_Hor_Nice_Slider
     /tmp/cc21lRrs.s:3661   .rodata._ZTS14Fl_Nice_Slider:0000000000000000 _ZTS14Fl_Nice_Slider
     /tmp/cc21lRrs.s:3668   .rodata._ZTI14Fl_Nice_Slider:0000000000000000 _ZTI14Fl_Nice_Slider
     /tmp/cc21lRrs.s:3798   .rodata.cst8:0000000000000000 .LC21
     /tmp/cc21lRrs.s:3794   .rodata.cst4:0000000000000000 .LC19
     /tmp/cc21lRrs.s:3802   .rodata.cst8:0000000000000008 .LC26
     /tmp/cc21lRrs.s:3807   .rodata.cst4:0000000000000004 .LC28
                           .group:0000000000000000 _ZN9Fl_SliderD5Ev
                           .group:0000000000000000 _ZN14Fl_Fill_SliderD5Ev
                           .group:0000000000000000 _ZN13Fl_Hor_SliderD5Ev
                           .group:0000000000000000 _ZN18Fl_Hor_Fill_SliderD5Ev
                           .group:0000000000000000 _ZN18Fl_Hor_Nice_SliderD5Ev
                           .group:0000000000000000 _ZN14Fl_Nice_SliderD5Ev
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
                           .group:0000000000000000 wm4.Fl_Valuator.H.30.3f50825f559b3170aa39fcd3b47ece35
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
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_ZTV11Fl_Valuator
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN11Fl_ValuatorC2EiiiiPKc
_ZN9Fl_Widget6damageEh
_ZN11Fl_Valuator5valueEd
fl_graphics_driver
_ZNK9Fl_Widget8draw_boxEv
_ZNK9Fl_Widget8active_rEv
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_ZN2Fl7scheme_E
_Z16fl_color_averagejjf
_ZNK9Fl_Widget10draw_labelEiiii
_ZN2Fl6focus_E
_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN11Fl_Valuator5roundEd
_ZN11Fl_Valuator5clampEd
_ZN11Fl_Valuator11handle_dragEd
_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
_ZN2Fl12event_insideEiiii
_ZN17Fl_Widget_TrackerD1Ev
_ZN2Fl3e_yE
_ZN2Fl6optionENS_9Fl_OptionE
_ZN11Fl_Valuator14handle_releaseEv
_ZN2Fl8e_keysymE
_ZN11Fl_Valuator9incrementEdi
_ZN2Fl3e_xE
_ZN9Fl_Widget6redrawEv
__stack_chk_fail
_ZN2Fl5focusEP9Fl_Widget
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI11Fl_Valuator
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
_ZN11Fl_Valuator12value_damageEv
_ZN11Fl_Valuator6formatEPc
