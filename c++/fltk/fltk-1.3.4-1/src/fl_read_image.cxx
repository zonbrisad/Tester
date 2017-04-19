   1              		.file	"fl_read_image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  12              	.Ltext_cold0:
  13              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  14              		.weak	_ZN9Fl_Widget12as_gl_windowEv
  16              	_ZN9Fl_Widget12as_gl_windowEv:
  17              	.LFB99:
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
  19              		.loc 1 1012 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 1012 0
  23 0000 31C0     		xorl	%eax, %eax
  24 0002 C3       		ret
  25              		.cfi_endproc
  26              	.LFE99:
  28              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
  29              	.LCOLDE0:
  30              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowEv,comdat
  31              	.LHOTE0:
  32              		.section	.text.unlikely._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  33              		.align 2
  34              	.LCOLDB1:
  35              		.section	.text._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  36              	.LHOTB1:
  37              		.align 2
  38              		.p2align 4,,15
  39              		.weak	_ZN9Fl_Window9as_windowEv
  41              	_ZN9Fl_Window9as_windowEv:
  42              	.LFB180:
  43              		.file 2 "fltk-1.3.4-1/FL/Fl_Window.H"
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
 392:fltk-1.3.4-1/FL/Fl_Window.H **** 
 393:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 394:fltk-1.3.4-1/FL/Fl_Window.H ****     Undoes the effect of a previous resize() or show() so that the next time
 395:fltk-1.3.4-1/FL/Fl_Window.H ****     show() is called the window manager is free to position the window.
 396:fltk-1.3.4-1/FL/Fl_Window.H **** 
 397:fltk-1.3.4-1/FL/Fl_Window.H ****     This is for Forms compatibility only.
 398:fltk-1.3.4-1/FL/Fl_Window.H **** 
 399:fltk-1.3.4-1/FL/Fl_Window.H ****     \deprecated please use force_position(0) instead
 400:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 401:fltk-1.3.4-1/FL/Fl_Window.H ****   void free_position()	{clear_flag(FORCE_POSITION);}
 402:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 403:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets the allowable range the user can resize this window to.
 404:fltk-1.3.4-1/FL/Fl_Window.H ****     This only works for top-level windows.
 405:fltk-1.3.4-1/FL/Fl_Window.H ****     <UL>
 406:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>\p minw and \p minh are the smallest the window can be.
 407:fltk-1.3.4-1/FL/Fl_Window.H **** 	Either value must be greater than 0.</LI>
 408:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>\p maxw and \p maxh are the largest the window can be. If either is
 409:fltk-1.3.4-1/FL/Fl_Window.H **** 	<I>equal</I> to the minimum then you cannot resize in that direction.
 410:fltk-1.3.4-1/FL/Fl_Window.H **** 	If either is zero  then FLTK picks a maximum size in that direction
 411:fltk-1.3.4-1/FL/Fl_Window.H **** 	such that the window will fill the screen.</LI>
 412:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>\p dw and \p dh are size increments.  The  window will be constrained
 413:fltk-1.3.4-1/FL/Fl_Window.H **** 	to widths of minw + N * dw,  where N is any non-negative integer.
 414:fltk-1.3.4-1/FL/Fl_Window.H **** 	If these are less or equal to 1 they are ignored (this is ignored
 415:fltk-1.3.4-1/FL/Fl_Window.H **** 	on WIN32).</LI>
 416:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>\p aspect is a flag that indicates that the window should preserve its
 417:fltk-1.3.4-1/FL/Fl_Window.H **** 	aspect ratio.  This only works if both the maximum and minimum have
 418:fltk-1.3.4-1/FL/Fl_Window.H **** 	the same aspect ratio (ignored on WIN32 and by many X window managers).
 419:fltk-1.3.4-1/FL/Fl_Window.H **** 	</LI>
 420:fltk-1.3.4-1/FL/Fl_Window.H ****     </UL>
 421:fltk-1.3.4-1/FL/Fl_Window.H **** 
 422:fltk-1.3.4-1/FL/Fl_Window.H ****     If this function is not called, FLTK tries to figure out the range
 423:fltk-1.3.4-1/FL/Fl_Window.H ****     from the setting of resizable():
 424:fltk-1.3.4-1/FL/Fl_Window.H ****     <UL>
 425:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>If resizable() is NULL (this is the  default) then the window cannot
 426:fltk-1.3.4-1/FL/Fl_Window.H **** 	be resized and the resize border and max-size control will not be
 427:fltk-1.3.4-1/FL/Fl_Window.H **** 	displayed for the window.</LI>
 428:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>If either dimension of resizable() is less than 100, then that is
 429:fltk-1.3.4-1/FL/Fl_Window.H **** 	considered the minimum size.  Otherwise the resizable() has a minimum
 430:fltk-1.3.4-1/FL/Fl_Window.H **** 	size of 100.</LI>
 431:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>If either dimension of resizable() is zero, then that is also the
 432:fltk-1.3.4-1/FL/Fl_Window.H **** 	maximum size (so the window cannot resize in that direction).</LI>
 433:fltk-1.3.4-1/FL/Fl_Window.H ****     </UL>
 434:fltk-1.3.4-1/FL/Fl_Window.H **** 
 435:fltk-1.3.4-1/FL/Fl_Window.H ****     It is undefined what happens if the current size does not fit in the
 436:fltk-1.3.4-1/FL/Fl_Window.H ****     constraints passed to size_range().
 437:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 438:fltk-1.3.4-1/FL/Fl_Window.H ****   void size_range(int minw, int minh, int maxw=0, int maxh=0, int dw=0, int dh=0, int aspect=0) {
 439:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minw   = minw;
 440:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minh   = minh;
 441:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxw   = maxw;
 442:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxh   = maxh;
 443:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dw     = dw;
 444:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dh     = dh;
 445:fltk-1.3.4-1/FL/Fl_Window.H ****     this->aspect = aspect;
 446:fltk-1.3.4-1/FL/Fl_Window.H ****     size_range_();
 447:fltk-1.3.4-1/FL/Fl_Window.H ****   }
 448:fltk-1.3.4-1/FL/Fl_Window.H **** 
 449:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::label(const char*)   */
 450:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* label() const	{return Fl_Widget::label();}
 451:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  See void Fl_Window::iconlabel(const char*)   */
 452:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* iconlabel() const	{return iconlabel_;}
 453:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Sets the window title bar label. */
 454:fltk-1.3.4-1/FL/Fl_Window.H ****   void label(const char*);
 455:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Sets the icon label. */
 456:fltk-1.3.4-1/FL/Fl_Window.H ****   void iconlabel(const char*);
 457:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Sets the icon label. */
 458:fltk-1.3.4-1/FL/Fl_Window.H ****   void label(const char* label, const char* iconlabel); // platform dependent
 459:fltk-1.3.4-1/FL/Fl_Window.H ****   void copy_label(const char* a);
 460:fltk-1.3.4-1/FL/Fl_Window.H **** 
 461:fltk-1.3.4-1/FL/Fl_Window.H ****   static void default_xclass(const char*);
 462:fltk-1.3.4-1/FL/Fl_Window.H ****   static const char *default_xclass();
 463:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* xclass() const;
 464:fltk-1.3.4-1/FL/Fl_Window.H ****   void xclass(const char* c);
 465:fltk-1.3.4-1/FL/Fl_Window.H **** 
 466:fltk-1.3.4-1/FL/Fl_Window.H ****   static void default_icon(const Fl_RGB_Image*);
 467:fltk-1.3.4-1/FL/Fl_Window.H ****   static void default_icons(const Fl_RGB_Image*[], int);
 468:fltk-1.3.4-1/FL/Fl_Window.H ****   void icon(const Fl_RGB_Image*);
 469:fltk-1.3.4-1/FL/Fl_Window.H ****   void icons(const Fl_RGB_Image*[], int);
 470:fltk-1.3.4-1/FL/Fl_Window.H **** 
 471:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
 472:fltk-1.3.4-1/FL/Fl_Window.H ****   static void default_icons(HICON big_icon, HICON small_icon);
 473:fltk-1.3.4-1/FL/Fl_Window.H ****   void icons(HICON big_icon, HICON small_icon);
 474:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 475:fltk-1.3.4-1/FL/Fl_Window.H **** 
 476:fltk-1.3.4-1/FL/Fl_Window.H ****   /* for legacy compatibility */
 477:fltk-1.3.4-1/FL/Fl_Window.H ****   const void* icon() const;
 478:fltk-1.3.4-1/FL/Fl_Window.H ****   void icon(const void * ic);
 479:fltk-1.3.4-1/FL/Fl_Window.H **** 
 480:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 481:fltk-1.3.4-1/FL/Fl_Window.H ****     Returns non-zero if show() has been called (but not hide()
 482:fltk-1.3.4-1/FL/Fl_Window.H ****     ). You can tell if a window is iconified with (w->shown()
 483:fltk-1.3.4-1/FL/Fl_Window.H ****     && !w->visible()).
 484:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 485:fltk-1.3.4-1/FL/Fl_Window.H ****   int shown() {return i != 0;}
 486:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 487:fltk-1.3.4-1/FL/Fl_Window.H ****     Puts the window on the screen. Usually (on X) this has the side
 488:fltk-1.3.4-1/FL/Fl_Window.H ****     effect of opening the display.
 489:fltk-1.3.4-1/FL/Fl_Window.H **** 
 490:fltk-1.3.4-1/FL/Fl_Window.H ****     If the window is already shown then it is restored and raised to the
 491:fltk-1.3.4-1/FL/Fl_Window.H ****     top.  This is really convenient because your program can call show()
 492:fltk-1.3.4-1/FL/Fl_Window.H ****     at any time, even if the window is already up.  It also means that
 493:fltk-1.3.4-1/FL/Fl_Window.H ****     show() serves the purpose of raise() in other toolkits.
 494:fltk-1.3.4-1/FL/Fl_Window.H **** 
 495:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window::show(int argc, char **argv) is used for top-level
 496:fltk-1.3.4-1/FL/Fl_Window.H ****     windows and allows standard arguments to be parsed from the
 497:fltk-1.3.4-1/FL/Fl_Window.H ****     command-line.
 498:fltk-1.3.4-1/FL/Fl_Window.H **** 
 499:fltk-1.3.4-1/FL/Fl_Window.H ****     \note For some obscure reasons Fl_Window::show() resets the current
 500:fltk-1.3.4-1/FL/Fl_Window.H ****     group by calling Fl_Group::current(0). The comments in the code
 501:fltk-1.3.4-1/FL/Fl_Window.H ****     say "get rid of very common user bug: forgot end()". Although
 502:fltk-1.3.4-1/FL/Fl_Window.H ****     this is true it may have unwanted side effects if you show() an
 503:fltk-1.3.4-1/FL/Fl_Window.H ****     unrelated window (maybe for an error message or warning) while
 504:fltk-1.3.4-1/FL/Fl_Window.H ****     building a window or any other group widget.
 505:fltk-1.3.4-1/FL/Fl_Window.H **** 
 506:fltk-1.3.4-1/FL/Fl_Window.H ****     \todo Check if we can remove resetting the current group in a later
 507:fltk-1.3.4-1/FL/Fl_Window.H ****     FLTK version (after 1.3.x). This may break "already broken" programs
 508:fltk-1.3.4-1/FL/Fl_Window.H ****     though if they rely on this "feature".
 509:fltk-1.3.4-1/FL/Fl_Window.H **** 
 510:fltk-1.3.4-1/FL/Fl_Window.H ****     \see Fl_Window::show(int argc, char **argv)
 511:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 512:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void show();
 513:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 514:fltk-1.3.4-1/FL/Fl_Window.H ****     Removes the window from the screen.  If the window is already hidden or
 515:fltk-1.3.4-1/FL/Fl_Window.H ****     has not been shown then this does nothing and is harmless.
 516:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 517:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void hide();
 518:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 519:fltk-1.3.4-1/FL/Fl_Window.H ****     Puts the window on the screen and parses command-line arguments.
 520:fltk-1.3.4-1/FL/Fl_Window.H **** 
 521:fltk-1.3.4-1/FL/Fl_Window.H ****     Usually (on X) this has the side effect of opening the display.
 522:fltk-1.3.4-1/FL/Fl_Window.H **** 
 523:fltk-1.3.4-1/FL/Fl_Window.H ****     This form should be used for top-level windows, at least for the
 524:fltk-1.3.4-1/FL/Fl_Window.H ****     first (main) window. It allows standard arguments to be parsed
 525:fltk-1.3.4-1/FL/Fl_Window.H ****     from the command-line. You can use \p argc and \p argv from
 526:fltk-1.3.4-1/FL/Fl_Window.H ****     main(int argc, char **argv) for this call.
 527:fltk-1.3.4-1/FL/Fl_Window.H **** 
 528:fltk-1.3.4-1/FL/Fl_Window.H ****     The first call also sets up some system-specific internal
 529:fltk-1.3.4-1/FL/Fl_Window.H ****     variables like the system colors.
 530:fltk-1.3.4-1/FL/Fl_Window.H **** 
 531:fltk-1.3.4-1/FL/Fl_Window.H ****     \todo explain which system parameters are set up.
 532:fltk-1.3.4-1/FL/Fl_Window.H **** 
 533:fltk-1.3.4-1/FL/Fl_Window.H ****     \param argc command-line argument count, usually from main()
 534:fltk-1.3.4-1/FL/Fl_Window.H ****     \param argv command-line argument vector, usually from main()
 535:fltk-1.3.4-1/FL/Fl_Window.H **** 
 536:fltk-1.3.4-1/FL/Fl_Window.H ****     \see virtual void Fl_Window::show()
 537:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 538:fltk-1.3.4-1/FL/Fl_Window.H ****   void show(int argc, char **argv);
 539:fltk-1.3.4-1/FL/Fl_Window.H **** 
 540:fltk-1.3.4-1/FL/Fl_Window.H ****   // Enables synchronous show(), docs in Fl_Window.cxx
 541:fltk-1.3.4-1/FL/Fl_Window.H ****   void wait_for_expose();
 542:fltk-1.3.4-1/FL/Fl_Window.H **** 
 543:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 544:fltk-1.3.4-1/FL/Fl_Window.H ****     Makes the window completely fill one or more screens, without any
 545:fltk-1.3.4-1/FL/Fl_Window.H ****     window manager border visible.  You must use fullscreen_off() to
 546:fltk-1.3.4-1/FL/Fl_Window.H ****     undo this. 
 547:fltk-1.3.4-1/FL/Fl_Window.H **** 
 548:fltk-1.3.4-1/FL/Fl_Window.H ****     \note On some platforms, this can result in the keyboard being
 549:fltk-1.3.4-1/FL/Fl_Window.H ****     grabbed. The window may also be recreated, meaning hide() and
 550:fltk-1.3.4-1/FL/Fl_Window.H ****     show() will be called.
 551:fltk-1.3.4-1/FL/Fl_Window.H **** 
 552:fltk-1.3.4-1/FL/Fl_Window.H ****     \see void Fl_Window::fullscreen_screens()
 553:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 554:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen();
 555:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 556:fltk-1.3.4-1/FL/Fl_Window.H ****     Turns off any side effects of fullscreen()
 557:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 558:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_off();
 559:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 560:fltk-1.3.4-1/FL/Fl_Window.H ****     Turns off any side effects of fullscreen() and does 
 561:fltk-1.3.4-1/FL/Fl_Window.H ****     resize(x,y,w,h).
 562:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 563:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_off(int X,int Y,int W,int H);
 564:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 565:fltk-1.3.4-1/FL/Fl_Window.H ****     Returns non zero if FULLSCREEN flag is set, 0 otherwise. 
 566:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 567:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int fullscreen_active() const { return flags() & FULLSCREEN; }
 568:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 569:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets which screens should be used when this window is in fullscreen
 570:fltk-1.3.4-1/FL/Fl_Window.H ****     mode. The window will be resized to the top of the screen with index
 571:fltk-1.3.4-1/FL/Fl_Window.H ****     \p top, the bottom of the screen with index \p bottom, etc. 
 572:fltk-1.3.4-1/FL/Fl_Window.H **** 
 573:fltk-1.3.4-1/FL/Fl_Window.H ****     If this method is never called, or if any argument is < 0, then the
 574:fltk-1.3.4-1/FL/Fl_Window.H ****     window will be resized to fill the screen it is currently on.
 575:fltk-1.3.4-1/FL/Fl_Window.H **** 
 576:fltk-1.3.4-1/FL/Fl_Window.H ****     \see void Fl_Window::fullscreen()
 577:fltk-1.3.4-1/FL/Fl_Window.H ****     */
 578:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_screens(int top, int bottom, int left, int right);
 579:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 580:fltk-1.3.4-1/FL/Fl_Window.H ****     Iconifies the window.  If you call this when shown() is false
 581:fltk-1.3.4-1/FL/Fl_Window.H ****     it will show() it as an icon.  If the window is already
 582:fltk-1.3.4-1/FL/Fl_Window.H ****     iconified this does nothing.
 583:fltk-1.3.4-1/FL/Fl_Window.H **** 
 584:fltk-1.3.4-1/FL/Fl_Window.H ****     Call show() to restore the window.
 585:fltk-1.3.4-1/FL/Fl_Window.H **** 
 586:fltk-1.3.4-1/FL/Fl_Window.H ****     When a window is iconified/restored (either by these calls or by the
 587:fltk-1.3.4-1/FL/Fl_Window.H ****     user) the handle() method is called with FL_HIDE and 
 588:fltk-1.3.4-1/FL/Fl_Window.H ****     FL_SHOW events and visible() is turned on and off.
 589:fltk-1.3.4-1/FL/Fl_Window.H **** 
 590:fltk-1.3.4-1/FL/Fl_Window.H ****     There is no way to control what is drawn in the icon except with the
 591:fltk-1.3.4-1/FL/Fl_Window.H ****     string passed to Fl_Window::xclass().  You should not rely on
 592:fltk-1.3.4-1/FL/Fl_Window.H ****     window managers displaying the icons.
 593:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 594:fltk-1.3.4-1/FL/Fl_Window.H ****   void iconize();
 595:fltk-1.3.4-1/FL/Fl_Window.H **** 
 596:fltk-1.3.4-1/FL/Fl_Window.H ****   int x_root() const ;
 597:fltk-1.3.4-1/FL/Fl_Window.H ****   int y_root() const ;
 598:fltk-1.3.4-1/FL/Fl_Window.H **** 
 599:fltk-1.3.4-1/FL/Fl_Window.H ****  static Fl_Window *current();
 600:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 601:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets things up so that the drawing functions in <FL/fl_draw.H> will go
 602:fltk-1.3.4-1/FL/Fl_Window.H ****     into this window. This is useful for incremental update of windows, such
 603:fltk-1.3.4-1/FL/Fl_Window.H ****     as in an idle callback, which will make your program behave much better
 604:fltk-1.3.4-1/FL/Fl_Window.H ****     if it draws a slow graphic. <B>Danger: incremental update is very hard to
 605:fltk-1.3.4-1/FL/Fl_Window.H ****     debug and maintain!</B>
 606:fltk-1.3.4-1/FL/Fl_Window.H **** 
 607:fltk-1.3.4-1/FL/Fl_Window.H ****     This method only works for the Fl_Window and Fl_Gl_Window derived classes.
 608:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 609:fltk-1.3.4-1/FL/Fl_Window.H ****   void make_current();
 610:fltk-1.3.4-1/FL/Fl_Window.H **** 
 611:fltk-1.3.4-1/FL/Fl_Window.H ****   // Note: Doxygen docs in Fl_Widget.H to avoid redundancy.
 612:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual Fl_Window* as_window() { return this; }
  44              		.loc 2 612 0
  45              		.cfi_startproc
  46              	.LVL1:
  47              		.loc 2 612 0
  48 0000 4889F8   		movq	%rdi, %rax
  49 0003 C3       		ret
  50              		.cfi_endproc
  51              	.LFE180:
  53              		.section	.text.unlikely._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  54              	.LCOLDE1:
  55              		.section	.text._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  56              	.LHOTE1:
  57              		.section	.text.unlikely.xgetimageerrhandler,"ax",@progbits
  58              	.LCOLDB2:
  59              		.section	.text.xgetimageerrhandler,"ax",@progbits
  60              	.LHOTB2:
  61              		.p2align 4,,15
  63              	xgetimageerrhandler:
  64              	.LFB486:
  65              		.file 3 "fltk-1.3.4-1/src/fl_read_image.cxx"
   1:fltk-1.3.4-1/src/fl_read_image.cxx ****    1              		.file	"fl_read_image.cxx"
   2:fltk-1.3.4-1/src/fl_read_image.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/fl_read_image.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/fl_read_image.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
   5:fltk-1.3.4-1/src/fl_read_image.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/fl_read_image.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/fl_read_image.cxx ****    7              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
   8:fltk-1.3.4-1/src/fl_read_image.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/fl_read_image.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/fl_read_image.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/fl_read_image.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
  12:fltk-1.3.4-1/src/fl_read_image.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/fl_read_image.cxx ****   13              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
  14:fltk-1.3.4-1/src/fl_read_image.cxx ****   14              		.weak	_ZN9Fl_Widget12as_gl_windowEv
  15:fltk-1.3.4-1/src/fl_read_image.cxx ****   16              	_ZN9Fl_Widget12as_gl_windowEv:
  16:fltk-1.3.4-1/src/fl_read_image.cxx ****   17              	.LFB99:
  17:fltk-1.3.4-1/src/fl_read_image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/fl_read_image.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/fl_read_image.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/fl_read_image.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/fl_read_image.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/fl_read_image.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/fl_read_image.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/fl_read_image.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/fl_read_image.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/fl_read_image.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/fl_read_image.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/fl_read_image.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/fl_read_image.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/fl_read_image.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/fl_read_image.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/fl_read_image.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/fl_read_image.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/fl_read_image.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/fl_read_image.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/fl_read_image.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/fl_read_image.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/fl_read_image.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/fl_read_image.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/fl_read_image.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/fl_read_image.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/fl_read_image.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/fl_read_image.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/fl_read_image.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/fl_read_image.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/fl_read_image.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/fl_read_image.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/fl_read_image.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/fl_read_image.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/fl_read_image.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/fl_read_image.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/fl_read_image.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/fl_read_image.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/fl_read_image.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/fl_read_image.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/fl_read_image.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/fl_read_image.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/fl_read_image.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/fl_read_image.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/fl_read_image.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/fl_read_image.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/fl_read_image.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/fl_read_image.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/fl_read_image.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/fl_read_image.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/fl_read_image.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/fl_read_image.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/fl_read_image.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/fl_read_image.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/fl_read_image.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/fl_read_image.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/fl_read_image.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/fl_read_image.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/fl_read_image.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/fl_read_image.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/fl_read_image.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/fl_read_image.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/fl_read_image.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/fl_read_image.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/fl_read_image.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/fl_read_image.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/fl_read_image.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/fl_read_image.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/fl_read_image.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/fl_read_image.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/fl_read_image.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/fl_read_image.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/fl_read_image.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/fl_read_image.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/fl_read_image.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/fl_read_image.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/fl_read_image.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/fl_read_image.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/fl_read_image.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/fl_read_image.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/fl_read_image.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/fl_read_image.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/fl_read_image.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/fl_read_image.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/fl_read_image.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/fl_read_image.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/fl_read_image.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/fl_read_image.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/fl_read_image.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/fl_read_image.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/fl_read_image.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/fl_read_image.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/fl_read_image.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/fl_read_image.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/fl_read_image.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/fl_read_image.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/fl_read_image.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/fl_read_image.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/fl_read_image.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/fl_read_image.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/fl_read_image.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/fl_read_image.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/fl_read_image.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/fl_read_image.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/fl_read_image.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/fl_read_image.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/fl_read_image.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/fl_read_image.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/fl_read_image.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/fl_read_image.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/fl_read_image.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/fl_read_image.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/fl_read_image.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/fl_read_image.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/fl_read_image.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/fl_read_image.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/fl_read_image.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/fl_read_image.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/fl_read_image.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/fl_read_image.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/fl_read_image.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/fl_read_image.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/fl_read_image.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/fl_read_image.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/fl_read_image.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/fl_read_image.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/fl_read_image.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/fl_read_image.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/fl_read_image.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/fl_read_image.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/fl_read_image.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/fl_read_image.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/fl_read_image.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/fl_read_image.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/fl_read_image.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/fl_read_image.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/fl_read_image.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/fl_read_image.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/fl_read_image.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/fl_read_image.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/fl_read_image.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/fl_read_image.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/fl_read_image.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/fl_read_image.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/fl_read_image.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/fl_read_image.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/fl_read_image.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/fl_read_image.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/fl_read_image.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/fl_read_image.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/fl_read_image.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/fl_read_image.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/fl_read_image.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/fl_read_image.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/fl_read_image.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/fl_read_image.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/fl_read_image.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/fl_read_image.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/fl_read_image.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/fl_read_image.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/fl_read_image.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/fl_read_image.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/fl_read_image.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/fl_read_image.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/fl_read_image.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 181:fltk-1.3.4-1/src/fl_read_image.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/fl_read_image.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/fl_read_image.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/fl_read_image.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/fl_read_image.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/fl_read_image.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/fl_read_image.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/fl_read_image.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/fl_read_image.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/fl_read_image.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/fl_read_image.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/fl_read_image.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/fl_read_image.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/fl_read_image.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/fl_read_image.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/fl_read_image.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/fl_read_image.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/fl_read_image.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/fl_read_image.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/fl_read_image.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/fl_read_image.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/fl_read_image.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/fl_read_image.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/fl_read_image.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/fl_read_image.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/fl_read_image.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/fl_read_image.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/fl_read_image.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/fl_read_image.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/fl_read_image.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/fl_read_image.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/fl_read_image.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/fl_read_image.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/fl_read_image.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
  66              		.loc 3 214 0
  67              		.cfi_startproc
  68              	.LVL2:
 215:fltk-1.3.4-1/src/fl_read_image.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/fl_read_image.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
  69              		.loc 3 216 0
  70 0000 31C0     		xorl	%eax, %eax
  71 0002 C3       		ret
  72              		.cfi_endproc
  73              	.LFE486:
  75              		.section	.text.unlikely.xgetimageerrhandler
  76              	.LCOLDE2:
  77              		.section	.text.xgetimageerrhandler
  78              	.LHOTE2:
  79              		.section	.text.unlikely._ZL18read_win_rectanglePhiiiii,"ax",@progbits
  80              	.LCOLDB3:
  81              		.section	.text._ZL18read_win_rectanglePhiiiii,"ax",@progbits
  82              	.LHOTB3:
  83              		.p2align 4,,15
  85              	_ZL18read_win_rectanglePhiiiii:
  86              	.LFB487:
 217:fltk-1.3.4-1/src/fl_read_image.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/fl_read_image.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/fl_read_image.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/fl_read_image.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/fl_read_image.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
  87              		.loc 3 221 0
  88              		.cfi_startproc
  89              	.LVL3:
  90 0000 4157     		pushq	%r15
  91              		.cfi_def_cfa_offset 16
  92              		.cfi_offset 15, -16
  93 0002 4156     		pushq	%r14
  94              		.cfi_def_cfa_offset 24
  95              		.cfi_offset 14, -24
  96 0004 4155     		pushq	%r13
  97              		.cfi_def_cfa_offset 32
  98              		.cfi_offset 13, -32
  99 0006 4154     		pushq	%r12
 100              		.cfi_def_cfa_offset 40
 101              		.cfi_offset 12, -40
 102 0008 55       		pushq	%rbp
 103              		.cfi_def_cfa_offset 48
 104              		.cfi_offset 6, -48
 105 0009 53       		pushq	%rbx
 106              		.cfi_def_cfa_offset 56
 107              		.cfi_offset 3, -56
 108 000a 89CD     		movl	%ecx, %ebp
 109 000c 4489C3   		movl	%r8d, %ebx
 110 000f 4881EC78 		subq	$77944, %rsp
 110      300100
 111              		.cfi_def_cfa_offset 78000
 112              		.loc 3 221 0
 113 0016 64488B04 		movq	%fs:40, %rax
 113      25280000 
 113      00
 114 001f 48898424 		movq	%rax, 77928(%rsp)
 114      68300100 
 115 0027 31C0     		xorl	%eax, %eax
 116              	.LVL4:
 222:fltk-1.3.4-1/src/fl_read_image.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/fl_read_image.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/fl_read_image.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/fl_read_image.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/fl_read_image.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/fl_read_image.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/fl_read_image.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/fl_read_image.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/fl_read_image.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/fl_read_image.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/fl_read_image.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/fl_read_image.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/fl_read_image.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/fl_read_image.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/fl_read_image.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/fl_read_image.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/fl_read_image.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/fl_read_image.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/fl_read_image.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/fl_read_image.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/fl_read_image.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/fl_read_image.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/fl_read_image.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/fl_read_image.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/fl_read_image.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/fl_read_image.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 117              		.loc 3 247 0
 118 0029 85C9     		testl	%ecx, %ecx
 221:fltk-1.3.4-1/src/fl_read_image.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 119              		.loc 3 221 0
 120 002b 48897C24 		movq	%rdi, 32(%rsp)
 120      20
 121 0030 89742408 		movl	%esi, 8(%rsp)
 122 0034 89542410 		movl	%edx, 16(%rsp)
 123 0038 44894C24 		movl	%r9d, 24(%rsp)
 123      18
 124              		.loc 3 247 0
 125 003d 0F886F0C 		js	.L139
 125      0000
 126              	.LVL5:
 127              	.LBB184:
 248:fltk-1.3.4-1/src/fl_read_image.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/fl_read_image.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/fl_read_image.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/fl_read_image.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/fl_read_image.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/fl_read_image.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/fl_read_image.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/fl_read_image.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/fl_read_image.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/fl_read_image.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/fl_read_image.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/fl_read_image.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/fl_read_image.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/fl_read_image.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/fl_read_image.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/fl_read_image.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/fl_read_image.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 128              		.loc 3 264 0
 129 0043 488B3D00 		movq	fl_window(%rip), %rdi
 129      000000
 130              	.LVL6:
 131 004a E8000000 		call	_Z7fl_findm
 131      00
 132              	.LVL7:
 265:fltk-1.3.4-1/src/fl_read_image.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 133              		.loc 3 265 0
 134 004f 4885C0   		testq	%rax, %rax
 135 0052 0F84860C 		je	.L93
 135      0000
 136              	.LVL8:
 137              	.L92:
 266:fltk-1.3.4-1/src/fl_read_image.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 138              		.loc 3 266 0
 139 0058 48630500 		movslq	fl_screen(%rip), %rax
 139      000000
 267:fltk-1.3.4-1/src/fl_read_image.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 140              		.loc 3 267 0
 141 005f 488B3D00 		movq	fl_display(%rip), %rdi
 141      000000
 142 0066 488B3500 		movq	fl_window(%rip), %rsi
 142      000000
 266:fltk-1.3.4-1/src/fl_read_image.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 143              		.loc 3 266 0
 144 006d 48C1E007 		salq	$7, %rax
 145 0071 480387E8 		addq	232(%rdi), %rax
 145      000000
 146              		.loc 3 267 0
 147 0078 488B5010 		movq	16(%rax), %rdx
 148 007c 488D4424 		leaq	88(%rsp), %rax
 148      58
 149 0081 50       		pushq	%rax
 150              		.cfi_def_cfa_offset 78008
 151 0082 488D4424 		leaq	76(%rsp), %rax
 151      4C
 152 0087 50       		pushq	%rax
 153              		.cfi_def_cfa_offset 78016
 154 0088 448B4424 		movl	32(%rsp), %r8d
 154      20
 155 008d 8B4C2418 		movl	24(%rsp), %ecx
 156 0091 4C8D4C24 		leaq	80(%rsp), %r9
 156      50
 157 0096 E8000000 		call	XTranslateCoordinates
 157      00
 158              	.LVL9:
 268:fltk-1.3.4-1/src/fl_read_image.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/fl_read_image.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 159              		.loc 3 269 0
 160 009b 448B0500 		movl	fl_screen(%rip), %r8d
 160      000000
 161 00a2 488D5424 		leaq	96(%rsp), %rdx
 161      60
 162 00a7 488D7C24 		leaq	88(%rsp), %rdi
 162      58
 163 00ac 488D4C24 		leaq	100(%rsp), %rcx
 163      64
 164 00b1 488D7424 		leaq	92(%rsp), %rsi
 164      5C
 165 00b6 E8000000 		call	_ZN2Fl11screen_xywhERiS0_S0_S0_i
 165      00
 166              	.LVL10:
 167              	.LBB185:
 270:fltk-1.3.4-1/src/fl_read_image.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/fl_read_image.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 168              		.loc 3 271 0
 169 00bb 8B7C2450 		movl	80(%rsp), %edi
 170 00bf 8B542458 		movl	88(%rsp), %edx
 171 00c3 415A     		popq	%r10
 172              		.cfi_def_cfa_offset 78008
 173 00c5 415B     		popq	%r11
 174              		.cfi_def_cfa_offset 78000
 175 00c7 39D7     		cmpl	%edx, %edi
 176 00c9 0F8DD102 		jge	.L140
 176      0000
 177              	.LVL11:
 178              	.LBB186:
 179              	.LBB187:
 180              	.LBB188:
 197:fltk-1.3.4-1/src/fl_read_image.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 181              		.loc 3 197 0
 182 00cf 89D0     		movl	%edx, %eax
 183 00d1 448B4C24 		movl	80(%rsp), %r9d
 183      50
 200:fltk-1.3.4-1/src/fl_read_image.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 184              		.loc 3 200 0
 185 00d6 4189ED   		movl	%ebp, %r13d
 197:fltk-1.3.4-1/src/fl_read_image.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 186              		.loc 3 197 0
 187 00d9 29F8     		subl	%edi, %eax
 188 00db 8B4C244C 		movl	76(%rsp), %ecx
 189 00df 448B4424 		movl	84(%rsp), %r8d
 189      54
 200:fltk-1.3.4-1/src/fl_read_image.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 190              		.loc 3 200 0
 191 00e4 4129C5   		subl	%eax, %r13d
 192 00e7 8B742444 		movl	68(%rsp), %esi
 197:fltk-1.3.4-1/src/fl_read_image.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 193              		.loc 3 197 0
 194 00eb 89442430 		movl	%eax, 48(%rsp)
 195              	.LVL12:
 202:fltk-1.3.4-1/src/fl_read_image.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 196              		.loc 3 202 0
 197 00ef 428D3C2A 		leal	(%rdx,%r13), %edi
 198              	.LVL13:
 199 00f3 4101D1   		addl	%edx, %r9d
 200 00f6 4101C8   		addl	%ecx, %r8d
 201              	.LVL14:
 202 00f9 4439CF   		cmpl	%r9d, %edi
 203 00fc 89F0     		movl	%esi, %eax
 204              	.LVL15:
 205 00fe 0F8FD005 		jg	.L9
 205      0000
 206              	.LVL16:
 207              	.LBE188:
 208              	.LBE187:
 209              	.LBB193:
 210              	.LBB194:
 194:fltk-1.3.4-1/src/fl_read_image.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 211              		.loc 3 194 0
 212 0104 4531F6   		xorl	%r14d, %r14d
 192:fltk-1.3.4-1/src/fl_read_image.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 213              		.loc 3 192 0
 214 0107 39F1     		cmpl	%esi, %ecx
 215 0109 0F8FD805 		jg	.L141
 215      0000
 216              	.LVL17:
 217 010f 90       		.p2align 4,,10
 218              		.p2align 3
 219              	.L13:
 200:fltk-1.3.4-1/src/fl_read_image.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 220              		.loc 3 200 0
 221 0110 4189DF   		movl	%ebx, %r15d
 205:fltk-1.3.4-1/src/fl_read_image.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 222              		.loc 3 205 0
 223 0113 4489C7   		movl	%r8d, %edi
 200:fltk-1.3.4-1/src/fl_read_image.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 224              		.loc 3 200 0
 225 0116 4529F7   		subl	%r14d, %r15d
 226              	.LVL18:
 205:fltk-1.3.4-1/src/fl_read_image.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 227              		.loc 3 205 0
 228 0119 29C7     		subl	%eax, %edi
 202:fltk-1.3.4-1/src/fl_read_image.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 229              		.loc 3 202 0
 230 011b 418D1407 		leal	(%r15,%rax), %edx
 205:fltk-1.3.4-1/src/fl_read_image.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 231              		.loc 3 205 0
 232 011f 4439C2   		cmpl	%r8d, %edx
 233 0122 440F4FFF 		cmovg	%edi, %r15d
 234              	.LVL19:
 235              	.LBE194:
 236              	.LBE193:
 272:fltk-1.3.4-1/src/fl_read_image.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/fl_read_image.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/fl_read_image.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 275:fltk-1.3.4-1/src/fl_read_image.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/fl_read_image.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/fl_read_image.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/fl_read_image.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/fl_read_image.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/fl_read_image.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/fl_read_image.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/fl_read_image.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/fl_read_image.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 237              		.loc 3 283 0
 238 0126 4585FF   		testl	%r15d, %r15d
 239 0129 0F8EF90B 		jle	.L97
 239      0000
 240 012f 4585ED   		testl	%r13d, %r13d
 241 0132 0F8EF00B 		jle	.L97
 241      0000
 284:fltk-1.3.4-1/src/fl_read_image.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/fl_read_image.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/fl_read_image.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 242              		.loc 3 286 0
 243 0138 4C8B2500 		movq	fl_visual(%rip), %r12
 243      000000
 244 013f 418B5424 		movl	20(%r12), %edx
 244      14
 245 0144 8D4A07   		leal	7(%rdx), %ecx
 246 0147 85D2     		testl	%edx, %edx
 247 0149 89542434 		movl	%edx, 52(%rsp)
 248 014d 0F49CA   		cmovns	%edx, %ecx
 249 0150 89C8     		movl	%ecx, %eax
 250              	.LVL20:
 251 0152 C1E91F   		shrl	$31, %ecx
 252 0155 C1F803   		sarl	$3, %eax
 253 0158 01C8     		addl	%ecx, %eax
 254 015a 83E001   		andl	$1, %eax
 255 015d 29C8     		subl	%ecx, %eax
 256 015f 8D0CC2   		leal	(%rdx,%rax,8), %ecx
 257              	.LVL21:
 287:fltk-1.3.4-1/src/fl_read_image.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 258              		.loc 3 287 0
 259 0162 8D7907   		leal	7(%rcx), %edi
 260 0165 85C9     		testl	%ecx, %ecx
 261 0167 894C2428 		movl	%ecx, 40(%rsp)
 262 016b 0F49F9   		cmovns	%ecx, %edi
 263 016e C1FF03   		sarl	$3, %edi
 264 0171 0FAFFD   		imull	%ebp, %edi
 265 0174 0FAFFB   		imull	%ebx, %edi
 266 0177 4863FF   		movslq	%edi, %rdi
 267 017a E8000000 		call	malloc
 267      00
 268              	.LVL22:
 269 017f 48894424 		movq	%rax, 56(%rsp)
 269      38
 270              	.LVL23:
 288:fltk-1.3.4-1/src/fl_read_image.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/fl_read_image.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 271              		.loc 3 289 0
 272 0184 6A00     		pushq	$0
 273              		.cfi_def_cfa_offset 78008
 274 0186 4531C0   		xorl	%r8d, %r8d
 275 0189 8B4C2430 		movl	48(%rsp), %ecx
 276 018d 488B3D00 		movq	fl_display(%rip), %rdi
 276      000000
 277 0194 4989C1   		movq	%rax, %r9
 278 0197 51       		pushq	%rcx
 279              		.cfi_def_cfa_offset 78016
 280 0198 53       		pushq	%rbx
 281              		.cfi_def_cfa_offset 78024
 282 0199 B9020000 		movl	$2, %ecx
 282      00
 283 019e 55       		pushq	%rbp
 284              		.cfi_def_cfa_offset 78032
 285 019f 8B542454 		movl	84(%rsp), %edx
 286 01a3 498B3424 		movq	(%r12), %rsi
 287 01a7 E8000000 		call	XCreateImage
 287      00
 288              	.LVL24:
 290:fltk-1.3.4-1/src/fl_read_image.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 289              		.loc 3 290 0
 290 01ac 4883C420 		addq	$32, %rsp
 291              		.cfi_def_cfa_offset 78000
 292 01b0 4885C0   		testq	%rax, %rax
 289:fltk-1.3.4-1/src/fl_read_image.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 293              		.loc 3 289 0
 294 01b3 4989C4   		movq	%rax, %r12
 295              	.LVL25:
 296              		.loc 3 290 0
 297 01b6 0F84BC0B 		je	.L142
 297      0000
 291:fltk-1.3.4-1/src/fl_read_image.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/fl_read_image.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/fl_read_image.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/fl_read_image.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/fl_read_image.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 298              		.loc 3 295 0
 299 01bc BF000000 		movl	$xgetimageerrhandler, %edi
 299      00
 300 01c1 E8000000 		call	XSetErrorHandler
 300      00
 301              	.LVL26:
 296:fltk-1.3.4-1/src/fl_read_image.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/fl_read_image.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 302              		.loc 3 297 0
 303 01c6 8B742430 		movl	48(%rsp), %esi
 304 01ca 8B542408 		movl	8(%rsp), %edx
 305 01ce 4883EC08 		subq	$8, %rsp
 306              		.cfi_def_cfa_offset 78008
 307 01d2 8B4C2418 		movl	24(%rsp), %ecx
 295:fltk-1.3.4-1/src/fl_read_image.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 308              		.loc 3 295 0
 309 01d6 48894424 		movq	%rax, 48(%rsp)
 309      30
 310              	.LVL27:
 311              		.loc 3 297 0
 312 01db 4589E8   		movl	%r13d, %r8d
 313 01de 4156     		pushq	%r14
 314              		.cfi_def_cfa_offset 78016
 315 01e0 488B3D00 		movq	fl_display(%rip), %rdi
 315      000000
 316 01e7 4589F9   		movl	%r15d, %r9d
 317 01ea 56       		pushq	%rsi
 318              		.cfi_def_cfa_offset 78024
 319 01eb 01F2     		addl	%esi, %edx
 320 01ed 488B3500 		movq	fl_window(%rip), %rsi
 320      000000
 321 01f4 4154     		pushq	%r12
 322              		.cfi_def_cfa_offset 78032
 323 01f6 6A02     		pushq	$2
 324              		.cfi_def_cfa_offset 78040
 325 01f8 4401F1   		addl	%r14d, %ecx
 326 01fb 6AFF     		pushq	$-1
 327              		.cfi_def_cfa_offset 78048
 328 01fd E8000000 		call	XGetSubImage
 328      00
 329              	.LVL28:
 298:fltk-1.3.4-1/src/fl_read_image.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 330              		.loc 3 298 0
 331 0202 4883C430 		addq	$48, %rsp
 332              		.cfi_def_cfa_offset 78000
 333 0206 488B7C24 		movq	40(%rsp), %rdi
 333      28
 297:fltk-1.3.4-1/src/fl_read_image.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 334              		.loc 3 297 0
 335 020b 4989C5   		movq	%rax, %r13
 336              	.LVL29:
 337              		.loc 3 298 0
 338 020e E8000000 		call	XSetErrorHandler
 338      00
 339              	.LVL30:
 299:fltk-1.3.4-1/src/fl_read_image.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 340              		.loc 3 299 0
 341 0213 4D85ED   		testq	%r13, %r13
 342 0216 0F84750B 		je	.L143
 342      0000
 343              	.LVL31:
 344              	.L12:
 345              	.LBE186:
 346              	.LBE185:
 347              	.LBE184:
 300:fltk-1.3.4-1/src/fl_read_image.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/fl_read_image.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/fl_read_image.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/fl_read_image.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 304:fltk-1.3.4-1/src/fl_read_image.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/fl_read_image.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/fl_read_image.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/fl_read_image.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/fl_read_image.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 309:fltk-1.3.4-1/src/fl_read_image.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/fl_read_image.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/fl_read_image.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/fl_read_image.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/fl_read_image.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 314:fltk-1.3.4-1/src/fl_read_image.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/fl_read_image.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/fl_read_image.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/fl_read_image.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/fl_read_image.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/fl_read_image.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/fl_read_image.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/fl_read_image.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/fl_read_image.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 323:fltk-1.3.4-1/src/fl_read_image.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 324:fltk-1.3.4-1/src/fl_read_image.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/fl_read_image.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/fl_read_image.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 327:fltk-1.3.4-1/src/fl_read_image.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 348              		.loc 3 327 0
 349 021c 837C2418 		cmpl	$1, 24(%rsp)
 349      01
 350 0221 4519ED   		sbbl	%r13d, %r13d
 351 0224 4183C504 		addl	$4, %r13d
 352              	.LVL32:
 328:fltk-1.3.4-1/src/fl_read_image.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/fl_read_image.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 330:fltk-1.3.4-1/src/fl_read_image.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 353              		.loc 3 330 0
 354 0228 0FAFDD   		imull	%ebp, %ebx
 355              	.LVL33:
 356 022b 48837C24 		cmpq	$0, 32(%rsp)
 356      2000
 357 0231 0F840F0B 		je	.L22
 357      0000
 358 0237 410FAFDD 		imull	%r13d, %ebx
 359 023b 4863D3   		movslq	%ebx, %rdx
 360              	.LVL34:
 361              	.L23:
 362              	.LBB216:
 363              	.LBB217:
 364              		.file 4 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 365              		.loc 4 90 0
 366 023e 8B742418 		movl	24(%rsp), %esi
 367 0242 488B7C24 		movq	32(%rsp), %rdi
 367      20
 368 0247 E8000000 		call	memset
 368      00
 369              	.LVL35:
 370              	.LBE217:
 371              	.LBE216:
 331:fltk-1.3.4-1/src/fl_read_image.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/fl_read_image.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/fl_read_image.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/fl_read_image.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/fl_read_image.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 336:fltk-1.3.4-1/src/fl_read_image.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 372              		.loc 3 336 0
 373 024c 498B4424 		movq	56(%r12), %rax
 373      38
 374 0251 4885C0   		testq	%rax, %rax
 375 0254 0F859E04 		jne	.L24
 375      0000
 376              		.loc 3 336 0 is_stmt 0 discriminator 1
 377 025a 41837C24 		cmpl	$12, 48(%r12)
 377      300C
 337:fltk-1.3.4-1/src/fl_read_image.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 338:fltk-1.3.4-1/src/fl_read_image.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 378              		.loc 3 338 0 is_stmt 1 discriminator 1
 379 0260 488B3500 		movq	fl_visual(%rip), %rsi
 379      000000
 336:fltk-1.3.4-1/src/fl_read_image.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 380              		.loc 3 336 0 discriminator 1
 381 0267 7E2D     		jle	.L26
 382              		.loc 3 338 0
 383 0269 488B06   		movq	(%rsi), %rax
 384 026c 488B4018 		movq	24(%rax), %rax
 385 0270 49894424 		movq	%rax, 56(%r12)
 385      38
 339:fltk-1.3.4-1/src/fl_read_image.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 386              		.loc 3 339 0
 387 0275 488B16   		movq	(%rsi), %rdx
 340:fltk-1.3.4-1/src/fl_read_image.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/fl_read_image.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/fl_read_image.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/fl_read_image.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/fl_read_image.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/fl_read_image.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/fl_read_image.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/fl_read_image.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/fl_read_image.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/fl_read_image.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 350:fltk-1.3.4-1/src/fl_read_image.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/fl_read_image.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/fl_read_image.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/fl_read_image.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/fl_read_image.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 355:fltk-1.3.4-1/src/fl_read_image.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/fl_read_image.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/fl_read_image.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 388              		.loc 3 357 0
 389 0278 4885C0   		testq	%rax, %rax
 339:fltk-1.3.4-1/src/fl_read_image.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 390              		.loc 3 339 0
 391 027b 488B4A20 		movq	32(%rdx), %rcx
 392 027f 49894C24 		movq	%rcx, 64(%r12)
 392      40
 340:fltk-1.3.4-1/src/fl_read_image.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 393              		.loc 3 340 0
 394 0284 488B16   		movq	(%rsi), %rdx
 395 0287 488B5228 		movq	40(%rdx), %rdx
 396 028b 49895424 		movq	%rdx, 72(%r12)
 396      48
 397              		.loc 3 357 0
 398 0290 0F856C04 		jne	.L27
 398      0000
 399              	.L26:
 358:fltk-1.3.4-1/src/fl_read_image.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/fl_read_image.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 400              		.loc 3 359 0
 401 0296 488B06   		movq	(%rsi), %rax
 402 0299 8B4834   		movl	52(%rax), %ecx
 403              	.LVL36:
 360:fltk-1.3.4-1/src/fl_read_image.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/fl_read_image.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 404              		.loc 3 361 0
 405 029c 85C9     		testl	%ecx, %ecx
 406 029e 0F8EFC0A 		jle	.L28
 406      0000
 407 02a4 8D59FF   		leal	-1(%rcx), %ebx
 408              		.loc 3 361 0 is_stmt 0 discriminator 2
 409 02a7 31C0     		xorl	%eax, %eax
 410 02a9 488D7301 		leaq	1(%rbx), %rsi
 411              	.LVL37:
 412 02ad 0F1F00   		.p2align 4,,10
 413              		.p2align 3
 414              	.L30:
 415 02b0 4889C2   		movq	%rax, %rdx
 416 02b3 48C1E204 		salq	$4, %rdx
 417 02b7 48898414 		movq	%rax, 12384(%rsp,%rdx)
 417      60300000 
 418              	.LVL38:
 419 02bf 4883C001 		addq	$1, %rax
 420              	.LVL39:
 421 02c3 4839F0   		cmpq	%rsi, %rax
 422 02c6 75E8     		jne	.L30
 362:fltk-1.3.4-1/src/fl_read_image.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/fl_read_image.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 423              		.loc 3 363 0 is_stmt 1
 424 02c8 488B3500 		movq	fl_colormap(%rip), %rsi
 424      000000
 425 02cf 488B3D00 		movq	fl_display(%rip), %rdi
 425      000000
 426 02d6 488D9424 		leaq	12384(%rsp), %rdx
 426      60300000 
 427 02de 48C1E304 		salq	$4, %rbx
 428 02e2 E8000000 		call	XQueryColors
 428      00
 429              	.LVL40:
 430 02e7 488D8424 		leaq	12392(%rsp), %rax
 430      68300000 
 431 02ef 488D5424 		leaq	96(%rsp), %rdx
 431      60
 432 02f4 488DB41C 		leaq	12408(%rsp,%rbx), %rsi
 432      78300000 
 433              	.LVL41:
 434 02fc 0F1F4000 		.p2align 4,,10
 435              		.p2align 3
 436              	.L33:
 364:fltk-1.3.4-1/src/fl_read_image.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/fl_read_image.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/fl_read_image.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 437              		.loc 3 366 0 discriminator 2
 438 0300 0FB64801 		movzbl	1(%rax), %ecx
 439 0304 4883C010 		addq	$16, %rax
 440 0308 4883C203 		addq	$3, %rdx
 441 030c 884AFD   		movb	%cl, -3(%rdx)
 367:fltk-1.3.4-1/src/fl_read_image.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 442              		.loc 3 367 0 discriminator 2
 443 030f 0FB648F3 		movzbl	-13(%rax), %ecx
 444 0313 884AFE   		movb	%cl, -2(%rdx)
 368:fltk-1.3.4-1/src/fl_read_image.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 445              		.loc 3 368 0 discriminator 2
 446 0316 0FB648F5 		movzbl	-11(%rax), %ecx
 447 031a 884AFF   		movb	%cl, -1(%rdx)
 365:fltk-1.3.4-1/src/fl_read_image.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 448              		.loc 3 365 0 discriminator 2
 449 031d 4839F0   		cmpq	%rsi, %rax
 450 0320 75DE     		jne	.L33
 451              	.L32:
 452              	.LVL42:
 369:fltk-1.3.4-1/src/fl_read_image.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/fl_read_image.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/fl_read_image.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/fl_read_image.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 453              		.loc 3 372 0 discriminator 1
 454 0322 418B7C24 		movl	4(%r12), %edi
 454      04
 455 0327 85FF     		testl	%edi, %edi
 456 0329 0F8E6C01 		jle	.L58
 456      0000
 457 032f 410FAFED 		imull	%r13d, %ebp
 458              	.LVL43:
 373:fltk-1.3.4-1/src/fl_read_image.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/fl_read_image.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/fl_read_image.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/fl_read_image.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/fl_read_image.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/fl_read_image.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/fl_read_image.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/fl_read_image.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/fl_read_image.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/fl_read_image.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 459              		.loc 3 382 0
 460 0333 440FB67C 		movzbl	99(%rsp), %r15d
 460      2463
 383:fltk-1.3.4-1/src/fl_read_image.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 461              		.loc 3 383 0
 462 0339 0FB65C24 		movzbl	100(%rsp), %ebx
 462      64
 384:fltk-1.3.4-1/src/fl_read_image.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 463              		.loc 3 384 0
 464 033e 440FB65C 		movzbl	101(%rsp), %r11d
 464      2465
 385:fltk-1.3.4-1/src/fl_read_image.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/fl_read_image.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 465              		.loc 3 386 0
 466 0344 440FB654 		movzbl	96(%rsp), %r10d
 466      2460
 387:fltk-1.3.4-1/src/fl_read_image.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/fl_read_image.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467              		.loc 3 388 0
 468 034a 31FF     		xorl	%edi, %edi
 387:fltk-1.3.4-1/src/fl_read_image.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 469              		.loc 3 387 0
 470 034c 440FB64C 		movzbl	97(%rsp), %r9d
 470      2461
 471              		.loc 3 388 0
 472 0352 440FB644 		movzbl	98(%rsp), %r8d
 472      2462
 473 0358 4D63ED   		movslq	%r13d, %r13
 474 035b 4863C5   		movslq	%ebp, %rax
 475 035e 488B6C24 		movq	32(%rsp), %rbp
 475      20
 476 0363 48894424 		movq	%rax, 8(%rsp)
 476      08
 477              	.LVL44:
 478 0368 0F1F8400 		.p2align 4,,10
 478      00000000 
 479              		.p2align 3
 480              	.L59:
 373:fltk-1.3.4-1/src/fl_read_image.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 481              		.loc 3 373 0
 482 0370 418B5424 		movl	44(%r12), %edx
 482      2C
 374:fltk-1.3.4-1/src/fl_read_image.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 483              		.loc 3 374 0
 484 0375 4889E8   		movq	%rbp, %rax
 373:fltk-1.3.4-1/src/fl_read_image.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 485              		.loc 3 373 0
 486 0378 0FAFD7   		imull	%edi, %edx
 487 037b 4863D2   		movslq	%edx, %rdx
 488 037e 49035424 		addq	16(%r12), %rdx
 488      10
 489              	.LVL45:
 376:fltk-1.3.4-1/src/fl_read_image.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 490              		.loc 3 376 0
 491 0383 41837C24 		cmpl	$12, 48(%r12)
 491      300C
 492 0389 0F87F900 		ja	.L34
 492      0000
 493 038f 418B4C24 		movl	48(%r12), %ecx
 493      30
 494 0394 FF24CD00 		jmp	*.L36(,%rcx,8)
 494      000000
 495              		.section	.rodata._ZL18read_win_rectanglePhiiiii,"a",@progbits
 496              		.align 8
 497              		.align 4
 498              	.L36:
 499 0000 00000000 		.quad	.L34
 499      00000000 
 500 0008 00000000 		.quad	.L35
 500      00000000 
 501 0010 00000000 		.quad	.L37
 501      00000000 
 502 0018 00000000 		.quad	.L34
 502      00000000 
 503 0020 00000000 		.quad	.L38
 503      00000000 
 504 0028 00000000 		.quad	.L34
 504      00000000 
 505 0030 00000000 		.quad	.L34
 505      00000000 
 506 0038 00000000 		.quad	.L34
 506      00000000 
 507 0040 00000000 		.quad	.L39
 507      00000000 
 508 0048 00000000 		.quad	.L34
 508      00000000 
 509 0050 00000000 		.quad	.L34
 509      00000000 
 510 0058 00000000 		.quad	.L34
 510      00000000 
 511 0060 00000000 		.quad	.L40
 511      00000000 
 512              		.section	.text._ZL18read_win_rectanglePhiiiii
 513              	.LVL46:
 514 039b 0F1F4400 		.p2align 4,,10
 514      00
 515              		.p2align 3
 516              	.L140:
 517              	.LBB218:
 518              	.LBB210:
 271:fltk-1.3.4-1/src/fl_read_image.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 519              		.loc 3 271 0 discriminator 2
 520 03a0 03542450 		addl	80(%rsp), %edx
 521 03a4 8B442444 		movl	68(%rsp), %eax
 522 03a8 8B4C244C 		movl	76(%rsp), %ecx
 523 03ac 39C8     		cmpl	%ecx, %eax
 524 03ae 4189D1   		movl	%edx, %r9d
 525 03b1 0F8C0209 		jl	.L7
 525      0000
 271:fltk-1.3.4-1/src/fl_read_image.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 526              		.loc 3 271 0 is_stmt 0 discriminator 3
 527 03b7 8D543D00 		leal	0(%rbp,%rdi), %edx
 528 03bb 4439CA   		cmpl	%r9d, %edx
 529 03be 0F8FFC02 		jg	.L144
 529      0000
 271:fltk-1.3.4-1/src/fl_read_image.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 530              		.loc 3 271 0 discriminator 4
 531 03c4 034C2454 		addl	84(%rsp), %ecx
 532 03c8 8D1418   		leal	(%rax,%rbx), %edx
 533 03cb 39CA     		cmpl	%ecx, %edx
 534 03cd 4189C8   		movl	%ecx, %r8d
 535 03d0 0F8E0809 		jle	.L93
 535      0000
 536              	.LVL47:
 537              	.LBB203:
 538              	.LBB197:
 539              	.LBB189:
 200:fltk-1.3.4-1/src/fl_read_image.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 540              		.loc 3 200 0 is_stmt 1
 541 03d6 4189ED   		movl	%ebp, %r13d
 542              	.LVL48:
 194:fltk-1.3.4-1/src/fl_read_image.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 543              		.loc 3 194 0
 544 03d9 C7442430 		movl	$0, 48(%rsp)
 544      00000000 
 545              	.LBE189:
 546              	.LBE197:
 547              	.LBB198:
 548              	.LBB195:
 549 03e1 4531F6   		xorl	%r14d, %r14d
 550 03e4 E927FDFF 		jmp	.L13
 550      FF
 551              	.LVL49:
 552 03e9 0F1F8000 		.p2align 4,,10
 552      000000
 553              		.p2align 3
 554              	.L40:
 555              	.LBE195:
 556              	.LBE198:
 557              	.LBE203:
 558              	.LBE210:
 559              	.LBE218:
 389:fltk-1.3.4-1/src/fl_read_image.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/fl_read_image.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/fl_read_image.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/fl_read_image.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/fl_read_image.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/fl_read_image.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/fl_read_image.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 396:fltk-1.3.4-1/src/fl_read_image.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/fl_read_image.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 398:fltk-1.3.4-1/src/fl_read_image.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/fl_read_image.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/fl_read_image.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/fl_read_image.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/fl_read_image.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/fl_read_image.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/fl_read_image.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 405:fltk-1.3.4-1/src/fl_read_image.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/fl_read_image.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/fl_read_image.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/fl_read_image.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/fl_read_image.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/fl_read_image.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/fl_read_image.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 412:fltk-1.3.4-1/src/fl_read_image.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/fl_read_image.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/fl_read_image.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/fl_read_image.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/fl_read_image.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 417:fltk-1.3.4-1/src/fl_read_image.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/fl_read_image.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/fl_read_image.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/fl_read_image.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/fl_read_image.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 422:fltk-1.3.4-1/src/fl_read_image.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 423:fltk-1.3.4-1/src/fl_read_image.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 424:fltk-1.3.4-1/src/fl_read_image.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/fl_read_image.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/fl_read_image.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/fl_read_image.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/fl_read_image.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/fl_read_image.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/fl_read_image.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/fl_read_image.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/fl_read_image.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/fl_read_image.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 434:fltk-1.3.4-1/src/fl_read_image.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/fl_read_image.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/fl_read_image.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/fl_read_image.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/fl_read_image.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/fl_read_image.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/fl_read_image.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/fl_read_image.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/fl_read_image.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/fl_read_image.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 444:fltk-1.3.4-1/src/fl_read_image.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/fl_read_image.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/fl_read_image.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/fl_read_image.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 448:fltk-1.3.4-1/src/fl_read_image.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/fl_read_image.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/fl_read_image.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 451:fltk-1.3.4-1/src/fl_read_image.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/fl_read_image.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 560              		.loc 3 452 0
 561 03f0 458B3424 		movl	(%r12), %r14d
 562              	.LVL50:
 453:fltk-1.3.4-1/src/fl_read_image.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 563              		.loc 3 453 0
 564 03f4 4585F6   		testl	%r14d, %r14d
 565 03f7 0F8E8B00 		jle	.L34
 565      0000
 566 03fd 31C9     		xorl	%ecx, %ecx
 567 03ff EB46     		jmp	.L57
 568              	.LVL51:
 569              		.p2align 4,,10
 570 0401 0F1F8000 		.p2align 3
 570      000000
 571              	.L145:
 454:fltk-1.3.4-1/src/fl_read_image.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/fl_read_image.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/fl_read_image.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 572              		.loc 3 456 0
 573 0408 0FB60A   		movzbl	(%rdx), %ecx
 574 040b 89CE     		movl	%ecx, %esi
 575 040d 0FB64A01 		movzbl	1(%rdx), %ecx
 576 0411 C1E604   		sall	$4, %esi
 577 0414 C1F904   		sarl	$4, %ecx
 578 0417 09F1     		orl	%esi, %ecx
 579              	.LVL52:
 457:fltk-1.3.4-1/src/fl_read_image.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/fl_read_image.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 459:fltk-1.3.4-1/src/fl_read_image.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/fl_read_image.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/fl_read_image.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 580              		.loc 3 461 0
 581 0419 4863C9   		movslq	%ecx, %rcx
 582 041c 488D0C49 		leaq	(%rcx,%rcx,2), %rcx
 583              	.LVL53:
 584 0420 0FB6740C 		movzbl	96(%rsp,%rcx), %esi
 584      60
 585              	.LVL54:
 586 0425 408830   		movb	%sil, (%rax)
 587              	.LVL55:
 462:fltk-1.3.4-1/src/fl_read_image.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 588              		.loc 3 462 0
 589 0428 0FB6740C 		movzbl	97(%rsp,%rcx), %esi
 589      61
 590 042d 40887001 		movb	%sil, 1(%rax)
 463:fltk-1.3.4-1/src/fl_read_image.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 591              		.loc 3 463 0
 592 0431 0FB64C0C 		movzbl	98(%rsp,%rcx), %ecx
 592      62
 593 0436 884802   		movb	%cl, 2(%rax)
 452:fltk-1.3.4-1/src/fl_read_image.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 594              		.loc 3 452 0
 595 0439 4C01E8   		addq	%r13, %rax
 596              	.LVL56:
 453:fltk-1.3.4-1/src/fl_read_image.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 597              		.loc 3 453 0
 598 043c 4183EE01 		subl	$1, %r14d
 599              	.LVL57:
 464:fltk-1.3.4-1/src/fl_read_image.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/fl_read_image.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/fl_read_image.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 600              		.loc 3 466 0
 601 0440 B9040000 		movl	$4, %ecx
 601      00
 602              	.LVL58:
 453:fltk-1.3.4-1/src/fl_read_image.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 603              		.loc 3 453 0
 604 0445 7441     		je	.L34
 605              	.LVL59:
 606              	.L57:
 455:fltk-1.3.4-1/src/fl_read_image.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 607              		.loc 3 455 0
 608 0447 85C9     		testl	%ecx, %ecx
 609 0449 74BD     		je	.L145
 610 044b 0FB74A01 		movzwl	1(%rdx), %ecx
 467:fltk-1.3.4-1/src/fl_read_image.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/fl_read_image.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/fl_read_image.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 611              		.loc 3 469 0
 612 044f 4883C203 		addq	$3, %rdx
 613              	.LVL60:
 614 0453 66C1C108 		rolw	$8, %cx
 615              	.LVL61:
 461:fltk-1.3.4-1/src/fl_read_image.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 616              		.loc 3 461 0
 617 0457 81E1FF0F 		andl	$4095, %ecx
 617      0000
 618              	.LVL62:
 619 045d 488D0C49 		leaq	(%rcx,%rcx,2), %rcx
 620 0461 0FB6740C 		movzbl	96(%rsp,%rcx), %esi
 620      60
 621 0466 408830   		movb	%sil, (%rax)
 462:fltk-1.3.4-1/src/fl_read_image.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 622              		.loc 3 462 0
 623 0469 0FB6740C 		movzbl	97(%rsp,%rcx), %esi
 623      61
 624 046e 40887001 		movb	%sil, 1(%rax)
 463:fltk-1.3.4-1/src/fl_read_image.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 625              		.loc 3 463 0
 626 0472 0FB64C0C 		movzbl	98(%rsp,%rcx), %ecx
 626      62
 627 0477 884802   		movb	%cl, 2(%rax)
 628              	.LVL63:
 468:fltk-1.3.4-1/src/fl_read_image.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 629              		.loc 3 468 0
 630 047a 31C9     		xorl	%ecx, %ecx
 631              	.LVL64:
 452:fltk-1.3.4-1/src/fl_read_image.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 632              		.loc 3 452 0
 633 047c 4C01E8   		addq	%r13, %rax
 634              	.LVL65:
 453:fltk-1.3.4-1/src/fl_read_image.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 635              		.loc 3 453 0
 636 047f 4183EE01 		subl	$1, %r14d
 637              	.LVL66:
 638 0483 75C2     		jne	.L57
 639              	.LVL67:
 640              		.p2align 4,,10
 641 0485 0F1F00   		.p2align 3
 642              	.L34:
 372:fltk-1.3.4-1/src/fl_read_image.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 643              		.loc 3 372 0 discriminator 2
 644 0488 83C701   		addl	$1, %edi
 645              	.LVL68:
 646 048b 48036C24 		addq	8(%rsp), %rbp
 646      08
 647              	.LVL69:
 648 0490 41397C24 		cmpl	%edi, 4(%r12)
 648      04
 649 0495 0F8FD5FE 		jg	.L59
 649      FFFF
 650              	.LVL70:
 651              	.L58:
 470:fltk-1.3.4-1/src/fl_read_image.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/fl_read_image.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/fl_read_image.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/fl_read_image.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/fl_read_image.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/fl_read_image.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/fl_read_image.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/fl_read_image.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/fl_read_image.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/fl_read_image.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/fl_read_image.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/fl_read_image.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/fl_read_image.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/fl_read_image.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/fl_read_image.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/fl_read_image.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/fl_read_image.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/fl_read_image.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/fl_read_image.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/fl_read_image.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/fl_read_image.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/fl_read_image.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/fl_read_image.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/fl_read_image.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/fl_read_image.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/fl_read_image.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/fl_read_image.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/fl_read_image.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/fl_read_image.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/fl_read_image.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/fl_read_image.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/fl_read_image.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/fl_read_image.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/fl_read_image.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/fl_read_image.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/fl_read_image.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/fl_read_image.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/fl_read_image.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/fl_read_image.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/fl_read_image.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/fl_read_image.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/fl_read_image.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/fl_read_image.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/fl_read_image.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/fl_read_image.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/fl_read_image.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/fl_read_image.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/fl_read_image.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/fl_read_image.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/fl_read_image.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/fl_read_image.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/fl_read_image.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/fl_read_image.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/fl_read_image.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/fl_read_image.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/fl_read_image.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/fl_read_image.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/fl_read_image.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/fl_read_image.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/fl_read_image.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/fl_read_image.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/fl_read_image.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/fl_read_image.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/fl_read_image.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/fl_read_image.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/fl_read_image.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/fl_read_image.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/fl_read_image.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/fl_read_image.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/fl_read_image.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/fl_read_image.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/fl_read_image.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/fl_read_image.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/fl_read_image.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/fl_read_image.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/fl_read_image.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/fl_read_image.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/fl_read_image.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/fl_read_image.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/fl_read_image.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/fl_read_image.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/fl_read_image.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/fl_read_image.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/fl_read_image.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/fl_read_image.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/fl_read_image.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/fl_read_image.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/fl_read_image.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/fl_read_image.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/fl_read_image.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/fl_read_image.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/fl_read_image.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/fl_read_image.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/fl_read_image.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/fl_read_image.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/fl_read_image.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/fl_read_image.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 567:fltk-1.3.4-1/src/fl_read_image.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/fl_read_image.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/fl_read_image.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/fl_read_image.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/fl_read_image.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/fl_read_image.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/fl_read_image.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 574:fltk-1.3.4-1/src/fl_read_image.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/fl_read_image.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/fl_read_image.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/fl_read_image.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/fl_read_image.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/fl_read_image.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/fl_read_image.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/fl_read_image.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/fl_read_image.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/fl_read_image.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/fl_read_image.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/fl_read_image.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/fl_read_image.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/fl_read_image.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 588:fltk-1.3.4-1/src/fl_read_image.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/fl_read_image.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/fl_read_image.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/fl_read_image.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/fl_read_image.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/fl_read_image.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/fl_read_image.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/fl_read_image.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/fl_read_image.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/fl_read_image.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/fl_read_image.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/fl_read_image.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/fl_read_image.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/fl_read_image.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/fl_read_image.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/fl_read_image.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/fl_read_image.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/fl_read_image.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/fl_read_image.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/fl_read_image.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/fl_read_image.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/fl_read_image.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/fl_read_image.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/fl_read_image.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/fl_read_image.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/fl_read_image.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/fl_read_image.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/fl_read_image.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/fl_read_image.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/fl_read_image.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/fl_read_image.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/fl_read_image.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/fl_read_image.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/fl_read_image.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/fl_read_image.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/fl_read_image.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/fl_read_image.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 652              		.loc 3 624 0
 653 049b 4C89E7   		movq	%r12, %rdi
 654 049e 41FF5424 		call	*96(%r12)
 654      60
 655              	.LVL71:
 625:fltk-1.3.4-1/src/fl_read_image.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/fl_read_image.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 656              		.loc 3 626 0
 657 04a3 488B4424 		movq	32(%rsp), %rax
 657      20
 658              	.L11:
 627:fltk-1.3.4-1/src/fl_read_image.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 659              		.loc 3 627 0 discriminator 3
 660 04a8 488B9C24 		movq	77928(%rsp), %rbx
 660      68300100 
 661 04b0 6448331C 		xorq	%fs:40, %rbx
 661      25280000 
 661      00
 662 04b9 0F850109 		jne	.L146
 662      0000
 663              		.loc 3 627 0 is_stmt 0
 664 04bf 4881C478 		addq	$77944, %rsp
 664      300100
 665              		.cfi_remember_state
 666              		.cfi_def_cfa_offset 56
 667 04c6 5B       		popq	%rbx
 668              		.cfi_def_cfa_offset 48
 669 04c7 5D       		popq	%rbp
 670              		.cfi_def_cfa_offset 40
 671 04c8 415C     		popq	%r12
 672              		.cfi_def_cfa_offset 32
 673 04ca 415D     		popq	%r13
 674              		.cfi_def_cfa_offset 24
 675 04cc 415E     		popq	%r14
 676              		.cfi_def_cfa_offset 16
 677 04ce 415F     		popq	%r15
 678              		.cfi_def_cfa_offset 8
 679 04d0 C3       		ret
 680              	.LVL72:
 681              		.p2align 4,,10
 682 04d1 0F1F8000 		.p2align 3
 682      000000
 683              	.L39:
 684              		.cfi_restore_state
 442:fltk-1.3.4-1/src/fl_read_image.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 685              		.loc 3 442 0 is_stmt 1
 686 04d8 418B0C24 		movl	(%r12), %ecx
 687              	.LVL73:
 443:fltk-1.3.4-1/src/fl_read_image.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 688              		.loc 3 443 0
 689 04dc 85C9     		testl	%ecx, %ecx
 690 04de 7EA8     		jle	.L34
 691 04e0 83E901   		subl	$1, %ecx
 692              	.LVL74:
 693 04e3 488D740A 		leaq	1(%rdx,%rcx), %rsi
 693      01
 694              	.LVL75:
 695 04e8 0F1F8400 		.p2align 4,,10
 695      00000000 
 696              		.p2align 3
 697              	.L54:
 445:fltk-1.3.4-1/src/fl_read_image.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 698              		.loc 3 445 0
 699 04f0 0FB60A   		movzbl	(%rdx), %ecx
 442:fltk-1.3.4-1/src/fl_read_image.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 700              		.loc 3 442 0
 701 04f3 4883C201 		addq	$1, %rdx
 702              	.LVL76:
 445:fltk-1.3.4-1/src/fl_read_image.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 703              		.loc 3 445 0
 704 04f7 488D0C49 		leaq	(%rcx,%rcx,2), %rcx
 705 04fb 0FB64C0C 		movzbl	96(%rsp,%rcx), %ecx
 705      60
 706 0500 8808     		movb	%cl, (%rax)
 446:fltk-1.3.4-1/src/fl_read_image.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 707              		.loc 3 446 0
 708 0502 0FB64AFF 		movzbl	-1(%rdx), %ecx
 709 0506 488D0C49 		leaq	(%rcx,%rcx,2), %rcx
 710 050a 0FB64C0C 		movzbl	97(%rsp,%rcx), %ecx
 710      61
 711 050f 884801   		movb	%cl, 1(%rax)
 447:fltk-1.3.4-1/src/fl_read_image.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 712              		.loc 3 447 0
 713 0512 0FB64AFF 		movzbl	-1(%rdx), %ecx
 714 0516 488D0C49 		leaq	(%rcx,%rcx,2), %rcx
 715 051a 0FB64C0C 		movzbl	98(%rsp,%rcx), %ecx
 715      62
 716 051f 884802   		movb	%cl, 2(%rax)
 442:fltk-1.3.4-1/src/fl_read_image.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 717              		.loc 3 442 0
 718 0522 4C01E8   		addq	%r13, %rax
 719              	.LVL77:
 443:fltk-1.3.4-1/src/fl_read_image.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 720              		.loc 3 443 0
 721 0525 4839F2   		cmpq	%rsi, %rdx
 722 0528 75C6     		jne	.L54
 372:fltk-1.3.4-1/src/fl_read_image.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 723              		.loc 3 372 0
 724 052a 83C701   		addl	$1, %edi
 725              	.LVL78:
 726 052d 48036C24 		addq	8(%rsp), %rbp
 726      08
 727              	.LVL79:
 728 0532 41397C24 		cmpl	%edi, 4(%r12)
 728      04
 729 0537 0F8F33FE 		jg	.L59
 729      FFFF
 730 053d E959FFFF 		jmp	.L58
 730      FF
 731              	.LVL80:
 732              		.p2align 4,,10
 733 0542 660F1F44 		.p2align 3
 733      0000
 734              	.L38:
 422:fltk-1.3.4-1/src/fl_read_image.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 735              		.loc 3 422 0
 736 0548 418B3424 		movl	(%r12), %esi
 737              	.LVL81:
 423:fltk-1.3.4-1/src/fl_read_image.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 738              		.loc 3 423 0
 739 054c 85F6     		testl	%esi, %esi
 740 054e 0F8E34FF 		jle	.L34
 740      FFFF
 741 0554 41BE0400 		movl	$4, %r14d
 741      0000
 742 055a 897C2410 		movl	%edi, 16(%rsp)
 743 055e EB3B     		jmp	.L53
 744              	.LVL82:
 745              		.p2align 4,,10
 746              		.p2align 3
 747              	.L51:
 428:fltk-1.3.4-1/src/fl_read_image.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 748              		.loc 3 428 0
 749 0560 83E10F   		andl	$15, %ecx
 750              	.LVL83:
 432:fltk-1.3.4-1/src/fl_read_image.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 751              		.loc 3 432 0
 752 0563 4585F6   		testl	%r14d, %r14d
 428:fltk-1.3.4-1/src/fl_read_image.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 753              		.loc 3 428 0
 754 0566 488D0C49 		leaq	(%rcx,%rcx,2), %rcx
 755 056a 0FB67C0C 		movzbl	96(%rsp,%rcx), %edi
 755      60
 756 056f 408838   		movb	%dil, (%rax)
 429:fltk-1.3.4-1/src/fl_read_image.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 757              		.loc 3 429 0
 758 0572 0FB67C0C 		movzbl	97(%rsp,%rcx), %edi
 758      61
 759 0577 40887801 		movb	%dil, 1(%rax)
 430:fltk-1.3.4-1/src/fl_read_image.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 760              		.loc 3 430 0
 761 057b 0FB64C0C 		movzbl	98(%rsp,%rcx), %ecx
 761      62
 762 0580 884802   		movb	%cl, 2(%rax)
 432:fltk-1.3.4-1/src/fl_read_image.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 763              		.loc 3 432 0
 764 0583 0F852F01 		jne	.L100
 764      0000
 765              	.LVL84:
 436:fltk-1.3.4-1/src/fl_read_image.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 766              		.loc 3 436 0
 767 0589 4883C201 		addq	$1, %rdx
 768              	.LVL85:
 435:fltk-1.3.4-1/src/fl_read_image.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 769              		.loc 3 435 0
 770 058d 41BE0400 		movl	$4, %r14d
 770      0000
 771              	.LVL86:
 772              	.L52:
 422:fltk-1.3.4-1/src/fl_read_image.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 773              		.loc 3 422 0
 774 0593 4C01E8   		addq	%r13, %rax
 775              	.LVL87:
 423:fltk-1.3.4-1/src/fl_read_image.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 776              		.loc 3 423 0
 777 0596 83EE01   		subl	$1, %esi
 778              	.LVL88:
 779 0599 743D     		je	.L135
 780              	.LVL89:
 781              	.L53:
 425:fltk-1.3.4-1/src/fl_read_image.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 782              		.loc 3 425 0
 783 059b 4183FE04 		cmpl	$4, %r14d
 784 059f 0FB60A   		movzbl	(%rdx), %ecx
 785 05a2 75BC     		jne	.L51
 786              	.LVL90:
 425:fltk-1.3.4-1/src/fl_read_image.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 787              		.loc 3 425 0 is_stmt 0 discriminator 1
 788 05a4 C0E904   		shrb	$4, %cl
 789              	.LVL91:
 428:fltk-1.3.4-1/src/fl_read_image.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 790              		.loc 3 428 0 is_stmt 1 discriminator 1
 791 05a7 83E10F   		andl	$15, %ecx
 792              	.LVL92:
 793 05aa 488D0C49 		leaq	(%rcx,%rcx,2), %rcx
 794 05ae 440FB674 		movzbl	96(%rsp,%rcx), %r14d
 794      0C60
 795 05b4 448830   		movb	%r14b, (%rax)
 429:fltk-1.3.4-1/src/fl_read_image.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 796              		.loc 3 429 0 discriminator 1
 797 05b7 440FB674 		movzbl	97(%rsp,%rcx), %r14d
 797      0C61
 798 05bd 44887001 		movb	%r14b, 1(%rax)
 430:fltk-1.3.4-1/src/fl_read_image.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 799              		.loc 3 430 0 discriminator 1
 800 05c1 0FB64C0C 		movzbl	98(%rsp,%rcx), %ecx
 800      62
 433:fltk-1.3.4-1/src/fl_read_image.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 801              		.loc 3 433 0 discriminator 1
 802 05c6 4531F6   		xorl	%r14d, %r14d
 803              	.LVL93:
 430:fltk-1.3.4-1/src/fl_read_image.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 804              		.loc 3 430 0 discriminator 1
 805 05c9 884802   		movb	%cl, 2(%rax)
 422:fltk-1.3.4-1/src/fl_read_image.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 806              		.loc 3 422 0 discriminator 1
 807 05cc 4C01E8   		addq	%r13, %rax
 808              	.LVL94:
 423:fltk-1.3.4-1/src/fl_read_image.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 809              		.loc 3 423 0 discriminator 1
 810 05cf 83EE01   		subl	$1, %esi
 811              	.LVL95:
 812 05d2 75C7     		jne	.L53
 813              	.LVL96:
 814              		.p2align 4,,10
 815 05d4 0F1F4000 		.p2align 3
 816              	.L135:
 817 05d8 8B7C2410 		movl	16(%rsp), %edi
 818 05dc 48036C24 		addq	8(%rsp), %rbp
 818      08
 819              	.LVL97:
 372:fltk-1.3.4-1/src/fl_read_image.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820              		.loc 3 372 0
 821 05e1 83C701   		addl	$1, %edi
 822              	.LVL98:
 823 05e4 41397C24 		cmpl	%edi, 4(%r12)
 823      04
 824 05e9 0F8F81FD 		jg	.L59
 824      FFFF
 825 05ef E9A7FEFF 		jmp	.L58
 825      FF
 826              	.LVL99:
 827              		.p2align 4,,10
 828 05f4 0F1F4000 		.p2align 3
 829              	.L37:
 401:fltk-1.3.4-1/src/fl_read_image.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 830              		.loc 3 401 0
 831 05f8 458B3424 		movl	(%r12), %r14d
 832              	.LVL100:
 402:fltk-1.3.4-1/src/fl_read_image.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 833              		.loc 3 402 0
 834 05fc 4585F6   		testl	%r14d, %r14d
 835 05ff 0F8E83FE 		jle	.L34
 835      FFFF
 836 0605 B9060000 		movl	$6, %ecx
 836      00
 837 060a 897C2410 		movl	%edi, 16(%rsp)
 838 060e EB0C     		jmp	.L50
 839              	.LVL101:
 840              		.p2align 4,,10
 841              		.p2align 3
 842              	.L147:
 412:fltk-1.3.4-1/src/fl_read_image.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 843              		.loc 3 412 0
 844 0610 83E902   		subl	$2, %ecx
 845              	.LVL102:
 846              	.L49:
 401:fltk-1.3.4-1/src/fl_read_image.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 847              		.loc 3 401 0
 848 0613 4C01E8   		addq	%r13, %rax
 849              	.LVL103:
 402:fltk-1.3.4-1/src/fl_read_image.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 850              		.loc 3 402 0
 851 0616 4183EE01 		subl	$1, %r14d
 852              	.LVL104:
 853 061a 74BC     		je	.L135
 854              	.LVL105:
 855              	.L50:
 404:fltk-1.3.4-1/src/fl_read_image.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 856              		.loc 3 404 0
 857 061c 0FB632   		movzbl	(%rdx), %esi
 858 061f D3FE     		sarl	%cl, %esi
 859              	.LVL106:
 406:fltk-1.3.4-1/src/fl_read_image.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 860              		.loc 3 406 0
 861 0621 83E603   		andl	$3, %esi
 862              	.LVL107:
 410:fltk-1.3.4-1/src/fl_read_image.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 863              		.loc 3 410 0
 864 0624 85C9     		testl	%ecx, %ecx
 406:fltk-1.3.4-1/src/fl_read_image.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 865              		.loc 3 406 0
 866 0626 488D3476 		leaq	(%rsi,%rsi,2), %rsi
 867 062a 0FB67C34 		movzbl	96(%rsp,%rsi), %edi
 867      60
 868 062f 408838   		movb	%dil, (%rax)
 869              	.LVL108:
 407:fltk-1.3.4-1/src/fl_read_image.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 870              		.loc 3 407 0
 871 0632 0FB67C34 		movzbl	97(%rsp,%rsi), %edi
 871      61
 872 0637 40887801 		movb	%dil, 1(%rax)
 408:fltk-1.3.4-1/src/fl_read_image.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 873              		.loc 3 408 0
 874 063b 0FB67434 		movzbl	98(%rsp,%rsi), %esi
 874      62
 875 0640 40887002 		movb	%sil, 2(%rax)
 410:fltk-1.3.4-1/src/fl_read_image.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 876              		.loc 3 410 0
 877 0644 75CA     		jne	.L147
 878              	.LVL109:
 416:fltk-1.3.4-1/src/fl_read_image.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 879              		.loc 3 416 0
 880 0646 4883C201 		addq	$1, %rdx
 881              	.LVL110:
 415:fltk-1.3.4-1/src/fl_read_image.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 882              		.loc 3 415 0
 883 064a B9060000 		movl	$6, %ecx
 883      00
 884 064f EBC2     		jmp	.L49
 885              	.LVL111:
 886              		.p2align 4,,10
 887 0651 0F1F8000 		.p2align 3
 887      000000
 888              	.L35:
 378:fltk-1.3.4-1/src/fl_read_image.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 889              		.loc 3 378 0
 890 0658 418B3424 		movl	(%r12), %esi
 891              	.LVL112:
 379:fltk-1.3.4-1/src/fl_read_image.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 892              		.loc 3 379 0
 893 065c B9800000 		movl	$128, %ecx
 893      00
 894 0661 85F6     		testl	%esi, %esi
 895 0663 7F28     		jg	.L120
 896 0665 E91EFEFF 		jmp	.L34
 896      FF
 897              	.LVL113:
 898 066a 660F1F44 		.p2align 4,,10
 898      0000
 899              		.p2align 3
 900              	.L148:
 391:fltk-1.3.4-1/src/fl_read_image.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 901              		.loc 3 391 0
 902 0670 83F901   		cmpl	$1, %ecx
 382:fltk-1.3.4-1/src/fl_read_image.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 903              		.loc 3 382 0
 904 0673 448838   		movb	%r15b, (%rax)
 383:fltk-1.3.4-1/src/fl_read_image.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 905              		.loc 3 383 0
 906 0676 885801   		movb	%bl, 1(%rax)
 384:fltk-1.3.4-1/src/fl_read_image.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 907              		.loc 3 384 0
 908 0679 44885802 		movb	%r11b, 2(%rax)
 391:fltk-1.3.4-1/src/fl_read_image.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 909              		.loc 3 391 0
 910 067d 7427     		je	.L44
 911              	.L149:
 392:fltk-1.3.4-1/src/fl_read_image.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 912              		.loc 3 392 0
 913 067f D1E9     		shrl	%ecx
 914              	.LVL114:
 915              	.L45:
 378:fltk-1.3.4-1/src/fl_read_image.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 916              		.loc 3 378 0
 917 0681 4C01E8   		addq	%r13, %rax
 918              	.LVL115:
 379:fltk-1.3.4-1/src/fl_read_image.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 919              		.loc 3 379 0
 920 0684 83EE01   		subl	$1, %esi
 921              	.LVL116:
 922 0687 0F84FBFD 		je	.L34
 922      FFFF
 923              	.LVL117:
 924              	.L120:
 381:fltk-1.3.4-1/src/fl_read_image.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 925              		.loc 3 381 0
 926 068d 440FB632 		movzbl	(%rdx), %r14d
 927 0691 4185CE   		testl	%ecx, %r14d
 928 0694 75DA     		jne	.L148
 391:fltk-1.3.4-1/src/fl_read_image.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 929              		.loc 3 391 0
 930 0696 83F901   		cmpl	$1, %ecx
 386:fltk-1.3.4-1/src/fl_read_image.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 931              		.loc 3 386 0
 932 0699 448810   		movb	%r10b, (%rax)
 387:fltk-1.3.4-1/src/fl_read_image.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 933              		.loc 3 387 0
 934 069c 44884801 		movb	%r9b, 1(%rax)
 388:fltk-1.3.4-1/src/fl_read_image.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 935              		.loc 3 388 0
 936 06a0 44884002 		movb	%r8b, 2(%rax)
 391:fltk-1.3.4-1/src/fl_read_image.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 937              		.loc 3 391 0
 938 06a4 75D9     		jne	.L149
 939              	.L44:
 940              	.LVL118:
 395:fltk-1.3.4-1/src/fl_read_image.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 941              		.loc 3 395 0
 942 06a6 4883C201 		addq	$1, %rdx
 943              	.LVL119:
 394:fltk-1.3.4-1/src/fl_read_image.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 944              		.loc 3 394 0
 945 06aa B9800000 		movl	$128, %ecx
 945      00
 946 06af EBD0     		jmp	.L45
 947              	.LVL120:
 948              		.p2align 4,,10
 949 06b1 0F1F8000 		.p2align 3
 949      000000
 950              	.L100:
 433:fltk-1.3.4-1/src/fl_read_image.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 951              		.loc 3 433 0
 952 06b8 4531F6   		xorl	%r14d, %r14d
 953              	.LVL121:
 954 06bb E9D3FEFF 		jmp	.L52
 954      FF
 955              	.LVL122:
 956              	.L144:
 957 06c0 448B4424 		movl	84(%rsp), %r8d
 957      54
 958              	.LBB219:
 959              	.LBB211:
 271:fltk-1.3.4-1/src/fl_read_image.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 960              		.loc 3 271 0
 961 06c5 89C6     		movl	%eax, %esi
 962 06c7 89FA     		movl	%edi, %edx
 963              	.LBB204:
 964              	.LBB199:
 965              	.LBB190:
 194:fltk-1.3.4-1/src/fl_read_image.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 966              		.loc 3 194 0
 967 06c9 C7442430 		movl	$0, 48(%rsp)
 967      00000000 
 968 06d1 4101C8   		addl	%ecx, %r8d
 969              	.LVL123:
 970              	.L9:
 205:fltk-1.3.4-1/src/fl_read_image.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 971              		.loc 3 205 0
 972 06d4 4129D1   		subl	%edx, %r9d
 973 06d7 89F0     		movl	%esi, %eax
 974 06d9 4589CD   		movl	%r9d, %r13d
 975              	.LVL124:
 976              	.L153:
 977              	.LBE190:
 978              	.LBE199:
 979              	.LBB200:
 980              	.LBB196:
 194:fltk-1.3.4-1/src/fl_read_image.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 981              		.loc 3 194 0
 982 06dc 4531F6   		xorl	%r14d, %r14d
 192:fltk-1.3.4-1/src/fl_read_image.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 983              		.loc 3 192 0
 984 06df 39F1     		cmpl	%esi, %ecx
 985 06e1 0F8E29FA 		jle	.L13
 985      FFFF
 986              	.LVL125:
 987              	.L141:
 988 06e7 89C8     		movl	%ecx, %eax
 989              	.LVL126:
 990              	.L95:
 197:fltk-1.3.4-1/src/fl_read_image.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 991              		.loc 3 197 0
 992 06e9 29F1     		subl	%esi, %ecx
 993 06eb 4189CE   		movl	%ecx, %r14d
 994              	.LVL127:
 995 06ee E91DFAFF 		jmp	.L13
 995      FF
 996              	.LVL128:
 997              		.p2align 4,,10
 998 06f3 0F1F4400 		.p2align 3
 998      00
 999              	.L24:
 1000 06f8 498B4C24 		movq	64(%r12), %rcx
 1000      40
 1001 06fd 498B5424 		movq	72(%r12), %rdx
 1001      48
 1002              	.L27:
 1003              	.LBE196:
 1004              	.LBE200:
 1005              	.LBE204:
 1006              	.LBE211:
 1007              	.LBE219:
 478:fltk-1.3.4-1/src/fl_read_image.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 1008              		.loc 3 478 0
 1009 0702 31DB     		xorl	%ebx, %ebx
 480:fltk-1.3.4-1/src/fl_read_image.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 1010              		.loc 3 480 0
 1011 0704 A801     		testb	$1, %al
 477:fltk-1.3.4-1/src/fl_read_image.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 1012              		.loc 3 477 0
 1013 0706 4189C0   		movl	%eax, %r8d
 1014              	.LVL129:
 480:fltk-1.3.4-1/src/fl_read_image.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 1015              		.loc 3 480 0
 1016 0709 7511     		jne	.L60
 1017              	.LVL130:
 1018 070b 0F1F4400 		.p2align 4,,10
 1018      00
 1019              		.p2align 3
 1020              	.L61:
 481:fltk-1.3.4-1/src/fl_read_image.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1021              		.loc 3 481 0
 1022 0710 41D1E8   		shrl	%r8d
 1023              	.LVL131:
 482:fltk-1.3.4-1/src/fl_read_image.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 1024              		.loc 3 482 0
 1025 0713 83C301   		addl	$1, %ebx
 1026              	.LVL132:
 480:fltk-1.3.4-1/src/fl_read_image.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 1027              		.loc 3 480 0
 1028 0716 41F6C001 		testb	$1, %r8b
 1029 071a 74F4     		je	.L61
 1030              	.LVL133:
 1031              	.L60:
 485:fltk-1.3.4-1/src/fl_read_image.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 1032              		.loc 3 485 0
 1033 071c 4189C9   		movl	%ecx, %r9d
 1034              	.LVL134:
 488:fltk-1.3.4-1/src/fl_read_image.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 1035              		.loc 3 488 0
 1036 071f 83E101   		andl	$1, %ecx
 1037              	.LVL135:
 1038 0722 0F854306 		jne	.L102
 1038      0000
 1039 0728 31C0     		xorl	%eax, %eax
 1040              	.LVL136:
 1041 072a 660F1F44 		.p2align 4,,10
 1041      0000
 1042              		.p2align 3
 1043              	.L63:
 489:fltk-1.3.4-1/src/fl_read_image.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1044              		.loc 3 489 0
 1045 0730 41D1E9   		shrl	%r9d
 1046              	.LVL137:
 490:fltk-1.3.4-1/src/fl_read_image.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 1047              		.loc 3 490 0
 1048 0733 83C001   		addl	$1, %eax
 1049              	.LVL138:
 488:fltk-1.3.4-1/src/fl_read_image.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 1050              		.loc 3 488 0
 1051 0736 41F6C101 		testb	$1, %r9b
 1052 073a 74F4     		je	.L63
 1053 073c 89442430 		movl	%eax, 48(%rsp)
 1054              	.LVL139:
 1055              	.L62:
 493:fltk-1.3.4-1/src/fl_read_image.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1056              		.loc 3 493 0
 1057 0740 4189D2   		movl	%edx, %r10d
 1058              	.LVL140:
 496:fltk-1.3.4-1/src/fl_read_image.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 1059              		.loc 3 496 0
 1060 0743 4531F6   		xorl	%r14d, %r14d
 1061 0746 83E201   		andl	$1, %edx
 1062              	.LVL141:
 1063 0749 7512     		jne	.L66
 1064              	.LVL142:
 1065 074b 0F1F4400 		.p2align 4,,10
 1065      00
 1066              		.p2align 3
 1067              	.L121:
 497:fltk-1.3.4-1/src/fl_read_image.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 1068              		.loc 3 497 0
 1069 0750 41D1EA   		shrl	%r10d
 1070              	.LVL143:
 498:fltk-1.3.4-1/src/fl_read_image.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 1071              		.loc 3 498 0
 1072 0753 4183C601 		addl	$1, %r14d
 1073              	.LVL144:
 496:fltk-1.3.4-1/src/fl_read_image.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 1074              		.loc 3 496 0
 1075 0757 41F6C201 		testb	$1, %r10b
 1076 075b 74F3     		je	.L121
 1077              	.LVL145:
 1078              	.L66:
 502:fltk-1.3.4-1/src/fl_read_image.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1079              		.loc 3 502 0 discriminator 1
 1080 075d 418B7424 		movl	4(%r12), %esi
 1080      04
 1081 0762 85F6     		testl	%esi, %esi
 1082 0764 0F8E31FD 		jle	.L58
 1082      FFFF
 1083 076a 410FAFED 		imull	%r13d, %ebp
 1084              	.LVL146:
 1085 076e 4D63FD   		movslq	%r13d, %r15
 502:fltk-1.3.4-1/src/fl_read_image.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1086              		.loc 3 502 0 is_stmt 0
 1087 0771 C7442408 		movl	$0, 8(%rsp)
 1087      00000000 
 1088 0779 4863C5   		movslq	%ebp, %rax
 1089 077c 4C89FD   		movq	%r15, %rbp
 1090 077f 48894424 		movq	%rax, 24(%rsp)
 1090      18
 1091              	.LVL147:
 1092 0784 488B4424 		movq	32(%rsp), %rax
 1092      20
 1093 0789 48894424 		movq	%rax, 16(%rsp)
 1093      10
 1094              	.LVL148:
 1095 078e 6690     		.p2align 4,,10
 1096              		.p2align 3
 1097              	.L91:
 503:fltk-1.3.4-1/src/fl_read_image.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 1098              		.loc 3 503 0 is_stmt 1
 1099 0790 8B7C2408 		movl	8(%rsp), %edi
 506:fltk-1.3.4-1/src/fl_read_image.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 1100              		.loc 3 506 0
 1101 0794 418B4424 		movl	48(%r12), %eax
 1101      30
 503:fltk-1.3.4-1/src/fl_read_image.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 1102              		.loc 3 503 0
 1103 0799 410FAF7C 		imull	44(%r12), %edi
 1103      242C
 504:fltk-1.3.4-1/src/fl_read_image.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1104              		.loc 3 504 0
 1105 079f 488B7424 		movq	16(%rsp), %rsi
 1105      10
 506:fltk-1.3.4-1/src/fl_read_image.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 1106              		.loc 3 506 0
 1107 07a4 83E808   		subl	$8, %eax
 503:fltk-1.3.4-1/src/fl_read_image.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 1108              		.loc 3 503 0
 1109 07a7 4863FF   		movslq	%edi, %rdi
 1110 07aa 49037C24 		addq	16(%r12), %rdi
 1110      10
 1111              	.LVL149:
 506:fltk-1.3.4-1/src/fl_read_image.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 1112              		.loc 3 506 0
 1113 07af 83F818   		cmpl	$24, %eax
 1114 07b2 0F87B000 		ja	.L68
 1114      0000
 1115 07b8 FF24C500 		jmp	*.L70(,%rax,8)
 1115      000000
 1116              		.section	.rodata._ZL18read_win_rectanglePhiiiii
 1117              		.align 8
 1118              		.align 4
 1119              	.L70:
 1120 0068 00000000 		.quad	.L69
 1120      00000000 
 1121 0070 00000000 		.quad	.L68
 1121      00000000 
 1122 0078 00000000 		.quad	.L68
 1122      00000000 
 1123 0080 00000000 		.quad	.L68
 1123      00000000 
 1124 0088 00000000 		.quad	.L71
 1124      00000000 
 1125 0090 00000000 		.quad	.L68
 1125      00000000 
 1126 0098 00000000 		.quad	.L68
 1126      00000000 
 1127 00a0 00000000 		.quad	.L68
 1127      00000000 
 1128 00a8 00000000 		.quad	.L72
 1128      00000000 
 1129 00b0 00000000 		.quad	.L68
 1129      00000000 
 1130 00b8 00000000 		.quad	.L68
 1130      00000000 
 1131 00c0 00000000 		.quad	.L68
 1131      00000000 
 1132 00c8 00000000 		.quad	.L68
 1132      00000000 
 1133 00d0 00000000 		.quad	.L68
 1133      00000000 
 1134 00d8 00000000 		.quad	.L68
 1134      00000000 
 1135 00e0 00000000 		.quad	.L68
 1135      00000000 
 1136 00e8 00000000 		.quad	.L73
 1136      00000000 
 1137 00f0 00000000 		.quad	.L68
 1137      00000000 
 1138 00f8 00000000 		.quad	.L68
 1138      00000000 
 1139 0100 00000000 		.quad	.L68
 1139      00000000 
 1140 0108 00000000 		.quad	.L68
 1140      00000000 
 1141 0110 00000000 		.quad	.L68
 1141      00000000 
 1142 0118 00000000 		.quad	.L68
 1142      00000000 
 1143 0120 00000000 		.quad	.L68
 1143      00000000 
 1144 0128 00000000 		.quad	.L74
 1144      00000000 
 1145              		.section	.text._ZL18read_win_rectanglePhiiiii
 1146 07bf 90       		.p2align 4,,10
 1147              		.p2align 3
 1148              	.L74:
 595:fltk-1.3.4-1/src/fl_read_image.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1149              		.loc 3 595 0
 1150 07c0 418B4424 		movl	24(%r12), %eax
 1150      18
 1151 07c5 85C0     		testl	%eax, %eax
 597:fltk-1.3.4-1/src/fl_read_image.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1152              		.loc 3 597 0
 1153 07c7 418B0424 		movl	(%r12), %eax
 595:fltk-1.3.4-1/src/fl_read_image.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1154              		.loc 3 595 0
 1155 07cb 0F853803 		jne	.L88
 1155      0000
 1156              	.LVL150:
 598:fltk-1.3.4-1/src/fl_read_image.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 1157              		.loc 3 598 0
 1158 07d1 85C0     		testl	%eax, %eax
 1159 07d3 0F8E8F00 		jle	.L68
 1159      0000
 1160 07d9 83E801   		subl	$1, %eax
 1161              	.LVL151:
 1162 07dc 448B7C24 		movl	48(%rsp), %r15d
 1162      30
 1163 07e1 4C8D6C87 		leaq	4(%rdi,%rax,4), %r13
 1163      04
 1164              	.LVL152:
 1165 07e6 662E0F1F 		.p2align 4,,10
 1165      84000000 
 1165      0000
 1166              		.p2align 3
 1167              	.L89:
 600:fltk-1.3.4-1/src/fl_read_image.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 1168              		.loc 3 600 0
 1169 07f0 440FB75F 		movzwl	2(%rdi), %r11d
 1169      02
 1170 07f5 0FB64701 		movzbl	1(%rdi), %eax
 602:fltk-1.3.4-1/src/fl_read_image.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1171              		.loc 3 602 0
 1172 07f9 89D9     		movl	%ebx, %ecx
 597:fltk-1.3.4-1/src/fl_read_image.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1173              		.loc 3 597 0
 1174 07fb 4883C704 		addq	$4, %rdi
 1175              	.LVL153:
 600:fltk-1.3.4-1/src/fl_read_image.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 1176              		.loc 3 600 0
 1177 07ff 41C1E308 		sall	$8, %r11d
 1178 0803 4109C3   		orl	%eax, %r11d
 1179 0806 0FB647FC 		movzbl	-4(%rdi), %eax
 1180 080a 41C1E308 		sall	$8, %r11d
 1181 080e 4109C3   		orl	%eax, %r11d
 1182              	.LVL154:
 602:fltk-1.3.4-1/src/fl_read_image.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1183              		.loc 3 602 0
 1184 0811 4489DA   		movl	%r11d, %edx
 1185 0814 D3FA     		sarl	%cl, %edx
 603:fltk-1.3.4-1/src/fl_read_image.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 1186              		.loc 3 603 0
 1187 0816 4489F9   		movl	%r15d, %ecx
 602:fltk-1.3.4-1/src/fl_read_image.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1188              		.loc 3 602 0
 1189 0819 4421C2   		andl	%r8d, %edx
 1190 081c 89D0     		movl	%edx, %eax
 1191 081e C1E008   		sall	$8, %eax
 1192 0821 29D0     		subl	%edx, %eax
 1193 0823 31D2     		xorl	%edx, %edx
 1194 0825 41F7F0   		divl	%r8d
 603:fltk-1.3.4-1/src/fl_read_image.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 1195              		.loc 3 603 0
 1196 0828 4489DA   		movl	%r11d, %edx
 1197 082b D3FA     		sarl	%cl, %edx
 604:fltk-1.3.4-1/src/fl_read_image.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1198              		.loc 3 604 0
 1199 082d 4489F1   		movl	%r14d, %ecx
 603:fltk-1.3.4-1/src/fl_read_image.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 1200              		.loc 3 603 0
 1201 0830 4421CA   		andl	%r9d, %edx
 604:fltk-1.3.4-1/src/fl_read_image.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1202              		.loc 3 604 0
 1203 0833 41D3FB   		sarl	%cl, %r11d
 1204              	.LVL155:
 1205 0836 4521D3   		andl	%r10d, %r11d
 602:fltk-1.3.4-1/src/fl_read_image.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1206              		.loc 3 602 0
 1207 0839 8806     		movb	%al, (%rsi)
 1208              	.LVL156:
 603:fltk-1.3.4-1/src/fl_read_image.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 1209              		.loc 3 603 0
 1210 083b 89D0     		movl	%edx, %eax
 1211 083d C1E008   		sall	$8, %eax
 1212 0840 29D0     		subl	%edx, %eax
 1213 0842 31D2     		xorl	%edx, %edx
 1214 0844 41F7F1   		divl	%r9d
 604:fltk-1.3.4-1/src/fl_read_image.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1215              		.loc 3 604 0
 1216 0847 31D2     		xorl	%edx, %edx
 603:fltk-1.3.4-1/src/fl_read_image.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 1217              		.loc 3 603 0
 1218 0849 884601   		movb	%al, 1(%rsi)
 604:fltk-1.3.4-1/src/fl_read_image.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1219              		.loc 3 604 0
 1220 084c 4489D8   		movl	%r11d, %eax
 1221 084f C1E008   		sall	$8, %eax
 1222 0852 4429D8   		subl	%r11d, %eax
 1223 0855 41F7F2   		divl	%r10d
 1224 0858 884602   		movb	%al, 2(%rsi)
 597:fltk-1.3.4-1/src/fl_read_image.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1225              		.loc 3 597 0
 1226 085b 4801EE   		addq	%rbp, %rsi
 1227              	.LVL157:
 598:fltk-1.3.4-1/src/fl_read_image.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 1228              		.loc 3 598 0
 1229 085e 4C39EF   		cmpq	%r13, %rdi
 1230 0861 758D     		jne	.L89
 1231              	.LVL158:
 1232              		.p2align 4,,10
 1233 0863 0F1F4400 		.p2align 3
 1233      00
 1234              	.L68:
 502:fltk-1.3.4-1/src/fl_read_image.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1235              		.loc 3 502 0 discriminator 2
 1236 0868 83442408 		addl	$1, 8(%rsp)
 1236      01
 1237              	.LVL159:
 1238 086d 488B7424 		movq	24(%rsp), %rsi
 1238      18
 1239 0872 8B442408 		movl	8(%rsp), %eax
 1240              	.LVL160:
 1241 0876 48017424 		addq	%rsi, 16(%rsp)
 1241      10
 1242              	.LVL161:
 1243 087b 41394424 		cmpl	%eax, 4(%r12)
 1243      04
 1244 0880 0F8F0AFF 		jg	.L91
 1244      FFFF
 1245 0886 E910FCFF 		jmp	.L58
 1245      FF
 1246              	.LVL162:
 1247 088b 0F1F4400 		.p2align 4,,10
 1247      00
 1248              		.p2align 3
 1249              	.L73:
 569:fltk-1.3.4-1/src/fl_read_image.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1250              		.loc 3 569 0
 1251 0890 418B5424 		movl	24(%r12), %edx
 1251      18
 571:fltk-1.3.4-1/src/fl_read_image.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 1252              		.loc 3 571 0
 1253 0895 418B0424 		movl	(%r12), %eax
 569:fltk-1.3.4-1/src/fl_read_image.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1254              		.loc 3 569 0
 1255 0899 85D2     		testl	%edx, %edx
 1256 089b 0F85FC02 		jne	.L85
 1256      0000
 1257              	.LVL163:
 572:fltk-1.3.4-1/src/fl_read_image.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1258              		.loc 3 572 0
 1259 08a1 85C0     		testl	%eax, %eax
 1260 08a3 7EC3     		jle	.L68
 1261 08a5 83E801   		subl	$1, %eax
 1262              	.LVL164:
 1263 08a8 448B7C24 		movl	48(%rsp), %r15d
 1263      30
 1264 08ad 4C8D6C40 		leaq	3(%rax,%rax,2), %r13
 1264      03
 1265 08b2 4901FD   		addq	%rdi, %r13
 1266              	.LVL165:
 1267              		.p2align 4,,10
 1268 08b5 0F1F00   		.p2align 3
 1269              	.L86:
 574:fltk-1.3.4-1/src/fl_read_image.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1270              		.loc 3 574 0
 1271 08b8 440FB75F 		movzwl	1(%rdi), %r11d
 1271      01
 1272 08bd 0FB607   		movzbl	(%rdi), %eax
 576:fltk-1.3.4-1/src/fl_read_image.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1273              		.loc 3 576 0
 1274 08c0 89D9     		movl	%ebx, %ecx
 571:fltk-1.3.4-1/src/fl_read_image.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 1275              		.loc 3 571 0
 1276 08c2 4883C703 		addq	$3, %rdi
 1277              	.LVL166:
 574:fltk-1.3.4-1/src/fl_read_image.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1278              		.loc 3 574 0
 1279 08c6 41C1E308 		sall	$8, %r11d
 1280 08ca 4109C3   		orl	%eax, %r11d
 1281              	.LVL167:
 576:fltk-1.3.4-1/src/fl_read_image.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1282              		.loc 3 576 0
 1283 08cd 4489DA   		movl	%r11d, %edx
 1284 08d0 D3FA     		sarl	%cl, %edx
 577:fltk-1.3.4-1/src/fl_read_image.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 1285              		.loc 3 577 0
 1286 08d2 4489F9   		movl	%r15d, %ecx
 576:fltk-1.3.4-1/src/fl_read_image.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1287              		.loc 3 576 0
 1288 08d5 4421C2   		andl	%r8d, %edx
 1289 08d8 89D0     		movl	%edx, %eax
 1290 08da C1E008   		sall	$8, %eax
 1291 08dd 29D0     		subl	%edx, %eax
 1292 08df 31D2     		xorl	%edx, %edx
 1293 08e1 41F7F0   		divl	%r8d
 577:fltk-1.3.4-1/src/fl_read_image.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 1294              		.loc 3 577 0
 1295 08e4 4489DA   		movl	%r11d, %edx
 1296 08e7 D3FA     		sarl	%cl, %edx
 578:fltk-1.3.4-1/src/fl_read_image.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1297              		.loc 3 578 0
 1298 08e9 4489F1   		movl	%r14d, %ecx
 577:fltk-1.3.4-1/src/fl_read_image.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 1299              		.loc 3 577 0
 1300 08ec 4421CA   		andl	%r9d, %edx
 578:fltk-1.3.4-1/src/fl_read_image.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1301              		.loc 3 578 0
 1302 08ef 41D3FB   		sarl	%cl, %r11d
 1303              	.LVL168:
 1304 08f2 4521D3   		andl	%r10d, %r11d
 576:fltk-1.3.4-1/src/fl_read_image.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1305              		.loc 3 576 0
 1306 08f5 8806     		movb	%al, (%rsi)
 1307              	.LVL169:
 577:fltk-1.3.4-1/src/fl_read_image.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 1308              		.loc 3 577 0
 1309 08f7 89D0     		movl	%edx, %eax
 1310 08f9 C1E008   		sall	$8, %eax
 1311 08fc 29D0     		subl	%edx, %eax
 1312 08fe 31D2     		xorl	%edx, %edx
 1313 0900 41F7F1   		divl	%r9d
 578:fltk-1.3.4-1/src/fl_read_image.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1314              		.loc 3 578 0
 1315 0903 31D2     		xorl	%edx, %edx
 577:fltk-1.3.4-1/src/fl_read_image.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 1316              		.loc 3 577 0
 1317 0905 884601   		movb	%al, 1(%rsi)
 578:fltk-1.3.4-1/src/fl_read_image.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1318              		.loc 3 578 0
 1319 0908 4489D8   		movl	%r11d, %eax
 1320 090b C1E008   		sall	$8, %eax
 1321 090e 4429D8   		subl	%r11d, %eax
 1322 0911 41F7F2   		divl	%r10d
 1323 0914 884602   		movb	%al, 2(%rsi)
 571:fltk-1.3.4-1/src/fl_read_image.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 1324              		.loc 3 571 0
 1325 0917 4801EE   		addq	%rbp, %rsi
 1326              	.LVL170:
 572:fltk-1.3.4-1/src/fl_read_image.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1327              		.loc 3 572 0
 1328 091a 4C39EF   		cmpq	%r13, %rdi
 1329 091d 7599     		jne	.L86
 1330 091f E944FFFF 		jmp	.L68
 1330      FF
 1331              	.LVL171:
 1332              		.p2align 4,,10
 1333 0924 0F1F4000 		.p2align 3
 1334              	.L72:
 543:fltk-1.3.4-1/src/fl_read_image.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 1335              		.loc 3 543 0
 1336 0928 418B4C24 		movl	24(%r12), %ecx
 1336      18
 545:fltk-1.3.4-1/src/fl_read_image.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1337              		.loc 3 545 0
 1338 092d 418B0424 		movl	(%r12), %eax
 543:fltk-1.3.4-1/src/fl_read_image.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 1339              		.loc 3 543 0
 1340 0931 85C9     		testl	%ecx, %ecx
 1341 0933 0F85F402 		jne	.L82
 1341      0000
 1342              	.LVL172:
 546:fltk-1.3.4-1/src/fl_read_image.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 1343              		.loc 3 546 0
 1344 0939 85C0     		testl	%eax, %eax
 1345 093b 0F8E27FF 		jle	.L68
 1345      FFFF
 1346 0941 83E801   		subl	$1, %eax
 1347              	.LVL173:
 1348 0944 448B7C24 		movl	48(%rsp), %r15d
 1348      30
 1349 0949 4C8D6C47 		leaq	2(%rdi,%rax,2), %r13
 1349      02
 1350              	.LVL174:
 1351 094e 6690     		.p2align 4,,10
 1352              		.p2align 3
 1353              	.L83:
 548:fltk-1.3.4-1/src/fl_read_image.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1354              		.loc 3 548 0
 1355 0950 440FB71F 		movzwl	(%rdi), %r11d
 1356              	.LVL175:
 550:fltk-1.3.4-1/src/fl_read_image.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1357              		.loc 3 550 0
 1358 0954 89D9     		movl	%ebx, %ecx
 545:fltk-1.3.4-1/src/fl_read_image.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1359              		.loc 3 545 0
 1360 0956 4883C702 		addq	$2, %rdi
 1361              	.LVL176:
 550:fltk-1.3.4-1/src/fl_read_image.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1362              		.loc 3 550 0
 1363 095a 4489DA   		movl	%r11d, %edx
 1364 095d D3FA     		sarl	%cl, %edx
 551:fltk-1.3.4-1/src/fl_read_image.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1365              		.loc 3 551 0
 1366 095f 4489F9   		movl	%r15d, %ecx
 550:fltk-1.3.4-1/src/fl_read_image.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1367              		.loc 3 550 0
 1368 0962 4421C2   		andl	%r8d, %edx
 1369 0965 89D0     		movl	%edx, %eax
 1370 0967 C1E008   		sall	$8, %eax
 1371 096a 29D0     		subl	%edx, %eax
 1372 096c 31D2     		xorl	%edx, %edx
 1373 096e 41F7F0   		divl	%r8d
 551:fltk-1.3.4-1/src/fl_read_image.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1374              		.loc 3 551 0
 1375 0971 4489DA   		movl	%r11d, %edx
 1376 0974 D3FA     		sarl	%cl, %edx
 552:fltk-1.3.4-1/src/fl_read_image.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 1377              		.loc 3 552 0
 1378 0976 4489F1   		movl	%r14d, %ecx
 551:fltk-1.3.4-1/src/fl_read_image.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1379              		.loc 3 551 0
 1380 0979 4421CA   		andl	%r9d, %edx
 552:fltk-1.3.4-1/src/fl_read_image.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 1381              		.loc 3 552 0
 1382 097c 41D3FB   		sarl	%cl, %r11d
 1383 097f 4521D3   		andl	%r10d, %r11d
 550:fltk-1.3.4-1/src/fl_read_image.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 1384              		.loc 3 550 0
 1385 0982 8806     		movb	%al, (%rsi)
 1386              	.LVL177:
 551:fltk-1.3.4-1/src/fl_read_image.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1387              		.loc 3 551 0
 1388 0984 89D0     		movl	%edx, %eax
 1389 0986 C1E008   		sall	$8, %eax
 1390 0989 29D0     		subl	%edx, %eax
 1391 098b 31D2     		xorl	%edx, %edx
 1392 098d 41F7F1   		divl	%r9d
 552:fltk-1.3.4-1/src/fl_read_image.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 1393              		.loc 3 552 0
 1394 0990 31D2     		xorl	%edx, %edx
 551:fltk-1.3.4-1/src/fl_read_image.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1395              		.loc 3 551 0
 1396 0992 884601   		movb	%al, 1(%rsi)
 552:fltk-1.3.4-1/src/fl_read_image.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 1397              		.loc 3 552 0
 1398 0995 4489D8   		movl	%r11d, %eax
 1399 0998 C1E008   		sall	$8, %eax
 1400 099b 4429D8   		subl	%r11d, %eax
 1401 099e 41F7F2   		divl	%r10d
 1402 09a1 884602   		movb	%al, 2(%rsi)
 545:fltk-1.3.4-1/src/fl_read_image.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1403              		.loc 3 545 0
 1404 09a4 4801EE   		addq	%rbp, %rsi
 1405              	.LVL178:
 546:fltk-1.3.4-1/src/fl_read_image.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 1406              		.loc 3 546 0
 1407 09a7 4C39EF   		cmpq	%r13, %rdi
 1408 09aa 75A4     		jne	.L83
 1409 09ac E9B7FEFF 		jmp	.L68
 1409      FF
 1410              	.LVL179:
 1411              		.p2align 4,,10
 1412 09b1 0F1F8000 		.p2align 3
 1412      000000
 1413              	.L69:
 508:fltk-1.3.4-1/src/fl_read_image.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 1414              		.loc 3 508 0
 1415 09b8 418B0424 		movl	(%r12), %eax
 1416              	.LVL180:
 1417 09bc 8D50FF   		leal	-1(%rax), %edx
 509:fltk-1.3.4-1/src/fl_read_image.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 1418              		.loc 3 509 0
 1419 09bf 85C0     		testl	%eax, %eax
 1420 09c1 4C8D6C17 		leaq	1(%rdi,%rdx), %r13
 1420      01
 1421 09c6 0F8E9CFE 		jle	.L68
 1421      FFFF
 1422 09cc 448B7C24 		movl	48(%rsp), %r15d
 1422      30
 1423              	.LVL181:
 1424              		.p2align 4,,10
 1425 09d1 0F1F8000 		.p2align 3
 1425      000000
 1426              	.L77:
 511:fltk-1.3.4-1/src/fl_read_image.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1427              		.loc 3 511 0
 1428 09d8 440FB61F 		movzbl	(%rdi), %r11d
 1429              	.LVL182:
 513:fltk-1.3.4-1/src/fl_read_image.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1430              		.loc 3 513 0
 1431 09dc 89D9     		movl	%ebx, %ecx
 508:fltk-1.3.4-1/src/fl_read_image.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 1432              		.loc 3 508 0
 1433 09de 4883C701 		addq	$1, %rdi
 1434              	.LVL183:
 513:fltk-1.3.4-1/src/fl_read_image.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1435              		.loc 3 513 0
 1436 09e2 4489DA   		movl	%r11d, %edx
 1437 09e5 D3FA     		sarl	%cl, %edx
 514:fltk-1.3.4-1/src/fl_read_image.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1438              		.loc 3 514 0
 1439 09e7 4489F9   		movl	%r15d, %ecx
 513:fltk-1.3.4-1/src/fl_read_image.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1440              		.loc 3 513 0
 1441 09ea 4421C2   		andl	%r8d, %edx
 1442 09ed 89D0     		movl	%edx, %eax
 1443 09ef C1E008   		sall	$8, %eax
 1444 09f2 29D0     		subl	%edx, %eax
 1445 09f4 31D2     		xorl	%edx, %edx
 1446 09f6 41F7F0   		divl	%r8d
 514:fltk-1.3.4-1/src/fl_read_image.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1447              		.loc 3 514 0
 1448 09f9 4489DA   		movl	%r11d, %edx
 1449 09fc D3FA     		sarl	%cl, %edx
 515:fltk-1.3.4-1/src/fl_read_image.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 1450              		.loc 3 515 0
 1451 09fe 4489F1   		movl	%r14d, %ecx
 514:fltk-1.3.4-1/src/fl_read_image.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1452              		.loc 3 514 0
 1453 0a01 4421CA   		andl	%r9d, %edx
 515:fltk-1.3.4-1/src/fl_read_image.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 1454              		.loc 3 515 0
 1455 0a04 41D3FB   		sarl	%cl, %r11d
 1456              	.LVL184:
 1457 0a07 4521D3   		andl	%r10d, %r11d
 513:fltk-1.3.4-1/src/fl_read_image.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1458              		.loc 3 513 0
 1459 0a0a 8806     		movb	%al, (%rsi)
 1460              	.LVL185:
 514:fltk-1.3.4-1/src/fl_read_image.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1461              		.loc 3 514 0
 1462 0a0c 89D0     		movl	%edx, %eax
 1463 0a0e C1E008   		sall	$8, %eax
 1464 0a11 29D0     		subl	%edx, %eax
 1465 0a13 31D2     		xorl	%edx, %edx
 1466 0a15 41F7F1   		divl	%r9d
 515:fltk-1.3.4-1/src/fl_read_image.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 1467              		.loc 3 515 0
 1468 0a18 31D2     		xorl	%edx, %edx
 514:fltk-1.3.4-1/src/fl_read_image.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 1469              		.loc 3 514 0
 1470 0a1a 884601   		movb	%al, 1(%rsi)
 515:fltk-1.3.4-1/src/fl_read_image.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 1471              		.loc 3 515 0
 1472 0a1d 4489D8   		movl	%r11d, %eax
 1473 0a20 C1E008   		sall	$8, %eax
 1474 0a23 4429D8   		subl	%r11d, %eax
 1475 0a26 41F7F2   		divl	%r10d
 1476 0a29 884602   		movb	%al, 2(%rsi)
 508:fltk-1.3.4-1/src/fl_read_image.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 1477              		.loc 3 508 0
 1478 0a2c 4801EE   		addq	%rbp, %rsi
 1479              	.LVL186:
 509:fltk-1.3.4-1/src/fl_read_image.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 1480              		.loc 3 509 0
 1481 0a2f 4C39EF   		cmpq	%r13, %rdi
 1482 0a32 75A4     		jne	.L77
 1483 0a34 E92FFEFF 		jmp	.L68
 1483      FF
 1484              	.LVL187:
 1485 0a39 0F1F8000 		.p2align 4,,10
 1485      000000
 1486              		.p2align 3
 1487              	.L71:
 520:fltk-1.3.4-1/src/fl_read_image.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 1488              		.loc 3 520 0
 1489 0a40 458B2C24 		movl	(%r12), %r13d
 1490              	.LVL188:
 521:fltk-1.3.4-1/src/fl_read_image.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 1491              		.loc 3 521 0
 1492 0a44 4585ED   		testl	%r13d, %r13d
 1493 0a47 0F8E1BFE 		jle	.L68
 1493      FFFF
 1494 0a4d 4C896424 		movq	%r12, 40(%rsp)
 1494      28
 1495 0a52 4531FF   		xorl	%r15d, %r15d
 1496 0a55 448B6424 		movl	48(%rsp), %r12d
 1496      30
 1497 0a5a EB77     		jmp	.L81
 1498              	.LVL189:
 1499 0a5c 0F1F4000 		.p2align 4,,10
 1500              		.p2align 3
 1501              	.L151:
 524:fltk-1.3.4-1/src/fl_read_image.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 1502              		.loc 3 524 0
 1503 0a60 440FB61F 		movzbl	(%rdi), %r11d
 1504 0a64 0FB64701 		movzbl	1(%rdi), %eax
 1505 0a68 41C1E304 		sall	$4, %r11d
 1506 0a6c C1F804   		sarl	$4, %eax
 1507 0a6f 4109C3   		orl	%eax, %r11d
 1508              	.LVL190:
 1509              	.L79:
 529:fltk-1.3.4-1/src/fl_read_image.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1510              		.loc 3 529 0
 1511 0a72 4489DA   		movl	%r11d, %edx
 1512 0a75 89D9     		movl	%ebx, %ecx
 1513 0a77 D3FA     		sarl	%cl, %edx
 530:fltk-1.3.4-1/src/fl_read_image.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 1514              		.loc 3 530 0
 1515 0a79 4489E1   		movl	%r12d, %ecx
 529:fltk-1.3.4-1/src/fl_read_image.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1516              		.loc 3 529 0
 1517 0a7c 4421C2   		andl	%r8d, %edx
 1518 0a7f 89D0     		movl	%edx, %eax
 1519 0a81 C1E008   		sall	$8, %eax
 1520 0a84 29D0     		subl	%edx, %eax
 1521 0a86 31D2     		xorl	%edx, %edx
 1522 0a88 41F7F0   		divl	%r8d
 530:fltk-1.3.4-1/src/fl_read_image.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 1523              		.loc 3 530 0
 1524 0a8b 4489DA   		movl	%r11d, %edx
 1525 0a8e D3FA     		sarl	%cl, %edx
 531:fltk-1.3.4-1/src/fl_read_image.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 1526              		.loc 3 531 0
 1527 0a90 4489F1   		movl	%r14d, %ecx
 530:fltk-1.3.4-1/src/fl_read_image.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 1528              		.loc 3 530 0
 1529 0a93 4421CA   		andl	%r9d, %edx
 531:fltk-1.3.4-1/src/fl_read_image.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 1530              		.loc 3 531 0
 1531 0a96 41D3FB   		sarl	%cl, %r11d
 1532              	.LVL191:
 1533 0a99 4521D3   		andl	%r10d, %r11d
 529:fltk-1.3.4-1/src/fl_read_image.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1534              		.loc 3 529 0
 1535 0a9c 8806     		movb	%al, (%rsi)
 530:fltk-1.3.4-1/src/fl_read_image.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 1536              		.loc 3 530 0
 1537 0a9e 89D0     		movl	%edx, %eax
 1538 0aa0 C1E008   		sall	$8, %eax
 1539 0aa3 29D0     		subl	%edx, %eax
 1540 0aa5 31D2     		xorl	%edx, %edx
 1541 0aa7 41F7F1   		divl	%r9d
 531:fltk-1.3.4-1/src/fl_read_image.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 1542              		.loc 3 531 0
 1543 0aaa 31D2     		xorl	%edx, %edx
 530:fltk-1.3.4-1/src/fl_read_image.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 1544              		.loc 3 530 0
 1545 0aac 884601   		movb	%al, 1(%rsi)
 531:fltk-1.3.4-1/src/fl_read_image.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 1546              		.loc 3 531 0
 1547 0aaf 4489D8   		movl	%r11d, %eax
 1548 0ab2 C1E008   		sall	$8, %eax
 1549 0ab5 4429D8   		subl	%r11d, %eax
 1550 0ab8 41F7F2   		divl	%r10d
 533:fltk-1.3.4-1/src/fl_read_image.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 1551              		.loc 3 533 0
 1552 0abb 4585FF   		testl	%r15d, %r15d
 531:fltk-1.3.4-1/src/fl_read_image.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 1553              		.loc 3 531 0
 1554 0abe 884602   		movb	%al, 2(%rsi)
 533:fltk-1.3.4-1/src/fl_read_image.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 1555              		.loc 3 533 0
 1556 0ac1 742D     		je	.L103
 1557              	.LVL192:
 537:fltk-1.3.4-1/src/fl_read_image.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1558              		.loc 3 537 0
 1559 0ac3 4883C703 		addq	$3, %rdi
 1560              	.LVL193:
 536:fltk-1.3.4-1/src/fl_read_image.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1561              		.loc 3 536 0
 1562 0ac7 4531FF   		xorl	%r15d, %r15d
 1563              	.LVL194:
 520:fltk-1.3.4-1/src/fl_read_image.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 1564              		.loc 3 520 0
 1565 0aca 4801EE   		addq	%rbp, %rsi
 1566              	.LVL195:
 521:fltk-1.3.4-1/src/fl_read_image.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 1567              		.loc 3 521 0
 1568 0acd 4183ED01 		subl	$1, %r13d
 1569              	.LVL196:
 1570 0ad1 742C     		je	.L150
 1571              	.LVL197:
 1572              	.L81:
 523:fltk-1.3.4-1/src/fl_read_image.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1573              		.loc 3 523 0
 1574 0ad3 4585FF   		testl	%r15d, %r15d
 1575 0ad6 7488     		je	.L151
 1576 0ad8 440FB75F 		movzwl	1(%rdi), %r11d
 1576      01
 1577 0add 6641C1C3 		rolw	$8, %r11w
 1577      08
 526:fltk-1.3.4-1/src/fl_read_image.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 1578              		.loc 3 526 0
 1579 0ae2 4181E3FF 		andl	$4095, %r11d
 1579      0F0000
 1580              	.LVL198:
 1581 0ae9 EB87     		jmp	.L79
 1582              	.LVL199:
 1583 0aeb 0F1F4400 		.p2align 4,,10
 1583      00
 1584              		.p2align 3
 1585              	.L103:
 520:fltk-1.3.4-1/src/fl_read_image.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 1586              		.loc 3 520 0
 1587 0af0 4801EE   		addq	%rbp, %rsi
 1588              	.LVL200:
 521:fltk-1.3.4-1/src/fl_read_image.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 1589              		.loc 3 521 0
 1590 0af3 4183ED01 		subl	$1, %r13d
 1591              	.LVL201:
 534:fltk-1.3.4-1/src/fl_read_image.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 1592              		.loc 3 534 0
 1593 0af7 41BF0400 		movl	$4, %r15d
 1593      0000
 1594              	.LVL202:
 521:fltk-1.3.4-1/src/fl_read_image.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 1595              		.loc 3 521 0
 1596 0afd 75D4     		jne	.L81
 1597              	.L150:
 1598 0aff 4C8B6424 		movq	40(%rsp), %r12
 1598      28
 1599 0b04 E95FFDFF 		jmp	.L68
 1599      FF
 1600              	.LVL203:
 1601              	.L88:
 609:fltk-1.3.4-1/src/fl_read_image.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 1602              		.loc 3 609 0
 1603 0b09 85C0     		testl	%eax, %eax
 1604 0b0b 0F8E57FD 		jle	.L68
 1604      FFFF
 1605 0b11 83E801   		subl	$1, %eax
 1606              	.LVL204:
 1607 0b14 448B7C24 		movl	48(%rsp), %r15d
 1607      30
 1608 0b19 4C8D6C87 		leaq	4(%rdi,%rax,4), %r13
 1608      04
 1609              	.LVL205:
 1610 0b1e 6690     		.p2align 4,,10
 1611              		.p2align 3
 1612              	.L90:
 611:fltk-1.3.4-1/src/fl_read_image.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 1613              		.loc 3 611 0
 1614 0b20 0FB707   		movzwl	(%rdi), %eax
 1615 0b23 440FB65F 		movzbl	2(%rdi), %r11d
 1615      02
 613:fltk-1.3.4-1/src/fl_read_image.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 1616              		.loc 3 613 0
 1617 0b28 89D9     		movl	%ebx, %ecx
 608:fltk-1.3.4-1/src/fl_read_image.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1618              		.loc 3 608 0
 1619 0b2a 4883C704 		addq	$4, %rdi
 1620              	.LVL206:
 611:fltk-1.3.4-1/src/fl_read_image.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 1621              		.loc 3 611 0
 1622 0b2e 66C1C008 		rolw	$8, %ax
 1623 0b32 0FB7C0   		movzwl	%ax, %eax
 1624 0b35 C1E008   		sall	$8, %eax
 1625 0b38 4409D8   		orl	%r11d, %eax
 1626 0b3b 440FB65F 		movzbl	-1(%rdi), %r11d
 1626      FF
 1627 0b40 C1E008   		sall	$8, %eax
 1628 0b43 4109C3   		orl	%eax, %r11d
 1629              	.LVL207:
 613:fltk-1.3.4-1/src/fl_read_image.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 1630              		.loc 3 613 0
 1631 0b46 4489DA   		movl	%r11d, %edx
 1632 0b49 D3FA     		sarl	%cl, %edx
 614:fltk-1.3.4-1/src/fl_read_image.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1633              		.loc 3 614 0
 1634 0b4b 4489F9   		movl	%r15d, %ecx
 613:fltk-1.3.4-1/src/fl_read_image.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 1635              		.loc 3 613 0
 1636 0b4e 4421C2   		andl	%r8d, %edx
 1637 0b51 89D0     		movl	%edx, %eax
 1638 0b53 C1E008   		sall	$8, %eax
 1639 0b56 29D0     		subl	%edx, %eax
 1640 0b58 31D2     		xorl	%edx, %edx
 1641 0b5a 41F7F0   		divl	%r8d
 614:fltk-1.3.4-1/src/fl_read_image.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1642              		.loc 3 614 0
 1643 0b5d 4489DA   		movl	%r11d, %edx
 1644 0b60 D3FA     		sarl	%cl, %edx
 615:fltk-1.3.4-1/src/fl_read_image.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 1645              		.loc 3 615 0
 1646 0b62 4489F1   		movl	%r14d, %ecx
 614:fltk-1.3.4-1/src/fl_read_image.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1647              		.loc 3 614 0
 1648 0b65 4421CA   		andl	%r9d, %edx
 615:fltk-1.3.4-1/src/fl_read_image.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 1649              		.loc 3 615 0
 1650 0b68 41D3FB   		sarl	%cl, %r11d
 1651              	.LVL208:
 1652 0b6b 4521D3   		andl	%r10d, %r11d
 613:fltk-1.3.4-1/src/fl_read_image.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 1653              		.loc 3 613 0
 1654 0b6e 8806     		movb	%al, (%rsi)
 1655              	.LVL209:
 614:fltk-1.3.4-1/src/fl_read_image.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1656              		.loc 3 614 0
 1657 0b70 89D0     		movl	%edx, %eax
 1658 0b72 C1E008   		sall	$8, %eax
 1659 0b75 29D0     		subl	%edx, %eax
 1660 0b77 31D2     		xorl	%edx, %edx
 1661 0b79 41F7F1   		divl	%r9d
 615:fltk-1.3.4-1/src/fl_read_image.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 1662              		.loc 3 615 0
 1663 0b7c 31D2     		xorl	%edx, %edx
 614:fltk-1.3.4-1/src/fl_read_image.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1664              		.loc 3 614 0
 1665 0b7e 884601   		movb	%al, 1(%rsi)
 615:fltk-1.3.4-1/src/fl_read_image.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 1666              		.loc 3 615 0
 1667 0b81 4489D8   		movl	%r11d, %eax
 1668 0b84 C1E008   		sall	$8, %eax
 1669 0b87 4429D8   		subl	%r11d, %eax
 1670 0b8a 41F7F2   		divl	%r10d
 1671 0b8d 884602   		movb	%al, 2(%rsi)
 608:fltk-1.3.4-1/src/fl_read_image.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1672              		.loc 3 608 0
 1673 0b90 4801EE   		addq	%rbp, %rsi
 1674              	.LVL210:
 609:fltk-1.3.4-1/src/fl_read_image.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 1675              		.loc 3 609 0
 1676 0b93 4C39EF   		cmpq	%r13, %rdi
 1677 0b96 7588     		jne	.L90
 1678 0b98 E9CBFCFF 		jmp	.L68
 1678      FF
 1679              	.LVL211:
 1680              	.L85:
 583:fltk-1.3.4-1/src/fl_read_image.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1681              		.loc 3 583 0
 1682 0b9d 85C0     		testl	%eax, %eax
 1683 0b9f 0F8EC3FC 		jle	.L68
 1683      FFFF
 1684 0ba5 83E801   		subl	$1, %eax
 1685              	.LVL212:
 1686 0ba8 448B7C24 		movl	48(%rsp), %r15d
 1686      30
 1687 0bad 4C8D6C40 		leaq	3(%rax,%rax,2), %r13
 1687      03
 1688 0bb2 4901FD   		addq	%rdi, %r13
 1689              	.LVL213:
 1690              		.p2align 4,,10
 1691 0bb5 0F1F00   		.p2align 3
 1692              	.L87:
 585:fltk-1.3.4-1/src/fl_read_image.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1693              		.loc 3 585 0
 1694 0bb8 440FB71F 		movzwl	(%rdi), %r11d
 1695 0bbc 0FB64702 		movzbl	2(%rdi), %eax
 587:fltk-1.3.4-1/src/fl_read_image.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1696              		.loc 3 587 0
 1697 0bc0 89D9     		movl	%ebx, %ecx
 582:fltk-1.3.4-1/src/fl_read_image.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 1698              		.loc 3 582 0
 1699 0bc2 4883C703 		addq	$3, %rdi
 1700              	.LVL214:
 585:fltk-1.3.4-1/src/fl_read_image.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1701              		.loc 3 585 0
 1702 0bc6 6641C1C3 		rolw	$8, %r11w
 1702      08
 1703 0bcb 450FB7DB 		movzwl	%r11w, %r11d
 1704 0bcf 41C1E308 		sall	$8, %r11d
 1705 0bd3 4109C3   		orl	%eax, %r11d
 1706              	.LVL215:
 587:fltk-1.3.4-1/src/fl_read_image.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1707              		.loc 3 587 0
 1708 0bd6 4489DA   		movl	%r11d, %edx
 1709 0bd9 D3FA     		sarl	%cl, %edx
 588:fltk-1.3.4-1/src/fl_read_image.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 1710              		.loc 3 588 0
 1711 0bdb 4489F9   		movl	%r15d, %ecx
 587:fltk-1.3.4-1/src/fl_read_image.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1712              		.loc 3 587 0
 1713 0bde 4421C2   		andl	%r8d, %edx
 1714 0be1 89D0     		movl	%edx, %eax
 1715 0be3 C1E008   		sall	$8, %eax
 1716 0be6 29D0     		subl	%edx, %eax
 1717 0be8 31D2     		xorl	%edx, %edx
 1718 0bea 41F7F0   		divl	%r8d
 588:fltk-1.3.4-1/src/fl_read_image.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 1719              		.loc 3 588 0
 1720 0bed 4489DA   		movl	%r11d, %edx
 1721 0bf0 D3FA     		sarl	%cl, %edx
 589:fltk-1.3.4-1/src/fl_read_image.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1722              		.loc 3 589 0
 1723 0bf2 4489F1   		movl	%r14d, %ecx
 588:fltk-1.3.4-1/src/fl_read_image.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 1724              		.loc 3 588 0
 1725 0bf5 4421CA   		andl	%r9d, %edx
 589:fltk-1.3.4-1/src/fl_read_image.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1726              		.loc 3 589 0
 1727 0bf8 41D3FB   		sarl	%cl, %r11d
 1728              	.LVL216:
 1729 0bfb 4521D3   		andl	%r10d, %r11d
 587:fltk-1.3.4-1/src/fl_read_image.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 1730              		.loc 3 587 0
 1731 0bfe 8806     		movb	%al, (%rsi)
 1732              	.LVL217:
 588:fltk-1.3.4-1/src/fl_read_image.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 1733              		.loc 3 588 0
 1734 0c00 89D0     		movl	%edx, %eax
 1735 0c02 C1E008   		sall	$8, %eax
 1736 0c05 29D0     		subl	%edx, %eax
 1737 0c07 31D2     		xorl	%edx, %edx
 1738 0c09 41F7F1   		divl	%r9d
 589:fltk-1.3.4-1/src/fl_read_image.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1739              		.loc 3 589 0
 1740 0c0c 31D2     		xorl	%edx, %edx
 588:fltk-1.3.4-1/src/fl_read_image.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 1741              		.loc 3 588 0
 1742 0c0e 884601   		movb	%al, 1(%rsi)
 589:fltk-1.3.4-1/src/fl_read_image.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1743              		.loc 3 589 0
 1744 0c11 4489D8   		movl	%r11d, %eax
 1745 0c14 C1E008   		sall	$8, %eax
 1746 0c17 4429D8   		subl	%r11d, %eax
 1747 0c1a 41F7F2   		divl	%r10d
 1748 0c1d 884602   		movb	%al, 2(%rsi)
 582:fltk-1.3.4-1/src/fl_read_image.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 1749              		.loc 3 582 0
 1750 0c20 4801EE   		addq	%rbp, %rsi
 1751              	.LVL218:
 583:fltk-1.3.4-1/src/fl_read_image.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1752              		.loc 3 583 0
 1753 0c23 4C39EF   		cmpq	%r13, %rdi
 1754 0c26 7590     		jne	.L87
 1755 0c28 E93BFCFF 		jmp	.L68
 1755      FF
 1756              	.LVL219:
 1757              	.L82:
 557:fltk-1.3.4-1/src/fl_read_image.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1758              		.loc 3 557 0
 1759 0c2d 85C0     		testl	%eax, %eax
 1760 0c2f 0F8E33FC 		jle	.L68
 1760      FFFF
 1761 0c35 83E801   		subl	$1, %eax
 1762              	.LVL220:
 1763 0c38 448B7C24 		movl	48(%rsp), %r15d
 1763      30
 1764 0c3d 4C8D6C47 		leaq	2(%rdi,%rax,2), %r13
 1764      02
 1765              	.LVL221:
 1766              		.p2align 4,,10
 1767 0c42 660F1F44 		.p2align 3
 1767      0000
 1768              	.L84:
 1769 0c48 440FB71F 		movzwl	(%rdi), %r11d
 561:fltk-1.3.4-1/src/fl_read_image.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1770              		.loc 3 561 0
 1771 0c4c 89D9     		movl	%ebx, %ecx
 556:fltk-1.3.4-1/src/fl_read_image.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 1772              		.loc 3 556 0
 1773 0c4e 4883C702 		addq	$2, %rdi
 1774              	.LVL222:
 1775 0c52 6641C1C3 		rolw	$8, %r11w
 1775      08
 1776 0c57 450FB7DB 		movzwl	%r11w, %r11d
 561:fltk-1.3.4-1/src/fl_read_image.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1777              		.loc 3 561 0
 1778 0c5b 4489DA   		movl	%r11d, %edx
 1779 0c5e D3FA     		sarl	%cl, %edx
 562:fltk-1.3.4-1/src/fl_read_image.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 1780              		.loc 3 562 0
 1781 0c60 4489F9   		movl	%r15d, %ecx
 561:fltk-1.3.4-1/src/fl_read_image.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1782              		.loc 3 561 0
 1783 0c63 4421C2   		andl	%r8d, %edx
 1784 0c66 89D0     		movl	%edx, %eax
 1785 0c68 C1E008   		sall	$8, %eax
 1786 0c6b 29D0     		subl	%edx, %eax
 1787 0c6d 31D2     		xorl	%edx, %edx
 1788 0c6f 41F7F0   		divl	%r8d
 562:fltk-1.3.4-1/src/fl_read_image.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 1789              		.loc 3 562 0
 1790 0c72 4489DA   		movl	%r11d, %edx
 1791 0c75 D3FA     		sarl	%cl, %edx
 563:fltk-1.3.4-1/src/fl_read_image.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1792              		.loc 3 563 0
 1793 0c77 4489F1   		movl	%r14d, %ecx
 562:fltk-1.3.4-1/src/fl_read_image.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 1794              		.loc 3 562 0
 1795 0c7a 4421CA   		andl	%r9d, %edx
 563:fltk-1.3.4-1/src/fl_read_image.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1796              		.loc 3 563 0
 1797 0c7d 41D3FB   		sarl	%cl, %r11d
 1798 0c80 4521D3   		andl	%r10d, %r11d
 561:fltk-1.3.4-1/src/fl_read_image.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1799              		.loc 3 561 0
 1800 0c83 8806     		movb	%al, (%rsi)
 562:fltk-1.3.4-1/src/fl_read_image.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 1801              		.loc 3 562 0
 1802 0c85 89D0     		movl	%edx, %eax
 1803 0c87 C1E008   		sall	$8, %eax
 1804 0c8a 29D0     		subl	%edx, %eax
 1805 0c8c 31D2     		xorl	%edx, %edx
 1806 0c8e 41F7F1   		divl	%r9d
 563:fltk-1.3.4-1/src/fl_read_image.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1807              		.loc 3 563 0
 1808 0c91 31D2     		xorl	%edx, %edx
 562:fltk-1.3.4-1/src/fl_read_image.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 1809              		.loc 3 562 0
 1810 0c93 884601   		movb	%al, 1(%rsi)
 563:fltk-1.3.4-1/src/fl_read_image.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1811              		.loc 3 563 0
 1812 0c96 4489D8   		movl	%r11d, %eax
 1813 0c99 C1E008   		sall	$8, %eax
 1814 0c9c 4429D8   		subl	%r11d, %eax
 1815 0c9f 41F7F2   		divl	%r10d
 1816 0ca2 884602   		movb	%al, 2(%rsi)
 556:fltk-1.3.4-1/src/fl_read_image.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 1817              		.loc 3 556 0
 1818 0ca5 4801EE   		addq	%rbp, %rsi
 1819              	.LVL223:
 557:fltk-1.3.4-1/src/fl_read_image.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1820              		.loc 3 557 0
 1821 0ca8 4C39EF   		cmpq	%r13, %rdi
 1822 0cab 759B     		jne	.L84
 1823 0cad E9B6FBFF 		jmp	.L68
 1823      FF
 1824              	.LVL224:
 1825              	.L139:
 247:fltk-1.3.4-1/src/fl_read_image.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 1826              		.loc 3 247 0 discriminator 1
 1827 0cb2 F7DD     		negl	%ebp
 1828              	.LVL225:
 1829 0cb4 E99FF3FF 		jmp	.L92
 1829      FF
 1830              	.LVL226:
 1831              	.L7:
 1832 0cb9 448B4424 		movl	84(%rsp), %r8d
 1832      54
 1833              	.LBB220:
 1834              	.LBB212:
 1835              	.LBB205:
 1836              	.LBB201:
 1837              	.LBB191:
 202:fltk-1.3.4-1/src/fl_read_image.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 1838              		.loc 3 202 0
 1839 0cbe 8D543D00 		leal	0(%rbp,%rdi), %edx
 1840 0cc2 89C6     		movl	%eax, %esi
 1841 0cc4 4101C8   		addl	%ecx, %r8d
 1842              	.LVL227:
 1843 0cc7 4439CA   		cmpl	%r9d, %edx
 1844 0cca 7F63     		jg	.L152
 1845 0ccc 89C8     		movl	%ecx, %eax
 200:fltk-1.3.4-1/src/fl_read_image.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 1846              		.loc 3 200 0
 1847 0cce 4189ED   		movl	%ebp, %r13d
 194:fltk-1.3.4-1/src/fl_read_image.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 1848              		.loc 3 194 0
 1849 0cd1 C7442430 		movl	$0, 48(%rsp)
 1849      00000000 
 1850 0cd9 E90BFAFF 		jmp	.L95
 1850      FF
 1851              	.LVL228:
 1852              	.L93:
 1853              	.LBE191:
 1854              	.LBE201:
 1855              	.LBE205:
 1856              	.LBB206:
 275:fltk-1.3.4-1/src/fl_read_image.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1857              		.loc 3 275 0
 1858 0cde BF000000 		movl	$xgetimageerrhandler, %edi
 1858      00
 1859 0ce3 E8000000 		call	XSetErrorHandler
 1859      00
 1860              	.LVL229:
 276:fltk-1.3.4-1/src/fl_read_image.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 1861              		.loc 3 276 0
 1862 0ce8 6A02     		pushq	$2
 1863              		.cfi_def_cfa_offset 78008
 1864 0cea 488B3500 		movq	fl_window(%rip), %rsi
 1864      000000
 1865 0cf1 4189D9   		movl	%ebx, %r9d
 1866 0cf4 6AFF     		pushq	$-1
 1867              		.cfi_def_cfa_offset 78016
 1868 0cf6 488B3D00 		movq	fl_display(%rip), %rdi
 1868      000000
 1869 0cfd 4189E8   		movl	%ebp, %r8d
 1870 0d00 8B4C2420 		movl	32(%rsp), %ecx
 1871 0d04 8B542418 		movl	24(%rsp), %edx
 275:fltk-1.3.4-1/src/fl_read_image.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 1872              		.loc 3 275 0
 1873 0d08 4989C5   		movq	%rax, %r13
 1874              	.LVL230:
 276:fltk-1.3.4-1/src/fl_read_image.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 1875              		.loc 3 276 0
 1876 0d0b E8000000 		call	XGetImage
 1876      00
 1877              	.LVL231:
 277:fltk-1.3.4-1/src/fl_read_image.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1878              		.loc 3 277 0
 1879 0d10 4C89EF   		movq	%r13, %rdi
 276:fltk-1.3.4-1/src/fl_read_image.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 1880              		.loc 3 276 0
 1881 0d13 4989C4   		movq	%rax, %r12
 1882              	.LVL232:
 277:fltk-1.3.4-1/src/fl_read_image.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1883              		.loc 3 277 0
 1884 0d16 E8000000 		call	XSetErrorHandler
 1884      00
 1885              	.LVL233:
 1886              	.LBE206:
 1887              	.LBE212:
 1888              	.LBE220:
 306:fltk-1.3.4-1/src/fl_read_image.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1889              		.loc 3 306 0
 1890 0d1b 4D85E4   		testq	%r12, %r12
 1891 0d1e 4158     		popq	%r8
 1892              		.cfi_def_cfa_offset 78008
 1893 0d20 4159     		popq	%r9
 1894              		.cfi_def_cfa_offset 78000
 1895 0d22 0F85F4F4 		jne	.L12
 1895      FFFF
 1896              	.LVL234:
 1897              	.L97:
 1898 0d28 31C0     		xorl	%eax, %eax
 1899 0d2a E979F7FF 		jmp	.L11
 1899      FF
 1900              	.LVL235:
 1901              	.L152:
 1902              	.LBB221:
 1903              	.LBB213:
 1904              	.LBB207:
 1905              	.LBB202:
 1906              	.LBB192:
 202:fltk-1.3.4-1/src/fl_read_image.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 1907              		.loc 3 202 0
 1908 0d2f 89FA     		movl	%edi, %edx
 194:fltk-1.3.4-1/src/fl_read_image.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 1909              		.loc 3 194 0
 1910 0d31 C7442430 		movl	$0, 48(%rsp)
 1910      00000000 
 1911              	.LVL236:
 205:fltk-1.3.4-1/src/fl_read_image.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 1912              		.loc 3 205 0
 1913 0d39 89F0     		movl	%esi, %eax
 1914 0d3b 4129D1   		subl	%edx, %r9d
 1915 0d3e 4589CD   		movl	%r9d, %r13d
 1916              	.LVL237:
 1917 0d41 E996F9FF 		jmp	.L153
 1917      FF
 1918              	.LVL238:
 1919              	.L22:
 1920              	.LBE192:
 1921              	.LBE202:
 1922              	.LBE207:
 1923              	.LBE213:
 1924              	.LBE221:
 330:fltk-1.3.4-1/src/fl_read_image.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 1925              		.loc 3 330 0 discriminator 1
 1926 0d46 89DA     		movl	%ebx, %edx
 1927 0d48 410FAFD5 		imull	%r13d, %edx
 1928 0d4c 4863D2   		movslq	%edx, %rdx
 1929 0d4f 4889D7   		movq	%rdx, %rdi
 1930 0d52 48895424 		movq	%rdx, 8(%rsp)
 1930      08
 1931              	.LVL239:
 1932 0d57 E8000000 		call	_Znam
 1932      00
 1933              	.LVL240:
 1934 0d5c 488B5424 		movq	8(%rsp), %rdx
 1934      08
 1935 0d61 48894424 		movq	%rax, 32(%rsp)
 1935      20
 1936              	.LVL241:
 1937 0d66 E9D3F4FF 		jmp	.L23
 1937      FF
 1938              	.LVL242:
 1939              	.L102:
 486:fltk-1.3.4-1/src/fl_read_image.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 1940              		.loc 3 486 0
 1941 0d6b C7442430 		movl	$0, 48(%rsp)
 1941      00000000 
 1942 0d73 E9C8F9FF 		jmp	.L62
 1942      FF
 1943              	.LVL243:
 1944              	.L142:
 1945              	.LBB222:
 1946              	.LBB214:
 1947              	.LBB208:
 291:fltk-1.3.4-1/src/fl_read_image.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1948              		.loc 3 291 0
 1949 0d78 488B4424 		movq	56(%rsp), %rax
 1949      38
 1950              	.LVL244:
 1951 0d7d 4885C0   		testq	%rax, %rax
 1952 0d80 74A6     		je	.L97
 291:fltk-1.3.4-1/src/fl_read_image.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1953              		.loc 3 291 0 is_stmt 0 discriminator 1
 1954 0d82 4889C7   		movq	%rax, %rdi
 1955 0d85 E8000000 		call	free
 1955      00
 1956              	.LVL245:
 1957              	.LBE208:
 1958              	.LBE214:
 1959              	.LBE222:
 306:fltk-1.3.4-1/src/fl_read_image.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1960              		.loc 3 306 0 is_stmt 1 discriminator 1
 1961 0d8a 31C0     		xorl	%eax, %eax
 1962 0d8c E917F7FF 		jmp	.L11
 1962      FF
 1963              	.LVL246:
 1964              	.L143:
 1965              	.LBB223:
 1966              	.LBB215:
 1967              	.LBB209:
 300:fltk-1.3.4-1/src/fl_read_image.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 1968              		.loc 3 300 0
 1969 0d91 4C89E7   		movq	%r12, %rdi
 1970 0d94 41FF5424 		call	*96(%r12)
 1970      60
 1971              	.LVL247:
 1972              	.LBE209:
 1973              	.LBE215:
 1974              	.LBE223:
 306:fltk-1.3.4-1/src/fl_read_image.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1975              		.loc 3 306 0
 1976 0d99 31C0     		xorl	%eax, %eax
 1977 0d9b E908F7FF 		jmp	.L11
 1977      FF
 1978              	.LVL248:
 1979              	.L28:
 363:fltk-1.3.4-1/src/fl_read_image.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1980              		.loc 3 363 0
 1981 0da0 488B3500 		movq	fl_colormap(%rip), %rsi
 1981      000000
 1982 0da7 488B3D00 		movq	fl_display(%rip), %rdi
 1982      000000
 1983 0dae 488D9424 		leaq	12384(%rsp), %rdx
 1983      60300000 
 1984 0db6 E8000000 		call	XQueryColors
 1984      00
 1985              	.LVL249:
 1986 0dbb E962F5FF 		jmp	.L32
 1986      FF
 1987              	.LVL250:
 1988              	.L146:
 1989              		.loc 3 627 0
 1990 0dc0 E8000000 		call	__stack_chk_fail
 1990      00
 1991              	.LVL251:
 1992              		.cfi_endproc
 1993              	.LFE487:
 1995              		.section	.text.unlikely._ZL18read_win_rectanglePhiiiii
 1996              	.LCOLDE3:
 1997              		.section	.text._ZL18read_win_rectanglePhiiiii
 1998              	.LHOTE3:
 1999              		.section	.text.unlikely._ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12,"ax",@progbits
 2000              	.LCOLDB4:
 2001              		.section	.text._ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12,"ax",@progbits
 2002              	.LHOTB4:
 2003              		.p2align 4,,15
 2005              	_ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12:
 2006              	.LFB499:
  39:fltk-1.3.4-1/src/fl_read_image.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
 2007              		.loc 3 39 0
 2008              		.cfi_startproc
 2009              	.LVL252:
 2010 0000 4157     		pushq	%r15
 2011              		.cfi_def_cfa_offset 16
 2012              		.cfi_offset 15, -16
 2013 0002 4156     		pushq	%r14
 2014              		.cfi_def_cfa_offset 24
 2015              		.cfi_offset 14, -24
 2016 0004 4989F6   		movq	%rsi, %r14
 2017 0007 4155     		pushq	%r13
 2018              		.cfi_def_cfa_offset 32
 2019              		.cfi_offset 13, -32
 2020 0009 4154     		pushq	%r12
 2021              		.cfi_def_cfa_offset 40
 2022              		.cfi_offset 12, -40
 2023 000b 4989FC   		movq	%rdi, %r12
 2024 000e 55       		pushq	%rbp
 2025              		.cfi_def_cfa_offset 48
 2026              		.cfi_offset 6, -48
 2027 000f 53       		pushq	%rbx
 2028              		.cfi_def_cfa_offset 56
 2029              		.cfi_offset 3, -56
 2030 0010 4883EC18 		subq	$24, %rsp
 2031              		.cfi_def_cfa_offset 80
 2032 0014 448B7F14 		movl	20(%rdi), %r15d
 2033              	.LVL253:
 2034 0018 8B7F10   		movl	16(%rdi), %edi
 2035              	.LVL254:
  44:fltk-1.3.4-1/src/fl_read_image.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 2036              		.loc 3 44 0
 2037 001b 4585FF   		testl	%r15d, %r15d
 2038 001e 7509     		jne	.L156
 2039              	.LVL255:
 2040 0020 458B7C24 		movl	8(%r12), %r15d
 2040      08
 2041 0025 440FAFFF 		imull	%edi, %r15d
 2042              	.LVL256:
 2043              	.L156:
 2044 0029 418B7614 		movl	20(%r14), %esi
 2045              	.LVL257:
  45:fltk-1.3.4-1/src/fl_read_image.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
 2046              		.loc 3 45 0
 2047 002d 85F6     		testl	%esi, %esi
 2048 002f 7509     		jne	.L157
 2049              	.LVL258:
 2050 0031 418B7608 		movl	8(%r14), %esi
 2051 0035 410FAF76 		imull	16(%r14), %esi
 2051      10
 2052              	.LVL259:
 2053              	.L157:
  46:fltk-1.3.4-1/src/fl_read_image.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 2054              		.loc 3 46 0
 2055 003a 410FAFCF 		imull	%r15d, %ecx
 2056              	.LVL260:
 2057 003e 0FAFD7   		imull	%edi, %edx
 2058              	.LVL261:
 2059 0041 4863D9   		movslq	%ecx, %rbx
 2060 0044 4863C2   		movslq	%edx, %rax
 2061 0047 4801C3   		addq	%rax, %rbx
  47:fltk-1.3.4-1/src/fl_read_image.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 2062              		.loc 3 47 0
 2063 004a 418B460C 		movl	12(%r14), %eax
  46:fltk-1.3.4-1/src/fl_read_image.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 2064              		.loc 3 46 0
 2065 004e 49035C24 		addq	40(%r12), %rbx
 2065      28
 2066              	.LVL262:
  47:fltk-1.3.4-1/src/fl_read_image.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
 2067              		.loc 3 47 0
 2068 0053 448D68FF 		leal	-1(%rax), %r13d
 2069 0057 4963C7   		movslq	%r15d, %rax
 2070 005a 48890424 		movq	%rax, (%rsp)
 2071 005e 4863C6   		movslq	%esi, %rax
 2072 0061 4489ED   		movl	%r13d, %ebp
 2073 0064 48F7D8   		negq	%rax
 2074 0067 0FAFEE   		imull	%esi, %ebp
 2075 006a 48894424 		movq	%rax, 8(%rsp)
 2075      08
 2076 006f 4863ED   		movslq	%ebp, %rbp
 2077 0072 49036E28 		addq	40(%r14), %rbp
 2078              	.LVL263:
 2079              	.LBB224:
  48:fltk-1.3.4-1/src/fl_read_image.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 2080              		.loc 3 48 0
 2081 0076 4585ED   		testl	%r13d, %r13d
 2082 0079 0F888900 		js	.L154
 2082      0000
 2083 007f 418B7610 		movl	16(%r14), %esi
 2084              	.LVL264:
 2085              	.LBB225:
 2086              	.LBB226:
  49:fltk-1.3.4-1/src/fl_read_image.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 2087              		.loc 3 49 0
 2088 0083 39FE     		cmpl	%edi, %esi
 2089 0085 7468     		je	.L159
 2090              	.LVL265:
 2091 0087 660F1F84 		.p2align 4,,10
 2091      00000000 
 2091      00
 2092              		.p2align 3
 2093              	.L171:
 2094              	.LBB227:
  51:fltk-1.3.4-1/src/fl_read_image.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 2095              		.loc 3 51 0
 2096 0090 418B4608 		movl	8(%r14), %eax
 2097 0094 85C0     		testl	%eax, %eax
 2098 0096 7E37     		jle	.L162
 2099 0098 4531FF   		xorl	%r15d, %r15d
 2100 009b EB0C     		jmp	.L161
 2101              	.LVL266:
 2102 009d 0F1F00   		.p2align 4,,10
 2103              		.p2align 3
 2104              	.L170:
 2105 00a0 418B7610 		movl	16(%r14), %esi
 2106 00a4 418B7C24 		movl	16(%r12), %edi
 2106      10
 2107              	.LVL267:
 2108              	.L161:
 2109              	.LBB228:
 2110              	.LBB229:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 2111              		.loc 4 53 0
 2112 00a9 410FAFFF 		imull	%r15d, %edi
 2113              	.LVL268:
 2114 00ad 4863D6   		movslq	%esi, %rdx
 2115              	.LVL269:
 2116 00b0 410FAFF7 		imull	%r15d, %esi
 2117              	.LVL270:
 2118              	.LBE229:
 2119              	.LBE228:
  51:fltk-1.3.4-1/src/fl_read_image.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 2120              		.loc 3 51 0
 2121 00b4 4183C701 		addl	$1, %r15d
 2122              	.LVL271:
 2123              	.LBB231:
 2124              	.LBB230:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 2125              		.loc 4 53 0
 2126 00b8 4863FF   		movslq	%edi, %rdi
 2127 00bb 4863F6   		movslq	%esi, %rsi
 2128 00be 4801DF   		addq	%rbx, %rdi
 2129              	.LVL272:
 2130 00c1 4801EE   		addq	%rbp, %rsi
 2131              	.LVL273:
 2132 00c4 E8000000 		call	memcpy
 2132      00
 2133              	.LVL274:
 2134              	.LBE230:
 2135              	.LBE231:
  51:fltk-1.3.4-1/src/fl_read_image.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 2136              		.loc 3 51 0
 2137 00c9 45397E08 		cmpl	%r15d, 8(%r14)
 2138 00cd 7FD1     		jg	.L170
 2139              	.LVL275:
 2140              	.L162:
 2141              	.LBE227:
 2142              	.LBE226:
 2143              	.LBE225:
  48:fltk-1.3.4-1/src/fl_read_image.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 2144              		.loc 3 48 0
 2145 00cf 4183ED01 		subl	$1, %r13d
 2146              	.LVL276:
 2147              	.LBB235:
  55:fltk-1.3.4-1/src/fl_read_image.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 2148              		.loc 3 55 0
 2149 00d3 48031C24 		addq	(%rsp), %rbx
 2150              	.LVL277:
  56:fltk-1.3.4-1/src/fl_read_image.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 2151              		.loc 3 56 0
 2152 00d7 48036C24 		addq	8(%rsp), %rbp
 2152      08
 2153              	.LVL278:
 2154              	.LBE235:
  48:fltk-1.3.4-1/src/fl_read_image.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 2155              		.loc 3 48 0
 2156 00dc 4183FDFF 		cmpl	$-1, %r13d
 2157 00e0 7426     		je	.L154
 2158 00e2 418B7C24 		movl	16(%r12), %edi
 2158      10
 2159 00e7 418B7610 		movl	16(%r14), %esi
 2160              	.LVL279:
 2161              	.LBB236:
 2162              	.LBB234:
  49:fltk-1.3.4-1/src/fl_read_image.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 2163              		.loc 3 49 0
 2164 00eb 39FE     		cmpl	%edi, %esi
 2165 00ed 75A1     		jne	.L171
 2166              	.L159:
 2167              	.LVL280:
 2168              	.LBB232:
 2169              	.LBB233:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 2170              		.loc 4 53 0
 2171 00ef 410FAF7E 		imull	8(%r14), %edi
 2171      08
 2172              	.LVL281:
 2173 00f4 4889EE   		movq	%rbp, %rsi
 2174 00f7 4863D7   		movslq	%edi, %rdx
 2175              	.LVL282:
 2176 00fa 4889DF   		movq	%rbx, %rdi
 2177 00fd E8000000 		call	memcpy
 2177      00
 2178              	.LVL283:
 2179 0102 EBCB     		jmp	.L162
 2180              	.LVL284:
 2181              		.p2align 4,,10
 2182 0104 0F1F4000 		.p2align 3
 2183              	.L154:
 2184              	.LBE233:
 2185              	.LBE232:
 2186              	.LBE234:
 2187              	.LBE236:
 2188              	.LBE224:
  58:fltk-1.3.4-1/src/fl_read_image.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2189              		.loc 3 58 0
 2190 0108 4883C418 		addq	$24, %rsp
 2191              		.cfi_def_cfa_offset 56
 2192              	.LVL285:
 2193 010c 5B       		popq	%rbx
 2194              		.cfi_def_cfa_offset 48
 2195              	.LVL286:
 2196 010d 5D       		popq	%rbp
 2197              		.cfi_def_cfa_offset 40
 2198              	.LVL287:
 2199 010e 415C     		popq	%r12
 2200              		.cfi_def_cfa_offset 32
 2201              	.LVL288:
 2202 0110 415D     		popq	%r13
 2203              		.cfi_def_cfa_offset 24
 2204              	.LVL289:
 2205 0112 415E     		popq	%r14
 2206              		.cfi_def_cfa_offset 16
 2207              	.LVL290:
 2208 0114 415F     		popq	%r15
 2209              		.cfi_def_cfa_offset 8
 2210 0116 C3       		ret
 2211              		.cfi_endproc
 2212              	.LFE499:
 2214              		.section	.text.unlikely._ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12
 2215              	.LCOLDE4:
 2216              		.section	.text._ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12
 2217              	.LHOTE4:
 2218              		.section	.rodata.str1.1,"aMS",@progbits,1
 2219              	.LC5:
 2220 0000 666C746B 		.string	"fltk:device"
 2220      3A646576 
 2220      69636500 
 2221              	.LC6:
 2222 000c 6F70656E 		.string	"opengl.device.fltk.org"
 2222      676C2E64 
 2222      65766963 
 2222      652E666C 
 2222      746B2E6F 
 2223              		.section	.text.unlikely._ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.1
 2224              	.LCOLDB7:
 2225              		.section	.text._ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.11,"ax",@p
 2226              	.LHOTB7:
 2227              		.p2align 4,,15
 2229              	_ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.11:
 2230              	.LFB500:
  81:fltk-1.3.4-1/src/fl_read_image.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 2231              		.loc 3 81 0
 2232              		.cfi_startproc
 2233              	.LVL291:
 2234 0000 4157     		pushq	%r15
 2235              		.cfi_def_cfa_offset 16
 2236              		.cfi_offset 15, -16
 2237 0002 4156     		pushq	%r14
 2238              		.cfi_def_cfa_offset 24
 2239              		.cfi_offset 14, -24
 2240 0004 4189D6   		movl	%edx, %r14d
 2241 0007 4155     		pushq	%r13
 2242              		.cfi_def_cfa_offset 32
 2243              		.cfi_offset 13, -32
 2244 0009 4154     		pushq	%r12
 2245              		.cfi_def_cfa_offset 40
 2246              		.cfi_offset 12, -40
 2247 000b 4189CF   		movl	%ecx, %r15d
 2248 000e 55       		pushq	%rbp
 2249              		.cfi_def_cfa_offset 48
 2250              		.cfi_offset 6, -48
 2251 000f 53       		pushq	%rbx
 2252              		.cfi_def_cfa_offset 56
 2253              		.cfi_offset 3, -56
 2254 0010 4989FC   		movq	%rdi, %r12
 2255 0013 4883EC68 		subq	$104, %rsp
 2256              		.cfi_def_cfa_offset 160
 2257              	.LBB269:
  84:fltk-1.3.4-1/src/fl_read_image.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 2258              		.loc 3 84 0
 2259 0017 488B17   		movq	(%rdi), %rdx
 2260              	.LVL292:
 2261              	.LBE269:
  81:fltk-1.3.4-1/src/fl_read_image.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 2262              		.loc 3 81 0
 2263 001a 488B8424 		movq	168(%rsp), %rax
 2263      A8000000 
 2264 0022 48897424 		movq	%rsi, 24(%rsp)
 2264      18
 2265 0027 44894424 		movl	%r8d, 16(%rsp)
 2265      10
 2266 002c 44894C24 		movl	%r9d, 20(%rsp)
 2266      14
 2267 0031 48890424 		movq	%rax, (%rsp)
 2268 0035 64488B04 		movq	%fs:40, %rax
 2268      25280000 
 2268      00
 2269 003e 48894424 		movq	%rax, 88(%rsp)
 2269      58
 2270 0043 31C0     		xorl	%eax, %eax
 2271              	.LBB281:
  84:fltk-1.3.4-1/src/fl_read_image.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 2272              		.loc 3 84 0
 2273 0045 488B4248 		movq	72(%rdx), %rax
 2274 0049 483D0000 		cmpq	$_ZN9Fl_Widget12as_gl_windowEv, %rax
 2274      0000
 2275 004f 0F85DB00 		jne	.L262
 2275      0000
 2276              	.LVL293:
 2277              	.L173:
 2278              	.LBB270:
  99:fltk-1.3.4-1/src/fl_read_image.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 2279              		.loc 3 99 0
 2280 0055 488B4240 		movq	64(%rdx), %rax
 2281 0059 483D0000 		cmpq	$_ZN9Fl_Window9as_windowEv, %rax
 2281      0000
 2282 005f 0F85EA03 		jne	.L180
 2282      0000
 2283              	.L183:
 2284 0065 48833C24 		cmpq	$0, (%rsp)
 2284      00
 2285 006a 0F84F203 		je	.L263
 2285      0000
 2286 0070 4C89E7   		movq	%r12, %rdi
 2287 0073 E8000000 		call	_ZNK9Fl_Widget6windowEv
 2287      00
 2288              	.LVL294:
 2289 0078 4885C0   		testq	%rax, %rax
 2290 007b 0F84FE00 		je	.L179
 2290      0000
 2291 0081 4C89E7   		movq	%r12, %rdi
 2292 0084 E8000000 		call	_ZNK9Fl_Widget6windowEv
 2292      00
 2293              	.LVL295:
 2294 0089 488B10   		movq	(%rax), %rdx
 2295 008c 488B5248 		movq	72(%rdx), %rdx
 2296 0090 4881FA00 		cmpq	$_ZN9Fl_Widget12as_gl_windowEv, %rdx
 2296      000000
 2297 0097 0F84E200 		je	.L179
 2297      0000
 2298 009d 4889C7   		movq	%rax, %rdi
 2299 00a0 FFD2     		call	*%rdx
 2300              	.LVL296:
 2301 00a2 4885C0   		testq	%rax, %rax
 2302 00a5 0F84D400 		je	.L179
 2302      0000
 2303              	.LBB271:
 101:fltk-1.3.4-1/src/fl_read_image.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 2304              		.loc 3 101 0
 2305 00ab 498B0424 		movq	(%r12), %rax
 2306 00af 4C89E7   		movq	%r12, %rdi
 2307 00b2 488B5040 		movq	64(%rax), %rdx
 2308 00b6 4881FA00 		cmpq	$_ZN9Fl_Window9as_windowEv, %rdx
 2308      000000
 2309 00bd 0F852404 		jne	.L264
 2309      0000
 2310              	.L209:
 2311 00c3 E8000000 		call	_ZN9Fl_Window12make_currentEv
 2311      00
 2312              	.LVL297:
 108:fltk-1.3.4-1/src/fl_read_image.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 2313              		.loc 3 108 0
 2314 00c8 448B4424 		movl	20(%rsp), %r8d
 2314      14
 2315 00cd 448B8C24 		movl	160(%rsp), %r9d
 2315      A0000000 
 2316 00d5 31FF     		xorl	%edi, %edi
 2317 00d7 8B4C2410 		movl	16(%rsp), %ecx
 2318 00db 4489FA   		movl	%r15d, %edx
 2319 00de 4489F6   		movl	%r14d, %esi
 2320 00e1 E8000000 		call	_ZL18read_win_rectanglePhiiiii
 2320      00
 2321              	.LVL298:
 110:fltk-1.3.4-1/src/fl_read_image.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2322              		.loc 3 110 0
 2323 00e6 BF400000 		movl	$64, %edi
 2323      00
 108:fltk-1.3.4-1/src/fl_read_image.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 2324              		.loc 3 108 0
 2325 00eb 4889C3   		movq	%rax, %rbx
 2326              	.LVL299:
 110:fltk-1.3.4-1/src/fl_read_image.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2327              		.loc 3 110 0
 2328 00ee E8000000 		call	_Znwm
 2328      00
 2329              	.LVL300:
 2330 00f3 83BC24A0 		cmpl	$1, 160(%rsp)
 2330      00000001 
 2331 00fb 48890424 		movq	%rax, (%rsp)
 2332 00ff 4519C0   		sbbl	%r8d, %r8d
 2333 0102 4183C004 		addl	$4, %r8d
 2334              	.LVL301:
 2335              	.L187:
 2336 0106 4531C9   		xorl	%r9d, %r9d
 2337              	.L254:
 2338 0109 8B4C2414 		movl	20(%rsp), %ecx
 2339 010d 8B542410 		movl	16(%rsp), %edx
 2340 0111 4889DE   		movq	%rbx, %rsi
 2341 0114 488B3C24 		movq	(%rsp), %rdi
 2342 0118 E8000000 		call	_ZN12Fl_RGB_ImageC1EPKhiiii
 2342      00
 2343              	.LVL302:
 111:fltk-1.3.4-1/src/fl_read_image.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 2344              		.loc 3 111 0
 2345 011d 488B0424 		movq	(%rsp), %rax
 2346 0121 C7403001 		movl	$1, 48(%rax)
 2346      000000
 2347 0128 EB55     		jmp	.L179
 2348              	.LVL303:
 2349 012a 660F1F44 		.p2align 4,,10
 2349      0000
 2350              		.p2align 3
 2351              	.L262:
 2352              	.LBE271:
 2353              	.LBE270:
  84:fltk-1.3.4-1/src/fl_read_image.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 2354              		.loc 3 84 0
 2355 0130 FFD0     		call	*%rax
 2356              	.LVL304:
 2357 0132 4885C0   		testq	%rax, %rax
 2358 0135 0F84B903 		je	.L265
 2358      0000
 2359              	.LBB275:
  85:fltk-1.3.4-1/src/fl_read_image.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 2360              		.loc 3 85 0
 2361 013b 488D7C24 		leaq	64(%rsp), %rdi
 2361      40
 2362 0140 BE000000 		movl	$.LC5, %esi
 2362      00
 2363 0145 E8000000 		call	_ZN17Fl_Plugin_ManagerC1EPKc
 2363      00
 2364              	.LVL305:
  86:fltk-1.3.4-1/src/fl_read_image.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 2365              		.loc 3 86 0
 2366 014a 488D7C24 		leaq	64(%rsp), %rdi
 2366      40
 2367 014f BE000000 		movl	$.LC6, %esi
 2367      00
 2368 0154 E8000000 		call	_ZN17Fl_Plugin_Manager6pluginEPKc
 2368      00
 2369              	.LVL306:
  87:fltk-1.3.4-1/src/fl_read_image.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 2370              		.loc 3 87 0
 2371 0159 4885C0   		testq	%rax, %rax
 2372 015c 0F846B03 		je	.L266
 2372      0000
 2373              	.LVL307:
 2374              	.LBB276:
  89:fltk-1.3.4-1/src/fl_read_image.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
 2375              		.loc 3 89 0
 2376 0162 48833C24 		cmpq	$0, (%rsp)
 2376      00
 2377 0167 0F847B02 		je	.L267
 2377      0000
 2378              	.LVL308:
 2379              	.LBE276:
  85:fltk-1.3.4-1/src/fl_read_image.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
 2380              		.loc 3 85 0
 2381 016d 488D7C24 		leaq	64(%rsp), %rdi
 2381      40
 2382 0172 E8000000 		call	_ZN17Fl_Plugin_ManagerD1Ev
 2382      00
 2383              	.LVL309:
 2384 0177 48C70424 		movq	$0, (%rsp)
 2384      00000000 
 2385              	.LVL310:
 2386              	.L179:
 2387 017f 418B8424 		movl	144(%r12), %eax
 2387      90000000 
 2388              	.LVL311:
 2389              	.LBE275:
 2390              	.LBE281:
 2391              	.LBB282:
 114:fltk-1.3.4-1/src/fl_read_image.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 2392              		.loc 3 114 0
 2393 0187 85C0     		testl	%eax, %eax
 2394 0189 0F8E9901 		jle	.L176
 2394      0000
 2395 018f 83E801   		subl	$1, %eax
 2396 0192 31ED     		xorl	%ebp, %ebp
 2397 0194 4C8D2CC5 		leaq	8(,%rax,8), %r13
 2397      08000000 
 2398              	.LBB283:
 2399              	.LBB284:
 2400              	.LBB285:
 124:fltk-1.3.4-1/src/fl_read_image.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 2401              		.loc 3 124 0
 2402 019c 8B442410 		movl	16(%rsp), %eax
 2403 01a0 4401F0   		addl	%r14d, %eax
 2404 01a3 89442408 		movl	%eax, 8(%rsp)
 127:fltk-1.3.4-1/src/fl_read_image.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 2405              		.loc 3 127 0
 2406 01a7 8B442414 		movl	20(%rsp), %eax
 2407 01ab 4401F8   		addl	%r15d, %eax
 2408 01ae 8944240C 		movl	%eax, 12(%rsp)
 2409 01b2 EB11     		jmp	.L200
 2410              	.LVL312:
 2411              		.p2align 4,,10
 2412 01b4 0F1F4000 		.p2align 3
 2413              	.L199:
 2414 01b8 4883C508 		addq	$8, %rbp
 2415              	.LBE285:
 2416              	.LBE284:
 2417              	.LBE283:
 114:fltk-1.3.4-1/src/fl_read_image.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 2418              		.loc 3 114 0
 2419 01bc 4939ED   		cmpq	%rbp, %r13
 2420 01bf 0F846301 		je	.L176
 2420      0000
 2421              	.L200:
 2422              	.LVL313:
 2423              	.LBB296:
 2424              	.LBB292:
 2425              	.LBB293:
 2426              		.file 5 "fltk-1.3.4-1/FL/Fl_Group.H"
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
 2427              		.loc 5 79 0
 2428 01c5 4C89E7   		movq	%r12, %rdi
 2429 01c8 E8000000 		call	_ZNK8Fl_Group5arrayEv
 2429      00
 2430              	.LVL314:
 2431 01cd 488B1C28 		movq	(%rax,%rbp), %rbx
 2432              	.LVL315:
 2433              	.LBE293:
 2434              	.LBE292:
 116:fltk-1.3.4-1/src/fl_read_image.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 2435              		.loc 3 116 0
 2436 01d1 F6436002 		testb	$2, 96(%rbx)
 2437 01d5 75E1     		jne	.L199
 2438 01d7 488B03   		movq	(%rbx), %rax
 2439 01da 4889DF   		movq	%rbx, %rdi
 2440 01dd FF5038   		call	*56(%rax)
 2441              	.LVL316:
 2442 01e0 4885C0   		testq	%rax, %rax
 2443 01e3 74D3     		je	.L199
 2444              	.LBB294:
 117:fltk-1.3.4-1/src/fl_read_image.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 2445              		.loc 3 117 0
 2446 01e5 488B03   		movq	(%rbx), %rax
 2447 01e8 488B4040 		movq	64(%rax), %rax
 2448 01ec 483D0000 		cmpq	$_ZN9Fl_Window9as_windowEv, %rax
 2448      0000
 2449 01f2 0F855801 		jne	.L268
 2449      0000
 2450              	.L201:
 2451              	.LVL317:
 2452 01f8 8B4320   		movl	32(%rbx), %eax
 2453              	.LVL318:
 2454 01fb 448B4B28 		movl	40(%rbx), %r9d
 2455 01ff 8B5324   		movl	36(%rbx), %edx
 2456 0202 4139C6   		cmpl	%eax, %r14d
 2457 0205 4189C3   		movl	%eax, %r11d
 2458              	.LBB290:
 123:fltk-1.3.4-1/src/fl_read_image.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 2459              		.loc 3 123 0
 2460 0208 428D3408 		leal	(%rax,%r9), %esi
 2461 020c 450F4DDE 		cmovge	%r14d, %r11d
 2462              	.LVL319:
 2463 0210 4189D2   		movl	%edx, %r10d
 2464 0213 4139D7   		cmpl	%edx, %r15d
 2465 0216 438D0C0B 		leal	(%r11,%r9), %ecx
 2466 021a 450F4DD7 		cmovge	%r15d, %r10d
 2467              	.LVL320:
 122:fltk-1.3.4-1/src/fl_read_image.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 2468              		.loc 3 122 0
 2469 021e 4589C8   		movl	%r9d, %r8d
 123:fltk-1.3.4-1/src/fl_read_image.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 2470              		.loc 3 123 0
 2471 0221 39F1     		cmpl	%esi, %ecx
 2472 0223 7E08     		jle	.L191
 2473              	.LVL321:
 2474 0225 4189F0   		movl	%esi, %r8d
 2475 0228 89F1     		movl	%esi, %ecx
 2476 022a 4529D8   		subl	%r11d, %r8d
 2477              	.LVL322:
 2478              	.L191:
 124:fltk-1.3.4-1/src/fl_read_image.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 2479              		.loc 3 124 0
 2480 022d 8B7C2408 		movl	8(%rsp), %edi
 2481 0231 89FE     		movl	%edi, %esi
 2482 0233 4429DE   		subl	%r11d, %esi
 2483 0236 39F9     		cmpl	%edi, %ecx
 126:fltk-1.3.4-1/src/fl_read_image.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 2484              		.loc 3 126 0
 2485 0238 438D0C11 		leal	(%r9,%r10), %ecx
 124:fltk-1.3.4-1/src/fl_read_image.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 2486              		.loc 3 124 0
 2487 023c 440F4FC6 		cmovg	%esi, %r8d
 2488              	.LVL323:
 126:fltk-1.3.4-1/src/fl_read_image.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 2489              		.loc 3 126 0
 2490 0240 8B732C   		movl	44(%rbx), %esi
 2491 0243 01D6     		addl	%edx, %esi
 2492 0245 39F1     		cmpl	%esi, %ecx
 2493 0247 7E08     		jle	.L193
 2494              	.LVL324:
 2495 0249 4189F1   		movl	%esi, %r9d
 2496 024c 89F1     		movl	%esi, %ecx
 2497 024e 4529D1   		subl	%r10d, %r9d
 2498              	.LVL325:
 2499              	.L193:
 127:fltk-1.3.4-1/src/fl_read_image.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 2500              		.loc 3 127 0
 2501 0251 8B7C240C 		movl	12(%rsp), %edi
 2502 0255 89FE     		movl	%edi, %esi
 2503 0257 4429D6   		subl	%r10d, %esi
 2504 025a 39F9     		cmpl	%edi, %ecx
 2505 025c 440F4FCE 		cmovg	%esi, %r9d
 2506              	.LVL326:
 2507              	.LBB286:
 128:fltk-1.3.4-1/src/fl_read_image.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 2508              		.loc 3 128 0
 2509 0260 4585C0   		testl	%r8d, %r8d
 2510 0263 0F8E4FFF 		jle	.L199
 2510      FFFF
 2511 0269 4585C9   		testl	%r9d, %r9d
 2512 026c 0F8E46FF 		jle	.L199
 2512      FFFF
 2513              	.LVL327:
 2514              	.LBB287:
 129:fltk-1.3.4-1/src/fl_read_image.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2515              		.loc 3 129 0
 2516 0272 4489D1   		movl	%r10d, %ecx
 2517 0275 4889DF   		movq	%rbx, %rdi
 2518 0278 29D1     		subl	%edx, %ecx
 2519              	.LVL328:
 2520 027a 4489DA   		movl	%r11d, %edx
 2521 027d 29C2     		subl	%eax, %edx
 2522 027f 488B03   		movq	(%rbx), %rax
 2523 0282 488B4040 		movq	64(%rax), %rax
 2524 0286 483D0000 		cmpq	$_ZN9Fl_Window9as_windowEv, %rax
 2524      0000
 2525 028c 0F850E01 		jne	.L269
 2525      0000
 2526              	.LVL329:
 2527              	.L196:
 2528 0292 44895424 		movl	%r10d, 40(%rsp)
 2528      28
 2529 0297 44895C24 		movl	%r11d, 32(%rsp)
 2529      20
 130:fltk-1.3.4-1/src/fl_read_image.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 2530              		.loc 3 130 0
 2531 029c FF3424   		pushq	(%rsp)
 2532              		.cfi_def_cfa_offset 168
 2533              	.LVL330:
 2534 029f 8BB424A8 		movl	168(%rsp), %esi
 2534      000000
 2535 02a6 56       		pushq	%rsi
 2536              		.cfi_def_cfa_offset 176
 2537 02a7 488B7424 		movq	40(%rsp), %rsi
 2537      28
 2538 02ac E84FFDFF 		call	_ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.11
 2538      FF
 2539              	.LVL331:
 131:fltk-1.3.4-1/src/fl_read_image.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 2540              		.loc 3 131 0
 2541 02b1 5F       		popq	%rdi
 2542              		.cfi_def_cfa_offset 168
 2543 02b2 4159     		popq	%r9
 2544              		.cfi_def_cfa_offset 160
 2545              	.LVL332:
 2546 02b4 48390424 		cmpq	%rax, (%rsp)
 130:fltk-1.3.4-1/src/fl_read_image.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 2547              		.loc 3 130 0
 2548 02b8 4989C0   		movq	%rax, %r8
 2549              	.LVL333:
 131:fltk-1.3.4-1/src/fl_read_image.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 2550              		.loc 3 131 0
 2551 02bb 0F84F7FE 		je	.L199
 2551      FFFF
 133:fltk-1.3.4-1/src/fl_read_image.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 2552              		.loc 3 133 0
 2553 02c1 488B03   		movq	(%rbx), %rax
 2554              	.LVL334:
 2555 02c4 448B5C24 		movl	32(%rsp), %r11d
 2555      20
 2556 02c9 448B5424 		movl	40(%rsp), %r10d
 2556      28
 2557 02ce 488B4048 		movq	72(%rax), %rax
 2558 02d2 483D0000 		cmpq	$_ZN9Fl_Widget12as_gl_windowEv, %rax
 2558      0000
 2559 02d8 0F851A01 		jne	.L270
 2559      0000
 2560              	.LVL335:
 2561              	.L197:
 138:fltk-1.3.4-1/src/fl_read_image.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 2562              		.loc 3 138 0
 2563 02de 488B0424 		movq	(%rsp), %rax
 2564 02e2 4529FA   		subl	%r15d, %r10d
 2565              	.LVL336:
 2566 02e5 4503500C 		addl	12(%r8), %r10d
 2567 02e9 4C89C6   		movq	%r8, %rsi
 2568 02ec 4C894424 		movq	%r8, 32(%rsp)
 2568      20
 2569 02f1 8B500C   		movl	12(%rax), %edx
 2570 02f4 4889C7   		movq	%rax, %rdi
 2571 02f7 89D1     		movl	%edx, %ecx
 2572 02f9 4489DA   		movl	%r11d, %edx
 2573 02fc 4429D1   		subl	%r10d, %ecx
 2574 02ff 4429F2   		subl	%r14d, %edx
 2575 0302 E8000000 		call	_ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12
 2575      00
 2576              	.LVL337:
 2577 0307 4C8B4424 		movq	32(%rsp), %r8
 2577      20
 2578              	.LVL338:
 2579              	.L198:
 139:fltk-1.3.4-1/src/fl_read_image.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2580              		.loc 3 139 0
 2581 030c 498B00   		movq	(%r8), %rax
 2582 030f 4883C508 		addq	$8, %rbp
 2583 0313 4C89C7   		movq	%r8, %rdi
 2584 0316 FF5008   		call	*8(%rax)
 2585              	.LVL339:
 2586              	.LBE287:
 2587              	.LBE286:
 2588              	.LBE290:
 2589              	.LBE294:
 2590              	.LBE296:
 114:fltk-1.3.4-1/src/fl_read_image.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 2591              		.loc 3 114 0
 2592 0319 4939ED   		cmpq	%rbp, %r13
 2593 031c 0F85A3FE 		jne	.L200
 2593      FFFF
 2594              	.LVL340:
 2595              		.p2align 4,,10
 2596 0322 660F1F44 		.p2align 3
 2596      0000
 2597              	.L176:
 2598              	.LBE282:
 145:fltk-1.3.4-1/src/fl_read_image.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 2599              		.loc 3 145 0
 2600 0328 488B5424 		movq	88(%rsp), %rdx
 2600      58
 2601 032d 64483314 		xorq	%fs:40, %rdx
 2601      25280000 
 2601      00
 2602 0336 488B0424 		movq	(%rsp), %rax
 2603 033a 0F85BD01 		jne	.L271
 2603      0000
 2604 0340 4883C468 		addq	$104, %rsp
 2605              		.cfi_remember_state
 2606              		.cfi_def_cfa_offset 56
 2607 0344 5B       		popq	%rbx
 2608              		.cfi_def_cfa_offset 48
 2609 0345 5D       		popq	%rbp
 2610              		.cfi_def_cfa_offset 40
 2611 0346 415C     		popq	%r12
 2612              		.cfi_def_cfa_offset 32
 2613              	.LVL341:
 2614 0348 415D     		popq	%r13
 2615              		.cfi_def_cfa_offset 24
 2616 034a 415E     		popq	%r14
 2617              		.cfi_def_cfa_offset 16
 2618              	.LVL342:
 2619 034c 415F     		popq	%r15
 2620              		.cfi_def_cfa_offset 8
 2621              	.LVL343:
 2622 034e C3       		ret
 2623              	.LVL344:
 2624 034f 90       		.p2align 4,,10
 2625              		.p2align 3
 2626              	.L268:
 2627              		.cfi_restore_state
 2628              	.LBB298:
 2629              	.LBB297:
 2630              	.LBB295:
 117:fltk-1.3.4-1/src/fl_read_image.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 2631              		.loc 3 117 0
 2632 0350 4889DF   		movq	%rbx, %rdi
 2633 0353 FFD0     		call	*%rax
 2634              	.LVL345:
 2635 0355 4885C0   		testq	%rax, %rax
 2636 0358 0F859AFE 		jne	.L201
 2636      FFFF
 142:fltk-1.3.4-1/src/fl_read_image.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 2637              		.loc 3 142 0
 2638 035e 488B03   		movq	(%rbx), %rax
 2639 0361 4889DF   		movq	%rbx, %rdi
 2640 0364 FF5038   		call	*56(%rax)
 2641              	.LVL346:
 2642 0367 FF3424   		pushq	(%rsp)
 2643              		.cfi_def_cfa_offset 168
 2644              	.LVL347:
 2645 036a 8B9424A8 		movl	168(%rsp), %edx
 2645      000000
 2646 0371 4489F9   		movl	%r15d, %ecx
 2647 0374 4889C7   		movq	%rax, %rdi
 2648 0377 52       		pushq	%rdx
 2649              		.cfi_def_cfa_offset 176
 2650 0378 448B4C24 		movl	36(%rsp), %r9d
 2650      24
 2651 037d 4489F2   		movl	%r14d, %edx
 2652 0380 448B4424 		movl	32(%rsp), %r8d
 2652      20
 2653 0385 488B7424 		movq	40(%rsp), %rsi
 2653      28
 2654 038a E871FCFF 		call	_ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.11
 2654      FF
 2655              	.LVL348:
 2656 038f 59       		popq	%rcx
 2657              		.cfi_def_cfa_offset 168
 2658 0390 5E       		popq	%rsi
 2659              		.cfi_def_cfa_offset 160
 2660              	.LVL349:
 2661 0391 E922FEFF 		jmp	.L199
 2661      FF
 2662              	.LVL350:
 2663 0396 662E0F1F 		.p2align 4,,10
 2663      84000000 
 2663      0000
 2664              		.p2align 3
 2665              	.L269:
 2666 03a0 44895424 		movl	%r10d, 60(%rsp)
 2666      3C
 2667 03a5 89542438 		movl	%edx, 56(%rsp)
 2668 03a9 894C2434 		movl	%ecx, 52(%rsp)
 2669 03ad 44894424 		movl	%r8d, 48(%rsp)
 2669      30
 2670 03b2 44894C24 		movl	%r9d, 40(%rsp)
 2670      28
 2671 03b7 44895C24 		movl	%r11d, 32(%rsp)
 2671      20
 2672              	.LBB291:
 2673              	.LBB289:
 2674              	.LBB288:
 129:fltk-1.3.4-1/src/fl_read_image.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 2675              		.loc 3 129 0
 2676 03bc FFD0     		call	*%rax
 2677              	.LVL351:
 2678 03be 448B5424 		movl	60(%rsp), %r10d
 2678      3C
 2679 03c3 4889C7   		movq	%rax, %rdi
 2680 03c6 8B542438 		movl	56(%rsp), %edx
 2681 03ca 8B4C2434 		movl	52(%rsp), %ecx
 2682 03ce 448B4424 		movl	48(%rsp), %r8d
 2682      30
 2683 03d3 448B4C24 		movl	40(%rsp), %r9d
 2683      28
 2684 03d8 448B5C24 		movl	32(%rsp), %r11d
 2684      20
 2685 03dd E9B0FEFF 		jmp	.L196
 2685      FF
 2686              	.LVL352:
 2687              		.p2align 4,,10
 2688 03e2 660F1F44 		.p2align 3
 2688      0000
 2689              	.L267:
 2690 03e8 8B042508 		movl	8, %eax
 2690      000000
 2691              	.LVL353:
 2692 03ef 0F0B     		ud2
 2693              	.LVL354:
 2694              		.p2align 4,,10
 2695 03f1 0F1F8000 		.p2align 3
 2695      000000
 2696              	.L270:
 2697 03f8 44895424 		movl	%r10d, 48(%rsp)
 2697      30
 2698 03fd 4C894424 		movq	%r8, 40(%rsp)
 2698      28
 133:fltk-1.3.4-1/src/fl_read_image.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 2699              		.loc 3 133 0
 2700 0402 4889DF   		movq	%rbx, %rdi
 2701 0405 FFD0     		call	*%rax
 2702              	.LVL355:
 2703 0407 4885C0   		testq	%rax, %rax
 2704 040a 448B5C24 		movl	32(%rsp), %r11d
 2704      20
 2705 040f 4C8B4424 		movq	40(%rsp), %r8
 2705      28
 2706 0414 448B5424 		movl	48(%rsp), %r10d
 2706      30
 2707 0419 0F84BFFE 		je	.L197
 2707      FFFF
 2708              	.LVL356:
 138:fltk-1.3.4-1/src/fl_read_image.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 2709              		.loc 3 138 0
 2710 041f 488B3C24 		movq	(%rsp), %rdi
 2711 0423 4489D1   		movl	%r10d, %ecx
 2712 0426 4489DA   		movl	%r11d, %edx
 2713 0429 4429F9   		subl	%r15d, %ecx
 2714              	.LVL357:
 2715 042c 4429F2   		subl	%r14d, %edx
 2716 042f 4C89C6   		movq	%r8, %rsi
 2717 0432 4C894424 		movq	%r8, 32(%rsp)
 2717      20
 2718 0437 E8000000 		call	_ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12
 2718      00
 2719              	.LVL358:
 139:fltk-1.3.4-1/src/fl_read_image.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2720              		.loc 3 139 0
 2721 043c 4C8B4424 		movq	32(%rsp), %r8
 2721      20
 2722 0441 4D85C0   		testq	%r8, %r8
 2723 0444 0F85C2FE 		jne	.L198
 2723      FFFF
 2724 044a E969FDFF 		jmp	.L199
 2724      FF
 2725              	.LVL359:
 2726              	.L180:
 2727              	.LBE288:
 2728              	.LBE289:
 2729              	.LBE291:
 2730              	.LBE295:
 2731              	.LBE297:
 2732              	.LBE298:
 2733              	.LBB299:
 2734              	.LBB277:
  99:fltk-1.3.4-1/src/fl_read_image.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 2735              		.loc 3 99 0
 2736 044f 4C89E7   		movq	%r12, %rdi
 2737 0452 FFD0     		call	*%rax
 2738              	.LVL360:
 2739 0454 4885C0   		testq	%rax, %rax
 2740 0457 0F8422FD 		je	.L179
 2740      FFFF
 2741 045d E903FCFF 		jmp	.L183
 2741      FF
 2742              	.L263:
 2743              	.LVL361:
 2744              	.LBB272:
 108:fltk-1.3.4-1/src/fl_read_image.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 2745              		.loc 3 108 0
 2746 0462 48837C24 		cmpq	$0, 24(%rsp)
 2746      1800
 2747 0468 0F849400 		je	.L272
 2747      0000
 2748 046e 448B8C24 		movl	160(%rsp), %r9d
 2748      A0000000 
 2749 0476 448B4424 		movl	20(%rsp), %r8d
 2749      14
 2750 047b 4489FA   		movl	%r15d, %edx
 2751 047e 8B4C2410 		movl	16(%rsp), %ecx
 2752 0482 488B7C24 		movq	24(%rsp), %rdi
 2752      18
 2753 0487 4489F6   		movl	%r14d, %esi
 2754 048a E8000000 		call	_ZL18read_win_rectanglePhiiiii
 2754      00
 2755              	.LVL362:
 110:fltk-1.3.4-1/src/fl_read_image.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2756              		.loc 3 110 0
 2757 048f BF400000 		movl	$64, %edi
 2757      00
 108:fltk-1.3.4-1/src/fl_read_image.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 2758              		.loc 3 108 0
 2759 0494 4889C3   		movq	%rax, %rbx
 2760              	.LVL363:
 110:fltk-1.3.4-1/src/fl_read_image.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2761              		.loc 3 110 0
 2762 0497 E8000000 		call	_Znwm
 2762      00
 2763              	.LVL364:
 2764 049c 48890424 		movq	%rax, (%rsp)
 2765 04a0 8B8424A0 		movl	160(%rsp), %eax
 2765      000000
 2766 04a7 85C0     		testl	%eax, %eax
 2767 04a9 7431     		je	.L273
 2768 04ab 4531C9   		xorl	%r9d, %r9d
 2769 04ae 41B80400 		movl	$4, %r8d
 2769      0000
 2770              	.L255:
 2771 04b4 8B4C2414 		movl	20(%rsp), %ecx
 2772 04b8 8B542410 		movl	16(%rsp), %edx
 2773 04bc 4889DE   		movq	%rbx, %rsi
 2774 04bf 488B3C24 		movq	(%rsp), %rdi
 2775 04c3 E8000000 		call	_ZN12Fl_RGB_ImageC1EPKhiiii
 2775      00
 2776              	.LVL365:
 2777 04c8 E9B2FCFF 		jmp	.L179
 2777      FF
 2778              	.LVL366:
 2779              	.L266:
 2780              	.LBE272:
 2781              	.LBE277:
 2782              	.LBB278:
  87:fltk-1.3.4-1/src/fl_read_image.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 2783              		.loc 3 87 0
 2784 04cd 488D7C24 		leaq	64(%rsp), %rdi
 2784      40
 2785 04d2 E8000000 		call	_ZN17Fl_Plugin_ManagerD1Ev
 2785      00
 2786              	.LVL367:
 2787 04d7 E94CFEFF 		jmp	.L176
 2787      FF
 2788              	.LVL368:
 2789              	.L273:
 2790              	.LBE278:
 2791              	.LBB279:
 2792              	.LBB273:
 110:fltk-1.3.4-1/src/fl_read_image.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2793              		.loc 3 110 0
 2794 04dc 4531C9   		xorl	%r9d, %r9d
 2795 04df 41B80300 		movl	$3, %r8d
 2795      0000
 2796 04e5 EBCD     		jmp	.L255
 2797              	.LVL369:
 2798              	.L264:
 101:fltk-1.3.4-1/src/fl_read_image.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 2799              		.loc 3 101 0
 2800 04e7 4C89E7   		movq	%r12, %rdi
 2801              	.LVL370:
 2802 04ea FFD2     		call	*%rdx
 2803              	.LVL371:
 2804 04ec 4889C7   		movq	%rax, %rdi
 2805 04ef E9CFFBFF 		jmp	.L209
 2805      FF
 2806              	.L265:
 2807 04f4 498B1424 		movq	(%r12), %rdx
 2808 04f8 E958FBFF 		jmp	.L173
 2808      FF
 2809              	.LVL372:
 2810              	.L271:
 2811              	.LBE273:
 2812              	.LBE279:
 2813              	.LBE299:
 145:fltk-1.3.4-1/src/fl_read_image.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 2814              		.loc 3 145 0
 2815 04fd E8000000 		call	__stack_chk_fail
 2815      00
 2816              	.LVL373:
 2817              	.L272:
 2818              	.LBB300:
 2819              	.LBB280:
 2820              	.LBB274:
 108:fltk-1.3.4-1/src/fl_read_image.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 2821              		.loc 3 108 0
 2822 0502 448B4424 		movl	20(%rsp), %r8d
 2822      14
 2823 0507 448B8C24 		movl	160(%rsp), %r9d
 2823      A0000000 
 2824 050f 4489FA   		movl	%r15d, %edx
 2825 0512 8B4C2410 		movl	16(%rsp), %ecx
 2826 0516 31FF     		xorl	%edi, %edi
 2827 0518 4489F6   		movl	%r14d, %esi
 2828 051b E8000000 		call	_ZL18read_win_rectanglePhiiiii
 2828      00
 2829              	.LVL374:
 110:fltk-1.3.4-1/src/fl_read_image.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2830              		.loc 3 110 0
 2831 0520 BF400000 		movl	$64, %edi
 2831      00
 108:fltk-1.3.4-1/src/fl_read_image.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 2832              		.loc 3 108 0
 2833 0525 4889C3   		movq	%rax, %rbx
 2834              	.LVL375:
 110:fltk-1.3.4-1/src/fl_read_image.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 2835              		.loc 3 110 0
 2836 0528 E8000000 		call	_Znwm
 2836      00
 2837              	.LVL376:
 2838 052d 8B9424A0 		movl	160(%rsp), %edx
 2838      000000
 2839 0534 48890424 		movq	%rax, (%rsp)
 2840 0538 41B80300 		movl	$3, %r8d
 2840      0000
 2841 053e 85D2     		testl	%edx, %edx
 2842 0540 0F84C0FB 		je	.L187
 2842      FFFF
 2843 0546 4531C9   		xorl	%r9d, %r9d
 2844 0549 41B80400 		movl	$4, %r8d
 2844      0000
 2845 054f E9B5FBFF 		jmp	.L254
 2845      FF
 2846              	.LBE274:
 2847              	.LBE280:
 2848              	.LBE300:
 2849              		.cfi_endproc
 2850              	.LFE500:
 2852              		.section	.text.unlikely._ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.1
 2853              	.LCOLDE7:
 2854              		.section	.text._ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.11
 2855              	.LHOTE7:
 2856              		.section	.text.unlikely._Z13fl_read_imagePhiiiii,"ax",@progbits
 2857              	.LCOLDB8:
 2858              		.section	.text._Z13fl_read_imagePhiiiii,"ax",@progbits
 2859              	.LHOTB8:
 2860              		.p2align 4,,15
 2861              		.globl	_Z13fl_read_imagePhiiiii
 2863              	_Z13fl_read_imagePhiiiii:
 2864              	.LFB484:
 159:fltk-1.3.4-1/src/fl_read_image.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 2865              		.loc 3 159 0
 2866              		.cfi_startproc
 2867              	.LVL377:
 2868 0000 4157     		pushq	%r15
 2869              		.cfi_def_cfa_offset 16
 2870              		.cfi_offset 15, -16
 2871 0002 4156     		pushq	%r14
 2872              		.cfi_def_cfa_offset 24
 2873              		.cfi_offset 14, -24
 2874 0004 4589CF   		movl	%r9d, %r15d
 2875 0007 4155     		pushq	%r13
 2876              		.cfi_def_cfa_offset 32
 2877              		.cfi_offset 13, -32
 2878 0009 4154     		pushq	%r12
 2879              		.cfi_def_cfa_offset 40
 2880              		.cfi_offset 12, -40
 2881 000b 4189D5   		movl	%edx, %r13d
 2882 000e 55       		pushq	%rbp
 2883              		.cfi_def_cfa_offset 48
 2884              		.cfi_offset 6, -48
 2885 000f 53       		pushq	%rbx
 2886              		.cfi_def_cfa_offset 56
 2887              		.cfi_offset 3, -56
 2888 0010 4889FD   		movq	%rdi, %rbp
 2889 0013 4189F4   		movl	%esi, %r12d
 2890 0016 89CB     		movl	%ecx, %ebx
 2891 0018 4589C6   		movl	%r8d, %r14d
 2892 001b 4883EC08 		subq	$8, %rsp
 2893              		.cfi_def_cfa_offset 64
 160:fltk-1.3.4-1/src/fl_read_image.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2894              		.loc 3 160 0
 2895 001f 85C9     		testl	%ecx, %ecx
 2896 0021 785D     		js	.L275
 160:fltk-1.3.4-1/src/fl_read_image.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 2897              		.loc 3 160 0 is_stmt 0 discriminator 2
 2898 0023 488B3D00 		movq	fl_window(%rip), %rdi
 2898      000000
 2899              	.LVL378:
 2900 002a E8000000 		call	_Z7fl_findm
 2900      00
 2901              	.LVL379:
 2902 002f 4885C0   		testq	%rax, %rax
 2903 0032 744C     		je	.L275
 163:fltk-1.3.4-1/src/fl_read_image.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 2904              		.loc 3 163 0 is_stmt 1
 2905 0034 E8000000 		call	_ZN9Fl_Window7currentEv
 2905      00
 2906              	.LVL380:
 2907 0039 6A00     		pushq	$0
 2908              		.cfi_def_cfa_offset 72
 2909 003b 4157     		pushq	%r15
 2910              		.cfi_def_cfa_offset 80
 2911 003d 4589F1   		movl	%r14d, %r9d
 2912 0040 4189D8   		movl	%ebx, %r8d
 2913 0043 4489E9   		movl	%r13d, %ecx
 2914 0046 4489E2   		movl	%r12d, %edx
 2915 0049 4889EE   		movq	%rbp, %rsi
 2916 004c 4889C7   		movq	%rax, %rdi
 2917 004f E8000000 		call	_ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.11
 2917      00
 2918              	.LVL381:
 166:fltk-1.3.4-1/src/fl_read_image.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2919              		.loc 3 166 0
 2920 0054 488B10   		movq	(%rax), %rdx
 164:fltk-1.3.4-1/src/fl_read_image.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 2921              		.loc 3 164 0
 2922 0057 488B5828 		movq	40(%rax), %rbx
 2923              	.LVL382:
 163:fltk-1.3.4-1/src/fl_read_image.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 2924              		.loc 3 163 0
 2925 005b 4889C7   		movq	%rax, %rdi
 2926              	.LVL383:
 165:fltk-1.3.4-1/src/fl_read_image.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 2927              		.loc 3 165 0
 2928 005e C7403000 		movl	$0, 48(%rax)
 2928      000000
 166:fltk-1.3.4-1/src/fl_read_image.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2929              		.loc 3 166 0
 2930 0065 FF5208   		call	*8(%rdx)
 2931              	.LVL384:
 168:fltk-1.3.4-1/src/fl_read_image.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 2932              		.loc 3 168 0
 2933 0068 4883C418 		addq	$24, %rsp
 2934              		.cfi_def_cfa_offset 56
 2935 006c 4889D8   		movq	%rbx, %rax
 2936 006f 5B       		popq	%rbx
 2937              		.cfi_def_cfa_offset 48
 2938              	.LVL385:
 2939 0070 5D       		popq	%rbp
 2940              		.cfi_def_cfa_offset 40
 2941              	.LVL386:
 2942 0071 415C     		popq	%r12
 2943              		.cfi_def_cfa_offset 32
 2944              	.LVL387:
 2945 0073 415D     		popq	%r13
 2946              		.cfi_def_cfa_offset 24
 2947              	.LVL388:
 2948 0075 415E     		popq	%r14
 2949              		.cfi_def_cfa_offset 16
 2950              	.LVL389:
 2951 0077 415F     		popq	%r15
 2952              		.cfi_def_cfa_offset 8
 2953              	.LVL390:
 2954 0079 C3       		ret
 2955              	.LVL391:
 2956 007a 660F1F44 		.p2align 4,,10
 2956      0000
 2957              		.p2align 3
 2958              	.L275:
 2959              		.cfi_def_cfa_offset 64
 2960 0080 4883C408 		addq	$8, %rsp
 2961              		.cfi_def_cfa_offset 56
 161:fltk-1.3.4-1/src/fl_read_image.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2962              		.loc 3 161 0
 2963 0084 4589F9   		movl	%r15d, %r9d
 2964 0087 4589F0   		movl	%r14d, %r8d
 2965 008a 89D9     		movl	%ebx, %ecx
 2966 008c 4489EA   		movl	%r13d, %edx
 2967 008f 4489E6   		movl	%r12d, %esi
 168:fltk-1.3.4-1/src/fl_read_image.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 2968              		.loc 3 168 0
 2969 0092 5B       		popq	%rbx
 2970              		.cfi_def_cfa_offset 48
 2971              	.LVL392:
 161:fltk-1.3.4-1/src/fl_read_image.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2972              		.loc 3 161 0
 2973 0093 4889EF   		movq	%rbp, %rdi
 168:fltk-1.3.4-1/src/fl_read_image.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 2974              		.loc 3 168 0
 2975 0096 5D       		popq	%rbp
 2976              		.cfi_def_cfa_offset 40
 2977              	.LVL393:
 2978 0097 415C     		popq	%r12
 2979              		.cfi_def_cfa_offset 32
 2980              	.LVL394:
 2981 0099 415D     		popq	%r13
 2982              		.cfi_def_cfa_offset 24
 2983              	.LVL395:
 2984 009b 415E     		popq	%r14
 2985              		.cfi_def_cfa_offset 16
 2986              	.LVL396:
 2987 009d 415F     		popq	%r15
 2988              		.cfi_def_cfa_offset 8
 2989              	.LVL397:
 161:fltk-1.3.4-1/src/fl_read_image.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 2990              		.loc 3 161 0
 2991 009f E9000000 		jmp	_ZL18read_win_rectanglePhiiiii
 2991      00
 2992              	.LVL398:
 2993              		.cfi_endproc
 2994              	.LFE484:
 2996              		.section	.text.unlikely._Z13fl_read_imagePhiiiii
 2997              	.LCOLDE8:
 2998              		.section	.text._Z13fl_read_imagePhiiiii
 2999              	.LHOTE8:
 3000              		.text
 3001              	.Letext0:
 3002              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
 3003              	.Letext_cold0:
 3004              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 3005              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 3006              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3007              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3008              		.file 10 "/usr/include/X11/X.h"
 3009              		.file 11 "/usr/include/X11/Xlib.h"
 3010              		.file 12 "/usr/include/X11/Xutil.h"
 3011              		.file 13 "fltk-1.3.4-1/FL/Fl_Image.H"
 3012              		.file 14 "/usr/include/libio.h"
 3013              		.file 15 "fltk-1.3.4-1/FL/Fl.H"
 3014              		.file 16 "fltk-1.3.4-1/FL/Fl_Device.H"
 3015              		.file 17 "fltk-1.3.4-1/FL/Fl_Plugin.H"
 3016              		.file 18 "fltk-1.3.4-1/FL/x.H"
 3017              		.file 19 "/usr/include/stdio.h"
 3018              		.file 20 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_read_image.cxx
     /tmp/ccEYkrRA.s:16     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccEYkrRA.s:41     .text._ZN9Fl_Window9as_windowEv:0000000000000000 _ZN9Fl_Window9as_windowEv
     /tmp/ccEYkrRA.s:63     .text.xgetimageerrhandler:0000000000000000 xgetimageerrhandler
     /tmp/ccEYkrRA.s:85     .text._ZL18read_win_rectanglePhiiiii:0000000000000000 _ZL18read_win_rectanglePhiiiii
     /tmp/ccEYkrRA.s:2005   .text._ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12:0000000000000000 _ZL18write_image_insideP12Fl_RGB_ImageS0_ii.constprop.12
     /tmp/ccEYkrRA.s:2229   .text._ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.11:0000000000000000 _ZL25traverse_to_gl_subwindowsP8Fl_GroupPhiiiiiP12Fl_RGB_Image.constprop.11
     /tmp/ccEYkrRA.s:2863   .text._Z13fl_read_imagePhiiiii:0000000000000000 _Z13fl_read_imagePhiiiii
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.features.h.19.ad7942cac365cc9b820965257723f4cc
                           .group:0000000000000000 wm4.cdefs.h.19.871bad770587d04922449df94ac50bdb
                           .group:0000000000000000 wm4.wordsize.h.4.256e8fdbd37801980286acdbc40d0280
                           .group:0000000000000000 wm4.cdefs.h.432.619afd0aac7c4b439843706c1b28ddea
                           .group:0000000000000000 wm4.stubs64.h.10.918ceb5fa58268542bf143e4c1efbcf3
                           .group:0000000000000000 wm4.types.h.89.468e2451361e3b92f048f6cad51690ff
                           .group:0000000000000000 wm4.typesizes.h.24.40eb69a6270178f15d1bf3d7b6635a8b
                           .group:0000000000000000 wm4.types.h.40.2a7c526b979ef3aceacac975f5edcefb
                           .group:0000000000000000 wm4.time.h.53.beb46e650cd406cb917b6b96b45e640a
                           .group:0000000000000000 wm4.types.h.137.b47ba4422427ad6e74c43b7db72dcd74
                           .group:0000000000000000 wm4.stddef.h.187.16ef0524e1724b0cb2c6fb742929660a
                           .group:0000000000000000 wm4.types.h.187.bd5a05039b505b3620e6973f1b2ffeb1
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
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
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.a2ca0b29d01f5da7ea7f879d801b43ca
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
                           .group:0000000000000000 wm4.stdio.h.36.2dd12c1fd035242ad5cfd0152a01be5a
                           .group:0000000000000000 wm4._G_config.h.5.b0f37d9e474454cf6e459063458db32f
                           .group:0000000000000000 wm4.wchar.h.80.eea3eba2d2a17aace9470a8e0d8218dc
                           .group:0000000000000000 wm4._G_config.h.46.5187c97b14fd664662cb32e6b94fc49e
                           .group:0000000000000000 wm4.libio.h.33.a775b9ecae273f33bc59931e9891e4ca
                           .group:0000000000000000 wm4.stdarg.h.34.3a23a216c0c293b3d2ea2e89281481e6
                           .group:0000000000000000 wm4.libio.h.51.dab170798ec1df48c625aea7c30e1b63
                           .group:0000000000000000 wm4.stdio.h.80.7c3a1fd1f0babda3c692439566e04dd1
                           .group:0000000000000000 wm4.stdio_lim.h.23.f8541119d1bcf759d7de9531671fd758
                           .group:0000000000000000 wm4.stdio.h.172.df21df34a7396d7da2e08f9b617d582f
                           .group:0000000000000000 wm4.stdio.h.26.e50fc3808d57d965ceefc6f6dd102eb7
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
fl_window
_Z7fl_findm
fl_screen
fl_display
XTranslateCoordinates
_ZN2Fl11screen_xywhERiS0_S0_S0_i
fl_visual
malloc
XCreateImage
XSetErrorHandler
XGetSubImage
memset
fl_colormap
XQueryColors
XGetImage
_Znam
free
__stack_chk_fail
memcpy
_ZNK9Fl_Widget6windowEv
_ZN9Fl_Window12make_currentEv
_Znwm
_ZN12Fl_RGB_ImageC1EPKhiiii
_ZN17Fl_Plugin_ManagerC1EPKc
_ZN17Fl_Plugin_Manager6pluginEPKc
_ZN17Fl_Plugin_ManagerD1Ev
_ZNK8Fl_Group5arrayEv
_ZN9Fl_Window7currentEv
