   1              		.file	"Fl_Group.cxx"
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
  80              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  81              		.align 2
  82              	.LCOLDB3:
  83              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  84              	.LHOTB3:
  85              		.align 2
  86              		.p2align 4,,15
  87              		.weak	_ZN8Fl_Group8as_groupEv
  89              	_ZN8Fl_Group8as_groupEv:
  90              	.LFB250:
  91              		.file 2 "fltk-1.3.4-1/FL/Fl_Group.H"
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
  92              		.loc 2 179 0
  93              		.cfi_startproc
  94              	.LVL3:
  95              		.loc 2 179 0
  96 0000 4889F8   		movq	%rdi, %rax
  97 0003 C3       		ret
  98              		.cfi_endproc
  99              	.LFE250:
 101              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
 102              	.LCOLDE3:
 103              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
 104              	.LHOTE3:
 105              		.section	.text.unlikely._ZL6navkeyv,"ax",@progbits
 106              	.LCOLDB4:
 107              		.section	.text._ZL6navkeyv,"ax",@progbits
 108              	.LHOTB4:
 109              		.p2align 4,,15
 111              	_ZL6navkeyv:
 112              	.LFB658:
 113              		.file 3 "fltk-1.3.4-1/src/Fl_Group.cxx"
   1:fltk-1.3.4-1/src/Fl_Group.cxx ****    1              		.file	"Fl_Group.cxx"
   2:fltk-1.3.4-1/src/Fl_Group.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Group.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Group.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Group.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Group.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Group.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Group.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Group.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Group.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Group.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Group.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Group.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Group.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Group.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Group.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Group.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Group.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Group.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Group.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Group.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Group.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Group.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Group.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Group.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Group.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Group.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Group.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Group.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Group.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Group.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Group.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Group.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Group.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Group.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Group.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Group.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Group.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Group.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Group.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Group.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Group.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Group.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Group.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Group.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Group.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Group.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Group.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Group.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Group.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Group.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Group.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Group.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Group.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Group.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Group.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Group.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Group.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Group.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Group.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Group.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Group.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Group.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Group.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Group.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Group.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Group.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Group.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Group.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Group.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Group.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Group.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Group.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Group.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Group.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Group.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Group.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Group.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Group.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Group.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Group.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Group.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Group.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Group.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Group.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Group.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Group.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Group.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Group.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Group.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Group.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Group.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Group.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Group.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Group.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Group.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Group.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Group.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Group.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Group.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Group.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Group.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Group.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Group.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Group.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Group.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Group.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Group.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Group.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Group.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Group.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Group.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Group.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Group.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Group.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Group.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Group.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Group.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Group.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Group.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Group.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 114              		.loc 3 125 0
 115              		.cfi_startproc
 116              	.LVL4:
 117              	.LBB865:
 118              	.LBB866:
 119              		.file 4 "fltk-1.3.4-1/FL/Fl.H"
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
 120              		.loc 4 709 0
 121 0000 8B150000 		movl	_ZN2Fl7e_stateE(%rip), %edx
 121      0000
 122              	.LBE866:
 123              	.LBE865:
 126:fltk-1.3.4-1/src/Fl_Group.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Group.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 124              		.loc 3 127 0
 125 0006 31C0     		xorl	%eax, %eax
 126 0008 F7C20000 		testl	$4980736, %edx
 126      4C00
 127 000e 751A     		jne	.L6
 128              	.LBB867:
 129              	.LBB868:
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
 130              		.loc 4 721 0
 131 0010 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 131      0000
 132              	.LBE868:
 133              	.LBE867:
 128:fltk-1.3.4-1/src/Fl_Group.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Group.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 134              		.loc 3 129 0
 135 0016 3D09FF00 		cmpl	$65289, %eax
 135      00
 136 001b 741B     		je	.L8
 137 001d 7C11     		jl	.L7
 138 001f 8D90AF00 		leal	-65361(%rax), %edx
 138      FFFF
 139 0025 83FA03   		cmpl	$3, %edx
 140 0028 7706     		ja	.L7
 141              	.L6:
 130:fltk-1.3.4-1/src/Fl_Group.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Group.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Group.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Group.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Group.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Group.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Group.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Group.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Group.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Group.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Group.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Group.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Group.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Group.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Group.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Group.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 142              		.loc 3 145 0
 143 002a F3C3     		rep ret
 144 002c 0F1F4000 		.p2align 4,,10
 145              		.p2align 3
 146              	.L7:
 144:fltk-1.3.4-1/src/Fl_Group.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 147              		.loc 3 144 0
 148 0030 31C0     		xorl	%eax, %eax
 149              		.loc 3 145 0
 150 0032 C3       		ret
 151              		.p2align 4,,10
 152 0033 0F1F4400 		.p2align 3
 152      00
 153              	.L8:
 133:fltk-1.3.4-1/src/Fl_Group.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 154              		.loc 3 133 0
 155 0038 81E20000 		andl	$65536, %edx
 155      0100
 134:fltk-1.3.4-1/src/Fl_Group.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 156              		.loc 3 134 0
 157 003e 83FA01   		cmpl	$1, %edx
 158 0041 19C0     		sbbl	%eax, %eax
 159 0043 83E002   		andl	$2, %eax
 160 0046 0551FF00 		addl	$65361, %eax
 160      00
 161 004b C3       		ret
 162              		.cfi_endproc
 163              	.LFE658:
 165              		.section	.text.unlikely._ZL6navkeyv
 166              	.LCOLDE4:
 167              		.section	.text._ZL6navkeyv
 168              	.LHOTE4:
 169              		.section	.text.unlikely._ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv,"axG",@progbits,_ZN15Fl_Input_Ch
 170              	.LCOLDB5:
 171              		.section	.text._ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv,"axG",@progbits,_ZN15Fl_Input_Choice6inp_
 172              	.LHOTB5:
 173              		.p2align 4,,15
 174              		.weak	_ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv
 176              	_ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv:
 177              	.LFB581:
 178              		.file 5 "fltk-1.3.4-1/FL/Fl_Input_Choice.H"
   1:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //
   2:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** // "$Id: Fl_Input_Choice.H 10513 2015-01-10 22:05:15Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //
   4:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** // An input/chooser widget.
   5:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //            ______________  ____
   6:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //           |              || __ |
   7:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //           | input area   || \/ |
   8:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //           |______________||____|
   9:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //
  10:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** // Copyright 1998-2010 by Bill Spitzak and others.
  11:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** // Copyright 2004 by Greg Ercolano.
  12:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //
  13:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** // This library is free software. Distribution and use rights are outlined in
  14:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** // the file "COPYING" which should have been included with this file.  If this
  15:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** // file is missing or damaged, see the license at:
  16:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //
  17:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //     http://www.fltk.org/COPYING.php
  18:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //
  19:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** // Please report all bugs and problems on the following page:
  20:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //
  21:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //     http://www.fltk.org/str.php
  22:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** //
  23:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  24:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** /* \file
  25:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    Fl_Input_Choice widget . */
  26:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  27:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** #ifndef Fl_Input_Choice_H
  28:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** #define Fl_Input_Choice_H
  29:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  30:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** #include <FL/Fl.H>
  31:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** #include <FL/Fl_Group.H>
  32:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** #include <FL/Fl_Input.H>
  33:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** #include <FL/Fl_Menu_Button.H>
  34:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** #include <FL/fl_draw.H>
  35:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** #include <string.h>
  36:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  37:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** /**
  38:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   A combination of the input widget and a menu button.
  39:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  40:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   \image html input_choice.jpg
  41:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   \image latex input_choice.jpg "Fl_Input_Choice widget" width=6cm
  42:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  43:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   The user can either type into the input area, or use the
  44:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   menu button chooser on the right to choose an item which loads
  45:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   the input area with the selected text.
  46:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  47:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   The application can directly access both the internal Fl_Input 
  48:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   and Fl_Menu_Button widgets respectively using the input() and menubutton()
  49:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   accessor methods.
  50:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  51:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   The default behavior is to invoke the Fl_Input_Choice::callback()
  52:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   if the user changes the input field's contents, either by typing,
  53:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   pasting, or clicking a different item in the choice menu.
  54:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   
  55:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   The callback can determine if an item was picked vs. typing
  56:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   into the input field by checking the value of menubutton()->changed(),
  57:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   which will be:
  58:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  59:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       - 1: the user picked a different item in the choice menu
  60:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       - 0: the user typed or pasted directly into the input field
  61:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
  62:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   Example use:
  63:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   \code
  64:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   #include <stdio.h>
  65:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   #include <FL/Fl.H>
  66:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   #include <FL/Fl_Double_Window.H>
  67:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   #include <FL/Fl_Input_Choice.H>
  68:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   void choice_cb(Fl_Widget *w, void *userdata) {
  69:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     // Show info about the picked item
  70:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Input_Choice *choice = (Fl_Input_Choice*)w;
  71:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     const Fl_Menu_Item *item = choice->menubutton()->mvalue();
  72:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     printf("*** Choice Callback:\n");
  73:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     printf("    item label()='%s'\n", item ? item->label() : "(No item)");
  74:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     printf("    item value()=%d\n", choice->menubutton()->value());
  75:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     printf("    input value()='%s'\n", choice->input()->value());
  76:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     printf("    The user %s\n", choice->menubutton()->changed()
  77:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****                                     ? "picked a menu item"
  78:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****                                     : "typed text");
  79:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
  80:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   int main() {
  81:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Double_Window win(200,100,"Input Choice");
  82:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     win.begin();
  83:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       Fl_Input_Choice choice(10,10,100,30);
  84:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       choice.callback(choice_cb, 0);
  85:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       choice.add("Red");
  86:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       choice.add("Orange");
  87:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       choice.add("Yellow");
  88:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       //choice.value("Red");    // uncomment to make "Red" default
  89:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     win.end();
  90:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     win.show();
  91:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     return Fl::run();
  92:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
  93:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   \endcode
  94:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** */
  95:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** class FL_EXPORT Fl_Input_Choice : public Fl_Group {
  96:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // Private class to handle slightly 'special' behavior of menu button
  97:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   class InputMenuButton : public Fl_Menu_Button {
  98:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     void draw() {
  99:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       draw_box(FL_UP_BOX, color());
 100:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       fl_color(active_r() ? labelcolor() : fl_inactive(labelcolor()));
 101:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       int xc = x()+w()/2, yc=y()+h()/2;
 102:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       fl_polygon(xc-5,yc-3,xc+5,yc-3,xc,yc+3);
 103:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       if (Fl::focus() == this) draw_focus();
 104:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     }
 105:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   public:
 106:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     InputMenuButton(int X,int Y,int W,int H,const char*L=0) : 
 107:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 	Fl_Menu_Button(X, Y, W, H, L) { box(FL_UP_BOX); }
 108:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   };
 109:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 110:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   Fl_Input *inp_;
 111:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   InputMenuButton *menu_;
 112:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 113:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // note: this is used by the Fl_Input_Choice ctor defined in Fl_Group.
 114:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   static void menu_cb(Fl_Widget*, void *data) { 
 115:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Input_Choice *o=(Fl_Input_Choice *)data;
 116:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Widget_Tracker wp(o);
 117:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     const Fl_Menu_Item *item = o->menubutton()->mvalue();
 118:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (item && item->flags & (FL_SUBMENU|FL_SUBMENU_POINTER)) return;	// ignore submenus
 119:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (!strcmp(o->inp_->value(), o->menu_->text()))
 120:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     {
 121:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->Fl_Widget::clear_changed();
 122:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       if (o->when() & FL_WHEN_NOT_CHANGED)
 123:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 	o->do_callback();
 124:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     }
 125:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     else
 126:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     {
 127:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->inp_->value(o->menu_->text());
 128:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->inp_->set_changed();
 129:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->Fl_Widget::set_changed();
 130:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       if (o->when() & (FL_WHEN_CHANGED|FL_WHEN_RELEASE))
 131:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 	o->do_callback();
 132:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     }
 133:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     
 134:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (wp.deleted()) return;
 135:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 136:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (o->callback() != default_callback)
 137:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     {
 138:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->Fl_Widget::clear_changed();
 139:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->inp_->clear_changed();
 140:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     }
 141:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
 142:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 143:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // note: this is used by the Fl_Input_Choice ctor defined in Fl_Group.
 144:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   static void inp_cb(Fl_Widget*, void *data) { 
 179              		.loc 5 144 0
 180              		.cfi_startproc
 181              	.LVL5:
 182 0000 53       		pushq	%rbx
 183              		.cfi_def_cfa_offset 16
 184              		.cfi_offset 3, -16
 185 0001 4889F3   		movq	%rsi, %rbx
 186 0004 4883EC10 		subq	$16, %rsp
 187              		.cfi_def_cfa_offset 32
 145:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Input_Choice *o=(Fl_Input_Choice *)data;
 146:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Widget_Tracker wp(o);
 188              		.loc 5 146 0
 189 0008 4889E7   		movq	%rsp, %rdi
 144:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Input_Choice *o=(Fl_Input_Choice *)data;
 190              		.loc 5 144 0
 191 000b 64488B04 		movq	%fs:40, %rax
 191      25280000 
 191      00
 192 0014 48894424 		movq	%rax, 8(%rsp)
 192      08
 193 0019 31C0     		xorl	%eax, %eax
 194              	.LVL6:
 195              		.loc 5 146 0
 196 001b E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 196      00
 197              	.LVL7:
 198 0020 488B83A0 		movq	160(%rbx), %rax
 198      000000
 147:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (o->inp_->changed()) {
 199              		.loc 5 147 0
 200 0027 F6406080 		testb	$-128, 96(%rax)
 201 002b 7443     		je	.L13
 202              	.LVL8:
 203              	.LBB869:
 204              	.LBB870:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 205              		.loc 1 786 0
 206 002d 814B6080 		orl	$128, 96(%rbx)
 206      000000
 207              	.LVL9:
 208              	.LBE870:
 209              	.LBE869:
 148:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->Fl_Widget::set_changed();
 149:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       if (o->when() & (FL_WHEN_CHANGED|FL_WHEN_RELEASE))
 210              		.loc 5 149 0
 211 0034 F6436F05 		testb	$5, 111(%rbx)
 212 0038 7543     		jne	.L25
 213              	.LVL10:
 214              	.L15:
 150:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 	o->do_callback();
 151:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     } else {
 152:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->Fl_Widget::clear_changed();
 153:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       if (o->when() & FL_WHEN_NOT_CHANGED)
 154:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 	o->do_callback();
 155:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     }
 156:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     
 157:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (wp.deleted()) return;
 215              		.loc 5 157 0
 216 003a 48833C24 		cmpq	$0, (%rsp)
 216      00
 217 003f 7411     		je	.L17
 218              	.LVL11:
 158:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 159:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (o->callback() != default_callback)
 219              		.loc 5 159 0
 220 0041 48817B10 		cmpq	$_ZN9Fl_Widget16default_callbackEPS_Pv, 16(%rbx)
 220      00000000 
 221 0049 7407     		je	.L17
 222              	.LVL12:
 223              	.LBB871:
 224              	.LBB872:
 791:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225              		.loc 1 791 0
 226 004b 8163607F 		andl	$-129, 96(%rbx)
 226      FFFFFF
 227              	.LVL13:
 228              	.L17:
 229              	.LBE872:
 230              	.LBE871:
 157:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 231              		.loc 5 157 0
 232 0052 4889E7   		movq	%rsp, %rdi
 233 0055 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 233      00
 234              	.LVL14:
 160:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->Fl_Widget::clear_changed();
 161:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
 235              		.loc 5 161 0
 236 005a 488B4424 		movq	8(%rsp), %rax
 236      08
 237 005f 64483304 		xorq	%fs:40, %rax
 237      25280000 
 237      00
 238 0068 7524     		jne	.L26
 239 006a 4883C410 		addq	$16, %rsp
 240              		.cfi_remember_state
 241              		.cfi_def_cfa_offset 16
 242 006e 5B       		popq	%rbx
 243              		.cfi_def_cfa_offset 8
 244              	.LVL15:
 245 006f C3       		ret
 246              	.LVL16:
 247              		.p2align 4,,10
 248              		.p2align 3
 249              	.L13:
 250              		.cfi_restore_state
 251              	.LBB873:
 252              	.LBB874:
 791:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 253              		.loc 1 791 0
 254 0070 8163607F 		andl	$-129, 96(%rbx)
 254      FFFFFF
 255              	.LVL17:
 256              	.LBE874:
 257              	.LBE873:
 153:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 	o->do_callback();
 258              		.loc 5 153 0
 259 0077 F6436F02 		testb	$2, 111(%rbx)
 260 007b 74BD     		je	.L15
 261              	.LVL18:
 262              	.L25:
 263              	.LBB875:
 264              	.LBB876:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 265              		.loc 1 861 0
 266 007d 488B5318 		movq	24(%rbx), %rdx
 267 0081 4889DE   		movq	%rbx, %rsi
 268 0084 4889DF   		movq	%rbx, %rdi
 269 0087 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 269      00
 270              	.LVL19:
 271 008c EBAC     		jmp	.L15
 272              	.LVL20:
 273              	.L26:
 274              	.LBE876:
 275              	.LBE875:
 276              		.loc 5 161 0
 277 008e E8000000 		call	__stack_chk_fail
 277      00
 278              	.LVL21:
 279              		.cfi_endproc
 280              	.LFE581:
 282              		.section	.text.unlikely._ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv,"axG",@progbits,_ZN15Fl_Input_Ch
 283              	.LCOLDE5:
 284              		.section	.text._ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv,"axG",@progbits,_ZN15Fl_Input_Choice6inp_
 285              	.LHOTE5:
 286              		.section	.text.unlikely._ZN15Fl_Input_Choice15InputMenuButton4drawEv,"axG",@progbits,_ZN15Fl_Input
 287              		.align 2
 288              	.LCOLDB6:
 289              		.section	.text._ZN15Fl_Input_Choice15InputMenuButton4drawEv,"axG",@progbits,_ZN15Fl_Input_Choice15
 290              	.LHOTB6:
 291              		.align 2
 292              		.p2align 4,,15
 293              		.weak	_ZN15Fl_Input_Choice15InputMenuButton4drawEv
 295              	_ZN15Fl_Input_Choice15InputMenuButton4drawEv:
 296              	.LFB572:
  98:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       draw_box(FL_UP_BOX, color());
 297              		.loc 5 98 0
 298              		.cfi_startproc
 299              	.LVL22:
 300 0000 53       		pushq	%rbx
 301              		.cfi_def_cfa_offset 16
 302              		.cfi_offset 3, -16
  99:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       fl_color(active_r() ? labelcolor() : fl_inactive(labelcolor()));
 303              		.loc 5 99 0
 304 0001 8B5764   		movl	100(%rdi), %edx
  98:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       draw_box(FL_UP_BOX, color());
 305              		.loc 5 98 0
 306 0004 4889FB   		movq	%rdi, %rbx
  99:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       fl_color(active_r() ? labelcolor() : fl_inactive(labelcolor()));
 307              		.loc 5 99 0
 308 0007 BE020000 		movl	$2, %esi
 308      00
 309 000c E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
 309      00
 310              	.LVL23:
 100:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       int xc = x()+w()/2, yc=y()+h()/2;
 311              		.loc 5 100 0
 312 0011 4889DF   		movq	%rbx, %rdi
 313 0014 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 313      00
 314              	.LVL24:
 315 0019 85C0     		testl	%eax, %eax
 316 001b 7473     		je	.L28
 317 001d 8B7350   		movl	80(%rbx), %esi
 318              	.LVL25:
 319              	.L29:
 320              	.LBB887:
 321              	.LBB888:
 322              		.file 6 "fltk-1.3.4-1/FL/fl_draw.H"
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
 323              		.loc 6 52 0 discriminator 4
 324 0020 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 324      000000
 325 0027 488B17   		movq	(%rdi), %rdx
 326 002a FF928800 		call	*136(%rdx)
 326      0000
 327              	.LVL26:
 328              	.LBE888:
 329              	.LBE887:
 101:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       fl_polygon(xc-5,yc-3,xc+5,yc-3,xc,yc+3);
 330              		.loc 5 101 0 discriminator 4
 331 0030 8B4328   		movl	40(%rbx), %eax
 332              	.LBB889:
 333              	.LBB890:
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
 334              		.loc 6 244 0 discriminator 4
 335 0033 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 335      000000
 336 003a 4883EC08 		subq	$8, %rsp
 337              		.cfi_def_cfa_offset 24
 338              	.LBE890:
 339              	.LBE889:
 101:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       fl_polygon(xc-5,yc-3,xc+5,yc-3,xc,yc+3);
 340              		.loc 5 101 0 discriminator 4
 341 003e 4189C1   		movl	%eax, %r9d
 342              	.LBB894:
 343              	.LBB891:
 344              		.loc 6 244 0 discriminator 4
 345 0041 4C8B17   		movq	(%rdi), %r10
 346              	.LBE891:
 347              	.LBE894:
 101:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       fl_polygon(xc-5,yc-3,xc+5,yc-3,xc,yc+3);
 348              		.loc 5 101 0 discriminator 4
 349 0044 41C1E91F 		shrl	$31, %r9d
 350 0048 4101C1   		addl	%eax, %r9d
 351 004b 4489C8   		movl	%r9d, %eax
 352 004e D1F8     		sarl	%eax
 353 0050 034320   		addl	32(%rbx), %eax
 354 0053 4189C1   		movl	%eax, %r9d
 355              	.LVL27:
 356 0056 8B432C   		movl	44(%rbx), %eax
 357              	.LVL28:
 358              	.LBB895:
 359              	.LBB892:
 360              		.loc 6 244 0 discriminator 4
 361 0059 418D4905 		leal	5(%r9), %ecx
 362 005d 418D71FB 		leal	-5(%r9), %esi
 363              	.LBE892:
 364              	.LBE895:
 101:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       fl_polygon(xc-5,yc-3,xc+5,yc-3,xc,yc+3);
 365              		.loc 5 101 0 discriminator 4
 366 0061 89C2     		movl	%eax, %edx
 367 0063 C1EA1F   		shrl	$31, %edx
 368 0066 01D0     		addl	%edx, %eax
 369 0068 D1F8     		sarl	%eax
 370 006a 034324   		addl	36(%rbx), %eax
 371              	.LVL29:
 102:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       if (Fl::focus() == this) draw_focus();
 372              		.loc 5 102 0 discriminator 4
 373 006d 8D50FD   		leal	-3(%rax), %edx
 374              	.LVL30:
 375              	.LBB896:
 376              	.LBB893:
 377              		.loc 6 244 0 discriminator 4
 378 0070 83C003   		addl	$3, %eax
 379              	.LVL31:
 380 0073 50       		pushq	%rax
 381              		.cfi_def_cfa_offset 32
 382 0074 4189D0   		movl	%edx, %r8d
 383 0077 41FF92B0 		call	*176(%r10)
 383      000000
 384              	.LVL32:
 385              	.LBE893:
 386              	.LBE896:
 103:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     }
 387              		.loc 5 103 0 discriminator 4
 388 007e 483B1D00 		cmpq	_ZN2Fl6focus_E(%rip), %rbx
 388      000000
 389 0085 58       		popq	%rax
 390              		.cfi_def_cfa_offset 24
 391 0086 5A       		popq	%rdx
 392              		.cfi_def_cfa_offset 16
 393 0087 7417     		je	.L32
 104:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   public:
 394              		.loc 5 104 0
 395 0089 5B       		popq	%rbx
 396              		.cfi_remember_state
 397              		.cfi_def_cfa_offset 8
 398              	.LVL33:
 399 008a C3       		ret
 400              	.LVL34:
 401 008b 0F1F4400 		.p2align 4,,10
 401      00
 402              		.p2align 3
 403              	.L28:
 404              		.cfi_restore_state
 100:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       int xc = x()+w()/2, yc=y()+h()/2;
 405              		.loc 5 100 0 discriminator 2
 406 0090 8B7B50   		movl	80(%rbx), %edi
 407 0093 E8000000 		call	_Z11fl_inactivej
 407      00
 408              	.LVL35:
 409 0098 89C6     		movl	%eax, %esi
 410 009a EB84     		jmp	.L29
 411              	.LVL36:
 412 009c 0F1F4000 		.p2align 4,,10
 413              		.p2align 3
 414              	.L32:
 415              	.LBB897:
 416              	.LBB898:
 186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) const;
 417              		.loc 1 186 0
 418 00a0 8B4B24   		movl	36(%rbx), %ecx
 419 00a3 8B5320   		movl	32(%rbx), %edx
 420 00a6 4889DF   		movq	%rbx, %rdi
 421 00a9 0FB6736E 		movzbl	110(%rbx), %esi
 422 00ad 448B4B2C 		movl	44(%rbx), %r9d
 423 00b1 448B4328 		movl	40(%rbx), %r8d
 424              	.LBE898:
 425              	.LBE897:
 104:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   public:
 426              		.loc 5 104 0
 427 00b5 5B       		popq	%rbx
 428              		.cfi_def_cfa_offset 8
 429              	.LVL37:
 430              	.LBB900:
 431              	.LBB899:
 186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) const;
 432              		.loc 1 186 0
 433 00b6 E9000000 		jmp	_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
 433      00
 434              	.LVL38:
 435              	.LBE899:
 436              	.LBE900:
 437              		.cfi_endproc
 438              	.LFE572:
 440              		.section	.text.unlikely._ZN15Fl_Input_Choice15InputMenuButton4drawEv,"axG",@progbits,_ZN15Fl_Input
 441              	.LCOLDE6:
 442              		.section	.text._ZN15Fl_Input_Choice15InputMenuButton4drawEv,"axG",@progbits,_ZN15Fl_Input_Choice15
 443              	.LHOTE6:
 444              		.section	.text.unlikely._ZN15Fl_Input_Choice15InputMenuButtonD2Ev,"axG",@progbits,_ZN15Fl_Input_Ch
 445              		.align 2
 446              	.LCOLDB7:
 447              		.section	.text._ZN15Fl_Input_Choice15InputMenuButtonD2Ev,"axG",@progbits,_ZN15Fl_Input_Choice15Inp
 448              	.LHOTB7:
 449              		.align 2
 450              		.p2align 4,,15
 451              		.weak	_ZN15Fl_Input_Choice15InputMenuButtonD2Ev
 453              	_ZN15Fl_Input_Choice15InputMenuButtonD2Ev:
 454              	.LFB696:
  97:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     void draw() {
 455              		.loc 5 97 0
 456              		.cfi_startproc
 457              	.LVL39:
 458              	.LBB901:
 459              	.LBB902:
 460              		.file 7 "fltk-1.3.4-1/FL/Fl_Menu_Button.H"
   1:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //
   2:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** // "$Id: Fl_Menu_Button.H 10513 2015-01-10 22:05:15Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //
   4:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** // Menu button header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //
   6:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //
   8:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //
  12:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //
  14:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //
  16:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** //
  18:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** 
  19:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****    Fl_Menu_Button widget . */
  21:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** 
  22:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** #ifndef Fl_Menu_Button_H
  23:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** #define Fl_Menu_Button_H
  24:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** 
  25:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** #include "Fl_Menu_.H"
  26:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** 
  27:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   This is a button that when pushed pops up a menu (or hierarchy of
  29:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   menus) defined by an array of 
  30:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   Fl_Menu_Item objects.
  31:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   <P ALIGN=CENTER>\image html  menu_button.png</P>
  32:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   \image latex  menu_button.png " menu_button" width=5cm
  33:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   <P>Normally any mouse button will pop up a menu and it is lined up
  34:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   below the button as shown in the picture.  However an Fl_Menu_Button
  35:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   may also control a pop-up menu.  This is done by setting the type().
  36:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   If type() is zero a normal menu button is produced. 
  37:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   If it is nonzero then this is a pop-up menu. The bits in type() indicate 
  38:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   what mouse buttons pop up the menu (see Fl_Menu_Button::popup_buttons). </P>
  39:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   <P>The menu will also pop up in response to shortcuts indicated by
  40:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   putting a '&' character in the label(). </P>
  41:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   <P>Typing the shortcut() of any of the menu items will cause
  42:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   callbacks exactly the same as when you pick the item with the mouse.
  43:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   The '&' character in menu item names are only looked at when the menu is
  44:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   popped up, however. </P>
  45:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** 
  46:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   When the user clicks a menu item, value() is set to that item
  47:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****   and then:
  48:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** 
  49:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****       - The item's callback is done if one has been set; the
  50:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****         Fl_Menu_Button is passed as the Fl_Widget* argument, 
  51:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****         along with any userdata configured for the callback.
  52:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** 
  53:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****       - If the item does not have a callback, the Fl_Menu_Button's callback
  54:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****         is done instead, along with any userdata configured for it.
  55:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****         The callback can determine which item was picked using
  56:fltk-1.3.4-1/FL/Fl_Menu_Button.H ****         value(), mvalue(), item_pathname(), etc.
  57:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** */
  58:fltk-1.3.4-1/FL/Fl_Menu_Button.H **** class FL_EXPORT Fl_Menu_Button : public Fl_Menu_ {
 461              		.loc 7 58 0
 462 0000 48C70700 		movq	$_ZTV14Fl_Menu_Button+16, (%rdi)
 462      000000
 463 0007 E9000000 		jmp	_ZN8Fl_Menu_D2Ev
 463      00
 464              	.LVL40:
 465              	.LBE902:
 466              	.LBE901:
 467              		.cfi_endproc
 468              	.LFE696:
 470              		.section	.text.unlikely._ZN15Fl_Input_Choice15InputMenuButtonD2Ev,"axG",@progbits,_ZN15Fl_Input_Ch
 471              	.LCOLDE7:
 472              		.section	.text._ZN15Fl_Input_Choice15InputMenuButtonD2Ev,"axG",@progbits,_ZN15Fl_Input_Choice15Inp
 473              	.LHOTE7:
 474              		.weak	_ZN15Fl_Input_Choice15InputMenuButtonD1Ev
 475              		.set	_ZN15Fl_Input_Choice15InputMenuButtonD1Ev,_ZN15Fl_Input_Choice15InputMenuButtonD2Ev
 476              		.section	.text.unlikely._ZN15Fl_Input_Choice15InputMenuButtonD0Ev,"axG",@progbits,_ZN15Fl_Input_Ch
 477              		.align 2
 478              	.LCOLDB8:
 479              		.section	.text._ZN15Fl_Input_Choice15InputMenuButtonD0Ev,"axG",@progbits,_ZN15Fl_Input_Choice15Inp
 480              	.LHOTB8:
 481              		.align 2
 482              		.p2align 4,,15
 483              		.weak	_ZN15Fl_Input_Choice15InputMenuButtonD0Ev
 485              	_ZN15Fl_Input_Choice15InputMenuButtonD0Ev:
 486              	.LFB698:
  97:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     void draw() {
 487              		.loc 5 97 0
 488              		.cfi_startproc
 489              	.LVL41:
 490 0000 53       		pushq	%rbx
 491              		.cfi_def_cfa_offset 16
 492              		.cfi_offset 3, -16
  97:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     void draw() {
 493              		.loc 5 97 0
 494 0001 4889FB   		movq	%rdi, %rbx
 495              	.LBB903:
 496              	.LBB904:
 497              	.LBB905:
 498              		.loc 7 58 0
 499 0004 48C70700 		movq	$_ZTV14Fl_Menu_Button+16, (%rdi)
 499      000000
 500 000b E8000000 		call	_ZN8Fl_Menu_D2Ev
 500      00
 501              	.LVL42:
 502              	.LBE905:
 503              	.LBE904:
 504              	.LBE903:
  97:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     void draw() {
 505              		.loc 5 97 0
 506 0010 4889DF   		movq	%rbx, %rdi
 507 0013 5B       		popq	%rbx
 508              		.cfi_def_cfa_offset 8
 509              	.LVL43:
 510 0014 E9000000 		jmp	_ZdlPv
 510      00
 511              	.LVL44:
 512              		.cfi_endproc
 513              	.LFE698:
 515              		.section	.text.unlikely._ZN15Fl_Input_Choice15InputMenuButtonD0Ev,"axG",@progbits,_ZN15Fl_Input_Ch
 516              	.LCOLDE8:
 517              		.section	.text._ZN15Fl_Input_Choice15InputMenuButtonD0Ev,"axG",@progbits,_ZN15Fl_Input_Choice15Inp
 518              	.LHOTE8:
 519              		.section	.text.unlikely._ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv,"axG",@progbits,_ZN15Fl_Input_C
 520              	.LCOLDB9:
 521              		.section	.text._ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv,"axG",@progbits,_ZN15Fl_Input_Choice7men
 522              	.LHOTB9:
 523              		.p2align 4,,15
 524              		.weak	_ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv
 526              	_ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv:
 527              	.LFB580:
 114:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Input_Choice *o=(Fl_Input_Choice *)data;
 528              		.loc 5 114 0
 529              		.cfi_startproc
 530              	.LVL45:
 531 0000 4154     		pushq	%r12
 532              		.cfi_def_cfa_offset 16
 533              		.cfi_offset 12, -16
 534 0002 55       		pushq	%rbp
 535              		.cfi_def_cfa_offset 24
 536              		.cfi_offset 6, -24
 537 0003 53       		pushq	%rbx
 538              		.cfi_def_cfa_offset 32
 539              		.cfi_offset 3, -32
 540 0004 4889F3   		movq	%rsi, %rbx
 541 0007 4883EC10 		subq	$16, %rsp
 542              		.cfi_def_cfa_offset 48
 116:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     const Fl_Menu_Item *item = o->menubutton()->mvalue();
 543              		.loc 5 116 0
 544 000b 4889E7   		movq	%rsp, %rdi
 114:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Input_Choice *o=(Fl_Input_Choice *)data;
 545              		.loc 5 114 0
 546 000e 64488B04 		movq	%fs:40, %rax
 546      25280000 
 546      00
 547 0017 48894424 		movq	%rax, 8(%rsp)
 547      08
 548 001c 31C0     		xorl	%eax, %eax
 549              	.LVL46:
 116:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     const Fl_Menu_Item *item = o->menubutton()->mvalue();
 550              		.loc 5 116 0
 551 001e E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 551      00
 552              	.LVL47:
 553 0023 488B83A8 		movq	168(%rbx), %rax
 553      000000
 554 002a 488B8080 		movq	128(%rax), %rax
 554      000000
 555              	.LVL48:
 118:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (!strcmp(o->inp_->value(), o->menu_->text()))
 556              		.loc 5 118 0
 557 0031 4885C0   		testq	%rax, %rax
 558 0034 0F849600 		je	.L37
 558      0000
 118:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (!strcmp(o->inp_->value(), o->menu_->text()))
 559              		.loc 5 118 0 is_stmt 0 discriminator 1
 560 003a F6402060 		testb	$96, 32(%rax)
 561 003e 756A     		jne	.L38
 562              	.LVL49:
 119:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     {
 563              		.loc 5 119 0 is_stmt 1
 564 0040 488BABA0 		movq	160(%rbx), %rbp
 564      000000
 565              	.LVL50:
 566              	.LBB906:
 567              	.LBB907:
 568              		.file 8 "fltk-1.3.4-1/FL/Fl_Menu_.H"
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
 569              		.loc 8 150 0
 570 0047 4C8B20   		movq	(%rax), %r12
 571              	.LBE907:
 572              	.LBE906:
 119:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     {
 573              		.loc 5 119 0
 574 004a 488B7D78 		movq	120(%rbp), %rdi
 575 004e 4C89E6   		movq	%r12, %rsi
 576 0051 E8000000 		call	strcmp
 576      00
 577              	.LVL51:
 578 0056 85C0     		testl	%eax, %eax
 579 0058 0F848F00 		je	.L45
 579      0000
 580              	.L39:
 127:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->inp_->set_changed();
 581              		.loc 5 127 0
 582 005e 4C89E6   		movq	%r12, %rsi
 583 0061 4889EF   		movq	%rbp, %rdi
 584 0064 E8000000 		call	_ZN9Fl_Input_5valueEPKc
 584      00
 585              	.LVL52:
 128:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****       o->Fl_Widget::set_changed();
 586              		.loc 5 128 0
 587 0069 488B83A0 		movq	160(%rbx), %rax
 587      000000
 588              	.LVL53:
 589              	.LBB908:
 590              	.LBB909:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 591              		.loc 1 786 0
 592 0070 81486080 		orl	$128, 96(%rax)
 592      000000
 593              	.LVL54:
 594              	.LBE909:
 595              	.LBE908:
 596              	.LBB910:
 597              	.LBB911:
 598 0077 814B6080 		orl	$128, 96(%rbx)
 598      000000
 599              	.LVL55:
 600              	.LBE911:
 601              	.LBE910:
 130:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 	o->do_callback();
 602              		.loc 5 130 0
 603 007e F6436F05 		testb	$5, 111(%rbx)
 604 0082 7576     		jne	.L54
 605              	.LVL56:
 606              	.L41:
 134:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 607              		.loc 5 134 0
 608 0084 48833C24 		cmpq	$0, (%rsp)
 608      00
 609 0089 741F     		je	.L38
 610              	.LVL57:
 136:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     {
 611              		.loc 5 136 0
 612 008b 48817B10 		cmpq	$_ZN9Fl_Widget16default_callbackEPS_Pv, 16(%rbx)
 612      00000000 
 613 0093 7415     		je	.L38
 614              	.LVL58:
 139:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     }
 615              		.loc 5 139 0
 616 0095 488B83A0 		movq	160(%rbx), %rax
 616      000000
 617              	.LVL59:
 618              	.LBB912:
 619              	.LBB913:
 791:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 620              		.loc 1 791 0
 621 009c 8163607F 		andl	$-129, 96(%rbx)
 621      FFFFFF
 622              	.LBE913:
 623              	.LBE912:
 624              	.LBB914:
 625              	.LBB915:
 626 00a3 8160607F 		andl	$-129, 96(%rax)
 626      FFFFFF
 627              	.LVL60:
 628              	.L38:
 629              	.LBE915:
 630              	.LBE914:
 118:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     if (!strcmp(o->inp_->value(), o->menu_->text()))
 631              		.loc 5 118 0
 632 00aa 4889E7   		movq	%rsp, %rdi
 633 00ad E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 633      00
 634              	.LVL61:
 141:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 635              		.loc 5 141 0
 636 00b2 488B4424 		movq	8(%rsp), %rax
 636      08
 637 00b7 64483304 		xorq	%fs:40, %rax
 637      25280000 
 637      00
 638 00c0 754C     		jne	.L56
 639 00c2 4883C410 		addq	$16, %rsp
 640              		.cfi_remember_state
 641              		.cfi_def_cfa_offset 32
 642 00c6 5B       		popq	%rbx
 643              		.cfi_def_cfa_offset 24
 644              	.LVL62:
 645 00c7 5D       		popq	%rbp
 646              		.cfi_def_cfa_offset 16
 647 00c8 415C     		popq	%r12
 648              		.cfi_def_cfa_offset 8
 649 00ca C3       		ret
 650              	.LVL63:
 651 00cb 0F1F4400 		.p2align 4,,10
 651      00
 652              		.p2align 3
 653              	.L37:
 654              		.cfi_restore_state
 119:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     {
 655              		.loc 5 119 0
 656 00d0 488BABA0 		movq	160(%rbx), %rbp
 656      000000
 657              	.LVL64:
 658 00d7 31F6     		xorl	%esi, %esi
 659              	.LBB916:
 660              	.LBB917:
 661              		.loc 8 150 0
 662 00d9 4531E4   		xorl	%r12d, %r12d
 663              	.LBE917:
 664              	.LBE916:
 119:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     {
 665              		.loc 5 119 0
 666 00dc 488B7D78 		movq	120(%rbp), %rdi
 667 00e0 E8000000 		call	strcmp
 667      00
 668              	.LVL65:
 669 00e5 85C0     		testl	%eax, %eax
 670 00e7 0F8571FF 		jne	.L39
 670      FFFF
 671              	.L45:
 672              	.LVL66:
 673              	.LBB918:
 674              	.LBB919:
 791:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 675              		.loc 1 791 0
 676 00ed 8163607F 		andl	$-129, 96(%rbx)
 676      FFFFFF
 677              	.LVL67:
 678              	.LBE919:
 679              	.LBE918:
 122:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 	o->do_callback();
 680              		.loc 5 122 0
 681 00f4 F6436F02 		testb	$2, 111(%rbx)
 682 00f8 748A     		je	.L41
 683              	.LVL68:
 684              	.L54:
 685              	.LBB920:
 686              	.LBB921:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687              		.loc 1 861 0
 688 00fa 488B5318 		movq	24(%rbx), %rdx
 689 00fe 4889DE   		movq	%rbx, %rsi
 690 0101 4889DF   		movq	%rbx, %rdi
 691 0104 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 691      00
 692              	.LVL69:
 693 0109 E976FFFF 		jmp	.L41
 693      FF
 694              	.LVL70:
 695              	.L56:
 696              	.LBE921:
 697              	.LBE920:
 141:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 698              		.loc 5 141 0
 699 010e E8000000 		call	__stack_chk_fail
 699      00
 700              	.LVL71:
 701              		.cfi_endproc
 702              	.LFE580:
 704              		.section	.text.unlikely._ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv,"axG",@progbits,_ZN15Fl_Input_C
 705              	.LCOLDE9:
 706              		.section	.text._ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv,"axG",@progbits,_ZN15Fl_Input_Choice7men
 707              	.LHOTE9:
 708              		.section	.text.unlikely._ZL4sendP9Fl_Widgeti.constprop.35,"ax",@progbits
 709              	.LCOLDB10:
 710              		.section	.text._ZL4sendP9Fl_Widgeti.constprop.35,"ax",@progbits
 711              	.LHOTB10:
 712              		.p2align 4,,15
 714              	_ZL4sendP9Fl_Widgeti.constprop.35:
 715              	.LFB753:
  97:fltk-1.3.4-1/src/Fl_Group.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 716              		.loc 3 97 0
 717              		.cfi_startproc
 718              	.LVL72:
  98:fltk-1.3.4-1/src/Fl_Group.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 719              		.loc 3 98 0
 720 0000 807F6CEF 		cmpb	$-17, 108(%rdi)
 721 0004 0F860601 		jbe	.L78
 721      0000
  97:fltk-1.3.4-1/src/Fl_Group.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 722              		.loc 3 97 0
 723 000a 4156     		pushq	%r14
 724              		.cfi_def_cfa_offset 16
 725              		.cfi_offset 14, -16
  99:fltk-1.3.4-1/src/Fl_Group.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 726              		.loc 3 99 0
 727 000c 8D46EC   		leal	-20(%rsi), %eax
  97:fltk-1.3.4-1/src/Fl_Group.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 728              		.loc 3 97 0
 729 000f 4155     		pushq	%r13
 730              		.cfi_def_cfa_offset 24
 731              		.cfi_offset 13, -24
 732 0011 4154     		pushq	%r12
 733              		.cfi_def_cfa_offset 32
 734              		.cfi_offset 12, -32
 735 0013 55       		pushq	%rbp
 736              		.cfi_def_cfa_offset 40
 737              		.cfi_offset 6, -40
 738 0014 89F5     		movl	%esi, %ebp
 739 0016 53       		pushq	%rbx
 740              		.cfi_def_cfa_offset 48
 741              		.cfi_offset 3, -48
 742 0017 4889FB   		movq	%rdi, %rbx
 743 001a 4883EC10 		subq	$16, %rsp
 744              		.cfi_def_cfa_offset 64
  99:fltk-1.3.4-1/src/Fl_Group.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 745              		.loc 3 99 0
 746 001e 83F801   		cmpl	$1, %eax
 747 0021 765D     		jbe	.L79
 106:fltk-1.3.4-1/src/Fl_Group.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 748              		.loc 3 106 0
 749 0023 448B2D00 		movl	_ZN2Fl3e_xE(%rip), %r13d
 749      000000
 750              	.LVL73:
 107:fltk-1.3.4-1/src/Fl_Group.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 751              		.loc 3 107 0
 752 002a 448B3500 		movl	_ZN2Fl3e_yE(%rip), %r14d
 752      000000
 753              	.LVL74:
 106:fltk-1.3.4-1/src/Fl_Group.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 754              		.loc 3 106 0
 755 0031 4489E8   		movl	%r13d, %eax
 756 0034 2B4720   		subl	32(%rdi), %eax
 757 0037 89050000 		movl	%eax, _ZN2Fl3e_xE(%rip)
 757      0000
 107:fltk-1.3.4-1/src/Fl_Group.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 758              		.loc 3 107 0
 759 003d 4489F0   		movl	%r14d, %eax
 760 0040 2B4724   		subl	36(%rdi), %eax
 761 0043 89050000 		movl	%eax, _ZN2Fl3e_yE(%rip)
 761      0000
 108:fltk-1.3.4-1/src/Fl_Group.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 762              		.loc 3 108 0
 763 0049 488B07   		movq	(%rdi), %rax
 764 004c FF5018   		call	*24(%rax)
 765              	.LVL75:
 111:fltk-1.3.4-1/src/Fl_Group.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 766              		.loc 3 111 0
 767 004f 83FD03   		cmpl	$3, %ebp
 108:fltk-1.3.4-1/src/Fl_Group.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 768              		.loc 3 108 0
 769 0052 4189C4   		movl	%eax, %r12d
 770              	.LVL76:
 109:fltk-1.3.4-1/src/Fl_Group.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771              		.loc 3 109 0
 772 0055 44893500 		movl	%r14d, _ZN2Fl3e_yE(%rip)
 772      000000
 110:fltk-1.3.4-1/src/Fl_Group.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 773              		.loc 3 110 0
 774 005c 44892D00 		movl	%r13d, _ZN2Fl3e_xE(%rip)
 774      000000
 111:fltk-1.3.4-1/src/Fl_Group.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 775              		.loc 3 111 0
 776 0063 7471     		je	.L64
 777 0065 83FD14   		cmpl	$20, %ebp
 778 0068 746C     		je	.L64
 779              	.LVL77:
 780              	.L71:
 122:fltk-1.3.4-1/src/Fl_Group.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 781              		.loc 3 122 0
 782 006a 4883C410 		addq	$16, %rsp
 783              		.cfi_remember_state
 784              		.cfi_def_cfa_offset 48
 785 006e 5B       		popq	%rbx
 786              		.cfi_restore 3
 787              		.cfi_def_cfa_offset 40
 788              	.LVL78:
 789 006f 5D       		popq	%rbp
 790              		.cfi_restore 6
 791              		.cfi_def_cfa_offset 32
 792 0070 415C     		popq	%r12
 793              		.cfi_restore 12
 794              		.cfi_def_cfa_offset 24
 795 0072 415D     		popq	%r13
 796              		.cfi_restore 13
 797              		.cfi_def_cfa_offset 16
 798 0074 415E     		popq	%r14
 799              		.cfi_restore 14
 800              		.cfi_def_cfa_offset 8
 801 0076 C3       		ret
 802              	.LVL79:
 803 0077 660F1F84 		.p2align 4,,10
 803      00000000 
 803      00
 804              		.p2align 3
 805              	.L79:
 806              		.cfi_restore_state
 104:fltk-1.3.4-1/src/Fl_Group.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 807              		.loc 3 104 0
 808 0080 488B3500 		movq	_ZN2Fl11belowmouse_E(%rip), %rsi
 808      000000
 809              	.LVL80:
 810 0087 E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 810      00
 811              	.LVL81:
 812 008c 85C0     		testl	%eax, %eax
 813 008e 0F858C00 		jne	.L61
 813      0000
 814              	.LVL82:
 106:fltk-1.3.4-1/src/Fl_Group.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 815              		.loc 3 106 0
 816 0094 8B2D0000 		movl	_ZN2Fl3e_xE(%rip), %ebp
 816      0000
 817              	.LVL83:
 107:fltk-1.3.4-1/src/Fl_Group.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 818              		.loc 3 107 0
 819 009a 448B2D00 		movl	_ZN2Fl3e_yE(%rip), %r13d
 819      000000
 820              	.LVL84:
 108:fltk-1.3.4-1/src/Fl_Group.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 821              		.loc 3 108 0
 822 00a1 BE140000 		movl	$20, %esi
 822      00
 823 00a6 4889DF   		movq	%rbx, %rdi
 106:fltk-1.3.4-1/src/Fl_Group.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 824              		.loc 3 106 0
 825 00a9 89E8     		movl	%ebp, %eax
 826 00ab 2B4320   		subl	32(%rbx), %eax
 827 00ae 89050000 		movl	%eax, _ZN2Fl3e_xE(%rip)
 827      0000
 107:fltk-1.3.4-1/src/Fl_Group.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 828              		.loc 3 107 0
 829 00b4 4489E8   		movl	%r13d, %eax
 830 00b7 2B4324   		subl	36(%rbx), %eax
 831 00ba 89050000 		movl	%eax, _ZN2Fl3e_yE(%rip)
 831      0000
 108:fltk-1.3.4-1/src/Fl_Group.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 832              		.loc 3 108 0
 833 00c0 488B03   		movq	(%rbx), %rax
 834 00c3 FF5018   		call	*24(%rax)
 835              	.LVL85:
 109:fltk-1.3.4-1/src/Fl_Group.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 836              		.loc 3 109 0
 837 00c6 44892D00 		movl	%r13d, _ZN2Fl3e_yE(%rip)
 837      000000
 108:fltk-1.3.4-1/src/Fl_Group.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 838              		.loc 3 108 0
 839 00cd 4189C4   		movl	%eax, %r12d
 840              	.LVL86:
 110:fltk-1.3.4-1/src/Fl_Group.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 841              		.loc 3 110 0
 842 00d0 892D0000 		movl	%ebp, _ZN2Fl3e_xE(%rip)
 842      0000
 843              	.LVL87:
 844              	.L64:
 118:fltk-1.3.4-1/src/Fl_Group.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 845              		.loc 3 118 0
 846 00d6 488B3500 		movq	_ZN2Fl11belowmouse_E(%rip), %rsi
 846      000000
 847 00dd 4889DF   		movq	%rbx, %rdi
 848 00e0 E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 848      00
 849              	.LVL88:
 850 00e5 89C2     		movl	%eax, %edx
 851 00e7 4489E0   		movl	%r12d, %eax
 852 00ea 85D2     		testl	%edx, %edx
 853 00ec 0F8578FF 		jne	.L71
 853      FFFF
 854              	.LVL89:
 855 00f2 4889DF   		movq	%rbx, %rdi
 856 00f5 44896424 		movl	%r12d, 12(%rsp)
 856      0C
 857 00fa E8000000 		call	_ZN2Fl10belowmouseEP9Fl_Widget
 857      00
 858              	.LVL90:
 859 00ff 8B44240C 		movl	12(%rsp), %eax
 122:fltk-1.3.4-1/src/Fl_Group.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 860              		.loc 3 122 0
 861 0103 4883C410 		addq	$16, %rsp
 862              		.cfi_def_cfa_offset 48
 863 0107 5B       		popq	%rbx
 864              		.cfi_restore 3
 865              		.cfi_def_cfa_offset 40
 866              	.LVL91:
 867 0108 5D       		popq	%rbp
 868              		.cfi_restore 6
 869              		.cfi_def_cfa_offset 32
 870 0109 415C     		popq	%r12
 871              		.cfi_restore 12
 872              		.cfi_def_cfa_offset 24
 873              	.LVL92:
 874 010b 415D     		popq	%r13
 875              		.cfi_restore 13
 876              		.cfi_def_cfa_offset 16
 877 010d 415E     		popq	%r14
 878              		.cfi_restore 14
 879              		.cfi_def_cfa_offset 8
 880 010f C3       		ret
 881              	.LVL93:
 882              		.p2align 4,,10
 883              		.p2align 3
 884              	.L78:
  98:fltk-1.3.4-1/src/Fl_Group.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 885              		.loc 3 98 0
 886 0110 488B07   		movq	(%rdi), %rax
 887 0113 488B4018 		movq	24(%rax), %rax
 888 0117 FFE0     		jmp	*%rax
 889              	.LVL94:
 890 0119 0F1F8000 		.p2align 4,,10
 890      000000
 891              		.p2align 3
 892              	.L61:
 893              		.cfi_def_cfa_offset 64
 894              		.cfi_offset 3, -48
 895              		.cfi_offset 6, -40
 896              		.cfi_offset 12, -32
 897              		.cfi_offset 13, -24
 898              		.cfi_offset 14, -16
 106:fltk-1.3.4-1/src/Fl_Group.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 899              		.loc 3 106 0
 900 0120 8B2D0000 		movl	_ZN2Fl3e_xE(%rip), %ebp
 900      0000
 901              	.LVL95:
 107:fltk-1.3.4-1/src/Fl_Group.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 902              		.loc 3 107 0
 903 0126 448B2500 		movl	_ZN2Fl3e_yE(%rip), %r12d
 903      000000
 904              	.LVL96:
 108:fltk-1.3.4-1/src/Fl_Group.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 905              		.loc 3 108 0
 906 012d 4889DF   		movq	%rbx, %rdi
 907 0130 BE150000 		movl	$21, %esi
 907      00
 106:fltk-1.3.4-1/src/Fl_Group.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 908              		.loc 3 106 0
 909 0135 89E8     		movl	%ebp, %eax
 910 0137 2B4320   		subl	32(%rbx), %eax
 911 013a 89050000 		movl	%eax, _ZN2Fl3e_xE(%rip)
 911      0000
 107:fltk-1.3.4-1/src/Fl_Group.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 912              		.loc 3 107 0
 913 0140 4489E0   		movl	%r12d, %eax
 914 0143 2B4324   		subl	36(%rbx), %eax
 915 0146 89050000 		movl	%eax, _ZN2Fl3e_yE(%rip)
 915      0000
 108:fltk-1.3.4-1/src/Fl_Group.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 916              		.loc 3 108 0
 917 014c 488B03   		movq	(%rbx), %rax
 918 014f FF5018   		call	*24(%rax)
 919              	.LVL97:
 109:fltk-1.3.4-1/src/Fl_Group.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 920              		.loc 3 109 0
 921 0152 44892500 		movl	%r12d, _ZN2Fl3e_yE(%rip)
 921      000000
 110:fltk-1.3.4-1/src/Fl_Group.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 922              		.loc 3 110 0
 923 0159 892D0000 		movl	%ebp, _ZN2Fl3e_xE(%rip)
 923      0000
 122:fltk-1.3.4-1/src/Fl_Group.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 924              		.loc 3 122 0
 925 015f 4883C410 		addq	$16, %rsp
 926              		.cfi_def_cfa_offset 48
 927 0163 5B       		popq	%rbx
 928              		.cfi_restore 3
 929              		.cfi_def_cfa_offset 40
 930              	.LVL98:
 931 0164 5D       		popq	%rbp
 932              		.cfi_restore 6
 933              		.cfi_def_cfa_offset 32
 934              	.LVL99:
 935 0165 415C     		popq	%r12
 936              		.cfi_restore 12
 937              		.cfi_def_cfa_offset 24
 938              	.LVL100:
 939 0167 415D     		popq	%r13
 940              		.cfi_restore 13
 941              		.cfi_def_cfa_offset 16
 942 0169 415E     		popq	%r14
 943              		.cfi_restore 14
 944              		.cfi_def_cfa_offset 8
 945 016b C3       		ret
 946              		.cfi_endproc
 947              	.LFE753:
 949              		.section	.text.unlikely._ZL4sendP9Fl_Widgeti.constprop.35
 950              	.LCOLDE10:
 951              		.section	.text._ZL4sendP9Fl_Widgeti.constprop.35
 952              	.LHOTE10:
 953              		.section	.text.unlikely._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40,"ax",@
 954              		.align 2
 955              	.LCOLDB11:
 956              		.section	.text._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40,"ax",@progbits
 957              	.LHOTB11:
 958              		.align 2
 959              		.p2align 4,,15
 961              	_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40:
 962              	.LFB748:
 146:fltk-1.3.4-1/src/Fl_Group.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Group.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Group.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Group.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Group.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Group.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Group.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Group.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Group.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Group.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Group.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Group.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Group.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Group.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Group.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Group.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Group.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Group.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Group.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Group.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Group.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Group.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Group.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Group.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Group.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Group.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Group.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Group.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Group.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Group.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Group.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Group.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Group.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Group.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Group.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Group.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Group.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Group.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Group.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Group.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Group.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Group.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Group.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Group.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Group.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Group.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Group.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Group.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Group.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Group.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Group.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Group.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Group.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Group.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Group.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Group.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Group.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Group.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Group.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Group.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Group.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Group.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Group.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Group.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Group.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Group.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Group.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Group.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Group.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Group.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Group.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Group.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Group.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Group.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Group.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Group.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Group.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Group.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Group.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Group.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Group.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Group.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Group.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Group.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Group.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Group.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Group.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Group.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Group.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Group.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Group.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Group.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Group.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Group.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Group.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Group.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Group.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Group.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Group.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Group.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Group.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Group.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Group.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Group.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Group.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Group.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Group.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Group.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Group.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Group.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Group.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Group.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Group.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Group.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Group.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Group.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Group.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Group.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Group.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Group.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Group.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Group.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Group.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Group.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Group.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Group.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Group.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Group.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Group.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Group.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Group.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Group.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Group.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Group.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Group.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Group.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Group.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Group.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Group.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Group.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Group.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Group.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Group.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Group.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Group.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Group.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Group.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Group.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Group.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Group.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Group.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Group.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Group.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Group.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Group.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Group.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Group.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Group.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Group.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Group.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Group.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Group.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Group.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Group.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Group.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Group.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Group.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Group.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Group.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Group.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Group.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Group.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Group.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Group.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Group.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Group.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Group.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Group.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Group.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Group.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Group.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Group.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Group.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Group.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Group.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Group.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Group.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Group.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Group.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Group.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Group.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Group.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Group.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Group.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Group.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Group.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Group.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Group.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Group.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Group.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Group.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Group.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Group.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Group.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Group.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Group.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Group.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Group.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Group.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Group.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Group.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Group.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Group.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Group.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Group.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Group.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Group.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Group.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Group.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Group.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Group.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Group.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Group.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Group.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Group.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Group.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Group.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Group.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Group.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Group.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Group.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Group.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Group.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Group.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Group.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Group.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Group.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Group.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Group.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Group.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Group.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Group.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Group.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Group.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Group.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Group.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Group.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Group.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Group.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Group.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Group.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Group.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Group.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Group.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Group.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Group.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Group.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Group.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Group.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Group.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Group.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Group.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Group.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Group.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Group.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Group.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Group.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Group.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Group.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Group.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Group.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Group.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Group.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Group.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Group.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Group.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Group.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Group.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Group.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Group.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Group.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Group.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Group.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Group.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Group.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Group.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Group.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Group.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Group.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Group.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Group.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Group.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Group.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Group.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Group.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Group.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Group.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Group.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Group.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Group.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Group.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Group.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Group.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Group.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Group.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Group.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Group.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Group.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Group.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Group.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Group.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Group.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Group.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Group.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Group.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Group.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Group.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Group.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Group.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Group.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Group.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Group.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Group.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Group.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Group.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Group.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Group.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Group.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Group.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Group.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Group.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Group.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Group.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Group.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Group.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Group.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Group.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Group.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Group.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Group.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Group.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Group.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Group.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Group.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Group.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Group.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Group.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Group.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Group.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Group.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Group.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Group.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Group.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Group.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Group.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Group.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Group.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Group.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Group.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Group.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Group.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Group.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Group.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Group.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Group.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Group.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Group.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Group.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Group.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_Group.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Group.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Group.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Group.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Group.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Group.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Group.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Group.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Group.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Group.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Group.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Group.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_Group.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Group.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_Group.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Group.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_Group.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_Group.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Group.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_Group.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Group.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Group.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Group.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Group.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_Group.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_Group.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Group.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/Fl_Group.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_Group.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Group.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Group.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_Group.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Group.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Group.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Group.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Group.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Group.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Group.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Group.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Group.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Group.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Group.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Group.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Group.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Group.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Group.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Group.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_Group.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Group.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 567:fltk-1.3.4-1/src/Fl_Group.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_Group.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/Fl_Group.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Group.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_Group.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Group.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 574:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Group.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Group.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_Group.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Group.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_Group.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_Group.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Group.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_Group.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_Group.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_Group.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Group.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/Fl_Group.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_Group.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 588:fltk-1.3.4-1/src/Fl_Group.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_Group.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/Fl_Group.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_Group.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Group.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/Fl_Group.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_Group.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_Group.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Group.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Group.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Group.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Group.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Group.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Group.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Group.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_Group.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_Group.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_Group.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_Group.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_Group.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_Group.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/Fl_Group.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Group.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Group.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_Group.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_Group.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_Group.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/Fl_Group.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/Fl_Group.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_Group.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Group.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/Fl_Group.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/Fl_Group.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/Fl_Group.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_Group.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/Fl_Group.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_Group.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 625:fltk-1.3.4-1/src/Fl_Group.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_Group.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_Group.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 628:fltk-1.3.4-1/src/Fl_Group.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 629:fltk-1.3.4-1/src/Fl_Group.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_Group.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_Group.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632:fltk-1.3.4-1/src/Fl_Group.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 633:fltk-1.3.4-1/src/Fl_Group.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 634:fltk-1.3.4-1/src/Fl_Group.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635:fltk-1.3.4-1/src/Fl_Group.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 636:fltk-1.3.4-1/src/Fl_Group.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_Group.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 638:fltk-1.3.4-1/src/Fl_Group.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 639:fltk-1.3.4-1/src/Fl_Group.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 640:fltk-1.3.4-1/src/Fl_Group.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 641:fltk-1.3.4-1/src/Fl_Group.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 642:fltk-1.3.4-1/src/Fl_Group.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 643:fltk-1.3.4-1/src/Fl_Group.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 644:fltk-1.3.4-1/src/Fl_Group.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 645:fltk-1.3.4-1/src/Fl_Group.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 646:fltk-1.3.4-1/src/Fl_Group.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 647:fltk-1.3.4-1/src/Fl_Group.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 648:fltk-1.3.4-1/src/Fl_Group.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 649:fltk-1.3.4-1/src/Fl_Group.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 650:fltk-1.3.4-1/src/Fl_Group.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 651:fltk-1.3.4-1/src/Fl_Group.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 652:fltk-1.3.4-1/src/Fl_Group.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 653:fltk-1.3.4-1/src/Fl_Group.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 654:fltk-1.3.4-1/src/Fl_Group.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 655:fltk-1.3.4-1/src/Fl_Group.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 656:fltk-1.3.4-1/src/Fl_Group.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_Group.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_Group.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_Group.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_Group.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_Group.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_Group.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_Group.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_Group.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_Group.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 666:fltk-1.3.4-1/src/Fl_Group.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_Group.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_Group.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 669:fltk-1.3.4-1/src/Fl_Group.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_Group.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_Group.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 672:fltk-1.3.4-1/src/Fl_Group.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_Group.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_Group.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 675:fltk-1.3.4-1/src/Fl_Group.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_Group.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_Group.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 678:fltk-1.3.4-1/src/Fl_Group.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_Group.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 680:fltk-1.3.4-1/src/Fl_Group.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_Group.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_Group.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_Group.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_Group.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_Group.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_Group.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687:fltk-1.3.4-1/src/Fl_Group.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_Group.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_Group.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 690:fltk-1.3.4-1/src/Fl_Group.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_Group.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_Group.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_Group.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_Group.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_Group.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_Group.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_Group.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_Group.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_Group.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_Group.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_Group.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_Group.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_Group.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_Group.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_Group.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_Group.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_Group.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_Group.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 709:fltk-1.3.4-1/src/Fl_Group.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_Group.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_Group.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_Group.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_Group.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_Group.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_Group.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 716:fltk-1.3.4-1/src/Fl_Group.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 717:fltk-1.3.4-1/src/Fl_Group.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 718:fltk-1.3.4-1/src/Fl_Group.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_Group.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_Group.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721:fltk-1.3.4-1/src/Fl_Group.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 722:fltk-1.3.4-1/src/Fl_Group.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_Group.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_Group.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 725:fltk-1.3.4-1/src/Fl_Group.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_Group.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_Group.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 728:fltk-1.3.4-1/src/Fl_Group.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 729:fltk-1.3.4-1/src/Fl_Group.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 730:fltk-1.3.4-1/src/Fl_Group.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 731:fltk-1.3.4-1/src/Fl_Group.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 732:fltk-1.3.4-1/src/Fl_Group.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/src/Fl_Group.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 734:fltk-1.3.4-1/src/Fl_Group.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 735:fltk-1.3.4-1/src/Fl_Group.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 736:fltk-1.3.4-1/src/Fl_Group.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 737:fltk-1.3.4-1/src/Fl_Group.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 738:fltk-1.3.4-1/src/Fl_Group.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 739:fltk-1.3.4-1/src/Fl_Group.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 740:fltk-1.3.4-1/src/Fl_Group.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 741:fltk-1.3.4-1/src/Fl_Group.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 742:fltk-1.3.4-1/src/Fl_Group.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 743:fltk-1.3.4-1/src/Fl_Group.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 744:fltk-1.3.4-1/src/Fl_Group.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 745:fltk-1.3.4-1/src/Fl_Group.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 746:fltk-1.3.4-1/src/Fl_Group.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 747:fltk-1.3.4-1/src/Fl_Group.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 748:fltk-1.3.4-1/src/Fl_Group.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 749:fltk-1.3.4-1/src/Fl_Group.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 750:fltk-1.3.4-1/src/Fl_Group.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 751:fltk-1.3.4-1/src/Fl_Group.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752:fltk-1.3.4-1/src/Fl_Group.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 753:fltk-1.3.4-1/src/Fl_Group.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 754:fltk-1.3.4-1/src/Fl_Group.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 755:fltk-1.3.4-1/src/Fl_Group.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 756:fltk-1.3.4-1/src/Fl_Group.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 757:fltk-1.3.4-1/src/Fl_Group.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 758:fltk-1.3.4-1/src/Fl_Group.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 759:fltk-1.3.4-1/src/Fl_Group.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 760:fltk-1.3.4-1/src/Fl_Group.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 761:fltk-1.3.4-1/src/Fl_Group.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 762:fltk-1.3.4-1/src/Fl_Group.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 763:fltk-1.3.4-1/src/Fl_Group.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/src/Fl_Group.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 765:fltk-1.3.4-1/src/Fl_Group.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/src/Fl_Group.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 767:fltk-1.3.4-1/src/Fl_Group.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 768:fltk-1.3.4-1/src/Fl_Group.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 769:fltk-1.3.4-1/src/Fl_Group.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 770:fltk-1.3.4-1/src/Fl_Group.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771:fltk-1.3.4-1/src/Fl_Group.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 772:fltk-1.3.4-1/src/Fl_Group.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 773:fltk-1.3.4-1/src/Fl_Group.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 774:fltk-1.3.4-1/src/Fl_Group.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 775:fltk-1.3.4-1/src/Fl_Group.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 776:fltk-1.3.4-1/src/Fl_Group.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 777:fltk-1.3.4-1/src/Fl_Group.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 778:fltk-1.3.4-1/src/Fl_Group.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 779:fltk-1.3.4-1/src/Fl_Group.cxx ****  762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 780:fltk-1.3.4-1/src/Fl_Group.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 963              		.loc 3 780 0
 964              		.cfi_startproc
 965              	.LVL101:
 966 0000 4157     		pushq	%r15
 967              		.cfi_def_cfa_offset 16
 968              		.cfi_offset 15, -16
 969 0002 4156     		pushq	%r14
 970              		.cfi_def_cfa_offset 24
 971              		.cfi_offset 14, -24
 972 0004 4155     		pushq	%r13
 973              		.cfi_def_cfa_offset 32
 974              		.cfi_offset 13, -32
 975 0006 4154     		pushq	%r12
 976              		.cfi_def_cfa_offset 40
 977              		.cfi_offset 12, -40
 978 0008 55       		pushq	%rbp
 979              		.cfi_def_cfa_offset 48
 980              		.cfi_offset 6, -48
 981 0009 53       		pushq	%rbx
 982              		.cfi_def_cfa_offset 56
 983              		.cfi_offset 3, -56
 984 000a 4883EC18 		subq	$24, %rsp
 985              		.cfi_def_cfa_offset 80
 986 000e 8B5E54   		movl	84(%rsi), %ebx
 987              	.LVL102:
 781:fltk-1.3.4-1/src/Fl_Group.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 782:fltk-1.3.4-1/src/Fl_Group.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 783:fltk-1.3.4-1/src/Fl_Group.cxx ****  766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 988              		.loc 3 783 0
 989 0011 4189DD   		movl	%ebx, %r13d
 990 0014 4183E50F 		andl	$15, %r13d
 991 0018 0F84A200 		je	.L80
 991      0000
 992              	.LVL103:
 993 001e F6C310   		testb	$16, %bl
 994 0021 0F859900 		jne	.L80
 994      0000
 995 0027 8B5624   		movl	36(%rsi), %edx
 996 002a 448B462C 		movl	44(%rsi), %r8d
 997 002e 4889F5   		movq	%rsi, %rbp
 784:fltk-1.3.4-1/src/Fl_Group.cxx ****  767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callb
 785:fltk-1.3.4-1/src/Fl_Group.cxx ****  768:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 786:fltk-1.3.4-1/src/Fl_Group.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 787:fltk-1.3.4-1/src/Fl_Group.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 788:fltk-1.3.4-1/src/Fl_Group.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 789:fltk-1.3.4-1/src/Fl_Group.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 790:fltk-1.3.4-1/src/Fl_Group.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 791:fltk-1.3.4-1/src/Fl_Group.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 998              		.loc 3 791 0
 999 0031 488B07   		movq	(%rdi), %rax
 1000 0034 448B7E20 		movl	32(%rsi), %r15d
 1001 0038 4989FC   		movq	%rdi, %r12
 1002              	.LVL104:
 1003 003b 448B7628 		movl	40(%rsi), %r14d
 1004 003f 8954240C 		movl	%edx, 12(%rsp)
 1005              	.LVL105:
 1006 0043 44894424 		movl	%r8d, 8(%rsp)
 1006      08
 1007              	.LVL106:
 1008 0048 FF5040   		call	*64(%rax)
 1009              	.LVL107:
 792:fltk-1.3.4-1/src/Fl_Group.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 1010              		.loc 3 792 0
 1011 004b 31C9     		xorl	%ecx, %ecx
 1012 004d 31F6     		xorl	%esi, %esi
 791:fltk-1.3.4-1/src/Fl_Group.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 1013              		.loc 3 791 0
 1014 004f 4885C0   		testq	%rax, %rax
 1015 0052 448B4424 		movl	8(%rsp), %r8d
 1015      08
 1016 0057 8B54240C 		movl	12(%rsp), %edx
 1017 005b 0F84BF00 		je	.L104
 1017      0000
 1018              	.LVL108:
 1019              	.L91:
 793:fltk-1.3.4-1/src/Fl_Group.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 794:fltk-1.3.4-1/src/Fl_Group.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 795:fltk-1.3.4-1/src/Fl_Group.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 796:fltk-1.3.4-1/src/Fl_Group.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 1020              		.loc 3 796 0
 1021 0061 4183FD07 		cmpl	$7, %r13d
 1022 0065 0F848500 		je	.L105
 1022      0000
 797:fltk-1.3.4-1/src/Fl_Group.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 798:fltk-1.3.4-1/src/Fl_Group.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 799:fltk-1.3.4-1/src/Fl_Group.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 800:fltk-1.3.4-1/src/Fl_Group.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 1023              		.loc 3 800 0
 1024 006b 4183FD0D 		cmpl	$13, %r13d
 1025 006f 0F849300 		je	.L106
 1025      0000
 801:fltk-1.3.4-1/src/Fl_Group.cxx ****  784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 802:fltk-1.3.4-1/src/Fl_Group.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 803:fltk-1.3.4-1/src/Fl_Group.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 804:fltk-1.3.4-1/src/Fl_Group.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1026              		.loc 3 804 0
 1027 0075 4183FD0B 		cmpl	$11, %r13d
 1028 0079 7455     		je	.L107
 805:fltk-1.3.4-1/src/Fl_Group.cxx ****  788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 806:fltk-1.3.4-1/src/Fl_Group.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 807:fltk-1.3.4-1/src/Fl_Group.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 808:fltk-1.3.4-1/src/Fl_Group.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 1029              		.loc 3 808 0
 1030 007b 4183FD0E 		cmpl	$14, %r13d
 1031 007f 0F84EB00 		je	.L108
 1031      0000
 809:fltk-1.3.4-1/src/Fl_Group.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 810:fltk-1.3.4-1/src/Fl_Group.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 811:fltk-1.3.4-1/src/Fl_Group.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 812:fltk-1.3.4-1/src/Fl_Group.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 1032              		.loc 3 812 0
 1033 0085 F6C301   		testb	$1, %bl
 1034 0088 0F84A200 		je	.L88
 1034      0000
 813:fltk-1.3.4-1/src/Fl_Group.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 814:fltk-1.3.4-1/src/Fl_Group.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 815:fltk-1.3.4-1/src/Fl_Group.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1035              		.loc 3 815 0
 1036 008e 448B4524 		movl	36(%rbp), %r8d
 813:fltk-1.3.4-1/src/Fl_Group.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1037              		.loc 3 813 0
 1038 0092 83F303   		xorl	$3, %ebx
 1039              	.LVL109:
 814:fltk-1.3.4-1/src/Fl_Group.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1040              		.loc 3 814 0
 1041 0095 89CA     		movl	%ecx, %edx
 786:fltk-1.3.4-1/src/Fl_Group.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 1042              		.loc 3 786 0
 1043 0097 4489FE   		movl	%r15d, %esi
 1044              	.LVL110:
 1045              		.loc 3 815 0
 1046 009a 4129C8   		subl	%ecx, %r8d
 1047              	.LVL111:
 1048              	.L84:
 816:fltk-1.3.4-1/src/Fl_Group.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 817:fltk-1.3.4-1/src/Fl_Group.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 818:fltk-1.3.4-1/src/Fl_Group.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 819:fltk-1.3.4-1/src/Fl_Group.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820:fltk-1.3.4-1/src/Fl_Group.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 821:fltk-1.3.4-1/src/Fl_Group.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 822:fltk-1.3.4-1/src/Fl_Group.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 823:fltk-1.3.4-1/src/Fl_Group.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 824:fltk-1.3.4-1/src/Fl_Group.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 825:fltk-1.3.4-1/src/Fl_Group.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 826:fltk-1.3.4-1/src/Fl_Group.cxx ****  809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 827:fltk-1.3.4-1/src/Fl_Group.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 828:fltk-1.3.4-1/src/Fl_Group.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 829:fltk-1.3.4-1/src/Fl_Group.cxx ****  812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 830:fltk-1.3.4-1/src/Fl_Group.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1049              		.loc 3 830 0
 1050 009d 4883C418 		addq	$24, %rsp
 1051              		.cfi_remember_state
 1052              		.cfi_def_cfa_offset 56
 829:fltk-1.3.4-1/src/Fl_Group.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1053              		.loc 3 829 0
 1054 00a1 4189D9   		movl	%ebx, %r9d
 1055 00a4 4489F1   		movl	%r14d, %ecx
 1056              		.loc 3 830 0
 1057 00a7 5B       		popq	%rbx
 1058              		.cfi_def_cfa_offset 48
 1059              	.LVL112:
 829:fltk-1.3.4-1/src/Fl_Group.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1060              		.loc 3 829 0
 1061 00a8 4889EF   		movq	%rbp, %rdi
 1062              		.loc 3 830 0
 1063 00ab 5D       		popq	%rbp
 1064              		.cfi_def_cfa_offset 40
 1065              	.LVL113:
 1066 00ac 415C     		popq	%r12
 1067              		.cfi_def_cfa_offset 32
 1068              	.LVL114:
 1069 00ae 415D     		popq	%r13
 1070              		.cfi_def_cfa_offset 24
 1071 00b0 415E     		popq	%r14
 1072              		.cfi_def_cfa_offset 16
 1073              	.LVL115:
 1074 00b2 415F     		popq	%r15
 1075              		.cfi_def_cfa_offset 8
 829:fltk-1.3.4-1/src/Fl_Group.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1076              		.loc 3 829 0
 1077 00b4 E9000000 		jmp	_ZNK9Fl_Widget10draw_labelEiiiij
 1077      00
 1078              	.LVL116:
 1079 00b9 0F1F8000 		.p2align 4,,10
 1079      000000
 1080              		.p2align 3
 1081              	.L80:
 1082              		.cfi_restore_state
 1083              		.loc 3 830 0
 1084 00c0 4883C418 		addq	$24, %rsp
 1085              		.cfi_remember_state
 1086              		.cfi_def_cfa_offset 56
 1087 00c4 5B       		popq	%rbx
 1088              		.cfi_def_cfa_offset 48
 1089 00c5 5D       		popq	%rbp
 1090              		.cfi_def_cfa_offset 40
 1091 00c6 415C     		popq	%r12
 1092              		.cfi_def_cfa_offset 32
 1093 00c8 415D     		popq	%r13
 1094              		.cfi_def_cfa_offset 24
 1095 00ca 415E     		popq	%r14
 1096              		.cfi_def_cfa_offset 16
 1097 00cc 415F     		popq	%r15
 1098              		.cfi_def_cfa_offset 8
 1099 00ce C3       		ret
 1100              	.LVL117:
 1101 00cf 90       		.p2align 4,,10
 1102              		.p2align 3
 1103              	.L107:
 1104              		.cfi_restore_state
 805:fltk-1.3.4-1/src/Fl_Group.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 1105              		.loc 3 805 0
 1106 00d0 83E3F0   		andl	$-16, %ebx
 1107 00d3 83CB05   		orl	$5, %ebx
 1108              	.LVL118:
 1109              	.L101:
 811:fltk-1.3.4-1/src/Fl_Group.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 1110              		.loc 3 811 0
 1111 00d6 41037424 		addl	40(%r12), %esi
 1111      28
 1112              	.LVL119:
 810:fltk-1.3.4-1/src/Fl_Group.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 1113              		.loc 3 810 0
 1114 00db 438D4437 		leal	3(%r15,%r14), %eax
 1114      03
 1115              	.LVL120:
 811:fltk-1.3.4-1/src/Fl_Group.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 1116              		.loc 3 811 0
 1117 00e0 4189F6   		movl	%esi, %r14d
 810:fltk-1.3.4-1/src/Fl_Group.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 1118              		.loc 3 810 0
 1119 00e3 89C6     		movl	%eax, %esi
 811:fltk-1.3.4-1/src/Fl_Group.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 1120              		.loc 3 811 0
 1121 00e5 4129C6   		subl	%eax, %r14d
 1122              	.LVL121:
 1123 00e8 EBB3     		jmp	.L84
 1124              	.LVL122:
 1125 00ea 660F1F44 		.p2align 4,,10
 1125      0000
 1126              		.p2align 3
 1127              	.L105:
 799:fltk-1.3.4-1/src/Fl_Group.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 1128              		.loc 3 799 0
 1129 00f0 448B7520 		movl	32(%rbp), %r14d
 797:fltk-1.3.4-1/src/Fl_Group.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 1130              		.loc 3 797 0
 1131 00f4 83E3F0   		andl	$-16, %ebx
 1132 00f7 83CB09   		orl	$9, %ebx
 1133              	.LVL123:
 799:fltk-1.3.4-1/src/Fl_Group.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 1134              		.loc 3 799 0
 1135 00fa 4129F6   		subl	%esi, %r14d
 1136 00fd 4183EE03 		subl	$3, %r14d
 1137              	.LVL124:
 1138 0101 EB9A     		jmp	.L84
 1139              	.LVL125:
 1140              		.p2align 4,,10
 1141 0103 0F1F4400 		.p2align 3
 1141      00
 1142              	.L106:
 803:fltk-1.3.4-1/src/Fl_Group.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1143              		.loc 3 803 0
 1144 0108 448B7520 		movl	32(%rbp), %r14d
 801:fltk-1.3.4-1/src/Fl_Group.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1145              		.loc 3 801 0
 1146 010c 83E3F0   		andl	$-16, %ebx
 1147 010f 83CB0A   		orl	$10, %ebx
 1148              	.LVL126:
 803:fltk-1.3.4-1/src/Fl_Group.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1149              		.loc 3 803 0
 1150 0112 4129F6   		subl	%esi, %r14d
 1151 0115 4183EE03 		subl	$3, %r14d
 1152              	.LVL127:
 1153 0119 E97FFFFF 		jmp	.L84
 1153      FF
 1154              	.LVL128:
 1155 011e 6690     		.p2align 4,,10
 1156              		.p2align 3
 1157              	.L104:
 1158 0120 418B7424 		movl	32(%r12), %esi
 1158      20
 1159              	.LVL129:
 1160 0125 418B4C24 		movl	36(%r12), %ecx
 1160      24
 1161              	.LVL130:
 1162 012a E932FFFF 		jmp	.L91
 1162      FF
 1163              	.LVL131:
 1164 012f 90       		.p2align 4,,10
 1165              		.p2align 3
 1166              	.L88:
 816:fltk-1.3.4-1/src/Fl_Group.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 1167              		.loc 3 816 0
 1168 0130 F6C302   		testb	$2, %bl
 1169 0133 751B     		jne	.L109
 820:fltk-1.3.4-1/src/Fl_Group.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1170              		.loc 3 820 0
 1171 0135 F6C304   		testb	$4, %bl
 1172 0138 7446     		je	.L90
 823:fltk-1.3.4-1/src/Fl_Group.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 1173              		.loc 3 823 0
 1174 013a 448B7520 		movl	32(%rbp), %r14d
 821:fltk-1.3.4-1/src/Fl_Group.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 1175              		.loc 3 821 0
 1176 013e 83F30C   		xorl	$12, %ebx
 1177              	.LVL132:
 823:fltk-1.3.4-1/src/Fl_Group.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 1178              		.loc 3 823 0
 1179 0141 4129F6   		subl	%esi, %r14d
 1180 0144 4183EE03 		subl	$3, %r14d
 1181              	.LVL133:
 1182 0148 E950FFFF 		jmp	.L84
 1182      FF
 1183              	.LVL134:
 1184 014d 0F1F00   		.p2align 4,,10
 1185              		.p2align 3
 1186              	.L109:
 819:fltk-1.3.4-1/src/Fl_Group.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 1187              		.loc 3 819 0
 1188 0150 41034C24 		addl	44(%r12), %ecx
 1188      2C
 1189              	.LVL135:
 818:fltk-1.3.4-1/src/Fl_Group.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1190              		.loc 3 818 0
 1191 0155 4401C2   		addl	%r8d, %edx
 817:fltk-1.3.4-1/src/Fl_Group.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 1192              		.loc 3 817 0
 1193 0158 83F303   		xorl	$3, %ebx
 1194              	.LVL136:
 786:fltk-1.3.4-1/src/Fl_Group.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 1195              		.loc 3 786 0
 1196 015b 4489FE   		movl	%r15d, %esi
 1197              	.LVL137:
 819:fltk-1.3.4-1/src/Fl_Group.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 1198              		.loc 3 819 0
 1199 015e 4189C8   		movl	%ecx, %r8d
 1200 0161 4129D0   		subl	%edx, %r8d
 1201              	.LVL138:
 1202 0164 E934FFFF 		jmp	.L84
 1202      FF
 1203              	.LVL139:
 1204 0169 0F1F8000 		.p2align 4,,10
 1204      000000
 1205              		.p2align 3
 1206              	.L108:
 809:fltk-1.3.4-1/src/Fl_Group.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 1207              		.loc 3 809 0
 1208 0170 83E3F0   		andl	$-16, %ebx
 1209 0173 83CB06   		orl	$6, %ebx
 1210 0176 E95BFFFF 		jmp	.L101
 1210      FF
 1211 017b 0F1F4400 		.p2align 4,,10
 1211      00
 1212              		.p2align 3
 1213              	.L90:
 824:fltk-1.3.4-1/src/Fl_Group.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 1214              		.loc 3 824 0
 1215 0180 F6C308   		testb	$8, %bl
 1216 0183 7408     		je	.L93
 825:fltk-1.3.4-1/src/Fl_Group.cxx ****  809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 1217              		.loc 3 825 0
 1218 0185 83F30C   		xorl	$12, %ebx
 1219              	.LVL140:
 1220 0188 E949FFFF 		jmp	.L101
 1220      FF
 1221              	.LVL141:
 1222              	.L93:
 786:fltk-1.3.4-1/src/Fl_Group.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 1223              		.loc 3 786 0
 1224 018d 4489FE   		movl	%r15d, %esi
 1225              	.LVL142:
 1226 0190 E908FFFF 		jmp	.L84
 1226      FF
 1227              		.cfi_endproc
 1228              	.LFE748:
 1230              		.section	.text.unlikely._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40
 1231              	.LCOLDE11:
 1232              		.section	.text._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40
 1233              	.LHOTE11:
 1234              		.section	.rodata.str1.1,"aMS",@progbits,1
 1235              	.LC12:
 1236 0000 252E3132 		.string	"%.12f"
 1236      6600
 1237              		.section	.text.unlikely._ZN10Fl_Spinner6updateEv,"axG",@progbits,_ZN10Fl_Spinner6updateEv,comdat
 1238              		.align 2
 1239              	.LCOLDB13:
 1240              		.section	.text._ZN10Fl_Spinner6updateEv,"axG",@progbits,_ZN10Fl_Spinner6updateEv,comdat
 1241              	.LHOTB13:
 1242              		.align 2
 1243              		.p2align 4,,15
 1244              		.weak	_ZN10Fl_Spinner6updateEv
 1246              	_ZN10Fl_Spinner6updateEv:
 1247              	.LFB623:
 1248              		.file 9 "fltk-1.3.4-1/FL/Fl_Spinner.H"
   1:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
   2:fltk-1.3.4-1/FL/Fl_Spinner.H **** // "$Id: Fl_Spinner.H 10300 2014-09-12 09:08:41Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
   4:fltk-1.3.4-1/FL/Fl_Spinner.H **** // Spinner widget for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
   6:fltk-1.3.4-1/FL/Fl_Spinner.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
   8:fltk-1.3.4-1/FL/Fl_Spinner.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Spinner.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Spinner.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
  12:fltk-1.3.4-1/FL/Fl_Spinner.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
  14:fltk-1.3.4-1/FL/Fl_Spinner.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
  16:fltk-1.3.4-1/FL/Fl_Spinner.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
  18:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  19:fltk-1.3.4-1/FL/Fl_Spinner.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Spinner.H ****    Fl_Spinner widget . */
  21:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  22:fltk-1.3.4-1/FL/Fl_Spinner.H **** #ifndef Fl_Spinner_H
  23:fltk-1.3.4-1/FL/Fl_Spinner.H **** #  define Fl_Spinner_H
  24:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  25:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
  26:fltk-1.3.4-1/FL/Fl_Spinner.H **** // Include necessary headers...
  27:fltk-1.3.4-1/FL/Fl_Spinner.H **** //
  28:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  29:fltk-1.3.4-1/FL/Fl_Spinner.H **** #  include <FL/Enumerations.H>
  30:fltk-1.3.4-1/FL/Fl_Spinner.H **** #  include <FL/Fl_Group.H>
  31:fltk-1.3.4-1/FL/Fl_Spinner.H **** #  include <FL/Fl_Input.H>
  32:fltk-1.3.4-1/FL/Fl_Spinner.H **** #  include <FL/Fl_Repeat_Button.H>
  33:fltk-1.3.4-1/FL/Fl_Spinner.H **** #  include <stdio.h>
  34:fltk-1.3.4-1/FL/Fl_Spinner.H **** #  include <stdlib.h>
  35:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  36:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  37:fltk-1.3.4-1/FL/Fl_Spinner.H **** /**
  38:fltk-1.3.4-1/FL/Fl_Spinner.H ****   This widget is a combination of the input
  39:fltk-1.3.4-1/FL/Fl_Spinner.H ****   widget and repeat buttons. The user can either type into the
  40:fltk-1.3.4-1/FL/Fl_Spinner.H ****   input area or use the buttons to change the value.
  41:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  42:fltk-1.3.4-1/FL/Fl_Spinner.H ****   \image html Fl_Spinner.png "Fl_Spinner widget"
  43:fltk-1.3.4-1/FL/Fl_Spinner.H ****   \image latex Fl_Spinner.png "Fl_Spinner widget" width=6cm
  44:fltk-1.3.4-1/FL/Fl_Spinner.H **** */
  45:fltk-1.3.4-1/FL/Fl_Spinner.H **** class FL_EXPORT Fl_Spinner : public Fl_Group {
  46:fltk-1.3.4-1/FL/Fl_Spinner.H ****  
  47:fltk-1.3.4-1/FL/Fl_Spinner.H ****   double	value_;			// Current value
  48:fltk-1.3.4-1/FL/Fl_Spinner.H ****   double	minimum_;		// Minimum value
  49:fltk-1.3.4-1/FL/Fl_Spinner.H ****   double	maximum_;		// Maximum value
  50:fltk-1.3.4-1/FL/Fl_Spinner.H ****   double	step_;			// Amount to add/subtract for up/down
  51:fltk-1.3.4-1/FL/Fl_Spinner.H ****   const char	*format_;		// Format string
  52:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  53:fltk-1.3.4-1/FL/Fl_Spinner.H **** #if FLTK_ABI_VERSION >= 10301
  54:fltk-1.3.4-1/FL/Fl_Spinner.H **** // NEW
  55:fltk-1.3.4-1/FL/Fl_Spinner.H **** protected:
  56:fltk-1.3.4-1/FL/Fl_Spinner.H **** #endif
  57:fltk-1.3.4-1/FL/Fl_Spinner.H ****   Fl_Input	input_;			// Input field for the value
  58:fltk-1.3.4-1/FL/Fl_Spinner.H ****   Fl_Repeat_Button
  59:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		up_button_,		// Up button
  60:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		down_button_;		// Down button
  61:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  62:fltk-1.3.4-1/FL/Fl_Spinner.H **** private:
  63:fltk-1.3.4-1/FL/Fl_Spinner.H ****   static void	sb_cb(Fl_Widget *w, Fl_Spinner *sb) {
  64:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  double v;		// New value
  65:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  66:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  if (w == &(sb->input_)) {
  67:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // Something changed in the input field...
  68:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    v = atof(sb->input_.value());
  69:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  70:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    if (v < sb->minimum_) {
  71:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      sb->value_ = sb->minimum_;
  72:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      sb->update();
  73:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    } else if (v > sb->maximum_) {
  74:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      sb->value_ = sb->maximum_;
  75:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      sb->update();
  76:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    } else sb->value_ = v;
  77:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  } else if (w == &(sb->up_button_)) {
  78:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // Up button pressed...
  79:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    v = sb->value_ + sb->step_;
  80:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  81:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    if (v > sb->maximum_) sb->value_ = sb->minimum_;
  82:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    else sb->value_ = v;
  83:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  84:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sb->update();
  85:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  } else if (w == &(sb->down_button_)) {
  86:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // Down button pressed...
  87:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    v = sb->value_ - sb->step_;
  88:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  89:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    if (v < sb->minimum_) sb->value_ = sb->maximum_;
  90:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    else sb->value_ = v;
  91:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  92:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sb->update();
  93:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  }
  94:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
  95:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  sb->set_changed();
  96:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  sb->do_callback();
  97:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		}
  98:fltk-1.3.4-1/FL/Fl_Spinner.H ****   void		update() {
 1249              		.loc 9 98 0
 1250              		.cfi_startproc
 1251              	.LVL143:
 1252 0000 55       		pushq	%rbp
 1253              		.cfi_def_cfa_offset 16
 1254              		.cfi_offset 6, -16
 1255 0001 53       		pushq	%rbx
 1256              		.cfi_def_cfa_offset 24
 1257              		.cfi_offset 3, -24
 1258 0002 4889FB   		movq	%rdi, %rbx
 1259 0005 4881EC58 		subq	$344, %rsp
 1259      010000
 1260              		.cfi_def_cfa_offset 368
 1261              	.LBB922:
  99:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  char s[255];		// Value string
 100:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 101:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  if (format_[0]=='%'&&format_[1]=='.'&&format_[2]=='*') {  // precision argument
 1262              		.loc 9 101 0
 1263 000c 488B8FC0 		movq	192(%rdi), %rcx
 1263      000000
 1264              	.LBE922:
  98:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  char s[255];		// Value string
 1265              		.loc 9 98 0
 1266 0013 64488B04 		movq	%fs:40, %rax
 1266      25280000 
 1266      00
 1267 001c 48898424 		movq	%rax, 328(%rsp)
 1267      48010000 
 1268 0024 31C0     		xorl	%eax, %eax
 1269              	.LBB933:
 1270              		.loc 9 101 0
 1271 0026 803925   		cmpb	$37, (%rcx)
 1272 0029 7455     		je	.L133
 1273              	.L111:
 1274              	.LVL144:
 1275              	.LBB923:
 1276              	.LBB924:
 1277              		.file 10 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 1278              		.loc 10 34 0
 1279 002b 488D6C24 		leaq	64(%rsp), %rbp
 1279      40
 1280              	.LVL145:
 1281 0030 F20F1083 		movsd	160(%rbx), %xmm0
 1281      A0000000 
 1282 0038 BAFF0000 		movl	$255, %edx
 1282      00
 1283 003d BE010000 		movl	$1, %esi
 1283      00
 1284 0042 B8010000 		movl	$1, %eax
 1284      00
 1285 0047 4889EF   		movq	%rbp, %rdi
 1286              	.LVL146:
 1287 004a E8000000 		call	__sprintf_chk
 1287      00
 1288              	.LVL147:
 1289              	.L121:
 1290              	.LBE924:
 1291              	.LBE923:
 1292              	.LBE933:
 102:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // this code block is a simplified version of
 103:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // Fl_Valuator::format() and works well (but looks ugly)
 104:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    int c = 0;
 105:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    char temp[64], *sp = temp;
 106:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sprintf(temp, "%.12f", step_);
 107:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    while (*sp) sp++;
 108:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sp--;
 109:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    while (sp>temp && *sp=='0') sp--;
 110:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    while (sp>temp && (*sp>='0' && *sp<='9')) { sp--; c++; }
 111:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sprintf(s, format_, c, value_);
 112:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  } else {
 113:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sprintf(s, format_, value_);
 114:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  }
 115:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  input_.value(s);
 1293              		.loc 9 115 0
 1294 004f 488DBBC8 		leaq	200(%rbx), %rdi
 1294      000000
 1295 0056 4889EE   		movq	%rbp, %rsi
 1296 0059 E8000000 		call	_ZN9Fl_Input_5valueEPKc
 1296      00
 1297              	.LVL148:
 116:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		}
 1298              		.loc 9 116 0
 1299 005e 488B8424 		movq	328(%rsp), %rax
 1299      48010000 
 1300 0066 64483304 		xorq	%fs:40, %rax
 1300      25280000 
 1300      00
 1301 006f 0F85DD00 		jne	.L134
 1301      0000
 1302 0075 4881C458 		addq	$344, %rsp
 1302      010000
 1303              		.cfi_remember_state
 1304              		.cfi_def_cfa_offset 24
 1305 007c 5B       		popq	%rbx
 1306              		.cfi_def_cfa_offset 16
 1307              	.LVL149:
 1308 007d 5D       		popq	%rbp
 1309              		.cfi_def_cfa_offset 8
 1310 007e C3       		ret
 1311              	.LVL150:
 1312 007f 90       		.p2align 4,,10
 1313              		.p2align 3
 1314              	.L133:
 1315              		.cfi_restore_state
 1316              	.LBB934:
 101:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // this code block is a simplified version of
 1317              		.loc 9 101 0 discriminator 1
 1318 0080 8079012E 		cmpb	$46, 1(%rcx)
 1319 0084 75A5     		jne	.L111
 101:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // this code block is a simplified version of
 1320              		.loc 9 101 0 is_stmt 0 discriminator 2
 1321 0086 8079022A 		cmpb	$42, 2(%rcx)
 1322 008a 759F     		jne	.L111
 1323              	.LVL151:
 1324              	.LBB925:
 1325              	.LBB926:
 1326              	.LBB927:
 1327              		.loc 10 34 0 is_stmt 1
 1328 008c F20F1087 		movsd	184(%rdi), %xmm0
 1328      B8000000 
 1329 0094 BA400000 		movl	$64, %edx
 1329      00
 1330 0099 B9000000 		movl	$.LC12, %ecx
 1330      00
 1331 009e BE010000 		movl	$1, %esi
 1331      00
 1332 00a3 4889E7   		movq	%rsp, %rdi
 1333 00a6 B8010000 		movl	$1, %eax
 1333      00
 1334 00ab E8000000 		call	__sprintf_chk
 1334      00
 1335              	.LVL152:
 1336              	.LBE927:
 1337              	.LBE926:
 107:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sp--;
 1338              		.loc 9 107 0
 1339 00b0 803C2400 		cmpb	$0, (%rsp)
 1340              	.LBB929:
 1341              	.LBB928:
 1342              		.loc 10 34 0
 1343 00b4 4889E5   		movq	%rsp, %rbp
 1344              	.LBE928:
 1345              	.LBE929:
 105:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sprintf(temp, "%.12f", step_);
 1346              		.loc 9 105 0
 1347 00b7 4889E2   		movq	%rsp, %rdx
 107:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sp--;
 1348              		.loc 9 107 0
 1349 00ba 740D     		je	.L112
 1350              	.LVL153:
 1351 00bc 0F1F4000 		.p2align 4,,10
 1352              		.p2align 3
 1353              	.L113:
 107:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sp--;
 1354              		.loc 9 107 0 is_stmt 0 discriminator 1
 1355 00c0 4883C201 		addq	$1, %rdx
 1356              	.LVL154:
 1357 00c4 803A00   		cmpb	$0, (%rdx)
 1358 00c7 75F7     		jne	.L113
 1359              	.L112:
 108:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    while (sp>temp && *sp=='0') sp--;
 1360              		.loc 9 108 0 is_stmt 1
 1361 00c9 488D42FF 		leaq	-1(%rdx), %rax
 1362              	.LVL155:
 109:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    while (sp>temp && (*sp>='0' && *sp<='9')) { sp--; c++; }
 1363              		.loc 9 109 0
 1364 00cd 4839E8   		cmpq	%rbp, %rax
 1365 00d0 761F     		jbe	.L127
 1366 00d2 0FB652FF 		movzbl	-1(%rdx), %edx
 1367 00d6 80FA30   		cmpb	$48, %dl
 1368 00d9 740D     		je	.L117
 1369 00db EB47     		jmp	.L115
 1370              	.LVL156:
 1371 00dd 0F1F00   		.p2align 4,,10
 1372              		.p2align 3
 1373              	.L129:
 109:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    while (sp>temp && (*sp>='0' && *sp<='9')) { sp--; c++; }
 1374              		.loc 9 109 0 is_stmt 0 discriminator 1
 1375 00e0 0FB610   		movzbl	(%rax), %edx
 1376 00e3 80FA30   		cmpb	$48, %dl
 1377 00e6 753C     		jne	.L115
 1378              	.L117:
 109:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    while (sp>temp && (*sp>='0' && *sp<='9')) { sp--; c++; }
 1379              		.loc 9 109 0 discriminator 2
 1380 00e8 4883E801 		subq	$1, %rax
 1381              	.LVL157:
 1382 00ec 4839E8   		cmpq	%rbp, %rax
 1383 00ef 75EF     		jne	.L129
 1384              	.L127:
 110:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sprintf(s, format_, c, value_);
 1385              		.loc 9 110 0 is_stmt 1
 1386 00f1 4531C0   		xorl	%r8d, %r8d
 1387              	.LVL158:
 1388              	.L114:
 1389              	.LBB930:
 1390              	.LBB931:
 1391              		.loc 10 34 0
 1392 00f4 488D6C24 		leaq	64(%rsp), %rbp
 1392      40
 1393              	.LVL159:
 1394 00f9 488B8BC0 		movq	192(%rbx), %rcx
 1394      000000
 1395 0100 BAFF0000 		movl	$255, %edx
 1395      00
 1396 0105 F20F1083 		movsd	160(%rbx), %xmm0
 1396      A0000000 
 1397 010d BE010000 		movl	$1, %esi
 1397      00
 1398 0112 4889EF   		movq	%rbp, %rdi
 1399 0115 B8010000 		movl	$1, %eax
 1399      00
 1400              	.LVL160:
 1401 011a E8000000 		call	__sprintf_chk
 1401      00
 1402              	.LVL161:
 1403              	.LBE931:
 1404              	.LBE930:
 1405              	.LBE925:
 111:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  } else {
 1406              		.loc 9 111 0
 1407 011f E92BFFFF 		jmp	.L121
 1407      FF
 1408              	.LVL162:
 1409              	.L115:
 1410              	.LBB932:
 110:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sprintf(s, format_, c, value_);
 1411              		.loc 9 110 0
 1412 0124 83EA30   		subl	$48, %edx
 1413 0127 80FA09   		cmpb	$9, %dl
 1414 012a 77C5     		ja	.L127
 1415 012c 4531C0   		xorl	%r8d, %r8d
 1416 012f EB12     		jmp	.L119
 1417              	.LVL163:
 1418              		.p2align 4,,10
 1419 0131 0F1F8000 		.p2align 3
 1419      000000
 1420              	.L120:
 110:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sprintf(s, format_, c, value_);
 1421              		.loc 9 110 0 is_stmt 0 discriminator 1
 1422 0138 0FB630   		movzbl	(%rax), %esi
 1423 013b 8D56D0   		leal	-48(%rsi), %edx
 1424 013e 80FA09   		cmpb	$9, %dl
 1425 0141 77B1     		ja	.L114
 1426              	.LVL164:
 1427              	.L119:
 110:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    sprintf(s, format_, c, value_);
 1428              		.loc 9 110 0 discriminator 2
 1429 0143 4883E801 		subq	$1, %rax
 1430              	.LVL165:
 1431 0147 4183C001 		addl	$1, %r8d
 1432              	.LVL166:
 1433 014b 4839E8   		cmpq	%rbp, %rax
 1434 014e 77E8     		ja	.L120
 1435 0150 EBA2     		jmp	.L114
 1436              	.LVL167:
 1437              	.L134:
 1438              	.LBE932:
 1439              	.LBE934:
 1440              		.loc 9 116 0 is_stmt 1
 1441 0152 E8000000 		call	__stack_chk_fail
 1441      00
 1442              	.LVL168:
 1443              		.cfi_endproc
 1444              	.LFE623:
 1446              		.section	.text.unlikely._ZN10Fl_Spinner6updateEv,"axG",@progbits,_ZN10Fl_Spinner6updateEv,comdat
 1447              	.LCOLDE13:
 1448              		.section	.text._ZN10Fl_Spinner6updateEv,"axG",@progbits,_ZN10Fl_Spinner6updateEv,comdat
 1449              	.LHOTE13:
 1450              		.section	.text.unlikely._ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_,"axG",@progbits,_ZN10Fl_Spinner5sb_cb
 1451              	.LCOLDB14:
 1452              		.section	.text._ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_,"axG",@progbits,_ZN10Fl_Spinner5sb_cbEP9Fl_Wid
 1453              	.LHOTB14:
 1454              		.p2align 4,,15
 1455              		.weak	_ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_
 1457              	_ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_:
 1458              	.LFB622:
  63:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  double v;		// New value
 1459              		.loc 9 63 0
 1460              		.cfi_startproc
 1461              	.LVL169:
  66:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // Something changed in the input field...
 1462              		.loc 9 66 0
 1463 0000 488D86C8 		leaq	200(%rsi), %rax
 1463      000000
  63:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  double v;		// New value
 1464              		.loc 9 63 0
 1465 0007 53       		pushq	%rbx
 1466              		.cfi_def_cfa_offset 16
 1467              		.cfi_offset 3, -16
  63:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  double v;		// New value
 1468              		.loc 9 63 0
 1469 0008 4889F3   		movq	%rsi, %rbx
  66:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // Something changed in the input field...
 1470              		.loc 9 66 0
 1471 000b 4839C7   		cmpq	%rax, %rdi
 1472 000e 0F84AC00 		je	.L158
 1472      0000
  77:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // Up button pressed...
 1473              		.loc 9 77 0
 1474 0014 488D8690 		leaq	400(%rsi), %rax
 1474      010000
 1475 001b 4839C7   		cmpq	%rax, %rdi
 1476 001e 7470     		je	.L159
  85:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    // Down button pressed...
 1477              		.loc 9 85 0
 1478 0020 488D8610 		leaq	528(%rsi), %rax
 1478      020000
 1479 0027 4839C7   		cmpq	%rax, %rdi
 1480 002a 741C     		je	.L160
 1481              	.LVL170:
 1482              	.L139:
 1483              	.LBB935:
 1484              	.LBB936:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1485              		.loc 1 786 0
 1486 002c 814B6080 		orl	$128, 96(%rbx)
 1486      000000
 1487              	.LVL171:
 1488              	.LBE936:
 1489              	.LBE935:
 1490              	.LBB937:
 1491              	.LBB938:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1492              		.loc 1 861 0
 1493 0033 488B5318 		movq	24(%rbx), %rdx
 1494 0037 4889DE   		movq	%rbx, %rsi
 1495 003a 4889DF   		movq	%rbx, %rdi
 1496              	.LBE938:
 1497              	.LBE937:
  97:fltk-1.3.4-1/FL/Fl_Spinner.H ****   void		update() {
 1498              		.loc 9 97 0
 1499 003d 5B       		popq	%rbx
 1500              		.cfi_remember_state
 1501              		.cfi_def_cfa_offset 8
 1502              	.LVL172:
 1503              	.LBB940:
 1504              	.LBB939:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1505              		.loc 1 861 0
 1506 003e E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 1506      00
 1507              	.LVL173:
 1508              		.p2align 4,,10
 1509 0043 0F1F4400 		.p2align 3
 1509      00
 1510              	.L160:
 1511              		.cfi_restore_state
 1512              	.LBE939:
 1513              	.LBE940:
  87:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 1514              		.loc 9 87 0
 1515 0048 F20F1086 		movsd	160(%rsi), %xmm0
 1515      A0000000 
  89:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    else sb->value_ = v;
 1516              		.loc 9 89 0
 1517 0050 F20F108E 		movsd	168(%rsi), %xmm1
 1517      A8000000 
  87:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 1518              		.loc 9 87 0
 1519 0058 F20F5C86 		subsd	184(%rsi), %xmm0
 1519      B8000000 
 1520              	.LVL174:
  89:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    else sb->value_ = v;
 1521              		.loc 9 89 0
 1522 0060 660F2EC8 		ucomisd	%xmm0, %xmm1
 1523 0064 761A     		jbe	.L154
  89:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    else sb->value_ = v;
 1524              		.loc 9 89 0 is_stmt 0 discriminator 1
 1525 0066 F20F1086 		movsd	176(%rsi), %xmm0
 1525      B0000000 
 1526              	.LVL175:
 1527 006e F20F1186 		movsd	%xmm0, 160(%rsi)
 1527      A0000000 
 1528              	.LVL176:
 1529              	.L145:
  84:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  } else if (w == &(sb->down_button_)) {
 1530              		.loc 9 84 0 is_stmt 1
 1531 0076 4889DF   		movq	%rbx, %rdi
 1532              	.LVL177:
 1533 0079 E8000000 		call	_ZN10Fl_Spinner6updateEv
 1533      00
 1534              	.LVL178:
 1535 007e EBAC     		jmp	.L139
 1536              	.LVL179:
 1537              		.p2align 4,,10
 1538              		.p2align 3
 1539              	.L154:
  82:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 1540              		.loc 9 82 0
 1541 0080 F20F1183 		movsd	%xmm0, 160(%rbx)
 1541      A0000000 
 1542 0088 EBEC     		jmp	.L145
 1543              	.LVL180:
 1544 008a 660F1F44 		.p2align 4,,10
 1544      0000
 1545              		.p2align 3
 1546              	.L159:
  79:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 1547              		.loc 9 79 0
 1548 0090 F20F1086 		movsd	160(%rsi), %xmm0
 1548      A0000000 
 1549 0098 F20F5886 		addsd	184(%rsi), %xmm0
 1549      B8000000 
 1550              	.LVL181:
  81:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    else sb->value_ = v;
 1551              		.loc 9 81 0
 1552 00a0 660F2E86 		ucomisd	176(%rsi), %xmm0
 1552      B0000000 
 1553 00a8 76D6     		jbe	.L154
  81:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    else sb->value_ = v;
 1554              		.loc 9 81 0 is_stmt 0 discriminator 1
 1555 00aa F20F1086 		movsd	168(%rsi), %xmm0
 1555      A8000000 
 1556              	.LVL182:
 1557 00b2 F20F1186 		movsd	%xmm0, 160(%rsi)
 1557      A0000000 
 1558              	.LVL183:
 1559 00ba EBBA     		jmp	.L145
 1560 00bc 0F1F4000 		.p2align 4,,10
 1561              		.p2align 3
 1562              	.L158:
 1563              	.LVL184:
 1564              	.LBB941:
 1565              	.LBB942:
 1566              		.file 11 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"
   1:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** /* Floating-point inline functions for stdlib.h.
   2:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    Copyright (C) 2012-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** #ifndef _STDLIB_H
  20:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** # error "Never use <bits/stdlib-float.h> directly; include <stdlib.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** #ifdef __USE_EXTERN_INLINES
  24:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** __BEGIN_NAMESPACE_STD
  25:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** __extern_inline double
  26:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** __NTH (atof (const char *__nptr))
  27:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** {
  28:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****   return strtod (__nptr, (char **) NULL);
 1567              		.loc 11 28 0 is_stmt 1
 1568 00c0 488BBE40 		movq	320(%rsi), %rdi
 1568      010000
 1569              	.LVL185:
 1570 00c7 31F6     		xorl	%esi, %esi
 1571 00c9 E8000000 		call	strtod
 1571      00
 1572              	.LVL186:
 1573              	.LBE942:
 1574              	.LBE941:
  70:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      sb->value_ = sb->minimum_;
 1575              		.loc 9 70 0
 1576 00ce F20F108B 		movsd	168(%rbx), %xmm1
 1576      A8000000 
 1577 00d6 660F2EC8 		ucomisd	%xmm0, %xmm1
 1578 00da 7724     		ja	.L157
  73:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      sb->value_ = sb->maximum_;
 1579              		.loc 9 73 0
 1580 00dc F20F108B 		movsd	176(%rbx), %xmm1
 1580      B0000000 
 1581 00e4 660F2EC1 		ucomisd	%xmm1, %xmm0
 1582 00e8 7716     		ja	.L157
  76:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  } else if (w == &(sb->up_button_)) {
 1583              		.loc 9 76 0
 1584 00ea F20F1183 		movsd	%xmm0, 160(%rbx)
 1584      A0000000 
 1585 00f2 E935FFFF 		jmp	.L139
 1585      FF
 1586 00f7 660F1F84 		.p2align 4,,10
 1586      00000000 
 1586      00
 1587              		.p2align 3
 1588              	.L157:
  74:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      sb->update();
 1589              		.loc 9 74 0
 1590 0100 F20F118B 		movsd	%xmm1, 160(%rbx)
 1590      A0000000 
  75:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    } else sb->value_ = v;
 1591              		.loc 9 75 0
 1592 0108 4889DF   		movq	%rbx, %rdi
 1593 010b E8000000 		call	_ZN10Fl_Spinner6updateEv
 1593      00
 1594              	.LVL187:
 1595 0110 E917FFFF 		jmp	.L139
 1595      FF
 1596              		.cfi_endproc
 1597              	.LFE622:
 1599              		.section	.text.unlikely._ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_,"axG",@progbits,_ZN10Fl_Spinner5sb_cb
 1600              	.LCOLDE14:
 1601              		.section	.text._ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_,"axG",@progbits,_ZN10Fl_Spinner5sb_cbEP9Fl_Wid
 1602              	.LHOTE14:
 1603              		.section	.text.unlikely._ZNK8Fl_Group5arrayEv,"ax",@progbits
 1604              		.align 2
 1605              	.LCOLDB15:
 1606              		.section	.text._ZNK8Fl_Group5arrayEv,"ax",@progbits
 1607              	.LHOTB15:
 1608              		.align 2
 1609              		.p2align 4,,15
 1610              		.globl	_ZNK8Fl_Group5arrayEv
 1612              	_ZNK8Fl_Group5arrayEv:
 1613              	.LFB651:
  44:fltk-1.3.4-1/src/Fl_Group.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 1614              		.loc 3 44 0
 1615              		.cfi_startproc
 1616              	.LVL188:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 1617              		.loc 3 45 0
 1618 0000 83BF9000 		cmpl	$1, 144(%rdi)
 1618      000001
 1619 0007 7E07     		jle	.L164
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 1620              		.loc 3 45 0 is_stmt 0 discriminator 2
 1621 0009 488B4778 		movq	120(%rdi), %rax
  46:fltk-1.3.4-1/src/Fl_Group.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 1622              		.loc 3 46 0 is_stmt 1 discriminator 2
 1623 000d C3       		ret
 1624 000e 6690     		.p2align 4,,10
 1625              		.p2align 3
 1626              	.L164:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 1627              		.loc 3 45 0 discriminator 1
 1628 0010 488D4778 		leaq	120(%rdi), %rax
 1629 0014 C3       		ret
 1630              		.cfi_endproc
 1631              	.LFE651:
 1633              		.section	.text.unlikely._ZNK8Fl_Group5arrayEv
 1634              	.LCOLDE15:
 1635              		.section	.text._ZNK8Fl_Group5arrayEv
 1636              	.LHOTE15:
 1637              		.section	.text.unlikely._ZNK8Fl_Group4findEPK9Fl_Widget,"ax",@progbits
 1638              		.align 2
 1639              	.LCOLDB16:
 1640              		.section	.text._ZNK8Fl_Group4findEPK9Fl_Widget,"ax",@progbits
 1641              	.LHOTB16:
 1642              		.align 2
 1643              		.p2align 4,,15
 1644              		.globl	_ZNK8Fl_Group4findEPK9Fl_Widget
 1646              	_ZNK8Fl_Group4findEPK9Fl_Widget:
 1647              	.LFB652:
  52:fltk-1.3.4-1/src/Fl_Group.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 1648              		.loc 3 52 0
 1649              		.cfi_startproc
 1650              	.LVL189:
 1651              	.LBB943:
 1652              	.LBB944:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 1653              		.loc 3 45 0
 1654 0000 8B879000 		movl	144(%rdi), %eax
 1654      0000
 1655 0006 83F801   		cmpl	$1, %eax
 1656 0009 7E35     		jle	.L174
 1657 000b 488B7F78 		movq	120(%rdi), %rdi
 1658              	.LVL190:
 1659              	.L168:
 1660              	.LBE944:
 1661              	.LBE943:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1662              		.loc 3 54 0
 1663 000f 483B37   		cmpq	(%rdi), %rsi
 1664 0012 488D5708 		leaq	8(%rdi), %rdx
 1665              	.LVL191:
 1666 0016 7430     		je	.L172
 1667 0018 31C9     		xorl	%ecx, %ecx
 1668 001a EB0E     		jmp	.L169
 1669              	.LVL192:
 1670 001c 0F1F4000 		.p2align 4,,10
 1671              		.p2align 3
 1672              	.L170:
 1673 0020 4883C208 		addq	$8, %rdx
 1674              	.LVL193:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1675              		.loc 3 54 0 is_stmt 0 discriminator 2
 1676 0024 483972F8 		cmpq	%rsi, -8(%rdx)
 1677 0028 740E     		je	.L173
 1678              	.LVL194:
 1679              	.L169:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1680              		.loc 3 54 0 discriminator 3
 1681 002a 83C101   		addl	$1, %ecx
 1682              	.LVL195:
 1683 002d 39C8     		cmpl	%ecx, %eax
 1684 002f 75EF     		jne	.L170
 1685 0031 F3C3     		rep ret
 1686              		.p2align 4,,10
 1687 0033 0F1F4400 		.p2align 3
 1687      00
 1688              	.L173:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1689              		.loc 3 54 0
 1690 0038 89C8     		movl	%ecx, %eax
  56:fltk-1.3.4-1/src/Fl_Group.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1691              		.loc 3 56 0 is_stmt 1
 1692 003a C3       		ret
 1693              	.LVL196:
 1694 003b 0F1F4400 		.p2align 4,,10
 1694      00
 1695              		.p2align 3
 1696              	.L174:
 1697              	.LBB946:
 1698              	.LBB945:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 1699              		.loc 3 45 0
 1700 0040 4883C778 		addq	$120, %rdi
 1701              	.LVL197:
 1702              	.LBE945:
 1703              	.LBE946:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1704              		.loc 3 54 0
 1705 0044 85C0     		testl	%eax, %eax
 1706 0046 7FC7     		jg	.L168
 1707              	.LVL198:
 1708              	.L172:
 1709 0048 31C0     		xorl	%eax, %eax
 1710 004a C3       		ret
 1711              		.cfi_endproc
 1712              	.LFE652:
 1714              		.section	.text.unlikely._ZNK8Fl_Group4findEPK9Fl_Widget
 1715              	.LCOLDE16:
 1716              		.section	.text._ZNK8Fl_Group4findEPK9Fl_Widget
 1717              	.LHOTE16:
 1718              		.section	.text.unlikely._ZN8Fl_Group5beginEv,"ax",@progbits
 1719              		.align 2
 1720              	.LCOLDB17:
 1721              		.section	.text._ZN8Fl_Group5beginEv,"ax",@progbits
 1722              	.LHOTB17:
 1723              		.align 2
 1724              		.p2align 4,,15
 1725              		.globl	_ZN8Fl_Group5beginEv
 1727              	_ZN8Fl_Group5beginEv:
 1728              	.LFB747:
 1729              		.cfi_startproc
 1730 0000 48893D00 		movq	%rdi, _ZN8Fl_Group8current_E(%rip)
 1730      000000
 1731 0007 C3       		ret
 1732              		.cfi_endproc
 1733              	.LFE747:
 1735              		.section	.text.unlikely._ZN8Fl_Group5beginEv
 1736              	.LCOLDE17:
 1737              		.section	.text._ZN8Fl_Group5beginEv
 1738              	.LHOTE17:
 1739              		.section	.text.unlikely._ZN8Fl_Group3endEv,"ax",@progbits
 1740              		.align 2
 1741              	.LCOLDB18:
 1742              		.section	.text._ZN8Fl_Group3endEv,"ax",@progbits
 1743              	.LHOTB18:
 1744              		.align 2
 1745              		.p2align 4,,15
 1746              		.globl	_ZN8Fl_Group3endEv
 1748              	_ZN8Fl_Group3endEv:
 1749              	.LFB654:
  75:fltk-1.3.4-1/src/Fl_Group.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 1750              		.loc 3 75 0
 1751              		.cfi_startproc
 1752              	.LVL199:
  75:fltk-1.3.4-1/src/Fl_Group.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 1753              		.loc 3 75 0
 1754 0000 488B4708 		movq	8(%rdi), %rax
 1755 0004 48890500 		movq	%rax, _ZN8Fl_Group8current_E(%rip)
 1755      000000
 1756 000b C3       		ret
 1757              		.cfi_endproc
 1758              	.LFE654:
 1760              		.section	.text.unlikely._ZN8Fl_Group3endEv
 1761              	.LCOLDE18:
 1762              		.section	.text._ZN8Fl_Group3endEv
 1763              	.LHOTE18:
 1764              		.section	.text.unlikely._ZN8Fl_Group7currentEv,"ax",@progbits
 1765              		.align 2
 1766              	.LCOLDB19:
 1767              		.section	.text._ZN8Fl_Group7currentEv,"ax",@progbits
 1768              	.LHOTB19:
 1769              		.align 2
 1770              		.p2align 4,,15
 1771              		.globl	_ZN8Fl_Group7currentEv
 1773              	_ZN8Fl_Group7currentEv:
 1774              	.LFB655:
  84:fltk-1.3.4-1/src/Fl_Group.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 1775              		.loc 3 84 0
 1776              		.cfi_startproc
  84:fltk-1.3.4-1/src/Fl_Group.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 1777              		.loc 3 84 0
 1778 0000 488B0500 		movq	_ZN8Fl_Group8current_E(%rip), %rax
 1778      000000
 1779 0007 C3       		ret
 1780              		.cfi_endproc
 1781              	.LFE655:
 1783              		.section	.text.unlikely._ZN8Fl_Group7currentEv
 1784              	.LCOLDE19:
 1785              		.section	.text._ZN8Fl_Group7currentEv
 1786              	.LHOTE19:
 1787              		.section	.text.unlikely._ZN8Fl_Group7currentEPS_,"ax",@progbits
 1788              		.align 2
 1789              	.LCOLDB20:
 1790              		.section	.text._ZN8Fl_Group7currentEPS_,"ax",@progbits
 1791              	.LHOTB20:
 1792              		.align 2
 1793              		.p2align 4,,15
 1794              		.globl	_ZN8Fl_Group7currentEPS_
 1796              	_ZN8Fl_Group7currentEPS_:
 1797              	.LFB656:
  90:fltk-1.3.4-1/src/Fl_Group.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 1798              		.loc 3 90 0
 1799              		.cfi_startproc
 1800              	.LVL200:
  90:fltk-1.3.4-1/src/Fl_Group.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 1801              		.loc 3 90 0
 1802 0000 48893D00 		movq	%rdi, _ZN8Fl_Group8current_E(%rip)
 1802      000000
 1803 0007 C3       		ret
 1804              		.cfi_endproc
 1805              	.LFE656:
 1807              		.section	.text.unlikely._ZN8Fl_Group7currentEPS_
 1808              	.LCOLDE20:
 1809              		.section	.text._ZN8Fl_Group7currentEPS_
 1810              	.LHOTE20:
 1811              		.section	.text.unlikely._ZN8Fl_Group10navigationEi,"ax",@progbits
 1812              		.align 2
 1813              	.LCOLDB21:
 1814              		.section	.text._ZN8Fl_Group10navigationEi,"ax",@progbits
 1815              	.LHOTB21:
 1816              		.align 2
 1817              		.p2align 4,,15
 1818              		.globl	_ZN8Fl_Group10navigationEi
 1820              	_ZN8Fl_Group10navigationEi:
 1821              	.LFB660:
 318:fltk-1.3.4-1/src/Fl_Group.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1822              		.loc 3 318 0
 1823              		.cfi_startproc
 1824              	.LVL201:
 322:fltk-1.3.4-1/src/Fl_Group.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 1825              		.loc 3 322 0
 1826 0000 83BF9000 		cmpl	$1, 144(%rdi)
 1826      000001
 1827 0007 0F8E2401 		jle	.L209
 1827      0000
 318:fltk-1.3.4-1/src/Fl_Group.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1828              		.loc 3 318 0
 1829 000d 4155     		pushq	%r13
 1830              		.cfi_def_cfa_offset 16
 1831              		.cfi_offset 13, -16
 1832 000f 4154     		pushq	%r12
 1833              		.cfi_def_cfa_offset 24
 1834              		.cfi_offset 12, -24
 1835 0011 4189F5   		movl	%esi, %r13d
 1836 0014 55       		pushq	%rbp
 1837              		.cfi_def_cfa_offset 32
 1838              		.cfi_offset 6, -32
 1839 0015 53       		pushq	%rbx
 1840              		.cfi_def_cfa_offset 40
 1841              		.cfi_offset 3, -40
 1842 0016 4989FC   		movq	%rdi, %r12
 1843 0019 31ED     		xorl	%ebp, %ebp
 1844 001b 31DB     		xorl	%ebx, %ebx
 1845 001d 4883EC08 		subq	$8, %rsp
 1846              		.cfi_def_cfa_offset 48
 1847 0021 EB1A     		jmp	.L201
 1848              	.LVL202:
 1849              		.p2align 4,,10
 1850 0023 0F1F4400 		.p2align 3
 1850      00
 1851              	.L210:
 321:fltk-1.3.4-1/src/Fl_Group.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 1852              		.loc 3 321 0
 1853 0028 83C301   		addl	$1, %ebx
 1854              	.LVL203:
 1855 002b 4883C508 		addq	$8, %rbp
 322:fltk-1.3.4-1/src/Fl_Group.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 1856              		.loc 3 322 0
 1857 002f 41399C24 		cmpl	%ebx, 144(%r12)
 1857      90000000 
 1858 0037 0F8EA300 		jle	.L194
 1858      0000
 1859              	.LVL204:
 1860              	.L201:
 323:fltk-1.3.4-1/src/Fl_Group.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 1861              		.loc 3 323 0
 1862 003d 498B4424 		movq	120(%r12), %rax
 1862      78
 1863 0042 488B3500 		movq	_ZN2Fl6focus_E(%rip), %rsi
 1863      000000
 1864 0049 488B3C28 		movq	(%rax,%rbp), %rdi
 1865 004d E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 1865      00
 1866              	.LVL205:
 1867 0052 85C0     		testl	%eax, %eax
 1868 0054 74D2     		je	.L210
 325:fltk-1.3.4-1/src/Fl_Group.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 1869              		.loc 3 325 0
 1870 0056 498B4424 		movq	120(%r12), %rax
 1870      78
 1871 005b 488B2C28 		movq	(%rax,%rbp), %rbp
 1872              	.LVL206:
 1873              	.L185:
 1874              	.LBB947:
 328:fltk-1.3.4-1/src/Fl_Group.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1875              		.loc 3 328 0
 1876 005f 4181FD51 		cmpl	$65361, %r13d
 1876      FF0000
 1877 0066 7C78     		jl	.L194
 1878 0068 4181FD52 		cmpl	$65362, %r13d
 1878      FF0000
 1879 006f 7E7F     		jle	.L186
 1880 0071 4181FD54 		cmpl	$65364, %r13d
 1880      FF0000
 1881 0078 7F66     		jg	.L194
 331:fltk-1.3.4-1/src/Fl_Group.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1882              		.loc 3 331 0
 1883 007a 83C301   		addl	$1, %ebx
 1884              	.LVL207:
 332:fltk-1.3.4-1/src/Fl_Group.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 1885              		.loc 3 332 0
 1886 007d 413B9C24 		cmpl	144(%r12), %ebx
 1886      90000000 
 1887 0085 0F8D9500 		jge	.L211
 1887      0000
 1888              	.LVL208:
 1889              	.L208:
 1890 008b 4863C3   		movslq	%ebx, %rax
 1891 008e 48C1E003 		salq	$3, %rax
 1892              	.LVL209:
 1893              	.L189:
 348:fltk-1.3.4-1/src/Fl_Group.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 1894              		.loc 3 348 0
 1895 0092 498B5424 		movq	120(%r12), %rdx
 1895      78
 1896 0097 488B3C02 		movq	(%rdx,%rax), %rdi
 1897              	.LVL210:
 349:fltk-1.3.4-1/src/Fl_Group.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1898              		.loc 3 349 0
 1899 009b 4839FD   		cmpq	%rdi, %rbp
 1900 009e 7440     		je	.L194
 350:fltk-1.3.4-1/src/Fl_Group.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 1901              		.loc 3 350 0
 1902 00a0 4181FD52 		cmpl	$65362, %r13d
 1902      FF0000
 1903 00a7 7409     		je	.L192
 1904 00a9 4181FD54 		cmpl	$65364, %r13d
 1904      FF0000
 1905 00b0 7516     		jne	.L191
 1906              	.L192:
 1907 00b2 8B5520   		movl	32(%rbp), %edx
 354:fltk-1.3.4-1/src/Fl_Group.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 1908              		.loc 3 354 0
 1909 00b5 8B4D28   		movl	40(%rbp), %ecx
 1910 00b8 8B4720   		movl	32(%rdi), %eax
 1911              	.LVL211:
 1912 00bb 01D1     		addl	%edx, %ecx
 1913 00bd 39C1     		cmpl	%eax, %ecx
 1914 00bf 7E9E     		jle	.L185
 1915              	.LVL212:
 354:fltk-1.3.4-1/src/Fl_Group.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 1916              		.loc 3 354 0 is_stmt 0 discriminator 2
 1917 00c1 034728   		addl	40(%rdi), %eax
 1918 00c4 39D0     		cmpl	%edx, %eax
 1919 00c6 7E97     		jle	.L185
 1920              	.LVL213:
 1921              	.L191:
 357:fltk-1.3.4-1/src/Fl_Group.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 1922              		.loc 3 357 0 is_stmt 1
 1923 00c8 E8000000 		call	_ZN9Fl_Widget10take_focusEv
 1923      00
 1924              	.LVL214:
 1925 00cd 85C0     		testl	%eax, %eax
 1926 00cf 748E     		je	.L185
 1927 00d1 B8010000 		movl	$1, %eax
 1927      00
 1928 00d6 EB0A     		jmp	.L181
 1929              	.LVL215:
 1930 00d8 0F1F8400 		.p2align 4,,10
 1930      00000000 
 1931              		.p2align 3
 1932              	.L194:
 346:fltk-1.3.4-1/src/Fl_Group.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 1933              		.loc 3 346 0
 1934 00e0 31C0     		xorl	%eax, %eax
 1935              	.L181:
 1936              	.LBE947:
 359:fltk-1.3.4-1/src/Fl_Group.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 1937              		.loc 3 359 0
 1938 00e2 4883C408 		addq	$8, %rsp
 1939              		.cfi_remember_state
 1940              		.cfi_def_cfa_offset 40
 1941 00e6 5B       		popq	%rbx
 1942              		.cfi_restore 3
 1943              		.cfi_def_cfa_offset 32
 1944              	.LVL216:
 1945 00e7 5D       		popq	%rbp
 1946              		.cfi_restore 6
 1947              		.cfi_def_cfa_offset 24
 1948 00e8 415C     		popq	%r12
 1949              		.cfi_restore 12
 1950              		.cfi_def_cfa_offset 16
 1951              	.LVL217:
 1952 00ea 415D     		popq	%r13
 1953              		.cfi_restore 13
 1954              		.cfi_def_cfa_offset 8
 1955              	.LVL218:
 1956 00ec C3       		ret
 1957              	.LVL219:
 1958 00ed 0F1F00   		.p2align 4,,10
 1959              		.p2align 3
 1960              	.L186:
 1961              		.cfi_restore_state
 1962              	.LBB948:
 339:fltk-1.3.4-1/src/Fl_Group.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 1963              		.loc 3 339 0
 1964 00f0 85DB     		testl	%ebx, %ebx
 1965 00f2 751C     		jne	.L212
 1966              	.LVL220:
 341:fltk-1.3.4-1/src/Fl_Group.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 1967              		.loc 3 341 0
 1968 00f4 49837C24 		cmpq	$0, 8(%r12)
 1968      0800
 1969 00fa 75E4     		jne	.L194
 342:fltk-1.3.4-1/src/Fl_Group.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1970              		.loc 3 342 0
 1971 00fc 418B8424 		movl	144(%r12), %eax
 1971      90000000 
 1972 0104 8D58FF   		leal	-1(%rax), %ebx
 1973              	.LVL221:
 1974 0107 EB82     		jmp	.L208
 1975              	.LVL222:
 1976 0109 0F1F8000 		.p2align 4,,10
 1976      000000
 1977              		.p2align 3
 1978              	.L212:
 339:fltk-1.3.4-1/src/Fl_Group.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 1979              		.loc 3 339 0 discriminator 1
 1980 0110 83EB01   		subl	$1, %ebx
 1981              	.LVL223:
 1982 0113 4863C3   		movslq	%ebx, %rax
 1983 0116 48C1E003 		salq	$3, %rax
 1984 011a E973FFFF 		jmp	.L189
 1984      FF
 1985 011f 90       		.p2align 4,,10
 1986              		.p2align 3
 1987              	.L211:
 1988              	.LVL224:
 333:fltk-1.3.4-1/src/Fl_Group.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 1989              		.loc 3 333 0
 1990 0120 49837C24 		cmpq	$0, 8(%r12)
 1990      0800
 1991 0126 75B8     		jne	.L194
 1992 0128 31C0     		xorl	%eax, %eax
 334:fltk-1.3.4-1/src/Fl_Group.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 1993              		.loc 3 334 0
 1994 012a 31DB     		xorl	%ebx, %ebx
 1995              	.LVL225:
 1996 012c E961FFFF 		jmp	.L189
 1996      FF
 1997              	.LVL226:
 1998              	.L209:
 1999              		.cfi_def_cfa_offset 8
 2000              		.cfi_restore 3
 2001              		.cfi_restore 6
 2002              		.cfi_restore 12
 2003              		.cfi_restore 13
 2004              	.LBE948:
 319:fltk-1.3.4-1/src/Fl_Group.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 2005              		.loc 3 319 0
 2006 0131 31C0     		xorl	%eax, %eax
 359:fltk-1.3.4-1/src/Fl_Group.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 2007              		.loc 3 359 0
 2008 0133 C3       		ret
 2009              		.cfi_endproc
 2010              	.LFE660:
 2012              		.section	.text.unlikely._ZN8Fl_Group10navigationEi
 2013              	.LCOLDE21:
 2014              		.section	.text._ZN8Fl_Group10navigationEi
 2015              	.LHOTE21:
 2016              		.section	.text.unlikely._ZN8Fl_Group6handleEi,"ax",@progbits
 2017              		.align 2
 2018              	.LCOLDB22:
 2019              		.section	.text._ZN8Fl_Group6handleEi,"ax",@progbits
 2020              	.LHOTB22:
 2021              		.align 2
 2022              		.p2align 4,,15
 2023              		.globl	_ZN8Fl_Group6handleEi
 2025              	_ZN8Fl_Group6handleEi:
 2026              	.LFB659:
 147:fltk-1.3.4-1/src/Fl_Group.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2027              		.loc 3 147 0
 2028              		.cfi_startproc
 2029              	.LVL227:
 2030 0000 4157     		pushq	%r15
 2031              		.cfi_def_cfa_offset 16
 2032              		.cfi_offset 15, -16
 2033 0002 4156     		pushq	%r14
 2034              		.cfi_def_cfa_offset 24
 2035              		.cfi_offset 14, -24
 2036 0004 4155     		pushq	%r13
 2037              		.cfi_def_cfa_offset 32
 2038              		.cfi_offset 13, -32
 2039 0006 4154     		pushq	%r12
 2040              		.cfi_def_cfa_offset 40
 2041              		.cfi_offset 12, -40
 2042 0008 4189F5   		movl	%esi, %r13d
 2043 000b 55       		pushq	%rbp
 2044              		.cfi_def_cfa_offset 48
 2045              		.cfi_offset 6, -48
 2046 000c 53       		pushq	%rbx
 2047              		.cfi_def_cfa_offset 56
 2048              		.cfi_offset 3, -56
 2049 000d 4989FC   		movq	%rdi, %r12
 2050              	.LBB949:
 2051              	.LBB950:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 2052              		.loc 3 45 0
 2053 0010 488D5F78 		leaq	120(%rdi), %rbx
 2054              	.LBE950:
 2055              	.LBE949:
 147:fltk-1.3.4-1/src/Fl_Group.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2056              		.loc 3 147 0
 2057 0014 4883EC18 		subq	$24, %rsp
 2058              		.cfi_def_cfa_offset 80
 2059              	.LBB953:
 2060              	.LBB951:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 2061              		.loc 3 45 0
 2062 0018 8B8F9000 		movl	144(%rdi), %ecx
 2062      0000
 2063              	.LBE951:
 2064              	.LBE953:
 147:fltk-1.3.4-1/src/Fl_Group.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2065              		.loc 3 147 0
 2066 001e 64488B04 		movq	%fs:40, %rax
 2066      25280000 
 2066      00
 2067 0027 48894424 		movq	%rax, 8(%rsp)
 2067      08
 2068 002c 31C0     		xorl	%eax, %eax
 2069              	.LVL228:
 2070              	.LBB954:
 2071              	.LBB952:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 2072              		.loc 3 45 0
 2073 002e 83F901   		cmpl	$1, %ecx
 2074 0031 7E04     		jle	.L215
 2075 0033 488B5F78 		movq	120(%rdi), %rbx
 2076              	.L215:
 2077              	.LVL229:
 2078              	.LBE952:
 2079              	.LBE954:
 2080              	.LBB955:
 153:fltk-1.3.4-1/src/Fl_Group.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2081              		.loc 3 153 0
 2082 0037 4183FD15 		cmpl	$21, %r13d
 2083 003b 0F876703 		ja	.L216
 2083      0000
 2084 0041 4489E8   		movl	%r13d, %eax
 2085 0044 FF24C500 		jmp	*.L218(,%rax,8)
 2085      000000
 2086              		.section	.rodata._ZN8Fl_Group6handleEi,"a",@progbits
 2087              		.align 8
 2088              		.align 4
 2089              	.L218:
 2090 0000 00000000 		.quad	.L216
 2090      00000000 
 2091 0008 00000000 		.quad	.L217
 2091      00000000 
 2092 0010 00000000 		.quad	.L219
 2092      00000000 
 2093 0018 00000000 		.quad	.L220
 2093      00000000 
 2094 0020 00000000 		.quad	.L216
 2094      00000000 
 2095 0028 00000000 		.quad	.L219
 2095      00000000 
 2096 0030 00000000 		.quad	.L221
 2096      00000000 
 2097 0038 00000000 		.quad	.L222
 2097      00000000 
 2098 0040 00000000 		.quad	.L223
 2098      00000000 
 2099 0048 00000000 		.quad	.L216
 2099      00000000 
 2100 0050 00000000 		.quad	.L216
 2100      00000000 
 2101 0058 00000000 		.quad	.L220
 2101      00000000 
 2102 0060 00000000 		.quad	.L224
 2102      00000000 
 2103 0068 00000000 		.quad	.L225
 2103      00000000 
 2104 0070 00000000 		.quad	.L225
 2104      00000000 
 2105 0078 00000000 		.quad	.L226
 2105      00000000 
 2106 0080 00000000 		.quad	.L226
 2106      00000000 
 2107 0088 00000000 		.quad	.L216
 2107      00000000 
 2108 0090 00000000 		.quad	.L216
 2108      00000000 
 2109 0098 00000000 		.quad	.L227
 2109      00000000 
 2110 00a0 00000000 		.quad	.L228
 2110      00000000 
 2111 00a8 00000000 		.quad	.L228
 2111      00000000 
 2112              		.section	.text._ZN8Fl_Group6handleEi
 2113 004b 0F1F4400 		.p2align 4,,10
 2113      00
 2114              		.p2align 3
 2115              	.L228:
 2116 0050 4863C1   		movslq	%ecx, %rax
 2117 0053 89C9     		movl	%ecx, %ecx
 2118 0055 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2119 0059 4829C8   		subq	%rcx, %rax
 2120 005c 4C8D2CC3 		leaq	(%rbx,%rax,8), %r13
 2121 0060 EB0A     		jmp	.L229
 2122              	.LVL230:
 2123              		.p2align 4,,10
 2124 0062 660F1F44 		.p2align 3
 2124      0000
 2125              	.L260:
 2126 0068 4883ED08 		subq	$8, %rbp
 2127              	.LVL231:
 2128              	.L229:
 2129              	.LBB956:
 209:fltk-1.3.4-1/src/Fl_Group.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 2130              		.loc 3 209 0 discriminator 1
 2131 006c 4C39ED   		cmpq	%r13, %rbp
 2132 006f 0F840304 		je	.L257
 2132      0000
 210:fltk-1.3.4-1/src/Fl_Group.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 2133              		.loc 3 210 0
 2134 0075 488B5DF8 		movq	-8(%rbp), %rbx
 2135              	.LVL232:
 211:fltk-1.3.4-1/src/Fl_Group.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2136              		.loc 3 211 0
 2137 0079 F6436007 		testb	$7, 96(%rbx)
 2138 007d 75E9     		jne	.L260
 211:fltk-1.3.4-1/src/Fl_Group.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2139              		.loc 3 211 0 is_stmt 0 discriminator 1
 2140 007f 4889DF   		movq	%rbx, %rdi
 2141 0082 E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 2141      00
 2142              	.LVL233:
 2143 0087 85C0     		testl	%eax, %eax
 2144 0089 74DD     		je	.L260
 212:fltk-1.3.4-1/src/Fl_Group.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 2145              		.loc 3 212 0 is_stmt 1
 2146 008b 488B3500 		movq	_ZN2Fl11belowmouse_E(%rip), %rsi
 2146      000000
 2147 0092 4889DF   		movq	%rbx, %rdi
 2148 0095 E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 2148      00
 2149              	.LVL234:
 2150 009a 85C0     		testl	%eax, %eax
 2151 009c 0F85EF05 		jne	.L336
 2151      0000
 214:fltk-1.3.4-1/src/Fl_Group.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2152              		.loc 3 214 0
 2153 00a2 BE140000 		movl	$20, %esi
 2153      00
 2154 00a7 4889DF   		movq	%rbx, %rdi
 2155 00aa E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2155      00
 2156              	.LVL235:
 2157 00af 85C0     		testl	%eax, %eax
 2158 00b1 74B5     		je	.L260
 215:fltk-1.3.4-1/src/Fl_Group.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 2159              		.loc 3 215 0
 2160 00b3 488B3500 		movq	_ZN2Fl11belowmouse_E(%rip), %rsi
 2160      000000
 2161 00ba 4889DF   		movq	%rbx, %rdi
 2162 00bd E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 2162      00
 2163              	.LVL236:
 2164 00c2 85C0     		testl	%eax, %eax
 2165 00c4 750A     		jne	.L327
 215:fltk-1.3.4-1/src/Fl_Group.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 2166              		.loc 3 215 0 is_stmt 0 discriminator 1
 2167 00c6 4889DF   		movq	%rbx, %rdi
 2168 00c9 E8000000 		call	_ZN2Fl10belowmouseEP9Fl_Widget
 2168      00
 2169              	.LVL237:
 2170 00ce 6690     		.p2align 4,,10
 2171              		.p2align 3
 2172              	.L327:
 216:fltk-1.3.4-1/src/Fl_Group.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2173              		.loc 3 216 0 is_stmt 1 discriminator 1
 2174 00d0 B8010000 		movl	$1, %eax
 2174      00
 2175 00d5 E9580100 		jmp	.L243
 2175      00
 2176              	.LVL238:
 2177 00da 660F1F44 		.p2align 4,,10
 2177      0000
 2178              		.p2align 3
 2179              	.L217:
 2180 00e0 4863C1   		movslq	%ecx, %rax
 2181 00e3 89C9     		movl	%ecx, %ecx
 2182 00e5 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2183 00e9 4829C8   		subq	%rcx, %rax
 2184 00ec 4C8D24C3 		leaq	(%rbx,%rax,8), %r12
 2185 00f0 EB0A     		jmp	.L235
 2186              	.LVL239:
 2187              		.p2align 4,,10
 2188 00f2 660F1F44 		.p2align 3
 2188      0000
 2189              	.L265:
 2190 00f8 4883ED08 		subq	$8, %rbp
 2191              	.LVL240:
 2192              	.L235:
 2193              	.LBB957:
 224:fltk-1.3.4-1/src/Fl_Group.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 2194              		.loc 3 224 0 discriminator 1
 2195 00fc 4C39E5   		cmpq	%r12, %rbp
 2196 00ff 0F842B01 		je	.L328
 2196      0000
 2197              	.LBB958:
 225:fltk-1.3.4-1/src/Fl_Group.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2198              		.loc 3 225 0
 2199 0105 488B5DF8 		movq	-8(%rbp), %rbx
 2200              	.LVL241:
 2201              	.LBB959:
 226:fltk-1.3.4-1/src/Fl_Group.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 2202              		.loc 3 226 0
 2203 0109 F6436007 		testb	$7, 96(%rbx)
 2204 010d 75E9     		jne	.L265
 226:fltk-1.3.4-1/src/Fl_Group.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 2205              		.loc 3 226 0 is_stmt 0 discriminator 1
 2206 010f 4889DF   		movq	%rbx, %rdi
 2207 0112 E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 2207      00
 2208              	.LVL242:
 2209 0117 85C0     		testl	%eax, %eax
 2210 0119 74DD     		je	.L265
 2211              	.LBB960:
 227:fltk-1.3.4-1/src/Fl_Group.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 2212              		.loc 3 227 0 is_stmt 1
 2213 011b 4889DE   		movq	%rbx, %rsi
 2214 011e 4889E7   		movq	%rsp, %rdi
 2215 0121 E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 2215      00
 2216              	.LVL243:
 228:fltk-1.3.4-1/src/Fl_Group.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 2217              		.loc 3 228 0
 2218 0126 BE010000 		movl	$1, %esi
 2218      00
 2219 012b 4889DF   		movq	%rbx, %rdi
 2220 012e E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2220      00
 2221              	.LVL244:
 2222 0133 85C0     		testl	%eax, %eax
 2223 0135 0F851D05 		jne	.L337
 2223      0000
 227:fltk-1.3.4-1/src/Fl_Group.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 2224              		.loc 3 227 0
 2225 013b 4889E7   		movq	%rsp, %rdi
 2226 013e E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 2226      00
 2227              	.LVL245:
 2228 0143 EBB3     		jmp	.L265
 2229              	.LVL246:
 2230              		.p2align 4,,10
 2231 0145 0F1F00   		.p2align 3
 2232              	.L219:
 2233              	.LBE960:
 2234              	.LBE959:
 2235              	.LBE958:
 2236              	.LBE957:
 2237              	.LBB966:
 2238              	.LBB967:
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
 2239              		.loc 4 835 0
 2240 0148 488B3D00 		movq	_ZN2Fl7pushed_E(%rip), %rdi
 2240      000000
 2241              	.LVL247:
 2242              	.LBE967:
 2243              	.LBE966:
 239:fltk-1.3.4-1/src/Fl_Group.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 2244              		.loc 3 239 0
 2245 014f 4939FC   		cmpq	%rdi, %r12
 2246 0152 0F84D800 		je	.L328
 2246      0000
 240:fltk-1.3.4-1/src/Fl_Group.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 2247              		.loc 3 240 0
 2248 0158 4885FF   		testq	%rdi, %rdi
 2249 015b 0F844703 		je	.L338
 2249      0000
 240:fltk-1.3.4-1/src/Fl_Group.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 2250              		.loc 3 240 0 is_stmt 0 discriminator 1
 2251 0161 4489EE   		movl	%r13d, %esi
 2252              	.LVL248:
 2253 0164 E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2253      00
 2254              	.LVL249:
 249:fltk-1.3.4-1/src/Fl_Group.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 2255              		.loc 3 249 0 is_stmt 1 discriminator 1
 2256 0169 31C0     		xorl	%eax, %eax
 2257 016b E9C20000 		jmp	.L243
 2257      00
 2258              	.LVL250:
 2259              		.p2align 4,,10
 2260              		.p2align 3
 2261              	.L220:
 2262 0170 4863C1   		movslq	%ecx, %rax
 2263 0173 89C9     		movl	%ecx, %ecx
 2264 0175 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2265 0179 4829C8   		subq	%rcx, %rax
 2266 017c 4C8D2CC3 		leaq	(%rbx,%rax,8), %r13
 2267 0180 EB0A     		jmp	.L234
 2268              	.LVL251:
 2269              		.p2align 4,,10
 2270 0182 660F1F44 		.p2align 3
 2270      0000
 2271              	.L256:
 2272 0188 4883ED08 		subq	$8, %rbp
 2273              	.LVL252:
 2274              	.L234:
 193:fltk-1.3.4-1/src/Fl_Group.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 2275              		.loc 3 193 0 discriminator 1
 2276 018c 4C39ED   		cmpq	%r13, %rbp
 2277 018f 0F84FB02 		je	.L253
 2277      0000
 194:fltk-1.3.4-1/src/Fl_Group.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 2278              		.loc 3 194 0
 2279 0195 488B5DF8 		movq	-8(%rbp), %rbx
 2280              	.LVL253:
 195:fltk-1.3.4-1/src/Fl_Group.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 2281              		.loc 3 195 0
 2282 0199 F6436002 		testb	$2, 96(%rbx)
 2283 019d 75E9     		jne	.L256
 195:fltk-1.3.4-1/src/Fl_Group.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 2284              		.loc 3 195 0 is_stmt 0 discriminator 1
 2285 019f 4889DF   		movq	%rbx, %rdi
 2286 01a2 E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 2286      00
 2287              	.LVL254:
 2288 01a7 85C0     		testl	%eax, %eax
 2289 01a9 74DD     		je	.L256
 196:fltk-1.3.4-1/src/Fl_Group.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 2290              		.loc 3 196 0 is_stmt 1
 2291 01ab 488B3500 		movq	_ZN2Fl11belowmouse_E(%rip), %rsi
 2291      000000
 2292 01b2 4889DF   		movq	%rbx, %rdi
 2293 01b5 E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 2293      00
 2294              	.LVL255:
 2295 01ba 85C0     		testl	%eax, %eax
 2296 01bc 0F85E104 		jne	.L339
 2296      0000
 199:fltk-1.3.4-1/src/Fl_Group.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2297              		.loc 3 199 0
 2298 01c2 4889DF   		movq	%rbx, %rdi
 2299 01c5 E8000000 		call	_ZN2Fl10belowmouseEP9Fl_Widget
 2299      00
 2300              	.LVL256:
 200:fltk-1.3.4-1/src/Fl_Group.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 2301              		.loc 3 200 0
 2302 01ca BE030000 		movl	$3, %esi
 2302      00
 2303 01cf 4889DF   		movq	%rbx, %rdi
 2304 01d2 E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2304      00
 2305              	.LVL257:
 2306 01d7 85C0     		testl	%eax, %eax
 2307 01d9 74AD     		je	.L256
 2308 01db E9F0FEFF 		jmp	.L327
 2308      FF
 2309              	.LVL258:
 2310              		.p2align 4,,10
 2311              		.p2align 3
 2312              	.L221:
 156:fltk-1.3.4-1/src/Fl_Group.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2313              		.loc 3 156 0
 2314 01e0 E8000000 		call	_ZL6navkeyv
 2314      00
 2315              	.LVL259:
 2316 01e5 3D51FF00 		cmpl	$65361, %eax
 2316      00
 2317 01ea 0F8C1004 		jl	.L238
 2317      0000
 2318 01f0 3D52FF00 		cmpl	$65362, %eax
 2318      00
 2319 01f5 0F8E0503 		jle	.L239
 2319      0000
 2320 01fb 3D54FF00 		cmpl	$65364, %eax
 2320      00
 2321 0200 0F8FFA03 		jg	.L238
 2321      0000
 2322              	.L240:
 2323              	.LVL260:
 2324 0206 89C9     		movl	%ecx, %ecx
 2325 0208 488D2CCB 		leaq	(%rbx,%rcx,8), %rbp
 2326 020c EB17     		jmp	.L245
 2327              	.LVL261:
 2328 020e 6690     		.p2align 4,,10
 2329              		.p2align 3
 2330              	.L340:
 161:fltk-1.3.4-1/src/Fl_Group.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2331              		.loc 3 161 0 discriminator 2
 2332 0210 4883C308 		addq	$8, %rbx
 2333              	.LVL262:
 2334 0214 488B7BF8 		movq	-8(%rbx), %rdi
 2335 0218 E8000000 		call	_ZN9Fl_Widget10take_focusEv
 2335      00
 2336              	.LVL263:
 2337 021d 85C0     		testl	%eax, %eax
 2338 021f 0F85ABFE 		jne	.L327
 2338      FFFF
 2339              	.LVL264:
 2340              	.L245:
 161:fltk-1.3.4-1/src/Fl_Group.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2341              		.loc 3 161 0 is_stmt 0 discriminator 1
 2342 0225 4839EB   		cmpq	%rbp, %rbx
 2343 0228 75E6     		jne	.L340
 2344              	.LVL265:
 2345 022a 660F1F44 		.p2align 4,,10
 2345      0000
 2346              		.p2align 3
 2347              	.L328:
 172:fltk-1.3.4-1/src/Fl_Group.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 2348              		.loc 3 172 0 is_stmt 1
 2349 0230 31C0     		xorl	%eax, %eax
 2350              	.L243:
 2351              	.LBE956:
 2352              	.LBE955:
 305:fltk-1.3.4-1/src/Fl_Group.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 2353              		.loc 3 305 0 discriminator 4
 2354 0232 488B5424 		movq	8(%rsp), %rdx
 2354      08
 2355 0237 64483314 		xorq	%fs:40, %rdx
 2355      25280000 
 2355      00
 2356 0240 0F857D04 		jne	.L341
 2356      0000
 305:fltk-1.3.4-1/src/Fl_Group.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 2357              		.loc 3 305 0 is_stmt 0
 2358 0246 4883C418 		addq	$24, %rsp
 2359              		.cfi_remember_state
 2360              		.cfi_def_cfa_offset 56
 2361 024a 5B       		popq	%rbx
 2362              		.cfi_def_cfa_offset 48
 2363 024b 5D       		popq	%rbp
 2364              		.cfi_def_cfa_offset 40
 2365 024c 415C     		popq	%r12
 2366              		.cfi_def_cfa_offset 32
 2367 024e 415D     		popq	%r13
 2368              		.cfi_def_cfa_offset 24
 2369 0250 415E     		popq	%r14
 2370              		.cfi_def_cfa_offset 16
 2371 0252 415F     		popq	%r15
 2372              		.cfi_def_cfa_offset 8
 2373 0254 C3       		ret
 2374              	.LVL266:
 2375              		.p2align 4,,10
 2376 0255 0F1F00   		.p2align 3
 2377              	.L224:
 2378              		.cfi_restore_state
 2379 0258 4863C1   		movslq	%ecx, %rax
 2380 025b 89C9     		movl	%ecx, %ecx
 2381 025d 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2382 0261 4829C8   		subq	%rcx, %rax
 2383 0264 4C8D34C3 		leaq	(%rbx,%rax,8), %r14
 2384 0268 EB0A     		jmp	.L233
 2385              	.LVL267:
 2386 026a 660F1F44 		.p2align 4,,10
 2386      0000
 2387              		.p2align 3
 2388              	.L249:
 2389 0270 4883ED08 		subq	$8, %rbp
 2390              	.LVL268:
 2391              	.L233:
 2392              	.LBB981:
 2393              	.LBB980:
 178:fltk-1.3.4-1/src/Fl_Group.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 2394              		.loc 3 178 0 is_stmt 1 discriminator 1
 2395 0274 4C39F5   		cmpq	%r14, %rbp
 2396 0277 0F842303 		je	.L248
 2396      0000
 179:fltk-1.3.4-1/src/Fl_Group.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 2397              		.loc 3 179 0
 2398 027d 4C8B6DF8 		movq	-8(%rbp), %r13
 2399              	.LVL269:
 180:fltk-1.3.4-1/src/Fl_Group.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 2400              		.loc 3 180 0
 2401 0281 41F64560 		testb	$7, 96(%r13)
 2401      07
 2402 0286 75E8     		jne	.L249
 180:fltk-1.3.4-1/src/Fl_Group.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 2403              		.loc 3 180 0 is_stmt 0 discriminator 1
 2404 0288 4C89EF   		movq	%r13, %rdi
 2405 028b E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 2405      00
 2406              	.LVL270:
 2407 0290 85C0     		testl	%eax, %eax
 2408 0292 74DC     		je	.L249
 180:fltk-1.3.4-1/src/Fl_Group.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 2409              		.loc 3 180 0 discriminator 3
 2410 0294 BE0C0000 		movl	$12, %esi
 2410      00
 2411 0299 4C89EF   		movq	%r13, %rdi
 2412 029c E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2412      00
 2413              	.LVL271:
 2414 02a1 85C0     		testl	%eax, %eax
 2415 02a3 74CB     		je	.L249
 2416 02a5 E926FEFF 		jmp	.L327
 2416      FF
 2417              	.LVL272:
 2418 02aa 660F1F44 		.p2align 4,,10
 2418      0000
 2419              		.p2align 3
 2420              	.L225:
 2421 02b0 89C9     		movl	%ecx, %ecx
 2422 02b2 488D2CCB 		leaq	(%rbx,%rcx,8), %rbp
 2423              	.LVL273:
 2424 02b6 662E0F1F 		.p2align 4,,10
 2424      84000000 
 2424      0000
 2425              		.p2align 3
 2426              	.L232:
 266:fltk-1.3.4-1/src/Fl_Group.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 2427              		.loc 3 266 0 is_stmt 1 discriminator 1
 2428 02c0 4839EB   		cmpq	%rbp, %rbx
 2429 02c3 0F8407FE 		je	.L327
 2429      FFFF
 267:fltk-1.3.4-1/src/Fl_Group.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 2430              		.loc 3 267 0
 2431 02c9 4883C308 		addq	$8, %rbx
 2432              	.LVL274:
 2433 02cd 488B7BF8 		movq	-8(%rbx), %rdi
 2434              	.LVL275:
 268:fltk-1.3.4-1/src/Fl_Group.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 2435              		.loc 3 268 0
 2436 02d1 F6476001 		testb	$1, 96(%rdi)
 2437 02d5 75E9     		jne	.L232
 268:fltk-1.3.4-1/src/Fl_Group.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 2438              		.loc 3 268 0 is_stmt 0 discriminator 1
 2439 02d7 488B07   		movq	(%rdi), %rax
 2440 02da 4489EE   		movl	%r13d, %esi
 2441 02dd FF5018   		call	*24(%rax)
 2442              	.LVL276:
 2443 02e0 EBDE     		jmp	.L232
 2444              	.LVL277:
 2445              		.p2align 4,,10
 2446 02e2 660F1F44 		.p2align 3
 2446      0000
 2447              	.L226:
 2448 02e8 89C9     		movl	%ecx, %ecx
 2449 02ea 4C8D24CB 		leaq	(%rbx,%rcx,8), %r12
 2450              	.LVL278:
 2451 02ee 6690     		.p2align 4,,10
 2452              		.p2align 3
 2453              	.L231:
 2454              	.LBB968:
 274:fltk-1.3.4-1/src/Fl_Group.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 2455              		.loc 3 274 0 is_stmt 1 discriminator 1
 2456 02f0 4C39E3   		cmpq	%r12, %rbx
 2457 02f3 0F84D7FD 		je	.L327
 2457      FFFF
 2458              	.LBB969:
 275:fltk-1.3.4-1/src/Fl_Group.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 2459              		.loc 3 275 0
 2460 02f9 4883C308 		addq	$8, %rbx
 2461              	.LVL279:
 2462              	.LBB970:
 276:fltk-1.3.4-1/src/Fl_Group.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 2463              		.loc 3 276 0
 2464 02fd 4183FD0F 		cmpl	$15, %r13d
 2465              	.LBE970:
 275:fltk-1.3.4-1/src/Fl_Group.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 2466              		.loc 3 275 0
 2467 0301 488B6BF8 		movq	-8(%rbx), %rbp
 2468              	.LVL280:
 2469              	.LBB972:
 276:fltk-1.3.4-1/src/Fl_Group.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 2470              		.loc 3 276 0
 2471 0305 0F842501 		je	.L342
 2471      0000
 2472              	.L274:
 2473              	.LVL281:
 2474              	.LBE972:
 283:fltk-1.3.4-1/src/Fl_Group.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 2475              		.loc 3 283 0
 2476 030b F6456002 		testb	$2, 96(%rbp)
 2477 030f 75DF     		jne	.L231
 283:fltk-1.3.4-1/src/Fl_Group.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 2478              		.loc 3 283 0 is_stmt 0 discriminator 1
 2479 0311 488B4500 		movq	0(%rbp), %rax
 2480 0315 4489EE   		movl	%r13d, %esi
 2481 0318 4889EF   		movq	%rbp, %rdi
 2482 031b FF5018   		call	*24(%rax)
 2483              	.LVL282:
 2484 031e EBD0     		jmp	.L231
 2485              	.LVL283:
 2486              		.p2align 4,,10
 2487              		.p2align 3
 2488              	.L227:
 2489 0320 4863C1   		movslq	%ecx, %rax
 2490 0323 89C9     		movl	%ecx, %ecx
 2491 0325 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2492 0329 4829C8   		subq	%rcx, %rax
 2493 032c 4C8D34C3 		leaq	(%rbx,%rax,8), %r14
 2494 0330 EB0A     		jmp	.L230
 2495              	.LVL284:
 2496              		.p2align 4,,10
 2497 0332 660F1F44 		.p2align 3
 2497      0000
 2498              	.L271:
 2499 0338 4883ED08 		subq	$8, %rbp
 2500              	.LVL285:
 2501              	.L230:
 2502              	.LBE969:
 2503              	.LBE968:
 252:fltk-1.3.4-1/src/Fl_Group.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2504              		.loc 3 252 0 is_stmt 1 discriminator 1
 2505 033c 4C39F5   		cmpq	%r14, %rbp
 2506 033f 0F84FB01 		je	.L270
 2506      0000
 253:fltk-1.3.4-1/src/Fl_Group.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 2507              		.loc 3 253 0
 2508 0345 4C8B6DF8 		movq	-8(%rbp), %r13
 2509              	.LVL286:
 254:fltk-1.3.4-1/src/Fl_Group.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2510              		.loc 3 254 0
 2511 0349 41F64560 		testb	$7, 96(%r13)
 2511      07
 2512 034e 75E8     		jne	.L271
 254:fltk-1.3.4-1/src/Fl_Group.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2513              		.loc 3 254 0 is_stmt 0 discriminator 1
 2514 0350 4C89EF   		movq	%r13, %rdi
 2515 0353 E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 2515      00
 2516              	.LVL287:
 2517 0358 85C0     		testl	%eax, %eax
 2518 035a 74DC     		je	.L271
 254:fltk-1.3.4-1/src/Fl_Group.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2519              		.loc 3 254 0 discriminator 3
 2520 035c BE130000 		movl	$19, %esi
 2520      00
 2521 0361 4C89EF   		movq	%r13, %rdi
 2522 0364 E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2522      00
 2523              	.LVL288:
 2524 0369 85C0     		testl	%eax, %eax
 2525 036b 74CB     		je	.L271
 2526 036d E95EFDFF 		jmp	.L327
 2526      FF
 2527              	.LVL289:
 2528              		.p2align 4,,10
 2529 0372 660F1F44 		.p2align 3
 2529      0000
 2530              	.L222:
 171:fltk-1.3.4-1/src/Fl_Group.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 2531              		.loc 3 171 0 is_stmt 1
 2532 0378 488B0500 		movq	fl_oldfocus(%rip), %rax
 2532      000000
 2533 037f 49898424 		movq	%rax, 128(%r12)
 2533      80000000 
 2534 0387 E9A4FEFF 		jmp	.L328
 2534      FF
 2535 038c 0F1F4000 		.p2align 4,,10
 2536              		.p2align 3
 2537              	.L223:
 175:fltk-1.3.4-1/src/Fl_Group.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 2538              		.loc 3 175 0
 2539 0390 E8000000 		call	_ZL6navkeyv
 2539      00
 2540              	.LVL290:
 2541 0395 4C89E7   		movq	%r12, %rdi
 2542 0398 89C6     		movl	%eax, %esi
 2543 039a E8000000 		call	_ZN8Fl_Group10navigationEi
 2543      00
 2544              	.LVL291:
 2545 039f E98EFEFF 		jmp	.L243
 2545      FF
 2546              	.LVL292:
 2547              		.p2align 4,,10
 2548 03a4 0F1F4000 		.p2align 3
 2549              	.L216:
 289:fltk-1.3.4-1/src/Fl_Group.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2550              		.loc 3 289 0 discriminator 1
 2551 03a8 83F900   		cmpl	$0, %ecx
 2552 03ab 0F8E0403 		jle	.L343
 2552      0000
 290:fltk-1.3.4-1/src/Fl_Group.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 2553              		.loc 3 290 0
 2554 03b1 488B3B   		movq	(%rbx), %rdi
 2555              	.LVL293:
 2556 03b4 488B1500 		movq	_ZN2Fl6focus_E(%rip), %rdx
 2556      000000
 2557 03bb 4531F6   		xorl	%r14d, %r14d
 2558 03be 488D4308 		leaq	8(%rbx), %rax
 2559 03c2 4839D7   		cmpq	%rdx, %rdi
 2560 03c5 7517     		jne	.L279
 2561 03c7 EB1E     		jmp	.L326
 2562              	.LVL294:
 2563 03c9 0F1F8000 		.p2align 4,,10
 2563      000000
 2564              		.p2align 3
 2565              	.L280:
 2566 03d0 4883C008 		addq	$8, %rax
 2567 03d4 483950F8 		cmpq	%rdx, -8(%rax)
 2568 03d8 0F841A02 		je	.L344
 2568      0000
 2569              	.LVL295:
 2570              	.L279:
 289:fltk-1.3.4-1/src/Fl_Group.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2571              		.loc 3 289 0 discriminator 2
 2572 03de 4183C601 		addl	$1, %r14d
 2573              	.LVL296:
 2574 03e2 4139CE   		cmpl	%ecx, %r14d
 2575 03e5 75E9     		jne	.L280
 2576              	.LVL297:
 2577              	.L326:
 292:fltk-1.3.4-1/src/Fl_Group.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 2578              		.loc 3 292 0
 2579 03e7 4531F6   		xorl	%r14d, %r14d
 2580              	.L295:
 2581              	.LVL298:
 2582 03ea 4489F5   		movl	%r14d, %ebp
 2583              	.LBB975:
 2584              	.LBB976:
 298:fltk-1.3.4-1/src/Fl_Group.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 2585              		.loc 3 298 0
 2586 03ed 4531FF   		xorl	%r15d, %r15d
 2587 03f0 EB25     		jmp	.L284
 2588              	.LVL299:
 2589              		.p2align 4,,10
 2590 03f2 660F1F44 		.p2align 3
 2590      0000
 2591              	.L283:
 297:fltk-1.3.4-1/src/Fl_Group.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 2592              		.loc 3 297 0
 2593 03f8 83C501   		addl	$1, %ebp
 2594              	.LVL300:
 298:fltk-1.3.4-1/src/Fl_Group.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 2595              		.loc 3 298 0
 2596 03fb 413BAC24 		cmpl	144(%r12), %ebp
 2596      90000000 
 2597 0403 410F4DEF 		cmovge	%r15d, %ebp
 2598              	.LVL301:
 299:fltk-1.3.4-1/src/Fl_Group.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2599              		.loc 3 299 0
 2600 0407 4439F5   		cmpl	%r14d, %ebp
 2601 040a 0F8420FE 		je	.L328
 2601      FFFF
 2602 0410 4863C5   		movslq	%ebp, %rax
 2603 0413 488B3CC3 		movq	(%rbx,%rax,8), %rdi
 2604              	.LVL302:
 2605              	.L284:
 296:fltk-1.3.4-1/src/Fl_Group.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2606              		.loc 3 296 0
 2607 0417 F6476007 		testb	$7, 96(%rdi)
 2608 041b 75DB     		jne	.L283
 296:fltk-1.3.4-1/src/Fl_Group.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2609              		.loc 3 296 0 is_stmt 0 discriminator 1
 2610 041d 4489EE   		movl	%r13d, %esi
 2611 0420 E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2611      00
 2612              	.LVL303:
 2613 0425 85C0     		testl	%eax, %eax
 2614 0427 74CF     		je	.L283
 2615 0429 E9A2FCFF 		jmp	.L327
 2615      FF
 2616              	.LVL304:
 2617 042e 6690     		.p2align 4,,10
 2618              		.p2align 3
 2619              	.L342:
 2620              	.LBE976:
 2621              	.LBE975:
 2622              	.LBB977:
 2623              	.LBB974:
 2624              	.LBB973:
 276:fltk-1.3.4-1/src/Fl_Group.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 2625              		.loc 3 276 0 is_stmt 1
 2626 0430 483B2D00 		cmpq	_ZN2Fl6focus_E(%rip), %rbp
 2626      000000
 2627 0437 0F85CEFE 		jne	.L274
 2627      FFFF
 2628              	.LBB971:
 279:fltk-1.3.4-1/src/Fl_Group.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2629              		.loc 3 279 0
 2630 043d 488B4500 		movq	0(%rbp), %rax
 278:fltk-1.3.4-1/src/Fl_Group.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 2631              		.loc 3 278 0
 2632 0441 448B3500 		movl	_ZN2Fl8e_numberE(%rip), %r14d
 2632      000000
 2633              	.LVL305:
 279:fltk-1.3.4-1/src/Fl_Group.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2634              		.loc 3 279 0
 2635 0448 4889EF   		movq	%rbp, %rdi
 2636 044b BE070000 		movl	$7, %esi
 2636      00
 2637 0450 C7050000 		movl	$7, _ZN2Fl8e_numberE(%rip)
 2637      00000700 
 2637      0000
 2638 045a 488B4018 		movq	24(%rax), %rax
 2639 045e FFD0     		call	*%rax
 2640              	.LVL306:
 281:fltk-1.3.4-1/src/Fl_Group.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2641              		.loc 3 281 0
 2642 0460 31FF     		xorl	%edi, %edi
 280:fltk-1.3.4-1/src/Fl_Group.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 2643              		.loc 3 280 0
 2644 0462 44893500 		movl	%r14d, _ZN2Fl8e_numberE(%rip)
 2644      000000
 281:fltk-1.3.4-1/src/Fl_Group.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2645              		.loc 3 281 0
 2646 0469 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 2646      00
 2647              	.LVL307:
 2648              	.LBE971:
 2649 046e E998FEFF 		jmp	.L274
 2649      FF
 2650              	.LVL308:
 2651              		.p2align 4,,10
 2652 0473 0F1F4400 		.p2align 3
 2652      00
 2653              	.L257:
 2654              	.LBE973:
 2655              	.LBE974:
 2656              	.LBE977:
 220:fltk-1.3.4-1/src/Fl_Group.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 2657              		.loc 3 220 0
 2658 0478 4C89E7   		movq	%r12, %rdi
 2659 047b E8000000 		call	_ZN2Fl10belowmouseEP9Fl_Widget
 2659      00
 2660              	.LVL309:
 221:fltk-1.3.4-1/src/Fl_Group.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 2661              		.loc 3 221 0
 2662 0480 31C0     		xorl	%eax, %eax
 2663 0482 E9ABFDFF 		jmp	.L243
 2663      FF
 2664 0487 660F1F84 		.p2align 4,,10
 2664      00000000 
 2664      00
 2665              		.p2align 3
 2666              	.L253:
 204:fltk-1.3.4-1/src/Fl_Group.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 2667              		.loc 3 204 0
 2668 0490 4C89E7   		movq	%r12, %rdi
 2669 0493 E8000000 		call	_ZN2Fl10belowmouseEP9Fl_Widget
 2669      00
 2670              	.LVL310:
 205:fltk-1.3.4-1/src/Fl_Group.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 2671              		.loc 3 205 0
 2672 0498 B8010000 		movl	$1, %eax
 2672      00
 2673 049d E990FDFF 		jmp	.L243
 2673      FF
 2674              	.LVL311:
 2675              		.p2align 4,,10
 2676 04a2 660F1F44 		.p2align 3
 2676      0000
 2677              	.L338:
 2678 04a8 4863C1   		movslq	%ecx, %rax
 2679 04ab 89C9     		movl	%ecx, %ecx
 2680 04ad 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2681 04b1 4829C8   		subq	%rcx, %rax
 2682 04b4 4C8D24C3 		leaq	(%rbx,%rax,8), %r12
 2683              	.LVL312:
 2684 04b8 EB0A     		jmp	.L267
 2685              	.LVL313:
 2686 04ba 660F1F44 		.p2align 4,,10
 2686      0000
 2687              		.p2align 3
 2688              	.L293:
 2689 04c0 4883ED08 		subq	$8, %rbp
 2690              	.LVL314:
 2691              	.L267:
 242:fltk-1.3.4-1/src/Fl_Group.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 2692              		.loc 3 242 0 discriminator 1
 2693 04c4 4C39E5   		cmpq	%r12, %rbp
 2694 04c7 0F8463FD 		je	.L328
 2694      FFFF
 243:fltk-1.3.4-1/src/Fl_Group.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2695              		.loc 3 243 0
 2696 04cd 488B5DF8 		movq	-8(%rbp), %rbx
 2697              	.LVL315:
 244:fltk-1.3.4-1/src/Fl_Group.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 2698              		.loc 3 244 0
 2699 04d1 F6436007 		testb	$7, 96(%rbx)
 2700 04d5 75E9     		jne	.L293
 244:fltk-1.3.4-1/src/Fl_Group.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 2701              		.loc 3 244 0 is_stmt 0 discriminator 1
 2702 04d7 4889DF   		movq	%rbx, %rdi
 2703 04da E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 2703      00
 2704              	.LVL316:
 2705 04df 85C0     		testl	%eax, %eax
 2706 04e1 74DD     		je	.L293
 245:fltk-1.3.4-1/src/Fl_Group.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 2707              		.loc 3 245 0 is_stmt 1
 2708 04e3 4489EE   		movl	%r13d, %esi
 2709 04e6 4889DF   		movq	%rbx, %rdi
 2710 04e9 E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2710      00
 2711              	.LVL317:
 2712 04ee 85C0     		testl	%eax, %eax
 2713 04f0 74CE     		je	.L293
 2714 04f2 E9D9FBFF 		jmp	.L327
 2714      FF
 2715              	.LVL318:
 2716 04f7 660F1F84 		.p2align 4,,10
 2716      00000000 
 2716      00
 2717              		.p2align 3
 2718              	.L239:
 2719 0500 4863C1   		movslq	%ecx, %rax
 2720 0503 89C9     		movl	%ecx, %ecx
 2721 0505 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2722 0509 4829C8   		subq	%rcx, %rax
 2723 050c 488D1CC3 		leaq	(%rbx,%rax,8), %rbx
 2724 0510 EB1B     		jmp	.L247
 2725              		.p2align 4,,10
 2726 0512 660F1F44 		.p2align 3
 2726      0000
 2727              	.L345:
 165:fltk-1.3.4-1/src/Fl_Group.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 2728              		.loc 3 165 0 discriminator 2
 2729 0518 488B7DF8 		movq	-8(%rbp), %rdi
 2730 051c 4883ED08 		subq	$8, %rbp
 2731 0520 E8000000 		call	_ZN9Fl_Widget10take_focusEv
 2731      00
 2732              	.LVL319:
 2733 0525 85C0     		testl	%eax, %eax
 2734 0527 0F85A3FB 		jne	.L327
 2734      FFFF
 2735              	.L247:
 165:fltk-1.3.4-1/src/Fl_Group.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 2736              		.loc 3 165 0 is_stmt 0 discriminator 1
 2737 052d 4839DD   		cmpq	%rbx, %rbp
 2738 0530 75E6     		jne	.L345
 2739 0532 E9F9FCFF 		jmp	.L328
 2739      FF
 2740              	.LVL320:
 2741 0537 660F1F84 		.p2align 4,,10
 2741      00000000 
 2741      00
 2742              		.p2align 3
 2743              	.L270:
 2744 0540 49638424 		movslq	144(%r12), %rax
 2744      90000000 
 2745              	.LVL321:
 2746 0548 89C2     		movl	%eax, %edx
 2747 054a 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2748 054e 4829D0   		subq	%rdx, %rax
 2749 0551 4C8D24C3 		leaq	(%rbx,%rax,8), %r12
 2750              	.LVL322:
 2751 0555 EB0D     		jmp	.L294
 2752              	.LVL323:
 2753 0557 660F1F84 		.p2align 4,,10
 2753      00000000 
 2753      00
 2754              		.p2align 3
 2755              	.L272:
 2756 0560 4883ED08 		subq	$8, %rbp
 2757              	.LVL324:
 2758              	.L294:
 257:fltk-1.3.4-1/src/Fl_Group.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 2759              		.loc 3 257 0 is_stmt 1 discriminator 1
 2760 0564 4C39E5   		cmpq	%r12, %rbp
 2761 0567 0F84C3FC 		je	.L328
 2761      FFFF
 258:fltk-1.3.4-1/src/Fl_Group.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 2762              		.loc 3 258 0
 2763 056d 488B5DF8 		movq	-8(%rbp), %rbx
 2764              	.LVL325:
 259:fltk-1.3.4-1/src/Fl_Group.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2765              		.loc 3 259 0
 2766 0571 F6436007 		testb	$7, 96(%rbx)
 2767 0575 75E9     		jne	.L272
 259:fltk-1.3.4-1/src/Fl_Group.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2768              		.loc 3 259 0 is_stmt 0 discriminator 1
 2769 0577 4889DF   		movq	%rbx, %rdi
 2770 057a E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 2770      00
 2771              	.LVL326:
 2772 057f 85C0     		testl	%eax, %eax
 2773 0581 75DD     		jne	.L272
 259:fltk-1.3.4-1/src/Fl_Group.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2774              		.loc 3 259 0 discriminator 3
 2775 0583 BE130000 		movl	$19, %esi
 2775      00
 2776 0588 4889DF   		movq	%rbx, %rdi
 2777 058b E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2777      00
 2778              	.LVL327:
 2779 0590 85C0     		testl	%eax, %eax
 2780 0592 74CC     		je	.L272
 2781 0594 E937FBFF 		jmp	.L327
 2781      FF
 2782              	.LVL328:
 2783 0599 0F1F8000 		.p2align 4,,10
 2783      000000
 2784              		.p2align 3
 2785              	.L248:
 2786 05a0 49638424 		movslq	144(%r12), %rax
 2786      90000000 
 2787              	.LVL329:
 2788 05a8 89C2     		movl	%eax, %edx
 2789 05aa 488D2CC3 		leaq	(%rbx,%rax,8), %rbp
 2790 05ae 4829D0   		subq	%rdx, %rax
 2791 05b1 4C8D2CC3 		leaq	(%rbx,%rax,8), %r13
 2792 05b5 EB0D     		jmp	.L285
 2793              	.LVL330:
 2794 05b7 660F1F84 		.p2align 4,,10
 2794      00000000 
 2794      00
 2795              		.p2align 3
 2796              	.L251:
 2797 05c0 4883ED08 		subq	$8, %rbp
 2798              	.LVL331:
 2799              	.L285:
 183:fltk-1.3.4-1/src/Fl_Group.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 2800              		.loc 3 183 0 is_stmt 1 discriminator 1
 2801 05c4 4C39ED   		cmpq	%r13, %rbp
 2802 05c7 7467     		je	.L250
 184:fltk-1.3.4-1/src/Fl_Group.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 2803              		.loc 3 184 0
 2804 05c9 488B5DF8 		movq	-8(%rbp), %rbx
 2805              	.LVL332:
 185:fltk-1.3.4-1/src/Fl_Group.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 2806              		.loc 3 185 0
 2807 05cd F6436007 		testb	$7, 96(%rbx)
 2808 05d1 75ED     		jne	.L251
 185:fltk-1.3.4-1/src/Fl_Group.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 2809              		.loc 3 185 0 is_stmt 0 discriminator 1
 2810 05d3 4889DF   		movq	%rbx, %rdi
 2811 05d6 E8000000 		call	_ZN2Fl12event_insideEPK9Fl_Widget
 2811      00
 2812              	.LVL333:
 2813 05db 85C0     		testl	%eax, %eax
 2814 05dd 75E1     		jne	.L251
 185:fltk-1.3.4-1/src/Fl_Group.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 2815              		.loc 3 185 0 discriminator 3
 2816 05df BE0C0000 		movl	$12, %esi
 2816      00
 2817 05e4 4889DF   		movq	%rbx, %rdi
 2818 05e7 E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2818      00
 2819              	.LVL334:
 2820 05ec 85C0     		testl	%eax, %eax
 2821 05ee 74D0     		je	.L251
 2822 05f0 E9DBFAFF 		jmp	.L327
 2822      FF
 2823              	.LVL335:
 2824              		.p2align 4,,10
 2825 05f5 0F1F00   		.p2align 3
 2826              	.L344:
 2827 05f8 4889D7   		movq	%rdx, %rdi
 2828              	.LVL336:
 2829 05fb E9EAFDFF 		jmp	.L295
 2829      FF
 2830              	.LVL337:
 2831              		.p2align 4,,10
 2832              		.p2align 3
 2833              	.L238:
 158:fltk-1.3.4-1/src/Fl_Group.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2834              		.loc 3 158 0 is_stmt 1
 2835 0600 498BBC24 		movq	128(%r12), %rdi
 2835      80000000 
 2836 0608 4885FF   		testq	%rdi, %rdi
 2837 060b 0F84F5FB 		je	.L240
 2837      FFFF
 158:fltk-1.3.4-1/src/Fl_Group.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2838              		.loc 3 158 0 is_stmt 0 discriminator 1
 2839 0611 E8000000 		call	_ZN9Fl_Widget10take_focusEv
 2839      00
 2840              	.LVL338:
 2841 0616 85C0     		testl	%eax, %eax
 2842 0618 0F85B2FA 		jne	.L327
 2842      FFFF
 2843 061e 418B8C24 		movl	144(%r12), %ecx
 2843      90000000 
 2844 0626 E9DBFBFF 		jmp	.L240
 2844      FF
 2845              	.LVL339:
 2846 062b 0F1F4400 		.p2align 4,,10
 2846      00
 2847              		.p2align 3
 2848              	.L250:
 188:fltk-1.3.4-1/src/Fl_Group.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 2849              		.loc 3 188 0 is_stmt 1
 2850 0630 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 2850      0000
 2851 0636 247F     		andb	$127, %al
 2852 0638 3D0DFF00 		cmpl	$65293, %eax
 2852      00
 2853 063d 0F85EDFB 		jne	.L328
 2853      FFFF
 2854 0643 BE54FF00 		movl	$65364, %esi
 2854      00
 2855 0648 4C89E7   		movq	%r12, %rdi
 2856 064b E8000000 		call	_ZN8Fl_Group10navigationEi
 2856      00
 2857              	.LVL340:
 2858 0650 E9DDFBFF 		jmp	.L243
 2858      FF
 2859              	.LVL341:
 2860              		.p2align 4,,10
 2861 0655 0F1F00   		.p2align 3
 2862              	.L337:
 2863              	.LBB978:
 2864              	.LBB965:
 2865              	.LBB964:
 2866              	.LBB963:
 2867              	.LBB961:
 2868              	.LBB962:
 2869              		.loc 4 835 0
 2870 0658 488B3500 		movq	_ZN2Fl7pushed_E(%rip), %rsi
 2870      000000
 2871              	.LBE962:
 2872              	.LBE961:
 229:fltk-1.3.4-1/src/Fl_Group.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2873              		.loc 3 229 0
 2874 065f 4885F6   		testq	%rsi, %rsi
 2875 0662 741B     		je	.L292
 2876 0664 48833C24 		cmpq	$0, (%rsp)
 2876      00
 2877 0669 7414     		je	.L292
 2878 066b 4889DF   		movq	%rbx, %rdi
 2879 066e E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 2879      00
 2880              	.LVL342:
 2881 0673 85C0     		testl	%eax, %eax
 2882 0675 7508     		jne	.L292
 2883 0677 4889DF   		movq	%rbx, %rdi
 2884 067a E8000000 		call	_ZN2Fl6pushedEP9Fl_Widget
 2884      00
 2885              	.LVL343:
 2886              	.L292:
 230:fltk-1.3.4-1/src/Fl_Group.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 2887              		.loc 3 230 0
 2888 067f 4889E7   		movq	%rsp, %rdi
 2889 0682 E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 2889      00
 2890              	.LVL344:
 2891 0687 B8010000 		movl	$1, %eax
 2891      00
 2892 068c E9A1FBFF 		jmp	.L243
 2892      FF
 2893              	.LVL345:
 2894              	.L336:
 2895              	.LBE963:
 2896              	.LBE964:
 2897              	.LBE965:
 2898              	.LBE978:
 213:fltk-1.3.4-1/src/Fl_Group.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2899              		.loc 3 213 0
 2900 0691 BE150000 		movl	$21, %esi
 2900      00
 2901 0696 4889DF   		movq	%rbx, %rdi
 2902 0699 E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2902      00
 2903              	.LVL346:
 2904 069e E98FFBFF 		jmp	.L243
 2904      FF
 2905              	.LVL347:
 2906              	.L339:
 197:fltk-1.3.4-1/src/Fl_Group.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 2907              		.loc 3 197 0
 2908 06a3 BE0B0000 		movl	$11, %esi
 2908      00
 2909 06a8 4889DF   		movq	%rbx, %rdi
 2910 06ab E8000000 		call	_ZL4sendP9Fl_Widgeti.constprop.35
 2910      00
 2911              	.LVL348:
 2912 06b0 E97DFBFF 		jmp	.L243
 2912      FF
 2913              	.LVL349:
 2914              	.L343:
 2915              	.LBB979:
 294:fltk-1.3.4-1/src/Fl_Group.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2916              		.loc 3 294 0
 2917 06b5 0F8475FB 		je	.L328
 2917      FFFF
 2918 06bb 488B3B   		movq	(%rbx), %rdi
 2919              	.LVL350:
 2920 06be E924FDFF 		jmp	.L326
 2920      FF
 2921              	.LVL351:
 2922              	.L341:
 2923              	.LBE979:
 2924              	.LBE980:
 2925              	.LBE981:
 305:fltk-1.3.4-1/src/Fl_Group.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 2926              		.loc 3 305 0
 2927 06c3 E8000000 		call	__stack_chk_fail
 2927      00
 2928              	.LVL352:
 2929              		.cfi_endproc
 2930              	.LFE659:
 2932              		.section	.text.unlikely._ZN8Fl_Group6handleEi
 2933              	.LCOLDE22:
 2934              		.section	.text._ZN8Fl_Group6handleEi
 2935              	.LHOTE22:
 2936              		.section	.text.unlikely._ZN10Fl_Spinner6handleEi,"axG",@progbits,_ZN10Fl_Spinner6handleEi,comdat
 2937              		.align 2
 2938              	.LCOLDB23:
 2939              		.section	.text._ZN10Fl_Spinner6handleEi,"axG",@progbits,_ZN10Fl_Spinner6handleEi,comdat
 2940              	.LHOTB23:
 2941              		.align 2
 2942              		.p2align 4,,15
 2943              		.weak	_ZN10Fl_Spinner6handleEi
 2945              	_ZN10Fl_Spinner6handleEi:
 2946              	.LFB626:
 117:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 118:fltk-1.3.4-1/FL/Fl_Spinner.H ****   public:
 119:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 120:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		/**
 121:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  Creates a new Fl_Spinner widget using the given position, size,
 122:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  and label string.
 123:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  <P>Inherited destructor Destroys the widget and any value associated with it.
 124:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		*/
 125:fltk-1.3.4-1/FL/Fl_Spinner.H ****   Fl_Spinner(int X, int Y, int W, int H, const char *L = 0);
 126:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 127:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Sets or returns the format string for the value. */
 128:fltk-1.3.4-1/FL/Fl_Spinner.H ****   const char	*format() { return (format_); }
 129:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Sets or returns the format string for the value. */
 130:fltk-1.3.4-1/FL/Fl_Spinner.H ****   void		format(const char *f) { format_ = f; update(); }
 131:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 132:fltk-1.3.4-1/FL/Fl_Spinner.H ****   int		handle(int event) {
 2947              		.loc 9 132 0
 2948              		.cfi_startproc
 2949              	.LVL353:
 2950 0000 4883EC08 		subq	$8, %rsp
 2951              		.cfi_def_cfa_offset 16
 133:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  switch (event) {
 2952              		.loc 9 133 0
 2953 0004 83FE08   		cmpl	$8, %esi
 2954 0007 7437     		je	.L348
 2955 0009 83FE0C   		cmpl	$12, %esi
 2956 000c 7432     		je	.L348
 2957 000e 83FE06   		cmpl	$6, %esi
 2958 0011 740D     		je	.L362
 134:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    case FL_KEYDOWN :
 135:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    case FL_SHORTCUT :
 136:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      if (Fl::event_key() == FL_Up) {
 137:fltk-1.3.4-1/FL/Fl_Spinner.H **** 			up_button_.do_callback();
 138:fltk-1.3.4-1/FL/Fl_Spinner.H **** 			return 1;
 139:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      } else if (Fl::event_key() == FL_Down) {
 140:fltk-1.3.4-1/FL/Fl_Spinner.H **** 			down_button_.do_callback();
 141:fltk-1.3.4-1/FL/Fl_Spinner.H **** 			return 1;
 142:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      } else return 0;
 143:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 144:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		    case FL_FOCUS :
 145:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      if (input_.take_focus()) return 1;
 146:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      else return 0;
 147:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  }
 148:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 149:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  return Fl_Group::handle(event);
 150:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		}
 2959              		.loc 9 150 0
 2960 0013 4883C408 		addq	$8, %rsp
 2961              		.cfi_remember_state
 2962              		.cfi_def_cfa_offset 8
 149:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		}
 2963              		.loc 9 149 0
 2964 0017 E9000000 		jmp	_ZN8Fl_Group6handleEi
 2964      00
 2965              	.LVL354:
 2966 001c 0F1F4000 		.p2align 4,,10
 2967              		.p2align 3
 2968              	.L362:
 2969              		.cfi_restore_state
 145:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      else return 0;
 2970              		.loc 9 145 0
 2971 0020 4881C7C8 		addq	$200, %rdi
 2971      000000
 2972              	.LVL355:
 2973 0027 E8000000 		call	_ZN9Fl_Widget10take_focusEv
 2973      00
 2974              	.LVL356:
 146:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  }
 2975              		.loc 9 146 0
 2976 002c 85C0     		testl	%eax, %eax
 2977 002e 0F95C0   		setne	%al
 2978 0031 0FB6C0   		movzbl	%al, %eax
 2979              	.L351:
 2980              		.loc 9 150 0
 2981 0034 4883C408 		addq	$8, %rsp
 2982              		.cfi_remember_state
 2983              		.cfi_def_cfa_offset 8
 2984 0038 C3       		ret
 2985              	.LVL357:
 2986 0039 0F1F8000 		.p2align 4,,10
 2986      000000
 2987              		.p2align 3
 2988              	.L348:
 2989              		.cfi_restore_state
 2990              	.LBB992:
 2991              	.LBB993:
 2992              	.LBB994:
 2993              	.LBB995:
 721:fltk-1.3.4-1/FL/Fl.H ****   /**
 2994              		.loc 4 721 0
 2995 0040 8B150000 		movl	_ZN2Fl8e_keysymE(%rip), %edx
 2995      0000
 2996              	.LBE995:
 2997              	.LBE994:
 136:fltk-1.3.4-1/FL/Fl_Spinner.H **** 			up_button_.do_callback();
 2998              		.loc 9 136 0
 2999 0046 81FA52FF 		cmpl	$65362, %edx
 2999      0000
 3000 004c 7432     		je	.L363
 142:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 3001              		.loc 9 142 0
 3002 004e 31C0     		xorl	%eax, %eax
 139:fltk-1.3.4-1/FL/Fl_Spinner.H **** 			down_button_.do_callback();
 3003              		.loc 9 139 0
 3004 0050 81FA54FF 		cmpl	$65364, %edx
 3004      0000
 3005 0056 75DC     		jne	.L351
 140:fltk-1.3.4-1/FL/Fl_Spinner.H **** 			return 1;
 3006              		.loc 9 140 0
 3007 0058 488D8710 		leaq	528(%rdi), %rax
 3007      020000
 3008              	.LVL358:
 3009              	.LBB996:
 3010              	.LBB997:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3011              		.loc 1 861 0
 3012 005f 488B9728 		movq	552(%rdi), %rdx
 3012      020000
 3013 0066 4889C6   		movq	%rax, %rsi
 3014              	.LVL359:
 3015 0069 4889C7   		movq	%rax, %rdi
 3016              	.LVL360:
 3017 006c E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3017      00
 3018              	.LVL361:
 3019              	.LBE997:
 3020              	.LBE996:
 141:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      } else return 0;
 3021              		.loc 9 141 0
 3022 0071 B8010000 		movl	$1, %eax
 3022      00
 3023 0076 EBBC     		jmp	.L351
 3024              	.LVL362:
 3025 0078 0F1F8400 		.p2align 4,,10
 3025      00000000 
 3026              		.p2align 3
 3027              	.L363:
 137:fltk-1.3.4-1/FL/Fl_Spinner.H **** 			return 1;
 3028              		.loc 9 137 0
 3029 0080 488D8790 		leaq	400(%rdi), %rax
 3029      010000
 3030              	.LVL363:
 3031              	.LBB998:
 3032              	.LBB999:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3033              		.loc 1 861 0
 3034 0087 488B97A8 		movq	424(%rdi), %rdx
 3034      010000
 3035 008e 4889C6   		movq	%rax, %rsi
 3036              	.LVL364:
 3037 0091 4889C7   		movq	%rax, %rdi
 3038              	.LVL365:
 3039 0094 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3039      00
 3040              	.LVL366:
 3041              	.LBE999:
 3042              	.LBE998:
 138:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		      } else if (Fl::event_key() == FL_Down) {
 3043              		.loc 9 138 0
 3044 0099 B8010000 		movl	$1, %eax
 3044      00
 3045 009e EB94     		jmp	.L351
 3046              	.LBE993:
 3047              	.LBE992:
 3048              		.cfi_endproc
 3049              	.LFE626:
 3051              		.section	.text.unlikely._ZN10Fl_Spinner6handleEi,"axG",@progbits,_ZN10Fl_Spinner6handleEi,comdat
 3052              	.LCOLDE23:
 3053              		.section	.text._ZN10Fl_Spinner6handleEi,"axG",@progbits,_ZN10Fl_Spinner6handleEi,comdat
 3054              	.LHOTE23:
 3055              		.section	.text.unlikely._ZN8Fl_GroupC2EiiiiPKc,"ax",@progbits
 3056              		.align 2
 3057              	.LCOLDB24:
 3058              		.section	.text._ZN8Fl_GroupC2EiiiiPKc,"ax",@progbits
 3059              	.LHOTB24:
 3060              		.align 2
 3061              		.p2align 4,,15
 3062              		.globl	_ZN8Fl_GroupC2EiiiiPKc
 3064              	_ZN8Fl_GroupC2EiiiiPKc:
 3065              	.LFB662:
 363:fltk-1.3.4-1/src/Fl_Group.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3066              		.loc 3 363 0
 3067              		.cfi_startproc
 3068              	.LVL367:
 3069 0000 53       		pushq	%rbx
 3070              		.cfi_def_cfa_offset 16
 3071              		.cfi_offset 3, -16
 363:fltk-1.3.4-1/src/Fl_Group.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3072              		.loc 3 363 0
 3073 0001 4889FB   		movq	%rdi, %rbx
 3074              	.LBB1000:
 364:fltk-1.3.4-1/src/Fl_Group.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 3075              		.loc 3 364 0
 3076 0004 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 3076      00
 3077              	.LVL368:
 3078 0009 48C70300 		movq	$_ZTV8Fl_Group+16, (%rbx)
 3078      000000
 3079              	.LVL369:
 3080              	.LBB1001:
 3081              	.LBB1002:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3082              		.loc 1 357 0
 3083 0010 C7435401 		movl	$1, 84(%rbx)
 3083      000000
 3084              	.LVL370:
 3085              	.LBE1002:
 3086              	.LBE1001:
 366:fltk-1.3.4-1/src/Fl_Group.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 3087              		.loc 3 366 0
 3088 0017 C7839000 		movl	$0, 144(%rbx)
 3088      00000000 
 3088      0000
 367:fltk-1.3.4-1/src/Fl_Group.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 3089              		.loc 3 367 0
 3090 0021 48C74378 		movq	$0, 120(%rbx)
 3090      00000000 
 368:fltk-1.3.4-1/src/Fl_Group.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 3091              		.loc 3 368 0
 3092 0029 48C78380 		movq	$0, 128(%rbx)
 3092      00000000 
 3092      000000
 369:fltk-1.3.4-1/src/Fl_Group.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 3093              		.loc 3 369 0
 3094 0034 48899B88 		movq	%rbx, 136(%rbx)
 3094      000000
 370:fltk-1.3.4-1/src/Fl_Group.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 3095              		.loc 3 370 0
 3096 003b 48C78398 		movq	$0, 152(%rbx)
 3096      00000000 
 3096      000000
 3097              	.LVL371:
 3098              	.LBB1003:
 3099              	.LBB1004:
  69:fltk-1.3.4-1/src/Fl_Group.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 3100              		.loc 3 69 0
 3101 0046 48891D00 		movq	%rbx, _ZN8Fl_Group8current_E(%rip)
 3101      000000
 3102              	.LVL372:
 3103              	.LBE1004:
 3104              	.LBE1003:
 3105              	.LBE1000:
 375:fltk-1.3.4-1/src/Fl_Group.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 3106              		.loc 3 375 0
 3107 004d 5B       		popq	%rbx
 3108              		.cfi_def_cfa_offset 8
 3109              	.LVL373:
 3110 004e C3       		ret
 3111              		.cfi_endproc
 3112              	.LFE662:
 3114              		.section	.text.unlikely._ZN8Fl_GroupC2EiiiiPKc
 3115              	.LCOLDE24:
 3116              		.section	.text._ZN8Fl_GroupC2EiiiiPKc
 3117              	.LHOTE24:
 3118              		.globl	_ZN8Fl_GroupC1EiiiiPKc
 3119              		.set	_ZN8Fl_GroupC1EiiiiPKc,_ZN8Fl_GroupC2EiiiiPKc
 3120              		.section	.text.unlikely._ZN8Fl_Group6removeEi,"ax",@progbits
 3121              		.align 2
 3122              	.LCOLDB25:
 3123              		.section	.text._ZN8Fl_Group6removeEi,"ax",@progbits
 3124              	.LHOTB25:
 3125              		.align 2
 3126              		.p2align 4,,15
 3127              		.globl	_ZN8Fl_Group6removeEi
 3129              	_ZN8Fl_Group6removeEi:
 3130              	.LFB671:
 503:fltk-1.3.4-1/src/Fl_Group.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 3131              		.loc 3 503 0
 3132              		.cfi_startproc
 3133              	.LVL374:
 504:fltk-1.3.4-1/src/Fl_Group.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3134              		.loc 3 504 0
 3135 0000 85F6     		testl	%esi, %esi
 3136 0002 0F889600 		js	.L386
 3136      0000
 503:fltk-1.3.4-1/src/Fl_Group.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 3137              		.loc 3 503 0 discriminator 1
 3138 0008 55       		pushq	%rbp
 3139              		.cfi_def_cfa_offset 16
 3140              		.cfi_offset 6, -16
 3141 0009 53       		pushq	%rbx
 3142              		.cfi_def_cfa_offset 24
 3143              		.cfi_offset 3, -24
 3144 000a 4889FB   		movq	%rdi, %rbx
 3145 000d 4883EC08 		subq	$8, %rsp
 3146              		.cfi_def_cfa_offset 32
 504:fltk-1.3.4-1/src/Fl_Group.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3147              		.loc 3 504 0 discriminator 1
 3148 0011 8B979000 		movl	144(%rdi), %edx
 3148      0000
 3149 0017 39D6     		cmpl	%edx, %esi
 3150 0019 7D7D     		jge	.L366
 3151              	.LVL375:
 3152              	.LBB1019:
 3153              	.LBB1020:
 3154              	.LBB1021:
 3155              	.LBB1022:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 3156              		.loc 3 45 0
 3157 001b 83FA01   		cmpl	$1, %edx
 3158 001e 488D7F78 		leaq	120(%rdi), %rdi
 3159              	.LVL376:
 3160 0022 7E04     		jle	.L369
 3161 0024 488B7B78 		movq	120(%rbx), %rdi
 3162              	.L369:
 3163              	.LVL377:
 3164              	.LBE1022:
 3165              	.LBE1021:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3166              		.loc 2 79 0
 3167 0028 4863CE   		movslq	%esi, %rcx
 3168 002b 488D04CD 		leaq	0(,%rcx,8), %rax
 3168      00000000 
 3169 0033 488B0CCF 		movq	(%rdi,%rcx,8), %rcx
 3170              	.LVL378:
 3171              	.LBE1020:
 3172              	.LBE1019:
 506:fltk-1.3.4-1/src/Fl_Group.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 3173              		.loc 3 506 0
 3174 0037 48398B80 		cmpq	%rcx, 128(%rbx)
 3174      000000
 3175 003e 0F849400 		je	.L387
 3175      0000
 3176              	.L370:
 507:fltk-1.3.4-1/src/Fl_Group.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 3177              		.loc 3 507 0
 3178 0044 483B5908 		cmpq	8(%rcx), %rbx
 3179 0048 7476     		je	.L388
 3180              	.L371:
 3181              	.LVL379:
 3182              	.LBB1023:
 3183              	.LBB1024:
 513:fltk-1.3.4-1/src/Fl_Group.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3184              		.loc 3 513 0
 3185 004a 83EA01   		subl	$1, %edx
 3186              	.LBB1025:
 514:fltk-1.3.4-1/src/Fl_Group.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 3187              		.loc 3 514 0
 3188 004d 83FA01   		cmpl	$1, %edx
 3189              	.LBE1025:
 513:fltk-1.3.4-1/src/Fl_Group.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3190              		.loc 3 513 0
 3191 0050 89939000 		movl	%edx, 144(%rbx)
 3191      0000
 3192              	.LBB1027:
 514:fltk-1.3.4-1/src/Fl_Group.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 3193              		.loc 3 514 0
 3194 0056 7448     		je	.L389
 518:fltk-1.3.4-1/src/Fl_Group.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 3195              		.loc 3 518 0
 3196 0058 7E22     		jle	.L374
 519:fltk-1.3.4-1/src/Fl_Group.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3197              		.loc 3 519 0
 3198 005a 39D6     		cmpl	%edx, %esi
 3199 005c 7D1E     		jge	.L374
 3200              	.LVL380:
 3201 005e 6690     		.p2align 4,,10
 3202              		.p2align 3
 3203              	.L383:
 3204 0060 488B5378 		movq	120(%rbx), %rdx
 3205 0064 83C601   		addl	$1, %esi
 3206              	.LVL381:
 3207 0067 488B4C02 		movq	8(%rdx,%rax), %rcx
 3207      08
 3208 006c 48890C02 		movq	%rcx, (%rdx,%rax)
 3209 0070 4883C008 		addq	$8, %rax
 3210 0074 39B39000 		cmpl	%esi, 144(%rbx)
 3210      0000
 3211 007a 7FE4     		jg	.L383
 3212              	.LVL382:
 3213              	.L374:
 3214              	.LBE1027:
 3215              	.LBB1028:
 3216              	.LBB1029:
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 3217              		.loc 3 573 0
 3218 007c 488BBB98 		movq	152(%rbx), %rdi
 3218      000000
 3219 0083 4885FF   		testq	%rdi, %rdi
 3220 0086 7405     		je	.L378
 3221 0088 E8000000 		call	_ZdaPv
 3221      00
 3222              	.LVL383:
 3223              	.L378:
 3224 008d 48C78398 		movq	$0, 152(%rbx)
 3224      00000000 
 3224      000000
 3225              	.LVL384:
 3226              	.L366:
 3227              	.LBE1029:
 3228              	.LBE1028:
 3229              	.LBE1024:
 3230              	.LBE1023:
 522:fltk-1.3.4-1/src/Fl_Group.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 3231              		.loc 3 522 0
 3232 0098 4883C408 		addq	$8, %rsp
 3233              		.cfi_def_cfa_offset 24
 3234 009c 5B       		popq	%rbx
 3235              		.cfi_restore 3
 3236              		.cfi_def_cfa_offset 16
 3237              	.LVL385:
 3238 009d 5D       		popq	%rbp
 3239              		.cfi_restore 6
 3240              		.cfi_def_cfa_offset 8
 3241              	.L386:
 3242 009e F3C3     		rep ret
 3243              	.LVL386:
 3244              		.p2align 4,,10
 3245              		.p2align 3
 3246              	.L389:
 3247              		.cfi_def_cfa_offset 32
 3248              		.cfi_offset 3, -24
 3249              		.cfi_offset 6, -16
 3250              	.LBB1032:
 3251              	.LBB1031:
 3252              	.LBB1030:
 3253              	.LBB1026:
 515:fltk-1.3.4-1/src/Fl_Group.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 3254              		.loc 3 515 0
 3255 00a0 83FE01   		cmpl	$1, %esi
 3256 00a3 488B7B78 		movq	120(%rbx), %rdi
 3257 00a7 4819C0   		sbbq	%rax, %rax
 3258 00aa 83E008   		andl	$8, %eax
 3259 00ad 488B2C07 		movq	(%rdi,%rax), %rbp
 3260              	.LVL387:
 516:fltk-1.3.4-1/src/Fl_Group.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 3261              		.loc 3 516 0
 3262 00b1 E8000000 		call	free
 3262      00
 3263              	.LVL388:
 517:fltk-1.3.4-1/src/Fl_Group.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3264              		.loc 3 517 0
 3265 00b6 48896B78 		movq	%rbp, 120(%rbx)
 3266 00ba EBC0     		jmp	.L374
 3267              	.LVL389:
 3268 00bc 0F1F4000 		.p2align 4,,10
 3269              		.p2align 3
 3270              	.L388:
 3271              	.LBE1026:
 3272              	.LBE1030:
 3273              	.LBE1031:
 3274              	.LBE1032:
 508:fltk-1.3.4-1/src/Fl_Group.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 3275              		.loc 3 508 0
 3276 00c0 48C74108 		movq	$0, 8(%rcx)
 3276      00000000 
 3277 00c8 8B939000 		movl	144(%rbx), %edx
 3277      0000
 3278 00ce E977FFFF 		jmp	.L371
 3278      FF
 3279              		.p2align 4,,10
 3280 00d3 0F1F4400 		.p2align 3
 3280      00
 3281              	.L387:
 506:fltk-1.3.4-1/src/Fl_Group.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 3282              		.loc 3 506 0 discriminator 1
 3283 00d8 48C78380 		movq	$0, 128(%rbx)
 3283      00000000 
 3283      000000
 3284 00e3 E95CFFFF 		jmp	.L370
 3284      FF
 3285              		.cfi_endproc
 3286              	.LFE671:
 3288              		.section	.text.unlikely._ZN8Fl_Group6removeEi
 3289              	.LCOLDE25:
 3290              		.section	.text._ZN8Fl_Group6removeEi
 3291              	.LHOTE25:
 3292              		.section	.text.unlikely._ZN8Fl_Group5clearEv,"ax",@progbits
 3293              		.align 2
 3294              	.LCOLDB26:
 3295              		.section	.text._ZN8Fl_Group5clearEv,"ax",@progbits
 3296              	.LHOTB26:
 3297              		.align 2
 3298              		.p2align 4,,15
 3299              		.globl	_ZN8Fl_Group5clearEv
 3301              	_ZN8Fl_Group5clearEv:
 3302              	.LFB664:
 383:fltk-1.3.4-1/src/Fl_Group.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 3303              		.loc 3 383 0
 3304              		.cfi_startproc
 3305              	.LVL390:
 3306 0000 4154     		pushq	%r12
 3307              		.cfi_def_cfa_offset 16
 3308              		.cfi_offset 12, -16
 3309 0002 55       		pushq	%rbp
 3310              		.cfi_def_cfa_offset 24
 3311              		.cfi_offset 6, -24
 3312 0003 53       		pushq	%rbx
 3313              		.cfi_def_cfa_offset 32
 3314              		.cfi_offset 3, -32
 383:fltk-1.3.4-1/src/Fl_Group.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 3315              		.loc 3 383 0
 3316 0004 4889FB   		movq	%rdi, %rbx
 384:fltk-1.3.4-1/src/Fl_Group.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 3317              		.loc 3 384 0
 3318 0007 48C78780 		movq	$0, 128(%rdi)
 3318      00000000 
 3318      000000
 385:fltk-1.3.4-1/src/Fl_Group.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 3319              		.loc 3 385 0
 3320 0012 4889BF88 		movq	%rdi, 136(%rdi)
 3320      000000
 3321              	.LVL391:
 3322              	.LBB1033:
 3323              	.LBB1034:
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 3324              		.loc 3 573 0
 3325 0019 488BBF98 		movq	152(%rdi), %rdi
 3325      000000
 3326              	.LVL392:
 3327 0020 4885FF   		testq	%rdi, %rdi
 3328 0023 7405     		je	.L391
 3329 0025 E8000000 		call	_ZdaPv
 3329      00
 3330              	.LVL393:
 3331              	.L391:
 3332              	.LBE1034:
 3333              	.LBE1033:
 3334              	.LBB1036:
 3335              	.LBB1037:
 3336              		.loc 4 835 0
 3337 002a 488B2D00 		movq	_ZN2Fl7pushed_E(%rip), %rbp
 3337      000000
 3338              	.LBE1037:
 3339              	.LBE1036:
 3340              	.LBB1038:
 3341              	.LBB1035:
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 3342              		.loc 3 573 0
 3343 0031 48C78398 		movq	$0, 152(%rbx)
 3343      00000000 
 3343      000000
 3344              	.LVL394:
 3345              	.LBE1035:
 3346              	.LBE1038:
 394:fltk-1.3.4-1/src/Fl_Group.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 3347              		.loc 3 394 0
 3348 003c 4889DF   		movq	%rbx, %rdi
 3349 003f 4889EE   		movq	%rbp, %rsi
 3350 0042 E8000000 		call	_ZNK9Fl_Widget8containsEPKS_
 3350      00
 3351              	.LVL395:
 3352 0047 85C0     		testl	%eax, %eax
 3353 0049 0F84E100 		je	.L414
 3353      0000
 3354              	.LVL396:
 395:fltk-1.3.4-1/src/Fl_Group.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3355              		.loc 3 395 0
 3356 004f 4889DF   		movq	%rbx, %rdi
 394:fltk-1.3.4-1/src/Fl_Group.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 3357              		.loc 3 394 0
 3358 0052 4889DD   		movq	%rbx, %rbp
 395:fltk-1.3.4-1/src/Fl_Group.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3359              		.loc 3 395 0
 3360 0055 E8000000 		call	_ZN2Fl6pushedEP9Fl_Widget
 3360      00
 3361              	.LVL397:
 3362              	.LBB1039:
 403:fltk-1.3.4-1/src/Fl_Group.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 3363              		.loc 3 403 0
 3364 005a 8B839000 		movl	144(%rbx), %eax
 3364      0000
 3365 0060 83F801   		cmpl	$1, %eax
 3366 0063 7E71     		jle	.L395
 3367              	.LVL398:
 3368              	.LBB1040:
 3369              	.LBB1041:
 3370              	.LBB1042:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 3371              		.loc 3 45 0
 3372 0065 488B4B78 		movq	120(%rbx), %rcx
 3373              	.LVL399:
 3374              	.LBE1042:
 3375              	.LBE1041:
 3376              	.LBB1044:
 406:fltk-1.3.4-1/src/Fl_Group.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 3377              		.loc 3 406 0
 3378 0069 83E801   		subl	$1, %eax
 3379              	.LVL400:
 3380              	.LBE1044:
 3381              	.LBE1040:
 3382              	.LBE1039:
 394:fltk-1.3.4-1/src/Fl_Group.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 3383              		.loc 3 394 0
 3384 006c 4889DD   		movq	%rbx, %rbp
 3385              	.LVL401:
 3386              	.L394:
 3387 006f 4898     		cltq
 394:fltk-1.3.4-1/src/Fl_Group.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 3388              		.loc 3 394 0 is_stmt 0 discriminator 2
 3389 0071 31FF     		xorl	%edi, %edi
 3390 0073 488D34C1 		leaq	(%rcx,%rax,8), %rsi
 3391              	.LVL402:
 3392 0077 660F1F84 		.p2align 4,,10
 3392      00000000 
 3392      00
 3393              		.p2align 3
 3394              	.L397:
 3395              	.LBB1050:
 3396              	.LBB1048:
 3397              	.LBB1045:
 407:fltk-1.3.4-1/src/Fl_Group.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3398              		.loc 3 407 0 is_stmt 1 discriminator 2
 3399 0080 488B01   		movq	(%rcx), %rax
 3400              	.LVL403:
 408:fltk-1.3.4-1/src/Fl_Group.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 3401              		.loc 3 408 0 discriminator 2
 3402 0083 488B16   		movq	(%rsi), %rdx
 406:fltk-1.3.4-1/src/Fl_Group.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 3403              		.loc 3 406 0 discriminator 2
 3404 0086 83C701   		addl	$1, %edi
 3405              	.LVL404:
 3406 0089 4883C108 		addq	$8, %rcx
 3407 008d 4883EE08 		subq	$8, %rsi
 408:fltk-1.3.4-1/src/Fl_Group.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 3408              		.loc 3 408 0 discriminator 2
 3409 0091 488951F8 		movq	%rdx, -8(%rcx)
 409:fltk-1.3.4-1/src/Fl_Group.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 3410              		.loc 3 409 0 discriminator 2
 3411 0095 48894608 		movq	%rax, 8(%rsi)
 406:fltk-1.3.4-1/src/Fl_Group.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 3412              		.loc 3 406 0 discriminator 2
 3413 0099 8B839000 		movl	144(%rbx), %eax
 3413      0000
 3414              	.LVL405:
 3415 009f 89C2     		movl	%eax, %edx
 3416 00a1 C1EA1F   		shrl	$31, %edx
 3417 00a4 01C2     		addl	%eax, %edx
 3418 00a6 D1FA     		sarl	%edx
 3419 00a8 39FA     		cmpl	%edi, %edx
 3420 00aa 7FD4     		jg	.L397
 3421              	.LBE1045:
 3422              	.LBE1048:
 3423              	.LBE1050:
 414:fltk-1.3.4-1/src/Fl_Group.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 3424              		.loc 3 414 0
 3425 00ac 85C0     		testl	%eax, %eax
 3426 00ae 752A     		jne	.L415
 3427              	.LVL406:
 3428              		.p2align 4,,10
 3429              		.p2align 3
 3430              	.L398:
 430:fltk-1.3.4-1/src/Fl_Group.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3431              		.loc 3 430 0
 3432 00b0 4839EB   		cmpq	%rbp, %rbx
 3433 00b3 0F849700 		je	.L390
 3433      0000
 432:fltk-1.3.4-1/src/Fl_Group.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3434              		.loc 3 432 0 discriminator 1
 3435 00b9 5B       		popq	%rbx
 3436              		.cfi_remember_state
 3437              		.cfi_def_cfa_offset 24
 3438              	.LVL407:
 430:fltk-1.3.4-1/src/Fl_Group.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3439              		.loc 3 430 0 discriminator 1
 3440 00ba 4889EF   		movq	%rbp, %rdi
 432:fltk-1.3.4-1/src/Fl_Group.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3441              		.loc 3 432 0 discriminator 1
 3442 00bd 5D       		popq	%rbp
 3443              		.cfi_def_cfa_offset 16
 3444              	.LVL408:
 3445 00be 415C     		popq	%r12
 3446              		.cfi_def_cfa_offset 8
 430:fltk-1.3.4-1/src/Fl_Group.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3447              		.loc 3 430 0 discriminator 1
 3448 00c0 E9000000 		jmp	_ZN2Fl6pushedEP9Fl_Widget
 3448      00
 3449              	.LVL409:
 3450              		.p2align 4,,10
 3451 00c5 0F1F00   		.p2align 3
 3452              	.L401:
 3453              		.cfi_restore_state
 3454              	.LBB1051:
 426:fltk-1.3.4-1/src/Fl_Group.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 3455              		.loc 3 426 0
 3456 00c8 4889DF   		movq	%rbx, %rdi
 3457 00cb E8000000 		call	_ZN8Fl_Group6removeEi
 3457      00
 3458              	.LVL410:
 3459              	.L404:
 3460 00d0 8B839000 		movl	144(%rbx), %eax
 3460      0000
 3461              	.L395:
 3462              	.LBE1051:
 414:fltk-1.3.4-1/src/Fl_Group.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 3463              		.loc 3 414 0
 3464 00d6 85C0     		testl	%eax, %eax
 3465 00d8 74D6     		je	.L398
 3466              	.L415:
 3467              	.LBB1060:
 3468              	.LBB1052:
 3469              	.LBB1053:
 3470              	.LBB1054:
 3471              	.LBB1055:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 3472              		.loc 3 45 0
 3473 00da 83F801   		cmpl	$1, %eax
 3474              	.LBE1055:
 3475              	.LBE1054:
 3476              	.LBE1053:
 3477              	.LBE1052:
 415:fltk-1.3.4-1/src/Fl_Group.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 3478              		.loc 3 415 0
 3479 00dd 8D70FF   		leal	-1(%rax), %esi
 3480              	.LVL411:
 3481              	.LBB1059:
 3482              	.LBB1058:
 3483              	.LBB1057:
 3484              	.LBB1056:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 3485              		.loc 3 45 0
 3486 00e0 488D4B78 		leaq	120(%rbx), %rcx
 3487 00e4 7E04     		jle	.L400
 3488 00e6 488B4B78 		movq	120(%rbx), %rcx
 3489              	.L400:
 3490              	.LVL412:
 3491              	.LBE1056:
 3492              	.LBE1057:
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 3493              		.loc 2 79 0
 3494 00ea 4863D6   		movslq	%esi, %rdx
 3495 00ed 4C8B24D1 		movq	(%rcx,%rdx,8), %r12
 3496              	.LVL413:
 3497              	.LBE1058:
 3498              	.LBE1059:
 417:fltk-1.3.4-1/src/Fl_Group.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 3499              		.loc 3 417 0
 3500 00f1 493B5C24 		cmpq	8(%r12), %rbx
 3500      08
 3501 00f6 75D0     		jne	.L401
 418:fltk-1.3.4-1/src/Fl_Group.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 3502              		.loc 3 418 0
 3503 00f8 83F802   		cmpl	$2, %eax
 3504 00fb 7E23     		jle	.L402
 419:fltk-1.3.4-1/src/Fl_Group.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 3505              		.loc 3 419 0
 3506 00fd 49C74424 		movq	$0, 8(%r12)
 3506      08000000 
 3506      00
 420:fltk-1.3.4-1/src/Fl_Group.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 3507              		.loc 3 420 0
 3508 0106 83AB9000 		subl	$1, 144(%rbx)
 3508      000001
 3509              	.LVL414:
 3510              	.L403:
 424:fltk-1.3.4-1/src/Fl_Group.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 3511              		.loc 3 424 0
 3512 010d 498B0424 		movq	(%r12), %rax
 3513 0111 4C89E7   		movq	%r12, %rdi
 3514 0114 FF5008   		call	*8(%rax)
 3515              	.LVL415:
 3516 0117 EBB7     		jmp	.L404
 3517              	.LVL416:
 3518 0119 0F1F8000 		.p2align 4,,10
 3518      000000
 3519              		.p2align 3
 3520              	.L402:
 422:fltk-1.3.4-1/src/Fl_Group.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 3521              		.loc 3 422 0
 3522 0120 4889DF   		movq	%rbx, %rdi
 3523 0123 E8000000 		call	_ZN8Fl_Group6removeEi
 3523      00
 3524              	.LVL417:
 3525 0128 EBE3     		jmp	.L403
 3526              	.LVL418:
 3527 012a 660F1F44 		.p2align 4,,10
 3527      0000
 3528              		.p2align 3
 3529              	.L414:
 3530              	.LBE1060:
 395:fltk-1.3.4-1/src/Fl_Group.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3531              		.loc 3 395 0
 3532 0130 4889DF   		movq	%rbx, %rdi
 3533 0133 E8000000 		call	_ZN2Fl6pushedEP9Fl_Widget
 3533      00
 3534              	.LVL419:
 3535              	.LBB1061:
 403:fltk-1.3.4-1/src/Fl_Group.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 3536              		.loc 3 403 0
 3537 0138 8B839000 		movl	144(%rbx), %eax
 3537      0000
 3538 013e 83F801   		cmpl	$1, %eax
 3539 0141 7E93     		jle	.L395
 3540              	.LVL420:
 3541              	.LBB1049:
 3542              	.LBB1046:
 3543              	.LBB1043:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 3544              		.loc 3 45 0
 3545 0143 488B4B78 		movq	120(%rbx), %rcx
 3546              	.LVL421:
 3547              	.LBE1043:
 3548              	.LBE1046:
 3549              	.LBB1047:
 406:fltk-1.3.4-1/src/Fl_Group.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 3550              		.loc 3 406 0
 3551 0147 83E801   		subl	$1, %eax
 3552              	.LVL422:
 3553 014a E920FFFF 		jmp	.L394
 3553      FF
 3554              	.LVL423:
 3555 014f 90       		.p2align 4,,10
 3556              		.p2align 3
 3557              	.L390:
 3558              	.LBE1047:
 3559              	.LBE1049:
 3560              	.LBE1061:
 432:fltk-1.3.4-1/src/Fl_Group.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3561              		.loc 3 432 0
 3562 0150 5B       		popq	%rbx
 3563              		.cfi_def_cfa_offset 24
 3564              	.LVL424:
 3565 0151 5D       		popq	%rbp
 3566              		.cfi_def_cfa_offset 16
 3567              	.LVL425:
 3568 0152 415C     		popq	%r12
 3569              		.cfi_def_cfa_offset 8
 3570 0154 C3       		ret
 3571              		.cfi_endproc
 3572              	.LFE664:
 3574              		.section	.text.unlikely._ZN8Fl_Group5clearEv
 3575              	.LCOLDE26:
 3576              		.section	.text._ZN8Fl_Group5clearEv
 3577              	.LHOTE26:
 3578              		.section	.text.unlikely._ZN8Fl_GroupD2Ev,"ax",@progbits
 3579              		.align 2
 3580              	.LCOLDB27:
 3581              		.section	.text._ZN8Fl_GroupD2Ev,"ax",@progbits
 3582              	.LHOTB27:
 3583              		.align 2
 3584              		.p2align 4,,15
 3585              		.globl	_ZN8Fl_GroupD2Ev
 3587              	_ZN8Fl_GroupD2Ev:
 3588              	.LFB666:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3589              		.loc 3 448 0
 3590              		.cfi_startproc
 3591              	.LVL426:
 3592 0000 53       		pushq	%rbx
 3593              		.cfi_def_cfa_offset 16
 3594              		.cfi_offset 3, -16
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3595              		.loc 3 448 0
 3596 0001 4889FB   		movq	%rdi, %rbx
 3597              	.LBB1062:
 3598 0004 48C70700 		movq	$_ZTV8Fl_Group+16, (%rdi)
 3598      000000
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3599              		.loc 3 449 0
 3600 000b E8000000 		call	_ZN8Fl_Group5clearEv
 3600      00
 3601              	.LVL427:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3602              		.loc 3 448 0
 3603 0010 4889DF   		movq	%rbx, %rdi
 3604              	.LBE1062:
 450:fltk-1.3.4-1/src/Fl_Group.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3605              		.loc 3 450 0
 3606 0013 5B       		popq	%rbx
 3607              		.cfi_def_cfa_offset 8
 3608              	.LVL428:
 3609              	.LBB1063:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3610              		.loc 3 448 0
 3611 0014 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 3611      00
 3612              	.LVL429:
 3613              	.LBE1063:
 3614              		.cfi_endproc
 3615              	.LFE666:
 3617              		.section	.text.unlikely._ZN8Fl_GroupD2Ev
 3618              	.LCOLDE27:
 3619              		.section	.text._ZN8Fl_GroupD2Ev
 3620              	.LHOTE27:
 3621              		.globl	_ZN8Fl_GroupD1Ev
 3622              		.set	_ZN8Fl_GroupD1Ev,_ZN8Fl_GroupD2Ev
 3623              		.section	.text.unlikely._ZN8Fl_GroupD0Ev,"ax",@progbits
 3624              		.align 2
 3625              	.LCOLDB28:
 3626              		.section	.text._ZN8Fl_GroupD0Ev,"ax",@progbits
 3627              	.LHOTB28:
 3628              		.align 2
 3629              		.p2align 4,,15
 3630              		.globl	_ZN8Fl_GroupD0Ev
 3632              	_ZN8Fl_GroupD0Ev:
 3633              	.LFB668:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3634              		.loc 3 448 0
 3635              		.cfi_startproc
 3636              	.LVL430:
 3637 0000 53       		pushq	%rbx
 3638              		.cfi_def_cfa_offset 16
 3639              		.cfi_offset 3, -16
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3640              		.loc 3 448 0
 3641 0001 4889FB   		movq	%rdi, %rbx
 3642              	.LBB1064:
 3643              	.LBB1065:
 3644 0004 48C70700 		movq	$_ZTV8Fl_Group+16, (%rdi)
 3644      000000
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3645              		.loc 3 449 0
 3646 000b E8000000 		call	_ZN8Fl_Group5clearEv
 3646      00
 3647              	.LVL431:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3648              		.loc 3 448 0
 3649 0010 4889DF   		movq	%rbx, %rdi
 3650 0013 E8000000 		call	_ZN9Fl_WidgetD2Ev
 3650      00
 3651              	.LVL432:
 3652              	.LBE1065:
 3653              	.LBE1064:
 450:fltk-1.3.4-1/src/Fl_Group.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3654              		.loc 3 450 0
 3655 0018 4889DF   		movq	%rbx, %rdi
 3656 001b 5B       		popq	%rbx
 3657              		.cfi_def_cfa_offset 8
 3658              	.LVL433:
 3659 001c E9000000 		jmp	_ZdlPv
 3659      00
 3660              	.LVL434:
 3661              		.cfi_endproc
 3662              	.LFE668:
 3664              		.section	.text.unlikely._ZN8Fl_GroupD0Ev
 3665              	.LCOLDE28:
 3666              		.section	.text._ZN8Fl_GroupD0Ev
 3667              	.LHOTE28:
 3668              		.section	.text.unlikely._ZN10Fl_SpinnerD2Ev,"axG",@progbits,_ZN10Fl_SpinnerD5Ev,comdat
 3669              		.align 2
 3670              	.LCOLDB29:
 3671              		.section	.text._ZN10Fl_SpinnerD2Ev,"axG",@progbits,_ZN10Fl_SpinnerD5Ev,comdat
 3672              	.LHOTB29:
 3673              		.align 2
 3674              		.p2align 4,,15
 3675              		.weak	_ZN10Fl_SpinnerD2Ev
 3677              	_ZN10Fl_SpinnerD2Ev:
 3678              	.LFB688:
  45:fltk-1.3.4-1/FL/Fl_Spinner.H ****  
 3679              		.loc 9 45 0
 3680              		.cfi_startproc
 3681              	.LVL435:
 3682 0000 53       		pushq	%rbx
 3683              		.cfi_def_cfa_offset 16
 3684              		.cfi_offset 3, -16
  45:fltk-1.3.4-1/FL/Fl_Spinner.H ****  
 3685              		.loc 9 45 0
 3686 0001 4889FB   		movq	%rdi, %rbx
 3687              	.LBB1079:
 3688 0004 48C70700 		movq	$_ZTV10Fl_Spinner+16, (%rdi)
 3688      000000
 3689              	.LVL436:
 3690              	.LBB1080:
 3691              	.LBB1081:
 3692              	.LBB1082:
 3693              		.file 12 "fltk-1.3.4-1/FL/Fl_Button.H"
   1:fltk-1.3.4-1/FL/Fl_Button.H **** //
   2:fltk-1.3.4-1/FL/Fl_Button.H **** // "$Id: Fl_Button.H 10386 2014-10-19 20:17:17Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Button.H **** //
   4:fltk-1.3.4-1/FL/Fl_Button.H **** // Button header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Button.H **** //
   6:fltk-1.3.4-1/FL/Fl_Button.H **** // Copyright 1998-2014 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Button.H **** //
   8:fltk-1.3.4-1/FL/Fl_Button.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Button.H **** // the file "COPYING" which should have been included with this file. If this
  10:fltk-1.3.4-1/FL/Fl_Button.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Button.H **** //
  12:fltk-1.3.4-1/FL/Fl_Button.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Button.H **** //
  14:fltk-1.3.4-1/FL/Fl_Button.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Button.H **** //
  16:fltk-1.3.4-1/FL/Fl_Button.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Button.H **** //
  18:fltk-1.3.4-1/FL/Fl_Button.H **** 
  19:fltk-1.3.4-1/FL/Fl_Button.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Button.H ****    Fl_Button widget . */
  21:fltk-1.3.4-1/FL/Fl_Button.H **** 
  22:fltk-1.3.4-1/FL/Fl_Button.H **** #ifndef Fl_Button_H
  23:fltk-1.3.4-1/FL/Fl_Button.H **** #define Fl_Button_H
  24:fltk-1.3.4-1/FL/Fl_Button.H **** 
  25:fltk-1.3.4-1/FL/Fl_Button.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Button.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Button.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Button.H **** 
  29:fltk-1.3.4-1/FL/Fl_Button.H **** // values for type()
  30:fltk-1.3.4-1/FL/Fl_Button.H **** #define FL_NORMAL_BUTTON	0   /**< value() will be set to 1 during the press of the button and
  31:fltk-1.3.4-1/FL/Fl_Button.H ****                                          reverts back to 0 when the button is released */
  32:fltk-1.3.4-1/FL/Fl_Button.H **** #define FL_TOGGLE_BUTTON	1   ///< value() toggles between 0 and 1 at every click of the button
  33:fltk-1.3.4-1/FL/Fl_Button.H **** #define FL_RADIO_BUTTON		(FL_RESERVED_TYPE+2) /**< is set to 1 at button press, and all other
  34:fltk-1.3.4-1/FL/Fl_Button.H **** 				         buttons in the same group with <tt>type() == FL_RADIO_BUTTON</tt>
  35:fltk-1.3.4-1/FL/Fl_Button.H **** 				         are set to zero.*/
  36:fltk-1.3.4-1/FL/Fl_Button.H **** #define FL_HIDDEN_BUTTON	3   ///< for Forms compatibility
  37:fltk-1.3.4-1/FL/Fl_Button.H **** 
  38:fltk-1.3.4-1/FL/Fl_Button.H **** extern FL_EXPORT Fl_Shortcut fl_old_shortcut(const char*);
  39:fltk-1.3.4-1/FL/Fl_Button.H **** 
  40:fltk-1.3.4-1/FL/Fl_Button.H **** class Fl_Widget_Tracker;
  41:fltk-1.3.4-1/FL/Fl_Button.H **** 
  42:fltk-1.3.4-1/FL/Fl_Button.H **** /**
  43:fltk-1.3.4-1/FL/Fl_Button.H ****   \class Fl_Button
  44:fltk-1.3.4-1/FL/Fl_Button.H ****   \brief Buttons generate callbacks when they are clicked by the user.
  45:fltk-1.3.4-1/FL/Fl_Button.H **** 
  46:fltk-1.3.4-1/FL/Fl_Button.H ****   You control exactly when and how by changing the values for type() and
  47:fltk-1.3.4-1/FL/Fl_Button.H ****   when().  Buttons can also generate callbacks in response to \c FL_SHORTCUT
  48:fltk-1.3.4-1/FL/Fl_Button.H ****   events.  The button can either have an explicit shortcut(int s) value or a
  49:fltk-1.3.4-1/FL/Fl_Button.H ****   letter shortcut can be indicated in the label() with an '\&' character
  50:fltk-1.3.4-1/FL/Fl_Button.H ****   before it.  For the label shortcut it does not matter if \e Alt is held
  51:fltk-1.3.4-1/FL/Fl_Button.H ****   down, but if you have an input field in the same window, the user will have
  52:fltk-1.3.4-1/FL/Fl_Button.H ****   to hold down the \e Alt key so that the input field does not eat the event
  53:fltk-1.3.4-1/FL/Fl_Button.H ****   first as an \c FL_KEYBOARD event.
  54:fltk-1.3.4-1/FL/Fl_Button.H **** 
  55:fltk-1.3.4-1/FL/Fl_Button.H ****   \todo Refactor the doxygen comments for Fl_Button type() documentation.
  56:fltk-1.3.4-1/FL/Fl_Button.H **** 
  57:fltk-1.3.4-1/FL/Fl_Button.H ****   For an Fl_Button object, the type() call returns one of:
  58:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_NORMAL_BUTTON (0): value() remains unchanged after button press.
  59:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_TOGGLE_BUTTON: value() is inverted after button press.
  60:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_RADIO_BUTTON: value() is set to 1 after button press, and all other
  61:fltk-1.3.4-1/FL/Fl_Button.H ****          buttons in the current group with <tt>type() == FL_RADIO_BUTTON</tt>
  62:fltk-1.3.4-1/FL/Fl_Button.H **** 	 are set to zero.
  63:fltk-1.3.4-1/FL/Fl_Button.H **** 
  64:fltk-1.3.4-1/FL/Fl_Button.H ****   \todo Refactor the doxygen comments for Fl_Button when() documentation.
  65:fltk-1.3.4-1/FL/Fl_Button.H **** 
  66:fltk-1.3.4-1/FL/Fl_Button.H ****   For an Fl_Button object, the following when() values are useful, the default
  67:fltk-1.3.4-1/FL/Fl_Button.H ****   being \c FL_WHEN_RELEASE:
  68:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c 0: The callback is not done, instead changed() is turned on.
  69:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_WHEN_RELEASE: The callback is done after the user successfully
  70:fltk-1.3.4-1/FL/Fl_Button.H ****          clicks the button, or when a shortcut is typed.
  71:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_WHEN_CHANGED: The callback is done each time the value() changes
  72:fltk-1.3.4-1/FL/Fl_Button.H ****          (when the user pushes and releases the button, and as the mouse is
  73:fltk-1.3.4-1/FL/Fl_Button.H **** 	 dragged around in and out of the button).
  74:fltk-1.3.4-1/FL/Fl_Button.H **** */
  75:fltk-1.3.4-1/FL/Fl_Button.H **** 
  76:fltk-1.3.4-1/FL/Fl_Button.H **** class FL_EXPORT Fl_Button : public Fl_Widget {
 3694              		.loc 12 76 0
 3695 000b 48C78710 		movq	$_ZTV9Fl_Button+16, 528(%rdi)
 3695      02000000 
 3695      000000
 3696 0016 488DBF10 		leaq	528(%rdi), %rdi
 3696      020000
 3697              	.LVL437:
 3698 001d E8000000 		call	_ZN9Fl_WidgetD2Ev
 3698      00
 3699              	.LVL438:
 3700              	.LBE1082:
 3701              	.LBE1081:
 3702              	.LBE1080:
 3703              	.LBB1083:
 3704              	.LBB1084:
 3705              	.LBB1085:
 3706 0022 488DBB90 		leaq	400(%rbx), %rdi
 3706      010000
 3707              	.LVL439:
 3708 0029 48C78390 		movq	$_ZTV9Fl_Button+16, 400(%rbx)
 3708      01000000 
 3708      000000
 3709 0034 E8000000 		call	_ZN9Fl_WidgetD2Ev
 3709      00
 3710              	.LVL440:
 3711              	.LBE1085:
 3712              	.LBE1084:
 3713              	.LBE1083:
 3714              	.LBB1086:
 3715              	.LBB1087:
 3716              		.file 13 "fltk-1.3.4-1/FL/Fl_Input.H"
   1:fltk-1.3.4-1/FL/Fl_Input.H **** //
   2:fltk-1.3.4-1/FL/Fl_Input.H **** // "$Id: Fl_Input.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Input.H **** //
   4:fltk-1.3.4-1/FL/Fl_Input.H **** // Input header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Input.H **** //
   6:fltk-1.3.4-1/FL/Fl_Input.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Input.H **** //
   8:fltk-1.3.4-1/FL/Fl_Input.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Input.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Input.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Input.H **** //
  12:fltk-1.3.4-1/FL/Fl_Input.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Input.H **** //
  14:fltk-1.3.4-1/FL/Fl_Input.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Input.H **** //
  16:fltk-1.3.4-1/FL/Fl_Input.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Input.H **** //
  18:fltk-1.3.4-1/FL/Fl_Input.H **** 
  19:fltk-1.3.4-1/FL/Fl_Input.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Input.H ****    Fl_Input widget . */
  21:fltk-1.3.4-1/FL/Fl_Input.H **** 
  22:fltk-1.3.4-1/FL/Fl_Input.H **** #ifndef Fl_Input_H
  23:fltk-1.3.4-1/FL/Fl_Input.H **** #define Fl_Input_H
  24:fltk-1.3.4-1/FL/Fl_Input.H **** 
  25:fltk-1.3.4-1/FL/Fl_Input.H **** #include "Fl_Input_.H"
  26:fltk-1.3.4-1/FL/Fl_Input.H **** 
  27:fltk-1.3.4-1/FL/Fl_Input.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Input.H ****   This is the FLTK text input widget. It displays a single line
  29:fltk-1.3.4-1/FL/Fl_Input.H ****   of text and lets the user edit it. Normally it is drawn with an
  30:fltk-1.3.4-1/FL/Fl_Input.H ****   inset box and a white background. The text may contain any
  31:fltk-1.3.4-1/FL/Fl_Input.H ****   characters, and will correctly display any UTF text, using
  32:fltk-1.3.4-1/FL/Fl_Input.H ****   ^X notation for unprintable control characters. It assumes the
  33:fltk-1.3.4-1/FL/Fl_Input.H ****   font can draw any characters of the used scripts, which is true
  34:fltk-1.3.4-1/FL/Fl_Input.H ****   for standard fonts under MSWindows and Mac OS X.
  35:fltk-1.3.4-1/FL/Fl_Input.H ****   Characters can be input using the keyboard or the character palette/map.
  36:fltk-1.3.4-1/FL/Fl_Input.H ****   Character composition is done using dead keys and/or a compose
  37:fltk-1.3.4-1/FL/Fl_Input.H ****   key as defined by the operating system.
  38:fltk-1.3.4-1/FL/Fl_Input.H ****   <P>
  39:fltk-1.3.4-1/FL/Fl_Input.H ****   <TABLE WIDTH=90% BORDER=1 SUMMARY="Fl_Input keyboard and mouse bindings.">
  40:fltk-1.3.4-1/FL/Fl_Input.H ****     <CAPTION ALIGN=TOP>Fl_Input keyboard and mouse bindings.</CAPTION>
  41:fltk-1.3.4-1/FL/Fl_Input.H ****     <TR><TD NOWRAP="NOWRAP" WIDTH="1%">
  42:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Mouse button 1</B> 
  43:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD><TD>
  44:fltk-1.3.4-1/FL/Fl_Input.H ****       Moves the cursor to this point. 
  45:fltk-1.3.4-1/FL/Fl_Input.H ****       Drag selects characters. 
  46:fltk-1.3.4-1/FL/Fl_Input.H ****       Double click selects words. 
  47:fltk-1.3.4-1/FL/Fl_Input.H ****       Triple click selects all line.
  48:fltk-1.3.4-1/FL/Fl_Input.H ****       Shift+click extends the selection.
  49:fltk-1.3.4-1/FL/Fl_Input.H ****       When you select text it is automatically copied to the selection buffer.
  50:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD></TR><TR><TD NOWRAP="NOWRAP">
  51:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Mouse button 2</B> 
  52:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD><TD>
  53:fltk-1.3.4-1/FL/Fl_Input.H ****       Insert the selection buffer at the point clicked.
  54:fltk-1.3.4-1/FL/Fl_Input.H ****       You can also select a region and replace it with the selection buffer
  55:fltk-1.3.4-1/FL/Fl_Input.H ****       by selecting the region with mouse button 2.
  56:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD></TR><TR><TD NOWRAP="NOWRAP">
  57:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Mouse button 3</B>
  58:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD><TD>
  59:fltk-1.3.4-1/FL/Fl_Input.H ****       Currently acts like button 1.
  60:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD></TR><TR><TD NOWRAP="NOWRAP">
  61:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Backspace</B>
  62:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD><TD>
  63:fltk-1.3.4-1/FL/Fl_Input.H ****       Deletes one character to the left, or deletes the selected region.
  64:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD></TR><TR><TD NOWRAP="NOWRAP">
  65:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Delete</B>
  66:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD><TD>
  67:fltk-1.3.4-1/FL/Fl_Input.H ****       Deletes one character to the right, or deletes the selected region.
  68:fltk-1.3.4-1/FL/Fl_Input.H ****       Combine with Shift for equivalent of ^X (copy+cut).
  69:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD></TR><TR><TD NOWRAP="NOWRAP">
  70:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Enter</b>
  71:fltk-1.3.4-1/FL/Fl_Input.H ****     </TD><TD>
  72:fltk-1.3.4-1/FL/Fl_Input.H ****       May cause the callback, see when().
  73:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR></TABLE>
  74:fltk-1.3.4-1/FL/Fl_Input.H **** 
  75:fltk-1.3.4-1/FL/Fl_Input.H ****   <P>
  76:fltk-1.3.4-1/FL/Fl_Input.H **** 
  77:fltk-1.3.4-1/FL/Fl_Input.H ****   <TABLE WIDTH="90%" BORDER="1" SUMMARY="Fl_Input platform specific keyboard bindings.">
  78:fltk-1.3.4-1/FL/Fl_Input.H ****     <CAPTION ALIGN=TOP>Fl_Input platform specific keyboard bindings.</CAPTION>
  79:fltk-1.3.4-1/FL/Fl_Input.H ****   <TR>
  80:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP" WIDTH="1%"><B> Windows/Linux </B></TD>
  81:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP" WIDTH="1%"><B> Mac </B></TD>
  82:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"           ><B> Function </B></TD>
  83:fltk-1.3.4-1/FL/Fl_Input.H **** 
  84:fltk-1.3.4-1/FL/Fl_Input.H ****   </TR><TR>
  85:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^A </B></TD>
  86:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Command-A </B></TD>
  87:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
  88:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Selects all text in the widget.</B>
  89:fltk-1.3.4-1/FL/Fl_Input.H **** 
  90:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
  91:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^C </B></TD>
  92:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Command-C </B></TD>
  93:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
  94:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Copy the current selection to the clipboard.</B>
  95:fltk-1.3.4-1/FL/Fl_Input.H **** 
  96:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
  97:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^I </B></TD>
  98:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^I </B></TD>
  99:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 100:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Insert a tab.</B>
 101:fltk-1.3.4-1/FL/Fl_Input.H **** 
 102:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 103:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^J </B></TD>
 104:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^J </B></TD>
 105:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 106:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Insert a Line Feed.</B> <BR>
 107:fltk-1.3.4-1/FL/Fl_Input.H ****       (Similar to literal 'Enter' character)
 108:fltk-1.3.4-1/FL/Fl_Input.H **** 
 109:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 110:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^L </B></TD>
 111:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^L </B></TD>
 112:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 113:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Insert a Form Feed.</B>
 114:fltk-1.3.4-1/FL/Fl_Input.H **** 
 115:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 116:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^M </B></TD>
 117:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^M </B></TD>
 118:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 119:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Insert a Carriage Return.</B>
 120:fltk-1.3.4-1/FL/Fl_Input.H **** 
 121:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 122:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^V,<BR>Shift-Insert </B></TD>
 123:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Command-V </B></TD>
 124:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 125:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Paste the clipboard.</B> <BR>
 126:fltk-1.3.4-1/FL/Fl_Input.H ****       (Macs keyboards don't have "Insert" keys, 
 127:fltk-1.3.4-1/FL/Fl_Input.H ****       but if they did, Shift-Insert would work)
 128:fltk-1.3.4-1/FL/Fl_Input.H **** 
 129:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 130:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^X,<BR>Shift-Delete </B></TD>
 131:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Command-X,<BR>Shift-Delete </B></TD>
 132:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 133:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Cut.</B> <BR>
 134:fltk-1.3.4-1/FL/Fl_Input.H ****       Copy the selection to the clipboard and delete it.
 135:fltk-1.3.4-1/FL/Fl_Input.H ****       (If there's no selection, Shift-Delete acts like Delete)
 136:fltk-1.3.4-1/FL/Fl_Input.H **** 
 137:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 138:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> ^Z </B></TD>
 139:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Command-Z </B></TD>
 140:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 141:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Undo.</B> <BR>
 142:fltk-1.3.4-1/FL/Fl_Input.H ****       This is a single-level undo mechanism, but all adjacent 
 143:fltk-1.3.4-1/FL/Fl_Input.H ****       deletions and insertions are concatenated into a single "undo".
 144:fltk-1.3.4-1/FL/Fl_Input.H ****       Often this will undo a lot more than you expected. 
 145:fltk-1.3.4-1/FL/Fl_Input.H **** 
 146:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 147:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Shift-^Z </B></TD>
 148:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Shift-Command-Z </B></TD>
 149:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 150:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Redo.</B> <BR>
 151:fltk-1.3.4-1/FL/Fl_Input.H ****       Currently same behavior as ^Z. 
 152:fltk-1.3.4-1/FL/Fl_Input.H ****       Reserved for future multilevel undo/redo.
 153:fltk-1.3.4-1/FL/Fl_Input.H **** 
 154:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 155:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Arrow Keys </B></TD>
 156:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Arrow Keys </B></TD>
 157:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 158:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Standard cursor movement.</B> <BR>
 159:fltk-1.3.4-1/FL/Fl_Input.H ****       Can be combined with Shift to extend selection.
 160:fltk-1.3.4-1/FL/Fl_Input.H **** 
 161:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 162:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Home </B></TD>
 163:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Command-Up,<BR>Command-Left </B></TD>
 164:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 165:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Move to start of line.</B> <BR>
 166:fltk-1.3.4-1/FL/Fl_Input.H ****       Can be combined with Shift to extend selection.
 167:fltk-1.3.4-1/FL/Fl_Input.H **** 
 168:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 169:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> End </B></TD>
 170:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Command-Down,<BR>Command-Right </B></TD>
 171:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 172:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Move to end of line.</B> <BR>
 173:fltk-1.3.4-1/FL/Fl_Input.H ****       Can be combined with Shift to extend selection.
 174:fltk-1.3.4-1/FL/Fl_Input.H **** 
 175:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 176:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B>Ctrl-Home</B></TD>
 177:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B>Command-Up,<BR>Command-PgUp,<BR>Ctrl-Left</B></TD>
 178:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 179:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Move to top of document/field.</B> <BR>
 180:fltk-1.3.4-1/FL/Fl_Input.H ****       In single line input, moves to start of line.
 181:fltk-1.3.4-1/FL/Fl_Input.H ****       In multiline input, moves to start of top line.
 182:fltk-1.3.4-1/FL/Fl_Input.H ****       Can be combined with Shift to extend selection.
 183:fltk-1.3.4-1/FL/Fl_Input.H **** 
 184:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 185:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Ctrl-End </B></TD>
 186:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Command-End,<BR>Command-PgDn,<BR>Ctrl-Right</B></TD>
 187:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 188:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Move to bottom of document/field.</B> <BR>
 189:fltk-1.3.4-1/FL/Fl_Input.H ****       In single line input, moves to end of line.
 190:fltk-1.3.4-1/FL/Fl_Input.H ****       In multiline input, moves to end of last line.
 191:fltk-1.3.4-1/FL/Fl_Input.H ****       Can be combined with Shift to extend selection.
 192:fltk-1.3.4-1/FL/Fl_Input.H **** 
 193:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 194:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Ctrl-Left </B></TD>
 195:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Alt-Left </B></TD>
 196:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 197:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Word left.</B> <BR>
 198:fltk-1.3.4-1/FL/Fl_Input.H ****       Can be combined with Shift to extend selection.
 199:fltk-1.3.4-1/FL/Fl_Input.H **** 
 200:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 201:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Ctrl-Right </B></TD>
 202:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Alt-Right </B></TD>
 203:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 204:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Word right.</B> <BR>
 205:fltk-1.3.4-1/FL/Fl_Input.H ****       Can be combined with Shift to extend selection.
 206:fltk-1.3.4-1/FL/Fl_Input.H **** 
 207:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 208:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Ctrl-Backspace </B></TD>
 209:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Alt-Backspace </B></TD>
 210:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 211:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Delete word left.</B>
 212:fltk-1.3.4-1/FL/Fl_Input.H **** 
 213:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR><TR>
 214:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Ctrl-Delete </B></TD>
 215:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD NOWRAP="NOWRAP"><B> Alt-Delete </B></TD>
 216:fltk-1.3.4-1/FL/Fl_Input.H ****     <TD>
 217:fltk-1.3.4-1/FL/Fl_Input.H ****       <B>Delete word right.</B>
 218:fltk-1.3.4-1/FL/Fl_Input.H **** 
 219:fltk-1.3.4-1/FL/Fl_Input.H ****   </TD></TR></TABLE>
 220:fltk-1.3.4-1/FL/Fl_Input.H ****   */
 221:fltk-1.3.4-1/FL/Fl_Input.H **** class FL_EXPORT Fl_Input : public Fl_Input_ {
 3717              		.loc 13 221 0
 3718 0039 488DBBC8 		leaq	200(%rbx), %rdi
 3718      000000
 3719              	.LVL441:
 3720 0040 48C783C8 		movq	$_ZTV8Fl_Input+16, 200(%rbx)
 3720      00000000 
 3720      000000
 3721 004b E8000000 		call	_ZN9Fl_Input_D2Ev
 3721      00
 3722              	.LVL442:
 3723              	.LBE1087:
 3724              	.LBE1086:
 3725              	.LBB1088:
 3726              	.LBB1089:
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3727              		.loc 3 449 0
 3728 0050 4889DF   		movq	%rbx, %rdi
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3729              		.loc 3 448 0
 3730 0053 48C70300 		movq	$_ZTV8Fl_Group+16, (%rbx)
 3730      000000
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3731              		.loc 3 449 0
 3732 005a E8000000 		call	_ZN8Fl_Group5clearEv
 3732      00
 3733              	.LVL443:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3734              		.loc 3 448 0
 3735 005f 4889DF   		movq	%rbx, %rdi
 3736              	.LBE1089:
 3737              	.LBE1088:
 3738              	.LBE1079:
  45:fltk-1.3.4-1/FL/Fl_Spinner.H ****  
 3739              		.loc 9 45 0
 3740 0062 5B       		popq	%rbx
 3741              		.cfi_def_cfa_offset 8
 3742              	.LVL444:
 3743              	.LBB1092:
 3744              	.LBB1091:
 3745              	.LBB1090:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3746              		.loc 3 448 0
 3747 0063 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 3747      00
 3748              	.LVL445:
 3749              	.LBE1090:
 3750              	.LBE1091:
 3751              	.LBE1092:
 3752              		.cfi_endproc
 3753              	.LFE688:
 3755              		.section	.text.unlikely._ZN10Fl_SpinnerD2Ev,"axG",@progbits,_ZN10Fl_SpinnerD5Ev,comdat
 3756              	.LCOLDE29:
 3757              		.section	.text._ZN10Fl_SpinnerD2Ev,"axG",@progbits,_ZN10Fl_SpinnerD5Ev,comdat
 3758              	.LHOTE29:
 3759              		.weak	_ZN10Fl_SpinnerD1Ev
 3760              		.set	_ZN10Fl_SpinnerD1Ev,_ZN10Fl_SpinnerD2Ev
 3761              		.section	.text.unlikely._ZN15Fl_Input_ChoiceD2Ev,"axG",@progbits,_ZN15Fl_Input_ChoiceD5Ev,comdat
 3762              		.align 2
 3763              	.LCOLDB30:
 3764              		.section	.text._ZN15Fl_Input_ChoiceD2Ev,"axG",@progbits,_ZN15Fl_Input_ChoiceD5Ev,comdat
 3765              	.LHOTB30:
 3766              		.align 2
 3767              		.p2align 4,,15
 3768              		.weak	_ZN15Fl_Input_ChoiceD2Ev
 3770              	_ZN15Fl_Input_ChoiceD2Ev:
 3771              	.LFB692:
  95:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // Private class to handle slightly 'special' behavior of menu button
 3772              		.loc 5 95 0
 3773              		.cfi_startproc
 3774              	.LVL446:
 3775 0000 53       		pushq	%rbx
 3776              		.cfi_def_cfa_offset 16
 3777              		.cfi_offset 3, -16
  95:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // Private class to handle slightly 'special' behavior of menu button
 3778              		.loc 5 95 0
 3779 0001 4889FB   		movq	%rdi, %rbx
 3780              	.LBB1093:
 3781              	.LBB1094:
 3782              	.LBB1095:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3783              		.loc 3 448 0
 3784 0004 48C70700 		movq	$_ZTV8Fl_Group+16, (%rdi)
 3784      000000
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3785              		.loc 3 449 0
 3786 000b E8000000 		call	_ZN8Fl_Group5clearEv
 3786      00
 3787              	.LVL447:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3788              		.loc 3 448 0
 3789 0010 4889DF   		movq	%rbx, %rdi
 3790              	.LBE1095:
 3791              	.LBE1094:
 3792              	.LBE1093:
  95:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // Private class to handle slightly 'special' behavior of menu button
 3793              		.loc 5 95 0
 3794 0013 5B       		popq	%rbx
 3795              		.cfi_def_cfa_offset 8
 3796              	.LVL448:
 3797              	.LBB1098:
 3798              	.LBB1097:
 3799              	.LBB1096:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3800              		.loc 3 448 0
 3801 0014 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 3801      00
 3802              	.LVL449:
 3803              	.LBE1096:
 3804              	.LBE1097:
 3805              	.LBE1098:
 3806              		.cfi_endproc
 3807              	.LFE692:
 3809              		.section	.text.unlikely._ZN15Fl_Input_ChoiceD2Ev,"axG",@progbits,_ZN15Fl_Input_ChoiceD5Ev,comdat
 3810              	.LCOLDE30:
 3811              		.section	.text._ZN15Fl_Input_ChoiceD2Ev,"axG",@progbits,_ZN15Fl_Input_ChoiceD5Ev,comdat
 3812              	.LHOTE30:
 3813              		.weak	_ZN15Fl_Input_ChoiceD1Ev
 3814              		.set	_ZN15Fl_Input_ChoiceD1Ev,_ZN15Fl_Input_ChoiceD2Ev
 3815              		.section	.text.unlikely._ZN15Fl_Input_ChoiceD0Ev,"axG",@progbits,_ZN15Fl_Input_ChoiceD5Ev,comdat
 3816              		.align 2
 3817              	.LCOLDB31:
 3818              		.section	.text._ZN15Fl_Input_ChoiceD0Ev,"axG",@progbits,_ZN15Fl_Input_ChoiceD5Ev,comdat
 3819              	.LHOTB31:
 3820              		.align 2
 3821              		.p2align 4,,15
 3822              		.weak	_ZN15Fl_Input_ChoiceD0Ev
 3824              	_ZN15Fl_Input_ChoiceD0Ev:
 3825              	.LFB694:
  95:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // Private class to handle slightly 'special' behavior of menu button
 3826              		.loc 5 95 0
 3827              		.cfi_startproc
 3828              	.LVL450:
 3829 0000 53       		pushq	%rbx
 3830              		.cfi_def_cfa_offset 16
 3831              		.cfi_offset 3, -16
  95:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // Private class to handle slightly 'special' behavior of menu button
 3832              		.loc 5 95 0
 3833 0001 4889FB   		movq	%rdi, %rbx
 3834              	.LBB1099:
 3835              	.LBB1100:
 3836              	.LBB1101:
 3837              	.LBB1102:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3838              		.loc 3 448 0
 3839 0004 48C70700 		movq	$_ZTV8Fl_Group+16, (%rdi)
 3839      000000
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3840              		.loc 3 449 0
 3841 000b E8000000 		call	_ZN8Fl_Group5clearEv
 3841      00
 3842              	.LVL451:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3843              		.loc 3 448 0
 3844 0010 4889DF   		movq	%rbx, %rdi
 3845 0013 E8000000 		call	_ZN9Fl_WidgetD2Ev
 3845      00
 3846              	.LVL452:
 3847              	.LBE1102:
 3848              	.LBE1101:
 3849              	.LBE1100:
 3850              	.LBE1099:
  95:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // Private class to handle slightly 'special' behavior of menu button
 3851              		.loc 5 95 0
 3852 0018 4889DF   		movq	%rbx, %rdi
 3853 001b 5B       		popq	%rbx
 3854              		.cfi_def_cfa_offset 8
 3855              	.LVL453:
 3856 001c E9000000 		jmp	_ZdlPv
 3856      00
 3857              	.LVL454:
 3858              		.cfi_endproc
 3859              	.LFE694:
 3861              		.section	.text.unlikely._ZN15Fl_Input_ChoiceD0Ev,"axG",@progbits,_ZN15Fl_Input_ChoiceD5Ev,comdat
 3862              	.LCOLDE31:
 3863              		.section	.text._ZN15Fl_Input_ChoiceD0Ev,"axG",@progbits,_ZN15Fl_Input_ChoiceD5Ev,comdat
 3864              	.LHOTE31:
 3865              		.section	.text.unlikely._ZN10Fl_SpinnerD0Ev,"axG",@progbits,_ZN10Fl_SpinnerD5Ev,comdat
 3866              		.align 2
 3867              	.LCOLDB32:
 3868              		.section	.text._ZN10Fl_SpinnerD0Ev,"axG",@progbits,_ZN10Fl_SpinnerD5Ev,comdat
 3869              	.LHOTB32:
 3870              		.align 2
 3871              		.p2align 4,,15
 3872              		.weak	_ZN10Fl_SpinnerD0Ev
 3874              	_ZN10Fl_SpinnerD0Ev:
 3875              	.LFB690:
  45:fltk-1.3.4-1/FL/Fl_Spinner.H ****  
 3876              		.loc 9 45 0
 3877              		.cfi_startproc
 3878              	.LVL455:
 3879 0000 53       		pushq	%rbx
 3880              		.cfi_def_cfa_offset 16
 3881              		.cfi_offset 3, -16
  45:fltk-1.3.4-1/FL/Fl_Spinner.H ****  
 3882              		.loc 9 45 0
 3883 0001 4889FB   		movq	%rdi, %rbx
 3884              	.LBB1118:
 3885              	.LBB1119:
 3886 0004 48C70700 		movq	$_ZTV10Fl_Spinner+16, (%rdi)
 3886      000000
 3887              	.LVL456:
 3888              	.LBB1120:
 3889              	.LBB1121:
 3890              	.LBB1122:
 3891              		.loc 12 76 0
 3892 000b 48C78710 		movq	$_ZTV9Fl_Button+16, 528(%rdi)
 3892      02000000 
 3892      000000
 3893 0016 488DBF10 		leaq	528(%rdi), %rdi
 3893      020000
 3894              	.LVL457:
 3895 001d E8000000 		call	_ZN9Fl_WidgetD2Ev
 3895      00
 3896              	.LVL458:
 3897              	.LBE1122:
 3898              	.LBE1121:
 3899              	.LBE1120:
 3900              	.LBB1123:
 3901              	.LBB1124:
 3902              	.LBB1125:
 3903 0022 488DBB90 		leaq	400(%rbx), %rdi
 3903      010000
 3904              	.LVL459:
 3905 0029 48C78390 		movq	$_ZTV9Fl_Button+16, 400(%rbx)
 3905      01000000 
 3905      000000
 3906 0034 E8000000 		call	_ZN9Fl_WidgetD2Ev
 3906      00
 3907              	.LVL460:
 3908              	.LBE1125:
 3909              	.LBE1124:
 3910              	.LBE1123:
 3911              	.LBB1126:
 3912              	.LBB1127:
 3913              		.loc 13 221 0
 3914 0039 488DBBC8 		leaq	200(%rbx), %rdi
 3914      000000
 3915              	.LVL461:
 3916 0040 48C783C8 		movq	$_ZTV8Fl_Input+16, 200(%rbx)
 3916      00000000 
 3916      000000
 3917 004b E8000000 		call	_ZN9Fl_Input_D2Ev
 3917      00
 3918              	.LVL462:
 3919              	.LBE1127:
 3920              	.LBE1126:
 3921              	.LBB1128:
 3922              	.LBB1129:
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3923              		.loc 3 449 0
 3924 0050 4889DF   		movq	%rbx, %rdi
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3925              		.loc 3 448 0
 3926 0053 48C70300 		movq	$_ZTV8Fl_Group+16, (%rbx)
 3926      000000
 449:fltk-1.3.4-1/src/Fl_Group.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3927              		.loc 3 449 0
 3928 005a E8000000 		call	_ZN8Fl_Group5clearEv
 3928      00
 3929              	.LVL463:
 448:fltk-1.3.4-1/src/Fl_Group.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3930              		.loc 3 448 0
 3931 005f 4889DF   		movq	%rbx, %rdi
 3932 0062 E8000000 		call	_ZN9Fl_WidgetD2Ev
 3932      00
 3933              	.LVL464:
 3934              	.LBE1129:
 3935              	.LBE1128:
 3936              	.LBE1119:
 3937              	.LBE1118:
  45:fltk-1.3.4-1/FL/Fl_Spinner.H ****  
 3938              		.loc 9 45 0
 3939 0067 4889DF   		movq	%rbx, %rdi
 3940 006a 5B       		popq	%rbx
 3941              		.cfi_def_cfa_offset 8
 3942              	.LVL465:
 3943 006b E9000000 		jmp	_ZdlPv
 3943      00
 3944              	.LVL466:
 3945              		.cfi_endproc
 3946              	.LFE690:
 3948              		.section	.text.unlikely._ZN10Fl_SpinnerD0Ev,"axG",@progbits,_ZN10Fl_SpinnerD5Ev,comdat
 3949              	.LCOLDE32:
 3950              		.section	.text._ZN10Fl_SpinnerD0Ev,"axG",@progbits,_ZN10Fl_SpinnerD5Ev,comdat
 3951              	.LHOTE32:
 3952              		.section	.text.unlikely._ZN8Fl_Group6insertER9Fl_Widgeti,"ax",@progbits
 3953              		.align 2
 3954              	.LCOLDB33:
 3955              		.section	.text._ZN8Fl_Group6insertER9Fl_Widgeti,"ax",@progbits
 3956              	.LHOTB33:
 3957              		.align 2
 3958              		.p2align 4,,15
 3959              		.globl	_ZN8Fl_Group6insertER9Fl_Widgeti
 3961              	_ZN8Fl_Group6insertER9Fl_Widgeti:
 3962              	.LFB669:
 458:fltk-1.3.4-1/src/Fl_Group.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 3963              		.loc 3 458 0
 3964              		.cfi_startproc
 3965              	.LVL467:
 3966 0000 4156     		pushq	%r14
 3967              		.cfi_def_cfa_offset 16
 3968              		.cfi_offset 14, -16
 3969 0002 4155     		pushq	%r13
 3970              		.cfi_def_cfa_offset 24
 3971              		.cfi_offset 13, -24
 3972 0004 4189D5   		movl	%edx, %r13d
 3973 0007 4154     		pushq	%r12
 3974              		.cfi_def_cfa_offset 32
 3975              		.cfi_offset 12, -32
 3976 0009 55       		pushq	%rbp
 3977              		.cfi_def_cfa_offset 40
 3978              		.cfi_offset 6, -40
 3979 000a 4889FD   		movq	%rdi, %rbp
 3980 000d 53       		pushq	%rbx
 3981              		.cfi_def_cfa_offset 48
 3982              		.cfi_offset 3, -48
 3983 000e 488B7E08 		movq	8(%rsi), %rdi
 3984              	.LVL468:
 458:fltk-1.3.4-1/src/Fl_Group.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 3985              		.loc 3 458 0
 3986 0012 4889F3   		movq	%rsi, %rbx
 3987              	.LVL469:
 3988              	.LBB1130:
 459:fltk-1.3.4-1/src/Fl_Group.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 3989              		.loc 3 459 0
 3990 0015 4885FF   		testq	%rdi, %rdi
 3991 0018 7449     		je	.L429
 3992              	.LVL470:
 3993              	.LBB1131:
 3994              	.LBB1132:
 3995              	.LBB1133:
 3996              	.LBB1134:
 3997              	.LBB1135:
 3998              	.LBB1136:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 3999              		.loc 3 45 0
 4000 001a 8BB79000 		movl	144(%rdi), %esi
 4000      0000
 4001              	.LVL471:
 4002 0020 83FE01   		cmpl	$1, %esi
 4003 0023 0F8E2701 		jle	.L462
 4003      0000
 4004 0029 488B5778 		movq	120(%rdi), %rdx
 4005              	.LVL472:
 4006              	.L432:
 4007              	.LBE1136:
 4008              	.LBE1135:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 4009              		.loc 3 54 0
 4010 002d 31C9     		xorl	%ecx, %ecx
 4011 002f 483B1A   		cmpq	(%rdx), %rbx
 4012 0032 488D4208 		leaq	8(%rdx), %rax
 4013              	.LVL473:
 4014 0036 7516     		jne	.L434
 4015 0038 E91F0100 		jmp	.L450
 4015      00
 4016              	.LVL474:
 4017 003d 0F1F00   		.p2align 4,,10
 4018              		.p2align 3
 4019              	.L435:
 4020 0040 4883C008 		addq	$8, %rax
 4021              	.LVL475:
 4022 0044 483B58F8 		cmpq	-8(%rax), %rbx
 4023 0048 0F84DA00 		je	.L463
 4023      0000
 4024              	.LVL476:
 4025              	.L434:
 4026 004e 83C101   		addl	$1, %ecx
 4027              	.LVL477:
 4028 0051 39CE     		cmpl	%ecx, %esi
 4029 0053 75EB     		jne	.L435
 4030              	.LVL478:
 4031              	.L431:
 4032              	.LBE1134:
 4033              	.LBE1133:
 4034              	.LBE1132:
 462:fltk-1.3.4-1/src/Fl_Group.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4035              		.loc 3 462 0
 4036 0055 4839FD   		cmpq	%rdi, %rbp
 4037 0058 0F84D500 		je	.L464
 4037      0000
 4038              	.L436:
 466:fltk-1.3.4-1/src/Fl_Group.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 4039              		.loc 3 466 0
 4040 005e E8000000 		call	_ZN8Fl_Group6removeEi
 4040      00
 4041              	.LVL479:
 4042              	.L429:
 4043              	.LBE1131:
 4044              	.LBE1130:
 468:fltk-1.3.4-1/src/Fl_Group.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 4045              		.loc 3 468 0
 4046 0063 48896B08 		movq	%rbp, 8(%rbx)
 4047              	.LBB1146:
 469:fltk-1.3.4-1/src/Fl_Group.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 4048              		.loc 3 469 0
 4049 0067 448BA590 		movl	144(%rbp), %r12d
 4049      000000
 4050 006e 4585E4   		testl	%r12d, %r12d
 4051 0071 747D     		je	.L465
 4052              	.LBB1147:
 471:fltk-1.3.4-1/src/Fl_Group.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4053              		.loc 3 471 0
 4054 0073 4183FC01 		cmpl	$1, %r12d
 4055 0077 0F840F01 		je	.L466
 4055      0000
 4056              	.LBB1148:
 477:fltk-1.3.4-1/src/Fl_Group.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 4057              		.loc 3 477 0
 4058 007d 418D4424 		leal	-1(%r12), %eax
 4058      FF
 4059 0082 4485E0   		testl	%r12d, %eax
 4060 0085 0F84DD00 		je	.L443
 4060      0000
 4061 008b 488B4578 		movq	120(%rbp), %rax
 4062              	.L444:
 4063              	.LVL480:
 480:fltk-1.3.4-1/src/Fl_Group.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 4064              		.loc 3 480 0
 4065 008f 4539E5   		cmpl	%r12d, %r13d
 4066 0092 0F8D2301 		jge	.L452
 4066      0000
 4067 0098 4489EE   		movl	%r13d, %esi
 4068 009b 4963D4   		movslq	%r12d, %rdx
 4069 009e F7D6     		notl	%esi
 4070 00a0 488D0CD5 		leaq	0(,%rdx,8), %rcx
 4070      00000000 
 4071 00a8 4401E6   		addl	%r12d, %esi
 4072 00ab 4829F2   		subq	%rsi, %rdx
 4073 00ae 488D34D5 		leaq	-8(,%rdx,8), %rsi
 4073      F8FFFFFF 
 4074              	.LVL481:
 4075 00b6 662E0F1F 		.p2align 4,,10
 4075      84000000 
 4075      0000
 4076              		.p2align 3
 4077              	.L447:
 480:fltk-1.3.4-1/src/Fl_Group.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 4078              		.loc 3 480 0 is_stmt 0 discriminator 2
 4079 00c0 488B5408 		movq	-8(%rax,%rcx), %rdx
 4079      F8
 4080 00c5 48891408 		movq	%rdx, (%rax,%rcx)
 4081 00c9 4883E908 		subq	$8, %rcx
 4082 00cd 488B4578 		movq	120(%rbp), %rax
 4083 00d1 4839CE   		cmpq	%rcx, %rsi
 4084 00d4 75EA     		jne	.L447
 4085              	.LVL482:
 4086              	.L445:
 481:fltk-1.3.4-1/src/Fl_Group.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4087              		.loc 3 481 0 is_stmt 1
 4088 00d6 4D63ED   		movslq	%r13d, %r13
 4089 00d9 4A891CE8 		movq	%rbx, (%rax,%r13,8)
 4090 00dd 448BA590 		movl	144(%rbp), %r12d
 4090      000000
 4091 00e4 EB0E     		jmp	.L440
 4092              	.LVL483:
 4093 00e6 662E0F1F 		.p2align 4,,10
 4093      84000000 
 4093      0000
 4094              		.p2align 3
 4095              	.L465:
 4096              	.LBE1148:
 4097              	.LBE1147:
 470:fltk-1.3.4-1/src/Fl_Group.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 4098              		.loc 3 470 0
 4099 00f0 48895D78 		movq	%rbx, 120(%rbp)
 4100              	.LVL484:
 4101              	.L440:
 4102              	.LBE1146:
 4103              	.LBB1153:
 4104              	.LBB1154:
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4105              		.loc 3 573 0
 4106 00f4 488BBD98 		movq	152(%rbp), %rdi
 4106      000000
 4107              	.LBE1154:
 4108              	.LBE1153:
 483:fltk-1.3.4-1/src/Fl_Group.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4109              		.loc 3 483 0
 4110 00fb 4183C401 		addl	$1, %r12d
 4111 00ff 4489A590 		movl	%r12d, 144(%rbp)
 4111      000000
 4112              	.LVL485:
 4113              	.LBB1156:
 4114              	.LBB1155:
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4115              		.loc 3 573 0
 4116 0106 4885FF   		testq	%rdi, %rdi
 4117 0109 7405     		je	.L448
 4118 010b E8000000 		call	_ZdaPv
 4118      00
 4119              	.LVL486:
 4120              	.L448:
 4121 0110 48C78598 		movq	$0, 152(%rbp)
 4121      00000000 
 4121      000000
 4122              	.LVL487:
 4123              	.L428:
 4124              	.LBE1155:
 4125              	.LBE1156:
 485:fltk-1.3.4-1/src/Fl_Group.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 4126              		.loc 3 485 0
 4127 011b 5B       		popq	%rbx
 4128              		.cfi_remember_state
 4129              		.cfi_def_cfa_offset 40
 4130              	.LVL488:
 4131 011c 5D       		popq	%rbp
 4132              		.cfi_def_cfa_offset 32
 4133              	.LVL489:
 4134 011d 415C     		popq	%r12
 4135              		.cfi_def_cfa_offset 24
 4136 011f 415D     		popq	%r13
 4137              		.cfi_def_cfa_offset 16
 4138 0121 415E     		popq	%r14
 4139              		.cfi_def_cfa_offset 8
 4140 0123 C3       		ret
 4141              	.LVL490:
 4142              		.p2align 4,,10
 4143 0124 0F1F4000 		.p2align 3
 4144              	.L463:
 4145              		.cfi_restore_state
 4146              	.LBB1157:
 4147              	.LBB1145:
 462:fltk-1.3.4-1/src/Fl_Group.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4148              		.loc 3 462 0
 4149 0128 4839FD   		cmpq	%rdi, %rbp
 4150              	.LBB1143:
 4151              	.LBB1141:
 4152              	.LBB1139:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 4153              		.loc 3 54 0
 4154 012b 89CE     		movl	%ecx, %esi
 4155              	.LVL491:
 4156              	.LBE1139:
 4157              	.LBE1141:
 4158              	.LBE1143:
 462:fltk-1.3.4-1/src/Fl_Group.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4159              		.loc 3 462 0
 4160 012d 0F852BFF 		jne	.L436
 4160      FFFF
 4161              	.L464:
 463:fltk-1.3.4-1/src/Fl_Group.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 4162              		.loc 3 463 0
 4163 0133 31C0     		xorl	%eax, %eax
 4164 0135 4139F5   		cmpl	%esi, %r13d
 4165 0138 0F9FC0   		setg	%al
 4166 013b 4129C5   		subl	%eax, %r13d
 4167              	.LVL492:
 464:fltk-1.3.4-1/src/Fl_Group.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 4168              		.loc 3 464 0
 4169 013e 4139F5   		cmpl	%esi, %r13d
 4170 0141 0F8517FF 		jne	.L436
 4170      FFFF
 4171 0147 EBD2     		jmp	.L428
 4172              	.LVL493:
 4173 0149 0F1F8000 		.p2align 4,,10
 4173      000000
 4174              		.p2align 3
 4175              	.L462:
 4176              	.LBB1144:
 4177              	.LBB1142:
 4178              	.LBB1140:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 4179              		.loc 3 54 0
 4180 0150 85F6     		testl	%esi, %esi
 4181              	.LBB1138:
 4182              	.LBB1137:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 4183              		.loc 3 45 0
 4184 0152 488D5778 		leaq	120(%rdi), %rdx
 4185              	.LVL494:
 4186              	.LBE1137:
 4187              	.LBE1138:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 4188              		.loc 3 54 0
 4189 0156 0F8FD1FE 		jg	.L432
 4189      FFFF
 4190              	.LVL495:
 4191              	.L450:
 4192 015c 31F6     		xorl	%esi, %esi
 4193 015e E9F2FEFF 		jmp	.L431
 4193      FF
 4194              	.LVL496:
 4195              		.p2align 4,,10
 4196 0163 0F1F4400 		.p2align 3
 4196      00
 4197              	.L443:
 4198              	.LBE1140:
 4199              	.LBE1142:
 4200              	.LBE1144:
 4201              	.LBE1145:
 4202              	.LBE1157:
 4203              	.LBB1158:
 4204              	.LBB1152:
 4205              	.LBB1149:
 478:fltk-1.3.4-1/src/Fl_Group.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 4206              		.loc 3 478 0
 4207 0168 438D3424 		leal	(%r12,%r12), %esi
 4208 016c 488B7D78 		movq	120(%rbp), %rdi
 4209 0170 4863F6   		movslq	%esi, %rsi
 4210 0173 48C1E603 		salq	$3, %rsi
 4211 0177 E8000000 		call	realloc
 4211      00
 4212              	.LVL497:
 4213 017c 448BA590 		movl	144(%rbp), %r12d
 4213      000000
 479:fltk-1.3.4-1/src/Fl_Group.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 4214              		.loc 3 479 0
 4215 0183 48894578 		movq	%rax, 120(%rbp)
 4216 0187 E903FFFF 		jmp	.L444
 4216      FF
 4217              	.L466:
 4218              	.LBE1149:
 4219              	.LBB1150:
 473:fltk-1.3.4-1/src/Fl_Group.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4220              		.loc 3 473 0
 4221 018c BF100000 		movl	$16, %edi
 4221      00
 472:fltk-1.3.4-1/src/Fl_Group.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 4222              		.loc 3 472 0
 4223 0191 4C8B7578 		movq	120(%rbp), %r14
 4224              	.LVL498:
 473:fltk-1.3.4-1/src/Fl_Group.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4225              		.loc 3 473 0
 4226 0195 E8000000 		call	malloc
 4226      00
 4227              	.LVL499:
 474:fltk-1.3.4-1/src/Fl_Group.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 4228              		.loc 3 474 0
 4229 019a 4585ED   		testl	%r13d, %r13d
 473:fltk-1.3.4-1/src/Fl_Group.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4230              		.loc 3 473 0
 4231 019d 48894578 		movq	%rax, 120(%rbp)
 474:fltk-1.3.4-1/src/Fl_Group.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 4232              		.loc 3 474 0
 4233 01a1 740C     		je	.L442
 474:fltk-1.3.4-1/src/Fl_Group.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 4234              		.loc 3 474 0 is_stmt 0 discriminator 1
 4235 01a3 4C8930   		movq	%r14, (%rax)
 4236 01a6 48895808 		movq	%rbx, 8(%rax)
 4237 01aa E945FFFF 		jmp	.L440
 4237      FF
 4238              	.L442:
 475:fltk-1.3.4-1/src/Fl_Group.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 4239              		.loc 3 475 0 is_stmt 1
 4240 01af 488918   		movq	%rbx, (%rax)
 4241 01b2 4C897008 		movq	%r14, 8(%rax)
 4242 01b6 E939FFFF 		jmp	.L440
 4242      FF
 4243              	.LVL500:
 4244              	.L452:
 4245              	.LBE1150:
 4246              	.LBB1151:
 480:fltk-1.3.4-1/src/Fl_Group.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 4247              		.loc 3 480 0
 4248 01bb 4589E5   		movl	%r12d, %r13d
 4249              	.LVL501:
 4250 01be E913FFFF 		jmp	.L445
 4250      FF
 4251              	.LBE1151:
 4252              	.LBE1152:
 4253              	.LBE1158:
 4254              		.cfi_endproc
 4255              	.LFE669:
 4257              		.section	.text.unlikely._ZN8Fl_Group6insertER9Fl_Widgeti
 4258              	.LCOLDE33:
 4259              		.section	.text._ZN8Fl_Group6insertER9Fl_Widgeti
 4260              	.LHOTE33:
 4261              		.section	.text.unlikely._ZN8Fl_Group3addER9Fl_Widget,"ax",@progbits
 4262              		.align 2
 4263              	.LCOLDB34:
 4264              		.section	.text._ZN8Fl_Group3addER9Fl_Widget,"ax",@progbits
 4265              	.LHOTB34:
 4266              		.align 2
 4267              		.p2align 4,,15
 4268              		.globl	_ZN8Fl_Group3addER9Fl_Widget
 4270              	_ZN8Fl_Group3addER9Fl_Widget:
 4271              	.LFB670:
 491:fltk-1.3.4-1/src/Fl_Group.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 4272              		.loc 3 491 0
 4273              		.cfi_startproc
 4274              	.LVL502:
 491:fltk-1.3.4-1/src/Fl_Group.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 4275              		.loc 3 491 0
 4276 0000 8B979000 		movl	144(%rdi), %edx
 4276      0000
 4277 0006 E9000000 		jmp	_ZN8Fl_Group6insertER9Fl_Widgeti
 4277      00
 4278              	.LVL503:
 4279              		.cfi_endproc
 4280              	.LFE670:
 4282              		.section	.text.unlikely._ZN8Fl_Group3addER9Fl_Widget
 4283              	.LCOLDE34:
 4284              		.section	.text._ZN8Fl_Group3addER9Fl_Widget
 4285              	.LHOTE34:
 4286              		.section	.text.unlikely._ZN8Fl_Group6removeER9Fl_Widget,"ax",@progbits
 4287              		.align 2
 4288              	.LCOLDB35:
 4289              		.section	.text._ZN8Fl_Group6removeER9Fl_Widget,"ax",@progbits
 4290              	.LHOTB35:
 4291              		.align 2
 4292              		.p2align 4,,15
 4293              		.globl	_ZN8Fl_Group6removeER9Fl_Widget
 4295              	_ZN8Fl_Group6removeER9Fl_Widget:
 4296              	.LFB672:
 537:fltk-1.3.4-1/src/Fl_Group.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 4297              		.loc 3 537 0
 4298              		.cfi_startproc
 4299              	.LVL504:
 538:fltk-1.3.4-1/src/Fl_Group.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4300              		.loc 3 538 0
 4301 0000 8B8F9000 		movl	144(%rdi), %ecx
 4301      0000
 4302 0006 85C9     		testl	%ecx, %ecx
 4303 0008 7436     		je	.L468
 4304              	.LVL505:
 4305              	.LBB1159:
 4306              	.LBB1160:
 4307              	.LBB1161:
 4308              	.LBB1162:
 4309              	.LBB1163:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 4310              		.loc 3 45 0
 4311 000a 83F901   		cmpl	$1, %ecx
 4312 000d 7E41     		jle	.L479
 4313 000f 488B4778 		movq	120(%rdi), %rax
 4314              	.LVL506:
 4315              	.L471:
 4316              	.LBE1163:
 4317              	.LBE1162:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 4318              		.loc 3 54 0
 4319 0013 483B30   		cmpq	(%rax), %rsi
 4320 0016 488D5008 		leaq	8(%rax), %rdx
 4321              	.LVL507:
 4322 001a B8000000 		movl	$0, %eax
 4322      00
 4323 001f 7511     		jne	.L473
 4324 0021 EB25     		jmp	.L472
 4325              	.LVL508:
 4326              		.p2align 4,,10
 4327 0023 0F1F4400 		.p2align 3
 4327      00
 4328              	.L474:
 4329 0028 4883C208 		addq	$8, %rdx
 4330              	.LVL509:
 4331 002c 483B72F8 		cmpq	-8(%rdx), %rsi
 4332 0030 7416     		je	.L472
 4333              	.LVL510:
 4334              	.L473:
 4335 0032 83C001   		addl	$1, %eax
 4336              	.LVL511:
 4337 0035 39C1     		cmpl	%eax, %ecx
 4338 0037 75EF     		jne	.L474
 4339 0039 F3C3     		rep ret
 4340              	.LVL512:
 4341 003b 0F1F4400 		.p2align 4,,10
 4341      00
 4342              		.p2align 3
 4343              	.L468:
 4344 0040 F3C3     		rep ret
 4345              	.LVL513:
 4346              		.p2align 4,,10
 4347 0042 660F1F44 		.p2align 3
 4347      0000
 4348              	.L472:
 4349              	.LBE1161:
 4350              	.LBE1160:
 4351              	.LBE1159:
 540:fltk-1.3.4-1/src/Fl_Group.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 4352              		.loc 3 540 0
 4353 0048 89C6     		movl	%eax, %esi
 4354              	.LVL514:
 4355 004a E9000000 		jmp	_ZN8Fl_Group6removeEi
 4355      00
 4356              	.LVL515:
 4357 004f 90       		.p2align 4,,10
 4358              		.p2align 3
 4359              	.L479:
 4360              	.LBB1168:
 4361              	.LBB1167:
 4362              	.LBB1166:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 4363              		.loc 3 54 0
 4364 0050 85C9     		testl	%ecx, %ecx
 4365              	.LBB1165:
 4366              	.LBB1164:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 4367              		.loc 3 45 0
 4368 0052 488D4778 		leaq	120(%rdi), %rax
 4369              	.LVL516:
 4370              	.LBE1164:
 4371              	.LBE1165:
  54:fltk-1.3.4-1/src/Fl_Group.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 4372              		.loc 3 54 0
 4373 0056 7FBB     		jg	.L471
 4374 0058 F3C3     		rep ret
 4375              	.LBE1166:
 4376              	.LBE1167:
 4377              	.LBE1168:
 4378              		.cfi_endproc
 4379              	.LFE672:
 4381              		.section	.text.unlikely._ZN8Fl_Group6removeER9Fl_Widget
 4382              	.LCOLDE35:
 4383              		.section	.text._ZN8Fl_Group6removeER9Fl_Widget
 4384              	.LHOTE35:
 4385              		.section	.text.unlikely._ZN8Fl_Group10init_sizesEv,"ax",@progbits
 4386              		.align 2
 4387              	.LCOLDB36:
 4388              		.section	.text._ZN8Fl_Group10init_sizesEv,"ax",@progbits
 4389              	.LHOTB36:
 4390              		.align 2
 4391              		.p2align 4,,15
 4392              		.globl	_ZN8Fl_Group10init_sizesEv
 4394              	_ZN8Fl_Group10init_sizesEv:
 4395              	.LFB673:
 572:fltk-1.3.4-1/src/Fl_Group.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4396              		.loc 3 572 0
 4397              		.cfi_startproc
 4398              	.LVL517:
 4399 0000 53       		pushq	%rbx
 4400              		.cfi_def_cfa_offset 16
 4401              		.cfi_offset 3, -16
 572:fltk-1.3.4-1/src/Fl_Group.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4402              		.loc 3 572 0
 4403 0001 4889FB   		movq	%rdi, %rbx
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4404              		.loc 3 573 0
 4405 0004 488BBF98 		movq	152(%rdi), %rdi
 4405      000000
 4406              	.LVL518:
 4407 000b 4885FF   		testq	%rdi, %rdi
 4408 000e 7405     		je	.L481
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4409              		.loc 3 573 0 is_stmt 0 discriminator 1
 4410 0010 E8000000 		call	_ZdaPv
 4410      00
 4411              	.LVL519:
 4412              	.L481:
 573:fltk-1.3.4-1/src/Fl_Group.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4413              		.loc 3 573 0 discriminator 3
 4414 0015 48C78398 		movq	$0, 152(%rbx)
 4414      00000000 
 4414      000000
 574:fltk-1.3.4-1/src/Fl_Group.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4415              		.loc 3 574 0 is_stmt 1 discriminator 3
 4416 0020 5B       		popq	%rbx
 4417              		.cfi_def_cfa_offset 8
 4418              	.LVL520:
 4419 0021 C3       		ret
 4420              		.cfi_endproc
 4421              	.LFE673:
 4423              		.section	.text.unlikely._ZN8Fl_Group10init_sizesEv
 4424              	.LCOLDE36:
 4425              		.section	.text._ZN8Fl_Group10init_sizesEv
 4426              	.LHOTE36:
 4427              		.section	.text.unlikely._ZN8Fl_Group5sizesEv,"ax",@progbits
 4428              		.align 2
 4429              	.LCOLDB37:
 4430              		.section	.text._ZN8Fl_Group5sizesEv,"ax",@progbits
 4431              	.LHOTB37:
 4432              		.align 2
 4433              		.p2align 4,,15
 4434              		.globl	_ZN8Fl_Group5sizesEv
 4436              	_ZN8Fl_Group5sizesEv:
 4437              	.LFB674:
 590:fltk-1.3.4-1/src/Fl_Group.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 4438              		.loc 3 590 0
 4439              		.cfi_startproc
 4440              	.LVL521:
 4441              	.LBB1169:
 591:fltk-1.3.4-1/src/Fl_Group.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4442              		.loc 3 591 0
 4443 0000 488B8798 		movq	152(%rdi), %rax
 4443      000000
 4444 0007 4885C0   		testq	%rax, %rax
 4445 000a 7404     		je	.L503
 4446              	.LBE1169:
 621:fltk-1.3.4-1/src/Fl_Group.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 4447              		.loc 3 621 0
 4448 000c C3       		ret
 4449 000d 0F1F00   		.p2align 4,,10
 4450              		.p2align 3
 4451              	.L503:
 590:fltk-1.3.4-1/src/Fl_Group.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 4452              		.loc 3 590 0
 4453 0010 53       		pushq	%rbx
 4454              		.cfi_def_cfa_offset 16
 4455              		.cfi_offset 3, -16
 4456              	.LBB1186:
 4457              	.LBB1170:
 592:fltk-1.3.4-1/src/Fl_Group.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 4458              		.loc 3 592 0
 4459 0011 8B879000 		movl	144(%rdi), %eax
 4459      0000
 4460 0017 48B90000 		movabsq	$2287828610704211968, %rcx
 4460      00000000 
 4460      C01F
 4461 0021 4889FB   		movq	%rdi, %rbx
 4462 0024 48C7C7FF 		movq	$-1, %rdi
 4462      FFFFFF
 4463              	.LVL522:
 4464 002b 8D048508 		leal	8(,%rax,4), %eax
 4464      000000
 4465 0032 4898     		cltq
 4466 0034 488D1485 		leaq	0(,%rax,4), %rdx
 4466      00000000 
 4467 003c 4839C8   		cmpq	%rcx, %rax
 4468 003f 480F46FA 		cmovbe	%rdx, %rdi
 4469 0043 E8000000 		call	_Znam
 4469      00
 4470              	.LVL523:
 594:fltk-1.3.4-1/src/Fl_Group.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4471              		.loc 3 594 0
 4472 0048 807B6CEF 		cmpb	$-17, 108(%rbx)
 592:fltk-1.3.4-1/src/Fl_Group.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 4473              		.loc 3 592 0
 4474 004c 48898398 		movq	%rax, 152(%rbx)
 4474      000000
 4475              	.LVL524:
 594:fltk-1.3.4-1/src/Fl_Group.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4476              		.loc 3 594 0
 4477 0053 0F86D700 		jbe	.L504
 4477      0000
 594:fltk-1.3.4-1/src/Fl_Group.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4478              		.loc 3 594 0 is_stmt 0 discriminator 2
 4479 0059 C7400800 		movl	$0, 8(%rax)
 4479      000000
 4480 0060 C7000000 		movl	$0, (%rax)
 4480      0000
 4481 0066 31C9     		xorl	%ecx, %ecx
 4482 0068 31F6     		xorl	%esi, %esi
 4483              	.L490:
 4484              	.LVL525:
 595:fltk-1.3.4-1/src/Fl_Group.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4485              		.loc 3 595 0 is_stmt 1
 4486 006a 448B4328 		movl	40(%rbx), %r8d
 4487 006e 448B4B2C 		movl	44(%rbx), %r9d
 4488 0072 488BBB88 		movq	136(%rbx), %rdi
 4488      000000
 597:fltk-1.3.4-1/src/Fl_Group.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4489              		.loc 3 597 0
 4490 0079 897010   		movl	%esi, 16(%rax)
 599:fltk-1.3.4-1/src/Fl_Group.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4491              		.loc 3 599 0
 4492 007c 894818   		movl	%ecx, 24(%rax)
 595:fltk-1.3.4-1/src/Fl_Group.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4493              		.loc 3 595 0
 4494 007f 4101F0   		addl	%esi, %r8d
 4495 0082 4101C9   		addl	%ecx, %r9d
 4496              	.LBB1171:
 602:fltk-1.3.4-1/src/Fl_Group.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4497              		.loc 3 602 0
 4498 0085 4885FF   		testq	%rdi, %rdi
 4499              	.LBE1171:
 595:fltk-1.3.4-1/src/Fl_Group.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4500              		.loc 3 595 0
 4501 0088 44894004 		movl	%r8d, 4(%rax)
 4502              	.LVL526:
 4503 008c 4489480C 		movl	%r9d, 12(%rax)
 598:fltk-1.3.4-1/src/Fl_Group.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 4504              		.loc 3 598 0
 4505 0090 44894014 		movl	%r8d, 20(%rax)
 600:fltk-1.3.4-1/src/Fl_Group.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4506              		.loc 3 600 0
 4507 0094 4489481C 		movl	%r9d, 28(%rax)
 4508              	.LBB1173:
 602:fltk-1.3.4-1/src/Fl_Group.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4509              		.loc 3 602 0
 4510 0098 7433     		je	.L492
 602:fltk-1.3.4-1/src/Fl_Group.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4511              		.loc 3 602 0 is_stmt 0 discriminator 1
 4512 009a 4839FB   		cmpq	%rdi, %rbx
 4513 009d 742E     		je	.L492
 4514 009f 8B5720   		movl	32(%rdi), %edx
 4515              	.LVL527:
 4516 00a2 39F2     		cmpl	%esi, %edx
 4517 00a4 0F4DF2   		cmovge	%edx, %esi
 4518 00a7 897010   		movl	%esi, 16(%rax)
 4519              	.LVL528:
 4520 00aa 035728   		addl	40(%rdi), %edx
 4521              	.LVL529:
 4522 00ad 4439C2   		cmpl	%r8d, %edx
 4523 00b0 410F4FD0 		cmovg	%r8d, %edx
 4524              	.LVL530:
 4525 00b4 895014   		movl	%edx, 20(%rax)
 4526 00b7 8B5724   		movl	36(%rdi), %edx
 4527              	.LVL531:
 4528 00ba 39CA     		cmpl	%ecx, %edx
 4529 00bc 0F4DCA   		cmovge	%edx, %ecx
 4530 00bf 894818   		movl	%ecx, 24(%rax)
 4531              	.LVL532:
 4532              	.LBB1172:
 607:fltk-1.3.4-1/src/Fl_Group.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 4533              		.loc 3 607 0 is_stmt 1
 4534 00c2 03572C   		addl	44(%rdi), %edx
 4535              	.LVL533:
 4536 00c5 4139D1   		cmpl	%edx, %r9d
 4537 00c8 7E03     		jle	.L492
 607:fltk-1.3.4-1/src/Fl_Group.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 4538              		.loc 3 607 0 is_stmt 0 discriminator 1
 4539 00ca 89501C   		movl	%edx, 28(%rax)
 4540              	.LVL534:
 4541              	.L492:
 4542              	.LBE1172:
 4543              	.LBE1173:
 4544              	.LBB1174:
 4545              	.LBB1175:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 4546              		.loc 3 45 0 is_stmt 1
 4547 00cd 8B939000 		movl	144(%rbx), %edx
 4547      0000
 4548              	.LBE1175:
 4549              	.LBE1174:
 610:fltk-1.3.4-1/src/Fl_Group.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4550              		.loc 3 610 0
 4551 00d3 4883C020 		addq	$32, %rax
 4552              	.LVL535:
 4553              	.LBB1178:
 4554              	.LBB1176:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 4555              		.loc 3 45 0
 4556 00d7 83FA01   		cmpl	$1, %edx
 4557 00da 7E64     		jle	.L505
 4558 00dc 488B4B78 		movq	120(%rbx), %rcx
 4559              	.LVL536:
 4560              	.L495:
 4561 00e0 83EA01   		subl	$1, %edx
 4562 00e3 488D7CD1 		leaq	8(%rcx,%rdx,8), %rdi
 4562      08
 4563              	.LVL537:
 4564 00e8 0F1F8400 		.p2align 4,,10
 4564      00000000 
 4565              		.p2align 3
 4566              	.L496:
 4567              	.LBE1176:
 4568              	.LBE1178:
 4569              	.LBB1179:
 4570              	.LBB1180:
 613:fltk-1.3.4-1/src/Fl_Group.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 4571              		.loc 3 613 0
 4572 00f0 4883C108 		addq	$8, %rcx
 4573              	.LVL538:
 4574 00f4 488B51F8 		movq	-8(%rcx), %rdx
 4575              	.LVL539:
 4576 00f8 4883C010 		addq	$16, %rax
 4577              	.LVL540:
 4578 00fc 8B7220   		movl	32(%rdx), %esi
 4579              	.LVL541:
 614:fltk-1.3.4-1/src/Fl_Group.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4580              		.loc 3 614 0
 4581 00ff 8970F0   		movl	%esi, -16(%rax)
 4582              	.LVL542:
 615:fltk-1.3.4-1/src/Fl_Group.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 4583              		.loc 3 615 0
 4584 0102 8B7228   		movl	40(%rdx), %esi
 4585 0105 037220   		addl	32(%rdx), %esi
 4586 0108 8970F4   		movl	%esi, -12(%rax)
 4587 010b 8B7224   		movl	36(%rdx), %esi
 4588              	.LVL543:
 616:fltk-1.3.4-1/src/Fl_Group.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4589              		.loc 3 616 0
 4590 010e 8970F8   		movl	%esi, -8(%rax)
 4591              	.LVL544:
 617:fltk-1.3.4-1/src/Fl_Group.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 4592              		.loc 3 617 0
 4593 0111 8B722C   		movl	44(%rdx), %esi
 4594 0114 037224   		addl	36(%rdx), %esi
 4595              	.LBE1180:
 612:fltk-1.3.4-1/src/Fl_Group.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 4596              		.loc 3 612 0
 4597 0117 4839CF   		cmpq	%rcx, %rdi
 4598              	.LBB1181:
 617:fltk-1.3.4-1/src/Fl_Group.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 4599              		.loc 3 617 0
 4600 011a 8970FC   		movl	%esi, -4(%rax)
 4601              	.LBE1181:
 612:fltk-1.3.4-1/src/Fl_Group.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 4602              		.loc 3 612 0
 4603 011d 75D1     		jne	.L496
 4604              	.LVL545:
 4605              	.L502:
 4606 011f 488B8398 		movq	152(%rbx), %rax
 4606      000000
 4607              	.LVL546:
 4608              	.LBE1179:
 4609              	.LBE1170:
 4610              	.LBE1186:
 621:fltk-1.3.4-1/src/Fl_Group.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 4611              		.loc 3 621 0
 4612 0126 5B       		popq	%rbx
 4613              		.cfi_remember_state
 4614              		.cfi_restore 3
 4615              		.cfi_def_cfa_offset 8
 4616              	.LVL547:
 4617 0127 C3       		ret
 4618              	.LVL548:
 4619 0128 0F1F8400 		.p2align 4,,10
 4619      00000000 
 4620              		.p2align 3
 4621              	.L504:
 4622              		.cfi_restore_state
 4623 0130 8B7320   		movl	32(%rbx), %esi
 4624              	.LVL549:
 4625 0133 8B4B24   		movl	36(%rbx), %ecx
 4626              	.LBB1187:
 4627              	.LBB1185:
 594:fltk-1.3.4-1/src/Fl_Group.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4628              		.loc 3 594 0 discriminator 1
 4629 0136 8930     		movl	%esi, (%rax)
 4630              	.LVL550:
 4631 0138 894808   		movl	%ecx, 8(%rax)
 4632 013b E92AFFFF 		jmp	.L490
 4632      FF
 4633              	.LVL551:
 4634              		.p2align 4,,10
 4635              		.p2align 3
 4636              	.L505:
 4637              	.LBB1182:
 612:fltk-1.3.4-1/src/Fl_Group.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 4638              		.loc 3 612 0
 4639 0140 85D2     		testl	%edx, %edx
 4640              	.LBE1182:
 4641              	.LBB1183:
 4642              	.LBB1177:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 4643              		.loc 3 45 0
 4644 0142 488D4B78 		leaq	120(%rbx), %rcx
 4645              	.LVL552:
 4646              	.LBE1177:
 4647              	.LBE1183:
 4648              	.LBB1184:
 612:fltk-1.3.4-1/src/Fl_Group.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 4649              		.loc 3 612 0
 4650 0146 7598     		jne	.L495
 4651 0148 EBD5     		jmp	.L502
 4652              	.LBE1184:
 4653              	.LBE1185:
 4654              	.LBE1187:
 4655              		.cfi_endproc
 4656              	.LFE674:
 4658              		.section	.text.unlikely._ZN8Fl_Group5sizesEv
 4659              	.LCOLDE37:
 4660              		.section	.text._ZN8Fl_Group5sizesEv
 4661              	.LHOTE37:
 4662              		.section	.text.unlikely._ZN8Fl_Group6resizeEiiii,"ax",@progbits
 4663              		.align 2
 4664              	.LCOLDB38:
 4665              		.section	.text._ZN8Fl_Group6resizeEiiii,"ax",@progbits
 4666              	.LHOTB38:
 4667              		.align 2
 4668              		.p2align 4,,15
 4669              		.globl	_ZN8Fl_Group6resizeEiiii
 4671              	_ZN8Fl_Group6resizeEiiii:
 4672              	.LFB675:
 634:fltk-1.3.4-1/src/Fl_Group.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 4673              		.loc 3 634 0
 4674              		.cfi_startproc
 4675              	.LVL553:
 4676 0000 4157     		pushq	%r15
 4677              		.cfi_def_cfa_offset 16
 4678              		.cfi_offset 15, -16
 4679 0002 4156     		pushq	%r14
 4680              		.cfi_def_cfa_offset 24
 4681              		.cfi_offset 14, -24
 4682 0004 4189F6   		movl	%esi, %r14d
 4683 0007 4155     		pushq	%r13
 4684              		.cfi_def_cfa_offset 32
 4685              		.cfi_offset 13, -32
 4686 0009 4154     		pushq	%r12
 4687              		.cfi_def_cfa_offset 40
 4688              		.cfi_offset 12, -40
 4689 000b 4589C5   		movl	%r8d, %r13d
 4690 000e 55       		pushq	%rbp
 4691              		.cfi_def_cfa_offset 48
 4692              		.cfi_offset 6, -48
 4693 000f 53       		pushq	%rbx
 4694              		.cfi_def_cfa_offset 56
 4695              		.cfi_offset 3, -56
 4696 0010 4889FD   		movq	%rdi, %rbp
 4697 0013 89D3     		movl	%edx, %ebx
 4698 0015 4189CC   		movl	%ecx, %r12d
 638:fltk-1.3.4-1/src/Fl_Group.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4699              		.loc 3 638 0
 4700 0018 4189CF   		movl	%ecx, %r15d
 634:fltk-1.3.4-1/src/Fl_Group.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 4701              		.loc 3 634 0
 4702 001b 4883EC48 		subq	$72, %rsp
 4703              		.cfi_def_cfa_offset 128
 4704 001f 8B4720   		movl	32(%rdi), %eax
 638:fltk-1.3.4-1/src/Fl_Group.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4705              		.loc 3 638 0
 4706 0022 442B7F28 		subl	40(%rdi), %r15d
 4707 0026 89442418 		movl	%eax, 24(%rsp)
 4708              	.LVL554:
 4709 002a 8B4724   		movl	36(%rdi), %eax
 4710              	.LVL555:
 4711 002d 8944241C 		movl	%eax, 28(%rsp)
 4712              	.LVL556:
 639:fltk-1.3.4-1/src/Fl_Group.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 4713              		.loc 3 639 0
 4714 0031 4489C0   		movl	%r8d, %eax
 4715              	.LVL557:
 4716 0034 2B472C   		subl	44(%rdi), %eax
 4717 0037 8944240C 		movl	%eax, 12(%rsp)
 4718              	.LVL558:
 641:fltk-1.3.4-1/src/Fl_Group.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 4719              		.loc 3 641 0
 4720 003b E8000000 		call	_ZN8Fl_Group5sizesEv
 4720      00
 4721              	.LVL559:
 643:fltk-1.3.4-1/src/Fl_Group.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 4722              		.loc 3 643 0
 4723 0040 4589E8   		movl	%r13d, %r8d
 4724 0043 4489E1   		movl	%r12d, %ecx
 4725 0046 89DA     		movl	%ebx, %edx
 4726 0048 4489F6   		movl	%r14d, %esi
 4727 004b 4889EF   		movq	%rbp, %rdi
 641:fltk-1.3.4-1/src/Fl_Group.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 4728              		.loc 3 641 0
 4729 004e 48894424 		movq	%rax, 16(%rsp)
 4729      10
 4730              	.LVL560:
 643:fltk-1.3.4-1/src/Fl_Group.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 4731              		.loc 3 643 0
 4732 0053 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 4732      00
 4733              	.LVL561:
 4734              	.LBB1188:
 645:fltk-1.3.4-1/src/Fl_Group.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 4735              		.loc 3 645 0
 4736 0058 4883BD88 		cmpq	$0, 136(%rbp)
 4736      00000000 
 4737 0060 0F84FA01 		je	.L507
 4737      0000
 645:fltk-1.3.4-1/src/Fl_Group.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 4738              		.loc 3 645 0 is_stmt 0 discriminator 2
 4739 0066 8B44240C 		movl	12(%rsp), %eax
 4740 006a 4409F8   		orl	%r15d, %eax
 4741 006d 0F84ED01 		je	.L507
 4741      0000
 4742              	.LBB1189:
 655:fltk-1.3.4-1/src/Fl_Group.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 4743              		.loc 3 655 0 is_stmt 1
 4744 0073 8B959000 		movl	144(%rbp), %edx
 4744      0000
 4745              	.LBE1189:
 4746 0079 488B4424 		movq	16(%rsp), %rax
 4746      10
 4747              	.LBB1202:
 4748 007e 85D2     		testl	%edx, %edx
 4749 0080 0F842F02 		je	.L506
 4749      0000
 4750              	.LBB1190:
 658:fltk-1.3.4-1/src/Fl_Group.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 4751              		.loc 3 658 0
 4752 0086 8B30     		movl	(%rax), %esi
 4753              	.LVL562:
 659:fltk-1.3.4-1/src/Fl_Group.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 4754              		.loc 3 659 0
 4755 0088 428D0C26 		leal	(%rsi,%r12), %ecx
 4756 008c 2B4804   		subl	4(%rax), %ecx
 4757 008f 894C240C 		movl	%ecx, 12(%rsp)
 4758              	.LVL563:
 660:fltk-1.3.4-1/src/Fl_Group.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 4759              		.loc 3 660 0
 4760 0093 8B4808   		movl	8(%rax), %ecx
 4761              	.LVL564:
 661:fltk-1.3.4-1/src/Fl_Group.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 4762              		.loc 3 661 0
 4763 0096 428D3C29 		leal	(%rcx,%r13), %edi
 4764 009a 2B780C   		subl	12(%rax), %edi
 662:fltk-1.3.4-1/src/Fl_Group.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 4765              		.loc 3 662 0
 4766 009d 807D6CEF 		cmpb	$-17, 108(%rbp)
 661:fltk-1.3.4-1/src/Fl_Group.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 4767              		.loc 3 661 0
 4768 00a1 897C2410 		movl	%edi, 16(%rsp)
 4769              	.LVL565:
 662:fltk-1.3.4-1/src/Fl_Group.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 4770              		.loc 3 662 0
 4771 00a5 0F871D02 		ja	.L527
 4771      0000
 658:fltk-1.3.4-1/src/Fl_Group.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 4772              		.loc 3 658 0
 4773 00ab 4129F6   		subl	%esi, %r14d
 4774              	.LVL566:
 660:fltk-1.3.4-1/src/Fl_Group.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 4775              		.loc 3 660 0
 4776 00ae 29CB     		subl	%ecx, %ebx
 4777              	.LVL567:
 658:fltk-1.3.4-1/src/Fl_Group.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 4778              		.loc 3 658 0
 4779 00b0 44897424 		movl	%r14d, 24(%rsp)
 4779      18
 660:fltk-1.3.4-1/src/Fl_Group.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 4780              		.loc 3 660 0
 4781 00b5 895C241C 		movl	%ebx, 28(%rsp)
 4782              	.LVL568:
 4783              	.L513:
 4784              	.LBB1191:
 4785              	.LBB1192:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 4786              		.loc 3 45 0
 4787 00b9 83FA01   		cmpl	$1, %edx
 4788              	.LBE1192:
 4789              	.LBE1191:
 666:fltk-1.3.4-1/src/Fl_Group.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 4790              		.loc 3 666 0
 4791 00bc 448B7810 		movl	16(%rax), %r15d
 4792              	.LVL569:
 667:fltk-1.3.4-1/src/Fl_Group.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 4793              		.loc 3 667 0
 4794 00c0 448B6814 		movl	20(%rax), %r13d
 4795              	.LVL570:
 668:fltk-1.3.4-1/src/Fl_Group.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 4796              		.loc 3 668 0
 4797 00c4 448B7018 		movl	24(%rax), %r14d
 4798              	.LVL571:
 669:fltk-1.3.4-1/src/Fl_Group.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4799              		.loc 3 669 0
 4800 00c8 488D5820 		leaq	32(%rax), %rbx
 4801              	.LVL572:
 4802 00cc 448B601C 		movl	28(%rax), %r12d
 4803              	.LVL573:
 4804              	.LBB1195:
 4805              	.LBB1193:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 4806              		.loc 3 45 0
 4807 00d0 0F8E1A02 		jle	.L537
 4807      0000
 4808 00d6 488B6D78 		movq	120(%rbp), %rbp
 4809              	.LVL574:
 4810              	.L515:
 4811 00da 4489E8   		movl	%r13d, %eax
 4812 00dd 4429F8   		subl	%r15d, %eax
 4813 00e0 89C1     		movl	%eax, %ecx
 4814 00e2 89442428 		movl	%eax, 40(%rsp)
 4815              	.LBE1193:
 4816              	.LBE1195:
 4817              	.LBB1196:
 4818              	.LBB1197:
 677:fltk-1.3.4-1/src/Fl_Group.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4819              		.loc 3 677 0
 4820 00e6 C1E81F   		shrl	$31, %eax
 4821 00e9 01C8     		addl	%ecx, %eax
 4822 00eb D1F8     		sarl	%eax
 4823 00ed 89442430 		movl	%eax, 48(%rsp)
 4824 00f1 4489E0   		movl	%r12d, %eax
 4825 00f4 4429F0   		subl	%r14d, %eax
 4826 00f7 89C1     		movl	%eax, %ecx
 4827 00f9 8944242C 		movl	%eax, 44(%rsp)
 684:fltk-1.3.4-1/src/Fl_Group.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 4828              		.loc 3 684 0
 4829 00fd C1E81F   		shrl	$31, %eax
 4830 0100 01C8     		addl	%ecx, %eax
 4831 0102 D1F8     		sarl	%eax
 4832 0104 89442434 		movl	%eax, 52(%rsp)
 4833 0108 8D42FF   		leal	-1(%rdx), %eax
 4834 010b 488D44C5 		leaq	8(%rbp,%rax,8), %rax
 4834      08
 4835 0110 48894424 		movq	%rax, 32(%rsp)
 4835      20
 677:fltk-1.3.4-1/src/Fl_Group.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4836              		.loc 3 677 0
 4837 0115 8B44240C 		movl	12(%rsp), %eax
 4838 0119 4401E8   		addl	%r13d, %eax
 4839 011c 4429F8   		subl	%r15d, %eax
 4840 011f 89442438 		movl	%eax, 56(%rsp)
 684:fltk-1.3.4-1/src/Fl_Group.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 4841              		.loc 3 684 0
 4842 0123 8B442410 		movl	16(%rsp), %eax
 4843 0127 4401E0   		addl	%r12d, %eax
 4844 012a 4429F0   		subl	%r14d, %eax
 4845 012d 8944243C 		movl	%eax, 60(%rsp)
 4846 0131 4889D8   		movq	%rbx, %rax
 4847 0134 4889EB   		movq	%rbp, %rbx
 4848              	.LVL575:
 4849 0137 4889C5   		movq	%rax, %rbp
 4850              	.LVL576:
 4851 013a EB63     		jmp	.L524
 4852              	.LVL577:
 4853 013c 0F1F4000 		.p2align 4,,10
 4854              		.p2align 3
 4855              	.L538:
 676:fltk-1.3.4-1/src/Fl_Group.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4856              		.loc 3 676 0 discriminator 1
 4857 0140 0374240C 		addl	12(%rsp), %esi
 4858              	.LVL578:
 4859              	.L517:
 678:fltk-1.3.4-1/src/Fl_Group.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 4860              		.loc 3 678 0
 4861 0144 8B4D04   		movl	4(%rbp), %ecx
 4862              	.LVL579:
 679:fltk-1.3.4-1/src/Fl_Group.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 4863              		.loc 3 679 0
 4864 0147 4139CD   		cmpl	%ecx, %r13d
 4865 014a 0F8F8700 		jg	.L518
 4865      0000
 4866              	.LVL580:
 4867              	.L539:
 679:fltk-1.3.4-1/src/Fl_Group.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 4868              		.loc 3 679 0 is_stmt 0 discriminator 1
 4869 0150 034C240C 		addl	12(%rsp), %ecx
 4870              	.LVL581:
 4871              	.L519:
 682:fltk-1.3.4-1/src/Fl_Group.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 4872              		.loc 3 682 0 is_stmt 1
 4873 0154 448B5D08 		movl	8(%rbp), %r11d
 4874              	.LVL582:
 683:fltk-1.3.4-1/src/Fl_Group.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4875              		.loc 3 683 0
 4876 0158 4539DC   		cmpl	%r11d, %r12d
 4877 015b 0F8FA300 		jg	.L520
 4877      0000
 4878              	.L540:
 683:fltk-1.3.4-1/src/Fl_Group.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4879              		.loc 3 683 0 is_stmt 0 discriminator 1
 4880 0161 44035C24 		addl	16(%rsp), %r11d
 4880      10
 4881              	.LVL583:
 4882              	.L521:
 4883 0166 4883C510 		addq	$16, %rbp
 4884              	.LVL584:
 685:fltk-1.3.4-1/src/Fl_Group.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4885              		.loc 3 685 0 is_stmt 1
 4886 016a 448B45FC 		movl	-4(%rbp), %r8d
 4887              	.LVL585:
 686:fltk-1.3.4-1/src/Fl_Group.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4888              		.loc 3 686 0
 4889 016e 4539C4   		cmpl	%r8d, %r12d
 4890 0171 0F8FC000 		jg	.L522
 4890      0000
 4891              	.L541:
 686:fltk-1.3.4-1/src/Fl_Group.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4892              		.loc 3 686 0 is_stmt 0 discriminator 1
 4893 0177 44034424 		addl	16(%rsp), %r8d
 4893      10
 4894              	.LVL586:
 4895              	.L523:
 703:fltk-1.3.4-1/src/Fl_Group.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 4896              		.loc 3 703 0 is_stmt 1
 4897 017c 8B44241C 		movl	28(%rsp), %eax
 4898 0180 4C8B17   		movq	(%rdi), %r10
 4899 0183 29F1     		subl	%esi, %ecx
 4900              	.LVL587:
 4901 0185 03742418 		addl	24(%rsp), %esi
 4902              	.LVL588:
 4903 0189 4529D8   		subl	%r11d, %r8d
 4904              	.LVL589:
 4905 018c 428D1418 		leal	(%rax,%r11), %edx
 4906 0190 41FF5220 		call	*32(%r10)
 4907              	.LVL590:
 4908              	.LBE1197:
 672:fltk-1.3.4-1/src/Fl_Group.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 4909              		.loc 3 672 0
 4910 0194 483B5C24 		cmpq	32(%rsp), %rbx
 4910      20
 4911 0199 0F841601 		je	.L506
 4911      0000
 4912              	.L524:
 4913              	.LBB1198:
 675:fltk-1.3.4-1/src/Fl_Group.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4914              		.loc 3 675 0
 4915 019f 8B7500   		movl	0(%rbp), %esi
 673:fltk-1.3.4-1/src/Fl_Group.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 4916              		.loc 3 673 0
 4917 01a2 4883C308 		addq	$8, %rbx
 4918              	.LVL591:
 4919 01a6 488B7BF8 		movq	-8(%rbx), %rdi
 4920              	.LVL592:
 676:fltk-1.3.4-1/src/Fl_Group.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 4921              		.loc 3 676 0
 4922 01aa 4139F5   		cmpl	%esi, %r13d
 4923 01ad 7E91     		jle	.L538
 677:fltk-1.3.4-1/src/Fl_Group.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4924              		.loc 3 677 0
 4925 01af 4139F7   		cmpl	%esi, %r15d
 4926 01b2 7D90     		jge	.L517
 677:fltk-1.3.4-1/src/Fl_Group.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4927              		.loc 3 677 0 is_stmt 0 discriminator 1
 4928 01b4 4429FE   		subl	%r15d, %esi
 4929              	.LVL593:
 4930 01b7 8B442430 		movl	48(%rsp), %eax
 678:fltk-1.3.4-1/src/Fl_Group.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 4931              		.loc 3 678 0 is_stmt 1 discriminator 1
 4932 01bb 8B4D04   		movl	4(%rbp), %ecx
 677:fltk-1.3.4-1/src/Fl_Group.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4933              		.loc 3 677 0 discriminator 1
 4934 01be 0FAF7424 		imull	56(%rsp), %esi
 4934      38
 4935 01c3 01F0     		addl	%esi, %eax
 4936 01c5 99       		cltd
 4937 01c6 F77C2428 		idivl	40(%rsp)
 679:fltk-1.3.4-1/src/Fl_Group.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 4938              		.loc 3 679 0 discriminator 1
 4939 01ca 4139CD   		cmpl	%ecx, %r13d
 677:fltk-1.3.4-1/src/Fl_Group.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4940              		.loc 3 677 0 discriminator 1
 4941 01cd 418D3407 		leal	(%r15,%rax), %esi
 4942              	.LVL594:
 679:fltk-1.3.4-1/src/Fl_Group.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 4943              		.loc 3 679 0 discriminator 1
 4944 01d1 0F8E79FF 		jle	.L539
 4944      FFFF
 4945              	.LVL595:
 4946              	.L518:
 680:fltk-1.3.4-1/src/Fl_Group.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 4947              		.loc 3 680 0
 4948 01d7 4139CF   		cmpl	%ecx, %r15d
 4949 01da 0F8D74FF 		jge	.L519
 4949      FFFF
 680:fltk-1.3.4-1/src/Fl_Group.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 4950              		.loc 3 680 0 is_stmt 0 discriminator 1
 4951 01e0 4429F9   		subl	%r15d, %ecx
 4952              	.LVL596:
 4953 01e3 8B442430 		movl	48(%rsp), %eax
 682:fltk-1.3.4-1/src/Fl_Group.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 4954              		.loc 3 682 0 is_stmt 1 discriminator 1
 4955 01e7 448B5D08 		movl	8(%rbp), %r11d
 680:fltk-1.3.4-1/src/Fl_Group.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 4956              		.loc 3 680 0 discriminator 1
 4957 01eb 0FAF4C24 		imull	56(%rsp), %ecx
 4957      38
 4958 01f0 01C8     		addl	%ecx, %eax
 4959 01f2 99       		cltd
 4960 01f3 F77C2428 		idivl	40(%rsp)
 683:fltk-1.3.4-1/src/Fl_Group.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4961              		.loc 3 683 0 discriminator 1
 4962 01f7 4539DC   		cmpl	%r11d, %r12d
 680:fltk-1.3.4-1/src/Fl_Group.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 4963              		.loc 3 680 0 discriminator 1
 4964 01fa 418D0C07 		leal	(%r15,%rax), %ecx
 4965              	.LVL597:
 683:fltk-1.3.4-1/src/Fl_Group.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4966              		.loc 3 683 0 discriminator 1
 4967 01fe 0F8E5DFF 		jle	.L540
 4967      FFFF
 4968              	.L520:
 684:fltk-1.3.4-1/src/Fl_Group.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 4969              		.loc 3 684 0
 4970 0204 4539DE   		cmpl	%r11d, %r14d
 4971 0207 0F8D59FF 		jge	.L521
 4971      FFFF
 684:fltk-1.3.4-1/src/Fl_Group.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 4972              		.loc 3 684 0 is_stmt 0 discriminator 1
 4973 020d 4529F3   		subl	%r14d, %r11d
 4974              	.LVL598:
 4975 0210 8B442434 		movl	52(%rsp), %eax
 4976 0214 4883C510 		addq	$16, %rbp
 4977 0218 440FAF5C 		imull	60(%rsp), %r11d
 4977      243C
 685:fltk-1.3.4-1/src/Fl_Group.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4978              		.loc 3 685 0 is_stmt 1 discriminator 1
 4979 021e 448B45FC 		movl	-4(%rbp), %r8d
 684:fltk-1.3.4-1/src/Fl_Group.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 4980              		.loc 3 684 0 discriminator 1
 4981 0222 4401D8   		addl	%r11d, %eax
 4982 0225 99       		cltd
 4983 0226 F77C242C 		idivl	44(%rsp)
 686:fltk-1.3.4-1/src/Fl_Group.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4984              		.loc 3 686 0 discriminator 1
 4985 022a 4539C4   		cmpl	%r8d, %r12d
 684:fltk-1.3.4-1/src/Fl_Group.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 4986              		.loc 3 684 0 discriminator 1
 4987 022d 458D1C06 		leal	(%r14,%rax), %r11d
 4988              	.LVL599:
 686:fltk-1.3.4-1/src/Fl_Group.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 4989              		.loc 3 686 0 discriminator 1
 4990 0231 0F8E40FF 		jle	.L541
 4990      FFFF
 4991              	.L522:
 687:fltk-1.3.4-1/src/Fl_Group.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 4992              		.loc 3 687 0
 4993 0237 4539C6   		cmpl	%r8d, %r14d
 4994 023a 0F8D3CFF 		jge	.L523
 4994      FFFF
 687:fltk-1.3.4-1/src/Fl_Group.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 4995              		.loc 3 687 0 is_stmt 0 discriminator 1
 4996 0240 4529F0   		subl	%r14d, %r8d
 4997              	.LVL600:
 4998 0243 8B442434 		movl	52(%rsp), %eax
 4999 0247 440FAF44 		imull	60(%rsp), %r8d
 4999      243C
 5000 024d 4401C0   		addl	%r8d, %eax
 5001 0250 99       		cltd
 5002 0251 F77C242C 		idivl	44(%rsp)
 5003 0255 458D0406 		leal	(%r14,%rax), %r8d
 5004              	.LVL601:
 5005 0259 E91EFFFF 		jmp	.L523
 5005      FF
 5006              	.LVL602:
 5007 025e 6690     		.p2align 4,,10
 5008              		.p2align 3
 5009              	.L507:
 5010              	.LBE1198:
 5011              	.LBE1196:
 5012              	.LBE1190:
 5013              	.LBE1202:
 5014              	.LBB1203:
 647:fltk-1.3.4-1/src/Fl_Group.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 5015              		.loc 3 647 0 is_stmt 1
 5016 0260 807D6CEF 		cmpb	$-17, 108(%rbp)
 5017 0264 774F     		ja	.L506
 5018              	.LVL603:
 5019              	.LBB1204:
 5020              	.LBB1205:
 5021              	.LBB1206:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 5022              		.loc 3 45 0
 5023 0266 8B859000 		movl	144(%rbp), %eax
 5023      0000
 5024 026c 83F801   		cmpl	$1, %eax
 5025 026f 7E6F     		jle	.L542
 5026 0271 4C8B6578 		movq	120(%rbp), %r12
 5027              	.LVL604:
 5028              	.L510:
 5029              	.LBE1206:
 5030              	.LBE1205:
 5031              	.LBB1208:
 5032              	.LBB1209:
 651:fltk-1.3.4-1/src/Fl_Group.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 5033              		.loc 3 651 0
 5034 0275 442B7424 		subl	24(%rsp), %r14d
 5034      18
 5035              	.LVL605:
 5036 027a 2B5C241C 		subl	28(%rsp), %ebx
 5037              	.LVL606:
 5038 027e 83E801   		subl	$1, %eax
 5039 0281 4D8D6CC4 		leaq	8(%r12,%rax,8), %r13
 5039      08
 5040              	.LVL607:
 5041 0286 4489F5   		movl	%r14d, %ebp
 5042              	.LVL608:
 5043 0289 0F1F8000 		.p2align 4,,10
 5043      000000
 5044              		.p2align 3
 5045              	.L511:
 650:fltk-1.3.4-1/src/Fl_Group.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 5046              		.loc 3 650 0
 5047 0290 4983C408 		addq	$8, %r12
 5048              	.LVL609:
 5049 0294 498B7C24 		movq	-8(%r12), %rdi
 5049      F8
 5050              	.LVL610:
 651:fltk-1.3.4-1/src/Fl_Group.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 5051              		.loc 3 651 0
 5052 0299 8B5724   		movl	36(%rdi), %edx
 5053 029c 8B7720   		movl	32(%rdi), %esi
 5054 029f 488B07   		movq	(%rdi), %rax
 5055 02a2 8B4F28   		movl	40(%rdi), %ecx
 5056 02a5 448B472C 		movl	44(%rdi), %r8d
 5057 02a9 01DA     		addl	%ebx, %edx
 5058 02ab 01EE     		addl	%ebp, %esi
 5059 02ad FF5020   		call	*32(%rax)
 5060              	.LVL611:
 5061              	.LBE1209:
 649:fltk-1.3.4-1/src/Fl_Group.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 5062              		.loc 3 649 0
 5063 02b0 4D39EC   		cmpq	%r13, %r12
 5064 02b3 75DB     		jne	.L511
 5065              	.LVL612:
 5066              	.L506:
 5067              	.LBE1208:
 5068              	.LBE1204:
 5069              	.LBE1203:
 5070              	.LBE1188:
 706:fltk-1.3.4-1/src/Fl_Group.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 5071              		.loc 3 706 0
 5072 02b5 4883C448 		addq	$72, %rsp
 5073              		.cfi_remember_state
 5074              		.cfi_def_cfa_offset 56
 5075 02b9 5B       		popq	%rbx
 5076              		.cfi_def_cfa_offset 48
 5077 02ba 5D       		popq	%rbp
 5078              		.cfi_def_cfa_offset 40
 5079 02bb 415C     		popq	%r12
 5080              		.cfi_def_cfa_offset 32
 5081 02bd 415D     		popq	%r13
 5082              		.cfi_def_cfa_offset 24
 5083 02bf 415E     		popq	%r14
 5084              		.cfi_def_cfa_offset 16
 5085 02c1 415F     		popq	%r15
 5086              		.cfi_def_cfa_offset 8
 5087 02c3 C3       		ret
 5088              	.LVL613:
 5089              		.p2align 4,,10
 5090 02c4 0F1F4000 		.p2align 3
 5091              	.L527:
 5092              		.cfi_restore_state
 5093              	.LBB1217:
 5094              	.LBB1214:
 5095              	.LBB1200:
 662:fltk-1.3.4-1/src/Fl_Group.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 5096              		.loc 3 662 0
 5097 02c8 C744241C 		movl	$0, 28(%rsp)
 5097      00000000 
 5098 02d0 C7442418 		movl	$0, 24(%rsp)
 5098      00000000 
 5099 02d8 E9DCFDFF 		jmp	.L513
 5099      FF
 5100              	.LVL614:
 5101 02dd 0F1F00   		.p2align 4,,10
 5102              		.p2align 3
 5103              	.L542:
 5104              	.LBE1200:
 5105              	.LBE1214:
 5106              	.LBB1215:
 5107              	.LBB1213:
 5108              	.LBB1210:
 649:fltk-1.3.4-1/src/Fl_Group.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 5109              		.loc 3 649 0
 5110 02e0 85C0     		testl	%eax, %eax
 5111              	.LBE1210:
 5112              	.LBB1211:
 5113              	.LBB1207:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 5114              		.loc 3 45 0
 5115 02e2 4C8D6578 		leaq	120(%rbp), %r12
 5116              	.LVL615:
 5117              	.LBE1207:
 5118              	.LBE1211:
 5119              	.LBB1212:
 649:fltk-1.3.4-1/src/Fl_Group.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 5120              		.loc 3 649 0
 5121 02e6 758D     		jne	.L510
 5122 02e8 EBCB     		jmp	.L506
 5123              	.LVL616:
 5124 02ea 660F1F44 		.p2align 4,,10
 5124      0000
 5125              		.p2align 3
 5126              	.L537:
 5127              	.LBE1212:
 5128              	.LBE1213:
 5129              	.LBE1215:
 5130              	.LBB1216:
 5131              	.LBB1201:
 5132              	.LBB1199:
 5133              	.LBB1194:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 5134              		.loc 3 45 0
 5135 02f0 4883C578 		addq	$120, %rbp
 5136              	.LVL617:
 5137 02f4 E9E1FDFF 		jmp	.L515
 5137      FF
 5138              	.LBE1194:
 5139              	.LBE1199:
 5140              	.LBE1201:
 5141              	.LBE1216:
 5142              	.LBE1217:
 5143              		.cfi_endproc
 5144              	.LFE675:
 5146              		.section	.text.unlikely._ZN8Fl_Group6resizeEiiii
 5147              	.LCOLDE38:
 5148              		.section	.text._ZN8Fl_Group6resizeEiiii
 5149              	.LHOTE38:
 5150              		.section	.text.unlikely._ZN10Fl_Spinner6resizeEiiii,"axG",@progbits,_ZN10Fl_Spinner6resizeEiiii,co
 5151              		.align 2
 5152              	.LCOLDB39:
 5153              		.section	.text._ZN10Fl_Spinner6resizeEiiii,"axG",@progbits,_ZN10Fl_Spinner6resizeEiiii,comdat
 5154              	.LHOTB39:
 5155              		.align 2
 5156              		.p2align 4,,15
 5157              		.weak	_ZN10Fl_Spinner6resizeEiiii
 5159              	_ZN10Fl_Spinner6resizeEiiii:
 5160              	.LFB634:
 151:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 152:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Speling mistakes retained for source compatibility \deprecated */
 153:fltk-1.3.4-1/FL/Fl_Spinner.H ****   double	maxinum() const { return (maximum_); }
 154:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Gets the maximum value of the widget. */
 155:fltk-1.3.4-1/FL/Fl_Spinner.H ****   double	maximum() const { return (maximum_); }
 156:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Sets the maximum value of the widget. */
 157:fltk-1.3.4-1/FL/Fl_Spinner.H ****   void		maximum(double m) { maximum_ = m; }
 158:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Speling mistakes retained for source compatibility \deprecated */
 159:fltk-1.3.4-1/FL/Fl_Spinner.H ****   double	mininum() const { return (minimum_); }
 160:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Gets the minimum value of the widget. */
 161:fltk-1.3.4-1/FL/Fl_Spinner.H ****   double	minimum() const { return (minimum_); }
 162:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Sets the minimum value of the widget. */
 163:fltk-1.3.4-1/FL/Fl_Spinner.H ****   void		minimum(double m) { minimum_ = m; }
 164:fltk-1.3.4-1/FL/Fl_Spinner.H ****   /** Sets the minimum and maximum values for the widget. */
 165:fltk-1.3.4-1/FL/Fl_Spinner.H ****   void		range(double a, double b) { minimum_ = a; maximum_ = b; }
 166:fltk-1.3.4-1/FL/Fl_Spinner.H ****   void		resize(int X, int Y, int W, int H) {
 5161              		.loc 9 166 0
 5162              		.cfi_startproc
 5163              	.LVL618:
 5164 0000 4157     		pushq	%r15
 5165              		.cfi_def_cfa_offset 16
 5166              		.cfi_offset 15, -16
 5167 0002 4589C7   		movl	%r8d, %r15d
 5168 0005 4156     		pushq	%r14
 5169              		.cfi_def_cfa_offset 24
 5170              		.cfi_offset 14, -24
 5171 0007 4155     		pushq	%r13
 5172              		.cfi_def_cfa_offset 32
 5173              		.cfi_offset 13, -32
 5174 0009 4154     		pushq	%r12
 5175              		.cfi_def_cfa_offset 40
 5176              		.cfi_offset 12, -40
 5177 000b 4189D6   		movl	%edx, %r14d
 5178 000e 55       		pushq	%rbp
 5179              		.cfi_def_cfa_offset 48
 5180              		.cfi_offset 6, -48
 5181 000f 53       		pushq	%rbx
 5182              		.cfi_def_cfa_offset 56
 5183              		.cfi_offset 3, -56
 167:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  Fl_Group::resize(X,Y,W,H);
 168:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 169:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  input_.resize(X, Y, W - H / 2 - 2, H);
 5184              		.loc 9 169 0
 5185 0010 4489FB   		movl	%r15d, %ebx
 5186 0013 C1EB1F   		shrl	$31, %ebx
 166:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  Fl_Group::resize(X,Y,W,H);
 5187              		.loc 9 166 0
 5188 0016 4989FC   		movq	%rdi, %r12
 5189 0019 4189CD   		movl	%ecx, %r13d
 5190              		.loc 9 169 0
 5191 001c 4401FB   		addl	%r15d, %ebx
 166:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  Fl_Group::resize(X,Y,W,H);
 5192              		.loc 9 166 0
 5193 001f 4883EC18 		subq	$24, %rsp
 5194              		.cfi_def_cfa_offset 80
 5195              		.loc 9 169 0
 5196 0023 89DD     		movl	%ebx, %ebp
 167:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  Fl_Group::resize(X,Y,W,H);
 5197              		.loc 9 167 0
 5198 0025 8974240C 		movl	%esi, 12(%rsp)
 170:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  up_button_.resize(X + W - H / 2 - 2, Y, H / 2 + 2, H / 2);
 5199              		.loc 9 170 0
 5200 0029 D1FB     		sarl	%ebx
 169:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  up_button_.resize(X + W - H / 2 - 2, Y, H / 2 + 2, H / 2);
 5201              		.loc 9 169 0
 5202 002b D1FD     		sarl	%ebp
 167:fltk-1.3.4-1/FL/Fl_Spinner.H **** 
 5203              		.loc 9 167 0
 5204 002d E8000000 		call	_ZN8Fl_Group6resizeEiiii
 5204      00
 5205              	.LVL619:
 169:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  up_button_.resize(X + W - H / 2 - 2, Y, H / 2 + 2, H / 2);
 5206              		.loc 9 169 0
 5207 0032 F7DD     		negl	%ebp
 5208 0034 8B74240C 		movl	12(%rsp), %esi
 5209 0038 498DBC24 		leaq	200(%r12), %rdi
 5209      C8000000 
 5210 0040 418D4C2D 		leal	-2(%r13,%rbp), %ecx
 5210      FE
 5211 0045 4589F8   		movl	%r15d, %r8d
 5212 0048 4489F2   		movl	%r14d, %edx
 5213 004b E8000000 		call	_ZN9Fl_Input_6resizeEiiii
 5213      00
 5214              	.LVL620:
 5215              		.loc 9 170 0
 5216 0050 44036C24 		addl	12(%rsp), %r13d
 5216      0C
 5217              	.LVL621:
 5218 0055 448D4B02 		leal	2(%rbx), %r9d
 5219 0059 498DBC24 		leaq	400(%r12), %rdi
 5219      90010000 
 5220 0061 4189D8   		movl	%ebx, %r8d
 5221 0064 4489F2   		movl	%r14d, %edx
 5222 0067 4489C9   		movl	%r9d, %ecx
 5223 006a 44894C24 		movl	%r9d, 12(%rsp)
 5223      0C
 5224              	.LVL622:
 5225 006f 468D6C2D 		leal	-2(%rbp,%r13), %r13d
 5225      FE
 5226 0074 4489EE   		movl	%r13d, %esi
 5227 0077 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 5227      00
 5228              	.LVL623:
 171:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  down_button_.resize(X + W - H / 2 - 2, Y + H - H / 2,
 172:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		                      H / 2 + 2, H / 2);
 5229              		.loc 9 172 0
 5230 007c 438D143E 		leal	(%r14,%r15), %edx
 5231 0080 448B4C24 		movl	12(%rsp), %r9d
 5231      0C
 173:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		}
 5232              		.loc 9 173 0
 5233 0085 4883C418 		addq	$24, %rsp
 5234              		.cfi_def_cfa_offset 56
 171:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		  down_button_.resize(X + W - H / 2 - 2, Y + H - H / 2,
 5235              		.loc 9 171 0
 5236 0089 498DBC24 		leaq	528(%r12), %rdi
 5236      10020000 
 172:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		}
 5237              		.loc 9 172 0
 5238 0091 4189D8   		movl	%ebx, %r8d
 5239 0094 4489EE   		movl	%r13d, %esi
 5240              		.loc 9 173 0
 5241 0097 5B       		popq	%rbx
 5242              		.cfi_def_cfa_offset 48
 172:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		}
 5243              		.loc 9 172 0
 5244 0098 01EA     		addl	%ebp, %edx
 5245 009a 4489C9   		movl	%r9d, %ecx
 5246              		.loc 9 173 0
 5247 009d 5D       		popq	%rbp
 5248              		.cfi_def_cfa_offset 40
 5249 009e 415C     		popq	%r12
 5250              		.cfi_def_cfa_offset 32
 5251              	.LVL624:
 5252 00a0 415D     		popq	%r13
 5253              		.cfi_def_cfa_offset 24
 5254 00a2 415E     		popq	%r14
 5255              		.cfi_def_cfa_offset 16
 5256              	.LVL625:
 5257 00a4 415F     		popq	%r15
 5258              		.cfi_def_cfa_offset 8
 5259              	.LVL626:
 172:fltk-1.3.4-1/FL/Fl_Spinner.H **** 		}
 5260              		.loc 9 172 0
 5261 00a6 E9000000 		jmp	_ZN9Fl_Widget6resizeEiiii
 5261      00
 5262              	.LVL627:
 5263              		.cfi_endproc
 5264              	.LFE634:
 5266              		.section	.text.unlikely._ZN10Fl_Spinner6resizeEiiii,"axG",@progbits,_ZN10Fl_Spinner6resizeEiiii,co
 5267              	.LCOLDE39:
 5268              		.section	.text._ZN10Fl_Spinner6resizeEiiii,"axG",@progbits,_ZN10Fl_Spinner6resizeEiiii,comdat
 5269              	.LHOTE39:
 5270              		.section	.text.unlikely._ZN15Fl_Input_Choice6resizeEiiii,"axG",@progbits,_ZN15Fl_Input_Choice6resi
 5271              		.align 2
 5272              	.LCOLDB40:
 5273              		.section	.text._ZN15Fl_Input_Choice6resizeEiiii,"axG",@progbits,_ZN15Fl_Input_Choice6resizeEiiii,c
 5274              	.LHOTB40:
 5275              		.align 2
 5276              		.p2align 4,,15
 5277              		.weak	_ZN15Fl_Input_Choice6resizeEiiii
 5279              	_ZN15Fl_Input_Choice6resizeEiiii:
 5280              	.LFB599:
 162:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 163:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   // Custom resize behavior -- input stretches, menu button doesn't
 164:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_x() { return(x() + Fl::box_dx(box())); }
 165:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_y() { return(y() + Fl::box_dy(box())); }
 166:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_w() { return(w() - Fl::box_dw(box()) - 20); }
 167:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_h() { return(h() - Fl::box_dh(box())); }
 168:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 169:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_x() { return(x() + w() - 20 - Fl::box_dx(box())); }
 170:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_y() { return(y() + Fl::box_dy(box())); }
 171:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_w() { return(20); }
 172:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_h() { return(h() - Fl::box_dh(box())); }
 173:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 174:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** public:
 175:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /**
 176:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Creates a new Fl_Input_Choice widget using the given position, size,
 177:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     and label string.
 178:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Inherited destructor destroys the widget and any values associated with it.
 179:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   */
 180:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   Fl_Input_Choice(int X,int Y,int W,int H,const char*L=0);
 181:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   
 182:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Adds an item to the menu.
 183:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    You can access the more complex Fl_Menu_Button::add() methods 
 184:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    (setting callbacks, userdata, etc), via menubutton(). Example:
 185:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    \code
 186:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    Fl_Input_Choice *choice = new Fl_Input_Choice(100,10,120,25,"Fonts");
 187:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    Fl_Menu_Button *mb = choice->menubutton();             // use Fl_Input_Choice's Fl_Menu_Button
 188:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    mb->add("Helvetica", 0, MyFont_CB,     (void*)mydata); // use Fl_Menu_Button's add() methods
 189:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    mb->add("Courier",   0, MyFont_CB,     (void*)mydata);
 190:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    mb->add("More..",    0, FontDialog_CB, (void*)mydata);
 191:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    \endcode
 192:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    */
 193:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   void add(const char *s) { menu_->add(s);  }
 194:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Returns the combined changed() state of the input and menu button widget. */
 195:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   int changed() const { return inp_->changed() | Fl_Widget::changed(); }
 196:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Clears the changed() state of both input and menu button widgets. */
 197:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   void clear_changed() { 
 198:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     inp_->clear_changed();
 199:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Widget::clear_changed();
 200:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
 201:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Sets the changed() state of both input and menu button widgets
 202:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****    to the specfied value.*/
 203:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   void set_changed() { 
 204:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     inp_->set_changed();
 205:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     // no need to call Fl_Widget::set_changed()
 206:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
 207:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Removes all items from the menu. */
 208:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   void clear() { menu_->clear(); }
 209:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Gets the box type of the menu button */
 210:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   Fl_Boxtype down_box() const { return (menu_->down_box()); }
 211:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Sets the box type of the menu button */
 212:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   void down_box(Fl_Boxtype b) { menu_->down_box(b); }
 213:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Gets the Fl_Menu_Item array used for the menu. */
 214:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   const Fl_Menu_Item *menu() { return (menu_->menu()); }
 215:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   /** Sets the Fl_Menu_Item array used for the menu. */
 216:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   void menu(const Fl_Menu_Item *m) { menu_->menu(m); }
 217:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   void resize(int X, int Y, int W, int H) {
 5281              		.loc 5 217 0
 5282              		.cfi_startproc
 5283              	.LVL628:
 5284 0000 4157     		pushq	%r15
 5285              		.cfi_def_cfa_offset 16
 5286              		.cfi_offset 15, -16
 5287 0002 4156     		pushq	%r14
 5288              		.cfi_def_cfa_offset 24
 5289              		.cfi_offset 14, -24
 5290 0004 4155     		pushq	%r13
 5291              		.cfi_def_cfa_offset 32
 5292              		.cfi_offset 13, -32
 5293 0006 4154     		pushq	%r12
 5294              		.cfi_def_cfa_offset 40
 5295              		.cfi_offset 12, -40
 5296 0008 55       		pushq	%rbp
 5297              		.cfi_def_cfa_offset 48
 5298              		.cfi_offset 6, -48
 5299 0009 53       		pushq	%rbx
 5300              		.cfi_def_cfa_offset 56
 5301              		.cfi_offset 3, -56
 5302 000a 4889FB   		movq	%rdi, %rbx
 5303 000d 4883EC18 		subq	$24, %rsp
 5304              		.cfi_def_cfa_offset 80
 218:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     Fl_Group::resize(X,Y,W,H);
 5305              		.loc 5 218 0
 5306 0011 E8000000 		call	_ZN8Fl_Group6resizeEiiii
 5306      00
 5307              	.LVL629:
 219:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     inp_->resize(inp_x(), inp_y(), inp_w(), inp_h());
 5308              		.loc 5 219 0
 5309 0016 488B83A0 		movq	160(%rbx), %rax
 5309      000000
 5310              	.LBB1218:
 5311              	.LBB1219:
 167:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 5312              		.loc 5 167 0
 5313 001d 0FB67B6E 		movzbl	110(%rbx), %edi
 5314 0021 448B732C 		movl	44(%rbx), %r14d
 5315              	.LBE1219:
 5316              	.LBE1218:
 5317              		.loc 5 219 0
 5318 0025 488B00   		movq	(%rax), %rax
 5319 0028 488B6820 		movq	32(%rax), %rbp
 5320              	.LVL630:
 5321              	.LBB1222:
 5322              	.LBB1220:
 167:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 5323              		.loc 5 167 0
 5324 002c E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 5324      00
 5325              	.LVL631:
 5326              	.LBE1220:
 5327              	.LBE1222:
 5328              	.LBB1223:
 5329              	.LBB1224:
 166:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_h() { return(h() - Fl::box_dh(box())); }
 5330              		.loc 5 166 0
 5331 0031 0FB67B6E 		movzbl	110(%rbx), %edi
 5332              	.LBE1224:
 5333              	.LBE1223:
 5334              	.LBB1227:
 5335              	.LBB1221:
 167:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 5336              		.loc 5 167 0
 5337 0035 4589F0   		movl	%r14d, %r8d
 5338 0038 448B7328 		movl	40(%rbx), %r14d
 5339 003c 4129C0   		subl	%eax, %r8d
 5340 003f 44894424 		movl	%r8d, 12(%rsp)
 5340      0C
 5341              	.LVL632:
 5342              	.LBE1221:
 5343              	.LBE1227:
 5344              	.LBB1228:
 5345              	.LBB1225:
 166:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_h() { return(h() - Fl::box_dh(box())); }
 5346              		.loc 5 166 0
 5347 0044 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 5347      00
 5348              	.LVL633:
 5349              	.LBE1225:
 5350              	.LBE1228:
 5351              	.LBB1229:
 5352              	.LBB1230:
 165:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_w() { return(w() - Fl::box_dw(box()) - 20); }
 5353              		.loc 5 165 0
 5354 0049 0FB67B6E 		movzbl	110(%rbx), %edi
 5355              	.LBE1230:
 5356              	.LBE1229:
 5357              	.LBB1233:
 5358              	.LBB1226:
 166:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_h() { return(h() - Fl::box_dh(box())); }
 5359              		.loc 5 166 0
 5360 004d 4189C7   		movl	%eax, %r15d
 5361              	.LVL634:
 5362 0050 448B6324 		movl	36(%rbx), %r12d
 5363              	.LVL635:
 5364              	.LBE1226:
 5365              	.LBE1233:
 5366              	.LBB1234:
 5367              	.LBB1231:
 165:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_w() { return(w() - Fl::box_dw(box()) - 20); }
 5368              		.loc 5 165 0
 5369 0054 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 5369      00
 5370              	.LVL636:
 5371              	.LBE1231:
 5372              	.LBE1234:
 5373              	.LBB1235:
 5374              	.LBB1236:
 164:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_y() { return(y() + Fl::box_dy(box())); }
 5375              		.loc 5 164 0
 5376 0059 0FB67B6E 		movzbl	110(%rbx), %edi
 5377 005d 448B6B20 		movl	32(%rbx), %r13d
 5378              	.LBE1236:
 5379              	.LBE1235:
 5380              	.LBB1238:
 5381              	.LBB1232:
 165:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_w() { return(w() - Fl::box_dw(box()) - 20); }
 5382              		.loc 5 165 0
 5383 0061 4101C4   		addl	%eax, %r12d
 5384              	.LVL637:
 5385              	.LBE1232:
 5386              	.LBE1238:
 5387              	.LBB1239:
 5388              	.LBB1237:
 164:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_y() { return(y() + Fl::box_dy(box())); }
 5389              		.loc 5 164 0
 5390 0064 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 5390      00
 5391              	.LVL638:
 5392              	.LBE1237:
 5393              	.LBE1239:
 5394              		.loc 5 219 0
 5395 0069 4489F1   		movl	%r14d, %ecx
 5396 006c 418D7405 		leal	0(%r13,%rax), %esi
 5396      00
 5397 0071 448B4424 		movl	12(%rsp), %r8d
 5397      0C
 5398 0076 4429F9   		subl	%r15d, %ecx
 5399 0079 4489E2   		movl	%r12d, %edx
 5400 007c 488BBBA0 		movq	160(%rbx), %rdi
 5400      000000
 5401 0083 83E914   		subl	$20, %ecx
 5402 0086 FFD5     		call	*%rbp
 5403              	.LVL639:
 220:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****     menu_->resize(menu_x(), menu_y(), menu_w(), menu_h());
 5404              		.loc 5 220 0
 5405 0088 488B83A8 		movq	168(%rbx), %rax
 5405      000000
 5406              	.LBB1240:
 5407              	.LBB1241:
 172:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 5408              		.loc 5 172 0
 5409 008f 0FB67B6E 		movzbl	110(%rbx), %edi
 5410 0093 448B732C 		movl	44(%rbx), %r14d
 5411              	.LBE1241:
 5412              	.LBE1240:
 5413              		.loc 5 220 0
 5414 0097 488B00   		movq	(%rax), %rax
 5415 009a 4C8B6820 		movq	32(%rax), %r13
 5416              	.LVL640:
 5417              	.LBB1244:
 5418              	.LBB1242:
 172:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 5419              		.loc 5 172 0
 5420 009e E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 5420      00
 5421              	.LVL641:
 5422              	.LBE1242:
 5423              	.LBE1244:
 5424              	.LBB1245:
 5425              	.LBB1246:
 170:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_w() { return(20); }
 5426              		.loc 5 170 0
 5427 00a3 0FB67B6E 		movzbl	110(%rbx), %edi
 5428              	.LBE1246:
 5429              	.LBE1245:
 5430              	.LBB1249:
 5431              	.LBB1243:
 172:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 5432              		.loc 5 172 0
 5433 00a7 4129C6   		subl	%eax, %r14d
 5434              	.LVL642:
 5435 00aa 448B6324 		movl	36(%rbx), %r12d
 5436              	.LVL643:
 5437              	.LBE1243:
 5438              	.LBE1249:
 5439              	.LBB1250:
 5440              	.LBB1247:
 170:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_w() { return(20); }
 5441              		.loc 5 170 0
 5442 00ae E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 5442      00
 5443              	.LVL644:
 5444              	.LBE1247:
 5445              	.LBE1250:
 5446              	.LBB1251:
 5447              	.LBB1252:
 169:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_y() { return(y() + Fl::box_dy(box())); }
 5448              		.loc 5 169 0
 5449 00b3 8B6B28   		movl	40(%rbx), %ebp
 5450 00b6 036B20   		addl	32(%rbx), %ebp
 5451              	.LBE1252:
 5452              	.LBE1251:
 5453              	.LBB1254:
 5454              	.LBB1248:
 170:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_w() { return(20); }
 5455              		.loc 5 170 0
 5456 00b9 4101C4   		addl	%eax, %r12d
 5457              	.LVL645:
 5458              	.LBE1248:
 5459              	.LBE1254:
 5460              	.LBB1255:
 5461              	.LBB1253:
 169:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_y() { return(y() + Fl::box_dy(box())); }
 5462              		.loc 5 169 0
 5463 00bc 0FB67B6E 		movzbl	110(%rbx), %edi
 5464 00c0 83ED14   		subl	$20, %ebp
 5465              	.LVL646:
 5466 00c3 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 5466      00
 5467              	.LVL647:
 5468              	.LBE1253:
 5469              	.LBE1255:
 5470              		.loc 5 220 0
 5471 00c8 488BBBA8 		movq	168(%rbx), %rdi
 5471      000000
 5472 00cf 89EE     		movl	%ebp, %esi
 221:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
 5473              		.loc 5 221 0
 5474 00d1 4883C418 		addq	$24, %rsp
 5475              		.cfi_def_cfa_offset 56
 5476 00d5 5B       		popq	%rbx
 5477              		.cfi_def_cfa_offset 48
 5478              	.LVL648:
 220:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
 5479              		.loc 5 220 0
 5480 00d6 29C6     		subl	%eax, %esi
 5481 00d8 4589F0   		movl	%r14d, %r8d
 5482 00db 4489E2   		movl	%r12d, %edx
 5483              		.loc 5 221 0
 5484 00de 5D       		popq	%rbp
 5485              		.cfi_def_cfa_offset 40
 220:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
 5486              		.loc 5 220 0
 5487 00df 4C89E8   		movq	%r13, %rax
 5488 00e2 B9140000 		movl	$20, %ecx
 5488      00
 5489              		.loc 5 221 0
 5490 00e7 415C     		popq	%r12
 5491              		.cfi_def_cfa_offset 32
 5492 00e9 415D     		popq	%r13
 5493              		.cfi_def_cfa_offset 24
 5494 00eb 415E     		popq	%r14
 5495              		.cfi_def_cfa_offset 16
 5496 00ed 415F     		popq	%r15
 5497              		.cfi_def_cfa_offset 8
 220:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   }
 5498              		.loc 5 220 0
 5499 00ef FFE0     		jmp	*%rax
 5500              	.LVL649:
 5501              		.cfi_endproc
 5502              	.LFE599:
 5504              		.section	.text.unlikely._ZN15Fl_Input_Choice6resizeEiiii,"axG",@progbits,_ZN15Fl_Input_Choice6resi
 5505              	.LCOLDE40:
 5506              		.section	.text._ZN15Fl_Input_Choice6resizeEiiii,"axG",@progbits,_ZN15Fl_Input_Choice6resizeEiiii,c
 5507              	.LHOTE40:
 5508              		.section	.text.unlikely._ZNK8Fl_Group12update_childER9Fl_Widget,"ax",@progbits
 5509              		.align 2
 5510              	.LCOLDB41:
 5511              		.section	.text._ZNK8Fl_Group12update_childER9Fl_Widget,"ax",@progbits
 5512              	.LHOTB41:
 5513              		.align 2
 5514              		.p2align 4,,15
 5515              		.globl	_ZNK8Fl_Group12update_childER9Fl_Widget
 5517              	_ZNK8Fl_Group12update_childER9Fl_Widget:
 5518              	.LFB678:
 754:fltk-1.3.4-1/src/Fl_Group.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5519              		.loc 3 754 0
 5520              		.cfi_startproc
 5521              	.LVL650:
 755:fltk-1.3.4-1/src/Fl_Group.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 5522              		.loc 3 755 0
 5523 0000 807E6D00 		cmpb	$0, 109(%rsi)
 5524 0004 740C     		je	.L553
 5525              	.LVL651:
 755:fltk-1.3.4-1/src/Fl_Group.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 5526              		.loc 3 755 0 is_stmt 0 discriminator 1
 5527 0006 F6466002 		testb	$2, 96(%rsi)
 5528 000a 7506     		jne	.L553
 5529              	.LVL652:
 755:fltk-1.3.4-1/src/Fl_Group.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 5530              		.loc 3 755 0 discriminator 3
 5531 000c 807E6CEF 		cmpb	$-17, 108(%rsi)
 5532 0010 7606     		jbe	.L554
 5533              	.LVL653:
 5534              	.L553:
 760:fltk-1.3.4-1/src/Fl_Group.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 5535              		.loc 3 760 0 is_stmt 1
 5536 0012 C3       		ret
 5537              	.LVL654:
 5538              		.p2align 4,,10
 5539 0013 0F1F4400 		.p2align 3
 5539      00
 5540              	.L554:
 5541              	.LBB1280:
 5542              	.LBB1281:
 114:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5543              		.loc 6 114 0 discriminator 5
 5544 0018 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5544      000000
 5545              	.LVL655:
 5546              	.LBE1281:
 5547              	.LBE1280:
 754:fltk-1.3.4-1/src/Fl_Group.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5548              		.loc 3 754 0 discriminator 5
 5549 001f 53       		pushq	%rbx
 5550              		.cfi_def_cfa_offset 16
 5551              		.cfi_offset 3, -16
 5552 0020 4889F3   		movq	%rsi, %rbx
 5553              	.LVL656:
 5554              	.LBB1283:
 5555              	.LBB1282:
 114:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5556              		.loc 6 114 0 discriminator 5
 5557 0023 8B4E28   		movl	40(%rsi), %ecx
 5558 0026 8B5624   		movl	36(%rsi), %edx
 5559 0029 448B432C 		movl	44(%rbx), %r8d
 5560 002d 8B7620   		movl	32(%rsi), %esi
 5561              	.LVL657:
 5562 0030 488B07   		movq	(%rdi), %rax
 5563 0033 FF906001 		call	*352(%rax)
 5563      0000
 5564              	.LVL658:
 5565              	.LBE1282:
 5566              	.LBE1283:
 755:fltk-1.3.4-1/src/Fl_Group.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 5567              		.loc 3 755 0 discriminator 5
 5568 0039 85C0     		testl	%eax, %eax
 5569 003b 740D     		je	.L547
 5570              	.LVL659:
 5571              	.LBB1284:
 5572              	.LBB1285:
 757:fltk-1.3.4-1/src/Fl_Group.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 5573              		.loc 3 757 0
 5574 003d 488B03   		movq	(%rbx), %rax
 5575 0040 4889DF   		movq	%rbx, %rdi
 5576 0043 FF5010   		call	*16(%rax)
 5577              	.LVL660:
 5578              	.LBB1286:
 5579              	.LBB1287:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5580              		.loc 1 931 0
 5581 0046 C6436D00 		movb	$0, 109(%rbx)
 5582              	.LVL661:
 5583              	.L547:
 5584              	.LBE1287:
 5585              	.LBE1286:
 5586              	.LBE1285:
 5587              	.LBE1284:
 760:fltk-1.3.4-1/src/Fl_Group.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 5588              		.loc 3 760 0
 5589 004a 5B       		popq	%rbx
 5590              		.cfi_restore 3
 5591              		.cfi_def_cfa_offset 8
 5592              	.LVL662:
 5593 004b C3       		ret
 5594              		.cfi_endproc
 5595              	.LFE678:
 5597              		.section	.text.unlikely._ZNK8Fl_Group12update_childER9Fl_Widget
 5598              	.LCOLDE41:
 5599              		.section	.text._ZNK8Fl_Group12update_childER9Fl_Widget
 5600              	.LHOTE41:
 5601              		.section	.text.unlikely._ZNK8Fl_Group10draw_childER9Fl_Widget,"ax",@progbits
 5602              		.align 2
 5603              	.LCOLDB42:
 5604              		.section	.text._ZNK8Fl_Group10draw_childER9Fl_Widget,"ax",@progbits
 5605              	.LHOTB42:
 5606              		.align 2
 5607              		.p2align 4,,15
 5608              		.globl	_ZNK8Fl_Group10draw_childER9Fl_Widget
 5610              	_ZNK8Fl_Group10draw_childER9Fl_Widget:
 5611              	.LFB679:
 768:fltk-1.3.4-1/src/Fl_Group.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 5612              		.loc 3 768 0
 5613              		.cfi_startproc
 5614              	.LVL663:
 769:fltk-1.3.4-1/src/Fl_Group.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5615              		.loc 3 769 0
 5616 0000 F6466002 		testb	$2, 96(%rsi)
 5617 0004 7506     		jne	.L561
 5618              	.LVL664:
 769:fltk-1.3.4-1/src/Fl_Group.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5619              		.loc 3 769 0 is_stmt 0 discriminator 1
 5620 0006 807E6CEF 		cmpb	$-17, 108(%rsi)
 5621 000a 7604     		jbe	.L562
 5622              	.LVL665:
 5623              	.L561:
 775:fltk-1.3.4-1/src/Fl_Group.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 5624              		.loc 3 775 0 is_stmt 1
 5625 000c C3       		ret
 5626              	.LVL666:
 5627 000d 0F1F00   		.p2align 4,,10
 5628              		.p2align 3
 5629              	.L562:
 5630              	.LBB1312:
 5631              	.LBB1313:
 114:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5632              		.loc 6 114 0 discriminator 3
 5633 0010 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5633      000000
 5634              	.LVL667:
 5635              	.LBE1313:
 5636              	.LBE1312:
 768:fltk-1.3.4-1/src/Fl_Group.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 5637              		.loc 3 768 0 discriminator 3
 5638 0017 53       		pushq	%rbx
 5639              		.cfi_def_cfa_offset 16
 5640              		.cfi_offset 3, -16
 5641 0018 4889F3   		movq	%rsi, %rbx
 5642              	.LVL668:
 5643              	.LBB1315:
 5644              	.LBB1314:
 114:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5645              		.loc 6 114 0 discriminator 3
 5646 001b 8B4E28   		movl	40(%rsi), %ecx
 5647 001e 8B5624   		movl	36(%rsi), %edx
 5648 0021 448B432C 		movl	44(%rbx), %r8d
 5649 0025 8B7620   		movl	32(%rsi), %esi
 5650              	.LVL669:
 5651 0028 488B07   		movq	(%rdi), %rax
 5652 002b FF906001 		call	*352(%rax)
 5652      0000
 5653              	.LVL670:
 5654              	.LBE1314:
 5655              	.LBE1315:
 769:fltk-1.3.4-1/src/Fl_Group.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5656              		.loc 3 769 0 discriminator 3
 5657 0031 85C0     		testl	%eax, %eax
 5658 0033 7411     		je	.L555
 5659              	.LVL671:
 5660              	.LBB1316:
 5661              	.LBB1317:
 772:fltk-1.3.4-1/src/Fl_Group.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5662              		.loc 3 772 0
 5663 0035 488B03   		movq	(%rbx), %rax
 5664              	.LBB1318:
 5665              	.LBB1319:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5666              		.loc 1 931 0
 5667 0038 C6436D80 		movb	$-128, 109(%rbx)
 5668              	.LVL672:
 5669              	.LBE1319:
 5670              	.LBE1318:
 772:fltk-1.3.4-1/src/Fl_Group.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5671              		.loc 3 772 0
 5672 003c 4889DF   		movq	%rbx, %rdi
 5673 003f FF5010   		call	*16(%rax)
 5674              	.LVL673:
 5675              	.LBB1320:
 5676              	.LBB1321:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5677              		.loc 1 931 0
 5678 0042 C6436D00 		movb	$0, 109(%rbx)
 5679              	.LVL674:
 5680              	.L555:
 5681              	.LBE1321:
 5682              	.LBE1320:
 5683              	.LBE1317:
 5684              	.LBE1316:
 775:fltk-1.3.4-1/src/Fl_Group.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 5685              		.loc 3 775 0
 5686 0046 5B       		popq	%rbx
 5687              		.cfi_restore 3
 5688              		.cfi_def_cfa_offset 8
 5689              	.LVL675:
 5690 0047 C3       		ret
 5691              		.cfi_endproc
 5692              	.LFE679:
 5694              		.section	.text.unlikely._ZNK8Fl_Group10draw_childER9Fl_Widget
 5695              	.LCOLDE42:
 5696              		.section	.text._ZNK8Fl_Group10draw_childER9Fl_Widget
 5697              	.LHOTE42:
 5698              		.section	.text.unlikely._ZN8Fl_Group13draw_childrenEv,"ax",@progbits
 5699              		.align 2
 5700              	.LCOLDB43:
 5701              		.section	.text._ZN8Fl_Group13draw_childrenEv,"ax",@progbits
 5702              	.LHOTB43:
 5703              		.align 2
 5704              		.p2align 4,,15
 5705              		.globl	_ZN8Fl_Group13draw_childrenEv
 5707              	_ZN8Fl_Group13draw_childrenEv:
 5708              	.LFB676:
 715:fltk-1.3.4-1/src/Fl_Group.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 5709              		.loc 3 715 0
 5710              		.cfi_startproc
 5711              	.LVL676:
 5712 0000 4157     		pushq	%r15
 5713              		.cfi_def_cfa_offset 16
 5714              		.cfi_offset 15, -16
 5715 0002 4156     		pushq	%r14
 5716              		.cfi_def_cfa_offset 24
 5717              		.cfi_offset 14, -24
 5718 0004 4155     		pushq	%r13
 5719              		.cfi_def_cfa_offset 32
 5720              		.cfi_offset 13, -32
 5721 0006 4154     		pushq	%r12
 5722              		.cfi_def_cfa_offset 40
 5723              		.cfi_offset 12, -40
 5724 0008 55       		pushq	%rbp
 5725              		.cfi_def_cfa_offset 48
 5726              		.cfi_offset 6, -48
 5727 0009 53       		pushq	%rbx
 5728              		.cfi_def_cfa_offset 56
 5729              		.cfi_offset 3, -56
 5730 000a 4889FD   		movq	%rdi, %rbp
 5731              	.LBB1322:
 5732              	.LBB1323:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 5733              		.loc 3 45 0
 5734 000d 488D5F78 		leaq	120(%rdi), %rbx
 5735              	.LBE1323:
 5736              	.LBE1322:
 715:fltk-1.3.4-1/src/Fl_Group.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 5737              		.loc 3 715 0
 5738 0011 4883EC08 		subq	$8, %rsp
 5739              		.cfi_def_cfa_offset 64
 5740              	.LBB1325:
 5741              	.LBB1324:
  45:fltk-1.3.4-1/src/Fl_Group.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 5742              		.loc 3 45 0
 5743 0015 8B879000 		movl	144(%rdi), %eax
 5743      0000
 5744 001b 83F801   		cmpl	$1, %eax
 5745 001e 7E04     		jle	.L565
 5746 0020 488B5F78 		movq	120(%rdi), %rbx
 5747              	.L565:
 5748              	.LVL677:
 5749              	.LBE1324:
 5750              	.LBE1325:
 718:fltk-1.3.4-1/src/Fl_Group.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 5751              		.loc 3 718 0
 5752 0024 F6456108 		testb	$8, 97(%rbp)
 5753 0028 0F85AA00 		jne	.L585
 5753      0000
 5754              	.LVL678:
 5755              	.L566:
 5756              	.LBB1326:
 725:fltk-1.3.4-1/src/Fl_Group.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5757              		.loc 3 725 0
 5758 002e 0FB6556D 		movzbl	109(%rbp), %edx
 5759 0032 81E2FE00 		andl	$254, %edx
 5759      0000
 5760 0038 744E     		je	.L567
 5761 003a 4C8D2CC3 		leaq	(%rbx,%rax,8), %r13
 5762 003e 6690     		.p2align 4,,10
 5763              		.p2align 3
 5764              	.L568:
 5765              	.LVL679:
 5766              	.LBB1327:
 726:fltk-1.3.4-1/src/Fl_Group.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 5767              		.loc 3 726 0 discriminator 1
 5768 0040 4C39EB   		cmpq	%r13, %rbx
 5769 0043 742B     		je	.L573
 5770              	.L569:
 5771              	.LBB1328:
 727:fltk-1.3.4-1/src/Fl_Group.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 5772              		.loc 3 727 0
 5773 0045 4883C308 		addq	$8, %rbx
 5774              	.LVL680:
 5775 0049 4C8B63F8 		movq	-8(%rbx), %r12
 5776              	.LVL681:
 728:fltk-1.3.4-1/src/Fl_Group.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 5777              		.loc 3 728 0
 5778 004d 4889EF   		movq	%rbp, %rdi
 5779 0050 4C89E6   		movq	%r12, %rsi
 5780 0053 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 5780      00
 5781              	.LVL682:
 5782              	.LBB1329:
 5783              	.LBB1330:
 781:fltk-1.3.4-1/src/Fl_Group.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5784              		.loc 3 781 0
 5785 0058 41F64424 		testb	$2, 96(%r12)
 5785      6002
 5786 005e 75E0     		jne	.L568
 5787 0060 4C89E6   		movq	%r12, %rsi
 5788 0063 4889EF   		movq	%rbp, %rdi
 5789 0066 E8000000 		call	_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40
 5789      00
 5790              	.LVL683:
 5791              	.LBE1330:
 5792              	.LBE1329:
 5793              	.LBE1328:
 726:fltk-1.3.4-1/src/Fl_Group.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 5794              		.loc 3 726 0
 5795 006b 4C39EB   		cmpq	%r13, %rbx
 5796 006e 75D5     		jne	.L569
 5797              	.LVL684:
 5798              	.L573:
 5799              	.LBE1327:
 5800              	.LBE1326:
 735:fltk-1.3.4-1/src/Fl_Group.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 5801              		.loc 3 735 0
 5802 0070 F6456108 		testb	$8, 97(%rbp)
 5803 0074 753D     		jne	.L586
 5804              	.L582:
 736:fltk-1.3.4-1/src/Fl_Group.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5805              		.loc 3 736 0
 5806 0076 4883C408 		addq	$8, %rsp
 5807              		.cfi_remember_state
 5808              		.cfi_def_cfa_offset 56
 5809 007a 5B       		popq	%rbx
 5810              		.cfi_def_cfa_offset 48
 5811              	.LVL685:
 5812 007b 5D       		popq	%rbp
 5813              		.cfi_def_cfa_offset 40
 5814              	.LVL686:
 5815 007c 415C     		popq	%r12
 5816              		.cfi_def_cfa_offset 32
 5817 007e 415D     		popq	%r13
 5818              		.cfi_def_cfa_offset 24
 5819 0080 415E     		popq	%r14
 5820              		.cfi_def_cfa_offset 16
 5821 0082 415F     		popq	%r15
 5822              		.cfi_def_cfa_offset 8
 5823 0084 C3       		ret
 5824              	.LVL687:
 5825              		.p2align 4,,10
 5826 0085 0F1F00   		.p2align 3
 5827              	.L567:
 5828              		.cfi_restore_state
 5829              	.LBB1332:
 5830              	.LBB1331:
 732:fltk-1.3.4-1/src/Fl_Group.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 5831              		.loc 3 732 0
 5832 0088 85C0     		testl	%eax, %eax
 5833 008a 74E4     		je	.L573
 5834 008c 83E801   		subl	$1, %eax
 5835              	.LVL688:
 5836 008f 4C8D64C3 		leaq	8(%rbx,%rax,8), %r12
 5836      08
 5837              		.p2align 4,,10
 5838 0094 0F1F4000 		.p2align 3
 5839              	.L574:
 732:fltk-1.3.4-1/src/Fl_Group.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 5840              		.loc 3 732 0 is_stmt 0 discriminator 2
 5841 0098 4883C308 		addq	$8, %rbx
 5842              	.LVL689:
 5843 009c 488B73F8 		movq	-8(%rbx), %rsi
 5844 00a0 4889EF   		movq	%rbp, %rdi
 5845 00a3 E8000000 		call	_ZNK8Fl_Group12update_childER9Fl_Widget
 5845      00
 5846              	.LVL690:
 5847 00a8 4939DC   		cmpq	%rbx, %r12
 5848 00ab 75EB     		jne	.L574
 5849              	.LBE1331:
 5850              	.LBE1332:
 735:fltk-1.3.4-1/src/Fl_Group.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 5851              		.loc 3 735 0 is_stmt 1
 5852 00ad F6456108 		testb	$8, 97(%rbp)
 5853 00b1 74C3     		je	.L582
 5854              	.L586:
 5855              	.LBB1333:
 5856              	.LBB1334:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5857              		.loc 6 103 0
 5858 00b3 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5858      000000
 5859 00ba 488B07   		movq	(%rdi), %rax
 5860 00bd 488B8070 		movq	368(%rax), %rax
 5860      010000
 5861              	.LBE1334:
 5862              	.LBE1333:
 736:fltk-1.3.4-1/src/Fl_Group.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5863              		.loc 3 736 0
 5864 00c4 4883C408 		addq	$8, %rsp
 5865              		.cfi_remember_state
 5866              		.cfi_def_cfa_offset 56
 5867 00c8 5B       		popq	%rbx
 5868              		.cfi_def_cfa_offset 48
 5869              	.LVL691:
 5870 00c9 5D       		popq	%rbp
 5871              		.cfi_def_cfa_offset 40
 5872              	.LVL692:
 5873 00ca 415C     		popq	%r12
 5874              		.cfi_def_cfa_offset 32
 5875 00cc 415D     		popq	%r13
 5876              		.cfi_def_cfa_offset 24
 5877 00ce 415E     		popq	%r14
 5878              		.cfi_def_cfa_offset 16
 5879 00d0 415F     		popq	%r15
 5880              		.cfi_def_cfa_offset 8
 5881              	.LBB1336:
 5882              	.LBB1335:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5883              		.loc 6 103 0
 5884 00d2 FFE0     		jmp	*%rax
 5885              	.LVL693:
 5886              		.p2align 4,,10
 5887 00d4 0F1F4000 		.p2align 3
 5888              	.L585:
 5889              		.cfi_restore_state
 5890              	.LBE1335:
 5891              	.LBE1336:
 722:fltk-1.3.4-1/src/Fl_Group.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 5892              		.loc 3 722 0
 5893 00d8 0FB67D6E 		movzbl	110(%rbp), %edi
 5894              	.LVL694:
 5895 00dc 448B7D2C 		movl	44(%rbp), %r15d
 5896              	.LVL695:
 5897 00e0 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 5897      00
 5898              	.LVL696:
 721:fltk-1.3.4-1/src/Fl_Group.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 5899              		.loc 3 721 0
 5900 00e5 0FB67D6E 		movzbl	110(%rbp), %edi
 719:fltk-1.3.4-1/src/Fl_Group.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5901              		.loc 3 719 0
 5902 00e9 4129C7   		subl	%eax, %r15d
 5903 00ec 448B7528 		movl	40(%rbp), %r14d
 5904              	.LVL697:
 721:fltk-1.3.4-1/src/Fl_Group.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 5905              		.loc 3 721 0
 5906 00f0 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 5906      00
 5907              	.LVL698:
 720:fltk-1.3.4-1/src/Fl_Group.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 5908              		.loc 3 720 0
 5909 00f5 0FB67D6E 		movzbl	110(%rbp), %edi
 5910 00f9 448B6524 		movl	36(%rbp), %r12d
 719:fltk-1.3.4-1/src/Fl_Group.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5911              		.loc 3 719 0
 5912 00fd 4129C6   		subl	%eax, %r14d
 5913              	.LVL699:
 720:fltk-1.3.4-1/src/Fl_Group.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 5914              		.loc 3 720 0
 5915 0100 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 5915      00
 5916              	.LVL700:
 719:fltk-1.3.4-1/src/Fl_Group.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5917              		.loc 3 719 0
 5918 0105 0FB67D6E 		movzbl	110(%rbp), %edi
 5919 0109 468D2C20 		leal	(%rax,%r12), %r13d
 5920 010d 448B6520 		movl	32(%rbp), %r12d
 5921              	.LVL701:
 5922 0111 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 5922      00
 5923              	.LVL702:
 5924              	.LBB1337:
 5925              	.LBB1338:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5926              		.loc 6 82 0
 5927 0116 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5927      000000
 5928 011d 428D3420 		leal	(%rax,%r12), %esi
 5929              	.LVL703:
 5930 0121 4589F8   		movl	%r15d, %r8d
 5931 0124 4489F1   		movl	%r14d, %ecx
 5932 0127 4489EA   		movl	%r13d, %edx
 5933 012a 488B07   		movq	(%rdi), %rax
 5934 012d FF905001 		call	*336(%rax)
 5934      0000
 5935              	.LVL704:
 5936 0133 8B859000 		movl	144(%rbp), %eax
 5936      0000
 5937 0139 E9F0FEFF 		jmp	.L566
 5937      FF
 5938              	.LBE1338:
 5939              	.LBE1337:
 5940              		.cfi_endproc
 5941              	.LFE676:
 5943              		.section	.text.unlikely._ZN8Fl_Group13draw_childrenEv
 5944              	.LCOLDE43:
 5945              		.section	.text._ZN8Fl_Group13draw_childrenEv
 5946              	.LHOTE43:
 5947              		.section	.text.unlikely._ZN8Fl_Group4drawEv,"ax",@progbits
 5948              		.align 2
 5949              	.LCOLDB44:
 5950              		.section	.text._ZN8Fl_Group4drawEv,"ax",@progbits
 5951              	.LHOTB44:
 5952              		.align 2
 5953              		.p2align 4,,15
 5954              		.globl	_ZN8Fl_Group4drawEv
 5956              	_ZN8Fl_Group4drawEv:
 5957              	.LFB677:
 738:fltk-1.3.4-1/src/Fl_Group.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5958              		.loc 3 738 0
 5959              		.cfi_startproc
 5960              	.LVL705:
 5961 0000 53       		pushq	%rbx
 5962              		.cfi_def_cfa_offset 16
 5963              		.cfi_offset 3, -16
 739:fltk-1.3.4-1/src/Fl_Group.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 5964              		.loc 3 739 0
 5965 0001 0FB6476D 		movzbl	109(%rdi), %eax
 738:fltk-1.3.4-1/src/Fl_Group.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5966              		.loc 3 738 0
 5967 0005 4889FB   		movq	%rdi, %rbx
 739:fltk-1.3.4-1/src/Fl_Group.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 5968              		.loc 3 739 0
 5969 0008 A8FE     		testb	$-2, %al
 5970 000a 740D     		je	.L588
 740:fltk-1.3.4-1/src/Fl_Group.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 5971              		.loc 3 740 0
 5972 000c E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 5972      00
 5973              	.LVL706:
 741:fltk-1.3.4-1/src/Fl_Group.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 5974              		.loc 3 741 0
 5975 0011 4889DF   		movq	%rbx, %rdi
 5976 0014 E8000000 		call	_ZNK9Fl_Widget10draw_labelEv
 5976      00
 5977              	.LVL707:
 5978              	.L588:
 743:fltk-1.3.4-1/src/Fl_Group.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5979              		.loc 3 743 0
 5980 0019 4889DF   		movq	%rbx, %rdi
 744:fltk-1.3.4-1/src/Fl_Group.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 5981              		.loc 3 744 0
 5982 001c 5B       		popq	%rbx
 5983              		.cfi_def_cfa_offset 8
 5984              	.LVL708:
 743:fltk-1.3.4-1/src/Fl_Group.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 5985              		.loc 3 743 0
 5986 001d E9000000 		jmp	_ZN8Fl_Group13draw_childrenEv
 5986      00
 5987              	.LVL709:
 5988              		.cfi_endproc
 5989              	.LFE677:
 5991              		.section	.text.unlikely._ZN8Fl_Group4drawEv
 5992              	.LCOLDE44:
 5993              		.section	.text._ZN8Fl_Group4drawEv
 5994              	.LHOTE44:
 5995              		.section	.text.unlikely._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget,"ax",@progbits
 5996              		.align 2
 5997              	.LCOLDB45:
 5998              		.section	.text._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget,"ax",@progbits
 5999              	.LHOTB45:
 6000              		.align 2
 6001              		.p2align 4,,15
 6002              		.globl	_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
 6004              	_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget:
 6005              	.LFB680:
 780:fltk-1.3.4-1/src/Fl_Group.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 6006              		.loc 3 780 0
 6007              		.cfi_startproc
 6008              	.LVL710:
 781:fltk-1.3.4-1/src/Fl_Group.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6009              		.loc 3 781 0
 6010 0000 F6466002 		testb	$2, 96(%rsi)
 6011 0004 750A     		jne	.L593
 6012 0006 E9000000 		jmp	_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40
 6012      00
 6013              	.LVL711:
 6014 000b 0F1F4400 		.p2align 4,,10
 6014      00
 6015              		.p2align 3
 6016              	.L593:
 6017 0010 F3C3     		rep ret
 6018              		.cfi_endproc
 6019              	.LFE680:
 6021              		.section	.text.unlikely._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
 6022              	.LCOLDE45:
 6023              		.section	.text._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
 6024              	.LHOTE45:
 6025              		.section	.text.unlikely._ZN15Fl_Input_ChoiceC2EiiiiPKc,"ax",@progbits
 6026              		.align 2
 6027              	.LCOLDB46:
 6028              		.section	.text._ZN15Fl_Input_ChoiceC2EiiiiPKc,"ax",@progbits
 6029              	.LHOTB46:
 6030              		.align 2
 6031              		.p2align 4,,15
 6032              		.globl	_ZN15Fl_Input_ChoiceC2EiiiiPKc
 6034              	_ZN15Fl_Input_ChoiceC2EiiiiPKc:
 6035              	.LFB682:
 831:fltk-1.3.4-1/src/Fl_Group.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 832:fltk-1.3.4-1/src/Fl_Group.cxx ****  815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that
 833:fltk-1.3.4-1/src/Fl_Group.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 6036              		.loc 3 833 0
 6037              		.cfi_startproc
 6038              	.LVL712:
 6039 0000 4157     		pushq	%r15
 6040              		.cfi_def_cfa_offset 16
 6041              		.cfi_offset 15, -16
 6042 0002 4156     		pushq	%r14
 6043              		.cfi_def_cfa_offset 24
 6044              		.cfi_offset 14, -24
 6045 0004 4155     		pushq	%r13
 6046              		.cfi_def_cfa_offset 32
 6047              		.cfi_offset 13, -32
 6048 0006 4154     		pushq	%r12
 6049              		.cfi_def_cfa_offset 40
 6050              		.cfi_offset 12, -40
 6051 0008 55       		pushq	%rbp
 6052              		.cfi_def_cfa_offset 48
 6053              		.cfi_offset 6, -48
 6054 0009 53       		pushq	%rbx
 6055              		.cfi_def_cfa_offset 56
 6056              		.cfi_offset 3, -56
 6057 000a 4889FB   		movq	%rdi, %rbx
 6058 000d 4883EC18 		subq	$24, %rsp
 6059              		.cfi_def_cfa_offset 80
 6060              	.LBB1339:
 6061              	.LBB1340:
 6062              	.LBB1341:
 364:fltk-1.3.4-1/src/Fl_Group.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 6063              		.loc 3 364 0
 6064 0011 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 6064      00
 6065              	.LVL713:
 6066              	.LBB1342:
 6067              	.LBB1343:
  69:fltk-1.3.4-1/src/Fl_Group.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 6068              		.loc 3 69 0
 6069 0016 48891D00 		movq	%rbx, _ZN8Fl_Group8current_E(%rip)
 6069      000000
 6070              	.LBE1343:
 6071              	.LBE1342:
 366:fltk-1.3.4-1/src/Fl_Group.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 6072              		.loc 3 366 0
 6073 001d C7839000 		movl	$0, 144(%rbx)
 6073      00000000 
 6073      0000
 6074              	.LBE1341:
 6075              	.LBE1340:
 6076              	.LBB1345:
 6077              	.LBB1346:
 164:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_y() { return(y() + Fl::box_dy(box())); }
 6078              		.loc 5 164 0
 6079 0027 BF030000 		movl	$3, %edi
 6079      00
 6080              	.LBE1346:
 6081              	.LBE1345:
 6082              	.LBB1349:
 6083              	.LBB1344:
 367:fltk-1.3.4-1/src/Fl_Group.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 6084              		.loc 3 367 0
 6085 002c 48C74378 		movq	$0, 120(%rbx)
 6085      00000000 
 368:fltk-1.3.4-1/src/Fl_Group.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 6086              		.loc 3 368 0
 6087 0034 48C78380 		movq	$0, 128(%rbx)
 6087      00000000 
 6087      000000
 369:fltk-1.3.4-1/src/Fl_Group.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 6088              		.loc 3 369 0
 6089 003f 48899B88 		movq	%rbx, 136(%rbx)
 6089      000000
 370:fltk-1.3.4-1/src/Fl_Group.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 6090              		.loc 3 370 0
 6091 0046 48C78398 		movq	$0, 152(%rbx)
 6091      00000000 
 6091      000000
 6092              	.LVL714:
 6093              	.LBE1344:
 6094              	.LBE1349:
 834:fltk-1.3.4-1/src/Fl_Group.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 6095              		.loc 3 834 0
 6096 0051 48C70300 		movq	$_ZTV15Fl_Input_Choice+16, (%rbx)
 6096      000000
 6097              	.LVL715:
 6098              	.LBB1350:
 6099              	.LBB1351:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6100              		.loc 1 372 0
 6101 0058 C6436E03 		movb	$3, 110(%rbx)
 6102              	.LVL716:
 6103              	.LBE1351:
 6104              	.LBE1350:
 6105              	.LBB1352:
 6106              	.LBB1353:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6107              		.loc 1 357 0
 6108 005c C7435404 		movl	$4, 84(%rbx)
 6108      000000
 6109              	.LVL717:
 6110 0063 448B6B20 		movl	32(%rbx), %r13d
 6111              	.LVL718:
 6112              	.LBE1353:
 6113              	.LBE1352:
 6114              	.LBB1354:
 6115              	.LBB1347:
 164:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_y() { return(y() + Fl::box_dy(box())); }
 6116              		.loc 5 164 0
 6117 0067 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 6117      00
 6118              	.LVL719:
 6119              	.LBE1347:
 6120              	.LBE1354:
 6121              	.LBB1355:
 6122              	.LBB1356:
 165:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_w() { return(w() - Fl::box_dw(box()) - 20); }
 6123              		.loc 5 165 0
 6124 006c 0FB67B6E 		movzbl	110(%rbx), %edi
 6125 0070 448B7324 		movl	36(%rbx), %r14d
 6126              	.LBE1356:
 6127              	.LBE1355:
 6128              	.LBB1359:
 6129              	.LBB1348:
 164:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_y() { return(y() + Fl::box_dy(box())); }
 6130              		.loc 5 164 0
 6131 0074 4101C5   		addl	%eax, %r13d
 6132              	.LVL720:
 6133              	.LBE1348:
 6134              	.LBE1359:
 6135              	.LBB1360:
 6136              	.LBB1357:
 165:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_w() { return(w() - Fl::box_dw(box()) - 20); }
 6137              		.loc 5 165 0
 6138 0077 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 6138      00
 6139              	.LVL721:
 6140              	.LBE1357:
 6141              	.LBE1360:
 6142              	.LBB1361:
 6143              	.LBB1362:
 166:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_h() { return(h() - Fl::box_dh(box())); }
 6144              		.loc 5 166 0
 6145 007c 0FB67B6E 		movzbl	110(%rbx), %edi
 6146              	.LBE1362:
 6147              	.LBE1361:
 6148              	.LBB1365:
 6149              	.LBB1358:
 165:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_w() { return(w() - Fl::box_dw(box()) - 20); }
 6150              		.loc 5 165 0
 6151 0080 4101C6   		addl	%eax, %r14d
 6152              	.LVL722:
 6153 0083 448B6328 		movl	40(%rbx), %r12d
 6154              	.LVL723:
 6155              	.LBE1358:
 6156              	.LBE1365:
 6157              	.LBB1366:
 6158              	.LBB1363:
 166:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_h() { return(h() - Fl::box_dh(box())); }
 6159              		.loc 5 166 0
 6160 0087 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 6160      00
 6161              	.LVL724:
 6162              	.LBE1363:
 6163              	.LBE1366:
 6164              	.LBB1367:
 6165              	.LBB1368:
 167:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 6166              		.loc 5 167 0
 6167 008c 0FB67B6E 		movzbl	110(%rbx), %edi
 6168 0090 8B6B2C   		movl	44(%rbx), %ebp
 6169              	.LBE1368:
 6170              	.LBE1367:
 6171              	.LBB1371:
 6172              	.LBB1364:
 166:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int inp_h() { return(h() - Fl::box_dh(box())); }
 6173              		.loc 5 166 0
 6174 0093 4189C7   		movl	%eax, %r15d
 6175              	.LVL725:
 6176              	.LBE1364:
 6177              	.LBE1371:
 835:fltk-1.3.4-1/src/Fl_Group.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 836:fltk-1.3.4-1/src/Fl_Group.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 837:fltk-1.3.4-1/src/Fl_Group.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 838:fltk-1.3.4-1/src/Fl_Group.cxx ****  821:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 839:fltk-1.3.4-1/src/Fl_Group.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 6178              		.loc 3 839 0
 6179 0096 4529FC   		subl	%r15d, %r12d
 6180              	.LBB1372:
 6181              	.LBB1369:
 167:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 6182              		.loc 5 167 0
 6183 0099 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 6183      00
 6184              	.LVL726:
 6185 009e 4189E8   		movl	%ebp, %r8d
 6186              	.LBE1369:
 6187              	.LBE1372:
 6188              		.loc 3 839 0
 6189 00a1 BFC80000 		movl	$200, %edi
 6189      00
 6190              	.LBB1373:
 6191              	.LBB1370:
 167:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 6192              		.loc 5 167 0
 6193 00a6 4129C0   		subl	%eax, %r8d
 6194 00a9 44894424 		movl	%r8d, 12(%rsp)
 6194      0C
 6195              	.LVL727:
 6196              	.LBE1370:
 6197              	.LBE1373:
 6198              		.loc 3 839 0
 6199 00ae E8000000 		call	_Znwm
 6199      00
 6200              	.LVL728:
 6201 00b3 448B4424 		movl	12(%rsp), %r8d
 6201      0C
 6202 00b8 418D4C24 		leal	-20(%r12), %ecx
 6202      EC
 6203 00bd 4489F2   		movl	%r14d, %edx
 6204 00c0 4489EE   		movl	%r13d, %esi
 6205 00c3 4531C9   		xorl	%r9d, %r9d
 6206 00c6 4889C7   		movq	%rax, %rdi
 6207 00c9 4889C5   		movq	%rax, %rbp
 6208 00cc E8000000 		call	_ZN8Fl_InputC1EiiiiPKc
 6208      00
 6209              	.LVL729:
 6210              	.LBB1374:
 6211              	.LBB1375:
 169:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_y() { return(y() + Fl::box_dy(box())); }
 6212              		.loc 5 169 0
 6213 00d1 0FB67B6E 		movzbl	110(%rbx), %edi
 6214              	.LBE1375:
 6215              	.LBE1374:
 6216              		.loc 3 839 0
 6217 00d5 4889ABA0 		movq	%rbp, 160(%rbx)
 6217      000000
 6218              	.LVL730:
 6219              	.LBB1378:
 6220              	.LBB1379:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6221              		.loc 1 568 0
 6222 00dc 48895D18 		movq	%rbx, 24(%rbp)
 6223              	.LVL731:
 6224 00e0 48C74510 		movq	$_ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv, 16(%rbp)
 6224      00000000 
 6225              	.LBE1379:
 6226              	.LBE1378:
 6227              	.LBB1380:
 6228              	.LBB1381:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6229              		.loc 1 372 0
 6230 00e8 C6456E01 		movb	$1, 110(%rbp)
 6231              	.LVL732:
 6232              	.LBE1381:
 6233              	.LBE1380:
 6234              	.LBB1382:
 6235              	.LBB1383:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6236              		.loc 1 654 0
 6237 00ec C6456F03 		movb	$3, 111(%rbp)
 6238              	.LVL733:
 6239              	.LBE1383:
 6240              	.LBE1382:
 6241              	.LBB1384:
 6242              	.LBB1376:
 169:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_y() { return(y() + Fl::box_dy(box())); }
 6243              		.loc 5 169 0
 6244 00f0 8B6B28   		movl	40(%rbx), %ebp
 6245              	.LVL734:
 6246 00f3 036B20   		addl	32(%rbx), %ebp
 6247 00f6 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 6247      00
 6248              	.LVL735:
 6249              	.LBE1376:
 6250              	.LBE1384:
 6251              	.LBB1385:
 6252              	.LBB1386:
 170:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_w() { return(20); }
 6253              		.loc 5 170 0
 6254 00fb 0FB67B6E 		movzbl	110(%rbx), %edi
 6255 00ff 448B6B24 		movl	36(%rbx), %r13d
 6256              	.LBE1386:
 6257              	.LBE1385:
 6258              	.LBB1389:
 6259              	.LBB1377:
 169:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_y() { return(y() + Fl::box_dy(box())); }
 6260              		.loc 5 169 0
 6261 0103 83ED14   		subl	$20, %ebp
 6262              	.LVL736:
 6263 0106 29C5     		subl	%eax, %ebp
 6264 0108 4189EC   		movl	%ebp, %r12d
 6265              	.LVL737:
 6266              	.LBE1377:
 6267              	.LBE1389:
 6268              	.LBB1390:
 6269              	.LBB1387:
 170:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_w() { return(20); }
 6270              		.loc 5 170 0
 6271 010b E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 6271      00
 6272              	.LVL738:
 6273 0110 8B6B2C   		movl	44(%rbx), %ebp
 6274              	.LBE1387:
 6275              	.LBE1390:
 6276              	.LBB1391:
 6277              	.LBB1392:
 172:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 6278              		.loc 5 172 0
 6279 0113 0FB67B6E 		movzbl	110(%rbx), %edi
 6280              	.LBE1392:
 6281              	.LBE1391:
 6282              	.LBB1395:
 6283              	.LBB1388:
 170:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   inline int menu_w() { return(20); }
 6284              		.loc 5 170 0
 6285 0117 4101C5   		addl	%eax, %r13d
 6286              	.LVL739:
 6287              	.LBE1388:
 6288              	.LBE1395:
 6289              	.LBB1396:
 6290              	.LBB1393:
 172:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 6291              		.loc 5 172 0
 6292 011a 4189EE   		movl	%ebp, %r14d
 6293 011d E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 6293      00
 6294              	.LVL740:
 6295              	.LBE1393:
 6296              	.LBE1396:
 840:fltk-1.3.4-1/src/Fl_Group.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 841:fltk-1.3.4-1/src/Fl_Group.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 842:fltk-1.3.4-1/src/Fl_Group.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 843:fltk-1.3.4-1/src/Fl_Group.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 844:fltk-1.3.4-1/src/Fl_Group.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6297              		.loc 3 844 0
 6298 0122 BF980000 		movl	$152, %edi
 6298      00
 6299              	.LBB1397:
 6300              	.LBB1394:
 172:fltk-1.3.4-1/FL/Fl_Input_Choice.H **** 
 6301              		.loc 5 172 0
 6302 0127 4129C6   		subl	%eax, %r14d
 6303              	.LVL741:
 6304              	.LBE1394:
 6305              	.LBE1397:
 6306              		.loc 3 844 0
 6307 012a E8000000 		call	_Znwm
 6307      00
 6308              	.LVL742:
 6309              	.LBB1398:
 6310              	.LBB1399:
 107:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   };
 6311              		.loc 5 107 0
 6312 012f 4589F0   		movl	%r14d, %r8d
 6313 0132 4489EA   		movl	%r13d, %edx
 6314 0135 4489E6   		movl	%r12d, %esi
 6315 0138 4889C7   		movq	%rax, %rdi
 6316 013b 4531C9   		xorl	%r9d, %r9d
 6317 013e B9140000 		movl	$20, %ecx
 6317      00
 6318              	.LBE1399:
 6319              	.LBE1398:
 6320              		.loc 3 844 0
 6321 0143 4889C5   		movq	%rax, %rbp
 6322              	.LVL743:
 6323              	.LBB1402:
 6324              	.LBB1400:
 107:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   };
 6325              		.loc 5 107 0
 6326 0146 E8000000 		call	_ZN14Fl_Menu_ButtonC2EiiiiPKc
 6326      00
 6327              	.LVL744:
 6328              	.LBE1400:
 6329              	.LBE1402:
 6330              	.LBB1403:
 6331              	.LBB1404:
  75:fltk-1.3.4-1/src/Fl_Group.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 6332              		.loc 3 75 0
 6333 014b 488B4308 		movq	8(%rbx), %rax
 6334              	.LBE1404:
 6335              	.LBE1403:
 6336              	.LBB1406:
 6337              	.LBB1401:
 107:fltk-1.3.4-1/FL/Fl_Input_Choice.H ****   };
 6338              		.loc 5 107 0
 6339 014f 48C74500 		movq	$_ZTVN15Fl_Input_Choice15InputMenuButtonE+16, 0(%rbp)
 6339      00000000 
 6340              	.LVL745:
 6341              	.LBE1401:
 6342              	.LBE1406:
 6343              	.LBB1407:
 6344              	.LBB1408:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6345              		.loc 1 568 0
 6346 0157 48C74510 		movq	$_ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv, 16(%rbp)
 6346      00000000 
 6347 015f 48895D18 		movq	%rbx, 24(%rbp)
 6348              	.LBE1408:
 6349              	.LBE1407:
 6350              	.LBB1409:
 6351              	.LBB1410:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6352              		.loc 1 372 0
 6353 0163 C6456E01 		movb	$1, 110(%rbp)
 6354              	.LBE1410:
 6355              	.LBE1409:
 6356              		.loc 3 844 0
 6357 0167 4889ABA8 		movq	%rbp, 168(%rbx)
 6357      000000
 6358              	.LVL746:
 6359              	.LBB1411:
 6360              	.LBB1405:
  75:fltk-1.3.4-1/src/Fl_Group.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 6361              		.loc 3 75 0
 6362 016e 48890500 		movq	%rax, _ZN8Fl_Group8current_E(%rip)
 6362      000000
 6363              	.LVL747:
 6364              	.LBE1405:
 6365              	.LBE1411:
 6366              	.LBE1339:
 845:fltk-1.3.4-1/src/Fl_Group.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 846:fltk-1.3.4-1/src/Fl_Group.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 847:fltk-1.3.4-1/src/Fl_Group.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 848:fltk-1.3.4-1/src/Fl_Group.cxx ****  831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6367              		.loc 3 848 0
 6368 0175 4883C418 		addq	$24, %rsp
 6369              		.cfi_def_cfa_offset 56
 6370 0179 5B       		popq	%rbx
 6371              		.cfi_def_cfa_offset 48
 6372              	.LVL748:
 6373 017a 5D       		popq	%rbp
 6374              		.cfi_def_cfa_offset 40
 6375              	.LVL749:
 6376 017b 415C     		popq	%r12
 6377              		.cfi_def_cfa_offset 32
 6378 017d 415D     		popq	%r13
 6379              		.cfi_def_cfa_offset 24
 6380 017f 415E     		popq	%r14
 6381              		.cfi_def_cfa_offset 16
 6382 0181 415F     		popq	%r15
 6383              		.cfi_def_cfa_offset 8
 6384 0183 C3       		ret
 6385              		.cfi_endproc
 6386              	.LFE682:
 6388              		.section	.text.unlikely._ZN15Fl_Input_ChoiceC2EiiiiPKc
 6389              	.LCOLDE46:
 6390              		.section	.text._ZN15Fl_Input_ChoiceC2EiiiiPKc
 6391              	.LHOTE46:
 6392              		.globl	_ZN15Fl_Input_ChoiceC1EiiiiPKc
 6393              		.set	_ZN15Fl_Input_ChoiceC1EiiiiPKc,_ZN15Fl_Input_ChoiceC2EiiiiPKc
 6394              		.section	.rodata.str1.1
 6395              	.LC47:
 6396 0006 402D3432 		.string	"@-42<"
 6396      3C00
 6397              	.LC48:
 6398 000c 402D3432 		.string	"@-42>"
 6398      3E00
 6399              	.LC51:
 6400 0012 256700   		.string	"%g"
 6401              	.LC52:
 6402 0015 3100     		.string	"1"
 6403              		.section	.text.unlikely._ZN10Fl_SpinnerC2EiiiiPKc,"ax",@progbits
 6404              		.align 2
 6405              	.LCOLDB53:
 6406              		.section	.text._ZN10Fl_SpinnerC2EiiiiPKc,"ax",@progbits
 6407              	.LHOTB53:
 6408              		.align 2
 6409              		.p2align 4,,15
 6410              		.globl	_ZN10Fl_SpinnerC2EiiiiPKc
 6412              	_ZN10Fl_SpinnerC2EiiiiPKc:
 6413              	.LFB685:
 849:fltk-1.3.4-1/src/Fl_Group.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 850:fltk-1.3.4-1/src/Fl_Group.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 851:fltk-1.3.4-1/src/Fl_Group.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 6414              		.loc 3 851 0
 6415              		.cfi_startproc
 6416              	.LVL750:
 6417 0000 4157     		pushq	%r15
 6418              		.cfi_def_cfa_offset 16
 6419              		.cfi_offset 15, -16
 6420 0002 4589C7   		movl	%r8d, %r15d
 6421 0005 4156     		pushq	%r14
 6422              		.cfi_def_cfa_offset 24
 6423              		.cfi_offset 14, -24
 6424 0007 4155     		pushq	%r13
 6425              		.cfi_def_cfa_offset 32
 6426              		.cfi_offset 13, -32
 6427 0009 4154     		pushq	%r12
 6428              		.cfi_def_cfa_offset 40
 6429              		.cfi_offset 12, -40
 6430 000b 4189D6   		movl	%edx, %r14d
 6431 000e 55       		pushq	%rbp
 6432              		.cfi_def_cfa_offset 48
 6433              		.cfi_offset 6, -48
 6434              	.LBB1412:
 852:fltk-1.3.4-1/src/Fl_Group.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 853:fltk-1.3.4-1/src/Fl_Group.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 6435              		.loc 3 853 0
 6436 000f 4489FD   		movl	%r15d, %ebp
 6437              	.LBE1412:
 851:fltk-1.3.4-1/src/Fl_Group.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6438              		.loc 3 851 0
 6439 0012 53       		pushq	%rbx
 6440              		.cfi_def_cfa_offset 56
 6441              		.cfi_offset 3, -56
 6442              	.LBB1443:
 6443              		.loc 3 853 0
 6444 0013 C1ED1F   		shrl	$31, %ebp
 6445              	.LBE1443:
 851:fltk-1.3.4-1/src/Fl_Group.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6446              		.loc 3 851 0
 6447 0016 4889FB   		movq	%rdi, %rbx
 6448 0019 4189CD   		movl	%ecx, %r13d
 6449              	.LBB1444:
 6450              		.loc 3 853 0
 6451 001c 4401FD   		addl	%r15d, %ebp
 6452              	.LBE1444:
 851:fltk-1.3.4-1/src/Fl_Group.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 6453              		.loc 3 851 0
 6454 001f 4883EC18 		subq	$24, %rsp
 6455              		.cfi_def_cfa_offset 80
 6456              	.LBB1445:
 6457              		.loc 3 853 0
 6458 0023 4189EC   		movl	%ebp, %r12d
 6459              	.LBB1413:
 6460              	.LBB1414:
 364:fltk-1.3.4-1/src/Fl_Group.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 6461              		.loc 3 364 0
 6462 0026 89742404 		movl	%esi, 4(%rsp)
 6463              	.LBE1414:
 6464              	.LBE1413:
 854:fltk-1.3.4-1/src/Fl_Group.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6465              		.loc 3 854 0
 6466 002a D1FD     		sarl	%ebp
 853:fltk-1.3.4-1/src/Fl_Group.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6467              		.loc 3 853 0
 6468 002c 41D1FC   		sarl	%r12d
 6469              	.LBB1423:
 6470              	.LBB1419:
 364:fltk-1.3.4-1/src/Fl_Group.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 6471              		.loc 3 364 0
 6472 002f E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 6472      00
 6473              	.LVL751:
 6474              	.LBE1419:
 6475              	.LBE1423:
 853:fltk-1.3.4-1/src/Fl_Group.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6476              		.loc 3 853 0
 6477 0034 41F7DC   		negl	%r12d
 855:fltk-1.3.4-1/src/Fl_Group.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 856:fltk-1.3.4-1/src/Fl_Group.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6478              		.loc 3 856 0
 6479 0037 488D83C8 		leaq	200(%rbx), %rax
 6479      000000
 6480 003e 8B742404 		movl	4(%rsp), %esi
 6481 0042 438D4C25 		leal	-2(%r13,%r12), %ecx
 6481      FE
 6482              	.LBB1424:
 6483              	.LBB1420:
 6484              	.LBB1415:
 6485              	.LBB1416:
  69:fltk-1.3.4-1/src/Fl_Group.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 6486              		.loc 3 69 0
 6487 0047 48891D00 		movq	%rbx, _ZN8Fl_Group8current_E(%rip)
 6487      000000
 6488              	.LBE1416:
 6489              	.LBE1415:
 6490              	.LBE1420:
 6491              	.LBE1424:
 6492              		.loc 3 856 0
 6493 004e 4589F8   		movl	%r15d, %r8d
 6494 0051 4889C7   		movq	%rax, %rdi
 6495 0054 4489F2   		movl	%r14d, %edx
 6496              	.LBB1425:
 6497              	.LBB1421:
 6498              	.LBB1417:
 6499              	.LBB1418:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6500              		.loc 1 357 0
 6501 0057 C7435401 		movl	$1, 84(%rbx)
 6501      000000
 6502              	.LVL752:
 6503              	.LBE1418:
 6504              	.LBE1417:
 366:fltk-1.3.4-1/src/Fl_Group.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 6505              		.loc 3 366 0
 6506 005e C7839000 		movl	$0, 144(%rbx)
 6506      00000000 
 6506      0000
 367:fltk-1.3.4-1/src/Fl_Group.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 6507              		.loc 3 367 0
 6508 0068 48C74378 		movq	$0, 120(%rbx)
 6508      00000000 
 6509              	.LBE1421:
 6510              	.LBE1425:
 6511              		.loc 3 856 0
 6512 0070 4531C9   		xorl	%r9d, %r9d
 6513              	.LBB1426:
 6514              	.LBB1422:
 368:fltk-1.3.4-1/src/Fl_Group.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 6515              		.loc 3 368 0
 6516 0073 48C78380 		movq	$0, 128(%rbx)
 6516      00000000 
 6516      000000
 369:fltk-1.3.4-1/src/Fl_Group.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 6517              		.loc 3 369 0
 6518 007e 48899B88 		movq	%rbx, 136(%rbx)
 6518      000000
 370:fltk-1.3.4-1/src/Fl_Group.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 6519              		.loc 3 370 0
 6520 0085 48C78398 		movq	$0, 152(%rbx)
 6520      00000000 
 6520      000000
 6521              	.LVL753:
 6522              	.LBE1422:
 6523              	.LBE1426:
 6524              		.loc 3 856 0
 6525 0090 48C70300 		movq	$_ZTV10Fl_Spinner+16, (%rbx)
 6525      000000
 6526 0097 48894424 		movq	%rax, 8(%rsp)
 6526      08
 6527 009c E8000000 		call	_ZN8Fl_InputC1EiiiiPKc
 6527      00
 6528              	.LVL754:
 6529 00a1 44036C24 		addl	4(%rsp), %r13d
 6529      04
 6530              	.LVL755:
 6531 00a6 448D5502 		leal	2(%rbp), %r10d
 6532 00aa 488DBB90 		leaq	400(%rbx), %rdi
 6532      010000
 6533 00b1 4189E8   		movl	%ebp, %r8d
 6534 00b4 4489F2   		movl	%r14d, %edx
 6535 00b7 41B90000 		movl	$.LC47, %r9d
 6535      0000
 6536 00bd 4489D1   		movl	%r10d, %ecx
 6537 00c0 44895424 		movl	%r10d, 4(%rsp)
 6537      04
 6538              	.LVL756:
 6539 00c5 478D6C2C 		leal	-2(%r12,%r13), %r13d
 6539      FE
 6540 00ca 4489EE   		movl	%r13d, %esi
 6541 00cd E8000000 		call	_ZN16Fl_Repeat_ButtonC1EiiiiPKc
 6541      00
 6542              	.LVL757:
 6543 00d2 448B5424 		movl	4(%rsp), %r10d
 6543      04
 6544 00d7 438D143E 		leal	(%r14,%r15), %edx
 6545 00db 488DBB10 		leaq	528(%rbx), %rdi
 6545      020000
 6546 00e2 4189E8   		movl	%ebp, %r8d
 6547 00e5 4489EE   		movl	%r13d, %esi
 6548 00e8 41B90000 		movl	$.LC48, %r9d
 6548      0000
 6549 00ee 4401E2   		addl	%r12d, %edx
 6550 00f1 4489D1   		movl	%r10d, %ecx
 6551 00f4 E8000000 		call	_ZN16Fl_Repeat_ButtonC1EiiiiPKc
 6551      00
 6552              	.LVL758:
 857:fltk-1.3.4-1/src/Fl_Group.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 858:fltk-1.3.4-1/src/Fl_Group.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 859:fltk-1.3.4-1/src/Fl_Group.cxx ****  842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on th
 860:fltk-1.3.4-1/src/Fl_Group.cxx ****  843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 6553              		.loc 3 860 0
 6554 00f9 F20F1005 		movsd	.LC49(%rip), %xmm0
 6554      00000000 
 861:fltk-1.3.4-1/src/Fl_Group.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 862:fltk-1.3.4-1/src/Fl_Group.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 863:fltk-1.3.4-1/src/Fl_Group.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 864:fltk-1.3.4-1/src/Fl_Group.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 865:fltk-1.3.4-1/src/Fl_Group.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 866:fltk-1.3.4-1/src/Fl_Group.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 867:fltk-1.3.4-1/src/Fl_Group.cxx ****  850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 868:fltk-1.3.4-1/src/Fl_Group.cxx ****  851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 6555              		.loc 3 868 0
 6556 0101 488B4424 		movq	8(%rsp), %rax
 6556      08
 862:fltk-1.3.4-1/src/Fl_Group.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 6557              		.loc 3 862 0
 6558 0106 F20F100D 		movsd	.LC50(%rip), %xmm1
 6558      00000000 
 6559              	.LBB1427:
 6560              	.LBB1428:
  75:fltk-1.3.4-1/src/Fl_Group.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 6561              		.loc 3 75 0
 6562 010e 488B5308 		movq	8(%rbx), %rdx
 6563              	.LBE1428:
 6564              	.LBE1427:
 860:fltk-1.3.4-1/src/Fl_Group.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6565              		.loc 3 860 0
 6566 0112 F20F1183 		movsd	%xmm0, 160(%rbx)
 6566      A0000000 
 864:fltk-1.3.4-1/src/Fl_Group.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 6567              		.loc 3 864 0
 6568 011a 48C783C0 		movq	$.LC51, 192(%rbx)
 6568      00000000 
 6568      000000
 6569              	.LBB1430:
 6570              	.LBB1431:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6571              		.loc 1 357 0
 6572 0125 C7435404 		movl	$4, 84(%rbx)
 6572      000000
 6573              	.LBE1431:
 6574              	.LBE1430:
 861:fltk-1.3.4-1/src/Fl_Group.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 6575              		.loc 3 861 0
 6576 012c F20F1183 		movsd	%xmm0, 168(%rbx)
 6576      A8000000 
 6577              		.loc 3 868 0
 6578 0134 BE000000 		movl	$.LC52, %esi
 6578      00
 6579 0139 4889C7   		movq	%rax, %rdi
 862:fltk-1.3.4-1/src/Fl_Group.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 6580              		.loc 3 862 0
 6581 013c F20F118B 		movsd	%xmm1, 176(%rbx)
 6581      B0000000 
 6582              	.LBB1432:
 6583              	.LBB1429:
  75:fltk-1.3.4-1/src/Fl_Group.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 6584              		.loc 3 75 0
 6585 0144 48891500 		movq	%rdx, _ZN8Fl_Group8current_E(%rip)
 6585      000000
 6586              	.LVL759:
 6587              	.LBE1429:
 6588              	.LBE1432:
 863:fltk-1.3.4-1/src/Fl_Group.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 6589              		.loc 3 863 0
 6590 014b F20F1183 		movsd	%xmm0, 184(%rbx)
 6590      B8000000 
 6591              		.loc 3 868 0
 6592 0153 E8000000 		call	_ZN9Fl_Input_5valueEPKc
 6592      00
 6593              	.LVL760:
 6594              	.LBB1433:
 6595              	.LBB1434:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6596              		.loc 1 279 0
 6597 0158 C6833401 		movb	$2, 308(%rbx)
 6597      000002
 6598              	.LVL761:
 6599              	.LBE1434:
 6600              	.LBE1433:
 6601              	.LBB1435:
 6602              	.LBB1436:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6603              		.loc 1 654 0
 6604 015f C6833701 		movb	$12, 311(%rbx)
 6604      00000C
 6605              	.LVL762:
 6606              	.LBE1436:
 6607              	.LBE1435:
 6608              	.LBB1437:
 6609              	.LBB1438:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6610              		.loc 1 568 0
 6611 0166 48C783D8 		movq	$_ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_, 216(%rbx)
 6611      00000000 
 6611      000000
 6612 0171 48899BE0 		movq	%rbx, 224(%rbx)
 6612      000000
 6613              	.LVL763:
 6614              	.LBE1438:
 6615              	.LBE1437:
 6616              	.LBB1439:
 6617              	.LBB1440:
 6618 0178 48C783A0 		movq	$_ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_, 416(%rbx)
 6618      01000000 
 6618      000000
 6619 0183 48899BA8 		movq	%rbx, 424(%rbx)
 6619      010000
 6620              	.LVL764:
 6621              	.LBE1440:
 6622              	.LBE1439:
 6623              	.LBB1441:
 6624              	.LBB1442:
 6625 018a 48C78320 		movq	$_ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_, 544(%rbx)
 6625      02000000 
 6625      000000
 6626 0195 48899B28 		movq	%rbx, 552(%rbx)
 6626      020000
 6627              	.LVL765:
 6628              	.LBE1442:
 6629              	.LBE1441:
 6630              	.LBE1445:
 869:fltk-1.3.4-1/src/Fl_Group.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870:fltk-1.3.4-1/src/Fl_Group.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 871:fltk-1.3.4-1/src/Fl_Group.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 872:fltk-1.3.4-1/src/Fl_Group.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 873:fltk-1.3.4-1/src/Fl_Group.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 874:fltk-1.3.4-1/src/Fl_Group.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 875:fltk-1.3.4-1/src/Fl_Group.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 876:fltk-1.3.4-1/src/Fl_Group.cxx ****  859:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 6631              		.loc 3 876 0
 6632 019c 4883C418 		addq	$24, %rsp
 6633              		.cfi_def_cfa_offset 56
 6634 01a0 5B       		popq	%rbx
 6635              		.cfi_def_cfa_offset 48
 6636              	.LVL766:
 6637 01a1 5D       		popq	%rbp
 6638              		.cfi_def_cfa_offset 40
 6639 01a2 415C     		popq	%r12
 6640              		.cfi_def_cfa_offset 32
 6641 01a4 415D     		popq	%r13
 6642              		.cfi_def_cfa_offset 24
 6643 01a6 415E     		popq	%r14
 6644              		.cfi_def_cfa_offset 16
 6645              	.LVL767:
 6646 01a8 415F     		popq	%r15
 6647              		.cfi_def_cfa_offset 8
 6648              	.LVL768:
 6649 01aa C3       		ret
 6650              		.cfi_endproc
 6651              	.LFE685:
 6653              		.section	.text.unlikely._ZN10Fl_SpinnerC2EiiiiPKc
 6654              	.LCOLDE53:
 6655              		.section	.text._ZN10Fl_SpinnerC2EiiiiPKc
 6656              	.LHOTE53:
 6657              		.globl	_ZN10Fl_SpinnerC1EiiiiPKc
 6658              		.set	_ZN10Fl_SpinnerC1EiiiiPKc,_ZN10Fl_SpinnerC2EiiiiPKc
 6659              		.weak	_ZTS8Fl_Group
 6660              		.section	.rodata._ZTS8Fl_Group,"aG",@progbits,_ZTS8Fl_Group,comdat
 6661              		.align 8
 6664              	_ZTS8Fl_Group:
 6665 0000 38466C5F 		.string	"8Fl_Group"
 6665      47726F75 
 6665      7000
 6666              		.weak	_ZTI8Fl_Group
 6667              		.section	.rodata._ZTI8Fl_Group,"aG",@progbits,_ZTI8Fl_Group,comdat
 6668              		.align 8
 6671              	_ZTI8Fl_Group:
 6672 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 6672      00000000 
 6673 0008 00000000 		.quad	_ZTS8Fl_Group
 6673      00000000 
 6674 0010 00000000 		.quad	_ZTI9Fl_Widget
 6674      00000000 
 6675              		.weak	_ZTSN15Fl_Input_Choice15InputMenuButtonE
 6676              		.section	.rodata._ZTSN15Fl_Input_Choice15InputMenuButtonE,"aG",@progbits,_ZTSN15Fl_Input_Choice15I
 6677              		.align 32
 6680              	_ZTSN15Fl_Input_Choice15InputMenuButtonE:
 6681 0000 4E313546 		.string	"N15Fl_Input_Choice15InputMenuButtonE"
 6681      6C5F496E 
 6681      7075745F 
 6681      43686F69 
 6681      63653135 
 6682              		.weak	_ZTIN15Fl_Input_Choice15InputMenuButtonE
 6683              		.section	.rodata._ZTIN15Fl_Input_Choice15InputMenuButtonE,"aG",@progbits,_ZTIN15Fl_Input_Choice15I
 6684              		.align 8
 6687              	_ZTIN15Fl_Input_Choice15InputMenuButtonE:
 6688 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 6688      00000000 
 6689 0008 00000000 		.quad	_ZTSN15Fl_Input_Choice15InputMenuButtonE
 6689      00000000 
 6690 0010 00000000 		.quad	_ZTI14Fl_Menu_Button
 6690      00000000 
 6691              		.weak	_ZTS15Fl_Input_Choice
 6692              		.section	.rodata._ZTS15Fl_Input_Choice,"aG",@progbits,_ZTS15Fl_Input_Choice,comdat
 6693              		.align 16
 6696              	_ZTS15Fl_Input_Choice:
 6697 0000 3135466C 		.string	"15Fl_Input_Choice"
 6697      5F496E70 
 6697      75745F43 
 6697      686F6963 
 6697      6500
 6698              		.weak	_ZTI15Fl_Input_Choice
 6699              		.section	.rodata._ZTI15Fl_Input_Choice,"aG",@progbits,_ZTI15Fl_Input_Choice,comdat
 6700              		.align 8
 6703              	_ZTI15Fl_Input_Choice:
 6704 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 6704      00000000 
 6705 0008 00000000 		.quad	_ZTS15Fl_Input_Choice
 6705      00000000 
 6706 0010 00000000 		.quad	_ZTI8Fl_Group
 6706      00000000 
 6707              		.weak	_ZTS10Fl_Spinner
 6708              		.section	.rodata._ZTS10Fl_Spinner,"aG",@progbits,_ZTS10Fl_Spinner,comdat
 6709              		.align 8
 6712              	_ZTS10Fl_Spinner:
 6713 0000 3130466C 		.string	"10Fl_Spinner"
 6713      5F537069 
 6713      6E6E6572 
 6713      00
 6714              		.weak	_ZTI10Fl_Spinner
 6715              		.section	.rodata._ZTI10Fl_Spinner,"aG",@progbits,_ZTI10Fl_Spinner,comdat
 6716              		.align 8
 6719              	_ZTI10Fl_Spinner:
 6720 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 6720      00000000 
 6721 0008 00000000 		.quad	_ZTS10Fl_Spinner
 6721      00000000 
 6722 0010 00000000 		.quad	_ZTI8Fl_Group
 6722      00000000 
 6723              		.weak	_ZTVN15Fl_Input_Choice15InputMenuButtonE
 6724              		.section	.rodata._ZTVN15Fl_Input_Choice15InputMenuButtonE,"aG",@progbits,_ZTVN15Fl_Input_Choice15I
 6725              		.align 8
 6728              	_ZTVN15Fl_Input_Choice15InputMenuButtonE:
 6729 0000 00000000 		.quad	0
 6729      00000000 
 6730 0008 00000000 		.quad	_ZTIN15Fl_Input_Choice15InputMenuButtonE
 6730      00000000 
 6731 0010 00000000 		.quad	_ZN15Fl_Input_Choice15InputMenuButtonD1Ev
 6731      00000000 
 6732 0018 00000000 		.quad	_ZN15Fl_Input_Choice15InputMenuButtonD0Ev
 6732      00000000 
 6733 0020 00000000 		.quad	_ZN15Fl_Input_Choice15InputMenuButton4drawEv
 6733      00000000 
 6734 0028 00000000 		.quad	_ZN14Fl_Menu_Button6handleEi
 6734      00000000 
 6735 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 6735      00000000 
 6736 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 6736      00000000 
 6737 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 6737      00000000 
 6738 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 6738      00000000 
 6739 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 6739      00000000 
 6740 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 6740      00000000 
 6741              		.weak	_ZTV15Fl_Input_Choice
 6742              		.section	.rodata._ZTV15Fl_Input_Choice,"aG",@progbits,_ZTV15Fl_Input_Choice,comdat
 6743              		.align 8
 6746              	_ZTV15Fl_Input_Choice:
 6747 0000 00000000 		.quad	0
 6747      00000000 
 6748 0008 00000000 		.quad	_ZTI15Fl_Input_Choice
 6748      00000000 
 6749 0010 00000000 		.quad	_ZN15Fl_Input_ChoiceD1Ev
 6749      00000000 
 6750 0018 00000000 		.quad	_ZN15Fl_Input_ChoiceD0Ev
 6750      00000000 
 6751 0020 00000000 		.quad	_ZN8Fl_Group4drawEv
 6751      00000000 
 6752 0028 00000000 		.quad	_ZN8Fl_Group6handleEi
 6752      00000000 
 6753 0030 00000000 		.quad	_ZN15Fl_Input_Choice6resizeEiiii
 6753      00000000 
 6754 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 6754      00000000 
 6755 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 6755      00000000 
 6756 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 6756      00000000 
 6757 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 6757      00000000 
 6758 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 6758      00000000 
 6759              		.weak	_ZTV10Fl_Spinner
 6760              		.section	.rodata._ZTV10Fl_Spinner,"aG",@progbits,_ZTV10Fl_Spinner,comdat
 6761              		.align 8
 6764              	_ZTV10Fl_Spinner:
 6765 0000 00000000 		.quad	0
 6765      00000000 
 6766 0008 00000000 		.quad	_ZTI10Fl_Spinner
 6766      00000000 
 6767 0010 00000000 		.quad	_ZN10Fl_SpinnerD1Ev
 6767      00000000 
 6768 0018 00000000 		.quad	_ZN10Fl_SpinnerD0Ev
 6768      00000000 
 6769 0020 00000000 		.quad	_ZN8Fl_Group4drawEv
 6769      00000000 
 6770 0028 00000000 		.quad	_ZN10Fl_Spinner6handleEi
 6770      00000000 
 6771 0030 00000000 		.quad	_ZN10Fl_Spinner6resizeEiiii
 6771      00000000 
 6772 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 6772      00000000 
 6773 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 6773      00000000 
 6774 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 6774      00000000 
 6775 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 6775      00000000 
 6776 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 6776      00000000 
 6777              		.weak	_ZTV8Fl_Group
 6778              		.section	.rodata._ZTV8Fl_Group,"aG",@progbits,_ZTV8Fl_Group,comdat
 6779              		.align 8
 6782              	_ZTV8Fl_Group:
 6783 0000 00000000 		.quad	0
 6783      00000000 
 6784 0008 00000000 		.quad	_ZTI8Fl_Group
 6784      00000000 
 6785 0010 00000000 		.quad	_ZN8Fl_GroupD1Ev
 6785      00000000 
 6786 0018 00000000 		.quad	_ZN8Fl_GroupD0Ev
 6786      00000000 
 6787 0020 00000000 		.quad	_ZN8Fl_Group4drawEv
 6787      00000000 
 6788 0028 00000000 		.quad	_ZN8Fl_Group6handleEi
 6788      00000000 
 6789 0030 00000000 		.quad	_ZN8Fl_Group6resizeEiiii
 6789      00000000 
 6790 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 6790      00000000 
 6791 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 6791      00000000 
 6792 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 6792      00000000 
 6793 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 6793      00000000 
 6794 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 6794      00000000 
 6795              		.globl	_ZN8Fl_Group8current_E
 6796              		.section	.bss._ZN8Fl_Group8current_E,"aw",@nobits
 6797              		.align 8
 6800              	_ZN8Fl_Group8current_E:
 6801 0000 00000000 		.zero	8
 6801      00000000 
 6802              		.section	.rodata.cst8,"aM",@progbits,8
 6803              		.align 8
 6804              	.LC49:
 6805 0000 00000000 		.long	0
 6806 0004 0000F03F 		.long	1072693248
 6807              		.align 8
 6808              	.LC50:
 6809 0008 00000000 		.long	0
 6810 000c 00005940 		.long	1079574528
 6811              		.text
 6812              	.Letext0:
 6813              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 6814              	.Letext_cold0:
 6815              		.file 14 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 6816              		.file 15 "/usr/include/x86_64-linux-gnu/bits/types.h"
 6817              		.file 16 "/usr/include/libio.h"
 6818              		.file 17 "fltk-1.3.4-1/FL/fl_types.h"
 6819              		.file 18 "fltk-1.3.4-1/FL/Enumerations.H"
 6820              		.file 19 "fltk-1.3.4-1/FL/Fl_Image.H"
 6821              		.file 20 "fltk-1.3.4-1/FL/Fl_Device.H"
 6822              		.file 21 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
 6823              		.file 22 "fltk-1.3.4-1/FL/Fl_Repeat_Button.H"
 6824              		.file 23 "fltk-1.3.4-1/FL/Fl_Input_.H"
 6825              		.file 24 "/usr/include/stdio.h"
 6826              		.file 25 "/usr/include/string.h"
 6827              		.file 26 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Group.cxx
     /tmp/ccaWz3fx.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccaWz3fx.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccaWz3fx.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccaWz3fx.s:89     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccaWz3fx.s:111    .text._ZL6navkeyv:0000000000000000 _ZL6navkeyv
     /tmp/ccaWz3fx.s:176    .text._ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv:0000000000000000 _ZN15Fl_Input_Choice6inp_cbEP9Fl_WidgetPv
     /tmp/ccaWz3fx.s:295    .text._ZN15Fl_Input_Choice15InputMenuButton4drawEv:0000000000000000 _ZN15Fl_Input_Choice15InputMenuButton4drawEv
     /tmp/ccaWz3fx.s:453    .text._ZN15Fl_Input_Choice15InputMenuButtonD2Ev:0000000000000000 _ZN15Fl_Input_Choice15InputMenuButtonD2Ev
     /tmp/ccaWz3fx.s:453    .text._ZN15Fl_Input_Choice15InputMenuButtonD2Ev:0000000000000000 _ZN15Fl_Input_Choice15InputMenuButtonD1Ev
     /tmp/ccaWz3fx.s:485    .text._ZN15Fl_Input_Choice15InputMenuButtonD0Ev:0000000000000000 _ZN15Fl_Input_Choice15InputMenuButtonD0Ev
     /tmp/ccaWz3fx.s:526    .text._ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv:0000000000000000 _ZN15Fl_Input_Choice7menu_cbEP9Fl_WidgetPv
     /tmp/ccaWz3fx.s:714    .text._ZL4sendP9Fl_Widgeti.constprop.35:0000000000000000 _ZL4sendP9Fl_Widgeti.constprop.35
     /tmp/ccaWz3fx.s:961    .text._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40:0000000000000000 _ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget.part.34.constprop.40
     /tmp/ccaWz3fx.s:1246   .text._ZN10Fl_Spinner6updateEv:0000000000000000 _ZN10Fl_Spinner6updateEv
     /tmp/ccaWz3fx.s:1457   .text._ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_:0000000000000000 _ZN10Fl_Spinner5sb_cbEP9Fl_WidgetPS_
     /tmp/ccaWz3fx.s:1612   .text._ZNK8Fl_Group5arrayEv:0000000000000000 _ZNK8Fl_Group5arrayEv
     /tmp/ccaWz3fx.s:1646   .text._ZNK8Fl_Group4findEPK9Fl_Widget:0000000000000000 _ZNK8Fl_Group4findEPK9Fl_Widget
     /tmp/ccaWz3fx.s:1727   .text._ZN8Fl_Group5beginEv:0000000000000000 _ZN8Fl_Group5beginEv
     /tmp/ccaWz3fx.s:6800   .bss._ZN8Fl_Group8current_E:0000000000000000 _ZN8Fl_Group8current_E
     /tmp/ccaWz3fx.s:1748   .text._ZN8Fl_Group3endEv:0000000000000000 _ZN8Fl_Group3endEv
     /tmp/ccaWz3fx.s:1773   .text._ZN8Fl_Group7currentEv:0000000000000000 _ZN8Fl_Group7currentEv
     /tmp/ccaWz3fx.s:1796   .text._ZN8Fl_Group7currentEPS_:0000000000000000 _ZN8Fl_Group7currentEPS_
     /tmp/ccaWz3fx.s:1820   .text._ZN8Fl_Group10navigationEi:0000000000000000 _ZN8Fl_Group10navigationEi
     /tmp/ccaWz3fx.s:2025   .text._ZN8Fl_Group6handleEi:0000000000000000 _ZN8Fl_Group6handleEi
     /tmp/ccaWz3fx.s:2945   .text._ZN10Fl_Spinner6handleEi:0000000000000000 _ZN10Fl_Spinner6handleEi
     /tmp/ccaWz3fx.s:3064   .text._ZN8Fl_GroupC2EiiiiPKc:0000000000000000 _ZN8Fl_GroupC2EiiiiPKc
     /tmp/ccaWz3fx.s:6782   .rodata._ZTV8Fl_Group:0000000000000000 _ZTV8Fl_Group
     /tmp/ccaWz3fx.s:3064   .text._ZN8Fl_GroupC2EiiiiPKc:0000000000000000 _ZN8Fl_GroupC1EiiiiPKc
     /tmp/ccaWz3fx.s:3129   .text._ZN8Fl_Group6removeEi:0000000000000000 _ZN8Fl_Group6removeEi
     /tmp/ccaWz3fx.s:3301   .text._ZN8Fl_Group5clearEv:0000000000000000 _ZN8Fl_Group5clearEv
     /tmp/ccaWz3fx.s:3587   .text._ZN8Fl_GroupD2Ev:0000000000000000 _ZN8Fl_GroupD2Ev
     /tmp/ccaWz3fx.s:3587   .text._ZN8Fl_GroupD2Ev:0000000000000000 _ZN8Fl_GroupD1Ev
     /tmp/ccaWz3fx.s:3632   .text._ZN8Fl_GroupD0Ev:0000000000000000 _ZN8Fl_GroupD0Ev
     /tmp/ccaWz3fx.s:3677   .text._ZN10Fl_SpinnerD2Ev:0000000000000000 _ZN10Fl_SpinnerD2Ev
     /tmp/ccaWz3fx.s:6764   .rodata._ZTV10Fl_Spinner:0000000000000000 _ZTV10Fl_Spinner
     /tmp/ccaWz3fx.s:3677   .text._ZN10Fl_SpinnerD2Ev:0000000000000000 _ZN10Fl_SpinnerD1Ev
     /tmp/ccaWz3fx.s:3770   .text._ZN15Fl_Input_ChoiceD2Ev:0000000000000000 _ZN15Fl_Input_ChoiceD2Ev
     /tmp/ccaWz3fx.s:3770   .text._ZN15Fl_Input_ChoiceD2Ev:0000000000000000 _ZN15Fl_Input_ChoiceD1Ev
     /tmp/ccaWz3fx.s:3824   .text._ZN15Fl_Input_ChoiceD0Ev:0000000000000000 _ZN15Fl_Input_ChoiceD0Ev
     /tmp/ccaWz3fx.s:3874   .text._ZN10Fl_SpinnerD0Ev:0000000000000000 _ZN10Fl_SpinnerD0Ev
     /tmp/ccaWz3fx.s:3961   .text._ZN8Fl_Group6insertER9Fl_Widgeti:0000000000000000 _ZN8Fl_Group6insertER9Fl_Widgeti
     /tmp/ccaWz3fx.s:4270   .text._ZN8Fl_Group3addER9Fl_Widget:0000000000000000 _ZN8Fl_Group3addER9Fl_Widget
     /tmp/ccaWz3fx.s:4295   .text._ZN8Fl_Group6removeER9Fl_Widget:0000000000000000 _ZN8Fl_Group6removeER9Fl_Widget
     /tmp/ccaWz3fx.s:4394   .text._ZN8Fl_Group10init_sizesEv:0000000000000000 _ZN8Fl_Group10init_sizesEv
     /tmp/ccaWz3fx.s:4436   .text._ZN8Fl_Group5sizesEv:0000000000000000 _ZN8Fl_Group5sizesEv
     /tmp/ccaWz3fx.s:4671   .text._ZN8Fl_Group6resizeEiiii:0000000000000000 _ZN8Fl_Group6resizeEiiii
     /tmp/ccaWz3fx.s:5159   .text._ZN10Fl_Spinner6resizeEiiii:0000000000000000 _ZN10Fl_Spinner6resizeEiiii
     /tmp/ccaWz3fx.s:5279   .text._ZN15Fl_Input_Choice6resizeEiiii:0000000000000000 _ZN15Fl_Input_Choice6resizeEiiii
     /tmp/ccaWz3fx.s:5517   .text._ZNK8Fl_Group12update_childER9Fl_Widget:0000000000000000 _ZNK8Fl_Group12update_childER9Fl_Widget
     /tmp/ccaWz3fx.s:5610   .text._ZNK8Fl_Group10draw_childER9Fl_Widget:0000000000000000 _ZNK8Fl_Group10draw_childER9Fl_Widget
     /tmp/ccaWz3fx.s:5707   .text._ZN8Fl_Group13draw_childrenEv:0000000000000000 _ZN8Fl_Group13draw_childrenEv
     /tmp/ccaWz3fx.s:5956   .text._ZN8Fl_Group4drawEv:0000000000000000 _ZN8Fl_Group4drawEv
     /tmp/ccaWz3fx.s:6004   .text._ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget:0000000000000000 _ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
     /tmp/ccaWz3fx.s:6034   .text._ZN15Fl_Input_ChoiceC2EiiiiPKc:0000000000000000 _ZN15Fl_Input_ChoiceC2EiiiiPKc
     /tmp/ccaWz3fx.s:6746   .rodata._ZTV15Fl_Input_Choice:0000000000000000 _ZTV15Fl_Input_Choice
     /tmp/ccaWz3fx.s:6728   .rodata._ZTVN15Fl_Input_Choice15InputMenuButtonE:0000000000000000 _ZTVN15Fl_Input_Choice15InputMenuButtonE
     /tmp/ccaWz3fx.s:6034   .text._ZN15Fl_Input_ChoiceC2EiiiiPKc:0000000000000000 _ZN15Fl_Input_ChoiceC1EiiiiPKc
     /tmp/ccaWz3fx.s:6412   .text._ZN10Fl_SpinnerC2EiiiiPKc:0000000000000000 _ZN10Fl_SpinnerC2EiiiiPKc
     /tmp/ccaWz3fx.s:6412   .text._ZN10Fl_SpinnerC2EiiiiPKc:0000000000000000 _ZN10Fl_SpinnerC1EiiiiPKc
     /tmp/ccaWz3fx.s:6664   .rodata._ZTS8Fl_Group:0000000000000000 _ZTS8Fl_Group
     /tmp/ccaWz3fx.s:6671   .rodata._ZTI8Fl_Group:0000000000000000 _ZTI8Fl_Group
     /tmp/ccaWz3fx.s:6680   .rodata._ZTSN15Fl_Input_Choice15InputMenuButtonE:0000000000000000 _ZTSN15Fl_Input_Choice15InputMenuButtonE
     /tmp/ccaWz3fx.s:6687   .rodata._ZTIN15Fl_Input_Choice15InputMenuButtonE:0000000000000000 _ZTIN15Fl_Input_Choice15InputMenuButtonE
     /tmp/ccaWz3fx.s:6696   .rodata._ZTS15Fl_Input_Choice:0000000000000000 _ZTS15Fl_Input_Choice
     /tmp/ccaWz3fx.s:6703   .rodata._ZTI15Fl_Input_Choice:0000000000000000 _ZTI15Fl_Input_Choice
     /tmp/ccaWz3fx.s:6712   .rodata._ZTS10Fl_Spinner:0000000000000000 _ZTS10Fl_Spinner
     /tmp/ccaWz3fx.s:6719   .rodata._ZTI10Fl_Spinner:0000000000000000 _ZTI10Fl_Spinner
     /tmp/ccaWz3fx.s:6804   .rodata.cst8:0000000000000000 .LC49
     /tmp/ccaWz3fx.s:6808   .rodata.cst8:0000000000000008 .LC50
                           .group:0000000000000000 _ZN15Fl_Input_Choice15InputMenuButtonD5Ev
                           .group:0000000000000000 _ZN10Fl_SpinnerD5Ev
                           .group:0000000000000000 _ZN15Fl_Input_ChoiceD5Ev
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
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020

UNDEFINED SYMBOLS
_ZN2Fl7e_stateE
_ZN2Fl8e_keysymE
_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
_ZN9Fl_Widget16default_callbackEPS_Pv
_ZN17Fl_Widget_TrackerD1Ev
_ZN9Fl_Widget11do_callbackEPS_Pv
__stack_chk_fail
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
_ZNK9Fl_Widget8active_rEv
fl_graphics_driver
_ZN2Fl6focus_E
_Z11fl_inactivej
_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
_ZTV14Fl_Menu_Button
_ZN8Fl_Menu_D2Ev
_ZdlPv
strcmp
_ZN9Fl_Input_5valueEPKc
_ZN2Fl3e_xE
_ZN2Fl3e_yE
_ZN2Fl11belowmouse_E
_ZNK9Fl_Widget8containsEPKS_
_ZN2Fl10belowmouseEP9Fl_Widget
_ZNK9Fl_Widget10draw_labelEiiiij
__sprintf_chk
strtod
_ZN9Fl_Widget10take_focusEv
_ZN2Fl12event_insideEPK9Fl_Widget
_ZN2Fl7pushed_E
fl_oldfocus
_ZN2Fl8e_numberE
_ZN2Fl5focusEP9Fl_Widget
_ZN2Fl6pushedEP9Fl_Widget
_ZN9Fl_WidgetC2EiiiiPKc
_ZdaPv
free
_ZN9Fl_WidgetD2Ev
_ZTV9Fl_Button
_ZTV8Fl_Input
_ZN9Fl_Input_D2Ev
realloc
malloc
_Znam
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Input_6resizeEiiii
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dxE10Fl_Boxtype
_ZNK9Fl_Widget8draw_boxEv
_ZNK9Fl_Widget10draw_labelEv
_Znwm
_ZN8Fl_InputC1EiiiiPKc
_ZN14Fl_Menu_ButtonC2EiiiiPKc
_ZN16Fl_Repeat_ButtonC1EiiiiPKc
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Widget
_ZTI14Fl_Menu_Button
_ZN14Fl_Menu_Button6handleEi
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
