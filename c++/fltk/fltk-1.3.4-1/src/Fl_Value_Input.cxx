   1              		.file	"Fl_Value_Input.cxx"
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
  80              		.section	.text.unlikely._ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv,"ax",@progbits
  81              		.align 2
  82              	.LCOLDB4:
  83              		.section	.text._ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv,"ax",@progbits
  84              	.LHOTB4:
  85              		.align 2
  86              		.p2align 4,,15
  87              		.globl	_ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv
  89              	_ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv:
  90              	.LFB319:
  91              		.file 2 "fltk-1.3.4-1/src/Fl_Value_Input.cxx"
   1:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    1              		.file	"Fl_Value_Input.cxx"
   2:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
   5:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    7              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
   8:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8
  12:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   13              		.section	.text._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupE
  14:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   14              		.weak	_ZN9Fl_Widget8as_groupEv
  15:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   16              	_ZN9Fl_Widget8as_groupEv:
  16:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   17              	.LFB232:
  17:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  92              		.loc 2 30 0
  93              		.cfi_startproc
  94              	.LVL3:
  95 0000 53       		pushq	%rbx
  96              		.cfi_def_cfa_offset 16
  97              		.cfi_offset 3, -16
  98              	.LBB134:
  99              	.LBB135:
 100              		.file 3 "fltk-1.3.4-1/FL/Fl_Valuator.H"
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
 105:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 106:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void step(int a) {A = a; B = 1;}
 107:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**    See double Fl_Valuator::step() const   */
 108:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void step(double a, int b) {A = a; B = b;}
 109:fltk-1.3.4-1/FL/Fl_Valuator.H ****   void step(double s);
 110:fltk-1.3.4-1/FL/Fl_Valuator.H ****   /**
 111:fltk-1.3.4-1/FL/Fl_Valuator.H ****     Gets or sets the step value. As the user moves the mouse the
 112:fltk-1.3.4-1/FL/Fl_Valuator.H ****     value is rounded to the nearest multiple of the step value. This
 113:fltk-1.3.4-1/FL/Fl_Valuator.H ****     is done \e before clamping it to the range. For most widgets
 114:fltk-1.3.4-1/FL/Fl_Valuator.H ****     the default step is zero.
 115:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
 116:fltk-1.3.4-1/FL/Fl_Valuator.H ****     For precision the step is stored as the ratio of a double \p A and
 117:fltk-1.3.4-1/FL/Fl_Valuator.H ****     an integer \p B = A/B. You can set these values directly. Currently
 118:fltk-1.3.4-1/FL/Fl_Valuator.H ****     setting a floating point value sets the nearest A/1 or 1/B value
 119:fltk-1.3.4-1/FL/Fl_Valuator.H ****     possible.
 120:fltk-1.3.4-1/FL/Fl_Valuator.H ****   */
 121:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double step() const {return A/B;}
 101              		.loc 3 121 0
 102 0001 660FEFC0 		pxor	%xmm0, %xmm0
 103              	.LBE135:
 104              	.LBE134:
 105              		.loc 2 30 0
 106 0005 4889F3   		movq	%rsi, %rbx
 107 0008 4883EC10 		subq	$16, %rsp
 108              		.cfi_def_cfa_offset 32
 109              	.LBB137:
 110              	.LBB136:
 111              		.loc 3 121 0
 112 000c F20F108E 		movsd	152(%rsi), %xmm1
 112      98000000 
 113 0014 F20F2A86 		cvtsi2sd	160(%rsi), %xmm0
 113      A0000000 
 114 001c F20F5EC8 		divsd	%xmm0, %xmm1
 115              	.LVL4:
 116              	.LBE136:
 117              	.LBE137:
  31:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
 118              		.loc 2 33 0
 119 0020 660F28C1 		movapd	%xmm1, %xmm0
 120 0024 F20F114C 		movsd	%xmm1, 8(%rsp)
 120      2408
 121 002a E8000000 		call	floor
 121      00
 122              	.LVL5:
 123 002f F20F104C 		movsd	8(%rsp), %xmm1
 123      2408
 124 0035 660F28D1 		movapd	%xmm1, %xmm2
 125 0039 F20F5CD0 		subsd	%xmm0, %xmm2
 126 003d 660FEFC0 		pxor	%xmm0, %xmm0
 127 0041 660F2ED0 		ucomisd	%xmm0, %xmm2
 128 0045 7669     		jbe	.L17
 129              	.LVL6:
 130              	.L5:
 131 0047 488BBB20 		movq	288(%rbx), %rdi
 131      010000
 132 004e 31F6     		xorl	%esi, %esi
 133 0050 E8000000 		call	strtod
 133      00
 134              	.LVL7:
 135              	.L11:
  34:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136              		.loc 2 35 0
 137 0055 660F2E43 		ucomisd	120(%rbx), %xmm0
 137      78
 138 005a 0FB6436F 		movzbl	111(%rbx), %eax
 139 005e 7A02     		jp	.L9
 140 0060 741E     		je	.L18
 141              	.L9:
 142              	.LVL8:
 143              	.LBB138:
 144              	.LBB139:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145              		.loc 1 786 0
 146 0062 814B6080 		orl	$128, 96(%rbx)
 146      000000
 147              	.LBE139:
 148              	.LBE138:
  36:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 149              		.loc 2 38 0
 150 0069 84C0     		testb	%al, %al
 151              	.LBB141:
 152              	.LBB142:
  70:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
 153              		.loc 3 70 0
 154 006b F20F1143 		movsd	%xmm0, 120(%rbx)
 154      78
 155              	.LVL9:
 156              	.LBE142:
 157              	.LBE141:
 158              		.loc 2 38 0
 159 0070 7522     		jne	.L12
 160              	.LVL10:
 161              	.L4:
  39:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 162              		.loc 2 40 0
 163 0072 4883C410 		addq	$16, %rsp
 164              		.cfi_remember_state
 165              		.cfi_def_cfa_offset 16
 166 0076 5B       		popq	%rbx
 167              		.cfi_def_cfa_offset 8
 168              	.LVL11:
 169 0077 C3       		ret
 170              	.LVL12:
 171 0078 0F1F8400 		.p2align 4,,10
 171      00000000 
 172              		.p2align 3
 173              	.L18:
 174              		.cfi_restore_state
  35:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
 175              		.loc 2 35 0 discriminator 2
 176 0080 A802     		testb	$2, %al
 177 0082 74EE     		je	.L4
 178              	.LVL13:
 179              	.LBB144:
 180              	.LBB140:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 181              		.loc 1 786 0
 182 0084 814B6080 		orl	$128, 96(%rbx)
 182      000000
 183              	.LBE140:
 184              	.LBE144:
  38:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 185              		.loc 2 38 0
 186 008b 84C0     		testb	%al, %al
 187              	.LBB145:
 188              	.LBB143:
  70:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
 189              		.loc 3 70 0
 190 008d F20F1143 		movsd	%xmm0, 120(%rbx)
 190      78
 191              	.LVL14:
 192              	.LBE143:
 193              	.LBE145:
  38:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
 194              		.loc 2 38 0
 195 0092 74DE     		je	.L4
 196              	.LVL15:
 197              	.L12:
 198              	.LBB146:
 199              	.LBB147:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 200              		.loc 1 861 0 discriminator 1
 201 0094 488B5318 		movq	24(%rbx), %rdx
 202              	.LBE147:
 203              	.LBE146:
 204              		.loc 2 40 0 discriminator 1
 205 0098 4883C410 		addq	$16, %rsp
 206              		.cfi_remember_state
 207              		.cfi_def_cfa_offset 16
 208              	.LBB150:
 209              	.LBB148:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210              		.loc 1 861 0 discriminator 1
 211 009c 4889DE   		movq	%rbx, %rsi
 212 009f 4889DF   		movq	%rbx, %rdi
 213              	.LBE148:
 214              	.LBE150:
 215              		.loc 2 40 0 discriminator 1
 216 00a2 5B       		popq	%rbx
 217              		.cfi_def_cfa_offset 8
 218              	.LVL16:
 219              	.LBB151:
 220              	.LBB149:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 221              		.loc 1 861 0 discriminator 1
 222 00a3 E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 222      00
 223              	.LVL17:
 224 00a8 0F1F8400 		.p2align 4,,10
 224      00000000 
 225              		.p2align 3
 226              	.L17:
 227              		.cfi_restore_state
 228              	.LBE149:
 229              	.LBE151:
  33:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
 230              		.loc 2 33 0 discriminator 2
 231 00b0 660F2EC8 		ucomisd	%xmm0, %xmm1
 232 00b4 7A02     		jp	.L7
 233 00b6 748F     		je	.L5
 234              	.L7:
 235              	.LVL18:
  34:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 236              		.loc 2 34 0
 237 00b8 488BBB20 		movq	288(%rbx), %rdi
 237      010000
 238 00bf 31D2     		xorl	%edx, %edx
 239 00c1 31F6     		xorl	%esi, %esi
 240 00c3 E8000000 		call	strtol
 240      00
 241              	.LVL19:
 242 00c8 660FEFC0 		pxor	%xmm0, %xmm0
 243 00cc F2480F2A 		cvtsi2sdq	%rax, %xmm0
 243      C0
 244              	.LVL20:
 245 00d1 EB82     		jmp	.L11
 246              		.cfi_endproc
 247              	.LFE319:
 249              		.section	.text.unlikely._ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv
 250              	.LCOLDE4:
 251              		.section	.text._ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv
 252              	.LHOTE4:
 253              		.section	.text.unlikely._ZN14Fl_Value_Input4drawEv,"ax",@progbits
 254              		.align 2
 255              	.LCOLDB5:
 256              		.section	.text._ZN14Fl_Value_Input4drawEv,"ax",@progbits
 257              	.LHOTB5:
 258              		.align 2
 259              		.p2align 4,,15
 260              		.globl	_ZN14Fl_Value_Input4drawEv
 262              	_ZN14Fl_Value_Input4drawEv:
 263              	.LFB320:
  41:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 264              		.loc 2 42 0
 265              		.cfi_startproc
 266              	.LVL21:
 267 0000 53       		pushq	%rbx
 268              		.cfi_def_cfa_offset 16
 269              		.cfi_offset 3, -16
  43:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 270              		.loc 2 43 0
 271 0001 0FB6476D 		movzbl	109(%rdi), %eax
  42:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 272              		.loc 2 42 0
 273 0005 4889FB   		movq	%rdi, %rbx
 274              		.loc 2 43 0
 275 0008 A8FE     		testb	$-2, %al
 276 000a 7407     		je	.L20
 277              	.LVL22:
 278              	.LBB152:
 279              	.LBB153:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 280              		.loc 1 931 0 discriminator 1
 281 000c C6871501 		movb	$-128, 277(%rdi)
 281      000080
 282              	.LVL23:
 283              	.L20:
 284              	.LBE153:
 285              	.LBE152:
 286              	.LBB154:
 287              	.LBB155:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 288              		.loc 1 372 0
 289 0013 0FB6436E 		movzbl	110(%rbx), %eax
 290              	.LBE155:
 291              	.LBE154:
 292              	.LBB157:
 293              	.LBB158:
 415:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 294              		.loc 1 415 0
 295 0017 8B5364   		movl	100(%rbx), %edx
 296              	.LBE158:
 297              	.LBE157:
  44:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 298              		.loc 2 46 0
 299 001a 488DBBA8 		leaq	168(%rbx), %rdi
 299      000000
 300              	.LVL24:
 301              	.LBB161:
 302              	.LBB159:
 415:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303              		.loc 1 415 0
 304 0021 89930C01 		movl	%edx, 268(%rbx)
 304      0000
 305              	.LBE159:
 306              	.LBE161:
 307              	.LBB162:
 308              	.LBB156:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 309              		.loc 1 372 0
 310 0027 88831601 		movb	%al, 278(%rbx)
 310      0000
 311 002d 8B4368   		movl	104(%rbx), %eax
 312              	.LVL25:
 313              	.LBE156:
 314              	.LBE162:
 315              	.LBB163:
 316              	.LBB160:
 415:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 317              		.loc 1 415 0
 318 0030 89831001 		movl	%eax, 272(%rbx)
 318      0000
 319              	.LVL26:
 320              	.LBE160:
 321              	.LBE163:
 322              		.loc 2 46 0
 323 0036 E8000000 		call	_ZN8Fl_Input4drawEv
 323      00
 324              	.LVL27:
 325              	.LBB164:
 326              	.LBB165:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 327              		.loc 1 931 0
 328 003b C6831501 		movb	$0, 277(%rbx)
 328      000000
 329              	.LVL28:
 330              	.LBE165:
 331              	.LBE164:
  47:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 332              		.loc 2 48 0
 333 0042 5B       		popq	%rbx
 334              		.cfi_def_cfa_offset 8
 335              	.LVL29:
 336 0043 C3       		ret
 337              		.cfi_endproc
 338              	.LFE320:
 340              		.section	.text.unlikely._ZN14Fl_Value_Input4drawEv
 341              	.LCOLDE5:
 342              		.section	.text._ZN14Fl_Value_Input4drawEv
 343              	.LHOTE5:
 344              		.section	.text.unlikely._ZN14Fl_Value_Input6resizeEiiii,"ax",@progbits
 345              		.align 2
 346              	.LCOLDB6:
 347              		.section	.text._ZN14Fl_Value_Input6resizeEiiii,"ax",@progbits
 348              	.LHOTB6:
 349              		.align 2
 350              		.p2align 4,,15
 351              		.globl	_ZN14Fl_Value_Input6resizeEiiii
 353              	_ZN14Fl_Value_Input6resizeEiiii:
 354              	.LFB321:
  49:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 355              		.loc 2 50 0
 356              		.cfi_startproc
 357              	.LVL30:
 358 0000 4156     		pushq	%r14
 359              		.cfi_def_cfa_offset 16
 360              		.cfi_offset 14, -16
 361 0002 4155     		pushq	%r13
 362              		.cfi_def_cfa_offset 24
 363              		.cfi_offset 13, -24
 364 0004 4589C6   		movl	%r8d, %r14d
 365 0007 4154     		pushq	%r12
 366              		.cfi_def_cfa_offset 32
 367              		.cfi_offset 12, -32
 368 0009 55       		pushq	%rbp
 369              		.cfi_def_cfa_offset 40
 370              		.cfi_offset 6, -40
 371 000a 4189D4   		movl	%edx, %r12d
 372 000d 53       		pushq	%rbx
 373              		.cfi_def_cfa_offset 48
 374              		.cfi_offset 3, -48
 375              		.loc 2 50 0
 376 000e 89F5     		movl	%esi, %ebp
 377 0010 4889FB   		movq	%rdi, %rbx
 378 0013 4189CD   		movl	%ecx, %r13d
  51:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 379              		.loc 2 51 0
 380 0016 E8000000 		call	_ZN9Fl_Widget6resizeEiiii
 380      00
 381              	.LVL31:
  52:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 382              		.loc 2 52 0
 383 001b 488DBBA8 		leaq	168(%rbx), %rdi
 383      000000
 384 0022 4589F0   		movl	%r14d, %r8d
 385 0025 4489E9   		movl	%r13d, %ecx
  53:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 386              		.loc 2 53 0
 387 0028 5B       		popq	%rbx
 388              		.cfi_def_cfa_offset 40
 389              	.LVL32:
  52:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 390              		.loc 2 52 0
 391 0029 4489E2   		movl	%r12d, %edx
 392 002c 89EE     		movl	%ebp, %esi
 393              		.loc 2 53 0
 394 002e 5D       		popq	%rbp
 395              		.cfi_def_cfa_offset 32
 396              	.LVL33:
 397 002f 415C     		popq	%r12
 398              		.cfi_def_cfa_offset 24
 399              	.LVL34:
 400 0031 415D     		popq	%r13
 401              		.cfi_def_cfa_offset 16
 402              	.LVL35:
 403 0033 415E     		popq	%r14
 404              		.cfi_def_cfa_offset 8
 405              	.LVL36:
  52:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 406              		.loc 2 52 0
 407 0035 E9000000 		jmp	_ZN9Fl_Input_6resizeEiiii
 407      00
 408              	.LVL37:
 409              		.cfi_endproc
 410              	.LFE321:
 412              		.section	.text.unlikely._ZN14Fl_Value_Input6resizeEiiii
 413              	.LCOLDE6:
 414              		.section	.text._ZN14Fl_Value_Input6resizeEiiii
 415              	.LHOTE6:
 416              		.section	.text.unlikely._ZN14Fl_Value_Input12value_damageEv,"ax",@progbits
 417              		.align 2
 418              	.LCOLDB7:
 419              		.section	.text._ZN14Fl_Value_Input12value_damageEv,"ax",@progbits
 420              	.LHOTB7:
 421              		.align 2
 422              		.p2align 4,,15
 423              		.globl	_ZN14Fl_Value_Input12value_damageEv
 425              	_ZN14Fl_Value_Input12value_damageEv:
 426              	.LFB322:
  54:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 427              		.loc 2 55 0
 428              		.cfi_startproc
 429              	.LVL38:
 430 0000 55       		pushq	%rbp
 431              		.cfi_def_cfa_offset 16
 432              		.cfi_offset 6, -16
 433 0001 53       		pushq	%rbx
 434              		.cfi_def_cfa_offset 24
 435              		.cfi_offset 3, -24
 436 0002 4889FB   		movq	%rdi, %rbx
  56:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 437              		.loc 2 58 0
 438 0005 488DABA8 		leaq	168(%rbx), %rbp
 438      000000
  55:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 439              		.loc 2 55 0
 440 000c 4881EC98 		subq	$152, %rsp
 440      000000
 441              		.cfi_def_cfa_offset 176
  55:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 442              		.loc 2 55 0
 443 0013 64488B04 		movq	%fs:40, %rax
 443      25280000 
 443      00
 444 001c 48898424 		movq	%rax, 136(%rsp)
 444      88000000 
 445 0024 31C0     		xorl	%eax, %eax
  57:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 446              		.loc 2 57 0
 447 0026 488B07   		movq	(%rdi), %rax
 448 0029 4889E6   		movq	%rsp, %rsi
 449 002c FF5058   		call	*88(%rax)
 450              	.LVL39:
 451              		.loc 2 58 0
 452 002f 4889E6   		movq	%rsp, %rsi
 453 0032 4889EF   		movq	%rbp, %rdi
 454 0035 E8000000 		call	_ZN9Fl_Input_5valueEPKc
 454      00
 455              	.LVL40:
 456 003a 8BB33801 		movl	312(%rbx), %esi
 456      0000
 457              	.LVL41:
 458              	.LBB166:
 459              	.LBB167:
 460              		.file 4 "fltk-1.3.4-1/FL/Fl_Input_.H"
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
 461              		.loc 4 305 0
 462 0040 4889EF   		movq	%rbp, %rdi
 463 0043 89F2     		movl	%esi, %edx
 464 0045 E8000000 		call	_ZN9Fl_Input_8positionEii
 464      00
 465              	.LVL42:
 466              	.LBE167:
 467              	.LBE166:
  59:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 468              		.loc 2 60 0
 469 004a 488B8424 		movq	136(%rsp), %rax
 469      88000000 
 470 0052 64483304 		xorq	%fs:40, %rax
 470      25280000 
 470      00
 471 005b 750A     		jne	.L30
 472 005d 4881C498 		addq	$152, %rsp
 472      000000
 473              		.cfi_remember_state
 474              		.cfi_def_cfa_offset 24
 475 0064 5B       		popq	%rbx
 476              		.cfi_def_cfa_offset 16
 477              	.LVL43:
 478 0065 5D       		popq	%rbp
 479              		.cfi_def_cfa_offset 8
 480              	.LVL44:
 481 0066 C3       		ret
 482              	.LVL45:
 483              	.L30:
 484              		.cfi_restore_state
 485 0067 E8000000 		call	__stack_chk_fail
 485      00
 486              	.LVL46:
 487              		.cfi_endproc
 488              	.LFE322:
 490              		.section	.text.unlikely._ZN14Fl_Value_Input12value_damageEv
 491              	.LCOLDE7:
 492              		.section	.text._ZN14Fl_Value_Input12value_damageEv
 493              	.LHOTE7:
 494              		.section	.text.unlikely._ZN14Fl_Value_Input6handleEi,"ax",@progbits
 495              		.align 2
 496              	.LCOLDB8:
 497              		.section	.text._ZN14Fl_Value_Input6handleEi,"ax",@progbits
 498              	.LHOTB8:
 499              		.align 2
 500              		.p2align 4,,15
 501              		.globl	_ZN14Fl_Value_Input6handleEi
 503              	_ZN14Fl_Value_Input6handleEi:
 504              	.LFB323:
  61:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
 505              		.loc 2 62 0
 506              		.cfi_startproc
 507              	.LVL47:
 508 0000 53       		pushq	%rbx
 509              		.cfi_def_cfa_offset 16
 510              		.cfi_offset 3, -16
 511 0001 4889FB   		movq	%rdi, %rbx
 512 0004 4883EC20 		subq	$32, %rsp
 513              		.cfi_def_cfa_offset 48
 514              	.LBB168:
 515              	.LBB169:
 516              		.file 5 "fltk-1.3.4-1/FL/Fl.H"
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
 517              		.loc 5 610 0
 518 0008 8B150000 		movl	_ZN2Fl8e_x_rootE(%rip), %edx
 518      0000
 519              	.LVL48:
 520              	.LBE169:
 521              	.LBE168:
 522              		.loc 2 62 0
 523 000e 64488B04 		movq	%fs:40, %rax
 523      25280000 
 523      00
 524 0017 48894424 		movq	%rax, 24(%rsp)
 524      18
 525 001c 31C0     		xorl	%eax, %eax
 526              	.LBB170:
 527              	.LBB171:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 528              		.loc 1 654 0
 529 001e 0FB6476F 		movzbl	111(%rdi), %eax
 530              	.LBE171:
 531              	.LBE170:
 532              	.LBB173:
  63:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
 533              		.loc 2 68 0
 534 0022 83FE0C   		cmpl	$12, %esi
 535              	.LBE173:
 536              	.LBB188:
 537              	.LBB172:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 538              		.loc 1 654 0
 539 0025 88871701 		movb	%al, 279(%rdi)
 539      0000
 540              	.LVL49:
 541              	.LBE172:
 542              	.LBE188:
 543              	.LBB189:
 544              		.loc 2 68 0
 545 002b 0F87DF01 		ja	.L32
 545      0000
 546 0031 89F0     		movl	%esi, %eax
 547 0033 FF24C500 		jmp	*.L34(,%rax,8)
 547      000000
 548              		.section	.rodata._ZN14Fl_Value_Input6handleEi,"a",@progbits
 549              		.align 8
 550              		.align 4
 551              	.L34:
 552 0000 00000000 		.quad	.L32
 552      00000000 
 553 0008 00000000 		.quad	.L33
 553      00000000 
 554 0010 00000000 		.quad	.L35
 554      00000000 
 555 0018 00000000 		.quad	.L32
 555      00000000 
 556 0020 00000000 		.quad	.L32
 556      00000000 
 557 0028 00000000 		.quad	.L36
 557      00000000 
 558 0030 00000000 		.quad	.L37
 558      00000000 
 559 0038 00000000 		.quad	.L32
 559      00000000 
 560 0040 00000000 		.quad	.L32
 560      00000000 
 561 0048 00000000 		.quad	.L32
 561      00000000 
 562 0050 00000000 		.quad	.L32
 562      00000000 
 563 0058 00000000 		.quad	.L32
 563      00000000 
 564 0060 00000000 		.quad	.L38
 564      00000000 
 565              		.section	.text._ZN14Fl_Value_Input6handleEi
 566 003a 660F1F44 		.p2align 4,,10
 566      0000
 567              		.p2align 3
 568              	.L38:
 569              	.LBB174:
  69:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 570              		.loc 2 103 0
 571 0040 488DBFA8 		leaq	168(%rdi), %rdi
 571      000000
 572              	.LVL50:
 573 0047 BE0C0000 		movl	$12, %esi
 573      00
 574              	.LVL51:
 575 004c E8000000 		call	_ZN8Fl_Input6handleEi
 575      00
 576              	.LVL52:
 577              		.p2align 4,,10
 578 0051 0F1F8000 		.p2align 3
 578      000000
 579              	.L41:
 580              	.LBE174:
 581              	.LBE189:
 104:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 582              		.loc 2 109 0
 583 0058 488B4C24 		movq	24(%rsp), %rcx
 583      18
 584 005d 6448330C 		xorq	%fs:40, %rcx
 584      25280000 
 584      00
 585 0066 0F85BE02 		jne	.L74
 585      0000
 586 006c 4883C420 		addq	$32, %rsp
 587              		.cfi_remember_state
 588              		.cfi_def_cfa_offset 16
 589 0070 5B       		popq	%rbx
 590              		.cfi_def_cfa_offset 8
 591 0071 C3       		ret
 592              	.LVL53:
 593              		.p2align 4,,10
 594 0072 660F1F44 		.p2align 3
 594      0000
 595              	.L33:
 596              		.cfi_restore_state
 597              	.LBB190:
 598              	.LBB187:
  70:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 599              		.loc 2 70 0
 600 0078 660FEFC9 		pxor	%xmm1, %xmm1
 601 007c F20F1087 		movsd	152(%rdi), %xmm0
 601      98000000 
 602 0084 F20F2A8F 		cvtsi2sd	160(%rdi), %xmm1
 602      A0000000 
 603 008c F20F5EC1 		divsd	%xmm1, %xmm0
 604 0090 660F2E05 		ucomisd	.LC3(%rip), %xmm0
 604      00000000 
 605 0098 0F8A0202 		jp	.L64
 605      0000
 606 009e B8010000 		movl	$1, %eax
 606      00
 607 00a3 0F85F701 		jne	.L64
 607      0000
 608              	.LVL54:
 609              	.L39:
 107:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 610              		.loc 2 107 0 discriminator 6
 611 00a9 488DBBA8 		leaq	168(%rbx), %rdi
 611      000000
 612              	.LVL55:
 613              	.LBB175:
 614              	.LBB176:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 615              		.loc 1 279 0 discriminator 6
 616 00b0 88831401 		movb	%al, 276(%rbx)
 616      0000
 617              	.LVL56:
 618              	.LBE176:
 619              	.LBE175:
 107:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 620              		.loc 2 107 0 discriminator 6
 621 00b6 E8000000 		call	_ZN8Fl_Input6handleEi
 621      00
 622              	.LVL57:
 623 00bb EB9B     		jmp	.L41
 624              	.LVL58:
 625 00bd 0F1F00   		.p2align 4,,10
 626              		.p2align 3
 627              	.L35:
  90:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
 628              		.loc 2 90 0
 629 00c0 660FEFC9 		pxor	%xmm1, %xmm1
 630 00c4 F20F1087 		movsd	152(%rdi), %xmm0
 630      98000000 
 631 00cc F20F2A8F 		cvtsi2sd	160(%rdi), %xmm1
 631      A0000000 
 632 00d4 F20F5EC1 		divsd	%xmm1, %xmm0
 633 00d8 660F2E05 		ucomisd	.LC3(%rip), %xmm0
 633      00000000 
 634 00e0 7A06     		jp	.L66
 635 00e2 0F84A801 		je	.L61
 635      0000
 636              	.L66:
 637              	.LVL59:
 638              	.LBB177:
  91:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
 639              		.loc 2 91 0
 640 00e8 F20F1083 		movsd	128(%rbx), %xmm0
 640      80000000 
 641 00f0 660F2E43 		ucomisd	120(%rbx), %xmm0
 641      78
 642 00f5 0F8A7D01 		jp	.L52
 642      0000
 643 00fb 0F857701 		jne	.L52
 643      0000
 644 0101 8B050000 		movl	_ZN2Fl10e_is_clickE(%rip), %eax
 644      0000
 645 0107 85C0     		testl	%eax, %eax
 646 0109 0F846901 		je	.L52
 646      0000
 647              	.LBB178:
  94:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 648              		.loc 2 94 0
 649 010f 4881C3A8 		addq	$168, %rbx
 649      000000
 650              	.LVL60:
 651 0116 488D7C24 		leaq	16(%rsp), %rdi
 651      10
 652              	.LVL61:
 653 011b 4889DE   		movq	%rbx, %rsi
 654              	.LVL62:
 655 011e E8000000 		call	_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
 655      00
 656              	.LVL63:
  95:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
 657              		.loc 2 95 0
 658 0123 BE010000 		movl	$1, %esi
 658      00
 659 0128 4889DF   		movq	%rbx, %rdi
 660 012b E8000000 		call	_ZN8Fl_Input6handleEi
 660      00
 661              	.LVL64:
  96:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 662              		.loc 2 96 0
 663 0130 48837C24 		cmpq	$0, 16(%rsp)
 663      1000
 664 0136 740D     		je	.L56
  97:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
 665              		.loc 2 97 0
 666 0138 BE020000 		movl	$2, %esi
 666      00
 667 013d 4889DF   		movq	%rbx, %rdi
 668 0140 E8000000 		call	_ZN8Fl_Input6handleEi
 668      00
 669              	.LVL65:
 670              	.L56:
  94:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 671              		.loc 2 94 0
 672 0145 488D7C24 		leaq	16(%rsp), %rdi
 672      10
 673 014a E8000000 		call	_ZN17Fl_Widget_TrackerD1Ev
 673      00
 674              	.LVL66:
 675              	.LBE178:
 676              	.LBE177:
  99:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 677              		.loc 2 99 0
 678 014f B8010000 		movl	$1, %eax
 678      00
 679 0154 E9FFFEFF 		jmp	.L41
 679      FF
 680              	.LVL67:
 681 0159 0F1F8000 		.p2align 4,,10
 681      000000
 682              		.p2align 3
 683              	.L36:
  76:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 684              		.loc 2 76 0
 685 0160 660FEFC9 		pxor	%xmm1, %xmm1
 686 0164 F20F1087 		movsd	152(%rdi), %xmm0
 686      98000000 
 687 016c F20F2A8F 		cvtsi2sd	160(%rdi), %xmm1
 687      A0000000 
 688 0174 F20F5EC1 		divsd	%xmm1, %xmm0
 689 0178 660F2E05 		ucomisd	.LC3(%rip), %xmm0
 689      00000000 
 690 0180 7A06     		jp	.L65
 691 0182 0F840801 		je	.L61
 691      0000
 692              	.L65:
  77:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 693              		.loc 2 77 0
 694 0188 2B150000 		subl	_ZZN14Fl_Value_Input6handleEiE2ix(%rip), %edx
 694      0000
 695              	.LVL68:
  78:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
 696              		.loc 2 78 0
 697 018e 83FA05   		cmpl	$5, %edx
 698 0191 8D72FB   		leal	-5(%rdx), %esi
 699              	.LVL69:
 700 0194 0F8E3601 		jle	.L75
 700      0000
 701              	.LVL70:
 702              	.L44:
  81:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 703              		.loc 2 81 0
 704 019a 8B050000 		movl	_ZZN14Fl_Value_Input6handleEiE4drag(%rip), %eax
 704      0000
 705 01a0 83F802   		cmpl	$2, %eax
 706 01a3 0F846701 		je	.L46
 706      0000
 707 01a9 83F803   		cmpl	$3, %eax
 708 01ac 0F843601 		je	.L76
 708      0000
 709              	.LVL71:
  84:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 710              		.loc 2 84 0
 711 01b2 F20F1083 		movsd	128(%rbx), %xmm0
 711      80000000 
 712 01ba 4889DF   		movq	%rbx, %rdi
 713 01bd E8000000 		call	_ZN11Fl_Valuator9incrementEdi
 713      00
 714              	.LVL72:
 715              	.L48:
  86:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 716              		.loc 2 86 0
 717 01c2 4889DF   		movq	%rbx, %rdi
 718 01c5 E8000000 		call	_ZN11Fl_Valuator5roundEd
 718      00
 719              	.LVL73:
  87:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 720              		.loc 2 87 0
 721 01ca 80BB7001 		cmpb	$0, 368(%rbx)
 721      000000
 722 01d1 4889DF   		movq	%rbx, %rdi
 723 01d4 0F842601 		je	.L49
 723      0000
  87:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 724              		.loc 2 87 0 is_stmt 0 discriminator 1
 725 01da E8000000 		call	_ZN11Fl_Valuator9softclampEd
 725      00
 726              	.LVL74:
 727              	.L50:
  87:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 728              		.loc 2 87 0 discriminator 4
 729 01df 4889DF   		movq	%rbx, %rdi
 730 01e2 E8000000 		call	_ZN11Fl_Valuator11handle_dragEd
 730      00
 731              	.LVL75:
  88:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 732              		.loc 2 88 0 is_stmt 1 discriminator 4
 733 01e7 B8010000 		movl	$1, %eax
 733      00
 734 01ec E967FEFF 		jmp	.L41
 734      FF
 735              	.LVL76:
 736              		.p2align 4,,10
 737 01f1 0F1F8000 		.p2align 3
 737      000000
 738              	.L37:
 101:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 739              		.loc 2 101 0
 740 01f8 488DBFA8 		leaq	168(%rdi), %rdi
 740      000000
 741 01ff E8000000 		call	_ZN9Fl_Widget10take_focusEv
 741      00
 742              	.LVL77:
 743 0204 E94FFEFF 		jmp	.L41
 743      FF
 744              	.LVL78:
 745 0209 0F1F8000 		.p2align 4,,10
 745      000000
 746              		.p2align 3
 747              	.L32:
 748              	.LBB179:
 749              	.LBB180:
 750              		.loc 3 121 0
 751 0210 660FEFC0 		pxor	%xmm0, %xmm0
 752 0214 8974240C 		movl	%esi, 12(%rsp)
 753              	.LVL79:
 754 0218 F20F108B 		movsd	152(%rbx), %xmm1
 754      98000000 
 755 0220 F20F2A83 		cvtsi2sd	160(%rbx), %xmm0
 755      A0000000 
 756 0228 F20F5EC8 		divsd	%xmm0, %xmm1
 757              	.LVL80:
 758              	.LBE180:
 759              	.LBE179:
 106:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 760              		.loc 2 106 0
 761 022c 660F28C1 		movapd	%xmm1, %xmm0
 762 0230 F20F110C 		movsd	%xmm1, (%rsp)
 762      24
 763 0235 E8000000 		call	floor
 763      00
 764              	.LVL81:
 765 023a F20F100C 		movsd	(%rsp), %xmm1
 765      24
 766 023f B8010000 		movl	$1, %eax
 766      00
 767 0244 8B74240C 		movl	12(%rsp), %esi
 768 0248 660F28D1 		movapd	%xmm1, %xmm2
 769 024c F20F5CD0 		subsd	%xmm0, %xmm2
 770 0250 660FEFC0 		pxor	%xmm0, %xmm0
 771 0254 660F2ED0 		ucomisd	%xmm0, %xmm2
 772 0258 0F874BFE 		ja	.L39
 772      FFFF
 773              	.LVL82:
 106:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 774              		.loc 2 106 0 is_stmt 0 discriminator 2
 775 025e 660F2EC8 		ucomisd	%xmm0, %xmm1
 776 0262 7A06     		jp	.L67
 777 0264 0F843FFE 		je	.L39
 777      FFFF
 778              	.L67:
 106:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 779              		.loc 2 106 0
 780 026a B8020000 		movl	$2, %eax
 780      00
 781 026f E935FEFF 		jmp	.L39
 781      FF
 782              	.LVL83:
 783              		.p2align 4,,10
 784 0274 0F1F4000 		.p2align 3
 785              	.L52:
 786              	.LBB181:
  92:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 787              		.loc 2 92 0 is_stmt 1
 788 0278 4889DF   		movq	%rbx, %rdi
 789 027b E8000000 		call	_ZN11Fl_Valuator14handle_releaseEv
 789      00
 790              	.LVL84:
 791              	.LBE181:
  99:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 792              		.loc 2 99 0
 793 0280 B8010000 		movl	$1, %eax
 793      00
 794              	.LBB182:
 795 0285 E9CEFDFF 		jmp	.L41
 795      FF
 796              	.LVL85:
 797 028a 660F1F44 		.p2align 4,,10
 797      0000
 798              		.p2align 3
 799              	.L61:
 800              	.LBE182:
 801 0290 B8010000 		movl	$1, %eax
 801      00
 802 0295 E90FFEFF 		jmp	.L39
 802      FF
 803              	.LVL86:
 804 029a 660F1F44 		.p2align 4,,10
 804      0000
 805              		.p2align 3
 806              	.L64:
  72:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 807              		.loc 2 72 0
 808 02a0 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 808      0000
 809              	.LBB183:
 810              	.LBB184:
  64:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double softclamp(double);
 811              		.loc 3 64 0
 812 02a6 F20F1043 		movsd	120(%rbx), %xmm0
 812      78
 813              	.LBE184:
 814              	.LBE183:
  71:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 815              		.loc 2 71 0
 816 02ab 89150000 		movl	%edx, _ZZN14Fl_Value_Input6handleEiE2ix(%rip)
 816      0000
 817              	.LBB186:
 818              	.LBB185:
  64:fltk-1.3.4-1/FL/Fl_Valuator.H ****   double softclamp(double);
 819              		.loc 3 64 0
 820 02b1 F20F1183 		movsd	%xmm0, 128(%rbx)
 820      80000000 
 821              	.LBE185:
 822              	.LBE186:
  72:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 823              		.loc 2 72 0
 824 02b9 2DE8FE00 		subl	$65256, %eax
 824      00
 825 02be 89050000 		movl	%eax, _ZZN14Fl_Value_Input6handleEiE4drag(%rip)
 825      0000
 826              	.LVL87:
  74:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 827              		.loc 2 74 0
 828 02c4 B8010000 		movl	$1, %eax
 828      00
 829 02c9 E98AFDFF 		jmp	.L41
 829      FF
 830              	.LVL88:
 831 02ce 6690     		.p2align 4,,10
 832              		.p2align 3
 833              	.L75:
  79:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 834              		.loc 2 79 0
 835 02d0 8D4205   		leal	5(%rdx), %eax
 836              	.LVL89:
 837 02d3 83FAFA   		cmpl	$-6, %edx
 838 02d6 BA000000 		movl	$0, %edx
 838      00
 839              	.LVL90:
 840 02db 0F4ED0   		cmovle	%eax, %edx
 841 02de 89D6     		movl	%edx, %esi
 842 02e0 E9B5FEFF 		jmp	.L44
 842      FF
 843              	.LVL91:
 844              		.p2align 4,,10
 845 02e5 0F1F00   		.p2align 3
 846              	.L76:
  82:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
 847              		.loc 2 82 0
 848 02e8 6BF664   		imull	$100, %esi, %esi
 849              	.LVL92:
 850 02eb F20F1083 		movsd	128(%rbx), %xmm0
 850      80000000 
 851 02f3 4889DF   		movq	%rbx, %rdi
 852 02f6 E8000000 		call	_ZN11Fl_Valuator9incrementEdi
 852      00
 853              	.LVL93:
 854 02fb E9C2FEFF 		jmp	.L48
 854      FF
 855              	.LVL94:
 856              		.p2align 4,,10
 857              		.p2align 3
 858              	.L49:
  87:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 859              		.loc 2 87 0 discriminator 2
 860 0300 E8000000 		call	_ZN11Fl_Valuator5clampEd
 860      00
 861              	.LVL95:
 862 0305 E9D5FEFF 		jmp	.L50
 862      FF
 863              	.LVL96:
 864 030a 660F1F44 		.p2align 4,,10
 864      0000
 865              		.p2align 3
 866              	.L46:
  83:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 867              		.loc 2 83 0
 868 0310 8D34B6   		leal	(%rsi,%rsi,4), %esi
 869              	.LVL97:
 870 0313 F20F1083 		movsd	128(%rbx), %xmm0
 870      80000000 
 871 031b 4889DF   		movq	%rbx, %rdi
 872 031e 01F6     		addl	%esi, %esi
 873 0320 E8000000 		call	_ZN11Fl_Valuator9incrementEdi
 873      00
 874              	.LVL98:
 875 0325 E998FEFF 		jmp	.L48
 875      FF
 876              	.LVL99:
 877              	.L74:
 878              	.LBE187:
 879              	.LBE190:
 880              		.loc 2 109 0
 881 032a E8000000 		call	__stack_chk_fail
 881      00
 882              	.LVL100:
 883              		.cfi_endproc
 884              	.LFE323:
 886              		.section	.text.unlikely._ZN14Fl_Value_Input6handleEi
 887              	.LCOLDE8:
 888              		.section	.text._ZN14Fl_Value_Input6handleEi
 889              	.LHOTE8:
 890              		.section	.text.unlikely._ZN14Fl_Value_InputD2Ev,"ax",@progbits
 891              		.align 2
 892              	.LCOLDB9:
 893              		.section	.text._ZN14Fl_Value_InputD2Ev,"ax",@progbits
 894              	.LHOTB9:
 895              		.align 2
 896              		.p2align 4,,15
 897              		.globl	_ZN14Fl_Value_InputD2Ev
 899              	_ZN14Fl_Value_InputD2Ev:
 900              	.LFB332:
 110:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 901              		.loc 2 132 0
 902              		.cfi_startproc
 903              	.LVL101:
 904 0000 53       		pushq	%rbx
 905              		.cfi_def_cfa_offset 16
 906              		.cfi_offset 3, -16
 907              	.LBB191:
 133:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 908              		.loc 2 134 0
 909 0001 483BBFB0 		cmpq	176(%rdi), %rdi
 909      000000
 910              	.LBE191:
 132:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 911              		.loc 2 132 0
 912 0008 4889FB   		movq	%rdi, %rbx
 913              	.LBB200:
 914 000b 48C70700 		movq	$_ZTV14Fl_Value_Input+16, (%rdi)
 914      000000
 915              	.LVL102:
 916              		.loc 2 134 0
 917 0012 742C     		je	.L80
 918              	.L78:
 919              	.LVL103:
 920              	.LBB192:
 921              	.LBB193:
 922              		.file 6 "fltk-1.3.4-1/FL/Fl_Input.H"
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
 923              		.loc 6 221 0
 924 0014 488DBBA8 		leaq	168(%rbx), %rdi
 924      000000
 925              	.LVL104:
 926 001b 48C783A8 		movq	$_ZTV8Fl_Input+16, 168(%rbx)
 926      00000000 
 926      000000
 927 0026 E8000000 		call	_ZN9Fl_Input_D2Ev
 927      00
 928              	.LVL105:
 929              	.LBE193:
 930              	.LBE192:
 931              	.LBB194:
 932              	.LBB195:
  49:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
 933              		.loc 3 49 0
 934 002b 48C70300 		movq	$_ZTV11Fl_Valuator+16, (%rbx)
 934      000000
 935 0032 4889DF   		movq	%rbx, %rdi
 936              	.LBE195:
 937              	.LBE194:
 938              	.LBE200:
 135:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 939              		.loc 2 136 0
 940 0035 5B       		popq	%rbx
 941              		.cfi_remember_state
 942              		.cfi_def_cfa_offset 8
 943              	.LVL106:
 944              	.LBB201:
 945              	.LBB197:
 946              	.LBB196:
  49:fltk-1.3.4-1/FL/Fl_Valuator.H **** 
 947              		.loc 3 49 0
 948 0036 E9000000 		jmp	_ZN9Fl_WidgetD2Ev
 948      00
 949              	.LVL107:
 950 003b 0F1F4400 		.p2align 4,,10
 950      00
 951              		.p2align 3
 952              	.L80:
 953              		.cfi_restore_state
 954              	.LBE196:
 955              	.LBE197:
 956              	.LBB198:
 957              	.LBB199:
 264:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 958              		.loc 1 264 0
 959 0040 48C787B0 		movq	$0, 176(%rdi)
 959      00000000 
 959      000000
 960 004b EBC7     		jmp	.L78
 961              	.LBE199:
 962              	.LBE198:
 963              	.LBE201:
 964              		.cfi_endproc
 965              	.LFE332:
 967              		.section	.text.unlikely._ZN14Fl_Value_InputD2Ev
 968              	.LCOLDE9:
 969              		.section	.text._ZN14Fl_Value_InputD2Ev
 970              	.LHOTE9:
 971              		.globl	_ZN14Fl_Value_InputD1Ev
 972              		.set	_ZN14Fl_Value_InputD1Ev,_ZN14Fl_Value_InputD2Ev
 973              		.section	.text.unlikely._ZN14Fl_Value_InputD0Ev,"ax",@progbits
 974              		.align 2
 975              	.LCOLDB10:
 976              		.section	.text._ZN14Fl_Value_InputD0Ev,"ax",@progbits
 977              	.LHOTB10:
 978              		.align 2
 979              		.p2align 4,,15
 980              		.globl	_ZN14Fl_Value_InputD0Ev
 982              	_ZN14Fl_Value_InputD0Ev:
 983              	.LFB334:
 132:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 984              		.loc 2 132 0
 985              		.cfi_startproc
 986              	.LVL108:
 987 0000 53       		pushq	%rbx
 988              		.cfi_def_cfa_offset 16
 989              		.cfi_offset 3, -16
 132:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 990              		.loc 2 132 0
 991 0001 4889FB   		movq	%rdi, %rbx
 992              		.loc 2 136 0
 993 0004 E8000000 		call	_ZN14Fl_Value_InputD1Ev
 993      00
 994              	.LVL109:
 995 0009 4889DF   		movq	%rbx, %rdi
 996 000c 5B       		popq	%rbx
 997              		.cfi_def_cfa_offset 8
 998              	.LVL110:
 999 000d E9000000 		jmp	_ZdlPv
 999      00
 1000              	.LVL111:
 1001              		.cfi_endproc
 1002              	.LFE334:
 1004              		.section	.text.unlikely._ZN14Fl_Value_InputD0Ev
 1005              	.LCOLDE10:
 1006              		.section	.text._ZN14Fl_Value_InputD0Ev
 1007              	.LHOTE10:
 1008              		.section	.text.unlikely._ZN14Fl_Value_InputC2EiiiiPKc,"ax",@progbits
 1009              		.align 2
 1010              	.LCOLDB11:
 1011              		.section	.text._ZN14Fl_Value_InputC2EiiiiPKc,"ax",@progbits
 1012              	.LHOTB11:
 1013              		.align 2
 1014              		.p2align 4,,15
 1015              		.globl	_ZN14Fl_Value_InputC2EiiiiPKc
 1017              	_ZN14Fl_Value_InputC2EiiiiPKc:
 1018              	.LFB329:
 116:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1019              		.loc 2 116 0
 1020              		.cfi_startproc
 1021              	.LVL112:
 1022 0000 4157     		pushq	%r15
 1023              		.cfi_def_cfa_offset 16
 1024              		.cfi_offset 15, -16
 1025 0002 4156     		pushq	%r14
 1026              		.cfi_def_cfa_offset 24
 1027              		.cfi_offset 14, -24
 1028 0004 4589C6   		movl	%r8d, %r14d
 1029 0007 4155     		pushq	%r13
 1030              		.cfi_def_cfa_offset 32
 1031              		.cfi_offset 13, -32
 1032 0009 4154     		pushq	%r12
 1033              		.cfi_def_cfa_offset 40
 1034              		.cfi_offset 12, -40
 1035 000b 4189CD   		movl	%ecx, %r13d
 1036 000e 55       		pushq	%rbp
 1037              		.cfi_def_cfa_offset 48
 1038              		.cfi_offset 6, -48
 1039 000f 53       		pushq	%rbx
 1040              		.cfi_def_cfa_offset 56
 1041              		.cfi_offset 3, -56
 1042 0010 4889FB   		movq	%rdi, %rbx
 1043              	.LBB202:
 117:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1044              		.loc 2 117 0
 1045 0013 4C8DBBA8 		leaq	168(%rbx), %r15
 1045      000000
 1046              	.LBE202:
 116:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 1047              		.loc 2 116 0
 1048 001a 89F5     		movl	%esi, %ebp
 1049 001c 4189D4   		movl	%edx, %r12d
 1050 001f 4883EC08 		subq	$8, %rsp
 1051              		.cfi_def_cfa_offset 64
 1052              	.LBB221:
 117:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 1053              		.loc 2 117 0
 1054 0023 E8000000 		call	_ZN11Fl_ValuatorC2EiiiiPKc
 1054      00
 1055              	.LVL113:
 1056 0028 4531C9   		xorl	%r9d, %r9d
 1057 002b 4C89FF   		movq	%r15, %rdi
 1058 002e 48C70300 		movq	$_ZTV14Fl_Value_Input+16, (%rbx)
 1058      000000
 1059 0035 4589F0   		movl	%r14d, %r8d
 1060 0038 4489E9   		movl	%r13d, %ecx
 1061 003b 4489E2   		movl	%r12d, %edx
 1062 003e 89EE     		movl	%ebp, %esi
 1063 0040 E8000000 		call	_ZN8Fl_InputC1EiiiiPKc
 1063      00
 1064              	.LVL114:
 1065 0045 488BBBB0 		movq	176(%rbx), %rdi
 1065      000000
 118:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 1066              		.loc 2 118 0
 1067 004c C6837001 		movb	$0, 368(%rbx)
 1067      000000
 1068              	.LVL115:
 119:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1069              		.loc 2 119 0
 1070 0053 4885FF   		testq	%rdi, %rdi
 1071 0056 7408     		je	.L84
 1072              	.LVL116:
 120:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 1073              		.loc 2 120 0
 1074 0058 4C89FE   		movq	%r15, %rsi
 1075 005b E8000000 		call	_ZN8Fl_Group6removeER9Fl_Widget
 1075      00
 1076              	.LVL117:
 1077              	.L84:
 1078              	.LBB203:
 1079              	.LBB204:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1080              		.loc 1 372 0
 1081 0060 0FB68316 		movzbl	278(%rbx), %eax
 1081      010000
 1082              	.LBE204:
 1083              	.LBE203:
 1084              	.LBB206:
 1085              	.LBB207:
 264:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1086              		.loc 1 264 0
 1087 0067 48899BB0 		movq	%rbx, 176(%rbx)
 1087      000000
 1088              	.LVL118:
 1089              	.LBE207:
 1090              	.LBE206:
 128:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1091              		.loc 2 128 0
 1092 006e 4889DF   		movq	%rbx, %rdi
 1093              	.LBB208:
 1094              	.LBB209:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1095              		.loc 1 568 0
 1096 0071 48C783B8 		movq	$_ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv, 184(%rbx)
 1096      00000000 
 1096      000000
 1097 007c 48899BC0 		movq	%rbx, 192(%rbx)
 1097      000000
 1098              	.LVL119:
 1099              	.LBE209:
 1100              	.LBE208:
 1101              	.LBB210:
 1102              	.LBB211:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1103              		.loc 1 654 0
 1104 0083 C6831701 		movb	$1, 279(%rbx)
 1104      000001
 1105              	.LVL120:
 1106              	.LBE211:
 1107              	.LBE210:
 1108              	.LBB212:
 1109              	.LBB213:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1110              		.loc 1 357 0
 1111 008a C7435404 		movl	$4, 84(%rbx)
 1111      000000
 1112              	.LBE213:
 1113              	.LBE212:
 1114              	.LBB214:
 1115              	.LBB205:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1116              		.loc 1 372 0
 1117 0091 88436E   		movb	%al, 110(%rbx)
 1118              	.LVL121:
 1119              	.LBE205:
 1120              	.LBE214:
 1121              	.LBB215:
 1122              	.LBB216:
 390:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1123              		.loc 1 390 0
 1124 0094 8B830C01 		movl	268(%rbx), %eax
 1124      0000
 1125 009a 894364   		movl	%eax, 100(%rbx)
 1126              	.LVL122:
 1127              	.LBE216:
 1128              	.LBE215:
 1129              	.LBB217:
 1130              	.LBB218:
 406:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1131              		.loc 1 406 0
 1132 009d 8B831001 		movl	272(%rbx), %eax
 1132      0000
 1133 00a3 894368   		movl	%eax, 104(%rbx)
 1134              	.LVL123:
 1135              	.LBE218:
 1136              	.LBE217:
 128:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 1137              		.loc 2 128 0
 1138 00a6 E8000000 		call	_ZN14Fl_Value_Input12value_damageEv
 1138      00
 1139              	.LVL124:
 1140              	.LBB219:
 1141              	.LBB220:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1142              		.loc 1 149 0
 1143 00ab 834B6040 		orl	$64, 96(%rbx)
 1144              	.LVL125:
 1145              	.LBE220:
 1146              	.LBE219:
 1147              	.LBE221:
 130:fltk-1.3.4-1/src/Fl_Value_Input.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 1148              		.loc 2 130 0
 1149 00af 4883C408 		addq	$8, %rsp
 1150              		.cfi_def_cfa_offset 56
 1151 00b3 5B       		popq	%rbx
 1152              		.cfi_def_cfa_offset 48
 1153              	.LVL126:
 1154 00b4 5D       		popq	%rbp
 1155              		.cfi_def_cfa_offset 40
 1156              	.LVL127:
 1157 00b5 415C     		popq	%r12
 1158              		.cfi_def_cfa_offset 32
 1159              	.LVL128:
 1160 00b7 415D     		popq	%r13
 1161              		.cfi_def_cfa_offset 24
 1162              	.LVL129:
 1163 00b9 415E     		popq	%r14
 1164              		.cfi_def_cfa_offset 16
 1165              	.LVL130:
 1166 00bb 415F     		popq	%r15
 1167              		.cfi_def_cfa_offset 8
 1168              	.LVL131:
 1169 00bd C3       		ret
 1170              		.cfi_endproc
 1171              	.LFE329:
 1173              		.section	.text.unlikely._ZN14Fl_Value_InputC2EiiiiPKc
 1174              	.LCOLDE11:
 1175              		.section	.text._ZN14Fl_Value_InputC2EiiiiPKc
 1176              	.LHOTE11:
 1177              		.globl	_ZN14Fl_Value_InputC1EiiiiPKc
 1178              		.set	_ZN14Fl_Value_InputC1EiiiiPKc,_ZN14Fl_Value_InputC2EiiiiPKc
 1179              		.section	.bss._ZZN14Fl_Value_Input6handleEiE4drag,"aw",@nobits
 1180              		.align 4
 1183              	_ZZN14Fl_Value_Input6handleEiE4drag:
 1184 0000 00000000 		.zero	4
 1185              		.section	.bss._ZZN14Fl_Value_Input6handleEiE2ix,"aw",@nobits
 1186              		.align 4
 1189              	_ZZN14Fl_Value_Input6handleEiE2ix:
 1190 0000 00000000 		.zero	4
 1191              		.weak	_ZTS14Fl_Value_Input
 1192              		.section	.rodata._ZTS14Fl_Value_Input,"aG",@progbits,_ZTS14Fl_Value_Input,comdat
 1193              		.align 16
 1196              	_ZTS14Fl_Value_Input:
 1197 0000 3134466C 		.string	"14Fl_Value_Input"
 1197      5F56616C 
 1197      75655F49 
 1197      6E707574 
 1197      00
 1198              		.weak	_ZTI14Fl_Value_Input
 1199              		.section	.rodata._ZTI14Fl_Value_Input,"aG",@progbits,_ZTI14Fl_Value_Input,comdat
 1200              		.align 8
 1203              	_ZTI14Fl_Value_Input:
 1204 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1204      00000000 
 1205 0008 00000000 		.quad	_ZTS14Fl_Value_Input
 1205      00000000 
 1206 0010 00000000 		.quad	_ZTI11Fl_Valuator
 1206      00000000 
 1207              		.weak	_ZTV14Fl_Value_Input
 1208              		.section	.rodata._ZTV14Fl_Value_Input,"aG",@progbits,_ZTV14Fl_Value_Input,comdat
 1209              		.align 8
 1212              	_ZTV14Fl_Value_Input:
 1213 0000 00000000 		.quad	0
 1213      00000000 
 1214 0008 00000000 		.quad	_ZTI14Fl_Value_Input
 1214      00000000 
 1215 0010 00000000 		.quad	_ZN14Fl_Value_InputD1Ev
 1215      00000000 
 1216 0018 00000000 		.quad	_ZN14Fl_Value_InputD0Ev
 1216      00000000 
 1217 0020 00000000 		.quad	_ZN14Fl_Value_Input4drawEv
 1217      00000000 
 1218 0028 00000000 		.quad	_ZN14Fl_Value_Input6handleEi
 1218      00000000 
 1219 0030 00000000 		.quad	_ZN14Fl_Value_Input6resizeEiiii
 1219      00000000 
 1220 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 1220      00000000 
 1221 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 1221      00000000 
 1222 0048 00000000 		.quad	_ZN9Fl_Widget8as_groupEv
 1222      00000000 
 1223 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 1223      00000000 
 1224 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 1224      00000000 
 1225 0060 00000000 		.quad	_ZN14Fl_Value_Input12value_damageEv
 1225      00000000 
 1226 0068 00000000 		.quad	_ZN11Fl_Valuator6formatEPc
 1226      00000000 
 1227              		.section	.rodata.cst8,"aM",@progbits,8
 1228              		.align 8
 1229              	.LC3:
 1230 0000 00000000 		.long	0
 1231 0004 00000000 		.long	0
 1232              		.text
 1233              	.Letext0:
 1234              		.section	.text.unlikely._ZN9Fl_Widget8as_groupEv,"axG",@progbits,_ZN9Fl_Widget8as_groupEv,comdat
 1235              	.Letext_cold0:
 1236              		.file 7 "fltk-1.3.4-1/FL/fl_types.h"
 1237              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1238              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1239              		.file 10 "/usr/include/libio.h"
 1240              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 1241              		.file 12 "fltk-1.3.4-1/FL/Fl_Value_Input.H"
 1242              		.file 13 "fltk-1.3.4-1/FL/Fl_Group.H"
 1243              		.file 14 "/usr/include/stdio.h"
 1244              		.file 15 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 1245              		.file 16 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Value_Input.cxx
     /tmp/cc9IFEz2.s:16     .text._ZN9Fl_Widget8as_groupEv:0000000000000000 _ZN9Fl_Widget8as_groupEv
     /tmp/cc9IFEz2.s:41     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/cc9IFEz2.s:65     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/cc9IFEz2.s:89     .text._ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv:0000000000000000 _ZN14Fl_Value_Input8input_cbEP9Fl_WidgetPv
     /tmp/cc9IFEz2.s:262    .text._ZN14Fl_Value_Input4drawEv:0000000000000000 _ZN14Fl_Value_Input4drawEv
     /tmp/cc9IFEz2.s:353    .text._ZN14Fl_Value_Input6resizeEiiii:0000000000000000 _ZN14Fl_Value_Input6resizeEiiii
     /tmp/cc9IFEz2.s:425    .text._ZN14Fl_Value_Input12value_damageEv:0000000000000000 _ZN14Fl_Value_Input12value_damageEv
     /tmp/cc9IFEz2.s:503    .text._ZN14Fl_Value_Input6handleEi:0000000000000000 _ZN14Fl_Value_Input6handleEi
     /tmp/cc9IFEz2.s:1189   .bss._ZZN14Fl_Value_Input6handleEiE2ix:0000000000000000 _ZZN14Fl_Value_Input6handleEiE2ix
     /tmp/cc9IFEz2.s:1183   .bss._ZZN14Fl_Value_Input6handleEiE4drag:0000000000000000 _ZZN14Fl_Value_Input6handleEiE4drag
     /tmp/cc9IFEz2.s:899    .text._ZN14Fl_Value_InputD2Ev:0000000000000000 _ZN14Fl_Value_InputD2Ev
     /tmp/cc9IFEz2.s:1212   .rodata._ZTV14Fl_Value_Input:0000000000000000 _ZTV14Fl_Value_Input
     /tmp/cc9IFEz2.s:899    .text._ZN14Fl_Value_InputD2Ev:0000000000000000 _ZN14Fl_Value_InputD1Ev
     /tmp/cc9IFEz2.s:982    .text._ZN14Fl_Value_InputD0Ev:0000000000000000 _ZN14Fl_Value_InputD0Ev
     /tmp/cc9IFEz2.s:1017   .text._ZN14Fl_Value_InputC2EiiiiPKc:0000000000000000 _ZN14Fl_Value_InputC2EiiiiPKc
     /tmp/cc9IFEz2.s:1017   .text._ZN14Fl_Value_InputC2EiiiiPKc:0000000000000000 _ZN14Fl_Value_InputC1EiiiiPKc
     /tmp/cc9IFEz2.s:1196   .rodata._ZTS14Fl_Value_Input:0000000000000000 _ZTS14Fl_Value_Input
     /tmp/cc9IFEz2.s:1203   .rodata._ZTI14Fl_Value_Input:0000000000000000 _ZTI14Fl_Value_Input
     /tmp/cc9IFEz2.s:1229   .rodata.cst8:0000000000000000 .LC3
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
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844

UNDEFINED SYMBOLS
floor
strtod
_ZN9Fl_Widget11do_callbackEPS_Pv
strtol
_ZN8Fl_Input4drawEv
_ZN9Fl_Widget6resizeEiiii
_ZN9Fl_Input_6resizeEiiii
_ZN9Fl_Input_5valueEPKc
_ZN9Fl_Input_8positionEii
__stack_chk_fail
_ZN2Fl8e_x_rootE
_ZN8Fl_Input6handleEi
_ZN2Fl10e_is_clickE
_ZN17Fl_Widget_TrackerC1EP9Fl_Widget
_ZN17Fl_Widget_TrackerD1Ev
_ZN11Fl_Valuator9incrementEdi
_ZN11Fl_Valuator5roundEd
_ZN11Fl_Valuator9softclampEd
_ZN11Fl_Valuator11handle_dragEd
_ZN9Fl_Widget10take_focusEv
_ZN11Fl_Valuator14handle_releaseEv
_ZN2Fl8e_keysymE
_ZN11Fl_Valuator5clampEd
_ZTV8Fl_Input
_ZN9Fl_Input_D2Ev
_ZTV11Fl_Valuator
_ZN9Fl_WidgetD2Ev
_ZdlPv
_ZN11Fl_ValuatorC2EiiiiPKc
_ZN8Fl_InputC1EiiiiPKc
_ZN8Fl_Group6removeER9Fl_Widget
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI11Fl_Valuator
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
_ZN11Fl_Valuator6formatEPc
