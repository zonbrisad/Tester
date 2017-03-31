   1              		.file	"Fl_Input.cxx"
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
  80              		.section	.text.unlikely._ZN8Fl_Input4drawEv,"ax",@progbits
  81              		.align 2
  82              	.LCOLDB3:
  83              		.section	.text._ZN8Fl_Input4drawEv,"ax",@progbits
  84              	.LHOTB3:
  85              		.align 2
  86              		.p2align 4,,15
  87              		.globl	_ZN8Fl_Input4drawEv
  89              	_ZN8Fl_Input4drawEv:
  90              	.LFB517:
  91              		.file 2 "fltk-1.3.4-1/src/Fl_Input.cxx"
   1:fltk-1.3.4-1/src/Fl_Input.cxx ****    1              		.file	"Fl_Input.cxx"
   2:fltk-1.3.4-1/src/Fl_Input.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Input.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Input.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Input.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Input.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Input.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Input.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Input.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Input.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Input.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Input.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Input.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Input.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Input.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Input.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Input.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Input.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Input.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Input.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Input.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Input.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Input.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Input.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Input.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Input.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Input.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Input.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Input.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Input.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Input.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Input.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Input.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Input.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Input.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Input.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Input.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Input.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Input.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Input.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Input.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Input.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Input.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Input.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Input.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Input.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  92              		.loc 2 46 0
  93              		.cfi_startproc
  94              	.LVL3:
  47:fltk-1.3.4-1/src/Fl_Input.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  95              		.loc 2 47 0
  96 0000 0FB6476C 		movzbl	108(%rdi), %eax
  97 0004 83E007   		andl	$7, %eax
  98 0007 3C03     		cmpb	$3, %al
  99 0009 7475     		je	.L9
  46:fltk-1.3.4-1/src/Fl_Input.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 100              		.loc 2 46 0
 101 000b 4157     		pushq	%r15
 102              		.cfi_def_cfa_offset 16
 103              		.cfi_offset 15, -16
 104 000d 4156     		pushq	%r14
 105              		.cfi_def_cfa_offset 24
 106              		.cfi_offset 14, -24
 107 000f 4155     		pushq	%r13
 108              		.cfi_def_cfa_offset 32
 109              		.cfi_offset 13, -32
 110 0011 4154     		pushq	%r12
 111              		.cfi_def_cfa_offset 40
 112              		.cfi_offset 12, -40
 113 0013 55       		pushq	%rbp
 114              		.cfi_def_cfa_offset 48
 115              		.cfi_offset 6, -48
 116 0014 53       		pushq	%rbx
 117              		.cfi_def_cfa_offset 56
 118              		.cfi_offset 3, -56
 119 0015 4889FB   		movq	%rdi, %rbx
 120              	.LVL4:
 121 0018 4883EC08 		subq	$8, %rsp
 122              		.cfi_def_cfa_offset 64
  48:fltk-1.3.4-1/src/Fl_Input.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Input.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 123              		.loc 2 49 0
 124 001c 807F6D00 		cmpb	$0, 109(%rdi)
 125              	.LBB668:
 126              	.LBB669:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 127              		.loc 1 363 0
 128 0020 0FB66F6E 		movzbl	110(%rdi), %ebp
 129              	.LVL5:
 130              	.LBE669:
 131              	.LBE668:
 132              		.loc 2 49 0
 133 0024 7862     		js	.L11
 134              	.LVL6:
 135              	.L7:
 136 0026 448B7B2C 		movl	44(%rbx), %r15d
 137              	.LVL7:
  50:fltk-1.3.4-1/src/Fl_Input.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Input.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 138              		.loc 2 51 0
 139 002a 89EF     		movl	%ebp, %edi
 140 002c E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 140      00
 141              	.LVL8:
 142 0031 89EF     		movl	%ebp, %edi
 143 0033 448B7328 		movl	40(%rbx), %r14d
  50:fltk-1.3.4-1/src/Fl_Input.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 144              		.loc 2 50 0
 145 0037 4129C7   		subl	%eax, %r15d
 146              	.LVL9:
 147              		.loc 2 51 0
 148 003a E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 148      00
 149              	.LVL10:
 150 003f 448B6324 		movl	36(%rbx), %r12d
  50:fltk-1.3.4-1/src/Fl_Input.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 151              		.loc 2 50 0
 152 0043 89EF     		movl	%ebp, %edi
 153 0045 4129C6   		subl	%eax, %r14d
 154              	.LVL11:
 155 0048 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 155      00
 156              	.LVL12:
 157 004d 89EF     		movl	%ebp, %edi
 158 004f 468D2C20 		leal	(%rax,%r12), %r13d
 159 0053 448B6320 		movl	32(%rbx), %r12d
 160              	.LVL13:
 161 0057 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 161      00
 162              	.LVL14:
  52:fltk-1.3.4-1/src/Fl_Input.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 163              		.loc 2 52 0
 164 005c 4883C408 		addq	$8, %rsp
 165              		.cfi_def_cfa_offset 56
  51:fltk-1.3.4-1/src/Fl_Input.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 166              		.loc 2 51 0
 167 0060 4589F8   		movl	%r15d, %r8d
 168 0063 4489F1   		movl	%r14d, %ecx
 169 0066 428D3420 		leal	(%rax,%r12), %esi
 170 006a 4489EA   		movl	%r13d, %edx
 171 006d 4889DF   		movq	%rbx, %rdi
 172              		.loc 2 52 0
 173 0070 5B       		popq	%rbx
 174              		.cfi_restore 3
 175              		.cfi_def_cfa_offset 48
 176              	.LVL15:
 177 0071 5D       		popq	%rbp
 178              		.cfi_restore 6
 179              		.cfi_def_cfa_offset 40
 180 0072 415C     		popq	%r12
 181              		.cfi_restore 12
 182              		.cfi_def_cfa_offset 32
 183 0074 415D     		popq	%r13
 184              		.cfi_restore 13
 185              		.cfi_def_cfa_offset 24
 186 0076 415E     		popq	%r14
 187              		.cfi_restore 14
 188              		.cfi_def_cfa_offset 16
 189 0078 415F     		popq	%r15
 190              		.cfi_restore 15
 191              		.cfi_def_cfa_offset 8
  51:fltk-1.3.4-1/src/Fl_Input.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 192              		.loc 2 51 0
 193 007a E9000000 		jmp	_ZN9Fl_Input_8drawtextEiiii
 193      00
 194              	.LVL16:
 195 007f 90       		.p2align 4,,10
 196              		.p2align 3
 197              	.L9:
 198 0080 F3C3     		rep ret
 199              	.LVL17:
 200              		.p2align 4,,10
 201 0082 660F1F44 		.p2align 3
 201      0000
 202              	.L11:
 203              		.cfi_def_cfa_offset 64
 204              		.cfi_offset 3, -56
 205              		.cfi_offset 6, -48
 206              		.cfi_offset 12, -40
 207              		.cfi_offset 13, -32
 208              		.cfi_offset 14, -24
 209              		.cfi_offset 15, -16
  49:fltk-1.3.4-1/src/Fl_Input.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 210              		.loc 2 49 0 discriminator 1
 211 0088 8B5764   		movl	100(%rdi), %edx
 212 008b 89EE     		movl	%ebp, %esi
 213 008d E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
 213      00
 214              	.LVL18:
 215 0092 EB92     		jmp	.L7
 216              		.cfi_endproc
 217              	.LFE517:
 219              		.section	.text.unlikely._ZN8Fl_Input4drawEv
 220              	.LCOLDE3:
 221              		.section	.text._ZN8Fl_Input4drawEv
 222              	.LHOTE3:
 223              		.section	.text.unlikely._ZN8Fl_InputD2Ev,"axG",@progbits,_ZN8Fl_InputD5Ev,comdat
 224              		.align 2
 225              	.LCOLDB4:
 226              		.section	.text._ZN8Fl_InputD2Ev,"axG",@progbits,_ZN8Fl_InputD5Ev,comdat
 227              	.LHOTB4:
 228              		.align 2
 229              		.p2align 4,,15
 230              		.weak	_ZN8Fl_InputD2Ev
 232              	_ZN8Fl_InputD2Ev:
 233              	.LFB555:
 234              		.file 3 "fltk-1.3.4-1/FL/Fl_Input.H"
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
 235              		.loc 3 221 0
 236              		.cfi_startproc
 237              	.LVL19:
 238              	.LBB670:
 239              		.loc 3 221 0
 240 0000 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 240      000000
 241 0007 E9000000 		jmp	_ZN9Fl_Input_D2Ev
 241      00
 242              	.LVL20:
 243              	.LBE670:
 244              		.cfi_endproc
 245              	.LFE555:
 247              		.section	.text.unlikely._ZN8Fl_InputD2Ev,"axG",@progbits,_ZN8Fl_InputD5Ev,comdat
 248              	.LCOLDE4:
 249              		.section	.text._ZN8Fl_InputD2Ev,"axG",@progbits,_ZN8Fl_InputD5Ev,comdat
 250              	.LHOTE4:
 251              		.weak	_ZN8Fl_InputD1Ev
 252              		.set	_ZN8Fl_InputD1Ev,_ZN8Fl_InputD2Ev
 253              		.section	.text.unlikely._ZN8Fl_InputD0Ev,"axG",@progbits,_ZN8Fl_InputD5Ev,comdat
 254              		.align 2
 255              	.LCOLDB5:
 256              		.section	.text._ZN8Fl_InputD0Ev,"axG",@progbits,_ZN8Fl_InputD5Ev,comdat
 257              	.LHOTB5:
 258              		.align 2
 259              		.p2align 4,,15
 260              		.weak	_ZN8Fl_InputD0Ev
 262              	_ZN8Fl_InputD0Ev:
 263              	.LFB557:
 264              		.loc 3 221 0
 265              		.cfi_startproc
 266              	.LVL21:
 267 0000 53       		pushq	%rbx
 268              		.cfi_def_cfa_offset 16
 269              		.cfi_offset 3, -16
 270              		.loc 3 221 0
 271 0001 4889FB   		movq	%rdi, %rbx
 272              	.LBB671:
 273              	.LBB672:
 274 0004 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 274      000000
 275 000b E8000000 		call	_ZN9Fl_Input_D2Ev
 275      00
 276              	.LVL22:
 277              	.LBE672:
 278              	.LBE671:
 279 0010 4889DF   		movq	%rbx, %rdi
 280 0013 5B       		popq	%rbx
 281              		.cfi_def_cfa_offset 8
 282              	.LVL23:
 283 0014 E9000000 		jmp	_ZdlPv
 283      00
 284              	.LVL24:
 285              		.cfi_endproc
 286              	.LFE557:
 288              		.section	.text.unlikely._ZN8Fl_InputD0Ev,"axG",@progbits,_ZN8Fl_InputD5Ev,comdat
 289              	.LCOLDE5:
 290              		.section	.text._ZN8Fl_InputD0Ev,"axG",@progbits,_ZN8Fl_InputD5Ev,comdat
 291              	.LHOTE5:
 292              		.section	.text.unlikely._ZN14Fl_Float_InputD2Ev,"axG",@progbits,_ZN14Fl_Float_InputD5Ev,comdat
 293              		.align 2
 294              	.LCOLDB6:
 295              		.section	.text._ZN14Fl_Float_InputD2Ev,"axG",@progbits,_ZN14Fl_Float_InputD5Ev,comdat
 296              	.LHOTB6:
 297              		.align 2
 298              		.p2align 4,,15
 299              		.weak	_ZN14Fl_Float_InputD2Ev
 301              	_ZN14Fl_Float_InputD2Ev:
 302              	.LFB597:
 303              		.file 4 "fltk-1.3.4-1/FL/Fl_Float_Input.H"
   1:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //
   2:fltk-1.3.4-1/FL/Fl_Float_Input.H **** // "$Id: Fl_Float_Input.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //
   4:fltk-1.3.4-1/FL/Fl_Float_Input.H **** // Floating point input header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //
   6:fltk-1.3.4-1/FL/Fl_Float_Input.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //
   8:fltk-1.3.4-1/FL/Fl_Float_Input.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Float_Input.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Float_Input.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //
  12:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //
  14:fltk-1.3.4-1/FL/Fl_Float_Input.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //
  16:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Float_Input.H **** //
  18:fltk-1.3.4-1/FL/Fl_Float_Input.H **** 
  19:fltk-1.3.4-1/FL/Fl_Float_Input.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Float_Input.H ****    Fl_Float_Input widget . */
  21:fltk-1.3.4-1/FL/Fl_Float_Input.H **** 
  22:fltk-1.3.4-1/FL/Fl_Float_Input.H **** #ifndef Fl_Float_Input_H
  23:fltk-1.3.4-1/FL/Fl_Float_Input.H **** #define Fl_Float_Input_H
  24:fltk-1.3.4-1/FL/Fl_Float_Input.H **** 
  25:fltk-1.3.4-1/FL/Fl_Float_Input.H **** #include "Fl_Input.H"
  26:fltk-1.3.4-1/FL/Fl_Float_Input.H **** 
  27:fltk-1.3.4-1/FL/Fl_Float_Input.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Float_Input.H ****   The Fl_Float_Input class is a subclass of Fl_Input
  29:fltk-1.3.4-1/FL/Fl_Float_Input.H ****   that only allows the user to type floating point numbers (sign,
  30:fltk-1.3.4-1/FL/Fl_Float_Input.H ****   digits, decimal point, more digits, 'E' or 'e', sign, digits).
  31:fltk-1.3.4-1/FL/Fl_Float_Input.H **** */
  32:fltk-1.3.4-1/FL/Fl_Float_Input.H **** class FL_EXPORT Fl_Float_Input : public Fl_Input {
 304              		.loc 4 32 0
 305              		.cfi_startproc
 306              	.LVL25:
 307              	.LBB673:
 308              	.LBB674:
 309              		.loc 3 221 0
 310 0000 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 310      000000
 311 0007 E9000000 		jmp	_ZN9Fl_Input_D2Ev
 311      00
 312              	.LVL26:
 313              	.LBE674:
 314              	.LBE673:
 315              		.cfi_endproc
 316              	.LFE597:
 318              		.section	.text.unlikely._ZN14Fl_Float_InputD2Ev,"axG",@progbits,_ZN14Fl_Float_InputD5Ev,comdat
 319              	.LCOLDE6:
 320              		.section	.text._ZN14Fl_Float_InputD2Ev,"axG",@progbits,_ZN14Fl_Float_InputD5Ev,comdat
 321              	.LHOTE6:
 322              		.weak	_ZN14Fl_Float_InputD1Ev
 323              		.set	_ZN14Fl_Float_InputD1Ev,_ZN14Fl_Float_InputD2Ev
 324              		.section	.text.unlikely._ZN14Fl_Float_InputD0Ev,"axG",@progbits,_ZN14Fl_Float_InputD5Ev,comdat
 325              		.align 2
 326              	.LCOLDB7:
 327              		.section	.text._ZN14Fl_Float_InputD0Ev,"axG",@progbits,_ZN14Fl_Float_InputD5Ev,comdat
 328              	.LHOTB7:
 329              		.align 2
 330              		.p2align 4,,15
 331              		.weak	_ZN14Fl_Float_InputD0Ev
 333              	_ZN14Fl_Float_InputD0Ev:
 334              	.LFB599:
 335              		.loc 4 32 0
 336              		.cfi_startproc
 337              	.LVL27:
 338 0000 53       		pushq	%rbx
 339              		.cfi_def_cfa_offset 16
 340              		.cfi_offset 3, -16
 341              		.loc 4 32 0
 342 0001 4889FB   		movq	%rdi, %rbx
 343              	.LBB675:
 344              	.LBB676:
 345              	.LBB677:
 346              		.loc 3 221 0
 347 0004 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 347      000000
 348 000b E8000000 		call	_ZN9Fl_Input_D2Ev
 348      00
 349              	.LVL28:
 350              	.LBE677:
 351              	.LBE676:
 352              	.LBE675:
 353              		.loc 4 32 0
 354 0010 4889DF   		movq	%rbx, %rdi
 355 0013 5B       		popq	%rbx
 356              		.cfi_def_cfa_offset 8
 357              	.LVL29:
 358 0014 E9000000 		jmp	_ZdlPv
 358      00
 359              	.LVL30:
 360              		.cfi_endproc
 361              	.LFE599:
 363              		.section	.text.unlikely._ZN14Fl_Float_InputD0Ev,"axG",@progbits,_ZN14Fl_Float_InputD5Ev,comdat
 364              	.LCOLDE7:
 365              		.section	.text._ZN14Fl_Float_InputD0Ev,"axG",@progbits,_ZN14Fl_Float_InputD5Ev,comdat
 366              	.LHOTE7:
 367              		.section	.text.unlikely._ZN12Fl_Int_InputD2Ev,"axG",@progbits,_ZN12Fl_Int_InputD5Ev,comdat
 368              		.align 2
 369              	.LCOLDB8:
 370              		.section	.text._ZN12Fl_Int_InputD2Ev,"axG",@progbits,_ZN12Fl_Int_InputD5Ev,comdat
 371              	.LHOTB8:
 372              		.align 2
 373              		.p2align 4,,15
 374              		.weak	_ZN12Fl_Int_InputD2Ev
 376              	_ZN12Fl_Int_InputD2Ev:
 377              	.LFB593:
 378              		.file 5 "fltk-1.3.4-1/FL/Fl_Int_Input.H"
   1:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //
   2:fltk-1.3.4-1/FL/Fl_Int_Input.H **** // "$Id: Fl_Int_Input.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //
   4:fltk-1.3.4-1/FL/Fl_Int_Input.H **** // Integer input header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //
   6:fltk-1.3.4-1/FL/Fl_Int_Input.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //
   8:fltk-1.3.4-1/FL/Fl_Int_Input.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Int_Input.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Int_Input.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //
  12:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //
  14:fltk-1.3.4-1/FL/Fl_Int_Input.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //
  16:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Int_Input.H **** //
  18:fltk-1.3.4-1/FL/Fl_Int_Input.H **** 
  19:fltk-1.3.4-1/FL/Fl_Int_Input.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Int_Input.H ****    Fl_Int_Input widget . */
  21:fltk-1.3.4-1/FL/Fl_Int_Input.H **** 
  22:fltk-1.3.4-1/FL/Fl_Int_Input.H **** #ifndef Fl_Int_Input_H
  23:fltk-1.3.4-1/FL/Fl_Int_Input.H **** #define Fl_Int_Input_H
  24:fltk-1.3.4-1/FL/Fl_Int_Input.H **** 
  25:fltk-1.3.4-1/FL/Fl_Int_Input.H **** #include "Fl_Input.H"
  26:fltk-1.3.4-1/FL/Fl_Int_Input.H **** 
  27:fltk-1.3.4-1/FL/Fl_Int_Input.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Int_Input.H ****   The Fl_Int_Input class is a subclass of Fl_Input that only allows
  29:fltk-1.3.4-1/FL/Fl_Int_Input.H ****   the user to type decimal digits (or hex numbers of the form 0xaef).
  30:fltk-1.3.4-1/FL/Fl_Int_Input.H **** */
  31:fltk-1.3.4-1/FL/Fl_Int_Input.H **** class FL_EXPORT Fl_Int_Input : public Fl_Input {
 379              		.loc 5 31 0
 380              		.cfi_startproc
 381              	.LVL31:
 382              	.LBB678:
 383              	.LBB679:
 384              		.loc 3 221 0
 385 0000 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 385      000000
 386 0007 E9000000 		jmp	_ZN9Fl_Input_D2Ev
 386      00
 387              	.LVL32:
 388              	.LBE679:
 389              	.LBE678:
 390              		.cfi_endproc
 391              	.LFE593:
 393              		.section	.text.unlikely._ZN12Fl_Int_InputD2Ev,"axG",@progbits,_ZN12Fl_Int_InputD5Ev,comdat
 394              	.LCOLDE8:
 395              		.section	.text._ZN12Fl_Int_InputD2Ev,"axG",@progbits,_ZN12Fl_Int_InputD5Ev,comdat
 396              	.LHOTE8:
 397              		.weak	_ZN12Fl_Int_InputD1Ev
 398              		.set	_ZN12Fl_Int_InputD1Ev,_ZN12Fl_Int_InputD2Ev
 399              		.section	.text.unlikely._ZN12Fl_Int_InputD0Ev,"axG",@progbits,_ZN12Fl_Int_InputD5Ev,comdat
 400              		.align 2
 401              	.LCOLDB9:
 402              		.section	.text._ZN12Fl_Int_InputD0Ev,"axG",@progbits,_ZN12Fl_Int_InputD5Ev,comdat
 403              	.LHOTB9:
 404              		.align 2
 405              		.p2align 4,,15
 406              		.weak	_ZN12Fl_Int_InputD0Ev
 408              	_ZN12Fl_Int_InputD0Ev:
 409              	.LFB595:
 410              		.loc 5 31 0
 411              		.cfi_startproc
 412              	.LVL33:
 413 0000 53       		pushq	%rbx
 414              		.cfi_def_cfa_offset 16
 415              		.cfi_offset 3, -16
 416              		.loc 5 31 0
 417 0001 4889FB   		movq	%rdi, %rbx
 418              	.LBB680:
 419              	.LBB681:
 420              	.LBB682:
 421              		.loc 3 221 0
 422 0004 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 422      000000
 423 000b E8000000 		call	_ZN9Fl_Input_D2Ev
 423      00
 424              	.LVL34:
 425              	.LBE682:
 426              	.LBE681:
 427              	.LBE680:
 428              		.loc 5 31 0
 429 0010 4889DF   		movq	%rbx, %rdi
 430 0013 5B       		popq	%rbx
 431              		.cfi_def_cfa_offset 8
 432              	.LVL35:
 433 0014 E9000000 		jmp	_ZdlPv
 433      00
 434              	.LVL36:
 435              		.cfi_endproc
 436              	.LFE595:
 438              		.section	.text.unlikely._ZN12Fl_Int_InputD0Ev,"axG",@progbits,_ZN12Fl_Int_InputD5Ev,comdat
 439              	.LCOLDE9:
 440              		.section	.text._ZN12Fl_Int_InputD0Ev,"axG",@progbits,_ZN12Fl_Int_InputD5Ev,comdat
 441              	.LHOTE9:
 442              		.section	.text.unlikely._ZN18Fl_Multiline_InputD2Ev,"axG",@progbits,_ZN18Fl_Multiline_InputD5Ev,co
 443              		.align 2
 444              	.LCOLDB10:
 445              		.section	.text._ZN18Fl_Multiline_InputD2Ev,"axG",@progbits,_ZN18Fl_Multiline_InputD5Ev,comdat
 446              	.LHOTB10:
 447              		.align 2
 448              		.p2align 4,,15
 449              		.weak	_ZN18Fl_Multiline_InputD2Ev
 451              	_ZN18Fl_Multiline_InputD2Ev:
 452              	.LFB589:
 453              		.file 6 "fltk-1.3.4-1/FL/Fl_Multiline_Input.H"
   1:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //
   2:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** // "$Id: Fl_Multiline_Input.H 10365 2014-10-09 11:45:02Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //
   4:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** // Multiline input header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //
   6:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //
   8:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //
  12:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //
  14:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //
  16:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** //
  18:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** 
  19:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****    Fl_Multiline_Input widget . */ 
  21:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** 
  22:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** #ifndef Fl_Multiline_Input_H
  23:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** #define Fl_Multiline_Input_H
  24:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** 
  25:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** #include "Fl_Input.H"
  26:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** 
  27:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   This input field displays '\\n' characters as new lines rather than ^J,
  29:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   and accepts the Return, Tab, and up and down arrow keys.  This is for
  30:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   editing multiline text.
  31:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** 
  32:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   This is far from the nirvana of text editors, and is probably only
  33:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   good for small bits of text, 10 lines at most. Note that this widget
  34:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   does not support scrollbars or per-character color control.
  35:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** 
  36:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   If you are presenting large amounts of text and need scrollbars
  37:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   or full color control of characters, you probably want Fl_Text_Editor
  38:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   instead.
  39:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** 
  40:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   In FLTK 1.3.x, the default behavior of the 'Tab' key was changed
  41:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   to support consistent focus navigation. To get the older FLTK 1.1.x
  42:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   behavior, set Fl_Input_::tab_nav() to 0. Newer programs should consider using
  43:fltk-1.3.4-1/FL/Fl_Multiline_Input.H ****   Fl_Text_Editor.
  44:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** */
  45:fltk-1.3.4-1/FL/Fl_Multiline_Input.H **** class FL_EXPORT Fl_Multiline_Input : public Fl_Input {
 454              		.loc 6 45 0
 455              		.cfi_startproc
 456              	.LVL37:
 457              	.LBB683:
 458              	.LBB684:
 459              		.loc 3 221 0
 460 0000 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 460      000000
 461 0007 E9000000 		jmp	_ZN9Fl_Input_D2Ev
 461      00
 462              	.LVL38:
 463              	.LBE684:
 464              	.LBE683:
 465              		.cfi_endproc
 466              	.LFE589:
 468              		.section	.text.unlikely._ZN18Fl_Multiline_InputD2Ev,"axG",@progbits,_ZN18Fl_Multiline_InputD5Ev,co
 469              	.LCOLDE10:
 470              		.section	.text._ZN18Fl_Multiline_InputD2Ev,"axG",@progbits,_ZN18Fl_Multiline_InputD5Ev,comdat
 471              	.LHOTE10:
 472              		.weak	_ZN18Fl_Multiline_InputD1Ev
 473              		.set	_ZN18Fl_Multiline_InputD1Ev,_ZN18Fl_Multiline_InputD2Ev
 474              		.section	.text.unlikely._ZN18Fl_Multiline_InputD0Ev,"axG",@progbits,_ZN18Fl_Multiline_InputD5Ev,co
 475              		.align 2
 476              	.LCOLDB11:
 477              		.section	.text._ZN18Fl_Multiline_InputD0Ev,"axG",@progbits,_ZN18Fl_Multiline_InputD5Ev,comdat
 478              	.LHOTB11:
 479              		.align 2
 480              		.p2align 4,,15
 481              		.weak	_ZN18Fl_Multiline_InputD0Ev
 483              	_ZN18Fl_Multiline_InputD0Ev:
 484              	.LFB591:
 485              		.loc 6 45 0
 486              		.cfi_startproc
 487              	.LVL39:
 488 0000 53       		pushq	%rbx
 489              		.cfi_def_cfa_offset 16
 490              		.cfi_offset 3, -16
 491              		.loc 6 45 0
 492 0001 4889FB   		movq	%rdi, %rbx
 493              	.LBB685:
 494              	.LBB686:
 495              	.LBB687:
 496              		.loc 3 221 0
 497 0004 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 497      000000
 498 000b E8000000 		call	_ZN9Fl_Input_D2Ev
 498      00
 499              	.LVL40:
 500              	.LBE687:
 501              	.LBE686:
 502              	.LBE685:
 503              		.loc 6 45 0
 504 0010 4889DF   		movq	%rbx, %rdi
 505 0013 5B       		popq	%rbx
 506              		.cfi_def_cfa_offset 8
 507              	.LVL41:
 508 0014 E9000000 		jmp	_ZdlPv
 508      00
 509              	.LVL42:
 510              		.cfi_endproc
 511              	.LFE591:
 513              		.section	.text.unlikely._ZN18Fl_Multiline_InputD0Ev,"axG",@progbits,_ZN18Fl_Multiline_InputD5Ev,co
 514              	.LCOLDE11:
 515              		.section	.text._ZN18Fl_Multiline_InputD0Ev,"axG",@progbits,_ZN18Fl_Multiline_InputD5Ev,comdat
 516              	.LHOTE11:
 517              		.section	.text.unlikely._ZN9Fl_OutputD2Ev,"axG",@progbits,_ZN9Fl_OutputD5Ev,comdat
 518              		.align 2
 519              	.LCOLDB12:
 520              		.section	.text._ZN9Fl_OutputD2Ev,"axG",@progbits,_ZN9Fl_OutputD5Ev,comdat
 521              	.LHOTB12:
 522              		.align 2
 523              		.p2align 4,,15
 524              		.weak	_ZN9Fl_OutputD2Ev
 526              	_ZN9Fl_OutputD2Ev:
 527              	.LFB571:
 528              		.file 7 "fltk-1.3.4-1/FL/Fl_Output.H"
   1:fltk-1.3.4-1/FL/Fl_Output.H **** //
   2:fltk-1.3.4-1/FL/Fl_Output.H **** // "$Id: Fl_Output.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Output.H **** //
   4:fltk-1.3.4-1/FL/Fl_Output.H **** // Output header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Output.H **** //
   6:fltk-1.3.4-1/FL/Fl_Output.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Output.H **** //
   8:fltk-1.3.4-1/FL/Fl_Output.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Output.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Output.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Output.H **** //
  12:fltk-1.3.4-1/FL/Fl_Output.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Output.H **** //
  14:fltk-1.3.4-1/FL/Fl_Output.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Output.H **** //
  16:fltk-1.3.4-1/FL/Fl_Output.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Output.H **** //
  18:fltk-1.3.4-1/FL/Fl_Output.H **** 
  19:fltk-1.3.4-1/FL/Fl_Output.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Output.H ****    Fl_Output widget . */
  21:fltk-1.3.4-1/FL/Fl_Output.H **** 
  22:fltk-1.3.4-1/FL/Fl_Output.H **** #ifndef Fl_Output_H
  23:fltk-1.3.4-1/FL/Fl_Output.H **** #define Fl_Output_H
  24:fltk-1.3.4-1/FL/Fl_Output.H **** 
  25:fltk-1.3.4-1/FL/Fl_Output.H **** #include "Fl_Input.H"
  26:fltk-1.3.4-1/FL/Fl_Output.H **** /**
  27:fltk-1.3.4-1/FL/Fl_Output.H ****   This widget displays a piece of text.
  28:fltk-1.3.4-1/FL/Fl_Output.H ****   
  29:fltk-1.3.4-1/FL/Fl_Output.H ****   When you set the value() , Fl_Output does a strcpy() to its own storage,
  30:fltk-1.3.4-1/FL/Fl_Output.H ****   which is useful for program-generated values.  The user may select
  31:fltk-1.3.4-1/FL/Fl_Output.H ****   portions of the text using the mouse and paste the contents into other
  32:fltk-1.3.4-1/FL/Fl_Output.H ****   fields or programs.
  33:fltk-1.3.4-1/FL/Fl_Output.H **** 
  34:fltk-1.3.4-1/FL/Fl_Output.H ****   <P align=CENTER>\image html text.png</P>
  35:fltk-1.3.4-1/FL/Fl_Output.H ****   \image latex text.png "Fl_Output" width=8cm
  36:fltk-1.3.4-1/FL/Fl_Output.H **** 
  37:fltk-1.3.4-1/FL/Fl_Output.H ****   There is a single subclass, Fl_Multiline_Output, which allows you to
  38:fltk-1.3.4-1/FL/Fl_Output.H ****   display multiple lines of text. Fl_Multiline_Output does not provide
  39:fltk-1.3.4-1/FL/Fl_Output.H ****   scroll bars. If a more complete text editing widget is needed, use
  40:fltk-1.3.4-1/FL/Fl_Output.H ****   Fl_Text_Display instead.
  41:fltk-1.3.4-1/FL/Fl_Output.H **** 
  42:fltk-1.3.4-1/FL/Fl_Output.H ****   The text may contain any characters except \\0, and will correctly
  43:fltk-1.3.4-1/FL/Fl_Output.H ****   display anything, using ^X notation for unprintable control characters
  44:fltk-1.3.4-1/FL/Fl_Output.H ****   and \\nnn notation for unprintable characters with the high bit set. It
  45:fltk-1.3.4-1/FL/Fl_Output.H ****   assumes the font can draw any characters in the ISO-Latin1 character set.
  46:fltk-1.3.4-1/FL/Fl_Output.H **** */
  47:fltk-1.3.4-1/FL/Fl_Output.H **** class FL_EXPORT Fl_Output : public Fl_Input {
 529              		.loc 7 47 0
 530              		.cfi_startproc
 531              	.LVL43:
 532              	.LBB688:
 533              	.LBB689:
 534              		.loc 3 221 0
 535 0000 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 535      000000
 536 0007 E9000000 		jmp	_ZN9Fl_Input_D2Ev
 536      00
 537              	.LVL44:
 538              	.LBE689:
 539              	.LBE688:
 540              		.cfi_endproc
 541              	.LFE571:
 543              		.section	.text.unlikely._ZN9Fl_OutputD2Ev,"axG",@progbits,_ZN9Fl_OutputD5Ev,comdat
 544              	.LCOLDE12:
 545              		.section	.text._ZN9Fl_OutputD2Ev,"axG",@progbits,_ZN9Fl_OutputD5Ev,comdat
 546              	.LHOTE12:
 547              		.weak	_ZN9Fl_OutputD1Ev
 548              		.set	_ZN9Fl_OutputD1Ev,_ZN9Fl_OutputD2Ev
 549              		.section	.text.unlikely._ZN9Fl_OutputD0Ev,"axG",@progbits,_ZN9Fl_OutputD5Ev,comdat
 550              		.align 2
 551              	.LCOLDB13:
 552              		.section	.text._ZN9Fl_OutputD0Ev,"axG",@progbits,_ZN9Fl_OutputD5Ev,comdat
 553              	.LHOTB13:
 554              		.align 2
 555              		.p2align 4,,15
 556              		.weak	_ZN9Fl_OutputD0Ev
 558              	_ZN9Fl_OutputD0Ev:
 559              	.LFB573:
 560              		.loc 7 47 0
 561              		.cfi_startproc
 562              	.LVL45:
 563 0000 53       		pushq	%rbx
 564              		.cfi_def_cfa_offset 16
 565              		.cfi_offset 3, -16
 566              		.loc 7 47 0
 567 0001 4889FB   		movq	%rdi, %rbx
 568              	.LBB690:
 569              	.LBB691:
 570              	.LBB692:
 571              		.loc 3 221 0
 572 0004 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 572      000000
 573 000b E8000000 		call	_ZN9Fl_Input_D2Ev
 573      00
 574              	.LVL46:
 575              	.LBE692:
 576              	.LBE691:
 577              	.LBE690:
 578              		.loc 7 47 0
 579 0010 4889DF   		movq	%rbx, %rdi
 580 0013 5B       		popq	%rbx
 581              		.cfi_def_cfa_offset 8
 582              	.LVL47:
 583 0014 E9000000 		jmp	_ZdlPv
 583      00
 584              	.LVL48:
 585              		.cfi_endproc
 586              	.LFE573:
 588              		.section	.text.unlikely._ZN9Fl_OutputD0Ev,"axG",@progbits,_ZN9Fl_OutputD5Ev,comdat
 589              	.LCOLDE13:
 590              		.section	.text._ZN9Fl_OutputD0Ev,"axG",@progbits,_ZN9Fl_OutputD5Ev,comdat
 591              	.LHOTE13:
 592              		.section	.text.unlikely._ZN19Fl_Multiline_OutputD2Ev,"axG",@progbits,_ZN19Fl_Multiline_OutputD5Ev,
 593              		.align 2
 594              	.LCOLDB14:
 595              		.section	.text._ZN19Fl_Multiline_OutputD2Ev,"axG",@progbits,_ZN19Fl_Multiline_OutputD5Ev,comdat
 596              	.LHOTB14:
 597              		.align 2
 598              		.p2align 4,,15
 599              		.weak	_ZN19Fl_Multiline_OutputD2Ev
 601              	_ZN19Fl_Multiline_OutputD2Ev:
 602              	.LFB585:
 603              		.file 8 "fltk-1.3.4-1/FL/Fl_Multiline_Output.H"
   1:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //
   2:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** // "$Id: Fl_Multiline_Output.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //
   4:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** // Multi line output header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //
   6:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //
   8:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //
  12:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //
  14:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //
  16:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** //
  18:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** 
  19:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****    Fl_Multiline_Output widget . */
  21:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** 
  22:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** #ifndef Fl_Multiline_Output_H
  23:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** #define Fl_Multiline_Output_H
  24:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** 
  25:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** #include "Fl_Output.H"
  26:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** 
  27:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   This widget is a subclass of Fl_Output that displays multiple
  29:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   lines of text. It also displays tab characters as whitespace to the
  30:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   next column.
  31:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** 
  32:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   Note that this widget does not support scrollbars, or per-character
  33:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   color control.
  34:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** 
  35:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   If you are presenting large amounts of read-only text 
  36:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   and need scrollbars, or full color control of characters,
  37:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   then use Fl_Text_Display. If you want to display HTML text,
  38:fltk-1.3.4-1/FL/Fl_Multiline_Output.H ****   use Fl_Help_View.
  39:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** */
  40:fltk-1.3.4-1/FL/Fl_Multiline_Output.H **** class FL_EXPORT Fl_Multiline_Output : public Fl_Output {
 604              		.loc 8 40 0
 605              		.cfi_startproc
 606              	.LVL49:
 607              	.LBB693:
 608              	.LBB694:
 609              	.LBB695:
 610              		.loc 3 221 0
 611 0000 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 611      000000
 612 0007 E9000000 		jmp	_ZN9Fl_Input_D2Ev
 612      00
 613              	.LVL50:
 614              	.LBE695:
 615              	.LBE694:
 616              	.LBE693:
 617              		.cfi_endproc
 618              	.LFE585:
 620              		.section	.text.unlikely._ZN19Fl_Multiline_OutputD2Ev,"axG",@progbits,_ZN19Fl_Multiline_OutputD5Ev,
 621              	.LCOLDE14:
 622              		.section	.text._ZN19Fl_Multiline_OutputD2Ev,"axG",@progbits,_ZN19Fl_Multiline_OutputD5Ev,comdat
 623              	.LHOTE14:
 624              		.weak	_ZN19Fl_Multiline_OutputD1Ev
 625              		.set	_ZN19Fl_Multiline_OutputD1Ev,_ZN19Fl_Multiline_OutputD2Ev
 626              		.section	.text.unlikely._ZN19Fl_Multiline_OutputD0Ev,"axG",@progbits,_ZN19Fl_Multiline_OutputD5Ev,
 627              		.align 2
 628              	.LCOLDB15:
 629              		.section	.text._ZN19Fl_Multiline_OutputD0Ev,"axG",@progbits,_ZN19Fl_Multiline_OutputD5Ev,comdat
 630              	.LHOTB15:
 631              		.align 2
 632              		.p2align 4,,15
 633              		.weak	_ZN19Fl_Multiline_OutputD0Ev
 635              	_ZN19Fl_Multiline_OutputD0Ev:
 636              	.LFB587:
 637              		.loc 8 40 0
 638              		.cfi_startproc
 639              	.LVL51:
 640 0000 53       		pushq	%rbx
 641              		.cfi_def_cfa_offset 16
 642              		.cfi_offset 3, -16
 643              		.loc 8 40 0
 644 0001 4889FB   		movq	%rdi, %rbx
 645              	.LBB696:
 646              	.LBB697:
 647              	.LBB698:
 648              	.LBB699:
 649              		.loc 3 221 0
 650 0004 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 650      000000
 651 000b E8000000 		call	_ZN9Fl_Input_D2Ev
 651      00
 652              	.LVL52:
 653              	.LBE699:
 654              	.LBE698:
 655              	.LBE697:
 656              	.LBE696:
 657              		.loc 8 40 0
 658 0010 4889DF   		movq	%rbx, %rdi
 659 0013 5B       		popq	%rbx
 660              		.cfi_def_cfa_offset 8
 661              	.LVL53:
 662 0014 E9000000 		jmp	_ZdlPv
 662      00
 663              	.LVL54:
 664              		.cfi_endproc
 665              	.LFE587:
 667              		.section	.text.unlikely._ZN19Fl_Multiline_OutputD0Ev,"axG",@progbits,_ZN19Fl_Multiline_OutputD5Ev,
 668              	.LCOLDE15:
 669              		.section	.text._ZN19Fl_Multiline_OutputD0Ev,"axG",@progbits,_ZN19Fl_Multiline_OutputD5Ev,comdat
 670              	.LHOTE15:
 671              		.section	.text.unlikely._ZN15Fl_Secret_InputD2Ev,"axG",@progbits,_ZN15Fl_Secret_InputD5Ev,comdat
 672              		.align 2
 673              	.LCOLDB16:
 674              		.section	.text._ZN15Fl_Secret_InputD2Ev,"axG",@progbits,_ZN15Fl_Secret_InputD5Ev,comdat
 675              	.LHOTB16:
 676              		.align 2
 677              		.p2align 4,,15
 678              		.weak	_ZN15Fl_Secret_InputD2Ev
 680              	_ZN15Fl_Secret_InputD2Ev:
 681              	.LFB581:
 682              		.file 9 "fltk-1.3.4-1/FL/Fl_Secret_Input.H"
   1:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //
   2:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** // "$Id: Fl_Secret_Input.H 9774 2012-12-24 11:45:07Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //
   4:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** // Secret input header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //
   6:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //
   8:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //
  12:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //
  14:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //
  16:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** //
  18:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** 
  19:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Secret_Input.H ****    Fl_Secret_Input widget . */
  21:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** 
  22:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** #ifndef Fl_Secret_Input_H
  23:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** #define Fl_Secret_Input_H
  24:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** 
  25:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** #include "Fl_Input.H"
  26:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** 
  27:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Secret_Input.H ****   The Fl_Secret_Input class is a subclass of Fl_Input that displays its
  29:fltk-1.3.4-1/FL/Fl_Secret_Input.H ****   input as a string of placeholders. Depending on the platform this
  30:fltk-1.3.4-1/FL/Fl_Secret_Input.H ****   placeholder is either the asterisk ('*') or the Unicode bullet
  31:fltk-1.3.4-1/FL/Fl_Secret_Input.H ****   character (U+2022).
  32:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** 
  33:fltk-1.3.4-1/FL/Fl_Secret_Input.H ****   This subclass is usually used to receive passwords and other "secret" information.
  34:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** */
  35:fltk-1.3.4-1/FL/Fl_Secret_Input.H **** class FL_EXPORT Fl_Secret_Input : public Fl_Input {
 683              		.loc 9 35 0
 684              		.cfi_startproc
 685              	.LVL55:
 686              	.LBB700:
 687              	.LBB701:
 688              		.loc 3 221 0
 689 0000 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 689      000000
 690 0007 E9000000 		jmp	_ZN9Fl_Input_D2Ev
 690      00
 691              	.LVL56:
 692              	.LBE701:
 693              	.LBE700:
 694              		.cfi_endproc
 695              	.LFE581:
 697              		.section	.text.unlikely._ZN15Fl_Secret_InputD2Ev,"axG",@progbits,_ZN15Fl_Secret_InputD5Ev,comdat
 698              	.LCOLDE16:
 699              		.section	.text._ZN15Fl_Secret_InputD2Ev,"axG",@progbits,_ZN15Fl_Secret_InputD5Ev,comdat
 700              	.LHOTE16:
 701              		.weak	_ZN15Fl_Secret_InputD1Ev
 702              		.set	_ZN15Fl_Secret_InputD1Ev,_ZN15Fl_Secret_InputD2Ev
 703              		.section	.text.unlikely._ZN15Fl_Secret_InputD0Ev,"axG",@progbits,_ZN15Fl_Secret_InputD5Ev,comdat
 704              		.align 2
 705              	.LCOLDB17:
 706              		.section	.text._ZN15Fl_Secret_InputD0Ev,"axG",@progbits,_ZN15Fl_Secret_InputD5Ev,comdat
 707              	.LHOTB17:
 708              		.align 2
 709              		.p2align 4,,15
 710              		.weak	_ZN15Fl_Secret_InputD0Ev
 712              	_ZN15Fl_Secret_InputD0Ev:
 713              	.LFB583:
 714              		.loc 9 35 0
 715              		.cfi_startproc
 716              	.LVL57:
 717 0000 53       		pushq	%rbx
 718              		.cfi_def_cfa_offset 16
 719              		.cfi_offset 3, -16
 720              		.loc 9 35 0
 721 0001 4889FB   		movq	%rdi, %rbx
 722              	.LBB702:
 723              	.LBB703:
 724              	.LBB704:
 725              		.loc 3 221 0
 726 0004 48C70700 		movq	$_ZTV8Fl_Input+16, (%rdi)
 726      000000
 727 000b E8000000 		call	_ZN9Fl_Input_D2Ev
 727      00
 728              	.LVL58:
 729              	.LBE704:
 730              	.LBE703:
 731              	.LBE702:
 732              		.loc 9 35 0
 733 0010 4889DF   		movq	%rbx, %rdi
 734 0013 5B       		popq	%rbx
 735              		.cfi_def_cfa_offset 8
 736              	.LVL59:
 737 0014 E9000000 		jmp	_ZdlPv
 737      00
 738              	.LVL60:
 739              		.cfi_endproc
 740              	.LFE583:
 742              		.section	.text.unlikely._ZN15Fl_Secret_InputD0Ev,"axG",@progbits,_ZN15Fl_Secret_InputD5Ev,comdat
 743              	.LCOLDE17:
 744              		.section	.text._ZN15Fl_Secret_InputD0Ev,"axG",@progbits,_ZN15Fl_Secret_InputD5Ev,comdat
 745              	.LHOTE17:
 746              		.section	.text.unlikely._ZN8Fl_Input14shift_positionEi,"ax",@progbits
 747              		.align 2
 748              	.LCOLDB18:
 749              		.section	.text._ZN8Fl_Input14shift_positionEi,"ax",@progbits
 750              	.LHOTB18:
 751              		.align 2
 752              		.p2align 4,,15
 753              		.globl	_ZN8Fl_Input14shift_positionEi
 755              	_ZN8Fl_Input14shift_positionEi:
 756              	.LFB518:
  53:fltk-1.3.4-1/src/Fl_Input.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Input.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Input.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 757              		.loc 2 55 0
 758              		.cfi_startproc
 759              	.LVL61:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 760              		.loc 2 56 0
 761 0000 F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 761      000001
 762 0007 89F2     		movl	%esi, %edx
 763 0009 7406     		je	.L34
 764 000b 8B979400 		movl	148(%rdi), %edx
 764      0000
 765              	.LVL62:
 766              	.L34:
 767              		.loc 2 56 0 is_stmt 0 discriminator 4
 768 0011 E9000000 		jmp	_ZN9Fl_Input_8positionEii
 768      00
 769              	.LVL63:
 770              		.cfi_endproc
 771              	.LFE518:
 773              		.section	.text.unlikely._ZN8Fl_Input14shift_positionEi
 774              	.LCOLDE18:
 775              		.section	.text._ZN8Fl_Input14shift_positionEi
 776              	.LHOTE18:
 777              		.section	.text.unlikely._ZN8Fl_Input22shift_up_down_positionEi,"ax",@progbits
 778              		.align 2
 779              	.LCOLDB19:
 780              		.section	.text._ZN8Fl_Input22shift_up_down_positionEi,"ax",@progbits
 781              	.LHOTB19:
 782              		.align 2
 783              		.p2align 4,,15
 784              		.globl	_ZN8Fl_Input22shift_up_down_positionEi
 786              	_ZN8Fl_Input22shift_up_down_positionEi:
 787              	.LFB519:
  57:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Input.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Input.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 788              		.loc 2 59 0 is_stmt 1
 789              		.cfi_startproc
 790              	.LVL64:
  60:fltk-1.3.4-1/src/Fl_Input.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 791              		.loc 2 60 0
 792 0000 8B150000 		movl	_ZN2Fl7e_stateE(%rip), %edx
 792      0000
 793 0006 81E20000 		andl	$65536, %edx
 793      0100
 794 000c E9000000 		jmp	_ZN9Fl_Input_16up_down_positionEii
 794      00
 795              	.LVL65:
 796              		.cfi_endproc
 797              	.LFE519:
 799              		.section	.text.unlikely._ZN8Fl_Input22shift_up_down_positionEi
 800              	.LCOLDE19:
 801              		.section	.text._ZN8Fl_Input22shift_up_down_positionEi
 802              	.LHOTE19:
 803              		.section	.text.unlikely._ZN8Fl_Input11kf_lines_upEi,"ax",@progbits
 804              		.align 2
 805              	.LCOLDB20:
 806              		.section	.text._ZN8Fl_Input11kf_lines_upEi,"ax",@progbits
 807              	.LHOTB20:
 808              		.align 2
 809              		.p2align 4,,15
 810              		.globl	_ZN8Fl_Input11kf_lines_upEi
 812              	_ZN8Fl_Input11kf_lines_upEi:
 813              	.LFB520:
  61:fltk-1.3.4-1/src/Fl_Input.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Input.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Input.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Input.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Input.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Input.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Input.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Input.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Input.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Input.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Input.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Input.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Input.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Input.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Input.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Input.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Input.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Input.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Input.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Input.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Input.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Input.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Input.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Input.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Input.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Input.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Input.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Input.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Input.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Input.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Input.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Input.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Input.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Input.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 814              		.loc 2 94 0
 815              		.cfi_startproc
 816              	.LVL66:
 817 0000 4154     		pushq	%r12
 818              		.cfi_def_cfa_offset 16
 819              		.cfi_offset 12, -16
 820 0002 55       		pushq	%rbp
 821              		.cfi_def_cfa_offset 24
 822              		.cfi_offset 6, -24
 823 0003 89F5     		movl	%esi, %ebp
 824 0005 53       		pushq	%rbx
 825              		.cfi_def_cfa_offset 32
 826              		.cfi_offset 3, -32
 827 0006 8B9F9000 		movl	144(%rdi), %ebx
 827      0000
 828              		.loc 2 94 0
 829 000c 4989FC   		movq	%rdi, %r12
 830              	.LVL67:
  95:fltk-1.3.4-1/src/Fl_Input.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Input.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 831              		.loc 2 96 0
 832 000f 89DE     		movl	%ebx, %esi
 833              	.LVL68:
 834 0011 E8000000 		call	_ZNK9Fl_Input_10line_startEi
 834      00
 835              	.LVL69:
 836 0016 85C0     		testl	%eax, %eax
 837 0018 744E     		je	.L39
 838              	.LVL70:
  97:fltk-1.3.4-1/src/Fl_Input.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Input.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Input.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Input.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 839              		.loc 2 100 0
 840 001a 85ED     		testl	%ebp, %ebp
 841 001c 750A     		jne	.L46
 842 001e EB18     		jmp	.L41
 843              	.LVL71:
 844              		.p2align 4,,10
 845              		.p2align 3
 846              	.L50:
 101:fltk-1.3.4-1/src/Fl_Input.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Input.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Input.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 847              		.loc 2 103 0
 848 0020 83EB01   		subl	$1, %ebx
 849              	.LVL72:
 100:fltk-1.3.4-1/src/Fl_Input.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 850              		.loc 2 100 0
 851 0023 83ED01   		subl	$1, %ebp
 852              	.LVL73:
 853 0026 7410     		je	.L41
 854              	.LVL74:
 855              	.L46:
 101:fltk-1.3.4-1/src/Fl_Input.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 856              		.loc 2 101 0
 857 0028 89DE     		movl	%ebx, %esi
 858 002a 4C89E7   		movq	%r12, %rdi
 859 002d E8000000 		call	_ZNK9Fl_Input_10line_startEi
 859      00
 860              	.LVL75:
 102:fltk-1.3.4-1/src/Fl_Input.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 861              		.loc 2 102 0
 862 0032 85C0     		testl	%eax, %eax
 101:fltk-1.3.4-1/src/Fl_Input.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 863              		.loc 2 101 0
 864 0034 89C3     		movl	%eax, %ebx
 865              	.LVL76:
 102:fltk-1.3.4-1/src/Fl_Input.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 866              		.loc 2 102 0
 867 0036 75E8     		jne	.L50
 868              	.LVL77:
 869              	.L41:
 104:fltk-1.3.4-1/src/Fl_Input.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Input.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870              		.loc 2 105 0
 871 0038 89DE     		movl	%ebx, %esi
 872 003a 4C89E7   		movq	%r12, %rdi
 873 003d E8000000 		call	_ZNK9Fl_Input_10line_startEi
 873      00
 874              	.LVL78:
 875              	.LBB721:
 876              	.LBB722:
  60:fltk-1.3.4-1/src/Fl_Input.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 877              		.loc 2 60 0
 878 0042 8B150000 		movl	_ZN2Fl7e_stateE(%rip), %edx
 878      0000
 879 0048 4C89E7   		movq	%r12, %rdi
 880 004b 89C6     		movl	%eax, %esi
 881 004d 81E20000 		andl	$65536, %edx
 881      0100
 882 0053 E8000000 		call	_ZN9Fl_Input_16up_down_positionEii
 882      00
 883              	.LVL79:
 884              	.LBE722:
 885              	.LBE721:
 106:fltk-1.3.4-1/src/Fl_Input.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Input.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 886              		.loc 2 107 0
 887 0058 5B       		popq	%rbx
 888              		.cfi_remember_state
 889              		.cfi_def_cfa_offset 24
 890              	.LVL80:
 106:fltk-1.3.4-1/src/Fl_Input.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 891              		.loc 2 106 0
 892 0059 B8010000 		movl	$1, %eax
 892      00
 893              		.loc 2 107 0
 894 005e 5D       		popq	%rbp
 895              		.cfi_def_cfa_offset 16
 896 005f 415C     		popq	%r12
 897              		.cfi_def_cfa_offset 8
 898              	.LVL81:
 899 0061 C3       		ret
 900              	.LVL82:
 901              		.p2align 4,,10
 902 0062 660F1F44 		.p2align 3
 902      0000
 903              	.L39:
 904              		.cfi_restore_state
 905              	.LBB723:
 906              	.LBB724:
 108:fltk-1.3.4-1/src/Fl_Input.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Input.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Input.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Input.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Input.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Input.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Input.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Input.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Input.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 907              		.loc 2 116 0
 908 0068 31FF     		xorl	%edi, %edi
 909 006a E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 909      00
 910              	.LVL83:
 911 006f 83F001   		xorl	$1, %eax
 912              	.LBE724:
 913              	.LBE723:
 107:fltk-1.3.4-1/src/Fl_Input.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 914              		.loc 2 107 0
 915 0072 5B       		popq	%rbx
 916              		.cfi_def_cfa_offset 24
 917              	.LBB726:
 918              	.LBB725:
 919              		.loc 2 116 0
 920 0073 0FB6C0   		movzbl	%al, %eax
 921              	.LBE725:
 922              	.LBE726:
 107:fltk-1.3.4-1/src/Fl_Input.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 923              		.loc 2 107 0
 924 0076 5D       		popq	%rbp
 925              		.cfi_def_cfa_offset 16
 926              	.LVL84:
 927 0077 415C     		popq	%r12
 928              		.cfi_def_cfa_offset 8
 929              	.LVL85:
 930 0079 C3       		ret
 931              		.cfi_endproc
 932              	.LFE520:
 934              		.section	.text.unlikely._ZN8Fl_Input11kf_lines_upEi
 935              	.LCOLDE20:
 936              		.section	.text._ZN8Fl_Input11kf_lines_upEi
 937              	.LHOTE20:
 938              		.section	.text.unlikely._ZN8Fl_Input13kf_lines_downEi,"ax",@progbits
 939              		.align 2
 940              	.LCOLDB21:
 941              		.section	.text._ZN8Fl_Input13kf_lines_downEi,"ax",@progbits
 942              	.LHOTB21:
 943              		.align 2
 944              		.p2align 4,,15
 945              		.globl	_ZN8Fl_Input13kf_lines_downEi
 947              	_ZN8Fl_Input13kf_lines_downEi:
 948              	.LFB521:
 112:fltk-1.3.4-1/src/Fl_Input.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 949              		.loc 2 112 0
 950              		.cfi_startproc
 951              	.LVL86:
 952 0000 4154     		pushq	%r12
 953              		.cfi_def_cfa_offset 16
 954              		.cfi_offset 12, -16
 955 0002 55       		pushq	%rbp
 956              		.cfi_def_cfa_offset 24
 957              		.cfi_offset 6, -24
 958 0003 4989FC   		movq	%rdi, %r12
 959 0006 53       		pushq	%rbx
 960              		.cfi_def_cfa_offset 32
 961              		.cfi_offset 3, -32
 962 0007 8B9F9000 		movl	144(%rdi), %ebx
 962      0000
 963              	.LVL87:
 112:fltk-1.3.4-1/src/Fl_Input.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 964              		.loc 2 112 0
 965 000d 89F5     		movl	%esi, %ebp
 114:fltk-1.3.4-1/src/Fl_Input.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 966              		.loc 2 114 0
 967 000f 89DE     		movl	%ebx, %esi
 968              	.LVL88:
 969 0011 E8000000 		call	_ZNK9Fl_Input_8line_endEi
 969      00
 970              	.LVL89:
 971 0016 413B8424 		cmpl	136(%r12), %eax
 971      88000000 
 972 001e 7D50     		jge	.L52
 973              	.LVL90:
 117:fltk-1.3.4-1/src/Fl_Input.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Input.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 974              		.loc 2 118 0
 975 0020 85ED     		testl	%ebp, %ebp
 976 0022 7514     		jne	.L57
 977 0024 EB28     		jmp	.L54
 978              	.LVL91:
 979 0026 662E0F1F 		.p2align 4,,10
 979      84000000 
 979      0000
 980              		.p2align 3
 981              	.L60:
 119:fltk-1.3.4-1/src/Fl_Input.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Input.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Input.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 982              		.loc 2 121 0
 983 0030 83C301   		addl	$1, %ebx
 984              	.LVL92:
 118:fltk-1.3.4-1/src/Fl_Input.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 985              		.loc 2 118 0
 986 0033 83ED01   		subl	$1, %ebp
 987              	.LVL93:
 988 0036 7416     		je	.L54
 989              	.LVL94:
 990              	.L57:
 119:fltk-1.3.4-1/src/Fl_Input.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 991              		.loc 2 119 0
 992 0038 89DE     		movl	%ebx, %esi
 993 003a 4C89E7   		movq	%r12, %rdi
 994 003d E8000000 		call	_ZNK9Fl_Input_8line_endEi
 994      00
 995              	.LVL95:
 120:fltk-1.3.4-1/src/Fl_Input.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 996              		.loc 2 120 0
 997 0042 413B8424 		cmpl	136(%r12), %eax
 997      88000000 
 119:fltk-1.3.4-1/src/Fl_Input.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 998              		.loc 2 119 0
 999 004a 89C3     		movl	%eax, %ebx
 1000              	.LVL96:
 120:fltk-1.3.4-1/src/Fl_Input.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 1001              		.loc 2 120 0
 1002 004c 7CE2     		jl	.L60
 1003              	.LVL97:
 1004              	.L54:
 1005              	.LBB743:
 1006              	.LBB744:
  60:fltk-1.3.4-1/src/Fl_Input.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1007              		.loc 2 60 0
 1008 004e 8B150000 		movl	_ZN2Fl7e_stateE(%rip), %edx
 1008      0000
 1009 0054 89DE     		movl	%ebx, %esi
 1010 0056 4C89E7   		movq	%r12, %rdi
 1011 0059 81E20000 		andl	$65536, %edx
 1011      0100
 1012 005f E8000000 		call	_ZN9Fl_Input_16up_down_positionEii
 1012      00
 1013              	.LVL98:
 1014              	.LBE744:
 1015              	.LBE743:
 122:fltk-1.3.4-1/src/Fl_Input.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Input.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Input.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Input.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1016              		.loc 2 125 0
 1017 0064 5B       		popq	%rbx
 1018              		.cfi_remember_state
 1019              		.cfi_def_cfa_offset 24
 1020              	.LVL99:
 124:fltk-1.3.4-1/src/Fl_Input.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 1021              		.loc 2 124 0
 1022 0065 B8010000 		movl	$1, %eax
 1022      00
 1023              		.loc 2 125 0
 1024 006a 5D       		popq	%rbp
 1025              		.cfi_def_cfa_offset 16
 1026 006b 415C     		popq	%r12
 1027              		.cfi_def_cfa_offset 8
 1028              	.LVL100:
 1029 006d C3       		ret
 1030              	.LVL101:
 1031 006e 6690     		.p2align 4,,10
 1032              		.p2align 3
 1033              	.L52:
 1034              		.cfi_restore_state
 1035              	.LBB745:
 1036              	.LBB746:
 116:fltk-1.3.4-1/src/Fl_Input.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1037              		.loc 2 116 0
 1038 0070 31FF     		xorl	%edi, %edi
 1039 0072 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 1039      00
 1040              	.LVL102:
 1041 0077 83F001   		xorl	$1, %eax
 1042              	.LBE746:
 1043              	.LBE745:
 1044              		.loc 2 125 0
 1045 007a 5B       		popq	%rbx
 1046              		.cfi_def_cfa_offset 24
 1047              	.LBB748:
 1048              	.LBB747:
 116:fltk-1.3.4-1/src/Fl_Input.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1049              		.loc 2 116 0
 1050 007b 0FB6C0   		movzbl	%al, %eax
 1051              	.LBE747:
 1052              	.LBE748:
 1053              		.loc 2 125 0
 1054 007e 5D       		popq	%rbp
 1055              		.cfi_def_cfa_offset 16
 1056              	.LVL103:
 1057 007f 415C     		popq	%r12
 1058              		.cfi_def_cfa_offset 8
 1059              	.LVL104:
 1060 0081 C3       		ret
 1061              		.cfi_endproc
 1062              	.LFE521:
 1064              		.section	.text.unlikely._ZN8Fl_Input13kf_lines_downEi
 1065              	.LCOLDE21:
 1066              		.section	.text._ZN8Fl_Input13kf_lines_downEi
 1067              	.LHOTE21:
 1068              		.section	.text.unlikely._ZN8Fl_Input10kf_page_upEv,"ax",@progbits
 1069              		.align 2
 1070              	.LCOLDB22:
 1071              		.section	.text._ZN8Fl_Input10kf_page_upEv,"ax",@progbits
 1072              	.LHOTB22:
 1073              		.align 2
 1074              		.p2align 4,,15
 1075              		.globl	_ZN8Fl_Input10kf_page_upEv
 1077              	_ZN8Fl_Input10kf_page_upEv:
 1078              	.LFB522:
 126:fltk-1.3.4-1/src/Fl_Input.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Input.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Input.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 1079              		.loc 2 128 0
 1080              		.cfi_startproc
 1081              	.LVL105:
 1082 0000 53       		pushq	%rbx
 1083              		.cfi_def_cfa_offset 16
 1084              		.cfi_offset 3, -16
 1085              		.loc 2 128 0
 1086 0001 4889FB   		movq	%rdi, %rbx
 129:fltk-1.3.4-1/src/Fl_Input.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1087              		.loc 2 129 0
 1088 0004 E8000000 		call	_ZN9Fl_Input_12linesPerPageEv
 1088      00
 1089              	.LVL106:
 1090 0009 4889DF   		movq	%rbx, %rdi
 1091 000c 89C6     		movl	%eax, %esi
 130:fltk-1.3.4-1/src/Fl_Input.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 1092              		.loc 2 130 0
 1093 000e 5B       		popq	%rbx
 1094              		.cfi_def_cfa_offset 8
 1095              	.LVL107:
 129:fltk-1.3.4-1/src/Fl_Input.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1096              		.loc 2 129 0
 1097 000f E9000000 		jmp	_ZN8Fl_Input11kf_lines_upEi
 1097      00
 1098              	.LVL108:
 1099              		.cfi_endproc
 1100              	.LFE522:
 1102              		.section	.text.unlikely._ZN8Fl_Input10kf_page_upEv
 1103              	.LCOLDE22:
 1104              		.section	.text._ZN8Fl_Input10kf_page_upEv
 1105              	.LHOTE22:
 1106              		.section	.text.unlikely._ZN8Fl_Input12kf_page_downEv,"ax",@progbits
 1107              		.align 2
 1108              	.LCOLDB23:
 1109              		.section	.text._ZN8Fl_Input12kf_page_downEv,"ax",@progbits
 1110              	.LHOTB23:
 1111              		.align 2
 1112              		.p2align 4,,15
 1113              		.globl	_ZN8Fl_Input12kf_page_downEv
 1115              	_ZN8Fl_Input12kf_page_downEv:
 1116              	.LFB523:
 131:fltk-1.3.4-1/src/Fl_Input.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Input.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Input.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1117              		.loc 2 133 0
 1118              		.cfi_startproc
 1119              	.LVL109:
 1120 0000 53       		pushq	%rbx
 1121              		.cfi_def_cfa_offset 16
 1122              		.cfi_offset 3, -16
 1123              		.loc 2 133 0
 1124 0001 4889FB   		movq	%rdi, %rbx
 134:fltk-1.3.4-1/src/Fl_Input.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 1125              		.loc 2 134 0
 1126 0004 E8000000 		call	_ZN9Fl_Input_12linesPerPageEv
 1126      00
 1127              	.LVL110:
 1128 0009 4889DF   		movq	%rbx, %rdi
 1129 000c 89C6     		movl	%eax, %esi
 135:fltk-1.3.4-1/src/Fl_Input.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1130              		.loc 2 135 0
 1131 000e 5B       		popq	%rbx
 1132              		.cfi_def_cfa_offset 8
 1133              	.LVL111:
 134:fltk-1.3.4-1/src/Fl_Input.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 1134              		.loc 2 134 0
 1135 000f E9000000 		jmp	_ZN8Fl_Input13kf_lines_downEi
 1135      00
 1136              	.LVL112:
 1137              		.cfi_endproc
 1138              	.LFE523:
 1140              		.section	.text.unlikely._ZN8Fl_Input12kf_page_downEv
 1141              	.LCOLDE23:
 1142              		.section	.text._ZN8Fl_Input12kf_page_downEv
 1143              	.LHOTE23:
 1144              		.section	.text.unlikely._ZN8Fl_Input16kf_insert_toggleEv,"ax",@progbits
 1145              		.align 2
 1146              	.LCOLDB24:
 1147              		.section	.text._ZN8Fl_Input16kf_insert_toggleEv,"ax",@progbits
 1148              	.LHOTB24:
 1149              		.align 2
 1150              		.p2align 4,,15
 1151              		.globl	_ZN8Fl_Input16kf_insert_toggleEv
 1153              	_ZN8Fl_Input16kf_insert_toggleEv:
 1154              	.LFB524:
 136:fltk-1.3.4-1/src/Fl_Input.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Input.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Input.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 1155              		.loc 2 138 0
 1156              		.cfi_startproc
 1157              	.LVL113:
 139:fltk-1.3.4-1/src/Fl_Input.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1158              		.loc 2 139 0
 1159 0000 F6476C08 		testb	$8, 108(%rdi)
 1160 0004 750A     		jne	.L72
 140:fltk-1.3.4-1/src/Fl_Input.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Input.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 1161              		.loc 2 141 0
 1162 0006 B8010000 		movl	$1, %eax
 1162      00
 1163 000b C3       		ret
 1164 000c 0F1F4000 		.p2align 4,,10
 1165              		.p2align 3
 1166              	.L72:
 138:fltk-1.3.4-1/src/Fl_Input.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1167              		.loc 2 138 0 discriminator 1
 1168 0010 4883EC08 		subq	$8, %rsp
 1169              		.cfi_def_cfa_offset 16
 139:fltk-1.3.4-1/src/Fl_Input.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1170              		.loc 2 139 0 discriminator 1
 1171 0014 31FF     		xorl	%edi, %edi
 1172              	.LVL114:
 1173 0016 E8000000 		call	_Z7fl_beepi
 1173      00
 1174              	.LVL115:
 1175              		.loc 2 141 0 discriminator 1
 1176 001b B8010000 		movl	$1, %eax
 1176      00
 1177 0020 4883C408 		addq	$8, %rsp
 1178              		.cfi_def_cfa_offset 8
 1179 0024 C3       		ret
 1180              		.cfi_endproc
 1181              	.LFE524:
 1183              		.section	.text.unlikely._ZN8Fl_Input16kf_insert_toggleEv
 1184              	.LCOLDE24:
 1185              		.section	.text._ZN8Fl_Input16kf_insert_toggleEv
 1186              	.LHOTE24:
 1187              		.section	.text.unlikely._ZN8Fl_Input20kf_delete_word_rightEv,"ax",@progbits
 1188              		.align 2
 1189              	.LCOLDB25:
 1190              		.section	.text._ZN8Fl_Input20kf_delete_word_rightEv,"ax",@progbits
 1191              	.LHOTB25:
 1192              		.align 2
 1193              		.p2align 4,,15
 1194              		.globl	_ZN8Fl_Input20kf_delete_word_rightEv
 1196              	_ZN8Fl_Input20kf_delete_word_rightEv:
 1197              	.LFB525:
 142:fltk-1.3.4-1/src/Fl_Input.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Input.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Input.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1198              		.loc 2 144 0
 1199              		.cfi_startproc
 1200              	.LVL116:
 1201 0000 53       		pushq	%rbx
 1202              		.cfi_def_cfa_offset 16
 1203              		.cfi_offset 3, -16
 145:fltk-1.3.4-1/src/Fl_Input.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 1204              		.loc 2 145 0
 1205 0001 F6476C08 		testb	$8, 108(%rdi)
 1206 0005 7549     		jne	.L78
 1207 0007 8B979400 		movl	148(%rdi), %edx
 1207      0000
 1208 000d 8BB79000 		movl	144(%rdi), %esi
 1208      0000
 1209 0013 4889FB   		movq	%rdi, %rbx
 1210              	.LVL117:
 146:fltk-1.3.4-1/src/Fl_Input.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1211              		.loc 2 146 0
 1212 0016 39D6     		cmpl	%edx, %esi
 1213 0018 740E     		je	.L76
 1214              	.LVL118:
 147:fltk-1.3.4-1/src/Fl_Input.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Input.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Input.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 1215              		.loc 2 149 0 discriminator 1
 1216 001a 5B       		popq	%rbx
 1217              		.cfi_remember_state
 1218              		.cfi_def_cfa_offset 8
 1219              	.LBB749:
 1220              	.LBB750:
 1221              		.file 10 "fltk-1.3.4-1/FL/Fl_Input_.H"
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
 1222              		.loc 10 320 0 discriminator 1
 1223 001b 4531C0   		xorl	%r8d, %r8d
 1224 001e 31C9     		xorl	%ecx, %ecx
 1225 0020 E9000000 		jmp	_ZN9Fl_Input_7replaceEiiPKci
 1225      00
 1226              	.LVL119:
 1227              		.p2align 4,,10
 1228 0025 0F1F00   		.p2align 3
 1229              	.L76:
 1230              		.cfi_restore_state
 1231              	.LBE750:
 1232              	.LBE749:
 147:fltk-1.3.4-1/src/Fl_Input.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 1233              		.loc 2 147 0
 1234 0028 E8000000 		call	_ZNK9Fl_Input_8word_endEi
 1234      00
 1235              	.LVL120:
 1236              	.LBB751:
 1237              	.LBB752:
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
 1238              		.loc 10 347 0
 1239 002d 8BB39000 		movl	144(%rbx), %esi
 1239      0000
 1240 0033 4889DF   		movq	%rbx, %rdi
 1241 0036 4531C0   		xorl	%r8d, %r8d
 1242 0039 31C9     		xorl	%ecx, %ecx
 1243 003b 89C2     		movl	%eax, %edx
 1244 003d E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 1244      00
 1245              	.LVL121:
 1246              	.LBE752:
 1247              	.LBE751:
 1248              		.loc 2 149 0
 1249 0042 B8010000 		movl	$1, %eax
 1249      00
 1250 0047 5B       		popq	%rbx
 1251              		.cfi_remember_state
 1252              		.cfi_def_cfa_offset 8
 1253              	.LVL122:
 1254 0048 C3       		ret
 1255              	.LVL123:
 1256 0049 0F1F8000 		.p2align 4,,10
 1256      000000
 1257              		.p2align 3
 1258              	.L78:
 1259              		.cfi_restore_state
 145:fltk-1.3.4-1/src/Fl_Input.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1260              		.loc 2 145 0 discriminator 1
 1261 0050 31FF     		xorl	%edi, %edi
 1262              	.LVL124:
 1263 0052 E8000000 		call	_Z7fl_beepi
 1263      00
 1264              	.LVL125:
 1265              		.loc 2 149 0 discriminator 1
 1266 0057 B8010000 		movl	$1, %eax
 1266      00
 1267 005c 5B       		popq	%rbx
 1268              		.cfi_def_cfa_offset 8
 1269 005d C3       		ret
 1270              		.cfi_endproc
 1271              	.LFE525:
 1273              		.section	.text.unlikely._ZN8Fl_Input20kf_delete_word_rightEv
 1274              	.LCOLDE25:
 1275              		.section	.text._ZN8Fl_Input20kf_delete_word_rightEv
 1276              	.LHOTE25:
 1277              		.section	.text.unlikely._ZN8Fl_Input19kf_delete_word_leftEv,"ax",@progbits
 1278              		.align 2
 1279              	.LCOLDB26:
 1280              		.section	.text._ZN8Fl_Input19kf_delete_word_leftEv,"ax",@progbits
 1281              	.LHOTB26:
 1282              		.align 2
 1283              		.p2align 4,,15
 1284              		.globl	_ZN8Fl_Input19kf_delete_word_leftEv
 1286              	_ZN8Fl_Input19kf_delete_word_leftEv:
 1287              	.LFB526:
 150:fltk-1.3.4-1/src/Fl_Input.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Input.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Input.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1288              		.loc 2 152 0
 1289              		.cfi_startproc
 1290              	.LVL126:
 1291 0000 55       		pushq	%rbp
 1292              		.cfi_def_cfa_offset 16
 1293              		.cfi_offset 6, -16
 1294 0001 53       		pushq	%rbx
 1295              		.cfi_def_cfa_offset 24
 1296              		.cfi_offset 3, -24
 1297 0002 4883EC08 		subq	$8, %rsp
 1298              		.cfi_def_cfa_offset 32
 153:fltk-1.3.4-1/src/Fl_Input.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 1299              		.loc 2 153 0
 1300 0006 F6476C08 		testb	$8, 108(%rdi)
 1301 000a 7554     		jne	.L84
 1302 000c 8B979400 		movl	148(%rdi), %edx
 1302      0000
 1303 0012 8BAF9000 		movl	144(%rdi), %ebp
 1303      0000
 1304 0018 4889FB   		movq	%rdi, %rbx
 1305              	.LVL127:
 154:fltk-1.3.4-1/src/Fl_Input.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1306              		.loc 2 154 0
 1307 001b 39D5     		cmpl	%edx, %ebp
 1308 001d 7419     		je	.L82
 1309              	.LVL128:
 155:fltk-1.3.4-1/src/Fl_Input.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Input.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Input.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1310              		.loc 2 157 0 discriminator 1
 1311 001f 4883C408 		addq	$8, %rsp
 1312              		.cfi_remember_state
 1313              		.cfi_def_cfa_offset 24
 1314              	.LBB753:
 1315              	.LBB754:
 320:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 1316              		.loc 10 320 0 discriminator 1
 1317 0023 89EE     		movl	%ebp, %esi
 1318 0025 4531C0   		xorl	%r8d, %r8d
 1319              	.LBE754:
 1320              	.LBE753:
 1321              		.loc 2 157 0 discriminator 1
 1322 0028 5B       		popq	%rbx
 1323              		.cfi_def_cfa_offset 16
 1324 0029 5D       		popq	%rbp
 1325              		.cfi_def_cfa_offset 8
 1326              	.LBB756:
 1327              	.LBB755:
 320:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 1328              		.loc 10 320 0 discriminator 1
 1329 002a 31C9     		xorl	%ecx, %ecx
 1330 002c E9000000 		jmp	_ZN9Fl_Input_7replaceEiiPKci
 1330      00
 1331              	.LVL129:
 1332              		.p2align 4,,10
 1333 0031 0F1F8000 		.p2align 3
 1333      000000
 1334              	.L82:
 1335              		.cfi_restore_state
 1336              	.LBE755:
 1337              	.LBE756:
 155:fltk-1.3.4-1/src/Fl_Input.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1338              		.loc 2 155 0
 1339 0038 89EE     		movl	%ebp, %esi
 1340 003a E8000000 		call	_ZNK9Fl_Input_10word_startEi
 1340      00
 1341              	.LVL130:
 1342              	.LBB757:
 1343              	.LBB758:
 1344              		.loc 10 347 0
 1345 003f 89EA     		movl	%ebp, %edx
 1346 0041 4889DF   		movq	%rbx, %rdi
 1347 0044 4531C0   		xorl	%r8d, %r8d
 1348 0047 31C9     		xorl	%ecx, %ecx
 1349 0049 89C6     		movl	%eax, %esi
 1350 004b E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 1350      00
 1351              	.LVL131:
 1352              	.LBE758:
 1353              	.LBE757:
 1354              		.loc 2 157 0
 1355 0050 4883C408 		addq	$8, %rsp
 1356              		.cfi_remember_state
 1357              		.cfi_def_cfa_offset 24
 1358 0054 B8010000 		movl	$1, %eax
 1358      00
 1359 0059 5B       		popq	%rbx
 1360              		.cfi_def_cfa_offset 16
 1361              	.LVL132:
 1362 005a 5D       		popq	%rbp
 1363              		.cfi_def_cfa_offset 8
 1364 005b C3       		ret
 1365              	.LVL133:
 1366 005c 0F1F4000 		.p2align 4,,10
 1367              		.p2align 3
 1368              	.L84:
 1369              		.cfi_restore_state
 153:fltk-1.3.4-1/src/Fl_Input.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1370              		.loc 2 153 0 discriminator 1
 1371 0060 31FF     		xorl	%edi, %edi
 1372              	.LVL134:
 1373 0062 E8000000 		call	_Z7fl_beepi
 1373      00
 1374              	.LVL135:
 1375              		.loc 2 157 0 discriminator 1
 1376 0067 4883C408 		addq	$8, %rsp
 1377              		.cfi_def_cfa_offset 24
 1378 006b B8010000 		movl	$1, %eax
 1378      00
 1379 0070 5B       		popq	%rbx
 1380              		.cfi_def_cfa_offset 16
 1381 0071 5D       		popq	%rbp
 1382              		.cfi_def_cfa_offset 8
 1383 0072 C3       		ret
 1384              		.cfi_endproc
 1385              	.LFE526:
 1387              		.section	.text.unlikely._ZN8Fl_Input19kf_delete_word_leftEv
 1388              	.LCOLDE26:
 1389              		.section	.text._ZN8Fl_Input19kf_delete_word_leftEv
 1390              	.LHOTE26:
 1391              		.section	.text.unlikely._ZN8Fl_Input13kf_delete_solEv,"ax",@progbits
 1392              		.align 2
 1393              	.LCOLDB27:
 1394              		.section	.text._ZN8Fl_Input13kf_delete_solEv,"ax",@progbits
 1395              	.LHOTB27:
 1396              		.align 2
 1397              		.p2align 4,,15
 1398              		.globl	_ZN8Fl_Input13kf_delete_solEv
 1400              	_ZN8Fl_Input13kf_delete_solEv:
 1401              	.LFB527:
 158:fltk-1.3.4-1/src/Fl_Input.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Input.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Input.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 1402              		.loc 2 160 0
 1403              		.cfi_startproc
 1404              	.LVL136:
 1405 0000 55       		pushq	%rbp
 1406              		.cfi_def_cfa_offset 16
 1407              		.cfi_offset 6, -16
 1408 0001 53       		pushq	%rbx
 1409              		.cfi_def_cfa_offset 24
 1410              		.cfi_offset 3, -24
 1411 0002 4883EC08 		subq	$8, %rsp
 1412              		.cfi_def_cfa_offset 32
 161:fltk-1.3.4-1/src/Fl_Input.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1413              		.loc 2 161 0
 1414 0006 F6476C08 		testb	$8, 108(%rdi)
 1415 000a 7554     		jne	.L90
 1416 000c 8B979400 		movl	148(%rdi), %edx
 1416      0000
 1417 0012 8BAF9000 		movl	144(%rdi), %ebp
 1417      0000
 1418 0018 4889FB   		movq	%rdi, %rbx
 1419              	.LVL137:
 162:fltk-1.3.4-1/src/Fl_Input.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1420              		.loc 2 162 0
 1421 001b 39D5     		cmpl	%edx, %ebp
 1422 001d 7419     		je	.L88
 1423              	.LVL138:
 163:fltk-1.3.4-1/src/Fl_Input.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Input.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Input.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 1424              		.loc 2 165 0 discriminator 1
 1425 001f 4883C408 		addq	$8, %rsp
 1426              		.cfi_remember_state
 1427              		.cfi_def_cfa_offset 24
 1428              	.LBB759:
 1429              	.LBB760:
 320:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 1430              		.loc 10 320 0 discriminator 1
 1431 0023 89EE     		movl	%ebp, %esi
 1432 0025 4531C0   		xorl	%r8d, %r8d
 1433              	.LBE760:
 1434              	.LBE759:
 1435              		.loc 2 165 0 discriminator 1
 1436 0028 5B       		popq	%rbx
 1437              		.cfi_def_cfa_offset 16
 1438 0029 5D       		popq	%rbp
 1439              		.cfi_def_cfa_offset 8
 1440              	.LBB762:
 1441              	.LBB761:
 320:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 1442              		.loc 10 320 0 discriminator 1
 1443 002a 31C9     		xorl	%ecx, %ecx
 1444 002c E9000000 		jmp	_ZN9Fl_Input_7replaceEiiPKci
 1444      00
 1445              	.LVL139:
 1446              		.p2align 4,,10
 1447 0031 0F1F8000 		.p2align 3
 1447      000000
 1448              	.L88:
 1449              		.cfi_restore_state
 1450              	.LBE761:
 1451              	.LBE762:
 163:fltk-1.3.4-1/src/Fl_Input.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 1452              		.loc 2 163 0
 1453 0038 89EE     		movl	%ebp, %esi
 1454 003a E8000000 		call	_ZNK9Fl_Input_10line_startEi
 1454      00
 1455              	.LVL140:
 1456              	.LBB763:
 1457              	.LBB764:
 1458              		.loc 10 347 0
 1459 003f 89EA     		movl	%ebp, %edx
 1460 0041 4889DF   		movq	%rbx, %rdi
 1461 0044 4531C0   		xorl	%r8d, %r8d
 1462 0047 31C9     		xorl	%ecx, %ecx
 1463 0049 89C6     		movl	%eax, %esi
 1464 004b E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 1464      00
 1465              	.LVL141:
 1466              	.LBE764:
 1467              	.LBE763:
 1468              		.loc 2 165 0
 1469 0050 4883C408 		addq	$8, %rsp
 1470              		.cfi_remember_state
 1471              		.cfi_def_cfa_offset 24
 1472 0054 B8010000 		movl	$1, %eax
 1472      00
 1473 0059 5B       		popq	%rbx
 1474              		.cfi_def_cfa_offset 16
 1475              	.LVL142:
 1476 005a 5D       		popq	%rbp
 1477              		.cfi_def_cfa_offset 8
 1478 005b C3       		ret
 1479              	.LVL143:
 1480 005c 0F1F4000 		.p2align 4,,10
 1481              		.p2align 3
 1482              	.L90:
 1483              		.cfi_restore_state
 161:fltk-1.3.4-1/src/Fl_Input.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 1484              		.loc 2 161 0 discriminator 1
 1485 0060 31FF     		xorl	%edi, %edi
 1486              	.LVL144:
 1487 0062 E8000000 		call	_Z7fl_beepi
 1487      00
 1488              	.LVL145:
 1489              		.loc 2 165 0 discriminator 1
 1490 0067 4883C408 		addq	$8, %rsp
 1491              		.cfi_def_cfa_offset 24
 1492 006b B8010000 		movl	$1, %eax
 1492      00
 1493 0070 5B       		popq	%rbx
 1494              		.cfi_def_cfa_offset 16
 1495 0071 5D       		popq	%rbp
 1496              		.cfi_def_cfa_offset 8
 1497 0072 C3       		ret
 1498              		.cfi_endproc
 1499              	.LFE527:
 1501              		.section	.text.unlikely._ZN8Fl_Input13kf_delete_solEv
 1502              	.LCOLDE27:
 1503              		.section	.text._ZN8Fl_Input13kf_delete_solEv
 1504              	.LHOTE27:
 1505              		.section	.text.unlikely._ZN8Fl_Input13kf_delete_eolEv,"ax",@progbits
 1506              		.align 2
 1507              	.LCOLDB28:
 1508              		.section	.text._ZN8Fl_Input13kf_delete_eolEv,"ax",@progbits
 1509              	.LHOTB28:
 1510              		.align 2
 1511              		.p2align 4,,15
 1512              		.globl	_ZN8Fl_Input13kf_delete_eolEv
 1514              	_ZN8Fl_Input13kf_delete_eolEv:
 1515              	.LFB528:
 166:fltk-1.3.4-1/src/Fl_Input.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Input.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Input.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1516              		.loc 2 168 0
 1517              		.cfi_startproc
 1518              	.LVL146:
 1519 0000 53       		pushq	%rbx
 1520              		.cfi_def_cfa_offset 16
 1521              		.cfi_offset 3, -16
 169:fltk-1.3.4-1/src/Fl_Input.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 1522              		.loc 2 169 0
 1523 0001 F6476C08 		testb	$8, 108(%rdi)
 1524 0005 7549     		jne	.L96
 1525 0007 8B979400 		movl	148(%rdi), %edx
 1525      0000
 1526 000d 8BB79000 		movl	144(%rdi), %esi
 1526      0000
 1527 0013 4889FB   		movq	%rdi, %rbx
 1528              	.LVL147:
 170:fltk-1.3.4-1/src/Fl_Input.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 1529              		.loc 2 170 0
 1530 0016 39D6     		cmpl	%edx, %esi
 1531 0018 740E     		je	.L94
 1532              	.LVL148:
 171:fltk-1.3.4-1/src/Fl_Input.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Input.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Input.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1533              		.loc 2 173 0 discriminator 1
 1534 001a 5B       		popq	%rbx
 1535              		.cfi_remember_state
 1536              		.cfi_def_cfa_offset 8
 1537              	.LBB765:
 1538              	.LBB766:
 320:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 1539              		.loc 10 320 0 discriminator 1
 1540 001b 4531C0   		xorl	%r8d, %r8d
 1541 001e 31C9     		xorl	%ecx, %ecx
 1542 0020 E9000000 		jmp	_ZN9Fl_Input_7replaceEiiPKci
 1542      00
 1543              	.LVL149:
 1544              		.p2align 4,,10
 1545 0025 0F1F00   		.p2align 3
 1546              	.L94:
 1547              		.cfi_restore_state
 1548              	.LBE766:
 1549              	.LBE765:
 171:fltk-1.3.4-1/src/Fl_Input.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1550              		.loc 2 171 0
 1551 0028 E8000000 		call	_ZNK9Fl_Input_8line_endEi
 1551      00
 1552              	.LVL150:
 1553              	.LBB767:
 1554              	.LBB768:
 1555              		.loc 10 347 0
 1556 002d 8BB39000 		movl	144(%rbx), %esi
 1556      0000
 1557 0033 4889DF   		movq	%rbx, %rdi
 1558 0036 4531C0   		xorl	%r8d, %r8d
 1559 0039 31C9     		xorl	%ecx, %ecx
 1560 003b 89C2     		movl	%eax, %edx
 1561 003d E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 1561      00
 1562              	.LVL151:
 1563              	.LBE768:
 1564              	.LBE767:
 1565              		.loc 2 173 0
 1566 0042 B8010000 		movl	$1, %eax
 1566      00
 1567 0047 5B       		popq	%rbx
 1568              		.cfi_remember_state
 1569              		.cfi_def_cfa_offset 8
 1570              	.LVL152:
 1571 0048 C3       		ret
 1572              	.LVL153:
 1573 0049 0F1F8000 		.p2align 4,,10
 1573      000000
 1574              		.p2align 3
 1575              	.L96:
 1576              		.cfi_restore_state
 169:fltk-1.3.4-1/src/Fl_Input.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 1577              		.loc 2 169 0 discriminator 1
 1578 0050 31FF     		xorl	%edi, %edi
 1579              	.LVL154:
 1580 0052 E8000000 		call	_Z7fl_beepi
 1580      00
 1581              	.LVL155:
 1582              		.loc 2 173 0 discriminator 1
 1583 0057 B8010000 		movl	$1, %eax
 1583      00
 1584 005c 5B       		popq	%rbx
 1585              		.cfi_def_cfa_offset 8
 1586 005d C3       		ret
 1587              		.cfi_endproc
 1588              	.LFE528:
 1590              		.section	.text.unlikely._ZN8Fl_Input13kf_delete_eolEv
 1591              	.LCOLDE28:
 1592              		.section	.text._ZN8Fl_Input13kf_delete_eolEv
 1593              	.LHOTE28:
 1594              		.section	.text.unlikely._ZN8Fl_Input20kf_delete_char_rightEv,"ax",@progbits
 1595              		.align 2
 1596              	.LCOLDB29:
 1597              		.section	.text._ZN8Fl_Input20kf_delete_char_rightEv,"ax",@progbits
 1598              	.LHOTB29:
 1599              		.align 2
 1600              		.p2align 4,,15
 1601              		.globl	_ZN8Fl_Input20kf_delete_char_rightEv
 1603              	_ZN8Fl_Input20kf_delete_char_rightEv:
 1604              	.LFB529:
 174:fltk-1.3.4-1/src/Fl_Input.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Input.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 1605              		.loc 2 175 0
 1606              		.cfi_startproc
 1607              	.LVL156:
 176:fltk-1.3.4-1/src/Fl_Input.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 1608              		.loc 2 176 0
 1609 0000 F6476C08 		testb	$8, 108(%rdi)
 1610 0004 752A     		jne	.L102
 1611 0006 8B979400 		movl	148(%rdi), %edx
 1611      0000
 1612              	.LVL157:
 1613 000c 8BB79000 		movl	144(%rdi), %esi
 1613      0000
 1614              	.LVL158:
 177:fltk-1.3.4-1/src/Fl_Input.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 1615              		.loc 2 177 0
 1616 0012 39D6     		cmpl	%edx, %esi
 1617 0014 740A     		je	.L105
 1618              	.LBB769:
 1619              	.LBB770:
 334:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 1620              		.loc 10 334 0
 1621 0016 4531C0   		xorl	%r8d, %r8d
 1622 0019 31C9     		xorl	%ecx, %ecx
 1623 001b E9000000 		jmp	_ZN9Fl_Input_7replaceEiiPKci
 1623      00
 1624              	.LVL159:
 1625              		.p2align 4,,10
 1626              		.p2align 3
 1627              	.L105:
 1628 0020 8D5601   		leal	1(%rsi), %edx
 1629 0023 4531C0   		xorl	%r8d, %r8d
 1630 0026 31C9     		xorl	%ecx, %ecx
 1631 0028 E9000000 		jmp	_ZN9Fl_Input_7replaceEiiPKci
 1631      00
 1632              	.LVL160:
 1633 002d 0F1F00   		.p2align 4,,10
 1634              		.p2align 3
 1635              	.L102:
 1636              	.LBE770:
 1637              	.LBE769:
 175:fltk-1.3.4-1/src/Fl_Input.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 1638              		.loc 2 175 0 discriminator 1
 1639 0030 4883EC08 		subq	$8, %rsp
 1640              		.cfi_def_cfa_offset 16
 176:fltk-1.3.4-1/src/Fl_Input.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 1641              		.loc 2 176 0 discriminator 1
 1642 0034 31FF     		xorl	%edi, %edi
 1643              	.LVL161:
 1644 0036 E8000000 		call	_Z7fl_beepi
 1644      00
 1645              	.LVL162:
 178:fltk-1.3.4-1/src/Fl_Input.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Input.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 1646              		.loc 2 179 0 discriminator 1
 1647 003b B8010000 		movl	$1, %eax
 1647      00
 1648 0040 4883C408 		addq	$8, %rsp
 1649              		.cfi_def_cfa_offset 8
 1650 0044 C3       		ret
 1651              		.cfi_endproc
 1652              	.LFE529:
 1654              		.section	.text.unlikely._ZN8Fl_Input20kf_delete_char_rightEv
 1655              	.LCOLDE29:
 1656              		.section	.text._ZN8Fl_Input20kf_delete_char_rightEv
 1657              	.LHOTE29:
 1658              		.section	.text.unlikely._ZN8Fl_Input19kf_delete_char_leftEv,"ax",@progbits
 1659              		.align 2
 1660              	.LCOLDB30:
 1661              		.section	.text._ZN8Fl_Input19kf_delete_char_leftEv,"ax",@progbits
 1662              	.LHOTB30:
 1663              		.align 2
 1664              		.p2align 4,,15
 1665              		.globl	_ZN8Fl_Input19kf_delete_char_leftEv
 1667              	_ZN8Fl_Input19kf_delete_char_leftEv:
 1668              	.LFB530:
 180:fltk-1.3.4-1/src/Fl_Input.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Input.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 1669              		.loc 2 181 0
 1670              		.cfi_startproc
 1671              	.LVL163:
 1672 0000 4883EC08 		subq	$8, %rsp
 1673              		.cfi_def_cfa_offset 16
 182:fltk-1.3.4-1/src/Fl_Input.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 1674              		.loc 2 182 0
 1675 0004 F6476C08 		testb	$8, 108(%rdi)
 1676 0008 752E     		jne	.L112
 1677 000a 8B979400 		movl	148(%rdi), %edx
 1677      0000
 1678              	.LVL164:
 1679 0010 8BB79000 		movl	144(%rdi), %esi
 1679      0000
 1680              	.LVL165:
 183:fltk-1.3.4-1/src/Fl_Input.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1681              		.loc 2 183 0
 1682 0016 39D6     		cmpl	%edx, %esi
 1683 0018 7416     		je	.L113
 1684              	.LVL166:
 1685              	.L111:
 1686              	.LBB771:
 1687              	.LBB772:
 334:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 1688              		.loc 10 334 0
 1689 001a 4531C0   		xorl	%r8d, %r8d
 1690 001d 31C9     		xorl	%ecx, %ecx
 1691 001f E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 1691      00
 1692              	.LVL167:
 1693              	.LBE772:
 1694              	.LBE771:
 184:fltk-1.3.4-1/src/Fl_Input.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Input.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Input.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1695              		.loc 2 186 0
 1696 0024 B8010000 		movl	$1, %eax
 1696      00
 1697 0029 4883C408 		addq	$8, %rsp
 1698              		.cfi_remember_state
 1699              		.cfi_def_cfa_offset 8
 1700 002d C3       		ret
 1701              	.LVL168:
 1702 002e 6690     		.p2align 4,,10
 1703              		.p2align 3
 1704              	.L113:
 1705              		.cfi_restore_state
 1706              	.LBB774:
 1707              	.LBB773:
 334:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 1708              		.loc 10 334 0
 1709 0030 8D56FF   		leal	-1(%rsi), %edx
 1710 0033 EBE5     		jmp	.L111
 1711              	.LVL169:
 1712              		.p2align 4,,10
 1713 0035 0F1F00   		.p2align 3
 1714              	.L112:
 1715              	.LBE773:
 1716              	.LBE774:
 182:fltk-1.3.4-1/src/Fl_Input.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1717              		.loc 2 182 0 discriminator 1
 1718 0038 31FF     		xorl	%edi, %edi
 1719              	.LVL170:
 1720 003a E8000000 		call	_Z7fl_beepi
 1720      00
 1721              	.LVL171:
 1722              		.loc 2 186 0 discriminator 1
 1723 003f B8010000 		movl	$1, %eax
 1723      00
 1724 0044 4883C408 		addq	$8, %rsp
 1725              		.cfi_def_cfa_offset 8
 1726 0048 C3       		ret
 1727              		.cfi_endproc
 1728              	.LFE530:
 1730              		.section	.text.unlikely._ZN8Fl_Input19kf_delete_char_leftEv
 1731              	.LCOLDE30:
 1732              		.section	.text._ZN8Fl_Input19kf_delete_char_leftEv
 1733              	.LHOTE30:
 1734              		.section	.text.unlikely._ZN8Fl_Input11kf_move_solEv,"ax",@progbits
 1735              		.align 2
 1736              	.LCOLDB31:
 1737              		.section	.text._ZN8Fl_Input11kf_move_solEv,"ax",@progbits
 1738              	.LHOTB31:
 1739              		.align 2
 1740              		.p2align 4,,15
 1741              		.globl	_ZN8Fl_Input11kf_move_solEv
 1743              	_ZN8Fl_Input11kf_move_solEv:
 1744              	.LFB531:
 187:fltk-1.3.4-1/src/Fl_Input.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Input.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Input.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1745              		.loc 2 189 0
 1746              		.cfi_startproc
 1747              	.LVL172:
 1748 0000 53       		pushq	%rbx
 1749              		.cfi_def_cfa_offset 16
 1750              		.cfi_offset 3, -16
 190:fltk-1.3.4-1/src/Fl_Input.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 1751              		.loc 2 190 0
 1752 0001 8BB79000 		movl	144(%rdi), %esi
 1752      0000
 189:fltk-1.3.4-1/src/Fl_Input.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 1753              		.loc 2 189 0
 1754 0007 4889FB   		movq	%rdi, %rbx
 1755              		.loc 2 190 0
 1756 000a E8000000 		call	_ZNK9Fl_Input_10line_startEi
 1756      00
 1757              	.LVL173:
 1758              	.LBB775:
 1759              	.LBB776:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1760              		.loc 2 56 0
 1761 000f F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 1761      000001
 1762 0016 89C2     		movl	%eax, %edx
 1763 0018 7406     		je	.L115
 1764 001a 8B939400 		movl	148(%rbx), %edx
 1764      0000
 1765              	.LVL174:
 1766              	.L115:
 1767 0020 4889DF   		movq	%rbx, %rdi
 1768 0023 89C6     		movl	%eax, %esi
 1769 0025 E8000000 		call	_ZN9Fl_Input_8positionEii
 1769      00
 1770              	.LVL175:
 1771              	.LBE776:
 1772              	.LBE775:
 1773              		.loc 2 190 0
 1774 002a 31FF     		xorl	%edi, %edi
 1775              	.LBB778:
 1776              	.LBB777:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1777              		.loc 2 56 0
 1778 002c 89C3     		movl	%eax, %ebx
 1779              	.LVL176:
 1780              	.LBE777:
 1781              	.LBE778:
 1782              		.loc 2 190 0
 1783 002e E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 1783      00
 1784              	.LVL177:
 1785 0033 83F001   		xorl	$1, %eax
 1786 0036 0FB6C0   		movzbl	%al, %eax
 1787 0039 01D8     		addl	%ebx, %eax
 191:fltk-1.3.4-1/src/Fl_Input.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1788              		.loc 2 191 0
 1789 003b 5B       		popq	%rbx
 1790              		.cfi_def_cfa_offset 8
 1791 003c C3       		ret
 1792              		.cfi_endproc
 1793              	.LFE531:
 1795              		.section	.text.unlikely._ZN8Fl_Input11kf_move_solEv
 1796              	.LCOLDE31:
 1797              		.section	.text._ZN8Fl_Input11kf_move_solEv
 1798              	.LHOTE31:
 1799              		.section	.text.unlikely._ZN8Fl_Input11kf_move_eolEv,"ax",@progbits
 1800              		.align 2
 1801              	.LCOLDB32:
 1802              		.section	.text._ZN8Fl_Input11kf_move_eolEv,"ax",@progbits
 1803              	.LHOTB32:
 1804              		.align 2
 1805              		.p2align 4,,15
 1806              		.globl	_ZN8Fl_Input11kf_move_eolEv
 1808              	_ZN8Fl_Input11kf_move_eolEv:
 1809              	.LFB532:
 192:fltk-1.3.4-1/src/Fl_Input.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Input.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Input.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1810              		.loc 2 194 0
 1811              		.cfi_startproc
 1812              	.LVL178:
 1813 0000 53       		pushq	%rbx
 1814              		.cfi_def_cfa_offset 16
 1815              		.cfi_offset 3, -16
 195:fltk-1.3.4-1/src/Fl_Input.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 1816              		.loc 2 195 0
 1817 0001 8BB79000 		movl	144(%rdi), %esi
 1817      0000
 194:fltk-1.3.4-1/src/Fl_Input.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 1818              		.loc 2 194 0
 1819 0007 4889FB   		movq	%rdi, %rbx
 1820              		.loc 2 195 0
 1821 000a E8000000 		call	_ZNK9Fl_Input_8line_endEi
 1821      00
 1822              	.LVL179:
 1823              	.LBB779:
 1824              	.LBB780:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1825              		.loc 2 56 0
 1826 000f F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 1826      000001
 1827 0016 89C2     		movl	%eax, %edx
 1828 0018 7406     		je	.L121
 1829 001a 8B939400 		movl	148(%rbx), %edx
 1829      0000
 1830              	.LVL180:
 1831              	.L121:
 1832 0020 4889DF   		movq	%rbx, %rdi
 1833 0023 89C6     		movl	%eax, %esi
 1834 0025 E8000000 		call	_ZN9Fl_Input_8positionEii
 1834      00
 1835              	.LVL181:
 1836              	.LBE780:
 1837              	.LBE779:
 1838              		.loc 2 195 0
 1839 002a 31FF     		xorl	%edi, %edi
 1840              	.LBB782:
 1841              	.LBB781:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1842              		.loc 2 56 0
 1843 002c 89C3     		movl	%eax, %ebx
 1844              	.LVL182:
 1845              	.LBE781:
 1846              	.LBE782:
 1847              		.loc 2 195 0
 1848 002e E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 1848      00
 1849              	.LVL183:
 1850 0033 83F001   		xorl	$1, %eax
 1851 0036 0FB6C0   		movzbl	%al, %eax
 1852 0039 01D8     		addl	%ebx, %eax
 196:fltk-1.3.4-1/src/Fl_Input.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1853              		.loc 2 196 0
 1854 003b 5B       		popq	%rbx
 1855              		.cfi_def_cfa_offset 8
 1856 003c C3       		ret
 1857              		.cfi_endproc
 1858              	.LFE532:
 1860              		.section	.text.unlikely._ZN8Fl_Input11kf_move_eolEv
 1861              	.LCOLDE32:
 1862              		.section	.text._ZN8Fl_Input11kf_move_eolEv
 1863              	.LHOTE32:
 1864              		.section	.text.unlikely._ZN8Fl_Input12kf_clear_eolEv,"ax",@progbits
 1865              		.align 2
 1866              	.LCOLDB33:
 1867              		.section	.text._ZN8Fl_Input12kf_clear_eolEv,"ax",@progbits
 1868              	.LHOTB33:
 1869              		.align 2
 1870              		.p2align 4,,15
 1871              		.globl	_ZN8Fl_Input12kf_clear_eolEv
 1873              	_ZN8Fl_Input12kf_clear_eolEv:
 1874              	.LFB533:
 197:fltk-1.3.4-1/src/Fl_Input.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Input.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Input.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1875              		.loc 2 199 0
 1876              		.cfi_startproc
 1877              	.LVL184:
 1878 0000 53       		pushq	%rbx
 1879              		.cfi_def_cfa_offset 16
 1880              		.cfi_offset 3, -16
 200:fltk-1.3.4-1/src/Fl_Input.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 1881              		.loc 2 200 0
 1882 0001 F6476C08 		testb	$8, 108(%rdi)
 1883 0005 7549     		jne	.L134
 1884 0007 8BB79000 		movl	144(%rdi), %esi
 1884      0000
 201:fltk-1.3.4-1/src/Fl_Input.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 1885              		.loc 2 201 0
 1886 000d 31C0     		xorl	%eax, %eax
 1887 000f 39B78800 		cmpl	%esi, 136(%rdi)
 1887      0000
 1888 0015 4889FB   		movq	%rdi, %rbx
 1889              	.LVL185:
 1890 0018 7F06     		jg	.L135
 202:fltk-1.3.4-1/src/Fl_Input.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Input.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Input.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Input.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Input.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 1891              		.loc 2 206 0
 1892 001a 5B       		popq	%rbx
 1893              		.cfi_remember_state
 1894              		.cfi_def_cfa_offset 8
 1895 001b C3       		ret
 1896              	.LVL186:
 1897 001c 0F1F4000 		.p2align 4,,10
 1898              		.p2align 3
 1899              	.L135:
 1900              		.cfi_restore_state
 202:fltk-1.3.4-1/src/Fl_Input.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 1901              		.loc 2 202 0
 1902 0020 E8000000 		call	_ZNK9Fl_Input_8line_endEi
 1902      00
 1903              	.LVL187:
 1904 0025 8BB39000 		movl	144(%rbx), %esi
 1904      0000
 1905              	.LVL188:
 203:fltk-1.3.4-1/src/Fl_Input.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 1906              		.loc 2 203 0
 1907 002b 39F0     		cmpl	%esi, %eax
 1908 002d 7431     		je	.L136
 1909              	.LVL189:
 1910              	.L129:
 1911              	.LBB783:
 1912              	.LBB784:
 1913              		.loc 10 347 0
 1914 002f 4889DF   		movq	%rbx, %rdi
 1915 0032 4531C0   		xorl	%r8d, %r8d
 1916 0035 31C9     		xorl	%ecx, %ecx
 1917 0037 89C2     		movl	%eax, %edx
 1918 0039 E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 1918      00
 1919              	.LVL190:
 1920              	.LBE784:
 1921              	.LBE783:
 205:fltk-1.3.4-1/src/Fl_Input.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 1922              		.loc 2 205 0
 1923 003e 4889DF   		movq	%rbx, %rdi
 1924              		.loc 2 206 0
 1925 0041 5B       		popq	%rbx
 1926              		.cfi_remember_state
 1927              		.cfi_def_cfa_offset 8
 1928              	.LVL191:
 205:fltk-1.3.4-1/src/Fl_Input.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 1929              		.loc 2 205 0
 1930 0042 E9000000 		jmp	_ZN9Fl_Input_9copy_cutsEv
 1930      00
 1931              	.LVL192:
 1932 0047 660F1F84 		.p2align 4,,10
 1932      00000000 
 1932      00
 1933              		.p2align 3
 1934              	.L134:
 1935              		.cfi_restore_state
 200:fltk-1.3.4-1/src/Fl_Input.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 1936              		.loc 2 200 0 discriminator 1
 1937 0050 31FF     		xorl	%edi, %edi
 1938              	.LVL193:
 1939 0052 E8000000 		call	_Z7fl_beepi
 1939      00
 1940              	.LVL194:
 1941 0057 B8010000 		movl	$1, %eax
 1941      00
 1942              		.loc 2 206 0 discriminator 1
 1943 005c 5B       		popq	%rbx
 1944              		.cfi_remember_state
 1945              		.cfi_def_cfa_offset 8
 1946 005d C3       		ret
 1947              	.LVL195:
 1948 005e 6690     		.p2align 4,,10
 1949              		.p2align 3
 1950              	.L136:
 1951              		.cfi_restore_state
 203:fltk-1.3.4-1/src/Fl_Input.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 1952              		.loc 2 203 0 discriminator 1
 1953 0060 31D2     		xorl	%edx, %edx
 1954 0062 3B838800 		cmpl	136(%rbx), %eax
 1954      0000
 1955 0068 0F9CC2   		setl	%dl
 1956 006b 01D0     		addl	%edx, %eax
 1957              	.LVL196:
 1958 006d EBC0     		jmp	.L129
 1959              		.cfi_endproc
 1960              	.LFE533:
 1962              		.section	.text.unlikely._ZN8Fl_Input12kf_clear_eolEv
 1963              	.LCOLDE33:
 1964              		.section	.text._ZN8Fl_Input12kf_clear_eolEv
 1965              	.LHOTE33:
 1966              		.section	.text.unlikely._ZN8Fl_Input17kf_move_char_leftEv,"ax",@progbits
 1967              		.align 2
 1968              	.LCOLDB34:
 1969              		.section	.text._ZN8Fl_Input17kf_move_char_leftEv,"ax",@progbits
 1970              	.LHOTB34:
 1971              		.align 2
 1972              		.p2align 4,,15
 1973              		.globl	_ZN8Fl_Input17kf_move_char_leftEv
 1975              	_ZN8Fl_Input17kf_move_char_leftEv:
 1976              	.LFB534:
 207:fltk-1.3.4-1/src/Fl_Input.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Input.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Input.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Input.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Input.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 1977              		.loc 2 211 0
 1978              		.cfi_startproc
 1979              	.LVL197:
 1980 0000 55       		pushq	%rbp
 1981              		.cfi_def_cfa_offset 16
 1982              		.cfi_offset 6, -16
 1983 0001 53       		pushq	%rbx
 1984              		.cfi_def_cfa_offset 24
 1985              		.cfi_offset 3, -24
 1986 0002 4883EC08 		subq	$8, %rsp
 1987              		.cfi_def_cfa_offset 32
 212:fltk-1.3.4-1/src/Fl_Input.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 1988              		.loc 2 212 0
 1989 0006 8B879000 		movl	144(%rdi), %eax
 1989      0000
 1990              	.LBB785:
 1991              	.LBB786:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1992              		.loc 2 56 0
 1993 000c F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 1993      000001
 1994              	.LBE786:
 1995              	.LBE785:
 1996              		.loc 2 212 0
 1997 0013 8D70FF   		leal	-1(%rax), %esi
 1998              	.LVL198:
 1999 0016 89F2     		movl	%esi, %edx
 2000              	.LBB789:
 2001              	.LBB787:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2002              		.loc 2 56 0
 2003 0018 7406     		je	.L138
 2004 001a 8B979400 		movl	148(%rdi), %edx
 2004      0000
 2005              	.LVL199:
 2006              	.L138:
 2007 0020 E8000000 		call	_ZN9Fl_Input_8positionEii
 2007      00
 2008              	.LVL200:
 2009              	.LBE787:
 2010              	.LBE789:
 2011              		.loc 2 212 0
 2012 0025 31FF     		xorl	%edi, %edi
 2013              	.LBB790:
 2014              	.LBB788:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2015              		.loc 2 56 0
 2016 0027 89C5     		movl	%eax, %ebp
 2017              	.LVL201:
 2018              	.LBE788:
 2019              	.LBE790:
 2020              		.loc 2 212 0
 2021 0029 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 2021      00
 2022              	.LVL202:
 213:fltk-1.3.4-1/src/Fl_Input.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 2023              		.loc 2 213 0
 2024 002e 31FF     		xorl	%edi, %edi
 212:fltk-1.3.4-1/src/Fl_Input.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2025              		.loc 2 212 0
 2026 0030 89C3     		movl	%eax, %ebx
 2027              	.LVL203:
 2028              		.loc 2 213 0
 2029 0032 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 2029      00
 2030              	.LVL204:
 2031 0037 84C0     		testb	%al, %al
 2032 0039 BA010000 		movl	$1, %edx
 2032      00
 2033 003e 7409     		je	.L139
 212:fltk-1.3.4-1/src/Fl_Input.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2034              		.loc 2 212 0 discriminator 1
 2035 0040 83F301   		xorl	$1, %ebx
 2036              	.LVL205:
 2037 0043 0FB6C3   		movzbl	%bl, %eax
 2038              		.loc 2 213 0 discriminator 1
 2039 0046 8D1428   		leal	(%rax,%rbp), %edx
 2040              	.L139:
 214:fltk-1.3.4-1/src/Fl_Input.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 2041              		.loc 2 214 0 discriminator 4
 2042 0049 4883C408 		addq	$8, %rsp
 2043              		.cfi_def_cfa_offset 24
 2044 004d 89D0     		movl	%edx, %eax
 2045 004f 5B       		popq	%rbx
 2046              		.cfi_def_cfa_offset 16
 2047 0050 5D       		popq	%rbp
 2048              		.cfi_def_cfa_offset 8
 2049 0051 C3       		ret
 2050              		.cfi_endproc
 2051              	.LFE534:
 2053              		.section	.text.unlikely._ZN8Fl_Input17kf_move_char_leftEv
 2054              	.LCOLDE34:
 2055              		.section	.text._ZN8Fl_Input17kf_move_char_leftEv
 2056              	.LHOTE34:
 2057              		.section	.text.unlikely._ZN8Fl_Input18kf_move_char_rightEv,"ax",@progbits
 2058              		.align 2
 2059              	.LCOLDB35:
 2060              		.section	.text._ZN8Fl_Input18kf_move_char_rightEv,"ax",@progbits
 2061              	.LHOTB35:
 2062              		.align 2
 2063              		.p2align 4,,15
 2064              		.globl	_ZN8Fl_Input18kf_move_char_rightEv
 2066              	_ZN8Fl_Input18kf_move_char_rightEv:
 2067              	.LFB535:
 215:fltk-1.3.4-1/src/Fl_Input.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Input.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Input.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Input.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Input.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2068              		.loc 2 219 0
 2069              		.cfi_startproc
 2070              	.LVL206:
 2071 0000 55       		pushq	%rbp
 2072              		.cfi_def_cfa_offset 16
 2073              		.cfi_offset 6, -16
 2074 0001 53       		pushq	%rbx
 2075              		.cfi_def_cfa_offset 24
 2076              		.cfi_offset 3, -24
 2077 0002 4883EC08 		subq	$8, %rsp
 2078              		.cfi_def_cfa_offset 32
 220:fltk-1.3.4-1/src/Fl_Input.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 2079              		.loc 2 220 0
 2080 0006 8B879000 		movl	144(%rdi), %eax
 2080      0000
 2081              	.LBB791:
 2082              	.LBB792:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2083              		.loc 2 56 0
 2084 000c F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 2084      000001
 2085              	.LBE792:
 2086              	.LBE791:
 2087              		.loc 2 220 0
 2088 0013 8D7001   		leal	1(%rax), %esi
 2089              	.LVL207:
 2090 0016 89F2     		movl	%esi, %edx
 2091              	.LBB795:
 2092              	.LBB793:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2093              		.loc 2 56 0
 2094 0018 7406     		je	.L147
 2095 001a 8B979400 		movl	148(%rdi), %edx
 2095      0000
 2096              	.LVL208:
 2097              	.L147:
 2098 0020 E8000000 		call	_ZN9Fl_Input_8positionEii
 2098      00
 2099              	.LVL209:
 2100              	.LBE793:
 2101              	.LBE795:
 2102              		.loc 2 220 0
 2103 0025 31FF     		xorl	%edi, %edi
 2104              	.LBB796:
 2105              	.LBB794:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2106              		.loc 2 56 0
 2107 0027 89C5     		movl	%eax, %ebp
 2108              	.LVL210:
 2109              	.LBE794:
 2110              	.LBE796:
 2111              		.loc 2 220 0
 2112 0029 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 2112      00
 2113              	.LVL211:
 221:fltk-1.3.4-1/src/Fl_Input.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 2114              		.loc 2 221 0
 2115 002e 31FF     		xorl	%edi, %edi
 220:fltk-1.3.4-1/src/Fl_Input.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 2116              		.loc 2 220 0
 2117 0030 89C3     		movl	%eax, %ebx
 2118              	.LVL212:
 2119              		.loc 2 221 0
 2120 0032 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 2120      00
 2121              	.LVL213:
 2122 0037 84C0     		testb	%al, %al
 2123 0039 BA010000 		movl	$1, %edx
 2123      00
 2124 003e 7409     		je	.L148
 220:fltk-1.3.4-1/src/Fl_Input.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 2125              		.loc 2 220 0 discriminator 1
 2126 0040 83F301   		xorl	$1, %ebx
 2127              	.LVL214:
 2128 0043 0FB6C3   		movzbl	%bl, %eax
 2129              		.loc 2 221 0 discriminator 1
 2130 0046 8D1428   		leal	(%rax,%rbp), %edx
 2131              	.L148:
 222:fltk-1.3.4-1/src/Fl_Input.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 2132              		.loc 2 222 0 discriminator 4
 2133 0049 4883C408 		addq	$8, %rsp
 2134              		.cfi_def_cfa_offset 24
 2135 004d 89D0     		movl	%edx, %eax
 2136 004f 5B       		popq	%rbx
 2137              		.cfi_def_cfa_offset 16
 2138 0050 5D       		popq	%rbp
 2139              		.cfi_def_cfa_offset 8
 2140 0051 C3       		ret
 2141              		.cfi_endproc
 2142              	.LFE535:
 2144              		.section	.text.unlikely._ZN8Fl_Input18kf_move_char_rightEv
 2145              	.LCOLDE35:
 2146              		.section	.text._ZN8Fl_Input18kf_move_char_rightEv
 2147              	.LHOTE35:
 2148              		.section	.text.unlikely._ZN8Fl_Input17kf_move_word_leftEv,"ax",@progbits
 2149              		.align 2
 2150              	.LCOLDB36:
 2151              		.section	.text._ZN8Fl_Input17kf_move_word_leftEv,"ax",@progbits
 2152              	.LHOTB36:
 2153              		.align 2
 2154              		.p2align 4,,15
 2155              		.globl	_ZN8Fl_Input17kf_move_word_leftEv
 2157              	_ZN8Fl_Input17kf_move_word_leftEv:
 2158              	.LFB536:
 223:fltk-1.3.4-1/src/Fl_Input.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Input.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Input.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 2159              		.loc 2 225 0
 2160              		.cfi_startproc
 2161              	.LVL215:
 2162 0000 53       		pushq	%rbx
 2163              		.cfi_def_cfa_offset 16
 2164              		.cfi_offset 3, -16
 226:fltk-1.3.4-1/src/Fl_Input.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2165              		.loc 2 226 0
 2166 0001 8BB79000 		movl	144(%rdi), %esi
 2166      0000
 225:fltk-1.3.4-1/src/Fl_Input.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2167              		.loc 2 225 0
 2168 0007 4889FB   		movq	%rdi, %rbx
 2169              		.loc 2 226 0
 2170 000a E8000000 		call	_ZNK9Fl_Input_10word_startEi
 2170      00
 2171              	.LVL216:
 2172              	.LBB797:
 2173              	.LBB798:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2174              		.loc 2 56 0
 2175 000f F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 2175      000001
 2176 0016 89C2     		movl	%eax, %edx
 2177 0018 7406     		je	.L156
 2178 001a 8B939400 		movl	148(%rbx), %edx
 2178      0000
 2179              	.LVL217:
 2180              	.L156:
 2181 0020 4889DF   		movq	%rbx, %rdi
 2182 0023 89C6     		movl	%eax, %esi
 2183 0025 E8000000 		call	_ZN9Fl_Input_8positionEii
 2183      00
 2184              	.LVL218:
 2185              	.LBE798:
 2186              	.LBE797:
 227:fltk-1.3.4-1/src/Fl_Input.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Input.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 2187              		.loc 2 228 0
 2188 002a B8010000 		movl	$1, %eax
 2188      00
 2189 002f 5B       		popq	%rbx
 2190              		.cfi_def_cfa_offset 8
 2191              	.LVL219:
 2192 0030 C3       		ret
 2193              		.cfi_endproc
 2194              	.LFE536:
 2196              		.section	.text.unlikely._ZN8Fl_Input17kf_move_word_leftEv
 2197              	.LCOLDE36:
 2198              		.section	.text._ZN8Fl_Input17kf_move_word_leftEv
 2199              	.LHOTE36:
 2200              		.section	.text.unlikely._ZN8Fl_Input18kf_move_word_rightEv,"ax",@progbits
 2201              		.align 2
 2202              	.LCOLDB37:
 2203              		.section	.text._ZN8Fl_Input18kf_move_word_rightEv,"ax",@progbits
 2204              	.LHOTB37:
 2205              		.align 2
 2206              		.p2align 4,,15
 2207              		.globl	_ZN8Fl_Input18kf_move_word_rightEv
 2209              	_ZN8Fl_Input18kf_move_word_rightEv:
 2210              	.LFB537:
 229:fltk-1.3.4-1/src/Fl_Input.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Input.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Input.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 2211              		.loc 2 231 0
 2212              		.cfi_startproc
 2213              	.LVL220:
 2214 0000 53       		pushq	%rbx
 2215              		.cfi_def_cfa_offset 16
 2216              		.cfi_offset 3, -16
 232:fltk-1.3.4-1/src/Fl_Input.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 2217              		.loc 2 232 0
 2218 0001 8BB79000 		movl	144(%rdi), %esi
 2218      0000
 231:fltk-1.3.4-1/src/Fl_Input.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 2219              		.loc 2 231 0
 2220 0007 4889FB   		movq	%rdi, %rbx
 2221              		.loc 2 232 0
 2222 000a E8000000 		call	_ZNK9Fl_Input_8word_endEi
 2222      00
 2223              	.LVL221:
 2224              	.LBB799:
 2225              	.LBB800:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2226              		.loc 2 56 0
 2227 000f F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 2227      000001
 2228 0016 89C2     		movl	%eax, %edx
 2229 0018 7406     		je	.L162
 2230 001a 8B939400 		movl	148(%rbx), %edx
 2230      0000
 2231              	.LVL222:
 2232              	.L162:
 2233 0020 4889DF   		movq	%rbx, %rdi
 2234 0023 89C6     		movl	%eax, %esi
 2235 0025 E8000000 		call	_ZN9Fl_Input_8positionEii
 2235      00
 2236              	.LVL223:
 2237              	.LBE800:
 2238              	.LBE799:
 233:fltk-1.3.4-1/src/Fl_Input.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Input.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 2239              		.loc 2 234 0
 2240 002a B8010000 		movl	$1, %eax
 2240      00
 2241 002f 5B       		popq	%rbx
 2242              		.cfi_def_cfa_offset 8
 2243              	.LVL224:
 2244 0030 C3       		ret
 2245              		.cfi_endproc
 2246              	.LFE537:
 2248              		.section	.text.unlikely._ZN8Fl_Input18kf_move_word_rightEv
 2249              	.LCOLDE37:
 2250              		.section	.text._ZN8Fl_Input18kf_move_word_rightEv
 2251              	.LHOTE37:
 2252              		.section	.text.unlikely._ZN8Fl_Input18kf_move_up_and_solEv,"ax",@progbits
 2253              		.align 2
 2254              	.LCOLDB38:
 2255              		.section	.text._ZN8Fl_Input18kf_move_up_and_solEv,"ax",@progbits
 2256              	.LHOTB38:
 2257              		.align 2
 2258              		.p2align 4,,15
 2259              		.globl	_ZN8Fl_Input18kf_move_up_and_solEv
 2261              	_ZN8Fl_Input18kf_move_up_and_solEv:
 2262              	.LFB538:
 235:fltk-1.3.4-1/src/Fl_Input.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Input.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Input.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2263              		.loc 2 237 0
 2264              		.cfi_startproc
 2265              	.LVL225:
 2266 0000 53       		pushq	%rbx
 2267              		.cfi_def_cfa_offset 16
 2268              		.cfi_offset 3, -16
 238:fltk-1.3.4-1/src/Fl_Input.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 2269              		.loc 2 238 0
 2270 0001 8BB79000 		movl	144(%rdi), %esi
 2270      0000
 237:fltk-1.3.4-1/src/Fl_Input.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 2271              		.loc 2 237 0
 2272 0007 4889FB   		movq	%rdi, %rbx
 2273              		.loc 2 238 0
 2274 000a E8000000 		call	_ZNK9Fl_Input_10line_startEi
 2274      00
 2275              	.LVL226:
 2276 000f 8BB39000 		movl	144(%rbx), %esi
 2276      0000
 2277              	.LVL227:
 2278 0015 85F6     		testl	%esi, %esi
 2279 0017 7E07     		jle	.L183
 2280 0019 39F0     		cmpl	%esi, %eax
 2281 001b 7503     		jne	.L183
 2282              	.LVL228:
 239:fltk-1.3.4-1/src/Fl_Input.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 2283              		.loc 2 239 0
 2284 001d 83EE01   		subl	$1, %esi
 2285              	.LVL229:
 2286              	.L183:
 2287 0020 4889DF   		movq	%rbx, %rdi
 2288 0023 E8000000 		call	_ZNK9Fl_Input_10line_startEi
 2288      00
 2289              	.LVL230:
 2290              	.LBB801:
 2291              	.LBB802:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2292              		.loc 2 56 0
 2293 0028 F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 2293      000001
 2294 002f 89C2     		movl	%eax, %edx
 2295 0031 7406     		je	.L173
 2296 0033 8B939400 		movl	148(%rbx), %edx
 2296      0000
 2297              	.LVL231:
 2298              	.L173:
 2299              	.LBE802:
 2300              	.LBE801:
 2301              	.LBB803:
 2302              	.LBB804:
 2303 0039 4889DF   		movq	%rbx, %rdi
 2304 003c 89C6     		movl	%eax, %esi
 2305 003e E8000000 		call	_ZN9Fl_Input_8positionEii
 2305      00
 2306              	.LVL232:
 2307              	.LBE804:
 2308              	.LBE803:
 240:fltk-1.3.4-1/src/Fl_Input.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Input.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 2309              		.loc 2 241 0
 2310 0043 31FF     		xorl	%edi, %edi
 2311              	.LBB806:
 2312              	.LBB805:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2313              		.loc 2 56 0
 2314 0045 89C3     		movl	%eax, %ebx
 2315              	.LVL233:
 2316              	.LBE805:
 2317              	.LBE806:
 2318              		.loc 2 241 0
 2319 0047 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 2319      00
 2320              	.LVL234:
 2321 004c 83F001   		xorl	$1, %eax
 2322 004f 0FB6C0   		movzbl	%al, %eax
 2323 0052 01D8     		addl	%ebx, %eax
 242:fltk-1.3.4-1/src/Fl_Input.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 2324              		.loc 2 242 0
 2325 0054 5B       		popq	%rbx
 2326              		.cfi_def_cfa_offset 8
 2327 0055 C3       		ret
 2328              		.cfi_endproc
 2329              	.LFE538:
 2331              		.section	.text.unlikely._ZN8Fl_Input18kf_move_up_and_solEv
 2332              	.LCOLDE38:
 2333              		.section	.text._ZN8Fl_Input18kf_move_up_and_solEv
 2334              	.LHOTE38:
 2335              		.section	.text.unlikely._ZN8Fl_Input20kf_move_down_and_eolEv,"ax",@progbits
 2336              		.align 2
 2337              	.LCOLDB39:
 2338              		.section	.text._ZN8Fl_Input20kf_move_down_and_eolEv,"ax",@progbits
 2339              	.LHOTB39:
 2340              		.align 2
 2341              		.p2align 4,,15
 2342              		.globl	_ZN8Fl_Input20kf_move_down_and_eolEv
 2344              	_ZN8Fl_Input20kf_move_down_and_eolEv:
 2345              	.LFB539:
 243:fltk-1.3.4-1/src/Fl_Input.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Input.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Input.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 2346              		.loc 2 245 0
 2347              		.cfi_startproc
 2348              	.LVL235:
 2349 0000 53       		pushq	%rbx
 2350              		.cfi_def_cfa_offset 16
 2351              		.cfi_offset 3, -16
 246:fltk-1.3.4-1/src/Fl_Input.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 2352              		.loc 2 246 0
 2353 0001 8BB79000 		movl	144(%rdi), %esi
 2353      0000
 245:fltk-1.3.4-1/src/Fl_Input.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 2354              		.loc 2 245 0
 2355 0007 4889FB   		movq	%rdi, %rbx
 2356              		.loc 2 246 0
 2357 000a E8000000 		call	_ZNK9Fl_Input_8line_endEi
 2357      00
 2358              	.LVL236:
 2359 000f 8BB39000 		movl	144(%rbx), %esi
 2359      0000
 2360              	.LVL237:
 2361 0015 39F0     		cmpl	%esi, %eax
 2362 0017 7437     		je	.L197
 2363              	.LVL238:
 2364              	.L196:
 247:fltk-1.3.4-1/src/Fl_Input.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 2365              		.loc 2 247 0
 2366 0019 4889DF   		movq	%rbx, %rdi
 2367 001c E8000000 		call	_ZNK9Fl_Input_8line_endEi
 2367      00
 2368              	.LVL239:
 2369              	.LBB807:
 2370              	.LBB808:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2371              		.loc 2 56 0
 2372 0021 F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 2372      000001
 2373 0028 89C2     		movl	%eax, %edx
 2374 002a 7406     		je	.L189
 2375 002c 8B939400 		movl	148(%rbx), %edx
 2375      0000
 2376              	.LVL240:
 2377              	.L189:
 2378              	.LBE808:
 2379              	.LBE807:
 2380              	.LBB809:
 2381              	.LBB810:
 2382 0032 4889DF   		movq	%rbx, %rdi
 2383 0035 89C6     		movl	%eax, %esi
 2384 0037 E8000000 		call	_ZN9Fl_Input_8positionEii
 2384      00
 2385              	.LVL241:
 2386              	.LBE810:
 2387              	.LBE809:
 248:fltk-1.3.4-1/src/Fl_Input.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Input.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 2388              		.loc 2 249 0
 2389 003c 31FF     		xorl	%edi, %edi
 2390              	.LBB812:
 2391              	.LBB811:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2392              		.loc 2 56 0
 2393 003e 89C3     		movl	%eax, %ebx
 2394              	.LVL242:
 2395              	.LBE811:
 2396              	.LBE812:
 2397              		.loc 2 249 0
 2398 0040 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 2398      00
 2399              	.LVL243:
 2400 0045 83F001   		xorl	$1, %eax
 2401 0048 0FB6C0   		movzbl	%al, %eax
 2402 004b 01D8     		addl	%ebx, %eax
 250:fltk-1.3.4-1/src/Fl_Input.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 2403              		.loc 2 250 0
 2404 004d 5B       		popq	%rbx
 2405              		.cfi_remember_state
 2406              		.cfi_def_cfa_offset 8
 2407 004e C3       		ret
 2408              	.LVL244:
 2409 004f 90       		.p2align 4,,10
 2410              		.p2align 3
 2411              	.L197:
 2412              		.cfi_restore_state
 246:fltk-1.3.4-1/src/Fl_Input.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 2413              		.loc 2 246 0 discriminator 1
 2414 0050 3B838800 		cmpl	136(%rbx), %eax
 2414      0000
 2415 0056 7DC1     		jge	.L196
 2416              	.LVL245:
 247:fltk-1.3.4-1/src/Fl_Input.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2417              		.loc 2 247 0
 2418 0058 8D7001   		leal	1(%rax), %esi
 2419 005b EBBC     		jmp	.L196
 2420              		.cfi_endproc
 2421              	.LFE539:
 2423              		.section	.text.unlikely._ZN8Fl_Input20kf_move_down_and_eolEv
 2424              	.LCOLDE39:
 2425              		.section	.text._ZN8Fl_Input20kf_move_down_and_eolEv
 2426              	.LHOTE39:
 2427              		.section	.text.unlikely._ZN8Fl_Input6kf_topEv,"ax",@progbits
 2428              		.align 2
 2429              	.LCOLDB40:
 2430              		.section	.text._ZN8Fl_Input6kf_topEv,"ax",@progbits
 2431              	.LHOTB40:
 2432              		.align 2
 2433              		.p2align 4,,15
 2434              		.globl	_ZN8Fl_Input6kf_topEv
 2436              	_ZN8Fl_Input6kf_topEv:
 2437              	.LFB540:
 251:fltk-1.3.4-1/src/Fl_Input.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Input.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Input.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2438              		.loc 2 253 0
 2439              		.cfi_startproc
 2440              	.LVL246:
 2441 0000 4883EC08 		subq	$8, %rsp
 2442              		.cfi_def_cfa_offset 16
 2443              	.LBB813:
 2444              	.LBB814:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2445              		.loc 2 56 0
 2446 0004 8B150000 		movl	_ZN2Fl7e_stateE(%rip), %edx
 2446      0000
 2447 000a 81E20000 		andl	$65536, %edx
 2447      0100
 2448 0010 7406     		je	.L199
 2449 0012 8B979400 		movl	148(%rdi), %edx
 2449      0000
 2450              	.LVL247:
 2451              	.L199:
 2452 0018 31F6     		xorl	%esi, %esi
 2453 001a E8000000 		call	_ZN9Fl_Input_8positionEii
 2453      00
 2454              	.LVL248:
 2455              	.LBE814:
 2456              	.LBE813:
 254:fltk-1.3.4-1/src/Fl_Input.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Input.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Input.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 2457              		.loc 2 256 0
 2458 001f B8010000 		movl	$1, %eax
 2458      00
 2459 0024 4883C408 		addq	$8, %rsp
 2460              		.cfi_def_cfa_offset 8
 2461 0028 C3       		ret
 2462              		.cfi_endproc
 2463              	.LFE540:
 2465              		.section	.text.unlikely._ZN8Fl_Input6kf_topEv
 2466              	.LCOLDE40:
 2467              		.section	.text._ZN8Fl_Input6kf_topEv
 2468              	.LHOTE40:
 2469              		.section	.text.unlikely._ZN8Fl_Input9kf_bottomEv,"ax",@progbits
 2470              		.align 2
 2471              	.LCOLDB41:
 2472              		.section	.text._ZN8Fl_Input9kf_bottomEv,"ax",@progbits
 2473              	.LHOTB41:
 2474              		.align 2
 2475              		.p2align 4,,15
 2476              		.globl	_ZN8Fl_Input9kf_bottomEv
 2478              	_ZN8Fl_Input9kf_bottomEv:
 2479              	.LFB541:
 257:fltk-1.3.4-1/src/Fl_Input.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Input.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Input.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 2480              		.loc 2 259 0
 2481              		.cfi_startproc
 2482              	.LVL249:
 2483 0000 4883EC08 		subq	$8, %rsp
 2484              		.cfi_def_cfa_offset 16
 2485              	.LBB815:
 2486              	.LBB816:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2487              		.loc 2 56 0
 2488 0004 F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 2488      000001
 2489 000b 8BB78800 		movl	136(%rdi), %esi
 2489      0000
 2490              	.LVL250:
 2491 0011 89F2     		movl	%esi, %edx
 2492 0013 7406     		je	.L205
 2493 0015 8B979400 		movl	148(%rdi), %edx
 2493      0000
 2494              	.LVL251:
 2495              	.L205:
 2496 001b E8000000 		call	_ZN9Fl_Input_8positionEii
 2496      00
 2497              	.LVL252:
 2498              	.LBE816:
 2499              	.LBE815:
 260:fltk-1.3.4-1/src/Fl_Input.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Input.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Input.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 2500              		.loc 2 262 0
 2501 0020 B8010000 		movl	$1, %eax
 2501      00
 2502 0025 4883C408 		addq	$8, %rsp
 2503              		.cfi_def_cfa_offset 8
 2504 0029 C3       		ret
 2505              		.cfi_endproc
 2506              	.LFE541:
 2508              		.section	.text.unlikely._ZN8Fl_Input9kf_bottomEv
 2509              	.LCOLDE41:
 2510              		.section	.text._ZN8Fl_Input9kf_bottomEv
 2511              	.LHOTE41:
 2512              		.section	.text.unlikely._ZN8Fl_Input13kf_select_allEv,"ax",@progbits
 2513              		.align 2
 2514              	.LCOLDB42:
 2515              		.section	.text._ZN8Fl_Input13kf_select_allEv,"ax",@progbits
 2516              	.LHOTB42:
 2517              		.align 2
 2518              		.p2align 4,,15
 2519              		.globl	_ZN8Fl_Input13kf_select_allEv
 2521              	_ZN8Fl_Input13kf_select_allEv:
 2522              	.LFB542:
 263:fltk-1.3.4-1/src/Fl_Input.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Input.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Input.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2523              		.loc 2 265 0
 2524              		.cfi_startproc
 2525              	.LVL253:
 2526 0000 4883EC08 		subq	$8, %rsp
 2527              		.cfi_def_cfa_offset 16
 266:fltk-1.3.4-1/src/Fl_Input.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 2528              		.loc 2 266 0
 2529 0004 8B978800 		movl	136(%rdi), %edx
 2529      0000
 2530 000a 31F6     		xorl	%esi, %esi
 2531 000c E8000000 		call	_ZN9Fl_Input_8positionEii
 2531      00
 2532              	.LVL254:
 267:fltk-1.3.4-1/src/Fl_Input.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Input.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 2533              		.loc 2 268 0
 2534 0011 B8010000 		movl	$1, %eax
 2534      00
 2535 0016 4883C408 		addq	$8, %rsp
 2536              		.cfi_def_cfa_offset 8
 2537 001a C3       		ret
 2538              		.cfi_endproc
 2539              	.LFE542:
 2541              		.section	.text.unlikely._ZN8Fl_Input13kf_select_allEv
 2542              	.LCOLDE42:
 2543              		.section	.text._ZN8Fl_Input13kf_select_allEv
 2544              	.LHOTE42:
 2545              		.section	.text.unlikely._ZN8Fl_Input7kf_undoEv,"ax",@progbits
 2546              		.align 2
 2547              	.LCOLDB43:
 2548              		.section	.text._ZN8Fl_Input7kf_undoEv,"ax",@progbits
 2549              	.LHOTB43:
 2550              		.align 2
 2551              		.p2align 4,,15
 2552              		.globl	_ZN8Fl_Input7kf_undoEv
 2554              	_ZN8Fl_Input7kf_undoEv:
 2555              	.LFB543:
 269:fltk-1.3.4-1/src/Fl_Input.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Input.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Input.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 2556              		.loc 2 271 0
 2557              		.cfi_startproc
 2558              	.LVL255:
 272:fltk-1.3.4-1/src/Fl_Input.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2559              		.loc 2 272 0
 2560 0000 F6476C08 		testb	$8, 108(%rdi)
 2561 0004 750A     		jne	.L216
 273:fltk-1.3.4-1/src/Fl_Input.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 2562              		.loc 2 273 0
 2563 0006 E9000000 		jmp	_ZN9Fl_Input_4undoEv
 2563      00
 2564              	.LVL256:
 2565 000b 0F1F4400 		.p2align 4,,10
 2565      00
 2566              		.p2align 3
 2567              	.L216:
 271:fltk-1.3.4-1/src/Fl_Input.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2568              		.loc 2 271 0 discriminator 1
 2569 0010 4883EC08 		subq	$8, %rsp
 2570              		.cfi_def_cfa_offset 16
 272:fltk-1.3.4-1/src/Fl_Input.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2571              		.loc 2 272 0 discriminator 1
 2572 0014 31FF     		xorl	%edi, %edi
 2573              	.LVL257:
 2574 0016 E8000000 		call	_Z7fl_beepi
 2574      00
 2575              	.LVL258:
 274:fltk-1.3.4-1/src/Fl_Input.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 2576              		.loc 2 274 0 discriminator 1
 2577 001b B8010000 		movl	$1, %eax
 2577      00
 2578 0020 4883C408 		addq	$8, %rsp
 2579              		.cfi_def_cfa_offset 8
 2580 0024 C3       		ret
 2581              		.cfi_endproc
 2582              	.LFE543:
 2584              		.section	.text.unlikely._ZN8Fl_Input7kf_undoEv
 2585              	.LCOLDE43:
 2586              		.section	.text._ZN8Fl_Input7kf_undoEv
 2587              	.LHOTE43:
 2588              		.section	.text.unlikely._ZN8Fl_Input7kf_redoEv,"ax",@progbits
 2589              		.align 2
 2590              	.LCOLDB44:
 2591              		.section	.text._ZN8Fl_Input7kf_redoEv,"ax",@progbits
 2592              	.LHOTB44:
 2593              		.align 2
 2594              		.p2align 4,,15
 2595              		.globl	_ZN8Fl_Input7kf_redoEv
 2597              	_ZN8Fl_Input7kf_redoEv:
 2598              	.LFB544:
 275:fltk-1.3.4-1/src/Fl_Input.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Input.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Input.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 2599              		.loc 2 277 0
 2600              		.cfi_startproc
 2601              	.LVL259:
 278:fltk-1.3.4-1/src/Fl_Input.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2602              		.loc 2 278 0
 2603 0000 F6476C08 		testb	$8, 108(%rdi)
 2604 0004 750A     		jne	.L222
 279:fltk-1.3.4-1/src/Fl_Input.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 2605              		.loc 2 279 0
 2606 0006 E9000000 		jmp	_ZN8Fl_Input7kf_undoEv
 2606      00
 2607              	.LVL260:
 2608 000b 0F1F4400 		.p2align 4,,10
 2608      00
 2609              		.p2align 3
 2610              	.L222:
 277:fltk-1.3.4-1/src/Fl_Input.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2611              		.loc 2 277 0 discriminator 1
 2612 0010 4883EC08 		subq	$8, %rsp
 2613              		.cfi_def_cfa_offset 16
 278:fltk-1.3.4-1/src/Fl_Input.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2614              		.loc 2 278 0 discriminator 1
 2615 0014 31FF     		xorl	%edi, %edi
 2616              	.LVL261:
 2617 0016 E8000000 		call	_Z7fl_beepi
 2617      00
 2618              	.LVL262:
 280:fltk-1.3.4-1/src/Fl_Input.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2619              		.loc 2 280 0 discriminator 1
 2620 001b B8010000 		movl	$1, %eax
 2620      00
 2621 0020 4883C408 		addq	$8, %rsp
 2622              		.cfi_def_cfa_offset 8
 2623 0024 C3       		ret
 2624              		.cfi_endproc
 2625              	.LFE544:
 2627              		.section	.text.unlikely._ZN8Fl_Input7kf_redoEv
 2628              	.LCOLDE44:
 2629              		.section	.text._ZN8Fl_Input7kf_redoEv
 2630              	.LHOTE44:
 2631              		.section	.text.unlikely._ZN8Fl_Input7kf_copyEv,"ax",@progbits
 2632              		.align 2
 2633              	.LCOLDB45:
 2634              		.section	.text._ZN8Fl_Input7kf_copyEv,"ax",@progbits
 2635              	.LHOTB45:
 2636              		.align 2
 2637              		.p2align 4,,15
 2638              		.globl	_ZN8Fl_Input7kf_copyEv
 2640              	_ZN8Fl_Input7kf_copyEv:
 2641              	.LFB545:
 281:fltk-1.3.4-1/src/Fl_Input.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Input.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Input.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 2642              		.loc 2 283 0
 2643              		.cfi_startproc
 2644              	.LVL263:
 284:fltk-1.3.4-1/src/Fl_Input.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 2645              		.loc 2 284 0
 2646 0000 BE010000 		movl	$1, %esi
 2646      00
 2647 0005 E9000000 		jmp	_ZN9Fl_Input_4copyEi
 2647      00
 2648              	.LVL264:
 2649              		.cfi_endproc
 2650              	.LFE545:
 2652              		.section	.text.unlikely._ZN8Fl_Input7kf_copyEv
 2653              	.LCOLDE45:
 2654              		.section	.text._ZN8Fl_Input7kf_copyEv
 2655              	.LHOTE45:
 2656              		.section	.text.unlikely._ZN8Fl_Input8kf_pasteEv,"ax",@progbits
 2657              		.align 2
 2658              	.LCOLDB46:
 2659              		.section	.text._ZN8Fl_Input8kf_pasteEv,"ax",@progbits
 2660              	.LHOTB46:
 2661              		.align 2
 2662              		.p2align 4,,15
 2663              		.globl	_ZN8Fl_Input8kf_pasteEv
 2665              	_ZN8Fl_Input8kf_pasteEv:
 2666              	.LFB546:
 285:fltk-1.3.4-1/src/Fl_Input.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Input.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Input.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Input.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 2667              		.loc 2 288 0
 2668              		.cfi_startproc
 2669              	.LVL265:
 2670 0000 4883EC08 		subq	$8, %rsp
 2671              		.cfi_def_cfa_offset 16
 289:fltk-1.3.4-1/src/Fl_Input.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 2672              		.loc 2 289 0
 2673 0004 F6476C08 		testb	$8, 108(%rdi)
 2674 0008 7516     		jne	.L229
 290:fltk-1.3.4-1/src/Fl_Input.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2675              		.loc 2 290 0
 2676 000a BE010000 		movl	$1, %esi
 2676      00
 2677 000f E8000000 		call	_ZN2Fl5pasteER9Fl_Widgeti
 2677      00
 2678              	.LVL266:
 291:fltk-1.3.4-1/src/Fl_Input.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Input.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2679              		.loc 2 292 0
 2680 0014 B8010000 		movl	$1, %eax
 2680      00
 2681 0019 4883C408 		addq	$8, %rsp
 2682              		.cfi_remember_state
 2683              		.cfi_def_cfa_offset 8
 2684 001d C3       		ret
 2685              	.LVL267:
 2686 001e 6690     		.p2align 4,,10
 2687              		.p2align 3
 2688              	.L229:
 2689              		.cfi_restore_state
 289:fltk-1.3.4-1/src/Fl_Input.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2690              		.loc 2 289 0 discriminator 1
 2691 0020 31FF     		xorl	%edi, %edi
 2692              	.LVL268:
 2693 0022 E8000000 		call	_Z7fl_beepi
 2693      00
 2694              	.LVL269:
 2695              		.loc 2 292 0 discriminator 1
 2696 0027 B8010000 		movl	$1, %eax
 2696      00
 2697 002c 4883C408 		addq	$8, %rsp
 2698              		.cfi_def_cfa_offset 8
 2699 0030 C3       		ret
 2700              		.cfi_endproc
 2701              	.LFE546:
 2703              		.section	.text.unlikely._ZN8Fl_Input8kf_pasteEv
 2704              	.LCOLDE46:
 2705              		.section	.text._ZN8Fl_Input8kf_pasteEv
 2706              	.LHOTE46:
 2707              		.section	.text.unlikely._ZN8Fl_Input11kf_copy_cutEv,"ax",@progbits
 2708              		.align 2
 2709              	.LCOLDB47:
 2710              		.section	.text._ZN8Fl_Input11kf_copy_cutEv,"ax",@progbits
 2711              	.LHOTB47:
 2712              		.align 2
 2713              		.p2align 4,,15
 2714              		.globl	_ZN8Fl_Input11kf_copy_cutEv
 2716              	_ZN8Fl_Input11kf_copy_cutEv:
 2717              	.LFB547:
 293:fltk-1.3.4-1/src/Fl_Input.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Input.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Input.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2718              		.loc 2 295 0
 2719              		.cfi_startproc
 2720              	.LVL270:
 2721 0000 53       		pushq	%rbx
 2722              		.cfi_def_cfa_offset 16
 2723              		.cfi_offset 3, -16
 296:fltk-1.3.4-1/src/Fl_Input.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 2724              		.loc 2 296 0
 2725 0001 F6476C08 		testb	$8, 108(%rdi)
 2726 0005 7529     		jne	.L234
 2727 0007 4889FB   		movq	%rdi, %rbx
 2728              	.LVL271:
 2729              	.LBB825:
 2730              	.LBB826:
 297:fltk-1.3.4-1/src/Fl_Input.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2731              		.loc 2 297 0
 2732 000a BE010000 		movl	$1, %esi
 2732      00
 2733 000f E8000000 		call	_ZN9Fl_Input_4copyEi
 2733      00
 2734              	.LVL272:
 2735              	.LBB827:
 2736              	.LBB828:
 320:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 2737              		.loc 10 320 0
 2738 0014 8B939400 		movl	148(%rbx), %edx
 2738      0000
 2739 001a 8BB39000 		movl	144(%rbx), %esi
 2739      0000
 2740 0020 4889DF   		movq	%rbx, %rdi
 2741              	.LBE828:
 2742              	.LBE827:
 2743              	.LBE826:
 2744              	.LBE825:
 298:fltk-1.3.4-1/src/Fl_Input.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Input.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 2745              		.loc 2 299 0
 2746 0023 5B       		popq	%rbx
 2747              		.cfi_remember_state
 2748              		.cfi_def_cfa_offset 8
 2749              	.LVL273:
 2750              	.LBB832:
 2751              	.LBB831:
 2752              	.LBB830:
 2753              	.LBB829:
 320:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 2754              		.loc 10 320 0
 2755 0024 4531C0   		xorl	%r8d, %r8d
 2756 0027 31C9     		xorl	%ecx, %ecx
 2757 0029 E9000000 		jmp	_ZN9Fl_Input_7replaceEiiPKci
 2757      00
 2758              	.LVL274:
 2759 002e 6690     		.p2align 4,,10
 2760              		.p2align 3
 2761              	.L234:
 2762              		.cfi_restore_state
 2763              	.LBE829:
 2764              	.LBE830:
 2765              	.LBE831:
 2766              	.LBE832:
 296:fltk-1.3.4-1/src/Fl_Input.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2767              		.loc 2 296 0 discriminator 1
 2768 0030 31FF     		xorl	%edi, %edi
 2769              	.LVL275:
 2770 0032 E8000000 		call	_Z7fl_beepi
 2770      00
 2771              	.LVL276:
 2772              		.loc 2 299 0 discriminator 1
 2773 0037 B8010000 		movl	$1, %eax
 2773      00
 2774 003c 5B       		popq	%rbx
 2775              		.cfi_def_cfa_offset 8
 2776 003d C3       		ret
 2777              		.cfi_endproc
 2778              	.LFE547:
 2780              		.section	.text.unlikely._ZN8Fl_Input11kf_copy_cutEv
 2781              	.LCOLDE47:
 2782              		.section	.text._ZN8Fl_Input11kf_copy_cutEv
 2783              	.LHOTE47:
 2784              		.section	.rodata.str1.1,"aMS",@progbits,1
 2785              	.LC48:
 2786 0000 0A00     		.string	"\n"
 2787              		.section	.text.unlikely._ZN8Fl_Input10handle_keyEv,"ax",@progbits
 2788              		.align 2
 2789              	.LCOLDB49:
 2790              		.section	.text._ZN8Fl_Input10handle_keyEv,"ax",@progbits
 2791              	.LHOTB49:
 2792              		.align 2
 2793              		.p2align 4,,15
 2794              		.globl	_ZN8Fl_Input10handle_keyEv
 2796              	_ZN8Fl_Input10handle_keyEv:
 2797              	.LFB548:
 300:fltk-1.3.4-1/src/Fl_Input.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Input.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Input.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Input.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Input.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 2798              		.loc 2 304 0
 2799              		.cfi_startproc
 2800              	.LVL277:
 2801 0000 4154     		pushq	%r12
 2802              		.cfi_def_cfa_offset 16
 2803              		.cfi_offset 12, -16
 2804 0002 55       		pushq	%rbp
 2805              		.cfi_def_cfa_offset 24
 2806              		.cfi_offset 6, -24
 2807 0003 53       		pushq	%rbx
 2808              		.cfi_def_cfa_offset 32
 2809              		.cfi_offset 3, -32
 2810 0004 4889FB   		movq	%rdi, %rbx
 2811 0007 4883EC10 		subq	$16, %rsp
 2812              		.cfi_def_cfa_offset 48
 2813              		.loc 2 304 0
 2814 000b 64488B04 		movq	%fs:40, %rax
 2814      25280000 
 2814      00
 2815 0014 48894424 		movq	%rax, 8(%rsp)
 2815      08
 2816 0019 31C0     		xorl	%eax, %eax
 305:fltk-1.3.4-1/src/Fl_Input.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Input.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 2817              		.loc 2 306 0
 2818 001b 488B0500 		movq	_ZN2Fl6e_textE(%rip), %rax
 2818      000000
 2819              	.LBB833:
 307:fltk-1.3.4-1/src/Fl_Input.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Input.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Input.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 2820              		.loc 2 309 0
 2821 0022 488D7C24 		leaq	4(%rsp), %rdi
 2821      04
 2822              	.LVL278:
 2823              	.LBE833:
 306:fltk-1.3.4-1/src/Fl_Input.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2824              		.loc 2 306 0
 2825 0027 0FB600   		movzbl	(%rax), %eax
 2826 002a 88442403 		movb	%al, 3(%rsp)
 2827              	.LBB880:
 2828              		.loc 2 309 0
 2829 002e E8000000 		call	_ZN2Fl7composeERi
 2829      00
 2830              	.LVL279:
 2831 0033 85C0     		testl	%eax, %eax
 2832 0035 7479     		je	.L237
 2833              	.LVL280:
 2834 0037 0FB6536C 		movzbl	108(%rbx), %edx
 2835              	.LVL281:
 2836              	.LBB834:
 2837              	.LBB835:
 310:fltk-1.3.4-1/src/Fl_Input.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Input.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Input.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2838              		.loc 2 312 0
 2839 003b 89D0     		movl	%edx, %eax
 2840 003d 83E007   		andl	$7, %eax
 2841 0040 83E801   		subl	$1, %eax
 2842 0043 3C01     		cmpb	$1, %al
 2843 0045 0F861501 		jbe	.L446
 2843      0000
 2844              	.LBE835:
 313:fltk-1.3.4-1/src/Fl_Input.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Input.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Input.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Input.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Input.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Input.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Input.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Input.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Input.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Input.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Input.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Input.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Input.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Input.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Input.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Input.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Input.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Input.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Input.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Input.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Input.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Input.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Input.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Input.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Input.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Input.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Input.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Input.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Input.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Input.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Input.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Input.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Input.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Input.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Input.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Input.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Input.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Input.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Input.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Input.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Input.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Input.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Input.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Input.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 2845              		.loc 2 356 0
 2846 004b 8B442404 		movl	4(%rsp), %eax
 2847 004f 85C0     		testl	%eax, %eax
 2848 0051 0F850902 		jne	.L322
 2848      0000
 2849              	.LBB863:
 2850              	.LBB864:
 2851              		.file 11 "fltk-1.3.4-1/FL/Fl.H"
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
 2852              		.loc 11 797 0
 2853 0057 448B0500 		movl	_ZN2Fl8e_lengthE(%rip), %r8d
 2853      000000
 2854              	.LBE864:
 2855              	.LBE863:
 2856              		.loc 2 356 0
 2857 005e 4585C0   		testl	%r8d, %r8d
 2858 0061 0F847103 		je	.L435
 2858      0000
 2859              	.LVL282:
 357:fltk-1.3.4-1/src/Fl_Input.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2860              		.loc 2 357 0
 2861 0067 83E208   		andl	$8, %edx
 2862 006a 0F856103 		jne	.L290
 2862      0000
 2863              	.LBB865:
 2864              	.LBB866:
 790:fltk-1.3.4-1/FL/Fl.H ****   /**
 2865              		.loc 11 790 0
 2866 0070 488B0D00 		movq	_ZN2Fl6e_textE(%rip), %rcx
 2866      000000
 2867 0077 8B939400 		movl	148(%rbx), %edx
 2867      0000
 2868              	.LVL283:
 2869 007d 8BB39000 		movl	144(%rbx), %esi
 2869      0000
 2870              	.LVL284:
 2871              	.L330:
 2872              	.LBE866:
 2873              	.LBE865:
 358:fltk-1.3.4-1/src/Fl_Input.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Input.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2874              		.loc 2 359 0 discriminator 4
 2875 0083 4889DF   		movq	%rbx, %rdi
 2876 0086 E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 2876      00
 2877              	.LVL285:
 360:fltk-1.3.4-1/src/Fl_Input.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Input.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Input.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Input.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Input.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Input.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Input.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2878              		.loc 2 366 0 discriminator 4
 2879 008b B8010000 		movl	$1, %eax
 2879      00
 2880              	.LVL286:
 2881              		.p2align 4,,10
 2882              		.p2align 3
 2883              	.L261:
 2884              	.LBE834:
 2885              	.LBE880:
 367:fltk-1.3.4-1/src/Fl_Input.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Input.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Input.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Input.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Input.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Input.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Input.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Input.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Input.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Input.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Input.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Input.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Input.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Input.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Input.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Input.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Input.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Input.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Input.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Input.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Input.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Input.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Input.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Input.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Input.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Input.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Input.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Input.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Input.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Input.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Input.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Input.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Input.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Input.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Input.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Input.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Input.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Input.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Input.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Input.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Input.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Input.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Input.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Input.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Input.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Input.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Input.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Input.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Input.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Input.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Input.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Input.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Input.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Input.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Input.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Input.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Input.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Input.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Input.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Input.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Input.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Input.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Input.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Input.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Input.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Input.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Input.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Input.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Input.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Input.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Input.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Input.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Input.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Input.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Input.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Input.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Input.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Input.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Input.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Input.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Input.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Input.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Input.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Input.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Input.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Input.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Input.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Input.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Input.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Input.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Input.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Input.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Input.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Input.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Input.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Input.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Input.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Input.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Input.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Input.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Input.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Input.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Input.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Input.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Input.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Input.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Input.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Input.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Input.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Input.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Input.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Input.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Input.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Input.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Input.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Input.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Input.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Input.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Input.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Input.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Input.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Input.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Input.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Input.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Input.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Input.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Input.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Input.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Input.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Input.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Input.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Input.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Input.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Input.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Input.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Input.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Input.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Input.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Input.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Input.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Input.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Input.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Input.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Input.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Input.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Input.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Input.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Input.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Input.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_Input.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Input.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Input.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Input.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Input.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Input.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Input.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Input.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Input.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Input.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Input.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Input.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_Input.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Input.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_Input.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Input.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_Input.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_Input.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Input.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_Input.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Input.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Input.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Input.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Input.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_Input.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_Input.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Input.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/Fl_Input.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_Input.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Input.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Input.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_Input.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Input.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Input.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Input.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Input.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Input.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Input.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Input.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Input.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Input.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Input.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Input.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Input.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Input.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Input.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Input.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_Input.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Input.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 567:fltk-1.3.4-1/src/Fl_Input.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_Input.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/Fl_Input.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Input.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_Input.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Input.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Input.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 574:fltk-1.3.4-1/src/Fl_Input.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Input.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Input.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_Input.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Input.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_Input.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_Input.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Input.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_Input.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_Input.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_Input.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Input.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/Fl_Input.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_Input.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 2886              		.loc 2 587 0
 2887 0090 488B7424 		movq	8(%rsp), %rsi
 2887      08
 2888 0095 64483334 		xorq	%fs:40, %rsi
 2888      25280000 
 2888      00
 2889 009e 0F853C08 		jne	.L447
 2889      0000
 2890 00a4 4883C410 		addq	$16, %rsp
 2891              		.cfi_remember_state
 2892              		.cfi_def_cfa_offset 32
 2893 00a8 5B       		popq	%rbx
 2894              		.cfi_def_cfa_offset 24
 2895              	.LVL287:
 2896 00a9 5D       		popq	%rbp
 2897              		.cfi_def_cfa_offset 16
 2898 00aa 415C     		popq	%r12
 2899              		.cfi_def_cfa_offset 8
 2900 00ac C3       		ret
 2901              	.LVL288:
 2902 00ad 0F1F00   		.p2align 4,,10
 2903              		.p2align 3
 2904              	.L237:
 2905              		.cfi_restore_state
 2906 00b0 0FB6736C 		movzbl	108(%rbx), %esi
 2907              	.LBB881:
 2908              	.LBB882:
 702:fltk-1.3.4-1/FL/Fl.H **** 
 2909              		.loc 11 702 0
 2910 00b4 8B3D0000 		movl	_ZN2Fl7e_stateE(%rip), %edi
 2910      0000
 2911              	.LBE882:
 2912              	.LBE881:
 2913              	.LBB883:
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 2914              		.loc 2 384 0
 2915 00ba 8B0D0000 		movl	_ZN2Fl8e_keysymE(%rip), %ecx
 2915      0000
 2916              	.LBE883:
 369:fltk-1.3.4-1/src/Fl_Input.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 2917              		.loc 2 369 0
 2918 00c0 89FA     		movl	%edi, %edx
 370:fltk-1.3.4-1/src/Fl_Input.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 2919              		.loc 2 370 0
 2920 00c2 4189F9   		movl	%edi, %r9d
 2921 00c5 4189F0   		movl	%esi, %r8d
 369:fltk-1.3.4-1/src/Fl_Input.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 2922              		.loc 2 369 0
 2923 00c8 81E20000 		andl	$4980736, %edx
 2923      4C00
 2924              	.LVL289:
 370:fltk-1.3.4-1/src/Fl_Input.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 2925              		.loc 2 370 0
 2926 00ce 4181E100 		andl	$65536, %r9d
 2926      000100
 2927              	.LVL290:
 2928 00d5 4183E007 		andl	$7, %r8d
 2929              	.LVL291:
 2930              	.LBB915:
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 2931              		.loc 2 384 0
 2932 00d9 81F951FF 		cmpl	$65361, %ecx
 2932      0000
 2933 00df 0F84F303 		je	.L264
 2933      0000
 2934 00e5 0F8F0501 		jg	.L265
 2934      0000
 2935 00eb 83F97A   		cmpl	$122, %ecx
 2936 00ee 0F84AC04 		je	.L266
 2936      0000
 2937 00f4 0F8F9601 		jg	.L267
 2937      0000
 2938 00fa 83F963   		cmpl	$99, %ecx
 2939 00fd 0F84D504 		je	.L268
 2939      0000
 2940 0103 0F8E3F04 		jle	.L448
 2940      0000
 2941 0109 83F976   		cmpl	$118, %ecx
 2942 010c 0F84A603 		je	.L271
 2942      0000
 2943 0112 83F978   		cmpl	$120, %ecx
 2944 0115 7511     		jne	.L263
 2945              	.LBB884:
 564:fltk-1.3.4-1/src/Fl_Input.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 2946              		.loc 2 564 0
 2947 0117 81FA0000 		cmpl	$262144, %edx
 2947      0400
 2948 011d 0F846707 		je	.L316
 2948      0000
 2949              	.LVL292:
 2950              		.p2align 4,,10
 2951 0123 0F1F4400 		.p2align 3
 2951      00
 2952              	.L263:
 2953 0128 0FB64C24 		movzbl	3(%rsp), %ecx
 2953      03
 2954 012d 80F90D   		cmpb	$13, %cl
 2955 0130 0F875AFF 		ja	.L261
 2955      FFFF
 2956 0136 BA010000 		movl	$1, %edx
 2956      00
 2957 013b 48D3E2   		salq	%cl, %rdx
 2958 013e F6C636   		testb	$54, %dh
 2959 0141 0F85C103 		jne	.L318
 2959      0000
 2960 0147 80E601   		andb	$1, %dh
 2961 014a 0F8440FF 		je	.L261
 2961      FFFF
 2962              	.L436:
 2963              	.LBE884:
 2964              	.LBE915:
 574:fltk-1.3.4-1/src/Fl_Input.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 2965              		.loc 2 574 0
 2966 0150 4889DF   		movq	%rbx, %rdi
 2967 0153 E8000000 		call	_ZN8Fl_Input19kf_delete_char_leftEv
 2967      00
 2968              	.LVL293:
 2969 0158 E933FFFF 		jmp	.L261
 2969      FF
 2970 015d 0F1F00   		.p2align 4,,10
 2971              		.p2align 3
 2972              	.L446:
 2973              	.LBB916:
 2974              	.LBB875:
 2975              	.LBB868:
 2976              	.LBB836:
 313:fltk-1.3.4-1/src/Fl_Input.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 2977              		.loc 2 313 0
 2978 0160 E8000000 		call	_ZN2Fl13compose_resetEv
 2978      00
 2979              	.LVL294:
 2980              	.LBB837:
 317:fltk-1.3.4-1/src/Fl_Input.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 2981              		.loc 2 317 0
 2982 0165 48833D00 		cmpq	$0, _ZL14legal_fp_chars(%rip)
 2982      00000000 
 2983 016d 0F849505 		je	.L449
 2983      0000
 2984              	.L248:
 2985 0173 8B839000 		movl	144(%rbx), %eax
 2985      0000
 2986              	.LVL295:
 2987 0179 8B939400 		movl	148(%rbx), %edx
 2987      0000
 2988              	.LVL296:
 2989 017f 39D0     		cmpl	%edx, %eax
 2990 0181 0F4FC2   		cmovg	%edx, %eax
 2991              	.LVL297:
 2992              	.LBE837:
 348:fltk-1.3.4-1/src/Fl_Input.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 2993              		.loc 2 348 0
 2994 0184 85C0     		testl	%eax, %eax
 2995 0186 0F85CC01 		jne	.L249
 2995      0000
 343:fltk-1.3.4-1/src/Fl_Input.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 2996              		.loc 2 343 0
 2997 018c 0FB64424 		movzbl	3(%rsp), %eax
 2997      03
 2998              	.LVL298:
 2999 0191 8D50D5   		leal	-43(%rax), %edx
 3000              	.LVL299:
 3001 0194 81E2FD00 		andl	$253, %edx
 3001      0000
 3002 019a 0F842802 		je	.L250
 3002      0000
 344:fltk-1.3.4-1/src/Fl_Input.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3003              		.loc 2 344 0
 3004 01a0 83E830   		subl	$48, %eax
 3005 01a3 3C09     		cmpb	$9, %al
 3006 01a5 0F861D02 		jbe	.L250
 3006      0000
 3007              	.LVL300:
 3008              	.L256:
 3009 01ab 0FB66B6C 		movzbl	108(%rbx), %ebp
 3010              	.LVL301:
 348:fltk-1.3.4-1/src/Fl_Input.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 3011              		.loc 2 348 0
 3012 01af 89E8     		movl	%ebp, %eax
 3013 01b1 83E007   		andl	$7, %eax
 3014 01b4 3C01     		cmpb	$1, %al
 3015 01b6 0F851C02 		jne	.L435
 3015      0000
 348:fltk-1.3.4-1/src/Fl_Input.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 3016              		.loc 2 348 0 is_stmt 0 discriminator 1
 3017 01bc 0FB64424 		movzbl	3(%rsp), %eax
 3017      03
 3018 01c1 84C0     		testb	%al, %al
 3019 01c3 0F840F02 		je	.L435
 3019      0000
 3020              	.LVL302:
 3021              	.LBB856:
 3022              	.LBB857:
 3023              		.file 12 "/usr/include/string.h"
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
 3024              		.loc 12 226 0 is_stmt 1 discriminator 3
 3025 01c9 488B3D00 		movq	_ZL14legal_fp_chars(%rip), %rdi
 3025      000000
 3026 01d0 0FBEF0   		movsbl	%al, %esi
 3027              	.LVL303:
 3028 01d3 E8000000 		call	strchr
 3028      00
 3029              	.LVL304:
 3030              	.LBE857:
 3031              	.LBE856:
 348:fltk-1.3.4-1/src/Fl_Input.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 3032              		.loc 2 348 0 discriminator 3
 3033 01d8 4885C0   		testq	%rax, %rax
 3034 01db 0F85EB01 		jne	.L257
 3034      0000
 3035 01e1 E9F20100 		jmp	.L435
 3035      00
 3036              	.LVL305:
 3037 01e6 662E0F1F 		.p2align 4,,10
 3037      84000000 
 3037      0000
 3038              		.p2align 3
 3039              	.L265:
 3040              	.LBE836:
 3041              	.LBE868:
 3042              	.LBE875:
 3043              	.LBE916:
 3044              	.LBB917:
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 3045              		.loc 2 384 0
 3046 01f0 81F956FF 		cmpl	$65366, %ecx
 3046      0000
 3047 01f6 0F847403 		je	.L278
 3047      0000
 3048 01fc 0F8FE600 		jg	.L279
 3048      0000
 3049 0202 81F953FF 		cmpl	$65363, %ecx
 3049      0000
 3050 0208 0F848A04 		je	.L280
 3050      0000
 3051 020e 0F8CB404 		jl	.L281
 3051      0000
 3052 0214 81F954FF 		cmpl	$65364, %ecx
 3052      0000
 3053 021a 0F847002 		je	.L282
 3053      0000
 3054 0220 81F955FF 		cmpl	$65365, %ecx
 3054      0000
 3055 0226 0F85FCFE 		jne	.L263
 3055      FFFF
 3056              	.LBB908:
 476:fltk-1.3.4-1/src/Fl_Input.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 3057              		.loc 2 476 0
 3058 022c 81E70000 		andl	$4718592, %edi
 3058      4800
 3059 0232 740C     		je	.L303
 478:fltk-1.3.4-1/src/Fl_Input.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 3060              		.loc 2 478 0
 3061 0234 81FA0000 		cmpl	$524288, %edx
 3061      0800
 3062 023a 0F8550FE 		jne	.L261
 3062      FFFF
 3063              	.L303:
 3064              	.LVL306:
 3065              	.LBB885:
 3066              	.LBB886:
 129:fltk-1.3.4-1/src/Fl_Input.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 3067              		.loc 2 129 0
 3068 0240 4889DF   		movq	%rbx, %rdi
 3069 0243 E8000000 		call	_ZN9Fl_Input_12linesPerPageEv
 3069      00
 3070              	.LVL307:
 3071 0248 4889DF   		movq	%rbx, %rdi
 3072 024b 89C6     		movl	%eax, %esi
 3073 024d E8000000 		call	_ZN8Fl_Input11kf_lines_upEi
 3073      00
 3074              	.LVL308:
 3075              	.LBE886:
 3076              	.LBE885:
 476:fltk-1.3.4-1/src/Fl_Input.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 3077              		.loc 2 476 0
 3078 0252 E939FEFF 		jmp	.L261
 3078      FF
 3079 0257 660F1F84 		.p2align 4,,10
 3079      00000000 
 3079      00
 3080              		.p2align 3
 3081              	.L322:
 3082              	.LVL309:
 3083              	.LBE908:
 3084              	.LBE917:
 3085              	.LBB918:
 3086              	.LBB876:
 357:fltk-1.3.4-1/src/Fl_Input.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 3087              		.loc 2 357 0
 3088 0260 83E208   		andl	$8, %edx
 3089 0263 0F856801 		jne	.L290
 3089      0000
 3090 0269 8BB39000 		movl	144(%rbx), %esi
 3090      0000
 3091              	.LBB869:
 3092              	.LBB870:
 3093              		.loc 11 797 0
 3094 026f 448B0500 		movl	_ZN2Fl8e_lengthE(%rip), %r8d
 3094      000000
 3095              	.LBE870:
 3096              	.LBE869:
 3097              	.LBB871:
 3098              	.LBB867:
 790:fltk-1.3.4-1/FL/Fl.H ****   /**
 3099              		.loc 11 790 0
 3100 0276 488B0D00 		movq	_ZN2Fl6e_textE(%rip), %rcx
 3100      000000
 3101              	.LVL310:
 3102              	.LBE867:
 3103              	.LBE871:
 358:fltk-1.3.4-1/src/Fl_Input.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3104              		.loc 2 358 0
 3105 027d 89F2     		movl	%esi, %edx
 3106 027f 29C2     		subl	%eax, %edx
 3107 0281 E9FDFDFF 		jmp	.L330
 3107      FF
 3108              	.LVL311:
 3109 0286 662E0F1F 		.p2align 4,,10
 3109      84000000 
 3109      0000
 3110              		.p2align 3
 3111              	.L267:
 3112              	.LBE876:
 3113              	.LBE918:
 3114              	.LBB919:
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 3115              		.loc 2 384 0
 3116 0290 81F909FF 		cmpl	$65289, %ecx
 3116      0000
 3117 0296 0F848C03 		je	.L273
 3117      0000
 3118 029c 0F8EBE01 		jle	.L450
 3118      0000
 3119 02a2 81F90DFF 		cmpl	$65293, %ecx
 3119      0000
 3120 02a8 0F84A203 		je	.L276
 3120      0000
 3121 02ae 81F950FF 		cmpl	$65360, %ecx
 3121      0000
 3122 02b4 0F856EFE 		jne	.L263
 3122      FFFF
 3123              	.LBB909:
 503:fltk-1.3.4-1/src/Fl_Input.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 3124              		.loc 2 503 0
 3125 02ba 85D2     		testl	%edx, %edx
 3126 02bc 0F845B05 		je	.L451
 3126      0000
 504:fltk-1.3.4-1/src/Fl_Input.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3127              		.loc 2 504 0
 3128 02c2 81FA0000 		cmpl	$262144, %edx
 3128      0400
 3129 02c8 0F85C2FD 		jne	.L261
 3129      FFFF
 3130              	.LVL312:
 3131              	.LBB887:
 3132              	.LBB888:
 3133              	.LBB889:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 3134              		.loc 2 56 0
 3135 02ce 89FA     		movl	%edi, %edx
 3136              	.LVL313:
 3137 02d0 81E20000 		andl	$65536, %edx
 3137      0100
 3138 02d6 7406     		je	.L433
 3139 02d8 8B939400 		movl	148(%rbx), %edx
 3139      0000
 3140              	.LVL314:
 3141              	.L433:
 3142              	.LBE889:
 3143              	.LBE888:
 3144              	.LBE887:
 3145              	.LBB890:
 3146              	.LBB891:
 266:fltk-1.3.4-1/src/Fl_Input.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 3147              		.loc 2 266 0
 3148 02de 31F6     		xorl	%esi, %esi
 3149 02e0 E9690100 		jmp	.L434
 3149      00
 3150              	.LVL315:
 3151              		.p2align 4,,10
 3152 02e5 0F1F00   		.p2align 3
 3153              	.L279:
 3154              	.LBE891:
 3155              	.LBE890:
 3156              	.LBE909:
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 3157              		.loc 2 384 0
 3158 02e8 81F963FF 		cmpl	$65379, %ecx
 3158      0000
 3159 02ee 0F840C03 		je	.L284
 3159      0000
 3160 02f4 0F8E1E01 		jle	.L452
 3160      0000
 3161 02fa 81F98DFF 		cmpl	$65421, %ecx
 3161      0000
 3162 0300 0F844A03 		je	.L276
 3162      0000
 3163 0306 81F9FFFF 		cmpl	$65535, %ecx
 3163      0000
 3164 030c 0F8516FE 		jne	.L263
 3164      FFFF
 3165              	.LVL316:
 3166              	.LBB910:
 3167              	.LBB894:
 402:fltk-1.3.4-1/src/Fl_Input.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 3168              		.loc 2 402 0
 3169 0312 8BB39400 		movl	148(%rbx), %esi
 3169      0000
 3170 0318 39B39000 		cmpl	%esi, 144(%rbx)
 3170      0000
 3171 031e 0F84DB04 		je	.L453
 3171      0000
 3172              	.LVL317:
 403:fltk-1.3.4-1/src/Fl_Input.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 3173              		.loc 2 403 0
 3174 0324 85D2     		testl	%edx, %edx
 3175 0326 7509     		jne	.L328
 3176 0328 4585C9   		testl	%r9d, %r9d
 3177 032b 0F855905 		jne	.L316
 3177      0000
 3178              	.LVL318:
 3179              	.L328:
 407:fltk-1.3.4-1/src/Fl_Input.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3180              		.loc 2 407 0
 3181 0331 85D2     		testl	%edx, %edx
 3182 0333 0F84D704 		je	.L293
 3182      0000
 408:fltk-1.3.4-1/src/Fl_Input.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 3183              		.loc 2 408 0
 3184 0339 81FA0000 		cmpl	$262144, %edx
 3184      0400
 3185 033f 0F854BFD 		jne	.L261
 3185      FFFF
 408:fltk-1.3.4-1/src/Fl_Input.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 3186              		.loc 2 408 0 is_stmt 0 discriminator 1
 3187 0345 4889DF   		movq	%rbx, %rdi
 3188 0348 E8000000 		call	_ZN8Fl_Input20kf_delete_word_rightEv
 3188      00
 3189              	.LVL319:
 3190 034d E93EFDFF 		jmp	.L261
 3190      FF
 3191              	.LVL320:
 3192              		.p2align 4,,10
 3193 0352 660F1F44 		.p2align 3
 3193      0000
 3194              	.L249:
 3195              	.LBE894:
 3196              	.LBE910:
 3197              	.LBE919:
 3198              	.LBB920:
 3199              	.LBB877:
 3200              	.LBB872:
 3201              	.LBB860:
 344:fltk-1.3.4-1/src/Fl_Input.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3202              		.loc 2 344 0 is_stmt 1
 3203 0358 0FB67424 		movzbl	3(%rsp), %esi
 3203      03
 3204 035d 8D56D0   		leal	-48(%rsi), %edx
 3205 0360 80FA09   		cmpb	$9, %dl
 3206 0363 7663     		jbe	.L250
 345:fltk-1.3.4-1/src/Fl_Input.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 3207              		.loc 2 345 0
 3208 0365 83F801   		cmpl	$1, %eax
 3209 0368 0F846904 		je	.L454
 3209      0000
 346:fltk-1.3.4-1/src/Fl_Input.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 3210              		.loc 2 346 0
 3211 036e 0F8E37FE 		jle	.L256
 3211      FFFF
 346:fltk-1.3.4-1/src/Fl_Input.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 3212              		.loc 2 346 0 is_stmt 0 discriminator 1
 3213 0374 31F6     		xorl	%esi, %esi
 3214 0376 4889DF   		movq	%rbx, %rdi
 3215 0379 E8000000 		call	_ZNK9Fl_Input_5indexEi
 3215      00
 3216              	.LVL321:
 3217 037e 83F830   		cmpl	$48, %eax
 3218 0381 0F8524FE 		jne	.L256
 3218      FFFF
 346:fltk-1.3.4-1/src/Fl_Input.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 3219              		.loc 2 346 0 discriminator 2
 3220 0387 BE010000 		movl	$1, %esi
 3220      00
 3221 038c 4889DF   		movq	%rbx, %rdi
 3222 038f E8000000 		call	_ZNK9Fl_Input_5indexEi
 3222      00
 3223              	.LVL322:
 3224 0394 83F878   		cmpl	$120, %eax
 3225 0397 7416     		je	.L260
 346:fltk-1.3.4-1/src/Fl_Input.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 3226              		.loc 2 346 0 discriminator 3
 3227 0399 BE010000 		movl	$1, %esi
 3227      00
 3228 039e 4889DF   		movq	%rbx, %rdi
 3229 03a1 E8000000 		call	_ZNK9Fl_Input_5indexEi
 3229      00
 3230              	.LVL323:
 3231 03a6 83F858   		cmpl	$88, %eax
 3232 03a9 0F85FCFD 		jne	.L256
 3232      FFFF
 3233              	.L260:
 347:fltk-1.3.4-1/src/Fl_Input.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3234              		.loc 2 347 0 is_stmt 1
 3235 03af 0FB64424 		movzbl	3(%rsp), %eax
 3235      03
 3236 03b4 83E0DF   		andl	$-33, %eax
 3237 03b7 83E841   		subl	$65, %eax
 3238 03ba 3C05     		cmpb	$5, %al
 3239 03bc 0F87E9FD 		ja	.L256
 3239      FFFF
 3240              		.p2align 4,,10
 3241 03c2 660F1F44 		.p2align 3
 3241      0000
 3242              	.L250:
 3243 03c8 0FB66B6C 		movzbl	108(%rbx), %ebp
 3244              	.LVL324:
 3245              	.L257:
 350:fltk-1.3.4-1/src/Fl_Input.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 3246              		.loc 2 350 0
 3247 03cc 83E508   		andl	$8, %ebp
 3248 03cf 7417     		je	.L455
 3249              	.LVL325:
 3250              	.L290:
 350:fltk-1.3.4-1/src/Fl_Input.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 3251              		.loc 2 350 0 is_stmt 0 discriminator 1
 3252 03d1 31FF     		xorl	%edi, %edi
 3253 03d3 E8000000 		call	_Z7fl_beepi
 3253      00
 3254              	.LVL326:
 3255              	.L435:
 353:fltk-1.3.4-1/src/Fl_Input.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3256              		.loc 2 353 0 is_stmt 1 discriminator 1
 3257 03d8 B8010000 		movl	$1, %eax
 3257      00
 3258 03dd E9AEFCFF 		jmp	.L261
 3258      FF
 3259              	.LVL327:
 3260              		.p2align 4,,10
 3261 03e2 660F1F44 		.p2align 3
 3261      0000
 3262              	.L455:
 351:fltk-1.3.4-1/src/Fl_Input.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3263              		.loc 2 351 0
 3264 03e8 8B939400 		movl	148(%rbx), %edx
 3264      0000
 3265 03ee 8BB39000 		movl	144(%rbx), %esi
 3265      0000
 3266 03f4 488D4C24 		leaq	3(%rsp), %rcx
 3266      03
 3267 03f9 41B80100 		movl	$1, %r8d
 3267      0000
 3268 03ff 4889DF   		movq	%rbx, %rdi
 3269 0402 E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 3269      00
 3270              	.LVL328:
 353:fltk-1.3.4-1/src/Fl_Input.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3271              		.loc 2 353 0
 3272 0407 B8010000 		movl	$1, %eax
 3272      00
 3273 040c E97FFCFF 		jmp	.L261
 3273      FF
 3274              	.LVL329:
 3275              		.p2align 4,,10
 3276 0411 0F1F8000 		.p2align 3
 3276      000000
 3277              	.L452:
 3278              	.LBE860:
 3279              	.LBE872:
 3280              	.LBE877:
 3281              	.LBE920:
 3282              	.LBB921:
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 3283              		.loc 2 384 0
 3284 0418 81F957FF 		cmpl	$65367, %ecx
 3284      0000
 3285 041e 0F8504FD 		jne	.L263
 3285      FFFF
 3286              	.LBB911:
 514:fltk-1.3.4-1/src/Fl_Input.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 3287              		.loc 2 514 0
 3288 0424 85D2     		testl	%edx, %edx
 3289 0426 0F841D04 		je	.L456
 3289      0000
 515:fltk-1.3.4-1/src/Fl_Input.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 3290              		.loc 2 515 0
 3291 042c 81FA0000 		cmpl	$262144, %edx
 3291      0400
 3292 0432 0F8558FC 		jne	.L261
 3292      FFFF
 3293              	.LVL330:
 3294 0438 8BB38800 		movl	136(%rbx), %esi
 3294      0000
 3295              	.LVL331:
 3296              	.LBB895:
 3297              	.LBB896:
 3298              	.LBB897:
  56:fltk-1.3.4-1/src/Fl_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 3299              		.loc 2 56 0
 3300 043e 81E70000 		andl	$65536, %edi
 3300      0100
 3301 0444 89F2     		movl	%esi, %edx
 3302              	.LVL332:
 3303 0446 7406     		je	.L434
 3304 0448 8B939400 		movl	148(%rbx), %edx
 3304      0000
 3305              	.LVL333:
 3306              	.L434:
 3307              	.LBE897:
 3308              	.LBE896:
 3309              	.LBE895:
 3310              	.LBB898:
 3311              	.LBB892:
 266:fltk-1.3.4-1/src/Fl_Input.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 3312              		.loc 2 266 0
 3313 044e 4889DF   		movq	%rbx, %rdi
 3314 0451 E8000000 		call	_ZN9Fl_Input_8positionEii
 3314      00
 3315              	.LVL334:
 3316              	.LBE892:
 3317              	.LBE898:
 555:fltk-1.3.4-1/src/Fl_Input.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3318              		.loc 2 555 0
 3319 0456 B8010000 		movl	$1, %eax
 3319      00
 3320 045b E930FCFF 		jmp	.L261
 3320      FF
 3321              	.LVL335:
 3322              		.p2align 4,,10
 3323              		.p2align 3
 3324              	.L450:
 3325              	.LBE911:
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 3326              		.loc 2 384 0
 3327 0460 81F908FF 		cmpl	$65288, %ecx
 3327      0000
 3328 0466 0F85BCFC 		jne	.L263
 3328      FFFF
 3329              	.LBB912:
 527:fltk-1.3.4-1/src/Fl_Input.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 3330              		.loc 2 527 0
 3331 046c 85D2     		testl	%edx, %edx
 3332 046e 0F84DCFC 		je	.L436
 3332      FFFF
 528:fltk-1.3.4-1/src/Fl_Input.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 3333              		.loc 2 528 0
 3334 0474 81FA0000 		cmpl	$262144, %edx
 3334      0400
 3335 047a 0F8510FC 		jne	.L261
 3335      FFFF
 528:fltk-1.3.4-1/src/Fl_Input.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 3336              		.loc 2 528 0 is_stmt 0 discriminator 1
 3337 0480 4889DF   		movq	%rbx, %rdi
 3338 0483 E8000000 		call	_ZN8Fl_Input19kf_delete_word_leftEv
 3338      00
 3339              	.LVL336:
 3340 0488 E903FCFF 		jmp	.L261
 3340      FF
 3341              	.LVL337:
 3342 048d 0F1F00   		.p2align 4,,10
 3343              		.p2align 3
 3344              	.L282:
 462:fltk-1.3.4-1/src/Fl_Input.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3345              		.loc 2 462 0 is_stmt 1
 3346 0490 85D2     		testl	%edx, %edx
 3347 0492 0F849F03 		je	.L457
 3347      0000
 463:fltk-1.3.4-1/src/Fl_Input.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 3348              		.loc 2 463 0
 3349 0498 81FA0000 		cmpl	$262144, %edx
 3349      0400
 3350 049e 0F85ECFB 		jne	.L261
 3350      FFFF
 463:fltk-1.3.4-1/src/Fl_Input.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 3351              		.loc 2 463 0 is_stmt 0 discriminator 1
 3352 04a4 4889DF   		movq	%rbx, %rdi
 3353 04a7 E8000000 		call	_ZN8Fl_Input20kf_move_down_and_eolEv
 3353      00
 3354              	.LVL338:
 3355 04ac E9DFFBFF 		jmp	.L261
 3355      FF
 3356              	.LVL339:
 3357              		.p2align 4,,10
 3358 04b1 0F1F8000 		.p2align 3
 3358      000000
 3359              	.L271:
 561:fltk-1.3.4-1/src/Fl_Input.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3360              		.loc 2 561 0 is_stmt 1
 3361 04b8 81FA0000 		cmpl	$262144, %edx
 3361      0400
 3362 04be 0F8564FC 		jne	.L263
 3362      FFFF
 3363              	.L315:
 390:fltk-1.3.4-1/src/Fl_Input.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 3364              		.loc 2 390 0 discriminator 1
 3365 04c4 4889DF   		movq	%rbx, %rdi
 3366 04c7 E8000000 		call	_ZN8Fl_Input8kf_pasteEv
 3366      00
 3367              	.LVL340:
 3368 04cc E9BFFBFF 		jmp	.L261
 3368      FF
 3369              	.LVL341:
 3370              		.p2align 4,,10
 3371 04d1 0F1F8000 		.p2align 3
 3371      000000
 3372              	.L264:
 421:fltk-1.3.4-1/src/Fl_Input.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3373              		.loc 2 421 0
 3374 04d8 85D2     		testl	%edx, %edx
 3375 04da 7418     		je	.L296
 422:fltk-1.3.4-1/src/Fl_Input.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 3376              		.loc 2 422 0
 3377 04dc 81FA0000 		cmpl	$262144, %edx
 3377      0400
 3378 04e2 0F84BC03 		je	.L458
 3378      0000
 423:fltk-1.3.4-1/src/Fl_Input.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3379              		.loc 2 423 0
 3380 04e8 81FA0000 		cmpl	$4194304, %edx
 3380      4000
 3381 04ee 0F859CFB 		jne	.L261
 3381      FFFF
 3382              	.L296:
 421:fltk-1.3.4-1/src/Fl_Input.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3383              		.loc 2 421 0 discriminator 1
 3384 04f4 4889DF   		movq	%rbx, %rdi
 3385 04f7 E8000000 		call	_ZN8Fl_Input17kf_move_char_leftEv
 3385      00
 3386              	.LVL342:
 3387 04fc E98FFBFF 		jmp	.L261
 3387      FF
 3388              	.LVL343:
 3389              		.p2align 4,,10
 3390 0501 0F1F8000 		.p2align 3
 3390      000000
 3391              	.L318:
 3392              	.LBE912:
 3393              	.LBE921:
 579:fltk-1.3.4-1/src/Fl_Input.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 3394              		.loc 2 579 0
 3395 0508 83E608   		andl	$8, %esi
 3396 050b 0F85C0FE 		jne	.L290
 3396      FFFF
 581:fltk-1.3.4-1/src/Fl_Input.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 3397              		.loc 2 581 0 discriminator 1
 3398 0511 4183E801 		subl	$1, %r8d
 3399              	.LVL344:
 3400 0515 4180F801 		cmpb	$1, %r8b
 3401 0519 0F8671FB 		jbe	.L261
 3401      FFFF
 3402              	.LVL345:
 582:fltk-1.3.4-1/src/Fl_Input.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 3403              		.loc 2 582 0
 3404 051f 8B939400 		movl	148(%rbx), %edx
 3404      0000
 3405 0525 8BB39000 		movl	144(%rbx), %esi
 3405      0000
 3406 052b 488D4C24 		leaq	3(%rsp), %rcx
 3406      03
 3407 0530 41B80100 		movl	$1, %r8d
 3407      0000
 3408              	.LVL346:
 3409 0536 4889DF   		movq	%rbx, %rdi
 3410 0539 E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 3410      00
 3411              	.LVL347:
 3412 053e E94DFBFF 		jmp	.L261
 3412      FF
 3413              	.LVL348:
 3414              		.p2align 4,,10
 3415 0543 0F1F4400 		.p2align 3
 3415      00
 3416              	.L448:
 3417              	.LBB922:
 384:fltk-1.3.4-1/src/Fl_Input.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 3418              		.loc 2 384 0
 3419 0548 83F961   		cmpl	$97, %ecx
 3420 054b 0F85D7FB 		jne	.L263
 3420      FFFF
 3421              	.LBB913:
 555:fltk-1.3.4-1/src/Fl_Input.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3422              		.loc 2 555 0
 3423 0551 81FA0000 		cmpl	$262144, %edx
 3423      0400
 3424 0557 0F85CBFB 		jne	.L263
 3424      FFFF
 3425              	.LVL349:
 3426              	.LBB899:
 3427              	.LBB893:
 266:fltk-1.3.4-1/src/Fl_Input.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 3428              		.loc 2 266 0
 3429 055d 8B938800 		movl	136(%rbx), %edx
 3429      0000
 3430              	.LVL350:
 3431 0563 31F6     		xorl	%esi, %esi
 3432 0565 E9E4FEFF 		jmp	.L434
 3432      FF
 3433              	.LVL351:
 3434 056a 660F1F44 		.p2align 4,,10
 3434      0000
 3435              		.p2align 3
 3436              	.L278:
 3437              	.LBE893:
 3438              	.LBE899:
 491:fltk-1.3.4-1/src/Fl_Input.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 3439              		.loc 2 491 0
 3440 0570 81E70000 		andl	$4718592, %edi
 3440      4800
 3441 0576 740C     		je	.L305
 493:fltk-1.3.4-1/src/Fl_Input.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3442              		.loc 2 493 0
 3443 0578 81FA0000 		cmpl	$524288, %edx
 3443      0800
 3444 057e 0F850CFB 		jne	.L261
 3444      FFFF
 3445              	.L305:
 3446              	.LVL352:
 3447              	.LBB900:
 3448              	.LBB901:
 134:fltk-1.3.4-1/src/Fl_Input.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3449              		.loc 2 134 0
 3450 0584 4889DF   		movq	%rbx, %rdi
 3451 0587 E8000000 		call	_ZN9Fl_Input_12linesPerPageEv
 3451      00
 3452              	.LVL353:
 3453 058c 4889DF   		movq	%rbx, %rdi
 3454 058f 89C6     		movl	%eax, %esi
 3455 0591 E8000000 		call	_ZN8Fl_Input13kf_lines_downEi
 3455      00
 3456              	.LVL354:
 3457              	.LBE901:
 3458              	.LBE900:
 491:fltk-1.3.4-1/src/Fl_Input.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 3459              		.loc 2 491 0
 3460 0596 E9F5FAFF 		jmp	.L261
 3460      FF
 3461              	.LVL355:
 3462 059b 0F1F4400 		.p2align 4,,10
 3462      00
 3463              		.p2align 3
 3464              	.L266:
 567:fltk-1.3.4-1/src/Fl_Input.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3465              		.loc 2 567 0
 3466 05a0 81FA0000 		cmpl	$262144, %edx
 3466      0400
 3467 05a6 0F94C2   		sete	%dl
 3468              	.LVL356:
 3469 05a9 4585C9   		testl	%r9d, %r9d
 3470 05ac 7508     		jne	.L317
 3471 05ae 84D2     		testb	%dl, %dl
 3472 05b0 0F857402 		jne	.L459
 3472      0000
 3473              	.L317:
 568:fltk-1.3.4-1/src/Fl_Input.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 3474              		.loc 2 568 0
 3475 05b6 4585C9   		testl	%r9d, %r9d
 3476 05b9 0F8469FB 		je	.L263
 3476      FFFF
 3477 05bf 84D2     		testb	%dl, %dl
 3478 05c1 0F8461FB 		je	.L263
 3478      FFFF
 568:fltk-1.3.4-1/src/Fl_Input.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 3479              		.loc 2 568 0 is_stmt 0 discriminator 1
 3480 05c7 4889DF   		movq	%rbx, %rdi
 3481              	.LVL357:
 3482 05ca E8000000 		call	_ZN8Fl_Input7kf_redoEv
 3482      00
 3483              	.LVL358:
 3484 05cf E9BCFAFF 		jmp	.L261
 3484      FF
 3485              	.LVL359:
 3486              		.p2align 4,,10
 3487 05d4 0F1F4000 		.p2align 3
 3488              	.L268:
 558:fltk-1.3.4-1/src/Fl_Input.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 3489              		.loc 2 558 0 is_stmt 1
 3490 05d8 81FA0000 		cmpl	$262144, %edx
 3490      0400
 3491 05de 0F8544FB 		jne	.L263
 3491      FFFF
 3492              	.L314:
 3493              	.LVL360:
 3494              	.LBB902:
 3495              	.LBB903:
 284:fltk-1.3.4-1/src/Fl_Input.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 3496              		.loc 2 284 0
 3497 05e4 BE010000 		movl	$1, %esi
 3497      00
 3498 05e9 4889DF   		movq	%rbx, %rdi
 3499 05ec E8000000 		call	_ZN9Fl_Input_4copyEi
 3499      00
 3500              	.LVL361:
 3501              	.LBE903:
 3502              	.LBE902:
 392:fltk-1.3.4-1/src/Fl_Input.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 3503              		.loc 2 392 0
 3504 05f1 E99AFAFF 		jmp	.L261
 3504      FF
 3505              	.LVL362:
 3506 05f6 662E0F1F 		.p2align 4,,10
 3506      84000000 
 3506      0000
 3507              		.p2align 3
 3508              	.L284:
 390:fltk-1.3.4-1/src/Fl_Input.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 3509              		.loc 2 390 0
 3510 0600 85D2     		testl	%edx, %edx
 3511 0602 7509     		jne	.L288
 3512 0604 4585C9   		testl	%r9d, %r9d
 3513 0607 0F85B7FE 		jne	.L315
 3513      FFFF
 3514              	.L288:
 391:fltk-1.3.4-1/src/Fl_Input.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 3515              		.loc 2 391 0
 3516 060d 85D2     		testl	%edx, %edx
 3517 060f 0F85DB00 		jne	.L289
 3517      0000
 3518              	.LVL363:
 3519              	.LBB904:
 3520              	.LBB905:
 139:fltk-1.3.4-1/src/Fl_Input.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3521              		.loc 2 139 0
 3522 0615 83E608   		andl	$8, %esi
 3523 0618 0F84BAFD 		je	.L435
 3523      FFFF
 3524 061e E9AEFDFF 		jmp	.L290
 3524      FF
 3525              	.LVL364:
 3526              		.p2align 4,,10
 3527 0623 0F1F4400 		.p2align 3
 3527      00
 3528              	.L273:
 3529              	.LBE905:
 3530              	.LBE904:
 548:fltk-1.3.4-1/src/Fl_Input.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3531              		.loc 2 548 0
 3532 0628 4409CA   		orl	%r9d, %edx
 3533              	.LVL365:
 3534 062b 0F855FFA 		jne	.L261
 3534      FFFF
 3535              	.LVL366:
 3536 0631 8BBB9800 		movl	152(%rbx), %edi
 3536      0000
 3537              	.LVL367:
 3538 0637 85FF     		testl	%edi, %edi
 3539 0639 0F8551FA 		jne	.L261
 3539      FFFF
 3540 063f 4180F804 		cmpb	$4, %r8b
 3541 0643 0F84DFFA 		je	.L263
 3541      FFFF
 3542 0649 E942FAFF 		jmp	.L261
 3542      FF
 3543              	.LVL368:
 3544 064e 6690     		.p2align 4,,10
 3545              		.p2align 3
 3546              	.L276:
 534:fltk-1.3.4-1/src/Fl_Input.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 3547              		.loc 2 534 0
 3548 0650 F6436F08 		testb	$8, 111(%rbx)
 3549 0654 0F850E02 		jne	.L460
 3549      0000
 538:fltk-1.3.4-1/src/Fl_Input.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3550              		.loc 2 538 0
 3551 065a 4180F804 		cmpb	$4, %r8b
 3552 065e 0F852CFA 		jne	.L261
 3552      FFFF
 3553              	.LVL369:
 538:fltk-1.3.4-1/src/Fl_Input.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3554              		.loc 2 538 0 is_stmt 0 discriminator 1
 3555 0664 83E608   		andl	$8, %esi
 3556 0667 0F8523FA 		jne	.L261
 3556      FFFF
 3557              	.LVL370:
 539:fltk-1.3.4-1/src/Fl_Input.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 3558              		.loc 2 539 0 is_stmt 1
 3559 066d 8B939400 		movl	148(%rbx), %edx
 3559      0000
 3560              	.LVL371:
 3561 0673 8BB39000 		movl	144(%rbx), %esi
 3561      0000
 3562 0679 41B80100 		movl	$1, %r8d
 3562      0000
 3563              	.LVL372:
 3564 067f B9000000 		movl	$.LC48, %ecx
 3564      00
 3565 0684 4889DF   		movq	%rbx, %rdi
 3566              	.LVL373:
 3567 0687 E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 3567      00
 3568              	.LVL374:
 3569 068c E9FFF9FF 		jmp	.L261
 3569      FF
 3570              	.LVL375:
 3571              		.p2align 4,,10
 3572 0691 0F1F8000 		.p2align 3
 3572      000000
 3573              	.L280:
 435:fltk-1.3.4-1/src/Fl_Input.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 3574              		.loc 2 435 0
 3575 0698 85D2     		testl	%edx, %edx
 3576 069a 7418     		je	.L299
 436:fltk-1.3.4-1/src/Fl_Input.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3577              		.loc 2 436 0
 3578 069c 81FA0000 		cmpl	$262144, %edx
 3578      0400
 3579 06a2 0F84EF01 		je	.L461
 3579      0000
 437:fltk-1.3.4-1/src/Fl_Input.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 3580              		.loc 2 437 0
 3581 06a8 81FA0000 		cmpl	$4194304, %edx
 3581      4000
 3582 06ae 0F85DCF9 		jne	.L261
 3582      FFFF
 3583              	.L299:
 435:fltk-1.3.4-1/src/Fl_Input.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 3584              		.loc 2 435 0 discriminator 1
 3585 06b4 4889DF   		movq	%rbx, %rdi
 3586 06b7 E8000000 		call	_ZN8Fl_Input18kf_move_char_rightEv
 3586      00
 3587              	.LVL376:
 3588 06bc E9CFF9FF 		jmp	.L261
 3588      FF
 3589              	.LVL377:
 3590              		.p2align 4,,10
 3591 06c1 0F1F8000 		.p2align 3
 3591      000000
 3592              	.L281:
 449:fltk-1.3.4-1/src/Fl_Input.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3593              		.loc 2 449 0
 3594 06c8 85D2     		testl	%edx, %edx
 3595 06ca 0F848601 		je	.L462
 3595      0000
 450:fltk-1.3.4-1/src/Fl_Input.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3596              		.loc 2 450 0
 3597 06d0 81FA0000 		cmpl	$262144, %edx
 3597      0400
 3598 06d6 0F85B4F9 		jne	.L261
 3598      FFFF
 450:fltk-1.3.4-1/src/Fl_Input.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3599              		.loc 2 450 0 is_stmt 0 discriminator 1
 3600 06dc 4889DF   		movq	%rbx, %rdi
 3601 06df E8000000 		call	_ZN8Fl_Input18kf_move_up_and_solEv
 3601      00
 3602              	.LVL378:
 3603 06e4 E9A7F9FF 		jmp	.L261
 3603      FF
 3604              	.LVL379:
 3605 06e9 0F1F8000 		.p2align 4,,10
 3605      000000
 3606              		.p2align 3
 3607              	.L289:
 392:fltk-1.3.4-1/src/Fl_Input.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 3608              		.loc 2 392 0 is_stmt 1
 3609 06f0 81FA0000 		cmpl	$262144, %edx
 3609      0400
 3610 06f6 0F8594F9 		jne	.L261
 3610      FFFF
 3611 06fc E9E3FEFF 		jmp	.L314
 3611      FF
 3612              	.LVL380:
 3613              		.p2align 4,,10
 3614 0701 0F1F8000 		.p2align 3
 3614      000000
 3615              	.L449:
 3616              	.LBE913:
 3617              	.LBE922:
 3618              	.LBB923:
 3619              	.LBB878:
 3620              	.LBB873:
 3621              	.LBB861:
 3622              	.LBB858:
 3623              	.LBB838:
 319:fltk-1.3.4-1/src/Fl_Input.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 3624              		.loc 2 319 0
 3625 0708 E8000000 		call	localeconv
 3625      00
 3626              	.LVL381:
 320:fltk-1.3.4-1/src/Fl_Input.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 3627              		.loc 2 320 0
 3628 070d 4885C0   		testq	%rax, %rax
 319:fltk-1.3.4-1/src/Fl_Input.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 3629              		.loc 2 319 0
 3630 0710 4989C4   		movq	%rax, %r12
 3631              	.LVL382:
 320:fltk-1.3.4-1/src/Fl_Input.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 3632              		.loc 2 320 0
 3633 0713 0F849801 		je	.L240
 3633      0000
 321:fltk-1.3.4-1/src/Fl_Input.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 3634              		.loc 2 321 0
 3635 0719 488B38   		movq	(%rax), %rdi
 3636 071c 4885FF   		testq	%rdi, %rdi
 3637 071f 0F84B101 		je	.L334
 3637      0000
 321:fltk-1.3.4-1/src/Fl_Input.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 3638              		.loc 2 321 0 is_stmt 0 discriminator 1
 3639 0725 E8000000 		call	strlen
 3639      00
 3640              	.LVL383:
 3641 072a 488D6805 		leaq	5(%rax), %rbp
 3642              	.LVL384:
 3643              	.L241:
 322:fltk-1.3.4-1/src/Fl_Input.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 3644              		.loc 2 322 0 is_stmt 1
 3645 072e 498B7C24 		movq	40(%r12), %rdi
 3645      28
 3646 0733 4885FF   		testq	%rdi, %rdi
 3647 0736 7408     		je	.L242
 322:fltk-1.3.4-1/src/Fl_Input.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 3648              		.loc 2 322 0 is_stmt 0 discriminator 1
 3649 0738 E8000000 		call	strlen
 3649      00
 3650              	.LVL385:
 3651 073d 4801C5   		addq	%rax, %rbp
 3652              	.LVL386:
 3653              	.L242:
 323:fltk-1.3.4-1/src/Fl_Input.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 3654              		.loc 2 323 0 is_stmt 1
 3655 0740 498B7C24 		movq	64(%r12), %rdi
 3655      40
 3656 0745 4885FF   		testq	%rdi, %rdi
 3657 0748 7408     		je	.L243
 323:fltk-1.3.4-1/src/Fl_Input.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 3658              		.loc 2 323 0 is_stmt 0 discriminator 1
 3659 074a E8000000 		call	strlen
 3659      00
 3660              	.LVL387:
 3661 074f 4801C5   		addq	%rax, %rbp
 3662              	.LVL388:
 3663              	.L243:
 324:fltk-1.3.4-1/src/Fl_Input.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3664              		.loc 2 324 0 is_stmt 1
 3665 0752 498B7C24 		movq	72(%r12), %rdi
 3665      48
 3666 0757 4885FF   		testq	%rdi, %rdi
 3667 075a 7408     		je	.L244
 324:fltk-1.3.4-1/src/Fl_Input.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3668              		.loc 2 324 0 is_stmt 0 discriminator 1
 3669 075c E8000000 		call	strlen
 3669      00
 3670              	.LVL389:
 3671 0761 4801C5   		addq	%rax, %rbp
 3672              	.LVL390:
 3673              	.L244:
 328:fltk-1.3.4-1/src/Fl_Input.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3674              		.loc 2 328 0 is_stmt 1
 3675 0764 488D7D01 		leaq	1(%rbp), %rdi
 3676 0768 E8000000 		call	malloc
 3676      00
 3677              	.LVL391:
 3678              	.LBB839:
 3679              	.LBB840:
 3680              		.file 13 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 3681              		.loc 13 110 0
 3682 076d B92D0000 		movl	$45, %ecx
 3682      00
 3683 0772 C7002E65 		movl	$725968174, (%rax)
 3683      452B
 3684              	.LBE840:
 3685              	.LBE839:
 328:fltk-1.3.4-1/src/Fl_Input.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3686              		.loc 2 328 0
 3687 0778 4889C5   		movq	%rax, %rbp
 3688              	.LVL392:
 3689              	.LBB844:
 3690              	.LBB841:
 3691              		.loc 13 110 0
 3692 077b 66894804 		movw	%cx, 4(%rax)
 3693              	.LBE841:
 3694              	.LBE844:
 332:fltk-1.3.4-1/src/Fl_Input.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 3695              		.loc 2 332 0
 3696 077f 498B3424 		movq	(%r12), %rsi
 329:fltk-1.3.4-1/src/Fl_Input.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 3697              		.loc 2 329 0
 3698 0783 48890500 		movq	%rax, _ZL14legal_fp_chars(%rip)
 3698      000000
 3699              	.LVL393:
 332:fltk-1.3.4-1/src/Fl_Input.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 3700              		.loc 2 332 0
 3701 078a 4885F6   		testq	%rsi, %rsi
 3702 078d 7409     		je	.L325
 3703              	.LVL394:
 3704              	.LBB845:
 3705              	.LBB846:
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
 3706              		.loc 13 148 0 discriminator 1
 3707 078f 488D7D05 		leaq	5(%rbp), %rdi
 3708 0793 E8000000 		call	strcpy
 3708      00
 3709              	.LVL395:
 3710              	.L325:
 3711              	.LBE846:
 3712              	.LBE845:
 333:fltk-1.3.4-1/src/Fl_Input.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 3713              		.loc 2 333 0
 3714 0798 498B7424 		movq	40(%r12), %rsi
 3714      28
 3715 079d 4885F6   		testq	%rsi, %rsi
 3716 07a0 7408     		je	.L245
 3717              	.LVL396:
 3718              	.LBB847:
 3719              	.LBB848:
 3720              		.loc 13 148 0 discriminator 1
 3721 07a2 4889EF   		movq	%rbp, %rdi
 3722 07a5 E8000000 		call	strcat
 3722      00
 3723              	.LVL397:
 3724              	.L245:
 3725              	.LBE848:
 3726              	.LBE847:
 334:fltk-1.3.4-1/src/Fl_Input.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 3727              		.loc 2 334 0
 3728 07aa 498B7424 		movq	64(%r12), %rsi
 3728      40
 3729 07af 4885F6   		testq	%rsi, %rsi
 3730 07b2 7408     		je	.L246
 3731              	.LVL398:
 3732              	.LBB849:
 3733              	.LBB850:
 3734              		.loc 13 148 0 discriminator 1
 3735 07b4 4889EF   		movq	%rbp, %rdi
 3736 07b7 E8000000 		call	strcat
 3736      00
 3737              	.LVL399:
 3738              	.L246:
 3739              	.LBE850:
 3740              	.LBE849:
 335:fltk-1.3.4-1/src/Fl_Input.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3741              		.loc 2 335 0
 3742 07bc 498B7424 		movq	72(%r12), %rsi
 3742      48
 3743 07c1 4885F6   		testq	%rsi, %rsi
 3744 07c4 0F84A9F9 		je	.L248
 3744      FFFF
 3745              	.LVL400:
 3746              	.LBB851:
 3747              	.LBB852:
 3748              		.loc 13 148 0 discriminator 1
 3749 07ca 4889EF   		movq	%rbp, %rdi
 3750 07cd E8000000 		call	strcat
 3750      00
 3751              	.LVL401:
 3752 07d2 E99CF9FF 		jmp	.L248
 3752      FF
 3753              	.LVL402:
 3754              	.L454:
 3755              	.LBE852:
 3756              	.LBE851:
 3757              	.LBE838:
 3758              	.LBE858:
 345:fltk-1.3.4-1/src/Fl_Input.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 3759              		.loc 2 345 0 discriminator 1
 3760 07d7 31F6     		xorl	%esi, %esi
 3761 07d9 4889DF   		movq	%rbx, %rdi
 3762 07dc E8000000 		call	_ZNK9Fl_Input_5indexEi
 3762      00
 3763              	.LVL403:
 3764 07e1 83F830   		cmpl	$48, %eax
 3765 07e4 0F85C1F9 		jne	.L256
 3765      FFFF
 345:fltk-1.3.4-1/src/Fl_Input.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 3766              		.loc 2 345 0 is_stmt 0 discriminator 2
 3767 07ea 0FB64424 		movzbl	3(%rsp), %eax
 3767      03
 3768 07ef 83E0DF   		andl	$-33, %eax
 3769 07f2 3C58     		cmpb	$88, %al
 3770 07f4 0F85B1F9 		jne	.L256
 3770      FFFF
 3771 07fa E9C9FBFF 		jmp	.L250
 3771      FF
 3772              	.LVL404:
 3773              	.L453:
 3774              	.LBE861:
 3775              	.LBE873:
 3776              	.LBE878:
 3777              	.LBE923:
 3778              	.LBB924:
 3779              	.LBB914:
 3780              	.LBB906:
 403:fltk-1.3.4-1/src/Fl_Input.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 3781              		.loc 2 403 0 is_stmt 1
 3782 07ff 85D2     		testl	%edx, %edx
 3783 0801 0F852AFB 		jne	.L328
 3783      FFFF
 3784 0807 4585C9   		testl	%r9d, %r9d
 3785 080a 0F8421FB 		je	.L328
 3785      FFFF
 3786              	.LVL405:
 3787              	.L293:
 406:fltk-1.3.4-1/src/Fl_Input.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 3788              		.loc 2 406 0
 3789 0810 4889DF   		movq	%rbx, %rdi
 3790 0813 E8000000 		call	_ZN8Fl_Input20kf_delete_char_rightEv
 3790      00
 3791              	.LVL406:
 3792 0818 E973F8FF 		jmp	.L261
 3792      FF
 3793              	.LVL407:
 3794              	.L451:
 3795              	.LBE906:
 503:fltk-1.3.4-1/src/Fl_Input.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 3796              		.loc 2 503 0 discriminator 1
 3797 081d 4889DF   		movq	%rbx, %rdi
 3798 0820 E8000000 		call	_ZN8Fl_Input11kf_move_solEv
 3798      00
 3799              	.LVL408:
 3800 0825 E966F8FF 		jmp	.L261
 3800      FF
 3801              	.LVL409:
 3802              	.L459:
 567:fltk-1.3.4-1/src/Fl_Input.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3803              		.loc 2 567 0 discriminator 1
 3804 082a 4889DF   		movq	%rbx, %rdi
 3805              	.LVL410:
 3806 082d E8000000 		call	_ZN8Fl_Input7kf_undoEv
 3806      00
 3807              	.LVL411:
 3808 0832 E959F8FF 		jmp	.L261
 3808      FF
 3809              	.LVL412:
 3810              	.L457:
 462:fltk-1.3.4-1/src/Fl_Input.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3811              		.loc 2 462 0 discriminator 1
 3812 0837 BE010000 		movl	$1, %esi
 3812      00
 3813 083c 4889DF   		movq	%rbx, %rdi
 3814 083f E8000000 		call	_ZN8Fl_Input13kf_lines_downEi
 3814      00
 3815              	.LVL413:
 3816 0844 E947F8FF 		jmp	.L261
 3816      FF
 3817              	.LVL414:
 3818              	.L456:
 514:fltk-1.3.4-1/src/Fl_Input.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 3819              		.loc 2 514 0 discriminator 1
 3820 0849 4889DF   		movq	%rbx, %rdi
 3821 084c E8000000 		call	_ZN8Fl_Input11kf_move_eolEv
 3821      00
 3822              	.LVL415:
 3823 0851 E93AF8FF 		jmp	.L261
 3823      FF
 3824              	.LVL416:
 3825              	.L462:
 449:fltk-1.3.4-1/src/Fl_Input.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 3826              		.loc 2 449 0 discriminator 1
 3827 0856 BE010000 		movl	$1, %esi
 3827      00
 3828 085b 4889DF   		movq	%rbx, %rdi
 3829 085e E8000000 		call	_ZN8Fl_Input11kf_lines_upEi
 3829      00
 3830              	.LVL417:
 3831 0863 E928F8FF 		jmp	.L261
 3831      FF
 3832              	.LVL418:
 3833              	.L460:
 535:fltk-1.3.4-1/src/Fl_Input.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 3834              		.loc 2 535 0
 3835 0868 8BB38800 		movl	136(%rbx), %esi
 3835      0000
 3836 086e 31D2     		xorl	%edx, %edx
 3837              	.LVL419:
 3838 0870 4889DF   		movq	%rbx, %rdi
 3839              	.LVL420:
 3840 0873 E8000000 		call	_ZN9Fl_Input_8positionEii
 3840      00
 3841              	.LVL421:
 536:fltk-1.3.4-1/src/Fl_Input.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3842              		.loc 2 536 0
 3843 0878 4889DF   		movq	%rbx, %rdi
 3844 087b E8000000 		call	_ZN9Fl_Input_17maybe_do_callbackEv
 3844      00
 3845              	.LVL422:
 537:fltk-1.3.4-1/src/Fl_Input.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 3846              		.loc 2 537 0
 3847 0880 B8010000 		movl	$1, %eax
 3847      00
 3848 0885 E906F8FF 		jmp	.L261
 3848      FF
 3849              	.LVL423:
 3850              	.L316:
 3851              	.LBB907:
 404:fltk-1.3.4-1/src/Fl_Input.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 3852              		.loc 2 404 0
 3853 088a 4889DF   		movq	%rbx, %rdi
 3854 088d E8000000 		call	_ZN8Fl_Input11kf_copy_cutEv
 3854      00
 3855              	.LVL424:
 3856 0892 E9F9F7FF 		jmp	.L261
 3856      FF
 3857              	.LVL425:
 3858              	.L461:
 3859              	.LBE907:
 436:fltk-1.3.4-1/src/Fl_Input.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3860              		.loc 2 436 0 discriminator 1
 3861 0897 4889DF   		movq	%rbx, %rdi
 3862 089a E8000000 		call	_ZN8Fl_Input18kf_move_word_rightEv
 3862      00
 3863              	.LVL426:
 3864 089f E9ECF7FF 		jmp	.L261
 3864      FF
 3865              	.LVL427:
 3866              	.L458:
 422:fltk-1.3.4-1/src/Fl_Input.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 3867              		.loc 2 422 0 discriminator 1
 3868 08a4 4889DF   		movq	%rbx, %rdi
 3869 08a7 E8000000 		call	_ZN8Fl_Input17kf_move_word_leftEv
 3869      00
 3870              	.LVL428:
 3871 08ac E9DFF7FF 		jmp	.L261
 3871      FF
 3872              	.LVL429:
 3873              	.L240:
 3874              	.LBE914:
 3875              	.LBE924:
 3876              	.LBB925:
 3877              	.LBB879:
 3878              	.LBB874:
 3879              	.LBB862:
 3880              	.LBB859:
 3881              	.LBB855:
 328:fltk-1.3.4-1/src/Fl_Input.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3882              		.loc 2 328 0
 3883 08b1 BF060000 		movl	$6, %edi
 3883      00
 3884 08b6 E8000000 		call	malloc
 3884      00
 3885              	.LVL430:
 3886              	.LBB853:
 3887              	.LBB842:
 110:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 3888              		.loc 13 110 0
 3889 08bb BA2D0000 		movl	$45, %edx
 3889      00
 3890              	.LBE842:
 3891              	.LBE853:
 329:fltk-1.3.4-1/src/Fl_Input.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 3892              		.loc 2 329 0
 3893 08c0 48890500 		movq	%rax, _ZL14legal_fp_chars(%rip)
 3893      000000
 3894              	.LVL431:
 3895              	.LBB854:
 3896              	.LBB843:
 110:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 3897              		.loc 13 110 0
 3898 08c7 C7002E65 		movl	$725968174, (%rax)
 3898      452B
 3899 08cd 66895004 		movw	%dx, 4(%rax)
 3900              	.LVL432:
 3901 08d1 E99DF8FF 		jmp	.L248
 3901      FF
 3902              	.LVL433:
 3903              	.L334:
 3904              	.LBE843:
 3905              	.LBE854:
 318:fltk-1.3.4-1/src/Fl_Input.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3906              		.loc 2 318 0
 3907 08d6 BD050000 		movl	$5, %ebp
 3907      00
 3908 08db E94EFEFF 		jmp	.L241
 3908      FF
 3909              	.LVL434:
 3910              	.L447:
 3911              	.LBE855:
 3912              	.LBE859:
 3913              	.LBE862:
 3914              	.LBE874:
 3915              	.LBE879:
 3916              	.LBE925:
 3917              		.loc 2 587 0
 3918 08e0 E8000000 		call	__stack_chk_fail
 3918      00
 3919              	.LVL435:
 3920              		.cfi_endproc
 3921              	.LFE548:
 3923              		.section	.text.unlikely._ZN8Fl_Input10handle_keyEv
 3924              	.LCOLDE49:
 3925              		.section	.text._ZN8Fl_Input10handle_keyEv
 3926              	.LHOTE49:
 3927              		.section	.text.unlikely._ZN8Fl_Input6handleEi,"ax",@progbits
 3928              		.align 2
 3929              	.LCOLDB50:
 3930              		.section	.text._ZN8Fl_Input6handleEi,"ax",@progbits
 3931              	.LHOTB50:
 3932              		.align 2
 3933              		.p2align 4,,15
 3934              		.globl	_ZN8Fl_Input6handleEi
 3936              	_ZN8Fl_Input6handleEi:
 3937              	.LFB549:
 588:fltk-1.3.4-1/src/Fl_Input.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_Input.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 3938              		.loc 2 589 0
 3939              		.cfi_startproc
 3940              	.LVL436:
 3941 0000 4157     		pushq	%r15
 3942              		.cfi_def_cfa_offset 16
 3943              		.cfi_offset 15, -16
 3944 0002 4156     		pushq	%r14
 3945              		.cfi_def_cfa_offset 24
 3946              		.cfi_offset 14, -24
 3947 0004 4155     		pushq	%r13
 3948              		.cfi_def_cfa_offset 32
 3949              		.cfi_offset 13, -32
 3950 0006 4154     		pushq	%r12
 3951              		.cfi_def_cfa_offset 40
 3952              		.cfi_offset 12, -40
 3953 0008 55       		pushq	%rbp
 3954              		.cfi_def_cfa_offset 48
 3955              		.cfi_offset 6, -48
 3956 0009 53       		pushq	%rbx
 3957              		.cfi_def_cfa_offset 56
 3958              		.cfi_offset 3, -56
 3959 000a 89F5     		movl	%esi, %ebp
 3960 000c 4889FB   		movq	%rdi, %rbx
 3961 000f 4883EC18 		subq	$24, %rsp
 3962              		.cfi_def_cfa_offset 80
 3963              	.LBB926:
 590:fltk-1.3.4-1/src/Fl_Input.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_Input.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Input.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3964              		.loc 2 592 0
 3965 0013 83FE17   		cmpl	$23, %esi
 3966 0016 0F87FA00 		ja	.L483
 3966      0000
 3967 001c 89F0     		movl	%esi, %eax
 3968 001e FF24C500 		jmp	*.L466(,%rax,8)
 3968      000000
 3969              		.section	.rodata._ZN8Fl_Input6handleEi,"a",@progbits
 3970              		.align 8
 3971              		.align 4
 3972              	.L466:
 3973 0000 00000000 		.quad	.L483
 3973      00000000 
 3974 0008 00000000 		.quad	.L465
 3974      00000000 
 3975 0010 00000000 		.quad	.L467
 3975      00000000 
 3976 0018 00000000 		.quad	.L483
 3976      00000000 
 3977 0020 00000000 		.quad	.L483
 3977      00000000 
 3978 0028 00000000 		.quad	.L468
 3978      00000000 
 3979 0030 00000000 		.quad	.L469
 3979      00000000 
 3980 0038 00000000 		.quad	.L483
 3980      00000000 
 3981 0040 00000000 		.quad	.L470
 3981      00000000 
 3982 0048 00000000 		.quad	.L483
 3982      00000000 
 3983 0050 00000000 		.quad	.L483
 3983      00000000 
 3984 0058 00000000 		.quad	.L483
 3984      00000000 
 3985 0060 00000000 		.quad	.L483
 3985      00000000 
 3986 0068 00000000 		.quad	.L483
 3986      00000000 
 3987 0070 00000000 		.quad	.L483
 3987      00000000 
 3988 0078 00000000 		.quad	.L483
 3988      00000000 
 3989 0080 00000000 		.quad	.L483
 3989      00000000 
 3990 0088 00000000 		.quad	.L483
 3990      00000000 
 3991 0090 00000000 		.quad	.L483
 3991      00000000 
 3992 0098 00000000 		.quad	.L483
 3992      00000000 
 3993 00a0 00000000 		.quad	.L471
 3993      00000000 
 3994 00a8 00000000 		.quad	.L475
 3994      00000000 
 3995 00b0 00000000 		.quad	.L473
 3995      00000000 
 3996 00b8 00000000 		.quad	.L474
 3996      00000000 
 3997              		.section	.text._ZN8Fl_Input6handleEi
 3998              		.p2align 4,,10
 3999 0025 0F1F00   		.p2align 3
 4000              	.L471:
 4001              	.LBB927:
 593:fltk-1.3.4-1/src/Fl_Input.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_Input.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_Input.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Input.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Input.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Input.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Input.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Input.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Input.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Input.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_Input.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_Input.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_Input.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_Input.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_Input.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_Input.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/Fl_Input.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Input.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Input.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_Input.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_Input.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_Input.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/Fl_Input.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/Fl_Input.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_Input.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Input.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/Fl_Input.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/Fl_Input.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/Fl_Input.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_Input.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/Fl_Input.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_Input.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 625:fltk-1.3.4-1/src/Fl_Input.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_Input.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_Input.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 628:fltk-1.3.4-1/src/Fl_Input.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 629:fltk-1.3.4-1/src/Fl_Input.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_Input.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_Input.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632:fltk-1.3.4-1/src/Fl_Input.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 633:fltk-1.3.4-1/src/Fl_Input.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 634:fltk-1.3.4-1/src/Fl_Input.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635:fltk-1.3.4-1/src/Fl_Input.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 636:fltk-1.3.4-1/src/Fl_Input.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_Input.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 638:fltk-1.3.4-1/src/Fl_Input.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 639:fltk-1.3.4-1/src/Fl_Input.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 640:fltk-1.3.4-1/src/Fl_Input.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 641:fltk-1.3.4-1/src/Fl_Input.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 642:fltk-1.3.4-1/src/Fl_Input.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 643:fltk-1.3.4-1/src/Fl_Input.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 644:fltk-1.3.4-1/src/Fl_Input.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 645:fltk-1.3.4-1/src/Fl_Input.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 646:fltk-1.3.4-1/src/Fl_Input.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 647:fltk-1.3.4-1/src/Fl_Input.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 648:fltk-1.3.4-1/src/Fl_Input.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 649:fltk-1.3.4-1/src/Fl_Input.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 650:fltk-1.3.4-1/src/Fl_Input.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 651:fltk-1.3.4-1/src/Fl_Input.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 652:fltk-1.3.4-1/src/Fl_Input.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 653:fltk-1.3.4-1/src/Fl_Input.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 654:fltk-1.3.4-1/src/Fl_Input.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 655:fltk-1.3.4-1/src/Fl_Input.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 656:fltk-1.3.4-1/src/Fl_Input.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_Input.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_Input.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_Input.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_Input.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_Input.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_Input.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_Input.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_Input.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_Input.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 666:fltk-1.3.4-1/src/Fl_Input.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_Input.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_Input.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 669:fltk-1.3.4-1/src/Fl_Input.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_Input.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_Input.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 672:fltk-1.3.4-1/src/Fl_Input.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_Input.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_Input.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 675:fltk-1.3.4-1/src/Fl_Input.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_Input.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_Input.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 678:fltk-1.3.4-1/src/Fl_Input.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_Input.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 680:fltk-1.3.4-1/src/Fl_Input.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_Input.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_Input.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_Input.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_Input.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_Input.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_Input.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687:fltk-1.3.4-1/src/Fl_Input.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_Input.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_Input.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 690:fltk-1.3.4-1/src/Fl_Input.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_Input.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_Input.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_Input.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_Input.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_Input.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_Input.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_Input.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_Input.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_Input.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_Input.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_Input.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_Input.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_Input.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_Input.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_Input.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_Input.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_Input.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_Input.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 709:fltk-1.3.4-1/src/Fl_Input.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_Input.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_Input.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_Input.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_Input.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_Input.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_Input.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 4002              		.loc 2 715 0
 4003 0028 E8000000 		call	_ZN2Fl10belowmouseEP9Fl_Widget
 4003      00
 4004              	.LVL437:
 716:fltk-1.3.4-1/src/Fl_Input.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 4005              		.loc 2 716 0
 4006 002d 483B1D00 		cmpq	_ZZN8Fl_Input6handleEiE14dnd_save_focus(%rip), %rbx
 4006      000000
 4007 0034 743C     		je	.L475
 4008              	.LVL438:
 717:fltk-1.3.4-1/src/Fl_Input.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 4009              		.loc 2 717 0
 4010 0036 8B839000 		movl	144(%rbx), %eax
 4010      0000
 718:fltk-1.3.4-1/src/Fl_Input.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_Input.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_Input.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4011              		.loc 2 720 0
 4012 003c 4889DF   		movq	%rbx, %rdi
 717:fltk-1.3.4-1/src/Fl_Input.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 4013              		.loc 2 717 0
 4014 003f 89050000 		movl	%eax, _ZZN8Fl_Input6handleEiE17dnd_save_position(%rip)
 4014      0000
 4015              	.LVL439:
 718:fltk-1.3.4-1/src/Fl_Input.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4016              		.loc 2 718 0
 4017 0045 8B839400 		movl	148(%rbx), %eax
 4017      0000
 4018 004b 89050000 		movl	%eax, _ZZN8Fl_Input6handleEiE13dnd_save_mark(%rip)
 4018      0000
 719:fltk-1.3.4-1/src/Fl_Input.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4019              		.loc 2 719 0
 4020 0051 488B0500 		movq	_ZN2Fl6focus_E(%rip), %rax
 4020      000000
 4021 0058 48890500 		movq	%rax, _ZZN8Fl_Input6handleEiE14dnd_save_focus(%rip)
 4021      000000
 4022              		.loc 2 720 0
 4023 005f E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 4023      00
 4024              	.LVL440:
 721:fltk-1.3.4-1/src/Fl_Input.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 4025              		.loc 2 721 0
 4026 0064 488B03   		movq	(%rbx), %rax
 4027 0067 BE060000 		movl	$6, %esi
 4027      00
 4028 006c 4889DF   		movq	%rbx, %rdi
 4029 006f FF5018   		call	*24(%rax)
 4030              	.LVL441:
 4031              	.L475:
 4032              	.LBB928:
 4033              	.LBB929:
 4034              	.LBB930:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4035              		.loc 1 363 0
 4036 0072 0FB66B6E 		movzbl	110(%rbx), %ebp
 4037              	.LVL442:
 4038 0076 448B7B2C 		movl	44(%rbx), %r15d
 4039              	.LVL443:
 4040              	.LBE930:
 4041              	.LBE929:
 722:fltk-1.3.4-1/src/Fl_Input.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_Input.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_Input.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 725:fltk-1.3.4-1/src/Fl_Input.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_Input.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_Input.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 728:fltk-1.3.4-1/src/Fl_Input.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 729:fltk-1.3.4-1/src/Fl_Input.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 730:fltk-1.3.4-1/src/Fl_Input.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 731:fltk-1.3.4-1/src/Fl_Input.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 732:fltk-1.3.4-1/src/Fl_Input.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/src/Fl_Input.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 734:fltk-1.3.4-1/src/Fl_Input.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 735:fltk-1.3.4-1/src/Fl_Input.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 736:fltk-1.3.4-1/src/Fl_Input.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 4042              		.loc 2 736 0
 4043 007a 89EF     		movl	%ebp, %edi
 4044 007c E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 4044      00
 4045              	.LVL444:
 4046 0081 89EF     		movl	%ebp, %edi
 735:fltk-1.3.4-1/src/Fl_Input.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 4047              		.loc 2 735 0
 4048 0083 4129C7   		subl	%eax, %r15d
 4049 0086 448B7328 		movl	40(%rbx), %r14d
 4050              	.LVL445:
 4051              		.loc 2 736 0
 4052 008a E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 4052      00
 4053              	.LVL446:
 4054 008f 448B6324 		movl	36(%rbx), %r12d
 735:fltk-1.3.4-1/src/Fl_Input.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 4055              		.loc 2 735 0
 4056 0093 89EF     		movl	%ebp, %edi
 4057 0095 4129C6   		subl	%eax, %r14d
 4058              	.LVL447:
 4059 0098 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 4059      00
 4060              	.LVL448:
 4061 009d 468D2C20 		leal	(%rax,%r12), %r13d
 4062 00a1 448B6320 		movl	32(%rbx), %r12d
 4063              	.LVL449:
 4064 00a5 89EF     		movl	%ebp, %edi
 4065 00a7 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 4065      00
 4066              	.LVL450:
 4067              		.loc 2 736 0
 4068 00ac 4531C9   		xorl	%r9d, %r9d
 4069 00af 4589F8   		movl	%r15d, %r8d
 4070 00b2 4489F1   		movl	%r14d, %ecx
 4071 00b5 428D3420 		leal	(%rax,%r12), %esi
 4072 00b9 4489EA   		movl	%r13d, %edx
 4073 00bc 4889DF   		movq	%rbx, %rdi
 4074 00bf E8000000 		call	_ZN9Fl_Input_12handle_mouseEiiiii
 4074      00
 4075              	.LVL451:
 4076              	.L529:
 4077              	.LBE928:
 4078              	.LBE927:
 4079              	.LBE926:
 737:fltk-1.3.4-1/src/Fl_Input.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 738:fltk-1.3.4-1/src/Fl_Input.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 739:fltk-1.3.4-1/src/Fl_Input.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 740:fltk-1.3.4-1/src/Fl_Input.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 741:fltk-1.3.4-1/src/Fl_Input.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 742:fltk-1.3.4-1/src/Fl_Input.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 743:fltk-1.3.4-1/src/Fl_Input.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 744:fltk-1.3.4-1/src/Fl_Input.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 745:fltk-1.3.4-1/src/Fl_Input.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 746:fltk-1.3.4-1/src/Fl_Input.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 747:fltk-1.3.4-1/src/Fl_Input.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 748:fltk-1.3.4-1/src/Fl_Input.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 749:fltk-1.3.4-1/src/Fl_Input.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 750:fltk-1.3.4-1/src/Fl_Input.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 751:fltk-1.3.4-1/src/Fl_Input.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752:fltk-1.3.4-1/src/Fl_Input.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 753:fltk-1.3.4-1/src/Fl_Input.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 754:fltk-1.3.4-1/src/Fl_Input.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 755:fltk-1.3.4-1/src/Fl_Input.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 756:fltk-1.3.4-1/src/Fl_Input.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 757:fltk-1.3.4-1/src/Fl_Input.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 758:fltk-1.3.4-1/src/Fl_Input.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 759:fltk-1.3.4-1/src/Fl_Input.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 760:fltk-1.3.4-1/src/Fl_Input.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 761:fltk-1.3.4-1/src/Fl_Input.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 762:fltk-1.3.4-1/src/Fl_Input.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 763:fltk-1.3.4-1/src/Fl_Input.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/src/Fl_Input.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 765:fltk-1.3.4-1/src/Fl_Input.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/src/Fl_Input.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 767:fltk-1.3.4-1/src/Fl_Input.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 768:fltk-1.3.4-1/src/Fl_Input.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 769:fltk-1.3.4-1/src/Fl_Input.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 770:fltk-1.3.4-1/src/Fl_Input.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771:fltk-1.3.4-1/src/Fl_Input.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 772:fltk-1.3.4-1/src/Fl_Input.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 773:fltk-1.3.4-1/src/Fl_Input.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 774:fltk-1.3.4-1/src/Fl_Input.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 775:fltk-1.3.4-1/src/Fl_Input.cxx ****  758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 776:fltk-1.3.4-1/src/Fl_Input.cxx ****  759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 777:fltk-1.3.4-1/src/Fl_Input.cxx ****  760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible()
 778:fltk-1.3.4-1/src/Fl_Input.cxx ****  761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 779:fltk-1.3.4-1/src/Fl_Input.cxx ****  762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 780:fltk-1.3.4-1/src/Fl_Input.cxx ****  763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 781:fltk-1.3.4-1/src/Fl_Input.cxx ****  764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE
 782:fltk-1.3.4-1/src/Fl_Input.cxx ****  765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 783:fltk-1.3.4-1/src/Fl_Input.cxx ****  766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 784:fltk-1.3.4-1/src/Fl_Input.cxx ****  767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callb
 785:fltk-1.3.4-1/src/Fl_Input.cxx ****  768:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 786:fltk-1.3.4-1/src/Fl_Input.cxx ****  769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user cha
 787:fltk-1.3.4-1/src/Fl_Input.cxx ****  770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses o
 788:fltk-1.3.4-1/src/Fl_Input.cxx ****  771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier 
 789:fltk-1.3.4-1/src/Fl_Input.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 790:fltk-1.3.4-1/src/Fl_Input.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 791:fltk-1.3.4-1/src/Fl_Input.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4080              		.loc 2 791 0
 4081 00c4 4883C418 		addq	$24, %rsp
 4082              		.cfi_remember_state
 4083              		.cfi_def_cfa_offset 56
 4084 00c8 B8010000 		movl	$1, %eax
 4084      00
 4085 00cd 5B       		popq	%rbx
 4086              		.cfi_def_cfa_offset 48
 4087              	.LVL452:
 4088 00ce 5D       		popq	%rbp
 4089              		.cfi_def_cfa_offset 40
 4090 00cf 415C     		popq	%r12
 4091              		.cfi_def_cfa_offset 32
 4092 00d1 415D     		popq	%r13
 4093              		.cfi_def_cfa_offset 24
 4094 00d3 415E     		popq	%r14
 4095              		.cfi_def_cfa_offset 16
 4096 00d5 415F     		popq	%r15
 4097              		.cfi_def_cfa_offset 8
 4098 00d7 C3       		ret
 4099              	.LVL453:
 4100 00d8 0F1F8400 		.p2align 4,,10
 4100      00000000 
 4101              		.p2align 3
 4102              	.L469:
 4103              		.cfi_restore_state
 4104              	.LBB973:
 4105              	.LBB969:
 602:fltk-1.3.4-1/src/Fl_Input.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4106              		.loc 2 602 0
 4107 00e0 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 4107      0000
 4108 00e6 3D52FF00 		cmpl	$65362, %eax
 4108      00
 4109 00eb 0F843F04 		je	.L477
 4109      0000
 4110 00f1 0F8E6902 		jle	.L544
 4110      0000
 4111 00f7 3D53FF00 		cmpl	$65363, %eax
 4111      00
 4112 00fc 0F844E04 		je	.L481
 4112      0000
 4113 0102 3D54FF00 		cmpl	$65364, %eax
 4113      00
 4114 0107 0F85EB03 		jne	.L476
 4114      0000
 610:fltk-1.3.4-1/src/Fl_Input.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4115              		.loc 2 610 0
 4116 010d 31D2     		xorl	%edx, %edx
 4117 010f 31F6     		xorl	%esi, %esi
 4118              	.LVL454:
 4119 0111 E8000000 		call	_ZN9Fl_Input_16up_down_positionEii
 4119      00
 4120              	.LVL455:
 4121              	.L483:
 4122              	.LBE969:
 4123              	.LBE973:
 4124              	.LBB974:
 4125              	.LBB975:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4126              		.loc 1 363 0
 4127 0116 440FB663 		movzbl	110(%rbx), %r12d
 4127      6E
 4128 011b 448B6B2C 		movl	44(%rbx), %r13d
 4129              	.LVL456:
 4130              	.LBE975:
 4131              	.LBE974:
 790:fltk-1.3.4-1/src/Fl_Input.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4132              		.loc 2 790 0
 4133 011f 4489E7   		movl	%r12d, %edi
 4134 0122 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 4134      00
 4135              	.LVL457:
 788:fltk-1.3.4-1/src/Fl_Input.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 4136              		.loc 2 788 0
 4137 0127 4589E9   		movl	%r13d, %r9d
 790:fltk-1.3.4-1/src/Fl_Input.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4138              		.loc 2 790 0
 4139 012a 4489E7   		movl	%r12d, %edi
 4140 012d 448B7B28 		movl	40(%rbx), %r15d
 788:fltk-1.3.4-1/src/Fl_Input.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 4141              		.loc 2 788 0
 4142 0131 4129C1   		subl	%eax, %r9d
 4143 0134 44894C24 		movl	%r9d, 4(%rsp)
 4143      04
 4144              	.LVL458:
 790:fltk-1.3.4-1/src/Fl_Input.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4145              		.loc 2 790 0
 4146 0139 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 4146      00
 4147              	.LVL459:
 4148 013e 448B6B24 		movl	36(%rbx), %r13d
 789:fltk-1.3.4-1/src/Fl_Input.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 4149              		.loc 2 789 0
 4150 0142 4489E7   		movl	%r12d, %edi
 788:fltk-1.3.4-1/src/Fl_Input.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 4151              		.loc 2 788 0
 4152 0145 4129C7   		subl	%eax, %r15d
 4153              	.LVL460:
 789:fltk-1.3.4-1/src/Fl_Input.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 4154              		.loc 2 789 0
 4155 0148 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 4155      00
 4156              	.LVL461:
 4157 014d 4489E7   		movl	%r12d, %edi
 788:fltk-1.3.4-1/src/Fl_Input.cxx ****  772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed one
 4158              		.loc 2 788 0
 4159 0150 468D3428 		leal	(%rax,%r13), %r14d
 4160 0154 448B6B20 		movl	32(%rbx), %r13d
 4161              	.LVL462:
 789:fltk-1.3.4-1/src/Fl_Input.cxx ****  773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 4162              		.loc 2 789 0
 4163 0158 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 4163      00
 4164              	.LVL463:
 790:fltk-1.3.4-1/src/Fl_Input.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4165              		.loc 2 790 0
 4166 015d 448B4C24 		movl	4(%rsp), %r9d
 4166      04
 4167              		.loc 2 791 0
 4168 0162 4883C418 		addq	$24, %rsp
 4169              		.cfi_remember_state
 4170              		.cfi_def_cfa_offset 56
 790:fltk-1.3.4-1/src/Fl_Input.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4171              		.loc 2 790 0
 4172 0166 4589F8   		movl	%r15d, %r8d
 4173 0169 428D1428 		leal	(%rax,%r13), %edx
 4174 016d 4489F1   		movl	%r14d, %ecx
 4175 0170 89EE     		movl	%ebp, %esi
 4176 0172 4889DF   		movq	%rbx, %rdi
 4177              		.loc 2 791 0
 4178 0175 5B       		popq	%rbx
 4179              		.cfi_def_cfa_offset 48
 4180              	.LVL464:
 4181 0176 5D       		popq	%rbp
 4182              		.cfi_def_cfa_offset 40
 4183              	.LVL465:
 4184 0177 415C     		popq	%r12
 4185              		.cfi_def_cfa_offset 32
 4186 0179 415D     		popq	%r13
 4187              		.cfi_def_cfa_offset 24
 4188 017b 415E     		popq	%r14
 4189              		.cfi_def_cfa_offset 16
 4190 017d 415F     		popq	%r15
 4191              		.cfi_def_cfa_offset 8
 790:fltk-1.3.4-1/src/Fl_Input.cxx ****  774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4192              		.loc 2 790 0
 4193 017f E9000000 		jmp	_ZN9Fl_Input_10handletextEiiiii
 4193      00
 4194              	.LVL466:
 4195              		.p2align 4,,10
 4196 0184 0F1F4000 		.p2align 3
 4197              	.L473:
 4198              		.cfi_restore_state
 4199              	.LBB976:
 4200              	.LBB970:
 741:fltk-1.3.4-1/src/Fl_Input.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 4201              		.loc 2 741 0
 4202 0188 8B150000 		movl	_ZZN8Fl_Input6handleEiE13dnd_save_mark(%rip), %edx
 4202      0000
 4203 018e 8B350000 		movl	_ZZN8Fl_Input6handleEiE17dnd_save_position(%rip), %esi
 4203      0000
 4204              	.LVL467:
 4205 0194 E8000000 		call	_ZN9Fl_Input_8positionEii
 4205      00
 4206              	.LVL468:
 745:fltk-1.3.4-1/src/Fl_Input.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4207              		.loc 2 745 0
 4208 0199 488B3D00 		movq	_ZZN8Fl_Input6handleEiE14dnd_save_focus(%rip), %rdi
 4208      000000
 4209 01a0 4885FF   		testq	%rdi, %rdi
 4210 01a3 7418     		je	.L504
 4211 01a5 4839FB   		cmpq	%rdi, %rbx
 4212 01a8 7413     		je	.L504
 746:fltk-1.3.4-1/src/Fl_Input.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 4213              		.loc 2 746 0
 4214 01aa E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 4214      00
 4215              	.LVL469:
 747:fltk-1.3.4-1/src/Fl_Input.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 4216              		.loc 2 747 0
 4217 01af 488B03   		movq	(%rbx), %rax
 4218 01b2 BE070000 		movl	$7, %esi
 4218      00
 4219 01b7 4889DF   		movq	%rbx, %rdi
 4220 01ba FF5018   		call	*24(%rax)
 4221              	.LVL470:
 4222              	.L504:
 750:fltk-1.3.4-1/src/Fl_Input.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4223              		.loc 2 750 0
 4224 01bd E8000000 		call	_ZN2Fl12first_windowEv
 4224      00
 4225              	.LVL471:
 4226 01c2 BE1B0000 		movl	$27, %esi
 4226      00
 4227 01c7 4889C7   		movq	%rax, %rdi
 4228 01ca E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 4228      00
 4229              	.LVL472:
 752:fltk-1.3.4-1/src/Fl_Input.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4230              		.loc 2 752 0
 4231 01cf 48C70500 		movq	$0, _ZZN8Fl_Input6handleEiE14dnd_save_focus(%rip)
 4231      00000000 
 4231      000000
 753:fltk-1.3.4-1/src/Fl_Input.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 4232              		.loc 2 753 0
 4233 01da E9E5FEFF 		jmp	.L529
 4233      FF
 4234              	.LVL473:
 4235 01df 90       		.p2align 4,,10
 4236              		.p2align 3
 4237              	.L474:
 4238              	.LBB931:
 756:fltk-1.3.4-1/src/Fl_Input.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 4239              		.loc 2 756 0
 4240 01e0 488B3D00 		movq	_ZZN8Fl_Input6handleEiE14dnd_save_focus(%rip), %rdi
 4240      000000
 4241 01e7 4839FB   		cmpq	%rdi, %rbx
 4242 01ea 0F847003 		je	.L545
 4242      0000
 768:fltk-1.3.4-1/src/Fl_Input.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 4243              		.loc 2 768 0
 4244 01f0 4885FF   		testq	%rdi, %rdi
 4245 01f3 740B     		je	.L508
 769:fltk-1.3.4-1/src/Fl_Input.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4246              		.loc 2 769 0
 4247 01f5 488B07   		movq	(%rdi), %rax
 4248 01f8 BE070000 		movl	$7, %esi
 4248      00
 4249              	.LVL474:
 4250 01fd FF5018   		call	*24(%rax)
 4251              	.LVL475:
 4252              	.L508:
 4253              	.LBE931:
 772:fltk-1.3.4-1/src/Fl_Input.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4254              		.loc 2 772 0
 4255 0200 4889DF   		movq	%rbx, %rdi
 771:fltk-1.3.4-1/src/Fl_Input.cxx ****  755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 4256              		.loc 2 771 0
 4257 0203 48C70500 		movq	$0, _ZZN8Fl_Input6handleEiE14dnd_save_focus(%rip)
 4257      00000000 
 4257      000000
 772:fltk-1.3.4-1/src/Fl_Input.cxx ****  756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4258              		.loc 2 772 0
 4259 020e E8000000 		call	_ZN9Fl_Widget10take_focusEv
 4259      00
 4260              	.LVL476:
 773:fltk-1.3.4-1/src/Fl_Input.cxx ****  757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 4261              		.loc 2 773 0
 4262 0213 E9ACFEFF 		jmp	.L529
 4262      FF
 4263              	.LVL477:
 4264 0218 0F1F8400 		.p2align 4,,10
 4264      00000000 
 4265              		.p2align 3
 4266              	.L465:
 4267              	.LBB942:
 4268              	.LBB943:
 4269              	.LBB944:
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
1196:fltk-1.3.4-1/FL/Fl.H **** 
1197:fltk-1.3.4-1/FL/Fl.H ****   // Drag-n-drop text operation methods...
1198:fltk-1.3.4-1/FL/Fl.H ****   /**
1199:fltk-1.3.4-1/FL/Fl.H ****     Gets or sets whether drag and drop text operations are supported.
1200:fltk-1.3.4-1/FL/Fl.H ****     This specifically affects whether selected text can
1201:fltk-1.3.4-1/FL/Fl.H ****     be dragged from text fields or dragged within a text field as a
1202:fltk-1.3.4-1/FL/Fl.H ****     cut/paste shortcut.
1203:fltk-1.3.4-1/FL/Fl.H ****   */
1204:fltk-1.3.4-1/FL/Fl.H ****   static void dnd_text_ops(int v) { option(OPTION_DND_TEXT, (v!=0)); }
1205:fltk-1.3.4-1/FL/Fl.H ****   /**
1206:fltk-1.3.4-1/FL/Fl.H ****     Gets or sets whether drag and drop text operations are
1207:fltk-1.3.4-1/FL/Fl.H ****     supported. This specifically affects whether selected text can
1208:fltk-1.3.4-1/FL/Fl.H ****     be dragged from text fields or dragged within a text field as a
1209:fltk-1.3.4-1/FL/Fl.H ****     cut/paste shortcut.
1210:fltk-1.3.4-1/FL/Fl.H ****   */
1211:fltk-1.3.4-1/FL/Fl.H ****   static int  dnd_text_ops() { return option(OPTION_DND_TEXT); }
 4270              		.loc 11 1211 0
 4271 0220 BF020000 		movl	$2, %edi
 4271      00
 4272 0225 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 4272      00
 4273              	.LVL478:
 4274              	.LBE944:
 4275              	.LBE943:
 649:fltk-1.3.4-1/src/Fl_Input.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 4276              		.loc 2 649 0
 4277 022a 84C0     		testb	%al, %al
 4278 022c 488B1500 		movq	_ZN2Fl6focus_E(%rip), %rdx
 4278      000000
 4279 0233 0F856F01 		jne	.L546
 4279      0000
 4280              	.L513:
 4281              	.LBE942:
 666:fltk-1.3.4-1/src/Fl_Input.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 4282              		.loc 2 666 0
 4283 0239 4839DA   		cmpq	%rbx, %rdx
 4284 023c 0F84D4FE 		je	.L483
 4284      FFFF
 667:fltk-1.3.4-1/src/Fl_Input.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 4285              		.loc 2 667 0
 4286 0242 4889DF   		movq	%rbx, %rdi
 4287 0245 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 4287      00
 4288              	.LVL479:
 668:fltk-1.3.4-1/src/Fl_Input.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 4289              		.loc 2 668 0
 4290 024a 488B03   		movq	(%rbx), %rax
 4291 024d BE060000 		movl	$6, %esi
 4291      00
 4292 0252 4889DF   		movq	%rbx, %rdi
 4293 0255 FF5018   		call	*24(%rax)
 4294              	.LVL480:
 4295 0258 E9B9FEFF 		jmp	.L483
 4295      FF
 4296              	.LVL481:
 4297 025d 0F1F00   		.p2align 4,,10
 4298              		.p2align 3
 4299              	.L467:
 693:fltk-1.3.4-1/src/Fl_Input.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4300              		.loc 2 693 0
 4301 0260 813D0000 		cmpl	$65258, _ZN2Fl8e_keysymE(%rip)
 4301      0000EAFE 
 4301      0000
 4302 026a 0F845003 		je	.L547
 4302      0000
 696:fltk-1.3.4-1/src/Fl_Input.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 4303              		.loc 2 696 0
 4304 0270 8B150000 		movl	_ZN2Fl10e_is_clickE(%rip), %edx
 4304      0000
 4305 0276 85D2     		testl	%edx, %edx
 4306 0278 0F841801 		je	.L514
 4306      0000
 699:fltk-1.3.4-1/src/Fl_Input.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 4307              		.loc 2 699 0 discriminator 1
 4308 027e 8B350000 		movl	_ZZN8Fl_Input6handleEiE10drag_start(%rip), %esi
 4308      0000
 4309              	.LVL482:
 4310 0284 85F6     		testl	%esi, %esi
 4311 0286 0F88FC00 		js	.L548
 4311      0000
 701:fltk-1.3.4-1/src/Fl_Input.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 4312              		.loc 2 701 0
 4313 028c 89F2     		movl	%esi, %edx
 4314 028e E8000000 		call	_ZN9Fl_Input_8positionEii
 4314      00
 4315              	.LVL483:
 702:fltk-1.3.4-1/src/Fl_Input.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4316              		.loc 2 702 0
 4317 0293 C7050000 		movl	$-1, _ZZN8Fl_Input6handleEiE10drag_start(%rip)
 4317      0000FFFF 
 4317      FFFF
 4318              	.L499:
 4319              	.LVL484:
 710:fltk-1.3.4-1/src/Fl_Input.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 4320              		.loc 2 710 0
 4321 029d F6436C08 		testb	$8, 108(%rbx)
 4322 02a1 0F841DFE 		je	.L529
 4322      FFFF
 4323              	.LVL485:
 4324              	.LBB951:
 4325              	.LBB952:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4326              		.loc 1 861 0 discriminator 1
 4327 02a7 488B5318 		movq	24(%rbx), %rdx
 4328 02ab 4889DE   		movq	%rbx, %rsi
 4329 02ae 4889DF   		movq	%rbx, %rdi
 4330 02b1 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 4330      00
 4331              	.LVL486:
 4332 02b6 E909FEFF 		jmp	.L529
 4332      FF
 4333              	.LVL487:
 4334 02bb 0F1F4400 		.p2align 4,,10
 4334      00
 4335              		.p2align 3
 4336              	.L468:
 4337              	.LBE952:
 4338              	.LBE951:
 4339              	.LBB953:
 4340              	.LBB954:
 4341              		.loc 11 1211 0
 4342 02c0 BF020000 		movl	$2, %edi
 4342      00
 4343 02c5 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 4343      00
 4344              	.LVL488:
 4345              	.LBE954:
 4346              	.LBE953:
 673:fltk-1.3.4-1/src/Fl_Input.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 4347              		.loc 2 673 0
 4348 02ca 84C0     		testb	%al, %al
 4349 02cc 0F8444FE 		je	.L483
 4349      FFFF
 674:fltk-1.3.4-1/src/Fl_Input.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 4350              		.loc 2 674 0
 4351 02d2 8B350000 		movl	_ZZN8Fl_Input6handleEiE10drag_start(%rip), %esi
 4351      0000
 4352 02d8 85F6     		testl	%esi, %esi
 4353 02da 0F8836FE 		js	.L483
 4353      FFFF
 675:fltk-1.3.4-1/src/Fl_Input.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4354              		.loc 2 675 0
 4355 02e0 8B0D0000 		movl	_ZN2Fl10e_is_clickE(%rip), %ecx
 4355      0000
 4356 02e6 85C9     		testl	%ecx, %ecx
 4357 02e8 0F85D6FD 		jne	.L529
 4357      FFFF
 4358              	.LVL489:
 677:fltk-1.3.4-1/src/Fl_Input.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4359              		.loc 2 677 0
 4360 02ee 8B839000 		movl	144(%rbx), %eax
 4360      0000
 681:fltk-1.3.4-1/src/Fl_Input.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4361              		.loc 2 681 0
 4362 02f4 31F6     		xorl	%esi, %esi
 4363 02f6 4889DF   		movq	%rbx, %rdi
 679:fltk-1.3.4-1/src/Fl_Input.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 4364              		.loc 2 679 0
 4365 02f9 48891D00 		movq	%rbx, _ZZN8Fl_Input6handleEiE14dnd_save_focus(%rip)
 4365      000000
 677:fltk-1.3.4-1/src/Fl_Input.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4366              		.loc 2 677 0
 4367 0300 89050000 		movl	%eax, _ZZN8Fl_Input6handleEiE17dnd_save_position(%rip)
 4367      0000
 4368              	.LVL490:
 678:fltk-1.3.4-1/src/Fl_Input.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 4369              		.loc 2 678 0
 4370 0306 8B839400 		movl	148(%rbx), %eax
 4370      0000
 4371 030c 89050000 		movl	%eax, _ZZN8Fl_Input6handleEiE13dnd_save_mark(%rip)
 4371      0000
 681:fltk-1.3.4-1/src/Fl_Input.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4372              		.loc 2 681 0
 4373 0312 E8000000 		call	_ZN9Fl_Input_4copyEi
 4373      00
 4374              	.LVL491:
 685:fltk-1.3.4-1/src/Fl_Input.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4375              		.loc 2 685 0
 4376 0317 E8000000 		call	_ZN2Fl3dndEv
 4376      00
 4377              	.LVL492:
 687:fltk-1.3.4-1/src/Fl_Input.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 4378              		.loc 2 687 0
 4379 031c E9A3FDFF 		jmp	.L529
 4379      FF
 4380              	.LVL493:
 4381              		.p2align 4,,10
 4382 0321 0F1F8000 		.p2align 3
 4382      000000
 4383              	.L470:
 634:fltk-1.3.4-1/src/Fl_Input.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 4384              		.loc 2 634 0
 4385 0328 813D0000 		cmpl	$65289, _ZN2Fl8e_keysymE(%rip)
 4385      000009FF 
 4385      0000
 4386 0332 0F842801 		je	.L549
 4386      0000
 4387              	.LVL494:
 4388              	.L484:
 642:fltk-1.3.4-1/src/Fl_Input.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 4389              		.loc 2 642 0
 4390 0338 4889DF   		movq	%rbx, %rdi
 4391 033b E8000000 		call	_ZNK9Fl_Widget8active_rEv
 4391      00
 4392              	.LVL495:
 4393 0340 85C0     		testl	%eax, %eax
 4394 0342 0F859802 		jne	.L550
 4394      0000
 4395              	.L512:
 4396              	.LBE970:
 4397              	.LBE976:
 4398              		.loc 2 791 0
 4399 0348 4883C418 		addq	$24, %rsp
 4400              		.cfi_remember_state
 4401              		.cfi_def_cfa_offset 56
 4402              	.LBB977:
 4403              	.LBB971:
 644:fltk-1.3.4-1/src/Fl_Input.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 4404              		.loc 2 644 0
 4405 034c 4889DF   		movq	%rbx, %rdi
 4406              	.LBE971:
 4407              	.LBE977:
 4408              		.loc 2 791 0
 4409 034f 5B       		popq	%rbx
 4410              		.cfi_def_cfa_offset 48
 4411              	.LVL496:
 4412 0350 5D       		popq	%rbp
 4413              		.cfi_def_cfa_offset 40
 4414              	.LVL497:
 4415 0351 415C     		popq	%r12
 4416              		.cfi_def_cfa_offset 32
 4417 0353 415D     		popq	%r13
 4418              		.cfi_def_cfa_offset 24
 4419 0355 415E     		popq	%r14
 4420              		.cfi_def_cfa_offset 16
 4421 0357 415F     		popq	%r15
 4422              		.cfi_def_cfa_offset 8
 4423              	.LBB978:
 4424              	.LBB972:
 644:fltk-1.3.4-1/src/Fl_Input.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 4425              		.loc 2 644 0
 4426 0359 E9000000 		jmp	_ZN8Fl_Input10handle_keyEv
 4426      00
 4427              	.LVL498:
 4428 035e 6690     		.p2align 4,,10
 4429              		.p2align 3
 4430              	.L544:
 4431              		.cfi_restore_state
 602:fltk-1.3.4-1/src/Fl_Input.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4432              		.loc 2 602 0
 4433 0360 3D09FF00 		cmpl	$65289, %eax
 4433      00
 4434 0365 0F84AD01 		je	.L479
 4434      0000
 4435 036b 3D51FF00 		cmpl	$65361, %eax
 4435      00
 4436 0370 0F858201 		jne	.L476
 4436      0000
 4437 0376 8BB78800 		movl	136(%rdi), %esi
 4437      0000
 4438              	.LVL499:
 4439              	.LBB955:
 4440              	.LBB956:
 298:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 4441              		.loc 10 298 0
 4442 037c 89F2     		movl	%esi, %edx
 4443 037e E8000000 		call	_ZN9Fl_Input_8positionEii
 4443      00
 4444              	.LVL500:
 4445 0383 E98EFDFF 		jmp	.L483
 4445      FF
 4446              	.LVL501:
 4447              	.L548:
 4448              	.LBE956:
 4449              	.LBE955:
 703:fltk-1.3.4-1/src/Fl_Input.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 4450              		.loc 2 703 0
 4451 0388 8B050000 		movl	_ZN2Fl8e_clicksE(%rip), %eax
 4451      0000
 4452 038e 85C0     		testl	%eax, %eax
 4453 0390 0F8407FF 		je	.L499
 4453      FFFF
 4454              	.L514:
 698:fltk-1.3.4-1/src/Fl_Input.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4455              		.loc 2 698 0
 4456 0396 31F6     		xorl	%esi, %esi
 4457 0398 4889DF   		movq	%rbx, %rdi
 4458 039b E8000000 		call	_ZN9Fl_Input_4copyEi
 4458      00
 4459              	.LVL502:
 4460 03a0 E9F8FEFF 		jmp	.L499
 4460      FF
 4461              		.p2align 4,,10
 4462 03a5 0F1F00   		.p2align 3
 4463              	.L546:
 4464              	.LBB957:
 4465              	.LBB945:
 4466              	.LBB946:
 4467              	.LBB947:
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4468              		.loc 1 363 0
 4469 03a8 440FB663 		movzbl	110(%rbx), %r12d
 4469      6E
 4470 03ad 448B6B2C 		movl	44(%rbx), %r13d
 4471 03b1 448BB390 		movl	144(%rbx), %r14d
 4471      000000
 4472              	.LVL503:
 4473 03b8 448BBB94 		movl	148(%rbx), %r15d
 4473      000000
 4474              	.LVL504:
 4475              	.LBE947:
 4476              	.LBE946:
 653:fltk-1.3.4-1/src/Fl_Input.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 4477              		.loc 2 653 0
 4478 03bf 4489E7   		movl	%r12d, %edi
 4479 03c2 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 4479      00
 4480              	.LVL505:
 652:fltk-1.3.4-1/src/Fl_Input.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 4481              		.loc 2 652 0
 4482 03c7 4589E8   		movl	%r13d, %r8d
 4483 03ca 448B6B28 		movl	40(%rbx), %r13d
 653:fltk-1.3.4-1/src/Fl_Input.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 4484              		.loc 2 653 0
 4485 03ce 4489E7   		movl	%r12d, %edi
 652:fltk-1.3.4-1/src/Fl_Input.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 4486              		.loc 2 652 0
 4487 03d1 4129C0   		subl	%eax, %r8d
 4488 03d4 44894424 		movl	%r8d, 12(%rsp)
 4488      0C
 4489              	.LVL506:
 653:fltk-1.3.4-1/src/Fl_Input.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 4490              		.loc 2 653 0
 4491 03d9 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 4491      00
 4492              	.LVL507:
 652:fltk-1.3.4-1/src/Fl_Input.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 4493              		.loc 2 652 0
 4494 03de 4489E9   		movl	%r13d, %ecx
 4495 03e1 448B6B24 		movl	36(%rbx), %r13d
 4496 03e5 4489E7   		movl	%r12d, %edi
 4497 03e8 29C1     		subl	%eax, %ecx
 4498 03ea 894C2408 		movl	%ecx, 8(%rsp)
 4499              	.LVL508:
 4500 03ee E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 4500      00
 4501              	.LVL509:
 4502 03f3 428D1428 		leal	(%rax,%r13), %edx
 4503 03f7 448B6B20 		movl	32(%rbx), %r13d
 4504 03fb 4489E7   		movl	%r12d, %edi
 4505 03fe 89542404 		movl	%edx, 4(%rsp)
 4506              	.LVL510:
 4507 0402 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 4507      00
 4508              	.LVL511:
 653:fltk-1.3.4-1/src/Fl_Input.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 4509              		.loc 2 653 0
 4510 0407 448B4424 		movl	12(%rsp), %r8d
 4510      0C
 4511 040c 8B4C2408 		movl	8(%rsp), %ecx
 4512 0410 428D3428 		leal	(%rax,%r13), %esi
 4513 0414 8B542404 		movl	4(%rsp), %edx
 4514 0418 4531C9   		xorl	%r9d, %r9d
 4515 041b 4889DF   		movq	%rbx, %rdi
 4516 041e E8000000 		call	_ZN9Fl_Input_12handle_mouseEiiiii
 4516      00
 4517              	.LVL512:
 654:fltk-1.3.4-1/src/Fl_Input.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 4518              		.loc 2 654 0
 4519 0423 8B839000 		movl	144(%rbx), %eax
 4519      0000
 655:fltk-1.3.4-1/src/Fl_Input.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 4520              		.loc 2 655 0
 4521 0429 4489FA   		movl	%r15d, %edx
 4522 042c 4489F6   		movl	%r14d, %esi
 4523 042f 4889DF   		movq	%rbx, %rdi
 654:fltk-1.3.4-1/src/Fl_Input.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 4524              		.loc 2 654 0
 4525 0432 89050000 		movl	%eax, _ZZN8Fl_Input6handleEiE6newpos(%rip)
 4525      0000
 655:fltk-1.3.4-1/src/Fl_Input.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 4526              		.loc 2 655 0
 4527 0438 E8000000 		call	_ZN9Fl_Input_8positionEii
 4527      00
 4528              	.LVL513:
 4529              	.LBB948:
 4530              	.LBB949:
 838:fltk-1.3.4-1/FL/Fl.H ****   static void focus(Fl_Widget*);
 4531              		.loc 11 838 0
 4532 043d 488B1500 		movq	_ZN2Fl6focus_E(%rip), %rdx
 4532      000000
 4533              	.LBE949:
 4534              	.LBE948:
 656:fltk-1.3.4-1/src/Fl_Input.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 4535              		.loc 2 656 0
 4536 0444 4839DA   		cmpq	%rbx, %rdx
 4537 0447 0F84DC01 		je	.L551
 4537      0000
 4538              	.LVL514:
 4539              	.L492:
 663:fltk-1.3.4-1/src/Fl_Input.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4540              		.loc 2 663 0
 4541 044d C7050000 		movl	$-1, _ZZN8Fl_Input6handleEiE10drag_start(%rip)
 4541      0000FFFF 
 4541      FFFF
 4542              	.LBE945:
 4543 0457 E9DDFDFF 		jmp	.L513
 4543      FF
 4544              	.LVL515:
 4545 045c 0F1F4000 		.p2align 4,,10
 4546              		.p2align 3
 4547              	.L549:
 4548              	.LBE957:
 630:fltk-1.3.4-1/src/Fl_Input.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4549              		.loc 2 630 0
 4550 0460 F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 4550      000001
 4551 0467 0F85CBFE 		jne	.L484
 4551      FFFF
 4552              	.LVL516:
 631:fltk-1.3.4-1/src/Fl_Input.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 4553              		.loc 2 631 0
 4554 046d 448B8798 		movl	152(%rdi), %r8d
 4554      000000
 4555 0474 4585C0   		testl	%r8d, %r8d
 4556 0477 0F85BBFE 		jne	.L484
 4556      FFFF
 4557              	.LVL517:
 632:fltk-1.3.4-1/src/Fl_Input.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 4558              		.loc 2 632 0
 4559 047d 0FB6476C 		movzbl	108(%rdi), %eax
 4560 0481 83E007   		andl	$7, %eax
 4561 0484 3C04     		cmpb	$4, %al
 4562 0486 0F85ACFE 		jne	.L484
 4562      FFFF
 4563 048c 8B878800 		movl	136(%rdi), %eax
 4563      0000
 4564              	.LVL518:
 633:fltk-1.3.4-1/src/Fl_Input.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4565              		.loc 2 633 0
 4566 0492 85C0     		testl	%eax, %eax
 4567 0494 0F8E9EFE 		jle	.L484
 4567      FFFF
 4568 049a 8BB79400 		movl	148(%rdi), %esi
 4568      0000
 4569              	.LVL519:
 634:fltk-1.3.4-1/src/Fl_Input.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 4570              		.loc 2 634 0
 4571 04a0 85F6     		testl	%esi, %esi
 4572 04a2 7508     		jne	.L485
 4573              	.LVL520:
 634:fltk-1.3.4-1/src/Fl_Input.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 4574              		.loc 2 634 0 is_stmt 0 discriminator 2
 4575 04a4 3B879000 		cmpl	144(%rdi), %eax
 4575      0000
 4576 04aa 7416     		je	.L486
 4577              	.LVL521:
 4578              	.L485:
 634:fltk-1.3.4-1/src/Fl_Input.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 4579              		.loc 2 634 0 discriminator 5
 4580 04ac 8BBB9000 		movl	144(%rbx), %edi
 4580      0000
 4581 04b2 85FF     		testl	%edi, %edi
 4582 04b4 0F857EFE 		jne	.L484
 4582      FFFF
 4583 04ba 39F0     		cmpl	%esi, %eax
 4584 04bc 0F8576FE 		jne	.L484
 4584      FFFF
 4585              	.LVL522:
 4586              	.L486:
 4587 04c2 8B839000 		movl	144(%rbx), %eax
 4587      0000
 4588              	.LVL523:
 636:fltk-1.3.4-1/src/Fl_Input.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4589              		.loc 2 636 0 is_stmt 1
 4590 04c8 39F0     		cmpl	%esi, %eax
 4591 04ca 7D14     		jge	.L552
 4592              	.LVL524:
 4593              	.LBB958:
 4594              	.LBB959:
 298:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 4595              		.loc 10 298 0
 4596 04cc 89F2     		movl	%esi, %edx
 4597 04ce 4889DF   		movq	%rbx, %rdi
 4598 04d1 E8000000 		call	_ZN9Fl_Input_8positionEii
 4598      00
 4599              	.LVL525:
 4600 04d6 E9E9FBFF 		jmp	.L529
 4600      FF
 4601              	.LVL526:
 4602 04db 0F1F4400 		.p2align 4,,10
 4602      00
 4603              		.p2align 3
 4604              	.L552:
 4605              	.LBE959:
 4606              	.LBE958:
 4607              	.LBB960:
 4608              	.LBB961:
 4609 04e0 89C2     		movl	%eax, %edx
 4610 04e2 89C6     		movl	%eax, %esi
 4611 04e4 4889DF   		movq	%rbx, %rdi
 4612 04e7 E8000000 		call	_ZN9Fl_Input_8positionEii
 4612      00
 4613              	.LVL527:
 4614 04ec E9D3FBFF 		jmp	.L529
 4614      FF
 4615              	.LVL528:
 4616              		.p2align 4,,10
 4617 04f1 0F1F8000 		.p2align 3
 4617      000000
 4618              	.L476:
 4619              	.LBE961:
 4620              	.LBE960:
 619:fltk-1.3.4-1/src/Fl_Input.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 4621              		.loc 2 619 0
 4622 04f8 8B939400 		movl	148(%rbx), %edx
 4622      0000
 4623 04fe 8BB39000 		movl	144(%rbx), %esi
 4623      0000
 4624              	.LVL529:
 4625 0504 4889DF   		movq	%rbx, %rdi
 4626 0507 E8000000 		call	_ZN9Fl_Input_8positionEii
 4626      00
 4627              	.LVL530:
 620:fltk-1.3.4-1/src/Fl_Input.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4628              		.loc 2 620 0
 4629 050c E905FCFF 		jmp	.L483
 4629      FF
 4630              	.LVL531:
 4631              		.p2align 4,,10
 4632 0511 0F1F8000 		.p2align 3
 4632      000000
 4633              	.L479:
 616:fltk-1.3.4-1/src/Fl_Input.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4634              		.loc 2 616 0
 4635 0518 8BB78800 		movl	136(%rdi), %esi
 4635      0000
 4636              	.LVL532:
 4637 051e 31D2     		xorl	%edx, %edx
 4638 0520 E8000000 		call	_ZN9Fl_Input_8positionEii
 4638      00
 4639              	.LVL533:
 617:fltk-1.3.4-1/src/Fl_Input.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 4640              		.loc 2 617 0
 4641 0525 E9ECFBFF 		jmp	.L483
 4641      FF
 4642              	.LVL534:
 4643 052a 660F1F44 		.p2align 4,,10
 4643      0000
 4644              		.p2align 3
 4645              	.L477:
 613:fltk-1.3.4-1/src/Fl_Input.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 4646              		.loc 2 613 0
 4647 0530 8BB78800 		movl	136(%rdi), %esi
 4647      0000
 4648              	.LVL535:
 4649 0536 E8000000 		call	_ZNK9Fl_Input_10line_startEi
 4649      00
 4650              	.LVL536:
 4651 053b 31D2     		xorl	%edx, %edx
 4652 053d 89C6     		movl	%eax, %esi
 4653 053f 4889DF   		movq	%rbx, %rdi
 4654 0542 E8000000 		call	_ZN9Fl_Input_16up_down_positionEii
 4654      00
 4655              	.LVL537:
 614:fltk-1.3.4-1/src/Fl_Input.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4656              		.loc 2 614 0
 4657 0547 E9CAFBFF 		jmp	.L483
 4657      FF
 4658              	.LVL538:
 4659 054c 0F1F4000 		.p2align 4,,10
 4660              		.p2align 3
 4661              	.L481:
 4662              	.LBB962:
 4663              	.LBB963:
 298:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 4664              		.loc 10 298 0
 4665 0550 31D2     		xorl	%edx, %edx
 4666 0552 31F6     		xorl	%esi, %esi
 4667              	.LVL539:
 4668 0554 E8000000 		call	_ZN9Fl_Input_8positionEii
 4668      00
 4669              	.LVL540:
 4670 0559 E9B8FBFF 		jmp	.L483
 4670      FF
 4671              	.LVL541:
 4672 055e 6690     		.p2align 4,,10
 4673              		.p2align 3
 4674              	.L545:
 4675              	.LBE963:
 4676              	.LBE962:
 4677              	.LBB964:
 4678              	.LBB932:
 4679              	.LBB933:
 759:fltk-1.3.4-1/src/Fl_Input.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 4680              		.loc 2 759 0
 4681 0560 8B350000 		movl	_ZZN8Fl_Input6handleEiE13dnd_save_mark(%rip), %esi
 4681      0000
 4682              	.LVL542:
 4683 0566 8B150000 		movl	_ZZN8Fl_Input6handleEiE17dnd_save_position(%rip), %edx
 4683      0000
 4684 056c 8BAB9000 		movl	144(%rbx), %ebp
 4684      0000
 4685              	.LVL543:
 4686 0572 39D6     		cmpl	%edx, %esi
 4687 0574 7E12     		jle	.L506
 4688              	.LVL544:
 4689 0576 89D0     		movl	%edx, %eax
 4690              	.LVL545:
 4691              	.LBB934:
 761:fltk-1.3.4-1/src/Fl_Input.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 4692              		.loc 2 761 0
 4693 0578 89150000 		movl	%edx, _ZZN8Fl_Input6handleEiE13dnd_save_mark(%rip)
 4693      0000
 762:fltk-1.3.4-1/src/Fl_Input.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4694              		.loc 2 762 0
 4695 057e 89350000 		movl	%esi, _ZZN8Fl_Input6handleEiE17dnd_save_position(%rip)
 4695      0000
 4696              	.LBE934:
 4697 0584 89F2     		movl	%esi, %edx
 4698 0586 89C6     		movl	%eax, %esi
 4699              	.LVL546:
 4700              	.L506:
 4701              	.LBE933:
 764:fltk-1.3.4-1/src/Fl_Input.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4702              		.loc 2 764 0
 4703 0588 4531C0   		xorl	%r8d, %r8d
 4704 058b 31C9     		xorl	%ecx, %ecx
 4705 058d 4889DF   		movq	%rbx, %rdi
 4706 0590 E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 4706      00
 4707              	.LVL547:
 765:fltk-1.3.4-1/src/Fl_Input.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 4708              		.loc 2 765 0
 4709 0595 8B050000 		movl	_ZZN8Fl_Input6handleEiE17dnd_save_position(%rip), %eax
 4709      0000
 4710 059b 39E8     		cmpl	%ebp, %eax
 4711 059d 7D79     		jge	.L507
 765:fltk-1.3.4-1/src/Fl_Input.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 4712              		.loc 2 765 0 is_stmt 0 discriminator 1
 4713 059f 2B050000 		subl	_ZZN8Fl_Input6handleEiE13dnd_save_mark(%rip), %eax
 4713      0000
 4714 05a5 89EE     		movl	%ebp, %esi
 4715              	.LBB935:
 4716              	.LBB936:
 298:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 4717              		.loc 10 298 0 is_stmt 1 discriminator 1
 4718 05a7 4889DF   		movq	%rbx, %rdi
 4719              	.LBE936:
 4720              	.LBE935:
 765:fltk-1.3.4-1/src/Fl_Input.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 4721              		.loc 2 765 0 discriminator 1
 4722 05aa 29C6     		subl	%eax, %esi
 4723              	.LVL548:
 4724              	.LBB938:
 4725              	.LBB937:
 298:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 4726              		.loc 10 298 0 discriminator 1
 4727 05ac 89F2     		movl	%esi, %edx
 4728 05ae E8000000 		call	_ZN9Fl_Input_8positionEii
 4728      00
 4729              	.LVL549:
 4730 05b3 E948FCFF 		jmp	.L508
 4730      FF
 4731              	.LVL550:
 4732 05b8 0F1F8400 		.p2align 4,,10
 4732      00000000 
 4733              		.p2align 3
 4734              	.L547:
 4735              	.LBE937:
 4736              	.LBE938:
 4737              	.LBE932:
 4738              	.LBE964:
 695:fltk-1.3.4-1/src/Fl_Input.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 4739              		.loc 2 695 0
 4740 05c0 31F6     		xorl	%esi, %esi
 4741              	.LVL551:
 4742              	.LBB965:
 4743              	.LBB966:
 668:fltk-1.3.4-1/FL/Fl.H ****   /**
 4744              		.loc 11 668 0
 4745 05c2 C7050000 		movl	$0, _ZN2Fl10e_is_clickE(%rip)
 4745      00000000 
 4745      0000
 4746              	.LVL552:
 4747              	.LBE966:
 4748              	.LBE965:
 695:fltk-1.3.4-1/src/Fl_Input.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 4749              		.loc 2 695 0
 4750 05cc E8000000 		call	_ZN2Fl5pasteER9Fl_Widgeti
 4750      00
 4751              	.LVL553:
 4752 05d1 E9C7FCFF 		jmp	.L499
 4752      FF
 4753 05d6 662E0F1F 		.p2align 4,,10
 4753      84000000 
 4753      0000
 4754              		.p2align 3
 4755              	.L550:
 642:fltk-1.3.4-1/src/Fl_Input.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 4756              		.loc 2 642 0 discriminator 1
 4757 05e0 4889DF   		movq	%rbx, %rdi
 4758 05e3 E8000000 		call	_ZNK9Fl_Widget6windowEv
 4758      00
 4759              	.LVL554:
 4760 05e8 4885C0   		testq	%rax, %rax
 4761 05eb 0F8457FD 		je	.L512
 4761      FFFF
 642:fltk-1.3.4-1/src/Fl_Input.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 4762              		.loc 2 642 0 is_stmt 0 discriminator 3
 4763 05f1 483B1D00 		cmpq	_ZN2Fl11belowmouse_E(%rip), %rbx
 4763      000000
 4764 05f8 0F854AFD 		jne	.L512
 4764      FFFF
 643:fltk-1.3.4-1/src/Fl_Input.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 4765              		.loc 2 643 0 is_stmt 1
 4766 05fe 4889DF   		movq	%rbx, %rdi
 4767 0601 E8000000 		call	_ZNK9Fl_Widget6windowEv
 4767      00
 4768              	.LVL555:
 4769 0606 BEFF0000 		movl	$255, %esi
 4769      00
 4770 060b 4889C7   		movq	%rax, %rdi
 4771 060e E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 4771      00
 4772              	.LVL556:
 4773 0613 E930FDFF 		jmp	.L512
 4773      FF
 4774              	.LVL557:
 4775              	.L507:
 4776              	.LBB967:
 4777              	.LBB941:
 4778              	.LBB939:
 4779              	.LBB940:
 298:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 4780              		.loc 10 298 0
 4781 0618 89EA     		movl	%ebp, %edx
 4782 061a 89EE     		movl	%ebp, %esi
 4783 061c 4889DF   		movq	%rbx, %rdi
 4784 061f E8000000 		call	_ZN9Fl_Input_8positionEii
 4784      00
 4785              	.LVL558:
 4786 0624 E9D7FBFF 		jmp	.L508
 4786      FF
 4787              	.LVL559:
 4788              	.L551:
 4789              	.LBE940:
 4790              	.LBE939:
 4791              	.LBE941:
 4792              	.LBE967:
 4793              	.LBB968:
 4794              	.LBB950:
 656:fltk-1.3.4-1/src/Fl_Input.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 4795              		.loc 2 656 0
 4796 0629 F6050000 		testb	$1, _ZN2Fl7e_stateE+2(%rip)
 4796      000001
 4797 0630 0F8517FE 		jne	.L492
 4797      FFFF
 4798              	.LVL560:
 656:fltk-1.3.4-1/src/Fl_Input.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 4799              		.loc 2 656 0 is_stmt 0 discriminator 3
 4800 0636 0FB6436C 		movzbl	108(%rbx), %eax
 4801 063a 83E007   		andl	$7, %eax
 4802 063d 3C05     		cmpb	$5, %al
 4803 063f 0F8408FE 		je	.L492
 4803      FFFF
 4804              	.LVL561:
 657:fltk-1.3.4-1/src/Fl_Input.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 4805              		.loc 2 657 0 is_stmt 1 discriminator 5
 4806 0645 8B050000 		movl	_ZZN8Fl_Input6handleEiE6newpos(%rip), %eax
 4806      0000
 656:fltk-1.3.4-1/src/Fl_Input.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 4807              		.loc 2 656 0 discriminator 5
 4808 064b 3B839400 		cmpl	148(%rbx), %eax
 4808      0000
 4809 0651 7C17     		jl	.L493
 4810              	.LVL562:
 657:fltk-1.3.4-1/src/Fl_Input.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 4811              		.loc 2 657 0
 4812 0653 3B839000 		cmpl	144(%rbx), %eax
 4812      0000
 4813 0659 0F8DEEFD 		jge	.L492
 4813      FFFF
 4814              	.LVL563:
 4815              	.L494:
 660:fltk-1.3.4-1/src/Fl_Input.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 4816              		.loc 2 660 0
 4817 065f 89050000 		movl	%eax, _ZZN8Fl_Input6handleEiE10drag_start(%rip)
 4817      0000
 661:fltk-1.3.4-1/src/Fl_Input.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 4818              		.loc 2 661 0
 4819 0665 E95AFAFF 		jmp	.L529
 4819      FF
 4820              	.LVL564:
 4821              	.L493:
 658:fltk-1.3.4-1/src/Fl_Input.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 4822              		.loc 2 658 0 discriminator 1
 4823 066a 3B839000 		cmpl	144(%rbx), %eax
 4823      0000
 4824 0670 7DED     		jge	.L494
 4825 0672 E9D6FDFF 		jmp	.L492
 4825      FF
 4826              	.LBE950:
 4827              	.LBE968:
 4828              	.LBE972:
 4829              	.LBE978:
 4830              		.cfi_endproc
 4831              	.LFE549:
 4833              		.section	.text.unlikely._ZN8Fl_Input6handleEi
 4834              	.LCOLDE50:
 4835              		.section	.text._ZN8Fl_Input6handleEi
 4836              	.LHOTE50:
 4837              		.section	.text.unlikely._ZN15Fl_Secret_Input6handleEi,"ax",@progbits
 4838              		.align 2
 4839              	.LCOLDB51:
 4840              		.section	.text._ZN15Fl_Secret_Input6handleEi,"ax",@progbits
 4841              	.LHOTB51:
 4842              		.align 2
 4843              		.p2align 4,,15
 4844              		.globl	_ZN15Fl_Secret_Input6handleEi
 4846              	_ZN15Fl_Secret_Input6handleEi:
 4847              	.LFB579:
 792:fltk-1.3.4-1/src/Fl_Input.cxx ****  775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callba
 793:fltk-1.3.4-1/src/Fl_Input.cxx ****  776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 794:fltk-1.3.4-1/src/Fl_Input.cxx ****  777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 795:fltk-1.3.4-1/src/Fl_Input.cxx ****  778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 796:fltk-1.3.4-1/src/Fl_Input.cxx ****  779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 797:fltk-1.3.4-1/src/Fl_Input.cxx ****  780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 798:fltk-1.3.4-1/src/Fl_Input.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 799:fltk-1.3.4-1/src/Fl_Input.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 800:fltk-1.3.4-1/src/Fl_Input.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 801:fltk-1.3.4-1/src/Fl_Input.cxx ****  784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 802:fltk-1.3.4-1/src/Fl_Input.cxx ****  785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 803:fltk-1.3.4-1/src/Fl_Input.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 804:fltk-1.3.4-1/src/Fl_Input.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 805:fltk-1.3.4-1/src/Fl_Input.cxx ****  788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 806:fltk-1.3.4-1/src/Fl_Input.cxx ****  789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 807:fltk-1.3.4-1/src/Fl_Input.cxx ****  790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 808:fltk-1.3.4-1/src/Fl_Input.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 809:fltk-1.3.4-1/src/Fl_Input.cxx ****  792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 810:fltk-1.3.4-1/src/Fl_Input.cxx ****  793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or 
 811:fltk-1.3.4-1/src/Fl_Input.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 812:fltk-1.3.4-1/src/Fl_Input.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 813:fltk-1.3.4-1/src/Fl_Input.cxx ****  796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 814:fltk-1.3.4-1/src/Fl_Input.cxx ****  797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 815:fltk-1.3.4-1/src/Fl_Input.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 816:fltk-1.3.4-1/src/Fl_Input.cxx ****  799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or ch
 817:fltk-1.3.4-1/src/Fl_Input.cxx ****  800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 818:fltk-1.3.4-1/src/Fl_Input.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 819:fltk-1.3.4-1/src/Fl_Input.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820:fltk-1.3.4-1/src/Fl_Input.cxx ****  803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 821:fltk-1.3.4-1/src/Fl_Input.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 822:fltk-1.3.4-1/src/Fl_Input.cxx ****  805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 823:fltk-1.3.4-1/src/Fl_Input.cxx ****  806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by
 824:fltk-1.3.4-1/src/Fl_Input.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 825:fltk-1.3.4-1/src/Fl_Input.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 826:fltk-1.3.4-1/src/Fl_Input.cxx ****  809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 827:fltk-1.3.4-1/src/Fl_Input.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 828:fltk-1.3.4-1/src/Fl_Input.cxx ****  811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 829:fltk-1.3.4-1/src/Fl_Input.cxx ****  812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 830:fltk-1.3.4-1/src/Fl_Input.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 831:fltk-1.3.4-1/src/Fl_Input.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 832:fltk-1.3.4-1/src/Fl_Input.cxx ****  815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that
 833:fltk-1.3.4-1/src/Fl_Input.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 834:fltk-1.3.4-1/src/Fl_Input.cxx ****  817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 835:fltk-1.3.4-1/src/Fl_Input.cxx ****  818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_fo
 836:fltk-1.3.4-1/src/Fl_Input.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 837:fltk-1.3.4-1/src/Fl_Input.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 838:fltk-1.3.4-1/src/Fl_Input.cxx ****  821:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 839:fltk-1.3.4-1/src/Fl_Input.cxx ****  822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 840:fltk-1.3.4-1/src/Fl_Input.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 841:fltk-1.3.4-1/src/Fl_Input.cxx ****  824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focu
 4848              		.loc 2 841 0
 4849              		.cfi_startproc
 4850              	.LVL565:
 842:fltk-1.3.4-1/src/Fl_Input.cxx ****  825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4851              		.loc 2 842 0
 4852 0000 E9000000 		jmp	_ZN8Fl_Input6handleEi
 4852      00
 4853              	.LVL566:
 4854              		.cfi_endproc
 4855              	.LFE579:
 4857              		.section	.text.unlikely._ZN15Fl_Secret_Input6handleEi
 4858              	.LCOLDE51:
 4859              		.section	.text._ZN15Fl_Secret_Input6handleEi
 4860              	.LHOTE51:
 4861              		.section	.text.unlikely._ZN8Fl_InputC2EiiiiPKc,"ax",@progbits
 4862              		.align 2
 4863              	.LCOLDB52:
 4864              		.section	.text._ZN8Fl_InputC2EiiiiPKc,"ax",@progbits
 4865              	.LHOTB52:
 4866              		.align 2
 4867              		.p2align 4,,15
 4868              		.globl	_ZN8Fl_InputC2EiiiiPKc
 4870              	_ZN8Fl_InputC2EiiiiPKc:
 4871              	.LFB551:
 797:fltk-1.3.4-1/src/Fl_Input.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 4872              		.loc 2 797 0
 4873              		.cfi_startproc
 4874              	.LVL567:
 4875 0000 53       		pushq	%rbx
 4876              		.cfi_def_cfa_offset 16
 4877              		.cfi_offset 3, -16
 797:fltk-1.3.4-1/src/Fl_Input.cxx ****  781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 4878              		.loc 2 797 0
 4879 0001 4889FB   		movq	%rdi, %rbx
 4880              	.LBB979:
 798:fltk-1.3.4-1/src/Fl_Input.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4881              		.loc 2 798 0
 4882 0004 E8000000 		call	_ZN9Fl_Input_C2EiiiiPKc
 4882      00
 4883              	.LVL568:
 4884 0009 48C70300 		movq	$_ZTV8Fl_Input+16, (%rbx)
 4884      000000
 4885              	.LBE979:
 799:fltk-1.3.4-1/src/Fl_Input.cxx ****  783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 4886              		.loc 2 799 0
 4887 0010 5B       		popq	%rbx
 4888              		.cfi_def_cfa_offset 8
 4889              	.LVL569:
 4890 0011 C3       		ret
 4891              		.cfi_endproc
 4892              	.LFE551:
 4894              		.section	.text.unlikely._ZN8Fl_InputC2EiiiiPKc
 4895              	.LCOLDE52:
 4896              		.section	.text._ZN8Fl_InputC2EiiiiPKc
 4897              	.LHOTE52:
 4898              		.globl	_ZN8Fl_InputC1EiiiiPKc
 4899              		.set	_ZN8Fl_InputC1EiiiiPKc,_ZN8Fl_InputC2EiiiiPKc
 4900              		.section	.text.unlikely._ZN14Fl_Float_InputC2EiiiiPKc,"ax",@progbits
 4901              		.align 2
 4902              	.LCOLDB53:
 4903              		.section	.text._ZN14Fl_Float_InputC2EiiiiPKc,"ax",@progbits
 4904              	.LHOTB53:
 4905              		.align 2
 4906              		.p2align 4,,15
 4907              		.globl	_ZN14Fl_Float_InputC2EiiiiPKc
 4909              	_ZN14Fl_Float_InputC2EiiiiPKc:
 4910              	.LFB558:
 802:fltk-1.3.4-1/src/Fl_Input.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 4911              		.loc 2 802 0
 4912              		.cfi_startproc
 4913              	.LVL570:
 4914 0000 53       		pushq	%rbx
 4915              		.cfi_def_cfa_offset 16
 4916              		.cfi_offset 3, -16
 802:fltk-1.3.4-1/src/Fl_Input.cxx ****  786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 4917              		.loc 2 802 0
 4918 0001 4889FB   		movq	%rdi, %rbx
 4919              	.LBB980:
 4920              	.LBB981:
 4921              	.LBB982:
 798:fltk-1.3.4-1/src/Fl_Input.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4922              		.loc 2 798 0
 4923 0004 E8000000 		call	_ZN9Fl_Input_C2EiiiiPKc
 4923      00
 4924              	.LVL571:
 4925              	.LBE982:
 4926              	.LBE981:
 803:fltk-1.3.4-1/src/Fl_Input.cxx ****  787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4927              		.loc 2 803 0
 4928 0009 48C70300 		movq	$_ZTV14Fl_Float_Input+16, (%rbx)
 4928      000000
 4929              	.LVL572:
 4930              	.LBB983:
 4931              	.LBB984:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4932              		.loc 1 279 0
 4933 0010 C6436C01 		movb	$1, 108(%rbx)
 4934              	.LVL573:
 4935              	.LBE984:
 4936              	.LBE983:
 4937              	.LBB985:
 4938              	.LBB986:
 151:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 4939              		.loc 1 151 0
 4940 0014 816360FF 		andl	$-524289, 96(%rbx)
 4940      FFF7FF
 4941              	.LVL574:
 4942              	.LBE986:
 4943              	.LBE985:
 4944              	.LBE980:
 807:fltk-1.3.4-1/src/Fl_Input.cxx ****  791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 4945              		.loc 2 807 0
 4946 001b 5B       		popq	%rbx
 4947              		.cfi_def_cfa_offset 8
 4948              	.LVL575:
 4949 001c C3       		ret
 4950              		.cfi_endproc
 4951              	.LFE558:
 4953              		.section	.text.unlikely._ZN14Fl_Float_InputC2EiiiiPKc
 4954              	.LCOLDE53:
 4955              		.section	.text._ZN14Fl_Float_InputC2EiiiiPKc
 4956              	.LHOTE53:
 4957              		.globl	_ZN14Fl_Float_InputC1EiiiiPKc
 4958              		.set	_ZN14Fl_Float_InputC1EiiiiPKc,_ZN14Fl_Float_InputC2EiiiiPKc
 4959              		.section	.text.unlikely._ZN12Fl_Int_InputC2EiiiiPKc,"ax",@progbits
 4960              		.align 2
 4961              	.LCOLDB54:
 4962              		.section	.text._ZN12Fl_Int_InputC2EiiiiPKc,"ax",@progbits
 4963              	.LHOTB54:
 4964              		.align 2
 4965              		.p2align 4,,15
 4966              		.globl	_ZN12Fl_Int_InputC2EiiiiPKc
 4968              	_ZN12Fl_Int_InputC2EiiiiPKc:
 4969              	.LFB561:
 810:fltk-1.3.4-1/src/Fl_Input.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 4970              		.loc 2 810 0
 4971              		.cfi_startproc
 4972              	.LVL576:
 4973 0000 53       		pushq	%rbx
 4974              		.cfi_def_cfa_offset 16
 4975              		.cfi_offset 3, -16
 810:fltk-1.3.4-1/src/Fl_Input.cxx ****  794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases yo
 4976              		.loc 2 810 0
 4977 0001 4889FB   		movq	%rdi, %rbx
 4978              	.LBB987:
 4979              	.LBB988:
 4980              	.LBB989:
 798:fltk-1.3.4-1/src/Fl_Input.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4981              		.loc 2 798 0
 4982 0004 E8000000 		call	_ZN9Fl_Input_C2EiiiiPKc
 4982      00
 4983              	.LVL577:
 4984              	.LBE989:
 4985              	.LBE988:
 811:fltk-1.3.4-1/src/Fl_Input.cxx ****  795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 4986              		.loc 2 811 0
 4987 0009 48C70300 		movq	$_ZTV12Fl_Int_Input+16, (%rbx)
 4987      000000
 4988              	.LVL578:
 4989              	.LBB990:
 4990              	.LBB991:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4991              		.loc 1 279 0
 4992 0010 C6436C02 		movb	$2, 108(%rbx)
 4993              	.LVL579:
 4994              	.LBE991:
 4995              	.LBE990:
 4996              	.LBB992:
 4997              	.LBB993:
 151:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 4998              		.loc 1 151 0
 4999 0014 816360FF 		andl	$-524289, 96(%rbx)
 4999      FFF7FF
 5000              	.LVL580:
 5001              	.LBE993:
 5002              	.LBE992:
 5003              	.LBE987:
 814:fltk-1.3.4-1/src/Fl_Input.cxx ****  798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5004              		.loc 2 814 0
 5005 001b 5B       		popq	%rbx
 5006              		.cfi_def_cfa_offset 8
 5007              	.LVL581:
 5008 001c C3       		ret
 5009              		.cfi_endproc
 5010              	.LFE561:
 5012              		.section	.text.unlikely._ZN12Fl_Int_InputC2EiiiiPKc
 5013              	.LCOLDE54:
 5014              		.section	.text._ZN12Fl_Int_InputC2EiiiiPKc
 5015              	.LHOTE54:
 5016              		.globl	_ZN12Fl_Int_InputC1EiiiiPKc
 5017              		.set	_ZN12Fl_Int_InputC1EiiiiPKc,_ZN12Fl_Int_InputC2EiiiiPKc
 5018              		.section	.text.unlikely._ZN18Fl_Multiline_InputC2EiiiiPKc,"ax",@progbits
 5019              		.align 2
 5020              	.LCOLDB55:
 5021              		.section	.text._ZN18Fl_Multiline_InputC2EiiiiPKc,"ax",@progbits
 5022              	.LHOTB55:
 5023              		.align 2
 5024              		.p2align 4,,15
 5025              		.globl	_ZN18Fl_Multiline_InputC2EiiiiPKc
 5027              	_ZN18Fl_Multiline_InputC2EiiiiPKc:
 5028              	.LFB564:
 817:fltk-1.3.4-1/src/Fl_Input.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 5029              		.loc 2 817 0
 5030              		.cfi_startproc
 5031              	.LVL582:
 5032 0000 53       		pushq	%rbx
 5033              		.cfi_def_cfa_offset 16
 5034              		.cfi_offset 3, -16
 817:fltk-1.3.4-1/src/Fl_Input.cxx ****  801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 5035              		.loc 2 817 0
 5036 0001 4889FB   		movq	%rdi, %rbx
 5037              	.LBB994:
 5038              	.LBB995:
 5039              	.LBB996:
 798:fltk-1.3.4-1/src/Fl_Input.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5040              		.loc 2 798 0
 5041 0004 E8000000 		call	_ZN9Fl_Input_C2EiiiiPKc
 5041      00
 5042              	.LVL583:
 5043              	.LBE996:
 5044              	.LBE995:
 818:fltk-1.3.4-1/src/Fl_Input.cxx ****  802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5045              		.loc 2 818 0
 5046 0009 48C70300 		movq	$_ZTV18Fl_Multiline_Input+16, (%rbx)
 5046      000000
 5047              	.LVL584:
 5048              	.LBB997:
 5049              	.LBB998:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5050              		.loc 1 279 0
 5051 0010 C6436C04 		movb	$4, 108(%rbx)
 5052              	.LVL585:
 5053              	.LBE998:
 5054              	.LBE997:
 5055              	.LBE994:
 820:fltk-1.3.4-1/src/Fl_Input.cxx ****  804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5056              		.loc 2 820 0
 5057 0014 5B       		popq	%rbx
 5058              		.cfi_def_cfa_offset 8
 5059              	.LVL586:
 5060 0015 C3       		ret
 5061              		.cfi_endproc
 5062              	.LFE564:
 5064              		.section	.text.unlikely._ZN18Fl_Multiline_InputC2EiiiiPKc
 5065              	.LCOLDE55:
 5066              		.section	.text._ZN18Fl_Multiline_InputC2EiiiiPKc
 5067              	.LHOTE55:
 5068              		.globl	_ZN18Fl_Multiline_InputC1EiiiiPKc
 5069              		.set	_ZN18Fl_Multiline_InputC1EiiiiPKc,_ZN18Fl_Multiline_InputC2EiiiiPKc
 5070              		.section	.text.unlikely._ZN9Fl_OutputC2EiiiiPKc,"ax",@progbits
 5071              		.align 2
 5072              	.LCOLDB56:
 5073              		.section	.text._ZN9Fl_OutputC2EiiiiPKc,"ax",@progbits
 5074              	.LHOTB56:
 5075              		.align 2
 5076              		.p2align 4,,15
 5077              		.globl	_ZN9Fl_OutputC2EiiiiPKc
 5079              	_ZN9Fl_OutputC2EiiiiPKc:
 5080              	.LFB567:
 823:fltk-1.3.4-1/src/Fl_Input.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 5081              		.loc 2 823 0
 5082              		.cfi_startproc
 5083              	.LVL587:
 5084 0000 53       		pushq	%rbx
 5085              		.cfi_def_cfa_offset 16
 5086              		.cfi_offset 3, -16
 823:fltk-1.3.4-1/src/Fl_Input.cxx ****  807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setti
 5087              		.loc 2 823 0
 5088 0001 4889FB   		movq	%rdi, %rbx
 5089              	.LBB999:
 5090              	.LBB1000:
 5091              	.LBB1001:
 798:fltk-1.3.4-1/src/Fl_Input.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5092              		.loc 2 798 0
 5093 0004 E8000000 		call	_ZN9Fl_Input_C2EiiiiPKc
 5093      00
 5094              	.LVL588:
 5095              	.LBE1001:
 5096              	.LBE1000:
 824:fltk-1.3.4-1/src/Fl_Input.cxx ****  808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method 
 5097              		.loc 2 824 0
 5098 0009 48C70300 		movq	$_ZTV9Fl_Output+16, (%rbx)
 5098      000000
 5099              	.LVL589:
 5100              	.LBB1002:
 5101              	.LBB1003:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5102              		.loc 1 279 0
 5103 0010 C6436C08 		movb	$8, 108(%rbx)
 5104              	.LVL590:
 5105              	.LBE1003:
 5106              	.LBE1002:
 5107              	.LBE999:
 826:fltk-1.3.4-1/src/Fl_Input.cxx ****  810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 5108              		.loc 2 826 0
 5109 0014 5B       		popq	%rbx
 5110              		.cfi_def_cfa_offset 8
 5111              	.LVL591:
 5112 0015 C3       		ret
 5113              		.cfi_endproc
 5114              	.LFE567:
 5116              		.section	.text.unlikely._ZN9Fl_OutputC2EiiiiPKc
 5117              	.LCOLDE56:
 5118              		.section	.text._ZN9Fl_OutputC2EiiiiPKc
 5119              	.LHOTE56:
 5120              		.globl	_ZN9Fl_OutputC1EiiiiPKc
 5121              		.set	_ZN9Fl_OutputC1EiiiiPKc,_ZN9Fl_OutputC2EiiiiPKc
 5122              		.section	.text.unlikely._ZN19Fl_Multiline_OutputC2EiiiiPKc,"ax",@progbits
 5123              		.align 2
 5124              	.LCOLDB57:
 5125              		.section	.text._ZN19Fl_Multiline_OutputC2EiiiiPKc,"ax",@progbits
 5126              	.LHOTB57:
 5127              		.align 2
 5128              		.p2align 4,,15
 5129              		.globl	_ZN19Fl_Multiline_OutputC2EiiiiPKc
 5131              	_ZN19Fl_Multiline_OutputC2EiiiiPKc:
 5132              	.LFB574:
 829:fltk-1.3.4-1/src/Fl_Input.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5133              		.loc 2 829 0
 5134              		.cfi_startproc
 5135              	.LVL592:
 5136 0000 53       		pushq	%rbx
 5137              		.cfi_def_cfa_offset 16
 5138              		.cfi_offset 3, -16
 829:fltk-1.3.4-1/src/Fl_Input.cxx ****  813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5139              		.loc 2 829 0
 5140 0001 4889FB   		movq	%rdi, %rbx
 5141              	.LBB1004:
 5142              	.LBB1005:
 5143              	.LBB1006:
 5144              	.LBB1007:
 798:fltk-1.3.4-1/src/Fl_Input.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5145              		.loc 2 798 0
 5146 0004 E8000000 		call	_ZN9Fl_Input_C2EiiiiPKc
 5146      00
 5147              	.LVL593:
 5148              	.LBE1007:
 5149              	.LBE1006:
 5150              	.LBE1005:
 830:fltk-1.3.4-1/src/Fl_Input.cxx ****  814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 5151              		.loc 2 830 0
 5152 0009 48C70300 		movq	$_ZTV19Fl_Multiline_Output+16, (%rbx)
 5152      000000
 5153              	.LVL594:
 5154              	.LBB1008:
 5155              	.LBB1009:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5156              		.loc 1 279 0
 5157 0010 C6436C0C 		movb	$12, 108(%rbx)
 5158              	.LVL595:
 5159              	.LBE1009:
 5160              	.LBE1008:
 5161              	.LBE1004:
 832:fltk-1.3.4-1/src/Fl_Input.cxx ****  816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focu
 5162              		.loc 2 832 0
 5163 0014 5B       		popq	%rbx
 5164              		.cfi_def_cfa_offset 8
 5165              	.LVL596:
 5166 0015 C3       		ret
 5167              		.cfi_endproc
 5168              	.LFE574:
 5170              		.section	.text.unlikely._ZN19Fl_Multiline_OutputC2EiiiiPKc
 5171              	.LCOLDE57:
 5172              		.section	.text._ZN19Fl_Multiline_OutputC2EiiiiPKc
 5173              	.LHOTE57:
 5174              		.globl	_ZN19Fl_Multiline_OutputC1EiiiiPKc
 5175              		.set	_ZN19Fl_Multiline_OutputC1EiiiiPKc,_ZN19Fl_Multiline_OutputC2EiiiiPKc
 5176              		.section	.text.unlikely._ZN15Fl_Secret_InputC2EiiiiPKc,"ax",@progbits
 5177              		.align 2
 5178              	.LCOLDB58:
 5179              		.section	.text._ZN15Fl_Secret_InputC2EiiiiPKc,"ax",@progbits
 5180              	.LHOTB58:
 5181              		.align 2
 5182              		.p2align 4,,15
 5183              		.globl	_ZN15Fl_Secret_InputC2EiiiiPKc
 5185              	_ZN15Fl_Secret_InputC2EiiiiPKc:
 5186              	.LFB577:
 835:fltk-1.3.4-1/src/Fl_Input.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5187              		.loc 2 835 0
 5188              		.cfi_startproc
 5189              	.LVL597:
 5190 0000 53       		pushq	%rbx
 5191              		.cfi_def_cfa_offset 16
 5192              		.cfi_offset 3, -16
 835:fltk-1.3.4-1/src/Fl_Input.cxx ****  819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5193              		.loc 2 835 0
 5194 0001 4889FB   		movq	%rdi, %rbx
 5195              	.LBB1010:
 5196              	.LBB1011:
 5197              	.LBB1012:
 798:fltk-1.3.4-1/src/Fl_Input.cxx ****  782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5198              		.loc 2 798 0
 5199 0004 E8000000 		call	_ZN9Fl_Input_C2EiiiiPKc
 5199      00
 5200              	.LVL598:
 5201              	.LBE1012:
 5202              	.LBE1011:
 836:fltk-1.3.4-1/src/Fl_Input.cxx ****  820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 5203              		.loc 2 836 0
 5204 0009 48C70300 		movq	$_ZTV15Fl_Secret_Input+16, (%rbx)
 5204      000000
 5205              	.LVL599:
 5206              	.LBB1013:
 5207              	.LBB1014:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5208              		.loc 1 279 0
 5209 0010 C6436C05 		movb	$5, 108(%rbx)
 5210              	.LVL600:
 5211              	.LBE1014:
 5212              	.LBE1013:
 5213              	.LBB1015:
 5214              	.LBB1016:
 151:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 5215              		.loc 1 151 0
 5216 0014 816360FF 		andl	$-524289, 96(%rbx)
 5216      FFF7FF
 5217              	.LVL601:
 5218              	.LBE1016:
 5219              	.LBE1015:
 5220              	.LBE1010:
 839:fltk-1.3.4-1/src/Fl_Input.cxx ****  823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus nav
 5221              		.loc 2 839 0
 5222 001b 5B       		popq	%rbx
 5223              		.cfi_def_cfa_offset 8
 5224              	.LVL602:
 5225 001c C3       		ret
 5226              		.cfi_endproc
 5227              	.LFE577:
 5229              		.section	.text.unlikely._ZN15Fl_Secret_InputC2EiiiiPKc
 5230              	.LCOLDE58:
 5231              		.section	.text._ZN15Fl_Secret_InputC2EiiiiPKc
 5232              	.LHOTE58:
 5233              		.globl	_ZN15Fl_Secret_InputC1EiiiiPKc
 5234              		.set	_ZN15Fl_Secret_InputC1EiiiiPKc,_ZN15Fl_Secret_InputC2EiiiiPKc
 5235              		.section	.bss._ZZN8Fl_Input6handleEiE14dnd_save_focus,"aw",@nobits
 5236              		.align 8
 5239              	_ZZN8Fl_Input6handleEiE14dnd_save_focus:
 5240 0000 00000000 		.zero	8
 5240      00000000 
 5241              		.section	.bss._ZZN8Fl_Input6handleEiE13dnd_save_mark,"aw",@nobits
 5242              		.align 4
 5245              	_ZZN8Fl_Input6handleEiE13dnd_save_mark:
 5246 0000 00000000 		.zero	4
 5247              		.section	.bss._ZZN8Fl_Input6handleEiE17dnd_save_position,"aw",@nobits
 5248              		.align 4
 5251              	_ZZN8Fl_Input6handleEiE17dnd_save_position:
 5252 0000 00000000 		.zero	4
 5253              		.section	.data._ZZN8Fl_Input6handleEiE10drag_start,"aw",@progbits
 5254              		.align 4
 5257              	_ZZN8Fl_Input6handleEiE10drag_start:
 5258 0000 FFFFFFFF 		.long	-1
 5259              		.section	.bss._ZZN8Fl_Input6handleEiE6newpos,"aw",@nobits
 5260              		.align 4
 5263              	_ZZN8Fl_Input6handleEiE6newpos:
 5264 0000 00000000 		.zero	4
 5265              		.weak	_ZTS8Fl_Input
 5266              		.section	.rodata._ZTS8Fl_Input,"aG",@progbits,_ZTS8Fl_Input,comdat
 5267              		.align 8
 5270              	_ZTS8Fl_Input:
 5271 0000 38466C5F 		.string	"8Fl_Input"
 5271      496E7075 
 5271      7400
 5272              		.weak	_ZTI8Fl_Input
 5273              		.section	.rodata._ZTI8Fl_Input,"aG",@progbits,_ZTI8Fl_Input,comdat
 5274              		.align 8
 5277              	_ZTI8Fl_Input:
 5278 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5278      00000000 
 5279 0008 00000000 		.quad	_ZTS8Fl_Input
 5279      00000000 
 5280 0010 00000000 		.quad	_ZTI9Fl_Input_
 5280      00000000 
 5281              		.weak	_ZTS14Fl_Float_Input
 5282              		.section	.rodata._ZTS14Fl_Float_Input,"aG",@progbits,_ZTS14Fl_Float_Input,comdat
 5283              		.align 16
 5286              	_ZTS14Fl_Float_Input:
 5287 0000 3134466C 		.string	"14Fl_Float_Input"
 5287      5F466C6F 
 5287      61745F49 
 5287      6E707574 
 5287      00
 5288              		.weak	_ZTI14Fl_Float_Input
 5289              		.section	.rodata._ZTI14Fl_Float_Input,"aG",@progbits,_ZTI14Fl_Float_Input,comdat
 5290              		.align 8
 5293              	_ZTI14Fl_Float_Input:
 5294 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5294      00000000 
 5295 0008 00000000 		.quad	_ZTS14Fl_Float_Input
 5295      00000000 
 5296 0010 00000000 		.quad	_ZTI8Fl_Input
 5296      00000000 
 5297              		.weak	_ZTS12Fl_Int_Input
 5298              		.section	.rodata._ZTS12Fl_Int_Input,"aG",@progbits,_ZTS12Fl_Int_Input,comdat
 5299              		.align 8
 5302              	_ZTS12Fl_Int_Input:
 5303 0000 3132466C 		.string	"12Fl_Int_Input"
 5303      5F496E74 
 5303      5F496E70 
 5303      757400
 5304              		.weak	_ZTI12Fl_Int_Input
 5305              		.section	.rodata._ZTI12Fl_Int_Input,"aG",@progbits,_ZTI12Fl_Int_Input,comdat
 5306              		.align 8
 5309              	_ZTI12Fl_Int_Input:
 5310 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5310      00000000 
 5311 0008 00000000 		.quad	_ZTS12Fl_Int_Input
 5311      00000000 
 5312 0010 00000000 		.quad	_ZTI8Fl_Input
 5312      00000000 
 5313              		.weak	_ZTS18Fl_Multiline_Input
 5314              		.section	.rodata._ZTS18Fl_Multiline_Input,"aG",@progbits,_ZTS18Fl_Multiline_Input,comdat
 5315              		.align 16
 5318              	_ZTS18Fl_Multiline_Input:
 5319 0000 3138466C 		.string	"18Fl_Multiline_Input"
 5319      5F4D756C 
 5319      74696C69 
 5319      6E655F49 
 5319      6E707574 
 5320              		.weak	_ZTI18Fl_Multiline_Input
 5321              		.section	.rodata._ZTI18Fl_Multiline_Input,"aG",@progbits,_ZTI18Fl_Multiline_Input,comdat
 5322              		.align 8
 5325              	_ZTI18Fl_Multiline_Input:
 5326 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5326      00000000 
 5327 0008 00000000 		.quad	_ZTS18Fl_Multiline_Input
 5327      00000000 
 5328 0010 00000000 		.quad	_ZTI8Fl_Input
 5328      00000000 
 5329              		.weak	_ZTS9Fl_Output
 5330              		.section	.rodata._ZTS9Fl_Output,"aG",@progbits,_ZTS9Fl_Output,comdat
 5331              		.align 8
 5334              	_ZTS9Fl_Output:
 5335 0000 39466C5F 		.string	"9Fl_Output"
 5335      4F757470 
 5335      757400
 5336              		.weak	_ZTI9Fl_Output
 5337              		.section	.rodata._ZTI9Fl_Output,"aG",@progbits,_ZTI9Fl_Output,comdat
 5338              		.align 8
 5341              	_ZTI9Fl_Output:
 5342 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5342      00000000 
 5343 0008 00000000 		.quad	_ZTS9Fl_Output
 5343      00000000 
 5344 0010 00000000 		.quad	_ZTI8Fl_Input
 5344      00000000 
 5345              		.weak	_ZTS19Fl_Multiline_Output
 5346              		.section	.rodata._ZTS19Fl_Multiline_Output,"aG",@progbits,_ZTS19Fl_Multiline_Output,comdat
 5347              		.align 16
 5350              	_ZTS19Fl_Multiline_Output:
 5351 0000 3139466C 		.string	"19Fl_Multiline_Output"
 5351      5F4D756C 
 5351      74696C69 
 5351      6E655F4F 
 5351      75747075 
 5352              		.weak	_ZTI19Fl_Multiline_Output
 5353              		.section	.rodata._ZTI19Fl_Multiline_Output,"aG",@progbits,_ZTI19Fl_Multiline_Output,comdat
 5354              		.align 8
 5357              	_ZTI19Fl_Multiline_Output:
 5358 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5358      00000000 
 5359 0008 00000000 		.quad	_ZTS19Fl_Multiline_Output
 5359      00000000 
 5360 0010 00000000 		.quad	_ZTI9Fl_Output
 5360      00000000 
 5361              		.weak	_ZTS15Fl_Secret_Input
 5362              		.section	.rodata._ZTS15Fl_Secret_Input,"aG",@progbits,_ZTS15Fl_Secret_Input,comdat
 5363              		.align 16
 5366              	_ZTS15Fl_Secret_Input:
 5367 0000 3135466C 		.string	"15Fl_Secret_Input"
 5367      5F536563 
 5367      7265745F 
 5367      496E7075 
 5367      7400
 5368              		.weak	_ZTI15Fl_Secret_Input
 5369              		.section	.rodata._ZTI15Fl_Secret_Input,"aG",@progbits,_ZTI15Fl_Secret_Input,comdat
 5370              		.align 8
 5373              	_ZTI15Fl_Secret_Input:
 5374 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5374      00000000 
 5375 0008 00000000 		.quad	_ZTS15Fl_Secret_Input
 5375      00000000 
 5376 0010 00000000 		.quad	_ZTI8Fl_Input
 5376      00000000 
 5377              		.weak	_ZTV14Fl_Float_Input
 5378              		.section	.rodata._ZTV14Fl_Float_Input,"aG",@progbits,_ZTV14Fl_Float_Input,comdat
 5379              		.align 8
 5382              	_ZTV14Fl_Float_Input:
 5383 0000 00000000 		.quad	0
 5383      00000000 
 5384 0008 00000000 		.quad	_ZTI14Fl_Float_Input
 5384      00000000 
 5385 0010 00000000 		.quad	_ZN14Fl_Float_InputD1Ev
 5385      00000000 
 5386 0018 00000000 		.quad	_ZN14Fl_Float_InputD0Ev
 5386      00000000 
 5387 0020 00000000 		.quad	_ZN8Fl_Input4drawEv
 5387      00000000 
 5388 0028 00000000 		.quad	_ZN8Fl_Input6handleEi
 5388      00000000 
 5389 0030 00000000 		.quad	_ZN9Fl_Input_6resizeEiiii
 5389      00000000 
 5390 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5390      00000000 
 5391 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5391      00000000 
 5392 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5392      00000000 
 5393 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5393      00000000 
 5394 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5394      00000000 
 5395              		.weak	_ZTV12Fl_Int_Input
 5396              		.section	.rodata._ZTV12Fl_Int_Input,"aG",@progbits,_ZTV12Fl_Int_Input,comdat
 5397              		.align 8
 5400              	_ZTV12Fl_Int_Input:
 5401 0000 00000000 		.quad	0
 5401      00000000 
 5402 0008 00000000 		.quad	_ZTI12Fl_Int_Input
 5402      00000000 
 5403 0010 00000000 		.quad	_ZN12Fl_Int_InputD1Ev
 5403      00000000 
 5404 0018 00000000 		.quad	_ZN12Fl_Int_InputD0Ev
 5404      00000000 
 5405 0020 00000000 		.quad	_ZN8Fl_Input4drawEv
 5405      00000000 
 5406 0028 00000000 		.quad	_ZN8Fl_Input6handleEi
 5406      00000000 
 5407 0030 00000000 		.quad	_ZN9Fl_Input_6resizeEiiii
 5407      00000000 
 5408 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5408      00000000 
 5409 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5409      00000000 
 5410 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5410      00000000 
 5411 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5411      00000000 
 5412 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5412      00000000 
 5413              		.weak	_ZTV18Fl_Multiline_Input
 5414              		.section	.rodata._ZTV18Fl_Multiline_Input,"aG",@progbits,_ZTV18Fl_Multiline_Input,comdat
 5415              		.align 8
 5418              	_ZTV18Fl_Multiline_Input:
 5419 0000 00000000 		.quad	0
 5419      00000000 
 5420 0008 00000000 		.quad	_ZTI18Fl_Multiline_Input
 5420      00000000 
 5421 0010 00000000 		.quad	_ZN18Fl_Multiline_InputD1Ev
 5421      00000000 
 5422 0018 00000000 		.quad	_ZN18Fl_Multiline_InputD0Ev
 5422      00000000 
 5423 0020 00000000 		.quad	_ZN8Fl_Input4drawEv
 5423      00000000 
 5424 0028 00000000 		.quad	_ZN8Fl_Input6handleEi
 5424      00000000 
 5425 0030 00000000 		.quad	_ZN9Fl_Input_6resizeEiiii
 5425      00000000 
 5426 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5426      00000000 
 5427 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5427      00000000 
 5428 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5428      00000000 
 5429 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5429      00000000 
 5430 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5430      00000000 
 5431              		.weak	_ZTV9Fl_Output
 5432              		.section	.rodata._ZTV9Fl_Output,"aG",@progbits,_ZTV9Fl_Output,comdat
 5433              		.align 8
 5436              	_ZTV9Fl_Output:
 5437 0000 00000000 		.quad	0
 5437      00000000 
 5438 0008 00000000 		.quad	_ZTI9Fl_Output
 5438      00000000 
 5439 0010 00000000 		.quad	_ZN9Fl_OutputD1Ev
 5439      00000000 
 5440 0018 00000000 		.quad	_ZN9Fl_OutputD0Ev
 5440      00000000 
 5441 0020 00000000 		.quad	_ZN8Fl_Input4drawEv
 5441      00000000 
 5442 0028 00000000 		.quad	_ZN8Fl_Input6handleEi
 5442      00000000 
 5443 0030 00000000 		.quad	_ZN9Fl_Input_6resizeEiiii
 5443      00000000 
 5444 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5444      00000000 
 5445 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5445      00000000 
 5446 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5446      00000000 
 5447 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5447      00000000 
 5448 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5448      00000000 
 5449              		.weak	_ZTV19Fl_Multiline_Output
 5450              		.section	.rodata._ZTV19Fl_Multiline_Output,"aG",@progbits,_ZTV19Fl_Multiline_Output,comdat
 5451              		.align 8
 5454              	_ZTV19Fl_Multiline_Output:
 5455 0000 00000000 		.quad	0
 5455      00000000 
 5456 0008 00000000 		.quad	_ZTI19Fl_Multiline_Output
 5456      00000000 
 5457 0010 00000000 		.quad	_ZN19Fl_Multiline_OutputD1Ev
 5457      00000000 
 5458 0018 00000000 		.quad	_ZN19Fl_Multiline_OutputD0Ev
 5458      00000000 
 5459 0020 00000000 		.quad	_ZN8Fl_Input4drawEv
 5459      00000000 
 5460 0028 00000000 		.quad	_ZN8Fl_Input6handleEi
 5460      00000000 
 5461 0030 00000000 		.quad	_ZN9Fl_Input_6resizeEiiii
 5461      00000000 
 5462 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5462      00000000 
 5463 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5463      00000000 
 5464 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5464      00000000 
 5465 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5465      00000000 
 5466 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5466      00000000 
 5467              		.weak	_ZTV8Fl_Input
 5468              		.section	.rodata._ZTV8Fl_Input,"aG",@progbits,_ZTV8Fl_Input,comdat
 5469              		.align 8
 5472              	_ZTV8Fl_Input:
 5473 0000 00000000 		.quad	0
 5473      00000000 
 5474 0008 00000000 		.quad	_ZTI8Fl_Input
 5474      00000000 
 5475 0010 00000000 		.quad	_ZN8Fl_InputD1Ev
 5475      00000000 
 5476 0018 00000000 		.quad	_ZN8Fl_InputD0Ev
 5476      00000000 
 5477 0020 00000000 		.quad	_ZN8Fl_Input4drawEv
 5477      00000000 
 5478 0028 00000000 		.quad	_ZN8Fl_Input6handleEi
 5478      00000000 
 5479 0030 00000000 		.quad	_ZN9Fl_Input_6resizeEiiii
 5479      00000000 
 5480 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5480      00000000 
 5481 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5481      00000000 
 5482 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5482      00000000 
 5483 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5483      00000000 
 5484 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5484      00000000 
 5485              		.weak	_ZTV15Fl_Secret_Input
 5486              		.section	.rodata._ZTV15Fl_Secret_Input,"aG",@progbits,_ZTV15Fl_Secret_Input,comdat
 5487              		.align 8
 5490              	_ZTV15Fl_Secret_Input:
 5491 0000 00000000 		.quad	0
 5491      00000000 
 5492 0008 00000000 		.quad	_ZTI15Fl_Secret_Input
 5492      00000000 
 5493 0010 00000000 		.quad	_ZN15Fl_Secret_InputD1Ev
 5493      00000000 
 5494 0018 00000000 		.quad	_ZN15Fl_Secret_InputD0Ev
 5494      00000000 
 5495 0020 00000000 		.quad	_ZN8Fl_Input4drawEv
 5495      00000000 
 5496 0028 00000000 		.quad	_ZN15Fl_Secret_Input6handleEi
 5496      00000000 
 5497 0030 00000000 		.quad	_ZN9Fl_Input_6resizeEiiii
 5497      00000000 
 5498 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5498      00000000 
 5499 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5499      00000000 
 5500 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5500      00000000 
 5501 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5501      00000000 
 5502 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5502      00000000 
 5503              		.section	.bss._ZL14legal_fp_chars,"aw",@nobits
 5504              		.align 8
 5507              	_ZL14legal_fp_chars:
 5508 0000 00000000 		.zero	8
 5508      00000000 
 5509              		.text
 5510              	.Letext0:
 5511              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 5512              	.Letext_cold0:
 5513              		.file 14 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 5514              		.file 15 "/usr/include/x86_64-linux-gnu/bits/types.h"
 5515              		.file 16 "/usr/include/libio.h"
 5516              		.file 17 "fltk-1.3.4-1/FL/fl_types.h"
 5517              		.file 18 "/usr/include/locale.h"
 5518              		.file 19 "fltk-1.3.4-1/FL/Enumerations.H"
 5519              		.file 20 "fltk-1.3.4-1/FL/Fl_Window.H"
 5520              		.file 21 "fltk-1.3.4-1/FL/Fl_Image.H"
 5521              		.file 22 "fltk-1.3.4-1/FL/Fl_Device.H"
 5522              		.file 23 "fltk-1.3.4-1/FL/fl_ask.H"
 5523              		.file 24 "/usr/include/stdio.h"
 5524              		.file 25 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Input.cxx
     /tmp/cc9Bvr5f.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/cc9Bvr5f.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/cc9Bvr5f.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/cc9Bvr5f.s:89     .text._ZN8Fl_Input4drawEv:0000000000000000 _ZN8Fl_Input4drawEv
     /tmp/cc9Bvr5f.s:232    .text._ZN8Fl_InputD2Ev:0000000000000000 _ZN8Fl_InputD2Ev
     /tmp/cc9Bvr5f.s:5472   .rodata._ZTV8Fl_Input:0000000000000000 _ZTV8Fl_Input
     /tmp/cc9Bvr5f.s:232    .text._ZN8Fl_InputD2Ev:0000000000000000 _ZN8Fl_InputD1Ev
     /tmp/cc9Bvr5f.s:262    .text._ZN8Fl_InputD0Ev:0000000000000000 _ZN8Fl_InputD0Ev
     /tmp/cc9Bvr5f.s:301    .text._ZN14Fl_Float_InputD2Ev:0000000000000000 _ZN14Fl_Float_InputD2Ev
     /tmp/cc9Bvr5f.s:301    .text._ZN14Fl_Float_InputD2Ev:0000000000000000 _ZN14Fl_Float_InputD1Ev
     /tmp/cc9Bvr5f.s:333    .text._ZN14Fl_Float_InputD0Ev:0000000000000000 _ZN14Fl_Float_InputD0Ev
     /tmp/cc9Bvr5f.s:376    .text._ZN12Fl_Int_InputD2Ev:0000000000000000 _ZN12Fl_Int_InputD2Ev
     /tmp/cc9Bvr5f.s:376    .text._ZN12Fl_Int_InputD2Ev:0000000000000000 _ZN12Fl_Int_InputD1Ev
     /tmp/cc9Bvr5f.s:408    .text._ZN12Fl_Int_InputD0Ev:0000000000000000 _ZN12Fl_Int_InputD0Ev
     /tmp/cc9Bvr5f.s:451    .text._ZN18Fl_Multiline_InputD2Ev:0000000000000000 _ZN18Fl_Multiline_InputD2Ev
     /tmp/cc9Bvr5f.s:451    .text._ZN18Fl_Multiline_InputD2Ev:0000000000000000 _ZN18Fl_Multiline_InputD1Ev
     /tmp/cc9Bvr5f.s:483    .text._ZN18Fl_Multiline_InputD0Ev:0000000000000000 _ZN18Fl_Multiline_InputD0Ev
     /tmp/cc9Bvr5f.s:526    .text._ZN9Fl_OutputD2Ev:0000000000000000 _ZN9Fl_OutputD2Ev
     /tmp/cc9Bvr5f.s:526    .text._ZN9Fl_OutputD2Ev:0000000000000000 _ZN9Fl_OutputD1Ev
     /tmp/cc9Bvr5f.s:558    .text._ZN9Fl_OutputD0Ev:0000000000000000 _ZN9Fl_OutputD0Ev
     /tmp/cc9Bvr5f.s:601    .text._ZN19Fl_Multiline_OutputD2Ev:0000000000000000 _ZN19Fl_Multiline_OutputD2Ev
     /tmp/cc9Bvr5f.s:601    .text._ZN19Fl_Multiline_OutputD2Ev:0000000000000000 _ZN19Fl_Multiline_OutputD1Ev
     /tmp/cc9Bvr5f.s:635    .text._ZN19Fl_Multiline_OutputD0Ev:0000000000000000 _ZN19Fl_Multiline_OutputD0Ev
     /tmp/cc9Bvr5f.s:680    .text._ZN15Fl_Secret_InputD2Ev:0000000000000000 _ZN15Fl_Secret_InputD2Ev
     /tmp/cc9Bvr5f.s:680    .text._ZN15Fl_Secret_InputD2Ev:0000000000000000 _ZN15Fl_Secret_InputD1Ev
     /tmp/cc9Bvr5f.s:712    .text._ZN15Fl_Secret_InputD0Ev:0000000000000000 _ZN15Fl_Secret_InputD0Ev
     /tmp/cc9Bvr5f.s:755    .text._ZN8Fl_Input14shift_positionEi:0000000000000000 _ZN8Fl_Input14shift_positionEi
     /tmp/cc9Bvr5f.s:786    .text._ZN8Fl_Input22shift_up_down_positionEi:0000000000000000 _ZN8Fl_Input22shift_up_down_positionEi
     /tmp/cc9Bvr5f.s:812    .text._ZN8Fl_Input11kf_lines_upEi:0000000000000000 _ZN8Fl_Input11kf_lines_upEi
     /tmp/cc9Bvr5f.s:947    .text._ZN8Fl_Input13kf_lines_downEi:0000000000000000 _ZN8Fl_Input13kf_lines_downEi
     /tmp/cc9Bvr5f.s:1077   .text._ZN8Fl_Input10kf_page_upEv:0000000000000000 _ZN8Fl_Input10kf_page_upEv
     /tmp/cc9Bvr5f.s:1115   .text._ZN8Fl_Input12kf_page_downEv:0000000000000000 _ZN8Fl_Input12kf_page_downEv
     /tmp/cc9Bvr5f.s:1153   .text._ZN8Fl_Input16kf_insert_toggleEv:0000000000000000 _ZN8Fl_Input16kf_insert_toggleEv
     /tmp/cc9Bvr5f.s:1196   .text._ZN8Fl_Input20kf_delete_word_rightEv:0000000000000000 _ZN8Fl_Input20kf_delete_word_rightEv
     /tmp/cc9Bvr5f.s:1286   .text._ZN8Fl_Input19kf_delete_word_leftEv:0000000000000000 _ZN8Fl_Input19kf_delete_word_leftEv
     /tmp/cc9Bvr5f.s:1400   .text._ZN8Fl_Input13kf_delete_solEv:0000000000000000 _ZN8Fl_Input13kf_delete_solEv
     /tmp/cc9Bvr5f.s:1514   .text._ZN8Fl_Input13kf_delete_eolEv:0000000000000000 _ZN8Fl_Input13kf_delete_eolEv
     /tmp/cc9Bvr5f.s:1603   .text._ZN8Fl_Input20kf_delete_char_rightEv:0000000000000000 _ZN8Fl_Input20kf_delete_char_rightEv
     /tmp/cc9Bvr5f.s:1667   .text._ZN8Fl_Input19kf_delete_char_leftEv:0000000000000000 _ZN8Fl_Input19kf_delete_char_leftEv
     /tmp/cc9Bvr5f.s:1743   .text._ZN8Fl_Input11kf_move_solEv:0000000000000000 _ZN8Fl_Input11kf_move_solEv
     /tmp/cc9Bvr5f.s:1808   .text._ZN8Fl_Input11kf_move_eolEv:0000000000000000 _ZN8Fl_Input11kf_move_eolEv
     /tmp/cc9Bvr5f.s:1873   .text._ZN8Fl_Input12kf_clear_eolEv:0000000000000000 _ZN8Fl_Input12kf_clear_eolEv
     /tmp/cc9Bvr5f.s:1975   .text._ZN8Fl_Input17kf_move_char_leftEv:0000000000000000 _ZN8Fl_Input17kf_move_char_leftEv
     /tmp/cc9Bvr5f.s:2066   .text._ZN8Fl_Input18kf_move_char_rightEv:0000000000000000 _ZN8Fl_Input18kf_move_char_rightEv
     /tmp/cc9Bvr5f.s:2157   .text._ZN8Fl_Input17kf_move_word_leftEv:0000000000000000 _ZN8Fl_Input17kf_move_word_leftEv
     /tmp/cc9Bvr5f.s:2209   .text._ZN8Fl_Input18kf_move_word_rightEv:0000000000000000 _ZN8Fl_Input18kf_move_word_rightEv
     /tmp/cc9Bvr5f.s:2261   .text._ZN8Fl_Input18kf_move_up_and_solEv:0000000000000000 _ZN8Fl_Input18kf_move_up_and_solEv
     /tmp/cc9Bvr5f.s:2344   .text._ZN8Fl_Input20kf_move_down_and_eolEv:0000000000000000 _ZN8Fl_Input20kf_move_down_and_eolEv
     /tmp/cc9Bvr5f.s:2436   .text._ZN8Fl_Input6kf_topEv:0000000000000000 _ZN8Fl_Input6kf_topEv
     /tmp/cc9Bvr5f.s:2478   .text._ZN8Fl_Input9kf_bottomEv:0000000000000000 _ZN8Fl_Input9kf_bottomEv
     /tmp/cc9Bvr5f.s:2521   .text._ZN8Fl_Input13kf_select_allEv:0000000000000000 _ZN8Fl_Input13kf_select_allEv
     /tmp/cc9Bvr5f.s:2554   .text._ZN8Fl_Input7kf_undoEv:0000000000000000 _ZN8Fl_Input7kf_undoEv
     /tmp/cc9Bvr5f.s:2597   .text._ZN8Fl_Input7kf_redoEv:0000000000000000 _ZN8Fl_Input7kf_redoEv
     /tmp/cc9Bvr5f.s:2640   .text._ZN8Fl_Input7kf_copyEv:0000000000000000 _ZN8Fl_Input7kf_copyEv
     /tmp/cc9Bvr5f.s:2665   .text._ZN8Fl_Input8kf_pasteEv:0000000000000000 _ZN8Fl_Input8kf_pasteEv
     /tmp/cc9Bvr5f.s:2716   .text._ZN8Fl_Input11kf_copy_cutEv:0000000000000000 _ZN8Fl_Input11kf_copy_cutEv
     /tmp/cc9Bvr5f.s:2796   .text._ZN8Fl_Input10handle_keyEv:0000000000000000 _ZN8Fl_Input10handle_keyEv
     /tmp/cc9Bvr5f.s:5507   .bss._ZL14legal_fp_chars:0000000000000000 _ZL14legal_fp_chars
     /tmp/cc9Bvr5f.s:3936   .text._ZN8Fl_Input6handleEi:0000000000000000 _ZN8Fl_Input6handleEi
     /tmp/cc9Bvr5f.s:5239   .bss._ZZN8Fl_Input6handleEiE14dnd_save_focus:0000000000000000 _ZZN8Fl_Input6handleEiE14dnd_save_focus
     /tmp/cc9Bvr5f.s:5251   .bss._ZZN8Fl_Input6handleEiE17dnd_save_position:0000000000000000 _ZZN8Fl_Input6handleEiE17dnd_save_position
     /tmp/cc9Bvr5f.s:5245   .bss._ZZN8Fl_Input6handleEiE13dnd_save_mark:0000000000000000 _ZZN8Fl_Input6handleEiE13dnd_save_mark
     /tmp/cc9Bvr5f.s:5257   .data._ZZN8Fl_Input6handleEiE10drag_start:0000000000000000 _ZZN8Fl_Input6handleEiE10drag_start
     /tmp/cc9Bvr5f.s:5263   .bss._ZZN8Fl_Input6handleEiE6newpos:0000000000000000 _ZZN8Fl_Input6handleEiE6newpos
     /tmp/cc9Bvr5f.s:4846   .text._ZN15Fl_Secret_Input6handleEi:0000000000000000 _ZN15Fl_Secret_Input6handleEi
     /tmp/cc9Bvr5f.s:4870   .text._ZN8Fl_InputC2EiiiiPKc:0000000000000000 _ZN8Fl_InputC2EiiiiPKc
     /tmp/cc9Bvr5f.s:4870   .text._ZN8Fl_InputC2EiiiiPKc:0000000000000000 _ZN8Fl_InputC1EiiiiPKc
     /tmp/cc9Bvr5f.s:4909   .text._ZN14Fl_Float_InputC2EiiiiPKc:0000000000000000 _ZN14Fl_Float_InputC2EiiiiPKc
     /tmp/cc9Bvr5f.s:5382   .rodata._ZTV14Fl_Float_Input:0000000000000000 _ZTV14Fl_Float_Input
     /tmp/cc9Bvr5f.s:4909   .text._ZN14Fl_Float_InputC2EiiiiPKc:0000000000000000 _ZN14Fl_Float_InputC1EiiiiPKc
     /tmp/cc9Bvr5f.s:4968   .text._ZN12Fl_Int_InputC2EiiiiPKc:0000000000000000 _ZN12Fl_Int_InputC2EiiiiPKc
     /tmp/cc9Bvr5f.s:5400   .rodata._ZTV12Fl_Int_Input:0000000000000000 _ZTV12Fl_Int_Input
     /tmp/cc9Bvr5f.s:4968   .text._ZN12Fl_Int_InputC2EiiiiPKc:0000000000000000 _ZN12Fl_Int_InputC1EiiiiPKc
     /tmp/cc9Bvr5f.s:5027   .text._ZN18Fl_Multiline_InputC2EiiiiPKc:0000000000000000 _ZN18Fl_Multiline_InputC2EiiiiPKc
     /tmp/cc9Bvr5f.s:5418   .rodata._ZTV18Fl_Multiline_Input:0000000000000000 _ZTV18Fl_Multiline_Input
     /tmp/cc9Bvr5f.s:5027   .text._ZN18Fl_Multiline_InputC2EiiiiPKc:0000000000000000 _ZN18Fl_Multiline_InputC1EiiiiPKc
     /tmp/cc9Bvr5f.s:5079   .text._ZN9Fl_OutputC2EiiiiPKc:0000000000000000 _ZN9Fl_OutputC2EiiiiPKc
     /tmp/cc9Bvr5f.s:5436   .rodata._ZTV9Fl_Output:0000000000000000 _ZTV9Fl_Output
     /tmp/cc9Bvr5f.s:5079   .text._ZN9Fl_OutputC2EiiiiPKc:0000000000000000 _ZN9Fl_OutputC1EiiiiPKc
     /tmp/cc9Bvr5f.s:5131   .text._ZN19Fl_Multiline_OutputC2EiiiiPKc:0000000000000000 _ZN19Fl_Multiline_OutputC2EiiiiPKc
     /tmp/cc9Bvr5f.s:5454   .rodata._ZTV19Fl_Multiline_Output:0000000000000000 _ZTV19Fl_Multiline_Output
     /tmp/cc9Bvr5f.s:5131   .text._ZN19Fl_Multiline_OutputC2EiiiiPKc:0000000000000000 _ZN19Fl_Multiline_OutputC1EiiiiPKc
     /tmp/cc9Bvr5f.s:5185   .text._ZN15Fl_Secret_InputC2EiiiiPKc:0000000000000000 _ZN15Fl_Secret_InputC2EiiiiPKc
     /tmp/cc9Bvr5f.s:5490   .rodata._ZTV15Fl_Secret_Input:0000000000000000 _ZTV15Fl_Secret_Input
     /tmp/cc9Bvr5f.s:5185   .text._ZN15Fl_Secret_InputC2EiiiiPKc:0000000000000000 _ZN15Fl_Secret_InputC1EiiiiPKc
     /tmp/cc9Bvr5f.s:5270   .rodata._ZTS8Fl_Input:0000000000000000 _ZTS8Fl_Input
     /tmp/cc9Bvr5f.s:5277   .rodata._ZTI8Fl_Input:0000000000000000 _ZTI8Fl_Input
     /tmp/cc9Bvr5f.s:5286   .rodata._ZTS14Fl_Float_Input:0000000000000000 _ZTS14Fl_Float_Input
     /tmp/cc9Bvr5f.s:5293   .rodata._ZTI14Fl_Float_Input:0000000000000000 _ZTI14Fl_Float_Input
     /tmp/cc9Bvr5f.s:5302   .rodata._ZTS12Fl_Int_Input:0000000000000000 _ZTS12Fl_Int_Input
     /tmp/cc9Bvr5f.s:5309   .rodata._ZTI12Fl_Int_Input:0000000000000000 _ZTI12Fl_Int_Input
     /tmp/cc9Bvr5f.s:5318   .rodata._ZTS18Fl_Multiline_Input:0000000000000000 _ZTS18Fl_Multiline_Input
     /tmp/cc9Bvr5f.s:5325   .rodata._ZTI18Fl_Multiline_Input:0000000000000000 _ZTI18Fl_Multiline_Input
     /tmp/cc9Bvr5f.s:5334   .rodata._ZTS9Fl_Output:0000000000000000 _ZTS9Fl_Output
     /tmp/cc9Bvr5f.s:5341   .rodata._ZTI9Fl_Output:0000000000000000 _ZTI9Fl_Output
     /tmp/cc9Bvr5f.s:5350   .rodata._ZTS19Fl_Multiline_Output:0000000000000000 _ZTS19Fl_Multiline_Output
     /tmp/cc9Bvr5f.s:5357   .rodata._ZTI19Fl_Multiline_Output:0000000000000000 _ZTI19Fl_Multiline_Output
     /tmp/cc9Bvr5f.s:5366   .rodata._ZTS15Fl_Secret_Input:0000000000000000 _ZTS15Fl_Secret_Input
     /tmp/cc9Bvr5f.s:5373   .rodata._ZTI15Fl_Secret_Input:0000000000000000 _ZTI15Fl_Secret_Input
                           .group:0000000000000000 _ZN8Fl_InputD5Ev
                           .group:0000000000000000 _ZN14Fl_Float_InputD5Ev
                           .group:0000000000000000 _ZN12Fl_Int_InputD5Ev
                           .group:0000000000000000 _ZN18Fl_Multiline_InputD5Ev
                           .group:0000000000000000 _ZN9Fl_OutputD5Ev
                           .group:0000000000000000 _ZN19Fl_Multiline_OutputD5Ev
                           .group:0000000000000000 _ZN15Fl_Secret_InputD5Ev
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
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
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
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN9Fl_Input_8drawtextEiiii
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
_ZN9Fl_Input_D2Ev
_ZdlPv
_ZN2Fl7e_stateE
_ZN9Fl_Input_8positionEii
_ZN9Fl_Input_16up_down_positionEii
_ZNK9Fl_Input_10line_startEi
_ZN2Fl6optionENS_9Fl_OptionE
_ZNK9Fl_Input_8line_endEi
_ZN9Fl_Input_12linesPerPageEv
_Z7fl_beepi
_ZN9Fl_Input_7replaceEiiPKci
_ZNK9Fl_Input_8word_endEi
_ZNK9Fl_Input_10word_startEi
_ZN9Fl_Input_9copy_cutsEv
_ZN9Fl_Input_4undoEv
_ZN9Fl_Input_4copyEi
_ZN2Fl5pasteER9Fl_Widgeti
_ZN2Fl6e_textE
_ZN2Fl7composeERi
_ZN2Fl8e_lengthE
_ZN2Fl8e_keysymE
_ZN2Fl13compose_resetEv
strchr
_ZNK9Fl_Input_5indexEi
localeconv
strlen
malloc
strcpy
strcat
_ZN9Fl_Input_17maybe_do_callbackEv
__stack_chk_fail
_ZN2Fl10belowmouseEP9Fl_Widget
_ZN2Fl6focus_E
_ZN2Fl5focusEP9Fl_Widget
_ZN9Fl_Input_12handle_mouseEiiiii
_ZN9Fl_Input_10handletextEiiiii
_ZN2Fl12first_windowEv
_ZN9Fl_Window6cursorE9Fl_Cursor
_ZN9Fl_Widget10take_focusEv
_ZN2Fl10e_is_clickE
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZN2Fl3dndEv
_ZNK9Fl_Widget8active_rEv
_ZN2Fl8e_clicksE
_ZNK9Fl_Widget6windowEv
_ZN2Fl11belowmouse_E
_ZN9Fl_Input_C2EiiiiPKc
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Input_
_ZN9Fl_Input_6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
