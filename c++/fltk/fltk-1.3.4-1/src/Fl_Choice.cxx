   1              		.file	"Fl_Choice.cxx"
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
  83              	.LC4:
  84 0005 676C6561 		.string	"gleam"
  84      6D00
  85              	.LC5:
  86 000b 706C6173 		.string	"plastic"
  86      74696300 
  87              		.section	.text.unlikely._ZN9Fl_Choice4drawEv,"ax",@progbits
  88              		.align 2
  89              	.LCOLDB7:
  90              		.section	.text._ZN9Fl_Choice4drawEv,"ax",@progbits
  91              	.LHOTB7:
  92              		.align 2
  93              		.p2align 4,,15
  94              		.globl	_ZN9Fl_Choice4drawEv
  96              	_ZN9Fl_Choice4drawEv:
  97              	.LFB553:
  98              		.file 2 "fltk-1.3.4-1/src/Fl_Choice.cxx"
   1:fltk-1.3.4-1/src/Fl_Choice.cxx ****    1              		.file	"Fl_Choice.cxx"
   2:fltk-1.3.4-1/src/Fl_Choice.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Choice.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Choice.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Choice.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Choice.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Choice.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Choice.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Choice.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Choice.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Choice.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Choice.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Choice.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Choice.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Choice.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Choice.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Choice.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Choice.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Choice.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Choice.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Choice.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Choice.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Choice.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Choice.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Choice.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Choice.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Choice.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Choice.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  99              		.loc 2 28 0
 100              		.cfi_startproc
 101              	.LVL3:
 102 0000 4157     		pushq	%r15
 103              		.cfi_def_cfa_offset 16
 104              		.cfi_offset 15, -16
 105 0002 4156     		pushq	%r14
 106              		.cfi_def_cfa_offset 24
 107              		.cfi_offset 14, -24
 108 0004 4989FF   		movq	%rdi, %r15
 109 0007 4155     		pushq	%r13
 110              		.cfi_def_cfa_offset 32
 111              		.cfi_offset 13, -32
 112 0009 4154     		pushq	%r12
 113              		.cfi_def_cfa_offset 40
 114              		.cfi_offset 12, -40
 115 000b 55       		pushq	%rbp
 116              		.cfi_def_cfa_offset 48
 117              		.cfi_offset 6, -48
 118 000c 53       		pushq	%rbx
 119              		.cfi_def_cfa_offset 56
 120              		.cfi_offset 3, -56
 121 000d 4881EC98 		subq	$152, %rsp
 121      000000
 122              		.cfi_def_cfa_offset 208
 123              		.loc 2 28 0
 124 0014 64488B04 		movq	%fs:40, %rax
 124      25280000 
 124      00
 125 001d 48898424 		movq	%rax, 136(%rsp)
 125      88000000 
 126 0025 31C0     		xorl	%eax, %eax
  29:fltk-1.3.4-1/src/Fl_Choice.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Choice.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 127              		.loc 2 30 0
 128 0027 48833D00 		cmpq	$1, _ZN2Fl7scheme_E(%rip)
 128      00000001 
 129 002f 4519ED   		sbbl	%r13d, %r13d
 130 0032 41F7D5   		notl	%r13d
 131 0035 4183C503 		addl	$3, %r13d
 132              	.LVL4:
  31:fltk-1.3.4-1/src/Fl_Choice.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
 133              		.loc 2 31 0
 134 0039 4489EF   		movl	%r13d, %edi
 135              	.LVL5:
 136 003c E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 136      00
 137              	.LVL6:
  32:fltk-1.3.4-1/src/Fl_Choice.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 138              		.loc 2 32 0
 139 0041 4489EF   		movl	%r13d, %edi
  31:fltk-1.3.4-1/src/Fl_Choice.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
 140              		.loc 2 31 0
 141 0044 4189C4   		movl	%eax, %r12d
 142              	.LVL7:
 143              		.loc 2 32 0
 144 0047 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 144      00
 145              	.LVL8:
  33:fltk-1.3.4-1/src/Fl_Choice.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Choice.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Choice.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 146              		.loc 2 35 0
 147 004c 418B4F2C 		movl	44(%r15), %ecx
 148              	.LBB316:
 149              	.LBB317:
 150              		.file 3 "fltk-1.3.4-1/FL/Fl.H"
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
 151              		.loc 3 369 0
 152 0050 4C8B0D00 		movq	_ZN2Fl7scheme_E(%rip), %r9
 152      000000
 153              	.LBE317:
 154              	.LBE316:
  32:fltk-1.3.4-1/src/Fl_Choice.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 155              		.loc 2 32 0
 156 0057 89C5     		movl	%eax, %ebp
 157              	.LVL9:
 158              		.loc 2 35 0
 159 0059 01C0     		addl	%eax, %eax
 160              	.LVL10:
 161 005b 29C1     		subl	%eax, %ecx
 162              	.LBB320:
 163              	.LBB318:
 164              		.loc 3 369 0
 165 005d 4D85C9   		testq	%r9, %r9
 166              	.LBE318:
 167              	.LBE320:
 168              		.loc 2 35 0
 169 0060 894C2408 		movl	%ecx, 8(%rsp)
 170              	.LVL11:
 171              	.LBB321:
 172              	.LBB319:
 173              		.loc 3 369 0
 174 0064 0F846303 		je	.L6
 174      0000
 175 006a BE000000 		movl	$.LC3, %esi
 175      00
 176 006f B9050000 		movl	$5, %ecx
 176      00
 177              	.LVL12:
 178 0074 4C89CF   		movq	%r9, %rdi
 179 0077 F3A6     		repz cmpsb
 180 0079 0F853903 		jne	.L58
 180      0000
 181              	.LVL13:
 182              	.L7:
 183              	.LBE319:
 184              	.LBE321:
  36:fltk-1.3.4-1/src/Fl_Choice.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Choice.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Choice.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Choice.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Choice.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Choice.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Choice.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Choice.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Choice.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Choice.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 185              		.loc 2 45 0
 186 007f 418B4728 		movl	40(%r15), %eax
 187 0083 41034720 		addl	32(%r15), %eax
  44:fltk-1.3.4-1/src/Fl_Choice.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 188              		.loc 2 44 0
 189 0087 41BE0500 		movl	$5, %r14d
 189      0000
  46:fltk-1.3.4-1/src/Fl_Choice.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 190              		.loc 2 46 0
 191 008d C7442410 		movl	$20, 16(%rsp)
 191      14000000 
 192 0095 C7442414 		movl	$10, 20(%rsp)
 192      0A000000 
  45:fltk-1.3.4-1/src/Fl_Choice.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 193              		.loc 2 45 0
 194 009d 4429E0   		subl	%r12d, %eax
 195 00a0 83E810   		subl	$16, %eax
 196 00a3 8944240C 		movl	%eax, 12(%rsp)
 197              	.LVL14:
 198              		.loc 2 46 0
 199 00a7 8B442408 		movl	8(%rsp), %eax
 200              	.LVL15:
 201 00ab 83E806   		subl	$6, %eax
 202 00ae 89C3     		movl	%eax, %ebx
 203 00b0 C1EB1F   		shrl	$31, %ebx
 204 00b3 01D8     		addl	%ebx, %eax
 205 00b5 418B5F24 		movl	36(%r15), %ebx
 206 00b9 D1F8     		sarl	%eax
 207 00bb 01EB     		addl	%ebp, %ebx
 208              	.LVL16:
 209 00bd 01C3     		addl	%eax, %ebx
 210              	.LVL17:
 211              	.L32:
  47:fltk-1.3.4-1/src/Fl_Choice.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Choice.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Choice.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Choice.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Choice.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Choice.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 212              		.loc 2 52 0
 213 00bf 418B5764 		movl	100(%r15), %edx
 214 00c3 4489EE   		movl	%r13d, %esi
 215 00c6 4C89FF   		movq	%r15, %rdi
 216 00c9 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
 216      00
 217              	.LVL18:
  53:fltk-1.3.4-1/src/Fl_Choice.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Choice.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Choice.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 218              		.loc 2 55 0
 219 00ce 4C89FF   		movq	%r15, %rdi
 220 00d1 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 220      00
 221              	.LVL19:
 222 00d6 85C0     		testl	%eax, %eax
 223 00d8 0F84F204 		je	.L9
 223      0000
 224 00de 418B7750 		movl	80(%r15), %esi
 225              	.LVL20:
 226              	.L10:
 227              	.LBB322:
 228              	.LBB323:
 229              		.file 4 "fltk-1.3.4-1/FL/fl_draw.H"
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
 230              		.loc 4 52 0 discriminator 4
 231 00e2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 231      000000
 232 00e9 488B17   		movq	(%rdi), %rdx
 233 00ec FF928800 		call	*136(%rdx)
 233      0000
 234              	.LVL21:
 235              	.LBE323:
 236              	.LBE322:
 237              	.LBB324:
 238              	.LBB325:
 239              		.loc 3 369 0 discriminator 4
 240 00f2 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 240      000000
 241 00f9 4885FF   		testq	%rdi, %rdi
 242 00fc 7412     		je	.L11
 243              		.loc 3 369 0 is_stmt 0
 244 00fe BE000000 		movl	$.LC5, %esi
 244      00
 245 0103 B9080000 		movl	$8, %ecx
 245      00
 246 0108 F3A6     		repz cmpsb
 247 010a 0F843004 		je	.L12
 247      0000
 248              	.L11:
 249              	.LVL22:
 250              	.LBE325:
 251              	.LBE324:
  56:fltk-1.3.4-1/src/Fl_Choice.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Choice.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Choice.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Choice.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Choice.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Choice.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Choice.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Choice.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 252              		.loc 2 63 0 is_stmt 1
 253 0110 418B472C 		movl	44(%r15), %eax
  62:fltk-1.3.4-1/src/Fl_Choice.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 254              		.loc 2 62 0
 255 0114 458B6F28 		movl	40(%r15), %r13d
 256              	.LVL23:
 257              	.LBB326:
 258              	.LBB327:
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
 259              		.loc 4 244 0
 260 0118 4883EC08 		subq	$8, %rsp
 261              		.cfi_def_cfa_offset 216
 262              	.LBE327:
 263              	.LBE326:
  62:fltk-1.3.4-1/src/Fl_Choice.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 264              		.loc 2 62 0
 265 011c 45036F20 		addl	32(%r15), %r13d
 266              	.LBB331:
 267              	.LBB328:
 268              		.loc 4 244 0
 269 0120 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 269      000000
 270              	.LBE328:
 271              	.LBE331:
 272              		.loc 2 63 0
 273 0127 89C3     		movl	%eax, %ebx
 274              	.LVL24:
 275 0129 C1EB1F   		shrl	$31, %ebx
 276 012c 01D8     		addl	%ebx, %eax
  62:fltk-1.3.4-1/src/Fl_Choice.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 277              		.loc 2 62 0
 278 012e 4183ED0D 		subl	$13, %r13d
 279              		.loc 2 63 0
 280 0132 D1F8     		sarl	%eax
 281 0134 41034724 		addl	36(%r15), %eax
  62:fltk-1.3.4-1/src/Fl_Choice.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
 282              		.loc 2 62 0
 283 0138 4529E5   		subl	%r12d, %r13d
 284              	.LVL25:
  64:fltk-1.3.4-1/src/Fl_Choice.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 285              		.loc 2 64 0
 286 013b 458D5506 		leal	6(%r13), %r10d
 287 013f 458D7503 		leal	3(%r13), %r14d
 288              	.LVL26:
 289              	.LBB332:
 290              	.LBB329:
 291              		.loc 4 244 0
 292 0143 4489EE   		movl	%r13d, %esi
 293 0146 4589D1   		movl	%r10d, %r9d
 294 0149 4489F1   		movl	%r14d, %ecx
 295              	.LBE329:
 296              	.LBE332:
 297              		.loc 2 64 0
 298 014c 8D50FE   		leal	-2(%rax), %edx
  63:fltk-1.3.4-1/src/Fl_Choice.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 299              		.loc 2 63 0
 300 014f 89C3     		movl	%eax, %ebx
 301              	.LVL27:
 302              	.LBB333:
 303              	.LBB330:
 304              		.loc 4 244 0
 305 0151 488B07   		movq	(%rdi), %rax
 306              	.LVL28:
 307 0154 448D43FB 		leal	-5(%rbx), %r8d
 308              	.LVL29:
 309 0158 52       		pushq	%rdx
 310              		.cfi_def_cfa_offset 224
 311 0159 44895424 		movl	%r10d, 28(%rsp)
 311      1C
 312 015e FF90B000 		call	*176(%rax)
 312      0000
 313              	.LVL30:
 314              	.LBE330:
 315              	.LBE333:
 316              	.LBB334:
 317              	.LBB335:
 318 0164 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 318      000000
 319 016b 448B5424 		movl	28(%rsp), %r10d
 319      1C
 320              	.LBE335:
 321              	.LBE334:
  65:fltk-1.3.4-1/src/Fl_Choice.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
 322              		.loc 2 65 0
 323 0170 8D5302   		leal	2(%rbx), %edx
 324              	.LVL31:
 325              	.LBB338:
 326              	.LBB336:
 327              		.loc 4 244 0
 328 0173 448D4305 		leal	5(%rbx), %r8d
 329              	.LVL32:
 330 0177 4489F1   		movl	%r14d, %ecx
 331 017a 4489EE   		movl	%r13d, %esi
 332              	.LBE336:
 333              	.LBE338:
  66:fltk-1.3.4-1/src/Fl_Choice.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Choice.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Choice.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 334              		.loc 2 68 0
 335 017d 448D7308 		leal	8(%rbx), %r14d
 336              	.LVL33:
 337 0181 83EB08   		subl	$8, %ebx
 338              	.LVL34:
 339              	.LBB339:
 340              	.LBB337:
 341              		.loc 4 244 0
 342 0184 488B07   		movq	(%rdi), %rax
 343 0187 4589D1   		movl	%r10d, %r9d
 344 018a 891424   		movl	%edx, (%rsp)
 345 018d FF90B000 		call	*176(%rax)
 345      0000
 346              	.LVL35:
 347              	.LBE337:
 348              	.LBE339:
 349              	.LBB340:
 350              	.LBB341:
 351              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
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
 733:fltk-1.3.4-1/FL/Enumerations.H **** }
 734:fltk-1.3.4-1/FL/Enumerations.H **** /**
 735:fltk-1.3.4-1/FL/Enumerations.H ****   Get the unfilled, frame only version of a box.
 736:fltk-1.3.4-1/FL/Enumerations.H ****   If no frame version of a given box exists, the behavior of this function
 737:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 738:fltk-1.3.4-1/FL/Enumerations.H ****  */
 739:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_frame(Fl_Boxtype b) {
 740:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b%4<2)?b:(b+2));
 741:fltk-1.3.4-1/FL/Enumerations.H **** }
 742:fltk-1.3.4-1/FL/Enumerations.H **** 
 743:fltk-1.3.4-1/FL/Enumerations.H **** // back-compatibility box types:
 744:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME FL_ENGRAVED_FRAME
 745:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME_BOX FL_ENGRAVED_BOX
 746:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CIRCLE_BOX FL_ROUND_DOWN_BOX
 747:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_BOX FL_DIAMOND_DOWN_BOX
 748:fltk-1.3.4-1/FL/Enumerations.H **** 
 749:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Box Types
 750:fltk-1.3.4-1/FL/Enumerations.H **** 
 751:fltk-1.3.4-1/FL/Enumerations.H **** /**
 752:fltk-1.3.4-1/FL/Enumerations.H ****    The labeltype() method sets the type of the label.
 753:fltk-1.3.4-1/FL/Enumerations.H **** 
 754:fltk-1.3.4-1/FL/Enumerations.H ****    The following standard label types are included:
 755:fltk-1.3.4-1/FL/Enumerations.H **** 
 756:fltk-1.3.4-1/FL/Enumerations.H ****    \todo	The doxygen comments are incomplete, and some labeltypes
 757:fltk-1.3.4-1/FL/Enumerations.H ****    	start with an underscore. Also, there are three
 758:fltk-1.3.4-1/FL/Enumerations.H **** 		external functions undocumented (yet):
 759:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_SHADOW_LABEL()
 760:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_ENGRAVED_LABEL()
 761:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_EMBOSSED_LABEL()
 762:fltk-1.3.4-1/FL/Enumerations.H **** */
 763:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Labeltype {	// labeltypes:
 764:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NORMAL_LABEL	= 0, ///< draws the text (0)
 765:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_LABEL,         ///< does nothing
 766:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_LABEL,    ///< draws a drop shadow under the text
 767:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ENGRAVED_LABEL,	 ///< draws edges as though the text is engraved
 768:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_EMBOSSED_LABEL,  ///< draws edges as though the text is raised
 769:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_MULTI_LABEL,     ///< draws a composite label \see Fl_Multi_Label
 770:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ICON_LABEL,      ///< draws the icon associated with the text
 771:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_IMAGE_LABEL,     ///< the label displays an "icon" based on a Fl_Image
 772:fltk-1.3.4-1/FL/Enumerations.H **** 
 773:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FREE_LABELTYPE    ///< first free labeltype to use for creating own labeltypes
 774:fltk-1.3.4-1/FL/Enumerations.H **** };
 775:fltk-1.3.4-1/FL/Enumerations.H **** 
 776:fltk-1.3.4-1/FL/Enumerations.H **** /** 
 777:fltk-1.3.4-1/FL/Enumerations.H ****   Sets the current label type and return its corresponding Fl_Labeltype value. 
 778:fltk-1.3.4-1/FL/Enumerations.H ****   @{
 779:fltk-1.3.4-1/FL/Enumerations.H **** */
 780:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SYMBOL_LABEL FL_NORMAL_LABEL
 781:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_SHADOW_LABEL();
 782:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_LABEL fl_define_FL_SHADOW_LABEL()
 783:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_ENGRAVED_LABEL();
 784:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ENGRAVED_LABEL fl_define_FL_ENGRAVED_LABEL()
 785:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_EMBOSSED_LABEL();
 786:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_EMBOSSED_LABEL fl_define_FL_EMBOSSED_LABEL()
 787:fltk-1.3.4-1/FL/Enumerations.H **** /** @} */
 788:fltk-1.3.4-1/FL/Enumerations.H **** 
 789:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Alignment Flags 
 790:fltk-1.3.4-1/FL/Enumerations.H ****     Flags to control the label alignment. 
 791:fltk-1.3.4-1/FL/Enumerations.H **** 
 792:fltk-1.3.4-1/FL/Enumerations.H ****     This controls how the label is displayed next to or inside the widget. 
 793:fltk-1.3.4-1/FL/Enumerations.H ****     The default value is FL_ALIGN_CENTER (0) for most widgets, which centers
 794:fltk-1.3.4-1/FL/Enumerations.H ****     the label inside the widget.
 795:fltk-1.3.4-1/FL/Enumerations.H **** 
 796:fltk-1.3.4-1/FL/Enumerations.H ****     Flags can be or'd to achieve a combination of alignments, but there
 797:fltk-1.3.4-1/FL/Enumerations.H ****     are some "magic values" (e.g. combinations of TOP and BOTTOM and of
 798:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT and RIGHT) that have special meanings (see below). For instance:<BR>
 799:fltk-1.3.4-1/FL/Enumerations.H ****     FL_ALIGN_TOP_LEFT == (FL_ALIGN_TOP|FL_ALIGN_LEFT) != FL_ALIGN_LEFT_TOP.
 800:fltk-1.3.4-1/FL/Enumerations.H **** 
 801:fltk-1.3.4-1/FL/Enumerations.H ****     \code
 802:fltk-1.3.4-1/FL/Enumerations.H ****     Outside alignments (FL_ALIGN_INSIDE is not set):
 803:fltk-1.3.4-1/FL/Enumerations.H **** 
 804:fltk-1.3.4-1/FL/Enumerations.H ****                TOP_LEFT        TOP       TOP_RIGHT
 805:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 806:fltk-1.3.4-1/FL/Enumerations.H ****        LEFT_TOP|                                 |RIGHT_TOP
 807:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 808:fltk-1.3.4-1/FL/Enumerations.H ****            LEFT|             CENTER              |RIGHT
 809:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 810:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT_BOTTOM|                                 |RIGHT_BOTTOM
 811:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 812:fltk-1.3.4-1/FL/Enumerations.H ****                BOTTOM_LEFT   BOTTOM   BOTTOM_RIGHT
 813:fltk-1.3.4-1/FL/Enumerations.H **** 
 814:fltk-1.3.4-1/FL/Enumerations.H ****     Inside alignments (FL_ALIGN_INSIDE is set):
 815:fltk-1.3.4-1/FL/Enumerations.H **** 
 816:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 817:fltk-1.3.4-1/FL/Enumerations.H ****                |TOP_LEFT       TOP      TOP_RIGHT|
 818:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 819:fltk-1.3.4-1/FL/Enumerations.H ****                |LEFT         CENTER         RIGHT|
 820:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 821:fltk-1.3.4-1/FL/Enumerations.H ****                |BOTTOM_LEFT  BOTTOM  BOTTOM_RIGHT|
 822:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 823:fltk-1.3.4-1/FL/Enumerations.H ****     \endcode
 824:fltk-1.3.4-1/FL/Enumerations.H ****     \see #FL_ALIGN_CENTER, etc.
 825:fltk-1.3.4-1/FL/Enumerations.H ****  */
 826:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 827:fltk-1.3.4-1/FL/Enumerations.H **** /** FLTK type for alignment control */
 828:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned Fl_Align;
 829:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label horizontally in the middle. */
 830:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CENTER		= (Fl_Align)0;
 831:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the top of the widget. Inside labels appear below the top,
 832:fltk-1.3.4-1/FL/Enumerations.H ****       outside labels are drawn on top of the widget. */
 833:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP		= (Fl_Align)1;
 834:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the bottom of the widget. */
 835:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM		= (Fl_Align)2;
 836:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the left of the widget. Inside labels appear left-justified
 837:fltk-1.3.4-1/FL/Enumerations.H ****       starting at the left side of the widget, outside labels are right-justified and
 838:fltk-1.3.4-1/FL/Enumerations.H ****       drawn to the left of the widget. */
 839:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT		= (Fl_Align)4;
 840:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label to the right of the widget. */
 841:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT		= (Fl_Align)8;
 842:fltk-1.3.4-1/FL/Enumerations.H ****   /** Draw the label inside of the widget. */
 843:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_INSIDE		= (Fl_Align)16;
 844:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text on top of the image. */
 845:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_OVER_IMAGE	= (Fl_Align)0x0020;
 846:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text below the image. */
 847:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_OVER_TEXT	= (Fl_Align)0x0000;
 848:fltk-1.3.4-1/FL/Enumerations.H ****   /** All parts of the label that are lager than the widget will not be drawn . */
 849:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CLIP		= (Fl_Align)64;
 850:fltk-1.3.4-1/FL/Enumerations.H ****   /** Wrap text that does not fit the width of the widget. */
 851:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_WRAP		= (Fl_Align)128;
 852:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the right of the image. */
 853:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_NEXT_TO_TEXT = (Fl_Align)0x0100;
 854:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the left of the image. */
 855:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_NEXT_TO_IMAGE = (Fl_Align)0x0120;
 856:fltk-1.3.4-1/FL/Enumerations.H **** /** If the label contains an image, draw the image or deimage in the background. */
 857:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_BACKDROP  = (Fl_Align)0x0200;
 858:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_LEFT	= FL_ALIGN_TOP | FL_ALIGN_LEFT;
 859:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_RIGHT	= FL_ALIGN_TOP | FL_ALIGN_RIGHT;
 860:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_LEFT	= FL_ALIGN_BOTTOM | FL_ALIGN_LEFT;
 861:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_RIGHT	= FL_ALIGN_BOTTOM | FL_ALIGN_RIGHT;
 862:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_TOP	= 0x0007; // magic value
 863:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_TOP	= 0x000b; // magic value
 864:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_BOTTOM	= 0x000d; // magic value
 865:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_BOTTOM	= 0x000e; // magic value
 866:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_NOWRAP		= (Fl_Align)0; // for back compatibility
 867:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_POSITION_MASK   = 0x000f; // left, right, top, bottom
 868:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_MASK      = 0x0320; // l/r, t/b, backdrop
 869:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 870:fltk-1.3.4-1/FL/Enumerations.H **** 
 871:fltk-1.3.4-1/FL/Enumerations.H **** 
 872:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Font Numbers
 873:fltk-1.3.4-1/FL/Enumerations.H ****     The following constants define the standard FLTK fonts:
 874:fltk-1.3.4-1/FL/Enumerations.H ****  */
 875:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 876:fltk-1.3.4-1/FL/Enumerations.H **** /** A font number is an index into the internal font table. */
 877:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Font;
 878:fltk-1.3.4-1/FL/Enumerations.H **** 
 879:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA              = 0;	///< Helvetica (or Arial) normal (0)
 880:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD         = 1;	///< Helvetica (or Arial) bold
 881:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_ITALIC       = 2;	///< Helvetica (or Arial) oblique
 882:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD_ITALIC  = 3;	///< Helvetica (or Arial) bold-oblique
 883:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER                = 4;	///< Courier normal
 884:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD           = 5;	///< Courier bold 
 885:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_ITALIC         = 6;	///< Courier italic
 886:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD_ITALIC    = 7;	///< Courier bold-italic
 887:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES                  = 8;	///< Times roman
 888:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD             = 9;	///< Times roman bold
 889:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_ITALIC           = 10;	///< Times roman italic
 890:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD_ITALIC      = 11;	///< Times roman bold-italic
 891:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SYMBOL                 = 12;	///< Standard symbol font
 892:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN                 = 13;	///< Default monospaced screen font
 893:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN_BOLD            = 14;	///< Default monospaced bold screen font
 894:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ZAPF_DINGBATS          = 15;	///< Zapf-dingbats font
 895:fltk-1.3.4-1/FL/Enumerations.H **** 
 896:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_FREE_FONT              = 16;	///< first one to allocate
 897:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD                   = 1;	///< add this to helvetica, courier, or times
 898:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ITALIC                 = 2;	///< add this to helvetica, courier, or times
 899:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD_ITALIC            = 3;	///< add this to helvetica, courier, or times
 900:fltk-1.3.4-1/FL/Enumerations.H **** 
 901:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 902:fltk-1.3.4-1/FL/Enumerations.H **** 
 903:fltk-1.3.4-1/FL/Enumerations.H **** /** Size of a font in pixels.
 904:fltk-1.3.4-1/FL/Enumerations.H ****     This is the approximate height of a font in pixels.
 905:fltk-1.3.4-1/FL/Enumerations.H ****  */
 906:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Fontsize;
 907:fltk-1.3.4-1/FL/Enumerations.H **** 
 908:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Fontsize FL_NORMAL_SIZE;	///< normal font size
 909:fltk-1.3.4-1/FL/Enumerations.H **** 
 910:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Colors 
 911:fltk-1.3.4-1/FL/Enumerations.H ****     The Fl_Color type holds an FLTK color value.
 912:fltk-1.3.4-1/FL/Enumerations.H **** 
 913:fltk-1.3.4-1/FL/Enumerations.H ****     Colors are either 8-bit indexes into a <a href="fltk-colormap.png">virtual colormap</a>
 914:fltk-1.3.4-1/FL/Enumerations.H ****     or 24-bit RGB color values. (See \ref drawing_colors for the default FLTK colormap)
 915:fltk-1.3.4-1/FL/Enumerations.H **** 
 916:fltk-1.3.4-1/FL/Enumerations.H ****     Color indices occupy the lower 8 bits of the value, while
 917:fltk-1.3.4-1/FL/Enumerations.H ****     RGB colors occupy the upper 24 bits, for a byte organization of RGBI.
 918:fltk-1.3.4-1/FL/Enumerations.H **** 
 919:fltk-1.3.4-1/FL/Enumerations.H **** <pre>
 920:fltk-1.3.4-1/FL/Enumerations.H ****  Fl_Color => 0xrrggbbii
 921:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | |
 922:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | +--- \ref drawing_colors "index" between 0 and 255
 923:fltk-1.3.4-1/FL/Enumerations.H ****                 | | +----- blue color component (8 bit)
 924:fltk-1.3.4-1/FL/Enumerations.H ****                 | +------- green component (8 bit)
 925:fltk-1.3.4-1/FL/Enumerations.H ****                 +--------- red component (8 bit)
 926:fltk-1.3.4-1/FL/Enumerations.H ****  </pre>
 927:fltk-1.3.4-1/FL/Enumerations.H **** 
 928:fltk-1.3.4-1/FL/Enumerations.H ****     A color can have either an index or an rgb value. Colors with rgb set 
 929:fltk-1.3.4-1/FL/Enumerations.H ****     and an index >0 are reserved for special use.
 930:fltk-1.3.4-1/FL/Enumerations.H **** 
 931:fltk-1.3.4-1/FL/Enumerations.H ****  */
 932:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 933:fltk-1.3.4-1/FL/Enumerations.H **** /** An FLTK color value; see also \ref drawing_colors  */
 934:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned int Fl_Color;
 935:fltk-1.3.4-1/FL/Enumerations.H **** 
 936:fltk-1.3.4-1/FL/Enumerations.H **** // Standard colors. These are used as default colors in widgets and altered as necessary
 937:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_FOREGROUND_COLOR  = 0;	///< the default foreground color (0) used for labels and 
 938:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND2_COLOR = 7;	///< the default background color for text, list, and valu
 939:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_INACTIVE_COLOR    = 8;	///< the inactive foreground color
 940:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_SELECTION_COLOR   = 15;	///< the default selection/highlight color
 941:fltk-1.3.4-1/FL/Enumerations.H **** 
 942:fltk-1.3.4-1/FL/Enumerations.H ****   // boxtypes generally limit themselves to these colors so
 943:fltk-1.3.4-1/FL/Enumerations.H ****   // the whole ramp is not allocated:
 944:fltk-1.3.4-1/FL/Enumerations.H **** 
 945:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GRAY0   = 32;			// 'A'
 946:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK3   = 39;			// 'H'
 947:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK2   = 45;			// 'N'
 948:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK1   = 47;			// 'P'
 949:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND_COLOR  = 49;	// 'R' default background color
 950:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT1  = 50;			// 'S'
 951:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT2  = 52;			// 'U'
 952:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT3  = 54;			// 'W'
 953:fltk-1.3.4-1/FL/Enumerations.H **** 
 954:fltk-1.3.4-1/FL/Enumerations.H ****   // FLTK provides a 5x8x5 color cube that is used with colormap visuals
 955:fltk-1.3.4-1/FL/Enumerations.H **** 
 956:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLACK   = 56;
 957:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_RED     = 88;
 958:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GREEN   = 63;
 959:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_YELLOW  = 95;
 960:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLUE    = 216;
 961:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_MAGENTA = 248;
 962:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_CYAN    = 223;
 963:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_RED = 72;
 964:fltk-1.3.4-1/FL/Enumerations.H **** 
 965:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_GREEN    = 60;
 966:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_YELLOW   = 76;
 967:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_BLUE     = 136;
 968:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_MAGENTA  = 152;
 969:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_CYAN     = 140;
 970:fltk-1.3.4-1/FL/Enumerations.H **** 
 971:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_WHITE         = 255;
 972:fltk-1.3.4-1/FL/Enumerations.H **** 
 973:fltk-1.3.4-1/FL/Enumerations.H **** 
 974:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FREE_COLOR     (Fl_Color)16
 975:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_FREE_COLOR 16
 976:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY_RAMP      (Fl_Color)32
 977:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GRAY       24
 978:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY           FL_BACKGROUND_COLOR
 979:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_COLOR_CUBE     (Fl_Color)56
 980:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_RED        5
 981:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GREEN      8
 982:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_BLUE       5
 983:fltk-1.3.4-1/FL/Enumerations.H **** 
 984:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_inactive(Fl_Color c);
 985:fltk-1.3.4-1/FL/Enumerations.H **** 
 986:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_contrast(Fl_Color fg, Fl_Color bg);
 987:fltk-1.3.4-1/FL/Enumerations.H **** 
 988:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_color_average(Fl_Color c1, Fl_Color c2, float weight);
 989:fltk-1.3.4-1/FL/Enumerations.H **** 
 990:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a lighter version of the specified color. */
 991:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_lighter(Fl_Color c) { return fl_color_average(c, FL_WHITE, .67f); }
 992:fltk-1.3.4-1/FL/Enumerations.H **** 
 993:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a darker version of the specified color. */
 994:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_darker(Fl_Color c) { return fl_color_average(c, FL_BLACK, .67f); }
 352              		.loc 5 994 0
 353 0193 418B7F64 		movl	100(%r15), %edi
 354 0197 F30F1005 		movss	.LC6(%rip), %xmm0
 354      00000000 
 355 019f BE380000 		movl	$56, %esi
 355      00
 356 01a4 E8000000 		call	_Z16fl_color_averagejjf
 356      00
 357              	.LVL36:
 358              	.LBE341:
 359              	.LBE340:
 360              	.LBB342:
 361              	.LBB343:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 362              		.loc 4 52 0
 363 01a9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 363      000000
 364 01b0 89C6     		movl	%eax, %esi
 365 01b2 488B17   		movq	(%rdi), %rdx
 366 01b5 FF928800 		call	*136(%rdx)
 366      0000
 367              	.LVL37:
 368              	.LBE343:
 369              	.LBE342:
 370              	.LBB344:
 371              	.LBB345:
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
 372              		.loc 4 270 0
 373 01bb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 373      000000
 374 01c2 4489F1   		movl	%r14d, %ecx
 375 01c5 89DA     		movl	%ebx, %edx
 376 01c7 418D75F9 		leal	-7(%r13), %esi
 377              	.LVL38:
 378 01cb 488B07   		movq	(%rdi), %rax
 379 01ce FF5048   		call	*72(%rax)
 380              	.LVL39:
 381              	.LBE345:
 382              	.LBE344:
 383              	.LBB346:
 384              	.LBB347:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 385              		.loc 5 991 0
 386 01d1 418B7F64 		movl	100(%r15), %edi
 387 01d5 F30F1005 		movss	.LC6(%rip), %xmm0
 387      00000000 
 388 01dd BEFF0000 		movl	$255, %esi
 388      00
 389 01e2 E8000000 		call	_Z16fl_color_averagejjf
 389      00
 390              	.LVL40:
 391              	.LBE347:
 392              	.LBE346:
 393              	.LBB348:
 394              	.LBB349:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 395              		.loc 4 52 0
 396 01e7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 396      000000
 397 01ee 89C6     		movl	%eax, %esi
 398 01f0 488B17   		movq	(%rdi), %rdx
 399 01f3 FF928800 		call	*136(%rdx)
 399      0000
 400              	.LVL41:
 401              	.LBE349:
 402              	.LBE348:
 403              	.LBB350:
 404              	.LBB351:
 405              		.loc 4 270 0
 406 01f9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 406      000000
 407 0200 89DA     		movl	%ebx, %edx
 408 0202 418D75FA 		leal	-6(%r13), %esi
 409              	.LVL42:
 410 0206 4489F1   		movl	%r14d, %ecx
 411 0209 488B07   		movq	(%rdi), %rax
 412 020c FF5048   		call	*72(%rax)
 413              	.LVL43:
 414 020f 58       		popq	%rax
 415              		.cfi_def_cfa_offset 216
 416 0210 5A       		popq	%rdx
 417              		.cfi_def_cfa_offset 208
 418              	.LVL44:
 419              	.L31:
 420              	.LBE351:
 421              	.LBE350:
  69:fltk-1.3.4-1/src/Fl_Choice.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Choice.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Choice.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Choice.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Choice.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Choice.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Choice.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Choice.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Choice.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Choice.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Choice.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Choice.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Choice.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Choice.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Choice.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Choice.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Choice.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Choice.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Choice.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Choice.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Choice.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 422              		.loc 2 89 0
 423 0211 8B442410 		movl	16(%rsp), %eax
 424 0215 428D1C60 		leal	(%rax,%r12,2), %ebx
 425              	.LVL45:
 426 0219 498B8780 		movq	128(%r15), %rax
 426      000000
 427              	.LVL46:
 428              	.LBB352:
  90:fltk-1.3.4-1/src/Fl_Choice.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Choice.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Choice.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 429              		.loc 2 92 0
 430 0220 4885C0   		testq	%rax, %rax
 431 0223 0F845A01 		je	.L17
 431      0000
 432              	.LVL47:
 433              	.LBB353:
  93:fltk-1.3.4-1/src/Fl_Choice.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 434              		.loc 2 93 0
 435 0229 488B10   		movq	(%rax), %rdx
  94:fltk-1.3.4-1/src/Fl_Choice.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 436              		.loc 2 94 0
 437 022c 4C89FF   		movq	%r15, %rdi
  93:fltk-1.3.4-1/src/Fl_Choice.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 438              		.loc 2 93 0
 439 022f 48895424 		movq	%rdx, 80(%rsp)
 439      50
 440 0234 488B5008 		movq	8(%rax), %rdx
 441 0238 48895424 		movq	%rdx, 88(%rsp)
 441      58
 442 023d 488B5010 		movq	16(%rax), %rdx
 443 0241 48895424 		movq	%rdx, 96(%rsp)
 443      60
 444 0246 488B5018 		movq	24(%rax), %rdx
 445 024a 48895424 		movq	%rdx, 104(%rsp)
 445      68
 446 024f 488B5020 		movq	32(%rax), %rdx
 447 0253 48895424 		movq	%rdx, 112(%rsp)
 447      70
 448 0258 488B5028 		movq	40(%rax), %rdx
 449 025c 48895424 		movq	%rdx, 120(%rsp)
 449      78
 450 0261 488B4030 		movq	48(%rax), %rax
 451 0265 48898424 		movq	%rax, 128(%rsp)
 451      80000000 
 452              		.loc 2 94 0
 453 026d E8000000 		call	_ZNK9Fl_Widget8active_rEv
 453      00
 454              	.LVL48:
 455 0272 85C0     		testl	%eax, %eax
 456 0274 0F843603 		je	.L18
 456      0000
 457              	.LVL49:
 458              	.LBB354:
 459              	.LBB355:
 460              		.file 6 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
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
 461              		.loc 6 343 0
 462 027a 83642470 		andl	$-2, 112(%rsp)
 462      FE
 463              	.LVL50:
 464              	.L19:
 465              	.LBE355:
 466              	.LBE354:
  95:fltk-1.3.4-1/src/Fl_Choice.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Choice.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Choice.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 467              		.loc 2 97 0
 468 027f 418B4728 		movl	40(%r15), %eax
 469              	.LBB356:
 470              	.LBB357:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 471              		.loc 4 82 0
 472 0283 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 472      000000
 473              	.LBE357:
 474              	.LBE356:
 475              		.loc 2 97 0
 476 028a 41036F24 		addl	36(%r15), %ebp
 477              	.LVL51:
 478 028e 45036720 		addl	32(%r15), %r12d
 479              	.LVL52:
 480 0292 448B6C24 		movl	8(%rsp), %r13d
 480      08
 481 0297 29D8     		subl	%ebx, %eax
 482 0299 89C3     		movl	%eax, %ebx
 483              	.LVL53:
 484              	.LBB360:
 485              	.LBB358:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 486              		.loc 4 82 0
 487 029b 488B07   		movq	(%rdi), %rax
 488              	.LBE358:
 489              	.LBE360:
 490              		.loc 2 97 0
 491 029e 83C501   		addl	$1, %ebp
 492              	.LVL54:
 493 02a1 4183ED02 		subl	$2, %r13d
 494              	.LVL55:
 495              	.LBB361:
 496              	.LBB359:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 497              		.loc 4 82 0
 498 02a5 89D9     		movl	%ebx, %ecx
 499 02a7 4589E8   		movl	%r13d, %r8d
 500 02aa 89EA     		movl	%ebp, %edx
 501 02ac 4489E6   		movl	%r12d, %esi
 502 02af FF905001 		call	*336(%rax)
 502      0000
 503              	.LVL56:
 504              	.LBE359:
 505              	.LBE361:
 506              	.LBB362:
  98:fltk-1.3.4-1/src/Fl_Choice.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Choice.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Choice.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 507              		.loc 2 100 0
 508 02b5 48833D00 		cmpq	$0, _ZN2Fl7scheme_E(%rip)
 508      00000000 
 509 02bd 0F845503 		je	.L20
 509      0000
 510              	.LBB363:
 101:fltk-1.3.4-1/src/Fl_Choice.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Choice.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 511              		.loc 2 102 0
 512 02c3 488B4424 		movq	80(%rsp), %rax
 512      50
 103:fltk-1.3.4-1/src/Fl_Choice.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Choice.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Choice.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Choice.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 513              		.loc 2 106 0
 514 02c8 48837C24 		cmpq	$0, 120(%rsp)
 514      7800
 103:fltk-1.3.4-1/src/Fl_Choice.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 515              		.loc 2 103 0
 516 02ce 48C74424 		movq	$0, 40(%rsp)
 516      28000000 
 516      00
 104:fltk-1.3.4-1/src/Fl_Choice.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 517              		.loc 2 104 0
 518 02d7 48C74424 		movq	$0, 48(%rsp)
 518      30000000 
 518      00
 102:fltk-1.3.4-1/src/Fl_Choice.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 519              		.loc 2 102 0
 520 02e0 48894424 		movq	%rax, 32(%rsp)
 520      20
 105:fltk-1.3.4-1/src/Fl_Choice.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 521              		.loc 2 105 0
 522 02e5 0FB64424 		movzbl	116(%rsp), %eax
 522      74
 523 02ea 88442448 		movb	%al, 72(%rsp)
 524              		.loc 2 106 0
 525 02ee 0F84CC02 		je	.L21
 525      0000
 526              		.loc 2 106 0 is_stmt 0 discriminator 1
 527 02f4 8B442478 		movl	120(%rsp), %eax
 528              	.L22:
 529              		.loc 2 106 0 discriminator 4
 530 02f8 89442438 		movl	%eax, 56(%rsp)
 107:fltk-1.3.4-1/src/Fl_Choice.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 531              		.loc 2 107 0 is_stmt 1 discriminator 4
 532 02fc 8B44247C 		movl	124(%rsp), %eax
 533 0300 85C0     		testl	%eax, %eax
 534 0302 7507     		jne	.L23
 535 0304 418B8790 		movl	144(%r15), %eax
 535      000000
 536              	.LVL57:
 537              	.L23:
 108:fltk-1.3.4-1/src/Fl_Choice.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 538              		.loc 2 108 0 discriminator 4
 539 030b 8BBC2480 		movl	128(%rsp), %edi
 539      000000
 107:fltk-1.3.4-1/src/Fl_Choice.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 540              		.loc 2 107 0 discriminator 4
 541 0312 8944243C 		movl	%eax, 60(%rsp)
 542              		.loc 2 108 0 discriminator 4
 543 0316 85FF     		testl	%edi, %edi
 544 0318 7507     		jne	.L24
 545 031a 418BBF94 		movl	148(%r15), %edi
 545      000000
 546              	.LVL58:
 547              	.L24:
 109:fltk-1.3.4-1/src/Fl_Choice.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 548              		.loc 2 109 0 discriminator 4
 549 0321 F6442470 		testb	$1, 112(%rsp)
 549      01
 108:fltk-1.3.4-1/src/Fl_Choice.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 550              		.loc 2 108 0 discriminator 4
 551 0326 897C2440 		movl	%edi, 64(%rsp)
 552              	.LVL59:
 553              		.loc 2 109 0 discriminator 4
 554 032a 0F85B002 		jne	.L59
 554      0000
 555              	.L25:
 110:fltk-1.3.4-1/src/Fl_Choice.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Choice.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 556              		.loc 2 111 0
 557 0330 8D43FA   		leal	-6(%rbx), %eax
 558 0333 83FB07   		cmpl	$7, %ebx
 559 0336 B9000000 		movl	$0, %ecx
 559      00
 560 033b 418D7424 		leal	3(%r12), %esi
 560      03
 561 0340 488D7C24 		leaq	32(%rsp), %rdi
 561      20
 562 0345 41B90400 		movl	$4, %r9d
 562      0000
 563 034b 0F4DC8   		cmovge	%eax, %ecx
 564 034e 4589E8   		movl	%r13d, %r8d
 565 0351 89EA     		movl	%ebp, %edx
 110:fltk-1.3.4-1/src/Fl_Choice.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 566              		.loc 2 110 0
 567 0353 C6050000 		movb	$2, fl_draw_shortcut(%rip)
 567      000002
 568              		.loc 2 111 0
 569 035a E8000000 		call	_ZNK8Fl_Label4drawEiiiij
 569      00
 570              	.LVL60:
 112:fltk-1.3.4-1/src/Fl_Choice.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Choice.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 571              		.loc 2 113 0
 572 035f 4C393D00 		cmpq	%r15, _ZN2Fl6focus_E(%rip)
 572      000000
 112:fltk-1.3.4-1/src/Fl_Choice.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 573              		.loc 2 112 0
 574 0366 C6050000 		movb	$0, fl_draw_shortcut(%rip)
 574      000000
 575              		.loc 2 113 0
 576 036d 0F84ED02 		je	.L60
 576      0000
 577              	.LVL61:
 578              	.L28:
 579              	.LBE363:
 580              	.LBE362:
 581              	.LBB366:
 582              	.LBB367:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 583              		.loc 4 103 0 discriminator 1
 584 0373 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 584      000000
 585 037a 488B07   		movq	(%rdi), %rax
 586 037d FF907001 		call	*368(%rax)
 586      0000
 587              	.LVL62:
 588              	.L17:
 589              	.LBE367:
 590              	.LBE366:
 591              	.LBE353:
 592              	.LBE352:
 114:fltk-1.3.4-1/src/Fl_Choice.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Choice.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Choice.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Choice.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Choice.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Choice.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Choice.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Choice.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Choice.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Choice.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Choice.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Choice.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 593              		.loc 2 125 0
 594 0383 4C89FF   		movq	%r15, %rdi
 595 0386 E8000000 		call	_ZNK9Fl_Widget10draw_labelEv
 595      00
 596              	.LVL63:
 126:fltk-1.3.4-1/src/Fl_Choice.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 597              		.loc 2 126 0
 598 038b 488B8424 		movq	136(%rsp), %rax
 598      88000000 
 599 0393 64483304 		xorq	%fs:40, %rax
 599      25280000 
 599      00
 600 039c 0F850C03 		jne	.L61
 600      0000
 601 03a2 4881C498 		addq	$152, %rsp
 601      000000
 602              		.cfi_remember_state
 603              		.cfi_def_cfa_offset 56
 604 03a9 5B       		popq	%rbx
 605              		.cfi_def_cfa_offset 48
 606 03aa 5D       		popq	%rbp
 607              		.cfi_def_cfa_offset 40
 608 03ab 415C     		popq	%r12
 609              		.cfi_def_cfa_offset 32
 610 03ad 415D     		popq	%r13
 611              		.cfi_def_cfa_offset 24
 612 03af 415E     		popq	%r14
 613              		.cfi_def_cfa_offset 16
 614 03b1 415F     		popq	%r15
 615              		.cfi_def_cfa_offset 8
 616              	.LVL64:
 617 03b3 C3       		ret
 618              	.LVL65:
 619              		.p2align 4,,10
 620 03b4 0F1F4000 		.p2align 3
 621              	.L58:
 622              		.cfi_restore_state
 623              	.LBB373:
 624              	.LBB374:
 625              		.loc 3 369 0
 626 03b8 BE000000 		movl	$.LC4, %esi
 626      00
 627 03bd B9060000 		movl	$6, %ecx
 627      00
 628 03c2 4C89CF   		movq	%r9, %rdi
 629 03c5 F3A6     		repz cmpsb
 630 03c7 0F84B2FC 		je	.L7
 630      FFFF
 631              	.LVL66:
 632              	.L6:
 633              	.LBE374:
 634              	.LBE373:
  39:fltk-1.3.4-1/src/Fl_Choice.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 635              		.loc 2 39 0
 636 03cd 8B4C2408 		movl	8(%rsp), %ecx
 637 03d1 B8140000 		movl	$20, %eax
 637      00
  40:fltk-1.3.4-1/src/Fl_Choice.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 638              		.loc 2 40 0
 639 03d6 458B5F28 		movl	40(%r15), %r11d
  44:fltk-1.3.4-1/src/Fl_Choice.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 640              		.loc 2 44 0
 641 03da BA565555 		movl	$1431655766, %edx
 641      55
  39:fltk-1.3.4-1/src/Fl_Choice.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 642              		.loc 2 39 0
 643 03df 83F914   		cmpl	$20, %ecx
 644 03e2 0F4EC1   		cmovle	%ecx, %eax
  40:fltk-1.3.4-1/src/Fl_Choice.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 645              		.loc 2 40 0
 646 03e5 45035F20 		addl	32(%r15), %r11d
  41:fltk-1.3.4-1/src/Fl_Choice.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 647              		.loc 2 41 0
 648 03e9 418B4F24 		movl	36(%r15), %ecx
  44:fltk-1.3.4-1/src/Fl_Choice.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 649              		.loc 2 44 0
 650 03ed 8D70FC   		leal	-4(%rax), %esi
  39:fltk-1.3.4-1/src/Fl_Choice.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 651              		.loc 2 39 0
 652 03f0 89442410 		movl	%eax, 16(%rsp)
 653              	.LVL67:
  40:fltk-1.3.4-1/src/Fl_Choice.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 654              		.loc 2 40 0
 655 03f4 89C3     		movl	%eax, %ebx
  41:fltk-1.3.4-1/src/Fl_Choice.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 656              		.loc 2 41 0
 657 03f6 01E9     		addl	%ebp, %ecx
  40:fltk-1.3.4-1/src/Fl_Choice.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 658              		.loc 2 40 0
 659 03f8 4129C3   		subl	%eax, %r11d
  44:fltk-1.3.4-1/src/Fl_Choice.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 660              		.loc 2 44 0
 661 03fb 89F0     		movl	%esi, %eax
 662              	.LVL68:
 663 03fd C1FE1F   		sarl	$31, %esi
 664 0400 F7EA     		imull	%edx
  40:fltk-1.3.4-1/src/Fl_Choice.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665              		.loc 2 40 0
 666 0402 4529E3   		subl	%r12d, %r11d
 667              	.LVL69:
  44:fltk-1.3.4-1/src/Fl_Choice.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 668              		.loc 2 44 0
 669 0405 29F2     		subl	%esi, %edx
 670 0407 85D2     		testl	%edx, %edx
 671 0409 4189D6   		movl	%edx, %r14d
 672              	.LVL70:
 673 040c 0F8FDE01 		jg	.L29
 673      0000
 674 0412 89D8     		movl	%ebx, %eax
 675 0414 C7442414 		movl	$2, 20(%rsp)
 675      02000000 
 676 041c 41BE0100 		movl	$1, %r14d
 676      0000
 677 0422 83E803   		subl	$3, %eax
 678 0425 89C2     		movl	%eax, %edx
 679              	.LVL71:
 680 0427 C1EA1F   		shrl	$31, %edx
 681 042a 01D0     		addl	%edx, %eax
 682 042c D1F8     		sarl	%eax
 683              	.LVL72:
 684              	.L30:
  45:fltk-1.3.4-1/src/Fl_Choice.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 685              		.loc 2 45 0
 686 042e 4401D8   		addl	%r11d, %eax
 687 0431 8944240C 		movl	%eax, 12(%rsp)
 688              	.LVL73:
  46:fltk-1.3.4-1/src/Fl_Choice.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 689              		.loc 2 46 0
 690 0435 8B442408 		movl	8(%rsp), %eax
 691              	.LVL74:
 692 0439 4429F0   		subl	%r14d, %eax
 693 043c 83E801   		subl	$1, %eax
 694 043f 89C3     		movl	%eax, %ebx
 695 0441 C1EB1F   		shrl	$31, %ebx
 696 0444 01D8     		addl	%ebx, %eax
 697 0446 D1F8     		sarl	%eax
  48:fltk-1.3.4-1/src/Fl_Choice.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 698              		.loc 2 48 0
 699 0448 4D85C9   		testq	%r9, %r9
  46:fltk-1.3.4-1/src/Fl_Choice.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 700              		.loc 2 46 0
 701 044b 8D1C08   		leal	(%rax,%rcx), %ebx
 702              	.LVL75:
  48:fltk-1.3.4-1/src/Fl_Choice.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 703              		.loc 2 48 0
 704 044e 0F856BFC 		jne	.L32
 704      FFFF
  77:fltk-1.3.4-1/src/Fl_Choice.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 705              		.loc 2 77 0
 706 0454 418BBF94 		movl	148(%r15), %edi
 706      000000
 707 045b BE070000 		movl	$7, %esi
 707      00
 708 0460 894C241C 		movl	%ecx, 28(%rsp)
 709 0464 44895C24 		movl	%r11d, 24(%rsp)
 709      18
 710              	.LVL76:
 711 0469 E8000000 		call	_Z11fl_contrastjj
 711      00
 712              	.LVL77:
 713 046e 413B8794 		cmpl	148(%r15), %eax
 713      000000
 714 0475 448B5C24 		movl	24(%rsp), %r11d
 714      18
 715 047a 8B4C241C 		movl	28(%rsp), %ecx
 716 047e 0F840C02 		je	.L62
 716      0000
 717              	.LBB375:
 718              	.LBB376:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 719              		.loc 5 991 0
 720 0484 418B7F64 		movl	100(%r15), %edi
 721 0488 F30F1005 		movss	.LC6(%rip), %xmm0
 721      00000000 
 722 0490 BEFF0000 		movl	$255, %esi
 722      00
 723 0495 894C241C 		movl	%ecx, 28(%rsp)
 724              	.LVL78:
 725 0499 44895C24 		movl	%r11d, 24(%rsp)
 725      18
 726              	.LVL79:
 727 049e E8000000 		call	_Z16fl_color_averagejjf
 727      00
 728              	.LVL80:
 729              	.LBE376:
 730              	.LBE375:
  80:fltk-1.3.4-1/src/Fl_Choice.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 731              		.loc 2 80 0
 732 04a3 4489EE   		movl	%r13d, %esi
 733 04a6 89C2     		movl	%eax, %edx
 734 04a8 4C89FF   		movq	%r15, %rdi
 735 04ab E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
 735      00
 736              	.LVL81:
 737 04b0 8B4C241C 		movl	28(%rsp), %ecx
 738 04b4 448B5C24 		movl	24(%rsp), %r11d
 738      18
 739              	.LVL82:
 740              	.L14:
  84:fltk-1.3.4-1/src/Fl_Choice.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 741              		.loc 2 84 0
 742 04b9 418B4764 		movl	100(%r15), %eax
 743 04bd 4883EC08 		subq	$8, %rsp
 744              		.cfi_def_cfa_offset 216
 745 04c1 4489DA   		movl	%r11d, %edx
 746 04c4 BE020000 		movl	$2, %esi
 746      00
 747 04c9 4C89FF   		movq	%r15, %rdi
 748 04cc 50       		pushq	%rax
 749              		.cfi_def_cfa_offset 224
 750 04cd 448B4C24 		movl	24(%rsp), %r9d
 750      18
 751 04d2 448B4424 		movl	32(%rsp), %r8d
 751      20
 752 04d7 E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 752      00
 753              	.LVL83:
  85:fltk-1.3.4-1/src/Fl_Choice.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 754              		.loc 2 85 0
 755 04dc 4C89FF   		movq	%r15, %rdi
 756 04df E8000000 		call	_ZNK9Fl_Widget8active_rEv
 756      00
 757              	.LVL84:
 758 04e4 85C0     		testl	%eax, %eax
 759 04e6 415B     		popq	%r11
 760              		.cfi_def_cfa_offset 216
 761 04e8 415D     		popq	%r13
 762              		.cfi_def_cfa_offset 208
 763              	.LVL85:
 764 04ea 0F849001 		je	.L15
 764      0000
 765 04f0 418B7750 		movl	80(%r15), %esi
 766              	.LVL86:
 767              	.L16:
 768              	.LBB377:
 769              	.LBB378:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 770              		.loc 4 52 0 discriminator 4
 771 04f4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 771      000000
 772 04fb 488B17   		movq	(%rdi), %rdx
 773 04fe FF928800 		call	*136(%rdx)
 773      0000
 774              	.LVL87:
 775              	.LBE378:
 776              	.LBE377:
 777              	.LBB379:
 778              	.LBB380:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 779              		.loc 4 244 0 discriminator 4
 780 0504 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 780      000000
 781 050b 8B74240C 		movl	12(%rsp), %esi
 782 050f 4883EC08 		subq	$8, %rsp
 783              		.cfi_def_cfa_offset 216
 784 0513 458D041E 		leal	(%r14,%rbx), %r8d
 785              	.LVL88:
 786 0517 488B07   		movq	(%rdi), %rax
 787 051a 53       		pushq	%rbx
 788              		.cfi_def_cfa_offset 224
 789 051b 418D0C36 		leal	(%r14,%rsi), %ecx
 790              	.LVL89:
 791 051f 8B542424 		movl	36(%rsp), %edx
 792 0523 448D0C16 		leal	(%rsi,%rdx), %r9d
 793              	.LVL90:
 794 0527 89DA     		movl	%ebx, %edx
 795 0529 FF90B000 		call	*176(%rax)
 795      0000
 796              	.LVL91:
 797 052f 4159     		popq	%r9
 798              		.cfi_def_cfa_offset 216
 799 0531 415A     		popq	%r10
 800              		.cfi_def_cfa_offset 208
 801 0533 E9D9FCFF 		jmp	.L31
 801      FF
 802              	.LVL92:
 803 0538 0F1F8400 		.p2align 4,,10
 803      00000000 
 804              		.p2align 3
 805              	.L12:
 806              	.LBE380:
 807              	.LBE379:
 808              	.LBB381:
 809              	.LBB382:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 810              		.loc 4 244 0 is_stmt 0
 811 0540 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 811      000000
 812              	.LBE382:
 813              	.LBE381:
  58:fltk-1.3.4-1/src/Fl_Choice.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 814              		.loc 2 58 0 is_stmt 1
 815 0547 8B74240C 		movl	12(%rsp), %esi
 816 054b 8D5303   		leal	3(%rbx), %edx
 817              	.LVL93:
 818 054e 448B5424 		movl	20(%rsp), %r10d
 818      14
 819              	.LBB386:
 820              	.LBB383:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 821              		.loc 4 244 0
 822 0553 4883EC08 		subq	$8, %rsp
 823              		.cfi_def_cfa_offset 216
 824 0557 458D441E 		leal	3(%r14,%rbx), %r8d
 824      03
 825 055c 488B07   		movq	(%rdi), %rax
 826              	.LBE383:
 827              	.LBE386:
  58:fltk-1.3.4-1/src/Fl_Choice.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 828              		.loc 2 58 0
 829 055f 468D2C36 		leal	(%rsi,%r14), %r13d
 830              	.LVL94:
 831              	.LBB387:
 832              	.LBB384:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 833              		.loc 4 244 0
 834 0563 52       		pushq	%rdx
 835              		.cfi_def_cfa_offset 224
 836              	.LBE384:
 837              	.LBE387:
  58:fltk-1.3.4-1/src/Fl_Choice.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 838              		.loc 2 58 0
 839 0564 4101F2   		addl	%esi, %r10d
 840              	.LVL95:
 841              	.LBB388:
 842              	.LBB385:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 843              		.loc 4 244 0
 844 0567 44895424 		movl	%r10d, 36(%rsp)
 844      24
 845 056c 8974241C 		movl	%esi, 28(%rsp)
 846              	.LVL96:
 847 0570 4589D1   		movl	%r10d, %r9d
 848 0573 4489E9   		movl	%r13d, %ecx
 849 0576 FF90B000 		call	*176(%rax)
 849      0000
 850              	.LVL97:
 851              	.LBE385:
 852              	.LBE388:
 853              	.LBB389:
 854              	.LBB390:
 855 057c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 855      000000
 856 0583 448B5424 		movl	36(%rsp), %r10d
 856      24
 857              	.LBE390:
 858              	.LBE389:
  59:fltk-1.3.4-1/src/Fl_Choice.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 859              		.loc 2 59 0
 860 0588 8D5301   		leal	1(%rbx), %edx
 861              	.LVL98:
 862              	.LBB392:
 863              	.LBB391:
 244:fltk-1.3.4-1/FL/fl_draw.H **** /**
 864              		.loc 4 244 0
 865 058b 4429F3   		subl	%r14d, %ebx
 866              	.LVL99:
 867 058e 8B74241C 		movl	28(%rsp), %esi
 868 0592 4489E9   		movl	%r13d, %ecx
 869 0595 448D4301 		leal	1(%rbx), %r8d
 870              	.LVL100:
 871 0599 488B07   		movq	(%rdi), %rax
 872 059c 4589D1   		movl	%r10d, %r9d
 873 059f 891424   		movl	%edx, (%rsp)
 874 05a2 FF90B000 		call	*176(%rax)
 874      0000
 875              	.LVL101:
 876 05a8 59       		popq	%rcx
 877              		.cfi_def_cfa_offset 216
 878 05a9 5E       		popq	%rsi
 879              		.cfi_def_cfa_offset 208
 880 05aa E962FCFF 		jmp	.L31
 880      FF
 881              	.LVL102:
 882 05af 90       		.p2align 4,,10
 883              		.p2align 3
 884              	.L18:
 885              	.LBE391:
 886              	.LBE392:
 887              	.LBB393:
 888              	.LBB371:
 889              	.LBB368:
 890              	.LBB369:
 344:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 345:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Prevents a menu item from being picked. Note that this will also cause
 346:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the menu item to appear grayed-out.
 347:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 348:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void deactivate() {flags |= FL_MENU_INACTIVE;}
 891              		.loc 6 348 0
 892 05b0 834C2470 		orl	$1, 112(%rsp)
 892      01
 893 05b5 E9C5FCFF 		jmp	.L19
 893      FF
 894              	.LVL103:
 895 05ba 660F1F44 		.p2align 4,,10
 895      0000
 896              		.p2align 3
 897              	.L21:
 898 05c0 418B878C 		movl	140(%r15), %eax
 898      000000
 899              	.LVL104:
 900 05c7 E92CFDFF 		jmp	.L22
 900      FF
 901              	.LVL105:
 902 05cc 0F1F4000 		.p2align 4,,10
 903              		.p2align 3
 904              	.L9:
 905              	.LBE369:
 906              	.LBE368:
 907              	.LBE371:
 908              	.LBE393:
  55:fltk-1.3.4-1/src/Fl_Choice.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 909              		.loc 2 55 0 discriminator 2
 910 05d0 418B7F50 		movl	80(%r15), %edi
 911 05d4 E8000000 		call	_Z11fl_inactivej
 911      00
 912              	.LVL106:
 913 05d9 89C6     		movl	%eax, %esi
 914 05db E902FBFF 		jmp	.L10
 914      FF
 915              	.LVL107:
 916              		.p2align 4,,10
 917              		.p2align 3
 918              	.L59:
 919              	.LBB394:
 920              	.LBB372:
 921              	.LBB370:
 922              	.LBB364:
 109:fltk-1.3.4-1/src/Fl_Choice.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 923              		.loc 2 109 0 discriminator 1
 924 05e0 E8000000 		call	_Z11fl_inactivej
 924      00
 925              	.LVL108:
 926 05e5 89442440 		movl	%eax, 64(%rsp)
 927 05e9 E942FDFF 		jmp	.L25
 927      FF
 928              	.LVL109:
 929 05ee 6690     		.p2align 4,,10
 930              		.p2align 3
 931              	.L29:
 932 05f0 438D0436 		leal	(%r14,%r14), %eax
 933 05f4 89C6     		movl	%eax, %esi
 934 05f6 89442414 		movl	%eax, 20(%rsp)
 935 05fa 8B442410 		movl	16(%rsp), %eax
 936 05fe 29F0     		subl	%esi, %eax
 937 0600 83E801   		subl	$1, %eax
 938 0603 89C2     		movl	%eax, %edx
 939              	.LVL110:
 940 0605 C1EA1F   		shrl	$31, %edx
 941 0608 01D0     		addl	%edx, %eax
 942 060a D1F8     		sarl	%eax
 943 060c E91DFEFF 		jmp	.L30
 943      FF
 944              	.LVL111:
 945              		.p2align 4,,10
 946 0611 0F1F8000 		.p2align 3
 946      000000
 947              	.L20:
 948              	.LBE364:
 117:fltk-1.3.4-1/src/Fl_Choice.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 949              		.loc 2 117 0
 950 0618 4883EC08 		subq	$8, %rsp
 951              		.cfi_def_cfa_offset 216
 952 061c 31C0     		xorl	%eax, %eax
 953 061e 4C393D00 		cmpq	%r15, _ZN2Fl6focus_E(%rip)
 953      000000
 954 0625 4589E8   		movl	%r13d, %r8d
 955 0628 4D89F9   		movq	%r15, %r9
 956 062b 89D9     		movl	%ebx, %ecx
 957 062d 89EA     		movl	%ebp, %edx
 958 062f 4489E6   		movl	%r12d, %esi
 116:fltk-1.3.4-1/src/Fl_Choice.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 959              		.loc 2 116 0
 960 0632 C6050000 		movb	$2, fl_draw_shortcut(%rip)
 960      000002
 117:fltk-1.3.4-1/src/Fl_Choice.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 961              		.loc 2 117 0
 962 0639 0F94C0   		sete	%al
 963 063c 50       		pushq	%rax
 964              		.cfi_def_cfa_offset 224
 965 063d 488D7C24 		leaq	96(%rsp), %rdi
 965      60
 966 0642 E8000000 		call	_ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
 966      00
 967              	.LVL112:
 118:fltk-1.3.4-1/src/Fl_Choice.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 968              		.loc 2 118 0
 969 0647 5F       		popq	%rdi
 970              		.cfi_def_cfa_offset 216
 971 0648 C6050000 		movb	$0, fl_draw_shortcut(%rip)
 971      000000
 972 064f 4158     		popq	%r8
 973              		.cfi_def_cfa_offset 208
 974 0651 E91DFDFF 		jmp	.L28
 974      FF
 975              	.LVL113:
 976 0656 662E0F1F 		.p2align 4,,10
 976      84000000 
 976      0000
 977              		.p2align 3
 978              	.L60:
 979              	.LBB365:
 113:fltk-1.3.4-1/src/Fl_Choice.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 980              		.loc 2 113 0 discriminator 1
 981 0660 410FB677 		movzbl	110(%r15), %esi
 981      6E
 982 0665 4589E9   		movl	%r13d, %r9d
 983 0668 4189D8   		movl	%ebx, %r8d
 984 066b 89E9     		movl	%ebp, %ecx
 985 066d 4489E2   		movl	%r12d, %edx
 986 0670 4C89FF   		movq	%r15, %rdi
 987 0673 E8000000 		call	_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
 987      00
 988              	.LVL114:
 989 0678 E9F6FCFF 		jmp	.L28
 989      FF
 990              	.LVL115:
 991 067d 0F1F00   		.p2align 4,,10
 992              		.p2align 3
 993              	.L15:
 994              	.LBE365:
 995              	.LBE370:
 996              	.LBE372:
 997              	.LBE394:
  85:fltk-1.3.4-1/src/Fl_Choice.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 998              		.loc 2 85 0 discriminator 2
 999 0680 418B7F50 		movl	80(%r15), %edi
 1000 0684 E8000000 		call	_Z11fl_inactivej
 1000      00
 1001              	.LVL116:
 1002 0689 89C6     		movl	%eax, %esi
 1003 068b E964FEFF 		jmp	.L16
 1003      FF
 1004              	.LVL117:
 1005              		.p2align 4,,10
 1006              		.p2align 3
 1007              	.L62:
  78:fltk-1.3.4-1/src/Fl_Choice.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 1008              		.loc 2 78 0
 1009 0690 BA070000 		movl	$7, %edx
 1009      00
 1010 0695 4489EE   		movl	%r13d, %esi
 1011 0698 4C89FF   		movq	%r15, %rdi
 1012 069b E8000000 		call	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
 1012      00
 1013              	.LVL118:
 1014 06a0 448B5C24 		movl	24(%rsp), %r11d
 1014      18
 1015 06a5 8B4C241C 		movl	28(%rsp), %ecx
 1016 06a9 E90BFEFF 		jmp	.L14
 1016      FF
 1017              	.LVL119:
 1018              	.L61:
 1019              		.loc 2 126 0
 1020 06ae E8000000 		call	__stack_chk_fail
 1020      00
 1021              	.LVL120:
 1022              		.cfi_endproc
 1023              	.LFE553:
 1025              		.section	.text.unlikely._ZN9Fl_Choice4drawEv
 1026              	.LCOLDE7:
 1027              		.section	.text._ZN9Fl_Choice4drawEv
 1028              	.LHOTE7:
 1029              		.section	.text.unlikely._ZN9Fl_ChoiceD2Ev,"axG",@progbits,_ZN9Fl_ChoiceD5Ev,comdat
 1030              		.align 2
 1031              	.LCOLDB8:
 1032              		.section	.text._ZN9Fl_ChoiceD2Ev,"axG",@progbits,_ZN9Fl_ChoiceD5Ev,comdat
 1033              	.LHOTB8:
 1034              		.align 2
 1035              		.p2align 4,,15
 1036              		.weak	_ZN9Fl_ChoiceD2Ev
 1038              	_ZN9Fl_ChoiceD2Ev:
 1039              	.LFB561:
 1040              		.file 7 "fltk-1.3.4-1/FL/Fl_Choice.H"
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
 1041              		.loc 7 83 0
 1042              		.cfi_startproc
 1043              	.LVL121:
 1044              	.LBB395:
 1045              		.loc 7 83 0
 1046 0000 48C70700 		movq	$_ZTV9Fl_Choice+16, (%rdi)
 1046      000000
 1047 0007 E9000000 		jmp	_ZN8Fl_Menu_D2Ev
 1047      00
 1048              	.LVL122:
 1049              	.LBE395:
 1050              		.cfi_endproc
 1051              	.LFE561:
 1053              		.section	.text.unlikely._ZN9Fl_ChoiceD2Ev,"axG",@progbits,_ZN9Fl_ChoiceD5Ev,comdat
 1054              	.LCOLDE8:
 1055              		.section	.text._ZN9Fl_ChoiceD2Ev,"axG",@progbits,_ZN9Fl_ChoiceD5Ev,comdat
 1056              	.LHOTE8:
 1057              		.weak	_ZN9Fl_ChoiceD1Ev
 1058              		.set	_ZN9Fl_ChoiceD1Ev,_ZN9Fl_ChoiceD2Ev
 1059              		.section	.text.unlikely._ZN9Fl_ChoiceD0Ev,"axG",@progbits,_ZN9Fl_ChoiceD5Ev,comdat
 1060              		.align 2
 1061              	.LCOLDB9:
 1062              		.section	.text._ZN9Fl_ChoiceD0Ev,"axG",@progbits,_ZN9Fl_ChoiceD5Ev,comdat
 1063              	.LHOTB9:
 1064              		.align 2
 1065              		.p2align 4,,15
 1066              		.weak	_ZN9Fl_ChoiceD0Ev
 1068              	_ZN9Fl_ChoiceD0Ev:
 1069              	.LFB563:
 1070              		.loc 7 83 0
 1071              		.cfi_startproc
 1072              	.LVL123:
 1073 0000 53       		pushq	%rbx
 1074              		.cfi_def_cfa_offset 16
 1075              		.cfi_offset 3, -16
 1076              		.loc 7 83 0
 1077 0001 4889FB   		movq	%rdi, %rbx
 1078              	.LBB396:
 1079              	.LBB397:
 1080 0004 48C70700 		movq	$_ZTV9Fl_Choice+16, (%rdi)
 1080      000000
 1081 000b E8000000 		call	_ZN8Fl_Menu_D2Ev
 1081      00
 1082              	.LVL124:
 1083              	.LBE397:
 1084              	.LBE396:
 1085 0010 4889DF   		movq	%rbx, %rdi
 1086 0013 5B       		popq	%rbx
 1087              		.cfi_def_cfa_offset 8
 1088              	.LVL125:
 1089 0014 E9000000 		jmp	_ZdlPv
 1089      00
 1090              	.LVL126:
 1091              		.cfi_endproc
 1092              	.LFE563:
 1094              		.section	.text.unlikely._ZN9Fl_ChoiceD0Ev,"axG",@progbits,_ZN9Fl_ChoiceD5Ev,comdat
 1095              	.LCOLDE9:
 1096              		.section	.text._ZN9Fl_ChoiceD0Ev,"axG",@progbits,_ZN9Fl_ChoiceD5Ev,comdat
 1097              	.LHOTE9:
 1098              		.section	.text.unlikely._ZN9Fl_Choice6handleEi,"ax",@progbits
 1099              		.align 2
 1100              	.LCOLDB10:
 1101              		.section	.text._ZN9Fl_Choice6handleEi,"ax",@progbits
 1102              	.LHOTB10:
 1103              		.align 2
 1104              		.p2align 4,,15
 1105              		.globl	_ZN9Fl_Choice6handleEi
 1107              	_ZN9Fl_Choice6handleEi:
 1108              	.LFB559:
 127:fltk-1.3.4-1/src/Fl_Choice.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Choice.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Choice.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Choice.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Choice.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Choice.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Choice.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Choice.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Choice.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Choice.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Choice.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Choice.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Choice.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Choice.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Choice.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Choice.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Choice.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Choice.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Choice.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Choice.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Choice.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Choice.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Choice.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Choice.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Choice.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Choice.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Choice.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Choice.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Choice.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Choice.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Choice.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Choice.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Choice.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Choice.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Choice.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Choice.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Choice.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Choice.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Choice.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Choice.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Choice.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Choice.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Choice.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Choice.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Choice.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Choice.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Choice.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1109              		.loc 2 173 0
 1110              		.cfi_startproc
 1111              	.LVL127:
 1112 0000 488B4778 		movq	120(%rdi), %rax
 1113              	.LVL128:
 174:fltk-1.3.4-1/src/Fl_Choice.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 1114              		.loc 2 174 0
 1115 0004 4885C0   		testq	%rax, %rax
 1116 0007 741F     		je	.L100
 1117              	.LVL129:
 1118              		.loc 2 174 0 is_stmt 0 discriminator 2
 1119 0009 48833800 		cmpq	$0, (%rax)
 1120 000d 7419     		je	.L100
 1121              	.LVL130:
 1122              	.LBB460:
 1123              	.LBB461:
 1124              	.LBB462:
 175:fltk-1.3.4-1/src/Fl_Choice.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Choice.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 1125              		.loc 2 176 0 is_stmt 1
 1126 000f 83FE0C   		cmpl	$12, %esi
 1127 0012 7714     		ja	.L100
 1128 0014 89F6     		movl	%esi, %esi
 1129              	.LBE462:
 1130              	.LBE461:
 1131              	.LBE460:
 173:fltk-1.3.4-1/src/Fl_Choice.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 1132              		.loc 2 173 0
 1133 0016 4154     		pushq	%r12
 1134              		.cfi_def_cfa_offset 16
 1135              		.cfi_offset 12, -16
 1136 0018 55       		pushq	%rbp
 1137              		.cfi_def_cfa_offset 24
 1138              		.cfi_offset 6, -24
 1139 0019 53       		pushq	%rbx
 1140              		.cfi_def_cfa_offset 32
 1141              		.cfi_offset 3, -32
 1142 001a 4889FB   		movq	%rdi, %rbx
 1143              	.LBB491:
 1144              	.LBB486:
 1145              	.LBB481:
 1146              		.loc 2 176 0
 1147 001d FF24F500 		jmp	*.L81(,%rsi,8)
 1147      000000
 1148              		.section	.rodata._ZN9Fl_Choice6handleEi,"a",@progbits
 1149              		.align 8
 1150              		.align 4
 1151              	.L81:
 1152 0000 00000000 		.quad	.L88
 1152      00000000 
 1153 0008 00000000 		.quad	.L72
 1153      00000000 
 1154 0010 00000000 		.quad	.L88
 1154      00000000 
 1155 0018 00000000 		.quad	.L82
 1155      00000000 
 1156 0020 00000000 		.quad	.L82
 1156      00000000 
 1157 0028 00000000 		.quad	.L88
 1157      00000000 
 1158 0030 00000000 		.quad	.L80
 1158      00000000 
 1159 0038 00000000 		.quad	.L80
 1159      00000000 
 1160 0040 00000000 		.quad	.L71
 1160      00000000 
 1161 0048 00000000 		.quad	.L88
 1161      00000000 
 1162 0050 00000000 		.quad	.L88
 1162      00000000 
 1163 0058 00000000 		.quad	.L88
 1163      00000000 
 1164 0060 00000000 		.quad	.L78
 1164      00000000 
 1165              		.section	.text._ZN9Fl_Choice6handleEi
 1166              	.LVL131:
 1167              		.p2align 4,,10
 1168 0024 0F1F4000 		.p2align 3
 1169              	.L100:
 1170              		.cfi_def_cfa_offset 8
 1171              		.cfi_restore 3
 1172              		.cfi_restore 6
 1173              		.cfi_restore 12
 1174              	.LBB463:
 177:fltk-1.3.4-1/src/Fl_Choice.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Choice.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Choice.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Choice.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Choice.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Choice.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Choice.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Choice.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Choice.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Choice.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Choice.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Choice.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Choice.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Choice.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Choice.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Choice.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Choice.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Choice.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Choice.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Choice.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Choice.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Choice.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Choice.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Choice.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Choice.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Choice.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Choice.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Choice.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Choice.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Choice.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Choice.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Choice.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Choice.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Choice.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Choice.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Choice.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Choice.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Choice.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Choice.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Choice.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 1175              		.loc 2 216 0
 1176 0028 31C0     		xorl	%eax, %eax
 1177              	.LBE463:
 1178              	.LBE481:
 1179              	.LBE486:
 1180              	.LBE491:
 217:fltk-1.3.4-1/src/Fl_Choice.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Choice.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 1181              		.loc 2 218 0
 1182 002a C3       		ret
 1183              	.LVL132:
 1184 002b 0F1F4400 		.p2align 4,,10
 1184      00
 1185              		.p2align 3
 1186              	.L71:
 1187              		.cfi_def_cfa_offset 32
 1188              		.cfi_offset 3, -32
 1189              		.cfi_offset 6, -24
 1190              		.cfi_offset 12, -16
 1191              	.LBB492:
 1192              	.LBB487:
 1193              	.LBB482:
 1194              	.LBB477:
 182:fltk-1.3.4-1/src/Fl_Choice.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1195              		.loc 2 182 0
 1196 0030 833D0000 		cmpl	$32, _ZN2Fl8e_keysymE(%rip)
 1196      000020
 1197 0037 0F85B900 		jne	.L88
 1197      0000
 1198 003d F7050000 		testl	$5046272, _ZN2Fl7e_stateE(%rip)
 1198      00000000 
 1198      4D00
 1199 0047 0F85A900 		jne	.L88
 1199      0000
 1200 004d 0F1F00   		.p2align 4,,10
 1201              		.p2align 3
 1202              	.L72:
 1203              	.LBB464:
 1204              	.LBB465:
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
 1205              		.loc 3 1195 0
 1206 0050 BF010000 		movl	$1, %edi
 1206      00
 1207 0055 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 1207      00
 1208              	.LVL133:
 1209              	.LBE465:
 1210              	.LBE464:
 185:fltk-1.3.4-1/src/Fl_Choice.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1211              		.loc 2 185 0
 1212 005a 84C0     		testb	%al, %al
 1213 005c 0F85DE00 		jne	.L106
 1213      0000
 1214              	.L74:
 1215              	.LBB466:
 188:fltk-1.3.4-1/src/Fl_Choice.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1216              		.loc 2 188 0
 1217 0062 48833D00 		cmpq	$0, _ZN2Fl7scheme_E(%rip)
 1217      00000000 
 1218 006a 0F84E000 		je	.L107
 1218      0000
 1219              	.L75:
 1220              	.LVL134:
 189:fltk-1.3.4-1/src/Fl_Choice.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 1221              		.loc 2 189 0
 1222 0070 4883EC08 		subq	$8, %rsp
 1223              		.cfi_def_cfa_offset 40
 1224 0074 8B4B28   		movl	40(%rbx), %ecx
 1225 0077 8B5324   		movl	36(%rbx), %edx
 1226 007a 8B7320   		movl	32(%rbx), %esi
 1227 007d 488B7B78 		movq	120(%rbx), %rdi
 1228 0081 6A00     		pushq	$0
 1229              		.cfi_def_cfa_offset 48
 1230 0083 6A00     		pushq	$0
 1231              		.cfi_def_cfa_offset 56
 1232 0085 53       		pushq	%rbx
 1233              		.cfi_def_cfa_offset 64
 1234 0086 4C8B8B80 		movq	128(%rbx), %r9
 1234      000000
 1235 008d 448B432C 		movl	44(%rbx), %r8d
 1236 0091 E8000000 		call	_ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i
 1236      00
 1237              	.LVL135:
 1238 0096 4883C420 		addq	$32, %rsp
 1239              		.cfi_def_cfa_offset 32
 1240 009a 4889C5   		movq	%rax, %rbp
 1241              	.LVL136:
 1242              	.L83:
 1243              	.LBE466:
 198:fltk-1.3.4-1/src/Fl_Choice.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 1244              		.loc 2 198 0
 1245 009d 4885ED   		testq	%rbp, %rbp
 1246 00a0 B8010000 		movl	$1, %eax
 1246      00
 1247              	.LVL137:
 1248 00a5 7427     		je	.L93
 1249              	.LVL138:
 1250 00a7 F6452060 		testb	$96, 32(%rbp)
 1251 00ab 7521     		jne	.L93
 1252              	.LVL139:
 1253              	.L103:
 206:fltk-1.3.4-1/src/Fl_Choice.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1254              		.loc 2 206 0
 1255 00ad 483BAB80 		cmpq	128(%rbx), %rbp
 1255      000000
 1256 00b4 7408     		je	.L79
 1257 00b6 4889DF   		movq	%rbx, %rdi
 1258 00b9 E8000000 		call	_ZN9Fl_Widget6redrawEv
 1258      00
 1259              	.LVL140:
 1260              	.L79:
 207:fltk-1.3.4-1/src/Fl_Choice.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 1261              		.loc 2 207 0
 1262 00be 4889EE   		movq	%rbp, %rsi
 1263 00c1 4889DF   		movq	%rbx, %rdi
 1264 00c4 E8000000 		call	_ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item
 1264      00
 1265              	.LVL141:
 208:fltk-1.3.4-1/src/Fl_Choice.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1266              		.loc 2 208 0
 1267 00c9 B8010000 		movl	$1, %eax
 1267      00
 1268              	.LVL142:
 1269              	.L93:
 1270              	.LBE477:
 1271              	.LBE482:
 1272              	.LBE487:
 1273              	.LBE492:
 1274              		.loc 2 218 0
 1275 00ce 5B       		popq	%rbx
 1276              		.cfi_remember_state
 1277              		.cfi_restore 3
 1278              		.cfi_def_cfa_offset 24
 1279              	.LVL143:
 1280 00cf 5D       		popq	%rbp
 1281              		.cfi_restore 6
 1282              		.cfi_def_cfa_offset 16
 1283 00d0 415C     		popq	%r12
 1284              		.cfi_restore 12
 1285              		.cfi_def_cfa_offset 8
 1286 00d2 C3       		ret
 1287              	.LVL144:
 1288              		.p2align 4,,10
 1289 00d3 0F1F4400 		.p2align 3
 1289      00
 1290              	.L82:
 1291              		.cfi_restore_state
 1292 00d8 5B       		popq	%rbx
 1293              		.cfi_remember_state
 1294              		.cfi_restore 3
 1295              		.cfi_def_cfa_offset 24
 1296              	.LVL145:
 1297              	.LBB493:
 1298              	.LBB488:
 1299              	.LBB483:
 1300              	.LBB478:
 179:fltk-1.3.4-1/src/Fl_Choice.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 1301              		.loc 2 179 0
 1302 00d9 B8010000 		movl	$1, %eax
 1302      00
 1303              	.LBE478:
 1304              	.LBE483:
 1305              	.LBE488:
 1306              	.LBE493:
 1307              		.loc 2 218 0
 1308 00de 5D       		popq	%rbp
 1309              		.cfi_restore 6
 1310              		.cfi_def_cfa_offset 16
 1311 00df 415C     		popq	%r12
 1312              		.cfi_restore 12
 1313              		.cfi_def_cfa_offset 8
 1314 00e1 C3       		ret
 1315              	.LVL146:
 1316              		.p2align 4,,10
 1317 00e2 660F1F44 		.p2align 3
 1317      0000
 1318              	.L80:
 1319              		.cfi_restore_state
 1320              	.LBB494:
 1321              	.LBB489:
 1322              	.LBB484:
 1323              	.LBB479:
 1324              	.LBB474:
 1325              	.LBB475:
 1326              		.loc 3 1195 0
 1327 00e8 BF010000 		movl	$1, %edi
 1327      00
 1328 00ed E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 1328      00
 1329              	.LVL147:
 1330              	.LBE475:
 1331              	.LBE474:
 211:fltk-1.3.4-1/src/Fl_Choice.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 1332              		.loc 2 211 0
 1333 00f2 84C0     		testb	%al, %al
 1334 00f4 7532     		jne	.L108
 1335              	.L88:
 216:fltk-1.3.4-1/src/Fl_Choice.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1336              		.loc 2 216 0
 1337 00f6 31C0     		xorl	%eax, %eax
 1338              	.LVL148:
 1339              	.L109:
 1340              	.LBE479:
 1341              	.LBE484:
 1342              	.LBE489:
 1343              	.LBE494:
 1344              		.loc 2 218 0
 1345 00f8 5B       		popq	%rbx
 1346              		.cfi_remember_state
 1347              		.cfi_restore 3
 1348              		.cfi_def_cfa_offset 24
 1349              	.LVL149:
 1350 00f9 5D       		popq	%rbp
 1351              		.cfi_restore 6
 1352              		.cfi_def_cfa_offset 16
 1353 00fa 415C     		popq	%r12
 1354              		.cfi_restore 12
 1355              		.cfi_def_cfa_offset 8
 1356 00fc C3       		ret
 1357              	.LVL150:
 1358 00fd 0F1F00   		.p2align 4,,10
 1359              		.p2align 3
 1360              	.L78:
 1361              		.cfi_restore_state
 1362              	.LBB495:
 1363              	.LBB490:
 1364              	.LBB485:
 1365              	.LBB480:
 203:fltk-1.3.4-1/src/Fl_Choice.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 1366              		.loc 2 203 0
 1367 0100 4889DF   		movq	%rbx, %rdi
 1368 0103 E8000000 		call	_ZN9Fl_Widget13test_shortcutEv
 1368      00
 1369              	.LVL151:
 1370 0108 85C0     		testl	%eax, %eax
 1371 010a 0F8552FF 		jne	.L74
 1371      FFFF
 1372              	.LVL152:
 204:fltk-1.3.4-1/src/Fl_Choice.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 1373              		.loc 2 204 0
 1374 0110 488B7B78 		movq	120(%rbx), %rdi
 1375 0114 E8000000 		call	_ZNK12Fl_Menu_Item13test_shortcutEv
 1375      00
 1376              	.LVL153:
 205:fltk-1.3.4-1/src/Fl_Choice.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 1377              		.loc 2 205 0
 1378 0119 4885C0   		testq	%rax, %rax
 204:fltk-1.3.4-1/src/Fl_Choice.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 1379              		.loc 2 204 0
 1380 011c 4889C5   		movq	%rax, %rbp
 1381              	.LVL154:
 205:fltk-1.3.4-1/src/Fl_Choice.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 1382              		.loc 2 205 0
 1383 011f 758C     		jne	.L103
 216:fltk-1.3.4-1/src/Fl_Choice.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1384              		.loc 2 216 0
 1385 0121 31C0     		xorl	%eax, %eax
 1386              	.LVL155:
 1387 0123 EBD3     		jmp	.L109
 1388              	.LVL156:
 1389              		.p2align 4,,10
 1390 0125 0F1F00   		.p2align 3
 1391              	.L108:
 212:fltk-1.3.4-1/src/Fl_Choice.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 1392              		.loc 2 212 0
 1393 0128 4889DF   		movq	%rbx, %rdi
 1394 012b E8000000 		call	_ZN9Fl_Widget6redrawEv
 1394      00
 1395              	.LVL157:
 213:fltk-1.3.4-1/src/Fl_Choice.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1396              		.loc 2 213 0
 1397 0130 B8010000 		movl	$1, %eax
 1397      00
 1398 0135 EB97     		jmp	.L93
 1399 0137 660F1F84 		.p2align 4,,10
 1399      00000000 
 1399      00
 1400              		.p2align 3
 1401              	.L106:
 185:fltk-1.3.4-1/src/Fl_Choice.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1402              		.loc 2 185 0
 1403 0140 4889DF   		movq	%rbx, %rdi
 1404 0143 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 1404      00
 1405              	.LVL158:
 1406 0148 E915FFFF 		jmp	.L74
 1406      FF
 1407 014d 0F1F00   		.p2align 4,,10
 1408              		.p2align 3
 1409              	.L107:
 1410              	.LVL159:
 1411              	.LBB476:
 188:fltk-1.3.4-1/src/Fl_Choice.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1412              		.loc 2 188 0
 1413 0150 8BBB9400 		movl	148(%rbx), %edi
 1413      0000
 1414 0156 BE070000 		movl	$7, %esi
 1414      00
 1415 015b E8000000 		call	_Z11fl_contrastjj
 1415      00
 1416              	.LVL160:
 1417 0160 3B839400 		cmpl	148(%rbx), %eax
 1417      0000
 1418 0166 0F8504FF 		jne	.L75
 1418      FFFF
 1419              	.LBB467:
 195:fltk-1.3.4-1/src/Fl_Choice.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1420              		.loc 2 195 0
 1421 016c 4883EC08 		subq	$8, %rsp
 1422              		.cfi_def_cfa_offset 40
 1423 0170 448B6364 		movl	100(%rbx), %r12d
 1424              	.LVL161:
 1425 0174 8B4B28   		movl	40(%rbx), %ecx
 1426              	.LBB468:
 1427              	.LBB469:
 390:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1428              		.loc 1 390 0
 1429 0177 C7436407 		movl	$7, 100(%rbx)
 1429      000000
 1430              	.LVL162:
 1431              	.LBE469:
 1432              	.LBE468:
 195:fltk-1.3.4-1/src/Fl_Choice.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1433              		.loc 2 195 0
 1434 017e 8B5324   		movl	36(%rbx), %edx
 1435 0181 8B7320   		movl	32(%rbx), %esi
 1436 0184 488B7B78 		movq	120(%rbx), %rdi
 1437 0188 6A00     		pushq	$0
 1438              		.cfi_def_cfa_offset 48
 1439 018a 6A00     		pushq	$0
 1440              		.cfi_def_cfa_offset 56
 1441 018c 53       		pushq	%rbx
 1442              		.cfi_def_cfa_offset 64
 1443 018d 4C8B8B80 		movq	128(%rbx), %r9
 1443      000000
 1444 0194 448B432C 		movl	44(%rbx), %r8d
 1445 0198 E8000000 		call	_ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i
 1445      00
 1446              	.LVL163:
 1447              	.LBB470:
 1448              	.LBB471:
 390:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1449              		.loc 1 390 0
 1450 019d 44896364 		movl	%r12d, 100(%rbx)
 1451              	.LBE471:
 1452              	.LBE470:
 195:fltk-1.3.4-1/src/Fl_Choice.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1453              		.loc 2 195 0
 1454 01a1 4889C5   		movq	%rax, %rbp
 1455              	.LVL164:
 1456              	.LBB473:
 1457              	.LBB472:
 390:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1458              		.loc 1 390 0
 1459 01a4 4883C420 		addq	$32, %rsp
 1460              		.cfi_def_cfa_offset 32
 1461 01a8 E9F0FEFF 		jmp	.L83
 1461      FF
 1462              	.LBE472:
 1463              	.LBE473:
 1464              	.LBE467:
 1465              	.LBE476:
 1466              	.LBE480:
 1467              	.LBE485:
 1468              	.LBE490:
 1469              	.LBE495:
 1470              		.cfi_endproc
 1471              	.LFE559:
 1473              		.section	.text.unlikely._ZN9Fl_Choice6handleEi
 1474              	.LCOLDE10:
 1475              		.section	.text._ZN9Fl_Choice6handleEi
 1476              	.LHOTE10:
 1477              		.section	.text.unlikely._ZN9Fl_ChoiceC2EiiiiPKc,"ax",@progbits
 1478              		.align 2
 1479              	.LCOLDB11:
 1480              		.section	.text._ZN9Fl_ChoiceC2EiiiiPKc,"ax",@progbits
 1481              	.LHOTB11:
 1482              		.align 2
 1483              		.p2align 4,,15
 1484              		.globl	_ZN9Fl_ChoiceC2EiiiiPKc
 1486              	_ZN9Fl_ChoiceC2EiiiiPKc:
 1487              	.LFB555:
 138:fltk-1.3.4-1/src/Fl_Choice.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1488              		.loc 2 138 0
 1489              		.cfi_startproc
 1490              	.LVL165:
 1491 0000 53       		pushq	%rbx
 1492              		.cfi_def_cfa_offset 16
 1493              		.cfi_offset 3, -16
 138:fltk-1.3.4-1/src/Fl_Choice.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 1494              		.loc 2 138 0
 1495 0001 4889FB   		movq	%rdi, %rbx
 1496              	.LBB496:
 139:fltk-1.3.4-1/src/Fl_Choice.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1497              		.loc 2 139 0
 1498 0004 E8000000 		call	_ZN8Fl_Menu_C2EiiiiPKc
 1498      00
 1499              	.LVL166:
 1500 0009 48C70300 		movq	$_ZTV9Fl_Choice+16, (%rbx)
 1500      000000
 1501              	.LVL167:
 1502              	.LBB497:
 1503              	.LBB498:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1504              		.loc 1 357 0
 1505 0010 C7435404 		movl	$4, 84(%rbx)
 1505      000000
 1506              	.LVL168:
 1507              	.LBE498:
 1508              	.LBE497:
 1509              	.LBB499:
 1510              	.LBB500:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1511              		.loc 1 654 0
 1512 0017 C6436F04 		movb	$4, 111(%rbx)
 1513              	.LVL169:
 1514              	.LBE500:
 1515              	.LBE499:
 1516              	.LBB501:
 1517              	.LBB502:
 1518              		.file 8 "fltk-1.3.4-1/FL/Fl_Menu_.H"
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
 1519              		.loc 8 157 0
 1520 001b C7838C00 		movl	$0, 140(%rbx)
 1520      00000000 
 1520      0000
 1521              	.LVL170:
 1522              	.LBE502:
 1523              	.LBE501:
 1524              	.LBB503:
 1525              	.LBB504:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1526              		.loc 1 372 0
 1527 0025 C6436E01 		movb	$1, 110(%rbx)
 1528              	.LVL171:
 1529              	.LBE504:
 1530              	.LBE503:
 1531              	.LBB505:
 1532              	.LBB506:
 158:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Gets the font size of menu item labels.  */
 159:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Fontsize textsize() const {return textsize_;}
 160:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Sets the font size of menu item labels.  */
 161:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void textsize(Fl_Fontsize c) {textsize_=c;}
 162:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Get the current color of menu item labels.  */
 163:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Color textcolor() const {return textcolor_;}
 164:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Sets the current color of menu item labels. */
 165:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void textcolor(Fl_Color c) {textcolor_=c;}
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
 1533              		.loc 8 175 0
 1534 0029 C6838900 		movb	$14, 137(%rbx)
 1534      00000E
 1535              	.LVL172:
 1536              	.LBE506:
 1537              	.LBE505:
 1538              	.LBE496:
 145:fltk-1.3.4-1/src/Fl_Choice.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 1539              		.loc 2 145 0
 1540 0030 5B       		popq	%rbx
 1541              		.cfi_def_cfa_offset 8
 1542              	.LVL173:
 1543 0031 C3       		ret
 1544              		.cfi_endproc
 1545              	.LFE555:
 1547              		.section	.text.unlikely._ZN9Fl_ChoiceC2EiiiiPKc
 1548              	.LCOLDE11:
 1549              		.section	.text._ZN9Fl_ChoiceC2EiiiiPKc
 1550              	.LHOTE11:
 1551              		.globl	_ZN9Fl_ChoiceC1EiiiiPKc
 1552              		.set	_ZN9Fl_ChoiceC1EiiiiPKc,_ZN9Fl_ChoiceC2EiiiiPKc
 1553              		.section	.text.unlikely._ZN9Fl_Choice5valueEPK12Fl_Menu_Item,"ax",@progbits
 1554              		.align 2
 1555              	.LCOLDB12:
 1556              		.section	.text._ZN9Fl_Choice5valueEPK12Fl_Menu_Item,"ax",@progbits
 1557              	.LHOTB12:
 1558              		.align 2
 1559              		.p2align 4,,15
 1560              		.globl	_ZN9Fl_Choice5valueEPK12Fl_Menu_Item
 1562              	_ZN9Fl_Choice5valueEPK12Fl_Menu_Item:
 1563              	.LFB557:
 153:fltk-1.3.4-1/src/Fl_Choice.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1564              		.loc 2 153 0
 1565              		.cfi_startproc
 1566              	.LVL174:
 1567 0000 53       		pushq	%rbx
 1568              		.cfi_def_cfa_offset 16
 1569              		.cfi_offset 3, -16
 153:fltk-1.3.4-1/src/Fl_Choice.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1570              		.loc 2 153 0
 1571 0001 4889FB   		movq	%rdi, %rbx
 154:fltk-1.3.4-1/src/Fl_Choice.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1572              		.loc 2 154 0
 1573 0004 E8000000 		call	_ZN8Fl_Menu_5valueEPK12Fl_Menu_Item
 1573      00
 1574              	.LVL175:
 1575 0009 85C0     		testl	%eax, %eax
 1576 000b 7503     		jne	.L118
 157:fltk-1.3.4-1/src/Fl_Choice.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 1577              		.loc 2 157 0
 1578 000d 5B       		popq	%rbx
 1579              		.cfi_remember_state
 1580              		.cfi_def_cfa_offset 8
 1581              	.LVL176:
 1582 000e C3       		ret
 1583              	.LVL177:
 1584 000f 90       		.p2align 4,,10
 1585              		.p2align 3
 1586              	.L118:
 1587              		.cfi_restore_state
 155:fltk-1.3.4-1/src/Fl_Choice.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 1588              		.loc 2 155 0
 1589 0010 4889DF   		movq	%rbx, %rdi
 1590 0013 E8000000 		call	_ZN9Fl_Widget6redrawEv
 1590      00
 1591              	.LVL178:
 156:fltk-1.3.4-1/src/Fl_Choice.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1592              		.loc 2 156 0
 1593 0018 B8010000 		movl	$1, %eax
 1593      00
 157:fltk-1.3.4-1/src/Fl_Choice.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 1594              		.loc 2 157 0
 1595 001d 5B       		popq	%rbx
 1596              		.cfi_def_cfa_offset 8
 1597              	.LVL179:
 1598 001e C3       		ret
 1599              		.cfi_endproc
 1600              	.LFE557:
 1602              		.section	.text.unlikely._ZN9Fl_Choice5valueEPK12Fl_Menu_Item
 1603              	.LCOLDE12:
 1604              		.section	.text._ZN9Fl_Choice5valueEPK12Fl_Menu_Item
 1605              	.LHOTE12:
 1606              		.section	.text.unlikely._ZN9Fl_Choice5valueEi,"ax",@progbits
 1607              		.align 2
 1608              	.LCOLDB13:
 1609              		.section	.text._ZN9Fl_Choice5valueEi,"ax",@progbits
 1610              	.LHOTB13:
 1611              		.align 2
 1612              		.p2align 4,,15
 1613              		.globl	_ZN9Fl_Choice5valueEi
 1615              	_ZN9Fl_Choice5valueEi:
 1616              	.LFB558:
 165:fltk-1.3.4-1/src/Fl_Choice.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1617              		.loc 2 165 0
 1618              		.cfi_startproc
 1619              	.LVL180:
 1620 0000 55       		pushq	%rbp
 1621              		.cfi_def_cfa_offset 16
 1622              		.cfi_offset 6, -16
 1623 0001 53       		pushq	%rbx
 1624              		.cfi_def_cfa_offset 24
 1625              		.cfi_offset 3, -24
 1626 0002 4863DE   		movslq	%esi, %rbx
 1627 0005 4889FD   		movq	%rdi, %rbp
 1628 0008 4883EC08 		subq	$8, %rsp
 1629              		.cfi_def_cfa_offset 32
 166:fltk-1.3.4-1/src/Fl_Choice.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1630              		.loc 2 166 0
 1631 000c 83FBFF   		cmpl	$-1, %ebx
 1632 000f 743F     		je	.L137
 167:fltk-1.3.4-1/src/Fl_Choice.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1633              		.loc 2 167 0
 1634 0011 85DB     		testl	%ebx, %ebx
 1635 0013 782E     		js	.L121
 167:fltk-1.3.4-1/src/Fl_Choice.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1636              		.loc 2 167 0 is_stmt 0 discriminator 2
 1637 0015 E8000000 		call	_ZNK8Fl_Menu_4sizeEv
 1637      00
 1638              	.LVL181:
 1639 001a 83E801   		subl	$1, %eax
 1640 001d 39C3     		cmpl	%eax, %ebx
 1641 001f 7D22     		jge	.L121
 1642              	.LVL182:
 1643              	.LBB507:
 1644              	.LBB508:
 148:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the title of the last item chosen.  */
 1645              		.loc 8 148 0 is_stmt 1
 1646 0021 488D04DD 		leaq	0(,%rbx,8), %rax
 1646      00000000 
 1647 0029 48C1E306 		salq	$6, %rbx
 1648              	.LVL183:
 1649 002d 4889EF   		movq	%rbp, %rdi
 1650 0030 4829C3   		subq	%rax, %rbx
 1651 0033 4889DE   		movq	%rbx, %rsi
 1652 0036 48037578 		addq	120(%rbp), %rsi
 1653 003a E8000000 		call	_ZN8Fl_Menu_5valueEPK12Fl_Menu_Item
 1653      00
 1654              	.LVL184:
 1655              	.LBE508:
 1656              	.LBE507:
 168:fltk-1.3.4-1/src/Fl_Choice.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 1657              		.loc 2 168 0
 1658 003f 85C0     		testl	%eax, %eax
 1659 0041 7518     		jne	.L134
 1660              	.L121:
 171:fltk-1.3.4-1/src/Fl_Choice.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 1661              		.loc 2 171 0
 1662 0043 4883C408 		addq	$8, %rsp
 1663              		.cfi_remember_state
 1664              		.cfi_def_cfa_offset 24
 167:fltk-1.3.4-1/src/Fl_Choice.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 1665              		.loc 2 167 0
 1666 0047 31C0     		xorl	%eax, %eax
 171:fltk-1.3.4-1/src/Fl_Choice.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 1667              		.loc 2 171 0
 1668 0049 5B       		popq	%rbx
 1669              		.cfi_def_cfa_offset 16
 1670 004a 5D       		popq	%rbp
 1671              		.cfi_def_cfa_offset 8
 1672              	.LVL185:
 1673 004b C3       		ret
 1674              	.LVL186:
 1675 004c 0F1F4000 		.p2align 4,,10
 1676              		.p2align 3
 1677              	.L137:
 1678              		.cfi_restore_state
 1679              	.LBB509:
 1680              	.LBB510:
 154:fltk-1.3.4-1/src/Fl_Choice.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 1681              		.loc 2 154 0
 1682 0050 31F6     		xorl	%esi, %esi
 1683              	.LVL187:
 1684 0052 E8000000 		call	_ZN8Fl_Menu_5valueEPK12Fl_Menu_Item
 1684      00
 1685              	.LVL188:
 1686 0057 85C0     		testl	%eax, %eax
 1687 0059 74E8     		je	.L121
 1688              	.LVL189:
 1689              	.L134:
 1690              	.LBE510:
 1691              	.LBE509:
 169:fltk-1.3.4-1/src/Fl_Choice.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 1692              		.loc 2 169 0
 1693 005b 4889EF   		movq	%rbp, %rdi
 1694 005e E8000000 		call	_ZN9Fl_Widget6redrawEv
 1694      00
 1695              	.LVL190:
 171:fltk-1.3.4-1/src/Fl_Choice.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 1696              		.loc 2 171 0
 1697 0063 4883C408 		addq	$8, %rsp
 1698              		.cfi_def_cfa_offset 24
 170:fltk-1.3.4-1/src/Fl_Choice.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1699              		.loc 2 170 0
 1700 0067 B8010000 		movl	$1, %eax
 1700      00
 171:fltk-1.3.4-1/src/Fl_Choice.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 1701              		.loc 2 171 0
 1702 006c 5B       		popq	%rbx
 1703              		.cfi_def_cfa_offset 16
 1704 006d 5D       		popq	%rbp
 1705              		.cfi_def_cfa_offset 8
 1706              	.LVL191:
 1707 006e C3       		ret
 1708              		.cfi_endproc
 1709              	.LFE558:
 1711              		.section	.text.unlikely._ZN9Fl_Choice5valueEi
 1712              	.LCOLDE13:
 1713              		.section	.text._ZN9Fl_Choice5valueEi
 1714              	.LHOTE13:
 1715              		.weak	_ZTS9Fl_Choice
 1716              		.section	.rodata._ZTS9Fl_Choice,"aG",@progbits,_ZTS9Fl_Choice,comdat
 1717              		.align 8
 1720              	_ZTS9Fl_Choice:
 1721 0000 39466C5F 		.string	"9Fl_Choice"
 1721      43686F69 
 1721      636500
 1722              		.weak	_ZTI9Fl_Choice
 1723              		.section	.rodata._ZTI9Fl_Choice,"aG",@progbits,_ZTI9Fl_Choice,comdat
 1724              		.align 8
 1727              	_ZTI9Fl_Choice:
 1728 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1728      00000000 
 1729 0008 00000000 		.quad	_ZTS9Fl_Choice
 1729      00000000 
 1730 0010 00000000 		.quad	_ZTI8Fl_Menu_
 1730      00000000 
 1731              		.weak	_ZTV9Fl_Choice
 1732              		.section	.rodata._ZTV9Fl_Choice,"aG",@progbits,_ZTV9Fl_Choice,comdat
 1733              		.align 8
 1736              	_ZTV9Fl_Choice:
 1737 0000 00000000 		.quad	0
 1737      00000000 
 1738 0008 00000000 		.quad	_ZTI9Fl_Choice
 1738      00000000 
 1739 0010 00000000 		.quad	_ZN9Fl_ChoiceD1Ev
 1739      00000000 
 1740 0018 00000000 		.quad	_ZN9Fl_ChoiceD0Ev
 1740      00000000 
 1741 0020 00000000 		.quad	_ZN9Fl_Choice4drawEv
 1741      00000000 
 1742 0028 00000000 		.quad	_ZN9Fl_Choice6handleEi
 1742      00000000 
 1743 0030 00000000 		.quad	_ZN9Fl_Widget6resizeEiiii
 1743      00000000 
 1744 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1744      00000000 
 1745 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1745      00000000 
 1746 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1746      00000000 
 1747 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1747      00000000 
 1748 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1748      00000000 
 1749              		.section	.rodata.cst4,"aM",@progbits,4
 1750              		.align 4
 1751              	.LC6:
 1752 0000 1F852B3F 		.long	1059816735
 1753              		.text
 1754              	.Letext0:
 1755              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 1756              	.Letext_cold0:
 1757              		.file 9 "fltk-1.3.4-1/FL/fl_types.h"
 1758              		.file 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1759              		.file 11 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1760              		.file 12 "/usr/include/libio.h"
 1761              		.file 13 "fltk-1.3.4-1/FL/Fl_Image.H"
 1762              		.file 14 "fltk-1.3.4-1/FL/Fl_Device.H"
 1763              		.file 15 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Choice.cxx
     /tmp/ccpR2eEY.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/ccpR2eEY.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccpR2eEY.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccpR2eEY.s:96     .text._ZN9Fl_Choice4drawEv:0000000000000000 _ZN9Fl_Choice4drawEv
     /tmp/ccpR2eEY.s:1038   .text._ZN9Fl_ChoiceD2Ev:0000000000000000 _ZN9Fl_ChoiceD2Ev
     /tmp/ccpR2eEY.s:1736   .rodata._ZTV9Fl_Choice:0000000000000000 _ZTV9Fl_Choice
     /tmp/ccpR2eEY.s:1038   .text._ZN9Fl_ChoiceD2Ev:0000000000000000 _ZN9Fl_ChoiceD1Ev
     /tmp/ccpR2eEY.s:1068   .text._ZN9Fl_ChoiceD0Ev:0000000000000000 _ZN9Fl_ChoiceD0Ev
     /tmp/ccpR2eEY.s:1107   .text._ZN9Fl_Choice6handleEi:0000000000000000 _ZN9Fl_Choice6handleEi
     /tmp/ccpR2eEY.s:1486   .text._ZN9Fl_ChoiceC2EiiiiPKc:0000000000000000 _ZN9Fl_ChoiceC2EiiiiPKc
     /tmp/ccpR2eEY.s:1486   .text._ZN9Fl_ChoiceC2EiiiiPKc:0000000000000000 _ZN9Fl_ChoiceC1EiiiiPKc
     /tmp/ccpR2eEY.s:1562   .text._ZN9Fl_Choice5valueEPK12Fl_Menu_Item:0000000000000000 _ZN9Fl_Choice5valueEPK12Fl_Menu_Item
     /tmp/ccpR2eEY.s:1615   .text._ZN9Fl_Choice5valueEi:0000000000000000 _ZN9Fl_Choice5valueEi
     /tmp/ccpR2eEY.s:1720   .rodata._ZTS9Fl_Choice:0000000000000000 _ZTS9Fl_Choice
     /tmp/ccpR2eEY.s:1727   .rodata._ZTI9Fl_Choice:0000000000000000 _ZTI9Fl_Choice
     /tmp/ccpR2eEY.s:1751   .rodata.cst4:0000000000000000 .LC6
                           .group:0000000000000000 _ZN9Fl_ChoiceD5Ev
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_ZN2Fl7scheme_E
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
_ZNK9Fl_Widget8active_rEv
fl_graphics_driver
_Z16fl_color_averagejjf
fl_draw_shortcut
_ZNK8Fl_Label4drawEiiiij
_ZN2Fl6focus_E
_ZNK9Fl_Widget10draw_labelEv
_Z11fl_contrastjj
_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
_Z11fl_inactivej
_ZNK12Fl_Menu_Item4drawEiiiiPK8Fl_Menu_i
_ZNK9Fl_Widget10draw_focusE10Fl_Boxtypeiiii
__stack_chk_fail
_ZN8Fl_Menu_D2Ev
_ZdlPv
_ZN2Fl8e_keysymE
_ZN2Fl7e_stateE
_ZN2Fl6optionENS_9Fl_OptionE
_ZNK12Fl_Menu_Item8pulldownEiiiiPKS_PK8Fl_Menu_S1_i
_ZN9Fl_Widget6redrawEv
_ZN8Fl_Menu_6pickedEPK12Fl_Menu_Item
_ZN9Fl_Widget13test_shortcutEv
_ZNK12Fl_Menu_Item13test_shortcutEv
_ZN2Fl5focusEP9Fl_Widget
_ZN8Fl_Menu_C2EiiiiPKc
_ZN8Fl_Menu_5valueEPK12Fl_Menu_Item
_ZNK8Fl_Menu_4sizeEv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Menu_
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
