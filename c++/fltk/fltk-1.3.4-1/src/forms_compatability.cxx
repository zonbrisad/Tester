   1              		.file	"forms_compatability.cxx"
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
  80              		.section	.text.unlikely._ZN12Fl_FormsText4drawEv,"ax",@progbits
  81              		.align 2
  82              	.LCOLDB3:
  83              		.section	.text._ZN12Fl_FormsText4drawEv,"ax",@progbits
  84              	.LHOTB3:
  85              		.align 2
  86              		.p2align 4,,15
  87              		.globl	_ZN12Fl_FormsText4drawEv
  89              	_ZN12Fl_FormsText4drawEv:
  90              	.LFB976:
  91              		.file 2 "fltk-1.3.4-1/src/forms_compatability.cxx"
   1:fltk-1.3.4-1/src/forms_compatability.cxx ****    1              		.file	"forms_compatability.cxx"
   2:fltk-1.3.4-1/src/forms_compatability.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/forms_compatability.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/forms_compatability.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/forms_compatability.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/forms_compatability.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/forms_compatability.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/forms_compatability.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/forms_compatability.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/forms_compatability.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/forms_compatability.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/forms_compatability.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/forms_compatability.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/forms_compatability.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/forms_compatability.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/forms_compatability.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/forms_compatability.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/forms_compatability.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/forms_compatability.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/forms_compatability.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/forms_compatability.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/forms_compatability.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/forms_compatability.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/forms_compatability.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/forms_compatability.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/forms_compatability.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/forms_compatability.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/forms_compatability.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/forms_compatability.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/forms_compatability.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/forms_compatability.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/forms_compatability.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/forms_compatability.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/forms_compatability.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/forms_compatability.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/forms_compatability.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/forms_compatability.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/forms_compatability.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/forms_compatability.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/forms_compatability.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/forms_compatability.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/forms_compatability.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/forms_compatability.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/forms_compatability.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/forms_compatability.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/forms_compatability.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/forms_compatability.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/forms_compatability.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/forms_compatability.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/forms_compatability.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/forms_compatability.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/forms_compatability.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/forms_compatability.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/forms_compatability.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/forms_compatability.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/forms_compatability.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/forms_compatability.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/forms_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/forms_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/forms_compatability.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/forms_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/forms_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/forms_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/forms_compatability.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/forms_compatability.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/forms_compatability.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/forms_compatability.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/forms_compatability.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/forms_compatability.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/forms_compatability.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/forms_compatability.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/forms_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/forms_compatability.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/forms_compatability.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/forms_compatability.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/forms_compatability.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/forms_compatability.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/forms_compatability.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/forms_compatability.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/forms_compatability.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/forms_compatability.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/forms_compatability.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/forms_compatability.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/forms_compatability.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/forms_compatability.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/forms_compatability.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/forms_compatability.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/forms_compatability.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/forms_compatability.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/forms_compatability.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/forms_compatability.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/forms_compatability.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/forms_compatability.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/forms_compatability.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/forms_compatability.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/forms_compatability.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/forms_compatability.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/forms_compatability.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/forms_compatability.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/forms_compatability.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/forms_compatability.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/forms_compatability.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/forms_compatability.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/forms_compatability.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/forms_compatability.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/forms_compatability.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/forms_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/forms_compatability.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/forms_compatability.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/forms_compatability.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/forms_compatability.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/forms_compatability.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/forms_compatability.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/forms_compatability.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/forms_compatability.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/forms_compatability.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/forms_compatability.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/forms_compatability.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/forms_compatability.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/forms_compatability.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/forms_compatability.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/forms_compatability.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/forms_compatability.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/forms_compatability.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/forms_compatability.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/forms_compatability.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/forms_compatability.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/forms_compatability.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/forms_compatability.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/forms_compatability.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/forms_compatability.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/forms_compatability.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/forms_compatability.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  92              		.loc 2 133 0
  93              		.cfi_startproc
  94              	.LVL3:
  95 0000 53       		pushq	%rbx
  96              		.cfi_def_cfa_offset 16
  97              		.cfi_offset 3, -16
  98              		.loc 2 133 0
  99 0001 4889FB   		movq	%rdi, %rbx
 134:fltk-1.3.4-1/src/forms_compatability.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 100              		.loc 2 134 0
 101 0004 E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 101      00
 102              	.LVL4:
 103              	.LBB126:
 104              	.LBB127:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105              		.loc 1 357 0
 106 0009 834B5410 		orl	$16, 84(%rbx)
 107              	.LVL5:
 108              	.LBE127:
 109              	.LBE126:
 135:fltk-1.3.4-1/src/forms_compatability.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/forms_compatability.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 110              		.loc 2 136 0
 111 000d 4889DF   		movq	%rbx, %rdi
 137:fltk-1.3.4-1/src/forms_compatability.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 112              		.loc 2 137 0
 113 0010 5B       		popq	%rbx
 114              		.cfi_def_cfa_offset 8
 115              	.LVL6:
 136:fltk-1.3.4-1/src/forms_compatability.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 116              		.loc 2 136 0
 117 0011 E9000000 		jmp	_ZNK9Fl_Widget10draw_labelEv
 117      00
 118              	.LVL7:
 119              		.cfi_endproc
 120              	.LFE976:
 122              		.section	.text.unlikely._ZN12Fl_FormsText4drawEv
 123              	.LCOLDE3:
 124              		.section	.text._ZN12Fl_FormsText4drawEv
 125              	.LHOTE3:
 126              		.section	.text.unlikely._ZN12Fl_FormsTextD2Ev,"axG",@progbits,_ZN12Fl_FormsTextD5Ev,comdat
 127              		.align 2
 128              	.LCOLDB4:
 129              		.section	.text._ZN12Fl_FormsTextD2Ev,"axG",@progbits,_ZN12Fl_FormsTextD5Ev,comdat
 130              	.LHOTB4:
 131              		.align 2
 132              		.p2align 4,,15
 133              		.weak	_ZN12Fl_FormsTextD2Ev
 135              	_ZN12Fl_FormsTextD2Ev:
 136              	.LFB985:
 137              		.file 3 "fltk-1.3.4-1/FL/forms.H"
   1:fltk-1.3.4-1/FL/forms.H **** //
   2:fltk-1.3.4-1/FL/forms.H **** // "$Id: forms.H 10410 2014-10-29 20:17:38Z cand $"
   3:fltk-1.3.4-1/FL/forms.H **** //
   4:fltk-1.3.4-1/FL/forms.H **** // Forms emulation header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/forms.H **** //
   6:fltk-1.3.4-1/FL/forms.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/forms.H **** //
   8:fltk-1.3.4-1/FL/forms.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/forms.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/forms.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/forms.H **** //
  12:fltk-1.3.4-1/FL/forms.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/forms.H **** //
  14:fltk-1.3.4-1/FL/forms.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/forms.H **** //
  16:fltk-1.3.4-1/FL/forms.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/forms.H **** //
  18:fltk-1.3.4-1/FL/forms.H **** 
  19:fltk-1.3.4-1/FL/forms.H **** #ifndef __FORMS_H__
  20:fltk-1.3.4-1/FL/forms.H **** #define __FORMS_H__
  21:fltk-1.3.4-1/FL/forms.H **** 
  22:fltk-1.3.4-1/FL/forms.H **** #include "Fl.H"
  23:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Group.H"
  24:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Window.H"
  25:fltk-1.3.4-1/FL/forms.H **** #include "fl_draw.H"
  26:fltk-1.3.4-1/FL/forms.H **** 
  27:fltk-1.3.4-1/FL/forms.H **** typedef Fl_Widget FL_OBJECT;
  28:fltk-1.3.4-1/FL/forms.H **** typedef Fl_Window FL_FORM;
  29:fltk-1.3.4-1/FL/forms.H **** 
  30:fltk-1.3.4-1/FL/forms.H **** ////////////////////////////////////////////////////////////////
  31:fltk-1.3.4-1/FL/forms.H **** // Random constants & symbols defined by forms.h file:
  32:fltk-1.3.4-1/FL/forms.H **** 
  33:fltk-1.3.4-1/FL/forms.H **** #ifndef NULL
  34:fltk-1.3.4-1/FL/forms.H **** #define NULL 0
  35:fltk-1.3.4-1/FL/forms.H **** #endif
  36:fltk-1.3.4-1/FL/forms.H **** #ifndef FALSE
  37:fltk-1.3.4-1/FL/forms.H **** #define FALSE 0
  38:fltk-1.3.4-1/FL/forms.H **** #define TRUE 1
  39:fltk-1.3.4-1/FL/forms.H **** #endif
  40:fltk-1.3.4-1/FL/forms.H **** 
  41:fltk-1.3.4-1/FL/forms.H **** #define FL_ON		1
  42:fltk-1.3.4-1/FL/forms.H **** #define FL_OK		1
  43:fltk-1.3.4-1/FL/forms.H **** #define FL_VALID	1
  44:fltk-1.3.4-1/FL/forms.H **** #define FL_PREEMPT	1
  45:fltk-1.3.4-1/FL/forms.H **** #define FL_AUTO		2
  46:fltk-1.3.4-1/FL/forms.H **** #define FL_WHEN_NEEDED	FL_AUTO
  47:fltk-1.3.4-1/FL/forms.H **** #define FL_OFF		0
  48:fltk-1.3.4-1/FL/forms.H **** #define FL_NONE		0
  49:fltk-1.3.4-1/FL/forms.H **** #define FL_CANCEL	0
  50:fltk-1.3.4-1/FL/forms.H **** #define FL_INVALID	0
  51:fltk-1.3.4-1/FL/forms.H **** #define FL_IGNORE	-1
  52:fltk-1.3.4-1/FL/forms.H **** //#define FL_CLOSE	-2 // this variable is never used in FLTK Forms. It is removed becaus it conflic
  53:fltk-1.3.4-1/FL/forms.H **** 
  54:fltk-1.3.4-1/FL/forms.H **** #define FL_LCOL		FL_BLACK
  55:fltk-1.3.4-1/FL/forms.H **** #define FL_COL1		FL_GRAY
  56:fltk-1.3.4-1/FL/forms.H **** #define FL_MCOL		FL_LIGHT1
  57:fltk-1.3.4-1/FL/forms.H **** #define FL_LEFT_BCOL	FL_LIGHT3 // 53 is better match
  58:fltk-1.3.4-1/FL/forms.H **** #define FL_TOP_BCOL	FL_LIGHT2 // 51
  59:fltk-1.3.4-1/FL/forms.H **** #define FL_BOTTOM_BCOL	FL_DARK2  // 40
  60:fltk-1.3.4-1/FL/forms.H **** #define FL_RIGHT_BCOL	FL_DARK3  // 36
  61:fltk-1.3.4-1/FL/forms.H **** #define FL_INACTIVE	FL_INACTIVE_COLOR
  62:fltk-1.3.4-1/FL/forms.H **** #define FL_INACTIVE_COL	FL_INACTIVE_COLOR
  63:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL1	FL_FREE_COLOR
  64:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL2	((Fl_Color)(FL_FREE_COLOR+1))
  65:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL3	((Fl_Color)(FL_FREE_COLOR+2))
  66:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL4	((Fl_Color)(FL_FREE_COLOR+3))
  67:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL5	((Fl_Color)(FL_FREE_COLOR+4))
  68:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL6	((Fl_Color)(FL_FREE_COLOR+5))
  69:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL7	((Fl_Color)(FL_FREE_COLOR+6))
  70:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL8	((Fl_Color)(FL_FREE_COLOR+7))
  71:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL9	((Fl_Color)(FL_FREE_COLOR+8))
  72:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL10	((Fl_Color)(FL_FREE_COLOR+9))
  73:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL11	((Fl_Color)(FL_FREE_COLOR+10))
  74:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL12	((Fl_Color)(FL_FREE_COLOR+11))
  75:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL13	((Fl_Color)(FL_FREE_COLOR+12))
  76:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL14	((Fl_Color)(FL_FREE_COLOR+13))
  77:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL15	((Fl_Color)(FL_FREE_COLOR+14))
  78:fltk-1.3.4-1/FL/forms.H **** #define FL_FREE_COL16	((Fl_Color)(FL_FREE_COLOR+15))
  79:fltk-1.3.4-1/FL/forms.H **** #define FL_TOMATO	((Fl_Color)(131))
  80:fltk-1.3.4-1/FL/forms.H **** #define FL_INDIANRED	((Fl_Color)(164))
  81:fltk-1.3.4-1/FL/forms.H **** #define FL_SLATEBLUE	((Fl_Color)(195))
  82:fltk-1.3.4-1/FL/forms.H **** #define FL_DARKGOLD	((Fl_Color)(84))
  83:fltk-1.3.4-1/FL/forms.H **** #define FL_PALEGREEN	((Fl_Color)(157))
  84:fltk-1.3.4-1/FL/forms.H **** #define FL_ORCHID	((Fl_Color)(203))
  85:fltk-1.3.4-1/FL/forms.H **** #define FL_DARKCYAN	((Fl_Color)(189))
  86:fltk-1.3.4-1/FL/forms.H **** #define FL_DARKTOMATO	((Fl_Color)(113))
  87:fltk-1.3.4-1/FL/forms.H **** #define FL_WHEAT	((Fl_Color)(174))
  88:fltk-1.3.4-1/FL/forms.H **** 
  89:fltk-1.3.4-1/FL/forms.H **** #define FL_ALIGN_BESIDE	FL_ALIGN_INSIDE
  90:fltk-1.3.4-1/FL/forms.H **** 
  91:fltk-1.3.4-1/FL/forms.H **** #define FL_PUP_TOGGLE	2 // FL_MENU_TOGGLE
  92:fltk-1.3.4-1/FL/forms.H **** #define FL_PUP_INACTIVE 1 // FL_MENU_INACTIVE
  93:fltk-1.3.4-1/FL/forms.H **** #define FL_NO_FRAME	FL_NO_BOX
  94:fltk-1.3.4-1/FL/forms.H **** #define FL_ROUNDED3D_UPBOX 	FL_ROUND_UP_BOX
  95:fltk-1.3.4-1/FL/forms.H **** #define FL_ROUNDED3D_DOWNBOX	FL_ROUND_DOWN_BOX
  96:fltk-1.3.4-1/FL/forms.H **** #define FL_OVAL3D_UPBOX		FL_ROUND_UP_BOX
  97:fltk-1.3.4-1/FL/forms.H **** #define FL_OVAL3D_DOWNBOX	FL_ROUND_DOWN_BOX
  98:fltk-1.3.4-1/FL/forms.H **** 
  99:fltk-1.3.4-1/FL/forms.H **** #define FL_MBUTTON1	1
 100:fltk-1.3.4-1/FL/forms.H **** #define FL_LEFTMOUSE	1
 101:fltk-1.3.4-1/FL/forms.H **** #define FL_MBUTTON2	2
 102:fltk-1.3.4-1/FL/forms.H **** #define FL_MIDDLEMOUSE	2
 103:fltk-1.3.4-1/FL/forms.H **** #define FL_MBUTTON3	3
 104:fltk-1.3.4-1/FL/forms.H **** #define FL_RIGHTMOUSE	3
 105:fltk-1.3.4-1/FL/forms.H **** #define FL_MBUTTON4	4
 106:fltk-1.3.4-1/FL/forms.H **** #define FL_MBUTTON5	5
 107:fltk-1.3.4-1/FL/forms.H **** 
 108:fltk-1.3.4-1/FL/forms.H **** #define FL_INVALID_STYLE 255
 109:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_STYLE	FL_HELVETICA
 110:fltk-1.3.4-1/FL/forms.H **** #define FL_BOLD_STYLE	FL_HELVETICA_BOLD
 111:fltk-1.3.4-1/FL/forms.H **** #define FL_ITALIC_STYLE	FL_HELVETICA_ITALIC
 112:fltk-1.3.4-1/FL/forms.H **** #define FL_BOLDITALIC_STYLE FL_HELVETICA_BOLD_ITALIC
 113:fltk-1.3.4-1/FL/forms.H **** #define FL_FIXED_STYLE	FL_COURIER
 114:fltk-1.3.4-1/FL/forms.H **** #define FL_FIXEDBOLD_STYLE FL_COURIER_BOLD
 115:fltk-1.3.4-1/FL/forms.H **** #define FL_FIXEDITALIC_STYLE FL_COURIER_ITALIC
 116:fltk-1.3.4-1/FL/forms.H **** #define FL_FIXEDBOLDITALIC_STYLE FL_COURIER_BOLD_ITALIC
 117:fltk-1.3.4-1/FL/forms.H **** #define FL_TIMES_STYLE	FL_TIMES
 118:fltk-1.3.4-1/FL/forms.H **** #define FL_TIMESBOLD_STYLE FL_TIMES_BOLD
 119:fltk-1.3.4-1/FL/forms.H **** #define FL_TIMESITALIC_STYLE FL_TIMES_ITALIC
 120:fltk-1.3.4-1/FL/forms.H **** #define FL_TIMESBOLDITALIC_STYLE FL_TIMES_BOLD_ITALIC
 121:fltk-1.3.4-1/FL/forms.H **** 
 122:fltk-1.3.4-1/FL/forms.H **** // hacks to change the labeltype() when passed to fl_set_object_lstyle():
 123:fltk-1.3.4-1/FL/forms.H **** #define FL_SHADOW_STYLE		(FL_SHADOW_LABEL<<8)
 124:fltk-1.3.4-1/FL/forms.H **** #define FL_ENGRAVED_STYLE	(FL_ENGRAVED_LABEL<<8)
 125:fltk-1.3.4-1/FL/forms.H **** #define FL_EMBOSSED_STYLE	(FL_EMBOSSED_LABEL<<0)
 126:fltk-1.3.4-1/FL/forms.H **** 
 127:fltk-1.3.4-1/FL/forms.H **** // size values are different from XForms, match older Forms:
 128:fltk-1.3.4-1/FL/forms.H **** #define FL_TINY_SIZE	8
 129:fltk-1.3.4-1/FL/forms.H **** #define FL_SMALL_SIZE	11 // 10
 130:fltk-1.3.4-1/FL/forms.H **** //#define FL_NORMAL_SIZE	14 // 12
 131:fltk-1.3.4-1/FL/forms.H **** #define FL_MEDIUM_SIZE	18 // 14
 132:fltk-1.3.4-1/FL/forms.H **** #define FL_LARGE_SIZE	24 // 18
 133:fltk-1.3.4-1/FL/forms.H **** #define FL_HUGE_SIZE	32 // 24
 134:fltk-1.3.4-1/FL/forms.H **** #define FL_DEFAULT_SIZE	FL_SMALL_SIZE
 135:fltk-1.3.4-1/FL/forms.H **** #define FL_TINY_FONT	FL_TINY_SIZE
 136:fltk-1.3.4-1/FL/forms.H **** #define FL_SMALL_FONT	FL_SMALL_SIZE
 137:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_FONT	FL_NORMAL_SIZE
 138:fltk-1.3.4-1/FL/forms.H **** #define FL_MEDIUM_FONT	FL_MEDIUM_SIZE
 139:fltk-1.3.4-1/FL/forms.H **** #define FL_LARGE_FONT	FL_LARGE_SIZE
 140:fltk-1.3.4-1/FL/forms.H **** #define FL_HUGE_FONT	FL_HUGE_SIZE
 141:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_FONT1	FL_SMALL_FONT
 142:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_FONT2	FL_NORMAL_FONT
 143:fltk-1.3.4-1/FL/forms.H **** #define FL_DEFAULT_FONT	FL_SMALL_FONT
 144:fltk-1.3.4-1/FL/forms.H **** 
 145:fltk-1.3.4-1/FL/forms.H **** #define FL_RETURN_END_CHANGED	FL_WHEN_RELEASE
 146:fltk-1.3.4-1/FL/forms.H **** #define FL_RETURN_CHANGED	FL_WHEN_CHANGED
 147:fltk-1.3.4-1/FL/forms.H **** #define FL_RETURN_END		FL_WHEN_RELEASE_ALWAYS
 148:fltk-1.3.4-1/FL/forms.H **** #define FL_RETURN_ALWAYS	(FL_WHEN_CHANGED|FL_WHEN_NOT_CHANGED)
 149:fltk-1.3.4-1/FL/forms.H **** 
 150:fltk-1.3.4-1/FL/forms.H **** #define FL_BOUND_WIDTH	3
 151:fltk-1.3.4-1/FL/forms.H **** 
 152:fltk-1.3.4-1/FL/forms.H **** typedef int FL_Coord;
 153:fltk-1.3.4-1/FL/forms.H **** typedef int FL_COLOR;
 154:fltk-1.3.4-1/FL/forms.H **** 
 155:fltk-1.3.4-1/FL/forms.H **** ////////////////////////////////////////////////////////////////
 156:fltk-1.3.4-1/FL/forms.H **** // fltk interaction:
 157:fltk-1.3.4-1/FL/forms.H **** 
 158:fltk-1.3.4-1/FL/forms.H **** #define FL_CMD_OPT void
 159:fltk-1.3.4-1/FL/forms.H **** extern FL_EXPORT void fl_initialize(int*, char*[], const char*, FL_CMD_OPT*, int);
 160:fltk-1.3.4-1/FL/forms.H **** inline void fl_finish() {}
 161:fltk-1.3.4-1/FL/forms.H **** 
 162:fltk-1.3.4-1/FL/forms.H **** typedef void (*FL_IO_CALLBACK) (FL_SOCKET, void*);
 163:fltk-1.3.4-1/FL/forms.H **** inline void fl_add_io_callback(int fd, short w, FL_IO_CALLBACK cb, void* v) {
 164:fltk-1.3.4-1/FL/forms.H ****   Fl::add_fd(fd, w, cb, v);}
 165:fltk-1.3.4-1/FL/forms.H **** inline void fl_remove_io_callback(int fd, short, FL_IO_CALLBACK) {
 166:fltk-1.3.4-1/FL/forms.H ****   Fl::remove_fd(fd);} // removes all the callbacks!
 167:fltk-1.3.4-1/FL/forms.H **** 
 168:fltk-1.3.4-1/FL/forms.H **** // type of callback is different and no "id" number is returned:
 169:fltk-1.3.4-1/FL/forms.H **** inline void fl_add_timeout(long msec, void (*cb)(void*), void* v) {
 170:fltk-1.3.4-1/FL/forms.H ****   Fl::add_timeout(msec*.001, cb, v);}
 171:fltk-1.3.4-1/FL/forms.H **** inline void fl_remove_timeout(int) {}
 172:fltk-1.3.4-1/FL/forms.H **** 
 173:fltk-1.3.4-1/FL/forms.H **** // type of callback is different!
 174:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_idle_callback(void (*cb)()) {Fl::set_idle(cb);}
 175:fltk-1.3.4-1/FL/forms.H **** 
 176:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT Fl_Widget* fl_do_forms(void);
 177:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT Fl_Widget* fl_check_forms();
 178:fltk-1.3.4-1/FL/forms.H **** inline Fl_Widget* fl_do_only_forms(void) {return fl_do_forms();}
 179:fltk-1.3.4-1/FL/forms.H **** inline Fl_Widget* fl_check_only_forms(void) {return fl_check_forms();}
 180:fltk-1.3.4-1/FL/forms.H **** 
 181:fltk-1.3.4-1/FL/forms.H **** // because of new redraw behavior, these are no-ops:
 182:fltk-1.3.4-1/FL/forms.H **** inline void fl_freeze_object(Fl_Widget*) {}
 183:fltk-1.3.4-1/FL/forms.H **** inline void fl_unfreeze_object(Fl_Widget*) {}
 184:fltk-1.3.4-1/FL/forms.H **** inline void fl_freeze_form(Fl_Window*) {}
 185:fltk-1.3.4-1/FL/forms.H **** inline void fl_unfreeze_form(Fl_Window*) {}
 186:fltk-1.3.4-1/FL/forms.H **** inline void fl_freeze_all_forms() {}
 187:fltk-1.3.4-1/FL/forms.H **** inline void fl_unfreeze_all_forms() {}
 188:fltk-1.3.4-1/FL/forms.H **** 
 189:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_focus_object(Fl_Window*, Fl_Widget* o) {Fl::focus(o);}
 190:fltk-1.3.4-1/FL/forms.H **** inline void fl_reset_focus_object(Fl_Widget* o) {Fl::focus(o);}
 191:fltk-1.3.4-1/FL/forms.H **** #define fl_set_object_focus fl_set_focus_object
 192:fltk-1.3.4-1/FL/forms.H **** 
 193:fltk-1.3.4-1/FL/forms.H **** // void fl_set_form_atclose(Fl_Window*w,int (*cb)(Fl_Window*,void*),void* v)
 194:fltk-1.3.4-1/FL/forms.H **** // void fl_set_atclose(int (*cb)(Fl_Window*,void*),void*)
 195:fltk-1.3.4-1/FL/forms.H **** // fl_set_form_atactivate/atdeactivate not implemented!
 196:fltk-1.3.4-1/FL/forms.H **** 
 197:fltk-1.3.4-1/FL/forms.H **** ////////////////////////////////////////////////////////////////
 198:fltk-1.3.4-1/FL/forms.H **** // Fl_Widget:
 199:fltk-1.3.4-1/FL/forms.H **** 
 200:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_boxtype(Fl_Widget* o, Fl_Boxtype a) {o->box(a);}
 201:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_lsize(Fl_Widget* o,int s) {o->labelsize(s);}
 202:fltk-1.3.4-1/FL/forms.H **** 
 203:fltk-1.3.4-1/FL/forms.H **** /* forms lib font indexes must be byte sized - extract correct byte from style word */
 204:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_lstyle(Fl_Widget* o,int a) {
 205:fltk-1.3.4-1/FL/forms.H ****   o->labelfont((Fl_Font)(a&0xff)); o->labeltype((Fl_Labeltype)(a>>8));}
 206:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_lcol(Fl_Widget* o, Fl_Color a) {o->labelcolor(a);}
 207:fltk-1.3.4-1/FL/forms.H **** #define fl_set_object_lcolor  fl_set_object_lcol
 208:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_lalign(Fl_Widget* o, Fl_Align a) {o->align(a);}
 209:fltk-1.3.4-1/FL/forms.H **** #define fl_set_object_align fl_set_object_lalign
 210:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_color(Fl_Widget* o,Fl_Color a,Fl_Color b) {o->color(a,b);}
 211:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_label(Fl_Widget* o, const char* a) {o->label(a); o->redraw();}
 212:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_position(Fl_Widget*o,int x,int y) {o->position(x,y);}
 213:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_size(Fl_Widget* o, int w, int h) {o->size(w,h);}
 214:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_geometry(Fl_Widget* o,int x,int y,int w,int h) {o->resize(x,y,w,h);}
 215:fltk-1.3.4-1/FL/forms.H **** 
 216:fltk-1.3.4-1/FL/forms.H **** inline void fl_get_object_geometry(Fl_Widget* o,int*x,int*y,int*w,int*h) {
 217:fltk-1.3.4-1/FL/forms.H ****   *x = o->x(); *y = o->y(); *w = o->w(); *h = o->h();}
 218:fltk-1.3.4-1/FL/forms.H **** inline void fl_get_object_position(Fl_Widget* o,int*x,int*y) {
 219:fltk-1.3.4-1/FL/forms.H ****   *x = o->x(); *y = o->y();}
 220:fltk-1.3.4-1/FL/forms.H **** 
 221:fltk-1.3.4-1/FL/forms.H **** typedef void (*Forms_CB)(Fl_Widget*, long);
 222:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_callback(Fl_Widget*o,Forms_CB c,long a) {o->callback(c,a);}
 223:fltk-1.3.4-1/FL/forms.H **** #define fl_set_call_back      fl_set_object_callback
 224:fltk-1.3.4-1/FL/forms.H **** inline void fl_call_object_callback(Fl_Widget* o) {o->do_callback();}
 225:fltk-1.3.4-1/FL/forms.H **** inline void fl_trigger_object(Fl_Widget* o) {o->do_callback();}
 226:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_return(Fl_Widget* o, int v) {
 227:fltk-1.3.4-1/FL/forms.H ****   o->when((Fl_When)(v|FL_WHEN_RELEASE));}
 228:fltk-1.3.4-1/FL/forms.H **** 
 229:fltk-1.3.4-1/FL/forms.H **** inline void fl_redraw_object(Fl_Widget* o) {o->redraw();}
 230:fltk-1.3.4-1/FL/forms.H **** inline void fl_show_object(Fl_Widget* o) {o->show();}
 231:fltk-1.3.4-1/FL/forms.H **** inline void fl_hide_object(Fl_Widget* o) {o->hide();}
 232:fltk-1.3.4-1/FL/forms.H **** inline void fl_free_object(Fl_Widget* x) {delete x;}
 233:fltk-1.3.4-1/FL/forms.H **** inline void fl_delete_object(Fl_Widget* o) {o->parent()->remove(*o);}
 234:fltk-1.3.4-1/FL/forms.H **** inline void fl_activate_object(Fl_Widget* o) {o->activate();}
 235:fltk-1.3.4-1/FL/forms.H **** inline void fl_deactivate_object(Fl_Widget* o) {o->deactivate();}
 236:fltk-1.3.4-1/FL/forms.H **** 
 237:fltk-1.3.4-1/FL/forms.H **** inline void fl_add_object(Fl_Window* f, Fl_Widget* x) {f->add(x);}
 238:fltk-1.3.4-1/FL/forms.H **** inline void fl_insert_object(Fl_Widget* o, Fl_Widget* b) {b->parent()->insert(*o,b);}
 239:fltk-1.3.4-1/FL/forms.H **** 
 240:fltk-1.3.4-1/FL/forms.H **** inline Fl_Window* FL_ObjWin(Fl_Widget* o) {return o->window();}
 241:fltk-1.3.4-1/FL/forms.H **** 
 242:fltk-1.3.4-1/FL/forms.H **** ////////////////////////////////////////////////////////////////
 243:fltk-1.3.4-1/FL/forms.H **** // things that appered in the demos a lot that I don't emulate, but
 244:fltk-1.3.4-1/FL/forms.H **** // I did not want to edit out of all the demos...
 245:fltk-1.3.4-1/FL/forms.H **** 
 246:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_border_width() {return 3;}
 247:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_border_width(int) {}
 248:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_object_dblbuffer(Fl_Widget*, int) {}
 249:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_form_dblbuffer(Fl_Window*, int) {}
 250:fltk-1.3.4-1/FL/forms.H **** 
 251:fltk-1.3.4-1/FL/forms.H **** ////////////////////////////////////////////////////////////////
 252:fltk-1.3.4-1/FL/forms.H **** // Fl_Window:
 253:fltk-1.3.4-1/FL/forms.H **** 
 254:fltk-1.3.4-1/FL/forms.H **** inline void fl_free_form(Fl_Window* x) {delete x;}
 255:fltk-1.3.4-1/FL/forms.H **** inline void fl_redraw_form(Fl_Window* f) {f->redraw();}
 256:fltk-1.3.4-1/FL/forms.H **** 
 257:fltk-1.3.4-1/FL/forms.H **** inline Fl_Window* fl_bgn_form(Fl_Boxtype b,int w,int h) {
 258:fltk-1.3.4-1/FL/forms.H ****   Fl_Window* g = new Fl_Window(w,h,0);
 259:fltk-1.3.4-1/FL/forms.H ****   g->box(b);
 260:fltk-1.3.4-1/FL/forms.H ****   return g;
 261:fltk-1.3.4-1/FL/forms.H **** }
 262:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT void fl_end_form();
 263:fltk-1.3.4-1/FL/forms.H **** inline void fl_addto_form(Fl_Window* f) {f->begin();}
 264:fltk-1.3.4-1/FL/forms.H **** inline Fl_Group* fl_bgn_group() {return new Fl_Group(0,0,0,0,0);}
 265:fltk-1.3.4-1/FL/forms.H **** inline void fl_end_group() {Fl_Group::current()->forms_end();}
 266:fltk-1.3.4-1/FL/forms.H **** inline void fl_addto_group(Fl_Widget* o) {((Fl_Group* )o)->begin();}
 267:fltk-1.3.4-1/FL/forms.H **** #define resizebox _ddfdesign_kludge()
 268:fltk-1.3.4-1/FL/forms.H **** 
 269:fltk-1.3.4-1/FL/forms.H **** inline void fl_scale_form(Fl_Window* f, double x, double y) {
 270:fltk-1.3.4-1/FL/forms.H ****   f->resizable(f); f->size(int(f->w()*x),int(f->h()*y));}
 271:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_form_position(Fl_Window* f,int x,int y) {f->position(x,y);}
 272:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_form_size(Fl_Window* f, int w, int h) {f->size(w,h);}
 273:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_form_geometry(Fl_Window* f,int x,int y,int w,int h) {
 274:fltk-1.3.4-1/FL/forms.H ****   f->resize(x,y,w,h);}
 275:fltk-1.3.4-1/FL/forms.H **** #define fl_set_initial_placement fl_set_form_geometry
 276:fltk-1.3.4-1/FL/forms.H **** inline void fl_adjust_form_size(Fl_Window*) {}
 277:fltk-1.3.4-1/FL/forms.H **** 
 278:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT void fl_show_form(Fl_Window* f,int p,int b,const char* n);
 279:fltk-1.3.4-1/FL/forms.H **** enum {	// "p" argument values:
 280:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_FREE = 0,	// make resizable
 281:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_MOUSE = 1,	// mouse centered on form
 282:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_CENTER = 2,	// center of the screen
 283:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_POSITION = 4,// fixed position, resizable
 284:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_SIZE = 8,	// fixed size, normal fltk behavior
 285:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_GEOMETRY =16,// fixed size and position
 286:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_ASPECT = 32,	// keep aspect ratio (ignored)
 287:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_FULLSCREEN=64,// fill screen
 288:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_HOTSPOT = 128,// enables hotspot
 289:fltk-1.3.4-1/FL/forms.H ****   FL_PLACE_ICONIC = 256,// iconic (ignored)
 290:fltk-1.3.4-1/FL/forms.H ****   FL_FREE_SIZE=(1<<14),	// force resizable
 291:fltk-1.3.4-1/FL/forms.H ****   FL_FIX_SIZE =(1<<15)	// force off resizable
 292:fltk-1.3.4-1/FL/forms.H **** };
 293:fltk-1.3.4-1/FL/forms.H **** #define FL_PLACE_FREE_CENTER (FL_PLACE_CENTER|FL_FREE_SIZE)
 294:fltk-1.3.4-1/FL/forms.H **** #define FL_PLACE_CENTERFREE  (FL_PLACE_CENTER|FL_FREE_SIZE)
 295:fltk-1.3.4-1/FL/forms.H **** enum {	// "b" arguement values:
 296:fltk-1.3.4-1/FL/forms.H ****   FL_NOBORDER = 0,
 297:fltk-1.3.4-1/FL/forms.H ****   FL_FULLBORDER,
 298:fltk-1.3.4-1/FL/forms.H ****   FL_TRANSIENT
 299:fltk-1.3.4-1/FL/forms.H **** //FL_MODAL = (1<<8)	// not implemented yet in Forms
 300:fltk-1.3.4-1/FL/forms.H **** };
 301:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_form_hotspot(Fl_Window* w,int x,int y) {w->hotspot(x,y);}
 302:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_form_hotobject(Fl_Window* w, Fl_Widget* o) {w->hotspot(o);}
 303:fltk-1.3.4-1/FL/forms.H **** extern FL_EXPORT char fl_flip;	// in forms.C
 304:fltk-1.3.4-1/FL/forms.H **** inline void fl_flip_yorigin() {fl_flip = 1;}
 305:fltk-1.3.4-1/FL/forms.H **** 
 306:fltk-1.3.4-1/FL/forms.H **** #define fl_prepare_form_window fl_show_form
 307:fltk-1.3.4-1/FL/forms.H **** inline void fl_show_form_window(Fl_Window*) {}
 308:fltk-1.3.4-1/FL/forms.H **** 
 309:fltk-1.3.4-1/FL/forms.H **** inline void fl_raise_form(Fl_Window* f) {f->show();}
 310:fltk-1.3.4-1/FL/forms.H **** 
 311:fltk-1.3.4-1/FL/forms.H **** inline void fl_hide_form(Fl_Window* f) {f->hide();}
 312:fltk-1.3.4-1/FL/forms.H **** inline void fl_pop_form(Fl_Window* f) {f->show();}
 313:fltk-1.3.4-1/FL/forms.H **** 
 314:fltk-1.3.4-1/FL/forms.H **** extern FL_EXPORT char fl_modal_next; // in forms.C
 315:fltk-1.3.4-1/FL/forms.H **** inline void fl_activate_all_forms() {}
 316:fltk-1.3.4-1/FL/forms.H **** inline void fl_deactivate_all_forms() {fl_modal_next = 1;}
 317:fltk-1.3.4-1/FL/forms.H **** inline void fl_deactivate_form(Fl_Window*w) {w->deactivate();}
 318:fltk-1.3.4-1/FL/forms.H **** inline void fl_activate_form(Fl_Window*w) {w->activate();}
 319:fltk-1.3.4-1/FL/forms.H **** 
 320:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_form_title(Fl_Window* f, const char* s) {f->label(s);}
 321:fltk-1.3.4-1/FL/forms.H **** inline void fl_title_form(Fl_Window* f, const char* s) {f->label(s);}
 322:fltk-1.3.4-1/FL/forms.H **** 
 323:fltk-1.3.4-1/FL/forms.H **** typedef void (*Forms_FormCB)(Fl_Widget*);
 324:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_form_callback(Fl_Window* f,Forms_FormCB c) {f->callback(c);}
 325:fltk-1.3.4-1/FL/forms.H **** #define fl_set_form_call_back fl_set_form_callback
 326:fltk-1.3.4-1/FL/forms.H **** 
 327:fltk-1.3.4-1/FL/forms.H **** inline void fl_init() {}
 328:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT void fl_set_graphics_mode(int,int);
 329:fltk-1.3.4-1/FL/forms.H **** 
 330:fltk-1.3.4-1/FL/forms.H **** inline int fl_form_is_visible(Fl_Window* f) {return f->visible();}
 331:fltk-1.3.4-1/FL/forms.H **** 
 332:fltk-1.3.4-1/FL/forms.H **** inline int fl_mouse_button() {return Fl::event_button();}
 333:fltk-1.3.4-1/FL/forms.H **** #define fl_mousebutton fl_mouse_button
 334:fltk-1.3.4-1/FL/forms.H **** 
 335:fltk-1.3.4-1/FL/forms.H **** #define fl_free       free
 336:fltk-1.3.4-1/FL/forms.H **** #define fl_malloc     malloc
 337:fltk-1.3.4-1/FL/forms.H **** #define fl_calloc     calloc
 338:fltk-1.3.4-1/FL/forms.H **** #define fl_realloc    realloc
 339:fltk-1.3.4-1/FL/forms.H **** 
 340:fltk-1.3.4-1/FL/forms.H **** ////////////////////////////////////////////////////////////////
 341:fltk-1.3.4-1/FL/forms.H **** // Drawing functions.  Only usable inside an Fl_Free object?
 342:fltk-1.3.4-1/FL/forms.H **** 
 343:fltk-1.3.4-1/FL/forms.H **** inline void fl_drw_box(Fl_Boxtype b,int x,int y,int w,int h,Fl_Color bgc,int=3) {
 344:fltk-1.3.4-1/FL/forms.H ****     fl_draw_box(b,x,y,w,h,bgc);}
 345:fltk-1.3.4-1/FL/forms.H **** inline void fl_drw_frame(Fl_Boxtype b,int x,int y,int w,int h,Fl_Color bgc,int=3) {
 346:fltk-1.3.4-1/FL/forms.H ****     fl_draw_box(b,x,y,w,h,bgc);}
 347:fltk-1.3.4-1/FL/forms.H **** 
 348:fltk-1.3.4-1/FL/forms.H **** inline void fl_drw_text(Fl_Align align, int x, int y, int w, int h,
 349:fltk-1.3.4-1/FL/forms.H **** 		  Fl_Color fgcolor, int size, Fl_Font style,
 350:fltk-1.3.4-1/FL/forms.H **** 		  const char* s) {
 351:fltk-1.3.4-1/FL/forms.H ****   fl_font(style,size);
 352:fltk-1.3.4-1/FL/forms.H ****   fl_color(fgcolor);
 353:fltk-1.3.4-1/FL/forms.H ****   fl_draw(s,x,y,w,h,align);
 354:fltk-1.3.4-1/FL/forms.H **** }
 355:fltk-1.3.4-1/FL/forms.H **** 
 356:fltk-1.3.4-1/FL/forms.H **** // this does not work except for CENTER...
 357:fltk-1.3.4-1/FL/forms.H **** inline void fl_drw_text_beside(Fl_Align align, int x, int y, int w, int h,
 358:fltk-1.3.4-1/FL/forms.H **** 		  Fl_Color fgcolor, int size, Fl_Font style,
 359:fltk-1.3.4-1/FL/forms.H **** 		  const char* s) {
 360:fltk-1.3.4-1/FL/forms.H ****   fl_font(style,size);
 361:fltk-1.3.4-1/FL/forms.H ****   fl_color(fgcolor);
 362:fltk-1.3.4-1/FL/forms.H ****   fl_draw(s,x,y,w,h,align);
 363:fltk-1.3.4-1/FL/forms.H **** }
 364:fltk-1.3.4-1/FL/forms.H **** 
 365:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_font_name(Fl_Font n,const char* s) {Fl::set_font(n,s);}
 366:fltk-1.3.4-1/FL/forms.H **** 
 367:fltk-1.3.4-1/FL/forms.H **** inline void fl_mapcolor(Fl_Color c, uchar r, uchar g, uchar b) {Fl::set_color(c,r,g,b);}
 368:fltk-1.3.4-1/FL/forms.H **** 
 369:fltk-1.3.4-1/FL/forms.H **** #define fl_set_clipping(x,y,w,h) fl_push_clip(x,y,w,h)
 370:fltk-1.3.4-1/FL/forms.H **** #define fl_unset_clipping() fl_pop_clip()
 371:fltk-1.3.4-1/FL/forms.H **** 
 372:fltk-1.3.4-1/FL/forms.H **** ////////////////////////////////////////////////////////////////
 373:fltk-1.3.4-1/FL/forms.H **** // Forms classes:
 374:fltk-1.3.4-1/FL/forms.H **** 
 375:fltk-1.3.4-1/FL/forms.H **** inline Fl_Widget* fl_add_new(Fl_Widget* p) {return p;}
 376:fltk-1.3.4-1/FL/forms.H **** inline Fl_Widget* fl_add_new(uchar t,Fl_Widget* p) {p->type(t); return p;}
 377:fltk-1.3.4-1/FL/forms.H **** 
 378:fltk-1.3.4-1/FL/forms.H **** #define forms_constructor(type,name) \
 379:fltk-1.3.4-1/FL/forms.H **** inline type* name(uchar t,int x,int y,int w,int h,const char* l) { \
 380:fltk-1.3.4-1/FL/forms.H ****  return (type*)(fl_add_new(t, new type(x,y,w,h,l)));}
 381:fltk-1.3.4-1/FL/forms.H **** #define forms_constructort(type,name) \
 382:fltk-1.3.4-1/FL/forms.H **** inline type* name(uchar t,int x,int y,int w,int h,const char* l) { \
 383:fltk-1.3.4-1/FL/forms.H ****  return (type*)(fl_add_new(new type(t,x,y,w,h,l)));}
 384:fltk-1.3.4-1/FL/forms.H **** #define forms_constructorb(type,name) \
 385:fltk-1.3.4-1/FL/forms.H **** inline type* name(Fl_Boxtype t,int x,int y,int w,int h,const char* l) { \
 386:fltk-1.3.4-1/FL/forms.H ****  return (type*)(fl_add_new(new type(t,x,y,w,h,l)));}
 387:fltk-1.3.4-1/FL/forms.H **** 
 388:fltk-1.3.4-1/FL/forms.H **** #include "Fl_FormsBitmap.H"
 389:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_BITMAP FL_NO_BOX
 390:fltk-1.3.4-1/FL/forms.H **** forms_constructorb(Fl_FormsBitmap, fl_add_bitmap)
 391:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_bitmap_data(Fl_Widget* o, int w, int h, const uchar* b) {
 392:fltk-1.3.4-1/FL/forms.H ****     ((Fl_FormsBitmap*)o)->set(w,h,b);
 393:fltk-1.3.4-1/FL/forms.H **** }
 394:fltk-1.3.4-1/FL/forms.H **** 
 395:fltk-1.3.4-1/FL/forms.H **** #include "Fl_FormsPixmap.H"
 396:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_PIXMAP FL_NO_BOX
 397:fltk-1.3.4-1/FL/forms.H **** forms_constructorb(Fl_FormsPixmap, fl_add_pixmap)
 398:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_pixmap_data(Fl_Widget* o, char*const* b) {
 399:fltk-1.3.4-1/FL/forms.H ****     ((Fl_FormsPixmap*)o)->set(b);
 400:fltk-1.3.4-1/FL/forms.H **** }
 401:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_pixmap_file(Fl_Widget*, const char*);
 402:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_pixmap_align(Fl_Widget* o,Fl_Align a,int,int) {o->align(a);}
 403:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_pixmap_colorcloseness(int, int, int);
 404:fltk-1.3.4-1/FL/forms.H **** 
 405:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Box.H"
 406:fltk-1.3.4-1/FL/forms.H **** forms_constructorb(Fl_Box, fl_add_box)
 407:fltk-1.3.4-1/FL/forms.H **** 
 408:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Browser.H"
 409:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Browser, fl_add_browser)
 410:fltk-1.3.4-1/FL/forms.H **** 
 411:fltk-1.3.4-1/FL/forms.H **** inline void fl_clear_browser(Fl_Widget* o) {
 412:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->clear();}
 413:fltk-1.3.4-1/FL/forms.H **** inline void fl_add_browser_line(Fl_Widget* o, const char* s) {
 414:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->add(s);}
 415:fltk-1.3.4-1/FL/forms.H **** inline void fl_addto_browser(Fl_Widget* o, const char* s) {
 416:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->add(s);} /* should also scroll to bottom */
 417:fltk-1.3.4-1/FL/forms.H **** //inline void fl_addto_browser_chars(Fl_Widget*, const char*)
 418:fltk-1.3.4-1/FL/forms.H **** //#define fl_append_browser fl_addto_browser_chars
 419:fltk-1.3.4-1/FL/forms.H **** inline void fl_insert_browser_line(Fl_Widget* o, int n, const char* s) {
 420:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->insert(n,s);}
 421:fltk-1.3.4-1/FL/forms.H **** inline void fl_delete_browser_line(Fl_Widget* o, int n) {
 422:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->remove(n);}
 423:fltk-1.3.4-1/FL/forms.H **** inline void fl_replace_browser_line(Fl_Widget* o, int n, const char* s) {
 424:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->replace(n,s);}
 425:fltk-1.3.4-1/FL/forms.H **** inline char* fl_get_browser_line(Fl_Widget* o, int n) {
 426:fltk-1.3.4-1/FL/forms.H ****     return (char*)(((Fl_Browser*)o)->text(n));}
 427:fltk-1.3.4-1/FL/forms.H **** inline int fl_load_browser(Fl_Widget* o, const char* f) {
 428:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Browser*)o)->load(f);}
 429:fltk-1.3.4-1/FL/forms.H **** inline void fl_select_browser_line(Fl_Widget* o, int n) {
 430:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->select(n,1);}
 431:fltk-1.3.4-1/FL/forms.H **** inline void fl_deselect_browser_line(Fl_Widget* o, int n) {
 432:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->select(n,0);}
 433:fltk-1.3.4-1/FL/forms.H **** inline void fl_deselect_browser(Fl_Widget* o) {
 434:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->deselect();}
 435:fltk-1.3.4-1/FL/forms.H **** inline int fl_isselected_browser_line(Fl_Widget* o, int n) {
 436:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Browser*)o)->selected(n);}
 437:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_browser_topline(Fl_Widget* o) {
 438:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Browser*)o)->topline();}
 439:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_browser(Fl_Widget* o) {
 440:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Browser*)o)->value();}
 441:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_browser_maxline(Fl_Widget* o) {
 442:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Browser*)o)->size();}
 443:fltk-1.3.4-1/FL/forms.H **** //linline int fl_get_browser_screenlines(Fl_Widget*);
 444:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_browser_topline(Fl_Widget* o, int n) {
 445:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->topline(n);}
 446:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_browser_fontsize(Fl_Widget* o, int s) {
 447:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->textsize(s);}
 448:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_browser_fontstyle(Fl_Widget* o, Fl_Font s) {
 449:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->textfont(s);}
 450:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_browser_specialkey(Fl_Widget* o, char c) {
 451:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->format_char(c);}
 452:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_browser_vscrollbar(Fl_Widget*, int);
 453:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_browser_hscrollbar(Fl_Widget*, int);
 454:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_browser_leftslider(Fl_Widget*, int);
 455:fltk-1.3.4-1/FL/forms.H **** //#define fl_set_browser_leftscrollbar fl_set_browser_leftslider
 456:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_browser_line_selectable(Fl_Widget*, int, int);
 457:fltk-1.3.4-1/FL/forms.H **** //inline void fl_get_browser_dimension(Fl_Widget*,int*,int*,int*,int*);
 458:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_browser_dblclick_callback(Fl_Widget*,FL_CALLBACKPTR,long);
 459:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_browser_xoffset(Fl_Widget*, FL_Coord);
 460:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_browser_scrollbarsize(Fl_Widget*, int, int);
 461:fltk-1.3.4-1/FL/forms.H **** inline void fl_setdisplayed_browser_line(Fl_Widget* o, int n, int i) {
 462:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Browser*)o)->display(n,i);}
 463:fltk-1.3.4-1/FL/forms.H **** inline int fl_isdisplayed_browser_line(Fl_Widget* o, int n) {
 464:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Browser*)o)->displayed(n);}
 465:fltk-1.3.4-1/FL/forms.H **** 
 466:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Button.H"
 467:fltk-1.3.4-1/FL/forms.H **** 
 468:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_BUTTON	0
 469:fltk-1.3.4-1/FL/forms.H **** #define FL_TOUCH_BUTTON		4
 470:fltk-1.3.4-1/FL/forms.H **** #define FL_INOUT_BUTTON		5
 471:fltk-1.3.4-1/FL/forms.H **** #define FL_RETURN_BUTTON	6
 472:fltk-1.3.4-1/FL/forms.H **** #define FL_HIDDEN_RET_BUTTON	7
 473:fltk-1.3.4-1/FL/forms.H **** #define FL_PUSH_BUTTON		FL_TOGGLE_BUTTON
 474:fltk-1.3.4-1/FL/forms.H **** #define FL_MENU_BUTTON		9
 475:fltk-1.3.4-1/FL/forms.H **** 
 476:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT Fl_Button* fl_add_button(uchar t,int x,int y,int w,int h,const char* l);
 477:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_button(Fl_Widget* b) {return ((Fl_Button*)b)->value();}
 478:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_button(Fl_Widget* b, int v) {((Fl_Button*)b)->value(v);}
 479:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_button_numb(Fl_Widget*) {return Fl::event_button();}
 480:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_button_shortcut(Fl_Widget* b, const char* s,int=0) {
 481:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Button*)b)->shortcut(s);}
 482:fltk-1.3.4-1/FL/forms.H **** //#define fl_set_object_shortcut(b,s) fl_set_button_shortcut(b,s)
 483:fltk-1.3.4-1/FL/forms.H **** 
 484:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Light_Button.H"
 485:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Light_Button, fl_add_lightbutton)
 486:fltk-1.3.4-1/FL/forms.H **** 
 487:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Round_Button.H"
 488:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Round_Button, fl_add_roundbutton)
 489:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Round_Button, fl_add_round3dbutton)
 490:fltk-1.3.4-1/FL/forms.H **** 
 491:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Check_Button.H"
 492:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Check_Button, fl_add_checkbutton)
 493:fltk-1.3.4-1/FL/forms.H **** 
 494:fltk-1.3.4-1/FL/forms.H **** inline Fl_Widget* fl_add_bitmapbutton(int t,int x,int y,int w,int h,const char* l) {Fl_Widget* o = 
 495:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_bitmapbutton_data(Fl_Widget* o,int a,int b,uchar* c) {
 496:fltk-1.3.4-1/FL/forms.H ****   (new Fl_Bitmap(c,a,b))->label(o);}  // does not delete old Fl_Bitmap!
 497:fltk-1.3.4-1/FL/forms.H **** 
 498:fltk-1.3.4-1/FL/forms.H **** inline Fl_Widget* fl_add_pixmapbutton(int t,int x,int y,int w,int h,const char* l) {Fl_Widget* o = 
 499:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_pixmapbutton_data(Fl_Widget* o, const char*const* c) {
 500:fltk-1.3.4-1/FL/forms.H ****   (new Fl_Pixmap(c))->label(o);}  // does not delete old Fl_Pixmap!
 501:fltk-1.3.4-1/FL/forms.H **** 
 502:fltk-1.3.4-1/FL/forms.H **** // Fl_Canvas object not yet implemented!
 503:fltk-1.3.4-1/FL/forms.H **** 
 504:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Chart.H"
 505:fltk-1.3.4-1/FL/forms.H **** 
 506:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Chart, fl_add_chart)
 507:fltk-1.3.4-1/FL/forms.H **** inline void fl_clear_chart(Fl_Widget* o) {
 508:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->clear();}
 509:fltk-1.3.4-1/FL/forms.H **** inline void fl_add_chart_value(Fl_Widget* o,double v,const char* s,uchar c){
 510:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->add(v,s,c);}
 511:fltk-1.3.4-1/FL/forms.H **** inline void fl_insert_chart_value(Fl_Widget* o, int i, double v, const char* s, uchar c) {
 512:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->insert(i,v,s,c);}
 513:fltk-1.3.4-1/FL/forms.H **** inline void fl_replace_chart_value(Fl_Widget* o, int i, double v, const char* s, uchar c) {
 514:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->replace(i,v,s,c);}
 515:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_chart_bounds(Fl_Widget* o, double a, double b) {
 516:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->bounds(a,b);}
 517:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_chart_maxnumb(Fl_Widget* o, int v) {
 518:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->maxsize(v);}
 519:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_chart_autosize(Fl_Widget* o, int v) {
 520:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->autosize(v);}
 521:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_chart_lstyle(Fl_Widget* o, Fl_Font v) {
 522:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->textfont(v);}
 523:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_chart_lsize(Fl_Widget* o, int v) {
 524:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->textsize(v);}
 525:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_chart_lcolor(Fl_Widget* o, Fl_Color v) {
 526:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Chart*)o)->textcolor(v);}
 527:fltk-1.3.4-1/FL/forms.H **** #define fl_set_chart_lcol   fl_set_chart_lcolor
 528:fltk-1.3.4-1/FL/forms.H **** 
 529:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Choice.H"
 530:fltk-1.3.4-1/FL/forms.H **** 
 531:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_CHOICE	0
 532:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_CHOICE2	0
 533:fltk-1.3.4-1/FL/forms.H **** #define FL_DROPLIST_CHOICE	0
 534:fltk-1.3.4-1/FL/forms.H **** 
 535:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Choice, fl_add_choice)
 536:fltk-1.3.4-1/FL/forms.H **** inline void fl_clear_choice(Fl_Widget* o) {
 537:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Choice*)o)->clear();}
 538:fltk-1.3.4-1/FL/forms.H **** inline void fl_addto_choice(Fl_Widget* o, const char* s) {
 539:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Choice*)o)->add(s);}
 540:fltk-1.3.4-1/FL/forms.H **** inline void fl_replace_choice(Fl_Widget* o, int i, const char* s) {
 541:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Choice*)o)->replace(i-1,s);}
 542:fltk-1.3.4-1/FL/forms.H **** inline void fl_delete_choice(Fl_Widget* o, int i) {
 543:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Choice*)o)->remove(i-1);}
 544:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_choice(Fl_Widget* o, int i) {
 545:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Choice*)o)->value(i-1);}
 546:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_choice_text(Fl_Widget*, const char*);
 547:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_choice(Fl_Widget* o) {
 548:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Choice*)o)->value()+1;}
 549:fltk-1.3.4-1/FL/forms.H **** // inline const char* fl_get_choice_item_text(Fl_Widget*, int);
 550:fltk-1.3.4-1/FL/forms.H **** // inline int fl_get_choice_maxitems(Fl_Widget*);
 551:fltk-1.3.4-1/FL/forms.H **** inline const char* fl_get_choice_text(Fl_Widget* o) {
 552:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Choice*)o)->text();}
 553:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_choice_fontsize(Fl_Widget* o, int x) {
 554:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Choice*)o)->textsize(x);}
 555:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_choice_fontstyle(Fl_Widget* o, Fl_Font x) {
 556:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Choice*)o)->textfont(x);}
 557:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_choice_item_mode(Fl_Widget*, int, unsigned);
 558:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_choice_item_shortcut(Fl_Widget*, int, const char*);
 559:fltk-1.3.4-1/FL/forms.H **** 
 560:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Clock.H"
 561:fltk-1.3.4-1/FL/forms.H **** forms_constructort(Fl_Clock, fl_add_clock)
 562:fltk-1.3.4-1/FL/forms.H **** inline void fl_get_clock(Fl_Widget* o, int* h, int* m, int* s) {
 563:fltk-1.3.4-1/FL/forms.H ****     *h = ((Fl_Clock*)o)->hour();
 564:fltk-1.3.4-1/FL/forms.H ****     *m = ((Fl_Clock*)o)->minute();
 565:fltk-1.3.4-1/FL/forms.H ****     *s = ((Fl_Clock*)o)->second();
 566:fltk-1.3.4-1/FL/forms.H **** }
 567:fltk-1.3.4-1/FL/forms.H **** 
 568:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Counter.H"
 569:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Counter, fl_add_counter)
 570:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_counter_value(Fl_Widget* o, double v) {
 571:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Counter*)o)->value(v);}
 572:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_counter_bounds(Fl_Widget* o, double a, double b) {
 573:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Counter*)o)->bounds(a,b);}
 574:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_counter_step(Fl_Widget* o, double a, double b) {
 575:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Counter*)o)->step(a,b);}
 576:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_counter_precision(Fl_Widget* o, int v) {
 577:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Counter*)o)->precision(v);}
 578:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_counter_return(Fl_Widget* o, int v) {
 579:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Counter*)o)->when((Fl_When)(v|FL_WHEN_RELEASE));}
 580:fltk-1.3.4-1/FL/forms.H **** inline double fl_get_counter_value(Fl_Widget* o) {
 581:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Counter*)o)->value();}
 582:fltk-1.3.4-1/FL/forms.H **** inline void fl_get_counter_bounds(Fl_Widget* o, float* a, float* b) {
 583:fltk-1.3.4-1/FL/forms.H ****   *a = float(((Fl_Counter*)o)->minimum());
 584:fltk-1.3.4-1/FL/forms.H ****   *b = float(((Fl_Counter*)o)->maximum());
 585:fltk-1.3.4-1/FL/forms.H **** }
 586:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_counter_filter(Fl_Widget*,const char* (*)(Fl_Widget*,double,int));
 587:fltk-1.3.4-1/FL/forms.H **** 
 588:fltk-1.3.4-1/FL/forms.H **** // Cursor stuff cannot be emulated because it uses X stuff
 589:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_cursor(Fl_Window* w, Fl_Cursor c) {w->cursor(c);}
 590:fltk-1.3.4-1/FL/forms.H **** #define FL_INVISIBLE_CURSOR FL_CURSOR_NONE
 591:fltk-1.3.4-1/FL/forms.H **** #define FL_DEFAULT_CURSOR FL_CURSOR_DEFAULT
 592:fltk-1.3.4-1/FL/forms.H **** 
 593:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Dial.H"
 594:fltk-1.3.4-1/FL/forms.H **** 
 595:fltk-1.3.4-1/FL/forms.H **** #define FL_DIAL_COL1 FL_GRAY
 596:fltk-1.3.4-1/FL/forms.H **** #define FL_DIAL_COL2 37
 597:fltk-1.3.4-1/FL/forms.H **** 
 598:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Dial, fl_add_dial)
 599:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_dial_value(Fl_Widget* o, double v) {
 600:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Dial*)o)->value(v);}
 601:fltk-1.3.4-1/FL/forms.H **** inline double fl_get_dial_value(Fl_Widget* o) {
 602:fltk-1.3.4-1/FL/forms.H ****   return ((Fl_Dial*)o)->value();}
 603:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_dial_bounds(Fl_Widget* o, double a, double b) {
 604:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Dial*)o)->bounds(a, b);}
 605:fltk-1.3.4-1/FL/forms.H **** inline void fl_get_dial_bounds(Fl_Widget* o, float* a, float* b) {
 606:fltk-1.3.4-1/FL/forms.H ****   *a = float(((Fl_Dial*)o)->minimum());
 607:fltk-1.3.4-1/FL/forms.H ****   *b = float(((Fl_Dial*)o)->maximum());
 608:fltk-1.3.4-1/FL/forms.H **** }
 609:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_dial_return(Fl_Widget* o, int i) {
 610:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Dial*)o)->when((Fl_When)(i|FL_WHEN_RELEASE));}
 611:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_dial_angles(Fl_Widget* o, int a, int b) {
 612:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Dial*)o)->angles((short)a, (short)b);}
 613:fltk-1.3.4-1/FL/forms.H **** //inline void fl_set_dial_cross(Fl_Widget* o, int);
 614:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_dial_direction(Fl_Widget* o, uchar d) {
 615:fltk-1.3.4-1/FL/forms.H **** //   ((Fl_Dial*)o)->direction(d);}
 616:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_dial_step(Fl_Widget* o, double v) {
 617:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Dial*)o)->step(v);}
 618:fltk-1.3.4-1/FL/forms.H **** 
 619:fltk-1.3.4-1/FL/forms.H **** // Frames:
 620:fltk-1.3.4-1/FL/forms.H **** 
 621:fltk-1.3.4-1/FL/forms.H **** inline Fl_Widget* fl_add_frame(Fl_Boxtype i,int x,int y,int w,int h,const char* l) {
 622:fltk-1.3.4-1/FL/forms.H ****   return fl_add_box(i,x-3,y-3,w+6,h+6,l);}
 623:fltk-1.3.4-1/FL/forms.H **** 
 624:fltk-1.3.4-1/FL/forms.H **** // labelframe nyi
 625:fltk-1.3.4-1/FL/forms.H **** inline Fl_Widget* fl_add_labelframe(Fl_Boxtype i,int x,int y,int w,int h,const char* l) {
 626:fltk-1.3.4-1/FL/forms.H ****   Fl_Widget* o = fl_add_box(i,x-3,y-3,w+6,h+6,l);
 627:fltk-1.3.4-1/FL/forms.H ****   o->align(FL_ALIGN_TOP_LEFT);
 628:fltk-1.3.4-1/FL/forms.H ****   return o;
 629:fltk-1.3.4-1/FL/forms.H **** }
 630:fltk-1.3.4-1/FL/forms.H **** 
 631:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Free.H"
 632:fltk-1.3.4-1/FL/forms.H **** inline Fl_Free*
 633:fltk-1.3.4-1/FL/forms.H **** fl_add_free(int t,double x,double y,double w,double h,const char* l,
 634:fltk-1.3.4-1/FL/forms.H **** 	    FL_HANDLEPTR hdl) {
 635:fltk-1.3.4-1/FL/forms.H ****  return (Fl_Free*)(fl_add_new(
 636:fltk-1.3.4-1/FL/forms.H ****    new Fl_Free(t,int(x),int(y),int(w),int(h),l,hdl)));
 637:fltk-1.3.4-1/FL/forms.H **** }
 638:fltk-1.3.4-1/FL/forms.H **** 
 639:fltk-1.3.4-1/FL/forms.H **** #include "fl_ask.H"
 640:fltk-1.3.4-1/FL/forms.H **** #include "fl_show_colormap.H"
 641:fltk-1.3.4-1/FL/forms.H **** 
 642:fltk-1.3.4-1/FL/forms.H **** inline int fl_show_question(const char* c, int = 0) {return fl_choice("%s",fl_no,fl_yes,0L,c);}
 643:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT void fl_show_message(const char *,const char *,const char *);
 644:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT void fl_show_alert(const char *,const char *,const char *,int=0);
 645:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT int fl_show_question(const char *,const char *,const char *);
 646:fltk-1.3.4-1/FL/forms.H **** inline const char *fl_show_input(const char *l,const char*d=0) {return fl_input("%s",d,l);}
 647:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT /*const*/ char *fl_show_simple_input(const char *label, const char *deflt = 0);
 648:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT int fl_show_choice(
 649:fltk-1.3.4-1/FL/forms.H ****     const char *m1,
 650:fltk-1.3.4-1/FL/forms.H ****     const char *m2,
 651:fltk-1.3.4-1/FL/forms.H ****     const char *m3,
 652:fltk-1.3.4-1/FL/forms.H ****     int numb,
 653:fltk-1.3.4-1/FL/forms.H ****     const char *b0,
 654:fltk-1.3.4-1/FL/forms.H ****     const char *b1,
 655:fltk-1.3.4-1/FL/forms.H ****     const char *b2);
 656:fltk-1.3.4-1/FL/forms.H **** 
 657:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_goodies_font(Fl_Font a, Fl_Fontsize b) {fl_message_font(a,b);}
 658:fltk-1.3.4-1/FL/forms.H **** #define fl_show_messages fl_message
 659:fltk-1.3.4-1/FL/forms.H **** inline int fl_show_choices(const char* c,int n,const char* b1,const char* b2,
 660:fltk-1.3.4-1/FL/forms.H **** 			   const char* b3, int) {
 661:fltk-1.3.4-1/FL/forms.H ****   return fl_show_choice(0,c,0,n,b1,b2,b3);
 662:fltk-1.3.4-1/FL/forms.H **** }
 663:fltk-1.3.4-1/FL/forms.H **** 
 664:fltk-1.3.4-1/FL/forms.H **** #include "filename.H"
 665:fltk-1.3.4-1/FL/forms.H **** #include "Fl_File_Chooser.H"
 666:fltk-1.3.4-1/FL/forms.H **** inline int do_matching(char* a, const char* b) {return fl_filename_match(a,b);}
 667:fltk-1.3.4-1/FL/forms.H **** 
 668:fltk-1.3.4-1/FL/forms.H **** // Forms-compatible file chooser (implementation in fselect.C):
 669:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT char* fl_show_file_selector(const char* message,const char* dir,
 670:fltk-1.3.4-1/FL/forms.H **** 			    const char* pat,const char* fname);
 671:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT char*	fl_get_directory();
 672:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT char*	fl_get_pattern();
 673:fltk-1.3.4-1/FL/forms.H **** FL_EXPORT char*	fl_get_filename();
 674:fltk-1.3.4-1/FL/forms.H **** 
 675:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Input.H"
 676:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Input, fl_add_input)
 677:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_input(Fl_Widget* o, const char* v) {
 678:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Input*)o)->value(v);}
 679:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_input_return(Fl_Widget* o, int x) {
 680:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Input*)o)->when((Fl_When)(x | FL_WHEN_RELEASE));}
 681:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_input_color(Fl_Widget* o, Fl_Color a, Fl_Color b) {
 682:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Input*)o)->textcolor(a);
 683:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Input*)o)->cursor_color(b);
 684:fltk-1.3.4-1/FL/forms.H **** }
 685:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_scroll(Fl_Widget*, int);
 686:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_input_cursorpos(Fl_Widget* o, int x, int /*y*/) {
 687:fltk-1.3.4-1/FL/forms.H ****   ((Fl_Input*)o)->position(x);}
 688:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_selected(Fl_Widget*, int);
 689:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_selected_range(Fl_Widget*, int, int);
 690:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_maxchars(Fl_Widget*, int);
 691:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_format(Fl_Widget*, int, int);
 692:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_hscrollbar(Fl_Widget*, int);
 693:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_vscrollbar(Fl_Widget*, int);
 694:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_xoffset(Fl_Widget*, int);
 695:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_topline(Fl_Widget*, int);
 696:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_input_scrollbarsize(Fl_Widget*, int, int);
 697:fltk-1.3.4-1/FL/forms.H **** // inline int fl_get_input_topline(Fl_Widget*);
 698:fltk-1.3.4-1/FL/forms.H **** // inline int fl_get_input_screenlines(Fl_Widget*);
 699:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_input_cursorpos(Fl_Widget* o, int*x, int*y) {
 700:fltk-1.3.4-1/FL/forms.H ****   *x = ((Fl_Input*)o)->position(); *y = 0; return *x;}
 701:fltk-1.3.4-1/FL/forms.H **** // inline int fl_get_input_numberoflines(Fl_Widget*);
 702:fltk-1.3.4-1/FL/forms.H **** // inline void fl_get_input_format(Fl_Widget*, int*, int*);
 703:fltk-1.3.4-1/FL/forms.H **** inline const char* fl_get_input(Fl_Widget* o) {return ((Fl_Input*)o)->value();}
 704:fltk-1.3.4-1/FL/forms.H **** 
 705:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Menu_Button.H"
 706:fltk-1.3.4-1/FL/forms.H **** 
 707:fltk-1.3.4-1/FL/forms.H **** // types are not implemented, they all act like FL_PUSH_MENU:
 708:fltk-1.3.4-1/FL/forms.H **** #define FL_TOUCH_MENU		0
 709:fltk-1.3.4-1/FL/forms.H **** #define FL_PUSH_MENU		1
 710:fltk-1.3.4-1/FL/forms.H **** #define FL_PULLDOWN_MENU	2
 711:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Menu_Button, fl_add_menu)
 712:fltk-1.3.4-1/FL/forms.H **** 
 713:fltk-1.3.4-1/FL/forms.H **** inline void fl_clear_menu(Fl_Widget* o) {
 714:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Menu_Button*)o)->clear();}
 715:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_menu(Fl_Widget* o, const char* s) {
 716:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Menu_Button*)o)->clear(); ((Fl_Menu_Button*)o)->add(s);}
 717:fltk-1.3.4-1/FL/forms.H **** inline void fl_addto_menu(Fl_Widget* o, const char* s) {
 718:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Menu_Button*)o)->add(s);}
 719:fltk-1.3.4-1/FL/forms.H **** inline void fl_replace_menu_item(Fl_Widget* o, int i, const char* s) {
 720:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Menu_Button*)o)->replace(i-1,s);}
 721:fltk-1.3.4-1/FL/forms.H **** inline void fl_delete_menu_item(Fl_Widget* o, int i) {
 722:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Menu_Button*)o)->remove(i-1);}
 723:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_menu_item_shortcut(Fl_Widget* o, int i, const char* s) {
 724:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Menu_Button*)o)->shortcut(i-1,fl_old_shortcut(s));}
 725:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_menu_item_mode(Fl_Widget* o, int i, long x) {
 726:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Menu_Button*)o)->mode(i-1,x);}
 727:fltk-1.3.4-1/FL/forms.H **** inline void fl_show_menu_symbol(Fl_Widget*, int ) {
 728:fltk-1.3.4-1/FL/forms.H **** /*    ((Fl_Menu_Button*)o)->show_menu_symbol(i); */}
 729:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_menu_popup(Fl_Widget*, int);
 730:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_menu(Fl_Widget* o) {
 731:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Menu_Button*)o)->value()+1;}
 732:fltk-1.3.4-1/FL/forms.H **** inline const char* fl_get_menu_item_text(Fl_Widget* o, int i) {
 733:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Menu_Button*)o)->text(i);}
 734:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_menu_maxitems(Fl_Widget* o) {
 735:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Menu_Button*)o)->size();}
 736:fltk-1.3.4-1/FL/forms.H **** inline int fl_get_menu_item_mode(Fl_Widget* o, int i) {
 737:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Menu_Button*)o)->mode(i);}
 738:fltk-1.3.4-1/FL/forms.H **** inline const char* fl_get_menu_text(Fl_Widget* o) {
 739:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Menu_Button*)o)->text();}
 740:fltk-1.3.4-1/FL/forms.H **** 
 741:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Positioner.H"
 742:fltk-1.3.4-1/FL/forms.H **** #define FL_NORMAL_POSITIONER	0
 743:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Positioner, fl_add_positioner)
 744:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_positioner_xvalue(Fl_Widget* o, double v) {
 745:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Positioner*)o)->xvalue(v);}
 746:fltk-1.3.4-1/FL/forms.H **** inline double fl_get_positioner_xvalue(Fl_Widget* o) {
 747:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Positioner*)o)->xvalue();}
 748:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_positioner_xbounds(Fl_Widget* o, double a, double b) {
 749:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Positioner*)o)->xbounds(a,b);}
 750:fltk-1.3.4-1/FL/forms.H **** inline void fl_get_positioner_xbounds(Fl_Widget* o, float* a, float* b) {
 751:fltk-1.3.4-1/FL/forms.H ****   *a = float(((Fl_Positioner*)o)->xminimum());
 752:fltk-1.3.4-1/FL/forms.H ****   *b = float(((Fl_Positioner*)o)->xmaximum());
 753:fltk-1.3.4-1/FL/forms.H **** }
 754:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_positioner_yvalue(Fl_Widget* o, double v) {
 755:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Positioner*)o)->yvalue(v);}
 756:fltk-1.3.4-1/FL/forms.H **** inline double fl_get_positioner_yvalue(Fl_Widget* o) {
 757:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Positioner*)o)->yvalue();}
 758:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_positioner_ybounds(Fl_Widget* o, double a, double b) {
 759:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Positioner*)o)->ybounds(a,b);}
 760:fltk-1.3.4-1/FL/forms.H **** inline void fl_get_positioner_ybounds(Fl_Widget* o, float* a, float* b) {
 761:fltk-1.3.4-1/FL/forms.H ****   *a = float(((Fl_Positioner*)o)->yminimum());
 762:fltk-1.3.4-1/FL/forms.H ****   *b = float(((Fl_Positioner*)o)->ymaximum());
 763:fltk-1.3.4-1/FL/forms.H **** }
 764:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_positioner_xstep(Fl_Widget* o, double v) {
 765:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Positioner*)o)->xstep(v);}
 766:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_positioner_ystep(Fl_Widget* o, double v) {
 767:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Positioner*)o)->ystep(v);}
 768:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_positioner_return(Fl_Widget* o, int v) {
 769:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Positioner*)o)->when((Fl_When)(v|FL_WHEN_RELEASE));}
 770:fltk-1.3.4-1/FL/forms.H **** 
 771:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Slider.H"
 772:fltk-1.3.4-1/FL/forms.H **** 
 773:fltk-1.3.4-1/FL/forms.H **** #define FL_HOR_BROWSER_SLIDER FL_HOR_SLIDER
 774:fltk-1.3.4-1/FL/forms.H **** #define FL_VERT_BROWSER_SLIDER FL_VERT_SLIDER
 775:fltk-1.3.4-1/FL/forms.H **** 
 776:fltk-1.3.4-1/FL/forms.H **** forms_constructort(Fl_Slider, fl_add_slider)
 777:fltk-1.3.4-1/FL/forms.H **** #define FL_SLIDER_COL1 FL_GRAY
 778:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_slider_value(Fl_Widget* o, double v) {
 779:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Slider*)o)->value(v);}
 780:fltk-1.3.4-1/FL/forms.H **** inline double fl_get_slider_value(Fl_Widget* o) {
 781:fltk-1.3.4-1/FL/forms.H ****     return ((Fl_Slider*)o)->value();}
 782:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_slider_bounds(Fl_Widget* o, double a, double b) {
 783:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Slider*)o)->bounds(a, b);}
 784:fltk-1.3.4-1/FL/forms.H **** inline void fl_get_slider_bounds(Fl_Widget* o, float* a, float* b) {
 785:fltk-1.3.4-1/FL/forms.H ****   *a = float(((Fl_Slider*)o)->minimum());
 786:fltk-1.3.4-1/FL/forms.H ****   *b = float(((Fl_Slider*)o)->maximum());
 787:fltk-1.3.4-1/FL/forms.H **** }
 788:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_slider_return(Fl_Widget* o, int i) {
 789:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Slider*)o)->when((Fl_When)(i|FL_WHEN_RELEASE));}
 790:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_slider_step(Fl_Widget* o, double v) {
 791:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Slider*)o)->step(v);}
 792:fltk-1.3.4-1/FL/forms.H **** // inline void fl_set_slider_increment(Fl_Widget* o, double v, double);
 793:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_slider_size(Fl_Widget* o, double v) {
 794:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Slider*)o)->slider_size(v);}
 795:fltk-1.3.4-1/FL/forms.H **** 
 796:fltk-1.3.4-1/FL/forms.H **** #include "Fl_Value_Slider.H"
 797:fltk-1.3.4-1/FL/forms.H **** forms_constructor(Fl_Value_Slider, fl_add_valslider)
 798:fltk-1.3.4-1/FL/forms.H **** 
 799:fltk-1.3.4-1/FL/forms.H **** inline void fl_set_slider_precision(Fl_Widget* o, int i) {
 800:fltk-1.3.4-1/FL/forms.H ****     ((Fl_Value_Slider*)o)->precision(i);}
 801:fltk-1.3.4-1/FL/forms.H **** // filter function!
 802:fltk-1.3.4-1/FL/forms.H **** 
 803:fltk-1.3.4-1/FL/forms.H **** // The forms text object was the same as an Fl_Box except it inverted the
 804:fltk-1.3.4-1/FL/forms.H **** // meaning of FL_ALIGN_INSIDE.  Implementation in forms.cxx
 805:fltk-1.3.4-1/FL/forms.H **** class FL_EXPORT Fl_FormsText : public Fl_Widget {
 138              		.loc 3 805 0
 139              		.cfi_startproc
 140              	.LVL8:
 141              	.LBB128:
 142              		.loc 3 805 0
 143 0000 48C70700 		movq	$_ZTV12Fl_FormsText+16, (%rdi)
 143      000000
 144 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 144      00
 145              	.LVL9:
 146              	.LBE128:
 147              		.cfi_endproc
 148              	.LFE985:
 150              		.section	.text.unlikely._ZN12Fl_FormsTextD2Ev,"axG",@progbits,_ZN12Fl_FormsTextD5Ev,comdat
 151              	.LCOLDE4:
 152              		.section	.text._ZN12Fl_FormsTextD2Ev,"axG",@progbits,_ZN12Fl_FormsTextD5Ev,comdat
 153              	.LHOTE4:
 154              		.weak	_ZN12Fl_FormsTextD1Ev
 155              		.set	_ZN12Fl_FormsTextD1Ev,_ZN12Fl_FormsTextD2Ev
 156              		.section	.text.unlikely._ZN12Fl_FormsTextD0Ev,"axG",@progbits,_ZN12Fl_FormsTextD5Ev,comdat
 157              		.align 2
 158              	.LCOLDB5:
 159              		.section	.text._ZN12Fl_FormsTextD0Ev,"axG",@progbits,_ZN12Fl_FormsTextD5Ev,comdat
 160              	.LHOTB5:
 161              		.align 2
 162              		.p2align 4,,15
 163              		.weak	_ZN12Fl_FormsTextD0Ev
 165              	_ZN12Fl_FormsTextD0Ev:
 166              	.LFB987:
 167              		.loc 3 805 0
 168              		.cfi_startproc
 169              	.LVL10:
 170 0000 53       		pushq	%rbx
 171              		.cfi_def_cfa_offset 16
 172              		.cfi_offset 3, -16
 173              		.loc 3 805 0
 174 0001 4889FB   		movq	%rdi, %rbx
 175              	.LBB129:
 176              	.LBB130:
 177 0004 48C70700 		movq	$_ZTV12Fl_FormsText+16, (%rdi)
 177      000000
 178 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 178      00
 179              	.LVL11:
 180              	.LBE130:
 181              	.LBE129:
 182 0010 4889DF   		movq	%rbx, %rdi
 183 0013 5B       		popq	%rbx
 184              		.cfi_def_cfa_offset 8
 185              	.LVL12:
 186 0014 E9000000 		jmp	_ZdlPv
 186      00
 187              	.LVL13:
 188              		.cfi_endproc
 189              	.LFE987:
 191              		.section	.text.unlikely._ZN12Fl_FormsTextD0Ev,"axG",@progbits,_ZN12Fl_FormsTextD5Ev,comdat
 192              	.LCOLDE5:
 193              		.section	.text._ZN12Fl_FormsTextD0Ev,"axG",@progbits,_ZN12Fl_FormsTextD5Ev,comdat
 194              	.LHOTE5:
 195              		.section	.text.unlikely._ZN8Fl_Group9forms_endEv,"ax",@progbits
 196              		.align 2
 197              	.LCOLDB6:
 198              		.section	.text._ZN8Fl_Group9forms_endEv,"ax",@progbits
 199              	.LHOTB6:
 200              		.align 2
 201              		.p2align 4,,15
 202              		.globl	_ZN8Fl_Group9forms_endEv
 204              	_ZN8Fl_Group9forms_endEv:
 205              	.LFB970:
  29:fltk-1.3.4-1/src/forms_compatability.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 206              		.loc 2 29 0
 207              		.cfi_startproc
 208              	.LVL14:
 209 0000 55       		pushq	%rbp
 210              		.cfi_def_cfa_offset 16
 211              		.cfi_offset 6, -16
 212 0001 53       		pushq	%rbx
 213              		.cfi_def_cfa_offset 24
 214              		.cfi_offset 3, -24
 215 0002 4889FB   		movq	%rdi, %rbx
 216 0005 4883EC08 		subq	$8, %rsp
 217              		.cfi_def_cfa_offset 32
 218              	.LBB131:
  31:fltk-1.3.4-1/src/forms_compatability.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 219              		.loc 2 31 0
 220 0009 8B979000 		movl	144(%rdi), %edx
 220      0000
 221 000f 85D2     		testl	%edx, %edx
 222 0011 0F849100 		je	.L10
 222      0000
 223              	.LVL15:
  31:fltk-1.3.4-1/src/forms_compatability.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 224              		.loc 2 31 0 is_stmt 0 discriminator 1
 225 0017 8B4728   		movl	40(%rdi), %eax
 226 001a 85C0     		testl	%eax, %eax
 227 001c 0F858600 		jne	.L10
 227      0000
 228              	.LBB132:
  32:fltk-1.3.4-1/src/forms_compatability.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 229              		.loc 2 32 0 is_stmt 1
 230 0022 E8000000 		call	_ZNK8Fl_Group5arrayEv
 230      00
 231              	.LVL16:
  33:fltk-1.3.4-1/src/forms_compatability.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 232              		.loc 2 33 0
 233 0027 488B10   		movq	(%rax), %rdx
 234 002a 488D7008 		leaq	8(%rax), %rsi
 235              	.LVL17:
 236 002e 448B4220 		movl	32(%rdx), %r8d
 237              	.LVL18:
 238 0032 8B7A24   		movl	36(%rdx), %edi
 239              	.LVL19:
  36:fltk-1.3.4-1/src/forms_compatability.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 240              		.loc 2 36 0
 241 0035 448B5A28 		movl	40(%rdx), %r11d
  37:fltk-1.3.4-1/src/forms_compatability.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 242              		.loc 2 37 0
 243 0039 448B4A2C 		movl	44(%rdx), %r9d
 244              	.LBB133:
  38:fltk-1.3.4-1/src/forms_compatability.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 245              		.loc 2 38 0
 246 003d 8B939000 		movl	144(%rbx), %edx
 246      0000
 247              	.LVL20:
 248              	.LBE133:
  36:fltk-1.3.4-1/src/forms_compatability.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
 249              		.loc 2 36 0
 250 0043 4501C3   		addl	%r8d, %r11d
 251              	.LVL21:
  37:fltk-1.3.4-1/src/forms_compatability.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 252              		.loc 2 37 0
 253 0046 4101F9   		addl	%edi, %r9d
 254              	.LVL22:
 255              	.LBB134:
  38:fltk-1.3.4-1/src/forms_compatability.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 256              		.loc 2 38 0
 257 0049 83FA01   		cmpl	$1, %edx
 258 004c 7445     		je	.L17
 259 004e 83EA02   		subl	$2, %edx
 260              	.LVL23:
 261 0051 4C8D54D0 		leaq	16(%rax,%rdx,8), %r10
 261      10
 262              	.LVL24:
 263 0056 662E0F1F 		.p2align 4,,10
 263      84000000 
 263      0000
 264              		.p2align 3
 265              	.L12:
  39:fltk-1.3.4-1/src/forms_compatability.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 266              		.loc 2 39 0
 267 0060 4883C608 		addq	$8, %rsi
 268              	.LVL25:
 269 0064 488B4EF8 		movq	-8(%rsi), %rcx
 270              	.LVL26:
 271 0068 8B5120   		movl	32(%rcx), %edx
 272              	.LVL27:
 273 006b 8B4124   		movl	36(%rcx), %eax
 274 006e 4139D0   		cmpl	%edx, %r8d
 275 0071 440F4FC2 		cmovg	%edx, %r8d
 276              	.LVL28:
 277 0075 39C7     		cmpl	%eax, %edi
 278 0077 0F4FF8   		cmovg	%eax, %edi
 279              	.LVL29:
  42:fltk-1.3.4-1/src/forms_compatability.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 280              		.loc 2 42 0
 281 007a 035128   		addl	40(%rcx), %edx
 282 007d 4139D3   		cmpl	%edx, %r11d
 283 0080 440F4CDA 		cmovl	%edx, %r11d
 284              	.LVL30:
  43:fltk-1.3.4-1/src/forms_compatability.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 285              		.loc 2 43 0
 286 0084 03412C   		addl	44(%rcx), %eax
 287 0087 4139C1   		cmpl	%eax, %r9d
 288 008a 440F4CC8 		cmovl	%eax, %r9d
 289              	.LVL31:
  38:fltk-1.3.4-1/src/forms_compatability.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 290              		.loc 2 38 0
 291 008e 4C39D6   		cmpq	%r10, %rsi
 292 0091 75CD     		jne	.L12
 293              	.LVL32:
 294              	.L17:
 295              	.LBE134:
 296              	.LBB135:
 297              	.LBB136:
 143:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 298              		.loc 1 143 0
 299 0093 4529C3   		subl	%r8d, %r11d
 300              	.LVL33:
 301              	.LBE136:
 302              	.LBE135:
 303              	.LBB138:
 304              	.LBB139:
 145:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 305              		.loc 1 145 0
 306 0096 4129F9   		subl	%edi, %r9d
 307              	.LVL34:
 308              	.LBE139:
 309              	.LBE138:
 310              	.LBB141:
 311              	.LBB142:
 139:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 312              		.loc 1 139 0
 313 0099 44894320 		movl	%r8d, 32(%rbx)
 314              	.LVL35:
 315              	.LBE142:
 316              	.LBE141:
 317              	.LBB143:
 318              	.LBB144:
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 319              		.loc 1 141 0
 320 009d 897B24   		movl	%edi, 36(%rbx)
 321              	.LVL36:
 322              	.LBE144:
 323              	.LBE143:
 324              	.LBB145:
 325              	.LBB137:
 143:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 326              		.loc 1 143 0
 327 00a0 44895B28 		movl	%r11d, 40(%rbx)
 328              	.LVL37:
 329              	.LBE137:
 330              	.LBE145:
 331              	.LBB146:
 332              	.LBB140:
 145:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 333              		.loc 1 145 0
 334 00a4 44894B2C 		movl	%r9d, 44(%rbx)
 335              	.LVL38:
 336              	.L10:
 337              	.LBE140:
 338              	.LBE146:
 339              	.LBE132:
 340              	.LBE131:
 341              	.LBB147:
  51:fltk-1.3.4-1/src/forms_compatability.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 342              		.loc 2 51 0
 343 00a8 803D0000 		cmpb	$0, fl_flip(%rip)
 343      000000
 344 00af 7447     		je	.L15
 345              	.LVL39:
 346              	.LBB148:
  52:fltk-1.3.4-1/src/forms_compatability.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 347              		.loc 2 52 0
 348 00b1 807B6CEF 		cmpb	$-17, 108(%rbx)
 349 00b5 4889D8   		movq	%rbx, %rax
 350 00b8 7656     		jbe	.L29
 351              	.L14:
 352              	.LVL40:
  54:fltk-1.3.4-1/src/forms_compatability.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 353              		.loc 2 54 0 discriminator 4
 354 00ba 4889DF   		movq	%rbx, %rdi
 355 00bd 8B682C   		movl	44(%rax), %ebp
 356              	.LVL41:
 357 00c0 E8000000 		call	_ZNK8Fl_Group5arrayEv
 357      00
 358              	.LVL42:
 359 00c5 8B939000 		movl	144(%rbx), %edx
 359      0000
 360              	.LVL43:
 361              	.LBB149:
  55:fltk-1.3.4-1/src/forms_compatability.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 362              		.loc 2 55 0 discriminator 4
 363 00cb 85D2     		testl	%edx, %edx
 364 00cd 7429     		je	.L15
 365 00cf 83EA01   		subl	$1, %edx
 366              	.LVL44:
 367 00d2 488D74D0 		leaq	8(%rax,%rdx,8), %rsi
 367      08
 368              	.LVL45:
 369 00d7 660F1F84 		.p2align 4,,10
 369      00000000 
 369      00
 370              		.p2align 3
 371              	.L16:
 372              	.LBB150:
  56:fltk-1.3.4-1/src/forms_compatability.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 373              		.loc 2 56 0
 374 00e0 4883C008 		addq	$8, %rax
 375              	.LVL46:
 376 00e4 488B50F8 		movq	-8(%rax), %rdx
 377              	.LVL47:
 378              	.LBB151:
 379              	.LBB152:
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 380              		.loc 1 141 0
 381 00e8 89E9     		movl	%ebp, %ecx
 382 00ea 2B4A24   		subl	36(%rdx), %ecx
 383 00ed 2B4A2C   		subl	44(%rdx), %ecx
 384              	.LBE152:
 385              	.LBE151:
 386              	.LBE150:
  55:fltk-1.3.4-1/src/forms_compatability.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 387              		.loc 2 55 0
 388 00f0 4839F0   		cmpq	%rsi, %rax
 389              	.LBB155:
 390              	.LBB154:
 391              	.LBB153:
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 392              		.loc 1 141 0
 393 00f3 894A24   		movl	%ecx, 36(%rdx)
 394              	.LVL48:
 395              	.LBE153:
 396              	.LBE154:
 397              	.LBE155:
  55:fltk-1.3.4-1/src/forms_compatability.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 398              		.loc 2 55 0
 399 00f6 75E8     		jne	.L16
 400              	.LVL49:
 401              	.L15:
 402              	.LBE149:
 403              	.LBE148:
 404              	.LBE147:
  62:fltk-1.3.4-1/src/forms_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 405              		.loc 2 62 0
 406 00f8 4883C408 		addq	$8, %rsp
 407              		.cfi_remember_state
 408              		.cfi_def_cfa_offset 24
  61:fltk-1.3.4-1/src/forms_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 409              		.loc 2 61 0
 410 00fc 4889DF   		movq	%rbx, %rdi
  62:fltk-1.3.4-1/src/forms_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 411              		.loc 2 62 0
 412 00ff 5B       		popq	%rbx
 413              		.cfi_def_cfa_offset 16
 414              	.LVL50:
 415 0100 5D       		popq	%rbp
 416              		.cfi_def_cfa_offset 8
  61:fltk-1.3.4-1/src/forms_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 417              		.loc 2 61 0
 418 0101 E9000000 		jmp	_ZN8Fl_Group3endEv
 418      00
 419              	.LVL51:
 420 0106 662E0F1F 		.p2align 4,,10
 420      84000000 
 420      0000
 421              		.p2align 3
 422              	.L29:
 423              		.cfi_restore_state
 424              	.LBB157:
 425              	.LBB156:
  52:fltk-1.3.4-1/src/forms_compatability.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 426              		.loc 2 52 0 discriminator 1
 427 0110 4889DF   		movq	%rbx, %rdi
 428 0113 E8000000 		call	_ZNK9Fl_Widget6windowEv
 428      00
 429              	.LVL52:
 430 0118 EBA0     		jmp	.L14
 431              	.LBE156:
 432              	.LBE157:
 433              		.cfi_endproc
 434              	.LFE970:
 436              		.section	.text.unlikely._ZN8Fl_Group9forms_endEv
 437              	.LCOLDE6:
 438              		.section	.text._ZN8Fl_Group9forms_endEv
 439              	.LHOTE6:
 440              		.section	.text.unlikely._Z11fl_end_formv,"ax",@progbits
 441              	.LCOLDB7:
 442              		.section	.text._Z11fl_end_formv,"ax",@progbits
 443              	.LHOTB7:
 444              		.p2align 4,,15
 445              		.globl	_Z11fl_end_formv
 447              	_Z11fl_end_formv:
 448              	.LFB969:
  26:fltk-1.3.4-1/src/forms_compatability.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
 449              		.loc 2 26 0
 450              		.cfi_startproc
 451 0000 4883EC08 		subq	$8, %rsp
 452              		.cfi_def_cfa_offset 16
 453 0004 EB17     		jmp	.L32
 454 0006 662E0F1F 		.p2align 4,,10
 454      84000000 
 454      0000
 455              		.p2align 3
 456              	.L34:
  27:fltk-1.3.4-1/src/forms_compatability.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 457              		.loc 2 27 0 discriminator 1
 458 0010 E8000000 		call	_ZN8Fl_Group7currentEv
 458      00
 459              	.LVL53:
 460 0015 4889C7   		movq	%rax, %rdi
 461 0018 E8000000 		call	_ZN8Fl_Group9forms_endEv
 461      00
 462              	.LVL54:
 463              	.L32:
  27:fltk-1.3.4-1/src/forms_compatability.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 464              		.loc 2 27 0 is_stmt 0 discriminator 2
 465 001d E8000000 		call	_ZN8Fl_Group7currentEv
 465      00
 466              	.LVL55:
 467 0022 4885C0   		testq	%rax, %rax
 468 0025 75E9     		jne	.L34
  28:fltk-1.3.4-1/src/forms_compatability.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
 469              		.loc 2 28 0 is_stmt 1
 470 0027 4883C408 		addq	$8, %rsp
 471              		.cfi_def_cfa_offset 8
 472 002b C3       		ret
 473              		.cfi_endproc
 474              	.LFE969:
 476              		.section	.text.unlikely._Z11fl_end_formv
 477              	.LCOLDE7:
 478              		.section	.text._Z11fl_end_formv
 479              	.LHOTE7:
 480              		.section	.text.unlikely._Z13fl_initializePiPPcPKcPvi,"ax",@progbits
 481              	.LCOLDB8:
 482              		.section	.text._Z13fl_initializePiPPcPKcPvi,"ax",@progbits
 483              	.LHOTB8:
 484              		.p2align 4,,15
 485              		.globl	_Z13fl_initializePiPPcPKcPvi
 487              	_Z13fl_initializePiPPcPKcPvi:
 488              	.LFB971:
  67:fltk-1.3.4-1/src/forms_compatability.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 489              		.loc 2 67 0
 490              		.cfi_startproc
 491              	.LVL56:
 492 0000 4155     		pushq	%r13
 493              		.cfi_def_cfa_offset 16
 494              		.cfi_offset 13, -16
 495 0002 4154     		pushq	%r12
 496              		.cfi_def_cfa_offset 24
 497              		.cfi_offset 12, -24
  69:fltk-1.3.4-1/src/forms_compatability.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 498              		.loc 2 69 0
 499 0004 48B90000 		movabsq	$1143914305352105984, %rcx
 499      00000000 
 499      E00F
  67:fltk-1.3.4-1/src/forms_compatability.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 500              		.loc 2 67 0
 501 000e 55       		pushq	%rbp
 502              		.cfi_def_cfa_offset 32
 503              		.cfi_offset 6, -32
 504 000f 53       		pushq	%rbx
 505              		.cfi_def_cfa_offset 40
 506              		.cfi_offset 3, -40
 507 0010 4889FD   		movq	%rdi, %rbp
 508 0013 4889F3   		movq	%rsi, %rbx
 509 0016 4883EC18 		subq	$24, %rsp
 510              		.cfi_def_cfa_offset 64
  67:fltk-1.3.4-1/src/forms_compatability.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 511              		.loc 2 67 0
 512 001a 64488B04 		movq	%fs:40, %rax
 512      25280000 
 512      00
 513 0023 48894424 		movq	%rax, 8(%rsp)
 513      08
 514 0028 31C0     		xorl	%eax, %eax
  68:fltk-1.3.4-1/src/forms_compatability.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 515              		.loc 2 68 0
 516 002a 8B07     		movl	(%rdi), %eax
  69:fltk-1.3.4-1/src/forms_compatability.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 517              		.loc 2 69 0
 518 002c 48C7C7FF 		movq	$-1, %rdi
 518      FFFFFF
 519              	.LVL57:
  68:fltk-1.3.4-1/src/forms_compatability.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 520              		.loc 2 68 0
 521 0033 89050000 		movl	%eax, _ZL8initargc(%rip)
 521      0000
  69:fltk-1.3.4-1/src/forms_compatability.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 522              		.loc 2 69 0
 523 0039 83C001   		addl	$1, %eax
 524 003c 4898     		cltq
 525 003e 488D14C5 		leaq	0(,%rax,8), %rdx
 525      00000000 
 526 0046 4839C8   		cmpq	%rcx, %rax
 527 0049 480F46FA 		cmovbe	%rdx, %rdi
 528 004d E8000000 		call	_Znam
 528      00
 529              	.LVL58:
  71:fltk-1.3.4-1/src/forms_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 530              		.loc 2 71 0
 531 0052 8B7D00   		movl	0(%rbp), %edi
 532 0055 31D2     		xorl	%edx, %edx
  69:fltk-1.3.4-1/src/forms_compatability.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 533              		.loc 2 69 0
 534 0057 48890500 		movq	%rax, _ZL8initargv(%rip)
 534      000000
  71:fltk-1.3.4-1/src/forms_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 535              		.loc 2 71 0
 536 005e 85FF     		testl	%edi, %edi
 537 0060 7816     		js	.L40
 538              		.p2align 4,,10
 539 0062 660F1F44 		.p2align 3
 539      0000
 540              	.L47:
  71:fltk-1.3.4-1/src/forms_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 541              		.loc 2 71 0 is_stmt 0 discriminator 2
 542 0068 488B0CD3 		movq	(%rbx,%rdx,8), %rcx
 543 006c 48890CD0 		movq	%rcx, (%rax,%rdx,8)
 544 0070 4883C201 		addq	$1, %rdx
 545 0074 39D7     		cmpl	%edx, %edi
 546 0076 7DF0     		jge	.L47
 547              	.L40:
 548              	.LVL59:
  72:fltk-1.3.4-1/src/forms_compatability.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 549              		.loc 2 72 0 is_stmt 1
 550 0078 C7442404 		movl	$1, 4(%rsp)
 550      01000000 
 551 0080 4531E4   		xorl	%r12d, %r12d
 552 0083 B8010000 		movl	$1, %eax
 552      00
 553              	.LVL60:
 554              	.L38:
 555 0088 458D6C24 		leal	1(%r12), %r13d
 555      01
 556 008d EB19     		jmp	.L43
 557              	.LVL61:
 558 008f 90       		.p2align 4,,10
 559              		.p2align 3
 560              	.L51:
  73:fltk-1.3.4-1/src/forms_compatability.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 561              		.loc 2 73 0
 562 0090 488D5424 		leaq	4(%rsp), %rdx
 562      04
 563 0095 4889DE   		movq	%rbx, %rsi
 564 0098 E8000000 		call	_ZN2Fl3argEiPPcRi
 564      00
 565              	.LVL62:
 566 009d 85C0     		testl	%eax, %eax
 567 009f 744F     		je	.L42
 568 00a1 8B7D00   		movl	0(%rbp), %edi
 569 00a4 8B442404 		movl	4(%rsp), %eax
 570              	.LVL63:
 571              	.L43:
  72:fltk-1.3.4-1/src/forms_compatability.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 572              		.loc 2 72 0 discriminator 1
 573 00a8 39C7     		cmpl	%eax, %edi
 574 00aa 7FE4     		jg	.L51
  76:fltk-1.3.4-1/src/forms_compatability.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 575              		.loc 2 76 0
 576 00ac 4963C5   		movslq	%r13d, %rax
 577 00af 48C704C3 		movq	$0, (%rbx,%rax,8)
 577      00000000 
  77:fltk-1.3.4-1/src/forms_compatability.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 578              		.loc 2 77 0
 579 00b7 44896D00 		movl	%r13d, 0(%rbp)
  78:fltk-1.3.4-1/src/forms_compatability.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 580              		.loc 2 78 0
 581 00bb 803D0000 		cmpb	$2, fl_flip(%rip)
 581      000002
 582 00c2 7507     		jne	.L35
  78:fltk-1.3.4-1/src/forms_compatability.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 583              		.loc 2 78 0 is_stmt 0 discriminator 1
 584 00c4 C6050000 		movb	$0, fl_flip(%rip)
 584      000000
 585              	.L35:
  79:fltk-1.3.4-1/src/forms_compatability.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 586              		.loc 2 79 0 is_stmt 1
 587 00cb 488B4424 		movq	8(%rsp), %rax
 587      08
 588 00d0 64483304 		xorq	%fs:40, %rax
 588      25280000 
 588      00
 589 00d9 7536     		jne	.L52
 590 00db 4883C418 		addq	$24, %rsp
 591              		.cfi_remember_state
 592              		.cfi_def_cfa_offset 40
 593 00df 5B       		popq	%rbx
 594              		.cfi_def_cfa_offset 32
 595              	.LVL64:
 596 00e0 5D       		popq	%rbp
 597              		.cfi_def_cfa_offset 24
 598              	.LVL65:
 599 00e1 415C     		popq	%r12
 600              		.cfi_def_cfa_offset 16
 601 00e3 415D     		popq	%r13
 602              		.cfi_def_cfa_offset 8
 603              	.LVL66:
 604 00e5 C3       		ret
 605              	.LVL67:
 606 00e6 662E0F1F 		.p2align 4,,10
 606      84000000 
 606      0000
 607              		.p2align 3
 608              	.L42:
 609              		.cfi_restore_state
  74:fltk-1.3.4-1/src/forms_compatability.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 610              		.loc 2 74 0
 611 00f0 48635424 		movslq	4(%rsp), %rdx
 611      04
 612 00f5 8D4201   		leal	1(%rdx), %eax
 613 00f8 488B14D3 		movq	(%rbx,%rdx,8), %rdx
 614 00fc 89442404 		movl	%eax, 4(%rsp)
 615 0100 4A8954E3 		movq	%rdx, 8(%rbx,%r12,8)
 615      08
 616 0105 4983C401 		addq	$1, %r12
 617              	.LVL68:
 618 0109 8B7D00   		movl	0(%rbp), %edi
 619 010c E977FFFF 		jmp	.L38
 619      FF
 620              	.LVL69:
 621              	.L52:
  79:fltk-1.3.4-1/src/forms_compatability.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 622              		.loc 2 79 0
 623 0111 E8000000 		call	__stack_chk_fail
 623      00
 624              	.LVL70:
 625              		.cfi_endproc
 626              	.LFE971:
 628              		.section	.text.unlikely._Z13fl_initializePiPPcPKcPvi
 629              	.LCOLDE8:
 630              		.section	.text._Z13fl_initializePiPPcPKcPvi
 631              	.LHOTE8:
 632              		.section	.text.unlikely._Z12fl_show_formP9Fl_WindowiiPKc,"ax",@progbits
 633              	.LCOLDB9:
 634              		.section	.text._Z12fl_show_formP9Fl_WindowiiPKc,"ax",@progbits
 635              	.LHOTB9:
 636              		.p2align 4,,15
 637              		.globl	_Z12fl_show_formP9Fl_WindowiiPKc
 639              	_Z12fl_show_formP9Fl_WindowiiPKc:
 640              	.LFB972:
  83:fltk-1.3.4-1/src/forms_compatability.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 641              		.loc 2 83 0
 642              		.cfi_startproc
 643              	.LVL71:
 644 0000 4154     		pushq	%r12
 645              		.cfi_def_cfa_offset 16
 646              		.cfi_offset 12, -16
 647 0002 55       		pushq	%rbp
 648              		.cfi_def_cfa_offset 24
 649              		.cfi_offset 6, -24
 650 0003 4189D4   		movl	%edx, %r12d
 651 0006 53       		pushq	%rbx
 652              		.cfi_def_cfa_offset 32
 653              		.cfi_offset 3, -32
 654 0007 89F5     		movl	%esi, %ebp
  85:fltk-1.3.4-1/src/forms_compatability.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 655              		.loc 2 85 0
 656 0009 4889CE   		movq	%rcx, %rsi
 657              	.LVL72:
  83:fltk-1.3.4-1/src/forms_compatability.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 658              		.loc 2 83 0
 659 000c 4889FB   		movq	%rdi, %rbx
 660 000f 4883EC30 		subq	$48, %rsp
 661              		.cfi_def_cfa_offset 80
  83:fltk-1.3.4-1/src/forms_compatability.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 662              		.loc 2 83 0
 663 0013 64488B04 		movq	%fs:40, %rax
 663      25280000 
 663      00
 664 001c 48894424 		movq	%rax, 40(%rsp)
 664      28
 665 0021 31C0     		xorl	%eax, %eax
  85:fltk-1.3.4-1/src/forms_compatability.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 666              		.loc 2 85 0
 667 0023 E8000000 		call	_ZN9Fl_Window5labelEPKc
 667      00
 668              	.LVL73:
  86:fltk-1.3.4-1/src/forms_compatability.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 669              		.loc 2 86 0
 670 0028 4585E4   		testl	%r12d, %r12d
 671 002b 7504     		jne	.L54
 672              	.LVL74:
 673              	.LBB177:
 674              	.LBB178:
 675              	.LBB179:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 676              		.loc 1 149 0
 677 002d 834B6008 		orl	$8, 96(%rbx)
 678              	.LVL75:
 679              	.L54:
 680              	.LBE179:
 681              	.LBE178:
 682              	.LBE177:
  87:fltk-1.3.4-1/src/forms_compatability.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 683              		.loc 2 87 0
 684 0031 803D0000 		cmpb	$0, fl_modal_next(%rip)
 684      000000
 685 0038 0F85E200 		jne	.L73
 685      0000
 686 003e 4183FC02 		cmpl	$2, %r12d
 687 0042 0F84D800 		je	.L73
 687      0000
  89:fltk-1.3.4-1/src/forms_compatability.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 688              		.loc 2 89 0
 689 0048 40F6C501 		testb	$1, %bpl
 690 004c 0F85E600 		jne	.L90
 690      0000
 691              	.L57:
 692              	.LBB180:
  91:fltk-1.3.4-1/src/forms_compatability.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 693              		.loc 2 91 0
 694 0052 40F6C502 		testb	$2, %bpl
 695 0056 0F85F300 		jne	.L91
 695      0000
 696              	.L58:
 697              	.LBE180:
  97:fltk-1.3.4-1/src/forms_compatability.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 698              		.loc 2 97 0
 699 005c 40F6C540 		testb	$64, %bpl
 700 0060 0F856401 		jne	.L92
 700      0000
 701              	.L59:
 100:fltk-1.3.4-1/src/forms_compatability.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 702              		.loc 2 100 0
 703 0066 40F6C514 		testb	$20, %bpl
 704 006a 7426     		je	.L60
 705 006c 8B5324   		movl	36(%rbx), %edx
 706              	.LVL76:
 101:fltk-1.3.4-1/src/forms_compatability.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 707              		.loc 2 101 0
 708 006f 85D2     		testl	%edx, %edx
 709 0071 0F886901 		js	.L93
 709      0000
 710              	.LVL77:
 711              	.L61:
 712 0077 8B7320   		movl	32(%rbx), %esi
 713              	.LVL78:
 101:fltk-1.3.4-1/src/forms_compatability.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 714              		.loc 2 101 0 is_stmt 0 discriminator 4
 715 007a 85F6     		testl	%esi, %esi
 716 007c 0F887601 		js	.L62
 716      0000
 717 0082 8B4B28   		movl	40(%rbx), %ecx
 718              	.LVL79:
 719              	.L63:
 720              	.LBB186:
 721              	.LBB187:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 722              		.loc 1 332 0 is_stmt 1 discriminator 8
 723 0085 488B03   		movq	(%rbx), %rax
 724 0088 448B432C 		movl	44(%rbx), %r8d
 725 008c 4889DF   		movq	%rbx, %rdi
 726 008f FF5020   		call	*32(%rax)
 727              	.LVL80:
 728              	.L60:
 729              	.LBE187:
 730              	.LBE186:
 109:fltk-1.3.4-1/src/forms_compatability.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 731              		.loc 2 109 0
 732 0092 F7C5F7FF 		testl	$-9, %ebp
 732      FFFF
 733 0098 743E     		je	.L64
 734              	.L67:
 112:fltk-1.3.4-1/src/forms_compatability.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 735              		.loc 2 112 0
 736 009a 81E50040 		andl	$16384, %ebp
 736      0000
 737              	.LVL81:
 738 00a0 753E     		jne	.L65
 739              	.L69:
 115:fltk-1.3.4-1/src/forms_compatability.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 740              		.loc 2 115 0
 741 00a2 8B350000 		movl	_ZL8initargc(%rip), %esi
 741      0000
 742 00a8 85F6     		testl	%esi, %esi
 743 00aa 7554     		jne	.L94
 744              	.L70:
 116:fltk-1.3.4-1/src/forms_compatability.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 745              		.loc 2 116 0
 746 00ac 488B03   		movq	(%rbx), %rax
 747 00af 4889DF   		movq	%rbx, %rdi
 748 00b2 FF5028   		call	*40(%rax)
 749              	.LVL82:
 750              	.L53:
 117:fltk-1.3.4-1/src/forms_compatability.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 751              		.loc 2 117 0
 752 00b5 488B4424 		movq	40(%rsp), %rax
 752      28
 753 00ba 64483304 		xorq	%fs:40, %rax
 753      25280000 
 753      00
 754 00c3 0F854E01 		jne	.L95
 754      0000
 755 00c9 4883C430 		addq	$48, %rsp
 756              		.cfi_remember_state
 757              		.cfi_def_cfa_offset 32
 758 00cd 5B       		popq	%rbx
 759              		.cfi_def_cfa_offset 24
 760              	.LVL83:
 761 00ce 5D       		popq	%rbp
 762              		.cfi_def_cfa_offset 16
 763 00cf 415C     		popq	%r12
 764              		.cfi_def_cfa_offset 8
 765              	.LVL84:
 766 00d1 C3       		ret
 767              	.LVL85:
 768              		.p2align 4,,10
 769 00d2 660F1F44 		.p2align 3
 769      0000
 770              	.L64:
 771              		.cfi_restore_state
 772              	.LBB188:
 773              	.LBB189:
 774              	.LBB190:
 151:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 775              		.loc 1 151 0
 776 00d8 836360EF 		andl	$-17, 96(%rbx)
 777              	.LVL86:
 778              	.LBE190:
 779              	.LBE189:
 780              	.LBE188:
 112:fltk-1.3.4-1/src/forms_compatability.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 781              		.loc 2 112 0
 782 00dc 85ED     		testl	%ebp, %ebp
 783 00de 75BA     		jne	.L67
 784              	.LVL87:
 785              	.L65:
 113:fltk-1.3.4-1/src/forms_compatability.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 786              		.loc 2 113 0
 787 00e0 4883BB88 		cmpq	$0, 136(%rbx)
 787      00000000 
 788 00e8 75B8     		jne	.L69
 789              	.LVL88:
 115:fltk-1.3.4-1/src/forms_compatability.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 790              		.loc 2 115 0 discriminator 1
 791 00ea 8B350000 		movl	_ZL8initargc(%rip), %esi
 791      0000
 792              	.LBB191:
 793              	.LBB192:
 794              		.file 4 "fltk-1.3.4-1/FL/Fl_Group.H"
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
 795              		.loc 4 148 0 discriminator 1
 796 00f0 48899B88 		movq	%rbx, 136(%rbx)
 796      000000
 797              	.LBE192:
 798              	.LBE191:
 115:fltk-1.3.4-1/src/forms_compatability.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 799              		.loc 2 115 0 discriminator 1
 800 00f7 85F6     		testl	%esi, %esi
 801 00f9 74B1     		je	.L70
 802              	.LVL89:
 803 00fb 0F1F4400 		.p2align 4,,10
 803      00
 804              		.p2align 3
 805              	.L94:
 806 0100 488B1500 		movq	_ZL8initargv(%rip), %rdx
 806      000000
 807 0107 4889DF   		movq	%rbx, %rdi
 808 010a E8000000 		call	_ZN9Fl_Window4showEiPPc
 808      00
 809              	.LVL90:
 810 010f C7050000 		movl	$0, _ZL8initargc(%rip)
 810      00000000 
 810      0000
 811 0119 EB9A     		jmp	.L53
 812              	.LVL91:
 813 011b 0F1F4400 		.p2align 4,,10
 813      00
 814              		.p2align 3
 815              	.L73:
 816              	.LBB193:
 817              	.LBB194:
 818              	.LBB195:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 819              		.loc 1 149 0
 820 0120 814B6000 		orl	$16384, 96(%rbx)
 820      400000
 821              	.LVL92:
 822              	.LBE195:
 823              	.LBE194:
 824              	.LBE193:
  89:fltk-1.3.4-1/src/forms_compatability.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 825              		.loc 2 89 0
 826 0127 40F6C501 		testb	$1, %bpl
  87:fltk-1.3.4-1/src/forms_compatability.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 827              		.loc 2 87 0
 828 012b C6050000 		movb	$0, fl_modal_next(%rip)
 828      000000
  89:fltk-1.3.4-1/src/forms_compatability.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 829              		.loc 2 89 0
 830 0132 0F841AFF 		je	.L57
 830      FFFF
 831              	.LVL93:
 832              	.L90:
  89:fltk-1.3.4-1/src/forms_compatability.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 833              		.loc 2 89 0 is_stmt 0 discriminator 1
 834 0138 31D2     		xorl	%edx, %edx
 835 013a 4889DE   		movq	%rbx, %rsi
 836 013d 4889DF   		movq	%rbx, %rdi
 837 0140 E8000000 		call	_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
 837      00
 838              	.LVL94:
 839              	.LBB196:
  91:fltk-1.3.4-1/src/forms_compatability.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 840              		.loc 2 91 0 is_stmt 1 discriminator 1
 841 0145 40F6C502 		testb	$2, %bpl
 842 0149 0F840DFF 		je	.L58
 842      FFFF
 843              	.L91:
 844              	.LVL95:
 845              	.LBB181:
 846              	.LBB182:
 847              	.LBB183:
 848              		.file 5 "fltk-1.3.4-1/FL/Fl.H"
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
 849              		.loc 5 1000 0
 850 014f 488D7424 		leaq	36(%rsp), %rsi
 850      24
 851 0154 488D7C24 		leaq	32(%rsp), %rdi
 851      20
 852 0159 E8000000 		call	_ZN2Fl9get_mouseERiS0_
 852      00
 853              	.LVL96:
1001:fltk-1.3.4-1/FL/Fl.H ****     screen_xywh(X, Y, W, H, x, y);
 854              		.loc 5 1001 0
 855 015e 448B4C24 		movl	36(%rsp), %r9d
 855      24
 856 0163 448B4424 		movl	32(%rsp), %r8d
 856      20
 857 0168 488D4C24 		leaq	28(%rsp), %rcx
 857      1C
 858              	.LVL97:
 859 016d 488D5424 		leaq	24(%rsp), %rdx
 859      18
 860              	.LVL98:
 861 0172 488D7424 		leaq	20(%rsp), %rsi
 861      14
 862              	.LVL99:
 863 0177 488D7C24 		leaq	16(%rsp), %rdi
 863      10
 864              	.LVL100:
 865 017c E8000000 		call	_ZN2Fl11screen_xywhERiS0_S0_S0_ii
 865      00
 866              	.LVL101:
 867 0181 448B432C 		movl	44(%rbx), %r8d
 868              	.LVL102:
 869              	.LBE183:
 870              	.LBE182:
 871              	.LBB184:
 872              	.LBB185:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 873              		.loc 1 332 0
 874 0185 8B44241C 		movl	28(%rsp), %eax
 875 0189 4889DF   		movq	%rbx, %rdi
 876 018c 8B4B28   		movl	40(%rbx), %ecx
 877              	.LVL103:
 878 018f 4429C0   		subl	%r8d, %eax
 879 0192 89C2     		movl	%eax, %edx
 880 0194 C1EA1F   		shrl	$31, %edx
 881 0197 01C2     		addl	%eax, %edx
 882 0199 89D0     		movl	%edx, %eax
 883 019b D1F8     		sarl	%eax
 884 019d 03442414 		addl	20(%rsp), %eax
 885 01a1 89C2     		movl	%eax, %edx
 886 01a3 8B442418 		movl	24(%rsp), %eax
 887 01a7 29C8     		subl	%ecx, %eax
 888 01a9 89C6     		movl	%eax, %esi
 889 01ab C1EE1F   		shrl	$31, %esi
 890 01ae 01C6     		addl	%eax, %esi
 891 01b0 89F0     		movl	%esi, %eax
 892 01b2 D1F8     		sarl	%eax
 893 01b4 03442410 		addl	16(%rsp), %eax
 894 01b8 89C6     		movl	%eax, %esi
 895 01ba 488B03   		movq	(%rbx), %rax
 896 01bd FF5020   		call	*32(%rax)
 897              	.LVL104:
 898              	.LBE185:
 899              	.LBE184:
 900              	.LBE181:
 901              	.LBE196:
  97:fltk-1.3.4-1/src/forms_compatability.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 902              		.loc 2 97 0
 903 01c0 40F6C540 		testb	$64, %bpl
 904 01c4 0F849CFE 		je	.L59
 904      FFFF
 905              	.LVL105:
 906              	.L92:
  98:fltk-1.3.4-1/src/forms_compatability.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 907              		.loc 2 98 0
 908 01ca 4889DF   		movq	%rbx, %rdi
 909 01cd E8000000 		call	_ZN9Fl_Window10fullscreenEv
 909      00
 910              	.LVL106:
 911 01d2 E98FFEFF 		jmp	.L59
 911      FF
 912              	.LVL107:
 913 01d7 660F1F84 		.p2align 4,,10
 913      00000000 
 913      00
 914              		.p2align 3
 915              	.L93:
 103:fltk-1.3.4-1/src/forms_compatability.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 916              		.loc 2 103 0 discriminator 1
 917 01e0 E8000000 		call	_ZN2Fl1hEv
 917      00
 918              	.LVL108:
 101:fltk-1.3.4-1/src/forms_compatability.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 919              		.loc 2 101 0 discriminator 1
 920 01e5 2B432C   		subl	44(%rbx), %eax
 921 01e8 034324   		addl	36(%rbx), %eax
 922 01eb 89C2     		movl	%eax, %edx
 923 01ed 83EA01   		subl	$1, %edx
 924 01f0 E982FEFF 		jmp	.L61
 924      FF
 925              	.LVL109:
 926              		.p2align 4,,10
 927 01f5 0F1F00   		.p2align 3
 928              	.L62:
 929 01f8 8954240C 		movl	%edx, 12(%rsp)
 102:fltk-1.3.4-1/src/forms_compatability.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 930              		.loc 2 102 0 discriminator 5
 931 01fc E8000000 		call	_ZN2Fl1wEv
 931      00
 932              	.LVL110:
 933 0201 8B4B28   		movl	40(%rbx), %ecx
 934              	.LVL111:
 101:fltk-1.3.4-1/src/forms_compatability.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 935              		.loc 2 101 0 discriminator 5
 936 0204 8B54240C 		movl	12(%rsp), %edx
 937 0208 29C8     		subl	%ecx, %eax
 938 020a 034320   		addl	32(%rbx), %eax
 939 020d 89C6     		movl	%eax, %esi
 940 020f 83EE01   		subl	$1, %esi
 941 0212 E96EFEFF 		jmp	.L63
 941      FF
 942              	.LVL112:
 943              	.L95:
 117:fltk-1.3.4-1/src/forms_compatability.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 944              		.loc 2 117 0
 945 0217 E8000000 		call	__stack_chk_fail
 945      00
 946              	.LVL113:
 947              		.cfi_endproc
 948              	.LFE972:
 950              		.section	.text.unlikely._Z12fl_show_formP9Fl_WindowiiPKc
 951              	.LCOLDE9:
 952              		.section	.text._Z12fl_show_formP9Fl_WindowiiPKc
 953              	.LHOTE9:
 954              		.section	.text.unlikely._Z11fl_do_formsv,"ax",@progbits
 955              	.LCOLDB10:
 956              		.section	.text._Z11fl_do_formsv,"ax",@progbits
 957              	.LHOTB10:
 958              		.p2align 4,,15
 959              		.globl	_Z11fl_do_formsv
 961              	_Z11fl_do_formsv:
 962              	.LFB973:
 119:fltk-1.3.4-1/src/forms_compatability.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 963              		.loc 2 119 0
 964              		.cfi_startproc
 965 0000 4883EC08 		subq	$8, %rsp
 966              		.cfi_def_cfa_offset 16
 967 0004 EB13     		jmp	.L98
 968              	.LVL114:
 969 0006 662E0F1F 		.p2align 4,,10
 969      84000000 
 969      0000
 970              		.p2align 3
 971              	.L102:
 121:fltk-1.3.4-1/src/forms_compatability.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 972              		.loc 2 121 0 discriminator 1
 973 0010 E8000000 		call	_ZN2Fl4waitEv
 973      00
 974              	.LVL115:
 975 0015 85C0     		testl	%eax, %eax
 976 0017 740F     		je	.L101
 977              	.L98:
 121:fltk-1.3.4-1/src/forms_compatability.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 978              		.loc 2 121 0 is_stmt 0
 979 0019 E8000000 		call	_ZN2Fl9readqueueEv
 979      00
 980              	.LVL116:
 981 001e 4885C0   		testq	%rax, %rax
 982 0021 74ED     		je	.L102
 123:fltk-1.3.4-1/src/forms_compatability.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 983              		.loc 2 123 0 is_stmt 1
 984 0023 4883C408 		addq	$8, %rsp
 985              		.cfi_remember_state
 986              		.cfi_def_cfa_offset 8
 987 0027 C3       		ret
 988              	.LVL117:
 989              	.L101:
 990              		.cfi_restore_state
 121:fltk-1.3.4-1/src/forms_compatability.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 991              		.loc 2 121 0 discriminator 2
 992 0028 31FF     		xorl	%edi, %edi
 993 002a E8000000 		call	exit
 993      00
 994              	.LVL118:
 995              		.cfi_endproc
 996              	.LFE973:
 998              		.section	.text.unlikely._Z11fl_do_formsv
 999              	.LCOLDE10:
 1000              		.section	.text._Z11fl_do_formsv
 1001              	.LHOTE10:
 1002              		.section	.text.unlikely._Z14fl_check_formsv,"ax",@progbits
 1003              	.LCOLDB11:
 1004              		.section	.text._Z14fl_check_formsv,"ax",@progbits
 1005              	.LHOTB11:
 1006              		.p2align 4,,15
 1007              		.globl	_Z14fl_check_formsv
 1009              	_Z14fl_check_formsv:
 1010              	.LFB974:
 125:fltk-1.3.4-1/src/forms_compatability.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 1011              		.loc 2 125 0
 1012              		.cfi_startproc
 1013 0000 4883EC08 		subq	$8, %rsp
 1014              		.cfi_def_cfa_offset 16
 126:fltk-1.3.4-1/src/forms_compatability.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 1015              		.loc 2 126 0
 1016 0004 E8000000 		call	_ZN2Fl5checkEv
 1016      00
 1017              	.LVL119:
 128:fltk-1.3.4-1/src/forms_compatability.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1018              		.loc 2 128 0
 1019 0009 4883C408 		addq	$8, %rsp
 1020              		.cfi_def_cfa_offset 8
 127:fltk-1.3.4-1/src/forms_compatability.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 1021              		.loc 2 127 0
 1022 000d E9000000 		jmp	_ZN2Fl9readqueueEv
 1022      00
 1023              	.LVL120:
 1024              		.cfi_endproc
 1025              	.LFE974:
 1027              		.section	.text.unlikely._Z14fl_check_formsv
 1028              	.LCOLDE11:
 1029              		.section	.text._Z14fl_check_formsv
 1030              	.LHOTE11:
 1031              		.section	.text.unlikely._Z20fl_set_graphics_modeii,"ax",@progbits
 1032              	.LCOLDB12:
 1033              		.section	.text._Z20fl_set_graphics_modeii,"ax",@progbits
 1034              	.LHOTB12:
 1035              		.p2align 4,,15
 1036              		.globl	_Z20fl_set_graphics_modeii
 1038              	_Z20fl_set_graphics_modeii:
 1039              	.LFB975:
 130:fltk-1.3.4-1/src/forms_compatability.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 1040              		.loc 2 130 0
 1041              		.cfi_startproc
 1042 0000 F3C3     		rep ret
 1043              		.cfi_endproc
 1044              	.LFE975:
 1046              		.section	.text.unlikely._Z20fl_set_graphics_modeii
 1047              	.LCOLDE12:
 1048              		.section	.text._Z20fl_set_graphics_modeii
 1049              	.LHOTE12:
 1050              		.section	.text.unlikely._Z13fl_add_buttonhiiiiPKc,"ax",@progbits
 1051              	.LCOLDB13:
 1052              		.section	.text._Z13fl_add_buttonhiiiiPKc,"ax",@progbits
 1053              	.LHOTB13:
 1054              		.p2align 4,,15
 1055              		.globl	_Z13fl_add_buttonhiiiiPKc
 1057              	_Z13fl_add_buttonhiiiiPKc:
 1058              	.LFB978:
 138:fltk-1.3.4-1/src/forms_compatability.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/forms_compatability.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/forms_compatability.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/forms_compatability.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/forms_compatability.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/forms_compatability.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/forms_compatability.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/forms_compatability.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 1059              		.loc 2 145 0
 1060              		.cfi_startproc
 1061              	.LVL121:
 1062              		.loc 2 145 0
 1063 0000 4156     		pushq	%r14
 1064              		.cfi_def_cfa_offset 16
 1065              		.cfi_offset 14, -16
 1066 0002 4155     		pushq	%r13
 1067              		.cfi_def_cfa_offset 24
 1068              		.cfi_offset 13, -24
 1069 0004 4189CE   		movl	%ecx, %r14d
 1070 0007 4154     		pushq	%r12
 1071              		.cfi_def_cfa_offset 32
 1072              		.cfi_offset 12, -32
 1073 0009 55       		pushq	%rbp
 1074              		.cfi_def_cfa_offset 40
 1075              		.cfi_offset 6, -40
 1076 000a 4189F4   		movl	%esi, %r12d
 1077 000d 53       		pushq	%rbx
 1078              		.cfi_def_cfa_offset 48
 1079              		.cfi_offset 3, -48
 1080 000e 4189D5   		movl	%edx, %r13d
 1081 0011 4883EC10 		subq	$16, %rsp
 1082              		.cfi_def_cfa_offset 64
 146:fltk-1.3.4-1/src/forms_compatability.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/forms_compatability.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 1083              		.loc 2 147 0
 1084 0015 4080FF04 		cmpb	$4, %dil
 1085 0019 0F84A900 		je	.L108
 1085      0000
 1086 001f 89FB     		movl	%edi, %ebx
 1087 0021 4C894C24 		movq	%r9, 8(%rsp)
 1087      08
 1088 0026 44894424 		movl	%r8d, 4(%rsp)
 1088      04
 148:fltk-1.3.4-1/src/forms_compatability.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/forms_compatability.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/forms_compatability.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/forms_compatability.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/forms_compatability.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/forms_compatability.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/forms_compatability.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/forms_compatability.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/forms_compatability.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 1089              		.loc 2 156 0
 1090 002b BF800000 		movl	$128, %edi
 1090      00
 1091              	.LVL122:
 147:fltk-1.3.4-1/src/forms_compatability.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1092              		.loc 2 147 0
 1093 0030 7256     		jb	.L107
 1094 0032 8D43FA   		leal	-6(%rbx), %eax
 1095 0035 3C01     		cmpb	$1, %al
 1096 0037 774F     		ja	.L107
 150:fltk-1.3.4-1/src/forms_compatability.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 1097              		.loc 2 150 0
 1098 0039 E8000000 		call	_Znwm
 1098      00
 1099              	.LVL123:
 1100 003e 4C8B4C24 		movq	8(%rsp), %r9
 1100      08
 1101 0043 448B4424 		movl	4(%rsp), %r8d
 1101      04
 1102 0048 4489F1   		movl	%r14d, %ecx
 1103 004b 4489EA   		movl	%r13d, %edx
 1104 004e 4489E6   		movl	%r12d, %esi
 1105 0051 4889C7   		movq	%rax, %rdi
 1106 0054 4889C5   		movq	%rax, %rbp
 1107 0057 E8000000 		call	_ZN16Fl_Return_ButtonC1EiiiiPKc
 1107      00
 1108              	.LVL124:
 157:fltk-1.3.4-1/src/forms_compatability.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/forms_compatability.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 1109              		.loc 2 158 0
 1110 005c 80FB05   		cmpb	$5, %bl
 1111 005f 744F     		je	.L112
 1112              	.L119:
 1113 0061 0F87A900 		ja	.L113
 1113      0000
 1114 0067 80FB01   		cmpb	$1, %bl
 1115 006a 0F85D000 		jne	.L118
 1115      0000
 1116              	.L114:
 1117              	.LVL125:
 1118              	.LBB197:
 1119              	.LBB198:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1120              		.loc 1 279 0
 1121 0070 885D6C   		movb	%bl, 108(%rbp)
 1122              	.LVL126:
 1123              	.L111:
 1124              	.LBE198:
 1125              	.LBE197:
 159:fltk-1.3.4-1/src/forms_compatability.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/forms_compatability.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/forms_compatability.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/forms_compatability.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/forms_compatability.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/forms_compatability.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/forms_compatability.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/forms_compatability.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/forms_compatability.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/forms_compatability.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/forms_compatability.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/forms_compatability.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/forms_compatability.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/forms_compatability.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 1126              		.loc 2 172 0
 1127 0073 4883C410 		addq	$16, %rsp
 1128              		.cfi_remember_state
 1129              		.cfi_def_cfa_offset 48
 1130 0077 4889E8   		movq	%rbp, %rax
 1131 007a 5B       		popq	%rbx
 1132              		.cfi_def_cfa_offset 40
 1133 007b 5D       		popq	%rbp
 1134              		.cfi_def_cfa_offset 32
 1135              	.LVL127:
 1136 007c 415C     		popq	%r12
 1137              		.cfi_def_cfa_offset 24
 1138              	.LVL128:
 1139 007e 415D     		popq	%r13
 1140              		.cfi_def_cfa_offset 16
 1141              	.LVL129:
 1142 0080 415E     		popq	%r14
 1143              		.cfi_def_cfa_offset 8
 1144              	.LVL130:
 1145 0082 C3       		ret
 1146              	.LVL131:
 1147              		.p2align 4,,10
 1148 0083 0F1F4400 		.p2align 3
 1148      00
 1149              	.L107:
 1150              		.cfi_restore_state
 156:fltk-1.3.4-1/src/forms_compatability.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1151              		.loc 2 156 0
 1152 0088 E8000000 		call	_Znwm
 1152      00
 1153              	.LVL132:
 1154 008d 4C8B4C24 		movq	8(%rsp), %r9
 1154      08
 1155 0092 448B4424 		movl	4(%rsp), %r8d
 1155      04
 1156 0097 4489F1   		movl	%r14d, %ecx
 1157 009a 4489EA   		movl	%r13d, %edx
 1158 009d 4489E6   		movl	%r12d, %esi
 1159 00a0 4889C7   		movq	%rax, %rdi
 1160 00a3 4889C5   		movq	%rax, %rbp
 1161 00a6 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 1161      00
 1162              	.LVL133:
 158:fltk-1.3.4-1/src/forms_compatability.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1163              		.loc 2 158 0
 1164 00ab 80FB05   		cmpb	$5, %bl
 1165 00ae 75B1     		jne	.L119
 1166              	.L112:
 1167              	.LVL134:
 1168              	.LBB199:
 1169              	.LBB200:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1170              		.loc 1 654 0
 1171 00b0 C6456F01 		movb	$1, 111(%rbp)
 1172              	.LBE200:
 1173              	.LBE199:
 1174              		.loc 2 172 0
 1175 00b4 4883C410 		addq	$16, %rsp
 1176              		.cfi_remember_state
 1177              		.cfi_def_cfa_offset 48
 1178 00b8 4889E8   		movq	%rbp, %rax
 1179 00bb 5B       		popq	%rbx
 1180              		.cfi_def_cfa_offset 40
 1181 00bc 5D       		popq	%rbp
 1182              		.cfi_def_cfa_offset 32
 1183              	.LVL135:
 1184 00bd 415C     		popq	%r12
 1185              		.cfi_def_cfa_offset 24
 1186              	.LVL136:
 1187 00bf 415D     		popq	%r13
 1188              		.cfi_def_cfa_offset 16
 1189              	.LVL137:
 1190 00c1 415E     		popq	%r14
 1191              		.cfi_def_cfa_offset 8
 1192              	.LVL138:
 1193 00c3 C3       		ret
 1194              	.LVL139:
 1195              		.p2align 4,,10
 1196 00c4 0F1F4000 		.p2align 3
 1197              	.L108:
 1198              		.cfi_restore_state
 153:fltk-1.3.4-1/src/forms_compatability.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1199              		.loc 2 153 0
 1200 00c8 BF800000 		movl	$128, %edi
 1200      00
 1201              	.LVL140:
 1202 00cd 4C894C24 		movq	%r9, 8(%rsp)
 1202      08
 1203 00d2 44894424 		movl	%r8d, 4(%rsp)
 1203      04
 1204 00d7 E8000000 		call	_Znwm
 1204      00
 1205              	.LVL141:
 1206 00dc 4C8B4C24 		movq	8(%rsp), %r9
 1206      08
 1207 00e1 448B4424 		movl	4(%rsp), %r8d
 1207      04
 1208 00e6 4489F1   		movl	%r14d, %ecx
 1209 00e9 4489EA   		movl	%r13d, %edx
 1210 00ec 4489E6   		movl	%r12d, %esi
 1211 00ef 4889C7   		movq	%rax, %rdi
 1212 00f2 4889C5   		movq	%rax, %rbp
 1213 00f5 E8000000 		call	_ZN16Fl_Repeat_ButtonC1EiiiiPKc
 1213      00
 1214              	.LVL142:
 1215              		.loc 2 172 0
 1216 00fa 4883C410 		addq	$16, %rsp
 1217              		.cfi_remember_state
 1218              		.cfi_def_cfa_offset 48
 1219 00fe 4889E8   		movq	%rbp, %rax
 1220 0101 5B       		popq	%rbx
 1221              		.cfi_def_cfa_offset 40
 1222 0102 5D       		popq	%rbp
 1223              		.cfi_def_cfa_offset 32
 1224              	.LVL143:
 1225 0103 415C     		popq	%r12
 1226              		.cfi_def_cfa_offset 24
 1227              	.LVL144:
 1228 0105 415D     		popq	%r13
 1229              		.cfi_def_cfa_offset 16
 1230              	.LVL145:
 1231 0107 415E     		popq	%r14
 1232              		.cfi_def_cfa_offset 8
 1233              	.LVL146:
 1234 0109 C3       		ret
 1235              	.LVL147:
 1236 010a 660F1F44 		.p2align 4,,10
 1236      0000
 1237              		.p2align 3
 1238              	.L113:
 1239              		.cfi_restore_state
 158:fltk-1.3.4-1/src/forms_compatability.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1240              		.loc 2 158 0
 1241 0110 80FB07   		cmpb	$7, %bl
 1242 0113 751B     		jne	.L120
 1243              	.LVL148:
 1244              	.LBB201:
 1245              	.LBB202:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1246              		.loc 1 279 0
 1247 0115 C6456C03 		movb	$3, 108(%rbp)
 1248              	.L121:
 1249              	.LBE202:
 1250              	.LBE201:
 1251              		.loc 2 172 0
 1252 0119 4883C410 		addq	$16, %rsp
 1253              		.cfi_remember_state
 1254              		.cfi_def_cfa_offset 48
 1255 011d 4889E8   		movq	%rbp, %rax
 1256 0120 5B       		popq	%rbx
 1257              		.cfi_def_cfa_offset 40
 1258 0121 5D       		popq	%rbp
 1259              		.cfi_def_cfa_offset 32
 1260              	.LVL149:
 1261 0122 415C     		popq	%r12
 1262              		.cfi_def_cfa_offset 24
 1263              	.LVL150:
 1264 0124 415D     		popq	%r13
 1265              		.cfi_def_cfa_offset 16
 1266              	.LVL151:
 1267 0126 415E     		popq	%r14
 1268              		.cfi_def_cfa_offset 8
 1269              	.LVL152:
 1270 0128 C3       		ret
 1271              	.LVL153:
 1272 0129 0F1F8000 		.p2align 4,,10
 1272      000000
 1273              		.p2align 3
 1274              	.L120:
 1275              		.cfi_restore_state
 158:fltk-1.3.4-1/src/forms_compatability.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1276              		.loc 2 158 0
 1277 0130 80FB66   		cmpb	$102, %bl
 1278 0133 0F8437FF 		je	.L114
 1278      FFFF
 1279 0139 E935FFFF 		jmp	.L111
 1279      FF
 1280 013e 6690     		.p2align 4,,10
 1281              		.p2align 3
 1282              	.L118:
 1283 0140 80FB03   		cmpb	$3, %bl
 1284 0143 0F852AFF 		jne	.L111
 1284      FFFF
 1285              	.LVL154:
 1286              	.LBB204:
 1287              	.LBB203:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1288              		.loc 1 279 0
 1289 0149 C6456C03 		movb	$3, 108(%rbp)
 1290 014d EBCA     		jmp	.L121
 1291              	.LBE203:
 1292              	.LBE204:
 1293              		.cfi_endproc
 1294              	.LFE978:
 1296              		.section	.text.unlikely._Z13fl_add_buttonhiiiiPKc
 1297              	.LCOLDE13:
 1298              		.section	.text._Z13fl_add_buttonhiiiiPKc
 1299              	.LHOTE13:
 1300              		.section	.rodata.str1.1,"aMS",@progbits,1
 1301              	.LC14:
 1302 0000 00       		.string	""
 1303              	.LC15:
 1304 0001 25730A25 		.string	"%s\n%s\n%s"
 1304      730A2573 
 1304      00
 1305              		.section	.text.unlikely._Z15fl_show_messagePKcS0_S0_,"ax",@progbits
 1306              	.LCOLDB16:
 1307              		.section	.text._Z15fl_show_messagePKcS0_S0_,"ax",@progbits
 1308              	.LHOTB16:
 1309              		.p2align 4,,15
 1310              		.globl	_Z15fl_show_messagePKcS0_S0_
 1312              	_Z15fl_show_messagePKcS0_S0_:
 1313              	.LFB979:
 173:fltk-1.3.4-1/src/forms_compatability.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/forms_compatability.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 1314              		.loc 2 174 0
 1315              		.cfi_startproc
 1316              	.LVL155:
 175:fltk-1.3.4-1/src/forms_compatability.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 1317              		.loc 2 175 0
 1318 0000 B8000000 		movl	$.LC14, %eax
 1318      00
 1319 0005 4885D2   		testq	%rdx, %rdx
 1320 0008 4889D1   		movq	%rdx, %rcx
 1321 000b 480F44C8 		cmove	%rax, %rcx
 1322 000f 4889F2   		movq	%rsi, %rdx
 1323              	.LVL156:
 1324 0012 4885F6   		testq	%rsi, %rsi
 1325 0015 480F44D0 		cmove	%rax, %rdx
 1326 0019 4885FF   		testq	%rdi, %rdi
 1327 001c 480F45C7 		cmovne	%rdi, %rax
 1328 0020 BF000000 		movl	$.LC15, %edi
 1328      00
 1329              	.LVL157:
 1330 0025 4889C6   		movq	%rax, %rsi
 1331              	.LVL158:
 1332 0028 31C0     		xorl	%eax, %eax
 1333 002a E9000000 		jmp	_Z10fl_messagePKcz
 1333      00
 1334              	.LVL159:
 1335              		.cfi_endproc
 1336              	.LFE979:
 1338              		.section	.text.unlikely._Z15fl_show_messagePKcS0_S0_
 1339              	.LCOLDE16:
 1340              		.section	.text._Z15fl_show_messagePKcS0_S0_
 1341              	.LHOTE16:
 1342              		.section	.text.unlikely._Z13fl_show_alertPKcS0_S0_i,"ax",@progbits
 1343              	.LCOLDB17:
 1344              		.section	.text._Z13fl_show_alertPKcS0_S0_i,"ax",@progbits
 1345              	.LHOTB17:
 1346              		.p2align 4,,15
 1347              		.globl	_Z13fl_show_alertPKcS0_S0_i
 1349              	_Z13fl_show_alertPKcS0_S0_i:
 1350              	.LFB980:
 176:fltk-1.3.4-1/src/forms_compatability.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/forms_compatability.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/forms_compatability.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 1351              		.loc 2 178 0
 1352              		.cfi_startproc
 1353              	.LVL160:
 179:fltk-1.3.4-1/src/forms_compatability.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 1354              		.loc 2 179 0
 1355 0000 B8000000 		movl	$.LC14, %eax
 1355      00
 1356 0005 4885D2   		testq	%rdx, %rdx
 1357 0008 4889D1   		movq	%rdx, %rcx
 1358 000b 480F44C8 		cmove	%rax, %rcx
 1359 000f 4889F2   		movq	%rsi, %rdx
 1360              	.LVL161:
 1361 0012 4885F6   		testq	%rsi, %rsi
 1362 0015 480F44D0 		cmove	%rax, %rdx
 1363 0019 4885FF   		testq	%rdi, %rdi
 1364 001c 480F45C7 		cmovne	%rdi, %rax
 1365 0020 BF000000 		movl	$.LC15, %edi
 1365      00
 1366              	.LVL162:
 1367 0025 4889C6   		movq	%rax, %rsi
 1368              	.LVL163:
 1369 0028 31C0     		xorl	%eax, %eax
 1370 002a E9000000 		jmp	_Z8fl_alertPKcz
 1370      00
 1371              	.LVL164:
 1372              		.cfi_endproc
 1373              	.LFE980:
 1375              		.section	.text.unlikely._Z13fl_show_alertPKcS0_S0_i
 1376              	.LCOLDE17:
 1377              		.section	.text._Z13fl_show_alertPKcS0_S0_i
 1378              	.LHOTE17:
 1379              		.section	.rodata.str1.1
 1380              	.LC18:
 1381 000a 59657300 		.string	"Yes"
 1382              	.LC19:
 1383 000e 4E6F00   		.string	"No"
 1384              		.section	.text.unlikely._Z16fl_show_questionPKcS0_S0_,"ax",@progbits
 1385              	.LCOLDB20:
 1386              		.section	.text._Z16fl_show_questionPKcS0_S0_,"ax",@progbits
 1387              	.LHOTB20:
 1388              		.p2align 4,,15
 1389              		.globl	_Z16fl_show_questionPKcS0_S0_
 1391              	_Z16fl_show_questionPKcS0_S0_:
 1392              	.LFB981:
 180:fltk-1.3.4-1/src/forms_compatability.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/forms_compatability.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/forms_compatability.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1393              		.loc 2 182 0
 1394              		.cfi_startproc
 1395              	.LVL165:
 1396 0000 4883EC10 		subq	$16, %rsp
 1397              		.cfi_def_cfa_offset 24
 183:fltk-1.3.4-1/src/forms_compatability.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1398              		.loc 2 183 0
 1399 0004 41B80000 		movl	$.LC14, %r8d
 1399      0000
 1400 000a 4885D2   		testq	%rdx, %rdx
 1401 000d 490F44D0 		cmove	%r8, %rdx
 1402              	.LVL166:
 1403 0011 4885F6   		testq	%rsi, %rsi
 1404 0014 490F44F0 		cmove	%r8, %rsi
 1405              	.LVL167:
 1406 0018 52       		pushq	%rdx
 1407              		.cfi_def_cfa_offset 32
 1408 0019 4885FF   		testq	%rdi, %rdi
 1409 001c 4C0F45C7 		cmovne	%rdi, %r8
 1410 0020 4989F1   		movq	%rsi, %r9
 1411 0023 31C9     		xorl	%ecx, %ecx
 1412 0025 BA000000 		movl	$.LC18, %edx
 1412      00
 1413 002a BE000000 		movl	$.LC19, %esi
 1413      00
 1414 002f BF000000 		movl	$.LC15, %edi
 1414      00
 1415              	.LVL168:
 1416 0034 31C0     		xorl	%eax, %eax
 1417 0036 E8000000 		call	_Z9fl_choicePKcS0_S0_S0_z
 1417      00
 1418              	.LVL169:
 184:fltk-1.3.4-1/src/forms_compatability.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 1419              		.loc 2 184 0
 1420 003b 4883C418 		addq	$24, %rsp
 1421              		.cfi_def_cfa_offset 8
 1422 003f C3       		ret
 1423              		.cfi_endproc
 1424              	.LFE981:
 1426              		.section	.text.unlikely._Z16fl_show_questionPKcS0_S0_
 1427              	.LCOLDE20:
 1428              		.section	.text._Z16fl_show_questionPKcS0_S0_
 1429              	.LHOTE20:
 1430              		.section	.text.unlikely._Z14fl_show_choicePKcS0_S0_iS0_S0_S0_,"ax",@progbits
 1431              	.LCOLDB21:
 1432              		.section	.text._Z14fl_show_choicePKcS0_S0_iS0_S0_S0_,"ax",@progbits
 1433              	.LHOTB21:
 1434              		.p2align 4,,15
 1435              		.globl	_Z14fl_show_choicePKcS0_S0_iS0_S0_S0_
 1437              	_Z14fl_show_choicePKcS0_S0_iS0_S0_S0_:
 1438              	.LFB982:
 185:fltk-1.3.4-1/src/forms_compatability.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/forms_compatability.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/forms_compatability.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/forms_compatability.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/forms_compatability.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/forms_compatability.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/forms_compatability.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/forms_compatability.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/forms_compatability.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 1439              		.loc 2 193 0
 1440              		.cfi_startproc
 1441              	.LVL170:
 1442 0000 4883EC10 		subq	$16, %rsp
 1443              		.cfi_def_cfa_offset 24
 194:fltk-1.3.4-1/src/forms_compatability.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1444              		.loc 2 194 0
 1445 0004 B8000000 		movl	$.LC14, %eax
 1445      00
 1446 0009 4885D2   		testq	%rdx, %rdx
 1447 000c 4889D1   		movq	%rdx, %rcx
 1448 000f 4889F2   		movq	%rsi, %rdx
 1449              	.LVL171:
 1450 0012 FF742418 		pushq	24(%rsp)
 1451              		.cfi_def_cfa_offset 32
 1452 0016 480F44C8 		cmove	%rax, %rcx
 1453              	.LVL172:
 1454 001a 4885F6   		testq	%rsi, %rsi
 1455 001d 480F44D0 		cmove	%rax, %rdx
 1456 0021 4885FF   		testq	%rdi, %rdi
 1457 0024 480F45C7 		cmovne	%rdi, %rax
 1458 0028 BF000000 		movl	$.LC15, %edi
 1458      00
 1459              	.LVL173:
 1460 002d 4889C6   		movq	%rax, %rsi
 1461              	.LVL174:
 1462 0030 31C0     		xorl	%eax, %eax
 1463 0032 E8000000 		call	_Z9fl_choicePKcS0_S0_S0_z
 1463      00
 1464              	.LVL175:
 195:fltk-1.3.4-1/src/forms_compatability.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 1465              		.loc 2 195 0
 1466 0037 4883C418 		addq	$24, %rsp
 1467              		.cfi_def_cfa_offset 8
 194:fltk-1.3.4-1/src/forms_compatability.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1468              		.loc 2 194 0
 1469 003b 83C001   		addl	$1, %eax
 1470              		.loc 2 195 0
 1471 003e C3       		ret
 1472              		.cfi_endproc
 1473              	.LFE982:
 1475              		.section	.text.unlikely._Z14fl_show_choicePKcS0_S0_iS0_S0_S0_
 1476              	.LCOLDE21:
 1477              		.section	.text._Z14fl_show_choicePKcS0_S0_iS0_S0_S0_
 1478              	.LHOTE21:
 1479              		.section	.rodata.str1.1
 1480              	.LC22:
 1481 0011 257300   		.string	"%s"
 1482              		.section	.text.unlikely._Z20fl_show_simple_inputPKcS0_,"ax",@progbits
 1483              	.LCOLDB23:
 1484              		.section	.text._Z20fl_show_simple_inputPKcS0_,"ax",@progbits
 1485              	.LHOTB23:
 1486              		.p2align 4,,15
 1487              		.globl	_Z20fl_show_simple_inputPKcS0_
 1489              	_Z20fl_show_simple_inputPKcS0_:
 1490              	.LFB983:
 196:fltk-1.3.4-1/src/forms_compatability.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/forms_compatability.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1491              		.loc 2 197 0
 1492              		.cfi_startproc
 1493              	.LVL176:
 1494 0000 53       		pushq	%rbx
 1495              		.cfi_def_cfa_offset 16
 1496              		.cfi_offset 3, -16
 1497              		.loc 2 197 0
 1498 0001 4889FA   		movq	%rdi, %rdx
 198:fltk-1.3.4-1/src/forms_compatability.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 1499              		.loc 2 198 0
 1500 0004 31C0     		xorl	%eax, %eax
 1501 0006 BF000000 		movl	$.LC22, %edi
 1501      00
 1502              	.LVL177:
 197:fltk-1.3.4-1/src/forms_compatability.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 1503              		.loc 2 197 0
 1504 000b 4889F3   		movq	%rsi, %rbx
 1505              		.loc 2 198 0
 1506 000e E8000000 		call	_Z8fl_inputPKcS0_z
 1506      00
 1507              	.LVL178:
 199:fltk-1.3.4-1/src/forms_compatability.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1508              		.loc 2 199 0
 1509 0013 4885C0   		testq	%rax, %rax
 1510 0016 480F44C3 		cmove	%rbx, %rax
 1511              	.LVL179:
 200:fltk-1.3.4-1/src/forms_compatability.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 1512              		.loc 2 200 0
 1513 001a 5B       		popq	%rbx
 1514              		.cfi_def_cfa_offset 8
 1515              	.LVL180:
 1516 001b C3       		ret
 1517              		.cfi_endproc
 1518              	.LFE983:
 1520              		.section	.text.unlikely._Z20fl_show_simple_inputPKcS0_
 1521              	.LCOLDE23:
 1522              		.section	.text._Z20fl_show_simple_inputPKcS0_
 1523              	.LHOTE23:
 1524              		.weak	_ZTS12Fl_FormsText
 1525              		.section	.rodata._ZTS12Fl_FormsText,"aG",@progbits,_ZTS12Fl_FormsText,comdat
 1526              		.align 8
 1529              	_ZTS12Fl_FormsText:
 1530 0000 3132466C 		.string	"12Fl_FormsText"
 1530      5F466F72 
 1530      6D735465 
 1530      787400
 1531              		.weak	_ZTI12Fl_FormsText
 1532              		.section	.rodata._ZTI12Fl_FormsText,"aG",@progbits,_ZTI12Fl_FormsText,comdat
 1533              		.align 8
 1536              	_ZTI12Fl_FormsText:
 1537 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1537      00000000 
 1538 0008 00000000 		.quad	_ZTS12Fl_FormsText
 1538      00000000 
 1539 0010 00000000 		.quad	_ZTI9Fl_Widget
 1539      00000000 
 1540              		.weak	_ZTV12Fl_FormsText
 1541              		.section	.rodata._ZTV12Fl_FormsText,"aG",@progbits,_ZTV12Fl_FormsText,comdat
 1542              		.align 8
 1545              	_ZTV12Fl_FormsText:
 1546 0000 00000000 		.quad	0
 1546      00000000 
 1547 0008 00000000 		.quad	_ZTI12Fl_FormsText
 1547      00000000 
 1548 0010 00000000 		.quad	_ZN12Fl_FormsTextD1Ev
 1548      00000000 
 1549 0018 00000000 		.quad	_ZN12Fl_FormsTextD0Ev
 1549      00000000 
 1550 0020 00000000 		.quad	_ZN12Fl_FormsText4drawEv
 1550      00000000 
 1551 0028 00000000 		.quad	_ZN9Fl_Widget6handleEi
 1551      00000000 
 1552 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 1552      00000000 
 1553 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1553      00000000 
 1554 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1554      00000000 
 1555 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1555      00000000 
 1556 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1556      00000000 
 1557 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1557      00000000 
 1558              		.globl	fl_modal_next
 1559              		.section	.bss.fl_modal_next,"aw",@nobits
 1562              	fl_modal_next:
 1563 0000 00       		.zero	1
 1564              		.section	.bss._ZL8initargv,"aw",@nobits
 1565              		.align 8
 1568              	_ZL8initargv:
 1569 0000 00000000 		.zero	8
 1569      00000000 
 1570              		.section	.bss._ZL8initargc,"aw",@nobits
 1571              		.align 4
 1574              	_ZL8initargc:
 1575 0000 00000000 		.zero	4
 1576              		.globl	fl_flip
 1577              		.section	.data.fl_flip,"aw",@progbits
 1580              	fl_flip:
 1581 0000 02       		.byte	2
 1582              		.text
 1583              	.Letext0:
 1584              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 1585              	.Letext_cold0:
 1586              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 1587              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1588              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1589              		.file 9 "/usr/include/libio.h"
 1590              		.file 10 "fltk-1.3.4-1/FL/Enumerations.H"
 1591              		.file 11 "fltk-1.3.4-1/FL/Fl_Window.H"
 1592              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 1593              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 1594              		.file 14 "/usr/include/stdio.h"
 1595              		.file 15 "fltk-1.3.4-1/FL/fl_ask.H"
 1596              		.file 16 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 forms_compatability.cxx
     /tmp/ccs2JFty.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccs2JFty.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccs2JFty.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccs2JFty.s:89     .text._ZN12Fl_FormsText4drawEv:0000000000000000 _ZN12Fl_FormsText4drawEv
     /tmp/ccs2JFty.s:135    .text._ZN12Fl_FormsTextD2Ev:0000000000000000 _ZN12Fl_FormsTextD2Ev
     /tmp/ccs2JFty.s:1545   .rodata._ZTV12Fl_FormsText:0000000000000000 _ZTV12Fl_FormsText
     /tmp/ccs2JFty.s:135    .text._ZN12Fl_FormsTextD2Ev:0000000000000000 _ZN12Fl_FormsTextD1Ev
     /tmp/ccs2JFty.s:165    .text._ZN12Fl_FormsTextD0Ev:0000000000000000 _ZN12Fl_FormsTextD0Ev
     /tmp/ccs2JFty.s:204    .text._ZN8Fl_Group9forms_endEv:0000000000000000 _ZN8Fl_Group9forms_endEv
     /tmp/ccs2JFty.s:1580   .data.fl_flip:0000000000000000 fl_flip
     /tmp/ccs2JFty.s:447    .text._Z11fl_end_formv:0000000000000000 _Z11fl_end_formv
     /tmp/ccs2JFty.s:487    .text._Z13fl_initializePiPPcPKcPvi:0000000000000000 _Z13fl_initializePiPPcPKcPvi
     /tmp/ccs2JFty.s:1574   .bss._ZL8initargc:0000000000000000 _ZL8initargc
     /tmp/ccs2JFty.s:1568   .bss._ZL8initargv:0000000000000000 _ZL8initargv
     /tmp/ccs2JFty.s:639    .text._Z12fl_show_formP9Fl_WindowiiPKc:0000000000000000 _Z12fl_show_formP9Fl_WindowiiPKc
     /tmp/ccs2JFty.s:1562   .bss.fl_modal_next:0000000000000000 fl_modal_next
     /tmp/ccs2JFty.s:961    .text._Z11fl_do_formsv:0000000000000000 _Z11fl_do_formsv
     /tmp/ccs2JFty.s:1009   .text._Z14fl_check_formsv:0000000000000000 _Z14fl_check_formsv
     /tmp/ccs2JFty.s:1038   .text._Z20fl_set_graphics_modeii:0000000000000000 _Z20fl_set_graphics_modeii
     /tmp/ccs2JFty.s:1057   .text._Z13fl_add_buttonhiiiiPKc:0000000000000000 _Z13fl_add_buttonhiiiiPKc
     /tmp/ccs2JFty.s:1312   .text._Z15fl_show_messagePKcS0_S0_:0000000000000000 _Z15fl_show_messagePKcS0_S0_
     /tmp/ccs2JFty.s:1349   .text._Z13fl_show_alertPKcS0_S0_i:0000000000000000 _Z13fl_show_alertPKcS0_S0_i
     /tmp/ccs2JFty.s:1391   .text._Z16fl_show_questionPKcS0_S0_:0000000000000000 _Z16fl_show_questionPKcS0_S0_
     /tmp/ccs2JFty.s:1437   .text._Z14fl_show_choicePKcS0_S0_iS0_S0_S0_:0000000000000000 _Z14fl_show_choicePKcS0_S0_iS0_S0_S0_
     /tmp/ccs2JFty.s:1489   .text._Z20fl_show_simple_inputPKcS0_:0000000000000000 _Z20fl_show_simple_inputPKcS0_
     /tmp/ccs2JFty.s:1529   .rodata._ZTS12Fl_FormsText:0000000000000000 _ZTS12Fl_FormsText
     /tmp/ccs2JFty.s:1536   .rodata._ZTI12Fl_FormsText:0000000000000000 _ZTI12Fl_FormsText
                           .group:0000000000000000 _ZN12Fl_FormsTextD5Ev
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
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.forms.H.37.0a5619bad1e20004715f0c979570dbcd
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020
                           .group:0000000000000000 wm4.forms.H.468.7a3dd830d9cb260ea061bc3ecec7e7da
                           .group:0000000000000000 wm4.Fl_Chart.H.23.9948d0d826d8cb847bf9457a36afa706
                           .group:0000000000000000 wm4.forms.H.531.b06f2fb641ccb4cd22ee7a225d76d6e9
                           .group:0000000000000000 wm4.Fl_Clock.H.23.e3ae7949425565459dc3d3eb183e7ab0
                           .group:0000000000000000 wm4.Fl_Counter.H.25.d4b70c719890b359e5ab06759378848b
                           .group:0000000000000000 wm4.forms.H.590.9d97420594b13e6f9287bf768894adf1
                           .group:0000000000000000 wm4.Fl_Dial.H.23.d297b2159ab1037c95f5df5cb75a8b9d
                           .group:0000000000000000 wm4.forms.H.595.e84e14fd439187ef3af07d5b70a030cb
                           .group:0000000000000000 wm4.Fl_Free.H.23.194542b225ee5c22170aa38665aa0e7d
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.Fl_File_Icon.H.27.747e79318ac133fc614d668b272e17dc
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
                           .group:0000000000000000 wm4.forms.H.708.3f68e9fcfd40bf4feb08de24771fcf67
                           .group:0000000000000000 wm4.forms.H.742.39179266b19fd15149051ae8b3d5b94f
                           .group:0000000000000000 wm4.Fl_Timer.H.23.55722937de57a09650f9498be1cefd2c

UNDEFINED SYMBOLS
_ZNK9Fl_Widget8draw_boxEv
_ZNK9Fl_Widget10draw_labelEv
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZNK8Fl_Group5arrayEv
_ZN8Fl_Group3endEv
_ZNK9Fl_Widget6windowEv
_ZN8Fl_Group7currentEv
_Znam
_ZN2Fl3argEiPPcRi
__stack_chk_fail
_ZN9Fl_Window5labelEPKc
_ZN9Fl_Window4showEiPPc
_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
_ZN2Fl9get_mouseERiS0_
_ZN2Fl11screen_xywhERiS0_S0_S0_ii
_ZN9Fl_Window10fullscreenEv
_ZN2Fl1hEv
_ZN2Fl1wEv
_ZN2Fl4waitEv
_ZN2Fl9readqueueEv
exit
_ZN2Fl5checkEv
_Znwm
_ZN16Fl_Return_ButtonC1EiiiiPKc
_ZN9Fl_ButtonC1EiiiiPKc
_ZN16Fl_Repeat_ButtonC1EiiiiPKc
_Z10fl_messagePKcz
_Z8fl_alertPKcz
_Z9fl_choicePKcS0_S0_S0_z
_Z8fl_inputPKcS0_z
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Widget
_ZN9Fl_Widget6handleEi
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
