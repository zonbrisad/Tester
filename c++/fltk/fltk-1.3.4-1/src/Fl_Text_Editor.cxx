   1              		.file	"Fl_Text_Editor.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  14              		.weak	_ZN9Fl_Widget9as_windowEv
  16              	_ZN9Fl_Widget9as_windowEv:
  17              	.LFB247:
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
  19              		.loc 1 1000 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 1000 0
  23 0000 31C0     		xorl	%eax, %eax
  24 0002 C3       		ret
  25              		.cfi_endproc
  26              	.LFE247:
  28              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  29              	.LCOLDE0:
  30              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
  31              	.LHOTE0:
  32              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  33              		.align 2
  34              	.LCOLDB1:
  35              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  36              	.LHOTB1:
  37              		.align 2
  38              		.p2align 4,,15
  39              		.weak	_ZN9Fl_Widget12as_gl_windowEv
  41              	_ZN9Fl_Widget12as_gl_windowEv:
  42              	.LFB248:
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
  43              		.loc 1 1012 0
  44              		.cfi_startproc
  45              	.LVL1:
  46              		.loc 1 1012 0
  47 0000 31C0     		xorl	%eax, %eax
  48 0002 C3       		ret
  49              		.cfi_endproc
  50              	.LFE248:
  52              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  53              	.LCOLDE1:
  54              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  55              	.LHOTE1:
  56              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN8Fl_Group8as_groupEv
  65              	_ZN8Fl_Group8as_groupEv:
  66              	.LFB264:
  67              		.file 2 "fltk-1.3.4-1/FL/Fl_Group.H"
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
  68              		.loc 2 179 0
  69              		.cfi_startproc
  70              	.LVL2:
  71              		.loc 2 179 0
  72 0000 4889F8   		movq	%rdi, %rax
  73 0003 C3       		ret
  74              		.cfi_endproc
  75              	.LFE264:
  77              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  78              	.LCOLDE2:
  79              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  80              	.LHOTE2:
  81              		.section	.text.unlikely._ZN14Fl_Text_Editor9kf_ignoreEiPS_,"ax",@progbits
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZN14Fl_Text_Editor9kf_ignoreEiPS_,"ax",@progbits
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.globl	_ZN14Fl_Text_Editor9kf_ignoreEiPS_
  90              	_ZN14Fl_Text_Editor9kf_ignoreEiPS_:
  91              	.LFB567:
  92              		.file 3 "fltk-1.3.4-1/src/Fl_Text_Editor.cxx"
   1:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    1              		.file	"Fl_Text_Editor.cxx"
   2:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   17              	.LFB247:
  17:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 267:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 268:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
  93              		.loc 3 269 0
  94              		.cfi_startproc
 270:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
  95              		.loc 3 271 0
  96 0000 31C0     		xorl	%eax, %eax
  97 0002 C3       		ret
  98              		.cfi_endproc
  99              	.LFE567:
 101              		.section	.text.unlikely._ZN14Fl_Text_Editor9kf_ignoreEiPS_
 102              	.LCOLDE3:
 103              		.section	.text._ZN14Fl_Text_Editor9kf_ignoreEiPS_
 104              	.LHOTE3:
 105              		.section	.text.unlikely._ZN14Fl_Text_Editor9kf_insertEiPS_,"ax",@progbits
 106              		.align 2
 107              	.LCOLDB4:
 108              		.section	.text._ZN14Fl_Text_Editor9kf_insertEiPS_,"ax",@progbits
 109              	.LHOTB4:
 110              		.align 2
 111              		.p2align 4,,15
 112              		.globl	_ZN14Fl_Text_Editor9kf_insertEiPS_
 114              	_ZN14Fl_Text_Editor9kf_insertEiPS_:
 115              	.LFB584:
 272:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 288:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 331:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 337:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 340:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 116              		.loc 3 541 0
 117              		.cfi_startproc
 118              	.LVL3:
 119              	.LBB397:
 120              	.LBB398:
 121              		.file 4 "fltk-1.3.4-1/FL/Fl_Text_Editor.H"
   1:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //
   2:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // "$Id: Fl_Text_Editor.H 11808 2016-07-14 18:48:43Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //
   4:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // Header file for Fl_Text_Editor class.
   5:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //
   6:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // Copyright 2001-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // Original code Copyright Mark Edel.  Permission to distribute under
   8:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // the LGPL for the FLTK library granted by Mark Edel.
   9:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //
  10:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // This library is free software. Distribution and use rights are outlined in
  11:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // the file "COPYING" which should have been included with this file.  If this
  12:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // file is missing or damaged, see the license at:
  13:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //
  14:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //     http://www.fltk.org/COPYING.php
  15:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //
  16:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // Please report all bugs and problems on the following page:
  17:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //
  18:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //     http://www.fltk.org/str.php
  19:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** //
  20:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  21:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** /* \file
  22:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****    Fl_Text_Editor widget . */
  23:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  24:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  25:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #ifndef FL_TEXT_EDITOR_H
  26:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #define FL_TEXT_EDITOR_H
  27:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  28:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #include "Fl_Text_Display.H"
  29:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  30:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** // key will match in any state
  31:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #define FL_TEXT_EDITOR_ANY_STATE  (-1L)
  32:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  33:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** /**
  34:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****   This is the FLTK text editor widget.
  35:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  36:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****   It allows the user to edit multiple lines of text and supports highlighting
  37:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****   and scrolling. The buffer that is displayed in the widget is managed
  38:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****   by the Fl_Text_Buffer class.
  39:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** */
  40:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** class FL_EXPORT Fl_Text_Editor : public Fl_Text_Display {
  41:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****   public:
  42:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /** Key function binding callback type. */
  43:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     typedef int (*Key_Func)(int key, Fl_Text_Editor* editor);
  44:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  45:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /** Simple linked list item associating a key/state to a function. */
  46:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     struct Key_Binding {
  47:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****       int          key;		///< the key pressed
  48:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****       int          state;	///< the state of key modifiers
  49:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****       Key_Func     function;	///< associated function
  50:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****       Key_Binding* next;	///< next key binding in the list
  51:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     };
  52:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  53:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     Fl_Text_Editor(int X, int Y, int W, int H, const char* l = 0);
  54:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     ~Fl_Text_Editor() { remove_all_key_bindings(); }
  55:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     virtual int handle(int e);
  56:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /**
  57:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 	Sets the current insert mode; if non-zero, new text
  58:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 	is inserted before the current cursor position. Otherwise, new
  59:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 	text replaces text at the current cursor position.
  60:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     */
  61:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void insert_mode(int b) { insert_mode_ = b; }
 122              		.loc 4 61 0
 123 0000 8B96A801 		movl	424(%rsi), %edx
 123      0000
 124 0006 31C0     		xorl	%eax, %eax
 125 0008 85D2     		testl	%edx, %edx
 126 000a 0F94C0   		sete	%al
 127 000d 8986A801 		movl	%eax, 424(%rsi)
 127      0000
 128              	.LVL4:
 129              	.LBE398:
 130              	.LBE397:
 542:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 131              		.loc 3 544 0
 132 0013 B8010000 		movl	$1, %eax
 132      00
 133 0018 C3       		ret
 134              		.cfi_endproc
 135              	.LFE584:
 137              		.section	.text.unlikely._ZN14Fl_Text_Editor9kf_insertEiPS_
 138              	.LCOLDE4:
 139              		.section	.text._ZN14Fl_Text_Editor9kf_insertEiPS_
 140              	.LHOTE4:
 141              		.section	.text.unlikely._ZL14kill_selectionP14Fl_Text_Editor,"ax",@progbits
 142              	.LCOLDB5:
 143              		.section	.text._ZL14kill_selectionP14Fl_Text_Editor,"ax",@progbits
 144              	.LHOTB5:
 145              		.p2align 4,,15
 147              	_ZL14kill_selectionP14Fl_Text_Editor:
 148              	.LFB565:
 238:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 149              		.loc 3 238 0
 150              		.cfi_startproc
 151              	.LVL5:
 152 0000 488B87D0 		movq	208(%rdi), %rax
 152      000000
 153              	.LVL6:
 239:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 154              		.loc 3 239 0
 155 0007 80781800 		cmpb	$0, 24(%rax)
 156 000b 7503     		jne	.L11
 157 000d F3C3     		rep ret
 158 000f 90       		.p2align 4,,10
 159              		.p2align 3
 160              	.L11:
 238:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 161              		.loc 3 238 0
 162 0010 53       		pushq	%rbx
 163              		.cfi_def_cfa_offset 16
 164              		.cfi_offset 3, -16
 240:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 165              		.loc 3 240 0
 166 0011 8B7010   		movl	16(%rax), %esi
 167 0014 4889FB   		movq	%rdi, %rbx
 168              	.LVL7:
 169 0017 E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 169      00
 170              	.LVL8:
 241:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 171              		.loc 3 241 0
 172 001c 488BBBD0 		movq	208(%rbx), %rdi
 172      000000
 243:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 173              		.loc 3 243 0
 174 0023 5B       		popq	%rbx
 175              		.cfi_restore 3
 176              		.cfi_def_cfa_offset 8
 177              	.LVL9:
 241:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 178              		.loc 3 241 0
 179 0024 E9000000 		jmp	_ZN14Fl_Text_Buffer16remove_selectionEv
 179      00
 180              	.LVL10:
 181              		.cfi_endproc
 182              	.LFE565:
 184              		.section	.text.unlikely._ZL14kill_selectionP14Fl_Text_Editor
 185              	.LCOLDE5:
 186              		.section	.text._ZL14kill_selectionP14Fl_Text_Editor
 187              	.LHOTE5:
 188              		.section	.rodata.str1.1,"aMS",@progbits,1
 189              	.LC6:
 190 0000 00       		.string	""
 191              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_moveEiPS_,"ax",@progbits
 192              		.align 2
 193              	.LCOLDB7:
 194              		.section	.text._ZN14Fl_Text_Editor7kf_moveEiPS_,"ax",@progbits
 195              	.LHOTB7:
 196              		.align 2
 197              		.p2align 4,,15
 198              		.globl	_ZN14Fl_Text_Editor7kf_moveEiPS_
 200              	_ZN14Fl_Text_Editor7kf_moveEiPS_:
 201              	.LFB570:
 317:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 202              		.loc 3 317 0
 203              		.cfi_startproc
 204              	.LVL11:
 205 0000 55       		pushq	%rbp
 206              		.cfi_def_cfa_offset 16
 207              		.cfi_offset 6, -16
 208 0001 53       		pushq	%rbx
 209              		.cfi_def_cfa_offset 24
 210              		.cfi_offset 3, -24
 211 0002 89FD     		movl	%edi, %ebp
 212 0004 4889F3   		movq	%rsi, %rbx
 213 0007 4883EC08 		subq	$8, %rsp
 214              		.cfi_def_cfa_offset 32
 215 000b 488BBED0 		movq	208(%rsi), %rdi
 215      000000
 216              	.LVL12:
 320:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 217              		.loc 3 320 0
 218 0012 807F1800 		cmpb	$0, 24(%rdi)
 219 0016 750C     		jne	.L13
 220              	.LVL13:
 321:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 221              		.loc 3 321 0
 222 0018 8B86B000 		movl	176(%rsi), %eax
 222      0000
 223 001e 89867001 		movl	%eax, 368(%rsi)
 223      0000
 224              	.LVL14:
 225              	.L13:
 322:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 226              		.loc 3 322 0
 227 0024 E8000000 		call	_ZN14Fl_Text_Buffer8unselectEv
 227      00
 228              	.LVL15:
 323:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 229              		.loc 3 323 0
 230 0029 31D2     		xorl	%edx, %edx
 231 002b 31F6     		xorl	%esi, %esi
 232 002d BF000000 		movl	$.LC6, %edi
 232      00
 233 0032 E8000000 		call	_ZN2Fl4copyEPKcii
 233      00
 234              	.LVL16:
 324:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 235              		.loc 3 324 0
 236 0037 8DBDB000 		leal	-65360(%rbp), %edi
 236      FFFF
 237 003d 83FF07   		cmpl	$7, %edi
 238 0040 772A     		ja	.L24
 239 0042 FF24FD00 		jmp	*.L16(,%rdi,8)
 239      000000
 240              		.section	.rodata._ZN14Fl_Text_Editor7kf_moveEiPS_,"a",@progbits
 241              		.align 8
 242              		.align 4
 243              	.L16:
 244 0000 00000000 		.quad	.L15
 244      00000000 
 245 0008 00000000 		.quad	.L17
 245      00000000 
 246 0010 00000000 		.quad	.L18
 246      00000000 
 247 0018 00000000 		.quad	.L19
 247      00000000 
 248 0020 00000000 		.quad	.L20
 248      00000000 
 249 0028 00000000 		.quad	.L21
 249      00000000 
 250 0030 00000000 		.quad	.L22
 250      00000000 
 251 0038 00000000 		.quad	.L23
 251      00000000 
 252              		.section	.text._ZN14Fl_Text_Editor7kf_moveEiPS_
 253 0049 0F1F8000 		.p2align 4,,10
 253      000000
 254              		.p2align 3
 255              	.L15:
 256              	.LVL17:
 326:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 257              		.loc 3 326 0
 258 0050 8BB3B000 		movl	176(%rbx), %esi
 258      0000
 259 0056 488BBBD0 		movq	208(%rbx), %rdi
 259      000000
 260 005d E8000000 		call	_ZNK14Fl_Text_Buffer10line_startEi
 260      00
 261              	.LVL18:
 262 0062 4889DF   		movq	%rbx, %rdi
 263 0065 89C6     		movl	%eax, %esi
 264 0067 E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 264      00
 265              	.LVL19:
 266              	.L24:
 350:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 267              		.loc 3 350 0
 268 006c 4889DF   		movq	%rbx, %rdi
 269 006f E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 269      00
 270              	.LVL20:
 352:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 271              		.loc 3 352 0
 272 0074 4883C408 		addq	$8, %rsp
 273              		.cfi_remember_state
 274              		.cfi_def_cfa_offset 24
 275 0078 B8010000 		movl	$1, %eax
 275      00
 276 007d 5B       		popq	%rbx
 277              		.cfi_def_cfa_offset 16
 278              	.LVL21:
 279 007e 5D       		popq	%rbp
 280              		.cfi_def_cfa_offset 8
 281 007f C3       		ret
 282              	.LVL22:
 283              		.p2align 4,,10
 284              		.p2align 3
 285              	.L22:
 286              		.cfi_restore_state
 347:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 287              		.loc 3 347 0 discriminator 3
 288 0080 31ED     		xorl	%ebp, %ebp
 289              	.LVL23:
 290 0082 83BBC800 		cmpl	$1, 200(%rbx)
 290      000001
 291 0089 7EE1     		jle	.L24
 292              	.LVL24:
 293 008b 0F1F4400 		.p2align 4,,10
 293      00
 294              		.p2align 3
 295              	.L30:
 347:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296              		.loc 3 347 0 is_stmt 0 discriminator 2
 297 0090 4889DF   		movq	%rbx, %rdi
 298 0093 83C501   		addl	$1, %ebp
 299              	.LVL25:
 300 0096 E8000000 		call	_ZN15Fl_Text_Display9move_downEv
 300      00
 301              	.LVL26:
 302 009b 8B83C800 		movl	200(%rbx), %eax
 302      0000
 303 00a1 83E801   		subl	$1, %eax
 304 00a4 39E8     		cmpl	%ebp, %eax
 305 00a6 7FE8     		jg	.L30
 306 00a8 EBC2     		jmp	.L24
 307              	.LVL27:
 308 00aa 660F1F44 		.p2align 4,,10
 308      0000
 309              		.p2align 3
 310              	.L23:
 329:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 311              		.loc 3 329 0 is_stmt 1
 312 00b0 8BB3B000 		movl	176(%rbx), %esi
 312      0000
 313 00b6 488BBBD0 		movq	208(%rbx), %rdi
 313      000000
 314 00bd E8000000 		call	_ZNK14Fl_Text_Buffer8line_endEi
 314      00
 315              	.LVL28:
 316 00c2 4889DF   		movq	%rbx, %rdi
 317 00c5 89C6     		movl	%eax, %esi
 318 00c7 E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 318      00
 319              	.LVL29:
 330:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 320              		.loc 3 330 0
 321 00cc EB9E     		jmp	.L24
 322              	.LVL30:
 323 00ce 6690     		.p2align 4,,10
 324              		.p2align 3
 325              	.L17:
 332:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 326              		.loc 3 332 0
 327 00d0 4889DF   		movq	%rbx, %rdi
 328 00d3 E8000000 		call	_ZN15Fl_Text_Display9move_leftEv
 328      00
 329              	.LVL31:
 333:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 330              		.loc 3 333 0
 331 00d8 EB92     		jmp	.L24
 332 00da 660F1F44 		.p2align 4,,10
 332      0000
 333              		.p2align 3
 334              	.L18:
 338:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 335              		.loc 3 338 0
 336 00e0 4889DF   		movq	%rbx, %rdi
 337 00e3 E8000000 		call	_ZN15Fl_Text_Display7move_upEv
 337      00
 338              	.LVL32:
 339:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 339              		.loc 3 339 0
 340 00e8 EB82     		jmp	.L24
 341 00ea 660F1F44 		.p2align 4,,10
 341      0000
 342              		.p2align 3
 343              	.L19:
 335:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 344              		.loc 3 335 0
 345 00f0 4889DF   		movq	%rbx, %rdi
 346 00f3 E8000000 		call	_ZN15Fl_Text_Display10move_rightEv
 346      00
 347              	.LVL33:
 336:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 348              		.loc 3 336 0
 349 00f8 E96FFFFF 		jmp	.L24
 349      FF
 350 00fd 0F1F00   		.p2align 4,,10
 351              		.p2align 3
 352              	.L20:
 341:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 353              		.loc 3 341 0
 354 0100 4889DF   		movq	%rbx, %rdi
 355 0103 E8000000 		call	_ZN15Fl_Text_Display9move_downEv
 355      00
 356              	.LVL34:
 342:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 357              		.loc 3 342 0
 358 0108 E95FFFFF 		jmp	.L24
 358      FF
 359 010d 0F1F00   		.p2align 4,,10
 360              		.p2align 3
 361              	.L21:
 362              	.LVL35:
 344:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 363              		.loc 3 344 0 discriminator 3
 364 0110 31ED     		xorl	%ebp, %ebp
 365              	.LVL36:
 366 0112 83BBC800 		cmpl	$1, 200(%rbx)
 366      000001
 367 0119 0F8E4DFF 		jle	.L24
 367      FFFF
 368              	.LVL37:
 369 011f 90       		.p2align 4,,10
 370              		.p2align 3
 371              	.L28:
 344:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 372              		.loc 3 344 0 is_stmt 0 discriminator 2
 373 0120 4889DF   		movq	%rbx, %rdi
 374 0123 83C501   		addl	$1, %ebp
 375              	.LVL38:
 376 0126 E8000000 		call	_ZN15Fl_Text_Display7move_upEv
 376      00
 377              	.LVL39:
 378 012b 8B83C800 		movl	200(%rbx), %eax
 378      0000
 379 0131 83E801   		subl	$1, %eax
 380 0134 39E8     		cmpl	%ebp, %eax
 381 0136 7FE8     		jg	.L28
 382 0138 E92FFFFF 		jmp	.L24
 382      FF
 383              		.cfi_endproc
 384              	.LFE570:
 386              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_moveEiPS_
 387              	.LCOLDE7:
 388              		.section	.text._ZN14Fl_Text_Editor7kf_moveEiPS_
 389              	.LHOTE7:
 390              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_copyEiPS_,"ax",@progbits
 391              		.align 2
 392              	.LCOLDB8:
 393              		.section	.text._ZN14Fl_Text_Editor7kf_copyEiPS_,"ax",@progbits
 394              	.LHOTB8:
 395              		.align 2
 396              		.p2align 4,,15
 397              		.globl	_ZN14Fl_Text_Editor7kf_copyEiPS_
 399              	_ZN14Fl_Text_Editor7kf_copyEiPS_:
 400              	.LFB586:
 545:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 401              		.loc 3 566 0 is_stmt 1
 402              		.cfi_startproc
 403              	.LVL40:
 404 0000 488BBED0 		movq	208(%rsi), %rdi
 404      000000
 405              	.LVL41:
 567:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 406              		.loc 3 567 0
 407 0007 807F1800 		cmpb	$0, 24(%rdi)
 408 000b 750B     		jne	.L38
 568:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409              		.loc 3 573 0
 410 000d B8010000 		movl	$1, %eax
 410      00
 411 0012 C3       		ret
 412              		.p2align 4,,10
 413 0013 0F1F4400 		.p2align 3
 413      00
 414              	.L38:
 566:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 415              		.loc 3 566 0
 416 0018 55       		pushq	%rbp
 417              		.cfi_def_cfa_offset 16
 418              		.cfi_offset 6, -16
 419 0019 53       		pushq	%rbx
 420              		.cfi_def_cfa_offset 24
 421              		.cfi_offset 3, -24
 422 001a 4889F3   		movq	%rsi, %rbx
 423              	.LVL42:
 424 001d 4883EC08 		subq	$8, %rsp
 425              		.cfi_def_cfa_offset 32
 568:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 426              		.loc 3 568 0
 427 0021 E8000000 		call	_ZN14Fl_Text_Buffer14selection_textEv
 427      00
 428              	.LVL43:
 569:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 429              		.loc 3 569 0
 430 0026 803800   		cmpb	$0, (%rax)
 568:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 431              		.loc 3 568 0
 432 0029 4889C5   		movq	%rax, %rbp
 433              	.LVL44:
 569:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434              		.loc 3 569 0
 435 002c 7522     		jne	.L39
 436              	.LVL45:
 437              	.L35:
 570:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 438              		.loc 3 570 0
 439 002e 4889EF   		movq	%rbp, %rdi
 440 0031 E8000000 		call	free
 440      00
 441              	.LVL46:
 571:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 442              		.loc 3 571 0
 443 0036 4889DF   		movq	%rbx, %rdi
 444 0039 E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 444      00
 445              	.LVL47:
 446              		.loc 3 573 0
 447 003e 4883C408 		addq	$8, %rsp
 448              		.cfi_remember_state
 449              		.cfi_def_cfa_offset 24
 450 0042 B8010000 		movl	$1, %eax
 450      00
 451 0047 5B       		popq	%rbx
 452              		.cfi_restore 3
 453              		.cfi_def_cfa_offset 16
 454              	.LVL48:
 455 0048 5D       		popq	%rbp
 456              		.cfi_restore 6
 457              		.cfi_def_cfa_offset 8
 458              	.LVL49:
 459 0049 C3       		ret
 460              	.LVL50:
 461 004a 660F1F44 		.p2align 4,,10
 461      0000
 462              		.p2align 3
 463              	.L39:
 464              		.cfi_restore_state
 569:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 465              		.loc 3 569 0 discriminator 1
 466 0050 4889C7   		movq	%rax, %rdi
 467 0053 E8000000 		call	strlen
 467      00
 468              	.LVL51:
 469 0058 BA010000 		movl	$1, %edx
 469      00
 470 005d 89C6     		movl	%eax, %esi
 471 005f 4889EF   		movq	%rbp, %rdi
 472 0062 E8000000 		call	_ZN2Fl4copyEPKcii
 472      00
 473              	.LVL52:
 474 0067 EBC5     		jmp	.L35
 475              		.cfi_endproc
 476              	.LFE586:
 478              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_copyEiPS_
 479              	.LCOLDE8:
 480              		.section	.text._ZN14Fl_Text_Editor7kf_copyEiPS_
 481              	.LHOTE8:
 482              		.section	.text.unlikely._ZN14Fl_Text_Editor13kf_select_allEiPS_,"ax",@progbits
 483              		.align 2
 484              	.LCOLDB9:
 485              		.section	.text._ZN14Fl_Text_Editor13kf_select_allEiPS_,"ax",@progbits
 486              	.LHOTB9:
 487              		.align 2
 488              		.p2align 4,,15
 489              		.globl	_ZN14Fl_Text_Editor13kf_select_allEiPS_
 491              	_ZN14Fl_Text_Editor13kf_select_allEiPS_:
 492              	.LFB589:
 574:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 588:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 493              		.loc 3 602 0
 494              		.cfi_startproc
 495              	.LVL53:
 496 0000 53       		pushq	%rbx
 497              		.cfi_def_cfa_offset 16
 498              		.cfi_offset 3, -16
 499 0001 488BBED0 		movq	208(%rsi), %rdi
 499      000000
 500              	.LVL54:
 501              		.loc 3 602 0
 502 0008 4889F3   		movq	%rsi, %rbx
 503              	.LVL55:
 603:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504              		.loc 3 603 0
 505 000b 31F6     		xorl	%esi, %esi
 506              	.LVL56:
 507 000d 8B5734   		movl	52(%rdi), %edx
 508 0010 E8000000 		call	_ZN14Fl_Text_Buffer6selectEii
 508      00
 509              	.LVL57:
 604:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 510              		.loc 3 604 0
 511 0015 488BBBD0 		movq	208(%rbx), %rdi
 511      000000
 512 001c E8000000 		call	_ZN14Fl_Text_Buffer14selection_textEv
 512      00
 513              	.LVL58:
 605:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 514              		.loc 3 605 0
 515 0021 803800   		cmpb	$0, (%rax)
 604:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 516              		.loc 3 604 0
 517 0024 4889C3   		movq	%rax, %rbx
 518              	.LVL59:
 519              		.loc 3 605 0
 520 0027 7414     		je	.L41
 521              		.loc 3 605 0 is_stmt 0 discriminator 1
 522 0029 4889C7   		movq	%rax, %rdi
 523 002c E8000000 		call	strlen
 523      00
 524              	.LVL60:
 525 0031 31D2     		xorl	%edx, %edx
 526 0033 89C6     		movl	%eax, %esi
 527 0035 4889DF   		movq	%rbx, %rdi
 528 0038 E8000000 		call	_ZN2Fl4copyEPKcii
 528      00
 529              	.LVL61:
 530              	.L41:
 606:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 531              		.loc 3 606 0 is_stmt 1
 532 003d 4889DF   		movq	%rbx, %rdi
 533 0040 E8000000 		call	free
 533      00
 534              	.LVL62:
 607:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 535              		.loc 3 608 0
 536 0045 B8010000 		movl	$1, %eax
 536      00
 537 004a 5B       		popq	%rbx
 538              		.cfi_def_cfa_offset 8
 539              	.LVL63:
 540 004b C3       		ret
 541              		.cfi_endproc
 542              	.LFE589:
 544              		.section	.text.unlikely._ZN14Fl_Text_Editor13kf_select_allEiPS_
 545              	.LCOLDE9:
 546              		.section	.text._ZN14Fl_Text_Editor13kf_select_allEiPS_
 547              	.LHOTE9:
 548              		.section	.text.unlikely._ZN14Fl_Text_Editor13kf_shift_moveEiPS_,"ax",@progbits
 549              		.align 2
 550              	.LCOLDB10:
 551              		.section	.text._ZN14Fl_Text_Editor13kf_shift_moveEiPS_,"ax",@progbits
 552              	.LHOTB10:
 553              		.align 2
 554              		.p2align 4,,15
 555              		.globl	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 557              	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_:
 558              	.LFB571:
 357:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 559              		.loc 3 357 0
 560              		.cfi_startproc
 561              	.LVL64:
 562 0000 53       		pushq	%rbx
 563              		.cfi_def_cfa_offset 16
 564              		.cfi_offset 3, -16
 357:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 565              		.loc 3 357 0
 566 0001 4889F3   		movq	%rsi, %rbx
 358:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 567              		.loc 3 358 0
 568 0004 E8000000 		call	_ZN14Fl_Text_Editor7kf_moveEiPS_
 568      00
 569              	.LVL65:
 359:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 570              		.loc 3 359 0
 571 0009 8BBBB000 		movl	176(%rbx), %edi
 571      0000
 572 000f 4889DE   		movq	%rbx, %rsi
 573 0012 E8000000 		call	_Z15fl_text_drag_meiP15Fl_Text_Display
 573      00
 574              	.LVL66:
 360:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 575              		.loc 3 360 0
 576 0017 488BBBD0 		movq	208(%rbx), %rdi
 576      000000
 577 001e E8000000 		call	_ZN14Fl_Text_Buffer14selection_textEv
 577      00
 578              	.LVL67:
 361:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 579              		.loc 3 361 0
 580 0023 4885C0   		testq	%rax, %rax
 581 0026 741F     		je	.L44
 582 0028 4889C3   		movq	%rax, %rbx
 583              	.LVL68:
 362:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 584              		.loc 3 362 0
 585 002b 4889C7   		movq	%rax, %rdi
 586 002e E8000000 		call	strlen
 586      00
 587              	.LVL69:
 588 0033 4889DF   		movq	%rbx, %rdi
 589 0036 31D2     		xorl	%edx, %edx
 590 0038 89C6     		movl	%eax, %esi
 591 003a E8000000 		call	_ZN2Fl4copyEPKcii
 591      00
 592              	.LVL70:
 363:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 593              		.loc 3 363 0
 594 003f 4889DF   		movq	%rbx, %rdi
 595 0042 E8000000 		call	free
 595      00
 596              	.LVL71:
 597              	.L44:
 366:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 598              		.loc 3 366 0
 599 0047 B8010000 		movl	$1, %eax
 599      00
 600 004c 5B       		popq	%rbx
 601              		.cfi_def_cfa_offset 8
 602 004d C3       		ret
 603              		.cfi_endproc
 604              	.LFE571:
 606              		.section	.text.unlikely._ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 607              	.LCOLDE10:
 608              		.section	.text._ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 609              	.LHOTE10:
 610              		.section	.text.unlikely._ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_,"ax",@progbits
 611              		.align 2
 612              	.LCOLDB11:
 613              		.section	.text._ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_,"ax",@progbits
 614              	.LHOTB11:
 615              		.align 2
 616              		.p2align 4,,15
 617              		.globl	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 619              	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_:
 620              	.LFB572:
 381:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 621              		.loc 3 381 0
 622              		.cfi_startproc
 623              	.LVL72:
 624 0000 55       		pushq	%rbp
 625              		.cfi_def_cfa_offset 16
 626              		.cfi_offset 6, -16
 627 0001 53       		pushq	%rbx
 628              		.cfi_def_cfa_offset 24
 629              		.cfi_offset 3, -24
 630 0002 89FB     		movl	%edi, %ebx
 631 0004 4889F5   		movq	%rsi, %rbp
 632 0007 4883EC08 		subq	$8, %rsp
 633              		.cfi_def_cfa_offset 32
 634 000b 488BBED0 		movq	208(%rsi), %rdi
 634      000000
 635              	.LVL73:
 382:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 636              		.loc 3 382 0
 637 0012 807F1800 		cmpb	$0, 24(%rdi)
 638 0016 750C     		jne	.L50
 639              	.LVL74:
 383:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 640              		.loc 3 383 0
 641 0018 8B86B000 		movl	176(%rsi), %eax
 641      0000
 642 001e 89867001 		movl	%eax, 368(%rsi)
 642      0000
 643              	.LVL75:
 644              	.L50:
 384:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 645              		.loc 3 384 0
 646 0024 8D83AE00 		leal	-65362(%rbx), %eax
 646      FFFF
 647 002a 83E0FD   		andl	$-3, %eax
 648 002d 7541     		jne	.L66
 649              	.LVL76:
 650              	.L51:
 389:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 651              		.loc 3 389 0
 652 002f 81EB50FF 		subl	$65360, %ebx
 652      0000
 653              	.LVL77:
 654 0035 83FB07   		cmpl	$7, %ebx
 655 0038 7728     		ja	.L52
 656 003a FF24DD00 		jmp	*.L54(,%rbx,8)
 656      000000
 657              		.section	.rodata._ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_,"a",@progbits
 658              		.align 8
 659              		.align 4
 660              	.L54:
 661 0000 00000000 		.quad	.L53
 661      00000000 
 662 0008 00000000 		.quad	.L55
 662      00000000 
 663 0010 00000000 		.quad	.L56
 663      00000000 
 664 0018 00000000 		.quad	.L57
 664      00000000 
 665 0020 00000000 		.quad	.L58
 665      00000000 
 666 0028 00000000 		.quad	.L59
 666      00000000 
 667 0030 00000000 		.quad	.L60
 667      00000000 
 668 0038 00000000 		.quad	.L61
 668      00000000 
 669              		.section	.text._ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 670              		.p2align 4,,10
 671 0041 0F1F8000 		.p2align 3
 671      000000
 672              	.L60:
 414:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 673              		.loc 3 414 0
 674 0048 486395C8 		movslq	200(%rbp), %rdx
 674      000000
 675 004f 488B85F0 		movq	240(%rbp), %rax
 675      000000
 676 0056 4889EF   		movq	%rbp, %rdi
 677 0059 8B7490F8 		movl	-8(%rax,%rdx,4), %esi
 678 005d E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 678      00
 679              	.LVL78:
 680              	.L52:
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 681              		.loc 3 418 0
 682 0062 4883C408 		addq	$8, %rsp
 683              		.cfi_remember_state
 684              		.cfi_def_cfa_offset 24
 685 0066 B8010000 		movl	$1, %eax
 685      00
 686 006b 5B       		popq	%rbx
 687              		.cfi_def_cfa_offset 16
 688 006c 5D       		popq	%rbp
 689              		.cfi_def_cfa_offset 8
 690              	.LVL79:
 691 006d C3       		ret
 692              	.LVL80:
 693 006e 6690     		.p2align 4,,10
 694              		.p2align 3
 695              	.L66:
 696              		.cfi_restore_state
 385:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 697              		.loc 3 385 0
 698 0070 E8000000 		call	_ZN14Fl_Text_Buffer8unselectEv
 698      00
 699              	.LVL81:
 386:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 700              		.loc 3 386 0
 701 0075 31D2     		xorl	%edx, %edx
 702 0077 31F6     		xorl	%esi, %esi
 703 0079 BF000000 		movl	$.LC6, %edi
 703      00
 704 007e E8000000 		call	_ZN2Fl4copyEPKcii
 704      00
 705              	.LVL82:
 387:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 706              		.loc 3 387 0
 707 0083 4889EF   		movq	%rbp, %rdi
 708 0086 E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 708      00
 709              	.LVL83:
 710 008b EBA2     		jmp	.L51
 711              	.LVL84:
 712 008d 0F1F00   		.p2align 4,,10
 713              		.p2align 3
 714              	.L61:
 715 0090 488B85D0 		movq	208(%rbp), %rax
 715      000000
 395:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 716              		.loc 3 395 0
 717 0097 4889EF   		movq	%rbp, %rdi
 718 009a 8B7034   		movl	52(%rax), %esi
 719 009d E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 719      00
 720              	.LVL85:
 721 00a2 488B85D0 		movq	208(%rbp), %rax
 721      000000
 396:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 722              		.loc 3 396 0
 723 00a9 4889EF   		movq	%rbp, %rdi
 724 00ac B9010000 		movl	$1, %ecx
 724      00
 725 00b1 31F6     		xorl	%esi, %esi
 726 00b3 8B5034   		movl	52(%rax), %edx
 727 00b6 E8000000 		call	_ZNK15Fl_Text_Display11count_linesEiib
 727      00
 728              	.LVL86:
 729 00bb 4889EF   		movq	%rbp, %rdi
 730 00be 89C6     		movl	%eax, %esi
 731 00c0 31D2     		xorl	%edx, %edx
 732 00c2 E8000000 		call	_ZN15Fl_Text_Display6scrollEii
 732      00
 733              	.LVL87:
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 734              		.loc 3 418 0
 735 00c7 4883C408 		addq	$8, %rsp
 736              		.cfi_remember_state
 737              		.cfi_def_cfa_offset 24
 738 00cb B8010000 		movl	$1, %eax
 738      00
 739 00d0 5B       		popq	%rbx
 740              		.cfi_def_cfa_offset 16
 741 00d1 5D       		popq	%rbp
 742              		.cfi_def_cfa_offset 8
 743              	.LVL88:
 744 00d2 C3       		ret
 745              	.LVL89:
 746              		.p2align 4,,10
 747 00d3 0F1F4400 		.p2align 3
 747      00
 748              	.L53:
 749              		.cfi_restore_state
 391:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 750              		.loc 3 391 0
 751 00d8 4889EF   		movq	%rbp, %rdi
 752 00db 31F6     		xorl	%esi, %esi
 753 00dd E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 753      00
 754              	.LVL90:
 392:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 755              		.loc 3 392 0
 756 00e2 4889EF   		movq	%rbp, %rdi
 757 00e5 31D2     		xorl	%edx, %edx
 758 00e7 31F6     		xorl	%esi, %esi
 759 00e9 E8000000 		call	_ZN15Fl_Text_Display6scrollEii
 759      00
 760              	.LVL91:
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 761              		.loc 3 418 0
 762 00ee 4883C408 		addq	$8, %rsp
 763              		.cfi_remember_state
 764              		.cfi_def_cfa_offset 24
 765 00f2 B8010000 		movl	$1, %eax
 765      00
 766 00f7 5B       		popq	%rbx
 767              		.cfi_def_cfa_offset 16
 768 00f8 5D       		popq	%rbp
 769              		.cfi_def_cfa_offset 8
 770              	.LVL92:
 771 00f9 C3       		ret
 772              	.LVL93:
 773 00fa 660F1F44 		.p2align 4,,10
 773      0000
 774              		.p2align 3
 775              	.L55:
 776              		.cfi_restore_state
 399:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 777              		.loc 3 399 0
 778 0100 4889EF   		movq	%rbp, %rdi
 779 0103 E8000000 		call	_ZN15Fl_Text_Display13previous_wordEv
 779      00
 780              	.LVL94:
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 781              		.loc 3 418 0
 782 0108 4883C408 		addq	$8, %rsp
 783              		.cfi_remember_state
 784              		.cfi_def_cfa_offset 24
 785 010c B8010000 		movl	$1, %eax
 785      00
 786 0111 5B       		popq	%rbx
 787              		.cfi_def_cfa_offset 16
 788 0112 5D       		popq	%rbp
 789              		.cfi_def_cfa_offset 8
 790              	.LVL95:
 791 0113 C3       		ret
 792              	.LVL96:
 793              		.p2align 4,,10
 794 0114 0F1F4000 		.p2align 3
 795              	.L56:
 796              		.cfi_restore_state
 405:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 797              		.loc 3 405 0
 798 0118 8B85F800 		movl	248(%rbp), %eax
 798      0000
 799 011e 8B950401 		movl	260(%rbp), %edx
 799      0000
 800 0124 4889EF   		movq	%rbp, %rdi
 801 0127 8D70FF   		leal	-1(%rax), %esi
 802 012a E8000000 		call	_ZN15Fl_Text_Display6scrollEii
 802      00
 803              	.LVL97:
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 804              		.loc 3 418 0
 805 012f 4883C408 		addq	$8, %rsp
 806              		.cfi_remember_state
 807              		.cfi_def_cfa_offset 24
 808 0133 B8010000 		movl	$1, %eax
 808      00
 809 0138 5B       		popq	%rbx
 810              		.cfi_def_cfa_offset 16
 811 0139 5D       		popq	%rbp
 812              		.cfi_def_cfa_offset 8
 813              	.LVL98:
 814 013a C3       		ret
 815              	.LVL99:
 816 013b 0F1F4400 		.p2align 4,,10
 816      00
 817              		.p2align 3
 818              	.L57:
 819              		.cfi_restore_state
 402:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 820              		.loc 3 402 0
 821 0140 4889EF   		movq	%rbp, %rdi
 822 0143 E8000000 		call	_ZN15Fl_Text_Display9next_wordEv
 822      00
 823              	.LVL100:
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 824              		.loc 3 418 0
 825 0148 4883C408 		addq	$8, %rsp
 826              		.cfi_remember_state
 827              		.cfi_def_cfa_offset 24
 828 014c B8010000 		movl	$1, %eax
 828      00
 829 0151 5B       		popq	%rbx
 830              		.cfi_def_cfa_offset 16
 831 0152 5D       		popq	%rbp
 832              		.cfi_def_cfa_offset 8
 833              	.LVL101:
 834 0153 C3       		ret
 835              	.LVL102:
 836              		.p2align 4,,10
 837 0154 0F1F4000 		.p2align 3
 838              	.L58:
 839              		.cfi_restore_state
 408:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 840              		.loc 3 408 0
 841 0158 8B85F800 		movl	248(%rbp), %eax
 841      0000
 842 015e 8B950401 		movl	260(%rbp), %edx
 842      0000
 843 0164 4889EF   		movq	%rbp, %rdi
 844 0167 8D7001   		leal	1(%rax), %esi
 845 016a E8000000 		call	_ZN15Fl_Text_Display6scrollEii
 845      00
 846              	.LVL103:
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 847              		.loc 3 418 0
 848 016f 4883C408 		addq	$8, %rsp
 849              		.cfi_remember_state
 850              		.cfi_def_cfa_offset 24
 851 0173 B8010000 		movl	$1, %eax
 851      00
 852 0178 5B       		popq	%rbx
 853              		.cfi_def_cfa_offset 16
 854 0179 5D       		popq	%rbp
 855              		.cfi_def_cfa_offset 8
 856              	.LVL104:
 857 017a C3       		ret
 858              	.LVL105:
 859 017b 0F1F4400 		.p2align 4,,10
 859      00
 860              		.p2align 3
 861              	.L59:
 862              		.cfi_restore_state
 411:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 863              		.loc 3 411 0
 864 0180 488B85F0 		movq	240(%rbp), %rax
 864      000000
 865 0187 4889EF   		movq	%rbp, %rdi
 866 018a 8B30     		movl	(%rax), %esi
 867 018c E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 867      00
 868              	.LVL106:
 418:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 869              		.loc 3 418 0
 870 0191 4883C408 		addq	$8, %rsp
 871              		.cfi_def_cfa_offset 24
 872 0195 B8010000 		movl	$1, %eax
 872      00
 873 019a 5B       		popq	%rbx
 874              		.cfi_def_cfa_offset 16
 875 019b 5D       		popq	%rbp
 876              		.cfi_def_cfa_offset 8
 877              	.LVL107:
 878 019c C3       		ret
 879              		.cfi_endproc
 880              	.LFE572:
 882              		.section	.text.unlikely._ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 883              	.LCOLDE11:
 884              		.section	.text._ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 885              	.LHOTE11:
 886              		.section	.text.unlikely._ZN14Fl_Text_Editor11kf_c_s_moveEiPS_,"ax",@progbits
 887              		.align 2
 888              	.LCOLDB12:
 889              		.section	.text._ZN14Fl_Text_Editor11kf_c_s_moveEiPS_,"ax",@progbits
 890              	.LHOTB12:
 891              		.align 2
 892              		.p2align 4,,15
 893              		.globl	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 895              	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_:
 896              	.LFB575:
 468:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 897              		.loc 3 468 0
 898              		.cfi_startproc
 899              	.LVL108:
 900 0000 53       		pushq	%rbx
 901              		.cfi_def_cfa_offset 16
 902              		.cfi_offset 3, -16
 468:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 903              		.loc 3 468 0
 904 0001 4889F3   		movq	%rsi, %rbx
 469:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 905              		.loc 3 469 0
 906 0004 E8000000 		call	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 906      00
 907              	.LVL109:
 470:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 908              		.loc 3 470 0
 909 0009 8BBBB000 		movl	176(%rbx), %edi
 909      0000
 910 000f 4889DE   		movq	%rbx, %rsi
 911 0012 E8000000 		call	_Z15fl_text_drag_meiP15Fl_Text_Display
 911      00
 912              	.LVL110:
 472:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 913              		.loc 3 472 0
 914 0017 B8010000 		movl	$1, %eax
 914      00
 915 001c 5B       		popq	%rbx
 916              		.cfi_def_cfa_offset 8
 917              	.LVL111:
 918 001d C3       		ret
 919              		.cfi_endproc
 920              	.LFE575:
 922              		.section	.text.unlikely._ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 923              	.LCOLDE12:
 924              		.section	.text._ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 925              	.LHOTE12:
 926              		.section	.text.unlikely._ZN14Fl_Text_Editor8kf_pasteEiPS_,"ax",@progbits
 927              		.align 2
 928              	.LCOLDB13:
 929              		.section	.text._ZN14Fl_Text_Editor8kf_pasteEiPS_,"ax",@progbits
 930              	.LHOTB13:
 931              		.align 2
 932              		.p2align 4,,15
 933              		.globl	_ZN14Fl_Text_Editor8kf_pasteEiPS_
 935              	_ZN14Fl_Text_Editor8kf_pasteEiPS_:
 936              	.LFB588:
 590:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 937              		.loc 3 590 0
 938              		.cfi_startproc
 939              	.LVL112:
 940 0000 53       		pushq	%rbx
 941              		.cfi_def_cfa_offset 16
 942              		.cfi_offset 3, -16
 591:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 943              		.loc 3 591 0
 944 0001 4889F7   		movq	%rsi, %rdi
 590:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 945              		.loc 3 590 0
 946 0004 4889F3   		movq	%rsi, %rbx
 591:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 947              		.loc 3 591 0
 948 0007 E8000000 		call	_ZL14kill_selectionP14Fl_Text_Editor
 948      00
 949              	.LVL113:
 592:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 950              		.loc 3 592 0
 951 000c BE010000 		movl	$1, %esi
 951      00
 952 0011 4889DF   		movq	%rbx, %rdi
 953 0014 E8000000 		call	_ZN2Fl5pasteER9Fl_Widgeti
 953      00
 954              	.LVL114:
 593:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 955              		.loc 3 593 0
 956 0019 4889DF   		movq	%rbx, %rdi
 957 001c E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 957      00
 958              	.LVL115:
 959              	.LBB399:
 960              	.LBB400:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 961              		.loc 1 786 0
 962 0021 814B6080 		orl	$128, 96(%rbx)
 962      000000
 963              	.LVL116:
 964              	.LBE400:
 965              	.LBE399:
 595:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 966              		.loc 3 595 0
 967 0028 F6436F01 		testb	$1, 111(%rbx)
 968 002c 740F     		je	.L70
 969              	.LVL117:
 970              	.LBB401:
 971              	.LBB402:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 972              		.loc 1 861 0 discriminator 1
 973 002e 488B5318 		movq	24(%rbx), %rdx
 974 0032 4889DE   		movq	%rbx, %rsi
 975 0035 4889DF   		movq	%rbx, %rdi
 976 0038 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 976      00
 977              	.LVL118:
 978              	.L70:
 979              	.LBE402:
 980              	.LBE401:
 597:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 981              		.loc 3 597 0
 982 003d B8010000 		movl	$1, %eax
 982      00
 983 0042 5B       		popq	%rbx
 984              		.cfi_def_cfa_offset 8
 985              	.LVL119:
 986 0043 C3       		ret
 987              		.cfi_endproc
 988              	.LFE588:
 990              		.section	.text.unlikely._ZN14Fl_Text_Editor8kf_pasteEiPS_
 991              	.LCOLDE13:
 992              		.section	.text._ZN14Fl_Text_Editor8kf_pasteEiPS_
 993              	.LHOTE13:
 994              		.section	.text.unlikely._ZN14Fl_Text_EditorD2Ev,"axG",@progbits,_ZN14Fl_Text_EditorD5Ev,comdat
 995              		.align 2
 996              	.LCOLDB14:
 997              		.section	.text._ZN14Fl_Text_EditorD2Ev,"axG",@progbits,_ZN14Fl_Text_EditorD5Ev,comdat
 998              	.LHOTB14:
 999              		.align 2
 1000              		.p2align 4,,15
 1001              		.weak	_ZN14Fl_Text_EditorD2Ev
 1003              	_ZN14Fl_Text_EditorD2Ev:
 1004              	.LFB546:
  54:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     virtual int handle(int e);
 1005              		.loc 4 54 0
 1006              		.cfi_startproc
 1007              	.LVL120:
 1008 0000 55       		pushq	%rbp
 1009              		.cfi_def_cfa_offset 16
 1010              		.cfi_offset 6, -16
 1011 0001 53       		pushq	%rbx
 1012              		.cfi_def_cfa_offset 24
 1013              		.cfi_offset 3, -24
 1014 0002 4889FD   		movq	%rdi, %rbp
 1015 0005 4883EC08 		subq	$8, %rsp
 1016              		.cfi_def_cfa_offset 32
 1017              	.LBB407:
  54:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     virtual int handle(int e);
 1018              		.loc 4 54 0
 1019 0009 48C70700 		movq	$_ZTV14Fl_Text_Editor+16, (%rdi)
 1019      000000
 1020              	.LVL121:
 1021              	.LBB408:
 1022              	.LBB409:
 1023              	.LBB410:
 195:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1024              		.loc 3 195 0
 1025 0010 488BBFB0 		movq	432(%rdi), %rdi
 1025      010000
 1026              	.LVL122:
 1027 0017 4885FF   		testq	%rdi, %rdi
 1028 001a 7415     		je	.L77
 1029 001c 0F1F4000 		.p2align 4,,10
 1030              		.p2align 3
 1031              	.L81:
 196:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1032              		.loc 3 196 0
 1033 0020 488B5F10 		movq	16(%rdi), %rbx
 1034              	.LVL123:
 197:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 1035              		.loc 3 197 0
 1036 0024 E8000000 		call	_ZdlPv
 1036      00
 1037              	.LVL124:
 195:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1038              		.loc 3 195 0
 1039 0029 4885DB   		testq	%rbx, %rbx
 1040 002c 4889DF   		movq	%rbx, %rdi
 1041 002f 75EF     		jne	.L81
 1042              	.LVL125:
 1043              	.L77:
 199:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 1044              		.loc 3 199 0
 1045 0031 48C785B0 		movq	$0, 432(%rbp)
 1045      01000000 
 1045      000000
 1046              	.LVL126:
 1047              	.LBE410:
 1048              	.LBE409:
 1049              	.LBE408:
 1050              	.LBE407:
  54:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     virtual int handle(int e);
 1051              		.loc 4 54 0
 1052 003c 4883C408 		addq	$8, %rsp
 1053              		.cfi_def_cfa_offset 24
 1054              	.LBB411:
 1055 0040 4889EF   		movq	%rbp, %rdi
 1056              	.LBE411:
 1057 0043 5B       		popq	%rbx
 1058              		.cfi_def_cfa_offset 16
 1059 0044 5D       		popq	%rbp
 1060              		.cfi_def_cfa_offset 8
 1061              	.LVL127:
 1062              	.LBB412:
 1063 0045 E9000000 		jmp	_ZN15Fl_Text_DisplayD2Ev
 1063      00
 1064              	.LVL128:
 1065              	.LBE412:
 1066              		.cfi_endproc
 1067              	.LFE546:
 1069              		.section	.text.unlikely._ZN14Fl_Text_EditorD2Ev,"axG",@progbits,_ZN14Fl_Text_EditorD5Ev,comdat
 1070              	.LCOLDE14:
 1071              		.section	.text._ZN14Fl_Text_EditorD2Ev,"axG",@progbits,_ZN14Fl_Text_EditorD5Ev,comdat
 1072              	.LHOTE14:
 1073              		.weak	_ZN14Fl_Text_EditorD1Ev
 1074              		.set	_ZN14Fl_Text_EditorD1Ev,_ZN14Fl_Text_EditorD2Ev
 1075              		.section	.rodata
 1076              	.LC15:
 1077 0000 00       		.string	""
 1078 0001 00       		.string	""
 1079              		.section	.text.unlikely._ZN14Fl_Text_Editor10kf_defaultEiPS_,"ax",@progbits
 1080              		.align 2
 1081              	.LCOLDB16:
 1082              		.section	.text._ZN14Fl_Text_Editor10kf_defaultEiPS_,"ax",@progbits
 1083              	.LHOTB16:
 1084              		.align 2
 1085              		.p2align 4,,15
 1086              		.globl	_ZN14Fl_Text_Editor10kf_defaultEiPS_
 1088              	_ZN14Fl_Text_Editor10kf_defaultEiPS_:
 1089              	.LFB566:
 248:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 1090              		.loc 3 248 0
 1091              		.cfi_startproc
 1092              	.LVL129:
 1093 0000 4154     		pushq	%r12
 1094              		.cfi_def_cfa_offset 16
 1095              		.cfi_offset 12, -16
 1096 0002 55       		pushq	%rbp
 1097              		.cfi_def_cfa_offset 24
 1098              		.cfi_offset 6, -24
 250:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1099              		.loc 3 250 0
 1100 0003 4531E4   		xorl	%r12d, %r12d
 248:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 1101              		.loc 3 248 0
 1102 0006 53       		pushq	%rbx
 1103              		.cfi_def_cfa_offset 32
 1104              		.cfi_offset 3, -32
 1105 0007 4883EC10 		subq	$16, %rsp
 1106              		.cfi_def_cfa_offset 48
 248:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 1107              		.loc 3 248 0
 1108 000b 64488B04 		movq	%fs:40, %rax
 1108      25280000 
 1108      00
 1109 0014 48894424 		movq	%rax, 8(%rsp)
 1109      08
 1110 0019 31C0     		xorl	%eax, %eax
 250:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1111              		.loc 3 250 0
 1112 001b 85FF     		testl	%edi, %edi
 1113 001d 741C     		je	.L85
 1114 001f 89FD     		movl	%edi, %ebp
 1115 0021 4889F3   		movq	%rsi, %rbx
 1116              	.LVL130:
 1117              	.LBB429:
 1118              	.LBB430:
 1119              		.file 5 "/usr/include/ctype.h"
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
 1120              		.loc 5 188 0
 1121 0024 E8000000 		call	__ctype_b_loc
 1121      00
 1122              	.LVL131:
 1123 0029 488B08   		movq	(%rax), %rcx
 1124 002c 4863D5   		movslq	%ebp, %rdx
 1125              	.LBE430:
 1126              	.LBE429:
 250:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 1127              		.loc 3 250 0
 1128 002f F6445101 		testb	$64, 1(%rcx,%rdx,2)
 1128      40
 1129 0034 752A     		jne	.L93
 1130 0036 83FD09   		cmpl	$9, %ebp
 1131 0039 7425     		je	.L93
 1132              	.LVL132:
 1133              	.L85:
 260:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 1134              		.loc 3 260 0
 1135 003b 488B4C24 		movq	8(%rsp), %rcx
 1135      08
 1136 0040 6448330C 		xorq	%fs:40, %rcx
 1136      25280000 
 1136      00
 1137 0049 4489E0   		movl	%r12d, %eax
 1138 004c 7579     		jne	.L100
 1139 004e 4883C410 		addq	$16, %rsp
 1140              		.cfi_remember_state
 1141              		.cfi_def_cfa_offset 32
 1142 0052 5B       		popq	%rbx
 1143              		.cfi_def_cfa_offset 24
 1144 0053 5D       		popq	%rbp
 1145              		.cfi_def_cfa_offset 16
 1146 0054 415C     		popq	%r12
 1147              		.cfi_def_cfa_offset 8
 1148 0056 C3       		ret
 1149              	.LVL133:
 1150 0057 660F1F84 		.p2align 4,,10
 1150      00000000 
 1150      00
 1151              		.p2align 3
 1152              	.L93:
 1153              		.cfi_restore_state
 251:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1154              		.loc 3 251 0
 1155 0060 0FB70500 		movzwl	.LC15(%rip), %eax
 1155      000000
 253:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 1156              		.loc 3 253 0
 1157 0067 4889DF   		movq	%rbx, %rdi
 251:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 1158              		.loc 3 251 0
 1159 006a 66890424 		movw	%ax, (%rsp)
 252:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1160              		.loc 3 252 0
 1161 006e 40882C24 		movb	%bpl, (%rsp)
 253:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 1162              		.loc 3 253 0
 1163 0072 E8000000 		call	_ZL14kill_selectionP14Fl_Text_Editor
 1163      00
 1164              	.LVL134:
 254:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1165              		.loc 3 254 0
 1166 0077 8B83A801 		movl	424(%rbx), %eax
 1166      0000
 1167 007d 4889E6   		movq	%rsp, %rsi
 1168 0080 4889DF   		movq	%rbx, %rdi
 1169 0083 85C0     		testl	%eax, %eax
 1170 0085 7539     		jne	.L101
 255:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 1171              		.loc 3 255 0
 1172 0087 E8000000 		call	_ZN15Fl_Text_Display10overstrikeEPKc
 1172      00
 1173              	.LVL135:
 1174              	.L88:
 256:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1175              		.loc 3 256 0
 1176 008c 4889DF   		movq	%rbx, %rdi
 259:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1177              		.loc 3 259 0
 1178 008f 41BC0100 		movl	$1, %r12d
 1178      0000
 256:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1179              		.loc 3 256 0
 1180 0095 E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 1180      00
 1181              	.LVL136:
 1182              	.LBB431:
 1183              	.LBB432:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1184              		.loc 1 786 0
 1185 009a 814B6080 		orl	$128, 96(%rbx)
 1185      000000
 1186              	.LVL137:
 1187              	.LBE432:
 1188              	.LBE431:
 258:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 1189              		.loc 3 258 0
 1190 00a1 F6436F01 		testb	$1, 111(%rbx)
 1191 00a5 7494     		je	.L85
 1192              	.LVL138:
 1193              	.LBB433:
 1194              	.LBB434:
 1195              	.LBB435:
 1196              	.LBB436:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1197              		.loc 1 861 0
 1198 00a7 488B5318 		movq	24(%rbx), %rdx
 1199 00ab 4889DE   		movq	%rbx, %rsi
 1200 00ae 4889DF   		movq	%rbx, %rdi
 1201 00b1 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 1201      00
 1202              	.LVL139:
 1203 00b6 EB83     		jmp	.L85
 1204              	.LVL140:
 1205 00b8 0F1F8400 		.p2align 4,,10
 1205      00000000 
 1206              		.p2align 3
 1207              	.L101:
 1208              	.LBE436:
 1209              	.LBE435:
 1210              	.LBE434:
 1211              	.LBE433:
 254:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1212              		.loc 3 254 0 discriminator 1
 1213 00c0 E8000000 		call	_ZN15Fl_Text_Display6insertEPKc
 1213      00
 1214              	.LVL141:
 1215 00c5 EBC5     		jmp	.L88
 1216              	.LVL142:
 1217              	.L100:
 260:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 1218              		.loc 3 260 0
 1219 00c7 E8000000 		call	__stack_chk_fail
 1219      00
 1220              	.LVL143:
 1221              		.cfi_endproc
 1222              	.LFE566:
 1224              		.section	.text.unlikely._ZN14Fl_Text_Editor10kf_defaultEiPS_
 1225              	.LCOLDE16:
 1226              		.section	.text._ZN14Fl_Text_Editor10kf_defaultEiPS_
 1227              	.LHOTE16:
 1228              		.section	.text.unlikely._ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22,"ax",@progbits
 1229              		.align 2
 1230              	.LCOLDB17:
 1231              		.section	.text._ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22,"ax",@progbits
 1232              	.LHOTB17:
 1233              		.align 2
 1234              		.p2align 4,,15
 1236              	_ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22:
 1237              	.LFB614:
 549:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 1238              		.loc 3 549 0
 1239              		.cfi_startproc
 1240              	.LVL144:
 1241 0000 4883EC08 		subq	$8, %rsp
 1242              		.cfi_def_cfa_offset 16
 1243              	.LBB437:
 1244              	.LBB438:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1245              		.loc 1 861 0
 1246 0004 488B5718 		movq	24(%rdi), %rdx
 1247 0008 4889FE   		movq	%rdi, %rsi
 1248 000b E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 1248      00
 1249              	.LVL145:
 1250              	.LBE438:
 1251              	.LBE437:
 561:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1252              		.loc 3 561 0
 1253 0010 4883C408 		addq	$8, %rsp
 1254              		.cfi_def_cfa_offset 8
 1255 0014 C3       		ret
 1256              		.cfi_endproc
 1257              	.LFE614:
 1259              		.section	.text.unlikely._ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22
 1260              	.LCOLDE17:
 1261              		.section	.text._ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22
 1262              	.LHOTE17:
 1263              		.section	.text.unlikely._ZN14Fl_Text_Editor9kf_deleteEiPS_,"ax",@progbits
 1264              		.align 2
 1265              	.LCOLDB18:
 1266              		.section	.text._ZN14Fl_Text_Editor9kf_deleteEiPS_,"ax",@progbits
 1267              	.LHOTB18:
 1268              		.align 2
 1269              		.p2align 4,,15
 1270              		.globl	_ZN14Fl_Text_Editor9kf_deleteEiPS_
 1272              	_ZN14Fl_Text_Editor9kf_deleteEiPS_:
 1273              	.LFB585:
 549:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 1274              		.loc 3 549 0
 1275              		.cfi_startproc
 1276              	.LVL146:
 1277 0000 55       		pushq	%rbp
 1278              		.cfi_def_cfa_offset 16
 1279              		.cfi_offset 6, -16
 1280 0001 53       		pushq	%rbx
 1281              		.cfi_def_cfa_offset 24
 1282              		.cfi_offset 3, -24
 1283 0002 4889F3   		movq	%rsi, %rbx
 1284 0005 4883EC08 		subq	$8, %rsp
 1285              		.cfi_def_cfa_offset 32
 1286 0009 488BBED0 		movq	208(%rsi), %rdi
 1286      000000
 1287              	.LVL147:
 1288              	.LBB439:
 550:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1289              		.loc 3 550 0
 1290 0010 807F1800 		cmpb	$0, 24(%rdi)
 1291 0014 743A     		je	.L111
 1292              	.LVL148:
 1293              	.L105:
 1294              	.LBE439:
 556:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 1295              		.loc 3 556 0
 1296 0016 4889DF   		movq	%rbx, %rdi
 1297 0019 E8000000 		call	_ZL14kill_selectionP14Fl_Text_Editor
 1297      00
 1298              	.LVL149:
 557:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1299              		.loc 3 557 0
 1300 001e 4889DF   		movq	%rbx, %rdi
 1301 0021 E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 1301      00
 1302              	.LVL150:
 1303              	.LBB441:
 1304              	.LBB442:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1305              		.loc 1 786 0
 1306 0026 814B6080 		orl	$128, 96(%rbx)
 1306      000000
 1307              	.LVL151:
 1308              	.LBE442:
 1309              	.LBE441:
 559:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 1310              		.loc 3 559 0
 1311 002d F6436F01 		testb	$1, 111(%rbx)
 1312 0031 7408     		je	.L106
 1313 0033 4889DF   		movq	%rbx, %rdi
 1314 0036 E8000000 		call	_ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22
 1314      00
 1315              	.LVL152:
 1316              	.L106:
 561:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1317              		.loc 3 561 0
 1318 003b 4883C408 		addq	$8, %rsp
 1319              		.cfi_remember_state
 1320              		.cfi_def_cfa_offset 24
 1321 003f B8010000 		movl	$1, %eax
 1321      00
 1322 0044 5B       		popq	%rbx
 1323              		.cfi_def_cfa_offset 16
 1324              	.LVL153:
 1325 0045 5D       		popq	%rbp
 1326              		.cfi_def_cfa_offset 8
 1327 0046 C3       		ret
 1328              	.LVL154:
 1329 0047 660F1F84 		.p2align 4,,10
 1329      00000000 
 1329      00
 1330              		.p2align 3
 1331              	.L111:
 1332              		.cfi_restore_state
 1333 0050 8BAEB000 		movl	176(%rsi), %ebp
 1333      0000
 1334              	.LVL155:
 1335              	.LBB443:
 1336              	.LBB440:
 552:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 1337              		.loc 3 552 0
 1338 0056 89EE     		movl	%ebp, %esi
 1339 0058 E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 1339      00
 1340              	.LVL156:
 553:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 1341              		.loc 3 553 0
 1342 005d 488BBBD0 		movq	208(%rbx), %rdi
 1342      000000
 1343 0064 89C2     		movl	%eax, %edx
 1344 0066 89EE     		movl	%ebp, %esi
 1345 0068 E8000000 		call	_ZN14Fl_Text_Buffer6selectEii
 1345      00
 1346              	.LVL157:
 1347              	.LBE440:
 1348 006d EBA7     		jmp	.L105
 1349              	.LBE443:
 1350              		.cfi_endproc
 1351              	.LFE585:
 1353              		.section	.text.unlikely._ZN14Fl_Text_Editor9kf_deleteEiPS_
 1354              	.LCOLDE18:
 1355              		.section	.text._ZN14Fl_Text_Editor9kf_deleteEiPS_
 1356              	.LHOTE18:
 1357              		.section	.rodata.str1.1
 1358              	.LC19:
 1359 0001 0A00     		.string	"\n"
 1360              		.section	.text.unlikely._ZN14Fl_Text_Editor8kf_enterEiPS_,"ax",@progbits
 1361              		.align 2
 1362              	.LCOLDB20:
 1363              		.section	.text._ZN14Fl_Text_Editor8kf_enterEiPS_,"ax",@progbits
 1364              	.LHOTB20:
 1365              		.align 2
 1366              		.p2align 4,,15
 1367              		.globl	_ZN14Fl_Text_Editor8kf_enterEiPS_
 1369              	_ZN14Fl_Text_Editor8kf_enterEiPS_:
 1370              	.LFB569:
 294:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1371              		.loc 3 294 0
 1372              		.cfi_startproc
 1373              	.LVL158:
 1374 0000 53       		pushq	%rbx
 1375              		.cfi_def_cfa_offset 16
 1376              		.cfi_offset 3, -16
 295:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 1377              		.loc 3 295 0
 1378 0001 4889F7   		movq	%rsi, %rdi
 294:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1379              		.loc 3 294 0
 1380 0004 4889F3   		movq	%rsi, %rbx
 295:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 1381              		.loc 3 295 0
 1382 0007 E8000000 		call	_ZL14kill_selectionP14Fl_Text_Editor
 1382      00
 1383              	.LVL159:
 296:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1384              		.loc 3 296 0
 1385 000c BE000000 		movl	$.LC19, %esi
 1385      00
 1386 0011 4889DF   		movq	%rbx, %rdi
 1387 0014 E8000000 		call	_ZN15Fl_Text_Display6insertEPKc
 1387      00
 1388              	.LVL160:
 297:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 1389              		.loc 3 297 0
 1390 0019 4889DF   		movq	%rbx, %rdi
 1391 001c E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 1391      00
 1392              	.LVL161:
 1393              	.LBB444:
 1394              	.LBB445:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1395              		.loc 1 786 0
 1396 0021 814B6080 		orl	$128, 96(%rbx)
 1396      000000
 1397              	.LVL162:
 1398              	.LBE445:
 1399              	.LBE444:
 299:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1400              		.loc 3 299 0
 1401 0028 F6436F01 		testb	$1, 111(%rbx)
 1402 002c 7408     		je	.L113
 1403 002e 4889DF   		movq	%rbx, %rdi
 1404 0031 E8000000 		call	_ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22
 1404      00
 1405              	.LVL163:
 1406              	.L113:
 301:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1407              		.loc 3 301 0
 1408 0036 B8010000 		movl	$1, %eax
 1408      00
 1409 003b 5B       		popq	%rbx
 1410              		.cfi_def_cfa_offset 8
 1411              	.LVL164:
 1412 003c C3       		ret
 1413              		.cfi_endproc
 1414              	.LFE569:
 1416              		.section	.text.unlikely._ZN14Fl_Text_Editor8kf_enterEiPS_
 1417              	.LCOLDE20:
 1418              		.section	.text._ZN14Fl_Text_Editor8kf_enterEiPS_
 1419              	.LHOTE20:
 1420              		.section	.text.unlikely._ZN14Fl_Text_Editor6kf_cutEiPS_,"ax",@progbits
 1421              		.align 2
 1422              	.LCOLDB21:
 1423              		.section	.text._ZN14Fl_Text_Editor6kf_cutEiPS_,"ax",@progbits
 1424              	.LHOTB21:
 1425              		.align 2
 1426              		.p2align 4,,15
 1427              		.globl	_ZN14Fl_Text_Editor6kf_cutEiPS_
 1429              	_ZN14Fl_Text_Editor6kf_cutEiPS_:
 1430              	.LFB587:
 578:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1431              		.loc 3 578 0
 1432              		.cfi_startproc
 1433              	.LVL165:
 1434 0000 53       		pushq	%rbx
 1435              		.cfi_def_cfa_offset 16
 1436              		.cfi_offset 3, -16
 578:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1437              		.loc 3 578 0
 1438 0001 4889F3   		movq	%rsi, %rbx
 579:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 1439              		.loc 3 579 0
 1440 0004 E8000000 		call	_ZN14Fl_Text_Editor7kf_copyEiPS_
 1440      00
 1441              	.LVL166:
 580:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1442              		.loc 3 580 0
 1443 0009 4889DF   		movq	%rbx, %rdi
 1444 000c E8000000 		call	_ZL14kill_selectionP14Fl_Text_Editor
 1444      00
 1445              	.LVL167:
 1446              	.LBB446:
 1447              	.LBB447:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1448              		.loc 1 786 0
 1449 0011 814B6080 		orl	$128, 96(%rbx)
 1449      000000
 1450              	.LVL168:
 1451              	.LBE447:
 1452              	.LBE446:
 582:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 1453              		.loc 3 582 0
 1454 0018 F6436F01 		testb	$1, 111(%rbx)
 1455 001c 7408     		je	.L119
 1456 001e 4889DF   		movq	%rbx, %rdi
 1457 0021 E8000000 		call	_ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22
 1457      00
 1458              	.LVL169:
 1459              	.L119:
 584:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 1460              		.loc 3 584 0
 1461 0026 B8010000 		movl	$1, %eax
 1461      00
 1462 002b 5B       		popq	%rbx
 1463              		.cfi_def_cfa_offset 8
 1464              	.LVL170:
 1465 002c C3       		ret
 1466              		.cfi_endproc
 1467              	.LFE587:
 1469              		.section	.text.unlikely._ZN14Fl_Text_Editor6kf_cutEiPS_
 1470              	.LCOLDE21:
 1471              		.section	.text._ZN14Fl_Text_Editor6kf_cutEiPS_
 1472              	.LHOTE21:
 1473              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_undoEiPS_,"ax",@progbits
 1474              		.align 2
 1475              	.LCOLDB22:
 1476              		.section	.text._ZN14Fl_Text_Editor7kf_undoEiPS_,"ax",@progbits
 1477              	.LHOTB22:
 1478              		.align 2
 1479              		.p2align 4,,15
 1480              		.globl	_ZN14Fl_Text_Editor7kf_undoEiPS_
 1482              	_ZN14Fl_Text_Editor7kf_undoEiPS_:
 1483              	.LFB590:
 609:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 1484              		.loc 3 614 0
 1485              		.cfi_startproc
 1486              	.LVL171:
 1487 0000 55       		pushq	%rbp
 1488              		.cfi_def_cfa_offset 16
 1489              		.cfi_offset 6, -16
 1490 0001 53       		pushq	%rbx
 1491              		.cfi_def_cfa_offset 24
 1492              		.cfi_offset 3, -24
 1493 0002 4889F3   		movq	%rsi, %rbx
 1494 0005 4883EC18 		subq	$24, %rsp
 1495              		.cfi_def_cfa_offset 48
 615:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1496              		.loc 3 615 0
 1497 0009 488BBED0 		movq	208(%rsi), %rdi
 1497      000000
 614:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1498              		.loc 3 614 0
 1499 0010 64488B04 		movq	%fs:40, %rax
 1499      25280000 
 1499      00
 1500 0019 48894424 		movq	%rax, 8(%rsp)
 1500      08
 1501 001e 31C0     		xorl	%eax, %eax
 1502              	.LVL172:
 1503              		.loc 3 615 0
 1504 0020 E8000000 		call	_ZN14Fl_Text_Buffer8unselectEv
 1504      00
 1505              	.LVL173:
 616:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 1506              		.loc 3 616 0
 1507 0025 31D2     		xorl	%edx, %edx
 1508 0027 31F6     		xorl	%esi, %esi
 1509 0029 BF000000 		movl	$.LC6, %edi
 1509      00
 1510 002e E8000000 		call	_ZN2Fl4copyEPKcii
 1510      00
 1511              	.LVL174:
 617:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 1512              		.loc 3 618 0
 1513 0033 488BBBD0 		movq	208(%rbx), %rdi
 1513      000000
 1514 003a 488D7424 		leaq	4(%rsp), %rsi
 1514      04
 1515 003f E8000000 		call	_ZN14Fl_Text_Buffer4undoEPi
 1515      00
 1516              	.LVL175:
 619:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 1517              		.loc 3 619 0
 1518 0044 8B742404 		movl	4(%rsp), %esi
 1519 0048 4889DF   		movq	%rbx, %rdi
 618:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 1520              		.loc 3 618 0
 1521 004b 89C5     		movl	%eax, %ebp
 1522              	.LVL176:
 1523              		.loc 3 619 0
 1524 004d E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 1524      00
 1525              	.LVL177:
 620:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 1526              		.loc 3 620 0
 1527 0052 4889DF   		movq	%rbx, %rdi
 1528 0055 E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 1528      00
 1529              	.LVL178:
 1530              	.LBB448:
 1531              	.LBB449:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1532              		.loc 1 786 0
 1533 005a 814B6080 		orl	$128, 96(%rbx)
 1533      000000
 1534              	.LVL179:
 1535              	.LBE449:
 1536              	.LBE448:
 621:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 1537              		.loc 3 622 0
 1538 0061 F6436F01 		testb	$1, 111(%rbx)
 1539 0065 7408     		je	.L125
 1540 0067 4889DF   		movq	%rbx, %rdi
 1541 006a E8000000 		call	_ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22
 1541      00
 1542              	.LVL180:
 1543              	.L125:
 623:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 1544              		.loc 3 624 0
 1545 006f 488B4C24 		movq	8(%rsp), %rcx
 1545      08
 1546 0074 6448330C 		xorq	%fs:40, %rcx
 1546      25280000 
 1546      00
 1547 007d 89E8     		movl	%ebp, %eax
 1548 007f 7507     		jne	.L131
 1549              	.LVL181:
 1550 0081 4883C418 		addq	$24, %rsp
 1551              		.cfi_remember_state
 1552              		.cfi_def_cfa_offset 24
 1553 0085 5B       		popq	%rbx
 1554              		.cfi_def_cfa_offset 16
 1555              	.LVL182:
 1556 0086 5D       		popq	%rbp
 1557              		.cfi_def_cfa_offset 8
 1558 0087 C3       		ret
 1559              	.LVL183:
 1560              	.L131:
 1561              		.cfi_restore_state
 1562 0088 E8000000 		call	__stack_chk_fail
 1562      00
 1563              	.LVL184:
 1564              		.cfi_endproc
 1565              	.LFE590:
 1567              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_undoEiPS_
 1568              	.LCOLDE22:
 1569              		.section	.text._ZN14Fl_Text_Editor7kf_undoEiPS_
 1570              	.LHOTE22:
 1571              		.section	.text.unlikely._ZN14Fl_Text_Editor12kf_backspaceEiPS_,"ax",@progbits
 1572              		.align 2
 1573              	.LCOLDB23:
 1574              		.section	.text._ZN14Fl_Text_Editor12kf_backspaceEiPS_,"ax",@progbits
 1575              	.LHOTB23:
 1576              		.align 2
 1577              		.p2align 4,,15
 1578              		.globl	_ZN14Fl_Text_Editor12kf_backspaceEiPS_
 1580              	_ZN14Fl_Text_Editor12kf_backspaceEiPS_:
 1581              	.LFB568:
 278:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 1582              		.loc 3 278 0
 1583              		.cfi_startproc
 1584              	.LVL185:
 1585 0000 55       		pushq	%rbp
 1586              		.cfi_def_cfa_offset 16
 1587              		.cfi_offset 6, -16
 1588 0001 53       		pushq	%rbx
 1589              		.cfi_def_cfa_offset 24
 1590              		.cfi_offset 3, -24
 1591 0002 4889F3   		movq	%rsi, %rbx
 1592 0005 4883EC08 		subq	$8, %rsp
 1593              		.cfi_def_cfa_offset 32
 1594 0009 488B86D0 		movq	208(%rsi), %rax
 1594      000000
 1595              	.LBB450:
 279:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1596              		.loc 3 279 0
 1597 0010 80781800 		cmpb	$0, 24(%rax)
 1598 0014 743A     		je	.L142
 1599              	.LVL186:
 1600              	.L136:
 1601              	.LBE450:
 284:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 1602              		.loc 3 284 0
 1603 0016 4889DF   		movq	%rbx, %rdi
 1604 0019 E8000000 		call	_ZL14kill_selectionP14Fl_Text_Editor
 1604      00
 1605              	.LVL187:
 285:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 1606              		.loc 3 285 0
 1607 001e 4889DF   		movq	%rbx, %rdi
 1608 0021 E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 1608      00
 1609              	.LVL188:
 1610              	.LBB452:
 1611              	.LBB453:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1612              		.loc 1 786 0
 1613 0026 814B6080 		orl	$128, 96(%rbx)
 1613      000000
 1614              	.LVL189:
 1615              	.LBE453:
 1616              	.LBE452:
 287:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 1617              		.loc 3 287 0
 1618 002d F6436F01 		testb	$1, 111(%rbx)
 1619 0031 7408     		je	.L138
 1620 0033 4889DF   		movq	%rbx, %rdi
 1621 0036 E8000000 		call	_ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22
 1621      00
 1622              	.LVL190:
 1623              	.L138:
 289:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1624              		.loc 3 289 0
 1625 003b 4883C408 		addq	$8, %rsp
 1626              		.cfi_remember_state
 1627              		.cfi_def_cfa_offset 24
 1628 003f B8010000 		movl	$1, %eax
 1628      00
 1629 0044 5B       		popq	%rbx
 1630              		.cfi_def_cfa_offset 16
 1631              	.LVL191:
 1632 0045 5D       		popq	%rbp
 1633              		.cfi_def_cfa_offset 8
 1634 0046 C3       		ret
 1635              	.LVL192:
 1636 0047 660F1F84 		.p2align 4,,10
 1636      00000000 
 1636      00
 1637              		.p2align 3
 1638              	.L142:
 1639              		.cfi_restore_state
 1640              	.LBB454:
 279:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 1641              		.loc 3 279 0 discriminator 1
 1642 0050 4889F7   		movq	%rsi, %rdi
 1643 0053 E8000000 		call	_ZN15Fl_Text_Display9move_leftEv
 1643      00
 1644              	.LVL193:
 1645 0058 85C0     		testl	%eax, %eax
 1646 005a 74BA     		je	.L136
 1647 005c 8BABB000 		movl	176(%rbx), %ebp
 1647      0000
 1648              	.LVL194:
 1649              	.LBB451:
 281:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1650              		.loc 3 281 0
 1651 0062 488BBBD0 		movq	208(%rbx), %rdi
 1651      000000
 1652 0069 89EE     		movl	%ebp, %esi
 1653 006b E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 1653      00
 1654              	.LVL195:
 282:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 1655              		.loc 3 282 0
 1656 0070 488BBBD0 		movq	208(%rbx), %rdi
 1656      000000
 1657 0077 89C2     		movl	%eax, %edx
 1658 0079 89EE     		movl	%ebp, %esi
 1659 007b E8000000 		call	_ZN14Fl_Text_Buffer6selectEii
 1659      00
 1660              	.LVL196:
 1661              	.LBE451:
 1662 0080 EB94     		jmp	.L136
 1663              	.LBE454:
 1664              		.cfi_endproc
 1665              	.LFE568:
 1667              		.section	.text.unlikely._ZN14Fl_Text_Editor12kf_backspaceEiPS_
 1668              	.LCOLDE23:
 1669              		.section	.text._ZN14Fl_Text_Editor12kf_backspaceEiPS_
 1670              	.LHOTE23:
 1671              		.section	.text.unlikely._ZN14Fl_Text_EditorD0Ev,"axG",@progbits,_ZN14Fl_Text_EditorD5Ev,comdat
 1672              		.align 2
 1673              	.LCOLDB24:
 1674              		.section	.text._ZN14Fl_Text_EditorD0Ev,"axG",@progbits,_ZN14Fl_Text_EditorD5Ev,comdat
 1675              	.LHOTB24:
 1676              		.align 2
 1677              		.p2align 4,,15
 1678              		.weak	_ZN14Fl_Text_EditorD0Ev
 1680              	_ZN14Fl_Text_EditorD0Ev:
 1681              	.LFB548:
  54:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     virtual int handle(int e);
 1682              		.loc 4 54 0
 1683              		.cfi_startproc
 1684              	.LVL197:
 1685 0000 55       		pushq	%rbp
 1686              		.cfi_def_cfa_offset 16
 1687              		.cfi_offset 6, -16
 1688 0001 53       		pushq	%rbx
 1689              		.cfi_def_cfa_offset 24
 1690              		.cfi_offset 3, -24
 1691 0002 4889FD   		movq	%rdi, %rbp
 1692 0005 4883EC08 		subq	$8, %rsp
 1693              		.cfi_def_cfa_offset 32
 1694              	.LBB461:
 1695              	.LBB462:
  54:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     virtual int handle(int e);
 1696              		.loc 4 54 0
 1697 0009 48C70700 		movq	$_ZTV14Fl_Text_Editor+16, (%rdi)
 1697      000000
 1698              	.LVL198:
 1699              	.LBB463:
 1700              	.LBB464:
 1701              	.LBB465:
 195:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1702              		.loc 3 195 0
 1703 0010 488BBFB0 		movq	432(%rdi), %rdi
 1703      010000
 1704              	.LVL199:
 1705 0017 4885FF   		testq	%rdi, %rdi
 1706 001a 7415     		je	.L145
 1707 001c 0F1F4000 		.p2align 4,,10
 1708              		.p2align 3
 1709              	.L149:
 196:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 1710              		.loc 3 196 0
 1711 0020 488B5F10 		movq	16(%rdi), %rbx
 1712              	.LVL200:
 197:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 1713              		.loc 3 197 0
 1714 0024 E8000000 		call	_ZdlPv
 1714      00
 1715              	.LVL201:
 195:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 1716              		.loc 3 195 0
 1717 0029 4885DB   		testq	%rbx, %rbx
 1718 002c 4889DF   		movq	%rbx, %rdi
 1719 002f 75EF     		jne	.L149
 1720              	.LVL202:
 1721              	.L145:
 1722              	.LBE465:
 1723              	.LBE464:
 1724              	.LBE463:
  54:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     virtual int handle(int e);
 1725              		.loc 4 54 0
 1726 0031 4889EF   		movq	%rbp, %rdi
 1727              	.LVL203:
 1728              	.LBB468:
 1729              	.LBB467:
 1730              	.LBB466:
 199:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 1731              		.loc 3 199 0
 1732 0034 48C785B0 		movq	$0, 432(%rbp)
 1732      01000000 
 1732      000000
 1733              	.LVL204:
 1734              	.LBE466:
 1735              	.LBE467:
 1736              	.LBE468:
  54:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     virtual int handle(int e);
 1737              		.loc 4 54 0
 1738 003f E8000000 		call	_ZN15Fl_Text_DisplayD2Ev
 1738      00
 1739              	.LVL205:
 1740              	.LBE462:
 1741              	.LBE461:
 1742 0044 4883C408 		addq	$8, %rsp
 1743              		.cfi_def_cfa_offset 24
 1744 0048 4889EF   		movq	%rbp, %rdi
 1745 004b 5B       		popq	%rbx
 1746              		.cfi_def_cfa_offset 16
 1747 004c 5D       		popq	%rbp
 1748              		.cfi_def_cfa_offset 8
 1749              	.LVL206:
 1750 004d E9000000 		jmp	_ZdlPv
 1750      00
 1751              	.LVL207:
 1752              		.cfi_endproc
 1753              	.LFE548:
 1755              		.section	.text.unlikely._ZN14Fl_Text_EditorD0Ev,"axG",@progbits,_ZN14Fl_Text_EditorD5Ev,comdat
 1756              	.LCOLDE24:
 1757              		.section	.text._ZN14Fl_Text_EditorD0Ev,"axG",@progbits,_ZN14Fl_Text_EditorD5Ev,comdat
 1758              	.LHOTE24:
 1759              		.section	.text.unlikely._ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE,"ax",@pr
 1760              		.align 2
 1761              	.LCOLDB25:
 1762              		.section	.text._ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE,"ax",@progbits
 1763              	.LHOTB25:
 1764              		.align 2
 1765              		.p2align 4,,15
 1766              		.globl	_ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE
 1768              	_ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE:
 1769              	.LFB560:
 165:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 1770              		.loc 3 165 0
 1771              		.cfi_startproc
 1772              	.LVL208:
 1773 0000 4157     		pushq	%r15
 1774              		.cfi_def_cfa_offset 16
 1775              		.cfi_offset 15, -16
 1776 0002 4156     		pushq	%r14
 1777              		.cfi_def_cfa_offset 24
 1778              		.cfi_offset 14, -24
 1779 0004 4989F7   		movq	%rsi, %r15
 1780 0007 4155     		pushq	%r13
 1781              		.cfi_def_cfa_offset 32
 1782              		.cfi_offset 13, -32
 1783 0009 4154     		pushq	%r12
 1784              		.cfi_def_cfa_offset 40
 1785              		.cfi_offset 12, -40
 1786 000b 41BEFFFF 		movl	$-1, %r14d
 1786      FFFF
 1787 0011 55       		pushq	%rbp
 1788              		.cfi_def_cfa_offset 48
 1789              		.cfi_offset 6, -48
 1790 0012 53       		pushq	%rbx
 1791              		.cfi_def_cfa_offset 56
 1792              		.cfi_offset 3, -56
 1793 0013 41BD0000 		movl	$_ZN14Fl_Text_Editor9kf_ignoreEiPS_, %r13d
 1793      0000
 1794 0019 BB000000 		movl	$_ZL20default_key_bindings+32, %ebx
 1794      00
 1795 001e BD0DFF00 		movl	$65293, %ebp
 1795      00
 1796 0023 41BC1BFF 		movl	$65307, %r12d
 1796      0000
 1797 0029 4883EC08 		subq	$8, %rsp
 1798              		.cfi_def_cfa_offset 64
 1799 002d EB14     		jmp	.L154
 1800              	.LVL209:
 1801 002f 90       		.p2align 4,,10
 1802              		.p2align 3
 1803              	.L156:
 1804 0030 8B03     		movl	(%rbx), %eax
 1805 0032 4C8B6BF8 		movq	-8(%rbx), %r13
 1806              	.LBB469:
 166:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1807              		.loc 3 166 0
 1808 0036 4189EC   		movl	%ebp, %r12d
 1809 0039 448B73F4 		movl	-12(%rbx), %r14d
 1810 003d 4883C310 		addq	$16, %rbx
 1811 0041 89C5     		movl	%eax, %ebp
 1812              	.L154:
 1813              	.LVL210:
 1814              	.LBB470:
 1815              	.LBB471:
 228:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 1816              		.loc 3 228 0 discriminator 2
 1817 0043 BF180000 		movl	$24, %edi
 1817      00
 1818 0048 E8000000 		call	_Znwm
 1818      00
 1819              	.LVL211:
 232:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 1820              		.loc 3 232 0 discriminator 2
 1821 004d 498B17   		movq	(%r15), %rdx
 1822              	.LBE471:
 1823              	.LBE470:
 166:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1824              		.loc 3 166 0 discriminator 2
 1825 0050 85ED     		testl	%ebp, %ebp
 1826              	.LBB473:
 1827              	.LBB472:
 229:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1828              		.loc 3 229 0 discriminator 2
 1829 0052 448920   		movl	%r12d, (%rax)
 230:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 1830              		.loc 3 230 0 discriminator 2
 1831 0055 44897004 		movl	%r14d, 4(%rax)
 231:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 1832              		.loc 3 231 0 discriminator 2
 1833 0059 4C896808 		movq	%r13, 8(%rax)
 233:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 1834              		.loc 3 233 0 discriminator 2
 1835 005d 498907   		movq	%rax, (%r15)
 1836              	.LVL212:
 232:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 1837              		.loc 3 232 0 discriminator 2
 1838 0060 48895010 		movq	%rdx, 16(%rax)
 1839              	.LBE472:
 1840              	.LBE473:
 166:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1841              		.loc 3 166 0 discriminator 2
 1842 0064 75CA     		jne	.L156
 1843              	.LBE469:
 172:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 1844              		.loc 3 172 0
 1845 0066 4883C408 		addq	$8, %rsp
 1846              		.cfi_def_cfa_offset 56
 1847 006a 5B       		popq	%rbx
 1848              		.cfi_def_cfa_offset 48
 1849 006b 5D       		popq	%rbp
 1850              		.cfi_def_cfa_offset 40
 1851 006c 415C     		popq	%r12
 1852              		.cfi_def_cfa_offset 32
 1853 006e 415D     		popq	%r13
 1854              		.cfi_def_cfa_offset 24
 1855 0070 415E     		popq	%r14
 1856              		.cfi_def_cfa_offset 16
 1857 0072 415F     		popq	%r15
 1858              		.cfi_def_cfa_offset 8
 1859              	.LVL213:
 1860 0074 C3       		ret
 1861              		.cfi_endproc
 1862              	.LFE560:
 1864              		.section	.text.unlikely._ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE
 1865              	.LCOLDE25:
 1866              		.section	.text._ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE
 1867              	.LHOTE25:
 1868              		.section	.text.unlikely._ZN14Fl_Text_EditorC2EiiiiPKc,"ax",@progbits
 1869              		.align 2
 1870              	.LCOLDB26:
 1871              		.section	.text._ZN14Fl_Text_EditorC2EiiiiPKc,"ax",@progbits
 1872              	.LHOTB26:
 1873              		.align 2
 1874              		.p2align 4,,15
 1875              		.globl	_ZN14Fl_Text_EditorC2EiiiiPKc
 1877              	_ZN14Fl_Text_EditorC2EiiiiPKc:
 1878              	.LFB558:
  71:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 1879              		.loc 3 71 0
 1880              		.cfi_startproc
 1881              	.LVL214:
 1882 0000 53       		pushq	%rbx
 1883              		.cfi_def_cfa_offset 16
 1884              		.cfi_offset 3, -16
  71:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 1885              		.loc 3 71 0
 1886 0001 4889FB   		movq	%rdi, %rbx
 1887              	.LBB474:
  72:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1888              		.loc 3 72 0
 1889 0004 E8000000 		call	_ZN15Fl_Text_DisplayC2EiiiiPKc
 1889      00
 1890              	.LVL215:
 1891              	.LBB475:
 1892              	.LBB476:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 1893              		.loc 1 149 0
 1894 0009 814B6000 		orl	$524288, 96(%rbx)
 1894      000800
 1895              	.LBE476:
 1896              	.LBE475:
  79:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1897              		.loc 3 79 0
 1898 0010 488DB3B0 		leaq	432(%rbx), %rsi
 1898      010000
  72:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1899              		.loc 3 72 0
 1900 0017 48C70300 		movq	$_ZTV14Fl_Text_Editor+16, (%rbx)
 1900      000000
  73:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 1901              		.loc 3 73 0
 1902 001e C783B400 		movl	$1, 180(%rbx)
 1902      00000100 
 1902      0000
  74:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1903              		.loc 3 74 0
 1904 0028 C783A801 		movl	$1, 424(%rbx)
 1904      00000100 
 1904      0000
  79:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1905              		.loc 3 79 0
 1906 0032 4889DF   		movq	%rbx, %rdi
  75:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
 1907              		.loc 3 75 0
 1908 0035 48C783B0 		movq	$0, 432(%rbx)
 1908      01000000 
 1908      000000
 1909              	.LVL216:
  79:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 1910              		.loc 3 79 0
 1911 0040 E8000000 		call	_ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE
 1911      00
 1912              	.LVL217:
 1913              	.LBB477:
 1914              	.LBB478:
  62:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /**
  63:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 	Gets the current insert mode; if non-zero, new text
  64:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 	is inserted before the current cursor position. Otherwise, new
  65:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 	text replaces text at the current cursor position.
  66:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     */
  67:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     int insert_mode() { return insert_mode_; }
  68:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  69:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #if FLTK_ABI_VERSION >= 10304
  70:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void tab_nav(int val);
  71:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     int tab_nav() const;
  72:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #endif
  73:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** 
  74:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void add_key_binding(int key, int state, Key_Func f, Key_Binding** list);
  75:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /** Adds a \p key of state \p state with the function \p f. */
  76:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void add_key_binding(int key, int state, Key_Func f)
  77:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****       { add_key_binding(key, state, f, &key_bindings); }
  78:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void remove_key_binding(int key, int state, Key_Binding** list);
  79:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /** Removes the key binding associated with the key "key" of state "state". */
  80:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void remove_key_binding(int key, int state)
  81:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****       { remove_key_binding(key, state, &key_bindings); }
  82:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void remove_all_key_bindings(Key_Binding** list);
  83:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /** Removes all of the key bindings associated with the text editor or list. */
  84:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void remove_all_key_bindings() { remove_all_key_bindings(&key_bindings); }
  85:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void add_default_key_bindings(Key_Binding** list);
  86:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #if FLTK_ABI_VERSION < 10304
  87:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     // OLD: non-const
  88:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     Key_Func bound_key_function(int key, int state, Key_Binding* list);
  89:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /**  Returns the function associated with a key binding. */
  90:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     Key_Func bound_key_function(int key, int state)
  91:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****       { return bound_key_function(key, state, key_bindings); }
  92:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #else
  93:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     // NEW: const (STR#3306)
  94:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     Key_Func bound_key_function(int key, int state, Key_Binding* list) const;
  95:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /**  Returns the function associated with a key binding. */
  96:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     Key_Func bound_key_function(int key, int state) const
  97:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****       { return bound_key_function(key, state, key_bindings); }
  98:fltk-1.3.4-1/FL/Fl_Text_Editor.H **** #endif
  99:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     /**  Sets the default key function for unassigned keys. */
 100:fltk-1.3.4-1/FL/Fl_Text_Editor.H ****     void default_key_function(Key_Func f) { default_key_function_ = f; }
 1915              		.loc 4 100 0
 1916 0045 48C783B8 		movq	$_ZN14Fl_Text_Editor10kf_defaultEiPS_, 440(%rbx)
 1916      01000000 
 1916      000000
 1917              	.LVL218:
 1918              	.LBE478:
 1919              	.LBE477:
 1920              	.LBE474:
  83:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 1921              		.loc 3 83 0
 1922 0050 5B       		popq	%rbx
 1923              		.cfi_def_cfa_offset 8
 1924              	.LVL219:
 1925 0051 C3       		ret
 1926              		.cfi_endproc
 1927              	.LFE558:
 1929              		.section	.text.unlikely._ZN14Fl_Text_EditorC2EiiiiPKc
 1930              	.LCOLDE26:
 1931              		.section	.text._ZN14Fl_Text_EditorC2EiiiiPKc
 1932              	.LHOTE26:
 1933              		.globl	_ZN14Fl_Text_EditorC1EiiiiPKc
 1934              		.set	_ZN14Fl_Text_EditorC1EiiiiPKc,_ZN14Fl_Text_EditorC2EiiiiPKc
 1935              		.section	.text.unlikely._ZN14Fl_Text_Editor18bound_key_functionEiiPNS_11Key_BindingE,"ax",@progbit
 1936              		.align 2
 1937              	.LCOLDB27:
 1938              		.section	.text._ZN14Fl_Text_Editor18bound_key_functionEiiPNS_11Key_BindingE,"ax",@progbits
 1939              	.LHOTB27:
 1940              		.align 2
 1941              		.p2align 4,,15
 1942              		.globl	_ZN14Fl_Text_Editor18bound_key_functionEiiPNS_11Key_BindingE
 1944              	_ZN14Fl_Text_Editor18bound_key_functionEiiPNS_11Key_BindingE:
 1945              	.LFB561:
 182:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 1946              		.loc 3 182 0
 1947              		.cfi_startproc
 1948              	.LVL220:
 1949 0000 EB0A     		jmp	.L167
 1950              	.LVL221:
 1951              		.p2align 4,,10
 1952 0002 660F1F44 		.p2align 3
 1952      0000
 1953              	.L161:
 184:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 1954              		.loc 3 184 0 discriminator 2
 1955 0008 488B4910 		movq	16(%rcx), %rcx
 1956              	.LVL222:
 1957              	.L167:
 1958 000c 4885C9   		testq	%rcx, %rcx
 1959 000f 741F     		je	.L168
 185:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 1960              		.loc 3 185 0
 1961 0011 3931     		cmpl	%esi, (%rcx)
 1962 0013 75F3     		jne	.L161
 186:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 1963              		.loc 3 186 0
 1964 0015 8B4104   		movl	4(%rcx), %eax
 1965 0018 83F8FF   		cmpl	$-1, %eax
 1966 001b 7404     		je	.L162
 1967 001d 39D0     		cmpl	%edx, %eax
 1968 001f 75E7     		jne	.L161
 1969              	.L162:
 189:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 1970              		.loc 3 189 0
 1971 0021 488B4108 		movq	8(%rcx), %rax
 190:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 1972              		.loc 3 190 0
 1973 0025 C3       		ret
 1974 0026 662E0F1F 		.p2align 4,,10
 1974      84000000 
 1974      0000
 1975              		.p2align 3
 1976              	.L168:
 188:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 1977              		.loc 3 188 0
 1978 0030 31C0     		xorl	%eax, %eax
 1979 0032 C3       		ret
 1980              		.cfi_endproc
 1981              	.LFE561:
 1983              		.section	.text.unlikely._ZN14Fl_Text_Editor18bound_key_functionEiiPNS_11Key_BindingE
 1984              	.LCOLDE27:
 1985              		.section	.text._ZN14Fl_Text_Editor18bound_key_functionEiiPNS_11Key_BindingE
 1986              	.LHOTE27:
 1987              		.section	.text.unlikely._ZN14Fl_Text_Editor23remove_all_key_bindingsEPPNS_11Key_BindingE,"ax",@pro
 1988              		.align 2
 1989              	.LCOLDB28:
 1990              		.section	.text._ZN14Fl_Text_Editor23remove_all_key_bindingsEPPNS_11Key_BindingE,"ax",@progbits
 1991              	.LHOTB28:
 1992              		.align 2
 1993              		.p2align 4,,15
 1994              		.globl	_ZN14Fl_Text_Editor23remove_all_key_bindingsEPPNS_11Key_BindingE
 1996              	_ZN14Fl_Text_Editor23remove_all_key_bindingsEPPNS_11Key_BindingE:
 1997              	.LFB562:
 193:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 1998              		.loc 3 193 0
 1999              		.cfi_startproc
 2000              	.LVL223:
 2001 0000 55       		pushq	%rbp
 2002              		.cfi_def_cfa_offset 16
 2003              		.cfi_offset 6, -16
 2004 0001 53       		pushq	%rbx
 2005              		.cfi_def_cfa_offset 24
 2006              		.cfi_offset 3, -24
 2007 0002 4889F5   		movq	%rsi, %rbp
 2008 0005 4883EC08 		subq	$8, %rsp
 2009              		.cfi_def_cfa_offset 32
 195:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 2010              		.loc 3 195 0
 2011 0009 488B3E   		movq	(%rsi), %rdi
 2012              	.LVL224:
 2013 000c 4885FF   		testq	%rdi, %rdi
 2014 000f 7418     		je	.L171
 2015              	.LVL225:
 2016              		.p2align 4,,10
 2017 0011 0F1F8000 		.p2align 3
 2017      000000
 2018              	.L175:
 196:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 2019              		.loc 3 196 0 discriminator 2
 2020 0018 488B5F10 		movq	16(%rdi), %rbx
 2021              	.LVL226:
 197:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 2022              		.loc 3 197 0 discriminator 2
 2023 001c E8000000 		call	_ZdlPv
 2023      00
 2024              	.LVL227:
 195:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 2025              		.loc 3 195 0 discriminator 2
 2026 0021 4885DB   		testq	%rbx, %rbx
 2027 0024 4889DF   		movq	%rbx, %rdi
 2028 0027 75EF     		jne	.L175
 2029              	.LVL228:
 2030              	.L171:
 199:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 2031              		.loc 3 199 0
 2032 0029 48C74500 		movq	$0, 0(%rbp)
 2032      00000000 
 200:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 2033              		.loc 3 200 0
 2034 0031 4883C408 		addq	$8, %rsp
 2035              		.cfi_def_cfa_offset 24
 2036 0035 5B       		popq	%rbx
 2037              		.cfi_def_cfa_offset 16
 2038 0036 5D       		popq	%rbp
 2039              		.cfi_def_cfa_offset 8
 2040              	.LVL229:
 2041 0037 C3       		ret
 2042              		.cfi_endproc
 2043              	.LFE562:
 2045              		.section	.text.unlikely._ZN14Fl_Text_Editor23remove_all_key_bindingsEPPNS_11Key_BindingE
 2046              	.LCOLDE28:
 2047              		.section	.text._ZN14Fl_Text_Editor23remove_all_key_bindingsEPPNS_11Key_BindingE
 2048              	.LHOTE28:
 2049              		.section	.text.unlikely._ZN14Fl_Text_Editor18remove_key_bindingEiiPPNS_11Key_BindingE,"ax",@progbi
 2050              		.align 2
 2051              	.LCOLDB29:
 2052              		.section	.text._ZN14Fl_Text_Editor18remove_key_bindingEiiPPNS_11Key_BindingE,"ax",@progbits
 2053              	.LHOTB29:
 2054              		.align 2
 2055              		.p2align 4,,15
 2056              		.globl	_ZN14Fl_Text_Editor18remove_key_bindingEiiPPNS_11Key_BindingE
 2058              	_ZN14Fl_Text_Editor18remove_key_bindingEiiPPNS_11Key_BindingE:
 2059              	.LFB563:
 209:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 2060              		.loc 3 209 0
 2061              		.cfi_startproc
 2062              	.LVL230:
 211:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2063              		.loc 3 211 0
 2064 0000 488B39   		movq	(%rcx), %rdi
 2065              	.LVL231:
 2066 0003 4885FF   		testq	%rdi, %rdi
 2067 0006 7448     		je	.L179
 2068 0008 4531C0   		xorl	%r8d, %r8d
 2069 000b EB12     		jmp	.L183
 2070              	.LVL232:
 2071 000d 0F1F00   		.p2align 4,,10
 2072              		.p2align 3
 2073              	.L181:
 211:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 2074              		.loc 3 211 0 is_stmt 0 discriminator 2
 2075 0010 488B4710 		movq	16(%rdi), %rax
 2076              	.LVL233:
 2077 0014 4989F8   		movq	%rdi, %r8
 2078 0017 4885C0   		testq	%rax, %rax
 2079 001a 7434     		je	.L179
 2080 001c 4889C7   		movq	%rax, %rdi
 2081              	.LVL234:
 2082              	.L183:
 212:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 2083              		.loc 3 212 0 is_stmt 1
 2084 001f 3937     		cmpl	%esi, (%rdi)
 2085 0021 75ED     		jne	.L181
 212:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 2086              		.loc 3 212 0 is_stmt 0 discriminator 1
 2087 0023 395704   		cmpl	%edx, 4(%rdi)
 2088 0026 75E8     		jne	.L181
 214:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2089              		.loc 3 214 0 is_stmt 1
 2090 0028 4D85C0   		testq	%r8, %r8
 2091 002b 740D     		je	.L195
 214:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 2092              		.loc 3 214 0 is_stmt 0 discriminator 1
 2093 002d 488B4710 		movq	16(%rdi), %rax
 2094 0031 49894010 		movq	%rax, 16(%r8)
 216:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2095              		.loc 3 216 0 is_stmt 1 discriminator 1
 2096 0035 E9000000 		jmp	_ZdlPv
 2096      00
 2097              	.LVL235:
 2098              	.L195:
 215:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 2099              		.loc 3 215 0
 2100 003a 488B4710 		movq	16(%rdi), %rax
 2101 003e 488901   		movq	%rax, (%rcx)
 216:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2102              		.loc 3 216 0
 2103 0041 E9000000 		jmp	_ZdlPv
 2103      00
 2104              	.LVL236:
 2105 0046 662E0F1F 		.p2align 4,,10
 2105      84000000 
 2105      0000
 2106              		.p2align 3
 2107              	.L179:
 2108 0050 F3C3     		rep ret
 2109              		.cfi_endproc
 2110              	.LFE563:
 2112              		.section	.text.unlikely._ZN14Fl_Text_Editor18remove_key_bindingEiiPPNS_11Key_BindingE
 2113              	.LCOLDE29:
 2114              		.section	.text._ZN14Fl_Text_Editor18remove_key_bindingEiiPPNS_11Key_BindingE
 2115              	.LHOTE29:
 2116              		.section	.text.unlikely._ZN14Fl_Text_Editor15add_key_bindingEiiPFiiPS_EPPNS_11Key_BindingE,"ax",@p
 2117              		.align 2
 2118              	.LCOLDB30:
 2119              		.section	.text._ZN14Fl_Text_Editor15add_key_bindingEiiPFiiPS_EPPNS_11Key_BindingE,"ax",@progbits
 2120              	.LHOTB30:
 2121              		.align 2
 2122              		.p2align 4,,15
 2123              		.globl	_ZN14Fl_Text_Editor15add_key_bindingEiiPFiiPS_EPPNS_11Key_BindingE
 2125              	_ZN14Fl_Text_Editor15add_key_bindingEiiPFiiPS_EPPNS_11Key_BindingE:
 2126              	.LFB564:
 227:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 2127              		.loc 3 227 0
 2128              		.cfi_startproc
 2129              	.LVL237:
 2130 0000 4155     		pushq	%r13
 2131              		.cfi_def_cfa_offset 16
 2132              		.cfi_offset 13, -16
 2133 0002 4154     		pushq	%r12
 2134              		.cfi_def_cfa_offset 24
 2135              		.cfi_offset 12, -24
 228:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 2136              		.loc 3 228 0
 2137 0004 BF180000 		movl	$24, %edi
 2137      00
 2138              	.LVL238:
 227:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 2139              		.loc 3 227 0
 2140 0009 55       		pushq	%rbp
 2141              		.cfi_def_cfa_offset 32
 2142              		.cfi_offset 6, -32
 2143 000a 53       		pushq	%rbx
 2144              		.cfi_def_cfa_offset 40
 2145              		.cfi_offset 3, -40
 2146 000b 4C89C3   		movq	%r8, %rbx
 2147 000e 4189D4   		movl	%edx, %r12d
 2148 0011 4189F5   		movl	%esi, %r13d
 2149 0014 4889CD   		movq	%rcx, %rbp
 2150 0017 4883EC08 		subq	$8, %rsp
 2151              		.cfi_def_cfa_offset 48
 228:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 2152              		.loc 3 228 0
 2153 001b E8000000 		call	_Znwm
 2153      00
 2154              	.LVL239:
 232:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 2155              		.loc 3 232 0
 2156 0020 488B13   		movq	(%rbx), %rdx
 229:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2157              		.loc 3 229 0
 2158 0023 448928   		movl	%r13d, (%rax)
 230:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 2159              		.loc 3 230 0
 2160 0026 44896004 		movl	%r12d, 4(%rax)
 231:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 2161              		.loc 3 231 0
 2162 002a 48896808 		movq	%rbp, 8(%rax)
 233:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 2163              		.loc 3 233 0
 2164 002e 488903   		movq	%rax, (%rbx)
 232:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 2165              		.loc 3 232 0
 2166 0031 48895010 		movq	%rdx, 16(%rax)
 234:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2167              		.loc 3 234 0
 2168 0035 4883C408 		addq	$8, %rsp
 2169              		.cfi_def_cfa_offset 40
 2170 0039 5B       		popq	%rbx
 2171              		.cfi_def_cfa_offset 32
 2172              	.LVL240:
 2173 003a 5D       		popq	%rbp
 2174              		.cfi_def_cfa_offset 24
 2175              	.LVL241:
 2176 003b 415C     		popq	%r12
 2177              		.cfi_def_cfa_offset 16
 2178              	.LVL242:
 2179 003d 415D     		popq	%r13
 2180              		.cfi_def_cfa_offset 8
 2181              	.LVL243:
 2182 003f C3       		ret
 2183              		.cfi_endproc
 2184              	.LFE564:
 2186              		.section	.text.unlikely._ZN14Fl_Text_Editor15add_key_bindingEiiPFiiPS_EPPNS_11Key_BindingE
 2187              	.LCOLDE30:
 2188              		.section	.text._ZN14Fl_Text_Editor15add_key_bindingEiiPFiiPS_EPPNS_11Key_BindingE
 2189              	.LHOTE30:
 2190              		.section	.text.unlikely._ZN14Fl_Text_Editor12kf_meta_moveEiPS_,"ax",@progbits
 2191              		.align 2
 2192              	.LCOLDB31:
 2193              		.section	.text._ZN14Fl_Text_Editor12kf_meta_moveEiPS_,"ax",@progbits
 2194              	.LHOTB31:
 2195              		.align 2
 2196              		.p2align 4,,15
 2197              		.globl	_ZN14Fl_Text_Editor12kf_meta_moveEiPS_
 2199              	_ZN14Fl_Text_Editor12kf_meta_moveEiPS_:
 2200              	.LFB573:
 429:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 2201              		.loc 3 429 0
 2202              		.cfi_startproc
 2203              	.LVL244:
 2204 0000 55       		pushq	%rbp
 2205              		.cfi_def_cfa_offset 16
 2206              		.cfi_offset 6, -16
 2207 0001 53       		pushq	%rbx
 2208              		.cfi_def_cfa_offset 24
 2209              		.cfi_offset 3, -24
 2210 0002 89FD     		movl	%edi, %ebp
 2211 0004 4889F3   		movq	%rsi, %rbx
 2212 0007 4883EC08 		subq	$8, %rsp
 2213              		.cfi_def_cfa_offset 32
 2214 000b 488BBED0 		movq	208(%rsi), %rdi
 2214      000000
 2215              	.LVL245:
 430:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2216              		.loc 3 430 0
 2217 0012 807F1800 		cmpb	$0, 24(%rdi)
 2218 0016 750C     		jne	.L199
 2219              	.LVL246:
 431:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 2220              		.loc 3 431 0
 2221 0018 8B86B000 		movl	176(%rsi), %eax
 2221      0000
 2222 001e 89867001 		movl	%eax, 368(%rsi)
 2222      0000
 2223              	.LVL247:
 2224              	.L199:
 432:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2225              		.loc 3 432 0
 2226 0024 8D85AE00 		leal	-65362(%rbp), %eax
 2226      FFFF
 2227 002a 83E0FD   		andl	$-3, %eax
 2228 002d 0F85AD00 		jne	.L211
 2228      0000
 437:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 2229              		.loc 3 437 0
 2230 0033 81FD52FF 		cmpl	$65362, %ebp
 2230      0000
 2231 0039 0F84C800 		je	.L202
 2231      0000
 2232              	.LVL248:
 2233              	.L213:
 2234 003f 7E77     		jle	.L212
 2235 0041 81FD53FF 		cmpl	$65363, %ebp
 2235      0000
 2236 0047 744F     		je	.L205
 2237 0049 81FD54FF 		cmpl	$65364, %ebp
 2237      0000
 2238 004f 7537     		jne	.L201
 2239              	.LVL249:
 2240 0051 488B83D0 		movq	208(%rbx), %rax
 2240      000000
 443:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 2241              		.loc 3 443 0
 2242 0058 4889DF   		movq	%rbx, %rdi
 2243 005b 8B7034   		movl	52(%rax), %esi
 2244 005e E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 2244      00
 2245              	.LVL250:
 2246 0063 488B83D0 		movq	208(%rbx), %rax
 2246      000000
 444:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 2247              		.loc 3 444 0
 2248 006a 31F6     		xorl	%esi, %esi
 2249 006c 4889DF   		movq	%rbx, %rdi
 2250 006f B9010000 		movl	$1, %ecx
 2250      00
 2251 0074 8B5034   		movl	52(%rax), %edx
 2252 0077 E8000000 		call	_ZNK15Fl_Text_Display11count_linesEiib
 2252      00
 2253              	.LVL251:
 2254 007c 31D2     		xorl	%edx, %edx
 2255 007e 89C6     		movl	%eax, %esi
 2256 0080 4889DF   		movq	%rbx, %rdi
 2257 0083 E8000000 		call	_ZN15Fl_Text_Display6scrollEii
 2257      00
 2258              	.LVL252:
 2259              	.L201:
 454:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2260              		.loc 3 454 0
 2261 0088 4883C408 		addq	$8, %rsp
 2262              		.cfi_remember_state
 2263              		.cfi_def_cfa_offset 24
 2264 008c B8010000 		movl	$1, %eax
 2264      00
 2265 0091 5B       		popq	%rbx
 2266              		.cfi_def_cfa_offset 16
 2267              	.LVL253:
 2268 0092 5D       		popq	%rbp
 2269              		.cfi_def_cfa_offset 8
 2270              	.LVL254:
 2271 0093 C3       		ret
 2272              	.LVL255:
 2273              		.p2align 4,,10
 2274 0094 0F1F4000 		.p2align 3
 2275              	.L205:
 2276              		.cfi_restore_state
 450:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2277              		.loc 3 450 0
 2278 0098 4889DE   		movq	%rbx, %rsi
 2279 009b BF57FF00 		movl	$65367, %edi
 2279      00
 2280 00a0 E8000000 		call	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2280      00
 2281              	.LVL256:
 454:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2282              		.loc 3 454 0
 2283 00a5 4883C408 		addq	$8, %rsp
 2284              		.cfi_remember_state
 2285              		.cfi_def_cfa_offset 24
 2286 00a9 B8010000 		movl	$1, %eax
 2286      00
 2287 00ae 5B       		popq	%rbx
 2288              		.cfi_def_cfa_offset 16
 2289              	.LVL257:
 2290 00af 5D       		popq	%rbp
 2291              		.cfi_def_cfa_offset 8
 2292              	.LVL258:
 2293 00b0 C3       		ret
 2294              	.LVL259:
 2295              		.p2align 4,,10
 2296 00b1 0F1F8000 		.p2align 3
 2296      000000
 2297              	.L212:
 2298              		.cfi_restore_state
 437:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 2299              		.loc 3 437 0
 2300 00b8 81FD51FF 		cmpl	$65361, %ebp
 2300      0000
 2301 00be 75C8     		jne	.L201
 447:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 2302              		.loc 3 447 0
 2303 00c0 4889DE   		movq	%rbx, %rsi
 2304 00c3 BF50FF00 		movl	$65360, %edi
 2304      00
 2305 00c8 E8000000 		call	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2305      00
 2306              	.LVL260:
 454:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2307              		.loc 3 454 0
 2308 00cd 4883C408 		addq	$8, %rsp
 2309              		.cfi_remember_state
 2310              		.cfi_def_cfa_offset 24
 2311 00d1 B8010000 		movl	$1, %eax
 2311      00
 2312 00d6 5B       		popq	%rbx
 2313              		.cfi_def_cfa_offset 16
 2314              	.LVL261:
 2315 00d7 5D       		popq	%rbp
 2316              		.cfi_def_cfa_offset 8
 2317              	.LVL262:
 2318 00d8 C3       		ret
 2319              	.LVL263:
 2320 00d9 0F1F8000 		.p2align 4,,10
 2320      000000
 2321              		.p2align 3
 2322              	.L211:
 2323              		.cfi_restore_state
 433:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 2324              		.loc 3 433 0
 2325 00e0 E8000000 		call	_ZN14Fl_Text_Buffer8unselectEv
 2325      00
 2326              	.LVL264:
 434:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 2327              		.loc 3 434 0
 2328 00e5 31D2     		xorl	%edx, %edx
 2329 00e7 31F6     		xorl	%esi, %esi
 2330 00e9 BF000000 		movl	$.LC6, %edi
 2330      00
 2331 00ee E8000000 		call	_ZN2Fl4copyEPKcii
 2331      00
 2332              	.LVL265:
 435:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 2333              		.loc 3 435 0
 2334 00f3 4889DF   		movq	%rbx, %rdi
 2335 00f6 E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 2335      00
 2336              	.LVL266:
 437:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 2337              		.loc 3 437 0
 2338 00fb 81FD52FF 		cmpl	$65362, %ebp
 2338      0000
 2339 0101 0F8538FF 		jne	.L213
 2339      FFFF
 2340              	.LVL267:
 2341              	.L202:
 439:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 2342              		.loc 3 439 0
 2343 0107 4889DF   		movq	%rbx, %rdi
 2344 010a 31F6     		xorl	%esi, %esi
 2345 010c E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 2345      00
 2346              	.LVL268:
 440:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2347              		.loc 3 440 0
 2348 0111 4889DF   		movq	%rbx, %rdi
 2349 0114 31D2     		xorl	%edx, %edx
 2350 0116 31F6     		xorl	%esi, %esi
 2351 0118 E8000000 		call	_ZN15Fl_Text_Display6scrollEii
 2351      00
 2352              	.LVL269:
 454:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2353              		.loc 3 454 0
 2354 011d 4883C408 		addq	$8, %rsp
 2355              		.cfi_def_cfa_offset 24
 2356 0121 B8010000 		movl	$1, %eax
 2356      00
 2357 0126 5B       		popq	%rbx
 2358              		.cfi_def_cfa_offset 16
 2359              	.LVL270:
 2360 0127 5D       		popq	%rbp
 2361              		.cfi_def_cfa_offset 8
 2362              	.LVL271:
 2363 0128 C3       		ret
 2364              		.cfi_endproc
 2365              	.LFE573:
 2367              		.section	.text.unlikely._ZN14Fl_Text_Editor12kf_meta_moveEiPS_
 2368              	.LCOLDE31:
 2369              		.section	.text._ZN14Fl_Text_Editor12kf_meta_moveEiPS_
 2370              	.LHOTE31:
 2371              		.section	.text.unlikely._ZN14Fl_Text_Editor11kf_m_s_moveEiPS_,"ax",@progbits
 2372              		.align 2
 2373              	.LCOLDB32:
 2374              		.section	.text._ZN14Fl_Text_Editor11kf_m_s_moveEiPS_,"ax",@progbits
 2375              	.LHOTB32:
 2376              		.align 2
 2377              		.p2align 4,,15
 2378              		.globl	_ZN14Fl_Text_Editor11kf_m_s_moveEiPS_
 2380              	_ZN14Fl_Text_Editor11kf_m_s_moveEiPS_:
 2381              	.LFB574:
 459:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 2382              		.loc 3 459 0
 2383              		.cfi_startproc
 2384              	.LVL272:
 2385 0000 53       		pushq	%rbx
 2386              		.cfi_def_cfa_offset 16
 2387              		.cfi_offset 3, -16
 459:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 2388              		.loc 3 459 0
 2389 0001 4889F3   		movq	%rsi, %rbx
 460:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2390              		.loc 3 460 0
 2391 0004 E8000000 		call	_ZN14Fl_Text_Editor12kf_meta_moveEiPS_
 2391      00
 2392              	.LVL273:
 461:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 2393              		.loc 3 461 0
 2394 0009 8BBBB000 		movl	176(%rbx), %edi
 2394      0000
 2395 000f 4889DE   		movq	%rbx, %rsi
 2396 0012 E8000000 		call	_Z15fl_text_drag_meiP15Fl_Text_Display
 2396      00
 2397              	.LVL274:
 463:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 2398              		.loc 3 463 0
 2399 0017 B8010000 		movl	$1, %eax
 2399      00
 2400 001c 5B       		popq	%rbx
 2401              		.cfi_def_cfa_offset 8
 2402              	.LVL275:
 2403 001d C3       		ret
 2404              		.cfi_endproc
 2405              	.LFE574:
 2407              		.section	.text.unlikely._ZN14Fl_Text_Editor11kf_m_s_moveEiPS_
 2408              	.LCOLDE32:
 2409              		.section	.text._ZN14Fl_Text_Editor11kf_m_s_moveEiPS_
 2410              	.LHOTE32:
 2411              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_homeEiPS_,"ax",@progbits
 2412              		.align 2
 2413              	.LCOLDB33:
 2414              		.section	.text._ZN14Fl_Text_Editor7kf_homeEiPS_,"ax",@progbits
 2415              	.LHOTB33:
 2416              		.align 2
 2417              		.p2align 4,,15
 2418              		.globl	_ZN14Fl_Text_Editor7kf_homeEiPS_
 2420              	_ZN14Fl_Text_Editor7kf_homeEiPS_:
 2421              	.LFB576:
 478:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 2422              		.loc 3 478 0
 2423              		.cfi_startproc
 2424              	.LVL276:
 479:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 2425              		.loc 3 479 0
 2426 0000 BF50FF00 		movl	$65360, %edi
 2426      00
 2427 0005 E9000000 		jmp	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2427      00
 2428              	.LVL277:
 2429              		.cfi_endproc
 2430              	.LFE576:
 2432              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_homeEiPS_
 2433              	.LCOLDE33:
 2434              		.section	.text._ZN14Fl_Text_Editor7kf_homeEiPS_
 2435              	.LHOTE33:
 2436              		.section	.text.unlikely._ZN14Fl_Text_Editor6kf_endEiPS_,"ax",@progbits
 2437              		.align 2
 2438              	.LCOLDB34:
 2439              		.section	.text._ZN14Fl_Text_Editor6kf_endEiPS_,"ax",@progbits
 2440              	.LHOTB34:
 2441              		.align 2
 2442              		.p2align 4,,15
 2443              		.globl	_ZN14Fl_Text_Editor6kf_endEiPS_
 2445              	_ZN14Fl_Text_Editor6kf_endEiPS_:
 2446              	.LFB577:
 486:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 2447              		.loc 3 486 0
 2448              		.cfi_startproc
 2449              	.LVL278:
 487:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2450              		.loc 3 487 0
 2451 0000 BF57FF00 		movl	$65367, %edi
 2451      00
 2452 0005 E9000000 		jmp	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2452      00
 2453              	.LVL279:
 2454              		.cfi_endproc
 2455              	.LFE577:
 2457              		.section	.text.unlikely._ZN14Fl_Text_Editor6kf_endEiPS_
 2458              	.LCOLDE34:
 2459              		.section	.text._ZN14Fl_Text_Editor6kf_endEiPS_
 2460              	.LHOTE34:
 2461              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_leftEiPS_,"ax",@progbits
 2462              		.align 2
 2463              	.LCOLDB35:
 2464              		.section	.text._ZN14Fl_Text_Editor7kf_leftEiPS_,"ax",@progbits
 2465              	.LHOTB35:
 2466              		.align 2
 2467              		.p2align 4,,15
 2468              		.globl	_ZN14Fl_Text_Editor7kf_leftEiPS_
 2470              	_ZN14Fl_Text_Editor7kf_leftEiPS_:
 2471              	.LFB578:
 494:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 2472              		.loc 3 494 0
 2473              		.cfi_startproc
 2474              	.LVL280:
 495:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2475              		.loc 3 495 0
 2476 0000 BF51FF00 		movl	$65361, %edi
 2476      00
 2477 0005 E9000000 		jmp	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2477      00
 2478              	.LVL281:
 2479              		.cfi_endproc
 2480              	.LFE578:
 2482              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_leftEiPS_
 2483              	.LCOLDE35:
 2484              		.section	.text._ZN14Fl_Text_Editor7kf_leftEiPS_
 2485              	.LHOTE35:
 2486              		.section	.text.unlikely._ZN14Fl_Text_Editor5kf_upEiPS_,"ax",@progbits
 2487              		.align 2
 2488              	.LCOLDB36:
 2489              		.section	.text._ZN14Fl_Text_Editor5kf_upEiPS_,"ax",@progbits
 2490              	.LHOTB36:
 2491              		.align 2
 2492              		.p2align 4,,15
 2493              		.globl	_ZN14Fl_Text_Editor5kf_upEiPS_
 2495              	_ZN14Fl_Text_Editor5kf_upEiPS_:
 2496              	.LFB579:
 502:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2497              		.loc 3 502 0
 2498              		.cfi_startproc
 2499              	.LVL282:
 503:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 2500              		.loc 3 503 0
 2501 0000 BF52FF00 		movl	$65362, %edi
 2501      00
 2502 0005 E9000000 		jmp	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2502      00
 2503              	.LVL283:
 2504              		.cfi_endproc
 2505              	.LFE579:
 2507              		.section	.text.unlikely._ZN14Fl_Text_Editor5kf_upEiPS_
 2508              	.LCOLDE36:
 2509              		.section	.text._ZN14Fl_Text_Editor5kf_upEiPS_
 2510              	.LHOTE36:
 2511              		.section	.text.unlikely._ZN14Fl_Text_Editor8kf_rightEiPS_,"ax",@progbits
 2512              		.align 2
 2513              	.LCOLDB37:
 2514              		.section	.text._ZN14Fl_Text_Editor8kf_rightEiPS_,"ax",@progbits
 2515              	.LHOTB37:
 2516              		.align 2
 2517              		.p2align 4,,15
 2518              		.globl	_ZN14Fl_Text_Editor8kf_rightEiPS_
 2520              	_ZN14Fl_Text_Editor8kf_rightEiPS_:
 2521              	.LFB580:
 510:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 2522              		.loc 3 510 0
 2523              		.cfi_startproc
 2524              	.LVL284:
 511:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2525              		.loc 3 511 0
 2526 0000 BF53FF00 		movl	$65363, %edi
 2526      00
 2527 0005 E9000000 		jmp	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2527      00
 2528              	.LVL285:
 2529              		.cfi_endproc
 2530              	.LFE580:
 2532              		.section	.text.unlikely._ZN14Fl_Text_Editor8kf_rightEiPS_
 2533              	.LCOLDE37:
 2534              		.section	.text._ZN14Fl_Text_Editor8kf_rightEiPS_
 2535              	.LHOTE37:
 2536              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_downEiPS_,"ax",@progbits
 2537              		.align 2
 2538              	.LCOLDB38:
 2539              		.section	.text._ZN14Fl_Text_Editor7kf_downEiPS_,"ax",@progbits
 2540              	.LHOTB38:
 2541              		.align 2
 2542              		.p2align 4,,15
 2543              		.globl	_ZN14Fl_Text_Editor7kf_downEiPS_
 2545              	_ZN14Fl_Text_Editor7kf_downEiPS_:
 2546              	.LFB581:
 518:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 2547              		.loc 3 518 0
 2548              		.cfi_startproc
 2549              	.LVL286:
 519:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2550              		.loc 3 519 0
 2551 0000 BF54FF00 		movl	$65364, %edi
 2551      00
 2552 0005 E9000000 		jmp	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2552      00
 2553              	.LVL287:
 2554              		.cfi_endproc
 2555              	.LFE581:
 2557              		.section	.text.unlikely._ZN14Fl_Text_Editor7kf_downEiPS_
 2558              	.LCOLDE38:
 2559              		.section	.text._ZN14Fl_Text_Editor7kf_downEiPS_
 2560              	.LHOTE38:
 2561              		.section	.text.unlikely._ZN14Fl_Text_Editor10kf_page_upEiPS_,"ax",@progbits
 2562              		.align 2
 2563              	.LCOLDB39:
 2564              		.section	.text._ZN14Fl_Text_Editor10kf_page_upEiPS_,"ax",@progbits
 2565              	.LHOTB39:
 2566              		.align 2
 2567              		.p2align 4,,15
 2568              		.globl	_ZN14Fl_Text_Editor10kf_page_upEiPS_
 2570              	_ZN14Fl_Text_Editor10kf_page_upEiPS_:
 2571              	.LFB582:
 526:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 2572              		.loc 3 526 0
 2573              		.cfi_startproc
 2574              	.LVL288:
 527:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 2575              		.loc 3 527 0
 2576 0000 BF55FF00 		movl	$65365, %edi
 2576      00
 2577 0005 E9000000 		jmp	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2577      00
 2578              	.LVL289:
 2579              		.cfi_endproc
 2580              	.LFE582:
 2582              		.section	.text.unlikely._ZN14Fl_Text_Editor10kf_page_upEiPS_
 2583              	.LCOLDE39:
 2584              		.section	.text._ZN14Fl_Text_Editor10kf_page_upEiPS_
 2585              	.LHOTE39:
 2586              		.section	.text.unlikely._ZN14Fl_Text_Editor12kf_page_downEiPS_,"ax",@progbits
 2587              		.align 2
 2588              	.LCOLDB40:
 2589              		.section	.text._ZN14Fl_Text_Editor12kf_page_downEiPS_,"ax",@progbits
 2590              	.LHOTB40:
 2591              		.align 2
 2592              		.p2align 4,,15
 2593              		.globl	_ZN14Fl_Text_Editor12kf_page_downEiPS_
 2595              	_ZN14Fl_Text_Editor12kf_page_downEiPS_:
 2596              	.LFB583:
 534:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 2597              		.loc 3 534 0
 2598              		.cfi_startproc
 2599              	.LVL290:
 535:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 2600              		.loc 3 535 0
 2601 0000 BF56FF00 		movl	$65366, %edi
 2601      00
 2602 0005 E9000000 		jmp	_ZN14Fl_Text_Editor7kf_moveEiPS_
 2602      00
 2603              	.LVL291:
 2604              		.cfi_endproc
 2605              	.LFE583:
 2607              		.section	.text.unlikely._ZN14Fl_Text_Editor12kf_page_downEiPS_
 2608              	.LCOLDE40:
 2609              		.section	.text._ZN14Fl_Text_Editor12kf_page_downEiPS_
 2610              	.LHOTE40:
 2611              		.section	.text.unlikely._ZN14Fl_Text_Editor10handle_keyEv,"ax",@progbits
 2612              		.align 2
 2613              	.LCOLDB41:
 2614              		.section	.text._ZN14Fl_Text_Editor10handle_keyEv,"ax",@progbits
 2615              	.LHOTB41:
 2616              		.align 2
 2617              		.p2align 4,,15
 2618              		.globl	_ZN14Fl_Text_Editor10handle_keyEv
 2620              	_ZN14Fl_Text_Editor10handle_keyEv:
 2621              	.LFB591:
 625:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2622              		.loc 3 627 0
 2623              		.cfi_startproc
 2624              	.LVL292:
 2625 0000 53       		pushq	%rbx
 2626              		.cfi_def_cfa_offset 16
 2627              		.cfi_offset 3, -16
 2628 0001 4889FB   		movq	%rdi, %rbx
 2629 0004 4883EC20 		subq	$32, %rsp
 2630              		.cfi_def_cfa_offset 48
 2631              	.LBB479:
 628:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 629:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 633:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 2632              		.loc 3 633 0
 2633 0008 488D7C24 		leaq	20(%rsp), %rdi
 2633      14
 2634              	.LVL293:
 2635              	.LBE479:
 632:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 2636              		.loc 3 632 0
 2637 000d C7442414 		movl	$0, 20(%rsp)
 2637      00000000 
 627:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 2638              		.loc 3 627 0
 2639 0015 64488B04 		movq	%fs:40, %rax
 2639      25280000 
 2639      00
 2640 001e 48894424 		movq	%rax, 24(%rsp)
 2640      18
 2641 0023 31C0     		xorl	%eax, %eax
 2642              	.LBB488:
 2643              		.loc 3 633 0
 2644 0025 E8000000 		call	_ZN2Fl7composeERi
 2644      00
 2645              	.LVL294:
 2646 002a 85C0     		testl	%eax, %eax
 2647 002c 0F849600 		je	.L225
 2647      0000
 2648              	.LBB480:
 2649              	.LBB481:
 634:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2650              		.loc 3 634 0
 2651 0032 8B442414 		movl	20(%rsp), %eax
 2652 0036 85C0     		testl	%eax, %eax
 2653 0038 7420     		je	.L226
 2654 003a 8B93B000 		movl	176(%rbx), %edx
 2654      0000
 2655              	.LVL295:
 2656              	.LBB482:
 635:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 636:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 638:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 2657              		.loc 3 638 0
 2658 0040 488BBBD0 		movq	208(%rbx), %rdi
 2658      000000
 2659 0047 89D6     		movl	%edx, %esi
 2660 0049 29C6     		subl	%eax, %esi
 2661 004b 89F0     		movl	%esi, %eax
 2662              	.LVL296:
 2663 004d BE000000 		movl	$0, %esi
 2663      00
 2664 0052 0F49F0   		cmovns	%eax, %esi
 2665 0055 E8000000 		call	_ZN14Fl_Text_Buffer6selectEii
 2665      00
 2666              	.LVL297:
 2667              	.L226:
 2668              	.LBE482:
 2669              	.LBE481:
 639:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 640:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 2670              		.loc 3 640 0
 2671 005a 4889DF   		movq	%rbx, %rdi
 2672 005d E8000000 		call	_ZL14kill_selectionP14Fl_Text_Editor
 2672      00
 2673              	.LVL298:
 641:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2674              		.loc 3 641 0
 2675 0062 8B150000 		movl	_ZN2Fl8e_lengthE(%rip), %edx
 2675      0000
 2676 0068 85D2     		testl	%edx, %edx
 2677 006a 741D     		je	.L228
 2678              	.LVL299:
 642:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 2679              		.loc 3 642 0
 2680 006c 8B83A801 		movl	424(%rbx), %eax
 2680      0000
 2681 0072 488B3500 		movq	_ZN2Fl6e_textE(%rip), %rsi
 2681      000000
 2682 0079 4889DF   		movq	%rbx, %rdi
 2683 007c 85C0     		testl	%eax, %eax
 2684 007e 0F842401 		je	.L229
 2684      0000
 2685 0084 E8000000 		call	_ZN15Fl_Text_Display6insertEPKc
 2685      00
 2686              	.LVL300:
 2687              	.L228:
 643:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 644:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 645:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 646:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 647:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 648:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 649:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 650:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 651:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 2688              		.loc 3 651 0
 2689 0089 4889DF   		movq	%rbx, %rdi
 2690 008c E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 2690      00
 2691              	.LVL301:
 2692              	.LBB483:
 2693              	.LBB484:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2694              		.loc 1 786 0
 2695 0091 814B6080 		orl	$128, 96(%rbx)
 2695      000000
 2696              	.LVL302:
 2697              	.LBE484:
 2698              	.LBE483:
 652:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 653:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 2699              		.loc 3 653 0
 2700 0098 F6436F01 		testb	$1, 111(%rbx)
 654:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 2701              		.loc 3 654 0
 2702 009c B8010000 		movl	$1, %eax
 2702      00
 653:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 2703              		.loc 3 653 0
 2704 00a1 0F85E100 		jne	.L269
 2704      0000
 2705              	.LVL303:
 2706              	.L230:
 2707              	.LBE480:
 2708              	.LBE488:
 655:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 656:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 2709              		.loc 3 665 0
 2710 00a7 488B5C24 		movq	24(%rsp), %rbx
 2710      18
 2711 00ac 6448331C 		xorq	%fs:40, %rbx
 2711      25280000 
 2711      00
 2712              	.LVL304:
 2713 00b5 0F85F700 		jne	.L270
 2713      0000
 2714 00bb 4883C420 		addq	$32, %rsp
 2715              		.cfi_remember_state
 2716              		.cfi_def_cfa_offset 16
 2717 00bf 5B       		popq	%rbx
 2718              		.cfi_def_cfa_offset 8
 2719 00c0 C3       		ret
 2720              	.LVL305:
 2721              		.p2align 4,,10
 2722 00c1 0F1F8000 		.p2align 3
 2722      000000
 2723              	.L225:
 2724              		.cfi_restore_state
 658:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 2725              		.loc 3 658 0
 2726 00c8 8B350000 		movl	_ZN2Fl7e_stateE(%rip), %esi
 2726      0000
 660:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 2727              		.loc 3 660 0
 2728 00ce 488B1500 		movq	_ZN14Fl_Text_Editor19global_key_bindingsE(%rip), %rdx
 2728      000000
 2729              	.LBB489:
 2730              	.LBB490:
 2731              		.file 6 "fltk-1.3.4-1/FL/Fl.H"
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
 2732              		.loc 6 721 0
 2733 00d5 8B3D0000 		movl	_ZN2Fl8e_keysymE(%rip), %edi
 2733      0000
 2734              	.LVL306:
 2735              	.LBE490:
 2736              	.LBE489:
 658:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 2737              		.loc 3 658 0
 2738 00db 81E60000 		andl	$5046272, %esi
 2738      4D00
 2739              	.LVL307:
 2740              	.LBB491:
 2741              	.LBB492:
 184:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 2742              		.loc 3 184 0
 2743 00e1 4885D2   		testq	%rdx, %rdx
 2744 00e4 757F     		jne	.L234
 2745              	.LVL308:
 2746 00e6 662E0F1F 		.p2align 4,,10
 2746      84000000 
 2746      0000
 2747              		.p2align 3
 2748              	.L231:
 2749              	.LBE492:
 2750              	.LBE491:
 661:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 2751              		.loc 3 661 0 discriminator 1
 2752 00f0 488B93B0 		movq	432(%rbx), %rdx
 2752      010000
 2753              	.LVL309:
 2754              	.LBB494:
 2755              	.LBB495:
 184:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 2756              		.loc 3 184 0 discriminator 1
 2757 00f7 4885D2   		testq	%rdx, %rdx
 2758 00fa 750D     		jne	.L238
 2759 00fc EB24     		jmp	.L235
 2760              	.LVL310:
 2761 00fe 6690     		.p2align 4,,10
 2762              		.p2align 3
 2763              	.L236:
 184:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 2764              		.loc 3 184 0 is_stmt 0
 2765 0100 488B5210 		movq	16(%rdx), %rdx
 2766              	.LVL311:
 2767 0104 4885D2   		testq	%rdx, %rdx
 2768 0107 7419     		je	.L235
 2769              	.L238:
 185:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 2770              		.loc 3 185 0 is_stmt 1
 2771 0109 3B3A     		cmpl	(%rdx), %edi
 2772 010b 75F3     		jne	.L236
 186:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 2773              		.loc 3 186 0
 2774 010d 8B4A04   		movl	4(%rdx), %ecx
 2775 0110 83F9FF   		cmpl	$-1, %ecx
 2776 0113 7404     		je	.L237
 2777 0115 39CE     		cmpl	%ecx, %esi
 2778 0117 75E7     		jne	.L236
 2779              	.L237:
 189:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 2780              		.loc 3 189 0
 2781 0119 488B5208 		movq	8(%rdx), %rdx
 2782              	.LVL312:
 2783              	.LBE495:
 2784              	.LBE494:
 662:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 2785              		.loc 3 662 0
 2786 011d 4885D2   		testq	%rdx, %rdx
 2787 0120 7556     		jne	.L267
 2788              	.LVL313:
 2789              	.L235:
 663:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2790              		.loc 3 663 0
 2791 0122 488B93B8 		movq	440(%rbx), %rdx
 2791      010000
 2792 0129 4885D2   		testq	%rdx, %rdx
 2793 012c 0F8475FF 		je	.L230
 2793      FFFF
 2794 0132 85F6     		testl	%esi, %esi
 2795 0134 0F856DFF 		jne	.L230
 2795      FFFF
 657:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 2796              		.loc 3 657 0 discriminator 2
 2797 013a 488B0500 		movq	_ZN2Fl6e_textE(%rip), %rax
 2797      000000
 663:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2798              		.loc 3 663 0 discriminator 2
 2799 0141 0FBE38   		movsbl	(%rax), %edi
 2800              	.LVL314:
 2801 0144 EB32     		jmp	.L267
 2802              	.LVL315:
 2803 0146 662E0F1F 		.p2align 4,,10
 2803      84000000 
 2803      0000
 2804              		.p2align 3
 2805              	.L271:
 2806              	.LBB496:
 2807              	.LBB493:
 186:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 2808              		.loc 3 186 0
 2809 0150 8B4A04   		movl	4(%rdx), %ecx
 2810 0153 39F1     		cmpl	%esi, %ecx
 2811 0155 7414     		je	.L233
 2812 0157 83F9FF   		cmpl	$-1, %ecx
 2813 015a 740F     		je	.L233
 2814              	.L232:
 184:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 2815              		.loc 3 184 0
 2816 015c 488B5210 		movq	16(%rdx), %rdx
 2817              	.LVL316:
 2818 0160 4885D2   		testq	%rdx, %rdx
 2819 0163 748B     		je	.L231
 2820              	.L234:
 185:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 2821              		.loc 3 185 0
 2822 0165 393A     		cmpl	%edi, (%rdx)
 2823 0167 75F3     		jne	.L232
 2824 0169 EBE5     		jmp	.L271
 2825              	.L233:
 189:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 2826              		.loc 3 189 0
 2827 016b 488B5208 		movq	8(%rdx), %rdx
 2828              	.LVL317:
 2829              	.LBE493:
 2830              	.LBE496:
 661:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 2831              		.loc 3 661 0
 2832 016f 4885D2   		testq	%rdx, %rdx
 2833 0172 0F8478FF 		je	.L231
 2833      FFFF
 2834              	.L267:
 663:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2835              		.loc 3 663 0 discriminator 2
 2836 0178 4889DE   		movq	%rbx, %rsi
 2837              	.LVL318:
 2838 017b FFD2     		call	*%rdx
 2839              	.LVL319:
 2840 017d E925FFFF 		jmp	.L230
 2840      FF
 2841              	.LVL320:
 2842              		.p2align 4,,10
 2843 0182 660F1F44 		.p2align 3
 2843      0000
 2844              	.L269:
 2845              	.LBB497:
 2846              	.LBB487:
 2847              	.LBB485:
 2848              	.LBB486:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2849              		.loc 1 861 0 discriminator 1
 2850 0188 488B5318 		movq	24(%rbx), %rdx
 2851 018c 4889DE   		movq	%rbx, %rsi
 2852 018f 4889DF   		movq	%rbx, %rdi
 2853 0192 8944240C 		movl	%eax, 12(%rsp)
 2854              	.LVL321:
 2855 0196 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 2855      00
 2856              	.LVL322:
 2857 019b 8B44240C 		movl	12(%rsp), %eax
 2858 019f E903FFFF 		jmp	.L230
 2858      FF
 2859              	.LVL323:
 2860              		.p2align 4,,10
 2861 01a4 0F1F4000 		.p2align 3
 2862              	.L229:
 2863              	.LBE486:
 2864              	.LBE485:
 643:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 2865              		.loc 3 643 0
 2866 01a8 E8000000 		call	_ZN15Fl_Text_Display10overstrikeEPKc
 2866      00
 2867              	.LVL324:
 2868 01ad E9D7FEFF 		jmp	.L228
 2868      FF
 2869              	.LVL325:
 2870              	.L270:
 2871              	.LBE487:
 2872              	.LBE497:
 2873              		.loc 3 665 0
 2874 01b2 E8000000 		call	__stack_chk_fail
 2874      00
 2875              	.LVL326:
 2876              		.cfi_endproc
 2877              	.LFE591:
 2879              		.section	.text.unlikely._ZN14Fl_Text_Editor10handle_keyEv
 2880              	.LCOLDE41:
 2881              		.section	.text._ZN14Fl_Text_Editor10handle_keyEv
 2882              	.LHOTE41:
 2883              		.section	.text.unlikely._ZN14Fl_Text_Editor17maybe_do_callbackEv,"ax",@progbits
 2884              		.align 2
 2885              	.LCOLDB42:
 2886              		.section	.text._ZN14Fl_Text_Editor17maybe_do_callbackEv,"ax",@progbits
 2887              	.LHOTB42:
 2888              		.align 2
 2889              		.p2align 4,,15
 2890              		.globl	_ZN14Fl_Text_Editor17maybe_do_callbackEv
 2892              	_ZN14Fl_Text_Editor17maybe_do_callbackEv:
 2893              	.LFB592:
 666:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 2894              		.loc 3 668 0
 2895              		.cfi_startproc
 2896              	.LVL327:
 669:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 2897              		.loc 3 671 0
 2898 0000 F6476080 		testb	$-128, 96(%rdi)
 2899 0004 7506     		jne	.L273
 2900              	.LVL328:
 2901              		.loc 3 671 0 is_stmt 0 discriminator 2
 2902 0006 F6476F02 		testb	$2, 111(%rdi)
 2903 000a 7414     		je	.L274
 2904              	.LVL329:
 2905              	.L273:
 2906              	.LBB508:
 2907              	.LBB509:
 2908              	.LBB510:
 2909              	.LBB511:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2910              		.loc 1 861 0 is_stmt 1
 2911 000c 488B5718 		movq	24(%rdi), %rdx
 2912 0010 4889FE   		movq	%rdi, %rsi
 2913 0013 E9000000 		jmp	_ZN9Fl_Widget11do_callbackEPS_Pv
 2913      00
 2914              	.LVL330:
 2915 0018 0F1F8400 		.p2align 4,,10
 2915      00000000 
 2916              		.p2align 3
 2917              	.L274:
 2918 0020 F3C3     		rep ret
 2919              	.LBE511:
 2920              	.LBE510:
 2921              	.LBE509:
 2922              	.LBE508:
 2923              		.cfi_endproc
 2924              	.LFE592:
 2926              		.section	.text.unlikely._ZN14Fl_Text_Editor17maybe_do_callbackEv
 2927              	.LCOLDE42:
 2928              		.section	.text._ZN14Fl_Text_Editor17maybe_do_callbackEv
 2929              	.LHOTE42:
 2930              		.section	.text.unlikely._ZN14Fl_Text_Editor6handleEi,"ax",@progbits
 2931              		.align 2
 2932              	.LCOLDB43:
 2933              		.section	.text._ZN14Fl_Text_Editor6handleEi,"ax",@progbits
 2934              	.LHOTB43:
 2935              		.align 2
 2936              		.p2align 4,,15
 2937              		.globl	_ZN14Fl_Text_Editor6handleEi
 2939              	_ZN14Fl_Text_Editor6handleEi:
 2940              	.LFB593:
 672:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 2941              		.loc 3 674 0
 2942              		.cfi_startproc
 2943              	.LVL331:
 2944 0000 488B87D0 		movq	208(%rdi), %rax
 2944      000000
 2945              	.LVL332:
 675:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 2946              		.loc 3 677 0
 2947 0007 4885C0   		testq	%rax, %rax
 2948 000a 0F842002 		je	.L336
 2948      0000
 674:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 2949              		.loc 3 674 0
 2950 0010 55       		pushq	%rbp
 2951              		.cfi_def_cfa_offset 16
 2952              		.cfi_offset 6, -16
 2953 0011 53       		pushq	%rbx
 2954              		.cfi_def_cfa_offset 24
 2955              		.cfi_offset 3, -24
 2956 0012 89F5     		movl	%esi, %ebp
 2957 0014 4889FB   		movq	%rdi, %rbx
 2958 0017 4883EC08 		subq	$8, %rsp
 2959              		.cfi_def_cfa_offset 32
 2960              	.LBB512:
 678:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 2961              		.loc 3 679 0
 2962 001b 83FE17   		cmpl	$23, %esi
 2963 001e 0F87FC00 		ja	.L278
 2963      0000
 2964 0024 89F2     		movl	%esi, %edx
 2965 0026 FF24D500 		jmp	*.L280(,%rdx,8)
 2965      000000
 2966              		.section	.rodata._ZN14Fl_Text_Editor6handleEi,"a",@progbits
 2967              		.align 8
 2968              		.align 4
 2969              	.L280:
 2970 0000 00000000 		.quad	.L278
 2970      00000000 
 2971 0008 00000000 		.quad	.L279
 2971      00000000 
 2972 0010 00000000 		.quad	.L278
 2972      00000000 
 2973 0018 00000000 		.quad	.L281
 2973      00000000 
 2974 0020 00000000 		.quad	.L278
 2974      00000000 
 2975 0028 00000000 		.quad	.L278
 2975      00000000 
 2976 0030 00000000 		.quad	.L282
 2976      00000000 
 2977 0038 00000000 		.quad	.L283
 2977      00000000 
 2978 0040 00000000 		.quad	.L284
 2978      00000000 
 2979 0048 00000000 		.quad	.L278
 2979      00000000 
 2980 0050 00000000 		.quad	.L278
 2980      00000000 
 2981 0058 00000000 		.quad	.L278
 2981      00000000 
 2982 0060 00000000 		.quad	.L285
 2982      00000000 
 2983 0068 00000000 		.quad	.L278
 2983      00000000 
 2984 0070 00000000 		.quad	.L278
 2984      00000000 
 2985 0078 00000000 		.quad	.L286
 2985      00000000 
 2986 0080 00000000 		.quad	.L278
 2986      00000000 
 2987 0088 00000000 		.quad	.L287
 2987      00000000 
 2988 0090 00000000 		.quad	.L278
 2988      00000000 
 2989 0098 00000000 		.quad	.L278
 2989      00000000 
 2990 00a0 00000000 		.quad	.L288
 2990      00000000 
 2991 00a8 00000000 		.quad	.L292
 2991      00000000 
 2992 00b0 00000000 		.quad	.L290
 2992      00000000 
 2993 00b8 00000000 		.quad	.L291
 2993      00000000 
 2994              		.section	.text._ZN14Fl_Text_Editor6handleEi
 2995 002d 0F1F00   		.p2align 4,,10
 2996              		.p2align 3
 2997              	.L288:
 2998              	.LBB513:
 2999              	.LBB514:
 3000              	.LBB515:
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
 3001              		.loc 6 1195 0
 3002 0030 BF010000 		movl	$1, %edi
 3002      00
 3003              	.LVL333:
 3004 0035 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 3004      00
 3005              	.LVL334:
 3006              	.LBE515:
 3007              	.LBE514:
 680:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 687:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 690:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 709:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 716:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 717:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 718:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 722:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 725:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 728:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 729:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 730:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 731:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 732:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 734:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 735:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 736:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 737:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 738:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 739:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 740:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 741:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with 
 742:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not recei
 743:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTE
 744:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 745:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its
 746:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 747:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 748:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 749:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 750:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 751:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 752:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 753:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 754:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 3008              		.loc 3 754 0
 3009 003a 84C0     		testb	%al, %al
 3010 003c 741A     		je	.L311
 3011              		.loc 3 754 0 is_stmt 0 discriminator 1
 3012 003e 488B03   		movq	(%rbx), %rax
 3013 0041 BE060000 		movl	$6, %esi
 3013      00
 3014 0046 4889DF   		movq	%rbx, %rdi
 3015 0049 FF5018   		call	*24(%rax)
 3016              	.LVL335:
 3017 004c 85C0     		testl	%eax, %eax
 3018 004e 7408     		je	.L311
 755:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3019              		.loc 3 755 0 is_stmt 1
 3020 0050 4889DF   		movq	%rbx, %rdi
 3021 0053 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 3021      00
 3022              	.LVL336:
 3023              	.L311:
 756:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 3024              		.loc 3 756 0
 3025 0058 8BB3B400 		movl	180(%rbx), %esi
 3025      0000
 3026 005e 4889DF   		movq	%rbx, %rdi
 3027 0061 E8000000 		call	_ZN15Fl_Text_Display11show_cursorEi
 3027      00
 3028              	.LVL337:
 757:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not
 3029              		.loc 3 757 0
 3030 0066 8B83B000 		movl	176(%rbx), %eax
 3030      0000
 3031 006c 89050000 		movl	%eax, _ZZN14Fl_Text_Editor6handleEiE12dndCursorPos(%rip)
 3031      0000
 3032              	.LVL338:
 3033              	.L292:
 758:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events
 759:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays 
 760:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 3034              		.loc 3 760 0
 3035 0072 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 3035      0000
 3036 0078 8B350000 		movl	_ZN2Fl3e_xE(%rip), %esi
 3036      0000
 3037 007e 31C9     		xorl	%ecx, %ecx
 3038 0080 4889DF   		movq	%rbx, %rdi
 3039 0083 E8000000 		call	_ZNK15Fl_Text_Display14xy_to_positionEiii
 3039      00
 3040              	.LVL339:
 3041 0088 4889DF   		movq	%rbx, %rdi
 3042 008b 89C6     		movl	%eax, %esi
 3043 008d E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 3043      00
 3044              	.LVL340:
 761:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 3045              		.loc 3 761 0
 3046 0092 B8010000 		movl	$1, %eax
 3046      00
 3047              	.LVL341:
 3048              	.L330:
 3049              	.LBE513:
 3050              	.LBE512:
 762:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 763:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 765:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 767:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 768:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 769:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 770:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 771:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 3051              		.loc 3 771 0
 3052 0097 4883C408 		addq	$8, %rsp
 3053              		.cfi_remember_state
 3054              		.cfi_def_cfa_offset 24
 3055 009b 5B       		popq	%rbx
 3056              		.cfi_restore 3
 3057              		.cfi_def_cfa_offset 16
 3058              	.LVL342:
 3059 009c 5D       		popq	%rbp
 3060              		.cfi_restore 6
 3061              		.cfi_def_cfa_offset 8
 3062              	.LVL343:
 3063 009d C3       		ret
 3064              	.LVL344:
 3065 009e 6690     		.p2align 4,,10
 3066              		.p2align 3
 3067              	.L283:
 3068              		.cfi_restore_state
 3069              	.LBB539:
 3070              	.LBB531:
 687:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 3071              		.loc 3 687 0
 3072 00a0 8BB7B400 		movl	180(%rdi), %esi
 3072      0000
 3073              	.LVL345:
 3074 00a6 E8000000 		call	_ZN15Fl_Text_Display11show_cursorEi
 3074      00
 3075              	.LVL346:
 3076 00ab 488B83D0 		movq	208(%rbx), %rax
 3076      000000
 695:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 3077              		.loc 3 695 0
 3078 00b2 80781800 		cmpb	$0, 24(%rax)
 3079 00b6 7408     		je	.L286
 695:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 3080              		.loc 3 695 0 is_stmt 0 discriminator 1
 3081 00b8 4889DF   		movq	%rbx, %rdi
 3082 00bb E8000000 		call	_ZN9Fl_Widget6redrawEv
 3082      00
 3083              	.LVL347:
 3084              		.p2align 4,,10
 3085              		.p2align 3
 3086              	.L286:
 697:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 3087              		.loc 3 697 0 is_stmt 1
 3088 00c0 F6436F04 		testb	$4, 111(%rbx)
 3089 00c4 0F85D601 		jne	.L337
 3089      0000
 3090              	.LVL348:
 3091              	.L333:
 3092              	.LBE531:
 3093              	.LBE539:
 3094              		.loc 3 771 0 discriminator 1
 3095 00ca 4883C408 		addq	$8, %rsp
 3096              		.cfi_remember_state
 3097              		.cfi_def_cfa_offset 24
 3098              	.LBB540:
 3099              	.LBB532:
 767:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3100              		.loc 3 767 0 discriminator 1
 3101 00ce B8010000 		movl	$1, %eax
 3101      00
 3102              	.LBE532:
 3103              	.LBE540:
 3104              		.loc 3 771 0 discriminator 1
 3105 00d3 5B       		popq	%rbx
 3106              		.cfi_restore 3
 3107              		.cfi_def_cfa_offset 16
 3108              	.LVL349:
 3109 00d4 5D       		popq	%rbp
 3110              		.cfi_restore 6
 3111              		.cfi_def_cfa_offset 8
 3112              	.LVL350:
 3113 00d5 C3       		ret
 3114              	.LVL351:
 3115 00d6 662E0F1F 		.p2align 4,,10
 3115      84000000 
 3115      0000
 3116              		.p2align 3
 3117              	.L290:
 3118              		.cfi_restore_state
 3119              	.LBB541:
 3120              	.LBB533:
 763:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 3121              		.loc 3 763 0
 3122 00e0 8B350000 		movl	_ZZN14Fl_Text_Editor6handleEiE12dndCursorPos(%rip), %esi
 3122      0000
 3123              	.LVL352:
 3124 00e6 E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 3124      00
 3125              	.LVL353:
 764:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3126              		.loc 3 764 0
 3127 00eb B8010000 		movl	$1, %eax
 3127      00
 3128 00f0 EBA5     		jmp	.L330
 3129              	.LVL354:
 3130              		.p2align 4,,10
 3131 00f2 660F1F44 		.p2align 3
 3131      0000
 3132              	.L291:
 766:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 3133              		.loc 3 766 0
 3134 00f8 8B977801 		movl	376(%rdi), %edx
 3134      0000
 3135 00fe 85D2     		testl	%edx, %edx
 3136 0100 75C8     		jne	.L333
 3137              	.LVL355:
 766:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 3138              		.loc 3 766 0 is_stmt 0 discriminator 1
 3139 0102 4889C7   		movq	%rax, %rdi
 3140 0105 E8000000 		call	_ZN14Fl_Text_Buffer8unselectEv
 3140      00
 3141              	.LVL356:
 3142 010a EBBE     		jmp	.L333
 3143              	.LVL357:
 3144 010c 0F1F4000 		.p2align 4,,10
 3145              		.p2align 3
 3146              	.L279:
 3147              	.LBB516:
 725:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3148              		.loc 3 725 0 is_stmt 1
 3149 0110 813D0000 		cmpl	$65258, _ZN2Fl8e_keysymE(%rip)
 3149      0000EAFE 
 3149      0000
 3150 011a 0F84C501 		je	.L338
 3150      0000
 3151              	.LVL358:
 3152              	.L278:
 3153              	.LBE516:
 3154              	.LBE533:
 3155              	.LBE541:
 3156              		.loc 3 771 0
 3157 0120 4883C408 		addq	$8, %rsp
 3158              		.cfi_remember_state
 3159              		.cfi_def_cfa_offset 24
 770:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 3160              		.loc 3 770 0
 3161 0124 89EE     		movl	%ebp, %esi
 3162 0126 4889DF   		movq	%rbx, %rdi
 3163              		.loc 3 771 0
 3164 0129 5B       		popq	%rbx
 3165              		.cfi_restore 3
 3166              		.cfi_def_cfa_offset 16
 3167              	.LVL359:
 3168 012a 5D       		popq	%rbp
 3169              		.cfi_restore 6
 3170              		.cfi_def_cfa_offset 8
 3171              	.LVL360:
 770:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 3172              		.loc 3 770 0
 3173 012b E9000000 		jmp	_ZN15Fl_Text_Display6handleEi
 3173      00
 3174              	.LVL361:
 3175              		.p2align 4,,10
 3176              		.p2align 3
 3177              	.L285:
 3178              		.cfi_restore_state
 3179 0130 8BBF9001 		movl	400(%rdi), %edi
 3179      0000
 3180              	.LVL362:
 3181              	.LBB542:
 3182              	.LBB534:
 743:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 3183              		.loc 3 743 0
 3184 0136 85FF     		testl	%edi, %edi
 3185 0138 0F85FA00 		jne	.L339
 3185      0000
 743:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 3186              		.loc 3 743 0 is_stmt 0 discriminator 2
 3187 013e 4889DF   		movq	%rbx, %rdi
 3188 0141 E8000000 		call	_ZN9Fl_Widget13test_shortcutEv
 3188      00
 3189              	.LVL363:
 3190 0146 85C0     		testl	%eax, %eax
 3191 0148 0F94C0   		sete	%al
 3192              	.LVL364:
 3193              	.L304:
 743:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 3194              		.loc 3 743 0 discriminator 4
 3195 014b 84C0     		testb	%al, %al
 3196 014d 0F846501 		je	.L340
 3196      0000
 3197              	.LBE534:
 3198              	.LBE542:
 677:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3199              		.loc 3 677 0 is_stmt 1
 3200 0153 31C0     		xorl	%eax, %eax
 3201 0155 E93DFFFF 		jmp	.L330
 3201      FF
 3202              	.LVL365:
 3203 015a 660F1F44 		.p2align 4,,10
 3203      0000
 3204              		.p2align 3
 3205              	.L287:
 3206              	.LBB543:
 3207              	.LBB535:
 706:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 3208              		.loc 3 706 0
 3209 0160 48833D00 		cmpq	$0, _ZN2Fl6e_textE(%rip)
 3209      00000000 
 3210 0168 0F84E801 		je	.L341
 3210      0000
 3211              	.LVL366:
 710:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 3212              		.loc 3 710 0
 3213 016e 4889C7   		movq	%rax, %rdi
 3214 0171 E8000000 		call	_ZN14Fl_Text_Buffer16remove_selectionEv
 3214      00
 3215              	.LVL367:
 711:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3216              		.loc 3 711 0
 3217 0176 8B8BA801 		movl	424(%rbx), %ecx
 3217      0000
 3218 017c 488B3500 		movq	_ZN2Fl6e_textE(%rip), %rsi
 3218      000000
 3219 0183 4889DF   		movq	%rbx, %rdi
 3220 0186 85C9     		testl	%ecx, %ecx
 3221 0188 0F85C200 		jne	.L342
 3221      0000
 712:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 3222              		.loc 3 712 0
 3223 018e E8000000 		call	_ZN15Fl_Text_Display10overstrikeEPKc
 3223      00
 3224              	.LVL368:
 3225              	.L299:
 713:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3226              		.loc 3 713 0
 3227 0193 4889DF   		movq	%rbx, %rdi
 3228 0196 E8000000 		call	_ZN15Fl_Text_Display20show_insert_positionEv
 3228      00
 3229              	.LVL369:
 3230              	.LBB524:
 3231              	.LBB525:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3232              		.loc 1 786 0
 3233 019b 814B6080 		orl	$128, 96(%rbx)
 3233      000000
 3234              	.LVL370:
 3235              	.LBE525:
 3236              	.LBE524:
 715:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 3237              		.loc 3 715 0
 3238 01a2 F6436F01 		testb	$1, 111(%rbx)
 3239 01a6 0F841EFF 		je	.L333
 3239      FFFF
 3240              	.LVL371:
 3241              	.L334:
 3242              	.LBB526:
 3243              	.LBB517:
 3244              	.LBB518:
 3245              	.LBB519:
 861:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3246              		.loc 1 861 0 discriminator 1
 3247 01ac 488B5318 		movq	24(%rbx), %rdx
 3248 01b0 4889DE   		movq	%rbx, %rsi
 3249 01b3 4889DF   		movq	%rbx, %rdi
 3250 01b6 E8000000 		call	_ZN9Fl_Widget11do_callbackEPS_Pv
 3250      00
 3251              	.LVL372:
 3252              	.LBE519:
 3253              	.LBE518:
 738:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3254              		.loc 3 738 0 discriminator 1
 3255 01bb B8010000 		movl	$1, %eax
 3255      00
 3256 01c0 E9D2FEFF 		jmp	.L330
 3256      FF
 3257              	.LVL373:
 3258              		.p2align 4,,10
 3259 01c5 0F1F00   		.p2align 3
 3260              	.L281:
 3261              	.LBE517:
 3262              	.LBE526:
 721:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 3263              		.loc 3 721 0
 3264 01c8 8BB7B400 		movl	180(%rdi), %esi
 3264      0000
 3265              	.LVL374:
 3266 01ce E8000000 		call	_ZN15Fl_Text_Display11show_cursorEi
 3266      00
 3267              	.LVL375:
 722:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 3268              		.loc 3 722 0
 3269 01d3 B8010000 		movl	$1, %eax
 3269      00
 3270 01d8 E9BAFEFF 		jmp	.L330
 3270      FF
 3271              	.LVL376:
 3272 01dd 0F1F00   		.p2align 4,,10
 3273              		.p2align 3
 3274              	.L282:
 681:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3275              		.loc 3 681 0
 3276 01e0 8BB7B400 		movl	180(%rdi), %esi
 3276      0000
 3277              	.LVL377:
 3278 01e6 E8000000 		call	_ZN15Fl_Text_Display11show_cursorEi
 3278      00
 3279              	.LVL378:
 3280 01eb 488B83D0 		movq	208(%rbx), %rax
 3280      000000
 682:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 3281              		.loc 3 682 0
 3282 01f2 80781800 		cmpb	$0, 24(%rax)
 3283 01f6 7568     		jne	.L343
 3284              	.LVL379:
 3285              	.L307:
 746:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widg
 3286              		.loc 3 746 0
 3287 01f8 4889DF   		movq	%rbx, %rdi
 3288 01fb E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 3288      00
 3289              	.LVL380:
 747:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 3290              		.loc 3 747 0
 3291 0200 B8010000 		movl	$1, %eax
 3291      00
 3292 0205 E98DFEFF 		jmp	.L330
 3292      FF
 3293              	.LVL381:
 3294 020a 660F1F44 		.p2align 4,,10
 3294      0000
 3295              		.p2align 3
 3296              	.L284:
 701:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 3297              		.loc 3 701 0
 3298 0210 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 3298      00
 3299              	.LVL382:
 3300 0215 85C0     		testl	%eax, %eax
 3301 0217 7557     		jne	.L344
 3302              	.L310:
 3303              	.LBE535:
 3304              	.LBE543:
 3305              		.loc 3 771 0
 3306 0219 4883C408 		addq	$8, %rsp
 3307              		.cfi_def_cfa_offset 24
 3308              	.LBB544:
 3309              	.LBB536:
 703:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 3310              		.loc 3 703 0
 3311 021d 4889DF   		movq	%rbx, %rdi
 3312              	.LBE536:
 3313              	.LBE544:
 3314              		.loc 3 771 0
 3315 0220 5B       		popq	%rbx
 3316              		.cfi_restore 3
 3317              		.cfi_def_cfa_offset 16
 3318              	.LVL383:
 3319 0221 5D       		popq	%rbp
 3320              		.cfi_restore 6
 3321              		.cfi_def_cfa_offset 8
 3322              	.LVL384:
 3323              	.LBB545:
 3324              	.LBB537:
 703:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 3325              		.loc 3 703 0
 3326 0222 E9000000 		jmp	_ZN14Fl_Text_Editor10handle_keyEv
 3326      00
 3327              	.LVL385:
 3328 0227 660F1F84 		.p2align 4,,10
 3328      00000000 
 3328      00
 3329              		.p2align 3
 3330              	.L336:
 3331              	.LBE537:
 3332              	.LBE545:
 677:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3333              		.loc 3 677 0
 3334 0230 31C0     		xorl	%eax, %eax
 3335              		.loc 3 771 0
 3336 0232 C3       		ret
 3337              	.LVL386:
 3338              		.p2align 4,,10
 3339 0233 0F1F4400 		.p2align 3
 3339      00
 3340              	.L339:
 3341              		.cfi_def_cfa_offset 32
 3342              		.cfi_offset 3, -24
 3343              		.cfi_offset 6, -16
 3344              	.LBB546:
 3345              	.LBB538:
 743:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. 
 3346              		.loc 3 743 0 discriminator 1
 3347 0238 E8000000 		call	_ZN2Fl13test_shortcutEj
 3347      00
 3348              	.LVL387:
 3349 023d 85C0     		testl	%eax, %eax
 3350 023f 0F94C0   		sete	%al
 3351 0242 E904FFFF 		jmp	.L304
 3351      FF
 3352              	.LVL388:
 3353 0247 660F1F84 		.p2align 4,,10
 3353      00000000 
 3353      00
 3354              		.p2align 3
 3355              	.L342:
 711:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3356              		.loc 3 711 0
 3357 0250 E8000000 		call	_ZN15Fl_Text_Display6insertEPKc
 3357      00
 3358              	.LVL389:
 3359 0255 E939FFFF 		jmp	.L299
 3359      FF
 3360              	.LVL390:
 3361 025a 660F1F44 		.p2align 4,,10
 3361      0000
 3362              		.p2align 3
 3363              	.L343:
 682:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 3364              		.loc 3 682 0 discriminator 1
 3365 0260 4889DF   		movq	%rbx, %rdi
 3366 0263 E8000000 		call	_ZN9Fl_Widget6redrawEv
 3366      00
 3367              	.LVL391:
 3368 0268 EB8E     		jmp	.L307
 3369              	.LVL392:
 3370 026a 660F1F44 		.p2align 4,,10
 3370      0000
 3371              		.p2align 3
 3372              	.L344:
 701:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 3373              		.loc 3 701 0 discriminator 1
 3374 0270 4889DF   		movq	%rbx, %rdi
 3375 0273 E8000000 		call	_ZNK9Fl_Widget6windowEv
 3375      00
 3376              	.LVL393:
 3377 0278 4885C0   		testq	%rax, %rax
 3378 027b 749C     		je	.L310
 701:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 3379              		.loc 3 701 0 is_stmt 0 discriminator 3
 3380 027d 483B1D00 		cmpq	_ZN2Fl11belowmouse_E(%rip), %rbx
 3380      000000
 3381 0284 7593     		jne	.L310
 702:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 3382              		.loc 3 702 0 is_stmt 1
 3383 0286 4889DF   		movq	%rbx, %rdi
 3384 0289 E8000000 		call	_ZNK9Fl_Widget6windowEv
 3384      00
 3385              	.LVL394:
 3386 028e BEFF0000 		movl	$255, %esi
 3386      00
 3387 0293 4889C7   		movq	%rax, %rdi
 3388 0296 E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 3388      00
 3389              	.LVL395:
 3390 029b E979FFFF 		jmp	.L310
 3390      FF
 3391              	.LVL396:
 3392              		.p2align 4,,10
 3393              		.p2align 3
 3394              	.L337:
 697:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 3395              		.loc 3 697 0 discriminator 1
 3396 02a0 4889DF   		movq	%rbx, %rdi
 3397 02a3 E8000000 		call	_ZN14Fl_Text_Editor17maybe_do_callbackEv
 3397      00
 3398              	.LVL397:
 698:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3399              		.loc 3 698 0 discriminator 1
 3400 02a8 B8010000 		movl	$1, %eax
 3400      00
 3401 02ad E9E5FDFF 		jmp	.L330
 3401      FF
 3402              	.LVL398:
 3403              		.p2align 4,,10
 3404 02b2 660F1F44 		.p2align 3
 3404      0000
 3405              	.L340:
 3406              	.LBB527:
 3407              	.LBB528:
 3408              		.loc 6 1195 0
 3409 02b8 BF010000 		movl	$1, %edi
 3409      00
 3410 02bd E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 3410      00
 3411              	.LVL399:
 3412              	.LBE528:
 3413              	.LBE527:
 745:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3414              		.loc 3 745 0
 3415 02c2 84C0     		testb	%al, %al
 3416 02c4 0F8456FE 		je	.L278
 3416      FFFF
 745:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3417              		.loc 3 745 0 is_stmt 0 discriminator 1
 3418 02ca 488B03   		movq	(%rbx), %rax
 3419 02cd BE060000 		movl	$6, %esi
 3419      00
 3420 02d2 4889DF   		movq	%rbx, %rdi
 3421 02d5 FF5018   		call	*24(%rax)
 3422              	.LVL400:
 3423 02d8 85C0     		testl	%eax, %eax
 3424 02da 0F8518FF 		jne	.L307
 3424      FFFF
 3425 02e0 E93BFEFF 		jmp	.L278
 3425      FF
 3426              	.LVL401:
 3427              	.L338:
 3428              	.LBB529:
 3429              	.LBB522:
 727:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inac
 3430              		.loc 3 727 0 is_stmt 1
 3431 02e5 BE010000 		movl	$1, %esi
 3431      00
 3432              	.LVL402:
 3433 02ea E8000000 		call	_ZN8Fl_Group6handleEi
 3433      00
 3434              	.LVL403:
 3435 02ef 85C0     		testl	%eax, %eax
 3436 02f1 0F85D3FD 		jne	.L333
 3436      FFFF
 3437 02f7 488BBBD0 		movq	208(%rbx), %rdi
 3437      000000
 728:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 3438              		.loc 3 728 0
 3439 02fe C7837401 		movl	$-2, 372(%rbx)
 3439      0000FEFF 
 3439      FFFF
 3440              	.LVL404:
 729:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 3441              		.loc 3 729 0
 3442 0308 807F1800 		cmpb	$0, 24(%rdi)
 3443 030c 7559     		jne	.L345
 3444              	.LVL405:
 3445              	.L302:
 732:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 3446              		.loc 3 732 0
 3447 030e 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 3447      0000
 3448 0314 8B350000 		movl	_ZN2Fl3e_xE(%rip), %esi
 3448      0000
 3449 031a 31C9     		xorl	%ecx, %ecx
 3450 031c 4889DF   		movq	%rbx, %rdi
 3451 031f E8000000 		call	_ZNK15Fl_Text_Display14xy_to_positionEiii
 3451      00
 3452              	.LVL406:
 733:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget
 3453              		.loc 3 733 0
 3454 0324 4889DF   		movq	%rbx, %rdi
 3455 0327 89C6     		movl	%eax, %esi
 3456 0329 E8000000 		call	_ZN15Fl_Text_Display15insert_positionEi
 3456      00
 3457              	.LVL407:
 734:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 3458              		.loc 3 734 0
 3459 032e 31F6     		xorl	%esi, %esi
 3460 0330 4889DF   		movq	%rbx, %rdi
 3461 0333 E8000000 		call	_ZN2Fl5pasteER9Fl_Widgeti
 3461      00
 3462              	.LVL408:
 735:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 3463              		.loc 3 735 0
 3464 0338 4889DF   		movq	%rbx, %rdi
 3465 033b E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 3465      00
 3466              	.LVL409:
 3467              	.LBB520:
 3468              	.LBB521:
 786:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3469              		.loc 1 786 0
 3470 0340 814B6080 		orl	$128, 96(%rbx)
 3470      000000
 3471              	.LVL410:
 3472              	.LBE521:
 3473              	.LBE520:
 737:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 3474              		.loc 3 737 0
 3475 0347 F6436F01 		testb	$1, 111(%rbx)
 3476 034b 0F8479FD 		je	.L333
 3476      FFFF
 3477 0351 E956FEFF 		jmp	.L334
 3477      FF
 3478              	.LVL411:
 3479              	.L341:
 3480              	.LBE522:
 3481              	.LBE529:
 707:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3482              		.loc 3 707 0
 3483 0356 31FF     		xorl	%edi, %edi
 3484 0358 E8000000 		call	_Z7fl_beepi
 3484      00
 3485              	.LVL412:
 708:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 3486              		.loc 3 708 0
 3487 035d B8010000 		movl	$1, %eax
 3487      00
 3488 0362 E930FDFF 		jmp	.L330
 3488      FF
 3489              	.LVL413:
 3490              	.L345:
 3491              	.LBB530:
 3492              	.LBB523:
 730:fltk-1.3.4-1/src/Fl_Text_Editor.cxx ****  714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 3493              		.loc 3 730 0
 3494 0367 E8000000 		call	_ZN14Fl_Text_Buffer8unselectEv
 3494      00
 3495              	.LVL414:
 3496 036c EBA0     		jmp	.L302
 3497              	.LBE523:
 3498              	.LBE530:
 3499              	.LBE538:
 3500              	.LBE546:
 3501              		.cfi_endproc
 3502              	.LFE593:
 3504              		.section	.text.unlikely._ZN14Fl_Text_Editor6handleEi
 3505              	.LCOLDE43:
 3506              		.section	.text._ZN14Fl_Text_Editor6handleEi
 3507              	.LHOTE43:
 3508              		.section	.bss._ZZN14Fl_Text_Editor6handleEiE12dndCursorPos,"aw",@nobits
 3509              		.align 4
 3512              	_ZZN14Fl_Text_Editor6handleEiE12dndCursorPos:
 3513 0000 00000000 		.zero	4
 3514              		.weak	_ZTS14Fl_Text_Editor
 3515              		.section	.rodata._ZTS14Fl_Text_Editor,"aG",@progbits,_ZTS14Fl_Text_Editor,comdat
 3516              		.align 16
 3519              	_ZTS14Fl_Text_Editor:
 3520 0000 3134466C 		.string	"14Fl_Text_Editor"
 3520      5F546578 
 3520      745F4564 
 3520      69746F72 
 3520      00
 3521              		.weak	_ZTI14Fl_Text_Editor
 3522              		.section	.rodata._ZTI14Fl_Text_Editor,"aG",@progbits,_ZTI14Fl_Text_Editor,comdat
 3523              		.align 8
 3526              	_ZTI14Fl_Text_Editor:
 3527 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3527      00000000 
 3528 0008 00000000 		.quad	_ZTS14Fl_Text_Editor
 3528      00000000 
 3529 0010 00000000 		.quad	_ZTI15Fl_Text_Display
 3529      00000000 
 3530              		.weak	_ZTV14Fl_Text_Editor
 3531              		.section	.rodata._ZTV14Fl_Text_Editor,"aG",@progbits,_ZTV14Fl_Text_Editor,comdat
 3532              		.align 8
 3535              	_ZTV14Fl_Text_Editor:
 3536 0000 00000000 		.quad	0
 3536      00000000 
 3537 0008 00000000 		.quad	_ZTI14Fl_Text_Editor
 3537      00000000 
 3538 0010 00000000 		.quad	_ZN14Fl_Text_EditorD1Ev
 3538      00000000 
 3539 0018 00000000 		.quad	_ZN14Fl_Text_EditorD0Ev
 3539      00000000 
 3540 0020 00000000 		.quad	_ZN15Fl_Text_Display4drawEv
 3540      00000000 
 3541 0028 00000000 		.quad	_ZN14Fl_Text_Editor6handleEi
 3541      00000000 
 3542 0030 00000000 		.quad	_ZN15Fl_Text_Display6resizeEiiii
 3542      00000000 
 3543 0038 00000000 		.quad	_ZN9Fl_Widget4showEv
 3543      00000000 
 3544 0040 00000000 		.quad	_ZN9Fl_Widget4hideEv
 3544      00000000 
 3545 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 3545      00000000 
 3546 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 3546      00000000 
 3547 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 3547      00000000 
 3548              		.section	.rodata._ZL20default_key_bindings,"a",@progbits
 3549              		.align 32
 3552              	_ZL20default_key_bindings:
 3553 0000 1BFF0000 		.long	65307
 3554 0004 FFFFFFFF 		.long	-1
 3555 0008 00000000 		.quad	_ZN14Fl_Text_Editor9kf_ignoreEiPS_
 3555      00000000 
 3556 0010 0DFF0000 		.long	65293
 3557 0014 FFFFFFFF 		.long	-1
 3558 0018 00000000 		.quad	_ZN14Fl_Text_Editor8kf_enterEiPS_
 3558      00000000 
 3559 0020 8DFF0000 		.long	65421
 3560 0024 FFFFFFFF 		.long	-1
 3561 0028 00000000 		.quad	_ZN14Fl_Text_Editor8kf_enterEiPS_
 3561      00000000 
 3562 0030 08FF0000 		.long	65288
 3563 0034 FFFFFFFF 		.long	-1
 3564 0038 00000000 		.quad	_ZN14Fl_Text_Editor12kf_backspaceEiPS_
 3564      00000000 
 3565 0040 63FF0000 		.long	65379
 3566 0044 FFFFFFFF 		.long	-1
 3567 0048 00000000 		.quad	_ZN14Fl_Text_Editor9kf_insertEiPS_
 3567      00000000 
 3568 0050 FFFF0000 		.long	65535
 3569 0054 FFFFFFFF 		.long	-1
 3570 0058 00000000 		.quad	_ZN14Fl_Text_Editor9kf_deleteEiPS_
 3570      00000000 
 3571 0060 50FF0000 		.long	65360
 3572 0064 00000000 		.long	0
 3573 0068 00000000 		.quad	_ZN14Fl_Text_Editor7kf_moveEiPS_
 3573      00000000 
 3574 0070 57FF0000 		.long	65367
 3575 0074 00000000 		.long	0
 3576 0078 00000000 		.quad	_ZN14Fl_Text_Editor7kf_moveEiPS_
 3576      00000000 
 3577 0080 51FF0000 		.long	65361
 3578 0084 00000000 		.long	0
 3579 0088 00000000 		.quad	_ZN14Fl_Text_Editor7kf_moveEiPS_
 3579      00000000 
 3580 0090 52FF0000 		.long	65362
 3581 0094 00000000 		.long	0
 3582 0098 00000000 		.quad	_ZN14Fl_Text_Editor7kf_moveEiPS_
 3582      00000000 
 3583 00a0 53FF0000 		.long	65363
 3584 00a4 00000000 		.long	0
 3585 00a8 00000000 		.quad	_ZN14Fl_Text_Editor7kf_moveEiPS_
 3585      00000000 
 3586 00b0 54FF0000 		.long	65364
 3587 00b4 00000000 		.long	0
 3588 00b8 00000000 		.quad	_ZN14Fl_Text_Editor7kf_moveEiPS_
 3588      00000000 
 3589 00c0 55FF0000 		.long	65365
 3590 00c4 00000000 		.long	0
 3591 00c8 00000000 		.quad	_ZN14Fl_Text_Editor7kf_moveEiPS_
 3591      00000000 
 3592 00d0 56FF0000 		.long	65366
 3593 00d4 00000000 		.long	0
 3594 00d8 00000000 		.quad	_ZN14Fl_Text_Editor7kf_moveEiPS_
 3594      00000000 
 3595 00e0 50FF0000 		.long	65360
 3596 00e4 00000100 		.long	65536
 3597 00e8 00000000 		.quad	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 3597      00000000 
 3598 00f0 57FF0000 		.long	65367
 3599 00f4 00000100 		.long	65536
 3600 00f8 00000000 		.quad	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 3600      00000000 
 3601 0100 51FF0000 		.long	65361
 3602 0104 00000100 		.long	65536
 3603 0108 00000000 		.quad	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 3603      00000000 
 3604 0110 52FF0000 		.long	65362
 3605 0114 00000100 		.long	65536
 3606 0118 00000000 		.quad	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 3606      00000000 
 3607 0120 53FF0000 		.long	65363
 3608 0124 00000100 		.long	65536
 3609 0128 00000000 		.quad	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 3609      00000000 
 3610 0130 54FF0000 		.long	65364
 3611 0134 00000100 		.long	65536
 3612 0138 00000000 		.quad	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 3612      00000000 
 3613 0140 55FF0000 		.long	65365
 3614 0144 00000100 		.long	65536
 3615 0148 00000000 		.quad	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 3615      00000000 
 3616 0150 56FF0000 		.long	65366
 3617 0154 00000100 		.long	65536
 3618 0158 00000000 		.quad	_ZN14Fl_Text_Editor13kf_shift_moveEiPS_
 3618      00000000 
 3619 0160 50FF0000 		.long	65360
 3620 0164 00000400 		.long	262144
 3621 0168 00000000 		.quad	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 3621      00000000 
 3622 0170 57FF0000 		.long	65367
 3623 0174 00000400 		.long	262144
 3624 0178 00000000 		.quad	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 3624      00000000 
 3625 0180 51FF0000 		.long	65361
 3626 0184 00000400 		.long	262144
 3627 0188 00000000 		.quad	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 3627      00000000 
 3628 0190 52FF0000 		.long	65362
 3629 0194 00000400 		.long	262144
 3630 0198 00000000 		.quad	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 3630      00000000 
 3631 01a0 53FF0000 		.long	65363
 3632 01a4 00000400 		.long	262144
 3633 01a8 00000000 		.quad	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 3633      00000000 
 3634 01b0 54FF0000 		.long	65364
 3635 01b4 00000400 		.long	262144
 3636 01b8 00000000 		.quad	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 3636      00000000 
 3637 01c0 55FF0000 		.long	65365
 3638 01c4 00000400 		.long	262144
 3639 01c8 00000000 		.quad	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 3639      00000000 
 3640 01d0 56FF0000 		.long	65366
 3641 01d4 00000400 		.long	262144
 3642 01d8 00000000 		.quad	_ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
 3642      00000000 
 3643 01e0 50FF0000 		.long	65360
 3644 01e4 00000500 		.long	327680
 3645 01e8 00000000 		.quad	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 3645      00000000 
 3646 01f0 57FF0000 		.long	65367
 3647 01f4 00000500 		.long	327680
 3648 01f8 00000000 		.quad	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 3648      00000000 
 3649 0200 51FF0000 		.long	65361
 3650 0204 00000500 		.long	327680
 3651 0208 00000000 		.quad	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 3651      00000000 
 3652 0210 52FF0000 		.long	65362
 3653 0214 00000500 		.long	327680
 3654 0218 00000000 		.quad	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 3654      00000000 
 3655 0220 53FF0000 		.long	65363
 3656 0224 00000500 		.long	327680
 3657 0228 00000000 		.quad	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 3657      00000000 
 3658 0230 54FF0000 		.long	65364
 3659 0234 00000500 		.long	327680
 3660 0238 00000000 		.quad	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 3660      00000000 
 3661 0240 55FF0000 		.long	65365
 3662 0244 00000500 		.long	327680
 3663 0248 00000000 		.quad	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 3663      00000000 
 3664 0250 56FF0000 		.long	65366
 3665 0254 00000500 		.long	327680
 3666 0258 00000000 		.quad	_ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
 3666      00000000 
 3667 0260 7A000000 		.long	122
 3668 0264 00000400 		.long	262144
 3669 0268 00000000 		.quad	_ZN14Fl_Text_Editor7kf_undoEiPS_
 3669      00000000 
 3670 0270 2F000000 		.long	47
 3671 0274 00000400 		.long	262144
 3672 0278 00000000 		.quad	_ZN14Fl_Text_Editor7kf_undoEiPS_
 3672      00000000 
 3673 0280 78000000 		.long	120
 3674 0284 00000400 		.long	262144
 3675 0288 00000000 		.quad	_ZN14Fl_Text_Editor6kf_cutEiPS_
 3675      00000000 
 3676 0290 FFFF0000 		.long	65535
 3677 0294 00000100 		.long	65536
 3678 0298 00000000 		.quad	_ZN14Fl_Text_Editor6kf_cutEiPS_
 3678      00000000 
 3679 02a0 63000000 		.long	99
 3680 02a4 00000400 		.long	262144
 3681 02a8 00000000 		.quad	_ZN14Fl_Text_Editor7kf_copyEiPS_
 3681      00000000 
 3682 02b0 63FF0000 		.long	65379
 3683 02b4 00000400 		.long	262144
 3684 02b8 00000000 		.quad	_ZN14Fl_Text_Editor7kf_copyEiPS_
 3684      00000000 
 3685 02c0 76000000 		.long	118
 3686 02c4 00000400 		.long	262144
 3687 02c8 00000000 		.quad	_ZN14Fl_Text_Editor8kf_pasteEiPS_
 3687      00000000 
 3688 02d0 63FF0000 		.long	65379
 3689 02d4 00000100 		.long	65536
 3690 02d8 00000000 		.quad	_ZN14Fl_Text_Editor8kf_pasteEiPS_
 3690      00000000 
 3691 02e0 61000000 		.long	97
 3692 02e4 00000400 		.long	262144
 3693 02e8 00000000 		.quad	_ZN14Fl_Text_Editor13kf_select_allEiPS_
 3693      00000000 
 3694 02f0 00000000 		.long	0
 3695 02f4 00000000 		.long	0
 3696 02f8 00000000 		.quad	0
 3696      00000000 
 3697              		.globl	_ZN14Fl_Text_Editor19global_key_bindingsE
 3698              		.section	.bss._ZN14Fl_Text_Editor19global_key_bindingsE,"aw",@nobits
 3699              		.align 8
 3702              	_ZN14Fl_Text_Editor19global_key_bindingsE:
 3703 0000 00000000 		.zero	8
 3703      00000000 
 3704              		.text
 3705              	.Letext0:
 3706              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 3707              	.Letext_cold0:
 3708              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3709              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3710              		.file 9 "/usr/include/libio.h"
 3711              		.file 10 "fltk-1.3.4-1/FL/fl_types.h"
 3712              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 3713              		.file 12 "fltk-1.3.4-1/FL/Fl_Window.H"
 3714              		.file 13 "fltk-1.3.4-1/FL/Fl_Image.H"
 3715              		.file 14 "fltk-1.3.4-1/FL/Fl_Device.H"
 3716              		.file 15 "fltk-1.3.4-1/FL/Fl_Text_Buffer.H"
 3717              		.file 16 "fltk-1.3.4-1/FL/Fl_Text_Display.H"
 3718              		.file 17 "fltk-1.3.4-1/FL/fl_ask.H"
 3719              		.file 18 "/usr/include/stdio.h"
 3720              		.file 19 "/usr/include/stdlib.h"
 3721              		.file 20 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Text_Editor.cxx
     /tmp/ccOKZeXM.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccOKZeXM.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccOKZeXM.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccOKZeXM.s:90     .text._ZN14Fl_Text_Editor9kf_ignoreEiPS_:0000000000000000 _ZN14Fl_Text_Editor9kf_ignoreEiPS_
     /tmp/ccOKZeXM.s:114    .text._ZN14Fl_Text_Editor9kf_insertEiPS_:0000000000000000 _ZN14Fl_Text_Editor9kf_insertEiPS_
     /tmp/ccOKZeXM.s:147    .text._ZL14kill_selectionP14Fl_Text_Editor:0000000000000000 _ZL14kill_selectionP14Fl_Text_Editor
     /tmp/ccOKZeXM.s:200    .text._ZN14Fl_Text_Editor7kf_moveEiPS_:0000000000000000 _ZN14Fl_Text_Editor7kf_moveEiPS_
     /tmp/ccOKZeXM.s:399    .text._ZN14Fl_Text_Editor7kf_copyEiPS_:0000000000000000 _ZN14Fl_Text_Editor7kf_copyEiPS_
     /tmp/ccOKZeXM.s:491    .text._ZN14Fl_Text_Editor13kf_select_allEiPS_:0000000000000000 _ZN14Fl_Text_Editor13kf_select_allEiPS_
     /tmp/ccOKZeXM.s:557    .text._ZN14Fl_Text_Editor13kf_shift_moveEiPS_:0000000000000000 _ZN14Fl_Text_Editor13kf_shift_moveEiPS_
     /tmp/ccOKZeXM.s:619    .text._ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_:0000000000000000 _ZN14Fl_Text_Editor12kf_ctrl_moveEiPS_
     /tmp/ccOKZeXM.s:895    .text._ZN14Fl_Text_Editor11kf_c_s_moveEiPS_:0000000000000000 _ZN14Fl_Text_Editor11kf_c_s_moveEiPS_
     /tmp/ccOKZeXM.s:935    .text._ZN14Fl_Text_Editor8kf_pasteEiPS_:0000000000000000 _ZN14Fl_Text_Editor8kf_pasteEiPS_
     /tmp/ccOKZeXM.s:1003   .text._ZN14Fl_Text_EditorD2Ev:0000000000000000 _ZN14Fl_Text_EditorD2Ev
     /tmp/ccOKZeXM.s:3535   .rodata._ZTV14Fl_Text_Editor:0000000000000000 _ZTV14Fl_Text_Editor
     /tmp/ccOKZeXM.s:1003   .text._ZN14Fl_Text_EditorD2Ev:0000000000000000 _ZN14Fl_Text_EditorD1Ev
     /tmp/ccOKZeXM.s:1088   .text._ZN14Fl_Text_Editor10kf_defaultEiPS_:0000000000000000 _ZN14Fl_Text_Editor10kf_defaultEiPS_
     /tmp/ccOKZeXM.s:1236   .text._ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22:0000000000000000 _ZN14Fl_Text_Editor9kf_deleteEiPS_.part.13.constprop.22
     /tmp/ccOKZeXM.s:1272   .text._ZN14Fl_Text_Editor9kf_deleteEiPS_:0000000000000000 _ZN14Fl_Text_Editor9kf_deleteEiPS_
     /tmp/ccOKZeXM.s:1369   .text._ZN14Fl_Text_Editor8kf_enterEiPS_:0000000000000000 _ZN14Fl_Text_Editor8kf_enterEiPS_
     /tmp/ccOKZeXM.s:1429   .text._ZN14Fl_Text_Editor6kf_cutEiPS_:0000000000000000 _ZN14Fl_Text_Editor6kf_cutEiPS_
     /tmp/ccOKZeXM.s:1482   .text._ZN14Fl_Text_Editor7kf_undoEiPS_:0000000000000000 _ZN14Fl_Text_Editor7kf_undoEiPS_
     /tmp/ccOKZeXM.s:1580   .text._ZN14Fl_Text_Editor12kf_backspaceEiPS_:0000000000000000 _ZN14Fl_Text_Editor12kf_backspaceEiPS_
     /tmp/ccOKZeXM.s:1680   .text._ZN14Fl_Text_EditorD0Ev:0000000000000000 _ZN14Fl_Text_EditorD0Ev
     /tmp/ccOKZeXM.s:1768   .text._ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE:0000000000000000 _ZN14Fl_Text_Editor24add_default_key_bindingsEPPNS_11Key_BindingE
     /tmp/ccOKZeXM.s:3552   .rodata._ZL20default_key_bindings:0000000000000000 _ZL20default_key_bindings
     /tmp/ccOKZeXM.s:1877   .text._ZN14Fl_Text_EditorC2EiiiiPKc:0000000000000000 _ZN14Fl_Text_EditorC2EiiiiPKc
     /tmp/ccOKZeXM.s:1877   .text._ZN14Fl_Text_EditorC2EiiiiPKc:0000000000000000 _ZN14Fl_Text_EditorC1EiiiiPKc
     /tmp/ccOKZeXM.s:1944   .text._ZN14Fl_Text_Editor18bound_key_functionEiiPNS_11Key_BindingE:0000000000000000 _ZN14Fl_Text_Editor18bound_key_functionEiiPNS_11Key_BindingE
     /tmp/ccOKZeXM.s:1996   .text._ZN14Fl_Text_Editor23remove_all_key_bindingsEPPNS_11Key_BindingE:0000000000000000 _ZN14Fl_Text_Editor23remove_all_key_bindingsEPPNS_11Key_BindingE
     /tmp/ccOKZeXM.s:2058   .text._ZN14Fl_Text_Editor18remove_key_bindingEiiPPNS_11Key_BindingE:0000000000000000 _ZN14Fl_Text_Editor18remove_key_bindingEiiPPNS_11Key_BindingE
     /tmp/ccOKZeXM.s:2125   .text._ZN14Fl_Text_Editor15add_key_bindingEiiPFiiPS_EPPNS_11Key_BindingE:0000000000000000 _ZN14Fl_Text_Editor15add_key_bindingEiiPFiiPS_EPPNS_11Key_BindingE
     /tmp/ccOKZeXM.s:2199   .text._ZN14Fl_Text_Editor12kf_meta_moveEiPS_:0000000000000000 _ZN14Fl_Text_Editor12kf_meta_moveEiPS_
     /tmp/ccOKZeXM.s:2380   .text._ZN14Fl_Text_Editor11kf_m_s_moveEiPS_:0000000000000000 _ZN14Fl_Text_Editor11kf_m_s_moveEiPS_
     /tmp/ccOKZeXM.s:2420   .text._ZN14Fl_Text_Editor7kf_homeEiPS_:0000000000000000 _ZN14Fl_Text_Editor7kf_homeEiPS_
     /tmp/ccOKZeXM.s:2445   .text._ZN14Fl_Text_Editor6kf_endEiPS_:0000000000000000 _ZN14Fl_Text_Editor6kf_endEiPS_
     /tmp/ccOKZeXM.s:2470   .text._ZN14Fl_Text_Editor7kf_leftEiPS_:0000000000000000 _ZN14Fl_Text_Editor7kf_leftEiPS_
     /tmp/ccOKZeXM.s:2495   .text._ZN14Fl_Text_Editor5kf_upEiPS_:0000000000000000 _ZN14Fl_Text_Editor5kf_upEiPS_
     /tmp/ccOKZeXM.s:2520   .text._ZN14Fl_Text_Editor8kf_rightEiPS_:0000000000000000 _ZN14Fl_Text_Editor8kf_rightEiPS_
     /tmp/ccOKZeXM.s:2545   .text._ZN14Fl_Text_Editor7kf_downEiPS_:0000000000000000 _ZN14Fl_Text_Editor7kf_downEiPS_
     /tmp/ccOKZeXM.s:2570   .text._ZN14Fl_Text_Editor10kf_page_upEiPS_:0000000000000000 _ZN14Fl_Text_Editor10kf_page_upEiPS_
     /tmp/ccOKZeXM.s:2595   .text._ZN14Fl_Text_Editor12kf_page_downEiPS_:0000000000000000 _ZN14Fl_Text_Editor12kf_page_downEiPS_
     /tmp/ccOKZeXM.s:2620   .text._ZN14Fl_Text_Editor10handle_keyEv:0000000000000000 _ZN14Fl_Text_Editor10handle_keyEv
     /tmp/ccOKZeXM.s:3702   .bss._ZN14Fl_Text_Editor19global_key_bindingsE:0000000000000000 _ZN14Fl_Text_Editor19global_key_bindingsE
     /tmp/ccOKZeXM.s:2892   .text._ZN14Fl_Text_Editor17maybe_do_callbackEv:0000000000000000 _ZN14Fl_Text_Editor17maybe_do_callbackEv
     /tmp/ccOKZeXM.s:2939   .text._ZN14Fl_Text_Editor6handleEi:0000000000000000 _ZN14Fl_Text_Editor6handleEi
     /tmp/ccOKZeXM.s:3512   .bss._ZZN14Fl_Text_Editor6handleEiE12dndCursorPos:0000000000000000 _ZZN14Fl_Text_Editor6handleEiE12dndCursorPos
     /tmp/ccOKZeXM.s:3519   .rodata._ZTS14Fl_Text_Editor:0000000000000000 _ZTS14Fl_Text_Editor
     /tmp/ccOKZeXM.s:3526   .rodata._ZTI14Fl_Text_Editor:0000000000000000 _ZTI14Fl_Text_Editor
                           .group:0000000000000000 _ZN14Fl_Text_EditorD5Ev
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
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
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
                           .group:0000000000000000 wm4.Fl_Text_Buffer.H.23.23ca40b81d0e4426426f8da147d89937
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157

UNDEFINED SYMBOLS
_ZN15Fl_Text_Display15insert_positionEi
_ZN14Fl_Text_Buffer16remove_selectionEv
_ZN14Fl_Text_Buffer8unselectEv
_ZN2Fl4copyEPKcii
_ZNK14Fl_Text_Buffer10line_startEi
_ZN15Fl_Text_Display20show_insert_positionEv
_ZN15Fl_Text_Display9move_downEv
_ZNK14Fl_Text_Buffer8line_endEi
_ZN15Fl_Text_Display9move_leftEv
_ZN15Fl_Text_Display7move_upEv
_ZN15Fl_Text_Display10move_rightEv
_ZN14Fl_Text_Buffer14selection_textEv
free
strlen
_ZN14Fl_Text_Buffer6selectEii
_Z15fl_text_drag_meiP15Fl_Text_Display
_ZNK15Fl_Text_Display11count_linesEiib
_ZN15Fl_Text_Display6scrollEii
_ZN15Fl_Text_Display13previous_wordEv
_ZN15Fl_Text_Display9next_wordEv
_ZN2Fl5pasteER9Fl_Widgeti
_ZN9Fl_Widget11do_callbackEPS_Pv
_ZdlPv
_ZN15Fl_Text_DisplayD2Ev
__ctype_b_loc
_ZN15Fl_Text_Display10overstrikeEPKc
_ZN15Fl_Text_Display6insertEPKc
__stack_chk_fail
_ZNK14Fl_Text_Buffer9next_charEi
_ZN14Fl_Text_Buffer4undoEPi
_Znwm
_ZN15Fl_Text_DisplayC2EiiiiPKc
_ZN2Fl7composeERi
_ZN2Fl8e_lengthE
_ZN2Fl6e_textE
_ZN2Fl7e_stateE
_ZN2Fl8e_keysymE
_ZN2Fl6optionENS_9Fl_OptionE
_ZN2Fl5focusEP9Fl_Widget
_ZN15Fl_Text_Display11show_cursorEi
_ZN2Fl3e_yE
_ZN2Fl3e_xE
_ZNK15Fl_Text_Display14xy_to_positionEiii
_ZN9Fl_Widget6redrawEv
_ZN15Fl_Text_Display6handleEi
_ZN9Fl_Widget13test_shortcutEv
_ZNK9Fl_Widget8active_rEv
_ZN2Fl13test_shortcutEj
_ZNK9Fl_Widget6windowEv
_ZN2Fl11belowmouse_E
_ZN9Fl_Window6cursorE9Fl_Cursor
_ZN8Fl_Group6handleEi
_Z7fl_beepi
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI15Fl_Text_Display
_ZN15Fl_Text_Display4drawEv
_ZN15Fl_Text_Display6resizeEiiii
_ZN9Fl_Widget4showEv
_ZN9Fl_Widget4hideEv
