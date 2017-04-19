   1              		.file	"Fl_Counter.cxx"
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
  80              		.section	.rodata.str1.1,"aMS",@progbits,1
  81              	.LC3:
  82 0000 402D343C 		.string	"@-4<<"
  82      3C00
  83              	.LC4:
  84 0006 402D343C 		.string	"@-4<"
  84      00
  85              	.LC5:
  86 000b 402D343E 		.string	"@-4>"
  86      00
  87              	.LC6:
  88 0010 402D343E 		.string	"@-4>>"
  88      3E00
  89              		.section	.text.unlikely._ZN10Fl_Counter4drawEv,"ax",@progbits
  90              		.align 2
  91              	.LCOLDB7:
  92              		.section	.text._ZN10Fl_Counter4drawEv,"ax",@progbits
  93              	.LHOTB7:
  94              		.align 2
  95              		.p2align 4,,15
  96              		.globl	_ZN10Fl_Counter4drawEv
  98              	_ZN10Fl_Counter4drawEv:
  99              	.LFB492:
 100              		.file 2 "fltk-1.3.4-1/src/Fl_Counter.cxx"
   1:fltk-1.3.4-1/src/Fl_Counter.cxx ****    1              		.file	"Fl_Counter.cxx"
   2:fltk-1.3.4-1/src/Fl_Counter.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Counter.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Counter.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Counter.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Counter.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Counter.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Counter.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Counter.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Counter.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Counter.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Counter.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Counter.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Counter.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Counter.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Counter.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Counter.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Counter.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Counter.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Counter.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Counter.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Counter.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Counter.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Counter.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 101              		.loc 2 24 0
 102              		.cfi_startproc
 103              	.LVL3:
 104 0000 4157     		pushq	%r15
 105              		.cfi_def_cfa_offset 16
 106              		.cfi_offset 15, -16
 107 0002 4156     		pushq	%r14
 108              		.cfi_def_cfa_offset 24
 109              		.cfi_offset 14, -24
 110 0004 4989FF   		movq	%rdi, %r15
 111 0007 4155     		pushq	%r13
 112              		.cfi_def_cfa_offset 32
 113              		.cfi_offset 13, -32
 114 0009 4154     		pushq	%r12
 115              		.cfi_def_cfa_offset 40
 116              		.cfi_offset 12, -40
 117 000b 55       		pushq	%rbp
 118              		.cfi_def_cfa_offset 48
 119              		.cfi_offset 6, -48
 120 000c 53       		pushq	%rbx
 121              		.cfi_def_cfa_offset 56
 122              		.cfi_offset 3, -56
 123 000d 4881ECC8 		subq	$200, %rsp
 123      000000
 124              		.cfi_def_cfa_offset 256
 125 0014 0FB6776E 		movzbl	110(%rdi), %esi
 126              		.loc 2 24 0
 127 0018 64488B04 		movq	%fs:40, %rax
 127      25280000 
 127      00
 128 0021 48898424 		movq	%rax, 184(%rsp)
 128      B8000000 
 129 0029 31C0     		xorl	%eax, %eax
  25:fltk-1.3.4-1/src/Fl_Counter.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Counter.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Counter.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Counter.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Counter.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
 130              		.loc 2 29 0
 131 002b 83FE02   		cmpl	$2, %esi
 132 002e 89F0     		movl	%esi, %eax
 133              	.LVL4:
 134 0030 0F84EA01 		je	.L26
 134      0000
  28:fltk-1.3.4-1/src/Fl_Counter.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
 135              		.loc 2 28 0
 136 0036 83FE06   		cmpl	$6, %esi
 137 0039 BA070000 		movl	$7, %edx
 137      00
 138 003e 0F45D6   		cmovne	%esi, %edx
 139 0041 89542410 		movl	%edx, 16(%rsp)
 140              	.L6:
 141              	.LVL5:
 142 0045 410FB6BF 		movzbl	184(%r15), %edi
 142      B8000000 
 143              	.LVL6:
 144 004d 83C801   		orl	$1, %eax
 145 0050 488D5424 		leaq	16(%rsp), %rdx
 145      10
 146 0055 0FB6C8   		movzbl	%al, %ecx
 147 0058 83FE01   		cmpl	$1, %esi
 148              	.LBB329:
 149              	.LBB330:
 150              		.file 3 "fltk-1.3.4-1/FL/Enumerations.H"
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
 151              		.loc 3 732 0 discriminator 1
 152 005b B8010000 		movl	$1, %eax
 152      00
 153 0060 0F4ECE   		cmovle	%esi, %ecx
 154              	.LVL7:
 155              	.L10:
 156              	.LBE330:
 157              	.LBE329:
  30:fltk-1.3.4-1/src/Fl_Counter.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Counter.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Counter.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 158              		.loc 2 32 0
 159 0063 39F8     		cmpl	%edi, %eax
 160 0065 0F844501 		je	.L27
 160      0000
 161              	.LVL8:
  33:fltk-1.3.4-1/src/Fl_Counter.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Counter.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Counter.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 162              		.loc 2 35 0
 163 006b 897204   		movl	%esi, 4(%rdx)
 164              	.LVL9:
 165              	.L9:
  31:fltk-1.3.4-1/src/Fl_Counter.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 166              		.loc 2 31 0 discriminator 2
 167 006e 83C001   		addl	$1, %eax
 168              	.LVL10:
 169 0071 4883C204 		addq	$4, %rdx
 170 0075 83F805   		cmpl	$5, %eax
 171 0078 75E9     		jne	.L10
 172              	.LVL11:
 173              	.LBB331:
  36:fltk-1.3.4-1/src/Fl_Counter.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Counter.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Counter.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 174              		.loc 2 38 0
 175 007a 41807F6C 		cmpb	$0, 108(%r15)
 175      00
 176 007f 418B4F28 		movl	40(%r15), %ecx
 177 0083 0F853701 		jne	.L11
 177      0000
 178              	.LVL12:
 179              	.LBB332:
  39:fltk-1.3.4-1/src/Fl_Counter.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 180              		.loc 2 39 0
 181 0089 89CE     		movl	%ecx, %esi
 182 008b BA1F85EB 		movl	$1374389535, %edx
 182      51
 183 0090 458B7720 		movl	32(%r15), %r14d
 184 0094 C1E604   		sall	$4, %esi
  40:fltk-1.3.4-1/src/Fl_Counter.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Counter.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Counter.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 185              		.loc 2 42 0
 186 0097 4189CC   		movl	%ecx, %r12d
  39:fltk-1.3.4-1/src/Fl_Counter.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 187              		.loc 2 39 0
 188 009a 29CE     		subl	%ecx, %esi
 189 009c 89F0     		movl	%esi, %eax
 190              	.LVL13:
 191 009e C1FE1F   		sarl	$31, %esi
  43:fltk-1.3.4-1/src/Fl_Counter.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 192              		.loc 2 43 0
 193 00a1 4401F1   		addl	%r14d, %ecx
  39:fltk-1.3.4-1/src/Fl_Counter.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 194              		.loc 2 39 0
 195 00a4 F7EA     		imull	%edx
 196 00a6 C1FA05   		sarl	$5, %edx
 197 00a9 89D3     		movl	%edx, %ebx
 198 00ab 29F3     		subl	%esi, %ebx
 199              	.LVL14:
  42:fltk-1.3.4-1/src/Fl_Counter.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 200              		.loc 2 42 0
 201 00ad 8D049D00 		leal	0(,%rbx,4), %eax
 201      000000
  41:fltk-1.3.4-1/src/Fl_Counter.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 202              		.loc 2 41 0
 203 00b4 468D2C33 		leal	(%rbx,%r14), %r13d
 204              	.LVL15:
  40:fltk-1.3.4-1/src/Fl_Counter.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 205              		.loc 2 40 0
 206 00b8 895C2404 		movl	%ebx, 4(%rsp)
  42:fltk-1.3.4-1/src/Fl_Counter.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 207              		.loc 2 42 0
 208 00bc 4129C4   		subl	%eax, %r12d
 209              		.loc 2 43 0
 210 00bf 8D041B   		leal	(%rbx,%rbx), %eax
  42:fltk-1.3.4-1/src/Fl_Counter.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 211              		.loc 2 42 0
 212 00c2 428D2C2B 		leal	(%rbx,%r13), %ebp
 213              	.LVL16:
 214              		.loc 2 43 0
 215 00c6 29C1     		subl	%eax, %ecx
  44:fltk-1.3.4-1/src/Fl_Counter.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 216              		.loc 2 44 0
 217 00c8 8D040B   		leal	(%rbx,%rcx), %eax
  43:fltk-1.3.4-1/src/Fl_Counter.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 218              		.loc 2 43 0
 219 00cb 890C24   		movl	%ecx, (%rsp)
 220              	.LVL17:
 221              		.loc 2 44 0
 222 00ce 8944240C 		movl	%eax, 12(%rsp)
 223              	.LVL18:
 224              	.L12:
 225              	.LBE332:
 226              	.LBE331:
  45:fltk-1.3.4-1/src/Fl_Counter.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Counter.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Counter.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Counter.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Counter.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Counter.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Counter.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Counter.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Counter.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Counter.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 227              		.loc 2 54 0
 228 00d2 8B442410 		movl	16(%rsp), %eax
 229 00d6 418B4F24 		movl	36(%r15), %ecx
 230 00da 4883EC08 		subq	$8, %rsp
 231              		.cfi_def_cfa_offset 264
 232              	.LVL19:
 233 00de 458B4F2C 		movl	44(%r15), %r9d
 234 00e2 4589E0   		movl	%r12d, %r8d
 235 00e5 89EA     		movl	%ebp, %edx
 236 00e7 4C89FF   		movq	%r15, %rdi
 237 00ea 89442410 		movl	%eax, 16(%rsp)
 238 00ee 6A07     		pushq	$7
 239              		.cfi_def_cfa_offset 272
 240 00f0 89C6     		movl	%eax, %esi
 241 00f2 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 241      00
 242              	.LVL20:
 243              	.LBB334:
 244              	.LBB335:
 245              		.file 4 "fltk-1.3.4-1/FL/fl_draw.H"
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
 246              		.loc 4 509 0
 247 00f7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 247      000000
 248 00fe 418B97A8 		movl	168(%r15), %edx
 248      000000
 249 0105 418BB7A4 		movl	164(%r15), %esi
 249      000000
 250 010c 488B07   		movq	(%rdi), %rax
 251 010f FF90B001 		call	*432(%rax)
 251      0000
 252              	.LVL21:
 253              	.LBE335:
 254              	.LBE334:
  55:fltk-1.3.4-1/src/Fl_Counter.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Counter.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 255              		.loc 2 56 0
 256 0115 4C89FF   		movq	%r15, %rdi
 257 0118 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 257      00
 258              	.LVL22:
 259 011d 85C0     		testl	%eax, %eax
 260 011f 415B     		popq	%r11
 261              		.cfi_def_cfa_offset 264
 262 0121 5A       		popq	%rdx
 263              		.cfi_def_cfa_offset 256
 264              	.LVL23:
 265 0122 0F84E000 		je	.L13
 265      0000
 266 0128 418BB7AC 		movl	172(%r15), %esi
 266      000000
 267              	.LVL24:
 268              	.L14:
 269              	.LBB336:
 270              	.LBB337:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 271              		.loc 4 52 0 discriminator 4
 272 012f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 272      000000
 273 0136 488B17   		movq	(%rdi), %rdx
 274 0139 FF928800 		call	*136(%rdx)
 274      0000
 275              	.LVL25:
 276              	.LBE337:
 277              	.LBE336:
  57:fltk-1.3.4-1/src/Fl_Counter.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 278              		.loc 2 57 0 discriminator 4
 279 013f 498B07   		movq	(%r15), %rax
 280 0142 488D7424 		leaq	48(%rsp), %rsi
 280      30
 281 0147 4C89FF   		movq	%r15, %rdi
 282 014a FF5058   		call	*88(%rax)
 283              	.LVL26:
  58:fltk-1.3.4-1/src/Fl_Counter.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 284              		.loc 2 58 0 discriminator 4
 285 014d 6A01     		pushq	$1
 286              		.cfi_def_cfa_offset 264
 287              	.LVL27:
 288 014f 6A00     		pushq	$0
 289              		.cfi_def_cfa_offset 272
 290 0151 4531C9   		xorl	%r9d, %r9d
 291 0154 418B5724 		movl	36(%r15), %edx
 292 0158 458B472C 		movl	44(%r15), %r8d
 293 015c 4489E1   		movl	%r12d, %ecx
 294 015f 488D7C24 		leaq	64(%rsp), %rdi
 294      40
 295 0164 89EE     		movl	%ebp, %esi
 296 0166 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 296      00
 297              	.LVL28:
  59:fltk-1.3.4-1/src/Fl_Counter.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298              		.loc 2 59 0 discriminator 4
 299 016b 4C393D00 		cmpq	%r15, _ZN2Fl6focus_E(%rip)
 299      000000
 300 0172 4159     		popq	%r9
 301              		.cfi_def_cfa_offset 264
 302 0174 415A     		popq	%r10
 303              		.cfi_def_cfa_offset 256
 304              	.LVL29:
 305 0176 0F84AC01 		je	.L28
 305      0000
 306              	.LVL30:
 307              	.L15:
  60:fltk-1.3.4-1/src/Fl_Counter.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 308              		.loc 2 60 0
 309 017c 41807F6D 		cmpb	$0, 109(%r15)
 309      00
 310 0181 0F88A900 		js	.L29
 310      0000
 311              	.LVL31:
 312              	.L4:
  61:fltk-1.3.4-1/src/Fl_Counter.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Counter.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Counter.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Counter.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Counter.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Counter.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Counter.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Counter.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Counter.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Counter.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Counter.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Counter.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Counter.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Counter.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Counter.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Counter.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Counter.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Counter.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Counter.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 313              		.loc 2 79 0
 314 0187 488B8424 		movq	184(%rsp), %rax
 314      B8000000 
 315 018f 64483304 		xorq	%fs:40, %rax
 315      25280000 
 315      00
 316 0198 0F850302 		jne	.L30
 316      0000
 317 019e 4881C4C8 		addq	$200, %rsp
 317      000000
 318              		.cfi_remember_state
 319              		.cfi_def_cfa_offset 56
 320              	.LVL32:
 321 01a5 5B       		popq	%rbx
 322              		.cfi_def_cfa_offset 48
 323 01a6 5D       		popq	%rbp
 324              		.cfi_def_cfa_offset 40
 325 01a7 415C     		popq	%r12
 326              		.cfi_def_cfa_offset 32
 327 01a9 415D     		popq	%r13
 328              		.cfi_def_cfa_offset 24
 329              	.LVL33:
 330 01ab 415E     		popq	%r14
 331              		.cfi_def_cfa_offset 16
 332 01ad 415F     		popq	%r15
 333              		.cfi_def_cfa_offset 8
 334              	.LVL34:
 335 01af C3       		ret
 336              	.LVL35:
 337              		.p2align 4,,10
 338              		.p2align 3
 339              	.L27:
 340              		.cfi_restore_state
  33:fltk-1.3.4-1/src/Fl_Counter.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 341              		.loc 2 33 0
 342 01b0 894A04   		movl	%ecx, 4(%rdx)
 343 01b3 E9B6FEFF 		jmp	.L9
 343      FF
 344              	.LVL36:
 345 01b8 0F1F8400 		.p2align 4,,10
 345      00000000 
 346              		.p2align 3
 347              	.L11:
 348              	.LBB338:
 349              	.LBB333:
  46:fltk-1.3.4-1/src/Fl_Counter.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 350              		.loc 2 46 0
 351 01c0 89C8     		movl	%ecx, %eax
 352              	.LVL37:
 353 01c2 BA676666 		movl	$1717986919, %edx
 353      66
 354 01c7 458B6F20 		movl	32(%r15), %r13d
 355 01cb F7EA     		imull	%edx
 356 01cd 89C8     		movl	%ecx, %eax
  49:fltk-1.3.4-1/src/Fl_Counter.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 357              		.loc 2 49 0
 358 01cf 4189CC   		movl	%ecx, %r12d
  46:fltk-1.3.4-1/src/Fl_Counter.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 359              		.loc 2 46 0
 360 01d2 C1F81F   		sarl	$31, %eax
  47:fltk-1.3.4-1/src/Fl_Counter.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 361              		.loc 2 47 0
 362 01d5 C7442404 		movl	$0, 4(%rsp)
 362      00000000 
  51:fltk-1.3.4-1/src/Fl_Counter.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 363              		.loc 2 51 0
 364 01dd C744240C 		movl	$0, 12(%rsp)
 364      00000000 
  50:fltk-1.3.4-1/src/Fl_Counter.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 365              		.loc 2 50 0
 366 01e5 4401E9   		addl	%r13d, %ecx
  47:fltk-1.3.4-1/src/Fl_Counter.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 367              		.loc 2 47 0
 368 01e8 4531F6   		xorl	%r14d, %r14d
  46:fltk-1.3.4-1/src/Fl_Counter.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 369              		.loc 2 46 0
 370 01eb D1FA     		sarl	%edx
 371 01ed 89D3     		movl	%edx, %ebx
 372 01ef 29C3     		subl	%eax, %ebx
 373              	.LVL38:
  49:fltk-1.3.4-1/src/Fl_Counter.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 374              		.loc 2 49 0
 375 01f1 8D041B   		leal	(%rbx,%rbx), %eax
  50:fltk-1.3.4-1/src/Fl_Counter.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 376              		.loc 2 50 0
 377 01f4 29D9     		subl	%ebx, %ecx
  49:fltk-1.3.4-1/src/Fl_Counter.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 378              		.loc 2 49 0
 379 01f6 428D2C2B 		leal	(%rbx,%r13), %ebp
 380              	.LVL39:
  50:fltk-1.3.4-1/src/Fl_Counter.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 381              		.loc 2 50 0
 382 01fa 890C24   		movl	%ecx, (%rsp)
  49:fltk-1.3.4-1/src/Fl_Counter.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 383              		.loc 2 49 0
 384 01fd 4129C4   		subl	%eax, %r12d
 385              	.LVL40:
 386 0200 E9CDFEFF 		jmp	.L12
 386      FF
 387              	.LVL41:
 388              		.p2align 4,,10
 389 0205 0F1F00   		.p2align 3
 390              	.L13:
 391              	.LBE333:
 392              	.LBE338:
  56:fltk-1.3.4-1/src/Fl_Counter.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 393              		.loc 2 56 0 discriminator 2
 394 0208 418BBFAC 		movl	172(%r15), %edi
 394      000000
 395 020f E8000000 		call	_Z11fl_inactivej
 395      00
 396              	.LVL42:
 397 0214 89C6     		movl	%eax, %esi
 398 0216 E914FFFF 		jmp	.L14
 398      FF
 399              	.LVL43:
 400 021b 0F1F4400 		.p2align 4,,10
 400      00
 401              		.p2align 3
 402              	.L26:
  29:fltk-1.3.4-1/src/Fl_Counter.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 403              		.loc 2 29 0 discriminator 1
 404 0220 C7442410 		movl	$3, 16(%rsp)
 404      03000000 
 405 0228 E918FEFF 		jmp	.L6
 405      FF
 406              	.LVL44:
 407 022d 0F1F00   		.p2align 4,,10
 408              		.p2align 3
 409              	.L29:
  62:fltk-1.3.4-1/src/Fl_Counter.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 410              		.loc 2 62 0
 411 0230 4C89FF   		movq	%r15, %rdi
 412 0233 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 412      00
 413              	.LVL45:
 414 0238 85C0     		testl	%eax, %eax
 415 023a 0F840601 		je	.L17
 415      0000
 416 0240 418B6F50 		movl	80(%r15), %ebp
 417              	.LVL46:
 418              	.L18:
  67:fltk-1.3.4-1/src/Fl_Counter.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 419              		.loc 2 67 0
 420 0244 41807F6C 		cmpb	$0, 108(%r15)
 420      00
 421 0249 0F840701 		je	.L31
 421      0000
 422              	.LVL47:
 423              	.L19:
  71:fltk-1.3.4-1/src/Fl_Counter.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 424              		.loc 2 71 0
 425 024f 418B4764 		movl	100(%r15), %eax
 426 0253 4883EC08 		subq	$8, %rsp
 427              		.cfi_def_cfa_offset 264
 428              	.LVL48:
 429 0257 418B4F24 		movl	36(%r15), %ecx
 430 025b 458B4F2C 		movl	44(%r15), %r9d
 431 025f 4189D8   		movl	%ebx, %r8d
 432 0262 4489EA   		movl	%r13d, %edx
 433 0265 4C89FF   		movq	%r15, %rdi
 434 0268 50       		pushq	%rax
 435              		.cfi_def_cfa_offset 272
 436 0269 8B742428 		movl	40(%rsp), %esi
 437 026d E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 437      00
 438              	.LVL49:
  72:fltk-1.3.4-1/src/Fl_Counter.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 439              		.loc 2 72 0
 440 0272 418B5724 		movl	36(%r15), %edx
 441 0276 458B472C 		movl	44(%r15), %r8d
 442 027a 4189E9   		movl	%ebp, %r9d
 443 027d 89D9     		movl	%ebx, %ecx
 444 027f 4489EE   		movl	%r13d, %esi
 445 0282 BF000000 		movl	$.LC4, %edi
 445      00
 446 0287 E8000000 		call	_Z14fl_draw_symbolPKciiiij
 446      00
 447              	.LVL50:
  73:fltk-1.3.4-1/src/Fl_Counter.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 448              		.loc 2 73 0
 449 028c 448B7424 		movl	16(%rsp), %r14d
 449      10
 450              	.LVL51:
 451 0291 8B74242C 		movl	44(%rsp), %esi
 452 0295 4189D8   		movl	%ebx, %r8d
 453 0298 418B4764 		movl	100(%r15), %eax
 454 029c 418B4F24 		movl	36(%r15), %ecx
 455 02a0 4C89FF   		movq	%r15, %rdi
 456 02a3 458B4F2C 		movl	44(%r15), %r9d
 457 02a7 4489F2   		movl	%r14d, %edx
 458 02aa 890424   		movl	%eax, (%rsp)
 459 02ad E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 459      00
 460              	.LVL52:
  74:fltk-1.3.4-1/src/Fl_Counter.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 461              		.loc 2 74 0
 462 02b2 418B5724 		movl	36(%r15), %edx
 463 02b6 458B472C 		movl	44(%r15), %r8d
 464 02ba 89D9     		movl	%ebx, %ecx
 465 02bc 4489F6   		movl	%r14d, %esi
 466 02bf 4189E9   		movl	%ebp, %r9d
 467 02c2 BF000000 		movl	$.LC5, %edi
 467      00
 468 02c7 E8000000 		call	_Z14fl_draw_symbolPKciiiij
 468      00
 469              	.LVL53:
  75:fltk-1.3.4-1/src/Fl_Counter.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 470              		.loc 2 75 0
 471 02cc 41807F6C 		cmpb	$0, 108(%r15)
 471      00
 472 02d1 59       		popq	%rcx
 473              		.cfi_def_cfa_offset 264
 474 02d2 5E       		popq	%rsi
 475              		.cfi_def_cfa_offset 256
 476              	.LVL54:
 477 02d3 0F85AEFE 		jne	.L4
 477      FFFF
 478              	.LVL55:
  76:fltk-1.3.4-1/src/Fl_Counter.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 479              		.loc 2 76 0
 480 02d9 418B4764 		movl	100(%r15), %eax
 481 02dd 4883EC08 		subq	$8, %rsp
 482              		.cfi_def_cfa_offset 264
 483              	.LVL56:
 484 02e1 418B4F24 		movl	36(%r15), %ecx
 485 02e5 458B4F2C 		movl	44(%r15), %r9d
 486 02e9 4C89FF   		movq	%r15, %rdi
 487 02ec 50       		pushq	%rax
 488              		.cfi_def_cfa_offset 272
 489 02ed 448B7424 		movl	20(%rsp), %r14d
 489      14
 490 02f2 8B5C241C 		movl	28(%rsp), %ebx
 491              	.LVL57:
 492 02f6 8B742430 		movl	48(%rsp), %esi
 493 02fa 4589F0   		movl	%r14d, %r8d
 494 02fd 89DA     		movl	%ebx, %edx
 495 02ff E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 495      00
 496              	.LVL58:
  77:fltk-1.3.4-1/src/Fl_Counter.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 497              		.loc 2 77 0
 498 0304 418B5724 		movl	36(%r15), %edx
 499 0308 458B472C 		movl	44(%r15), %r8d
 500 030c 4189E9   		movl	%ebp, %r9d
 501 030f 4489F1   		movl	%r14d, %ecx
 502 0312 89DE     		movl	%ebx, %esi
 503 0314 BF000000 		movl	$.LC6, %edi
 503      00
 504 0319 E8000000 		call	_Z14fl_draw_symbolPKciiiij
 504      00
 505              	.LVL59:
 506 031e 58       		popq	%rax
 507              		.cfi_def_cfa_offset 264
 508 031f 5A       		popq	%rdx
 509              		.cfi_def_cfa_offset 256
 510              	.LVL60:
 511 0320 E962FEFF 		jmp	.L4
 511      FF
 512              	.LVL61:
 513              		.p2align 4,,10
 514 0325 0F1F00   		.p2align 3
 515              	.L28:
  59:fltk-1.3.4-1/src/Fl_Counter.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 516              		.loc 2 59 0 discriminator 1
 517 0328 418B4F24 		movl	36(%r15), %ecx
 518 032c 458B4F2C 		movl	44(%r15), %r9d
 519 0330 4589E0   		movl	%r12d, %r8d
 520 0333 8B742408 		movl	8(%rsp), %esi
 521 0337 89EA     		movl	%ebp, %edx
 522 0339 4C89FF   		movq	%r15, %rdi
 523 033c E8000000 		call	_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
 523      00
 524              	.LVL62:
 525 0341 E936FEFF 		jmp	.L15
 525      FF
 526              	.LVL63:
 527              	.L17:
  65:fltk-1.3.4-1/src/Fl_Counter.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 528              		.loc 2 65 0
 529 0346 418B7F50 		movl	80(%r15), %edi
 530 034a E8000000 		call	_Z11fl_inactivej
 530      00
 531              	.LVL64:
 532 034f 89C5     		movl	%eax, %ebp
 533              	.LVL65:
 534 0351 E9EEFEFF 		jmp	.L18
 534      FF
 535              	.LVL66:
 536              	.L31:
  68:fltk-1.3.4-1/src/Fl_Counter.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 537              		.loc 2 68 0
 538 0356 418B4764 		movl	100(%r15), %eax
 539 035a 4883EC08 		subq	$8, %rsp
 540              		.cfi_def_cfa_offset 264
 541              	.LVL67:
 542 035e 418B4F24 		movl	36(%r15), %ecx
 543 0362 458B4F2C 		movl	44(%r15), %r9d
 544 0366 4489F2   		movl	%r14d, %edx
 545 0369 4C89FF   		movq	%r15, %rdi
 546 036c 50       		pushq	%rax
 547              		.cfi_def_cfa_offset 272
 548 036d 448B6424 		movl	20(%rsp), %r12d
 548      14
 549              	.LVL68:
 550 0372 8B742424 		movl	36(%rsp), %esi
 551 0376 4589E0   		movl	%r12d, %r8d
 552 0379 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 552      00
 553              	.LVL69:
  69:fltk-1.3.4-1/src/Fl_Counter.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 554              		.loc 2 69 0
 555 037e 458B472C 		movl	44(%r15), %r8d
 556 0382 418B5724 		movl	36(%r15), %edx
 557 0386 BF000000 		movl	$.LC3, %edi
 557      00
 558 038b 4189E9   		movl	%ebp, %r9d
 559 038e 4489E1   		movl	%r12d, %ecx
 560 0391 4489F6   		movl	%r14d, %esi
 561 0394 E8000000 		call	_Z14fl_draw_symbolPKciiiij
 561      00
 562              	.LVL70:
 563 0399 5F       		popq	%rdi
 564              		.cfi_def_cfa_offset 264
 565 039a 4158     		popq	%r8
 566              		.cfi_def_cfa_offset 256
 567              	.LVL71:
 568 039c E9AEFEFF 		jmp	.L19
 568      FF
 569              	.LVL72:
 570              	.L30:
 571              		.loc 2 79 0
 572 03a1 E8000000 		call	__stack_chk_fail
 572      00
 573              	.LVL73:
 574              		.cfi_endproc
 575              	.LFE492:
 577              		.section	.text.unlikely._ZN10Fl_Counter4drawEv
 578              	.LCOLDE7:
 579              		.section	.text._ZN10Fl_Counter4drawEv
 580              	.LHOTE7:
 581              		.section	.text.unlikely._ZN10Fl_CounterD2Ev,"ax",@progbits
 582              		.align 2
 583              	.LCOLDB8:
 584              		.section	.text._ZN10Fl_CounterD2Ev,"ax",@progbits
 585              	.LHOTB8:
 586              		.align 2
 587              		.p2align 4,,15
 588              		.globl	_ZN10Fl_CounterD2Ev
 590              	_ZN10Fl_CounterD2Ev:
 591              	.LFB502:
  80:fltk-1.3.4-1/src/Fl_Counter.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Counter.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Counter.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Counter.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Counter.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Counter.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Counter.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Counter.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Counter.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Counter.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Counter.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Counter.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Counter.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Counter.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Counter.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Counter.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Counter.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Counter.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Counter.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Counter.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Counter.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Counter.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Counter.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Counter.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Counter.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Counter.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Counter.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Counter.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Counter.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Counter.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Counter.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Counter.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Counter.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Counter.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Counter.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Counter.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Counter.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Counter.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Counter.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Counter.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Counter.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Counter.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Counter.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Counter.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Counter.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Counter.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Counter.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Counter.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Counter.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Counter.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Counter.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Counter.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Counter.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Counter.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Counter.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Counter.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Counter.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Counter.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Counter.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Counter.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Counter.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Counter.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Counter.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Counter.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Counter.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Counter.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Counter.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Counter.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Counter.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Counter.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Counter.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Counter.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Counter.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Counter.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Counter.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Counter.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Counter.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Counter.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Counter.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Counter.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Counter.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Counter.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Counter.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Counter.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Counter.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Counter.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Counter.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Counter.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Counter.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Counter.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Counter.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Counter.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Counter.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Counter.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Counter.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Counter.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Counter.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Counter.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 592              		.loc 2 177 0
 593              		.cfi_startproc
 594              	.LVL74:
 595 0000 53       		pushq	%rbx
 596              		.cfi_def_cfa_offset 16
 597              		.cfi_offset 3, -16
 598              	.LBB339:
 178:fltk-1.3.4-1/src/Fl_Counter.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 599              		.loc 2 178 0
 600 0001 4889FE   		movq	%rdi, %rsi
 601              	.LBE339:
 177:fltk-1.3.4-1/src/Fl_Counter.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 602              		.loc 2 177 0
 603 0004 4889FB   		movq	%rdi, %rbx
 604              	.LBB344:
 605 0007 48C70700 		movq	$_ZTV10Fl_Counter+16, (%rdi)
 605      000000
 606              		.loc 2 178 0
 607 000e BF000000 		movl	$_ZN10Fl_Counter15repeat_callbackEPv, %edi
 607      00
 608              	.LVL75:
 609 0013 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 609      00
 610              	.LVL76:
 611              	.LBB340:
 612              	.LBB341:
 613              		.file 5 "fltk-1.3.4-1/FL/Fl_Valuator.H"
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
 614              		.loc 5 49 0
 615 0018 48C70300 		movq	$_ZTV11Fl_Valuator+16, (%rbx)
 615      000000
 616 001f 4889DF   		movq	%rbx, %rdi
 617              	.LBE341:
 618              	.LBE340:
 619              	.LBE344:
 179:fltk-1.3.4-1/src/Fl_Counter.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 620              		.loc 2 179 0
 621 0022 5B       		popq	%rbx
 622              		.cfi_def_cfa_offset 8
 623              	.LVL77:
 624              	.LBB345:
 625              	.LBB343:
 626              	.LBB342:
 627              		.loc 5 49 0
 628 0023 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 628      00
 629              	.LVL78:
 630              	.LBE342:
 631              	.LBE343:
 632              	.LBE345:
 633              		.cfi_endproc
 634              	.LFE502:
 636              		.section	.text.unlikely._ZN10Fl_CounterD2Ev
 637              	.LCOLDE8:
 638              		.section	.text._ZN10Fl_CounterD2Ev
 639              	.LHOTE8:
 640              		.globl	_ZN10Fl_CounterD1Ev
 641              		.set	_ZN10Fl_CounterD1Ev,_ZN10Fl_CounterD2Ev
 642              		.section	.text.unlikely._ZN10Fl_CounterD0Ev,"ax",@progbits
 643              		.align 2
 644              	.LCOLDB9:
 645              		.section	.text._ZN10Fl_CounterD0Ev,"ax",@progbits
 646              	.LHOTB9:
 647              		.align 2
 648              		.p2align 4,,15
 649              		.globl	_ZN10Fl_CounterD0Ev
 651              	_ZN10Fl_CounterD0Ev:
 652              	.LFB504:
 177:fltk-1.3.4-1/src/Fl_Counter.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 653              		.loc 2 177 0
 654              		.cfi_startproc
 655              	.LVL79:
 656 0000 53       		pushq	%rbx
 657              		.cfi_def_cfa_offset 16
 658              		.cfi_offset 3, -16
 659              	.LBB346:
 660              	.LBB347:
 178:fltk-1.3.4-1/src/Fl_Counter.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 661              		.loc 2 178 0
 662 0001 4889FE   		movq	%rdi, %rsi
 663              	.LBE347:
 664              	.LBE346:
 177:fltk-1.3.4-1/src/Fl_Counter.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 665              		.loc 2 177 0
 666 0004 4889FB   		movq	%rdi, %rbx
 667              	.LBB351:
 668              	.LBB350:
 669 0007 48C70700 		movq	$_ZTV10Fl_Counter+16, (%rdi)
 669      000000
 178:fltk-1.3.4-1/src/Fl_Counter.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 670              		.loc 2 178 0
 671 000e BF000000 		movl	$_ZN10Fl_Counter15repeat_callbackEPv, %edi
 671      00
 672              	.LVL80:
 673 0013 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 673      00
 674              	.LVL81:
 675              	.LBB348:
 676              	.LBB349:
 677              		.loc 5 49 0
 678 0018 4889DF   		movq	%rbx, %rdi
 679 001b 48C70300 		movq	$_ZTV11Fl_Valuator+16, (%rbx)
 679      000000
 680 0022 E8000000 		call	_ZN9Fl_WidgetD2Ev
 680      00
 681              	.LVL82:
 682              	.LBE349:
 683              	.LBE348:
 684              	.LBE350:
 685              	.LBE351:
 686              		.loc 2 179 0
 687 0027 4889DF   		movq	%rbx, %rdi
 688 002a 5B       		popq	%rbx
 689              		.cfi_def_cfa_offset 8
 690              	.LVL83:
 691 002b E9000000 		jmp	_ZdlPv
 691      00
 692              	.LVL84:
 693              		.cfi_endproc
 694              	.LFE504:
 696              		.section	.text.unlikely._ZN10Fl_CounterD0Ev
 697              	.LCOLDE9:
 698              		.section	.text._ZN10Fl_CounterD0Ev
 699              	.LHOTE9:
 700              		.section	.text.unlikely._ZN17Fl_Simple_CounterD2Ev,"axG",@progbits,_ZN17Fl_Simple_CounterD5Ev,comd
 701              		.align 2
 702              	.LCOLDB10:
 703              		.section	.text._ZN17Fl_Simple_CounterD2Ev,"axG",@progbits,_ZN17Fl_Simple_CounterD5Ev,comdat
 704              	.LHOTB10:
 705              		.align 2
 706              		.p2align 4,,15
 707              		.weak	_ZN17Fl_Simple_CounterD2Ev
 709              	_ZN17Fl_Simple_CounterD2Ev:
 710              	.LFB512:
 711              		.file 6 "fltk-1.3.4-1/FL/Fl_Simple_Counter.H"
   1:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //
   2:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** // "$Id: Fl_Simple_Counter.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //
   4:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** // Simple counter header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //
   6:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //
   8:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //
  12:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //
  14:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //
  16:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** //
  18:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** 
  19:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Simple_Counter.H ****    Fl_Simple_Counter widget . */
  21:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** 
  22:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** #ifndef Fl_Simple_Counter_H
  23:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** #define Fl_Simple_Counter_H
  24:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** 
  25:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** #include "Fl_Counter.H"
  26:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** /** 
  27:fltk-1.3.4-1/FL/Fl_Simple_Counter.H ****   This widget creates a counter with only 2 arrow buttons 
  28:fltk-1.3.4-1/FL/Fl_Simple_Counter.H ****   <P align=center>\image html counter.png</P> 
  29:fltk-1.3.4-1/FL/Fl_Simple_Counter.H ****   \image latex  counter.png "Fl_Simple_Counter" width=4cm
  30:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** */
  31:fltk-1.3.4-1/FL/Fl_Simple_Counter.H **** class FL_EXPORT Fl_Simple_Counter : public Fl_Counter {
 712              		.loc 6 31 0
 713              		.cfi_startproc
 714              	.LVL85:
 715 0000 53       		pushq	%rbx
 716              		.cfi_def_cfa_offset 16
 717              		.cfi_offset 3, -16
 718              	.LBB357:
 719              	.LBB358:
 720              	.LBB359:
 178:fltk-1.3.4-1/src/Fl_Counter.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 721              		.loc 2 178 0
 722 0001 4889FE   		movq	%rdi, %rsi
 723              	.LBE359:
 724              	.LBE358:
 725              	.LBE357:
 726              		.loc 6 31 0
 727 0004 4889FB   		movq	%rdi, %rbx
 728              	.LBB368:
 729              	.LBB366:
 730              	.LBB364:
 177:fltk-1.3.4-1/src/Fl_Counter.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 731              		.loc 2 177 0
 732 0007 48C70700 		movq	$_ZTV10Fl_Counter+16, (%rdi)
 732      000000
 178:fltk-1.3.4-1/src/Fl_Counter.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 733              		.loc 2 178 0
 734 000e BF000000 		movl	$_ZN10Fl_Counter15repeat_callbackEPv, %edi
 734      00
 735              	.LVL86:
 736 0013 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 736      00
 737              	.LVL87:
 738              	.LBB360:
 739              	.LBB361:
 740              		.loc 5 49 0
 741 0018 48C70300 		movq	$_ZTV11Fl_Valuator+16, (%rbx)
 741      000000
 742 001f 4889DF   		movq	%rbx, %rdi
 743              	.LBE361:
 744              	.LBE360:
 745              	.LBE364:
 746              	.LBE366:
 747              	.LBE368:
 748              		.loc 6 31 0
 749 0022 5B       		popq	%rbx
 750              		.cfi_def_cfa_offset 8
 751              	.LVL88:
 752              	.LBB369:
 753              	.LBB367:
 754              	.LBB365:
 755              	.LBB363:
 756              	.LBB362:
 757              		.loc 5 49 0
 758 0023 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 758      00
 759              	.LVL89:
 760              	.LBE362:
 761              	.LBE363:
 762              	.LBE365:
 763              	.LBE367:
 764              	.LBE369:
 765              		.cfi_endproc
 766              	.LFE512:
 768              		.section	.text.unlikely._ZN17Fl_Simple_CounterD2Ev,"axG",@progbits,_ZN17Fl_Simple_CounterD5Ev,comd
 769              	.LCOLDE10:
 770              		.section	.text._ZN17Fl_Simple_CounterD2Ev,"axG",@progbits,_ZN17Fl_Simple_CounterD5Ev,comdat
 771              	.LHOTE10:
 772              		.weak	_ZN17Fl_Simple_CounterD1Ev
 773              		.set	_ZN17Fl_Simple_CounterD1Ev,_ZN17Fl_Simple_CounterD2Ev
 774              		.section	.text.unlikely._ZN17Fl_Simple_CounterD0Ev,"axG",@progbits,_ZN17Fl_Simple_CounterD5Ev,comd
 775              		.align 2
 776              	.LCOLDB11:
 777              		.section	.text._ZN17Fl_Simple_CounterD0Ev,"axG",@progbits,_ZN17Fl_Simple_CounterD5Ev,comdat
 778              	.LHOTB11:
 779              		.align 2
 780              		.p2align 4,,15
 781              		.weak	_ZN17Fl_Simple_CounterD0Ev
 783              	_ZN17Fl_Simple_CounterD0Ev:
 784              	.LFB514:
 785              		.loc 6 31 0
 786              		.cfi_startproc
 787              	.LVL90:
 788 0000 53       		pushq	%rbx
 789              		.cfi_def_cfa_offset 16
 790              		.cfi_offset 3, -16
 791              	.LBB377:
 792              	.LBB378:
 793              	.LBB379:
 794              	.LBB380:
 178:fltk-1.3.4-1/src/Fl_Counter.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 795              		.loc 2 178 0
 796 0001 4889FE   		movq	%rdi, %rsi
 797              	.LBE380:
 798              	.LBE379:
 799              	.LBE378:
 800              	.LBE377:
 801              		.loc 6 31 0
 802 0004 4889FB   		movq	%rdi, %rbx
 803              	.LBB386:
 804              	.LBB385:
 805              	.LBB384:
 806              	.LBB383:
 177:fltk-1.3.4-1/src/Fl_Counter.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 807              		.loc 2 177 0
 808 0007 48C70700 		movq	$_ZTV10Fl_Counter+16, (%rdi)
 808      000000
 178:fltk-1.3.4-1/src/Fl_Counter.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 809              		.loc 2 178 0
 810 000e BF000000 		movl	$_ZN10Fl_Counter15repeat_callbackEPv, %edi
 810      00
 811              	.LVL91:
 812 0013 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 812      00
 813              	.LVL92:
 814              	.LBB381:
 815              	.LBB382:
 816              		.loc 5 49 0
 817 0018 4889DF   		movq	%rbx, %rdi
 818 001b 48C70300 		movq	$_ZTV11Fl_Valuator+16, (%rbx)
 818      000000
 819 0022 E8000000 		call	_ZN9Fl_WidgetD2Ev
 819      00
 820              	.LVL93:
 821              	.LBE382:
 822              	.LBE381:
 823              	.LBE383:
 824              	.LBE384:
 825              	.LBE385:
 826              	.LBE386:
 827              		.loc 6 31 0
 828 0027 4889DF   		movq	%rbx, %rdi
 829 002a 5B       		popq	%rbx
 830              		.cfi_def_cfa_offset 8
 831              	.LVL94:
 832 002b E9000000 		jmp	_ZdlPv
 832      00
 833              	.LVL95:
 834              		.cfi_endproc
 835              	.LFE514:
 837              		.section	.text.unlikely._ZN17Fl_Simple_CounterD0Ev,"axG",@progbits,_ZN17Fl_Simple_CounterD5Ev,comd
 838              	.LCOLDE11:
 839              		.section	.text._ZN17Fl_Simple_CounterD0Ev,"axG",@progbits,_ZN17Fl_Simple_CounterD5Ev,comdat
 840              	.LHOTE11:
 841              		.section	.text.unlikely._ZN10Fl_Counter12increment_cbEv,"ax",@progbits
 842              		.align 2
 843              	.LCOLDB12:
 844              		.section	.text._ZN10Fl_Counter12increment_cbEv,"ax",@progbits
 845              	.LHOTB12:
 846              		.align 2
 847              		.p2align 4,,15
 848              		.globl	_ZN10Fl_Counter12increment_cbEv
 850              	_ZN10Fl_Counter12increment_cbEv:
 851              	.LFB493:
  81:fltk-1.3.4-1/src/Fl_Counter.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 852              		.loc 2 81 0
 853              		.cfi_startproc
 854              	.LVL96:
  82:fltk-1.3.4-1/src/Fl_Counter.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 855              		.loc 2 82 0
 856 0000 0FB687B8 		movzbl	184(%rdi), %eax
 856      000000
 857 0007 84C0     		testb	%al, %al
 858 0009 743D     		je	.L50
  81:fltk-1.3.4-1/src/Fl_Counter.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 859              		.loc 2 81 0
 860 000b 53       		pushq	%rbx
 861              		.cfi_def_cfa_offset 16
 862              		.cfi_offset 3, -16
  84:fltk-1.3.4-1/src/Fl_Counter.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 863              		.loc 2 84 0
 864 000c 3C02     		cmpb	$2, %al
 865 000e 4889FB   		movq	%rdi, %rbx
 866 0011 F20F1047 		movsd	120(%rdi), %xmm0
 866      78
 867              	.LVL97:
 868 0016 7448     		je	.L43
 869 0018 7656     		jbe	.L51
 870 001a 3C03     		cmpb	$3, %al
 871 001c 7432     		je	.L46
 872 001e 3C04     		cmpb	$4, %al
 873 0020 7508     		jne	.L48
  88:fltk-1.3.4-1/src/Fl_Counter.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 874              		.loc 2 88 0
 875 0022 F20F5887 		addsd	176(%rdi), %xmm0
 875      B0000000 
 876              	.LVL98:
 877              	.L48:
  90:fltk-1.3.4-1/src/Fl_Counter.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 878              		.loc 2 90 0
 879 002a 4889DF   		movq	%rbx, %rdi
 880 002d E8000000 		call	_ZN11Fl_Valuator5roundEd
 880      00
 881              	.LVL99:
 882 0032 4889DF   		movq	%rbx, %rdi
 883 0035 E8000000 		call	_ZN11Fl_Valuator5clampEd
 883      00
 884              	.LVL100:
 885 003a 4889DF   		movq	%rbx, %rdi
  91:fltk-1.3.4-1/src/Fl_Counter.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 886              		.loc 2 91 0
 887 003d 5B       		popq	%rbx
 888              		.cfi_restore 3
 889              		.cfi_def_cfa_offset 8
 890              	.LVL101:
  90:fltk-1.3.4-1/src/Fl_Counter.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 891              		.loc 2 90 0
 892 003e E9000000 		jmp	_ZN11Fl_Valuator11handle_dragEd
 892      00
 893              	.LVL102:
 894              		.p2align 4,,10
 895 0043 0F1F4400 		.p2align 3
 895      00
 896              	.L50:
 897 0048 F3C3     		rep ret
 898              	.LVL103:
 899 004a 660F1F44 		.p2align 4,,10
 899      0000
 900              		.p2align 3
 901              	.L46:
 902              		.cfi_def_cfa_offset 16
 903              		.cfi_offset 3, -16
  87:fltk-1.3.4-1/src/Fl_Counter.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 904              		.loc 2 87 0
 905 0050 BE010000 		movl	$1, %esi
 905      00
 906 0055 E8000000 		call	_ZN11Fl_Valuator9incrementEdi
 906      00
 907              	.LVL104:
 908 005a EBCE     		jmp	.L48
 909              	.LVL105:
 910 005c 0F1F4000 		.p2align 4,,10
 911              		.p2align 3
 912              	.L43:
  86:fltk-1.3.4-1/src/Fl_Counter.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 913              		.loc 2 86 0
 914 0060 BEFFFFFF 		movl	$-1, %esi
 914      FF
 915 0065 E8000000 		call	_ZN11Fl_Valuator9incrementEdi
 915      00
 916              	.LVL106:
 917 006a EBBE     		jmp	.L48
 918              	.LVL107:
 919 006c 0F1F4000 		.p2align 4,,10
 920              		.p2align 3
 921              	.L51:
  84:fltk-1.3.4-1/src/Fl_Counter.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 922              		.loc 2 84 0
 923 0070 3C01     		cmpb	$1, %al
 924 0072 75B6     		jne	.L48
  85:fltk-1.3.4-1/src/Fl_Counter.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 925              		.loc 2 85 0
 926 0074 F20F5C87 		subsd	176(%rdi), %xmm0
 926      B0000000 
 927              	.LVL108:
 928 007c EBAC     		jmp	.L48
 929              		.cfi_endproc
 930              	.LFE493:
 932              		.section	.text.unlikely._ZN10Fl_Counter12increment_cbEv
 933              	.LCOLDE12:
 934              		.section	.text._ZN10Fl_Counter12increment_cbEv
 935              	.LHOTE12:
 936              		.section	.text.unlikely._ZN10Fl_Counter15repeat_callbackEPv,"ax",@progbits
 937              		.align 2
 938              	.LCOLDB14:
 939              		.section	.text._ZN10Fl_Counter15repeat_callbackEPv,"ax",@progbits
 940              	.LHOTB14:
 941              		.align 2
 942              		.p2align 4,,15
 943              		.globl	_ZN10Fl_Counter15repeat_callbackEPv
 945              	_ZN10Fl_Counter15repeat_callbackEPv:
 946              	.LFB494:
  96:fltk-1.3.4-1/src/Fl_Counter.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 947              		.loc 2 96 0
 948              		.cfi_startproc
 949              	.LVL109:
  98:fltk-1.3.4-1/src/Fl_Counter.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 950              		.loc 2 98 0
 951 0000 80BFB800 		cmpb	$0, 184(%rdi)
 951      000000
 952 0007 7507     		jne	.L56
 953 0009 F3C3     		rep ret
 954 000b 0F1F4400 		.p2align 4,,10
 954      00
 955              		.p2align 3
 956              	.L56:
  96:fltk-1.3.4-1/src/Fl_Counter.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 957              		.loc 2 96 0
 958 0010 53       		pushq	%rbx
 959              		.cfi_def_cfa_offset 16
 960              		.cfi_offset 3, -16
 961              	.LBB389:
 962              	.LBB390:
  99:fltk-1.3.4-1/src/Fl_Counter.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 963              		.loc 2 99 0
 964 0011 F20F1005 		movsd	.LC13(%rip), %xmm0
 964      00000000 
 965 0019 4889FB   		movq	%rdi, %rbx
 966              	.LVL110:
 967 001c 4889FE   		movq	%rdi, %rsi
 968 001f BF000000 		movl	$_ZN10Fl_Counter15repeat_callbackEPv, %edi
 968      00
 969              	.LVL111:
 970 0024 E8000000 		call	_ZN2Fl11add_timeoutEdPFvPvES0_
 970      00
 971              	.LVL112:
 100:fltk-1.3.4-1/src/Fl_Counter.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 972              		.loc 2 100 0
 973 0029 4889DF   		movq	%rbx, %rdi
 974              	.LBE390:
 975              	.LBE389:
 102:fltk-1.3.4-1/src/Fl_Counter.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 976              		.loc 2 102 0
 977 002c 5B       		popq	%rbx
 978              		.cfi_restore 3
 979              		.cfi_def_cfa_offset 8
 980              	.LVL113:
 981              	.LBB392:
 982              	.LBB391:
 100:fltk-1.3.4-1/src/Fl_Counter.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 983              		.loc 2 100 0
 984 002d E9000000 		jmp	_ZN10Fl_Counter12increment_cbEv
 984      00
 985              	.LVL114:
 986              	.LBE391:
 987              	.LBE392:
 988              		.cfi_endproc
 989              	.LFE494:
 991              		.section	.text.unlikely._ZN10Fl_Counter15repeat_callbackEPv
 992              	.LCOLDE14:
 993              		.section	.text._ZN10Fl_Counter15repeat_callbackEPv
 994              	.LHOTE14:
 995              		.section	.text.unlikely._ZN10Fl_Counter13calc_mouseobjEv,"ax",@progbits
 996              		.align 2
 997              	.LCOLDB15:
 998              		.section	.text._ZN10Fl_Counter13calc_mouseobjEv,"ax",@progbits
 999              	.LHOTB15:
 1000              		.align 2
 1001              		.p2align 4,,15
 1002              		.globl	_ZN10Fl_Counter13calc_mouseobjEv
 1004              	_ZN10Fl_Counter13calc_mouseobjEv:
 1005              	.LFB495:
 104:fltk-1.3.4-1/src/Fl_Counter.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1006              		.loc 2 104 0
 1007              		.cfi_startproc
 1008              	.LVL115:
 1009 0000 55       		pushq	%rbp
 1010              		.cfi_def_cfa_offset 16
 1011              		.cfi_offset 6, -16
 1012 0001 53       		pushq	%rbx
 1013              		.cfi_def_cfa_offset 24
 1014              		.cfi_offset 3, -24
 1015 0002 4889FB   		movq	%rdi, %rbx
 1016 0005 4883EC08 		subq	$8, %rsp
 1017              		.cfi_def_cfa_offset 32
 1018              	.LBB448:
 105:fltk-1.3.4-1/src/Fl_Counter.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 1019              		.loc 2 105 0
 1020 0009 807F6C00 		cmpb	$0, 108(%rdi)
 1021 000d 7541     		jne	.L58
 1022              	.LVL116:
 1023              	.LBE448:
 1024              	.LBB451:
 1025              	.LBB452:
 1026              	.LBB453:
 106:fltk-1.3.4-1/src/Fl_Counter.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1027              		.loc 2 106 0
 1028 000f 8B4728   		movl	40(%rdi), %eax
 1029 0012 BA1F85EB 		movl	$1374389535, %edx
 1029      51
 107:fltk-1.3.4-1/src/Fl_Counter.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 1030              		.loc 2 107 0
 1031 0017 8B7724   		movl	36(%rdi), %esi
 106:fltk-1.3.4-1/src/Fl_Counter.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1032              		.loc 2 106 0
 1033 001a 89C1     		movl	%eax, %ecx
 1034 001c C1E104   		sall	$4, %ecx
 1035 001f 29C1     		subl	%eax, %ecx
 1036 0021 89C8     		movl	%ecx, %eax
 1037 0023 C1F91F   		sarl	$31, %ecx
 1038 0026 F7EA     		imull	%edx
 1039 0028 C1FA05   		sarl	$5, %edx
 1040 002b 29CA     		subl	%ecx, %edx
 107:fltk-1.3.4-1/src/Fl_Counter.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 1041              		.loc 2 107 0
 1042 002d 8B4F2C   		movl	44(%rdi), %ecx
 1043 0030 8B7F20   		movl	32(%rdi), %edi
 1044              	.LVL117:
 106:fltk-1.3.4-1/src/Fl_Counter.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1045              		.loc 2 106 0
 1046 0033 89D5     		movl	%edx, %ebp
 1047              	.LVL118:
 107:fltk-1.3.4-1/src/Fl_Counter.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 1048              		.loc 2 107 0
 1049 0035 E8000000 		call	_ZN2Fl12event_insideEiiii
 1049      00
 1050              	.LVL119:
 1051 003a 89C2     		movl	%eax, %edx
 1052 003c B8010000 		movl	$1, %eax
 1052      00
 1053 0041 85D2     		testl	%edx, %edx
 1054 0043 7443     		je	.L68
 1055              	.LVL120:
 1056              	.L59:
 1057              	.LBE453:
 1058              	.LBE452:
 1059              	.LBE451:
 117:fltk-1.3.4-1/src/Fl_Counter.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1060              		.loc 2 117 0
 1061 0045 4883C408 		addq	$8, %rsp
 1062              		.cfi_remember_state
 1063              		.cfi_def_cfa_offset 24
 1064 0049 5B       		popq	%rbx
 1065              		.cfi_def_cfa_offset 16
 1066              	.LVL121:
 1067 004a 5D       		popq	%rbp
 1068              		.cfi_def_cfa_offset 8
 1069 004b C3       		ret
 1070              	.LVL122:
 1071 004c 0F1F4000 		.p2align 4,,10
 1072              		.p2align 3
 1073              	.L58:
 1074              		.cfi_restore_state
 1075              	.LBB460:
 1076              	.LBB449:
 112:fltk-1.3.4-1/src/Fl_Counter.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 1077              		.loc 2 112 0
 1078 0050 8B4F28   		movl	40(%rdi), %ecx
 1079 0053 BA676666 		movl	$1717986919, %edx
 1079      66
 113:fltk-1.3.4-1/src/Fl_Counter.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 1080              		.loc 2 113 0
 1081 0058 8B7724   		movl	36(%rdi), %esi
 112:fltk-1.3.4-1/src/Fl_Counter.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 1082              		.loc 2 112 0
 1083 005b 89C8     		movl	%ecx, %eax
 1084 005d C1F91F   		sarl	$31, %ecx
 1085 0060 F7EA     		imull	%edx
 1086 0062 D1FA     		sarl	%edx
 1087 0064 29CA     		subl	%ecx, %edx
 113:fltk-1.3.4-1/src/Fl_Counter.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 1088              		.loc 2 113 0
 1089 0066 8B4F2C   		movl	44(%rdi), %ecx
 1090 0069 8B7F20   		movl	32(%rdi), %edi
 112:fltk-1.3.4-1/src/Fl_Counter.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 1091              		.loc 2 112 0
 1092 006c 89D5     		movl	%edx, %ebp
 1093              	.LVL123:
 113:fltk-1.3.4-1/src/Fl_Counter.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 1094              		.loc 2 113 0
 1095 006e E8000000 		call	_ZN2Fl12event_insideEiiii
 1095      00
 1096              	.LVL124:
 1097 0073 85C0     		testl	%eax, %eax
 1098 0075 7479     		je	.L69
 1099              	.LVL125:
 1100              	.L62:
 1101              	.LBE449:
 1102              	.LBE460:
 117:fltk-1.3.4-1/src/Fl_Counter.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1103              		.loc 2 117 0
 1104 0077 4883C408 		addq	$8, %rsp
 1105              		.cfi_remember_state
 1106              		.cfi_def_cfa_offset 24
 1107              	.LBB461:
 1108              	.LBB457:
 1109              	.LBB454:
 108:fltk-1.3.4-1/src/Fl_Counter.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 1110              		.loc 2 108 0
 1111 007b B8020000 		movl	$2, %eax
 1111      00
 1112              	.LBE454:
 1113              	.LBE457:
 1114              	.LBE461:
 117:fltk-1.3.4-1/src/Fl_Counter.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1115              		.loc 2 117 0
 1116 0080 5B       		popq	%rbx
 1117              		.cfi_def_cfa_offset 16
 1118              	.LVL126:
 1119 0081 5D       		popq	%rbp
 1120              		.cfi_def_cfa_offset 8
 1121 0082 C3       		ret
 1122              	.LVL127:
 1123              		.p2align 4,,10
 1124 0083 0F1F4400 		.p2align 3
 1124      00
 1125              	.L68:
 1126              		.cfi_restore_state
 1127              	.LBB462:
 1128              	.LBB458:
 1129              	.LBB455:
 108:fltk-1.3.4-1/src/Fl_Counter.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 1130              		.loc 2 108 0
 1131 0088 8B7B20   		movl	32(%rbx), %edi
 1132 008b 8B4B2C   		movl	44(%rbx), %ecx
 1133 008e 89EA     		movl	%ebp, %edx
 1134 0090 8B7324   		movl	36(%rbx), %esi
 1135 0093 01EF     		addl	%ebp, %edi
 1136 0095 E8000000 		call	_ZN2Fl12event_insideEiiii
 1136      00
 1137              	.LVL128:
 1138 009a 85C0     		testl	%eax, %eax
 1139 009c 75D9     		jne	.L62
 1140              	.LVL129:
 109:fltk-1.3.4-1/src/Fl_Counter.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1141              		.loc 2 109 0
 1142 009e 8B7B28   		movl	40(%rbx), %edi
 1143 00a1 037B20   		addl	32(%rbx), %edi
 1144 00a4 8D442D00 		leal	(%rbp,%rbp), %eax
 1145 00a8 8B4B2C   		movl	44(%rbx), %ecx
 1146 00ab 8B7324   		movl	36(%rbx), %esi
 1147 00ae 89EA     		movl	%ebp, %edx
 1148 00b0 29C7     		subl	%eax, %edi
 1149 00b2 E8000000 		call	_ZN2Fl12event_insideEiiii
 1149      00
 1150              	.LVL130:
 1151 00b7 85C0     		testl	%eax, %eax
 1152 00b9 754E     		jne	.L63
 1153              	.LVL131:
 110:fltk-1.3.4-1/src/Fl_Counter.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 1154              		.loc 2 110 0
 1155 00bb 8B7B28   		movl	40(%rbx), %edi
 1156 00be 037B20   		addl	32(%rbx), %edi
 1157 00c1 89EA     		movl	%ebp, %edx
 1158 00c3 8B4B2C   		movl	44(%rbx), %ecx
 1159 00c6 8B7324   		movl	36(%rbx), %esi
 1160 00c9 29EF     		subl	%ebp, %edi
 1161 00cb E8000000 		call	_ZN2Fl12event_insideEiiii
 1161      00
 1162              	.LVL132:
 1163 00d0 89C2     		movl	%eax, %edx
 1164 00d2 B8040000 		movl	$4, %eax
 1164      00
 1165 00d7 85D2     		testl	%edx, %edx
 1166 00d9 0F8566FF 		jne	.L59
 1166      FFFF
 1167              	.LVL133:
 1168              	.L64:
 1169              	.LBE455:
 116:fltk-1.3.4-1/src/Fl_Counter.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1170              		.loc 2 116 0
 1171 00df B8FFFFFF 		movl	$-1, %eax
 1171      FF
 1172 00e4 E95CFFFF 		jmp	.L59
 1172      FF
 1173              	.LVL134:
 1174 00e9 0F1F8000 		.p2align 4,,10
 1174      000000
 1175              		.p2align 3
 1176              	.L69:
 1177              	.LBE458:
 1178              	.LBE462:
 1179              	.LBB463:
 1180              	.LBB450:
 114:fltk-1.3.4-1/src/Fl_Counter.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1181              		.loc 2 114 0
 1182 00f0 8B7B28   		movl	40(%rbx), %edi
 1183 00f3 037B20   		addl	32(%rbx), %edi
 1184 00f6 89EA     		movl	%ebp, %edx
 1185 00f8 8B4B2C   		movl	44(%rbx), %ecx
 1186 00fb 8B7324   		movl	36(%rbx), %esi
 1187 00fe 29EF     		subl	%ebp, %edi
 1188 0100 E8000000 		call	_ZN2Fl12event_insideEiiii
 1188      00
 1189              	.LVL135:
 1190 0105 85C0     		testl	%eax, %eax
 1191 0107 74D6     		je	.L64
 1192              	.LVL136:
 1193              	.L63:
 1194              	.LBE450:
 1195              	.LBE463:
 117:fltk-1.3.4-1/src/Fl_Counter.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1196              		.loc 2 117 0
 1197 0109 4883C408 		addq	$8, %rsp
 1198              		.cfi_def_cfa_offset 24
 1199              	.LBB464:
 1200              	.LBB459:
 1201              	.LBB456:
 109:fltk-1.3.4-1/src/Fl_Counter.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1202              		.loc 2 109 0
 1203 010d B8030000 		movl	$3, %eax
 1203      00
 1204              	.LBE456:
 1205              	.LBE459:
 1206              	.LBE464:
 117:fltk-1.3.4-1/src/Fl_Counter.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1207              		.loc 2 117 0
 1208 0112 5B       		popq	%rbx
 1209              		.cfi_def_cfa_offset 16
 1210              	.LVL137:
 1211 0113 5D       		popq	%rbp
 1212              		.cfi_def_cfa_offset 8
 1213 0114 C3       		ret
 1214              		.cfi_endproc
 1215              	.LFE495:
 1217              		.section	.text.unlikely._ZN10Fl_Counter13calc_mouseobjEv
 1218              	.LCOLDE15:
 1219              		.section	.text._ZN10Fl_Counter13calc_mouseobjEv
 1220              	.LHOTE15:
 1221              		.section	.text.unlikely._ZN10Fl_Counter6handleEi,"ax",@progbits
 1222              		.align 2
 1223              	.LCOLDB17:
 1224              		.section	.text._ZN10Fl_Counter6handleEi,"ax",@progbits
 1225              	.LHOTB17:
 1226              		.align 2
 1227              		.p2align 4,,15
 1228              		.globl	_ZN10Fl_Counter6handleEi
 1230              	_ZN10Fl_Counter6handleEi:
 1231              	.LFB496:
 119:fltk-1.3.4-1/src/Fl_Counter.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1232              		.loc 2 119 0
 1233              		.cfi_startproc
 1234              	.LVL138:
 1235 0000 55       		pushq	%rbp
 1236              		.cfi_def_cfa_offset 16
 1237              		.cfi_offset 6, -16
 1238 0001 53       		pushq	%rbx
 1239              		.cfi_def_cfa_offset 24
 1240              		.cfi_offset 3, -24
 1241 0002 4883EC18 		subq	$24, %rsp
 1242              		.cfi_def_cfa_offset 48
 119:fltk-1.3.4-1/src/Fl_Counter.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1243              		.loc 2 119 0
 1244 0006 64488B04 		movq	%fs:40, %rax
 1244      25280000 
 1244      00
 1245 000f 48894424 		movq	%rax, 8(%rsp)
 1245      08
 1246 0014 31C0     		xorl	%eax, %eax
 1247              	.LBB465:
 121:fltk-1.3.4-1/src/Fl_Counter.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 1248              		.loc 2 121 0
 1249 0016 83FE08   		cmpl	$8, %esi
 1250 0019 0F878101 		ja	.L97
 1250      0000
 1251 001f 89F6     		movl	%esi, %esi
 1252 0021 4889FB   		movq	%rdi, %rbx
 1253 0024 FF24F500 		jmp	*.L73(,%rsi,8)
 1253      000000
 1254              		.section	.rodata._ZN10Fl_Counter6handleEi,"a",@progbits
 1255              		.align 8
 1256              		.align 4
 1257              	.L73:
 1258 0000 00000000 		.quad	.L97
 1258      00000000 
 1259 0008 00000000 		.quad	.L72
 1259      00000000 
 1260 0010 00000000 		.quad	.L74
 1260      00000000 
 1261 0018 00000000 		.quad	.L103
 1261      00000000 
 1262 0020 00000000 		.quad	.L103
 1262      00000000 
 1263 0028 00000000 		.quad	.L76
 1263      00000000 
 1264 0030 00000000 		.quad	.L77
 1264      00000000 
 1265 0038 00000000 		.quad	.L77
 1265      00000000 
 1266 0040 00000000 		.quad	.L78
 1266      00000000 
 1267              		.section	.text._ZN10Fl_Counter6handleEi
 1268 002b 0F1F4400 		.p2align 4,,10
 1268      00
 1269              		.p2align 3
 1270              	.L74:
 1271              	.LBB466:
 123:fltk-1.3.4-1/src/Fl_Counter.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 1272              		.loc 2 123 0
 1273 0030 80BFB800 		cmpb	$0, 184(%rdi)
 1273      000000
 1274 0037 741C     		je	.L80
 124:fltk-1.3.4-1/src/Fl_Counter.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1275              		.loc 2 124 0
 1276 0039 4889FE   		movq	%rdi, %rsi
 1277              	.LVL139:
 1278 003c BF000000 		movl	$_ZN10Fl_Counter15repeat_callbackEPv, %edi
 1278      00
 1279              	.LVL140:
 1280 0041 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 1280      00
 1281              	.LVL141:
 125:fltk-1.3.4-1/src/Fl_Counter.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 1282              		.loc 2 125 0
 1283 0046 C683B800 		movb	$0, 184(%rbx)
 1283      000000
 126:fltk-1.3.4-1/src/Fl_Counter.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 1284              		.loc 2 126 0
 1285 004d 4889DF   		movq	%rbx, %rdi
 1286 0050 E8000000 		call	_ZN9Fl_Widget6redrawEv
 1286      00
 1287              	.LVL142:
 1288              	.L80:
 128:fltk-1.3.4-1/src/Fl_Counter.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1289              		.loc 2 128 0
 1290 0055 4889DF   		movq	%rbx, %rdi
 1291 0058 E8000000 		call	_ZN11Fl_Valuator14handle_releaseEv
 1291      00
 1292              	.LVL143:
 1293              	.L103:
 155:fltk-1.3.4-1/src/Fl_Counter.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 1294              		.loc 2 155 0
 1295 005d B8010000 		movl	$1, %eax
 1295      00
 1296              	.LVL144:
 1297              	.L71:
 1298              	.LBE466:
 1299              	.LBE465:
 172:fltk-1.3.4-1/src/Fl_Counter.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1300              		.loc 2 172 0 discriminator 1
 1301 0062 488B4C24 		movq	8(%rsp), %rcx
 1301      08
 1302 0067 6448330C 		xorq	%fs:40, %rcx
 1302      25280000 
 1302      00
 1303 0070 0F858701 		jne	.L104
 1303      0000
 172:fltk-1.3.4-1/src/Fl_Counter.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1304              		.loc 2 172 0 is_stmt 0
 1305 0076 4883C418 		addq	$24, %rsp
 1306              		.cfi_remember_state
 1307              		.cfi_def_cfa_offset 24
 1308 007a 5B       		popq	%rbx
 1309              		.cfi_def_cfa_offset 16
 1310 007b 5D       		popq	%rbp
 1311              		.cfi_def_cfa_offset 8
 1312 007c C3       		ret
 1313              	.LVL145:
 1314 007d 0F1F00   		.p2align 4,,10
 1315              		.p2align 3
 1316              	.L72:
 1317              		.cfi_restore_state
 1318              	.LBB486:
 1319              	.LBB485:
 1320              	.LBB467:
 1321              	.LBB468:
 1322              		.file 7 "fltk-1.3.4-1/FL/Fl.H"
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
 1323              		.loc 7 1195 0 is_stmt 1
 1324 0080 BF010000 		movl	$1, %edi
 1324      00
 1325 0085 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 1325      00
 1326              	.LVL146:
 1327              	.LBE468:
 1328              	.LBE467:
 131:fltk-1.3.4-1/src/Fl_Counter.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 1329              		.loc 2 131 0
 1330 008a 84C0     		testb	%al, %al
 1331 008c 0F854E01 		jne	.L105
 1331      0000
 1332              	.L82:
 1333              	.LBB469:
 132:fltk-1.3.4-1/src/Fl_Counter.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1334              		.loc 2 132 0
 1335 0092 4889E7   		movq	%rsp, %rdi
 1336 0095 4889DE   		movq	%rbx, %rsi
 1337 0098 E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 1337      00
 1338              	.LVL147:
 134:fltk-1.3.4-1/src/Fl_Counter.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1339              		.loc 2 134 0
 1340 009d 48833C24 		cmpq	$0, (%rsp)
 1340      00
 1341              	.LBB470:
 1342              	.LBB471:
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
 1343              		.loc 5 64 0
 1344 00a2 F20F1043 		movsd	120(%rbx), %xmm0
 1344      78
 1345              	.LBE471:
 1346              	.LBE470:
 134:fltk-1.3.4-1/src/Fl_Counter.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1347              		.loc 2 134 0
 1348 00a7 4889E7   		movq	%rsp, %rdi
 1349              	.LBB473:
 1350              	.LBB472:
 1351              		.loc 5 64 0
 1352 00aa F20F1183 		movsd	%xmm0, 128(%rbx)
 1352      80000000 
 1353              	.LBE472:
 1354              	.LBE473:
 134:fltk-1.3.4-1/src/Fl_Counter.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1355              		.loc 2 134 0
 1356 00b2 0F843B01 		je	.L100
 1356      0000
 132:fltk-1.3.4-1/src/Fl_Counter.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1357              		.loc 2 132 0
 1358 00b8 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 1358      00
 1359              	.LVL148:
 1360              	.L76:
 1361              	.LBE469:
 137:fltk-1.3.4-1/src/Fl_Counter.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 1362              		.loc 2 137 0
 1363 00bd 4889DF   		movq	%rbx, %rdi
 1364 00c0 E8000000 		call	_ZN10Fl_Counter13calc_mouseobjEv
 1364      00
 1365              	.LVL149:
 1366              	.LBB474:
 138:fltk-1.3.4-1/src/Fl_Counter.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1367              		.loc 2 138 0
 1368 00c5 0FB693B8 		movzbl	184(%rbx), %edx
 1368      000000
 1369              	.LBE474:
 137:fltk-1.3.4-1/src/Fl_Counter.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 1370              		.loc 2 137 0
 1371 00cc 89C5     		movl	%eax, %ebp
 1372              	.LVL150:
 147:fltk-1.3.4-1/src/Fl_Counter.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1373              		.loc 2 147 0
 1374 00ce B8010000 		movl	$1, %eax
 1374      00
 1375              	.LVL151:
 1376              	.LBB479:
 138:fltk-1.3.4-1/src/Fl_Counter.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1377              		.loc 2 138 0
 1378 00d3 39D5     		cmpl	%edx, %ebp
 1379 00d5 748B     		je	.L71
 1380              	.LBB475:
 139:fltk-1.3.4-1/src/Fl_Counter.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1381              		.loc 2 139 0
 1382 00d7 4889DE   		movq	%rbx, %rsi
 1383 00da BF000000 		movl	$_ZN10Fl_Counter15repeat_callbackEPv, %edi
 1383      00
 1384 00df E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 1384      00
 1385              	.LVL152:
 141:fltk-1.3.4-1/src/Fl_Counter.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1386              		.loc 2 141 0
 1387 00e4 85ED     		testl	%ebp, %ebp
 140:fltk-1.3.4-1/src/Fl_Counter.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 1388              		.loc 2 140 0
 1389 00e6 4088ABB8 		movb	%bpl, 184(%rbx)
 1389      000000
 141:fltk-1.3.4-1/src/Fl_Counter.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1390              		.loc 2 141 0
 1391 00ed 0F85BD00 		jne	.L106
 1391      0000
 1392              	.L84:
 142:fltk-1.3.4-1/src/Fl_Counter.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 1393              		.loc 2 142 0
 1394 00f3 4889DE   		movq	%rbx, %rsi
 1395 00f6 4889E7   		movq	%rsp, %rdi
 1396 00f9 E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 1396      00
 1397              	.LVL153:
 143:fltk-1.3.4-1/src/Fl_Counter.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1398              		.loc 2 143 0
 1399 00fe 4889DF   		movq	%rbx, %rdi
 1400 0101 E8000000 		call	_ZN10Fl_Counter12increment_cbEv
 1400      00
 1401              	.LVL154:
 144:fltk-1.3.4-1/src/Fl_Counter.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 1402              		.loc 2 144 0
 1403 0106 48833C24 		cmpq	$0, (%rsp)
 1403      00
 1404 010b 0F84DF00 		je	.L107
 1404      0000
 145:fltk-1.3.4-1/src/Fl_Counter.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1405              		.loc 2 145 0
 1406 0111 4889DF   		movq	%rbx, %rdi
 1407 0114 E8000000 		call	_ZN9Fl_Widget6redrawEv
 1407      00
 1408              	.LVL155:
 142:fltk-1.3.4-1/src/Fl_Counter.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 1409              		.loc 2 142 0
 1410 0119 4889E7   		movq	%rsp, %rdi
 1411 011c E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 1411      00
 1412              	.LVL156:
 1413              	.LBE475:
 1414              	.LBE479:
 147:fltk-1.3.4-1/src/Fl_Counter.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1415              		.loc 2 147 0
 1416 0121 B8010000 		movl	$1, %eax
 1416      00
 1417              	.LBB480:
 1418              	.LBB476:
 1419 0126 E937FFFF 		jmp	.L71
 1419      FF
 1420              	.LVL157:
 1421 012b 0F1F4400 		.p2align 4,,10
 1421      00
 1422              		.p2align 3
 1423              	.L78:
 1424              	.LBE476:
 1425              	.LBE480:
 149:fltk-1.3.4-1/src/Fl_Counter.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 1426              		.loc 2 149 0
 1427 0130 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 1427      0000
 1428 0136 3D51FF00 		cmpl	$65361, %eax
 1428      00
 1429 013b 0F848F00 		je	.L86
 1429      0000
 1430 0141 3D53FF00 		cmpl	$65363, %eax
 1430      00
 1431 0146 7558     		jne	.L97
 1432              	.LVL158:
 154:fltk-1.3.4-1/src/Fl_Counter.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1433              		.loc 2 154 0
 1434 0148 BE010000 		movl	$1, %esi
 1434      00
 1435              	.LVL159:
 1436              	.L102:
 1437 014d F20F1043 		movsd	120(%rbx), %xmm0
 1437      78
 1438 0152 4889DF   		movq	%rbx, %rdi
 1439 0155 E8000000 		call	_ZN11Fl_Valuator9incrementEdi
 1439      00
 1440              	.LVL160:
 1441 015a 4889DF   		movq	%rbx, %rdi
 1442 015d E8000000 		call	_ZN11Fl_Valuator5clampEd
 1442      00
 1443              	.LVL161:
 1444 0162 4889DF   		movq	%rbx, %rdi
 1445 0165 E8000000 		call	_ZN11Fl_Valuator11handle_dragEd
 1445      00
 1446              	.LVL162:
 1447 016a E9EEFEFF 		jmp	.L103
 1447      FF
 1448 016f 90       		.p2align 4,,10
 1449              		.p2align 3
 1450              	.L77:
 1451              	.LBB481:
 1452              	.LBB482:
 1453              		.loc 7 1195 0
 1454 0170 BF010000 		movl	$1, %edi
 1454      00
 1455 0175 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 1455      00
 1456              	.LVL163:
 1457 017a 89C2     		movl	%eax, %edx
 1458              	.LBE482:
 1459              	.LBE481:
 165:fltk-1.3.4-1/src/Fl_Counter.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1460              		.loc 2 165 0
 1461 017c 31C0     		xorl	%eax, %eax
 162:fltk-1.3.4-1/src/Fl_Counter.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 1462              		.loc 2 162 0
 1463 017e 84D2     		testb	%dl, %dl
 1464 0180 0F84DCFE 		je	.L71
 1464      FFFF
 163:fltk-1.3.4-1/src/Fl_Counter.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 1465              		.loc 2 163 0
 1466 0186 4889DF   		movq	%rbx, %rdi
 1467 0189 E8000000 		call	_ZN9Fl_Widget6redrawEv
 1467      00
 1468              	.LVL164:
 164:fltk-1.3.4-1/src/Fl_Counter.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1469              		.loc 2 164 0
 1470 018e B8010000 		movl	$1, %eax
 1470      00
 1471 0193 E9CAFEFF 		jmp	.L71
 1471      FF
 1472              	.LVL165:
 1473 0198 0F1F8400 		.p2align 4,,10
 1473      00000000 
 1474              		.p2align 3
 1475              	.L97:
 157:fltk-1.3.4-1/src/Fl_Counter.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 1476              		.loc 2 157 0
 1477 01a0 31C0     		xorl	%eax, %eax
 1478 01a2 E9BBFEFF 		jmp	.L71
 1478      FF
 1479              	.LVL166:
 1480 01a7 660F1F84 		.p2align 4,,10
 1480      00000000 
 1480      00
 1481              		.p2align 3
 1482              	.L106:
 1483              	.LBB483:
 1484              	.LBB477:
 141:fltk-1.3.4-1/src/Fl_Counter.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1485              		.loc 2 141 0 discriminator 1
 1486 01b0 F20F1005 		movsd	.LC16(%rip), %xmm0
 1486      00000000 
 1487 01b8 4889DE   		movq	%rbx, %rsi
 1488 01bb BF000000 		movl	$_ZN10Fl_Counter15repeat_callbackEPv, %edi
 1488      00
 1489 01c0 E8000000 		call	_ZN2Fl11add_timeoutEdPFvPvES0_
 1489      00
 1490              	.LVL167:
 1491 01c5 E929FFFF 		jmp	.L84
 1491      FF
 1492              	.LVL168:
 1493 01ca 660F1F44 		.p2align 4,,10
 1493      0000
 1494              		.p2align 3
 1495              	.L86:
 1496              	.LBE477:
 1497              	.LBE483:
 151:fltk-1.3.4-1/src/Fl_Counter.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1498              		.loc 2 151 0
 1499 01d0 BEFFFFFF 		movl	$-1, %esi
 1499      FF
 1500 01d5 E973FFFF 		jmp	.L102
 1500      FF
 1501              	.LVL169:
 1502 01da 660F1F44 		.p2align 4,,10
 1502      0000
 1503              		.p2align 3
 1504              	.L105:
 131:fltk-1.3.4-1/src/Fl_Counter.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 1505              		.loc 2 131 0 discriminator 1
 1506 01e0 4889DF   		movq	%rbx, %rdi
 1507 01e3 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 1507      00
 1508              	.LVL170:
 1509 01e8 E9A5FEFF 		jmp	.L82
 1509      FF
 1510              	.LVL171:
 1511 01ed 0F1F00   		.p2align 4,,10
 1512              		.p2align 3
 1513              	.L107:
 1514              	.LBB484:
 1515              	.LBB478:
 144:fltk-1.3.4-1/src/Fl_Counter.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 1516              		.loc 2 144 0 discriminator 1
 1517 01f0 4889E7   		movq	%rsp, %rdi
 1518              	.LVL172:
 1519              	.L100:
 1520 01f3 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 1520      00
 1521              	.LVL173:
 1522 01f8 E960FEFF 		jmp	.L103
 1522      FF
 1523              	.LVL174:
 1524              	.L104:
 1525              	.LBE478:
 1526              	.LBE484:
 1527              	.LBE485:
 1528              	.LBE486:
 172:fltk-1.3.4-1/src/Fl_Counter.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1529              		.loc 2 172 0
 1530 01fd E8000000 		call	__stack_chk_fail
 1530      00
 1531              	.LVL175:
 1532              		.cfi_endproc
 1533              	.LFE496:
 1535              		.section	.text.unlikely._ZN10Fl_Counter6handleEi
 1536              	.LCOLDE17:
 1537              		.section	.text._ZN10Fl_Counter6handleEi
 1538              	.LHOTE17:
 1539              		.section	.text.unlikely._ZN10Fl_CounterC2EiiiiPKc,"ax",@progbits
 1540              		.align 2
 1541              	.LCOLDB21:
 1542              		.section	.text._ZN10Fl_CounterC2EiiiiPKc,"ax",@progbits
 1543              	.LHOTB21:
 1544              		.align 2
 1545              		.p2align 4,,15
 1546              		.globl	_ZN10Fl_CounterC2EiiiiPKc
 1548              	_ZN10Fl_CounterC2EiiiiPKc:
 1549              	.LFB506:
 180:fltk-1.3.4-1/src/Fl_Counter.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Counter.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Counter.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Counter.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Counter.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Counter.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Counter.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Counter.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 1550              		.loc 2 187 0
 1551              		.cfi_startproc
 1552              	.LVL176:
 1553 0000 53       		pushq	%rbx
 1554              		.cfi_def_cfa_offset 16
 1555              		.cfi_offset 3, -16
 1556              		.loc 2 187 0
 1557 0001 4889FB   		movq	%rdi, %rbx
 1558              	.LBB487:
 188:fltk-1.3.4-1/src/Fl_Counter.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 1559              		.loc 2 188 0
 1560 0004 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 1560      00
 1561              	.LVL177:
 1562 0009 48C70300 		movq	$_ZTV10Fl_Counter+16, (%rbx)
 1562      000000
 1563              	.LVL178:
 189:fltk-1.3.4-1/src/Fl_Counter.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Counter.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Counter.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Counter.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Counter.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Counter.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Counter.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Counter.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Counter.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1564              		.loc 2 197 0
 1565 0010 8B050000 		movl	FL_NORMAL_SIZE(%rip), %eax
 1565      0000
 1566              	.LBB488:
 1567              	.LBB489:
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
 1568              		.loc 5 108 0
 1569 0016 F20F1005 		movsd	.LC20(%rip), %xmm0
 1569      00000000 
 1570              	.LBE489:
 1571              	.LBE488:
 1572              	.LBB492:
 1573              	.LBB493:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1574              		.loc 1 372 0
 1575 001e C6436E02 		movb	$2, 110(%rbx)
 1576              	.LVL179:
 1577              	.LBE493:
 1578              	.LBE492:
 1579              	.LBB494:
 1580              	.LBB495:
  75:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Gets the minimum value for the valuator.  */
 1581              		.loc 5 75 0
 1582 0022 F20F100D 		movsd	.LC18(%rip), %xmm1
 1582      00000000 
 1583              	.LBE495:
 1584              	.LBE494:
 1585              	.LBB499:
 1586              	.LBB500:
 406:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1587              		.loc 1 406 0
 1588 002a C7436808 		movl	$8, 104(%rbx)
 1588      000000
 1589              	.LVL180:
 1590              	.LBE500:
 1591              	.LBE499:
 1592              	.LBB501:
 1593              	.LBB496:
  75:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Gets the minimum value for the valuator.  */
 1594              		.loc 5 75 0
 1595 0031 F20F1015 		movsd	.LC19(%rip), %xmm2
 1595      00000000 
 1596              	.LBE496:
 1597              	.LBE501:
 1598              	.LBB502:
 1599              	.LBB503:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1600              		.loc 1 357 0
 1601 0039 C7435402 		movl	$2, 84(%rbx)
 1601      000000
 1602              	.LVL181:
 1603              	.LBE503:
 1604              	.LBE502:
 1605              	.LBB504:
 1606              	.LBB497:
  75:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Gets the minimum value for the valuator.  */
 1607              		.loc 5 75 0
 1608 0040 F20F118B 		movsd	%xmm1, 136(%rbx)
 1608      88000000 
 1609              	.LBE497:
 1610              	.LBE504:
 1611              	.LBB505:
 1612              	.LBB490:
 1613              		.loc 5 108 0
 1614 0048 C783A000 		movl	$10, 160(%rbx)
 1614      00000A00 
 1614      0000
 1615              	.LBE490:
 1616              	.LBE505:
 195:fltk-1.3.4-1/src/Fl_Counter.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1617              		.loc 2 195 0
 1618 0052 C683B800 		movb	$0, 184(%rbx)
 1618      000000
 1619              	.LBB506:
 1620              	.LBB498:
  75:fltk-1.3.4-1/FL/Fl_Valuator.H ****     /**    Gets the minimum value for the valuator.  */
 1621              		.loc 5 75 0
 1622 0059 F20F1193 		movsd	%xmm2, 144(%rbx)
 1622      90000000 
 1623              	.LVL182:
 1624              	.LBE498:
 1625              	.LBE506:
 196:fltk-1.3.4-1/src/Fl_Counter.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1626              		.loc 2 196 0
 1627 0061 C783A400 		movl	$0, 164(%rbx)
 1627      00000000 
 1627      0000
 1628              		.loc 2 197 0
 1629 006b 8983A800 		movl	%eax, 168(%rbx)
 1629      0000
 1630              	.LBB507:
 1631              	.LBB491:
 1632              		.loc 5 108 0
 1633 0071 F20F1183 		movsd	%xmm0, 152(%rbx)
 1633      98000000 
 1634              	.LBE491:
 1635              	.LBE507:
 198:fltk-1.3.4-1/src/Fl_Counter.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 1636              		.loc 2 198 0
 1637 0079 C783AC00 		movl	$0, 172(%rbx)
 1637      00000000 
 1637      0000
 194:fltk-1.3.4-1/src/Fl_Counter.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 1638              		.loc 2 194 0
 1639 0083 F20F1183 		movsd	%xmm0, 176(%rbx)
 1639      B0000000 
 1640              	.LBE487:
 199:fltk-1.3.4-1/src/Fl_Counter.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1641              		.loc 2 199 0
 1642 008b 5B       		popq	%rbx
 1643              		.cfi_def_cfa_offset 8
 1644              	.LVL183:
 1645 008c C3       		ret
 1646              		.cfi_endproc
 1647              	.LFE506:
 1649              		.section	.text.unlikely._ZN10Fl_CounterC2EiiiiPKc
 1650              	.LCOLDE21:
 1651              		.section	.text._ZN10Fl_CounterC2EiiiiPKc
 1652              	.LHOTE21:
 1653              		.globl	_ZN10Fl_CounterC1EiiiiPKc
 1654              		.set	_ZN10Fl_CounterC1EiiiiPKc,_ZN10Fl_CounterC2EiiiiPKc
 1655              		.section	.text.unlikely._ZN17Fl_Simple_CounterC2EiiiiPKc,"ax",@progbits
 1656              		.align 2
 1657              	.LCOLDB22:
 1658              		.section	.text._ZN17Fl_Simple_CounterC2EiiiiPKc,"ax",@progbits
 1659              	.LHOTB22:
 1660              		.align 2
 1661              		.p2align 4,,15
 1662              		.globl	_ZN17Fl_Simple_CounterC2EiiiiPKc
 1664              	_ZN17Fl_Simple_CounterC2EiiiiPKc:
 1665              	.LFB509:
 200:fltk-1.3.4-1/src/Fl_Counter.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Counter.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Counter.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 1666              		.loc 2 202 0
 1667              		.cfi_startproc
 1668              	.LVL184:
 1669 0000 53       		pushq	%rbx
 1670              		.cfi_def_cfa_offset 16
 1671              		.cfi_offset 3, -16
 1672              		.loc 2 202 0
 1673 0001 4889FB   		movq	%rdi, %rbx
 1674              	.LBB508:
 203:fltk-1.3.4-1/src/Fl_Counter.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 1675              		.loc 2 203 0
 1676 0004 E8000000 		call	_ZN10Fl_CounterC2EiiiiPKc
 1676      00
 1677              	.LVL185:
 1678 0009 48C70300 		movq	$_ZTV17Fl_Simple_Counter+16, (%rbx)
 1678      000000
 1679              	.LVL186:
 1680              	.LBB509:
 1681              	.LBB510:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1682              		.loc 1 279 0
 1683 0010 C6436C01 		movb	$1, 108(%rbx)
 1684              	.LVL187:
 1685              	.LBE510:
 1686              	.LBE509:
 1687              	.LBE508:
 204:fltk-1.3.4-1/src/Fl_Counter.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Counter.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 1688              		.loc 2 205 0
 1689 0014 5B       		popq	%rbx
 1690              		.cfi_def_cfa_offset 8
 1691              	.LVL188:
 1692 0015 C3       		ret
 1693              		.cfi_endproc
 1694              	.LFE509:
 1696              		.section	.text.unlikely._ZN17Fl_Simple_CounterC2EiiiiPKc
 1697              	.LCOLDE22:
 1698              		.section	.text._ZN17Fl_Simple_CounterC2EiiiiPKc
 1699              	.LHOTE22:
 1700              		.globl	_ZN17Fl_Simple_CounterC1EiiiiPKc
 1701              		.set	_ZN17Fl_Simple_CounterC1EiiiiPKc,_ZN17Fl_Simple_CounterC2EiiiiPKc
 1702              		.weak	_ZTS10Fl_Counter
 1703              		.section	.rodata._ZTS10Fl_Counter,"aG",@progbits,_ZTS10Fl_Counter,comdat
 1704              		.align 8
 1707              	_ZTS10Fl_Counter:
 1708 0000 3130466C 		.string	"10Fl_Counter"
 1708      5F436F75 
 1708      6E746572 
 1708      00
 1709              		.weak	_ZTI10Fl_Counter
 1710              		.section	.rodata._ZTI10Fl_Counter,"aG",@progbits,_ZTI10Fl_Counter,comdat
 1711              		.align 8
 1714              	_ZTI10Fl_Counter:
 1715 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1715      00000000 
 1716 0008 00000000 		.quad	_ZTS10Fl_Counter
 1716      00000000 
 1717 0010 00000000 		.quad	_ZTI11Fl_Valuator
 1717      00000000 
 1718              		.weak	_ZTS17Fl_Simple_Counter
 1719              		.section	.rodata._ZTS17Fl_Simple_Counter,"aG",@progbits,_ZTS17Fl_Simple_Counter,comdat
 1720              		.align 16
 1723              	_ZTS17Fl_Simple_Counter:
 1724 0000 3137466C 		.string	"17Fl_Simple_Counter"
 1724      5F53696D 
 1724      706C655F 
 1724      436F756E 
 1724      74657200 
 1725              		.weak	_ZTI17Fl_Simple_Counter
 1726              		.section	.rodata._ZTI17Fl_Simple_Counter,"aG",@progbits,_ZTI17Fl_Simple_Counter,comdat
 1727              		.align 8
 1730              	_ZTI17Fl_Simple_Counter:
 1731 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1731      00000000 
 1732 0008 00000000 		.quad	_ZTS17Fl_Simple_Counter
 1732      00000000 
 1733 0010 00000000 		.quad	_ZTI10Fl_Counter
 1733      00000000 
 1734              		.weak	_ZTV17Fl_Simple_Counter
 1735              		.section	.rodata._ZTV17Fl_Simple_Counter,"aG",@progbits,_ZTV17Fl_Simple_Counter,comdat
 1736              		.align 8
 1739              	_ZTV17Fl_Simple_Counter:
 1740 0000 00000000 		.quad	0
 1740      00000000 
 1741 0008 00000000 		.quad	_ZTI17Fl_Simple_Counter
 1741      00000000 
 1742 0010 00000000 		.quad	_ZN17Fl_Simple_CounterD1Ev
 1742      00000000 
 1743 0018 00000000 		.quad	_ZN17Fl_Simple_CounterD0Ev
 1743      00000000 
 1744 0020 00000000 		.quad	_ZN10Fl_Counter4drawEv
 1744      00000000 
 1745 0028 00000000 		.quad	_ZN10Fl_Counter6handleEi
 1745      00000000 
 1746 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 1746      00000000 
 1747 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1747      00000000 
 1748 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1748      00000000 
 1749 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1749      00000000 
 1750 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1750      00000000 
 1751 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1751      00000000 
 1752 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 1752      00000000 
 1753 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 1753      00000000 
 1754              		.weak	_ZTV10Fl_Counter
 1755              		.section	.rodata._ZTV10Fl_Counter,"aG",@progbits,_ZTV10Fl_Counter,comdat
 1756              		.align 8
 1759              	_ZTV10Fl_Counter:
 1760 0000 00000000 		.quad	0
 1760      00000000 
 1761 0008 00000000 		.quad	_ZTI10Fl_Counter
 1761      00000000 
 1762 0010 00000000 		.quad	_ZN10Fl_CounterD1Ev
 1762      00000000 
 1763 0018 00000000 		.quad	_ZN10Fl_CounterD0Ev
 1763      00000000 
 1764 0020 00000000 		.quad	_ZN10Fl_Counter4drawEv
 1764      00000000 
 1765 0028 00000000 		.quad	_ZN10Fl_Counter6handleEi
 1765      00000000 
 1766 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 1766      00000000 
 1767 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1767      00000000 
 1768 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1768      00000000 
 1769 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1769      00000000 
 1770 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1770      00000000 
 1771 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1771      00000000 
 1772 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 1772      00000000 
 1773 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 1773      00000000 
 1774              		.section	.rodata.cst8,"aM",@progbits,8
 1775              		.align 8
 1776              	.LC13:
 1777 0000 9A999999 		.long	2576980378
 1778 0004 9999B93F 		.long	1069128089
 1779              		.align 8
 1780              	.LC16:
 1781 0008 00000000 		.long	0
 1782 000c 0000E03F 		.long	1071644672
 1783              		.align 8
 1784              	.LC18:
 1785 0010 00000000 		.long	0
 1786 0014 80842EC1 		.long	-1053916032
 1787              		.align 8
 1788              	.LC19:
 1789 0018 00000000 		.long	0
 1790 001c 80842E41 		.long	1093567616
 1791              		.align 8
 1792              	.LC20:
 1793 0020 00000000 		.long	0
 1794 0024 0000F03F 		.long	1072693248
 1795              		.text
 1796              	.Letext0:
 1797              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 1798              	.Letext_cold0:
 1799              		.file 8 "fltk-1.3.4-1/FL/fl_types.h"
 1800              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1801              		.file 10 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1802              		.file 11 "/usr/include/libio.h"
 1803              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 1804              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 1805              		.file 14 "fltk-1.3.4-1/FL/Fl_Counter.H"
 1806              		.file 15 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Counter.cxx
     /tmp/ccUjth4j.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccUjth4j.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccUjth4j.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccUjth4j.s:98     .text._ZN10Fl_Counter4drawEv:0000000000000000 _ZN10Fl_Counter4drawEv
     /tmp/ccUjth4j.s:590    .text._ZN10Fl_CounterD2Ev:0000000000000000 _ZN10Fl_CounterD2Ev
     /tmp/ccUjth4j.s:1759   .rodata._ZTV10Fl_Counter:0000000000000000 _ZTV10Fl_Counter
     /tmp/ccUjth4j.s:945    .text._ZN10Fl_Counter15repeat_callbackEPv:0000000000000000 _ZN10Fl_Counter15repeat_callbackEPv
     /tmp/ccUjth4j.s:590    .text._ZN10Fl_CounterD2Ev:0000000000000000 _ZN10Fl_CounterD1Ev
     /tmp/ccUjth4j.s:651    .text._ZN10Fl_CounterD0Ev:0000000000000000 _ZN10Fl_CounterD0Ev
     /tmp/ccUjth4j.s:709    .text._ZN17Fl_Simple_CounterD2Ev:0000000000000000 _ZN17Fl_Simple_CounterD2Ev
     /tmp/ccUjth4j.s:709    .text._ZN17Fl_Simple_CounterD2Ev:0000000000000000 _ZN17Fl_Simple_CounterD1Ev
     /tmp/ccUjth4j.s:783    .text._ZN17Fl_Simple_CounterD0Ev:0000000000000000 _ZN17Fl_Simple_CounterD0Ev
     /tmp/ccUjth4j.s:850    .text._ZN10Fl_Counter12increment_cbEv:0000000000000000 _ZN10Fl_Counter12increment_cbEv
     /tmp/ccUjth4j.s:1004   .text._ZN10Fl_Counter13calc_mouseobjEv:0000000000000000 _ZN10Fl_Counter13calc_mouseobjEv
     /tmp/ccUjth4j.s:1230   .text._ZN10Fl_Counter6handleEi:0000000000000000 _ZN10Fl_Counter6handleEi
     /tmp/ccUjth4j.s:1548   .text._ZN10Fl_CounterC2EiiiiPKc:0000000000000000 _ZN10Fl_CounterC2EiiiiPKc
     /tmp/ccUjth4j.s:1548   .text._ZN10Fl_CounterC2EiiiiPKc:0000000000000000 _ZN10Fl_CounterC1EiiiiPKc
     /tmp/ccUjth4j.s:1664   .text._ZN17Fl_Simple_CounterC2EiiiiPKc:0000000000000000 _ZN17Fl_Simple_CounterC2EiiiiPKc
     /tmp/ccUjth4j.s:1739   .rodata._ZTV17Fl_Simple_Counter:0000000000000000 _ZTV17Fl_Simple_Counter
     /tmp/ccUjth4j.s:1664   .text._ZN17Fl_Simple_CounterC2EiiiiPKc:0000000000000000 _ZN17Fl_Simple_CounterC1EiiiiPKc
     /tmp/ccUjth4j.s:1707   .rodata._ZTS10Fl_Counter:0000000000000000 _ZTS10Fl_Counter
     /tmp/ccUjth4j.s:1714   .rodata._ZTI10Fl_Counter:0000000000000000 _ZTI10Fl_Counter
     /tmp/ccUjth4j.s:1723   .rodata._ZTS17Fl_Simple_Counter:0000000000000000 _ZTS17Fl_Simple_Counter
     /tmp/ccUjth4j.s:1730   .rodata._ZTI17Fl_Simple_Counter:0000000000000000 _ZTI17Fl_Simple_Counter
     /tmp/ccUjth4j.s:1776   .rodata.cst8:0000000000000000 .LC13
     /tmp/ccUjth4j.s:1780   .rodata.cst8:0000000000000008 .LC16
     /tmp/ccUjth4j.s:1792   .rodata.cst8:0000000000000020 .LC20
     /tmp/ccUjth4j.s:1784   .rodata.cst8:0000000000000010 .LC18
     /tmp/ccUjth4j.s:1788   .rodata.cst8:0000000000000018 .LC19
                           .group:0000000000000000 _ZN17Fl_Simple_CounterD5Ev
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
                           .group:0000000000000000 wm4.Fl_Counter.H.32.048c1f50a72af4b51934a992b25abe78
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
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
fl_graphics_driver
_ZNK9Fl_Widget8active_rEv
_Z7fl_drawPKciiiijP8Fl_Imagei
_ZN2Fl6focus_E
_Z11fl_inactivej
_Z14fl_draw_symbolPKciiiij
_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
__stack_chk_fail
_ZN2Fl14remove_timeoutEPFvPvES0_
_ZTV11Fl_Valuator
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN11Fl_Valuator5roundEd
_ZN11Fl_Valuator5clampEd
_ZN11Fl_Valuator11handle_dragEd
_ZN11Fl_Valuator9incrementEdi
_ZN2Fl11add_timeoutEdPFvPvES0_
_ZN2Fl12event_insideEiiii
_ZN9Fl_Widget6redrawEv
_ZN11Fl_Valuator14handle_releaseEv
_ZN2Fl6optionENS_9Fl_OptionE
_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
_ZN17Fl_Widget_TrackerD1Ev
_ZN2Fl8e_keysymE
_ZN2Fl5focusEP9Fl_Widget
_ZN11Fl_ValuatorC2EiiiiPKc
FL_NORMAL_SIZE
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI11Fl_Valuator
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
_ZN11Fl_Valuator12value_damageEv
_ZN11Fl_Valuator6formatEPc
