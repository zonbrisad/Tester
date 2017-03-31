   1              		.file	"Fl_Scrollbar.cxx"
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
  82 0000 67746B2B 		.string	"gtk+"
  82      00
  83              		.section	.text.unlikely._ZN12Fl_Scrollbar4drawEv,"ax",@progbits
  84              		.align 2
  85              	.LCOLDB4:
  86              		.section	.text._ZN12Fl_Scrollbar4drawEv,"ax",@progbits
  87              	.LHOTB4:
  88              		.align 2
  89              		.p2align 4,,15
  90              		.globl	_ZN12Fl_Scrollbar4drawEv
  92              	_ZN12Fl_Scrollbar4drawEv:
  93              	.LFB510:
  94              		.file 2 "fltk-1.3.4-1/src/Fl_Scrollbar.cxx"
   1:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    1              		.file	"Fl_Scrollbar.cxx"
   2:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
  95              		.loc 2 200 0
  96              		.cfi_startproc
  97              	.LVL3:
  98 0000 4157     		pushq	%r15
  99              		.cfi_def_cfa_offset 16
 100              		.cfi_offset 15, -16
 101 0002 4156     		pushq	%r14
 102              		.cfi_def_cfa_offset 24
 103              		.cfi_offset 14, -24
 104 0004 4155     		pushq	%r13
 105              		.cfi_def_cfa_offset 32
 106              		.cfi_offset 13, -32
 107 0006 4154     		pushq	%r12
 108              		.cfi_def_cfa_offset 40
 109              		.cfi_offset 12, -40
 110 0008 55       		pushq	%rbp
 111              		.cfi_def_cfa_offset 48
 112              		.cfi_offset 6, -48
 113 0009 53       		pushq	%rbx
 114              		.cfi_def_cfa_offset 56
 115              		.cfi_offset 3, -56
 116 000a 4889FB   		movq	%rdi, %rbx
 117 000d 4883EC18 		subq	$24, %rsp
 118              		.cfi_def_cfa_offset 80
 201:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 119              		.loc 2 201 0
 120 0011 807F6D00 		cmpb	$0, 109(%rdi)
 121 0015 0F88B504 		js	.L45
 121      0000
 122              	.LVL4:
 123              	.L6:
 202:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 124              		.loc 2 202 0
 125 001b 0FB67B6E 		movzbl	110(%rbx), %edi
 126 001f 8B6B20   		movl	32(%rbx), %ebp
 127              	.LVL5:
 128 0022 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 128      00
 129              	.LVL6:
 203:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 130              		.loc 2 203 0
 131 0027 0FB67B6E 		movzbl	110(%rbx), %edi
 202:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 132              		.loc 2 202 0
 133 002b 448D3428 		leal	(%rax,%rbp), %r14d
 134              	.LVL7:
 135 002f 8B6B24   		movl	36(%rbx), %ebp
 136              	.LVL8:
 137              		.loc 2 203 0
 138 0032 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 138      00
 139              	.LVL9:
 204:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 140              		.loc 2 204 0
 141 0037 0FB67B6E 		movzbl	110(%rbx), %edi
 203:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 142              		.loc 2 203 0
 143 003b 448D2C28 		leal	(%rax,%rbp), %r13d
 144              	.LVL10:
 145 003f 448B6328 		movl	40(%rbx), %r12d
 146              	.LVL11:
 147              		.loc 2 204 0
 148 0043 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 148      00
 149              	.LVL12:
 205:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 150              		.loc 2 205 0
 151 0048 0FB67B6E 		movzbl	110(%rbx), %edi
 152 004c 8B6B2C   		movl	44(%rbx), %ebp
 204:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 153              		.loc 2 204 0
 154 004f 4129C4   		subl	%eax, %r12d
 155              	.LVL13:
 156              		.loc 2 205 0
 157 0052 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 157      00
 158              	.LVL14:
 159 0057 29C5     		subl	%eax, %ebp
 160              	.LVL15:
 161              	.LBB261:
 206:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 162              		.loc 2 206 0
 163 0059 F6436C01 		testb	$1, 108(%rbx)
 164 005d 7449     		je	.L7
 165              	.LBB262:
 207:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 166              		.loc 2 207 0
 167 005f 8D442D00 		leal	(%rbp,%rbp), %eax
 168 0063 8D1428   		leal	(%rax,%rbp), %edx
 169 0066 4139D4   		cmpl	%edx, %r12d
 170 0069 0F8C0102 		jl	.L43
 170      0000
 208:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 171              		.loc 2 208 0
 172 006f 4589E7   		movl	%r12d, %r15d
 173 0072 418D342E 		leal	(%r14,%rbp), %esi
 174 0076 4189E8   		movl	%ebp, %r8d
 175 0079 4129C7   		subl	%eax, %r15d
 176 007c 4489EA   		movl	%r13d, %edx
 177 007f 4889DF   		movq	%rbx, %rdi
 178 0082 4489F9   		movl	%r15d, %ecx
 179 0085 E8000000 		call	_ZN9Fl_Slider4drawEiiii
 179      00
 180              	.LVL16:
 181              	.LBB263:
 209:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 182              		.loc 2 209 0
 183 008a 807B6D00 		cmpb	$0, 109(%rbx)
 184 008e 0F880402 		js	.L46
 184      0000
 185              	.LVL17:
 186              	.L4:
 187              	.LBE263:
 188              	.LBE262:
 189              	.LBE261:
 210:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 190              		.loc 2 258 0
 191 0094 4883C418 		addq	$24, %rsp
 192              		.cfi_remember_state
 193              		.cfi_def_cfa_offset 56
 194 0098 5B       		popq	%rbx
 195              		.cfi_def_cfa_offset 48
 196 0099 5D       		popq	%rbp
 197              		.cfi_def_cfa_offset 40
 198 009a 415C     		popq	%r12
 199              		.cfi_def_cfa_offset 32
 200 009c 415D     		popq	%r13
 201              		.cfi_def_cfa_offset 24
 202 009e 415E     		popq	%r14
 203              		.cfi_def_cfa_offset 16
 204 00a0 415F     		popq	%r15
 205              		.cfi_def_cfa_offset 8
 206 00a2 C3       		ret
 207              	.LVL18:
 208              		.p2align 4,,10
 209 00a3 0F1F4400 		.p2align 3
 209      00
 210              	.L7:
 211              		.cfi_restore_state
 212              	.LBB394:
 213              	.LBB320:
 232:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 214              		.loc 2 232 0
 215 00a8 438D0424 		leal	(%r12,%r12), %eax
 216 00ac 428D1420 		leal	(%rax,%r12), %edx
 217 00b0 39D5     		cmpl	%edx, %ebp
 218 00b2 0F8CB801 		jl	.L43
 218      0000
 233:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 219              		.loc 2 233 0
 220 00b8 4189EF   		movl	%ebp, %r15d
 221 00bb 438D5425 		leal	0(%r13,%r12), %edx
 221      00
 222 00c0 4489E1   		movl	%r12d, %ecx
 223 00c3 4129C7   		subl	%eax, %r15d
 224 00c6 4489F6   		movl	%r14d, %esi
 225 00c9 4889DF   		movq	%rbx, %rdi
 226 00cc 4589F8   		movl	%r15d, %r8d
 227 00cf E8000000 		call	_ZN9Fl_Slider4drawEiiii
 227      00
 228              	.LVL19:
 229              	.LBB321:
 234:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 230              		.loc 2 234 0
 231 00d4 807B6D00 		cmpb	$0, 109(%rbx)
 232 00d8 79BA     		jns	.L4
 233              	.LBB322:
 235:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 234              		.loc 2 235 0
 235 00da 83BBB000 		cmpl	$1, 176(%rbx)
 235      000001
 236 00e1 8B4368   		movl	104(%rbx), %eax
 237              	.LVL20:
 238 00e4 0F845604 		je	.L47
 238      0000
 239              	.LVL21:
 240              	.LBB323:
 241              	.LBB324:
 242              		.file 3 "fltk-1.3.4-1/FL/Fl_Slider.H"
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
 243              		.loc 3 101 0 discriminator 2
 244 00ea 0FB6B3A8 		movzbl	168(%rbx), %esi
 244      000000
 245              	.LVL22:
 246              	.L24:
 247              	.LBE324:
 248              	.LBE323:
 236:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 249              		.loc 2 236 0 discriminator 4
 250 00f1 4883EC08 		subq	$8, %rsp
 251              		.cfi_def_cfa_offset 88
 252 00f5 4489E9   		movl	%r13d, %ecx
 253 00f8 4589E1   		movl	%r12d, %r9d
 254 00fb 50       		pushq	%rax
 255              		.cfi_def_cfa_offset 96
 256 00fc 4589E0   		movl	%r12d, %r8d
 257 00ff 4489F2   		movl	%r14d, %edx
 258 0102 4889DF   		movq	%rbx, %rdi
 259 0105 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 259      00
 260              	.LVL23:
 237:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 261              		.loc 2 237 0 discriminator 4
 262 010a 418D4C2D 		leal	0(%r13,%rbp), %ecx
 262      00
 263 010f 8B4368   		movl	104(%rbx), %eax
 264              	.LVL24:
 265 0112 415B     		popq	%r11
 266              		.cfi_def_cfa_offset 88
 267 0114 4429E1   		subl	%r12d, %ecx
 268 0117 83BBB000 		cmpl	$2, 176(%rbx)
 268      000002
 269 011e 5D       		popq	%rbp
 270              		.cfi_def_cfa_offset 80
 271              	.LVL25:
 272 011f 0F84FB03 		je	.L48
 272      0000
 273              	.LVL26:
 274              	.LBB325:
 275              	.LBB326:
 276              		.loc 3 101 0 discriminator 2
 277 0125 0FB6B3A8 		movzbl	168(%rbx), %esi
 277      000000
 278              	.LVL27:
 279              	.L27:
 280              	.LBE326:
 281              	.LBE325:
 238:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 282              		.loc 2 238 0 discriminator 4
 283 012c 4883EC08 		subq	$8, %rsp
 284              		.cfi_def_cfa_offset 88
 285 0130 4589E1   		movl	%r12d, %r9d
 286 0133 4589E0   		movl	%r12d, %r8d
 287 0136 50       		pushq	%rax
 288              		.cfi_def_cfa_offset 96
 289 0137 4489F2   		movl	%r14d, %edx
 290 013a 4889DF   		movq	%rbx, %rdi
 291 013d E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 291      00
 292              	.LVL28:
 239:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 293              		.loc 2 239 0 discriminator 4
 294 0142 4889DF   		movq	%rbx, %rdi
 295 0145 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 295      00
 296              	.LVL29:
 297 014a 85C0     		testl	%eax, %eax
 298 014c 4159     		popq	%r9
 299              		.cfi_def_cfa_offset 88
 300 014e 415A     		popq	%r10
 301              		.cfi_def_cfa_offset 80
 302 0150 0F848A03 		je	.L28
 302      0000
 303              	.LVL30:
 304              	.LBB327:
 305              	.LBB328:
 306              		.file 4 "fltk-1.3.4-1/FL/fl_draw.H"
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
 307              		.loc 4 52 0
 308 0156 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 308      000000
 309 015d 8B7350   		movl	80(%rbx), %esi
 310 0160 488B07   		movq	(%rdi), %rax
 311 0163 FF908800 		call	*136(%rax)
 311      0000
 312              	.LVL31:
 313              	.L29:
 314              	.LBE328:
 315              	.LBE327:
 243:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 316              		.loc 2 243 0
 317 0169 418D4C24 		leal	-4(%r12), %ecx
 317      FC
 318 016e BA565555 		movl	$1431655766, %edx
 318      55
 319 0173 89C8     		movl	%ecx, %eax
 320 0175 C1F91F   		sarl	$31, %ecx
 321 0178 F7EA     		imull	%edx
 322 017a 29CA     		subl	%ecx, %edx
 323 017c 85D2     		testl	%edx, %edx
 324 017e 89D3     		movl	%edx, %ebx
 325              	.LVL32:
 326 0180 0F8E1A04 		jle	.L35
 326      0000
 327 0186 448D0C12 		leal	(%rdx,%rdx), %r9d
 328              	.L30:
 329              	.LVL33:
 244:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 330              		.loc 2 244 0
 331 018a 4489E0   		movl	%r12d, %eax
 245:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 332              		.loc 2 245 0
 333 018d 4489E6   		movl	%r12d, %esi
 334              	.LBB329:
 335              	.LBB330:
 336              		.file 5 "fltk-1.3.4-1/FL/Fl.H"
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
 337              		.loc 5 369 0
 338 0190 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 338      000000
 339              	.LBE330:
 340              	.LBE329:
 244:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 341              		.loc 2 244 0
 342 0197 4429C8   		subl	%r9d, %eax
 245:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 343              		.loc 2 245 0
 344 019a 29DE     		subl	%ebx, %esi
 244:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 345              		.loc 2 244 0
 346 019c 83E801   		subl	$1, %eax
 245:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 347              		.loc 2 245 0
 348 019f 83EE01   		subl	$1, %esi
 244:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 349              		.loc 2 244 0
 350 01a2 89C2     		movl	%eax, %edx
 351 01a4 C1EA1F   		shrl	$31, %edx
 352 01a7 01D0     		addl	%edx, %eax
 353 01a9 D1F8     		sarl	%eax
 354 01ab 4101C6   		addl	%eax, %r14d
 355              	.LVL34:
 245:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 356              		.loc 2 245 0
 357 01ae 89F0     		movl	%esi, %eax
 358 01b0 C1E81F   		shrl	$31, %eax
 359 01b3 01C6     		addl	%eax, %esi
 360 01b5 D1FE     		sarl	%esi
 361 01b7 4101F5   		addl	%esi, %r13d
 362              	.LVL35:
 363              	.LBB332:
 364              	.LBB331:
 365              		.loc 5 369 0
 366 01ba 4885FF   		testq	%rdi, %rdi
 367 01bd 0F843D02 		je	.L31
 367      0000
 368 01c3 BE000000 		movl	$.LC3, %esi
 368      00
 369 01c8 B9050000 		movl	$5, %ecx
 369      00
 370 01cd F3A6     		repz cmpsb
 371 01cf 0F852B02 		jne	.L31
 371      0000
 372              	.LVL36:
 373              	.LBE331:
 374              	.LBE332:
 375              	.LBB333:
 376              	.LBB334:
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
 377              		.loc 4 249 0
 378 01d5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 378      000000
 379              	.LBE334:
 380              	.LBE333:
 247:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 381              		.loc 2 247 0
 382 01dc 428D2C33 		leal	(%rbx,%r14), %ebp
 383              	.LVL37:
 384 01e0 428D142B 		leal	(%rbx,%r13), %edx
 385              	.LVL38:
 386              	.LBB339:
 387              	.LBB335:
 388              		.loc 4 249 0
 389 01e4 4883EC08 		subq	$8, %rsp
 390              		.cfi_def_cfa_offset 88
 391              	.LBE335:
 392              	.LBE339:
 247:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 393              		.loc 2 247 0
 394 01e8 438D040E 		leal	(%r14,%r9), %eax
 395              	.LVL39:
 396              	.LBB340:
 397              	.LBB336:
 398              		.loc 4 249 0
 399 01ec 4489F6   		movl	%r14d, %esi
 400 01ef 448D42FF 		leal	-1(%rdx), %r8d
 401              	.LVL40:
 402 01f3 89E9     		movl	%ebp, %ecx
 403              	.LBE336:
 404              	.LBE340:
 248:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 405              		.loc 2 248 0
 406 01f5 4501FC   		addl	%r15d, %r12d
 407              	.LVL41:
 408              	.LBB341:
 409              	.LBB337:
 410              		.loc 4 249 0
 411 01f8 4C8B17   		movq	(%rdi), %r10
 412 01fb 4155     		pushq	%r13
 413              		.cfi_def_cfa_offset 96
 414 01fd 4189C1   		movl	%eax, %r9d
 415 0200 55       		pushq	%rbp
 416              		.cfi_def_cfa_offset 104
 417 0201 52       		pushq	%rdx
 418              		.cfi_def_cfa_offset 112
 419              	.LBE337:
 420              	.LBE341:
 248:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 421              		.loc 2 248 0
 422 0202 4501E5   		addl	%r12d, %r13d
 423              	.LVL42:
 249:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 424              		.loc 2 249 0
 425 0205 458D6501 		leal	1(%r13), %r12d
 426 0209 4401EB   		addl	%r13d, %ebx
 427              	.LVL43:
 428              	.LBB342:
 429              	.LBB338:
 430              		.loc 4 249 0
 431 020c 8944242C 		movl	%eax, 44(%rsp)
 432 0210 41FF92B8 		call	*184(%r10)
 432      000000
 433              	.LVL44:
 434              	.LBE338:
 435              	.LBE342:
 436              	.LBB343:
 437              	.LBB344:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 438              		.loc 4 244 0
 439 0217 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 439      000000
 440 021e 4883C418 		addq	$24, %rsp
 441              		.cfi_def_cfa_offset 88
 442 0222 4189E9   		movl	%ebp, %r9d
 443 0225 4589E0   		movl	%r12d, %r8d
 444 0228 89E9     		movl	%ebp, %ecx
 445 022a 4489EA   		movl	%r13d, %edx
 446 022d 4489F6   		movl	%r14d, %esi
 447 0230 4C8B17   		movq	(%rdi), %r10
 448 0233 53       		pushq	%rbx
 449              		.cfi_def_cfa_offset 96
 450 0234 41FF92B0 		call	*176(%r10)
 450      000000
 451              	.LVL45:
 452              	.LBE344:
 453              	.LBE343:
 454              	.LBB345:
 455              	.LBB346:
 456 023b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 456      000000
 457 0242 8B44241C 		movl	28(%rsp), %eax
 458 0246 89EE     		movl	%ebp, %esi
 459 0248 4189E9   		movl	%ebp, %r9d
 460 024b 4589E8   		movl	%r13d, %r8d
 461 024e 4489E2   		movl	%r12d, %edx
 462 0251 4C8B17   		movq	(%rdi), %r10
 463 0254 89C1     		movl	%eax, %ecx
 464 0256 891C24   		movl	%ebx, (%rsp)
 465 0259 41FF92B0 		call	*176(%r10)
 465      000000
 466              	.LVL46:
 467 0260 59       		popq	%rcx
 468              		.cfi_def_cfa_offset 88
 469 0261 5E       		popq	%rsi
 470              		.cfi_def_cfa_offset 80
 471 0262 E92DFEFF 		jmp	.L4
 471      FF
 472              	.LVL47:
 473 0267 660F1F84 		.p2align 4,,10
 473      00000000 
 473      00
 474              		.p2align 3
 475              	.L43:
 476              	.LBE346:
 477              	.LBE345:
 478              	.LBE322:
 479              	.LBE321:
 480              	.LBE320:
 481              	.LBE394:
 482              		.loc 2 258 0 discriminator 1
 483 0270 4883C418 		addq	$24, %rsp
 484              		.cfi_remember_state
 485              		.cfi_def_cfa_offset 56
 486              	.LBB395:
 487              	.LBB383:
 232:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 488              		.loc 2 232 0 discriminator 1
 489 0274 4189E8   		movl	%ebp, %r8d
 490 0277 4489E1   		movl	%r12d, %ecx
 491 027a 4489EA   		movl	%r13d, %edx
 492 027d 4489F6   		movl	%r14d, %esi
 493 0280 4889DF   		movq	%rbx, %rdi
 494              	.LBE383:
 495              	.LBE395:
 496              		.loc 2 258 0 discriminator 1
 497 0283 5B       		popq	%rbx
 498              		.cfi_def_cfa_offset 48
 499              	.LVL48:
 500 0284 5D       		popq	%rbp
 501              		.cfi_def_cfa_offset 40
 502              	.LVL49:
 503 0285 415C     		popq	%r12
 504              		.cfi_def_cfa_offset 32
 505              	.LVL50:
 506 0287 415D     		popq	%r13
 507              		.cfi_def_cfa_offset 24
 508              	.LVL51:
 509 0289 415E     		popq	%r14
 510              		.cfi_def_cfa_offset 16
 511              	.LVL52:
 512 028b 415F     		popq	%r15
 513              		.cfi_def_cfa_offset 8
 514              	.LBB396:
 515              	.LBB384:
 232:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 516              		.loc 2 232 0 discriminator 1
 517 028d E9000000 		jmp	_ZN9Fl_Slider4drawEiiii
 517      00
 518              	.LVL53:
 519              		.p2align 4,,10
 520 0292 660F1F44 		.p2align 3
 520      0000
 521              	.L46:
 522              		.cfi_restore_state
 523              	.LBE384:
 524              	.LBB385:
 525              	.LBB315:
 526              	.LBB264:
 210:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 527              		.loc 2 210 0
 528 0298 83BBB000 		cmpl	$1, 176(%rbx)
 528      000001
 529 029f 8B4368   		movl	104(%rbx), %eax
 530              	.LVL54:
 531 02a2 0F84D802 		je	.L49
 531      0000
 532              	.LVL55:
 533              	.LBB265:
 534              	.LBB266:
 535              		.loc 3 101 0 discriminator 2
 536 02a8 0FB6B3A8 		movzbl	168(%rbx), %esi
 536      000000
 537              	.LVL56:
 538              	.L12:
 539              	.LBE266:
 540              	.LBE265:
 211:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 541              		.loc 2 211 0 discriminator 4
 542 02af 4883EC08 		subq	$8, %rsp
 543              		.cfi_def_cfa_offset 88
 544 02b3 4489E9   		movl	%r13d, %ecx
 545 02b6 4489F2   		movl	%r14d, %edx
 546 02b9 50       		pushq	%rax
 547              		.cfi_def_cfa_offset 96
 548 02ba 4189E9   		movl	%ebp, %r9d
 549 02bd 4189E8   		movl	%ebp, %r8d
 550 02c0 4889DF   		movq	%rbx, %rdi
 551 02c3 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 551      00
 552              	.LVL57:
 212:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 553              		.loc 2 212 0 discriminator 4
 554 02c8 438D1426 		leal	(%r14,%r12), %edx
 555 02cc 8B4368   		movl	104(%rbx), %eax
 556              	.LVL58:
 557 02cf 59       		popq	%rcx
 558              		.cfi_def_cfa_offset 88
 559 02d0 29EA     		subl	%ebp, %edx
 560 02d2 83BBB000 		cmpl	$2, 176(%rbx)
 560      000002
 561 02d9 5E       		popq	%rsi
 562              		.cfi_def_cfa_offset 80
 563 02da 0F848002 		je	.L50
 563      0000
 564              	.LVL59:
 565              	.LBB267:
 566              	.LBB268:
 567              		.loc 3 101 0 discriminator 2
 568 02e0 0FB6B3A8 		movzbl	168(%rbx), %esi
 568      000000
 569              	.LVL60:
 570              	.L15:
 571              	.LBE268:
 572              	.LBE267:
 213:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 573              		.loc 2 213 0 discriminator 4
 574 02e7 4883EC08 		subq	$8, %rsp
 575              		.cfi_def_cfa_offset 88
 576 02eb 4189E9   		movl	%ebp, %r9d
 577 02ee 4189E8   		movl	%ebp, %r8d
 578 02f1 50       		pushq	%rax
 579              		.cfi_def_cfa_offset 96
 580 02f2 4489E9   		movl	%r13d, %ecx
 581 02f5 4889DF   		movq	%rbx, %rdi
 582 02f8 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 582      00
 583              	.LVL61:
 214:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 584              		.loc 2 214 0 discriminator 4
 585 02fd 4889DF   		movq	%rbx, %rdi
 586 0300 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 586      00
 587              	.LVL62:
 588 0305 85C0     		testl	%eax, %eax
 589 0307 415C     		popq	%r12
 590              		.cfi_def_cfa_offset 88
 591              	.LVL63:
 592 0309 5A       		popq	%rdx
 593              		.cfi_def_cfa_offset 80
 594 030a 0F84F001 		je	.L16
 594      0000
 595              	.LVL64:
 596              	.LBB269:
 597              	.LBB270:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 598              		.loc 4 52 0
 599 0310 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 599      000000
 600 0317 8B7350   		movl	80(%rbx), %esi
 601 031a 488B07   		movq	(%rdi), %rax
 602 031d FF908800 		call	*136(%rax)
 602      0000
 603              	.LVL65:
 604              	.L17:
 605              	.LBE270:
 606              	.LBE269:
 218:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 607              		.loc 2 218 0
 608 0323 8D4DFC   		leal	-4(%rbp), %ecx
 609 0326 BA565555 		movl	$1431655766, %edx
 609      55
 610 032b 89C8     		movl	%ecx, %eax
 611 032d C1F91F   		sarl	$31, %ecx
 612 0330 F7EA     		imull	%edx
 613 0332 29CA     		subl	%ecx, %edx
 614 0334 85D2     		testl	%edx, %edx
 615 0336 89D3     		movl	%edx, %ebx
 616              	.LVL66:
 617 0338 0F8E7202 		jle	.L34
 617      0000
 618 033e 448D0412 		leal	(%rdx,%rdx), %r8d
 619              	.L18:
 620              	.LVL67:
 219:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 621              		.loc 2 219 0
 622 0342 89E8     		movl	%ebp, %eax
 623              	.LBB271:
 624              	.LBB272:
 625              		.loc 5 369 0
 626 0344 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 626      000000
 627              	.LBE272:
 628              	.LBE271:
 219:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 629              		.loc 2 219 0
 630 034b 29D8     		subl	%ebx, %eax
 631 034d 83E801   		subl	$1, %eax
 632 0350 89C2     		movl	%eax, %edx
 633 0352 C1EA1F   		shrl	$31, %edx
 634 0355 01D0     		addl	%edx, %eax
 635 0357 D1F8     		sarl	%eax
 636 0359 4101C6   		addl	%eax, %r14d
 637              	.LVL68:
 220:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 638              		.loc 2 220 0
 639 035c 89E8     		movl	%ebp, %eax
 640 035e 4429C0   		subl	%r8d, %eax
 641 0361 83E801   		subl	$1, %eax
 642 0364 89C2     		movl	%eax, %edx
 643 0366 C1EA1F   		shrl	$31, %edx
 644 0369 01D0     		addl	%edx, %eax
 645 036b D1F8     		sarl	%eax
 646 036d 4101C5   		addl	%eax, %r13d
 647              	.LVL69:
 648              	.LBB274:
 649              	.LBB273:
 650              		.loc 5 369 0
 651 0370 4885FF   		testq	%rdi, %rdi
 652 0373 0F84EF00 		je	.L19
 652      0000
 653 0379 BE000000 		movl	$.LC3, %esi
 653      00
 654 037e B9050000 		movl	$5, %ecx
 654      00
 655 0383 F3A6     		repz cmpsb
 656 0385 0F85DD00 		jne	.L19
 656      0000
 657              	.LVL70:
 658              	.LBE273:
 659              	.LBE274:
 660              	.LBB275:
 661              	.LBB276:
 662              		.loc 4 249 0
 663 038b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 663      000000
 664              	.LBE276:
 665              	.LBE275:
 222:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 666              		.loc 2 222 0
 667 0392 428D0C33 		leal	(%rbx,%r14), %ecx
 668 0396 468D242B 		leal	(%rbx,%r13), %r12d
 669              	.LVL71:
 670              	.LBB279:
 671              	.LBB277:
 672              		.loc 4 249 0
 673 039a 4883EC08 		subq	$8, %rsp
 674              		.cfi_def_cfa_offset 88
 675              	.LBE277:
 676              	.LBE279:
 222:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 677              		.loc 2 222 0
 678 039e 438D4405 		leal	0(%r13,%r8), %eax
 678      00
 679              	.LVL72:
 223:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 680              		.loc 2 223 0
 681 03a3 4401FD   		addl	%r15d, %ebp
 682              	.LVL73:
 683              	.LBB280:
 684              	.LBB278:
 685              		.loc 4 249 0
 686 03a6 448D49FF 		leal	-1(%rcx), %r9d
 687              	.LVL74:
 688 03aa 4489E2   		movl	%r12d, %edx
 689 03ad 4489F6   		movl	%r14d, %esi
 690 03b0 4C8B17   		movq	(%rdi), %r10
 691 03b3 4155     		pushq	%r13
 692              		.cfi_def_cfa_offset 96
 693 03b5 4189C0   		movl	%eax, %r8d
 694 03b8 51       		pushq	%rcx
 695              		.cfi_def_cfa_offset 104
 696 03b9 4154     		pushq	%r12
 697              		.cfi_def_cfa_offset 112
 698 03bb 8944242C 		movl	%eax, 44(%rsp)
 699 03bf 41FF92B8 		call	*184(%r10)
 699      000000
 700              	.LVL75:
 701              	.LBE278:
 702              	.LBE280:
 223:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 703              		.loc 2 223 0
 704 03c6 428D7435 		leal	0(%rbp,%r14), %esi
 704      00
 705              	.LVL76:
 706              	.LBB281:
 707              	.LBB282:
 708              		.loc 4 249 0
 709 03cb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 709      000000
 710 03d2 4883C418 		addq	$24, %rsp
 711              		.cfi_def_cfa_offset 88
 712 03d6 4589E0   		movl	%r12d, %r8d
 713 03d9 4489EA   		movl	%r13d, %edx
 714 03dc 01F3     		addl	%esi, %ebx
 715              	.LVL77:
 716 03de 8D4E01   		leal	1(%rsi), %ecx
 717              	.LVL78:
 718 03e1 4189F1   		movl	%esi, %r9d
 719 03e4 4C8B17   		movq	(%rdi), %r10
 720 03e7 4154     		pushq	%r12
 721              		.cfi_def_cfa_offset 96
 722 03e9 53       		pushq	%rbx
 723              		.cfi_def_cfa_offset 104
 724 03ea 8B442424 		movl	36(%rsp), %eax
 725 03ee 50       		pushq	%rax
 726              		.cfi_def_cfa_offset 112
 727 03ef 41FF92B8 		call	*184(%r10)
 727      000000
 728              	.LVL79:
 729 03f6 4883C420 		addq	$32, %rsp
 730              		.cfi_def_cfa_offset 80
 731 03fa E995FCFF 		jmp	.L4
 731      FF
 732              	.LVL80:
 733 03ff 90       		.p2align 4,,10
 734              		.p2align 3
 735              	.L31:
 736              	.LBE282:
 737              	.LBE281:
 738              	.LBE264:
 739              	.LBE315:
 740              	.LBE385:
 741              	.LBB386:
 742              	.LBB379:
 743              	.LBB375:
 744              	.LBB347:
 745              	.LBB348:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 746              		.loc 4 244 0
 747 0400 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 747      000000
 748 0407 4883EC08 		subq	$8, %rsp
 749              		.cfi_def_cfa_offset 88
 750              	.LBE348:
 751              	.LBE347:
 252:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 752              		.loc 2 252 0
 753 040b 438D040E 		leal	(%r14,%r9), %eax
 754 040f 428D142B 		leal	(%rbx,%r13), %edx
 755              	.LVL81:
 756 0413 428D2C33 		leal	(%rbx,%r14), %ebp
 757              	.LVL82:
 758              	.LBB351:
 759              	.LBB349:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 760              		.loc 4 244 0
 761 0417 4489F6   		movl	%r14d, %esi
 762 041a 89C1     		movl	%eax, %ecx
 763              	.LBE349:
 764              	.LBE351:
 253:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 765              		.loc 2 253 0
 766 041c 4501FC   		addl	%r15d, %r12d
 767              	.LVL83:
 768              	.LBB352:
 769              	.LBB350:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 770              		.loc 4 244 0
 771 041f 4C8B17   		movq	(%rdi), %r10
 772 0422 4155     		pushq	%r13
 773              		.cfi_def_cfa_offset 96
 774 0424 4189D0   		movl	%edx, %r8d
 775 0427 4189E9   		movl	%ebp, %r9d
 776 042a 8944241C 		movl	%eax, 28(%rsp)
 777 042e 41FF92B0 		call	*176(%r10)
 777      000000
 778              	.LVL84:
 779              	.LBE350:
 780              	.LBE352:
 781              	.LBB353:
 782              	.LBB354:
 783 0435 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 783      000000
 784 043c 8B44241C 		movl	28(%rsp), %eax
 785              	.LBE354:
 786              	.LBE353:
 253:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 787              		.loc 2 253 0
 788 0440 438D142C 		leal	(%r12,%r13), %edx
 789              	.LVL85:
 790              	.LBB356:
 791              	.LBB355:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 792              		.loc 4 244 0
 793 0444 89E9     		movl	%ebp, %ecx
 794 0446 4489F6   		movl	%r14d, %esi
 795 0449 448D0413 		leal	(%rbx,%rdx), %r8d
 796              	.LVL86:
 797 044d 4C8B17   		movq	(%rdi), %r10
 798 0450 4189C1   		movl	%eax, %r9d
 799 0453 891424   		movl	%edx, (%rsp)
 800 0456 41FF92B0 		call	*176(%r10)
 800      000000
 801              	.LVL87:
 802 045d 58       		popq	%rax
 803              		.cfi_def_cfa_offset 88
 804 045e 5A       		popq	%rdx
 805              		.cfi_def_cfa_offset 80
 806 045f E930FCFF 		jmp	.L4
 806      FF
 807              	.LVL88:
 808              		.p2align 4,,10
 809 0464 0F1F4000 		.p2align 3
 810              	.L19:
 811              	.LBE355:
 812              	.LBE356:
 813              	.LBE375:
 814              	.LBE379:
 815              	.LBE386:
 816              	.LBB387:
 817              	.LBB316:
 818              	.LBB311:
 819              	.LBB283:
 820              	.LBB284:
 821 0468 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 821      000000
 822 046f 4883EC08 		subq	$8, %rsp
 823              		.cfi_def_cfa_offset 88
 824              	.LBE284:
 825              	.LBE283:
 226:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 826              		.loc 2 226 0
 827 0473 428D042B 		leal	(%rbx,%r13), %eax
 828              	.LVL89:
 829 0477 428D0C33 		leal	(%rbx,%r14), %ecx
 830              	.LVL90:
 831 047b 478D6405 		leal	0(%r13,%r8), %r12d
 831      00
 832              	.LVL91:
 833              	.LBB287:
 834              	.LBB285:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 835              		.loc 4 244 0
 836 0480 4489F6   		movl	%r14d, %esi
 837 0483 89C2     		movl	%eax, %edx
 838              	.LBE285:
 839              	.LBE287:
 227:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 840              		.loc 2 227 0
 841 0485 4401FD   		addl	%r15d, %ebp
 842              	.LVL92:
 843              	.LBB288:
 844              	.LBB286:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 845              		.loc 4 244 0
 846 0488 4C8B17   		movq	(%rdi), %r10
 847 048b 4155     		pushq	%r13
 848              		.cfi_def_cfa_offset 96
 849 048d 4189C9   		movl	%ecx, %r9d
 850 0490 4589E0   		movl	%r12d, %r8d
 851 0493 8944241C 		movl	%eax, 28(%rsp)
 852 0497 41FF92B0 		call	*176(%r10)
 852      000000
 853              	.LVL93:
 854              	.LBE286:
 855              	.LBE288:
 856              	.LBB289:
 857              	.LBB290:
 858 049e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 858      000000
 859 04a5 8B44241C 		movl	28(%rsp), %eax
 860              	.LBE290:
 861              	.LBE289:
 227:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 862              		.loc 2 227 0
 863 04a9 428D7435 		leal	0(%rbp,%r14), %esi
 863      00
 864              	.LVL94:
 865              	.LBB292:
 866              	.LBB291:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 867              		.loc 4 244 0
 868 04ae 4589E0   		movl	%r12d, %r8d
 869 04b1 4489EA   		movl	%r13d, %edx
 870 04b4 448D0C33 		leal	(%rbx,%rsi), %r9d
 871              	.LVL95:
 872 04b8 89F1     		movl	%esi, %ecx
 873 04ba 4C8B17   		movq	(%rdi), %r10
 874 04bd 890424   		movl	%eax, (%rsp)
 875 04c0 41FF92B0 		call	*176(%r10)
 875      000000
 876              	.LVL96:
 877 04c7 5F       		popq	%rdi
 878              		.cfi_def_cfa_offset 88
 879 04c8 4158     		popq	%r8
 880              		.cfi_def_cfa_offset 80
 881 04ca E9C5FBFF 		jmp	.L4
 881      FF
 882              	.LVL97:
 883 04cf 90       		.p2align 4,,10
 884              		.p2align 3
 885              	.L45:
 886              	.LBE291:
 887              	.LBE292:
 888              	.LBE311:
 889              	.LBE316:
 890              	.LBE387:
 891              	.LBE396:
 201:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 892              		.loc 2 201 0 discriminator 1
 893 04d0 E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 893      00
 894              	.LVL98:
 895 04d5 E941FBFF 		jmp	.L6
 895      FF
 896              	.LVL99:
 897 04da 660F1F44 		.p2align 4,,10
 897      0000
 898              		.p2align 3
 899              	.L28:
 900              	.LBB397:
 901              	.LBB388:
 902              	.LBB380:
 903              	.LBB376:
 242:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 904              		.loc 2 242 0
 905 04e0 8B7B50   		movl	80(%rbx), %edi
 906 04e3 E8000000 		call	_Z11fl_inactivej
 906      00
 907              	.LVL100:
 908              	.LBB357:
 909              	.LBB358:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 910              		.loc 4 52 0
 911 04e8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 911      000000
 912 04ef 89C6     		movl	%eax, %esi
 913 04f1 488B17   		movq	(%rdi), %rdx
 914 04f4 FF928800 		call	*136(%rdx)
 914      0000
 915              	.LVL101:
 916 04fa E96AFCFF 		jmp	.L29
 916      FF
 917              	.LVL102:
 918 04ff 90       		.p2align 4,,10
 919              		.p2align 3
 920              	.L16:
 921              	.LBE358:
 922              	.LBE357:
 923              	.LBE376:
 924              	.LBE380:
 925              	.LBE388:
 926              	.LBB389:
 927              	.LBB317:
 928              	.LBB312:
 217:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 929              		.loc 2 217 0
 930 0500 8B7B50   		movl	80(%rbx), %edi
 931 0503 E8000000 		call	_Z11fl_inactivej
 931      00
 932              	.LVL103:
 933              	.LBB293:
 934              	.LBB294:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 935              		.loc 4 52 0
 936 0508 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 936      000000
 937 050f 89C6     		movl	%eax, %esi
 938 0511 488B17   		movq	(%rdi), %rdx
 939 0514 FF928800 		call	*136(%rdx)
 939      0000
 940              	.LVL104:
 941 051a E904FEFF 		jmp	.L17
 941      FF
 942              	.LVL105:
 943 051f 90       		.p2align 4,,10
 944              		.p2align 3
 945              	.L48:
 946 0520 0FB693A8 		movzbl	168(%rbx), %edx
 946      000000
 947 0527 89D6     		movl	%edx, %esi
 948              	.LVL106:
 949              	.LBE294:
 950              	.LBE293:
 951              	.LBE312:
 952              	.LBE317:
 953              	.LBE389:
 954              	.LBB390:
 955              	.LBB381:
 956              	.LBB377:
 957              	.LBB359:
 958              	.LBB360:
 959              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
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
 960              		.loc 6 732 0 discriminator 1
 961 0529 83CE01   		orl	$1, %esi
 962              	.LBE360:
 963              	.LBE359:
 964              	.LBB362:
 965              	.LBB363:
 966              		.loc 3 101 0 discriminator 1
 967 052c 83FA01   		cmpl	$1, %edx
 968              	.LBE363:
 969              	.LBE362:
 970              	.LBB365:
 971              	.LBB361:
 972              		.loc 6 732 0 discriminator 1
 973 052f 400FB6F6 		movzbl	%sil, %esi
 974              	.LBE361:
 975              	.LBE365:
 976              	.LBB366:
 977              	.LBB364:
 978              		.loc 3 101 0 discriminator 1
 979 0533 0F4EF2   		cmovle	%edx, %esi
 980 0536 E9F1FBFF 		jmp	.L27
 980      FF
 981              	.LVL107:
 982 053b 0F1F4400 		.p2align 4,,10
 982      00
 983              		.p2align 3
 984              	.L47:
 985 0540 0FB693A8 		movzbl	168(%rbx), %edx
 985      000000
 986 0547 89D6     		movl	%edx, %esi
 987              	.LVL108:
 988              	.LBE364:
 989              	.LBE366:
 990              	.LBB367:
 991              	.LBB368:
 992              		.loc 6 732 0 discriminator 1
 993 0549 83CE01   		orl	$1, %esi
 994              	.LBE368:
 995              	.LBE367:
 996              	.LBB370:
 997              	.LBB371:
 998              		.loc 3 101 0 discriminator 1
 999 054c 83FA01   		cmpl	$1, %edx
 1000              	.LBE371:
 1001              	.LBE370:
 1002              	.LBB373:
 1003              	.LBB369:
 1004              		.loc 6 732 0 discriminator 1
 1005 054f 400FB6F6 		movzbl	%sil, %esi
 1006              	.LBE369:
 1007              	.LBE373:
 1008              	.LBB374:
 1009              	.LBB372:
 1010              		.loc 3 101 0 discriminator 1
 1011 0553 0F4EF2   		cmovle	%edx, %esi
 1012 0556 E996FBFF 		jmp	.L24
 1012      FF
 1013              	.LVL109:
 1014 055b 0F1F4400 		.p2align 4,,10
 1014      00
 1015              		.p2align 3
 1016              	.L50:
 1017 0560 0FB68BA8 		movzbl	168(%rbx), %ecx
 1017      000000
 1018 0567 89CE     		movl	%ecx, %esi
 1019              	.LVL110:
 1020              	.LBE372:
 1021              	.LBE374:
 1022              	.LBE377:
 1023              	.LBE381:
 1024              	.LBE390:
 1025              	.LBB391:
 1026              	.LBB318:
 1027              	.LBB313:
 1028              	.LBB295:
 1029              	.LBB296:
 1030              		.loc 6 732 0 discriminator 1
 1031 0569 83CE01   		orl	$1, %esi
 1032              	.LBE296:
 1033              	.LBE295:
 1034              	.LBB298:
 1035              	.LBB299:
 1036              		.loc 3 101 0 discriminator 1
 1037 056c 83F901   		cmpl	$1, %ecx
 1038              	.LBE299:
 1039              	.LBE298:
 1040              	.LBB301:
 1041              	.LBB297:
 1042              		.loc 6 732 0 discriminator 1
 1043 056f 400FB6F6 		movzbl	%sil, %esi
 1044              	.LBE297:
 1045              	.LBE301:
 1046              	.LBB302:
 1047              	.LBB300:
 1048              		.loc 3 101 0 discriminator 1
 1049 0573 0F4EF1   		cmovle	%ecx, %esi
 1050 0576 E96CFDFF 		jmp	.L15
 1050      FF
 1051              	.LVL111:
 1052 057b 0F1F4400 		.p2align 4,,10
 1052      00
 1053              		.p2align 3
 1054              	.L49:
 1055 0580 0FB693A8 		movzbl	168(%rbx), %edx
 1055      000000
 1056 0587 89D6     		movl	%edx, %esi
 1057              	.LVL112:
 1058              	.LBE300:
 1059              	.LBE302:
 1060              	.LBB303:
 1061              	.LBB304:
 1062              		.loc 6 732 0 discriminator 1
 1063 0589 83CE01   		orl	$1, %esi
 1064              	.LBE304:
 1065              	.LBE303:
 1066              	.LBB306:
 1067              	.LBB307:
 1068              		.loc 3 101 0 discriminator 1
 1069 058c 83FA01   		cmpl	$1, %edx
 1070              	.LBE307:
 1071              	.LBE306:
 1072              	.LBB309:
 1073              	.LBB305:
 1074              		.loc 6 732 0 discriminator 1
 1075 058f 400FB6F6 		movzbl	%sil, %esi
 1076              	.LBE305:
 1077              	.LBE309:
 1078              	.LBB310:
 1079              	.LBB308:
 1080              		.loc 3 101 0 discriminator 1
 1081 0593 0F4EF2   		cmovle	%edx, %esi
 1082 0596 E914FDFF 		jmp	.L12
 1082      FF
 1083              	.LVL113:
 1084 059b 0F1F4400 		.p2align 4,,10
 1084      00
 1085              		.p2align 3
 1086              	.L35:
 1087              	.LBE308:
 1088              	.LBE310:
 1089              	.LBE313:
 1090              	.LBE318:
 1091              	.LBE391:
 1092              	.LBB392:
 1093              	.LBB382:
 1094              	.LBB378:
 1095 05a0 41B90200 		movl	$2, %r9d
 1095      0000
 243:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1096              		.loc 2 243 0
 1097 05a6 BB010000 		movl	$1, %ebx
 1097      00
 1098 05ab E9DAFBFF 		jmp	.L30
 1098      FF
 1099              	.LVL114:
 1100              		.p2align 4,,10
 1101              		.p2align 3
 1102              	.L34:
 1103              	.LBE378:
 1104              	.LBE382:
 1105              	.LBE392:
 1106              	.LBB393:
 1107              	.LBB319:
 1108              	.LBB314:
 1109 05b0 41B80200 		movl	$2, %r8d
 1109      0000
 218:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1110              		.loc 2 218 0
 1111 05b6 BB010000 		movl	$1, %ebx
 1111      00
 1112 05bb E982FDFF 		jmp	.L18
 1112      FF
 1113              	.LBE314:
 1114              	.LBE319:
 1115              	.LBE393:
 1116              	.LBE397:
 1117              		.cfi_endproc
 1118              	.LFE510:
 1120              		.section	.text.unlikely._ZN12Fl_Scrollbar4drawEv
 1121              	.LCOLDE4:
 1122              		.section	.text._ZN12Fl_Scrollbar4drawEv
 1123              	.LHOTE4:
 1124              		.section	.text.unlikely._ZN12Fl_ScrollbarD2Ev,"ax",@progbits
 1125              		.align 2
 1126              	.LCOLDB5:
 1127              		.section	.text._ZN12Fl_ScrollbarD2Ev,"ax",@progbits
 1128              	.LHOTB5:
 1129              		.align 2
 1130              		.p2align 4,,15
 1131              		.globl	_ZN12Fl_ScrollbarD2Ev
 1133              	_ZN12Fl_ScrollbarD2Ev:
 1134              	.LFB523:
 259:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 1135              		.loc 2 275 0
 1136              		.cfi_startproc
 1137              	.LVL115:
 1138 0000 53       		pushq	%rbx
 1139              		.cfi_def_cfa_offset 16
 1140              		.cfi_offset 3, -16
 1141              	.LBB398:
 276:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1142              		.loc 2 276 0
 1143 0001 8B87B000 		movl	176(%rdi), %eax
 1143      0000
 1144              	.LBE398:
 275:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1145              		.loc 2 275 0
 1146 0007 4889FB   		movq	%rdi, %rbx
 1147              	.LBB405:
 1148 000a 48C70700 		movq	$_ZTV12Fl_Scrollbar+16, (%rdi)
 1148      000000
 1149              		.loc 2 276 0
 1150 0011 85C0     		testl	%eax, %eax
 1151 0013 740D     		je	.L52
 277:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 1152              		.loc 2 277 0
 1153 0015 4889FE   		movq	%rdi, %rsi
 1154 0018 BF000000 		movl	$_ZN12Fl_Scrollbar10timeout_cbEPv, %edi
 1154      00
 1155              	.LVL116:
 1156 001d E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 1156      00
 1157              	.LVL117:
 1158              	.L52:
 1159              	.LBB399:
 1160              	.LBB400:
 1161              	.LBB401:
 1162              		.file 7 "fltk-1.3.4-1/FL/Fl_Valuator.H"
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
 1163              		.loc 7 49 0
 1164 0022 48C70300 		movq	$_ZTV11Fl_Valuator+16, (%rbx)
 1164      000000
 1165 0029 4889DF   		movq	%rbx, %rdi
 1166              	.LBE401:
 1167              	.LBE400:
 1168              	.LBE399:
 1169              	.LBE405:
 278:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1170              		.loc 2 278 0
 1171 002c 5B       		popq	%rbx
 1172              		.cfi_def_cfa_offset 8
 1173              	.LVL118:
 1174              	.LBB406:
 1175              	.LBB404:
 1176              	.LBB403:
 1177              	.LBB402:
 1178              		.loc 7 49 0
 1179 002d E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 1179      00
 1180              	.LVL119:
 1181              	.LBE402:
 1182              	.LBE403:
 1183              	.LBE404:
 1184              	.LBE406:
 1185              		.cfi_endproc
 1186              	.LFE523:
 1188              		.section	.text.unlikely._ZN12Fl_ScrollbarD2Ev
 1189              	.LCOLDE5:
 1190              		.section	.text._ZN12Fl_ScrollbarD2Ev
 1191              	.LHOTE5:
 1192              		.globl	_ZN12Fl_ScrollbarD1Ev
 1193              		.set	_ZN12Fl_ScrollbarD1Ev,_ZN12Fl_ScrollbarD2Ev
 1194              		.section	.text.unlikely._ZN12Fl_ScrollbarD0Ev,"ax",@progbits
 1195              		.align 2
 1196              	.LCOLDB6:
 1197              		.section	.text._ZN12Fl_ScrollbarD0Ev,"ax",@progbits
 1198              	.LHOTB6:
 1199              		.align 2
 1200              		.p2align 4,,15
 1201              		.globl	_ZN12Fl_ScrollbarD0Ev
 1203              	_ZN12Fl_ScrollbarD0Ev:
 1204              	.LFB525:
 275:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1205              		.loc 2 275 0
 1206              		.cfi_startproc
 1207              	.LVL120:
 1208 0000 53       		pushq	%rbx
 1209              		.cfi_def_cfa_offset 16
 1210              		.cfi_offset 3, -16
 275:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1211              		.loc 2 275 0
 1212 0001 4889FB   		movq	%rdi, %rbx
 1213              		.loc 2 278 0
 1214 0004 E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 1214      00
 1215              	.LVL121:
 1216 0009 4889DF   		movq	%rbx, %rdi
 1217 000c 5B       		popq	%rbx
 1218              		.cfi_def_cfa_offset 8
 1219              	.LVL122:
 1220 000d E9000000 		jmp	_ZdlPv
 1220      00
 1221              	.LVL123:
 1222              		.cfi_endproc
 1223              	.LFE525:
 1225              		.section	.text.unlikely._ZN12Fl_ScrollbarD0Ev
 1226              	.LCOLDE6:
 1227              		.section	.text._ZN12Fl_ScrollbarD0Ev
 1228              	.LHOTE6:
 1229              		.section	.text.unlikely._ZN12Fl_Scrollbar12increment_cbEv,"ax",@progbits
 1230              		.align 2
 1231              	.LCOLDB8:
 1232              		.section	.text._ZN12Fl_Scrollbar12increment_cbEv,"ax",@progbits
 1233              	.LHOTB8:
 1234              		.align 2
 1235              		.p2align 4,,15
 1236              		.globl	_ZN12Fl_Scrollbar12increment_cbEv
 1238              	_ZN12Fl_Scrollbar12increment_cbEv:
 1239              	.LFB507:
  29:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 1240              		.loc 2 29 0
 1241              		.cfi_startproc
 1242              	.LVL124:
 1243 0000 53       		pushq	%rbx
 1244              		.cfi_def_cfa_offset 16
 1245              		.cfi_offset 3, -16
  29:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 1246              		.loc 2 29 0
 1247 0001 4889FB   		movq	%rdi, %rbx
  31:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 1248              		.loc 2 31 0
 1249 0004 8B87AC00 		movl	172(%rdi), %eax
 1249      0000
 1250 000a F20F1087 		movsd	144(%rdi), %xmm0
 1250      90000000 
 1251              	.LVL125:
 1252 0012 F20F108F 		movsd	136(%rdi), %xmm1
 1252      88000000 
 1253              	.LVL126:
 1254 001a 660F2EC8 		ucomisd	%xmm0, %xmm1
 1255 001e 7602     		jbe	.L59
  31:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 1256              		.loc 2 31 0 is_stmt 0 discriminator 1
 1257 0020 F7D8     		negl	%eax
 1258              	.L59:
 1259              	.LVL127:
  33:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 1260              		.loc 2 33 0 is_stmt 1 discriminator 4
 1261 0022 8B93B000 		movl	176(%rbx), %edx
 1261      0000
 1262 0028 83FA05   		cmpl	$5, %edx
 1263 002b 7433     		je	.L61
 1264 002d 83FA06   		cmpl	$6, %edx
 1265 0030 746E     		je	.L62
  35:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
 1266              		.loc 2 35 0 discriminator 4
 1267 0032 89C1     		movl	%eax, %ecx
 1268 0034 F7D9     		negl	%ecx
 1269 0036 83FA01   		cmpl	$1, %edx
 1270 0039 0F44C1   		cmove	%ecx, %eax
 1271              	.LVL128:
 1272              	.L60:
  57:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1273              		.loc 2 57 0
 1274 003c 660FEFC0 		pxor	%xmm0, %xmm0
 1275              	.LVL129:
 1276 0040 F20F2C53 		cvttsd2si	120(%rbx), %edx
 1276      78
 1277 0045 01D0     		addl	%edx, %eax
 1278              	.LVL130:
 1279 0047 4889DF   		movq	%rbx, %rdi
 1280              	.LVL131:
 1281 004a F20F2AC0 		cvtsi2sd	%eax, %xmm0
 1282 004e E8000000 		call	_ZN11Fl_Valuator5clampEd
 1282      00
 1283              	.LVL132:
 1284 0053 4889DF   		movq	%rbx, %rdi
  58:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1285              		.loc 2 58 0
 1286 0056 5B       		popq	%rbx
 1287              		.cfi_remember_state
 1288              		.cfi_def_cfa_offset 8
 1289              	.LVL133:
  57:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1290              		.loc 2 57 0
 1291 0057 E9000000 		jmp	_ZN11Fl_Valuator11handle_dragEd
 1291      00
 1292              	.LVL134:
 1293 005c 0F1F4000 		.p2align 4,,10
 1294              		.p2align 3
 1295              	.L61:
 1296              		.cfi_restore_state
  41:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 1297              		.loc 2 41 0
 1298 0060 660F28D0 		movapd	%xmm0, %xmm2
  43:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 1299              		.loc 2 43 0
 1300 0064 F7D8     		negl	%eax
 1301              	.LVL135:
  41:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 1302              		.loc 2 41 0
 1303 0066 660FEFE4 		pxor	%xmm4, %xmm4
 1304 006a F20F5CD1 		subsd	%xmm1, %xmm2
 1305 006e F20F101D 		movsd	.LC7(%rip), %xmm3
 1305      00000000 
 1306 0076 F30F5AA3 		cvtss2sd	164(%rbx), %xmm4
 1306      A4000000 
 1307              	.LVL136:
 1308 007e F20F59D4 		mulsd	%xmm4, %xmm2
 1309 0082 F20F5CDC 		subsd	%xmm4, %xmm3
 1310 0086 F20F5ED3 		divsd	%xmm3, %xmm2
 1311 008a F20F2CD2 		cvttsd2si	%xmm2, %edx
 1312 008e F7DA     		negl	%edx
 1313              	.LVL137:
  42:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1314              		.loc 2 42 0
 1315 0090 660F2EC8 		ucomisd	%xmm0, %xmm1
 1316 0094 765A     		jbe	.L72
 1317 0096 39C2     		cmpl	%eax, %edx
 1318 0098 0F4DC2   		cmovge	%edx, %eax
 1319              	.LVL138:
 1320 009b EB9F     		jmp	.L60
 1321              	.LVL139:
 1322 009d 0F1F00   		.p2align 4,,10
 1323              		.p2align 3
 1324              	.L62:
  49:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1325              		.loc 2 49 0
 1326 00a0 660F28D0 		movapd	%xmm0, %xmm2
 1327 00a4 660FEFE4 		pxor	%xmm4, %xmm4
 1328 00a8 F20F5CD1 		subsd	%xmm1, %xmm2
 1329 00ac F20F101D 		movsd	.LC7(%rip), %xmm3
 1329      00000000 
  50:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 1330              		.loc 2 50 0
 1331 00b4 660F2EC8 		ucomisd	%xmm0, %xmm1
  49:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1332              		.loc 2 49 0
 1333 00b8 F30F5AA3 		cvtss2sd	164(%rbx), %xmm4
 1333      A4000000 
 1334              	.LVL140:
 1335 00c0 F20F59D4 		mulsd	%xmm4, %xmm2
 1336 00c4 F20F5CDC 		subsd	%xmm4, %xmm3
 1337 00c8 F20F5ED3 		divsd	%xmm3, %xmm2
 1338 00cc F20F2CD2 		cvttsd2si	%xmm2, %edx
 1339              	.LVL141:
  50:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 1340              		.loc 2 50 0
 1341 00d0 760E     		jbe	.L73
 1342 00d2 39D0     		cmpl	%edx, %eax
 1343 00d4 0F4FC2   		cmovg	%edx, %eax
 1344              	.LVL142:
 1345 00d7 E960FFFF 		jmp	.L60
 1345      FF
 1346              	.LVL143:
 1347 00dc 0F1F4000 		.p2align 4,,10
 1348              		.p2align 3
 1349              	.L73:
 1350 00e0 39D0     		cmpl	%edx, %eax
 1351 00e2 0F4CC2   		cmovl	%edx, %eax
 1352              	.LVL144:
 1353 00e5 E952FFFF 		jmp	.L60
 1353      FF
 1354              	.LVL145:
 1355 00ea 660F1F44 		.p2align 4,,10
 1355      0000
 1356              		.p2align 3
 1357              	.L72:
 1358 00f0 39C2     		cmpl	%eax, %edx
 1359 00f2 0F4EC2   		cmovle	%edx, %eax
 1360              	.LVL146:
 1361 00f5 E942FFFF 		jmp	.L60
 1361      FF
 1362              		.cfi_endproc
 1363              	.LFE507:
 1365              		.section	.text.unlikely._ZN12Fl_Scrollbar12increment_cbEv
 1366              	.LCOLDE8:
 1367              		.section	.text._ZN12Fl_Scrollbar12increment_cbEv
 1368              	.LHOTE8:
 1369              		.section	.text.unlikely._ZN12Fl_Scrollbar10timeout_cbEPv,"ax",@progbits
 1370              		.align 2
 1371              	.LCOLDB10:
 1372              		.section	.text._ZN12Fl_Scrollbar10timeout_cbEPv,"ax",@progbits
 1373              	.LHOTB10:
 1374              		.align 2
 1375              		.p2align 4,,15
 1376              		.globl	_ZN12Fl_Scrollbar10timeout_cbEPv
 1378              	_ZN12Fl_Scrollbar10timeout_cbEPv:
 1379              	.LFB508:
  60:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1380              		.loc 2 60 0
 1381              		.cfi_startproc
 1382              	.LVL147:
 1383 0000 53       		pushq	%rbx
 1384              		.cfi_def_cfa_offset 16
 1385              		.cfi_offset 3, -16
  60:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1386              		.loc 2 60 0
 1387 0001 4889FB   		movq	%rdi, %rbx
  62:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 1388              		.loc 2 62 0
 1389 0004 E8000000 		call	_ZN12Fl_Scrollbar12increment_cbEv
 1389      00
 1390              	.LVL148:
  63:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1391              		.loc 2 63 0
 1392 0009 4889DE   		movq	%rbx, %rsi
 1393 000c F20F1005 		movsd	.LC9(%rip), %xmm0
 1393      00000000 
  64:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
 1394              		.loc 2 64 0
 1395 0014 5B       		popq	%rbx
 1396              		.cfi_def_cfa_offset 8
 1397              	.LVL149:
  63:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1398              		.loc 2 63 0
 1399 0015 BF000000 		movl	$_ZN12Fl_Scrollbar10timeout_cbEPv, %edi
 1399      00
 1400 001a E9000000 		jmp	_ZN2Fl11add_timeoutEdPFvPvES0_
 1400      00
 1401              	.LVL150:
 1402              		.cfi_endproc
 1403              	.LFE508:
 1405              		.section	.text.unlikely._ZN12Fl_Scrollbar10timeout_cbEPv
 1406              	.LCOLDE10:
 1407              		.section	.text._ZN12Fl_Scrollbar10timeout_cbEPv
 1408              	.LHOTE10:
 1409              		.section	.text.unlikely._ZN12Fl_Scrollbar6handleEi,"ax",@progbits
 1410              		.align 2
 1411              	.LCOLDB14:
 1412              		.section	.text._ZN12Fl_Scrollbar6handleEi,"ax",@progbits
 1413              	.LHOTB14:
 1414              		.align 2
 1415              		.p2align 4,,15
 1416              		.globl	_ZN12Fl_Scrollbar6handleEi
 1418              	_ZN12Fl_Scrollbar6handleEi:
 1419              	.LFB509:
  66:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 1420              		.loc 2 66 0
 1421              		.cfi_startproc
 1422              	.LVL151:
 1423 0000 4155     		pushq	%r13
 1424              		.cfi_def_cfa_offset 16
 1425              		.cfi_offset 13, -16
 1426 0002 4154     		pushq	%r12
 1427              		.cfi_def_cfa_offset 24
 1428              		.cfi_offset 12, -24
 1429 0004 55       		pushq	%rbp
 1430              		.cfi_def_cfa_offset 32
 1431              		.cfi_offset 6, -32
 1432 0005 53       		pushq	%rbx
 1433              		.cfi_def_cfa_offset 40
 1434              		.cfi_offset 3, -40
 1435 0006 4883EC08 		subq	$8, %rsp
 1436              		.cfi_def_cfa_offset 48
 1437 000a 0FB66F6C 		movzbl	108(%rdi), %ebp
 1438 000e 8B5720   		movl	32(%rdi), %edx
 1439              	.LVL152:
 1440 0011 8B4F24   		movl	36(%rdi), %ecx
 1441              	.LVL153:
 1442 0014 448B4728 		movl	40(%rdi), %r8d
 1443              	.LVL154:
 1444 0018 448B4F2C 		movl	44(%rdi), %r9d
 1445              	.LVL155:
  72:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1446              		.loc 2 72 0
 1447 001c 4189EC   		movl	%ebp, %r12d
 1448 001f 4183E401 		andl	$1, %r12d
 1449 0023 744B     		je	.L78
  73:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 1450              		.loc 2 73 0
 1451 0025 478D1409 		leal	(%r9,%r9), %r10d
 1452 0029 4489C0   		movl	%r8d, %eax
 1453 002c 478D1C0A 		leal	(%r10,%r9), %r11d
 1454 0030 4539C3   		cmpl	%r8d, %r11d
 1455 0033 0F8E4701 		jle	.L163
 1455      0000
 1456              	.L79:
 1457              	.LVL156:
  82:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 1458              		.loc 2 82 0
 1459 0039 8B1D0000 		movl	_ZN2Fl3e_xE(%rip), %ebx
 1459      0000
 1460 003f 4189C0   		movl	%eax, %r8d
 1461 0042 29D3     		subl	%edx, %ebx
 1462              	.LVL157:
 1463              	.L126:
 1464              	.LBB407:
  88:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 1465              		.loc 2 88 0
 1466 0044 85DB     		testl	%ebx, %ebx
 1467 0046 41BB0100 		movl	$1, %r11d
 1467      0000
 1468 004c 780A     		js	.L81
 1469              	.LBB408:
  89:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 1470              		.loc 2 89 0
 1471 004e 39C3     		cmpl	%eax, %ebx
 1472 0050 41BB0200 		movl	$2, %r11d
 1472      0000
 1473 0056 7C40     		jl	.L164
 1474              	.LVL158:
 1475              	.L81:
 1476              	.LBE408:
 1477              	.LBE407:
 1478              	.LBB417:
 107:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 1479              		.loc 2 107 0
 1480 0058 83FE13   		cmpl	$19, %esi
 1481 005b 0F87BF02 		ja	.L137
 1481      0000
 1482 0061 89F6     		movl	%esi, %esi
 1483 0063 4889FB   		movq	%rdi, %rbx
 1484              	.LVL159:
 1485 0066 FF24F500 		jmp	*.L93(,%rsi,8)
 1485      000000
 1486              		.section	.rodata._ZN12Fl_Scrollbar6handleEi,"a",@progbits
 1487              		.align 8
 1488              		.align 4
 1489              	.L93:
 1490 0000 00000000 		.quad	.L137
 1490      00000000 
 1491 0008 00000000 		.quad	.L92
 1491      00000000 
 1492 0010 00000000 		.quad	.L94
 1492      00000000 
 1493 0018 00000000 		.quad	.L159
 1493      00000000 
 1494 0020 00000000 		.quad	.L159
 1494      00000000 
 1495 0028 00000000 		.quad	.L96
 1495      00000000 
 1496 0030 00000000 		.quad	.L137
 1496      00000000 
 1497 0038 00000000 		.quad	.L137
 1497      00000000 
 1498 0040 00000000 		.quad	.L97
 1498      00000000 
 1499 0048 00000000 		.quad	.L137
 1499      00000000 
 1500 0050 00000000 		.quad	.L137
 1500      00000000 
 1501 0058 00000000 		.quad	.L137
 1501      00000000 
 1502 0060 00000000 		.quad	.L97
 1502      00000000 
 1503 0068 00000000 		.quad	.L137
 1503      00000000 
 1504 0070 00000000 		.quad	.L137
 1504      00000000 
 1505 0078 00000000 		.quad	.L137
 1505      00000000 
 1506 0080 00000000 		.quad	.L137
 1506      00000000 
 1507 0088 00000000 		.quad	.L137
 1507      00000000 
 1508 0090 00000000 		.quad	.L137
 1508      00000000 
 1509 0098 00000000 		.quad	.L98
 1509      00000000 
 1510              		.section	.text._ZN12Fl_Scrollbar6handleEi
 1511              	.LVL160:
 1512 006d 0F1F00   		.p2align 4,,10
 1513              		.p2align 3
 1514              	.L78:
 1515              	.LBE417:
  75:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 1516              		.loc 2 75 0
 1517 0070 478D1400 		leal	(%r8,%r8), %r10d
 1518 0074 4489C8   		movl	%r9d, %eax
 1519 0077 478D1C02 		leal	(%r10,%r8), %r11d
 1520 007b 4539CB   		cmpl	%r9d, %r11d
 1521 007e 7F06     		jg	.L80
  75:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 1522              		.loc 2 75 0 is_stmt 0 discriminator 1
 1523 0080 4401C1   		addl	%r8d, %ecx
 1524              	.LVL161:
 1525 0083 4429D0   		subl	%r10d, %eax
 1526              	.LVL162:
 1527              	.L80:
  85:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 1528              		.loc 2 85 0 is_stmt 1
 1529 0086 8B1D0000 		movl	_ZN2Fl3e_yE(%rip), %ebx
 1529      0000
 1530 008c 4189C1   		movl	%eax, %r9d
 1531 008f 29CB     		subl	%ecx, %ebx
 1532              	.LVL163:
 1533 0091 EBB1     		jmp	.L126
 1534              	.LVL164:
 1535              		.p2align 4,,10
 1536 0093 0F1F4400 		.p2align 3
 1536      00
 1537              	.L164:
 1538              	.LBB451:
 1539              	.LBB413:
 1540              	.LBB409:
  91:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 1541              		.loc 2 91 0
 1542 0098 660FEFC0 		pxor	%xmm0, %xmm0
  92:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 1543              		.loc 2 92 0
 1544 009c 4584E4   		testb	%r12b, %r12b
  91:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 1545              		.loc 2 91 0
 1546 009f F20F1015 		movsd	.LC11(%rip), %xmm2
 1546      00000000 
 1547 00a7 F30F2AC0 		cvtsi2ss	%eax, %xmm0
 1548 00ab F30F5987 		mulss	164(%rdi), %xmm0
 1548      A4000000 
 1549 00b3 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 1550 00b7 F20F58C2 		addsd	%xmm2, %xmm0
 1551 00bb F2440F2C 		cvttsd2si	%xmm0, %r13d
 1551      E8
 1552              	.LVL165:
  92:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 1553              		.loc 2 92 0
 1554 00c0 0F851201 		jne	.L165
 1554      0000
  92:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 1555              		.loc 2 92 0 is_stmt 0 discriminator 2
 1556 00c6 4589C3   		movl	%r8d, %r11d
 1557 00c9 41C1EB1F 		shrl	$31, %r11d
 1558 00cd 4501C3   		addl	%r8d, %r11d
 1559 00d0 41D1FB   		sarl	%r11d
 1560 00d3 458D5301 		leal	1(%r11), %r10d
 1561              	.L83:
 1562              	.LVL166:
 1563 00d7 F20F109F 		movsd	136(%rdi), %xmm3
 1563      88000000 
  93:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1564              		.loc 2 93 0 is_stmt 1 discriminator 4
 1565 00df 83ED04   		subl	$4, %ebp
 1566 00e2 458D5A04 		leal	4(%r10), %r11d
  96:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 1567              		.loc 2 96 0 discriminator 4
 1568 00e6 F20F108F 		movsd	144(%rdi), %xmm1
 1568      90000000 
  93:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1569              		.loc 2 93 0 discriminator 4
 1570 00ee 4080FD01 		cmpb	$1, %bpl
  96:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 1571              		.loc 2 96 0 discriminator 4
 1572 00f2 660FEFE4 		pxor	%xmm4, %xmm4
  93:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 1573              		.loc 2 93 0 discriminator 4
 1574 00f6 450F46D3 		cmovbe	%r11d, %r10d
 1575              	.LVL167:
  96:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 1576              		.loc 2 96 0 discriminator 4
 1577 00fa F20F5CCB 		subsd	%xmm3, %xmm1
 1578 00fe 4539EA   		cmpl	%r13d, %r10d
 1579 0101 450F4CD5 		cmovl	%r13d, %r10d
 1580              	.LVL168:
 1581 0105 660F2ECC 		ucomisd	%xmm4, %xmm1
 1582 0109 7A06     		jp	.L141
  96:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 1583              		.loc 2 96 0 is_stmt 0
 1584 010b 0F841F02 		je	.L153
 1584      0000
 1585              	.L141:
 1586              	.LVL169:
 1587 0111 660FEFC0 		pxor	%xmm0, %xmm0
 1588 0115 F2440F2C 		cvttsd2si	120(%rdi), %r11d
 1588      5F78
 1589              	.LVL170:
  98:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1590              		.loc 2 98 0 is_stmt 1
 1591 011b 89C5     		movl	%eax, %ebp
 1592 011d 4429D5   		subl	%r10d, %ebp
  96:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 1593              		.loc 2 96 0
 1594 0120 F2410F2A 		cvtsi2sd	%r11d, %xmm0
 1594      C3
 1595 0125 F20F5CC3 		subsd	%xmm3, %xmm0
 1596 0129 F20F5EC1 		divsd	%xmm1, %xmm0
 1597              	.LVL171:
  98:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1598              		.loc 2 98 0
 1599 012d 660F2E05 		ucomisd	.LC7(%rip), %xmm0
 1599      00000000 
 1600 0135 0F826F03 		jb	.L166
 1600      0000
 1601              	.LVL172:
 1602              	.L89:
 101:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 1603              		.loc 2 101 0
 1604 013b 813D0000 		cmpl	$65258, _ZN2Fl8e_keysymE(%rip)
 1604      0000EAFE 
 1604      0000
 104:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1605              		.loc 2 104 0
 1606 0145 41BB0800 		movl	$8, %r11d
 1606      0000
 101:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 1607              		.loc 2 101 0
 1608 014b 0F8407FF 		je	.L81
 1608      FFFF
 102:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 1609              		.loc 2 102 0
 1610 0151 39EB     		cmpl	%ebp, %ebx
 1611 0153 41BB0500 		movl	$5, %r11d
 1611      0000
 1612 0159 0F8CF9FE 		jl	.L81
 1612      FFFF
 1613              	.LVL173:
 1614              	.L125:
 103:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1615              		.loc 2 103 0
 1616 015f 4101EA   		addl	%ebp, %r10d
 1617              	.LVL174:
 1618 0162 4531DB   		xorl	%r11d, %r11d
 1619 0165 4439D3   		cmpl	%r10d, %ebx
 1620 0168 410F9CC3 		setl	%r11b
 1621 016c 478D5C1B 		leal	6(%r11,%r11), %r11d
 1621      06
 1622 0171 E9E2FEFF 		jmp	.L81
 1622      FF
 1623              	.LVL175:
 1624 0176 662E0F1F 		.p2align 4,,10
 1624      84000000 
 1624      0000
 1625              		.p2align 3
 1626              	.L163:
 1627              	.LBE409:
 1628              	.LBE413:
 1629              	.LBE451:
  73:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 1630              		.loc 2 73 0 discriminator 1
 1631 0180 4401CA   		addl	%r9d, %edx
 1632              	.LVL176:
 1633 0183 4429D0   		subl	%r10d, %eax
 1634              	.LVL177:
 1635 0186 E9AEFEFF 		jmp	.L79
 1635      FF
 1636              	.LVL178:
 1637 018b 0F1F4400 		.p2align 4,,10
 1637      00
 1638              		.p2align 3
 1639              	.L94:
 1640              	.LBB452:
 1641              	.LBB418:
 112:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 1642              		.loc 2 112 0
 1643 0190 BE800000 		movl	$128, %esi
 1643      00
 1644              	.LVL179:
 1645 0195 E8000000 		call	_ZN9Fl_Widget6damageEh
 1645      00
 1646              	.LVL180:
 113:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 1647              		.loc 2 113 0
 1648 019a 8BBBB000 		movl	176(%rbx), %edi
 1648      0000
 1649 01a0 85FF     		testl	%edi, %edi
 1650 01a2 7417     		je	.L99
 114:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 1651              		.loc 2 114 0
 1652 01a4 4889DE   		movq	%rbx, %rsi
 1653 01a7 BF000000 		movl	$_ZN12Fl_Scrollbar10timeout_cbEPv, %edi
 1653      00
 1654 01ac E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 1654      00
 1655              	.LVL181:
 115:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 1656              		.loc 2 115 0
 1657 01b1 C783B000 		movl	$0, 176(%rbx)
 1657      00000000 
 1657      0000
 1658              	.L99:
 117:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1659              		.loc 2 117 0
 1660 01bb 4889DF   		movq	%rbx, %rdi
 1661 01be E8000000 		call	_ZN11Fl_Valuator14handle_releaseEv
 1661      00
 1662              	.LVL182:
 1663              	.L159:
 118:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 1664              		.loc 2 118 0
 1665 01c3 B8010000 		movl	$1, %eax
 1665      00
 1666              	.L148:
 1667              	.LBE418:
 1668              	.LBE452:
 198:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1669              		.loc 2 198 0
 1670 01c8 4883C408 		addq	$8, %rsp
 1671              		.cfi_remember_state
 1672              		.cfi_def_cfa_offset 40
 1673 01cc 5B       		popq	%rbx
 1674              		.cfi_def_cfa_offset 32
 1675              	.LVL183:
 1676 01cd 5D       		popq	%rbp
 1677              		.cfi_def_cfa_offset 24
 1678 01ce 415C     		popq	%r12
 1679              		.cfi_def_cfa_offset 16
 1680 01d0 415D     		popq	%r13
 1681              		.cfi_def_cfa_offset 8
 1682 01d2 C3       		ret
 1683              	.LVL184:
 1684              		.p2align 4,,10
 1685 01d3 0F1F4400 		.p2align 3
 1685      00
 1686              	.L165:
 1687              		.cfi_restore_state
 1688              	.LBB453:
 1689              	.LBB414:
 1690              	.LBB410:
  92:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 1691              		.loc 2 92 0 discriminator 1
 1692 01d8 4589CA   		movl	%r9d, %r10d
 1693 01db 41C1EA1F 		shrl	$31, %r10d
 1694 01df 4501CA   		addl	%r9d, %r10d
 1695 01e2 41D1FA   		sarl	%r10d
 1696 01e5 4183C201 		addl	$1, %r10d
 1697 01e9 E9E9FEFF 		jmp	.L83
 1697      FF
 1698              	.LVL185:
 1699 01ee 6690     		.p2align 4,,10
 1700              		.p2align 3
 1701              	.L92:
 1702              	.LBE410:
 1703              	.LBE414:
 1704              	.LBE453:
 1705              	.LBB454:
 1706              	.LBB446:
 120:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 1707              		.loc 2 120 0
 1708 01f0 8BB7B000 		movl	176(%rdi), %esi
 1708      0000
 1709              	.LVL186:
 1710 01f6 85F6     		testl	%esi, %esi
 1711 01f8 75C9     		jne	.L159
 121:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 1712              		.loc 2 121 0
 1713 01fa 4183FB08 		cmpl	$8, %r11d
 1714 01fe 0F849C02 		je	.L101
 1714      0000
 1715              	.LBB419:
 1716              	.LBB420:
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
 1717              		.loc 7 64 0 discriminator 1
 1718 0204 F20F1047 		movsd	120(%rdi), %xmm0
 1718      78
 1719              	.LBE420:
 1720              	.LBE419:
 121:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 1721              		.loc 2 121 0 discriminator 1
 1722 0209 44899FB0 		movl	%r11d, 176(%rdi)
 1722      000000
 1723              	.LVL187:
 124:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1724              		.loc 2 124 0 discriminator 1
 1725 0210 4889FE   		movq	%rdi, %rsi
 1726              	.LBB422:
 1727              	.LBB421:
 1728              		.loc 7 64 0 discriminator 1
 1729 0213 F20F1187 		movsd	%xmm0, 128(%rdi)
 1729      80000000 
 1730              	.LBE421:
 1731              	.LBE422:
 124:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1732              		.loc 2 124 0 discriminator 1
 1733 021b BF000000 		movl	$_ZN12Fl_Scrollbar10timeout_cbEPv, %edi
 1733      00
 1734 0220 F20F1005 		movsd	.LC11(%rip), %xmm0
 1734      00000000 
 1735 0228 E8000000 		call	_ZN2Fl11add_timeoutEdPFvPvES0_
 1735      00
 1736              	.LVL188:
 125:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 1737              		.loc 2 125 0 discriminator 1
 1738 022d 4889DF   		movq	%rbx, %rdi
 1739 0230 E8000000 		call	_ZN12Fl_Scrollbar12increment_cbEv
 1739      00
 1740              	.LVL189:
 126:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 1741              		.loc 2 126 0 discriminator 1
 1742 0235 BE800000 		movl	$128, %esi
 1742      00
 1743 023a 4889DF   		movq	%rbx, %rdi
 1744 023d E8000000 		call	_ZN9Fl_Widget6damageEh
 1744      00
 1745              	.LVL190:
 127:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 1746              		.loc 2 127 0 discriminator 1
 1747 0242 B8010000 		movl	$1, %eax
 1747      00
 1748 0247 E97CFFFF 		jmp	.L148
 1748      FF
 1749              	.LVL191:
 1750 024c 0F1F4000 		.p2align 4,,10
 1751              		.p2align 3
 1752              	.L98:
 1753              	.LBB423:
 134:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1754              		.loc 2 134 0
 1755 0250 4584E4   		testb	%r12b, %r12b
 1756 0253 0F84F700 		je	.L103
 1756      0000
 1757              	.LBB424:
 135:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 1758              		.loc 2 135 0
 1759 0259 8B050000 		movl	_ZN2Fl4e_dxE(%rip), %eax
 1759      0000
 1760 025f 85C0     		testl	%eax, %eax
 1761 0261 0F8461FF 		je	.L148
 1761      FFFF
 1762              	.L162:
 1763              	.LVL192:
 1764              	.LBE424:
 1765              	.LBB425:
 141:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1766              		.loc 2 141 0
 1767 0267 F20F1083 		movsd	144(%rbx), %xmm0
 1767      90000000 
 1768 026f 8B93AC00 		movl	172(%rbx), %edx
 1768      0000
 1769              	.LVL193:
 1770 0275 660F2E83 		ucomisd	136(%rbx), %xmm0
 1770      88000000 
 1771 027d 0F82FD00 		jb	.L167
 1771      0000
 1772              	.L109:
 1773              	.LVL194:
 142:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 1774              		.loc 2 142 0 discriminator 4
 1775 0283 0FAFC2   		imull	%edx, %eax
 1776 0286 660FEFC0 		pxor	%xmm0, %xmm0
 1777 028a F20F2C4B 		cvttsd2si	120(%rbx), %ecx
 1777      78
 1778              	.LVL195:
 1779 028f 4889DF   		movq	%rbx, %rdi
 1780 0292 01C8     		addl	%ecx, %eax
 1781 0294 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 1782 0298 E8000000 		call	_ZN11Fl_Valuator5clampEd
 1782      00
 1783              	.LVL196:
 1784 029d 4889DF   		movq	%rbx, %rdi
 1785 02a0 E8000000 		call	_ZN11Fl_Valuator11handle_dragEd
 1785      00
 1786              	.LVL197:
 143:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1787              		.loc 2 143 0 discriminator 4
 1788 02a5 B8010000 		movl	$1, %eax
 1788      00
 1789 02aa E919FFFF 		jmp	.L148
 1789      FF
 1790              	.LVL198:
 1791 02af 90       		.p2align 4,,10
 1792              		.p2align 3
 1793              	.L96:
 1794              	.LBE425:
 1795              	.LBE423:
 131:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 1796              		.loc 2 131 0
 1797 02b0 8B87B000 		movl	176(%rdi), %eax
 1797      0000
 1798 02b6 85C0     		testl	%eax, %eax
 1799 02b8 0F8505FF 		jne	.L159
 1799      FFFF
 132:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1800              		.loc 2 132 0
 1801 02be BE050000 		movl	$5, %esi
 1801      00
 1802              	.L160:
 1803              	.LBE446:
 1804              	.LBE454:
 198:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1805              		.loc 2 198 0
 1806 02c3 4883C408 		addq	$8, %rsp
 1807              		.cfi_remember_state
 1808              		.cfi_def_cfa_offset 40
 1809              	.LBB455:
 1810              	.LBB447:
 132:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1811              		.loc 2 132 0
 1812 02c7 4889DF   		movq	%rbx, %rdi
 1813              	.LBE447:
 1814              	.LBE455:
 198:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1815              		.loc 2 198 0
 1816 02ca 5B       		popq	%rbx
 1817              		.cfi_def_cfa_offset 32
 1818              	.LVL199:
 1819 02cb 5D       		popq	%rbp
 1820              		.cfi_def_cfa_offset 24
 1821 02cc 415C     		popq	%r12
 1822              		.cfi_def_cfa_offset 16
 1823 02ce 415D     		popq	%r13
 1824              		.cfi_def_cfa_offset 8
 1825              	.LBB456:
 1826              	.LBB448:
 132:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1827              		.loc 2 132 0
 1828 02d0 E9000000 		jmp	_ZN9Fl_Slider6handleEiiiii
 1828      00
 1829              	.LVL200:
 1830              		.p2align 4,,10
 1831 02d5 0F1F00   		.p2align 3
 1832              	.L97:
 1833              		.cfi_restore_state
 1834 02d8 F20F1087 		movsd	144(%rdi), %xmm0
 1834      90000000 
 1835              	.LBB430:
 1836              	.LBB431:
 1837              	.LBB432:
 1838              		.file 8 "fltk-1.3.4-1/FL/Fl_Scrollbar.H"
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
 1839              		.loc 8 65 0
 1840 02e0 F20F2C57 		cvttsd2si	120(%rdi), %edx
 1840      78
 1841              	.LVL201:
 1842              	.LBE432:
 1843              	.LBE431:
 148:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 1844              		.loc 2 148 0
 1845 02e5 8B8FAC00 		movl	172(%rdi), %ecx
 1845      0000
 1846              	.LVL202:
 1847 02eb F20F108F 		movsd	136(%rdi), %xmm1
 1847      88000000 
 1848              	.LVL203:
 1849 02f3 660F2EC1 		ucomisd	%xmm1, %xmm0
 1850 02f7 7302     		jnb	.L112
 148:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 1851              		.loc 2 148 0 is_stmt 0 discriminator 2
 1852 02f9 F7D9     		negl	%ecx
 1853              	.L112:
 1854              	.LVL204:
 149:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 1855              		.loc 2 149 0 is_stmt 1 discriminator 4
 1856 02fb 4584E4   		testb	%r12b, %r12b
 150:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 1857              		.loc 2 150 0 discriminator 4
 1858 02fe 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 1858      0000
 149:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 1859              		.loc 2 149 0 discriminator 4
 1860 0304 7462     		je	.L113
 150:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 1861              		.loc 2 150 0
 1862 0306 3D51FF00 		cmpl	$65361, %eax
 1862      00
 1863 030b 0F847F00 		je	.L119
 1863      0000
 1864 0311 3D53FF00 		cmpl	$65363, %eax
 1864      00
 1865 0316 7508     		jne	.L137
 1866              	.L120:
 166:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1867              		.loc 2 166 0
 1868 0318 01CA     		addl	%ecx, %edx
 1869              	.LVL205:
 167:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1870              		.loc 2 167 0
 1871 031a EB76     		jmp	.L116
 1872              	.LVL206:
 1873 031c 0F1F4000 		.p2align 4,,10
 1874              		.p2align 3
 1875              	.L137:
 1876              	.LBE430:
 1877              	.LBE448:
 1878              	.LBE456:
 198:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1879              		.loc 2 198 0
 1880 0320 4883C408 		addq	$8, %rsp
 1881              		.cfi_remember_state
 1882              		.cfi_def_cfa_offset 40
 1883              	.LBB457:
 1884              	.LBB449:
 1885              	.LBB437:
 185:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1886              		.loc 2 185 0
 1887 0324 31C0     		xorl	%eax, %eax
 1888              	.LBE437:
 1889              	.LBE449:
 1890              	.LBE457:
 198:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1891              		.loc 2 198 0
 1892 0326 5B       		popq	%rbx
 1893              		.cfi_def_cfa_offset 32
 1894 0327 5D       		popq	%rbp
 1895              		.cfi_def_cfa_offset 24
 1896 0328 415C     		popq	%r12
 1897              		.cfi_def_cfa_offset 16
 1898 032a 415D     		popq	%r13
 1899              		.cfi_def_cfa_offset 8
 1900 032c C3       		ret
 1901              	.LVL207:
 1902 032d 0F1F00   		.p2align 4,,10
 1903              		.p2align 3
 1904              	.L153:
 1905              		.cfi_restore_state
 1906              	.LBB458:
 1907              	.LBB415:
 1908              	.LBB411:
  96:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 1909              		.loc 2 96 0
 1910 0330 660F28C2 		movapd	%xmm2, %xmm0
 1911              	.LVL208:
 1912              	.L85:
 100:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 1913              		.loc 2 100 0
 1914 0334 660FEFC9 		pxor	%xmm1, %xmm1
 1915 0338 4429D0   		subl	%r10d, %eax
 1916              	.LVL209:
 1917 033b F20F2AC8 		cvtsi2sd	%eax, %xmm1
 1918 033f F20F59C1 		mulsd	%xmm1, %xmm0
 1919              	.LVL210:
 1920 0343 F20F58C2 		addsd	%xmm2, %xmm0
 1921 0347 F20F2CE8 		cvttsd2si	%xmm0, %ebp
 1922              	.LVL211:
 1923 034b E9EBFDFF 		jmp	.L89
 1923      FF
 1924              	.LVL212:
 1925              		.p2align 4,,10
 1926              		.p2align 3
 1927              	.L103:
 1928              	.LBE411:
 1929              	.LBE415:
 1930              	.LBE458:
 1931              	.LBB459:
 1932              	.LBB450:
 1933              	.LBB438:
 1934              	.LBB426:
 140:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 1935              		.loc 2 140 0
 1936 0350 8B050000 		movl	_ZN2Fl4e_dyE(%rip), %eax
 1936      0000
 1937 0356 85C0     		testl	%eax, %eax
 1938 0358 0F8509FF 		jne	.L162
 1938      FFFF
 1939 035e E965FEFF 		jmp	.L148
 1939      FF
 1940              	.LVL213:
 1941              		.p2align 4,,10
 1942 0363 0F1F4400 		.p2align 3
 1942      00
 1943              	.L113:
 1944              	.LBE426:
 1945              	.LBE438:
 1946              	.LBB439:
 161:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1947              		.loc 2 161 0
 1948 0368 2D50FF00 		subl	$65360, %eax
 1948      00
 1949 036d 83F807   		cmpl	$7, %eax
 1950 0370 77AE     		ja	.L137
 1951 0372 FF24C500 		jmp	*.L118(,%rax,8)
 1951      000000
 1952              		.section	.rodata._ZN12Fl_Scrollbar6handleEi
 1953              		.align 8
 1954              		.align 4
 1955              	.L118:
 1956 00a0 00000000 		.quad	.L117
 1956      00000000 
 1957 00a8 00000000 		.quad	.L137
 1957      00000000 
 1958 00b0 00000000 		.quad	.L119
 1958      00000000 
 1959 00b8 00000000 		.quad	.L137
 1959      00000000 
 1960 00c0 00000000 		.quad	.L120
 1960      00000000 
 1961 00c8 00000000 		.quad	.L121
 1961      00000000 
 1962 00d0 00000000 		.quad	.L122
 1962      00000000 
 1963 00d8 00000000 		.quad	.L123
 1963      00000000 
 1964              		.section	.text._ZN12Fl_Scrollbar6handleEi
 1965              	.LVL214:
 1966 0379 0F1F8000 		.p2align 4,,10
 1966      000000
 1967              		.p2align 3
 1968              	.L167:
 1969              	.LBE439:
 1970              	.LBB440:
 1971              	.LBB427:
 141:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1972              		.loc 2 141 0 discriminator 2
 1973 0380 F7DA     		negl	%edx
 1974 0382 E9FCFEFF 		jmp	.L109
 1974      FF
 1975              	.LVL215:
 1976 0387 660F1F84 		.p2align 4,,10
 1976      00000000 
 1976      00
 1977              		.p2align 3
 1978              	.L119:
 1979              	.LBE427:
 1980              	.LBE440:
 1981              	.LBB441:
 163:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 1982              		.loc 2 163 0
 1983 0390 29CA     		subl	%ecx, %edx
 1984              	.LVL216:
 1985              	.L116:
 188:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1986              		.loc 2 188 0
 1987 0392 660FEFC0 		pxor	%xmm0, %xmm0
 1988 0396 4889DF   		movq	%rbx, %rdi
 1989 0399 F20F2AC2 		cvtsi2sd	%edx, %xmm0
 1990 039d E8000000 		call	_ZN11Fl_Valuator5clampEd
 1990      00
 1991              	.LVL217:
 189:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 1992              		.loc 2 189 0
 1993 03a2 F20F2C53 		cvttsd2si	120(%rbx), %edx
 1993      78
 188:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1994              		.loc 2 188 0
 1995 03a7 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1996              	.LVL218:
 189:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 1997              		.loc 2 189 0
 1998 03ab 39D0     		cmpl	%edx, %eax
 1999 03ad 0F8410FE 		je	.L159
 1999      FFFF
 190:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 2000              		.loc 2 190 0
 2001 03b3 660FEFC0 		pxor	%xmm0, %xmm0
 2002 03b7 4889DF   		movq	%rbx, %rdi
 2003 03ba F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2004 03be E8000000 		call	_ZN11Fl_Valuator5valueEd
 2004      00
 2005              	.LVL219:
 191:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 2006              		.loc 2 191 0
 2007 03c3 488B03   		movq	(%rbx), %rax
 2008 03c6 4889DF   		movq	%rbx, %rdi
 2009 03c9 FF5050   		call	*80(%rax)
 2010              	.LVL220:
 2011              	.LBB433:
 2012              	.LBB434:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2013              		.loc 1 786 0
 2014 03cc 814B6080 		orl	$128, 96(%rbx)
 2014      000000
 2015              	.LVL221:
 2016              	.LBE434:
 2017              	.LBE433:
 2018              	.LBB435:
 2019              	.LBB436:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2020              		.loc 1 861 0
 2021 03d3 488B5318 		movq	24(%rbx), %rdx
 2022 03d7 4889DE   		movq	%rbx, %rsi
 2023 03da 4889DF   		movq	%rbx, %rdi
 2024 03dd E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 2024      00
 2025              	.LVL222:
 2026              	.LBE436:
 2027              	.LBE435:
 195:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 2028              		.loc 2 195 0
 2029 03e2 B8010000 		movl	$1, %eax
 2029      00
 2030 03e7 E9DCFDFF 		jmp	.L148
 2030      FF
 2031              	.LVL223:
 2032 03ec 0F1F4000 		.p2align 4,,10
 2033              		.p2align 3
 2034              	.L117:
 179:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 2035              		.loc 2 179 0
 2036 03f0 F20F2CD1 		cvttsd2si	%xmm1, %edx
 2037              	.LVL224:
 180:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 2038              		.loc 2 180 0
 2039 03f4 EB9C     		jmp	.L116
 2040              	.LVL225:
 2041 03f6 662E0F1F 		.p2align 4,,10
 2041      84000000 
 2041      0000
 2042              		.p2align 3
 2043              	.L121:
 2044 0400 F30F1093 		movss	164(%rbx), %xmm2
 2044      A4000000 
 2045              	.LVL226:
 2046              	.LBE441:
 2047              	.LBB442:
 2048              	.LBB428:
 135:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 2049              		.loc 2 135 0
 2050 0408 31C0     		xorl	%eax, %eax
 2051              	.LBE428:
 2052              	.LBE442:
 2053              	.LBB443:
 169:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 2054              		.loc 2 169 0
 2055 040a 0F2E1500 		ucomiss	.LC13(%rip), %xmm2
 2055      000000
 2056 0411 0F83B1FD 		jnb	.L148
 2056      FFFF
 2057              	.LVL227:
 170:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2058              		.loc 2 170 0
 2059 0417 F20F5CC1 		subsd	%xmm1, %xmm0
 2060 041b F30F5AD2 		cvtss2sd	%xmm2, %xmm2
 2061              	.LVL228:
 2062 041f F20F100D 		movsd	.LC7(%rip), %xmm1
 2062      00000000 
 2063 0427 F20F5CCA 		subsd	%xmm2, %xmm1
 2064 042b F20F59C2 		mulsd	%xmm2, %xmm0
 2065 042f F20F5EC1 		divsd	%xmm1, %xmm0
 2066 0433 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2067 0437 29C2     		subl	%eax, %edx
 2068              	.LVL229:
 171:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 2069              		.loc 2 171 0
 2070 0439 8D1411   		leal	(%rcx,%rdx), %edx
 2071              	.LVL230:
 172:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 2072              		.loc 2 172 0
 2073 043c E951FFFF 		jmp	.L116
 2073      FF
 2074              	.LVL231:
 2075              		.p2align 4,,10
 2076 0441 0F1F8000 		.p2align 3
 2076      000000
 2077              	.L123:
 182:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 2078              		.loc 2 182 0
 2079 0448 F20F2CD0 		cvttsd2si	%xmm0, %edx
 2080              	.LVL232:
 183:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 2081              		.loc 2 183 0
 2082 044c E941FFFF 		jmp	.L116
 2082      FF
 2083              	.LVL233:
 2084              		.p2align 4,,10
 2085 0451 0F1F8000 		.p2align 3
 2085      000000
 2086              	.L122:
 2087 0458 F30F1093 		movss	164(%rbx), %xmm2
 2087      A4000000 
 2088              	.LVL234:
 2089              	.LBE443:
 2090              	.LBB444:
 2091              	.LBB429:
 135:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 2092              		.loc 2 135 0
 2093 0460 31C0     		xorl	%eax, %eax
 2094              	.LBE429:
 2095              	.LBE444:
 2096              	.LBB445:
 174:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 2097              		.loc 2 174 0
 2098 0462 0F2E1500 		ucomiss	.LC13(%rip), %xmm2
 2098      000000
 2099 0469 0F8359FD 		jnb	.L148
 2099      FFFF
 2100              	.LVL235:
 175:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 2101              		.loc 2 175 0
 2102 046f F20F5CC1 		subsd	%xmm1, %xmm0
 2103 0473 F30F5AD2 		cvtss2sd	%xmm2, %xmm2
 2104              	.LVL236:
 2105 0477 F20F100D 		movsd	.LC7(%rip), %xmm1
 2105      00000000 
 2106 047f F20F5CCA 		subsd	%xmm2, %xmm1
 2107 0483 F20F59C2 		mulsd	%xmm2, %xmm0
 2108 0487 F20F5EC1 		divsd	%xmm1, %xmm0
 2109 048b F20F2CC0 		cvttsd2si	%xmm0, %eax
 2110 048f 01D0     		addl	%edx, %eax
 2111              	.LVL237:
 176:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 2112              		.loc 2 176 0
 2113 0491 29C8     		subl	%ecx, %eax
 2114              	.LVL238:
 2115 0493 89C2     		movl	%eax, %edx
 2116              	.LVL239:
 177:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 2117              		.loc 2 177 0
 2118 0495 E9F8FEFF 		jmp	.L116
 2118      FF
 2119              	.LVL240:
 2120 049a 660F1F44 		.p2align 4,,10
 2120      0000
 2121              		.p2align 3
 2122              	.L101:
 2123              	.LBE445:
 129:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2124              		.loc 2 129 0
 2125 04a0 BE010000 		movl	$1, %esi
 2125      00
 2126 04a5 E919FEFF 		jmp	.L160
 2126      FF
 2127              	.LVL241:
 2128              	.L166:
 2129              	.LBE450:
 2130              	.LBE459:
 2131              	.LBB460:
 2132              	.LBB416:
 2133              	.LBB412:
  99:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 2134              		.loc 2 99 0
 2135 04aa 660F2EE0 		ucomisd	%xmm0, %xmm4
 2136 04ae 0F8280FE 		jb	.L85
 2136      FFFF
 2137              	.LVL242:
 2138 04b4 31ED     		xorl	%ebp, %ebp
 101:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 2139              		.loc 2 101 0
 2140 04b6 813D0000 		cmpl	$65258, _ZN2Fl8e_keysymE(%rip)
 2140      0000EAFE 
 2140      0000
 104:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2141              		.loc 2 104 0
 2142 04c0 41BB0800 		movl	$8, %r11d
 2142      0000
 101:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 2143              		.loc 2 101 0
 2144 04c6 0F8593FC 		jne	.L125
 2144      FFFF
 2145 04cc E987FBFF 		jmp	.L81
 2145      FF
 2146              	.LBE412:
 2147              	.LBE416:
 2148              	.LBE460:
 2149              		.cfi_endproc
 2150              	.LFE509:
 2152              		.section	.text.unlikely._ZN12Fl_Scrollbar6handleEi
 2153              	.LCOLDE14:
 2154              		.section	.text._ZN12Fl_Scrollbar6handleEi
 2155              	.LHOTE14:
 2156              		.section	.text.unlikely._ZN12Fl_ScrollbarC2EiiiiPKc,"ax",@progbits
 2157              		.align 2
 2158              	.LCOLDB15:
 2159              		.section	.text._ZN12Fl_ScrollbarC2EiiiiPKc,"ax",@progbits
 2160              	.LHOTB15:
 2161              		.align 2
 2162              		.p2align 4,,15
 2163              		.globl	_ZN12Fl_ScrollbarC2EiiiiPKc
 2165              	_ZN12Fl_ScrollbarC2EiiiiPKc:
 2166              	.LFB520:
 264:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2167              		.loc 2 264 0
 2168              		.cfi_startproc
 2169              	.LVL243:
 2170 0000 53       		pushq	%rbx
 2171              		.cfi_def_cfa_offset 16
 2172              		.cfi_offset 3, -16
 264:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2173              		.loc 2 264 0
 2174 0001 4889FB   		movq	%rdi, %rbx
 2175              	.LBB461:
 265:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 2176              		.loc 2 265 0
 2177 0004 E8000000 		call	_ZN9Fl_SliderC2EiiiiPKc
 2177      00
 2178              	.LVL244:
 2179              	.LBB462:
 2180              	.LBB463:
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
 2181              		.loc 7 106 0
 2182 0009 F20F1005 		movsd	.LC7(%rip), %xmm0
 2182      00000000 
 2183              	.LBE463:
 2184              	.LBE462:
 265:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 2185              		.loc 2 265 0
 2186 0011 48C70300 		movq	$_ZTV12Fl_Scrollbar+16, (%rbx)
 2186      000000
 2187              	.LVL245:
 2188              	.LBB466:
 2189              	.LBB467:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2190              		.loc 1 372 0
 2191 0018 C6436E01 		movb	$1, 110(%rbx)
 2192              	.LVL246:
 2193              	.LBE467:
 2194              	.LBE466:
 2195              	.LBB468:
 2196              	.LBB469:
 390:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2197              		.loc 1 390 0
 2198 001c C743642D 		movl	$45, 100(%rbx)
 2198      000000
 2199              	.LVL247:
 2200              	.LBE469:
 2201              	.LBE468:
 2202              	.LBB470:
 2203              	.LBB471:
 102:fltk-1.3.4-1/FL/Fl_Slider.H **** 
 103:fltk-1.3.4-1/FL/Fl_Slider.H ****   /** Sets the slider box type. */
 104:fltk-1.3.4-1/FL/Fl_Slider.H ****   void slider(Fl_Boxtype c) {slider_ = c;}
 2204              		.loc 3 104 0
 2205 0023 C683A800 		movb	$2, 168(%rbx)
 2205      000002
 2206              	.LVL248:
 2207              	.LBE471:
 2208              	.LBE470:
 269:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2209              		.loc 2 269 0
 2210 002a C783AC00 		movl	$16, 172(%rbx)
 2210      00001000 
 2210      0000
 2211              	.LBB472:
 2212              	.LBB464:
 2213              		.loc 7 106 0
 2214 0034 F20F1183 		movsd	%xmm0, 152(%rbx)
 2214      98000000 
 2215              	.LBE464:
 2216              	.LBE472:
 270:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 2217              		.loc 2 270 0
 2218 003c C783B000 		movl	$0, 176(%rbx)
 2218      00000000 
 2218      0000
 2219              	.LVL249:
 2220              	.LBB473:
 2221              	.LBB465:
 2222              		.loc 7 106 0
 2223 0046 C783A000 		movl	$1, 160(%rbx)
 2223      00000100 
 2223      0000
 2224              	.LVL250:
 2225              	.LBE465:
 2226              	.LBE473:
 2227              	.LBE461:
 272:fltk-1.3.4-1/src/Fl_Scrollbar.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 2228              		.loc 2 272 0
 2229 0050 5B       		popq	%rbx
 2230              		.cfi_def_cfa_offset 8
 2231              	.LVL251:
 2232 0051 C3       		ret
 2233              		.cfi_endproc
 2234              	.LFE520:
 2236              		.section	.text.unlikely._ZN12Fl_ScrollbarC2EiiiiPKc
 2237              	.LCOLDE15:
 2238              		.section	.text._ZN12Fl_ScrollbarC2EiiiiPKc
 2239              	.LHOTE15:
 2240              		.globl	_ZN12Fl_ScrollbarC1EiiiiPKc
 2241              		.set	_ZN12Fl_ScrollbarC1EiiiiPKc,_ZN12Fl_ScrollbarC2EiiiiPKc
 2242              		.weak	_ZTS12Fl_Scrollbar
 2243              		.section	.rodata._ZTS12Fl_Scrollbar,"aG",@progbits,_ZTS12Fl_Scrollbar,comdat
 2244              		.align 8
 2247              	_ZTS12Fl_Scrollbar:
 2248 0000 3132466C 		.string	"12Fl_Scrollbar"
 2248      5F536372 
 2248      6F6C6C62 
 2248      617200
 2249              		.weak	_ZTI12Fl_Scrollbar
 2250              		.section	.rodata._ZTI12Fl_Scrollbar,"aG",@progbits,_ZTI12Fl_Scrollbar,comdat
 2251              		.align 8
 2254              	_ZTI12Fl_Scrollbar:
 2255 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 2255      00000000 
 2256 0008 00000000 		.quad	_ZTS12Fl_Scrollbar
 2256      00000000 
 2257 0010 00000000 		.quad	_ZTI9Fl_Slider
 2257      00000000 
 2258              		.weak	_ZTV12Fl_Scrollbar
 2259              		.section	.rodata._ZTV12Fl_Scrollbar,"aG",@progbits,_ZTV12Fl_Scrollbar,comdat
 2260              		.align 8
 2263              	_ZTV12Fl_Scrollbar:
 2264 0000 00000000 		.quad	0
 2264      00000000 
 2265 0008 00000000 		.quad	_ZTI12Fl_Scrollbar
 2265      00000000 
 2266 0010 00000000 		.quad	_ZN12Fl_ScrollbarD1Ev
 2266      00000000 
 2267 0018 00000000 		.quad	_ZN12Fl_ScrollbarD0Ev
 2267      00000000 
 2268 0020 00000000 		.quad	_ZN12Fl_Scrollbar4drawEv
 2268      00000000 
 2269 0028 00000000 		.quad	_ZN12Fl_Scrollbar6handleEi
 2269      00000000 
 2270 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 2270      00000000 
 2271 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 2271      00000000 
 2272 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 2272      00000000 
 2273 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 2273      00000000 
 2274 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 2274      00000000 
 2275 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 2275      00000000 
 2276 0060 00000000 		.quad	_ZN11Fl_Valuator12value_damageEv
 2276      00000000 
 2277 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 2277      00000000 
 2278              		.section	.rodata.cst8,"aM",@progbits,8
 2279              		.align 8
 2280              	.LC7:
 2281 0000 00000000 		.long	0
 2282 0004 0000F03F 		.long	1072693248
 2283              		.align 8
 2284              	.LC9:
 2285 0008 9A999999 		.long	2576980378
 2286 000c 9999A93F 		.long	1068079513
 2287              		.align 8
 2288              	.LC11:
 2289 0010 00000000 		.long	0
 2290 0014 0000E03F 		.long	1071644672
 2291              		.section	.rodata.cst4,"aM",@progbits,4
 2292              		.align 4
 2293              	.LC13:
 2294 0000 0000803F 		.long	1065353216
 2295              		.text
 2296              	.Letext0:
 2297              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 2298              	.Letext_cold0:
 2299              		.file 9 "fltk-1.3.4-1/FL/fl_types.h"
 2300              		.file 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2301              		.file 11 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2302              		.file 12 "/usr/include/libio.h"
 2303              		.file 13 "fltk-1.3.4-1/FL/Fl_Image.H"
 2304              		.file 14 "fltk-1.3.4-1/FL/Fl_Device.H"
 2305              		.file 15 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Scrollbar.cxx
     /tmp/ccWOCLk8.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccWOCLk8.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccWOCLk8.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccWOCLk8.s:92     .text._ZN12Fl_Scrollbar4drawEv:0000000000000000 _ZN12Fl_Scrollbar4drawEv
     /tmp/ccWOCLk8.s:1133   .text._ZN12Fl_ScrollbarD2Ev:0000000000000000 _ZN12Fl_ScrollbarD2Ev
     /tmp/ccWOCLk8.s:2263   .rodata._ZTV12Fl_Scrollbar:0000000000000000 _ZTV12Fl_Scrollbar
     /tmp/ccWOCLk8.s:1378   .text._ZN12Fl_Scrollbar10timeout_cbEPv:0000000000000000 _ZN12Fl_Scrollbar10timeout_cbEPv
     /tmp/ccWOCLk8.s:1133   .text._ZN12Fl_ScrollbarD2Ev:0000000000000000 _ZN12Fl_ScrollbarD1Ev
     /tmp/ccWOCLk8.s:1203   .text._ZN12Fl_ScrollbarD0Ev:0000000000000000 _ZN12Fl_ScrollbarD0Ev
     /tmp/ccWOCLk8.s:1238   .text._ZN12Fl_Scrollbar12increment_cbEv:0000000000000000 _ZN12Fl_Scrollbar12increment_cbEv
     /tmp/ccWOCLk8.s:1418   .text._ZN12Fl_Scrollbar6handleEi:0000000000000000 _ZN12Fl_Scrollbar6handleEi
     /tmp/ccWOCLk8.s:2165   .text._ZN12Fl_ScrollbarC2EiiiiPKc:0000000000000000 _ZN12Fl_ScrollbarC2EiiiiPKc
     /tmp/ccWOCLk8.s:2165   .text._ZN12Fl_ScrollbarC2EiiiiPKc:0000000000000000 _ZN12Fl_ScrollbarC1EiiiiPKc
     /tmp/ccWOCLk8.s:2247   .rodata._ZTS12Fl_Scrollbar:0000000000000000 _ZTS12Fl_Scrollbar
     /tmp/ccWOCLk8.s:2254   .rodata._ZTI12Fl_Scrollbar:0000000000000000 _ZTI12Fl_Scrollbar
     /tmp/ccWOCLk8.s:2280   .rodata.cst8:0000000000000000 .LC7
     /tmp/ccWOCLk8.s:2284   .rodata.cst8:0000000000000008 .LC9
     /tmp/ccWOCLk8.s:2288   .rodata.cst8:0000000000000010 .LC11
     /tmp/ccWOCLk8.s:2293   .rodata.cst4:0000000000000000 .LC13
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
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN9Fl_Slider4drawEiiii
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_ZNK9Fl_Widget8active_rEv
fl_graphics_driver
_ZN2Fl7scheme_E
_ZNK9Fl_Widget8draw_boxEv
_Z11fl_inactivej
_ZN2Fl14remove_timeoutEPFvPvES0_
_ZTV11Fl_Valuator
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN11Fl_Valuator5clampEd
_ZN11Fl_Valuator11handle_dragEd
_ZN2Fl11add_timeoutEdPFvPvES0_
_ZN2Fl3e_xE
_ZN2Fl3e_yE
_ZN2Fl8e_keysymE
_ZN9Fl_Widget6damageEh
_ZN11Fl_Valuator14handle_releaseEv
_ZN2Fl4e_dxE
_ZN9Fl_Slider6handleEiiiii
_ZN2Fl4e_dyE
_ZN11Fl_Valuator5valueEd
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZN9Fl_SliderC2EiiiiPKc
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Slider
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
_ZN11Fl_Valuator12value_damageEv
_ZN11Fl_Valuator6formatEPc
