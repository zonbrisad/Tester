   1              		.file	"Fl_Valuator.cxx"
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
  80              		.section	.text.unlikely._ZN11Fl_Valuator12value_damageEv,"ax",@progbits
  81              		.align 2
  82              	.LCOLDB3:
  83              		.section	.text._ZN11Fl_Valuator12value_damageEv,"ax",@progbits
  84              	.LHOTB3:
  85              		.align 2
  86              		.p2align 4,,15
  87              		.globl	_ZN11Fl_Valuator12value_damageEv
  89              	_ZN11Fl_Valuator12value_damageEv:
  90              	.LFB274:
  91              		.file 2 "fltk-1.3.4-1/src/Fl_Valuator.cxx"
   1:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    1              		.file	"Fl_Valuator.cxx"
   2:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Valuator.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  92              		.loc 2 70 0
  93              		.cfi_startproc
  94              	.LVL3:
  95              		.loc 2 70 0
  96 0000 BE020000 		movl	$2, %esi
  96      00
  97 0005 E9000000 		jmp	_ZN9Fl_Widget6damageEh
  97      00
  98              	.LVL4:
  99              		.cfi_endproc
 100              	.LFE274:
 102              		.section	.text.unlikely._ZN11Fl_Valuator12value_damageEv
 103              	.LCOLDE3:
 104              		.section	.text._ZN11Fl_Valuator12value_damageEv
 105              	.LHOTE3:
 106              		.section	.rodata.str1.1,"aMS",@progbits,1
 107              	.LC5:
 108 0000 256700   		.string	"%g"
 109              	.LC6:
 110 0003 252E3132 		.string	"%.12f"
 110      6600
 111              	.LC7:
 112 0009 252E2A66 		.string	"%.*f"
 112      00
 113              		.section	.text.unlikely._ZN11Fl_Valuator6formatEPc,"ax",@progbits
 114              		.align 2
 115              	.LCOLDB8:
 116              		.section	.text._ZN11Fl_Valuator6formatEPc,"ax",@progbits
 117              	.LHOTB8:
 118              		.align 2
 119              		.p2align 4,,15
 120              		.globl	_ZN11Fl_Valuator6formatEPc
 122              	_ZN11Fl_Valuator6formatEPc:
 123              	.LFB282:
  71:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 124              		.loc 2 170 0
 125              		.cfi_startproc
 126              	.LVL5:
 127 0000 55       		pushq	%rbp
 128              		.cfi_def_cfa_offset 16
 129              		.cfi_offset 6, -16
 130 0001 53       		pushq	%rbx
 131              		.cfi_def_cfa_offset 24
 132              		.cfi_offset 3, -24
 133 0002 4889F3   		movq	%rsi, %rbx
 134 0005 4883EC48 		subq	$72, %rsp
 135              		.cfi_def_cfa_offset 96
 171:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 136              		.loc 2 173 0
 137 0009 F20F1087 		movsd	152(%rdi), %xmm0
 137      98000000 
 170:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 138              		.loc 2 170 0
 139 0011 64488B04 		movq	%fs:40, %rax
 139      25280000 
 139      00
 140 001a 48894424 		movq	%rax, 56(%rsp)
 140      38
 141 001f 31C0     		xorl	%eax, %eax
 142              		.loc 2 173 0
 143 0021 660F2E05 		ucomisd	.LC4(%rip), %xmm0
 143      00000000 
 144 0029 F20F1057 		movsd	120(%rdi), %xmm2
 144      78
 145              	.LVL6:
 146 002e 7A02     		jp	.L24
 147 0030 740A     		je	.L6
 148              	.L24:
 149              		.loc 2 173 0 is_stmt 0 discriminator 2
 150 0032 8B87A000 		movl	160(%rdi), %eax
 150      0000
 151 0038 85C0     		testl	%eax, %eax
 152 003a 7544     		jne	.L8
 153              	.L6:
 154              	.LVL7:
 155              	.LBB37:
 156              	.LBB38:
 157              		.file 3 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 158              		.loc 3 65 0 is_stmt 1
 159 003c 660F28C2 		movapd	%xmm2, %xmm0
 160 0040 41B80000 		movl	$.LC5, %r8d
 160      0000
 161 0046 48C7C1FF 		movq	$-1, %rcx
 161      FFFFFF
 162 004d BA010000 		movl	$1, %edx
 162      00
 163 0052 BE800000 		movl	$128, %esi
 163      00
 164              	.LVL8:
 165 0057 4889DF   		movq	%rbx, %rdi
 166              	.LVL9:
 167 005a B8010000 		movl	$1, %eax
 167      00
 168 005f E8000000 		call	__snprintf_chk
 168      00
 169              	.LVL10:
 170              	.L9:
 171              	.LBE38:
 172              	.LBE37:
 174:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 173              		.loc 2 194 0
 174 0064 488B5C24 		movq	56(%rsp), %rbx
 174      38
 175 0069 6448331C 		xorq	%fs:40, %rbx
 175      25280000 
 175      00
 176              	.LVL11:
 177 0072 0F85FD00 		jne	.L32
 177      0000
 178 0078 4883C448 		addq	$72, %rsp
 179              		.cfi_remember_state
 180              		.cfi_def_cfa_offset 24
 181 007c 5B       		popq	%rbx
 182              		.cfi_def_cfa_offset 16
 183 007d 5D       		popq	%rbp
 184              		.cfi_def_cfa_offset 8
 185 007e C3       		ret
 186              	.LVL12:
 187 007f 90       		.p2align 4,,10
 188              		.p2align 3
 189              	.L8:
 190              		.cfi_restore_state
 191              	.LBB39:
 192              	.LBB40:
 193              		.loc 3 65 0
 194 0080 660FEFC9 		pxor	%xmm1, %xmm1
 195 0084 488D6C24 		leaq	16(%rsp), %rbp
 195      10
 196 0089 41B80000 		movl	$.LC6, %r8d
 196      0000
 197 008f B9200000 		movl	$32, %ecx
 197      00
 198 0094 BA010000 		movl	$1, %edx
 198      00
 199 0099 BE200000 		movl	$32, %esi
 199      00
 200 009e 4889EF   		movq	%rbp, %rdi
 201              	.LVL13:
 202 00a1 F20F1154 		movsd	%xmm2, 8(%rsp)
 202      2408
 203              	.LVL14:
 204 00a7 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 205 00ab B8010000 		movl	$1, %eax
 205      00
 206 00b0 F20F5EC1 		divsd	%xmm1, %xmm0
 207 00b4 E8000000 		call	__snprintf_chk
 207      00
 208              	.LVL15:
 209              	.LBE40:
 210              	.LBE39:
 183:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 211              		.loc 2 183 0
 212 00b9 F20F1054 		movsd	8(%rsp), %xmm2
 212      2408
 213 00bf 4889E8   		movq	%rbp, %rax
 214              	.L10:
 215 00c2 8B08     		movl	(%rax), %ecx
 216 00c4 4883C004 		addq	$4, %rax
 217 00c8 8D91FFFE 		leal	-16843009(%rcx), %edx
 217      FEFE
 218 00ce F7D1     		notl	%ecx
 219 00d0 21CA     		andl	%ecx, %edx
 220 00d2 81E28080 		andl	$-2139062144, %edx
 220      8080
 221 00d8 74E8     		je	.L10
 222 00da 89D1     		movl	%edx, %ecx
 223 00dc C1E910   		shrl	$16, %ecx
 224 00df F7C28080 		testl	$32896, %edx
 224      0000
 225 00e5 0F44D1   		cmove	%ecx, %edx
 226 00e8 488D4802 		leaq	2(%rax), %rcx
 227 00ec 89D6     		movl	%edx, %esi
 228 00ee 480F44C1 		cmove	%rcx, %rax
 229 00f2 4000D6   		addb	%dl, %sil
 230 00f5 4883D803 		sbbq	$3, %rax
 231 00f9 4829E8   		subq	%rbp, %rax
 232 00fc 83E801   		subl	$1, %eax
 233              	.LVL16:
 234 00ff 85C0     		testl	%eax, %eax
 235 0101 7F0A     		jg	.L27
 236 0103 EB6B     		jmp	.L23
 237              		.p2align 4,,10
 238 0105 0F1F00   		.p2align 3
 239              	.L33:
 240              	.LVL17:
 183:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 241              		.loc 2 183 0 is_stmt 0 discriminator 2
 242 0108 83E801   		subl	$1, %eax
 243              	.LVL18:
 244 010b 7463     		je	.L23
 245              	.L27:
 184:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 246              		.loc 2 184 0 is_stmt 1
 247 010d 4863D0   		movslq	%eax, %rdx
 248 0110 0FBE5414 		movsbl	16(%rsp,%rdx), %edx
 248      10
 249 0115 80FA30   		cmpb	$48, %dl
 250 0118 74EE     		je	.L33
 189:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 251              		.loc 2 189 0
 252 011a 83EA30   		subl	$48, %edx
 253 011d 83FA09   		cmpl	$9, %edx
 254 0120 774E     		ja	.L23
 255 0122 4531C9   		xorl	%r9d, %r9d
 256              	.LVL19:
 257              		.p2align 4,,10
 258 0125 0F1F00   		.p2align 3
 259              	.L17:
 188:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 260              		.loc 2 188 0
 261 0128 4183C101 		addl	$1, %r9d
 262              	.LVL20:
 263 012c 83E801   		subl	$1, %eax
 264              	.LVL21:
 265 012f 7410     		je	.L12
 189:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 266              		.loc 2 189 0
 267 0131 4863D0   		movslq	%eax, %rdx
 268 0134 0FBE5414 		movsbl	16(%rsp,%rdx), %edx
 268      10
 269 0139 83EA30   		subl	$48, %edx
 270 013c 83FA09   		cmpl	$9, %edx
 271 013f 76E7     		jbe	.L17
 272              	.LVL22:
 273              	.L12:
 274              	.LBB41:
 275              	.LBB42:
 276              		.loc 3 65 0
 277 0141 660F28C2 		movapd	%xmm2, %xmm0
 278 0145 41B80000 		movl	$.LC7, %r8d
 278      0000
 279 014b 48C7C1FF 		movq	$-1, %rcx
 279      FFFFFF
 280 0152 BA010000 		movl	$1, %edx
 280      00
 281 0157 BE800000 		movl	$128, %esi
 281      00
 282 015c 4889DF   		movq	%rbx, %rdi
 283 015f B8010000 		movl	$1, %eax
 283      00
 284              	.LVL23:
 285 0164 E8000000 		call	__snprintf_chk
 285      00
 286              	.LVL24:
 287              	.LBE42:
 288              	.LBE41:
 193:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 289              		.loc 2 193 0
 290 0169 E9F6FEFF 		jmp	.L9
 290      FF
 291              	.LVL25:
 292 016e 6690     		.p2align 4,,10
 293              		.p2align 3
 294              	.L23:
 189:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 295              		.loc 2 189 0
 296 0170 4531C9   		xorl	%r9d, %r9d
 297 0173 EBCC     		jmp	.L12
 298              	.LVL26:
 299              	.L32:
 300              		.loc 2 194 0
 301 0175 E8000000 		call	__stack_chk_fail
 301      00
 302              	.LVL27:
 303              		.cfi_endproc
 304              	.LFE282:
 306              		.section	.text.unlikely._ZN11Fl_Valuator6formatEPc
 307              	.LCOLDE8:
 308              		.section	.text._ZN11Fl_Valuator6formatEPc
 309              	.LHOTE8:
 310              		.section	.text.unlikely._ZN11Fl_ValuatorC2EiiiiPKc,"ax",@progbits
 311              		.align 2
 312              	.LCOLDB10:
 313              		.section	.text._ZN11Fl_ValuatorC2EiiiiPKc,"ax",@progbits
 314              	.LHOTB10:
 315              		.align 2
 316              		.p2align 4,,15
 317              		.globl	_ZN11Fl_ValuatorC2EiiiiPKc
 319              	_ZN11Fl_ValuatorC2EiiiiPKc:
 320              	.LFB270:
  28:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
 321              		.loc 2 28 0
 322              		.cfi_startproc
 323              	.LVL28:
 324 0000 53       		pushq	%rbx
 325              		.cfi_def_cfa_offset 16
 326              		.cfi_offset 3, -16
  28:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
 327              		.loc 2 28 0
 328 0001 4889FB   		movq	%rdi, %rbx
 329              	.LBB43:
  33:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 330              		.loc 2 33 0
 331 0004 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 331      00
 332              	.LVL29:
  36:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 333              		.loc 2 36 0
 334 0009 660FEFC0 		pxor	%xmm0, %xmm0
  33:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 335              		.loc 2 33 0
 336 000d 48C70300 		movq	$_ZTV11Fl_Valuator+16, (%rbx)
 336      000000
 337              	.LVL30:
  37:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 338              		.loc 2 37 0
 339 0014 F20F100D 		movsd	.LC9(%rip), %xmm1
 339      00000000 
 340              	.LBB44:
 341              	.LBB45:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342              		.loc 1 357 0
 343 001c C7435402 		movl	$2, 84(%rbx)
 343      000000
 344              	.LVL31:
 345              	.LBE45:
 346              	.LBE44:
 347              	.LBB46:
 348              	.LBB47:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 349              		.loc 1 654 0
 350 0023 C6436F01 		movb	$1, 111(%rbx)
 351              	.LVL32:
 352              	.LBE47:
 353              	.LBE46:
  41:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 354              		.loc 2 41 0
 355 0027 C783A000 		movl	$1, 160(%rbx)
 355      00000100 
 355      0000
  36:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 356              		.loc 2 36 0
 357 0031 F20F1143 		movsd	%xmm0, 120(%rbx)
 357      78
  37:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 358              		.loc 2 37 0
 359 0036 F20F118B 		movsd	%xmm1, 128(%rbx)
 359      80000000 
  38:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 360              		.loc 2 38 0
 361 003e F20F1183 		movsd	%xmm0, 136(%rbx)
 361      88000000 
  39:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 362              		.loc 2 39 0
 363 0046 F20F118B 		movsd	%xmm1, 144(%rbx)
 363      90000000 
  40:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 364              		.loc 2 40 0
 365 004e F20F1183 		movsd	%xmm0, 152(%rbx)
 365      98000000 
 366              	.LBE43:
  42:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367              		.loc 2 42 0
 368 0056 5B       		popq	%rbx
 369              		.cfi_def_cfa_offset 8
 370              	.LVL33:
 371 0057 C3       		ret
 372              		.cfi_endproc
 373              	.LFE270:
 375              		.section	.text.unlikely._ZN11Fl_ValuatorC2EiiiiPKc
 376              	.LCOLDE10:
 377              		.section	.text._ZN11Fl_ValuatorC2EiiiiPKc
 378              	.LHOTE10:
 379              		.globl	_ZN11Fl_ValuatorC1EiiiiPKc
 380              		.set	_ZN11Fl_ValuatorC1EiiiiPKc,_ZN11Fl_ValuatorC2EiiiiPKc
 381              		.section	.text.unlikely._ZN11Fl_Valuator4stepEd,"ax",@progbits
 382              		.align 2
 383              	.LCOLDB14:
 384              		.section	.text._ZN11Fl_Valuator4stepEd,"ax",@progbits
 385              	.LHOTB14:
 386              		.align 2
 387              		.p2align 4,,15
 388              		.globl	_ZN11Fl_Valuator4stepEd
 390              	_ZN11Fl_Valuator4stepEd:
 391              	.LFB272:
  47:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 392              		.loc 2 47 0
 393              		.cfi_startproc
 394              	.LVL34:
 395 0000 660F28C8 		movapd	%xmm0, %xmm1
 396 0004 53       		pushq	%rbx
 397              		.cfi_def_cfa_offset 16
 398              		.cfi_offset 3, -16
  48:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 399              		.loc 2 48 0
 400 0005 660FEFC0 		pxor	%xmm0, %xmm0
 401              	.LVL35:
  47:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 402              		.loc 2 47 0
 403 0009 4889FB   		movq	%rdi, %rbx
 404 000c 4883EC10 		subq	$16, %rsp
 405              		.cfi_def_cfa_offset 32
  48:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 406              		.loc 2 48 0
 407 0010 660F2EC1 		ucomisd	%xmm1, %xmm0
 408 0014 0F87C600 		ja	.L45
 408      0000
 409              	.LVL36:
 410              	.L37:
  49:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 411              		.loc 2 49 0
 412 001a 660F28C1 		movapd	%xmm1, %xmm0
 413 001e F20F114C 		movsd	%xmm1, 8(%rsp)
 413      2408
 414 0024 E8000000 		call	rint
 414      00
 415              	.LVL37:
  51:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 416              		.loc 2 51 0
 417 0029 F20F104C 		movsd	8(%rsp), %xmm1
 417      2408
  50:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 418              		.loc 2 50 0
 419 002f C783A000 		movl	$1, 160(%rbx)
 419      00000100 
 419      0000
  49:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 420              		.loc 2 49 0
 421 0039 F20F1183 		movsd	%xmm0, 152(%rbx)
 421      98000000 
  51:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 422              		.loc 2 51 0
 423 0041 B8010000 		movl	$1, %eax
 423      00
 424 0046 660F28E1 		movapd	%xmm1, %xmm4
 425 004a F20F5CE0 		subsd	%xmm0, %xmm4
 426 004e 660F28C4 		movapd	%xmm4, %xmm0
 427 0052 660F5405 		andpd	.LC12(%rip), %xmm0
 427      00000000 
 428 005a 660F2E05 		ucomisd	.LC13(%rip), %xmm0
 428      00000000 
 429 0062 7671     		jbe	.L36
 430              	.LVL38:
 431              		.p2align 4,,10
 432 0064 0F1F4000 		.p2align 3
 433              	.L43:
  51:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 434              		.loc 2 51 0 is_stmt 0 discriminator 2
 435 0068 8D0480   		leal	(%rax,%rax,4), %eax
 436 006b 660FEFC0 		pxor	%xmm0, %xmm0
 437 006f F20F114C 		movsd	%xmm1, 8(%rsp)
 437      2408
 438 0075 01C0     		addl	%eax, %eax
 439 0077 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 440 007b 8983A000 		movl	%eax, 160(%rbx)
 440      0000
 441 0081 F20F59C1 		mulsd	%xmm1, %xmm0
 442 0085 E8000000 		call	rint
 442      00
 443              	.LVL39:
 444 008a 8B83A000 		movl	160(%rbx), %eax
 444      0000
 445 0090 660FEFD2 		pxor	%xmm2, %xmm2
 446 0094 F20F1183 		movsd	%xmm0, 152(%rbx)
 446      98000000 
 447 009c F20F104C 		movsd	8(%rsp), %xmm1
 447      2408
 448 00a2 F20F2AD0 		cvtsi2sd	%eax, %xmm2
 449 00a6 660F28D9 		movapd	%xmm1, %xmm3
 450 00aa F20F5EC2 		divsd	%xmm2, %xmm0
 451 00ae F20F5CD8 		subsd	%xmm0, %xmm3
 452 00b2 660F28C3 		movapd	%xmm3, %xmm0
 453 00b6 660F5405 		andpd	.LC12(%rip), %xmm0
 453      00000000 
 454 00be 660F2E05 		ucomisd	.LC13(%rip), %xmm0
 454      00000000 
 455 00c6 0F97C1   		seta	%cl
 456 00c9 3DCCCCCC 		cmpl	$214748364, %eax
 456      0C
 457 00ce 0F9FC2   		setg	%dl
 458 00d1 38D1     		cmpb	%dl, %cl
 459 00d3 7793     		ja	.L43
 460              	.L36:
  52:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 461              		.loc 2 52 0 is_stmt 1
 462 00d5 4883C410 		addq	$16, %rsp
 463              		.cfi_remember_state
 464              		.cfi_def_cfa_offset 16
 465 00d9 5B       		popq	%rbx
 466              		.cfi_def_cfa_offset 8
 467              	.LVL40:
 468 00da C3       		ret
 469              	.LVL41:
 470 00db 0F1F4400 		.p2align 4,,10
 470      00
 471              		.p2align 3
 472              	.L45:
 473              		.cfi_restore_state
  48:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 474              		.loc 2 48 0 discriminator 1
 475 00e0 F20F1005 		movsd	.LC11(%rip), %xmm0
 475      00000000 
 476 00e8 660F57C8 		xorpd	%xmm0, %xmm1
 477              	.LVL42:
 478 00ec E929FFFF 		jmp	.L37
 478      FF
 479              		.cfi_endproc
 480              	.LFE272:
 482              		.section	.text.unlikely._ZN11Fl_Valuator4stepEd
 483              	.LCOLDE14:
 484              		.section	.text._ZN11Fl_Valuator4stepEd
 485              	.LHOTE14:
 486              		.section	.text.unlikely._ZN11Fl_Valuator9precisionEi,"ax",@progbits
 487              		.align 2
 488              	.LCOLDB15:
 489              		.section	.text._ZN11Fl_Valuator9precisionEi,"ax",@progbits
 490              	.LHOTB15:
 491              		.align 2
 492              		.p2align 4,,15
 493              		.globl	_ZN11Fl_Valuator9precisionEi
 495              	_ZN11Fl_Valuator9precisionEi:
 496              	.LFB273:
  62:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 497              		.loc 2 62 0
 498              		.cfi_startproc
 499              	.LVL43:
 500 0000 85F6     		testl	%esi, %esi
 501 0002 B8000000 		movl	$0, %eax
 501      00
  66:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 502              		.loc 2 66 0
 503 0007 C787A000 		movl	$1, 160(%rdi)
 503      00000100 
 503      0000
 504 0011 0F48F0   		cmovs	%eax, %esi
 505              	.LVL44:
 506 0014 B8090000 		movl	$9, %eax
 506      00
 507 0019 83FE09   		cmpl	$9, %esi
  65:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 508              		.loc 2 65 0
 509 001c F20F1005 		movsd	.LC9(%rip), %xmm0
 509      00000000 
 510 0024 0F4FF0   		cmovg	%eax, %esi
 511              	.LVL45:
  66:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 512              		.loc 2 66 0
 513 0027 B8010000 		movl	$1, %eax
 513      00
 514 002c 85F6     		testl	%esi, %esi
  65:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 515              		.loc 2 65 0
 516 002e F20F1187 		movsd	%xmm0, 152(%rdi)
 516      98000000 
  66:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 517              		.loc 2 66 0
 518 0036 8D56FF   		leal	-1(%rsi), %edx
 519              	.LVL46:
 520 0039 7418     		je	.L46
 521 003b 0F1F4400 		.p2align 4,,10
 521      00
 522              		.p2align 3
 523              	.L50:
  66:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 524              		.loc 2 66 0 is_stmt 0 discriminator 2
 525 0040 8D0480   		leal	(%rax,%rax,4), %eax
 526 0043 83EA01   		subl	$1, %edx
 527              	.LVL47:
 528 0046 01C0     		addl	%eax, %eax
 529              	.LVL48:
 530 0048 83FAFF   		cmpl	$-1, %edx
 531 004b 75F3     		jne	.L50
 532 004d 8987A000 		movl	%eax, 160(%rdi)
 532      0000
 533              	.L46:
 534 0053 F3C3     		rep ret
 535              		.cfi_endproc
 536              	.LFE273:
 538              		.section	.text.unlikely._ZN11Fl_Valuator9precisionEi
 539              	.LCOLDE15:
 540              		.section	.text._ZN11Fl_Valuator9precisionEi
 541              	.LHOTE15:
 542              		.section	.text.unlikely._ZN11Fl_Valuator5valueEd,"ax",@progbits
 543              		.align 2
 544              	.LCOLDB16:
 545              		.section	.text._ZN11Fl_Valuator5valueEd,"ax",@progbits
 546              	.LHOTB16:
 547              		.align 2
 548              		.p2align 4,,15
 549              		.globl	_ZN11Fl_Valuator5valueEd
 551              	_ZN11Fl_Valuator5valueEd:
 552              	.LFB275:
  83:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 553              		.loc 2 83 0 is_stmt 1
 554              		.cfi_startproc
 555              	.LVL49:
 556 0000 4883EC08 		subq	$8, %rsp
 557              		.cfi_def_cfa_offset 16
 558              	.LBB48:
 559              	.LBB49:
 791:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 560              		.loc 1 791 0
 561 0004 8167607F 		andl	$-129, 96(%rdi)
 561      FFFFFF
 562              	.LBE49:
 563              	.LBE48:
  85:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 564              		.loc 2 85 0
 565 000b 660F2E47 		ucomisd	120(%rdi), %xmm0
 565      78
 566 0010 7A0E     		jp	.L56
 567 0012 B8000000 		movl	$0, %eax
 567      00
 568 0017 7507     		jne	.L56
  89:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 569              		.loc 2 89 0
 570 0019 4883C408 		addq	$8, %rsp
 571              		.cfi_remember_state
 572              		.cfi_def_cfa_offset 8
 573 001d C3       		ret
 574 001e 6690     		.p2align 4,,10
 575              		.p2align 3
 576              	.L56:
 577              		.cfi_restore_state
  87:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 578              		.loc 2 87 0
 579 0020 488B07   		movq	(%rdi), %rax
  86:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 580              		.loc 2 86 0
 581 0023 F20F1147 		movsd	%xmm0, 120(%rdi)
 581      78
  87:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 582              		.loc 2 87 0
 583 0028 FF5050   		call	*80(%rax)
 584              	.LVL50:
  88:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 585              		.loc 2 88 0
 586 002b B8010000 		movl	$1, %eax
 586      00
  89:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 587              		.loc 2 89 0
 588 0030 4883C408 		addq	$8, %rsp
 589              		.cfi_def_cfa_offset 8
 590 0034 C3       		ret
 591              		.cfi_endproc
 592              	.LFE275:
 594              		.section	.text.unlikely._ZN11Fl_Valuator5valueEd
 595              	.LCOLDE16:
 596              		.section	.text._ZN11Fl_Valuator5valueEd
 597              	.LHOTE16:
 598              		.section	.text.unlikely._ZN11Fl_Valuator9softclampEd,"ax",@progbits
 599              		.align 2
 600              	.LCOLDB17:
 601              		.section	.text._ZN11Fl_Valuator9softclampEd,"ax",@progbits
 602              	.LHOTB17:
 603              		.align 2
 604              		.p2align 4,,15
 605              		.globl	_ZN11Fl_Valuator9softclampEd
 607              	_ZN11Fl_Valuator9softclampEd:
 608              	.LFB276:
  91:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 609              		.loc 2 91 0
 610              		.cfi_startproc
 611              	.LVL51:
  92:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 612              		.loc 2 92 0
 613 0000 F20F108F 		movsd	136(%rdi), %xmm1
 613      88000000 
 614 0008 31C0     		xorl	%eax, %eax
 615 000a F20F1097 		movsd	144(%rdi), %xmm2
 615      90000000 
  93:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 616              		.loc 2 93 0
 617 0012 F20F109F 		movsd	128(%rdi), %xmm3
 617      80000000 
  92:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 618              		.loc 2 92 0
 619 001a 660F2ED1 		ucomisd	%xmm1, %xmm2
 620 001e 0F93C0   		setnb	%al
 621              	.LVL52:
  94:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 622              		.loc 2 94 0
 623 0021 31D2     		xorl	%edx, %edx
 624 0023 660F2EC8 		ucomisd	%xmm0, %xmm1
 625 0027 0F97C2   		seta	%dl
 626 002a 39C2     		cmpl	%eax, %edx
 627 002c 752A     		jne	.L59
 628 002e 660F2ECB 		ucomisd	%xmm3, %xmm1
 629 0032 B9010000 		movl	$1, %ecx
 629      00
 630 0037 0F9AC2   		setp	%dl
 631 003a 0F45D1   		cmovne	%ecx, %edx
 632 003d 84D2     		testb	%dl, %dl
 633 003f 7417     		je	.L59
  94:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 634              		.loc 2 94 0 is_stmt 0 discriminator 2
 635 0041 31D2     		xorl	%edx, %edx
 636 0043 660F2ECB 		ucomisd	%xmm3, %xmm1
 637 0047 0F97C2   		seta	%dl
 638 004a 39D0     		cmpl	%edx, %eax
 639 004c 740A     		je	.L59
 640              	.L60:
  97:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 641              		.loc 2 97 0 is_stmt 1
 642 004e 660F28C1 		movapd	%xmm1, %xmm0
 643              	.LVL53:
 644 0052 C3       		ret
 645              	.LVL54:
 646              		.p2align 4,,10
 647 0053 0F1F4400 		.p2align 3
 647      00
 648              	.L59:
  95:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 649              		.loc 2 95 0
 650 0058 31D2     		xorl	%edx, %edx
 651 005a 660F2EC2 		ucomisd	%xmm2, %xmm0
 652 005e 0F97C2   		seta	%dl
 653 0061 39C2     		cmpl	%eax, %edx
 654 0063 752B     		jne	.L61
 655 0065 660F2ED3 		ucomisd	%xmm3, %xmm2
 656 0069 B9010000 		movl	$1, %ecx
 656      00
 657 006e 0F9AC2   		setp	%dl
 658 0071 0F45D1   		cmovne	%ecx, %edx
 659 0074 84D2     		testb	%dl, %dl
 660 0076 7418     		je	.L61
  95:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 661              		.loc 2 95 0 is_stmt 0 discriminator 2
 662 0078 31D2     		xorl	%edx, %edx
  96:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 663              		.loc 2 96 0 is_stmt 1 discriminator 2
 664 007a 660F28C8 		movapd	%xmm0, %xmm1
  95:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 665              		.loc 2 95 0 discriminator 2
 666 007e 660F2EDA 		ucomisd	%xmm2, %xmm3
 667 0082 0F97C2   		seta	%dl
 668 0085 39D0     		cmpl	%edx, %eax
 669 0087 74C5     		je	.L60
  95:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 670              		.loc 2 95 0 is_stmt 0
 671 0089 660F28CA 		movapd	%xmm2, %xmm1
 672 008d EBBF     		jmp	.L60
 673 008f 90       		.p2align 4,,10
 674              		.p2align 3
 675              	.L61:
  96:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 676              		.loc 2 96 0 is_stmt 1
 677 0090 660F28C8 		movapd	%xmm0, %xmm1
  97:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 678              		.loc 2 97 0
 679 0094 660F28C1 		movapd	%xmm1, %xmm0
 680 0098 C3       		ret
 681              		.cfi_endproc
 682              	.LFE276:
 684              		.section	.text.unlikely._ZN11Fl_Valuator9softclampEd
 685              	.LCOLDE17:
 686              		.section	.text._ZN11Fl_Valuator9softclampEd
 687              	.LHOTE17:
 688              		.section	.text.unlikely._ZN11Fl_Valuator11handle_dragEd,"ax",@progbits
 689              		.align 2
 690              	.LCOLDB18:
 691              		.section	.text._ZN11Fl_Valuator11handle_dragEd,"ax",@progbits
 692              	.LHOTB18:
 693              		.align 2
 694              		.p2align 4,,15
 695              		.globl	_ZN11Fl_Valuator11handle_dragEd
 697              	_ZN11Fl_Valuator11handle_dragEd:
 698              	.LFB277:
 101:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 699              		.loc 2 101 0
 700              		.cfi_startproc
 701              	.LVL55:
 702 0000 53       		pushq	%rbx
 703              		.cfi_def_cfa_offset 16
 704              		.cfi_offset 3, -16
 102:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 705              		.loc 2 102 0
 706 0001 660F2E47 		ucomisd	120(%rdi), %xmm0
 706      78
 707 0006 7A08     		jp	.L76
 708 0008 7506     		jne	.L76
 709              	.LVL56:
 710              	.L75:
 108:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 711              		.loc 2 108 0
 712 000a 5B       		popq	%rbx
 713              		.cfi_remember_state
 714              		.cfi_def_cfa_offset 8
 715 000b C3       		ret
 716              	.LVL57:
 717 000c 0F1F4000 		.p2align 4,,10
 718              		.p2align 3
 719              	.L76:
 720              		.cfi_restore_state
 104:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721              		.loc 2 104 0
 722 0010 488B07   		movq	(%rdi), %rax
 723 0013 4889FB   		movq	%rdi, %rbx
 103:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 724              		.loc 2 103 0
 725 0016 F20F1147 		movsd	%xmm0, 120(%rdi)
 725      78
 104:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 726              		.loc 2 104 0
 727 001b FF5050   		call	*80(%rax)
 728              	.LVL58:
 729              	.LBB50:
 730              	.LBB51:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 731              		.loc 1 786 0
 732 001e 814B6080 		orl	$128, 96(%rbx)
 732      000000
 733              	.LVL59:
 734              	.LBE51:
 735              	.LBE50:
 106:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 736              		.loc 2 106 0
 737 0025 F6436F01 		testb	$1, 111(%rbx)
 738 0029 74DF     		je	.L75
 739              	.LVL60:
 740              	.LBB52:
 741              	.LBB53:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 742              		.loc 1 861 0 discriminator 1
 743 002b 488B5318 		movq	24(%rbx), %rdx
 744 002f 4889DE   		movq	%rbx, %rsi
 745 0032 4889DF   		movq	%rbx, %rdi
 746              	.LBE53:
 747              	.LBE52:
 108:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 748              		.loc 2 108 0 discriminator 1
 749 0035 5B       		popq	%rbx
 750              		.cfi_def_cfa_offset 8
 751              	.LVL61:
 752              	.LBB55:
 753              	.LBB54:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 754              		.loc 1 861 0 discriminator 1
 755 0036 E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 755      00
 756              	.LVL62:
 757              	.LBE54:
 758              	.LBE55:
 759              		.cfi_endproc
 760              	.LFE277:
 762              		.section	.text.unlikely._ZN11Fl_Valuator11handle_dragEd
 763              	.LCOLDE18:
 764              		.section	.text._ZN11Fl_Valuator11handle_dragEd
 765              	.LHOTE18:
 766              		.section	.text.unlikely._ZN11Fl_Valuator14handle_releaseEv,"ax",@progbits
 767              		.align 2
 768              	.LCOLDB19:
 769              		.section	.text._ZN11Fl_Valuator14handle_releaseEv,"ax",@progbits
 770              	.LHOTB19:
 771              		.align 2
 772              		.p2align 4,,15
 773              		.globl	_ZN11Fl_Valuator14handle_releaseEv
 775              	_ZN11Fl_Valuator14handle_releaseEv:
 776              	.LFB278:
 110:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 777              		.loc 2 110 0
 778              		.cfi_startproc
 779              	.LVL63:
 780 0000 0FB6476F 		movzbl	111(%rdi), %eax
 781              	.LVL64:
 111:fltk-1.3.4-1/src/Fl_Valuator.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 782              		.loc 2 111 0
 783 0004 A804     		testb	$4, %al
 784 0006 742C     		je	.L83
 785              	.LVL65:
 117:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 786              		.loc 2 117 0
 787 0008 F20F1047 		movsd	120(%rdi), %xmm0
 787      78
 788              	.LBB56:
 789              	.LBB57:
 791:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 790              		.loc 1 791 0
 791 000d 8167607F 		andl	$-129, 96(%rdi)
 791      FFFFFF
 792              	.LBE57:
 793              	.LBE56:
 117:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 794              		.loc 2 117 0
 795 0014 660F2E87 		ucomisd	128(%rdi), %xmm0
 795      80000000 
 796 001c 7A02     		jp	.L86
 797 001e 7410     		je	.L88
 798              	.LVL66:
 799              	.L86:
 800              	.LBB58:
 801              	.LBB59:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 802              		.loc 1 861 0
 803 0020 488B5718 		movq	24(%rdi), %rdx
 804 0024 4889FE   		movq	%rdi, %rsi
 805 0027 E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 805      00
 806              	.LVL67:
 807 002c 0F1F4000 		.p2align 4,,10
 808              		.p2align 3
 809              	.L88:
 810              	.LBE59:
 811              	.LBE58:
 117:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 812              		.loc 2 117 0 discriminator 2
 813 0030 A802     		testb	$2, %al
 814 0032 75EC     		jne	.L86
 815              	.LVL68:
 816              	.L83:
 817 0034 F3C3     		rep ret
 818              		.cfi_endproc
 819              	.LFE278:
 821              		.section	.text.unlikely._ZN11Fl_Valuator14handle_releaseEv
 822              	.LCOLDE19:
 823              		.section	.text._ZN11Fl_Valuator14handle_releaseEv
 824              	.LHOTE19:
 825              		.section	.text.unlikely._ZN11Fl_Valuator5roundEd,"ax",@progbits
 826              		.align 2
 827              	.LCOLDB20:
 828              		.section	.text._ZN11Fl_Valuator5roundEd,"ax",@progbits
 829              	.LHOTB20:
 830              		.align 2
 831              		.p2align 4,,15
 832              		.globl	_ZN11Fl_Valuator5roundEd
 834              	_ZN11Fl_Valuator5roundEd:
 835              	.LFB279:
 127:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 836              		.loc 2 127 0
 837              		.cfi_startproc
 838              	.LVL69:
 128:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 839              		.loc 2 128 0
 840 0000 F20F108F 		movsd	152(%rdi), %xmm1
 840      98000000 
 127:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 841              		.loc 2 127 0
 842 0008 53       		pushq	%rbx
 843              		.cfi_def_cfa_offset 16
 844              		.cfi_offset 3, -16
 128:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 845              		.loc 2 128 0
 846 0009 660F2E0D 		ucomisd	.LC4(%rip), %xmm1
 846      00000000 
 847 0011 7A0D     		jp	.L93
 848 0013 750B     		jne	.L93
 130:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 849              		.loc 2 130 0
 850 0015 5B       		popq	%rbx
 851              		.cfi_remember_state
 852              		.cfi_def_cfa_offset 8
 853 0016 C3       		ret
 854 0017 660F1F84 		.p2align 4,,10
 854      00000000 
 854      00
 855              		.p2align 3
 856              	.L93:
 857              		.cfi_restore_state
 128:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 858              		.loc 2 128 0 discriminator 1
 859 0020 660FEFD2 		pxor	%xmm2, %xmm2
 860 0024 4889FB   		movq	%rdi, %rbx
 861 0027 F20F2A97 		cvtsi2sd	160(%rdi), %xmm2
 861      A0000000 
 862 002f F20F59C2 		mulsd	%xmm2, %xmm0
 863              	.LVL70:
 864 0033 F20F5EC1 		divsd	%xmm1, %xmm0
 865 0037 E8000000 		call	rint
 865      00
 866              	.LVL71:
 867 003c F20F5983 		mulsd	152(%rbx), %xmm0
 867      98000000 
 868 0044 660FEFC9 		pxor	%xmm1, %xmm1
 869 0048 F20F2A8B 		cvtsi2sd	160(%rbx), %xmm1
 869      A0000000 
 130:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 870              		.loc 2 130 0 discriminator 1
 871 0050 5B       		popq	%rbx
 872              		.cfi_def_cfa_offset 8
 873              	.LVL72:
 128:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 874              		.loc 2 128 0 discriminator 1
 875 0051 F20F5EC1 		divsd	%xmm1, %xmm0
 130:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 876              		.loc 2 130 0 discriminator 1
 877 0055 C3       		ret
 878              		.cfi_endproc
 879              	.LFE279:
 881              		.section	.text.unlikely._ZN11Fl_Valuator5roundEd
 882              	.LCOLDE20:
 883              		.section	.text._ZN11Fl_Valuator5roundEd
 884              	.LHOTE20:
 885              		.section	.text.unlikely._ZN11Fl_Valuator5clampEd,"ax",@progbits
 886              		.align 2
 887              	.LCOLDB21:
 888              		.section	.text._ZN11Fl_Valuator5clampEd,"ax",@progbits
 889              	.LHOTB21:
 890              		.align 2
 891              		.p2align 4,,15
 892              		.globl	_ZN11Fl_Valuator5clampEd
 894              	_ZN11Fl_Valuator5clampEd:
 895              	.LFB280:
 133:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 896              		.loc 2 133 0
 897              		.cfi_startproc
 898              	.LVL73:
 134:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 899              		.loc 2 134 0
 900 0000 F20F108F 		movsd	136(%rdi), %xmm1
 900      88000000 
 901 0008 F20F1097 		movsd	144(%rdi), %xmm2
 901      90000000 
 902 0010 660F2EC8 		ucomisd	%xmm0, %xmm1
 903 0014 0F96C0   		setbe	%al
 904 0017 660F2ED1 		ucomisd	%xmm1, %xmm2
 905 001b 0F93C2   		setnb	%dl
 906 001e 38D0     		cmpb	%dl, %al
 907 0020 740E     		je	.L99
 908              	.L97:
 137:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 909              		.loc 2 137 0
 910 0022 660F28C1 		movapd	%xmm1, %xmm0
 911              	.LVL74:
 912 0026 C3       		ret
 913              	.LVL75:
 914 0027 660F1F84 		.p2align 4,,10
 914      00000000 
 914      00
 915              		.p2align 3
 916              	.L99:
 135:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 917              		.loc 2 135 0
 918 0030 660F2EC2 		ucomisd	%xmm2, %xmm0
 919 0034 660F28CA 		movapd	%xmm2, %xmm1
 920 0038 0F96C2   		setbe	%dl
 921 003b 38D0     		cmpb	%dl, %al
 922 003d 75E3     		jne	.L97
 136:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 923              		.loc 2 136 0
 924 003f 660F28C8 		movapd	%xmm0, %xmm1
 137:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 925              		.loc 2 137 0
 926 0043 660F28C1 		movapd	%xmm1, %xmm0
 927 0047 C3       		ret
 928              		.cfi_endproc
 929              	.LFE280:
 931              		.section	.text.unlikely._ZN11Fl_Valuator5clampEd
 932              	.LCOLDE21:
 933              		.section	.text._ZN11Fl_Valuator5clampEd
 934              	.LHOTE21:
 935              		.section	.text.unlikely._ZN11Fl_Valuator9incrementEdi,"ax",@progbits
 936              		.align 2
 937              	.LCOLDB23:
 938              		.section	.text._ZN11Fl_Valuator9incrementEdi,"ax",@progbits
 939              	.LHOTB23:
 940              		.align 2
 941              		.p2align 4,,15
 942              		.globl	_ZN11Fl_Valuator9incrementEdi
 944              	_ZN11Fl_Valuator9incrementEdi:
 945              	.LFB281:
 144:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 946              		.loc 2 144 0
 947              		.cfi_startproc
 948              	.LVL76:
 949 0000 55       		pushq	%rbp
 950              		.cfi_def_cfa_offset 16
 951              		.cfi_offset 6, -16
 952 0001 53       		pushq	%rbx
 953              		.cfi_def_cfa_offset 24
 954              		.cfi_offset 3, -24
 955 0002 4889FD   		movq	%rdi, %rbp
 956 0005 89F3     		movl	%esi, %ebx
 957 0007 4883EC08 		subq	$8, %rsp
 958              		.cfi_def_cfa_offset 32
 145:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 959              		.loc 2 145 0
 960 000b F20F108F 		movsd	152(%rdi), %xmm1
 960      98000000 
 961 0013 660F2E0D 		ucomisd	.LC4(%rip), %xmm1
 961      00000000 
 962 001b 7A02     		jp	.L101
 963 001d 7461     		je	.L109
 964              	.L101:
 146:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 965              		.loc 2 146 0
 966 001f F20F1095 		movsd	136(%rbp), %xmm2
 966      88000000 
 967 0027 89D8     		movl	%ebx, %eax
 968 0029 F7D8     		negl	%eax
 969 002b 660F2E95 		ucomisd	144(%rbp), %xmm2
 969      90000000 
 147:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 970              		.loc 2 147 0
 971 0033 660FEFD2 		pxor	%xmm2, %xmm2
 972 0037 F20F2A95 		cvtsi2sd	160(%rbp), %xmm2
 972      A0000000 
 973 003f F20F59C2 		mulsd	%xmm2, %xmm0
 974              	.LVL77:
 146:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 975              		.loc 2 146 0
 976 0043 0F47D8   		cmova	%eax, %ebx
 977              	.LVL78:
 147:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 978              		.loc 2 147 0
 979 0046 F20F5EC1 		divsd	%xmm1, %xmm0
 980 004a E8000000 		call	rint
 980      00
 981              	.LVL79:
 982 004f 660FEFC9 		pxor	%xmm1, %xmm1
 983 0053 F20F2ACB 		cvtsi2sd	%ebx, %xmm1
 984 0057 F20F58C1 		addsd	%xmm1, %xmm0
 985 005b 660FEFC9 		pxor	%xmm1, %xmm1
 986 005f F20F2A8D 		cvtsi2sd	160(%rbp), %xmm1
 986      A0000000 
 987 0067 F20F5985 		mulsd	152(%rbp), %xmm0
 987      98000000 
 148:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 988              		.loc 2 148 0
 989 006f 4883C408 		addq	$8, %rsp
 990              		.cfi_remember_state
 991              		.cfi_def_cfa_offset 24
 992 0073 5B       		popq	%rbx
 993              		.cfi_def_cfa_offset 16
 994              	.LVL80:
 995 0074 5D       		popq	%rbp
 996              		.cfi_def_cfa_offset 8
 997              	.LVL81:
 147:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 998              		.loc 2 147 0
 999 0075 F20F5EC1 		divsd	%xmm1, %xmm0
 148:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 1000              		.loc 2 148 0
 1001 0079 C3       		ret
 1002              	.LVL82:
 1003 007a 660F1F44 		.p2align 4,,10
 1003      0000
 1004              		.p2align 3
 1005              	.L109:
 1006              		.cfi_restore_state
 145:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1007              		.loc 2 145 0 discriminator 1
 1008 0080 660FEFD2 		pxor	%xmm2, %xmm2
 1009 0084 F20F108F 		movsd	144(%rdi), %xmm1
 1009      90000000 
 1010 008c F20F2AD6 		cvtsi2sd	%esi, %xmm2
 1011 0090 F20F5C8F 		subsd	136(%rdi), %xmm1
 1011      88000000 
 1012 0098 F20F59CA 		mulsd	%xmm2, %xmm1
 1013 009c F20F5E0D 		divsd	.LC22(%rip), %xmm1
 1013      00000000 
 148:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 1014              		.loc 2 148 0 discriminator 1
 1015 00a4 4883C408 		addq	$8, %rsp
 1016              		.cfi_def_cfa_offset 24
 1017 00a8 5B       		popq	%rbx
 1018              		.cfi_def_cfa_offset 16
 1019              	.LVL83:
 1020 00a9 5D       		popq	%rbp
 1021              		.cfi_def_cfa_offset 8
 145:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1022              		.loc 2 145 0 discriminator 1
 1023 00aa F20F58C1 		addsd	%xmm1, %xmm0
 1024              	.LVL84:
 148:fltk-1.3.4-1/src/Fl_Valuator.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 1025              		.loc 2 148 0 discriminator 1
 1026 00ae C3       		ret
 1027              		.cfi_endproc
 1028              	.LFE281:
 1030              		.section	.text.unlikely._ZN11Fl_Valuator9incrementEdi
 1031              	.LCOLDE23:
 1032              		.section	.text._ZN11Fl_Valuator9incrementEdi
 1033              	.LHOTE23:
 1034              		.weak	_ZTS11Fl_Valuator
 1035              		.section	.rodata._ZTS11Fl_Valuator,"aG",@progbits,_ZTS11Fl_Valuator,comdat
 1036              		.align 8
 1039              	_ZTS11Fl_Valuator:
 1040 0000 3131466C 		.string	"11Fl_Valuator"
 1040      5F56616C 
 1040      7561746F 
 1040      7200
 1041              		.weak	_ZTI11Fl_Valuator
 1042              		.section	.rodata._ZTI11Fl_Valuator,"aG",@progbits,_ZTI11Fl_Valuator,comdat
 1043              		.align 8
 1046              	_ZTI11Fl_Valuator:
 1047 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1047      00000000 
 1048 0008 00000000 		.quad	_ZTS11Fl_Valuator
 1048      00000000 
 1049 0010 00000000 		.quad	_ZTI9Fl_Widget
 1049      00000000 
 1050              		.weak	_ZTV11Fl_Valuator
 1051              		.section	.rodata._ZTV11Fl_Valuator,"aG",@progbits,_ZTV11Fl_Valuator,comdat
 1052              		.align 8
 1055              	_ZTV11Fl_Valuator:
 1056 0000 00000000 		.quad	0
 1056      00000000 
 1057 0008 00000000 		.quad	_ZTI11Fl_Valuator
 1057      00000000 
 1058 0010 00000000 		.quad	0
 1058      00000000 
 1059 0018 00000000 		.quad	0
 1059      00000000 
 1060 0020 00000000 		.quad	__cxa_pure_virtual
 1060      00000000 
 1061 0028 00000000 		.quad	_ZN9Fl_Widget6handleEi
 1061      00000000 
 1062 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 1062      00000000 
 1063 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1063      00000000 
 1064 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1064      00000000 
 1065 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1065      00000000 
 1066 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1066      00000000 
 1067 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1067      00000000 
 1068 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 1068      00000000 
 1069 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 1069      00000000 
 1070              		.section	.rodata.cst8,"aM",@progbits,8
 1071              		.align 8
 1072              	.LC4:
 1073 0000 00000000 		.long	0
 1074 0004 00000000 		.long	0
 1075              		.align 8
 1076              	.LC9:
 1077 0008 00000000 		.long	0
 1078 000c 0000F03F 		.long	1072693248
 1079              		.section	.rodata.cst16,"aM",@progbits,16
 1080              		.align 16
 1081              	.LC11:
 1082 0000 00000000 		.long	0
 1083 0004 00000080 		.long	-2147483648
 1084 0008 00000000 		.long	0
 1085 000c 00000000 		.long	0
 1086              		.align 16
 1087              	.LC12:
 1088 0010 FFFFFFFF 		.long	4294967295
 1089 0014 FFFFFF7F 		.long	2147483647
 1090 0018 00000000 		.long	0
 1091 001c 00000000 		.long	0
 1092              		.section	.rodata.cst8
 1093              		.align 8
 1094              	.LC13:
 1095 0010 0ACA92B6 		.long	3063073290
 1096 0014 FA02003E 		.long	1040188154
 1097              		.align 8
 1098              	.LC22:
 1099 0018 00000000 		.long	0
 1100 001c 00005940 		.long	1079574528
 1101              		.text
 1102              	.Letext0:
 1103              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 1104              	.Letext_cold0:
 1105              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 1106              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1107              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1108              		.file 7 "/usr/include/libio.h"
 1109              		.file 8 "fltk-1.3.4-1/FL/Enumerations.H"
 1110              		.file 9 "fltk-1.3.4-1/FL/Fl_Valuator.H"
 1111              		.file 10 "/usr/include/stdio.h"
 1112              		.file 11 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Valuator.cxx
     /tmp/ccgWT0lW.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccgWT0lW.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccgWT0lW.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccgWT0lW.s:89     .text._ZN11Fl_Valuator12value_damageEv:0000000000000000 _ZN11Fl_Valuator12value_damageEv
     /tmp/ccgWT0lW.s:122    .text._ZN11Fl_Valuator6formatEPc:0000000000000000 _ZN11Fl_Valuator6formatEPc
     /tmp/ccgWT0lW.s:319    .text._ZN11Fl_ValuatorC2EiiiiPKc:0000000000000000 _ZN11Fl_ValuatorC2EiiiiPKc
     /tmp/ccgWT0lW.s:1055   .rodata._ZTV11Fl_Valuator:0000000000000000 _ZTV11Fl_Valuator
     /tmp/ccgWT0lW.s:319    .text._ZN11Fl_ValuatorC2EiiiiPKc:0000000000000000 _ZN11Fl_ValuatorC1EiiiiPKc
     /tmp/ccgWT0lW.s:390    .text._ZN11Fl_Valuator4stepEd:0000000000000000 _ZN11Fl_Valuator4stepEd
     /tmp/ccgWT0lW.s:495    .text._ZN11Fl_Valuator9precisionEi:0000000000000000 _ZN11Fl_Valuator9precisionEi
     /tmp/ccgWT0lW.s:551    .text._ZN11Fl_Valuator5valueEd:0000000000000000 _ZN11Fl_Valuator5valueEd
     /tmp/ccgWT0lW.s:607    .text._ZN11Fl_Valuator9softclampEd:0000000000000000 _ZN11Fl_Valuator9softclampEd
     /tmp/ccgWT0lW.s:697    .text._ZN11Fl_Valuator11handle_dragEd:0000000000000000 _ZN11Fl_Valuator11handle_dragEd
     /tmp/ccgWT0lW.s:775    .text._ZN11Fl_Valuator14handle_releaseEv:0000000000000000 _ZN11Fl_Valuator14handle_releaseEv
     /tmp/ccgWT0lW.s:834    .text._ZN11Fl_Valuator5roundEd:0000000000000000 _ZN11Fl_Valuator5roundEd
     /tmp/ccgWT0lW.s:894    .text._ZN11Fl_Valuator5clampEd:0000000000000000 _ZN11Fl_Valuator5clampEd
     /tmp/ccgWT0lW.s:944    .text._ZN11Fl_Valuator9incrementEdi:0000000000000000 _ZN11Fl_Valuator9incrementEdi
     /tmp/ccgWT0lW.s:1039   .rodata._ZTS11Fl_Valuator:0000000000000000 _ZTS11Fl_Valuator
     /tmp/ccgWT0lW.s:1046   .rodata._ZTI11Fl_Valuator:0000000000000000 _ZTI11Fl_Valuator
     /tmp/ccgWT0lW.s:1072   .rodata.cst8:0000000000000000 .LC4
     /tmp/ccgWT0lW.s:1076   .rodata.cst8:0000000000000008 .LC9
     /tmp/ccgWT0lW.s:1087   .rodata.cst16:0000000000000010 .LC12
     /tmp/ccgWT0lW.s:1094   .rodata.cst8:0000000000000010 .LC13
     /tmp/ccgWT0lW.s:1081   .rodata.cst16:0000000000000000 .LC11
     /tmp/ccgWT0lW.s:1098   .rodata.cst8:0000000000000018 .LC22
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
_ZN9Fl_Widget6damageEh
__snprintf_chk
__stack_chk_fail
_ZN9Fl_WidgetC2EiiiiPKc
rint
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Widget
__cxa_pure_virtual
_ZN9Fl_Widget6handleEi
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
