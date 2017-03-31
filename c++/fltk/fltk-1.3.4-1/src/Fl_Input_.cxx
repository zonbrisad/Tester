   1              		.file	"Fl_Input_.cxx"
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
  80              		.section	.text.unlikely._ZL17strict_word_startPKcii,"ax",@progbits
  81              	.LCOLDB3:
  82              		.section	.text._ZL17strict_word_startPKcii,"ax",@progbits
  83              	.LHOTB3:
  84              		.p2align 4,,15
  86              	_ZL17strict_word_startPKcii:
  87              	.LFB531:
  88              		.file 2 "fltk-1.3.4-1/src/Fl_Input_.cxx"
   1:fltk-1.3.4-1/src/Fl_Input_.cxx ****    1              		.file	"Fl_Input_.cxx"
   2:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Input_.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Input_.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Input_.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Input_.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Input_.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Input_.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Input_.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Input_.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Input_.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Input_.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Input_.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Input_.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Input_.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Input_.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Input_.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Input_.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Input_.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Input_.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Input_.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Input_.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Input_.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Input_.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Input_.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Input_.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Input_.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Input_.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Input_.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Input_.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Input_.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Input_.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Input_.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Input_.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Input_.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Input_.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Input_.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Input_.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Input_.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Input_.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Input_.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Input_.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Input_.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Input_.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Input_.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Input_.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Input_.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Input_.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Input_.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Input_.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Input_.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Input_.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Input_.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Input_.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Input_.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Input_.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Input_.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Input_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Input_.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Input_.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Input_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Input_.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Input_.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Input_.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Input_.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Input_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Input_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Input_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Input_.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Input_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Input_.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Input_.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Input_.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Input_.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Input_.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Input_.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Input_.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Input_.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Input_.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Input_.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Input_.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Input_.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Input_.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Input_.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Input_.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Input_.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Input_.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Input_.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Input_.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Input_.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Input_.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Input_.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Input_.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Input_.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Input_.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Input_.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Input_.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Input_.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Input_.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Input_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Input_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Input_.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Input_.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Input_.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Input_.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Input_.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Input_.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Input_.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Input_.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Input_.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Input_.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Input_.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Input_.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Input_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Input_.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Input_.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Input_.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Input_.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Input_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Input_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Input_.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Input_.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Input_.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Input_.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Input_.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Input_.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Input_.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Input_.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Input_.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Input_.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Input_.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Input_.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Input_.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Input_.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Input_.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Input_.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Input_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Input_.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Input_.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Input_.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Input_.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Input_.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Input_.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Input_.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Input_.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Input_.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Input_.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Input_.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Input_.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Input_.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Input_.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Input_.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Input_.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Input_.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Input_.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Input_.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Input_.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Input_.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Input_.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Input_.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Input_.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Input_.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Input_.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Input_.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Input_.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Input_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Input_.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Input_.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Input_.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Input_.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Input_.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Input_.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Input_.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Input_.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Input_.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Input_.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Input_.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Input_.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Input_.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Input_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Input_.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Input_.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Input_.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Input_.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Input_.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Input_.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Input_.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Input_.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Input_.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Input_.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Input_.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Input_.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Input_.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Input_.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Input_.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Input_.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Input_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Input_.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Input_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Input_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Input_.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Input_.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Input_.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Input_.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Input_.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Input_.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Input_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Input_.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Input_.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Input_.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Input_.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Input_.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Input_.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Input_.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Input_.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Input_.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Input_.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Input_.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Input_.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Input_.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Input_.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Input_.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Input_.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Input_.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Input_.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Input_.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Input_.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Input_.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Input_.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Input_.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Input_.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Input_.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Input_.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Input_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Input_.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Input_.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Input_.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Input_.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Input_.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Input_.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Input_.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Input_.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Input_.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Input_.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Input_.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Input_.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Input_.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Input_.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Input_.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Input_.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Input_.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Input_.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Input_.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Input_.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Input_.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Input_.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Input_.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Input_.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Input_.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Input_.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Input_.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Input_.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Input_.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Input_.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Input_.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Input_.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Input_.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Input_.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Input_.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Input_.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Input_.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Input_.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Input_.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Input_.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Input_.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Input_.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Input_.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Input_.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Input_.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Input_.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Input_.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Input_.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Input_.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Input_.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Input_.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Input_.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Input_.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Input_.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Input_.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Input_.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Input_.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Input_.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Input_.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Input_.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Input_.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Input_.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Input_.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Input_.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Input_.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Input_.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Input_.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Input_.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Input_.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Input_.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Input_.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Input_.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Input_.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Input_.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Input_.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Input_.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Input_.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Input_.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Input_.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Input_.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Input_.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Input_.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Input_.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Input_.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Input_.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Input_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Input_.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Input_.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Input_.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Input_.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Input_.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Input_.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Input_.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Input_.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Input_.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Input_.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Input_.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Input_.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Input_.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Input_.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Input_.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Input_.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Input_.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Input_.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Input_.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Input_.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Input_.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Input_.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Input_.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Input_.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Input_.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Input_.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Input_.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Input_.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Input_.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Input_.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Input_.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Input_.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Input_.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Input_.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Input_.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Input_.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Input_.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Input_.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Input_.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Input_.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Input_.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Input_.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Input_.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Input_.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Input_.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Input_.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Input_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Input_.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Input_.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Input_.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Input_.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Input_.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Input_.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Input_.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Input_.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Input_.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Input_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Input_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Input_.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Input_.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Input_.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Input_.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Input_.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Input_.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Input_.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Input_.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Input_.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Input_.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Input_.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Input_.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Input_.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Input_.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Input_.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Input_.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Input_.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Input_.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Input_.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Input_.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Input_.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Input_.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Input_.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Input_.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Input_.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Input_.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Input_.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Input_.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Input_.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Input_.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Input_.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Input_.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Input_.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Input_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Input_.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Input_.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Input_.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Input_.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Input_.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Input_.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Input_.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Input_.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Input_.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Input_.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Input_.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Input_.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Input_.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Input_.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Input_.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Input_.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Input_.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Input_.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Input_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Input_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Input_.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Input_.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Input_.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Input_.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Input_.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Input_.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Input_.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Input_.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Input_.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Input_.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Input_.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Input_.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Input_.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Input_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Input_.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Input_.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Input_.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Input_.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Input_.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Input_.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Input_.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Input_.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Input_.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Input_.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Input_.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Input_.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Input_.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Input_.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Input_.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Input_.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Input_.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Input_.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Input_.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Input_.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Input_.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Input_.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Input_.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Input_.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Input_.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Input_.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Input_.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Input_.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Input_.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Input_.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Input_.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Input_.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Input_.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Input_.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Input_.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Input_.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Input_.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Input_.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Input_.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_Input_.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Input_.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Input_.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Input_.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Input_.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Input_.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Input_.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
  89              		.loc 2 524 0
  90              		.cfi_startproc
  91              	.LVL3:
 525:fltk-1.3.4-1/src/Fl_Input_.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
  92              		.loc 2 525 0
  93 0000 83FA05   		cmpl	$5, %edx
  94 0003 745B     		je	.L7
 524:fltk-1.3.4-1/src/Fl_Input_.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
  95              		.loc 2 524 0
  96 0005 55       		pushq	%rbp
  97              		.cfi_def_cfa_offset 16
  98              		.cfi_offset 6, -16
  99 0006 53       		pushq	%rbx
 100              		.cfi_def_cfa_offset 24
 101              		.cfi_offset 3, -24
 102 0007 89F3     		movl	%esi, %ebx
 103 0009 4883EC08 		subq	$8, %rsp
 104              		.cfi_def_cfa_offset 32
 526:fltk-1.3.4-1/src/Fl_Input_.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105              		.loc 2 526 0
 106 000d 85F6     		testl	%esi, %esi
 107 000f 7E33     		jle	.L9
 108 0011 4889FD   		movq	%rdi, %rbp
 109 0014 E8000000 		call	__ctype_b_loc
 109      00
 110              	.LVL4:
 111 0019 488B08   		movq	(%rax), %rcx
 112 001c 4863C3   		movslq	%ebx, %rax
 113 001f 488D4405 		leaq	-1(%rbp,%rax), %rax
 113      FF
 114 0024 EB13     		jmp	.L6
 115 0026 662E0F1F 		.p2align 4,,10
 115      84000000 
 115      0000
 116              		.p2align 3
 117              	.L14:
 118              	.LVL5:
 119 0030 4883E801 		subq	$1, %rax
 120 0034 83EB01   		subl	$1, %ebx
 121              	.LVL6:
 122 0037 7417     		je	.L13
 123              	.L6:
 124              	.LBB941:
 125              	.LBB942:
 126              		.file 3 "/usr/include/ctype.h"
   1:/usr/include/ctype.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/ctype.h ****    This file is part of the GNU C Library.
   3:/usr/include/ctype.h **** 
   4:/usr/include/ctype.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/ctype.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/ctype.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/ctype.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/ctype.h **** 
   9:/usr/include/ctype.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/ctype.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/ctype.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/ctype.h ****    Lesser General Public License for more details.
  13:/usr/include/ctype.h **** 
  14:/usr/include/ctype.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/ctype.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/ctype.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/ctype.h **** 
  18:/usr/include/ctype.h **** /*
  19:/usr/include/ctype.h ****  *	ISO C99 Standard 7.4: Character handling	<ctype.h>
  20:/usr/include/ctype.h ****  */
  21:/usr/include/ctype.h **** 
  22:/usr/include/ctype.h **** #ifndef	_CTYPE_H
  23:/usr/include/ctype.h **** #define	_CTYPE_H	1
  24:/usr/include/ctype.h **** 
  25:/usr/include/ctype.h **** #include <features.h>
  26:/usr/include/ctype.h **** #include <bits/types.h>
  27:/usr/include/ctype.h **** 
  28:/usr/include/ctype.h **** __BEGIN_DECLS
  29:/usr/include/ctype.h **** 
  30:/usr/include/ctype.h **** #ifndef _ISbit
  31:/usr/include/ctype.h **** /* These are all the characteristics of characters.
  32:/usr/include/ctype.h ****    If there get to be more than 16 distinct characteristics,
  33:/usr/include/ctype.h ****    many things must be changed that use `unsigned short int's.
  34:/usr/include/ctype.h **** 
  35:/usr/include/ctype.h ****    The characteristics are stored always in network byte order (big
  36:/usr/include/ctype.h ****    endian).  We define the bit value interpretations here dependent on the
  37:/usr/include/ctype.h ****    machine's byte order.  */
  38:/usr/include/ctype.h **** 
  39:/usr/include/ctype.h **** # include <endian.h>
  40:/usr/include/ctype.h **** # if __BYTE_ORDER == __BIG_ENDIAN
  41:/usr/include/ctype.h **** #  define _ISbit(bit)	(1 << (bit))
  42:/usr/include/ctype.h **** # else /* __BYTE_ORDER == __LITTLE_ENDIAN */
  43:/usr/include/ctype.h **** #  define _ISbit(bit)	((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
  44:/usr/include/ctype.h **** # endif
  45:/usr/include/ctype.h **** 
  46:/usr/include/ctype.h **** enum
  47:/usr/include/ctype.h **** {
  48:/usr/include/ctype.h ****   _ISupper = _ISbit (0),	/* UPPERCASE.  */
  49:/usr/include/ctype.h ****   _ISlower = _ISbit (1),	/* lowercase.  */
  50:/usr/include/ctype.h ****   _ISalpha = _ISbit (2),	/* Alphabetic.  */
  51:/usr/include/ctype.h ****   _ISdigit = _ISbit (3),	/* Numeric.  */
  52:/usr/include/ctype.h ****   _ISxdigit = _ISbit (4),	/* Hexadecimal numeric.  */
  53:/usr/include/ctype.h ****   _ISspace = _ISbit (5),	/* Whitespace.  */
  54:/usr/include/ctype.h ****   _ISprint = _ISbit (6),	/* Printing.  */
  55:/usr/include/ctype.h ****   _ISgraph = _ISbit (7),	/* Graphical.  */
  56:/usr/include/ctype.h ****   _ISblank = _ISbit (8),	/* Blank (usually SPC and TAB).  */
  57:/usr/include/ctype.h ****   _IScntrl = _ISbit (9),	/* Control character.  */
  58:/usr/include/ctype.h ****   _ISpunct = _ISbit (10),	/* Punctuation.  */
  59:/usr/include/ctype.h ****   _ISalnum = _ISbit (11)	/* Alphanumeric.  */
  60:/usr/include/ctype.h **** };
  61:/usr/include/ctype.h **** #endif /* ! _ISbit  */
  62:/usr/include/ctype.h **** 
  63:/usr/include/ctype.h **** /* These are defined in ctype-info.c.
  64:/usr/include/ctype.h ****    The declarations here must match those in localeinfo.h.
  65:/usr/include/ctype.h **** 
  66:/usr/include/ctype.h ****    In the thread-specific locale model (see `uselocale' in <locale.h>)
  67:/usr/include/ctype.h ****    we cannot use global variables for these as was done in the past.
  68:/usr/include/ctype.h ****    Instead, the following accessor functions return the address of
  69:/usr/include/ctype.h ****    each variable, which is local to the current thread if multithreaded.
  70:/usr/include/ctype.h **** 
  71:/usr/include/ctype.h ****    These point into arrays of 384, so they can be indexed by any `unsigned
  72:/usr/include/ctype.h ****    char' value [0,255]; by EOF (-1); or by any `signed char' value
  73:/usr/include/ctype.h ****    [-128,-1).  ISO C requires that the ctype functions work for `unsigned
  74:/usr/include/ctype.h ****    char' values and for EOF; we also support negative `signed char' values
  75:/usr/include/ctype.h ****    for broken old programs.  The case conversion arrays are of `int's
  76:/usr/include/ctype.h ****    rather than `unsigned char's because tolower (EOF) must be EOF, which
  77:/usr/include/ctype.h ****    doesn't fit into an `unsigned char'.  But today more important is that
  78:/usr/include/ctype.h ****    the arrays are also used for multi-byte character sets.  */
  79:/usr/include/ctype.h **** extern const unsigned short int **__ctype_b_loc (void)
  80:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  81:/usr/include/ctype.h **** extern const __int32_t **__ctype_tolower_loc (void)
  82:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  83:/usr/include/ctype.h **** extern const __int32_t **__ctype_toupper_loc (void)
  84:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  85:/usr/include/ctype.h **** 
  86:/usr/include/ctype.h **** 
  87:/usr/include/ctype.h **** #ifndef __cplusplus
  88:/usr/include/ctype.h **** # define __isctype(c, type) \
  89:/usr/include/ctype.h ****   ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
  90:/usr/include/ctype.h **** #elif defined __USE_EXTERN_INLINES
  91:/usr/include/ctype.h **** # define __isctype_f(type) \
  92:/usr/include/ctype.h ****   __extern_inline int							      \
  93:/usr/include/ctype.h ****   is##type (int __c) __THROW						      \
  94:/usr/include/ctype.h ****   {									      \
  95:/usr/include/ctype.h ****     return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _IS##type; \
  96:/usr/include/ctype.h ****   }
  97:/usr/include/ctype.h **** #endif
  98:/usr/include/ctype.h **** 
  99:/usr/include/ctype.h **** #define	__isascii(c)	(((c) & ~0x7f) == 0)	/* If C is a 7 bit value.  */
 100:/usr/include/ctype.h **** #define	__toascii(c)	((c) & 0x7f)		/* Mask off high bits.  */
 101:/usr/include/ctype.h **** 
 102:/usr/include/ctype.h **** #define	__exctype(name)	extern int name (int) __THROW
 103:/usr/include/ctype.h **** 
 104:/usr/include/ctype.h **** __BEGIN_NAMESPACE_STD
 105:/usr/include/ctype.h **** 
 106:/usr/include/ctype.h **** /* The following names are all functions:
 107:/usr/include/ctype.h ****      int isCHARACTERISTIC(int c);
 108:/usr/include/ctype.h ****    which return nonzero iff C has CHARACTERISTIC.
 109:/usr/include/ctype.h ****    For the meaning of the characteristic names, see the `enum' above.  */
 110:/usr/include/ctype.h **** __exctype (isalnum);
 111:/usr/include/ctype.h **** __exctype (isalpha);
 112:/usr/include/ctype.h **** __exctype (iscntrl);
 113:/usr/include/ctype.h **** __exctype (isdigit);
 114:/usr/include/ctype.h **** __exctype (islower);
 115:/usr/include/ctype.h **** __exctype (isgraph);
 116:/usr/include/ctype.h **** __exctype (isprint);
 117:/usr/include/ctype.h **** __exctype (ispunct);
 118:/usr/include/ctype.h **** __exctype (isspace);
 119:/usr/include/ctype.h **** __exctype (isupper);
 120:/usr/include/ctype.h **** __exctype (isxdigit);
 121:/usr/include/ctype.h **** 
 122:/usr/include/ctype.h **** 
 123:/usr/include/ctype.h **** /* Return the lowercase version of C.  */
 124:/usr/include/ctype.h **** extern int tolower (int __c) __THROW;
 125:/usr/include/ctype.h **** 
 126:/usr/include/ctype.h **** /* Return the uppercase version of C.  */
 127:/usr/include/ctype.h **** extern int toupper (int __c) __THROW;
 128:/usr/include/ctype.h **** 
 129:/usr/include/ctype.h **** __END_NAMESPACE_STD
 130:/usr/include/ctype.h **** 
 131:/usr/include/ctype.h **** 
 132:/usr/include/ctype.h **** /* ISO C99 introduced one new function.  */
 133:/usr/include/ctype.h **** #ifdef	__USE_ISOC99
 134:/usr/include/ctype.h **** __BEGIN_NAMESPACE_C99
 135:/usr/include/ctype.h **** 
 136:/usr/include/ctype.h **** __exctype (isblank);
 137:/usr/include/ctype.h **** 
 138:/usr/include/ctype.h **** __END_NAMESPACE_C99
 139:/usr/include/ctype.h **** #endif
 140:/usr/include/ctype.h **** 
 141:/usr/include/ctype.h **** #ifdef __USE_GNU
 142:/usr/include/ctype.h **** /* Test C for a set of character classes according to MASK.  */
 143:/usr/include/ctype.h **** extern int isctype (int __c, int __mask) __THROW;
 144:/usr/include/ctype.h **** #endif
 145:/usr/include/ctype.h **** 
 146:/usr/include/ctype.h **** #if defined __USE_MISC || defined __USE_XOPEN
 147:/usr/include/ctype.h **** 
 148:/usr/include/ctype.h **** /* Return nonzero iff C is in the ASCII set
 149:/usr/include/ctype.h ****    (i.e., is no more than 7 bits wide).  */
 150:/usr/include/ctype.h **** extern int isascii (int __c) __THROW;
 151:/usr/include/ctype.h **** 
 152:/usr/include/ctype.h **** /* Return the part of C that is in the ASCII set
 153:/usr/include/ctype.h ****    (i.e., the low-order 7 bits of C).  */
 154:/usr/include/ctype.h **** extern int toascii (int __c) __THROW;
 155:/usr/include/ctype.h **** 
 156:/usr/include/ctype.h **** /* These are the same as `toupper' and `tolower' except that they do not
 157:/usr/include/ctype.h ****    check the argument for being in the range of a `char'.  */
 158:/usr/include/ctype.h **** __exctype (_toupper);
 159:/usr/include/ctype.h **** __exctype (_tolower);
 160:/usr/include/ctype.h **** #endif /* Use X/Open or use misc.  */
 161:/usr/include/ctype.h **** 
 162:/usr/include/ctype.h **** /* This code is needed for the optimized mapping functions.  */
 163:/usr/include/ctype.h **** #define __tobody(c, f, a, args) \
 164:/usr/include/ctype.h ****   (__extension__							      \
 165:/usr/include/ctype.h ****    ({ int __res;							      \
 166:/usr/include/ctype.h ****       if (sizeof (c) > 1)						      \
 167:/usr/include/ctype.h **** 	{								      \
 168:/usr/include/ctype.h **** 	  if (__builtin_constant_p (c))					      \
 169:/usr/include/ctype.h **** 	    {								      \
 170:/usr/include/ctype.h **** 	      int __c = (c);						      \
 171:/usr/include/ctype.h **** 	      __res = __c < -128 || __c > 255 ? __c : (a)[__c];		      \
 172:/usr/include/ctype.h **** 	    }								      \
 173:/usr/include/ctype.h **** 	  else								      \
 174:/usr/include/ctype.h **** 	    __res = f args;						      \
 175:/usr/include/ctype.h **** 	}								      \
 176:/usr/include/ctype.h ****       else								      \
 177:/usr/include/ctype.h **** 	__res = (a)[(int) (c)];						      \
 178:/usr/include/ctype.h ****       __res; }))
 179:/usr/include/ctype.h **** 
 180:/usr/include/ctype.h **** #if !defined __NO_CTYPE
 181:/usr/include/ctype.h **** # ifdef __isctype_f
 182:/usr/include/ctype.h **** __isctype_f (alnum)
 183:/usr/include/ctype.h **** __isctype_f (alpha)
 184:/usr/include/ctype.h **** __isctype_f (cntrl)
 185:/usr/include/ctype.h **** __isctype_f (digit)
 186:/usr/include/ctype.h **** __isctype_f (lower)
 187:/usr/include/ctype.h **** __isctype_f (graph)
 188:/usr/include/ctype.h **** __isctype_f (print)
 189:/usr/include/ctype.h **** __isctype_f (punct)
 190:/usr/include/ctype.h **** __isctype_f (space)
 127              		.loc 3 190 0 discriminator 1
 128 0039 480FBE10 		movsbq	(%rax), %rdx
 129              	.LBE942:
 130              	.LBE941:
 131              		.loc 2 526 0 discriminator 1
 132 003d F6445101 		testb	$32, 1(%rcx,%rdx,2)
 132      20
 133 0042 74EC     		je	.L14
 134              	.LVL7:
 135              	.L9:
 527:fltk-1.3.4-1/src/Fl_Input_.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Input_.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Input_.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 136              		.loc 2 529 0
 137 0044 4883C408 		addq	$8, %rsp
 138              		.cfi_remember_state
 139              		.cfi_def_cfa_offset 24
 140 0048 89D8     		movl	%ebx, %eax
 141 004a 5B       		popq	%rbx
 142              		.cfi_restore 3
 143              		.cfi_def_cfa_offset 16
 144              	.LVL8:
 145 004b 5D       		popq	%rbp
 146              		.cfi_restore 6
 147              		.cfi_def_cfa_offset 8
 148 004c C3       		ret
 149              	.LVL9:
 150 004d 0F1F00   		.p2align 4,,10
 151              		.p2align 3
 152              	.L13:
 153              		.cfi_restore_state
 154 0050 4883C408 		addq	$8, %rsp
 155              		.cfi_def_cfa_offset 24
 527:fltk-1.3.4-1/src/Fl_Input_.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 156              		.loc 2 527 0
 157 0054 31C0     		xorl	%eax, %eax
 158              		.loc 2 529 0
 159 0056 5B       		popq	%rbx
 160              		.cfi_restore 3
 161              		.cfi_def_cfa_offset 16
 162              	.LVL10:
 163 0057 5D       		popq	%rbp
 164              		.cfi_restore 6
 165              		.cfi_def_cfa_offset 8
 166              	.LVL11:
 167 0058 C3       		ret
 168              	.LVL12:
 169 0059 0F1F8000 		.p2align 4,,10
 169      000000
 170              		.p2align 3
 171              	.L7:
 525:fltk-1.3.4-1/src/Fl_Input_.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 172              		.loc 2 525 0
 173 0060 31C0     		xorl	%eax, %eax
 174              		.loc 2 529 0
 175 0062 C3       		ret
 176              		.cfi_endproc
 177              	.LFE531:
 179              		.section	.text.unlikely._ZL17strict_word_startPKcii
 180              	.LCOLDE3:
 181              		.section	.text._ZL17strict_word_startPKcii
 182              	.LHOTE3:
 183              		.section	.text.unlikely._ZL15strict_word_endPKciii,"ax",@progbits
 184              	.LCOLDB4:
 185              		.section	.text._ZL15strict_word_endPKciii,"ax",@progbits
 186              	.LHOTB4:
 187              		.p2align 4,,15
 189              	_ZL15strict_word_endPKciii:
 190              	.LFB532:
 530:fltk-1.3.4-1/src/Fl_Input_.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Input_.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 191              		.loc 2 531 0
 192              		.cfi_startproc
 193              	.LVL13:
 532:fltk-1.3.4-1/src/Fl_Input_.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 194              		.loc 2 532 0
 195 0000 83F905   		cmpl	$5, %ecx
 531:fltk-1.3.4-1/src/Fl_Input_.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 196              		.loc 2 531 0
 197 0003 4154     		pushq	%r12
 198              		.cfi_def_cfa_offset 16
 199              		.cfi_offset 12, -16
 200 0005 55       		pushq	%rbp
 201              		.cfi_def_cfa_offset 24
 202              		.cfi_offset 6, -24
 203 0006 89F5     		movl	%esi, %ebp
 204 0008 53       		pushq	%rbx
 205              		.cfi_def_cfa_offset 32
 206              		.cfi_offset 3, -32
 207              		.loc 2 532 0
 208 0009 743D     		je	.L18
 533:fltk-1.3.4-1/src/Fl_Input_.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 209              		.loc 2 533 0
 210 000b 39F2     		cmpl	%esi, %edx
 211 000d 89D3     		movl	%edx, %ebx
 212 000f 7D2D     		jge	.L20
 213 0011 4989FC   		movq	%rdi, %r12
 214 0014 E8000000 		call	__ctype_b_loc
 214      00
 215              	.LVL14:
 216 0019 488B10   		movq	(%rax), %rdx
 217 001c 4863C3   		movslq	%ebx, %rax
 218 001f 498D3C04 		leaq	(%r12,%rax), %rdi
 219 0023 EB0E     		jmp	.L17
 220              		.p2align 4,,10
 221 0025 0F1F00   		.p2align 3
 222              	.L23:
 534:fltk-1.3.4-1/src/Fl_Input_.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 223              		.loc 2 534 0
 224 0028 83C301   		addl	$1, %ebx
 225              	.LVL15:
 226 002b 4883C701 		addq	$1, %rdi
 533:fltk-1.3.4-1/src/Fl_Input_.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227              		.loc 2 533 0
 228 002f 39DD     		cmpl	%ebx, %ebp
 229 0031 7415     		je	.L18
 230              	.L17:
 231              	.LBB943:
 232              	.LBB944:
 233              		.loc 3 190 0 discriminator 1
 234 0033 480FBE07 		movsbq	(%rdi), %rax
 235              	.LBE944:
 236              	.LBE943:
 533:fltk-1.3.4-1/src/Fl_Input_.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 237              		.loc 2 533 0 discriminator 1
 238 0037 F6444201 		testb	$32, 1(%rdx,%rax,2)
 238      20
 239 003c 74EA     		je	.L23
 240              	.LVL16:
 241              	.L20:
 242 003e 89D8     		movl	%ebx, %eax
 535:fltk-1.3.4-1/src/Fl_Input_.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Input_.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 243              		.loc 2 536 0
 244 0040 5B       		popq	%rbx
 245              		.cfi_remember_state
 246              		.cfi_def_cfa_offset 24
 247              	.LVL17:
 248 0041 5D       		popq	%rbp
 249              		.cfi_def_cfa_offset 16
 250              	.LVL18:
 251 0042 415C     		popq	%r12
 252              		.cfi_def_cfa_offset 8
 253 0044 C3       		ret
 254              	.LVL19:
 255              		.p2align 4,,10
 256 0045 0F1F00   		.p2align 3
 257              	.L18:
 258              		.cfi_restore_state
 259 0048 89E8     		movl	%ebp, %eax
 260 004a 5B       		popq	%rbx
 261              		.cfi_def_cfa_offset 24
 262 004b 5D       		popq	%rbp
 263              		.cfi_def_cfa_offset 16
 264              	.LVL20:
 265 004c 415C     		popq	%r12
 266              		.cfi_def_cfa_offset 8
 267 004e C3       		ret
 268              		.cfi_endproc
 269              	.LFE532:
 271              		.section	.text.unlikely._ZL15strict_word_endPKciii
 272              	.LCOLDE4:
 273              		.section	.text._ZL15strict_word_endPKciii
 274              	.LHOTE4:
 275              		.section	.rodata.str1.1,"aMS",@progbits,1
 276              	.LC5:
 277 0000 23252D40 		.string	"#%-@_~"
 277      5F7E00
 278              		.section	.text.unlikely._ZL6iswordc,"ax",@progbits
 279              	.LCOLDB6:
 280              		.section	.text._ZL6iswordc,"ax",@progbits
 281              	.LHOTB6:
 282              		.p2align 4,,15
 284              	_ZL6iswordc:
 285              	.LFB526:
 424:fltk-1.3.4-1/src/Fl_Input_.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 286              		.loc 2 424 0
 287              		.cfi_startproc
 288              	.LVL21:
 425:fltk-1.3.4-1/src/Fl_Input_.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 289              		.loc 2 425 0
 290 0000 4084FF   		testb	%dil, %dil
 291 0003 7843     		js	.L26
 424:fltk-1.3.4-1/src/Fl_Input_.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 292              		.loc 2 424 0 discriminator 2
 293 0005 55       		pushq	%rbp
 294              		.cfi_def_cfa_offset 16
 295              		.cfi_offset 6, -16
 296 0006 53       		pushq	%rbx
 297              		.cfi_def_cfa_offset 24
 298              		.cfi_offset 3, -24
 299 0007 480FBEEF 		movsbq	%dil, %rbp
 300 000b 89FB     		movl	%edi, %ebx
 301              	.LVL22:
 302 000d 4883EC08 		subq	$8, %rsp
 303              		.cfi_def_cfa_offset 32
 304              	.LBB945:
 305              	.LBB946:
 182:/usr/include/ctype.h **** __isctype_f (alpha)
 306              		.loc 3 182 0 discriminator 2
 307 0011 E8000000 		call	__ctype_b_loc
 307      00
 308              	.LVL23:
 309 0016 488B10   		movq	(%rax), %rdx
 310              	.LBE946:
 311              	.LBE945:
 312 0019 B8010000 		movl	$1, %eax
 312      00
 425:fltk-1.3.4-1/src/Fl_Input_.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313              		.loc 2 425 0 discriminator 2
 314 001e F6046A08 		testb	$8, (%rdx,%rbp,2)
 315 0022 7516     		jne	.L25
 316              	.LVL24:
 317              	.LBB947:
 318              	.LBB948:
 319              		.file 4 "/usr/include/string.h"
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
 320              		.loc 4 226 0 discriminator 4
 321 0024 0FBEF3   		movsbl	%bl, %esi
 322              	.LVL25:
 323 0027 BF000000 		movl	$.LC5, %edi
 323      00
 324 002c E8000000 		call	strchr
 324      00
 325              	.LVL26:
 326 0031 4885C0   		testq	%rax, %rax
 327 0034 0F95C0   		setne	%al
 328 0037 0FB6C0   		movzbl	%al, %eax
 329              	.L25:
 330              	.LBE948:
 331              	.LBE947:
 426:fltk-1.3.4-1/src/Fl_Input_.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 332              		.loc 2 426 0 discriminator 8
 333 003a 4883C408 		addq	$8, %rsp
 334              		.cfi_def_cfa_offset 24
 335 003e 5B       		popq	%rbx
 336              		.cfi_restore 3
 337              		.cfi_def_cfa_offset 16
 338 003f 5D       		popq	%rbp
 339              		.cfi_restore 6
 340              		.cfi_def_cfa_offset 8
 341              	.LVL27:
 342 0040 C3       		ret
 343              	.LVL28:
 344              		.p2align 4,,10
 345 0041 0F1F8000 		.p2align 3
 345      000000
 346              	.L26:
 347 0048 B8010000 		movl	$1, %eax
 347      00
 348 004d C3       		ret
 349              		.cfi_endproc
 350              	.LFE526:
 352              		.section	.text.unlikely._ZL6iswordc
 353              	.LCOLDE6:
 354              		.section	.text._ZL6iswordc
 355              	.LHOTE6:
 356              		.section	.text.unlikely._ZL14undobuffersizei,"ax",@progbits
 357              	.LCOLDB7:
 358              		.section	.text._ZL14undobuffersizei,"ax",@progbits
 359              	.LHOTB7:
 360              		.p2align 4,,15
 362              	_ZL14undobuffersizei:
 363              	.LFB537:
 537:fltk-1.3.4-1/src/Fl_Input_.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Input_.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Input_.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Input_.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Input_.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_Input_.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_Input_.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Input_.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/Fl_Input_.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_Input_.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Input_.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Input_.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_Input_.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Input_.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Input_.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Input_.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Input_.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Input_.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Input_.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Input_.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Input_.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Input_.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Input_.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Input_.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Input_.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Input_.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Input_.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Input_.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_Input_.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Input_.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 567:fltk-1.3.4-1/src/Fl_Input_.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_Input_.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/Fl_Input_.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Input_.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_Input_.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Input_.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Input_.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 574:fltk-1.3.4-1/src/Fl_Input_.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Input_.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Input_.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_Input_.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Input_.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_Input_.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_Input_.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Input_.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_Input_.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_Input_.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_Input_.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Input_.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/Fl_Input_.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_Input_.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 588:fltk-1.3.4-1/src/Fl_Input_.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_Input_.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/Fl_Input_.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_Input_.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Input_.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/Fl_Input_.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_Input_.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_Input_.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Input_.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Input_.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Input_.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Input_.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Input_.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Input_.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Input_.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_Input_.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_Input_.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_Input_.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_Input_.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_Input_.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_Input_.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/Fl_Input_.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Input_.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Input_.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_Input_.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_Input_.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_Input_.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/Fl_Input_.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/Fl_Input_.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_Input_.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Input_.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/Fl_Input_.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/Fl_Input_.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/Fl_Input_.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_Input_.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/Fl_Input_.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_Input_.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 625:fltk-1.3.4-1/src/Fl_Input_.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_Input_.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_Input_.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 628:fltk-1.3.4-1/src/Fl_Input_.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 629:fltk-1.3.4-1/src/Fl_Input_.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_Input_.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_Input_.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632:fltk-1.3.4-1/src/Fl_Input_.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 633:fltk-1.3.4-1/src/Fl_Input_.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 634:fltk-1.3.4-1/src/Fl_Input_.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635:fltk-1.3.4-1/src/Fl_Input_.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 636:fltk-1.3.4-1/src/Fl_Input_.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_Input_.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 638:fltk-1.3.4-1/src/Fl_Input_.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 639:fltk-1.3.4-1/src/Fl_Input_.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 640:fltk-1.3.4-1/src/Fl_Input_.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 641:fltk-1.3.4-1/src/Fl_Input_.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 642:fltk-1.3.4-1/src/Fl_Input_.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 643:fltk-1.3.4-1/src/Fl_Input_.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 644:fltk-1.3.4-1/src/Fl_Input_.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 645:fltk-1.3.4-1/src/Fl_Input_.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 646:fltk-1.3.4-1/src/Fl_Input_.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 647:fltk-1.3.4-1/src/Fl_Input_.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 648:fltk-1.3.4-1/src/Fl_Input_.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 649:fltk-1.3.4-1/src/Fl_Input_.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 650:fltk-1.3.4-1/src/Fl_Input_.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 651:fltk-1.3.4-1/src/Fl_Input_.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 652:fltk-1.3.4-1/src/Fl_Input_.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 653:fltk-1.3.4-1/src/Fl_Input_.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 654:fltk-1.3.4-1/src/Fl_Input_.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 655:fltk-1.3.4-1/src/Fl_Input_.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 656:fltk-1.3.4-1/src/Fl_Input_.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_Input_.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_Input_.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_Input_.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_Input_.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_Input_.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_Input_.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_Input_.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_Input_.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_Input_.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 666:fltk-1.3.4-1/src/Fl_Input_.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_Input_.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_Input_.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 669:fltk-1.3.4-1/src/Fl_Input_.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_Input_.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_Input_.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 672:fltk-1.3.4-1/src/Fl_Input_.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_Input_.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_Input_.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 675:fltk-1.3.4-1/src/Fl_Input_.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_Input_.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_Input_.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 678:fltk-1.3.4-1/src/Fl_Input_.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_Input_.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 680:fltk-1.3.4-1/src/Fl_Input_.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_Input_.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_Input_.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_Input_.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_Input_.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_Input_.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_Input_.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687:fltk-1.3.4-1/src/Fl_Input_.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_Input_.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_Input_.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 690:fltk-1.3.4-1/src/Fl_Input_.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_Input_.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_Input_.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_Input_.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_Input_.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_Input_.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_Input_.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_Input_.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_Input_.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_Input_.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_Input_.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_Input_.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_Input_.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_Input_.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_Input_.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_Input_.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_Input_.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_Input_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_Input_.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 709:fltk-1.3.4-1/src/Fl_Input_.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_Input_.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_Input_.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_Input_.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_Input_.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_Input_.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_Input_.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 716:fltk-1.3.4-1/src/Fl_Input_.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 717:fltk-1.3.4-1/src/Fl_Input_.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 718:fltk-1.3.4-1/src/Fl_Input_.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_Input_.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_Input_.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721:fltk-1.3.4-1/src/Fl_Input_.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 722:fltk-1.3.4-1/src/Fl_Input_.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_Input_.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_Input_.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 725:fltk-1.3.4-1/src/Fl_Input_.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_Input_.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_Input_.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 728:fltk-1.3.4-1/src/Fl_Input_.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 729:fltk-1.3.4-1/src/Fl_Input_.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 730:fltk-1.3.4-1/src/Fl_Input_.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 731:fltk-1.3.4-1/src/Fl_Input_.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 732:fltk-1.3.4-1/src/Fl_Input_.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/src/Fl_Input_.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 734:fltk-1.3.4-1/src/Fl_Input_.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 735:fltk-1.3.4-1/src/Fl_Input_.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 736:fltk-1.3.4-1/src/Fl_Input_.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 737:fltk-1.3.4-1/src/Fl_Input_.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 738:fltk-1.3.4-1/src/Fl_Input_.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 739:fltk-1.3.4-1/src/Fl_Input_.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 740:fltk-1.3.4-1/src/Fl_Input_.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 741:fltk-1.3.4-1/src/Fl_Input_.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 742:fltk-1.3.4-1/src/Fl_Input_.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 743:fltk-1.3.4-1/src/Fl_Input_.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 744:fltk-1.3.4-1/src/Fl_Input_.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 745:fltk-1.3.4-1/src/Fl_Input_.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 746:fltk-1.3.4-1/src/Fl_Input_.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 364              		.loc 2 746 0
 365              		.cfi_startproc
 366              	.LVL29:
 367 0000 4883EC08 		subq	$8, %rsp
 368              		.cfi_def_cfa_offset 16
 747:fltk-1.3.4-1/src/Fl_Input_.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 369              		.loc 2 747 0
 370 0004 8B350000 		movl	_ZL16undobufferlength(%rip), %esi
 370      0000
 371 000a 39FE     		cmpl	%edi, %esi
 372 000c 7D2D     		jge	.L30
 373 000e 89F8     		movl	%edi, %eax
 748:fltk-1.3.4-1/src/Fl_Input_.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 374              		.loc 2 748 0
 375 0010 488B3D00 		movq	_ZL10undobuffer(%rip), %rdi
 375      000000
 376              	.LVL30:
 377 0017 4885FF   		testq	%rdi, %rdi
 378 001a 7424     		je	.L32
 379 001c 0F1F4000 		.p2align 4,,10
 380              		.p2align 3
 381              	.L33:
 749:fltk-1.3.4-1/src/Fl_Input_.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 382              		.loc 2 749 0
 383 0020 01F6     		addl	%esi, %esi
 384 0022 39F0     		cmpl	%esi, %eax
 385 0024 7FFA     		jg	.L33
 386 0026 89350000 		movl	%esi, _ZL16undobufferlength(%rip)
 386      0000
 750:fltk-1.3.4-1/src/Fl_Input_.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 387              		.loc 2 750 0
 388 002c 4863F6   		movslq	%esi, %rsi
 389 002f E8000000 		call	realloc
 389      00
 390              	.LVL31:
 391 0034 48890500 		movq	%rax, _ZL10undobuffer(%rip)
 391      000000
 392              	.L30:
 751:fltk-1.3.4-1/src/Fl_Input_.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752:fltk-1.3.4-1/src/Fl_Input_.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 753:fltk-1.3.4-1/src/Fl_Input_.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 754:fltk-1.3.4-1/src/Fl_Input_.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 755:fltk-1.3.4-1/src/Fl_Input_.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 756:fltk-1.3.4-1/src/Fl_Input_.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 393              		.loc 2 756 0
 394 003b 4883C408 		addq	$8, %rsp
 395              		.cfi_remember_state
 396              		.cfi_def_cfa_offset 8
 397 003f C3       		ret
 398              	.LVL32:
 399              	.L32:
 400              		.cfi_restore_state
 401              	.LBB951:
 402              	.LBB952:
 752:fltk-1.3.4-1/src/Fl_Input_.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 403              		.loc 2 752 0
 404 0040 83C009   		addl	$9, %eax
 405              	.LVL33:
 753:fltk-1.3.4-1/src/Fl_Input_.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 406              		.loc 2 753 0
 407 0043 4863F8   		movslq	%eax, %rdi
 752:fltk-1.3.4-1/src/Fl_Input_.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 408              		.loc 2 752 0
 409 0046 89050000 		movl	%eax, _ZL16undobufferlength(%rip)
 409      0000
 753:fltk-1.3.4-1/src/Fl_Input_.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 410              		.loc 2 753 0
 411 004c E8000000 		call	malloc
 411      00
 412              	.LVL34:
 413 0051 48890500 		movq	%rax, _ZL10undobuffer(%rip)
 413      000000
 414              	.LBE952:
 415              	.LBE951:
 416              		.loc 2 756 0
 417 0058 EBE1     		jmp	.L30
 418              		.cfi_endproc
 419              	.LFE537:
 421              		.section	.text.unlikely._ZL14undobuffersizei
 422              	.LCOLDE7:
 423              		.section	.text._ZL14undobuffersizei
 424              	.LHOTE7:
 425              		.section	.text.unlikely._ZNK9Fl_Input_6expandEPKcPc,"ax",@progbits
 426              		.align 2
 427              	.LCOLDB8:
 428              		.section	.text._ZNK9Fl_Input_6expandEPKcPc,"ax",@progbits
 429              	.LHOTB8:
 430              		.align 2
 431              		.p2align 4,,15
 432              		.globl	_ZNK9Fl_Input_6expandEPKcPc
 434              	_ZNK9Fl_Input_6expandEPKcPc:
 435              	.LFB520:
  55:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 436              		.loc 2 55 0
 437              		.cfi_startproc
 438              	.LVL35:
 439 0000 4157     		pushq	%r15
 440              		.cfi_def_cfa_offset 16
 441              		.cfi_offset 15, -16
 442 0002 4156     		pushq	%r14
 443              		.cfi_def_cfa_offset 24
 444              		.cfi_offset 14, -24
 445 0004 4989F7   		movq	%rsi, %r15
 446 0007 4155     		pushq	%r13
 447              		.cfi_def_cfa_offset 32
 448              		.cfi_offset 13, -32
 449 0009 4154     		pushq	%r12
 450              		.cfi_def_cfa_offset 40
 451              		.cfi_offset 12, -40
 452 000b 4989D5   		movq	%rdx, %r13
 453 000e 55       		pushq	%rbp
 454              		.cfi_def_cfa_offset 48
 455              		.cfi_offset 6, -48
 456 000f 53       		pushq	%rbx
 457              		.cfi_def_cfa_offset 56
 458              		.cfi_offset 3, -56
  57:fltk-1.3.4-1/src/Fl_Input_.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 459              		.loc 2 57 0
 460 0010 488D9AFC 		leaq	1020(%rdx), %rbx
 460      030000
 461              	.LVL36:
  55:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 462              		.loc 2 55 0
 463 0017 4989FE   		movq	%rdi, %r14
 464 001a 4883EC28 		subq	$40, %rsp
 465              		.cfi_def_cfa_offset 96
 466 001e 0FB6476C 		movzbl	108(%rdi), %eax
 467              	.LVL37:
  55:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 468              		.loc 2 55 0
 469 0022 48895424 		movq	%rdx, 24(%rsp)
 469      18
 470              	.LBB953:
  65:fltk-1.3.4-1/src/Fl_Input_.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
 471              		.loc 2 65 0
 472 0027 89C2     		movl	%eax, %edx
 473              	.LVL38:
 474 0029 83E207   		andl	$7, %edx
 475 002c 80FA05   		cmpb	$5, %dl
 476 002f 0F84DB01 		je	.L37
 476      0000
 477 0035 4C89ED   		movq	%r13, %rbp
 478 0038 48893424 		movq	%rsi, (%rsp)
 479 003c C7442414 		movl	$0, 20(%rsp)
 479      00000000 
 480 0044 C744240C 		movl	$0, 12(%rsp)
 480      00000000 
 481 004c EB6C     		jmp	.L38
 482              	.LVL39:
 483 004e 6690     		.p2align 4,,10
 484              		.p2align 3
 485              	.L80:
 486              	.LBB954:
 487              	.LBB955:
  75:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 488              		.loc 2 75 0 discriminator 1
 489 0050 49638688 		movslq	136(%r14), %rax
 489      000000
 490 0057 49034678 		addq	120(%r14), %rax
 491 005b 4939C7   		cmpq	%rax, %r15
 492 005e 0F83C400 		jnb	.L45
 492      0000
  75:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 493              		.loc 2 75 0 is_stmt 0 discriminator 4
 494 0064 410FB637 		movzbl	(%r15), %esi
 495 0068 40887424 		movb	%sil, 19(%rsp)
 495      13
 496 006d 89742408 		movl	%esi, 8(%rsp)
 497              	.LVL40:
 498              	.LBB956:
 499              	.LBB957:
 500              		.loc 3 190 0 is_stmt 1 discriminator 4
 501 0071 E8000000 		call	__ctype_b_loc
 501      00
 502              	.LVL41:
 503 0076 48637C24 		movslq	8(%rsp), %rdi
 503      08
 504 007b 488B00   		movq	(%rax), %rax
 505              	.LBE957:
 506              	.LBE956:
  75:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 507              		.loc 2 75 0 discriminator 4
 508 007e F6447801 		testb	$32, 1(%rax,%rdi,2)
 508      20
 509              	.LBB959:
 510              	.LBB958:
 511              		.loc 3 190 0 discriminator 4
 512 0083 4889FE   		movq	%rdi, %rsi
 513              	.LBE958:
 514              	.LBE959:
  75:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 515              		.loc 2 75 0 discriminator 4
 516 0086 0F859C00 		jne	.L45
 516      0000
  90:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 517              		.loc 2 90 0
 518 008c 83FE1F   		cmpl	$31, %esi
 519 008f 0FB65424 		movzbl	19(%rsp), %edx
 519      13
  89:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 520              		.loc 2 89 0
 521 0094 4D8D6701 		leaq	1(%r15), %r12
 522              	.LVL42:
  90:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 523              		.loc 2 90 0
 524 0098 7E43     		jle	.L62
 525              	.LVL43:
 526 009a 660F1F44 		.p2align 4,,10
 526      0000
 527              		.p2align 3
 528              	.L81:
 529 00a0 83FE7F   		cmpl	$127, %esi
 530 00a3 7438     		je	.L62
 531              	.LVL44:
 101:fltk-1.3.4-1/src/Fl_Input_.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 532              		.loc 2 101 0
 533 00a5 41885500 		movb	%dl, 0(%r13)
 534 00a9 4983C501 		addq	$1, %r13
 535              	.LVL45:
 536              	.L53:
 537              	.LBE955:
  74:fltk-1.3.4-1/src/Fl_Input_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 538              		.loc 2 74 0
 539 00ad 4C39EB   		cmpq	%r13, %rbx
 540 00b0 7656     		jbe	.L59
 541              	.L84:
 542 00b2 410FB646 		movzbl	108(%r14), %eax
 542      6C
 543              	.LBB964:
  89:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 544              		.loc 2 89 0
 545 00b7 4D89E7   		movq	%r12, %r15
 546              	.LVL46:
 547              	.L38:
  75:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 548              		.loc 2 75 0
 549 00ba A810     		testb	$16, %al
 550 00bc 7592     		jne	.L80
 551              	.LVL47:
 552              	.L44:
  88:fltk-1.3.4-1/src/Fl_Input_.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 553              		.loc 2 88 0
 554 00be 49638688 		movslq	136(%r14), %rax
 554      000000
 555 00c5 49034678 		addq	120(%r14), %rax
 556 00c9 4939C7   		cmpq	%rax, %r15
 557 00cc 733D     		jnb	.L39
 558 00ce 410FB637 		movzbl	(%r15), %esi
  89:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 559              		.loc 2 89 0
 560 00d2 4D8D6701 		leaq	1(%r15), %r12
  90:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 561              		.loc 2 90 0
 562 00d6 83FE1F   		cmpl	$31, %esi
 563 00d9 89F2     		movl	%esi, %edx
 564              	.LVL48:
 565 00db 7FC3     		jg	.L81
 566              	.LVL49:
 567              	.L62:
  91:fltk-1.3.4-1/src/Fl_Input_.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 568              		.loc 2 91 0
 569 00dd 83FE0A   		cmpl	$10, %esi
 570 00e0 0F84BA00 		je	.L82
 570      0000
  92:fltk-1.3.4-1/src/Fl_Input_.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 571              		.loc 2 92 0
 572 00e6 83FE09   		cmpl	$9, %esi
 573 00e9 0F84C900 		je	.L83
 573      0000
 574              	.LVL50:
 575              	.L51:
  98:fltk-1.3.4-1/src/Fl_Input_.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 576              		.loc 2 98 0
 577 00ef 83F240   		xorl	$64, %edx
  97:fltk-1.3.4-1/src/Fl_Input_.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 578              		.loc 2 97 0
 579 00f2 41C64500 		movb	$94, 0(%r13)
 579      5E
  98:fltk-1.3.4-1/src/Fl_Input_.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580              		.loc 2 98 0
 581 00f7 4983C502 		addq	$2, %r13
 582              	.LVL51:
 583 00fb 418855FF 		movb	%dl, -1(%r13)
 584              	.LBE964:
  74:fltk-1.3.4-1/src/Fl_Input_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 585              		.loc 2 74 0
 586 00ff 4C39EB   		cmpq	%r13, %rbx
 587 0102 77AE     		ja	.L84
 588              		.p2align 4,,10
 589 0104 0F1F4000 		.p2align 3
 590              	.L59:
 591              	.LBB965:
  89:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 592              		.loc 2 89 0
 593 0108 4D89E7   		movq	%r12, %r15
 594              	.LVL52:
 595              	.L39:
 596              	.LBE965:
 597              	.LBE954:
 598              	.LBE953:
 104:fltk-1.3.4-1/src/Fl_Input_.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599              		.loc 2 104 0
 600 010b 41C64500 		movb	$0, 0(%r13)
 600      00
 106:fltk-1.3.4-1/src/Fl_Input_.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 601              		.loc 2 106 0
 602 0110 4883C428 		addq	$40, %rsp
 603              		.cfi_remember_state
 604              		.cfi_def_cfa_offset 56
 605 0114 4C89F8   		movq	%r15, %rax
 606 0117 5B       		popq	%rbx
 607              		.cfi_def_cfa_offset 48
 608              	.LVL53:
 609 0118 5D       		popq	%rbp
 610              		.cfi_def_cfa_offset 40
 611 0119 415C     		popq	%r12
 612              		.cfi_def_cfa_offset 32
 613 011b 415D     		popq	%r13
 614              		.cfi_def_cfa_offset 24
 615              	.LVL54:
 616 011d 415E     		popq	%r14
 617              		.cfi_def_cfa_offset 16
 618              	.LVL55:
 619 011f 415F     		popq	%r15
 620              		.cfi_def_cfa_offset 8
 621              	.LVL56:
 622 0121 C3       		ret
 623              	.LVL57:
 624              		.p2align 4,,10
 625 0122 660F1F44 		.p2align 3
 625      0000
 626              	.L45:
 627              		.cfi_restore_state
 628              	.LBB970:
 629              	.LBB968:
 630              	.LBB966:
  76:fltk-1.3.4-1/src/Fl_Input_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 631              		.loc 2 76 0
 632 0128 410FB67E 		movzbl	110(%r14), %edi
 632      6E
 633 012d 458B6628 		movl	40(%r14), %r12d
 634              	.LVL58:
 635 0131 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 635      00
 636              	.LVL59:
 637              	.LBB960:
 638              	.LBB961:
 639              		.file 5 "fltk-1.3.4-1/FL/fl_draw.H"
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
 528:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 529:fltk-1.3.4-1/FL/fl_draw.H **** /**
 530:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the recommended distance above the bottom of a fl_height() tall box to
 531:fltk-1.3.4-1/FL/fl_draw.H ****   draw the text at so it looks centered vertically in that box.
 532:fltk-1.3.4-1/FL/fl_draw.H **** */
 533:fltk-1.3.4-1/FL/fl_draw.H **** inline int  fl_descent() {return fl_graphics_driver->descent();}
 534:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 535:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 536:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT double fl_width(const char* txt);
 537:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a sequence of \p n characters
 538:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 539:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(const char* txt, int n) {return fl_graphics_driver->width(txt, n);}
 640              		.loc 5 539 0
 641 0136 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 641      000000
 642 013d 4C89EA   		movq	%r13, %rdx
 643              	.LBE961:
 644              	.LBE960:
  76:fltk-1.3.4-1/src/Fl_Input_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 645              		.loc 2 76 0
 646 0140 89442408 		movl	%eax, 8(%rsp)
 647              	.LVL60:
 648              	.LBB963:
 649              	.LBB962:
 650              		.loc 5 539 0
 651 0144 4829EA   		subq	%rbp, %rdx
 652 0147 4889EE   		movq	%rbp, %rsi
 653 014a 4C8B17   		movq	(%rdi), %r10
 654 014d 41FF92B8 		call	*440(%r10)
 654      010000
 655              	.LVL61:
 656              	.LBE962:
 657              	.LBE963:
  77:fltk-1.3.4-1/src/Fl_Input_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 658              		.loc 2 77 0
 659 0154 F20F2CD0 		cvttsd2si	%xmm0, %edx
  78:fltk-1.3.4-1/src/Fl_Input_.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 660              		.loc 2 78 0
 661 0158 488B0424 		movq	(%rsp), %rax
  77:fltk-1.3.4-1/src/Fl_Input_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 662              		.loc 2 77 0
 663 015c 0154240C 		addl	%edx, 12(%rsp)
 664              	.LVL62:
  78:fltk-1.3.4-1/src/Fl_Input_.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 665              		.loc 2 78 0
 666 0160 488D5001 		leaq	1(%rax), %rdx
 667 0164 8B442408 		movl	8(%rsp), %eax
 668 0168 4939D7   		cmpq	%rdx, %r15
 669 016b 761F     		jbe	.L76
  79:fltk-1.3.4-1/src/Fl_Input_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 670              		.loc 2 79 0
 671 016d 4129C4   		subl	%eax, %r12d
 672              	.LVL63:
 673 0170 4183EC02 		subl	$2, %r12d
 674 0174 443B6424 		cmpl	12(%rsp), %r12d
 674      0C
 675 0179 7D0C     		jge	.L61
 676 017b 8B442414 		movl	20(%rsp), %eax
 677 017f 85C0     		testl	%eax, %eax
 678 0181 0F85F000 		jne	.L60
 678      0000
 679              	.L61:
  82:fltk-1.3.4-1/src/Fl_Input_.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 680              		.loc 2 82 0
 681 0187 83442414 		addl	$1, 20(%rsp)
 681      01
 682              	.LVL64:
 683              	.L76:
 684 018c 4C89ED   		movq	%r13, %rbp
 685              	.LVL65:
 686 018f 4C893C24 		movq	%r15, (%rsp)
 687              	.LVL66:
 688 0193 E926FFFF 		jmp	.L44
 688      FF
 689              	.LVL67:
 690 0198 0F1F8400 		.p2align 4,,10
 690      00000000 
 691              		.p2align 3
 692              	.L82:
  91:fltk-1.3.4-1/src/Fl_Input_.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 693              		.loc 2 91 0
 694 01a0 410FB646 		movzbl	108(%r14), %eax
 694      6C
 695 01a5 83E007   		andl	$7, %eax
 696 01a8 3C04     		cmpb	$4, %al
 697 01aa 0F853FFF 		jne	.L51
 697      FFFF
 698 01b0 E956FFFF 		jmp	.L39
 698      FF
 699              		.p2align 4,,10
 700 01b5 0F1F00   		.p2align 3
 701              	.L83:
  92:fltk-1.3.4-1/src/Fl_Input_.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 702              		.loc 2 92 0
 703 01b8 410FB646 		movzbl	108(%r14), %eax
 703      6C
 704 01bd 83E007   		andl	$7, %eax
 705 01c0 3C04     		cmpb	$4, %al
 706 01c2 0F8527FF 		jne	.L51
 706      FFFF
  93:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 707              		.loc 2 93 0
 708 01c8 488B4424 		movq	24(%rsp), %rax
 708      18
 709 01cd 4C89EE   		movq	%r13, %rsi
 710 01d0 4829C6   		subq	%rax, %rsi
 711 01d3 4889C7   		movq	%rax, %rdi
 712 01d6 E8000000 		call	fl_utf_nb_char
 712      00
 713              	.LVL68:
 714 01db 99       		cltd
 715 01dc C1EA1D   		shrl	$29, %edx
 716 01df 01D0     		addl	%edx, %eax
 717 01e1 83E007   		andl	$7, %eax
 718 01e4 29D0     		subl	%edx, %eax
 719              	.LVL69:
 720 01e6 4C39EB   		cmpq	%r13, %rbx
 721 01e9 770E     		ja	.L54
 722 01eb E918FFFF 		jmp	.L59
 722      FF
 723              		.p2align 4,,10
 724              		.p2align 3
 725              	.L85:
  93:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 726              		.loc 2 93 0 is_stmt 0 discriminator 2
 727 01f0 4C39EB   		cmpq	%r13, %rbx
 728 01f3 0F86B4FE 		jbe	.L53
 728      FFFF
 729              	.LVL70:
 730              	.L54:
 731 01f9 83C001   		addl	$1, %eax
 732              	.LVL71:
  94:fltk-1.3.4-1/src/Fl_Input_.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 733              		.loc 2 94 0 is_stmt 1 discriminator 2
 734 01fc 4983C501 		addq	$1, %r13
 735              	.LVL72:
 736 0200 41C645FF 		movb	$32, -1(%r13)
 736      20
  93:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 737              		.loc 2 93 0 discriminator 2
 738 0205 83F807   		cmpl	$7, %eax
 739 0208 7EE6     		jle	.L85
 740 020a E99EFEFF 		jmp	.L53
 740      FF
 741              	.LVL73:
 742 020f 90       		.p2align 4,,10
 743              		.p2align 3
 744              	.L37:
 745              	.LBE966:
 746              	.LBE968:
  66:fltk-1.3.4-1/src/Fl_Input_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 747              		.loc 2 66 0
 748 0210 48638788 		movslq	136(%rdi), %rax
 748      000000
 749 0217 4C8B6C24 		movq	24(%rsp), %r13
 749      18
 750              	.LVL74:
 751 021c 48034778 		addq	120(%rdi), %rax
 752 0220 4839C6   		cmpq	%rax, %rsi
 753 0223 721F     		jb	.L41
 754 0225 EB5C     		jmp	.L86
 755              	.LVL75:
 756 0227 660F1F84 		.p2align 4,,10
 756      00000000 
 756      00
 757              		.p2align 3
 758              	.L73:
  66:fltk-1.3.4-1/src/Fl_Input_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 759              		.loc 2 66 0 is_stmt 0 discriminator 1
 760 0230 49638688 		movslq	136(%r14), %rax
 760      000000
 761 0237 49034678 		addq	120(%r14), %rax
 762 023b 4939C7   		cmpq	%rax, %r15
 763 023e 0F83C7FE 		jnb	.L39
 763      FFFF
 764              	.L41:
  67:fltk-1.3.4-1/src/Fl_Input_.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 765              		.loc 2 67 0 is_stmt 1
 766 0244 410FBE3F 		movsbl	(%r15), %edi
 767 0248 E8000000 		call	fl_utf8len
 767      00
 768              	.LVL76:
 769 024d 85C0     		testl	%eax, %eax
 770 024f 7E18     		jle	.L42
  68:fltk-1.3.4-1/src/Fl_Input_.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
 771              		.loc 2 68 0
 772 0251 4C89EE   		movq	%r13, %rsi
 773 0254 BF2A0000 		movl	$42, %edi
 773      00
 774 0259 E8000000 		call	fl_utf8encode
 774      00
 775              	.LVL77:
 776 025e 89050000 		movl	%eax, _ZL8l_secret(%rip)
 776      0000
  69:fltk-1.3.4-1/src/Fl_Input_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 777              		.loc 2 69 0
 778 0264 4898     		cltq
 779 0266 4901C5   		addq	%rax, %r13
 780              	.LVL78:
 781              	.L42:
  71:fltk-1.3.4-1/src/Fl_Input_.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 782              		.loc 2 71 0
 783 0269 4983C701 		addq	$1, %r15
 784              	.LVL79:
  66:fltk-1.3.4-1/src/Fl_Input_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
 785              		.loc 2 66 0
 786 026d 4939DD   		cmpq	%rbx, %r13
 787 0270 72BE     		jb	.L73
 788 0272 E994FEFF 		jmp	.L39
 788      FF
 789              	.LVL80:
 790              	.L60:
 791              	.LBB969:
 792              	.LBB967:
 793 0277 4989ED   		movq	%rbp, %r13
 794              	.LVL81:
 795 027a 4C8B3C24 		movq	(%rsp), %r15
 796              	.LVL82:
 797 027e E988FEFF 		jmp	.L39
 797      FF
 798              	.LVL83:
 799              	.L86:
 800              	.LBE967:
 801              	.LBE969:
 802 0283 4C8B6C24 		movq	24(%rsp), %r13
 802      18
 803              	.LVL84:
 804 0288 E97EFEFF 		jmp	.L39
 804      FF
 805              	.LBE970:
 806              		.cfi_endproc
 807              	.LFE520:
 809              		.section	.text.unlikely._ZNK9Fl_Input_6expandEPKcPc
 810              	.LCOLDE8:
 811              		.section	.text._ZNK9Fl_Input_6expandEPKcPc
 812              	.LHOTE8:
 813              		.section	.text.unlikely._ZNK9Fl_Input_8line_endEi.part.31.constprop.36,"ax",@progbits
 814              		.align 2
 815              	.LCOLDB9:
 816              		.section	.text._ZNK9Fl_Input_8line_endEi.part.31.constprop.36,"ax",@progbits
 817              	.LHOTB9:
 818              		.align 2
 819              		.p2align 4,,15
 821              	_ZNK9Fl_Input_8line_endEi.part.31.constprop.36:
 822              	.LFB593:
 477:fltk-1.3.4-1/src/Fl_Input_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 823              		.loc 2 477 0
 824              		.cfi_startproc
 825              	.LVL85:
 826 0000 4156     		pushq	%r14
 827              		.cfi_def_cfa_offset 16
 828              		.cfi_offset 14, -16
 829 0002 4155     		pushq	%r13
 830              		.cfi_def_cfa_offset 24
 831              		.cfi_offset 13, -24
 832 0004 4154     		pushq	%r12
 833              		.cfi_def_cfa_offset 32
 834              		.cfi_offset 12, -32
 835 0006 55       		pushq	%rbp
 836              		.cfi_def_cfa_offset 40
 837              		.cfi_offset 6, -40
 838 0007 4189F4   		movl	%esi, %r12d
 839 000a 53       		pushq	%rbx
 840              		.cfi_def_cfa_offset 48
 841              		.cfi_offset 3, -48
 842 000b 4889FD   		movq	%rdi, %rbp
 843 000e 4863DE   		movslq	%esi, %rbx
 844 0011 4881EC20 		subq	$1056, %rsp
 844      040000
 845              		.cfi_def_cfa_offset 1104
 477:fltk-1.3.4-1/src/Fl_Input_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 846              		.loc 2 477 0
 847 0018 64488B04 		movq	%fs:40, %rax
 847      25280000 
 847      00
 848 0021 48898424 		movq	%rax, 1048(%rsp)
 848      18040000 
 849 0029 31C0     		xorl	%eax, %eax
 850              	.LVL86:
 851              	.LBB971:
 483:fltk-1.3.4-1/src/Fl_Input_.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 852              		.loc 2 483 0
 853 002b 85F6     		testl	%esi, %esi
 854 002d 7E4C     		jle	.L89
 855 002f 4883EB01 		subq	$1, %rbx
 856 0033 4189F5   		movl	%esi, %r13d
 857 0036 EB0B     		jmp	.L93
 858              	.LVL87:
 859 0038 0F1F8400 		.p2align 4,,10
 859      00000000 
 860              		.p2align 3
 861              	.L95:
 862 0040 4889C3   		movq	%rax, %rbx
 863              	.L93:
 864              	.LBB972:
 865              	.LBB973:
 757:fltk-1.3.4-1/src/Fl_Input_.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 758:fltk-1.3.4-1/src/Fl_Input_.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 759:fltk-1.3.4-1/src/Fl_Input_.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 760:fltk-1.3.4-1/src/Fl_Input_.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 761:fltk-1.3.4-1/src/Fl_Input_.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 762:fltk-1.3.4-1/src/Fl_Input_.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 763:fltk-1.3.4-1/src/Fl_Input_.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/src/Fl_Input_.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 765:fltk-1.3.4-1/src/Fl_Input_.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/src/Fl_Input_.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 767:fltk-1.3.4-1/src/Fl_Input_.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 768:fltk-1.3.4-1/src/Fl_Input_.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 769:fltk-1.3.4-1/src/Fl_Input_.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 770:fltk-1.3.4-1/src/Fl_Input_.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771:fltk-1.3.4-1/src/Fl_Input_.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 772:fltk-1.3.4-1/src/Fl_Input_.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 773:fltk-1.3.4-1/src/Fl_Input_.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 774:fltk-1.3.4-1/src/Fl_Input_.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 775:fltk-1.3.4-1/src/Fl_Input_.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 776:fltk-1.3.4-1/src/Fl_Input_.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 777:fltk-1.3.4-1/src/Fl_Input_.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 778:fltk-1.3.4-1/src/Fl_Input_.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 779:fltk-1.3.4-1/src/Fl_Input_.cxx ****  762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 780:fltk-1.3.4-1/src/Fl_Input_.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 781:fltk-1.3.4-1/src/Fl_Input_.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 782:fltk-1.3.4-1/src/Fl_Input_.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 783:fltk-1.3.4-1/src/Fl_Input_.cxx ****  766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 784:fltk-1.3.4-1/src/Fl_Input_.cxx ****  767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callb
 785:fltk-1.3.4-1/src/Fl_Input_.cxx ****  768:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 786:fltk-1.3.4-1/src/Fl_Input_.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 787:fltk-1.3.4-1/src/Fl_Input_.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 788:fltk-1.3.4-1/src/Fl_Input_.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 789:fltk-1.3.4-1/src/Fl_Input_.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 790:fltk-1.3.4-1/src/Fl_Input_.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 791:fltk-1.3.4-1/src/Fl_Input_.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 792:fltk-1.3.4-1/src/Fl_Input_.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 793:fltk-1.3.4-1/src/Fl_Input_.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 794:fltk-1.3.4-1/src/Fl_Input_.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 795:fltk-1.3.4-1/src/Fl_Input_.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 796:fltk-1.3.4-1/src/Fl_Input_.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 797:fltk-1.3.4-1/src/Fl_Input_.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 798:fltk-1.3.4-1/src/Fl_Input_.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 799:fltk-1.3.4-1/src/Fl_Input_.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 800:fltk-1.3.4-1/src/Fl_Input_.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 801:fltk-1.3.4-1/src/Fl_Input_.cxx ****  784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 802:fltk-1.3.4-1/src/Fl_Input_.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 803:fltk-1.3.4-1/src/Fl_Input_.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 804:fltk-1.3.4-1/src/Fl_Input_.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 805:fltk-1.3.4-1/src/Fl_Input_.cxx ****  788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 806:fltk-1.3.4-1/src/Fl_Input_.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 807:fltk-1.3.4-1/src/Fl_Input_.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 808:fltk-1.3.4-1/src/Fl_Input_.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 809:fltk-1.3.4-1/src/Fl_Input_.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 810:fltk-1.3.4-1/src/Fl_Input_.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 811:fltk-1.3.4-1/src/Fl_Input_.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 812:fltk-1.3.4-1/src/Fl_Input_.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 813:fltk-1.3.4-1/src/Fl_Input_.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 814:fltk-1.3.4-1/src/Fl_Input_.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 815:fltk-1.3.4-1/src/Fl_Input_.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 816:fltk-1.3.4-1/src/Fl_Input_.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 817:fltk-1.3.4-1/src/Fl_Input_.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 818:fltk-1.3.4-1/src/Fl_Input_.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 819:fltk-1.3.4-1/src/Fl_Input_.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820:fltk-1.3.4-1/src/Fl_Input_.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 821:fltk-1.3.4-1/src/Fl_Input_.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 822:fltk-1.3.4-1/src/Fl_Input_.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 823:fltk-1.3.4-1/src/Fl_Input_.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 824:fltk-1.3.4-1/src/Fl_Input_.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 825:fltk-1.3.4-1/src/Fl_Input_.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 826:fltk-1.3.4-1/src/Fl_Input_.cxx ****  809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 827:fltk-1.3.4-1/src/Fl_Input_.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 828:fltk-1.3.4-1/src/Fl_Input_.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 829:fltk-1.3.4-1/src/Fl_Input_.cxx ****  812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 830:fltk-1.3.4-1/src/Fl_Input_.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 831:fltk-1.3.4-1/src/Fl_Input_.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 832:fltk-1.3.4-1/src/Fl_Input_.cxx ****  815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that
 833:fltk-1.3.4-1/src/Fl_Input_.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 834:fltk-1.3.4-1/src/Fl_Input_.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 835:fltk-1.3.4-1/src/Fl_Input_.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 836:fltk-1.3.4-1/src/Fl_Input_.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 837:fltk-1.3.4-1/src/Fl_Input_.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 838:fltk-1.3.4-1/src/Fl_Input_.cxx ****  821:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 839:fltk-1.3.4-1/src/Fl_Input_.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 840:fltk-1.3.4-1/src/Fl_Input_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 841:fltk-1.3.4-1/src/Fl_Input_.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 842:fltk-1.3.4-1/src/Fl_Input_.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 843:fltk-1.3.4-1/src/Fl_Input_.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 844:fltk-1.3.4-1/src/Fl_Input_.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 845:fltk-1.3.4-1/src/Fl_Input_.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 846:fltk-1.3.4-1/src/Fl_Input_.cxx ****  829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 847:fltk-1.3.4-1/src/Fl_Input_.cxx ****  830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visibl
 848:fltk-1.3.4-1/src/Fl_Input_.cxx ****  831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 849:fltk-1.3.4-1/src/Fl_Input_.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 850:fltk-1.3.4-1/src/Fl_Input_.cxx ****  833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 851:fltk-1.3.4-1/src/Fl_Input_.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 852:fltk-1.3.4-1/src/Fl_Input_.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 853:fltk-1.3.4-1/src/Fl_Input_.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 854:fltk-1.3.4-1/src/Fl_Input_.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 855:fltk-1.3.4-1/src/Fl_Input_.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 856:fltk-1.3.4-1/src/Fl_Input_.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 857:fltk-1.3.4-1/src/Fl_Input_.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 858:fltk-1.3.4-1/src/Fl_Input_.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 859:fltk-1.3.4-1/src/Fl_Input_.cxx ****  842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on th
 860:fltk-1.3.4-1/src/Fl_Input_.cxx ****  843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 861:fltk-1.3.4-1/src/Fl_Input_.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 862:fltk-1.3.4-1/src/Fl_Input_.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 863:fltk-1.3.4-1/src/Fl_Input_.cxx ****  846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callbac
 864:fltk-1.3.4-1/src/Fl_Input_.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 865:fltk-1.3.4-1/src/Fl_Input_.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 866:fltk-1.3.4-1/src/Fl_Input_.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 867:fltk-1.3.4-1/src/Fl_Input_.cxx ****  850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 868:fltk-1.3.4-1/src/Fl_Input_.cxx ****  851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 869:fltk-1.3.4-1/src/Fl_Input_.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870:fltk-1.3.4-1/src/Fl_Input_.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 871:fltk-1.3.4-1/src/Fl_Input_.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 872:fltk-1.3.4-1/src/Fl_Input_.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 873:fltk-1.3.4-1/src/Fl_Input_.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 874:fltk-1.3.4-1/src/Fl_Input_.cxx ****  857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 875:fltk-1.3.4-1/src/Fl_Input_.cxx ****  858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with de
 876:fltk-1.3.4-1/src/Fl_Input_.cxx ****  859:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 877:fltk-1.3.4-1/src/Fl_Input_.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 878:fltk-1.3.4-1/src/Fl_Input_.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 879:fltk-1.3.4-1/src/Fl_Input_.cxx ****  862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 880:fltk-1.3.4-1/src/Fl_Input_.cxx ****  863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 881:fltk-1.3.4-1/src/Fl_Input_.cxx ****  864:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with ar
 882:fltk-1.3.4-1/src/Fl_Input_.cxx ****  865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget 
 883:fltk-1.3.4-1/src/Fl_Input_.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 884:fltk-1.3.4-1/src/Fl_Input_.cxx ****  867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 885:fltk-1.3.4-1/src/Fl_Input_.cxx ****  868:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 886:fltk-1.3.4-1/src/Fl_Input_.cxx ****  869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(voi
 887:fltk-1.3.4-1/src/Fl_Input_.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 888:fltk-1.3.4-1/src/Fl_Input_.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 889:fltk-1.3.4-1/src/Fl_Input_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 890:fltk-1.3.4-1/src/Fl_Input_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 891:fltk-1.3.4-1/src/Fl_Input_.cxx ****  874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 892:fltk-1.3.4-1/src/Fl_Input_.cxx ****  875:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 893:fltk-1.3.4-1/src/Fl_Input_.cxx ****  876:fltk-1.3.4-1/FL/Fl_Widget.H ****   int test_shortcut();
 894:fltk-1.3.4-1/src/Fl_Input_.cxx ****  877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 895:fltk-1.3.4-1/src/Fl_Input_.cxx ****  878:fltk-1.3.4-1/FL/Fl_Widget.H ****   static unsigned int label_shortcut(const char *t);
 896:fltk-1.3.4-1/src/Fl_Input_.cxx ****  879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 897:fltk-1.3.4-1/src/Fl_Input_.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 898:fltk-1.3.4-1/src/Fl_Input_.cxx ****  881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 899:fltk-1.3.4-1/src/Fl_Input_.cxx ****  882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 900:fltk-1.3.4-1/src/Fl_Input_.cxx ****  883:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _clear_fullscreen() {flags_ &= ~FULLSCREEN;}
 901:fltk-1.3.4-1/src/Fl_Input_.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 902:fltk-1.3.4-1/src/Fl_Input_.cxx ****  885:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if w is a child of this widget.
 903:fltk-1.3.4-1/src/Fl_Input_.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 904:fltk-1.3.4-1/src/Fl_Input_.cxx ****  887:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return Returns 1 if \p w is a child of this widget, or
 905:fltk-1.3.4-1/src/Fl_Input_.cxx ****  888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 906:fltk-1.3.4-1/src/Fl_Input_.cxx ****  889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 907:fltk-1.3.4-1/src/Fl_Input_.cxx ****  890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 908:fltk-1.3.4-1/src/Fl_Input_.cxx ****  891:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 909:fltk-1.3.4-1/src/Fl_Input_.cxx ****  892:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if this widget is a child of \p wgt.
 910:fltk-1.3.4-1/src/Fl_Input_.cxx ****  893:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns 1 if this widget is a child of \p wgt, or is
 911:fltk-1.3.4-1/src/Fl_Input_.cxx ****  894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 912:fltk-1.3.4-1/src/Fl_Input_.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 913:fltk-1.3.4-1/src/Fl_Input_.cxx ****  896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 914:fltk-1.3.4-1/src/Fl_Input_.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 915:fltk-1.3.4-1/src/Fl_Input_.cxx ****  898:fltk-1.3.4-1/FL/Fl_Widget.H ****   int inside(const Fl_Widget* wgt) const {return wgt ? wgt->c
 916:fltk-1.3.4-1/src/Fl_Input_.cxx ****  899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 917:fltk-1.3.4-1/src/Fl_Input_.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 918:fltk-1.3.4-1/src/Fl_Input_.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 919:fltk-1.3.4-1/src/Fl_Input_.cxx ****  902:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 920:fltk-1.3.4-1/src/Fl_Input_.cxx ****  903:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw();
 921:fltk-1.3.4-1/src/Fl_Input_.cxx ****  904:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 922:fltk-1.3.4-1/src/Fl_Input_.cxx ****  905:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the label.
 923:fltk-1.3.4-1/src/Fl_Input_.cxx ****  906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for t
 924:fltk-1.3.4-1/src/Fl_Input_.cxx ****  907:fltk-1.3.4-1/FL/Fl_Widget.H ****      of a widget.
 925:fltk-1.3.4-1/src/Fl_Input_.cxx ****  908:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 926:fltk-1.3.4-1/src/Fl_Input_.cxx ****  909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 927:fltk-1.3.4-1/src/Fl_Input_.cxx ****  910:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 928:fltk-1.3.4-1/src/Fl_Input_.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 929:fltk-1.3.4-1/src/Fl_Input_.cxx ****  912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widge
 930:fltk-1.3.4-1/src/Fl_Input_.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 931:fltk-1.3.4-1/src/Fl_Input_.cxx ****  914:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a bitmap of flags describing the kind of damage
 932:fltk-1.3.4-1/src/Fl_Input_.cxx ****  915:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), clear_damage(uchar)
 933:fltk-1.3.4-1/src/Fl_Input_.cxx ****  916:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 934:fltk-1.3.4-1/src/Fl_Input_.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 935:fltk-1.3.4-1/src/Fl_Input_.cxx ****  918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 936:fltk-1.3.4-1/src/Fl_Input_.cxx ****  919:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears or sets the damage flags.
 937:fltk-1.3.4-1/src/Fl_Input_.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 938:fltk-1.3.4-1/src/Fl_Input_.cxx ****  921:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 939:fltk-1.3.4-1/src/Fl_Input_.cxx ****  922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>a
 940:fltk-1.3.4-1/src/Fl_Input_.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 941:fltk-1.3.4-1/src/Fl_Input_.cxx ****  924:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 942:fltk-1.3.4-1/src/Fl_Input_.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 943:fltk-1.3.4-1/src/Fl_Input_.cxx ****  926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 944:fltk-1.3.4-1/src/Fl_Input_.cxx ****  927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 945:fltk-1.3.4-1/src/Fl_Input_.cxx ****  928:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c new bitmask of damage flags (default: 0)
 946:fltk-1.3.4-1/src/Fl_Input_.cxx ****  929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 947:fltk-1.3.4-1/src/Fl_Input_.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 948:fltk-1.3.4-1/src/Fl_Input_.cxx ****  931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 949:fltk-1.3.4-1/src/Fl_Input_.cxx ****  932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 950:fltk-1.3.4-1/src/Fl_Input_.cxx ****  933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 951:fltk-1.3.4-1/src/Fl_Input_.cxx ****  934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 952:fltk-1.3.4-1/src/Fl_Input_.cxx ****  935:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 953:fltk-1.3.4-1/src/Fl_Input_.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 954:fltk-1.3.4-1/src/Fl_Input_.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 955:fltk-1.3.4-1/src/Fl_Input_.cxx ****  938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 956:fltk-1.3.4-1/src/Fl_Input_.cxx ****  939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 957:fltk-1.3.4-1/src/Fl_Input_.cxx ****  940:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for an area inside the widget.
 958:fltk-1.3.4-1/src/Fl_Input_.cxx ****  941:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 959:fltk-1.3.4-1/src/Fl_Input_.cxx ****  942:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 960:fltk-1.3.4-1/src/Fl_Input_.cxx ****  943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 961:fltk-1.3.4-1/src/Fl_Input_.cxx ****  944:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 962:fltk-1.3.4-1/src/Fl_Input_.cxx ****  945:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 963:fltk-1.3.4-1/src/Fl_Input_.cxx ****  946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 964:fltk-1.3.4-1/src/Fl_Input_.cxx ****  947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 965:fltk-1.3.4-1/src/Fl_Input_.cxx ****  948:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int, Fl_Align) const;
 966:fltk-1.3.4-1/src/Fl_Input_.cxx ****  949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 967:fltk-1.3.4-1/src/Fl_Input_.cxx ****  950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label 
 968:fltk-1.3.4-1/src/Fl_Input_.cxx ****  951:fltk-1.3.4-1/FL/Fl_Widget.H ****       Labels with images will return w() and h() of the image
 969:fltk-1.3.4-1/src/Fl_Input_.cxx ****  952:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 970:fltk-1.3.4-1/src/Fl_Input_.cxx ****  953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more informatio
 971:fltk-1.3.4-1/src/Fl_Input_.cxx ****  954:fltk-1.3.4-1/FL/Fl_Widget.H ****       the arguments \p ww and \p hh and word wrapping
 972:fltk-1.3.4-1/src/Fl_Input_.cxx ****  955:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see fl_measure(const char*, int&, int&, int)
 973:fltk-1.3.4-1/src/Fl_Input_.cxx ****  956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 974:fltk-1.3.4-1/src/Fl_Input_.cxx ****  957:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure_label(int& ww, int& hh) const {label_.measure(
 975:fltk-1.3.4-1/src/Fl_Input_.cxx ****  958:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 976:fltk-1.3.4-1/src/Fl_Input_.cxx ****  959:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* window() const ;
 977:fltk-1.3.4-1/src/Fl_Input_.cxx ****  960:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window() const;
 978:fltk-1.3.4-1/src/Fl_Input_.cxx ****  961:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window_offset(int& xoff, int& yoff) const;
 979:fltk-1.3.4-1/src/Fl_Input_.cxx ****  962:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 980:fltk-1.3.4-1/src/Fl_Input_.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 981:fltk-1.3.4-1/src/Fl_Input_.cxx ****  964:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 982:fltk-1.3.4-1/src/Fl_Input_.cxx ****  965:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 983:fltk-1.3.4-1/src/Fl_Input_.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 984:fltk-1.3.4-1/src/Fl_Input_.cxx ****  967:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 985:fltk-1.3.4-1/src/Fl_Input_.cxx ****  968:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
 986:fltk-1.3.4-1/src/Fl_Input_.cxx ****  969:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Group-specific methods.
 987:fltk-1.3.4-1/src/Fl_Input_.cxx ****  970:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 988:fltk-1.3.4-1/src/Fl_Input_.cxx ****  971:fltk-1.3.4-1/FL/Fl_Widget.H ****       Example:
 989:fltk-1.3.4-1/src/Fl_Input_.cxx ****  972:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 990:fltk-1.3.4-1/src/Fl_Input_.cxx ****  973:fltk-1.3.4-1/FL/Fl_Widget.H ****       void my_callback (Fl_Widget *w, void *) {
 991:fltk-1.3.4-1/src/Fl_Input_.cxx ****  974:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Group *g = w->as_group();
 992:fltk-1.3.4-1/src/Fl_Input_.cxx ****  975:fltk-1.3.4-1/FL/Fl_Widget.H **** 	if (g)
 993:fltk-1.3.4-1/src/Fl_Input_.cxx ****  976:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This group has %d children\n",g->children());
 994:fltk-1.3.4-1/src/Fl_Input_.cxx ****  977:fltk-1.3.4-1/FL/Fl_Widget.H **** 	else
 995:fltk-1.3.4-1/src/Fl_Input_.cxx ****  978:fltk-1.3.4-1/FL/Fl_Widget.H **** 	  printf ("This widget is not a group!\n");
 996:fltk-1.3.4-1/src/Fl_Input_.cxx ****  979:fltk-1.3.4-1/FL/Fl_Widget.H ****       }
 997:fltk-1.3.4-1/src/Fl_Input_.cxx ****  980:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 998:fltk-1.3.4-1/src/Fl_Input_.cxx ****  981:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 999:fltk-1.3.4-1/src/Fl_Input_.cxx ****  982:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Grou
1000:fltk-1.3.4-1/src/Fl_Input_.cxx ****  983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1001:fltk-1.3.4-1/src/Fl_Input_.cxx ****  984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
1002:fltk-1.3.4-1/src/Fl_Input_.cxx ****  985:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1003:fltk-1.3.4-1/src/Fl_Input_.cxx ****  986:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Group* as_group() {return 0;}
1004:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19              		.loc 1 986 0
1005:fltk-1.3.4-1/src/Fl_Input_.cxx ****   20              		.cfi_startproc
1006:fltk-1.3.4-1/src/Fl_Input_.cxx ****   21              	.LVL0:
1007:fltk-1.3.4-1/src/Fl_Input_.cxx ****   22              		.loc 1 986 0
1008:fltk-1.3.4-1/src/Fl_Input_.cxx ****   23 0000 31C0     		xorl	%eax, %eax
1009:fltk-1.3.4-1/src/Fl_Input_.cxx ****   24 0002 C3       		ret
1010:fltk-1.3.4-1/src/Fl_Input_.cxx ****   25              		.cfi_endproc
1011:fltk-1.3.4-1/src/Fl_Input_.cxx ****   26              	.LFE232:
1012:fltk-1.3.4-1/src/Fl_Input_.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
1013:fltk-1.3.4-1/src/Fl_Input_.cxx ****   29              	.LCOLDE0:
1014:fltk-1.3.4-1/src/Fl_Input_.cxx ****   30              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
1015:fltk-1.3.4-1/src/Fl_Input_.cxx ****   31              	.LHOTE0:
1016:fltk-1.3.4-1/src/Fl_Input_.cxx ****   32              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
1017:fltk-1.3.4-1/src/Fl_Input_.cxx ****   33              		.align 2
1018:fltk-1.3.4-1/src/Fl_Input_.cxx ****   34              	.LCOLDB1:
1019:fltk-1.3.4-1/src/Fl_Input_.cxx ****   35              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
1020:fltk-1.3.4-1/src/Fl_Input_.cxx ****   36              	.LHOTB1:
1021:fltk-1.3.4-1/src/Fl_Input_.cxx ****   37              		.align 2
1022:fltk-1.3.4-1/src/Fl_Input_.cxx ****   38              		.p2align 4,,15
1023:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39              		.weak	_ZN9Fl_Widget9as_windowEv
1024:fltk-1.3.4-1/src/Fl_Input_.cxx ****   41              	_ZN9Fl_Widget9as_windowEv:
1025:fltk-1.3.4-1/src/Fl_Input_.cxx ****   42              	.LFB233:
1026:fltk-1.3.4-1/src/Fl_Input_.cxx ****  987:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1027:fltk-1.3.4-1/src/Fl_Input_.cxx ****  988:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Window pointer if this widget is an Fl_Wi
1028:fltk-1.3.4-1/src/Fl_Input_.cxx ****  989:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1029:fltk-1.3.4-1/src/Fl_Input_.cxx ****  990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
1030:fltk-1.3.4-1/src/Fl_Input_.cxx ****  991:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Window. If 
1031:fltk-1.3.4-1/src/Fl_Input_.cxx ****  992:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
1032:fltk-1.3.4-1/src/Fl_Input_.cxx ****  993:fltk-1.3.4-1/FL/Fl_Widget.H ****       and you can use the returned pointer to access its chil
1033:fltk-1.3.4-1/src/Fl_Input_.cxx ****  994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
1034:fltk-1.3.4-1/src/Fl_Input_.cxx ****  995:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1035:fltk-1.3.4-1/src/Fl_Input_.cxx ****  996:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Wind
1036:fltk-1.3.4-1/src/Fl_Input_.cxx ****  997:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1037:fltk-1.3.4-1/src/Fl_Input_.cxx ****  998:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_gl_window()
1038:fltk-1.3.4-1/src/Fl_Input_.cxx ****  999:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1039:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1000:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Window* as_window() {return 0;}
1040:fltk-1.3.4-1/src/Fl_Input_.cxx ****   43              		.loc 1 1000 0
1041:fltk-1.3.4-1/src/Fl_Input_.cxx ****   44              		.cfi_startproc
1042:fltk-1.3.4-1/src/Fl_Input_.cxx ****   45              	.LVL1:
1043:fltk-1.3.4-1/src/Fl_Input_.cxx ****   46              		.loc 1 1000 0
1044:fltk-1.3.4-1/src/Fl_Input_.cxx ****   47 0000 31C0     		xorl	%eax, %eax
1045:fltk-1.3.4-1/src/Fl_Input_.cxx ****   48 0002 C3       		ret
1046:fltk-1.3.4-1/src/Fl_Input_.cxx ****   49              		.cfi_endproc
1047:fltk-1.3.4-1/src/Fl_Input_.cxx ****   50              	.LFE233:
1048:fltk-1.3.4-1/src/Fl_Input_.cxx ****   52              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
1049:fltk-1.3.4-1/src/Fl_Input_.cxx ****   53              	.LCOLDE1:
1050:fltk-1.3.4-1/src/Fl_Input_.cxx ****   54              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
1051:fltk-1.3.4-1/src/Fl_Input_.cxx ****   55              	.LHOTE1:
1052:fltk-1.3.4-1/src/Fl_Input_.cxx ****   56              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
1053:fltk-1.3.4-1/src/Fl_Input_.cxx ****   57              		.align 2
1054:fltk-1.3.4-1/src/Fl_Input_.cxx ****   58              	.LCOLDB2:
1055:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
1056:fltk-1.3.4-1/src/Fl_Input_.cxx ****   60              	.LHOTB2:
1057:fltk-1.3.4-1/src/Fl_Input_.cxx ****   61              		.align 2
1058:fltk-1.3.4-1/src/Fl_Input_.cxx ****   62              		.p2align 4,,15
1059:fltk-1.3.4-1/src/Fl_Input_.cxx ****   63              		.weak	_ZN9Fl_Widget12as_gl_windowEv
1060:fltk-1.3.4-1/src/Fl_Input_.cxx ****   65              	_ZN9Fl_Widget12as_gl_windowEv:
1061:fltk-1.3.4-1/src/Fl_Input_.cxx ****   66              	.LFB234:
1062:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1001:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1063:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1002:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Gl_Window pointer if this widget is an Fl
1064:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1065:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1004:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
1066:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1005:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Gl_Window. 
1067:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
1068:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1007:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1069:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1008:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Gl_W
1070:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1009:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
1071:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1010:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_window()
1072:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1073:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1012:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual class Fl_Gl_Window* as_gl_window() {return 0;}
1074:fltk-1.3.4-1/src/Fl_Input_.cxx ****   67              		.loc 1 1012 0
1075:fltk-1.3.4-1/src/Fl_Input_.cxx ****   68              		.cfi_startproc
1076:fltk-1.3.4-1/src/Fl_Input_.cxx ****   69              	.LVL2:
1077:fltk-1.3.4-1/src/Fl_Input_.cxx ****   70              		.loc 1 1012 0
1078:fltk-1.3.4-1/src/Fl_Input_.cxx ****   71 0000 31C0     		xorl	%eax, %eax
1079:fltk-1.3.4-1/src/Fl_Input_.cxx ****   72 0002 C3       		ret
1080:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73              		.cfi_endproc
1081:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74              	.LFE234:
1082:fltk-1.3.4-1/src/Fl_Input_.cxx ****   76              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
1083:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77              	.LCOLDE2:
1084:fltk-1.3.4-1/src/Fl_Input_.cxx ****   78              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
1085:fltk-1.3.4-1/src/Fl_Input_.cxx ****   79              	.LHOTE2:
1086:fltk-1.3.4-1/src/Fl_Input_.cxx ****   80              		.section	.text.unlikely._ZL17strict_word_startPKcii,"ax",@progbits
1087:fltk-1.3.4-1/src/Fl_Input_.cxx ****   81              	.LCOLDB3:
1088:fltk-1.3.4-1/src/Fl_Input_.cxx ****   82              		.section	.text._ZL17strict_word_startPKcii,"ax",@progbits
1089:fltk-1.3.4-1/src/Fl_Input_.cxx ****   83              	.LHOTB3:
1090:fltk-1.3.4-1/src/Fl_Input_.cxx ****   84              		.p2align 4,,15
1091:fltk-1.3.4-1/src/Fl_Input_.cxx ****   86              	_ZL17strict_word_startPKcii:
1092:fltk-1.3.4-1/src/Fl_Input_.cxx ****   87              	.LFB531:
1093:fltk-1.3.4-1/src/Fl_Input_.cxx ****   88              		.file 2 "fltk-1.3.4-1/src/Fl_Input_.cxx"
1094:fltk-1.3.4-1/src/Fl_Input_.cxx ****    1:fltk-1.3.4-1/src/Fl_Input_.cxx ****    1              		.file	"Fl_Input_.cxx"
1095:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2              		.text
1096:fltk-1.3.4-1/src/Fl_Input_.cxx ****    3:fltk-1.3.4-1/src/Fl_Input_.cxx ****    3              	.Ltext0:
1097:fltk-1.3.4-1/src/Fl_Input_.cxx ****    4:fltk-1.3.4-1/src/Fl_Input_.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8
1098:fltk-1.3.4-1/src/Fl_Input_.cxx ****    5:fltk-1.3.4-1/src/Fl_Input_.cxx ****    5              		.align 2
1099:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6              	.LCOLDB0:
1100:fltk-1.3.4-1/src/Fl_Input_.cxx ****    7:fltk-1.3.4-1/src/Fl_Input_.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupE
1101:fltk-1.3.4-1/src/Fl_Input_.cxx ****    8:fltk-1.3.4-1/src/Fl_Input_.cxx ****    8              	.LHOTB0:
1102:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9              		.align 2
1103:fltk-1.3.4-1/src/Fl_Input_.cxx ****   10:fltk-1.3.4-1/src/Fl_Input_.cxx ****   10              		.p2align 4,,15
1104:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8
1105:fltk-1.3.4-1/src/Fl_Input_.cxx ****   12:fltk-1.3.4-1/src/Fl_Input_.cxx ****   12              	.Ltext_cold0:
1106:fltk-1.3.4-1/src/Fl_Input_.cxx ****   13:fltk-1.3.4-1/src/Fl_Input_.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupE
1107:fltk-1.3.4-1/src/Fl_Input_.cxx ****   14:fltk-1.3.4-1/src/Fl_Input_.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
1108:fltk-1.3.4-1/src/Fl_Input_.cxx ****   15:fltk-1.3.4-1/src/Fl_Input_.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
1109:fltk-1.3.4-1/src/Fl_Input_.cxx ****   16:fltk-1.3.4-1/src/Fl_Input_.cxx ****   17              	.LFB232:
1110:fltk-1.3.4-1/src/Fl_Input_.cxx ****   17:fltk-1.3.4-1/src/Fl_Input_.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
1111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   18:fltk-1.3.4-1/src/Fl_Input_.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
1112:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H
1113:fltk-1.3.4-1/src/Fl_Input_.cxx ****   20:fltk-1.3.4-1/src/Fl_Input_.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
1114:fltk-1.3.4-1/src/Fl_Input_.cxx ****   21:fltk-1.3.4-1/src/Fl_Input_.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header fil
1115:fltk-1.3.4-1/src/Fl_Input_.cxx ****   22:fltk-1.3.4-1/src/Fl_Input_.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
1116:fltk-1.3.4-1/src/Fl_Input_.cxx ****   23:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-20
1117:fltk-1.3.4-1/src/Fl_Input_.cxx ****   24:fltk-1.3.4-1/src/Fl_Input_.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
1118:fltk-1.3.4-1/src/Fl_Input_.cxx ****   25:fltk-1.3.4-1/src/Fl_Input_.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is f
1119:fltk-1.3.4-1/src/Fl_Input_.cxx ****   26:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING
1120:fltk-1.3.4-1/src/Fl_Input_.cxx ****   27:fltk-1.3.4-1/src/Fl_Input_.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing o
1121:fltk-1.3.4-1/src/Fl_Input_.cxx ****   28:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
1122:fltk-1.3.4-1/src/Fl_Input_.cxx ****   29:fltk-1.3.4-1/src/Fl_Input_.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fl
1123:fltk-1.3.4-1/src/Fl_Input_.cxx ****   30:fltk-1.3.4-1/src/Fl_Input_.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
1124:fltk-1.3.4-1/src/Fl_Input_.cxx ****   31:fltk-1.3.4-1/src/Fl_Input_.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all
1125:fltk-1.3.4-1/src/Fl_Input_.cxx ****   32:fltk-1.3.4-1/src/Fl_Input_.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
1126:fltk-1.3.4-1/src/Fl_Input_.cxx ****   33:fltk-1.3.4-1/src/Fl_Input_.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fl
1127:fltk-1.3.4-1/src/Fl_Input_.cxx ****   34:fltk-1.3.4-1/src/Fl_Input_.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
1128:fltk-1.3.4-1/src/Fl_Input_.cxx ****   35:fltk-1.3.4-1/src/Fl_Input_.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1129:fltk-1.3.4-1/src/Fl_Input_.cxx ****   36:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
1130:fltk-1.3.4-1/src/Fl_Input_.cxx ****   37:fltk-1.3.4-1/src/Fl_Input_.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Lab
1131:fltk-1.3.4-1/src/Fl_Input_.cxx ****   38:fltk-1.3.4-1/src/Fl_Input_.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1132:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39:fltk-1.3.4-1/src/Fl_Input_.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
1133:fltk-1.3.4-1/src/Fl_Input_.cxx ****   40:fltk-1.3.4-1/src/Fl_Input_.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
1134:fltk-1.3.4-1/src/Fl_Input_.cxx ****   41:fltk-1.3.4-1/src/Fl_Input_.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1135:fltk-1.3.4-1/src/Fl_Input_.cxx ****   42:fltk-1.3.4-1/src/Fl_Input_.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumeratio
1136:fltk-1.3.4-1/src/Fl_Input_.cxx ****   43:fltk-1.3.4-1/src/Fl_Input_.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1137:fltk-1.3.4-1/src/Fl_Input_.cxx ****   44:fltk-1.3.4-1/src/Fl_Input_.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
1138:fltk-1.3.4-1/src/Fl_Input_.cxx ****   45:fltk-1.3.4-1/src/Fl_Input_.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl
1139:fltk-1.3.4-1/src/Fl_Input_.cxx ****   46:fltk-1.3.4-1/src/Fl_Input_.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
1140:fltk-1.3.4-1/src/Fl_Input_.cxx ****   47:fltk-1.3.4-1/src/Fl_Input_.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
1141:fltk-1.3.4-1/src/Fl_Input_.cxx ****   48:fltk-1.3.4-1/src/Fl_Input_.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__
1142:fltk-1.3.4-1/src/Fl_Input_.cxx ****   49:fltk-1.3.4-1/src/Fl_Input_.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
1143:fltk-1.3.4-1/src/Fl_Input_.cxx ****   50:fltk-1.3.4-1/src/Fl_Input_.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
1144:fltk-1.3.4-1/src/Fl_Input_.cxx ****   51:fltk-1.3.4-1/src/Fl_Input_.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h> 
1145:fltk-1.3.4-1/src/Fl_Input_.cxx ****   52:fltk-1.3.4-1/src/Fl_Input_.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
1146:fltk-1.3.4-1/src/Fl_Input_.cxx ****   53:fltk-1.3.4-1/src/Fl_Input_.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_
1147:fltk-1.3.4-1/src/Fl_Input_.cxx ****   54:fltk-1.3.4-1/src/Fl_Input_.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl
1148:fltk-1.3.4-1/src/Fl_Input_.cxx ****   55:fltk-1.3.4-1/src/Fl_Input_.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
1149:fltk-1.3.4-1/src/Fl_Input_.cxx ****   56:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intp
1150:fltk-1.3.4-1/src/Fl_Input_.cxx ****   57:fltk-1.3.4-1/src/Fl_Input_.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned lon
1151:fltk-1.3.4-1/src/Fl_Input_.cxx ****   58:fltk-1.3.4-1/src/Fl_Input_.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
1152:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/src/Fl_Input_.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1153:fltk-1.3.4-1/src/Fl_Input_.cxx ****   60:fltk-1.3.4-1/src/Fl_Input_.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
1154:fltk-1.3.4-1/src/Fl_Input_.cxx ****   61:fltk-1.3.4-1/src/Fl_Input_.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
1155:fltk-1.3.4-1/src/Fl_Input_.cxx ****   62:fltk-1.3.4-1/src/Fl_Input_.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
1156:fltk-1.3.4-1/src/Fl_Input_.cxx ****   63:fltk-1.3.4-1/src/Fl_Input_.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
1157:fltk-1.3.4-1/src/Fl_Input_.cxx ****   64:fltk-1.3.4-1/src/Fl_Input_.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1158:fltk-1.3.4-1/src/Fl_Input_.cxx ****   65:fltk-1.3.4-1/src/Fl_Input_.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback
1159:fltk-1.3.4-1/src/Fl_Input_.cxx ****   66:fltk-1.3.4-1/src/Fl_Input_.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Cal
1160:fltk-1.3.4-1/src/Fl_Input_.cxx ****   67:fltk-1.3.4-1/src/Fl_Input_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback
1161:fltk-1.3.4-1/src/Fl_Input_.cxx ****   68:fltk-1.3.4-1/src/Fl_Input_.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback*
1162:fltk-1.3.4-1/src/Fl_Input_.cxx ****   69:fltk-1.3.4-1/src/Fl_Input_.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter ca
1163:fltk-1.3.4-1/src/Fl_Input_.cxx ****   70:fltk-1.3.4-1/src/Fl_Input_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Cal
1164:fltk-1.3.4-1/src/Fl_Input_.cxx ****   71:fltk-1.3.4-1/src/Fl_Input_.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type de
1165:fltk-1.3.4-1/src/Fl_Input_.cxx ****   72:fltk-1.3.4-1/src/Fl_Input_.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Cal
1166:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/src/Fl_Input_.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1167:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74:fltk-1.3.4-1/src/Fl_Input_.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stor
1168:fltk-1.3.4-1/src/Fl_Input_.cxx ****   75:fltk-1.3.4-1/src/Fl_Input_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1169:fltk-1.3.4-1/src/Fl_Input_.cxx ****   76:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is a
1170:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77:fltk-1.3.4-1/src/Fl_Input_.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way w
1171:fltk-1.3.4-1/src/Fl_Input_.cxx ****   78:fltk-1.3.4-1/src/Fl_Input_.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar 
1172:fltk-1.3.4-1/src/Fl_Input_.cxx ****   79:fltk-1.3.4-1/src/Fl_Input_.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface 
1173:fltk-1.3.4-1/src/Fl_Input_.cxx ****   80:fltk-1.3.4-1/src/Fl_Input_.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, t
1174:fltk-1.3.4-1/src/Fl_Input_.cxx ****   81:fltk-1.3.4-1/src/Fl_Input_.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
1175:fltk-1.3.4-1/src/Fl_Input_.cxx ****   82:fltk-1.3.4-1/src/Fl_Input_.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_
1176:fltk-1.3.4-1/src/Fl_Input_.cxx ****   83:fltk-1.3.4-1/src/Fl_Input_.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
1177:fltk-1.3.4-1/src/Fl_Input_.cxx ****   84:fltk-1.3.4-1/src/Fl_Input_.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
1178:fltk-1.3.4-1/src/Fl_Input_.cxx ****   85:fltk-1.3.4-1/src/Fl_Input_.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image
1179:fltk-1.3.4-1/src/Fl_Input_.cxx ****   86:fltk-1.3.4-1/src/Fl_Input_.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
1180:fltk-1.3.4-1/src/Fl_Input_.cxx ****   87:fltk-1.3.4-1/src/Fl_Input_.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image
1181:fltk-1.3.4-1/src/Fl_Input_.cxx ****   88:fltk-1.3.4-1/src/Fl_Input_.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
1182:fltk-1.3.4-1/src/Fl_Input_.cxx ****   89:fltk-1.3.4-1/src/Fl_Input_.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font use
1183:fltk-1.3.4-1/src/Fl_Input_.cxx ****   90:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
1184:fltk-1.3.4-1/src/Fl_Input_.cxx ****   91:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label 
1185:fltk-1.3.4-1/src/Fl_Input_.cxx ****   92:fltk-1.3.4-1/src/Fl_Input_.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
1186:fltk-1.3.4-1/src/Fl_Input_.cxx ****   93:fltk-1.3.4-1/src/Fl_Input_.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
1187:fltk-1.3.4-1/src/Fl_Input_.cxx ****   94:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
1188:fltk-1.3.4-1/src/Fl_Input_.cxx ****   95:fltk-1.3.4-1/src/Fl_Input_.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of l
1189:fltk-1.3.4-1/src/Fl_Input_.cxx ****   96:fltk-1.3.4-1/src/Fl_Input_.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
1190:fltk-1.3.4-1/src/Fl_Input_.cxx ****   97:fltk-1.3.4-1/src/Fl_Input_.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label.
1191:fltk-1.3.4-1/src/Fl_Input_.cxx ****   98:fltk-1.3.4-1/src/Fl_Input_.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
1192:fltk-1.3.4-1/src/Fl_Input_.cxx ****   99:fltk-1.3.4-1/src/Fl_Input_.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1193:fltk-1.3.4-1/src/Fl_Input_.cxx ****  100:fltk-1.3.4-1/src/Fl_Input_.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the labe
1194:fltk-1.3.4-1/src/Fl_Input_.cxx ****  101:fltk-1.3.4-1/src/Fl_Input_.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,
1195:fltk-1.3.4-1/src/Fl_Input_.cxx ****  102:fltk-1.3.4-1/src/Fl_Input_.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &
1196:fltk-1.3.4-1/src/Fl_Input_.cxx ****  103:fltk-1.3.4-1/src/Fl_Input_.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
1197:fltk-1.3.4-1/src/Fl_Input_.cxx ****  104:fltk-1.3.4-1/src/Fl_Input_.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1198:fltk-1.3.4-1/src/Fl_Input_.cxx ****  105:fltk-1.3.4-1/src/Fl_Input_.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1199:fltk-1.3.4-1/src/Fl_Input_.cxx ****  106:fltk-1.3.4-1/src/Fl_Input_.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the
1200:fltk-1.3.4-1/src/Fl_Input_.cxx ****  107:fltk-1.3.4-1/src/Fl_Input_.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
1201:fltk-1.3.4-1/src/Fl_Input_.cxx ****  108:fltk-1.3.4-1/src/Fl_Input_.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create
1202:fltk-1.3.4-1/src/Fl_Input_.cxx ****  109:fltk-1.3.4-1/src/Fl_Input_.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can 
1203:fltk-1.3.4-1/src/Fl_Input_.cxx ****  110:fltk-1.3.4-1/src/Fl_Input_.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1204:fltk-1.3.4-1/src/Fl_Input_.cxx ****  111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" a
1205:fltk-1.3.4-1/src/Fl_Input_.cxx ****  112:fltk-1.3.4-1/src/Fl_Input_.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented 
1206:fltk-1.3.4-1/src/Fl_Input_.cxx ****  113:fltk-1.3.4-1/src/Fl_Input_.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fie
1207:fltk-1.3.4-1/src/Fl_Input_.cxx ****  114:fltk-1.3.4-1/src/Fl_Input_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods 
1208:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/src/Fl_Input_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even 
1209:fltk-1.3.4-1/src/Fl_Input_.cxx ****  116:fltk-1.3.4-1/src/Fl_Input_.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to cal
1210:fltk-1.3.4-1/src/Fl_Input_.cxx ****  117:fltk-1.3.4-1/src/Fl_Input_.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
1211:fltk-1.3.4-1/src/Fl_Input_.cxx ****  118:fltk-1.3.4-1/src/Fl_Input_.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_W
1212:fltk-1.3.4-1/src/Fl_Input_.cxx ****  119:fltk-1.3.4-1/src/Fl_Input_.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Gr
1213:fltk-1.3.4-1/src/Fl_Input_.cxx ****  120:fltk-1.3.4-1/src/Fl_Input_.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  121:fltk-1.3.4-1/src/Fl_Input_.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
1215:fltk-1.3.4-1/src/Fl_Input_.cxx ****  122:fltk-1.3.4-1/src/Fl_Input_.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callb
1216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/src/Fl_Input_.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
1217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
1218:fltk-1.3.4-1/src/Fl_Input_.cxx ****  125:fltk-1.3.4-1/src/Fl_Input_.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
1219:fltk-1.3.4-1/src/Fl_Input_.cxx ****  126:fltk-1.3.4-1/src/Fl_Input_.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags
1220:fltk-1.3.4-1/src/Fl_Input_.cxx ****  127:fltk-1.3.4-1/src/Fl_Input_.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
1221:fltk-1.3.4-1/src/Fl_Input_.cxx ****  128:fltk-1.3.4-1/src/Fl_Input_.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
1222:fltk-1.3.4-1/src/Fl_Input_.cxx ****  129:fltk-1.3.4-1/src/Fl_Input_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
1223:fltk-1.3.4-1/src/Fl_Input_.cxx ****  130:fltk-1.3.4-1/src/Fl_Input_.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
1224:fltk-1.3.4-1/src/Fl_Input_.cxx ****  131:fltk-1.3.4-1/src/Fl_Input_.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
1225:fltk-1.3.4-1/src/Fl_Input_.cxx ****  132:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
1226:fltk-1.3.4-1/src/Fl_Input_.cxx ****  133:fltk-1.3.4-1/src/Fl_Input_.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1227:fltk-1.3.4-1/src/Fl_Input_.cxx ****  134:fltk-1.3.4-1/src/Fl_Input_.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *toolti
1228:fltk-1.3.4-1/src/Fl_Input_.cxx ****  135:fltk-1.3.4-1/src/Fl_Input_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1229:fltk-1.3.4-1/src/Fl_Input_.cxx ****  136:fltk-1.3.4-1/src/Fl_Input_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented 
1230:fltk-1.3.4-1/src/Fl_Input_.cxx ****  137:fltk-1.3.4-1/src/Fl_Input_.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl
1231:fltk-1.3.4-1/src/Fl_Input_.cxx ****  138:fltk-1.3.4-1/src/Fl_Input_.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented 
1232:fltk-1.3.4-1/src/Fl_Input_.cxx ****  139:fltk-1.3.4-1/src/Fl_Input_.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operato
1233:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1234:fltk-1.3.4-1/src/Fl_Input_.cxx ****  141:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
1235:fltk-1.3.4-1/src/Fl_Input_.cxx ****  142:fltk-1.3.4-1/src/Fl_Input_.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1236:fltk-1.3.4-1/src/Fl_Input_.cxx ****  143:fltk-1.3.4-1/src/Fl_Input_.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widg
1237:fltk-1.3.4-1/src/Fl_Input_.cxx ****  144:fltk-1.3.4-1/src/Fl_Input_.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1238:fltk-1.3.4-1/src/Fl_Input_.cxx ****  145:fltk-1.3.4-1/src/Fl_Input_.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget 
1239:fltk-1.3.4-1/src/Fl_Input_.cxx ****  146:fltk-1.3.4-1/src/Fl_Input_.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching publi
1240:fltk-1.3.4-1/src/Fl_Input_.cxx ****  147:fltk-1.3.4-1/src/Fl_Input_.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional va
1241:fltk-1.3.4-1/src/Fl_Input_.cxx ****  148:fltk-1.3.4-1/src/Fl_Input_.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
1242:fltk-1.3.4-1/src/Fl_Input_.cxx ****  149:fltk-1.3.4-1/src/Fl_Input_.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, 
1243:fltk-1.3.4-1/src/Fl_Input_.cxx ****  150:fltk-1.3.4-1/src/Fl_Input_.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, 
1244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  151:fltk-1.3.4-1/src/Fl_Input_.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] lab
1245:fltk-1.3.4-1/src/Fl_Input_.cxx ****  152:fltk-1.3.4-1/src/Fl_Input_.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1246:fltk-1.3.4-1/src/Fl_Input_.cxx ****  153:fltk-1.3.4-1/src/Fl_Input_.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, i
1247:fltk-1.3.4-1/src/Fl_Input_.cxx ****  154:fltk-1.3.4-1/src/Fl_Input_.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1248:fltk-1.3.4-1/src/Fl_Input_.cxx ****  155:fltk-1.3.4-1/src/Fl_Input_.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
1249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  156:fltk-1.3.4-1/src/Fl_Input_.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ 
1250:fltk-1.3.4-1/src/Fl_Input_.cxx ****  157:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
1251:fltk-1.3.4-1/src/Fl_Input_.cxx ****  158:fltk-1.3.4-1/src/Fl_Input_.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ 
1252:fltk-1.3.4-1/src/Fl_Input_.cxx ****  159:fltk-1.3.4-1/src/Fl_Input_.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
1253:fltk-1.3.4-1/src/Fl_Input_.cxx ****  160:fltk-1.3.4-1/src/Fl_Input_.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ 
1254:fltk-1.3.4-1/src/Fl_Input_.cxx ****  161:fltk-1.3.4-1/src/Fl_Input_.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
1255:fltk-1.3.4-1/src/Fl_Input_.cxx ****  162:fltk-1.3.4-1/src/Fl_Input_.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ 
1256:fltk-1.3.4-1/src/Fl_Input_.cxx ****  163:fltk-1.3.4-1/src/Fl_Input_.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widge
1257:fltk-1.3.4-1/src/Fl_Input_.cxx ****  164:fltk-1.3.4-1/src/Fl_Input_.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags
1258:fltk-1.3.4-1/src/Fl_Input_.cxx ****  165:fltk-1.3.4-1/src/Fl_Input_.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in
1259:fltk-1.3.4-1/src/Fl_Input_.cxx ****  166:fltk-1.3.4-1/src/Fl_Input_.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsi
1260:fltk-1.3.4-1/src/Fl_Input_.cxx ****  167:fltk-1.3.4-1/src/Fl_Input_.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag 
1261:fltk-1.3.4-1/src/Fl_Input_.cxx ****  168:fltk-1.3.4-1/src/Fl_Input_.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(un
1262:fltk-1.3.4-1/src/Fl_Input_.cxx ****  169:fltk-1.3.4-1/src/Fl_Input_.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible
1263:fltk-1.3.4-1/src/Fl_Input_.cxx ****  170:fltk-1.3.4-1/src/Fl_Input_.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate()
1264:fltk-1.3.4-1/src/Fl_Input_.cxx ****  171:fltk-1.3.4-1/src/Fl_Input_.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
1265:fltk-1.3.4-1/src/Fl_Input_.cxx ****  172:fltk-1.3.4-1/src/Fl_Input_.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
1266:fltk-1.3.4-1/src/Fl_Input_.cxx ****  173:fltk-1.3.4-1/src/Fl_Input_.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE    
1267:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/src/Fl_Input_.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE   
1268:fltk-1.3.4-1/src/Fl_Input_.cxx ****  175:fltk-1.3.4-1/src/Fl_Input_.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT      
1269:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/src/Fl_Input_.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER    
1270:fltk-1.3.4-1/src/Fl_Input_.cxx ****  177:fltk-1.3.4-1/src/Fl_Input_.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITI
1271:fltk-1.3.4-1/src/Fl_Input_.cxx ****  178:fltk-1.3.4-1/src/Fl_Input_.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL   
1272:fltk-1.3.4-1/src/Fl_Input_.cxx ****  179:fltk-1.3.4-1/src/Fl_Input_.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LAB
1273:fltk-1.3.4-1/src/Fl_Input_.cxx ****  180:fltk-1.3.4-1/src/Fl_Input_.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED     
1274:fltk-1.3.4-1/src/Fl_Input_.cxx ****  181:fltk-1.3.4-1/src/Fl_Input_.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE    
1275:fltk-1.3.4-1/src/Fl_Input_.cxx ****  182:fltk-1.3.4-1/src/Fl_Input_.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCU
1276:fltk-1.3.4-1/src/Fl_Input_.cxx ****  183:fltk-1.3.4-1/src/Fl_Input_.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL
1277:fltk-1.3.4-1/src/Fl_Input_.cxx ****  184:fltk-1.3.4-1/src/Fl_Input_.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDRE
1278:fltk-1.3.4-1/src/Fl_Input_.cxx ****  185:fltk-1.3.4-1/src/Fl_Input_.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW 
1279:fltk-1.3.4-1/src/Fl_Input_.cxx ****  186:fltk-1.3.4-1/src/Fl_Input_.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WIND
1280:fltk-1.3.4-1/src/Fl_Input_.cxx ****  187:fltk-1.3.4-1/src/Fl_Input_.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL       
1281:fltk-1.3.4-1/src/Fl_Input_.cxx ****  188:fltk-1.3.4-1/src/Fl_Input_.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY  
1282:fltk-1.3.4-1/src/Fl_Input_.cxx ****  189:fltk-1.3.4-1/src/Fl_Input_.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATI
1283:fltk-1.3.4-1/src/Fl_Input_.cxx ****  190:fltk-1.3.4-1/src/Fl_Input_.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLT
1284:fltk-1.3.4-1/src/Fl_Input_.cxx ****  191:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN  
1285:fltk-1.3.4-1/src/Fl_Input_.cxx ****  192:fltk-1.3.4-1/src/Fl_Input_.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCE
1286:fltk-1.3.4-1/src/Fl_Input_.cxx ****  193:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space fo
1287:fltk-1.3.4-1/src/Fl_Input_.cxx ****  194:fltk-1.3.4-1/src/Fl_Input_.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3   
1288:fltk-1.3.4-1/src/Fl_Input_.cxx ****  195:fltk-1.3.4-1/src/Fl_Input_.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2   
1289:fltk-1.3.4-1/src/Fl_Input_.cxx ****  196:fltk-1.3.4-1/src/Fl_Input_.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1   
1290:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/src/Fl_Input_.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
1291:fltk-1.3.4-1/src/Fl_Input_.cxx ****  198:fltk-1.3.4-1/src/Fl_Input_.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() co
1292:fltk-1.3.4-1/src/Fl_Input_.cxx ****  199:fltk-1.3.4-1/src/Fl_Input_.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_B
1293:fltk-1.3.4-1/src/Fl_Input_.cxx ****  200:fltk-1.3.4-1/src/Fl_Input_.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_B
1294:fltk-1.3.4-1/src/Fl_Input_.cxx ****  201:fltk-1.3.4-1/src/Fl_Input_.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop
1295:fltk-1.3.4-1/src/Fl_Input_.cxx ****  202:fltk-1.3.4-1/src/Fl_Input_.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus 
1296:fltk-1.3.4-1/src/Fl_Input_.cxx ****  203:fltk-1.3.4-1/src/Fl_Input_.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() 
1297:fltk-1.3.4-1/src/Fl_Input_.cxx ****  204:fltk-1.3.4-1/src/Fl_Input_.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl
1298:fltk-1.3.4-1/src/Fl_Input_.cxx ****  205:fltk-1.3.4-1/src/Fl_Input_.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() 
1299:fltk-1.3.4-1/src/Fl_Input_.cxx ****  206:fltk-1.3.4-1/src/Fl_Input_.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(in
1300:fltk-1.3.4-1/src/Fl_Input_.cxx ****  207:fltk-1.3.4-1/src/Fl_Input_.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1301:fltk-1.3.4-1/src/Fl_Input_.cxx ****  208:fltk-1.3.4-1/src/Fl_Input_.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
1302:fltk-1.3.4-1/src/Fl_Input_.cxx ****  209:fltk-1.3.4-1/src/Fl_Input_.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1303:fltk-1.3.4-1/src/Fl_Input_.cxx ****  210:fltk-1.3.4-1/src/Fl_Input_.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the w
1304:fltk-1.3.4-1/src/Fl_Input_.cxx ****  211:fltk-1.3.4-1/src/Fl_Input_.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying sin
1305:fltk-1.3.4-1/src/Fl_Input_.cxx ****  212:fltk-1.3.4-1/src/Fl_Input_.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the pa
1306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  213:fltk-1.3.4-1/src/Fl_Input_.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in 
1307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
1308:fltk-1.3.4-1/src/Fl_Input_.cxx ****  215:fltk-1.3.4-1/src/Fl_Input_.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.
1309:fltk-1.3.4-1/src/Fl_Input_.cxx ****  216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it i
1310:fltk-1.3.4-1/src/Fl_Input_.cxx ****  217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1311:fltk-1.3.4-1/src/Fl_Input_.cxx ****  218:fltk-1.3.4-1/src/Fl_Input_.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget
1312:fltk-1.3.4-1/src/Fl_Input_.cxx ****  219:fltk-1.3.4-1/src/Fl_Input_.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1313:fltk-1.3.4-1/src/Fl_Input_.cxx ****  220:fltk-1.3.4-1/src/Fl_Input_.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widg
1314:fltk-1.3.4-1/src/Fl_Input_.cxx ****  221:fltk-1.3.4-1/src/Fl_Input_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call thi
1315:fltk-1.3.4-1/src/Fl_Input_.cxx ****  222:fltk-1.3.4-1/src/Fl_Input_.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If you
1316:fltk-1.3.4-1/src/Fl_Input_.cxx ****  223:fltk-1.3.4-1/src/Fl_Input_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
1317:fltk-1.3.4-1/src/Fl_Input_.cxx ****  224:fltk-1.3.4-1/src/Fl_Input_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1318:fltk-1.3.4-1/src/Fl_Input_.cxx ****  225:fltk-1.3.4-1/src/Fl_Input_.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this 
1319:fltk-1.3.4-1/src/Fl_Input_.cxx ****  226:fltk-1.3.4-1/src/Fl_Input_.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1320:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/src/Fl_Input_.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever ne
1321:fltk-1.3.4-1/src/Fl_Input_.cxx ****  228:fltk-1.3.4-1/src/Fl_Input_.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() met
1322:fltk-1.3.4-1/src/Fl_Input_.cxx ****  229:fltk-1.3.4-1/src/Fl_Input_.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw(
1323:fltk-1.3.4-1/src/Fl_Input_.cxx ****  230:fltk-1.3.4-1/src/Fl_Input_.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1324:fltk-1.3.4-1/src/Fl_Input_.cxx ****  231:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
1325:fltk-1.3.4-1/src/Fl_Input_.cxx ****  232:fltk-1.3.4-1/src/Fl_Input_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s
1326:fltk-1.3.4-1/src/Fl_Input_.cxx ****  233:fltk-1.3.4-1/src/Fl_Input_.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// cal
1327:fltk-1.3.4-1/src/Fl_Input_.cxx ****  234:fltk-1.3.4-1/src/Fl_Input_.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
1328:fltk-1.3.4-1/src/Fl_Input_.cxx ****  235:fltk-1.3.4-1/src/Fl_Input_.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
1329:fltk-1.3.4-1/src/Fl_Input_.cxx ****  236:fltk-1.3.4-1/src/Fl_Input_.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw(
1330:fltk-1.3.4-1/src/Fl_Input_.cxx ****  237:fltk-1.3.4-1/src/Fl_Input_.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
1331:fltk-1.3.4-1/src/Fl_Input_.cxx ****  238:fltk-1.3.4-1/src/Fl_Input_.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the sp
1332:fltk-1.3.4-1/src/Fl_Input_.cxx ****  239:fltk-1.3.4-1/src/Fl_Input_.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally d
1333:fltk-1.3.4-1/src/Fl_Input_.cxx ****  240:fltk-1.3.4-1/src/Fl_Input_.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the us
1334:fltk-1.3.4-1/src/Fl_Input_.cxx ****  241:fltk-1.3.4-1/src/Fl_Input_.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
1335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  242:fltk-1.3.4-1/src/Fl_Input_.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implement
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  243:fltk-1.3.4-1/src/Fl_Input_.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does no
1337:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 866              		.loc 2 1337 0
 867 0043 4863B588 		movslq	136(%rbp), %rsi
 867      000000
 868 004a 488B7D78 		movq	120(%rbp), %rdi
 869 004e 488D5424 		leaq	12(%rsp), %rdx
 869      0C
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870              		.loc 2 1336 0
 871 0053 C744240C 		movl	$0, 12(%rsp)
 871      00000000 
 872              	.LBE973:
 873              	.LBE972:
 483:fltk-1.3.4-1/src/Fl_Input_.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 874              		.loc 2 483 0
 875 005b 458D75FF 		leal	-1(%r13), %r14d
 876              	.LVL88:
 877              	.LBB975:
 878              	.LBB974:
 879              		.loc 2 1337 0
 880 005f 4801FE   		addq	%rdi, %rsi
 881 0062 4801DF   		addq	%rbx, %rdi
 882 0065 E8000000 		call	fl_utf8decode
 882      00
 883              	.LVL89:
 884              	.LBE974:
 885              	.LBE975:
 483:fltk-1.3.4-1/src/Fl_Input_.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 886              		.loc 2 483 0
 887 006a 83F80A   		cmpl	$10, %eax
 888 006d 7479     		je	.L99
 889              	.LVL90:
 890 006f 4585F6   		testl	%r14d, %r14d
 891 0072 488D43FF 		leaq	-1(%rbx), %rax
 892 0076 4589F5   		movl	%r14d, %r13d
 893 0079 75C5     		jne	.L95
 894              	.LVL91:
 895              	.L89:
 896              	.LBB976:
 897              	.LBB977:
 898              	.LBB978:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 899              		.loc 5 509 0
 900 007b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 900      000000
 901 0082 8BB5B400 		movl	180(%rbp), %esi
 901      0000
 902 0088 8B95B800 		movl	184(%rbp), %edx
 902      0000
 903 008e 488B07   		movq	(%rdi), %rax
 904 0091 FF90B001 		call	*432(%rax)
 904      0000
 905              	.LVL92:
 906              	.LBE978:
 907              	.LBE977:
 908              	.LBE976:
 909              	.LBB979:
 486:fltk-1.3.4-1/src/Fl_Input_.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 910              		.loc 2 486 0
 911 0097 48035D78 		addq	120(%rbp), %rbx
 912 009b 4889DE   		movq	%rbx, %rsi
 913              	.LVL93:
 914 009e EB04     		jmp	.L92
 915              	.LVL94:
 916              		.p2align 4,,10
 917              		.p2align 3
 918              	.L91:
 919              	.LBB980:
 491:fltk-1.3.4-1/src/Fl_Input_.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 920              		.loc 2 491 0
 921 00a0 488D7001 		leaq	1(%rax), %rsi
 922              	.LVL95:
 923              	.L92:
 488:fltk-1.3.4-1/src/Fl_Input_.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 924              		.loc 2 488 0
 925 00a4 488D5424 		leaq	16(%rsp), %rdx
 925      10
 926 00a9 4889EF   		movq	%rbp, %rdi
 927 00ac E8000000 		call	_ZNK9Fl_Input_6expandEPKcPc
 927      00
 928              	.LVL96:
 489:fltk-1.3.4-1/src/Fl_Input_.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 929              		.loc 2 489 0
 930 00b1 4889C2   		movq	%rax, %rdx
 931 00b4 482B5578 		subq	120(%rbp), %rdx
 932              	.LVL97:
 490:fltk-1.3.4-1/src/Fl_Input_.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 933              		.loc 2 490 0
 934 00b8 4439E2   		cmpl	%r12d, %edx
 935 00bb 7CE3     		jl	.L91
 936              	.LBE980:
 937              	.LBE979:
 938              	.LBE971:
 497:fltk-1.3.4-1/src/Fl_Input_.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 939              		.loc 2 497 0
 940 00bd 488B8C24 		movq	1048(%rsp), %rcx
 940      18040000 
 941 00c5 6448330C 		xorq	%fs:40, %rcx
 941      25280000 
 941      00
 942 00ce 89D0     		movl	%edx, %eax
 943              	.LVL98:
 944 00d0 751B     		jne	.L100
 945 00d2 4881C420 		addq	$1056, %rsp
 945      040000
 946              		.cfi_remember_state
 947              		.cfi_def_cfa_offset 48
 948 00d9 5B       		popq	%rbx
 949              		.cfi_def_cfa_offset 40
 950 00da 5D       		popq	%rbp
 951              		.cfi_def_cfa_offset 32
 952              	.LVL99:
 953 00db 415C     		popq	%r12
 954              		.cfi_def_cfa_offset 24
 955              	.LVL100:
 956 00dd 415D     		popq	%r13
 957              		.cfi_def_cfa_offset 16
 958 00df 415E     		popq	%r14
 959              		.cfi_def_cfa_offset 8
 960 00e1 C3       		ret
 961              	.LVL101:
 962              		.p2align 4,,10
 963 00e2 660F1F44 		.p2align 3
 963      0000
 964              	.L99:
 965              		.cfi_restore_state
 966 00e8 4963DD   		movslq	%r13d, %rbx
 967 00eb EB8E     		jmp	.L89
 968              	.LVL102:
 969              	.L100:
 970 00ed E8000000 		call	__stack_chk_fail
 970      00
 971              	.LVL103:
 972              		.cfi_endproc
 973              	.LFE593:
 975              		.section	.text.unlikely._ZNK9Fl_Input_8line_endEi.part.31.constprop.36
 976              	.LCOLDE9:
 977              		.section	.text._ZNK9Fl_Input_8line_endEi.part.31.constprop.36
 978              	.LHOTE9:
 979              		.section	.text.unlikely._ZNK9Fl_Input_10line_startEi.part.32.constprop.37,"ax",@progbits
 980              		.align 2
 981              	.LCOLDB10:
 982              		.section	.text._ZNK9Fl_Input_10line_startEi.part.32.constprop.37,"ax",@progbits
 983              	.LHOTB10:
 984              		.align 2
 985              		.p2align 4,,15
 987              	_ZNK9Fl_Input_10line_startEi.part.32.constprop.37:
 988              	.LFB592:
 508:fltk-1.3.4-1/src/Fl_Input_.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 989              		.loc 2 508 0
 990              		.cfi_startproc
 991              	.LVL104:
 992 0000 4156     		pushq	%r14
 993              		.cfi_def_cfa_offset 16
 994              		.cfi_offset 14, -16
 995 0002 4155     		pushq	%r13
 996              		.cfi_def_cfa_offset 24
 997              		.cfi_offset 13, -24
 998 0004 4154     		pushq	%r12
 999              		.cfi_def_cfa_offset 32
 1000              		.cfi_offset 12, -32
 1001 0006 55       		pushq	%rbp
 1002              		.cfi_def_cfa_offset 40
 1003              		.cfi_offset 6, -40
 1004 0007 4189F4   		movl	%esi, %r12d
 1005 000a 53       		pushq	%rbx
 1006              		.cfi_def_cfa_offset 48
 1007              		.cfi_offset 3, -48
 1008 000b 4889FD   		movq	%rdi, %rbp
 511:fltk-1.3.4-1/src/Fl_Input_.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1009              		.loc 2 511 0
 1010 000e 89F3     		movl	%esi, %ebx
 508:fltk-1.3.4-1/src/Fl_Input_.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 1011              		.loc 2 508 0
 1012 0010 4881EC20 		subq	$1056, %rsp
 1012      040000
 1013              		.cfi_def_cfa_offset 1104
 508:fltk-1.3.4-1/src/Fl_Input_.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 1014              		.loc 2 508 0
 1015 0017 64488B04 		movq	%fs:40, %rax
 1015      25280000 
 1015      00
 1016 0020 48898424 		movq	%rax, 1048(%rsp)
 1016      18040000 
 1017 0028 31C0     		xorl	%eax, %eax
 1018              	.LVL105:
 511:fltk-1.3.4-1/src/Fl_Input_.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1019              		.loc 2 511 0
 1020 002a 85F6     		testl	%esi, %esi
 1021 002c 7E49     		jle	.L102
 1022 002e 4C63F6   		movslq	%esi, %r14
 1023 0031 4189F5   		movl	%esi, %r13d
 1024 0034 4983EE01 		subq	$1, %r14
 1025              	.LVL106:
 1026 0038 0F1F8400 		.p2align 4,,10
 1026      00000000 
 1027              		.p2align 3
 1028              	.L107:
 1029              	.LBB981:
 1030              	.LBB982:
 1031              		.loc 2 1337 0
 1032 0040 4863B588 		movslq	136(%rbp), %rsi
 1032      000000
 1033 0047 488B7D78 		movq	120(%rbp), %rdi
 1034 004b 488D5424 		leaq	12(%rsp), %rdx
 1034      0C
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1035              		.loc 2 1336 0
 1036 0050 C744240C 		movl	$0, 12(%rsp)
 1036      00000000 
 1037              	.LBE982:
 1038              	.LBE981:
 511:fltk-1.3.4-1/src/Fl_Input_.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1039              		.loc 2 511 0
 1040 0058 418D5DFF 		leal	-1(%r13), %ebx
 1041              	.LVL107:
 1042              	.LBB984:
 1043              	.LBB983:
 1044              		.loc 2 1337 0
 1045 005c 4801FE   		addq	%rdi, %rsi
 1046 005f 4C01F7   		addq	%r14, %rdi
 1047 0062 E8000000 		call	fl_utf8decode
 1047      00
 1048              	.LVL108:
 1049              	.LBE983:
 1050              	.LBE984:
 511:fltk-1.3.4-1/src/Fl_Input_.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1051              		.loc 2 511 0
 1052 0067 83F80A   		cmpl	$10, %eax
 1053 006a 743C     		je	.L115
 1054              	.LVL109:
 1055 006c 4983EE01 		subq	$1, %r14
 1056 0070 85DB     		testl	%ebx, %ebx
 1057 0072 4189DD   		movl	%ebx, %r13d
 1058 0075 75C9     		jne	.L107
 1059              	.L102:
 1060              	.LVL110:
 1061              	.LBB985:
 512:fltk-1.3.4-1/src/Fl_Input_.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 1062              		.loc 2 512 0
 1063 0077 F6456C10 		testb	$16, 108(%rbp)
 1064 007b 89D8     		movl	%ebx, %eax
 1065 007d 7534     		jne	.L116
 1066              	.LVL111:
 1067              	.L105:
 1068              	.LBE985:
 522:fltk-1.3.4-1/src/Fl_Input_.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 1069              		.loc 2 522 0
 1070 007f 488B8C24 		movq	1048(%rsp), %rcx
 1070      18040000 
 1071 0087 6448330C 		xorq	%fs:40, %rcx
 1071      25280000 
 1071      00
 1072 0090 757A     		jne	.L117
 1073 0092 4881C420 		addq	$1056, %rsp
 1073      040000
 1074              		.cfi_remember_state
 1075              		.cfi_def_cfa_offset 48
 1076 0099 5B       		popq	%rbx
 1077              		.cfi_def_cfa_offset 40
 1078 009a 5D       		popq	%rbp
 1079              		.cfi_def_cfa_offset 32
 1080              	.LVL112:
 1081 009b 415C     		popq	%r12
 1082              		.cfi_def_cfa_offset 24
 1083              	.LVL113:
 1084 009d 415D     		popq	%r13
 1085              		.cfi_def_cfa_offset 16
 1086 009f 415E     		popq	%r14
 1087              		.cfi_def_cfa_offset 8
 1088 00a1 C3       		ret
 1089              	.LVL114:
 1090              		.p2align 4,,10
 1091 00a2 660F1F44 		.p2align 3
 1091      0000
 1092              	.L115:
 1093              		.cfi_restore_state
 1094              	.LBB995:
 512:fltk-1.3.4-1/src/Fl_Input_.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 1095              		.loc 2 512 0
 1096 00a8 F6456C10 		testb	$16, 108(%rbp)
 1097              	.LBE995:
 511:fltk-1.3.4-1/src/Fl_Input_.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1098              		.loc 2 511 0
 1099 00ac 4489EB   		movl	%r13d, %ebx
 1100              	.LVL115:
 1101              	.LBB996:
 512:fltk-1.3.4-1/src/Fl_Input_.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 1102              		.loc 2 512 0
 1103 00af 89D8     		movl	%ebx, %eax
 1104 00b1 74CC     		je	.L105
 1105              	.LVL116:
 1106              	.L116:
 1107              	.LBB986:
 1108              	.LBB987:
 1109              	.LBB988:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 1110              		.loc 5 509 0
 1111 00b3 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1111      000000
 1112 00ba 8B95B800 		movl	184(%rbp), %edx
 1112      0000
 1113              	.LBE988:
 1114              	.LBE987:
 1115              	.LBE986:
 1116              	.LBB991:
 515:fltk-1.3.4-1/src/Fl_Input_.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 1117              		.loc 2 515 0
 1118 00c0 4863DB   		movslq	%ebx, %rbx
 1119              	.LBE991:
 1120              	.LBB993:
 1121              	.LBB990:
 1122              	.LBB989:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 1123              		.loc 5 509 0
 1124 00c3 8BB5B400 		movl	180(%rbp), %esi
 1124      0000
 1125 00c9 488B07   		movq	(%rdi), %rax
 1126              	.LVL117:
 1127 00cc FF90B001 		call	*432(%rax)
 1127      0000
 1128              	.LVL118:
 1129              	.LBE989:
 1130              	.LBE990:
 1131              	.LBE993:
 1132              	.LBB994:
 515:fltk-1.3.4-1/src/Fl_Input_.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 1133              		.loc 2 515 0
 1134 00d2 48035D78 		addq	120(%rbp), %rbx
 1135              	.LVL119:
 1136 00d6 EB0C     		jmp	.L106
 1137              	.LVL120:
 1138 00d8 0F1F8400 		.p2align 4,,10
 1138      00000000 
 1139              		.p2align 3
 1140              	.L104:
 1141              	.LBB992:
 519:fltk-1.3.4-1/src/Fl_Input_.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1142              		.loc 2 519 0
 1143 00e0 488D5801 		leaq	1(%rax), %rbx
 1144              	.LVL121:
 1145              	.L106:
 517:fltk-1.3.4-1/src/Fl_Input_.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1146              		.loc 2 517 0
 1147 00e4 488D5424 		leaq	16(%rsp), %rdx
 1147      10
 1148 00e9 4889DE   		movq	%rbx, %rsi
 1149 00ec 4889EF   		movq	%rbp, %rdi
 1150 00ef E8000000 		call	_ZNK9Fl_Input_6expandEPKcPc
 1150      00
 1151              	.LVL122:
 518:fltk-1.3.4-1/src/Fl_Input_.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 1152              		.loc 2 518 0
 1153 00f4 488B5578 		movq	120(%rbp), %rdx
 1154 00f8 4889C1   		movq	%rax, %rcx
 1155 00fb 4829D1   		subq	%rdx, %rcx
 1156 00fe 4139CC   		cmpl	%ecx, %r12d
 1157 0101 7FDD     		jg	.L104
 1158              	.LVL123:
 1159 0103 89D8     		movl	%ebx, %eax
 1160              	.LVL124:
 1161 0105 29D0     		subl	%edx, %eax
 1162 0107 E973FFFF 		jmp	.L105
 1162      FF
 1163              	.LVL125:
 1164              	.L117:
 1165              	.LBE992:
 1166              	.LBE994:
 1167              	.LBE996:
 522:fltk-1.3.4-1/src/Fl_Input_.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 1168              		.loc 2 522 0
 1169 010c E8000000 		call	__stack_chk_fail
 1169      00
 1170              	.LVL126:
 1171              		.cfi_endproc
 1172              	.LFE592:
 1174              		.section	.text.unlikely._ZNK9Fl_Input_10line_startEi.part.32.constprop.37
 1175              	.LCOLDE10:
 1176              		.section	.text._ZNK9Fl_Input_10line_startEi.part.32.constprop.37
 1177              	.LHOTE10:
 1178              		.section	.text.unlikely._ZNK9Fl_Input_9expandposEPKcS1_S1_Pi,"ax",@progbits
 1179              		.align 2
 1180              	.LCOLDB11:
 1181              		.section	.text._ZNK9Fl_Input_9expandposEPKcS1_S1_Pi,"ax",@progbits
 1182              	.LHOTB11:
 1183              		.align 2
 1184              		.p2align 4,,15
 1185              		.globl	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 1187              	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi:
 1188              	.LFB521:
 124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1189              		.loc 2 124 0
 1190              		.cfi_startproc
 1191              	.LVL127:
 1192 0000 4157     		pushq	%r15
 1193              		.cfi_def_cfa_offset 16
 1194              		.cfi_offset 15, -16
 1195 0002 4156     		pushq	%r14
 1196              		.cfi_def_cfa_offset 24
 1197              		.cfi_offset 14, -24
 1198 0004 4155     		pushq	%r13
 1199              		.cfi_def_cfa_offset 32
 1200              		.cfi_offset 13, -32
 1201 0006 4154     		pushq	%r12
 1202              		.cfi_def_cfa_offset 40
 1203              		.cfi_offset 12, -40
 1204 0008 4D89C5   		movq	%r8, %r13
 1205 000b 55       		pushq	%rbp
 1206              		.cfi_def_cfa_offset 48
 1207              		.cfi_offset 6, -48
 1208 000c 53       		pushq	%rbx
 1209              		.cfi_def_cfa_offset 56
 1210              		.cfi_offset 3, -56
 1211 000d 4889D5   		movq	%rdx, %rbp
 1212 0010 4889F3   		movq	%rsi, %rbx
 1213 0013 4883EC18 		subq	$24, %rsp
 1214              		.cfi_def_cfa_offset 80
 1215              	.LBB997:
 128:fltk-1.3.4-1/src/Fl_Input_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1216              		.loc 2 128 0
 1217 0017 0FB6476C 		movzbl	108(%rdi), %eax
 1218              	.LBE997:
 124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1219              		.loc 2 124 0
 1220 001b 48894C24 		movq	%rcx, 8(%rsp)
 1220      08
 1221              	.LBB1001:
 128:fltk-1.3.4-1/src/Fl_Input_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1222              		.loc 2 128 0
 1223 0020 83E007   		andl	$7, %eax
 1224 0023 3C05     		cmpb	$5, %al
 1225 0025 0F84BD00 		je	.L119
 1225      0000
 1226              	.LBB998:
 134:fltk-1.3.4-1/src/Fl_Input_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1227              		.loc 2 134 0
 1228 002b 4839D6   		cmpq	%rdx, %rsi
 1229 002e 7378     		jnb	.L131
 1230 0030 4989FC   		movq	%rdi, %r12
 1231 0033 4531F6   		xorl	%r14d, %r14d
 1232 0036 4531FF   		xorl	%r15d, %r15d
 1233 0039 EB27     		jmp	.L128
 1234              	.LVL128:
 1235 003b 0F1F4400 		.p2align 4,,10
 1235      00
 1236              		.p2align 3
 1237              	.L140:
 1238              	.LBB999:
 136:fltk-1.3.4-1/src/Fl_Input_.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 1239              		.loc 2 136 0
 1240 0040 83F87F   		cmpl	$127, %eax
 1241 0043 7429     		je	.L133
 142:fltk-1.3.4-1/src/Fl_Input_.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 1242              		.loc 2 142 0
 1243 0045 4183C701 		addl	$1, %r15d
 1244              	.LVL129:
 1245              	.L130:
 144:fltk-1.3.4-1/src/Fl_Input_.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 1246              		.loc 2 144 0
 1247 0049 E8000000 		call	fl_utf8len
 1247      00
 1248              	.LVL130:
 1249 004e 85C0     		testl	%eax, %eax
 1250 0050 0F9FC0   		setg	%al
 145:fltk-1.3.4-1/src/Fl_Input_.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1251              		.loc 2 145 0
 1252 0053 4883C301 		addq	$1, %rbx
 1253              	.LVL131:
 144:fltk-1.3.4-1/src/Fl_Input_.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 1254              		.loc 2 144 0
 1255 0057 0FB6C0   		movzbl	%al, %eax
 1256 005a 4101C6   		addl	%eax, %r14d
 1257              	.LVL132:
 1258              	.LBE999:
 134:fltk-1.3.4-1/src/Fl_Input_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1259              		.loc 2 134 0
 1260 005d 4839DD   		cmpq	%rbx, %rbp
 1261 0060 744E     		je	.L120
 1262              	.LVL133:
 1263              	.L128:
 1264              	.LBB1000:
 135:fltk-1.3.4-1/src/Fl_Input_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 1265              		.loc 2 135 0
 1266 0062 0FBE3B   		movsbl	(%rbx), %edi
 1267 0065 400FB6C7 		movzbl	%dil, %eax
 1268              	.LVL134:
 136:fltk-1.3.4-1/src/Fl_Input_.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 1269              		.loc 2 136 0
 1270 0069 83F81F   		cmpl	$31, %eax
 1271 006c 7FD2     		jg	.L140
 1272              	.L133:
 137:fltk-1.3.4-1/src/Fl_Input_.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 1273              		.loc 2 137 0
 1274 006e 83F809   		cmpl	$9, %eax
 1275 0071 740D     		je	.L141
 1276              	.LVL135:
 1277              	.L126:
 140:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 1278              		.loc 2 140 0
 1279 0073 4183C702 		addl	$2, %r15d
 1280              	.LVL136:
 1281 0077 EBD0     		jmp	.L130
 1282              	.LVL137:
 1283 0079 0F1F8000 		.p2align 4,,10
 1283      000000
 1284              		.p2align 3
 1285              	.L141:
 137:fltk-1.3.4-1/src/Fl_Input_.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 1286              		.loc 2 137 0
 1287 0080 410FB644 		movzbl	108(%r12), %eax
 1287      246C
 1288              	.LVL138:
 1289 0086 83E007   		andl	$7, %eax
 1290 0089 3C04     		cmpb	$4, %al
 1291 008b 75E6     		jne	.L126
 138:fltk-1.3.4-1/src/Fl_Input_.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1292              		.loc 2 138 0
 1293 008d 4489F0   		movl	%r14d, %eax
 139:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1294              		.loc 2 139 0
 1295 0090 4489F1   		movl	%r14d, %ecx
 138:fltk-1.3.4-1/src/Fl_Input_.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1296              		.loc 2 138 0
 1297 0093 BE080000 		movl	$8, %esi
 1297      00
 1298 0098 83E007   		andl	$7, %eax
 1299 009b 29C6     		subl	%eax, %esi
 139:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1300              		.loc 2 139 0
 1301 009d 29C1     		subl	%eax, %ecx
 138:fltk-1.3.4-1/src/Fl_Input_.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1302              		.loc 2 138 0
 1303 009f 4101F7   		addl	%esi, %r15d
 1304              	.LVL139:
 139:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1305              		.loc 2 139 0
 1306 00a2 448D7107 		leal	7(%rcx), %r14d
 1307              	.LVL140:
 1308 00a6 EBA1     		jmp	.L130
 1309              	.LVL141:
 1310              	.L131:
 1311              	.LBE1000:
 134:fltk-1.3.4-1/src/Fl_Input_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1312              		.loc 2 134 0
 1313 00a8 4531FF   		xorl	%r15d, %r15d
 1314              	.LVL142:
 1315 00ab 0F1F4400 		.p2align 4,,10
 1315      00
 1316              		.p2align 3
 1317              	.L120:
 1318              	.LBE998:
 1319              	.LBE1001:
 147:fltk-1.3.4-1/src/Fl_Input_.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1320              		.loc 2 147 0
 1321 00b0 4D85ED   		testq	%r13, %r13
 1322 00b3 7404     		je	.L129
 147:fltk-1.3.4-1/src/Fl_Input_.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1323              		.loc 2 147 0 is_stmt 0 discriminator 1
 1324 00b5 45897D00 		movl	%r15d, 0(%r13)
 1325              	.L129:
 1326              	.LVL143:
 1327              	.LBB1002:
 1328              	.LBB1003:
 1329              		.loc 5 539 0 is_stmt 1
 1330 00b9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1330      000000
 1331 00c0 488B7424 		movq	8(%rsp), %rsi
 1331      08
 1332 00c5 4489FA   		movl	%r15d, %edx
 1333 00c8 488B07   		movq	(%rdi), %rax
 1334 00cb 488B80B8 		movq	440(%rax), %rax
 1334      010000
 1335              	.LBE1003:
 1336              	.LBE1002:
 149:fltk-1.3.4-1/src/Fl_Input_.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 1337              		.loc 2 149 0
 1338 00d2 4883C418 		addq	$24, %rsp
 1339              		.cfi_remember_state
 1340              		.cfi_def_cfa_offset 56
 1341 00d6 5B       		popq	%rbx
 1342              		.cfi_def_cfa_offset 48
 1343              	.LVL144:
 1344 00d7 5D       		popq	%rbp
 1345              		.cfi_def_cfa_offset 40
 1346              	.LVL145:
 1347 00d8 415C     		popq	%r12
 1348              		.cfi_def_cfa_offset 32
 1349 00da 415D     		popq	%r13
 1350              		.cfi_def_cfa_offset 24
 1351              	.LVL146:
 1352 00dc 415E     		popq	%r14
 1353              		.cfi_def_cfa_offset 16
 1354 00de 415F     		popq	%r15
 1355              		.cfi_def_cfa_offset 8
 1356              	.LVL147:
 1357              	.LBB1005:
 1358              	.LBB1004:
 1359              		.loc 5 539 0
 1360 00e0 FFE0     		jmp	*%rax
 1361              	.LVL148:
 1362              		.p2align 4,,10
 1363 00e2 660F1F44 		.p2align 3
 1363      0000
 1364              	.L119:
 1365              		.cfi_restore_state
 1366              	.LBE1004:
 1367              	.LBE1005:
 1368              	.LBB1006:
 129:fltk-1.3.4-1/src/Fl_Input_.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1369              		.loc 2 129 0
 1370 00e8 4531FF   		xorl	%r15d, %r15d
 1371 00eb 4839D6   		cmpq	%rdx, %rsi
 1372 00ee 73C0     		jnb	.L120
 1373              	.LVL149:
 1374              		.p2align 4,,10
 1375              		.p2align 3
 1376              	.L123:
 130:fltk-1.3.4-1/src/Fl_Input_.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 1377              		.loc 2 130 0
 1378 00f0 0FBE3B   		movsbl	(%rbx), %edi
 1379 00f3 E8000000 		call	fl_utf8len
 1379      00
 1380              	.LVL150:
 131:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 1381              		.loc 2 131 0
 1382 00f8 8B0D0000 		movl	_ZL8l_secret(%rip), %ecx
 1382      0000
 1383 00fe 4401F9   		addl	%r15d, %ecx
 1384 0101 85C0     		testl	%eax, %eax
 132:fltk-1.3.4-1/src/Fl_Input_.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1385              		.loc 2 132 0
 1386 0103 4898     		cltq
 131:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 1387              		.loc 2 131 0
 1388 0105 440F4FF9 		cmovg	%ecx, %r15d
 1389              	.LVL151:
 132:fltk-1.3.4-1/src/Fl_Input_.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1390              		.loc 2 132 0
 1391 0109 4801C3   		addq	%rax, %rbx
 1392              	.LVL152:
 129:fltk-1.3.4-1/src/Fl_Input_.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1393              		.loc 2 129 0
 1394 010c 4839DD   		cmpq	%rbx, %rbp
 1395 010f 77DF     		ja	.L123
 1396 0111 EB9D     		jmp	.L120
 1397              	.LBE1006:
 1398              		.cfi_endproc
 1399              	.LFE521:
 1401              		.section	.text.unlikely._ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 1402              	.LCOLDE11:
 1403              		.section	.text._ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 1404              	.LHOTE11:
 1405              		.section	.text.unlikely._ZN9Fl_Input_14minimal_updateEi,"ax",@progbits
 1406              		.align 2
 1407              	.LCOLDB12:
 1408              		.section	.text._ZN9Fl_Input_14minimal_updateEi,"ax",@progbits
 1409              	.LHOTB12:
 1410              		.align 2
 1411              		.p2align 4,,15
 1412              		.globl	_ZN9Fl_Input_14minimal_updateEi
 1414              	_ZN9Fl_Input_14minimal_updateEi:
 1415              	.LFB522:
 167:fltk-1.3.4-1/src/Fl_Input_.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1416              		.loc 2 167 0
 1417              		.cfi_startproc
 1418              	.LVL153:
 1419 0000 0FB6476D 		movzbl	109(%rdi), %eax
 1420              	.LVL154:
 168:fltk-1.3.4-1/src/Fl_Input_.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 1421              		.loc 2 168 0
 1422 0004 84C0     		testb	%al, %al
 1423 0006 7820     		js	.L151
 1424              	.LVL155:
 169:fltk-1.3.4-1/src/Fl_Input_.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 1425              		.loc 2 169 0
 1426 0008 A802     		testb	$2, %al
 167:fltk-1.3.4-1/src/Fl_Input_.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1427              		.loc 2 167 0
 1428 000a 53       		pushq	%rbx
 1429              		.cfi_def_cfa_offset 16
 1430              		.cfi_offset 3, -16
 169:fltk-1.3.4-1/src/Fl_Input_.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 1431              		.loc 2 169 0
 1432 000b 7523     		jne	.L152
 1433              	.L144:
 170:fltk-1.3.4-1/src/Fl_Input_.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1434              		.loc 2 170 0 discriminator 1
 1435 000d 89B7A400 		movl	%esi, 164(%rdi)
 1435      0000
 1436              	.L145:
 1437 0013 4889FB   		movq	%rdi, %rbx
 175:fltk-1.3.4-1/src/Fl_Input_.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 1438              		.loc 2 175 0
 1439 0016 BE020000 		movl	$2, %esi
 1439      00
 1440              	.LVL156:
 1441 001b E8000000 		call	_ZN9Fl_Widget6damageEh
 1441      00
 1442              	.LVL157:
 176:fltk-1.3.4-1/src/Fl_Input_.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 1443              		.loc 2 176 0
 1444 0020 C683B000 		movb	$0, 176(%rbx)
 1444      000000
 177:fltk-1.3.4-1/src/Fl_Input_.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 1445              		.loc 2 177 0
 1446 0027 5B       		popq	%rbx
 1447              		.cfi_restore 3
 1448              		.cfi_def_cfa_offset 8
 1449              	.LVL158:
 1450              	.L151:
 1451 0028 F3C3     		rep ret
 1452              	.LVL159:
 1453 002a 660F1F44 		.p2align 4,,10
 1453      0000
 1454              		.p2align 3
 1455              	.L152:
 1456              		.cfi_def_cfa_offset 16
 1457              		.cfi_offset 3, -16
 170:fltk-1.3.4-1/src/Fl_Input_.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1458              		.loc 2 170 0
 1459 0030 39B7A400 		cmpl	%esi, 164(%rdi)
 1459      0000
 1460 0036 7EDB     		jle	.L145
 1461 0038 EBD3     		jmp	.L144
 1462              		.cfi_endproc
 1463              	.LFE522:
 1465              		.section	.text.unlikely._ZN9Fl_Input_14minimal_updateEi
 1466              	.LCOLDE12:
 1467              		.section	.text._ZN9Fl_Input_14minimal_updateEi
 1468              	.LHOTE12:
 1469              		.section	.text.unlikely._ZN9Fl_Input_14minimal_updateEii,"ax",@progbits
 1470              		.align 2
 1471              	.LCOLDB13:
 1472              		.section	.text._ZN9Fl_Input_14minimal_updateEii,"ax",@progbits
 1473              	.LHOTB13:
 1474              		.align 2
 1475              		.p2align 4,,15
 1476              		.globl	_ZN9Fl_Input_14minimal_updateEii
 1478              	_ZN9Fl_Input_14minimal_updateEii:
 1479              	.LFB523:
 188:fltk-1.3.4-1/src/Fl_Input_.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1480              		.loc 2 188 0
 1481              		.cfi_startproc
 1482              	.LVL160:
 190:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1483              		.loc 2 190 0
 1484 0000 39F2     		cmpl	%esi, %edx
 1485 0002 0F4EF2   		cmovle	%edx, %esi
 1486              	.LVL161:
 1487 0005 E9000000 		jmp	_ZN9Fl_Input_14minimal_updateEi
 1487      00
 1488              	.LVL162:
 1489              		.cfi_endproc
 1490              	.LFE523:
 1492              		.section	.text.unlikely._ZN9Fl_Input_14minimal_updateEii
 1493              	.LCOLDE13:
 1494              		.section	.text._ZN9Fl_Input_14minimal_updateEii
 1495              	.LHOTE13:
 1496              		.section	.text.unlikely._ZNK9Fl_Input_7setfontEv,"ax",@progbits
 1497              		.align 2
 1498              	.LCOLDB14:
 1499              		.section	.text._ZNK9Fl_Input_7setfontEv,"ax",@progbits
 1500              	.LHOTB14:
 1501              		.align 2
 1502              		.p2align 4,,15
 1503              		.globl	_ZNK9Fl_Input_7setfontEv
 1505              	_ZNK9Fl_Input_7setfontEv:
 1506              	.LFB524:
 204:fltk-1.3.4-1/src/Fl_Input_.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 1507              		.loc 2 204 0
 1508              		.cfi_startproc
 1509              	.LVL163:
 1510              	.LBB1007:
 1511              	.LBB1008:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 1512              		.loc 5 509 0
 1513 0000 488B0500 		movq	fl_graphics_driver(%rip), %rax
 1513      000000
 1514 0007 8B97B800 		movl	184(%rdi), %edx
 1514      0000
 1515 000d 8BB7B400 		movl	180(%rdi), %esi
 1515      0000
 1516 0013 488B08   		movq	(%rax), %rcx
 1517 0016 4889C7   		movq	%rax, %rdi
 1518              	.LVL164:
 1519 0019 488B89B0 		movq	432(%rcx), %rcx
 1519      010000
 1520 0020 FFE1     		jmp	*%rcx
 1521              	.LVL165:
 1522              	.LBE1008:
 1523              	.LBE1007:
 1524              		.cfi_endproc
 1525              	.LFE524:
 1527              		.section	.text.unlikely._ZNK9Fl_Input_7setfontEv
 1528              	.LCOLDE14:
 1529              		.section	.text._ZNK9Fl_Input_7setfontEv
 1530              	.LHOTE14:
 1531              		.section	.text.unlikely._ZN9Fl_Input_8drawtextEiiii,"ax",@progbits
 1532              		.align 2
 1533              	.LCOLDB21:
 1534              		.section	.text._ZN9Fl_Input_8drawtextEiiii,"ax",@progbits
 1535              	.LHOTB21:
 1536              		.align 2
 1537              		.p2align 4,,15
 1538              		.globl	_ZN9Fl_Input_8drawtextEiiii
 1540              	_ZN9Fl_Input_8drawtextEiiii:
 1541              	.LFB525:
 217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 1542              		.loc 2 217 0
 1543              		.cfi_startproc
 1544              	.LVL166:
 1545 0000 4157     		pushq	%r15
 1546              		.cfi_def_cfa_offset 16
 1547              		.cfi_offset 15, -16
 1548 0002 4156     		pushq	%r14
 1549              		.cfi_def_cfa_offset 24
 1550              		.cfi_offset 14, -24
 1551 0004 4155     		pushq	%r13
 1552              		.cfi_def_cfa_offset 32
 1553              		.cfi_offset 13, -32
 1554 0006 4154     		pushq	%r12
 1555              		.cfi_def_cfa_offset 40
 1556              		.cfi_offset 12, -40
 1557 0008 55       		pushq	%rbp
 1558              		.cfi_def_cfa_offset 48
 1559              		.cfi_offset 6, -48
 1560 0009 53       		pushq	%rbx
 1561              		.cfi_def_cfa_offset 56
 1562              		.cfi_offset 3, -56
 1563 000a 4889FB   		movq	%rdi, %rbx
 1564 000d 4881EC98 		subq	$1176, %rsp
 1564      040000
 1565              		.cfi_def_cfa_offset 1232
 217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 1566              		.loc 2 217 0
 1567 0014 64488B04 		movq	%fs:40, %rax
 1567      25280000 
 1567      00
 1568 001d 48898424 		movq	%rax, 1160(%rsp)
 1568      88040000 
 1569 0025 31C0     		xorl	%eax, %eax
 1570              	.LVL167:
 218:fltk-1.3.4-1/src/Fl_Input_.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1571              		.loc 2 218 0
 1572 0027 0FB6476D 		movzbl	109(%rdi), %eax
 220:fltk-1.3.4-1/src/Fl_Input_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 1573              		.loc 2 220 0
 1574 002b 483B3D00 		cmpq	_ZN2Fl6focus_E(%rip), %rdi
 1574      000000
 217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 1575              		.loc 2 217 0
 1576 0032 89742440 		movl	%esi, 64(%rsp)
 1577 0036 89542458 		movl	%edx, 88(%rsp)
 1578 003a 894C2428 		movl	%ecx, 40(%rsp)
 1579 003e 44894424 		movl	%r8d, 12(%rsp)
 1579      0C
 218:fltk-1.3.4-1/src/Fl_Input_.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1580              		.loc 2 218 0
 1581 0043 88442437 		movb	%al, 55(%rsp)
 1582              	.LVL168:
 220:fltk-1.3.4-1/src/Fl_Input_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 1583              		.loc 2 220 0
 1584 0047 0F84630A 		je	.L156
 1584      0000
 1585              	.LVL169:
 220:fltk-1.3.4-1/src/Fl_Input_.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 1586              		.loc 2 220 0 is_stmt 0 discriminator 1
 1587 004d 448BA788 		movl	136(%rdi), %r12d
 1587      000000
 1588 0054 4585E4   		testl	%r12d, %r12d
 1589 0057 0F844303 		je	.L157
 1589      0000
 229:fltk-1.3.4-1/src/Fl_Input_.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1590              		.loc 2 229 0 is_stmt 1
 1591 005d 483B3D00 		cmpq	_ZN2Fl7pushed_E(%rip), %rdi
 1591      000000
 1592 0064 0F84460A 		je	.L156
 1592      0000
 230:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 1593              		.loc 2 230 0
 1594 006a C7442448 		movl	$0, 72(%rsp)
 1594      00000000 
 1595 0072 C7442444 		movl	$0, 68(%rsp)
 1595      00000000 
 1596              	.LVL170:
 1597              	.L203:
 1598              	.LBB1009:
 1599              	.LBB1010:
 1600              	.LBB1011:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 1601              		.loc 5 509 0
 1602 007a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1602      000000
 1603              	.LVL171:
 1604 0081 8B93B800 		movl	184(%rbx), %edx
 1604      0000
 1605              	.LVL172:
 1606              	.LBE1011:
 1607              	.LBE1010:
 1608              	.LBE1009:
 244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1609              		.loc 2 244 0
 1610 0087 4531ED   		xorl	%r13d, %r13d
 1611              	.LBB1016:
 1612              	.LBB1014:
 1613              	.LBB1012:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 1614              		.loc 5 509 0
 1615 008a 8BB3B400 		movl	180(%rbx), %esi
 1615      0000
 1616              	.LVL173:
 1617              	.LBE1012:
 1618              	.LBE1014:
 1619              	.LBE1016:
 1620              	.LBB1017:
 247:fltk-1.3.4-1/src/Fl_Input_.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1621              		.loc 2 247 0
 1622 0090 4531FF   		xorl	%r15d, %r15d
 1623              	.LBE1017:
 1624              	.LBB1031:
 1625              	.LBB1015:
 1626              	.LBB1013:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 1627              		.loc 5 509 0
 1628 0093 488B07   		movq	(%rdi), %rax
 1629 0096 FF90B001 		call	*432(%rax)
 1629      0000
 1630              	.LVL174:
 1631              	.LBE1013:
 1632              	.LBE1015:
 1633              	.LBE1031:
 1634              	.LBB1032:
 1635              	.LBB1033:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 1636              		.loc 5 527 0
 1637 009c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1637      000000
 1638 00a3 488B07   		movq	(%rdi), %rax
 1639 00a6 FF90D001 		call	*464(%rax)
 1639      0000
 1640              	.LVL175:
 1641              	.LBE1033:
 1642              	.LBE1032:
 244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1643              		.loc 2 244 0
 1644 00ac 4189C6   		movl	%eax, %r14d
 1645              	.LBB1035:
 1646              	.LBB1034:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 1647              		.loc 5 527 0
 1648 00af 89C5     		movl	%eax, %ebp
 1649 00b1 4C8B6378 		movq	120(%rbx), %r12
 1650              	.LBE1034:
 1651              	.LBE1035:
 244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1652              		.loc 2 244 0
 1653 00b5 41C1EE1F 		shrl	$31, %r14d
 1654              	.LBB1036:
 247:fltk-1.3.4-1/src/Fl_Input_.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1655              		.loc 2 247 0
 1656 00b9 C7442418 		movl	$0, 24(%rsp)
 1656      00000000 
 1657 00c1 C7442414 		movl	$0, 20(%rsp)
 1657      00000000 
 1658              	.LBE1036:
 244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1659              		.loc 2 244 0
 1660 00c9 4101C6   		addl	%eax, %r14d
 1661 00cc 41D1FE   		sarl	%r14d
 1662 00cf 44897424 		movl	%r14d, 16(%rsp)
 1662      10
 1663              	.LVL176:
 1664 00d4 4C8DB424 		leaq	128(%rsp), %r14
 1664      80000000 
 1665              	.LVL177:
 1666 00dc EB06     		jmp	.L167
 1667              	.LVL178:
 1668 00de 6690     		.p2align 4,,10
 1669              		.p2align 3
 1670              	.L262:
 1671              	.LBB1037:
 1672              	.LBB1018:
 272:fltk-1.3.4-1/src/Fl_Input_.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 1673              		.loc 2 272 0
 1674 00e0 4C8D6001 		leaq	1(%rax), %r12
 1675              	.LVL179:
 1676              	.L167:
 248:fltk-1.3.4-1/src/Fl_Input_.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 1677              		.loc 2 248 0
 1678 00e4 4C89F2   		movq	%r14, %rdx
 1679 00e7 4C89E6   		movq	%r12, %rsi
 1680 00ea 4889DF   		movq	%rbx, %rdi
 1681 00ed E8000000 		call	_ZNK9Fl_Input_6expandEPKcPc
 1681      00
 1682              	.LVL180:
 1683              	.LBB1019:
 249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 1684              		.loc 2 249 0
 1685 00f2 48639390 		movslq	144(%rbx), %rdx
 1685      000000
 1686 00f9 488B4B78 		movq	120(%rbx), %rcx
 1687              	.LVL181:
 1688 00fd 4C89E6   		movq	%r12, %rsi
 1689 0100 4829CE   		subq	%rcx, %rsi
 1690 0103 4839F2   		cmpq	%rsi, %rdx
 1691 0106 0F8CAA00 		jl	.L160
 1691      0000
 1692              	.LVL182:
 249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 1693              		.loc 2 249 0 is_stmt 0 discriminator 1
 1694 010c 4889C6   		movq	%rax, %rsi
 1695 010f 4829CE   		subq	%rcx, %rsi
 1696 0112 4839F2   		cmpq	%rsi, %rdx
 1697 0115 0F8F9B00 		jg	.L160
 1697      0000
 1698              	.LBB1020:
 250:fltk-1.3.4-1/src/Fl_Input_.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1699              		.loc 2 250 0 is_stmt 1
 1700 011b 4801CA   		addq	%rcx, %rdx
 1701 011e 4531C0   		xorl	%r8d, %r8d
 1702 0121 4C89F1   		movq	%r14, %rcx
 1703 0124 4C89E6   		movq	%r12, %rsi
 1704 0127 4889DF   		movq	%rbx, %rdi
 1705 012a 48894424 		movq	%rax, 24(%rsp)
 1705      18
 1706              	.LVL183:
 1707 012f E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 1707      00
 1708              	.LVL184:
 1709 0134 F20F5805 		addsd	.LC17(%rip), %xmm0
 1709      00000000 
 251:fltk-1.3.4-1/src/Fl_Input_.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1710              		.loc 2 251 0
 1711 013c 483B1D00 		cmpq	_ZN2Fl6focus_E(%rip), %rbx
 1711      000000
 250:fltk-1.3.4-1/src/Fl_Input_.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1712              		.loc 2 250 0
 1713 0143 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1714 0147 89442414 		movl	%eax, 20(%rsp)
 1715              	.LVL185:
 251:fltk-1.3.4-1/src/Fl_Input_.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1716              		.loc 2 251 0
 1717 014b 488B4424 		movq	24(%rsp), %rax
 1717      18
 1718              	.LVL186:
 1719 0150 0F848A09 		je	.L260
 1719      0000
 1720              	.L205:
 253:fltk-1.3.4-1/src/Fl_Input_.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 1721              		.loc 2 253 0
 1722 0156 8B939C00 		movl	156(%rbx), %edx
 1722      0000
 1723              	.LBB1021:
 254:fltk-1.3.4-1/src/Fl_Input_.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1724              		.loc 2 254 0
 1725 015c 8B4C2428 		movl	40(%rsp), %ecx
 1726              	.LBE1021:
 252:fltk-1.3.4-1/src/Fl_Input_.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1727              		.loc 2 252 0
 1728 0160 44896C24 		movl	%r13d, 24(%rsp)
 1728      18
 1729              	.LVL187:
 1730              	.LBB1023:
 254:fltk-1.3.4-1/src/Fl_Input_.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1731              		.loc 2 254 0
 1732 0165 01D1     		addl	%edx, %ecx
 1733 0167 2B4C2410 		subl	16(%rsp), %ecx
 1734 016b 394C2414 		cmpl	%ecx, 20(%rsp)
 1735 016f 0F8F3308 		jg	.L261
 1735      0000
 261:fltk-1.3.4-1/src/Fl_Input_.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 1736              		.loc 2 261 0
 1737 0175 448B5C24 		movl	16(%rsp), %r11d
 1737      10
 1738 017a 8B7C2414 		movl	20(%rsp), %edi
 1739 017e 89D1     		movl	%edx, %ecx
 1740 0180 418D3413 		leal	(%r11,%rdx), %esi
 1741 0184 39F7     		cmpl	%esi, %edi
 1742 0186 7D05     		jge	.L164
 1743              	.LVL188:
 262:fltk-1.3.4-1/src/Fl_Input_.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1744              		.loc 2 262 0
 1745 0188 89FA     		movl	%edi, %edx
 1746 018a 4429DA   		subl	%r11d, %edx
 1747              	.LVL189:
 1748              	.L164:
 1749 018d 85D2     		testl	%edx, %edx
 1750 018f BE000000 		movl	$0, %esi
 1750      00
 1751 0194 0F48D6   		cmovs	%esi, %edx
 1752              	.LVL190:
 1753              	.LBE1023:
 265:fltk-1.3.4-1/src/Fl_Input_.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 1754              		.loc 2 265 0
 1755 0197 39CA     		cmpl	%ecx, %edx
 1756 0199 7417     		je	.L253
 266:fltk-1.3.4-1/src/Fl_Input_.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 1757              		.loc 2 266 0
 1758 019b 89939C00 		movl	%edx, 156(%rbx)
 1758      0000
 267:fltk-1.3.4-1/src/Fl_Input_.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 1759              		.loc 2 267 0
 1760 01a1 C783A400 		movl	$0, 164(%rbx)
 1760      00000000 
 1760      0000
 1761 01ab C683B000 		movb	$0, 176(%rbx)
 1761      000000
 1762              	.L253:
 1763 01b2 488B4B78 		movq	120(%rbx), %rcx
 1764              	.LVL191:
 1765              	.L160:
 1766              	.LBE1020:
 1767              	.LBE1019:
 271:fltk-1.3.4-1/src/Fl_Input_.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1768              		.loc 2 271 0
 1769 01b6 48639388 		movslq	136(%rbx), %rdx
 1769      000000
 270:fltk-1.3.4-1/src/Fl_Input_.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 1770              		.loc 2 270 0
 1771 01bd 4183C701 		addl	$1, %r15d
 1772              	.LVL192:
 1773 01c1 4101ED   		addl	%ebp, %r13d
 271:fltk-1.3.4-1/src/Fl_Input_.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1774              		.loc 2 271 0
 1775 01c4 4801D1   		addq	%rdx, %rcx
 1776 01c7 4839C8   		cmpq	%rcx, %rax
 1777 01ca 0F8210FF 		jb	.L262
 1777      FFFF
 1778 01d0 44897C24 		movl	%r15d, 44(%rsp)
 1778      2C
 1779 01d5 4989C7   		movq	%rax, %r15
 1780              	.LVL193:
 1781              	.LBE1018:
 1782              	.LBE1037:
 1783              	.LBB1038:
 276:fltk-1.3.4-1/src/Fl_Input_.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 1784              		.loc 2 276 0
 1785 01d8 0FB6436C 		movzbl	108(%rbx), %eax
 1786 01dc 83E007   		andl	$7, %eax
 1787 01df 3C04     		cmpb	$4, %al
 1788 01e1 0F84390A 		je	.L263
 1788      0000
 283:fltk-1.3.4-1/src/Fl_Input_.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 1789              		.loc 2 283 0
 1790 01e7 89E8     		movl	%ebp, %eax
 1791 01e9 2B44240C 		subl	12(%rsp), %eax
 1792 01ed 89C2     		movl	%eax, %edx
 1793 01ef C1EA1F   		shrl	$31, %edx
 1794 01f2 01D0     		addl	%edx, %eax
 1795 01f4 D1F8     		sarl	%eax
 1796 01f6 8983A000 		movl	%eax, 160(%rbx)
 1796      0000
 1797              	.L170:
 1798              	.LVL194:
 1799              	.LBE1038:
 1800              	.LBB1040:
 1801              	.LBB1041:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1802              		.loc 5 82 0
 1803 01fc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1803      000000
 1804 0203 448B4424 		movl	12(%rsp), %r8d
 1804      0C
 1805 0208 8B4C2428 		movl	40(%rsp), %ecx
 1806 020c 8B542458 		movl	88(%rsp), %edx
 1807 0210 8B742440 		movl	64(%rsp), %esi
 1808 0214 488B07   		movq	(%rdi), %rax
 1809 0217 FF905001 		call	*336(%rax)
 1809      0000
 1810              	.LVL195:
 1811              	.LBE1041:
 1812              	.LBE1040:
 287:fltk-1.3.4-1/src/Fl_Input_.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 1813              		.loc 2 287 0
 1814 021d 4889DF   		movq	%rbx, %rdi
 1815 0220 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 1815      00
 1816              	.LVL196:
 1817 0225 85C0     		testl	%eax, %eax
 1818 0227 0F84DB09 		je	.L171
 1818      0000
 1819 022d 8B83BC00 		movl	188(%rbx), %eax
 1819      0000
 1820 0233 89442460 		movl	%eax, 96(%rsp)
 1821              	.LVL197:
 1822              	.L172:
 1823              	.LBB1042:
 1824              	.LBB1043:
 533:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 1825              		.loc 5 533 0 discriminator 4
 1826 0237 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1826      000000
 1827 023e 4C8B6B78 		movq	120(%rbx), %r13
 1828              	.LVL198:
 1829 0242 488B07   		movq	(%rdi), %rax
 1830 0245 FF90D801 		call	*472(%rax)
 1830      0000
 1831              	.LVL199:
 1832              	.LBE1043:
 1833              	.LBE1042:
 291:fltk-1.3.4-1/src/Fl_Input_.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1834              		.loc 2 291 0 discriminator 4
 1835 024b 89E9     		movl	%ebp, %ecx
 292:fltk-1.3.4-1/src/Fl_Input_.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 1836              		.loc 2 292 0 discriminator 4
 1837 024d 660FEFED 		pxor	%xmm5, %xmm5
 291:fltk-1.3.4-1/src/Fl_Input_.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1838              		.loc 2 291 0 discriminator 4
 1839 0251 29C1     		subl	%eax, %ecx
 1840              	.LVL200:
 292:fltk-1.3.4-1/src/Fl_Input_.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 1841              		.loc 2 292 0 discriminator 4
 1842 0253 8B442440 		movl	64(%rsp), %eax
 1843 0257 2B839C00 		subl	156(%rbx), %eax
 1843      0000
 1844 025d 83C001   		addl	$1, %eax
 1845 0260 F30F2AE8 		cvtsi2ss	%eax, %xmm5
 293:fltk-1.3.4-1/src/Fl_Input_.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 1846              		.loc 2 293 0 discriminator 4
 1847 0264 8B83A000 		movl	160(%rbx), %eax
 1847      0000
 1848 026a 4189C4   		movl	%eax, %r12d
 1849 026d 41F7DC   		negl	%r12d
 1850              	.LBB1044:
 294:fltk-1.3.4-1/src/Fl_Input_.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1851              		.loc 2 294 0 discriminator 4
 1852 0270 44396424 		cmpl	%r12d, 12(%rsp)
 1852      0C
 1853              	.LBE1044:
 292:fltk-1.3.4-1/src/Fl_Input_.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 1854              		.loc 2 292 0 discriminator 4
 1855 0275 F30F116C 		movss	%xmm5, 76(%rsp)
 1855      244C
 1856              	.LVL201:
 1857              	.LBB1092:
 294:fltk-1.3.4-1/src/Fl_Input_.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1858              		.loc 2 294 0 discriminator 4
 1859 027b 0F8EA206 		jle	.L173
 1859      0000
 1860 0281 89EF     		movl	%ebp, %edi
 1861              	.LBB1045:
 1862              	.LBB1046:
 1863              	.LBB1047:
 319:fltk-1.3.4-1/src/Fl_Input_.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 1864              		.loc 2 319 0
 1865 0283 8D5503   		leal	3(%rbp), %edx
 1866 0286 8B742458 		movl	88(%rsp), %esi
 1867 028a F7DF     		negl	%edi
 1868 028c 85ED     		testl	%ebp, %ebp
 1869 028e 0F49D5   		cmovns	%ebp, %edx
 1870 0291 897C2430 		movl	%edi, 48(%rsp)
 1871 0295 C1FA02   		sarl	$2, %edx
 1872 0298 89F7     		movl	%esi, %edi
 1873 029a 85ED     		testl	%ebp, %ebp
 1874 029c 89542468 		movl	%edx, 104(%rsp)
 1875 02a0 8D5507   		leal	7(%rbp), %edx
 1876 02a3 0F49D5   		cmovns	%ebp, %edx
 1877 02a6 29C7     		subl	%eax, %edi
 1878 02a8 8D443DFC 		leal	-4(%rbp,%rdi), %eax
 1879 02ac C1FA03   		sarl	$3, %edx
 1880 02af 01F9     		addl	%edi, %ecx
 1881              	.LVL202:
 1882 02b1 F7DA     		negl	%edx
 1883 02b3 897C2410 		movl	%edi, 16(%rsp)
 1884              	.LVL203:
 1885 02b7 894C2418 		movl	%ecx, 24(%rsp)
 1886              	.LVL204:
 1887 02bb 89442420 		movl	%eax, 32(%rsp)
 1888 02bf 4889D8   		movq	%rbx, %rax
 1889 02c2 8954246C 		movl	%edx, 108(%rsp)
 1890 02c6 4C89FB   		movq	%r15, %rbx
 1891              	.LVL205:
 1892 02c9 4989C7   		movq	%rax, %r15
 1893              	.LVL206:
 1894 02cc 0F1F4000 		.p2align 4,,10
 1895              		.p2align 3
 1896              	.L174:
 1897              	.LBE1047:
 1898              	.LBE1046:
 297:fltk-1.3.4-1/src/Fl_Input_.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 1899              		.loc 2 297 0
 1900 02d0 837C242C 		cmpl	$1, 44(%rsp)
 1900      01
 1901 02d5 7411     		je	.L175
 297:fltk-1.3.4-1/src/Fl_Input_.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 1902              		.loc 2 297 0 is_stmt 0 discriminator 1
 1903 02d7 4C89F2   		movq	%r14, %rdx
 1904 02da 4C89EE   		movq	%r13, %rsi
 1905 02dd 4C89FF   		movq	%r15, %rdi
 1906 02e0 E8000000 		call	_ZNK9Fl_Input_6expandEPKcPc
 1906      00
 1907              	.LVL207:
 1908 02e5 4889C3   		movq	%rax, %rbx
 1909              	.LVL208:
 1910              	.L175:
 299:fltk-1.3.4-1/src/Fl_Input_.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1911              		.loc 2 299 0 is_stmt 1
 1912 02e8 443B6424 		cmpl	48(%rsp), %r12d
 1912      30
 1913 02ed 0F8E8501 		jle	.L255
 1913      0000
 1914              	.LBB1054:
 301:fltk-1.3.4-1/src/Fl_Input_.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1915              		.loc 2 301 0
 1916 02f3 807C2437 		cmpb	$0, 55(%rsp)
 1916      00
 1917 02f8 0F88D702 		js	.L179
 1917      0000
 1918              	.LBB1050:
 302:fltk-1.3.4-1/src/Fl_Input_.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 1919              		.loc 2 302 0
 1920 02fe 496397A4 		movslq	164(%r15), %rdx
 1920      000000
 1921 0305 498B4F78 		movq	120(%r15), %rcx
 1922              	.LVL209:
 1923 0309 4801CA   		addq	%rcx, %rdx
 1924              	.LVL210:
 303:fltk-1.3.4-1/src/Fl_Input_.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 1925              		.loc 2 303 0
 1926 030c 4839D3   		cmpq	%rdx, %rbx
 1927 030f 0F827403 		jb	.L180
 1927      0000
 1928              	.LVL211:
 304:fltk-1.3.4-1/src/Fl_Input_.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1929              		.loc 2 304 0
 1930 0315 41F6476C 		testb	$8, 108(%r15)
 1930      08
 1931 031a 0F84A801 		je	.L181
 1931      0000
 307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 1932              		.loc 2 307 0 discriminator 1
 1933 0320 8B442428 		movl	40(%rsp), %eax
 1934 0324 03442440 		addl	64(%rsp), %eax
 309:fltk-1.3.4-1/src/Fl_Input_.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1935              		.loc 2 309 0 discriminator 1
 1936 0328 4C39EA   		cmpq	%r13, %rdx
 307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 1937              		.loc 2 307 0 discriminator 1
 1938 032b 660FEFC9 		pxor	%xmm1, %xmm1
 304:fltk-1.3.4-1/src/Fl_Input_.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1939              		.loc 2 304 0 discriminator 1
 1940 032f 41C687B0 		movb	$0, 176(%r15)
 1940      00000000 
 307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 1941              		.loc 2 307 0 discriminator 1
 1942 0337 F30F2AC8 		cvtsi2ss	%eax, %xmm1
 1943              	.LVL212:
 309:fltk-1.3.4-1/src/Fl_Input_.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1944              		.loc 2 309 0 discriminator 1
 1945 033b 0F863709 		jbe	.L264
 1945      0000
 1946              	.L183:
 314:fltk-1.3.4-1/src/Fl_Input_.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1947              		.loc 2 314 0
 1948 0341 4531C0   		xorl	%r8d, %r8d
 1949 0344 4C89F1   		movq	%r14, %rcx
 1950 0347 4C89EE   		movq	%r13, %rsi
 1951 034a 4C89FF   		movq	%r15, %rdi
 1952 034d F30F114C 		movss	%xmm1, 56(%rsp)
 1952      2438
 1953 0353 E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 1953      00
 1954              	.LVL213:
 1955 0358 660FEFDB 		pxor	%xmm3, %xmm3
 315:fltk-1.3.4-1/src/Fl_Input_.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 1956              		.loc 2 315 0
 1957 035c 4180BFB0 		cmpb	$0, 176(%r15)
 1957      00000000 
 1958 0364 F30F104C 		movss	56(%rsp), %xmm1
 1958      2438
 314:fltk-1.3.4-1/src/Fl_Input_.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1959              		.loc 2 314 0
 1960 036a F20F5AD8 		cvtsd2ss	%xmm0, %xmm3
 315:fltk-1.3.4-1/src/Fl_Input_.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 1961              		.loc 2 315 0
 1962 036e F30F1005 		movss	.LC15(%rip), %xmm0
 1962      00000000 
 314:fltk-1.3.4-1/src/Fl_Input_.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1963              		.loc 2 314 0
 1964 0376 F30F585C 		addss	76(%rsp), %xmm3
 1964      244C
 1965              	.LVL214:
 315:fltk-1.3.4-1/src/Fl_Input_.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 1966              		.loc 2 315 0
 1967 037c 0F857608 		jne	.L265
 1967      0000
 316:fltk-1.3.4-1/src/Fl_Input_.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1968              		.loc 2 316 0
 1969 0382 41F6476C 		testb	$8, 108(%r15)
 1969      08
 1970 0387 0F848901 		je	.L185
 1970      0000
 316:fltk-1.3.4-1/src/Fl_Input_.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1971              		.loc 2 316 0 is_stmt 0 discriminator 1
 1972 038d F30F5C1D 		subss	.LC16(%rip), %xmm3
 1972      00000000 
 1973              	.LVL215:
 1974 0395 E97C0100 		jmp	.L185
 1974      00
 1975              	.LVL216:
 1976 039a 660F1F44 		.p2align 4,,10
 1976      0000
 1977              		.p2align 3
 1978              	.L157:
 1979              	.LBE1050:
 1980              	.LBE1054:
 1981              	.LBE1045:
 1982              	.LBE1092:
 221:fltk-1.3.4-1/src/Fl_Input_.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 1983              		.loc 2 221 0 is_stmt 1
 1984 03a0 807C2437 		cmpb	$0, 55(%rsp)
 1984      00
 1985 03a5 7861     		js	.L155
 223:fltk-1.3.4-1/src/Fl_Input_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1986              		.loc 2 223 0
 1987 03a7 0FB67B6E 		movzbl	110(%rbx), %edi
 1988 03ab 448B7364 		movl	100(%rbx), %r14d
 1989              	.LVL217:
 1990 03af E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 1990      00
 1991              	.LVL218:
 1992 03b4 0FB67B6E 		movzbl	110(%rbx), %edi
 222:fltk-1.3.4-1/src/Fl_Input_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 1993              		.loc 2 222 0
 1994 03b8 448B6424 		movl	12(%rsp), %r12d
 1994      0C
 1995 03bd 4101C4   		addl	%eax, %r12d
 1996              	.LVL219:
 223:fltk-1.3.4-1/src/Fl_Input_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1997              		.loc 2 223 0
 1998 03c0 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 1998      00
 1999              	.LVL220:
 222:fltk-1.3.4-1/src/Fl_Input_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 2000              		.loc 2 222 0
 2001 03c5 0FB67B6E 		movzbl	110(%rbx), %edi
 2002 03c9 8B6C2428 		movl	40(%rsp), %ebp
 2003 03cd 01C5     		addl	%eax, %ebp
 2004              	.LVL221:
 2005 03cf E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 2005      00
 2006              	.LVL222:
 2007 03d4 0FB67B6E 		movzbl	110(%rbx), %edi
 2008 03d8 448B6C24 		movl	88(%rsp), %r13d
 2008      58
 2009 03dd 4129C5   		subl	%eax, %r13d
 2010              	.LVL223:
 2011 03e0 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 2011      00
 2012              	.LVL224:
 223:fltk-1.3.4-1/src/Fl_Input_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2013              		.loc 2 223 0
 2014 03e5 8B542440 		movl	64(%rsp), %edx
 2015 03e9 0FB6736E 		movzbl	110(%rbx), %esi
 2016 03ed 4883EC08 		subq	$8, %rsp
 2017              		.cfi_def_cfa_offset 1240
 2018 03f1 4156     		pushq	%r14
 2019              		.cfi_def_cfa_offset 1248
 2020 03f3 4189E8   		movl	%ebp, %r8d
 2021 03f6 4889DF   		movq	%rbx, %rdi
 2022 03f9 4589E1   		movl	%r12d, %r9d
 2023 03fc 4489E9   		movl	%r13d, %ecx
 2024 03ff 29C2     		subl	%eax, %edx
 2025 0401 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2025      00
 2026              	.LVL225:
 2027 0406 5B       		popq	%rbx
 2028              		.cfi_def_cfa_offset 1240
 2029              	.LVL226:
 2030 0407 5D       		popq	%rbp
 2031              		.cfi_def_cfa_offset 1232
 2032              	.LVL227:
 2033              	.L155:
 418:fltk-1.3.4-1/src/Fl_Input_.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 2034              		.loc 2 418 0
 2035 0408 488B8424 		movq	1160(%rsp), %rax
 2035      88040000 
 2036 0410 64483304 		xorq	%fs:40, %rax
 2036      25280000 
 2036      00
 2037 0419 0F859108 		jne	.L266
 2037      0000
 2038 041f 4881C498 		addq	$1176, %rsp
 2038      040000
 2039              		.cfi_remember_state
 2040              		.cfi_def_cfa_offset 56
 2041 0426 5B       		popq	%rbx
 2042              		.cfi_def_cfa_offset 48
 2043 0427 5D       		popq	%rbp
 2044              		.cfi_def_cfa_offset 40
 2045 0428 415C     		popq	%r12
 2046              		.cfi_def_cfa_offset 32
 2047 042a 415D     		popq	%r13
 2048              		.cfi_def_cfa_offset 24
 2049 042c 415E     		popq	%r14
 2050              		.cfi_def_cfa_offset 16
 2051 042e 415F     		popq	%r15
 2052              		.cfi_def_cfa_offset 8
 2053 0430 C3       		ret
 2054              	.LVL228:
 2055              		.p2align 4,,10
 2056 0431 0F1F8000 		.p2align 3
 2056      000000
 2057              	.L267:
 2058              		.cfi_restore_state
 2059              	.LBB1093:
 2060              	.LBB1087:
 2061              	.LBB1055:
 2062              	.LBB1056:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2063              		.loc 5 206 0
 2064 0438 660FEFC0 		pxor	%xmm0, %xmm0
 2065 043c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2065      000000
 2066 0443 4189E8   		movl	%ebp, %r8d
 2067 0446 B9020000 		movl	$2, %ecx
 2067      00
 2068 044b 8B542410 		movl	16(%rsp), %edx
 2069 044f F30F2A44 		cvtsi2ss	20(%rsp), %xmm0
 2069      2414
 2070 0455 488B07   		movq	(%rdi), %rax
 2071              	.LVL229:
 2072 0458 F30F5844 		addss	76(%rsp), %xmm0
 2072      244C
 2073 045e F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 2074 0462 F20F5805 		addsd	.LC17(%rip), %xmm0
 2074      00000000 
 2075 046a F20F2CF0 		cvttsd2si	%xmm0, %esi
 2076 046e FF5020   		call	*32(%rax)
 2077              	.LVL230:
 2078              		.p2align 4,,10
 2079 0471 0F1F8000 		.p2align 3
 2079      000000
 2080              	.L255:
 2081 0478 498B4F78 		movq	120(%r15), %rcx
 2082              	.L177:
 2083              	.LBE1056:
 2084              	.LBE1055:
 398:fltk-1.3.4-1/src/Fl_Input_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 2085              		.loc 2 398 0
 2086 047c 49638788 		movslq	136(%r15), %rax
 2086      000000
 397:fltk-1.3.4-1/src/Fl_Input_.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 2087              		.loc 2 397 0
 2088 0483 4101EC   		addl	%ebp, %r12d
 2089              	.LVL231:
 398:fltk-1.3.4-1/src/Fl_Input_.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 2090              		.loc 2 398 0
 2091 0486 4801C8   		addq	%rcx, %rax
 2092 0489 4839C3   		cmpq	%rax, %rbx
 2093 048c 0F838E04 		jnb	.L251
 2093      0000
 399:fltk-1.3.4-1/src/Fl_Input_.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 2094              		.loc 2 399 0
 2095 0492 0FB603   		movzbl	(%rbx), %eax
 2096 0495 3C0A     		cmpb	$10, %al
 2097 0497 0F84E302 		je	.L217
 2097      0000
 2098 049d 3C20     		cmpb	$32, %al
 2099 049f 0F84DB02 		je	.L217
 2099      0000
 2100              	.L196:
 2101              	.LVL232:
 2102 04a5 016C2410 		addl	%ebp, 16(%rsp)
 2103 04a9 016C2420 		addl	%ebp, 32(%rsp)
 2104 04ad 016C2418 		addl	%ebp, 24(%rsp)
 2105              	.LBE1087:
 294:fltk-1.3.4-1/src/Fl_Input_.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2106              		.loc 2 294 0
 2107 04b1 44396424 		cmpl	%r12d, 12(%rsp)
 2107      0C
 2108 04b6 0F8E5406 		jle	.L215
 2108      0000
 2109 04bc 4989DD   		movq	%rbx, %r13
 2110 04bf E90CFEFF 		jmp	.L174
 2110      FF
 2111              	.LVL233:
 2112              		.p2align 4,,10
 2113 04c4 0F1F4000 		.p2align 3
 2114              	.L181:
 2115              	.LBB1088:
 2116              	.LBB1057:
 2117              	.LBB1051:
 305:fltk-1.3.4-1/src/Fl_Input_.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 2118              		.loc 2 305 0
 2119 04c8 4C39EA   		cmpq	%r13, %rdx
 2120 04cb 410FB687 		movzbl	176(%r15), %eax
 2120      B0000000 
 2121 04d3 7308     		jnb	.L216
 2122 04d5 84C0     		testb	%al, %al
 2123 04d7 0F85AC01 		jne	.L180
 2123      0000
 2124              	.L216:
 307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 2125              		.loc 2 307 0
 2126 04dd 8B4C2428 		movl	40(%rsp), %ecx
 2127 04e1 034C2440 		addl	64(%rsp), %ecx
 309:fltk-1.3.4-1/src/Fl_Input_.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2128              		.loc 2 309 0
 2129 04e5 4C39EA   		cmpq	%r13, %rdx
 307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 2130              		.loc 2 307 0
 2131 04e8 660FEFC9 		pxor	%xmm1, %xmm1
 2132 04ec F30F2AC9 		cvtsi2ss	%ecx, %xmm1
 2133              	.LVL234:
 309:fltk-1.3.4-1/src/Fl_Input_.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2134              		.loc 2 309 0
 2135 04f0 0F874BFE 		ja	.L183
 2135      FFFF
 310:fltk-1.3.4-1/src/Fl_Input_.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 2136              		.loc 2 310 0
 2137 04f6 660FEFDB 		pxor	%xmm3, %xmm3
 311:fltk-1.3.4-1/src/Fl_Input_.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2138              		.loc 2 311 0
 2139 04fa 84C0     		testb	%al, %al
 2140 04fc F30F1005 		movss	.LC15(%rip), %xmm0
 2140      00000000 
 310:fltk-1.3.4-1/src/Fl_Input_.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 2141              		.loc 2 310 0
 2142 0504 F30F2A5C 		cvtsi2ss	64(%rsp), %xmm3
 2142      2440
 2143              	.LVL235:
 311:fltk-1.3.4-1/src/Fl_Input_.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2144              		.loc 2 311 0
 2145 050a 740A     		je	.L185
 311:fltk-1.3.4-1/src/Fl_Input_.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2146              		.loc 2 311 0 is_stmt 0 discriminator 1
 2147 050c F30F104C 		movss	76(%rsp), %xmm1
 2147      244C
 2148              	.LVL236:
 2149 0512 F30F58C8 		addss	%xmm0, %xmm1
 2150              	.LVL237:
 2151              	.L185:
 2152              	.LBB1048:
 2153              	.LBB1049:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2154              		.loc 5 82 0 is_stmt 1
 2155 0516 660FEFD2 		pxor	%xmm2, %xmm2
 2156 051a F30F5CCB 		subss	%xmm3, %xmm1
 2157              	.LVL238:
 2158 051e 8B74246C 		movl	108(%rsp), %esi
 2159 0522 F30F2CC3 		cvttss2si	%xmm3, %eax
 2160 0526 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2160      000000
 2161 052d 8B542410 		movl	16(%rsp), %edx
 2162 0531 4189E8   		movl	%ebp, %r8d
 2163 0534 F30F2A54 		cvtsi2ss	104(%rsp), %xmm2
 2163      2468
 2164 053a F30F58C1 		addss	%xmm1, %xmm0
 2165 053e 8D7406FF 		leal	-1(%rsi,%rax), %esi
 2166              	.LVL239:
 2167 0542 488B07   		movq	(%rdi), %rax
 2168 0545 F30F58C2 		addss	%xmm2, %xmm0
 2169 0549 F30F2CC8 		cvttss2si	%xmm0, %ecx
 2170 054d FF905001 		call	*336(%rax)
 2170      0000
 2171              	.LVL240:
 2172              	.LBE1049:
 2173              	.LBE1048:
 321:fltk-1.3.4-1/src/Fl_Input_.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 2174              		.loc 2 321 0
 2175 0553 410FB67F 		movzbl	110(%r15), %edi
 2175      6E
 2176 0558 418B4764 		movl	100(%r15), %eax
 2177 055c 89442438 		movl	%eax, 56(%rsp)
 2178 0560 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 2178      00
 2179              	.LVL241:
 320:fltk-1.3.4-1/src/Fl_Input_.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 2180              		.loc 2 320 0
 2181 0565 8B4C240C 		movl	12(%rsp), %ecx
 321:fltk-1.3.4-1/src/Fl_Input_.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 2182              		.loc 2 321 0
 2183 0569 410FB67F 		movzbl	110(%r15), %edi
 2183      6E
 320:fltk-1.3.4-1/src/Fl_Input_.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 2184              		.loc 2 320 0
 2185 056e 448D0C01 		leal	(%rcx,%rax), %r9d
 2186 0572 44894C24 		movl	%r9d, 100(%rsp)
 2186      64
 2187              	.LVL242:
 321:fltk-1.3.4-1/src/Fl_Input_.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 2188              		.loc 2 321 0
 2189 0577 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 2189      00
 2190              	.LVL243:
 320:fltk-1.3.4-1/src/Fl_Input_.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 2191              		.loc 2 320 0
 2192 057c 8B4C2428 		movl	40(%rsp), %ecx
 2193 0580 410FB67F 		movzbl	110(%r15), %edi
 2193      6E
 2194 0585 448D0401 		leal	(%rcx,%rax), %r8d
 2195 0589 44894424 		movl	%r8d, 92(%rsp)
 2195      5C
 2196              	.LVL244:
 2197 058e E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 2197      00
 2198              	.LVL245:
 2199 0593 8B4C2458 		movl	88(%rsp), %ecx
 2200 0597 410FB67F 		movzbl	110(%r15), %edi
 2200      6E
 2201 059c 29C1     		subl	%eax, %ecx
 2202 059e 894C2450 		movl	%ecx, 80(%rsp)
 2203              	.LVL246:
 2204 05a2 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 2204      00
 2205              	.LVL247:
 321:fltk-1.3.4-1/src/Fl_Input_.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 2206              		.loc 2 321 0
 2207 05a7 8B542440 		movl	64(%rsp), %edx
 2208 05ab 4883EC08 		subq	$8, %rsp
 2209              		.cfi_def_cfa_offset 1240
 2210 05af 410FB677 		movzbl	110(%r15), %esi
 2210      6E
 2211 05b4 4C89FF   		movq	%r15, %rdi
 2212 05b7 29C2     		subl	%eax, %edx
 2213 05b9 8B442440 		movl	64(%rsp), %eax
 2214 05bd 50       		pushq	%rax
 2215              		.cfi_def_cfa_offset 1248
 2216 05be 448B4C24 		movl	116(%rsp), %r9d
 2216      74
 2217 05c3 448B4424 		movl	108(%rsp), %r8d
 2217      6C
 2218 05c8 8B4C2460 		movl	96(%rsp), %ecx
 2219 05cc E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2219      00
 2220              	.LVL248:
 2221              	.LBE1051:
 2222 05d1 4159     		popq	%r9
 2223              		.cfi_def_cfa_offset 1240
 2224 05d3 415A     		popq	%r10
 2225              		.cfi_def_cfa_offset 1232
 2226              	.LVL249:
 2227              	.L179:
 2228              	.LBE1057:
 2229              	.LBB1058:
 328:fltk-1.3.4-1/src/Fl_Input_.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2230              		.loc 2 328 0
 2231 05d5 8B4C2444 		movl	68(%rsp), %ecx
 2232 05d9 8B7C2448 		movl	72(%rsp), %edi
 2233 05dd 39F9     		cmpl	%edi, %ecx
 2234 05df 7D27     		jge	.L187
 2235 05e1 498B4778 		movq	120(%r15), %rax
 2236              	.LVL250:
 328:fltk-1.3.4-1/src/Fl_Input_.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2237              		.loc 2 328 0 is_stmt 0 discriminator 1
 2238 05e5 4863D1   		movslq	%ecx, %rdx
 2239 05e8 4889D9   		movq	%rbx, %rcx
 2240 05eb 4829C1   		subq	%rax, %rcx
 2241 05ee 4839CA   		cmpq	%rcx, %rdx
 2242 05f1 7F15     		jg	.L187
 2243              	.LVL251:
 328:fltk-1.3.4-1/src/Fl_Input_.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2244              		.loc 2 328 0 discriminator 3
 2245 05f3 4C89E9   		movq	%r13, %rcx
 2246 05f6 4C63CF   		movslq	%edi, %r9
 2247 05f9 4829C1   		subq	%rax, %rcx
 2248 05fc 4939C9   		cmpq	%rcx, %r9
 2249 05ff 0F8F8B01 		jg	.L188
 2249      0000
 2250              	.LVL252:
 2251              		.p2align 4,,10
 2252 0605 0F1F00   		.p2align 3
 2253              	.L187:
 2254              	.LBB1059:
 2255              	.LBB1060:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2256              		.loc 5 52 0 is_stmt 1
 2257 0608 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2257      000000
 2258 060f 8B742460 		movl	96(%rsp), %esi
 2259 0613 488B07   		movq	(%rdi), %rax
 2260 0616 FF908800 		call	*136(%rax)
 2260      0000
 2261              	.LVL253:
 2262              	.LBE1060:
 2263              	.LBE1059:
 368:fltk-1.3.4-1/src/Fl_Input_.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 2264              		.loc 2 368 0
 2265 061c 4C89F6   		movq	%r14, %rsi
 2266              	.L208:
 2267 061f 8B16     		movl	(%rsi), %edx
 2268 0621 4883C604 		addq	$4, %rsi
 2269 0625 8D82FFFE 		leal	-16843009(%rdx), %eax
 2269      FEFE
 2270 062b F7D2     		notl	%edx
 2271 062d 21D0     		andl	%edx, %eax
 2272 062f 25808080 		andl	$-2139062144, %eax
 2272      80
 2273 0634 74E9     		je	.L208
 2274 0636 660FEFC9 		pxor	%xmm1, %xmm1
 2275 063a 89C2     		movl	%eax, %edx
 2276 063c 4C89F7   		movq	%r14, %rdi
 2277 063f C1EA10   		shrl	$16, %edx
 2278 0642 A9808000 		testl	$32896, %eax
 2278      00
 2279 0647 0F44C2   		cmove	%edx, %eax
 2280 064a 488D5602 		leaq	2(%rsi), %rdx
 2281 064e F30F2A4C 		cvtsi2ss	24(%rsp), %xmm1
 2281      2418
 2282 0654 89C1     		movl	%eax, %ecx
 2283 0656 480F44F2 		cmove	%rdx, %rsi
 2284 065a 00C1     		addb	%al, %cl
 2285 065c 4883DE03 		sbbq	$3, %rsi
 2286 0660 F30F1044 		movss	76(%rsp), %xmm0
 2286      244C
 2287 0666 4C29F6   		subq	%r14, %rsi
 2288 0669 E8000000 		call	_Z7fl_drawPKciff
 2288      00
 2289              	.LVL254:
 2290              	.L210:
 2291              	.LBE1058:
 371:fltk-1.3.4-1/src/Fl_Input_.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 2292              		.loc 2 371 0
 2293 066e 807C2437 		cmpb	$0, 55(%rsp)
 2293      00
 2294 0673 7810     		js	.L254
 2295              	.LBB1073:
 2296              	.LBB1074:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2297              		.loc 5 103 0
 2298 0675 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2298      000000
 2299 067c 488B07   		movq	(%rdi), %rax
 2300 067f FF907001 		call	*368(%rax)
 2300      0000
 2301              	.LVL255:
 2302              	.L254:
 2303 0685 498B4F78 		movq	120(%r15), %rcx
 2304              	.L180:
 2305              	.LBE1074:
 2306              	.LBE1073:
 375:fltk-1.3.4-1/src/Fl_Input_.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 2307              		.loc 2 375 0
 2308 0689 4C393D00 		cmpq	%r15, _ZN2Fl6focus_E(%rip)
 2308      000000
 2309 0690 0F85E6FD 		jne	.L177
 2309      FFFF
 2310 0696 8B7C2448 		movl	72(%rsp), %edi
 2311 069a 397C2444 		cmpl	%edi, 68(%rsp)
 2312 069e 0F85D8FD 		jne	.L177
 2312      FFFF
 2313              	.LVL256:
 380:fltk-1.3.4-1/src/Fl_Input_.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 2314              		.loc 2 380 0
 2315 06a4 49638790 		movslq	144(%r15), %rax
 2315      000000
 2316              	.LVL257:
 379:fltk-1.3.4-1/src/Fl_Input_.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 2317              		.loc 2 379 0
 2318 06ab 4C89EA   		movq	%r13, %rdx
 2319 06ae 4829CA   		subq	%rcx, %rdx
 2320 06b1 4839D0   		cmpq	%rdx, %rax
 2321 06b4 0F8CC2FD 		jl	.L177
 2321      FFFF
 2322              	.LVL258:
 380:fltk-1.3.4-1/src/Fl_Input_.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 2323              		.loc 2 380 0 discriminator 3
 2324 06ba 4889DA   		movq	%rbx, %rdx
 2325 06bd 4829CA   		subq	%rcx, %rdx
 2326 06c0 4839D0   		cmpq	%rdx, %rax
 2327 06c3 0F8FB3FD 		jg	.L177
 2327      FFFF
 2328              	.LVL259:
 2329              	.LBB1075:
 2330              	.LBB1076:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2331              		.loc 5 52 0
 2332 06c9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2332      000000
 2333 06d0 418BB7C0 		movl	192(%r15), %esi
 2333      000000
 2334 06d7 488B07   		movq	(%rdi), %rax
 2335 06da FF908800 		call	*136(%rax)
 2335      0000
 2336              	.LVL260:
 2337              	.LBE1076:
 2338              	.LBE1075:
 383:fltk-1.3.4-1/src/Fl_Input_.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 2339              		.loc 2 383 0
 2340 06e0 49639790 		movslq	144(%r15), %rdx
 2340      000000
 2341 06e7 4531C0   		xorl	%r8d, %r8d
 2342 06ea 4C89F1   		movq	%r14, %rcx
 2343 06ed 49035778 		addq	120(%r15), %rdx
 2344 06f1 4C89EE   		movq	%r13, %rsi
 2345 06f4 4C89FF   		movq	%r15, %rdi
 2346 06f7 E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 2346      00
 2347              	.LVL261:
 2348 06fc F20F5805 		addsd	.LC17(%rip), %xmm0
 2348      00000000 
 384:fltk-1.3.4-1/src/Fl_Input_.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 2349              		.loc 2 384 0
 2350 0704 41F6476C 		testb	$8, 108(%r15)
 2350      08
 383:fltk-1.3.4-1/src/Fl_Input_.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 2351              		.loc 2 383 0
 2352 0709 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2353 070d 89442414 		movl	%eax, 20(%rsp)
 2354              	.LVL262:
 384:fltk-1.3.4-1/src/Fl_Input_.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 2355              		.loc 2 384 0
 2356 0711 0F8421FD 		je	.L267
 2356      FFFF
 387:fltk-1.3.4-1/src/Fl_Input_.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2357              		.loc 2 387 0
 2358 0717 660FEFC0 		pxor	%xmm0, %xmm0
 2359              	.LBB1077:
 2360              	.LBB1078:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 2361              		.loc 5 227 0
 2362 071b F30F1015 		movss	.LC18(%rip), %xmm2
 2362      00000000 
 2363 0723 F30F100D 		movss	.LC19(%rip), %xmm1
 2363      00000000 
 2364 072b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2364      000000
 2365 0732 448B4424 		movl	32(%rsp), %r8d
 2365      20
 2366 0737 4883EC08 		subq	$8, %rsp
 2367              		.cfi_def_cfa_offset 1240
 2368              	.LBE1078:
 2369              	.LBE1077:
 387:fltk-1.3.4-1/src/Fl_Input_.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2370              		.loc 2 387 0
 2371 073b F30F2A44 		cvtsi2ss	28(%rsp), %xmm0
 2371      241C
 2372              	.LBB1081:
 2373              	.LBB1079:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 2374              		.loc 5 227 0
 2375 0741 488B07   		movq	(%rdi), %rax
 2376              	.LVL263:
 2377 0744 418D5003 		leal	3(%r8), %edx
 2378              	.LBE1079:
 2379              	.LBE1081:
 387:fltk-1.3.4-1/src/Fl_Input_.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2380              		.loc 2 387 0
 2381 0748 F30F5844 		addss	84(%rsp), %xmm0
 2381      2454
 2382              	.LVL264:
 2383              	.LBB1082:
 2384              	.LBB1080:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 2385              		.loc 5 227 0
 2386 074e 52       		pushq	%rdx
 2387              		.cfi_def_cfa_offset 1248
 2388 074f F30F58D0 		addss	%xmm0, %xmm2
 2389 0753 F30F58C8 		addss	%xmm0, %xmm1
 2390 0757 F30F5C05 		subss	.LC20(%rip), %xmm0
 2390      00000000 
 2391              	.LVL265:
 2392 075f F3440F2C 		cvttss2si	%xmm2, %r9d
 2392      CA
 2393              	.LVL266:
 2394 0764 F30F2CC9 		cvttss2si	%xmm1, %ecx
 2395              	.LVL267:
 2396 0768 F30F2CF0 		cvttss2si	%xmm0, %esi
 2397              	.LVL268:
 2398 076c FF5068   		call	*104(%rax)
 2399              	.LVL269:
 2400 076f 5F       		popq	%rdi
 2401              		.cfi_def_cfa_offset 1240
 2402 0770 498B4F78 		movq	120(%r15), %rcx
 2403 0774 4158     		popq	%r8
 2404              		.cfi_def_cfa_offset 1232
 2405 0776 E901FDFF 		jmp	.L177
 2405      FF
 2406              	.LVL270:
 2407 077b 0F1F4400 		.p2align 4,,10
 2407      00
 2408              		.p2align 3
 2409              	.L217:
 2410              	.LBE1080:
 2411              	.LBE1082:
 399:fltk-1.3.4-1/src/Fl_Input_.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 2412              		.loc 2 399 0 discriminator 1
 2413 0780 4883C301 		addq	$1, %rbx
 2414              	.LVL271:
 2415 0784 E91CFDFF 		jmp	.L196
 2415      FF
 2416              	.LVL272:
 2417 0789 0F1F8000 		.p2align 4,,10
 2417      000000
 2418              		.p2align 3
 2419              	.L188:
 2420              	.LBB1083:
 2421              	.LBB1061:
 329:fltk-1.3.4-1/src/Fl_Input_.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 2422              		.loc 2 329 0
 2423 0790 4801C2   		addq	%rax, %rdx
 2424              	.LVL273:
 331:fltk-1.3.4-1/src/Fl_Input_.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2425              		.loc 2 331 0
 2426 0793 C7442478 		movl	$0, 120(%rsp)
 2426      00000000 
 332:fltk-1.3.4-1/src/Fl_Input_.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 2427              		.loc 2 332 0
 2428 079b 4C39EA   		cmpq	%r13, %rdx
 2429 079e 0F878C02 		ja	.L206
 2429      0000
 2430 07a4 660FEFFF 		pxor	%xmm7, %xmm7
 330:fltk-1.3.4-1/src/Fl_Input_.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 2431              		.loc 2 330 0
 2432 07a8 F30F1074 		movss	76(%rsp), %xmm6
 2432      244C
 2433 07ae F30F1174 		movss	%xmm6, 56(%rsp)
 2433      2438
 2434 07b4 F30F2A7C 		cvtsi2ss	24(%rsp), %xmm7
 2434      2418
 2435 07ba F30F117C 		movss	%xmm7, 100(%rsp)
 2435      2464
 2436              	.LVL274:
 2437              	.L207:
 337:fltk-1.3.4-1/src/Fl_Input_.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2438              		.loc 2 337 0
 2439 07c0 4C01C8   		addq	%r9, %rax
 340:fltk-1.3.4-1/src/Fl_Input_.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2440              		.loc 2 340 0
 2441 07c3 4839C3   		cmpq	%rax, %rbx
 337:fltk-1.3.4-1/src/Fl_Input_.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2442              		.loc 2 337 0
 2443 07c6 48894424 		movq	%rax, 80(%rsp)
 2443      50
 2444              	.LVL275:
 340:fltk-1.3.4-1/src/Fl_Input_.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2445              		.loc 2 340 0
 2446 07cb 0F832F02 		jnb	.L268
 2446      0000
 338:fltk-1.3.4-1/src/Fl_Input_.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 2447              		.loc 2 338 0
 2448 07d1 8B442428 		movl	40(%rsp), %eax
 2449              	.LVL276:
 2450 07d5 03442440 		addl	64(%rsp), %eax
 2451              	.LVL277:
 341:fltk-1.3.4-1/src/Fl_Input_.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 2452              		.loc 2 341 0
 2453 07d9 4C89F2   		movq	%r14, %rdx
 338:fltk-1.3.4-1/src/Fl_Input_.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 2454              		.loc 2 338 0
 2455 07dc 660FEFED 		pxor	%xmm5, %xmm5
 2456 07e0 F30F2AE8 		cvtsi2ss	%eax, %xmm5
 2457 07e4 F30F116C 		movss	%xmm5, 92(%rsp)
 2457      245C
 2458              	.LVL278:
 2459              	.L191:
 341:fltk-1.3.4-1/src/Fl_Input_.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 2460              		.loc 2 341 0
 2461 07ea 8B0A     		movl	(%rdx), %ecx
 2462 07ec 4883C204 		addq	$4, %rdx
 2463 07f0 8D81FFFE 		leal	-16843009(%rcx), %eax
 2463      FEFE
 2464 07f6 F7D1     		notl	%ecx
 2465 07f8 21C8     		andl	%ecx, %eax
 2466 07fa 25808080 		andl	$-2139062144, %eax
 2466      80
 2467 07ff 74E9     		je	.L191
 2468 0801 89C1     		movl	%eax, %ecx
 2469 0803 C1E910   		shrl	$16, %ecx
 2470 0806 A9808000 		testl	$32896, %eax
 2470      00
 2471 080b 0F44C1   		cmove	%ecx, %eax
 2472 080e 488D4A02 		leaq	2(%rdx), %rcx
 2473 0812 89C7     		movl	%eax, %edi
 2474 0814 480F44D1 		cmove	%rcx, %rdx
 2475 0818 4000C7   		addb	%al, %dil
 2476 081b 4883DA03 		sbbq	$3, %rdx
 2477 081f 4C29F2   		subq	%r14, %rdx
 2478 0822 8954247C 		movl	%edx, 124(%rsp)
 2479              	.LVL279:
 2480              	.L190:
 2481              	.LBB1062:
 2482              	.LBB1063:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2483              		.loc 5 52 0
 2484 0826 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2484      000000
 2485 082d 418B7768 		movl	104(%r15), %esi
 2486 0831 488B07   		movq	(%rdi), %rax
 2487 0834 FF908800 		call	*136(%rax)
 2487      0000
 2488              	.LVL280:
 2489              	.LBE1063:
 2490              	.LBE1062:
 2491              	.LBB1064:
 2492              	.LBB1065:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2493              		.loc 5 206 0
 2494 083a F30F1064 		movss	56(%rsp), %xmm4
 2494      2438
 2495 0840 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2495      000000
 2496 0847 F30F104C 		movss	92(%rsp), %xmm1
 2496      245C
 2497 084d 4189E8   		movl	%ebp, %r8d
 2498 0850 F30F5CCC 		subss	%xmm4, %xmm1
 2499 0854 F20F1005 		movsd	.LC17(%rip), %xmm0
 2499      00000000 
 2500 085c 488B07   		movq	(%rdi), %rax
 2501 085f 8B542410 		movl	16(%rsp), %edx
 2502 0863 F30F5AC9 		cvtss2sd	%xmm1, %xmm1
 2503 0867 F20F58C8 		addsd	%xmm0, %xmm1
 2504 086b F20F2CC9 		cvttsd2si	%xmm1, %ecx
 2505              	.LVL281:
 2506 086f 660FEFC9 		pxor	%xmm1, %xmm1
 2507 0873 F30F5ACC 		cvtss2sd	%xmm4, %xmm1
 2508 0877 F20F58C1 		addsd	%xmm1, %xmm0
 2509 087b F20F2CF0 		cvttsd2si	%xmm0, %esi
 2510 087f FF5020   		call	*32(%rax)
 2511              	.LVL282:
 2512              	.LBE1065:
 2513              	.LBE1064:
 351:fltk-1.3.4-1/src/Fl_Input_.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2514              		.loc 2 351 0
 2515 0882 418B7768 		movl	104(%r15), %esi
 2516 0886 418BBFBC 		movl	188(%r15), %edi
 2516      000000
 2517 088d E8000000 		call	_Z11fl_contrastjj
 2517      00
 2518              	.LVL283:
 2519              	.LBB1066:
 2520              	.LBB1067:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2521              		.loc 5 52 0
 2522 0892 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2522      000000
 2523 0899 89C6     		movl	%eax, %esi
 2524 089b 488B17   		movq	(%rdi), %rdx
 2525 089e FF928800 		call	*136(%rdx)
 2525      0000
 2526              	.LVL284:
 2527              	.LBE1067:
 2528              	.LBE1066:
 353:fltk-1.3.4-1/src/Fl_Input_.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2529              		.loc 2 353 0
 2530 08a4 48637C24 		movslq	120(%rsp), %rdi
 2530      78
 2531 08a9 8B74247C 		movl	124(%rsp), %esi
 2532 08ad F30F104C 		movss	100(%rsp), %xmm1
 2532      2464
 2533 08b3 F30F1044 		movss	56(%rsp), %xmm0
 2533      2438
 2534 08b9 29FE     		subl	%edi, %esi
 2535 08bb 4C01F7   		addq	%r14, %rdi
 2536 08be E8000000 		call	_Z7fl_drawPKciff
 2536      00
 2537              	.LVL285:
 361:fltk-1.3.4-1/src/Fl_Input_.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 2538              		.loc 2 361 0
 2539 08c3 483B5C24 		cmpq	80(%rsp), %rbx
 2539      50
 2540 08c8 0F86A0FD 		jbe	.L210
 2540      FFFF
 2541              	.LVL286:
 2542              	.LBB1068:
 2543              	.LBB1069:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2544              		.loc 5 52 0
 2545 08ce 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2545      000000
 2546 08d5 8B742460 		movl	96(%rsp), %esi
 2547 08d9 488B07   		movq	(%rdi), %rax
 2548 08dc FF908800 		call	*136(%rax)
 2548      0000
 2549              	.LVL287:
 2550              	.LBE1069:
 2551              	.LBE1068:
 363:fltk-1.3.4-1/src/Fl_Input_.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2552              		.loc 2 363 0
 2553 08e2 48634424 		movslq	124(%rsp), %rax
 2553      7C
 2554 08e7 498D1406 		leaq	(%r14,%rax), %rdx
 2555 08eb 4889D7   		movq	%rdx, %rdi
 2556 08ee 48895424 		movq	%rdx, 56(%rsp)
 2556      38
 2557              	.LVL288:
 2558 08f3 E8000000 		call	strlen
 2558      00
 2559              	.LVL289:
 2560 08f8 488B5424 		movq	56(%rsp), %rdx
 2560      38
 2561 08fd F30F104C 		movss	100(%rsp), %xmm1
 2561      2464
 2562 0903 F30F1044 		movss	92(%rsp), %xmm0
 2562      245C
 2563 0909 89C6     		movl	%eax, %esi
 2564 090b 4889D7   		movq	%rdx, %rdi
 2565 090e E8000000 		call	_Z7fl_drawPKciff
 2565      00
 2566              	.LVL290:
 2567 0913 E956FDFF 		jmp	.L210
 2567      FF
 2568              	.LVL291:
 2569 0918 0F1F8400 		.p2align 4,,10
 2569      00000000 
 2570              		.p2align 3
 2571              	.L251:
 2572 0920 4C89FB   		movq	%r15, %rbx
 2573              	.LVL292:
 2574              	.L173:
 2575              	.LBE1061:
 2576              	.LBE1083:
 2577              	.LBE1088:
 2578              	.LBE1093:
 405:fltk-1.3.4-1/src/Fl_Input_.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2579              		.loc 2 405 0
 2580 0923 0FB6436C 		movzbl	108(%rbx), %eax
 2581 0927 83E007   		andl	$7, %eax
 2582 092a 3C04     		cmpb	$4, %al
 2583 092c 0F84F901 		je	.L269
 2583      0000
 2584              	.LVL293:
 2585              	.L198:
 2586              	.LBB1094:
 2587              	.LBB1095:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2588              		.loc 5 103 0
 2589 0932 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2589      000000
 2590 0939 488B07   		movq	(%rdi), %rax
 2591 093c FF907001 		call	*368(%rax)
 2591      0000
 2592              	.LVL294:
 2593              	.LBE1095:
 2594              	.LBE1094:
 414:fltk-1.3.4-1/src/Fl_Input_.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 2595              		.loc 2 414 0
 2596 0942 483B1D00 		cmpq	_ZN2Fl6focus_E(%rip), %rbx
 2596      000000
 2597 0949 0F85B9FA 		jne	.L155
 2597      FFFF
 415:fltk-1.3.4-1/src/Fl_Input_.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 2598              		.loc 2 415 0
 2599 094f 4889DF   		movq	%rbx, %rdi
 2600 0952 E8000000 		call	_ZNK9Fl_Widget6windowEv
 2600      00
 2601              	.LVL295:
 2602              	.LBB1096:
 2603              	.LBB1097:
 533:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 2604              		.loc 5 533 0
 2605 0957 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2605      000000
 2606              	.LBE1097:
 2607              	.LBE1096:
 415:fltk-1.3.4-1/src/Fl_Input_.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 2608              		.loc 2 415 0
 2609 095e 4889C5   		movq	%rax, %rbp
 416:fltk-1.3.4-1/src/Fl_Input_.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 2610              		.loc 2 416 0
 2611 0961 44036424 		addl	88(%rsp), %r12d
 2611      58
 2612              	.LVL296:
 2613              	.LBB1099:
 2614              	.LBB1098:
 533:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 2615              		.loc 5 533 0
 2616 0966 488B07   		movq	(%rdi), %rax
 2617 0969 FF90D801 		call	*472(%rax)
 2617      0000
 2618              	.LVL297:
 2619              	.LBE1098:
 2620              	.LBE1099:
 416:fltk-1.3.4-1/src/Fl_Input_.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 2621              		.loc 2 416 0
 2622 096f F30F2C54 		cvttss2si	76(%rsp), %edx
 2622      244C
 2623 0975 4883EC08 		subq	$8, %rsp
 2624              		.cfi_def_cfa_offset 1240
 2625 0979 0354241C 		addl	28(%rsp), %edx
 2626 097d 8BB3B800 		movl	184(%rbx), %esi
 2626      0000
 2627 0983 8BBBB400 		movl	180(%rbx), %edi
 2627      0000
 2628 0989 55       		pushq	%rbp
 2629              		.cfi_def_cfa_offset 1248
 2630 098a 4489E1   		movl	%r12d, %ecx
 2631 098d 448B4C24 		movl	28(%rsp), %r9d
 2631      1C
 2632 0992 448B4424 		movl	56(%rsp), %r8d
 2632      38
 2633 0997 29C1     		subl	%eax, %ecx
 2634 0999 E8000000 		call	_Z11fl_set_spotiiiiiiP9Fl_Window
 2634      00
 2635              	.LVL298:
 2636 099e 59       		popq	%rcx
 2637              		.cfi_def_cfa_offset 1240
 2638 099f 5E       		popq	%rsi
 2639              		.cfi_def_cfa_offset 1232
 2640 09a0 E963FAFF 		jmp	.L155
 2640      FF
 2641              	.LVL299:
 2642              		.p2align 4,,10
 2643 09a5 0F1F00   		.p2align 3
 2644              	.L261:
 2645              	.LBB1100:
 2646              	.LBB1029:
 2647              	.LBB1027:
 2648              	.LBB1025:
 2649              	.LBB1024:
 2650              	.LBB1022:
 256:fltk-1.3.4-1/src/Fl_Input_.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2651              		.loc 2 256 0
 2652 09a8 8B542410 		movl	16(%rsp), %edx
 2653              	.LVL300:
 2654 09ac 03542414 		addl	20(%rsp), %edx
 258:fltk-1.3.4-1/src/Fl_Input_.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 2655              		.loc 2 258 0
 2656 09b0 4531C0   		xorl	%r8d, %r8d
 256:fltk-1.3.4-1/src/Fl_Input_.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2657              		.loc 2 256 0
 2658 09b3 2B542428 		subl	40(%rsp), %edx
 258:fltk-1.3.4-1/src/Fl_Input_.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 2659              		.loc 2 258 0
 2660 09b7 4C89F1   		movq	%r14, %rcx
 2661 09ba 4C89E6   		movq	%r12, %rsi
 2662 09bd 4889DF   		movq	%rbx, %rdi
 2663 09c0 48894424 		movq	%rax, 32(%rsp)
 2663      20
 256:fltk-1.3.4-1/src/Fl_Input_.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2664              		.loc 2 256 0
 2665 09c5 8954242C 		movl	%edx, 44(%rsp)
 2666              	.LVL301:
 258:fltk-1.3.4-1/src/Fl_Input_.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 2667              		.loc 2 258 0
 2668 09c9 4889C2   		movq	%rax, %rdx
 2669              	.LVL302:
 2670 09cc E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 2670      00
 2671              	.LVL303:
 2672 09d1 F20F2CD0 		cvttsd2si	%xmm0, %edx
 2673 09d5 448B5424 		movl	44(%rsp), %r10d
 2673      2C
 2674 09da 8B8B9C00 		movl	156(%rbx), %ecx
 2674      0000
 2675 09e0 488B4424 		movq	32(%rsp), %rax
 2675      20
 2676 09e5 83C204   		addl	$4, %edx
 2677 09e8 2B542428 		subl	40(%rsp), %edx
 2678              	.LVL304:
 2679 09ec 4139D2   		cmpl	%edx, %r10d
 2680 09ef 410F4ED2 		cmovle	%r10d, %edx
 2681              	.LVL305:
 2682 09f3 E995F7FF 		jmp	.L164
 2682      FF
 2683              	.LVL306:
 2684 09f8 0F1F8400 		.p2align 4,,10
 2684      00000000 
 2685              		.p2align 3
 2686              	.L268:
 2687              	.LBE1022:
 2688              	.LBE1024:
 2689              	.LBE1025:
 2690              	.LBE1027:
 2691              	.LBE1029:
 2692              	.LBE1100:
 2693              	.LBB1101:
 2694              	.LBB1089:
 2695              	.LBB1084:
 2696              	.LBB1072:
 340:fltk-1.3.4-1/src/Fl_Input_.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2697              		.loc 2 340 0 discriminator 1
 2698 0a00 4C8D4424 		leaq	124(%rsp), %r8
 2698      7C
 2699 0a05 4C89F1   		movq	%r14, %rcx
 2700 0a08 4889C2   		movq	%rax, %rdx
 2701 0a0b 4C89EE   		movq	%r13, %rsi
 2702 0a0e 4C89FF   		movq	%r15, %rdi
 2703 0a11 E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 2703      00
 2704              	.LVL307:
 2705 0a16 F20F5AC0 		cvtsd2ss	%xmm0, %xmm0
 2706 0a1a F30F5844 		addss	76(%rsp), %xmm0
 2706      244C
 2707 0a20 F30F1144 		movss	%xmm0, 92(%rsp)
 2707      245C
 2708              	.LVL308:
 2709 0a26 E9FBFDFF 		jmp	.L190
 2709      FF
 2710              	.LVL309:
 2711 0a2b 0F1F4400 		.p2align 4,,10
 2711      00
 2712              		.p2align 3
 2713              	.L206:
 2714              	.LBB1070:
 2715              	.LBB1071:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2716              		.loc 5 52 0
 2717 0a30 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2717      000000
 2718 0a37 4C894C24 		movq	%r9, 80(%rsp)
 2718      50
 2719 0a3c 48895424 		movq	%rdx, 56(%rsp)
 2719      38
 2720              	.LVL310:
 2721 0a41 8B742460 		movl	96(%rsp), %esi
 2722 0a45 488B07   		movq	(%rdi), %rax
 2723 0a48 FF908800 		call	*136(%rax)
 2723      0000
 2724              	.LVL311:
 2725              	.LBE1071:
 2726              	.LBE1070:
 334:fltk-1.3.4-1/src/Fl_Input_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 2727              		.loc 2 334 0
 2728 0a4e 488B5424 		movq	56(%rsp), %rdx
 2728      38
 2729 0a53 4C8D4424 		leaq	120(%rsp), %r8
 2729      78
 2730 0a58 4C89F1   		movq	%r14, %rcx
 2731 0a5b 4C89EE   		movq	%r13, %rsi
 2732 0a5e 4C89FF   		movq	%r15, %rdi
 2733 0a61 E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 2733      00
 2734              	.LVL312:
 2735 0a66 F20F5AC0 		cvtsd2ss	%xmm0, %xmm0
 2736 0a6a 0F28F0   		movaps	%xmm0, %xmm6
 335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2737              		.loc 2 335 0
 2738 0a6d 8B742478 		movl	120(%rsp), %esi
 334:fltk-1.3.4-1/src/Fl_Input_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 2739              		.loc 2 334 0
 2740 0a71 F30F107C 		movss	76(%rsp), %xmm7
 2740      244C
 335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2741              		.loc 2 335 0
 2742 0a77 4C89F7   		movq	%r14, %rdi
 334:fltk-1.3.4-1/src/Fl_Input_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 2743              		.loc 2 334 0
 2744 0a7a F30F58F7 		addss	%xmm7, %xmm6
 335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2745              		.loc 2 335 0
 2746 0a7e 0F28C7   		movaps	%xmm7, %xmm0
 334:fltk-1.3.4-1/src/Fl_Input_.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 2747              		.loc 2 334 0
 2748 0a81 F30F1174 		movss	%xmm6, 56(%rsp)
 2748      2438
 2749              	.LVL313:
 335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2750              		.loc 2 335 0
 2751 0a87 660FEFF6 		pxor	%xmm6, %xmm6
 2752              	.LVL314:
 2753 0a8b F30F2A74 		cvtsi2ss	24(%rsp), %xmm6
 2753      2418
 2754 0a91 0F28CE   		movaps	%xmm6, %xmm1
 2755 0a94 F30F1174 		movss	%xmm6, 100(%rsp)
 2755      2464
 2756 0a9a E8000000 		call	_Z7fl_drawPKciff
 2756      00
 2757              	.LVL315:
 2758 0a9f 498B4778 		movq	120(%r15), %rax
 2759 0aa3 4C8B4C24 		movq	80(%rsp), %r9
 2759      50
 2760 0aa8 E913FDFF 		jmp	.L207
 2760      FF
 2761              	.LVL316:
 2762 0aad 0F1F00   		.p2align 4,,10
 2763              		.p2align 3
 2764              	.L156:
 2765 0ab0 8B839000 		movl	144(%rbx), %eax
 2765      0000
 2766              	.LVL317:
 2767 0ab6 89C1     		movl	%eax, %ecx
 2768              	.LVL318:
 2769 0ab8 89442448 		movl	%eax, 72(%rsp)
 2770              	.LVL319:
 2771 0abc 8B839400 		movl	148(%rbx), %eax
 2771      0000
 2772              	.LBE1072:
 2773              	.LBE1084:
 2774              	.LBE1089:
 2775              	.LBE1101:
 231:fltk-1.3.4-1/src/Fl_Input_.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 2776              		.loc 2 231 0
 2777 0ac2 39C1     		cmpl	%eax, %ecx
 2778 0ac4 89442444 		movl	%eax, 68(%rsp)
 2779              	.LVL320:
 2780 0ac8 0F8FACF5 		jg	.L203
 2780      FFFF
 2781 0ace 894C2444 		movl	%ecx, 68(%rsp)
 2782 0ad2 89442448 		movl	%eax, 72(%rsp)
 2783 0ad6 E99FF5FF 		jmp	.L203
 2783      FF
 2784              	.LVL321:
 2785 0adb 0F1F4400 		.p2align 4,,10
 2785      00
 2786              		.p2align 3
 2787              	.L260:
 2788              	.LBB1102:
 2789              	.LBB1030:
 2790              	.LBB1028:
 2791              	.LBB1026:
 251:fltk-1.3.4-1/src/Fl_Input_.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 2792              		.loc 2 251 0 discriminator 1
 2793 0ae0 448B1D00 		movl	_ZN9Fl_Input_11was_up_downE(%rip), %r11d
 2793      000000
 2794 0ae7 4585DB   		testl	%r11d, %r11d
 2795 0aea 0F8566F6 		jne	.L205
 2795      FFFF
 251:fltk-1.3.4-1/src/Fl_Input_.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 2796              		.loc 2 251 0 is_stmt 0
 2797 0af0 660FEFC0 		pxor	%xmm0, %xmm0
 2798 0af4 F20F2A44 		cvtsi2sd	20(%rsp), %xmm0
 2798      2414
 2799 0afa F20F1105 		movsd	%xmm0, _ZN9Fl_Input_11up_down_posE(%rip)
 2799      00000000 
 2800 0b02 E94FF6FF 		jmp	.L205
 2800      FF
 2801              	.LVL322:
 2802 0b07 660F1F84 		.p2align 4,,10
 2802      00000000 
 2802      00
 2803              		.p2align 3
 2804              	.L215:
 2805 0b10 4C89F8   		movq	%r15, %rax
 2806 0b13 4989DF   		movq	%rbx, %r15
 2807              	.LVL323:
 2808 0b16 4889C3   		movq	%rax, %rbx
 2809              	.LVL324:
 2810              	.LBE1026:
 2811              	.LBE1028:
 2812              	.LBE1030:
 2813              	.LBE1102:
 2814              	.LBB1103:
 2815 0b19 4D89FD   		movq	%r15, %r13
 2816              	.LVL325:
 2817              	.LBE1103:
 405:fltk-1.3.4-1/src/Fl_Input_.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2818              		.loc 2 405 0 is_stmt 1
 2819 0b1c 0FB6436C 		movzbl	108(%rbx), %eax
 2820              	.LVL326:
 2821 0b20 83E007   		andl	$7, %eax
 2822 0b23 3C04     		cmpb	$4, %al
 2823 0b25 0F8507FE 		jne	.L198
 2823      FFFF
 2824              	.LVL327:
 2825              	.L269:
 404:fltk-1.3.4-1/src/Fl_Input_.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 2826              		.loc 2 404 0
 2827 0b2b 807C2437 		cmpb	$0, 55(%rsp)
 2827      00
 2828 0b30 0F88FCFD 		js	.L198
 2828      FFFF
 2829 0b36 443B6424 		cmpl	12(%rsp), %r12d
 2829      0C
 2830 0b3b 0F8DF1FD 		jge	.L198
 2830      FFFF
 405:fltk-1.3.4-1/src/Fl_Input_.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2831              		.loc 2 405 0
 2832 0b41 80BBB000 		cmpb	$0, 176(%rbx)
 2832      000000
 2833 0b48 0F854901 		jne	.L270
 2833      0000
 2834              	.L199:
 2835              	.LBB1104:
 2836              	.LBB1105:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2837              		.loc 5 82 0
 2838 0b4e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2838      000000
 2839 0b55 4585E4   		testl	%r12d, %r12d
 2840 0b58 8B6C240C 		movl	12(%rsp), %ebp
 2841              	.LVL328:
 2842 0b5c B8000000 		movl	$0, %eax
 2842      00
 2843 0b61 448B7424 		movl	88(%rsp), %r14d
 2843      58
 2844 0b66 8B4C2428 		movl	40(%rsp), %ecx
 2845 0b6a 440F48E0 		cmovs	%eax, %r12d
 2846              	.LVL329:
 2847 0b6e 8B742440 		movl	64(%rsp), %esi
 2848 0b72 488B07   		movq	(%rdi), %rax
 2849 0b75 4189E8   		movl	%ebp, %r8d
 2850 0b78 438D1426 		leal	(%r14,%r12), %edx
 2851              	.LVL330:
 2852 0b7c 4529E0   		subl	%r12d, %r8d
 2853              	.LVL331:
 2854 0b7f FF905001 		call	*336(%rax)
 2854      0000
 2855              	.LVL332:
 2856              	.LBE1105:
 2857              	.LBE1104:
 409:fltk-1.3.4-1/src/Fl_Input_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 2858              		.loc 2 409 0
 2859 0b85 0FB67B6E 		movzbl	110(%rbx), %edi
 2860 0b89 448B7B64 		movl	100(%rbx), %r15d
 2861              	.LVL333:
 2862 0b8d E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 2862      00
 2863              	.LVL334:
 2864 0b92 0FB67B6E 		movzbl	110(%rbx), %edi
 408:fltk-1.3.4-1/src/Fl_Input_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 2865              		.loc 2 408 0
 2866 0b96 448D6C05 		leal	0(%rbp,%rax), %r13d
 2866      00
 2867              	.LVL335:
 409:fltk-1.3.4-1/src/Fl_Input_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 2868              		.loc 2 409 0
 2869 0b9b E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 2869      00
 2870              	.LVL336:
 408:fltk-1.3.4-1/src/Fl_Input_.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 2871              		.loc 2 408 0
 2872 0ba0 0FB67B6E 		movzbl	110(%rbx), %edi
 2873 0ba4 8B742428 		movl	40(%rsp), %esi
 2874 0ba8 8D2C06   		leal	(%rsi,%rax), %ebp
 2875              	.LVL337:
 2876 0bab E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 2876      00
 2877              	.LVL338:
 2878 0bb0 0FB67B6E 		movzbl	110(%rbx), %edi
 2879 0bb4 4129C6   		subl	%eax, %r14d
 2880              	.LVL339:
 2881 0bb7 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 2881      00
 2882              	.LVL340:
 409:fltk-1.3.4-1/src/Fl_Input_.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 2883              		.loc 2 409 0
 2884 0bbc 8B542440 		movl	64(%rsp), %edx
 2885 0bc0 0FB6736E 		movzbl	110(%rbx), %esi
 2886 0bc4 4883EC08 		subq	$8, %rsp
 2887              		.cfi_def_cfa_offset 1240
 2888 0bc8 4157     		pushq	%r15
 2889              		.cfi_def_cfa_offset 1248
 2890 0bca 4589E9   		movl	%r13d, %r9d
 2891 0bcd 4189E8   		movl	%ebp, %r8d
 2892 0bd0 4489F1   		movl	%r14d, %ecx
 2893 0bd3 4889DF   		movq	%rbx, %rdi
 2894 0bd6 29C2     		subl	%eax, %edx
 2895 0bd8 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2895      00
 2896              	.LVL341:
 2897              	.LBB1106:
 2898              	.LBB1107:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2899              		.loc 5 103 0
 2900 0bdd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2900      000000
 2901 0be4 488B07   		movq	(%rdi), %rax
 2902 0be7 FF907001 		call	*368(%rax)
 2902      0000
 2903              	.LVL342:
 2904 0bed 58       		popq	%rax
 2905              		.cfi_def_cfa_offset 1240
 2906 0bee 5A       		popq	%rdx
 2907              		.cfi_def_cfa_offset 1232
 2908 0bef E93EFDFF 		jmp	.L198
 2908      FF
 2909              	.LVL343:
 2910              		.p2align 4,,10
 2911 0bf4 0F1F4000 		.p2align 3
 2912              	.L265:
 2913              	.LBE1107:
 2914              	.LBE1106:
 2915              	.LBB1108:
 2916              	.LBB1090:
 2917              	.LBB1085:
 2918              	.LBB1052:
 315:fltk-1.3.4-1/src/Fl_Input_.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 2919              		.loc 2 315 0 discriminator 1
 2920 0bf8 0F28CB   		movaps	%xmm3, %xmm1
 2921 0bfb F30F58C8 		addss	%xmm0, %xmm1
 2922              	.LVL344:
 2923 0bff E912F9FF 		jmp	.L185
 2923      FF
 2924              	.LVL345:
 2925              		.p2align 4,,10
 2926 0c04 0F1F4000 		.p2align 3
 2927              	.L171:
 2928              	.LBE1052:
 2929              	.LBE1085:
 2930              	.LBE1090:
 2931              	.LBE1108:
 287:fltk-1.3.4-1/src/Fl_Input_.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 2932              		.loc 2 287 0 discriminator 2
 2933 0c08 8BBBBC00 		movl	188(%rbx), %edi
 2933      0000
 2934 0c0e E8000000 		call	_Z11fl_inactivej
 2934      00
 2935              	.LVL346:
 2936 0c13 89442460 		movl	%eax, 96(%rsp)
 2937 0c17 E91BF6FF 		jmp	.L172
 2937      FF
 2938              	.LVL347:
 2939 0c1c 0F1F4000 		.p2align 4,,10
 2940              		.p2align 3
 2941              	.L263:
 2942 0c20 8B7C2418 		movl	24(%rsp), %edi
 2943              	.LBB1109:
 2944              	.LBB1039:
 277:fltk-1.3.4-1/src/Fl_Input_.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2945              		.loc 2 277 0
 2946 0c24 8B93A000 		movl	160(%rbx), %edx
 2946      0000
 2947              	.LVL348:
 279:fltk-1.3.4-1/src/Fl_Input_.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2948              		.loc 2 279 0
 2949 0c2a 8B74240C 		movl	12(%rsp), %esi
 2950 0c2e 39D7     		cmpl	%edx, %edi
 2951 0c30 89F8     		movl	%edi, %eax
 2952 0c32 0F4FC2   		cmovg	%edx, %eax
 2953              	.LVL349:
 2954 0c35 8D0C06   		leal	(%rsi,%rax), %ecx
 2955 0c38 29E9     		subl	%ebp, %ecx
 2956 0c3a 39CF     		cmpl	%ecx, %edi
 2957 0c3c 7E06     		jle	.L169
 279:fltk-1.3.4-1/src/Fl_Input_.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2958              		.loc 2 279 0 is_stmt 0 discriminator 1
 2959 0c3e 89F8     		movl	%edi, %eax
 2960              	.LVL350:
 2961 0c40 29F0     		subl	%esi, %eax
 2962              	.LVL351:
 2963 0c42 01E8     		addl	%ebp, %eax
 2964              	.LVL352:
 2965              	.L169:
 2966 0c44 85C0     		testl	%eax, %eax
 2967 0c46 B9FFFFFF 		movl	$-1, %ecx
 2967      FF
 2968 0c4b 0F48C1   		cmovs	%ecx, %eax
 2969              	.LVL353:
 281:fltk-1.3.4-1/src/Fl_Input_.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2970              		.loc 2 281 0 is_stmt 1
 2971 0c4e 39C2     		cmpl	%eax, %edx
 2972 0c50 0F84A6F5 		je	.L170
 2972      FFFF
 281:fltk-1.3.4-1/src/Fl_Input_.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2973              		.loc 2 281 0 is_stmt 0 discriminator 1
 2974 0c56 8983A000 		movl	%eax, 160(%rbx)
 2974      0000
 2975 0c5c C783A400 		movl	$0, 164(%rbx)
 2975      00000000 
 2975      0000
 2976 0c66 C683B000 		movb	$0, 176(%rbx)
 2976      000000
 2977 0c6d E98AF5FF 		jmp	.L170
 2977      FF
 2978              	.LVL354:
 2979              		.p2align 4,,10
 2980 0c72 660F1F44 		.p2align 3
 2980      0000
 2981              	.L264:
 2982              	.LBE1039:
 2983              	.LBE1109:
 2984              	.LBB1110:
 2985              	.LBB1091:
 2986              	.LBB1086:
 2987              	.LBB1053:
 310:fltk-1.3.4-1/src/Fl_Input_.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 2988              		.loc 2 310 0 is_stmt 1
 2989 0c78 660FEFDB 		pxor	%xmm3, %xmm3
 2990 0c7c F30F1005 		movss	.LC15(%rip), %xmm0
 2990      00000000 
 2991 0c84 F30F2A5C 		cvtsi2ss	64(%rsp), %xmm3
 2991      2440
 2992              	.LVL355:
 312:fltk-1.3.4-1/src/Fl_Input_.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 2993              		.loc 2 312 0
 2994 0c8a F30F5C1D 		subss	.LC16(%rip), %xmm3
 2994      00000000 
 2995              	.LVL356:
 2996 0c92 E97FF8FF 		jmp	.L185
 2996      FF
 2997              	.LVL357:
 2998              	.L270:
 2999              	.LBE1053:
 3000              	.LBE1086:
 3001              	.LBE1091:
 3002              	.LBE1110:
 405:fltk-1.3.4-1/src/Fl_Input_.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3003              		.loc 2 405 0 discriminator 3
 3004 0c97 486383A4 		movslq	164(%rbx), %rax
 3004      000000
 3005 0c9e 48034378 		addq	120(%rbx), %rax
 3006 0ca2 4939C5   		cmpq	%rax, %r13
 3007 0ca5 0F86A3FE 		jbe	.L199
 3007      FFFF
 3008 0cab E982FCFF 		jmp	.L198
 3008      FF
 3009              	.LVL358:
 3010              	.L266:
 418:fltk-1.3.4-1/src/Fl_Input_.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 3011              		.loc 2 418 0
 3012 0cb0 E8000000 		call	__stack_chk_fail
 3012      00
 3013              	.LVL359:
 3014              		.cfi_endproc
 3015              	.LFE525:
 3017              		.section	.text.unlikely._ZN9Fl_Input_8drawtextEiiii
 3018              	.LCOLDE21:
 3019              		.section	.text._ZN9Fl_Input_8drawtextEiiii
 3020              	.LHOTE21:
 3021              		.section	.text.unlikely._ZNK9Fl_Input_8word_endEi,"ax",@progbits
 3022              		.align 2
 3023              	.LCOLDB22:
 3024              		.section	.text._ZNK9Fl_Input_8word_endEi,"ax",@progbits
 3025              	.LHOTB22:
 3026              		.align 2
 3027              		.p2align 4,,15
 3028              		.globl	_ZNK9Fl_Input_8word_endEi
 3030              	_ZNK9Fl_Input_8word_endEi:
 3031              	.LFB527:
 441:fltk-1.3.4-1/src/Fl_Input_.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 3032              		.loc 2 441 0
 3033              		.cfi_startproc
 3034              	.LVL360:
 3035 0000 4154     		pushq	%r12
 3036              		.cfi_def_cfa_offset 16
 3037              		.cfi_offset 12, -16
 3038 0002 55       		pushq	%rbp
 3039              		.cfi_def_cfa_offset 24
 3040              		.cfi_offset 6, -24
 3041 0003 4889FD   		movq	%rdi, %rbp
 3042 0006 53       		pushq	%rbx
 3043              		.cfi_def_cfa_offset 32
 3044              		.cfi_offset 3, -32
 3045 0007 4883EC10 		subq	$16, %rsp
 3046              		.cfi_def_cfa_offset 48
 441:fltk-1.3.4-1/src/Fl_Input_.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 3047              		.loc 2 441 0
 3048 000b 64488B04 		movq	%fs:40, %rax
 3048      25280000 
 3048      00
 3049 0014 48894424 		movq	%rax, 8(%rsp)
 3049      08
 3050 0019 31C0     		xorl	%eax, %eax
 3051              	.LVL361:
 442:fltk-1.3.4-1/src/Fl_Input_.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 3052              		.loc 2 442 0
 3053 001b 0FB6476C 		movzbl	108(%rdi), %eax
 3054 001f 83E007   		andl	$7, %eax
 3055 0022 3C05     		cmpb	$5, %al
 3056 0024 0F84DE00 		je	.L272
 3056      0000
 3057 002a 89F3     		movl	%esi, %ebx
 3058 002c 4863B788 		movslq	136(%rdi), %rsi
 3058      000000
 3059              	.LVL362:
 443:fltk-1.3.4-1/src/Fl_Input_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 3060              		.loc 2 443 0 discriminator 8
 3061 0033 39DE     		cmpl	%ebx, %esi
 3062 0035 7F29     		jg	.L292
 3063              	.LVL363:
 3064 0037 660F1F84 		.p2align 4,,10
 3064      00000000 
 3064      00
 3065              		.p2align 3
 3066              	.L279:
 441:fltk-1.3.4-1/src/Fl_Input_.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 3067              		.loc 2 441 0
 3068 0040 89D8     		movl	%ebx, %eax
 3069              	.LVL364:
 3070              	.L275:
 446:fltk-1.3.4-1/src/Fl_Input_.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 3071              		.loc 2 446 0
 3072 0042 488B4C24 		movq	8(%rsp), %rcx
 3072      08
 3073 0047 6448330C 		xorq	%fs:40, %rcx
 3073      25280000 
 3073      00
 3074 0050 0F85BD00 		jne	.L293
 3074      0000
 3075 0056 4883C410 		addq	$16, %rsp
 3076              		.cfi_remember_state
 3077              		.cfi_def_cfa_offset 32
 3078 005a 5B       		popq	%rbx
 3079              		.cfi_def_cfa_offset 24
 3080 005b 5D       		popq	%rbp
 3081              		.cfi_def_cfa_offset 16
 3082              	.LVL365:
 3083 005c 415C     		popq	%r12
 3084              		.cfi_def_cfa_offset 8
 3085 005e C3       		ret
 3086              	.LVL366:
 3087 005f 90       		.p2align 4,,10
 3088              		.p2align 3
 3089              	.L292:
 3090              		.cfi_restore_state
 3091 0060 4C63E3   		movslq	%ebx, %r12
 3092              	.LVL367:
 3093              		.p2align 4,,10
 3094 0063 0F1F4400 		.p2align 3
 3094      00
 3095              	.L280:
 3096              	.LBB1111:
 3097              	.LBB1112:
 3098              		.loc 2 1337 0
 3099 0068 488B7D78 		movq	120(%rbp), %rdi
 3100 006c 488D5424 		leaq	4(%rsp), %rdx
 3100      04
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3101              		.loc 2 1336 0
 3102 0071 C7442404 		movl	$0, 4(%rsp)
 3102      00000000 
 3103              		.loc 2 1337 0
 3104 0079 4801FE   		addq	%rdi, %rsi
 3105 007c 4C01E7   		addq	%r12, %rdi
 3106 007f E8000000 		call	fl_utf8decode
 3106      00
 3107              	.LVL368:
 3108              	.LBE1112:
 3109              	.LBE1111:
 443:fltk-1.3.4-1/src/Fl_Input_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 3110              		.loc 2 443 0
 3111 0084 0FBEF8   		movsbl	%al, %edi
 3112 0087 E8000000 		call	_ZL6iswordc
 3112      00
 3113              	.LVL369:
 3114 008c 85C0     		testl	%eax, %eax
 3115 008e 7458     		je	.L276
 3116 0090 4863B588 		movslq	136(%rbp), %rsi
 3116      000000
 3117              	.LVL370:
 444:fltk-1.3.4-1/src/Fl_Input_.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 3118              		.loc 2 444 0
 3119 0097 39F3     		cmpl	%esi, %ebx
 3120 0099 7DA5     		jge	.L279
 3121 009b 4C63E3   		movslq	%ebx, %r12
 3122              	.L282:
 3123              	.LVL371:
 3124              	.LBB1113:
 3125              	.LBB1114:
 3126              		.loc 2 1337 0
 3127 009e 488B7D78 		movq	120(%rbp), %rdi
 3128 00a2 488D5424 		leaq	4(%rsp), %rdx
 3128      04
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3129              		.loc 2 1336 0
 3130 00a7 C7442404 		movl	$0, 4(%rsp)
 3130      00000000 
 3131              		.loc 2 1337 0
 3132 00af 4801FE   		addq	%rdi, %rsi
 3133 00b2 4C01E7   		addq	%r12, %rdi
 3134 00b5 E8000000 		call	fl_utf8decode
 3134      00
 3135              	.LVL372:
 3136              	.LBE1114:
 3137              	.LBE1113:
 444:fltk-1.3.4-1/src/Fl_Input_.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 3138              		.loc 2 444 0
 3139 00ba 0FBEF8   		movsbl	%al, %edi
 3140 00bd E8000000 		call	_ZL6iswordc
 3140      00
 3141              	.LVL373:
 3142 00c2 85C0     		testl	%eax, %eax
 3143 00c4 0F8476FF 		je	.L279
 3143      FFFF
 3144 00ca 4863B588 		movslq	136(%rbp), %rsi
 3144      000000
 3145 00d1 83C301   		addl	$1, %ebx
 3146              	.LVL374:
 3147 00d4 4983C401 		addq	$1, %r12
 3148 00d8 39F3     		cmpl	%esi, %ebx
 3149 00da 0F8D60FF 		jge	.L279
 3149      FFFF
 3150 00e0 EBBC     		jmp	.L282
 3151              	.LVL375:
 3152              		.p2align 4,,10
 3153 00e2 660F1F44 		.p2align 3
 3153      0000
 3154              	.L276:
 3155 00e8 4863B588 		movslq	136(%rbp), %rsi
 3155      000000
 443:fltk-1.3.4-1/src/Fl_Input_.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 3156              		.loc 2 443 0
 3157 00ef 83C301   		addl	$1, %ebx
 3158              	.LVL376:
 3159 00f2 4983C401 		addq	$1, %r12
 3160 00f6 39F3     		cmpl	%esi, %ebx
 3161 00f8 0F8D42FF 		jge	.L279
 3161      FFFF
 3162 00fe E965FFFF 		jmp	.L280
 3162      FF
 3163              	.LVL377:
 3164              		.p2align 4,,10
 3165 0103 0F1F4400 		.p2align 3
 3165      00
 3166              	.L272:
 3167 0108 8B878800 		movl	136(%rdi), %eax
 3167      0000
 3168              	.LVL378:
 442:fltk-1.3.4-1/src/Fl_Input_.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 3169              		.loc 2 442 0 discriminator 1
 3170 010e E92FFFFF 		jmp	.L275
 3170      FF
 3171              	.LVL379:
 3172              	.L293:
 446:fltk-1.3.4-1/src/Fl_Input_.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 3173              		.loc 2 446 0
 3174 0113 E8000000 		call	__stack_chk_fail
 3174      00
 3175              	.LVL380:
 3176              		.cfi_endproc
 3177              	.LFE527:
 3179              		.section	.text.unlikely._ZNK9Fl_Input_8word_endEi
 3180              	.LCOLDE22:
 3181              		.section	.text._ZNK9Fl_Input_8word_endEi
 3182              	.LHOTE22:
 3183              		.section	.text.unlikely._ZNK9Fl_Input_10word_startEi,"ax",@progbits
 3184              		.align 2
 3185              	.LCOLDB23:
 3186              		.section	.text._ZNK9Fl_Input_10word_startEi,"ax",@progbits
 3187              	.LHOTB23:
 3188              		.align 2
 3189              		.p2align 4,,15
 3190              		.globl	_ZNK9Fl_Input_10word_startEi
 3192              	_ZNK9Fl_Input_10word_startEi:
 3193              	.LFB528:
 461:fltk-1.3.4-1/src/Fl_Input_.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 3194              		.loc 2 461 0
 3195              		.cfi_startproc
 3196              	.LVL381:
 3197 0000 4155     		pushq	%r13
 3198              		.cfi_def_cfa_offset 16
 3199              		.cfi_offset 13, -16
 3200 0002 4154     		pushq	%r12
 3201              		.cfi_def_cfa_offset 24
 3202              		.cfi_offset 12, -24
 3203 0004 55       		pushq	%rbp
 3204              		.cfi_def_cfa_offset 32
 3205              		.cfi_offset 6, -32
 3206 0005 53       		pushq	%rbx
 3207              		.cfi_def_cfa_offset 40
 3208              		.cfi_offset 3, -40
 3209 0006 4883EC18 		subq	$24, %rsp
 3210              		.cfi_def_cfa_offset 64
 461:fltk-1.3.4-1/src/Fl_Input_.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 3211              		.loc 2 461 0
 3212 000a 64488B04 		movq	%fs:40, %rax
 3212      25280000 
 3212      00
 3213 0013 48894424 		movq	%rax, 8(%rsp)
 3213      08
 3214 0018 31C0     		xorl	%eax, %eax
 3215              	.LVL382:
 462:fltk-1.3.4-1/src/Fl_Input_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3216              		.loc 2 462 0
 3217 001a 0FB6476C 		movzbl	108(%rdi), %eax
 3218 001e 83E007   		andl	$7, %eax
 3219 0021 3C05     		cmpb	$5, %al
 3220 0023 0F84C700 		je	.L304
 3220      0000
 463:fltk-1.3.4-1/src/Fl_Input_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 3221              		.loc 2 463 0 discriminator 8
 3222 0029 85F6     		testl	%esi, %esi
 3223 002b 89F3     		movl	%esi, %ebx
 3224 002d 7E7E     		jle	.L300
 3225 002f 4C63E6   		movslq	%esi, %r12
 3226 0032 4989FD   		movq	%rdi, %r13
 463:fltk-1.3.4-1/src/Fl_Input_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 3227              		.loc 2 463 0 is_stmt 0
 3228 0035 89F5     		movl	%esi, %ebp
 3229 0037 4983EC01 		subq	$1, %r12
 3230              	.LVL383:
 3231 003b 0F1F4400 		.p2align 4,,10
 3231      00
 3232              		.p2align 3
 3233              	.L301:
 3234              	.LBB1115:
 3235              	.LBB1116:
 3236              		.loc 2 1337 0 is_stmt 1 discriminator 1
 3237 0040 4963B588 		movslq	136(%r13), %rsi
 3237      000000
 3238 0047 498B7D78 		movq	120(%r13), %rdi
 3239 004b 488D5424 		leaq	4(%rsp), %rdx
 3239      04
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3240              		.loc 2 1336 0 discriminator 1
 3241 0050 C7442404 		movl	$0, 4(%rsp)
 3241      00000000 
 3242              	.LBE1116:
 3243              	.LBE1115:
 463:fltk-1.3.4-1/src/Fl_Input_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 3244              		.loc 2 463 0 discriminator 1
 3245 0058 83EB01   		subl	$1, %ebx
 3246              	.LVL384:
 3247              	.LBB1118:
 3248              	.LBB1117:
 3249              		.loc 2 1337 0 discriminator 1
 3250 005b 4801FE   		addq	%rdi, %rsi
 3251 005e 4C01E7   		addq	%r12, %rdi
 3252 0061 E8000000 		call	fl_utf8decode
 3252      00
 3253              	.LVL385:
 3254              	.LBE1117:
 3255              	.LBE1118:
 463:fltk-1.3.4-1/src/Fl_Input_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 3256              		.loc 2 463 0 discriminator 1
 3257 0066 0FBEF8   		movsbl	%al, %edi
 3258 0069 E8000000 		call	_ZL6iswordc
 3258      00
 3259              	.LVL386:
 3260 006e 85C0     		testl	%eax, %eax
 3261 0070 745E     		je	.L297
 3262 0072 4C63E5   		movslq	%ebp, %r12
 3263 0075 4983EC01 		subq	$1, %r12
 3264              	.L302:
 3265              	.LBB1119:
 3266              	.LBB1120:
 3267              		.loc 2 1337 0 discriminator 1
 3268 0079 4963B588 		movslq	136(%r13), %rsi
 3268      000000
 3269 0080 498B7D78 		movq	120(%r13), %rdi
 3270 0084 488D5424 		leaq	4(%rsp), %rdx
 3270      04
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3271              		.loc 2 1336 0 discriminator 1
 3272 0089 C7442404 		movl	$0, 4(%rsp)
 3272      00000000 
 3273              	.LBE1120:
 3274              	.LBE1119:
 464:fltk-1.3.4-1/src/Fl_Input_.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 3275              		.loc 2 464 0 discriminator 1
 3276 0091 8D5DFF   		leal	-1(%rbp), %ebx
 3277              	.LVL387:
 3278              	.LBB1122:
 3279              	.LBB1121:
 3280              		.loc 2 1337 0 discriminator 1
 3281 0094 4801FE   		addq	%rdi, %rsi
 3282 0097 4C01E7   		addq	%r12, %rdi
 3283 009a E8000000 		call	fl_utf8decode
 3283      00
 3284              	.LVL388:
 3285              	.LBE1121:
 3286              	.LBE1122:
 464:fltk-1.3.4-1/src/Fl_Input_.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 3287              		.loc 2 464 0 discriminator 1
 3288 009f 0FBEF8   		movsbl	%al, %edi
 3289 00a2 E8000000 		call	_ZL6iswordc
 3289      00
 3290              	.LVL389:
 3291 00a7 85C0     		testl	%eax, %eax
 3292 00a9 7535     		jne	.L299
 3293 00ab 89EB     		movl	%ebp, %ebx
 3294              	.LVL390:
 3295              	.L300:
 462:fltk-1.3.4-1/src/Fl_Input_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3296              		.loc 2 462 0
 3297 00ad 89D8     		movl	%ebx, %eax
 3298              	.LVL391:
 3299              	.L295:
 466:fltk-1.3.4-1/src/Fl_Input_.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 3300              		.loc 2 466 0
 3301 00af 488B4C24 		movq	8(%rsp), %rcx
 3301      08
 3302 00b4 6448330C 		xorq	%fs:40, %rcx
 3302      25280000 
 3302      00
 3303 00bd 7535     		jne	.L312
 3304 00bf 4883C418 		addq	$24, %rsp
 3305              		.cfi_remember_state
 3306              		.cfi_def_cfa_offset 40
 3307 00c3 5B       		popq	%rbx
 3308              		.cfi_def_cfa_offset 32
 3309 00c4 5D       		popq	%rbp
 3310              		.cfi_def_cfa_offset 24
 3311 00c5 415C     		popq	%r12
 3312              		.cfi_def_cfa_offset 16
 3313 00c7 415D     		popq	%r13
 3314              		.cfi_def_cfa_offset 8
 3315 00c9 C3       		ret
 3316              	.LVL392:
 3317 00ca 660F1F44 		.p2align 4,,10
 3317      0000
 3318              		.p2align 3
 3319              	.L297:
 3320              		.cfi_restore_state
 3321 00d0 4983EC01 		subq	$1, %r12
 463:fltk-1.3.4-1/src/Fl_Input_.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 3322              		.loc 2 463 0
 3323 00d4 85DB     		testl	%ebx, %ebx
 3324 00d6 89DD     		movl	%ebx, %ebp
 3325 00d8 0F8562FF 		jne	.L301
 3325      FFFF
 3326 00de EBCD     		jmp	.L300
 3327              	.LVL393:
 3328              		.p2align 4,,10
 3329              		.p2align 3
 3330              	.L299:
 3331 00e0 4983EC01 		subq	$1, %r12
 464:fltk-1.3.4-1/src/Fl_Input_.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 3332              		.loc 2 464 0
 3333 00e4 85DB     		testl	%ebx, %ebx
 3334 00e6 89DD     		movl	%ebx, %ebp
 3335 00e8 758F     		jne	.L302
 3336 00ea EBC1     		jmp	.L300
 3337              	.LVL394:
 3338 00ec 0F1F4000 		.p2align 4,,10
 3339              		.p2align 3
 3340              	.L304:
 462:fltk-1.3.4-1/src/Fl_Input_.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3341              		.loc 2 462 0
 3342 00f0 31C0     		xorl	%eax, %eax
 3343 00f2 EBBB     		jmp	.L295
 3344              	.LVL395:
 3345              	.L312:
 466:fltk-1.3.4-1/src/Fl_Input_.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 3346              		.loc 2 466 0
 3347 00f4 E8000000 		call	__stack_chk_fail
 3347      00
 3348              	.LVL396:
 3349              		.cfi_endproc
 3350              	.LFE528:
 3352              		.section	.text.unlikely._ZNK9Fl_Input_10word_startEi
 3353              	.LCOLDE23:
 3354              		.section	.text._ZNK9Fl_Input_10word_startEi
 3355              	.LHOTE23:
 3356              		.section	.text.unlikely._ZNK9Fl_Input_8line_endEi,"ax",@progbits
 3357              		.align 2
 3358              	.LCOLDB24:
 3359              		.section	.text._ZNK9Fl_Input_8line_endEi,"ax",@progbits
 3360              	.LHOTB24:
 3361              		.align 2
 3362              		.p2align 4,,15
 3363              		.globl	_ZNK9Fl_Input_8line_endEi
 3365              	_ZNK9Fl_Input_8line_endEi:
 3366              	.LFB529:
 477:fltk-1.3.4-1/src/Fl_Input_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 3367              		.loc 2 477 0
 3368              		.cfi_startproc
 3369              	.LVL397:
 3370 0000 4154     		pushq	%r12
 3371              		.cfi_def_cfa_offset 16
 3372              		.cfi_offset 12, -16
 3373 0002 55       		pushq	%rbp
 3374              		.cfi_def_cfa_offset 24
 3375              		.cfi_offset 6, -24
 3376 0003 4889FD   		movq	%rdi, %rbp
 3377 0006 53       		pushq	%rbx
 3378              		.cfi_def_cfa_offset 32
 3379              		.cfi_offset 3, -32
 3380 0007 4883EC10 		subq	$16, %rsp
 3381              		.cfi_def_cfa_offset 48
 477:fltk-1.3.4-1/src/Fl_Input_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 3382              		.loc 2 477 0
 3383 000b 64488B04 		movq	%fs:40, %rax
 3383      25280000 
 3383      00
 3384 0014 48894424 		movq	%rax, 8(%rsp)
 3384      08
 3385 0019 31C0     		xorl	%eax, %eax
 3386              	.LVL398:
 3387 001b 0FB6476C 		movzbl	108(%rdi), %eax
 3388              	.LVL399:
 478:fltk-1.3.4-1/src/Fl_Input_.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 3389              		.loc 2 478 0
 3390 001f 89C2     		movl	%eax, %edx
 3391 0021 83E207   		andl	$7, %edx
 3392 0024 80FA04   		cmpb	$4, %dl
 3393 0027 7427     		je	.L314
 3394 0029 8B878800 		movl	136(%rdi), %eax
 3394      0000
 3395              	.LVL400:
 3396              	.L315:
 497:fltk-1.3.4-1/src/Fl_Input_.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 3397              		.loc 2 497 0
 3398 002f 488B4C24 		movq	8(%rsp), %rcx
 3398      08
 3399 0034 6448330C 		xorq	%fs:40, %rcx
 3399      25280000 
 3399      00
 3400 003d 7570     		jne	.L327
 3401 003f 4883C410 		addq	$16, %rsp
 3402              		.cfi_remember_state
 3403              		.cfi_def_cfa_offset 32
 3404 0043 5B       		popq	%rbx
 3405              		.cfi_def_cfa_offset 24
 3406 0044 5D       		popq	%rbp
 3407              		.cfi_def_cfa_offset 16
 3408              	.LVL401:
 3409 0045 415C     		popq	%r12
 3410              		.cfi_def_cfa_offset 8
 3411 0047 C3       		ret
 3412              	.LVL402:
 3413 0048 0F1F8400 		.p2align 4,,10
 3413      00000000 
 3414              		.p2align 3
 3415              	.L314:
 3416              		.cfi_restore_state
 3417              	.LBB1123:
 480:fltk-1.3.4-1/src/Fl_Input_.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 3418              		.loc 2 480 0
 3419 0050 A810     		testb	$16, %al
 3420 0052 89F3     		movl	%esi, %ebx
 3421              	.LVL403:
 3422 0054 740A     		je	.L328
 3423              	.LVL404:
 3424              	.LBE1123:
 3425 0056 E8000000 		call	_ZNK9Fl_Input_8line_endEi.part.31.constprop.36
 3425      00
 3426              	.LVL405:
 3427 005b EBD2     		jmp	.L315
 3428              	.LVL406:
 3429 005d 0F1F00   		.p2align 4,,10
 3430              		.p2align 3
 3431              	.L328:
 3432 0060 4863B788 		movslq	136(%rdi), %rsi
 3432      000000
 3433              	.LVL407:
 3434              	.LBB1126:
 494:fltk-1.3.4-1/src/Fl_Input_.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 3435              		.loc 2 494 0 discriminator 8
 3436 0067 39DE     		cmpl	%ebx, %esi
 3437 0069 7F05     		jg	.L329
 3438              	.LVL408:
 3439              	.L318:
 3440              	.LBE1126:
 477:fltk-1.3.4-1/src/Fl_Input_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 3441              		.loc 2 477 0
 3442 006b 89D8     		movl	%ebx, %eax
 3443 006d EBC0     		jmp	.L315
 3444              	.LVL409:
 3445 006f 90       		.p2align 4,,10
 3446              		.p2align 3
 3447              	.L329:
 3448 0070 4C63E3   		movslq	%ebx, %r12
 3449              	.LVL410:
 3450              		.p2align 4,,10
 3451 0073 0F1F4400 		.p2align 3
 3451      00
 3452              	.L320:
 3453              	.LBB1127:
 3454              	.LBB1124:
 3455              	.LBB1125:
 3456              		.loc 2 1337 0
 3457 0078 488B7D78 		movq	120(%rbp), %rdi
 3458 007c 488D5424 		leaq	4(%rsp), %rdx
 3458      04
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3459              		.loc 2 1336 0
 3460 0081 C7442404 		movl	$0, 4(%rsp)
 3460      00000000 
 3461              		.loc 2 1337 0
 3462 0089 4801FE   		addq	%rdi, %rsi
 3463 008c 4C01E7   		addq	%r12, %rdi
 3464 008f E8000000 		call	fl_utf8decode
 3464      00
 3465              	.LVL411:
 3466              	.LBE1125:
 3467              	.LBE1124:
 494:fltk-1.3.4-1/src/Fl_Input_.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 3468              		.loc 2 494 0
 3469 0094 83F80A   		cmpl	$10, %eax
 3470 0097 74D2     		je	.L318
 3471 0099 4863B588 		movslq	136(%rbp), %rsi
 3471      000000
 3472 00a0 83C301   		addl	$1, %ebx
 3473              	.LVL412:
 3474 00a3 4983C401 		addq	$1, %r12
 3475 00a7 39F3     		cmpl	%esi, %ebx
 3476 00a9 7CCD     		jl	.L320
 3477              	.LBE1127:
 477:fltk-1.3.4-1/src/Fl_Input_.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 3478              		.loc 2 477 0
 3479 00ab 89D8     		movl	%ebx, %eax
 3480 00ad EB80     		jmp	.L315
 3481              	.LVL413:
 3482              	.L327:
 497:fltk-1.3.4-1/src/Fl_Input_.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 3483              		.loc 2 497 0
 3484 00af E8000000 		call	__stack_chk_fail
 3484      00
 3485              	.LVL414:
 3486              		.cfi_endproc
 3487              	.LFE529:
 3489              		.section	.text.unlikely._ZNK9Fl_Input_8line_endEi
 3490              	.LCOLDE24:
 3491              		.section	.text._ZNK9Fl_Input_8line_endEi
 3492              	.LHOTE24:
 3493              		.section	.text.unlikely._ZNK9Fl_Input_10line_startEi,"ax",@progbits
 3494              		.align 2
 3495              	.LCOLDB25:
 3496              		.section	.text._ZNK9Fl_Input_10line_startEi,"ax",@progbits
 3497              	.LHOTB25:
 3498              		.align 2
 3499              		.p2align 4,,15
 3500              		.globl	_ZNK9Fl_Input_10line_startEi
 3502              	_ZNK9Fl_Input_10line_startEi:
 3503              	.LFB530:
 508:fltk-1.3.4-1/src/Fl_Input_.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 3504              		.loc 2 508 0
 3505              		.cfi_startproc
 3506              	.LVL415:
 509:fltk-1.3.4-1/src/Fl_Input_.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 3507              		.loc 2 509 0
 3508 0000 0FB6476C 		movzbl	108(%rdi), %eax
 3509 0004 83E007   		andl	$7, %eax
 3510 0007 3C04     		cmpb	$4, %al
 3511 0009 7405     		je	.L332
 522:fltk-1.3.4-1/src/Fl_Input_.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 3512              		.loc 2 522 0
 3513 000b 31C0     		xorl	%eax, %eax
 3514 000d C3       		ret
 3515 000e 6690     		.p2align 4,,10
 3516              		.p2align 3
 3517              	.L332:
 3518 0010 E9000000 		jmp	_ZNK9Fl_Input_10line_startEi.part.32.constprop.37
 3518      00
 3519              	.LVL416:
 3520              		.cfi_endproc
 3521              	.LFE530:
 3523              		.section	.text.unlikely._ZNK9Fl_Input_10line_startEi
 3524              	.LCOLDE25:
 3525              		.section	.text._ZNK9Fl_Input_10line_startEi
 3526              	.LHOTE25:
 3527              		.section	.text.unlikely._ZN9Fl_Input_8positionEii,"ax",@progbits
 3528              		.align 2
 3529              	.LCOLDB26:
 3530              		.section	.text._ZN9Fl_Input_8positionEii,"ax",@progbits
 3531              	.LHOTB26:
 3532              		.align 2
 3533              		.p2align 4,,15
 3534              		.globl	_ZN9Fl_Input_8positionEii
 3536              	_ZN9Fl_Input_8positionEii:
 3537              	.LFB534:
 632:fltk-1.3.4-1/src/Fl_Input_.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 3538              		.loc 2 632 0
 3539              		.cfi_startproc
 3540              	.LVL417:
 3541 0000 4157     		pushq	%r15
 3542              		.cfi_def_cfa_offset 16
 3543              		.cfi_offset 15, -16
 3544 0002 4156     		pushq	%r14
 3545              		.cfi_def_cfa_offset 24
 3546              		.cfi_offset 14, -24
 3547 0004 4155     		pushq	%r13
 3548              		.cfi_def_cfa_offset 32
 3549              		.cfi_offset 13, -32
 3550 0006 4154     		pushq	%r12
 3551              		.cfi_def_cfa_offset 40
 3552              		.cfi_offset 12, -40
 3553 0008 4531ED   		xorl	%r13d, %r13d
 3554 000b 55       		pushq	%rbp
 3555              		.cfi_def_cfa_offset 48
 3556              		.cfi_offset 6, -48
 3557 000c 53       		pushq	%rbx
 3558              		.cfi_def_cfa_offset 56
 3559              		.cfi_offset 3, -56
 3560 000d 4889FB   		movq	%rdi, %rbx
 3561 0010 4883EC08 		subq	$8, %rsp
 3562              		.cfi_def_cfa_offset 64
 3563 0014 8B878800 		movl	136(%rdi), %eax
 3563      0000
 3564 001a 85F6     		testl	%esi, %esi
 3565 001c 410F48F5 		cmovs	%r13d, %esi
 3566              	.LVL418:
 634:fltk-1.3.4-1/src/Fl_Input_.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 3567              		.loc 2 634 0
 3568 0020 C7050000 		movl	$0, _ZN9Fl_Input_11was_up_downE(%rip)
 3568      00000000 
 3568      0000
 3569 002a 39F0     		cmpl	%esi, %eax
 3570 002c 0F4EF0   		cmovle	%eax, %esi
 3571              	.LVL419:
 3572 002f 85D2     		testl	%edx, %edx
 3573 0031 440F49EA 		cmovns	%edx, %r13d
 3574              	.LVL420:
 3575 0035 4189F6   		movl	%esi, %r14d
 3576              	.LVL421:
 3577 0038 4439E8   		cmpl	%r13d, %eax
 3578 003b 440F4EE8 		cmovle	%eax, %r13d
 3579              	.LVL422:
 641:fltk-1.3.4-1/src/Fl_Input_.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 3580              		.loc 2 641 0
 3581 003f 3BB79000 		cmpl	144(%rdi), %esi
 3581      0000
 3582 0045 0F8DA002 		jge	.L381
 3582      0000
 3583 004b 85F6     		testl	%esi, %esi
 3584 004d 0F8E9802 		jle	.L381
 3584      0000
 3585              	.LVL423:
 3586 0053 29F0     		subl	%esi, %eax
 3587 0055 4C63E6   		movslq	%esi, %r12
 3588 0058 89F5     		movl	%esi, %ebp
 3589 005a 85C0     		testl	%eax, %eax
 3590 005c 7E18     		jle	.L336
 3591              	.LVL424:
 3592 005e 6690     		.p2align 4,,10
 3593              		.p2align 3
 3594              	.L338:
 642:fltk-1.3.4-1/src/Fl_Input_.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 3595              		.loc 2 642 0 discriminator 5
 3596 0060 488B4378 		movq	120(%rbx), %rax
 3597 0064 420FBE3C 		movsbl	(%rax,%r12), %edi
 3597      20
 3598 0069 E8000000 		call	fl_utf8len
 3598      00
 3599              	.LVL425:
 641:fltk-1.3.4-1/src/Fl_Input_.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 3600              		.loc 2 641 0 discriminator 5
 3601 006e 85C0     		testl	%eax, %eax
 3602 0070 0F8E1A01 		jle	.L422
 3602      0000
 3603              	.LVL426:
 3604              	.L336:
 643:fltk-1.3.4-1/src/Fl_Input_.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 3605              		.loc 2 643 0
 3606 0076 488B4378 		movq	120(%rbx), %rax
 3607 007a 420FBE3C 		movsbl	(%rax,%r12), %edi
 3607      20
 3608 007f E8000000 		call	fl_utf8len
 3608      00
 3609              	.LVL427:
 644:fltk-1.3.4-1/src/Fl_Input_.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 3610              		.loc 2 644 0
 3611 0084 3BAB8800 		cmpl	136(%rbx), %ebp
 3611      0000
 3612 008a 7D13     		jge	.L347
 3613 008c 3BAB9000 		cmpl	144(%rbx), %ebp
 3613      0000
 3614 0092 7E0B     		jle	.L347
 3615 0094 C1E81F   		shrl	$31, %eax
 3616              	.LVL428:
 3617 0097 84C0     		testb	%al, %al
 3618 0099 0F859901 		jne	.L340
 3618      0000
 3619              	.L347:
 649:fltk-1.3.4-1/src/Fl_Input_.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 3620              		.loc 2 649 0
 3621 009f 443BAB94 		cmpl	148(%rbx), %r13d
 3621      000000
 3622 00a6 0F8DD401 		jge	.L344
 3622      0000
 3623              	.L426:
 3624 00ac 4585ED   		testl	%r13d, %r13d
 3625 00af 0F8ECB01 		jle	.L344
 3625      0000
 3626              	.LVL429:
 3627 00b5 8B838800 		movl	136(%rbx), %eax
 3627      0000
 3628 00bb 4D63FD   		movslq	%r13d, %r15
 3629 00be 4589EC   		movl	%r13d, %r12d
 3630 00c1 4429E8   		subl	%r13d, %eax
 3631 00c4 85C0     		testl	%eax, %eax
 3632 00c6 7E16     		jle	.L349
 3633              	.LVL430:
 3634              	.L350:
 650:fltk-1.3.4-1/src/Fl_Input_.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 3635              		.loc 2 650 0 discriminator 5
 3636 00c8 488B4378 		movq	120(%rbx), %rax
 3637 00cc 420FBE3C 		movsbl	(%rax,%r15), %edi
 3637      38
 3638 00d1 E8000000 		call	fl_utf8len
 3638      00
 3639              	.LVL431:
 649:fltk-1.3.4-1/src/Fl_Input_.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 3640              		.loc 2 649 0 discriminator 5
 3641 00d6 85C0     		testl	%eax, %eax
 3642 00d8 0F8E8200 		jle	.L423
 3642      0000
 3643              	.LVL432:
 3644              	.L349:
 651:fltk-1.3.4-1/src/Fl_Input_.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 3645              		.loc 2 651 0
 3646 00de 488B4378 		movq	120(%rbx), %rax
 3647 00e2 420FBE3C 		movsbl	(%rax,%r15), %edi
 3647      38
 3648 00e7 E8000000 		call	fl_utf8len
 3648      00
 3649              	.LVL433:
 652:fltk-1.3.4-1/src/Fl_Input_.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 3650              		.loc 2 652 0
 3651 00ec 4439A388 		cmpl	%r12d, 136(%rbx)
 3651      000000
 3652 00f3 7E14     		jle	.L354
 3653 00f5 4439A394 		cmpl	%r12d, 148(%rbx)
 3653      000000
 3654 00fc 7D0B     		jge	.L354
 3655 00fe C1E81F   		shrl	$31, %eax
 3656              	.LVL434:
 3657 0101 84C0     		testb	%al, %al
 3658 0103 0F85E700 		jne	.L424
 3658      0000
 3659              	.L354:
 656:fltk-1.3.4-1/src/Fl_Input_.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 3660              		.loc 2 656 0
 3661 0109 4539F5   		cmpl	%r14d, %r13d
 3662 010c 0F84AE00 		je	.L372
 3662      0000
 657:fltk-1.3.4-1/src/Fl_Input_.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 3663              		.loc 2 657 0
 3664 0112 8BB39000 		movl	144(%rbx), %esi
 3664      0000
 3665 0118 39EE     		cmpl	%ebp, %esi
 3666 011a 0F84D601 		je	.L425
 3666      0000
 661:fltk-1.3.4-1/src/Fl_Input_.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 3667              		.loc 2 661 0
 3668 0120 4139EC   		cmpl	%ebp, %r12d
 3669 0123 0F846A01 		je	.L376
 3669      0000
 3670              	.LVL435:
 3671              	.LBB1128:
 3672              	.LBB1129:
 190:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 3673              		.loc 2 190 0 discriminator 1
 3674 0129 39EE     		cmpl	%ebp, %esi
 3675 012b 4889DF   		movq	%rbx, %rdi
 3676 012e 0F4FF5   		cmovg	%ebp, %esi
 3677              	.LVL436:
 3678 0131 E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 3678      00
 3679              	.LVL437:
 3680 0136 8B939400 		movl	148(%rbx), %edx
 3680      0000
 3681              	.LBE1129:
 3682              	.LBE1128:
 663:fltk-1.3.4-1/src/Fl_Input_.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3683              		.loc 2 663 0 discriminator 1
 3684 013c 4139D4   		cmpl	%edx, %r12d
 3685 013f 0F846501 		je	.L361
 3685      0000
 3686              	.LVL438:
 3687              	.L360:
 3688              	.LBB1130:
 3689              	.LBB1131:
 190:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 3690              		.loc 2 190 0 discriminator 1
 3691 0145 4439E2   		cmpl	%r12d, %edx
 3692 0148 4889DF   		movq	%rbx, %rdi
 3693 014b 410F4FD4 		cmovg	%r12d, %edx
 3694              	.LVL439:
 3695 014f 89D6     		movl	%edx, %esi
 3696 0151 E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 3696      00
 3697              	.LVL440:
 3698 0156 E94F0100 		jmp	.L361
 3698      00
 3699              	.LVL441:
 3700 015b 0F1F4400 		.p2align 4,,10
 3700      00
 3701              		.p2align 3
 3702              	.L423:
 3703              	.LBE1131:
 3704              	.LBE1130:
 650:fltk-1.3.4-1/src/Fl_Input_.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 3705              		.loc 2 650 0
 3706 0160 4183EC01 		subl	$1, %r12d
 3707              	.LVL442:
 649:fltk-1.3.4-1/src/Fl_Input_.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 3708              		.loc 2 649 0
 3709 0164 4439A394 		cmpl	%r12d, 148(%rbx)
 3709      000000
 3710 016b 7E1A     		jle	.L383
 3711 016d 4585E4   		testl	%r12d, %r12d
 3712 0170 7E15     		jle	.L383
 649:fltk-1.3.4-1/src/Fl_Input_.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 3713              		.loc 2 649 0 is_stmt 0 discriminator 3
 3714 0172 8B838800 		movl	136(%rbx), %eax
 3714      0000
 3715 0178 4983EF01 		subq	$1, %r15
 3716 017c 4429E0   		subl	%r12d, %eax
 3717 017f 85C0     		testl	%eax, %eax
 3718 0181 0F8F41FF 		jg	.L350
 3718      FFFF
 3719              	.L383:
 3720 0187 4D63FC   		movslq	%r12d, %r15
 3721 018a E94FFFFF 		jmp	.L349
 3721      FF
 3722              	.LVL443:
 3723 018f 90       		.p2align 4,,10
 3724              		.p2align 3
 3725              	.L422:
 642:fltk-1.3.4-1/src/Fl_Input_.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 3726              		.loc 2 642 0 is_stmt 1
 3727 0190 83ED01   		subl	$1, %ebp
 3728              	.LVL444:
 641:fltk-1.3.4-1/src/Fl_Input_.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 3729              		.loc 2 641 0
 3730 0193 39AB9000 		cmpl	%ebp, 144(%rbx)
 3730      0000
 3731 0199 7E18     		jle	.L382
 3732 019b 85ED     		testl	%ebp, %ebp
 3733 019d 7E14     		jle	.L382
 641:fltk-1.3.4-1/src/Fl_Input_.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 3734              		.loc 2 641 0 is_stmt 0 discriminator 3
 3735 019f 8B838800 		movl	136(%rbx), %eax
 3735      0000
 3736 01a5 4983EC01 		subq	$1, %r12
 3737 01a9 29E8     		subl	%ebp, %eax
 3738 01ab 85C0     		testl	%eax, %eax
 3739 01ad 0F8FADFE 		jg	.L338
 3739      FFFF
 3740              	.L382:
 3741 01b3 4C63E5   		movslq	%ebp, %r12
 3742 01b6 E9BBFEFF 		jmp	.L336
 3742      FF
 3743              	.LVL445:
 3744 01bb 0F1F4400 		.p2align 4,,10
 3744      00
 3745              		.p2align 3
 3746              	.L372:
 657:fltk-1.3.4-1/src/Fl_Input_.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 3747              		.loc 2 657 0 is_stmt 1
 3748 01c0 8BB39000 		movl	144(%rbx), %esi
 3748      0000
 3749 01c6 39EE     		cmpl	%ebp, %esi
 3750 01c8 0F85C200 		jne	.L379
 3750      0000
 3751 01ce 8B939400 		movl	148(%rbx), %edx
 3751      0000
 3752 01d4 31C0     		xorl	%eax, %eax
 3753 01d6 4189EC   		movl	%ebp, %r12d
 3754 01d9 39D5     		cmpl	%edx, %ebp
 3755 01db 0F85BC00 		jne	.L362
 3755      0000
 3756              	.LVL446:
 3757              	.L400:
 678:fltk-1.3.4-1/src/Fl_Input_.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 3758              		.loc 2 678 0
 3759 01e1 4883C408 		addq	$8, %rsp
 3760              		.cfi_remember_state
 3761              		.cfi_def_cfa_offset 56
 3762 01e5 5B       		popq	%rbx
 3763              		.cfi_def_cfa_offset 48
 3764              	.LVL447:
 3765 01e6 5D       		popq	%rbp
 3766              		.cfi_def_cfa_offset 40
 3767              	.LVL448:
 3768 01e7 415C     		popq	%r12
 3769              		.cfi_def_cfa_offset 32
 3770              	.LVL449:
 3771 01e9 415D     		popq	%r13
 3772              		.cfi_def_cfa_offset 24
 3773              	.LVL450:
 3774 01eb 415E     		popq	%r14
 3775              		.cfi_def_cfa_offset 16
 3776 01ed 415F     		popq	%r15
 3777              		.cfi_def_cfa_offset 8
 3778 01ef C3       		ret
 3779              	.LVL451:
 3780              		.p2align 4,,10
 3781              		.p2align 3
 3782              	.L424:
 3783              		.cfi_restore_state
 3784 01f0 4D63FC   		movslq	%r12d, %r15
 3785 01f3 4983C701 		addq	$1, %r15
 3786              	.L355:
 654:fltk-1.3.4-1/src/Fl_Input_.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 3787              		.loc 2 654 0
 3788 01f7 488B4378 		movq	120(%rbx), %rax
 653:fltk-1.3.4-1/src/Fl_Input_.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 3789              		.loc 2 653 0
 3790 01fb 4183C401 		addl	$1, %r12d
 3791              	.LVL452:
 654:fltk-1.3.4-1/src/Fl_Input_.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 3792              		.loc 2 654 0
 3793 01ff 420FBE3C 		movsbl	(%rax,%r15), %edi
 3793      38
 3794 0204 E8000000 		call	fl_utf8len
 3794      00
 3795              	.LVL453:
 652:fltk-1.3.4-1/src/Fl_Input_.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 3796              		.loc 2 652 0
 3797 0209 443BA388 		cmpl	136(%rbx), %r12d
 3797      000000
 3798 0210 0F8DF3FE 		jge	.L354
 3798      FFFF
 3799 0216 4983C701 		addq	$1, %r15
 652:fltk-1.3.4-1/src/Fl_Input_.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 3800              		.loc 2 652 0 is_stmt 0 discriminator 1
 3801 021a 4439A394 		cmpl	%r12d, 148(%rbx)
 3801      000000
 3802 0221 0F8DE2FE 		jge	.L354
 3802      FFFF
 3803 0227 C1E81F   		shrl	$31, %eax
 3804              	.LVL454:
 3805 022a 84C0     		testb	%al, %al
 3806 022c 0F84D7FE 		je	.L354
 3806      FFFF
 3807 0232 EBC3     		jmp	.L355
 3808              	.LVL455:
 3809              		.p2align 4,,10
 3810 0234 0F1F4000 		.p2align 3
 3811              	.L340:
 3812 0238 4C63E5   		movslq	%ebp, %r12
 3813 023b 4983C401 		addq	$1, %r12
 3814              	.L345:
 646:fltk-1.3.4-1/src/Fl_Input_.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 3815              		.loc 2 646 0 is_stmt 1
 3816 023f 488B4378 		movq	120(%rbx), %rax
 645:fltk-1.3.4-1/src/Fl_Input_.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 3817              		.loc 2 645 0
 3818 0243 83C501   		addl	$1, %ebp
 3819              	.LVL456:
 646:fltk-1.3.4-1/src/Fl_Input_.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 3820              		.loc 2 646 0
 3821 0246 420FBE3C 		movsbl	(%rax,%r12), %edi
 3821      20
 3822 024b E8000000 		call	fl_utf8len
 3822      00
 3823              	.LVL457:
 644:fltk-1.3.4-1/src/Fl_Input_.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 3824              		.loc 2 644 0
 3825 0250 3BAB8800 		cmpl	136(%rbx), %ebp
 3825      0000
 3826 0256 0F8D43FE 		jge	.L347
 3826      FFFF
 3827 025c 4983C401 		addq	$1, %r12
 644:fltk-1.3.4-1/src/Fl_Input_.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 3828              		.loc 2 644 0 is_stmt 0 discriminator 1
 3829 0260 39AB9000 		cmpl	%ebp, 144(%rbx)
 3829      0000
 3830 0266 0F8D33FE 		jge	.L347
 3830      FFFF
 3831 026c C1E81F   		shrl	$31, %eax
 3832              	.LVL458:
 3833 026f 84C0     		testb	%al, %al
 3834 0271 75CC     		jne	.L345
 649:fltk-1.3.4-1/src/Fl_Input_.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 3835              		.loc 2 649 0 is_stmt 1
 3836 0273 443BAB94 		cmpl	148(%rbx), %r13d
 3836      000000
 3837 027a 0F8C2CFE 		jl	.L426
 3837      FFFF
 3838              	.LVL459:
 3839              		.p2align 4,,10
 3840              		.p2align 3
 3841              	.L344:
 3842 0280 4D63FD   		movslq	%r13d, %r15
 3843 0283 4589EC   		movl	%r13d, %r12d
 3844 0286 E953FEFF 		jmp	.L349
 3844      FF
 3845              	.LVL460:
 3846 028b 0F1F4400 		.p2align 4,,10
 3846      00
 3847              		.p2align 3
 3848              	.L379:
 657:fltk-1.3.4-1/src/Fl_Input_.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 3849              		.loc 2 657 0
 3850 0290 4189EC   		movl	%ebp, %r12d
 3851              	.LVL461:
 3852              	.L376:
 3853 0293 8B939400 		movl	148(%rbx), %edx
 3853      0000
 666:fltk-1.3.4-1/src/Fl_Input_.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 3854              		.loc 2 666 0
 3855 0299 39D6     		cmpl	%edx, %esi
 3856 029b 742E     		je	.L427
 3857              	.L362:
 3858              	.LVL462:
 3859              	.LBB1132:
 3860              	.LBB1133:
 190:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 3861              		.loc 2 190 0
 3862 029d 39D6     		cmpl	%edx, %esi
 3863 029f 4889DF   		movq	%rbx, %rdi
 3864 02a2 0F4FF2   		cmovg	%edx, %esi
 3865              	.LVL463:
 3866 02a5 E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 3866      00
 3867              	.LVL464:
 3868              	.L361:
 3869              	.LBE1133:
 3870              	.LBE1132:
 675:fltk-1.3.4-1/src/Fl_Input_.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3871              		.loc 2 675 0
 3872 02aa 89AB9000 		movl	%ebp, 144(%rbx)
 3872      0000
 676:fltk-1.3.4-1/src/Fl_Input_.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 3873              		.loc 2 676 0
 3874 02b0 4489A394 		movl	%r12d, 148(%rbx)
 3874      000000
 678:fltk-1.3.4-1/src/Fl_Input_.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 3875              		.loc 2 678 0
 3876 02b7 4883C408 		addq	$8, %rsp
 3877              		.cfi_remember_state
 3878              		.cfi_def_cfa_offset 56
 3879 02bb 5B       		popq	%rbx
 3880              		.cfi_def_cfa_offset 48
 3881              	.LVL465:
 677:fltk-1.3.4-1/src/Fl_Input_.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3882              		.loc 2 677 0
 3883 02bc B8010000 		movl	$1, %eax
 3883      00
 678:fltk-1.3.4-1/src/Fl_Input_.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 3884              		.loc 2 678 0
 3885 02c1 5D       		popq	%rbp
 3886              		.cfi_def_cfa_offset 40
 3887              	.LVL466:
 3888 02c2 415C     		popq	%r12
 3889              		.cfi_def_cfa_offset 32
 3890              	.LVL467:
 3891 02c4 415D     		popq	%r13
 3892              		.cfi_def_cfa_offset 24
 3893              	.LVL468:
 3894 02c6 415E     		popq	%r14
 3895              		.cfi_def_cfa_offset 16
 3896 02c8 415F     		popq	%r15
 3897              		.cfi_def_cfa_offset 8
 3898 02ca C3       		ret
 3899              	.LVL469:
 3900              	.L427:
 3901              		.cfi_restore_state
 668:fltk-1.3.4-1/src/Fl_Input_.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 3902              		.loc 2 668 0
 3903 02cb 48391D00 		cmpq	%rbx, _ZN2Fl6focus_E(%rip)
 3903      000000
 3904 02d2 75D6     		jne	.L361
 3905              	.LVL470:
 668:fltk-1.3.4-1/src/Fl_Input_.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 3906              		.loc 2 668 0 is_stmt 0 discriminator 1
 3907 02d4 F6436D02 		testb	$2, 109(%rbx)
 3908 02d8 75D0     		jne	.L361
 669:fltk-1.3.4-1/src/Fl_Input_.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3909              		.loc 2 669 0 is_stmt 1
 3910 02da 4889DF   		movq	%rbx, %rdi
 3911 02dd E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 3911      00
 3912              	.LVL471:
 3913 02e2 C683B000 		movb	$1, 176(%rbx)
 3913      000001
 3914 02e9 EBBF     		jmp	.L361
 3915              	.LVL472:
 3916              	.L381:
 3917 02eb 4D63E6   		movslq	%r14d, %r12
 641:fltk-1.3.4-1/src/Fl_Input_.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 3918              		.loc 2 641 0
 3919 02ee 4489F5   		movl	%r14d, %ebp
 3920 02f1 E980FDFF 		jmp	.L336
 3920      FF
 3921              	.LVL473:
 3922              	.L425:
 657:fltk-1.3.4-1/src/Fl_Input_.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 3923              		.loc 2 657 0 discriminator 1
 3924 02f6 8B939400 		movl	148(%rbx), %edx
 3924      0000
 3925 02fc 4439E2   		cmpl	%r12d, %edx
 3926 02ff 740B     		je	.L428
 661:fltk-1.3.4-1/src/Fl_Input_.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 3927              		.loc 2 661 0
 3928 0301 4439E5   		cmpl	%r12d, %ebp
 3929 0304 0F853BFE 		jne	.L360
 3929      FFFF
 3930 030a EB91     		jmp	.L362
 3931              	.L428:
 657:fltk-1.3.4-1/src/Fl_Input_.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 3932              		.loc 2 657 0
 3933 030c 31C0     		xorl	%eax, %eax
 3934 030e E9CEFEFF 		jmp	.L400
 3934      FF
 3935              		.cfi_endproc
 3936              	.LFE534:
 3938              		.section	.text.unlikely._ZN9Fl_Input_8positionEii
 3939              	.LCOLDE26:
 3940              		.section	.text._ZN9Fl_Input_8positionEii
 3941              	.LHOTE26:
 3942              		.section	.text.unlikely._ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35,"ax",@progbits
 3943              		.align 2
 3944              	.LCOLDB27:
 3945              		.section	.text._ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35,"ax",@progbits
 3946              	.LHOTB27:
 3947              		.align 2
 3948              		.p2align 4,,15
 3950              	_ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35:
 3951              	.LFB594:
 542:fltk-1.3.4-1/src/Fl_Input_.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3952              		.loc 2 542 0
 3953              		.cfi_startproc
 3954              	.LVL474:
 3955 0000 4157     		pushq	%r15
 3956              		.cfi_def_cfa_offset 16
 3957              		.cfi_offset 15, -16
 3958 0002 4156     		pushq	%r14
 3959              		.cfi_def_cfa_offset 24
 3960              		.cfi_offset 14, -24
 3961 0004 4155     		pushq	%r13
 3962              		.cfi_def_cfa_offset 32
 3963              		.cfi_offset 13, -32
 3964 0006 4154     		pushq	%r12
 3965              		.cfi_def_cfa_offset 40
 3966              		.cfi_offset 12, -40
 3967 0008 4189D4   		movl	%edx, %r12d
 3968 000b 55       		pushq	%rbp
 3969              		.cfi_def_cfa_offset 48
 3970              		.cfi_offset 6, -48
 3971 000c 53       		pushq	%rbx
 3972              		.cfi_def_cfa_offset 56
 3973              		.cfi_offset 3, -56
 3974 000d 4889FB   		movq	%rdi, %rbx
 3975 0010 31ED     		xorl	%ebp, %ebp
 3976 0012 4881EC38 		subq	$1080, %rsp
 3976      040000
 3977              		.cfi_def_cfa_offset 1136
 3978              	.LBB1134:
 3979              	.LBB1135:
 3980              	.LBB1136:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 3981              		.loc 5 509 0
 3982 0019 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3982      000000
 3983              	.LVL475:
 3984 0020 8B93B800 		movl	184(%rbx), %edx
 3984      0000
 3985              	.LVL476:
 3986              	.LBE1136:
 3987              	.LBE1135:
 3988              	.LBE1134:
 542:fltk-1.3.4-1/src/Fl_Input_.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3989              		.loc 2 542 0
 3990 0026 64488B04 		movq	%fs:40, %rax
 3990      25280000 
 3990      00
 3991 002f 48898424 		movq	%rax, 1064(%rsp)
 3991      28040000 
 3992 0037 31C0     		xorl	%eax, %eax
 3993              	.LVL477:
 3994 0039 89742418 		movl	%esi, 24(%rsp)
 3995 003d 894C241C 		movl	%ecx, 28(%rsp)
 3996              	.LBB1139:
 3997              	.LBB1138:
 3998              	.LBB1137:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 3999              		.loc 5 509 0
 4000 0041 488B07   		movq	(%rdi), %rax
 4001 0044 8BB3B400 		movl	180(%rbx), %esi
 4001      0000
 4002              	.LVL478:
 4003 004a FF90B001 		call	*432(%rax)
 4003      0000
 4004              	.LVL479:
 4005              	.LBE1137:
 4006              	.LBE1138:
 4007              	.LBE1139:
 551:fltk-1.3.4-1/src/Fl_Input_.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4008              		.loc 2 551 0
 4009 0050 0FB6436C 		movzbl	108(%rbx), %eax
 4010 0054 83E007   		andl	$7, %eax
 4011 0057 3C04     		cmpb	$4, %al
 4012 0059 0F84E102 		je	.L478
 4012      0000
 4013              	.L430:
 4014              	.LVL480:
 4015 005f 4C8B6378 		movq	120(%rbx), %r12
 4016              	.LVL481:
 4017 0063 EB17     		jmp	.L432
 4018              	.LVL482:
 4019              		.p2align 4,,10
 4020 0065 0F1F00   		.p2align 3
 4021              	.L479:
 557:fltk-1.3.4-1/src/Fl_Input_.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4022              		.loc 2 557 0
 4023 0068 48638388 		movslq	136(%rbx), %rax
 4023      000000
 4024              	.LVL483:
 4025 006f 48034378 		addq	120(%rbx), %rax
 4026 0073 4939C7   		cmpq	%rax, %r15
 4027 0076 731C     		jnb	.L431
 558:fltk-1.3.4-1/src/Fl_Input_.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 4028              		.loc 2 558 0
 4029 0078 4D8D6701 		leaq	1(%r15), %r12
 4030              	.LVL484:
 4031              	.L432:
 555:fltk-1.3.4-1/src/Fl_Input_.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4032              		.loc 2 555 0
 4033 007c 488D5424 		leaq	32(%rsp), %rdx
 4033      20
 4034 0081 4C89E6   		movq	%r12, %rsi
 4035 0084 4889DF   		movq	%rbx, %rdi
 4036 0087 E8000000 		call	_ZNK9Fl_Input_6expandEPKcPc
 4036      00
 4037              	.LVL485:
 556:fltk-1.3.4-1/src/Fl_Input_.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 4038              		.loc 2 556 0
 4039 008c 83ED01   		subl	$1, %ebp
 4040              	.LVL486:
 555:fltk-1.3.4-1/src/Fl_Input_.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4041              		.loc 2 555 0
 4042 008f 4989C7   		movq	%rax, %r15
 4043              	.LVL487:
 556:fltk-1.3.4-1/src/Fl_Input_.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 4044              		.loc 2 556 0
 4045 0092 79D4     		jns	.L479
 4046              	.LVL488:
 4047              	.L431:
 560:fltk-1.3.4-1/src/Fl_Input_.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 4048              		.loc 2 560 0
 4049 0094 8B050000 		movl	_ZN2Fl3e_xE(%rip), %eax
 4049      0000
 4050 009a 2B442418 		subl	24(%rsp), %eax
 4051 009e 03839C00 		addl	156(%rbx), %eax
 4051      0000
 4052 00a4 660FEFDB 		pxor	%xmm3, %xmm3
 4053              	.LBB1140:
 561:fltk-1.3.4-1/src/Fl_Input_.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4054              		.loc 2 561 0
 4055 00a8 4D39FC   		cmpq	%r15, %r12
 4056              	.LBE1140:
 560:fltk-1.3.4-1/src/Fl_Input_.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 4057              		.loc 2 560 0
 4058 00ab F20F2AD8 		cvtsi2sd	%eax, %xmm3
 4059 00af F20F115C 		movsd	%xmm3, 16(%rsp)
 4059      2410
 4060              	.LVL489:
 4061              	.LBB1144:
 561:fltk-1.3.4-1/src/Fl_Input_.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4062              		.loc 2 561 0
 4063 00b5 0F83B202 		jnb	.L458
 4063      0000
 4064 00bb 4C897C24 		movq	%r15, 8(%rsp)
 4064      08
 4065 00c0 4C89E5   		movq	%r12, %rbp
 4066 00c3 EB17     		jmp	.L436
 4067              	.LVL490:
 4068              		.p2align 4,,10
 4069 00c5 0F1F00   		.p2align 3
 4070              	.L480:
 4071              	.LBB1141:
 567:fltk-1.3.4-1/src/Fl_Input_.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4072              		.loc 2 567 0
 4073 00c8 F20F5CC8 		subsd	%xmm0, %xmm1
 4074 00cc 4C89F5   		movq	%r14, %rbp
 4075              	.LBE1141:
 561:fltk-1.3.4-1/src/Fl_Input_.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4076              		.loc 2 561 0
 4077 00cf 48396C24 		cmpq	%rbp, 8(%rsp)
 4077      08
 4078              	.LBB1142:
 567:fltk-1.3.4-1/src/Fl_Input_.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4079              		.loc 2 567 0
 4080 00d4 F20F114C 		movsd	%xmm1, 16(%rsp)
 4080      2410
 4081              	.LVL491:
 4082              	.LBE1142:
 561:fltk-1.3.4-1/src/Fl_Input_.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4083              		.loc 2 561 0
 4084 00da 7670     		jbe	.L435
 4085              	.LVL492:
 4086              	.L436:
 4087              	.LBB1143:
 563:fltk-1.3.4-1/src/Fl_Input_.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4088              		.loc 2 563 0
 4089 00dc 0FBE7D00 		movsbl	0(%rbp), %edi
 4090 00e0 41BD0100 		movl	$1, %r13d
 4090      0000
 4091 00e6 E8000000 		call	fl_utf8len
 4091      00
 4092              	.LVL493:
 4093 00eb 85C0     		testl	%eax, %eax
 4094 00ed 4863D0   		movslq	%eax, %rdx
 566:fltk-1.3.4-1/src/Fl_Input_.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 4095              		.loc 2 566 0
 4096 00f0 488D4C24 		leaq	32(%rsp), %rcx
 4096      20
 4097 00f5 4C0F4FEA 		cmovg	%rdx, %r13
 4098              	.LVL494:
 4099 00f9 8B542418 		movl	24(%rsp), %edx
 4100 00fd 2B939C00 		subl	156(%rbx), %edx
 4100      0000
 4101 0103 660FEFD2 		pxor	%xmm2, %xmm2
 565:fltk-1.3.4-1/src/Fl_Input_.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 4102              		.loc 2 565 0
 4103 0107 4E8D742D 		leaq	0(%rbp,%r13), %r14
 4103      00
 4104              	.LVL495:
 566:fltk-1.3.4-1/src/Fl_Input_.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 4105              		.loc 2 566 0
 4106 010c 4531C0   		xorl	%r8d, %r8d
 4107 010f 4C89E6   		movq	%r12, %rsi
 4108 0112 4889DF   		movq	%rbx, %rdi
 4109 0115 F20F2AD2 		cvtsi2sd	%edx, %xmm2
 4110 0119 4C89F2   		movq	%r14, %rdx
 4111 011c F20F1114 		movsd	%xmm2, (%rsp)
 4111      24
 4112 0121 E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 4112      00
 4113              	.LVL496:
 4114 0126 F20F5804 		addsd	(%rsp), %xmm0
 4114      24
 4115              	.LVL497:
 567:fltk-1.3.4-1/src/Fl_Input_.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4116              		.loc 2 567 0
 4117 012b 660FEFC9 		pxor	%xmm1, %xmm1
 4118 012f F20F2A0D 		cvtsi2sd	_ZN2Fl3e_xE(%rip), %xmm1
 4118      00000000 
 4119 0137 660F2EC8 		ucomisd	%xmm0, %xmm1
 4120 013b 738B     		jnb	.L480
 568:fltk-1.3.4-1/src/Fl_Input_.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 4121              		.loc 2 568 0
 4122 013d 4D29EE   		subq	%r13, %r14
 4123              	.LVL498:
 4124 0140 4C897424 		movq	%r14, 8(%rsp)
 4124      08
 4125              	.LVL499:
 4126              	.LBE1143:
 561:fltk-1.3.4-1/src/Fl_Input_.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4127              		.loc 2 561 0
 4128 0145 48396C24 		cmpq	%rbp, 8(%rsp)
 4128      08
 4129 014a 7790     		ja	.L436
 4130              	.LVL500:
 4131              	.L435:
 4132              	.LBE1144:
 4133              	.LBB1145:
 570:fltk-1.3.4-1/src/Fl_Input_.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 4134              		.loc 2 570 0
 4135 014c 4939EF   		cmpq	%rbp, %r15
 4136 014f 0F873301 		ja	.L481
 4136      0000
 4137              	.LVL501:
 4138              	.L433:
 4139 0155 4C8B7378 		movq	120(%rbx), %r14
 4140              	.LVL502:
 4141              	.LBE1145:
 580:fltk-1.3.4-1/src/Fl_Input_.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4142              		.loc 2 580 0
 4143 0159 8B54241C 		movl	28(%rsp), %edx
 578:fltk-1.3.4-1/src/Fl_Input_.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4144              		.loc 2 578 0
 4145 015d 4889EE   		movq	%rbp, %rsi
 4146 0160 4C29F6   		subq	%r14, %rsi
 580:fltk-1.3.4-1/src/Fl_Input_.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4147              		.loc 2 580 0
 4148 0163 85D2     		testl	%edx, %edx
 578:fltk-1.3.4-1/src/Fl_Input_.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4149              		.loc 2 578 0
 4150 0165 4189F5   		movl	%esi, %r13d
 4151              	.LVL503:
 580:fltk-1.3.4-1/src/Fl_Input_.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4152              		.loc 2 580 0
 4153 0168 0F848200 		je	.L441
 4153      0000
 4154              	.LBB1147:
 4155              	.LBB1148:
 4156              		.file 6 "fltk-1.3.4-1/FL/Fl.H"
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
 4157              		.loc 6 645 0
 4158 016e 8B050000 		movl	_ZN2Fl8e_clicksE(%rip), %eax
 4158      0000
 4159 0174 448BA394 		movl	148(%rbx), %r12d
 4159      000000
 4160              	.LVL504:
 4161              	.LBE1148:
 4162              	.LBE1147:
 581:fltk-1.3.4-1/src/Fl_Input_.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4163              		.loc 2 581 0
 4164 017b 85C0     		testl	%eax, %eax
 4165 017d 7439     		je	.L442
 582:fltk-1.3.4-1/src/Fl_Input_.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 4166              		.loc 2 582 0
 4167 017f 4439E6   		cmpl	%r12d, %esi
 4168 0182 0F8D6B02 		jge	.L482
 4168      0000
 595:fltk-1.3.4-1/src/Fl_Input_.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4169              		.loc 2 595 0
 4170 0188 83F801   		cmpl	$1, %eax
 4171 018b 0F8EE401 		jle	.L448
 4171      0000
 4172              	.LVL505:
 4173              	.LBB1150:
 4174              	.LBB1151:
 509:fltk-1.3.4-1/src/Fl_Input_.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 4175              		.loc 2 509 0
 4176 0191 0FB6436C 		movzbl	108(%rbx), %eax
 4177 0195 4531ED   		xorl	%r13d, %r13d
 4178 0198 83E007   		andl	$7, %eax
 4179 019b 3C04     		cmpb	$4, %al
 4180 019d 0F842802 		je	.L483
 4180      0000
 4181              	.LVL506:
 4182              	.L449:
 4183              	.LBE1151:
 4184              	.LBE1150:
 597:fltk-1.3.4-1/src/Fl_Input_.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4185              		.loc 2 597 0
 4186 01a3 4489E6   		movl	%r12d, %esi
 4187 01a6 4889DF   		movq	%rbx, %rdi
 4188 01a9 E8000000 		call	_ZNK9Fl_Input_8line_endEi
 4188      00
 4189              	.LVL507:
 4190 01ae 4189C4   		movl	%eax, %r12d
 4191              	.LVL508:
 4192              		.p2align 4,,10
 4193 01b1 0F1F8000 		.p2align 3
 4193      000000
 4194              	.L442:
 612:fltk-1.3.4-1/src/Fl_Input_.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 4195              		.loc 2 612 0
 4196 01b8 4489E2   		movl	%r12d, %edx
 4197 01bb 4489EE   		movl	%r13d, %esi
 4198 01be 4889DF   		movq	%rbx, %rdi
 4199 01c1 E8000000 		call	_ZN9Fl_Input_8positionEii
 4199      00
 4200              	.LVL509:
 613:fltk-1.3.4-1/src/Fl_Input_.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 4201              		.loc 2 613 0
 4202 01c6 488B8424 		movq	1064(%rsp), %rax
 4202      28040000 
 4203 01ce 64483304 		xorq	%fs:40, %rax
 4203      25280000 
 4203      00
 4204 01d7 0F851102 		jne	.L484
 4204      0000
 4205 01dd 4881C438 		addq	$1080, %rsp
 4205      040000
 4206              		.cfi_remember_state
 4207              		.cfi_def_cfa_offset 56
 4208 01e4 5B       		popq	%rbx
 4209              		.cfi_def_cfa_offset 48
 4210              	.LVL510:
 4211 01e5 5D       		popq	%rbp
 4212              		.cfi_def_cfa_offset 40
 4213 01e6 415C     		popq	%r12
 4214              		.cfi_def_cfa_offset 32
 4215              	.LVL511:
 4216 01e8 415D     		popq	%r13
 4217              		.cfi_def_cfa_offset 24
 4218              	.LVL512:
 4219 01ea 415E     		popq	%r14
 4220              		.cfi_def_cfa_offset 16
 4221 01ec 415F     		popq	%r15
 4222              		.cfi_def_cfa_offset 8
 4223 01ee C3       		ret
 4224              	.LVL513:
 4225 01ef 90       		.p2align 4,,10
 4226              		.p2align 3
 4227              	.L441:
 4228              		.cfi_restore_state
 4229              	.LBB1153:
 4230              	.LBB1149:
 4231              		.loc 6 645 0
 4232 01f0 8B050000 		movl	_ZN2Fl8e_clicksE(%rip), %eax
 4232      0000
 4233              	.LBE1149:
 4234              	.LBE1153:
 578:fltk-1.3.4-1/src/Fl_Input_.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4235              		.loc 2 578 0
 4236 01f6 4189F4   		movl	%esi, %r12d
 4237              	.LVL514:
 581:fltk-1.3.4-1/src/Fl_Input_.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4238              		.loc 2 581 0
 4239 01f9 85C0     		testl	%eax, %eax
 4240 01fb 74BB     		je	.L442
 4241              	.LVL515:
 4242              	.L455:
 584:fltk-1.3.4-1/src/Fl_Input_.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 4243              		.loc 2 584 0
 4244 01fd 3BB38800 		cmpl	136(%rbx), %esi
 4244      0000
 585:fltk-1.3.4-1/src/Fl_Input_.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4245              		.loc 2 585 0
 4246 0203 448D66FF 		leal	-1(%rsi), %r12d
 4247              	.LVL516:
 584:fltk-1.3.4-1/src/Fl_Input_.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 4248              		.loc 2 584 0
 4249 0207 0F8CB201 		jl	.L485
 4249      0000
 4250              	.LVL517:
 4251              	.L444:
 587:fltk-1.3.4-1/src/Fl_Input_.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4252              		.loc 2 587 0
 4253 020d 83F801   		cmpl	$1, %eax
 4254 0210 0F8EEA00 		jle	.L446
 4254      0000
 588:fltk-1.3.4-1/src/Fl_Input_.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4255              		.loc 2 588 0
 4256 0216 4489EE   		movl	%r13d, %esi
 4257 0219 4889DF   		movq	%rbx, %rdi
 4258 021c E8000000 		call	_ZNK9Fl_Input_8line_endEi
 4258      00
 4259              	.LVL518:
 4260 0221 4189C5   		movl	%eax, %r13d
 4261              	.LVL519:
 4262              	.LBB1154:
 4263              	.LBB1155:
 509:fltk-1.3.4-1/src/Fl_Input_.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 4264              		.loc 2 509 0
 4265 0224 0FB6436C 		movzbl	108(%rbx), %eax
 4266              	.LVL520:
 4267 0228 83E007   		andl	$7, %eax
 4268 022b 3C04     		cmpb	$4, %al
 4269 022d 0F84A801 		je	.L486
 4269      0000
 4270 0233 4531E4   		xorl	%r12d, %r12d
 4271              	.LVL521:
 4272              	.L447:
 4273              	.LBE1155:
 4274              	.LBE1154:
 605:fltk-1.3.4-1/src/Fl_Input_.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 4275              		.loc 2 605 0
 4276 0236 8B44241C 		movl	28(%rsp), %eax
 4277 023a 85C0     		testl	%eax, %eax
 4278 023c 0F8576FF 		jne	.L442
 4278      FFFF
 4279 0242 8B939400 		movl	148(%rbx), %edx
 4279      0000
 4280              	.LVL522:
 4281 0248 8B839000 		movl	144(%rbx), %eax
 4281      0000
 4282              	.LVL523:
 4283 024e 39C2     		cmpl	%eax, %edx
 4284 0250 0F8E5201 		jle	.L451
 4284      0000
 4285              	.LVL524:
 606:fltk-1.3.4-1/src/Fl_Input_.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 4286              		.loc 2 606 0
 4287 0256 4439E0   		cmpl	%r12d, %eax
 4288 0259 0F8F59FF 		jg	.L442
 4288      FFFF
 4289 025f 4439EA   		cmpl	%r13d, %edx
 4290 0262 0F8C50FF 		jl	.L442
 4290      FFFF
 4291              	.LVL525:
 4292              	.L452:
 609:fltk-1.3.4-1/src/Fl_Input_.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 4293              		.loc 2 609 0
 4294 0268 482B6B78 		subq	120(%rbx), %rbp
 4295              	.LVL526:
 4296              	.LBB1157:
 4297              	.LBB1158:
 646:fltk-1.3.4-1/FL/Fl.H ****   /**
 647:fltk-1.3.4-1/FL/Fl.H ****     Manually sets the number returned by Fl::event_clicks().  
 648:fltk-1.3.4-1/FL/Fl.H ****     This can be used to set it to zero so that
 649:fltk-1.3.4-1/FL/Fl.H ****     later code does not think an item was double-clicked.
 650:fltk-1.3.4-1/FL/Fl.H ****     \param[in] i corresponds to no double-click if 0, i+1 mouse clicks otherwise
 651:fltk-1.3.4-1/FL/Fl.H ****     \see int event_clicks()
 652:fltk-1.3.4-1/FL/Fl.H ****   */
 653:fltk-1.3.4-1/FL/Fl.H ****   static void event_clicks(int i) {e_clicks = i;}
 4298              		.loc 6 653 0
 4299 026c C7050000 		movl	$0, _ZN2Fl8e_clicksE(%rip)
 4299      00000000 
 4299      0000
 4300              	.LVL527:
 4301              	.LBE1158:
 4302              	.LBE1157:
 609:fltk-1.3.4-1/src/Fl_Input_.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 4303              		.loc 2 609 0
 4304 0276 4189ED   		movl	%ebp, %r13d
 4305              	.LVL528:
 4306 0279 4189EC   		movl	%ebp, %r12d
 4307 027c E937FFFF 		jmp	.L442
 4307      FF
 4308              	.LVL529:
 4309              		.p2align 4,,10
 4310 0281 0F1F8000 		.p2align 3
 4310      000000
 4311              	.L481:
 4312              	.LBB1159:
 4313              	.LBB1146:
 572:fltk-1.3.4-1/src/Fl_Input_.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4314              		.loc 2 572 0
 4315 0288 0FBE7D00 		movsbl	0(%rbp), %edi
 4316 028c E8000000 		call	fl_utf8len
 4316      00
 4317              	.LVL530:
 573:fltk-1.3.4-1/src/Fl_Input_.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4318              		.loc 2 573 0
 4319 0291 85C0     		testl	%eax, %eax
 4320 0293 0F8EBCFE 		jle	.L433
 4320      FFFF
 574:fltk-1.3.4-1/src/Fl_Input_.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4321              		.loc 2 574 0
 4322 0299 448B7424 		movl	24(%rsp), %r14d
 4322      18
 4323 029e 442BB39C 		subl	156(%rbx), %r14d
 4323      000000
 4324 02a5 4898     		cltq
 4325 02a7 660FEFE4 		pxor	%xmm4, %xmm4
 4326 02ab 4C8D6C05 		leaq	0(%rbp,%rax), %r13
 4326      00
 4327 02b0 488D4C24 		leaq	32(%rsp), %rcx
 4327      20
 4328 02b5 4531C0   		xorl	%r8d, %r8d
 4329 02b8 4C89E6   		movq	%r12, %rsi
 4330 02bb 4C89EA   		movq	%r13, %rdx
 4331 02be 4889DF   		movq	%rbx, %rdi
 4332 02c1 F2410F2A 		cvtsi2sd	%r14d, %xmm4
 4332      E6
 4333 02c6 F20F1124 		movsd	%xmm4, (%rsp)
 4333      24
 4334 02cb E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 4334      00
 4335              	.LVL531:
 575:fltk-1.3.4-1/src/Fl_Input_.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 4336              		.loc 2 575 0
 4337 02d0 F20F5804 		addsd	(%rsp), %xmm0
 4337      24
 4338              	.LVL532:
 4339 02d5 660FEFC9 		pxor	%xmm1, %xmm1
 4340 02d9 F20F106C 		movsd	16(%rsp), %xmm5
 4340      2410
 4341 02df F20F2A0D 		cvtsi2sd	_ZN2Fl3e_xE(%rip), %xmm1
 4341      00000000 
 4342 02e7 F20F5CC1 		subsd	%xmm1, %xmm0
 4343 02eb 660F2EE8 		ucomisd	%xmm0, %xmm5
 4344 02ef 490F47ED 		cmova	%r13, %rbp
 4345              	.LVL533:
 4346 02f3 E95DFEFF 		jmp	.L433
 4346      FF
 4347              	.LVL534:
 4348 02f8 0F1F8400 		.p2align 4,,10
 4348      00000000 
 4349              		.p2align 3
 4350              	.L446:
 4351              	.LBE1146:
 4352              	.LBE1159:
 4353              	.LBB1160:
 4354              	.LBB1161:
 4355              		.file 7 "fltk-1.3.4-1/FL/Fl_Input_.H"
   1:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   2:fltk-1.3.4-1/FL/Fl_Input_.H **** // "$Id: Fl_Input_.H 10807 2015-07-21 13:55:13Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   4:fltk-1.3.4-1/FL/Fl_Input_.H **** // Input base class header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   6:fltk-1.3.4-1/FL/Fl_Input_.H **** // Copyright 1998-2015 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   8:fltk-1.3.4-1/FL/Fl_Input_.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Input_.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Input_.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  12:fltk-1.3.4-1/FL/Fl_Input_.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  14:fltk-1.3.4-1/FL/Fl_Input_.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  16:fltk-1.3.4-1/FL/Fl_Input_.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  18:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  19:fltk-1.3.4-1/FL/Fl_Input_.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Input_.H ****    Fl_Input_ widget . */
  21:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  22:fltk-1.3.4-1/FL/Fl_Input_.H **** #ifndef Fl_Input__H
  23:fltk-1.3.4-1/FL/Fl_Input_.H **** #define Fl_Input__H
  24:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  25:fltk-1.3.4-1/FL/Fl_Input_.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Input_.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Input_.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  29:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_NORMAL_INPUT		0
  30:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_FLOAT_INPUT		1
  31:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INT_INPUT		2
  32:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_HIDDEN_INPUT		3
  33:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_INPUT	4
  34:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_SECRET_INPUT		5
  35:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_TYPE		7
  36:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_READONLY	8
  37:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_NORMAL_OUTPUT	(FL_NORMAL_INPUT | FL_INPUT_READONLY)
  38:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_OUTPUT	(FL_MULTILINE_INPUT | FL_INPUT_READONLY)
  39:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_WRAP		16
  40:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_INPUT_WRAP	(FL_MULTILINE_INPUT | FL_INPUT_WRAP)
  41:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_OUTPUT_WRAP (FL_MULTILINE_INPUT | FL_INPUT_READONLY | FL_INPUT_WRAP)
  42:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  43:fltk-1.3.4-1/FL/Fl_Input_.H **** /**
  44:fltk-1.3.4-1/FL/Fl_Input_.H ****   This class provides a low-overhead text input field.
  45:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  46:fltk-1.3.4-1/FL/Fl_Input_.H ****   This is a virtual base class below Fl_Input. It has all
  47:fltk-1.3.4-1/FL/Fl_Input_.H ****   the same interfaces, but lacks the handle() and
  48:fltk-1.3.4-1/FL/Fl_Input_.H ****   draw() method. You may want to subclass it if you are
  49:fltk-1.3.4-1/FL/Fl_Input_.H ****   one of those people who likes to change how the editing keys
  50:fltk-1.3.4-1/FL/Fl_Input_.H ****   work. It may also be useful for adding scrollbars
  51:fltk-1.3.4-1/FL/Fl_Input_.H ****   to the input field.
  52:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  53:fltk-1.3.4-1/FL/Fl_Input_.H ****   This can act like any of the subclasses of Fl_Input, by
  54:fltk-1.3.4-1/FL/Fl_Input_.H ****   setting type() to one of the following values:
  55:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  56:fltk-1.3.4-1/FL/Fl_Input_.H ****   \code
  57:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_NORMAL_INPUT	   0
  58:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_FLOAT_INPUT	   1
  59:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INT_INPUT		   2
  60:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_INPUT	   4
  61:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_SECRET_INPUT	   5
  62:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_TYPE		   7
  63:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_READONLY	   8
  64:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_NORMAL_OUTPUT	   (FL_NORMAL_INPUT | FL_INPUT_READONLY)
  65:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_OUTPUT	   (FL_MULTILINE_INPUT | FL_INPUT_READONLY)
  66:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_WRAP		   16
  67:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_INPUT_WRAP  (FL_MULTILINE_INPUT | FL_INPUT_WRAP)
  68:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_OUTPUT_WRAP (FL_MULTILINE_INPUT | FL_INPUT_READONLY | FL_INPUT_WRAP)
  69:fltk-1.3.4-1/FL/Fl_Input_.H ****   \endcode
  70:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  71:fltk-1.3.4-1/FL/Fl_Input_.H ****   All variables that represent an index into a text buffer are byte-oriented,
  72:fltk-1.3.4-1/FL/Fl_Input_.H ****   not character oriented, counting from 0 (at or before the first character)
  73:fltk-1.3.4-1/FL/Fl_Input_.H ****   to size() (at the end of the buffer, after the last byte). Since UTF-8
  74:fltk-1.3.4-1/FL/Fl_Input_.H ****   characters can be up to six bytes long, simply incrementing such an index
  75:fltk-1.3.4-1/FL/Fl_Input_.H ****   will not reliably advance to the next character in the text buffer.
  76:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  77:fltk-1.3.4-1/FL/Fl_Input_.H ****   Indices and pointers into the text buffer should always point at a 7 bit ASCII
  78:fltk-1.3.4-1/FL/Fl_Input_.H ****   character or the beginning of a UTF-8 character sequence. Behavior for false
  79:fltk-1.3.4-1/FL/Fl_Input_.H ****   UTF-8 sequences and pointers into the middle of a sequence are undefined.
  80:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  81:fltk-1.3.4-1/FL/Fl_Input_.H ****   \see Fl_Text_Display, Fl_Text_Editor for more powerful text handling widgets
  82:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  83:fltk-1.3.4-1/FL/Fl_Input_.H ****   \internal
  84:fltk-1.3.4-1/FL/Fl_Input_.H ****   When porting this widget from ASCII to UTF-8, previously legal pointers into
  85:fltk-1.3.4-1/FL/Fl_Input_.H ****   the text of this widget can become illegal by pointing into the middle of
  86:fltk-1.3.4-1/FL/Fl_Input_.H ****   a UTF-8 sequence. This is not a big problem for Fl_Input_ because all code
  87:fltk-1.3.4-1/FL/Fl_Input_.H ****   in this module is quite tolerant. It could be problematic though when deriving
  88:fltk-1.3.4-1/FL/Fl_Input_.H ****   from this class because no feedback for illegal pointers is given. Additionally,
  89:fltk-1.3.4-1/FL/Fl_Input_.H ****   a careless "copy" call can put partial UTF-8 sequences into the clipboard.
  90:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  91:fltk-1.3.4-1/FL/Fl_Input_.H ****   None of these issues should be disastrous. Nevertheless, we should
  92:fltk-1.3.4-1/FL/Fl_Input_.H ****   discuss how FLTK should handle false UTF-8 sequences and pointers.
  93:fltk-1.3.4-1/FL/Fl_Input_.H **** */
  94:fltk-1.3.4-1/FL/Fl_Input_.H **** class FL_EXPORT Fl_Input_ : public Fl_Widget {
  95:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  96:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Storage for the text field. */
  97:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* value_;
  98:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  99:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Buffer memory for expanded text. \see expand() */
 100:fltk-1.3.4-1/FL/Fl_Input_.H ****   char* buffer;
 101:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 102:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Size of text in bytes in the \p value_ field. */
 103:fltk-1.3.4-1/FL/Fl_Input_.H ****   int size_;
 104:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 105:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Current size of internal value() buffer in bytes. */
 106:fltk-1.3.4-1/FL/Fl_Input_.H ****   int bufsize;
 107:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 108:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Position of the cursor in the document. */
 109:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position_;
 110:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 111:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Position of the other end of the selected text.
 112:fltk-1.3.4-1/FL/Fl_Input_.H ****       If \p position_ equals \p mark_, no text is selected */
 113:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark_;
 114:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 115:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Behavior of Tab key in multiline input widget. 
 116:fltk-1.3.4-1/FL/Fl_Input_.H ****       If enabled (default) Tab causes focus nav, otherwise Tab is inserted 
 117:fltk-1.3.4-1/FL/Fl_Input_.H ****       as a character. */
 118:fltk-1.3.4-1/FL/Fl_Input_.H ****   int tab_nav_;
 119:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 120:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Offset to text origin within widget bounds */
 121:fltk-1.3.4-1/FL/Fl_Input_.H ****   int xscroll_, yscroll_;
 122:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 123:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Minimal update pointer. Display requires redraw from here to the end
 124:fltk-1.3.4-1/FL/Fl_Input_.H ****       of the buffer. */
 125:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mu_p;
 126:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 127:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Maximum number of (UTF-8) characters a user can input. */
 128:fltk-1.3.4-1/FL/Fl_Input_.H ****   int maximum_size_;
 129:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 130:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Shortcut key that will fetch focus for this widget. */
 131:fltk-1.3.4-1/FL/Fl_Input_.H ****   int shortcut_;
 132:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 133:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal This is set if no text but only the cursor needs updating. */
 134:fltk-1.3.4-1/FL/Fl_Input_.H ****   uchar erase_cursor_only;
 135:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 136:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal The font used for the entire text. */
 137:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Font textfont_;
 138:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 139:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Height of the font used for the entire text. */
 140:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Fontsize textsize_;
 141:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 142:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal color of the entire text */
 143:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Color textcolor_;
 144:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 145:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal color of the text cursor */
 146:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Color cursor_color_;
 147:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 148:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Horizontal cursor position in pixels while moving up or down. */
 149:fltk-1.3.4-1/FL/Fl_Input_.H ****   static double up_down_pos;
 150:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 151:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Flag to remember last cursor move. */
 152:fltk-1.3.4-1/FL/Fl_Input_.H ****   static int was_up_down;
 153:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 154:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Convert a given text segment into the text that will be rendered on screen. */
 155:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* expand(const char*, char*) const;
 156:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 157:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Calculates the width in pixels of part of a text buffer. */
 158:fltk-1.3.4-1/FL/Fl_Input_.H ****   double expandpos(const char*, const char*, const char*, int*) const;
 159:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 160:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Mark a range of characters for update. */
 161:fltk-1.3.4-1/FL/Fl_Input_.H ****   void minimal_update(int, int);
 162:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 163:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Mark a range of characters for update. */
 164:fltk-1.3.4-1/FL/Fl_Input_.H ****   void minimal_update(int p);
 165:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 166:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Copy the value from a possibly static entry into the internal buffer. */
 167:fltk-1.3.4-1/FL/Fl_Input_.H ****   void put_in_buffer(int newsize);
 168:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 169:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Set the current font and font size. */
 170:fltk-1.3.4-1/FL/Fl_Input_.H ****   void setfont() const;
 171:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 172:fltk-1.3.4-1/FL/Fl_Input_.H **** protected:
 173:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 174:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the start of a word. */
 175:fltk-1.3.4-1/FL/Fl_Input_.H ****   int word_start(int i) const;
 176:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 177:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the end of a word. */
 178:fltk-1.3.4-1/FL/Fl_Input_.H ****   int word_end(int i) const;
 179:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 180:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the start of a line. */
 181:fltk-1.3.4-1/FL/Fl_Input_.H ****   int line_start(int i) const;
 182:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 183:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the end of a line. */
 184:fltk-1.3.4-1/FL/Fl_Input_.H ****   int line_end(int i) const;
 185:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 186:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Draw the text in the passed bounding box. */
 187:fltk-1.3.4-1/FL/Fl_Input_.H ****   void drawtext(int, int, int, int);
 188:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 189:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Move the cursor to the column given by up_down_pos. */
 190:fltk-1.3.4-1/FL/Fl_Input_.H ****   int up_down_position(int, int keepmark=0);
 191:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 192:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Handle mouse clicks and mouse moves. */
 193:fltk-1.3.4-1/FL/Fl_Input_.H ****   void handle_mouse(int, int, int, int, int keepmark=0);
 194:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 195:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Handle all kinds of text field related events. */
 196:fltk-1.3.4-1/FL/Fl_Input_.H ****   int handletext(int e, int, int, int, int);
 197:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 198:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Check the when() field and do a callback if indicated. */
 199:fltk-1.3.4-1/FL/Fl_Input_.H ****   void maybe_do_callback();
 200:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 201:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Horizontal offset of text to left edge of widget. */
 202:fltk-1.3.4-1/FL/Fl_Input_.H ****   int xscroll() const {return xscroll_;}
 203:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 204:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Vertical offset of text to top edge of widget. */
 205:fltk-1.3.4-1/FL/Fl_Input_.H ****   int yscroll() const {return yscroll_;}
 206:fltk-1.3.4-1/FL/Fl_Input_.H ****   void yscroll(int yOffset) { yscroll_ = yOffset; damage(FL_DAMAGE_EXPOSE);}
 207:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 208:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Return the number of lines displayed on a single page.  */
 209:fltk-1.3.4-1/FL/Fl_Input_.H ****   int linesPerPage();
 210:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 211:fltk-1.3.4-1/FL/Fl_Input_.H **** public:
 212:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 213:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Change the size of the widget. */
 214:fltk-1.3.4-1/FL/Fl_Input_.H ****   void resize(int, int, int, int);
 215:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 216:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Constructor */
 217:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Input_(int, int, int, int, const char* = 0);
 218:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 219:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Destructor */
 220:fltk-1.3.4-1/FL/Fl_Input_.H ****   ~Fl_Input_();
 221:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 222:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 223:fltk-1.3.4-1/FL/Fl_Input_.H ****   int value(const char*);
 224:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 225:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 226:fltk-1.3.4-1/FL/Fl_Input_.H ****   int value(const char*, int);
 227:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 228:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 229:fltk-1.3.4-1/FL/Fl_Input_.H ****   int static_value(const char*);
 230:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 231:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 232:fltk-1.3.4-1/FL/Fl_Input_.H ****   int static_value(const char*, int);
 233:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 234:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 235:fltk-1.3.4-1/FL/Fl_Input_.H ****       Returns the text displayed in the widget.
 236:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 237:fltk-1.3.4-1/FL/Fl_Input_.H ****       This function returns the current value, which is a pointer
 238:fltk-1.3.4-1/FL/Fl_Input_.H ****       to the internal buffer and is valid only until the next event is
 239:fltk-1.3.4-1/FL/Fl_Input_.H ****       handled.
 240:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 241:fltk-1.3.4-1/FL/Fl_Input_.H ****       \return pointer to an internal buffer - do not free() this    
 242:fltk-1.3.4-1/FL/Fl_Input_.H ****       \see Fl_Input_::value(const char*)
 243:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 244:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* value() const {return value_;}
 245:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 246:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Returns the character at index \p i. */
 247:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Char index(int i) const;
 248:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 249:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 250:fltk-1.3.4-1/FL/Fl_Input_.H ****     Returns the number of bytes in value(). 
 251:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 252:fltk-1.3.4-1/FL/Fl_Input_.H ****     This may be greater than <tt>strlen(value())</tt> if there are 
 253:fltk-1.3.4-1/FL/Fl_Input_.H ****     \c nul characters in the text.
 254:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 255:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return number of bytes in the text
 256:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 257:fltk-1.3.4-1/FL/Fl_Input_.H ****   int size() const {return size_;}
 258:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 259:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the width and height of this widget.
 260:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] W, H new width and height
 261:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see Fl_Widget::size(int, int) */
 262:fltk-1.3.4-1/FL/Fl_Input_.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 263:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 264:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the maximum length of the input field in characters.
 265:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see maximum_size(int). */
 266:fltk-1.3.4-1/FL/Fl_Input_.H ****   int maximum_size() const {return maximum_size_;}
 267:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 268:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the maximum length of the input field in characters.
 269:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 270:fltk-1.3.4-1/FL/Fl_Input_.H ****     This limits the number of <b>characters</b> that can be inserted
 271:fltk-1.3.4-1/FL/Fl_Input_.H ****     in the widget.
 272:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 273:fltk-1.3.4-1/FL/Fl_Input_.H ****     Since FLTK 1.3 this is different than the buffer size, since one
 274:fltk-1.3.4-1/FL/Fl_Input_.H ****     character can be more than one byte in UTF-8 encoding. In FLTK 1.1
 275:fltk-1.3.4-1/FL/Fl_Input_.H ****     this was the same (one byte = one character).
 276:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 277:fltk-1.3.4-1/FL/Fl_Input_.H ****   void maximum_size(int m) {maximum_size_ = m;}
 278:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 279:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the position of the text cursor.
 280:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the cursor position as an index in the range 0..size()
 281:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(int, int)
 282:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 283:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position() const {return position_;}
 284:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 285:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the current selection mark. 
 286:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return index into the text */
 287:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark() const {return mark_;}
 288:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 289:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Sets the index for the cursor and mark. */
 290:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position(int p, int m);
 291:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 292:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the cursor position and mark.
 293:fltk-1.3.4-1/FL/Fl_Input_.H ****     position(n) is the same as <tt>position(n, n)</tt>.
 294:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param p new index for cursor and mark
 295:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no positions changed
 296:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(int, int), position(), mark(int)
 297:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 298:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position(int p) {return position(p, p);}
 299:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 300:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the current selection mark. 
 301:fltk-1.3.4-1/FL/Fl_Input_.H ****     mark(n) is the same as <tt>position(position(),n)</tt>.
 302:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param m new index of the mark 
 303:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if the mark did not change
 304:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(), position(int, int) */
 305:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark(int m) {return position(position(), m);}
 306:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 307:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Deletes text from \p b to \p e and inserts the new string \p text. */
 308:fltk-1.3.4-1/FL/Fl_Input_.H ****   int replace(int b, int e, const char *text, int ilen=0);
 309:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 310:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 311:fltk-1.3.4-1/FL/Fl_Input_.H ****     Deletes the current selection.
 312:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 313:fltk-1.3.4-1/FL/Fl_Input_.H ****     This function deletes the currently selected text
 314:fltk-1.3.4-1/FL/Fl_Input_.H ****     \e without storing it in the clipboard. To use the clipboard,
 315:fltk-1.3.4-1/FL/Fl_Input_.H ****     you may call copy() first or copy_cuts() after
 316:fltk-1.3.4-1/FL/Fl_Input_.H ****     this call.
 317:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 318:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no data was copied
 319:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 320:fltk-1.3.4-1/FL/Fl_Input_.H ****   int cut() {return replace(position(), mark(), 0);}
 321:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 322:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 323:fltk-1.3.4-1/FL/Fl_Input_.H ****     Deletes the next \p n bytes rounded to characters before or after the cursor.
 324:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 325:fltk-1.3.4-1/FL/Fl_Input_.H ****     This function deletes the currently selected text
 326:fltk-1.3.4-1/FL/Fl_Input_.H ****     \e without storing it in the clipboard. To use the clipboard,
 327:fltk-1.3.4-1/FL/Fl_Input_.H ****     you may call copy() first or copy_cuts() after
 328:fltk-1.3.4-1/FL/Fl_Input_.H ****     this call.
 329:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 330:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param n number of bytes rounded to full characters and clamped to the buffer.
 331:fltk-1.3.4-1/FL/Fl_Input_.H ****            A negative number will cut characters to the left of the cursor.
 332:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no data was copied
 333:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 334:fltk-1.3.4-1/FL/Fl_Input_.H ****   int cut(int n) {return replace(position(), position()+n, 0);}
 335:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 336:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 337:fltk-1.3.4-1/FL/Fl_Input_.H ****     Deletes all characters between index \p a and \p b.
 338:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 339:fltk-1.3.4-1/FL/Fl_Input_.H ****     This function deletes the currently selected text
 340:fltk-1.3.4-1/FL/Fl_Input_.H ****     \e without storing it in the clipboard. To use the clipboard,
 341:fltk-1.3.4-1/FL/Fl_Input_.H ****     you may call copy() first or copy_cuts() after
 342:fltk-1.3.4-1/FL/Fl_Input_.H ****     this call.
 343:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 344:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param a, b range of bytes rounded to full characters and clamped to the buffer
 345:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no data was copied
 346:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 347:fltk-1.3.4-1/FL/Fl_Input_.H ****   int cut(int a, int b) {return replace(a, b, 0);}
 348:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 349:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 350:fltk-1.3.4-1/FL/Fl_Input_.H ****     Inserts text at the cursor position.
 351:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 352:fltk-1.3.4-1/FL/Fl_Input_.H ****     This function inserts the string in \p t at the cursor
 353:fltk-1.3.4-1/FL/Fl_Input_.H ****     position() and moves the new position and mark to
 354:fltk-1.3.4-1/FL/Fl_Input_.H ****     the end of the inserted text.
 355:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 356:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] t text that will be inserted
 357:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] l length of text, or 0 if the string is terminated by \c nul.
 358:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no text was inserted
 359:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 360:fltk-1.3.4-1/FL/Fl_Input_.H ****   int insert(const char* t, int l=0){return replace(position_, mark_, t, l);}
 361:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 362:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Put the current selection into the clipboard. */
 363:fltk-1.3.4-1/FL/Fl_Input_.H ****   int copy(int clipboard);
 364:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 365:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Undo previous changes to the text buffer. */
 366:fltk-1.3.4-1/FL/Fl_Input_.H ****   int undo();
 367:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 368:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Copy the yank buffer to the clipboard. */
 369:fltk-1.3.4-1/FL/Fl_Input_.H ****   int copy_cuts();
 370:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 371:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Return the shortcut key associated with this widget.
 372:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return shortcut keystroke
 373:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see Fl_Button::shortcut() */
 374:fltk-1.3.4-1/FL/Fl_Input_.H ****   int shortcut() const {return shortcut_;}
 375:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 376:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** 
 377:fltk-1.3.4-1/FL/Fl_Input_.H ****     Sets the shortcut key associated with this widget.
 378:fltk-1.3.4-1/FL/Fl_Input_.H ****     Pressing the shortcut key gives text editing focus to this widget.
 379:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] s new shortcut keystroke 
 380:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see Fl_Button::shortcut() 
 381:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 382:fltk-1.3.4-1/FL/Fl_Input_.H ****   void shortcut(int s) {shortcut_ = s;}
 383:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 384:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the font of the text in the input field.
 385:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the current Fl_Font index */
 386:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Font textfont() const {return textfont_;}
 387:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 388:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the font of the text in the input field.
 389:fltk-1.3.4-1/FL/Fl_Input_.H ****     The text font defaults to \c FL_HELVETICA.
 390:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] s the new text font */
 391:fltk-1.3.4-1/FL/Fl_Input_.H ****   void textfont(Fl_Font s) {textfont_ = s;}
 392:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 393:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the size of the text in the input field.
 394:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the text height in pixels */
 395:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Fontsize textsize() const {return textsize_;}
 396:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 397:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the size of the text in the input field.
 398:fltk-1.3.4-1/FL/Fl_Input_.H ****     The text height defaults to \c FL_NORMAL_SIZE.
 399:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] s the new font height in pixel units */
 400:fltk-1.3.4-1/FL/Fl_Input_.H ****   void textsize(Fl_Fontsize s) {textsize_ = s;}
 401:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 402:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the color of the text in the input field.
 403:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the text color
 404:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see textcolor(Fl_Color) */
 405:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Color textcolor() const {return textcolor_;}
 406:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 407:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the color of the text in the input field.
 408:fltk-1.3.4-1/FL/Fl_Input_.H ****     The text color defaults to \c FL_FOREGROUND_COLOR.
 409:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] n new text color
 410:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see textcolor() */
 411:fltk-1.3.4-1/FL/Fl_Input_.H ****   void textcolor(Fl_Color n) {textcolor_ = n;}
 412:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 413:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the color of the cursor.  
 414:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the current cursor color */
 415:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Color cursor_color() const {return cursor_color_;}
 416:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 417:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the color of the cursor.  
 418:fltk-1.3.4-1/FL/Fl_Input_.H ****     The default color for the cursor is \c FL_BLACK.
 419:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] n the new cursor color */
 420:fltk-1.3.4-1/FL/Fl_Input_.H ****   void cursor_color(Fl_Color n) {cursor_color_ = n;}
 421:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 422:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the input field type. 
 423:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the current input type */
 424:fltk-1.3.4-1/FL/Fl_Input_.H ****   int input_type() const {return type() & FL_INPUT_TYPE; }
 4356              		.loc 7 424 0
 4357 0300 440FB67B 		movzbl	108(%rbx), %r15d
 4357      6C
 4358              	.LVL535:
 4359              	.LBE1161:
 4360              	.LBE1160:
 591:fltk-1.3.4-1/src/Fl_Input_.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4361              		.loc 2 591 0
 4362 0305 8BB38800 		movl	136(%rbx), %esi
 4362      0000
 4363 030b 4489EA   		movl	%r13d, %edx
 4364 030e 4C89F7   		movq	%r14, %rdi
 4365              	.LBB1163:
 4366              	.LBB1162:
 4367              		.loc 7 424 0
 4368 0311 4183E707 		andl	$7, %r15d
 4369              	.LVL536:
 4370              	.LBE1162:
 4371              	.LBE1163:
 591:fltk-1.3.4-1/src/Fl_Input_.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4372              		.loc 2 591 0
 4373 0315 4489F9   		movl	%r15d, %ecx
 4374 0318 E8000000 		call	_ZL15strict_word_endPKciii
 4374      00
 4375              	.LVL537:
 592:fltk-1.3.4-1/src/Fl_Input_.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 4376              		.loc 2 592 0
 4377 031d 4489E6   		movl	%r12d, %esi
 4378 0320 4489FA   		movl	%r15d, %edx
 4379 0323 4C89F7   		movq	%r14, %rdi
 591:fltk-1.3.4-1/src/Fl_Input_.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4380              		.loc 2 591 0
 4381 0326 4189C5   		movl	%eax, %r13d
 4382              	.LVL538:
 592:fltk-1.3.4-1/src/Fl_Input_.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 4383              		.loc 2 592 0
 4384 0329 E8000000 		call	_ZL17strict_word_startPKcii
 4384      00
 4385              	.LVL539:
 4386 032e 4189C4   		movl	%eax, %r12d
 4387              	.LVL540:
 4388 0331 E900FFFF 		jmp	.L447
 4388      FF
 4389              	.LVL541:
 4390 0336 662E0F1F 		.p2align 4,,10
 4390      84000000 
 4390      0000
 4391              		.p2align 3
 4392              	.L478:
 551:fltk-1.3.4-1/src/Fl_Input_.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4393              		.loc 2 551 0
 4394 0340 8B2D0000 		movl	_ZN2Fl3e_yE(%rip), %ebp
 4394      0000
 4395              	.LBB1164:
 4396              	.LBB1165:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 4397              		.loc 5 527 0
 4398 0346 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4398      000000
 4399              	.LBE1165:
 4400              	.LBE1164:
 551:fltk-1.3.4-1/src/Fl_Input_.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4401              		.loc 2 551 0
 4402 034d 4429E5   		subl	%r12d, %ebp
 4403 0350 03ABA000 		addl	160(%rbx), %ebp
 4403      0000
 4404              	.LBB1167:
 4405              	.LBB1166:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 4406              		.loc 5 527 0
 4407 0356 488B07   		movq	(%rdi), %rax
 4408 0359 FF90D001 		call	*464(%rax)
 4408      0000
 4409              	.LVL542:
 4410 035f 89C1     		movl	%eax, %ecx
 4411              	.LBE1166:
 4412              	.LBE1167:
 551:fltk-1.3.4-1/src/Fl_Input_.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4413              		.loc 2 551 0
 4414 0361 89E8     		movl	%ebp, %eax
 4415 0363 99       		cltd
 4416 0364 F7F9     		idivl	%ecx
 4417 0366 89C5     		movl	%eax, %ebp
 4418 0368 E9F2FCFF 		jmp	.L430
 4418      FF
 4419              	.LVL543:
 4420              	.L458:
 4421              	.LBB1168:
 561:fltk-1.3.4-1/src/Fl_Input_.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4422              		.loc 2 561 0
 4423 036d 4C89E5   		movq	%r12, %rbp
 4424 0370 E9E0FDFF 		jmp	.L433
 4424      FF
 4425              	.LVL544:
 4426              	.L448:
 4427              	.LBE1168:
 4428              	.LBB1169:
 4429              	.LBB1170:
 4430              		.loc 7 424 0
 4431 0375 0FB66B6C 		movzbl	108(%rbx), %ebp
 4432              	.LVL545:
 4433              	.LBE1170:
 4434              	.LBE1169:
 599:fltk-1.3.4-1/src/Fl_Input_.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4435              		.loc 2 599 0
 4436 0379 4C89F7   		movq	%r14, %rdi
 4437              	.LBB1172:
 4438              	.LBB1171:
 4439              		.loc 7 424 0
 4440 037c 83E507   		andl	$7, %ebp
 4441              	.LVL546:
 4442              	.LBE1171:
 4443              	.LBE1172:
 599:fltk-1.3.4-1/src/Fl_Input_.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4444              		.loc 2 599 0
 4445 037f 89EA     		movl	%ebp, %edx
 4446 0381 E8000000 		call	_ZL17strict_word_startPKcii
 4446      00
 4447              	.LVL547:
 600:fltk-1.3.4-1/src/Fl_Input_.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4448              		.loc 2 600 0
 4449 0386 8BB38800 		movl	136(%rbx), %esi
 4449      0000
 4450 038c 4489E2   		movl	%r12d, %edx
 4451 038f 89E9     		movl	%ebp, %ecx
 4452 0391 4C89F7   		movq	%r14, %rdi
 599:fltk-1.3.4-1/src/Fl_Input_.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4453              		.loc 2 599 0
 4454 0394 4189C5   		movl	%eax, %r13d
 4455              	.LVL548:
 600:fltk-1.3.4-1/src/Fl_Input_.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4456              		.loc 2 600 0
 4457 0397 E8000000 		call	_ZL15strict_word_endPKciii
 4457      00
 4458              	.LVL549:
 4459 039c 4189C4   		movl	%eax, %r12d
 4460              	.LVL550:
 4461 039f E914FEFF 		jmp	.L442
 4461      FF
 4462              	.LVL551:
 4463              		.p2align 4,,10
 4464 03a4 0F1F4000 		.p2align 3
 4465              	.L451:
 607:fltk-1.3.4-1/src/Fl_Input_.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 4466              		.loc 2 607 0
 4467 03a8 4439E8   		cmpl	%r13d, %eax
 4468 03ab 0F8C07FE 		jl	.L442
 4468      FFFF
 4469 03b1 4439E2   		cmpl	%r12d, %edx
 4470 03b4 0F8EAEFE 		jle	.L452
 4470      FFFF
 4471 03ba E9F9FDFF 		jmp	.L442
 4471      FF
 4472              	.LVL552:
 4473              	.L485:
 584:fltk-1.3.4-1/src/Fl_Input_.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 4474              		.loc 2 584 0
 4475 03bf 4189F4   		movl	%esi, %r12d
 4476 03c2 448D6E01 		leal	1(%rsi), %r13d
 4477              	.LVL553:
 4478 03c6 E942FEFF 		jmp	.L444
 4478      FF
 4479              	.LVL554:
 4480              	.L483:
 4481              	.LBB1173:
 4482              	.LBB1152:
 4483 03cb 4889DF   		movq	%rbx, %rdi
 4484 03ce E8000000 		call	_ZNK9Fl_Input_10line_startEi.part.32.constprop.37
 4484      00
 4485              	.LVL555:
 4486 03d3 4189C5   		movl	%eax, %r13d
 4487 03d6 E9C8FDFF 		jmp	.L449
 4487      FF
 4488              	.LVL556:
 4489              	.L486:
 4490              	.LBE1152:
 4491              	.LBE1173:
 4492              	.LBB1174:
 4493              	.LBB1156:
 4494 03db 4489E6   		movl	%r12d, %esi
 4495 03de 4889DF   		movq	%rbx, %rdi
 4496 03e1 E8000000 		call	_ZNK9Fl_Input_10line_startEi.part.32.constprop.37
 4496      00
 4497              	.LVL557:
 4498 03e6 4189C4   		movl	%eax, %r12d
 4499              	.LVL558:
 4500 03e9 E948FEFF 		jmp	.L447
 4500      FF
 4501              	.LVL559:
 4502              	.L484:
 4503              	.LBE1156:
 4504              	.LBE1174:
 613:fltk-1.3.4-1/src/Fl_Input_.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 4505              		.loc 2 613 0
 4506 03ee E8000000 		call	__stack_chk_fail
 4506      00
 4507              	.LVL560:
 4508              	.L482:
 583:fltk-1.3.4-1/src/Fl_Input_.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4509              		.loc 2 583 0
 4510 03f3 0F8514FE 		jne	.L444
 4510      FFFF
 4511 03f9 E9FFFDFF 		jmp	.L455
 4511      FF
 4512              		.cfi_endproc
 4513              	.LFE594:
 4515              		.section	.text.unlikely._ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35
 4516              	.LCOLDE27:
 4517              		.section	.text._ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35
 4518              	.LHOTE27:
 4519              		.section	.text.unlikely._ZN9Fl_Input_12handle_mouseEiiiii,"ax",@progbits
 4520              		.align 2
 4521              	.LCOLDB28:
 4522              		.section	.text._ZN9Fl_Input_12handle_mouseEiiiii,"ax",@progbits
 4523              	.LHOTB28:
 4524              		.align 2
 4525              		.p2align 4,,15
 4526              		.globl	_ZN9Fl_Input_12handle_mouseEiiiii
 4528              	_ZN9Fl_Input_12handle_mouseEiiiii:
 4529              	.LFB533:
 542:fltk-1.3.4-1/src/Fl_Input_.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4530              		.loc 2 542 0
 4531              		.cfi_startproc
 4532              	.LVL561:
 544:fltk-1.3.4-1/src/Fl_Input_.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4533              		.loc 2 544 0
 4534 0000 8B878800 		movl	136(%rdi), %eax
 4534      0000
 543:fltk-1.3.4-1/src/Fl_Input_.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 4535              		.loc 2 543 0
 4536 0006 C7050000 		movl	$0, _ZN9Fl_Input_11was_up_downE(%rip)
 4536      00000000 
 4536      0000
 4537              	.LVL562:
 544:fltk-1.3.4-1/src/Fl_Input_.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4538              		.loc 2 544 0
 4539 0010 85C0     		testl	%eax, %eax
 4540 0012 750C     		jne	.L489
 4541 0014 F3C3     		rep ret
 4542 0016 662E0F1F 		.p2align 4,,10
 4542      84000000 
 4542      0000
 4543              		.p2align 3
 4544              	.L489:
 4545 0020 4489C9   		movl	%r9d, %ecx
 4546 0023 E9000000 		jmp	_ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35
 4546      00
 4547              	.LVL563:
 4548              		.cfi_endproc
 4549              	.LFE533:
 4551              		.section	.text.unlikely._ZN9Fl_Input_12handle_mouseEiiiii
 4552              	.LCOLDE28:
 4553              		.section	.text._ZN9Fl_Input_12handle_mouseEiiiii
 4554              	.LHOTE28:
 4555              		.section	.text.unlikely._ZN9Fl_Input_16up_down_positionEii,"ax",@progbits
 4556              		.align 2
 4557              	.LCOLDB29:
 4558              		.section	.text._ZN9Fl_Input_16up_down_positionEii,"ax",@progbits
 4559              	.LHOTB29:
 4560              		.align 2
 4561              		.p2align 4,,15
 4562              		.globl	_ZN9Fl_Input_16up_down_positionEii
 4564              	_ZN9Fl_Input_16up_down_positionEii:
 4565              	.LFB535:
 692:fltk-1.3.4-1/src/Fl_Input_.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 4566              		.loc 2 692 0
 4567              		.cfi_startproc
 4568              	.LVL564:
 4569 0000 4157     		pushq	%r15
 4570              		.cfi_def_cfa_offset 16
 4571              		.cfi_offset 15, -16
 4572 0002 4156     		pushq	%r14
 4573              		.cfi_def_cfa_offset 24
 4574              		.cfi_offset 14, -24
 4575 0004 4155     		pushq	%r13
 4576              		.cfi_def_cfa_offset 32
 4577              		.cfi_offset 13, -32
 4578 0006 4154     		pushq	%r12
 4579              		.cfi_def_cfa_offset 40
 4580              		.cfi_offset 12, -40
 4581 0008 4989FD   		movq	%rdi, %r13
 4582 000b 55       		pushq	%rbp
 4583              		.cfi_def_cfa_offset 48
 4584              		.cfi_offset 6, -48
 4585 000c 53       		pushq	%rbx
 4586              		.cfi_def_cfa_offset 56
 4587              		.cfi_offset 3, -56
 4588 000d 4C63E6   		movslq	%esi, %r12
 4589 0010 4881EC28 		subq	$1064, %rsp
 4589      040000
 4590              		.cfi_def_cfa_offset 1120
 4591              	.LBB1175:
 4592              	.LBB1176:
 4593              	.LBB1177:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 4594              		.loc 5 509 0
 4595 0017 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4595      000000
 4596              	.LVL565:
 4597 001e 418BB5B4 		movl	180(%r13), %esi
 4597      000000
 4598              	.LVL566:
 4599              	.LBE1177:
 4600              	.LBE1176:
 4601              	.LBE1175:
 692:fltk-1.3.4-1/src/Fl_Input_.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 4602              		.loc 2 692 0
 4603 0025 64488B04 		movq	%fs:40, %rax
 4603      25280000 
 4603      00
 4604 002e 48898424 		movq	%rax, 1048(%rsp)
 4604      18040000 
 4605 0036 31C0     		xorl	%eax, %eax
 4606              	.LVL567:
 4607 0038 8954240C 		movl	%edx, 12(%rsp)
 4608              	.LBB1180:
 4609              	.LBB1179:
 4610              	.LBB1178:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 4611              		.loc 5 509 0
 4612 003c 418B95B8 		movl	184(%r13), %edx
 4612      000000
 4613              	.LVL568:
 4614 0043 488B07   		movq	(%rdi), %rax
 4615 0046 FF90B001 		call	*432(%rax)
 4615      0000
 4616              	.LVL569:
 4617              	.LBE1178:
 4618              	.LBE1179:
 4619              	.LBE1180:
 697:fltk-1.3.4-1/src/Fl_Input_.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 4620              		.loc 2 697 0
 4621 004c 4D036578 		addq	120(%r13), %r12
 4622              	.LVL570:
 698:fltk-1.3.4-1/src/Fl_Input_.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4623              		.loc 2 698 0
 4624 0050 488D5424 		leaq	16(%rsp), %rdx
 4624      10
 4625 0055 4C89EF   		movq	%r13, %rdi
 4626 0058 4C89E6   		movq	%r12, %rsi
 4627 005b E8000000 		call	_ZNK9Fl_Input_6expandEPKcPc
 4627      00
 4628              	.LVL571:
 4629              	.LBB1181:
 700:fltk-1.3.4-1/src/Fl_Input_.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4630              		.loc 2 700 0
 4631 0060 4939C4   		cmpq	%rax, %r12
 4632 0063 0F83C000 		jnb	.L491
 4632      0000
 4633 0069 4989C6   		movq	%rax, %r14
 4634 006c 4D89E7   		movq	%r12, %r15
 4635 006f EB10     		jmp	.L494
 4636              	.LVL572:
 4637              		.p2align 4,,10
 4638 0071 0F1F8000 		.p2align 3
 4638      000000
 4639              	.L502:
 4640              	.LBB1182:
 703:fltk-1.3.4-1/src/Fl_Input_.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 4641              		.loc 2 703 0 discriminator 2
 4642 0078 4C8D73FF 		leaq	-1(%rbx), %r14
 4643              	.LVL573:
 4644              	.LBE1182:
 700:fltk-1.3.4-1/src/Fl_Input_.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4645              		.loc 2 700 0 discriminator 2
 4646 007c 4D39FE   		cmpq	%r15, %r14
 4647 007f 7659     		jbe	.L493
 4648              	.LVL574:
 4649              	.L494:
 4650              	.LBB1183:
 701:fltk-1.3.4-1/src/Fl_Input_.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 4651              		.loc 2 701 0
 4652 0081 4C89F2   		movq	%r14, %rdx
 702:fltk-1.3.4-1/src/Fl_Input_.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4653              		.loc 2 702 0
 4654 0084 488D4C24 		leaq	16(%rsp), %rcx
 4654      10
 4655 0089 4531C0   		xorl	%r8d, %r8d
 701:fltk-1.3.4-1/src/Fl_Input_.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 4656              		.loc 2 701 0
 4657 008c 4C29FA   		subq	%r15, %rdx
 702:fltk-1.3.4-1/src/Fl_Input_.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4658              		.loc 2 702 0
 4659 008f 4C89E6   		movq	%r12, %rsi
 4660 0092 4C89EF   		movq	%r13, %rdi
 701:fltk-1.3.4-1/src/Fl_Input_.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 4661              		.loc 2 701 0
 4662 0095 4883C201 		addq	$1, %rdx
 4663 0099 4C89FD   		movq	%r15, %rbp
 4664 009c 4889D3   		movq	%rdx, %rbx
 4665 009f 48C1EB3F 		shrq	$63, %rbx
 4666 00a3 4801DA   		addq	%rbx, %rdx
 4667 00a6 48D1FA   		sarq	%rdx
 4668 00a9 498D1C17 		leaq	(%r15,%rdx), %rbx
 4669              	.LVL575:
 702:fltk-1.3.4-1/src/Fl_Input_.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4670              		.loc 2 702 0
 4671 00ad 4889DA   		movq	%rbx, %rdx
 4672 00b0 E8000000 		call	_ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
 4672      00
 4673              	.LVL576:
 703:fltk-1.3.4-1/src/Fl_Input_.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 4674              		.loc 2 703 0
 4675 00b5 F20F2CD0 		cvttsd2si	%xmm0, %edx
 4676              	.LVL577:
 4677 00b9 660FEFC0 		pxor	%xmm0, %xmm0
 4678 00bd F20F100D 		movsd	_ZN9Fl_Input_11up_down_posE(%rip), %xmm1
 4678      00000000 
 4679 00c5 F20F2AC2 		cvtsi2sd	%edx, %xmm0
 4680 00c9 660F2EC8 		ucomisd	%xmm0, %xmm1
 4681 00cd 72A9     		jb	.L502
 4682              	.LVL578:
 4683 00cf 4989DF   		movq	%rbx, %r15
 4684 00d2 4889DD   		movq	%rbx, %rbp
 4685              	.LVL579:
 4686              	.LBE1183:
 700:fltk-1.3.4-1/src/Fl_Input_.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4687              		.loc 2 700 0
 4688 00d5 4D39FE   		cmpq	%r15, %r14
 4689 00d8 77A7     		ja	.L494
 4690              	.LVL580:
 4691              	.L493:
 4692              	.LBE1181:
 705:fltk-1.3.4-1/src/Fl_Input_.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4693              		.loc 2 705 0
 4694 00da 4889EE   		movq	%rbp, %rsi
 706:fltk-1.3.4-1/src/Fl_Input_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 4695              		.loc 2 706 0
 4696 00dd 8B44240C 		movl	12(%rsp), %eax
 705:fltk-1.3.4-1/src/Fl_Input_.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4697              		.loc 2 705 0
 4698 00e1 492B7578 		subq	120(%r13), %rsi
 4699              	.LVL581:
 706:fltk-1.3.4-1/src/Fl_Input_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 4700              		.loc 2 706 0
 4701 00e5 85C0     		testl	%eax, %eax
 4702 00e7 89F2     		movl	%esi, %edx
 4703 00e9 7407     		je	.L497
 706:fltk-1.3.4-1/src/Fl_Input_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 4704              		.loc 2 706 0 is_stmt 0 discriminator 1
 4705 00eb 418B9594 		movl	148(%r13), %edx
 4705      000000
 4706              	.L497:
 706:fltk-1.3.4-1/src/Fl_Input_.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 4707              		.loc 2 706 0 discriminator 4
 4708 00f2 4C89EF   		movq	%r13, %rdi
 4709 00f5 E8000000 		call	_ZN9Fl_Input_8positionEii
 4709      00
 4710              	.LVL582:
 709:fltk-1.3.4-1/src/Fl_Input_.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 4711              		.loc 2 709 0 is_stmt 1 discriminator 4
 4712 00fa 488B8C24 		movq	1048(%rsp), %rcx
 4712      18040000 
 4713 0102 6448330C 		xorq	%fs:40, %rcx
 4713      25280000 
 4713      00
 707:fltk-1.3.4-1/src/Fl_Input_.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4714              		.loc 2 707 0 discriminator 4
 4715 010b C7050000 		movl	$1, _ZN9Fl_Input_11was_up_downE(%rip)
 4715      00000100 
 4715      0000
 709:fltk-1.3.4-1/src/Fl_Input_.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 4716              		.loc 2 709 0 discriminator 4
 4717 0115 7517     		jne	.L503
 709:fltk-1.3.4-1/src/Fl_Input_.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 4718              		.loc 2 709 0 is_stmt 0
 4719 0117 4881C428 		addq	$1064, %rsp
 4719      040000
 4720              		.cfi_remember_state
 4721              		.cfi_def_cfa_offset 56
 4722 011e 5B       		popq	%rbx
 4723              		.cfi_def_cfa_offset 48
 4724 011f 5D       		popq	%rbp
 4725              		.cfi_def_cfa_offset 40
 4726              	.LVL583:
 4727 0120 415C     		popq	%r12
 4728              		.cfi_def_cfa_offset 32
 4729              	.LVL584:
 4730 0122 415D     		popq	%r13
 4731              		.cfi_def_cfa_offset 24
 4732              	.LVL585:
 4733 0124 415E     		popq	%r14
 4734              		.cfi_def_cfa_offset 16
 4735 0126 415F     		popq	%r15
 4736              		.cfi_def_cfa_offset 8
 4737 0128 C3       		ret
 4738              	.LVL586:
 4739              	.L491:
 4740              		.cfi_restore_state
 4741 0129 4C89E5   		movq	%r12, %rbp
 4742 012c EBAC     		jmp	.L493
 4743              	.LVL587:
 4744              	.L503:
 4745 012e E8000000 		call	__stack_chk_fail
 4745      00
 4746              	.LVL588:
 4747              		.cfi_endproc
 4748              	.LFE535:
 4750              		.section	.text.unlikely._ZN9Fl_Input_16up_down_positionEii
 4751              	.LCOLDE29:
 4752              		.section	.text._ZN9Fl_Input_16up_down_positionEii
 4753              	.LHOTE29:
 4754              		.section	.text.unlikely._ZN9Fl_Input_4copyEi,"ax",@progbits
 4755              		.align 2
 4756              	.LCOLDB30:
 4757              		.section	.text._ZN9Fl_Input_4copyEi,"ax",@progbits
 4758              	.LHOTB30:
 4759              		.align 2
 4760              		.p2align 4,,15
 4761              		.globl	_ZN9Fl_Input_4copyEi
 4763              	_ZN9Fl_Input_4copyEi:
 4764              	.LFB536:
 724:fltk-1.3.4-1/src/Fl_Input_.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 4765              		.loc 2 724 0 is_stmt 1
 4766              		.cfi_startproc
 4767              	.LVL589:
 4768 0000 4883EC08 		subq	$8, %rsp
 4769              		.cfi_def_cfa_offset 16
 4770 0004 48638794 		movslq	148(%rdi), %rax
 4770      000000
 4771 000b 8B8F9000 		movl	144(%rdi), %ecx
 4771      0000
 4772              	.LVL590:
 727:fltk-1.3.4-1/src/Fl_Input_.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 4773              		.loc 2 727 0
 4774 0011 39C1     		cmpl	%eax, %ecx
 4775 0013 7443     		je	.L508
 728:fltk-1.3.4-1/src/Fl_Input_.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 4776              		.loc 2 728 0
 4777 0015 7E31     		jle	.L511
 4778              	.L506:
 4779 0017 89F2     		movl	%esi, %edx
 4780              	.LVL591:
 729:fltk-1.3.4-1/src/Fl_Input_.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4781              		.loc 2 729 0
 4782 0019 0FB6776C 		movzbl	108(%rdi), %esi
 4783              	.LVL592:
 4784 001d 29C1     		subl	%eax, %ecx
 4785              	.LVL593:
 4786 001f 83E607   		andl	$7, %esi
 4787 0022 4080FE05 		cmpb	$5, %sil
 4788 0026 BE000000 		movl	$0, %esi
 4788      00
 4789 002b 0F45F1   		cmovne	%ecx, %esi
 4790              	.LVL594:
 730:fltk-1.3.4-1/src/Fl_Input_.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 4791              		.loc 2 730 0
 4792 002e 48034778 		addq	120(%rdi), %rax
 4793              	.LVL595:
 4794 0032 4889C7   		movq	%rax, %rdi
 4795              	.LVL596:
 4796 0035 E8000000 		call	_ZN2Fl4copyEPKcii
 4796      00
 4797              	.LVL597:
 731:fltk-1.3.4-1/src/Fl_Input_.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4798              		.loc 2 731 0
 4799 003a B8010000 		movl	$1, %eax
 4799      00
 734:fltk-1.3.4-1/src/Fl_Input_.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 4800              		.loc 2 734 0
 4801 003f 4883C408 		addq	$8, %rsp
 4802              		.cfi_remember_state
 4803              		.cfi_def_cfa_offset 8
 4804 0043 C3       		ret
 4805              	.LVL598:
 4806              		.p2align 4,,10
 4807 0044 0F1F4000 		.p2align 3
 4808              	.L511:
 4809              		.cfi_restore_state
 728:fltk-1.3.4-1/src/Fl_Input_.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 4810              		.loc 2 728 0
 4811 0048 89C2     		movl	%eax, %edx
 4812 004a 4863C1   		movslq	%ecx, %rax
 4813 004d 89D1     		movl	%edx, %ecx
 4814 004f EBC6     		jmp	.L506
 4815              		.p2align 4,,10
 4816 0051 0F1F8000 		.p2align 3
 4816      000000
 4817              	.L508:
 733:fltk-1.3.4-1/src/Fl_Input_.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 4818              		.loc 2 733 0
 4819 0058 31C0     		xorl	%eax, %eax
 734:fltk-1.3.4-1/src/Fl_Input_.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 4820              		.loc 2 734 0
 4821 005a 4883C408 		addq	$8, %rsp
 4822              		.cfi_def_cfa_offset 8
 4823 005e C3       		ret
 4824              		.cfi_endproc
 4825              	.LFE536:
 4827              		.section	.text.unlikely._ZN9Fl_Input_4copyEi
 4828              	.LCOLDE30:
 4829              		.section	.text._ZN9Fl_Input_4copyEi
 4830              	.LHOTE30:
 4831              		.section	.text.unlikely._ZN9Fl_Input_9copy_cutsEv,"ax",@progbits
 4832              		.align 2
 4833              	.LCOLDB31:
 4834              		.section	.text._ZN9Fl_Input_9copy_cutsEv,"ax",@progbits
 4835              	.LHOTB31:
 4836              		.align 2
 4837              		.p2align 4,,15
 4838              		.globl	_ZN9Fl_Input_9copy_cutsEv
 4840              	_ZN9Fl_Input_9copy_cutsEv:
 4841              	.LFB540:
 977:fltk-1.3.4-1/src/Fl_Input_.cxx ****  961:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window_offset(int& xoff, int& yoff) const;
 4842              		.loc 2 977 0
 4843              		.cfi_startproc
 4844              	.LVL599:
 979:fltk-1.3.4-1/src/Fl_Input_.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 4845              		.loc 2 979 0
 4846 0000 8B050000 		movl	_ZL7yankcut(%rip), %eax
 4846      0000
 4847 0006 85C0     		testl	%eax, %eax
 4848 0008 7506     		jne	.L522
 982:fltk-1.3.4-1/src/Fl_Input_.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 4849              		.loc 2 982 0
 4850 000a C3       		ret
 4851 000b 0F1F4400 		.p2align 4,,10
 4851      00
 4852              		.p2align 3
 4853              	.L522:
 4854              	.LVL600:
 979:fltk-1.3.4-1/src/Fl_Input_.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 4855              		.loc 2 979 0
 4856 0010 0FB6576C 		movzbl	108(%rdi), %edx
 4857 0014 83E207   		andl	$7, %edx
 4858 0017 80FA05   		cmpb	$5, %dl
 4859 001a 7424     		je	.L523
 977:fltk-1.3.4-1/src/Fl_Input_.cxx ****  961:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Window* top_window_offset(int& xoff, int& yoff) const;
 4860              		.loc 2 977 0
 4861 001c 4883EC08 		subq	$8, %rsp
 4862              		.cfi_def_cfa_offset 16
 980:fltk-1.3.4-1/src/Fl_Input_.cxx ****  964:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4863              		.loc 2 980 0
 4864 0020 488B3D00 		movq	_ZL10undobuffer(%rip), %rdi
 4864      000000
 4865              	.LVL601:
 4866 0027 89C6     		movl	%eax, %esi
 4867 0029 BA010000 		movl	$1, %edx
 4867      00
 4868 002e E8000000 		call	_ZN2Fl4copyEPKcii
 4868      00
 4869              	.LVL602:
 981:fltk-1.3.4-1/src/Fl_Input_.cxx ****  965:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 4870              		.loc 2 981 0
 4871 0033 B8010000 		movl	$1, %eax
 4871      00
 982:fltk-1.3.4-1/src/Fl_Input_.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 4872              		.loc 2 982 0
 4873 0038 4883C408 		addq	$8, %rsp
 4874              		.cfi_def_cfa_offset 8
 4875 003c C3       		ret
 4876              	.LVL603:
 4877 003d 0F1F00   		.p2align 4,,10
 4878              		.p2align 3
 4879              	.L523:
 979:fltk-1.3.4-1/src/Fl_Input_.cxx ****  963:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Group pointer if this widget is an Fl_Gro
 4880              		.loc 2 979 0
 4881 0040 31C0     		xorl	%eax, %eax
 982:fltk-1.3.4-1/src/Fl_Input_.cxx ****  966:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Group. If i
 4882              		.loc 2 982 0
 4883 0042 C3       		ret
 4884              		.cfi_endproc
 4885              	.LFE540:
 4887              		.section	.text.unlikely._ZN9Fl_Input_9copy_cutsEv
 4888              	.LCOLDE31:
 4889              		.section	.text._ZN9Fl_Input_9copy_cutsEv
 4890              	.LHOTE31:
 4891              		.section	.text.unlikely._ZN9Fl_Input_17maybe_do_callbackEv,"ax",@progbits
 4892              		.align 2
 4893              	.LCOLDB32:
 4894              		.section	.text._ZN9Fl_Input_17maybe_do_callbackEv,"ax",@progbits
 4895              	.LHOTB32:
 4896              		.align 2
 4897              		.p2align 4,,15
 4898              		.globl	_ZN9Fl_Input_17maybe_do_callbackEv
 4900              	_ZN9Fl_Input_17maybe_do_callbackEv:
 4901              	.LFB541:
 987:fltk-1.3.4-1/src/Fl_Input_.cxx ****  971:fltk-1.3.4-1/FL/Fl_Widget.H ****       Example:
 4902              		.loc 2 987 0
 4903              		.cfi_startproc
 4904              	.LVL604:
 988:fltk-1.3.4-1/src/Fl_Input_.cxx ****  972:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 4905              		.loc 2 988 0
 4906 0000 F6476080 		testb	$-128, 96(%rdi)
 4907 0004 7506     		jne	.L525
 4908              	.LVL605:
 988:fltk-1.3.4-1/src/Fl_Input_.cxx ****  972:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 4909              		.loc 2 988 0 is_stmt 0 discriminator 2
 4910 0006 F6476F02 		testb	$2, 111(%rdi)
 4911 000a 7414     		je	.L526
 4912              	.LVL606:
 4913              	.L525:
 4914              	.LBB1194:
 4915              	.LBB1195:
 4916              	.LBB1196:
 4917              	.LBB1197:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4918              		.loc 1 861 0 is_stmt 1
 4919 000c 488B5718 		movq	24(%rdi), %rdx
 4920 0010 4889FE   		movq	%rdi, %rsi
 4921 0013 E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 4921      00
 4922              	.LVL607:
 4923 0018 0F1F8400 		.p2align 4,,10
 4923      00000000 
 4924              		.p2align 3
 4925              	.L526:
 4926 0020 F3C3     		rep ret
 4927              	.LBE1197:
 4928              	.LBE1196:
 4929              	.LBE1195:
 4930              	.LBE1194:
 4931              		.cfi_endproc
 4932              	.LFE541:
 4934              		.section	.text.unlikely._ZN9Fl_Input_17maybe_do_callbackEv
 4935              	.LCOLDE32:
 4936              		.section	.text._ZN9Fl_Input_17maybe_do_callbackEv
 4937              	.LHOTE32:
 4938              		.section	.rodata.str1.1
 4939              	.LC33:
 4940 0007 00       		.string	""
 4941              		.section	.text.unlikely._ZN9Fl_Input_C2EiiiiPKc,"ax",@progbits
 4942              		.align 2
 4943              	.LCOLDB34:
 4944              		.section	.text._ZN9Fl_Input_C2EiiiiPKc,"ax",@progbits
 4945              	.LHOTB34:
 4946              		.align 2
 4947              		.p2align 4,,15
 4948              		.globl	_ZN9Fl_Input_C2EiiiiPKc
 4950              	_ZN9Fl_Input_C2EiiiiPKc:
 4951              	.LFB544:
1125:fltk-1.3.4-1/src/Fl_Input_.cxx ****   33:fltk-1.3.4-1/src/Fl_Input_.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fl
 4952              		.loc 2 1125 0
 4953              		.cfi_startproc
 4954              	.LVL608:
 4955 0000 53       		pushq	%rbx
 4956              		.cfi_def_cfa_offset 16
 4957              		.cfi_offset 3, -16
1125:fltk-1.3.4-1/src/Fl_Input_.cxx ****   33:fltk-1.3.4-1/src/Fl_Input_.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fl
 4958              		.loc 2 1125 0
 4959 0001 4889FB   		movq	%rdi, %rbx
 4960              	.LBB1198:
1126:fltk-1.3.4-1/src/Fl_Input_.cxx ****   34:fltk-1.3.4-1/src/Fl_Input_.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 4961              		.loc 2 1126 0
 4962 0004 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 4962      00
 4963              	.LVL609:
 4964 0009 48C70300 		movq	$_ZTV9Fl_Input_+16, (%rbx)
 4964      000000
 4965              	.LVL610:
1130:fltk-1.3.4-1/src/Fl_Input_.cxx ****   38:fltk-1.3.4-1/src/Fl_Input_.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4966              		.loc 2 1130 0
 4967 0010 8B050000 		movl	FL_NORMAL_SIZE(%rip), %eax
 4967      0000
 4968              	.LBB1199:
 4969              	.LBB1200:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4970              		.loc 1 372 0
 4971 0016 C6436E03 		movb	$3, 110(%rbx)
 4972              	.LVL611:
 4973              	.LBE1200:
 4974              	.LBE1199:
 4975              	.LBB1201:
 4976              	.LBB1202:
 415:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4977              		.loc 1 415 0
 4978 001a C7436407 		movl	$7, 100(%rbx)
 4978      000000
 4979 0021 C743680F 		movl	$15, 104(%rbx)
 4979      000000
 4980              	.LVL612:
 4981              	.LBE1202:
 4982              	.LBE1201:
 4983              	.LBB1203:
 4984              	.LBB1204:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4985              		.loc 1 357 0
 4986 0028 C7435404 		movl	$4, 84(%rbx)
 4986      000000
 4987              	.LVL613:
 4988              	.LBE1204:
 4989              	.LBE1203:
1130:fltk-1.3.4-1/src/Fl_Input_.cxx ****   38:fltk-1.3.4-1/src/Fl_Input_.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4990              		.loc 2 1130 0
 4991 002f 8983B800 		movl	%eax, 184(%rbx)
 4991      0000
1131:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39:fltk-1.3.4-1/src/Fl_Input_.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 4992              		.loc 2 1131 0
 4993 0035 C783B400 		movl	$0, 180(%rbx)
 4993      00000000 
 4993      0000
1132:fltk-1.3.4-1/src/Fl_Input_.cxx ****   40:fltk-1.3.4-1/src/Fl_Input_.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 4994              		.loc 2 1132 0
 4995 003f C783BC00 		movl	$0, 188(%rbx)
 4995      00000000 
 4995      0000
1133:fltk-1.3.4-1/src/Fl_Input_.cxx ****   41:fltk-1.3.4-1/src/Fl_Input_.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4996              		.loc 2 1133 0
 4997 0049 C783C000 		movl	$0, 192(%rbx)
 4997      00000000 
 4997      0000
1134:fltk-1.3.4-1/src/Fl_Input_.cxx ****   42:fltk-1.3.4-1/src/Fl_Input_.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumeratio
 4998              		.loc 2 1134 0
 4999 0053 C7838800 		movl	$0, 136(%rbx)
 4999      00000000 
 4999      0000
 5000 005d C7839000 		movl	$0, 144(%rbx)
 5000      00000000 
 5000      0000
 5001 0067 C7839400 		movl	$0, 148(%rbx)
 5001      00000000 
 5001      0000
1135:fltk-1.3.4-1/src/Fl_Input_.cxx ****   43:fltk-1.3.4-1/src/Fl_Input_.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5002              		.loc 2 1135 0
 5003 0071 C7838C00 		movl	$0, 140(%rbx)
 5003      00000000 
 5003      0000
1136:fltk-1.3.4-1/src/Fl_Input_.cxx ****   44:fltk-1.3.4-1/src/Fl_Input_.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 5004              		.loc 2 1136 0
 5005 007b 48C78380 		movq	$0, 128(%rbx)
 5005      00000000 
 5005      000000
1137:fltk-1.3.4-1/src/Fl_Input_.cxx ****   45:fltk-1.3.4-1/src/Fl_Input_.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl
 5006              		.loc 2 1137 0
 5007 0086 48C74378 		movq	$.LC33, 120(%rbx)
 5007      00000000 
1138:fltk-1.3.4-1/src/Fl_Input_.cxx ****   46:fltk-1.3.4-1/src/Fl_Input_.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 5008              		.loc 2 1138 0
 5009 008e C783A000 		movl	$0, 160(%rbx)
 5009      00000000 
 5009      0000
 5010 0098 C7839C00 		movl	$0, 156(%rbx)
 5010      00000000 
 5010      0000
1139:fltk-1.3.4-1/src/Fl_Input_.cxx ****   47:fltk-1.3.4-1/src/Fl_Input_.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 5011              		.loc 2 1139 0
 5012 00a2 C783A800 		movl	$32767, 168(%rbx)
 5012      0000FF7F 
 5012      0000
1140:fltk-1.3.4-1/src/Fl_Input_.cxx ****   48:fltk-1.3.4-1/src/Fl_Input_.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__
 5013              		.loc 2 1140 0
 5014 00ac C783AC00 		movl	$0, 172(%rbx)
 5014      00000000 
 5014      0000
 5015              	.LVL614:
 5016              	.LBB1205:
 5017              	.LBB1206:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 5018              		.loc 1 149 0
 5019 00b6 814B6040 		orl	$524352, 96(%rbx)
 5019      000800
 5020              	.LVL615:
 5021              	.LBE1206:
 5022              	.LBE1205:
 5023              	.LBB1207:
 5024              	.LBB1208:
 425:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 426:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the input field type. 
 427:fltk-1.3.4-1/FL/Fl_Input_.H ****     A redraw() is required to reformat the input field.
 428:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] t new input type */
 429:fltk-1.3.4-1/FL/Fl_Input_.H ****   void input_type(int t) { type((uchar)(t | readonly())); }
 430:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 431:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the read-only state of the input field.  
 432:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return non-zero if this widget is read-only */
 433:fltk-1.3.4-1/FL/Fl_Input_.H ****   int readonly() const { return type() & FL_INPUT_READONLY; }
 434:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 435:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the read-only state of the input field.  
 436:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] b if \p b is 0, the text in this widget can be edited by the user */
 437:fltk-1.3.4-1/FL/Fl_Input_.H ****   void readonly(int b) { if (b) type((uchar)(type() | FL_INPUT_READONLY));
 438:fltk-1.3.4-1/FL/Fl_Input_.H ****                          else type((uchar)(type() & ~FL_INPUT_READONLY)); }
 439:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 440:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 441:fltk-1.3.4-1/FL/Fl_Input_.H ****     Gets  the word wrapping state of the input field. 
 442:fltk-1.3.4-1/FL/Fl_Input_.H ****     Word wrap is only functional with multi-line input fields.
 443:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 444:fltk-1.3.4-1/FL/Fl_Input_.H ****   int wrap() const { return type() & FL_INPUT_WRAP; }
 445:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 446:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 447:fltk-1.3.4-1/FL/Fl_Input_.H ****     Sets the word wrapping state of the input field. 
 448:fltk-1.3.4-1/FL/Fl_Input_.H ****     Word wrap is only functional with multi-line input fields.
 449:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 450:fltk-1.3.4-1/FL/Fl_Input_.H ****   void wrap(int b) { if (b) type((uchar)(type() | FL_INPUT_WRAP));
 451:fltk-1.3.4-1/FL/Fl_Input_.H ****                          else type((uchar)(type() & ~FL_INPUT_WRAP)); }
 452:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 453:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 454:fltk-1.3.4-1/FL/Fl_Input_.H ****     Sets whether the Tab key does focus navigation, 
 455:fltk-1.3.4-1/FL/Fl_Input_.H ****     or inserts tab characters into Fl_Multiline_Input.
 456:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 457:fltk-1.3.4-1/FL/Fl_Input_.H ****     By default this flag is enabled to provide the 'normal' behavior 
 458:fltk-1.3.4-1/FL/Fl_Input_.H ****     most users expect; Tab navigates focus to the next widget. 
 459:fltk-1.3.4-1/FL/Fl_Input_.H ****     To inserting an actual Tab character, users can use Ctrl-I
 460:fltk-1.3.4-1/FL/Fl_Input_.H ****     or copy/paste.
 461:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 462:fltk-1.3.4-1/FL/Fl_Input_.H ****     Disabling this flag gives the old FLTK behavior where Tab
 463:fltk-1.3.4-1/FL/Fl_Input_.H ****     inserts a tab character into the text field, in which case
 464:fltk-1.3.4-1/FL/Fl_Input_.H ****     only the mouse can be used to navigate to the next field.
 465:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 466:fltk-1.3.4-1/FL/Fl_Input_.H ****     History: This flag was provided for backwards support of FLTK's old 1.1.x
 467:fltk-1.3.4-1/FL/Fl_Input_.H ****     behavior where Tab inserts a tab character instead of navigating 
 468:fltk-1.3.4-1/FL/Fl_Input_.H ****     focus to the next widget. This behavior was unique to Fl_Multiline_Input. 
 469:fltk-1.3.4-1/FL/Fl_Input_.H ****     With the advent of Fl_Text_Editor, this old behavior has been deprecated.
 470:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 471:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] val If \p val is 1, Tab advances focus (default).<BR>
 472:fltk-1.3.4-1/FL/Fl_Input_.H ****                     If \p val is 0, Tab inserts a tab character (old FLTK behavior).
 473:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 474:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see tab_nav(), Fl::OPTION_ARROW_FOCUS.
 475:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 476:fltk-1.3.4-1/FL/Fl_Input_.H ****   void tab_nav(int val) {
 477:fltk-1.3.4-1/FL/Fl_Input_.H ****     tab_nav_ = val;
 5025              		.loc 7 477 0
 5026 00bd C7839800 		movl	$1, 152(%rbx)
 5026      00000100 
 5026      0000
 5027              	.LVL616:
 5028              	.LBE1208:
 5029              	.LBE1207:
 5030              	.LBE1198:
1144:fltk-1.3.4-1/src/Fl_Input_.cxx ****   52:fltk-1.3.4-1/src/Fl_Input_.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 5031              		.loc 2 1144 0
 5032 00c7 5B       		popq	%rbx
 5033              		.cfi_def_cfa_offset 8
 5034              	.LVL617:
 5035 00c8 C3       		ret
 5036              		.cfi_endproc
 5037              	.LFE544:
 5039              		.section	.text.unlikely._ZN9Fl_Input_C2EiiiiPKc
 5040              	.LCOLDE34:
 5041              		.section	.text._ZN9Fl_Input_C2EiiiiPKc
 5042              	.LHOTE34:
 5043              		.globl	_ZN9Fl_Input_C1EiiiiPKc
 5044              		.set	_ZN9Fl_Input_C1EiiiiPKc,_ZN9Fl_Input_C2EiiiiPKc
 5045              		.section	.text.unlikely._ZN9Fl_Input_13put_in_bufferEi,"ax",@progbits
 5046              		.align 2
 5047              	.LCOLDB35:
 5048              		.section	.text._ZN9Fl_Input_13put_in_bufferEi,"ax",@progbits
 5049              	.LHOTB35:
 5050              		.align 2
 5051              		.p2align 4,,15
 5052              		.globl	_ZN9Fl_Input_13put_in_bufferEi
 5054              	_ZN9Fl_Input_13put_in_bufferEi:
 5055              	.LFB546:
1151:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/src/Fl_Input_.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5056              		.loc 2 1151 0
 5057              		.cfi_startproc
 5058              	.LVL618:
 5059 0000 4154     		pushq	%r12
 5060              		.cfi_def_cfa_offset 16
 5061              		.cfi_offset 12, -16
 5062 0002 55       		pushq	%rbp
 5063              		.cfi_def_cfa_offset 24
 5064              		.cfi_offset 6, -24
 5065 0003 53       		pushq	%rbx
 5066              		.cfi_def_cfa_offset 32
 5067              		.cfi_offset 3, -32
1151:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59:fltk-1.3.4-1/src/Fl_Input_.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5068              		.loc 2 1151 0
 5069 0004 4889FB   		movq	%rdi, %rbx
1152:fltk-1.3.4-1/src/Fl_Input_.cxx ****   60:fltk-1.3.4-1/src/Fl_Input_.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 5070              		.loc 2 1152 0
 5071 0007 4C8B6778 		movq	120(%rdi), %r12
 5072 000b 488BBF80 		movq	128(%rdi), %rdi
 5072      000000
 5073              	.LVL619:
 5074 0012 8B938C00 		movl	140(%rbx), %edx
 5074      0000
 5075 0018 4939FC   		cmpq	%rdi, %r12
 5076 001b 0F84D700 		je	.L553
 5076      0000
 5077              	.LBB1209:
1156:fltk-1.3.4-1/src/Fl_Input_.cxx ****   64:fltk-1.3.4-1/src/Fl_Input_.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5078              		.loc 2 1156 0
 5079 0021 85D2     		testl	%edx, %edx
 5080 0023 755B     		jne	.L533
 5081              	.L543:
1157:fltk-1.3.4-1/src/Fl_Input_.cxx ****   65:fltk-1.3.4-1/src/Fl_Input_.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback
 5082              		.loc 2 1157 0
 5083 0025 8BAB8800 		movl	136(%rbx), %ebp
 5083      0000
 5084 002b 8D4609   		leal	9(%rsi), %eax
 5085 002e 39EE     		cmpl	%ebp, %esi
 5086 0030 0F4FF0   		cmovg	%eax, %esi
 5087              	.LVL620:
1158:fltk-1.3.4-1/src/Fl_Input_.cxx ****   66:fltk-1.3.4-1/src/Fl_Input_.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Cal
 5088              		.loc 2 1158 0
 5089 0033 8D7E01   		leal	1(%rsi), %edi
 5090 0036 89BB8C00 		movl	%edi, 140(%rbx)
 5090      0000
1159:fltk-1.3.4-1/src/Fl_Input_.cxx ****   67:fltk-1.3.4-1/src/Fl_Input_.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback
 5091              		.loc 2 1159 0
 5092 003c 4863FF   		movslq	%edi, %rdi
 5093 003f E8000000 		call	malloc
 5093      00
 5094              	.LVL621:
 5095 0044 48898380 		movq	%rax, 128(%rbx)
 5095      000000
 5096 004b 4889C7   		movq	%rax, %rdi
 5097              	.LVL622:
 5098              	.L535:
 5099              	.LBE1209:
 5100              	.LBB1215:
 5101              	.LBB1216:
 5102              		.file 8 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 5103              		.loc 8 59 0
 5104 004e 4863D5   		movslq	%ebp, %rdx
 5105              	.LVL623:
 5106 0051 4C89E6   		movq	%r12, %rsi
 5107 0054 E8000000 		call	memmove
 5107      00
 5108              	.LVL624:
 5109              	.LBE1216:
 5110              	.LBE1215:
1182:fltk-1.3.4-1/src/Fl_Input_.cxx ****   90:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 5111              		.loc 2 1182 0
 5112 0059 48638388 		movslq	136(%rbx), %rax
 5112      000000
 5113 0060 488B9380 		movq	128(%rbx), %rdx
 5113      000000
 5114 0067 C6040200 		movb	$0, (%rdx,%rax)
1183:fltk-1.3.4-1/src/Fl_Input_.cxx ****   91:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label 
 5115              		.loc 2 1183 0
 5116 006b 488B8380 		movq	128(%rbx), %rax
 5116      000000
 5117 0072 48894378 		movq	%rax, 120(%rbx)
 5118              	.L529:
1184:fltk-1.3.4-1/src/Fl_Input_.cxx ****   92:fltk-1.3.4-1/src/Fl_Input_.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 5119              		.loc 2 1184 0
 5120 0076 5B       		popq	%rbx
 5121              		.cfi_remember_state
 5122              		.cfi_def_cfa_offset 24
 5123              	.LVL625:
 5124 0077 5D       		popq	%rbp
 5125              		.cfi_def_cfa_offset 16
 5126 0078 415C     		popq	%r12
 5127              		.cfi_def_cfa_offset 8
 5128 007a C3       		ret
 5129              	.LVL626:
 5130 007b 0F1F4400 		.p2align 4,,10
 5130      00
 5131              		.p2align 3
 5132              	.L533:
 5133              		.cfi_restore_state
 5134              	.LBB1217:
 5135              	.LBB1210:
1160:fltk-1.3.4-1/src/Fl_Input_.cxx ****   68:fltk-1.3.4-1/src/Fl_Input_.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback*
 5136              		.loc 2 1160 0
 5137 0080 39D6     		cmpl	%edx, %esi
 5138 0082 7D0C     		jge	.L536
 5139 0084 8BAB8800 		movl	136(%rbx), %ebp
 5139      0000
 5140 008a EBC2     		jmp	.L535
 5141 008c 0F1F4000 		.p2align 4,,10
 5142              		.p2align 3
 5143              	.L536:
 5144              	.LBB1211:
1162:fltk-1.3.4-1/src/Fl_Input_.cxx ****   70:fltk-1.3.4-1/src/Fl_Input_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Cal
 5145              		.loc 2 1162 0
 5146 0090 31ED     		xorl	%ebp, %ebp
 5147 0092 4939FC   		cmpq	%rdi, %r12
 5148 0095 736D     		jnb	.L544
 5149              	.L537:
 5150              	.LVL627:
1164:fltk-1.3.4-1/src/Fl_Input_.cxx ****   72:fltk-1.3.4-1/src/Fl_Input_.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Cal
 5151              		.loc 2 1164 0 discriminator 6
 5152 0097 3BB38800 		cmpl	136(%rbx), %esi
 5152      0000
 5153 009d 7F31     		jg	.L539
1167:fltk-1.3.4-1/src/Fl_Input_.cxx ****   75:fltk-1.3.4-1/src/Fl_Input_.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5154              		.loc 2 1167 0
 5155 009f 8D5601   		leal	1(%rsi), %edx
 5156              	.L551:
 5157 00a2 89938C00 		movl	%edx, 140(%rbx)
 5157      0000
1178:fltk-1.3.4-1/src/Fl_Input_.cxx ****   86:fltk-1.3.4-1/src/Fl_Input_.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 5158              		.loc 2 1178 0
 5159 00a8 4863F2   		movslq	%edx, %rsi
 5160              	.LVL628:
 5161 00ab E8000000 		call	realloc
 5161      00
 5162              	.LVL629:
1179:fltk-1.3.4-1/src/Fl_Input_.cxx ****   87:fltk-1.3.4-1/src/Fl_Input_.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image
 5163              		.loc 2 1179 0
 5164 00b0 4084ED   		testb	%bpl, %bpl
 5165 00b3 752B     		jne	.L541
 5166 00b5 4C8B6378 		movq	120(%rbx), %r12
 5167              	.L542:
1180:fltk-1.3.4-1/src/Fl_Input_.cxx ****   88:fltk-1.3.4-1/src/Fl_Input_.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 5168              		.loc 2 1180 0
 5169 00b9 48898380 		movq	%rax, 128(%rbx)
 5169      000000
 5170 00c0 8BAB8800 		movl	136(%rbx), %ebp
 5170      0000
 5171              	.LVL630:
 5172              	.LBE1211:
 5173 00c6 4889C7   		movq	%rax, %rdi
 5174 00c9 EB83     		jmp	.L535
 5175              	.LVL631:
 5176 00cb 0F1F4400 		.p2align 4,,10
 5176      00
 5177              		.p2align 3
 5178              	.L539:
 5179              	.LBB1212:
1165:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73:fltk-1.3.4-1/src/Fl_Input_.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5180              		.loc 2 1165 0
 5181 00d0 01D2     		addl	%edx, %edx
 5182 00d2 39D6     		cmpl	%edx, %esi
 5183 00d4 7CCC     		jl	.L551
 5184 00d6 01D2     		addl	%edx, %edx
 5185 00d8 39D6     		cmpl	%edx, %esi
 5186 00da 7DF4     		jge	.L539
 5187 00dc EBC4     		jmp	.L551
 5188              	.LVL632:
 5189 00de 6690     		.p2align 4,,10
 5190              		.p2align 3
 5191              	.L541:
1179:fltk-1.3.4-1/src/Fl_Input_.cxx ****   87:fltk-1.3.4-1/src/Fl_Input_.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image
 5192              		.loc 2 1179 0 discriminator 1
 5193 00e0 4989C4   		movq	%rax, %r12
 5194 00e3 4C2BA380 		subq	128(%rbx), %r12
 5194      000000
 5195 00ea 4C036378 		addq	120(%rbx), %r12
 5196 00ee 4C896378 		movq	%r12, 120(%rbx)
 5197 00f2 EBC5     		jmp	.L542
 5198              	.LVL633:
 5199              		.p2align 4,,10
 5200 00f4 0F1F4000 		.p2align 3
 5201              	.L553:
 5202              	.LBE1212:
 5203              	.LBE1210:
 5204              	.LBE1217:
1152:fltk-1.3.4-1/src/Fl_Input_.cxx ****   60:fltk-1.3.4-1/src/Fl_Input_.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 5205              		.loc 2 1152 0 discriminator 1
 5206 00f8 39F2     		cmpl	%esi, %edx
 5207 00fa 7F1C     		jg	.L554
 5208              	.LBB1218:
1156:fltk-1.3.4-1/src/Fl_Input_.cxx ****   64:fltk-1.3.4-1/src/Fl_Input_.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5209              		.loc 2 1156 0
 5210 00fc 85D2     		testl	%edx, %edx
 5211 00fe 0F8421FF 		je	.L543
 5211      FFFF
 5212              	.L544:
 5213              	.LBB1214:
 5214              	.LBB1213:
1162:fltk-1.3.4-1/src/Fl_Input_.cxx ****   70:fltk-1.3.4-1/src/Fl_Input_.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Cal
 5215              		.loc 2 1162 0 discriminator 1
 5216 0104 4863C2   		movslq	%edx, %rax
 5217 0107 4801F8   		addq	%rdi, %rax
 5218 010a 4939C4   		cmpq	%rax, %r12
 5219 010d 400F92C5 		setb	%bpl
 5220 0111 EB84     		jmp	.L537
 5221              		.p2align 4,,10
 5222 0113 0F1F4400 		.p2align 3
 5222      00
 5223              	.L554:
 5224              	.LBE1213:
 5225              	.LBE1214:
 5226              	.LBE1218:
1153:fltk-1.3.4-1/src/Fl_Input_.cxx ****   61:fltk-1.3.4-1/src/Fl_Input_.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 5227              		.loc 2 1153 0
 5228 0118 48638388 		movslq	136(%rbx), %rax
 5228      000000
 5229 011f 41C60404 		movb	$0, (%r12,%rax)
 5229      00
1154:fltk-1.3.4-1/src/Fl_Input_.cxx ****   62:fltk-1.3.4-1/src/Fl_Input_.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 5230              		.loc 2 1154 0
 5231 0124 E94DFFFF 		jmp	.L529
 5231      FF
 5232              		.cfi_endproc
 5233              	.LFE546:
 5235              		.section	.text.unlikely._ZN9Fl_Input_13put_in_bufferEi
 5236              	.LCOLDE35:
 5237              		.section	.text._ZN9Fl_Input_13put_in_bufferEi
 5238              	.LHOTE35:
 5239              		.section	.text.unlikely._ZN9Fl_Input_7replaceEiiPKci,"ax",@progbits
 5240              		.align 2
 5241              	.LCOLDB36:
 5242              		.section	.text._ZN9Fl_Input_7replaceEiiPKci,"ax",@progbits
 5243              	.LHOTB36:
 5244              		.align 2
 5245              		.p2align 4,,15
 5246              		.globl	_ZN9Fl_Input_7replaceEiiPKci
 5248              	_ZN9Fl_Input_7replaceEiiPKci:
 5249              	.LFB538:
 803:fltk-1.3.4-1/src/Fl_Input_.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5250              		.loc 2 803 0
 5251              		.cfi_startproc
 5252              	.LVL634:
 5253 0000 4157     		pushq	%r15
 5254              		.cfi_def_cfa_offset 16
 5255              		.cfi_offset 15, -16
 5256 0002 4156     		pushq	%r14
 5257              		.cfi_def_cfa_offset 24
 5258              		.cfi_offset 14, -24
 5259 0004 4989FE   		movq	%rdi, %r14
 5260 0007 4155     		pushq	%r13
 5261              		.cfi_def_cfa_offset 32
 5262              		.cfi_offset 13, -32
 5263 0009 4154     		pushq	%r12
 5264              		.cfi_def_cfa_offset 40
 5265              		.cfi_offset 12, -40
 5266 000b 55       		pushq	%rbp
 5267              		.cfi_def_cfa_offset 48
 5268              		.cfi_offset 6, -48
 5269 000c 53       		pushq	%rbx
 5270              		.cfi_def_cfa_offset 56
 5271              		.cfi_offset 3, -56
 5272 000d 31DB     		xorl	%ebx, %ebx
 5273 000f 4883EC38 		subq	$56, %rsp
 5274              		.cfi_def_cfa_offset 112
 805:fltk-1.3.4-1/src/Fl_Input_.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 5275              		.loc 2 805 0
 5276 0013 C7050000 		movl	$0, _ZN9Fl_Input_11was_up_downE(%rip)
 5276      00000000 
 5276      0000
 803:fltk-1.3.4-1/src/Fl_Input_.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5277              		.loc 2 803 0
 5278 001d 64488B04 		movq	%fs:40, %rax
 5278      25280000 
 5278      00
 5279 0026 48894424 		movq	%rax, 40(%rsp)
 5279      28
 5280 002b 31C0     		xorl	%eax, %eax
 809:fltk-1.3.4-1/src/Fl_Input_.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 5281              		.loc 2 809 0
 5282 002d 8B878800 		movl	136(%rdi), %eax
 5282      0000
 5283 0033 85F6     		testl	%esi, %esi
 803:fltk-1.3.4-1/src/Fl_Input_.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5284              		.loc 2 803 0
 5285 0035 48894C24 		movq	%rcx, 8(%rsp)
 5285      08
 5286 003a 0F48F3   		cmovs	%ebx, %esi
 5287              	.LVL635:
 5288 003d 85D2     		testl	%edx, %edx
 5289 003f 44894424 		movl	%r8d, 16(%rsp)
 5289      10
 5290 0044 0F48D3   		cmovs	%ebx, %edx
 5291              	.LVL636:
 5292 0047 39F0     		cmpl	%esi, %eax
 5293 0049 0F4EF0   		cmovle	%eax, %esi
 5294              	.LVL637:
 5295 004c 39C2     		cmpl	%eax, %edx
 5296 004e 0F4FD0   		cmovg	%eax, %edx
 5297              	.LVL638:
 5298 0051 89F5     		movl	%esi, %ebp
 5299              	.LVL639:
 5300              	.LBB1219:
 811:fltk-1.3.4-1/src/Fl_Input_.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 5301              		.loc 2 811 0
 5302 0053 39F2     		cmpl	%esi, %edx
 5303 0055 89D3     		movl	%edx, %ebx
 5304              	.LVL640:
 5305 0057 7D04     		jge	.L556
 5306 0059 89DD     		movl	%ebx, %ebp
 5307 005b 89F3     		movl	%esi, %ebx
 5308              	.L556:
 5309              	.LVL641:
 5310              	.LBE1219:
 812:fltk-1.3.4-1/src/Fl_Input_.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5311              		.loc 2 812 0
 5312 005d 85ED     		testl	%ebp, %ebp
 5313 005f 7E25     		jle	.L557
 5314 0061 39DD     		cmpl	%ebx, %ebp
 5315 0063 7421     		je	.L557
 5316 0065 29E8     		subl	%ebp, %eax
 5317 0067 4C63E5   		movslq	%ebp, %r12
 5318 006a 85C0     		testl	%eax, %eax
 5319 006c 7E18     		jle	.L557
 5320              	.LVL642:
 5321 006e 6690     		.p2align 4,,10
 5322              		.p2align 3
 5323              	.L635:
 813:fltk-1.3.4-1/src/Fl_Input_.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 5324              		.loc 2 813 0 discriminator 3
 5325 0070 498B4678 		movq	120(%r14), %rax
 5326 0074 420FBE3C 		movsbl	(%rax,%r12), %edi
 5326      20
 5327 0079 E8000000 		call	fl_utf8len
 5327      00
 5328              	.LVL643:
 812:fltk-1.3.4-1/src/Fl_Input_.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5329              		.loc 2 812 0 discriminator 3
 5330 007e 85C0     		testl	%eax, %eax
 5331 0080 0F8E9A02 		jle	.L664
 5331      0000
 5332              	.L557:
 814:fltk-1.3.4-1/src/Fl_Input_.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5333              		.loc 2 814 0
 5334 0086 498B4678 		movq	120(%r14), %rax
 5335 008a 4C63E3   		movslq	%ebx, %r12
 5336 008d 420FBE3C 		movsbl	(%rax,%r12), %edi
 5336      20
 5337 0092 E8000000 		call	fl_utf8len
 5337      00
 5338              	.LVL644:
 815:fltk-1.3.4-1/src/Fl_Input_.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 5339              		.loc 2 815 0
 5340 0097 41399E88 		cmpl	%ebx, 136(%r14)
 5340      000000
 5341 009e 7E30     		jle	.L561
 5342 00a0 85DB     		testl	%ebx, %ebx
 5343 00a2 7E2C     		jle	.L561
 5344 00a4 4983C401 		addq	$1, %r12
 5345 00a8 85C0     		testl	%eax, %eax
 5346 00aa 7924     		jns	.L561
 5347              	.LVL645:
 5348              	.L563:
 817:fltk-1.3.4-1/src/Fl_Input_.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 5349              		.loc 2 817 0
 5350 00ac 498B4678 		movq	120(%r14), %rax
 816:fltk-1.3.4-1/src/Fl_Input_.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 5351              		.loc 2 816 0
 5352 00b0 83C301   		addl	$1, %ebx
 5353              	.LVL646:
 817:fltk-1.3.4-1/src/Fl_Input_.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 5354              		.loc 2 817 0
 5355 00b3 420FBE3C 		movsbl	(%rax,%r12), %edi
 5355      20
 5356 00b8 E8000000 		call	fl_utf8len
 5356      00
 5357              	.LVL647:
 815:fltk-1.3.4-1/src/Fl_Input_.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 5358              		.loc 2 815 0
 5359 00bd 41399E88 		cmpl	%ebx, 136(%r14)
 5359      000000
 5360 00c4 7E0A     		jle	.L561
 5361 00c6 4983C401 		addq	$1, %r12
 815:fltk-1.3.4-1/src/Fl_Input_.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 5362              		.loc 2 815 0 is_stmt 0 discriminator 1
 5363 00ca 85C0     		testl	%eax, %eax
 5364 00cc 78DE     		js	.L563
 5365              	.LVL648:
 5366 00ce 6690     		.p2align 4,,10
 5367              		.p2align 3
 5368              	.L561:
 819:fltk-1.3.4-1/src/Fl_Input_.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 5369              		.loc 2 819 0 is_stmt 1
 5370 00d0 8B442410 		movl	16(%rsp), %eax
 5371 00d4 85C0     		testl	%eax, %eax
 5372 00d6 488B4424 		movq	8(%rsp), %rax
 5372      08
 5373 00db 0F94C2   		sete	%dl
 5374 00de 4885C0   		testq	%rax, %rax
 5375 00e1 7415     		je	.L565
 5376 00e3 84D2     		testb	%dl, %dl
 5377 00e5 7411     		je	.L565
 819:fltk-1.3.4-1/src/Fl_Input_.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 5378              		.loc 2 819 0 is_stmt 0 discriminator 1
 5379 00e7 4889C7   		movq	%rax, %rdi
 5380 00ea E8000000 		call	strlen
 5380      00
 5381              	.LVL649:
 5382 00ef 85C0     		testl	%eax, %eax
 5383 00f1 89442410 		movl	%eax, 16(%rsp)
 5384              	.LVL650:
 5385 00f5 0F94C2   		sete	%dl
 5386              	.LVL651:
 5387              	.L565:
 820:fltk-1.3.4-1/src/Fl_Input_.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5388              		.loc 2 820 0 is_stmt 1
 5389 00f8 39EB     		cmpl	%ebp, %ebx
 5390 00fa 7F2C     		jg	.L620
 5391 00fc 31C0     		xorl	%eax, %eax
 5392 00fe 84D2     		testb	%dl, %dl
 5393 0100 7426     		je	.L620
 5394              	.LVL652:
 5395              	.L566:
 918:fltk-1.3.4-1/src/Fl_Input_.cxx ****  902:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5396              		.loc 2 918 0
 5397 0102 488B5424 		movq	40(%rsp), %rdx
 5397      28
 5398 0107 64483314 		xorq	%fs:40, %rdx
 5398      25280000 
 5398      00
 5399 0110 0F85BB05 		jne	.L665
 5399      0000
 5400 0116 4883C438 		addq	$56, %rsp
 5401              		.cfi_remember_state
 5402              		.cfi_def_cfa_offset 56
 5403 011a 5B       		popq	%rbx
 5404              		.cfi_def_cfa_offset 48
 5405 011b 5D       		popq	%rbp
 5406              		.cfi_def_cfa_offset 40
 5407 011c 415C     		popq	%r12
 5408              		.cfi_def_cfa_offset 32
 5409 011e 415D     		popq	%r13
 5410              		.cfi_def_cfa_offset 24
 5411 0120 415E     		popq	%r14
 5412              		.cfi_def_cfa_offset 16
 5413              	.LVL653:
 5414 0122 415F     		popq	%r15
 5415              		.cfi_def_cfa_offset 8
 5416 0124 C3       		ret
 5417              	.LVL654:
 5418              		.p2align 4,,10
 5419 0125 0F1F00   		.p2align 3
 5420              	.L620:
 5421              		.cfi_restore_state
 827:fltk-1.3.4-1/src/Fl_Input_.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5422              		.loc 2 827 0
 5423 0128 49638688 		movslq	136(%r14), %rax
 5423      000000
 826:fltk-1.3.4-1/src/Fl_Input_.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 5424              		.loc 2 826 0
 5425 012f 4D8B6E78 		movq	120(%r14), %r13
 5426              	.LVL655:
 827:fltk-1.3.4-1/src/Fl_Input_.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5427              		.loc 2 827 0
 5428 0133 4531E4   		xorl	%r12d, %r12d
 5429              	.LBB1220:
 829:fltk-1.3.4-1/src/Fl_Input_.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5430              		.loc 2 829 0
 5431 0136 4863D3   		movslq	%ebx, %rdx
 5432 0139 4C63FD   		movslq	%ebp, %r15
 5433 013c 48891424 		movq	%rdx, (%rsp)
 5434              	.LBE1220:
 827:fltk-1.3.4-1/src/Fl_Input_.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5435              		.loc 2 827 0
 5436 0140 4C89E9   		movq	%r13, %rcx
 5437 0143 4889C6   		movq	%rax, %rsi
 5438 0146 4C01E8   		addq	%r13, %rax
 5439 0149 4C39E8   		cmpq	%r13, %rax
 5440 014c 7737     		ja	.L648
 5441 014e EB4B     		jmp	.L572
 5442              	.LVL656:
 5443              		.p2align 4,,10
 5444              		.p2align 3
 5445              	.L571:
 5446              	.LBB1221:
 832:fltk-1.3.4-1/src/Fl_Input_.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 5447              		.loc 2 832 0
 5448 0150 410FBE7D 		movsbl	0(%r13), %edi
 5448      00
 5449 0155 E8000000 		call	fl_utf8len
 5449      00
 5450              	.LVL657:
 5451 015a 85C0     		testl	%eax, %eax
 5452 015c 4863C8   		movslq	%eax, %rcx
 5453 015f B8010000 		movl	$1, %eax
 5453      00
 5454              	.LVL658:
 5455 0164 480F4FC1 		cmovg	%rcx, %rax
 5456              	.LVL659:
 5457              	.LBE1221:
 827:fltk-1.3.4-1/src/Fl_Input_.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5458              		.loc 2 827 0
 5459 0168 498B4E78 		movq	120(%r14), %rcx
 5460              	.LBB1222:
 834:fltk-1.3.4-1/src/Fl_Input_.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 5461              		.loc 2 834 0
 5462 016c 4183C401 		addl	$1, %r12d
 5463              	.LVL660:
 835:fltk-1.3.4-1/src/Fl_Input_.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5464              		.loc 2 835 0
 5465 0170 4901C5   		addq	%rax, %r13
 5466              	.LVL661:
 5467              	.LBE1222:
 827:fltk-1.3.4-1/src/Fl_Input_.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5468              		.loc 2 827 0
 5469 0173 49638688 		movslq	136(%r14), %rax
 5469      000000
 5470 017a 4889C6   		movq	%rax, %rsi
 5471 017d 4801C8   		addq	%rcx, %rax
 5472 0180 4C39E8   		cmpq	%r13, %rax
 5473 0183 7616     		jbe	.L572
 5474              	.LVL662:
 5475              	.L648:
 5476              	.LBB1223:
 828:fltk-1.3.4-1/src/Fl_Input_.cxx ****  812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 5477              		.loc 2 828 0
 5478 0185 4A8D3C39 		leaq	(%rcx,%r15), %rdi
 5479 0189 4939FD   		cmpq	%rdi, %r13
 5480 018c 75C2     		jne	.L571
 829:fltk-1.3.4-1/src/Fl_Input_.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5481              		.loc 2 829 0
 5482 018e 488B1424 		movq	(%rsp), %rdx
 5483 0192 4C8D2C11 		leaq	(%rcx,%rdx), %r13
 5484              	.LVL663:
 830:fltk-1.3.4-1/src/Fl_Input_.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 5485              		.loc 2 830 0
 5486 0196 4939C5   		cmpq	%rax, %r13
 5487 0199 72B5     		jb	.L571
 5488              	.LVL664:
 5489              	.L572:
 5490              	.LBE1223:
 839:fltk-1.3.4-1/src/Fl_Input_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 5491              		.loc 2 839 0
 5492 019b 48634424 		movslq	16(%rsp), %rax
 5492      10
 5493 01a0 488B5424 		movq	8(%rsp), %rdx
 5493      08
 5494 01a5 4801D0   		addq	%rdx, %rax
 5495 01a8 4839C2   		cmpq	%rax, %rdx
 5496 01ab 48890424 		movq	%rax, (%rsp)
 5497 01af 0F829B01 		jb	.L569
 5497      0000
 5498              	.L570:
 5499              	.LVL665:
 848:fltk-1.3.4-1/src/Fl_Input_.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 5500              		.loc 2 848 0
 5501 01b5 4C89F7   		movq	%r14, %rdi
 850:fltk-1.3.4-1/src/Fl_Input_.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 5502              		.loc 2 850 0
 5503 01b8 4531FF   		xorl	%r15d, %r15d
 848:fltk-1.3.4-1/src/Fl_Input_.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 5504              		.loc 2 848 0
 5505 01bb E8000000 		call	_ZN9Fl_Input_13put_in_bufferEi
 5505      00
 5506              	.LVL666:
 850:fltk-1.3.4-1/src/Fl_Input_.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 5507              		.loc 2 850 0
 5508 01c0 39EB     		cmpl	%ebp, %ebx
 5509 01c2 0F8EBF03 		jle	.L666
 5509      0000
 5510              	.LVL667:
 5511 01c8 0F1F8400 		.p2align 4,,10
 5511      00000000 
 5512              		.p2align 3
 5513              	.L610:
 851:fltk-1.3.4-1/src/Fl_Input_.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 5514              		.loc 2 851 0
 5515 01d0 4C3B3500 		cmpq	_ZL10undowidget(%rip), %r14
 5515      000000
 5516 01d7 0F84E603 		je	.L667
 5516      0000
 5517              	.L579:
 863:fltk-1.3.4-1/src/Fl_Input_.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 5518              		.loc 2 863 0
 5519 01dd 89D8     		movl	%ebx, %eax
 864:fltk-1.3.4-1/src/Fl_Input_.cxx ****  848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 5520              		.loc 2 864 0
 5521 01df 4C63E5   		movslq	%ebp, %r12
 863:fltk-1.3.4-1/src/Fl_Input_.cxx ****  847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *d
 5522              		.loc 2 863 0
 5523 01e2 29E8     		subl	%ebp, %eax
 5524 01e4 89C7     		movl	%eax, %edi
 5525 01e6 4189C5   		movl	%eax, %r13d
 5526 01e9 890424   		movl	%eax, (%rsp)
 5527 01ec E8000000 		call	_ZL14undobuffersizei
 5527      00
 5528              	.LVL668:
 5529              	.LBB1224:
 5530              	.LBB1225:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5531              		.loc 8 53 0
 5532 01f1 4C89E6   		movq	%r12, %rsi
 5533 01f4 49037678 		addq	120(%r14), %rsi
 5534              	.LVL669:
 5535 01f8 488B3D00 		movq	_ZL10undobuffer(%rip), %rdi
 5535      000000
 5536 01ff 4963D5   		movslq	%r13d, %rdx
 5537              	.LVL670:
 5538 0202 E8000000 		call	memcpy
 5538      00
 5539              	.LVL671:
 5540              	.LBE1225:
 5541              	.LBE1224:
 865:fltk-1.3.4-1/src/Fl_Input_.cxx ****  849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5542              		.loc 2 865 0
 5543 0207 44892D00 		movl	%r13d, _ZL7undocut(%rip)
 5543      000000
 866:fltk-1.3.4-1/src/Fl_Input_.cxx ****  850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 5544              		.loc 2 866 0
 5545 020e C7050000 		movl	$0, _ZL10undoinsert(%rip)
 5545      00000000 
 5545      0000
 5546              	.L581:
 5547              	.LBB1226:
 5548              	.LBB1227:
 5549              		.loc 8 59 0
 5550 0218 418B9688 		movl	136(%r14), %edx
 5550      000000
 5551              	.LBE1227:
 5552              	.LBE1226:
 868:fltk-1.3.4-1/src/Fl_Input_.cxx ****  852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5553              		.loc 2 868 0
 5554 021f 498BBE80 		movq	128(%r14), %rdi
 5554      000000
 5555              	.LVL672:
 5556              	.LBB1229:
 5557              	.LBB1228:
 5558              		.loc 8 59 0
 5559 0226 4863F3   		movslq	%ebx, %rsi
 5560 0229 29DA     		subl	%ebx, %edx
 5561 022b 4801FE   		addq	%rdi, %rsi
 5562              	.LVL673:
 5563 022e 4C01E7   		addq	%r12, %rdi
 5564              	.LVL674:
 5565 0231 83C201   		addl	$1, %edx
 5566 0234 4863D2   		movslq	%edx, %rdx
 5567 0237 E8000000 		call	memmove
 5567      00
 5568              	.LVL675:
 5569 023c 410FB656 		movzbl	108(%r14), %edx
 5569      6C
 5570              	.LBE1228:
 5571              	.LBE1229:
 869:fltk-1.3.4-1/src/Fl_Input_.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 5572              		.loc 2 869 0
 5573 0241 418B8688 		movl	136(%r14), %eax
 5573      000000
 5574 0248 2B0424   		subl	(%rsp), %eax
 870:fltk-1.3.4-1/src/Fl_Input_.cxx ****  854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5575              		.loc 2 870 0
 5576 024b 4C893500 		movq	%r14, _ZL10undowidget(%rip)
 5576      000000
 871:fltk-1.3.4-1/src/Fl_Input_.cxx ****  855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 5577              		.loc 2 871 0
 5578 0252 892D0000 		movl	%ebp, _ZL6undoat(%rip)
 5578      0000
 5579              	.LVL676:
 872:fltk-1.3.4-1/src/Fl_Input_.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5580              		.loc 2 872 0
 5581 0258 89D1     		movl	%edx, %ecx
 5582 025a 83E107   		andl	$7, %ecx
 869:fltk-1.3.4-1/src/Fl_Input_.cxx ****  853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 5583              		.loc 2 869 0
 5584 025d 41898688 		movl	%eax, 136(%r14)
 5584      000000
 872:fltk-1.3.4-1/src/Fl_Input_.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5585              		.loc 2 872 0
 5586 0264 80F905   		cmpb	$5, %cl
 5587 0267 0F840B03 		je	.L668
 5587      0000
 872:fltk-1.3.4-1/src/Fl_Input_.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5588              		.loc 2 872 0 is_stmt 0 discriminator 2
 5589 026d 8B0D0000 		movl	_ZL7undocut(%rip), %ecx
 5589      0000
 5590 0273 890D0000 		movl	%ecx, _ZL7yankcut(%rip)
 5590      0000
 5591              	.L584:
 875:fltk-1.3.4-1/src/Fl_Input_.cxx ****  859:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 5592              		.loc 2 875 0 is_stmt 1
 5593 0279 4585FF   		testl	%r15d, %r15d
 5594 027c 0F858D03 		jne	.L607
 5594      0000
 888:fltk-1.3.4-1/src/Fl_Input_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 5595              		.loc 2 888 0
 5596 0282 418B8690 		movl	144(%r14), %eax
 5596      000000
 5597              	.LBB1230:
 896:fltk-1.3.4-1/src/Fl_Input_.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 5598              		.loc 2 896 0
 5599 0289 83E210   		andl	$16, %edx
 5600              	.LBE1230:
 887:fltk-1.3.4-1/src/Fl_Input_.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 5601              		.loc 2 887 0
 5602 028c 418B9E94 		movl	148(%r14), %ebx
 5602      000000
 5603              	.LVL677:
 886:fltk-1.3.4-1/src/Fl_Input_.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5604              		.loc 2 886 0
 5605 0293 4C893500 		movq	%r14, _ZL10undowidget(%rip)
 5605      000000
 889:fltk-1.3.4-1/src/Fl_Input_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 5606              		.loc 2 889 0
 5607 029a 892D0000 		movl	%ebp, _ZL6undoat(%rip)
 5607      0000
 5608 02a0 4189AE90 		movl	%ebp, 144(%r14)
 5608      000000
 5609 02a7 4189AE94 		movl	%ebp, 148(%r14)
 5609      000000
 888:fltk-1.3.4-1/src/Fl_Input_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 5610              		.loc 2 888 0
 5611 02ae 890424   		movl	%eax, (%rsp)
 5612              	.LVL678:
 5613              	.LBB1241:
 896:fltk-1.3.4-1/src/Fl_Input_.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 5614              		.loc 2 896 0
 5615 02b1 0F85D001 		jne	.L609
 5615      0000
 5616              	.LVL679:
 5617 02b7 660F1F84 		.p2align 4,,10
 5617      00000000 
 5617      00
 5618              		.p2align 3
 5619              	.L588:
 5620              	.LBE1241:
 911:fltk-1.3.4-1/src/Fl_Input_.cxx ****  895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 5621              		.loc 2 911 0
 5622 02c0 8B0424   		movl	(%rsp), %eax
 5623 02c3 39DD     		cmpl	%ebx, %ebp
 5624 02c5 4C89F7   		movq	%r14, %rdi
 5625 02c8 0F4FEB   		cmovg	%ebx, %ebp
 5626              	.LVL680:
 5627 02cb 39C5     		cmpl	%eax, %ebp
 5628 02cd 89C6     		movl	%eax, %esi
 5629 02cf 0F4EF5   		cmovle	%ebp, %esi
 5630 02d2 E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 5630      00
 5631              	.LVL681:
 5632              	.LBB1242:
 5633              	.LBB1243:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5634              		.loc 1 786 0
 5635 02d7 41814E60 		orl	$128, 96(%r14)
 5635      80000000 
 5636              	.LBE1243:
 5637              	.LBE1242:
 916:fltk-1.3.4-1/src/Fl_Input_.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 5638              		.loc 2 916 0
 5639 02df 41F6466F 		testb	$1, 111(%r14)
 5639      01
 913:fltk-1.3.4-1/src/Fl_Input_.cxx ****  897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5640              		.loc 2 913 0
 5641 02e4 8B050000 		movl	_ZL6undoat(%rip), %eax
 5641      0000
 5642 02ea 41898690 		movl	%eax, 144(%r14)
 5642      000000
 5643 02f1 41898694 		movl	%eax, 148(%r14)
 5643      000000
 5644              	.LVL682:
 917:fltk-1.3.4-1/src/Fl_Input_.cxx ****  901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 5645              		.loc 2 917 0
 5646 02f8 B8010000 		movl	$1, %eax
 5646      00
 916:fltk-1.3.4-1/src/Fl_Input_.cxx ****  900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 5647              		.loc 2 916 0
 5648 02fd 0F84FFFD 		je	.L566
 5648      FFFF
 5649              	.LBB1244:
 5650              	.LBB1245:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5651              		.loc 1 861 0 discriminator 1
 5652 0303 498B5618 		movq	24(%r14), %rdx
 5653 0307 4C89F6   		movq	%r14, %rsi
 5654 030a 4C89F7   		movq	%r14, %rdi
 5655 030d 890424   		movl	%eax, (%rsp)
 5656              	.LVL683:
 5657 0310 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 5657      00
 5658              	.LVL684:
 5659 0315 8B0424   		movl	(%rsp), %eax
 5660 0318 E9E5FDFF 		jmp	.L566
 5660      FF
 5661              	.LVL685:
 5662 031d 0F1F00   		.p2align 4,,10
 5663              		.p2align 3
 5664              	.L664:
 5665              	.LBE1245:
 5666              	.LBE1244:
 813:fltk-1.3.4-1/src/Fl_Input_.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 5667              		.loc 2 813 0
 5668 0320 83ED01   		subl	$1, %ebp
 5669              	.LVL686:
 812:fltk-1.3.4-1/src/Fl_Input_.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5670              		.loc 2 812 0
 5671 0323 39EB     		cmpl	%ebp, %ebx
 5672 0325 0F845BFD 		je	.L557
 5672      FFFF
 5673 032b 85ED     		testl	%ebp, %ebp
 5674 032d 0F8E53FD 		jle	.L557
 5674      FFFF
 812:fltk-1.3.4-1/src/Fl_Input_.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5675              		.loc 2 812 0 is_stmt 0 discriminator 1
 5676 0333 418B8688 		movl	136(%r14), %eax
 5676      000000
 5677 033a 4983EC01 		subq	$1, %r12
 5678 033e 29E8     		subl	%ebp, %eax
 5679 0340 85C0     		testl	%eax, %eax
 5680 0342 0F8F28FD 		jg	.L635
 5680      FFFF
 5681 0348 E939FDFF 		jmp	.L557
 5681      FF
 5682              	.LVL687:
 5683 034d 0F1F00   		.p2align 4,,10
 5684              		.p2align 3
 5685              	.L569:
 839:fltk-1.3.4-1/src/Fl_Input_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 5686              		.loc 2 839 0 is_stmt 1
 5687 0350 453BA6A8 		cmpl	168(%r14), %r12d
 5687      000000
 5688 0357 0F8D58FE 		jge	.L570
 5688      FFFF
 5689 035d 4C8B6C24 		movq	8(%rsp), %r13
 5689      08
 5690 0362 4531FF   		xorl	%r15d, %r15d
 5691              	.LVL688:
 5692              		.p2align 4,,10
 5693 0365 0F1F00   		.p2align 3
 5694              	.L576:
 5695              	.LBB1246:
 840:fltk-1.3.4-1/src/Fl_Input_.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 5696              		.loc 2 840 0
 5697 0368 410FBE7D 		movsbl	0(%r13), %edi
 5697      00
 5698 036d E8000000 		call	fl_utf8len
 5698      00
 5699              	.LVL689:
 841:fltk-1.3.4-1/src/Fl_Input_.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5700              		.loc 2 841 0
 5701 0372 85C0     		testl	%eax, %eax
 5702 0374 4863C8   		movslq	%eax, %rcx
 5703 0377 0F8E9B01 		jle	.L669
 5703      0000
 5704              	.LVL690:
 5705              	.L602:
 843:fltk-1.3.4-1/src/Fl_Input_.cxx ****  827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5706              		.loc 2 843 0
 5707 037d 4901CD   		addq	%rcx, %r13
 5708              	.LVL691:
 844:fltk-1.3.4-1/src/Fl_Input_.cxx ****  828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 5709              		.loc 2 844 0
 5710 0380 4101C7   		addl	%eax, %r15d
 5711              	.LVL692:
 5712              	.LBE1246:
 839:fltk-1.3.4-1/src/Fl_Input_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 5713              		.loc 2 839 0
 5714 0383 4C3B2C24 		cmpq	(%rsp), %r13
 5715 0387 730D     		jnb	.L577
 5716              	.LBB1247:
 842:fltk-1.3.4-1/src/Fl_Input_.cxx ****  826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 5717              		.loc 2 842 0 discriminator 1
 5718 0389 4183C401 		addl	$1, %r12d
 5719              	.LVL693:
 5720              	.LBE1247:
 839:fltk-1.3.4-1/src/Fl_Input_.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 5721              		.loc 2 839 0 discriminator 1
 5722 038d 453BA6A8 		cmpl	168(%r14), %r12d
 5722      000000
 5723 0394 7CD2     		jl	.L576
 5724              	.LVL694:
 5725              	.L577:
 848:fltk-1.3.4-1/src/Fl_Input_.cxx ****  832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); els
 5726              		.loc 2 848 0
 5727 0396 418BB688 		movl	136(%r14), %esi
 5727      000000
 5728 039d 4C89F7   		movq	%r14, %rdi
 5729 03a0 4401FE   		addl	%r15d, %esi
 5730 03a3 E8000000 		call	_ZN9Fl_Input_13put_in_bufferEi
 5730      00
 5731              	.LVL695:
 850:fltk-1.3.4-1/src/Fl_Input_.cxx ****  834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 5732              		.loc 2 850 0
 5733 03a8 39EB     		cmpl	%ebp, %ebx
 5734 03aa 0F8F20FE 		jg	.L610
 5734      FFFF
 876:fltk-1.3.4-1/src/Fl_Input_.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5735              		.loc 2 876 0
 5736 03b0 4C3B3500 		cmpq	_ZL10undowidget(%rip), %r14
 5736      000000
 5737 03b7 4C63E5   		movslq	%ebp, %r12
 5738 03ba 418B8688 		movl	136(%r14), %eax
 5738      000000
 5739 03c1 0F843C02 		je	.L670
 5739      0000
 5740              	.L586:
 879:fltk-1.3.4-1/src/Fl_Input_.cxx ****  863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 5741              		.loc 2 879 0
 5742 03c7 C7050000 		movl	$0, _ZL7undocut(%rip)
 5742      00000000 
 5742      0000
 880:fltk-1.3.4-1/src/Fl_Input_.cxx ****  864:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with ar
 5743              		.loc 2 880 0
 5744 03d1 44893D00 		movl	%r15d, _ZL10undoinsert(%rip)
 5744      000000
 5745              	.LVL696:
 5746              	.L587:
 882:fltk-1.3.4-1/src/Fl_Input_.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 5747              		.loc 2 882 0
 5748 03d8 498BBE80 		movq	128(%r14), %rdi
 5748      000000
 5749              	.LBB1248:
 5750              	.LBB1249:
 5751              		.loc 8 59 0
 5752 03df 29E8     		subl	%ebp, %eax
 5753              	.LBE1249:
 5754              	.LBE1248:
 882:fltk-1.3.4-1/src/Fl_Input_.cxx ****  866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the use
 5755              		.loc 2 882 0
 5756 03e1 4963DF   		movslq	%r15d, %rbx
 5757              	.LVL697:
 5758              	.LBB1251:
 5759              	.LBB1250:
 5760              		.loc 8 59 0
 5761 03e4 83C001   		addl	$1, %eax
 5762 03e7 4863D0   		movslq	%eax, %rdx
 5763 03ea 4A8D0423 		leaq	(%rbx,%r12), %rax
 5764 03ee 4A8D3427 		leaq	(%rdi,%r12), %rsi
 5765              	.LVL698:
 5766 03f2 4801C7   		addq	%rax, %rdi
 5767 03f5 E8000000 		call	memmove
 5767      00
 5768              	.LVL699:
 5769              	.LBE1250:
 5770              	.LBE1251:
 5771              	.LBB1252:
 5772              	.LBB1253:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5773              		.loc 8 53 0
 5774 03fa 4C8B6C24 		movq	8(%rsp), %r13
 5774      08
 5775 03ff 4C89E7   		movq	%r12, %rdi
 5776 0402 4903BE80 		addq	128(%r14), %rdi
 5776      000000
 5777              	.LVL700:
 5778 0409 4889DA   		movq	%rbx, %rdx
 5779 040c 4C89EE   		movq	%r13, %rsi
 5780 040f E8000000 		call	memcpy
 5780      00
 5781              	.LVL701:
 5782              	.LBE1253:
 5783              	.LBE1252:
 888:fltk-1.3.4-1/src/Fl_Input_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 5784              		.loc 2 888 0
 5785 0414 418B8690 		movl	144(%r14), %eax
 5785      000000
 884:fltk-1.3.4-1/src/Fl_Input_.cxx ****  868:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5786              		.loc 2 884 0
 5787 041b 4501BE88 		addl	%r15d, 136(%r14)
 5787      000000
 5788              	.LBB1254:
 896:fltk-1.3.4-1/src/Fl_Input_.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 5789              		.loc 2 896 0
 5790 0422 41F6466C 		testb	$16, 108(%r14)
 5790      10
 5791              	.LBE1254:
 887:fltk-1.3.4-1/src/Fl_Input_.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 5792              		.loc 2 887 0
 5793 0427 418B9E94 		movl	148(%r14), %ebx
 5793      000000
 5794              	.LVL702:
 886:fltk-1.3.4-1/src/Fl_Input_.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5795              		.loc 2 886 0
 5796 042e 4C893500 		movq	%r14, _ZL10undowidget(%rip)
 5796      000000
 888:fltk-1.3.4-1/src/Fl_Input_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 5797              		.loc 2 888 0
 5798 0435 890424   		movl	%eax, (%rsp)
 5799              	.LVL703:
 889:fltk-1.3.4-1/src/Fl_Input_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 5800              		.loc 2 889 0
 5801 0438 418D042F 		leal	(%r15,%rbp), %eax
 5802              	.LVL704:
 5803 043c 89050000 		movl	%eax, _ZL6undoat(%rip)
 5803      0000
 5804 0442 41898690 		movl	%eax, 144(%r14)
 5804      000000
 5805 0449 41898694 		movl	%eax, 148(%r14)
 5805      000000
 5806              	.LVL705:
 5807              	.LBB1255:
 896:fltk-1.3.4-1/src/Fl_Input_.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 5808              		.loc 2 896 0
 5809 0450 0F846AFE 		je	.L588
 5809      FFFF
 5810              	.LVL706:
 5811              	.LBB1231:
 900:fltk-1.3.4-1/src/Fl_Input_.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5812              		.loc 2 900 0
 5813 0456 41807D00 		cmpb	$32, 0(%r13)
 5813      20
 5814 045b 0F84CF00 		je	.L589
 5814      0000
 5815 0461 4C8B6C24 		movq	8(%rsp), %r13
 5815      08
 900:fltk-1.3.4-1/src/Fl_Input_.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5816              		.loc 2 900 0 is_stmt 0 discriminator 2
 5817 0466 31C0     		xorl	%eax, %eax
 5818 0468 4983C501 		addq	$1, %r13
 5819 046c EB11     		jmp	.L591
 5820              	.LVL707:
 5821 046e 6690     		.p2align 4,,10
 5822              		.p2align 3
 5823              	.L651:
 5824 0470 4983C501 		addq	$1, %r13
 900:fltk-1.3.4-1/src/Fl_Input_.cxx ****  884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5825              		.loc 2 900 0
 5826 0474 41807DFF 		cmpb	$32, -1(%r13)
 5826      20
 5827 0479 0F84B100 		je	.L589
 5827      0000
 5828              	.LVL708:
 5829              	.L591:
 899:fltk-1.3.4-1/src/Fl_Input_.cxx ****  883:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _clear_fullscreen() {flags_ &= ~FULLSCREEN;}
 5830              		.loc 2 899 0 is_stmt 1 discriminator 2
 5831 047f 83C001   		addl	$1, %eax
 5832              	.LVL709:
 5833 0482 4139C7   		cmpl	%eax, %r15d
 5834 0485 75E9     		jne	.L651
 5835              	.LVL710:
 5836              	.L609:
 902:fltk-1.3.4-1/src/Fl_Input_.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 5837              		.loc 2 902 0 discriminator 10
 5838 0487 85ED     		testl	%ebp, %ebp
 5839 0489 0F8E31FE 		jle	.L588
 5839      FFFF
 5840 048f E8000000 		call	__ctype_b_loc
 5840      00
 5841              	.LVL711:
 5842 0494 4C63E5   		movslq	%ebp, %r12
 5843 0497 4989C7   		movq	%rax, %r15
 5844 049a 4C8D6C24 		leaq	36(%rsp), %r13
 5844      24
 5845 049f EB3E     		jmp	.L604
 5846              		.p2align 4,,10
 5847 04a1 0F1F8000 		.p2align 3
 5847      000000
 5848              	.L671:
 5849              	.LVL712:
 5850              	.LBB1232:
 5851              	.LBB1233:
 5852              		.loc 2 1337 0
 5853 04a8 4963B688 		movslq	136(%r14), %rsi
 5853      000000
 5854 04af 498B7E78 		movq	120(%r14), %rdi
 5855 04b3 4C89EA   		movq	%r13, %rdx
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5856              		.loc 2 1336 0
 5857 04b6 C7442424 		movl	$0, 36(%rsp)
 5857      00000000 
 5858              		.loc 2 1337 0
 5859 04be 4801FE   		addq	%rdi, %rsi
 5860 04c1 4C01E7   		addq	%r12, %rdi
 5861 04c4 E8000000 		call	fl_utf8decode
 5861      00
 5862              	.LVL713:
 5863              	.LBE1233:
 5864              	.LBE1232:
 902:fltk-1.3.4-1/src/Fl_Input_.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 5865              		.loc 2 902 0
 5866 04c9 83F80A   		cmpl	$10, %eax
 5867 04cc 0F84EEFD 		je	.L588
 5867      FFFF
 5868              	.LVL714:
 5869 04d2 4983EC01 		subq	$1, %r12
 5870 04d6 83ED01   		subl	$1, %ebp
 5871              	.LVL715:
 5872 04d9 0F84E1FD 		je	.L588
 5872      FFFF
 5873              	.L604:
 5874              	.LVL716:
 5875              	.LBB1234:
 5876              	.LBB1235:
 5877              		.loc 2 1337 0
 5878 04df 4963B688 		movslq	136(%r14), %rsi
 5878      000000
 5879 04e6 498B7E78 		movq	120(%r14), %rdi
 5880 04ea 4C89EA   		movq	%r13, %rdx
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5881              		.loc 2 1336 0
 5882 04ed C7442424 		movl	$0, 36(%rsp)
 5882      00000000 
 5883              		.loc 2 1337 0
 5884 04f5 4801FE   		addq	%rdi, %rsi
 5885 04f8 4C01E7   		addq	%r12, %rdi
 5886 04fb E8000000 		call	fl_utf8decode
 5886      00
 5887              	.LVL717:
 5888              	.LBE1235:
 5889              	.LBE1234:
 5890              	.LBB1236:
 5891              	.LBB1237:
 5892              		.loc 3 190 0
 5893 0500 498B17   		movq	(%r15), %rdx
 5894 0503 0FB6C0   		movzbl	%al, %eax
 5895              	.LBE1237:
 5896              	.LBE1236:
 902:fltk-1.3.4-1/src/Fl_Input_.cxx ****  886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 5897              		.loc 2 902 0
 5898 0506 F6444201 		testb	$32, 1(%rdx,%rax,2)
 5898      20
 5899 050b 0F85AFFD 		jne	.L588
 5899      FFFF
 5900 0511 EB95     		jmp	.L671
 5901              	.LVL718:
 5902              		.p2align 4,,10
 5903 0513 0F1F4400 		.p2align 3
 5903      00
 5904              	.L669:
 5905              	.LBE1231:
 5906              	.LBE1255:
 5907              	.LBB1256:
 5908 0518 B9010000 		movl	$1, %ecx
 5908      00
 841:fltk-1.3.4-1/src/Fl_Input_.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5909              		.loc 2 841 0
 5910 051d B8010000 		movl	$1, %eax
 5910      00
 5911              	.LVL719:
 5912 0522 E956FEFF 		jmp	.L602
 5912      FF
 5913              	.LVL720:
 5914 0527 660F1F84 		.p2align 4,,10
 5914      00000000 
 5914      00
 5915              		.p2align 3
 5916              	.L589:
 5917              	.LBE1256:
 5918              	.LBB1257:
 5919              	.LBB1240:
 904:fltk-1.3.4-1/src/Fl_Input_.cxx ****  888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 5920              		.loc 2 904 0 discriminator 8
 5921 0530 85ED     		testl	%ebp, %ebp
 5922 0532 4C8D6C24 		leaq	36(%rsp), %r13
 5922      24
 5923 0537 0F8E83FD 		jle	.L588
 5923      FFFF
 5924 053d 0F1F00   		.p2align 4,,10
 5925              		.p2align 3
 5926              	.L605:
 5927              	.LVL721:
 5928              	.LBB1238:
 5929              	.LBB1239:
 5930              		.loc 2 1337 0
 5931 0540 4963B688 		movslq	136(%r14), %rsi
 5931      000000
 5932 0547 498B7E78 		movq	120(%r14), %rdi
 5933 054b 4C89EA   		movq	%r13, %rdx
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5934              		.loc 2 1336 0
 5935 054e C7442424 		movl	$0, 36(%rsp)
 5935      00000000 
 5936              		.loc 2 1337 0
 5937 0556 4801FE   		addq	%rdi, %rsi
 5938 0559 4C01E7   		addq	%r12, %rdi
 5939 055c E8000000 		call	fl_utf8decode
 5939      00
 5940              	.LVL722:
 5941              	.LBE1239:
 5942              	.LBE1238:
 904:fltk-1.3.4-1/src/Fl_Input_.cxx ****  888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 5943              		.loc 2 904 0
 5944 0561 83F80A   		cmpl	$10, %eax
 5945 0564 0F8456FD 		je	.L588
 5945      FFFF
 5946              	.LVL723:
 5947 056a 4983EC01 		subq	$1, %r12
 5948 056e 83ED01   		subl	$1, %ebp
 5949              	.LVL724:
 5950 0571 75CD     		jne	.L605
 5951 0573 E948FDFF 		jmp	.L588
 5951      FF
 5952              	.LVL725:
 5953              	.L668:
 5954              	.LBE1240:
 5955              	.LBE1257:
 872:fltk-1.3.4-1/src/Fl_Input_.cxx ****  856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5956              		.loc 2 872 0 discriminator 1
 5957 0578 C7050000 		movl	$0, _ZL7yankcut(%rip)
 5957      00000000 
 5957      0000
 5958 0582 E9F2FCFF 		jmp	.L584
 5958      FF
 5959              	.LVL726:
 5960              	.L666:
 5961              	.LBB1258:
 896:fltk-1.3.4-1/src/Fl_Input_.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 5962              		.loc 2 896 0
 5963 0587 41F6466C 		testb	$16, 108(%r14)
 5963      10
 5964              	.LBE1258:
 888:fltk-1.3.4-1/src/Fl_Input_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 5965              		.loc 2 888 0
 5966 058c 418B8690 		movl	144(%r14), %eax
 5966      000000
 887:fltk-1.3.4-1/src/Fl_Input_.cxx ****  871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arb
 5967              		.loc 2 887 0
 5968 0593 418B9E94 		movl	148(%r14), %ebx
 5968      000000
 5969              	.LVL727:
 886:fltk-1.3.4-1/src/Fl_Input_.cxx ****  870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5970              		.loc 2 886 0
 5971 059a 4C893500 		movq	%r14, _ZL10undowidget(%rip)
 5971      000000
 889:fltk-1.3.4-1/src/Fl_Input_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 5972              		.loc 2 889 0
 5973 05a1 892D0000 		movl	%ebp, _ZL6undoat(%rip)
 5973      0000
 5974 05a7 4189AE90 		movl	%ebp, 144(%r14)
 5974      000000
 888:fltk-1.3.4-1/src/Fl_Input_.cxx ****  872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 5975              		.loc 2 888 0
 5976 05ae 890424   		movl	%eax, (%rsp)
 5977              	.LVL728:
 889:fltk-1.3.4-1/src/Fl_Input_.cxx ****  873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 5978              		.loc 2 889 0
 5979 05b1 4189AE94 		movl	%ebp, 148(%r14)
 5979      000000
 5980              	.LVL729:
 5981              	.LBB1259:
 896:fltk-1.3.4-1/src/Fl_Input_.cxx ****  880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_al
 5982              		.loc 2 896 0
 5983 05b8 0F8402FD 		je	.L588
 5983      FFFF
 5984              	.LVL730:
 5985 05be E9C4FEFF 		jmp	.L609
 5985      FF
 5986              	.LVL731:
 5987              	.L667:
 5988              	.LBE1259:
 851:fltk-1.3.4-1/src/Fl_Input_.cxx ****  835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 5989              		.loc 2 851 0 discriminator 1
 5990 05c3 8B050000 		movl	_ZL6undoat(%rip), %eax
 5990      0000
 5991 05c9 39E8     		cmpl	%ebp, %eax
 5992 05cb 744E     		je	.L672
 855:fltk-1.3.4-1/src/Fl_Input_.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5993              		.loc 2 855 0 discriminator 1
 5994 05cd 39D8     		cmpl	%ebx, %eax
 5995 05cf 0F8508FC 		jne	.L579
 5995      FFFF
 855:fltk-1.3.4-1/src/Fl_Input_.cxx ****  839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5996              		.loc 2 855 0 is_stmt 0 discriminator 2
 5997 05d5 8B050000 		movl	_ZL10undoinsert(%rip), %eax
 5997      0000
 5998 05db 85C0     		testl	%eax, %eax
 5999 05dd 0F848500 		je	.L673
 5999      0000
 860:fltk-1.3.4-1/src/Fl_Input_.cxx ****  844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6000              		.loc 2 860 0 is_stmt 1
 6001 05e3 89DA     		movl	%ebx, %edx
 6002 05e5 29EA     		subl	%ebp, %edx
 6003 05e7 39D0     		cmpl	%edx, %eax
 6004 05e9 891424   		movl	%edx, (%rsp)
 6005 05ec 0F8EEBFB 		jle	.L579
 6005      FFFF
 861:fltk-1.3.4-1/src/Fl_Input_.cxx ****  845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback 
 6006              		.loc 2 861 0
 6007 05f2 2B0424   		subl	(%rsp), %eax
 6008 05f5 4C63E5   		movslq	%ebp, %r12
 6009 05f8 89050000 		movl	%eax, _ZL10undoinsert(%rip)
 6009      0000
 6010 05fe E915FCFF 		jmp	.L581
 6010      FF
 6011              	.LVL732:
 6012              	.L670:
 876:fltk-1.3.4-1/src/Fl_Input_.cxx ****  860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6013              		.loc 2 876 0
 6014 0603 3B2D0000 		cmpl	_ZL6undoat(%rip), %ebp
 6014      0000
 6015 0609 0F85B8FD 		jne	.L586
 6015      FFFF
 6016              	.LVL733:
 6017              	.L607:
 877:fltk-1.3.4-1/src/Fl_Input_.cxx ****  861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 6018              		.loc 2 877 0
 6019 060f 44013D00 		addl	%r15d, _ZL10undoinsert(%rip)
 6019      000000
 6020 0616 E9BDFDFF 		jmp	.L587
 6020      FF
 6021              	.L672:
 852:fltk-1.3.4-1/src/Fl_Input_.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 6022              		.loc 2 852 0
 6023 061b 89D8     		movl	%ebx, %eax
 853:fltk-1.3.4-1/src/Fl_Input_.cxx ****  837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6024              		.loc 2 853 0
 6025 061d 4C63E5   		movslq	%ebp, %r12
 852:fltk-1.3.4-1/src/Fl_Input_.cxx ****  836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_vis
 6026              		.loc 2 852 0
 6027 0620 29E8     		subl	%ebp, %eax
 6028 0622 89C2     		movl	%eax, %edx
 6029 0624 8B050000 		movl	_ZL7undocut(%rip), %eax
 6029      0000
 6030 062a 891424   		movl	%edx, (%rsp)
 6031 062d 448D2C02 		leal	(%rdx,%rax), %r13d
 6032 0631 89442410 		movl	%eax, 16(%rsp)
 6033 0635 4489EF   		movl	%r13d, %edi
 6034 0638 E8000000 		call	_ZL14undobuffersizei
 6034      00
 6035              	.LVL734:
 6036              	.LBB1260:
 6037              	.LBB1261:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 6038              		.loc 8 53 0
 6039 063d 48634424 		movslq	16(%rsp), %rax
 6039      10
 6040 0642 48631424 		movslq	(%rsp), %rdx
 6041              	.LVL735:
 6042 0646 4C89E6   		movq	%r12, %rsi
 6043 0649 49037678 		addq	120(%r14), %rsi
 6044              	.LVL736:
 6045 064d 4889C7   		movq	%rax, %rdi
 6046 0650 48033D00 		addq	_ZL10undobuffer(%rip), %rdi
 6046      000000
 6047              	.LVL737:
 6048 0657 E8000000 		call	memcpy
 6048      00
 6049              	.LVL738:
 6050              	.LBE1261:
 6051              	.LBE1260:
 854:fltk-1.3.4-1/src/Fl_Input_.cxx ****  838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOC
 6052              		.loc 2 854 0
 6053 065c 44892D00 		movl	%r13d, _ZL7undocut(%rip)
 6053      000000
 6054 0663 E9B0FBFF 		jmp	.L581
 6054      FF
 6055              	.L673:
 856:fltk-1.3.4-1/src/Fl_Input_.cxx ****  840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a c
 6056              		.loc 2 856 0
 6057 0668 448B2500 		movl	_ZL7undocut(%rip), %r12d
 6057      000000
 6058 066f 89D8     		movl	%ebx, %eax
 6059 0671 29E8     		subl	%ebp, %eax
 6060 0673 890424   		movl	%eax, (%rsp)
 6061 0676 468D2C20 		leal	(%rax,%r12), %r13d
 6062 067a 4489EF   		movl	%r13d, %edi
 6063 067d E8000000 		call	_ZL14undobuffersizei
 6063      00
 6064              	.LVL739:
 857:fltk-1.3.4-1/src/Fl_Input_.cxx ****  841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6065              		.loc 2 857 0
 6066 0682 4C631424 		movslq	(%rsp), %r10
 6067 0686 488B0D00 		movq	_ZL10undobuffer(%rip), %rcx
 6067      000000
 6068              	.LVL740:
 6069              	.LBB1262:
 6070              	.LBB1263:
 6071              		.loc 8 59 0
 6072 068d 4963D4   		movslq	%r12d, %rdx
 6073              	.LVL741:
 6074              	.LBE1263:
 6075              	.LBE1262:
 858:fltk-1.3.4-1/src/Fl_Input_.cxx ****  842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on th
 6076              		.loc 2 858 0
 6077 0690 4C63E5   		movslq	%ebp, %r12
 6078              	.LBB1265:
 6079              	.LBB1264:
 6080              		.loc 8 59 0
 6081 0693 4889CE   		movq	%rcx, %rsi
 6082 0696 48894C24 		movq	%rcx, 16(%rsp)
 6082      10
 6083 069b 4A8D3C11 		leaq	(%rcx,%r10), %rdi
 6084              	.LVL742:
 6085 069f 4C895424 		movq	%r10, 24(%rsp)
 6085      18
 6086 06a4 E8000000 		call	memmove
 6086      00
 6087              	.LVL743:
 6088              	.LBE1264:
 6089              	.LBE1265:
 6090              	.LBB1266:
 6091              	.LBB1267:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 6092              		.loc 8 53 0
 6093 06a9 4C8B5424 		movq	24(%rsp), %r10
 6093      18
 6094 06ae 488B4C24 		movq	16(%rsp), %rcx
 6094      10
 6095 06b3 4C89E6   		movq	%r12, %rsi
 6096 06b6 49037678 		addq	120(%r14), %rsi
 6097              	.LVL744:
 6098 06ba 4C89D2   		movq	%r10, %rdx
 6099 06bd 4889CF   		movq	%rcx, %rdi
 6100 06c0 E8000000 		call	memcpy
 6100      00
 6101              	.LVL745:
 6102              	.LBE1267:
 6103              	.LBE1266:
 859:fltk-1.3.4-1/src/Fl_Input_.cxx ****  843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 6104              		.loc 2 859 0
 6105 06c5 44892D00 		movl	%r13d, _ZL7undocut(%rip)
 6105      000000
 6106 06cc E947FBFF 		jmp	.L581
 6106      FF
 6107              	.LVL746:
 6108              	.L665:
 918:fltk-1.3.4-1/src/Fl_Input_.cxx ****  902:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6109              		.loc 2 918 0
 6110 06d1 E8000000 		call	__stack_chk_fail
 6110      00
 6111              	.LVL747:
 6112              		.cfi_endproc
 6113              	.LFE538:
 6115              		.section	.text.unlikely._ZN9Fl_Input_7replaceEiiPKci
 6116              	.LCOLDE36:
 6117              		.section	.text._ZN9Fl_Input_7replaceEiiPKci
 6118              	.LHOTE36:
 6119              		.section	.rodata.str1.1
 6120              	.LC37:
 6121 0008 307800   		.string	"0x"
 6122              		.section	.text.unlikely._ZN9Fl_Input_10handletextEiiiii,"ax",@progbits
 6123              		.align 2
 6124              	.LCOLDB38:
 6125              		.section	.text._ZN9Fl_Input_10handletextEiiiii,"ax",@progbits
 6126              	.LHOTB38:
 6127              		.align 2
 6128              		.p2align 4,,15
 6129              		.globl	_ZN9Fl_Input_10handletextEiiiii
 6131              	_ZN9Fl_Input_10handletextEiiiii:
 6132              	.LFB542:
 999:fltk-1.3.4-1/src/Fl_Input_.cxx ****  983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 6133              		.loc 2 999 0
 6134              		.cfi_startproc
 6135              	.LVL748:
 6136              	.LBB1268:
1000:fltk-1.3.4-1/src/Fl_Input_.cxx ****  984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
 6137              		.loc 2 1000 0
 6138 0000 83FE11   		cmpl	$17, %esi
 6139 0003 0F87F703 		ja	.L776
 6139      0000
 6140              	.LBE1268:
 999:fltk-1.3.4-1/src/Fl_Input_.cxx ****  983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 6141              		.loc 2 999 0
 6142 0009 4155     		pushq	%r13
 6143              		.cfi_def_cfa_offset 16
 6144              		.cfi_offset 13, -16
 6145 000b 4154     		pushq	%r12
 6146              		.cfi_def_cfa_offset 24
 6147              		.cfi_offset 12, -24
 6148              	.LBB1321:
1000:fltk-1.3.4-1/src/Fl_Input_.cxx ****  984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
 6149              		.loc 2 1000 0
 6150 000d 89F6     		movl	%esi, %esi
 6151              	.LBE1321:
 999:fltk-1.3.4-1/src/Fl_Input_.cxx ****  983:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 6152              		.loc 2 999 0
 6153 000f 55       		pushq	%rbp
 6154              		.cfi_def_cfa_offset 32
 6155              		.cfi_offset 6, -32
 6156 0010 53       		pushq	%rbx
 6157              		.cfi_def_cfa_offset 40
 6158              		.cfi_offset 3, -40
 6159 0011 4189CC   		movl	%ecx, %r12d
 6160 0014 89D5     		movl	%edx, %ebp
 6161 0016 4889FB   		movq	%rdi, %rbx
 6162 0019 4883EC08 		subq	$8, %rsp
 6163              		.cfi_def_cfa_offset 48
 6164              	.LBB1322:
1000:fltk-1.3.4-1/src/Fl_Input_.cxx ****  984:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_window(), Fl_Widget::as_gl_window()
 6165              		.loc 2 1000 0
 6166 001d FF24F500 		jmp	*.L677(,%rsi,8)
 6166      000000
 6167              		.section	.rodata._ZN9Fl_Input_10handletextEiiiii,"a",@progbits
 6168              		.align 8
 6169              		.align 4
 6170              	.L677:
 6171 0000 00000000 		.quad	.L731
 6171      00000000 
 6172 0008 00000000 		.quad	.L676
 6172      00000000 
 6173 0010 00000000 		.quad	.L678
 6173      00000000 
 6174 0018 00000000 		.quad	.L679
 6174      00000000 
 6175 0020 00000000 		.quad	.L680
 6175      00000000 
 6176 0028 00000000 		.quad	.L681
 6176      00000000 
 6177 0030 00000000 		.quad	.L682
 6177      00000000 
 6178 0038 00000000 		.quad	.L683
 6178      00000000 
 6179 0040 00000000 		.quad	.L731
 6179      00000000 
 6180 0048 00000000 		.quad	.L731
 6180      00000000 
 6181 0050 00000000 		.quad	.L731
 6181      00000000 
 6182 0058 00000000 		.quad	.L679
 6182      00000000 
 6183 0060 00000000 		.quad	.L684
 6183      00000000 
 6184 0068 00000000 		.quad	.L731
 6184      00000000 
 6185 0070 00000000 		.quad	.L731
 6185      00000000 
 6186 0078 00000000 		.quad	.L685
 6186      00000000 
 6187 0080 00000000 		.quad	.L731
 6187      00000000 
 6188 0088 00000000 		.quad	.L686
 6188      00000000 
 6189              		.section	.text._ZN9Fl_Input_10handletextEiiiii
 6190              		.p2align 4,,10
 6191 0024 0F1F4000 		.p2align 3
 6192              	.L683:
 6193              	.LBB1269:
1020:fltk-1.3.4-1/src/Fl_Input_.cxx ****   37              		.align 2
 6194              		.loc 2 1020 0
 6195 0028 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 6195      00
 6196              	.LVL749:
 6197 002d 85C0     		testl	%eax, %eax
 6198 002f 0F85EB03 		jne	.L785
 6198      0000
 6199              	.L734:
1021:fltk-1.3.4-1/src/Fl_Input_.cxx ****   38              		.p2align 4,,15
 6200              		.loc 2 1021 0
 6201 0035 8BB39400 		movl	148(%rbx), %esi
 6201      0000
 6202 003b 8B839000 		movl	144(%rbx), %eax
 6202      0000
 6203 0041 39C6     		cmpl	%eax, %esi
 6204 0043 0F848704 		je	.L786
 6204      0000
 6205              	.LVL750:
 6206              	.LBB1270:
 6207              	.LBB1271:
 190:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 6208              		.loc 2 190 0
 6209 0049 0F4FF0   		cmovg	%eax, %esi
 6210              	.LVL751:
 6211 004c 4889DF   		movq	%rbx, %rdi
 6212 004f E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 6212      00
 6213              	.LVL752:
 6214              	.L685:
 6215              	.LBE1271:
 6216              	.LBE1270:
1026:fltk-1.3.4-1/src/Fl_Input_.cxx ****  988:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Window pointer if this widget is an Fl_Wi
 6217              		.loc 2 1026 0
 6218 0054 E8000000 		call	_Z13fl_reset_spotv
 6218      00
 6219              	.LVL753:
1027:fltk-1.3.4-1/src/Fl_Input_.cxx ****  989:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6220              		.loc 2 1027 0
 6221 0059 F6436C08 		testb	$8, 108(%rbx)
 6222 005d 0F85DA01 		jne	.L779
 6222      0000
 6223              	.LVL754:
1027:fltk-1.3.4-1/src/Fl_Input_.cxx ****  989:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6224              		.loc 2 1027 0 is_stmt 0 discriminator 1
 6225 0063 F6436F04 		testb	$4, 111(%rbx)
 6226 0067 0F84D001 		je	.L779
 6226      0000
1028:fltk-1.3.4-1/src/Fl_Input_.cxx ****  990:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 6227              		.loc 2 1028 0 is_stmt 1
 6228 006d 4889DF   		movq	%rbx, %rdi
 6229 0070 E8000000 		call	_ZN9Fl_Input_17maybe_do_callbackEv
 6229      00
 6230              	.LVL755:
1029:fltk-1.3.4-1/src/Fl_Input_.cxx ****  991:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Window. If 
 6231              		.loc 2 1029 0
 6232 0075 B8010000 		movl	$1, %eax
 6232      00
 6233 007a E9880100 		jmp	.L772
 6233      00
 6234              	.LVL756:
 6235 007f 90       		.p2align 4,,10
 6236              		.p2align 3
 6237              	.L686:
 6238 0080 0FB6476C 		movzbl	108(%rdi), %eax
 6239              	.LVL757:
 6240              	.LBB1272:
1052:fltk-1.3.4-1/src/Fl_Input_.cxx ****   57              		.align 2
 6241              		.loc 2 1052 0
 6242 0084 A808     		testb	$8, %al
 6243 0086 0F857C03 		jne	.L713
 6243      0000
 6244              	.LBB1273:
 6245              	.LBB1274:
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
 6246              		.loc 6 790 0
 6247 008c 4C8B2500 		movq	_ZN2Fl6e_textE(%rip), %r12
 6247      000000
 6248              	.LBE1274:
 6249              	.LBE1273:
1058:fltk-1.3.4-1/src/Fl_Input_.cxx ****   63              		.weak	_ZN9Fl_Widget12as_gl_windowEv
 6250              		.loc 2 1058 0
 6251 0093 4D85E4   		testq	%r12, %r12
 6252 0096 0F84A101 		je	.L779
 6252      0000
 6253              	.LBB1275:
 6254              	.LBB1276:
 791:fltk-1.3.4-1/FL/Fl.H ****   /**
 792:fltk-1.3.4-1/FL/Fl.H ****     Returns the length of the text in Fl::event_text(). There
 793:fltk-1.3.4-1/FL/Fl.H ****     will always be a nul at this position in the text. However there may
 794:fltk-1.3.4-1/FL/Fl.H ****     be a nul before that if the keystroke translates to a nul character or
 795:fltk-1.3.4-1/FL/Fl.H ****     you paste a nul character.
 796:fltk-1.3.4-1/FL/Fl.H ****   */
 797:fltk-1.3.4-1/FL/Fl.H ****   static int event_length() {return e_length;}
 6255              		.loc 6 797 0
 6256 009c 48632D00 		movslq	_ZN2Fl8e_lengthE(%rip), %rbp
 6256      000000
 6257              	.LBE1276:
 6258              	.LBE1275:
1058:fltk-1.3.4-1/src/Fl_Input_.cxx ****   63              		.weak	_ZN9Fl_Widget12as_gl_windowEv
 6259              		.loc 2 1058 0
 6260 00a3 85ED     		testl	%ebp, %ebp
 6261 00a5 0F849201 		je	.L779
 6261      0000
 6262 00ab 83E007   		andl	$7, %eax
1062:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1002:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns an Fl_Gl_Window pointer if this widget is an Fl
 6263              		.loc 2 1062 0
 6264 00ae 4C01E5   		addq	%r12, %rbp
 6265              	.LVL758:
1063:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6266              		.loc 2 1063 0
 6267 00b1 3C04     		cmpb	$4, %al
 6268 00b3 4189C5   		movl	%eax, %r13d
 6269              	.LVL759:
 6270 00b6 0F843404 		je	.L736
 6270      0000
1063:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6271              		.loc 2 1063 0 is_stmt 0 discriminator 4
 6272 00bc 4C39E5   		cmpq	%r12, %rbp
 6273 00bf 0F867801 		jbe	.L779
 6273      0000
 6274 00c5 E8000000 		call	__ctype_b_loc
 6274      00
 6275              	.LVL760:
 6276 00ca 488B10   		movq	(%rax), %rdx
 6277 00cd EB0E     		jmp	.L702
 6278 00cf 90       		.p2align 4,,10
 6279              		.p2align 3
 6280              	.L787:
1063:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6281              		.loc 2 1063 0 discriminator 3
 6282 00d0 4883ED01 		subq	$1, %rbp
 6283              	.LVL761:
 6284 00d4 4C39E5   		cmpq	%r12, %rbp
 6285 00d7 0F846001 		je	.L779
 6285      0000
 6286              	.L702:
 6287              	.LBB1277:
 6288              	.LBB1278:
 6289              		.loc 3 190 0 is_stmt 1 discriminator 2
 6290 00dd 0FB645FF 		movzbl	-1(%rbp), %eax
 6291              	.LBE1278:
 6292              	.LBE1277:
1063:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1003:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6293              		.loc 2 1063 0 discriminator 2
 6294 00e1 F6444201 		testb	$32, 1(%rdx,%rax,2)
 6294      20
 6295 00e6 75E8     		jne	.L787
1064:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1004:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 6296              		.loc 2 1064 0
 6297 00e8 4939EC   		cmpq	%rbp, %r12
 6298 00eb 0F834C01 		jnb	.L779
 6298      0000
 6299              	.LBB1279:
1065:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1005:fltk-1.3.4-1/FL/Fl_Widget.H ****       know whether this widget is derived from Fl_Gl_Window. 
 6300              		.loc 2 1065 0
 6301 00f1 4180FD02 		cmpb	$2, %r13b
 6302 00f5 0F848E02 		je	.L705
 6302      0000
 6303              	.LBB1280:
1079:fltk-1.3.4-1/src/Fl_Input_.cxx ****   73              		.cfi_endproc
 6304              		.loc 2 1079 0
 6305 00fb 4180FD01 		cmpb	$1, %r13b
 6306 00ff 0F85F403 		jne	.L714
 6306      0000
 6307 0105 E8000000 		call	__ctype_b_loc
 6307      00
 6308              	.LVL762:
 6309 010a 4C8B00   		movq	(%rax), %r8
 6310 010d EB09     		jmp	.L716
 6311              	.LVL763:
 6312 010f 90       		.p2align 4,,10
 6313              		.p2align 3
 6314              	.L788:
 6315              	.LBB1281:
1080:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74              	.LFE234:
 6316              		.loc 2 1080 0 discriminator 3
 6317 0110 84C0     		testb	%al, %al
 6318 0112 751E     		jne	.L715
1080:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74              	.LFE234:
 6319              		.loc 2 1080 0 is_stmt 0 discriminator 2
 6320 0114 4983C401 		addq	$1, %r12
 6321              	.LVL764:
 6322              	.L716:
1080:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74              	.LFE234:
 6323              		.loc 2 1080 0 discriminator 3
 6324 0118 410FB60C 		movzbl	(%r12), %ecx
 6324      24
 6325 011d 4939EC   		cmpq	%rbp, %r12
 6326 0120 0F93C0   		setnb	%al
 6327 0123 89C7     		movl	%eax, %edi
 6328              	.LBB1282:
 6329              	.LBB1283:
 6330              		.loc 3 190 0 is_stmt 1 discriminator 3
 6331 0125 4863F1   		movslq	%ecx, %rsi
 6332              	.LBE1283:
 6333              	.LBE1282:
1080:fltk-1.3.4-1/src/Fl_Input_.cxx ****   74              	.LFE234:
 6334              		.loc 2 1080 0 discriminator 3
 6335 0128 89CA     		movl	%ecx, %edx
 6336 012a 41F64470 		testb	$32, 1(%r8,%rsi,2)
 6336      0120
 6337 0130 75DE     		jne	.L788
 6338              	.L715:
 6339              	.LVL765:
1082:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77              	.LCOLDE2:
 6340              		.loc 2 1082 0
 6341 0132 8D72D5   		leal	-43(%rdx), %esi
 6342 0135 4C89E0   		movq	%r12, %rax
 6343 0138 81E6FD00 		andl	$253, %esi
 6343      0000
 6344 013e 7514     		jne	.L717
 6345              	.LVL766:
 6346 0140 410FB64C 		movzbl	1(%r12), %ecx
 6346      2401
1082:fltk-1.3.4-1/src/Fl_Input_.cxx ****   77              	.LCOLDE2:
 6347              		.loc 2 1082 0 is_stmt 0 discriminator 1
 6348 0146 498D4424 		leaq	1(%r12), %rax
 6348      01
 6349              	.LVL767:
 6350 014b 4839E8   		cmpq	%rbp, %rax
 6351 014e 400F93C7 		setnb	%dil
 6352 0152 89CA     		movl	%ecx, %edx
 6353              	.L717:
1083:fltk-1.3.4-1/src/Fl_Input_.cxx ****   78              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
 6354              		.loc 2 1083 0 is_stmt 1 discriminator 3
 6355 0154 83E930   		subl	$48, %ecx
 6356 0157 83F909   		cmpl	$9, %ecx
 6357 015a 7722     		ja	.L718
 6358 015c 4084FF   		testb	%dil, %dil
 6359 015f 740C     		je	.L719
 6360 0161 EB1B     		jmp	.L718
 6361              		.p2align 4,,10
 6362 0163 0F1F4400 		.p2align 3
 6362      00
 6363              	.L789:
1083:fltk-1.3.4-1/src/Fl_Input_.cxx ****   78              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
 6364              		.loc 2 1083 0 is_stmt 0 discriminator 2
 6365 0168 4839E8   		cmpq	%rbp, %rax
 6366 016b 7311     		jnb	.L718
 6367              	.L719:
 6368 016d 4883C001 		addq	$1, %rax
 6369              	.LVL768:
 6370 0171 0FB608   		movzbl	(%rax), %ecx
 6371 0174 89CA     		movl	%ecx, %edx
 6372 0176 83E930   		subl	$48, %ecx
 6373 0179 83F909   		cmpl	$9, %ecx
 6374 017c 76EA     		jbe	.L789
 6375              	.L718:
1084:fltk-1.3.4-1/src/Fl_Input_.cxx ****   79              	.LHOTE2:
 6376              		.loc 2 1084 0 is_stmt 1
 6377 017e 80FA2E   		cmpb	$46, %dl
 6378 0181 0F84DD03 		je	.L790
 6378      0000
 6379              	.LVL769:
 6380              	.L721:
1093:fltk-1.3.4-1/src/Fl_Input_.cxx ****    1:fltk-1.3.4-1/src/Fl_Input_.cxx ****    1              		.file	"Fl_Input_.cxx"
 6381              		.loc 2 1093 0
 6382 0187 4839E8   		cmpq	%rbp, %rax
 6383 018a 0F827802 		jb	.L713
 6383      0000
 6384              	.LVL770:
1096:fltk-1.3.4-1/src/Fl_Input_.cxx ****    4:fltk-1.3.4-1/src/Fl_Input_.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8
 6385              		.loc 2 1096 0
 6386 0190 8B938800 		movl	136(%rbx), %edx
 6386      0000
 6387 0196 4189E8   		movl	%ebp, %r8d
 6388 0199 4C89E1   		movq	%r12, %rcx
 6389 019c 4529E0   		subl	%r12d, %r8d
 6390 019f 31F6     		xorl	%esi, %esi
 6391              	.LVL771:
 6392              	.L780:
 6393              	.LBE1281:
 6394              	.LBE1280:
 6395              	.LBE1279:
 6396              	.LBE1272:
 6397              	.LBE1269:
 6398              	.LBE1322:
1111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H
 6399              		.loc 2 1111 0
 6400 01a1 4883C408 		addq	$8, %rsp
 6401              		.cfi_remember_state
 6402              		.cfi_def_cfa_offset 40
 6403              	.LBB1323:
 6404              	.LBB1315:
 6405              	.LBB1295:
1098:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6              	.LCOLDB0:
 6406              		.loc 2 1098 0
 6407 01a5 4889DF   		movq	%rbx, %rdi
 6408              	.LBE1295:
 6409              	.LBE1315:
 6410              	.LBE1323:
1111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H
 6411              		.loc 2 1111 0
 6412 01a8 5B       		popq	%rbx
 6413              		.cfi_restore 3
 6414              		.cfi_def_cfa_offset 32
 6415              	.LVL772:
 6416 01a9 5D       		popq	%rbp
 6417              		.cfi_restore 6
 6418              		.cfi_def_cfa_offset 24
 6419              	.LVL773:
 6420 01aa 415C     		popq	%r12
 6421              		.cfi_restore 12
 6422              		.cfi_def_cfa_offset 16
 6423 01ac 415D     		popq	%r13
 6424              		.cfi_restore 13
 6425              		.cfi_def_cfa_offset 8
 6426              	.LBB1324:
 6427              	.LBB1316:
 6428              	.LBB1296:
1098:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6              	.LCOLDB0:
 6429              		.loc 2 1098 0
 6430 01ae E9000000 		jmp	_ZN9Fl_Input_7replaceEiiPKci
 6430      00
 6431              	.LVL774:
 6432              		.p2align 4,,10
 6433 01b3 0F1F4400 		.p2align 3
 6433      00
 6434              	.L676:
 6435              		.cfi_restore_state
 6436              	.LBE1296:
1032:fltk-1.3.4-1/src/Fl_Input_.cxx ****  994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
 6437              		.loc 2 1032 0
 6438 01b8 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 6438      00
 6439              	.LVL775:
 6440 01bd 85C0     		testl	%eax, %eax
 6441 01bf 0F85DB02 		jne	.L791
 6441      0000
 6442              	.L735:
 6443              	.LVL776:
 6444              	.LBB1297:
 6445              	.LBB1298:
 544:fltk-1.3.4-1/src/Fl_Input_.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6446              		.loc 2 544 0
 6447 01c5 8B938800 		movl	136(%rbx), %edx
 6447      0000
 6448              	.LBE1298:
 6449              	.LBE1297:
 6450              	.LBB1301:
 6451              	.LBB1302:
 709:fltk-1.3.4-1/FL/Fl.H ****   /**
 6452              		.loc 6 709 0
 6453 01cb 8B0D0000 		movl	_ZN2Fl7e_stateE(%rip), %ecx
 6453      0000
 6454              	.LVL777:
 6455              	.LBE1302:
 6456              	.LBE1301:
 6457              	.LBB1303:
 6458              	.LBB1299:
 543:fltk-1.3.4-1/src/Fl_Input_.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 6459              		.loc 2 543 0
 6460 01d1 C7050000 		movl	$0, _ZN9Fl_Input_11was_up_downE(%rip)
 6460      00000000 
 6460      0000
 6461              	.LVL778:
 544:fltk-1.3.4-1/src/Fl_Input_.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6462              		.loc 2 544 0
 6463 01db 85D2     		testl	%edx, %edx
 6464 01dd 0F859D02 		jne	.L792
 6464      0000
 6465              	.L698:
 6466              	.LVL779:
 6467              	.LBE1299:
 6468              	.LBE1303:
1036:fltk-1.3.4-1/src/Fl_Input_.cxx ****  998:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_gl_window()
 6469              		.loc 2 1036 0
 6470 01e3 483B1D00 		cmpq	_ZN2Fl6focus_E(%rip), %rbx
 6470      000000
 6471 01ea 7451     		je	.L779
1037:fltk-1.3.4-1/src/Fl_Input_.cxx ****  999:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6472              		.loc 2 1037 0
 6473 01ec 4889DF   		movq	%rbx, %rdi
 6474 01ef E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 6474      00
 6475              	.LVL780:
1038:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1000:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual Fl_Window* as_window() {return 0;}
 6476              		.loc 2 1038 0
 6477 01f4 488B03   		movq	(%rbx), %rax
 6478 01f7 BE060000 		movl	$6, %esi
 6478      00
 6479 01fc 4889DF   		movq	%rbx, %rdi
 6480 01ff FF5018   		call	*24(%rax)
 6481              	.LVL781:
1040:fltk-1.3.4-1/src/Fl_Input_.cxx ****   44              		.cfi_startproc
 6482              		.loc 2 1040 0
 6483 0202 B8010000 		movl	$1, %eax
 6483      00
 6484              	.LVL782:
 6485              	.L772:
 6486              	.LBE1316:
 6487              	.LBE1324:
1111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H
 6488              		.loc 2 1111 0
 6489 0207 4883C408 		addq	$8, %rsp
 6490              		.cfi_remember_state
 6491              		.cfi_def_cfa_offset 40
 6492 020b 5B       		popq	%rbx
 6493              		.cfi_restore 3
 6494              		.cfi_def_cfa_offset 32
 6495              	.LVL783:
 6496 020c 5D       		popq	%rbp
 6497              		.cfi_restore 6
 6498              		.cfi_def_cfa_offset 24
 6499 020d 415C     		popq	%r12
 6500              		.cfi_restore 12
 6501              		.cfi_def_cfa_offset 16
 6502 020f 415D     		popq	%r13
 6503              		.cfi_restore 13
 6504              		.cfi_def_cfa_offset 8
 6505 0211 C3       		ret
 6506              	.LVL784:
 6507              		.p2align 4,,10
 6508 0212 660F1F44 		.p2align 3
 6508      0000
 6509              	.L678:
 6510              		.cfi_restore_state
 6511              	.LBB1325:
 6512              	.LBB1317:
1047:fltk-1.3.4-1/src/Fl_Input_.cxx ****   52              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
 6513              		.loc 2 1047 0
 6514 0218 31F6     		xorl	%esi, %esi
 6515 021a E8000000 		call	_ZN9Fl_Input_4copyEi
 6515      00
 6516              	.LVL785:
1048:fltk-1.3.4-1/src/Fl_Input_.cxx ****   53              	.LCOLDE1:
 6517              		.loc 2 1048 0
 6518 021f B8010000 		movl	$1, %eax
 6518      00
 6519 0224 EBE1     		jmp	.L772
 6520              	.LVL786:
 6521 0226 662E0F1F 		.p2align 4,,10
 6521      84000000 
 6521      0000
 6522              		.p2align 3
 6523              	.L679:
1004:fltk-1.3.4-1/src/Fl_Input_.cxx ****   20              		.cfi_startproc
 6524              		.loc 2 1004 0
 6525 0230 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 6525      00
 6526              	.LVL787:
 6527 0235 85C0     		testl	%eax, %eax
 6528 0237 0F851302 		jne	.L793
 6528      0000
 6529              	.LVL788:
 6530              	.L779:
 6531              	.LBE1317:
 6532              	.LBE1325:
1111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H
 6533              		.loc 2 1111 0
 6534 023d 4883C408 		addq	$8, %rsp
 6535              		.cfi_remember_state
 6536              		.cfi_def_cfa_offset 40
 6537              	.LBB1326:
 6538              	.LBB1318:
1105:fltk-1.3.4-1/src/Fl_Input_.cxx ****   13:fltk-1.3.4-1/src/Fl_Input_.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupE
 6539              		.loc 2 1105 0
 6540 0241 B8010000 		movl	$1, %eax
 6540      00
 6541              	.LBE1318:
 6542              	.LBE1326:
1111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H
 6543              		.loc 2 1111 0
 6544 0246 5B       		popq	%rbx
 6545              		.cfi_restore 3
 6546              		.cfi_def_cfa_offset 32
 6547              	.LVL789:
 6548 0247 5D       		popq	%rbp
 6549              		.cfi_restore 6
 6550              		.cfi_def_cfa_offset 24
 6551 0248 415C     		popq	%r12
 6552              		.cfi_restore 12
 6553              		.cfi_def_cfa_offset 16
 6554 024a 415D     		popq	%r13
 6555              		.cfi_restore 13
 6556              		.cfi_def_cfa_offset 8
 6557 024c C3       		ret
 6558              	.LVL790:
 6559 024d 0F1F00   		.p2align 4,,10
 6560              		.p2align 3
 6561              	.L681:
 6562              		.cfi_restore_state
 6563              	.LBB1327:
 6564              	.LBB1319:
 6565              	.LBB1304:
 6566              	.LBB1305:
 544:fltk-1.3.4-1/src/Fl_Input_.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6567              		.loc 2 544 0
 6568 0250 8B878800 		movl	136(%rdi), %eax
 6568      0000
 543:fltk-1.3.4-1/src/Fl_Input_.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 6569              		.loc 2 543 0
 6570 0256 C7050000 		movl	$0, _ZN9Fl_Input_11was_up_downE(%rip)
 6570      00000000 
 6570      0000
 6571              	.LVL791:
 544:fltk-1.3.4-1/src/Fl_Input_.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 6572              		.loc 2 544 0
 6573 0260 85C0     		testl	%eax, %eax
 6574 0262 74D9     		je	.L779
 6575 0264 B9010000 		movl	$1, %ecx
 6575      00
 6576              	.LVL792:
 6577 0269 4489E2   		movl	%r12d, %edx
 6578              	.LVL793:
 6579 026c 89EE     		movl	%ebp, %esi
 6580 026e E8000000 		call	_ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35
 6580      00
 6581              	.LVL794:
 6582              	.LBE1305:
 6583              	.LBE1304:
1044:fltk-1.3.4-1/src/Fl_Input_.cxx ****   48 0002 C3       		ret
 6584              		.loc 2 1044 0
 6585 0273 B8010000 		movl	$1, %eax
 6585      00
 6586 0278 EB8D     		jmp	.L772
 6587              	.LVL795:
 6588 027a 660F1F44 		.p2align 4,,10
 6588      0000
 6589              		.p2align 3
 6590              	.L682:
1012:fltk-1.3.4-1/src/Fl_Input_.cxx ****   29              	.LCOLDE0:
 6591              		.loc 2 1012 0
 6592 0280 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6592      00
 6593              	.LVL796:
 6594 0285 4883EC08 		subq	$8, %rsp
 6595              		.cfi_def_cfa_offset 56
 6596 0289 8B4B24   		movl	36(%rbx), %ecx
 6597 028c 8BB3B800 		movl	184(%rbx), %esi
 6597      0000
 6598 0292 8BBBB400 		movl	180(%rbx), %edi
 6598      0000
 6599 0298 8B5320   		movl	32(%rbx), %edx
 6600 029b 50       		pushq	%rax
 6601              		.cfi_def_cfa_offset 64
 6602 029c 448B4B2C 		movl	44(%rbx), %r9d
 6603 02a0 448B4328 		movl	40(%rbx), %r8d
 6604 02a4 E8000000 		call	_Z11fl_set_spotiiiiiiP9Fl_Window
 6604      00
 6605              	.LVL797:
1013:fltk-1.3.4-1/src/Fl_Input_.cxx ****   30              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
 6606              		.loc 2 1013 0
 6607 02a9 8B839400 		movl	148(%rbx), %eax
 6607      0000
 6608 02af 8BB39000 		movl	144(%rbx), %esi
 6608      0000
 6609 02b5 59       		popq	%rcx
 6610              		.cfi_def_cfa_offset 56
 6611 02b6 5F       		popq	%rdi
 6612              		.cfi_def_cfa_offset 48
 6613 02b7 39F0     		cmpl	%esi, %eax
 6614 02b9 0F845402 		je	.L794
 6614      0000
 6615              	.LVL798:
 6616              	.LBB1306:
 6617              	.LBB1307:
 190:fltk-1.3.4-1/src/Fl_Input_.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 6618              		.loc 2 190 0
 6619 02bf 0F4EF0   		cmovle	%eax, %esi
 6620              	.LVL799:
 6621 02c2 4889DF   		movq	%rbx, %rdi
 6622 02c5 E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 6622      00
 6623              	.LVL800:
 6624              	.LBE1307:
 6625              	.LBE1306:
1017:fltk-1.3.4-1/src/Fl_Input_.cxx ****   34              	.LCOLDB1:
 6626              		.loc 2 1017 0
 6627 02ca B8010000 		movl	$1, %eax
 6627      00
 6628 02cf E933FFFF 		jmp	.L772
 6628      FF
 6629              	.LVL801:
 6630              		.p2align 4,,10
 6631 02d4 0F1F4000 		.p2align 3
 6632              	.L684:
 6633 02d8 8BBFAC00 		movl	172(%rdi), %edi
 6633      0000
 6634              	.LVL802:
1101:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9              		.align 2
 6635              		.loc 2 1101 0
 6636 02de 85FF     		testl	%edi, %edi
 6637 02e0 0F858A00 		jne	.L795
 6637      0000
1101:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9              		.align 2
 6638              		.loc 2 1101 0 is_stmt 0 discriminator 2
 6639 02e6 4889DF   		movq	%rbx, %rdi
 6640 02e9 E8000000 		call	_ZN9Fl_Widget13test_shortcutEv
 6640      00
 6641              	.LVL803:
 6642 02ee 85C0     		testl	%eax, %eax
 6643 02f0 0F94C0   		sete	%al
 6644              	.L730:
1101:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9              		.align 2
 6645              		.loc 2 1101 0 discriminator 4
 6646 02f3 84C0     		testb	%al, %al
 6647 02f5 7571     		jne	.L731
 6648              	.LBB1308:
 6649              	.LBB1309:
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
 6650              		.loc 6 1195 0 is_stmt 1
 6651 02f7 BF010000 		movl	$1, %edi
 6651      00
 6652 02fc E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 6652      00
 6653              	.LVL804:
 6654              	.LBE1309:
 6655              	.LBE1308:
1103:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8
 6656              		.loc 2 1103 0
 6657 0301 84C0     		testb	%al, %al
 6658 0303 7463     		je	.L731
1103:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11:fltk-1.3.4-1/src/Fl_Input_.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8
 6659              		.loc 2 1103 0 is_stmt 0 discriminator 1
 6660 0305 488B03   		movq	(%rbx), %rax
 6661 0308 BE060000 		movl	$6, %esi
 6661      00
 6662 030d 4889DF   		movq	%rbx, %rdi
 6663 0310 FF5018   		call	*24(%rax)
 6664              	.LVL805:
 6665 0313 85C0     		testl	%eax, %eax
 6666 0315 7451     		je	.L731
1104:fltk-1.3.4-1/src/Fl_Input_.cxx ****   12:fltk-1.3.4-1/src/Fl_Input_.cxx ****   12              	.Ltext_cold0:
 6667              		.loc 2 1104 0 is_stmt 1
 6668 0317 4889DF   		movq	%rbx, %rdi
 6669 031a E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 6669      00
 6670              	.LVL806:
 6671 031f E919FFFF 		jmp	.L779
 6671      FF
 6672              	.LVL807:
 6673              		.p2align 4,,10
 6674 0324 0F1F4000 		.p2align 3
 6675              	.L680:
1008:fltk-1.3.4-1/src/Fl_Input_.cxx ****   24 0002 C3       		ret
 6676              		.loc 2 1008 0
 6677 0328 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 6677      00
 6678              	.LVL808:
 6679 032d 85C0     		testl	%eax, %eax
 6680 032f 0F8408FF 		je	.L779
 6680      FFFF
1008:fltk-1.3.4-1/src/Fl_Input_.cxx ****   24 0002 C3       		ret
 6681              		.loc 2 1008 0 is_stmt 0 discriminator 1
 6682 0335 4889DF   		movq	%rbx, %rdi
 6683 0338 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6683      00
 6684              	.LVL809:
 6685 033d 4885C0   		testq	%rax, %rax
 6686 0340 0F84F7FE 		je	.L779
 6686      FFFF
1008:fltk-1.3.4-1/src/Fl_Input_.cxx ****   24 0002 C3       		ret
 6687              		.loc 2 1008 0
 6688 0346 4889DF   		movq	%rbx, %rdi
 6689 0349 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6689      00
 6690              	.LVL810:
 6691 034e 31F6     		xorl	%esi, %esi
 6692 0350 4889C7   		movq	%rax, %rdi
 6693 0353 E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 6693      00
 6694              	.LVL811:
1009:fltk-1.3.4-1/src/Fl_Input_.cxx ****   25              		.cfi_endproc
 6695              		.loc 2 1009 0 is_stmt 1
 6696 0358 B8010000 		movl	$1, %eax
 6696      00
 6697 035d E9A5FEFF 		jmp	.L772
 6697      FF
 6698              		.p2align 4,,10
 6699 0362 660F1F44 		.p2align 3
 6699      0000
 6700              	.L731:
1109:fltk-1.3.4-1/src/Fl_Input_.cxx ****   17:fltk-1.3.4-1/src/Fl_Input_.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
 6701              		.loc 2 1109 0
 6702 0368 31C0     		xorl	%eax, %eax
 6703 036a E998FEFF 		jmp	.L772
 6703      FF
 6704              	.LVL812:
 6705 036f 90       		.p2align 4,,10
 6706              		.p2align 3
 6707              	.L795:
1101:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9:fltk-1.3.4-1/src/Fl_Input_.cxx ****    9              		.align 2
 6708              		.loc 2 1101 0 discriminator 1
 6709 0370 E8000000 		call	_ZN2Fl13test_shortcutEj
 6709      00
 6710              	.LVL813:
 6711 0375 85C0     		testl	%eax, %eax
 6712 0377 0F94C0   		sete	%al
 6713 037a E974FFFF 		jmp	.L730
 6713      FF
 6714              	.LVL814:
 6715 037f 90       		.p2align 4,,10
 6716              		.p2align 3
 6717              	.L796:
 6718              	.LBB1310:
 6719              	.LBB1293:
 6720              	.LBB1285:
1066:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 6721              		.loc 2 1066 0 discriminator 3
 6722 0380 4939EC   		cmpq	%rbp, %r12
 6723 0383 7313     		jnb	.L704
1066:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 6724              		.loc 2 1066 0 is_stmt 0 discriminator 2
 6725 0385 4983C401 		addq	$1, %r12
 6726              	.LVL815:
 6727              	.L705:
1066:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1006:fltk-1.3.4-1/FL/Fl_Widget.H ****       non-NULL, then the widget in question is derived from F
 6728              		.loc 2 1066 0 discriminator 3
 6729 0389 410FB60C 		movzbl	(%r12), %ecx
 6729      24
 6730 038e F6444A01 		testb	$32, 1(%rdx,%rcx,2)
 6730      20
 6731 0393 4889C8   		movq	%rcx, %rax
 6732 0396 75E8     		jne	.L796
 6733              	.L704:
 6734              	.LVL816:
1068:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1008:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Gl_W
 6735              		.loc 2 1068 0 is_stmt 1
 6736 0398 83E82B   		subl	$43, %eax
 6737 039b 4D89E0   		movq	%r12, %r8
1069:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1009:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 6738              		.loc 2 1069 0
 6739 039e BF000000 		movl	$.LC37, %edi
 6739      00
1068:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1008:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Gl_W
 6740              		.loc 2 1068 0
 6741 03a3 83E0FD   		andl	$-3, %eax
1069:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1009:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 6742              		.loc 2 1069 0
 6743 03a6 B9020000 		movl	$2, %ecx
 6743      00
1068:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1008:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if this widget is not derived from Fl_Gl_W
 6744              		.loc 2 1068 0
 6745 03ab 3C01     		cmpb	$1, %al
 6746 03ad 4983D000 		adcq	$0, %r8
 6747              	.LVL817:
1069:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1009:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note This method is provided to avoid dynamic_cast.
 6748              		.loc 2 1069 0
 6749 03b1 4C89C6   		movq	%r8, %rsi
 6750 03b4 F3A6     		repz cmpsb
 6751 03b6 0F847201 		je	.L707
 6751      0000
1073:fltk-1.3.4-1/src/Fl_Input_.cxx ****   67              		.loc 1 1012 0
 6752              		.loc 2 1073 0 discriminator 3
 6753 03bc 410FB600 		movzbl	(%r8), %eax
 6754 03c0 83E830   		subl	$48, %eax
 6755 03c3 83F809   		cmpl	$9, %eax
 6756 03c6 0F872102 		ja	.L739
 6756      0000
 6757 03cc 4939E8   		cmpq	%rbp, %r8
 6758 03cf 4C89C0   		movq	%r8, %rax
 6759 03d2 7215     		jb	.L711
 6760 03d4 E9140200 		jmp	.L739
 6760      00
 6761              	.LVL818:
 6762 03d9 0F1F8000 		.p2align 4,,10
 6762      000000
 6763              		.p2align 3
 6764              	.L797:
1073:fltk-1.3.4-1/src/Fl_Input_.cxx ****   67              		.loc 1 1012 0
 6765              		.loc 2 1073 0 is_stmt 0 discriminator 2
 6766 03e0 4839E8   		cmpq	%rbp, %rax
 6767 03e3 0F839EFD 		jnb	.L721
 6767      FFFF
 6768              	.L711:
 6769 03e9 4883C001 		addq	$1, %rax
 6770              	.LVL819:
 6771 03ed 0FB610   		movzbl	(%rax), %edx
 6772 03f0 83EA30   		subl	$48, %edx
 6773 03f3 83FA09   		cmpl	$9, %edx
 6774 03f6 76E8     		jbe	.L797
 6775 03f8 E98AFDFF 		jmp	.L721
 6775      FF
 6776              	.LVL820:
 6777 03fd 0F1F00   		.p2align 4,,10
 6778              		.p2align 3
 6779              	.L776:
 6780              		.cfi_def_cfa_offset 8
 6781              		.cfi_restore 3
 6782              		.cfi_restore 6
 6783              		.cfi_restore 12
 6784              		.cfi_restore 13
 6785              	.LBE1285:
 6786              	.LBE1293:
 6787              	.LBE1310:
1109:fltk-1.3.4-1/src/Fl_Input_.cxx ****   17:fltk-1.3.4-1/src/Fl_Input_.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
 6788              		.loc 2 1109 0 is_stmt 1
 6789 0400 31C0     		xorl	%eax, %eax
 6790              	.LBE1319:
 6791              	.LBE1327:
1111:fltk-1.3.4-1/src/Fl_Input_.cxx ****   19:fltk-1.3.4-1/src/Fl_Input_.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H
 6792              		.loc 2 1111 0
 6793 0402 C3       		ret
 6794              	.LVL821:
 6795              		.p2align 4,,10
 6796 0403 0F1F4400 		.p2align 3
 6796      00
 6797              	.L713:
 6798              		.cfi_def_cfa_offset 48
 6799              		.cfi_offset 3, -40
 6800              		.cfi_offset 6, -32
 6801              		.cfi_offset 12, -24
 6802              		.cfi_offset 13, -16
 6803              	.LBB1328:
 6804              	.LBB1320:
 6805              	.LBB1311:
1053:fltk-1.3.4-1/src/Fl_Input_.cxx ****   58              	.LCOLDB2:
 6806              		.loc 2 1053 0
 6807 0408 BF020000 		movl	$2, %edi
 6807      00
 6808 040d E8000000 		call	_Z7fl_beepi
 6808      00
 6809              	.LVL822:
1054:fltk-1.3.4-1/src/Fl_Input_.cxx ****   59              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
 6810              		.loc 2 1054 0
 6811 0412 B8010000 		movl	$1, %eax
 6811      00
 6812 0417 E9EBFDFF 		jmp	.L772
 6812      FF
 6813              	.LVL823:
 6814 041c 0F1F4000 		.p2align 4,,10
 6815              		.p2align 3
 6816              	.L785:
 6817              	.LBE1311:
1020:fltk-1.3.4-1/src/Fl_Input_.cxx ****   37              		.align 2
 6818              		.loc 2 1020 0 discriminator 1
 6819 0420 4889DF   		movq	%rbx, %rdi
 6820 0423 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6820      00
 6821              	.LVL824:
 6822 0428 4885C0   		testq	%rax, %rax
 6823 042b 0F8404FC 		je	.L734
 6823      FFFF
1020:fltk-1.3.4-1/src/Fl_Input_.cxx ****   37              		.align 2
 6824              		.loc 2 1020 0 is_stmt 0
 6825 0431 4889DF   		movq	%rbx, %rdi
 6826 0434 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6826      00
 6827              	.LVL825:
 6828 0439 31F6     		xorl	%esi, %esi
 6829 043b 4889C7   		movq	%rax, %rdi
 6830 043e E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 6830      00
 6831              	.LVL826:
 6832 0443 E9EDFBFF 		jmp	.L734
 6832      FF
 6833 0448 0F1F8400 		.p2align 4,,10
 6833      00000000 
 6834              		.p2align 3
 6835              	.L793:
1004:fltk-1.3.4-1/src/Fl_Input_.cxx ****   20              		.cfi_startproc
 6836              		.loc 2 1004 0 is_stmt 1 discriminator 1
 6837 0450 4889DF   		movq	%rbx, %rdi
 6838 0453 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6838      00
 6839              	.LVL827:
 6840 0458 4885C0   		testq	%rax, %rax
 6841 045b 0F84DCFD 		je	.L779
 6841      FFFF
1004:fltk-1.3.4-1/src/Fl_Input_.cxx ****   20              		.cfi_startproc
 6842              		.loc 2 1004 0 is_stmt 0
 6843 0461 4889DF   		movq	%rbx, %rdi
 6844 0464 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6844      00
 6845              	.LVL828:
 6846 0469 BE4D0000 		movl	$77, %esi
 6846      00
 6847 046e 4889C7   		movq	%rax, %rdi
 6848 0471 E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 6848      00
 6849              	.LVL829:
1005:fltk-1.3.4-1/src/Fl_Input_.cxx ****   21              	.LVL0:
 6850              		.loc 2 1005 0 is_stmt 1
 6851 0476 B8010000 		movl	$1, %eax
 6851      00
 6852 047b E987FDFF 		jmp	.L772
 6852      FF
 6853              	.LVL830:
 6854              		.p2align 4,,10
 6855              		.p2align 3
 6856              	.L792:
 6857              	.LBB1312:
 6858              	.LBB1300:
 6859 0480 81E10000 		andl	$65536, %ecx
 6859      0100
 6860 0486 4489E2   		movl	%r12d, %edx
 6861 0489 89EE     		movl	%ebp, %esi
 6862 048b 4889DF   		movq	%rbx, %rdi
 6863 048e E8000000 		call	_ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35
 6863      00
 6864              	.LVL831:
 6865 0493 E94BFDFF 		jmp	.L698
 6865      FF
 6866              	.LVL832:
 6867 0498 0F1F8400 		.p2align 4,,10
 6867      00000000 
 6868              		.p2align 3
 6869              	.L791:
 6870              	.LBE1300:
 6871              	.LBE1312:
1032:fltk-1.3.4-1/src/Fl_Input_.cxx ****  994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
 6872              		.loc 2 1032 0 discriminator 1
 6873 04a0 4889DF   		movq	%rbx, %rdi
 6874 04a3 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6874      00
 6875              	.LVL833:
 6876 04a8 4885C0   		testq	%rax, %rax
 6877 04ab 0F8414FD 		je	.L735
 6877      FFFF
1032:fltk-1.3.4-1/src/Fl_Input_.cxx ****  994:fltk-1.3.4-1/FL/Fl_Widget.H ****       or other Fl_Window-specific methods.
 6878              		.loc 2 1032 0 is_stmt 0
 6879 04b1 4889DF   		movq	%rbx, %rdi
 6880 04b4 E8000000 		call	_ZNK9Fl_Widget6windowEv
 6880      00
 6881              	.LVL834:
 6882 04b9 BE4D0000 		movl	$77, %esi
 6882      00
 6883 04be 4889C7   		movq	%rax, %rdi
 6884 04c1 E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 6884      00
 6885              	.LVL835:
 6886 04c6 E9FAFCFF 		jmp	.L735
 6886      FF
 6887 04cb 0F1F4400 		.p2align 4,,10
 6887      00
 6888              		.p2align 3
 6889              	.L786:
 6890              	.LVL836:
1022:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39              		.weak	_ZN9Fl_Widget9as_windowEv
 6891              		.loc 2 1022 0 is_stmt 1
 6892 04d0 F6436D02 		testb	$2, 109(%rbx)
 6893 04d4 0F857AFB 		jne	.L685
 6893      FFFF
1022:fltk-1.3.4-1/src/Fl_Input_.cxx ****   39              		.weak	_ZN9Fl_Widget9as_windowEv
 6894              		.loc 2 1022 0 is_stmt 0 discriminator 1
 6895 04da 4889DF   		movq	%rbx, %rdi
 6896 04dd E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 6896      00
 6897              	.LVL837:
 6898 04e2 C683B000 		movb	$1, 176(%rbx)
 6898      000001
 6899 04e9 E966FBFF 		jmp	.L685
 6899      FF
 6900              	.LVL838:
 6901 04ee 6690     		.p2align 4,,10
 6902              		.p2align 3
 6903              	.L736:
 6904              	.LBB1313:
1064:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1004:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use this method if you have a widget (pointer) and need
 6905              		.loc 2 1064 0 is_stmt 1
 6906 04f0 4C39E5   		cmpq	%r12, %rbp
 6907 04f3 0F8644FD 		jbe	.L779
 6907      FFFF
 6908              	.LVL839:
 6909              	.L714:
1098:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6:fltk-1.3.4-1/src/Fl_Input_.cxx ****    6              	.LCOLDB0:
 6910              		.loc 2 1098 0
 6911 04f9 4189E8   		movl	%ebp, %r8d
 6912 04fc 8B939400 		movl	148(%rbx), %edx
 6912      0000
 6913 0502 8BB39000 		movl	144(%rbx), %esi
 6913      0000
 6914 0508 4529E0   		subl	%r12d, %r8d
 6915 050b 4C89E1   		movq	%r12, %rcx
 6916 050e E98EFCFF 		jmp	.L780
 6916      FF
 6917              	.LVL840:
 6918              	.L794:
 6919              	.LBE1313:
1014:fltk-1.3.4-1/src/Fl_Input_.cxx ****   31              	.LHOTE0:
 6920              		.loc 2 1014 0
 6921 0513 8B838800 		movl	136(%rbx), %eax
 6921      0000
 6922 0519 4889DF   		movq	%rbx, %rdi
 6923 051c 8D7001   		leal	1(%rax), %esi
 6924 051f E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 6924      00
 6925              	.LVL841:
1017:fltk-1.3.4-1/src/Fl_Input_.cxx ****   34              	.LCOLDB1:
 6926              		.loc 2 1017 0
 6927 0524 B8010000 		movl	$1, %eax
 6927      00
 6928 0529 E9D9FCFF 		jmp	.L772
 6928      FF
 6929              	.LVL842:
 6930              	.L707:
 6931              	.LBB1314:
 6932              	.LBB1294:
 6933              	.LBB1290:
 6934              	.LBB1286:
 6935              	.LBB1287:
 191:/usr/include/ctype.h **** __isctype_f (upper)
 192:/usr/include/ctype.h **** __isctype_f (xdigit)
 6936              		.loc 3 192 0
 6937 052e 410FB648 		movzbl	2(%r8), %ecx
 6937      02
 6938              	.LBE1287:
 6939              	.LBE1286:
1070:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1010:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Widget::as_group(), Fl_Widget::as_window()
 6940              		.loc 2 1070 0
 6941 0533 498D4002 		leaq	2(%r8), %rax
 6942              	.LVL843:
1071:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6943              		.loc 2 1071 0
 6944 0537 F6444A01 		testb	$16, 1(%rdx,%rcx,2)
 6944      10
 6945 053c 751C     		jne	.L777
 6946 053e E944FCFF 		jmp	.L721
 6946      FF
 6947              		.p2align 4,,10
 6948 0543 0F1F4400 		.p2align 3
 6948      00
 6949              	.L798:
1071:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6950              		.loc 2 1071 0 is_stmt 0 discriminator 2
 6951 0548 4883C001 		addq	$1, %rax
 6952              	.LVL844:
 6953              	.LBB1289:
 6954              	.LBB1288:
 6955              		.loc 3 192 0 is_stmt 1 discriminator 2
 6956 054c 0FB608   		movzbl	(%rax), %ecx
 6957              	.LBE1288:
 6958              	.LBE1289:
1071:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6959              		.loc 2 1071 0 discriminator 2
 6960 054f F6444A01 		testb	$16, 1(%rdx,%rcx,2)
 6960      10
 6961 0554 0F842DFC 		je	.L721
 6961      FFFF
 6962              	.L777:
1071:fltk-1.3.4-1/src/Fl_Input_.cxx **** 1011:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 6963              		.loc 2 1071 0 is_stmt 0
 6964 055a 4839E8   		cmpq	%rbp, %rax
 6965 055d 72E9     		jb	.L798
 6966 055f E923FCFF 		jmp	.L721
 6966      FF
 6967              	.LVL845:
 6968              	.L790:
 6969              	.LBE1290:
 6970              	.LBB1291:
 6971              	.LBB1284:
1085:fltk-1.3.4-1/src/Fl_Input_.cxx ****   80              		.section	.text.unlikely._ZL17strict_word_startPKcii,"ax",@progbits
 6972              		.loc 2 1085 0 is_stmt 1
 6973 0564 488D5001 		leaq	1(%rax), %rdx
 6974              	.LVL846:
1086:fltk-1.3.4-1/src/Fl_Input_.cxx ****   81              	.LCOLDB3:
 6975              		.loc 2 1086 0
 6976 0568 0FB64001 		movzbl	1(%rax), %eax
 6977 056c 89C1     		movl	%eax, %ecx
 6978 056e 83E830   		subl	$48, %eax
 6979 0571 83F809   		cmpl	$9, %eax
 6980 0574 761B     		jbe	.L783
 6981 0576 EB1E     		jmp	.L741
 6982 0578 0F1F8400 		.p2align 4,,10
 6982      00000000 
 6983              		.p2align 3
 6984              	.L799:
1086:fltk-1.3.4-1/src/Fl_Input_.cxx ****   81              	.LCOLDB3:
 6985              		.loc 2 1086 0 is_stmt 0 discriminator 2
 6986 0580 4883C201 		addq	$1, %rdx
 6987              	.LVL847:
 6988 0584 0FB602   		movzbl	(%rdx), %eax
 6989 0587 89C1     		movl	%eax, %ecx
 6990 0589 83E830   		subl	$48, %eax
 6991 058c 83F809   		cmpl	$9, %eax
 6992 058f 7705     		ja	.L741
 6993              	.L783:
1086:fltk-1.3.4-1/src/Fl_Input_.cxx ****   81              	.LCOLDB3:
 6994              		.loc 2 1086 0
 6995 0591 4839EA   		cmpq	%rbp, %rdx
 6996 0594 72EA     		jb	.L799
 6997              	.L741:
1087:fltk-1.3.4-1/src/Fl_Input_.cxx ****   82              		.section	.text._ZL17strict_word_startPKcii,"ax",@progbits
 6998              		.loc 2 1087 0 is_stmt 1
 6999 0596 83E1DF   		andl	$-33, %ecx
1085:fltk-1.3.4-1/src/Fl_Input_.cxx ****   80              		.section	.text.unlikely._ZL17strict_word_startPKcii,"ax",@progbits
 7000              		.loc 2 1085 0
 7001 0599 4889D0   		movq	%rdx, %rax
1087:fltk-1.3.4-1/src/Fl_Input_.cxx ****   82              		.section	.text._ZL17strict_word_startPKcii,"ax",@progbits
 7002              		.loc 2 1087 0
 7003 059c 80F945   		cmpb	$69, %cl
 7004 059f 0F85E2FB 		jne	.L721
 7004      FFFF
 7005              	.LVL848:
1089:fltk-1.3.4-1/src/Fl_Input_.cxx ****   84              		.p2align 4,,15
 7006              		.loc 2 1089 0
 7007 05a5 0FB64201 		movzbl	1(%rdx), %eax
 7008              	.LVL849:
 7009 05a9 8D48D5   		leal	-43(%rax), %ecx
1088:fltk-1.3.4-1/src/Fl_Input_.cxx ****   83              	.LHOTB3:
 7010              		.loc 2 1088 0
 7011 05ac 488D4201 		leaq	1(%rdx), %rax
 7012              	.LVL850:
 7013 05b0 4883C202 		addq	$2, %rdx
 7014 05b4 81E1FD00 		andl	$253, %ecx
 7014      0000
 7015 05ba 480F44C2 		cmove	%rdx, %rax
 7016              	.LVL851:
1090:fltk-1.3.4-1/src/Fl_Input_.cxx ****   86              	_ZL17strict_word_startPKcii:
 7017              		.loc 2 1090 0
 7018 05be 0FB610   		movzbl	(%rax), %edx
 7019 05c1 83EA30   		subl	$48, %edx
 7020 05c4 83FA09   		cmpl	$9, %edx
 7021 05c7 761A     		jbe	.L778
 7022 05c9 E9B9FBFF 		jmp	.L721
 7022      FF
 7023 05ce 6690     		.p2align 4,,10
 7024              		.p2align 3
 7025              	.L800:
1090:fltk-1.3.4-1/src/Fl_Input_.cxx ****   86              	_ZL17strict_word_startPKcii:
 7026              		.loc 2 1090 0 is_stmt 0 discriminator 2
 7027 05d0 4883C001 		addq	$1, %rax
 7028              	.LVL852:
 7029 05d4 0FB610   		movzbl	(%rax), %edx
 7030 05d7 83EA30   		subl	$48, %edx
 7031 05da 83FA09   		cmpl	$9, %edx
 7032 05dd 0F87A4FB 		ja	.L721
 7032      FFFF
 7033              	.L778:
1090:fltk-1.3.4-1/src/Fl_Input_.cxx ****   86              	_ZL17strict_word_startPKcii:
 7034              		.loc 2 1090 0 discriminator 3
 7035 05e3 4839E8   		cmpq	%rbp, %rax
 7036 05e6 72E8     		jb	.L800
 7037 05e8 E99AFBFF 		jmp	.L721
 7037      FF
 7038              	.LVL853:
 7039              	.L739:
 7040              	.LBE1284:
 7041              	.LBE1291:
 7042              	.LBB1292:
1073:fltk-1.3.4-1/src/Fl_Input_.cxx ****   67              		.loc 1 1012 0
 7043              		.loc 2 1073 0 is_stmt 1
 7044 05ed 4C89C0   		movq	%r8, %rax
 7045              	.LVL854:
 7046 05f0 E992FBFF 		jmp	.L721
 7046      FF
 7047              	.LBE1292:
 7048              	.LBE1294:
 7049              	.LBE1314:
 7050              	.LBE1320:
 7051              	.LBE1328:
 7052              		.cfi_endproc
 7053              	.LFE542:
 7055              		.section	.text.unlikely._ZN9Fl_Input_10handletextEiiiii
 7056              	.LCOLDE38:
 7057              		.section	.text._ZN9Fl_Input_10handletextEiiiii
 7058              	.LHOTE38:
 7059              		.section	.text.unlikely._ZN9Fl_Input_4undoEv,"ax",@progbits
 7060              		.align 2
 7061              	.LCOLDB39:
 7062              		.section	.text._ZN9Fl_Input_4undoEv,"ax",@progbits
 7063              	.LHOTB39:
 7064              		.align 2
 7065              		.p2align 4,,15
 7066              		.globl	_ZN9Fl_Input_4undoEv
 7068              	_ZN9Fl_Input_4undoEv:
 7069              	.LFB539:
 927:fltk-1.3.4-1/src/Fl_Input_.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 7070              		.loc 2 927 0
 7071              		.cfi_startproc
 7072              	.LVL855:
 7073 0000 4157     		pushq	%r15
 7074              		.cfi_def_cfa_offset 16
 7075              		.cfi_offset 15, -16
 7076 0002 4156     		pushq	%r14
 7077              		.cfi_def_cfa_offset 24
 7078              		.cfi_offset 14, -24
 7079 0004 4155     		pushq	%r13
 7080              		.cfi_def_cfa_offset 32
 7081              		.cfi_offset 13, -32
 7082 0006 4154     		pushq	%r12
 7083              		.cfi_def_cfa_offset 40
 7084              		.cfi_offset 12, -40
 929:fltk-1.3.4-1/src/Fl_Input_.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 7085              		.loc 2 929 0
 7086 0008 4531E4   		xorl	%r12d, %r12d
 927:fltk-1.3.4-1/src/Fl_Input_.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 7087              		.loc 2 927 0
 7088 000b 55       		pushq	%rbp
 7089              		.cfi_def_cfa_offset 48
 7090              		.cfi_offset 6, -48
 7091 000c 53       		pushq	%rbx
 7092              		.cfi_def_cfa_offset 56
 7093              		.cfi_offset 3, -56
 7094 000d 4883EC28 		subq	$40, %rsp
 7095              		.cfi_def_cfa_offset 96
 929:fltk-1.3.4-1/src/Fl_Input_.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 7096              		.loc 2 929 0
 7097 0011 488B1D00 		movq	_ZL10undowidget(%rip), %rbx
 7097      000000
 928:fltk-1.3.4-1/src/Fl_Input_.cxx ****  912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widge
 7098              		.loc 2 928 0
 7099 0018 C7050000 		movl	$0, _ZN9Fl_Input_11was_up_downE(%rip)
 7099      00000000 
 7099      0000
 927:fltk-1.3.4-1/src/Fl_Input_.cxx ****  911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 7100              		.loc 2 927 0
 7101 0022 64488B04 		movq	%fs:40, %rax
 7101      25280000 
 7101      00
 7102 002b 48894424 		movq	%rax, 24(%rsp)
 7102      18
 7103 0030 31C0     		xorl	%eax, %eax
 929:fltk-1.3.4-1/src/Fl_Input_.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 7104              		.loc 2 929 0
 7105 0032 4839FB   		cmpq	%rdi, %rbx
 7106 0035 7429     		je	.L826
 7107              	.LVL856:
 7108              	.L802:
 965:fltk-1.3.4-1/src/Fl_Input_.cxx ****  949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7109              		.loc 2 965 0
 7110 0037 488B4C24 		movq	24(%rsp), %rcx
 7110      18
 7111 003c 6448330C 		xorq	%fs:40, %rcx
 7111      25280000 
 7111      00
 7112 0045 4489E0   		movl	%r12d, %eax
 7113 0048 0F85D301 		jne	.L827
 7113      0000
 7114 004e 4883C428 		addq	$40, %rsp
 7115              		.cfi_remember_state
 7116              		.cfi_def_cfa_offset 56
 7117 0052 5B       		popq	%rbx
 7118              		.cfi_def_cfa_offset 48
 7119 0053 5D       		popq	%rbp
 7120              		.cfi_def_cfa_offset 40
 7121 0054 415C     		popq	%r12
 7122              		.cfi_def_cfa_offset 32
 7123 0056 415D     		popq	%r13
 7124              		.cfi_def_cfa_offset 24
 7125 0058 415E     		popq	%r14
 7126              		.cfi_def_cfa_offset 16
 7127 005a 415F     		popq	%r15
 7128              		.cfi_def_cfa_offset 8
 7129 005c C3       		ret
 7130              	.LVL857:
 7131 005d 0F1F00   		.p2align 4,,10
 7132              		.p2align 3
 7133              	.L826:
 7134              		.cfi_restore_state
 929:fltk-1.3.4-1/src/Fl_Input_.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 7135              		.loc 2 929 0 discriminator 2
 7136 0060 448B2500 		movl	_ZL7undocut(%rip), %r12d
 7136      000000
 7137 0067 448B2D00 		movl	_ZL10undoinsert(%rip), %r13d
 7137      000000
 7138 006e 4585E4   		testl	%r12d, %r12d
 7139 0071 0F852901 		jne	.L803
 7139      0000
 929:fltk-1.3.4-1/src/Fl_Input_.cxx ****  913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 7140              		.loc 2 929 0 is_stmt 0 discriminator 3
 7141 0077 4585ED   		testl	%r13d, %r13d
 7142 007a 74BB     		je	.L802
 7143              	.LVL858:
 933:fltk-1.3.4-1/src/Fl_Input_.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 7144              		.loc 2 933 0 is_stmt 1
 7145 007c 8B2D0000 		movl	_ZL6undoat(%rip), %ebp
 7145      0000
 936:fltk-1.3.4-1/src/Fl_Input_.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 7146              		.loc 2 936 0
 7147 0082 8BB38800 		movl	136(%rbx), %esi
 7147      0000
 7148 0088 4889DF   		movq	%rbx, %rdi
 7149              	.LVL859:
 933:fltk-1.3.4-1/src/Fl_Input_.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 7150              		.loc 2 933 0
 7151 008b 4429ED   		subl	%r13d, %ebp
 7152              	.LVL860:
 7153 008e 4189EE   		movl	%ebp, %r14d
 936:fltk-1.3.4-1/src/Fl_Input_.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 7154              		.loc 2 936 0
 7155 0091 E8000000 		call	_ZN9Fl_Input_13put_in_bufferEi
 7155      00
 7156              	.LVL861:
 7157              	.L808:
 946:fltk-1.3.4-1/src/Fl_Input_.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7158              		.loc 2 946 0
 7159 0096 4489EF   		movl	%r13d, %edi
 947:fltk-1.3.4-1/src/Fl_Input_.cxx ****  931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 7160              		.loc 2 947 0
 7161 0099 4D63FD   		movslq	%r13d, %r15
 946:fltk-1.3.4-1/src/Fl_Input_.cxx ****  930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7162              		.loc 2 946 0
 7163 009c E8000000 		call	_ZL14undobuffersizei
 7163      00
 7164              	.LVL862:
 947:fltk-1.3.4-1/src/Fl_Input_.cxx ****  931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 7165              		.loc 2 947 0
 7166 00a1 4963CE   		movslq	%r14d, %rcx
 7167              	.LVL863:
 7168              	.LBB1329:
 7169              	.LBB1330:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 7170              		.loc 8 53 0
 7171 00a4 488B3D00 		movq	_ZL10undobuffer(%rip), %rdi
 7171      000000
 7172 00ab 4C89FA   		movq	%r15, %rdx
 7173 00ae 4889CE   		movq	%rcx, %rsi
 7174 00b1 4803B380 		addq	128(%rbx), %rsi
 7174      000000
 7175              	.LVL864:
 7176 00b8 48894C24 		movq	%rcx, 8(%rsp)
 7176      08
 7177 00bd E8000000 		call	memcpy
 7177      00
 7178              	.LVL865:
 7179              	.LBE1330:
 7180              	.LBE1329:
 7181              	.LBB1331:
 7182              	.LBB1332:
 7183              		.loc 8 59 0
 7184 00c2 8B938800 		movl	136(%rbx), %edx
 7184      0000
 7185 00c8 488B4C24 		movq	8(%rsp), %rcx
 7185      08
 7186              	.LBE1332:
 7187              	.LBE1331:
 948:fltk-1.3.4-1/src/Fl_Input_.cxx ****  932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7188              		.loc 2 948 0
 7189 00cd 488BBB80 		movq	128(%rbx), %rdi
 7189      000000
 7190              	.LVL866:
 7191              	.LBB1334:
 7192              	.LBB1333:
 7193              		.loc 8 59 0
 7194 00d4 4429EA   		subl	%r13d, %edx
 7195              	.LVL867:
 7196 00d7 498D340F 		leaq	(%r15,%rcx), %rsi
 7197 00db 4429F2   		subl	%r14d, %edx
 7198 00de 83C201   		addl	$1, %edx
 7199 00e1 4801FE   		addq	%rdi, %rsi
 7200 00e4 4801CF   		addq	%rcx, %rdi
 7201              	.LVL868:
 7202 00e7 4863D2   		movslq	%edx, %rdx
 7203 00ea E8000000 		call	memmove
 7203      00
 7204              	.LVL869:
 7205              	.LBE1333:
 7206              	.LBE1334:
 949:fltk-1.3.4-1/src/Fl_Input_.cxx ****  933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 7207              		.loc 2 949 0
 7208 00ef 4429AB88 		subl	%r13d, 136(%rbx)
 7208      000000
 952:fltk-1.3.4-1/src/Fl_Input_.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 7209              		.loc 2 952 0
 7210 00f6 44892D00 		movl	%r13d, _ZL7undocut(%rip)
 7210      000000
 953:fltk-1.3.4-1/src/Fl_Input_.cxx ****  937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7211              		.loc 2 953 0
 7212 00fd 44892D00 		movl	%r13d, _ZL7yankcut(%rip)
 7212      000000
 7213              	.L809:
 959:fltk-1.3.4-1/src/Fl_Input_.cxx ****  943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 7214              		.loc 2 959 0
 7215 0104 F6436C10 		testb	$16, 108(%rbx)
 954:fltk-1.3.4-1/src/Fl_Input_.cxx ****  938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 7216              		.loc 2 954 0
 7217 0108 44892500 		movl	%r12d, _ZL10undoinsert(%rip)
 7217      000000
 955:fltk-1.3.4-1/src/Fl_Input_.cxx ****  939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7218              		.loc 2 955 0
 7219 010f 44893500 		movl	%r14d, _ZL6undoat(%rip)
 7219      000000
 956:fltk-1.3.4-1/src/Fl_Input_.cxx ****  940:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for an area inside the widget.
 7220              		.loc 2 956 0
 7221 0116 4489B394 		movl	%r14d, 148(%rbx)
 7221      000000
 957:fltk-1.3.4-1/src/Fl_Input_.cxx ****  941:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the ne
 7222              		.loc 2 957 0
 7223 011d 4489B390 		movl	%r14d, 144(%rbx)
 7223      000000
 7224              	.LVL870:
 959:fltk-1.3.4-1/src/Fl_Input_.cxx ****  943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 7225              		.loc 2 959 0
 7226 0124 743B     		je	.L805
 960:fltk-1.3.4-1/src/Fl_Input_.cxx ****  944:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 7227              		.loc 2 960 0 discriminator 8
 7228 0126 85ED     		testl	%ebp, %ebp
 7229 0128 7E37     		jle	.L805
 7230 012a 4C63E5   		movslq	%ebp, %r12
 7231 012d 0F1F00   		.p2align 4,,10
 7232              		.p2align 3
 7233              	.L810:
 7234              	.LVL871:
 7235              	.LBB1335:
 7236              	.LBB1336:
 7237              		.loc 2 1337 0
 7238 0130 4863B388 		movslq	136(%rbx), %rsi
 7238      000000
 7239 0137 488B7B78 		movq	120(%rbx), %rdi
 7240 013b 488D5424 		leaq	20(%rsp), %rdx
 7240      14
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7241              		.loc 2 1336 0
 7242 0140 C7442414 		movl	$0, 20(%rsp)
 7242      00000000 
 7243              		.loc 2 1337 0
 7244 0148 4801FE   		addq	%rdi, %rsi
 7245 014b 4C01E7   		addq	%r12, %rdi
 7246 014e E8000000 		call	fl_utf8decode
 7246      00
 7247              	.LVL872:
 7248              	.LBE1336:
 7249              	.LBE1335:
 960:fltk-1.3.4-1/src/Fl_Input_.cxx ****  944:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 7250              		.loc 2 960 0
 7251 0153 83F80A   		cmpl	$10, %eax
 7252 0156 7409     		je	.L805
 7253              	.LVL873:
 7254 0158 4983EC01 		subq	$1, %r12
 7255 015c 83ED01   		subl	$1, %ebp
 7256              	.LVL874:
 7257 015f 75CF     		jne	.L810
 7258              	.L805:
 961:fltk-1.3.4-1/src/Fl_Input_.cxx ****  945:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7259              		.loc 2 961 0
 7260 0161 89EE     		movl	%ebp, %esi
 7261 0163 4889DF   		movq	%rbx, %rdi
 964:fltk-1.3.4-1/src/Fl_Input_.cxx ****  948:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int, Fl_Align) const;
 7262              		.loc 2 964 0
 7263 0166 41BC0100 		movl	$1, %r12d
 7263      0000
 961:fltk-1.3.4-1/src/Fl_Input_.cxx ****  945:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7264              		.loc 2 961 0
 7265 016c E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 7265      00
 7266              	.LVL875:
 7267              	.LBB1337:
 7268              	.LBB1338:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7269              		.loc 1 786 0
 7270 0171 814B6080 		orl	$128, 96(%rbx)
 7270      000000
 7271              	.LVL876:
 7272              	.LBE1338:
 7273              	.LBE1337:
 963:fltk-1.3.4-1/src/Fl_Input_.cxx ****  947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7274              		.loc 2 963 0
 7275 0178 F6436F01 		testb	$1, 111(%rbx)
 7276 017c 0F84B5FE 		je	.L802
 7276      FFFF
 7277              	.LVL877:
 7278              	.LBB1339:
 7279              	.LBB1340:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7280              		.loc 1 861 0 discriminator 1
 7281 0182 488B5318 		movq	24(%rbx), %rdx
 7282 0186 4889DE   		movq	%rbx, %rsi
 7283 0189 4889DF   		movq	%rbx, %rdi
 7284 018c E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 7284      00
 7285              	.LVL878:
 7286 0191 E9A1FEFF 		jmp	.L802
 7286      FF
 7287              	.LVL879:
 7288 0196 662E0F1F 		.p2align 4,,10
 7288      84000000 
 7288      0000
 7289              		.p2align 3
 7290              	.L803:
 7291              	.LBE1340:
 7292              	.LBE1339:
 936:fltk-1.3.4-1/src/Fl_Input_.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 7293              		.loc 2 936 0
 7294 01a0 8BB38800 		movl	136(%rbx), %esi
 7294      0000
 933:fltk-1.3.4-1/src/Fl_Input_.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 7295              		.loc 2 933 0
 7296 01a6 8B2D0000 		movl	_ZL6undoat(%rip), %ebp
 7296      0000
 936:fltk-1.3.4-1/src/Fl_Input_.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 7297              		.loc 2 936 0
 7298 01ac 4889DF   		movq	%rbx, %rdi
 7299              	.LVL880:
 939:fltk-1.3.4-1/src/Fl_Input_.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 7300              		.loc 2 939 0
 7301 01af 4D63FC   		movslq	%r12d, %r15
 936:fltk-1.3.4-1/src/Fl_Input_.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 7302              		.loc 2 936 0
 7303 01b2 4401E6   		addl	%r12d, %esi
 933:fltk-1.3.4-1/src/Fl_Input_.cxx ****  917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 7304              		.loc 2 933 0
 7305 01b5 4429ED   		subl	%r13d, %ebp
 7306              	.LVL881:
 936:fltk-1.3.4-1/src/Fl_Input_.cxx ****  920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawi
 7307              		.loc 2 936 0
 7308 01b8 E8000000 		call	_ZN9Fl_Input_13put_in_bufferEi
 7308      00
 7309              	.LVL882:
 7310              	.LBB1341:
 7311              	.LBB1342:
 7312              		.loc 8 59 0
 7313 01bd 8B838800 		movl	136(%rbx), %eax
 7313      0000
 7314              	.LBE1342:
 7315              	.LBE1341:
 939:fltk-1.3.4-1/src/Fl_Input_.cxx ****  923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that ar
 7316              		.loc 2 939 0
 7317 01c3 488BBB80 		movq	128(%rbx), %rdi
 7317      000000
 7318 01ca 4C63F5   		movslq	%ebp, %r14
 7319              	.LVL883:
 7320              	.LBB1344:
 7321              	.LBB1343:
 7322              		.loc 8 59 0
 7323 01cd 29E8     		subl	%ebp, %eax
 7324 01cf 4A8D3437 		leaq	(%rdi,%r14), %rsi
 7325              	.LVL884:
 7326 01d3 83C001   		addl	$1, %eax
 7327 01d6 4863D0   		movslq	%eax, %rdx
 7328 01d9 4B8D043E 		leaq	(%r14,%r15), %rax
 7329 01dd 4801C7   		addq	%rax, %rdi
 7330 01e0 E8000000 		call	memmove
 7330      00
 7331              	.LVL885:
 7332              	.LBE1343:
 7333              	.LBE1344:
 7334              	.LBB1345:
 7335              	.LBB1346:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 7336              		.loc 8 53 0
 7337 01e5 4C89F7   		movq	%r14, %rdi
 7338 01e8 4803BB80 		addq	128(%rbx), %rdi
 7338      000000
 7339              	.LVL886:
 7340 01ef 488B3500 		movq	_ZL10undobuffer(%rip), %rsi
 7340      000000
 7341 01f6 4C89FA   		movq	%r15, %rdx
 7342              	.LBE1346:
 7343              	.LBE1345:
 942:fltk-1.3.4-1/src/Fl_Input_.cxx ****  926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 7344              		.loc 2 942 0
 7345 01f9 458D342C 		leal	(%r12,%rbp), %r14d
 7346              	.LBB1348:
 7347              	.LBB1347:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 7348              		.loc 8 53 0
 7349 01fd E8000000 		call	memcpy
 7349      00
 7350              	.LVL887:
 7351              	.LBE1347:
 7352              	.LBE1348:
 941:fltk-1.3.4-1/src/Fl_Input_.cxx ****  925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with 
 7353              		.loc 2 941 0
 7354 0202 4401A388 		addl	%r12d, 136(%rbx)
 7354      000000
 945:fltk-1.3.4-1/src/Fl_Input_.cxx ****  929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 7355              		.loc 2 945 0
 7356 0209 4585ED   		testl	%r13d, %r13d
 7357 020c 0F8584FE 		jne	.L808
 7357      FFFF
 952:fltk-1.3.4-1/src/Fl_Input_.cxx ****  936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 7358              		.loc 2 952 0
 7359 0212 C7050000 		movl	$0, _ZL7undocut(%rip)
 7359      00000000 
 7359      0000
 7360 021c E9E3FEFF 		jmp	.L809
 7360      FF
 7361              	.LVL888:
 7362              	.L827:
 965:fltk-1.3.4-1/src/Fl_Input_.cxx ****  949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7363              		.loc 2 965 0
 7364 0221 E8000000 		call	__stack_chk_fail
 7364      00
 7365              	.LVL889:
 7366              		.cfi_endproc
 7367              	.LFE539:
 7369              		.section	.text.unlikely._ZN9Fl_Input_4undoEv
 7370              	.LCOLDE39:
 7371              		.section	.text._ZN9Fl_Input_4undoEv
 7372              	.LHOTE39:
 7373              		.section	.text.unlikely._ZN9Fl_Input_12static_valueEPKci,"ax",@progbits
 7374              		.align 2
 7375              	.LCOLDB40:
 7376              		.section	.text._ZN9Fl_Input_12static_valueEPKci,"ax",@progbits
 7377              	.LHOTB40:
 7378              		.align 2
 7379              		.p2align 4,,15
 7380              		.globl	_ZN9Fl_Input_12static_valueEPKci
 7382              	_ZN9Fl_Input_12static_valueEPKci:
 7383              	.LFB547:
1204:fltk-1.3.4-1/src/Fl_Input_.cxx ****  112:fltk-1.3.4-1/src/Fl_Input_.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented 
 7384              		.loc 2 1204 0
 7385              		.cfi_startproc
 7386              	.LVL890:
 7387 0000 4154     		pushq	%r12
 7388              		.cfi_def_cfa_offset 16
 7389              		.cfi_offset 12, -16
 7390 0002 55       		pushq	%rbp
 7391              		.cfi_def_cfa_offset 24
 7392              		.cfi_offset 6, -24
 7393 0003 53       		pushq	%rbx
 7394              		.cfi_def_cfa_offset 32
 7395              		.cfi_offset 3, -32
 7396              	.LBB1349:
 7397              	.LBB1350:
 791:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7398              		.loc 1 791 0
 7399 0004 8167607F 		andl	$-129, 96(%rdi)
 7399      FFFFFF
 7400              	.LBE1350:
 7401              	.LBE1349:
1206:fltk-1.3.4-1/src/Fl_Input_.cxx ****  114:fltk-1.3.4-1/src/Fl_Input_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods 
 7402              		.loc 2 1206 0
 7403 000b 483B3D00 		cmpq	_ZL10undowidget(%rip), %rdi
 7403      000000
 7404 0012 0F842801 		je	.L853
 7404      0000
1207:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/src/Fl_Input_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even 
 7405              		.loc 2 1207 0
 7406 0018 4C8B4778 		movq	120(%rdi), %r8
 7407 001c 4939F0   		cmpq	%rsi, %r8
 7408 001f 0F843B01 		je	.L854
 7408      0000
 7409              	.L830:
 7410              	.LBB1351:
1208:fltk-1.3.4-1/src/Fl_Input_.cxx ****  116:fltk-1.3.4-1/src/Fl_Input_.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to cal
 7411              		.loc 2 1208 0
 7412 0025 85D2     		testl	%edx, %edx
 7413 0027 89D5     		movl	%edx, %ebp
 7414 0029 4989F4   		movq	%rsi, %r12
 7415 002c 4889FB   		movq	%rdi, %rbx
 7416 002f 747F     		je	.L832
 7417              	.LVL891:
 7418              	.LBB1352:
 7419              	.LBB1353:
1209:fltk-1.3.4-1/src/Fl_Input_.cxx ****  117:fltk-1.3.4-1/src/Fl_Input_.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 7420              		.loc 2 1209 0
 7421 0031 8B879C00 		movl	156(%rdi), %eax
 7421      0000
 7422 0037 85C0     		testl	%eax, %eax
 7423 0039 0F858100 		jne	.L833
 7423      0000
1209:fltk-1.3.4-1/src/Fl_Input_.cxx ****  117:fltk-1.3.4-1/src/Fl_Input_.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 7424              		.loc 2 1209 0 is_stmt 0 discriminator 1
 7425 003f 8B87A000 		movl	160(%rdi), %eax
 7425      0000
 7426 0045 85C0     		testl	%eax, %eax
 7427 0047 7577     		jne	.L833
 7428              	.LVL892:
 7429              	.LBB1354:
1215:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/src/Fl_Input_.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 7430              		.loc 2 1215 0 is_stmt 1
 7431 0049 4D85C0   		testq	%r8, %r8
 7432 004c 0F842E01 		je	.L846
 7432      0000
1216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 7433              		.loc 2 1216 0 discriminator 4
 7434 0052 8BBF8800 		movl	136(%rdi), %edi
 7434      0000
 7435 0058 85FF     		testl	%edi, %edi
 7436 005a 0F8E2001 		jle	.L846
 7436      0000
1216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 7437              		.loc 2 1216 0 is_stmt 0
 7438 0060 85D2     		testl	%edx, %edx
 7439 0062 0F8E1801 		jle	.L846
 7439      0000
 7440 0068 0FB60E   		movzbl	(%rsi), %ecx
 7441 006b 413808   		cmpb	%cl, (%r8)
 7442 006e 0F850C01 		jne	.L846
 7442      0000
 7443 0074 31C9     		xorl	%ecx, %ecx
 7444 0076 31F6     		xorl	%esi, %esi
 7445              	.LVL893:
 7446 0078 EB1E     		jmp	.L838
 7447              	.LVL894:
 7448 007a 660F1F44 		.p2align 4,,10
 7448      0000
 7449              		.p2align 3
 7450              	.L839:
1216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 7451              		.loc 2 1216 0 discriminator 1
 7452 0080 39F5     		cmpl	%esi, %ebp
 7453 0082 0F84F000 		je	.L847
 7453      0000
1216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 7454              		.loc 2 1216 0 discriminator 2
 7455 0088 410FB654 		movzbl	1(%r12,%rcx), %edx
 7455      0C01
 7456 008e 4883C101 		addq	$1, %rcx
 7457 0092 413A1408 		cmpb	(%r8,%rcx), %dl
 7458 0096 750B     		jne	.L836
 7459              	.LVL895:
 7460              	.L838:
1216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  124:fltk-1.3.4-1/src/Fl_Input_.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 7461              		.loc 2 1216 0 discriminator 3
 7462 0098 83C601   		addl	$1, %esi
 7463              	.LVL896:
 7464 009b 39FE     		cmpl	%edi, %esi
 7465 009d 75E1     		jne	.L839
1217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  125:fltk-1.3.4-1/src/Fl_Input_.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 7466              		.loc 2 1217 0 is_stmt 1 discriminator 1
 7467 009f 39F5     		cmpl	%esi, %ebp
 7468 00a1 7417     		je	.L831
 7469              	.LVL897:
 7470              	.L836:
1219:fltk-1.3.4-1/src/Fl_Input_.cxx ****  127:fltk-1.3.4-1/src/Fl_Input_.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 7471              		.loc 2 1219 0
 7472 00a3 4889DF   		movq	%rbx, %rdi
 7473 00a6 E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 7473      00
 7474              	.LVL898:
 7475 00ab EB31     		jmp	.L835
 7476              	.LVL899:
 7477 00ad 0F1F00   		.p2align 4,,10
 7478              		.p2align 3
 7479              	.L832:
 7480              	.LBE1354:
 7481              	.LBE1353:
 7482              	.LBE1352:
1224:fltk-1.3.4-1/src/Fl_Input_.cxx ****  132:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 7483              		.loc 2 1224 0
 7484 00b0 8B878800 		movl	136(%rdi), %eax
 7484      0000
 7485 00b6 85C0     		testl	%eax, %eax
 7486 00b8 7556     		jne	.L855
 7487              	.LVL900:
 7488              	.L831:
 7489              	.LBE1351:
1232:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7490              		.loc 2 1232 0
 7491 00ba 5B       		popq	%rbx
 7492              		.cfi_remember_state
 7493              		.cfi_def_cfa_offset 24
 7494 00bb 5D       		popq	%rbp
 7495              		.cfi_def_cfa_offset 16
 7496 00bc 415C     		popq	%r12
 7497              		.cfi_def_cfa_offset 8
 7498 00be C3       		ret
 7499              	.LVL901:
 7500 00bf 90       		.p2align 4,,10
 7501              		.p2align 3
 7502              	.L833:
 7503              		.cfi_restore_state
 7504              	.LBB1360:
 7505              	.LBB1358:
 7506              	.LBB1356:
1210:fltk-1.3.4-1/src/Fl_Input_.cxx ****  118:fltk-1.3.4-1/src/Fl_Input_.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_W
 7507              		.loc 2 1210 0
 7508 00c0 C783A000 		movl	$0, 160(%rbx)
 7508      00000000 
 7508      0000
 7509 00ca C7839C00 		movl	$0, 156(%rbx)
 7509      00000000 
 7509      0000
1211:fltk-1.3.4-1/src/Fl_Input_.cxx ****  119:fltk-1.3.4-1/src/Fl_Input_.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Gr
 7510              		.loc 2 1211 0
 7511 00d4 31F6     		xorl	%esi, %esi
 7512              	.LVL902:
 7513 00d6 4889DF   		movq	%rbx, %rdi
 7514 00d9 E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 7514      00
 7515              	.LVL903:
 7516              	.L835:
 7517              	.LBE1356:
1221:fltk-1.3.4-1/src/Fl_Input_.cxx ****  129:fltk-1.3.4-1/src/Fl_Input_.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 7518              		.loc 2 1221 0
 7519 00de 4C896378 		movq	%r12, 120(%rbx)
1222:fltk-1.3.4-1/src/Fl_Input_.cxx ****  130:fltk-1.3.4-1/src/Fl_Input_.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 7520              		.loc 2 1222 0
 7521 00e2 89AB8800 		movl	%ebp, 136(%rbx)
 7521      0000
 7522              	.L840:
 7523              	.LVL904:
 7524              	.LBE1358:
 7525              	.LBE1360:
1230:fltk-1.3.4-1/src/Fl_Input_.cxx ****  138:fltk-1.3.4-1/src/Fl_Input_.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented 
 7526              		.loc 2 1230 0
 7527 00e8 31F6     		xorl	%esi, %esi
 7528 00ea F6436C08 		testb	$8, 108(%rbx)
 7529 00ee 7506     		jne	.L841
 7530 00f0 8BB38800 		movl	136(%rbx), %esi
 7530      0000
 7531              	.LVL905:
 7532              	.L841:
 7533              	.LBB1361:
 7534              	.LBB1362:
 298:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 7535              		.loc 7 298 0 discriminator 4
 7536 00f6 4889DF   		movq	%rbx, %rdi
 7537 00f9 89F2     		movl	%esi, %edx
 7538 00fb E8000000 		call	_ZN9Fl_Input_8positionEii
 7538      00
 7539              	.LVL906:
 7540              	.LBE1362:
 7541              	.LBE1361:
1232:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7542              		.loc 2 1232 0 discriminator 4
 7543 0100 5B       		popq	%rbx
 7544              		.cfi_remember_state
 7545              		.cfi_def_cfa_offset 24
 7546              	.LVL907:
1231:fltk-1.3.4-1/src/Fl_Input_.cxx ****  139:fltk-1.3.4-1/src/Fl_Input_.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operato
 7547              		.loc 2 1231 0 discriminator 4
 7548 0101 B8010000 		movl	$1, %eax
 7548      00
1232:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/src/Fl_Input_.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7549              		.loc 2 1232 0 discriminator 4
 7550 0106 5D       		popq	%rbp
 7551              		.cfi_def_cfa_offset 16
 7552              	.LVL908:
 7553 0107 415C     		popq	%r12
 7554              		.cfi_def_cfa_offset 8
 7555              	.LVL909:
 7556 0109 C3       		ret
 7557              	.LVL910:
 7558 010a 660F1F44 		.p2align 4,,10
 7558      0000
 7559              		.p2align 3
 7560              	.L855:
 7561              		.cfi_restore_state
 7562              	.LBB1363:
1225:fltk-1.3.4-1/src/Fl_Input_.cxx ****  133:fltk-1.3.4-1/src/Fl_Input_.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7563              		.loc 2 1225 0
 7564 0110 C7878800 		movl	$0, 136(%rdi)
 7564      00000000 
 7564      0000
1226:fltk-1.3.4-1/src/Fl_Input_.cxx ****  134:fltk-1.3.4-1/src/Fl_Input_.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *toolti
 7565              		.loc 2 1226 0
 7566 011a 48C74778 		movq	$.LC33, 120(%rdi)
 7566      00000000 
1228:fltk-1.3.4-1/src/Fl_Input_.cxx ****  136:fltk-1.3.4-1/src/Fl_Input_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented 
 7567              		.loc 2 1228 0
 7568 0122 31F6     		xorl	%esi, %esi
 7569              	.LVL911:
1227:fltk-1.3.4-1/src/Fl_Input_.cxx ****  135:fltk-1.3.4-1/src/Fl_Input_.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7570              		.loc 2 1227 0
 7571 0124 C787A000 		movl	$0, 160(%rdi)
 7571      00000000 
 7571      0000
 7572 012e C7879C00 		movl	$0, 156(%rdi)
 7572      00000000 
 7572      0000
1228:fltk-1.3.4-1/src/Fl_Input_.cxx ****  136:fltk-1.3.4-1/src/Fl_Input_.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented 
 7573              		.loc 2 1228 0
 7574 0138 E8000000 		call	_ZN9Fl_Input_14minimal_updateEi
 7574      00
 7575              	.LVL912:
 7576 013d EBA9     		jmp	.L840
 7577              	.LVL913:
 7578 013f 90       		.p2align 4,,10
 7579              		.p2align 3
 7580              	.L853:
 7581              	.LBE1363:
1207:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/src/Fl_Input_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even 
 7582              		.loc 2 1207 0 discriminator 1
 7583 0140 4C8B4778 		movq	120(%rdi), %r8
1206:fltk-1.3.4-1/src/Fl_Input_.cxx ****  114:fltk-1.3.4-1/src/Fl_Input_.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods 
 7584              		.loc 2 1206 0 discriminator 1
 7585 0144 48C70500 		movq	$0, _ZL10undowidget(%rip)
 7585      00000000 
 7585      000000
1207:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/src/Fl_Input_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even 
 7586              		.loc 2 1207 0 discriminator 1
 7587 014f 4939F0   		cmpq	%rsi, %r8
 7588 0152 0F85CDFE 		jne	.L830
 7588      FFFF
 7589 0158 0F1F8400 		.p2align 4,,10
 7589      00000000 
 7590              		.p2align 3
 7591              	.L854:
 7592 0160 39978800 		cmpl	%edx, 136(%rdi)
 7592      0000
 7593 0166 0F85B9FE 		jne	.L830
 7593      FFFF
1207:fltk-1.3.4-1/src/Fl_Input_.cxx ****  115:fltk-1.3.4-1/src/Fl_Input_.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even 
 7594              		.loc 2 1207 0 is_stmt 0
 7595 016c 31C0     		xorl	%eax, %eax
 7596 016e E947FFFF 		jmp	.L831
 7596      FF
 7597              	.LVL914:
 7598              		.p2align 4,,10
 7599 0173 0F1F4400 		.p2align 3
 7599      00
 7600              	.L847:
 7601              	.LBB1364:
 7602              	.LBB1359:
 7603              	.LBB1357:
 7604              	.LBB1355:
 7605 0178 89EE     		movl	%ebp, %esi
 7606              	.LVL915:
 7607 017a E924FFFF 		jmp	.L836
 7607      FF
 7608              	.LVL916:
 7609 017f 90       		.p2align 4,,10
 7610              		.p2align 3
 7611              	.L846:
1213:fltk-1.3.4-1/src/Fl_Input_.cxx ****  121:fltk-1.3.4-1/src/Fl_Input_.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 7612              		.loc 2 1213 0 is_stmt 1
 7613 0180 31F6     		xorl	%esi, %esi
 7614              	.LVL917:
 7615 0182 E91CFFFF 		jmp	.L836
 7615      FF
 7616              	.LBE1355:
 7617              	.LBE1357:
 7618              	.LBE1359:
 7619              	.LBE1364:
 7620              		.cfi_endproc
 7621              	.LFE547:
 7623              		.section	.text.unlikely._ZN9Fl_Input_12static_valueEPKci
 7624              	.LCOLDE40:
 7625              		.section	.text._ZN9Fl_Input_12static_valueEPKci
 7626              	.LHOTE40:
 7627              		.section	.text.unlikely._ZN9Fl_Input_12static_valueEPKc,"ax",@progbits
 7628              		.align 2
 7629              	.LCOLDB41:
 7630              		.section	.text._ZN9Fl_Input_12static_valueEPKc,"ax",@progbits
 7631              	.LHOTB41:
 7632              		.align 2
 7633              		.p2align 4,,15
 7634              		.globl	_ZN9Fl_Input_12static_valueEPKc
 7636              	_ZN9Fl_Input_12static_valueEPKc:
 7637              	.LFB548:
1248:fltk-1.3.4-1/src/Fl_Input_.cxx ****  156:fltk-1.3.4-1/src/Fl_Input_.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ 
 7638              		.loc 2 1248 0
 7639              		.cfi_startproc
 7640              	.LVL918:
 7641 0000 55       		pushq	%rbp
 7642              		.cfi_def_cfa_offset 16
 7643              		.cfi_offset 6, -16
 7644 0001 53       		pushq	%rbx
 7645              		.cfi_def_cfa_offset 24
 7646              		.cfi_offset 3, -24
 7647 0002 4889FD   		movq	%rdi, %rbp
 7648 0005 4889F3   		movq	%rsi, %rbx
 7649 0008 4883EC08 		subq	$8, %rsp
 7650              		.cfi_def_cfa_offset 32
1249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  157:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
 7651              		.loc 2 1249 0
 7652 000c 4885F6   		testq	%rsi, %rsi
 7653 000f 741F     		je	.L858
1249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  157:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
 7654              		.loc 2 1249 0 is_stmt 0 discriminator 1
 7655 0011 4889F7   		movq	%rsi, %rdi
 7656              	.LVL919:
 7657 0014 E8000000 		call	strlen
 7657      00
 7658              	.LVL920:
 7659 0019 89C2     		movl	%eax, %edx
 7660              	.L857:
1250:fltk-1.3.4-1/src/Fl_Input_.cxx ****  158:fltk-1.3.4-1/src/Fl_Input_.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ 
 7661              		.loc 2 1250 0 is_stmt 1 discriminator 4
 7662 001b 4883C408 		addq	$8, %rsp
 7663              		.cfi_remember_state
 7664              		.cfi_def_cfa_offset 24
1249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  157:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
 7665              		.loc 2 1249 0 discriminator 4
 7666 001f 4889DE   		movq	%rbx, %rsi
 7667 0022 4889EF   		movq	%rbp, %rdi
1250:fltk-1.3.4-1/src/Fl_Input_.cxx ****  158:fltk-1.3.4-1/src/Fl_Input_.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ 
 7668              		.loc 2 1250 0 discriminator 4
 7669 0025 5B       		popq	%rbx
 7670              		.cfi_def_cfa_offset 16
 7671              	.LVL921:
 7672 0026 5D       		popq	%rbp
 7673              		.cfi_def_cfa_offset 8
 7674              	.LVL922:
1249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  157:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
 7675              		.loc 2 1249 0 discriminator 4
 7676 0027 E9000000 		jmp	_ZN9Fl_Input_12static_valueEPKci
 7676      00
 7677              	.LVL923:
 7678 002c 0F1F4000 		.p2align 4,,10
 7679              		.p2align 3
 7680              	.L858:
 7681              		.cfi_restore_state
1249:fltk-1.3.4-1/src/Fl_Input_.cxx ****  157:fltk-1.3.4-1/src/Fl_Input_.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use o
 7682              		.loc 2 1249 0 is_stmt 0
 7683 0030 31D2     		xorl	%edx, %edx
 7684 0032 EBE7     		jmp	.L857
 7685              		.cfi_endproc
 7686              	.LFE548:
 7688              		.section	.text.unlikely._ZN9Fl_Input_12static_valueEPKc
 7689              	.LCOLDE41:
 7690              		.section	.text._ZN9Fl_Input_12static_valueEPKc
 7691              	.LHOTE41:
 7692              		.section	.text.unlikely._ZN9Fl_Input_5valueEPKci,"ax",@progbits
 7693              		.align 2
 7694              	.LCOLDB42:
 7695              		.section	.text._ZN9Fl_Input_5valueEPKci,"ax",@progbits
 7696              	.LHOTB42:
 7697              		.align 2
 7698              		.p2align 4,,15
 7699              		.globl	_ZN9Fl_Input_5valueEPKci
 7701              	_ZN9Fl_Input_5valueEPKci:
 7702              	.LFB549:
1267:fltk-1.3.4-1/src/Fl_Input_.cxx ****  175:fltk-1.3.4-1/src/Fl_Input_.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT      
 7703              		.loc 2 1267 0 is_stmt 1
 7704              		.cfi_startproc
 7705              	.LVL924:
 7706 0000 55       		pushq	%rbp
 7707              		.cfi_def_cfa_offset 16
 7708              		.cfi_offset 6, -16
 7709 0001 53       		pushq	%rbx
 7710              		.cfi_def_cfa_offset 24
 7711              		.cfi_offset 3, -24
 7712 0002 89D3     		movl	%edx, %ebx
 7713 0004 4889FD   		movq	%rdi, %rbp
 7714 0007 4883EC18 		subq	$24, %rsp
 7715              		.cfi_def_cfa_offset 48
1268:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/src/Fl_Input_.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER    
 7716              		.loc 2 1268 0
 7717 000b E8000000 		call	_ZN9Fl_Input_12static_valueEPKci
 7717      00
 7718              	.LVL925:
1269:fltk-1.3.4-1/src/Fl_Input_.cxx ****  177:fltk-1.3.4-1/src/Fl_Input_.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITI
 7719              		.loc 2 1269 0
 7720 0010 85DB     		testl	%ebx, %ebx
 7721 0012 7412     		je	.L861
1269:fltk-1.3.4-1/src/Fl_Input_.cxx ****  177:fltk-1.3.4-1/src/Fl_Input_.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITI
 7722              		.loc 2 1269 0 is_stmt 0 discriminator 1
 7723 0014 89DE     		movl	%ebx, %esi
 7724 0016 4889EF   		movq	%rbp, %rdi
 7725 0019 8944240C 		movl	%eax, 12(%rsp)
 7726 001d E8000000 		call	_ZN9Fl_Input_13put_in_bufferEi
 7726      00
 7727              	.LVL926:
 7728 0022 8B44240C 		movl	12(%rsp), %eax
 7729              	.LVL927:
 7730              	.L861:
1271:fltk-1.3.4-1/src/Fl_Input_.cxx ****  179:fltk-1.3.4-1/src/Fl_Input_.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LAB
 7731              		.loc 2 1271 0 is_stmt 1
 7732 0026 4883C418 		addq	$24, %rsp
 7733              		.cfi_def_cfa_offset 24
 7734 002a 5B       		popq	%rbx
 7735              		.cfi_def_cfa_offset 16
 7736              	.LVL928:
 7737 002b 5D       		popq	%rbp
 7738              		.cfi_def_cfa_offset 8
 7739              	.LVL929:
 7740 002c C3       		ret
 7741              		.cfi_endproc
 7742              	.LFE549:
 7744              		.section	.text.unlikely._ZN9Fl_Input_5valueEPKci
 7745              	.LCOLDE42:
 7746              		.section	.text._ZN9Fl_Input_5valueEPKci
 7747              	.LHOTE42:
 7748              		.section	.text.unlikely._ZN9Fl_Input_5valueEPKc,"ax",@progbits
 7749              		.align 2
 7750              	.LCOLDB43:
 7751              		.section	.text._ZN9Fl_Input_5valueEPKc,"ax",@progbits
 7752              	.LHOTB43:
 7753              		.align 2
 7754              		.p2align 4,,15
 7755              		.globl	_ZN9Fl_Input_5valueEPKc
 7757              	_ZN9Fl_Input_5valueEPKc:
 7758              	.LFB550:
1284:fltk-1.3.4-1/src/Fl_Input_.cxx ****  192:fltk-1.3.4-1/src/Fl_Input_.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCE
 7759              		.loc 2 1284 0
 7760              		.cfi_startproc
 7761              	.LVL930:
 7762 0000 55       		pushq	%rbp
 7763              		.cfi_def_cfa_offset 16
 7764              		.cfi_offset 6, -16
 7765 0001 53       		pushq	%rbx
 7766              		.cfi_def_cfa_offset 24
 7767              		.cfi_offset 3, -24
 7768 0002 4889FD   		movq	%rdi, %rbp
 7769 0005 4889F3   		movq	%rsi, %rbx
 7770 0008 4883EC08 		subq	$8, %rsp
 7771              		.cfi_def_cfa_offset 32
1285:fltk-1.3.4-1/src/Fl_Input_.cxx ****  193:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space fo
 7772              		.loc 2 1285 0
 7773 000c 4885F6   		testq	%rsi, %rsi
 7774 000f 741F     		je	.L868
1285:fltk-1.3.4-1/src/Fl_Input_.cxx ****  193:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space fo
 7775              		.loc 2 1285 0 is_stmt 0 discriminator 1
 7776 0011 4889F7   		movq	%rsi, %rdi
 7777              	.LVL931:
 7778 0014 E8000000 		call	strlen
 7778      00
 7779              	.LVL932:
 7780 0019 89C2     		movl	%eax, %edx
 7781              	.L867:
1286:fltk-1.3.4-1/src/Fl_Input_.cxx ****  194:fltk-1.3.4-1/src/Fl_Input_.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3   
 7782              		.loc 2 1286 0 is_stmt 1 discriminator 4
 7783 001b 4883C408 		addq	$8, %rsp
 7784              		.cfi_remember_state
 7785              		.cfi_def_cfa_offset 24
1285:fltk-1.3.4-1/src/Fl_Input_.cxx ****  193:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space fo
 7786              		.loc 2 1285 0 discriminator 4
 7787 001f 4889DE   		movq	%rbx, %rsi
 7788 0022 4889EF   		movq	%rbp, %rdi
1286:fltk-1.3.4-1/src/Fl_Input_.cxx ****  194:fltk-1.3.4-1/src/Fl_Input_.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3   
 7789              		.loc 2 1286 0 discriminator 4
 7790 0025 5B       		popq	%rbx
 7791              		.cfi_def_cfa_offset 16
 7792              	.LVL933:
 7793 0026 5D       		popq	%rbp
 7794              		.cfi_def_cfa_offset 8
 7795              	.LVL934:
1285:fltk-1.3.4-1/src/Fl_Input_.cxx ****  193:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space fo
 7796              		.loc 2 1285 0 discriminator 4
 7797 0027 E9000000 		jmp	_ZN9Fl_Input_5valueEPKci
 7797      00
 7798              	.LVL935:
 7799 002c 0F1F4000 		.p2align 4,,10
 7800              		.p2align 3
 7801              	.L868:
 7802              		.cfi_restore_state
1285:fltk-1.3.4-1/src/Fl_Input_.cxx ****  193:fltk-1.3.4-1/src/Fl_Input_.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space fo
 7803              		.loc 2 1285 0 is_stmt 0
 7804 0030 31D2     		xorl	%edx, %edx
 7805 0032 EBE7     		jmp	.L867
 7806              		.cfi_endproc
 7807              	.LFE550:
 7809              		.section	.text.unlikely._ZN9Fl_Input_5valueEPKc
 7810              	.LCOLDE43:
 7811              		.section	.text._ZN9Fl_Input_5valueEPKc
 7812              	.LHOTE43:
 7813              		.section	.text.unlikely._ZN9Fl_Input_D2Ev,"ax",@progbits
 7814              		.align 2
 7815              	.LCOLDB44:
 7816              		.section	.text._ZN9Fl_Input_D2Ev,"ax",@progbits
 7817              	.LHOTB44:
 7818              		.align 2
 7819              		.p2align 4,,15
 7820              		.globl	_ZN9Fl_Input_D2Ev
 7822              	_ZN9Fl_Input_D2Ev:
 7823              	.LFB553:
1306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 7824              		.loc 2 1306 0 is_stmt 1
 7825              		.cfi_startproc
 7826              	.LVL936:
 7827              	.LBB1365:
1307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  215:fltk-1.3.4-1/src/Fl_Input_.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.
 7828              		.loc 2 1307 0
 7829 0000 483B3D00 		cmpq	_ZL10undowidget(%rip), %rdi
 7829      000000
 7830              	.LBE1365:
1306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 7831              		.loc 2 1306 0
 7832 0007 53       		pushq	%rbx
 7833              		.cfi_def_cfa_offset 16
 7834              		.cfi_offset 3, -16
1306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 7835              		.loc 2 1306 0
 7836 0008 4889FB   		movq	%rdi, %rbx
 7837              	.LBB1366:
 7838 000b 48C70700 		movq	$_ZTV9Fl_Input_+16, (%rdi)
 7838      000000
1307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  215:fltk-1.3.4-1/src/Fl_Input_.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.
 7839              		.loc 2 1307 0
 7840 0012 7424     		je	.L874
 7841              	.L871:
1308:fltk-1.3.4-1/src/Fl_Input_.cxx ****  216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it i
 7842              		.loc 2 1308 0
 7843 0014 8B838C00 		movl	140(%rbx), %eax
 7843      0000
 7844 001a 85C0     		testl	%eax, %eax
 7845 001c 740C     		je	.L872
1308:fltk-1.3.4-1/src/Fl_Input_.cxx ****  216:fltk-1.3.4-1/src/Fl_Input_.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it i
 7846              		.loc 2 1308 0 is_stmt 0 discriminator 1
 7847 001e 488BBB80 		movq	128(%rbx), %rdi
 7847      000000
 7848              	.LVL937:
 7849 0025 E8000000 		call	free
 7849      00
 7850              	.LVL938:
 7851              	.L872:
1306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 7852              		.loc 2 1306 0 is_stmt 1
 7853 002a 4889DF   		movq	%rbx, %rdi
 7854              	.LBE1366:
1309:fltk-1.3.4-1/src/Fl_Input_.cxx ****  217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7855              		.loc 2 1309 0
 7856 002d 5B       		popq	%rbx
 7857              		.cfi_remember_state
 7858              		.cfi_def_cfa_offset 8
 7859              	.LVL939:
 7860              	.LBB1367:
1306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 7861              		.loc 2 1306 0
 7862 002e E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 7862      00
 7863              	.LVL940:
 7864              		.p2align 4,,10
 7865 0033 0F1F4400 		.p2align 3
 7865      00
 7866              	.L874:
 7867              		.cfi_restore_state
1307:fltk-1.3.4-1/src/Fl_Input_.cxx ****  215:fltk-1.3.4-1/src/Fl_Input_.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.
 7868              		.loc 2 1307 0 discriminator 1
 7869 0038 48C70500 		movq	$0, _ZL10undowidget(%rip)
 7869      00000000 
 7869      000000
 7870 0043 EBCF     		jmp	.L871
 7871              	.LBE1367:
 7872              		.cfi_endproc
 7873              	.LFE553:
 7875              		.section	.text.unlikely._ZN9Fl_Input_D2Ev
 7876              	.LCOLDE44:
 7877              		.section	.text._ZN9Fl_Input_D2Ev
 7878              	.LHOTE44:
 7879              		.globl	_ZN9Fl_Input_D1Ev
 7880              		.set	_ZN9Fl_Input_D1Ev,_ZN9Fl_Input_D2Ev
 7881              		.section	.text.unlikely._ZN9Fl_Input_D0Ev,"ax",@progbits
 7882              		.align 2
 7883              	.LCOLDB45:
 7884              		.section	.text._ZN9Fl_Input_D0Ev,"ax",@progbits
 7885              	.LHOTB45:
 7886              		.align 2
 7887              		.p2align 4,,15
 7888              		.globl	_ZN9Fl_Input_D0Ev
 7890              	_ZN9Fl_Input_D0Ev:
 7891              	.LFB555:
1306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 7892              		.loc 2 1306 0
 7893              		.cfi_startproc
 7894              	.LVL941:
 7895 0000 53       		pushq	%rbx
 7896              		.cfi_def_cfa_offset 16
 7897              		.cfi_offset 3, -16
1306:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/src/Fl_Input_.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 7898              		.loc 2 1306 0
 7899 0001 4889FB   		movq	%rdi, %rbx
1309:fltk-1.3.4-1/src/Fl_Input_.cxx ****  217:fltk-1.3.4-1/src/Fl_Input_.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 7900              		.loc 2 1309 0
 7901 0004 E8000000 		call	_ZN9Fl_Input_D1Ev
 7901      00
 7902              	.LVL942:
 7903 0009 4889DF   		movq	%rbx, %rdi
 7904 000c 5B       		popq	%rbx
 7905              		.cfi_def_cfa_offset 8
 7906              	.LVL943:
 7907 000d E9000000 		jmp	_ZdlPv
 7907      00
 7908              	.LVL944:
 7909              		.cfi_endproc
 7910              	.LFE555:
 7912              		.section	.text.unlikely._ZN9Fl_Input_D0Ev
 7913              	.LCOLDE45:
 7914              		.section	.text._ZN9Fl_Input_D0Ev
 7915              	.LHOTE45:
 7916              		.section	.text.unlikely._ZN9Fl_Input_12linesPerPageEv,"ax",@progbits
 7917              		.align 2
 7918              	.LCOLDB46:
 7919              		.section	.text._ZN9Fl_Input_12linesPerPageEv,"ax",@progbits
 7920              	.LHOTB46:
 7921              		.align 2
 7922              		.p2align 4,,15
 7923              		.globl	_ZN9Fl_Input_12linesPerPageEv
 7925              	_ZN9Fl_Input_12linesPerPageEv:
 7926              	.LFB556:
1315:fltk-1.3.4-1/src/Fl_Input_.cxx ****  223:fltk-1.3.4-1/src/Fl_Input_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 7927              		.loc 2 1315 0
 7928              		.cfi_startproc
 7929              	.LVL945:
1317:fltk-1.3.4-1/src/Fl_Input_.cxx ****  225:fltk-1.3.4-1/src/Fl_Input_.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this 
 7930              		.loc 2 1317 0
 7931 0000 0FB6476C 		movzbl	108(%rdi), %eax
 7932 0004 83E007   		andl	$7, %eax
 7933 0007 3C04     		cmpb	$4, %al
 7934 0009 740D     		je	.L884
1316:fltk-1.3.4-1/src/Fl_Input_.cxx ****  224:fltk-1.3.4-1/src/Fl_Input_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7935              		.loc 2 1316 0
 7936 000b B8010000 		movl	$1, %eax
 7936      00
 7937              	.LVL946:
1323:fltk-1.3.4-1/src/Fl_Input_.cxx ****  231:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 7938              		.loc 2 1323 0
 7939 0010 C3       		ret
 7940              	.LVL947:
 7941              		.p2align 4,,10
 7942 0011 0F1F8000 		.p2align 3
 7942      000000
 7943              	.L884:
1315:fltk-1.3.4-1/src/Fl_Input_.cxx ****  223:fltk-1.3.4-1/src/Fl_Input_.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 7944              		.loc 2 1315 0
 7945 0018 53       		pushq	%rbx
 7946              		.cfi_def_cfa_offset 16
 7947              		.cfi_offset 3, -16
 7948 0019 4889FB   		movq	%rdi, %rbx
 7949              	.LVL948:
 7950              	.LBB1368:
 7951              	.LBB1369:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 7952              		.loc 5 509 0
 7953 001c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7953      000000
 7954              	.LVL949:
 7955 0023 8B93B800 		movl	184(%rbx), %edx
 7955      0000
 7956 0029 8BB3B400 		movl	180(%rbx), %esi
 7956      0000
 7957 002f 488B07   		movq	(%rdi), %rax
 7958 0032 FF90B001 		call	*432(%rax)
 7958      0000
 7959              	.LVL950:
 7960              	.LBE1369:
 7961              	.LBE1368:
 7962              	.LBB1370:
 7963              	.LBB1371:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 7964              		.loc 5 527 0
 7965 0038 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7965      000000
 7966 003f 8B5B2C   		movl	44(%rbx), %ebx
 7967              	.LVL951:
 7968 0042 488B07   		movq	(%rdi), %rax
 7969 0045 FF90D001 		call	*464(%rax)
 7969      0000
 7970              	.LVL952:
 7971 004b 89C1     		movl	%eax, %ecx
 7972              	.LBE1371:
 7973              	.LBE1370:
1319:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/src/Fl_Input_.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever ne
 7974              		.loc 2 1319 0
 7975 004d 89D8     		movl	%ebx, %eax
 7976 004f 99       		cltd
 7977 0050 F7F9     		idivl	%ecx
 7978              	.LVL953:
1320:fltk-1.3.4-1/src/Fl_Input_.cxx ****  228:fltk-1.3.4-1/src/Fl_Input_.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() met
 7979              		.loc 2 1320 0
 7980 0052 85C0     		testl	%eax, %eax
 7981 0054 7E0A     		jle	.L880
1323:fltk-1.3.4-1/src/Fl_Input_.cxx ****  231:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 7982              		.loc 2 1323 0
 7983 0056 5B       		popq	%rbx
 7984              		.cfi_remember_state
 7985              		.cfi_restore 3
 7986              		.cfi_def_cfa_offset 8
 7987 0057 C3       		ret
 7988 0058 0F1F8400 		.p2align 4,,10
 7988      00000000 
 7989              		.p2align 3
 7990              	.L880:
 7991              		.cfi_restore_state
1316:fltk-1.3.4-1/src/Fl_Input_.cxx ****  224:fltk-1.3.4-1/src/Fl_Input_.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 7992              		.loc 2 1316 0
 7993 0060 B8010000 		movl	$1, %eax
 7993      00
 7994              	.LVL954:
1323:fltk-1.3.4-1/src/Fl_Input_.cxx ****  231:fltk-1.3.4-1/src/Fl_Input_.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 7995              		.loc 2 1323 0
 7996 0065 5B       		popq	%rbx
 7997              		.cfi_restore 3
 7998              		.cfi_def_cfa_offset 8
 7999 0066 C3       		ret
 8000              		.cfi_endproc
 8001              	.LFE556:
 8003              		.section	.text.unlikely._ZN9Fl_Input_12linesPerPageEv
 8004              	.LCOLDE46:
 8005              		.section	.text._ZN9Fl_Input_12linesPerPageEv
 8006              	.LHOTE46:
 8007              		.section	.text.unlikely._ZNK9Fl_Input_5indexEi,"ax",@progbits
 8008              		.align 2
 8009              	.LCOLDB47:
 8010              		.section	.text._ZNK9Fl_Input_5indexEi,"ax",@progbits
 8011              	.LHOTB47:
 8012              		.align 2
 8013              		.p2align 4,,15
 8014              		.globl	_ZNK9Fl_Input_5indexEi
 8016              	_ZNK9Fl_Input_5indexEi:
 8017              	.LFB557:
1335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  243:fltk-1.3.4-1/src/Fl_Input_.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does no
 8018              		.loc 2 1335 0
 8019              		.cfi_startproc
 8020              	.LVL955:
 8021 0000 4883EC18 		subq	$24, %rsp
 8022              		.cfi_def_cfa_offset 32
1335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  243:fltk-1.3.4-1/src/Fl_Input_.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does no
 8023              		.loc 2 1335 0
 8024 0004 89F0     		movl	%esi, %eax
 8025              		.loc 2 1337 0
 8026 0006 4863B788 		movslq	136(%rdi), %rsi
 8026      000000
 8027              	.LVL956:
 8028 000d 488B5778 		movq	120(%rdi), %rdx
 8029 0011 4863F8   		movslq	%eax, %rdi
 8030              	.LVL957:
1336:fltk-1.3.4-1/src/Fl_Input_.cxx ****  244:fltk-1.3.4-1/src/Fl_Input_.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 8031              		.loc 2 1336 0
 8032 0014 C7442404 		movl	$0, 4(%rsp)
 8032      00000000 
1335:fltk-1.3.4-1/src/Fl_Input_.cxx ****  243:fltk-1.3.4-1/src/Fl_Input_.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does no
 8033              		.loc 2 1335 0
 8034 001c 64488B0C 		movq	%fs:40, %rcx
 8034      25280000 
 8034      00
 8035 0025 48894C24 		movq	%rcx, 8(%rsp)
 8035      08
 8036 002a 31C9     		xorl	%ecx, %ecx
 8037              		.loc 2 1337 0
 8038 002c 4801D6   		addq	%rdx, %rsi
 8039 002f 4801D7   		addq	%rdx, %rdi
 8040 0032 488D5424 		leaq	4(%rsp), %rdx
 8040      04
 8041 0037 E8000000 		call	fl_utf8decode
 8041      00
 8042              	.LVL958:
1338:fltk-1.3.4-1/src/Fl_Input_.cxx ****  245:fltk-1.3.4-1/src/Fl_Input_.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the ti
 8043              		.loc 2 1338 0
 8044 003c 488B4C24 		movq	8(%rsp), %rcx
 8044      08
 8045 0041 6448330C 		xorq	%fs:40, %rcx
 8045      25280000 
 8045      00
 8046 004a 7505     		jne	.L888
 8047 004c 4883C418 		addq	$24, %rsp
 8048              		.cfi_remember_state
 8049              		.cfi_def_cfa_offset 8
 8050 0050 C3       		ret
 8051              	.L888:
 8052              		.cfi_restore_state
 8053 0051 E8000000 		call	__stack_chk_fail
 8053      00
 8054              	.LVL959:
 8055              		.cfi_endproc
 8056              	.LFE557:
 8058              		.section	.text.unlikely._ZNK9Fl_Input_5indexEi
 8059              	.LCOLDE47:
 8060              		.section	.text._ZNK9Fl_Input_5indexEi
 8061              	.LHOTE47:
 8062              		.section	.text.unlikely._ZN9Fl_Input_6resizeEiiii,"ax",@progbits
 8063              		.align 2
 8064              	.LCOLDB48:
 8065              		.section	.text._ZN9Fl_Input_6resizeEiiii,"ax",@progbits
 8066              	.LHOTB48:
 8067              		.align 2
 8068              		.p2align 4,,15
 8069              		.globl	_ZN9Fl_Input_6resizeEiiii
 8071              	_ZN9Fl_Input_6resizeEiiii:
 8072              	.LFB551:
1294:fltk-1.3.4-1/src/Fl_Input_.cxx ****  202:fltk-1.3.4-1/src/Fl_Input_.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus 
 8073              		.loc 2 1294 0
 8074              		.cfi_startproc
 8075              	.LVL960:
1295:fltk-1.3.4-1/src/Fl_Input_.cxx ****  203:fltk-1.3.4-1/src/Fl_Input_.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() 
 8076              		.loc 2 1295 0
 8077 0000 3B4F28   		cmpl	40(%rdi), %ecx
 8078 0003 740A     		je	.L890
1295:fltk-1.3.4-1/src/Fl_Input_.cxx ****  203:fltk-1.3.4-1/src/Fl_Input_.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() 
 8079              		.loc 2 1295 0 is_stmt 0 discriminator 1
 8080 0005 C7879C00 		movl	$0, 156(%rdi)
 8080      00000000 
 8080      0000
 8081              	.L890:
 8082              	.LVL961:
1296:fltk-1.3.4-1/src/Fl_Input_.cxx ****  204:fltk-1.3.4-1/src/Fl_Input_.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl
 8083              		.loc 2 1296 0 is_stmt 1
 8084 000f 443B472C 		cmpl	44(%rdi), %r8d
 8085 0013 740A     		je	.L891
1296:fltk-1.3.4-1/src/Fl_Input_.cxx ****  204:fltk-1.3.4-1/src/Fl_Input_.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl
 8086              		.loc 2 1296 0 is_stmt 0 discriminator 1
 8087 0015 C787A000 		movl	$0, 160(%rdi)
 8087      00000000 
 8087      0000
 8088              	.L891:
1297:fltk-1.3.4-1/src/Fl_Input_.cxx ****  205:fltk-1.3.4-1/src/Fl_Input_.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() 
 8089              		.loc 2 1297 0 is_stmt 1
 8090 001f E9000000 		jmp	_ZN9Fl_Widget6resizeEiiii
 8090      00
 8091              	.LVL962:
 8092              		.cfi_endproc
 8093              	.LFE551:
 8095              		.section	.text.unlikely._ZN9Fl_Input_6resizeEiiii
 8096              	.LCOLDE48:
 8097              		.section	.text._ZN9Fl_Input_6resizeEiiii
 8098              	.LHOTE48:
 8099              		.weak	_ZTS9Fl_Input_
 8100              		.section	.rodata._ZTS9Fl_Input_,"aG",@progbits,_ZTS9Fl_Input_,comdat
 8101              		.align 8
 8104              	_ZTS9Fl_Input_:
 8105 0000 39466C5F 		.string	"9Fl_Input_"
 8105      496E7075 
 8105      745F00
 8106              		.weak	_ZTI9Fl_Input_
 8107              		.section	.rodata._ZTI9Fl_Input_,"aG",@progbits,_ZTI9Fl_Input_,comdat
 8108              		.align 8
 8111              	_ZTI9Fl_Input_:
 8112 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 8112      00000000 
 8113 0008 00000000 		.quad	_ZTS9Fl_Input_
 8113      00000000 
 8114 0010 00000000 		.quad	_ZTI9Fl_Widget
 8114      00000000 
 8115              		.weak	_ZTV9Fl_Input_
 8116              		.section	.rodata._ZTV9Fl_Input_,"aG",@progbits,_ZTV9Fl_Input_,comdat
 8117              		.align 8
 8120              	_ZTV9Fl_Input_:
 8121 0000 00000000 		.quad	0
 8121      00000000 
 8122 0008 00000000 		.quad	_ZTI9Fl_Input_
 8122      00000000 
 8123 0010 00000000 		.quad	0
 8123      00000000 
 8124 0018 00000000 		.quad	0
 8124      00000000 
 8125 0020 00000000 		.quad	__cxa_pure_virtual
 8125      00000000 
 8126 0028 00000000 		.quad	_ZN9Fl_Widget6handleEi
 8126      00000000 
 8127 0030 00000000 		.quad	_ZN9Fl_Input_6resizeEiiii
 8127      00000000 
 8128 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 8128      00000000 
 8129 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 8129      00000000 
 8130 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 8130      00000000 
 8131 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 8131      00000000 
 8132 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 8132      00000000 
 8133              		.section	.bss._ZL7yankcut,"aw",@nobits
 8134              		.align 4
 8137              	_ZL7yankcut:
 8138 0000 00000000 		.zero	4
 8139              		.section	.bss._ZL10undoinsert,"aw",@nobits
 8140              		.align 4
 8143              	_ZL10undoinsert:
 8144 0000 00000000 		.zero	4
 8145              		.section	.bss._ZL7undocut,"aw",@nobits
 8146              		.align 4
 8149              	_ZL7undocut:
 8150 0000 00000000 		.zero	4
 8151              		.section	.bss._ZL6undoat,"aw",@nobits
 8152              		.align 4
 8155              	_ZL6undoat:
 8156 0000 00000000 		.zero	4
 8157              		.section	.bss._ZL10undowidget,"aw",@nobits
 8158              		.align 8
 8161              	_ZL10undowidget:
 8162 0000 00000000 		.zero	8
 8162      00000000 
 8163              		.section	.bss._ZL16undobufferlength,"aw",@nobits
 8164              		.align 4
 8167              	_ZL16undobufferlength:
 8168 0000 00000000 		.zero	4
 8169              		.section	.bss._ZL10undobuffer,"aw",@nobits
 8170              		.align 8
 8173              	_ZL10undobuffer:
 8174 0000 00000000 		.zero	8
 8174      00000000 
 8175              		.globl	_ZN9Fl_Input_11was_up_downE
 8176              		.section	.bss._ZN9Fl_Input_11was_up_downE,"aw",@nobits
 8177              		.align 4
 8180              	_ZN9Fl_Input_11was_up_downE:
 8181 0000 00000000 		.zero	4
 8182              		.globl	_ZN9Fl_Input_11up_down_posE
 8183              		.section	.bss._ZN9Fl_Input_11up_down_posE,"aw",@nobits
 8184              		.align 8
 8187              	_ZN9Fl_Input_11up_down_posE:
 8188 0000 00000000 		.zero	8
 8188      00000000 
 8189              		.section	.bss._ZL8l_secret,"aw",@nobits
 8190              		.align 4
 8193              	_ZL8l_secret:
 8194 0000 00000000 		.zero	4
 8195              		.section	.rodata.cst4,"aM",@progbits,4
 8196              		.align 4
 8197              	.LC15:
 8198 0000 00000040 		.long	1073741824
 8199              		.align 4
 8200              	.LC16:
 8201 0004 00004040 		.long	1077936128
 8202              		.section	.rodata.cst8,"aM",@progbits,8
 8203              		.align 8
 8204              	.LC17:
 8205 0000 00000000 		.long	0
 8206 0004 0000E03F 		.long	1071644672
 8207              		.section	.rodata.cst4
 8208              		.align 4
 8209              	.LC18:
 8210 0008 00006040 		.long	1080033280
 8211              		.align 4
 8212              	.LC19:
 8213 000c 0000003F 		.long	1056964608
 8214              		.align 4
 8215              	.LC20:
 8216 0010 00002040 		.long	1075838976
 8217              		.text
 8218              	.Letext0:
 8219              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 8220              	.Letext_cold0:
 8221              		.file 9 "fltk-1.3.4-1/FL/fl_types.h"
 8222              		.file 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 8223              		.file 11 "/usr/include/x86_64-linux-gnu/bits/types.h"
 8224              		.file 12 "/usr/include/libio.h"
 8225              		.file 13 "fltk-1.3.4-1/FL/Enumerations.H"
 8226              		.file 14 "fltk-1.3.4-1/FL/Fl_Window.H"
 8227              		.file 15 "fltk-1.3.4-1/FL/Fl_Image.H"
 8228              		.file 16 "fltk-1.3.4-1/FL/Fl_Device.H"
 8229              		.file 17 "fltk-1.3.4-1/FL/fl_ask.H"
 8230              		.file 18 "/usr/include/stdio.h"
 8231              		.file 19 "/usr/include/stdlib.h"
 8232              		.file 20 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Input_.cxx
     /tmp/ccIe3i3B.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccIe3i3B.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccIe3i3B.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccIe3i3B.s:86     .text._ZL17strict_word_startPKcii:0000000000000000 _ZL17strict_word_startPKcii
     /tmp/ccIe3i3B.s:189    .text._ZL15strict_word_endPKciii:0000000000000000 _ZL15strict_word_endPKciii
     /tmp/ccIe3i3B.s:284    .text._ZL6iswordc:0000000000000000 _ZL6iswordc
     /tmp/ccIe3i3B.s:362    .text._ZL14undobuffersizei:0000000000000000 _ZL14undobuffersizei
     /tmp/ccIe3i3B.s:8167   .bss._ZL16undobufferlength:0000000000000000 _ZL16undobufferlength
     /tmp/ccIe3i3B.s:8173   .bss._ZL10undobuffer:0000000000000000 _ZL10undobuffer
     /tmp/ccIe3i3B.s:434    .text._ZNK9Fl_Input_6expandEPKcPc:0000000000000000 _ZNK9Fl_Input_6expandEPKcPc
     /tmp/ccIe3i3B.s:8193   .bss._ZL8l_secret:0000000000000000 _ZL8l_secret
     /tmp/ccIe3i3B.s:821    .text._ZNK9Fl_Input_8line_endEi.part.31.constprop.36:0000000000000000 _ZNK9Fl_Input_8line_endEi.part.31.constprop.36
     /tmp/ccIe3i3B.s:987    .text._ZNK9Fl_Input_10line_startEi.part.32.constprop.37:0000000000000000 _ZNK9Fl_Input_10line_startEi.part.32.constprop.37
     /tmp/ccIe3i3B.s:1187   .text._ZNK9Fl_Input_9expandposEPKcS1_S1_Pi:0000000000000000 _ZNK9Fl_Input_9expandposEPKcS1_S1_Pi
     /tmp/ccIe3i3B.s:1414   .text._ZN9Fl_Input_14minimal_updateEi:0000000000000000 _ZN9Fl_Input_14minimal_updateEi
     /tmp/ccIe3i3B.s:1478   .text._ZN9Fl_Input_14minimal_updateEii:0000000000000000 _ZN9Fl_Input_14minimal_updateEii
     /tmp/ccIe3i3B.s:1505   .text._ZNK9Fl_Input_7setfontEv:0000000000000000 _ZNK9Fl_Input_7setfontEv
     /tmp/ccIe3i3B.s:1540   .text._ZN9Fl_Input_8drawtextEiiii:0000000000000000 _ZN9Fl_Input_8drawtextEiiii
     /tmp/ccIe3i3B.s:8180   .bss._ZN9Fl_Input_11was_up_downE:0000000000000000 _ZN9Fl_Input_11was_up_downE
     /tmp/ccIe3i3B.s:8187   .bss._ZN9Fl_Input_11up_down_posE:0000000000000000 _ZN9Fl_Input_11up_down_posE
     /tmp/ccIe3i3B.s:3030   .text._ZNK9Fl_Input_8word_endEi:0000000000000000 _ZNK9Fl_Input_8word_endEi
     /tmp/ccIe3i3B.s:3192   .text._ZNK9Fl_Input_10word_startEi:0000000000000000 _ZNK9Fl_Input_10word_startEi
     /tmp/ccIe3i3B.s:3365   .text._ZNK9Fl_Input_8line_endEi:0000000000000000 _ZNK9Fl_Input_8line_endEi
     /tmp/ccIe3i3B.s:3502   .text._ZNK9Fl_Input_10line_startEi:0000000000000000 _ZNK9Fl_Input_10line_startEi
     /tmp/ccIe3i3B.s:3536   .text._ZN9Fl_Input_8positionEii:0000000000000000 _ZN9Fl_Input_8positionEii
     /tmp/ccIe3i3B.s:3950   .text._ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35:0000000000000000 _ZN9Fl_Input_12handle_mouseEiiiii.part.33.constprop.35
     /tmp/ccIe3i3B.s:4528   .text._ZN9Fl_Input_12handle_mouseEiiiii:0000000000000000 _ZN9Fl_Input_12handle_mouseEiiiii
     /tmp/ccIe3i3B.s:4564   .text._ZN9Fl_Input_16up_down_positionEii:0000000000000000 _ZN9Fl_Input_16up_down_positionEii
     /tmp/ccIe3i3B.s:4763   .text._ZN9Fl_Input_4copyEi:0000000000000000 _ZN9Fl_Input_4copyEi
     /tmp/ccIe3i3B.s:4840   .text._ZN9Fl_Input_9copy_cutsEv:0000000000000000 _ZN9Fl_Input_9copy_cutsEv
     /tmp/ccIe3i3B.s:8137   .bss._ZL7yankcut:0000000000000000 _ZL7yankcut
     /tmp/ccIe3i3B.s:4900   .text._ZN9Fl_Input_17maybe_do_callbackEv:0000000000000000 _ZN9Fl_Input_17maybe_do_callbackEv
     /tmp/ccIe3i3B.s:4950   .text._ZN9Fl_Input_C2EiiiiPKc:0000000000000000 _ZN9Fl_Input_C2EiiiiPKc
     /tmp/ccIe3i3B.s:8120   .rodata._ZTV9Fl_Input_:0000000000000000 _ZTV9Fl_Input_
     /tmp/ccIe3i3B.s:4950   .text._ZN9Fl_Input_C2EiiiiPKc:0000000000000000 _ZN9Fl_Input_C1EiiiiPKc
     /tmp/ccIe3i3B.s:5054   .text._ZN9Fl_Input_13put_in_bufferEi:0000000000000000 _ZN9Fl_Input_13put_in_bufferEi
     /tmp/ccIe3i3B.s:5248   .text._ZN9Fl_Input_7replaceEiiPKci:0000000000000000 _ZN9Fl_Input_7replaceEiiPKci
     /tmp/ccIe3i3B.s:8161   .bss._ZL10undowidget:0000000000000000 _ZL10undowidget
     /tmp/ccIe3i3B.s:8149   .bss._ZL7undocut:0000000000000000 _ZL7undocut
     /tmp/ccIe3i3B.s:8143   .bss._ZL10undoinsert:0000000000000000 _ZL10undoinsert
     /tmp/ccIe3i3B.s:8155   .bss._ZL6undoat:0000000000000000 _ZL6undoat
     /tmp/ccIe3i3B.s:6131   .text._ZN9Fl_Input_10handletextEiiiii:0000000000000000 _ZN9Fl_Input_10handletextEiiiii
     /tmp/ccIe3i3B.s:7068   .text._ZN9Fl_Input_4undoEv:0000000000000000 _ZN9Fl_Input_4undoEv
     /tmp/ccIe3i3B.s:7382   .text._ZN9Fl_Input_12static_valueEPKci:0000000000000000 _ZN9Fl_Input_12static_valueEPKci
     /tmp/ccIe3i3B.s:7636   .text._ZN9Fl_Input_12static_valueEPKc:0000000000000000 _ZN9Fl_Input_12static_valueEPKc
     /tmp/ccIe3i3B.s:7701   .text._ZN9Fl_Input_5valueEPKci:0000000000000000 _ZN9Fl_Input_5valueEPKci
     /tmp/ccIe3i3B.s:7757   .text._ZN9Fl_Input_5valueEPKc:0000000000000000 _ZN9Fl_Input_5valueEPKc
     /tmp/ccIe3i3B.s:7822   .text._ZN9Fl_Input_D2Ev:0000000000000000 _ZN9Fl_Input_D2Ev
     /tmp/ccIe3i3B.s:7822   .text._ZN9Fl_Input_D2Ev:0000000000000000 _ZN9Fl_Input_D1Ev
     /tmp/ccIe3i3B.s:7890   .text._ZN9Fl_Input_D0Ev:0000000000000000 _ZN9Fl_Input_D0Ev
     /tmp/ccIe3i3B.s:7925   .text._ZN9Fl_Input_12linesPerPageEv:0000000000000000 _ZN9Fl_Input_12linesPerPageEv
     /tmp/ccIe3i3B.s:8016   .text._ZNK9Fl_Input_5indexEi:0000000000000000 _ZNK9Fl_Input_5indexEi
     /tmp/ccIe3i3B.s:8071   .text._ZN9Fl_Input_6resizeEiiii:0000000000000000 _ZN9Fl_Input_6resizeEiiii
     /tmp/ccIe3i3B.s:8104   .rodata._ZTS9Fl_Input_:0000000000000000 _ZTS9Fl_Input_
     /tmp/ccIe3i3B.s:8111   .rodata._ZTI9Fl_Input_:0000000000000000 _ZTI9Fl_Input_
     /tmp/ccIe3i3B.s:8204   .rodata.cst8:0000000000000000 .LC17
     /tmp/ccIe3i3B.s:8197   .rodata.cst4:0000000000000000 .LC15
     /tmp/ccIe3i3B.s:8200   .rodata.cst4:0000000000000004 .LC16
     /tmp/ccIe3i3B.s:8209   .rodata.cst4:0000000000000008 .LC18
     /tmp/ccIe3i3B.s:8212   .rodata.cst4:000000000000000c .LC19
     /tmp/ccIe3i3B.s:8215   .rodata.cst4:0000000000000010 .LC20
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
                           .group:0000000000000000 wm4.Fl_Input_.H.29.d7da98677474df62c9e3a4b308fba587
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
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157
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
__ctype_b_loc
strchr
realloc
malloc
_ZN2Fl6box_dwE10Fl_Boxtype
fl_graphics_driver
fl_utf_nb_char
fl_utf8len
fl_utf8encode
fl_utf8decode
__stack_chk_fail
_ZN9Fl_Widget6damageEh
_ZN2Fl6focus_E
_ZN2Fl7pushed_E
_ZNK9Fl_Widget8active_rEv
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dxE10Fl_Boxtype
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_Z7fl_drawPKciff
_Z11fl_contrastjj
strlen
_ZNK9Fl_Widget6windowEv
_Z11fl_set_spotiiiiiiP9Fl_Window
_Z11fl_inactivej
_ZN2Fl3e_xE
_ZN2Fl8e_clicksE
_ZN2Fl3e_yE
_ZN2Fl4copyEPKcii
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZN9Fl_WidgetC2EiiiiPKc
FL_NORMAL_SIZE
memmove
memcpy
_Z13fl_reset_spotv
_ZN2Fl6e_textE
_ZN2Fl8e_lengthE
_ZN2Fl7e_stateE
_ZN2Fl5focusEP9Fl_Widget
_ZN9Fl_Widget13test_shortcutEv
_ZN2Fl6optionENS_9Fl_OptionE
_ZN9Fl_Window6cursorE9Fl_Cursor
_ZN2Fl13test_shortcutEj
_Z7fl_beepi
free
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN9Fl_Widget6resizeEiiii
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Widget
__cxa_pure_virtual
_ZN9Fl_Widget6handleEi
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
