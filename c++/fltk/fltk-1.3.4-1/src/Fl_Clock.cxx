   1              		.file	"Fl_Clock.cxx"
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
  80              		.section	.text.unlikely._ZL4rectdddd,"ax",@progbits
  81              	.LCOLDB3:
  82              		.section	.text._ZL4rectdddd,"ax",@progbits
  83              	.LHOTB3:
  84              		.p2align 4,,15
  86              	_ZL4rectdddd:
  87              	.LFB477:
  88              		.file 2 "fltk-1.3.4-1/src/Fl_Clock.cxx"
   1:fltk-1.3.4-1/src/Fl_Clock.cxx ****    1              		.file	"Fl_Clock.cxx"
   2:fltk-1.3.4-1/src/Fl_Clock.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Clock.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Clock.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Clock.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Clock.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Clock.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Clock.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Clock.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Clock.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Clock.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Clock.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Clock.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Clock.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Clock.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Clock.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Clock.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Clock.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Clock.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Clock.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Clock.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Clock.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Clock.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Clock.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Clock.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Clock.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Clock.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Clock.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Clock.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Clock.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Clock.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Clock.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Clock.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Clock.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Clock.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Clock.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Clock.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Clock.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Clock.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Clock.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Clock.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Clock.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Clock.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Clock.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Clock.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Clock.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Clock.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Clock.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Clock.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Clock.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Clock.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Clock.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Clock.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Clock.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Clock.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Clock.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Clock.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Clock.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Clock.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Clock.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Clock.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Clock.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  89              		.loc 2 62 0
  90              		.cfi_startproc
  91              	.LVL3:
  92 0000 4883EC28 		subq	$40, %rsp
  93              		.cfi_def_cfa_offset 48
  94              	.LVL4:
  95              	.LBB184:
  96              	.LBB185:
  97              		.file 3 "fltk-1.3.4-1/FL/fl_draw.H"
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
  98              		.loc 3 374 0
  99 0004 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  99      000000
 100              	.LBE185:
 101              	.LBE184:
  63:fltk-1.3.4-1/src/Fl_Clock.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 102              		.loc 2 63 0
 103 000b F20F58D0 		addsd	%xmm0, %xmm2
 104              	.LVL5:
  64:fltk-1.3.4-1/src/Fl_Clock.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105              		.loc 2 64 0
 106 000f F20F58D9 		addsd	%xmm1, %xmm3
 107              	.LVL6:
  63:fltk-1.3.4-1/src/Fl_Clock.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 108              		.loc 2 63 0
 109 0013 F20F1144 		movsd	%xmm0, 16(%rsp)
 109      2410
 110              		.loc 2 64 0
 111 0019 F20F114C 		movsd	%xmm1, 24(%rsp)
 111      2418
 112              	.LBB188:
 113              	.LBB186:
 114              		.loc 3 374 0
 115 001f 488B07   		movq	(%rdi), %rax
 116              	.LBE186:
 117              	.LBE188:
  63:fltk-1.3.4-1/src/Fl_Clock.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 118              		.loc 2 63 0
 119 0022 F20F1114 		movsd	%xmm2, (%rsp)
 119      24
 120              	.LVL7:
 121              		.loc 2 64 0
 122 0027 F20F115C 		movsd	%xmm3, 8(%rsp)
 122      2408
 123              	.LVL8:
 124              	.LBB189:
 125              	.LBB187:
 126              		.loc 3 374 0
 127 002d FF90D800 		call	*216(%rax)
 127      0000
 128              	.LVL9:
 129              	.LBE187:
 130              	.LBE189:
 131              	.LBB190:
 132              	.LBB191:
 375:fltk-1.3.4-1/FL/fl_draw.H **** /**
 376:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a single vertex to the current path.
 377:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->vertex(x,y); }
 133              		.loc 3 379 0
 134 0033 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 134      000000
 135 003a F20F104C 		movsd	24(%rsp), %xmm1
 135      2418
 136 0040 F20F1044 		movsd	16(%rsp), %xmm0
 136      2410
 137 0046 488B07   		movq	(%rdi), %rax
 138 0049 FF90E000 		call	*224(%rax)
 138      0000
 139              	.LVL10:
 140              	.LBE191:
 141              	.LBE190:
 142              	.LBB192:
 143              	.LBB193:
 144 004f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 144      000000
 145 0056 F20F104C 		movsd	24(%rsp), %xmm1
 145      2418
 146 005c F20F1004 		movsd	(%rsp), %xmm0
 146      24
 147 0061 488B07   		movq	(%rdi), %rax
 148 0064 FF90E000 		call	*224(%rax)
 148      0000
 149              	.LVL11:
 150              	.LBE193:
 151              	.LBE192:
 152              	.LBB194:
 153              	.LBB195:
 154 006a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 154      000000
 155 0071 F20F104C 		movsd	8(%rsp), %xmm1
 155      2408
 156 0077 F20F1004 		movsd	(%rsp), %xmm0
 156      24
 157 007c 488B07   		movq	(%rdi), %rax
 158 007f FF90E000 		call	*224(%rax)
 158      0000
 159              	.LVL12:
 160              	.LBE195:
 161              	.LBE194:
 162              	.LBB196:
 163              	.LBB197:
 164 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 164      000000
 165 008c F20F104C 		movsd	8(%rsp), %xmm1
 165      2408
 166 0092 F20F1044 		movsd	16(%rsp), %xmm0
 166      2410
 167 0098 488B07   		movq	(%rdi), %rax
 168 009b FF90E000 		call	*224(%rax)
 168      0000
 169              	.LVL13:
 170              	.LBE197:
 171              	.LBE196:
 172              	.LBB198:
 173              	.LBB199:
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
 174              		.loc 3 440 0
 175 00a1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 175      000000
 176 00a8 488B07   		movq	(%rdi), %rax
 177 00ab 488B8028 		movq	296(%rax), %rax
 177      010000
 178              	.LBE199:
 179              	.LBE198:
  65:fltk-1.3.4-1/src/Fl_Clock.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Clock.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Clock.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Clock.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Clock.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Clock.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Clock.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 180              		.loc 2 71 0
 181 00b2 4883C428 		addq	$40, %rsp
 182              		.cfi_def_cfa_offset 8
 183              	.LBB201:
 184              	.LBB200:
 185              		.loc 3 440 0
 186 00b6 FFE0     		jmp	*%rax
 187              	.LVL14:
 188              	.LBE200:
 189              	.LBE201:
 190              		.cfi_endproc
 191              	.LFE477:
 193              		.section	.text.unlikely._ZL4rectdddd
 194              	.LCOLDE3:
 195              		.section	.text._ZL4rectdddd
 196              	.LHOTE3:
 197              		.section	.text.unlikely._ZL8drawhanddPA2_Kfjj,"ax",@progbits
 198              	.LCOLDB4:
 199              		.section	.text._ZL8drawhanddPA2_Kfjj,"ax",@progbits
 200              	.LHOTB4:
 201              		.p2align 4,,15
 203              	_ZL8drawhanddPA2_Kfjj:
 204              	.LFB475:
  38:fltk-1.3.4-1/src/Fl_Clock.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 205              		.loc 2 38 0
 206              		.cfi_startproc
 207              	.LVL15:
 208 0000 4155     		pushq	%r13
 209              		.cfi_def_cfa_offset 16
 210              		.cfi_offset 13, -16
 211 0002 4154     		pushq	%r12
 212              		.cfi_def_cfa_offset 24
 213              		.cfi_offset 12, -24
 214 0004 4989FC   		movq	%rdi, %r12
 215 0007 55       		pushq	%rbp
 216              		.cfi_def_cfa_offset 32
 217              		.cfi_offset 6, -32
 218 0008 53       		pushq	%rbx
 219              		.cfi_def_cfa_offset 40
 220              		.cfi_offset 3, -40
 221 0009 4189D5   		movl	%edx, %r13d
 222 000c 89F3     		movl	%esi, %ebx
 223 000e 4883EC18 		subq	$24, %rsp
 224              		.cfi_def_cfa_offset 64
 225              	.LBB202:
 226              	.LBB203:
 326:fltk-1.3.4-1/FL/fl_draw.H **** /**
 227              		.loc 3 326 0
 228 0012 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 228      000000
 229              	.LVL16:
 230              	.LBE203:
 231              	.LBE202:
  38:fltk-1.3.4-1/src/Fl_Clock.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 232              		.loc 2 38 0
 233 0019 F20F1144 		movsd	%xmm0, 8(%rsp)
 233      2408
 234              	.LBB205:
 235              	.LBB204:
 326:fltk-1.3.4-1/FL/fl_draw.H **** /**
 236              		.loc 3 326 0
 237 001f E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 237      00
 238              	.LVL17:
 239              	.LBE204:
 240              	.LBE205:
 241              	.LBB206:
 242              	.LBB207:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 243              		.loc 3 350 0
 244 0024 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 244      000000
 245 002b F20F1044 		movsd	8(%rsp), %xmm0
 245      2408
 246 0031 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 246      00
 247              	.LVL18:
 248              	.LBE207:
 249              	.LBE206:
 250              	.LBB208:
 251              	.LBB209:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 252              		.loc 3 52 0
 253 0036 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 253      000000
 254 003d 89DE     		movl	%ebx, %esi
 255 003f 498D5C24 		leaq	4(%r12), %rbx
 255      04
 256              	.LVL19:
 257 0044 4983C424 		addq	$36, %r12
 258              	.LVL20:
 259              	.LBE209:
 260              	.LBE208:
 261              	.LBB211:
 262              	.LBB212:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 263              		.loc 3 374 0
 264 0048 4889DD   		movq	%rbx, %rbp
 265              	.LBE212:
 266              	.LBE211:
 267              	.LBB214:
 268              	.LBB210:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 269              		.loc 3 52 0
 270 004b 488B07   		movq	(%rdi), %rax
 271 004e FF908800 		call	*136(%rax)
 271      0000
 272              	.LVL21:
 273              	.LBE210:
 274              	.LBE214:
 275              	.LBB215:
 276              	.LBB213:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 277              		.loc 3 374 0
 278 0054 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 278      000000
 279 005b 488B07   		movq	(%rdi), %rax
 280 005e FF90D800 		call	*216(%rax)
 280      0000
 281              	.LVL22:
 282              	.L7:
 283              	.LBE213:
 284              	.LBE215:
 285              	.LBB216:
 286              	.LBB217:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 287              		.loc 3 379 0 discriminator 2
 288 0064 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 288      000000
 289 006b 660FEFC0 		pxor	%xmm0, %xmm0
 290 006f 660FEFC9 		pxor	%xmm1, %xmm1
 291 0073 4883C508 		addq	$8, %rbp
 292              	.LVL23:
 293 0077 488B07   		movq	(%rdi), %rax
 294 007a F30F5A45 		cvtss2sd	-12(%rbp), %xmm0
 294      F4
 295 007f F30F5A4D 		cvtss2sd	-8(%rbp), %xmm1
 295      F8
 296 0084 FF90E000 		call	*224(%rax)
 296      0000
 297              	.LVL24:
 298              	.LBE217:
 299              	.LBE216:
  43:fltk-1.3.4-1/src/Fl_Clock.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 300              		.loc 2 43 0 discriminator 2
 301 008a 4C39E5   		cmpq	%r12, %rbp
 302 008d 75D5     		jne	.L7
 303              	.LBB218:
 304              	.LBB219:
 305              		.loc 3 440 0
 306 008f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 306      000000
 307 0096 488B07   		movq	(%rdi), %rax
 308 0099 FF902801 		call	*296(%rax)
 308      0000
 309              	.LVL25:
 310              	.LBE219:
 311              	.LBE218:
 312              	.LBB220:
 313              	.LBB221:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 314              		.loc 3 52 0
 315 009f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 315      000000
 316 00a6 4489EE   		movl	%r13d, %esi
 317 00a9 488B07   		movq	(%rdi), %rax
 318 00ac FF908800 		call	*136(%rax)
 318      0000
 319              	.LVL26:
 320              	.LBE221:
 321              	.LBE220:
 322              	.LBB222:
 323              	.LBB223:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 324              		.loc 3 370 0
 325 00b2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 325      000000
 326 00b9 488B07   		movq	(%rdi), %rax
 327 00bc FF90D000 		call	*208(%rax)
 327      0000
 328              	.LVL27:
 329              	.L8:
 330              	.LBE223:
 331              	.LBE222:
 332              	.LBB224:
 333              	.LBB225:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 334              		.loc 3 379 0 discriminator 2
 335 00c2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 335      000000
 336 00c9 660FEFC0 		pxor	%xmm0, %xmm0
 337 00cd 660FEFC9 		pxor	%xmm1, %xmm1
 338 00d1 4883C308 		addq	$8, %rbx
 339              	.LVL28:
 340 00d5 488B07   		movq	(%rdi), %rax
 341 00d8 F30F5A43 		cvtss2sd	-12(%rbx), %xmm0
 341      F4
 342 00dd F30F5A4B 		cvtss2sd	-8(%rbx), %xmm1
 342      F8
 343 00e2 FF90E000 		call	*224(%rax)
 343      0000
 344              	.LVL29:
 345              	.LBE225:
 346              	.LBE224:
  47:fltk-1.3.4-1/src/Fl_Clock.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 347              		.loc 2 47 0 discriminator 2
 348 00e8 4939DC   		cmpq	%rbx, %r12
 349 00eb 75D5     		jne	.L8
 350              	.LBB226:
 351              	.LBB227:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 352              		.loc 3 436 0
 353 00ed 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 353      000000
 354 00f4 488B07   		movq	(%rdi), %rax
 355 00f7 FF902001 		call	*288(%rax)
 355      0000
 356              	.LVL30:
 357              	.LBE227:
 358              	.LBE226:
 359              	.LBB228:
 360              	.LBB229:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 361              		.loc 3 330 0
 362 00fd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 362      000000
 363              	.LBE229:
 364              	.LBE228:
  50:fltk-1.3.4-1/src/Fl_Clock.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 365              		.loc 2 50 0
 366 0104 4883C418 		addq	$24, %rsp
 367              		.cfi_def_cfa_offset 40
 368 0108 5B       		popq	%rbx
 369              		.cfi_def_cfa_offset 32
 370 0109 5D       		popq	%rbp
 371              		.cfi_def_cfa_offset 24
 372 010a 415C     		popq	%r12
 373              		.cfi_def_cfa_offset 16
 374              	.LVL31:
 375 010c 415D     		popq	%r13
 376              		.cfi_def_cfa_offset 8
 377              	.LVL32:
 378              	.LBB231:
 379              	.LBB230:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 380              		.loc 3 330 0
 381 010e E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 381      00
 382              	.LVL33:
 383              	.LBE230:
 384              	.LBE231:
 385              		.cfi_endproc
 386              	.LFE475:
 388              		.section	.text.unlikely._ZL8drawhanddPA2_Kfjj
 389              	.LCOLDE4:
 390              		.section	.text._ZL8drawhanddPA2_Kfjj
 391              	.LHOTE4:
 392              		.section	.text.unlikely._ZN15Fl_Clock_OutputD2Ev,"axG",@progbits,_ZN15Fl_Clock_OutputD5Ev,comdat
 393              		.align 2
 394              	.LCOLDB5:
 395              		.section	.text._ZN15Fl_Clock_OutputD2Ev,"axG",@progbits,_ZN15Fl_Clock_OutputD5Ev,comdat
 396              	.LHOTB5:
 397              		.align 2
 398              		.p2align 4,,15
 399              		.weak	_ZN15Fl_Clock_OutputD2Ev
 401              	_ZN15Fl_Clock_OutputD2Ev:
 402              	.LFB487:
 403              		.file 4 "fltk-1.3.4-1/FL/Fl_Clock.H"
   1:fltk-1.3.4-1/FL/Fl_Clock.H **** //
   2:fltk-1.3.4-1/FL/Fl_Clock.H **** // "$Id: Fl_Clock.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Clock.H **** //
   4:fltk-1.3.4-1/FL/Fl_Clock.H **** // Clock header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Clock.H **** //
   6:fltk-1.3.4-1/FL/Fl_Clock.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Clock.H **** //
   8:fltk-1.3.4-1/FL/Fl_Clock.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Clock.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Clock.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Clock.H **** //
  12:fltk-1.3.4-1/FL/Fl_Clock.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Clock.H **** //
  14:fltk-1.3.4-1/FL/Fl_Clock.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Clock.H **** //
  16:fltk-1.3.4-1/FL/Fl_Clock.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Clock.H **** //
  18:fltk-1.3.4-1/FL/Fl_Clock.H **** 
  19:fltk-1.3.4-1/FL/Fl_Clock.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Clock.H ****    Fl_Clock, Fl_Clock_Output widgets . */
  21:fltk-1.3.4-1/FL/Fl_Clock.H **** 
  22:fltk-1.3.4-1/FL/Fl_Clock.H **** #ifndef Fl_Clock_H
  23:fltk-1.3.4-1/FL/Fl_Clock.H **** #define Fl_Clock_H
  24:fltk-1.3.4-1/FL/Fl_Clock.H **** 
  25:fltk-1.3.4-1/FL/Fl_Clock.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Clock.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Clock.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Clock.H **** 
  29:fltk-1.3.4-1/FL/Fl_Clock.H **** // values for type:
  30:fltk-1.3.4-1/FL/Fl_Clock.H **** #define FL_SQUARE_CLOCK		0	/**< type() of Square Clock variant */
  31:fltk-1.3.4-1/FL/Fl_Clock.H **** #define FL_ROUND_CLOCK		1	/**< type() of Round Clock variant */
  32:fltk-1.3.4-1/FL/Fl_Clock.H **** #define FL_ANALOG_CLOCK FL_SQUARE_CLOCK	/**< An analog clock is square */
  33:fltk-1.3.4-1/FL/Fl_Clock.H **** #define FL_DIGITAL_CLOCK FL_SQUARE_CLOCK /**< Not yet implemented */
  34:fltk-1.3.4-1/FL/Fl_Clock.H **** 
  35:fltk-1.3.4-1/FL/Fl_Clock.H **** // fabien: Please keep the horizontal formatting of both images in class desc, 
  36:fltk-1.3.4-1/FL/Fl_Clock.H **** // don't lose vert. space for nothing!
  37:fltk-1.3.4-1/FL/Fl_Clock.H **** 
  38:fltk-1.3.4-1/FL/Fl_Clock.H **** /**
  39:fltk-1.3.4-1/FL/Fl_Clock.H ****   \class Fl_Clock_Output
  40:fltk-1.3.4-1/FL/Fl_Clock.H ****   \brief This widget can be used to display a program-supplied time.
  41:fltk-1.3.4-1/FL/Fl_Clock.H ****   
  42:fltk-1.3.4-1/FL/Fl_Clock.H ****   The time shown on the clock is not updated. To display the current time,
  43:fltk-1.3.4-1/FL/Fl_Clock.H ****   use Fl_Clock instead.
  44:fltk-1.3.4-1/FL/Fl_Clock.H **** 
  45:fltk-1.3.4-1/FL/Fl_Clock.H ****   \htmlonly <BR>  <table align=CENTER border=1 cellpadding=5 >  
  46:fltk-1.3.4-1/FL/Fl_Clock.H ****   <caption align=bottom>type() FL_SQUARE_CLOCK and FL_ROUND_CLOCK </caption> <TR><TD> \endhtmlonly
  47:fltk-1.3.4-1/FL/Fl_Clock.H ****   \image html clock.png  
  48:fltk-1.3.4-1/FL/Fl_Clock.H ****   \htmlonly </TD> <TD> \endhtmlonly
  49:fltk-1.3.4-1/FL/Fl_Clock.H ****   \image html round_clock.png 
  50:fltk-1.3.4-1/FL/Fl_Clock.H ****   \htmlonly </TD> </TR> </table> \endhtmlonly
  51:fltk-1.3.4-1/FL/Fl_Clock.H ****   \image latex clock.png "FL_SQUARE_CLOCK type" width=4cm
  52:fltk-1.3.4-1/FL/Fl_Clock.H ****   \image latex round_clock.png "FL_ROUND_CLOCK type" width=4cm
  53:fltk-1.3.4-1/FL/Fl_Clock.H ****  */
  54:fltk-1.3.4-1/FL/Fl_Clock.H **** class FL_EXPORT Fl_Clock_Output : public Fl_Widget {
 404              		.loc 4 54 0
 405              		.cfi_startproc
 406              	.LVL34:
 407              	.LBB232:
 408              		.loc 4 54 0
 409 0000 48C70700 		movq	$_ZTV15Fl_Clock_Output+16, (%rdi)
 409      000000
 410 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 410      00
 411              	.LVL35:
 412              	.LBE232:
 413              		.cfi_endproc
 414              	.LFE487:
 416              		.section	.text.unlikely._ZN15Fl_Clock_OutputD2Ev,"axG",@progbits,_ZN15Fl_Clock_OutputD5Ev,comdat
 417              	.LCOLDE5:
 418              		.section	.text._ZN15Fl_Clock_OutputD2Ev,"axG",@progbits,_ZN15Fl_Clock_OutputD5Ev,comdat
 419              	.LHOTE5:
 420              		.weak	_ZN15Fl_Clock_OutputD1Ev
 421              		.set	_ZN15Fl_Clock_OutputD1Ev,_ZN15Fl_Clock_OutputD2Ev
 422              		.section	.text.unlikely._ZN15Fl_Clock_OutputD0Ev,"axG",@progbits,_ZN15Fl_Clock_OutputD5Ev,comdat
 423              		.align 2
 424              	.LCOLDB6:
 425              		.section	.text._ZN15Fl_Clock_OutputD0Ev,"axG",@progbits,_ZN15Fl_Clock_OutputD5Ev,comdat
 426              	.LHOTB6:
 427              		.align 2
 428              		.p2align 4,,15
 429              		.weak	_ZN15Fl_Clock_OutputD0Ev
 431              	_ZN15Fl_Clock_OutputD0Ev:
 432              	.LFB489:
 433              		.loc 4 54 0
 434              		.cfi_startproc
 435              	.LVL36:
 436 0000 53       		pushq	%rbx
 437              		.cfi_def_cfa_offset 16
 438              		.cfi_offset 3, -16
 439              		.loc 4 54 0
 440 0001 4889FB   		movq	%rdi, %rbx
 441              	.LBB233:
 442              	.LBB234:
 443 0004 48C70700 		movq	$_ZTV15Fl_Clock_Output+16, (%rdi)
 443      000000
 444 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 444      00
 445              	.LVL37:
 446              	.LBE234:
 447              	.LBE233:
 448 0010 4889DF   		movq	%rbx, %rdi
 449 0013 5B       		popq	%rbx
 450              		.cfi_def_cfa_offset 8
 451              	.LVL38:
 452 0014 E9000000 		jmp	_ZdlPv
 452      00
 453              	.LVL39:
 454              		.cfi_endproc
 455              	.LFE489:
 457              		.section	.text.unlikely._ZN15Fl_Clock_OutputD0Ev,"axG",@progbits,_ZN15Fl_Clock_OutputD5Ev,comdat
 458              	.LCOLDE6:
 459              		.section	.text._ZN15Fl_Clock_OutputD0Ev,"axG",@progbits,_ZN15Fl_Clock_OutputD5Ev,comdat
 460              	.LHOTE6:
 461              		.section	.text.unlikely._ZN8Fl_ClockD2Ev,"ax",@progbits
 462              		.align 2
 463              	.LCOLDB7:
 464              		.section	.text._ZN8Fl_ClockD2Ev,"ax",@progbits
 465              	.LHOTB7:
 466              		.align 2
 467              		.p2align 4,,15
 468              		.globl	_ZN8Fl_ClockD2Ev
 470              	_ZN8Fl_ClockD2Ev:
 471              	.LFB498:
  72:fltk-1.3.4-1/src/Fl_Clock.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Clock.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Clock.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Clock.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Clock.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Clock.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Clock.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Clock.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Clock.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Clock.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Clock.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Clock.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Clock.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Clock.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Clock.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Clock.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Clock.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Clock.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Clock.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Clock.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Clock.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Clock.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Clock.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Clock.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Clock.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Clock.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Clock.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Clock.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Clock.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Clock.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Clock.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Clock.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Clock.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Clock.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Clock.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Clock.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Clock.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Clock.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Clock.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Clock.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Clock.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Clock.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Clock.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Clock.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Clock.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Clock.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Clock.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Clock.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Clock.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Clock.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Clock.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Clock.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Clock.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Clock.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Clock.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Clock.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Clock.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Clock.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Clock.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Clock.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Clock.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Clock.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Clock.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Clock.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Clock.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Clock.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Clock.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Clock.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Clock.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Clock.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Clock.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Clock.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Clock.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Clock.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Clock.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Clock.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Clock.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Clock.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Clock.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Clock.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Clock.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Clock.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Clock.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Clock.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Clock.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Clock.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Clock.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Clock.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Clock.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Clock.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Clock.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Clock.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Clock.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Clock.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Clock.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Clock.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Clock.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Clock.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Clock.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Clock.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Clock.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Clock.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Clock.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Clock.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Clock.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Clock.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Clock.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Clock.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Clock.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Clock.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Clock.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Clock.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Clock.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Clock.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Clock.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Clock.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Clock.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Clock.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Clock.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Clock.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Clock.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Clock.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Clock.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Clock.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Clock.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Clock.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Clock.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Clock.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Clock.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Clock.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Clock.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Clock.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Clock.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Clock.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Clock.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Clock.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Clock.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 472              		.loc 2 208 0
 473              		.cfi_startproc
 474              	.LVL40:
 475 0000 53       		pushq	%rbx
 476              		.cfi_def_cfa_offset 16
 477              		.cfi_offset 3, -16
 478              	.LBB235:
 209:fltk-1.3.4-1/src/Fl_Clock.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 479              		.loc 2 209 0
 480 0001 4889FE   		movq	%rdi, %rsi
 481              	.LBE235:
 208:fltk-1.3.4-1/src/Fl_Clock.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 482              		.loc 2 208 0
 483 0004 4889FB   		movq	%rdi, %rbx
 484              	.LBB240:
 485 0007 48C70700 		movq	$_ZTV8Fl_Clock+16, (%rdi)
 485      000000
 486              		.loc 2 209 0
 487 000e BF000000 		movl	$_ZL4tickPv, %edi
 487      00
 488              	.LVL41:
 489 0013 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 489      00
 490              	.LVL42:
 491              	.LBB236:
 492              	.LBB237:
 493              		.loc 4 54 0
 494 0018 48C70300 		movq	$_ZTV15Fl_Clock_Output+16, (%rbx)
 494      000000
 495 001f 4889DF   		movq	%rbx, %rdi
 496              	.LBE237:
 497              	.LBE236:
 498              	.LBE240:
 210:fltk-1.3.4-1/src/Fl_Clock.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 499              		.loc 2 210 0
 500 0022 5B       		popq	%rbx
 501              		.cfi_def_cfa_offset 8
 502              	.LVL43:
 503              	.LBB241:
 504              	.LBB239:
 505              	.LBB238:
 506              		.loc 4 54 0
 507 0023 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 507      00
 508              	.LVL44:
 509              	.LBE238:
 510              	.LBE239:
 511              	.LBE241:
 512              		.cfi_endproc
 513              	.LFE498:
 515              		.section	.text.unlikely._ZN8Fl_ClockD2Ev
 516              	.LCOLDE7:
 517              		.section	.text._ZN8Fl_ClockD2Ev
 518              	.LHOTE7:
 519              		.globl	_ZN8Fl_ClockD1Ev
 520              		.set	_ZN8Fl_ClockD1Ev,_ZN8Fl_ClockD2Ev
 521              		.section	.text.unlikely._ZN8Fl_ClockD0Ev,"ax",@progbits
 522              		.align 2
 523              	.LCOLDB8:
 524              		.section	.text._ZN8Fl_ClockD0Ev,"ax",@progbits
 525              	.LHOTB8:
 526              		.align 2
 527              		.p2align 4,,15
 528              		.globl	_ZN8Fl_ClockD0Ev
 530              	_ZN8Fl_ClockD0Ev:
 531              	.LFB500:
 208:fltk-1.3.4-1/src/Fl_Clock.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 532              		.loc 2 208 0
 533              		.cfi_startproc
 534              	.LVL45:
 535 0000 53       		pushq	%rbx
 536              		.cfi_def_cfa_offset 16
 537              		.cfi_offset 3, -16
 538              	.LBB242:
 539              	.LBB243:
 209:fltk-1.3.4-1/src/Fl_Clock.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540              		.loc 2 209 0
 541 0001 4889FE   		movq	%rdi, %rsi
 542              	.LBE243:
 543              	.LBE242:
 208:fltk-1.3.4-1/src/Fl_Clock.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 544              		.loc 2 208 0
 545 0004 4889FB   		movq	%rdi, %rbx
 546              	.LBB247:
 547              	.LBB246:
 548 0007 48C70700 		movq	$_ZTV8Fl_Clock+16, (%rdi)
 548      000000
 209:fltk-1.3.4-1/src/Fl_Clock.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 549              		.loc 2 209 0
 550 000e BF000000 		movl	$_ZL4tickPv, %edi
 550      00
 551              	.LVL46:
 552 0013 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 552      00
 553              	.LVL47:
 554              	.LBB244:
 555              	.LBB245:
 556              		.loc 4 54 0
 557 0018 4889DF   		movq	%rbx, %rdi
 558 001b 48C70300 		movq	$_ZTV15Fl_Clock_Output+16, (%rbx)
 558      000000
 559 0022 E8000000 		call	_ZN9Fl_WidgetD2Ev
 559      00
 560              	.LVL48:
 561              	.LBE245:
 562              	.LBE244:
 563              	.LBE246:
 564              	.LBE247:
 565              		.loc 2 210 0
 566 0027 4889DF   		movq	%rbx, %rdi
 567 002a 5B       		popq	%rbx
 568              		.cfi_def_cfa_offset 8
 569              	.LVL49:
 570 002b E9000000 		jmp	_ZdlPv
 570      00
 571              	.LVL50:
 572              		.cfi_endproc
 573              	.LFE500:
 575              		.section	.text.unlikely._ZN8Fl_ClockD0Ev
 576              	.LCOLDE8:
 577              		.section	.text._ZN8Fl_ClockD0Ev
 578              	.LHOTE8:
 579              		.section	.text.unlikely._ZN14Fl_Round_ClockD2Ev,"axG",@progbits,_ZN14Fl_Round_ClockD5Ev,comdat
 580              		.align 2
 581              	.LCOLDB9:
 582              		.section	.text._ZN14Fl_Round_ClockD2Ev,"axG",@progbits,_ZN14Fl_Round_ClockD5Ev,comdat
 583              	.LHOTB9:
 584              		.align 2
 585              		.p2align 4,,15
 586              		.weak	_ZN14Fl_Round_ClockD2Ev
 588              	_ZN14Fl_Round_ClockD2Ev:
 589              	.LFB505:
 590              		.file 5 "fltk-1.3.4-1/FL/Fl_Round_Clock.H"
   1:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //
   2:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** // "$Id: Fl_Round_Clock.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //
   4:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** // Round clock header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //
   6:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //
   8:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //
  12:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //
  14:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //
  16:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** //
  18:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** 
  19:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Round_Clock.H ****    Fl_Round_Clock widget . */
  21:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** 
  22:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** #ifndef Fl_Round_Clock_H
  23:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** #define Fl_Round_Clock_H
  24:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** 
  25:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** #include "Fl_Clock.H"
  26:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** 
  27:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** /** A clock widget of type FL_ROUND_CLOCK. Has no box. */
  28:fltk-1.3.4-1/FL/Fl_Round_Clock.H **** class FL_EXPORT Fl_Round_Clock : public Fl_Clock {
 591              		.loc 5 28 0
 592              		.cfi_startproc
 593              	.LVL51:
 594 0000 53       		pushq	%rbx
 595              		.cfi_def_cfa_offset 16
 596              		.cfi_offset 3, -16
 597              	.LBB253:
 598              	.LBB254:
 599              	.LBB255:
 209:fltk-1.3.4-1/src/Fl_Clock.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 600              		.loc 2 209 0
 601 0001 4889FE   		movq	%rdi, %rsi
 602              	.LBE255:
 603              	.LBE254:
 604              	.LBE253:
 605              		.loc 5 28 0
 606 0004 4889FB   		movq	%rdi, %rbx
 607              	.LBB264:
 608              	.LBB262:
 609              	.LBB260:
 208:fltk-1.3.4-1/src/Fl_Clock.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 610              		.loc 2 208 0
 611 0007 48C70700 		movq	$_ZTV8Fl_Clock+16, (%rdi)
 611      000000
 209:fltk-1.3.4-1/src/Fl_Clock.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 612              		.loc 2 209 0
 613 000e BF000000 		movl	$_ZL4tickPv, %edi
 613      00
 614              	.LVL52:
 615 0013 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 615      00
 616              	.LVL53:
 617              	.LBB256:
 618              	.LBB257:
 619              		.loc 4 54 0
 620 0018 48C70300 		movq	$_ZTV15Fl_Clock_Output+16, (%rbx)
 620      000000
 621 001f 4889DF   		movq	%rbx, %rdi
 622              	.LBE257:
 623              	.LBE256:
 624              	.LBE260:
 625              	.LBE262:
 626              	.LBE264:
 627              		.loc 5 28 0
 628 0022 5B       		popq	%rbx
 629              		.cfi_def_cfa_offset 8
 630              	.LVL54:
 631              	.LBB265:
 632              	.LBB263:
 633              	.LBB261:
 634              	.LBB259:
 635              	.LBB258:
 636              		.loc 4 54 0
 637 0023 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 637      00
 638              	.LVL55:
 639              	.LBE258:
 640              	.LBE259:
 641              	.LBE261:
 642              	.LBE263:
 643              	.LBE265:
 644              		.cfi_endproc
 645              	.LFE505:
 647              		.section	.text.unlikely._ZN14Fl_Round_ClockD2Ev,"axG",@progbits,_ZN14Fl_Round_ClockD5Ev,comdat
 648              	.LCOLDE9:
 649              		.section	.text._ZN14Fl_Round_ClockD2Ev,"axG",@progbits,_ZN14Fl_Round_ClockD5Ev,comdat
 650              	.LHOTE9:
 651              		.weak	_ZN14Fl_Round_ClockD1Ev
 652              		.set	_ZN14Fl_Round_ClockD1Ev,_ZN14Fl_Round_ClockD2Ev
 653              		.section	.text.unlikely._ZN14Fl_Round_ClockD0Ev,"axG",@progbits,_ZN14Fl_Round_ClockD5Ev,comdat
 654              		.align 2
 655              	.LCOLDB10:
 656              		.section	.text._ZN14Fl_Round_ClockD0Ev,"axG",@progbits,_ZN14Fl_Round_ClockD5Ev,comdat
 657              	.LHOTB10:
 658              		.align 2
 659              		.p2align 4,,15
 660              		.weak	_ZN14Fl_Round_ClockD0Ev
 662              	_ZN14Fl_Round_ClockD0Ev:
 663              	.LFB507:
 664              		.loc 5 28 0
 665              		.cfi_startproc
 666              	.LVL56:
 667 0000 53       		pushq	%rbx
 668              		.cfi_def_cfa_offset 16
 669              		.cfi_offset 3, -16
 670              	.LBB273:
 671              	.LBB274:
 672              	.LBB275:
 673              	.LBB276:
 209:fltk-1.3.4-1/src/Fl_Clock.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 674              		.loc 2 209 0
 675 0001 4889FE   		movq	%rdi, %rsi
 676              	.LBE276:
 677              	.LBE275:
 678              	.LBE274:
 679              	.LBE273:
 680              		.loc 5 28 0
 681 0004 4889FB   		movq	%rdi, %rbx
 682              	.LBB282:
 683              	.LBB281:
 684              	.LBB280:
 685              	.LBB279:
 208:fltk-1.3.4-1/src/Fl_Clock.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 686              		.loc 2 208 0
 687 0007 48C70700 		movq	$_ZTV8Fl_Clock+16, (%rdi)
 687      000000
 209:fltk-1.3.4-1/src/Fl_Clock.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 688              		.loc 2 209 0
 689 000e BF000000 		movl	$_ZL4tickPv, %edi
 689      00
 690              	.LVL57:
 691 0013 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 691      00
 692              	.LVL58:
 693              	.LBB277:
 694              	.LBB278:
 695              		.loc 4 54 0
 696 0018 4889DF   		movq	%rbx, %rdi
 697 001b 48C70300 		movq	$_ZTV15Fl_Clock_Output+16, (%rbx)
 697      000000
 698 0022 E8000000 		call	_ZN9Fl_WidgetD2Ev
 698      00
 699              	.LVL59:
 700              	.LBE278:
 701              	.LBE277:
 702              	.LBE279:
 703              	.LBE280:
 704              	.LBE281:
 705              	.LBE282:
 706              		.loc 5 28 0
 707 0027 4889DF   		movq	%rbx, %rdi
 708 002a 5B       		popq	%rbx
 709              		.cfi_def_cfa_offset 8
 710              	.LVL60:
 711 002b E9000000 		jmp	_ZdlPv
 711      00
 712              	.LVL61:
 713              		.cfi_endproc
 714              	.LFE507:
 716              		.section	.text.unlikely._ZN14Fl_Round_ClockD0Ev,"axG",@progbits,_ZN14Fl_Round_ClockD5Ev,comdat
 717              	.LCOLDE10:
 718              		.section	.text._ZN14Fl_Round_ClockD0Ev,"axG",@progbits,_ZN14Fl_Round_ClockD5Ev,comdat
 719              	.LHOTE10:
 720              		.section	.text.unlikely._ZN15Fl_Clock_Output9drawhandsEjj,"ax",@progbits
 721              		.align 2
 722              	.LCOLDB14:
 723              		.section	.text._ZN15Fl_Clock_Output9drawhandsEjj,"ax",@progbits
 724              	.LHOTB14:
 725              		.align 2
 726              		.p2align 4,,15
 727              		.globl	_ZN15Fl_Clock_Output9drawhandsEjj
 729              	_ZN15Fl_Clock_Output9drawhandsEjj:
 730              	.LFB476:
  52:fltk-1.3.4-1/src/Fl_Clock.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 731              		.loc 2 52 0
 732              		.cfi_startproc
 733              	.LVL62:
 734 0000 4154     		pushq	%r12
 735              		.cfi_def_cfa_offset 16
 736              		.cfi_offset 12, -16
 737 0002 55       		pushq	%rbp
 738              		.cfi_def_cfa_offset 24
 739              		.cfi_offset 6, -24
 740 0003 4189D4   		movl	%edx, %r12d
 741 0006 53       		pushq	%rbx
 742              		.cfi_def_cfa_offset 32
 743              		.cfi_offset 3, -32
  52:fltk-1.3.4-1/src/Fl_Clock.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 744              		.loc 2 52 0
 745 0007 89F5     		movl	%esi, %ebp
 746 0009 4889FB   		movq	%rdi, %rbx
  53:fltk-1.3.4-1/src/Fl_Clock.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 747              		.loc 2 53 0
 748 000c E8000000 		call	_ZNK9Fl_Widget8active_rEv
 748      00
 749              	.LVL63:
 750 0011 85C0     		testl	%eax, %eax
 751 0013 7514     		jne	.L25
  54:fltk-1.3.4-1/src/Fl_Clock.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 752              		.loc 2 54 0
 753 0015 89EF     		movl	%ebp, %edi
 754 0017 E8000000 		call	_Z11fl_inactivej
 754      00
 755              	.LVL64:
  55:fltk-1.3.4-1/src/Fl_Clock.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 756              		.loc 2 55 0
 757 001c 4489E7   		movl	%r12d, %edi
  54:fltk-1.3.4-1/src/Fl_Clock.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 758              		.loc 2 54 0
 759 001f 89C5     		movl	%eax, %ebp
 760              	.LVL65:
  55:fltk-1.3.4-1/src/Fl_Clock.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 761              		.loc 2 55 0
 762 0021 E8000000 		call	_Z11fl_inactivej
 762      00
 763              	.LVL66:
 764 0026 4189C4   		movl	%eax, %r12d
 765              	.LVL67:
 766              	.L25:
  57:fltk-1.3.4-1/src/Fl_Clock.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 767              		.loc 2 57 0
 768 0029 660FEFC0 		pxor	%xmm0, %xmm0
 769 002d 4489E2   		movl	%r12d, %edx
 770 0030 89EE     		movl	%ebp, %esi
 771 0032 660FEFC9 		pxor	%xmm1, %xmm1
 772 0036 BF000000 		movl	$_ZL8hourhand, %edi
 772      00
 773 003b F20F2A43 		cvtsi2sd	124(%rbx), %xmm0
 773      7C
 774 0040 F20F5E05 		divsd	.LC11(%rip), %xmm0
 774      00000000 
 775 0048 F20F2A4B 		cvtsi2sd	120(%rbx), %xmm1
 775      78
 776 004d F20F58C1 		addsd	%xmm1, %xmm0
 777 0051 F20F5905 		mulsd	.LC12(%rip), %xmm0
 777      00000000 
 778 0059 F20F5E05 		divsd	.LC13(%rip), %xmm0
 778      00000000 
 779 0061 E8000000 		call	_ZL8drawhanddPA2_Kfjj
 779      00
 780              	.LVL68:
  58:fltk-1.3.4-1/src/Fl_Clock.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 781              		.loc 2 58 0
 782 0066 660FEFC0 		pxor	%xmm0, %xmm0
 783 006a 4489E2   		movl	%r12d, %edx
 784 006d 660FEFC9 		pxor	%xmm1, %xmm1
 785 0071 89EE     		movl	%ebp, %esi
 786 0073 BF000000 		movl	$_ZL7minhand, %edi
 786      00
 787 0078 F20F2A83 		cvtsi2sd	128(%rbx), %xmm0
 787      80000000 
 788 0080 F20F5E05 		divsd	.LC11(%rip), %xmm0
 788      00000000 
 789 0088 F20F2A4B 		cvtsi2sd	124(%rbx), %xmm1
 789      7C
 790 008d F20F58C1 		addsd	%xmm1, %xmm0
 791 0091 F20F5905 		mulsd	.LC12(%rip), %xmm0
 791      00000000 
 792 0099 F20F5E05 		divsd	.LC11(%rip), %xmm0
 792      00000000 
 793 00a1 E8000000 		call	_ZL8drawhanddPA2_Kfjj
 793      00
 794              	.LVL69:
  59:fltk-1.3.4-1/src/Fl_Clock.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 795              		.loc 2 59 0
 796 00a6 660FEFC0 		pxor	%xmm0, %xmm0
 797 00aa 4489E2   		movl	%r12d, %edx
 798 00ad 89EE     		movl	%ebp, %esi
 799 00af BF000000 		movl	$_ZL7sechand, %edi
 799      00
 800 00b4 F20F2A83 		cvtsi2sd	128(%rbx), %xmm0
 800      80000000 
 801 00bc F20F5E05 		divsd	.LC11(%rip), %xmm0
 801      00000000 
  60:fltk-1.3.4-1/src/Fl_Clock.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 802              		.loc 2 60 0
 803 00c4 5B       		popq	%rbx
 804              		.cfi_def_cfa_offset 24
 805              	.LVL70:
 806 00c5 5D       		popq	%rbp
 807              		.cfi_def_cfa_offset 16
 808              	.LVL71:
 809 00c6 415C     		popq	%r12
 810              		.cfi_def_cfa_offset 8
 811              	.LVL72:
  59:fltk-1.3.4-1/src/Fl_Clock.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 812              		.loc 2 59 0
 813 00c8 F20F5905 		mulsd	.LC12(%rip), %xmm0
 813      00000000 
 814 00d0 E9000000 		jmp	_ZL8drawhanddPA2_Kfjj
 814      00
 815              	.LVL73:
 816              		.cfi_endproc
 817              	.LFE476:
 819              		.section	.text.unlikely._ZN15Fl_Clock_Output9drawhandsEjj
 820              	.LCOLDE14:
 821              		.section	.text._ZN15Fl_Clock_Output9drawhandsEjj
 822              	.LHOTE14:
 823              		.section	.text.unlikely._ZN15Fl_Clock_Output4drawEiiii,"ax",@progbits
 824              		.align 2
 825              	.LCOLDB28:
 826              		.section	.text._ZN15Fl_Clock_Output4drawEiiii,"ax",@progbits
 827              	.LHOTB28:
 828              		.align 2
 829              		.p2align 4,,15
 830              		.globl	_ZN15Fl_Clock_Output4drawEiiii
 832              	_ZN15Fl_Clock_Output4drawEiiii:
 833              	.LFB478:
  77:fltk-1.3.4-1/src/Fl_Clock.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 834              		.loc 2 77 0
 835              		.cfi_startproc
 836              	.LVL74:
 837 0000 4157     		pushq	%r15
 838              		.cfi_def_cfa_offset 16
 839              		.cfi_offset 15, -16
 840 0002 4156     		pushq	%r14
 841              		.cfi_def_cfa_offset 24
 842              		.cfi_offset 14, -24
 843 0004 4189D7   		movl	%edx, %r15d
 844 0007 4155     		pushq	%r13
 845              		.cfi_def_cfa_offset 32
 846              		.cfi_offset 13, -32
 847 0009 4154     		pushq	%r12
 848              		.cfi_def_cfa_offset 40
 849              		.cfi_offset 12, -40
 850 000b 4189F6   		movl	%esi, %r14d
 851 000e 55       		pushq	%rbp
 852              		.cfi_def_cfa_offset 48
 853              		.cfi_offset 6, -48
 854 000f 53       		pushq	%rbx
 855              		.cfi_def_cfa_offset 56
 856              		.cfi_offset 3, -56
 857 0010 4989FC   		movq	%rdi, %r12
 858 0013 89CB     		movl	%ecx, %ebx
 859 0015 4489C5   		movl	%r8d, %ebp
 860 0018 BA310000 		movl	$49, %edx
 860      00
 861              	.LVL75:
 862 001d 4883EC18 		subq	$24, %rsp
 863              		.cfi_def_cfa_offset 80
  78:fltk-1.3.4-1/src/Fl_Clock.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 864              		.loc 2 78 0
 865 0021 807F6C01 		cmpb	$1, 108(%rdi)
 866 0025 7403     		je	.L28
 867 0027 8B5764   		movl	100(%rdi), %edx
 868              	.LVL76:
 869              	.L28:
  79:fltk-1.3.4-1/src/Fl_Clock.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 870              		.loc 2 79 0 discriminator 4
 871 002a F30F1005 		movss	.LC15(%rip), %xmm0
 871      00000000 
 872 0032 89D7     		movl	%edx, %edi
 873              	.LVL77:
 874 0034 BE380000 		movl	$56, %esi
 874      00
 875              	.LVL78:
 876 0039 8954240C 		movl	%edx, 12(%rsp)
 877 003d E8000000 		call	_Z16fl_color_averagejjf
 877      00
 878              	.LVL79:
  80:fltk-1.3.4-1/src/Fl_Clock.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 879              		.loc 2 80 0 discriminator 4
 880 0042 4883EC08 		subq	$8, %rsp
 881              		.cfi_def_cfa_offset 88
 882 0046 410FB674 		movzbl	110(%r12), %esi
 882      246E
 883 004c 4189E9   		movl	%ebp, %r9d
 884 004f 8B542414 		movl	20(%rsp), %edx
 885 0053 4189D8   		movl	%ebx, %r8d
 886 0056 4489F9   		movl	%r15d, %ecx
 887 0059 4C89E7   		movq	%r12, %rdi
  79:fltk-1.3.4-1/src/Fl_Clock.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 888              		.loc 2 79 0 discriminator 4
 889 005c 4189C5   		movl	%eax, %r13d
 890              	.LVL80:
  80:fltk-1.3.4-1/src/Fl_Clock.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 891              		.loc 2 80 0 discriminator 4
 892 005f 52       		pushq	%rdx
 893              		.cfi_def_cfa_offset 96
 894 0060 4489F2   		movl	%r14d, %edx
 895 0063 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 895      00
 896              	.LVL81:
 897              	.LBB283:
 898              	.LBB284:
 326:fltk-1.3.4-1/FL/fl_draw.H **** /**
 899              		.loc 3 326 0 discriminator 4
 900 0068 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 900      000000
 901 006f E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 901      00
 902              	.LVL82:
 903              	.LBE284:
 904              	.LBE283:
 905              	.LBB285:
 906              	.LBB286:
 907              	.LBB287:
 908              	.LBB288:
 909              		.file 6 "fltk-1.3.4-1/FL/Fl_Device.H"
   1:fltk-1.3.4-1/FL/Fl_Device.H **** //
   2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Device.H **** //
   4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Surface_Device, Fl_Display_Device
   5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
   6:fltk-1.3.4-1/FL/Fl_Device.H **** //
   7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
   8:fltk-1.3.4-1/FL/Fl_Device.H **** //
   9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights are outlined in
  10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with this file.  If this
  11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver, Fl_Surface_Device, 
  22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all graphics requests */
  39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must copy \p w
  46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w,uchar* buf);
  50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type information.
  68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class returns this string.
  73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it will be removed from future FLTK vers
  78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be checked with code such as:
  80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ... }
  82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
  83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
  85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
  87:fltk-1.3.4-1/FL/Fl_Device.H ****    
  88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the destructors of
  89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
  90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
  92:fltk-1.3.4-1/FL/Fl_Device.H **** };
  93:fltk-1.3.4-1/FL/Fl_Device.H **** 
  94:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_REGION_STACK_SIZE 10
  95:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_MATRIX_STACK_SIZE 32
  96:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver FLTK uses.
  98:fltk-1.3.4-1/FL/Fl_Device.H ****  Typically, FLTK applications do not use directly objects from this class. Rather, they perform
  99:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations (e.g., fl_rectf()) that operate on the current drawing surface (see Fl_Surface_
 100:fltk-1.3.4-1/FL/Fl_Device.H ****  Drawing operations are functionally presented in \ref drawing and as function lists
 101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The \ref fl_graphics_driver global variabl
 102:fltk-1.3.4-1/FL/Fl_Device.H ****  gives at any time the graphics driver used by all drawing operations. Its value changes when
 103:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations are directed to another drawing surface by Fl_Surface_Device::set_current().
 104:fltk-1.3.4-1/FL/Fl_Device.H ****  
 105:fltk-1.3.4-1/FL/Fl_Device.H ****  \p The Fl_Graphics_Driver class is of interest if one wants to perform new kinds of drawing operat
 106:fltk-1.3.4-1/FL/Fl_Device.H ****  An example would be to draw to a PDF file. This would involve creating a new Fl_Graphics_Driver de
 107:fltk-1.3.4-1/FL/Fl_Device.H ****  class. This new class should implement all virtual methods of the Fl_Graphics_Driver class
 108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 110:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Graphics_Driver : public Fl_Device {
 111:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 112:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A 2D coordinate transformation matrix
 113:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 114:fltk-1.3.4-1/FL/Fl_Device.H ****   struct matrix {double a, b, c, d, x, y;};
 115:fltk-1.3.4-1/FL/Fl_Device.H **** private:
 116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 117:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font_; // current font
 118:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size_; // current font size
 119:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color_; // current color
 120:fltk-1.3.4-1/FL/Fl_Device.H ****   int sptr;
 121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 122:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix stack[FL_MATRIX_STACK_SIZE];
 123:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix m;
 124:fltk-1.3.4-1/FL/Fl_Device.H ****   int n, p_size, gap_;
 125:fltk-1.3.4-1/FL/Fl_Device.H ****   XPOINT *p;
 126:fltk-1.3.4-1/FL/Fl_Device.H ****   int what;
 127:fltk-1.3.4-1/FL/Fl_Device.H ****   int fl_clip_state_number;
 128:fltk-1.3.4-1/FL/Fl_Device.H ****   int rstackptr;
 129:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int region_stack_max = FL_REGION_STACK_SIZE - 1;
 130:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region rstack[FL_REGION_STACK_SIZE];
 131:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 133:fltk-1.3.4-1/FL/Fl_Device.H ****   int counts[20];
 134:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 135:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font_Descriptor *font_descriptor_;
 136:fltk-1.3.4-1/FL/Fl_Device.H ****   void transformed_vertex0(COORD_T x, COORD_T y);
 137:fltk-1.3.4-1/FL/Fl_Device.H ****   void fixloop();
 138:fltk-1.3.4-1/FL/Fl_Device.H ****   
 139:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 140:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef FL_DOXYGEN
 141:fltk-1.3.4-1/FL/Fl_Device.H ****   enum {LINE, LOOP, POLYGON, POINT_};
 142:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_no() { return n; }
 143:fltk-1.3.4-1/FL/Fl_Device.H ****   inline XPOINT *vertices() {return p;}
 144:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_kind() {return what;}
 145:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 146:fltk-1.3.4-1/FL/Fl_Device.H **** /*  ** \brief red color for background and/or mixing if device does not support masking or alpha *
 147:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_r_; 
 148:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief green color for background and/or mixing if device does not support masking or alpha *
 149:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_g_; 
 150:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief blue color for background and/or mixing if device does not support masking or alpha *
 151:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_b_; */
 152:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Pixmap;
 153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 154:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_RGB_Image;
 155:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rect(int x, int y, int w, int h);
 156:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rectf(int x, int y, int w, int h);
 157:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line_style(int style, int width, char* dashes);
 158:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1);
 159:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2);
 160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3);
 161:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1);
 162:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2);
 163:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2, int y3);
 164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, int y2);
 166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 167:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 168:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, float x, float y);
 169:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 170:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(int angle, const char *str, int n, int x, int y);
 171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int y);
 172:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_font(Fl_Font face, Fl_Fontsize size);
 173:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(Fl_Color c);
 174:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(uchar r, uchar g, uchar b);
 175:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_point(int x, int y);
 176:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2, int y2);
 177:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 178:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2);
 179:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 180:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_points();
 181:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_line();
 182:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_loop();
 183:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_polygon();
 184:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_vertex(double x, double y);
 185:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3,
 186:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_circle(double x, double y, double r);
 187:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(double x, double y, double r, double start, double end);
 188:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(int x, int y, int w, int h, double a1, double a2);
 189:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pie(int x, int y, int w, int h, double a1, double a2);
 190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 194:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_transformed_vertex(double xf, double yf);
 195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 196:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H);
 197:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_not_clipped(int x, int y, int w, int h);
 198:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_no_clip();
 199:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_clip();
 200:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_complex_polygon();
 201:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_gap();
 202:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_complex_polygon();
 203:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_matrix();
 204:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_matrix();
 205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, double d, double x, double y);
 206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 207:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x);
 208:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_translate(double x, double y);
 209:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rotate(double d);
 210:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_x(double x, double y);
 211:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_y(double x, double y);
 212:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dx(double x, double y);
 213:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dy(double x, double y);
 214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 215:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_clip_region(Fl_Region r);
 216:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_restore_clip();
 217:fltk-1.3.4-1/FL/Fl_Device.H ****   
 218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L);
 219:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D, int L);
 220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D);
 221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H
 222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 223:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx
 224:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix *fl_matrix; /**< Points to the current coordinate transformation matrix */
 225:fltk-1.3.4-1/FL/Fl_Device.H **** 
 226:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The constructor. */
 227:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver();
 228:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rect(int x, int y, int w, int h). */
 229:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rect(int x, int y, int w, int h);
 230:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rectf(int x, int y, int w, int h). */
 231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 232:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line_style(int style, int width, char* dashes). */
 233:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line_style(int style, int width=0, char* dashes=0);
 234:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1). */
 235:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1);
 236:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2). */
 237:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2);
 238:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2, int x3). */
 239:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2, int x3);
 240:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1). */
 241:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1);
 242:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2). */
 243:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2);
 244:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2, int y3). */
 245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 246:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1). */
 247:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1);
 248:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1, int x2, int y2). */
 249:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1, int x2, int y2);
 250:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(const char *str, int n, int x, int y). */
 251:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, int x, int y) {}
 252:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y) { draw(str, n, (int)(x+0.5), (int)(y+
 254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, int x, int y). */
 256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x, int y) {}
 257:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rtl_draw(const char *str, int n, int x, int y). */
 258:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rtl_draw(const char *str, int n, int x, int y) {};
 259:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(Fl_Color c). */
 260:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(Fl_Color c) {color_ = c;}
 261:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 262:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(uchar r, uchar g, uchar b) {}
 263:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_point(int x, int y). */
 264:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void point(int x, int y);
 265:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int x2, int y2). */
 266:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, int y2);
 267:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3). */
 268:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 269:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2). */
 270:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2, int y2);
 271:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3). */
 272:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 273:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_points(). */
 274:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_points();
 275:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_line(). */
 276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 278:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_loop();
 279:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_polygon(). */
 280:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_polygon();
 281:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_vertex(double x, double y). */
 282:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void vertex(double x, double y);
 283:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double 
 284:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3, d
 285:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_circle(double x, double y, double r). */
 286:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void circle(double x, double y, double r);
 287:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(double x, double y, double r, double start, double end). */
 288:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(double x, double y, double r, double start, double end);
 289:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(int x, int y, int w, int h, double a1, double a2). */
 290:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(int x, int y, int w, int h, double a1, double a2);
 291:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pie(int x, int y, int w, int h, double a1, double a2). */
 292:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pie(int x, int y, int w, int h, double a1, double a2);
 293:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_points(). */
 294:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_points();
 295:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_line(). */
 296:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_line();
 297:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_loop(). */
 298:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_loop();
 299:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_polygon(). */
 300:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_polygon();
 301:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_complex_polygon(). */
 302:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_complex_polygon();
 303:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_gap(). */
 304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 305:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_complex_polygon(). */
 306:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_complex_polygon();
 307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf). */
 308:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void transformed_vertex(double xf, double yf);
 309:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_clip(int x, int y, int w, int h). */
 310:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_clip(int x, int y, int w, int h);
 311:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H). */
 312:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H);
 313:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_not_clipped(int x, int y, int w, int h). */
 314:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int not_clipped(int x, int y, int w, int h);
 315:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_no_clip(). */
 316:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_no_clip();
 317:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_clip(). */
 318:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pop_clip();
 319:fltk-1.3.4-1/FL/Fl_Device.H ****     
 320:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_matrix(). */
 321:fltk-1.3.4-1/FL/Fl_Device.H ****   void push_matrix();
 322:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_matrix(). */
 323:fltk-1.3.4-1/FL/Fl_Device.H ****   void pop_matrix();
 324:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_mult_matrix(double a, double b, double c, double d, double x, double y). */
 325:fltk-1.3.4-1/FL/Fl_Device.H ****   void mult_matrix(double a, double b, double c, double d, double x, double y);
 326:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x, double y). */
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x, double y) { mult_matrix(x,0,0,y,0,0); }
 328:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 330:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_translate(double x, double y). */
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void translate(double x,double y) { mult_matrix(1,0,0,1,x,y); }
 910              		.loc 6 331 0 discriminator 4
 911 0074 660FEFED 		pxor	%xmm5, %xmm5
 912 0078 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 912      000000
 913 007f 660FEFC0 		pxor	%xmm0, %xmm0
 914 0083 660FEFE4 		pxor	%xmm4, %xmm4
 915 0087 F20F2AED 		cvtsi2sd	%ebp, %xmm5
 916 008b 660FEFD2 		pxor	%xmm2, %xmm2
 917 008f F2410F2A 		cvtsi2sd	%r15d, %xmm0
 917      C7
 918              	.LBE288:
 919              	.LBE287:
 920              	.LBE286:
 921              	.LBE285:
 922              	.LBB295:
 923              	.LBB296:
 924              	.LBB297:
 925              	.LBB298:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 926              		.loc 6 327 0 discriminator 4
 927 0094 83ED01   		subl	$1, %ebp
 928              	.LVL83:
 929              	.LBE298:
 930              	.LBE297:
 931              	.LBE296:
 932              	.LBE295:
 933              	.LBB305:
 934              	.LBB293:
 935              	.LBB291:
 936              	.LBB289:
 937              		.loc 6 331 0 discriminator 4
 938 0097 F20F2AE3 		cvtsi2sd	%ebx, %xmm4
 939              	.LBE289:
 940              	.LBE291:
 941              	.LBE293:
 942              	.LBE305:
 943              	.LBB306:
 944              	.LBB303:
 945              	.LBB301:
 946              	.LBB299:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 947              		.loc 6 327 0 discriminator 4
 948 009b 83EB01   		subl	$1, %ebx
 949              	.LVL84:
 950              	.LBE299:
 951              	.LBE301:
 952              	.LBE303:
 953              	.LBE306:
 954              	.LBB307:
 955              	.LBB294:
 956              	.LBB292:
 957              	.LBB290:
 958              		.loc 6 331 0 discriminator 4
 959 009e F20F101D 		movsd	.LC17(%rip), %xmm3
 959      00000000 
 960 00a6 660F28CA 		movapd	%xmm2, %xmm1
 961 00aa F20F592D 		mulsd	.LC16(%rip), %xmm5
 961      00000000 
 962 00b2 F20F5925 		mulsd	.LC16(%rip), %xmm4
 962      00000000 
 963 00ba F20F58E8 		addsd	%xmm0, %xmm5
 964 00be 660FEFC0 		pxor	%xmm0, %xmm0
 965 00c2 F2410F2A 		cvtsi2sd	%r14d, %xmm0
 965      C6
 966 00c7 F20F5C2D 		subsd	.LC16(%rip), %xmm5
 966      00000000 
 967 00cf F20F58E0 		addsd	%xmm0, %xmm4
 968 00d3 660F28C3 		movapd	%xmm3, %xmm0
 969 00d7 F20F5C25 		subsd	.LC16(%rip), %xmm4
 969      00000000 
 970 00df E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 970      00
 971              	.LVL85:
 972              	.LBE290:
 973              	.LBE292:
 974              	.LBE294:
 975              	.LBE307:
 976              	.LBB308:
 977              	.LBB304:
 978              	.LBB302:
 979              	.LBB300:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 980              		.loc 6 327 0 discriminator 4
 981 00e4 660FEFDB 		pxor	%xmm3, %xmm3
 982 00e8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 982      000000
 983 00ef 660FEFC0 		pxor	%xmm0, %xmm0
 984 00f3 F20F100D 		movsd	.LC19(%rip), %xmm1
 984      00000000 
 985 00fb F20F2ADD 		cvtsi2sd	%ebp, %xmm3
 986 00ff 660FEFED 		pxor	%xmm5, %xmm5
 987 0103 F20F2AC3 		cvtsi2sd	%ebx, %xmm0
 988 0107 660F28E5 		movapd	%xmm5, %xmm4
 989 010b 660F28D5 		movapd	%xmm5, %xmm2
 990 010f F20F5ED9 		divsd	%xmm1, %xmm3
 991 0113 F20F5EC1 		divsd	%xmm1, %xmm0
 992 0117 660F28CD 		movapd	%xmm5, %xmm1
 993 011b E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 993      00
 994              	.LVL86:
 995              	.LBE300:
 996              	.LBE302:
 997              	.LBE304:
 998              	.LBE308:
  84:fltk-1.3.4-1/src/Fl_Clock.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 999              		.loc 2 84 0 discriminator 4
 1000 0120 41807C24 		cmpb	$1, 108(%r12)
 1000      6C01
 1001 0126 58       		popq	%rax
 1002              		.cfi_def_cfa_offset 88
 1003 0127 5A       		popq	%rdx
 1004              		.cfi_def_cfa_offset 80
 1005 0128 0F846201 		je	.L44
 1005      0000
 1006              	.L29:
 1007              	.LBB309:
 1008              	.LBB310:
 326:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1009              		.loc 3 326 0
 1010 012e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1010      000000
 1011 0135 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 1011      00
 1012              	.LVL87:
 1013              	.LBE310:
 1014              	.LBE309:
 1015              	.LBB311:
 1016              	.LBB312:
 1017              	.LBB313:
 1018              	.LBB314:
 1019              		.loc 6 331 0
 1020 013a 660FEFD2 		pxor	%xmm2, %xmm2
 1021 013e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1021      000000
 1022 0145 F20F102D 		movsd	.LC21(%rip), %xmm5
 1022      00000000 
 1023 014d F20F101D 		movsd	.LC17(%rip), %xmm3
 1023      00000000 
 1024 0155 660F28E5 		movapd	%xmm5, %xmm4
 1025 0159 660F28CA 		movapd	%xmm2, %xmm1
 1026 015d 660F28C3 		movapd	%xmm3, %xmm0
 1027 0161 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 1027      00
 1028              	.LVL88:
 1029              	.LBE314:
 1030              	.LBE313:
 1031              	.LBE312:
 1032              	.LBE311:
  93:fltk-1.3.4-1/src/Fl_Clock.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1033              		.loc 2 93 0
 1034 0166 4489EE   		movl	%r13d, %esi
 1035 0169 4489EA   		movl	%r13d, %edx
 1036 016c 4C89E7   		movq	%r12, %rdi
 1037 016f E8000000 		call	_ZN15Fl_Clock_Output9drawhandsEjj
 1037      00
 1038              	.LVL89:
 1039              	.LBB315:
 1040              	.LBB316:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1041              		.loc 3 330 0
 1042 0174 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1042      000000
 1043 017b E8000000 		call	_ZN18Fl_Graphics_Driver10pop_matrixEv
 1043      00
 1044              	.LVL90:
 1045              	.LBE316:
 1046              	.LBE315:
 1047              	.LBB317:
 1048              	.LBB318:
 326:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1049              		.loc 3 326 0
 1050 0180 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1050      000000
 1051 0187 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 1051      00
 1052              	.LVL91:
 1053              	.LBE318:
 1054              	.LBE317:
  97:fltk-1.3.4-1/src/Fl_Clock.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 1055              		.loc 2 97 0
 1056 018c 4C89E7   		movq	%r12, %rdi
 1057 018f E8000000 		call	_ZNK9Fl_Widget8active_rEv
 1057      00
 1058              	.LVL92:
 1059 0194 31F6     		xorl	%esi, %esi
 1060 0196 85C0     		testl	%eax, %eax
 1061 0198 0F84DA00 		je	.L45
 1061      0000
 1062              	.L33:
 1063              	.LVL93:
 1064              	.LBB319:
 1065              	.LBB320:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1066              		.loc 3 52 0 discriminator 4
 1067 019e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1067      000000
 1068 01a5 BD010000 		movl	$1, %ebp
 1068      00
 1069              	.LVL94:
 1070 01aa 31DB     		xorl	%ebx, %ebx
 1071              	.LVL95:
 1072 01ac 488B07   		movq	(%rdi), %rax
 1073 01af FF908800 		call	*136(%rax)
 1073      0000
 1074              	.LVL96:
 1075 01b5 EB45     		jmp	.L34
 1076              	.LVL97:
 1077 01b7 660F1F84 		.p2align 4,,10
 1077      00000000 
 1077      00
 1078              		.p2align 3
 1079              	.L37:
 1080              	.LBE320:
 1081              	.LBE319:
 1082              	.LBB321:
 101:fltk-1.3.4-1/src/Fl_Clock.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 1083              		.loc 2 101 0
 1084 01c0 F20F1015 		movsd	.LC16(%rip), %xmm2
 1084      00000000 
 1085 01c8 F20F100D 		movsd	.LC26(%rip), %xmm1
 1085      00000000 
 1086 01d0 F20F1005 		movsd	.LC27(%rip), %xmm0
 1086      00000000 
 1087 01d8 E8000000 		call	_ZL4rectdddd
 1087      00
 1088              	.LVL98:
 1089              	.L38:
 1090              	.LBB322:
 1091              	.LBB323:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1092              		.loc 3 350 0 discriminator 2
 1093 01dd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1093      000000
 1094 01e4 F20F1005 		movsd	.LC25(%rip), %xmm0
 1094      00000000 
 1095 01ec E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 1095      00
 1096              	.LVL99:
 1097              	.LBE323:
 1098              	.LBE322:
  98:fltk-1.3.4-1/src/Fl_Clock.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1099              		.loc 2 98 0 discriminator 2
 1100 01f1 83FD0C   		cmpl	$12, %ebp
 1101 01f4 744A     		je	.L46
 1102              	.LVL100:
 1103              	.L36:
 1104 01f6 83C301   		addl	$1, %ebx
 1105 01f9 83C501   		addl	$1, %ebp
 1106              	.L34:
 1107              	.LVL101:
  99:fltk-1.3.4-1/src/Fl_Clock.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 1108              		.loc 2 99 0
 1109 01fc 83FB06   		cmpl	$6, %ebx
 1110 01ff 0F846F01 		je	.L47
 1110      0000
 100:fltk-1.3.4-1/src/Fl_Clock.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 1111              		.loc 2 100 0
 1112 0205 83FB09   		cmpl	$9, %ebx
 1113 0208 F20F101D 		movsd	.LC17(%rip), %xmm3
 1113      00000000 
 1114 0210 77AE     		ja	.L37
 1115 0212 B8090200 		movl	$521, %eax
 1115      00
 1116 0217 480FA3D8 		btq	%rbx, %rax
 1117 021b 73A3     		jnc	.L37
 100:fltk-1.3.4-1/src/Fl_Clock.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 1118              		.loc 2 100 0 is_stmt 0 discriminator 3
 1119 021d 660F28D3 		movapd	%xmm3, %xmm2
 1120 0221 F20F100D 		movsd	.LC26(%rip), %xmm1
 1120      00000000 
 1121 0229 F20F1005 		movsd	.LC24(%rip), %xmm0
 1121      00000000 
 1122 0231 E8000000 		call	_ZL4rectdddd
 1122      00
 1123              	.LVL102:
 1124 0236 EBA5     		jmp	.L38
 1125              	.LVL103:
 1126 0238 0F1F8400 		.p2align 4,,10
 1126      00000000 
 1127              		.p2align 3
 1128              	.L46:
 1129              	.LBE321:
 1130              	.LBB326:
 1131              	.LBB327:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1132              		.loc 3 330 0 is_stmt 1
 1133 0240 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1133      000000
 1134 0247 E8000000 		call	_ZN18Fl_Graphics_Driver10pop_matrixEv
 1134      00
 1135              	.LVL104:
 1136              	.LBE327:
 1137              	.LBE326:
 106:fltk-1.3.4-1/src/Fl_Clock.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1138              		.loc 2 106 0
 1139 024c 418B7424 		movl	104(%r12), %esi
 1139      68
 1140 0251 4C89E7   		movq	%r12, %rdi
 1141 0254 31D2     		xorl	%edx, %edx
 1142 0256 E8000000 		call	_ZN15Fl_Clock_Output9drawhandsEjj
 1142      00
 1143              	.LVL105:
 1144              	.LBB328:
 1145              	.LBB329:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1146              		.loc 3 330 0
 1147 025b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1147      000000
 1148              	.LBE329:
 1149              	.LBE328:
 108:fltk-1.3.4-1/src/Fl_Clock.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 1150              		.loc 2 108 0
 1151 0262 4883C418 		addq	$24, %rsp
 1152              		.cfi_remember_state
 1153              		.cfi_def_cfa_offset 56
 1154 0266 5B       		popq	%rbx
 1155              		.cfi_def_cfa_offset 48
 1156 0267 5D       		popq	%rbp
 1157              		.cfi_def_cfa_offset 40
 1158              	.LVL106:
 1159 0268 415C     		popq	%r12
 1160              		.cfi_def_cfa_offset 32
 1161              	.LVL107:
 1162 026a 415D     		popq	%r13
 1163              		.cfi_def_cfa_offset 24
 1164              	.LVL108:
 1165 026c 415E     		popq	%r14
 1166              		.cfi_def_cfa_offset 16
 1167              	.LVL109:
 1168 026e 415F     		popq	%r15
 1169              		.cfi_def_cfa_offset 8
 1170              	.LVL110:
 1171              	.LBB331:
 1172              	.LBB330:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1173              		.loc 3 330 0
 1174 0270 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 1174      00
 1175              	.LVL111:
 1176              		.p2align 4,,10
 1177 0275 0F1F00   		.p2align 3
 1178              	.L45:
 1179              		.cfi_restore_state
 1180              	.LBE330:
 1181              	.LBE331:
  97:fltk-1.3.4-1/src/Fl_Clock.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 1182              		.loc 2 97 0 discriminator 1
 1183 0278 31FF     		xorl	%edi, %edi
 1184 027a E8000000 		call	_Z11fl_inactivej
 1184      00
 1185              	.LVL112:
 1186 027f 89C6     		movl	%eax, %esi
 1187 0281 E918FFFF 		jmp	.L33
 1187      FF
 1188 0286 662E0F1F 		.p2align 4,,10
 1188      84000000 
 1188      0000
 1189              		.p2align 3
 1190              	.L44:
  85:fltk-1.3.4-1/src/Fl_Clock.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 1191              		.loc 2 85 0
 1192 0290 4C89E7   		movq	%r12, %rdi
 1193 0293 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 1193      00
 1194              	.LVL113:
 1195 0298 85C0     		testl	%eax, %eax
 1196 029a 0F84B800 		je	.L30
 1196      0000
 1197 02a0 418B7424 		movl	100(%r12), %esi
 1197      64
 1198              	.LVL114:
 1199              	.L31:
 1200              	.LBB332:
 1201              	.LBB333:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1202              		.loc 3 52 0 discriminator 4
 1203 02a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1203      000000
 1204 02ac 488B17   		movq	(%rdi), %rdx
 1205 02af FF928800 		call	*136(%rdx)
 1205      0000
 1206              	.LVL115:
 1207              	.LBE333:
 1208              	.LBE332:
 1209              	.LBB334:
 1210              	.LBB335:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1211              		.loc 3 374 0 discriminator 4
 1212 02b5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1212      000000
 1213 02bc 488B07   		movq	(%rdi), %rax
 1214 02bf FF90D800 		call	*216(%rax)
 1214      0000
 1215              	.LVL116:
 1216              	.LBE335:
 1217              	.LBE334:
 1218              	.LBB336:
 1219              	.LBB337:
 424:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1220              		.loc 3 424 0 discriminator 4
 1221 02c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1221      000000
 1222 02cc 660FEFC9 		pxor	%xmm1, %xmm1
 1223 02d0 F20F1015 		movsd	.LC20(%rip), %xmm2
 1223      00000000 
 1224 02d8 488B07   		movq	(%rdi), %rax
 1225 02db 660F28C1 		movapd	%xmm1, %xmm0
 1226 02df FF90F000 		call	*240(%rax)
 1226      0000
 1227              	.LVL117:
 1228              	.LBE337:
 1229              	.LBE336:
 1230              	.LBB338:
 1231              	.LBB339:
 1232              		.loc 3 440 0 discriminator 4
 1233 02e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1233      000000
 1234 02ec 488B07   		movq	(%rdi), %rax
 1235 02ef FF902801 		call	*296(%rax)
 1235      0000
 1236              	.LVL118:
 1237              	.LBE339:
 1238              	.LBE338:
  87:fltk-1.3.4-1/src/Fl_Clock.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 1239              		.loc 2 87 0 discriminator 4
 1240 02f5 4C89E7   		movq	%r12, %rdi
 1241 02f8 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 1241      00
 1242              	.LVL119:
 1243 02fd 31F6     		xorl	%esi, %esi
 1244 02ff 85C0     		testl	%eax, %eax
 1245 0301 7466     		je	.L48
 1246              	.L32:
 1247              	.LVL120:
 1248              	.LBB340:
 1249              	.LBB341:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1250              		.loc 3 52 0 discriminator 4
 1251 0303 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1251      000000
 1252 030a 488B07   		movq	(%rdi), %rax
 1253 030d FF908800 		call	*136(%rax)
 1253      0000
 1254              	.LVL121:
 1255              	.LBE341:
 1256              	.LBE340:
 1257              	.LBB342:
 1258              	.LBB343:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1259              		.loc 3 370 0 discriminator 4
 1260 0313 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1260      000000
 1261 031a 488B07   		movq	(%rdi), %rax
 1262 031d FF90D000 		call	*208(%rax)
 1262      0000
 1263              	.LVL122:
 1264              	.LBE343:
 1265              	.LBE342:
 1266              	.LBB344:
 1267              	.LBB345:
 424:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1268              		.loc 3 424 0 discriminator 4
 1269 0323 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1269      000000
 1270 032a 660FEFC9 		pxor	%xmm1, %xmm1
 1271 032e F20F1015 		movsd	.LC20(%rip), %xmm2
 1271      00000000 
 1272 0336 488B07   		movq	(%rdi), %rax
 1273 0339 660F28C1 		movapd	%xmm1, %xmm0
 1274 033d FF90F000 		call	*240(%rax)
 1274      0000
 1275              	.LVL123:
 1276              	.LBE345:
 1277              	.LBE344:
 1278              	.LBB346:
 1279              	.LBB347:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1280              		.loc 3 436 0 discriminator 4
 1281 0343 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1281      000000
 1282 034a 488B07   		movq	(%rdi), %rax
 1283 034d FF902001 		call	*288(%rax)
 1283      0000
 1284              	.LVL124:
 1285 0353 E9D6FDFF 		jmp	.L29
 1285      FF
 1286              	.L30:
 1287              	.LVL125:
 1288              	.LBE347:
 1289              	.LBE346:
  85:fltk-1.3.4-1/src/Fl_Clock.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 1290              		.loc 2 85 0 discriminator 2
 1291 0358 418B7C24 		movl	100(%r12), %edi
 1291      64
 1292 035d E8000000 		call	_Z11fl_inactivej
 1292      00
 1293              	.LVL126:
 1294 0362 89C6     		movl	%eax, %esi
 1295 0364 E93CFFFF 		jmp	.L31
 1295      FF
 1296              	.LVL127:
 1297              	.L48:
  87:fltk-1.3.4-1/src/Fl_Clock.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 1298              		.loc 2 87 0 discriminator 1
 1299 0369 31FF     		xorl	%edi, %edi
 1300 036b E8000000 		call	_Z11fl_inactivej
 1300      00
 1301              	.LVL128:
 1302 0370 89C6     		movl	%eax, %esi
 1303 0372 EB8F     		jmp	.L32
 1304              	.LVL129:
 1305              	.L47:
 1306              	.LBB348:
  99:fltk-1.3.4-1/src/Fl_Clock.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 1307              		.loc 2 99 0 discriminator 1
 1308 0374 F20F101D 		movsd	.LC22(%rip), %xmm3
 1308      00000000 
 1309 037c F20F1015 		movsd	.LC17(%rip), %xmm2
 1309      00000000 
 1310 0384 F20F100D 		movsd	.LC23(%rip), %xmm1
 1310      00000000 
 1311 038c F20F1005 		movsd	.LC24(%rip), %xmm0
 1311      00000000 
 1312 0394 E8000000 		call	_ZL4rectdddd
 1312      00
 1313              	.LVL130:
 1314              	.LBB325:
 1315              	.LBB324:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1316              		.loc 3 350 0 discriminator 1
 1317 0399 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1317      000000
 1318 03a0 F20F1005 		movsd	.LC25(%rip), %xmm0
 1318      00000000 
 1319 03a8 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 1319      00
 1320              	.LVL131:
 1321 03ad E944FEFF 		jmp	.L36
 1321      FF
 1322              	.LBE324:
 1323              	.LBE325:
 1324              	.LBE348:
 1325              		.cfi_endproc
 1326              	.LFE478:
 1328              		.section	.text.unlikely._ZN15Fl_Clock_Output4drawEiiii
 1329              	.LCOLDE28:
 1330              		.section	.text._ZN15Fl_Clock_Output4drawEiiii
 1331              	.LHOTE28:
 1332              		.section	.text.unlikely._ZN15Fl_Clock_Output4drawEv,"ax",@progbits
 1333              		.align 2
 1334              	.LCOLDB29:
 1335              		.section	.text._ZN15Fl_Clock_Output4drawEv,"ax",@progbits
 1336              	.LHOTB29:
 1337              		.align 2
 1338              		.p2align 4,,15
 1339              		.globl	_ZN15Fl_Clock_Output4drawEv
 1341              	_ZN15Fl_Clock_Output4drawEv:
 1342              	.LFB479:
 113:fltk-1.3.4-1/src/Fl_Clock.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 1343              		.loc 2 113 0
 1344              		.cfi_startproc
 1345              	.LVL132:
 1346 0000 53       		pushq	%rbx
 1347              		.cfi_def_cfa_offset 16
 1348              		.cfi_offset 3, -16
 114:fltk-1.3.4-1/src/Fl_Clock.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1349              		.loc 2 114 0
 1350 0001 8B4F28   		movl	40(%rdi), %ecx
 113:fltk-1.3.4-1/src/Fl_Clock.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 1351              		.loc 2 113 0
 1352 0004 4889FB   		movq	%rdi, %rbx
 114:fltk-1.3.4-1/src/Fl_Clock.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1353              		.loc 2 114 0
 1354 0007 8B5724   		movl	36(%rdi), %edx
 1355 000a 8B7720   		movl	32(%rdi), %esi
 1356 000d 448B472C 		movl	44(%rdi), %r8d
 1357 0011 E8000000 		call	_ZN15Fl_Clock_Output4drawEiiii
 1357      00
 1358              	.LVL133:
 115:fltk-1.3.4-1/src/Fl_Clock.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 1359              		.loc 2 115 0
 1360 0016 4889DF   		movq	%rbx, %rdi
 116:fltk-1.3.4-1/src/Fl_Clock.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1361              		.loc 2 116 0
 1362 0019 5B       		popq	%rbx
 1363              		.cfi_def_cfa_offset 8
 1364              	.LVL134:
 115:fltk-1.3.4-1/src/Fl_Clock.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 1365              		.loc 2 115 0
 1366 001a E9000000 		jmp	_ZNK9Fl_Widget10draw_labelEv
 1366      00
 1367              	.LVL135:
 1368              		.cfi_endproc
 1369              	.LFE479:
 1371              		.section	.text.unlikely._ZN15Fl_Clock_Output4drawEv
 1372              	.LCOLDE29:
 1373              		.section	.text._ZN15Fl_Clock_Output4drawEv
 1374              	.LHOTE29:
 1375              		.section	.text.unlikely._ZN15Fl_Clock_Output5valueEiii,"ax",@progbits
 1376              		.align 2
 1377              	.LCOLDB30:
 1378              		.section	.text._ZN15Fl_Clock_Output5valueEiii,"ax",@progbits
 1379              	.LHOTB30:
 1380              		.align 2
 1381              		.p2align 4,,15
 1382              		.globl	_ZN15Fl_Clock_Output5valueEiii
 1384              	_ZN15Fl_Clock_Output5valueEiii:
 1385              	.LFB480:
 124:fltk-1.3.4-1/src/Fl_Clock.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1386              		.loc 2 124 0
 1387              		.cfi_startproc
 1388              	.LVL136:
 125:fltk-1.3.4-1/src/Fl_Clock.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 1389              		.loc 2 125 0
 1390 0000 397778   		cmpl	%esi, 120(%rdi)
 1391 0003 742B     		je	.L54
 1392              	.L52:
 126:fltk-1.3.4-1/src/Fl_Clock.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 1393              		.loc 2 126 0
 1394 0005 897778   		movl	%esi, 120(%rdi)
 1395 0008 89577C   		movl	%edx, 124(%rdi)
 127:fltk-1.3.4-1/src/Fl_Clock.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 1396              		.loc 2 127 0
 1397 000b 6BF63C   		imull	$60, %esi, %esi
 1398              	.LVL137:
 126:fltk-1.3.4-1/src/Fl_Clock.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 1399              		.loc 2 126 0
 1400 000e 898F8000 		movl	%ecx, 128(%rdi)
 1400      0000
 127:fltk-1.3.4-1/src/Fl_Clock.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 1401              		.loc 2 127 0
 1402 0014 01F2     		addl	%esi, %edx
 1403              	.LVL138:
 128:fltk-1.3.4-1/src/Fl_Clock.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1404              		.loc 2 128 0
 1405 0016 BE010000 		movl	$1, %esi
 1405      00
 127:fltk-1.3.4-1/src/Fl_Clock.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 1406              		.loc 2 127 0
 1407 001b 6BD23C   		imull	$60, %edx, %edx
 1408 001e 01CA     		addl	%ecx, %edx
 1409 0020 4863D2   		movslq	%edx, %rdx
 1410 0023 48899788 		movq	%rdx, 136(%rdi)
 1410      000000
 128:fltk-1.3.4-1/src/Fl_Clock.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1411              		.loc 2 128 0
 1412 002a E9000000 		jmp	_ZN9Fl_Widget6damageEh
 1412      00
 1413              	.LVL139:
 1414 002f 90       		.p2align 4,,10
 1415              		.p2align 3
 1416              	.L54:
 125:fltk-1.3.4-1/src/Fl_Clock.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 1417              		.loc 2 125 0 discriminator 1
 1418 0030 39577C   		cmpl	%edx, 124(%rdi)
 1419 0033 75D0     		jne	.L52
 125:fltk-1.3.4-1/src/Fl_Clock.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 1420              		.loc 2 125 0 is_stmt 0 discriminator 2
 1421 0035 398F8000 		cmpl	%ecx, 128(%rdi)
 1421      0000
 1422 003b 75C8     		jne	.L52
 1423 003d F3C3     		rep ret
 1424              		.cfi_endproc
 1425              	.LFE480:
 1427              		.section	.text.unlikely._ZN15Fl_Clock_Output5valueEiii
 1428              	.LCOLDE30:
 1429              		.section	.text._ZN15Fl_Clock_Output5valueEiii
 1430              	.LHOTE30:
 1431              		.section	.text.unlikely._ZN15Fl_Clock_Output5valueEm,"ax",@progbits
 1432              		.align 2
 1433              	.LCOLDB31:
 1434              		.section	.text._ZN15Fl_Clock_Output5valueEm,"ax",@progbits
 1435              	.LHOTB31:
 1436              		.align 2
 1437              		.p2align 4,,15
 1438              		.globl	_ZN15Fl_Clock_Output5valueEm
 1440              	_ZN15Fl_Clock_Output5valueEm:
 1441              	.LFB481:
 138:fltk-1.3.4-1/src/Fl_Clock.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1442              		.loc 2 138 0 is_stmt 1
 1443              		.cfi_startproc
 1444              	.LVL140:
 1445 0000 53       		pushq	%rbx
 1446              		.cfi_def_cfa_offset 16
 1447              		.cfi_offset 3, -16
 1448 0001 4889FB   		movq	%rdi, %rbx
 1449 0004 4883EC10 		subq	$16, %rsp
 1450              		.cfi_def_cfa_offset 32
 139:fltk-1.3.4-1/src/Fl_Clock.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1451              		.loc 2 139 0
 1452 0008 4889B788 		movq	%rsi, 136(%rdi)
 1452      000000
 143:fltk-1.3.4-1/src/Fl_Clock.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1453              		.loc 2 143 0
 1454 000f 4889E7   		movq	%rsp, %rdi
 1455              	.LVL141:
 142:fltk-1.3.4-1/src/Fl_Clock.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 1456              		.loc 2 142 0
 1457 0012 48893424 		movq	%rsi, (%rsp)
 138:fltk-1.3.4-1/src/Fl_Clock.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1458              		.loc 2 138 0
 1459 0016 64488B04 		movq	%fs:40, %rax
 1459      25280000 
 1459      00
 1460 001f 48894424 		movq	%rax, 8(%rsp)
 1460      08
 1461 0024 31C0     		xorl	%eax, %eax
 143:fltk-1.3.4-1/src/Fl_Clock.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1462              		.loc 2 143 0
 1463 0026 E8000000 		call	localtime
 1463      00
 1464              	.LVL142:
 144:fltk-1.3.4-1/src/Fl_Clock.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 1465              		.loc 2 144 0
 1466 002b 8B5004   		movl	4(%rax), %edx
 1467 002e 8B7008   		movl	8(%rax), %esi
 1468 0031 4889DF   		movq	%rbx, %rdi
 1469 0034 8B08     		movl	(%rax), %ecx
 1470 0036 E8000000 		call	_ZN15Fl_Clock_Output5valueEiii
 1470      00
 1471              	.LVL143:
 145:fltk-1.3.4-1/src/Fl_Clock.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1472              		.loc 2 145 0
 1473 003b 488B4424 		movq	8(%rsp), %rax
 1473      08
 1474 0040 64483304 		xorq	%fs:40, %rax
 1474      25280000 
 1474      00
 1475 0049 7506     		jne	.L58
 1476 004b 4883C410 		addq	$16, %rsp
 1477              		.cfi_remember_state
 1478              		.cfi_def_cfa_offset 16
 1479 004f 5B       		popq	%rbx
 1480              		.cfi_def_cfa_offset 8
 1481              	.LVL144:
 1482 0050 C3       		ret
 1483              	.LVL145:
 1484              	.L58:
 1485              		.cfi_restore_state
 1486 0051 E8000000 		call	__stack_chk_fail
 1486      00
 1487              	.LVL146:
 1488              		.cfi_endproc
 1489              	.LFE481:
 1491              		.section	.text.unlikely._ZN15Fl_Clock_Output5valueEm
 1492              	.LCOLDE31:
 1493              		.section	.text._ZN15Fl_Clock_Output5valueEm
 1494              	.LHOTE31:
 1495              		.section	.text.unlikely._ZL4tickPv,"ax",@progbits
 1496              	.LCOLDB32:
 1497              		.section	.text._ZL4tickPv,"ax",@progbits
 1498              	.LHOTB32:
 1499              		.p2align 4,,15
 1501              	_ZL4tickPv:
 1502              	.LFB495:
 188:fltk-1.3.4-1/src/Fl_Clock.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1503              		.loc 2 188 0
 1504              		.cfi_startproc
 1505              	.LVL147:
 1506 0000 53       		pushq	%rbx
 1507              		.cfi_def_cfa_offset 16
 1508              		.cfi_offset 3, -16
 188:fltk-1.3.4-1/src/Fl_Clock.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1509              		.loc 2 188 0
 1510 0001 4889FB   		movq	%rdi, %rbx
 189:fltk-1.3.4-1/src/Fl_Clock.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 1511              		.loc 2 189 0
 1512 0004 31FF     		xorl	%edi, %edi
 1513              	.LVL148:
 1514 0006 E8000000 		call	time
 1514      00
 1515              	.LVL149:
 1516 000b 4889DF   		movq	%rbx, %rdi
 1517 000e 4889C6   		movq	%rax, %rsi
 1518 0011 E8000000 		call	_ZN15Fl_Clock_Output5valueEm
 1518      00
 1519              	.LVL150:
 190:fltk-1.3.4-1/src/Fl_Clock.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1520              		.loc 2 190 0
 1521 0016 4889DE   		movq	%rbx, %rsi
 1522 0019 F20F1005 		movsd	.LC17(%rip), %xmm0
 1522      00000000 
 191:fltk-1.3.4-1/src/Fl_Clock.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 1523              		.loc 2 191 0
 1524 0021 5B       		popq	%rbx
 1525              		.cfi_def_cfa_offset 8
 1526              	.LVL151:
 190:fltk-1.3.4-1/src/Fl_Clock.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1527              		.loc 2 190 0
 1528 0022 BF000000 		movl	$_ZL4tickPv, %edi
 1528      00
 1529 0027 E9000000 		jmp	_ZN2Fl11add_timeoutEdPFvPvES0_
 1529      00
 1530              	.LVL152:
 1531              		.cfi_endproc
 1532              	.LFE495:
 1534              		.section	.text.unlikely._ZL4tickPv
 1535              	.LCOLDE32:
 1536              		.section	.text._ZL4tickPv
 1537              	.LHOTE32:
 1538              		.section	.text.unlikely._ZN8Fl_Clock6handleEi,"ax",@progbits
 1539              		.align 2
 1540              	.LCOLDB33:
 1541              		.section	.text._ZN8Fl_Clock6handleEi,"ax",@progbits
 1542              	.LHOTB33:
 1543              		.align 2
 1544              		.p2align 4,,15
 1545              		.globl	_ZN8Fl_Clock6handleEi
 1547              	_ZN8Fl_Clock6handleEi:
 1548              	.LFB496:
 193:fltk-1.3.4-1/src/Fl_Clock.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1549              		.loc 2 193 0
 1550              		.cfi_startproc
 1551              	.LVL153:
 1552 0000 55       		pushq	%rbp
 1553              		.cfi_def_cfa_offset 16
 1554              		.cfi_offset 6, -16
 1555 0001 53       		pushq	%rbx
 1556              		.cfi_def_cfa_offset 24
 1557              		.cfi_offset 3, -24
 1558 0002 4889FD   		movq	%rdi, %rbp
 1559 0005 89F3     		movl	%esi, %ebx
 1560 0007 4883EC08 		subq	$8, %rsp
 1561              		.cfi_def_cfa_offset 32
 194:fltk-1.3.4-1/src/Fl_Clock.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 1562              		.loc 2 194 0
 1563 000b 83FE0F   		cmpl	$15, %esi
 1564 000e 7420     		je	.L63
 1565 0010 83FE10   		cmpl	$16, %esi
 1566 0013 7505     		jne	.L62
 196:fltk-1.3.4-1/src/Fl_Clock.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1567              		.loc 2 196 0
 1568 0015 E8000000 		call	_ZL4tickPv
 1568      00
 1569              	.LVL154:
 1570              	.L62:
 203:fltk-1.3.4-1/src/Fl_Clock.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 1571              		.loc 2 203 0
 1572 001a 4883C408 		addq	$8, %rsp
 1573              		.cfi_remember_state
 1574              		.cfi_def_cfa_offset 24
 202:fltk-1.3.4-1/src/Fl_Clock.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 1575              		.loc 2 202 0
 1576 001e 89DE     		movl	%ebx, %esi
 1577 0020 4889EF   		movq	%rbp, %rdi
 203:fltk-1.3.4-1/src/Fl_Clock.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 1578              		.loc 2 203 0
 1579 0023 5B       		popq	%rbx
 1580              		.cfi_def_cfa_offset 16
 1581              	.LVL155:
 1582 0024 5D       		popq	%rbp
 1583              		.cfi_def_cfa_offset 8
 1584              	.LVL156:
 202:fltk-1.3.4-1/src/Fl_Clock.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 1585              		.loc 2 202 0
 1586 0025 E9000000 		jmp	_ZN9Fl_Widget6handleEi
 1586      00
 1587              	.LVL157:
 1588 002a 660F1F44 		.p2align 4,,10
 1588      0000
 1589              		.p2align 3
 1590              	.L63:
 1591              		.cfi_restore_state
 199:fltk-1.3.4-1/src/Fl_Clock.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 1592              		.loc 2 199 0
 1593 0030 4889FE   		movq	%rdi, %rsi
 1594 0033 BF000000 		movl	$_ZL4tickPv, %edi
 1594      00
 1595              	.LVL158:
 1596 0038 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 1596      00
 1597              	.LVL159:
 203:fltk-1.3.4-1/src/Fl_Clock.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 1598              		.loc 2 203 0
 1599 003d 4883C408 		addq	$8, %rsp
 1600              		.cfi_def_cfa_offset 24
 202:fltk-1.3.4-1/src/Fl_Clock.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 1601              		.loc 2 202 0
 1602 0041 89DE     		movl	%ebx, %esi
 1603 0043 4889EF   		movq	%rbp, %rdi
 203:fltk-1.3.4-1/src/Fl_Clock.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 1604              		.loc 2 203 0
 1605 0046 5B       		popq	%rbx
 1606              		.cfi_def_cfa_offset 16
 1607              	.LVL160:
 1608 0047 5D       		popq	%rbp
 1609              		.cfi_def_cfa_offset 8
 1610              	.LVL161:
 202:fltk-1.3.4-1/src/Fl_Clock.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 1611              		.loc 2 202 0
 1612 0048 E9000000 		jmp	_ZN9Fl_Widget6handleEi
 1612      00
 1613              	.LVL162:
 1614              		.cfi_endproc
 1615              	.LFE496:
 1617              		.section	.text.unlikely._ZN8Fl_Clock6handleEi
 1618              	.LCOLDE33:
 1619              		.section	.text._ZN8Fl_Clock6handleEi
 1620              	.LHOTE33:
 1621              		.section	.text.unlikely._ZN15Fl_Clock_OutputC2EiiiiPKc,"ax",@progbits
 1622              		.align 2
 1623              	.LCOLDB34:
 1624              		.section	.text._ZN15Fl_Clock_OutputC2EiiiiPKc,"ax",@progbits
 1625              	.LHOTB34:
 1626              		.align 2
 1627              		.p2align 4,,15
 1628              		.globl	_ZN15Fl_Clock_OutputC2EiiiiPKc
 1630              	_ZN15Fl_Clock_OutputC2EiiiiPKc:
 1631              	.LFB483:
 153:fltk-1.3.4-1/src/Fl_Clock.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1632              		.loc 2 153 0
 1633              		.cfi_startproc
 1634              	.LVL163:
 1635 0000 53       		pushq	%rbx
 1636              		.cfi_def_cfa_offset 16
 1637              		.cfi_offset 3, -16
 153:fltk-1.3.4-1/src/Fl_Clock.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1638              		.loc 2 153 0
 1639 0001 4889FB   		movq	%rdi, %rbx
 1640              	.LBB349:
 154:fltk-1.3.4-1/src/Fl_Clock.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1641              		.loc 2 154 0
 1642 0004 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 1642      00
 1643              	.LVL164:
 1644 0009 48C70300 		movq	$_ZTV15Fl_Clock_Output+16, (%rbx)
 1644      000000
 1645              	.LVL165:
 1646              	.LBB350:
 1647              	.LBB351:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1648              		.loc 1 372 0
 1649 0010 C6436E02 		movb	$2, 110(%rbx)
 1650              	.LVL166:
 1651              	.LBE351:
 1652              	.LBE350:
 1653              	.LBB352:
 1654              	.LBB353:
 406:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1655              		.loc 1 406 0
 1656 0014 C7436825 		movl	$37, 104(%rbx)
 1656      000000
 1657              	.LVL167:
 1658              	.LBE353:
 1659              	.LBE352:
 1660              	.LBB354:
 1661              	.LBB355:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1662              		.loc 1 357 0
 1663 001b C7435402 		movl	$2, 84(%rbx)
 1663      000000
 1664              	.LVL168:
 1665              	.LBE355:
 1666              	.LBE354:
 158:fltk-1.3.4-1/src/Fl_Clock.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1667              		.loc 2 158 0
 1668 0022 C7437800 		movl	$0, 120(%rbx)
 1668      000000
 159:fltk-1.3.4-1/src/Fl_Clock.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 1669              		.loc 2 159 0
 1670 0029 C7437C00 		movl	$0, 124(%rbx)
 1670      000000
 160:fltk-1.3.4-1/src/Fl_Clock.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1671              		.loc 2 160 0
 1672 0030 C7838000 		movl	$0, 128(%rbx)
 1672      00000000 
 1672      0000
 161:fltk-1.3.4-1/src/Fl_Clock.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1673              		.loc 2 161 0
 1674 003a 48C78388 		movq	$0, 136(%rbx)
 1674      00000000 
 1674      000000
 1675              	.LBE349:
 162:fltk-1.3.4-1/src/Fl_Clock.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 1676              		.loc 2 162 0
 1677 0045 5B       		popq	%rbx
 1678              		.cfi_def_cfa_offset 8
 1679              	.LVL169:
 1680 0046 C3       		ret
 1681              		.cfi_endproc
 1682              	.LFE483:
 1684              		.section	.text.unlikely._ZN15Fl_Clock_OutputC2EiiiiPKc
 1685              	.LCOLDE34:
 1686              		.section	.text._ZN15Fl_Clock_OutputC2EiiiiPKc
 1687              	.LHOTE34:
 1688              		.globl	_ZN15Fl_Clock_OutputC1EiiiiPKc
 1689              		.set	_ZN15Fl_Clock_OutputC1EiiiiPKc,_ZN15Fl_Clock_OutputC2EiiiiPKc
 1690              		.section	.text.unlikely._ZN8Fl_ClockC2EiiiiPKc,"ax",@progbits
 1691              		.align 2
 1692              	.LCOLDB35:
 1693              		.section	.text._ZN8Fl_ClockC2EiiiiPKc,"ax",@progbits
 1694              	.LHOTB35:
 1695              		.align 2
 1696              		.p2align 4,,15
 1697              		.globl	_ZN8Fl_ClockC2EiiiiPKc
 1699              	_ZN8Fl_ClockC2EiiiiPKc:
 1700              	.LFB490:
 172:fltk-1.3.4-1/src/Fl_Clock.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1701              		.loc 2 172 0
 1702              		.cfi_startproc
 1703              	.LVL170:
 1704 0000 53       		pushq	%rbx
 1705              		.cfi_def_cfa_offset 16
 1706              		.cfi_offset 3, -16
 172:fltk-1.3.4-1/src/Fl_Clock.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1707              		.loc 2 172 0
 1708 0001 4889FB   		movq	%rdi, %rbx
 1709              	.LBB356:
 1710              	.LBB357:
 1711              	.LBB358:
 154:fltk-1.3.4-1/src/Fl_Clock.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1712              		.loc 2 154 0
 1713 0004 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 1713      00
 1714              	.LVL171:
 1715              	.LBB359:
 1716              	.LBB360:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1717              		.loc 1 372 0
 1718 0009 C6436E02 		movb	$2, 110(%rbx)
 1719              	.LVL172:
 1720              	.LBE360:
 1721              	.LBE359:
 1722              	.LBB361:
 1723              	.LBB362:
 406:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1724              		.loc 1 406 0
 1725 000d C7436825 		movl	$37, 104(%rbx)
 1725      000000
 1726              	.LVL173:
 1727              	.LBE362:
 1728              	.LBE361:
 1729              	.LBB363:
 1730              	.LBB364:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1731              		.loc 1 357 0
 1732 0014 C7435402 		movl	$2, 84(%rbx)
 1732      000000
 1733              	.LVL174:
 1734              	.LBE364:
 1735              	.LBE363:
 158:fltk-1.3.4-1/src/Fl_Clock.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1736              		.loc 2 158 0
 1737 001b C7437800 		movl	$0, 120(%rbx)
 1737      000000
 159:fltk-1.3.4-1/src/Fl_Clock.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 1738              		.loc 2 159 0
 1739 0022 C7437C00 		movl	$0, 124(%rbx)
 1739      000000
 160:fltk-1.3.4-1/src/Fl_Clock.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1740              		.loc 2 160 0
 1741 0029 C7838000 		movl	$0, 128(%rbx)
 1741      00000000 
 1741      0000
 161:fltk-1.3.4-1/src/Fl_Clock.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1742              		.loc 2 161 0
 1743 0033 48C78388 		movq	$0, 136(%rbx)
 1743      00000000 
 1743      000000
 1744              	.LVL175:
 1745              	.LBE358:
 1746              	.LBE357:
 173:fltk-1.3.4-1/src/Fl_Clock.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 1747              		.loc 2 173 0
 1748 003e 48C70300 		movq	$_ZTV8Fl_Clock+16, (%rbx)
 1748      000000
 1749              	.LBE356:
 1750 0045 5B       		popq	%rbx
 1751              		.cfi_def_cfa_offset 8
 1752              	.LVL176:
 1753 0046 C3       		ret
 1754              		.cfi_endproc
 1755              	.LFE490:
 1757              		.section	.text.unlikely._ZN8Fl_ClockC2EiiiiPKc
 1758              	.LCOLDE35:
 1759              		.section	.text._ZN8Fl_ClockC2EiiiiPKc
 1760              	.LHOTE35:
 1761              		.globl	_ZN8Fl_ClockC1EiiiiPKc
 1762              		.set	_ZN8Fl_ClockC1EiiiiPKc,_ZN8Fl_ClockC2EiiiiPKc
 1763              		.section	.text.unlikely._ZN8Fl_ClockC2EhiiiiPKc,"ax",@progbits
 1764              		.align 2
 1765              	.LCOLDB36:
 1766              		.section	.text._ZN8Fl_ClockC2EhiiiiPKc,"ax",@progbits
 1767              	.LHOTB36:
 1768              		.align 2
 1769              		.p2align 4,,15
 1770              		.globl	_ZN8Fl_ClockC2EhiiiiPKc
 1772              	_ZN8Fl_ClockC2EhiiiiPKc:
 1773              	.LFB493:
 182:fltk-1.3.4-1/src/Fl_Clock.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1774              		.loc 2 182 0
 1775              		.cfi_startproc
 1776              	.LVL177:
 1777 0000 55       		pushq	%rbp
 1778              		.cfi_def_cfa_offset 16
 1779              		.cfi_offset 6, -16
 1780 0001 53       		pushq	%rbx
 1781              		.cfi_def_cfa_offset 24
 1782              		.cfi_offset 3, -24
 1783 0002 89F5     		movl	%esi, %ebp
 1784 0004 89D6     		movl	%edx, %esi
 1785              	.LVL178:
 1786 0006 89CA     		movl	%ecx, %edx
 1787              	.LVL179:
 1788 0008 4489C1   		movl	%r8d, %ecx
 1789              	.LVL180:
 1790 000b 4883EC08 		subq	$8, %rsp
 1791              		.cfi_def_cfa_offset 32
 182:fltk-1.3.4-1/src/Fl_Clock.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1792              		.loc 2 182 0
 1793 000f 4589C8   		movl	%r9d, %r8d
 1794              	.LVL181:
 1795 0012 4889FB   		movq	%rdi, %rbx
 1796              	.LBB365:
 1797              	.LBB366:
 1798              	.LBB367:
 154:fltk-1.3.4-1/src/Fl_Clock.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1799              		.loc 2 154 0
 1800 0015 4C8B4C24 		movq	32(%rsp), %r9
 1800      20
 1801              	.LVL182:
 1802 001a E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 1802      00
 1803              	.LVL183:
 1804              	.LBE367:
 1805              	.LBE366:
 185:fltk-1.3.4-1/src/Fl_Clock.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1806              		.loc 2 185 0
 1807 001f 4080FD01 		cmpb	$1, %bpl
 1808              	.LBB375:
 1809              	.LBB376:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1810              		.loc 1 279 0
 1811 0023 40886B6C 		movb	%bpl, 108(%rbx)
 1812              	.LBE376:
 1813              	.LBE375:
 1814              	.LBB377:
 1815              	.LBB372:
 1816              	.LBB368:
 1817              	.LBB369:
 406:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1818              		.loc 1 406 0
 1819 0027 C7436825 		movl	$37, 104(%rbx)
 1819      000000
 1820              	.LVL184:
 1821              	.LBE369:
 1822              	.LBE368:
 1823              	.LBE372:
 1824              	.LBE377:
 185:fltk-1.3.4-1/src/Fl_Clock.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1825              		.loc 2 185 0
 1826 002e 0F95C0   		setne	%al
 1827              	.LBB378:
 1828              	.LBB373:
 1829              	.LBB370:
 1830              	.LBB371:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1831              		.loc 1 357 0
 1832 0031 C7435402 		movl	$2, 84(%rbx)
 1832      000000
 1833              	.LVL185:
 1834              	.LBE371:
 1835              	.LBE370:
 158:fltk-1.3.4-1/src/Fl_Clock.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1836              		.loc 2 158 0
 1837 0038 C7437800 		movl	$0, 120(%rbx)
 1837      000000
 1838              	.LBE373:
 1839              	.LBE378:
 185:fltk-1.3.4-1/src/Fl_Clock.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1840              		.loc 2 185 0
 1841 003f 01C0     		addl	%eax, %eax
 1842              	.LBB379:
 1843              	.LBB374:
 159:fltk-1.3.4-1/src/Fl_Clock.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 1844              		.loc 2 159 0
 1845 0041 C7437C00 		movl	$0, 124(%rbx)
 1845      000000
 160:fltk-1.3.4-1/src/Fl_Clock.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1846              		.loc 2 160 0
 1847 0048 C7838000 		movl	$0, 128(%rbx)
 1847      00000000 
 1847      0000
 161:fltk-1.3.4-1/src/Fl_Clock.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1848              		.loc 2 161 0
 1849 0052 48C78388 		movq	$0, 136(%rbx)
 1849      00000000 
 1849      000000
 1850              	.LVL186:
 1851              	.LBE374:
 1852              	.LBE379:
 183:fltk-1.3.4-1/src/Fl_Clock.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 1853              		.loc 2 183 0
 1854 005d 48C70300 		movq	$_ZTV8Fl_Clock+16, (%rbx)
 1854      000000
 1855              	.LVL187:
 1856              	.LBB380:
 1857              	.LBB381:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1858              		.loc 1 372 0
 1859 0064 88436E   		movb	%al, 110(%rbx)
 1860              	.LBE381:
 1861              	.LBE380:
 1862              	.LBE365:
 186:fltk-1.3.4-1/src/Fl_Clock.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 1863              		.loc 2 186 0
 1864 0067 4883C408 		addq	$8, %rsp
 1865              		.cfi_def_cfa_offset 24
 1866 006b 5B       		popq	%rbx
 1867              		.cfi_def_cfa_offset 16
 1868              	.LVL188:
 1869 006c 5D       		popq	%rbp
 1870              		.cfi_def_cfa_offset 8
 1871 006d C3       		ret
 1872              		.cfi_endproc
 1873              	.LFE493:
 1875              		.section	.text.unlikely._ZN8Fl_ClockC2EhiiiiPKc
 1876              	.LCOLDE36:
 1877              		.section	.text._ZN8Fl_ClockC2EhiiiiPKc
 1878              	.LHOTE36:
 1879              		.globl	_ZN8Fl_ClockC1EhiiiiPKc
 1880              		.set	_ZN8Fl_ClockC1EhiiiiPKc,_ZN8Fl_ClockC2EhiiiiPKc
 1881              		.section	.text.unlikely._ZN14Fl_Round_ClockC2EiiiiPKc,"ax",@progbits
 1882              		.align 2
 1883              	.LCOLDB37:
 1884              		.section	.text._ZN14Fl_Round_ClockC2EiiiiPKc,"ax",@progbits
 1885              	.LHOTB37:
 1886              		.align 2
 1887              		.p2align 4,,15
 1888              		.globl	_ZN14Fl_Round_ClockC2EiiiiPKc
 1890              	_ZN14Fl_Round_ClockC2EiiiiPKc:
 1891              	.LFB502:
 211:fltk-1.3.4-1/src/Fl_Clock.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Clock.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Clock.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 1892              		.loc 2 213 0
 1893              		.cfi_startproc
 1894              	.LVL189:
 1895 0000 53       		pushq	%rbx
 1896              		.cfi_def_cfa_offset 16
 1897              		.cfi_offset 3, -16
 1898              		.loc 2 213 0
 1899 0001 4889FB   		movq	%rdi, %rbx
 1900              	.LBB382:
 1901              	.LBB383:
 1902              	.LBB384:
 1903              	.LBB385:
 154:fltk-1.3.4-1/src/Fl_Clock.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1904              		.loc 2 154 0
 1905 0004 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 1905      00
 1906              	.LVL190:
 1907              	.LBB386:
 1908              	.LBB387:
 406:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1909              		.loc 1 406 0
 1910 0009 C7436825 		movl	$37, 104(%rbx)
 1910      000000
 1911              	.LVL191:
 1912              	.LBE387:
 1913              	.LBE386:
 1914              	.LBB388:
 1915              	.LBB389:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1916              		.loc 1 357 0
 1917 0010 C7435402 		movl	$2, 84(%rbx)
 1917      000000
 1918              	.LVL192:
 1919              	.LBE389:
 1920              	.LBE388:
 158:fltk-1.3.4-1/src/Fl_Clock.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1921              		.loc 2 158 0
 1922 0017 C7437800 		movl	$0, 120(%rbx)
 1922      000000
 159:fltk-1.3.4-1/src/Fl_Clock.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 1923              		.loc 2 159 0
 1924 001e C7437C00 		movl	$0, 124(%rbx)
 1924      000000
 160:fltk-1.3.4-1/src/Fl_Clock.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1925              		.loc 2 160 0
 1926 0025 C7838000 		movl	$0, 128(%rbx)
 1926      00000000 
 1926      0000
 161:fltk-1.3.4-1/src/Fl_Clock.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1927              		.loc 2 161 0
 1928 002f 48C78388 		movq	$0, 136(%rbx)
 1928      00000000 
 1928      000000
 1929              	.LVL193:
 1930              	.LBE385:
 1931              	.LBE384:
 1932              	.LBE383:
 214:fltk-1.3.4-1/src/Fl_Clock.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1933              		.loc 2 214 0
 1934 003a 48C70300 		movq	$_ZTV14Fl_Round_Clock+16, (%rbx)
 1934      000000
 1935              	.LVL194:
 1936              	.LBB390:
 1937              	.LBB391:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1938              		.loc 1 279 0
 1939 0041 C6436C01 		movb	$1, 108(%rbx)
 1940              	.LVL195:
 1941              	.LBE391:
 1942              	.LBE390:
 1943              	.LBB392:
 1944              	.LBB393:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1945              		.loc 1 372 0
 1946 0045 C6436E00 		movb	$0, 110(%rbx)
 1947              	.LVL196:
 1948              	.LBE393:
 1949              	.LBE392:
 1950              	.LBE382:
 215:fltk-1.3.4-1/src/Fl_Clock.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Clock.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Clock.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Clock.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 1951              		.loc 2 218 0
 1952 0049 5B       		popq	%rbx
 1953              		.cfi_def_cfa_offset 8
 1954              	.LVL197:
 1955 004a C3       		ret
 1956              		.cfi_endproc
 1957              	.LFE502:
 1959              		.section	.text.unlikely._ZN14Fl_Round_ClockC2EiiiiPKc
 1960              	.LCOLDE37:
 1961              		.section	.text._ZN14Fl_Round_ClockC2EiiiiPKc
 1962              	.LHOTE37:
 1963              		.globl	_ZN14Fl_Round_ClockC1EiiiiPKc
 1964              		.set	_ZN14Fl_Round_ClockC1EiiiiPKc,_ZN14Fl_Round_ClockC2EiiiiPKc
 1965              		.weak	_ZTS15Fl_Clock_Output
 1966              		.section	.rodata._ZTS15Fl_Clock_Output,"aG",@progbits,_ZTS15Fl_Clock_Output,comdat
 1967              		.align 16
 1970              	_ZTS15Fl_Clock_Output:
 1971 0000 3135466C 		.string	"15Fl_Clock_Output"
 1971      5F436C6F 
 1971      636B5F4F 
 1971      75747075 
 1971      7400
 1972              		.weak	_ZTI15Fl_Clock_Output
 1973              		.section	.rodata._ZTI15Fl_Clock_Output,"aG",@progbits,_ZTI15Fl_Clock_Output,comdat
 1974              		.align 8
 1977              	_ZTI15Fl_Clock_Output:
 1978 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1978      00000000 
 1979 0008 00000000 		.quad	_ZTS15Fl_Clock_Output
 1979      00000000 
 1980 0010 00000000 		.quad	_ZTI9Fl_Widget
 1980      00000000 
 1981              		.weak	_ZTS8Fl_Clock
 1982              		.section	.rodata._ZTS8Fl_Clock,"aG",@progbits,_ZTS8Fl_Clock,comdat
 1983              		.align 8
 1986              	_ZTS8Fl_Clock:
 1987 0000 38466C5F 		.string	"8Fl_Clock"
 1987      436C6F63 
 1987      6B00
 1988              		.weak	_ZTI8Fl_Clock
 1989              		.section	.rodata._ZTI8Fl_Clock,"aG",@progbits,_ZTI8Fl_Clock,comdat
 1990              		.align 8
 1993              	_ZTI8Fl_Clock:
 1994 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1994      00000000 
 1995 0008 00000000 		.quad	_ZTS8Fl_Clock
 1995      00000000 
 1996 0010 00000000 		.quad	_ZTI15Fl_Clock_Output
 1996      00000000 
 1997              		.weak	_ZTS14Fl_Round_Clock
 1998              		.section	.rodata._ZTS14Fl_Round_Clock,"aG",@progbits,_ZTS14Fl_Round_Clock,comdat
 1999              		.align 16
 2002              	_ZTS14Fl_Round_Clock:
 2003 0000 3134466C 		.string	"14Fl_Round_Clock"
 2003      5F526F75 
 2003      6E645F43 
 2003      6C6F636B 
 2003      00
 2004              		.weak	_ZTI14Fl_Round_Clock
 2005              		.section	.rodata._ZTI14Fl_Round_Clock,"aG",@progbits,_ZTI14Fl_Round_Clock,comdat
 2006              		.align 8
 2009              	_ZTI14Fl_Round_Clock:
 2010 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 2010      00000000 
 2011 0008 00000000 		.quad	_ZTS14Fl_Round_Clock
 2011      00000000 
 2012 0010 00000000 		.quad	_ZTI8Fl_Clock
 2012      00000000 
 2013              		.weak	_ZTV14Fl_Round_Clock
 2014              		.section	.rodata._ZTV14Fl_Round_Clock,"aG",@progbits,_ZTV14Fl_Round_Clock,comdat
 2015              		.align 8
 2018              	_ZTV14Fl_Round_Clock:
 2019 0000 00000000 		.quad	0
 2019      00000000 
 2020 0008 00000000 		.quad	_ZTI14Fl_Round_Clock
 2020      00000000 
 2021 0010 00000000 		.quad	_ZN14Fl_Round_ClockD1Ev
 2021      00000000 
 2022 0018 00000000 		.quad	_ZN14Fl_Round_ClockD0Ev
 2022      00000000 
 2023 0020 00000000 		.quad	_ZN15Fl_Clock_Output4drawEv
 2023      00000000 
 2024 0028 00000000 		.quad	_ZN8Fl_Clock6handleEi
 2024      00000000 
 2025 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 2025      00000000 
 2026 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 2026      00000000 
 2027 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 2027      00000000 
 2028 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 2028      00000000 
 2029 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 2029      00000000 
 2030 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 2030      00000000 
 2031              		.weak	_ZTV15Fl_Clock_Output
 2032              		.section	.rodata._ZTV15Fl_Clock_Output,"aG",@progbits,_ZTV15Fl_Clock_Output,comdat
 2033              		.align 8
 2036              	_ZTV15Fl_Clock_Output:
 2037 0000 00000000 		.quad	0
 2037      00000000 
 2038 0008 00000000 		.quad	_ZTI15Fl_Clock_Output
 2038      00000000 
 2039 0010 00000000 		.quad	_ZN15Fl_Clock_OutputD1Ev
 2039      00000000 
 2040 0018 00000000 		.quad	_ZN15Fl_Clock_OutputD0Ev
 2040      00000000 
 2041 0020 00000000 		.quad	_ZN15Fl_Clock_Output4drawEv
 2041      00000000 
 2042 0028 00000000 		.quad	_ZN9Fl_Widget6handleEi
 2042      00000000 
 2043 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 2043      00000000 
 2044 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 2044      00000000 
 2045 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 2045      00000000 
 2046 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 2046      00000000 
 2047 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 2047      00000000 
 2048 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 2048      00000000 
 2049              		.weak	_ZTV8Fl_Clock
 2050              		.section	.rodata._ZTV8Fl_Clock,"aG",@progbits,_ZTV8Fl_Clock,comdat
 2051              		.align 8
 2054              	_ZTV8Fl_Clock:
 2055 0000 00000000 		.quad	0
 2055      00000000 
 2056 0008 00000000 		.quad	_ZTI8Fl_Clock
 2056      00000000 
 2057 0010 00000000 		.quad	_ZN8Fl_ClockD1Ev
 2057      00000000 
 2058 0018 00000000 		.quad	_ZN8Fl_ClockD0Ev
 2058      00000000 
 2059 0020 00000000 		.quad	_ZN15Fl_Clock_Output4drawEv
 2059      00000000 
 2060 0028 00000000 		.quad	_ZN8Fl_Clock6handleEi
 2060      00000000 
 2061 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 2061      00000000 
 2062 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 2062      00000000 
 2063 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 2063      00000000 
 2064 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 2064      00000000 
 2065 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 2065      00000000 
 2066 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 2066      00000000 
 2067              		.section	.rodata._ZL7sechand,"a",@progbits
 2068              		.align 32
 2071              	_ZL7sechand:
 2072 0000 CDCCCCBD 		.long	3184315597
 2073 0004 00000000 		.long	0
 2074 0008 00000000 		.long	0
 2075 000c 00000040 		.long	1073741824
 2076 0010 CDCCCC3D 		.long	1036831949
 2077 0014 00000000 		.long	0
 2078 0018 00000000 		.long	0
 2079 001c 000038C1 		.long	3241672704
 2080              		.section	.rodata._ZL7minhand,"a",@progbits
 2081              		.align 32
 2084              	_ZL7minhand:
 2085 0000 000000BF 		.long	3204448256
 2086 0004 00000000 		.long	0
 2087 0008 00000000 		.long	0
 2088 000c 0000C03F 		.long	1069547520
 2089 0010 0000003F 		.long	1056964608
 2090 0014 00000000 		.long	0
 2091 0018 00000000 		.long	0
 2092 001c 000038C1 		.long	3241672704
 2093              		.section	.rodata._ZL8hourhand,"a",@progbits
 2094              		.align 32
 2097              	_ZL8hourhand:
 2098 0000 000000BF 		.long	3204448256
 2099 0004 00000000 		.long	0
 2100 0008 00000000 		.long	0
 2101 000c 0000C03F 		.long	1069547520
 2102 0010 0000003F 		.long	1056964608
 2103 0014 00000000 		.long	0
 2104 0018 00000000 		.long	0
 2105 001c 0000E0C0 		.long	3235905536
 2106              		.section	.rodata.cst8,"aM",@progbits,8
 2107              		.align 8
 2108              	.LC11:
 2109 0000 00000000 		.long	0
 2110 0004 00004E40 		.long	1078853632
 2111              		.align 8
 2112              	.LC12:
 2113 0008 00000000 		.long	0
 2114 000c 008076C0 		.long	-1065975808
 2115              		.align 8
 2116              	.LC13:
 2117 0010 00000000 		.long	0
 2118 0014 00002840 		.long	1076363264
 2119              		.section	.rodata.cst4,"aM",@progbits,4
 2120              		.align 4
 2121              	.LC15:
 2122 0000 0000003F 		.long	1056964608
 2123              		.section	.rodata.cst8
 2124              		.align 8
 2125              	.LC16:
 2126 0018 00000000 		.long	0
 2127 001c 0000E03F 		.long	1071644672
 2128              		.align 8
 2129              	.LC17:
 2130 0020 00000000 		.long	0
 2131 0024 0000F03F 		.long	1072693248
 2132              		.align 8
 2133              	.LC19:
 2134 0028 00000000 		.long	0
 2135 002c 00003C40 		.long	1077673984
 2136              		.align 8
 2137              	.LC20:
 2138 0030 00000000 		.long	0
 2139 0034 00002C40 		.long	1076625408
 2140              		.align 8
 2141              	.LC21:
 2142 0038 33333333 		.long	858993459
 2143 003c 3333E33F 		.long	1071854387
 2144              		.align 8
 2145              	.LC22:
 2146 0040 00000000 		.long	0
 2147 0044 00000040 		.long	1073741824
 2148              		.align 8
 2149              	.LC23:
 2150 0048 00000000 		.long	0
 2151 004c 00002240 		.long	1075970048
 2152              		.align 8
 2153              	.LC24:
 2154 0050 00000000 		.long	0
 2155 0054 0000E0BF 		.long	-1075838976
 2156              		.align 8
 2157              	.LC25:
 2158 0058 00000000 		.long	0
 2159 005c 00003EC0 		.long	-1069678592
 2160              		.align 8
 2161              	.LC26:
 2162 0060 00000000 		.long	0
 2163 0064 00002340 		.long	1076035584
 2164              		.align 8
 2165              	.LC27:
 2166 0068 00000000 		.long	0
 2167 006c 0000D0BF 		.long	-1076887552
 2168              		.text
 2169              	.Letext0:
 2170              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 2171              	.Letext_cold0:
 2172              		.file 7 "fltk-1.3.4-1/FL/fl_types.h"
 2173              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2174              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2175              		.file 10 "/usr/include/libio.h"
 2176              		.file 11 "/usr/include/time.h"
 2177              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
 2178              		.file 13 "fltk-1.3.4-1/FL/Fl.H"
 2179              		.file 14 "fltk-1.3.4-1/FL/Fl_Image.H"
 2180              		.file 15 "/usr/include/x86_64-linux-gnu/sys/time.h"
 2181              		.file 16 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Clock.cxx
     /tmp/ccjoGGea.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccjoGGea.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccjoGGea.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccjoGGea.s:86     .text._ZL4rectdddd:0000000000000000 _ZL4rectdddd
     /tmp/ccjoGGea.s:203    .text._ZL8drawhanddPA2_Kfjj:0000000000000000 _ZL8drawhanddPA2_Kfjj
     /tmp/ccjoGGea.s:401    .text._ZN15Fl_Clock_OutputD2Ev:0000000000000000 _ZN15Fl_Clock_OutputD2Ev
     /tmp/ccjoGGea.s:2036   .rodata._ZTV15Fl_Clock_Output:0000000000000000 _ZTV15Fl_Clock_Output
     /tmp/ccjoGGea.s:401    .text._ZN15Fl_Clock_OutputD2Ev:0000000000000000 _ZN15Fl_Clock_OutputD1Ev
     /tmp/ccjoGGea.s:431    .text._ZN15Fl_Clock_OutputD0Ev:0000000000000000 _ZN15Fl_Clock_OutputD0Ev
     /tmp/ccjoGGea.s:470    .text._ZN8Fl_ClockD2Ev:0000000000000000 _ZN8Fl_ClockD2Ev
     /tmp/ccjoGGea.s:2054   .rodata._ZTV8Fl_Clock:0000000000000000 _ZTV8Fl_Clock
     /tmp/ccjoGGea.s:1501   .text._ZL4tickPv:0000000000000000 _ZL4tickPv
     /tmp/ccjoGGea.s:470    .text._ZN8Fl_ClockD2Ev:0000000000000000 _ZN8Fl_ClockD1Ev
     /tmp/ccjoGGea.s:530    .text._ZN8Fl_ClockD0Ev:0000000000000000 _ZN8Fl_ClockD0Ev
     /tmp/ccjoGGea.s:588    .text._ZN14Fl_Round_ClockD2Ev:0000000000000000 _ZN14Fl_Round_ClockD2Ev
     /tmp/ccjoGGea.s:588    .text._ZN14Fl_Round_ClockD2Ev:0000000000000000 _ZN14Fl_Round_ClockD1Ev
     /tmp/ccjoGGea.s:662    .text._ZN14Fl_Round_ClockD0Ev:0000000000000000 _ZN14Fl_Round_ClockD0Ev
     /tmp/ccjoGGea.s:729    .text._ZN15Fl_Clock_Output9drawhandsEjj:0000000000000000 _ZN15Fl_Clock_Output9drawhandsEjj
     /tmp/ccjoGGea.s:2097   .rodata._ZL8hourhand:0000000000000000 _ZL8hourhand
     /tmp/ccjoGGea.s:2084   .rodata._ZL7minhand:0000000000000000 _ZL7minhand
     /tmp/ccjoGGea.s:2071   .rodata._ZL7sechand:0000000000000000 _ZL7sechand
     /tmp/ccjoGGea.s:832    .text._ZN15Fl_Clock_Output4drawEiiii:0000000000000000 _ZN15Fl_Clock_Output4drawEiiii
     /tmp/ccjoGGea.s:1341   .text._ZN15Fl_Clock_Output4drawEv:0000000000000000 _ZN15Fl_Clock_Output4drawEv
     /tmp/ccjoGGea.s:1384   .text._ZN15Fl_Clock_Output5valueEiii:0000000000000000 _ZN15Fl_Clock_Output5valueEiii
     /tmp/ccjoGGea.s:1440   .text._ZN15Fl_Clock_Output5valueEm:0000000000000000 _ZN15Fl_Clock_Output5valueEm
     /tmp/ccjoGGea.s:1547   .text._ZN8Fl_Clock6handleEi:0000000000000000 _ZN8Fl_Clock6handleEi
     /tmp/ccjoGGea.s:1630   .text._ZN15Fl_Clock_OutputC2EiiiiPKc:0000000000000000 _ZN15Fl_Clock_OutputC2EiiiiPKc
     /tmp/ccjoGGea.s:1630   .text._ZN15Fl_Clock_OutputC2EiiiiPKc:0000000000000000 _ZN15Fl_Clock_OutputC1EiiiiPKc
     /tmp/ccjoGGea.s:1699   .text._ZN8Fl_ClockC2EiiiiPKc:0000000000000000 _ZN8Fl_ClockC2EiiiiPKc
     /tmp/ccjoGGea.s:1699   .text._ZN8Fl_ClockC2EiiiiPKc:0000000000000000 _ZN8Fl_ClockC1EiiiiPKc
     /tmp/ccjoGGea.s:1772   .text._ZN8Fl_ClockC2EhiiiiPKc:0000000000000000 _ZN8Fl_ClockC2EhiiiiPKc
     /tmp/ccjoGGea.s:1772   .text._ZN8Fl_ClockC2EhiiiiPKc:0000000000000000 _ZN8Fl_ClockC1EhiiiiPKc
     /tmp/ccjoGGea.s:1890   .text._ZN14Fl_Round_ClockC2EiiiiPKc:0000000000000000 _ZN14Fl_Round_ClockC2EiiiiPKc
     /tmp/ccjoGGea.s:2018   .rodata._ZTV14Fl_Round_Clock:0000000000000000 _ZTV14Fl_Round_Clock
     /tmp/ccjoGGea.s:1890   .text._ZN14Fl_Round_ClockC2EiiiiPKc:0000000000000000 _ZN14Fl_Round_ClockC1EiiiiPKc
     /tmp/ccjoGGea.s:1970   .rodata._ZTS15Fl_Clock_Output:0000000000000000 _ZTS15Fl_Clock_Output
     /tmp/ccjoGGea.s:1977   .rodata._ZTI15Fl_Clock_Output:0000000000000000 _ZTI15Fl_Clock_Output
     /tmp/ccjoGGea.s:1986   .rodata._ZTS8Fl_Clock:0000000000000000 _ZTS8Fl_Clock
     /tmp/ccjoGGea.s:1993   .rodata._ZTI8Fl_Clock:0000000000000000 _ZTI8Fl_Clock
     /tmp/ccjoGGea.s:2002   .rodata._ZTS14Fl_Round_Clock:0000000000000000 _ZTS14Fl_Round_Clock
     /tmp/ccjoGGea.s:2009   .rodata._ZTI14Fl_Round_Clock:0000000000000000 _ZTI14Fl_Round_Clock
     /tmp/ccjoGGea.s:2108   .rodata.cst8:0000000000000000 .LC11
     /tmp/ccjoGGea.s:2112   .rodata.cst8:0000000000000008 .LC12
     /tmp/ccjoGGea.s:2116   .rodata.cst8:0000000000000010 .LC13
     /tmp/ccjoGGea.s:2121   .rodata.cst4:0000000000000000 .LC15
     /tmp/ccjoGGea.s:2129   .rodata.cst8:0000000000000020 .LC17
     /tmp/ccjoGGea.s:2125   .rodata.cst8:0000000000000018 .LC16
     /tmp/ccjoGGea.s:2133   .rodata.cst8:0000000000000028 .LC19
     /tmp/ccjoGGea.s:2141   .rodata.cst8:0000000000000038 .LC21
     /tmp/ccjoGGea.s:2161   .rodata.cst8:0000000000000060 .LC26
     /tmp/ccjoGGea.s:2165   .rodata.cst8:0000000000000068 .LC27
     /tmp/ccjoGGea.s:2157   .rodata.cst8:0000000000000058 .LC25
     /tmp/ccjoGGea.s:2153   .rodata.cst8:0000000000000050 .LC24
     /tmp/ccjoGGea.s:2137   .rodata.cst8:0000000000000030 .LC20
     /tmp/ccjoGGea.s:2145   .rodata.cst8:0000000000000040 .LC22
     /tmp/ccjoGGea.s:2149   .rodata.cst8:0000000000000048 .LC23
                           .group:0000000000000000 _ZN15Fl_Clock_OutputD5Ev
                           .group:0000000000000000 _ZN14Fl_Round_ClockD5Ev
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
                           .group:0000000000000000 wm4.Fl_Clock.H.30.ed80feda76f17c3d420e35beaa2a4b79
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
                           .group:0000000000000000 wm4.time.h.26.6a3cabd4f228e226db6723a3b0c81ba6
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.time.h.40.feab7216a531c47d425d6de002dd2384
                           .group:0000000000000000 wm4.timex.h.19.f552c10b6e10e54ec2c0920b0cef94ab
                           .group:0000000000000000 wm4.time.h.66.3030613ea56472141d4f6280f80765e8
                           .group:0000000000000000 wm4.time.h.19.a0b53efe7c8e6bd8aa0b2fb0266c6caf
                           .group:0000000000000000 wm4.time.h.41.5a35bb669dafc1d1b5aef98ad89e8a02

UNDEFINED SYMBOLS
fl_graphics_driver
_ZN18Fl_Graphics_Driver11push_matrixEv
_ZN18Fl_Graphics_Driver6rotateEd
_ZN18Fl_Graphics_Driver10pop_matrixEv
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN2Fl14remove_timeoutEPFvPvES0_
_ZNK9Fl_Widget8active_rEv
_Z11fl_inactivej
_Z16fl_color_averagejjf
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
_ZNK9Fl_Widget10draw_labelEv
_ZN9Fl_Widget6damageEh
localtime
__stack_chk_fail
time
_ZN2Fl11add_timeoutEdPFvPvES0_
_ZN9Fl_Widget6handleEi
_ZN9Fl_WidgetC2EiiiiPKc
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Widget
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
