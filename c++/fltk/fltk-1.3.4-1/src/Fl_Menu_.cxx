   1              		.file	"Fl_Menu_.cxx"
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
  80              		.section	.text.unlikely._ZL18first_submenu_itemP12Fl_Menu_ItemS0_,"ax",@progbits
  81              	.LCOLDB3:
  82              		.section	.text._ZL18first_submenu_itemP12Fl_Menu_ItemS0_,"ax",@progbits
  83              	.LHOTB3:
  84              		.p2align 4,,15
  86              	_ZL18first_submenu_itemP12Fl_Menu_ItemS0_:
  87              	.LFB349:
  88              		.file 2 "fltk-1.3.4-1/src/Fl_Menu_.cxx"
   1:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    1              		.file	"Fl_Menu_.cxx"
   2:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Menu_.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
  89              		.loc 2 320 0
  90              		.cfi_startproc
  91              	.LVL3:
  92 0000 4155     		pushq	%r13
  93              		.cfi_def_cfa_offset 16
  94              		.cfi_offset 13, -16
  95 0002 4154     		pushq	%r12
  96              		.cfi_def_cfa_offset 24
  97              		.cfi_offset 12, -24
  98 0004 4989F5   		movq	%rsi, %r13
  99 0007 55       		pushq	%rbp
 100              		.cfi_def_cfa_offset 32
 101              		.cfi_offset 6, -32
 102 0008 53       		pushq	%rbx
 103              		.cfi_def_cfa_offset 40
 104              		.cfi_offset 3, -40
 105 0009 4989FC   		movq	%rdi, %r12
 321:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 106              		.loc 2 321 0
 107 000c 4889F3   		movq	%rsi, %rbx
 322:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 108              		.loc 2 322 0
 109 000f 31ED     		xorl	%ebp, %ebp
 320:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 110              		.loc 2 320 0
 111 0011 4883EC08 		subq	$8, %rsp
 112              		.cfi_def_cfa_offset 48
 113 0015 EB16     		jmp	.L9
 114              	.LVL4:
 115 0017 660F1F84 		.p2align 4,,10
 115      00000000 
 115      00
 116              		.p2align 3
 117              	.L8:
 118              	.LBB202:
 119              	.LBB203:
 120              	.LBB204:
 121              	.LBB205:
 323:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 122              		.loc 2 334 0
 123 0020 83E240   		andl	$64, %edx
 335:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 124              		.loc 2 335 0
 125 0023 83FA01   		cmpl	$1, %edx
 126 0026 83DDFF   		sbbl	$-1, %ebp
 127              	.LVL5:
 128              	.L7:
 129              	.LBE205:
 130              	.LBE204:
 131              	.LBE203:
 336:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 132              		.loc 2 338 0
 133 0029 4883C338 		addq	$56, %rbx
 134              	.LVL6:
 135              	.L9:
 136              	.LBB210:
 324:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 137              		.loc 2 324 0
 138 002d 48833B00 		cmpq	$0, (%rbx)
 139 0031 742D     		je	.L17
 140              	.LBB208:
 328:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141              		.loc 2 328 0
 142 0033 4C39E3   		cmpq	%r12, %rbx
 143 0036 7438     		je	.L11
 144              	.LBB207:
 329:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 145              		.loc 2 329 0
 146 0038 8B5320   		movl	32(%rbx), %edx
 147 003b F6C220   		testb	$32, %dl
 148 003e 74E0     		je	.L8
 149              	.LVL7:
 150              	.LBB206:
 331:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 151              		.loc 2 331 0
 152 0040 488B7318 		movq	24(%rbx), %rsi
 153 0044 4C89E7   		movq	%r12, %rdi
 154 0047 E8B4FFFF 		call	_ZL18first_submenu_itemP12Fl_Menu_ItemS0_
 154      FF
 155              	.LVL8:
 332:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 156              		.loc 2 332 0
 157 004c 4885C0   		testq	%rax, %rax
 158 004f 74D8     		je	.L7
 159              	.LBE206:
 160              	.LBE207:
 161              	.LBE208:
 162              	.LBE210:
 163              	.LBE202:
 339:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 164              		.loc 2 340 0
 165 0051 4883C408 		addq	$8, %rsp
 166              		.cfi_remember_state
 167              		.cfi_def_cfa_offset 40
 168 0055 5B       		popq	%rbx
 169              		.cfi_def_cfa_offset 32
 170              	.LVL9:
 171 0056 5D       		popq	%rbp
 172              		.cfi_def_cfa_offset 24
 173              	.LVL10:
 174 0057 415C     		popq	%r12
 175              		.cfi_def_cfa_offset 16
 176              	.LVL11:
 177 0059 415D     		popq	%r13
 178              		.cfi_def_cfa_offset 8
 179              	.LVL12:
 180 005b C3       		ret
 181              	.LVL13:
 182 005c 0F1F4000 		.p2align 4,,10
 183              		.p2align 3
 184              	.L17:
 185              		.cfi_restore_state
 186              	.LBB214:
 187              	.LBB211:
 325:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 188              		.loc 2 325 0
 189 0060 85ED     		testl	%ebp, %ebp
 190 0062 741A     		je	.L10
 326:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 191              		.loc 2 326 0
 192 0064 83ED01   		subl	$1, %ebp
 193              	.LVL14:
 194 0067 EBC0     		jmp	.L7
 195 0069 0F1F8000 		.p2align 4,,10
 195      000000
 196              		.p2align 3
 197              	.L11:
 198              	.LBE211:
 199              	.LBE214:
 200              		.loc 2 340 0
 201 0070 4883C408 		addq	$8, %rsp
 202              		.cfi_remember_state
 203              		.cfi_def_cfa_offset 40
 204              	.LBB215:
 205              	.LBB212:
 206              	.LBB209:
 328:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 207              		.loc 2 328 0
 208 0074 4C89E8   		movq	%r13, %rax
 209              	.LBE209:
 210              	.LBE212:
 211              	.LBE215:
 212              		.loc 2 340 0
 213 0077 5B       		popq	%rbx
 214              		.cfi_def_cfa_offset 32
 215              	.LVL15:
 216 0078 5D       		popq	%rbp
 217              		.cfi_def_cfa_offset 24
 218              	.LVL16:
 219 0079 415C     		popq	%r12
 220              		.cfi_def_cfa_offset 16
 221              	.LVL17:
 222 007b 415D     		popq	%r13
 223              		.cfi_def_cfa_offset 8
 224              	.LVL18:
 225 007d C3       		ret
 226              	.LVL19:
 227              	.L10:
 228              		.cfi_restore_state
 229 007e 4883C408 		addq	$8, %rsp
 230              		.cfi_def_cfa_offset 40
 231              	.LBB216:
 232              	.LBB213:
 325:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 233              		.loc 2 325 0
 234 0082 31C0     		xorl	%eax, %eax
 235              	.LBE213:
 236              	.LBE216:
 237              		.loc 2 340 0
 238 0084 5B       		popq	%rbx
 239              		.cfi_def_cfa_offset 32
 240              	.LVL20:
 241 0085 5D       		popq	%rbp
 242              		.cfi_def_cfa_offset 24
 243              	.LVL21:
 244 0086 415C     		popq	%r12
 245              		.cfi_def_cfa_offset 16
 246              	.LVL22:
 247 0088 415D     		popq	%r13
 248              		.cfi_def_cfa_offset 8
 249              	.LVL23:
 250 008a C3       		ret
 251              		.cfi_endproc
 252              	.LFE349:
 254              		.section	.text.unlikely._ZL18first_submenu_itemP12Fl_Menu_ItemS0_
 255              	.LCOLDE3:
 256              		.section	.text._ZL18first_submenu_itemP12Fl_Menu_ItemS0_
 257              	.LHOTE3:
 258              		.section	.text.unlikely._ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_,"ax",@progbits
 259              		.align 2
 260              	.LCOLDB4:
 261              		.section	.text._ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_,"ax",@progbits
 262              	.LHOTB4:
 263              		.align 2
 264              		.p2align 4,,15
 265              		.globl	_ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_
 267              	_ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_:
 268              	.LFB341:
  74:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 269              		.loc 2 74 0
 270              		.cfi_startproc
 271              	.LVL24:
 272 0000 4157     		pushq	%r15
 273              		.cfi_def_cfa_offset 16
 274              		.cfi_offset 15, -16
 275 0002 4156     		pushq	%r14
 276              		.cfi_def_cfa_offset 24
 277              		.cfi_offset 14, -24
 278 0004 4989CF   		movq	%rcx, %r15
 279 0007 4155     		pushq	%r13
 280              		.cfi_def_cfa_offset 32
 281              		.cfi_offset 13, -32
 282 0009 4154     		pushq	%r12
 283              		.cfi_def_cfa_offset 40
 284              		.cfi_offset 12, -40
 285 000b 4989FE   		movq	%rdi, %r14
 286 000e 55       		pushq	%rbp
 287              		.cfi_def_cfa_offset 48
 288              		.cfi_offset 6, -48
 289 000f 53       		pushq	%rbx
 290              		.cfi_def_cfa_offset 56
 291              		.cfi_offset 3, -56
 292 0010 4989F5   		movq	%rsi, %r13
 293 0013 4883EC28 		subq	$40, %rsp
 294              		.cfi_def_cfa_offset 96
  77:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 295              		.loc 2 77 0
 296 0017 4885C9   		testq	%rcx, %rcx
  74:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 297              		.loc 2 74 0
 298 001a 89542408 		movl	%edx, 8(%rsp)
 299              	.LVL25:
  77:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 300              		.loc 2 77 0
 301 001e 0F844102 		je	.L50
 301      0000
  78:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 302              		.loc 2 78 0 discriminator 4
 303 0024 4D85C0   		testq	%r8, %r8
 304 0027 0F844802 		je	.L20
 304      0000
 305              	.LVL26:
 306              	.L52:
 307 002d 498B7E78 		movq	120(%r14), %rdi
 308              	.LVL27:
 309              	.L21:
 310 0031 4C89C3   		movq	%r8, %rbx
 311              	.LBB217:
  79:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 312              		.loc 2 79 0 discriminator 4
 313 0034 31ED     		xorl	%ebp, %ebp
 314              	.LBE217:
  76:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 315              		.loc 2 76 0 discriminator 4
 316 0036 C744240C 		movl	$0, 12(%rsp)
 316      00000000 
  75:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 317              		.loc 2 75 0 discriminator 4
 318 003e 4531E4   		xorl	%r12d, %r12d
 319 0041 E9B20000 		jmp	.L39
 319      00
 320              	.LVL28:
 321 0046 662E0F1F 		.p2align 4,,10
 321      84000000 
 321      0000
 322              		.p2align 3
 323              	.L51:
 324              	.LBB251:
 325              	.LBB218:
 326              	.LBB219:
 327              	.LBB220:
  82:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 328              		.loc 2 82 0
 329 0050 A820     		testb	$32, %al
 330 0052 0F843001 		je	.L25
 330      0000
 331              	.LBB221:
  84:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 332              		.loc 2 84 0
 333 0058 4C89EF   		movq	%r13, %rdi
 334 005b E8000000 		call	strlen
 334      00
 335              	.LVL29:
 336 0060 488B33   		movq	(%rbx), %rsi
 337 0063 48890424 		movq	%rax, (%rsp)
 338              	.LVL30:
 339 0067 488B4318 		movq	24(%rbx), %rax
  86:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 340              		.loc 2 86 0
 341 006b 4885F6   		testq	%rsi, %rsi
 342 006e 48894424 		movq	%rax, 16(%rsp)
 342      10
 343              	.LVL31:
 344 0073 7450     		je	.L26
  87:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 345              		.loc 2 87 0
 346 0075 41807D00 		cmpb	$0, 0(%r13)
 346      00
 347 007a 7421     		je	.L27
  87:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 348              		.loc 2 87 0 is_stmt 0 discriminator 1
 349 007c 4183C401 		addl	$1, %r12d
 350              	.LVL32:
 351 0080 44396424 		cmpl	%r12d, 8(%rsp)
 351      08
 352 0085 0F8EBD01 		jle	.L30
 352      0000
 353              	.LVL33:
 354              	.LBB222:
 355              	.LBB223:
 356              		.file 3 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
  60:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  61:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  62:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_GNU
  63:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  64:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (mempcpy (void *__restrict __dest, const void *__restrict __src,
  65:/usr/include/x86_64-linux-gnu/bits/string3.h **** 		size_t __len))
  66:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  67:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___mempcpy_chk (__dest, __src, __len, __bos0 (__dest));
  68:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  69:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  70:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  71:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  72:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* The first two tests here help to catch a somewhat common problem
  73:/usr/include/x86_64-linux-gnu/bits/string3.h ****    where the second and third parameter are transposed.  This is
  74:/usr/include/x86_64-linux-gnu/bits/string3.h ****    especially problematic if the intended fill value is zero.  In this
  75:/usr/include/x86_64-linux-gnu/bits/string3.h ****    case no work is done at all.  We detect these problems by referring
  76:/usr/include/x86_64-linux-gnu/bits/string3.h ****    non-existing functions.  */
  77:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  78:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memset (void *__dest, int __ch, size_t __len))
  79:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  80:/usr/include/x86_64-linux-gnu/bits/string3.h ****   /* GCC-5.0 and newer implements these checks in the compiler, so we don't
  81:/usr/include/x86_64-linux-gnu/bits/string3.h ****      need them here.  */
  82:/usr/include/x86_64-linux-gnu/bits/string3.h **** #if !__GNUC_PREREQ (5,0)
  83:/usr/include/x86_64-linux-gnu/bits/string3.h ****   if (__builtin_constant_p (__len) && __len == 0
  84:/usr/include/x86_64-linux-gnu/bits/string3.h ****       && (!__builtin_constant_p (__ch) || __ch != 0))
  85:/usr/include/x86_64-linux-gnu/bits/string3.h ****     {
  86:/usr/include/x86_64-linux-gnu/bits/string3.h ****       __warn_memset_zero_len ();
  87:/usr/include/x86_64-linux-gnu/bits/string3.h ****       return __dest;
  88:/usr/include/x86_64-linux-gnu/bits/string3.h ****     }
  89:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  90:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memset_chk (__dest, __ch, __len, __bos0 (__dest));
  91:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  92:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_MISC
  94:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
  95:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bcopy (const void *__src, void *__dest, size_t __len))
  96:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  98:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  99:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 100:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
 101:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bzero (void *__dest, size_t __len))
 102:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 103:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memset_chk (__dest, '\0', __len, __bos0 (__dest));
 104:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 105:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
 106:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 107:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 108:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strcpy (char *__restrict __dest, const char *__restrict __src))
 109:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 110:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strcpy_chk (__dest, __src, __bos (__dest));
 111:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 112:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 113:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_GNU
 114:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 115:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (stpcpy (char *__restrict __dest, const char *__restrict __src))
 116:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 117:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___stpcpy_chk (__dest, __src, __bos (__dest));
 118:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 119:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
 120:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 121:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 122:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 123:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strncpy (char *__restrict __dest, const char *__restrict __src,
 124:/usr/include/x86_64-linux-gnu/bits/string3.h **** 		size_t __len))
 125:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 126:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strncpy_chk (__dest, __src, __len, __bos (__dest));
 127:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 128:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 129:/usr/include/x86_64-linux-gnu/bits/string3.h **** // XXX We have no corresponding builtin yet.
 130:/usr/include/x86_64-linux-gnu/bits/string3.h **** extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
 131:/usr/include/x86_64-linux-gnu/bits/string3.h **** 			    size_t __destlen) __THROW;
 132:/usr/include/x86_64-linux-gnu/bits/string3.h **** extern char *__REDIRECT_NTH (__stpncpy_alias, (char *__dest, const char *__src,
 133:/usr/include/x86_64-linux-gnu/bits/string3.h **** 					       size_t __n), stpncpy);
 134:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 135:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 136:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (stpncpy (char *__dest, const char *__src, size_t __n))
 137:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 138:/usr/include/x86_64-linux-gnu/bits/string3.h ****   if (__bos (__dest) != (size_t) -1
 139:/usr/include/x86_64-linux-gnu/bits/string3.h ****       && (!__builtin_constant_p (__n) || __n > __bos (__dest)))
 140:/usr/include/x86_64-linux-gnu/bits/string3.h ****     return __stpncpy_chk (__dest, __src, __n, __bos (__dest));
 141:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __stpncpy_alias (__dest, __src, __n);
 142:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 143:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 144:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 145:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 146:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strcat (char *__restrict __dest, const char *__restrict __src))
 147:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 148:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strcat_chk (__dest, __src, __bos (__dest));
 357              		.loc 3 148 0 is_stmt 1
 358 008b 488B0424 		movq	(%rsp), %rax
 359 008f B92F0000 		movl	$47, %ecx
 359      00
 360 0094 6641894C 		movw	%cx, 0(%r13,%rax)
 360      0500
 361 009a 488B33   		movq	(%rbx), %rsi
 362              	.LVL34:
 363              	.L27:
 364              	.LBE223:
 365              	.LBE222:
  88:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 366              		.loc 2 88 0
 367 009d 4889F7   		movq	%rsi, %rdi
 368 00a0 48897424 		movq	%rsi, 24(%rsp)
 368      18
 369 00a5 E8000000 		call	strlen
 369      00
 370              	.LVL35:
 371 00aa 4101C4   		addl	%eax, %r12d
 372              	.LVL36:
 373 00ad 44396424 		cmpl	%r12d, 8(%rsp)
 373      08
 374 00b2 0F8E9001 		jle	.L30
 374      0000
 375              	.LVL37:
 376              	.LBB224:
 377              	.LBB225:
 378              		.loc 3 148 0 discriminator 2
 379 00b8 488B7424 		movq	24(%rsp), %rsi
 379      18
 380 00bd 4C89EF   		movq	%r13, %rdi
 381 00c0 E8000000 		call	strcat
 381      00
 382              	.LVL38:
 383              	.L26:
 384              	.LBE225:
 385              	.LBE224:
  90:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 386              		.loc 2 90 0
 387 00c5 4C8B4424 		movq	16(%rsp), %r8
 387      10
 388 00ca 4C89F9   		movq	%r15, %rcx
 389 00cd 4489E2   		movl	%r12d, %edx
 390 00d0 4C89EE   		movq	%r13, %rsi
 391 00d3 4C89F7   		movq	%r14, %rdi
 392 00d6 E8000000 		call	_ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_
 392      00
 393              	.LVL39:
 394 00db 85C0     		testl	%eax, %eax
 395 00dd 0F840601 		je	.L35
 395      0000
  92:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 396              		.loc 2 92 0
 397 00e3 48630424 		movslq	(%rsp), %rax
 398 00e7 41C64405 		movb	$0, 0(%r13,%rax)
 398      0000
 399              	.LVL40:
 400              	.L32:
 401 00ed 498B7E78 		movq	120(%r14), %rdi
 402              	.LBE221:
 403              	.LBE220:
 404              	.LBE219:
 405              	.LBE218:
  79:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 406              		.loc 2 79 0 discriminator 2
 407 00f1 83C501   		addl	$1, %ebp
 408              	.LVL41:
 409 00f4 4883C338 		addq	$56, %rbx
 410              	.LVL42:
 411              	.L39:
 412              	.LBB247:
 413              	.LBB248:
 341:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 414              		.loc 2 408 0 discriminator 1
 415 00f8 31C0     		xorl	%eax, %eax
 416 00fa 4885FF   		testq	%rdi, %rdi
 417 00fd 7405     		je	.L22
 409:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 418              		.loc 2 409 0
 419 00ff E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 419      00
 420              	.LVL43:
 421              	.L22:
 422              	.LBE248:
 423              	.LBE247:
  79:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 424              		.loc 2 79 0
 425 0104 39C5     		cmpl	%eax, %ebp
 426 0106 0F8D1C01 		jge	.L23
 426      0000
 427              	.LVL44:
 428 010c 8B4320   		movl	32(%rbx), %eax
 429              	.LVL45:
 430              	.LBB249:
 431              	.LBB245:
  81:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 432              		.loc 2 81 0
 433 010f 89C1     		movl	%eax, %ecx
 434 0111 83E160   		andl	$96, %ecx
 435 0114 0F8536FF 		jne	.L51
 435      FFFF
 436              	.LVL46:
 437              	.LBB232:
 101:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 438              		.loc 2 101 0
 439 011a 48833B00 		cmpq	$0, (%rbx)
 440 011e 0F84CC00 		je	.L36
 440      0000
 102:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 441              		.loc 2 102 0
 442 0124 4939DF   		cmpq	%rbx, %r15
 443 0127 75C4     		jne	.L32
 103:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 444              		.loc 2 103 0
 445 0129 448B7424 		movl	8(%rsp), %r14d
 445      08
 446              	.LVL47:
 447 012e 4183C401 		addl	$1, %r12d
 448              	.LVL48:
 449 0132 890C24   		movl	%ecx, (%rsp)
 450 0135 4539F4   		cmpl	%r14d, %r12d
 451 0138 0F8D0A01 		jge	.L30
 451      0000
 452              	.LVL49:
 453              	.LBB233:
 454              	.LBB234:
 455              		.loc 3 148 0
 456 013e 4C89EF   		movq	%r13, %rdi
 457 0141 E8000000 		call	strlen
 457      00
 458              	.LVL50:
 459 0146 4889C5   		movq	%rax, %rbp
 460              	.LVL51:
 461 0149 B82F0000 		movl	$47, %eax
 461      00
 462 014e 66418944 		movw	%ax, 0(%r13,%rbp)
 462      2D00
 463              	.LVL52:
 464 0154 498B1F   		movq	(%r15), %rbx
 465              	.LVL53:
 466              	.LBE234:
 467              	.LBE233:
 104:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 468              		.loc 2 104 0
 469 0157 4889DF   		movq	%rbx, %rdi
 470 015a E8000000 		call	strlen
 470      00
 471              	.LVL54:
 472 015f 4101C4   		addl	%eax, %r12d
 473              	.LVL55:
 474 0162 4539E6   		cmpl	%r12d, %r14d
 475 0165 0F8EDD00 		jle	.L30
 475      0000
 476              	.LVL56:
 477              	.LBB235:
 478              	.LBB236:
 479              		.loc 3 148 0 discriminator 2
 480 016b 498D7C2D 		leaq	1(%r13,%rbp), %rdi
 480      01
 481 0170 488D5001 		leaq	1(%rax), %rdx
 482 0174 4889DE   		movq	%rbx, %rsi
 483 0177 E8000000 		call	memcpy
 483      00
 484              	.LVL57:
 485              	.LBE236:
 486              	.LBE235:
 105:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 487              		.loc 2 105 0 discriminator 2
 488 017c 8B0C24   		movl	(%rsp), %ecx
 489 017f E9AE0000 		jmp	.L29
 489      00
 490              	.LVL58:
 491              		.p2align 4,,10
 492 0184 0F1F4000 		.p2align 3
 493              	.L25:
 494              	.LBE232:
 495              	.LBB241:
  95:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 496              		.loc 2 95 0
 497 0188 8344240C 		addl	$1, 12(%rsp)
 497      01
 498              	.LVL59:
  96:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 499              		.loc 2 96 0
 500 018d 41807D00 		cmpb	$0, 0(%r13)
 500      00
 501 0192 7422     		je	.L33
  96:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 502              		.loc 2 96 0 is_stmt 0 discriminator 1
 503 0194 4183C401 		addl	$1, %r12d
 504              	.LVL60:
 505 0198 44396424 		cmpl	%r12d, 8(%rsp)
 505      08
 506 019d 0F8EA500 		jle	.L30
 506      0000
 507              	.LVL61:
 508              	.LBB226:
 509              	.LBB227:
 510              		.loc 3 148 0 is_stmt 1
 511 01a3 4C89EF   		movq	%r13, %rdi
 512 01a6 E8000000 		call	strlen
 512      00
 513              	.LVL62:
 514 01ab BA2F0000 		movl	$47, %edx
 514      00
 515 01b0 66418954 		movw	%dx, 0(%r13,%rax)
 515      0500
 516              	.LVL63:
 517              	.L33:
 518 01b6 488B33   		movq	(%rbx), %rsi
 519              	.LVL64:
 520              	.LBE227:
 521              	.LBE226:
  97:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 522              		.loc 2 97 0
 523 01b9 4885F6   		testq	%rsi, %rsi
 524 01bc 7422     		je	.L34
 525              	.LVL65:
  97:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 526              		.loc 2 97 0 is_stmt 0 discriminator 1
 527 01be 4889F7   		movq	%rsi, %rdi
 528 01c1 48893424 		movq	%rsi, (%rsp)
 529 01c5 E8000000 		call	strlen
 529      00
 530              	.LVL66:
 531 01ca 4101C4   		addl	%eax, %r12d
 532              	.LVL67:
 533 01cd 44396424 		cmpl	%r12d, 8(%rsp)
 533      08
 534 01d2 7E74     		jle	.L30
 535              	.LVL68:
 536              	.LBB228:
 537              	.LBB229:
 538              		.loc 3 148 0 is_stmt 1 discriminator 3
 539 01d4 488B3424 		movq	(%rsp), %rsi
 540 01d8 4C89EF   		movq	%r13, %rdi
 541 01db E8000000 		call	strcat
 541      00
 542              	.LVL69:
 543              	.L34:
 544              	.LBE229:
 545              	.LBE228:
  98:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546              		.loc 2 98 0
 547 01e0 4939DF   		cmpq	%rbx, %r15
 548 01e3 0F8504FF 		jne	.L32
 548      FFFF
 549              	.LVL70:
 550              	.L35:
 551              	.LBB230:
  91:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 552              		.loc 2 91 0
 553 01e9 31C9     		xorl	%ecx, %ecx
 554 01eb EB45     		jmp	.L29
 555              	.LVL71:
 556 01ed 0F1F00   		.p2align 4,,10
 557              		.p2align 3
 558              	.L36:
 559              	.LBE230:
 560              	.LBE241:
 561              	.LBB242:
 562              	.LBB237:
 108:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 563              		.loc 2 108 0
 564 01f0 836C240C 		subl	$1, 12(%rsp)
 564      01
 565              	.LVL72:
 566 01f5 8B44240C 		movl	12(%rsp), %eax
 567              	.LVL73:
 568 01f9 83F8FF   		cmpl	$-1, %eax
 569 01fc 742A     		je	.L23
 570              	.LVL74:
 571              	.LBB238:
 572              	.LBB239:
 573              		.file 4 "/usr/include/string.h"
   1:/usr/include/string.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/string.h ****    This file is part of the GNU C Library.
   3:/usr/include/string.h **** 
   4:/usr/include/string.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/string.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/string.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/string.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/string.h **** 
   9:/usr/include/string.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/string.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/string.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/string.h ****    Lesser General Public License for more details.
  13:/usr/include/string.h **** 
  14:/usr/include/string.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/string.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/string.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/string.h **** 
  18:/usr/include/string.h **** /*
  19:/usr/include/string.h ****  *	ISO C99 Standard: 7.21 String handling	<string.h>
  20:/usr/include/string.h ****  */
  21:/usr/include/string.h **** 
  22:/usr/include/string.h **** #ifndef	_STRING_H
  23:/usr/include/string.h **** #define	_STRING_H	1
  24:/usr/include/string.h **** 
  25:/usr/include/string.h **** #include <features.h>
  26:/usr/include/string.h **** 
  27:/usr/include/string.h **** __BEGIN_DECLS
  28:/usr/include/string.h **** 
  29:/usr/include/string.h **** /* Get size_t and NULL from <stddef.h>.  */
  30:/usr/include/string.h **** #define	__need_size_t
  31:/usr/include/string.h **** #define	__need_NULL
  32:/usr/include/string.h **** #include <stddef.h>
  33:/usr/include/string.h **** 
  34:/usr/include/string.h **** /* Tell the caller that we provide correct C++ prototypes.  */
  35:/usr/include/string.h **** #if defined __cplusplus && __GNUC_PREREQ (4, 4)
  36:/usr/include/string.h **** # define __CORRECT_ISO_CPP_STRING_H_PROTO
  37:/usr/include/string.h **** #endif
  38:/usr/include/string.h **** 
  39:/usr/include/string.h **** 
  40:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  41:/usr/include/string.h **** /* Copy N bytes of SRC to DEST.  */
  42:/usr/include/string.h **** extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
  43:/usr/include/string.h **** 		     size_t __n) __THROW __nonnull ((1, 2));
  44:/usr/include/string.h **** /* Copy N bytes of SRC to DEST, guaranteeing
  45:/usr/include/string.h ****    correct behavior for overlapping strings.  */
  46:/usr/include/string.h **** extern void *memmove (void *__dest, const void *__src, size_t __n)
  47:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  48:/usr/include/string.h **** __END_NAMESPACE_STD
  49:/usr/include/string.h **** 
  50:/usr/include/string.h **** /* Copy no more than N bytes of SRC to DEST, stopping when C is found.
  51:/usr/include/string.h ****    Return the position in DEST one byte past where C was copied,
  52:/usr/include/string.h ****    or NULL if C was not found in the first N bytes of SRC.  */
  53:/usr/include/string.h **** #if defined __USE_MISC || defined __USE_XOPEN
  54:/usr/include/string.h **** extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
  55:/usr/include/string.h **** 		      int __c, size_t __n)
  56:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  57:/usr/include/string.h **** #endif /* Misc || X/Open.  */
  58:/usr/include/string.h **** 
  59:/usr/include/string.h **** 
  60:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  61:/usr/include/string.h **** /* Set N bytes of S to C.  */
  62:/usr/include/string.h **** extern void *memset (void *__s, int __c, size_t __n) __THROW __nonnull ((1));
  63:/usr/include/string.h **** 
  64:/usr/include/string.h **** /* Compare N bytes of S1 and S2.  */
  65:/usr/include/string.h **** extern int memcmp (const void *__s1, const void *__s2, size_t __n)
  66:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
  67:/usr/include/string.h **** 
  68:/usr/include/string.h **** /* Search N bytes of S for C.  */
  69:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
  70:/usr/include/string.h **** extern "C++"
  71:/usr/include/string.h **** {
  72:/usr/include/string.h **** extern void *memchr (void *__s, int __c, size_t __n)
  73:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  74:/usr/include/string.h **** extern const void *memchr (const void *__s, int __c, size_t __n)
  75:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  76:/usr/include/string.h **** 
  77:/usr/include/string.h **** # ifdef __OPTIMIZE__
  78:/usr/include/string.h **** __extern_always_inline void *
  79:/usr/include/string.h **** memchr (void *__s, int __c, size_t __n) __THROW
  80:/usr/include/string.h **** {
  81:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  82:/usr/include/string.h **** }
  83:/usr/include/string.h **** 
  84:/usr/include/string.h **** __extern_always_inline const void *
  85:/usr/include/string.h **** memchr (const void *__s, int __c, size_t __n) __THROW
  86:/usr/include/string.h **** {
  87:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  88:/usr/include/string.h **** }
  89:/usr/include/string.h **** # endif
  90:/usr/include/string.h **** }
  91:/usr/include/string.h **** #else
  92:/usr/include/string.h **** extern void *memchr (const void *__s, int __c, size_t __n)
  93:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
  94:/usr/include/string.h **** #endif
  95:/usr/include/string.h **** __END_NAMESPACE_STD
  96:/usr/include/string.h **** 
  97:/usr/include/string.h **** #ifdef __USE_GNU
  98:/usr/include/string.h **** /* Search in S for C.  This is similar to `memchr' but there is no
  99:/usr/include/string.h ****    length limit.  */
 100:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 101:/usr/include/string.h **** extern "C++" void *rawmemchr (void *__s, int __c)
 102:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 103:/usr/include/string.h **** extern "C++" const void *rawmemchr (const void *__s, int __c)
 104:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 105:/usr/include/string.h **** # else
 106:/usr/include/string.h **** extern void *rawmemchr (const void *__s, int __c)
 107:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 108:/usr/include/string.h **** # endif
 109:/usr/include/string.h **** 
 110:/usr/include/string.h **** /* Search N bytes of S for the final occurrence of C.  */
 111:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 112:/usr/include/string.h **** extern "C++" void *memrchr (void *__s, int __c, size_t __n)
 113:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 114:/usr/include/string.h **** extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
 115:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 116:/usr/include/string.h **** # else
 117:/usr/include/string.h **** extern void *memrchr (const void *__s, int __c, size_t __n)
 118:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
 119:/usr/include/string.h **** # endif
 120:/usr/include/string.h **** #endif
 121:/usr/include/string.h **** 
 122:/usr/include/string.h **** 
 123:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 124:/usr/include/string.h **** /* Copy SRC to DEST.  */
 125:/usr/include/string.h **** extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
 126:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 127:/usr/include/string.h **** /* Copy no more than N characters of SRC to DEST.  */
 128:/usr/include/string.h **** extern char *strncpy (char *__restrict __dest,
 129:/usr/include/string.h **** 		      const char *__restrict __src, size_t __n)
 130:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 131:/usr/include/string.h **** 
 132:/usr/include/string.h **** /* Append SRC onto DEST.  */
 133:/usr/include/string.h **** extern char *strcat (char *__restrict __dest, const char *__restrict __src)
 134:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 135:/usr/include/string.h **** /* Append no more than N characters from SRC onto DEST.  */
 136:/usr/include/string.h **** extern char *strncat (char *__restrict __dest, const char *__restrict __src,
 137:/usr/include/string.h **** 		      size_t __n) __THROW __nonnull ((1, 2));
 138:/usr/include/string.h **** 
 139:/usr/include/string.h **** /* Compare S1 and S2.  */
 140:/usr/include/string.h **** extern int strcmp (const char *__s1, const char *__s2)
 141:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 142:/usr/include/string.h **** /* Compare N characters of S1 and S2.  */
 143:/usr/include/string.h **** extern int strncmp (const char *__s1, const char *__s2, size_t __n)
 144:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 145:/usr/include/string.h **** 
 146:/usr/include/string.h **** /* Compare the collated forms of S1 and S2.  */
 147:/usr/include/string.h **** extern int strcoll (const char *__s1, const char *__s2)
 148:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 149:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 150:/usr/include/string.h **** extern size_t strxfrm (char *__restrict __dest,
 151:/usr/include/string.h **** 		       const char *__restrict __src, size_t __n)
 152:/usr/include/string.h ****      __THROW __nonnull ((2));
 153:/usr/include/string.h **** __END_NAMESPACE_STD
 154:/usr/include/string.h **** 
 155:/usr/include/string.h **** #ifdef __USE_XOPEN2K8
 156:/usr/include/string.h **** /* The following functions are equivalent to the both above but they
 157:/usr/include/string.h ****    take the locale they use for the collation as an extra argument.
 158:/usr/include/string.h ****    This is not standardsized but something like will come.  */
 159:/usr/include/string.h **** # include <xlocale.h>
 160:/usr/include/string.h **** 
 161:/usr/include/string.h **** /* Compare the collated forms of S1 and S2 using rules from L.  */
 162:/usr/include/string.h **** extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
 163:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2, 3));
 164:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 165:/usr/include/string.h **** extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
 166:/usr/include/string.h **** 			 __locale_t __l) __THROW __nonnull ((2, 4));
 167:/usr/include/string.h **** #endif
 168:/usr/include/string.h **** 
 169:/usr/include/string.h **** #if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
 170:/usr/include/string.h **** /* Duplicate S, returning an identical malloc'd string.  */
 171:/usr/include/string.h **** extern char *strdup (const char *__s)
 172:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 173:/usr/include/string.h **** #endif
 174:/usr/include/string.h **** 
 175:/usr/include/string.h **** /* Return a malloc'd copy of at most N bytes of STRING.  The
 176:/usr/include/string.h ****    resultant string is terminated even if no null terminator
 177:/usr/include/string.h ****    appears before STRING[N].  */
 178:/usr/include/string.h **** #if defined __USE_XOPEN2K8
 179:/usr/include/string.h **** extern char *strndup (const char *__string, size_t __n)
 180:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 181:/usr/include/string.h **** #endif
 182:/usr/include/string.h **** 
 183:/usr/include/string.h **** #if defined __USE_GNU && defined __GNUC__
 184:/usr/include/string.h **** /* Duplicate S, returning an identical alloca'd string.  */
 185:/usr/include/string.h **** # define strdupa(s)							      \
 186:/usr/include/string.h ****   (__extension__							      \
 187:/usr/include/string.h ****     ({									      \
 188:/usr/include/string.h ****       const char *__old = (s);						      \
 189:/usr/include/string.h ****       size_t __len = strlen (__old) + 1;				      \
 190:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len);			      \
 191:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 192:/usr/include/string.h ****     }))
 193:/usr/include/string.h **** 
 194:/usr/include/string.h **** /* Return an alloca'd copy of at most N bytes of string.  */
 195:/usr/include/string.h **** # define strndupa(s, n)							      \
 196:/usr/include/string.h ****   (__extension__							      \
 197:/usr/include/string.h ****     ({									      \
 198:/usr/include/string.h ****       const char *__old = (s);						      \
 199:/usr/include/string.h ****       size_t __len = strnlen (__old, (n));				      \
 200:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len + 1);		      \
 201:/usr/include/string.h ****       __new[__len] = '\0';						      \
 202:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 203:/usr/include/string.h ****     }))
 204:/usr/include/string.h **** #endif
 205:/usr/include/string.h **** 
 206:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 207:/usr/include/string.h **** /* Find the first occurrence of C in S.  */
 208:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 209:/usr/include/string.h **** extern "C++"
 210:/usr/include/string.h **** {
 211:/usr/include/string.h **** extern char *strchr (char *__s, int __c)
 212:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 213:/usr/include/string.h **** extern const char *strchr (const char *__s, int __c)
 214:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 215:/usr/include/string.h **** 
 216:/usr/include/string.h **** # ifdef __OPTIMIZE__
 217:/usr/include/string.h **** __extern_always_inline char *
 218:/usr/include/string.h **** strchr (char *__s, int __c) __THROW
 219:/usr/include/string.h **** {
 220:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 221:/usr/include/string.h **** }
 222:/usr/include/string.h **** 
 223:/usr/include/string.h **** __extern_always_inline const char *
 224:/usr/include/string.h **** strchr (const char *__s, int __c) __THROW
 225:/usr/include/string.h **** {
 226:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 227:/usr/include/string.h **** }
 228:/usr/include/string.h **** # endif
 229:/usr/include/string.h **** }
 230:/usr/include/string.h **** #else
 231:/usr/include/string.h **** extern char *strchr (const char *__s, int __c)
 232:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 233:/usr/include/string.h **** #endif
 234:/usr/include/string.h **** /* Find the last occurrence of C in S.  */
 235:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 236:/usr/include/string.h **** extern "C++"
 237:/usr/include/string.h **** {
 238:/usr/include/string.h **** extern char *strrchr (char *__s, int __c)
 239:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 240:/usr/include/string.h **** extern const char *strrchr (const char *__s, int __c)
 241:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 242:/usr/include/string.h **** 
 243:/usr/include/string.h **** # ifdef __OPTIMIZE__
 244:/usr/include/string.h **** __extern_always_inline char *
 245:/usr/include/string.h **** strrchr (char *__s, int __c) __THROW
 246:/usr/include/string.h **** {
 247:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 574              		.loc 4 247 0
 575 01fe BE2F0000 		movl	$47, %esi
 575      00
 576 0203 4C89EF   		movq	%r13, %rdi
 577 0206 E8000000 		call	strrchr
 577      00
 578              	.LVL75:
 579              	.LBE239:
 580              	.LBE238:
 113:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 581              		.loc 2 113 0
 582 020b 4885C0   		testq	%rax, %rax
 583 020e 7448     		je	.L38
 113:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 584              		.loc 2 113 0 is_stmt 0 discriminator 1
 585 0210 C60000   		movb	$0, (%rax)
 586 0213 4C89EF   		movq	%r13, %rdi
 587 0216 E8000000 		call	strlen
 587      00
 588              	.LVL76:
 589 021b 4189C4   		movl	%eax, %r12d
 590              	.LVL77:
 591 021e E9CAFEFF 		jmp	.L32
 591      FF
 592              	.LVL78:
 593              		.p2align 4,,10
 594 0223 0F1F4400 		.p2align 3
 594      00
 595              	.L23:
 109:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 596              		.loc 2 109 0 is_stmt 1
 597 0228 41C64500 		movb	$0, 0(%r13)
 597      00
 110:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 598              		.loc 2 110 0
 599 022d B9FFFFFF 		movl	$-1, %ecx
 599      FF
 600              	.LVL79:
 601              	.L29:
 602              	.LBE237:
 603              	.LBE242:
 604              	.LBE245:
 605              	.LBE249:
 606              	.LBE251:
 121:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 607              		.loc 2 121 0
 608 0232 4883C428 		addq	$40, %rsp
 609              		.cfi_remember_state
 610              		.cfi_def_cfa_offset 56
 611 0236 89C8     		movl	%ecx, %eax
 612 0238 5B       		popq	%rbx
 613              		.cfi_def_cfa_offset 48
 614 0239 5D       		popq	%rbp
 615              		.cfi_def_cfa_offset 40
 616 023a 415C     		popq	%r12
 617              		.cfi_def_cfa_offset 32
 618              	.LVL80:
 619 023c 415D     		popq	%r13
 620              		.cfi_def_cfa_offset 24
 621              	.LVL81:
 622 023e 415E     		popq	%r14
 623              		.cfi_def_cfa_offset 16
 624 0240 415F     		popq	%r15
 625              		.cfi_def_cfa_offset 8
 626              	.LVL82:
 627 0242 C3       		ret
 628              	.LVL83:
 629              		.p2align 4,,10
 630 0243 0F1F4400 		.p2align 3
 630      00
 631              	.L30:
 632              		.cfi_restore_state
 633              	.LBB252:
 634              	.LBB250:
 635              	.LBB246:
 636              	.LBB243:
 637              	.LBB231:
  87:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 638              		.loc 2 87 0 discriminator 2
 639 0248 41C64500 		movb	$0, 0(%r13)
 639      00
 640 024d B9FEFFFF 		movl	$-2, %ecx
 640      FF
 641 0252 EBDE     		jmp	.L29
 642              	.LVL84:
 643              		.p2align 4,,10
 644 0254 0F1F4000 		.p2align 3
 645              	.L38:
 646              	.LBE231:
 647              	.LBE243:
 648              	.LBB244:
 649              	.LBB240:
 114:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 650              		.loc 2 114 0
 651 0258 41C64500 		movb	$0, 0(%r13)
 651      00
 652              	.LVL85:
 653 025d 4531E4   		xorl	%r12d, %r12d
 654 0260 E988FEFF 		jmp	.L32
 654      FF
 655              	.LVL86:
 656              	.L50:
 657              	.LBE240:
 658              	.LBE244:
 659              	.LBE246:
 660              	.LBE250:
 661              	.LBE252:
  78:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 662              		.loc 2 78 0 discriminator 1
 663 0265 4D85C0   		testq	%r8, %r8
 664 0268 4C8BBF80 		movq	128(%rdi), %r15
 664      000000
 665              	.LVL87:
 666 026f 0F85B8FD 		jne	.L52
 666      FFFF
 667              	.LVL88:
 668              	.L20:
 669 0275 4D8B4678 		movq	120(%r14), %r8
 670              	.LVL89:
 671 0279 4C89C7   		movq	%r8, %rdi
 672              	.LVL90:
 673 027c E9B0FDFF 		jmp	.L21
 673      FF
 674              		.cfi_endproc
 675              	.LFE341:
 677              		.section	.text.unlikely._ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_
 678              	.LCOLDE4:
 679              		.section	.text._ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_
 680              	.LHOTE4:
 681              		.section	.text.unlikely._ZNK8Fl_Menu_13item_pathnameEPciPK12Fl_Menu_Item,"ax",@progbits
 682              		.align 2
 683              	.LCOLDB5:
 684              		.section	.text._ZNK8Fl_Menu_13item_pathnameEPciPK12Fl_Menu_Item,"ax",@progbits
 685              	.LHOTB5:
 686              		.align 2
 687              		.p2align 4,,15
 688              		.globl	_ZNK8Fl_Menu_13item_pathnameEPciPK12Fl_Menu_Item
 690              	_ZNK8Fl_Menu_13item_pathnameEPciPK12Fl_Menu_Item:
 691              	.LFB340:
  65:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 692              		.loc 2 65 0
 693              		.cfi_startproc
 694              	.LVL91:
  66:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 695              		.loc 2 66 0
 696 0000 C60600   		movb	$0, (%rsi)
  67:fltk-1.3.4-1/src/Fl_Menu_.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 697              		.loc 2 67 0
 698 0003 4C8B4778 		movq	120(%rdi), %r8
 699 0007 E9000000 		jmp	_ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_
 699      00
 700              	.LVL92:
 701              		.cfi_endproc
 702              	.LFE340:
 704              		.section	.text.unlikely._ZNK8Fl_Menu_13item_pathnameEPciPK12Fl_Menu_Item
 705              	.LCOLDE5:
 706              		.section	.text._ZNK8Fl_Menu_13item_pathnameEPciPK12Fl_Menu_Item
 707              	.LHOTE5:
 708              		.section	.text.unlikely._ZNK8Fl_Menu_10find_indexEPK12Fl_Menu_Item,"ax",@progbits
 709              		.align 2
 710              	.LCOLDB6:
 711              		.section	.text._ZNK8Fl_Menu_10find_indexEPK12Fl_Menu_Item,"ax",@progbits
 712              	.LHOTB6:
 713              		.align 2
 714              		.p2align 4,,15
 715              		.globl	_ZNK8Fl_Menu_10find_indexEPK12Fl_Menu_Item
 717              	_ZNK8Fl_Menu_10find_indexEPK12Fl_Menu_Item:
 718              	.LFB343:
 182:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 719              		.loc 2 182 0
 720              		.cfi_startproc
 721              	.LVL93:
 722 0000 4154     		pushq	%r12
 723              		.cfi_def_cfa_offset 16
 724              		.cfi_offset 12, -16
 725 0002 55       		pushq	%rbp
 726              		.cfi_def_cfa_offset 24
 727              		.cfi_offset 6, -24
 728 0003 53       		pushq	%rbx
 729              		.cfi_def_cfa_offset 32
 730              		.cfi_offset 3, -32
 183:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 731              		.loc 2 183 0
 732 0004 4C8B6778 		movq	120(%rdi), %r12
 733              	.LVL94:
 734              	.LBB253:
 735              	.LBB254:
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 736              		.loc 2 408 0
 737 0008 4D85E4   		testq	%r12, %r12
 738 000b 7443     		je	.L57
 739 000d 4889FD   		movq	%rdi, %rbp
 740              		.loc 2 409 0
 741 0010 4C89E7   		movq	%r12, %rdi
 742              	.LVL95:
 743 0013 4889F3   		movq	%rsi, %rbx
 744 0016 E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 744      00
 745              	.LVL96:
 746              	.LBE254:
 747              	.LBE253:
 184:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 748              		.loc 2 184 0
 749 001b 4898     		cltq
 750 001d 488B5578 		movq	120(%rbp), %rdx
 751 0021 488D0CC5 		leaq	0(,%rax,8), %rcx
 751      00000000 
 752 0029 48C1E006 		salq	$6, %rax
 753              	.LVL97:
 754 002d 4829C8   		subq	%rcx, %rax
 755 0030 4C01E0   		addq	%r12, %rax
 756 0033 4839C3   		cmpq	%rax, %rbx
 757 0036 7318     		jnb	.L57
 758 0038 4839DA   		cmpq	%rbx, %rdx
 759 003b 7713     		ja	.L57
 185:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 760              		.loc 2 185 0
 761 003d 4829D3   		subq	%rdx, %rbx
 762              	.LVL98:
 763 0040 48C1FB03 		sarq	$3, %rbx
 764 0044 69C3B76D 		imull	$-1227133513, %ebx, %eax
 764      DBB6
 186:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 765              		.loc 2 186 0
 766 004a 5B       		popq	%rbx
 767              		.cfi_remember_state
 768              		.cfi_def_cfa_offset 24
 769 004b 5D       		popq	%rbp
 770              		.cfi_def_cfa_offset 16
 771              	.LVL99:
 772 004c 415C     		popq	%r12
 773              		.cfi_def_cfa_offset 8
 774 004e C3       		ret
 775 004f 90       		.p2align 4,,10
 776              		.p2align 3
 777              	.L57:
 778              		.cfi_restore_state
 779 0050 5B       		popq	%rbx
 780              		.cfi_def_cfa_offset 24
 184:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 781              		.loc 2 184 0
 782 0051 B8FFFFFF 		movl	$-1, %eax
 782      FF
 186:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 783              		.loc 2 186 0
 784 0056 5D       		popq	%rbp
 785              		.cfi_def_cfa_offset 16
 786 0057 415C     		popq	%r12
 787              		.cfi_def_cfa_offset 8
 788 0059 C3       		ret
 789              		.cfi_endproc
 790              	.LFE343:
 792              		.section	.text.unlikely._ZNK8Fl_Menu_10find_indexEPK12Fl_Menu_Item
 793              	.LCOLDE6:
 794              		.section	.text._ZNK8Fl_Menu_10find_indexEPK12Fl_Menu_Item
 795              	.LHOTE6:
 796              		.section	.text.unlikely._ZNK8Fl_Menu_10find_indexEPFvP9Fl_WidgetPvE,"ax",@progbits
 797              		.align 2
 798              	.LCOLDB7:
 799              		.section	.text._ZNK8Fl_Menu_10find_indexEPFvP9Fl_WidgetPvE,"ax",@progbits
 800              	.LHOTB7:
 801              		.align 2
 802              		.p2align 4,,15
 803              		.globl	_ZNK8Fl_Menu_10find_indexEPFvP9Fl_WidgetPvE
 805              	_ZNK8Fl_Menu_10find_indexEPFvP9Fl_WidgetPvE:
 806              	.LFB344:
 200:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 807              		.loc 2 200 0
 808              		.cfi_startproc
 809              	.LVL100:
 810 0000 4155     		pushq	%r13
 811              		.cfi_def_cfa_offset 16
 812              		.cfi_offset 13, -16
 813 0002 4154     		pushq	%r12
 814              		.cfi_def_cfa_offset 24
 815              		.cfi_offset 12, -24
 816 0004 4989F5   		movq	%rsi, %r13
 817 0007 55       		pushq	%rbp
 818              		.cfi_def_cfa_offset 32
 819              		.cfi_offset 6, -32
 820 0008 53       		pushq	%rbx
 821              		.cfi_def_cfa_offset 40
 822              		.cfi_offset 3, -40
 823 0009 4989FC   		movq	%rdi, %r12
 824 000c 31ED     		xorl	%ebp, %ebp
 825              	.LBB255:
 201:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 826              		.loc 2 201 0
 827 000e 31DB     		xorl	%ebx, %ebx
 828              	.LBE255:
 200:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 829              		.loc 2 200 0
 830 0010 4883EC08 		subq	$8, %rsp
 831              		.cfi_def_cfa_offset 48
 832 0014 488B7F78 		movq	120(%rdi), %rdi
 833              	.LVL101:
 834 0018 EB1C     		jmp	.L62
 835              	.LVL102:
 836 001a 660F1F44 		.p2align 4,,10
 836      0000
 837              		.p2align 3
 838              	.L68:
 839              	.LBB258:
 202:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 840              		.loc 2 202 0
 841 0020 498B7C24 		movq	120(%r12), %rdi
 841      78
 842 0025 488B442F 		movq	16(%rdi,%rbp), %rax
 842      10
 843 002a 4883C538 		addq	$56, %rbp
 844 002e 4C39E8   		cmpq	%r13, %rax
 845 0031 742D     		je	.L65
 201:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 846              		.loc 2 201 0 discriminator 2
 847 0033 83C301   		addl	$1, %ebx
 848              	.LVL103:
 849              	.L62:
 850              	.LBB256:
 851              	.LBB257:
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 852              		.loc 2 408 0 discriminator 1
 853 0036 31C0     		xorl	%eax, %eax
 854 0038 4885FF   		testq	%rdi, %rdi
 855 003b 7405     		je	.L60
 856              		.loc 2 409 0
 857 003d E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 857      00
 858              	.LVL104:
 859              	.L60:
 860              	.LBE257:
 861              	.LBE256:
 201:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 862              		.loc 2 201 0
 863 0042 39C3     		cmpl	%eax, %ebx
 864 0044 7CDA     		jl	.L68
 865              	.LBE258:
 205:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 866              		.loc 2 205 0
 867 0046 4883C408 		addq	$8, %rsp
 868              		.cfi_remember_state
 869              		.cfi_def_cfa_offset 40
 204:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 870              		.loc 2 204 0
 871 004a B8FFFFFF 		movl	$-1, %eax
 871      FF
 205:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 872              		.loc 2 205 0
 873 004f 5B       		popq	%rbx
 874              		.cfi_def_cfa_offset 32
 875              	.LVL105:
 876 0050 5D       		popq	%rbp
 877              		.cfi_def_cfa_offset 24
 878 0051 415C     		popq	%r12
 879              		.cfi_def_cfa_offset 16
 880              	.LVL106:
 881 0053 415D     		popq	%r13
 882              		.cfi_def_cfa_offset 8
 883              	.LVL107:
 884 0055 C3       		ret
 885              	.LVL108:
 886 0056 662E0F1F 		.p2align 4,,10
 886      84000000 
 886      0000
 887              		.p2align 3
 888              	.L65:
 889              		.cfi_restore_state
 890 0060 4883C408 		addq	$8, %rsp
 891              		.cfi_def_cfa_offset 40
 892              	.LBB259:
 893 0064 89D8     		movl	%ebx, %eax
 894              	.LBE259:
 895 0066 5B       		popq	%rbx
 896              		.cfi_def_cfa_offset 32
 897              	.LVL109:
 898 0067 5D       		popq	%rbp
 899              		.cfi_def_cfa_offset 24
 900 0068 415C     		popq	%r12
 901              		.cfi_def_cfa_offset 16
 902              	.LVL110:
 903 006a 415D     		popq	%r13
 904              		.cfi_def_cfa_offset 8
 905              	.LVL111:
 906 006c C3       		ret
 907              		.cfi_endproc
 908              	.LFE344:
 910              		.section	.text.unlikely._ZNK8Fl_Menu_10find_indexEPFvP9Fl_WidgetPvE
 911              	.LCOLDE7:
 912              		.section	.text._ZNK8Fl_Menu_10find_indexEPFvP9Fl_WidgetPvE
 913              	.LHOTE7:
 914              		.section	.rodata.str1.1,"aMS",@progbits,1
 915              	.LC8:
 916 0000 2F00     		.string	"/"
 917              		.section	.text.unlikely._ZNK8Fl_Menu_10find_indexEPKc,"ax",@progbits
 918              		.align 2
 919              	.LCOLDB9:
 920              		.section	.text._ZNK8Fl_Menu_10find_indexEPKc,"ax",@progbits
 921              	.LHOTB9:
 922              		.align 2
 923              		.p2align 4,,15
 924              		.globl	_ZNK8Fl_Menu_10find_indexEPKc
 926              	_ZNK8Fl_Menu_10find_indexEPKc:
 927              	.LFB345:
 220:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 928              		.loc 2 220 0
 929              		.cfi_startproc
 930              	.LVL112:
 931 0000 4157     		pushq	%r15
 932              		.cfi_def_cfa_offset 16
 933              		.cfi_offset 15, -16
 934 0002 4156     		pushq	%r14
 935              		.cfi_def_cfa_offset 24
 936              		.cfi_offset 14, -24
 937 0004 4989FE   		movq	%rdi, %r14
 938 0007 4155     		pushq	%r13
 939              		.cfi_def_cfa_offset 32
 940              		.cfi_offset 13, -32
 941 0009 4154     		pushq	%r12
 942              		.cfi_def_cfa_offset 40
 943              		.cfi_offset 12, -40
 221:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 944              		.loc 2 221 0
 945 000b B97F0000 		movl	$127, %ecx
 945      00
 220:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 946              		.loc 2 220 0
 947 0010 55       		pushq	%rbp
 948              		.cfi_def_cfa_offset 48
 949              		.cfi_offset 6, -48
 950 0011 53       		pushq	%rbx
 951              		.cfi_def_cfa_offset 56
 952              		.cfi_offset 3, -56
 953 0012 4989F7   		movq	%rsi, %r15
 221:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 954              		.loc 2 221 0
 955 0015 4531ED   		xorl	%r13d, %r13d
 956              	.LBB260:
 222:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 957              		.loc 2 222 0
 958 0018 4531E4   		xorl	%r12d, %r12d
 959              	.LBE260:
 220:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 960              		.loc 2 220 0
 961 001b 4881EC18 		subq	$2072, %rsp
 961      080000
 962              		.cfi_def_cfa_offset 2128
 963 0022 498B5E78 		movq	120(%r14), %rbx
 220:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 964              		.loc 2 220 0
 965 0026 64488B04 		movq	%fs:40, %rax
 965      25280000 
 965      00
 966 002f 48898424 		movq	%rax, 2056(%rsp)
 966      08080000 
 967 0037 31C0     		xorl	%eax, %eax
 221:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 968              		.loc 2 221 0
 969 0039 488D7C24 		leaq	8(%rsp), %rdi
 969      08
 970              	.LVL113:
 971 003e 48C70424 		movq	$0, (%rsp)
 971      00000000 
 972 0046 F348AB   		rep stosq
 973              	.LVL114:
 974 0049 EB3F     		jmp	.L80
 975              	.LVL115:
 976 004b 0F1F4400 		.p2align 4,,10
 976      00
 977              		.p2align 3
 978              	.L89:
 979              	.LBB282:
 980              	.LBB261:
 981              	.LBB262:
 227:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 982              		.loc 2 227 0
 983 0050 803C2400 		cmpb	$0, (%rsp)
 984 0054 0F85D600 		jne	.L88
 984      0000
 985              	.L73:
 986              	.LVL116:
 228:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 987              		.loc 2 228 0
 988 005a 488B7500 		movq	0(%rbp), %rsi
 989 005e BA000400 		movl	$1024, %edx
 989      00
 990 0063 4889E7   		movq	%rsp, %rdi
 991 0066 E8000000 		call	fl_strlcat
 991      00
 992              	.LVL117:
 229:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 993              		.loc 2 229 0
 994 006b 4C89FE   		movq	%r15, %rsi
 995 006e 4889E7   		movq	%rsp, %rdi
 996 0071 E8000000 		call	strcmp
 996      00
 997              	.LVL118:
 998 0076 85C0     		testl	%eax, %eax
 999 0078 0F848600 		je	.L84
 999      0000
 1000              	.LVL119:
 1001              	.L79:
 1002 007e 498B5E78 		movq	120(%r14), %rbx
 1003              	.L74:
 1004              	.LBE262:
 1005              	.LBE261:
 222:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 1006              		.loc 2 222 0 discriminator 2
 1007 0082 4183C401 		addl	$1, %r12d
 1008              	.LVL120:
 1009 0086 4983C538 		addq	$56, %r13
 1010              	.LVL121:
 1011              	.L80:
 1012              	.LBB278:
 1013              	.LBB279:
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 1014              		.loc 2 408 0 discriminator 1
 1015 008a 31C0     		xorl	%eax, %eax
 1016 008c 4885DB   		testq	%rbx, %rbx
 1017 008f 7408     		je	.L70
 1018              		.loc 2 409 0
 1019 0091 4889DF   		movq	%rbx, %rdi
 1020 0094 E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 1020      00
 1021              	.LVL122:
 1022              	.L70:
 1023              	.LBE279:
 1024              	.LBE278:
 222:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 1025              		.loc 2 222 0
 1026 0099 4139C4   		cmpl	%eax, %r12d
 1027 009c 0F8DCE00 		jge	.L83
 1027      0000
 1028              	.LBB280:
 223:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1029              		.loc 2 223 0
 1030 00a2 498B5E78 		movq	120(%r14), %rbx
 1031 00a6 4A8D2C2B 		leaq	(%rbx,%r13), %rbp
 1032              	.LVL123:
 1033              	.LBB276:
 224:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 1034              		.loc 2 224 0
 1035 00aa F6452040 		testb	$64, 32(%rbp)
 1036 00ae 75A0     		jne	.L89
 1037              	.LVL124:
 1038              	.LBB263:
 1039              	.LBB264:
 231:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 1040              		.loc 2 231 0
 1041 00b0 48837D00 		cmpq	$0, 0(%rbp)
 1041      00
 1042 00b5 7459     		je	.L90
 1043              	.LVL125:
 1044              	.LBE264:
 1045              	.LBB269:
 1046              	.LBB270:
 110:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1047              		.loc 3 110 0
 1048 00b7 488DBC24 		leaq	1024(%rsp), %rdi
 1048      00040000 
 1049              	.LVL126:
 1050 00bf BA000400 		movl	$1024, %edx
 1050      00
 1051 00c4 4889E6   		movq	%rsp, %rsi
 1052 00c7 E8000000 		call	__strcpy_chk
 1052      00
 1053              	.LVL127:
 1054              	.LBE270:
 1055              	.LBE269:
 241:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 1056              		.loc 2 241 0
 1057 00cc 80BC2400 		cmpb	$0, 1024(%rsp)
 1057      04000000 
 1058 00d4 757A     		jne	.L91
 1059              	.L78:
 1060              	.LVL128:
 242:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 1061              		.loc 2 242 0
 1062 00d6 488B7500 		movq	0(%rbp), %rsi
 1063 00da 488DBC24 		leaq	1024(%rsp), %rdi
 1063      00040000 
 1064 00e2 BA000400 		movl	$1024, %edx
 1064      00
 1065 00e7 E8000000 		call	fl_strlcat
 1065      00
 1066              	.LVL129:
 243:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1067              		.loc 2 243 0
 1068 00ec 488DBC24 		leaq	1024(%rsp), %rdi
 1068      00040000 
 1069 00f4 4C89FE   		movq	%r15, %rsi
 1070 00f7 E8000000 		call	strcmp
 1070      00
 1071              	.LVL130:
 1072 00fc 85C0     		testl	%eax, %eax
 1073 00fe 0F857AFF 		jne	.L79
 1073      FFFF
 1074              	.LVL131:
 1075              	.L84:
 1076              	.LBE263:
 1077 0104 4489E0   		movl	%r12d, %eax
 1078 0107 EB6C     		jmp	.L71
 1079              	.LVL132:
 1080 0109 0F1F8000 		.p2align 4,,10
 1080      000000
 1081              		.p2align 3
 1082              	.L90:
 1083              	.LBB273:
 1084              	.LBB271:
 1085              	.LBB265:
 1086              	.LBB266:
 1087              	.LBB267:
 1088              		.loc 4 247 0
 1089 0110 BE2F0000 		movl	$47, %esi
 1089      00
 1090 0115 4889E7   		movq	%rsp, %rdi
 1091 0118 E8000000 		call	strrchr
 1091      00
 1092              	.LVL133:
 1093              	.LBE267:
 1094              	.LBE266:
 234:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1095              		.loc 2 234 0
 1096 011d 4885C0   		testq	%rax, %rax
 1097 0120 747E     		je	.L76
 234:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1098              		.loc 2 234 0 is_stmt 0 discriminator 1
 1099 0122 C60000   		movb	$0, (%rax)
 1100 0125 E958FFFF 		jmp	.L74
 1100      FF
 1101              	.LVL134:
 1102 012a 660F1F44 		.p2align 4,,10
 1102      0000
 1103              		.p2align 3
 1104              	.L88:
 1105              	.LBE265:
 1106              	.LBE271:
 1107              	.LBE273:
 227:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 1108              		.loc 2 227 0 is_stmt 1 discriminator 1
 1109 0130 BA000400 		movl	$1024, %edx
 1109      00
 1110 0135 BE000000 		movl	$.LC8, %esi
 1110      00
 1111 013a 4889E7   		movq	%rsp, %rdi
 1112 013d E8000000 		call	fl_strlcat
 1112      00
 1113              	.LVL135:
 1114 0142 E913FFFF 		jmp	.L73
 1114      FF
 1115              	.LVL136:
 1116 0147 660F1F84 		.p2align 4,,10
 1116      00000000 
 1116      00
 1117              		.p2align 3
 1118              	.L91:
 1119              	.LBB274:
 241:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 1120              		.loc 2 241 0 discriminator 1
 1121 0150 488DBC24 		leaq	1024(%rsp), %rdi
 1121      00040000 
 1122 0158 BA000400 		movl	$1024, %edx
 1122      00
 1123 015d BE000000 		movl	$.LC8, %esi
 1123      00
 1124 0162 E8000000 		call	fl_strlcat
 1124      00
 1125              	.LVL137:
 1126 0167 E96AFFFF 		jmp	.L78
 1126      FF
 1127              	.LVL138:
 1128 016c 0F1F4000 		.p2align 4,,10
 1129              		.p2align 3
 1130              	.L83:
 1131              	.LBE274:
 1132              	.LBE276:
 1133              	.LBE280:
 1134              	.LBE282:
 246:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 1135              		.loc 2 246 0
 1136 0170 B8FFFFFF 		movl	$-1, %eax
 1136      FF
 1137              	.L71:
 247:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1138              		.loc 2 247 0
 1139 0175 488B8C24 		movq	2056(%rsp), %rcx
 1139      08080000 
 1140 017d 6448330C 		xorq	%fs:40, %rcx
 1140      25280000 
 1140      00
 1141 0186 7521     		jne	.L92
 1142 0188 4881C418 		addq	$2072, %rsp
 1142      080000
 1143              		.cfi_remember_state
 1144              		.cfi_def_cfa_offset 56
 1145 018f 5B       		popq	%rbx
 1146              		.cfi_def_cfa_offset 48
 1147 0190 5D       		popq	%rbp
 1148              		.cfi_def_cfa_offset 40
 1149 0191 415C     		popq	%r12
 1150              		.cfi_def_cfa_offset 32
 1151              	.LVL139:
 1152 0193 415D     		popq	%r13
 1153              		.cfi_def_cfa_offset 24
 1154 0195 415E     		popq	%r14
 1155              		.cfi_def_cfa_offset 16
 1156              	.LVL140:
 1157 0197 415F     		popq	%r15
 1158              		.cfi_def_cfa_offset 8
 1159              	.LVL141:
 1160 0199 C3       		ret
 1161              	.LVL142:
 1162 019a 660F1F44 		.p2align 4,,10
 1162      0000
 1163              		.p2align 3
 1164              	.L76:
 1165              		.cfi_restore_state
 1166              	.LBB283:
 1167              	.LBB281:
 1168              	.LBB277:
 1169              	.LBB275:
 1170              	.LBB272:
 1171              	.LBB268:
 235:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 1172              		.loc 2 235 0
 1173 01a0 C6042400 		movb	$0, (%rsp)
 1174 01a4 E9D9FEFF 		jmp	.L74
 1174      FF
 1175              	.LVL143:
 1176              	.L92:
 1177              	.LBE268:
 1178              	.LBE272:
 1179              	.LBE275:
 1180              	.LBE277:
 1181              	.LBE281:
 1182              	.LBE283:
 247:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1183              		.loc 2 247 0
 1184 01a9 E8000000 		call	__stack_chk_fail
 1184      00
 1185              	.LVL144:
 1186              		.cfi_endproc
 1187              	.LFE345:
 1189              		.section	.text.unlikely._ZNK8Fl_Menu_10find_indexEPKc
 1190              	.LCOLDE9:
 1191              		.section	.text._ZNK8Fl_Menu_10find_indexEPKc
 1192              	.LHOTE9:
 1193              		.section	.text.unlikely._ZN8Fl_Menu_9find_itemEPKc,"ax",@progbits
 1194              		.align 2
 1195              	.LCOLDB10:
 1196              		.section	.text._ZN8Fl_Menu_9find_itemEPKc,"ax",@progbits
 1197              	.LHOTB10:
 1198              		.align 2
 1199              		.p2align 4,,15
 1200              		.globl	_ZN8Fl_Menu_9find_itemEPKc
 1202              	_ZN8Fl_Menu_9find_itemEPKc:
 1203              	.LFB342:
 151:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1204              		.loc 2 151 0
 1205              		.cfi_startproc
 1206              	.LVL145:
 1207 0000 53       		pushq	%rbx
 1208              		.cfi_def_cfa_offset 16
 1209              		.cfi_offset 3, -16
 151:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1210              		.loc 2 151 0
 1211 0001 4889FB   		movq	%rdi, %rbx
 152:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 1212              		.loc 2 152 0
 1213 0004 E8000000 		call	_ZNK8Fl_Menu_10find_indexEPKc
 1213      00
 1214              	.LVL146:
 153:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1215              		.loc 2 153 0
 1216 0009 83F8FF   		cmpl	$-1, %eax
 1217 000c 741A     		je	.L95
 153:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1218              		.loc 2 153 0 is_stmt 0 discriminator 1
 1219 000e 4898     		cltq
 1220 0010 488D14C5 		leaq	0(,%rax,8), %rdx
 1220      00000000 
 1221 0018 48C1E006 		salq	$6, %rax
 1222              	.LVL147:
 1223 001c 4829D0   		subq	%rdx, %rax
 1224 001f 48034378 		addq	120(%rbx), %rax
 154:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1225              		.loc 2 154 0 is_stmt 1 discriminator 1
 1226 0023 5B       		popq	%rbx
 1227              		.cfi_remember_state
 1228              		.cfi_def_cfa_offset 8
 1229              	.LVL148:
 1230 0024 C3       		ret
 1231              	.LVL149:
 1232              		.p2align 4,,10
 1233 0025 0F1F00   		.p2align 3
 1234              	.L95:
 1235              		.cfi_restore_state
 153:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1236              		.loc 2 153 0
 1237 0028 31C0     		xorl	%eax, %eax
 1238              	.LVL150:
 154:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1239              		.loc 2 154 0
 1240 002a 5B       		popq	%rbx
 1241              		.cfi_def_cfa_offset 8
 1242              	.LVL151:
 1243 002b C3       		ret
 1244              		.cfi_endproc
 1245              	.LFE342:
 1247              		.section	.text.unlikely._ZN8Fl_Menu_9find_itemEPKc
 1248              	.LCOLDE10:
 1249              		.section	.text._ZN8Fl_Menu_9find_itemEPKc
 1250              	.LHOTE10:
 1251              		.section	.text.unlikely._ZN8Fl_Menu_9find_itemEPFvP9Fl_WidgetPvE,"ax",@progbits
 1252              		.align 2
 1253              	.LCOLDB11:
 1254              		.section	.text._ZN8Fl_Menu_9find_itemEPFvP9Fl_WidgetPvE,"ax",@progbits
 1255              	.LHOTB11:
 1256              		.align 2
 1257              		.p2align 4,,15
 1258              		.globl	_ZN8Fl_Menu_9find_itemEPFvP9Fl_WidgetPvE
 1260              	_ZN8Fl_Menu_9find_itemEPFvP9Fl_WidgetPvE:
 1261              	.LFB346:
 261:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 1262              		.loc 2 261 0
 1263              		.cfi_startproc
 1264              	.LVL152:
 1265 0000 4155     		pushq	%r13
 1266              		.cfi_def_cfa_offset 16
 1267              		.cfi_offset 13, -16
 1268 0002 4154     		pushq	%r12
 1269              		.cfi_def_cfa_offset 24
 1270              		.cfi_offset 12, -24
 1271 0004 4989F5   		movq	%rsi, %r13
 1272 0007 55       		pushq	%rbp
 1273              		.cfi_def_cfa_offset 32
 1274              		.cfi_offset 6, -32
 1275 0008 53       		pushq	%rbx
 1276              		.cfi_def_cfa_offset 40
 1277              		.cfi_offset 3, -40
 1278 0009 4989FC   		movq	%rdi, %r12
 1279 000c 31DB     		xorl	%ebx, %ebx
 1280              	.LBB284:
 262:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1281              		.loc 2 262 0
 1282 000e 31ED     		xorl	%ebp, %ebp
 1283              	.LBE284:
 261:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 1284              		.loc 2 261 0
 1285 0010 4883EC08 		subq	$8, %rsp
 1286              		.cfi_def_cfa_offset 48
 1287 0014 488B7F78 		movq	120(%rdi), %rdi
 1288              	.LVL153:
 1289 0018 EB1C     		jmp	.L100
 1290              	.LVL154:
 1291 001a 660F1F44 		.p2align 4,,10
 1291      0000
 1292              		.p2align 3
 1293              	.L106:
 1294              	.LBB288:
 1295              	.LBB285:
 263:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 1296              		.loc 2 263 0
 1297 0020 498B7C24 		movq	120(%r12), %rdi
 1297      78
 1298 0025 488D041F 		leaq	(%rdi,%rbx), %rax
 1299              	.LVL155:
 1300 0029 4883C338 		addq	$56, %rbx
 264:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1301              		.loc 2 264 0
 1302 002d 4C396810 		cmpq	%r13, 16(%rax)
 1303 0031 7415     		je	.L99
 1304              	.LBE285:
 262:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1305              		.loc 2 262 0 discriminator 2
 1306 0033 83C501   		addl	$1, %ebp
 1307              	.LVL156:
 1308              	.L100:
 1309              	.LBB286:
 1310              	.LBB287:
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 1311              		.loc 2 408 0 discriminator 1
 1312 0036 31C0     		xorl	%eax, %eax
 1313 0038 4885FF   		testq	%rdi, %rdi
 1314 003b 7405     		je	.L98
 1315              		.loc 2 409 0
 1316 003d E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 1316      00
 1317              	.LVL157:
 1318              	.L98:
 1319              	.LBE287:
 1320              	.LBE286:
 262:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1321              		.loc 2 262 0
 1322 0042 39C5     		cmpl	%eax, %ebp
 1323 0044 7CDA     		jl	.L106
 1324              	.LBE288:
 268:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 1325              		.loc 2 268 0
 1326 0046 31C0     		xorl	%eax, %eax
 1327              	.L99:
 269:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1328              		.loc 2 269 0
 1329 0048 4883C408 		addq	$8, %rsp
 1330              		.cfi_def_cfa_offset 40
 1331 004c 5B       		popq	%rbx
 1332              		.cfi_def_cfa_offset 32
 1333 004d 5D       		popq	%rbp
 1334              		.cfi_def_cfa_offset 24
 1335              	.LVL158:
 1336 004e 415C     		popq	%r12
 1337              		.cfi_def_cfa_offset 16
 1338              	.LVL159:
 1339 0050 415D     		popq	%r13
 1340              		.cfi_def_cfa_offset 8
 1341              	.LVL160:
 1342 0052 C3       		ret
 1343              		.cfi_endproc
 1344              	.LFE346:
 1346              		.section	.text.unlikely._ZN8Fl_Menu_9find_itemEPFvP9Fl_WidgetPvE
 1347              	.LCOLDE11:
 1348              		.section	.text._ZN8Fl_Menu_9find_itemEPFvP9Fl_WidgetPvE
 1349              	.LHOTE11:
 1350              		.section	.text.unlikely._ZN8Fl_Menu_5valueEPK12Fl_Menu_Item,"ax",@progbits
 1351              		.align 2
 1352              	.LCOLDB12:
 1353              		.section	.text._ZN8Fl_Menu_5valueEPK12Fl_Menu_Item,"ax",@progbits
 1354              	.LHOTB12:
 1355              		.align 2
 1356              		.p2align 4,,15
 1357              		.globl	_ZN8Fl_Menu_5valueEPK12Fl_Menu_Item
 1359              	_ZN8Fl_Menu_5valueEPK12Fl_Menu_Item:
 1360              	.LFB347:
 277:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1361              		.loc 2 277 0
 1362              		.cfi_startproc
 1363              	.LVL161:
 1364              	.LBB289:
 1365              	.LBB290:
 791:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1366              		.loc 1 791 0
 1367 0000 8167607F 		andl	$-129, 96(%rdi)
 1367      FFFFFF
 1368              	.LBE290:
 1369              	.LBE289:
 279:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1370              		.loc 2 279 0
 1371 0007 4839B780 		cmpq	%rsi, 128(%rdi)
 1371      000000
 1372 000e 7410     		je	.L109
 279:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1373              		.loc 2 279 0 is_stmt 0 discriminator 1
 1374 0010 4889B780 		movq	%rsi, 128(%rdi)
 1374      000000
 1375 0017 B8010000 		movl	$1, %eax
 1375      00
 1376 001c C3       		ret
 1377 001d 0F1F00   		.p2align 4,,10
 1378              		.p2align 3
 1379              	.L109:
 280:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 1380              		.loc 2 280 0 is_stmt 1
 1381 0020 31C0     		xorl	%eax, %eax
 281:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1382              		.loc 2 281 0
 1383 0022 C3       		ret
 1384              		.cfi_endproc
 1385              	.LFE347:
 1387              		.section	.text.unlikely._ZN8Fl_Menu_5valueEPK12Fl_Menu_Item
 1388              	.LCOLDE12:
 1389              		.section	.text._ZN8Fl_Menu_5valueEPK12Fl_Menu_Item
 1390              	.LHOTE12:
 1391              		.section	.text.unlikely._ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item,"ax",@progbits
 1392              		.align 2
 1393              	.LCOLDB13:
 1394              		.section	.text._ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item,"ax",@progbits
 1395              	.LHOTB13:
 1396              		.align 2
 1397              		.p2align 4,,15
 1398              		.globl	_ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item
 1400              	_ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item:
 1401              	.LFB350:
 344:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1402              		.loc 2 344 0
 1403              		.cfi_startproc
 1404              	.LVL162:
 1405 0000 4883EC08 		subq	$8, %rsp
 1406              		.cfi_def_cfa_offset 16
 344:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1407              		.loc 2 344 0
 1408 0004 4989F0   		movq	%rsi, %r8
 346:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 1409              		.loc 2 346 0
 1410 0007 488B7778 		movq	120(%rdi), %rsi
 1411              	.LVL163:
 1412 000b 4C89C7   		movq	%r8, %rdi
 1413              	.LVL164:
 1414 000e E8000000 		call	_ZL18first_submenu_itemP12Fl_Menu_ItemS0_
 1414      00
 1415              	.LVL165:
 347:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1416              		.loc 2 347 0
 1417 0013 4885C0   		testq	%rax, %rax
 1418 0016 7475     		je	.L110
 348:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 1419              		.loc 2 348 0
 1420 0018 418B5020 		movl	32(%r8), %edx
 1421 001c 89D1     		movl	%edx, %ecx
 1422 001e 83C90C   		orl	$12, %ecx
 351:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1423              		.loc 2 351 0
 1424 0021 81E28000 		andl	$128, %edx
 1424      0000
 348:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 1425              		.loc 2 348 0
 1426 0027 41894820 		movl	%ecx, 32(%r8)
 1427              	.LVL166:
 351:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1428              		.loc 2 351 0
 1429 002b 753D     		jne	.L115
 1430              	.LVL167:
 353:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1431              		.loc 2 353 0
 1432 002d 49837838 		cmpq	$0, 56(%r8)
 1432      00
 1433 0032 7436     		je	.L115
 1434 0034 418B4858 		movl	88(%r8), %ecx
 1435              	.LVL168:
 1436 0038 F6C108   		testb	$8, %cl
 1437 003b 742D     		je	.L115
 352:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 1438              		.loc 2 352 0
 1439 003d 498D5038 		leaq	56(%r8), %rdx
 1440              	.LVL169:
 1441              		.p2align 4,,10
 1442 0041 0F1F8000 		.p2align 3
 1442      000000
 1443              	.L117:
 1444              	.LBB291:
 1445              	.LBB292:
 1446              		.file 5 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
   1:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   2:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // "$Id: Fl_Menu_Item.H 11786 2016-06-18 00:32:18Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   4:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Menu item header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   6:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   8:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  12:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  14:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  16:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  18:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  19:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #ifndef Fl_Menu_Item_H
  20:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #define Fl_Menu_Item_H
  21:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  22:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  include "Fl_Widget.H"
  23:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  include "Fl_Image.H"
  24:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  25:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  if defined(__APPLE__) && defined(check)
  26:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #    undef check
  27:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  endif
  28:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  29:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // doxygen needs the following line to enable e.g. ::FL_MENU_TOGGLE to link to the enums
  30:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** /// @file
  31:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  32:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** enum { // values for flags:
  33:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_INACTIVE = 1,		///< Deactivate menu item (gray out)
  34:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_TOGGLE= 2,		///< Item is a checkbox toggle (shows checkbox for on/off state)
  35:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_VALUE = 4,		///< The on/off state for checkbox/radio buttons (if set, state is 'on')
  36:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_RADIO = 8,		///< Item is a radio button (one checkbox of many can be on)
  37:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_INVISIBLE = 0x10,	///< Item will not show up (shortcut will work)
  38:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_SUBMENU_POINTER = 0x20,	///< Indicates user_data() is a pointer to another menu array
  39:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_SUBMENU = 0x40,		///< This item is a submenu to other items
  40:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_DIVIDER = 0x80,	///< Creates divider line below this item. Also ends a group of radio but
  41:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_HORIZONTAL = 0x100	///< ??? -- reserved
  42:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** };
  43:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  44:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** extern FL_EXPORT Fl_Shortcut fl_old_shortcut(const char*);
  45:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  46:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** class Fl_Menu_;
  47:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  48:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** /**
  49:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   The Fl_Menu_Item structure defines a single menu item that
  50:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   is used by the Fl_Menu_ class.  
  51:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \code
  52:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   struct Fl_Menu_Item {
  53:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    const char*   text;     // label()
  54:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    ulong         shortcut_;
  55:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    Fl_Callback*  callback_;
  56:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    void*         user_data_;
  57:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    int           flags;
  58:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labeltype_;
  59:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelfont_;
  60:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelsize_;
  61:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelcolor_;
  62:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   };
  63:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   
  64:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   enum { // values for flags:
  65:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_INACTIVE   = 1,      // Deactivate menu item (gray out)
  66:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_TOGGLE     = 2,      // Item is a checkbox toggle (shows checkbox for on/off state)
  67:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_VALUE      = 4,      // The on/off state for checkbox/radio buttons (if set, state is 'o
  68:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_RADIO      = 8,      // Item is a radio button (one checkbox of many can be on)
  69:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_INVISIBLE  = 0x10,   // Item will not show up (shortcut will work)
  70:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_SUBMENU_POINTER = 0x20,   // Indicates user_data() is a pointer to another menu array
  71:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_SUBMENU         = 0x40,   // This item is a submenu to other items
  72:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_DIVIDER    = 0x80,   // Creates divider line below this item. Also ends a group of radio
  73:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_HORIZONTAL = 0x100   // ??? -- reserved
  74:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   };
  75:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \endcode
  76:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Typically menu items are statically defined; for example:
  77:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \code
  78:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item popup[] = {
  79:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&alpha",    FL_ALT+'a', the_cb, (void*)1},
  80:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&beta",     FL_ALT+'b', the_cb, (void*)2},
  81:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"gamma",     FL_ALT+'c', the_cb, (void*)3, FL_MENU_DIVIDER},
  82:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&strange",  0,          strange_cb},
  83:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&charm",    0,          charm_cb},
  84:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&truth",    0,          truth_cb},
  85:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"b&eauty",   0,          beauty_cb},
  86:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"sub&menu",  0,          0, 0, FL_SUBMENU},
  87:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"one"},
  88:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"two"},
  89:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"three"},
  90:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {0},
  91:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"inactive", FL_ALT+'i', 0, 0, FL_MENU_INACTIVE|FL_MENU_DIVIDER},
  92:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"invisible",FL_ALT+'i', 0, 0, FL_MENU_INVISIBLE},
  93:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"check",    FL_ALT+'i', 0, 0, FL_MENU_TOGGLE|FL_MENU_VALUE},
  94:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"box",      FL_ALT+'i', 0, 0, FL_MENU_TOGGLE},
  95:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {0}};
  96:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \endcode
  97:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   produces:
  98:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  99:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \image html   menu.png
 100:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \image latex  menu.png "menu" width=10cm
 101:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 102:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   A submenu title is identified by the bit FL_SUBMENU in the 
 103:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   flags field, and ends with a label() that is NULL.
 104:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   You can nest menus to any depth.  A pointer to the first item in the
 105:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   submenu can be treated as an Fl_Menu array itself.  It is also
 106:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   possible to make separate submenu arrays with FL_SUBMENU_POINTER flags.
 107:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 108:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   You should use the method functions to access structure members and
 109:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   not access them directly to avoid compatibility problems with future
 110:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   releases of FLTK.
 111:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** */
 112:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** struct FL_EXPORT Fl_Menu_Item {
 113:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const char *text;	    ///< menu item text, returned by label()
 114:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int shortcut_;	    ///< menu item shortcut
 115:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Callback *callback_;   ///< menu item callback
 116:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void *user_data_;	    ///< menu item user_data for the menu's callback
 117:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int flags;		    ///< menu item flags like FL_MENU_TOGGLE, FL_MENU_RADIO
 118:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   uchar labeltype_;	    ///< how the menu item text looks like
 119:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Font labelfont_;	    ///< which font for this menu item text
 120:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Fontsize labelsize_;   ///< size of menu item text
 121:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Color labelcolor_;	    ///< menu item text color
 122:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 123:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // advance N items, skipping submenus:
 124:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item *next(int=1) const;
 125:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 126:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 127:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Advances a pointer by n items through a menu array, skipping
 128:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the contents of submenus and invisible items. There are two calls so
 129:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     that you can advance through const and non-const data.
 130:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 131:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item *next(int i=1) {
 132:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     return (Fl_Menu_Item*)(((const Fl_Menu_Item*)this)->next(i));}
 133:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 134:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns the first menu item, same as next(0). */
 135:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item *first() const { return next(0); }
 136:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 137:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns the first menu item, same as next(0). */
 138:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item *first() { return next(0); }
 139:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 140:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // methods on menu items:
 141:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 142:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns the title of the item.
 143:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A NULL here indicates the end of the menu (or of a submenu).
 144:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A '&' in the item will print an underscore under the next letter,
 145:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and if the menu is popped up that letter will be a "shortcut" to pick
 146:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     that item.  To get a real '&' put two in a row.
 147:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 148:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const char* label() const {return text;}
 149:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 150:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**    See const char* Fl_Menu_Item::label() const   */
 151:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void label(const char* a) {text=a;}
 152:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 153:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**    See const char* Fl_Menu_Item::label() const   */
 154:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void label(Fl_Labeltype a,const char* b) {labeltype_ = a; text = b;}
 155:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 156:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 157:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns the menu item's labeltype.
 158:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A labeltype identifies a routine that draws the label of the
 159:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     widget.  This can be used for special effects such as emboss, or to use
 160:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the label() pointer as another form of data such as a bitmap.
 161:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The value FL_NORMAL_LABEL prints the label as text.
 162:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 163:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)labeltype_;}
 164:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 165:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 166:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's labeltype.
 167:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A labeltype identifies a routine that draws the label of the
 168:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     widget.  This can be used for special effects such as emboss, or to use
 169:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the label() pointer as another form of data such as a bitmap.
 170:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The value FL_NORMAL_LABEL prints the label as text.
 171:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 172:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void labeltype(Fl_Labeltype a) {labeltype_ = a;}
 173:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 174:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 175:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Gets the menu item's label color.
 176:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This color is passed to the labeltype routine, and is typically the
 177:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     color of the label text.  This defaults to FL_BLACK.  If this
 178:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     color is not black fltk will \b not use overlay bitplanes to draw
 179:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the menu - this is so that images put in the menu draw correctly.
 180:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 181:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Color labelcolor() const {return labelcolor_;}
 182:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 183:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 184:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's label color.
 185:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Color Fl_Menu_Item::labelcolor() const
 186:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 187:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void labelcolor(Fl_Color a) {labelcolor_ = a;}
 188:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 189:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Gets the menu item's label font.
 190:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Fonts are identified by small 8-bit indexes into a table. See the
 191:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     enumeration list for predefined fonts. The default value is a
 192:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Helvetica font. The function Fl::set_font() can define new fonts.
 193:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 194:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Font labelfont() const {return labelfont_;}
 195:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 196:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 197:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's label font.
 198:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Fonts are identified by small 8-bit indexes into a table. See the
 199:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     enumeration list for predefined fonts. The default value is a
 200:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Helvetica font.  The function Fl::set_font() can define new fonts.
 201:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 202:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void labelfont(Fl_Font a) {labelfont_ = a;}
 203:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 204:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Gets the label font pixel size/height. */
 205:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Fontsize labelsize() const {return labelsize_;}
 206:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 207:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Sets the label font pixel size/height.*/
 208:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void labelsize(Fl_Fontsize a) {labelsize_ = a;}
 209:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 210:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 211:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns the callback function that is set for the menu item.
 212:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Each item has space for a callback function and an argument for that
 213:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     function. Due to back compatibility, the Fl_Menu_Item itself
 214:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     is not passed to the callback, instead you have to get it by calling
 215:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     ((Fl_Menu_*)w)->mvalue() where w is the widget argument.
 216:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 217:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Callback_p callback() const {return callback_;}
 218:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 219:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 220:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's callback function and userdata() argument.
 221:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Callback_p Fl_MenuItem::callback() const
 222:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 223:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void callback(Fl_Callback* c, void* p) {callback_=c; user_data_=p;}
 224:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 225:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 226:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's callback function.
 227:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This method does not set the userdata() argument.
 228:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Callback_p Fl_MenuItem::callback() const
 229:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    */
 230:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void callback(Fl_Callback* c) {callback_=c;}
 231:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 232:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 233:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's callback function.
 234:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This method does not set the userdata() argument.
 235:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Callback_p Fl_MenuItem::callback() const
 236:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    */
 237:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void callback(Fl_Callback0*c) {callback_=(Fl_Callback*)c;}
 238:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 239:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 240:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's callback function and userdata() argument.
 241:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This method does not set the userdata() argument.
 242:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The argument \p is cast to void* and stored as the userdata()
 243:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     for the menu item's callback function.
 244:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Callback_p Fl_MenuItem::callback() const
 245:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    */
 246:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void callback(Fl_Callback1*c, long p=0) {callback_=(Fl_Callback*)c; user_data_=(void*)(fl_intptr_
 247:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 248:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 249:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Gets the user_data() argument that is sent to the callback function.
 250:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 251:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void* user_data() const {return user_data_;}
 252:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 253:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the user_data() argument that is sent to the callback function.
 254:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 255:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void user_data(void* v) {user_data_ = v;}
 256:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 257:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Gets the user_data() argument that is sent to the callback function.
 258:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     For convenience you can also define the callback as taking a long
 259:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     argument.  This method casts the stored userdata() argument to long
 260:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and returns it as a \e long value.
 261:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 262:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   long argument() const {return (long)(fl_intptr_t)user_data_;}
 263:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 264:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the user_data() argument that is sent to the callback function.
 265:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     For convenience you can also define the callback as taking a long
 266:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     argument.  This method casts the given argument \p v to void*
 267:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and stores it in the menu item's userdata() member.
 268:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This may not be portable to some machines.
 269:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 270:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 271:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 272:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Gets what key combination shortcut will trigger the menu item. */
 273:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int shortcut() const {return shortcut_;}
 274:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 275:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 276:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets exactly what key combination will trigger the menu item.  The
 277:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     value is a logical 'or' of a key and a set of shift flags, for instance 
 278:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     FL_ALT+'a' or FL_ALT+FL_F+10 or just 'a'.  A value of
 279:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     zero disables the shortcut.
 280:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 281:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The key can be any value returned by Fl::event_key(), but will usually 
 282:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     be an ASCII letter. Use a lower-case letter unless you require the shift 
 283:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     key to be held down.
 284:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 285:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The shift flags can be any set of values accepted by Fl::event_state().
 286:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     If the bit is on that shift key must be pushed.  Meta, Alt, Ctrl, 
 287:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and Shift must be off if they are not in the shift flags (zero for the 
 288:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     other bits indicates a "don't care" setting).
 289:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 290:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void shortcut(int s) {shortcut_ = s;}
 291:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 292:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns true if either FL_SUBMENU or FL_SUBMENU_POINTER
 293:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     is on in the flags. FL_SUBMENU indicates an embedded submenu
 294:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     that goes from the next item through the next one with a NULL
 295:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     label(). FL_SUBMENU_POINTER indicates that user_data()
 296:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     is a pointer to another menu array.
 297:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 298:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int submenu() const {return flags&(FL_SUBMENU|FL_SUBMENU_POINTER);}
 299:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 300:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns true if a checkbox will be drawn next to this item.
 301:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This is true if FL_MENU_TOGGLE or FL_MENU_RADIO is set in the flags.
 302:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 303:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int checkbox() const {return flags&FL_MENU_TOGGLE;}
 304:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 305:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns true if this item is a radio item.
 306:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     When a radio button is selected all "adjacent" radio buttons are
 307:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     turned off.  A set of radio items is delimited by an item that has
 308:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     radio() false, or by an item with FL_MENU_DIVIDER turned on.
 309:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 310:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int radio() const {return flags&FL_MENU_RADIO;}
 311:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns the current value of the check or radio item.
 312:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       This is zero (0) if the menu item is not checked and
 313:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       non-zero otherwise. You should not rely on a particular value,
 314:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       only zero or non-zero.
 315:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       \note The returned value for a checked menu item as of FLTK 1.3.2
 316:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       is FL_MENU_VALUE (4), but may be 1 in a future version.
 317:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 318:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int value() const {return flags&FL_MENU_VALUE;}
 319:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 320:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Turns the check or radio item "on" for the menu item. Note that this
 321:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     does not turn off any adjacent radio items like set_only() does.
 322:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 323:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void set() {flags |= FL_MENU_VALUE;}
 324:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 325:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Turns the check or radio item "off" for the menu item. */
 326:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void clear() {flags &= ~FL_MENU_VALUE;}
 1447              		.loc 5 326 0
 1448 0048 89CE     		movl	%ecx, %esi
 1449 004a 83E6FB   		andl	$-5, %esi
 1450              	.LBE292:
 1451              	.LBE291:
 351:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1452              		.loc 2 351 0
 1453 004d 81E18000 		andl	$128, %ecx
 1453      0000
 1454              	.LBB294:
 1455              	.LBB293:
 1456              		.loc 5 326 0
 1457 0053 897220   		movl	%esi, 32(%rdx)
 1458              	.LBE293:
 1459              	.LBE294:
 351:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1460              		.loc 2 351 0
 1461 0056 7512     		jne	.L115
 352:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 1462              		.loc 2 352 0
 1463 0058 4883C238 		addq	$56, %rdx
 1464              	.LVL170:
 353:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1465              		.loc 2 353 0
 1466 005c 48833A00 		cmpq	$0, (%rdx)
 1467 0060 7408     		je	.L115
 1468 0062 8B4A20   		movl	32(%rdx), %ecx
 1469              	.LVL171:
 353:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1470              		.loc 2 353 0 is_stmt 0 discriminator 2
 1471 0065 F6C108   		testb	$8, %cl
 1472 0068 75DE     		jne	.L117
 1473              	.LVL172:
 1474              	.L115:
 356:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1475              		.loc 2 356 0 is_stmt 1
 1476 006a 498D50C8 		leaq	-56(%r8), %rdx
 1477              	.LVL173:
 1478 006e 4839D0   		cmpq	%rdx, %rax
 1479 0071 771A     		ja	.L110
 358:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1480              		.loc 2 358 0
 1481 0073 498378C8 		cmpq	$0, -56(%r8)
 1481      00
 1482 0078 7413     		je	.L110
 1483 007a 418B48E8 		movl	-24(%r8), %ecx
 1484 007e F6C180   		testb	$-128, %cl
 1485 0081 750A     		jne	.L110
 1486              		.p2align 4,,10
 1487 0083 0F1F4400 		.p2align 3
 1487      00
 1488              	.L140:
 1489              	.LVL174:
 358:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1490              		.loc 2 358 0 is_stmt 0 discriminator 4
 1491 0088 83E108   		andl	$8, %ecx
 1492 008b 750B     		jne	.L144
 1493              	.LVL175:
 1494              	.L110:
 361:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 1495              		.loc 2 361 0 is_stmt 1
 1496 008d 4883C408 		addq	$8, %rsp
 1497              		.cfi_remember_state
 1498              		.cfi_def_cfa_offset 8
 1499 0091 C3       		ret
 1500              	.LVL176:
 1501              		.p2align 4,,10
 1502 0092 660F1F44 		.p2align 3
 1502      0000
 1503              	.L144:
 1504              		.cfi_restore_state
 1505              	.LBB295:
 1506              	.LBB296:
 1507              		.loc 5 326 0
 1508 0098 836220FB 		andl	$-5, 32(%rdx)
 1509              	.LBE296:
 1510              	.LBE295:
 356:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1511              		.loc 2 356 0
 1512 009c 4883EA38 		subq	$56, %rdx
 1513              	.LVL177:
 1514 00a0 4839D0   		cmpq	%rdx, %rax
 1515 00a3 77E8     		ja	.L110
 358:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1516              		.loc 2 358 0
 1517 00a5 48833A00 		cmpq	$0, (%rdx)
 1518 00a9 74E2     		je	.L110
 358:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1519              		.loc 2 358 0 is_stmt 0 discriminator 2
 1520 00ab 8B4A20   		movl	32(%rdx), %ecx
 1521 00ae F6C180   		testb	$-128, %cl
 1522 00b1 74D5     		je	.L140
 361:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 1523              		.loc 2 361 0 is_stmt 1
 1524 00b3 4883C408 		addq	$8, %rsp
 1525              		.cfi_def_cfa_offset 8
 1526 00b7 C3       		ret
 1527              		.cfi_endproc
 1528              	.LFE350:
 1530              		.section	.text.unlikely._ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item
 1531              	.LCOLDE13:
 1532              		.section	.text._ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item
 1533              	.LHOTE13:
 1534              		.section	.text.unlikely._ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item,"ax",@progbits
 1535              		.align 2
 1536              	.LCOLDB14:
 1537              		.section	.text._ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item,"ax",@progbits
 1538              	.LHOTB14:
 1539              		.align 2
 1540              		.p2align 4,,15
 1541              		.globl	_ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item
 1543              	_ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item:
 1544              	.LFB348:
 288:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 1545              		.loc 2 288 0
 1546              		.cfi_startproc
 1547              	.LVL178:
 1548 0000 55       		pushq	%rbp
 1549              		.cfi_def_cfa_offset 16
 1550              		.cfi_offset 6, -16
 1551 0001 53       		pushq	%rbx
 1552              		.cfi_def_cfa_offset 24
 1553              		.cfi_offset 3, -24
 1554 0002 4889F3   		movq	%rsi, %rbx
 1555 0005 4883EC08 		subq	$8, %rsp
 1556              		.cfi_def_cfa_offset 32
 289:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1557              		.loc 2 289 0
 1558 0009 4885F6   		testq	%rsi, %rsi
 1559 000c 744D     		je	.L157
 1560 000e 8B4620   		movl	32(%rsi), %eax
 1561              	.LVL179:
 1562 0011 4889FD   		movq	%rdi, %rbp
 290:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 1563              		.loc 2 290 0
 1564 0014 A808     		testb	$8, %al
 1565 0016 7550     		jne	.L164
 296:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1566              		.loc 2 296 0
 1567 0018 A802     		testb	$2, %al
 1568 001a 0F859000 		jne	.L165
 1568      0000
 300:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 1569              		.loc 2 300 0
 1570 0020 483BB780 		cmpq	128(%rdi), %rsi
 1570      000000
 1571 0027 7407     		je	.L150
 1572              	.LVL180:
 1573              	.LBB297:
 1574              	.LBB298:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1575              		.loc 1 786 0
 1576 0029 814F6080 		orl	$128, 96(%rdi)
 1576      000000
 1577              	.LVL181:
 1578              	.L150:
 1579 0030 0FB6456F 		movzbl	111(%rbp), %eax
 1580              	.LBE298:
 1581              	.LBE297:
 303:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 1582              		.loc 2 303 0
 1583 0034 48899D80 		movq	%rbx, 128(%rbp)
 1583      000000
 1584              	.LVL182:
 304:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1585              		.loc 2 304 0
 1586 003b A805     		testb	$5, %al
 1587 003d 741C     		je	.L157
 1588              	.LVL183:
 305:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 1589              		.loc 2 305 0
 1590 003f F6456080 		testb	$-128, 96(%rbp)
 1591 0043 7504     		jne	.L153
 1592              	.LVL184:
 305:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 1593              		.loc 2 305 0 is_stmt 0 discriminator 2
 1594 0045 A802     		testb	$2, %al
 1595 0047 7412     		je	.L157
 1596              	.LVL185:
 1597              	.L153:
 306:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1598              		.loc 2 306 0 is_stmt 1
 1599 0049 488B4310 		movq	16(%rbx), %rax
 1600 004d 4885C0   		testq	%rax, %rax
 1601 0050 742E     		je	.L166
 1602              	.LVL186:
 1603              	.LBB299:
 1604              	.LBB300:
 327:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 328:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void setonly();
 329:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 330:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Gets the visibility of an item. */
 331:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int visible() const {return !(flags&FL_MENU_INVISIBLE);}
 332:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 333:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Makes an item visible in the menu. */
 334:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void show() {flags &= ~FL_MENU_INVISIBLE;}
 335:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 336:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Hides an item in the menu. */
 337:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void hide() {flags |= FL_MENU_INVISIBLE;}
 338:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 339:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Gets whether or not the item can be picked. */
 340:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int active() const {return !(flags&FL_MENU_INACTIVE);}
 341:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 342:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Allows a menu item to be picked. */
 343:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void activate() {flags &= ~FL_MENU_INACTIVE;}
 344:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 345:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Prevents a menu item from being picked. Note that this will also cause
 346:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the menu item to appear grayed-out.
 347:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 348:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void deactivate() {flags |= FL_MENU_INACTIVE;}
 349:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns non 0 if FL_INACTIVE and FL_INVISIBLE are cleared, 0 otherwise. */
 350:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int activevisible() const {return !(flags & (FL_MENU_INACTIVE|FL_MENU_INVISIBLE));}
 351:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 352:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // compatibility for FLUID so it can set the image of a menu item...
 353:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 354:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** compatibility api for FLUID, same as a->label(this) */
 355:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void image(Fl_Image* a) {a->label(this);}
 356:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 357:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** compatibility api for FLUID, same as a.label(this) */
 358:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void image(Fl_Image& a) {a.label(this);}
 359:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 360:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // used by menubar:
 361:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int measure(int* h, const Fl_Menu_*) const;
 362:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void draw(int x, int y, int w, int h, const Fl_Menu_*, int t=0) const;
 363:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 364:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // popup menus without using an Fl_Menu_ widget:
 365:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item* popup(
 366:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     int X, int Y,
 367:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     const char *title = 0,
 368:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     const Fl_Menu_Item* picked=0,
 369:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     const Fl_Menu_* = 0) const;
 370:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item* pulldown(
 371:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     int X, int Y, int W, int H,
 372:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     const Fl_Menu_Item* picked = 0,
 373:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     const Fl_Menu_* = 0,
 374:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     const Fl_Menu_Item* title = 0,
 375:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     int menubar=0) const;
 376:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item* test_shortcut() const;
 377:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item* find_shortcut(int *ip=0, const bool require_alt = false) const;
 378:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 379:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 380:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Calls the Fl_Menu_Item item's callback, and provides the Fl_Widget argument.
 381:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The callback is called with the stored user_data() as its second argument.
 382:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     You must first check that callback() is non-zero before calling this.
 383:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 384:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void do_callback(Fl_Widget* o) const {callback_(o, user_data_);}
 1605              		.loc 5 384 0 discriminator 2
 1606 0052 488B7318 		movq	24(%rbx), %rsi
 1607 0056 4889EF   		movq	%rbp, %rdi
 1608 0059 FFD0     		call	*%rax
 1609              	.LVL187:
 1610              	.L157:
 1611              	.LBE300:
 1612              	.LBE299:
 312:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 1613              		.loc 2 312 0
 1614 005b 4883C408 		addq	$8, %rsp
 1615              		.cfi_remember_state
 1616              		.cfi_def_cfa_offset 24
 1617 005f 4889D8   		movq	%rbx, %rax
 1618 0062 5B       		popq	%rbx
 1619              		.cfi_def_cfa_offset 16
 1620              	.LVL188:
 1621 0063 5D       		popq	%rbp
 1622              		.cfi_def_cfa_offset 8
 1623 0064 C3       		ret
 1624              	.LVL189:
 1625              		.p2align 4,,10
 1626 0065 0F1F00   		.p2align 3
 1627              	.L164:
 1628              		.cfi_restore_state
 291:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1629              		.loc 2 291 0
 1630 0068 A804     		testb	$4, %al
 1631 006a 7434     		je	.L167
 1632              	.LVL190:
 1633              	.L162:
 299:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1634              		.loc 2 299 0
 1635 006c 4889EF   		movq	%rbp, %rdi
 1636 006f E8000000 		call	_ZN9Fl_Widget6redrawEv
 1636      00
 1637              	.LVL191:
 1638 0074 EBBA     		jmp	.L150
 1639              	.LVL192:
 1640 0076 662E0F1F 		.p2align 4,,10
 1640      84000000 
 1640      0000
 1641              		.p2align 3
 1642              	.L166:
 1643              	.LBB301:
 1644              	.LBB302:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1645              		.loc 1 861 0
 1646 0080 488B5518 		movq	24(%rbp), %rdx
 1647 0084 4889EE   		movq	%rbp, %rsi
 1648 0087 4889EF   		movq	%rbp, %rdi
 1649 008a E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 1649      00
 1650              	.LVL193:
 1651              	.LBE302:
 1652              	.LBE301:
 312:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 1653              		.loc 2 312 0
 1654 008f 4883C408 		addq	$8, %rsp
 1655              		.cfi_remember_state
 1656              		.cfi_def_cfa_offset 24
 1657 0093 4889D8   		movq	%rbx, %rax
 1658 0096 5B       		popq	%rbx
 1659              		.cfi_def_cfa_offset 16
 1660              	.LVL194:
 1661 0097 5D       		popq	%rbp
 1662              		.cfi_def_cfa_offset 8
 1663              	.LVL195:
 1664 0098 C3       		ret
 1665              	.LVL196:
 1666 0099 0F1F8000 		.p2align 4,,10
 1666      000000
 1667              		.p2align 3
 1668              	.L167:
 1669              		.cfi_restore_state
 1670              	.LBB303:
 1671              	.LBB304:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1672              		.loc 1 786 0
 1673 00a0 814F6080 		orl	$128, 96(%rdi)
 1673      000000
 1674              	.LBE304:
 1675              	.LBE303:
 293:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 1676              		.loc 2 293 0
 1677 00a7 E8000000 		call	_ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item
 1677      00
 1678              	.LVL197:
 1679 00ac EBBE     		jmp	.L162
 1680              	.LVL198:
 1681 00ae 6690     		.p2align 4,,10
 1682              		.p2align 3
 1683              	.L165:
 1684              	.LBB305:
 1685              	.LBB306:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1686              		.loc 1 786 0
 1687 00b0 814F6080 		orl	$128, 96(%rdi)
 1687      000000
 1688              	.LBE306:
 1689              	.LBE305:
 298:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 1690              		.loc 2 298 0
 1691 00b7 83762004 		xorl	$4, 32(%rsi)
 1692 00bb EBAF     		jmp	.L162
 1693              		.cfi_endproc
 1694              	.LFE348:
 1696              		.section	.text.unlikely._ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item
 1697              	.LCOLDE14:
 1698              		.section	.text._ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item
 1699              	.LHOTE14:
 1700              		.section	.text.unlikely._ZN12Fl_Menu_Item7setonlyEv,"ax",@progbits
 1701              		.align 2
 1702              	.LCOLDB15:
 1703              		.section	.text._ZN12Fl_Menu_Item7setonlyEv,"ax",@progbits
 1704              	.LHOTB15:
 1705              		.align 2
 1706              		.p2align 4,,15
 1707              		.globl	_ZN12Fl_Menu_Item7setonlyEv
 1709              	_ZN12Fl_Menu_Item7setonlyEv:
 1710              	.LFB351:
 367:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 1711              		.loc 2 367 0
 1712              		.cfi_startproc
 1713              	.LVL199:
 368:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 1714              		.loc 2 368 0
 1715 0000 8B4720   		movl	32(%rdi), %eax
 1716 0003 89C2     		movl	%eax, %edx
 1717 0005 83CA0C   		orl	$12, %edx
 371:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 1718              		.loc 2 371 0
 1719 0008 A880     		testb	$-128, %al
 368:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 1720              		.loc 2 368 0
 1721 000a 895720   		movl	%edx, 32(%rdi)
 1722              	.LVL200:
 371:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 1723              		.loc 2 371 0
 1724 000d 753B     		jne	.L172
 1725              	.LVL201:
 373:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 1726              		.loc 2 373 0
 1727 000f 48837F38 		cmpq	$0, 56(%rdi)
 1727      00
 1728 0014 7434     		je	.L172
 1729 0016 8B5758   		movl	88(%rdi), %edx
 1730              	.LVL202:
 1731 0019 F6C208   		testb	$8, %dl
 1732 001c 742C     		je	.L172
 372:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1733              		.loc 2 372 0
 1734 001e 488D4738 		leaq	56(%rdi), %rax
 1735              	.LVL203:
 1736              		.p2align 4,,10
 1737 0022 660F1F44 		.p2align 3
 1737      0000
 1738              	.L174:
 1739              	.LBB307:
 1740              	.LBB308:
 326:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 1741              		.loc 5 326 0
 1742 0028 89D1     		movl	%edx, %ecx
 1743 002a 83E1FB   		andl	$-5, %ecx
 1744              	.LBE308:
 1745              	.LBE307:
 371:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 1746              		.loc 2 371 0
 1747 002d 81E28000 		andl	$128, %edx
 1747      0000
 1748              	.LBB310:
 1749              	.LBB309:
 326:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 1750              		.loc 5 326 0
 1751 0033 894820   		movl	%ecx, 32(%rax)
 1752              	.LBE309:
 1753              	.LBE310:
 371:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 1754              		.loc 2 371 0
 1755 0036 7512     		jne	.L172
 372:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1756              		.loc 2 372 0
 1757 0038 4883C038 		addq	$56, %rax
 1758              	.LVL204:
 373:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 1759              		.loc 2 373 0
 1760 003c 48833800 		cmpq	$0, (%rax)
 1761 0040 7408     		je	.L172
 1762 0042 8B5020   		movl	32(%rax), %edx
 1763              	.LVL205:
 373:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 1764              		.loc 2 373 0 is_stmt 0 discriminator 2
 1765 0045 F6C208   		testb	$8, %dl
 1766 0048 75DE     		jne	.L174
 1767              	.LVL206:
 1768              	.L172:
 377:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1769              		.loc 2 377 0 is_stmt 1
 1770 004a 48837FC8 		cmpq	$0, -56(%rdi)
 1770      00
 1771 004f 742F     		je	.L198
 1772 0051 8B47E8   		movl	-24(%rdi), %eax
 1773 0054 A880     		testb	$-128, %al
 1774 0056 7521     		jne	.L168
 1775              	.LVL207:
 1776 0058 A808     		testb	$8, %al
 1777 005a 741D     		je	.L168
 376:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 1778              		.loc 2 376 0
 1779 005c 4883EF38 		subq	$56, %rdi
 1780              	.LVL208:
 1781              		.p2align 4,,10
 1782              		.p2align 3
 1783              	.L176:
 1784              	.LBB311:
 1785              	.LBB312:
 326:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 1786              		.loc 5 326 0
 1787 0060 836720FB 		andl	$-5, 32(%rdi)
 1788              	.LBE312:
 1789              	.LBE311:
 376:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 1790              		.loc 2 376 0
 1791 0064 4883EF38 		subq	$56, %rdi
 1792              	.LVL209:
 377:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1793              		.loc 2 377 0
 1794 0068 48833F00 		cmpq	$0, (%rdi)
 1795 006c 740B     		je	.L168
 377:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1796              		.loc 2 377 0 is_stmt 0 discriminator 2
 1797 006e 8B4720   		movl	32(%rdi), %eax
 1798 0071 A880     		testb	$-128, %al
 1799 0073 7504     		jne	.L168
 1800              	.LVL210:
 377:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1801              		.loc 2 377 0 discriminator 4
 1802 0075 A808     		testb	$8, %al
 1803 0077 75E7     		jne	.L176
 1804              	.LVL211:
 1805              	.L168:
 1806 0079 F3C3     		rep ret
 1807              	.LVL212:
 1808 007b 0F1F4400 		.p2align 4,,10
 1808      00
 1809              		.p2align 3
 1810              	.L198:
 1811 0080 F3C3     		rep ret
 1812              		.cfi_endproc
 1813              	.LFE351:
 1815              		.section	.text.unlikely._ZN12Fl_Menu_Item7setonlyEv
 1816              	.LCOLDE15:
 1817              		.section	.text._ZN12Fl_Menu_Item7setonlyEv
 1818              	.LHOTE15:
 1819              		.section	.text.unlikely._ZN8Fl_Menu_C2EiiiiPKc,"ax",@progbits
 1820              		.align 2
 1821              	.LCOLDB16:
 1822              		.section	.text._ZN8Fl_Menu_C2EiiiiPKc,"ax",@progbits
 1823              	.LHOTB16:
 1824              		.align 2
 1825              		.p2align 4,,15
 1826              		.globl	_ZN8Fl_Menu_C2EiiiiPKc
 1828              	_ZN8Fl_Menu_C2EiiiiPKc:
 1829              	.LFB353:
 386:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 1830              		.loc 2 386 0 is_stmt 1
 1831              		.cfi_startproc
 1832              	.LVL213:
 1833 0000 53       		pushq	%rbx
 1834              		.cfi_def_cfa_offset 16
 1835              		.cfi_offset 3, -16
 386:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 1836              		.loc 2 386 0
 1837 0001 4889FB   		movq	%rdi, %rbx
 1838              	.LBB313:
 387:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1839              		.loc 2 387 0
 1840 0004 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 1840      00
 1841              	.LVL214:
 1842 0009 48C70300 		movq	$_ZTV8Fl_Menu_+16, (%rbx)
 1842      000000
 1843              	.LVL215:
 1844              	.LBB314:
 1845              	.LBB315:
 1846              		.file 6 "fltk-1.3.4-1/FL/Fl_Menu_.H"
   1:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   2:fltk-1.3.4-1/FL/Fl_Menu_.H **** // "$Id: Fl_Menu_.H 11801 2016-07-09 17:06:46Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   4:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Menu base class header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   6:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   8:fltk-1.3.4-1/FL/Fl_Menu_.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Menu_.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Menu_.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  12:fltk-1.3.4-1/FL/Fl_Menu_.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  14:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  16:fltk-1.3.4-1/FL/Fl_Menu_.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  18:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  19:fltk-1.3.4-1/FL/Fl_Menu_.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Menu_.H ****    Fl_Menu_ widget . */
  21:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  22:fltk-1.3.4-1/FL/Fl_Menu_.H **** #ifndef Fl_Menu__H
  23:fltk-1.3.4-1/FL/Fl_Menu_.H **** #define Fl_Menu__H
  24:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  25:fltk-1.3.4-1/FL/Fl_Menu_.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Menu_.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Menu_.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Menu_.H **** #include "Fl_Menu_Item.H"
  29:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  30:fltk-1.3.4-1/FL/Fl_Menu_.H **** /**
  31:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Base class of all widgets that have a menu in FLTK.
  32:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  33:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Currently FLTK provides you with Fl_Menu_Button, Fl_Menu_Bar, and Fl_Choice.
  34:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  35:fltk-1.3.4-1/FL/Fl_Menu_.H ****   The class contains a pointer to an array of structures of type Fl_Menu_Item.
  36:fltk-1.3.4-1/FL/Fl_Menu_.H ****   The array may either be supplied directly by the user program, or it may
  37:fltk-1.3.4-1/FL/Fl_Menu_.H ****   be "private": a dynamically allocated array managed by the Fl_Menu_.
  38:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  39:fltk-1.3.4-1/FL/Fl_Menu_.H ****   When the user clicks a menu item, value() is set to that item
  40:fltk-1.3.4-1/FL/Fl_Menu_.H ****   and then:
  41:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  42:fltk-1.3.4-1/FL/Fl_Menu_.H ****     - If the Fl_Menu_Item has a callback set, that callback
  43:fltk-1.3.4-1/FL/Fl_Menu_.H ****       is invoked with any userdata configured for it.
  44:fltk-1.3.4-1/FL/Fl_Menu_.H ****       (The Fl_Menu_ widget's callback is NOT invoked.)
  45:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  46:fltk-1.3.4-1/FL/Fl_Menu_.H ****     - For any Fl_Menu_Items that \b don't have a callback set,
  47:fltk-1.3.4-1/FL/Fl_Menu_.H ****       the Fl_Menu_ widget's callback is invoked with any userdata
  48:fltk-1.3.4-1/FL/Fl_Menu_.H ****       configured for it. The callback can determine which item
  49:fltk-1.3.4-1/FL/Fl_Menu_.H ****       was picked using value(), mvalue(), item_pathname(), etc.
  50:fltk-1.3.4-1/FL/Fl_Menu_.H **** */
  51:fltk-1.3.4-1/FL/Fl_Menu_.H **** class FL_EXPORT Fl_Menu_ : public Fl_Widget {
  52:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  53:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Menu_Item *menu_;
  54:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *value_;
  55:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  56:fltk-1.3.4-1/FL/Fl_Menu_.H **** protected:
  57:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  58:fltk-1.3.4-1/FL/Fl_Menu_.H ****   uchar alloc;			// flag indicates if menu_ is a dynamic copy (=1) or not (=0)
  59:fltk-1.3.4-1/FL/Fl_Menu_.H ****   uchar down_box_;
  60:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Font textfont_;
  61:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Fontsize textsize_;
  62:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Color textcolor_;
  63:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  64:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int item_pathname_(char *name, int namelen, const Fl_Menu_Item *finditem,
  65:fltk-1.3.4-1/FL/Fl_Menu_.H ****                      const Fl_Menu_Item *menu=0) const;
  66:fltk-1.3.4-1/FL/Fl_Menu_.H **** public:
  67:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Menu_(int,int,int,int,const char * =0);
  68:fltk-1.3.4-1/FL/Fl_Menu_.H ****   ~Fl_Menu_();
  69:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  70:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int item_pathname(char *name, int namelen, const Fl_Menu_Item *finditem=0) const;
  71:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* picked(const Fl_Menu_Item*);
  72:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* find_item(const char *name);
  73:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* find_item(Fl_Callback*);
  74:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(const char *name) const;
  75:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(const Fl_Menu_Item *item) const;
  76:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(Fl_Callback *cb) const;
  77:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  78:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
  79:fltk-1.3.4-1/FL/Fl_Menu_.H ****     Returns the menu item with the entered shortcut (key value).
  80:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  81:fltk-1.3.4-1/FL/Fl_Menu_.H ****     This searches the complete menu() for a shortcut that matches the
  82:fltk-1.3.4-1/FL/Fl_Menu_.H ****     entered key value.  It must be called for a FL_KEYBOARD or FL_SHORTCUT
  83:fltk-1.3.4-1/FL/Fl_Menu_.H ****     event.
  84:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  85:fltk-1.3.4-1/FL/Fl_Menu_.H ****     If a match is found, the menu's callback will be called.
  86:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  87:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \return matched Fl_Menu_Item or NULL.
  88:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
  89:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* test_shortcut() {return picked(menu()->test_shortcut());}
  90:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void global();
  91:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  92:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
  93:fltk-1.3.4-1/FL/Fl_Menu_.H ****     Returns a pointer to the array of Fl_Menu_Items.  This will either be
  94:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the value passed to menu(value) or the private copy.
  95:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \sa size() -- returns the size of the Fl_Menu_Item array.
  96:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  97:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \b Example: How to walk the array:
  98:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \code
  99:fltk-1.3.4-1/FL/Fl_Menu_.H ****     for ( int t=0; t<menubar->size(); t++ ) {                // walk array of items
 100:fltk-1.3.4-1/FL/Fl_Menu_.H ****         const Fl_Menu_Item &item = menubar->menu()[t];       // get each item
 101:fltk-1.3.4-1/FL/Fl_Menu_.H ****         fprintf(stderr, "item #%d -- label=%s, value=%s type=%s\n",
 102:fltk-1.3.4-1/FL/Fl_Menu_.H ****             t,
 103:fltk-1.3.4-1/FL/Fl_Menu_.H ****             item.label() ? item.label() : "(Null)",          // menu terminators have NULL labels
 104:fltk-1.3.4-1/FL/Fl_Menu_.H ****             (item.flags & FL_MENU_VALUE) ? "set" : "clear",  // value of toggle or radio items
 105:fltk-1.3.4-1/FL/Fl_Menu_.H ****             (item.flags & FL_SUBMENU) ? "Submenu" : "Item"); // see if item is a submenu or actual 
 106:fltk-1.3.4-1/FL/Fl_Menu_.H ****     }
 107:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \endcode
 108:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 109:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
 110:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *menu() const {return menu_;}
 111:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void menu(const Fl_Menu_Item *m);
 112:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void copy(const Fl_Menu_Item *m, void* user_data = 0);
 113:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int insert(int index, const char*, int shortcut, Fl_Callback*, void* = 0, int = 0);
 114:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char*, int shortcut, Fl_Callback*, void* = 0, int = 0); // see src/Fl_Menu_add.cxx
 115:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** See int Fl_Menu_::add(const char* label, int shortcut, Fl_Callback*, void *user_data=0, int f
 116:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char* a, const char* b, Fl_Callback* c, void* d = 0, int e = 0) {
 117:fltk-1.3.4-1/FL/Fl_Menu_.H ****       return add(a,fl_old_shortcut(b),c,d,e);
 118:fltk-1.3.4-1/FL/Fl_Menu_.H ****   }
 119:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** See int Fl_Menu_::insert(const char* label, int shortcut, Fl_Callback*, void *user_data=0, in
 120:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int insert(int index, const char* a, const char* b, Fl_Callback* c, void* d = 0, int e = 0) {
 121:fltk-1.3.4-1/FL/Fl_Menu_.H ****       return insert(index,a,fl_old_shortcut(b),c,d,e);
 122:fltk-1.3.4-1/FL/Fl_Menu_.H ****   }
 123:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char *);
 124:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  size() const ;
 125:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 126:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void clear();
 127:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int clear_submenu(int index);
 128:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void replace(int,const char *);
 129:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void remove(int);
 130:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Changes the shortcut of item \p i to \p s. */
 131:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void shortcut(int i, int s) {menu_[i].shortcut(s);}
 132:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Sets the flags of item i.  For a list of the flags, see Fl_Menu_Item.  */
 133:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void mode(int i,int fl) {menu_[i].flags = fl;}
 134:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Gets the flags of item i.  For a list of the flags, see Fl_Menu_Item.  */
 135:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  mode(int i) const {return menu_[i].flags;}
 136:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 137:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns a pointer to the last menu item that was picked.  */
 138:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *mvalue() const {return value_;}
 139:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the index into menu() of the last item chosen by the user.  It is zero initially. */
 140:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value() const {return value_ ? (int)(value_-menu_) : -1;}
 141:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(const Fl_Menu_Item*);
 142:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
 143:fltk-1.3.4-1/FL/Fl_Menu_.H ****     The value is the index into menu() of the last item chosen by
 144:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the user.  It is zero initially.  You can set it as an integer, or set
 145:fltk-1.3.4-1/FL/Fl_Menu_.H ****     it with a pointer to a menu item.  The set routines return non-zero if
 146:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the new value is different than the old one.
 147:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
 148:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(int i) {return value(menu_+i);}
 149:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the title of the last item chosen.  */
 150:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const char *text() const {return value_ ? value_->text : 0;}
 151:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the title of item i.  */
 152:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const char *text(int i) const {return menu_[i].text;}
 153:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 154:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Gets the current font of menu item labels.  */
 155:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Font textfont() const {return textfont_;}
 156:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Sets the current font of menu item labels.  */
 157:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void textfont(Fl_Font c) {textfont_=c;}
 158:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Gets the font size of menu item labels.  */
 159:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Fontsize textsize() const {return textsize_;}
 160:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Sets the font size of menu item labels.  */
 161:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void textsize(Fl_Fontsize c) {textsize_=c;}
 1847              		.loc 6 161 0
 1848 0010 8B050000 		movl	FL_NORMAL_SIZE(%rip), %eax
 1848      0000
 1849              	.LBE315:
 1850              	.LBE314:
 1851              	.LBB317:
 1852              	.LBB318:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1853              		.loc 1 149 0
 1854 0016 834B6040 		orl	$64, 96(%rbx)
 1855              	.LVL216:
 1856              	.LBE318:
 1857              	.LBE317:
 1858              	.LBB319:
 1859              	.LBB320:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1860              		.loc 1 372 0
 1861 001a C6436E02 		movb	$2, 110(%rbx)
 1862              	.LVL217:
 1863              	.LBE320:
 1864              	.LBE319:
 1865              	.LBB321:
 1866              	.LBB322:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1867              		.loc 1 654 0
 1868 001e C6436F06 		movb	$6, 111(%rbx)
 1869              	.LVL218:
 1870              	.LBE322:
 1871              	.LBE321:
 391:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 1872              		.loc 2 391 0
 1873 0022 48C74378 		movq	$0, 120(%rbx)
 1873      00000000 
 1874 002a 48C78380 		movq	$0, 128(%rbx)
 1874      00000000 
 1874      000000
 392:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 1875              		.loc 2 392 0
 1876 0035 C6838800 		movb	$0, 136(%rbx)
 1876      000000
 1877              	.LVL219:
 1878              	.LBB323:
 1879              	.LBB324:
 406:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1880              		.loc 1 406 0
 1881 003c C743680F 		movl	$15, 104(%rbx)
 1881      000000
 1882              	.LVL220:
 1883              	.LBE324:
 1884              	.LBE323:
 1885              	.LBB325:
 1886              	.LBB326:
 157:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Gets the font size of menu item labels.  */
 1887              		.loc 6 157 0
 1888 0043 C7838C00 		movl	$0, 140(%rbx)
 1888      00000000 
 1888      0000
 1889              	.LVL221:
 1890              	.LBE326:
 1891              	.LBE325:
 1892              	.LBB327:
 1893              	.LBB316:
 1894              		.loc 6 161 0
 1895 004d 89839000 		movl	%eax, 144(%rbx)
 1895      0000
 1896              	.LVL222:
 1897              	.LBE316:
 1898              	.LBE327:
 1899              	.LBB328:
 1900              	.LBB329:
 162:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Get the current color of menu item labels.  */
 163:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Color textcolor() const {return textcolor_;}
 164:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Sets the current color of menu item labels. */
 165:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void textcolor(Fl_Color c) {textcolor_=c;}
 1901              		.loc 6 165 0
 1902 0053 C7839400 		movl	$0, 148(%rbx)
 1902      00000000 
 1902      0000
 1903              	.LVL223:
 1904              	.LBE329:
 1905              	.LBE328:
 1906              	.LBB330:
 1907              	.LBB331:
 166:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 167:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
 168:fltk-1.3.4-1/FL/Fl_Menu_.H ****     This box type is used to surround the currently-selected items in the
 169:fltk-1.3.4-1/FL/Fl_Menu_.H ****     menus.  If this is FL_NO_BOX then it acts like
 170:fltk-1.3.4-1/FL/Fl_Menu_.H ****     FL_THIN_UP_BOX and selection_color() acts like
 171:fltk-1.3.4-1/FL/Fl_Menu_.H ****     FL_WHITE, for back compatibility.
 172:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
 173:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Boxtype down_box() const {return (Fl_Boxtype)down_box_;}
 174:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**    See Fl_Boxtype Fl_Menu_::down_box() const   */
 175:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void down_box(Fl_Boxtype b) {down_box_ = b;}
 1908              		.loc 6 175 0
 1909 005d C6838900 		movb	$0, 137(%rbx)
 1909      000000
 1910              	.LVL224:
 1911              	.LBE331:
 1912              	.LBE330:
 1913              	.LBE313:
 398:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 1914              		.loc 2 398 0
 1915 0064 5B       		popq	%rbx
 1916              		.cfi_def_cfa_offset 8
 1917              	.LVL225:
 1918 0065 C3       		ret
 1919              		.cfi_endproc
 1920              	.LFE353:
 1922              		.section	.text.unlikely._ZN8Fl_Menu_C2EiiiiPKc
 1923              	.LCOLDE16:
 1924              		.section	.text._ZN8Fl_Menu_C2EiiiiPKc
 1925              	.LHOTE16:
 1926              		.globl	_ZN8Fl_Menu_C1EiiiiPKc
 1927              		.set	_ZN8Fl_Menu_C1EiiiiPKc,_ZN8Fl_Menu_C2EiiiiPKc
 1928              		.section	.text.unlikely._ZNK8Fl_Menu_4sizeEv,"ax",@progbits
 1929              		.align 2
 1930              	.LCOLDB17:
 1931              		.section	.text._ZNK8Fl_Menu_4sizeEv,"ax",@progbits
 1932              	.LHOTB17:
 1933              		.align 2
 1934              		.p2align 4,,15
 1935              		.globl	_ZNK8Fl_Menu_4sizeEv
 1937              	_ZNK8Fl_Menu_4sizeEv:
 1938              	.LFB355:
 407:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1939              		.loc 2 407 0
 1940              		.cfi_startproc
 1941              	.LVL226:
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 1942              		.loc 2 408 0
 1943 0000 488B7F78 		movq	120(%rdi), %rdi
 1944              	.LVL227:
 1945 0004 4885FF   		testq	%rdi, %rdi
 1946 0007 7407     		je	.L202
 1947              		.loc 2 409 0
 1948 0009 E9000000 		jmp	_ZNK12Fl_Menu_Item4sizeEv
 1948      00
 1949              	.LVL228:
 1950 000e 6690     		.p2align 4,,10
 1951              		.p2align 3
 1952              	.L202:
 410:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 1953              		.loc 2 410 0
 1954 0010 31C0     		xorl	%eax, %eax
 1955 0012 C3       		ret
 1956              		.cfi_endproc
 1957              	.LFE355:
 1959              		.section	.text.unlikely._ZNK8Fl_Menu_4sizeEv
 1960              	.LCOLDE17:
 1961              		.section	.text._ZNK8Fl_Menu_4sizeEv
 1962              	.LHOTE17:
 1963              		.section	.text.unlikely._ZN8Fl_Menu_5clearEv,"ax",@progbits
 1964              		.align 2
 1965              	.LCOLDB18:
 1966              		.section	.text._ZN8Fl_Menu_5clearEv,"ax",@progbits
 1967              	.LHOTB18:
 1968              		.align 2
 1969              		.p2align 4,,15
 1970              		.globl	_ZN8Fl_Menu_5clearEv
 1972              	_ZN8Fl_Menu_5clearEv:
 1973              	.LFB362:
 411:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 1974              		.loc 2 457 0
 1975              		.cfi_startproc
 1976              	.LVL229:
 1977              	.LBB345:
 458:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1978              		.loc 2 458 0
 1979 0000 0FB68788 		movzbl	136(%rdi), %eax
 1979      000000
 1980 0007 84C0     		testb	%al, %al
 1981 0009 0F84A100 		je	.L222
 1981      0000
 1982              	.LBB346:
 459:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 1983              		.loc 2 459 0
 1984 000f 3C01     		cmpb	$1, %al
 1985              	.LBE346:
 1986              	.LBE345:
 457:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1987              		.loc 2 457 0
 1988 0011 4154     		pushq	%r12
 1989              		.cfi_def_cfa_offset 16
 1990              		.cfi_offset 12, -16
 1991 0013 55       		pushq	%rbp
 1992              		.cfi_def_cfa_offset 24
 1993              		.cfi_offset 6, -24
 1994 0014 4889FD   		movq	%rdi, %rbp
 1995 0017 53       		pushq	%rbx
 1996              		.cfi_def_cfa_offset 32
 1997              		.cfi_offset 3, -32
 1998              	.LBB351:
 1999              	.LBB350:
 2000              		.loc 2 459 0
 2001 0018 7661     		jbe	.L205
 2002              	.LVL230:
 2003              	.LBB347:
 2004              	.LBB348:
 2005              	.LBB349:
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 2006              		.loc 2 408 0
 2007 001a 488B7F78 		movq	120(%rdi), %rdi
 2008              	.LVL231:
 2009 001e 4885FF   		testq	%rdi, %rdi
 2010 0021 0F849100 		je	.L206
 2010      0000
 409:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 2011              		.loc 2 409 0
 2012 0027 E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 2012      00
 2013              	.LVL232:
 2014 002c 4C63E0   		movslq	%eax, %r12
 2015 002f 89C0     		movl	%eax, %eax
 2016 0031 4A8D14E5 		leaq	0(,%r12,8), %rdx
 2016      00000000 
 2017 0039 4C89E3   		movq	%r12, %rbx
 2018 003c 4929C4   		subq	%rax, %r12
 2019 003f 4A8D04E5 		leaq	0(,%r12,8), %rax
 2019      00000000 
 2020 0047 48C1E306 		salq	$6, %rbx
 2021 004b 49C1E406 		salq	$6, %r12
 2022 004f 4829D3   		subq	%rdx, %rbx
 2023 0052 4929C4   		subq	%rax, %r12
 2024 0055 4883EB38 		subq	$56, %rbx
 2025 0059 4983EC38 		subq	$56, %r12
 2026 005d EB17     		jmp	.L207
 2027 005f 90       		.p2align 4,,10
 2028              		.p2align 3
 2029              	.L223:
 2030              	.LBE349:
 2031              	.LBE348:
 460:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 2032              		.loc 2 460 0
 2033 0060 488B4578 		movq	120(%rbp), %rax
 2034 0064 488B3C18 		movq	(%rax,%rbx), %rdi
 2035 0068 4885FF   		testq	%rdi, %rdi
 2036 006b 7405     		je	.L208
 2037              		.loc 2 460 0 is_stmt 0 discriminator 1
 2038 006d E8000000 		call	free
 2038      00
 2039              	.LVL233:
 2040              	.L208:
 2041 0072 4883EB38 		subq	$56, %rbx
 2042              	.L207:
 459:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 2043              		.loc 2 459 0 is_stmt 1 discriminator 2
 2044 0076 4C39E3   		cmpq	%r12, %rbx
 2045 0079 75E5     		jne	.L223
 2046              	.LVL234:
 2047              	.L205:
 2048              	.LBE347:
 2049              	.LBE350:
 2050              	.LBE351:
 2051              	.LBB352:
 2052              	.LBB353:
 461:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2053              		.loc 2 461 0
 2054 007b 483B2D00 		cmpq	fl_menu_array_owner(%rip), %rbp
 2054      000000
 2055 0082 743D     		je	.L212
 462:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2056              		.loc 2 464 0
 2057 0084 488B7D78 		movq	120(%rbp), %rdi
 2058 0088 4885FF   		testq	%rdi, %rdi
 2059 008b 7405     		je	.L210
 2060 008d E8000000 		call	_ZdaPv
 2060      00
 2061              	.LVL235:
 2062              	.L210:
 465:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 2063              		.loc 2 465 0
 2064 0092 48C74578 		movq	$0, 120(%rbp)
 2064      00000000 
 466:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2065              		.loc 2 466 0
 2066 009a 48C78580 		movq	$0, 128(%rbp)
 2066      00000000 
 2066      000000
 467:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 2067              		.loc 2 467 0
 2068 00a5 C6858800 		movb	$0, 136(%rbp)
 2068      000000
 2069              	.LBE353:
 2070              	.LBE352:
 468:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 2071              		.loc 2 469 0
 2072 00ac 5B       		popq	%rbx
 2073              		.cfi_restore 3
 2074              		.cfi_def_cfa_offset 24
 2075 00ad 5D       		popq	%rbp
 2076              		.cfi_restore 6
 2077              		.cfi_def_cfa_offset 16
 2078              	.LVL236:
 2079 00ae 415C     		popq	%r12
 2080              		.cfi_restore 12
 2081              		.cfi_def_cfa_offset 8
 2082              	.LVL237:
 2083              	.L222:
 2084 00b0 F3C3     		rep ret
 2085              	.LVL238:
 2086              		.p2align 4,,10
 2087 00b2 660F1F44 		.p2align 3
 2087      0000
 2088              	.L206:
 2089              		.cfi_def_cfa_offset 32
 2090              		.cfi_offset 3, -32
 2091              		.cfi_offset 6, -24
 2092              		.cfi_offset 12, -16
 2093              	.LBB355:
 2094              	.LBB354:
 461:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 2095              		.loc 2 461 0
 2096 00b8 483B2D00 		cmpq	fl_menu_array_owner(%rip), %rbp
 2096      000000
 2097 00bf 75D1     		jne	.L210
 2098              	.LVL239:
 2099              	.L212:
 462:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2100              		.loc 2 462 0
 2101 00c1 48C70500 		movq	$0, fl_menu_array_owner(%rip)
 2101      00000000 
 2101      000000
 2102 00cc EBC4     		jmp	.L210
 2103              	.LBE354:
 2104              	.LBE355:
 2105              		.cfi_endproc
 2106              	.LFE362:
 2108              		.section	.text.unlikely._ZN8Fl_Menu_5clearEv
 2109              	.LCOLDE18:
 2110              		.section	.text._ZN8Fl_Menu_5clearEv
 2111              	.LHOTE18:
 2112              		.section	.text.unlikely._ZN8Fl_Menu_4menuEPK12Fl_Menu_Item,"ax",@progbits
 2113              		.align 2
 2114              	.LCOLDB19:
 2115              		.section	.text._ZN8Fl_Menu_4menuEPK12Fl_Menu_Item,"ax",@progbits
 2116              	.LHOTB19:
 2117              		.align 2
 2118              		.p2align 4,,15
 2119              		.globl	_ZN8Fl_Menu_4menuEPK12Fl_Menu_Item
 2121              	_ZN8Fl_Menu_4menuEPK12Fl_Menu_Item:
 2122              	.LFB356:
 418:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 2123              		.loc 2 418 0
 2124              		.cfi_startproc
 2125              	.LVL240:
 2126 0000 55       		pushq	%rbp
 2127              		.cfi_def_cfa_offset 16
 2128              		.cfi_offset 6, -16
 2129 0001 53       		pushq	%rbx
 2130              		.cfi_def_cfa_offset 24
 2131              		.cfi_offset 3, -24
 2132 0002 4889F5   		movq	%rsi, %rbp
 2133 0005 4889FB   		movq	%rdi, %rbx
 2134 0008 4883EC08 		subq	$8, %rsp
 2135              		.cfi_def_cfa_offset 32
 419:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 2136              		.loc 2 419 0
 2137 000c E8000000 		call	_ZN8Fl_Menu_5clearEv
 2137      00
 2138              	.LVL241:
 420:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 2139              		.loc 2 420 0
 2140 0011 48896B78 		movq	%rbp, 120(%rbx)
 2141 0015 4889AB80 		movq	%rbp, 128(%rbx)
 2141      000000
 421:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2142              		.loc 2 421 0
 2143 001c 4883C408 		addq	$8, %rsp
 2144              		.cfi_def_cfa_offset 24
 2145 0020 5B       		popq	%rbx
 2146              		.cfi_def_cfa_offset 16
 2147              	.LVL242:
 2148 0021 5D       		popq	%rbp
 2149              		.cfi_def_cfa_offset 8
 2150              	.LVL243:
 2151 0022 C3       		ret
 2152              		.cfi_endproc
 2153              	.LFE356:
 2155              		.section	.text.unlikely._ZN8Fl_Menu_4menuEPK12Fl_Menu_Item
 2156              	.LCOLDE19:
 2157              		.section	.text._ZN8Fl_Menu_4menuEPK12Fl_Menu_Item
 2158              	.LHOTE19:
 2159              		.section	.text.unlikely._ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv,"ax",@progbits
 2160              		.align 2
 2161              	.LCOLDB20:
 2162              		.section	.text._ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv,"ax",@progbits
 2163              	.LHOTB20:
 2164              		.align 2
 2165              		.p2align 4,,15
 2166              		.globl	_ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv
 2168              	_ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv:
 2169              	.LFB357:
 430:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2170              		.loc 2 430 0
 2171              		.cfi_startproc
 2172              	.LVL244:
 2173 0000 4157     		pushq	%r15
 2174              		.cfi_def_cfa_offset 16
 2175              		.cfi_offset 15, -16
 2176 0002 4156     		pushq	%r14
 2177              		.cfi_def_cfa_offset 24
 2178              		.cfi_offset 14, -24
 2179 0004 4989F6   		movq	%rsi, %r14
 2180 0007 4155     		pushq	%r13
 2181              		.cfi_def_cfa_offset 32
 2182              		.cfi_offset 13, -32
 2183 0009 4154     		pushq	%r12
 2184              		.cfi_def_cfa_offset 40
 2185              		.cfi_offset 12, -40
 2186 000b 4989FD   		movq	%rdi, %r13
 2187 000e 55       		pushq	%rbp
 2188              		.cfi_def_cfa_offset 48
 2189              		.cfi_offset 6, -48
 2190 000f 53       		pushq	%rbx
 2191              		.cfi_def_cfa_offset 56
 2192              		.cfi_offset 3, -56
 431:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 2193              		.loc 2 431 0
 2194 0010 4889F7   		movq	%rsi, %rdi
 2195              	.LVL245:
 430:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2196              		.loc 2 430 0
 2197 0013 4889D5   		movq	%rdx, %rbp
 2198 0016 4883EC08 		subq	$8, %rsp
 2199              		.cfi_def_cfa_offset 64
 431:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 2200              		.loc 2 431 0
 2201 001a E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 2201      00
 2202              	.LVL246:
 2203 001f 4863D0   		movslq	%eax, %rdx
 432:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2204              		.loc 2 432 0
 2205 0022 48B80000 		movabsq	$164381386399023104, %rax
 2205      00000000 
 2205      4802
 2206 002c 4839C2   		cmpq	%rax, %rdx
 431:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 2207              		.loc 2 431 0
 2208 002f 4989D7   		movq	%rdx, %r15
 2209              	.LVL247:
 432:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2210              		.loc 2 432 0
 2211 0032 488D04D5 		leaq	0(,%rdx,8), %rax
 2211      00000000 
 2212 003a 0F869800 		jbe	.L227
 2212      0000
 2213 0040 48C1E206 		salq	$6, %rdx
 2214              	.LVL248:
 2215 0044 48C7C7FF 		movq	$-1, %rdi
 2215      FFFFFF
 2216 004b 4829C2   		subq	%rax, %rdx
 2217 004e 4989D4   		movq	%rdx, %r12
 2218              	.L228:
 432:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2219              		.loc 2 432 0 is_stmt 0 discriminator 4
 2220 0051 E8000000 		call	_Znam
 2220      00
 2221              	.LVL249:
 2222              	.LBB356:
 2223              	.LBB357:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 2224              		.loc 3 53 0 is_stmt 1 discriminator 4
 2225 0056 4C89E2   		movq	%r12, %rdx
 2226 0059 4C89F6   		movq	%r14, %rsi
 2227 005c 4889C7   		movq	%rax, %rdi
 2228              	.LBE357:
 2229              	.LBE356:
 432:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2230              		.loc 2 432 0 discriminator 4
 2231 005f 4889C3   		movq	%rax, %rbx
 2232              	.LVL250:
 2233              	.LBB359:
 2234              	.LBB358:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 2235              		.loc 3 53 0 discriminator 4
 2236 0062 E8000000 		call	memcpy
 2236      00
 2237              	.LVL251:
 2238              	.LBE358:
 2239              	.LBE359:
 2240              	.LBB360:
 2241              	.LBB361:
 419:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 2242              		.loc 2 419 0 discriminator 4
 2243 0067 4C89EF   		movq	%r13, %rdi
 2244 006a E8000000 		call	_ZN8Fl_Menu_5clearEv
 2244      00
 2245              	.LVL252:
 2246              	.LBE361:
 2247              	.LBE360:
 437:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 2248              		.loc 2 437 0 discriminator 4
 2249 006f 4885ED   		testq	%rbp, %rbp
 2250              	.LBB363:
 2251              	.LBB362:
 420:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 2252              		.loc 2 420 0 discriminator 4
 2253 0072 49895D78 		movq	%rbx, 120(%r13)
 2254 0076 49899D80 		movq	%rbx, 128(%r13)
 2254      000000
 2255              	.LVL253:
 2256              	.LBE362:
 2257              	.LBE363:
 435:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 2258              		.loc 2 435 0 discriminator 4
 2259 007d 41C68588 		movb	$1, 136(%r13)
 2259      00000001 
 437:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 2260              		.loc 2 437 0 discriminator 4
 2261 0085 743D     		je	.L226
 2262              	.LVL254:
 437:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 2263              		.loc 2 437 0 is_stmt 0 discriminator 1
 2264 0087 4585FF   		testl	%r15d, %r15d
 2265 008a 7438     		je	.L226
 2266 008c 418D47FF 		leal	-1(%r15), %eax
 2267 0090 4883C001 		addq	$1, %rax
 2268 0094 488D14C5 		leaq	0(,%rax,8), %rdx
 2268      00000000 
 2269 009c 48C1E006 		salq	$6, %rax
 2270 00a0 4829D0   		subq	%rdx, %rax
 2271 00a3 4801D8   		addq	%rbx, %rax
 2272              	.LVL255:
 2273 00a6 662E0F1F 		.p2align 4,,10
 2273      84000000 
 2273      0000
 2274              		.p2align 3
 2275              	.L232:
 438:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2276              		.loc 2 438 0 is_stmt 1
 2277 00b0 48837B10 		cmpq	$0, 16(%rbx)
 2277      00
 2278 00b5 7404     		je	.L231
 438:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2279              		.loc 2 438 0 is_stmt 0 discriminator 1
 2280 00b7 48896B18 		movq	%rbp, 24(%rbx)
 2281              	.L231:
 439:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 2282              		.loc 2 439 0 is_stmt 1
 2283 00bb 4883C338 		addq	$56, %rbx
 2284              	.LVL256:
 437:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 2285              		.loc 2 437 0
 2286 00bf 4839C3   		cmpq	%rax, %rbx
 2287 00c2 75EC     		jne	.L232
 2288              	.L226:
 441:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 2289              		.loc 2 441 0
 2290 00c4 4883C408 		addq	$8, %rsp
 2291              		.cfi_remember_state
 2292              		.cfi_def_cfa_offset 56
 2293 00c8 5B       		popq	%rbx
 2294              		.cfi_def_cfa_offset 48
 2295              	.LVL257:
 2296 00c9 5D       		popq	%rbp
 2297              		.cfi_def_cfa_offset 40
 2298              	.LVL258:
 2299 00ca 415C     		popq	%r12
 2300              		.cfi_def_cfa_offset 32
 2301 00cc 415D     		popq	%r13
 2302              		.cfi_def_cfa_offset 24
 2303              	.LVL259:
 2304 00ce 415E     		popq	%r14
 2305              		.cfi_def_cfa_offset 16
 2306              	.LVL260:
 2307 00d0 415F     		popq	%r15
 2308              		.cfi_def_cfa_offset 8
 2309 00d2 C3       		ret
 2310              	.LVL261:
 2311              		.p2align 4,,10
 2312 00d3 0F1F4400 		.p2align 3
 2312      00
 2313              	.L227:
 2314              		.cfi_restore_state
 432:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2315              		.loc 2 432 0 discriminator 1
 2316 00d8 48C1E206 		salq	$6, %rdx
 2317              	.LVL262:
 2318 00dc 4829C2   		subq	%rax, %rdx
 2319 00df 4989D4   		movq	%rdx, %r12
 2320 00e2 4889D7   		movq	%rdx, %rdi
 2321 00e5 E967FFFF 		jmp	.L228
 2321      FF
 2322              		.cfi_endproc
 2323              	.LFE357:
 2325              		.section	.text.unlikely._ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv
 2326              	.LCOLDE20:
 2327              		.section	.text._ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv
 2328              	.LHOTE20:
 2329              		.section	.text.unlikely._ZN8Fl_Menu_D2Ev,"ax",@progbits
 2330              		.align 2
 2331              	.LCOLDB21:
 2332              		.section	.text._ZN8Fl_Menu_D2Ev,"ax",@progbits
 2333              	.LHOTB21:
 2334              		.align 2
 2335              		.p2align 4,,15
 2336              		.globl	_ZN8Fl_Menu_D2Ev
 2338              	_ZN8Fl_Menu_D2Ev:
 2339              	.LFB359:
 443:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2340              		.loc 2 443 0
 2341              		.cfi_startproc
 2342              	.LVL263:
 2343 0000 53       		pushq	%rbx
 2344              		.cfi_def_cfa_offset 16
 2345              		.cfi_offset 3, -16
 443:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2346              		.loc 2 443 0
 2347 0001 4889FB   		movq	%rdi, %rbx
 2348              	.LBB364:
 2349 0004 48C70700 		movq	$_ZTV8Fl_Menu_+16, (%rdi)
 2349      000000
 444:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 2350              		.loc 2 444 0
 2351 000b E8000000 		call	_ZN8Fl_Menu_5clearEv
 2351      00
 2352              	.LVL264:
 443:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2353              		.loc 2 443 0
 2354 0010 4889DF   		movq	%rbx, %rdi
 2355              	.LBE364:
 445:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 2356              		.loc 2 445 0
 2357 0013 5B       		popq	%rbx
 2358              		.cfi_def_cfa_offset 8
 2359              	.LVL265:
 2360              	.LBB365:
 443:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2361              		.loc 2 443 0
 2362 0014 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 2362      00
 2363              	.LVL266:
 2364              	.LBE365:
 2365              		.cfi_endproc
 2366              	.LFE359:
 2368              		.section	.text.unlikely._ZN8Fl_Menu_D2Ev
 2369              	.LCOLDE21:
 2370              		.section	.text._ZN8Fl_Menu_D2Ev
 2371              	.LHOTE21:
 2372              		.globl	_ZN8Fl_Menu_D1Ev
 2373              		.set	_ZN8Fl_Menu_D1Ev,_ZN8Fl_Menu_D2Ev
 2374              		.section	.text.unlikely._ZN8Fl_Menu_D0Ev,"ax",@progbits
 2375              		.align 2
 2376              	.LCOLDB22:
 2377              		.section	.text._ZN8Fl_Menu_D0Ev,"ax",@progbits
 2378              	.LHOTB22:
 2379              		.align 2
 2380              		.p2align 4,,15
 2381              		.globl	_ZN8Fl_Menu_D0Ev
 2383              	_ZN8Fl_Menu_D0Ev:
 2384              	.LFB361:
 443:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2385              		.loc 2 443 0
 2386              		.cfi_startproc
 2387              	.LVL267:
 2388 0000 53       		pushq	%rbx
 2389              		.cfi_def_cfa_offset 16
 2390              		.cfi_offset 3, -16
 443:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2391              		.loc 2 443 0
 2392 0001 4889FB   		movq	%rdi, %rbx
 2393              	.LBB366:
 2394              	.LBB367:
 2395 0004 48C70700 		movq	$_ZTV8Fl_Menu_+16, (%rdi)
 2395      000000
 444:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 2396              		.loc 2 444 0
 2397 000b E8000000 		call	_ZN8Fl_Menu_5clearEv
 2397      00
 2398              	.LVL268:
 443:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2399              		.loc 2 443 0
 2400 0010 4889DF   		movq	%rbx, %rdi
 2401 0013 E8000000 		call	_ZN9Fl_WidgetD2Ev
 2401      00
 2402              	.LVL269:
 2403              	.LBE367:
 2404              	.LBE366:
 445:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 2405              		.loc 2 445 0
 2406 0018 4889DF   		movq	%rbx, %rdi
 2407 001b 5B       		popq	%rbx
 2408              		.cfi_def_cfa_offset 8
 2409              	.LVL270:
 2410 001c E9000000 		jmp	_ZdlPv
 2410      00
 2411              	.LVL271:
 2412              		.cfi_endproc
 2413              	.LFE361:
 2415              		.section	.text.unlikely._ZN8Fl_Menu_D0Ev
 2416              	.LCOLDE22:
 2417              		.section	.text._ZN8Fl_Menu_D0Ev
 2418              	.LHOTE22:
 2419              		.section	.text.unlikely._ZN8Fl_Menu_13clear_submenuEi,"ax",@progbits
 2420              		.align 2
 2421              	.LCOLDB23:
 2422              		.section	.text._ZN8Fl_Menu_13clear_submenuEi,"ax",@progbits
 2423              	.LHOTB23:
 2424              		.align 2
 2425              		.p2align 4,,15
 2426              		.globl	_ZN8Fl_Menu_13clear_submenuEi
 2428              	_ZN8Fl_Menu_13clear_submenuEi:
 2429              	.LFB363:
 470:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 2430              		.loc 2 501 0
 2431              		.cfi_startproc
 2432              	.LVL272:
 502:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 2433              		.loc 2 502 0
 2434 0000 85F6     		testl	%esi, %esi
 2435 0002 0F888800 		js	.L264
 2435      0000
 501:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 2436              		.loc 2 501 0
 2437 0008 4154     		pushq	%r12
 2438              		.cfi_def_cfa_offset 16
 2439              		.cfi_offset 12, -16
 2440 000a 55       		pushq	%rbp
 2441              		.cfi_def_cfa_offset 24
 2442              		.cfi_offset 6, -24
 2443 000b 53       		pushq	%rbx
 2444              		.cfi_def_cfa_offset 32
 2445              		.cfi_offset 3, -32
 2446 000c 4889FB   		movq	%rdi, %rbx
 2447              	.LVL273:
 2448              	.LBB368:
 2449              	.LBB369:
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 2450              		.loc 2 408 0
 2451 000f 488B7F78 		movq	120(%rdi), %rdi
 2452              	.LVL274:
 2453 0013 4885FF   		testq	%rdi, %rdi
 2454 0016 7468     		je	.L248
 2455 0018 89F5     		movl	%esi, %ebp
 409:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 2456              		.loc 2 409 0
 2457 001a E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 2457      00
 2458              	.LVL275:
 2459              	.LBE369:
 2460              	.LBE368:
 2461              		.loc 2 502 0
 2462 001f 39C5     		cmpl	%eax, %ebp
 2463 0021 7D5D     		jge	.L248
 503:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2464              		.loc 2 503 0
 2465 0023 4C63E5   		movslq	%ebp, %r12
 2466 0026 488B7B78 		movq	120(%rbx), %rdi
 2467 002a 4A8D04E5 		leaq	0(,%r12,8), %rax
 2467      00000000 
 2468 0032 49C1E406 		salq	$6, %r12
 2469 0036 4929C4   		subq	%rax, %r12
 2470 0039 42F64427 		testb	$64, 32(%rdi,%r12)
 2470      2040
 2471 003f 743F     		je	.L248
 504:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 2472              		.loc 2 504 0
 2473 0041 83C501   		addl	$1, %ebp
 2474              	.LVL276:
 505:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 2475              		.loc 2 506 0
 2476 0044 4983C438 		addq	$56, %r12
 2477 0048 EB1F     		jmp	.L247
 2478 004a 660F1F44 		.p2align 4,,10
 2478      0000
 2479              		.p2align 3
 2480              	.L265:
 2481 0050 488B4378 		movq	120(%rbx), %rax
 2482 0054 4A833C20 		cmpq	$0, (%rax,%r12)
 2482      00
 2483 0059 741E     		je	.L252
 507:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 2484              		.loc 2 507 0
 2485 005b 4889DF   		movq	%rbx, %rdi
 2486 005e 89EE     		movl	%ebp, %esi
 2487 0060 E8000000 		call	_ZN8Fl_Menu_6removeEi
 2487      00
 2488              	.LVL277:
 2489 0065 488B7B78 		movq	120(%rbx), %rdi
 2490              	.L247:
 2491              	.LVL278:
 2492              	.LBB370:
 2493              	.LBB371:
 408:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 2494              		.loc 2 408 0
 2495 0069 31C0     		xorl	%eax, %eax
 2496 006b 4885FF   		testq	%rdi, %rdi
 2497 006e 7405     		je	.L245
 409:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 2498              		.loc 2 409 0
 2499 0070 E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 2499      00
 2500              	.LVL279:
 2501              	.L245:
 2502              	.LBE371:
 2503              	.LBE370:
 505:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 2504              		.loc 2 505 0
 2505 0075 39C5     		cmpl	%eax, %ebp
 2506 0077 7CD7     		jl	.L265
 2507              	.L252:
 508:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 2508              		.loc 2 510 0
 2509 0079 5B       		popq	%rbx
 2510              		.cfi_remember_state
 2511              		.cfi_restore 3
 2512              		.cfi_def_cfa_offset 24
 2513              	.LVL280:
 509:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 2514              		.loc 2 509 0
 2515 007a 31C0     		xorl	%eax, %eax
 2516              		.loc 2 510 0
 2517 007c 5D       		popq	%rbp
 2518              		.cfi_restore 6
 2519              		.cfi_def_cfa_offset 16
 2520              	.LVL281:
 2521 007d 415C     		popq	%r12
 2522              		.cfi_restore 12
 2523              		.cfi_def_cfa_offset 8
 2524 007f C3       		ret
 2525              	.LVL282:
 2526              		.p2align 4,,10
 2527              		.p2align 3
 2528              	.L248:
 2529              		.cfi_restore_state
 2530 0080 5B       		popq	%rbx
 2531              		.cfi_restore 3
 2532              		.cfi_def_cfa_offset 24
 2533              	.LVL283:
 502:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2534              		.loc 2 502 0
 2535 0081 B8FFFFFF 		movl	$-1, %eax
 2535      FF
 2536              		.loc 2 510 0
 2537 0086 5D       		popq	%rbp
 2538              		.cfi_restore 6
 2539              		.cfi_def_cfa_offset 16
 2540 0087 415C     		popq	%r12
 2541              		.cfi_restore 12
 2542              		.cfi_def_cfa_offset 8
 2543 0089 C3       		ret
 2544              	.LVL284:
 2545 008a 660F1F44 		.p2align 4,,10
 2545      0000
 2546              		.p2align 3
 2547              	.L264:
 502:fltk-1.3.4-1/src/Fl_Menu_.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2548              		.loc 2 502 0
 2549 0090 B8FFFFFF 		movl	$-1, %eax
 2549      FF
 2550              		.loc 2 510 0
 2551 0095 C3       		ret
 2552              		.cfi_endproc
 2553              	.LFE363:
 2555              		.section	.text.unlikely._ZN8Fl_Menu_13clear_submenuEi
 2556              	.LCOLDE23:
 2557              		.section	.text._ZN8Fl_Menu_13clear_submenuEi
 2558              	.LHOTE23:
 2559              		.weak	_ZTS8Fl_Menu_
 2560              		.section	.rodata._ZTS8Fl_Menu_,"aG",@progbits,_ZTS8Fl_Menu_,comdat
 2561              		.align 8
 2564              	_ZTS8Fl_Menu_:
 2565 0000 38466C5F 		.string	"8Fl_Menu_"
 2565      4D656E75 
 2565      5F00
 2566              		.weak	_ZTI8Fl_Menu_
 2567              		.section	.rodata._ZTI8Fl_Menu_,"aG",@progbits,_ZTI8Fl_Menu_,comdat
 2568              		.align 8
 2571              	_ZTI8Fl_Menu_:
 2572 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 2572      00000000 
 2573 0008 00000000 		.quad	_ZTS8Fl_Menu_
 2573      00000000 
 2574 0010 00000000 		.quad	_ZTI9Fl_Widget
 2574      00000000 
 2575              		.weak	_ZTV8Fl_Menu_
 2576              		.section	.rodata._ZTV8Fl_Menu_,"aG",@progbits,_ZTV8Fl_Menu_,comdat
 2577              		.align 8
 2580              	_ZTV8Fl_Menu_:
 2581 0000 00000000 		.quad	0
 2581      00000000 
 2582 0008 00000000 		.quad	_ZTI8Fl_Menu_
 2582      00000000 
 2583 0010 00000000 		.quad	0
 2583      00000000 
 2584 0018 00000000 		.quad	0
 2584      00000000 
 2585 0020 00000000 		.quad	__cxa_pure_virtual
 2585      00000000 
 2586 0028 00000000 		.quad	_ZN9Fl_Widget6handleEi
 2586      00000000 
 2587 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 2587      00000000 
 2588 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 2588      00000000 
 2589 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 2589      00000000 
 2590 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 2590      00000000 
 2591 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 2591      00000000 
 2592 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 2592      00000000 
 2593              		.globl	fl_menu_array_owner
 2594              		.section	.bss.fl_menu_array_owner,"aw",@nobits
 2595              		.align 8
 2598              	fl_menu_array_owner:
 2599 0000 00000000 		.zero	8
 2599      00000000 
 2600              		.text
 2601              	.Letext0:
 2602              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 2603              	.Letext_cold0:
 2604              		.file 7 "fltk-1.3.4-1/FL/fl_types.h"
 2605              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2606              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2607              		.file 10 "/usr/include/libio.h"
 2608              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 2609              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 2610              		.file 13 "/usr/include/stdio.h"
 2611              		.file 14 "fltk-1.3.4-1/src/flstring.h"
 2612              		.file 15 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Menu_.cxx
     /tmp/ccZUVNqH.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccZUVNqH.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccZUVNqH.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccZUVNqH.s:86     .text._ZL18first_submenu_itemP12Fl_Menu_ItemS0_:0000000000000000 _ZL18first_submenu_itemP12Fl_Menu_ItemS0_
     /tmp/ccZUVNqH.s:267    .text._ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_:0000000000000000 _ZNK8Fl_Menu_14item_pathname_EPciPK12Fl_Menu_ItemS3_
     /tmp/ccZUVNqH.s:690    .text._ZNK8Fl_Menu_13item_pathnameEPciPK12Fl_Menu_Item:0000000000000000 _ZNK8Fl_Menu_13item_pathnameEPciPK12Fl_Menu_Item
     /tmp/ccZUVNqH.s:717    .text._ZNK8Fl_Menu_10find_indexEPK12Fl_Menu_Item:0000000000000000 _ZNK8Fl_Menu_10find_indexEPK12Fl_Menu_Item
     /tmp/ccZUVNqH.s:805    .text._ZNK8Fl_Menu_10find_indexEPFvP9Fl_WidgetPvE:0000000000000000 _ZNK8Fl_Menu_10find_indexEPFvP9Fl_WidgetPvE
     /tmp/ccZUVNqH.s:926    .text._ZNK8Fl_Menu_10find_indexEPKc:0000000000000000 _ZNK8Fl_Menu_10find_indexEPKc
     /tmp/ccZUVNqH.s:1202   .text._ZN8Fl_Menu_9find_itemEPKc:0000000000000000 _ZN8Fl_Menu_9find_itemEPKc
     /tmp/ccZUVNqH.s:1260   .text._ZN8Fl_Menu_9find_itemEPFvP9Fl_WidgetPvE:0000000000000000 _ZN8Fl_Menu_9find_itemEPFvP9Fl_WidgetPvE
     /tmp/ccZUVNqH.s:1359   .text._ZN8Fl_Menu_5valueEPK12Fl_Menu_Item:0000000000000000 _ZN8Fl_Menu_5valueEPK12Fl_Menu_Item
     /tmp/ccZUVNqH.s:1400   .text._ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item:0000000000000000 _ZN8Fl_Menu_7setonlyEP12Fl_Menu_Item
     /tmp/ccZUVNqH.s:1543   .text._ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item:0000000000000000 _ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item
     /tmp/ccZUVNqH.s:1709   .text._ZN12Fl_Menu_Item7setonlyEv:0000000000000000 _ZN12Fl_Menu_Item7setonlyEv
     /tmp/ccZUVNqH.s:1828   .text._ZN8Fl_Menu_C2EiiiiPKc:0000000000000000 _ZN8Fl_Menu_C2EiiiiPKc
     /tmp/ccZUVNqH.s:2580   .rodata._ZTV8Fl_Menu_:0000000000000000 _ZTV8Fl_Menu_
     /tmp/ccZUVNqH.s:1828   .text._ZN8Fl_Menu_C2EiiiiPKc:0000000000000000 _ZN8Fl_Menu_C1EiiiiPKc
     /tmp/ccZUVNqH.s:1937   .text._ZNK8Fl_Menu_4sizeEv:0000000000000000 _ZNK8Fl_Menu_4sizeEv
     /tmp/ccZUVNqH.s:1972   .text._ZN8Fl_Menu_5clearEv:0000000000000000 _ZN8Fl_Menu_5clearEv
     /tmp/ccZUVNqH.s:2598   .bss.fl_menu_array_owner:0000000000000000 fl_menu_array_owner
     /tmp/ccZUVNqH.s:2121   .text._ZN8Fl_Menu_4menuEPK12Fl_Menu_Item:0000000000000000 _ZN8Fl_Menu_4menuEPK12Fl_Menu_Item
     /tmp/ccZUVNqH.s:2168   .text._ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv:0000000000000000 _ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv
     /tmp/ccZUVNqH.s:2338   .text._ZN8Fl_Menu_D2Ev:0000000000000000 _ZN8Fl_Menu_D2Ev
     /tmp/ccZUVNqH.s:2338   .text._ZN8Fl_Menu_D2Ev:0000000000000000 _ZN8Fl_Menu_D1Ev
     /tmp/ccZUVNqH.s:2383   .text._ZN8Fl_Menu_D0Ev:0000000000000000 _ZN8Fl_Menu_D0Ev
     /tmp/ccZUVNqH.s:2428   .text._ZN8Fl_Menu_13clear_submenuEi:0000000000000000 _ZN8Fl_Menu_13clear_submenuEi
     /tmp/ccZUVNqH.s:2564   .rodata._ZTS8Fl_Menu_:0000000000000000 _ZTS8Fl_Menu_
     /tmp/ccZUVNqH.s:2571   .rodata._ZTI8Fl_Menu_:0000000000000000 _ZTI8Fl_Menu_
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
strlen
strcat
_ZNK12Fl_Menu_Item4sizeEv
memcpy
strrchr
fl_strlcat
strcmp
__strcpy_chk
__stack_chk_fail
_ZN9Fl_Widget6redrawEv
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZN9Fl_WidgetC2EiiiiPKc
FL_NORMAL_SIZE
free
_ZdaPv
_Znam
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN8Fl_Menu_6removeEi
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Widget
__cxa_pure_virtual
_ZN9Fl_Widget6handleEi
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
