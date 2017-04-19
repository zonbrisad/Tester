   1              		.file	"Fl_Paged_Device.cxx"
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
  57              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
  58              		.align 2
  59              	.LCOLDB2:
  60              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,comdat
  61              	.LHOTB2:
  62              		.align 2
  63              		.p2align 4,,15
  64              		.weak	_ZN9Fl_Device10class_nameEv
  66              	_ZN9Fl_Device10class_nameEv:
  67              	.LFB240:
  68              		.file 3 "fltk-1.3.4-1/FL/Fl_Device.H"
   1:fltk-1.3.4-1/FL/Fl_Device.H **** //
   2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Device.H **** //
   4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Surface_Device, Fl_Display_Device
   5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
   6:fltk-1.3.4-1/FL/Fl_Device.H **** //
   7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
   8:fltk-1.3.4-1/FL/Fl_Device.H **** //
   9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights are outlined in
  10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with this file.  If this
  11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver, Fl_Surface_Device, 
  22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all graphics requests */
  39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must copy \p w
  46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w,uchar* buf);
  50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type information.
  68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class returns this string.
  73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it will be removed from future FLTK vers
  78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be checked with code such as:
  80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ... }
  82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
  83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
  69              		.loc 3 84 0
  70              		.cfi_startproc
  71              	.LVL2:
  72              		.loc 3 84 0
  73 0000 488B0500 		movq	_ZN9Fl_Device8class_idE(%rip), %rax
  73      000000
  74 0007 C3       		ret
  75              		.cfi_endproc
  76              	.LFE240:
  78              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
  79              	.LCOLDE2:
  80              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,comdat
  81              	.LHOTE2:
  82              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  83              		.align 2
  84              	.LCOLDB3:
  85              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  86              	.LHOTB3:
  87              		.align 2
  88              		.p2align 4,,15
  89              		.weak	_ZN9Fl_DeviceD2Ev
  91              	_ZN9Fl_DeviceD2Ev:
  92              	.LFB242:
  85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
  87:fltk-1.3.4-1/FL/Fl_Device.H ****    
  88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the destructors of
  89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
  90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
  93              		.loc 3 91 0
  94              		.cfi_startproc
  95              	.LVL3:
  96 0000 F3C3     		rep ret
  97              		.cfi_endproc
  98              	.LFE242:
 100              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 101              	.LCOLDE3:
 102              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 103              	.LHOTE3:
 104              		.weak	_ZN9Fl_DeviceD1Ev
 105              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 106              		.section	.text.unlikely._ZN15Fl_Paged_DeviceD2Ev,"axG",@progbits,_ZN15Fl_Paged_DeviceD5Ev,comdat
 107              		.align 2
 108              	.LCOLDB4:
 109              		.section	.text._ZN15Fl_Paged_DeviceD2Ev,"axG",@progbits,_ZN15Fl_Paged_DeviceD5Ev,comdat
 110              	.LHOTB4:
 111              		.align 2
 112              		.p2align 4,,15
 113              		.weak	_ZN15Fl_Paged_DeviceD2Ev
 115              	_ZN15Fl_Paged_DeviceD2Ev:
 116              	.LFB303:
 117              		.file 4 "fltk-1.3.4-1/FL/Fl_Paged_Device.H"
   1:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
   2:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // "$Id: Fl_Paged_Device.H 11094 2016-01-31 02:49:56Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
   4:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // Printing support for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
   6:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // Copyright 2010-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
   8:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
  12:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
  14:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
  16:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
  18:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  19:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** /** \file Fl_Paged_Device.H 
  20:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  \brief declaration of class Fl_Paged_Device.
  21:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  */
  22:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  23:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #ifndef Fl_Paged_Device_H
  24:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #define Fl_Paged_Device_H
  25:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  26:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #include <FL/Fl_Device.H>
  27:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #include <FL/Fl_Window.H>
  28:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  29:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** /** \brief Number of elements in enum Page_Format */
  30:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #define NO_PAGE_FORMATS 30 /* MSVC6 compilation fix */
  31:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  32:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** /**
  33:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  \brief Represents page-structured drawing surfaces.
  34:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  *
  35:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  This class has no public constructor: don't instantiate it; use Fl_Printer 
  36:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  or Fl_PostScript_File_Device instead.
  37:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  */
  38:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** class FL_EXPORT Fl_Paged_Device : public Fl_Surface_Device {
  39:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #ifndef __APPLE__
  40:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   friend class Fl_Copy_Surface;
  41:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   friend class Fl_Image_Surface;
  42:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   void draw_decorated_window(Fl_Window *win, int x_offset, int y_offset, Fl_Surface_Device *toset);
  43:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #endif
  44:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** public:
  45:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /**
  46:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    \brief Possible page formats.
  47:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    
  48:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    All paper formats with pre-defined width and height.
  49:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    */
  50:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   enum Page_Format {
  51:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A0 = 0, /**<  A0 format */
  52:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A1,
  53:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A2,
  54:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A3,
  55:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A4, /**<  A4 format */
  56:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A5,
  57:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A6,
  58:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A7,
  59:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A8,
  60:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A9,
  61:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B0,
  62:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B1,
  63:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B2,
  64:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B3,
  65:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B4,
  66:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B5,
  67:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B6,
  68:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B7,
  69:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B8,
  70:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B9,
  71:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B10,
  72:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     C5E,
  73:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     DLE,
  74:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     EXECUTIVE,
  75:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     FOLIO,
  76:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     LEDGER,
  77:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     LEGAL,
  78:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     LETTER, /**<  Letter format */
  79:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     TABLOID,
  80:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     ENVELOPE,
  81:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     MEDIA = 0x1000
  82:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   };
  83:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /**
  84:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    \brief Possible page layouts.
  85:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    */
  86:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   enum Page_Layout {
  87:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     PORTRAIT = 0,  /**< Portrait orientation */
  88:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     LANDSCAPE = 0x100,   /**< Landscape orientation */
  89:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     REVERSED = 0x200,  /**< Reversed orientation */
  90:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     ORIENTATION = 0x300 /**<  orientation */
  91:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   };
  92:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  93:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief width, height and name of a page format
  94:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  */
  95:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   typedef struct {
  96:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     /** \brief width in points */
  97:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     int width; 
  98:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     /** \brief height in points */
  99:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     int height; 
 100:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     /** \brief format name */
 101:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     const char *name; 
 102:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   } page_format;
 103:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief width, height and name of all elements of the enum \ref Page_Format.
 104:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    */
 105:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   static const page_format page_formats[NO_PAGE_FORMATS];  
 106:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** private:
 107:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   void traverse(Fl_Widget *widget); // finds subwindows of widget and prints them
 108:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** protected:
 109:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief horizontal offset to the origin of graphics coordinates */
 110:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   int x_offset;
 111:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief vertical offset to the origin of graphics coordinates */
 112:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   int y_offset;
 113:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief The constructor */
 114:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   Fl_Paged_Device() : Fl_Surface_Device(NULL), x_offset(0), y_offset(0) {};
 115:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #if FLTK_ABI_VERSION >= 10301
 116:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** public:
 117:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief The destructor */
 118:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   virtual ~Fl_Paged_Device() {};
 119:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #else
 120:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief The destructor */
 121:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   virtual ~Fl_Paged_Device() {};
 118              		.loc 4 121 0
 119              		.cfi_startproc
 120              	.LVL4:
 121 0000 F3C3     		rep ret
 122              		.cfi_endproc
 123              	.LFE303:
 125              		.section	.text.unlikely._ZN15Fl_Paged_DeviceD2Ev,"axG",@progbits,_ZN15Fl_Paged_DeviceD5Ev,comdat
 126              	.LCOLDE4:
 127              		.section	.text._ZN15Fl_Paged_DeviceD2Ev,"axG",@progbits,_ZN15Fl_Paged_DeviceD5Ev,comdat
 128              	.LHOTE4:
 129              		.weak	_ZN15Fl_Paged_DeviceD1Ev
 130              		.set	_ZN15Fl_Paged_DeviceD1Ev,_ZN15Fl_Paged_DeviceD2Ev
 131              		.section	.text.unlikely._ZN15Fl_Paged_Device10class_nameEv,"axG",@progbits,_ZN15Fl_Paged_Device10c
 132              		.align 2
 133              	.LCOLDB5:
 134              		.section	.text._ZN15Fl_Paged_Device10class_nameEv,"axG",@progbits,_ZN15Fl_Paged_Device10class_name
 135              	.LHOTB5:
 136              		.align 2
 137              		.p2align 4,,15
 138              		.weak	_ZN15Fl_Paged_Device10class_nameEv
 140              	_ZN15Fl_Paged_Device10class_nameEv:
 141              	.LFB306:
 122:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** public:
 123:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #endif // FLTK_ABI_VERSION
 124:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   static const char *class_id;
 125:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   const char *class_name() {return class_id;};
 142              		.loc 4 125 0
 143              		.cfi_startproc
 144              	.LVL5:
 145              		.loc 4 125 0
 146 0000 488B0500 		movq	_ZN15Fl_Paged_Device8class_idE(%rip), %rax
 146      000000
 147 0007 C3       		ret
 148              		.cfi_endproc
 149              	.LFE306:
 151              		.section	.text.unlikely._ZN15Fl_Paged_Device10class_nameEv,"axG",@progbits,_ZN15Fl_Paged_Device10c
 152              	.LCOLDE5:
 153              		.section	.text._ZN15Fl_Paged_Device10class_nameEv,"axG",@progbits,_ZN15Fl_Paged_Device10class_name
 154              	.LHOTE5:
 155              		.section	.text.unlikely._ZN15Fl_Paged_Device6originEPiS0_,"ax",@progbits
 156              		.align 2
 157              	.LCOLDB6:
 158              		.section	.text._ZN15Fl_Paged_Device6originEPiS0_,"ax",@progbits
 159              	.LHOTB6:
 160              		.align 2
 161              		.p2align 4,,15
 162              		.globl	_ZN15Fl_Paged_Device6originEPiS0_
 164              	_ZN15Fl_Paged_Device6originEPiS0_:
 165              	.LFB478:
 166              		.file 5 "fltk-1.3.4-1/src/Fl_Paged_Device.cxx"
   1:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    1              		.file	"Fl_Paged_Device.cxx"
   2:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
   5:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    7              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
   8:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Wi
  12:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   13              		.section	.text._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_
  14:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   14              		.weak	_ZN9Fl_Widget12as_gl_windowEv
  15:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   16              	_ZN9Fl_Widget12as_gl_windowEv:
  16:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   17              	.LFB99:
  17:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 167              		.loc 5 113 0
 168              		.cfi_startproc
 169              	.LVL6:
 114:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 170              		.loc 5 114 0
 171 0000 4885F6   		testq	%rsi, %rsi
 172 0003 7405     		je	.L8
 173              		.loc 5 114 0 is_stmt 0 discriminator 1
 174 0005 8B4710   		movl	16(%rdi), %eax
 175 0008 8906     		movl	%eax, (%rsi)
 176              	.L8:
 115:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 177              		.loc 5 115 0 is_stmt 1
 178 000a 4885D2   		testq	%rdx, %rdx
 179 000d 7405     		je	.L7
 180              		.loc 5 115 0 is_stmt 0 discriminator 1
 181 000f 8B4714   		movl	20(%rdi), %eax
 182 0012 8902     		movl	%eax, (%rdx)
 183              	.L7:
 184 0014 F3C3     		rep ret
 185              		.cfi_endproc
 186              	.LFE478:
 188              		.section	.text.unlikely._ZN15Fl_Paged_Device6originEPiS0_
 189              	.LCOLDE6:
 190              		.section	.text._ZN15Fl_Paged_Device6originEPiS0_
 191              	.LHOTE6:
 192              		.section	.text.unlikely._ZN15Fl_Paged_Device9start_jobEiPiS0_,"ax",@progbits
 193              		.align 2
 194              	.LCOLDB7:
 195              		.section	.text._ZN15Fl_Paged_Device9start_jobEiPiS0_,"ax",@progbits
 196              	.LHOTB7:
 197              		.align 2
 198              		.p2align 4,,15
 199              		.globl	_ZN15Fl_Paged_Device9start_jobEiPiS0_
 201              	_ZN15Fl_Paged_Device9start_jobEiPiS0_:
 202              	.LFB480:
 116:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 141:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 159:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 161:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 203              		.loc 5 161 0 is_stmt 1
 204              		.cfi_startproc
 205              	.LVL7:
 206              		.loc 5 161 0
 207 0000 B8010000 		movl	$1, %eax
 207      00
 208 0005 C3       		ret
 209              		.cfi_endproc
 210              	.LFE480:
 212              		.section	.text.unlikely._ZN15Fl_Paged_Device9start_jobEiPiS0_
 213              	.LCOLDE7:
 214              		.section	.text._ZN15Fl_Paged_Device9start_jobEiPiS0_
 215              	.LHOTE7:
 216              		.section	.text.unlikely._ZN15Fl_Paged_Device14printable_rectEPiS0_,"ax",@progbits
 217              		.align 2
 218              	.LCOLDB8:
 219              		.section	.text._ZN15Fl_Paged_Device14printable_rectEPiS0_,"ax",@progbits
 220              	.LHOTB8:
 221              		.align 2
 222              		.p2align 4,,15
 223              		.globl	_ZN15Fl_Paged_Device14printable_rectEPiS0_
 225              	_ZN15Fl_Paged_Device14printable_rectEPiS0_:
 226              	.LFB482:
 162:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 164:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 172:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 227              		.loc 5 180 0
 228              		.cfi_startproc
 229              	.LVL8:
 230              		.loc 5 180 0
 231 0000 B8010000 		movl	$1, %eax
 231      00
 232 0005 C3       		ret
 233              		.cfi_endproc
 234              	.LFE482:
 236              		.section	.text.unlikely._ZN15Fl_Paged_Device14printable_rectEPiS0_
 237              	.LCOLDE8:
 238              		.section	.text._ZN15Fl_Paged_Device14printable_rectEPiS0_
 239              	.LHOTE8:
 240              		.section	.text.unlikely._ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_,"ax",@progbits
 241              		.align 2
 242              	.LCOLDB9:
 243              		.section	.text._ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_,"ax",@progbits
 244              	.LHOTB9:
 245              		.align 2
 246              		.p2align 4,,15
 247              		.globl	_ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_
 249              	_ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_:
 250              	.LFB483:
 181:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 251              		.loc 5 193 0
 252              		.cfi_startproc
 253              	.LVL9:
 254 0000 F3C3     		rep ret
 255              		.cfi_endproc
 256              	.LFE483:
 258              		.section	.text.unlikely._ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_
 259              	.LCOLDE9:
 260              		.section	.text._ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_
 261              	.LHOTE9:
 262              		.section	.text.unlikely._ZN15Fl_Paged_Device5scaleEff,"ax",@progbits
 263              		.align 2
 264              	.LCOLDB10:
 265              		.section	.text._ZN15Fl_Paged_Device5scaleEff,"ax",@progbits
 266              	.LHOTB10:
 267              		.align 2
 268              		.p2align 4,,15
 269              		.globl	_ZN15Fl_Paged_Device5scaleEff
 271              	_ZN15Fl_Paged_Device5scaleEff:
 272              	.LFB485:
 194:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 198:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 203:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 216:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273              		.loc 5 219 0
 274              		.cfi_startproc
 275              	.LVL10:
 276 0000 F3C3     		rep ret
 277              		.cfi_endproc
 278              	.LFE485:
 280              		.section	.text.unlikely._ZN15Fl_Paged_Device5scaleEff
 281              	.LCOLDE10:
 282              		.section	.text._ZN15Fl_Paged_Device5scaleEff
 283              	.LHOTE10:
 284              		.section	.text.unlikely._ZN15Fl_Paged_Device6rotateEf,"ax",@progbits
 285              		.align 2
 286              	.LCOLDB11:
 287              		.section	.text._ZN15Fl_Paged_Device6rotateEf,"ax",@progbits
 288              	.LHOTB11:
 289              		.align 2
 290              		.p2align 4,,15
 291              		.globl	_ZN15Fl_Paged_Device6rotateEf
 293              	_ZN15Fl_Paged_Device6rotateEf:
 294              	.LFB486:
 220:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 295              		.loc 5 228 0
 296              		.cfi_startproc
 297              	.LVL11:
 298 0000 F3C3     		rep ret
 299              		.cfi_endproc
 300              	.LFE486:
 302              		.section	.text.unlikely._ZN15Fl_Paged_Device6rotateEf
 303              	.LCOLDE11:
 304              		.section	.text._ZN15Fl_Paged_Device6rotateEf
 305              	.LHOTE11:
 306              		.section	.text.unlikely._ZN15Fl_Paged_Device8end_pageEv,"ax",@progbits
 307              		.align 2
 308              	.LCOLDB12:
 309              		.section	.text._ZN15Fl_Paged_Device8end_pageEv,"ax",@progbits
 310              	.LHOTB12:
 311              		.align 2
 312              		.p2align 4,,15
 313              		.globl	_ZN15Fl_Paged_Device8end_pageEv
 315              	_ZN15Fl_Paged_Device8end_pageEv:
 316              	.LFB487:
 229:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 317              		.loc 5 235 0
 318              		.cfi_startproc
 319              	.LVL12:
 320              		.loc 5 235 0
 321 0000 B8010000 		movl	$1, %eax
 321      00
 322 0005 C3       		ret
 323              		.cfi_endproc
 324              	.LFE487:
 326              		.section	.text.unlikely._ZN15Fl_Paged_Device8end_pageEv
 327              	.LCOLDE12:
 328              		.section	.text._ZN15Fl_Paged_Device8end_pageEv
 329              	.LHOTE12:
 330              		.globl	_ZN15Fl_Paged_Device10start_pageEv
 331              		.set	_ZN15Fl_Paged_Device10start_pageEv,_ZN15Fl_Paged_Device8end_pageEv
 332              		.section	.text.unlikely._ZN15Fl_Paged_Device9translateEii,"ax",@progbits
 333              		.align 2
 334              	.LCOLDB13:
 335              		.section	.text._ZN15Fl_Paged_Device9translateEii,"ax",@progbits
 336              	.LHOTB13:
 337              		.align 2
 338              		.p2align 4,,15
 339              		.globl	_ZN15Fl_Paged_Device9translateEii
 341              	_ZN15Fl_Paged_Device9translateEii:
 342              	.LFB489:
 236:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 343              		.loc 5 249 0
 344              		.cfi_startproc
 345              	.LVL13:
 346 0000 F3C3     		rep ret
 347              		.cfi_endproc
 348              	.LFE489:
 350              		.section	.text.unlikely._ZN15Fl_Paged_Device9translateEii
 351              	.LCOLDE13:
 352              		.section	.text._ZN15Fl_Paged_Device9translateEii
 353              	.LHOTE13:
 354              		.globl	_ZN15Fl_Paged_Device6originEii
 355              		.set	_ZN15Fl_Paged_Device6originEii,_ZN15Fl_Paged_Device9translateEii
 356              		.section	.text.unlikely._ZN15Fl_Paged_Device11untranslateEv,"ax",@progbits
 357              		.align 2
 358              	.LCOLDB14:
 359              		.section	.text._ZN15Fl_Paged_Device11untranslateEv,"ax",@progbits
 360              	.LHOTB14:
 361              		.align 2
 362              		.p2align 4,,15
 363              		.globl	_ZN15Fl_Paged_Device11untranslateEv
 365              	_ZN15Fl_Paged_Device11untranslateEv:
 366              	.LFB490:
 250:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 251:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 253:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 367              		.loc 5 254 0
 368              		.cfi_startproc
 369              	.LVL14:
 370 0000 F3C3     		rep ret
 371              		.cfi_endproc
 372              	.LFE490:
 374              		.section	.text.unlikely._ZN15Fl_Paged_Device11untranslateEv
 375              	.LCOLDE14:
 376              		.section	.text._ZN15Fl_Paged_Device11untranslateEv
 377              	.LHOTE14:
 378              		.globl	_ZN15Fl_Paged_Device7end_jobEv
 379              		.set	_ZN15Fl_Paged_Device7end_jobEv,_ZN15Fl_Paged_Device11untranslateEv
 380              		.section	.text.unlikely._ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii,"ax",@progbits
 381              		.align 2
 382              	.LCOLDB15:
 383              		.section	.text._ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii,"ax",@progbits
 384              	.LHOTB15:
 385              		.align 2
 386              		.p2align 4,,15
 387              		.globl	_ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii
 389              	_ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii:
 390              	.LFB479:
 130:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 391              		.loc 5 130 0
 392              		.cfi_startproc
 393              	.LVL15:
 130:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 394              		.loc 5 130 0
 395 0000 4157     		pushq	%r15
 396              		.cfi_def_cfa_offset 16
 397              		.cfi_offset 15, -16
 398 0002 4156     		pushq	%r14
 399              		.cfi_def_cfa_offset 24
 400              		.cfi_offset 14, -24
 401 0004 4589CF   		movl	%r9d, %r15d
 402 0007 4155     		pushq	%r13
 403              		.cfi_def_cfa_offset 32
 404              		.cfi_offset 13, -32
 405 0009 4154     		pushq	%r12
 406              		.cfi_def_cfa_offset 40
 407              		.cfi_offset 12, -40
 408 000b 4589C6   		movl	%r8d, %r14d
 409 000e 55       		pushq	%rbp
 410              		.cfi_def_cfa_offset 48
 411              		.cfi_offset 6, -48
 412 000f 53       		pushq	%rbx
 413              		.cfi_def_cfa_offset 56
 414              		.cfi_offset 3, -56
 415 0010 4189D4   		movl	%edx, %r12d
 416 0013 4889F3   		movq	%rsi, %rbx
 417 0016 89CA     		movl	%ecx, %edx
 418              	.LVL16:
 419 0018 4883EC18 		subq	$24, %rsp
 420              		.cfi_def_cfa_offset 80
 421              	.LBB103:
 422              	.LBB104:
  92:fltk-1.3.4-1/FL/Fl_Device.H **** };
  93:fltk-1.3.4-1/FL/Fl_Device.H **** 
  94:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_REGION_STACK_SIZE 10
  95:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_MATRIX_STACK_SIZE 32
  96:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver FLTK uses.
  98:fltk-1.3.4-1/FL/Fl_Device.H ****  Typically, FLTK applications do not use directly objects from this class. Rather, they perform
  99:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations (e.g., fl_rectf()) that operate on the current drawing surface (see Fl_Surface_
 100:fltk-1.3.4-1/FL/Fl_Device.H ****  Drawing operations are functionally presented in \ref drawing and as function lists
 101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The \ref fl_graphics_driver global variabl
 102:fltk-1.3.4-1/FL/Fl_Device.H ****  gives at any time the graphics driver used by all drawing operations. Its value changes when
 103:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations are directed to another drawing surface by Fl_Surface_Device::set_current().
 104:fltk-1.3.4-1/FL/Fl_Device.H ****  
 105:fltk-1.3.4-1/FL/Fl_Device.H ****  \p The Fl_Graphics_Driver class is of interest if one wants to perform new kinds of drawing operat
 106:fltk-1.3.4-1/FL/Fl_Device.H ****  An example would be to draw to a PDF file. This would involve creating a new Fl_Graphics_Driver de
 107:fltk-1.3.4-1/FL/Fl_Device.H ****  class. This new class should implement all virtual methods of the Fl_Graphics_Driver class
 108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 110:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Graphics_Driver : public Fl_Device {
 111:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 112:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A 2D coordinate transformation matrix
 113:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 114:fltk-1.3.4-1/FL/Fl_Device.H ****   struct matrix {double a, b, c, d, x, y;};
 115:fltk-1.3.4-1/FL/Fl_Device.H **** private:
 116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 117:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font_; // current font
 118:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size_; // current font size
 119:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color_; // current color
 120:fltk-1.3.4-1/FL/Fl_Device.H ****   int sptr;
 121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 122:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix stack[FL_MATRIX_STACK_SIZE];
 123:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix m;
 124:fltk-1.3.4-1/FL/Fl_Device.H ****   int n, p_size, gap_;
 125:fltk-1.3.4-1/FL/Fl_Device.H ****   XPOINT *p;
 126:fltk-1.3.4-1/FL/Fl_Device.H ****   int what;
 127:fltk-1.3.4-1/FL/Fl_Device.H ****   int fl_clip_state_number;
 128:fltk-1.3.4-1/FL/Fl_Device.H ****   int rstackptr;
 129:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int region_stack_max = FL_REGION_STACK_SIZE - 1;
 130:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region rstack[FL_REGION_STACK_SIZE];
 131:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 133:fltk-1.3.4-1/FL/Fl_Device.H ****   int counts[20];
 134:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 135:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font_Descriptor *font_descriptor_;
 136:fltk-1.3.4-1/FL/Fl_Device.H ****   void transformed_vertex0(COORD_T x, COORD_T y);
 137:fltk-1.3.4-1/FL/Fl_Device.H ****   void fixloop();
 138:fltk-1.3.4-1/FL/Fl_Device.H ****   
 139:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 140:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef FL_DOXYGEN
 141:fltk-1.3.4-1/FL/Fl_Device.H ****   enum {LINE, LOOP, POLYGON, POINT_};
 142:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_no() { return n; }
 143:fltk-1.3.4-1/FL/Fl_Device.H ****   inline XPOINT *vertices() {return p;}
 144:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_kind() {return what;}
 145:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 146:fltk-1.3.4-1/FL/Fl_Device.H **** /*  ** \brief red color for background and/or mixing if device does not support masking or alpha *
 147:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_r_; 
 148:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief green color for background and/or mixing if device does not support masking or alpha *
 149:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_g_; 
 150:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief blue color for background and/or mixing if device does not support masking or alpha *
 151:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_b_; */
 152:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Pixmap;
 153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 154:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_RGB_Image;
 155:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rect(int x, int y, int w, int h);
 156:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rectf(int x, int y, int w, int h);
 157:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line_style(int style, int width, char* dashes);
 158:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1);
 159:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2);
 160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3);
 161:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1);
 162:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2);
 163:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2, int y3);
 164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, int y2);
 166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 167:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 168:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, float x, float y);
 169:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 170:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(int angle, const char *str, int n, int x, int y);
 171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int y);
 172:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_font(Fl_Font face, Fl_Fontsize size);
 173:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(Fl_Color c);
 174:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(uchar r, uchar g, uchar b);
 175:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_point(int x, int y);
 176:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2, int y2);
 177:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 178:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2);
 179:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 180:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_points();
 181:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_line();
 182:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_loop();
 183:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_polygon();
 184:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_vertex(double x, double y);
 185:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3,
 186:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_circle(double x, double y, double r);
 187:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(double x, double y, double r, double start, double end);
 188:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(int x, int y, int w, int h, double a1, double a2);
 189:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pie(int x, int y, int w, int h, double a1, double a2);
 190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 194:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_transformed_vertex(double xf, double yf);
 195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 196:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H);
 197:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_not_clipped(int x, int y, int w, int h);
 198:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_no_clip();
 199:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_clip();
 200:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_complex_polygon();
 201:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_gap();
 202:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_complex_polygon();
 203:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_matrix();
 204:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_matrix();
 205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, double d, double x, double y);
 206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 207:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x);
 208:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_translate(double x, double y);
 209:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rotate(double d);
 210:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_x(double x, double y);
 211:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_y(double x, double y);
 212:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dx(double x, double y);
 213:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dy(double x, double y);
 214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 215:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_clip_region(Fl_Region r);
 216:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_restore_clip();
 217:fltk-1.3.4-1/FL/Fl_Device.H ****   
 218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L);
 219:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D, int L);
 220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D);
 221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H
 222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 223:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx
 224:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix *fl_matrix; /**< Points to the current coordinate transformation matrix */
 225:fltk-1.3.4-1/FL/Fl_Device.H **** 
 226:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The constructor. */
 227:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver();
 228:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rect(int x, int y, int w, int h). */
 229:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rect(int x, int y, int w, int h);
 230:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rectf(int x, int y, int w, int h). */
 231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 232:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line_style(int style, int width, char* dashes). */
 233:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line_style(int style, int width=0, char* dashes=0);
 234:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1). */
 235:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1);
 236:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2). */
 237:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2);
 238:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2, int x3). */
 239:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2, int x3);
 240:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1). */
 241:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1);
 242:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2). */
 243:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2);
 244:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2, int y3). */
 245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 246:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1). */
 247:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1);
 248:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1, int x2, int y2). */
 249:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1, int x2, int y2);
 250:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(const char *str, int n, int x, int y). */
 251:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, int x, int y) {}
 252:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y) { draw(str, n, (int)(x+0.5), (int)(y+
 254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, int x, int y). */
 256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x, int y) {}
 257:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rtl_draw(const char *str, int n, int x, int y). */
 258:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rtl_draw(const char *str, int n, int x, int y) {};
 259:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(Fl_Color c). */
 260:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(Fl_Color c) {color_ = c;}
 261:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 262:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(uchar r, uchar g, uchar b) {}
 263:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_point(int x, int y). */
 264:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void point(int x, int y);
 265:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int x2, int y2). */
 266:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, int y2);
 267:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3). */
 268:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 269:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2). */
 270:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2, int y2);
 271:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3). */
 272:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 273:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_points(). */
 274:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_points();
 275:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_line(). */
 276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 278:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_loop();
 279:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_polygon(). */
 280:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_polygon();
 281:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_vertex(double x, double y). */
 282:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void vertex(double x, double y);
 283:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double 
 284:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3, d
 285:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_circle(double x, double y, double r). */
 286:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void circle(double x, double y, double r);
 287:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(double x, double y, double r, double start, double end). */
 288:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(double x, double y, double r, double start, double end);
 289:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(int x, int y, int w, int h, double a1, double a2). */
 290:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(int x, int y, int w, int h, double a1, double a2);
 291:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pie(int x, int y, int w, int h, double a1, double a2). */
 292:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pie(int x, int y, int w, int h, double a1, double a2);
 293:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_points(). */
 294:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_points();
 295:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_line(). */
 296:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_line();
 297:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_loop(). */
 298:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_loop();
 299:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_polygon(). */
 300:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_polygon();
 301:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_complex_polygon(). */
 302:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_complex_polygon();
 303:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_gap(). */
 304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 305:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_complex_polygon(). */
 306:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_complex_polygon();
 307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf). */
 308:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void transformed_vertex(double xf, double yf);
 309:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_clip(int x, int y, int w, int h). */
 310:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_clip(int x, int y, int w, int h);
 311:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H). */
 312:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H);
 313:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_not_clipped(int x, int y, int w, int h). */
 314:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int not_clipped(int x, int y, int w, int h);
 315:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_no_clip(). */
 316:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_no_clip();
 317:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_clip(). */
 318:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pop_clip();
 319:fltk-1.3.4-1/FL/Fl_Device.H ****     
 320:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_matrix(). */
 321:fltk-1.3.4-1/FL/Fl_Device.H ****   void push_matrix();
 322:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_matrix(). */
 323:fltk-1.3.4-1/FL/Fl_Device.H ****   void pop_matrix();
 324:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_mult_matrix(double a, double b, double c, double d, double x, double y). */
 325:fltk-1.3.4-1/FL/Fl_Device.H ****   void mult_matrix(double a, double b, double c, double d, double x, double y);
 326:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x, double y). */
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x, double y) { mult_matrix(x,0,0,y,0,0); }
 328:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 330:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_translate(double x, double y). */
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void translate(double x,double y) { mult_matrix(1,0,0,1,x,y); }
 332:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 333:fltk-1.3.4-1/FL/Fl_Device.H ****   void rotate(double d);
 334:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_x(double x, double y). */
 335:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_x(double x, double y);
 336:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_y(double x, double y). */
 337:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_y(double x, double y);
 338:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dx(double x, double y). */
 339:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dx(double x, double y);
 340:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dy(double x, double y). */
 341:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dy(double x, double y);
 342:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(). */
 343:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region clip_region();
 344:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(Fl_Region r). */
 345:fltk-1.3.4-1/FL/Fl_Device.H ****   void clip_region(Fl_Region r);
 346:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_restore_clip(). */
 347:fltk-1.3.4-1/FL/Fl_Device.H ****   void restore_clip();
 348:fltk-1.3.4-1/FL/Fl_Device.H ****   
 349:fltk-1.3.4-1/FL/Fl_Device.H ****   // Images
 350:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L). */
 351:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0) {}
 352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D, int L). */
 353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0) {}
 354:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D). */
 355:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3) {}
 356:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D
 357:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1)
 358:fltk-1.3.4-1/FL/Fl_Device.H ****   // Image classes
 359:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_RGB_Image object to the device. 
 360:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 361:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 362:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 363:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int WP, int HP, int cx, int cy) {}
 365:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Pixmap object to the device. 
 366:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 367:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 368:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 369:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 370:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_Pixmap * pxm,int XP, int YP, int WP, int HP, int cx, int cy) {}
 371:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Bitmap object to the device. 
 372:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 373:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 374:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 375:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, int HP, int cx, int cy) {}
 377:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10301
 378:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 379:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 380:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 381:fltk-1.3.4-1/FL/Fl_Device.H ****   
 382:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 383:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 384:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 385:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(Fl_Font face, Fl_Fontsize size). */
 386:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void font(Fl_Font face, Fl_Fontsize fsize) {font_ = face; size_ = fsize;}
 387:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(void). */
 388:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font() {return font_; }
 389:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_size(). */
 390:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size() {return size_; }
 391:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(const char *str, int n). */
 392:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual double width(const char *str, int n) {return 0;}
 393:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(unsigned int n). */
 394:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual inline double width(unsigned int c) { char ch = (char)c; return width(&ch, 1); }
 395:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_text_extents(const char*, int n, int& dx, int& dy, int& w, int& h). */
 396:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 397:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_height(). */
 398:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int height() {return size();}
 399:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_descent(). */
 400:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int descent() {return 0;}
 401:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(void). */
 402:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color() {return color_;}
 403:fltk-1.3.4-1/FL/Fl_Device.H ****   /** Returns a pointer to the current Fl_Font_Descriptor for the graphics driver */
 404:fltk-1.3.4-1/FL/Fl_Device.H ****   inline Fl_Font_Descriptor *font_descriptor() { return font_descriptor_;}
 405:fltk-1.3.4-1/FL/Fl_Device.H ****   /** Sets the current Fl_Font_Descriptor for the graphics driver */
 406:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void font_descriptor(Fl_Font_Descriptor *d) { font_descriptor_ = d;}
 407:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10304 || defined(FL_DOXYGEN)
 408:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 409:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 410:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int X, int Y, int W, int H);
 411:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The destructor */
 412:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Graphics_Driver() { if (p) free(p); }
 413:fltk-1.3.4-1/FL/Fl_Device.H **** };
 414:fltk-1.3.4-1/FL/Fl_Device.H **** 
 415:fltk-1.3.4-1/FL/Fl_Device.H **** #if defined(__APPLE__) || defined(FL_DOXYGEN)
 416:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 417:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The Mac OS X-specific graphics class.
 418:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 419:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the Mac OS X platform.
 420:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 421:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Quartz_Graphics_Driver : public Fl_Graphics_Driver {
 422:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 423:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 424:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 425:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 426:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 427:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 428:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 429:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char *str, int n, float x, float y);
 430:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 431:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 432:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 433:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 434:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 435:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 436:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 437:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int XP, int YP, int WP, int HP);
 438:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 439:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 440:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 441:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 442:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 443:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 444:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 445:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 446:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 447:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 448:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Offscreen create_offscreen_with_alpha(int w, int h);
 449:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 450:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 451:fltk-1.3.4-1/FL/Fl_Device.H **** };
 452:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 453:fltk-1.3.4-1/FL/Fl_Device.H **** #if defined(WIN32) || defined(FL_DOXYGEN)
 454:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 455:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The MSWindows-specific graphics class.
 456:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 457:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the MSWindows platform.
 458:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 459:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_GDI_Graphics_Driver : public Fl_Graphics_Driver {
 460:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 461:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 462:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 463:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 464:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 465:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 466:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 467:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 468:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 469:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 470:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 471:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 472:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 473:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 474:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 475:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 476:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 477:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 478:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 479:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 480:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 481:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 482:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen_with_alpha(int x,int y,int w,int h,HBITMAP bitmap,int srcx,int srcy);
 483:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 484:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 485:fltk-1.3.4-1/FL/Fl_Device.H **** };
 486:fltk-1.3.4-1/FL/Fl_Device.H **** 
 487:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 488:fltk-1.3.4-1/FL/Fl_Device.H ****  The graphics driver used when printing on MSWindows.
 489:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 490:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the MSWindows platform. It 's extremely similar to Fl_GDI_Graphi
 491:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 492:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_GDI_Printer_Graphics_Driver : public Fl_GDI_Graphics_Driver {
 493:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 494:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 495:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 496:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 497:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *bm, int XP, int YP, int WP, int HP, int cx, int cy);
 498:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int XP, int YP, int WP, int HP);
 499:fltk-1.3.4-1/FL/Fl_Device.H **** };
 500:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 501:fltk-1.3.4-1/FL/Fl_Device.H **** #if !(defined(__APPLE__) || defined(WIN32))
 502:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 503:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The Xlib-specific graphics class.
 504:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 505:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the Xlib platform.
 506:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 507:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Xlib_Graphics_Driver : public Fl_Graphics_Driver {
 508:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 509:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 510:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 511:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 512:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 513:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 514:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 515:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 516:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 517:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 518:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 519:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 520:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 521:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 522:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 523:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 524:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 525:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 526:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 527:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 528:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 529:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 530:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 531:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen_with_alpha(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int src
 532:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 533:fltk-1.3.4-1/FL/Fl_Device.H **** };
 534:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 535:fltk-1.3.4-1/FL/Fl_Device.H **** 
 536:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 537:fltk-1.3.4-1/FL/Fl_Device.H ****  A drawing surface that's susceptible to receive graphical output.
 538:fltk-1.3.4-1/FL/Fl_Device.H ****  Any FLTK application has at any time a current drawing surface to which all drawing requests are d
 539:fltk-1.3.4-1/FL/Fl_Device.H ****  The current surface is given by Fl_Surface_Device::surface().
 540:fltk-1.3.4-1/FL/Fl_Device.H ****  When main() begins running, the current drawing surface has been set to the computer's display, 
 541:fltk-1.3.4-1/FL/Fl_Device.H ****  an instance of the Fl_Display_Device class.
 542:fltk-1.3.4-1/FL/Fl_Device.H **** 
 543:fltk-1.3.4-1/FL/Fl_Device.H ****  A drawing surface other than the computer's display, is typically used as follows:
 544:fltk-1.3.4-1/FL/Fl_Device.H ****  <ol><li> Create \c surface, an object from a particular Fl_Surface_Device derived class (e.g., Fl_
 545:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Memorize what is the current drawing surface with <tt> Fl_Surface_Device *old_current = Fl_Su
 546:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Call \c surface->set_current(); to redirect all graphics requests to \c surface which becomes
 547:fltk-1.3.4-1/FL/Fl_Device.H ****  current drawing surface (not necessary with class Fl_Printer because it is done by Fl_Printer::sta
 548:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> At this point any of the \ref fl_drawings (e.g., fl_rect()) or the \ref fl_attributes or \ref
 549:fltk-1.3.4-1/FL/Fl_Device.H ****  (e.g., fl_draw_image(), Fl_Image::draw()) operates on the new current drawing surface.
 550:fltk-1.3.4-1/FL/Fl_Device.H ****  Certain drawing surfaces allow additional ways to draw to them (e.g., Fl_Printer::print_widget(), 
 551:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> After all drawing requests have been performed, redirect graphics requests back to their prev
 552:fltk-1.3.4-1/FL/Fl_Device.H ****  with \c old_current->set_current();.
 553:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Delete \c surface.
 554:fltk-1.3.4-1/FL/Fl_Device.H ****  </ol>
 555:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 556:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Surface_Device : public Fl_Device {
 557:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The graphics driver in use by this surface. */
 558:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver *_driver;
 559:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Surface_Device *_surface; // the surface that currently receives graphics output
 560:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Surface_Device *default_surface(); // create surface is none exists yet
 561:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 562:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Constructor that sets the graphics driver to use for the created surface. */
 563:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Surface_Device(Fl_Graphics_Driver *graphics_driver) {_driver = graphics_driver; };
 564:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 565:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 566:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 567:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void set_current(void);
 568:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Sets the graphics driver of this drawing surface. */
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void driver(Fl_Graphics_Driver *graphics_driver) {_driver = graphics_driver;};
 570:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the graphics driver of this drawing surface. */
 571:fltk-1.3.4-1/FL/Fl_Device.H ****   inline Fl_Graphics_Driver *driver() {return _driver; };
 572:fltk-1.3.4-1/FL/Fl_Device.H ****   /** The current drawing surface.
 573:fltk-1.3.4-1/FL/Fl_Device.H ****    In other words, the Fl_Surface_Device object that currently receives all graphics output */
 574:fltk-1.3.4-1/FL/Fl_Device.H ****   static inline Fl_Surface_Device *surface() {
 575:fltk-1.3.4-1/FL/Fl_Device.H ****     return _surface ? _surface : default_surface();
 423              		.loc 3 575 0
 424 001c 488B2D00 		movq	_ZN17Fl_Surface_Device8_surfaceE(%rip), %rbp
 424      000000
 425              	.LBE104:
 426              	.LBE103:
 130:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 427              		.loc 5 130 0
 428 0023 8B442450 		movl	80(%rsp), %eax
 429              	.LBB108:
 430              	.LBB105:
 431              		.loc 3 575 0
 432 0027 4885ED   		testq	%rbp, %rbp
 433              	.LBE105:
 434              	.LBE108:
 130:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 435              		.loc 5 130 0
 436 002a 89442404 		movl	%eax, 4(%rsp)
 437 002e 8B442458 		movl	88(%rsp), %eax
 438 0032 89442408 		movl	%eax, 8(%rsp)
 439              	.LBB109:
 440              	.LBB106:
 441              		.loc 3 575 0
 442 0036 0F84C400 		je	.L30
 442      0000
 443              	.LVL17:
 444              	.L26:
 445 003c 8954240C 		movl	%edx, 12(%rsp)
 446              	.LBE106:
 447              	.LBE109:
 132:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 448              		.loc 5 132 0
 449 0040 E8000000 		call	_ZN17Fl_Display_Device14display_deviceEv
 449      00
 450              	.LVL18:
 451 0045 488B08   		movq	(%rax), %rcx
 452 0048 4889C7   		movq	%rax, %rdi
 453 004b FF5118   		call	*24(%rcx)
 454              	.LVL19:
 133:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 455              		.loc 5 133 0
 456 004e E8000000 		call	_ZN2Fl12first_windowEv
 456      00
 457              	.LVL20:
 458 0053 4989C5   		movq	%rax, %r13
 459              	.LVL21:
 134:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 460              		.loc 5 134 0
 461 0056 488B03   		movq	(%rbx), %rax
 462              	.LVL22:
 463 0059 4889DF   		movq	%rbx, %rdi
 464 005c FF5028   		call	*40(%rax)
 465              	.LVL23:
 135:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 466              		.loc 5 135 0
 467 005f 48C70500 		movq	$0, fl_gc(%rip)
 467      00000000 
 467      000000
 136:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 468              		.loc 5 136 0
 469 006a E8000000 		call	_ZN2Fl5checkEv
 469      00
 470              	.LVL24:
 137:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 471              		.loc 5 137 0
 472 006f 4889DF   		movq	%rbx, %rdi
 473 0072 E8000000 		call	_ZN9Fl_Window12make_currentEv
 473      00
 474              	.LVL25:
 139:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475              		.loc 5 139 0
 476 0077 8B54240C 		movl	12(%rsp), %edx
 477 007b 4531C9   		xorl	%r9d, %r9d
 478 007e 4489E6   		movl	%r12d, %esi
 479 0081 31FF     		xorl	%edi, %edi
 480 0083 4589F8   		movl	%r15d, %r8d
 481 0086 4489F1   		movl	%r14d, %ecx
 482 0089 E8000000 		call	_Z13fl_read_imagePhiiiii
 482      00
 483              	.LVL26:
 143:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 484              		.loc 5 143 0
 485 008e 4939DD   		cmpq	%rbx, %r13
 139:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 486              		.loc 5 139 0
 487 0091 4989C4   		movq	%rax, %r12
 488              	.LVL27:
 143:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 489              		.loc 5 143 0
 490 0094 740A     		je	.L27
 143:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491              		.loc 5 143 0 is_stmt 0 discriminator 1
 492 0096 498B4500 		movq	0(%r13), %rax
 493              	.LVL28:
 494 009a 4C89EF   		movq	%r13, %rdi
 495 009d FF5028   		call	*40(%rax)
 496              	.LVL29:
 497              	.L27:
 144:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 498              		.loc 5 144 0 is_stmt 1
 499 00a0 488B4500 		movq	0(%rbp), %rax
 500 00a4 4889EF   		movq	%rbp, %rdi
 501 00a7 FF5018   		call	*24(%rax)
 502              	.LVL30:
 503              	.LBB110:
 504              	.LBB111:
 505              		.file 6 "fltk-1.3.4-1/FL/fl_draw.H"
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
 506              		.loc 6 686 0
 507 00aa 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 507      000000
 508 00b1 4589F9   		movl	%r15d, %r9d
 509 00b4 4589F0   		movl	%r14d, %r8d
 510 00b7 4C89E6   		movq	%r12, %rsi
 511 00ba 488B07   		movq	(%rdi), %rax
 512 00bd 6A00     		pushq	$0
 513              		.cfi_def_cfa_offset 88
 514 00bf 6A03     		pushq	$3
 515              		.cfi_def_cfa_offset 96
 516 00c1 8B4C2418 		movl	24(%rsp), %ecx
 517 00c5 8B542414 		movl	20(%rsp), %edx
 518 00c9 FF907801 		call	*376(%rax)
 518      0000
 519              	.LVL31:
 520              	.LBE111:
 521              	.LBE110:
 146:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 522              		.loc 5 146 0
 523 00cf 4D85E4   		testq	%r12, %r12
 524 00d2 58       		popq	%rax
 525              		.cfi_def_cfa_offset 88
 526 00d3 5A       		popq	%rdx
 527              		.cfi_def_cfa_offset 80
 528 00d4 741A     		je	.L25
 151:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 529              		.loc 5 151 0 discriminator 1
 530 00d6 4883C418 		addq	$24, %rsp
 531              		.cfi_remember_state
 532              		.cfi_def_cfa_offset 56
 146:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 533              		.loc 5 146 0 discriminator 1
 534 00da 4C89E7   		movq	%r12, %rdi
 151:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 535              		.loc 5 151 0 discriminator 1
 536 00dd 5B       		popq	%rbx
 537              		.cfi_def_cfa_offset 48
 538              	.LVL32:
 539 00de 5D       		popq	%rbp
 540              		.cfi_def_cfa_offset 40
 541 00df 415C     		popq	%r12
 542              		.cfi_def_cfa_offset 32
 543              	.LVL33:
 544 00e1 415D     		popq	%r13
 545              		.cfi_def_cfa_offset 24
 546              	.LVL34:
 547 00e3 415E     		popq	%r14
 548              		.cfi_def_cfa_offset 16
 549              	.LVL35:
 550 00e5 415F     		popq	%r15
 551              		.cfi_def_cfa_offset 8
 552              	.LVL36:
 146:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 553              		.loc 5 146 0 discriminator 1
 554 00e7 E9000000 		jmp	_ZdaPv
 554      00
 555              	.LVL37:
 556 00ec 0F1F4000 		.p2align 4,,10
 557              		.p2align 3
 558              	.L25:
 559              		.cfi_restore_state
 151:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 560              		.loc 5 151 0
 561 00f0 4883C418 		addq	$24, %rsp
 562              		.cfi_remember_state
 563              		.cfi_def_cfa_offset 56
 564 00f4 5B       		popq	%rbx
 565              		.cfi_def_cfa_offset 48
 566              	.LVL38:
 567 00f5 5D       		popq	%rbp
 568              		.cfi_def_cfa_offset 40
 569 00f6 415C     		popq	%r12
 570              		.cfi_def_cfa_offset 32
 571              	.LVL39:
 572 00f8 415D     		popq	%r13
 573              		.cfi_def_cfa_offset 24
 574              	.LVL40:
 575 00fa 415E     		popq	%r14
 576              		.cfi_def_cfa_offset 16
 577              	.LVL41:
 578 00fc 415F     		popq	%r15
 579              		.cfi_def_cfa_offset 8
 580              	.LVL42:
 581 00fe C3       		ret
 582              	.LVL43:
 583 00ff 90       		.p2align 4,,10
 584              		.p2align 3
 585              	.L30:
 586              		.cfi_restore_state
 587 0100 894C240C 		movl	%ecx, 12(%rsp)
 588              	.LBB112:
 589              	.LBB107:
 590              		.loc 3 575 0
 591 0104 E8000000 		call	_ZN17Fl_Surface_Device15default_surfaceEv
 591      00
 592              	.LVL44:
 593 0109 8B54240C 		movl	12(%rsp), %edx
 594 010d 4889C5   		movq	%rax, %rbp
 595 0110 E927FFFF 		jmp	.L26
 595      FF
 596              	.LBE107:
 597              	.LBE112:
 598              		.cfi_endproc
 599              	.LFE479:
 601              		.section	.text.unlikely._ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii
 602              	.LCOLDE15:
 603              		.section	.text._ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii
 604              	.LHOTE15:
 605              		.section	.text.unlikely._ZN15Fl_Paged_DeviceD0Ev,"axG",@progbits,_ZN15Fl_Paged_DeviceD5Ev,comdat
 606              		.align 2
 607              	.LCOLDB16:
 608              		.section	.text._ZN15Fl_Paged_DeviceD0Ev,"axG",@progbits,_ZN15Fl_Paged_DeviceD5Ev,comdat
 609              	.LHOTB16:
 610              		.align 2
 611              		.p2align 4,,15
 612              		.weak	_ZN15Fl_Paged_DeviceD0Ev
 614              	_ZN15Fl_Paged_DeviceD0Ev:
 615              	.LFB305:
 121:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** public:
 616              		.loc 4 121 0
 617              		.cfi_startproc
 618              	.LVL45:
 121:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** public:
 619              		.loc 4 121 0
 620 0000 E9000000 		jmp	_ZdlPv
 620      00
 621              	.LVL46:
 622              		.cfi_endproc
 623              	.LFE305:
 625              		.section	.text.unlikely._ZN15Fl_Paged_DeviceD0Ev,"axG",@progbits,_ZN15Fl_Paged_DeviceD5Ev,comdat
 626              	.LCOLDE16:
 627              		.section	.text._ZN15Fl_Paged_DeviceD0Ev,"axG",@progbits,_ZN15Fl_Paged_DeviceD5Ev,comdat
 628              	.LHOTE16:
 629              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 630              		.align 2
 631              	.LCOLDB17:
 632              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 633              	.LHOTB17:
 634              		.align 2
 635              		.p2align 4,,15
 636              		.weak	_ZN9Fl_DeviceD0Ev
 638              	_ZN9Fl_DeviceD0Ev:
 639              	.LFB244:
  91:fltk-1.3.4-1/FL/Fl_Device.H **** };
 640              		.loc 3 91 0
 641              		.cfi_startproc
 642              	.LVL47:
  91:fltk-1.3.4-1/FL/Fl_Device.H **** };
 643              		.loc 3 91 0
 644 0000 E9000000 		jmp	_ZdlPv
 644      00
 645              	.LVL48:
 646              		.cfi_endproc
 647              	.LFE244:
 649              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 650              	.LCOLDE17:
 651              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 652              	.LHOTE17:
 653              		.section	.text.unlikely._ZN15Fl_Paged_Device8traverseEP9Fl_Widget,"ax",@progbits
 654              		.align 2
 655              	.LCOLDB18:
 656              		.section	.text._ZN15Fl_Paged_Device8traverseEP9Fl_Widget,"ax",@progbits
 657              	.LHOTB18:
 658              		.align 2
 659              		.p2align 4,,15
 660              		.globl	_ZN15Fl_Paged_Device8traverseEP9Fl_Widget
 662              	_ZN15Fl_Paged_Device8traverseEP9Fl_Widget:
 663              	.LFB477:
  92:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 664              		.loc 5 92 0
 665              		.cfi_startproc
 666              	.LVL49:
 667 0000 4155     		pushq	%r13
 668              		.cfi_def_cfa_offset 16
 669              		.cfi_offset 13, -16
 670 0002 4154     		pushq	%r12
 671              		.cfi_def_cfa_offset 24
 672              		.cfi_offset 12, -24
 673 0004 4989FD   		movq	%rdi, %r13
 674 0007 55       		pushq	%rbp
 675              		.cfi_def_cfa_offset 32
 676              		.cfi_offset 6, -32
 677 0008 53       		pushq	%rbx
 678              		.cfi_def_cfa_offset 40
 679              		.cfi_offset 3, -40
  93:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 680              		.loc 5 93 0
 681 0009 4889F7   		movq	%rsi, %rdi
 682              	.LVL50:
  92:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
 683              		.loc 5 92 0
 684 000c 4883EC18 		subq	$24, %rsp
 685              		.cfi_def_cfa_offset 64
  93:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
 686              		.loc 5 93 0
 687 0010 488B06   		movq	(%rsi), %rax
 688 0013 FF5038   		call	*56(%rax)
 689              	.LVL51:
  94:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
 690              		.loc 5 94 0
 691 0016 4885C0   		testq	%rax, %rax
 692 0019 7468     		je	.L33
 693 001b 4889C5   		movq	%rax, %rbp
 694 001e 8B809000 		movl	144(%rax), %eax
 694      0000
 695              	.LVL52:
 696              	.LBB121:
  96:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 697              		.loc 5 96 0
 698 0024 85C0     		testl	%eax, %eax
 699 0026 7E5B     		jle	.L33
 700 0028 83E801   		subl	$1, %eax
 701 002b 31DB     		xorl	%ebx, %ebx
 702 002d 4C8D24C5 		leaq	8(,%rax,8), %r12
 702      08000000 
 703 0035 EB12     		jmp	.L39
 704              	.LVL53:
 705 0037 660F1F84 		.p2align 4,,10
 705      00000000 
 705      00
 706              		.p2align 3
 707              	.L36:
 708 0040 4883C308 		addq	$8, %rbx
  96:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 709              		.loc 5 96 0 is_stmt 0 discriminator 2
 710 0044 4C39E3   		cmpq	%r12, %rbx
 711 0047 743A     		je	.L33
 712              	.L39:
 713              	.LVL54:
 714              	.LBB122:
 715              	.LBB123:
 716              	.LBB124:
 717              		.file 7 "fltk-1.3.4-1/FL/Fl_Group.H"
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
 718              		.loc 7 79 0 is_stmt 1
 719 0049 4889EF   		movq	%rbp, %rdi
 720 004c E8000000 		call	_ZNK8Fl_Group5arrayEv
 720      00
 721              	.LVL55:
 722 0051 488B3418 		movq	(%rax,%rbx), %rsi
 723              	.LVL56:
 724              	.LBE124:
 725              	.LBE123:
  98:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 726              		.loc 5 98 0
 727 0055 F6466002 		testb	$2, 96(%rsi)
 728 0059 75E5     		jne	.L36
  99:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 729              		.loc 5 99 0
 730 005b 488B06   		movq	(%rsi), %rax
 731 005e 488B4040 		movq	64(%rax), %rax
 732 0062 483D0000 		cmpq	$_ZN9Fl_Window9as_windowEv, %rax
 732      0000
 733 0068 7526     		jne	.L37
 734              	.L38:
 735              	.LVL57:
 100:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 736              		.loc 5 100 0
 737 006a 498B4500 		movq	0(%r13), %rax
 738 006e 4883C308 		addq	$8, %rbx
 739 0072 8B4E24   		movl	36(%rsi), %ecx
 740 0075 8B5620   		movl	32(%rsi), %edx
 741 0078 4C89EF   		movq	%r13, %rdi
 742 007b FF5070   		call	*112(%rax)
 743              	.LVL58:
 744              	.LBE122:
  96:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
 745              		.loc 5 96 0
 746 007e 4C39E3   		cmpq	%r12, %rbx
 747 0081 75C6     		jne	.L39
 748              	.LVL59:
 749              	.L33:
 750              	.LBE121:
 104:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 751              		.loc 5 104 0
 752 0083 4883C418 		addq	$24, %rsp
 753              		.cfi_remember_state
 754              		.cfi_def_cfa_offset 40
 755 0087 5B       		popq	%rbx
 756              		.cfi_def_cfa_offset 32
 757 0088 5D       		popq	%rbp
 758              		.cfi_def_cfa_offset 24
 759 0089 415C     		popq	%r12
 760              		.cfi_def_cfa_offset 16
 761 008b 415D     		popq	%r13
 762              		.cfi_def_cfa_offset 8
 763              	.LVL60:
 764 008d C3       		ret
 765              	.LVL61:
 766 008e 6690     		.p2align 4,,10
 767              		.p2align 3
 768              	.L37:
 769              		.cfi_restore_state
 770              	.LBB126:
 771              	.LBB125:
  99:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 772              		.loc 5 99 0
 773 0090 4889F7   		movq	%rsi, %rdi
 774 0093 48897424 		movq	%rsi, 8(%rsp)
 774      08
 775 0098 FFD0     		call	*%rax
 776              	.LVL62:
 777 009a 4885C0   		testq	%rax, %rax
 778 009d 488B7424 		movq	8(%rsp), %rsi
 778      08
 779 00a2 75C6     		jne	.L38
 102:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 780              		.loc 5 102 0
 781 00a4 4C89EF   		movq	%r13, %rdi
 782 00a7 E8000000 		call	_ZN15Fl_Paged_Device8traverseEP9Fl_Widget
 782      00
 783              	.LVL63:
 784 00ac EB92     		jmp	.L36
 785              	.LBE125:
 786              	.LBE126:
 787              		.cfi_endproc
 788              	.LFE477:
 790              		.section	.text.unlikely._ZN15Fl_Paged_Device8traverseEP9Fl_Widget
 791              	.LCOLDE18:
 792              		.section	.text._ZN15Fl_Paged_Device8traverseEP9Fl_Widget
 793              	.LHOTE18:
 794              		.section	.rodata.str1.1,"aMS",@progbits,1
 795              	.LC19:
 796 0000 666C746B 		.string	"fltk:device"
 796      3A646576 
 796      69636500 
 797              	.LC20:
 798 000c 6F70656E 		.string	"opengl.device.fltk.org"
 798      676C2E64 
 798      65766963 
 798      652E666C 
 798      746B2E6F 
 799              		.section	.text.unlikely._ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii,"ax",@progbits
 800              		.align 2
 801              	.LCOLDB21:
 802              		.section	.text._ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii,"ax",@progbits
 803              	.LHOTB21:
 804              		.align 2
 805              		.p2align 4,,15
 806              		.globl	_ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii
 808              	_ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii:
 809              	.LFB476:
  41:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 810              		.loc 5 41 0
 811              		.cfi_startproc
 812              	.LVL64:
 813 0000 4157     		pushq	%r15
 814              		.cfi_def_cfa_offset 16
 815              		.cfi_offset 15, -16
 816 0002 4156     		pushq	%r14
 817              		.cfi_def_cfa_offset 24
 818              		.cfi_offset 14, -24
 819 0004 4155     		pushq	%r13
 820              		.cfi_def_cfa_offset 32
 821              		.cfi_offset 13, -32
 822 0006 4154     		pushq	%r12
 823              		.cfi_def_cfa_offset 40
 824              		.cfi_offset 12, -40
 825 0008 55       		pushq	%rbp
 826              		.cfi_def_cfa_offset 48
 827              		.cfi_offset 6, -48
 828 0009 53       		pushq	%rbx
 829              		.cfi_def_cfa_offset 56
 830              		.cfi_offset 3, -56
 831 000a 4883EC48 		subq	$72, %rsp
 832              		.cfi_def_cfa_offset 128
  41:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
 833              		.loc 5 41 0
 834 000e 64488B04 		movq	%fs:40, %rax
 834      25280000 
 834      00
 835 0017 48894424 		movq	%rax, 56(%rsp)
 835      38
 836 001c 31C0     		xorl	%eax, %eax
 837              	.LVL65:
  43:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
 838              		.loc 5 43 0
 839 001e F6466002 		testb	$2, 96(%rsi)
 840 0022 742C     		je	.L92
 841              	.LVL66:
 842              	.L41:
  88:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 843              		.loc 5 88 0
 844 0024 488B4424 		movq	56(%rsp), %rax
 844      38
 845 0029 64483304 		xorq	%fs:40, %rax
 845      25280000 
 845      00
 846 0032 0F857A02 		jne	.L93
 846      0000
 847 0038 4883C448 		addq	$72, %rsp
 848              		.cfi_remember_state
 849              		.cfi_def_cfa_offset 56
 850 003c 5B       		popq	%rbx
 851              		.cfi_def_cfa_offset 48
 852 003d 5D       		popq	%rbp
 853              		.cfi_def_cfa_offset 40
 854 003e 415C     		popq	%r12
 855              		.cfi_def_cfa_offset 32
 856 0040 415D     		popq	%r13
 857              		.cfi_def_cfa_offset 24
 858 0042 415E     		popq	%r14
 859              		.cfi_def_cfa_offset 16
 860 0044 415F     		popq	%r15
 861              		.cfi_def_cfa_offset 8
 862 0046 C3       		ret
 863              	.LVL67:
 864 0047 660F1F84 		.p2align 4,,10
 864      00000000 
 864      00
 865              		.p2align 3
 866              	.L92:
 867              		.cfi_restore_state
 868              	.LBB161:
 869              	.LBB162:
  44:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 870              		.loc 5 44 0
 871 0050 488B06   		movq	(%rsi), %rax
 872 0053 4889FD   		movq	%rdi, %rbp
 873 0056 4889F3   		movq	%rsi, %rbx
 874 0059 4189D4   		movl	%edx, %r12d
 875 005c 4189CD   		movl	%ecx, %r13d
 876              	.LVL68:
 877 005f 4989F6   		movq	%rsi, %r14
 878 0062 488B4040 		movq	64(%rax), %rax
 879 0066 483D0000 		cmpq	$_ZN9Fl_Window9as_windowEv, %rax
 879      0000
 880 006c 0F85AE01 		jne	.L94
 880      0000
 881              	.LVL69:
 882              	.L43:
  46:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
 883              		.loc 5 46 0
 884 0072 BE800000 		movl	$128, %esi
 884      00
 885 0077 4889DF   		movq	%rbx, %rdi
 886 007a 440FB67B 		movzbl	109(%rbx), %r15d
 886      6D
 887              	.LVL70:
 888 007f E8000000 		call	_ZN9Fl_Widget6damageEh
 888      00
 889              	.LVL71:
  48:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 890              		.loc 5 48 0
 891 0084 488B4500 		movq	0(%rbp), %rax
 892 0088 488B4048 		movq	72(%rax), %rax
 893 008c 483D0000 		cmpq	$_ZN15Fl_Paged_Device6originEPiS0_, %rax
 893      0000
 894 0092 0F856801 		jne	.L44
 894      0000
 895              	.LVL72:
 896              	.LBB163:
 897              	.LBB164:
 114:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 898              		.loc 5 114 0
 899 0098 8B4510   		movl	16(%rbp), %eax
 115:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 900              		.loc 5 115 0
 901 009b 8B5514   		movl	20(%rbp), %edx
 114:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 902              		.loc 5 114 0
 903 009e 89442418 		movl	%eax, 24(%rsp)
 115:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 904              		.loc 5 115 0
 905 00a2 8954241C 		movl	%edx, 28(%rsp)
 906              	.LVL73:
 907              	.L45:
 908              	.LBE164:
 909              	.LBE163:
  49:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
 910              		.loc 5 49 0
 911 00a6 4101C4   		addl	%eax, %r12d
 912              	.LVL74:
  50:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
 913              		.loc 5 50 0
 914 00a9 4101D5   		addl	%edx, %r13d
 915              	.LVL75:
  51:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
 916              		.loc 5 51 0
 917 00ac 4D85F6   		testq	%r14, %r14
 918 00af 0F84AB00 		je	.L95
 918      0000
  55:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 919              		.loc 5 55 0
 920 00b5 4139C4   		cmpl	%eax, %r12d
 921 00b8 7505     		jne	.L68
 922 00ba 4139D5   		cmpl	%edx, %r13d
 923 00bd 7415     		je	.L62
 924              	.L68:
  56:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 925              		.loc 5 56 0
 926 00bf 488B4D00 		movq	0(%rbp), %rcx
 927 00c3 488B4960 		movq	96(%rcx), %rcx
 928 00c7 4881F900 		cmpq	$_ZN15Fl_Paged_Device9translateEii, %rcx
 928      000000
 929 00ce 0F85BC00 		jne	.L64
 929      0000
 930              	.L62:
  59:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 931              		.loc 5 59 0
 932 00d4 4889DF   		movq	%rbx, %rdi
 933 00d7 E8000000 		call	_ZNK9Fl_Widget6windowEv
 933      00
 934              	.LVL76:
 935 00dc 4885C0   		testq	%rax, %rax
 936 00df 0F84CB00 		je	.L49
 936      0000
 937              	.L60:
 938              	.LVL77:
 939              	.LBB165:
  69:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 940              		.loc 5 69 0
 941 00e5 488B03   		movq	(%rbx), %rax
 942 00e8 488B5048 		movq	72(%rax), %rdx
 943 00ec 4881FA00 		cmpq	$_ZN9Fl_Widget12as_gl_windowEv, %rdx
 943      000000
 944 00f3 0F853701 		jne	.L96
 944      0000
 945              	.LVL78:
 946              	.L50:
 947              	.LBE165:
  77:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
 948              		.loc 5 77 0
 949 00f9 4889DF   		movq	%rbx, %rdi
 950 00fc FF5010   		call	*16(%rax)
 951              	.LVL79:
 952              	.L53:
  79:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
 953              		.loc 5 79 0
 954 00ff 4D85F6   		testq	%r14, %r14
 955 0102 7411     		je	.L61
 956 0104 4889DF   		movq	%rbx, %rdi
 957 0107 E8000000 		call	_ZNK9Fl_Widget6windowEv
 957      00
 958              	.LVL80:
 959 010c 4885C0   		testq	%rax, %rax
 960 010f 0F84BB00 		je	.L55
 960      0000
 961              	.L61:
  81:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
 962              		.loc 5 81 0
 963 0115 4889DE   		movq	%rbx, %rsi
 964 0118 4889EF   		movq	%rbp, %rdi
 965 011b E8000000 		call	_ZN15Fl_Paged_Device8traverseEP9Fl_Widget
 965      00
 966              	.LVL81:
  83:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 967              		.loc 5 83 0
 968 0120 44396424 		cmpl	%r12d, 24(%rsp)
 968      18
 969 0125 7429     		je	.L97
 970              	.L56:
  84:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 971              		.loc 5 84 0
 972 0127 488B4500 		movq	0(%rbp), %rax
 973 012b 488B4068 		movq	104(%rax), %rax
 974 012f 483D0000 		cmpq	$_ZN15Fl_Paged_Device11untranslateEv, %rax
 974      0000
 975 0135 0F856D01 		jne	.L98
 975      0000
 976              	.L57:
  86:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
 977              		.loc 5 86 0
 978 013b 41F6C701 		testb	$1, %r15b
 979 013f 0F85A300 		jne	.L58
 979      0000
 980              	.LVL82:
 981              	.LBB168:
 982              	.LBB169:
 931:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 983              		.loc 1 931 0
 984 0145 44887B6D 		movb	%r15b, 109(%rbx)
 985 0149 E9D6FEFF 		jmp	.L41
 985      FF
 986              	.LVL83:
 987 014e 6690     		.p2align 4,,10
 988              		.p2align 3
 989              	.L97:
 990              	.LBE169:
 991              	.LBE168:
  83:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
 992              		.loc 5 83 0
 993 0150 44396C24 		cmpl	%r13d, 28(%rsp)
 993      1C
 994 0155 75D0     		jne	.L56
 995 0157 EBE2     		jmp	.L57
 996 0159 0F1F8000 		.p2align 4,,10
 996      000000
 997              		.p2align 3
 998              	.L95:
 999              	.LVL84:
  52:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
 1000              		.loc 5 52 0
 1001 0160 442B6320 		subl	32(%rbx), %r12d
 1002              	.LVL85:
  53:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
 1003              		.loc 5 53 0
 1004 0164 442B6B24 		subl	36(%rbx), %r13d
 1005              	.LVL86:
  55:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
 1006              		.loc 5 55 0
 1007 0168 4139C4   		cmpl	%eax, %r12d
 1008 016b 7509     		jne	.L47
 1009 016d 4139D5   		cmpl	%edx, %r13d
 1010 0170 0F846FFF 		je	.L60
 1010      FFFF
 1011              	.L47:
  56:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
 1012              		.loc 5 56 0
 1013 0176 488B4D00 		movq	0(%rbp), %rcx
 1014 017a 488B4960 		movq	96(%rcx), %rcx
 1015 017e 4881F900 		cmpq	$_ZN15Fl_Paged_Device9translateEii, %rcx
 1015      000000
 1016 0185 0F845AFF 		je	.L60
 1016      FFFF
 1017              	.LVL87:
 1018 018b 0F1F4400 		.p2align 4,,10
 1018      00
 1019              		.p2align 3
 1020              	.L64:
 1021 0190 4489EE   		movl	%r13d, %esi
 1022 0193 4889EF   		movq	%rbp, %rdi
 1023 0196 29D6     		subl	%edx, %esi
 1024 0198 89F2     		movl	%esi, %edx
 1025 019a 4489E6   		movl	%r12d, %esi
 1026 019d 29C6     		subl	%eax, %esi
 1027 019f FFD1     		call	*%rcx
 1028              	.LVL88:
  59:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
 1029              		.loc 5 59 0
 1030 01a1 4D85F6   		testq	%r14, %r14
 1031 01a4 0F843BFF 		je	.L60
 1031      FFFF
 1032 01aa E925FFFF 		jmp	.L62
 1032      FF
 1033 01af 90       		.p2align 4,,10
 1034              		.p2align 3
 1035              	.L49:
 1036              	.LVL89:
 1037              	.LBB170:
 1038              	.LBB171:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1039              		.loc 6 82 0
 1040 01b0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1040      000000
 1041 01b7 8B4B28   		movl	40(%rbx), %ecx
 1042 01ba 31D2     		xorl	%edx, %edx
 1043 01bc 448B432C 		movl	44(%rbx), %r8d
 1044 01c0 31F6     		xorl	%esi, %esi
 1045 01c2 488B07   		movq	(%rdi), %rax
 1046 01c5 FF905001 		call	*336(%rax)
 1046      0000
 1047              	.LVL90:
 1048 01cb E915FFFF 		jmp	.L60
 1048      FF
 1049              	.LVL91:
 1050              		.p2align 4,,10
 1051              		.p2align 3
 1052              	.L55:
 1053              	.LBE171:
 1054              	.LBE170:
 1055              	.LBB172:
 1056              	.LBB173:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1057              		.loc 6 103 0
 1058 01d0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1058      000000
 1059 01d7 488B07   		movq	(%rdi), %rax
 1060 01da FF907001 		call	*368(%rax)
 1060      0000
 1061              	.LVL92:
 1062 01e0 E930FFFF 		jmp	.L61
 1062      FF
 1063              		.p2align 4,,10
 1064 01e5 0F1F00   		.p2align 3
 1065              	.L58:
 1066              	.LBE173:
 1067              	.LBE172:
  87:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
 1068              		.loc 5 87 0
 1069 01e8 BE800000 		movl	$128, %esi
 1069      00
 1070 01ed 4889DF   		movq	%rbx, %rdi
 1071 01f0 E8000000 		call	_ZN9Fl_Widget6damageEh
 1071      00
 1072              	.LVL93:
 1073 01f5 E92AFEFF 		jmp	.L41
 1073      FF
 1074              	.LVL94:
 1075 01fa 660F1F44 		.p2align 4,,10
 1075      0000
 1076              		.p2align 3
 1077              	.L44:
  48:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
 1078              		.loc 5 48 0
 1079 0200 488D5424 		leaq	28(%rsp), %rdx
 1079      1C
 1080 0205 488D7424 		leaq	24(%rsp), %rsi
 1080      18
 1081 020a 4889EF   		movq	%rbp, %rdi
 1082 020d FFD0     		call	*%rax
 1083              	.LVL95:
 1084 020f 8B442418 		movl	24(%rsp), %eax
 1085 0213 8B54241C 		movl	28(%rsp), %edx
 1086 0217 E98AFEFF 		jmp	.L45
 1086      FF
 1087              	.LVL96:
 1088 021c 0F1F4000 		.p2align 4,,10
 1089              		.p2align 3
 1090              	.L94:
  44:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
 1091              		.loc 5 44 0
 1092 0220 4889F7   		movq	%rsi, %rdi
 1093              	.LVL97:
 1094 0223 FFD0     		call	*%rax
 1095              	.LVL98:
 1096 0225 4989C6   		movq	%rax, %r14
 1097 0228 E945FEFF 		jmp	.L43
 1097      FF
 1098              	.LVL99:
 1099 022d 0F1F00   		.p2align 4,,10
 1100              		.p2align 3
 1101              	.L96:
 1102              	.LBB174:
  69:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
 1103              		.loc 5 69 0
 1104 0230 4889DF   		movq	%rbx, %rdi
 1105 0233 FFD2     		call	*%rdx
 1106              	.LVL100:
 1107 0235 4885C0   		testq	%rax, %rax
 1108 0238 7460     		je	.L65
 1109              	.LBB166:
  70:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 1110              		.loc 5 70 0
 1111 023a 488D7C24 		leaq	32(%rsp), %rdi
 1111      20
 1112 023f BE000000 		movl	$.LC19, %esi
 1112      00
 1113 0244 E8000000 		call	_ZN17Fl_Plugin_ManagerC1EPKc
 1113      00
 1114              	.LVL101:
  71:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
 1115              		.loc 5 71 0
 1116 0249 488D7C24 		leaq	32(%rsp), %rdi
 1116      20
 1117 024e BE000000 		movl	$.LC20, %esi
 1117      00
 1118 0253 E8000000 		call	_ZN17Fl_Plugin_Manager6pluginEPKc
 1118      00
 1119              	.LVL102:
  72:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1120              		.loc 5 72 0
 1121 0258 4885C0   		testq	%rax, %rax
 1122 025b 7433     		je	.L52
  73:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 1123              		.loc 5 73 0
 1124 025d 4C8B08   		movq	(%rax), %r9
 1125 0260 4531C0   		xorl	%r8d, %r8d
 1126 0263 31C9     		xorl	%ecx, %ecx
 1127 0265 31D2     		xorl	%edx, %edx
 1128 0267 4889DE   		movq	%rbx, %rsi
 1129 026a 4889C7   		movq	%rax, %rdi
 1130 026d 41FF5120 		call	*32(%r9)
 1131              	.LVL103:
  70:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 1132              		.loc 5 70 0
 1133 0271 488D7C24 		leaq	32(%rsp), %rdi
 1133      20
  73:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
 1134              		.loc 5 73 0
 1135 0276 8944240C 		movl	%eax, 12(%rsp)
 1136              	.LVL104:
  70:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 1137              		.loc 5 70 0
 1138 027a E8000000 		call	_ZN17Fl_Plugin_ManagerD1Ev
 1138      00
 1139              	.LVL105:
 1140              	.LBE166:
 1141              	.LBE174:
  76:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
 1142              		.loc 5 76 0
 1143 027f 8B44240C 		movl	12(%rsp), %eax
 1144 0283 85C0     		testl	%eax, %eax
 1145 0285 0F8574FE 		jne	.L53
 1145      FFFF
 1146 028b EB0D     		jmp	.L65
 1147              	.LVL106:
 1148 028d 0F1F00   		.p2align 4,,10
 1149              		.p2align 3
 1150              	.L52:
 1151              	.LBB175:
 1152              	.LBB167:
  70:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
 1153              		.loc 5 70 0
 1154 0290 488D7C24 		leaq	32(%rsp), %rdi
 1154      20
 1155 0295 E8000000 		call	_ZN17Fl_Plugin_ManagerD1Ev
 1155      00
 1156              	.LVL107:
 1157              	.L65:
 1158 029a 488B03   		movq	(%rbx), %rax
 1159 029d E957FEFF 		jmp	.L50
 1159      FF
 1160              		.p2align 4,,10
 1161 02a2 660F1F44 		.p2align 3
 1161      0000
 1162              	.L98:
 1163              	.LBE167:
 1164              	.LBE175:
  84:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
 1165              		.loc 5 84 0
 1166 02a8 4889EF   		movq	%rbp, %rdi
 1167 02ab FFD0     		call	*%rax
 1168              	.LVL108:
 1169 02ad E989FEFF 		jmp	.L57
 1169      FF
 1170              	.LVL109:
 1171              	.L93:
 1172              	.LBE162:
 1173              	.LBE161:
  88:fltk-1.3.4-1/src/Fl_Paged_Device.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
 1174              		.loc 5 88 0
 1175 02b2 E8000000 		call	__stack_chk_fail
 1175      00
 1176              	.LVL110:
 1177              		.cfi_endproc
 1178              	.LFE476:
 1180              		.section	.text.unlikely._ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii
 1181              	.LCOLDE21:
 1182              		.section	.text._ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii
 1183              	.LHOTE21:
 1184              		.weak	_ZTS15Fl_Paged_Device
 1185              		.section	.rodata._ZTS15Fl_Paged_Device,"aG",@progbits,_ZTS15Fl_Paged_Device,comdat
 1186              		.align 16
 1189              	_ZTS15Fl_Paged_Device:
 1190 0000 3135466C 		.string	"15Fl_Paged_Device"
 1190      5F506167 
 1190      65645F44 
 1190      65766963 
 1190      6500
 1191              		.weak	_ZTI15Fl_Paged_Device
 1192              		.section	.rodata._ZTI15Fl_Paged_Device,"aG",@progbits,_ZTI15Fl_Paged_Device,comdat
 1193              		.align 8
 1196              	_ZTI15Fl_Paged_Device:
 1197 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1197      00000000 
 1198 0008 00000000 		.quad	_ZTS15Fl_Paged_Device
 1198      00000000 
 1199 0010 00000000 		.quad	_ZTI17Fl_Surface_Device
 1199      00000000 
 1200              		.weak	_ZTV15Fl_Paged_Device
 1201              		.section	.rodata._ZTV15Fl_Paged_Device,"aG",@progbits,_ZTV15Fl_Paged_Device,comdat
 1202              		.align 8
 1205              	_ZTV15Fl_Paged_Device:
 1206 0000 00000000 		.quad	0
 1206      00000000 
 1207 0008 00000000 		.quad	_ZTI15Fl_Paged_Device
 1207      00000000 
 1208 0010 00000000 		.quad	_ZN15Fl_Paged_Device10class_nameEv
 1208      00000000 
 1209 0018 00000000 		.quad	_ZN15Fl_Paged_DeviceD1Ev
 1209      00000000 
 1210 0020 00000000 		.quad	_ZN15Fl_Paged_DeviceD0Ev
 1210      00000000 
 1211 0028 00000000 		.quad	_ZN17Fl_Surface_Device11set_currentEv
 1211      00000000 
 1212 0030 00000000 		.quad	_ZN15Fl_Paged_Device9start_jobEiPiS0_
 1212      00000000 
 1213 0038 00000000 		.quad	_ZN15Fl_Paged_Device10start_pageEv
 1213      00000000 
 1214 0040 00000000 		.quad	_ZN15Fl_Paged_Device14printable_rectEPiS0_
 1214      00000000 
 1215 0048 00000000 		.quad	_ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_
 1215      00000000 
 1216 0050 00000000 		.quad	_ZN15Fl_Paged_Device6originEii
 1216      00000000 
 1217 0058 00000000 		.quad	_ZN15Fl_Paged_Device6originEPiS0_
 1217      00000000 
 1218 0060 00000000 		.quad	_ZN15Fl_Paged_Device5scaleEff
 1218      00000000 
 1219 0068 00000000 		.quad	_ZN15Fl_Paged_Device6rotateEf
 1219      00000000 
 1220 0070 00000000 		.quad	_ZN15Fl_Paged_Device9translateEii
 1220      00000000 
 1221 0078 00000000 		.quad	_ZN15Fl_Paged_Device11untranslateEv
 1221      00000000 
 1222 0080 00000000 		.quad	_ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii
 1222      00000000 
 1223 0088 00000000 		.quad	_ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii
 1223      00000000 
 1224 0090 00000000 		.quad	_ZN15Fl_Paged_Device8end_pageEv
 1224      00000000 
 1225 0098 00000000 		.quad	_ZN15Fl_Paged_Device7end_jobEv
 1225      00000000 
 1226              		.globl	_ZN15Fl_Paged_Device12page_formatsE
 1227              		.section	.rodata.str1.1
 1228              	.LC22:
 1229 0023 413000   		.string	"A0"
 1230              	.LC23:
 1231 0026 413100   		.string	"A1"
 1232              	.LC24:
 1233 0029 413200   		.string	"A2"
 1234              	.LC25:
 1235 002c 413300   		.string	"A3"
 1236              	.LC26:
 1237 002f 413400   		.string	"A4"
 1238              	.LC27:
 1239 0032 413500   		.string	"A5"
 1240              	.LC28:
 1241 0035 413600   		.string	"A6"
 1242              	.LC29:
 1243 0038 413700   		.string	"A7"
 1244              	.LC30:
 1245 003b 413800   		.string	"A8"
 1246              	.LC31:
 1247 003e 413900   		.string	"A9"
 1248              	.LC32:
 1249 0041 423000   		.string	"B0"
 1250              	.LC33:
 1251 0044 423100   		.string	"B1"
 1252              	.LC34:
 1253 0047 423200   		.string	"B2"
 1254              	.LC35:
 1255 004a 423300   		.string	"B3"
 1256              	.LC36:
 1257 004d 423400   		.string	"B4"
 1258              	.LC37:
 1259 0050 423500   		.string	"B5"
 1260              	.LC38:
 1261 0053 423600   		.string	"B6"
 1262              	.LC39:
 1263 0056 423700   		.string	"B7"
 1264              	.LC40:
 1265 0059 423800   		.string	"B8"
 1266              	.LC41:
 1267 005c 423900   		.string	"B9"
 1268              	.LC42:
 1269 005f 42313000 		.string	"B10"
 1270              	.LC43:
 1271 0063 456E7643 		.string	"EnvC5"
 1271      3500
 1272              	.LC44:
 1273 0069 456E7644 		.string	"EnvDL"
 1273      4C00
 1274              	.LC45:
 1275 006f 45786563 		.string	"Executive"
 1275      75746976 
 1275      6500
 1276              	.LC46:
 1277 0079 466F6C69 		.string	"Folio"
 1277      6F00
 1278              	.LC47:
 1279 007f 4C656467 		.string	"Ledger"
 1279      657200
 1280              	.LC48:
 1281 0086 4C656761 		.string	"Legal"
 1281      6C00
 1282              	.LC49:
 1283 008c 4C657474 		.string	"Letter"
 1283      657200
 1284              	.LC50:
 1285 0093 5461626C 		.string	"Tabloid"
 1285      6F696400 
 1286              	.LC51:
 1287 009b 456E7631 		.string	"Env10"
 1287      3000
 1288              		.section	.rodata._ZN15Fl_Paged_Device12page_formatsE,"a",@progbits
 1289              		.align 32
 1292              	_ZN15Fl_Paged_Device12page_formatsE:
 1293 0000 50090000 		.long	2384
 1294 0004 2A0D0000 		.long	3370
 1295 0008 00000000 		.quad	.LC22
 1295      00000000 
 1296 0010 94060000 		.long	1684
 1297 0014 50090000 		.long	2384
 1298 0018 00000000 		.quad	.LC23
 1298      00000000 
 1299 0020 A7040000 		.long	1191
 1300 0024 94060000 		.long	1684
 1301 0028 00000000 		.quad	.LC24
 1301      00000000 
 1302 0030 4A030000 		.long	842
 1303 0034 A7040000 		.long	1191
 1304 0038 00000000 		.quad	.LC25
 1304      00000000 
 1305 0040 53020000 		.long	595
 1306 0044 4A030000 		.long	842
 1307 0048 00000000 		.quad	.LC26
 1307      00000000 
 1308 0050 A4010000 		.long	420
 1309 0054 53020000 		.long	595
 1310 0058 00000000 		.quad	.LC27
 1310      00000000 
 1311 0060 29010000 		.long	297
 1312 0064 A4010000 		.long	420
 1313 0068 00000000 		.quad	.LC28
 1313      00000000 
 1314 0070 D2000000 		.long	210
 1315 0074 29010000 		.long	297
 1316 0078 00000000 		.quad	.LC29
 1316      00000000 
 1317 0080 94000000 		.long	148
 1318 0084 D2000000 		.long	210
 1319 0088 00000000 		.quad	.LC30
 1319      00000000 
 1320 0090 69000000 		.long	105
 1321 0094 94000000 		.long	148
 1322 0098 00000000 		.quad	.LC31
 1322      00000000 
 1323 00a0 680B0000 		.long	2920
 1324 00a4 1F100000 		.long	4127
 1325 00a8 00000000 		.quad	.LC32
 1325      00000000 
 1326 00b0 10080000 		.long	2064
 1327 00b4 680B0000 		.long	2920
 1328 00b8 00000000 		.quad	.LC33
 1328      00000000 
 1329 00c0 B4050000 		.long	1460
 1330 00c4 10080000 		.long	2064
 1331 00c8 00000000 		.quad	.LC34
 1331      00000000 
 1332 00d0 08040000 		.long	1032
 1333 00d4 B4050000 		.long	1460
 1334 00d8 00000000 		.quad	.LC35
 1334      00000000 
 1335 00e0 D9020000 		.long	729
 1336 00e4 08040000 		.long	1032
 1337 00e8 00000000 		.quad	.LC36
 1337      00000000 
 1338 00f0 04020000 		.long	516
 1339 00f4 D9020000 		.long	729
 1340 00f8 00000000 		.quad	.LC37
 1340      00000000 
 1341 0100 6B010000 		.long	363
 1342 0104 04020000 		.long	516
 1343 0108 00000000 		.quad	.LC38
 1343      00000000 
 1344 0110 02010000 		.long	258
 1345 0114 6B010000 		.long	363
 1346 0118 00000000 		.quad	.LC39
 1346      00000000 
 1347 0120 B5000000 		.long	181
 1348 0124 02010000 		.long	258
 1349 0128 00000000 		.quad	.LC40
 1349      00000000 
 1350 0130 7F000000 		.long	127
 1351 0134 B5000000 		.long	181
 1352 0138 00000000 		.quad	.LC41
 1352      00000000 
 1353 0140 5B000000 		.long	91
 1354 0144 7F000000 		.long	127
 1355 0148 00000000 		.quad	.LC42
 1355      00000000 
 1356 0150 CB010000 		.long	459
 1357 0154 89020000 		.long	649
 1358 0158 00000000 		.quad	.LC43
 1358      00000000 
 1359 0160 38010000 		.long	312
 1360 0164 70020000 		.long	624
 1361 0168 00000000 		.quad	.LC44
 1361      00000000 
 1362 0170 0A020000 		.long	522
 1363 0174 F4020000 		.long	756
 1364 0178 00000000 		.quad	.LC45
 1364      00000000 
 1365 0180 53020000 		.long	595
 1366 0184 A7030000 		.long	935
 1367 0188 00000000 		.quad	.LC46
 1367      00000000 
 1368 0190 C8040000 		.long	1224
 1369 0194 18030000 		.long	792
 1370 0198 00000000 		.quad	.LC47
 1370      00000000 
 1371 01a0 64020000 		.long	612
 1372 01a4 F0030000 		.long	1008
 1373 01a8 00000000 		.quad	.LC48
 1373      00000000 
 1374 01b0 64020000 		.long	612
 1375 01b4 18030000 		.long	792
 1376 01b8 00000000 		.quad	.LC49
 1376      00000000 
 1377 01c0 18030000 		.long	792
 1378 01c4 C8040000 		.long	1224
 1379 01c8 00000000 		.quad	.LC50
 1379      00000000 
 1380 01d0 29010000 		.long	297
 1381 01d4 AC020000 		.long	684
 1382 01d8 00000000 		.quad	.LC51
 1382      00000000 
 1383              		.globl	_ZN15Fl_Paged_Device8class_idE
 1384              		.section	.rodata.str1.1
 1385              	.LC52:
 1386 00a1 466C5F50 		.string	"Fl_Paged_Device"
 1386      61676564 
 1386      5F446576 
 1386      69636500 
 1387              		.section	.data._ZN15Fl_Paged_Device8class_idE,"aw",@progbits
 1388              		.align 8
 1391              	_ZN15Fl_Paged_Device8class_idE:
 1392 0000 00000000 		.quad	.LC52
 1392      00000000 
 1393              		.text
 1394              	.Letext0:
 1395              		.section	.text.unlikely._ZN9Fl_Widget12as_gl_windowEv,"axG",@progbits,_ZN9Fl_Widget12as_gl_windowE
 1396              	.Letext_cold0:
 1397              		.file 8 "fltk-1.3.4-1/FL/fl_types.h"
 1398              		.file 9 "fltk-1.3.4-1/FL/Enumerations.H"
 1399              		.file 10 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1400              		.file 11 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1401              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 1402              		.file 13 "/usr/include/libio.h"
 1403              		.file 14 "fltk-1.3.4-1/FL/Fl.H"
 1404              		.file 15 "fltk-1.3.4-1/FL/Fl_Plugin.H"
 1405              		.file 16 "fltk-1.3.4-1/FL/x.H"
 1406              		.file 17 "/usr/include/stdio.h"
 1407              		.file 18 "/usr/include/X11/Xlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Paged_Device.cxx
     /tmp/ccKhJC6s.s:16     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccKhJC6s.s:41     .text._ZN9Fl_Window9as_windowEv:0000000000000000 _ZN9Fl_Window9as_windowEv
     /tmp/ccKhJC6s.s:66     .text._ZN9Fl_Device10class_nameEv:0000000000000000 _ZN9Fl_Device10class_nameEv
     /tmp/ccKhJC6s.s:91     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD2Ev
     /tmp/ccKhJC6s.s:91     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD1Ev
     /tmp/ccKhJC6s.s:115    .text._ZN15Fl_Paged_DeviceD2Ev:0000000000000000 _ZN15Fl_Paged_DeviceD2Ev
     /tmp/ccKhJC6s.s:115    .text._ZN15Fl_Paged_DeviceD2Ev:0000000000000000 _ZN15Fl_Paged_DeviceD1Ev
     /tmp/ccKhJC6s.s:140    .text._ZN15Fl_Paged_Device10class_nameEv:0000000000000000 _ZN15Fl_Paged_Device10class_nameEv
     /tmp/ccKhJC6s.s:1391   .data._ZN15Fl_Paged_Device8class_idE:0000000000000000 _ZN15Fl_Paged_Device8class_idE
     /tmp/ccKhJC6s.s:164    .text._ZN15Fl_Paged_Device6originEPiS0_:0000000000000000 _ZN15Fl_Paged_Device6originEPiS0_
     /tmp/ccKhJC6s.s:201    .text._ZN15Fl_Paged_Device9start_jobEiPiS0_:0000000000000000 _ZN15Fl_Paged_Device9start_jobEiPiS0_
     /tmp/ccKhJC6s.s:225    .text._ZN15Fl_Paged_Device14printable_rectEPiS0_:0000000000000000 _ZN15Fl_Paged_Device14printable_rectEPiS0_
     /tmp/ccKhJC6s.s:249    .text._ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_:0000000000000000 _ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_
     /tmp/ccKhJC6s.s:271    .text._ZN15Fl_Paged_Device5scaleEff:0000000000000000 _ZN15Fl_Paged_Device5scaleEff
     /tmp/ccKhJC6s.s:293    .text._ZN15Fl_Paged_Device6rotateEf:0000000000000000 _ZN15Fl_Paged_Device6rotateEf
     /tmp/ccKhJC6s.s:315    .text._ZN15Fl_Paged_Device8end_pageEv:0000000000000000 _ZN15Fl_Paged_Device8end_pageEv
     /tmp/ccKhJC6s.s:315    .text._ZN15Fl_Paged_Device8end_pageEv:0000000000000000 _ZN15Fl_Paged_Device10start_pageEv
     /tmp/ccKhJC6s.s:341    .text._ZN15Fl_Paged_Device9translateEii:0000000000000000 _ZN15Fl_Paged_Device9translateEii
     /tmp/ccKhJC6s.s:341    .text._ZN15Fl_Paged_Device9translateEii:0000000000000000 _ZN15Fl_Paged_Device6originEii
     /tmp/ccKhJC6s.s:365    .text._ZN15Fl_Paged_Device11untranslateEv:0000000000000000 _ZN15Fl_Paged_Device11untranslateEv
     /tmp/ccKhJC6s.s:365    .text._ZN15Fl_Paged_Device11untranslateEv:0000000000000000 _ZN15Fl_Paged_Device7end_jobEv
     /tmp/ccKhJC6s.s:389    .text._ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii:0000000000000000 _ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii
     /tmp/ccKhJC6s.s:614    .text._ZN15Fl_Paged_DeviceD0Ev:0000000000000000 _ZN15Fl_Paged_DeviceD0Ev
     /tmp/ccKhJC6s.s:638    .text._ZN9Fl_DeviceD0Ev:0000000000000000 _ZN9Fl_DeviceD0Ev
     /tmp/ccKhJC6s.s:662    .text._ZN15Fl_Paged_Device8traverseEP9Fl_Widget:0000000000000000 _ZN15Fl_Paged_Device8traverseEP9Fl_Widget
     /tmp/ccKhJC6s.s:808    .text._ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii:0000000000000000 _ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii
     /tmp/ccKhJC6s.s:1189   .rodata._ZTS15Fl_Paged_Device:0000000000000000 _ZTS15Fl_Paged_Device
     /tmp/ccKhJC6s.s:1196   .rodata._ZTI15Fl_Paged_Device:0000000000000000 _ZTI15Fl_Paged_Device
     /tmp/ccKhJC6s.s:1205   .rodata._ZTV15Fl_Paged_Device:0000000000000000 _ZTV15Fl_Paged_Device
     /tmp/ccKhJC6s.s:1292   .rodata._ZN15Fl_Paged_Device12page_formatsE:0000000000000000 _ZN15Fl_Paged_Device12page_formatsE
                           .group:0000000000000000 _ZN9Fl_DeviceD5Ev
                           .group:0000000000000000 _ZN15Fl_Paged_DeviceD5Ev
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
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
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

UNDEFINED SYMBOLS
_ZN9Fl_Device8class_idE
_ZN17Fl_Surface_Device8_surfaceE
_ZN17Fl_Display_Device14display_deviceEv
_ZN2Fl12first_windowEv
fl_gc
_ZN2Fl5checkEv
_ZN9Fl_Window12make_currentEv
_Z13fl_read_imagePhiiiii
fl_graphics_driver
_ZdaPv
_ZN17Fl_Surface_Device15default_surfaceEv
_ZdlPv
_ZNK8Fl_Group5arrayEv
_ZN9Fl_Widget6damageEh
_ZNK9Fl_Widget6windowEv
_ZN17Fl_Plugin_ManagerC1EPKc
_ZN17Fl_Plugin_Manager6pluginEPKc
_ZN17Fl_Plugin_ManagerD1Ev
__stack_chk_fail
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI17Fl_Surface_Device
_ZN17Fl_Surface_Device11set_currentEv
