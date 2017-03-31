   1              		.file	"Fl_Dial.cxx"
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
  80              		.section	.text.unlikely._ZN7Fl_DialD2Ev,"axG",@progbits,_ZN7Fl_DialD5Ev,comdat
  81              		.align 2
  82              	.LCOLDB3:
  83              		.section	.text._ZN7Fl_DialD2Ev,"axG",@progbits,_ZN7Fl_DialD5Ev,comdat
  84              	.LHOTB3:
  85              		.align 2
  86              		.p2align 4,,15
  87              		.weak	_ZN7Fl_DialD2Ev
  89              	_ZN7Fl_DialD2Ev:
  90              	.LFB503:
  91              		.file 2 "fltk-1.3.4-1/FL/Fl_Dial.H"
   1:fltk-1.3.4-1/FL/Fl_Dial.H **** //
   2:fltk-1.3.4-1/FL/Fl_Dial.H **** // "$Id: Fl_Dial.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Dial.H **** //
   4:fltk-1.3.4-1/FL/Fl_Dial.H **** // Dial header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Dial.H **** //
   6:fltk-1.3.4-1/FL/Fl_Dial.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Dial.H **** //
   8:fltk-1.3.4-1/FL/Fl_Dial.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Dial.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Dial.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Dial.H **** //
  12:fltk-1.3.4-1/FL/Fl_Dial.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Dial.H **** //
  14:fltk-1.3.4-1/FL/Fl_Dial.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Dial.H **** //
  16:fltk-1.3.4-1/FL/Fl_Dial.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Dial.H **** //
  18:fltk-1.3.4-1/FL/Fl_Dial.H **** 
  19:fltk-1.3.4-1/FL/Fl_Dial.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Dial.H ****    Fl_Dial widget . */
  21:fltk-1.3.4-1/FL/Fl_Dial.H **** 
  22:fltk-1.3.4-1/FL/Fl_Dial.H **** #ifndef Fl_Dial_H
  23:fltk-1.3.4-1/FL/Fl_Dial.H **** #define Fl_Dial_H
  24:fltk-1.3.4-1/FL/Fl_Dial.H **** 
  25:fltk-1.3.4-1/FL/Fl_Dial.H **** #ifndef Fl_Valuator_H
  26:fltk-1.3.4-1/FL/Fl_Dial.H **** #include "Fl_Valuator.H"
  27:fltk-1.3.4-1/FL/Fl_Dial.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Dial.H **** 
  29:fltk-1.3.4-1/FL/Fl_Dial.H **** // values for type():
  30:fltk-1.3.4-1/FL/Fl_Dial.H **** #define FL_NORMAL_DIAL	0	/**< type() for dial variant with dot */
  31:fltk-1.3.4-1/FL/Fl_Dial.H **** #define FL_LINE_DIAL	1	/**< type() for dial variant with line */
  32:fltk-1.3.4-1/FL/Fl_Dial.H **** #define FL_FILL_DIAL	2	/**< type() for dial variant with filled arc */
  33:fltk-1.3.4-1/FL/Fl_Dial.H **** 
  34:fltk-1.3.4-1/FL/Fl_Dial.H **** /**
  35:fltk-1.3.4-1/FL/Fl_Dial.H ****   The Fl_Dial widget provides a circular dial to control a
  36:fltk-1.3.4-1/FL/Fl_Dial.H ****   single floating point value.
  37:fltk-1.3.4-1/FL/Fl_Dial.H ****   <P ALIGN=CENTER>\image html dial.png 
  38:fltk-1.3.4-1/FL/Fl_Dial.H ****   \image latex dial.png "Fl_Dial" width=4cm
  39:fltk-1.3.4-1/FL/Fl_Dial.H ****   Use type() to set the type of the dial to:
  40:fltk-1.3.4-1/FL/Fl_Dial.H ****   <UL>
  41:fltk-1.3.4-1/FL/Fl_Dial.H ****   <LI>FL_NORMAL_DIAL - Draws a normal dial with a knob. </LI>
  42:fltk-1.3.4-1/FL/Fl_Dial.H ****   <LI>FL_LINE_DIAL - Draws a dial with a line. </LI>
  43:fltk-1.3.4-1/FL/Fl_Dial.H ****   <LI>FL_FILL_DIAL - Draws a dial with a filled arc. </LI>
  44:fltk-1.3.4-1/FL/Fl_Dial.H ****   </UL>
  45:fltk-1.3.4-1/FL/Fl_Dial.H **** 
  46:fltk-1.3.4-1/FL/Fl_Dial.H **** */
  47:fltk-1.3.4-1/FL/Fl_Dial.H **** class FL_EXPORT Fl_Dial : public Fl_Valuator {
  92              		.loc 2 47 0
  93              		.cfi_startproc
  94              	.LVL3:
  95              	.LBB297:
  96              	.LBB298:
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
 102              	.LBE298:
 103              	.LBE297:
 104              		.cfi_endproc
 105              	.LFE503:
 107              		.section	.text.unlikely._ZN7Fl_DialD2Ev,"axG",@progbits,_ZN7Fl_DialD5Ev,comdat
 108              	.LCOLDE3:
 109              		.section	.text._ZN7Fl_DialD2Ev,"axG",@progbits,_ZN7Fl_DialD5Ev,comdat
 110              	.LHOTE3:
 111              		.weak	_ZN7Fl_DialD1Ev
 112              		.set	_ZN7Fl_DialD1Ev,_ZN7Fl_DialD2Ev
 113              		.section	.text.unlikely._ZN7Fl_DialD0Ev,"axG",@progbits,_ZN7Fl_DialD5Ev,comdat
 114              		.align 2
 115              	.LCOLDB4:
 116              		.section	.text._ZN7Fl_DialD0Ev,"axG",@progbits,_ZN7Fl_DialD5Ev,comdat
 117              	.LHOTB4:
 118              		.align 2
 119              		.p2align 4,,15
 120              		.weak	_ZN7Fl_DialD0Ev
 122              	_ZN7Fl_DialD0Ev:
 123              	.LFB505:
 124              		.loc 2 47 0
 125              		.cfi_startproc
 126              	.LVL5:
 127 0000 53       		pushq	%rbx
 128              		.cfi_def_cfa_offset 16
 129              		.cfi_offset 3, -16
 130              		.loc 2 47 0
 131 0001 4889FB   		movq	%rdi, %rbx
 132              	.LBB299:
 133              	.LBB300:
 134              	.LBB301:
 135              		.loc 3 49 0
 136 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 136      000000
 137 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 137      00
 138              	.LVL6:
 139              	.LBE301:
 140              	.LBE300:
 141              	.LBE299:
 142              		.loc 2 47 0
 143 0010 4889DF   		movq	%rbx, %rdi
 144 0013 5B       		popq	%rbx
 145              		.cfi_def_cfa_offset 8
 146              	.LVL7:
 147 0014 E9000000 		jmp	_ZdlPv
 147      00
 148              	.LVL8:
 149              		.cfi_endproc
 150              	.LFE505:
 152              		.section	.text.unlikely._ZN7Fl_DialD0Ev,"axG",@progbits,_ZN7Fl_DialD5Ev,comdat
 153              	.LCOLDE4:
 154              		.section	.text._ZN7Fl_DialD0Ev,"axG",@progbits,_ZN7Fl_DialD5Ev,comdat
 155              	.LHOTE4:
 156              		.section	.text.unlikely._ZN12Fl_Fill_DialD2Ev,"axG",@progbits,_ZN12Fl_Fill_DialD5Ev,comdat
 157              		.align 2
 158              	.LCOLDB5:
 159              		.section	.text._ZN12Fl_Fill_DialD2Ev,"axG",@progbits,_ZN12Fl_Fill_DialD5Ev,comdat
 160              	.LHOTB5:
 161              		.align 2
 162              		.p2align 4,,15
 163              		.weak	_ZN12Fl_Fill_DialD2Ev
 165              	_ZN12Fl_Fill_DialD2Ev:
 166              	.LFB516:
 167              		.file 4 "fltk-1.3.4-1/FL/Fl_Fill_Dial.H"
   1:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //
   2:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** // "$Id: Fl_Fill_Dial.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //
   4:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** // Filled dial header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //
   6:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //
   8:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //
  12:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //
  14:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //
  16:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** //
  18:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** 
  19:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Fill_Dial.H ****    Fl_Fill_Dial widget . */
  21:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** 
  22:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** #ifndef Fl_Fill_Dial_H
  23:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** #define Fl_Fill_Dial_H
  24:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** 
  25:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** #include "Fl_Dial.H"
  26:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** 
  27:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** /** Draws a dial with a filled arc */
  28:fltk-1.3.4-1/FL/Fl_Fill_Dial.H **** class FL_EXPORT Fl_Fill_Dial : public Fl_Dial {
 168              		.loc 4 28 0
 169              		.cfi_startproc
 170              	.LVL9:
 171              	.LBB302:
 172              	.LBB303:
 173              	.LBB304:
 174              		.loc 3 49 0
 175 0000 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 175      000000
 176 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 176      00
 177              	.LVL10:
 178              	.LBE304:
 179              	.LBE303:
 180              	.LBE302:
 181              		.cfi_endproc
 182              	.LFE516:
 184              		.section	.text.unlikely._ZN12Fl_Fill_DialD2Ev,"axG",@progbits,_ZN12Fl_Fill_DialD5Ev,comdat
 185              	.LCOLDE5:
 186              		.section	.text._ZN12Fl_Fill_DialD2Ev,"axG",@progbits,_ZN12Fl_Fill_DialD5Ev,comdat
 187              	.LHOTE5:
 188              		.weak	_ZN12Fl_Fill_DialD1Ev
 189              		.set	_ZN12Fl_Fill_DialD1Ev,_ZN12Fl_Fill_DialD2Ev
 190              		.section	.text.unlikely._ZN12Fl_Fill_DialD0Ev,"axG",@progbits,_ZN12Fl_Fill_DialD5Ev,comdat
 191              		.align 2
 192              	.LCOLDB6:
 193              		.section	.text._ZN12Fl_Fill_DialD0Ev,"axG",@progbits,_ZN12Fl_Fill_DialD5Ev,comdat
 194              	.LHOTB6:
 195              		.align 2
 196              		.p2align 4,,15
 197              		.weak	_ZN12Fl_Fill_DialD0Ev
 199              	_ZN12Fl_Fill_DialD0Ev:
 200              	.LFB518:
 201              		.loc 4 28 0
 202              		.cfi_startproc
 203              	.LVL11:
 204 0000 53       		pushq	%rbx
 205              		.cfi_def_cfa_offset 16
 206              		.cfi_offset 3, -16
 207              		.loc 4 28 0
 208 0001 4889FB   		movq	%rdi, %rbx
 209              	.LBB305:
 210              	.LBB306:
 211              	.LBB307:
 212              	.LBB308:
 213              		.loc 3 49 0
 214 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 214      000000
 215 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 215      00
 216              	.LVL12:
 217              	.LBE308:
 218              	.LBE307:
 219              	.LBE306:
 220              	.LBE305:
 221              		.loc 4 28 0
 222 0010 4889DF   		movq	%rbx, %rdi
 223 0013 5B       		popq	%rbx
 224              		.cfi_def_cfa_offset 8
 225              	.LVL13:
 226 0014 E9000000 		jmp	_ZdlPv
 226      00
 227              	.LVL14:
 228              		.cfi_endproc
 229              	.LFE518:
 231              		.section	.text.unlikely._ZN12Fl_Fill_DialD0Ev,"axG",@progbits,_ZN12Fl_Fill_DialD5Ev,comdat
 232              	.LCOLDE6:
 233              		.section	.text._ZN12Fl_Fill_DialD0Ev,"axG",@progbits,_ZN12Fl_Fill_DialD5Ev,comdat
 234              	.LHOTE6:
 235              		.section	.text.unlikely._ZN12Fl_Line_DialD2Ev,"axG",@progbits,_ZN12Fl_Line_DialD5Ev,comdat
 236              		.align 2
 237              	.LCOLDB7:
 238              		.section	.text._ZN12Fl_Line_DialD2Ev,"axG",@progbits,_ZN12Fl_Line_DialD5Ev,comdat
 239              	.LHOTB7:
 240              		.align 2
 241              		.p2align 4,,15
 242              		.weak	_ZN12Fl_Line_DialD2Ev
 244              	_ZN12Fl_Line_DialD2Ev:
 245              	.LFB512:
 246              		.file 5 "fltk-1.3.4-1/FL/Fl_Line_Dial.H"
   1:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //
   2:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** // "$Id: Fl_Line_Dial.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //
   4:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** // Line dial header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //
   6:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //
   8:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //
  12:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //
  14:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //
  16:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** //
  18:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** 
  19:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Line_Dial.H ****    Fl_Line_Dial widget . */
  21:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** 
  22:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** #ifndef Fl_Line_Dial_H
  23:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** #define Fl_Line_Dial_H
  24:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** 
  25:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** #include "Fl_Dial.H"
  26:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** 
  27:fltk-1.3.4-1/FL/Fl_Line_Dial.H **** class FL_EXPORT Fl_Line_Dial : public Fl_Dial {
 247              		.loc 5 27 0
 248              		.cfi_startproc
 249              	.LVL15:
 250              	.LBB309:
 251              	.LBB310:
 252              	.LBB311:
 253              		.loc 3 49 0
 254 0000 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 254      000000
 255 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 255      00
 256              	.LVL16:
 257              	.LBE311:
 258              	.LBE310:
 259              	.LBE309:
 260              		.cfi_endproc
 261              	.LFE512:
 263              		.section	.text.unlikely._ZN12Fl_Line_DialD2Ev,"axG",@progbits,_ZN12Fl_Line_DialD5Ev,comdat
 264              	.LCOLDE7:
 265              		.section	.text._ZN12Fl_Line_DialD2Ev,"axG",@progbits,_ZN12Fl_Line_DialD5Ev,comdat
 266              	.LHOTE7:
 267              		.weak	_ZN12Fl_Line_DialD1Ev
 268              		.set	_ZN12Fl_Line_DialD1Ev,_ZN12Fl_Line_DialD2Ev
 269              		.section	.text.unlikely._ZN12Fl_Line_DialD0Ev,"axG",@progbits,_ZN12Fl_Line_DialD5Ev,comdat
 270              		.align 2
 271              	.LCOLDB8:
 272              		.section	.text._ZN12Fl_Line_DialD0Ev,"axG",@progbits,_ZN12Fl_Line_DialD5Ev,comdat
 273              	.LHOTB8:
 274              		.align 2
 275              		.p2align 4,,15
 276              		.weak	_ZN12Fl_Line_DialD0Ev
 278              	_ZN12Fl_Line_DialD0Ev:
 279              	.LFB514:
 280              		.loc 5 27 0
 281              		.cfi_startproc
 282              	.LVL17:
 283 0000 53       		pushq	%rbx
 284              		.cfi_def_cfa_offset 16
 285              		.cfi_offset 3, -16
 286              		.loc 5 27 0
 287 0001 4889FB   		movq	%rdi, %rbx
 288              	.LBB312:
 289              	.LBB313:
 290              	.LBB314:
 291              	.LBB315:
 292              		.loc 3 49 0
 293 0004 48C70700 		movq	$_ZTV11Fl_Valuator+16, (%rdi)
 293      000000
 294 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 294      00
 295              	.LVL18:
 296              	.LBE315:
 297              	.LBE314:
 298              	.LBE313:
 299              	.LBE312:
 300              		.loc 5 27 0
 301 0010 4889DF   		movq	%rbx, %rdi
 302 0013 5B       		popq	%rbx
 303              		.cfi_def_cfa_offset 8
 304              	.LVL19:
 305 0014 E9000000 		jmp	_ZdlPv
 305      00
 306              	.LVL20:
 307              		.cfi_endproc
 308              	.LFE514:
 310              		.section	.text.unlikely._ZN12Fl_Line_DialD0Ev,"axG",@progbits,_ZN12Fl_Line_DialD5Ev,comdat
 311              	.LCOLDE8:
 312              		.section	.text._ZN12Fl_Line_DialD0Ev,"axG",@progbits,_ZN12Fl_Line_DialD5Ev,comdat
 313              	.LHOTE8:
 314              		.section	.text.unlikely._ZN7Fl_Dial4drawEiiii,"ax",@progbits
 315              		.align 2
 316              	.LCOLDB24:
 317              		.section	.text._ZN7Fl_Dial4drawEiiii,"ax",@progbits
 318              	.LHOTB24:
 319              		.align 2
 320              		.p2align 4,,15
 321              		.globl	_ZN7Fl_Dial4drawEiiii
 323              	_ZN7Fl_Dial4drawEiiii:
 324              	.LFB490:
 325              		.file 6 "fltk-1.3.4-1/src/Fl_Dial.cxx"
   1:fltk-1.3.4-1/src/Fl_Dial.cxx ****    1              		.file	"Fl_Dial.cxx"
   2:fltk-1.3.4-1/src/Fl_Dial.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Dial.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Dial.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Dial.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Dial.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Dial.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Dial.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Dial.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Dial.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Dial.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Dial.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Dial.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Dial.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Dial.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Dial.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Dial.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Dial.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Dial.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Dial.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Dial.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Dial.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Dial.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Dial.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Dial.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Dial.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Dial.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Dial.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Dial.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Dial.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Dial.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Dial.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Dial.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 326              		.loc 6 33 0
 327              		.cfi_startproc
 328              	.LVL21:
 329 0000 4157     		pushq	%r15
 330              		.cfi_def_cfa_offset 16
 331              		.cfi_offset 15, -16
 332 0002 4156     		pushq	%r14
 333              		.cfi_def_cfa_offset 24
 334              		.cfi_offset 14, -24
 335 0004 4189D6   		movl	%edx, %r14d
 336 0007 4155     		pushq	%r13
 337              		.cfi_def_cfa_offset 32
 338              		.cfi_offset 13, -32
 339 0009 4154     		pushq	%r12
 340              		.cfi_def_cfa_offset 40
 341              		.cfi_offset 12, -40
 342 000b 4189F5   		movl	%esi, %r13d
 343 000e 55       		pushq	%rbp
 344              		.cfi_def_cfa_offset 48
 345              		.cfi_offset 6, -48
 346 000f 53       		pushq	%rbx
 347              		.cfi_def_cfa_offset 56
 348              		.cfi_offset 3, -56
 349 0010 89CD     		movl	%ecx, %ebp
 350 0012 4889FB   		movq	%rdi, %rbx
 351 0015 4589C4   		movl	%r8d, %r12d
 352 0018 4883EC18 		subq	$24, %rsp
 353              		.cfi_def_cfa_offset 80
  34:fltk-1.3.4-1/src/Fl_Dial.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 354              		.loc 6 34 0
 355 001c 807F6D00 		cmpb	$0, 109(%rdi)
 356 0020 0F880206 		js	.L45
 356      0000
 357              	.LVL22:
 358              	.L15:
  35:fltk-1.3.4-1/src/Fl_Dial.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 359              		.loc 6 35 0
 360 0026 0FB67B6E 		movzbl	110(%rbx), %edi
 361 002a E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 361      00
 362              	.LVL23:
  36:fltk-1.3.4-1/src/Fl_Dial.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
 363              		.loc 6 36 0
 364 002f 0FB67B6E 		movzbl	110(%rbx), %edi
  35:fltk-1.3.4-1/src/Fl_Dial.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 365              		.loc 6 35 0
 366 0033 4101C5   		addl	%eax, %r13d
 367              	.LVL24:
 368              		.loc 6 36 0
 369 0036 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 369      00
 370              	.LVL25:
  37:fltk-1.3.4-1/src/Fl_Dial.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 371              		.loc 6 37 0
 372 003b 0FB67B6E 		movzbl	110(%rbx), %edi
  36:fltk-1.3.4-1/src/Fl_Dial.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
 373              		.loc 6 36 0
 374 003f 4101C6   		addl	%eax, %r14d
 375              	.LVL26:
 376              		.loc 6 37 0
 377 0042 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 377      00
 378              	.LVL27:
  38:fltk-1.3.4-1/src/Fl_Dial.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 379              		.loc 6 38 0
 380 0047 0FB67B6E 		movzbl	110(%rbx), %edi
  37:fltk-1.3.4-1/src/Fl_Dial.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 381              		.loc 6 37 0
 382 004b 29C5     		subl	%eax, %ebp
 383              	.LVL28:
 384              		.loc 6 38 0
 385 004d E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 385      00
 386              	.LVL29:
  39:fltk-1.3.4-1/src/Fl_Dial.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 387              		.loc 6 39 0
 388 0052 0FBF93A4 		movswl	164(%rbx), %edx
 388      000000
  38:fltk-1.3.4-1/src/Fl_Dial.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 389              		.loc 6 38 0
 390 0059 4129C4   		subl	%eax, %r12d
 391              	.LVL30:
 392              		.loc 6 39 0
 393 005c 0FBF83A6 		movswl	166(%rbx), %eax
 393      000000
 394 0063 660FEFC9 		pxor	%xmm1, %xmm1
 395 0067 F20F1093 		movsd	136(%rbx), %xmm2
 395      88000000 
 396              	.LVL31:
 397 006f F20F1043 		movsd	120(%rbx), %xmm0
 397      78
 398 0074 29D0     		subl	%edx, %eax
 399              	.LBB316:
  40:fltk-1.3.4-1/src/Fl_Dial.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 400              		.loc 6 40 0
 401 0076 807B6C02 		cmpb	$2, 108(%rbx)
 402              	.LBE316:
  39:fltk-1.3.4-1/src/Fl_Dial.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 403              		.loc 6 39 0
 404 007a F20F2AC8 		cvtsi2sd	%eax, %xmm1
 405 007e F20F5CC2 		subsd	%xmm2, %xmm0
 406 0082 F20F59C1 		mulsd	%xmm1, %xmm0
 407 0086 F20F108B 		movsd	144(%rbx), %xmm1
 407      90000000 
 408 008e F20F5CCA 		subsd	%xmm2, %xmm1
 409 0092 F20F5EC1 		divsd	%xmm1, %xmm0
 410 0096 660FEFC9 		pxor	%xmm1, %xmm1
 411 009a F20F2ACA 		cvtsi2sd	%edx, %xmm1
 412 009e F20F58C1 		addsd	%xmm1, %xmm0
 413 00a2 F20F1144 		movsd	%xmm0, 8(%rsp)
 413      2408
 414              	.LVL32:
 415              	.LBB342:
 416              		.loc 6 40 0
 417 00a8 0F848203 		je	.L46
 417      0000
 418              	.LVL33:
 419              	.LBE342:
  41:fltk-1.3.4-1/src/Fl_Dial.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Dial.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Dial.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Dial.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Dial.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Dial.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Dial.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Dial.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Dial.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Dial.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Dial.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Dial.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Dial.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Dial.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Dial.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Dial.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Dial.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 420              		.loc 6 57 0
 421 00ae 807B6D00 		cmpb	$0, 109(%rbx)
 422 00b2 7856     		js	.L29
  58:fltk-1.3.4-1/src/Fl_Dial.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 423              		.loc 6 58 0
 424 00b4 4889DF   		movq	%rbx, %rdi
 425 00b7 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 425      00
 426              	.LVL34:
 427 00bc 85C0     		testl	%eax, %eax
 428 00be 0F857C04 		jne	.L47
 428      0000
 429              	.LVL35:
  59:fltk-1.3.4-1/src/Fl_Dial.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 430              		.loc 6 59 0
 431 00c4 8B7B64   		movl	100(%rbx), %edi
 432 00c7 E8000000 		call	_Z11fl_inactivej
 432      00
 433              	.LVL36:
 434              	.LBB343:
 435              	.LBB344:
 436              		.file 7 "fltk-1.3.4-1/FL/fl_draw.H"
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
 437              		.loc 7 52 0
 438 00cc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 438      000000
 439 00d3 89C6     		movl	%eax, %esi
 440 00d5 488B17   		movq	(%rdi), %rdx
 441 00d8 FF928800 		call	*136(%rdx)
 441      0000
 442              	.LVL37:
 443              	.L31:
 444              	.LBE344:
 445              	.LBE343:
 446              	.LBB345:
 447              	.LBB346:
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
 448              		.loc 7 317 0
 449 00de 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 449      000000
 450 00e5 8D4DFE   		leal	-2(%rbp), %ecx
 451              	.LVL38:
 452 00e8 418D5601 		leal	1(%r14), %edx
 453              	.LVL39:
 454 00ec 418D7501 		leal	1(%r13), %esi
 455              	.LVL40:
 456 00f0 F20F100D 		movsd	.LC12(%rip), %xmm1
 456      00000000 
 457 00f8 660FEFC0 		pxor	%xmm0, %xmm0
 458 00fc 458D4424 		leal	-2(%r12), %r8d
 458      FE
 459              	.LVL41:
 460 0101 488B07   		movq	(%rdi), %rax
 461 0104 FF900801 		call	*264(%rax)
 461      0000
 462              	.LVL42:
 463              	.L29:
 464              	.LBE346:
 465              	.LBE345:
 466              	.LBB347:
 467              	.LBB348:
 318:fltk-1.3.4-1/FL/fl_draw.H **** /** fl_chord declaration is a place holder - the function does not yet exist */
 319:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_chord(int x, int y, int w, int h, double a1, double a2); // nyi
 320:fltk-1.3.4-1/FL/fl_draw.H **** 
 321:fltk-1.3.4-1/FL/fl_draw.H **** // scalable drawing code (code in fl_vertex.C and fl_arc.C):
 322:fltk-1.3.4-1/FL/fl_draw.H **** /**
 323:fltk-1.3.4-1/FL/fl_draw.H ****  Saves the current transformation matrix on the stack. 
 324:fltk-1.3.4-1/FL/fl_draw.H ****  The maximum depth of the stack is 32.
 325:fltk-1.3.4-1/FL/fl_draw.H ****  */
 326:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_matrix() { fl_graphics_driver->push_matrix(); }
 468              		.loc 7 326 0
 469 010a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 469      000000
 470 0111 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 470      00
 471              	.LVL43:
 472              	.LBE348:
 473              	.LBE347:
 474              	.LBB349:
 475              	.LBB350:
 476              	.LBB351:
 477              	.LBB352:
 478              		.file 8 "fltk-1.3.4-1/FL/Fl_Device.H"
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
 479              		.loc 8 331 0
 480 0116 4489E2   		movl	%r12d, %edx
 481 0119 89EE     		movl	%ebp, %esi
 482 011b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 482      000000
 483 0122 C1EA1F   		shrl	$31, %edx
 484 0125 C1EE1F   		shrl	$31, %esi
 485 0128 4401E2   		addl	%r12d, %edx
 486 012b 01EE     		addl	%ebp, %esi
 487              	.LBE352:
 488              	.LBE351:
 489              	.LBE350:
 490              	.LBE349:
 491              	.LBB359:
 492              	.LBB360:
 493              	.LBB361:
 494              	.LBB362:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 495              		.loc 8 327 0
 496 012d 4183EC01 		subl	$1, %r12d
 497              	.LVL44:
 498              	.LBE362:
 499              	.LBE361:
 500              	.LBE360:
 501              	.LBE359:
 502              	.LBB369:
 503              	.LBB357:
 504              	.LBB355:
 505              	.LBB353:
 506              		.loc 8 331 0
 507 0131 660FEFED 		pxor	%xmm5, %xmm5
 508 0135 D1FA     		sarl	%edx
 509 0137 660FEFE4 		pxor	%xmm4, %xmm4
 510 013b D1FE     		sarl	%esi
 511 013d 4401F2   		addl	%r14d, %edx
 512 0140 4401EE   		addl	%r13d, %esi
 513              	.LBE353:
 514              	.LBE355:
 515              	.LBE357:
 516              	.LBE369:
 517              	.LBB370:
 518              	.LBB367:
 519              	.LBB365:
 520              	.LBB363:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 521              		.loc 8 327 0
 522 0143 83ED01   		subl	$1, %ebp
 523              	.LVL45:
 524              	.LBE363:
 525              	.LBE365:
 526              	.LBE367:
 527              	.LBE370:
 528              	.LBB371:
 529              	.LBB358:
 530              	.LBB356:
 531              	.LBB354:
 532              		.loc 8 331 0
 533 0146 F20F2AEA 		cvtsi2sd	%edx, %xmm5
 534 014a F20F2AE6 		cvtsi2sd	%esi, %xmm4
 535 014e 660FEFD2 		pxor	%xmm2, %xmm2
 536 0152 F20F1005 		movsd	.LC14(%rip), %xmm0
 536      00000000 
 537 015a F20F101D 		movsd	.LC15(%rip), %xmm3
 537      00000000 
 538 0162 660F28CA 		movapd	%xmm2, %xmm1
 539 0166 F20F5CE8 		subsd	%xmm0, %xmm5
 540 016a F20F5CE0 		subsd	%xmm0, %xmm4
 541 016e 660F28C3 		movapd	%xmm3, %xmm0
 542 0172 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 542      00
 543              	.LVL46:
 544              	.LBE354:
 545              	.LBE356:
 546              	.LBE358:
 547              	.LBE371:
 548              	.LBB372:
 549              	.LBB368:
 550              	.LBB366:
 551              	.LBB364:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 552              		.loc 8 327 0
 553 0177 660FEFC0 		pxor	%xmm0, %xmm0
 554 017b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 554      000000
 555 0182 660FEFDB 		pxor	%xmm3, %xmm3
 556 0186 660FEFED 		pxor	%xmm5, %xmm5
 557 018a F20F2AC5 		cvtsi2sd	%ebp, %xmm0
 558 018e F2410F2A 		cvtsi2sd	%r12d, %xmm3
 558      DC
 559 0193 660F28E5 		movapd	%xmm5, %xmm4
 560 0197 660F28D5 		movapd	%xmm5, %xmm2
 561 019b 660F28CD 		movapd	%xmm5, %xmm1
 562 019f E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 562      00
 563              	.LVL47:
 564              	.LBE364:
 565              	.LBE366:
 566              	.LBE368:
 567              	.LBE372:
 568              	.LBB373:
 569              	.LBB374:
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
 570              		.loc 7 350 0
 571 01a4 F20F1005 		movsd	.LC16(%rip), %xmm0
 571      00000000 
 572 01ac 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 572      000000
 573 01b3 F20F5C44 		subsd	8(%rsp), %xmm0
 573      2408
 574              	.LVL48:
 575 01b9 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 575      00
 576              	.LVL49:
 577              	.LBE374:
 578              	.LBE373:
  60:fltk-1.3.4-1/src/Fl_Dial.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Dial.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Dial.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Dial.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Dial.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Dial.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Dial.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 579              		.loc 6 66 0
 580 01be 4889DF   		movq	%rbx, %rdi
 581 01c1 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 581      00
 582              	.LVL50:
 583 01c6 85C0     		testl	%eax, %eax
 584 01c8 0F857201 		jne	.L48
 584      0000
 585              	.LVL51:
  67:fltk-1.3.4-1/src/Fl_Dial.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 586              		.loc 6 67 0
 587 01ce 8B7B68   		movl	104(%rbx), %edi
 588 01d1 E8000000 		call	_Z11fl_inactivej
 588      00
 589              	.LVL52:
 590              	.LBB375:
 591              	.LBB376:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 592              		.loc 7 52 0
 593 01d6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 593      000000
 594 01dd 89C6     		movl	%eax, %esi
 595 01df 488B17   		movq	(%rdi), %rdx
 596 01e2 FF928800 		call	*136(%rdx)
 596      0000
 597              	.LVL53:
 598              	.L33:
 599              	.LBE376:
 600              	.LBE375:
  68:fltk-1.3.4-1/src/Fl_Dial.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 601              		.loc 6 68 0
 602 01e8 807B6C00 		cmpb	$0, 108(%rbx)
 603              	.LBB377:
 604              	.LBB378:
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
 605              		.loc 7 374 0
 606 01ec 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 606      000000
 607 01f3 488B07   		movq	(%rdi), %rax
 608              	.LBE378:
 609              	.LBE377:
 610              		.loc 6 68 0
 611 01f6 0F846401 		je	.L34
 611      0000
 612              	.LBB380:
 613              	.LBB379:
 614              		.loc 7 374 0
 615 01fc FF90D800 		call	*216(%rax)
 615      0000
 616              	.LVL54:
 617              	.LBE379:
 618              	.LBE380:
 619              	.LBB381:
 620              	.LBB382:
 375:fltk-1.3.4-1/FL/fl_draw.H **** /**
 376:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a single vertex to the current path.
 377:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->vertex(x,y); }
 621              		.loc 7 379 0
 622 0202 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 622      000000
 623 0209 660FEFC9 		pxor	%xmm1, %xmm1
 624 020d 488B07   		movq	(%rdi), %rax
 625 0210 660F28C1 		movapd	%xmm1, %xmm0
 626 0214 FF90E000 		call	*224(%rax)
 626      0000
 627              	.LVL55:
 628              	.LBE382:
 629              	.LBE381:
 630              	.LBB383:
 631              	.LBB384:
 632 021a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 632      000000
 633 0221 660FEFC9 		pxor	%xmm1, %xmm1
 634 0225 F20F1005 		movsd	.LC17(%rip), %xmm0
 634      00000000 
 635 022d 488B07   		movq	(%rdi), %rax
 636 0230 FF90E000 		call	*224(%rax)
 636      0000
 637              	.LVL56:
 638              	.LBE384:
 639              	.LBE383:
 640              	.LBB385:
 641              	.LBB386:
 642 0236 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 642      000000
 643 023d F20F100D 		movsd	.LC18(%rip), %xmm1
 643      00000000 
 644 0245 F20F1005 		movsd	.LC19(%rip), %xmm0
 644      00000000 
 645 024d 488B07   		movq	(%rdi), %rax
 646 0250 FF90E000 		call	*224(%rax)
 646      0000
 647              	.LVL57:
 648              	.LBE386:
 649              	.LBE385:
 650              	.LBB387:
 651              	.LBB388:
 652 0256 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 652      000000
 653 025d F20F100D 		movsd	.LC20(%rip), %xmm1
 653      00000000 
 654 0265 660FEFC0 		pxor	%xmm0, %xmm0
 655 0269 488B07   		movq	(%rdi), %rax
 656 026c FF90E000 		call	*224(%rax)
 656      0000
 657              	.LVL58:
 658              	.LBE388:
 659              	.LBE387:
 660              	.LBB389:
 661              	.LBB390:
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
 662              		.loc 7 440 0
 663 0272 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 663      000000
 664 0279 488B07   		movq	(%rdi), %rax
 665 027c FF902801 		call	*296(%rax)
 665      0000
 666              	.LVL59:
 667              	.LBE390:
 668              	.LBE389:
  69:fltk-1.3.4-1/src/Fl_Dial.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Dial.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Dial.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Dial.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Dial.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Dial.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Dial.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 669              		.loc 6 75 0
 670 0282 4889DF   		movq	%rbx, %rdi
 671 0285 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 671      00
 672              	.LVL60:
 673 028a 85C0     		testl	%eax, %eax
 674 028c 0F85EE02 		jne	.L49
 674      0000
  76:fltk-1.3.4-1/src/Fl_Dial.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 675              		.loc 6 76 0
 676 0292 31FF     		xorl	%edi, %edi
 677 0294 E8000000 		call	_Z11fl_inactivej
 677      00
 678              	.LVL61:
 679              	.LBB391:
 680              	.LBB392:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 681              		.loc 7 52 0
 682 0299 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 682      000000
 683 02a0 89C6     		movl	%eax, %esi
 684 02a2 488B17   		movq	(%rdi), %rdx
 685 02a5 FF928800 		call	*136(%rdx)
 685      0000
 686              	.LVL62:
 687              	.L36:
 688              	.LBE392:
 689              	.LBE391:
 690              	.LBB393:
 691              	.LBB394:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 692              		.loc 7 370 0
 693 02ab 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 693      000000
 694 02b2 488B07   		movq	(%rdi), %rax
 695 02b5 FF90D000 		call	*208(%rax)
 695      0000
 696              	.LVL63:
 697              	.LBE394:
 698              	.LBE393:
 699              	.LBB395:
 700              	.LBB396:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 701              		.loc 7 379 0
 702 02bb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 702      000000
 703 02c2 660FEFC9 		pxor	%xmm1, %xmm1
 704 02c6 488B07   		movq	(%rdi), %rax
 705 02c9 660F28C1 		movapd	%xmm1, %xmm0
 706 02cd FF90E000 		call	*224(%rax)
 706      0000
 707              	.LVL64:
 708              	.LBE396:
 709              	.LBE395:
 710              	.LBB397:
 711              	.LBB398:
 712 02d3 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 712      000000
 713 02da 660FEFC9 		pxor	%xmm1, %xmm1
 714 02de F20F1005 		movsd	.LC17(%rip), %xmm0
 714      00000000 
 715 02e6 488B07   		movq	(%rdi), %rax
 716 02e9 FF90E000 		call	*224(%rax)
 716      0000
 717              	.LVL65:
 718              	.LBE398:
 719              	.LBE397:
 720              	.LBB399:
 721              	.LBB400:
 722 02ef 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 722      000000
 723 02f6 F20F100D 		movsd	.LC18(%rip), %xmm1
 723      00000000 
 724 02fe F20F1005 		movsd	.LC19(%rip), %xmm0
 724      00000000 
 725 0306 488B07   		movq	(%rdi), %rax
 726 0309 FF90E000 		call	*224(%rax)
 726      0000
 727              	.LVL66:
 728              	.LBE400:
 729              	.LBE399:
 730              	.LBB401:
 731              	.LBB402:
 732 030f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 732      000000
 733 0316 F20F100D 		movsd	.LC20(%rip), %xmm1
 733      00000000 
 734 031e 660FEFC0 		pxor	%xmm0, %xmm0
 735 0322 488B07   		movq	(%rdi), %rax
 736 0325 FF90E000 		call	*224(%rax)
 736      0000
 737              	.LVL67:
 738              	.LBE402:
 739              	.LBE401:
 740              	.LBB403:
 741              	.LBB404:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 742              		.loc 7 436 0
 743 032b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 743      000000
 744 0332 488B07   		movq	(%rdi), %rax
 745 0335 FF902001 		call	*288(%rax)
 745      0000
 746              	.LVL68:
 747 033b E9CF0000 		jmp	.L37
 747      00
 748              	.LVL69:
 749              		.p2align 4,,10
 750              		.p2align 3
 751              	.L48:
 752              	.LBE404:
 753              	.LBE403:
 754              	.LBB405:
 755              	.LBB406:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 756              		.loc 7 52 0 discriminator 1
 757 0340 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 757      000000
 758 0347 8B7368   		movl	104(%rbx), %esi
 759 034a 488B07   		movq	(%rdi), %rax
 760 034d FF908800 		call	*136(%rax)
 760      0000
 761              	.LVL70:
 762 0353 E990FEFF 		jmp	.L33
 762      FF
 763              	.LVL71:
 764 0358 0F1F8400 		.p2align 4,,10
 764      00000000 
 765              		.p2align 3
 766              	.L34:
 767              	.LBE406:
 768              	.LBE405:
 769              	.LBB407:
 770              	.LBB408:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 771              		.loc 7 374 0
 772 0360 FF90D800 		call	*216(%rax)
 772      0000
 773              	.LVL72:
 774              	.LBE408:
 775              	.LBE407:
 776              	.LBB409:
 777              	.LBB410:
 424:fltk-1.3.4-1/FL/fl_draw.H **** /**
 778              		.loc 7 424 0
 779 0366 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 779      000000
 780 036d F20F1015 		movsd	.LC21(%rip), %xmm2
 780      00000000 
 781 0375 F20F100D 		movsd	.LC22(%rip), %xmm1
 781      00000000 
 782 037d F20F1005 		movsd	.LC23(%rip), %xmm0
 782      00000000 
 783 0385 488B07   		movq	(%rdi), %rax
 784 0388 FF90F000 		call	*240(%rax)
 784      0000
 785              	.LVL73:
 786              	.LBE410:
 787              	.LBE409:
 788              	.LBB411:
 789              	.LBB412:
 790              		.loc 7 440 0
 791 038e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 791      000000
 792 0395 488B07   		movq	(%rdi), %rax
 793 0398 FF902801 		call	*296(%rax)
 793      0000
 794              	.LVL74:
 795              	.LBE412:
 796              	.LBE411:
  77:fltk-1.3.4-1/src/Fl_Dial.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Dial.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Dial.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Dial.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Dial.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Dial.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Dial.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Dial.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Dial.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 797              		.loc 6 85 0
 798 039e 4889DF   		movq	%rbx, %rdi
 799 03a1 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 799      00
 800              	.LVL75:
 801 03a6 85C0     		testl	%eax, %eax
 802 03a8 0F85B201 		jne	.L50
 802      0000
  86:fltk-1.3.4-1/src/Fl_Dial.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 803              		.loc 6 86 0
 804 03ae 31FF     		xorl	%edi, %edi
 805 03b0 E8000000 		call	_Z11fl_inactivej
 805      00
 806              	.LVL76:
 807              	.LBB413:
 808              	.LBB414:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 809              		.loc 7 52 0
 810 03b5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 810      000000
 811 03bc 89C6     		movl	%eax, %esi
 812 03be 488B17   		movq	(%rdi), %rdx
 813 03c1 FF928800 		call	*136(%rdx)
 813      0000
 814              	.LVL77:
 815              	.L39:
 816              	.LBE414:
 817              	.LBE413:
 818              	.LBB415:
 819              	.LBB416:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 820              		.loc 7 370 0
 821 03c7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 821      000000
 822 03ce 488B07   		movq	(%rdi), %rax
 823 03d1 FF90D000 		call	*208(%rax)
 823      0000
 824              	.LVL78:
 825              	.LBE416:
 826              	.LBE415:
 827              	.LBB417:
 828              	.LBB418:
 424:fltk-1.3.4-1/FL/fl_draw.H **** /**
 829              		.loc 7 424 0
 830 03d7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 830      000000
 831 03de F20F1015 		movsd	.LC21(%rip), %xmm2
 831      00000000 
 832 03e6 F20F100D 		movsd	.LC22(%rip), %xmm1
 832      00000000 
 833 03ee F20F1005 		movsd	.LC23(%rip), %xmm0
 833      00000000 
 834 03f6 488B07   		movq	(%rdi), %rax
 835 03f9 FF90F000 		call	*240(%rax)
 835      0000
 836              	.LVL79:
 837              	.LBE418:
 838              	.LBE417:
 839              	.LBB419:
 840              	.LBB420:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 841              		.loc 7 436 0
 842 03ff 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 842      000000
 843 0406 488B07   		movq	(%rdi), %rax
 844 0409 FF902001 		call	*288(%rax)
 844      0000
 845              	.LVL80:
 846              	.L37:
 847              	.LBE420:
 848              	.LBE419:
 849              	.LBB421:
 850              	.LBB422:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 851              		.loc 7 330 0
 852 040f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 852      000000
 853              	.LBE422:
 854              	.LBE421:
  87:fltk-1.3.4-1/src/Fl_Dial.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Dial.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Dial.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Dial.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 855              		.loc 6 90 0
 856 0416 4883C418 		addq	$24, %rsp
 857              		.cfi_remember_state
 858              		.cfi_def_cfa_offset 56
 859 041a 5B       		popq	%rbx
 860              		.cfi_def_cfa_offset 48
 861              	.LVL81:
 862 041b 5D       		popq	%rbp
 863              		.cfi_def_cfa_offset 40
 864              	.LVL82:
 865 041c 415C     		popq	%r12
 866              		.cfi_def_cfa_offset 32
 867              	.LVL83:
 868 041e 415D     		popq	%r13
 869              		.cfi_def_cfa_offset 24
 870              	.LVL84:
 871 0420 415E     		popq	%r14
 872              		.cfi_def_cfa_offset 16
 873              	.LVL85:
 874 0422 415F     		popq	%r15
 875              		.cfi_def_cfa_offset 8
 876              	.LBB424:
 877              	.LBB423:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 878              		.loc 7 330 0
 879 0424 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 879      00
 880              	.LVL86:
 881 0429 0F1F8000 		.p2align 4,,10
 881      000000
 882              		.p2align 3
 883              	.L46:
 884              		.cfi_restore_state
 885              	.LBE423:
 886              	.LBE424:
 887              	.LBB425:
 888              	.LBB317:
  42:fltk-1.3.4-1/src/Fl_Dial.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 889              		.loc 6 42 0
 890 0430 0FB67B6E 		movzbl	110(%rbx), %edi
 891 0434 83FF16   		cmpl	$22, %edi
 892 0437 0F8F8301 		jg	.L51
 892      0000
 893              	.LVL87:
 894              	.L17:
 895              	.LBE317:
 896              	.LBE425:
  33:fltk-1.3.4-1/src/Fl_Dial.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 897              		.loc 6 33 0
 898 043d 4531FF   		xorl	%r15d, %r15d
 899              	.LVL88:
 900              	.L40:
 901              	.LBB426:
 902              	.LBB338:
  44:fltk-1.3.4-1/src/Fl_Dial.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 903              		.loc 6 44 0
 904 0440 4889DF   		movq	%rbx, %rdi
 905 0443 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 905      00
 906              	.LVL89:
 907 0448 85C0     		testl	%eax, %eax
 908 044a 0F855001 		jne	.L52
 908      0000
 909              	.LVL90:
  45:fltk-1.3.4-1/src/Fl_Dial.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 910              		.loc 6 45 0
 911 0450 8B7B64   		movl	100(%rbx), %edi
 912 0453 E8000000 		call	_Z11fl_inactivej
 912      00
 913              	.LVL91:
 914              	.LBB318:
 915              	.LBB319:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 916              		.loc 7 52 0
 917 0458 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 917      000000
 918 045f 89C6     		movl	%eax, %esi
 919 0461 488B17   		movq	(%rdi), %rdx
 920 0464 FF928800 		call	*136(%rdx)
 920      0000
 921              	.LVL92:
 922              	.L20:
 923              	.LBE319:
 924              	.LBE318:
  46:fltk-1.3.4-1/src/Fl_Dial.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 925              		.loc 6 46 0
 926 046a 0FBF93A4 		movswl	164(%rbx), %edx
 926      000000
 927 0471 660FEFC0 		pxor	%xmm0, %xmm0
 928 0475 F20F107C 		movsd	8(%rsp), %xmm7
 928      2408
 929 047b F20F2AC2 		cvtsi2sd	%edx, %xmm0
 930 047f 660F2EF8 		ucomisd	%xmm0, %xmm7
 931 0483 0F868701 		jbe	.L42
 931      0000
  46:fltk-1.3.4-1/src/Fl_Dial.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 932              		.loc 6 46 0 is_stmt 0 discriminator 1
 933 0489 F20F100D 		movsd	.LC9(%rip), %xmm1
 933      00000000 
 934 0491 F20F5CCF 		subsd	%xmm7, %xmm1
 935              	.L23:
 936              	.LVL93:
 937              	.LBB320:
 938              	.LBB321:
 317:fltk-1.3.4-1/FL/fl_draw.H **** /** fl_chord declaration is a place holder - the function does not yet exist */
 939              		.loc 7 317 0 is_stmt 1 discriminator 4
 940 0495 660FEFC0 		pxor	%xmm0, %xmm0
 941 0499 B80E0100 		movl	$270, %eax
 941      00
 942 049e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 942      000000
 943 04a5 29D0     		subl	%edx, %eax
 944 04a7 4589E0   		movl	%r12d, %r8d
 945 04aa 89E9     		movl	%ebp, %ecx
 946 04ac 4489F2   		movl	%r14d, %edx
 947 04af 4489EE   		movl	%r13d, %esi
 948 04b2 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 949 04b6 488B07   		movq	(%rdi), %rax
 950 04b9 FF900801 		call	*264(%rax)
 950      0000
 951              	.LVL94:
 952              	.LBE321:
 953              	.LBE320:
  47:fltk-1.3.4-1/src/Fl_Dial.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 954              		.loc 6 47 0 discriminator 4
 955 04bf 4889DF   		movq	%rbx, %rdi
 956 04c2 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 956      00
 957              	.LVL95:
 958 04c7 85C0     		testl	%eax, %eax
 959 04c9 0F842101 		je	.L24
 959      0000
 960              	.LVL96:
 961              	.LBB322:
 962              	.LBB323:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 963              		.loc 7 52 0 discriminator 1
 964 04cf 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 964      000000
 965 04d6 8B7368   		movl	104(%rbx), %esi
 966 04d9 488B07   		movq	(%rdi), %rax
 967 04dc FF908800 		call	*136(%rax)
 967      0000
 968              	.LVL97:
 969              	.L25:
 970              	.LBE323:
 971              	.LBE322:
 972              	.LBB324:
 973              	.LBB325:
 317:fltk-1.3.4-1/FL/fl_draw.H **** /** fl_chord declaration is a place holder - the function does not yet exist */
 974              		.loc 7 317 0
 975 04e2 0FBF93A4 		movswl	164(%rbx), %edx
 975      000000
 976 04e9 660FEFC9 		pxor	%xmm1, %xmm1
 977 04ed B80E0100 		movl	$270, %eax
 977      00
 978 04f2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 978      000000
 979 04f9 4589E0   		movl	%r12d, %r8d
 980 04fc F20F1005 		movsd	.LC11(%rip), %xmm0
 980      00000000 
 981 0504 89E9     		movl	%ebp, %ecx
 982 0506 4489EE   		movl	%r13d, %esi
 983 0509 29D0     		subl	%edx, %eax
 984 050b F20F5C44 		subsd	8(%rsp), %xmm0
 984      2408
 985              	.LVL98:
 986 0511 4C8B0F   		movq	(%rdi), %r9
 987 0514 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 988 0518 4489F2   		movl	%r14d, %edx
 989 051b 41FF9108 		call	*264(%r9)
 989      010000
 990              	.LVL99:
 991              	.LBE325:
 992              	.LBE324:
  50:fltk-1.3.4-1/src/Fl_Dial.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 993              		.loc 6 50 0
 994 0522 4584FF   		testb	%r15b, %r15b
 995 0525 0F852501 		jne	.L53
 995      0000
 996              	.LBE338:
 997              	.LBE426:
 998              		.loc 6 90 0
 999 052b 4883C418 		addq	$24, %rsp
 1000              		.cfi_remember_state
 1001              		.cfi_def_cfa_offset 56
 1002 052f 5B       		popq	%rbx
 1003              		.cfi_def_cfa_offset 48
 1004              	.LVL100:
 1005 0530 5D       		popq	%rbp
 1006              		.cfi_def_cfa_offset 40
 1007              	.LVL101:
 1008 0531 415C     		popq	%r12
 1009              		.cfi_def_cfa_offset 32
 1010              	.LVL102:
 1011 0533 415D     		popq	%r13
 1012              		.cfi_def_cfa_offset 24
 1013              	.LVL103:
 1014 0535 415E     		popq	%r14
 1015              		.cfi_def_cfa_offset 16
 1016              	.LVL104:
 1017 0537 415F     		popq	%r15
 1018              		.cfi_def_cfa_offset 8
 1019 0539 C3       		ret
 1020              	.LVL105:
 1021 053a 660F1F44 		.p2align 4,,10
 1021      0000
 1022              		.p2align 3
 1023              	.L47:
 1024              		.cfi_restore_state
 1025              	.LBB427:
 1026              	.LBB428:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1027              		.loc 7 52 0 discriminator 1
 1028 0540 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1028      000000
 1029 0547 8B7364   		movl	100(%rbx), %esi
 1030 054a 488B07   		movq	(%rdi), %rax
 1031 054d FF908800 		call	*136(%rax)
 1031      0000
 1032              	.LVL106:
 1033 0553 E986FBFF 		jmp	.L31
 1033      FF
 1034              	.LVL107:
 1035 0558 0F1F8400 		.p2align 4,,10
 1035      00000000 
 1036              		.p2align 3
 1037              	.L50:
 1038              	.LBE428:
 1039              	.LBE427:
 1040              	.LBB429:
 1041              	.LBB430:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1042              		.loc 7 52 0 is_stmt 0
 1043 0560 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1043      000000
 1044 0567 31F6     		xorl	%esi, %esi
 1045 0569 488B07   		movq	(%rdi), %rax
 1046 056c FF908800 		call	*136(%rax)
 1046      0000
 1047              	.LVL108:
 1048 0572 E950FEFF 		jmp	.L39
 1048      FF
 1049              	.LVL109:
 1050 0577 660F1F84 		.p2align 4,,10
 1050      00000000 
 1050      00
 1051              		.p2align 3
 1052              	.L49:
 1053              	.LBE430:
 1054              	.LBE429:
 1055              	.LBB431:
 1056              	.LBB432:
 1057 0580 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1057      000000
 1058 0587 31F6     		xorl	%esi, %esi
 1059 0589 488B07   		movq	(%rdi), %rax
 1060 058c FF908800 		call	*136(%rax)
 1060      0000
 1061              	.LVL110:
 1062 0592 E914FDFF 		jmp	.L36
 1062      FF
 1063              	.LVL111:
 1064 0597 660F1F84 		.p2align 4,,10
 1064      00000000 
 1064      00
 1065              		.p2align 3
 1066              	.L52:
 1067              	.LBE432:
 1068              	.LBE431:
 1069              	.LBB433:
 1070              	.LBB339:
 1071              	.LBB326:
 1072              	.LBB327:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1073              		.loc 7 52 0 discriminator 1
 1074 05a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1074      000000
 1075 05a7 8B7364   		movl	100(%rbx), %esi
 1076 05aa 488B07   		movq	(%rdi), %rax
 1077 05ad FF908800 		call	*136(%rax)
 1077      0000
 1078              	.LVL112:
 1079 05b3 E9B2FEFF 		jmp	.L20
 1079      FF
 1080              	.LVL113:
 1081 05b8 0F1F8400 		.p2align 4,,10
 1081      00000000 
 1082              		.p2align 3
 1083              	.L51:
 1084              	.LBE327:
 1085              	.LBE326:
  42:fltk-1.3.4-1/src/Fl_Dial.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1086              		.loc 6 42 0 is_stmt 1 discriminator 1
 1087 05c0 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 1087      00
 1088              	.LVL114:
 1089 05c5 85C0     		testl	%eax, %eax
 1090 05c7 0F8470FE 		je	.L17
 1090      FFFF
 1091              	.LVL115:
  43:fltk-1.3.4-1/src/Fl_Dial.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 1092              		.loc 6 43 0
 1093 05cd 4183ED01 		subl	$1, %r13d
 1094              	.LVL116:
 1095 05d1 4183EE01 		subl	$1, %r14d
 1096              	.LVL117:
 1097 05d5 83C502   		addl	$2, %ebp
 1098              	.LVL118:
 1099 05d8 4183C402 		addl	$2, %r12d
 1100              	.LVL119:
  42:fltk-1.3.4-1/src/Fl_Dial.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1101              		.loc 6 42 0
 1102 05dc 41BF0100 		movl	$1, %r15d
 1102      0000
 1103 05e2 E959FEFF 		jmp	.L40
 1103      FF
 1104              	.LVL120:
 1105 05e7 660F1F84 		.p2align 4,,10
 1105      00000000 
 1105      00
 1106              		.p2align 3
 1107              	.L24:
  48:fltk-1.3.4-1/src/Fl_Dial.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 1108              		.loc 6 48 0
 1109 05f0 8B7B68   		movl	104(%rbx), %edi
 1110 05f3 E8000000 		call	_Z11fl_inactivej
 1110      00
 1111              	.LVL121:
 1112              	.LBB328:
 1113              	.LBB329:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1114              		.loc 7 52 0
 1115 05f8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1115      000000
 1116 05ff 89C6     		movl	%eax, %esi
 1117 0601 488B17   		movq	(%rdi), %rdx
 1118 0604 FF928800 		call	*136(%rdx)
 1118      0000
 1119              	.LVL122:
 1120 060a E9D3FEFF 		jmp	.L25
 1120      FF
 1121              	.LVL123:
 1122 060f 90       		.p2align 4,,10
 1123              		.p2align 3
 1124              	.L42:
 1125              	.LBE329:
 1126              	.LBE328:
  46:fltk-1.3.4-1/src/Fl_Dial.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 1127              		.loc 6 46 0 discriminator 2
 1128 0610 F20F100D 		movsd	.LC10(%rip), %xmm1
 1128      00000000 
 1129 0618 F20F5C4C 		subsd	8(%rsp), %xmm1
 1129      2408
 1130 061e E972FEFF 		jmp	.L23
 1130      FF
 1131              	.LVL124:
 1132              		.p2align 4,,10
 1133 0623 0F1F4400 		.p2align 3
 1133      00
 1134              	.L45:
 1135              	.LBE339:
 1136              	.LBE433:
  34:fltk-1.3.4-1/src/Fl_Dial.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1137              		.loc 6 34 0 discriminator 1
 1138 0628 8B4764   		movl	100(%rdi), %eax
 1139 062b 0FB6776E 		movzbl	110(%rdi), %esi
 1140              	.LVL125:
 1141 062f 4883EC08 		subq	$8, %rsp
 1142              		.cfi_def_cfa_offset 88
 1143 0633 4589C1   		movl	%r8d, %r9d
 1144 0636 4189C8   		movl	%ecx, %r8d
 1145              	.LVL126:
 1146 0639 89D1     		movl	%edx, %ecx
 1147              	.LVL127:
 1148 063b 4489EA   		movl	%r13d, %edx
 1149              	.LVL128:
 1150 063e 50       		pushq	%rax
 1151              		.cfi_def_cfa_offset 96
 1152 063f E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1152      00
 1153              	.LVL129:
 1154 0644 58       		popq	%rax
 1155              		.cfi_def_cfa_offset 88
 1156 0645 5A       		popq	%rdx
 1157              		.cfi_def_cfa_offset 80
 1158 0646 E9DBF9FF 		jmp	.L15
 1158      FF
 1159              	.LVL130:
 1160 064b 0F1F4400 		.p2align 4,,10
 1160      00
 1161              		.p2align 3
 1162              	.L53:
 1163              	.LBB434:
 1164              	.LBB340:
  51:fltk-1.3.4-1/src/Fl_Dial.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1165              		.loc 6 51 0
 1166 0650 4889DF   		movq	%rbx, %rdi
 1167 0653 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 1167      00
 1168              	.LVL131:
 1169 0658 85C0     		testl	%eax, %eax
 1170 065a 7454     		je	.L27
 1171              	.LVL132:
 1172              	.LBB330:
 1173              	.LBB331:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1174              		.loc 7 52 0
 1175 065c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1175      000000
 1176 0663 31F6     		xorl	%esi, %esi
 1177 0665 488B07   		movq	(%rdi), %rax
 1178 0668 FF908800 		call	*136(%rax)
 1178      0000
 1179              	.LVL133:
 1180              	.L28:
 1181              	.LBE331:
 1182              	.LBE330:
 1183              	.LBB332:
 1184              	.LBB333:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1185              		.loc 7 304 0
 1186 066e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1186      000000
 1187 0675 F20F100D 		movsd	.LC12(%rip), %xmm1
 1187      00000000 
 1188 067d 4589E0   		movl	%r12d, %r8d
 1189 0680 89E9     		movl	%ebp, %ecx
 1190 0682 4489F2   		movl	%r14d, %edx
 1191 0685 4489EE   		movl	%r13d, %esi
 1192 0688 660FEFC0 		pxor	%xmm0, %xmm0
 1193 068c 488B07   		movq	(%rdi), %rax
 1194 068f 488B8000 		movq	256(%rax), %rax
 1194      010000
 1195              	.LBE333:
 1196              	.LBE332:
 1197              	.LBE340:
 1198              	.LBE434:
 1199              		.loc 6 90 0
 1200 0696 4883C418 		addq	$24, %rsp
 1201              		.cfi_remember_state
 1202              		.cfi_def_cfa_offset 56
 1203 069a 5B       		popq	%rbx
 1204              		.cfi_def_cfa_offset 48
 1205              	.LVL134:
 1206 069b 5D       		popq	%rbp
 1207              		.cfi_def_cfa_offset 40
 1208              	.LVL135:
 1209 069c 415C     		popq	%r12
 1210              		.cfi_def_cfa_offset 32
 1211              	.LVL136:
 1212 069e 415D     		popq	%r13
 1213              		.cfi_def_cfa_offset 24
 1214              	.LVL137:
 1215 06a0 415E     		popq	%r14
 1216              		.cfi_def_cfa_offset 16
 1217              	.LVL138:
 1218 06a2 415F     		popq	%r15
 1219              		.cfi_def_cfa_offset 8
 1220              	.LBB435:
 1221              	.LBB341:
 1222              	.LBB335:
 1223              	.LBB334:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1224              		.loc 7 304 0
 1225 06a4 FFE0     		jmp	*%rax
 1226              	.LVL139:
 1227 06a6 662E0F1F 		.p2align 4,,10
 1227      84000000 
 1227      0000
 1228              		.p2align 3
 1229              	.L27:
 1230              		.cfi_restore_state
 1231              	.LBE334:
 1232              	.LBE335:
  52:fltk-1.3.4-1/src/Fl_Dial.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 1233              		.loc 6 52 0
 1234 06b0 31FF     		xorl	%edi, %edi
 1235 06b2 E8000000 		call	_Z11fl_inactivej
 1235      00
 1236              	.LVL140:
 1237              	.LBB336:
 1238              	.LBB337:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1239              		.loc 7 52 0
 1240 06b7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1240      000000
 1241 06be 89C6     		movl	%eax, %esi
 1242 06c0 488B17   		movq	(%rdi), %rdx
 1243 06c3 FF928800 		call	*136(%rdx)
 1243      0000
 1244              	.LVL141:
 1245 06c9 EBA3     		jmp	.L28
 1246              	.LBE337:
 1247              	.LBE336:
 1248              	.LBE341:
 1249              	.LBE435:
 1250              		.cfi_endproc
 1251              	.LFE490:
 1253              		.section	.text.unlikely._ZN7Fl_Dial4drawEiiii
 1254              	.LCOLDE24:
 1255              		.section	.text._ZN7Fl_Dial4drawEiiii
 1256              	.LHOTE24:
 1257              		.section	.text.unlikely._ZN7Fl_Dial4drawEv,"ax",@progbits
 1258              		.align 2
 1259              	.LCOLDB25:
 1260              		.section	.text._ZN7Fl_Dial4drawEv,"ax",@progbits
 1261              	.LHOTB25:
 1262              		.align 2
 1263              		.p2align 4,,15
 1264              		.globl	_ZN7Fl_Dial4drawEv
 1266              	_ZN7Fl_Dial4drawEv:
 1267              	.LFB491:
  91:fltk-1.3.4-1/src/Fl_Dial.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Dial.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Dial.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Dial.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Dial.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 1268              		.loc 6 95 0
 1269              		.cfi_startproc
 1270              	.LVL142:
 1271 0000 53       		pushq	%rbx
 1272              		.cfi_def_cfa_offset 16
 1273              		.cfi_offset 3, -16
  96:fltk-1.3.4-1/src/Fl_Dial.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 1274              		.loc 6 96 0
 1275 0001 8B4F28   		movl	40(%rdi), %ecx
  95:fltk-1.3.4-1/src/Fl_Dial.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 1276              		.loc 6 95 0
 1277 0004 4889FB   		movq	%rdi, %rbx
 1278              		.loc 6 96 0
 1279 0007 8B5724   		movl	36(%rdi), %edx
 1280 000a 8B7720   		movl	32(%rdi), %esi
 1281 000d 448B472C 		movl	44(%rdi), %r8d
 1282 0011 E8000000 		call	_ZN7Fl_Dial4drawEiiii
 1282      00
 1283              	.LVL143:
  97:fltk-1.3.4-1/src/Fl_Dial.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 1284              		.loc 6 97 0
 1285 0016 4889DF   		movq	%rbx, %rdi
  98:fltk-1.3.4-1/src/Fl_Dial.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 1286              		.loc 6 98 0
 1287 0019 5B       		popq	%rbx
 1288              		.cfi_def_cfa_offset 8
 1289              	.LVL144:
  97:fltk-1.3.4-1/src/Fl_Dial.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 1290              		.loc 6 97 0
 1291 001a E9000000 		jmp	_ZNK9Fl_Widget10draw_labelEv
 1291      00
 1292              	.LVL145:
 1293              		.cfi_endproc
 1294              	.LFE491:
 1296              		.section	.text.unlikely._ZN7Fl_Dial4drawEv
 1297              	.LCOLDE25:
 1298              		.section	.text._ZN7Fl_Dial4drawEv
 1299              	.LHOTE25:
 1300              		.section	.text.unlikely._ZN7Fl_Dial6handleEiiiii,"ax",@progbits
 1301              		.align 2
 1302              	.LCOLDB28:
 1303              		.section	.text._ZN7Fl_Dial6handleEiiiii,"ax",@progbits
 1304              	.LHOTB28:
 1305              		.align 2
 1306              		.p2align 4,,15
 1307              		.globl	_ZN7Fl_Dial6handleEiiiii
 1309              	_ZN7Fl_Dial6handleEiiiii:
 1310              	.LFB492:
  99:fltk-1.3.4-1/src/Fl_Dial.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Dial.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Dial.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Dial.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Dial.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Dial.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1311              		.loc 6 104 0
 1312              		.cfi_startproc
 1313              	.LVL146:
 1314 0000 4154     		pushq	%r12
 1315              		.cfi_def_cfa_offset 16
 1316              		.cfi_offset 12, -16
 1317 0002 55       		pushq	%rbp
 1318              		.cfi_def_cfa_offset 24
 1319              		.cfi_offset 6, -24
 1320 0003 53       		pushq	%rbx
 1321              		.cfi_def_cfa_offset 32
 1322              		.cfi_offset 3, -32
 1323 0004 4883EC20 		subq	$32, %rsp
 1324              		.cfi_def_cfa_offset 64
 1325              		.loc 6 104 0
 1326 0008 64488B04 		movq	%fs:40, %rax
 1326      25280000 
 1326      00
 1327 0011 48894424 		movq	%rax, 24(%rsp)
 1327      18
 1328 0016 31C0     		xorl	%eax, %eax
 1329              	.LBB475:
 105:fltk-1.3.4-1/src/Fl_Dial.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1330              		.loc 6 105 0
 1331 0018 83FE05   		cmpl	$5, %esi
 1332 001b 0F87EF00 		ja	.L57
 1332      0000
 1333 0021 89F6     		movl	%esi, %esi
 1334 0023 4889FB   		movq	%rdi, %rbx
 1335 0026 4189D4   		movl	%edx, %r12d
 1336 0029 89CD     		movl	%ecx, %ebp
 1337 002b FF24F500 		jmp	*.L59(,%rsi,8)
 1337      000000
 1338              		.section	.rodata._ZN7Fl_Dial6handleEiiiii,"a",@progbits
 1339              		.align 8
 1340              		.align 4
 1341              	.L59:
 1342 0000 00000000 		.quad	.L57
 1342      00000000 
 1343 0008 00000000 		.quad	.L58
 1343      00000000 
 1344 0010 00000000 		.quad	.L60
 1344      00000000 
 1345 0018 00000000 		.quad	.L76
 1345      00000000 
 1346 0020 00000000 		.quad	.L76
 1346      00000000 
 1347 0028 00000000 		.quad	.L62
 1347      00000000 
 1348              		.section	.text._ZN7Fl_Dial6handleEiiiii
 1349              		.p2align 4,,10
 1350 0032 660F1F44 		.p2align 3
 1350      0000
 1351              	.L58:
 1352              	.LBB476:
 1353              	.LBB477:
 106:fltk-1.3.4-1/src/Fl_Dial.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Dial.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1354              		.loc 6 107 0
 1355 0038 4889FE   		movq	%rdi, %rsi
 1356              	.LVL147:
 1357 003b 488D7C24 		leaq	16(%rsp), %rdi
 1357      10
 1358              	.LVL148:
 1359 0040 44894C24 		movl	%r9d, 12(%rsp)
 1359      0C
 1360 0045 44894424 		movl	%r8d, 8(%rsp)
 1360      08
 1361 004a E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 1361      00
 1362              	.LVL149:
 108:fltk-1.3.4-1/src/Fl_Dial.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Dial.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 1363              		.loc 6 109 0
 1364 004f 48837C24 		cmpq	$0, 16(%rsp)
 1364      1000
 1365              	.LBB478:
 1366              	.LBB479:
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
 1367              		.loc 3 64 0
 1368 0055 F20F1043 		movsd	120(%rbx), %xmm0
 1368      78
 1369              	.LBE479:
 1370              	.LBE478:
 1371              		.loc 6 109 0
 1372 005a 448B4424 		movl	8(%rsp), %r8d
 1372      08
 1373 005f 448B4C24 		movl	12(%rsp), %r9d
 1373      0C
 1374              	.LBB481:
 1375              	.LBB480:
 1376              		.loc 3 64 0
 1377 0064 F20F1183 		movsd	%xmm0, 128(%rbx)
 1377      80000000 
 1378              	.LBE480:
 1379              	.LBE481:
 1380              		.loc 6 109 0
 1381 006c 0F84FE01 		je	.L87
 1381      0000
 107:fltk-1.3.4-1/src/Fl_Dial.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 1382              		.loc 6 107 0
 1383 0072 488D7C24 		leaq	16(%rsp), %rdi
 1383      10
 1384 0077 44894C24 		movl	%r9d, 12(%rsp)
 1384      0C
 1385              	.LVL150:
 1386 007c 44894424 		movl	%r8d, 8(%rsp)
 1386      08
 1387              	.LVL151:
 1388 0081 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 1388      00
 1389              	.LVL152:
 1390 0086 448B4C24 		movl	12(%rsp), %r9d
 1390      0C
 1391 008b 448B4424 		movl	8(%rsp), %r8d
 1391      08
 1392              	.LVL153:
 1393              	.L62:
 1394              	.LBE477:
 1395              	.LBE476:
 1396              	.LBE475:
 1397              	.LBB485:
 1398              	.LBB486:
 110:fltk-1.3.4-1/src/Fl_Dial.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Dial.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 1399              		.loc 6 111 0
 1400 0090 4489C0   		movl	%r8d, %eax
 1401 0093 8B150000 		movl	_ZN2Fl3e_xE(%rip), %edx
 1401      0000
 112:fltk-1.3.4-1/src/Fl_Dial.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 1402              		.loc 6 112 0
 1403 0099 4489C9   		movl	%r9d, %ecx
 111:fltk-1.3.4-1/src/Fl_Dial.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 1404              		.loc 6 111 0
 1405 009c C1E81F   		shrl	$31, %eax
 1406              		.loc 6 112 0
 1407 009f C1E91F   		shrl	$31, %ecx
 111:fltk-1.3.4-1/src/Fl_Dial.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 1408              		.loc 6 111 0
 1409 00a2 4401C0   		addl	%r8d, %eax
 1410 00a5 D1F8     		sarl	%eax
 1411 00a7 4429E2   		subl	%r12d, %edx
 1412 00aa 29C2     		subl	%eax, %edx
 1413              		.loc 6 112 0
 1414 00ac 8B050000 		movl	_ZN2Fl3e_yE(%rip), %eax
 1414      0000
 111:fltk-1.3.4-1/src/Fl_Dial.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 1415              		.loc 6 111 0
 1416 00b2 410FAFD1 		imull	%r9d, %edx
 1417              	.LVL154:
 1418              		.loc 6 112 0
 1419 00b6 4101C9   		addl	%ecx, %r9d
 1420              	.LVL155:
 1421 00b9 41D1F9   		sarl	%r9d
 1422 00bc 29E8     		subl	%ebp, %eax
 1423 00be 4429C8   		subl	%r9d, %eax
 113:fltk-1.3.4-1/src/Fl_Dial.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 1424              		.loc 6 113 0
 1425 00c1 89D1     		movl	%edx, %ecx
 112:fltk-1.3.4-1/src/Fl_Dial.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 1426              		.loc 6 112 0
 1427 00c3 440FAFC0 		imull	%eax, %r8d
 1428              	.LVL156:
 1429              		.loc 6 113 0
 1430 00c7 B8010000 		movl	$1, %eax
 1430      00
 1431 00cc 4409C1   		orl	%r8d, %ecx
 1432 00cf 7547     		jne	.L88
 1433              	.LVL157:
 1434              	.L61:
 1435              	.LBE486:
 1436              	.LBE485:
 114:fltk-1.3.4-1/src/Fl_Dial.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Dial.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Dial.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Dial.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Dial.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Dial.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Dial.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Dial.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Dial.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Dial.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Dial.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Dial.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Dial.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Dial.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Dial.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Dial.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Dial.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Dial.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Dial.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Dial.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Dial.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Dial.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Dial.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Dial.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 1437              		.loc 6 137 0 discriminator 1
 1438 00d1 488B7C24 		movq	24(%rsp), %rdi
 1438      18
 1439 00d6 6448333C 		xorq	%fs:40, %rdi
 1439      25280000 
 1439      00
 1440 00df 0F85AA01 		jne	.L89
 1440      0000
 1441              		.loc 6 137 0 is_stmt 0
 1442 00e5 4883C420 		addq	$32, %rsp
 1443              		.cfi_remember_state
 1444              		.cfi_def_cfa_offset 32
 1445 00e9 5B       		popq	%rbx
 1446              		.cfi_def_cfa_offset 24
 1447 00ea 5D       		popq	%rbp
 1448              		.cfi_def_cfa_offset 16
 1449 00eb 415C     		popq	%r12
 1450              		.cfi_def_cfa_offset 8
 1451 00ed C3       		ret
 1452              	.LVL158:
 1453 00ee 6690     		.p2align 4,,10
 1454              		.p2align 3
 1455              	.L76:
 1456              		.cfi_restore_state
 1457              	.LBB489:
 1458              	.LBB483:
 133:fltk-1.3.4-1/src/Fl_Dial.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 1459              		.loc 6 133 0 is_stmt 1
 1460 00f0 B8010000 		movl	$1, %eax
 1460      00
 1461 00f5 EBDA     		jmp	.L61
 1462 00f7 660F1F84 		.p2align 4,,10
 1462      00000000 
 1462      00
 1463              		.p2align 3
 1464              	.L60:
 129:fltk-1.3.4-1/src/Fl_Dial.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1465              		.loc 6 129 0
 1466 0100 E8000000 		call	_ZN11Fl_Valuator14handle_releaseEv
 1466      00
 1467              	.LVL159:
 130:fltk-1.3.4-1/src/Fl_Dial.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 1468              		.loc 6 130 0
 1469 0105 B8010000 		movl	$1, %eax
 1469      00
 1470 010a EBC5     		jmp	.L61
 1471              	.LVL160:
 1472 010c 0F1F4000 		.p2align 4,,10
 1473              		.p2align 3
 1474              	.L57:
 135:fltk-1.3.4-1/src/Fl_Dial.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 1475              		.loc 6 135 0
 1476 0110 31C0     		xorl	%eax, %eax
 1477 0112 EBBD     		jmp	.L61
 1478              	.LVL161:
 1479              		.p2align 4,,10
 1480 0114 0F1F4000 		.p2align 3
 1481              	.L88:
 1482              	.LBE483:
 1483              	.LBE489:
 1484              	.LBB490:
 1485              	.LBB487:
 114:fltk-1.3.4-1/src/Fl_Dial.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1486              		.loc 6 114 0
 1487 0118 660FEFC9 		pxor	%xmm1, %xmm1
 1488 011c 41F7D8   		negl	%r8d
 1489              	.LVL162:
 1490 011f 660FEFC0 		pxor	%xmm0, %xmm0
 1491 0123 F30F2ACA 		cvtsi2ss	%edx, %xmm1
 1492 0127 F3410F2A 		cvtsi2ss	%r8d, %xmm0
 1492      C0
 1493 012c F30F5AC9 		cvtss2sd	%xmm1, %xmm1
 1494 0130 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 1495 0134 E8000000 		call	atan2
 1495      00
 1496              	.LVL163:
 1497 0139 F20F103D 		movsd	.LC26(%rip), %xmm7
 1497      00000000 
 115:fltk-1.3.4-1/src/Fl_Dial.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 1498              		.loc 6 115 0
 1499 0141 0FBF83A6 		movswl	166(%rbx), %eax
 1499      000000
 1500 0148 0FBFB3A4 		movswl	164(%rbx), %esi
 1500      000000
 1501 014f 660FEFF6 		pxor	%xmm6, %xmm6
 114:fltk-1.3.4-1/src/Fl_Dial.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1502              		.loc 6 114 0
 1503 0153 F20F59C7 		mulsd	%xmm7, %xmm0
 1504 0157 F20F100D 		movsd	.LC11(%rip), %xmm1
 1504      00000000 
 115:fltk-1.3.4-1/src/Fl_Dial.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 1505              		.loc 6 115 0
 1506 015f 89C7     		movl	%eax, %edi
 1507 0161 F20F1053 		movsd	120(%rbx), %xmm2
 1507      78
 1508 0166 29F7     		subl	%esi, %edi
 1509 0168 F2440F10 		movsd	144(%rbx), %xmm9
 1509      8B900000 
 1509      00
 114:fltk-1.3.4-1/src/Fl_Dial.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1510              		.loc 6 114 0
 1511 0171 F20F5E05 		divsd	.LC27(%rip), %xmm0
 1511      00000000 
 115:fltk-1.3.4-1/src/Fl_Dial.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 1512              		.loc 6 115 0
 1513 0179 F20F2AF7 		cvtsi2sd	%edi, %xmm6
 1514 017d 66450F28 		movapd	%xmm9, %xmm8
 1514      C1
 1515 0182 89C1     		movl	%eax, %ecx
 1516 0184 89F2     		movl	%esi, %edx
 1517 0186 660FEFED 		pxor	%xmm5, %xmm5
 1518 018a F20F101D 		movsd	.LC12(%rip), %xmm3
 1518      00000000 
 1519 0192 F20F2AEE 		cvtsi2sd	%esi, %xmm5
 114:fltk-1.3.4-1/src/Fl_Dial.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1520              		.loc 6 114 0
 1521 0196 F20F5CC8 		subsd	%xmm0, %xmm1
 1522              	.LVL164:
 1523 019a F20F1083 		movsd	136(%rbx), %xmm0
 1523      88000000 
 1524              	.LVL165:
 115:fltk-1.3.4-1/src/Fl_Dial.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 1525              		.loc 6 115 0
 1526 01a2 F20F5CD0 		subsd	%xmm0, %xmm2
 1527 01a6 F2440F5C 		subsd	%xmm0, %xmm8
 1527      C0
 1528 01ab F20F59D6 		mulsd	%xmm6, %xmm2
 1529 01af F2410F5E 		divsd	%xmm8, %xmm2
 1529      D0
 1530 01b4 F20F58D5 		addsd	%xmm5, %xmm2
 1531              	.LVL166:
 116:fltk-1.3.4-1/src/Fl_Dial.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1532              		.loc 6 116 0
 1533 01b8 660F28E2 		movapd	%xmm2, %xmm4
 1534 01bc F20F5CE7 		subsd	%xmm7, %xmm4
 1535 01c0 660F2EE1 		ucomisd	%xmm1, %xmm4
 1536 01c4 7614     		jbe	.L68
 1537 01c6 662E0F1F 		.p2align 4,,10
 1537      84000000 
 1537      0000
 1538              		.p2align 3
 1539              	.L80:
 1540 01d0 F20F58CB 		addsd	%xmm3, %xmm1
 1541              	.LVL167:
 1542 01d4 660F2EE1 		ucomisd	%xmm1, %xmm4
 1543 01d8 77F6     		ja	.L80
 1544              	.L68:
 117:fltk-1.3.4-1/src/Fl_Dial.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1545              		.loc 6 117 0
 1546 01da F20F58D7 		addsd	%xmm7, %xmm2
 1547              	.LVL168:
 1548 01de F20F101D 		movsd	.LC12(%rip), %xmm3
 1548      00000000 
 1549 01e6 660F2ECA 		ucomisd	%xmm2, %xmm1
 1550 01ea 760E     		jbe	.L66
 1551 01ec 0F1F4000 		.p2align 4,,10
 1552              		.p2align 3
 1553              	.L79:
 1554 01f0 F20F5CCB 		subsd	%xmm3, %xmm1
 1555              	.LVL169:
 1556 01f4 660F2ECA 		ucomisd	%xmm2, %xmm1
 1557 01f8 77F6     		ja	.L79
 1558              	.L66:
 119:fltk-1.3.4-1/src/Fl_Dial.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1559              		.loc 6 119 0
 1560 01fa 6639D1   		cmpw	%dx, %cx
 1561 01fd 7E21     		jle	.L70
 1562 01ff 660F2EE9 		ucomisd	%xmm1, %xmm5
 1563 0203 7345     		jnb	.L71
 121:fltk-1.3.4-1/src/Fl_Dial.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 1564              		.loc 6 121 0
 1565 0205 660FEFD2 		pxor	%xmm2, %xmm2
 1566 0209 F20F2AD0 		cvtsi2sd	%eax, %xmm2
 1567 020d 660F2ECA 		ucomisd	%xmm2, %xmm1
 1568 0211 0F93C0   		setnb	%al
 1569 0214 EB1F     		jmp	.L74
 1570 0216 662E0F1F 		.p2align 4,,10
 1570      84000000 
 1570      0000
 1571              		.p2align 3
 1572              	.L70:
 119:fltk-1.3.4-1/src/Fl_Dial.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1573              		.loc 6 119 0
 1574 0220 660F2ECD 		ucomisd	%xmm5, %xmm1
 1575 0224 7324     		jnb	.L71
 121:fltk-1.3.4-1/src/Fl_Dial.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 1576              		.loc 6 121 0
 1577 0226 660FEFD2 		pxor	%xmm2, %xmm2
 1578 022a F20F2AD0 		cvtsi2sd	%eax, %xmm2
 1579 022e 660F2ED1 		ucomisd	%xmm1, %xmm2
 1580 0232 0F93C0   		setnb	%al
 1581              	.L74:
 1582 0235 84C0     		testb	%al, %al
 1583 0237 754F     		jne	.L78
 1584              	.LVL170:
 124:fltk-1.3.4-1/src/Fl_Dial.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1585              		.loc 6 124 0
 1586 0239 F20F5CCD 		subsd	%xmm5, %xmm1
 1587              	.LVL171:
 1588 023d F2410F59 		mulsd	%xmm8, %xmm1
 1588      C8
 1589 0242 F20F5ECE 		divsd	%xmm6, %xmm1
 1590 0246 F20F58C1 		addsd	%xmm1, %xmm0
 1591              	.LVL172:
 1592              	.L71:
 126:fltk-1.3.4-1/src/Fl_Dial.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 1593              		.loc 6 126 0
 1594 024a 4889DF   		movq	%rbx, %rdi
 1595 024d E8000000 		call	_ZN11Fl_Valuator5roundEd
 1595      00
 1596              	.LVL173:
 1597 0252 4889DF   		movq	%rbx, %rdi
 1598 0255 E8000000 		call	_ZN11Fl_Valuator5clampEd
 1598      00
 1599              	.LVL174:
 1600 025a 4889DF   		movq	%rbx, %rdi
 1601 025d E8000000 		call	_ZN11Fl_Valuator11handle_dragEd
 1601      00
 1602              	.LVL175:
 1603 0262 B8010000 		movl	$1, %eax
 1603      00
 1604 0267 E965FEFF 		jmp	.L61
 1604      FF
 1605              	.LVL176:
 1606 026c 0F1F4000 		.p2align 4,,10
 1607              		.p2align 3
 1608              	.L87:
 1609              	.LBE487:
 1610              	.LBE490:
 1611              	.LBB491:
 1612              	.LBB484:
 1613              	.LBB482:
 109:fltk-1.3.4-1/src/Fl_Dial.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1614              		.loc 6 109 0 discriminator 1
 1615 0270 488D7C24 		leaq	16(%rsp), %rdi
 1615      10
 1616 0275 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 1616      00
 1617              	.LVL177:
 1618 027a B8010000 		movl	$1, %eax
 1618      00
 1619 027f E94DFEFF 		jmp	.L61
 1619      FF
 1620              	.LVL178:
 1621              		.p2align 4,,10
 1622 0284 0F1F4000 		.p2align 3
 1623              	.L78:
 1624              	.LBE482:
 1625              	.LBE484:
 1626              	.LBE491:
 1627              	.LBB492:
 1628              	.LBB488:
 122:fltk-1.3.4-1/src/Fl_Dial.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 1629              		.loc 6 122 0
 1630 0288 66410F28 		movapd	%xmm9, %xmm0
 1630      C1
 1631              	.LVL179:
 1632 028d EBBB     		jmp	.L71
 1633              	.LVL180:
 1634              	.L89:
 1635              	.LBE488:
 1636              	.LBE492:
 1637              		.loc 6 137 0
 1638 028f E8000000 		call	__stack_chk_fail
 1638      00
 1639              	.LVL181:
 1640              		.cfi_endproc
 1641              	.LFE492:
 1643              		.section	.text.unlikely._ZN7Fl_Dial6handleEiiiii
 1644              	.LCOLDE28:
 1645              		.section	.text._ZN7Fl_Dial6handleEiiiii
 1646              	.LHOTE28:
 1647              		.section	.text.unlikely._ZN7Fl_Dial6handleEi,"ax",@progbits
 1648              		.align 2
 1649              	.LCOLDB29:
 1650              		.section	.text._ZN7Fl_Dial6handleEi,"ax",@progbits
 1651              	.LHOTB29:
 1652              		.align 2
 1653              		.p2align 4,,15
 1654              		.globl	_ZN7Fl_Dial6handleEi
 1656              	_ZN7Fl_Dial6handleEi:
 1657              	.LFB493:
 138:fltk-1.3.4-1/src/Fl_Dial.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Dial.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Dial.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Dial.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Dial.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1658              		.loc 6 142 0
 1659              		.cfi_startproc
 1660              	.LVL182:
 143:fltk-1.3.4-1/src/Fl_Dial.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 1661              		.loc 6 143 0
 1662 0000 8B4F24   		movl	36(%rdi), %ecx
 1663 0003 8B5720   		movl	32(%rdi), %edx
 1664 0006 448B4F2C 		movl	44(%rdi), %r9d
 1665 000a 448B4728 		movl	40(%rdi), %r8d
 1666 000e E9000000 		jmp	_ZN7Fl_Dial6handleEiiiii
 1666      00
 1667              	.LVL183:
 1668              		.cfi_endproc
 1669              	.LFE493:
 1671              		.section	.text.unlikely._ZN7Fl_Dial6handleEi
 1672              	.LCOLDE29:
 1673              		.section	.text._ZN7Fl_Dial6handleEi
 1674              	.LHOTE29:
 1675              		.section	.text.unlikely._ZN7Fl_DialC2EiiiiPKc,"ax",@progbits
 1676              		.align 2
 1677              	.LCOLDB30:
 1678              		.section	.text._ZN7Fl_DialC2EiiiiPKc,"ax",@progbits
 1679              	.LHOTB30:
 1680              		.align 2
 1681              		.p2align 4,,15
 1682              		.globl	_ZN7Fl_DialC2EiiiiPKc
 1684              	_ZN7Fl_DialC2EiiiiPKc:
 1685              	.LFB499:
 144:fltk-1.3.4-1/src/Fl_Dial.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Dial.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Dial.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1686              		.loc 6 146 0
 1687              		.cfi_startproc
 1688              	.LVL184:
 1689 0000 53       		pushq	%rbx
 1690              		.cfi_def_cfa_offset 16
 1691              		.cfi_offset 3, -16
 1692              		.loc 6 146 0
 1693 0001 4889FB   		movq	%rdi, %rbx
 1694              	.LBB493:
 147:fltk-1.3.4-1/src/Fl_Dial.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Dial.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Dial.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Dial.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Dial.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 1695              		.loc 6 151 0
 1696 0004 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 1696      00
 1697              	.LVL185:
 1698 0009 48C70300 		movq	$_ZTV7Fl_Dial+16, (%rbx)
 1698      000000
 152:fltk-1.3.4-1/src/Fl_Dial.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1699              		.loc 6 152 0
 1700 0010 E8000000 		call	_Z21fl_define_FL_OVAL_BOXv
 1700      00
 1701              	.LVL186:
 153:fltk-1.3.4-1/src/Fl_Dial.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Dial.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Dial.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1702              		.loc 6 155 0
 1703 0015 BA3B0100 		movl	$315, %edx
 1703      00
 1704              	.LBB494:
 1705              	.LBB495:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1706              		.loc 1 372 0
 1707 001a 88436E   		movb	%al, 110(%rbx)
 1708              	.LVL187:
 1709              	.LBE495:
 1710              	.LBE494:
 154:fltk-1.3.4-1/src/Fl_Dial.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1711              		.loc 6 154 0
 1712 001d B82D0000 		movl	$45, %eax
 1712      00
 1713              	.LBB496:
 1714              	.LBB497:
 406:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1715              		.loc 1 406 0
 1716 0022 C7436808 		movl	$8, 104(%rbx)
 1716      000000
 1717              	.LVL188:
 1718              	.LBE497:
 1719              	.LBE496:
 154:fltk-1.3.4-1/src/Fl_Dial.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1720              		.loc 6 154 0
 1721 0029 668983A4 		movw	%ax, 164(%rbx)
 1721      000000
 1722              		.loc 6 155 0
 1723 0030 668993A6 		movw	%dx, 166(%rbx)
 1723      000000
 1724              	.LBE493:
 156:fltk-1.3.4-1/src/Fl_Dial.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 1725              		.loc 6 156 0
 1726 0037 5B       		popq	%rbx
 1727              		.cfi_def_cfa_offset 8
 1728              	.LVL189:
 1729 0038 C3       		ret
 1730              		.cfi_endproc
 1731              	.LFE499:
 1733              		.section	.text.unlikely._ZN7Fl_DialC2EiiiiPKc
 1734              	.LCOLDE30:
 1735              		.section	.text._ZN7Fl_DialC2EiiiiPKc
 1736              	.LHOTE30:
 1737              		.globl	_ZN7Fl_DialC1EiiiiPKc
 1738              		.set	_ZN7Fl_DialC1EiiiiPKc,_ZN7Fl_DialC2EiiiiPKc
 1739              		.section	.text.unlikely._ZN12Fl_Fill_DialC2EiiiiPKc,"ax",@progbits
 1740              		.align 2
 1741              	.LCOLDB31:
 1742              		.section	.text._ZN12Fl_Fill_DialC2EiiiiPKc,"ax",@progbits
 1743              	.LHOTB31:
 1744              		.align 2
 1745              		.p2align 4,,15
 1746              		.globl	_ZN12Fl_Fill_DialC2EiiiiPKc
 1748              	_ZN12Fl_Fill_DialC2EiiiiPKc:
 1749              	.LFB506:
 157:fltk-1.3.4-1/src/Fl_Dial.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Dial.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Dial.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1750              		.loc 6 159 0
 1751              		.cfi_startproc
 1752              	.LVL190:
 1753 0000 53       		pushq	%rbx
 1754              		.cfi_def_cfa_offset 16
 1755              		.cfi_offset 3, -16
 1756              		.loc 6 159 0
 1757 0001 4889FB   		movq	%rdi, %rbx
 1758              	.LBB498:
 160:fltk-1.3.4-1/src/Fl_Dial.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 1759              		.loc 6 160 0
 1760 0004 E8000000 		call	_ZN7Fl_DialC2EiiiiPKc
 1760      00
 1761              	.LVL191:
 1762 0009 48C70300 		movq	$_ZTV12Fl_Fill_Dial+16, (%rbx)
 1762      000000
 1763              	.LVL192:
 1764              	.LBB499:
 1765              	.LBB500:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1766              		.loc 1 279 0
 1767 0010 C6436C02 		movb	$2, 108(%rbx)
 1768              	.LVL193:
 1769              	.LBE500:
 1770              	.LBE499:
 1771              	.LBE498:
 161:fltk-1.3.4-1/src/Fl_Dial.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Dial.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1772              		.loc 6 162 0
 1773 0014 5B       		popq	%rbx
 1774              		.cfi_def_cfa_offset 8
 1775              	.LVL194:
 1776 0015 C3       		ret
 1777              		.cfi_endproc
 1778              	.LFE506:
 1780              		.section	.text.unlikely._ZN12Fl_Fill_DialC2EiiiiPKc
 1781              	.LCOLDE31:
 1782              		.section	.text._ZN12Fl_Fill_DialC2EiiiiPKc
 1783              	.LHOTE31:
 1784              		.globl	_ZN12Fl_Fill_DialC1EiiiiPKc
 1785              		.set	_ZN12Fl_Fill_DialC1EiiiiPKc,_ZN12Fl_Fill_DialC2EiiiiPKc
 1786              		.section	.text.unlikely._ZN12Fl_Line_DialC2EiiiiPKc,"ax",@progbits
 1787              		.align 2
 1788              	.LCOLDB32:
 1789              		.section	.text._ZN12Fl_Line_DialC2EiiiiPKc,"ax",@progbits
 1790              	.LHOTB32:
 1791              		.align 2
 1792              		.p2align 4,,15
 1793              		.globl	_ZN12Fl_Line_DialC2EiiiiPKc
 1795              	_ZN12Fl_Line_DialC2EiiiiPKc:
 1796              	.LFB509:
 163:fltk-1.3.4-1/src/Fl_Dial.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Dial.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Dial.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1797              		.loc 6 165 0
 1798              		.cfi_startproc
 1799              	.LVL195:
 1800 0000 53       		pushq	%rbx
 1801              		.cfi_def_cfa_offset 16
 1802              		.cfi_offset 3, -16
 1803              		.loc 6 165 0
 1804 0001 4889FB   		movq	%rdi, %rbx
 1805              	.LBB501:
 166:fltk-1.3.4-1/src/Fl_Dial.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1806              		.loc 6 166 0
 1807 0004 E8000000 		call	_ZN7Fl_DialC2EiiiiPKc
 1807      00
 1808              	.LVL196:
 1809 0009 48C70300 		movq	$_ZTV12Fl_Line_Dial+16, (%rbx)
 1809      000000
 1810              	.LVL197:
 1811              	.LBB502:
 1812              	.LBB503:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1813              		.loc 1 279 0
 1814 0010 C6436C01 		movb	$1, 108(%rbx)
 1815              	.LVL198:
 1816              	.LBE503:
 1817              	.LBE502:
 1818              	.LBE501:
 167:fltk-1.3.4-1/src/Fl_Dial.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Dial.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Dial.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 1819              		.loc 6 169 0
 1820 0014 5B       		popq	%rbx
 1821              		.cfi_def_cfa_offset 8
 1822              	.LVL199:
 1823 0015 C3       		ret
 1824              		.cfi_endproc
 1825              	.LFE509:
 1827              		.section	.text.unlikely._ZN12Fl_Line_DialC2EiiiiPKc
 1828              	.LCOLDE32:
 1829              		.section	.text._ZN12Fl_Line_DialC2EiiiiPKc
 1830              	.LHOTE32:
 1831              		.globl	_ZN12Fl_Line_DialC1EiiiiPKc
 1832              		.set	_ZN12Fl_Line_DialC1EiiiiPKc,_ZN12Fl_Line_DialC2EiiiiPKc
 1833              		.weak	_ZTS7Fl_Dial
 1834              		.section	.rodata._ZTS7Fl_Dial,"aG",@progbits,_ZTS7Fl_Dial,comdat
 1835              		.align 8
 1838              	_ZTS7Fl_Dial:
 1839 0000 37466C5F 		.string	"7Fl_Dial"
 1839      4469616C 
 1839      00
 1840              		.weak	_ZTI7Fl_Dial
 1841              		.section	.rodata._ZTI7Fl_Dial,"aG",@progbits,_ZTI7Fl_Dial,comdat
 1842              		.align 8
 1845              	_ZTI7Fl_Dial:
 1846 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1846      00000000 
 1847 0008 00000000 		.quad	_ZTS7Fl_Dial
 1847      00000000 
 1848 0010 00000000 		.quad	_ZTI11Fl_Valuator
 1848      00000000 
 1849              		.weak	_ZTS12Fl_Fill_Dial
 1850              		.section	.rodata._ZTS12Fl_Fill_Dial,"aG",@progbits,_ZTS12Fl_Fill_Dial,comdat
 1851              		.align 8
 1854              	_ZTS12Fl_Fill_Dial:
 1855 0000 3132466C 		.string	"12Fl_Fill_Dial"
 1855      5F46696C 
 1855      6C5F4469 
 1855      616C00
 1856              		.weak	_ZTI12Fl_Fill_Dial
 1857              		.section	.rodata._ZTI12Fl_Fill_Dial,"aG",@progbits,_ZTI12Fl_Fill_Dial,comdat
 1858              		.align 8
 1861              	_ZTI12Fl_Fill_Dial:
 1862 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1862      00000000 
 1863 0008 00000000 		.quad	_ZTS12Fl_Fill_Dial
 1863      00000000 
 1864 0010 00000000 		.quad	_ZTI7Fl_Dial
 1864      00000000 
 1865              		.weak	_ZTS12Fl_Line_Dial
 1866              		.section	.rodata._ZTS12Fl_Line_Dial,"aG",@progbits,_ZTS12Fl_Line_Dial,comdat
 1867              		.align 8
 1870              	_ZTS12Fl_Line_Dial:
 1871 0000 3132466C 		.string	"12Fl_Line_Dial"
 1871      5F4C696E 
 1871      655F4469 
 1871      616C00
 1872              		.weak	_ZTI12Fl_Line_Dial
 1873              		.section	.rodata._ZTI12Fl_Line_Dial,"aG",@progbits,_ZTI12Fl_Line_Dial,comdat
 1874              		.align 8
 1877              	_ZTI12Fl_Line_Dial:
 1878 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1878      00000000 
 1879 0008 00000000 		.quad	_ZTS12Fl_Line_Dial
 1879      00000000 
 1880 0010 00000000 		.quad	_ZTI7Fl_Dial
 1880      00000000 
 1881              		.weak	_ZTV12Fl_Fill_Dial
 1882              		.section	.rodata._ZTV12Fl_Fill_Dial,"aG",@progbits,_ZTV12Fl_Fill_Dial,comdat
 1883              		.align 8
 1886              	_ZTV12Fl_Fill_Dial:
 1887 0000 00000000 		.quad	0
 1887      00000000 
 1888 0008 00000000 		.quad	_ZTI12Fl_Fill_Dial
 1888      00000000 
 1889 0010 00000000 		.quad	_ZN12Fl_Fill_DialD1Ev
 1889      00000000 
 1890 0018 00000000 		.quad	_ZN12Fl_Fill_DialD0Ev
 1890      00000000 
 1891 0020 00000000 		.quad	_ZN7Fl_Dial4drawEv
 1891      00000000 
 1892 0028 00000000 		.quad	_ZN7Fl_Dial6handleEi
 1892      00000000 
 1893 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 1893      00000000 
 1894 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1894      00000000 
 1895 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1895      00000000 
 1896 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1896      00000000 
 1897 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1897      00000000 
 1898 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1898      00000000 
 1899 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 1899      00000000 
 1900 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 1900      00000000 
 1901              		.weak	_ZTV12Fl_Line_Dial
 1902              		.section	.rodata._ZTV12Fl_Line_Dial,"aG",@progbits,_ZTV12Fl_Line_Dial,comdat
 1903              		.align 8
 1906              	_ZTV12Fl_Line_Dial:
 1907 0000 00000000 		.quad	0
 1907      00000000 
 1908 0008 00000000 		.quad	_ZTI12Fl_Line_Dial
 1908      00000000 
 1909 0010 00000000 		.quad	_ZN12Fl_Line_DialD1Ev
 1909      00000000 
 1910 0018 00000000 		.quad	_ZN12Fl_Line_DialD0Ev
 1910      00000000 
 1911 0020 00000000 		.quad	_ZN7Fl_Dial4drawEv
 1911      00000000 
 1912 0028 00000000 		.quad	_ZN7Fl_Dial6handleEi
 1912      00000000 
 1913 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 1913      00000000 
 1914 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1914      00000000 
 1915 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1915      00000000 
 1916 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1916      00000000 
 1917 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1917      00000000 
 1918 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1918      00000000 
 1919 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 1919      00000000 
 1920 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 1920      00000000 
 1921              		.weak	_ZTV7Fl_Dial
 1922              		.section	.rodata._ZTV7Fl_Dial,"aG",@progbits,_ZTV7Fl_Dial,comdat
 1923              		.align 8
 1926              	_ZTV7Fl_Dial:
 1927 0000 00000000 		.quad	0
 1927      00000000 
 1928 0008 00000000 		.quad	_ZTI7Fl_Dial
 1928      00000000 
 1929 0010 00000000 		.quad	_ZN7Fl_DialD1Ev
 1929      00000000 
 1930 0018 00000000 		.quad	_ZN7Fl_DialD0Ev
 1930      00000000 
 1931 0020 00000000 		.quad	_ZN7Fl_Dial4drawEv
 1931      00000000 
 1932 0028 00000000 		.quad	_ZN7Fl_Dial6handleEi
 1932      00000000 
 1933 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 1933      00000000 
 1934 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1934      00000000 
 1935 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1935      00000000 
 1936 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1936      00000000 
 1937 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1937      00000000 
 1938 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1938      00000000 
 1939 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 1939      00000000 
 1940 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 1940      00000000 
 1941              		.section	.rodata.cst8,"aM",@progbits,8
 1942              		.align 8
 1943              	.LC9:
 1944 0000 00000000 		.long	0
 1945 0004 00B08340 		.long	1082372096
 1946              		.align 8
 1947              	.LC10:
 1948 0008 00000000 		.long	0
 1949 000c 008056C0 		.long	-1068072960
 1950              		.align 8
 1951              	.LC11:
 1952 0010 00000000 		.long	0
 1953 0014 00E07040 		.long	1081139200
 1954              		.align 8
 1955              	.LC12:
 1956 0018 00000000 		.long	0
 1957 001c 00807640 		.long	1081507840
 1958              		.align 8
 1959              	.LC14:
 1960 0020 00000000 		.long	0
 1961 0024 0000E03F 		.long	1071644672
 1962              		.align 8
 1963              	.LC15:
 1964 0028 00000000 		.long	0
 1965 002c 0000F03F 		.long	1072693248
 1966              		.align 8
 1967              	.LC16:
 1968 0030 00000000 		.long	0
 1969 0034 00804640 		.long	1078362112
 1970              		.align 8
 1971              	.LC17:
 1972 0038 7B14AE47 		.long	1202590843
 1973 003c E17AA4BF 		.long	-1079739679
 1974              		.align 8
 1975              	.LC18:
 1976 0040 00000000 		.long	0
 1977 0044 0000D03F 		.long	1070596096
 1978              		.align 8
 1979              	.LC19:
 1980 0048 00000000 		.long	0
 1981 004c 0000D0BF 		.long	-1076887552
 1982              		.align 8
 1983              	.LC20:
 1984 0050 7B14AE47 		.long	1202590843
 1985 0054 E17AA43F 		.long	1067743969
 1986              		.align 8
 1987              	.LC21:
 1988 0058 EC51B81E 		.long	515396076
 1989 005c 85EBB13F 		.long	1068624773
 1990              		.align 8
 1991              	.LC22:
 1992 0060 9A999999 		.long	2576980378
 1993 0064 9999C93F 		.long	1070176665
 1994              		.align 8
 1995              	.LC23:
 1996 0068 9A999999 		.long	2576980378
 1997 006c 9999C9BF 		.long	-1077306983
 1998              		.align 8
 1999              	.LC26:
 2000 0070 00000000 		.long	0
 2001 0074 00806640 		.long	1080459264
 2002              		.align 8
 2003              	.LC27:
 2004 0078 182D4454 		.long	1413754136
 2005 007c FB210940 		.long	1074340347
 2006              		.text
 2007              	.Letext0:
 2008              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 2009              	.Letext_cold0:
 2010              		.file 9 "fltk-1.3.4-1/FL/fl_types.h"
 2011              		.file 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2012              		.file 11 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2013              		.file 12 "/usr/include/libio.h"
 2014              		.file 13 "fltk-1.3.4-1/FL/Enumerations.H"
 2015              		.file 14 "fltk-1.3.4-1/FL/Fl.H"
 2016              		.file 15 "fltk-1.3.4-1/FL/Fl_Image.H"
 2017              		.file 16 "/usr/include/stdio.h"
 2018              		.file 17 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Dial.cxx
     /tmp/ccZvwHXT.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccZvwHXT.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccZvwHXT.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccZvwHXT.s:89     .text._ZN7Fl_DialD2Ev:0000000000000000 _ZN7Fl_DialD2Ev
     /tmp/ccZvwHXT.s:89     .text._ZN7Fl_DialD2Ev:0000000000000000 _ZN7Fl_DialD1Ev
     /tmp/ccZvwHXT.s:122    .text._ZN7Fl_DialD0Ev:0000000000000000 _ZN7Fl_DialD0Ev
     /tmp/ccZvwHXT.s:165    .text._ZN12Fl_Fill_DialD2Ev:0000000000000000 _ZN12Fl_Fill_DialD2Ev
     /tmp/ccZvwHXT.s:165    .text._ZN12Fl_Fill_DialD2Ev:0000000000000000 _ZN12Fl_Fill_DialD1Ev
     /tmp/ccZvwHXT.s:199    .text._ZN12Fl_Fill_DialD0Ev:0000000000000000 _ZN12Fl_Fill_DialD0Ev
     /tmp/ccZvwHXT.s:244    .text._ZN12Fl_Line_DialD2Ev:0000000000000000 _ZN12Fl_Line_DialD2Ev
     /tmp/ccZvwHXT.s:244    .text._ZN12Fl_Line_DialD2Ev:0000000000000000 _ZN12Fl_Line_DialD1Ev
     /tmp/ccZvwHXT.s:278    .text._ZN12Fl_Line_DialD0Ev:0000000000000000 _ZN12Fl_Line_DialD0Ev
     /tmp/ccZvwHXT.s:323    .text._ZN7Fl_Dial4drawEiiii:0000000000000000 _ZN7Fl_Dial4drawEiiii
     /tmp/ccZvwHXT.s:1266   .text._ZN7Fl_Dial4drawEv:0000000000000000 _ZN7Fl_Dial4drawEv
     /tmp/ccZvwHXT.s:1309   .text._ZN7Fl_Dial6handleEiiiii:0000000000000000 _ZN7Fl_Dial6handleEiiiii
     /tmp/ccZvwHXT.s:1656   .text._ZN7Fl_Dial6handleEi:0000000000000000 _ZN7Fl_Dial6handleEi
     /tmp/ccZvwHXT.s:1684   .text._ZN7Fl_DialC2EiiiiPKc:0000000000000000 _ZN7Fl_DialC2EiiiiPKc
     /tmp/ccZvwHXT.s:1926   .rodata._ZTV7Fl_Dial:0000000000000000 _ZTV7Fl_Dial
     /tmp/ccZvwHXT.s:1684   .text._ZN7Fl_DialC2EiiiiPKc:0000000000000000 _ZN7Fl_DialC1EiiiiPKc
     /tmp/ccZvwHXT.s:1748   .text._ZN12Fl_Fill_DialC2EiiiiPKc:0000000000000000 _ZN12Fl_Fill_DialC2EiiiiPKc
     /tmp/ccZvwHXT.s:1886   .rodata._ZTV12Fl_Fill_Dial:0000000000000000 _ZTV12Fl_Fill_Dial
     /tmp/ccZvwHXT.s:1748   .text._ZN12Fl_Fill_DialC2EiiiiPKc:0000000000000000 _ZN12Fl_Fill_DialC1EiiiiPKc
     /tmp/ccZvwHXT.s:1795   .text._ZN12Fl_Line_DialC2EiiiiPKc:0000000000000000 _ZN12Fl_Line_DialC2EiiiiPKc
     /tmp/ccZvwHXT.s:1906   .rodata._ZTV12Fl_Line_Dial:0000000000000000 _ZTV12Fl_Line_Dial
     /tmp/ccZvwHXT.s:1795   .text._ZN12Fl_Line_DialC2EiiiiPKc:0000000000000000 _ZN12Fl_Line_DialC1EiiiiPKc
     /tmp/ccZvwHXT.s:1838   .rodata._ZTS7Fl_Dial:0000000000000000 _ZTS7Fl_Dial
     /tmp/ccZvwHXT.s:1845   .rodata._ZTI7Fl_Dial:0000000000000000 _ZTI7Fl_Dial
     /tmp/ccZvwHXT.s:1854   .rodata._ZTS12Fl_Fill_Dial:0000000000000000 _ZTS12Fl_Fill_Dial
     /tmp/ccZvwHXT.s:1861   .rodata._ZTI12Fl_Fill_Dial:0000000000000000 _ZTI12Fl_Fill_Dial
     /tmp/ccZvwHXT.s:1870   .rodata._ZTS12Fl_Line_Dial:0000000000000000 _ZTS12Fl_Line_Dial
     /tmp/ccZvwHXT.s:1877   .rodata._ZTI12Fl_Line_Dial:0000000000000000 _ZTI12Fl_Line_Dial
     /tmp/ccZvwHXT.s:1955   .rodata.cst8:0000000000000018 .LC12
     /tmp/ccZvwHXT.s:1959   .rodata.cst8:0000000000000020 .LC14
     /tmp/ccZvwHXT.s:1963   .rodata.cst8:0000000000000028 .LC15
     /tmp/ccZvwHXT.s:1967   .rodata.cst8:0000000000000030 .LC16
     /tmp/ccZvwHXT.s:1971   .rodata.cst8:0000000000000038 .LC17
     /tmp/ccZvwHXT.s:1975   .rodata.cst8:0000000000000040 .LC18
     /tmp/ccZvwHXT.s:1979   .rodata.cst8:0000000000000048 .LC19
     /tmp/ccZvwHXT.s:1983   .rodata.cst8:0000000000000050 .LC20
     /tmp/ccZvwHXT.s:1987   .rodata.cst8:0000000000000058 .LC21
     /tmp/ccZvwHXT.s:1991   .rodata.cst8:0000000000000060 .LC22
     /tmp/ccZvwHXT.s:1995   .rodata.cst8:0000000000000068 .LC23
     /tmp/ccZvwHXT.s:1943   .rodata.cst8:0000000000000000 .LC9
     /tmp/ccZvwHXT.s:1951   .rodata.cst8:0000000000000010 .LC11
     /tmp/ccZvwHXT.s:1947   .rodata.cst8:0000000000000008 .LC10
     /tmp/ccZvwHXT.s:1999   .rodata.cst8:0000000000000070 .LC26
     /tmp/ccZvwHXT.s:2003   .rodata.cst8:0000000000000078 .LC27
                           .group:0000000000000000 _ZN7Fl_DialD5Ev
                           .group:0000000000000000 _ZN12Fl_Fill_DialD5Ev
                           .group:0000000000000000 _ZN12Fl_Line_DialD5Ev
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
                           .group:0000000000000000 wm4.Fl_Dial.H.30.130cad84d93aa834588922ecede1497b
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

UNDEFINED SYMBOLS
_ZTV11Fl_Valuator
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_ZNK9Fl_Widget8active_rEv
_Z11fl_inactivej
fl_graphics_driver
_ZN18Fl_Graphics_Driver11push_matrixEv
_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
_ZN18Fl_Graphics_Driver6rotateEd
_ZN18Fl_Graphics_Driver10pop_matrixEv
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_ZNK9Fl_Widget10draw_labelEv
_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
_ZN17Fl_Widget_TrackerD1Ev
_ZN2Fl3e_xE
_ZN2Fl3e_yE
_ZN11Fl_Valuator14handle_releaseEv
atan2
_ZN11Fl_Valuator5roundEd
_ZN11Fl_Valuator5clampEd
_ZN11Fl_Valuator11handle_dragEd
__stack_chk_fail
_ZN11Fl_ValuatorC2EiiiiPKc
_Z21fl_define_FL_OVAL_BOXv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI11Fl_Valuator
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
_ZN11Fl_Valuator12value_damageEv
_ZN11Fl_Valuator6formatEPc
