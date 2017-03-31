   1              		.file	"Fl_Color_Chooser.cxx"
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
 105              		.section	.text.unlikely._ZL10chooser_cbP9Fl_WidgetPv,"ax",@progbits
 106              	.LCOLDB6:
 107              		.section	.text._ZL10chooser_cbP9Fl_WidgetPv,"ax",@progbits
 108              	.LHOTB6:
 109              		.p2align 4,,15
 111              	_ZL10chooser_cbP9Fl_WidgetPv:
 112              	.LFB653:
 113              		.file 3 "fltk-1.3.4-1/src/Fl_Color_Chooser.cxx"
   1:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    1              		.file	"Fl_Color_Chooser.cxx"
   2:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 114              		.loc 3 517 0
 115              		.cfi_startproc
 116              	.LVL4:
 518:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 117              		.loc 3 520 0
 118 0000 F20F1097 		movsd	1840(%rdi), %xmm2
 118      30070000 
 517:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 119              		.loc 3 517 0
 120 0008 4889F2   		movq	%rsi, %rdx
 121              		.loc 3 520 0
 122 000b F20F100D 		movsd	.LC4(%rip), %xmm1
 122      00000000 
 123 0013 F20F1005 		movsd	.LC5(%rip), %xmm0
 123      00000000 
 124 001b F20F59D1 		mulsd	%xmm1, %xmm2
 125 001f F20F58D0 		addsd	%xmm0, %xmm2
 126 0023 F20F2CC2 		cvttsd2si	%xmm2, %eax
 127 0027 884678   		movb	%al, 120(%rsi)
 128              	.LVL5:
 521:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 129              		.loc 3 521 0
 130 002a F20F1097 		movsd	1848(%rdi), %xmm2
 130      38070000 
 131 0032 F20F59D1 		mulsd	%xmm1, %xmm2
 132 0036 F20F58D0 		addsd	%xmm0, %xmm2
 133 003a F20F2CC2 		cvttsd2si	%xmm2, %eax
 134 003e 884679   		movb	%al, 121(%rsi)
 135              	.LVL6:
 522:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 136              		.loc 3 522 0
 137 0041 F20F598F 		mulsd	1856(%rdi), %xmm1
 137      40070000 
 523:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 138              		.loc 3 523 0
 139 0049 4889D7   		movq	%rdx, %rdi
 140              	.LVL7:
 522:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 141              		.loc 3 522 0
 142 004c F20F58C1 		addsd	%xmm1, %xmm0
 143 0050 F20F2CC0 		cvttsd2si	%xmm0, %eax
 144 0054 88467A   		movb	%al, 122(%rsi)
 145              		.loc 3 523 0
 146 0057 BE020000 		movl	$2, %esi
 146      00
 147              	.LVL8:
 148 005c E9000000 		jmp	_ZN9Fl_Widget6damageEh
 148      00
 149              	.LVL9:
 150              		.cfi_endproc
 151              	.LFE653:
 153              		.section	.text.unlikely._ZL10chooser_cbP9Fl_WidgetPv
 154              	.LCOLDE6:
 155              		.section	.text._ZL10chooser_cbP9Fl_WidgetPv
 156              	.LHOTE6:
 157              		.section	.text.unlikely._ZL15generate_vimagePviiiPh,"ax",@progbits
 158              	.LCOLDB8:
 159              		.section	.text._ZL15generate_vimagePviiiPh,"ax",@progbits
 160              	.LHOTB8:
 161              		.p2align 4,,15
 163              	_ZL15generate_vimagePviiiPh:
 164              	.LFB640:
 364:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 165              		.loc 3 364 0
 166              		.cfi_startproc
 167              	.LVL10:
 168 0000 4156     		pushq	%r14
 169              		.cfi_def_cfa_offset 16
 170              		.cfi_offset 14, -16
 171 0002 4155     		pushq	%r13
 172              		.cfi_def_cfa_offset 24
 173              		.cfi_offset 13, -24
 174 0004 4189CE   		movl	%ecx, %r14d
 175 0007 4154     		pushq	%r12
 176              		.cfi_def_cfa_offset 32
 177              		.cfi_offset 12, -32
 178 0009 55       		pushq	%rbp
 179              		.cfi_def_cfa_offset 40
 180              		.cfi_offset 6, -40
 181 000a 4189F5   		movl	%esi, %r13d
 182 000d 53       		pushq	%rbx
 183              		.cfi_def_cfa_offset 48
 184              		.cfi_offset 3, -48
 185 000e 448B672C 		movl	44(%rdi), %r12d
 186              	.LVL11:
 364:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 187              		.loc 3 364 0
 188 0012 89D5     		movl	%edx, %ebp
 366:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 189              		.loc 3 366 0
 190 0014 0FB67F6E 		movzbl	110(%rdi), %edi
 191              	.LVL12:
 364:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 192              		.loc 3 364 0
 193 0018 4C89C3   		movq	%r8, %rbx
 366:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 194              		.loc 3 366 0
 195 001b E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 195      00
 196              	.LVL13:
 197 0020 660FEFC0 		pxor	%xmm0, %xmm0
 198 0024 4129C4   		subl	%eax, %r12d
 199 0027 660FEFC9 		pxor	%xmm1, %xmm1
 200              	.LBB498:
 370:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 201              		.loc 3 370 0
 202 002b 438D4C35 		leal	0(%r13,%r14), %ecx
 202      00
 203              	.LBE498:
 366:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 204              		.loc 3 366 0
 205 0030 F20F1015 		movsd	.LC7(%rip), %xmm2
 205      00000000 
 206 0038 F20F2AC5 		cvtsi2sd	%ebp, %xmm0
 207              	.LBB499:
 370:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 208              		.loc 3 370 0
 209 003c 4139CD   		cmpl	%ecx, %r13d
 210              	.LBE499:
 366:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 211              		.loc 3 366 0
 212 003f F2410F2A 		cvtsi2sd	%r12d, %xmm1
 212      CC
 213 0044 F20F5EC1 		divsd	%xmm1, %xmm0
 367:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 214              		.loc 3 367 0
 215 0048 F20F100D 		movsd	_ZL2tr(%rip), %xmm1
 215      00000000 
 366:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 216              		.loc 3 366 0
 217 0050 F20F5CD0 		subsd	%xmm0, %xmm2
 367:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 218              		.loc 3 367 0
 219 0054 F20F1005 		movsd	.LC5(%rip), %xmm0
 219      00000000 
 366:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 220              		.loc 3 366 0
 221 005c F20F5915 		mulsd	.LC4(%rip), %xmm2
 221      00000000 
 222              	.LVL14:
 367:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 223              		.loc 3 367 0
 224 0064 F20F59CA 		mulsd	%xmm2, %xmm1
 225 0068 F20F58C8 		addsd	%xmm0, %xmm1
 226 006c F20F2CD1 		cvttsd2si	%xmm1, %edx
 227              	.LVL15:
 368:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 228              		.loc 3 368 0
 229 0070 F20F100D 		movsd	_ZL2tg(%rip), %xmm1
 229      00000000 
 230 0078 F20F59CA 		mulsd	%xmm2, %xmm1
 369:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 231              		.loc 3 369 0
 232 007c F20F5915 		mulsd	_ZL2tb(%rip), %xmm2
 232      00000000 
 233              	.LVL16:
 368:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 234              		.loc 3 368 0
 235 0084 F20F58C8 		addsd	%xmm0, %xmm1
 236              	.LVL17:
 369:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 237              		.loc 3 369 0
 238 0088 F20F58C2 		addsd	%xmm2, %xmm0
 239              	.LVL18:
 240              	.LBB500:
 370:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 241              		.loc 3 370 0
 242 008c 7D2C     		jge	.L6
 243 008e F20F2CF9 		cvttsd2si	%xmm1, %edi
 244              	.LVL19:
 245 0092 418D4EFF 		leal	-1(%r14), %ecx
 246 0096 F20F2CC0 		cvttsd2si	%xmm0, %eax
 247              	.LVL20:
 248 009a 488D4C49 		leaq	3(%rcx,%rcx,2), %rcx
 248      03
 249 009f 4801D9   		addq	%rbx, %rcx
 250              	.LVL21:
 251              		.p2align 4,,10
 252 00a2 660F1F44 		.p2align 3
 252      0000
 253              	.L9:
 371:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 254              		.loc 3 371 0 discriminator 2
 255 00a8 8813     		movb	%dl, (%rbx)
 256              	.LVL22:
 257 00aa 40887B01 		movb	%dil, 1(%rbx)
 258 00ae 4883C303 		addq	$3, %rbx
 259              	.LVL23:
 370:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 260              		.loc 3 370 0 discriminator 2
 261 00b2 4839D9   		cmpq	%rbx, %rcx
 371:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 262              		.loc 3 371 0 discriminator 2
 263 00b5 8843FF   		movb	%al, -1(%rbx)
 370:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 264              		.loc 3 370 0 discriminator 2
 265 00b8 75EE     		jne	.L9
 266              	.LVL24:
 267              	.L6:
 268              	.LBE500:
 373:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 269              		.loc 3 373 0
 270 00ba 5B       		popq	%rbx
 271              		.cfi_def_cfa_offset 40
 272              	.LVL25:
 273 00bb 5D       		popq	%rbp
 274              		.cfi_def_cfa_offset 32
 275              	.LVL26:
 276 00bc 415C     		popq	%r12
 277              		.cfi_def_cfa_offset 24
 278 00be 415D     		popq	%r13
 279              		.cfi_def_cfa_offset 16
 280              	.LVL27:
 281 00c0 415E     		popq	%r14
 282              		.cfi_def_cfa_offset 8
 283              	.LVL28:
 284 00c2 C3       		ret
 285              		.cfi_endproc
 286              	.LFE640:
 288              		.section	.text.unlikely._ZL15generate_vimagePviiiPh
 289              	.LCOLDE8:
 290              		.section	.text._ZL15generate_vimagePviiiPh
 291              	.LHOTE8:
 292              		.section	.text.unlikely._ZL4tohsddRdS_,"ax",@progbits
 293              	.LCOLDB12:
 294              		.section	.text._ZL4tohsddRdS_,"ax",@progbits
 295              	.LHOTB12:
 296              		.p2align 4,,15
 298              	_ZL4tohsddRdS_:
 299              	.LFB634:
 192:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 300              		.loc 3 192 0
 301              		.cfi_startproc
 302              	.LVL29:
 303 0000 53       		pushq	%rbx
 304              		.cfi_def_cfa_offset 16
 305              		.cfi_offset 3, -16
 194:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 306              		.loc 3 194 0
 307 0001 F20F58C0 		addsd	%xmm0, %xmm0
 308              	.LVL30:
 192:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 309              		.loc 3 192 0
 310 0005 4889FB   		movq	%rdi, %rbx
 195:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 311              		.loc 3 195 0
 312 0008 F20F58C9 		addsd	%xmm1, %xmm1
 313              	.LVL31:
 192:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 314              		.loc 3 192 0
 315 000c 4883EC20 		subq	$32, %rsp
 316              		.cfi_def_cfa_offset 48
 194:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 317              		.loc 3 194 0
 318 0010 F20F101D 		movsd	.LC7(%rip), %xmm3
 318      00000000 
 319 0018 660F28D0 		movapd	%xmm0, %xmm2
 195:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 320              		.loc 3 195 0
 321 001c 660F28E3 		movapd	%xmm3, %xmm4
 194:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 322              		.loc 3 194 0
 323 0020 F20F5CD3 		subsd	%xmm3, %xmm2
 324              	.LVL32:
 195:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 325              		.loc 3 195 0
 326 0024 F20F5CE1 		subsd	%xmm1, %xmm4
 327              	.LVL33:
 196:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 328              		.loc 3 196 0
 329 0028 660F28CA 		movapd	%xmm2, %xmm1
 330 002c 660F28C4 		movapd	%xmm4, %xmm0
 331 0030 F20F59CA 		mulsd	%xmm2, %xmm1
 332 0034 F20F59C4 		mulsd	%xmm4, %xmm0
 333 0038 F20F58C1 		addsd	%xmm1, %xmm0
 334 003c F20F51C8 		sqrtsd	%xmm0, %xmm1
 335 0040 660F2EC9 		ucomisd	%xmm1, %xmm1
 336 0044 7A39     		jp	.L21
 337              	.LVL34:
 338              	.L13:
 339 0046 F20F5DD9 		minsd	%xmm1, %xmm3
 197:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 340              		.loc 3 197 0
 341 004a 660F28C4 		movapd	%xmm4, %xmm0
 342 004e 660F28CA 		movapd	%xmm2, %xmm1
 343 0052 F20F111E 		movsd	%xmm3, (%rsi)
 344 0056 E8000000 		call	atan2
 344      00
 345              	.LVL35:
 346 005b F20F5905 		mulsd	.LC9(%rip), %xmm0
 346      00000000 
 198:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 347              		.loc 3 198 0
 348 0063 660FEFC9 		pxor	%xmm1, %xmm1
 349 0067 660F2EC8 		ucomisd	%xmm0, %xmm1
 350 006b 7608     		jbe	.L20
 198:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 351              		.loc 3 198 0 is_stmt 0 discriminator 1
 352 006d F20F5805 		addsd	.LC11(%rip), %xmm0
 352      00000000 
 353              	.L20:
 354 0075 F20F1103 		movsd	%xmm0, (%rbx)
 203:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 355              		.loc 3 203 0 is_stmt 1 discriminator 1
 356 0079 4883C420 		addq	$32, %rsp
 357              		.cfi_remember_state
 358              		.cfi_def_cfa_offset 16
 359 007d 5B       		popq	%rbx
 360              		.cfi_def_cfa_offset 8
 361              	.LVL36:
 362 007e C3       		ret
 363              	.LVL37:
 364              	.L21:
 365              		.cfi_restore_state
 366 007f F20F115C 		movsd	%xmm3, 24(%rsp)
 366      2418
 367 0085 48897424 		movq	%rsi, 16(%rsp)
 367      10
 368 008a F20F1164 		movsd	%xmm4, 8(%rsp)
 368      2408
 369 0090 F20F1114 		movsd	%xmm2, (%rsp)
 369      24
 196:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 370              		.loc 3 196 0
 371 0095 E8000000 		call	sqrt
 371      00
 372              	.LVL38:
 373 009a F20F105C 		movsd	24(%rsp), %xmm3
 373      2418
 374 00a0 660F28C8 		movapd	%xmm0, %xmm1
 375 00a4 488B7424 		movq	16(%rsp), %rsi
 375      10
 376 00a9 F20F1064 		movsd	8(%rsp), %xmm4
 376      2408
 377 00af F20F1014 		movsd	(%rsp), %xmm2
 377      24
 378 00b4 EB90     		jmp	.L13
 379              		.cfi_endproc
 380              	.LFE634:
 382              		.section	.text.unlikely._ZL4tohsddRdS_
 383              	.LCOLDE12:
 384              		.section	.text._ZL4tohsddRdS_
 385              	.LHOTE12:
 386              		.section	.text.unlikely._ZN11Flcc_HueBox4drawEv,"ax",@progbits
 387              		.align 2
 388              	.LCOLDB14:
 389              		.section	.text._ZN11Flcc_HueBox4drawEv,"ax",@progbits
 390              	.LHOTB14:
 391              		.align 2
 392              		.p2align 4,,15
 393              		.globl	_ZN11Flcc_HueBox4drawEv
 395              	_ZN11Flcc_HueBox4drawEv:
 396              	.LFB638:
 304:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 397              		.loc 3 304 0
 398              		.cfi_startproc
 399              	.LVL39:
 400 0000 4157     		pushq	%r15
 401              		.cfi_def_cfa_offset 16
 402              		.cfi_offset 15, -16
 403 0002 4156     		pushq	%r14
 404              		.cfi_def_cfa_offset 24
 405              		.cfi_offset 14, -24
 406 0004 4155     		pushq	%r13
 407              		.cfi_def_cfa_offset 32
 408              		.cfi_offset 13, -32
 409 0006 4154     		pushq	%r12
 410              		.cfi_def_cfa_offset 40
 411              		.cfi_offset 12, -40
 412 0008 55       		pushq	%rbp
 413              		.cfi_def_cfa_offset 48
 414              		.cfi_offset 6, -48
 415 0009 53       		pushq	%rbx
 416              		.cfi_def_cfa_offset 56
 417              		.cfi_offset 3, -56
 418 000a 4889FB   		movq	%rdi, %rbx
 419 000d 4883EC28 		subq	$40, %rsp
 420              		.cfi_def_cfa_offset 96
 305:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 421              		.loc 3 305 0
 422 0011 807F6D00 		cmpb	$0, 109(%rdi)
 423 0015 0F88D501 		js	.L34
 423      0000
 424              	.LVL40:
 425              	.L24:
 306:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 426              		.loc 3 306 0
 427 001b 0FB67B6E 		movzbl	110(%rbx), %edi
 428 001f 8B6B20   		movl	32(%rbx), %ebp
 429              	.LVL41:
 430 0022 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 430      00
 431              	.LVL42:
 307:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 432              		.loc 3 307 0
 433 0027 0FB67B6E 		movzbl	110(%rbx), %edi
 306:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434              		.loc 3 306 0
 435 002b 448D2C28 		leal	(%rax,%rbp), %r13d
 436              	.LVL43:
 437 002f 8B6B24   		movl	36(%rbx), %ebp
 438              	.LVL44:
 307:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 439              		.loc 3 307 0
 440 0032 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 440      00
 441              	.LVL45:
 308:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 442              		.loc 3 308 0
 443 0037 0FB67B6E 		movzbl	110(%rbx), %edi
 307:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 444              		.loc 3 307 0
 445 003b 448D3428 		leal	(%rax,%rbp), %r14d
 446              	.LVL46:
 447 003f 448B6328 		movl	40(%rbx), %r12d
 448              	.LVL47:
 308:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 449              		.loc 3 308 0
 450 0043 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 450      00
 451              	.LVL48:
 309:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 452              		.loc 3 309 0
 453 0048 0FB67B6E 		movzbl	110(%rbx), %edi
 454 004c 8B6B2C   		movl	44(%rbx), %ebp
 308:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 455              		.loc 3 308 0
 456 004f 4129C4   		subl	%eax, %r12d
 457              	.LVL49:
 309:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 458              		.loc 3 309 0
 459 0052 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 459      00
 460              	.LVL50:
 461 0057 29C5     		subl	%eax, %ebp
 462              	.LVL51:
 310:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 463              		.loc 3 310 0
 464 0059 807B6D02 		cmpb	$2, 109(%rbx)
 465 005d 0F845D01 		je	.L35
 465      0000
 466              	.L25:
 467              	.LVL52:
 468              	.LBB501:
 469              	.LBB502:
 470              		.file 4 "fltk-1.3.4-1/FL/fl_draw.H"
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
 540:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 541:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size.
 542:fltk-1.3.4-1/FL/fl_draw.H ****     \note if a valid fl_gc is NOT found then it uses the first window gc,
 543:fltk-1.3.4-1/FL/fl_draw.H ****     or the screen gc if no fltk window is available when called. */
 544:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(unsigned int c)  {return fl_graphics_driver->width(c);}
 545:fltk-1.3.4-1/FL/fl_draw.H **** /** Determines the minimum pixel dimensions of a nul-terminated string.
 546:fltk-1.3.4-1/FL/fl_draw.H **** 
 547:fltk-1.3.4-1/FL/fl_draw.H ****   Usage: given a string "txt" drawn using fl_draw(txt, x, y) you would determine
 548:fltk-1.3.4-1/FL/fl_draw.H ****   its pixel extents on the display using fl_text_extents(txt, dx, dy, wo, ho)
 549:fltk-1.3.4-1/FL/fl_draw.H ****   such that a bounding box that exactly fits around the text could be drawn with
 550:fltk-1.3.4-1/FL/fl_draw.H ****   fl_rect(x+dx, y+dy, wo, ho). Note the dx, dy values hold the offset of the first
 551:fltk-1.3.4-1/FL/fl_draw.H ****   "colored in" pixel of the string, from the draw origin.
 552:fltk-1.3.4-1/FL/fl_draw.H **** 
 553:fltk-1.3.4-1/FL/fl_draw.H ****   No FLTK symbol expansion will be performed.
 554:fltk-1.3.4-1/FL/fl_draw.H **** */
 555:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_text_extents(const char*, int& dx, int& dy, int& w, int& h); // NO fltk symbol ex
 556:fltk-1.3.4-1/FL/fl_draw.H **** /** Determines the minimum pixel dimensions of a sequence of \p n characters.
 557:fltk-1.3.4-1/FL/fl_draw.H **** \see fl_text_extents(const char*, int& dx, int& dy, int& w, int& h)
 558:fltk-1.3.4-1/FL/fl_draw.H **** */
 559:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_text_extents(const char *t, int n, int& dx, int& dy, int& w, int& h)
 560:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->text_extents(t, n, dx, dy, w, h);}
 561:fltk-1.3.4-1/FL/fl_draw.H **** 
 562:fltk-1.3.4-1/FL/fl_draw.H **** // font encoding:
 563:fltk-1.3.4-1/FL/fl_draw.H **** // Note: doxygen comments here to avoid duplication for os-sepecific cases
 564:fltk-1.3.4-1/FL/fl_draw.H **** /**
 565:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from Windows/X11 latin1 character set to local encoding.
 566:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (latin1 encoding)
 567:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 568:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 569:fltk-1.3.4-1/FL/fl_draw.H ****   */
 570:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_latin1_to_local(const char *t, int n=-1);
 571:fltk-1.3.4-1/FL/fl_draw.H **** /**
 572:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from local encoding to Windowx/X11 latin1 character set.
 573:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (local encoding)
 574:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 575:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 576:fltk-1.3.4-1/FL/fl_draw.H ****   */
 577:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_local_to_latin1(const char *t, int n=-1);
 578:fltk-1.3.4-1/FL/fl_draw.H **** /**
 579:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from Mac Roman character set to local encoding.
 580:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (Mac Roman encoding)
 581:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 582:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 583:fltk-1.3.4-1/FL/fl_draw.H ****   */
 584:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_mac_roman_to_local(const char *t, int n=-1);
 585:fltk-1.3.4-1/FL/fl_draw.H **** /**
 586:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from local encoding to Mac Roman character set.
 587:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (local encoding)
 588:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 589:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 590:fltk-1.3.4-1/FL/fl_draw.H ****   */
 591:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_local_to_mac_roman(const char *t, int n=-1);
 592:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 593:fltk-1.3.4-1/FL/fl_draw.H **** 
 594:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup  fl_drawings
 595:fltk-1.3.4-1/FL/fl_draw.H ****     @{ */
 596:fltk-1.3.4-1/FL/fl_draw.H **** /**
 597:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a nul-terminated UTF-8 string starting at the given \p x, \p y location.
 598:fltk-1.3.4-1/FL/fl_draw.H **** 
 599:fltk-1.3.4-1/FL/fl_draw.H ****   Text is aligned to the left and to the baseline of the font.
 600:fltk-1.3.4-1/FL/fl_draw.H ****   To align to the bottom, subtract fl_descent() from \p y.
 601:fltk-1.3.4-1/FL/fl_draw.H ****   To align to the top, subtract fl_descent() and add fl_height().
 602:fltk-1.3.4-1/FL/fl_draw.H ****   This version of fl_draw provides direct access to the text drawing
 603:fltk-1.3.4-1/FL/fl_draw.H ****   function of the underlying OS. It does not apply any special handling
 604:fltk-1.3.4-1/FL/fl_draw.H ****   to control characters.
 605:fltk-1.3.4-1/FL/fl_draw.H **** */
 606:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y);
 607:fltk-1.3.4-1/FL/fl_draw.H **** /**
 608:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a nul-terminated UTF-8 string starting at the given \p x, \p y
 609:fltk-1.3.4-1/FL/fl_draw.H ****   location and rotating \p angle degrees counter-clockwise.
 610:fltk-1.3.4-1/FL/fl_draw.H ****   This version of fl_draw provides direct access to the text drawing
 611:fltk-1.3.4-1/FL/fl_draw.H ****   function of the underlying OS and is supported by Xft, Win32 and MacOS
 612:fltk-1.3.4-1/FL/fl_draw.H ****   fltk subsets.
 613:fltk-1.3.4-1/FL/fl_draw.H **** */
 614:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(int angle, const char* str, int x, int y);
 615:fltk-1.3.4-1/FL/fl_draw.H **** /**
 616:fltk-1.3.4-1/FL/fl_draw.H ****  Draws starting at the given \p x, \p y location a UTF-8 string of length \p n bytes.
 617:fltk-1.3.4-1/FL/fl_draw.H **** */
 618:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw(const char* str, int n, int x, int y) {fl_graphics_driver->draw(str,n,x,y); }
 619:fltk-1.3.4-1/FL/fl_draw.H **** /**
 620:fltk-1.3.4-1/FL/fl_draw.H ****   Draws at the given \p x, \p y location a UTF-8 string of length \p n bytes
 621:fltk-1.3.4-1/FL/fl_draw.H ****   rotating \p angle degrees counter-clockwise.
 622:fltk-1.3.4-1/FL/fl_draw.H **** 
 623:fltk-1.3.4-1/FL/fl_draw.H ****   \note When using X11 (Unix, Linux, Cygwin et al.) this needs Xft to work.
 624:fltk-1.3.4-1/FL/fl_draw.H **** 	Under plain X11 (w/o Xft) rotated text is not supported by FLTK.
 625:fltk-1.3.4-1/FL/fl_draw.H **** 	A warning will be issued to stderr at runtime (only once) if you
 626:fltk-1.3.4-1/FL/fl_draw.H **** 	use this method with an angle other than 0.
 627:fltk-1.3.4-1/FL/fl_draw.H **** */
 628:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw(int angle, const char* str, int n, int x, int y) {fl_graphics_driver->draw(angl
 629:fltk-1.3.4-1/FL/fl_draw.H **** /**
 630:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a UTF-8 string of length \p n bytes right to left starting at the given \p x, \p y location
 631:fltk-1.3.4-1/FL/fl_draw.H **** */
 632:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rtl_draw(const char* str, int n, int x, int y) {fl_graphics_driver->rtl_draw(str,n,x
 633:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_measure(const char* str, int& x, int& y,
 634:fltk-1.3.4-1/FL/fl_draw.H ****                           int draw_symbols = 1);
 635:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y, int w, int h,
 636:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Align align,
 637:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Image* img=0, int draw_symbols = 1);
 638:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y, int w, int h,
 639:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Align align,
 640:fltk-1.3.4-1/FL/fl_draw.H ****                        void (*callthis)(const char *,int,int,int),
 641:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Image* img=0, int draw_symbols = 1);
 642:fltk-1.3.4-1/FL/fl_draw.H **** 
 643:fltk-1.3.4-1/FL/fl_draw.H **** // boxtypes:
 644:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_frame(const char* s, int x, int y, int w, int h);
 645:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_frame2(const char* s, int x, int y, int w, int h);
 646:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw_box(Fl_Boxtype, int x, int y, int w, int h, Fl_Color);
 647:fltk-1.3.4-1/FL/fl_draw.H **** 
 648:fltk-1.3.4-1/FL/fl_draw.H **** // images:
 649:fltk-1.3.4-1/FL/fl_draw.H **** 
 650:fltk-1.3.4-1/FL/fl_draw.H **** /**
 651:fltk-1.3.4-1/FL/fl_draw.H ****   Draws an 8-bit per color RGB or luminance image.
 652:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] buf points at the "r" data of the top-left pixel.
 653:fltk-1.3.4-1/FL/fl_draw.H ****                  Color data must be in <tt>r,g,b</tt> order.
 654:fltk-1.3.4-1/FL/fl_draw.H **** 		 Luminance data is only one <tt>gray</tt> byte.
 655:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] X,Y position where to put top-left corner of image
 656:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] W,H size of the image
 657:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] D   delta to add to the pointer between pixels. It may be
 658:fltk-1.3.4-1/FL/fl_draw.H ****                  any value greater than or equal to 1, or it can be
 659:fltk-1.3.4-1/FL/fl_draw.H **** 		 negative to flip the image horizontally
 660:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] L   delta to add to the pointer between lines (if 0 is
 661:fltk-1.3.4-1/FL/fl_draw.H ****                  passed it uses \p W * \p D), and may be larger than
 662:fltk-1.3.4-1/FL/fl_draw.H **** 		 \p W * \p D to crop data, or negative to flip the
 663:fltk-1.3.4-1/FL/fl_draw.H **** 		 image vertically
 664:fltk-1.3.4-1/FL/fl_draw.H **** 
 665:fltk-1.3.4-1/FL/fl_draw.H ****   It is highly recommended that you put the following code before the
 666:fltk-1.3.4-1/FL/fl_draw.H ****   first <tt>show()</tt> of \e any window in your program to get rid of
 667:fltk-1.3.4-1/FL/fl_draw.H ****   the dithering if possible:
 668:fltk-1.3.4-1/FL/fl_draw.H ****   \code
 669:fltk-1.3.4-1/FL/fl_draw.H ****   Fl::visual(FL_RGB);
 670:fltk-1.3.4-1/FL/fl_draw.H ****   \endcode
 671:fltk-1.3.4-1/FL/fl_draw.H **** 
 672:fltk-1.3.4-1/FL/fl_draw.H ****   Gray scale (1-channel) images may be drawn. This is done if
 673:fltk-1.3.4-1/FL/fl_draw.H ****   <tt>abs(D)</tt> is less than 3, or by calling fl_draw_image_mono().
 674:fltk-1.3.4-1/FL/fl_draw.H ****   Only one 8-bit sample is used for each pixel, and on screens with
 675:fltk-1.3.4-1/FL/fl_draw.H ****   different numbers of bits for red, green, and blue only gray colors
 676:fltk-1.3.4-1/FL/fl_draw.H ****   are used. Setting \p D greater than 1 will let you display one channel
 677:fltk-1.3.4-1/FL/fl_draw.H ****   of a color image.
 678:fltk-1.3.4-1/FL/fl_draw.H **** 
 679:fltk-1.3.4-1/FL/fl_draw.H ****   \par Note:
 680:fltk-1.3.4-1/FL/fl_draw.H ****   The X version does not support all possible visuals. If FLTK cannot
 681:fltk-1.3.4-1/FL/fl_draw.H ****   draw the image in the current visual it will abort. FLTK supports
 682:fltk-1.3.4-1/FL/fl_draw.H ****   any visual of 8 bits or less, and all common TrueColor visuals up
 683:fltk-1.3.4-1/FL/fl_draw.H ****   to 32 bits.
 684:fltk-1.3.4-1/FL/fl_draw.H ****   */
 685:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0)
 686:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->draw_image(buf, X, Y, W, H, D, L); }
 687:fltk-1.3.4-1/FL/fl_draw.H **** 
 688:fltk-1.3.4-1/FL/fl_draw.H **** /**
 689:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a gray-scale (1 channel) image.
 690:fltk-1.3.4-1/FL/fl_draw.H ****   \see fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L)
 691:fltk-1.3.4-1/FL/fl_draw.H ****   */
 692:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0)
 693:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->draw_image_mono(buf, X, Y, W, H, D, L); }
 694:fltk-1.3.4-1/FL/fl_draw.H **** 
 695:fltk-1.3.4-1/FL/fl_draw.H **** /**
 696:fltk-1.3.4-1/FL/fl_draw.H ****   Draws an image using a callback function to generate image data.
 697:fltk-1.3.4-1/FL/fl_draw.H **** 
 698:fltk-1.3.4-1/FL/fl_draw.H ****   You can generate the image as it is being drawn, or do arbitrary
 699:fltk-1.3.4-1/FL/fl_draw.H ****   decompression of stored data, provided it can be decompressed to
 700:fltk-1.3.4-1/FL/fl_draw.H ****   individual scan lines easily.
 701:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] cb   callback function to generate scan line data
 702:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] data user data passed to callback function
 703:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] X,Y  screen position of top left pixel
 704:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] W,H  image width and height
 705:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] D    data size in bytes (must be greater than 0)
 706:fltk-1.3.4-1/FL/fl_draw.H ****   \see fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L)
 707:fltk-1.3.4-1/FL/fl_draw.H **** 
 708:fltk-1.3.4-1/FL/fl_draw.H ****   The callback function \p cb is called with the <tt>void*</tt> \p data
 709:fltk-1.3.4-1/FL/fl_draw.H ****   user data pointer to allow access to a structure of information about
 710:fltk-1.3.4-1/FL/fl_draw.H ****   the image, and the \p x, \p y, and \p w of the scan line desired from
 711:fltk-1.3.4-1/FL/fl_draw.H ****   the image. 0,0 is the upper-left corner of the image, not \p x, \p y.
 712:fltk-1.3.4-1/FL/fl_draw.H ****   A pointer to a buffer to put the data into is passed. You must copy
 713:fltk-1.3.4-1/FL/fl_draw.H ****   \p w pixels from scanline \p y, starting at pixel \p x, to this buffer.
 714:fltk-1.3.4-1/FL/fl_draw.H **** 
 715:fltk-1.3.4-1/FL/fl_draw.H ****   Due to cropping, less than the whole image may be requested. So \p x
 716:fltk-1.3.4-1/FL/fl_draw.H ****   may be greater than zero, the first \p y may be greater than zero,
 717:fltk-1.3.4-1/FL/fl_draw.H ****   and \p w may be less than \p W. The buffer is long enough to store
 718:fltk-1.3.4-1/FL/fl_draw.H ****   the entire \p W * \p D pixels, this is for convenience with some
 719:fltk-1.3.4-1/FL/fl_draw.H ****   decompression schemes where you must decompress the entire line at
 720:fltk-1.3.4-1/FL/fl_draw.H ****   once: decompress it into the buffer, and then if \p x is not zero,
 721:fltk-1.3.4-1/FL/fl_draw.H ****   copy the data over so the \p x'th pixel is at the start of the buffer.
 722:fltk-1.3.4-1/FL/fl_draw.H **** 
 723:fltk-1.3.4-1/FL/fl_draw.H ****   You can assume the \p y's will be consecutive, except the first one
 724:fltk-1.3.4-1/FL/fl_draw.H ****   may be greater than zero.
 725:fltk-1.3.4-1/FL/fl_draw.H **** 
 726:fltk-1.3.4-1/FL/fl_draw.H ****   If \p D is 4 or more, you must fill in the unused bytes with zero.
 727:fltk-1.3.4-1/FL/fl_draw.H ****   */
 728:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3)
 729:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->draw_image(cb, data, X, Y, W, H, D); }
 471              		.loc 4 729 0
 472 0063 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 472      000000
 473 006a 4889DA   		movq	%rbx, %rdx
 474 006d 4589E1   		movl	%r12d, %r9d
 475 0070 4589F0   		movl	%r14d, %r8d
 476 0073 4489E9   		movl	%r13d, %ecx
 477 0076 BE000000 		movl	$_ZL14generate_imagePviiiPh, %esi
 477      00
 478 007b 488B07   		movq	(%rdi), %rax
 479 007e 6A03     		pushq	$3
 480              		.cfi_def_cfa_offset 104
 481 0080 55       		pushq	%rbp
 482              		.cfi_def_cfa_offset 112
 483 0081 FF908801 		call	*392(%rax)
 483      0000
 484              	.LVL53:
 485              	.LBE502:
 486              	.LBE501:
 312:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 487              		.loc 3 312 0
 488 0087 807B6D02 		cmpb	$2, 109(%rbx)
 489 008b 58       		popq	%rax
 490              		.cfi_def_cfa_offset 104
 491 008c 5A       		popq	%rdx
 492              		.cfi_def_cfa_offset 96
 493 008d 0F841501 		je	.L36
 493      0000
 494              	.L26:
 495 0093 4C8B7B08 		movq	8(%rbx), %r15
 496              	.LVL54:
 497 0097 F20F1005 		movsd	.LC13(%rip), %xmm0
 497      00000000 
 498 009f 488D7424 		leaq	16(%rsp), %rsi
 498      10
 499 00a4 488D7C24 		leaq	24(%rsp), %rdi
 499      18
 500 00a9 F2410F59 		mulsd	1816(%r15), %xmm0
 500      87180700 
 500      00
 501 00b2 E8000000 		call	sincos
 501      00
 502              	.LVL55:
 503 00b7 F2410F10 		movsd	1824(%r15), %xmm4
 503      A7200700 
 503      00
 504              	.LVL56:
 315:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 505              		.loc 3 315 0
 506 00c0 458D5424 		leal	-6(%r12), %r10d
 506      FA
 507 00c5 F20F104C 		movsd	16(%rsp), %xmm1
 507      2410
 316:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 508              		.loc 3 316 0
 509 00cb 448D7DFA 		leal	-6(%rbp), %r15d
 315:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 510              		.loc 3 315 0
 511 00cf 660FEFD2 		pxor	%xmm2, %xmm2
 512 00d3 F20F59CC 		mulsd	%xmm4, %xmm1
 513 00d7 F20F1005 		movsd	.LC7(%rip), %xmm0
 513      00000000 
 514 00df F2410F2A 		cvtsi2sd	%r10d, %xmm2
 514      D2
 316:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515              		.loc 3 316 0
 516 00e4 F20F5964 		mulsd	24(%rsp), %xmm4
 516      2418
 315:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 517              		.loc 3 315 0
 518 00ea F20F101D 		movsd	.LC5(%rip), %xmm3
 518      00000000 
 519 00f2 F20F58C8 		addsd	%xmm0, %xmm1
 520 00f6 F20F59CB 		mulsd	%xmm3, %xmm1
 316:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521              		.loc 3 316 0
 522 00fa F20F5CC4 		subsd	%xmm4, %xmm0
 523 00fe F20F59C3 		mulsd	%xmm3, %xmm0
 315:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 524              		.loc 3 315 0
 525 0102 F20F59CA 		mulsd	%xmm2, %xmm1
 526 0106 F20F2CC1 		cvttsd2si	%xmm1, %eax
 527              	.LVL57:
 316:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 528              		.loc 3 316 0
 529 010a 660FEFC9 		pxor	%xmm1, %xmm1
 530 010e F2410F2A 		cvtsi2sd	%r15d, %xmm1
 530      CF
 321:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 531              		.loc 3 321 0
 532 0113 85C0     		testl	%eax, %eax
 316:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 533              		.loc 3 316 0
 534 0115 F20F59C1 		mulsd	%xmm1, %xmm0
 535 0119 F20F2CF0 		cvttsd2si	%xmm0, %esi
 536              	.LVL58:
 321:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 537              		.loc 3 321 0
 538 011d 7879     		js	.L30
 321:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 539              		.loc 3 321 0 is_stmt 0 discriminator 2
 540 011f 4183EC05 		subl	$5, %r12d
 541              	.LVL59:
 542 0123 4439E0   		cmpl	%r12d, %eax
 543 0126 440F4CD0 		cmovl	%eax, %r10d
 544              	.LVL60:
 322:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 545              		.loc 3 322 0 is_stmt 1 discriminator 2
 546 012a 85F6     		testl	%esi, %esi
 547 012c 7871     		js	.L31
 548              	.LVL61:
 549              	.L37:
 550 012e 83ED05   		subl	$5, %ebp
 551              	.LVL62:
 552 0131 39EE     		cmpl	%ebp, %esi
 553 0133 440F4CFE 		cmovl	%esi, %r15d
 554              	.LVL63:
 555              	.L28:
 324:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 556              		.loc 3 324 0
 557 0137 48391D00 		cmpq	%rbx, _ZN2Fl6focus_E(%rip)
 557      000000
 558 013e BA000000 		movl	$0, %edx
 558      00
 559 0143 B8310000 		movl	$49, %eax
 559      00
 560 0148 44895424 		movl	%r10d, 12(%rsp)
 560      0C
 561 014d 438D0C37 		leal	(%r15,%r14), %ecx
 562 0151 4889DF   		movq	%rbx, %rdi
 563 0154 41B90600 		movl	$6, %r9d
 563      0000
 564 015a 41B80600 		movl	$6, %r8d
 564      0000
 565 0160 BE020000 		movl	$2, %esi
 565      00
 566 0165 0F44C2   		cmove	%edx, %eax
 567 0168 4883EC08 		subq	$8, %rsp
 568              		.cfi_def_cfa_offset 104
 569 016c 438D142A 		leal	(%r10,%r13), %edx
 570 0170 50       		pushq	%rax
 571              		.cfi_def_cfa_offset 112
 572 0171 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 572      00
 573              	.LVL64:
 325:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 574              		.loc 3 325 0
 575 0176 448B5424 		movl	28(%rsp), %r10d
 575      1C
 576 017b 44897B7C 		movl	%r15d, 124(%rbx)
 577 017f 44895378 		movl	%r10d, 120(%rbx)
 326:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 578              		.loc 3 326 0
 579 0183 4883C438 		addq	$56, %rsp
 580              		.cfi_def_cfa_offset 56
 581 0187 5B       		popq	%rbx
 582              		.cfi_def_cfa_offset 48
 583              	.LVL65:
 584 0188 5D       		popq	%rbp
 585              		.cfi_def_cfa_offset 40
 586 0189 415C     		popq	%r12
 587              		.cfi_def_cfa_offset 32
 588 018b 415D     		popq	%r13
 589              		.cfi_def_cfa_offset 24
 590              	.LVL66:
 591 018d 415E     		popq	%r14
 592              		.cfi_def_cfa_offset 16
 593              	.LVL67:
 594 018f 415F     		popq	%r15
 595              		.cfi_def_cfa_offset 8
 596              	.LVL68:
 597 0191 C3       		ret
 598              	.LVL69:
 599              		.p2align 4,,10
 600 0192 660F1F44 		.p2align 3
 600      0000
 601              	.L30:
 602              		.cfi_def_cfa_offset 96
 321:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 603              		.loc 3 321 0
 604 0198 4531D2   		xorl	%r10d, %r10d
 605              	.LVL70:
 322:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 606              		.loc 3 322 0
 607 019b 85F6     		testl	%esi, %esi
 608 019d 798F     		jns	.L37
 609              	.LVL71:
 610              	.L31:
 611 019f 4531FF   		xorl	%r15d, %r15d
 612 01a2 EB93     		jmp	.L28
 613              	.LVL72:
 614              		.p2align 4,,10
 615 01a4 0F1F4000 		.p2align 3
 616              	.L36:
 617              	.LBB503:
 618              	.LBB504:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 619              		.loc 4 103 0
 620 01a8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 620      000000
 621 01af 488B07   		movq	(%rdi), %rax
 622 01b2 FF907001 		call	*368(%rax)
 622      0000
 623              	.LVL73:
 624 01b8 E9D6FEFF 		jmp	.L26
 624      FF
 625              	.LVL74:
 626 01bd 0F1F00   		.p2align 4,,10
 627              		.p2align 3
 628              	.L35:
 629              	.LBE504:
 630              	.LBE503:
 631              	.LBB505:
 632              	.LBB506:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 633              		.loc 4 82 0 discriminator 1
 634 01c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 634      000000
 635 01c7 8B537C   		movl	124(%rbx), %edx
 636 01ca 41B80600 		movl	$6, %r8d
 636      0000
 637 01d0 8B7378   		movl	120(%rbx), %esi
 638 01d3 B9060000 		movl	$6, %ecx
 638      00
 639 01d8 488B07   		movq	(%rdi), %rax
 640 01db 4401F2   		addl	%r14d, %edx
 641              	.LVL75:
 642 01de 4401EE   		addl	%r13d, %esi
 643              	.LVL76:
 644 01e1 FF905001 		call	*336(%rax)
 644      0000
 645              	.LVL77:
 646 01e7 E977FEFF 		jmp	.L25
 646      FF
 647              	.LVL78:
 648 01ec 0F1F4000 		.p2align 4,,10
 649              		.p2align 3
 650              	.L34:
 651              	.LBE506:
 652              	.LBE505:
 305:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 653              		.loc 3 305 0 discriminator 1
 654 01f0 E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 654      00
 655              	.LVL79:
 656 01f5 E921FEFF 		jmp	.L24
 656      FF
 657              		.cfi_endproc
 658              	.LFE638:
 660              		.section	.text.unlikely._ZN11Flcc_HueBox4drawEv
 661              	.LCOLDE14:
 662              		.section	.text._ZN11Flcc_HueBox4drawEv
 663              	.LHOTE14:
 664              		.section	.text.unlikely._ZN13Flcc_ValueBoxD2Ev,"axG",@progbits,_ZN13Flcc_ValueBoxD5Ev,comdat
 665              		.align 2
 666              	.LCOLDB15:
 667              		.section	.text._ZN13Flcc_ValueBoxD2Ev,"axG",@progbits,_ZN13Flcc_ValueBoxD5Ev,comdat
 668              	.LHOTB15:
 669              		.align 2
 670              		.p2align 4,,15
 671              		.weak	_ZN13Flcc_ValueBoxD2Ev
 673              	_ZN13Flcc_ValueBoxD2Ev:
 674              	.LFB663:
 675              		.file 5 "fltk-1.3.4-1/FL/Fl_Color_Chooser.H"
   1:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //
   2:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // "$Id: Fl_Color_Chooser.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //
   4:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // Color chooser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //
   6:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //
   8:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //
  12:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //
  14:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //
  16:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** //
  18:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  19:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****    Fl_Color_Chooser widget . */
  21:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  22:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // The color chooser object and the color chooser popup.  The popup
  23:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // is just a window containing a single color chooser and some boxes
  24:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** // to indicate the current and cancelled color.
  25:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  26:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #ifndef Fl_Color_Chooser_H
  27:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #define Fl_Color_Chooser_H
  28:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  29:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #include <FL/Fl_Group.H>
  30:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #include <FL/Fl_Box.H>
  31:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #include <FL/Fl_Return_Button.H>
  32:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #include <FL/Fl_Choice.H>
  33:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #include <FL/Fl_Value_Input.H>
  34:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  35:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #ifndef FL_DOXYGEN
  36:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  37:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** /** For internal use only */
  38:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** class FL_EXPORT Flcc_HueBox : public Fl_Widget {
  39:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int px, py;
  40:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** protected:
  41:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   void draw();
  42:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int handle_key(int);
  43:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** public:
  44:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int handle(int);
  45:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   Flcc_HueBox(int X, int Y, int W, int H) : Fl_Widget(X,Y,W,H) {
  46:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   px = py = 0;}
  47:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** };
  48:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  49:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** /** For internal use only */
  50:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** class FL_EXPORT Flcc_ValueBox : public Fl_Widget {
 676              		.loc 5 50 0
 677              		.cfi_startproc
 678              	.LVL80:
 679              	.LBB507:
 680              		.loc 5 50 0
 681 0000 48C70700 		movq	$_ZTV13Flcc_ValueBox+16, (%rdi)
 681      000000
 682 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 682      00
 683              	.LVL81:
 684              	.LBE507:
 685              		.cfi_endproc
 686              	.LFE663:
 688              		.section	.text.unlikely._ZN13Flcc_ValueBoxD2Ev,"axG",@progbits,_ZN13Flcc_ValueBoxD5Ev,comdat
 689              	.LCOLDE15:
 690              		.section	.text._ZN13Flcc_ValueBoxD2Ev,"axG",@progbits,_ZN13Flcc_ValueBoxD5Ev,comdat
 691              	.LHOTE15:
 692              		.weak	_ZN13Flcc_ValueBoxD1Ev
 693              		.set	_ZN13Flcc_ValueBoxD1Ev,_ZN13Flcc_ValueBoxD2Ev
 694              		.section	.text.unlikely._ZN13Flcc_ValueBoxD0Ev,"axG",@progbits,_ZN13Flcc_ValueBoxD5Ev,comdat
 695              		.align 2
 696              	.LCOLDB16:
 697              		.section	.text._ZN13Flcc_ValueBoxD0Ev,"axG",@progbits,_ZN13Flcc_ValueBoxD5Ev,comdat
 698              	.LHOTB16:
 699              		.align 2
 700              		.p2align 4,,15
 701              		.weak	_ZN13Flcc_ValueBoxD0Ev
 703              	_ZN13Flcc_ValueBoxD0Ev:
 704              	.LFB665:
 705              		.loc 5 50 0
 706              		.cfi_startproc
 707              	.LVL82:
 708 0000 53       		pushq	%rbx
 709              		.cfi_def_cfa_offset 16
 710              		.cfi_offset 3, -16
 711              		.loc 5 50 0
 712 0001 4889FB   		movq	%rdi, %rbx
 713              	.LBB508:
 714              	.LBB509:
 715 0004 48C70700 		movq	$_ZTV13Flcc_ValueBox+16, (%rdi)
 715      000000
 716 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 716      00
 717              	.LVL83:
 718              	.LBE509:
 719              	.LBE508:
 720 0010 4889DF   		movq	%rbx, %rdi
 721 0013 5B       		popq	%rbx
 722              		.cfi_def_cfa_offset 8
 723              	.LVL84:
 724 0014 E9000000 		jmp	_ZdlPv
 724      00
 725              	.LVL85:
 726              		.cfi_endproc
 727              	.LFE665:
 729              		.section	.text.unlikely._ZN13Flcc_ValueBoxD0Ev,"axG",@progbits,_ZN13Flcc_ValueBoxD5Ev,comdat
 730              	.LCOLDE16:
 731              		.section	.text._ZN13Flcc_ValueBoxD0Ev,"axG",@progbits,_ZN13Flcc_ValueBoxD5Ev,comdat
 732              	.LHOTE16:
 733              		.section	.text.unlikely._ZN11Flcc_HueBoxD2Ev,"axG",@progbits,_ZN11Flcc_HueBoxD5Ev,comdat
 734              		.align 2
 735              	.LCOLDB17:
 736              		.section	.text._ZN11Flcc_HueBoxD2Ev,"axG",@progbits,_ZN11Flcc_HueBoxD5Ev,comdat
 737              	.LHOTB17:
 738              		.align 2
 739              		.p2align 4,,15
 740              		.weak	_ZN11Flcc_HueBoxD2Ev
 742              	_ZN11Flcc_HueBoxD2Ev:
 743              	.LFB667:
  38:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int px, py;
 744              		.loc 5 38 0
 745              		.cfi_startproc
 746              	.LVL86:
 747              	.LBB510:
  38:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int px, py;
 748              		.loc 5 38 0
 749 0000 48C70700 		movq	$_ZTV11Flcc_HueBox+16, (%rdi)
 749      000000
 750 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 750      00
 751              	.LVL87:
 752              	.LBE510:
 753              		.cfi_endproc
 754              	.LFE667:
 756              		.section	.text.unlikely._ZN11Flcc_HueBoxD2Ev,"axG",@progbits,_ZN11Flcc_HueBoxD5Ev,comdat
 757              	.LCOLDE17:
 758              		.section	.text._ZN11Flcc_HueBoxD2Ev,"axG",@progbits,_ZN11Flcc_HueBoxD5Ev,comdat
 759              	.LHOTE17:
 760              		.weak	_ZN11Flcc_HueBoxD1Ev
 761              		.set	_ZN11Flcc_HueBoxD1Ev,_ZN11Flcc_HueBoxD2Ev
 762              		.section	.text.unlikely._ZN11Flcc_HueBoxD0Ev,"axG",@progbits,_ZN11Flcc_HueBoxD5Ev,comdat
 763              		.align 2
 764              	.LCOLDB18:
 765              		.section	.text._ZN11Flcc_HueBoxD0Ev,"axG",@progbits,_ZN11Flcc_HueBoxD5Ev,comdat
 766              	.LHOTB18:
 767              		.align 2
 768              		.p2align 4,,15
 769              		.weak	_ZN11Flcc_HueBoxD0Ev
 771              	_ZN11Flcc_HueBoxD0Ev:
 772              	.LFB669:
  38:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int px, py;
 773              		.loc 5 38 0
 774              		.cfi_startproc
 775              	.LVL88:
 776 0000 53       		pushq	%rbx
 777              		.cfi_def_cfa_offset 16
 778              		.cfi_offset 3, -16
  38:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int px, py;
 779              		.loc 5 38 0
 780 0001 4889FB   		movq	%rdi, %rbx
 781              	.LBB511:
 782              	.LBB512:
 783 0004 48C70700 		movq	$_ZTV11Flcc_HueBox+16, (%rdi)
 783      000000
 784 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 784      00
 785              	.LVL89:
 786              	.LBE512:
 787              	.LBE511:
 788 0010 4889DF   		movq	%rbx, %rdi
 789 0013 5B       		popq	%rbx
 790              		.cfi_def_cfa_offset 8
 791              	.LVL90:
 792 0014 E9000000 		jmp	_ZdlPv
 792      00
 793              	.LVL91:
 794              		.cfi_endproc
 795              	.LFE669:
 797              		.section	.text.unlikely._ZN11Flcc_HueBoxD0Ev,"axG",@progbits,_ZN11Flcc_HueBoxD5Ev,comdat
 798              	.LCOLDE18:
 799              		.section	.text._ZN11Flcc_HueBoxD0Ev,"axG",@progbits,_ZN11Flcc_HueBoxD5Ev,comdat
 800              	.LHOTE18:
 801              		.section	.text.unlikely._ZN9ColorChipD2Ev,"axG",@progbits,_ZN9ColorChipD5Ev,comdat
 802              		.align 2
 803              	.LCOLDB19:
 804              		.section	.text._ZN9ColorChipD2Ev,"axG",@progbits,_ZN9ColorChipD5Ev,comdat
 805              	.LHOTB19:
 806              		.align 2
 807              		.p2align 4,,15
 808              		.weak	_ZN9ColorChipD2Ev
 810              	_ZN9ColorChipD2Ev:
 811              	.LFB659:
 501:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 812              		.loc 3 501 0
 813              		.cfi_startproc
 814              	.LVL92:
 815              	.LBB513:
 501:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 816              		.loc 3 501 0
 817 0000 48C70700 		movq	$_ZTV9ColorChip+16, (%rdi)
 817      000000
 818 0007 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 818      00
 819              	.LVL93:
 820              	.LBE513:
 821              		.cfi_endproc
 822              	.LFE659:
 824              		.section	.text.unlikely._ZN9ColorChipD2Ev,"axG",@progbits,_ZN9ColorChipD5Ev,comdat
 825              	.LCOLDE19:
 826              		.section	.text._ZN9ColorChipD2Ev,"axG",@progbits,_ZN9ColorChipD5Ev,comdat
 827              	.LHOTE19:
 828              		.weak	_ZN9ColorChipD1Ev
 829              		.set	_ZN9ColorChipD1Ev,_ZN9ColorChipD2Ev
 830              		.section	.text.unlikely._ZN9ColorChipD0Ev,"axG",@progbits,_ZN9ColorChipD5Ev,comdat
 831              		.align 2
 832              	.LCOLDB20:
 833              		.section	.text._ZN9ColorChipD0Ev,"axG",@progbits,_ZN9ColorChipD5Ev,comdat
 834              	.LHOTB20:
 835              		.align 2
 836              		.p2align 4,,15
 837              		.weak	_ZN9ColorChipD0Ev
 839              	_ZN9ColorChipD0Ev:
 840              	.LFB661:
 501:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 841              		.loc 3 501 0
 842              		.cfi_startproc
 843              	.LVL94:
 844 0000 53       		pushq	%rbx
 845              		.cfi_def_cfa_offset 16
 846              		.cfi_offset 3, -16
 501:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 847              		.loc 3 501 0
 848 0001 4889FB   		movq	%rdi, %rbx
 849              	.LBB514:
 850              	.LBB515:
 851 0004 48C70700 		movq	$_ZTV9ColorChip+16, (%rdi)
 851      000000
 852 000b E8000000 		call	_ZN9Fl_WidgetD2Ev
 852      00
 853              	.LVL95:
 854              	.LBE515:
 855              	.LBE514:
 856 0010 4889DF   		movq	%rbx, %rdi
 857 0013 5B       		popq	%rbx
 858              		.cfi_def_cfa_offset 8
 859              	.LVL96:
 860 0014 E9000000 		jmp	_ZdlPv
 860      00
 861              	.LVL97:
 862              		.cfi_endproc
 863              	.LFE661:
 865              		.section	.text.unlikely._ZN9ColorChipD0Ev,"axG",@progbits,_ZN9ColorChipD5Ev,comdat
 866              	.LCOLDE20:
 867              		.section	.text._ZN9ColorChipD0Ev,"axG",@progbits,_ZN9ColorChipD5Ev,comdat
 868              	.LHOTE20:
 869              		.section	.text.unlikely._ZN16Flcc_Value_InputD2Ev,"axG",@progbits,_ZN16Flcc_Value_InputD5Ev,comdat
 870              		.align 2
 871              	.LCOLDB21:
 872              		.section	.text._ZN16Flcc_Value_InputD2Ev,"axG",@progbits,_ZN16Flcc_Value_InputD5Ev,comdat
 873              	.LHOTB21:
 874              		.align 2
 875              		.p2align 4,,15
 876              		.weak	_ZN16Flcc_Value_InputD2Ev
 878              	_ZN16Flcc_Value_InputD2Ev:
 879              	.LFB671:
  51:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int py;
  52:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** protected:
  53:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   void draw();
  54:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int handle_key(int);
  55:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** public:
  56:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int handle(int);
  57:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   Flcc_ValueBox(int X, int Y, int W, int H) : Fl_Widget(X,Y,W,H) {
  58:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   py = 0;}
  59:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** };
  60:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  61:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** /** For internal use only */
  62:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** class FL_EXPORT Flcc_Value_Input : public Fl_Value_Input {
 880              		.loc 5 62 0
 881              		.cfi_startproc
 882              	.LVL98:
 883              	.LBB516:
 884              		.loc 5 62 0
 885 0000 48C70700 		movq	$_ZTV16Flcc_Value_Input+16, (%rdi)
 885      000000
 886 0007 E9000000 		jmp	_ZN14Fl_Value_InputD2Ev
 886      00
 887              	.LVL99:
 888              	.LBE516:
 889              		.cfi_endproc
 890              	.LFE671:
 892              		.section	.text.unlikely._ZN16Flcc_Value_InputD2Ev,"axG",@progbits,_ZN16Flcc_Value_InputD5Ev,comdat
 893              	.LCOLDE21:
 894              		.section	.text._ZN16Flcc_Value_InputD2Ev,"axG",@progbits,_ZN16Flcc_Value_InputD5Ev,comdat
 895              	.LHOTE21:
 896              		.weak	_ZN16Flcc_Value_InputD1Ev
 897              		.set	_ZN16Flcc_Value_InputD1Ev,_ZN16Flcc_Value_InputD2Ev
 898              		.section	.text.unlikely._ZN16Flcc_Value_InputD0Ev,"axG",@progbits,_ZN16Flcc_Value_InputD5Ev,comdat
 899              		.align 2
 900              	.LCOLDB22:
 901              		.section	.text._ZN16Flcc_Value_InputD0Ev,"axG",@progbits,_ZN16Flcc_Value_InputD5Ev,comdat
 902              	.LHOTB22:
 903              		.align 2
 904              		.p2align 4,,15
 905              		.weak	_ZN16Flcc_Value_InputD0Ev
 907              	_ZN16Flcc_Value_InputD0Ev:
 908              	.LFB673:
 909              		.loc 5 62 0
 910              		.cfi_startproc
 911              	.LVL100:
 912 0000 53       		pushq	%rbx
 913              		.cfi_def_cfa_offset 16
 914              		.cfi_offset 3, -16
 915              		.loc 5 62 0
 916 0001 4889FB   		movq	%rdi, %rbx
 917              	.LBB517:
 918              	.LBB518:
 919 0004 48C70700 		movq	$_ZTV16Flcc_Value_Input+16, (%rdi)
 919      000000
 920 000b E8000000 		call	_ZN14Fl_Value_InputD2Ev
 920      00
 921              	.LVL101:
 922              	.LBE518:
 923              	.LBE517:
 924 0010 4889DF   		movq	%rbx, %rdi
 925 0013 5B       		popq	%rbx
 926              		.cfi_def_cfa_offset 8
 927              	.LVL102:
 928 0014 E9000000 		jmp	_ZdlPv
 928      00
 929              	.LVL103:
 930              		.cfi_endproc
 931              	.LFE673:
 933              		.section	.text.unlikely._ZN16Flcc_Value_InputD0Ev,"axG",@progbits,_ZN16Flcc_Value_InputD5Ev,comdat
 934              	.LCOLDE22:
 935              		.section	.text._ZN16Flcc_Value_InputD0Ev,"axG",@progbits,_ZN16Flcc_Value_InputD5Ev,comdat
 936              	.LHOTE22:
 937              		.section	.text.unlikely._ZN16Fl_Color_ChooserD2Ev,"axG",@progbits,_ZN16Fl_Color_ChooserD5Ev,comdat
 938              		.align 2
 939              	.LCOLDB23:
 940              		.section	.text._ZN16Fl_Color_ChooserD2Ev,"axG",@progbits,_ZN16Fl_Color_ChooserD5Ev,comdat
 941              	.LHOTB23:
 942              		.align 2
 943              		.p2align 4,,15
 944              		.weak	_ZN16Fl_Color_ChooserD2Ev
 946              	_ZN16Fl_Color_ChooserD2Ev:
 947              	.LFB675:
  63:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** public:
  64:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int format(char*);
  65:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   Flcc_Value_Input(int X, int Y, int W, int H) : Fl_Value_Input(X,Y,W,H) {}
  66:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** };
  67:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  68:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** #endif // !FL_DOXYGEN
  69:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  70:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** /** \addtogroup group_comdlg 
  71:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****     @{ */
  72:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  73:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** /**
  74:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   \class Fl_Color_Chooser
  75:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   \brief The Fl_Color_Chooser widget provides a standard RGB color chooser.
  76:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  77:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   \image html fl_color_chooser.jpg
  78:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   \image latex fl_color_chooser.jpg "fl_color_chooser()" width=5cm
  79:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  80:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   You can place any number of the widgets into a panel of your own design.
  81:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   The diagram shows the widget as part of a color chooser dialog created by
  82:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   the fl_color_chooser() function. The Fl_Color_Chooser widget contains the
  83:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   hue box, value slider, and rgb input fields from the above diagram (it
  84:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   does not have the color chips or the Cancel or OK buttons).
  85:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   The callback is done every time the user changes the rgb value. It is not
  86:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   done if they move the hue control in a way that produces the \e same rgb
  87:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   value, such as when saturation or value is zero.
  88:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  89:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   The fl_color_chooser() function pops up a window to let the user pick an
  90:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   arbitrary RGB color. They can pick the hue and saturation in the "hue box"
  91:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   on the left (hold down CTRL to just change the saturation), and the
  92:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   brightness using the vertical slider. Or they can type the 8-bit numbers
  93:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   into the RGB Fl_Value_Input fields, or drag the mouse across them to adjust
  94:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   them.  The pull-down menu lets the user set the input fields to show RGB,
  95:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   HSV, or 8-bit RGB (0 to 255).
  96:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
  97:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   fl_color_chooser() returns non-zero if the user picks ok, and updates the
  98:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   RGB values.  If the user picks cancel or closes the window this returns
  99:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   zero and leaves RGB unchanged.
 100:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** 
 101:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   If you use the color chooser on an 8-bit screen, it will allocate all the
 102:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   available colors, leaving you no space to exactly represent the color the
 103:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   user picks! You can however use fl_rectf() to fill a region with a simulated
 104:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   color using dithering.
 105:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****  */
 106:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** /** @} */
 107:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** class FL_EXPORT Fl_Color_Chooser : public Fl_Group {
 948              		.loc 5 107 0
 949              		.cfi_startproc
 950              	.LVL104:
 951 0000 53       		pushq	%rbx
 952              		.cfi_def_cfa_offset 16
 953              		.cfi_offset 3, -16
 954              		.loc 5 107 0
 955 0001 4889FB   		movq	%rdi, %rbx
 956              	.LBB534:
 957 0004 48C70700 		movq	$_ZTV16Fl_Color_Chooser+16, (%rdi)
 957      000000
 958              	.LVL105:
 959              	.LBB535:
 960              	.LBB536:
 961              		.file 6 "fltk-1.3.4-1/FL/Fl_Box.H"
   1:fltk-1.3.4-1/FL/Fl_Box.H **** //
   2:fltk-1.3.4-1/FL/Fl_Box.H **** // "$Id: Fl_Box.H 9672 2012-08-17 09:18:06Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Box.H **** //
   4:fltk-1.3.4-1/FL/Fl_Box.H **** // Box header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Box.H **** //
   6:fltk-1.3.4-1/FL/Fl_Box.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Box.H **** //
   8:fltk-1.3.4-1/FL/Fl_Box.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Box.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Box.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Box.H **** //
  12:fltk-1.3.4-1/FL/Fl_Box.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Box.H **** //
  14:fltk-1.3.4-1/FL/Fl_Box.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Box.H **** //
  16:fltk-1.3.4-1/FL/Fl_Box.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Box.H **** //
  18:fltk-1.3.4-1/FL/Fl_Box.H **** 
  19:fltk-1.3.4-1/FL/Fl_Box.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Box.H ****    Fl_Box widget . */
  21:fltk-1.3.4-1/FL/Fl_Box.H **** 
  22:fltk-1.3.4-1/FL/Fl_Box.H **** #ifndef Fl_Box_H
  23:fltk-1.3.4-1/FL/Fl_Box.H **** #define Fl_Box_H
  24:fltk-1.3.4-1/FL/Fl_Box.H **** 
  25:fltk-1.3.4-1/FL/Fl_Box.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Box.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Box.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Box.H **** 
  29:fltk-1.3.4-1/FL/Fl_Box.H **** /**
  30:fltk-1.3.4-1/FL/Fl_Box.H ****   This widget simply draws its box, and possibly its label.  Putting it
  31:fltk-1.3.4-1/FL/Fl_Box.H ****   before some other widgets and making it big enough to surround them
  32:fltk-1.3.4-1/FL/Fl_Box.H ****   will let you draw a frame around them.
  33:fltk-1.3.4-1/FL/Fl_Box.H **** */
  34:fltk-1.3.4-1/FL/Fl_Box.H **** class FL_EXPORT Fl_Box : public Fl_Widget {
 962              		.loc 6 34 0
 963 000b 48C787A0 		movq	$_ZTV6Fl_Box+16, 1696(%rdi)
 963      06000000 
 963      000000
 964 0016 488DBFA0 		leaq	1696(%rdi), %rdi
 964      060000
 965              	.LVL106:
 966 001d E8000000 		call	_ZN9Fl_WidgetD2Ev
 966      00
 967              	.LVL107:
 968              	.LBE536:
 969              	.LBE535:
 970              	.LBB537:
 971              	.LBB538:
  62:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** public:
 972              		.loc 5 62 0
 973 0022 488DBB28 		leaq	1320(%rbx), %rdi
 973      050000
 974              	.LVL108:
 975 0029 48C78328 		movq	$_ZTV16Flcc_Value_Input+16, 1320(%rbx)
 975      05000000 
 975      000000
 976 0034 E8000000 		call	_ZN14Fl_Value_InputD2Ev
 976      00
 977              	.LVL109:
 978              	.LBE538:
 979              	.LBE537:
 980              	.LBB539:
 981              	.LBB540:
 982 0039 488DBBB0 		leaq	944(%rbx), %rdi
 982      030000
 983              	.LVL110:
 984 0040 48C783B0 		movq	$_ZTV16Flcc_Value_Input+16, 944(%rbx)
 984      03000000 
 984      000000
 985 004b E8000000 		call	_ZN14Fl_Value_InputD2Ev
 985      00
 986              	.LVL111:
 987              	.LBE540:
 988              	.LBE539:
 989              	.LBB541:
 990              	.LBB542:
 991 0050 488DBB38 		leaq	568(%rbx), %rdi
 991      020000
 992              	.LVL112:
 993 0057 48C78338 		movq	$_ZTV16Flcc_Value_Input+16, 568(%rbx)
 993      02000000 
 993      000000
 994 0062 E8000000 		call	_ZN14Fl_Value_InputD2Ev
 994      00
 995              	.LVL113:
 996              	.LBE542:
 997              	.LBE541:
 998              	.LBB543:
 999              	.LBB544:
 1000              		.file 7 "fltk-1.3.4-1/FL/Fl_Choice.H"
   1:fltk-1.3.4-1/FL/Fl_Choice.H **** //
   2:fltk-1.3.4-1/FL/Fl_Choice.H **** // "$Id: Fl_Choice.H 10513 2015-01-10 22:05:15Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Choice.H **** //
   4:fltk-1.3.4-1/FL/Fl_Choice.H **** // Choice header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Choice.H **** //
   6:fltk-1.3.4-1/FL/Fl_Choice.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Choice.H **** //
   8:fltk-1.3.4-1/FL/Fl_Choice.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Choice.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Choice.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Choice.H **** //
  12:fltk-1.3.4-1/FL/Fl_Choice.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Choice.H **** //
  14:fltk-1.3.4-1/FL/Fl_Choice.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Choice.H **** //
  16:fltk-1.3.4-1/FL/Fl_Choice.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Choice.H **** //
  18:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  19:fltk-1.3.4-1/FL/Fl_Choice.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Choice.H ****    Fl_Choice widget . */
  21:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  22:fltk-1.3.4-1/FL/Fl_Choice.H **** #ifndef Fl_Choice_H
  23:fltk-1.3.4-1/FL/Fl_Choice.H **** #define Fl_Choice_H
  24:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  25:fltk-1.3.4-1/FL/Fl_Choice.H **** #include "Fl_Menu_.H"
  26:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  27:fltk-1.3.4-1/FL/Fl_Choice.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Choice.H ****   \class Fl_Choice
  29:fltk-1.3.4-1/FL/Fl_Choice.H ****   \brief A button that is used to pop up a menu.
  30:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  31:fltk-1.3.4-1/FL/Fl_Choice.H ****   This is a button that, when pushed, pops up a menu (or hierarchy of menus)
  32:fltk-1.3.4-1/FL/Fl_Choice.H ****   defined by an array of Fl_Menu_Item objects.
  33:fltk-1.3.4-1/FL/Fl_Choice.H ****   Motif calls this an OptionButton.
  34:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  35:fltk-1.3.4-1/FL/Fl_Choice.H ****   The only difference between this and a Fl_Menu_Button is that the name of
  36:fltk-1.3.4-1/FL/Fl_Choice.H ****   the most recent chosen menu item is displayed inside the box, while the
  37:fltk-1.3.4-1/FL/Fl_Choice.H ****   label is displayed outside the box. However, since the use of this is most
  38:fltk-1.3.4-1/FL/Fl_Choice.H ****   often to control a single variable rather than do individual callbacks,
  39:fltk-1.3.4-1/FL/Fl_Choice.H ****   some of the Fl_Menu_Button methods are redescribed here in those terms.
  40:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  41:fltk-1.3.4-1/FL/Fl_Choice.H ****   When the user clicks a menu item, value() is set to that item
  42:fltk-1.3.4-1/FL/Fl_Choice.H ****   and then:
  43:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  44:fltk-1.3.4-1/FL/Fl_Choice.H ****       - The item's callback is done if one has been set; the
  45:fltk-1.3.4-1/FL/Fl_Choice.H ****         Fl_Choice is passed as the Fl_Widget* argument, 
  46:fltk-1.3.4-1/FL/Fl_Choice.H ****         along with any userdata configured for the callback.
  47:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  48:fltk-1.3.4-1/FL/Fl_Choice.H ****       - If the item does not have a callback, the Fl_Choice widget's
  49:fltk-1.3.4-1/FL/Fl_Choice.H ****         callback is done instead, along with any userdata configured
  50:fltk-1.3.4-1/FL/Fl_Choice.H ****         for it.  The callback can determine which item was picked using
  51:fltk-1.3.4-1/FL/Fl_Choice.H ****         value(), mvalue(), item_pathname(), etc.
  52:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  53:fltk-1.3.4-1/FL/Fl_Choice.H ****   All three mouse buttons pop up the menu. The Forms behavior of the first
  54:fltk-1.3.4-1/FL/Fl_Choice.H ****   two buttons to increment/decrement the choice is not implemented.  This
  55:fltk-1.3.4-1/FL/Fl_Choice.H ****   could be added with a subclass, however.
  56:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  57:fltk-1.3.4-1/FL/Fl_Choice.H ****   The menu will also pop up in response to shortcuts indicated by putting
  58:fltk-1.3.4-1/FL/Fl_Choice.H ****   a '\&' character in the label().  See Fl_Button::shortcut(int s) for a
  59:fltk-1.3.4-1/FL/Fl_Choice.H ****   description of this.
  60:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  61:fltk-1.3.4-1/FL/Fl_Choice.H ****   Typing the shortcut() of any of the items will do exactly the same as when
  62:fltk-1.3.4-1/FL/Fl_Choice.H ****   you pick the item with the mouse.  The '\&' character in item names are
  63:fltk-1.3.4-1/FL/Fl_Choice.H ****   only looked at when the menu is popped up, however.
  64:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  65:fltk-1.3.4-1/FL/Fl_Choice.H ****   \image html choice.png
  66:fltk-1.3.4-1/FL/Fl_Choice.H ****   \image latex choice.png  "Fl_Choice" width=4cm
  67:fltk-1.3.4-1/FL/Fl_Choice.H ****   \todo Refactor the doxygen comments for Fl_Choice changed() documentation.
  68:fltk-1.3.4-1/FL/Fl_Choice.H **** 
  69:fltk-1.3.4-1/FL/Fl_Choice.H ****   \li <tt>int Fl_Widget::changed() const</tt>
  70:fltk-1.3.4-1/FL/Fl_Choice.H ****       This value is true the user picks a different value. <em>It is turned
  71:fltk-1.3.4-1/FL/Fl_Choice.H ****       off by value() and just before doing a callback (the callback can turn
  72:fltk-1.3.4-1/FL/Fl_Choice.H ****       it back on if desired).</em>
  73:fltk-1.3.4-1/FL/Fl_Choice.H ****   \li <tt>void Fl_Widget::set_changed()</tt>
  74:fltk-1.3.4-1/FL/Fl_Choice.H ****       This method sets the changed() flag.
  75:fltk-1.3.4-1/FL/Fl_Choice.H ****   \li <tt>void Fl_Widget::clear_changed()</tt>
  76:fltk-1.3.4-1/FL/Fl_Choice.H ****       This method clears the changed() flag.
  77:fltk-1.3.4-1/FL/Fl_Choice.H ****   \li <tt>Fl_Boxtype Fl_Choice::down_box() const</tt>
  78:fltk-1.3.4-1/FL/Fl_Choice.H ****       Gets the current down box, which is used when the menu is popped up.
  79:fltk-1.3.4-1/FL/Fl_Choice.H ****       The default down box type is \c FL_DOWN_BOX.
  80:fltk-1.3.4-1/FL/Fl_Choice.H ****   \li <tt>void Fl_Choice::down_box(Fl_Boxtype b)</tt>
  81:fltk-1.3.4-1/FL/Fl_Choice.H ****       Sets the current down box type to \p b.
  82:fltk-1.3.4-1/FL/Fl_Choice.H ****  */
  83:fltk-1.3.4-1/FL/Fl_Choice.H **** class FL_EXPORT Fl_Choice : public Fl_Menu_ {
 1001              		.loc 7 83 0
 1002 0067 488DBBA0 		leaq	416(%rbx), %rdi
 1002      010000
 1003              	.LVL114:
 1004 006e 48C783A0 		movq	$_ZTV9Fl_Choice+16, 416(%rbx)
 1004      01000000 
 1004      000000
 1005 0079 E8000000 		call	_ZN8Fl_Menu_D2Ev
 1005      00
 1006              	.LVL115:
 1007              	.LBE544:
 1008              	.LBE543:
 1009              	.LBB545:
 1010              	.LBB546:
  50:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int py;
 1011              		.loc 5 50 0
 1012 007e 488DBB20 		leaq	288(%rbx), %rdi
 1012      010000
 1013              	.LVL116:
 1014 0085 48C78320 		movq	$_ZTV13Flcc_ValueBox+16, 288(%rbx)
 1014      01000000 
 1014      000000
 1015 0090 E8000000 		call	_ZN9Fl_WidgetD2Ev
 1015      00
 1016              	.LVL117:
 1017              	.LBE546:
 1018              	.LBE545:
 1019              	.LBB547:
 1020              	.LBB548:
  38:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int px, py;
 1021              		.loc 5 38 0
 1022 0095 488DBBA0 		leaq	160(%rbx), %rdi
 1022      000000
 1023              	.LVL118:
 1024 009c 48C783A0 		movq	$_ZTV11Flcc_HueBox+16, 160(%rbx)
 1024      00000000 
 1024      000000
 1025 00a7 E8000000 		call	_ZN9Fl_WidgetD2Ev
 1025      00
 1026              	.LVL119:
 1027              	.LBE548:
 1028              	.LBE547:
 1029              		.loc 5 107 0
 1030 00ac 4889DF   		movq	%rbx, %rdi
 1031              	.LBE534:
 1032 00af 5B       		popq	%rbx
 1033              		.cfi_def_cfa_offset 8
 1034              	.LVL120:
 1035              	.LBB549:
 1036 00b0 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 1036      00
 1037              	.LVL121:
 1038              	.LBE549:
 1039              		.cfi_endproc
 1040              	.LFE675:
 1042              		.section	.text.unlikely._ZN16Fl_Color_ChooserD2Ev,"axG",@progbits,_ZN16Fl_Color_ChooserD5Ev,comdat
 1043              	.LCOLDE23:
 1044              		.section	.text._ZN16Fl_Color_ChooserD2Ev,"axG",@progbits,_ZN16Fl_Color_ChooserD5Ev,comdat
 1045              	.LHOTE23:
 1046              		.weak	_ZN16Fl_Color_ChooserD1Ev
 1047              		.set	_ZN16Fl_Color_ChooserD1Ev,_ZN16Fl_Color_ChooserD2Ev
 1048              		.section	.text.unlikely._ZN9ColorChip4drawEv,"ax",@progbits
 1049              		.align 2
 1050              	.LCOLDB24:
 1051              		.section	.text._ZN9ColorChip4drawEv,"ax",@progbits
 1052              	.LHOTB24:
 1053              		.align 2
 1054              		.p2align 4,,15
 1055              		.globl	_ZN9ColorChip4drawEv
 1057              	_ZN9ColorChip4drawEv:
 1058              	.LFB652:
 509:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 1059              		.loc 3 509 0
 1060              		.cfi_startproc
 1061              	.LVL122:
 1062 0000 4157     		pushq	%r15
 1063              		.cfi_def_cfa_offset 16
 1064              		.cfi_offset 15, -16
 1065 0002 4156     		pushq	%r14
 1066              		.cfi_def_cfa_offset 24
 1067              		.cfi_offset 14, -24
 1068 0004 4155     		pushq	%r13
 1069              		.cfi_def_cfa_offset 32
 1070              		.cfi_offset 13, -32
 1071 0006 4154     		pushq	%r12
 1072              		.cfi_def_cfa_offset 40
 1073              		.cfi_offset 12, -40
 1074 0008 55       		pushq	%rbp
 1075              		.cfi_def_cfa_offset 48
 1076              		.cfi_offset 6, -48
 1077 0009 53       		pushq	%rbx
 1078              		.cfi_def_cfa_offset 56
 1079              		.cfi_offset 3, -56
 1080 000a 4889FB   		movq	%rdi, %rbx
 1081 000d 4883EC18 		subq	$24, %rsp
 1082              		.cfi_def_cfa_offset 80
 510:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 1083              		.loc 3 510 0
 1084 0011 807F6D00 		cmpb	$0, 109(%rdi)
 1085 0015 0F888500 		js	.L55
 1085      0000
 1086              	.LVL123:
 1087              	.L53:
 511:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1088              		.loc 3 511 0
 1089 001b 440FB64B 		movzbl	121(%rbx), %r9d
 1089      79
 514:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1090              		.loc 3 514 0
 1091 0020 0FB67B6E 		movzbl	110(%rbx), %edi
 511:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1092              		.loc 3 511 0
 1093 0024 440FB663 		movzbl	122(%rbx), %r12d
 1093      7A
 1094 0029 440FB67B 		movzbl	120(%rbx), %r15d
 1094      78
 1095 002e 448B732C 		movl	44(%rbx), %r14d
 1096              	.LVL124:
 1097 0032 44894C24 		movl	%r9d, 12(%rsp)
 1097      0C
 514:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1098              		.loc 3 514 0
 1099 0037 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 1099      00
 1100              	.LVL125:
 513:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1101              		.loc 3 513 0
 1102 003c 0FB67B6E 		movzbl	110(%rbx), %edi
 511:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1103              		.loc 3 511 0
 1104 0040 4129C6   		subl	%eax, %r14d
 1105 0043 448B6B28 		movl	40(%rbx), %r13d
 1106              	.LVL126:
 513:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1107              		.loc 3 513 0
 1108 0047 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 1108      00
 1109              	.LVL127:
 512:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 1110              		.loc 3 512 0
 1111 004c 0FB67B6E 		movzbl	110(%rbx), %edi
 1112 0050 8B6B24   		movl	36(%rbx), %ebp
 511:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1113              		.loc 3 511 0
 1114 0053 4129C5   		subl	%eax, %r13d
 1115              	.LVL128:
 512:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 1116              		.loc 3 512 0
 1117 0056 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 1117      00
 1118              	.LVL129:
 511:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1119              		.loc 3 511 0
 1120 005b 0FB67B6E 		movzbl	110(%rbx), %edi
 1121 005f 8D3428   		leal	(%rax,%rbp), %esi
 1122 0062 8B6B20   		movl	32(%rbx), %ebp
 1123 0065 89742408 		movl	%esi, 8(%rsp)
 1124              	.LVL130:
 1125 0069 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 1125      00
 1126              	.LVL131:
 514:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1127              		.loc 3 514 0
 1128 006e 4883EC08 		subq	$8, %rsp
 1129              		.cfi_def_cfa_offset 88
 1130 0072 8D3C28   		leal	(%rax,%rbp), %edi
 1131 0075 4589F8   		movl	%r15d, %r8d
 1132 0078 4154     		pushq	%r12
 1133              		.cfi_def_cfa_offset 96
 1134 007a 448B4C24 		movl	28(%rsp), %r9d
 1134      1C
 1135 007f 4489F1   		movl	%r14d, %ecx
 1136 0082 8B742418 		movl	24(%rsp), %esi
 1137 0086 4489EA   		movl	%r13d, %edx
 1138 0089 E8000000 		call	_Z8fl_rectfiiiihhh
 1138      00
 1139              	.LVL132:
 515:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 1140              		.loc 3 515 0
 1141 008e 4883C428 		addq	$40, %rsp
 1142              		.cfi_def_cfa_offset 56
 1143 0092 5B       		popq	%rbx
 1144              		.cfi_def_cfa_offset 48
 1145              	.LVL133:
 1146 0093 5D       		popq	%rbp
 1147              		.cfi_def_cfa_offset 40
 1148 0094 415C     		popq	%r12
 1149              		.cfi_def_cfa_offset 32
 1150 0096 415D     		popq	%r13
 1151              		.cfi_def_cfa_offset 24
 1152 0098 415E     		popq	%r14
 1153              		.cfi_def_cfa_offset 16
 1154 009a 415F     		popq	%r15
 1155              		.cfi_def_cfa_offset 8
 1156 009c C3       		ret
 1157              	.LVL134:
 1158 009d 0F1F00   		.p2align 4,,10
 1159              		.p2align 3
 1160              	.L55:
 1161              		.cfi_def_cfa_offset 80
 510:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 1162              		.loc 3 510 0 discriminator 1
 1163 00a0 E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 1163      00
 1164              	.LVL135:
 1165 00a5 E971FFFF 		jmp	.L53
 1165      FF
 1166              		.cfi_endproc
 1167              	.LFE652:
 1169              		.section	.text.unlikely._ZN9ColorChip4drawEv
 1170              	.LCOLDE24:
 1171              		.section	.text._ZN9ColorChip4drawEv
 1172              	.LHOTE24:
 1173              		.section	.text.unlikely._ZL8cc_ok_cbP9Fl_WidgetPv,"ax",@progbits
 1174              	.LCOLDB25:
 1175              		.section	.text._ZL8cc_ok_cbP9Fl_WidgetPv,"ax",@progbits
 1176              	.LHOTB25:
 1177              		.p2align 4,,15
 1179              	_ZL8cc_ok_cbP9Fl_WidgetPv:
 1180              	.LFB654:
 524:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1181              		.loc 3 533 0
 1182              		.cfi_startproc
 1183              	.LVL136:
 1184 0000 4883EC08 		subq	$8, %rsp
 1185              		.cfi_def_cfa_offset 16
 534:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 1186              		.loc 3 534 0
 1187 0004 C7060100 		movl	$1, (%rsi)
 1187      0000
 535:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1188              		.loc 3 535 0
 1189 000a E8000000 		call	_ZNK9Fl_Widget6windowEv
 1189      00
 1190              	.LVL137:
 1191 000f 488B10   		movq	(%rax), %rdx
 1192 0012 4889C7   		movq	%rax, %rdi
 1193 0015 488B5230 		movq	48(%rdx), %rdx
 536:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 1194              		.loc 3 536 0
 1195 0019 4883C408 		addq	$8, %rsp
 1196              		.cfi_def_cfa_offset 8
 535:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1197              		.loc 3 535 0
 1198 001d FFE2     		jmp	*%rdx
 1199              	.LVL138:
 1200              		.cfi_endproc
 1201              	.LFE654:
 1203              		.section	.text.unlikely._ZL8cc_ok_cbP9Fl_WidgetPv
 1204              	.LCOLDE25:
 1205              		.section	.text._ZL8cc_ok_cbP9Fl_WidgetPv
 1206              	.LHOTE25:
 1207              		.section	.text.unlikely._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27,"ax",@progbits
 1208              		.align 2
 1209              	.LCOLDB26:
 1210              		.section	.text._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27,"ax",@progbits
 1211              	.LHOTB26:
 1212              		.align 2
 1213              		.p2align 4,,15
 1215              	_ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27:
 1216              	.LFB721:
  46:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 1217              		.loc 3 46 0
 1218              		.cfi_startproc
 1219              	.LVL139:
 1220              	.LBB550:
  51:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1221              		.loc 3 51 0
 1222 0000 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1223              	.LVL140:
  52:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 1224              		.loc 3 52 0
 1225 0004 660FEFDB 		pxor	%xmm3, %xmm3
 1226 0008 F30F2AD8 		cvtsi2ss	%eax, %xmm3
  56:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1227              		.loc 3 56 0
 1228 000c 83F805   		cmpl	$5, %eax
  52:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 1229              		.loc 3 52 0
 1230 000f F30F5ADB 		cvtss2sd	%xmm3, %xmm3
 1231 0013 F20F5CC3 		subsd	%xmm3, %xmm0
 1232              	.LVL141:
  53:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 1233              		.loc 3 53 0
 1234 0017 F20F101D 		movsd	.LC7(%rip), %xmm3
 1234      00000000 
  55:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1235              		.loc 3 55 0
 1236 001f 660F28FB 		movapd	%xmm3, %xmm7
  53:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 1237              		.loc 3 53 0
 1238 0023 660F28E3 		movapd	%xmm3, %xmm4
  54:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1239              		.loc 3 54 0
 1240 0027 660F28F3 		movapd	%xmm3, %xmm6
 1241 002b 660F28E8 		movapd	%xmm0, %xmm5
  55:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1242              		.loc 3 55 0
 1243 002f F20F5CF8 		subsd	%xmm0, %xmm7
  54:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1244              		.loc 3 54 0
 1245 0033 F20F59E9 		mulsd	%xmm1, %xmm5
  53:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 1246              		.loc 3 53 0
 1247 0037 F20F5CE1 		subsd	%xmm1, %xmm4
  55:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1248              		.loc 3 55 0
 1249 003b F20F59CF 		mulsd	%xmm7, %xmm1
 1250              	.LVL142:
  54:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1251              		.loc 3 54 0
 1252 003f F20F5CF5 		subsd	%xmm5, %xmm6
  53:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 1253              		.loc 3 53 0
 1254 0043 F20F59E2 		mulsd	%xmm2, %xmm4
 1255              	.LVL143:
  55:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1256              		.loc 3 55 0
 1257 0047 F20F5CD9 		subsd	%xmm1, %xmm3
  54:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1258              		.loc 3 54 0
 1259 004b 660F28EE 		movapd	%xmm6, %xmm5
 1260 004f F20F59EA 		mulsd	%xmm2, %xmm5
 1261              	.LVL144:
  55:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1262              		.loc 3 55 0
 1263 0053 F20F59DA 		mulsd	%xmm2, %xmm3
 1264              	.LVL145:
  56:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1265              		.loc 3 56 0
 1266 0057 771B     		ja	.L58
 1267 0059 89C0     		movl	%eax, %eax
 1268 005b FF24C500 		jmp	*.L61(,%rax,8)
 1268      000000
 1269              		.section	.rodata._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27,"a",@progbits
 1270              		.align 8
 1271              		.align 4
 1272              	.L61:
 1273 0000 00000000 		.quad	.L60
 1273      00000000 
 1274 0008 00000000 		.quad	.L62
 1274      00000000 
 1275 0010 00000000 		.quad	.L63
 1275      00000000 
 1276 0018 00000000 		.quad	.L64
 1276      00000000 
 1277 0020 00000000 		.quad	.L65
 1277      00000000 
 1278 0028 00000000 		.quad	.L66
 1278      00000000 
 1279              		.section	.text._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27
 1280              		.p2align 4,,10
 1281 0062 660F1F44 		.p2align 3
 1281      0000
 1282              	.L66:
  62:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 1283              		.loc 3 62 0
 1284 0068 F20F1117 		movsd	%xmm2, (%rdi)
 1285 006c F20F1126 		movsd	%xmm4, (%rsi)
 1286 0070 F20F112A 		movsd	%xmm5, (%rdx)
 1287              	.LVL146:
 1288              	.L58:
 1289 0074 F3C3     		rep ret
 1290 0076 662E0F1F 		.p2align 4,,10
 1290      84000000 
 1290      0000
 1291              		.p2align 3
 1292              	.L65:
  61:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 1293              		.loc 3 61 0
 1294 0080 F20F111F 		movsd	%xmm3, (%rdi)
 1295 0084 F20F1126 		movsd	%xmm4, (%rsi)
 1296 0088 F20F1112 		movsd	%xmm2, (%rdx)
 1297 008c C3       		ret
 1298 008d 0F1F00   		.p2align 4,,10
 1299              		.p2align 3
 1300              	.L60:
  57:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 1301              		.loc 3 57 0
 1302 0090 F20F1117 		movsd	%xmm2, (%rdi)
 1303 0094 F20F111E 		movsd	%xmm3, (%rsi)
 1304 0098 F20F1122 		movsd	%xmm4, (%rdx)
 1305 009c C3       		ret
 1306 009d 0F1F00   		.p2align 4,,10
 1307              		.p2align 3
 1308              	.L62:
  58:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1309              		.loc 3 58 0
 1310 00a0 F20F112F 		movsd	%xmm5, (%rdi)
 1311 00a4 F20F1116 		movsd	%xmm2, (%rsi)
 1312 00a8 F20F1122 		movsd	%xmm4, (%rdx)
 1313 00ac C3       		ret
 1314 00ad 0F1F00   		.p2align 4,,10
 1315              		.p2align 3
 1316              	.L63:
  59:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 1317              		.loc 3 59 0
 1318 00b0 F20F1127 		movsd	%xmm4, (%rdi)
 1319 00b4 F20F1116 		movsd	%xmm2, (%rsi)
 1320 00b8 F20F111A 		movsd	%xmm3, (%rdx)
 1321 00bc C3       		ret
 1322 00bd 0F1F00   		.p2align 4,,10
 1323              		.p2align 3
 1324              	.L64:
  60:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
 1325              		.loc 3 60 0
 1326 00c0 F20F1127 		movsd	%xmm4, (%rdi)
 1327 00c4 F20F112E 		movsd	%xmm5, (%rsi)
 1328 00c8 F20F1112 		movsd	%xmm2, (%rdx)
 1329 00cc C3       		ret
 1330              	.LBE550:
 1331              		.cfi_endproc
 1332              	.LFE721:
 1334              		.section	.text.unlikely._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27
 1335              	.LCOLDE26:
 1336              		.section	.text._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27
 1337              	.LHOTE26:
 1338              		.section	.text.unlikely._ZL14generate_imagePviiiPh,"ax",@progbits
 1339              	.LCOLDB28:
 1340              		.section	.text._ZL14generate_imagePviiiPh,"ax",@progbits
 1341              	.LHOTB28:
 1342              		.p2align 4,,15
 1344              	_ZL14generate_imagePviiiPh:
 1345              	.LFB636:
 242:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 1346              		.loc 3 242 0
 1347              		.cfi_startproc
 1348              	.LVL147:
 1349 0000 4157     		pushq	%r15
 1350              		.cfi_def_cfa_offset 16
 1351              		.cfi_offset 15, -16
 1352 0002 4156     		pushq	%r14
 1353              		.cfi_def_cfa_offset 24
 1354              		.cfi_offset 14, -24
 1355 0004 4989FE   		movq	%rdi, %r14
 1356 0007 4155     		pushq	%r13
 1357              		.cfi_def_cfa_offset 32
 1358              		.cfi_offset 13, -32
 1359 0009 4154     		pushq	%r12
 1360              		.cfi_def_cfa_offset 40
 1361              		.cfi_offset 12, -40
 1362 000b 4189CC   		movl	%ecx, %r12d
 1363 000e 55       		pushq	%rbp
 1364              		.cfi_def_cfa_offset 48
 1365              		.cfi_offset 6, -48
 1366 000f 53       		pushq	%rbx
 1367              		.cfi_def_cfa_offset 56
 1368              		.cfi_offset 3, -56
 1369 0010 89F5     		movl	%esi, %ebp
 1370 0012 4C89C3   		movq	%r8, %rbx
 1371              	.LBB551:
 251:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1372              		.loc 3 251 0
 1373 0015 4101EC   		addl	%ebp, %r12d
 1374              	.LBE551:
 242:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 1375              		.loc 3 242 0
 1376 0018 4883EC68 		subq	$104, %rsp
 1377              		.cfi_def_cfa_offset 160
 1378 001c 448B6F28 		movl	40(%rdi), %r13d
 244:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1379              		.loc 3 244 0
 1380 0020 0FB67F6E 		movzbl	110(%rdi), %edi
 1381              	.LVL148:
 242:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 1382              		.loc 3 242 0
 1383 0024 89542408 		movl	%edx, 8(%rsp)
 1384 0028 64488B04 		movq	%fs:40, %rax
 1384      25280000 
 1384      00
 1385 0031 48894424 		movq	%rax, 88(%rsp)
 1385      58
 1386 0036 31C0     		xorl	%eax, %eax
 1387              	.LVL149:
 244:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1388              		.loc 3 244 0
 1389 0038 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 1389      00
 1390              	.LVL150:
 245:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 1391              		.loc 3 245 0
 1392 003d 410FB67E 		movzbl	110(%r14), %edi
 1392      6E
 1393 0042 458B7E2C 		movl	44(%r14), %r15d
 244:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 1394              		.loc 3 244 0
 1395 0046 4129C5   		subl	%eax, %r13d
 1396              	.LVL151:
 245:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 1397              		.loc 3 245 0
 1398 0049 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 1398      00
 1399              	.LVL152:
 1400 004e 8B542408 		movl	8(%rsp), %edx
 1401 0052 660FEFC9 		pxor	%xmm1, %xmm1
 1402 0056 660FEFC0 		pxor	%xmm0, %xmm0
 1403 005a 4129C7   		subl	%eax, %r15d
 1404 005d 498B4608 		movq	8(%r14), %rax
 1405              	.LBB565:
 251:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1406              		.loc 3 251 0
 1407 0061 4439E5   		cmpl	%r12d, %ebp
 1408              	.LBE565:
 245:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 1409              		.loc 3 245 0
 1410 0064 F20F2ACA 		cvtsi2sd	%edx, %xmm1
 1411 0068 F2410F2A 		cvtsi2sd	%r15d, %xmm0
 1411      C7
 1412 006d F20F10B8 		movsd	1832(%rax), %xmm7
 1412      28070000 
 1413 0075 F20F117C 		movsd	%xmm7, 32(%rsp)
 1413      2420
 1414 007b F20F5EC8 		divsd	%xmm0, %xmm1
 1415 007f F20F114C 		movsd	%xmm1, 24(%rsp)
 1415      2418
 1416              	.LVL153:
 1417              	.LBB566:
 251:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1418              		.loc 3 251 0
 1419 0085 0F8D2501 		jge	.L67
 1419      0000
 1420 008b 660FEFFF 		pxor	%xmm7, %xmm7
 1421 008f F20F1025 		movsd	.LC4(%rip), %xmm4
 1421      00000000 
 1422 0097 F20F101D 		movsd	.LC5(%rip), %xmm3
 1422      00000000 
 1423 009f F2410F2A 		cvtsi2sd	%r13d, %xmm7
 1423      FD
 1424 00a4 F20F117C 		movsd	%xmm7, 40(%rsp)
 1424      2428
 1425 00aa EB4F     		jmp	.L71
 1426              	.LVL154:
 1427 00ac 0F1F4000 		.p2align 4,,10
 1428              		.p2align 3
 1429              	.L73:
 1430              	.LBB552:
 1431              	.LBB553:
 1432              	.LBB554:
 1433              	.LBB555:
  48:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 1434              		.loc 3 48 0
 1435 00b0 F20F1054 		movsd	32(%rsp), %xmm2
 1435      2420
 1436 00b6 660F28C2 		movapd	%xmm2, %xmm0
 1437 00ba 660F28CA 		movapd	%xmm2, %xmm1
 1438              	.LVL155:
 1439              	.L69:
 1440              	.LBE555:
 1441              	.LBE554:
 1442              	.LBE553:
 256:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1443              		.loc 3 256 0 discriminator 2
 1444 00be F20F59D4 		mulsd	%xmm4, %xmm2
 1445              	.LBE552:
 251:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1446              		.loc 3 251 0 discriminator 2
 1447 00c2 83C501   		addl	$1, %ebp
 1448              	.LVL156:
 1449 00c5 4883C303 		addq	$3, %rbx
 1450              	.LVL157:
 1451              	.LBB562:
 257:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 1452              		.loc 3 257 0 discriminator 2
 1453 00c9 F20F59CC 		mulsd	%xmm4, %xmm1
 258:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 1454              		.loc 3 258 0 discriminator 2
 1455 00cd F20F59C4 		mulsd	%xmm4, %xmm0
 256:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1456              		.loc 3 256 0 discriminator 2
 1457 00d1 F20F58D3 		addsd	%xmm3, %xmm2
 257:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 1458              		.loc 3 257 0 discriminator 2
 1459 00d5 F20F58CB 		addsd	%xmm3, %xmm1
 258:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 1460              		.loc 3 258 0 discriminator 2
 1461 00d9 F20F58C3 		addsd	%xmm3, %xmm0
 256:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1462              		.loc 3 256 0 discriminator 2
 1463 00dd F20F2CC2 		cvttsd2si	%xmm2, %eax
 1464 00e1 8843FD   		movb	%al, -3(%rbx)
 1465              	.LVL158:
 257:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 1466              		.loc 3 257 0 discriminator 2
 1467 00e4 F20F2CC1 		cvttsd2si	%xmm1, %eax
 1468 00e8 8843FE   		movb	%al, -2(%rbx)
 1469              	.LVL159:
 258:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 1470              		.loc 3 258 0 discriminator 2
 1471 00eb F20F2CC0 		cvttsd2si	%xmm0, %eax
 1472              	.LBE562:
 251:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1473              		.loc 3 251 0 discriminator 2
 1474 00ef 4439E5   		cmpl	%r12d, %ebp
 1475              	.LBB563:
 258:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 1476              		.loc 3 258 0 discriminator 2
 1477 00f2 8843FF   		movb	%al, -1(%rbx)
 1478              	.LBE563:
 251:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1479              		.loc 3 251 0 discriminator 2
 1480 00f5 0F84B500 		je	.L67
 1480      0000
 1481              	.LVL160:
 1482              	.L71:
 1483              	.LBB564:
 253:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 1484              		.loc 3 253 0 discriminator 2
 1485 00fb 660FEFC0 		pxor	%xmm0, %xmm0
 1486 00ff 488D7424 		leaq	56(%rsp), %rsi
 1486      38
 1487 0104 488D7C24 		leaq	48(%rsp), %rdi
 1487      30
 1488 0109 F20F104C 		movsd	24(%rsp), %xmm1
 1488      2418
 1489 010f F20F115C 		movsd	%xmm3, 16(%rsp)
 1489      2410
 1490 0115 F20F2AC5 		cvtsi2sd	%ebp, %xmm0
 1491 0119 F20F1164 		movsd	%xmm4, 8(%rsp)
 1491      2408
 1492              	.LVL161:
 1493 011f F20F5E44 		divsd	40(%rsp), %xmm0
 1493      2428
 1494 0125 E8000000 		call	_ZL4tohsddRdS_
 1494      00
 1495              	.LVL162:
 255:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 1496              		.loc 3 255 0 discriminator 2
 1497 012a F20F104C 		movsd	56(%rsp), %xmm1
 1497      2438
 1498              	.LVL163:
 254:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1499              		.loc 3 254 0 discriminator 2
 1500 0130 48C74424 		movq	$0, 64(%rsp)
 1500      40000000 
 1500      00
 1501              	.LBB560:
 1502              	.LBB558:
 1503              	.LBB556:
  48:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 1504              		.loc 3 48 0 discriminator 2
 1505 0139 F20F1035 		movsd	.LC27(%rip), %xmm6
 1505      00000000 
 1506              	.LBE556:
 1507              	.LBE558:
 1508              	.LBE560:
 254:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1509              		.loc 3 254 0 discriminator 2
 1510 0141 48C74424 		movq	$0, 72(%rsp)
 1510      48000000 
 1510      00
 1511 014a 48C74424 		movq	$0, 80(%rsp)
 1511      50000000 
 1511      00
 1512              	.LBB561:
 1513              	.LBB559:
 1514              	.LBB557:
  48:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 1515              		.loc 3 48 0 discriminator 2
 1516 0153 F20F1064 		movsd	8(%rsp), %xmm4
 1516      2408
 1517 0159 660F2EF1 		ucomisd	%xmm1, %xmm6
 1518 015d F20F105C 		movsd	16(%rsp), %xmm3
 1518      2410
 1519 0163 0F8747FF 		ja	.L73
 1519      FFFF
 1520              	.LBE557:
 1521 0169 F20F1054 		movsd	32(%rsp), %xmm2
 1521      2420
 1522 016f 488D5424 		leaq	80(%rsp), %rdx
 1522      50
 1523              	.LVL164:
 1524 0174 488D7424 		leaq	72(%rsp), %rsi
 1524      48
 1525              	.LVL165:
 1526 0179 F20F1044 		movsd	48(%rsp), %xmm0
 1526      2430
 1527 017f 488D7C24 		leaq	64(%rsp), %rdi
 1527      40
 1528              	.LVL166:
 1529 0184 E8000000 		call	_ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27
 1529      00
 1530              	.LVL167:
 1531 0189 F20F1054 		movsd	64(%rsp), %xmm2
 1531      2440
 1532 018f F20F104C 		movsd	72(%rsp), %xmm1
 1532      2448
 1533 0195 F20F1044 		movsd	80(%rsp), %xmm0
 1533      2450
 1534 019b F20F1064 		movsd	8(%rsp), %xmm4
 1534      2408
 1535 01a1 F20F105C 		movsd	16(%rsp), %xmm3
 1535      2410
 1536 01a7 E912FFFF 		jmp	.L69
 1536      FF
 1537              	.LVL168:
 1538 01ac 0F1F4000 		.p2align 4,,10
 1539              		.p2align 3
 1540              	.L67:
 1541              	.LBE559:
 1542              	.LBE561:
 1543              	.LBE564:
 1544              	.LBE566:
 260:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 1545              		.loc 3 260 0
 1546 01b0 488B4424 		movq	88(%rsp), %rax
 1546      58
 1547 01b5 64483304 		xorq	%fs:40, %rax
 1547      25280000 
 1547      00
 1548 01be 750F     		jne	.L75
 1549 01c0 4883C468 		addq	$104, %rsp
 1550              		.cfi_remember_state
 1551              		.cfi_def_cfa_offset 56
 1552 01c4 5B       		popq	%rbx
 1553              		.cfi_def_cfa_offset 48
 1554              	.LVL169:
 1555 01c5 5D       		popq	%rbp
 1556              		.cfi_def_cfa_offset 40
 1557              	.LVL170:
 1558 01c6 415C     		popq	%r12
 1559              		.cfi_def_cfa_offset 32
 1560 01c8 415D     		popq	%r13
 1561              		.cfi_def_cfa_offset 24
 1562              	.LVL171:
 1563 01ca 415E     		popq	%r14
 1564              		.cfi_def_cfa_offset 16
 1565              	.LVL172:
 1566 01cc 415F     		popq	%r15
 1567              		.cfi_def_cfa_offset 8
 1568 01ce C3       		ret
 1569              	.LVL173:
 1570              	.L75:
 1571              		.cfi_restore_state
 1572 01cf E8000000 		call	__stack_chk_fail
 1572      00
 1573              	.LVL174:
 1574              		.cfi_endproc
 1575              	.LFE636:
 1577              		.section	.text.unlikely._ZL14generate_imagePviiiPh
 1578              	.LCOLDE28:
 1579              		.section	.text._ZL14generate_imagePviiiPh
 1580              	.LHOTE28:
 1581              		.section	.text.unlikely._ZN13Flcc_ValueBox4drawEv,"ax",@progbits
 1582              		.align 2
 1583              	.LCOLDB29:
 1584              		.section	.text._ZN13Flcc_ValueBox4drawEv,"ax",@progbits
 1585              	.LHOTB29:
 1586              		.align 2
 1587              		.p2align 4,,15
 1588              		.globl	_ZN13Flcc_ValueBox4drawEv
 1590              	_ZN13Flcc_ValueBox4drawEv:
 1591              	.LFB641:
 376:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 1592              		.loc 3 376 0
 1593              		.cfi_startproc
 1594              	.LVL175:
 1595 0000 4157     		pushq	%r15
 1596              		.cfi_def_cfa_offset 16
 1597              		.cfi_offset 15, -16
 1598 0002 4156     		pushq	%r14
 1599              		.cfi_def_cfa_offset 24
 1600              		.cfi_offset 14, -24
 1601 0004 4155     		pushq	%r13
 1602              		.cfi_def_cfa_offset 32
 1603              		.cfi_offset 13, -32
 1604 0006 4154     		pushq	%r12
 1605              		.cfi_def_cfa_offset 40
 1606              		.cfi_offset 12, -40
 1607 0008 55       		pushq	%rbp
 1608              		.cfi_def_cfa_offset 48
 1609              		.cfi_offset 6, -48
 1610 0009 53       		pushq	%rbx
 1611              		.cfi_def_cfa_offset 56
 1612              		.cfi_offset 3, -56
 1613 000a 4889FB   		movq	%rdi, %rbx
 1614 000d 4883EC18 		subq	$24, %rsp
 1615              		.cfi_def_cfa_offset 80
 377:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1616              		.loc 3 377 0
 1617 0011 807F6D00 		cmpb	$0, 109(%rdi)
 1618 0015 0F88C501 		js	.L91
 1618      0000
 1619              	.LVL176:
 1620              	.L78:
 1621 001b 4C8B7B08 		movq	8(%rbx), %r15
 1622              	.LVL177:
 1623              	.LBB567:
 1624              	.LBB568:
 1625              	.LBB569:
  48:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 1626              		.loc 3 48 0
 1627 001f F20F1005 		movsd	.LC27(%rip), %xmm0
 1627      00000000 
 1628 0027 F2410F10 		movsd	1824(%r15), %xmm1
 1628      8F200700 
 1628      00
 1629              	.LVL178:
 1630 0030 660F2EC1 		ucomisd	%xmm1, %xmm0
 1631 0034 0F862601 		jbe	.L89
 1631      0000
  49:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 1632              		.loc 3 49 0
 1633 003a F20F101D 		movsd	.LC7(%rip), %xmm3
 1633      00000000 
 1634 0042 F20F111D 		movsd	%xmm3, _ZL2tb(%rip)
 1634      00000000 
 1635 004a F20F111D 		movsd	%xmm3, _ZL2tg(%rip)
 1635      00000000 
 1636 0052 F20F111D 		movsd	%xmm3, _ZL2tr(%rip)
 1636      00000000 
 1637              	.L81:
 1638              	.LVL179:
 1639              	.LBE569:
 1640              	.LBE568:
 1641              	.LBE567:
 380:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1642              		.loc 3 380 0
 1643 005a 0FB67B6E 		movzbl	110(%rbx), %edi
 1644 005e 8B6B20   		movl	32(%rbx), %ebp
 1645              	.LVL180:
 1646 0061 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 1646      00
 1647              	.LVL181:
 381:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 1648              		.loc 3 381 0
 1649 0066 0FB67B6E 		movzbl	110(%rbx), %edi
 380:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1650              		.loc 3 380 0
 1651 006a 448D2C28 		leal	(%rax,%rbp), %r13d
 1652              	.LVL182:
 1653 006e 8B6B24   		movl	36(%rbx), %ebp
 1654              	.LVL183:
 381:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 1655              		.loc 3 381 0
 1656 0071 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 1656      00
 1657              	.LVL184:
 382:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 1658              		.loc 3 382 0
 1659 0076 0FB67B6E 		movzbl	110(%rbx), %edi
 381:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 1660              		.loc 3 381 0
 1661 007a 448D2428 		leal	(%rax,%rbp), %r12d
 1662              	.LVL185:
 1663 007e 448B7328 		movl	40(%rbx), %r14d
 1664              	.LVL186:
 382:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 1665              		.loc 3 382 0
 1666 0082 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 1666      00
 1667              	.LVL187:
 383:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 1668              		.loc 3 383 0
 1669 0087 0FB67B6E 		movzbl	110(%rbx), %edi
 1670 008b 8B6B2C   		movl	44(%rbx), %ebp
 382:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 1671              		.loc 3 382 0
 1672 008e 4129C6   		subl	%eax, %r14d
 1673              	.LVL188:
 383:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 1674              		.loc 3 383 0
 1675 0091 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 1675      00
 1676              	.LVL189:
 1677 0096 29C5     		subl	%eax, %ebp
 1678              	.LVL190:
 384:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 1679              		.loc 3 384 0
 1680 0098 807B6D02 		cmpb	$2, 109(%rbx)
 1681 009c 0F841601 		je	.L92
 1681      0000
 1682              	.L82:
 1683              	.LVL191:
 1684              	.LBB571:
 1685              	.LBB572:
 1686              		.loc 4 729 0
 1687 00a2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1687      000000
 1688 00a9 4889DA   		movq	%rbx, %rdx
 1689 00ac 4589F1   		movl	%r14d, %r9d
 1690 00af 4589E0   		movl	%r12d, %r8d
 1691 00b2 4489E9   		movl	%r13d, %ecx
 1692 00b5 BE000000 		movl	$_ZL15generate_vimagePviiiPh, %esi
 1692      00
 1693 00ba 488B07   		movq	(%rdi), %rax
 1694 00bd 6A03     		pushq	$3
 1695              		.cfi_def_cfa_offset 88
 1696 00bf 55       		pushq	%rbp
 1697              		.cfi_def_cfa_offset 96
 1698 00c0 FF908801 		call	*392(%rax)
 1698      0000
 1699              	.LVL192:
 1700              	.LBE572:
 1701              	.LBE571:
 386:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 1702              		.loc 3 386 0
 1703 00c6 807B6D02 		cmpb	$2, 109(%rbx)
 1704 00ca 58       		popq	%rax
 1705              		.cfi_def_cfa_offset 88
 1706 00cb 5A       		popq	%rdx
 1707              		.cfi_def_cfa_offset 80
 1708 00cc 0F84CE00 		je	.L93
 1708      0000
 1709              	.L83:
 1710              	.LVL193:
 387:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1711              		.loc 3 387 0
 1712 00d2 660FEFC9 		pxor	%xmm1, %xmm1
 1713 00d6 448D55FA 		leal	-6(%rbp), %r10d
 1714 00da F20F1005 		movsd	.LC7(%rip), %xmm0
 1714      00000000 
 1715 00e2 F2410F2A 		cvtsi2sd	%r10d, %xmm1
 1715      CA
 1716 00e7 F2410F5C 		subsd	1832(%r15), %xmm0
 1716      87280700 
 1716      00
 1717 00f0 F20F59C1 		mulsd	%xmm1, %xmm0
 1718 00f4 F20F2CD0 		cvttsd2si	%xmm0, %edx
 1719              	.LVL194:
 388:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 1720              		.loc 3 388 0
 1721 00f8 85D2     		testl	%edx, %edx
 1722 00fa 0F889000 		js	.L86
 1722      0000
 388:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 1723              		.loc 3 388 0 is_stmt 0 discriminator 2
 1724 0100 83ED05   		subl	$5, %ebp
 1725              	.LVL195:
 1726 0103 39EA     		cmpl	%ebp, %edx
 1727 0105 440F4CD2 		cmovl	%edx, %r10d
 1728              	.LVL196:
 1729              	.L84:
 389:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1730              		.loc 3 389 0 is_stmt 1
 1731 0109 48391D00 		cmpq	%rbx, _ZN2Fl6focus_E(%rip)
 1731      000000
 1732 0110 BA000000 		movl	$0, %edx
 1732      00
 1733 0115 B8310000 		movl	$49, %eax
 1733      00
 1734 011a 44895424 		movl	%r10d, 12(%rsp)
 1734      0C
 1735 011f 438D0C22 		leal	(%r10,%r12), %ecx
 1736 0123 4589F0   		movl	%r14d, %r8d
 1737 0126 4889DF   		movq	%rbx, %rdi
 1738 0129 41B90600 		movl	$6, %r9d
 1738      0000
 1739 012f BE020000 		movl	$2, %esi
 1739      00
 1740 0134 0F44C2   		cmove	%edx, %eax
 1741 0137 4883EC08 		subq	$8, %rsp
 1742              		.cfi_def_cfa_offset 88
 1743 013b 4489EA   		movl	%r13d, %edx
 1744 013e 50       		pushq	%rax
 1745              		.cfi_def_cfa_offset 96
 1746 013f E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 1746      00
 1747              	.LVL197:
 390:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 1748              		.loc 3 390 0
 1749 0144 448B5424 		movl	28(%rsp), %r10d
 1749      1C
 1750 0149 44895378 		movl	%r10d, 120(%rbx)
 391:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 1751              		.loc 3 391 0
 1752 014d 4883C428 		addq	$40, %rsp
 1753              		.cfi_def_cfa_offset 56
 1754 0151 5B       		popq	%rbx
 1755              		.cfi_def_cfa_offset 48
 1756              	.LVL198:
 1757 0152 5D       		popq	%rbp
 1758              		.cfi_def_cfa_offset 40
 1759 0153 415C     		popq	%r12
 1760              		.cfi_def_cfa_offset 32
 1761              	.LVL199:
 1762 0155 415D     		popq	%r13
 1763              		.cfi_def_cfa_offset 24
 1764              	.LVL200:
 1765 0157 415E     		popq	%r14
 1766              		.cfi_def_cfa_offset 16
 1767              	.LVL201:
 1768 0159 415F     		popq	%r15
 1769              		.cfi_def_cfa_offset 8
 1770 015b C3       		ret
 1771              	.LVL202:
 1772 015c 0F1F4000 		.p2align 4,,10
 1773              		.p2align 3
 1774              	.L89:
 1775              		.cfi_def_cfa_offset 80
 1776              	.LBB573:
 1777              	.LBB570:
 1778 0160 F20F1015 		movsd	.LC7(%rip), %xmm2
 1778      00000000 
 1779 0168 BA000000 		movl	$_ZL2tb, %edx
 1779      00
 1780 016d F2410F10 		movsd	1816(%r15), %xmm0
 1780      87180700 
 1780      00
 1781 0176 BE000000 		movl	$_ZL2tg, %esi
 1781      00
 1782 017b BF000000 		movl	$_ZL2tr, %edi
 1782      00
 1783 0180 E8000000 		call	_ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27
 1783      00
 1784              	.LVL203:
 1785 0185 E9D0FEFF 		jmp	.L81
 1785      FF
 1786              	.LVL204:
 1787 018a 660F1F44 		.p2align 4,,10
 1787      0000
 1788              		.p2align 3
 1789              	.L86:
 1790              	.LBE570:
 1791              	.LBE573:
 388:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 1792              		.loc 3 388 0
 1793 0190 4531D2   		xorl	%r10d, %r10d
 1794 0193 E971FFFF 		jmp	.L84
 1794      FF
 1795              	.LVL205:
 1796 0198 0F1F8400 		.p2align 4,,10
 1796      00000000 
 1797              		.p2align 3
 1798              	.L93:
 1799              	.LBB574:
 1800              	.LBB575:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1801              		.loc 4 103 0
 1802 01a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1802      000000
 1803 01a7 488B07   		movq	(%rdi), %rax
 1804 01aa FF907001 		call	*368(%rax)
 1804      0000
 1805              	.LVL206:
 1806 01b0 E91DFFFF 		jmp	.L83
 1806      FF
 1807              	.LVL207:
 1808              		.p2align 4,,10
 1809 01b5 0F1F00   		.p2align 3
 1810              	.L92:
 1811              	.LBE575:
 1812              	.LBE574:
 1813              	.LBB576:
 1814              	.LBB577:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1815              		.loc 4 82 0 discriminator 1
 1816 01b8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1816      000000
 1817 01bf 8B5378   		movl	120(%rbx), %edx
 1818 01c2 41B80600 		movl	$6, %r8d
 1818      0000
 1819 01c8 4489F1   		movl	%r14d, %ecx
 1820 01cb 4489EE   		movl	%r13d, %esi
 1821 01ce 488B07   		movq	(%rdi), %rax
 1822 01d1 4401E2   		addl	%r12d, %edx
 1823              	.LVL208:
 1824 01d4 FF905001 		call	*336(%rax)
 1824      0000
 1825              	.LVL209:
 1826 01da E9C3FEFF 		jmp	.L82
 1826      FF
 1827              	.LVL210:
 1828 01df 90       		.p2align 4,,10
 1829              		.p2align 3
 1830              	.L91:
 1831              	.LBE577:
 1832              	.LBE576:
 377:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 1833              		.loc 3 377 0 discriminator 1
 1834 01e0 E8000000 		call	_ZNK9Fl_Widget8draw_boxEv
 1834      00
 1835              	.LVL211:
 1836 01e5 E931FEFF 		jmp	.L78
 1836      FF
 1837              		.cfi_endproc
 1838              	.LFE641:
 1840              		.section	.text.unlikely._ZN13Flcc_ValueBox4drawEv
 1841              	.LCOLDE29:
 1842              		.section	.text._ZN13Flcc_ValueBox4drawEv
 1843              	.LHOTE29:
 1844              		.section	.text.unlikely._ZL12cc_cancel_cbP9Fl_WidgetPv,"ax",@progbits
 1845              	.LCOLDB30:
 1846              		.section	.text._ZL12cc_cancel_cbP9Fl_WidgetPv,"ax",@progbits
 1847              	.LHOTB30:
 1848              		.p2align 4,,15
 1850              	_ZL12cc_cancel_cbP9Fl_WidgetPv:
 1851              	.LFB655:
 537:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 1852              		.loc 3 542 0
 1853              		.cfi_startproc
 1854              	.LVL212:
 1855 0000 53       		pushq	%rbx
 1856              		.cfi_def_cfa_offset 16
 1857              		.cfi_offset 3, -16
 543:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1858              		.loc 3 543 0
 1859 0001 C7060000 		movl	$0, (%rsi)
 1859      0000
 542:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1860              		.loc 3 542 0
 1861 0007 4889FB   		movq	%rdi, %rbx
 544:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 1862              		.loc 3 544 0
 1863 000a E8000000 		call	_ZNK9Fl_Widget6windowEv
 1863      00
 1864              	.LVL213:
 1865 000f 4885C0   		testq	%rax, %rax
 1866 0012 741C     		je	.L95
 545:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1867              		.loc 3 545 0
 1868 0014 4889DF   		movq	%rbx, %rdi
 1869 0017 E8000000 		call	_ZNK9Fl_Widget6windowEv
 1869      00
 1870              	.LVL214:
 1871 001c 488B10   		movq	(%rax), %rdx
 1872 001f 4889C7   		movq	%rax, %rdi
 546:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 1873              		.loc 3 548 0
 1874 0022 5B       		popq	%rbx
 1875              		.cfi_remember_state
 1876              		.cfi_def_cfa_offset 8
 1877              	.LVL215:
 545:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1878              		.loc 3 545 0
 1879 0023 488B5230 		movq	48(%rdx), %rdx
 1880 0027 FFE2     		jmp	*%rdx
 1881              	.LVL216:
 1882 0029 0F1F8000 		.p2align 4,,10
 1882      000000
 1883              		.p2align 3
 1884              	.L95:
 1885              		.cfi_restore_state
 1886              	.LBB580:
 1887              	.LBB581:
 547:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 1888              		.loc 3 547 0
 1889 0030 488B03   		movq	(%rbx), %rax
 1890 0033 4889DF   		movq	%rbx, %rdi
 1891              	.LBE581:
 1892              	.LBE580:
 1893              		.loc 3 548 0
 1894 0036 5B       		popq	%rbx
 1895              		.cfi_def_cfa_offset 8
 1896              	.LVL217:
 1897              	.LBB583:
 1898              	.LBB582:
 547:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 1899              		.loc 3 547 0
 1900 0037 488B4030 		movq	48(%rax), %rax
 1901 003b FFE0     		jmp	*%rax
 1902              	.LVL218:
 1903              	.LBE582:
 1904              	.LBE583:
 1905              		.cfi_endproc
 1906              	.LFE655:
 1908              		.section	.text.unlikely._ZL12cc_cancel_cbP9Fl_WidgetPv
 1909              	.LCOLDE30:
 1910              		.section	.text._ZL12cc_cancel_cbP9Fl_WidgetPv
 1911              	.LHOTE30:
 1912              		.section	.text.unlikely._ZN16Fl_Color_ChooserD0Ev,"axG",@progbits,_ZN16Fl_Color_ChooserD5Ev,comdat
 1913              		.align 2
 1914              	.LCOLDB31:
 1915              		.section	.text._ZN16Fl_Color_ChooserD0Ev,"axG",@progbits,_ZN16Fl_Color_ChooserD5Ev,comdat
 1916              	.LHOTB31:
 1917              		.align 2
 1918              		.p2align 4,,15
 1919              		.weak	_ZN16Fl_Color_ChooserD0Ev
 1921              	_ZN16Fl_Color_ChooserD0Ev:
 1922              	.LFB677:
 1923              		.loc 5 107 0
 1924              		.cfi_startproc
 1925              	.LVL219:
 1926 0000 53       		pushq	%rbx
 1927              		.cfi_def_cfa_offset 16
 1928              		.cfi_offset 3, -16
 1929              		.loc 5 107 0
 1930 0001 4889FB   		movq	%rdi, %rbx
 1931              	.LBB601:
 1932              	.LBB602:
 1933 0004 48C70700 		movq	$_ZTV16Fl_Color_Chooser+16, (%rdi)
 1933      000000
 1934              	.LVL220:
 1935              	.LBB603:
 1936              	.LBB604:
 1937              		.loc 6 34 0
 1938 000b 48C787A0 		movq	$_ZTV6Fl_Box+16, 1696(%rdi)
 1938      06000000 
 1938      000000
 1939 0016 488DBFA0 		leaq	1696(%rdi), %rdi
 1939      060000
 1940              	.LVL221:
 1941 001d E8000000 		call	_ZN9Fl_WidgetD2Ev
 1941      00
 1942              	.LVL222:
 1943              	.LBE604:
 1944              	.LBE603:
 1945              	.LBB605:
 1946              	.LBB606:
  62:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** public:
 1947              		.loc 5 62 0
 1948 0022 488DBB28 		leaq	1320(%rbx), %rdi
 1948      050000
 1949              	.LVL223:
 1950 0029 48C78328 		movq	$_ZTV16Flcc_Value_Input+16, 1320(%rbx)
 1950      05000000 
 1950      000000
 1951 0034 E8000000 		call	_ZN14Fl_Value_InputD2Ev
 1951      00
 1952              	.LVL224:
 1953              	.LBE606:
 1954              	.LBE605:
 1955              	.LBB607:
 1956              	.LBB608:
 1957 0039 488DBBB0 		leaq	944(%rbx), %rdi
 1957      030000
 1958              	.LVL225:
 1959 0040 48C783B0 		movq	$_ZTV16Flcc_Value_Input+16, 944(%rbx)
 1959      03000000 
 1959      000000
 1960 004b E8000000 		call	_ZN14Fl_Value_InputD2Ev
 1960      00
 1961              	.LVL226:
 1962              	.LBE608:
 1963              	.LBE607:
 1964              	.LBB609:
 1965              	.LBB610:
 1966 0050 488DBB38 		leaq	568(%rbx), %rdi
 1966      020000
 1967              	.LVL227:
 1968 0057 48C78338 		movq	$_ZTV16Flcc_Value_Input+16, 568(%rbx)
 1968      02000000 
 1968      000000
 1969 0062 E8000000 		call	_ZN14Fl_Value_InputD2Ev
 1969      00
 1970              	.LVL228:
 1971              	.LBE610:
 1972              	.LBE609:
 1973              	.LBB611:
 1974              	.LBB612:
 1975              		.loc 7 83 0
 1976 0067 488DBBA0 		leaq	416(%rbx), %rdi
 1976      010000
 1977              	.LVL229:
 1978 006e 48C783A0 		movq	$_ZTV9Fl_Choice+16, 416(%rbx)
 1978      01000000 
 1978      000000
 1979 0079 E8000000 		call	_ZN8Fl_Menu_D2Ev
 1979      00
 1980              	.LVL230:
 1981              	.LBE612:
 1982              	.LBE611:
 1983              	.LBB613:
 1984              	.LBB614:
  50:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int py;
 1985              		.loc 5 50 0
 1986 007e 488DBB20 		leaq	288(%rbx), %rdi
 1986      010000
 1987              	.LVL231:
 1988 0085 48C78320 		movq	$_ZTV13Flcc_ValueBox+16, 288(%rbx)
 1988      01000000 
 1988      000000
 1989 0090 E8000000 		call	_ZN9Fl_WidgetD2Ev
 1989      00
 1990              	.LVL232:
 1991              	.LBE614:
 1992              	.LBE613:
 1993              	.LBB615:
 1994              	.LBB616:
  38:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int px, py;
 1995              		.loc 5 38 0
 1996 0095 488DBBA0 		leaq	160(%rbx), %rdi
 1996      000000
 1997              	.LVL233:
 1998 009c 48C783A0 		movq	$_ZTV11Flcc_HueBox+16, 160(%rbx)
 1998      00000000 
 1998      000000
 1999 00a7 E8000000 		call	_ZN9Fl_WidgetD2Ev
 1999      00
 2000              	.LVL234:
 2001              	.LBE616:
 2002              	.LBE615:
 2003              		.loc 5 107 0
 2004 00ac 4889DF   		movq	%rbx, %rdi
 2005 00af E8000000 		call	_ZN8Fl_GroupD2Ev
 2005      00
 2006              	.LVL235:
 2007              	.LBE602:
 2008              	.LBE601:
 2009 00b4 4889DF   		movq	%rbx, %rdi
 2010 00b7 5B       		popq	%rbx
 2011              		.cfi_def_cfa_offset 8
 2012              	.LVL236:
 2013 00b8 E9000000 		jmp	_ZdlPv
 2013      00
 2014              	.LVL237:
 2015              		.cfi_endproc
 2016              	.LFE677:
 2018              		.section	.text.unlikely._ZN16Fl_Color_ChooserD0Ev,"axG",@progbits,_ZN16Fl_Color_ChooserD5Ev,comdat
 2019              	.LCOLDE31:
 2020              		.section	.text._ZN16Fl_Color_ChooserD0Ev,"axG",@progbits,_ZN16Fl_Color_ChooserD5Ev,comdat
 2021              	.LHOTE31:
 2022              		.section	.text.unlikely._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_,"ax",@progbits
 2023              		.align 2
 2024              	.LCOLDB32:
 2025              		.section	.text._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_,"ax",@progbits
 2026              	.LHOTB32:
 2027              		.align 2
 2028              		.p2align 4,,15
 2029              		.globl	_ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_
 2031              	_ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_:
 2032              	.LFB628:
  47:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 2033              		.loc 3 47 0
 2034              		.cfi_startproc
 2035              	.LVL238:
 2036              	.LBB617:
  48:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 2037              		.loc 3 48 0
 2038 0000 F20F101D 		movsd	.LC27(%rip), %xmm3
 2038      00000000 
 2039 0008 660F2ED9 		ucomisd	%xmm1, %xmm3
 2040 000c 770A     		ja	.L106
 2041              	.LBE617:
 2042 000e E9000000 		jmp	_ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27
 2042      00
 2043              	.LVL239:
 2044              		.p2align 4,,10
 2045 0013 0F1F4400 		.p2align 3
 2045      00
 2046              	.L106:
 2047              	.LBB618:
  49:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 2048              		.loc 3 49 0
 2049 0018 F20F1112 		movsd	%xmm2, (%rdx)
 2050 001c F20F1116 		movsd	%xmm2, (%rsi)
 2051 0020 F20F1117 		movsd	%xmm2, (%rdi)
 2052 0024 C3       		ret
 2053              	.LBE618:
 2054              		.cfi_endproc
 2055              	.LFE628:
 2057              		.section	.text.unlikely._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_
 2058              	.LCOLDE32:
 2059              		.section	.text._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_
 2060              	.LHOTE32:
 2061              		.section	.text.unlikely._ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_,"ax",@progbits
 2062              		.align 2
 2063              	.LCOLDB35:
 2064              		.section	.text._ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_,"ax",@progbits
 2065              	.LHOTB35:
 2066              		.align 2
 2067              		.p2align 4,,15
 2068              		.globl	_ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_
 2070              	_ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_:
 2071              	.LFB629:
  73:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 2072              		.loc 3 73 0
 2073              		.cfi_startproc
 2074              	.LVL240:
  74:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2075              		.loc 3 74 0
 2076 0000 660F28D8 		movapd	%xmm0, %xmm3
 2077 0004 660F28FA 		movapd	%xmm2, %xmm7
 2078              	.LBB619:
  76:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 2079              		.loc 3 76 0
 2080 0008 660FEFF6 		pxor	%xmm6, %xmm6
 2081              	.LBE619:
  74:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2082              		.loc 3 74 0
 2083 000c F20F5FD9 		maxsd	%xmm1, %xmm3
 2084              	.LVL241:
 2085 0010 F20F5FFB 		maxsd	%xmm3, %xmm7
 2086              	.LBB621:
  76:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 2087              		.loc 3 76 0
 2088 0014 660F2EFE 		ucomisd	%xmm6, %xmm7
 2089              	.LBE621:
  74:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2090              		.loc 3 74 0
 2091 0018 660F28DF 		movapd	%xmm7, %xmm3
 2092              	.LVL242:
  75:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 2093              		.loc 3 75 0
 2094 001c F20F113A 		movsd	%xmm7, (%rdx)
 2095              	.LBB622:
  76:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 2096              		.loc 3 76 0
 2097 0020 7676     		jbe	.L107
 2098              	.LBB620:
  77:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 2099              		.loc 3 77 0
 2100 0022 660F28E0 		movapd	%xmm0, %xmm4
 2101 0026 660F28EA 		movapd	%xmm2, %xmm5
 2102 002a F20F5DE1 		minsd	%xmm1, %xmm4
 2103              	.LVL243:
 2104 002e F20F5DEC 		minsd	%xmm4, %xmm5
  78:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 2105              		.loc 3 78 0
 2106 0032 660F28FD 		movapd	%xmm5, %xmm7
  77:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 2107              		.loc 3 77 0
 2108 0036 660F28E5 		movapd	%xmm5, %xmm4
 2109              	.LVL244:
  78:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 2110              		.loc 3 78 0
 2111 003a F20F102D 		movsd	.LC7(%rip), %xmm5
 2111      00000000 
 2112 0042 F20F5EFB 		divsd	%xmm3, %xmm7
  79:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 2113              		.loc 3 79 0
 2114 0046 660F2EDC 		ucomisd	%xmm4, %xmm3
  78:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 2115              		.loc 3 78 0
 2116 004a F20F5CEF 		subsd	%xmm7, %xmm5
 2117 004e F20F112E 		movsd	%xmm5, (%rsi)
  79:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 2118              		.loc 3 79 0
 2119 0052 7644     		jbe	.L107
  80:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 2120              		.loc 3 80 0
 2121 0054 660F2ED8 		ucomisd	%xmm0, %xmm3
 2122 0058 7A1E     		jp	.L118
 2123 005a 751C     		jne	.L118
  80:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 2124              		.loc 3 80 0 is_stmt 0 discriminator 1
 2125 005c F20F5CCA 		subsd	%xmm2, %xmm1
 2126              	.LVL245:
 2127 0060 F20F5CDC 		subsd	%xmm4, %xmm3
 2128              	.LVL246:
 2129 0064 F20F5ECB 		divsd	%xmm3, %xmm1
 2130 0068 660F2EF1 		ucomisd	%xmm1, %xmm6
 2131 006c 7752     		ja	.L131
 2132              	.L130:
  80:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 2133              		.loc 3 80 0 discriminator 2
 2134 006e F20F110F 		movsd	%xmm1, (%rdi)
 2135 0072 C3       		ret
 2136              	.LVL247:
 2137              		.p2align 4,,10
 2138 0073 0F1F4400 		.p2align 3
 2138      00
 2139              	.L118:
  81:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 2140              		.loc 3 81 0 is_stmt 1
 2141 0078 660F2ED9 		ucomisd	%xmm1, %xmm3
 2142 007c 7A02     		jp	.L121
 2143 007e 7420     		je	.L132
 2144              	.L121:
  82:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 2145              		.loc 3 82 0
 2146 0080 F20F5CC1 		subsd	%xmm1, %xmm0
 2147              	.LVL248:
 2148 0084 F20F5CDC 		subsd	%xmm4, %xmm3
 2149              	.LVL249:
 2150 0088 F20F5EC3 		divsd	%xmm3, %xmm0
 2151 008c F20F5805 		addsd	.LC34(%rip), %xmm0
 2151      00000000 
 2152 0094 F20F1107 		movsd	%xmm0, (%rdi)
 2153              	.LVL250:
 2154              	.L107:
 2155 0098 F3C3     		rep ret
 2156              	.LVL251:
 2157 009a 660F1F44 		.p2align 4,,10
 2157      0000
 2158              		.p2align 3
 2159              	.L132:
  81:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 2160              		.loc 3 81 0 discriminator 1
 2161 00a0 F20F5CD0 		subsd	%xmm0, %xmm2
 2162              	.LVL252:
 2163 00a4 F20F5CDC 		subsd	%xmm4, %xmm3
 2164              	.LVL253:
 2165 00a8 F20F5ED3 		divsd	%xmm3, %xmm2
 2166 00ac F20F5815 		addsd	.LC33(%rip), %xmm2
 2166      00000000 
 2167 00b4 F20F1117 		movsd	%xmm2, (%rdi)
 2168 00b8 C3       		ret
 2169              	.LVL254:
 2170 00b9 0F1F8000 		.p2align 4,,10
 2170      000000
 2171              		.p2align 3
 2172              	.L131:
  80:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 2173              		.loc 3 80 0 discriminator 2
 2174 00c0 F20F580D 		addsd	.LC11(%rip), %xmm1
 2174      00000000 
 2175 00c8 EBA4     		jmp	.L130
 2176              	.LBE620:
 2177              	.LBE622:
 2178              		.cfi_endproc
 2179              	.LFE629:
 2181              		.section	.text.unlikely._ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_
 2182              	.LCOLDE35:
 2183              		.section	.text._ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_
 2184              	.LHOTE35:
 2185              		.section	.text.unlikely._ZN16Fl_Color_Chooser13set_valuatorsEv,"ax",@progbits
 2186              		.align 2
 2187              	.LCOLDB36:
 2188              		.section	.text._ZN16Fl_Color_Chooser13set_valuatorsEv,"ax",@progbits
 2189              	.LHOTB36:
 2190              		.align 2
 2191              		.p2align 4,,15
 2192              		.globl	_ZN16Fl_Color_Chooser13set_valuatorsEv
 2194              	_ZN16Fl_Color_Chooser13set_valuatorsEv:
 2195              	.LFB631:
 110:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2196              		.loc 3 110 0
 2197              		.cfi_startproc
 2198              	.LVL255:
 2199 0000 488B8720 		movq	544(%rdi), %rax
 2199      020000
 2200 0007 488B9718 		movq	536(%rdi), %rdx
 2200      020000
 2201              	.LVL256:
 2202              	.LBB623:
 2203              	.LBB624:
 2204              	.LBB625:
 2205              	.LBB626:
 2206              		.file 8 "fltk-1.3.4-1/FL/Fl_Menu_.H"
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
 2207              		.loc 8 140 0
 2208 000e 4885C0   		testq	%rax, %rax
 2209 0011 0F841E03 		je	.L144
 2209      0000
 2210              	.LBE626:
 2211              	.LBE625:
 2212              	.LBE624:
 2213              	.LBE623:
 111:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 2214              		.loc 3 111 0
 2215 0017 4829D0   		subq	%rdx, %rax
 2216 001a 48BAB76D 		movabsq	$7905747460161236407, %rdx
 2216      DBB66DDB 
 2216      B66D
 110:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2217              		.loc 3 110 0
 2218 0024 53       		pushq	%rbx
 2219              		.cfi_def_cfa_offset 16
 2220              		.cfi_offset 3, -16
 111:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 2221              		.loc 3 111 0
 2222 0025 48C1F803 		sarq	$3, %rax
 2223 0029 4889FB   		movq	%rdi, %rbx
 2224              	.LVL257:
 2225 002c 480FAFC2 		imulq	%rdx, %rax
 110:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2226              		.loc 3 110 0
 2227 0030 4883EC10 		subq	$16, %rsp
 2228              		.cfi_def_cfa_offset 32
 111:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 2229              		.loc 3 111 0
 2230 0034 83F802   		cmpl	$2, %eax
 2231 0037 0F8F1302 		jg	.L135
 2231      0000
 2232 003d 83F801   		cmpl	$1, %eax
 2233 0040 0F8DDA00 		jge	.L136
 2233      0000
 2234 0046 85C0     		testl	%eax, %eax
 2235 0048 0F85E202 		jne	.L133
 2235      0000
 2236              	.LVL258:
 2237              	.LBB627:
 2238              	.LBB628:
 2239              		.file 9 "fltk-1.3.4-1/FL/Fl_Valuator.H"
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
 2240              		.loc 9 104 0
 2241 004e F20F1015 		movsd	.LC7(%rip), %xmm2
 2241      00000000 
 2242 0056 48C787C0 		movq	$0, 704(%rdi)
 2242      02000000 
 2242      000000
 2243              	.LBE628:
 2244              	.LBE627:
 113:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 2245              		.loc 3 113 0
 2246 0061 488DBF38 		leaq	568(%rdi), %rdi
 2246      020000
 2247              	.LVL259:
 2248              	.LBB630:
 2249              	.LBB629:
 2250              		.loc 9 104 0
 2251 0068 F20F1197 		movsd	%xmm2, 144(%rdi)
 2251      90000000 
 2252              	.LVL260:
 2253              	.LBE629:
 2254              	.LBE630:
 2255              	.LBB631:
 2256              	.LBB632:
 105:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void step(int a) {A = a; B = 1;}
 107:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 108:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void step(double a, int b) {A = a; B = b;}
 2257              		.loc 9 108 0
 2258 0070 F20F1193 		movsd	%xmm2, 720(%rbx)
 2258      D0020000 
 2259 0078 C787A000 		movl	$1000, 160(%rdi)
 2259      0000E803 
 2259      0000
 2260              	.LVL261:
 2261              	.LBE632:
 2262              	.LBE631:
 113:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 2263              		.loc 3 113 0
 2264 0082 F20F1083 		movsd	1840(%rbx), %xmm0
 2264      30070000 
 2265 008a E8000000 		call	_ZN11Fl_Valuator5valueEd
 2265      00
 2266              	.LVL262:
 2267              	.LBB633:
 2268              	.LBB634:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2269              		.loc 9 104 0
 2270 008f F20F1025 		movsd	.LC7(%rip), %xmm4
 2270      00000000 
 2271              	.LBE634:
 2272              	.LBE633:
 114:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 2273              		.loc 3 114 0
 2274 0097 488DBBB0 		leaq	944(%rbx), %rdi
 2274      030000
 2275              	.LVL263:
 2276 009e F20F1083 		movsd	1848(%rbx), %xmm0
 2276      38070000 
 2277              	.LBB636:
 2278              	.LBB635:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2279              		.loc 9 104 0
 2280 00a6 48C78338 		movq	$0, 1080(%rbx)
 2280      04000000 
 2280      000000
 2281 00b1 F20F11A3 		movsd	%xmm4, 1088(%rbx)
 2281      40040000 
 2282              	.LVL264:
 2283              	.LBE635:
 2284              	.LBE636:
 2285              	.LBB637:
 2286              	.LBB638:
 2287              		.loc 9 108 0
 2288 00b9 C7835004 		movl	$1000, 1104(%rbx)
 2288      0000E803 
 2288      0000
 2289              	.LVL265:
 2290 00c3 F20F11A3 		movsd	%xmm4, 1096(%rbx)
 2290      48040000 
 2291              	.LBE638:
 2292              	.LBE637:
 114:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 2293              		.loc 3 114 0
 2294 00cb E8000000 		call	_ZN11Fl_Valuator5valueEd
 2294      00
 2295              	.LVL266:
 2296              	.LBB639:
 2297              	.LBB640:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2298              		.loc 9 104 0
 2299 00d0 F20F1035 		movsd	.LC7(%rip), %xmm6
 2299      00000000 
 2300 00d8 48C783B0 		movq	$0, 1456(%rbx)
 2300      05000000 
 2300      000000
 2301              	.LBE640:
 2302              	.LBE639:
 2303              	.LBB642:
 2304              	.LBB643:
 2305              		.loc 9 108 0
 2306 00e3 C783C805 		movl	$1000, 1480(%rbx)
 2306      0000E803 
 2306      0000
 2307              	.LBE643:
 2308              	.LBE642:
 115:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 2309              		.loc 3 115 0
 2310 00ed F20F1083 		movsd	1856(%rbx), %xmm0
 2310      40070000 
 2311              	.LBB645:
 2312              	.LBB641:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2313              		.loc 9 104 0
 2314 00f5 F20F11B3 		movsd	%xmm6, 1464(%rbx)
 2314      B8050000 
 2315              	.LVL267:
 2316              	.LBE641:
 2317              	.LBE645:
 115:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 2318              		.loc 3 115 0
 2319 00fd 488DBB28 		leaq	1320(%rbx), %rdi
 2319      050000
 2320              	.LVL268:
 2321              	.LBB646:
 2322              	.LBB644:
 2323              		.loc 9 108 0
 2324 0104 F20F11B3 		movsd	%xmm6, 1472(%rbx)
 2324      C0050000 
 2325              	.LBE644:
 2326              	.LBE646:
 129:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2327              		.loc 3 129 0
 2328 010c 4883C410 		addq	$16, %rsp
 2329              		.cfi_remember_state
 2330              		.cfi_def_cfa_offset 16
 2331 0110 5B       		popq	%rbx
 2332              		.cfi_restore 3
 2333              		.cfi_def_cfa_offset 8
 2334              	.LVL269:
 115:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 2335              		.loc 3 115 0
 2336 0111 E9000000 		jmp	_ZN11Fl_Valuator5valueEd
 2336      00
 2337              	.LVL270:
 2338 0116 662E0F1F 		.p2align 4,,10
 2338      84000000 
 2338      0000
 2339              		.p2align 3
 2340              	.L136:
 2341              		.cfi_restore_state
 2342              	.LBB647:
 2343              	.LBB648:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2344              		.loc 9 104 0
 2345 0120 F20F100D 		movsd	.LC4(%rip), %xmm1
 2345      00000000 
 2346 0128 48C787C0 		movq	$0, 704(%rdi)
 2346      02000000 
 2346      000000
 2347              	.LBE648:
 2348              	.LBE647:
 2349              	.LBB650:
 2350              	.LBB651:
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2351              		.loc 9 106 0
 2352 0133 F20F1015 		movsd	.LC7(%rip), %xmm2
 2352      00000000 
 2353 013b C787D802 		movl	$1, 728(%rdi)
 2353      00000100 
 2353      0000
 2354              	.LBE651:
 2355              	.LBE650:
 119:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2356              		.loc 3 119 0
 2357 0145 660F28C1 		movapd	%xmm1, %xmm0
 2358              	.LBB653:
 2359              	.LBB649:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2360              		.loc 9 104 0
 2361 0149 F20F118F 		movsd	%xmm1, 712(%rdi)
 2361      C8020000 
 2362              	.LVL271:
 2363              	.LBE649:
 2364              	.LBE653:
 2365              	.LBB654:
 2366              	.LBB652:
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2367              		.loc 9 106 0
 2368 0151 F20F1197 		movsd	%xmm2, 720(%rdi)
 2368      D0020000 
 2369              	.LBE652:
 2370              	.LBE654:
 119:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2371              		.loc 3 119 0
 2372 0159 488DBF38 		leaq	568(%rdi), %rdi
 2372      020000
 2373              	.LVL272:
 2374 0160 F20F5987 		mulsd	1272(%rdi), %xmm0
 2374      F8040000 
 2375 0168 F20F114C 		movsd	%xmm1, 8(%rsp)
 2375      2408
 2376 016e F20F5805 		addsd	.LC5(%rip), %xmm0
 2376      00000000 
 2377 0176 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2378 017a 660FEFC0 		pxor	%xmm0, %xmm0
 2379 017e F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2380 0182 E8000000 		call	_ZN11Fl_Valuator5valueEd
 2380      00
 2381              	.LVL273:
 2382              	.LBB655:
 2383              	.LBB656:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2384              		.loc 9 104 0
 2385 0187 F20F104C 		movsd	8(%rsp), %xmm1
 2385      2408
 2386              	.LBE656:
 2387              	.LBE655:
 120:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 2388              		.loc 3 120 0
 2389 018d 488DBBB0 		leaq	944(%rbx), %rdi
 2389      030000
 2390              	.LVL274:
 2391 0194 F20F1083 		movsd	1848(%rbx), %xmm0
 2391      38070000 
 2392              	.LBB659:
 2393              	.LBB657:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2394              		.loc 9 104 0
 2395 019c 48C78338 		movq	$0, 1080(%rbx)
 2395      04000000 
 2395      000000
 2396              	.LBE657:
 2397              	.LBE659:
 2398              	.LBB660:
 2399              	.LBB661:
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2400              		.loc 9 106 0
 2401 01a7 F20F101D 		movsd	.LC7(%rip), %xmm3
 2401      00000000 
 2402 01af C7835004 		movl	$1, 1104(%rbx)
 2402      00000100 
 2402      0000
 2403              	.LBE661:
 2404              	.LBE660:
 120:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 2405              		.loc 3 120 0
 2406 01b9 F20F59C1 		mulsd	%xmm1, %xmm0
 2407              	.LBB663:
 2408              	.LBB658:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2409              		.loc 9 104 0
 2410 01bd F20F118B 		movsd	%xmm1, 1088(%rbx)
 2410      40040000 
 2411              	.LVL275:
 2412              	.LBE658:
 2413              	.LBE663:
 2414              	.LBB664:
 2415              	.LBB662:
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2416              		.loc 9 106 0
 2417 01c5 F20F119B 		movsd	%xmm3, 1096(%rbx)
 2417      48040000 
 2418              	.LBE662:
 2419              	.LBE664:
 120:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 2420              		.loc 3 120 0
 2421 01cd F20F5805 		addsd	.LC5(%rip), %xmm0
 2421      00000000 
 2422 01d5 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2423 01d9 660FEFC0 		pxor	%xmm0, %xmm0
 2424 01dd F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2425 01e1 E8000000 		call	_ZN11Fl_Valuator5valueEd
 2425      00
 2426              	.LVL276:
 2427              	.LBB665:
 2428              	.LBB666:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2429              		.loc 9 104 0
 2430 01e6 F20F104C 		movsd	8(%rsp), %xmm1
 2430      2408
 2431 01ec 48C783B0 		movq	$0, 1456(%rbx)
 2431      05000000 
 2431      000000
 2432              	.LBE666:
 2433              	.LBE665:
 121:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 2434              		.loc 3 121 0
 2435 01f7 F20F1005 		movsd	.LC5(%rip), %xmm0
 2435      00000000 
 2436              	.LBB668:
 2437              	.LBB669:
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2438              		.loc 9 106 0
 2439 01ff C783C805 		movl	$1, 1480(%rbx)
 2439      00000100 
 2439      0000
 2440              	.LBE669:
 2441              	.LBE668:
 2442              	.LBB671:
 2443              	.LBB667:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2444              		.loc 9 104 0
 2445 0209 F20F118B 		movsd	%xmm1, 1464(%rbx)
 2445      B8050000 
 2446              	.LVL277:
 2447              	.LBE667:
 2448              	.LBE671:
 121:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 2449              		.loc 3 121 0
 2450 0211 F20F598B 		mulsd	1856(%rbx), %xmm1
 2450      40070000 
 2451 0219 488DBB28 		leaq	1320(%rbx), %rdi
 2451      050000
 2452              	.LVL278:
 2453              	.LBB672:
 2454              	.LBB670:
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2455              		.loc 9 106 0
 2456 0220 F20F1025 		movsd	.LC7(%rip), %xmm4
 2456      00000000 
 2457 0228 F20F11A3 		movsd	%xmm4, 1472(%rbx)
 2457      C0050000 
 2458              	.LBE670:
 2459              	.LBE672:
 129:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2460              		.loc 3 129 0
 2461 0230 4883C410 		addq	$16, %rsp
 2462              		.cfi_remember_state
 2463              		.cfi_def_cfa_offset 16
 2464 0234 5B       		popq	%rbx
 2465              		.cfi_restore 3
 2466              		.cfi_def_cfa_offset 8
 2467              	.LVL279:
 121:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 2468              		.loc 3 121 0
 2469 0235 F20F58C1 		addsd	%xmm1, %xmm0
 2470 0239 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2471 023d 660FEFC0 		pxor	%xmm0, %xmm0
 2472 0241 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2473 0245 E9000000 		jmp	_ZN11Fl_Valuator5valueEd
 2473      00
 2474              	.LVL280:
 2475 024a 660F1F44 		.p2align 4,,10
 2475      0000
 2476              		.p2align 3
 2477              	.L135:
 2478              		.cfi_restore_state
 111:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 2479              		.loc 3 111 0
 2480 0250 83F803   		cmpl	$3, %eax
 2481 0253 0F85D700 		jne	.L133
 2481      0000
 2482              	.LVL281:
 2483              	.LBB673:
 2484              	.LBB674:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2485              		.loc 9 104 0
 2486 0259 F20F102D 		movsd	.LC11(%rip), %xmm5
 2486      00000000 
 2487 0261 48C787C0 		movq	$0, 704(%rdi)
 2487      02000000 
 2487      000000
 2488              	.LBE674:
 2489              	.LBE673:
 124:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 2490              		.loc 3 124 0
 2491 026c 488DBF38 		leaq	568(%rdi), %rdi
 2491      020000
 2492              	.LVL282:
 2493              	.LBB676:
 2494              	.LBB677:
 2495              		.loc 9 108 0
 2496 0273 F20F1035 		movsd	.LC7(%rip), %xmm6
 2496      00000000 
 2497 027b C787A000 		movl	$1000, 160(%rdi)
 2497      0000E803 
 2497      0000
 2498              	.LBE677:
 2499              	.LBE676:
 2500              	.LBB679:
 2501              	.LBB675:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2502              		.loc 9 104 0
 2503 0285 F20F11AF 		movsd	%xmm5, 144(%rdi)
 2503      90000000 
 2504              	.LVL283:
 2505              	.LBE675:
 2506              	.LBE679:
 2507              	.LBB680:
 2508              	.LBB678:
 2509              		.loc 9 108 0
 2510 028d F20F11B7 		movsd	%xmm6, 152(%rdi)
 2510      98000000 
 2511              	.LBE678:
 2512              	.LBE680:
 124:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 2513              		.loc 3 124 0
 2514 0295 F20F1083 		movsd	1816(%rbx), %xmm0
 2514      18070000 
 2515 029d E8000000 		call	_ZN11Fl_Valuator5valueEd
 2515      00
 2516              	.LVL284:
 2517              	.LBB681:
 2518              	.LBB682:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2519              		.loc 9 104 0
 2520 02a2 F20F103D 		movsd	.LC7(%rip), %xmm7
 2520      00000000 
 2521              	.LBE682:
 2522              	.LBE681:
 125:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 2523              		.loc 3 125 0
 2524 02aa 488DBBB0 		leaq	944(%rbx), %rdi
 2524      030000
 2525              	.LVL285:
 2526 02b1 F20F1083 		movsd	1824(%rbx), %xmm0
 2526      20070000 
 2527              	.LBB684:
 2528              	.LBB683:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2529              		.loc 9 104 0
 2530 02b9 48C78338 		movq	$0, 1080(%rbx)
 2530      04000000 
 2530      000000
 2531 02c4 F20F11BB 		movsd	%xmm7, 1088(%rbx)
 2531      40040000 
 2532              	.LVL286:
 2533              	.LBE683:
 2534              	.LBE684:
 2535              	.LBB685:
 2536              	.LBB686:
 2537              		.loc 9 108 0
 2538 02cc C7835004 		movl	$1000, 1104(%rbx)
 2538      0000E803 
 2538      0000
 2539              	.LVL287:
 2540 02d6 F20F11BB 		movsd	%xmm7, 1096(%rbx)
 2540      48040000 
 2541              	.LBE686:
 2542              	.LBE685:
 125:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 2543              		.loc 3 125 0
 2544 02de E8000000 		call	_ZN11Fl_Valuator5valueEd
 2544      00
 2545              	.LVL288:
 2546              	.LBB687:
 2547              	.LBB688:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2548              		.loc 9 104 0
 2549 02e3 F20F101D 		movsd	.LC7(%rip), %xmm3
 2549      00000000 
 2550 02eb 48C783B0 		movq	$0, 1456(%rbx)
 2550      05000000 
 2550      000000
 2551              	.LBE688:
 2552              	.LBE687:
 2553              	.LBB690:
 2554              	.LBB691:
 2555              		.loc 9 108 0
 2556 02f6 C783C805 		movl	$1000, 1480(%rbx)
 2556      0000E803 
 2556      0000
 2557              	.LBE691:
 2558              	.LBE690:
 126:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 2559              		.loc 3 126 0
 2560 0300 F20F1083 		movsd	1832(%rbx), %xmm0
 2560      28070000 
 2561              	.LBB693:
 2562              	.LBB689:
 104:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 2563              		.loc 9 104 0
 2564 0308 F20F119B 		movsd	%xmm3, 1464(%rbx)
 2564      B8050000 
 2565              	.LVL289:
 2566              	.LBE689:
 2567              	.LBE693:
 126:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 2568              		.loc 3 126 0
 2569 0310 488DBB28 		leaq	1320(%rbx), %rdi
 2569      050000
 2570              	.LVL290:
 2571              	.LBB694:
 2572              	.LBB692:
 2573              		.loc 9 108 0
 2574 0317 F20F119B 		movsd	%xmm3, 1472(%rbx)
 2574      C0050000 
 2575              	.LBE692:
 2576              	.LBE694:
 129:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2577              		.loc 3 129 0
 2578 031f 4883C410 		addq	$16, %rsp
 2579              		.cfi_remember_state
 2580              		.cfi_def_cfa_offset 16
 2581 0323 5B       		popq	%rbx
 2582              		.cfi_restore 3
 2583              		.cfi_def_cfa_offset 8
 2584              	.LVL291:
 126:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 2585              		.loc 3 126 0
 2586 0324 E9000000 		jmp	_ZN11Fl_Valuator5valueEd
 2586      00
 2587              	.LVL292:
 2588 0329 0F1F8000 		.p2align 4,,10
 2588      000000
 2589              		.p2align 3
 2590              	.L133:
 2591              		.cfi_restore_state
 129:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2592              		.loc 3 129 0
 2593 0330 4883C410 		addq	$16, %rsp
 2594              		.cfi_def_cfa_offset 16
 2595 0334 5B       		popq	%rbx
 2596              		.cfi_restore 3
 2597              		.cfi_def_cfa_offset 8
 2598              	.LVL293:
 2599              	.L144:
 2600 0335 F3C3     		rep ret
 2601              		.cfi_endproc
 2602              	.LFE631:
 2604              		.section	.text.unlikely._ZN16Fl_Color_Chooser13set_valuatorsEv
 2605              	.LCOLDE36:
 2606              		.section	.text._ZN16Fl_Color_Chooser13set_valuatorsEv
 2607              	.LHOTE36:
 2608              		.section	.text.unlikely._ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv,"ax",@progbits
 2609              		.align 2
 2610              	.LCOLDB38:
 2611              		.section	.text._ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv,"ax",@progbits
 2612              	.LHOTB38:
 2613              		.align 2
 2614              		.p2align 4,,15
 2615              		.globl	_ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv
 2617              	_ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv:
 2618              	.LFB644:
 440:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2619              		.loc 3 440 0
 2620              		.cfi_startproc
 2621              	.LVL294:
 2622 0000 53       		pushq	%rbx
 2623              		.cfi_def_cfa_offset 16
 2624              		.cfi_offset 3, -16
 2625 0001 488B5F08 		movq	8(%rdi), %rbx
 2626              	.LVL295:
 443:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2627              		.loc 3 443 0
 2628 0005 F20F1005 		movsd	.LC37(%rip), %xmm0
 2628      00000000 
 2629 000d 488DBB38 		leaq	568(%rbx), %rdi
 2629      020000
 2630              	.LVL296:
 2631 0014 E8000000 		call	_ZN11Fl_Valuator5valueEd
 2631      00
 2632              	.LVL297:
 444:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 2633              		.loc 3 444 0
 2634 0019 488DBBB0 		leaq	944(%rbx), %rdi
 2634      030000
 2635 0020 F20F1005 		movsd	.LC37(%rip), %xmm0
 2635      00000000 
 2636 0028 E8000000 		call	_ZN11Fl_Valuator5valueEd
 2636      00
 2637              	.LVL298:
 445:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 2638              		.loc 3 445 0
 2639 002d 488DBB28 		leaq	1320(%rbx), %rdi
 2639      050000
 2640 0034 F20F1005 		movsd	.LC37(%rip), %xmm0
 2640      00000000 
 2641 003c E8000000 		call	_ZN11Fl_Valuator5valueEd
 2641      00
 2642              	.LVL299:
 446:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 2643              		.loc 3 446 0
 2644 0041 4889DF   		movq	%rbx, %rdi
 447:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 2645              		.loc 3 447 0
 2646 0044 5B       		popq	%rbx
 2647              		.cfi_def_cfa_offset 8
 446:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 2648              		.loc 3 446 0
 2649 0045 E9000000 		jmp	_ZN16Fl_Color_Chooser13set_valuatorsEv
 2649      00
 2650              	.LVL300:
 2651              		.cfi_endproc
 2652              	.LFE644:
 2654              		.section	.text.unlikely._ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv
 2655              	.LCOLDE38:
 2656              		.section	.text._ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv
 2657              	.LHOTE38:
 2658              		.section	.text.unlikely._ZN16Fl_Color_Chooser3rgbEddd,"ax",@progbits
 2659              		.align 2
 2660              	.LCOLDB39:
 2661              		.section	.text._ZN16Fl_Color_Chooser3rgbEddd,"ax",@progbits
 2662              	.LHOTB39:
 2663              		.align 2
 2664              		.p2align 4,,15
 2665              		.globl	_ZN16Fl_Color_Chooser3rgbEddd
 2667              	_ZN16Fl_Color_Chooser3rgbEddd:
 2668              	.LFB632:
 138:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 2669              		.loc 3 138 0
 2670              		.cfi_startproc
 2671              	.LVL301:
 2672 0000 53       		pushq	%rbx
 2673              		.cfi_def_cfa_offset 16
 2674              		.cfi_offset 3, -16
 2675 0001 4883EC20 		subq	$32, %rsp
 2676              		.cfi_def_cfa_offset 48
 139:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2677              		.loc 3 139 0
 2678 0005 660F2E87 		ucomisd	1840(%rdi), %xmm0
 2678      30070000 
 2679 000d 7A12     		jp	.L148
 2680 000f 7510     		jne	.L148
 139:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2681              		.loc 3 139 0 is_stmt 0 discriminator 1
 2682 0011 660F2E8F 		ucomisd	1848(%rdi), %xmm1
 2682      38070000 
 2683 0019 7A06     		jp	.L148
 2684 001b 0F84CF00 		je	.L165
 2684      0000
 2685              	.L148:
 143:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2686              		.loc 3 143 0 is_stmt 1
 2687 0021 F20F109F 		movsd	1832(%rdi), %xmm3
 2687      28070000 
 2688 0029 4889FB   		movq	%rdi, %rbx
 144:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 2689              		.loc 3 144 0
 2690 002c 488D9728 		leaq	1832(%rdi), %rdx
 2690      070000
 141:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2691              		.loc 3 141 0
 2692 0033 F20F10A7 		movsd	1816(%rdi), %xmm4
 2692      18070000 
 144:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 2693              		.loc 3 144 0
 2694 003b 488DB720 		leaq	1824(%rdi), %rsi
 2694      070000
 142:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 2695              		.loc 3 142 0
 2696 0042 F20F10AF 		movsd	1824(%rdi), %xmm5
 2696      20070000 
 144:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 2697              		.loc 3 144 0
 2698 004a 488DBF18 		leaq	1816(%rdi), %rdi
 2698      070000
 2699              	.LVL302:
 140:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 2700              		.loc 3 140 0
 2701 0051 F20F1147 		movsd	%xmm0, 24(%rdi)
 2701      18
 2702 0056 F20F114F 		movsd	%xmm1, 32(%rdi)
 2702      20
 2703 005b F20F1157 		movsd	%xmm2, 40(%rdi)
 2703      28
 143:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2704              		.loc 3 143 0
 2705 0060 F20F115C 		movsd	%xmm3, 16(%rsp)
 2705      2410
 141:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2706              		.loc 3 141 0
 2707 0066 F20F1164 		movsd	%xmm4, 8(%rsp)
 2707      2408
 2708              	.LVL303:
 142:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 2709              		.loc 3 142 0
 2710 006c F20F116C 		movsd	%xmm5, 24(%rsp)
 2710      2418
 2711              	.LVL304:
 144:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 2712              		.loc 3 144 0
 2713 0072 E8000000 		call	_ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_
 2713      00
 2714              	.LVL305:
 145:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 2715              		.loc 3 145 0
 2716 0077 4889DF   		movq	%rbx, %rdi
 2717 007a E8000000 		call	_ZN16Fl_Color_Chooser13set_valuatorsEv
 2717      00
 2718              	.LVL306:
 147:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2719              		.loc 3 147 0
 2720 007f F20F105C 		movsd	16(%rsp), %xmm3
 2720      2410
 2721              	.LBB695:
 2722              	.LBB696:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2723              		.loc 1 786 0
 2724 0085 814B6080 		orl	$128, 96(%rbx)
 2724      000000
 2725              	.LBE696:
 2726              	.LBE695:
 147:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 2727              		.loc 3 147 0
 2728 008c 660F2E9B 		ucomisd	1832(%rbx), %xmm3
 2728      28070000 
 2729 0094 7A7A     		jp	.L161
 2730 0096 7578     		jne	.L161
 2731              	.L153:
 152:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 2732              		.loc 3 152 0
 2733 0098 F20F1074 		movsd	8(%rsp), %xmm6
 2733      2408
 2734 009e 660F2EB3 		ucomisd	1816(%rbx), %xmm6
 2734      18070000 
 2735 00a6 7A19     		jp	.L155
 2736 00a8 7517     		jne	.L155
 152:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 2737              		.loc 3 152 0 is_stmt 0 discriminator 1
 2738 00aa F20F107C 		movsd	24(%rsp), %xmm7
 2738      2418
 2739 00b0 660F2EBB 		ucomisd	1824(%rbx), %xmm7
 2739      20070000 
 2740 00b8 7A07     		jp	.L155
 156:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2741              		.loc 3 156 0 is_stmt 1 discriminator 1
 2742 00ba B8010000 		movl	$1, %eax
 2742      00
 152:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 2743              		.loc 3 152 0 discriminator 1
 2744 00bf 7427     		je	.L151
 2745              	.L155:
 153:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2746              		.loc 3 153 0
 2747 00c1 488DBBA0 		leaq	160(%rbx), %rdi
 2747      000000
 2748 00c8 BE020000 		movl	$2, %esi
 2748      00
 2749 00cd E8000000 		call	_ZN9Fl_Widget6damageEh
 2749      00
 2750              	.LVL307:
 154:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2751              		.loc 3 154 0
 2752 00d2 488DBB20 		leaq	288(%rbx), %rdi
 2752      010000
 2753 00d9 BE040000 		movl	$4, %esi
 2753      00
 2754 00de E8000000 		call	_ZN9Fl_Widget6damageEh
 2754      00
 2755              	.LVL308:
 156:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2756              		.loc 3 156 0
 2757 00e3 B8010000 		movl	$1, %eax
 2757      00
 2758              	.L151:
 157:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 2759              		.loc 3 157 0
 2760 00e8 4883C420 		addq	$32, %rsp
 2761              		.cfi_remember_state
 2762              		.cfi_def_cfa_offset 16
 2763 00ec 5B       		popq	%rbx
 2764              		.cfi_def_cfa_offset 8
 2765              	.LVL309:
 2766 00ed C3       		ret
 2767              	.LVL310:
 2768 00ee 6690     		.p2align 4,,10
 2769              		.p2align 3
 2770              	.L165:
 2771              		.cfi_restore_state
 139:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2772              		.loc 3 139 0 discriminator 2
 2773 00f0 660F2E97 		ucomisd	1856(%rdi), %xmm2
 2773      40070000 
 2774 00f8 0F8A23FF 		jp	.L148
 2774      FFFF
 2775 00fe B8000000 		movl	$0, %eax
 2775      00
 2776 0103 0F8518FF 		jne	.L148
 2776      FFFF
 157:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 2777              		.loc 3 157 0
 2778 0109 4883C420 		addq	$32, %rsp
 2779              		.cfi_remember_state
 2780              		.cfi_def_cfa_offset 16
 2781 010d 5B       		popq	%rbx
 2782              		.cfi_def_cfa_offset 8
 2783 010e C3       		ret
 2784              	.LVL311:
 2785 010f 90       		.p2align 4,,10
 2786              		.p2align 3
 2787              	.L161:
 2788              		.cfi_restore_state
 149:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 2789              		.loc 3 149 0
 2790 0110 488DBBA0 		leaq	160(%rbx), %rdi
 2790      000000
 2791 0117 BE040000 		movl	$4, %esi
 2791      00
 2792 011c E8000000 		call	_ZN9Fl_Widget6damageEh
 2792      00
 2793              	.LVL312:
 151:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2794              		.loc 3 151 0
 2795 0121 488DBB20 		leaq	288(%rbx), %rdi
 2795      010000
 2796 0128 BE020000 		movl	$2, %esi
 2796      00
 2797 012d E8000000 		call	_ZN9Fl_Widget6damageEh
 2797      00
 2798              	.LVL313:
 2799 0132 E961FFFF 		jmp	.L153
 2799      FF
 2800              		.cfi_endproc
 2801              	.LFE632:
 2803              		.section	.text.unlikely._ZN16Fl_Color_Chooser3rgbEddd
 2804              	.LCOLDE39:
 2805              		.section	.text._ZN16Fl_Color_Chooser3rgbEddd
 2806              	.LHOTE39:
 2807              		.section	.text.unlikely._ZN16Fl_Color_Chooser3hsvEddd,"ax",@progbits
 2808              		.align 2
 2809              	.LCOLDB40:
 2810              		.section	.text._ZN16Fl_Color_Chooser3hsvEddd,"ax",@progbits
 2811              	.LHOTB40:
 2812              		.align 2
 2813              		.p2align 4,,15
 2814              		.globl	_ZN16Fl_Color_Chooser3hsvEddd
 2816              	_ZN16Fl_Color_Chooser3hsvEddd:
 2817              	.LFB633:
 166:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2818              		.loc 3 166 0
 2819              		.cfi_startproc
 2820              	.LVL314:
 2821 0000 4154     		pushq	%r12
 2822              		.cfi_def_cfa_offset 16
 2823              		.cfi_offset 12, -16
 2824 0002 55       		pushq	%rbp
 2825              		.cfi_def_cfa_offset 24
 2826              		.cfi_offset 6, -24
 2827 0003 53       		pushq	%rbx
 2828              		.cfi_def_cfa_offset 32
 2829              		.cfi_offset 3, -32
 2830 0004 4889FB   		movq	%rdi, %rbx
 2831 0007 4883EC30 		subq	$48, %rsp
 2832              		.cfi_def_cfa_offset 80
 166:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2833              		.loc 3 166 0
 2834 000b F20F114C 		movsd	%xmm1, 16(%rsp)
 2834      2410
 167:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 2835              		.loc 3 167 0
 2836 0011 F20F100D 		movsd	.LC11(%rip), %xmm1
 2836      00000000 
 2837              	.LVL315:
 166:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2838              		.loc 3 166 0
 2839 0019 F20F1154 		movsd	%xmm2, 8(%rsp)
 2839      2408
 167:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 2840              		.loc 3 167 0
 2841 001f E8000000 		call	fmod
 2841      00
 2842              	.LVL316:
 2843 0024 660FEFC9 		pxor	%xmm1, %xmm1
 2844 0028 F20F1054 		movsd	8(%rsp), %xmm2
 2844      2408
 2845 002e F20F105C 		movsd	16(%rsp), %xmm3
 2845      2410
 2846 0034 660F2EC8 		ucomisd	%xmm0, %xmm1
 2847 0038 0F872A02 		ja	.L203
 2847      0000
 2848              	.L167:
 168:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 2849              		.loc 3 168 0
 2850 003e 660F2ECB 		ucomisd	%xmm3, %xmm1
 2851 0042 0F871002 		ja	.L187
 2851      0000
 168:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 2852              		.loc 3 168 0 is_stmt 0 discriminator 2
 2853 0048 F20F1025 		movsd	.LC7(%rip), %xmm4
 2853      00000000 
 2854 0050 F20F5DE3 		minsd	%xmm3, %xmm4
 2855 0054 660F28DC 		movapd	%xmm4, %xmm3
 2856              	.L169:
 2857              	.LVL317:
 169:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 2858              		.loc 3 169 0 is_stmt 1
 2859 0058 660F2ECA 		ucomisd	%xmm2, %xmm1
 2860 005c 0F87E601 		ja	.L189
 2860      0000
 169:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 2861              		.loc 3 169 0 is_stmt 0 discriminator 2
 2862 0062 F20F100D 		movsd	.LC7(%rip), %xmm1
 2862      00000000 
 2863 006a F20F5DCA 		minsd	%xmm2, %xmm1
 2864 006e 660F28D1 		movapd	%xmm1, %xmm2
 2865              	.L170:
 2866              	.LVL318:
 170:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2867              		.loc 3 170 0 is_stmt 1
 2868 0072 F20F108B 		movsd	1816(%rbx), %xmm1
 2868      18070000 
 2869 007a F20F10A3 		movsd	1824(%rbx), %xmm4
 2869      20070000 
 2870 0082 660F2EC1 		ucomisd	%xmm1, %xmm0
 2871 0086 7A48     		jp	.L171
 2872 0088 7546     		jne	.L171
 170:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2873              		.loc 3 170 0 is_stmt 0 discriminator 1
 2874 008a 660F2EDC 		ucomisd	%xmm4, %xmm3
 2875 008e 0F8A7C01 		jp	.L173
 2875      0000
 2876 0094 0F857601 		jne	.L173
 2876      0000
 170:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 2877              		.loc 3 170 0 discriminator 2
 2878 009a 660F2E93 		ucomisd	1832(%rbx), %xmm2
 2878      28070000 
 2879 00a2 7A0B     		jp	.L177
 2880 00a4 B8000000 		movl	$0, %eax
 2880      00
 2881 00a9 0F844F01 		je	.L198
 2881      0000
 2882              	.L177:
 2883              	.LVL319:
 174:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 2884              		.loc 3 174 0 is_stmt 1
 2885 00af F20F1183 		movsd	%xmm0, 1816(%rbx)
 2885      18070000 
 2886 00b7 F20F119B 		movsd	%xmm3, 1824(%rbx)
 2886      20070000 
 2887 00bf F20F1193 		movsd	%xmm2, 1832(%rbx)
 2887      28070000 
 2888              	.LVL320:
 2889 00c7 EB2F     		jmp	.L185
 2890              	.LVL321:
 2891 00c9 0F1F8000 		.p2align 4,,10
 2891      000000
 2892              		.p2align 3
 2893              	.L171:
 173:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 2894              		.loc 3 173 0
 2895 00d0 F20F10AB 		movsd	1832(%rbx), %xmm5
 2895      28070000 
 2896              	.LVL322:
 174:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 2897              		.loc 3 174 0
 2898 00d8 F20F1183 		movsd	%xmm0, 1816(%rbx)
 2898      18070000 
 175:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 2899              		.loc 3 175 0
 2900 00e0 660F2ED5 		ucomisd	%xmm5, %xmm2
 174:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 2901              		.loc 3 174 0
 2902 00e4 F20F119B 		movsd	%xmm3, 1824(%rbx)
 2902      20070000 
 2903              	.LVL323:
 2904 00ec F20F1193 		movsd	%xmm2, 1832(%rbx)
 2904      28070000 
 175:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 2905              		.loc 3 175 0
 2906 00f4 7A02     		jp	.L185
 2907 00f6 747C     		je	.L202
 2908              	.LVL324:
 2909              	.L185:
 177:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 2910              		.loc 3 177 0
 2911 00f8 4C8DA3A0 		leaq	160(%rbx), %r12
 2911      000000
 179:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 2912              		.loc 3 179 0
 2913 00ff 488DAB20 		leaq	288(%rbx), %rbp
 2913      010000
 177:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 2914              		.loc 3 177 0
 2915 0106 BE040000 		movl	$4, %esi
 2915      00
 2916 010b F20F1154 		movsd	%xmm2, 32(%rsp)
 2916      2420
 2917 0111 4C89E7   		movq	%r12, %rdi
 2918 0114 F20F115C 		movsd	%xmm3, 24(%rsp)
 2918      2418
 2919 011a F20F114C 		movsd	%xmm1, 16(%rsp)
 2919      2410
 2920 0120 F20F1144 		movsd	%xmm0, 8(%rsp)
 2920      2408
 2921              	.LVL325:
 2922 0126 F20F1164 		movsd	%xmm4, 40(%rsp)
 2922      2428
 2923              	.LVL326:
 2924 012c E8000000 		call	_ZN9Fl_Widget6damageEh
 2924      00
 2925              	.LVL327:
 179:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 2926              		.loc 3 179 0
 2927 0131 BE020000 		movl	$2, %esi
 2927      00
 2928 0136 4889EF   		movq	%rbp, %rdi
 2929 0139 E8000000 		call	_ZN9Fl_Widget6damageEh
 2929      00
 2930              	.LVL328:
 180:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 2931              		.loc 3 180 0
 2932 013e F20F104C 		movsd	16(%rsp), %xmm1
 2932      2410
 2933 0144 F20F1044 		movsd	8(%rsp), %xmm0
 2933      2408
 2934 014a 660F2E8B 		ucomisd	1816(%rbx), %xmm1
 2934      18070000 
 2935 0152 F20F105C 		movsd	24(%rsp), %xmm3
 2935      2418
 2936 0158 F20F1054 		movsd	32(%rsp), %xmm2
 2936      2420
 2937 015e 7A22     		jp	.L178
 2938 0160 F20F1064 		movsd	40(%rsp), %xmm4
 2938      2428
 2939 0166 751A     		jne	.L178
 2940              	.LVL329:
 2941              	.L186:
 180:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 2942              		.loc 3 180 0 is_stmt 0 discriminator 1
 2943 0168 660F2EA3 		ucomisd	1824(%rbx), %xmm4
 2943      20070000 
 2944 0170 7A02     		jp	.L202
 2945 0172 744C     		je	.L180
 2946              	.L202:
 2947 0174 4C8DA3A0 		leaq	160(%rbx), %r12
 2947      000000
 2948 017b 488DAB20 		leaq	288(%rbx), %rbp
 2948      010000
 2949              	.L178:
 181:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 2950              		.loc 3 181 0 is_stmt 1
 2951 0182 BE020000 		movl	$2, %esi
 2951      00
 2952 0187 4C89E7   		movq	%r12, %rdi
 2953 018a F20F1154 		movsd	%xmm2, 24(%rsp)
 2953      2418
 2954 0190 F20F115C 		movsd	%xmm3, 16(%rsp)
 2954      2410
 2955 0196 F20F1144 		movsd	%xmm0, 8(%rsp)
 2955      2408
 2956 019c E8000000 		call	_ZN9Fl_Widget6damageEh
 2956      00
 2957              	.LVL330:
 182:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 2958              		.loc 3 182 0
 2959 01a1 BE040000 		movl	$4, %esi
 2959      00
 2960 01a6 4889EF   		movq	%rbp, %rdi
 2961 01a9 E8000000 		call	_ZN9Fl_Widget6damageEh
 2961      00
 2962              	.LVL331:
 2963 01ae F20F1054 		movsd	24(%rsp), %xmm2
 2963      2418
 2964 01b4 F20F105C 		movsd	16(%rsp), %xmm3
 2964      2410
 2965 01ba F20F1044 		movsd	8(%rsp), %xmm0
 2965      2408
 2966              	.L180:
 2967              	.LVL332:
 2968              	.LBB697:
 2969              	.LBB698:
 2970              	.LBB699:
  48:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 2971              		.loc 3 48 0
 2972 01c0 F20F100D 		movsd	.LC27(%rip), %xmm1
 2972      00000000 
 2973 01c8 660F2ECB 		ucomisd	%xmm3, %xmm1
 2974 01cc 0F86A600 		jbe	.L200
 2974      0000
  49:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 2975              		.loc 3 49 0
 2976 01d2 F20F1193 		movsd	%xmm2, 1856(%rbx)
 2976      40070000 
 2977 01da F20F1193 		movsd	%xmm2, 1848(%rbx)
 2977      38070000 
 2978 01e2 F20F1193 		movsd	%xmm2, 1840(%rbx)
 2978      30070000 
 2979              	.LVL333:
 2980              	.L184:
 2981              	.LBE699:
 2982              	.LBE698:
 2983              	.LBE697:
 185:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 2984              		.loc 3 185 0
 2985 01ea 4889DF   		movq	%rbx, %rdi
 2986 01ed E8000000 		call	_ZN16Fl_Color_Chooser13set_valuatorsEv
 2986      00
 2987              	.LVL334:
 2988              	.LBB701:
 2989              	.LBB702:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2990              		.loc 1 786 0
 2991 01f2 814B6080 		orl	$128, 96(%rbx)
 2991      000000
 2992              	.LBE702:
 2993              	.LBE701:
 187:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 2994              		.loc 3 187 0
 2995 01f9 B8010000 		movl	$1, %eax
 2995      00
 2996              	.LVL335:
 2997              	.L198:
 188:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 2998              		.loc 3 188 0
 2999 01fe 4883C430 		addq	$48, %rsp
 3000              		.cfi_remember_state
 3001              		.cfi_def_cfa_offset 32
 3002 0202 5B       		popq	%rbx
 3003              		.cfi_def_cfa_offset 24
 3004              	.LVL336:
 3005 0203 5D       		popq	%rbp
 3006              		.cfi_def_cfa_offset 16
 3007 0204 415C     		popq	%r12
 3008              		.cfi_def_cfa_offset 8
 3009 0206 C3       		ret
 3010              	.LVL337:
 3011 0207 660F1F84 		.p2align 4,,10
 3011      00000000 
 3011      00
 3012              		.p2align 3
 3013              	.L173:
 3014              		.cfi_restore_state
 173:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 3015              		.loc 3 173 0
 3016 0210 F20F10AB 		movsd	1832(%rbx), %xmm5
 3016      28070000 
 3017              	.LVL338:
 174:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 3018              		.loc 3 174 0
 3019 0218 F20F1183 		movsd	%xmm0, 1816(%rbx)
 3019      18070000 
 175:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 3020              		.loc 3 175 0
 3021 0220 660F2ED5 		ucomisd	%xmm5, %xmm2
 174:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 3022              		.loc 3 174 0
 3023 0224 F20F119B 		movsd	%xmm3, 1824(%rbx)
 3023      20070000 
 3024              	.LVL339:
 3025 022c F20F1193 		movsd	%xmm2, 1832(%rbx)
 3025      28070000 
 175:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 3026              		.loc 3 175 0
 3027 0234 0F8ABEFE 		jp	.L185
 3027      FFFF
 3028 023a 0F8428FF 		je	.L186
 3028      FFFF
 3029 0240 E9B3FEFF 		jmp	.L185
 3029      FF
 3030              	.LVL340:
 3031              		.p2align 4,,10
 3032 0245 0F1F00   		.p2align 3
 3033              	.L189:
 169:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 3034              		.loc 3 169 0
 3035 0248 660F28D1 		movapd	%xmm1, %xmm2
 3036 024c E921FEFF 		jmp	.L170
 3036      FF
 3037              	.LVL341:
 3038              		.p2align 4,,10
 3039 0251 0F1F8000 		.p2align 3
 3039      000000
 3040              	.L187:
 168:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 3041              		.loc 3 168 0
 3042 0258 660F28D9 		movapd	%xmm1, %xmm3
 3043 025c E9F7FDFF 		jmp	.L169
 3043      FF
 3044              		.p2align 4,,10
 3045 0261 0F1F8000 		.p2align 3
 3045      000000
 3046              	.L203:
 167:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 3047              		.loc 3 167 0 discriminator 1
 3048 0268 F20F5805 		addsd	.LC11(%rip), %xmm0
 3048      00000000 
 3049              	.LVL342:
 3050 0270 E9C9FDFF 		jmp	.L167
 3050      FF
 3051              	.LVL343:
 3052              		.p2align 4,,10
 3053 0275 0F1F00   		.p2align 3
 3054              	.L200:
 184:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 3055              		.loc 3 184 0
 3056 0278 488D9340 		leaq	1856(%rbx), %rdx
 3056      070000
 3057 027f 488DB338 		leaq	1848(%rbx), %rsi
 3057      070000
 3058 0286 488DBB30 		leaq	1840(%rbx), %rdi
 3058      070000
 3059              	.LBB703:
 3060              	.LBB700:
 3061 028d 660F28CB 		movapd	%xmm3, %xmm1
 3062 0291 E8000000 		call	_ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27
 3062      00
 3063              	.LVL344:
 3064 0296 E94FFFFF 		jmp	.L184
 3064      FF
 3065              	.LBE700:
 3066              	.LBE703:
 3067              		.cfi_endproc
 3068              	.LFE633:
 3070              		.section	.text.unlikely._ZN16Fl_Color_Chooser3hsvEddd
 3071              	.LCOLDE40:
 3072              		.section	.text._ZN16Fl_Color_Chooser3hsvEddd
 3073              	.LHOTE40:
 3074              		.section	.text.unlikely._ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv,"ax",@progbits
 3075              		.align 2
 3076              	.LCOLDB41:
 3077              		.section	.text._ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv,"ax",@progbits
 3078              	.LHOTB41:
 3079              		.align 2
 3080              		.p2align 4,,15
 3081              		.globl	_ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv
 3083              	_ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv:
 3084              	.LFB643:
 423:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3085              		.loc 3 423 0
 3086              		.cfi_startproc
 3087              	.LVL345:
 3088 0000 53       		pushq	%rbx
 3089              		.cfi_def_cfa_offset 16
 3090              		.cfi_offset 3, -16
 3091 0001 488B5F08 		movq	8(%rdi), %rbx
 3092              	.LVL346:
 3093 0005 488B8320 		movq	544(%rbx), %rax
 3093      020000
 3094 000c F20F1083 		movsd	688(%rbx), %xmm0
 3094      B0020000 
 3095              	.LVL347:
 3096 0014 F20F108B 		movsd	1064(%rbx), %xmm1
 3096      28040000 
 3097              	.LVL348:
 3098 001c 488B9318 		movq	536(%rbx), %rdx
 3098      020000
 3099 0023 F20F1093 		movsd	1440(%rbx), %xmm2
 3099      A0050000 
 3100              	.LVL349:
 3101              	.LBB704:
 3102              	.LBB705:
 3103              	.LBB706:
 3104              	.LBB707:
 3105              		.loc 8 140 0
 3106 002b 4885C0   		testq	%rax, %rax
 3107 002e 7450     		je	.L205
 3108 0030 4829D0   		subq	%rdx, %rax
 3109 0033 48BAB76D 		movabsq	$7905747460161236407, %rdx
 3109      DBB66DDB 
 3109      B66D
 3110 003d 48C1F803 		sarq	$3, %rax
 3111 0041 480FAFC2 		imulq	%rdx, %rax
 3112              	.LBE707:
 3113              	.LBE706:
 3114              	.LBE705:
 3115              	.LBE704:
 428:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 3116              		.loc 3 428 0
 3117 0045 83F803   		cmpl	$3, %eax
 3118 0048 7416     		je	.L219
 3119              	.LVL350:
 432:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3120              		.loc 3 432 0
 3121 004a 85C0     		testl	%eax, %eax
 3122 004c 7532     		jne	.L205
 3123              	.LVL351:
 437:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 3124              		.loc 3 437 0
 3125 004e 4889DF   		movq	%rbx, %rdi
 3126              	.LVL352:
 3127 0051 E8000000 		call	_ZN16Fl_Color_Chooser3rgbEddd
 3127      00
 3128              	.LVL353:
 3129 0056 85C0     		testl	%eax, %eax
 3130 0058 7512     		jne	.L218
 3131              	.LVL354:
 3132              	.L204:
 438:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3133              		.loc 3 438 0
 3134 005a 5B       		popq	%rbx
 3135              		.cfi_remember_state
 3136              		.cfi_def_cfa_offset 8
 3137              	.LVL355:
 3138 005b C3       		ret
 3139              	.LVL356:
 3140 005c 0F1F4000 		.p2align 4,,10
 3141              		.p2align 3
 3142              	.L219:
 3143              		.cfi_restore_state
 429:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 3144              		.loc 3 429 0
 3145 0060 4889DF   		movq	%rbx, %rdi
 3146              	.LVL357:
 3147 0063 E8000000 		call	_ZN16Fl_Color_Chooser3hsvEddd
 3147      00
 3148              	.LVL358:
 3149 0068 85C0     		testl	%eax, %eax
 3150 006a 74EE     		je	.L204
 3151              	.L218:
 3152              	.LVL359:
 3153              	.LBB708:
 3154              	.LBB709:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3155              		.loc 1 861 0 discriminator 1
 3156 006c 488B5318 		movq	24(%rbx), %rdx
 3157 0070 4889DE   		movq	%rbx, %rsi
 3158 0073 4889DF   		movq	%rbx, %rdi
 3159              	.LBE709:
 3160              	.LBE708:
 438:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3161              		.loc 3 438 0 discriminator 1
 3162 0076 5B       		popq	%rbx
 3163              		.cfi_remember_state
 3164              		.cfi_def_cfa_offset 8
 3165              	.LVL360:
 3166              	.LBB711:
 3167              	.LBB710:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3168              		.loc 1 861 0 discriminator 1
 3169 0077 E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 3169      00
 3170              	.LVL361:
 3171 007c 0F1F4000 		.p2align 4,,10
 3172              		.p2align 3
 3173              	.L205:
 3174              		.cfi_restore_state
 3175              	.LBE710:
 3176              	.LBE711:
 433:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 3177              		.loc 3 433 0
 3178 0080 F20F101D 		movsd	.LC4(%rip), %xmm3
 3178      00000000 
 437:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 3179              		.loc 3 437 0
 3180 0088 4889DF   		movq	%rbx, %rdi
 3181              	.LVL362:
 433:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 3182              		.loc 3 433 0
 3183 008b F20F5EC3 		divsd	%xmm3, %xmm0
 3184              	.LVL363:
 434:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 3185              		.loc 3 434 0
 3186 008f F20F5ECB 		divsd	%xmm3, %xmm1
 3187              	.LVL364:
 435:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 3188              		.loc 3 435 0
 3189 0093 F20F5ED3 		divsd	%xmm3, %xmm2
 3190              	.LVL365:
 437:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 3191              		.loc 3 437 0
 3192 0097 E8000000 		call	_ZN16Fl_Color_Chooser3rgbEddd
 3192      00
 3193              	.LVL366:
 3194 009c 85C0     		testl	%eax, %eax
 3195 009e 74BA     		je	.L204
 3196 00a0 EBCA     		jmp	.L218
 3197              		.cfi_endproc
 3198              	.LFE643:
 3200              		.section	.text.unlikely._ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv
 3201              	.LCOLDE41:
 3202              		.section	.text._ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv
 3203              	.LHOTE41:
 3204              		.section	.text.unlikely._ZN11Flcc_HueBox10handle_keyEi,"ax",@progbits
 3205              		.align 2
 3206              	.LCOLDB42:
 3207              		.section	.text._ZN11Flcc_HueBox10handle_keyEi,"ax",@progbits
 3208              	.LHOTB42:
 3209              		.align 2
 3210              		.p2align 4,,15
 3211              		.globl	_ZN11Flcc_HueBox10handle_keyEi
 3213              	_ZN11Flcc_HueBox10handle_keyEi:
 3214              	.LFB637:
 263:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 3215              		.loc 3 263 0
 3216              		.cfi_startproc
 3217              	.LVL367:
 3218 0000 4157     		pushq	%r15
 3219              		.cfi_def_cfa_offset 16
 3220              		.cfi_offset 15, -16
 3221 0002 4156     		pushq	%r14
 3222              		.cfi_def_cfa_offset 24
 3223              		.cfi_offset 14, -24
 3224 0004 4189F6   		movl	%esi, %r14d
 3225 0007 4155     		pushq	%r13
 3226              		.cfi_def_cfa_offset 32
 3227              		.cfi_offset 13, -32
 3228 0009 4154     		pushq	%r12
 3229              		.cfi_def_cfa_offset 40
 3230              		.cfi_offset 12, -40
 3231 000b 4989FC   		movq	%rdi, %r12
 3232 000e 55       		pushq	%rbp
 3233              		.cfi_def_cfa_offset 48
 3234              		.cfi_offset 6, -48
 3235 000f 53       		pushq	%rbx
 3236              		.cfi_def_cfa_offset 56
 3237              		.cfi_offset 3, -56
 3238 0010 4883EC38 		subq	$56, %rsp
 3239              		.cfi_def_cfa_offset 112
 3240 0014 8B6F28   		movl	40(%rdi), %ebp
 264:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3241              		.loc 3 264 0
 3242 0017 0FB67F6E 		movzbl	110(%rdi), %edi
 3243              	.LVL368:
 263:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 3244              		.loc 3 263 0
 3245 001b 64488B04 		movq	%fs:40, %rax
 3245      25280000 
 3245      00
 3246 0024 48894424 		movq	%rax, 40(%rsp)
 3246      28
 3247 0029 31C0     		xorl	%eax, %eax
 3248              	.LVL369:
 264:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3249              		.loc 3 264 0
 3250 002b E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 3250      00
 3251              	.LVL370:
 265:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 3252              		.loc 3 265 0
 3253 0030 410FB67C 		movzbl	110(%r12), %edi
 3253      246E
 3254 0036 418B5C24 		movl	44(%r12), %ebx
 3254      2C
 264:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3255              		.loc 3 264 0
 3256 003b 4189C7   		movl	%eax, %r15d
 3257              	.LVL371:
 269:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3258              		.loc 3 269 0
 3259 003e 4429FD   		subl	%r15d, %ebp
 3260              	.LVL372:
 3261 0041 83ED06   		subl	$6, %ebp
 3262              	.LVL373:
 265:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 3263              		.loc 3 265 0
 3264 0044 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 3264      00
 3265              	.LVL374:
 3266 0049 4D8B6424 		movq	8(%r12), %r12
 3266      08
 3267              	.LVL375:
 3268 004e F20F1005 		movsd	.LC13(%rip), %xmm0
 3268      00000000 
 3269 0056 488D7C24 		leaq	8(%rsp), %rdi
 3269      08
 3270 005b 4889E6   		movq	%rsp, %rsi
 3271 005e 4189C5   		movl	%eax, %r13d
 3272              	.LVL376:
 270:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3273              		.loc 3 270 0
 3274 0061 4429EB   		subl	%r13d, %ebx
 3275              	.LVL377:
 3276 0064 F2410F59 		mulsd	1816(%r12), %xmm0
 3276      84241807 
 3276      0000
 3277 006e 83EB06   		subl	$6, %ebx
 3278              	.LVL378:
 3279 0071 E8000000 		call	sincos
 3279      00
 3280              	.LVL379:
 3281 0076 F2410F10 		movsd	1824(%r12), %xmm5
 3281      AC242007 
 3281      0000
 3282              	.LVL380:
 276:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 3283              		.loc 3 276 0
 3284 0080 4181FE52 		cmpl	$65362, %r14d
 3284      FF0000
 269:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3285              		.loc 3 269 0
 3286 0087 F20F1004 		movsd	(%rsp), %xmm0
 3286      24
 3287 008c 660FEFDB 		pxor	%xmm3, %xmm3
 3288 0090 F20F59C5 		mulsd	%xmm5, %xmm0
 270:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3289              		.loc 3 270 0
 3290 0094 660FEFD2 		pxor	%xmm2, %xmm2
 3291 0098 F20F596C 		mulsd	8(%rsp), %xmm5
 3291      2408
 269:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3292              		.loc 3 269 0
 3293 009e F20F2ADD 		cvtsi2sd	%ebp, %xmm3
 3294 00a2 F20F1025 		movsd	.LC7(%rip), %xmm4
 3294      00000000 
 270:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3295              		.loc 3 270 0
 3296 00aa F20F2AD3 		cvtsi2sd	%ebx, %xmm2
 269:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3297              		.loc 3 269 0
 3298 00ae F20F58C4 		addsd	%xmm4, %xmm0
 3299 00b2 F20F100D 		movsd	.LC5(%rip), %xmm1
 3299      00000000 
 270:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3300              		.loc 3 270 0
 3301 00ba F20F5CE5 		subsd	%xmm5, %xmm4
 269:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3302              		.loc 3 269 0
 3303 00be F20F59C1 		mulsd	%xmm1, %xmm0
 270:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3304              		.loc 3 270 0
 3305 00c2 F20F59CC 		mulsd	%xmm4, %xmm1
 269:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3306              		.loc 3 269 0
 3307 00c6 F20F59C3 		mulsd	%xmm3, %xmm0
 270:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3308              		.loc 3 270 0
 3309 00ca F20F59CA 		mulsd	%xmm2, %xmm1
 269:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3310              		.loc 3 269 0
 3311 00ce F20F2CD0 		cvttsd2si	%xmm0, %edx
 3312              	.LVL381:
 270:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 3313              		.loc 3 270 0
 3314 00d2 F20F2CC1 		cvttsd2si	%xmm1, %eax
 3315              	.LVL382:
 276:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 3316              		.loc 3 276 0
 3317 00d6 0F84CC00 		je	.L222
 3317      0000
 3318 00dc 0F8EAE00 		jle	.L235
 3318      0000
 3319 00e2 4181FE53 		cmpl	$65363, %r14d
 3319      FF0000
 3320 00e9 0F849100 		je	.L225
 3320      0000
 281:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3321              		.loc 3 281 0
 3322 00ef 83C003   		addl	$3, %eax
 3323              	.LVL383:
 276:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 3324              		.loc 3 276 0
 3325 00f2 4181FE54 		cmpl	$65364, %r14d
 3325      FF0000
 3326 00f9 0F85A100 		jne	.L229
 3326      0000
 3327              	.LVL384:
 3328              	.L227:
 296:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3329              		.loc 3 296 0
 3330 00ff 660FEFC9 		pxor	%xmm1, %xmm1
 3331 0103 488D7424 		leaq	32(%rsp), %rsi
 3331      20
 3332 0108 488D7C24 		leaq	24(%rsp), %rdi
 3332      18
 3333 010d 660FEFC0 		pxor	%xmm0, %xmm0
 299:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3334              		.loc 3 299 0
 3335 0111 BB010000 		movl	$1, %ebx
 3335      00
 3336              	.LVL385:
 296:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3337              		.loc 3 296 0
 3338 0116 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 3339 011a F20F2AC2 		cvtsi2sd	%edx, %xmm0
 3340 011e F20F5ECA 		divsd	%xmm2, %xmm1
 3341 0122 F20F5EC3 		divsd	%xmm3, %xmm0
 3342 0126 E8000000 		call	_ZL4tohsddRdS_
 3342      00
 3343              	.LVL386:
 297:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 3344              		.loc 3 297 0
 3345 012b F2410F10 		movsd	1832(%r12), %xmm2
 3345      94242807 
 3345      0000
 3346 0135 4C89E7   		movq	%r12, %rdi
 3347 0138 F20F104C 		movsd	32(%rsp), %xmm1
 3347      2420
 3348 013e F20F1044 		movsd	24(%rsp), %xmm0
 3348      2418
 3349 0144 E8000000 		call	_ZN16Fl_Color_Chooser3hsvEddd
 3349      00
 3350              	.LVL387:
 3351 0149 85C0     		testl	%eax, %eax
 3352 014b 7410     		je	.L221
 3353              	.LVL388:
 3354              	.LBB712:
 3355              	.LBB713:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3356              		.loc 1 861 0 discriminator 1
 3357 014d 498B5424 		movq	24(%r12), %rdx
 3357      18
 3358 0152 4C89E6   		movq	%r12, %rsi
 3359 0155 4C89E7   		movq	%r12, %rdi
 3360 0158 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3360      00
 3361              	.LVL389:
 3362              	.L221:
 3363              	.LBE713:
 3364              	.LBE712:
 300:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 3365              		.loc 3 300 0
 3366 015d 488B4C24 		movq	40(%rsp), %rcx
 3366      28
 3367 0162 6448330C 		xorq	%fs:40, %rcx
 3367      25280000 
 3367      00
 3368 016b 89D8     		movl	%ebx, %eax
 3369 016d 7541     		jne	.L236
 3370 016f 4883C438 		addq	$56, %rsp
 3371              		.cfi_remember_state
 3372              		.cfi_def_cfa_offset 56
 3373 0173 5B       		popq	%rbx
 3374              		.cfi_def_cfa_offset 48
 3375 0174 5D       		popq	%rbp
 3376              		.cfi_def_cfa_offset 40
 3377              	.LVL390:
 3378 0175 415C     		popq	%r12
 3379              		.cfi_def_cfa_offset 32
 3380 0177 415D     		popq	%r13
 3381              		.cfi_def_cfa_offset 24
 3382 0179 415E     		popq	%r14
 3383              		.cfi_def_cfa_offset 16
 3384              	.LVL391:
 3385 017b 415F     		popq	%r15
 3386              		.cfi_def_cfa_offset 8
 3387 017d C3       		ret
 3388              	.LVL392:
 3389 017e 6690     		.p2align 4,,10
 3390              		.p2align 3
 3391              	.L225:
 3392              		.cfi_restore_state
 287:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 3393              		.loc 3 287 0
 3394 0180 83C203   		addl	$3, %edx
 3395              	.LVL393:
 288:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 3396              		.loc 3 288 0
 3397 0183 E977FFFF 		jmp	.L227
 3397      FF
 3398 0188 0F1F8400 		.p2align 4,,10
 3398      00000000 
 3399              		.p2align 3
 3400              	.L235:
 284:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 3401              		.loc 3 284 0
 3402 0190 83EA03   		subl	$3, %edx
 3403              	.LVL394:
 276:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 3404              		.loc 3 276 0
 3405 0193 4181FE51 		cmpl	$65361, %r14d
 3405      FF0000
 3406 019a 0F845FFF 		je	.L227
 3406      FFFF
 3407              	.LVL395:
 3408              	.L229:
 290:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 3409              		.loc 3 290 0
 3410 01a0 31DB     		xorl	%ebx, %ebx
 3411              	.LVL396:
 3412 01a2 EBB9     		jmp	.L221
 3413              	.LVL397:
 3414              		.p2align 4,,10
 3415 01a4 0F1F4000 		.p2align 3
 3416              	.L222:
 278:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 3417              		.loc 3 278 0
 3418 01a8 83E803   		subl	$3, %eax
 3419              	.LVL398:
 279:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 3420              		.loc 3 279 0
 3421 01ab E94FFFFF 		jmp	.L227
 3421      FF
 3422              	.LVL399:
 3423              	.L236:
 300:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 3424              		.loc 3 300 0
 3425 01b0 E8000000 		call	__stack_chk_fail
 3425      00
 3426              	.LVL400:
 3427              		.cfi_endproc
 3428              	.LFE637:
 3430              		.section	.text.unlikely._ZN11Flcc_HueBox10handle_keyEi
 3431              	.LCOLDE42:
 3432              		.section	.text._ZN11Flcc_HueBox10handle_keyEi
 3433              	.LHOTE42:
 3434              		.section	.text.unlikely._ZN11Flcc_HueBox6handleEi,"ax",@progbits
 3435              		.align 2
 3436              	.LCOLDB46:
 3437              		.section	.text._ZN11Flcc_HueBox6handleEi,"ax",@progbits
 3438              	.LHOTB46:
 3439              		.align 2
 3440              		.p2align 4,,15
 3441              		.globl	_ZN11Flcc_HueBox6handleEi
 3443              	_ZN11Flcc_HueBox6handleEi:
 3444              	.LFB635:
 206:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3445              		.loc 3 206 0
 3446              		.cfi_startproc
 3447              	.LVL401:
 3448 0000 4156     		pushq	%r14
 3449              		.cfi_def_cfa_offset 16
 3450              		.cfi_offset 14, -16
 3451 0002 4155     		pushq	%r13
 3452              		.cfi_def_cfa_offset 24
 3453              		.cfi_offset 13, -24
 3454 0004 4154     		pushq	%r12
 3455              		.cfi_def_cfa_offset 32
 3456              		.cfi_offset 12, -32
 3457 0006 55       		pushq	%rbp
 3458              		.cfi_def_cfa_offset 40
 3459              		.cfi_offset 6, -40
 3460 0007 53       		pushq	%rbx
 3461              		.cfi_def_cfa_offset 48
 3462              		.cfi_offset 3, -48
 3463 0008 4883EC30 		subq	$48, %rsp
 3464              		.cfi_def_cfa_offset 96
 3465 000c 4C8B6708 		movq	8(%rdi), %r12
 206:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3466              		.loc 3 206 0
 3467 0010 64488B04 		movq	%fs:40, %rax
 3467      25280000 
 3467      00
 3468 0019 48894424 		movq	%rax, 40(%rsp)
 3468      28
 3469 001e 31C0     		xorl	%eax, %eax
 3470              	.LVL402:
 3471              	.LBB714:
 209:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 3472              		.loc 3 209 0
 3473 0020 83FE08   		cmpl	$8, %esi
 3474 0023 0F871702 		ja	.L253
 3474      0000
 3475 0029 89F6     		movl	%esi, %esi
 3476 002b 4889FB   		movq	%rdi, %rbx
 3477 002e FF24F500 		jmp	*.L240(,%rsi,8)
 3477      000000
 3478              		.section	.rodata._ZN11Flcc_HueBox6handleEi,"a",@progbits
 3479              		.align 8
 3480              		.align 4
 3481              	.L240:
 3482 0000 00000000 		.quad	.L253
 3482      00000000 
 3483 0008 00000000 		.quad	.L239
 3483      00000000 
 3484 0010 00000000 		.quad	.L253
 3484      00000000 
 3485 0018 00000000 		.quad	.L253
 3485      00000000 
 3486 0020 00000000 		.quad	.L253
 3486      00000000 
 3487 0028 00000000 		.quad	.L241
 3487      00000000 
 3488 0030 00000000 		.quad	.L242
 3488      00000000 
 3489 0038 00000000 		.quad	.L242
 3489      00000000 
 3490 0040 00000000 		.quad	.L243
 3490      00000000 
 3491              		.section	.text._ZN11Flcc_HueBox6handleEi
 3492              		.p2align 4,,10
 3493 0035 0F1F00   		.p2align 3
 3494              	.L239:
 3495              	.LBB715:
 3496              	.LBB716:
 3497              	.LBB717:
 3498              		.file 10 "fltk-1.3.4-1/FL/Fl.H"
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
 3499              		.loc 10 1195 0
 3500 0038 BF010000 		movl	$1, %edi
 3500      00
 3501              	.LVL403:
 3502 003d E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 3502      00
 3503              	.LVL404:
 3504              	.LBE717:
 3505              	.LBE716:
 211:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 3506              		.loc 3 211 0
 3507 0042 84C0     		testb	%al, %al
 3508 0044 7410     		je	.L244
 212:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 3509              		.loc 3 212 0
 3510 0046 4889DF   		movq	%rbx, %rdi
 3511 0049 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 3511      00
 3512              	.LVL405:
 213:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 3513              		.loc 3 213 0
 3514 004e 4889DF   		movq	%rbx, %rdi
 3515 0051 E8000000 		call	_ZN9Fl_Widget6redrawEv
 3515      00
 3516              	.LVL406:
 3517              	.L244:
 215:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 3518              		.loc 3 215 0
 3519 0056 F2410F10 		movsd	1816(%r12), %xmm0
 3519      84241807 
 3519      0000
 3520 0060 F20F1105 		movsd	%xmm0, _ZZN11Flcc_HueBox6handleEiE2ih(%rip)
 3520      00000000 
 3521              	.LVL407:
 216:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3522              		.loc 3 216 0
 3523 0068 F2410F10 		movsd	1824(%r12), %xmm0
 3523      84242007 
 3523      0000
 3524 0072 F20F1105 		movsd	%xmm0, _ZZN11Flcc_HueBox6handleEiE2is(%rip)
 3524      00000000 
 3525              	.L241:
 3526              	.LVL408:
 3527              	.LBB718:
 219:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 3528              		.loc 3 219 0
 3529 007a 0FB67B6E 		movzbl	110(%rbx), %edi
 3530 007e 8B2D0000 		movl	_ZN2Fl3e_xE(%rip), %ebp
 3530      0000
 3531 0084 2B6B20   		subl	32(%rbx), %ebp
 3532              	.LVL409:
 3533 0087 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 3533      00
 3534              	.LVL410:
 3535 008c 0FB67B6E 		movzbl	110(%rbx), %edi
 3536 0090 448B6B28 		movl	40(%rbx), %r13d
 3537 0094 4189C6   		movl	%eax, %r14d
 3538              	.LVL411:
 3539 0097 4429F5   		subl	%r14d, %ebp
 3540 009a E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 3540      00
 3541              	.LVL412:
 3542 009f 660FEFC0 		pxor	%xmm0, %xmm0
 3543 00a3 4129C5   		subl	%eax, %r13d
 3544 00a6 660FEFC9 		pxor	%xmm1, %xmm1
 220:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 3545              		.loc 3 220 0
 3546 00aa 0FB67B6E 		movzbl	110(%rbx), %edi
 219:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 3547              		.loc 3 219 0
 3548 00ae F20F2AC5 		cvtsi2sd	%ebp, %xmm0
 220:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 3549              		.loc 3 220 0
 3550 00b2 8B2D0000 		movl	_ZN2Fl3e_yE(%rip), %ebp
 3550      0000
 219:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 3551              		.loc 3 219 0
 3552 00b8 F2410F2A 		cvtsi2sd	%r13d, %xmm1
 3552      CD
 220:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 3553              		.loc 3 220 0
 3554 00bd 2B6B24   		subl	36(%rbx), %ebp
 219:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 3555              		.loc 3 219 0
 3556 00c0 F20F5EC1 		divsd	%xmm1, %xmm0
 3557 00c4 F20F1144 		movsd	%xmm0, 8(%rsp)
 3557      2408
 3558              	.LVL413:
 220:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 3559              		.loc 3 220 0
 3560 00ca E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 3560      00
 3561              	.LVL414:
 3562 00cf 0FB67B6E 		movzbl	110(%rbx), %edi
 3563 00d3 4189C6   		movl	%eax, %r14d
 3564 00d6 448B6B2C 		movl	44(%rbx), %r13d
 3565              	.LVL415:
 221:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 3566              		.loc 3 221 0
 3567 00da 4429F5   		subl	%r14d, %ebp
 220:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 3568              		.loc 3 220 0
 3569 00dd E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 3569      00
 3570              	.LVL416:
 221:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 3571              		.loc 3 221 0
 3572 00e2 660FEFC9 		pxor	%xmm1, %xmm1
 3573 00e6 4129C5   		subl	%eax, %r13d
 3574 00e9 660FEFD2 		pxor	%xmm2, %xmm2
 3575 00ed 488D7424 		leaq	32(%rsp), %rsi
 3575      20
 3576 00f2 F20F1044 		movsd	8(%rsp), %xmm0
 3576      2408
 3577 00f8 488D7C24 		leaq	24(%rsp), %rdi
 3577      18
 3578 00fd F20F2ACD 		cvtsi2sd	%ebp, %xmm1
 3579 0101 F2410F2A 		cvtsi2sd	%r13d, %xmm2
 3579      D5
 3580 0106 F20F5ECA 		divsd	%xmm2, %xmm1
 3581 010a E8000000 		call	_ZL4tohsddRdS_
 3581      00
 3582              	.LVL417:
 222:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 3583              		.loc 3 222 0
 3584 010f 660FEFD2 		pxor	%xmm2, %xmm2
 3585 0113 F20F101D 		movsd	.LC44(%rip), %xmm3
 3585      00000000 
 3586 011b F20F1005 		movsd	_ZZN11Flcc_HueBox6handleEiE2ih(%rip), %xmm0
 3586      00000000 
 3587              	.LVL418:
 3588 0123 F20F2A53 		cvtsi2sd	40(%rbx), %xmm2
 3588      28
 3589 0128 F20F5EDA 		divsd	%xmm2, %xmm3
 3590 012c F20F104C 		movsd	24(%rsp), %xmm1
 3590      2418
 3591 0132 F20F102D 		movsd	.LC43(%rip), %xmm5
 3591      00000000 
 3592 013a F20F5CC8 		subsd	%xmm0, %xmm1
 3593 013e 660F54CD 		andpd	%xmm5, %xmm1
 3594 0142 660F2ED9 		ucomisd	%xmm1, %xmm3
 3595 0146 7606     		jbe	.L245
 222:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 3596              		.loc 3 222 0 is_stmt 0 discriminator 1
 3597 0148 F20F1144 		movsd	%xmm0, 24(%rsp)
 3597      2418
 3598              	.L245:
 223:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3599              		.loc 3 223 0 is_stmt 1
 3600 014e F20F104C 		movsd	32(%rsp), %xmm1
 3600      2420
 3601 0154 F20F1025 		movsd	_ZZN11Flcc_HueBox6handleEiE2is(%rip), %xmm4
 3601      00000000 
 3602              	.LVL419:
 3603 015c 660F28D1 		movapd	%xmm1, %xmm2
 3604 0160 F20F101D 		movsd	.LC45(%rip), %xmm3
 3604      00000000 
 3605 0168 F20F5CD4 		subsd	%xmm4, %xmm2
 3606 016c 660F54D5 		andpd	%xmm5, %xmm2
 3607 0170 660FEFED 		pxor	%xmm5, %xmm5
 3608 0174 F20F2A6B 		cvtsi2sd	44(%rbx), %xmm5
 3608      2C
 3609 0179 F20F5EDD 		divsd	%xmm5, %xmm3
 3610 017d 660F2EDA 		ucomisd	%xmm2, %xmm3
 3611 0181 760A     		jbe	.L247
 223:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3612              		.loc 3 223 0 is_stmt 0 discriminator 1
 3613 0183 F20F1164 		movsd	%xmm4, 32(%rsp)
 3613      2420
 3614 0189 660F28CC 		movapd	%xmm4, %xmm1
 3615              	.L247:
 224:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 3616              		.loc 3 224 0 is_stmt 1
 3617 018d F6050000 		testb	$4, _ZN2Fl7e_stateE+2(%rip)
 3617      000004
 3618 0194 0F859600 		jne	.L249
 3618      0000
 3619 019a F20F1044 		movsd	24(%rsp), %xmm0
 3619      2418
 3620              	.L250:
 3621              	.LVL420:
 225:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3622              		.loc 3 225 0
 3623 01a0 F2410F10 		movsd	1832(%r12), %xmm2
 3623      94242807 
 3623      0000
 3624 01aa 4C89E7   		movq	%r12, %rdi
 3625 01ad E8000000 		call	_ZN16Fl_Color_Chooser3hsvEddd
 3625      00
 3626              	.LVL421:
 3627 01b2 85C0     		testl	%eax, %eax
 3628 01b4 7410     		je	.L251
 3629              	.LVL422:
 3630              	.LBB719:
 3631              	.LBB720:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3632              		.loc 1 861 0 discriminator 1
 3633 01b6 498B5424 		movq	24(%r12), %rdx
 3633      18
 3634 01bb 4C89E6   		movq	%r12, %rsi
 3635 01be 4C89E7   		movq	%r12, %rdi
 3636 01c1 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3636      00
 3637              	.LVL423:
 3638              	.L251:
 3639              	.LBE720:
 3640              	.LBE719:
 3641              	.LBE718:
 226:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 3642              		.loc 3 226 0
 3643 01c6 B8010000 		movl	$1, %eax
 3643      00
 3644              	.LVL424:
 3645              	.L238:
 3646              	.LBE715:
 3647              	.LBE714:
 239:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 3648              		.loc 3 239 0
 3649 01cb 488B4C24 		movq	40(%rsp), %rcx
 3649      28
 3650 01d0 6448330C 		xorq	%fs:40, %rcx
 3650      25280000 
 3650      00
 3651 01d9 7569     		jne	.L265
 3652 01db 4883C430 		addq	$48, %rsp
 3653              		.cfi_remember_state
 3654              		.cfi_def_cfa_offset 48
 3655 01df 5B       		popq	%rbx
 3656              		.cfi_def_cfa_offset 40
 3657 01e0 5D       		popq	%rbp
 3658              		.cfi_def_cfa_offset 32
 3659 01e1 415C     		popq	%r12
 3660              		.cfi_def_cfa_offset 24
 3661 01e3 415D     		popq	%r13
 3662              		.cfi_def_cfa_offset 16
 3663 01e5 415E     		popq	%r14
 3664              		.cfi_def_cfa_offset 8
 3665 01e7 C3       		ret
 3666              	.LVL425:
 3667 01e8 0F1F8400 		.p2align 4,,10
 3667      00000000 
 3668              		.p2align 3
 3669              	.L243:
 3670              		.cfi_restore_state
 3671              	.LBB725:
 3672              	.LBB724:
 235:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 3673              		.loc 3 235 0
 3674 01f0 8B350000 		movl	_ZN2Fl8e_keysymE(%rip), %esi
 3674      0000
 3675 01f6 E8000000 		call	_ZN11Flcc_HueBox10handle_keyEi
 3675      00
 3676              	.LVL426:
 3677 01fb EBCE     		jmp	.L238
 3678 01fd 0F1F00   		.p2align 4,,10
 3679              		.p2align 3
 3680              	.L242:
 3681              	.LBB721:
 3682              	.LBB722:
 3683              		.loc 10 1195 0
 3684 0200 BF010000 		movl	$1, %edi
 3684      00
 3685 0205 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 3685      00
 3686              	.LVL427:
 3687 020a 89C2     		movl	%eax, %edx
 3688              	.LBE722:
 3689              	.LBE721:
 233:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 3690              		.loc 3 233 0
 3691 020c B8010000 		movl	$1, %eax
 3691      00
 229:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3692              		.loc 3 229 0
 3693 0211 84D2     		testb	%dl, %dl
 3694 0213 74B6     		je	.L238
 230:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 3695              		.loc 3 230 0
 3696 0215 4889DF   		movq	%rbx, %rdi
 3697 0218 89442408 		movl	%eax, 8(%rsp)
 3698 021c E8000000 		call	_ZN9Fl_Widget6redrawEv
 3698      00
 3699              	.LVL428:
 231:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 3700              		.loc 3 231 0
 3701 0221 8B442408 		movl	8(%rsp), %eax
 3702 0225 EBA4     		jmp	.L238
 3703              	.LVL429:
 3704 0227 660F1F84 		.p2align 4,,10
 3704      00000000 
 3704      00
 3705              		.p2align 3
 3706              	.L249:
 3707              	.LBB723:
 224:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 3708              		.loc 3 224 0 discriminator 1
 3709 0230 F20F1144 		movsd	%xmm0, 24(%rsp)
 3709      2418
 3710 0236 E965FFFF 		jmp	.L250
 3710      FF
 3711              	.LVL430:
 3712 023b 0F1F4400 		.p2align 4,,10
 3712      00
 3713              		.p2align 3
 3714              	.L253:
 3715              	.LBE723:
 237:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 3716              		.loc 3 237 0
 3717 0240 31C0     		xorl	%eax, %eax
 3718 0242 EB87     		jmp	.L238
 3719              	.LVL431:
 3720              	.L265:
 3721              	.LBE724:
 3722              	.LBE725:
 239:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 3723              		.loc 3 239 0
 3724 0244 E8000000 		call	__stack_chk_fail
 3724      00
 3725              	.LVL432:
 3726              		.cfi_endproc
 3727              	.LFE635:
 3729              		.section	.text.unlikely._ZN11Flcc_HueBox6handleEi
 3730              	.LCOLDE46:
 3731              		.section	.text._ZN11Flcc_HueBox6handleEi
 3732              	.LHOTE46:
 3733              		.section	.text.unlikely._ZN13Flcc_ValueBox10handle_keyEi,"ax",@progbits
 3734              		.align 2
 3735              	.LCOLDB47:
 3736              		.section	.text._ZN13Flcc_ValueBox10handle_keyEi,"ax",@progbits
 3737              	.LHOTB47:
 3738              		.align 2
 3739              		.p2align 4,,15
 3740              		.globl	_ZN13Flcc_ValueBox10handle_keyEi
 3742              	_ZN13Flcc_ValueBox10handle_keyEi:
 3743              	.LFB642:
 395:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3744              		.loc 3 395 0
 3745              		.cfi_startproc
 3746              	.LVL433:
 3747 0000 4154     		pushq	%r12
 3748              		.cfi_def_cfa_offset 16
 3749              		.cfi_offset 12, -16
 3750 0002 55       		pushq	%rbp
 3751              		.cfi_def_cfa_offset 24
 3752              		.cfi_offset 6, -24
 3753 0003 4889FD   		movq	%rdi, %rbp
 3754 0006 53       		pushq	%rbx
 3755              		.cfi_def_cfa_offset 32
 3756              		.cfi_offset 3, -32
 3757 0007 8B5F2C   		movl	44(%rdi), %ebx
 3758              	.LVL434:
 395:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3759              		.loc 3 395 0
 3760 000a 4189F4   		movl	%esi, %r12d
 396:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 3761              		.loc 3 396 0
 3762 000d 0FB67F6E 		movzbl	110(%rdi), %edi
 3763              	.LVL435:
 3764 0011 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 3764      00
 3765              	.LVL436:
 399:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 3766              		.loc 3 399 0
 3767 0016 660FEFC9 		pxor	%xmm1, %xmm1
 396:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 3768              		.loc 3 396 0
 3769 001a 29C3     		subl	%eax, %ebx
 3770 001c 8D53FA   		leal	-6(%rbx), %edx
 3771              	.LVL437:
 399:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 3772              		.loc 3 399 0
 3773 001f F20F1015 		movsd	.LC7(%rip), %xmm2
 3773      00000000 
 3774 0027 488B5D08 		movq	8(%rbp), %rbx
 3775              	.LVL438:
 3776 002b 31C9     		xorl	%ecx, %ecx
 3777 002d F20F2ACA 		cvtsi2sd	%edx, %xmm1
 3778 0031 660F28C2 		movapd	%xmm2, %xmm0
 3779 0035 F20F5C83 		subsd	1832(%rbx), %xmm0
 3779      28070000 
 3780 003d F20F59C1 		mulsd	%xmm1, %xmm0
 3781 0041 F20F2CC0 		cvttsd2si	%xmm0, %eax
 3782              	.LVL439:
 400:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 3783              		.loc 3 400 0
 3784 0045 85C0     		testl	%eax, %eax
 3785 0047 7807     		js	.L267
 3786 0049 39C2     		cmpl	%eax, %edx
 3787 004b 0F4EC2   		cmovle	%edx, %eax
 3788              	.LVL440:
 3789 004e 89C1     		movl	%eax, %ecx
 3790              	.L267:
 3791              	.LVL441:
 402:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 3792              		.loc 3 402 0
 3793 0050 4181FC52 		cmpl	$65362, %r12d
 3793      FF0000
 3794 0057 7467     		je	.L269
 3795 0059 4181FC54 		cmpl	$65364, %r12d
 3795      FF0000
 3796 0060 754E     		jne	.L280
 407:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3797              		.loc 3 407 0
 3798 0062 83C103   		addl	$3, %ecx
 3799              	.LVL442:
 3800              	.L271:
 415:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 3801              		.loc 3 415 0
 3802 0065 660FEFC0 		pxor	%xmm0, %xmm0
 3803 0069 4889DF   		movq	%rbx, %rdi
 417:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 3804              		.loc 3 417 0
 3805 006c BD010000 		movl	$1, %ebp
 3805      00
 3806              	.LVL443:
 415:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 3807              		.loc 3 415 0
 3808 0071 F20F2AC1 		cvtsi2sd	%ecx, %xmm0
 3809 0075 F20F5EC1 		divsd	%xmm1, %xmm0
 3810 0079 F20F108B 		movsd	1824(%rbx), %xmm1
 3810      20070000 
 3811              	.LVL444:
 3812 0081 F20F5CD0 		subsd	%xmm0, %xmm2
 3813 0085 F20F1083 		movsd	1816(%rbx), %xmm0
 3813      18070000 
 3814 008d E8000000 		call	_ZN16Fl_Color_Chooser3hsvEddd
 3814      00
 3815              	.LVL445:
 3816 0092 85C0     		testl	%eax, %eax
 3817 0094 741C     		je	.L268
 3818              	.LVL446:
 3819              	.LBB726:
 3820              	.LBB727:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3821              		.loc 1 861 0 discriminator 1
 3822 0096 488B5318 		movq	24(%rbx), %rdx
 3823 009a 4889DE   		movq	%rbx, %rsi
 3824 009d 4889DF   		movq	%rbx, %rdi
 3825 00a0 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3825      00
 3826              	.LVL447:
 3827              	.LBE727:
 3828              	.LBE726:
 418:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 3829              		.loc 3 418 0 discriminator 1
 3830 00a5 89E8     		movl	%ebp, %eax
 3831 00a7 5B       		popq	%rbx
 3832              		.cfi_remember_state
 3833              		.cfi_def_cfa_offset 24
 3834              	.LVL448:
 3835 00a8 5D       		popq	%rbp
 3836              		.cfi_def_cfa_offset 16
 3837 00a9 415C     		popq	%r12
 3838              		.cfi_def_cfa_offset 8
 3839              	.LVL449:
 3840 00ab C3       		ret
 3841              	.LVL450:
 3842 00ac 0F1F4000 		.p2align 4,,10
 3843              		.p2align 3
 3844              	.L280:
 3845              		.cfi_restore_state
 410:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 3846              		.loc 3 410 0
 3847 00b0 31ED     		xorl	%ebp, %ebp
 3848              	.LVL451:
 3849              	.L268:
 418:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 3850              		.loc 3 418 0
 3851 00b2 89E8     		movl	%ebp, %eax
 3852 00b4 5B       		popq	%rbx
 3853              		.cfi_remember_state
 3854              		.cfi_def_cfa_offset 24
 3855 00b5 5D       		popq	%rbp
 3856              		.cfi_def_cfa_offset 16
 3857 00b6 415C     		popq	%r12
 3858              		.cfi_def_cfa_offset 8
 3859              	.LVL452:
 3860 00b8 C3       		ret
 3861              	.LVL453:
 3862 00b9 0F1F8000 		.p2align 4,,10
 3862      000000
 3863              		.p2align 3
 3864              	.L269:
 3865              		.cfi_restore_state
 404:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 3866              		.loc 3 404 0
 3867 00c0 83E903   		subl	$3, %ecx
 3868              	.LVL454:
 405:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3869              		.loc 3 405 0
 3870 00c3 EBA0     		jmp	.L271
 3871              		.cfi_endproc
 3872              	.LFE642:
 3874              		.section	.text.unlikely._ZN13Flcc_ValueBox10handle_keyEi
 3875              	.LCOLDE47:
 3876              		.section	.text._ZN13Flcc_ValueBox10handle_keyEi
 3877              	.LHOTE47:
 3878              		.section	.text.unlikely._ZN13Flcc_ValueBox6handleEi,"ax",@progbits
 3879              		.align 2
 3880              	.LCOLDB48:
 3881              		.section	.text._ZN13Flcc_ValueBox6handleEi,"ax",@progbits
 3882              	.LHOTB48:
 3883              		.align 2
 3884              		.p2align 4,,15
 3885              		.globl	_ZN13Flcc_ValueBox6handleEi
 3887              	_ZN13Flcc_ValueBox6handleEi:
 3888              	.LFB639:
 332:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 3889              		.loc 3 332 0
 3890              		.cfi_startproc
 3891              	.LVL455:
 3892              	.LBB728:
 335:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3893              		.loc 3 335 0
 3894 0000 83FE08   		cmpl	$8, %esi
 3895              	.LBE728:
 332:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 3896              		.loc 3 332 0
 3897 0003 4156     		pushq	%r14
 3898              		.cfi_def_cfa_offset 16
 3899              		.cfi_offset 14, -16
 3900 0005 4155     		pushq	%r13
 3901              		.cfi_def_cfa_offset 24
 3902              		.cfi_offset 13, -24
 3903 0007 4154     		pushq	%r12
 3904              		.cfi_def_cfa_offset 32
 3905              		.cfi_offset 12, -32
 3906 0009 55       		pushq	%rbp
 3907              		.cfi_def_cfa_offset 40
 3908              		.cfi_offset 6, -40
 3909 000a 53       		pushq	%rbx
 3910              		.cfi_def_cfa_offset 48
 3911              		.cfi_offset 3, -48
 3912 000b 4C8B6708 		movq	8(%rdi), %r12
 3913              	.LVL456:
 3914              	.LBB741:
 335:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3915              		.loc 3 335 0
 3916 000f 0F873B01 		ja	.L293
 3916      0000
 3917 0015 89F6     		movl	%esi, %esi
 3918 0017 4889FB   		movq	%rdi, %rbx
 3919 001a FF24F500 		jmp	*.L284(,%rsi,8)
 3919      000000
 3920              		.section	.rodata._ZN13Flcc_ValueBox6handleEi,"a",@progbits
 3921              		.align 8
 3922              		.align 4
 3923              	.L284:
 3924 0000 00000000 		.quad	.L293
 3924      00000000 
 3925 0008 00000000 		.quad	.L283
 3925      00000000 
 3926 0010 00000000 		.quad	.L293
 3926      00000000 
 3927 0018 00000000 		.quad	.L293
 3927      00000000 
 3928 0020 00000000 		.quad	.L293
 3928      00000000 
 3929 0028 00000000 		.quad	.L285
 3929      00000000 
 3930 0030 00000000 		.quad	.L286
 3930      00000000 
 3931 0038 00000000 		.quad	.L286
 3931      00000000 
 3932 0040 00000000 		.quad	.L287
 3932      00000000 
 3933              		.section	.text._ZN13Flcc_ValueBox6handleEi
 3934              		.p2align 4,,10
 3935 0021 0F1F8000 		.p2align 3
 3935      000000
 3936              	.L283:
 3937              	.LBB729:
 3938              	.LBB730:
 3939              	.LBB731:
 3940              		.loc 10 1195 0
 3941 0028 BF010000 		movl	$1, %edi
 3941      00
 3942              	.LVL457:
 3943 002d E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 3943      00
 3944              	.LVL458:
 3945              	.LBE731:
 3946              	.LBE730:
 337:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3947              		.loc 3 337 0
 3948 0032 84C0     		testb	%al, %al
 3949 0034 7410     		je	.L288
 338:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 3950              		.loc 3 338 0
 3951 0036 4889DF   		movq	%rbx, %rdi
 3952 0039 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 3952      00
 3953              	.LVL459:
 339:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 3954              		.loc 3 339 0
 3955 003e 4889DF   		movq	%rbx, %rdi
 3956 0041 E8000000 		call	_ZN9Fl_Widget6redrawEv
 3956      00
 3957              	.LVL460:
 3958              	.L288:
 341:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 3959              		.loc 3 341 0
 3960 0046 F2410F10 		movsd	1832(%r12), %xmm0
 3960      84242807 
 3960      0000
 3961 0050 F20F1105 		movsd	%xmm0, _ZZN13Flcc_ValueBox6handleEiE2iv(%rip)
 3961      00000000 
 3962              	.L285:
 3963              	.LVL461:
 3964              	.LBB732:
 344:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3965              		.loc 3 344 0
 3966 0058 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 3966      0000
 3967 005e 0FB67B6E 		movzbl	110(%rbx), %edi
 3968 0062 2B5324   		subl	36(%rbx), %edx
 3969 0065 89D5     		movl	%edx, %ebp
 3970              	.LVL462:
 3971 0067 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 3971      00
 3972              	.LVL463:
 3973 006c 0FB67B6E 		movzbl	110(%rbx), %edi
 3974 0070 448B6B2C 		movl	44(%rbx), %r13d
 3975 0074 4189C6   		movl	%eax, %r14d
 3976              	.LVL464:
 3977 0077 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 3977      00
 3978              	.LVL465:
 3979 007c 660FEFC0 		pxor	%xmm0, %xmm0
 3980 0080 89EA     		movl	%ebp, %edx
 3981 0082 660FEFC9 		pxor	%xmm1, %xmm1
 3982 0086 4429F2   		subl	%r14d, %edx
 3983 0089 4129C5   		subl	%eax, %r13d
 3984 008c F20F1015 		movsd	.LC7(%rip), %xmm2
 3984      00000000 
 3985 0094 F20F2AC2 		cvtsi2sd	%edx, %xmm0
 346:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 3986              		.loc 3 346 0
 3987 0098 4C89E7   		movq	%r12, %rdi
 344:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3988              		.loc 3 344 0
 3989 009b F2410F2A 		cvtsi2sd	%r13d, %xmm1
 3989      CD
 345:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 3990              		.loc 3 345 0
 3991 00a0 F20F101D 		movsd	_ZZN13Flcc_ValueBox6handleEiE2iv(%rip), %xmm3
 3991      00000000 
 3992 00a8 660FEFE4 		pxor	%xmm4, %xmm4
 3993 00ac F20F2A63 		cvtsi2sd	44(%rbx), %xmm4
 3993      2C
 344:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3994              		.loc 3 344 0
 3995 00b1 F20F5EC1 		divsd	%xmm1, %xmm0
 345:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 3996              		.loc 3 345 0
 3997 00b5 F20F100D 		movsd	.LC43(%rip), %xmm1
 3997      00000000 
 344:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 3998              		.loc 3 344 0
 3999 00bd F20F5CD0 		subsd	%xmm0, %xmm2
 4000              	.LVL466:
 345:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 4001              		.loc 3 345 0
 4002 00c1 660F28C2 		movapd	%xmm2, %xmm0
 4003 00c5 F20F5CC3 		subsd	%xmm3, %xmm0
 4004 00c9 660F54C1 		andpd	%xmm1, %xmm0
 4005 00cd F20F100D 		movsd	.LC45(%rip), %xmm1
 4005      00000000 
 4006 00d5 F20F5ECC 		divsd	%xmm4, %xmm1
 4007 00d9 F20FC2C1 		cmpnltsd	%xmm1, %xmm0
 4007      05
 346:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 4008              		.loc 3 346 0
 4009 00de F2410F10 		movsd	1824(%r12), %xmm1
 4009      8C242007 
 4009      0000
 345:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 4010              		.loc 3 345 0
 4011 00e8 660F54D0 		andpd	%xmm0, %xmm2
 4012              	.LVL467:
 4013 00ec 660F55C3 		andnpd	%xmm3, %xmm0
 4014              	.LVL468:
 346:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 4015              		.loc 3 346 0
 4016 00f0 660F56D0 		orpd	%xmm0, %xmm2
 4017              	.LVL469:
 4018 00f4 F2410F10 		movsd	1816(%r12), %xmm0
 4018      84241807 
 4018      0000
 4019 00fe E8000000 		call	_ZN16Fl_Color_Chooser3hsvEddd
 4019      00
 4020              	.LVL470:
 4021 0103 85C0     		testl	%eax, %eax
 4022 0105 7559     		jne	.L303
 4023              	.LVL471:
 4024              	.L302:
 4025              	.LBE732:
 347:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4026              		.loc 3 347 0 discriminator 1
 4027 0107 B8010000 		movl	$1, %eax
 4027      00
 4028              	.L282:
 4029              	.LBE729:
 4030              	.LBE741:
 360:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4031              		.loc 3 360 0
 4032 010c 5B       		popq	%rbx
 4033              		.cfi_remember_state
 4034              		.cfi_def_cfa_offset 40
 4035              	.LVL472:
 4036 010d 5D       		popq	%rbp
 4037              		.cfi_def_cfa_offset 32
 4038 010e 415C     		popq	%r12
 4039              		.cfi_def_cfa_offset 24
 4040 0110 415D     		popq	%r13
 4041              		.cfi_def_cfa_offset 16
 4042 0112 415E     		popq	%r14
 4043              		.cfi_def_cfa_offset 8
 4044 0114 C3       		ret
 4045              	.LVL473:
 4046              		.p2align 4,,10
 4047 0115 0F1F00   		.p2align 3
 4048              	.L287:
 4049              		.cfi_restore_state
 4050 0118 5B       		popq	%rbx
 4051              		.cfi_remember_state
 4052              		.cfi_def_cfa_offset 40
 4053              	.LVL474:
 4054 0119 5D       		popq	%rbp
 4055              		.cfi_def_cfa_offset 32
 4056 011a 415C     		popq	%r12
 4057              		.cfi_def_cfa_offset 24
 4058 011c 415D     		popq	%r13
 4059              		.cfi_def_cfa_offset 16
 4060 011e 415E     		popq	%r14
 4061              		.cfi_def_cfa_offset 8
 4062              	.LBB742:
 4063              	.LBB738:
 356:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4064              		.loc 3 356 0
 4065 0120 8B350000 		movl	_ZN2Fl8e_keysymE(%rip), %esi
 4065      0000
 4066 0126 E9000000 		jmp	_ZN13Flcc_ValueBox10handle_keyEi
 4066      00
 4067              	.LVL475:
 4068 012b 0F1F4400 		.p2align 4,,10
 4068      00
 4069              		.p2align 3
 4070              	.L286:
 4071              		.cfi_restore_state
 4072              	.LBB735:
 4073              	.LBB736:
 4074              		.loc 10 1195 0
 4075 0130 BF010000 		movl	$1, %edi
 4075      00
 4076 0135 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 4076      00
 4077              	.LVL476:
 4078              	.LBE736:
 4079              	.LBE735:
 350:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 4080              		.loc 3 350 0
 4081 013a 84C0     		testb	%al, %al
 4082 013c 74C9     		je	.L302
 351:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4083              		.loc 3 351 0
 4084 013e 4889DF   		movq	%rbx, %rdi
 4085 0141 E8000000 		call	_ZN9Fl_Widget6redrawEv
 4085      00
 4086              	.LVL477:
 352:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 4087              		.loc 3 352 0
 4088 0146 B8010000 		movl	$1, %eax
 4088      00
 4089 014b EBBF     		jmp	.L282
 4090              	.LVL478:
 4091 014d 0F1F00   		.p2align 4,,10
 4092              		.p2align 3
 4093              	.L293:
 4094              	.LBE738:
 4095              	.LBE742:
 360:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4096              		.loc 3 360 0
 4097 0150 5B       		popq	%rbx
 4098              		.cfi_remember_state
 4099              		.cfi_def_cfa_offset 40
 4100              	.LBB743:
 4101              	.LBB739:
 358:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4102              		.loc 3 358 0
 4103 0151 31C0     		xorl	%eax, %eax
 4104              	.LBE739:
 4105              	.LBE743:
 360:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4106              		.loc 3 360 0
 4107 0153 5D       		popq	%rbp
 4108              		.cfi_def_cfa_offset 32
 4109 0154 415C     		popq	%r12
 4110              		.cfi_def_cfa_offset 24
 4111 0156 415D     		popq	%r13
 4112              		.cfi_def_cfa_offset 16
 4113 0158 415E     		popq	%r14
 4114              		.cfi_def_cfa_offset 8
 4115 015a C3       		ret
 4116              	.LVL479:
 4117 015b 0F1F4400 		.p2align 4,,10
 4117      00
 4118              		.p2align 3
 4119              	.L303:
 4120              		.cfi_restore_state
 4121              	.LBB744:
 4122              	.LBB740:
 4123              	.LBB737:
 4124              	.LBB733:
 4125              	.LBB734:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4126              		.loc 1 861 0 discriminator 1
 4127 0160 498B5424 		movq	24(%r12), %rdx
 4127      18
 4128 0165 4C89E6   		movq	%r12, %rsi
 4129 0168 4C89E7   		movq	%r12, %rdi
 4130 016b E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 4130      00
 4131              	.LVL480:
 4132 0170 EB95     		jmp	.L302
 4133              	.LBE734:
 4134              	.LBE733:
 4135              	.LBE737:
 4136              	.LBE740:
 4137              	.LBE744:
 4138              		.cfi_endproc
 4139              	.LFE639:
 4141              		.section	.text.unlikely._ZN13Flcc_ValueBox6handleEi
 4142              	.LCOLDE48:
 4143              		.section	.text._ZN13Flcc_ValueBox6handleEi
 4144              	.LHOTE48:
 4145              		.section	.text.unlikely._ZN16Fl_Color_Chooser4modeEi,"ax",@progbits
 4146              		.align 2
 4147              	.LCOLDB49:
 4148              		.section	.text._ZN16Fl_Color_Chooser4modeEi,"ax",@progbits
 4149              	.LHOTB49:
 4150              		.align 2
 4151              		.p2align 4,,15
 4152              		.globl	_ZN16Fl_Color_Chooser4modeEi
 4154              	_ZN16Fl_Color_Chooser4modeEi:
 4155              	.LFB645:
 450:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4156              		.loc 3 450 0
 4157              		.cfi_startproc
 4158              	.LVL481:
 4159 0000 55       		pushq	%rbp
 4160              		.cfi_def_cfa_offset 16
 4161              		.cfi_offset 6, -16
 4162 0001 53       		pushq	%rbx
 4163              		.cfi_def_cfa_offset 24
 4164              		.cfi_offset 3, -24
 451:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 4165              		.loc 3 451 0
 4166 0002 488D9FA0 		leaq	416(%rdi), %rbx
 4166      010000
 450:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4167              		.loc 3 450 0
 4168 0009 4889FD   		movq	%rdi, %rbp
 4169 000c 4883EC08 		subq	$8, %rsp
 4170              		.cfi_def_cfa_offset 32
 451:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 4171              		.loc 3 451 0
 4172 0010 4889DF   		movq	%rbx, %rdi
 4173              	.LVL482:
 4174 0013 E8000000 		call	_ZN9Fl_Choice5valueEi
 4174      00
 4175              	.LVL483:
 4176              	.LBB745:
 4177              	.LBB746:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4178              		.loc 1 861 0
 4179 0018 488B95B8 		movq	440(%rbp), %rdx
 4179      010000
 4180              	.LBE746:
 4181              	.LBE745:
 453:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 4182              		.loc 3 453 0
 4183 001f 4883C408 		addq	$8, %rsp
 4184              		.cfi_def_cfa_offset 24
 4185              	.LBB749:
 4186              	.LBB747:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4187              		.loc 1 861 0
 4188 0023 4889DE   		movq	%rbx, %rsi
 4189 0026 4889DF   		movq	%rbx, %rdi
 4190              	.LBE747:
 4191              	.LBE749:
 453:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 4192              		.loc 3 453 0
 4193 0029 5B       		popq	%rbx
 4194              		.cfi_def_cfa_offset 16
 4195              	.LVL484:
 4196 002a 5D       		popq	%rbp
 4197              		.cfi_def_cfa_offset 8
 4198              	.LVL485:
 4199              	.LBB750:
 4200              	.LBB748:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4201              		.loc 1 861 0
 4202 002b E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 4202      00
 4203              	.LVL486:
 4204              	.LBE748:
 4205              	.LBE750:
 4206              		.cfi_endproc
 4207              	.LFE645:
 4209              		.section	.text.unlikely._ZN16Fl_Color_Chooser4modeEi
 4210              	.LCOLDE49:
 4211              		.section	.text._ZN16Fl_Color_Chooser4modeEi
 4212              	.LHOTE49:
 4213              		.section	.text.unlikely._ZN16Fl_Color_ChooserC2EiiiiPKc,"ax",@progbits
 4214              		.align 2
 4215              	.LCOLDB50:
 4216              		.section	.text._ZN16Fl_Color_ChooserC2EiiiiPKc,"ax",@progbits
 4217              	.LHOTB50:
 4218              		.align 2
 4219              		.p2align 4,,15
 4220              		.globl	_ZN16Fl_Color_ChooserC2EiiiiPKc
 4222              	_ZN16Fl_Color_ChooserC2EiiiiPKc:
 4223              	.LFB647:
 465:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4224              		.loc 3 465 0
 4225              		.cfi_startproc
 4226              	.LVL487:
 4227 0000 4157     		pushq	%r15
 4228              		.cfi_def_cfa_offset 16
 4229              		.cfi_offset 15, -16
 4230 0002 4156     		pushq	%r14
 4231              		.cfi_def_cfa_offset 24
 4232              		.cfi_offset 14, -24
 4233 0004 4589C7   		movl	%r8d, %r15d
 4234 0007 4155     		pushq	%r13
 4235              		.cfi_def_cfa_offset 32
 4236              		.cfi_offset 13, -32
 4237 0009 4154     		pushq	%r12
 4238              		.cfi_def_cfa_offset 40
 4239              		.cfi_offset 12, -40
 4240 000b 4189D5   		movl	%edx, %r13d
 4241 000e 55       		pushq	%rbp
 4242              		.cfi_def_cfa_offset 48
 4243              		.cfi_offset 6, -48
 4244 000f 53       		pushq	%rbx
 4245              		.cfi_def_cfa_offset 56
 4246              		.cfi_offset 3, -56
 4247 0010 4189CE   		movl	%ecx, %r14d
 4248 0013 4889FB   		movq	%rdi, %rbx
 4249              	.LBB751:
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4250              		.loc 3 473 0
 4251 0016 41B87300 		movl	$115, %r8d
 4251      0000
 4252              	.LVL488:
 4253 001c B9C30000 		movl	$195, %ecx
 4253      00
 4254              	.LVL489:
 4255              	.LBE751:
 465:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4256              		.loc 3 465 0
 4257 0021 4883EC18 		subq	$24, %rsp
 4258              		.cfi_def_cfa_offset 80
 4259              	.LBB798:
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4260              		.loc 3 473 0
 4261 0025 31D2     		xorl	%edx, %edx
 4262              	.LVL490:
 4263 0027 488DABA0 		leaq	416(%rbx), %rbp
 4263      010000
 4264              	.LBE798:
 465:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4265              		.loc 3 465 0
 4266 002e 8974240C 		movl	%esi, 12(%rsp)
 4267              	.LBB799:
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4268              		.loc 3 473 0
 4269 0032 31F6     		xorl	%esi, %esi
 4270              	.LVL491:
 4271 0034 4C8DA3A0 		leaq	1696(%rbx), %r12
 4271      060000
 4272 003b E8000000 		call	_ZN8Fl_GroupC2EiiiiPKc
 4272      00
 4273              	.LVL492:
 4274              	.LBB752:
 4275              	.LBB753:
  45:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   px = py = 0;}
 4276              		.loc 5 45 0
 4277 0040 488DBBA0 		leaq	160(%rbx), %rdi
 4277      000000
 4278              	.LBE753:
 4279              	.LBE752:
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4280              		.loc 3 473 0
 4281 0047 48C70300 		movq	$_ZTV16Fl_Color_Chooser+16, (%rbx)
 4281      000000
 4282              	.LVL493:
 4283              	.LBB756:
 4284              	.LBB754:
  45:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   px = py = 0;}
 4285              		.loc 5 45 0
 4286 004e 4531C9   		xorl	%r9d, %r9d
 4287 0051 41B87300 		movl	$115, %r8d
 4287      0000
 4288 0057 B9730000 		movl	$115, %ecx
 4288      00
 4289 005c 31D2     		xorl	%edx, %edx
 4290 005e 31F6     		xorl	%esi, %esi
 4291 0060 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 4291      00
 4292              	.LVL494:
 4293              	.LBE754:
 4294              	.LBE756:
 4295              	.LBB757:
 4296              	.LBB758:
  57:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   py = 0;}
 4297              		.loc 5 57 0
 4298 0065 488DBB20 		leaq	288(%rbx), %rdi
 4298      010000
 4299              	.LBE758:
 4300              	.LBE757:
 4301              	.LBB761:
 4302              	.LBB755:
  45:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   px = py = 0;}
 4303              		.loc 5 45 0
 4304 006c 48C783A0 		movq	$_ZTV11Flcc_HueBox+16, 160(%rbx)
 4304      00000000 
 4304      000000
  46:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** };
 4305              		.loc 5 46 0
 4306 0077 C7831C01 		movl	$0, 284(%rbx)
 4306      00000000 
 4306      0000
 4307 0081 C7831801 		movl	$0, 280(%rbx)
 4307      00000000 
 4307      0000
 4308              	.LVL495:
 4309              	.LBE755:
 4310              	.LBE761:
 4311              	.LBB762:
 4312              	.LBB759:
  57:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   py = 0;}
 4313              		.loc 5 57 0
 4314 008b 4531C9   		xorl	%r9d, %r9d
 4315 008e 41B87300 		movl	$115, %r8d
 4315      0000
 4316 0094 B9140000 		movl	$20, %ecx
 4316      00
 4317 0099 31D2     		xorl	%edx, %edx
 4318 009b BE730000 		movl	$115, %esi
 4318      00
 4319 00a0 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 4319      00
 4320              	.LVL496:
 4321              	.LBE759:
 4322              	.LBE762:
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4323              		.loc 3 473 0
 4324 00a5 4889EF   		movq	%rbp, %rdi
 4325              	.LBB763:
 4326              	.LBB760:
  57:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   py = 0;}
 4327              		.loc 5 57 0
 4328 00a8 48C78320 		movq	$_ZTV13Flcc_ValueBox+16, 288(%rbx)
 4328      01000000 
 4328      000000
  58:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** };
 4329              		.loc 5 58 0
 4330 00b3 C7839801 		movl	$0, 408(%rbx)
 4330      00000000 
 4330      0000
 4331              	.LVL497:
 4332              	.LBE760:
 4333              	.LBE763:
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4334              		.loc 3 473 0
 4335 00bd 4531C9   		xorl	%r9d, %r9d
 4336 00c0 41B81900 		movl	$25, %r8d
 4336      0000
 4337 00c6 B9370000 		movl	$55, %ecx
 4337      00
 4338 00cb 31D2     		xorl	%edx, %edx
 4339 00cd BE8C0000 		movl	$140, %esi
 4339      00
 4340 00d2 E8000000 		call	_ZN9Fl_ChoiceC1EiiiiPKc
 4340      00
 4341              	.LVL498:
 4342              	.LBB764:
 4343              	.LBB765:
  65:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** };
 4344              		.loc 5 65 0
 4345 00d7 488DBB38 		leaq	568(%rbx), %rdi
 4345      020000
 4346              	.LVL499:
 4347 00de 4531C9   		xorl	%r9d, %r9d
 4348 00e1 41B81900 		movl	$25, %r8d
 4348      0000
 4349 00e7 B9370000 		movl	$55, %ecx
 4349      00
 4350 00ec BA1E0000 		movl	$30, %edx
 4350      00
 4351 00f1 BE8C0000 		movl	$140, %esi
 4351      00
 4352 00f6 E8000000 		call	_ZN14Fl_Value_InputC2EiiiiPKc
 4352      00
 4353              	.LVL500:
 4354              	.LBE765:
 4355              	.LBE764:
 4356              	.LBB767:
 4357              	.LBB768:
 4358 00fb 488DBBB0 		leaq	944(%rbx), %rdi
 4358      030000
 4359              	.LBE768:
 4360              	.LBE767:
 4361              	.LBB771:
 4362              	.LBB766:
 4363 0102 48C78338 		movq	$_ZTV16Flcc_Value_Input+16, 568(%rbx)
 4363      02000000 
 4363      000000
 4364              	.LVL501:
 4365              	.LBE766:
 4366              	.LBE771:
 4367              	.LBB772:
 4368              	.LBB769:
 4369 010d 4531C9   		xorl	%r9d, %r9d
 4370 0110 41B81900 		movl	$25, %r8d
 4370      0000
 4371 0116 B9370000 		movl	$55, %ecx
 4371      00
 4372 011b BA3C0000 		movl	$60, %edx
 4372      00
 4373 0120 BE8C0000 		movl	$140, %esi
 4373      00
 4374 0125 E8000000 		call	_ZN14Fl_Value_InputC2EiiiiPKc
 4374      00
 4375              	.LVL502:
 4376              	.LBE769:
 4377              	.LBE772:
 4378              	.LBB773:
 4379              	.LBB774:
 4380 012a 488DBB28 		leaq	1320(%rbx), %rdi
 4380      050000
 4381              	.LBE774:
 4382              	.LBE773:
 4383              	.LBB777:
 4384              	.LBB770:
 4385 0131 48C783B0 		movq	$_ZTV16Flcc_Value_Input+16, 944(%rbx)
 4385      03000000 
 4385      000000
 4386              	.LVL503:
 4387              	.LBE770:
 4388              	.LBE777:
 4389              	.LBB778:
 4390              	.LBB775:
 4391 013c 4531C9   		xorl	%r9d, %r9d
 4392 013f 41B81900 		movl	$25, %r8d
 4392      0000
 4393 0145 B9370000 		movl	$55, %ecx
 4393      00
 4394 014a BA5A0000 		movl	$90, %edx
 4394      00
 4395 014f BE8C0000 		movl	$140, %esi
 4395      00
 4396 0154 E8000000 		call	_ZN14Fl_Value_InputC2EiiiiPKc
 4396      00
 4397              	.LVL504:
 4398              	.LBE775:
 4399              	.LBE778:
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4400              		.loc 3 473 0
 4401 0159 4531C9   		xorl	%r9d, %r9d
 4402 015c 41B87300 		movl	$115, %r8d
 4402      0000
 4403 0162 B9730000 		movl	$115, %ecx
 4403      00
 4404 0167 31D2     		xorl	%edx, %edx
 4405 0169 31F6     		xorl	%esi, %esi
 4406 016b 4C89E7   		movq	%r12, %rdi
 4407              	.LBB779:
 4408              	.LBB776:
  65:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** };
 4409              		.loc 5 65 0
 4410 016e 48C78328 		movq	$_ZTV16Flcc_Value_Input+16, 1320(%rbx)
 4410      05000000 
 4410      000000
 4411              	.LVL505:
 4412              	.LBE776:
 4413              	.LBE779:
 473:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4414              		.loc 3 473 0
 4415 0179 E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 4415      00
 4416              	.LVL506:
 475:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 4417              		.loc 3 475 0
 4418 017e 4889DF   		movq	%rbx, %rdi
 4419 0181 E8000000 		call	_ZN8Fl_Group3endEv
 4419      00
 4420              	.LVL507:
 477:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 4421              		.loc 3 477 0
 4422 0186 8B74240C 		movl	12(%rsp), %esi
 4423 018a 4589F8   		movl	%r15d, %r8d
 4424 018d 4489F1   		movl	%r14d, %ecx
 4425 0190 4489EA   		movl	%r13d, %edx
 4426              	.LBB780:
 4427              	.LBB781:
 117:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 4428              		.loc 2 117 0
 4429 0193 4C89A388 		movq	%r12, 136(%rbx)
 4429      000000
 4430              	.LVL508:
 4431              	.LBE781:
 4432              	.LBE780:
 477:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 4433              		.loc 3 477 0
 4434 019a 4889DF   		movq	%rbx, %rdi
 4435 019d E8000000 		call	_ZN8Fl_Group6resizeEiiii
 4435      00
 4436              	.LVL509:
 478:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 4437              		.loc 3 478 0
 4438 01a2 660FEFC0 		pxor	%xmm0, %xmm0
 484:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 4439              		.loc 3 484 0
 4440 01a6 4889EF   		movq	%rbp, %rdi
 4441              	.LBB782:
 4442              	.LBB783:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4443              		.loc 1 372 0
 4444 01a9 C6830E01 		movb	$5, 270(%rbx)
 4444      000005
 4445              	.LBE783:
 4446              	.LBE782:
 4447              	.LBB784:
 4448              	.LBB785:
 4449 01b0 C6838E01 		movb	$5, 398(%rbx)
 4449      000005
 4450              	.LBE785:
 4451              	.LBE784:
 484:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 4452              		.loc 3 484 0
 4453 01b7 BE000000 		movl	$_ZL9mode_menu, %esi
 4453      00
 478:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 4454              		.loc 3 478 0
 4455 01bc F20F1183 		movsd	%xmm0, 1856(%rbx)
 4455      40070000 
 4456 01c4 F20F1183 		movsd	%xmm0, 1848(%rbx)
 4456      38070000 
 4457 01cc F20F1183 		movsd	%xmm0, 1840(%rbx)
 4457      30070000 
 479:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 4458              		.loc 3 479 0
 4459 01d4 F20F1183 		movsd	%xmm0, 1816(%rbx)
 4459      18070000 
 480:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 4460              		.loc 3 480 0
 4461 01dc F20F1183 		movsd	%xmm0, 1824(%rbx)
 4461      20070000 
 481:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4462              		.loc 3 481 0
 4463 01e4 F20F1183 		movsd	%xmm0, 1832(%rbx)
 4463      28070000 
 4464              	.LVL510:
 484:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 4465              		.loc 3 484 0
 4466 01ec E8000000 		call	_ZN8Fl_Menu_4menuEPK12Fl_Menu_Item
 4466      00
 4467              	.LVL511:
 485:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 4468              		.loc 3 485 0
 4469 01f1 4889DF   		movq	%rbx, %rdi
 4470 01f4 E8000000 		call	_ZN16Fl_Color_Chooser13set_valuatorsEv
 4470      00
 4471              	.LVL512:
 4472              	.LBB786:
 4473              	.LBB787:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4474              		.loc 1 574 0
 4475 01f9 48C78348 		movq	$_ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv, 584(%rbx)
 4475      02000000 
 4475      000000
 4476              	.LVL513:
 4477              	.LBE787:
 4478              	.LBE786:
 4479              	.LBB788:
 4480              	.LBB789:
 4481 0204 48C783C0 		movq	$_ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv, 960(%rbx)
 4481      03000000 
 4481      000000
 4482              	.LVL514:
 4483              	.LBE789:
 4484              	.LBE788:
 4485              	.LBB790:
 4486              	.LBB791:
 4487 020f 48C78338 		movq	$_ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv, 1336(%rbx)
 4487      05000000 
 4487      000000
 4488              	.LVL515:
 4489              	.LBE791:
 4490              	.LBE790:
 4491              	.LBB792:
 4492              	.LBB793:
 4493 021a 48C783B0 		movq	$_ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv, 432(%rbx)
 4493      01000000 
 4493      000000
 4494              	.LVL516:
 4495              	.LBE793:
 4496              	.LBE792:
 4497              	.LBB794:
 4498              	.LBB795:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4499              		.loc 1 372 0
 4500 0225 C6830E02 		movb	$6, 526(%rbx)
 4500      000006
 4501              	.LVL517:
 4502              	.LBE795:
 4503              	.LBE794:
 4504              	.LBB796:
 4505              	.LBB797:
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
 4506              		.loc 8 157 0
 4507 022c C7832C02 		movl	$3, 556(%rbx)
 4507      00000300 
 4507      0000
 4508              	.LVL518:
 4509              	.LBE797:
 4510              	.LBE796:
 4511              	.LBE799:
 492:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 4512              		.loc 3 492 0
 4513 0236 4883C418 		addq	$24, %rsp
 4514              		.cfi_def_cfa_offset 56
 4515 023a 5B       		popq	%rbx
 4516              		.cfi_def_cfa_offset 48
 4517              	.LVL519:
 4518 023b 5D       		popq	%rbp
 4519              		.cfi_def_cfa_offset 40
 4520              	.LVL520:
 4521 023c 415C     		popq	%r12
 4522              		.cfi_def_cfa_offset 32
 4523              	.LVL521:
 4524 023e 415D     		popq	%r13
 4525              		.cfi_def_cfa_offset 24
 4526              	.LVL522:
 4527 0240 415E     		popq	%r14
 4528              		.cfi_def_cfa_offset 16
 4529              	.LVL523:
 4530 0242 415F     		popq	%r15
 4531              		.cfi_def_cfa_offset 8
 4532              	.LVL524:
 4533 0244 C3       		ret
 4534              		.cfi_endproc
 4535              	.LFE647:
 4537              		.section	.text.unlikely._ZN16Fl_Color_ChooserC2EiiiiPKc
 4538              	.LCOLDE50:
 4539              		.section	.text._ZN16Fl_Color_ChooserC2EiiiiPKc
 4540              	.LHOTE50:
 4541              		.globl	_ZN16Fl_Color_ChooserC1EiiiiPKc
 4542              		.set	_ZN16Fl_Color_ChooserC1EiiiiPKc,_ZN16Fl_Color_ChooserC2EiiiiPKc
 4543              		.section	.rodata.str1.1,"aMS",@progbits,1
 4544              	.LC51:
 4545 0000 30782530 		.string	"0x%02X"
 4545      325800
 4546              		.section	.text.unlikely._ZN16Flcc_Value_Input6formatEPc,"ax",@progbits
 4547              		.align 2
 4548              	.LCOLDB52:
 4549              		.section	.text._ZN16Flcc_Value_Input6formatEPc,"ax",@progbits
 4550              	.LHOTB52:
 4551              		.align 2
 4552              		.p2align 4,,15
 4553              		.globl	_ZN16Flcc_Value_Input6formatEPc
 4555              	_ZN16Flcc_Value_Input6formatEPc:
 4556              	.LFB630:
 103:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4557              		.loc 3 103 0
 4558              		.cfi_startproc
 4559              	.LVL525:
 4560 0000 488B4708 		movq	8(%rdi), %rax
 4561              	.LVL526:
 103:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4562              		.loc 3 103 0
 4563 0004 4989F1   		movq	%rsi, %r9
 4564 0007 488B9018 		movq	536(%rax), %rdx
 4564      020000
 4565 000e 488B8020 		movq	544(%rax), %rax
 4565      020000
 4566              	.LVL527:
 4567              	.LBB816:
 4568              	.LBB817:
 4569              	.LBB818:
 4570              	.LBB819:
 140:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(const Fl_Menu_Item*);
 4571              		.loc 8 140 0
 4572 0015 4885C0   		testq	%rax, %rax
 4573 0018 7412     		je	.L309
 4574              	.LBE819:
 4575              	.LBE818:
 4576              	.LBE817:
 4577              	.LBE816:
 105:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 4578              		.loc 3 105 0
 4579 001a 4829D0   		subq	%rdx, %rax
 4580 001d 48C1F803 		sarq	$3, %rax
 4581 0021 69C0B76D 		imull	$-1227133513, %eax, %eax
 4581      DBB6
 4582 0027 83F802   		cmpl	$2, %eax
 4583 002a 740C     		je	.L313
 4584              	.L309:
 106:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 4585              		.loc 3 106 0
 4586 002c 4C89CE   		movq	%r9, %rsi
 4587              	.LVL528:
 4588 002f E9000000 		jmp	_ZN11Fl_Valuator6formatEPc
 4588      00
 4589              	.LVL529:
 4590              		.p2align 4,,10
 4591 0034 0F1F4000 		.p2align 3
 4592              	.L313:
 4593              	.LBB820:
 4594              	.LBB821:
 4595              	.LBB822:
 4596              	.LBB823:
 4597              		.file 11 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 4598              		.loc 11 34 0
 4599 0038 F2440F2C 		cvttsd2si	120(%rdi), %r8d
 4599      4778
 4600 003e B9000000 		movl	$.LC51, %ecx
 4600      00
 4601 0043 48C7C2FF 		movq	$-1, %rdx
 4601      FFFFFF
 4602 004a BE010000 		movl	$1, %esi
 4602      00
 4603              	.LVL530:
 4604 004f 4C89CF   		movq	%r9, %rdi
 4605              	.LVL531:
 4606 0052 31C0     		xorl	%eax, %eax
 4607 0054 E9000000 		jmp	__sprintf_chk
 4607      00
 4608              	.LVL532:
 4609              	.LBE823:
 4610              	.LBE822:
 4611              	.LBE821:
 4612              	.LBE820:
 4613              		.cfi_endproc
 4614              	.LFE630:
 4616              		.section	.text.unlikely._ZN16Flcc_Value_Input6formatEPc
 4617              	.LCOLDE52:
 4618              		.section	.text._ZN16Flcc_Value_Input6formatEPc
 4619              	.LHOTE52:
 4620              		.section	.text.unlikely._Z16fl_color_chooserPKcRdS1_S1_i,"ax",@progbits
 4621              	.LCOLDB53:
 4622              		.section	.text._Z16fl_color_chooserPKcRdS1_S1_i,"ax",@progbits
 4623              	.LHOTB53:
 4624              		.p2align 4,,15
 4625              		.globl	_Z16fl_color_chooserPKcRdS1_S1_i
 4627              	_Z16fl_color_chooserPKcRdS1_S1_i:
 4628              	.LFB656:
 549:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4629              		.loc 3 564 0
 4630              		.cfi_startproc
 4631              	.LVL533:
 4632 0000 4157     		pushq	%r15
 4633              		.cfi_def_cfa_offset 16
 4634              		.cfi_offset 15, -16
 4635 0002 4156     		pushq	%r14
 4636              		.cfi_def_cfa_offset 24
 4637              		.cfi_offset 14, -24
 4638 0004 4989F6   		movq	%rsi, %r14
 4639 0007 4155     		pushq	%r13
 4640              		.cfi_def_cfa_offset 32
 4641              		.cfi_offset 13, -32
 4642 0009 4154     		pushq	%r12
 4643              		.cfi_def_cfa_offset 40
 4644              		.cfi_offset 12, -40
 4645 000b 4989CC   		movq	%rcx, %r12
 4646 000e 55       		pushq	%rbp
 4647              		.cfi_def_cfa_offset 48
 4648              		.cfi_offset 6, -48
 4649 000f 53       		pushq	%rbx
 4650              		.cfi_def_cfa_offset 56
 4651              		.cfi_offset 3, -56
 565:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 4652              		.loc 3 566 0
 4653 0010 4889F9   		movq	%rdi, %rcx
 4654              	.LVL534:
 564:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 4655              		.loc 3 564 0
 4656 0013 4989D5   		movq	%rdx, %r13
 4657              		.loc 3 566 0
 4658 0016 BED70000 		movl	$215, %esi
 4658      00
 4659              	.LVL535:
 4660 001b BAC80000 		movl	$200, %edx
 4660      00
 4661              	.LVL536:
 564:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 4662              		.loc 3 564 0
 4663 0020 4881EC68 		subq	$2664, %rsp
 4663      0A0000
 4664              		.cfi_def_cfa_offset 2720
 567:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4665              		.loc 3 568 0
 4666 0027 488D9C24 		leaq	784(%rsp), %rbx
 4666      10030000 
 566:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 4667              		.loc 3 566 0
 4668 002f 488DBC24 		leaq	544(%rsp), %rdi
 4668      20020000 
 4669              	.LVL537:
 4670              	.LBB874:
 4671              	.LBB875:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4672              		.loc 1 568 0
 4673 0037 4C8D7C24 		leaq	28(%rsp), %r15
 4673      1C
 4674              	.LBE875:
 4675              	.LBE874:
 4676              	.LBB877:
 4677              	.LBB878:
 505:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 4678              		.loc 3 505 0
 4679 003c 488D6C24 		leaq	32(%rsp), %rbp
 4679      20
 4680              	.LBE878:
 4681              	.LBE877:
 564:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 4682              		.loc 3 564 0
 4683 0041 44894424 		movl	%r8d, 12(%rsp)
 4683      0C
 565:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 4684              		.loc 3 565 0
 4685 0046 C744241C 		movl	$0, 28(%rsp)
 4685      00000000 
 564:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 4686              		.loc 3 564 0
 4687 004e 64488B04 		movq	%fs:40, %rax
 4687      25280000 
 4687      00
 4688 0057 48898424 		movq	%rax, 2648(%rsp)
 4688      580A0000 
 4689 005f 31C0     		xorl	%eax, %eax
 566:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 4690              		.loc 3 566 0
 4691 0061 E8000000 		call	_ZN9Fl_WindowC1EiiPKc
 4691      00
 4692              	.LVL538:
 4693              		.loc 3 568 0
 4694 0066 4531C9   		xorl	%r9d, %r9d
 4695 0069 41B87300 		movl	$115, %r8d
 4695      0000
 4696 006f B9C30000 		movl	$195, %ecx
 4696      00
 4697 0074 BA0A0000 		movl	$10, %edx
 4697      00
 4698 0079 BE0A0000 		movl	$10, %esi
 4698      00
 4699 007e 4889DF   		movq	%rbx, %rdi
 4700              	.LBB883:
 4701              	.LBB876:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4702              		.loc 1 568 0
 4703 0081 48C78424 		movq	$_ZL12cc_cancel_cbP9Fl_WidgetPv, 560(%rsp)
 4703      30020000 
 4703      00000000 
 4704 008d 4C89BC24 		movq	%r15, 568(%rsp)
 4704      38020000 
 4705              	.LVL539:
 4706              	.LBE876:
 4707              	.LBE883:
 4708              		.loc 3 568 0
 4709 0095 E8000000 		call	_ZN16Fl_Color_ChooserC1EiiiiPKc
 4709      00
 4710              	.LVL540:
 4711              	.LBB884:
 4712              	.LBB881:
 505:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 4713              		.loc 3 505 0
 4714 009a 4531C9   		xorl	%r9d, %r9d
 4715 009d 41B81900 		movl	$25, %r8d
 4715      0000
 4716 00a3 B95F0000 		movl	$95, %ecx
 4716      00
 4717 00a8 BA820000 		movl	$130, %edx
 4717      00
 4718 00ad BE0A0000 		movl	$10, %esi
 4718      00
 4719 00b2 4889EF   		movq	%rbp, %rdi
 4720 00b5 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 4720      00
 4721              	.LVL541:
 4722              	.LBE881:
 4723              	.LBE884:
 569:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4724              		.loc 3 570 0
 4725 00ba 4C8B0D00 		movq	fl_ok(%rip), %r9
 4725      000000
 4726 00c1 488DBC24 		leaq	160(%rsp), %rdi
 4726      A0000000 
 4727 00c9 41B81900 		movl	$25, %r8d
 4727      0000
 4728 00cf B95F0000 		movl	$95, %ecx
 4728      00
 4729 00d4 BAA50000 		movl	$165, %edx
 4729      00
 4730 00d9 BE0A0000 		movl	$10, %esi
 4730      00
 4731              	.LBB885:
 4732              	.LBB882:
 505:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 4733              		.loc 3 505 0
 4734 00de 48C74424 		movq	$_ZTV9ColorChip+16, 32(%rsp)
 4734      20000000 
 4734      00
 4735              	.LVL542:
 4736              	.LBB879:
 4737              	.LBB880:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4738              		.loc 1 372 0
 4739 00e7 C684248E 		movb	$12, 142(%rsp)
 4739      0000000C 
 4740              	.LVL543:
 4741              	.LBE880:
 4742              	.LBE879:
 4743              	.LBE882:
 4744              	.LBE885:
 4745              		.loc 3 570 0
 4746 00ef E8000000 		call	_ZN16Fl_Return_ButtonC1EiiiiPKc
 4746      00
 4747              	.LVL544:
 4748              	.LBB886:
 4749              	.LBB887:
 505:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 4750              		.loc 3 505 0
 4751 00f4 488DBC24 		leaq	288(%rsp), %rdi
 4751      20010000 
 4752 00fc 4531C9   		xorl	%r9d, %r9d
 4753 00ff 41B81900 		movl	$25, %r8d
 4753      0000
 4754 0105 B95F0000 		movl	$95, %ecx
 4754      00
 4755 010a BA820000 		movl	$130, %edx
 4755      00
 4756 010f BE6E0000 		movl	$110, %esi
 4756      00
 4757              	.LBE887:
 4758              	.LBE886:
 4759              	.LBB892:
 4760              	.LBB893:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4761              		.loc 1 568 0
 4762 0114 48C78424 		movq	$_ZL8cc_ok_cbP9Fl_WidgetPv, 176(%rsp)
 4762      B0000000 
 4762      00000000 
 4763 0120 4C89BC24 		movq	%r15, 184(%rsp)
 4763      B8000000 
 4764              	.LVL545:
 4765              	.LBE893:
 4766              	.LBE892:
 4767              	.LBB894:
 4768              	.LBB890:
 505:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 4769              		.loc 3 505 0
 4770 0128 E8000000 		call	_ZN9Fl_WidgetC2EiiiiPKc
 4770      00
 4771              	.LVL546:
 4772              	.LBE890:
 4773              	.LBE894:
 571:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4774              		.loc 3 573 0
 4775 012d F20F1015 		movsd	.LC4(%rip), %xmm2
 4775      00000000 
 574:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 4776              		.loc 3 576 0
 4777 0135 4C8B0D00 		movq	fl_cancel(%rip), %r9
 4777      000000
 573:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4778              		.loc 3 573 0
 4779 013c F2410F10 		movsd	(%r14), %xmm1
 4779      0E
 4780              		.loc 3 576 0
 4781 0141 488DBC24 		leaq	416(%rsp), %rdi
 4781      A0010000 
 573:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4782              		.loc 3 573 0
 4783 0149 F20F1005 		movsd	.LC5(%rip), %xmm0
 4783      00000000 
 4784              		.loc 3 576 0
 4785 0151 41B81900 		movl	$25, %r8d
 4785      0000
 573:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4786              		.loc 3 573 0
 4787 0157 F20F59CA 		mulsd	%xmm2, %xmm1
 4788              		.loc 3 576 0
 4789 015b B95F0000 		movl	$95, %ecx
 4789      00
 4790 0160 BAA50000 		movl	$165, %edx
 4790      00
 4791 0165 BE6E0000 		movl	$110, %esi
 4791      00
 4792              	.LBB895:
 4793              	.LBB891:
 505:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 4794              		.loc 3 505 0
 4795 016a 48C78424 		movq	$_ZTV9ColorChip+16, 288(%rsp)
 4795      20010000 
 4795      00000000 
 4796              	.LVL547:
 4797              	.LBB888:
 4798              	.LBB889:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4799              		.loc 1 372 0
 4800 0176 C684248E 		movb	$12, 398(%rsp)
 4800      0100000C 
 4801              	.LVL548:
 4802              	.LBE889:
 4803              	.LBE888:
 4804              	.LBE891:
 4805              	.LBE895:
 573:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4806              		.loc 3 573 0
 4807 017e F20F58C8 		addsd	%xmm0, %xmm1
 4808 0182 F20F2CC1 		cvttsd2si	%xmm1, %eax
 574:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4809              		.loc 3 574 0
 4810 0186 F2410F10 		movsd	0(%r13), %xmm1
 4810      4D00
 4811 018c F20F59CA 		mulsd	%xmm2, %xmm1
 575:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 4812              		.loc 3 575 0
 4813 0190 F2410F59 		mulsd	(%r12), %xmm2
 4813      1424
 574:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4814              		.loc 3 574 0
 4815 0196 F20F58C8 		addsd	%xmm0, %xmm1
 575:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 4816              		.loc 3 575 0
 4817 019a F20F58C2 		addsd	%xmm2, %xmm0
 573:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 4818              		.loc 3 573 0
 4819 019e 88842498 		movb	%al, 408(%rsp)
 4819      010000
 4820 01a5 88842498 		movb	%al, 152(%rsp)
 4820      000000
 574:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4821              		.loc 3 574 0
 4822 01ac F20F2CC1 		cvttsd2si	%xmm1, %eax
 4823 01b0 88842499 		movb	%al, 409(%rsp)
 4823      010000
 4824 01b7 88842499 		movb	%al, 153(%rsp)
 4824      000000
 575:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 4825              		.loc 3 575 0
 4826 01be F20F2CC0 		cvttsd2si	%xmm0, %eax
 4827 01c2 8884249A 		movb	%al, 410(%rsp)
 4827      010000
 4828 01c9 8884249A 		movb	%al, 154(%rsp)
 4828      000000
 4829              		.loc 3 576 0
 4830 01d0 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 4830      00
 4831              	.LVL549:
 577:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4832              		.loc 3 579 0
 4833 01d5 F2410F10 		movsd	(%r12), %xmm2
 4833      1424
 4834 01db 4889DF   		movq	%rbx, %rdi
 4835 01de F2410F10 		movsd	0(%r13), %xmm1
 4835      4D00
 4836              	.LBB896:
 4837              	.LBB897:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4838              		.loc 1 568 0
 4839 01e4 48C78424 		movq	$_ZL12cc_cancel_cbP9Fl_WidgetPv, 432(%rsp)
 4839      B0010000 
 4839      00000000 
 4840              	.LBE897:
 4841              	.LBE896:
 4842              		.loc 3 579 0
 4843 01f0 F2410F10 		movsd	(%r14), %xmm0
 4843      06
 4844              	.LBB899:
 4845              	.LBB898:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4846              		.loc 1 568 0
 4847 01f5 4C89BC24 		movq	%r15, 440(%rsp)
 4847      B8010000 
 4848              	.LVL550:
 4849              	.LBE898:
 4850              	.LBE899:
 4851              	.LBB900:
 4852              	.LBB901:
 117:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 4853              		.loc 2 117 0
 4854 01fd 48899C24 		movq	%rbx, 680(%rsp)
 4854      A8020000 
 4855              	.LVL551:
 4856              	.LBE901:
 4857              	.LBE900:
 4858              		.loc 3 579 0
 4859 0205 E8000000 		call	_ZN16Fl_Color_Chooser3rgbEddd
 4859      00
 4860              	.LVL552:
 580:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4861              		.loc 3 581 0
 4862 020a 448B5424 		movl	12(%rsp), %r10d
 4862      0C
 4863              	.LBB902:
 4864              	.LBB903:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4865              		.loc 1 568 0
 4866 020f 48C78424 		movq	$_ZL10chooser_cbP9Fl_WidgetPv, 800(%rsp)
 4866      20030000 
 4866      00000000 
 4867 021b 4889AC24 		movq	%rbp, 808(%rsp)
 4867      28030000 
 4868              	.LVL553:
 4869              	.LBE903:
 4870              	.LBE902:
 4871              		.loc 3 581 0
 4872 0223 4183FAFF 		cmpl	$-1, %r10d
 4873 0227 740B     		je	.L315
 4874              		.loc 3 581 0 is_stmt 0 discriminator 1
 4875 0229 4489D6   		movl	%r10d, %esi
 4876 022c 4889DF   		movq	%rbx, %rdi
 4877 022f E8000000 		call	_ZN16Fl_Color_Chooser4modeEi
 4877      00
 4878              	.LVL554:
 4879              	.L315:
 582:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4880              		.loc 3 582 0 is_stmt 1
 4881 0234 488DBC24 		leaq	544(%rsp), %rdi
 4881      20020000 
 4882              	.LVL555:
 4883 023c E8000000 		call	_ZN8Fl_Group3endEv
 4883      00
 4884              	.LVL556:
 4885              	.LBB904:
 4886              	.LBB905:
 4887              		.file 12 "fltk-1.3.4-1/FL/Fl_Window.H"
   1:fltk-1.3.4-1/FL/Fl_Window.H **** //
   2:fltk-1.3.4-1/FL/Fl_Window.H **** // "$Id: Fl_Window.H 10820 2015-07-27 18:13:46Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Window.H **** //
   4:fltk-1.3.4-1/FL/Fl_Window.H **** // Window header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Window.H **** //
   6:fltk-1.3.4-1/FL/Fl_Window.H **** // Copyright 1998-2012 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Window.H **** //
   8:fltk-1.3.4-1/FL/Fl_Window.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Window.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Window.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Window.H **** //
  12:fltk-1.3.4-1/FL/Fl_Window.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Window.H **** //
  14:fltk-1.3.4-1/FL/Fl_Window.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Window.H **** //
  16:fltk-1.3.4-1/FL/Fl_Window.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Window.H **** //
  18:fltk-1.3.4-1/FL/Fl_Window.H **** 
  19:fltk-1.3.4-1/FL/Fl_Window.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Window.H ****    Fl_Window widget . */
  21:fltk-1.3.4-1/FL/Fl_Window.H **** 
  22:fltk-1.3.4-1/FL/Fl_Window.H **** #ifndef Fl_Window_H
  23:fltk-1.3.4-1/FL/Fl_Window.H **** #define Fl_Window_H
  24:fltk-1.3.4-1/FL/Fl_Window.H **** 
  25:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
  26:fltk-1.3.4-1/FL/Fl_Window.H **** #include <windows.h>
  27:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Window.H **** 
  29:fltk-1.3.4-1/FL/Fl_Window.H **** #include "Fl_Group.H"
  30:fltk-1.3.4-1/FL/Fl_Window.H **** #include "Fl_Bitmap.H"
  31:fltk-1.3.4-1/FL/Fl_Window.H **** #include <stdlib.h>
  32:fltk-1.3.4-1/FL/Fl_Window.H **** 
  33:fltk-1.3.4-1/FL/Fl_Window.H **** #define FL_WINDOW 0xF0		///< window type id all subclasses have type() >= this
  34:fltk-1.3.4-1/FL/Fl_Window.H **** #define FL_DOUBLE_WINDOW 0xF1   ///< double window type id
  35:fltk-1.3.4-1/FL/Fl_Window.H **** 
  36:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_X;
  37:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_RGB_Image;
  38:fltk-1.3.4-1/FL/Fl_Window.H **** 
  39:fltk-1.3.4-1/FL/Fl_Window.H **** 
  40:fltk-1.3.4-1/FL/Fl_Window.H **** /**
  41:fltk-1.3.4-1/FL/Fl_Window.H ****   This widget produces an actual window.  This can either be a main
  42:fltk-1.3.4-1/FL/Fl_Window.H ****   window, with a border and title and all the window management controls,
  43:fltk-1.3.4-1/FL/Fl_Window.H ****   or a "subwindow" inside a window.  This is controlled by whether or not
  44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
  45:fltk-1.3.4-1/FL/Fl_Window.H **** 
  46:fltk-1.3.4-1/FL/Fl_Window.H ****   Once you create a window, you usually add children Fl_Widget
  47:fltk-1.3.4-1/FL/Fl_Window.H ****   's to it by using window->add(child) for each new widget.
  48:fltk-1.3.4-1/FL/Fl_Window.H ****   See Fl_Group for more information on how to add and remove children.
  49:fltk-1.3.4-1/FL/Fl_Window.H **** 
  50:fltk-1.3.4-1/FL/Fl_Window.H ****   There are several subclasses of Fl_Window that provide
  51:fltk-1.3.4-1/FL/Fl_Window.H ****   double-buffering, overlay, menu, and OpenGL support.
  52:fltk-1.3.4-1/FL/Fl_Window.H **** 
  53:fltk-1.3.4-1/FL/Fl_Window.H ****   The window's callback is done if the user tries to close a window
  54:fltk-1.3.4-1/FL/Fl_Window.H ****   using the window manager and Fl::modal() is zero or equal to the
  55:fltk-1.3.4-1/FL/Fl_Window.H ****   window. Fl_Window has a default callback that calls Fl_Window::hide().
  56:fltk-1.3.4-1/FL/Fl_Window.H **** */
  57:fltk-1.3.4-1/FL/Fl_Window.H **** class FL_EXPORT Fl_Window : public Fl_Group {
  58:fltk-1.3.4-1/FL/Fl_Window.H **** 
  59:fltk-1.3.4-1/FL/Fl_Window.H ****   static char *default_xclass_;
  60:fltk-1.3.4-1/FL/Fl_Window.H ****   // Note: we must use separate statements for each of the following 8 variables,
  61:fltk-1.3.4-1/FL/Fl_Window.H ****   // with the static attribute, otherwise MS VC++ 2008/2010 complains :-(
  62:fltk-1.3.4-1/FL/Fl_Window.H ****   // AlbrechtS 04/2012
  63:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
  64:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  65:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  66:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_x;
  67:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
  68:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  69:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  70:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_y;
  71:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
  72:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  73:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  74:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_w;
  75:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
  76:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  77:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  78:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_h;
  79:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
  80:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  81:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  82:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_top;
  83:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
  84:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  85:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  86:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_bottom;
  87:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
  88:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  89:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  90:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_left;
  91:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
  92:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  93:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  94:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_right;
  95:fltk-1.3.4-1/FL/Fl_Window.H **** 
  96:fltk-1.3.4-1/FL/Fl_Window.H ****   friend class Fl_X;
  97:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_X *i; // points at the system-specific stuff
  98:fltk-1.3.4-1/FL/Fl_Window.H **** 
  99:fltk-1.3.4-1/FL/Fl_Window.H ****   struct icon_data {
 100:fltk-1.3.4-1/FL/Fl_Window.H ****     const void *legacy_icon;
 101:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_RGB_Image **icons;
 102:fltk-1.3.4-1/FL/Fl_Window.H ****     int count;
 103:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
 104:fltk-1.3.4-1/FL/Fl_Window.H ****     HICON big_icon;
 105:fltk-1.3.4-1/FL/Fl_Window.H ****     HICON small_icon;
 106:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 107:fltk-1.3.4-1/FL/Fl_Window.H ****   };
 108:fltk-1.3.4-1/FL/Fl_Window.H **** 
 109:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* iconlabel_;
 110:fltk-1.3.4-1/FL/Fl_Window.H ****   char* xclass_;
 111:fltk-1.3.4-1/FL/Fl_Window.H ****   struct icon_data *icon_;
 112:fltk-1.3.4-1/FL/Fl_Window.H ****   // size_range stuff:
 113:fltk-1.3.4-1/FL/Fl_Window.H ****   int minw, minh, maxw, maxh;
 114:fltk-1.3.4-1/FL/Fl_Window.H ****   int dw, dh, aspect;
 115:fltk-1.3.4-1/FL/Fl_Window.H ****   uchar size_range_set;
 116:fltk-1.3.4-1/FL/Fl_Window.H ****   // cursor stuff
 117:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Cursor cursor_default;
 118:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
 119:fltk-1.3.4-1/FL/Fl_Window.H ****   // legacy, not used
 120:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Color cursor_fg, cursor_bg;
 121:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 122:fltk-1.3.4-1/FL/Fl_Window.H ****   
 123:fltk-1.3.4-1/FL/Fl_Window.H **** protected:
 124:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Data supporting a non-rectangular window shape */
 125:fltk-1.3.4-1/FL/Fl_Window.H ****   struct shape_data_type {
 126:fltk-1.3.4-1/FL/Fl_Window.H ****     int lw_; ///<  width of shape image
 127:fltk-1.3.4-1/FL/Fl_Window.H ****     int lh_; ///<  height of shape image
 128:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Image* shape_; ///<  shape image
 129:fltk-1.3.4-1/FL/Fl_Window.H **** #if defined(__APPLE__)
 130:fltk-1.3.4-1/FL/Fl_Window.H ****     typedef struct CGImage* CGImageRef;
 131:fltk-1.3.4-1/FL/Fl_Window.H ****     CGImageRef mask;
 132:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 133:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Bitmap *todelete_; ///<  auxiliary bitmap image
 134:fltk-1.3.4-1/FL/Fl_Window.H ****   };
 135:fltk-1.3.4-1/FL/Fl_Window.H **** 
 136:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303 && !defined(FL_DOXYGEN)
 137:fltk-1.3.4-1/FL/Fl_Window.H ****   static
 138:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 139:fltk-1.3.4-1/FL/Fl_Window.H ****   shape_data_type *shape_data_; ///< non-null means the window has a non-rectangular shape
 140:fltk-1.3.4-1/FL/Fl_Window.H **** private:
 141:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_bitmap_(Fl_Image* b);
 142:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_alpha_(Fl_Image* img, int offset);
 143:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_pixmap_(Fl_Image* pixmap);
 144:fltk-1.3.4-1/FL/Fl_Window.H **** public:
 145:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape(const Fl_Image* img);
 146:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Set the window's shape with an Fl_Image.
 147:fltk-1.3.4-1/FL/Fl_Window.H ****    \see void shape(const Fl_Image* img)
 148:fltk-1.3.4-1/FL/Fl_Window.H ****    */
 149:fltk-1.3.4-1/FL/Fl_Window.H ****   inline void shape(const Fl_Image& b) { shape(&b); }
 150:fltk-1.3.4-1/FL/Fl_Window.H **** #if ! (defined(WIN32) || defined(__APPLE__) || defined(FL_DOXYGEN))
 151:fltk-1.3.4-1/FL/Fl_Window.H ****   void combine_mask(void);
 152:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 153:fltk-1.3.4-1/FL/Fl_Window.H **** private:
 154:fltk-1.3.4-1/FL/Fl_Window.H **** 
 155:fltk-1.3.4-1/FL/Fl_Window.H **** 
 156:fltk-1.3.4-1/FL/Fl_Window.H ****   void size_range_();
 157:fltk-1.3.4-1/FL/Fl_Window.H ****   void _Fl_Window(); // constructor innards
 158:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_x(); // platform-specific part of sending a window to full screen
 159:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_off_x(int X, int Y, int W, int H);// platform-specific part of leaving full scree
 160:fltk-1.3.4-1/FL/Fl_Window.H **** 
 161:fltk-1.3.4-1/FL/Fl_Window.H ****   // unimplemented copy ctor and assignment operator
 162:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Window(const Fl_Window&);
 163:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Window& operator=(const Fl_Window&);
 164:fltk-1.3.4-1/FL/Fl_Window.H **** 
 165:fltk-1.3.4-1/FL/Fl_Window.H **** protected:
 166:fltk-1.3.4-1/FL/Fl_Window.H **** 
 167:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Stores the last window that was made current. See current() const */
 168:fltk-1.3.4-1/FL/Fl_Window.H ****   static Fl_Window *current_;
 169:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void draw();
 170:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Forces the window to be drawn, this window is also made current and calls draw(). */
 171:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void flush();
 172:fltk-1.3.4-1/FL/Fl_Window.H **** 
 173:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 174:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets an internal flag that tells FLTK and the window manager to
 175:fltk-1.3.4-1/FL/Fl_Window.H ****     honor position requests.
 176:fltk-1.3.4-1/FL/Fl_Window.H **** 
 177:fltk-1.3.4-1/FL/Fl_Window.H ****     This is used internally and should not be needed by user code.
 178:fltk-1.3.4-1/FL/Fl_Window.H **** 
 179:fltk-1.3.4-1/FL/Fl_Window.H ****     \param[in] force 1 to set the FORCE_POSITION flag, 0 to clear it
 180:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 181:fltk-1.3.4-1/FL/Fl_Window.H ****   void force_position(int force) {
 182:fltk-1.3.4-1/FL/Fl_Window.H ****     if (force) set_flag(FORCE_POSITION);
 183:fltk-1.3.4-1/FL/Fl_Window.H ****     else clear_flag(FORCE_POSITION);
 184:fltk-1.3.4-1/FL/Fl_Window.H ****   }
 185:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 186:fltk-1.3.4-1/FL/Fl_Window.H ****     Returns the internal state of the window's FORCE_POSITION flag.
 187:fltk-1.3.4-1/FL/Fl_Window.H **** 
 188:fltk-1.3.4-1/FL/Fl_Window.H ****     \retval 1 if flag is set
 189:fltk-1.3.4-1/FL/Fl_Window.H ****     \retval 0 otherwise
 190:fltk-1.3.4-1/FL/Fl_Window.H **** 
 191:fltk-1.3.4-1/FL/Fl_Window.H ****     \see force_position(int)
 192:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 193:fltk-1.3.4-1/FL/Fl_Window.H ****   int force_position() const { return ((flags() & FORCE_POSITION)?1:0); }
 194:fltk-1.3.4-1/FL/Fl_Window.H **** 
 195:fltk-1.3.4-1/FL/Fl_Window.H ****   void free_icons();
 196:fltk-1.3.4-1/FL/Fl_Window.H **** 
 197:fltk-1.3.4-1/FL/Fl_Window.H **** public:
 198:fltk-1.3.4-1/FL/Fl_Window.H **** 
 199:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 200:fltk-1.3.4-1/FL/Fl_Window.H ****     Creates a window from the given size and title. 
 201:fltk-1.3.4-1/FL/Fl_Window.H ****     If Fl_Group::current() is not NULL, the window is created as a 
 202:fltk-1.3.4-1/FL/Fl_Window.H ****     subwindow of the parent window.
 203:fltk-1.3.4-1/FL/Fl_Window.H ****     
 204:fltk-1.3.4-1/FL/Fl_Window.H ****     The (w,h) form of the constructor creates a top-level window
 205:fltk-1.3.4-1/FL/Fl_Window.H ****     and asks the window manager to position the window. The (x,y,w,h)
 206:fltk-1.3.4-1/FL/Fl_Window.H ****     form of the constructor either creates a subwindow or a
 207:fltk-1.3.4-1/FL/Fl_Window.H ****     top-level window at the specified location (x,y) , subject to window
 208:fltk-1.3.4-1/FL/Fl_Window.H ****     manager configuration. If you do not specify the position of the
 209:fltk-1.3.4-1/FL/Fl_Window.H ****     window, the window manager will pick a place to show the window
 210:fltk-1.3.4-1/FL/Fl_Window.H ****     or allow the user to pick a location. Use position(x,y)
 211:fltk-1.3.4-1/FL/Fl_Window.H ****     or hotspot() before calling show() to request a
 212:fltk-1.3.4-1/FL/Fl_Window.H ****     position on the screen. See Fl_Window::resize() 
 213:fltk-1.3.4-1/FL/Fl_Window.H ****     for some more details on positioning windows.
 214:fltk-1.3.4-1/FL/Fl_Window.H ****     
 215:fltk-1.3.4-1/FL/Fl_Window.H ****     Top-level windows initially have visible() set to 0
 216:fltk-1.3.4-1/FL/Fl_Window.H ****     and parent() set to NULL. Subwindows initially
 217:fltk-1.3.4-1/FL/Fl_Window.H ****     have visible() set to 1 and parent() set to
 218:fltk-1.3.4-1/FL/Fl_Window.H ****     the parent window pointer.
 219:fltk-1.3.4-1/FL/Fl_Window.H ****     
 220:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Widget::box() defaults to FL_FLAT_BOX. If you plan to
 221:fltk-1.3.4-1/FL/Fl_Window.H ****     completely fill the window with children widgets you should
 222:fltk-1.3.4-1/FL/Fl_Window.H ****     change this to FL_NO_BOX. If you turn the window border off
 223:fltk-1.3.4-1/FL/Fl_Window.H ****     you may want to change this to FL_UP_BOX.
 224:fltk-1.3.4-1/FL/Fl_Window.H **** 
 225:fltk-1.3.4-1/FL/Fl_Window.H ****     \see Fl_Window(int x, int y, int w, int h, const char* title)
 226:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 227:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window(int w, int h, const char* title= 0);
 228:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Creates a window from the given position, size and title.
 229:fltk-1.3.4-1/FL/Fl_Window.H **** 
 230:fltk-1.3.4-1/FL/Fl_Window.H ****     \see Fl_Window(int w, int h, const char *title)
 231:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 232:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window(int x, int y, int w, int h, const char* title = 0);
 233:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 234:fltk-1.3.4-1/FL/Fl_Window.H ****     The destructor <I>also deletes all the children</I>. This allows a
 235:fltk-1.3.4-1/FL/Fl_Window.H ****     whole tree to be deleted at once, without having to keep a pointer to
 236:fltk-1.3.4-1/FL/Fl_Window.H ****     all the children in the user code. A kludge has been done so the 
 237:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window and all of its children can be automatic (local)
 238:fltk-1.3.4-1/FL/Fl_Window.H ****     variables, but you must declare the Fl_Window <I>first</I> so
 239:fltk-1.3.4-1/FL/Fl_Window.H ****     that it is destroyed last.
 240:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 241:fltk-1.3.4-1/FL/Fl_Window.H ****     virtual ~Fl_Window();
 242:fltk-1.3.4-1/FL/Fl_Window.H **** 
 243:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual int handle(int);
 244:fltk-1.3.4-1/FL/Fl_Window.H **** 
 245:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 246:fltk-1.3.4-1/FL/Fl_Window.H ****     Changes the size and position of the window.  If shown() is true,
 247:fltk-1.3.4-1/FL/Fl_Window.H ****     these changes are communicated to the window server (which may
 248:fltk-1.3.4-1/FL/Fl_Window.H ****     refuse that size and cause a further resize).  If shown() is
 249:fltk-1.3.4-1/FL/Fl_Window.H ****     false, the size and position are used when show() is called.
 250:fltk-1.3.4-1/FL/Fl_Window.H ****     See Fl_Group for the effect of resizing on the child widgets.
 251:fltk-1.3.4-1/FL/Fl_Window.H **** 
 252:fltk-1.3.4-1/FL/Fl_Window.H ****     You can also call the Fl_Widget methods size(x,y) and position(w,h),
 253:fltk-1.3.4-1/FL/Fl_Window.H ****     which are inline wrappers for this virtual function.
 254:fltk-1.3.4-1/FL/Fl_Window.H **** 
 255:fltk-1.3.4-1/FL/Fl_Window.H ****     A top-level window can not force, but merely suggest a position and 
 256:fltk-1.3.4-1/FL/Fl_Window.H ****     size to the operating system. The window manager may not be willing or 
 257:fltk-1.3.4-1/FL/Fl_Window.H ****     able to display a window at the desired position or with the given 
 258:fltk-1.3.4-1/FL/Fl_Window.H ****     dimensions. It is up to the application developer to verify window 
 259:fltk-1.3.4-1/FL/Fl_Window.H ****     parameters after the resize request.
 260:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 261:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void resize(int X,int Y,int W,int H);
 262:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 263:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets whether or not the window manager border is around the
 264:fltk-1.3.4-1/FL/Fl_Window.H ****     window.  The default value is true. void border(int) can be
 265:fltk-1.3.4-1/FL/Fl_Window.H ****     used to turn the border on and off. <I>Under most X window
 266:fltk-1.3.4-1/FL/Fl_Window.H ****     managers this does not work after show() has been called,
 267:fltk-1.3.4-1/FL/Fl_Window.H ****     although SGI's 4DWM does work.</I>
 268:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 269:fltk-1.3.4-1/FL/Fl_Window.H ****   void border(int b);
 270:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 271:fltk-1.3.4-1/FL/Fl_Window.H ****     Fast inline function to turn the window manager border
 272:fltk-1.3.4-1/FL/Fl_Window.H ****     off. It only works before show() is called.
 273:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 274:fltk-1.3.4-1/FL/Fl_Window.H ****   void clear_border()	{set_flag(NOBORDER);}
 275:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::border(int) */
 276:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int border() const	{return !(flags() & NOBORDER);}
 277:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Activates the flags NOBORDER|FL_OVERRIDE */
 278:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_override()	{set_flag(NOBORDER|OVERRIDE);}
 279:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Returns non zero if FL_OVERRIDE flag is set, 0 otherwise. */
 280:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int override() const  { return flags()&OVERRIDE; }
 281:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 282:fltk-1.3.4-1/FL/Fl_Window.H ****     A "modal" window, when shown(), will prevent any events from
 283:fltk-1.3.4-1/FL/Fl_Window.H ****     being delivered to other windows in the same program, and will also
 284:fltk-1.3.4-1/FL/Fl_Window.H ****     remain on top of the other windows (if the X window manager supports
 285:fltk-1.3.4-1/FL/Fl_Window.H ****     the "transient for" property).  Several modal windows may be shown at
 286:fltk-1.3.4-1/FL/Fl_Window.H ****     once, in which case only the last one shown gets events.  You can see
 287:fltk-1.3.4-1/FL/Fl_Window.H ****     which window (if any) is modal by calling Fl::modal().
 288:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 289:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_modal()	{set_flag(MODAL);}
 290:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is modal.  */
 291:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int modal() const	{return flags() & MODAL;}
 292:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 293:fltk-1.3.4-1/FL/Fl_Window.H ****     A "non-modal" window (terminology borrowed from Microsoft Windows)
 294:fltk-1.3.4-1/FL/Fl_Window.H ****     acts like a modal() one in that it remains on top, but it has
 295:fltk-1.3.4-1/FL/Fl_Window.H ****     no effect on event delivery.  There are <I>three</I> states for a
 296:fltk-1.3.4-1/FL/Fl_Window.H ****     window: modal, non-modal, and normal.
 297:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 298:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_non_modal()	{set_flag(NON_MODAL);}
 299:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is modal or non-modal. */
 300:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int non_modal() const {return flags() & (NON_MODAL|MODAL);}
 301:fltk-1.3.4-1/FL/Fl_Window.H **** 
 302:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 303:fltk-1.3.4-1/FL/Fl_Window.H ****     Clears the "modal" flags and converts a "modal" or "non-modal"
 304:fltk-1.3.4-1/FL/Fl_Window.H ****     window back into a "normal" window.
 305:fltk-1.3.4-1/FL/Fl_Window.H **** 
 306:fltk-1.3.4-1/FL/Fl_Window.H ****     Note that there are <I>three</I> states for a window: modal,
 307:fltk-1.3.4-1/FL/Fl_Window.H ****     non-modal, and normal.
 308:fltk-1.3.4-1/FL/Fl_Window.H **** 
 309:fltk-1.3.4-1/FL/Fl_Window.H ****     You can not change the "modality" of a window whilst
 310:fltk-1.3.4-1/FL/Fl_Window.H ****     it is shown, so it is necessary to first hide() the window,
 311:fltk-1.3.4-1/FL/Fl_Window.H ****     change its "modality" as required, then re-show the window
 312:fltk-1.3.4-1/FL/Fl_Window.H ****     for the new state to take effect.
 313:fltk-1.3.4-1/FL/Fl_Window.H **** 
 314:fltk-1.3.4-1/FL/Fl_Window.H ****     This method can also be used to change a "modal" window into a
 315:fltk-1.3.4-1/FL/Fl_Window.H ****     "non-modal" one. On several supported platforms, the "modal" state
 316:fltk-1.3.4-1/FL/Fl_Window.H ****     over-rides the "non-modal" state, so the "modal" state must be
 317:fltk-1.3.4-1/FL/Fl_Window.H ****     cleared before the window can be set into the "non-modal"
 318:fltk-1.3.4-1/FL/Fl_Window.H ****     state.
 319:fltk-1.3.4-1/FL/Fl_Window.H ****     In general, the following sequence should work:
 320:fltk-1.3.4-1/FL/Fl_Window.H **** 
 321:fltk-1.3.4-1/FL/Fl_Window.H ****     \code
 322:fltk-1.3.4-1/FL/Fl_Window.H ****     win->hide();
 323:fltk-1.3.4-1/FL/Fl_Window.H ****     win->clear_modal_states();
 324:fltk-1.3.4-1/FL/Fl_Window.H ****     //Set win to new state as desired, or leave "normal", e.g...
 325:fltk-1.3.4-1/FL/Fl_Window.H ****     win->set_non_modal();
 326:fltk-1.3.4-1/FL/Fl_Window.H ****     win->show();
 327:fltk-1.3.4-1/FL/Fl_Window.H ****     \endcode
 328:fltk-1.3.4-1/FL/Fl_Window.H **** 
 329:fltk-1.3.4-1/FL/Fl_Window.H ****     \note Under some window managers, the sequence of hiding the
 330:fltk-1.3.4-1/FL/Fl_Window.H ****     window and changing its modality will often cause it to be
 331:fltk-1.3.4-1/FL/Fl_Window.H ****     re-displayed at a different position when it is subsequently
 332:fltk-1.3.4-1/FL/Fl_Window.H ****     shown. This is an irritating feature but appears to be
 333:fltk-1.3.4-1/FL/Fl_Window.H ****     unavoidable at present.
 334:fltk-1.3.4-1/FL/Fl_Window.H ****     As a result we would advise to use this method only when
 335:fltk-1.3.4-1/FL/Fl_Window.H ****     absolutely necessary.
 336:fltk-1.3.4-1/FL/Fl_Window.H **** 
 337:fltk-1.3.4-1/FL/Fl_Window.H ****     \see void set_modal(), void set_non_modal()
 338:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 339:fltk-1.3.4-1/FL/Fl_Window.H ****   void clear_modal_states() {clear_flag(NON_MODAL | MODAL);}
 340:fltk-1.3.4-1/FL/Fl_Window.H **** 
 341:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 342:fltk-1.3.4-1/FL/Fl_Window.H ****     Marks the window as a menu window.
 343:fltk-1.3.4-1/FL/Fl_Window.H **** 
 344:fltk-1.3.4-1/FL/Fl_Window.H ****     This is intended for internal use, but it can also be used if you
 345:fltk-1.3.4-1/FL/Fl_Window.H ****     write your own menu handling. However, this is not recommended.
 346:fltk-1.3.4-1/FL/Fl_Window.H **** 
 347:fltk-1.3.4-1/FL/Fl_Window.H ****     This flag is used for correct "parenting" of windows in communication
 348:fltk-1.3.4-1/FL/Fl_Window.H ****     with the windowing system. Modern X window managers can use different
 349:fltk-1.3.4-1/FL/Fl_Window.H ****     flags to distinguish menu and tooltip windows from normal windows.
 350:fltk-1.3.4-1/FL/Fl_Window.H **** 
 351:fltk-1.3.4-1/FL/Fl_Window.H ****     This must be called before the window is shown and cannot be changed
 352:fltk-1.3.4-1/FL/Fl_Window.H ****     later.
 353:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 354:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_menu_window()	{set_flag(MENU_WINDOW);}
 355:fltk-1.3.4-1/FL/Fl_Window.H **** 
 356:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is a menu window. */
 357:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int menu_window() const {return flags() & MENU_WINDOW;}
 358:fltk-1.3.4-1/FL/Fl_Window.H ****   
 359:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 360:fltk-1.3.4-1/FL/Fl_Window.H ****     Marks the window as a tooltip window.
 361:fltk-1.3.4-1/FL/Fl_Window.H **** 
 362:fltk-1.3.4-1/FL/Fl_Window.H ****     This is intended for internal use, but it can also be used if you
 363:fltk-1.3.4-1/FL/Fl_Window.H ****     write your own tooltip handling. However, this is not recommended.
 364:fltk-1.3.4-1/FL/Fl_Window.H **** 
 365:fltk-1.3.4-1/FL/Fl_Window.H ****     This flag is used for correct "parenting" of windows in communication
 366:fltk-1.3.4-1/FL/Fl_Window.H ****     with the windowing system. Modern X window managers can use different
 367:fltk-1.3.4-1/FL/Fl_Window.H ****     flags to distinguish menu and tooltip windows from normal windows.
 368:fltk-1.3.4-1/FL/Fl_Window.H **** 
 369:fltk-1.3.4-1/FL/Fl_Window.H ****     This must be called before the window is shown and cannot be changed
 370:fltk-1.3.4-1/FL/Fl_Window.H ****     later.
 371:fltk-1.3.4-1/FL/Fl_Window.H **** 
 372:fltk-1.3.4-1/FL/Fl_Window.H ****     \note Since Fl_Tooltip_Window is derived from Fl_Menu_Window, this
 373:fltk-1.3.4-1/FL/Fl_Window.H ****     also \b clears the menu_window() state.
 374:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 375:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_tooltip_window()	{ set_flag(TOOLTIP_WINDOW);
 376:fltk-1.3.4-1/FL/Fl_Window.H **** 				  clear_flag(MENU_WINDOW); }
 377:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is a tooltip window. */
 378:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int tooltip_window() const {return flags() & TOOLTIP_WINDOW;}
 379:fltk-1.3.4-1/FL/Fl_Window.H **** 
 380:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 381:fltk-1.3.4-1/FL/Fl_Window.H ****     Positions the window so that the mouse is pointing at the given
 382:fltk-1.3.4-1/FL/Fl_Window.H ****     position, or at the center of the given widget, which may be the
 383:fltk-1.3.4-1/FL/Fl_Window.H ****     window itself.  If the optional offscreen parameter is
 384:fltk-1.3.4-1/FL/Fl_Window.H ****     non-zero, then the window is allowed to extend off the screen (this
 385:fltk-1.3.4-1/FL/Fl_Window.H ****     does not work with some X window managers). \see position()
 386:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 387:fltk-1.3.4-1/FL/Fl_Window.H ****   void hotspot(int x, int y, int offscreen = 0);
 388:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::hotspot(int x, int y, int offscreen = 0) */
 389:fltk-1.3.4-1/FL/Fl_Window.H ****   void hotspot(const Fl_Widget*, int offscreen = 0);
 390:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::hotspot(int x, int y, int offscreen = 0) */
 391:fltk-1.3.4-1/FL/Fl_Window.H ****   void hotspot(const Fl_Widget& p, int offscreen = 0) {hotspot(&p,offscreen);}
 4888              		.loc 12 391 0
 4889 0241 488DB424 		leaq	544(%rsp), %rsi
 4889      20020000 
 4890              	.LVL557:
 4891 0249 31D2     		xorl	%edx, %edx
 4892              	.LBE905:
 4893              	.LBE904:
 4894              	.LBB907:
 4895              	.LBB908:
 4896              	.LBB909:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 4897              		.loc 1 149 0
 4898 024b 818C2480 		orl	$16384, 640(%rsp)
 4898      02000000 
 4898      400000
 4899              	.LVL558:
 4900              	.LBE909:
 4901              	.LBE908:
 4902              	.LBE907:
 4903              	.LBB910:
 4904              	.LBB906:
 4905              		.loc 12 391 0
 4906 0256 4889F7   		movq	%rsi, %rdi
 4907 0259 E8000000 		call	_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
 4907      00
 4908              	.LVL559:
 4909              	.LBE906:
 4910              	.LBE910:
 583:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 4911              		.loc 3 585 0
 4912 025e 488DBC24 		leaq	544(%rsp), %rdi
 4912      20020000 
 4913              	.LVL560:
 4914 0266 E8000000 		call	_ZN9Fl_Window4showEv
 4914      00
 4915              	.LVL561:
 586:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 4916              		.loc 3 586 0
 4917 026b 4883BC24 		cmpq	$0, 704(%rsp)
 4917      C0020000 
 4917      00
 4918 0274 741A     		je	.L319
 4919 0276 662E0F1F 		.p2align 4,,10
 4919      84000000 
 4919      0000
 4920              		.p2align 3
 4921              	.L323:
 4922              		.loc 3 586 0 is_stmt 0 discriminator 1
 4923 0280 E8000000 		call	_ZN2Fl4waitEv
 4923      00
 4924              	.LVL562:
 4925 0285 4883BC24 		cmpq	$0, 704(%rsp)
 4925      C0020000 
 4925      00
 4926 028e 75F0     		jne	.L323
 4927              	.L319:
 587:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 4928              		.loc 3 587 0 is_stmt 1
 4929 0290 448B7C24 		movl	28(%rsp), %r15d
 4929      1C
 4930 0295 4585FF   		testl	%r15d, %r15d
 4931 0298 742C     		je	.L318
 4932              	.LVL563:
 588:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 4933              		.loc 3 588 0
 4934 029a F20F1084 		movsd	2624(%rsp), %xmm0
 4934      24400A00 
 4934      00
 4935 02a3 F2410F11 		movsd	%xmm0, (%r14)
 4935      06
 4936              	.LVL564:
 589:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 4937              		.loc 3 589 0
 4938 02a8 F20F1084 		movsd	2632(%rsp), %xmm0
 4938      24480A00 
 4938      00
 4939 02b1 F2410F11 		movsd	%xmm0, 0(%r13)
 4939      4500
 4940              	.LVL565:
 590:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 4941              		.loc 3 590 0
 4942 02b7 F20F1084 		movsd	2640(%rsp), %xmm0
 4942      24500A00 
 4942      00
 4943 02c0 F2410F11 		movsd	%xmm0, (%r12)
 4943      0424
 4944              	.LVL566:
 4945              	.L318:
 4946              	.LBB911:
 4947              	.LBB912:
 4948              		.file 13 "fltk-1.3.4-1/FL/Fl_Button.H"
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
 4949              		.loc 13 76 0
 4950 02c6 488DBC24 		leaq	416(%rsp), %rdi
 4950      A0010000 
 4951              	.LVL567:
 4952 02ce 48C78424 		movq	$_ZTV9Fl_Button+16, 416(%rsp)
 4952      A0010000 
 4952      00000000 
 4953 02da E8000000 		call	_ZN9Fl_WidgetD2Ev
 4953      00
 4954              	.LVL568:
 4955              	.LBE912:
 4956              	.LBE911:
 4957              	.LBB913:
 4958              	.LBB914:
 501:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 4959              		.loc 3 501 0
 4960 02df 488DBC24 		leaq	288(%rsp), %rdi
 4960      20010000 
 4961              	.LVL569:
 4962 02e7 48C78424 		movq	$_ZTV9ColorChip+16, 288(%rsp)
 4962      20010000 
 4962      00000000 
 4963 02f3 E8000000 		call	_ZN9Fl_WidgetD2Ev
 4963      00
 4964              	.LVL570:
 4965              	.LBE914:
 4966              	.LBE913:
 4967              	.LBB915:
 4968              	.LBB916:
 4969              	.LBB917:
 4970              	.LBB918:
 4971              		.loc 13 76 0
 4972 02f8 488DBC24 		leaq	160(%rsp), %rdi
 4972      A0000000 
 4973              	.LVL571:
 4974 0300 48C78424 		movq	$_ZTV9Fl_Button+16, 160(%rsp)
 4974      A0000000 
 4974      00000000 
 4975 030c E8000000 		call	_ZN9Fl_WidgetD2Ev
 4975      00
 4976              	.LVL572:
 4977              	.LBE918:
 4978              	.LBE917:
 4979              	.LBE916:
 4980              	.LBE915:
 4981              	.LBB919:
 4982              	.LBB920:
 501:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 4983              		.loc 3 501 0
 4984 0311 4889EF   		movq	%rbp, %rdi
 4985 0314 48C74424 		movq	$_ZTV9ColorChip+16, 32(%rsp)
 4985      20000000 
 4985      00
 4986 031d E8000000 		call	_ZN9Fl_WidgetD2Ev
 4986      00
 4987              	.LVL573:
 4988              	.LBE920:
 4989              	.LBE919:
 4990              	.LBB921:
 4991              	.LBB922:
 4992              	.LBB923:
 4993              	.LBB924:
 4994              		.loc 6 34 0
 4995 0322 488DBBA0 		leaq	1696(%rbx), %rdi
 4995      060000
 4996              	.LBE924:
 4997              	.LBE923:
 4998              		.loc 5 107 0
 4999 0329 48C78424 		movq	$_ZTV16Fl_Color_Chooser+16, 784(%rsp)
 4999      10030000 
 4999      00000000 
 5000              	.LVL574:
 5001              	.LBB926:
 5002              	.LBB925:
 5003              		.loc 6 34 0
 5004 0335 48C78424 		movq	$_ZTV6Fl_Box+16, 2480(%rsp)
 5004      B0090000 
 5004      00000000 
 5005 0341 E8000000 		call	_ZN9Fl_WidgetD2Ev
 5005      00
 5006              	.LVL575:
 5007              	.LBE925:
 5008              	.LBE926:
 5009              	.LBB927:
 5010              	.LBB928:
  62:fltk-1.3.4-1/FL/Fl_Color_Chooser.H **** public:
 5011              		.loc 5 62 0
 5012 0346 488DBB28 		leaq	1320(%rbx), %rdi
 5012      050000
 5013 034d 48C78424 		movq	$_ZTV16Flcc_Value_Input+16, 2104(%rsp)
 5013      38080000 
 5013      00000000 
 5014 0359 E8000000 		call	_ZN14Fl_Value_InputD2Ev
 5014      00
 5015              	.LVL576:
 5016              	.LBE928:
 5017              	.LBE927:
 5018              	.LBB929:
 5019              	.LBB930:
 5020 035e 488DBBB0 		leaq	944(%rbx), %rdi
 5020      030000
 5021 0365 48C78424 		movq	$_ZTV16Flcc_Value_Input+16, 1728(%rsp)
 5021      C0060000 
 5021      00000000 
 5022 0371 E8000000 		call	_ZN14Fl_Value_InputD2Ev
 5022      00
 5023              	.LVL577:
 5024              	.LBE930:
 5025              	.LBE929:
 5026              	.LBB931:
 5027              	.LBB932:
 5028 0376 488DBB38 		leaq	568(%rbx), %rdi
 5028      020000
 5029 037d 48C78424 		movq	$_ZTV16Flcc_Value_Input+16, 1352(%rsp)
 5029      48050000 
 5029      00000000 
 5030 0389 E8000000 		call	_ZN14Fl_Value_InputD2Ev
 5030      00
 5031              	.LVL578:
 5032              	.LBE932:
 5033              	.LBE931:
 5034              	.LBB933:
 5035              	.LBB934:
 5036              		.loc 7 83 0
 5037 038e 488DBBA0 		leaq	416(%rbx), %rdi
 5037      010000
 5038 0395 48C78424 		movq	$_ZTV9Fl_Choice+16, 1200(%rsp)
 5038      B0040000 
 5038      00000000 
 5039 03a1 E8000000 		call	_ZN8Fl_Menu_D2Ev
 5039      00
 5040              	.LVL579:
 5041              	.LBE934:
 5042              	.LBE933:
 5043              	.LBB935:
 5044              	.LBB936:
  50:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int py;
 5045              		.loc 5 50 0
 5046 03a6 488DBB20 		leaq	288(%rbx), %rdi
 5046      010000
 5047 03ad 48C78424 		movq	$_ZTV13Flcc_ValueBox+16, 1072(%rsp)
 5047      30040000 
 5047      00000000 
 5048 03b9 E8000000 		call	_ZN9Fl_WidgetD2Ev
 5048      00
 5049              	.LVL580:
 5050              	.LBE936:
 5051              	.LBE935:
 5052              	.LBB937:
 5053              	.LBB938:
  38:fltk-1.3.4-1/FL/Fl_Color_Chooser.H ****   int px, py;
 5054              		.loc 5 38 0
 5055 03be 488DBBA0 		leaq	160(%rbx), %rdi
 5055      000000
 5056 03c5 48C78424 		movq	$_ZTV11Flcc_HueBox+16, 944(%rsp)
 5056      B0030000 
 5056      00000000 
 5057 03d1 E8000000 		call	_ZN9Fl_WidgetD2Ev
 5057      00
 5058              	.LVL581:
 5059              	.LBE938:
 5060              	.LBE937:
 5061              		.loc 5 107 0
 5062 03d6 4889DF   		movq	%rbx, %rdi
 5063 03d9 E8000000 		call	_ZN8Fl_GroupD2Ev
 5063      00
 5064              	.LVL582:
 5065              	.LBE922:
 5066              	.LBE921:
 566:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 5067              		.loc 3 566 0
 5068 03de 488DBC24 		leaq	544(%rsp), %rdi
 5068      20020000 
 5069              	.LVL583:
 5070 03e6 E8000000 		call	_ZN9Fl_WindowD1Ev
 5070      00
 5071              	.LVL584:
 591:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 5072              		.loc 3 593 0
 5073 03eb 488B8C24 		movq	2648(%rsp), %rcx
 5073      580A0000 
 5074 03f3 6448330C 		xorq	%fs:40, %rcx
 5074      25280000 
 5074      00
 5075 03fc 4489F8   		movl	%r15d, %eax
 5076 03ff 7512     		jne	.L327
 5077 0401 4881C468 		addq	$2664, %rsp
 5077      0A0000
 5078              		.cfi_remember_state
 5079              		.cfi_def_cfa_offset 56
 5080 0408 5B       		popq	%rbx
 5081              		.cfi_def_cfa_offset 48
 5082              	.LVL585:
 5083 0409 5D       		popq	%rbp
 5084              		.cfi_def_cfa_offset 40
 5085 040a 415C     		popq	%r12
 5086              		.cfi_def_cfa_offset 32
 5087              	.LVL586:
 5088 040c 415D     		popq	%r13
 5089              		.cfi_def_cfa_offset 24
 5090              	.LVL587:
 5091 040e 415E     		popq	%r14
 5092              		.cfi_def_cfa_offset 16
 5093              	.LVL588:
 5094 0410 415F     		popq	%r15
 5095              		.cfi_def_cfa_offset 8
 5096 0412 C3       		ret
 5097              	.LVL589:
 5098              	.L327:
 5099              		.cfi_restore_state
 5100 0413 E8000000 		call	__stack_chk_fail
 5100      00
 5101              	.LVL590:
 5102              		.cfi_endproc
 5103              	.LFE656:
 5105              		.section	.text.unlikely._Z16fl_color_chooserPKcRdS1_S1_i
 5106              	.LCOLDE53:
 5107              		.section	.text._Z16fl_color_chooserPKcRdS1_S1_i
 5108              	.LHOTE53:
 5109              		.section	.text.unlikely._Z16fl_color_chooserPKcRhS1_S1_i,"ax",@progbits
 5110              	.LCOLDB54:
 5111              		.section	.text._Z16fl_color_chooserPKcRhS1_S1_i,"ax",@progbits
 5112              	.LHOTB54:
 5113              		.p2align 4,,15
 5114              		.globl	_Z16fl_color_chooserPKcRhS1_S1_i
 5116              	_Z16fl_color_chooserPKcRhS1_S1_i:
 5117              	.LFB657:
 594:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 5118              		.loc 3 607 0
 5119              		.cfi_startproc
 5120              	.LVL591:
 5121 0000 4154     		pushq	%r12
 5122              		.cfi_def_cfa_offset 16
 5123              		.cfi_offset 12, -16
 5124 0002 55       		pushq	%rbp
 5125              		.cfi_def_cfa_offset 24
 5126              		.cfi_offset 6, -24
 5127 0003 4989F4   		movq	%rsi, %r12
 5128 0006 53       		pushq	%rbx
 5129              		.cfi_def_cfa_offset 32
 5130              		.cfi_offset 3, -32
 608:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 5131              		.loc 3 608 0
 5132 0007 660FEFC9 		pxor	%xmm1, %xmm1
 607:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 5133              		.loc 3 607 0
 5134 000b 4889D5   		movq	%rdx, %rbp
 5135 000e 4889CB   		movq	%rcx, %rbx
 5136 0011 4883EC30 		subq	$48, %rsp
 5137              		.cfi_def_cfa_offset 80
 607:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 5138              		.loc 3 607 0
 5139 0015 64488B04 		movq	%fs:40, %rax
 5139      25280000 
 5139      00
 5140 001e 48894424 		movq	%rax, 40(%rsp)
 5140      28
 5141 0023 31C0     		xorl	%eax, %eax
 5142              		.loc 3 608 0
 5143 0025 0FB606   		movzbl	(%rsi), %eax
 5144 0028 F20F1005 		movsd	.LC4(%rip), %xmm0
 5144      00000000 
 609:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5145              		.loc 3 611 0
 5146 0030 488D7424 		leaq	16(%rsp), %rsi
 5146      10
 5147              	.LVL592:
 610:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5148              		.loc 3 610 0
 5149 0035 F20F1144 		movsd	%xmm0, 8(%rsp)
 5149      2408
 608:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5150              		.loc 3 608 0
 5151 003b F20F2AC8 		cvtsi2sd	%eax, %xmm1
 609:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5152              		.loc 3 609 0
 5153 003f 0FB602   		movzbl	(%rdx), %eax
 5154              		.loc 3 611 0
 5155 0042 488D5424 		leaq	24(%rsp), %rdx
 5155      18
 5156              	.LVL593:
 608:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5157              		.loc 3 608 0
 5158 0047 F20F5EC8 		divsd	%xmm0, %xmm1
 5159 004b F20F114C 		movsd	%xmm1, 16(%rsp)
 5159      2410
 609:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5160              		.loc 3 609 0
 5161 0051 660FEFC9 		pxor	%xmm1, %xmm1
 5162 0055 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 610:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5163              		.loc 3 610 0
 5164 0059 0FB601   		movzbl	(%rcx), %eax
 5165              		.loc 3 611 0
 5166 005c 488D4C24 		leaq	32(%rsp), %rcx
 5166      20
 5167              	.LVL594:
 609:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5168              		.loc 3 609 0
 5169 0061 F20F5EC8 		divsd	%xmm0, %xmm1
 5170 0065 F20F114C 		movsd	%xmm1, 24(%rsp)
 5170      2418
 610:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 5171              		.loc 3 610 0
 5172 006b 660FEFC9 		pxor	%xmm1, %xmm1
 5173 006f F20F2AC8 		cvtsi2sd	%eax, %xmm1
 5174 0073 F20F5EC8 		divsd	%xmm0, %xmm1
 5175 0077 F20F114C 		movsd	%xmm1, 32(%rsp)
 5175      2420
 5176              		.loc 3 611 0
 5177 007d E8000000 		call	_Z16fl_color_chooserPKcRdS1_S1_i
 5177      00
 5178              	.LVL595:
 5179 0082 85C0     		testl	%eax, %eax
 5180 0084 744E     		je	.L329
 612:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 5181              		.loc 3 612 0
 5182 0086 F20F1044 		movsd	8(%rsp), %xmm0
 5182      2408
 5183 008c F20F1054 		movsd	16(%rsp), %xmm2
 5183      2410
 5184 0092 F20F100D 		movsd	.LC5(%rip), %xmm1
 5184      00000000 
 5185 009a F20F59D0 		mulsd	%xmm0, %xmm2
 5186 009e F20F58D1 		addsd	%xmm1, %xmm2
 5187 00a2 F20F2CC2 		cvttsd2si	%xmm2, %eax
 613:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 5188              		.loc 3 613 0
 5189 00a6 F20F1054 		movsd	24(%rsp), %xmm2
 5189      2418
 5190 00ac F20F59D0 		mulsd	%xmm0, %xmm2
 614:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 5191              		.loc 3 614 0
 5192 00b0 F20F5944 		mulsd	32(%rsp), %xmm0
 5192      2420
 613:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 5193              		.loc 3 613 0
 5194 00b6 F20F58D1 		addsd	%xmm1, %xmm2
 5195              		.loc 3 614 0
 5196 00ba F20F58C1 		addsd	%xmm1, %xmm0
 612:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 5197              		.loc 3 612 0
 5198 00be 41880424 		movb	%al, (%r12)
 613:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 5199              		.loc 3 613 0
 5200 00c2 F20F2CC2 		cvttsd2si	%xmm2, %eax
 5201 00c6 884500   		movb	%al, 0(%rbp)
 5202              		.loc 3 614 0
 5203 00c9 F20F2CC0 		cvttsd2si	%xmm0, %eax
 5204 00cd 8803     		movb	%al, (%rbx)
 615:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 5205              		.loc 3 615 0
 5206 00cf B8010000 		movl	$1, %eax
 5206      00
 5207              	.L329:
 616:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Color_Chooser.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 5208              		.loc 3 618 0
 5209 00d4 488B7424 		movq	40(%rsp), %rsi
 5209      28
 5210 00d9 64483334 		xorq	%fs:40, %rsi
 5210      25280000 
 5210      00
 5211 00e2 7509     		jne	.L335
 5212 00e4 4883C430 		addq	$48, %rsp
 5213              		.cfi_remember_state
 5214              		.cfi_def_cfa_offset 32
 5215 00e8 5B       		popq	%rbx
 5216              		.cfi_def_cfa_offset 24
 5217              	.LVL596:
 5218 00e9 5D       		popq	%rbp
 5219              		.cfi_def_cfa_offset 16
 5220              	.LVL597:
 5221 00ea 415C     		popq	%r12
 5222              		.cfi_def_cfa_offset 8
 5223              	.LVL598:
 5224 00ec C3       		ret
 5225              	.LVL599:
 5226              	.L335:
 5227              		.cfi_restore_state
 5228 00ed E8000000 		call	__stack_chk_fail
 5228      00
 5229              	.LVL600:
 5230              		.cfi_endproc
 5231              	.LFE657:
 5233              		.section	.text.unlikely._Z16fl_color_chooserPKcRhS1_S1_i
 5234              	.LCOLDE54:
 5235              		.section	.text._Z16fl_color_chooserPKcRhS1_S1_i
 5236              	.LHOTE54:
 5237              		.section	.bss._ZZN13Flcc_ValueBox6handleEiE2iv,"aw",@nobits
 5238              		.align 8
 5241              	_ZZN13Flcc_ValueBox6handleEiE2iv:
 5242 0000 00000000 		.zero	8
 5242      00000000 
 5243              		.section	.bss._ZZN11Flcc_HueBox6handleEiE2is,"aw",@nobits
 5244              		.align 8
 5247              	_ZZN11Flcc_HueBox6handleEiE2is:
 5248 0000 00000000 		.zero	8
 5248      00000000 
 5249              		.section	.bss._ZZN11Flcc_HueBox6handleEiE2ih,"aw",@nobits
 5250              		.align 8
 5253              	_ZZN11Flcc_HueBox6handleEiE2ih:
 5254 0000 00000000 		.zero	8
 5254      00000000 
 5255              		.weak	_ZTS11Flcc_HueBox
 5256              		.section	.rodata._ZTS11Flcc_HueBox,"aG",@progbits,_ZTS11Flcc_HueBox,comdat
 5257              		.align 8
 5260              	_ZTS11Flcc_HueBox:
 5261 0000 3131466C 		.string	"11Flcc_HueBox"
 5261      63635F48 
 5261      7565426F 
 5261      7800
 5262              		.weak	_ZTI11Flcc_HueBox
 5263              		.section	.rodata._ZTI11Flcc_HueBox,"aG",@progbits,_ZTI11Flcc_HueBox,comdat
 5264              		.align 8
 5267              	_ZTI11Flcc_HueBox:
 5268 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5268      00000000 
 5269 0008 00000000 		.quad	_ZTS11Flcc_HueBox
 5269      00000000 
 5270 0010 00000000 		.quad	_ZTI9Fl_Widget
 5270      00000000 
 5271              		.weak	_ZTS13Flcc_ValueBox
 5272              		.section	.rodata._ZTS13Flcc_ValueBox,"aG",@progbits,_ZTS13Flcc_ValueBox,comdat
 5273              		.align 16
 5276              	_ZTS13Flcc_ValueBox:
 5277 0000 3133466C 		.string	"13Flcc_ValueBox"
 5277      63635F56 
 5277      616C7565 
 5277      426F7800 
 5278              		.weak	_ZTI13Flcc_ValueBox
 5279              		.section	.rodata._ZTI13Flcc_ValueBox,"aG",@progbits,_ZTI13Flcc_ValueBox,comdat
 5280              		.align 8
 5283              	_ZTI13Flcc_ValueBox:
 5284 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5284      00000000 
 5285 0008 00000000 		.quad	_ZTS13Flcc_ValueBox
 5285      00000000 
 5286 0010 00000000 		.quad	_ZTI9Fl_Widget
 5286      00000000 
 5287              		.weak	_ZTS16Flcc_Value_Input
 5288              		.section	.rodata._ZTS16Flcc_Value_Input,"aG",@progbits,_ZTS16Flcc_Value_Input,comdat
 5289              		.align 16
 5292              	_ZTS16Flcc_Value_Input:
 5293 0000 3136466C 		.string	"16Flcc_Value_Input"
 5293      63635F56 
 5293      616C7565 
 5293      5F496E70 
 5293      757400
 5294              		.weak	_ZTI16Flcc_Value_Input
 5295              		.section	.rodata._ZTI16Flcc_Value_Input,"aG",@progbits,_ZTI16Flcc_Value_Input,comdat
 5296              		.align 8
 5299              	_ZTI16Flcc_Value_Input:
 5300 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5300      00000000 
 5301 0008 00000000 		.quad	_ZTS16Flcc_Value_Input
 5301      00000000 
 5302 0010 00000000 		.quad	_ZTI14Fl_Value_Input
 5302      00000000 
 5303              		.weak	_ZTS16Fl_Color_Chooser
 5304              		.section	.rodata._ZTS16Fl_Color_Chooser,"aG",@progbits,_ZTS16Fl_Color_Chooser,comdat
 5305              		.align 16
 5308              	_ZTS16Fl_Color_Chooser:
 5309 0000 3136466C 		.string	"16Fl_Color_Chooser"
 5309      5F436F6C 
 5309      6F725F43 
 5309      686F6F73 
 5309      657200
 5310              		.weak	_ZTI16Fl_Color_Chooser
 5311              		.section	.rodata._ZTI16Fl_Color_Chooser,"aG",@progbits,_ZTI16Fl_Color_Chooser,comdat
 5312              		.align 8
 5315              	_ZTI16Fl_Color_Chooser:
 5316 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5316      00000000 
 5317 0008 00000000 		.quad	_ZTS16Fl_Color_Chooser
 5317      00000000 
 5318 0010 00000000 		.quad	_ZTI8Fl_Group
 5318      00000000 
 5319              		.weak	_ZTS9ColorChip
 5320              		.section	.rodata._ZTS9ColorChip,"aG",@progbits,_ZTS9ColorChip,comdat
 5321              		.align 8
 5324              	_ZTS9ColorChip:
 5325 0000 39436F6C 		.string	"9ColorChip"
 5325      6F724368 
 5325      697000
 5326              		.weak	_ZTI9ColorChip
 5327              		.section	.rodata._ZTI9ColorChip,"aG",@progbits,_ZTI9ColorChip,comdat
 5328              		.align 8
 5331              	_ZTI9ColorChip:
 5332 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 5332      00000000 
 5333 0008 00000000 		.quad	_ZTS9ColorChip
 5333      00000000 
 5334 0010 00000000 		.quad	_ZTI9Fl_Widget
 5334      00000000 
 5335              		.weak	_ZTV16Fl_Color_Chooser
 5336              		.section	.rodata._ZTV16Fl_Color_Chooser,"aG",@progbits,_ZTV16Fl_Color_Chooser,comdat
 5337              		.align 8
 5340              	_ZTV16Fl_Color_Chooser:
 5341 0000 00000000 		.quad	0
 5341      00000000 
 5342 0008 00000000 		.quad	_ZTI16Fl_Color_Chooser
 5342      00000000 
 5343 0010 00000000 		.quad	_ZN16Fl_Color_ChooserD1Ev
 5343      00000000 
 5344 0018 00000000 		.quad	_ZN16Fl_Color_ChooserD0Ev
 5344      00000000 
 5345 0020 00000000 		.quad	_ZN8Fl_Group4drawEv
 5345      00000000 
 5346 0028 00000000 		.quad	_ZN8Fl_Group6handleEi
 5346      00000000 
 5347 0030 00000000 		.quad	_ZN8Fl_Group6resizeEiiii
 5347      00000000 
 5348 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5348      00000000 
 5349 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5349      00000000 
 5350 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 5350      00000000 
 5351 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5351      00000000 
 5352 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5352      00000000 
 5353              		.weak	_ZTV16Flcc_Value_Input
 5354              		.section	.rodata._ZTV16Flcc_Value_Input,"aG",@progbits,_ZTV16Flcc_Value_Input,comdat
 5355              		.align 8
 5358              	_ZTV16Flcc_Value_Input:
 5359 0000 00000000 		.quad	0
 5359      00000000 
 5360 0008 00000000 		.quad	_ZTI16Flcc_Value_Input
 5360      00000000 
 5361 0010 00000000 		.quad	_ZN16Flcc_Value_InputD1Ev
 5361      00000000 
 5362 0018 00000000 		.quad	_ZN16Flcc_Value_InputD0Ev
 5362      00000000 
 5363 0020 00000000 		.quad	_ZN14Fl_Value_Input4drawEv
 5363      00000000 
 5364 0028 00000000 		.quad	_ZN14Fl_Value_Input6handleEi
 5364      00000000 
 5365 0030 00000000 		.quad	_ZN14Fl_Value_Input6resizeEiiii
 5365      00000000 
 5366 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5366      00000000 
 5367 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5367      00000000 
 5368 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5368      00000000 
 5369 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5369      00000000 
 5370 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5370      00000000 
 5371 0060 00000000 		.quad	_ZN14Fl_Value_Input12value_damageEv
 5371      00000000 
 5372 0068 00000000 		.quad	_ZN16Flcc_Value_Input6formatEPc
 5372      00000000 
 5373              		.weak	_ZTV11Flcc_HueBox
 5374              		.section	.rodata._ZTV11Flcc_HueBox,"aG",@progbits,_ZTV11Flcc_HueBox,comdat
 5375              		.align 8
 5378              	_ZTV11Flcc_HueBox:
 5379 0000 00000000 		.quad	0
 5379      00000000 
 5380 0008 00000000 		.quad	_ZTI11Flcc_HueBox
 5380      00000000 
 5381 0010 00000000 		.quad	_ZN11Flcc_HueBoxD1Ev
 5381      00000000 
 5382 0018 00000000 		.quad	_ZN11Flcc_HueBoxD0Ev
 5382      00000000 
 5383 0020 00000000 		.quad	_ZN11Flcc_HueBox4drawEv
 5383      00000000 
 5384 0028 00000000 		.quad	_ZN11Flcc_HueBox6handleEi
 5384      00000000 
 5385 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 5385      00000000 
 5386 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5386      00000000 
 5387 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5387      00000000 
 5388 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5388      00000000 
 5389 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5389      00000000 
 5390 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5390      00000000 
 5391              		.weak	_ZTV13Flcc_ValueBox
 5392              		.section	.rodata._ZTV13Flcc_ValueBox,"aG",@progbits,_ZTV13Flcc_ValueBox,comdat
 5393              		.align 8
 5396              	_ZTV13Flcc_ValueBox:
 5397 0000 00000000 		.quad	0
 5397      00000000 
 5398 0008 00000000 		.quad	_ZTI13Flcc_ValueBox
 5398      00000000 
 5399 0010 00000000 		.quad	_ZN13Flcc_ValueBoxD1Ev
 5399      00000000 
 5400 0018 00000000 		.quad	_ZN13Flcc_ValueBoxD0Ev
 5400      00000000 
 5401 0020 00000000 		.quad	_ZN13Flcc_ValueBox4drawEv
 5401      00000000 
 5402 0028 00000000 		.quad	_ZN13Flcc_ValueBox6handleEi
 5402      00000000 
 5403 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 5403      00000000 
 5404 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5404      00000000 
 5405 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5405      00000000 
 5406 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5406      00000000 
 5407 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5407      00000000 
 5408 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5408      00000000 
 5409              		.weak	_ZTV9ColorChip
 5410              		.section	.rodata._ZTV9ColorChip,"aG",@progbits,_ZTV9ColorChip,comdat
 5411              		.align 8
 5414              	_ZTV9ColorChip:
 5415 0000 00000000 		.quad	0
 5415      00000000 
 5416 0008 00000000 		.quad	_ZTI9ColorChip
 5416      00000000 
 5417 0010 00000000 		.quad	_ZN9ColorChipD1Ev
 5417      00000000 
 5418 0018 00000000 		.quad	_ZN9ColorChipD0Ev
 5418      00000000 
 5419 0020 00000000 		.quad	_ZN9ColorChip4drawEv
 5419      00000000 
 5420 0028 00000000 		.quad	_ZN9Fl_Widget6handleEi
 5420      00000000 
 5421 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 5421      00000000 
 5422 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 5422      00000000 
 5423 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 5423      00000000 
 5424 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 5424      00000000 
 5425 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 5425      00000000 
 5426 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 5426      00000000 
 5427              		.section	.bss._ZL2tb,"aw",@nobits
 5428              		.align 8
 5431              	_ZL2tb:
 5432 0000 00000000 		.zero	8
 5432      00000000 
 5433              		.section	.bss._ZL2tg,"aw",@nobits
 5434              		.align 8
 5437              	_ZL2tg:
 5438 0000 00000000 		.zero	8
 5438      00000000 
 5439              		.section	.bss._ZL2tr,"aw",@nobits
 5440              		.align 8
 5443              	_ZL2tr:
 5444 0000 00000000 		.zero	8
 5444      00000000 
 5445              		.section	.rodata.str1.1
 5446              	.LC55:
 5447 0007 72676200 		.string	"rgb"
 5448              	.LC56:
 5449 000b 62797465 		.string	"byte"
 5449      00
 5450              	.LC57:
 5451 0010 68657800 		.string	"hex"
 5452              	.LC58:
 5453 0014 68737600 		.string	"hsv"
 5454              		.section	.rodata._ZL9mode_menu,"a",@progbits
 5455              		.align 32
 5458              	_ZL9mode_menu:
 5459 0000 00000000 		.quad	.LC55
 5459      00000000 
 5460 0008 00000000 		.zero	48
 5460      00000000 
 5460      00000000 
 5460      00000000 
 5460      00000000 
 5461 0038 00000000 		.quad	.LC56
 5461      00000000 
 5462 0040 00000000 		.zero	48
 5462      00000000 
 5462      00000000 
 5462      00000000 
 5462      00000000 
 5463 0070 00000000 		.quad	.LC57
 5463      00000000 
 5464 0078 00000000 		.zero	48
 5464      00000000 
 5464      00000000 
 5464      00000000 
 5464      00000000 
 5465 00a8 00000000 		.quad	.LC58
 5465      00000000 
 5466 00b0 00000000 		.zero	48
 5466      00000000 
 5466      00000000 
 5466      00000000 
 5466      00000000 
 5467 00e0 00000000 		.quad	0
 5467      00000000 
 5468 00e8 00000000 		.zero	48
 5468      00000000 
 5468      00000000 
 5468      00000000 
 5468      00000000 
 5469              		.section	.rodata.cst8,"aM",@progbits,8
 5470              		.align 8
 5471              	.LC4:
 5472 0000 00000000 		.long	0
 5473 0004 00E06F40 		.long	1081073664
 5474              		.align 8
 5475              	.LC5:
 5476 0008 00000000 		.long	0
 5477 000c 0000E03F 		.long	1071644672
 5478              		.align 8
 5479              	.LC7:
 5480 0010 00000000 		.long	0
 5481 0014 0000F03F 		.long	1072693248
 5482              		.align 8
 5483              	.LC9:
 5484 0018 C4ACAEA4 		.long	2762910916
 5485 001c C88EEE3F 		.long	1072598728
 5486              		.align 8
 5487              	.LC11:
 5488 0020 00000000 		.long	0
 5489 0024 00001840 		.long	1075314688
 5490              		.align 8
 5491              	.LC13:
 5492 0028 65732D38 		.long	942502757
 5493 002c 52C1F03F 		.long	1072742738
 5494              		.align 8
 5495              	.LC27:
 5496 0030 F168E388 		.long	2296604913
 5497 0034 B5F8D43E 		.long	1054144693
 5498              		.align 8
 5499              	.LC33:
 5500 0038 00000000 		.long	0
 5501 003c 00000040 		.long	1073741824
 5502              		.align 8
 5503              	.LC34:
 5504 0040 00000000 		.long	0
 5505 0044 00001040 		.long	1074790400
 5506              		.align 8
 5507              	.LC37:
 5508 0048 00000000 		.long	0
 5509 004c 0000F0BF 		.long	-1074790400
 5510              		.section	.rodata.cst16,"aM",@progbits,16
 5511              		.align 16
 5512              	.LC43:
 5513 0000 FFFFFFFF 		.long	4294967295
 5514 0004 FFFFFF7F 		.long	2147483647
 5515 0008 00000000 		.long	0
 5516 000c 00000000 		.long	0
 5517              		.section	.rodata.cst8
 5518              		.align 8
 5519              	.LC44:
 5520 0050 00000000 		.long	0
 5521 0054 00003240 		.long	1077018624
 5522              		.align 8
 5523              	.LC45:
 5524 0058 00000000 		.long	0
 5525 005c 00000840 		.long	1074266112
 5526              		.text
 5527              	.Letext0:
 5528              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 5529              	.Letext_cold0:
 5530              		.file 14 "fltk-1.3.4-1/FL/fl_types.h"
 5531              		.file 15 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 5532              		.file 16 "/usr/include/x86_64-linux-gnu/bits/types.h"
 5533              		.file 17 "/usr/include/libio.h"
 5534              		.file 18 "fltk-1.3.4-1/FL/Enumerations.H"
 5535              		.file 19 "fltk-1.3.4-1/FL/Fl_Image.H"
 5536              		.file 20 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
 5537              		.file 21 "fltk-1.3.4-1/FL/Fl_Device.H"
 5538              		.file 22 "fltk-1.3.4-1/FL/Fl_Return_Button.H"
 5539              		.file 23 "/usr/include/stdio.h"
 5540              		.file 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Color_Chooser.cxx
     /tmp/ccQuZdon.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccQuZdon.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccQuZdon.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccQuZdon.s:89     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccQuZdon.s:111    .text._ZL10chooser_cbP9Fl_WidgetPv:0000000000000000 _ZL10chooser_cbP9Fl_WidgetPv
     /tmp/ccQuZdon.s:163    .text._ZL15generate_vimagePviiiPh:0000000000000000 _ZL15generate_vimagePviiiPh
     /tmp/ccQuZdon.s:5443   .bss._ZL2tr:0000000000000000 _ZL2tr
     /tmp/ccQuZdon.s:5437   .bss._ZL2tg:0000000000000000 _ZL2tg
     /tmp/ccQuZdon.s:5431   .bss._ZL2tb:0000000000000000 _ZL2tb
     /tmp/ccQuZdon.s:298    .text._ZL4tohsddRdS_:0000000000000000 _ZL4tohsddRdS_
     /tmp/ccQuZdon.s:395    .text._ZN11Flcc_HueBox4drawEv:0000000000000000 _ZN11Flcc_HueBox4drawEv
     /tmp/ccQuZdon.s:1344   .text._ZL14generate_imagePviiiPh:0000000000000000 _ZL14generate_imagePviiiPh
     /tmp/ccQuZdon.s:673    .text._ZN13Flcc_ValueBoxD2Ev:0000000000000000 _ZN13Flcc_ValueBoxD2Ev
     /tmp/ccQuZdon.s:5396   .rodata._ZTV13Flcc_ValueBox:0000000000000000 _ZTV13Flcc_ValueBox
     /tmp/ccQuZdon.s:673    .text._ZN13Flcc_ValueBoxD2Ev:0000000000000000 _ZN13Flcc_ValueBoxD1Ev
     /tmp/ccQuZdon.s:703    .text._ZN13Flcc_ValueBoxD0Ev:0000000000000000 _ZN13Flcc_ValueBoxD0Ev
     /tmp/ccQuZdon.s:742    .text._ZN11Flcc_HueBoxD2Ev:0000000000000000 _ZN11Flcc_HueBoxD2Ev
     /tmp/ccQuZdon.s:5378   .rodata._ZTV11Flcc_HueBox:0000000000000000 _ZTV11Flcc_HueBox
     /tmp/ccQuZdon.s:742    .text._ZN11Flcc_HueBoxD2Ev:0000000000000000 _ZN11Flcc_HueBoxD1Ev
     /tmp/ccQuZdon.s:771    .text._ZN11Flcc_HueBoxD0Ev:0000000000000000 _ZN11Flcc_HueBoxD0Ev
     /tmp/ccQuZdon.s:810    .text._ZN9ColorChipD2Ev:0000000000000000 _ZN9ColorChipD2Ev
     /tmp/ccQuZdon.s:5414   .rodata._ZTV9ColorChip:0000000000000000 _ZTV9ColorChip
     /tmp/ccQuZdon.s:810    .text._ZN9ColorChipD2Ev:0000000000000000 _ZN9ColorChipD1Ev
     /tmp/ccQuZdon.s:839    .text._ZN9ColorChipD0Ev:0000000000000000 _ZN9ColorChipD0Ev
     /tmp/ccQuZdon.s:878    .text._ZN16Flcc_Value_InputD2Ev:0000000000000000 _ZN16Flcc_Value_InputD2Ev
     /tmp/ccQuZdon.s:5358   .rodata._ZTV16Flcc_Value_Input:0000000000000000 _ZTV16Flcc_Value_Input
     /tmp/ccQuZdon.s:878    .text._ZN16Flcc_Value_InputD2Ev:0000000000000000 _ZN16Flcc_Value_InputD1Ev
     /tmp/ccQuZdon.s:907    .text._ZN16Flcc_Value_InputD0Ev:0000000000000000 _ZN16Flcc_Value_InputD0Ev
     /tmp/ccQuZdon.s:946    .text._ZN16Fl_Color_ChooserD2Ev:0000000000000000 _ZN16Fl_Color_ChooserD2Ev
     /tmp/ccQuZdon.s:5340   .rodata._ZTV16Fl_Color_Chooser:0000000000000000 _ZTV16Fl_Color_Chooser
     /tmp/ccQuZdon.s:946    .text._ZN16Fl_Color_ChooserD2Ev:0000000000000000 _ZN16Fl_Color_ChooserD1Ev
     /tmp/ccQuZdon.s:1057   .text._ZN9ColorChip4drawEv:0000000000000000 _ZN9ColorChip4drawEv
     /tmp/ccQuZdon.s:1179   .text._ZL8cc_ok_cbP9Fl_WidgetPv:0000000000000000 _ZL8cc_ok_cbP9Fl_WidgetPv
     /tmp/ccQuZdon.s:1215   .text._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27:0000000000000000 _ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_.part.27
     /tmp/ccQuZdon.s:1590   .text._ZN13Flcc_ValueBox4drawEv:0000000000000000 _ZN13Flcc_ValueBox4drawEv
     /tmp/ccQuZdon.s:1850   .text._ZL12cc_cancel_cbP9Fl_WidgetPv:0000000000000000 _ZL12cc_cancel_cbP9Fl_WidgetPv
     /tmp/ccQuZdon.s:1921   .text._ZN16Fl_Color_ChooserD0Ev:0000000000000000 _ZN16Fl_Color_ChooserD0Ev
     /tmp/ccQuZdon.s:2031   .text._ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_:0000000000000000 _ZN16Fl_Color_Chooser7hsv2rgbEdddRdS0_S0_
     /tmp/ccQuZdon.s:2070   .text._ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_:0000000000000000 _ZN16Fl_Color_Chooser7rgb2hsvEdddRdS0_S0_
     /tmp/ccQuZdon.s:2194   .text._ZN16Fl_Color_Chooser13set_valuatorsEv:0000000000000000 _ZN16Fl_Color_Chooser13set_valuatorsEv
     /tmp/ccQuZdon.s:2617   .text._ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv:0000000000000000 _ZN16Fl_Color_Chooser7mode_cbEP9Fl_WidgetPv
     /tmp/ccQuZdon.s:2667   .text._ZN16Fl_Color_Chooser3rgbEddd:0000000000000000 _ZN16Fl_Color_Chooser3rgbEddd
     /tmp/ccQuZdon.s:2816   .text._ZN16Fl_Color_Chooser3hsvEddd:0000000000000000 _ZN16Fl_Color_Chooser3hsvEddd
     /tmp/ccQuZdon.s:3083   .text._ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv:0000000000000000 _ZN16Fl_Color_Chooser6rgb_cbEP9Fl_WidgetPv
     /tmp/ccQuZdon.s:3213   .text._ZN11Flcc_HueBox10handle_keyEi:0000000000000000 _ZN11Flcc_HueBox10handle_keyEi
     /tmp/ccQuZdon.s:3443   .text._ZN11Flcc_HueBox6handleEi:0000000000000000 _ZN11Flcc_HueBox6handleEi
     /tmp/ccQuZdon.s:5253   .bss._ZZN11Flcc_HueBox6handleEiE2ih:0000000000000000 _ZZN11Flcc_HueBox6handleEiE2ih
     /tmp/ccQuZdon.s:5247   .bss._ZZN11Flcc_HueBox6handleEiE2is:0000000000000000 _ZZN11Flcc_HueBox6handleEiE2is
     /tmp/ccQuZdon.s:3742   .text._ZN13Flcc_ValueBox10handle_keyEi:0000000000000000 _ZN13Flcc_ValueBox10handle_keyEi
     /tmp/ccQuZdon.s:3887   .text._ZN13Flcc_ValueBox6handleEi:0000000000000000 _ZN13Flcc_ValueBox6handleEi
     /tmp/ccQuZdon.s:5241   .bss._ZZN13Flcc_ValueBox6handleEiE2iv:0000000000000000 _ZZN13Flcc_ValueBox6handleEiE2iv
     /tmp/ccQuZdon.s:4154   .text._ZN16Fl_Color_Chooser4modeEi:0000000000000000 _ZN16Fl_Color_Chooser4modeEi
     /tmp/ccQuZdon.s:4222   .text._ZN16Fl_Color_ChooserC2EiiiiPKc:0000000000000000 _ZN16Fl_Color_ChooserC2EiiiiPKc
     /tmp/ccQuZdon.s:5458   .rodata._ZL9mode_menu:0000000000000000 _ZL9mode_menu
     /tmp/ccQuZdon.s:4222   .text._ZN16Fl_Color_ChooserC2EiiiiPKc:0000000000000000 _ZN16Fl_Color_ChooserC1EiiiiPKc
     /tmp/ccQuZdon.s:4555   .text._ZN16Flcc_Value_Input6formatEPc:0000000000000000 _ZN16Flcc_Value_Input6formatEPc
     /tmp/ccQuZdon.s:4627   .text._Z16fl_color_chooserPKcRdS1_S1_i:0000000000000000 _Z16fl_color_chooserPKcRdS1_S1_i
     /tmp/ccQuZdon.s:5116   .text._Z16fl_color_chooserPKcRhS1_S1_i:0000000000000000 _Z16fl_color_chooserPKcRhS1_S1_i
     /tmp/ccQuZdon.s:5260   .rodata._ZTS11Flcc_HueBox:0000000000000000 _ZTS11Flcc_HueBox
     /tmp/ccQuZdon.s:5267   .rodata._ZTI11Flcc_HueBox:0000000000000000 _ZTI11Flcc_HueBox
     /tmp/ccQuZdon.s:5276   .rodata._ZTS13Flcc_ValueBox:0000000000000000 _ZTS13Flcc_ValueBox
     /tmp/ccQuZdon.s:5283   .rodata._ZTI13Flcc_ValueBox:0000000000000000 _ZTI13Flcc_ValueBox
     /tmp/ccQuZdon.s:5292   .rodata._ZTS16Flcc_Value_Input:0000000000000000 _ZTS16Flcc_Value_Input
     /tmp/ccQuZdon.s:5299   .rodata._ZTI16Flcc_Value_Input:0000000000000000 _ZTI16Flcc_Value_Input
     /tmp/ccQuZdon.s:5308   .rodata._ZTS16Fl_Color_Chooser:0000000000000000 _ZTS16Fl_Color_Chooser
     /tmp/ccQuZdon.s:5315   .rodata._ZTI16Fl_Color_Chooser:0000000000000000 _ZTI16Fl_Color_Chooser
     /tmp/ccQuZdon.s:5324   .rodata._ZTS9ColorChip:0000000000000000 _ZTS9ColorChip
     /tmp/ccQuZdon.s:5331   .rodata._ZTI9ColorChip:0000000000000000 _ZTI9ColorChip
     /tmp/ccQuZdon.s:5471   .rodata.cst8:0000000000000000 .LC4
     /tmp/ccQuZdon.s:5475   .rodata.cst8:0000000000000008 .LC5
     /tmp/ccQuZdon.s:5479   .rodata.cst8:0000000000000010 .LC7
     /tmp/ccQuZdon.s:5483   .rodata.cst8:0000000000000018 .LC9
     /tmp/ccQuZdon.s:5487   .rodata.cst8:0000000000000020 .LC11
     /tmp/ccQuZdon.s:5491   .rodata.cst8:0000000000000028 .LC13
     /tmp/ccQuZdon.s:5495   .rodata.cst8:0000000000000030 .LC27
     /tmp/ccQuZdon.s:5503   .rodata.cst8:0000000000000040 .LC34
     /tmp/ccQuZdon.s:5499   .rodata.cst8:0000000000000038 .LC33
     /tmp/ccQuZdon.s:5507   .rodata.cst8:0000000000000048 .LC37
     /tmp/ccQuZdon.s:5519   .rodata.cst8:0000000000000050 .LC44
     /tmp/ccQuZdon.s:5512   .rodata.cst16:0000000000000000 .LC43
     /tmp/ccQuZdon.s:5523   .rodata.cst8:0000000000000058 .LC45
                           .group:0000000000000000 _ZN13Flcc_ValueBoxD5Ev
                           .group:0000000000000000 _ZN11Flcc_HueBoxD5Ev
                           .group:0000000000000000 _ZN9ColorChipD5Ev
                           .group:0000000000000000 _ZN16Flcc_Value_InputD5Ev
                           .group:0000000000000000 _ZN16Fl_Color_ChooserD5Ev
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
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
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
_ZN9Fl_Widget6damageEh
_ZN2Fl6box_dhE10Fl_Boxtype
atan2
sqrt
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
fl_graphics_driver
sincos
_ZN2Fl6focus_E
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_ZNK9Fl_Widget8draw_boxEv
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN14Fl_Value_InputD2Ev
_ZTV6Fl_Box
_ZTV9Fl_Choice
_ZN8Fl_Menu_D2Ev
_ZN8Fl_GroupD2Ev
_Z8fl_rectfiiiihhh
_ZNK9Fl_Widget6windowEv
__stack_chk_fail
_ZN11Fl_Valuator5valueEd
fmod
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZN2Fl6optionENS_9Fl_OptionE
_ZN2Fl5focusEP9Fl_Widget
_ZN9Fl_Widget6redrawEv
_ZN2Fl3e_xE
_ZN2Fl3e_yE
_ZN2Fl7e_stateE
_ZN2Fl8e_keysymE
_ZN9Fl_Choice5valueEi
_ZN8Fl_GroupC2EiiiiPKc
_ZN9Fl_WidgetC2EiiiiPKc
_ZN9Fl_ChoiceC1EiiiiPKc
_ZN14Fl_Value_InputC2EiiiiPKc
_ZN6Fl_BoxC1EiiiiPKc
_ZN8Fl_Group3endEv
_ZN8Fl_Group6resizeEiiii
_ZN8Fl_Menu_4menuEPK12Fl_Menu_Item
_ZN11Fl_Valuator6formatEPc
__sprintf_chk
_ZN9Fl_WindowC1EiiPKc
fl_ok
_ZN16Fl_Return_ButtonC1EiiiiPKc
fl_cancel
_ZN9Fl_ButtonC1EiiiiPKc
_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
_ZN9Fl_Window4showEv
_ZN2Fl4waitEv
_ZTV9Fl_Button
_ZN9Fl_WindowD1Ev
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Widget
_ZTI14Fl_Value_Input
_ZTI8Fl_Group
_ZN8Fl_Group4drawEv
_ZN8Fl_Group6handleEi
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
_ZN14Fl_Value_Input4drawEv
_ZN14Fl_Value_Input6handleEi
_ZN14Fl_Value_Input6resizeEiiii
_ZN14Fl_Value_Input12value_damageEv
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget6handleEi
