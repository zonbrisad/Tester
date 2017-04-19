   1              		.file	"Fl_File_Browser.cxx"
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
  17              	.LFB93:
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
  26              	.LFE93:
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
  42              	.LFB94:
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
  50              	.LFE94:
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
  66              	.LFB110:
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
  75              	.LFE110:
  77              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  78              	.LCOLDE2:
  79              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  80              	.LHOTE2:
  81              		.section	.text.unlikely._ZNK15Fl_File_Browser11incr_heightEv,"axG",@progbits,_ZNK15Fl_File_Browser
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZNK15Fl_File_Browser11incr_heightEv,"axG",@progbits,_ZNK15Fl_File_Browser11incr_he
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.weak	_ZNK15Fl_File_Browser11incr_heightEv
  90              	_ZNK15Fl_File_Browser11incr_heightEv:
  91              	.LFB361:
  92              		.file 3 "fltk-1.3.4-1/FL/Fl_File_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // "$Id: Fl_File_Browser.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // FileBrowser definitions.
   5:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // Copyright 1999-2010 by Michael Sweet.
   7:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_File_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_File_Browser.H ****    Fl_File_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  23:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // Include necessary header files...
  24:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  25:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  26:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #ifndef _Fl_File_Browser_H_
  27:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #  define _Fl_File_Browser_H_
  28:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  29:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #  include "Fl_Browser.H"
  30:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #  include "Fl_File_Icon.H"
  31:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #  include "filename.H"
  32:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  33:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  34:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  35:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // Fl_File_Browser class...
  36:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  37:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  38:fltk-1.3.4-1/FL/Fl_File_Browser.H **** /** The Fl_File_Browser widget displays a list of filenames, optionally with file-specific icons. *
  39:fltk-1.3.4-1/FL/Fl_File_Browser.H **** class FL_EXPORT Fl_File_Browser : public Fl_Browser {
  40:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   
  41:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		filetype_;
  42:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   const char	*directory_;
  43:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   uchar		iconsize_;
  44:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   const char	*pattern_;
  45:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  46:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		full_height() const;
  47:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		item_height(void *) const;
  48:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		item_width(void *) const;
  49:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   void		item_draw(void *, int, int, int, int) const;
  50:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		incr_height() const { return (item_height(0)); }
  93              		.loc 3 50 0
  94              		.cfi_startproc
  95              	.LVL3:
  96              		.loc 3 50 0
  97 0000 488B07   		movq	(%rdi), %rax
  98 0003 31F6     		xorl	%esi, %esi
  99 0005 488B4070 		movq	112(%rax), %rax
 100 0009 FFE0     		jmp	*%rax
 101              	.LVL4:
 102              		.cfi_endproc
 103              	.LFE361:
 105              		.section	.text.unlikely._ZNK15Fl_File_Browser11incr_heightEv,"axG",@progbits,_ZNK15Fl_File_Browser
 106              	.LCOLDE3:
 107              		.section	.text._ZNK15Fl_File_Browser11incr_heightEv,"axG",@progbits,_ZNK15Fl_File_Browser11incr_he
 108              	.LHOTE3:
 109              		.section	.text.unlikely._ZNK15Fl_File_Browser11item_heightEPv,"ax",@progbits
 110              		.align 2
 111              	.LCOLDB4:
 112              		.section	.text._ZNK15Fl_File_Browser11item_heightEPv,"ax",@progbits
 113              	.LHOTB4:
 114              		.align 2
 115              		.p2align 4,,15
 116              		.globl	_ZNK15Fl_File_Browser11item_heightEPv
 118              	_ZNK15Fl_File_Browser11item_heightEPv:
 119              	.LFB578:
 120              		.file 4 "fltk-1.3.4-1/src/Fl_File_Browser.cxx"
   1:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    1              		.file	"Fl_File_Browser.cxx"
   2:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
   5:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    7              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
   8:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget
  12:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   13              		.section	.text._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windo
  14:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   14              		.weak	_ZN9Fl_Widget9as_windowEv
  15:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   16              	_ZN9Fl_Widget9as_windowEv:
  16:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   17              	.LFB93:
  17:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Widget.H"
  18:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  19:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
  20:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  21:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  23:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  25:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****    9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  29:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  31:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  33:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  35:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  36:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  37:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  38:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  39:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  40:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  41:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  42:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  43:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  44:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  45:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be docu
  46:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  47:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  48:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  49:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  50:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  51:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  52:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  53:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  54:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  55:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  56:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  57:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  58:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  59:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  60:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  61:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  62:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  63:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  64:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  65:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by
  66:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  67:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk wid
  68:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  69:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the w
  70:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  71:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long da
  72:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  73:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  74:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed gr
  75:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  76:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will 
  77:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplicat
  78:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We al
  79:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html 
  80:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this 
  81:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  82:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  83:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  84:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  85:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  86:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  87:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  88:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  89:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  90:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  91:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  92:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  93:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  94:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  95:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  96:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  97:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  98:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  99:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 100:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
 101:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
 102:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
 103:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
 104:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 105:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 106:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
 107:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 108:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is 
 109:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
 110:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 111:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent
 112:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are 
 113:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise note
 114:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also tri
 115:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. I
 116:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****   99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 117:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 118:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 119:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 120:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 122:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 123:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 124:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 125:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 126:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 127:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 128:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 129:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 130:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 131:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 132:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 133:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 134:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 135:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 136:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 137:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 138:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 139:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 140:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 121              		.loc 4 140 0
 122              		.cfi_startproc
 123              	.LVL5:
 124 0000 55       		pushq	%rbp
 125              		.cfi_def_cfa_offset 16
 126              		.cfi_offset 6, -16
 127 0001 53       		pushq	%rbx
 128              		.cfi_def_cfa_offset 24
 129              		.cfi_offset 3, -24
 130 0002 4889FB   		movq	%rdi, %rbx
 131              	.LVL6:
 132 0005 4889F5   		movq	%rsi, %rbp
 133 0008 4883EC08 		subq	$8, %rsp
 134              		.cfi_def_cfa_offset 32
 135              	.LBB127:
 136              	.LBB128:
 137              		.file 5 "fltk-1.3.4-1/FL/fl_draw.H"
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
 138              		.loc 5 509 0
 139 000c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 139      000000
 140              	.LVL7:
 141 0013 8B93C000 		movl	192(%rbx), %edx
 141      0000
 142 0019 8BB3BC00 		movl	188(%rbx), %esi
 142      0000
 143              	.LVL8:
 144 001f 488B07   		movq	(%rdi), %rax
 145 0022 FF90B001 		call	*432(%rax)
 145      0000
 146              	.LVL9:
 147              	.LBE128:
 148              	.LBE127:
 149              	.LBB129:
 150              	.LBB130:
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
 151              		.loc 5 527 0
 152 0028 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 152      000000
 153 002f 488B07   		movq	(%rdi), %rax
 154 0032 FF90D001 		call	*464(%rax)
 154      0000
 155              	.LVL10:
 156              	.LBE130:
 157              	.LBE129:
 141:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 142:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 143:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 144:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 145:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all deriv
 146:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), 
 147:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 148:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 149:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to 
 150:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 151:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 152:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 153:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 154:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 155:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 156:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 157:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 158              		.loc 4 157 0
 159 0038 4885ED   		testq	%rbp, %rbp
 160 003b 744B     		je	.L10
 158:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 161              		.loc 4 158 0
 162 003d 0FB64D23 		movzbl	35(%rbp), %ecx
 163 0041 488D7523 		leaq	35(%rbp), %rsi
 164              	.LVL11:
 152:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 165              		.loc 4 152 0
 166 0045 89C2     		movl	%eax, %edx
 167              		.loc 4 158 0
 168 0047 84C9     		testb	%cl, %cl
 169 0049 7419     		je	.L6
 170              	.LVL12:
 171 004b 0F1F4400 		.p2align 4,,10
 171      00
 172              		.p2align 3
 173              	.L8:
 159:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 160:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 174              		.loc 4 160 0
 175 0050 8D3C02   		leal	(%rdx,%rax), %edi
 176 0053 80F90A   		cmpb	$10, %cl
 177 0056 0F44D7   		cmove	%edi, %edx
 178              	.LVL13:
 158:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 179              		.loc 4 158 0
 180 0059 4883C601 		addq	$1, %rsi
 181              	.LVL14:
 182 005d 0FB60E   		movzbl	(%rsi), %ecx
 183 0060 84C9     		testb	%cl, %cl
 184 0062 75EC     		jne	.L8
 185              	.LVL15:
 186              	.L6:
 161:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int)
 162:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 163:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 187              		.loc 4 163 0
 188 0064 48833D00 		cmpq	$0, _ZN12Fl_File_Icon6first_E(%rip)
 188      00000000 
 189 006c 740C     		je	.L9
 190 006e 0FB683A8 		movzbl	680(%rbx), %eax
 190      020000
 191 0075 39C2     		cmpl	%eax, %edx
 192 0077 0F4CD0   		cmovl	%eax, %edx
 193              	.LVL16:
 194              	.L9:
 164:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 165:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 166:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 167:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 168:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 169:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 170:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_vis
 171:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 195              		.loc 4 171 0
 196 007a 4883C408 		addq	$8, %rsp
 197              		.cfi_remember_state
 198              		.cfi_def_cfa_offset 24
 170:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 199              		.loc 4 170 0
 200 007e 8D4202   		leal	2(%rdx), %eax
 201              	.LVL17:
 202              		.loc 4 171 0
 203 0081 5B       		popq	%rbx
 204              		.cfi_def_cfa_offset 16
 205              	.LVL18:
 206 0082 5D       		popq	%rbp
 207              		.cfi_def_cfa_offset 8
 208              	.LVL19:
 209 0083 C3       		ret
 210              	.LVL20:
 211              		.p2align 4,,10
 212 0084 0F1F4000 		.p2align 3
 213              	.L10:
 214              		.cfi_restore_state
 152:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L)
 215              		.loc 4 152 0
 216 0088 89C2     		movl	%eax, %edx
 217 008a EBD8     		jmp	.L6
 218              		.cfi_endproc
 219              	.LFE578:
 221              		.section	.text.unlikely._ZNK15Fl_File_Browser11item_heightEPv
 222              	.LCOLDE4:
 223              		.section	.text._ZNK15Fl_File_Browser11item_heightEPv
 224              	.LHOTE4:
 225              		.section	.text.unlikely._ZNK10Fl_Browser7item_atEi,"axG",@progbits,_ZNK10Fl_Browser7item_atEi,comd
 226              		.align 2
 227              	.LCOLDB5:
 228              		.section	.text._ZNK10Fl_Browser7item_atEi,"axG",@progbits,_ZNK10Fl_Browser7item_atEi,comdat
 229              	.LHOTB5:
 230              		.align 2
 231              		.p2align 4,,15
 232              		.weak	_ZNK10Fl_Browser7item_atEi
 234              	_ZNK10Fl_Browser7item_atEi:
 235              	.LFB320:
 236              		.file 6 "fltk-1.3.4-1/FL/Fl_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_Browser.H **** // "$Id: Fl_Browser.H 11453 2016-03-28 16:16:29Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_Browser.H **** // Browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_Browser.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Browser.H ****    Fl_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_Browser.H **** // Forms-compatible browser.  Probably useful for other
  23:fltk-1.3.4-1/FL/Fl_Browser.H **** // lists of textual data.  Notice that the line numbers
  24:fltk-1.3.4-1/FL/Fl_Browser.H **** // start from 1, and 0 means "no line".
  25:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  26:fltk-1.3.4-1/FL/Fl_Browser.H **** #ifndef Fl_Browser_H
  27:fltk-1.3.4-1/FL/Fl_Browser.H **** #define Fl_Browser_H
  28:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  29:fltk-1.3.4-1/FL/Fl_Browser.H **** #include "Fl_Browser_.H"
  30:fltk-1.3.4-1/FL/Fl_Browser.H **** #include "Fl_Image.H"
  31:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  32:fltk-1.3.4-1/FL/Fl_Browser.H **** struct FL_BLINE;
  33:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  34:fltk-1.3.4-1/FL/Fl_Browser.H **** /**
  35:fltk-1.3.4-1/FL/Fl_Browser.H ****   The Fl_Browser widget displays a scrolling list of text
  36:fltk-1.3.4-1/FL/Fl_Browser.H ****   lines, and manages all the storage for the text.  This is not a text
  37:fltk-1.3.4-1/FL/Fl_Browser.H ****   editor or spreadsheet!  But it is useful for showing a vertical list of
  38:fltk-1.3.4-1/FL/Fl_Browser.H ****   named objects to the user.
  39:fltk-1.3.4-1/FL/Fl_Browser.H ****   
  40:fltk-1.3.4-1/FL/Fl_Browser.H ****   Each line in the browser is identified by number. <I>The numbers
  41:fltk-1.3.4-1/FL/Fl_Browser.H ****   start at one</I> (this is so that zero can be reserved for "no line" in
  42:fltk-1.3.4-1/FL/Fl_Browser.H ****   the selective browsers). <I>Unless otherwise noted, the methods do not
  43:fltk-1.3.4-1/FL/Fl_Browser.H ****   check to see if the passed line number is in range and legal.  It must
  44:fltk-1.3.4-1/FL/Fl_Browser.H ****   always be greater than zero and &lt;= size().</I>
  45:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  46:fltk-1.3.4-1/FL/Fl_Browser.H ****   Each line contains a null-terminated string of text and a void *
  47:fltk-1.3.4-1/FL/Fl_Browser.H ****   data pointer.  The text string is displayed, the void *
  48:fltk-1.3.4-1/FL/Fl_Browser.H ****   pointer can be used by the callbacks to reference the object the text
  49:fltk-1.3.4-1/FL/Fl_Browser.H ****   describes.
  50:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  51:fltk-1.3.4-1/FL/Fl_Browser.H ****   The base class does nothing when the user clicks on it.  The
  52:fltk-1.3.4-1/FL/Fl_Browser.H ****   subclasses 
  53:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Select_Browser, 
  54:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Hold_Browser, and 
  55:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Multi_Browser react to user clicks to select lines in
  56:fltk-1.3.4-1/FL/Fl_Browser.H ****   the browser and do callbacks.
  57:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  58:fltk-1.3.4-1/FL/Fl_Browser.H ****   The base class
  59:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Browser_ provides the scrolling and selection mechanisms of
  60:fltk-1.3.4-1/FL/Fl_Browser.H ****   this and all the subclasses, but the dimensions and appearance of each
  61:fltk-1.3.4-1/FL/Fl_Browser.H ****   item are determined by the subclass. You can use Fl_Browser_
  62:fltk-1.3.4-1/FL/Fl_Browser.H ****   to display information other than text, or text that is dynamically
  63:fltk-1.3.4-1/FL/Fl_Browser.H ****   produced from your own data structures. If you find that loading the
  64:fltk-1.3.4-1/FL/Fl_Browser.H ****   browser is a lot of work or is inefficient, you may want to make a
  65:fltk-1.3.4-1/FL/Fl_Browser.H ****   subclass of Fl_Browser_.
  66:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  67:fltk-1.3.4-1/FL/Fl_Browser.H ****   Some common coding patterns used for working with Fl_Browser:
  68:fltk-1.3.4-1/FL/Fl_Browser.H ****   \code
  69:fltk-1.3.4-1/FL/Fl_Browser.H ****       // How to loop through all the items in the browser
  70:fltk-1.3.4-1/FL/Fl_Browser.H ****       for ( int t=1; t<=browser->size(); t++ ) {       // index 1 based..!
  71:fltk-1.3.4-1/FL/Fl_Browser.H **** 	  printf("item #%d, label='%s'\n", t, browser->text(t));
  72:fltk-1.3.4-1/FL/Fl_Browser.H ****       }
  73:fltk-1.3.4-1/FL/Fl_Browser.H ****   \endcode
  74:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  75:fltk-1.3.4-1/FL/Fl_Browser.H ****   Note: If you are <I>subclassing</I> Fl_Browser, it's more efficient
  76:fltk-1.3.4-1/FL/Fl_Browser.H ****   to use the protected methods item_first() and item_next(), since
  77:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Browser internally uses linked lists to manage the browser's items.
  78:fltk-1.3.4-1/FL/Fl_Browser.H ****   For more info, see find_item(int).
  79:fltk-1.3.4-1/FL/Fl_Browser.H **** */
  80:fltk-1.3.4-1/FL/Fl_Browser.H **** class FL_EXPORT Fl_Browser : public Fl_Browser_ {
  81:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  82:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *first;		// the array of lines
  83:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *last;
  84:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *cache;
  85:fltk-1.3.4-1/FL/Fl_Browser.H ****   int cacheline;		// line number of cache
  86:fltk-1.3.4-1/FL/Fl_Browser.H ****   int lines;                	// Number of lines
  87:fltk-1.3.4-1/FL/Fl_Browser.H ****   int full_height_;
  88:fltk-1.3.4-1/FL/Fl_Browser.H ****   const int* column_widths_;
  89:fltk-1.3.4-1/FL/Fl_Browser.H ****   char format_char_;		// alternative to @-sign
  90:fltk-1.3.4-1/FL/Fl_Browser.H ****   char column_char_;		// alternative to tab
  91:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  92:fltk-1.3.4-1/FL/Fl_Browser.H **** protected:
  93:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  94:fltk-1.3.4-1/FL/Fl_Browser.H ****   // required routines for Fl_Browser_ subclass:
  95:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_first() const ;
  96:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_next(void* item) const ;
  97:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_prev(void* item) const ;
  98:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_last()const ;
  99:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_selected(void* item) const ;
 100:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_select(void* item, int val);
 101:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_height(void* item) const ;
 102:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_width(void* item) const ;
 103:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_draw(void* item, int X, int Y, int W, int H) const ;
 104:fltk-1.3.4-1/FL/Fl_Browser.H ****   int full_height() const ;
 105:fltk-1.3.4-1/FL/Fl_Browser.H ****   int incr_height() const ;
 106:fltk-1.3.4-1/FL/Fl_Browser.H ****   const char *item_text(void *item) const;
 107:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Swap the items \p a and \p b.
 108:fltk-1.3.4-1/FL/Fl_Browser.H ****       You must call redraw() to make any changes visible.
 109:fltk-1.3.4-1/FL/Fl_Browser.H ****       \param[in] a,b the items to be swapped.
 110:fltk-1.3.4-1/FL/Fl_Browser.H ****       \see swap(int,int), item_swap()
 111:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 112:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_swap(void *a, void *b) { swap((FL_BLINE*)a, (FL_BLINE*)b); }
 113:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Return the item at specified \p line.
 114:fltk-1.3.4-1/FL/Fl_Browser.H ****       \param[in] line The line of the item to return. (1 based)
 115:fltk-1.3.4-1/FL/Fl_Browser.H ****       \returns The item, or NULL if line out of range.
 116:fltk-1.3.4-1/FL/Fl_Browser.H ****       \see item_at(), find_line(), lineno()
 117:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 118:fltk-1.3.4-1/FL/Fl_Browser.H ****   void *item_at(int line) const { return (void*)find_line(line); }
 237              		.loc 6 118 0
 238              		.cfi_startproc
 239              	.LVL21:
 240              		.loc 6 118 0
 241 0000 E9000000 		jmp	_ZNK10Fl_Browser9find_lineEi
 241      00
 242              	.LVL22:
 243              		.cfi_endproc
 244              	.LFE320:
 246              		.section	.text.unlikely._ZNK10Fl_Browser7item_atEi,"axG",@progbits,_ZNK10Fl_Browser7item_atEi,comd
 247              	.LCOLDE5:
 248              		.section	.text._ZNK10Fl_Browser7item_atEi,"axG",@progbits,_ZNK10Fl_Browser7item_atEi,comdat
 249              	.LHOTE5:
 250              		.section	.text.unlikely._ZNK15Fl_File_Browser11full_heightEv,"ax",@progbits
 251              		.align 2
 252              	.LCOLDB6:
 253              		.section	.text._ZNK15Fl_File_Browser11full_heightEv,"ax",@progbits
 254              	.LHOTB6:
 255              		.align 2
 256              		.p2align 4,,15
 257              		.globl	_ZNK15Fl_File_Browser11full_heightEv
 259              	_ZNK15Fl_File_Browser11full_heightEv:
 260              	.LFB577:
 122:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 261              		.loc 4 122 0
 262              		.cfi_startproc
 263              	.LVL23:
 264 0000 4155     		pushq	%r13
 265              		.cfi_def_cfa_offset 16
 266              		.cfi_offset 13, -16
 267 0002 4154     		pushq	%r12
 268              		.cfi_def_cfa_offset 24
 269              		.cfi_offset 12, -24
 270 0004 55       		pushq	%rbp
 271              		.cfi_def_cfa_offset 32
 272              		.cfi_offset 6, -32
 273 0005 53       		pushq	%rbx
 274              		.cfi_def_cfa_offset 40
 275              		.cfi_offset 3, -40
 276 0006 4883EC08 		subq	$8, %rsp
 277              		.cfi_def_cfa_offset 48
 127:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 278              		.loc 4 127 0
 279 000a 8B878402 		movl	644(%rdi), %eax
 279      0000
 280 0010 85C0     		testl	%eax, %eax
 281 0012 7E42     		jle	.L19
 282 0014 4889FB   		movq	%rdi, %rbx
 283 0017 4531E4   		xorl	%r12d, %r12d
 284 001a 31ED     		xorl	%ebp, %ebp
 285              	.LVL24:
 286 001c 0F1F4000 		.p2align 4,,10
 287              		.p2align 3
 288              	.L18:
 128:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 289              		.loc 4 128 0 discriminator 2
 290 0020 488B03   		movq	(%rbx), %rax
 291 0023 89EE     		movl	%ebp, %esi
 292 0025 4889DF   		movq	%rbx, %rdi
 127:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 293              		.loc 4 127 0 discriminator 2
 294 0028 83C501   		addl	$1, %ebp
 295              	.LVL25:
 128:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 296              		.loc 4 128 0 discriminator 2
 297 002b 4C8B6870 		movq	112(%rax), %r13
 298 002f E8000000 		call	_ZNK10Fl_Browser9find_lineEi
 298      00
 299              	.LVL26:
 300 0034 4889DF   		movq	%rbx, %rdi
 301 0037 4889C6   		movq	%rax, %rsi
 302 003a 41FFD5   		call	*%r13
 303              	.LVL27:
 304 003d 4101C4   		addl	%eax, %r12d
 305              	.LVL28:
 127:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 306              		.loc 4 127 0 discriminator 2
 307 0040 3BAB8402 		cmpl	644(%rbx), %ebp
 307      0000
 308 0046 7CD8     		jl	.L18
 309              	.LVL29:
 310              	.L17:
 131:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 311              		.loc 4 131 0
 312 0048 4883C408 		addq	$8, %rsp
 313              		.cfi_remember_state
 314              		.cfi_def_cfa_offset 40
 315 004c 4489E0   		movl	%r12d, %eax
 316 004f 5B       		popq	%rbx
 317              		.cfi_def_cfa_offset 32
 318 0050 5D       		popq	%rbp
 319              		.cfi_def_cfa_offset 24
 320 0051 415C     		popq	%r12
 321              		.cfi_def_cfa_offset 16
 322 0053 415D     		popq	%r13
 323              		.cfi_def_cfa_offset 8
 324 0055 C3       		ret
 325              	.LVL30:
 326              	.L19:
 327              		.cfi_restore_state
 127:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 328              		.loc 4 127 0
 329 0056 4531E4   		xorl	%r12d, %r12d
 330 0059 EBED     		jmp	.L17
 331              		.cfi_endproc
 332              	.LFE577:
 334              		.section	.text.unlikely._ZNK15Fl_File_Browser11full_heightEv
 335              	.LCOLDE6:
 336              		.section	.text._ZNK15Fl_File_Browser11full_heightEv
 337              	.LHOTE6:
 338              		.section	.text.unlikely._ZNK15Fl_File_Browser10item_widthEPv,"ax",@progbits
 339              		.align 2
 340              	.LCOLDB9:
 341              		.section	.text._ZNK15Fl_File_Browser10item_widthEPv,"ax",@progbits
 342              	.LHOTB9:
 343              		.align 2
 344              		.p2align 4,,15
 345              		.globl	_ZNK15Fl_File_Browser10item_widthEPv
 347              	_ZNK15Fl_File_Browser10item_widthEPv:
 348              	.LFB579:
 172:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 173:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't recei
 174:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not draw
 175:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 176:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoratio
 177:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window m
 178:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering too
 179:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a s
 180:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value chang
 349              		.loc 4 180 0
 350              		.cfi_startproc
 351              	.LVL31:
 352 0000 4157     		pushq	%r15
 353              		.cfi_def_cfa_offset 16
 354              		.cfi_offset 15, -16
 355 0002 4156     		pushq	%r14
 356              		.cfi_def_cfa_offset 24
 357              		.cfi_offset 14, -24
 358 0004 4989FE   		movq	%rdi, %r14
 359 0007 4155     		pushq	%r13
 360              		.cfi_def_cfa_offset 32
 361              		.cfi_offset 13, -32
 362 0009 4154     		pushq	%r12
 363              		.cfi_def_cfa_offset 40
 364              		.cfi_offset 12, -40
 365 000b 55       		pushq	%rbp
 366              		.cfi_def_cfa_offset 48
 367              		.cfi_offset 6, -48
 181:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 182:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus
 183:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is in
 184:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within thi
 185:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup wind
 186:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, tra
 187:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking inpu
 188:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a har
 189:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget r
 190:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is 
 191:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (F
 192:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS plat
 193:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 194:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party
 195:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party
 196:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party
 197:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 368              		.loc 4 197 0
 369 000c 488D6E23 		leaq	35(%rsi), %rbp
 180:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 370              		.loc 4 180 0
 371 0010 53       		pushq	%rbx
 372              		.cfi_def_cfa_offset 56
 373              		.cfi_offset 3, -56
 374 0011 4889F3   		movq	%rsi, %rbx
 375 0014 4881EC28 		subq	$10280, %rsp
 375      280000
 376              		.cfi_def_cfa_offset 10336
 377 001b 4C8BA790 		movq	656(%rdi), %r12
 377      020000
 378              		.loc 4 197 0
 379 0022 4889EF   		movq	%rbp, %rdi
 380              	.LVL32:
 180:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top
 381              		.loc 4 180 0
 382 0025 64488B04 		movq	%fs:40, %rax
 382      25280000 
 382      00
 383 002e 48898424 		movq	%rax, 10264(%rsp)
 383      18280000 
 384 0036 31C0     		xorl	%eax, %eax
 385              	.LVL33:
 386              		.loc 4 197 0
 387 0038 E8000000 		call	strlen
 387      00
 388              	.LVL34:
 389 003d 807C0322 		cmpb	$47, 34(%rbx,%rax)
 389      2F
 390              	.LBB131:
 391              	.LBB132:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 392              		.loc 5 509 0
 393 0042 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 393      000000
 394 0049 418B96C0 		movl	192(%r14), %edx
 394      000000
 395 0050 418BB6BC 		movl	188(%r14), %esi
 395      000000
 396              	.LBE132:
 397              	.LBE131:
 398              		.loc 4 197 0
 399 0057 0F844301 		je	.L45
 399      0000
 400              	.LVL35:
 401              	.LBB134:
 402              	.LBB135:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 403              		.loc 5 509 0
 404 005d 488B07   		movq	(%rdi), %rax
 405 0060 FF90B001 		call	*432(%rax)
 405      0000
 406              	.LVL36:
 407              	.L24:
 408              	.LBE135:
 409              	.LBE134:
 410              	.LBB136:
 411              	.LBB137:
 412              		.file 7 "/usr/include/string.h"
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
 413              		.loc 7 220 0
 414 0066 BE0A0000 		movl	$10, %esi
 414      00
 415 006b 4889EF   		movq	%rbp, %rdi
 416 006e E8000000 		call	strchr
 416      00
 417              	.LVL37:
 418              	.LBE137:
 419              	.LBE136:
 198:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 199:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 200:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Col
 201:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 202:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 420              		.loc 4 202 0
 421 0073 4885C0   		testq	%rax, %rax
 422 0076 0F843501 		je	.L46
 422      0000
 423              	.L25:
 424              	.LVL38:
 203:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 204:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) cons
 205:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 206:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 207:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 209:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 211:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almos
 212:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy al
 213:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 214:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 215:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the wi
 425              		.loc 4 215 0 discriminator 1
 426 007c 0FB65323 		movzbl	35(%rbx), %edx
 427 0080 84D2     		testb	%dl, %dl
 428 0082 0F84A001 		je	.L37
 428      0000
 429              		.loc 4 215 0 is_stmt 0
 430 0088 4C8D7C24 		leaq	16(%rsp), %r15
 430      10
 431              	.LVL39:
 432 008d 31C0     		xorl	%eax, %eax
 433 008f 31DB     		xorl	%ebx, %ebx
 434              	.LVL40:
 435 0091 4531ED   		xorl	%r13d, %r13d
 436 0094 4C89F9   		movq	%r15, %rcx
 437 0097 EB19     		jmp	.L34
 438              	.LVL41:
 439 0099 0F1F8000 		.p2align 4,,10
 439      000000
 440              		.p2align 3
 441              	.L30:
 216:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 217:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 218:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 219:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 220:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 221:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule r
 222:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 223:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 224:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 225:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 226:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 227:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <
 228:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, 
 229:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 230:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 231:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 232:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_
 233:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 234:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 235:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 236:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 237:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 238:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 239:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 240:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 241:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 242:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return
 243:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 244:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 245:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle
 246:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit 
 247:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the c
 248:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 249:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 250:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 442              		.loc 4 250 0 is_stmt 1
 443 00a0 8811     		movb	%dl, (%rcx)
 444 00a2 4883C101 		addq	$1, %rcx
 445              	.LVL42:
 446              	.L29:
 215:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 447              		.loc 4 215 0 discriminator 2
 448 00a6 4883C501 		addq	$1, %rbp
 449              	.LVL43:
 450 00aa 0FB65500 		movzbl	0(%rbp), %edx
 451 00ae 84D2     		testb	%dl, %dl
 452 00b0 7458     		je	.L47
 453              	.LVL44:
 454              	.L34:
 216:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 455              		.loc 4 216 0
 456 00b2 80FA0A   		cmpb	$10, %dl
 457 00b5 0F849D00 		je	.L48
 457      0000
 458              	.LVL45:
 232:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 459              		.loc 4 232 0
 460 00bb 41389699 		cmpb	%dl, 665(%r14)
 460      020000
 461 00c2 75DC     		jne	.L30
 236:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 462              		.loc 4 236 0
 463 00c4 4D85E4   		testq	%r12, %r12
 235:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 464              		.loc 4 235 0
 465 00c7 448D4001 		leal	1(%rax), %r8d
 466              	.LVL46:
 236:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 467              		.loc 4 236 0
 468 00cb 0F840B01 		je	.L31
 468      0000
 469 00d1 498D7484 		leaq	4(%r12,%rax,4), %rsi
 469      04
 470 00d6 4C89E2   		movq	%r12, %rdx
 471 00d9 31DB     		xorl	%ebx, %ebx
 472              	.LVL47:
 473 00db 0F1F4400 		.p2align 4,,10
 473      00
 474              		.p2align 3
 475              	.L33:
 238:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 476              		.loc 4 238 0 discriminator 2
 477 00e0 8B0A     		movl	(%rdx), %ecx
 478 00e2 85C9     		testl	%ecx, %ecx
 479 00e4 740B     		je	.L32
 480 00e6 4883C204 		addq	$4, %rdx
 239:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 481              		.loc 4 239 0 discriminator 3
 482 00ea 01CB     		addl	%ecx, %ebx
 483              	.LVL48:
 238:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but inste
 484              		.loc 4 238 0 discriminator 3
 485 00ec 4839F2   		cmpq	%rsi, %rdx
 486 00ef 75EF     		jne	.L33
 487              	.L32:
 488 00f1 4139DD   		cmpl	%ebx, %r13d
 235:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 489              		.loc 4 235 0
 490 00f4 4963C0   		movslq	%r8d, %rax
 247:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 491              		.loc 4 247 0
 492 00f7 4C89F9   		movq	%r15, %rcx
 493 00fa 440F4CEB 		cmovl	%ebx, %r13d
 494              	.LVL49:
 495              	.L51:
 215:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 496              		.loc 4 215 0
 497 00fe 4883C501 		addq	$1, %rbp
 498              	.LVL50:
 499 0102 0FB65500 		movzbl	0(%rbp), %edx
 500 0106 84D2     		testb	%dl, %dl
 501 0108 75A8     		jne	.L34
 502              	.LVL51:
 503              	.L47:
 251:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 252:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 504              		.loc 4 252 0
 505 010a 4C39F9   		cmpq	%r15, %rcx
 506 010d 7771     		ja	.L49
 507              	.LVL52:
 508              	.L27:
 253:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 255:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 257:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 258:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 259:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 260:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 261:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 262:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 263:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL
 265:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 509              		.loc 4 266 0
 510 010f 48833D00 		cmpq	$0, _ZN12Fl_File_Icon6first_E(%rip)
 510      00000000 
 511 0117 740D     		je	.L35
 267:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 512              		.loc 4 267 0
 513 0119 410FB686 		movzbl	680(%r14), %eax
 513      A8020000 
 514 0121 458D6C05 		leal	8(%r13,%rax), %r13d
 514      08
 515              	.LVL53:
 516              	.L35:
 268:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 269:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 270:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 271:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 272:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 273:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 274:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 517              		.loc 4 274 0
 518 0126 488BBC24 		movq	10264(%rsp), %rdi
 518      18280000 
 519 012e 6448333C 		xorq	%fs:40, %rdi
 519      25280000 
 519      00
 273:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 520              		.loc 4 273 0
 521 0137 418D4502 		leal	2(%r13), %eax
 522              	.LVL54:
 523              		.loc 4 274 0
 524 013b 0F85EF00 		jne	.L50
 524      0000
 525 0141 4881C428 		addq	$10280, %rsp
 525      280000
 526              		.cfi_remember_state
 527              		.cfi_def_cfa_offset 56
 528 0148 5B       		popq	%rbx
 529              		.cfi_def_cfa_offset 48
 530 0149 5D       		popq	%rbp
 531              		.cfi_def_cfa_offset 40
 532 014a 415C     		popq	%r12
 533              		.cfi_def_cfa_offset 32
 534 014c 415D     		popq	%r13
 535              		.cfi_def_cfa_offset 24
 536 014e 415E     		popq	%r14
 537              		.cfi_def_cfa_offset 16
 538              	.LVL55:
 539 0150 415F     		popq	%r15
 540              		.cfi_def_cfa_offset 8
 541 0152 C3       		ret
 542              	.LVL56:
 543              		.p2align 4,,10
 544 0153 0F1F4400 		.p2align 3
 544      00
 545              	.L48:
 546              		.cfi_restore_state
 219:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 547              		.loc 4 219 0
 548 0158 C60100   		movb	$0, (%rcx)
 221:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 549              		.loc 4 221 0
 550 015b 4C89FF   		movq	%r15, %rdi
 551 015e E8000000 		call	_Z8fl_widthPKc
 551      00
 552              	.LVL57:
 553 0163 F20F2CC0 		cvttsd2si	%xmm0, %eax
 228:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 554              		.loc 4 228 0
 555 0167 4C89F9   		movq	%r15, %rcx
 221:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possi
 556              		.loc 4 221 0
 557 016a 01C3     		addl	%eax, %ebx
 558              	.LVL58:
 559 016c 4139DD   		cmpl	%ebx, %r13d
 560 016f 440F4CEB 		cmovl	%ebx, %r13d
 561              	.LVL59:
 230:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 562              		.loc 4 230 0
 563 0173 31C0     		xorl	%eax, %eax
 229:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 564              		.loc 4 229 0
 565 0175 31DB     		xorl	%ebx, %ebx
 566              	.LVL60:
 567 0177 E92AFFFF 		jmp	.L29
 567      FF
 568              	.LVL61:
 569 017c 0F1F4000 		.p2align 4,,10
 570              		.p2align 3
 571              	.L49:
 255:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with cop
 572              		.loc 4 255 0
 573 0180 C60100   		movb	$0, (%rcx)
 257:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widg
 574              		.loc 4 257 0
 575 0183 4C89FF   		movq	%r15, %rdi
 576 0186 E8000000 		call	_Z8fl_widthPKc
 576      00
 577              	.LVL62:
 578 018b F20F2CC0 		cvttsd2si	%xmm0, %eax
 579 018f 01C3     		addl	%eax, %ebx
 580              	.LVL63:
 581 0191 4139DD   		cmpl	%ebx, %r13d
 582 0194 440F4CEB 		cmovl	%ebx, %r13d
 583              	.LVL64:
 584 0198 E972FFFF 		jmp	.L27
 584      FF
 585              	.LVL65:
 586 019d 0F1F00   		.p2align 4,,10
 587              		.p2align 3
 588              	.L45:
 589              	.LBB138:
 590              	.LBB133:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 591              		.loc 5 509 0
 592 01a0 488B07   		movq	(%rdi), %rax
 593 01a3 83CE01   		orl	$1, %esi
 594 01a6 FF90B001 		call	*432(%rax)
 594      0000
 595              	.LVL66:
 596 01ac E9B5FEFF 		jmp	.L24
 596      FF
 597              	.LVL67:
 598              	.L46:
 599              	.LBE133:
 600              	.LBE138:
 601              	.LBB139:
 602              	.LBB140:
 603              		.loc 7 220 0 discriminator 1
 604 01b1 410FBEB6 		movsbl	665(%r14), %esi
 604      99020000 
 605              	.LVL68:
 606 01b9 4889EF   		movq	%rbp, %rdi
 607 01bc E8000000 		call	strchr
 607      00
 608              	.LVL69:
 609              	.LBE140:
 610              	.LBE139:
 202:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 611              		.loc 4 202 0 discriminator 1
 612 01c1 4885C0   		testq	%rax, %rax
 613 01c4 0F85B2FE 		jne	.L25
 613      FFFF
 206:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 614              		.loc 4 206 0
 615 01ca 4889EF   		movq	%rbp, %rdi
 616 01cd E8000000 		call	_Z8fl_widthPKc
 616      00
 617              	.LVL70:
 618 01d2 F2440F2C 		cvttsd2si	%xmm0, %r13d
 618      E8
 619              	.LVL71:
 620 01d7 E933FFFF 		jmp	.L27
 620      FF
 621              	.LVL72:
 622              	.L31:
 623              	.LBB141:
 624              	.LBB142:
 625              		.loc 5 527 0
 626 01dc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 626      000000
 627 01e3 44894424 		movl	%r8d, 12(%rsp)
 627      0C
 628 01e8 488B07   		movq	(%rdi), %rax
 629 01eb FF90D001 		call	*464(%rax)
 629      0000
 630              	.LVL73:
 631              	.LBE142:
 632              	.LBE141:
 242:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 633              		.loc 4 242 0
 634 01f1 660FEFC0 		pxor	%xmm0, %xmm0
 635 01f5 448B4424 		movl	12(%rsp), %r8d
 635      0C
 247:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 636              		.loc 4 247 0
 637 01fa 4C89F9   		movq	%r15, %rcx
 242:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 638              		.loc 4 242 0
 639 01fd F20F2AC0 		cvtsi2sd	%eax, %xmm0
 235:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 640              		.loc 4 235 0
 641 0201 4963C0   		movslq	%r8d, %rax
 242:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 642              		.loc 4 242 0
 643 0204 F20F5905 		mulsd	.LC7(%rip), %xmm0
 643      00000000 
 644 020c F20F5905 		mulsd	.LC8(%rip), %xmm0
 644      00000000 
 645 0214 F20F2CD8 		cvttsd2si	%xmm0, %ebx
 646              	.LVL74:
 647 0218 410FAFD8 		imull	%r8d, %ebx
 648              	.LVL75:
 649 021c 4139DD   		cmpl	%ebx, %r13d
 650 021f 440F4CEB 		cmovl	%ebx, %r13d
 651              	.LVL76:
 652 0223 E9D6FEFF 		jmp	.L51
 652      FF
 653              	.LVL77:
 654              	.L37:
 215:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 655              		.loc 4 215 0
 656 0228 4531ED   		xorl	%r13d, %r13d
 657 022b E9DFFEFF 		jmp	.L27
 657      FF
 658              	.LVL78:
 659              	.L50:
 660              		.loc 4 274 0
 661 0230 E8000000 		call	__stack_chk_fail
 661      00
 662              	.LVL79:
 663              		.cfi_endproc
 664              	.LFE579:
 666              		.section	.text.unlikely._ZNK15Fl_File_Browser10item_widthEPv
 667              	.LCOLDE9:
 668              		.section	.text._ZNK15Fl_File_Browser10item_widthEPv
 669              	.LHOTE9:
 670              		.section	.text.unlikely._ZNK15Fl_File_Browser9item_drawEPviiii,"ax",@progbits
 671              		.align 2
 672              	.LCOLDB10:
 673              		.section	.text._ZNK15Fl_File_Browser9item_drawEPviiii,"ax",@progbits
 674              	.LHOTB10:
 675              		.align 2
 676              		.p2align 4,,15
 677              		.globl	_ZNK15Fl_File_Browser9item_drawEPviiii
 679              	_ZNK15Fl_File_Browser9item_drawEPviiii:
 680              	.LFB580:
 275:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this metho
 276:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and remo
 277:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_G
 278:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 279:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(F
 280:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 281:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, 
 282:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 283:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 284:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms 
 285:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 286:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 287:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to d
 681              		.loc 4 287 0
 682              		.cfi_startproc
 683              	.LVL80:
 684 0000 4157     		pushq	%r15
 685              		.cfi_def_cfa_offset 16
 686              		.cfi_offset 15, -16
 687 0002 4156     		pushq	%r14
 688              		.cfi_def_cfa_offset 24
 689              		.cfi_offset 14, -24
 690 0004 4189D7   		movl	%edx, %r15d
 691 0007 4155     		pushq	%r13
 692              		.cfi_def_cfa_offset 32
 693              		.cfi_offset 13, -32
 694 0009 4154     		pushq	%r12
 695              		.cfi_def_cfa_offset 40
 696              		.cfi_offset 12, -40
 697 000b 4989FC   		movq	%rdi, %r12
 698 000e 55       		pushq	%rbp
 699              		.cfi_def_cfa_offset 48
 700              		.cfi_offset 6, -48
 288:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 289:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 290:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 291:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 292:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 293:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 294:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 295:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 296:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 297:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 298:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 299:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 300:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 301:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 302:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 701              		.loc 4 303 0
 702 000f 488D6E23 		leaq	35(%rsi), %rbp
 287:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 703              		.loc 4 287 0
 704 0013 53       		pushq	%rbx
 705              		.cfi_def_cfa_offset 56
 706              		.cfi_offset 3, -56
 707 0014 4889F3   		movq	%rsi, %rbx
 708 0017 4589C5   		movl	%r8d, %r13d
 709 001a 4881EC38 		subq	$10296, %rsp
 709      280000
 710              		.cfi_def_cfa_offset 10352
 711              		.loc 4 303 0
 712 0021 4889EF   		movq	%rbp, %rdi
 713              	.LVL81:
 287:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() reall
 714              		.loc 4 287 0
 715 0024 64488B04 		movq	%fs:40, %rax
 715      25280000 
 715      00
 716 002d 48898424 		movq	%rax, 10280(%rsp)
 716      28280000 
 717 0035 31C0     		xorl	%eax, %eax
 718              	.LVL82:
 719 0037 894C2408 		movl	%ecx, 8(%rsp)
 720              		.loc 4 303 0
 721 003b E8000000 		call	strlen
 721      00
 722              	.LVL83:
 723 0040 807C0322 		cmpb	$47, 34(%rbx,%rax)
 723      2F
 724              	.LBB143:
 725              	.LBB144:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 726              		.loc 5 509 0
 727 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 727      000000
 728 004c 418B9424 		movl	192(%r12), %edx
 728      C0000000 
 729 0054 418BB424 		movl	188(%r12), %esi
 729      BC000000 
 730              	.LBE144:
 731              	.LBE143:
 732              		.loc 4 303 0
 733 005c 0F844604 		je	.L95
 733      0000
 734              	.LVL84:
 735              	.LBB146:
 736              	.LBB147:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 737              		.loc 5 509 0
 738 0062 488B07   		movq	(%rdi), %rax
 739 0065 FF90B001 		call	*432(%rax)
 739      0000
 740              	.LVL85:
 741              	.L54:
 742              	.LBE147:
 743              	.LBE146:
 304:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 305:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 306:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 307:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 308:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 744              		.loc 4 308 0
 745 006b F6432201 		testb	$1, 34(%rbx)
 746 006f 0F85F303 		jne	.L96
 746      0000
 309:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 310:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 311:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 312:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 747              		.loc 4 313 0
 748 0075 48833D00 		cmpq	$0, _ZN12Fl_File_Icon6first_E(%rip)
 748      00000000 
 749 007d 418B8424 		movl	196(%r12), %eax
 749      C4000000 
 750 0085 89442414 		movl	%eax, 20(%rsp)
 751              	.LVL86:
 752 0089 0F84FD03 		je	.L97
 752      0000
 753              	.LVL87:
 754              	.L57:
 314:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 315:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 316:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 317:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 318:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 319:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 320:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may imple
 321:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e n
 322:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the par
 755              		.loc 4 322 0
 756 008f 48837B10 		cmpq	$0, 16(%rbx)
 756      00
 757 0094 743E     		je	.L60
 323:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 758              		.loc 4 323 0
 759 0096 4C89E7   		movq	%r12, %rdi
 760 0099 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 760      00
 761              	.LVL88:
 762 009e 0FB65322 		movzbl	34(%rbx), %edx
 763 00a2 410FB68C 		movzbl	680(%r12), %ecx
 763      24A80200 
 763      00
 324:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 325:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 326:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more
 764              		.loc 4 326 0
 765 00ab 4489FE   		movl	%r15d, %esi
 766 00ae 488B7B10 		movq	16(%rbx), %rdi
 323:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 767              		.loc 4 323 0
 768 00b2 83E201   		andl	$1, %edx
 769              		.loc 4 326 0
 770 00b5 4189C8   		movl	%ecx, %r8d
 323:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 771              		.loc 4 323 0
 772 00b8 80FA01   		cmpb	$1, %dl
 773 00bb 19D2     		sbbl	%edx, %edx
 774              		.loc 4 326 0
 775 00bd 4883EC08 		subq	$8, %rsp
 776              		.cfi_def_cfa_offset 10360
 323:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to up
 777              		.loc 4 323 0
 778 00c1 83E2D5   		andl	$-43, %edx
 779              		.loc 4 326 0
 780 00c4 50       		pushq	%rax
 781              		.cfi_def_cfa_offset 10368
 782 00c5 448D4A5F 		leal	95(%rdx), %r9d
 783 00c9 8B542418 		movl	24(%rsp), %edx
 784 00cd E8000000 		call	_ZN12Fl_File_Icon4drawEiiiiji
 784      00
 785              	.LVL89:
 786 00d2 58       		popq	%rax
 787              		.cfi_def_cfa_offset 10360
 788 00d3 5A       		popq	%rdx
 789              		.cfi_def_cfa_offset 10352
 790              	.L60:
 327:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of
 328:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculat
 329:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 791              		.loc 4 329 0
 792 00d4 410FB684 		movzbl	680(%r12), %eax
 792      24A80200 
 792      00
 793              	.LBB148:
 794              	.LBB149:
 795              		.loc 5 527 0
 796 00dd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 796      000000
 797              	.LBE149:
 798              	.LBE148:
 799              		.loc 4 329 0
 800 00e4 428D7438 		leal	9(%rax,%r15), %esi
 800      09
 330:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 801              		.loc 4 330 0
 802 00e9 83E80A   		subl	$10, %eax
 803 00ec 4129C5   		subl	%eax, %r13d
 804              	.LVL90:
 805              	.LBB152:
 806              	.LBB150:
 807              		.loc 5 527 0
 808 00ef 488B07   		movq	(%rdi), %rax
 809              	.LBE150:
 810              	.LBE152:
 329:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 811              		.loc 4 329 0
 812 00f2 8974240C 		movl	%esi, 12(%rsp)
 813              	.LVL91:
 814              		.loc 4 330 0
 815 00f6 44896C24 		movl	%r13d, 16(%rsp)
 815      10
 816              	.LVL92:
 817              	.LBB153:
 818              	.LBB151:
 819              		.loc 5 527 0
 820 00fb FF90D001 		call	*464(%rax)
 820      0000
 821              	.LVL93:
 822 0101 4189C6   		movl	%eax, %r14d
 823              	.LVL94:
 824              	.LBE151:
 825              	.LBE153:
 331:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H)
 332:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 333:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent win
 334:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 335:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 826              		.loc 4 335 0
 827 0104 0FB64323 		movzbl	35(%rbx), %eax
 828              	.LVL95:
 829 0108 84C0     		testb	%al, %al
 830 010a 7444     		je	.L62
 831 010c 4989ED   		movq	%rbp, %r13
 832              	.LVL96:
 833 010f EB14     		jmp	.L64
 834              	.LVL97:
 835              		.p2align 4,,10
 836 0111 0F1F8000 		.p2align 3
 836      000000
 837              	.L63:
 838              		.loc 4 335 0 is_stmt 0 discriminator 2
 839 0118 4983C501 		addq	$1, %r13
 840              	.LVL98:
 841 011c 410FB645 		movzbl	0(%r13), %eax
 841      00
 842 0121 84C0     		testb	%al, %al
 843 0123 742B     		je	.L62
 844              	.L64:
 336:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 845              		.loc 4 336 0 is_stmt 1
 846 0125 3C0A     		cmpb	$10, %al
 847 0127 75EF     		jne	.L63
 848              	.LBB154:
 849              	.LBB155:
 850              		.loc 5 527 0
 851 0129 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 851      000000
 852              	.LBE155:
 853              	.LBE154:
 335:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 854              		.loc 4 335 0
 855 0130 4983C501 		addq	$1, %r13
 856              	.LVL99:
 857              	.LBB157:
 858              	.LBB156:
 859              		.loc 5 527 0
 860 0134 488B07   		movq	(%rdi), %rax
 861 0137 FF90D001 		call	*464(%rax)
 861      0000
 862              	.LVL100:
 863              	.LBE156:
 864              	.LBE157:
 337:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 865              		.loc 4 337 0
 866 013d 4101C6   		addl	%eax, %r14d
 867              	.LVL101:
 335:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 868              		.loc 4 335 0
 869 0140 410FB645 		movzbl	0(%r13), %eax
 869      00
 870 0145 84C0     		testb	%al, %al
 871 0147 75DC     		jne	.L64
 872              	.LVL102:
 873 0149 0F1F8000 		.p2align 4,,10
 873      000000
 874              		.p2align 3
 875              	.L62:
 338:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 339:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 876              		.loc 4 339 0
 877 0150 410FB684 		movzbl	680(%r12), %eax
 877      24A80200 
 877      00
 878 0159 4439F0   		cmpl	%r14d, %eax
 879 015c 0F8F2E02 		jg	.L98
 879      0000
 880              	.LVL103:
 881              	.L58:
 340:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 341:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 342:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 343:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h())
 345:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 346:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent win
 347:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 348:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 349:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 882              		.loc 4 349 0
 883 0162 4C89E7   		movq	%r12, %rdi
 884 0165 4D8BB424 		movq	656(%r12), %r14
 884      90020000 
 885              	.LVL104:
 886 016d E8000000 		call	_ZNK9Fl_Widget8active_rEv
 886      00
 887              	.LVL105:
 888 0172 85C0     		testl	%eax, %eax
 889 0174 0F84EE01 		je	.L65
 889      0000
 890              	.LVL106:
 891              	.LBB158:
 892              	.LBB159:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 893              		.loc 5 52 0
 894 017a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 894      000000
 895 0181 8B742414 		movl	20(%rsp), %esi
 896 0185 488B07   		movq	(%rdi), %rax
 897 0188 FF908800 		call	*136(%rax)
 897      0000
 898              	.LVL107:
 899              	.L66:
 900              	.LBE159:
 901              	.LBE158:
 902              	.LBB160:
 350:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 351:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 352:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 353:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 354:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 903              		.loc 4 354 0 discriminator 1
 904 018e 0FB64323 		movzbl	35(%rbx), %eax
 905 0192 84C0     		testb	%al, %al
 906 0194 0F842401 		je	.L52
 906      0000
 907              		.loc 4 354 0 is_stmt 0
 908 019a 4C8D6C24 		leaq	32(%rsp), %r13
 908      20
 909              	.LVL108:
 910 019f 31DB     		xorl	%ebx, %ebx
 911              	.LVL109:
 912 01a1 4531FF   		xorl	%r15d, %r15d
 913 01a4 4C89EA   		movq	%r13, %rdx
 914 01a7 EB1D     		jmp	.L79
 915              	.LVL110:
 916 01a9 0F1F8000 		.p2align 4,,10
 916      000000
 917              		.p2align 3
 918              	.L71:
 919              	.LBB161:
 920              	.LBB162:
 355:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 356:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 357:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 358:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 359:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 361:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 362:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 363:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 364:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 365:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 366:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 367:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 368:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 369:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the
 370:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 371:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 372:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 373:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 374:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 375:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 376:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 377:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 378:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 379:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 380:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 381:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 382:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 383:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 384:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default dep
 385:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 386:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 387:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 388:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 389:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 390:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 391:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 392:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 393:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 394:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 395:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 921              		.loc 4 395 0 is_stmt 1
 922 01b0 8802     		movb	%al, (%rdx)
 923 01b2 4883C201 		addq	$1, %rdx
 924              	.LVL111:
 925              	.L70:
 926              	.LBE162:
 927              	.LBE161:
 354:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 928              		.loc 4 354 0 discriminator 2
 929 01b6 4883C501 		addq	$1, %rbp
 930              	.LVL112:
 931 01ba 0FB64500 		movzbl	0(%rbp), %eax
 932 01be 84C0     		testb	%al, %al
 933 01c0 0F84EF00 		je	.L99
 933      0000
 934              	.LVL113:
 935              	.L79:
 936              	.LBB189:
 355:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 937              		.loc 4 355 0
 938 01c6 3C0A     		cmpb	$10, %al
 939 01c8 0F842201 		je	.L100
 939      0000
 940              	.LVL114:
 941              	.LBB178:
 367:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or ins
 942              		.loc 4 367 0
 943 01ce 41388424 		cmpb	%al, 665(%r12)
 943      99020000 
 944 01d6 75D8     		jne	.L71
 945              	.LBB163:
 369:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 946              		.loc 4 369 0
 947 01d8 C60200   		movb	$0, (%rdx)
 371:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 948              		.loc 4 371 0
 949 01db 8B542410 		movl	16(%rsp), %edx
 950              	.LVL115:
 951 01df 4429FA   		subl	%r15d, %edx
 952              	.LVL116:
 373:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 953              		.loc 4 373 0
 954 01e2 4D85F6   		testq	%r14, %r14
 955 01e5 0F84FD01 		je	.L72
 955      0000
 956              	.LVL117:
 375:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 957              		.loc 4 375 0 discriminator 4
 958 01eb 85DB     		testl	%ebx, %ebx
 959 01ed 0F84C602 		je	.L83
 959      0000
 375:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 960              		.loc 4 375 0 is_stmt 0
 961 01f3 458B1E   		movl	(%r14), %r11d
 962 01f6 31C0     		xorl	%eax, %eax
 963 01f8 498D4E04 		leaq	4(%r14), %rcx
 964 01fc 4585DB   		testl	%r11d, %r11d
 965 01ff 7520     		jne	.L76
 966 0201 E9520100 		jmp	.L85
 966      00
 967              	.LVL118:
 968 0206 662E0F1F 		.p2align 4,,10
 968      84000000 
 968      0000
 969              		.p2align 3
 970              	.L77:
 971 0210 4883C104 		addq	$4, %rcx
 375:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 972              		.loc 4 375 0 discriminator 2
 973 0214 448B51FC 		movl	-4(%rcx), %r10d
 974 0218 4585D2   		testl	%r10d, %r10d
 975 021b 0F843701 		je	.L85
 975      0000
 976              	.LVL119:
 977              	.L76:
 375:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 978              		.loc 4 375 0 discriminator 3
 979 0221 83C001   		addl	$1, %eax
 980              	.LVL120:
 981 0224 39D8     		cmpl	%ebx, %eax
 982 0226 75E8     		jne	.L77
 983 0228 4C63DB   		movslq	%ebx, %r11
 984 022b 4A8D049D 		leaq	0(,%r11,4), %rax
 984      00000000 
 985              	.LVL121:
 986              	.L73:
 377:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 987              		.loc 4 377 0 is_stmt 1
 988 0233 418B0C06 		movl	(%r14,%rax), %ecx
 371:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 989              		.loc 4 371 0
 990 0237 85C9     		testl	%ecx, %ecx
 991 0239 0F44CA   		cmove	%edx, %ecx
 992              	.L74:
 993              	.LBB164:
 994              	.LBB165:
 995              		.loc 5 527 0
 996 023c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 996      000000
 997 0243 4C895C24 		movq	%r11, 24(%rsp)
 997      18
 998              	.LBE165:
 999              	.LBE164:
 385:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 1000              		.loc 4 385 0
 1001 0248 83C301   		addl	$1, %ebx
 1002              	.LVL122:
 1003 024b 894C2414 		movl	%ecx, 20(%rsp)
 1004              	.LVL123:
 1005              	.LBB169:
 1006              	.LBB166:
 1007              		.loc 5 527 0
 1008 024f 488B07   		movq	(%rdi), %rax
 1009 0252 FF90D001 		call	*464(%rax)
 1009      0000
 1010              	.LVL124:
 1011 0258 4189C0   		movl	%eax, %r8d
 1012              	.LBE166:
 1013              	.LBE169:
 382:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 1014              		.loc 4 382 0
 1015 025b 8B44240C 		movl	12(%rsp), %eax
 1016 025f 6A00     		pushq	$0
 1017              		.cfi_def_cfa_offset 10360
 1018 0261 6A00     		pushq	$0
 1019              		.cfi_def_cfa_offset 10368
 1020 0263 8B4C2424 		movl	36(%rsp), %ecx
 1021 0267 4C89EF   		movq	%r13, %rdi
 1022 026a 8B542418 		movl	24(%rsp), %edx
 1023 026e 41B94400 		movl	$68, %r9d
 1023      0000
 1024 0274 428D3438 		leal	(%rax,%r15), %esi
 385:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 1025              		.loc 4 385 0
 1026 0278 4531FF   		xorl	%r15d, %r15d
 1027              	.LVL125:
 382:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 1028              		.loc 4 382 0
 1029 027b E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1029      00
 1030              	.LVL126:
 1031 0280 4C8B5C24 		movq	40(%rsp), %r11
 1031      28
 1032 0285 4C89F0   		movq	%r14, %rax
 1033 0288 5E       		popq	%rsi
 1034              		.cfi_def_cfa_offset 10360
 1035 0289 5F       		popq	%rdi
 1036              		.cfi_def_cfa_offset 10352
 1037 028a 4B8D4C9E 		leaq	4(%r14,%r11,4), %rcx
 1037      04
 1038              	.LVL127:
 1039 028f 90       		.p2align 4,,10
 1040              		.p2align 3
 1041              	.L78:
 387:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1042              		.loc 4 387 0 discriminator 2
 1043 0290 8B10     		movl	(%rax), %edx
 1044 0292 85D2     		testl	%edx, %edx
 1045 0294 740C     		je	.L87
 1046 0296 4883C004 		addq	$4, %rax
 388:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 1047              		.loc 4 388 0 discriminator 3
 1048 029a 4101D7   		addl	%edx, %r15d
 1049              	.LVL128:
 387:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1050              		.loc 4 387 0 discriminator 3
 1051 029d 4839C8   		cmpq	%rcx, %rax
 1052 02a0 75EE     		jne	.L78
 1053              	.L87:
 1054              	.LBE163:
 1055              	.LBE178:
 1056              	.LBE189:
 354:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 1057              		.loc 4 354 0
 1058 02a2 4883C501 		addq	$1, %rbp
 1059              	.LVL129:
 1060 02a6 0FB64500 		movzbl	0(%rbp), %eax
 1061              	.LBB190:
 1062              	.LBB179:
 1063              	.LBB174:
 392:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 1064              		.loc 4 392 0
 1065 02aa 4C89EA   		movq	%r13, %rdx
 1066              	.LVL130:
 1067              	.LBE174:
 1068              	.LBE179:
 1069              	.LBE190:
 354:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 1070              		.loc 4 354 0
 1071 02ad 84C0     		testb	%al, %al
 1072 02af 0F8511FF 		jne	.L79
 1072      FFFF
 1073              	.LVL131:
 1074              	.L99:
 1075              	.LBE160:
 396:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 397:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 1076              		.loc 4 397 0
 1077 02b5 4C39EA   		cmpq	%r13, %rdx
 1078 02b8 0F87E200 		ja	.L101
 1078      0000
 1079              	.LVL132:
 1080              	.L52:
 398:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is ei
 399:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value g
 400:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 401:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 402:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Us
 403:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 404:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 1081              		.loc 4 404 0
 1082 02be 488B8424 		movq	10280(%rsp), %rax
 1082      28280000 
 1083 02c6 64483304 		xorq	%fs:40, %rax
 1083      25280000 
 1083      00
 1084 02cf 0F85EE01 		jne	.L102
 1084      0000
 1085 02d5 4881C438 		addq	$10296, %rsp
 1085      280000
 1086              		.cfi_remember_state
 1087              		.cfi_def_cfa_offset 56
 1088 02dc 5B       		popq	%rbx
 1089              		.cfi_def_cfa_offset 48
 1090 02dd 5D       		popq	%rbp
 1091              		.cfi_def_cfa_offset 40
 1092              	.LVL133:
 1093 02de 415C     		popq	%r12
 1094              		.cfi_def_cfa_offset 32
 1095              	.LVL134:
 1096 02e0 415D     		popq	%r13
 1097              		.cfi_def_cfa_offset 24
 1098 02e2 415E     		popq	%r14
 1099              		.cfi_def_cfa_offset 16
 1100 02e4 415F     		popq	%r15
 1101              		.cfi_def_cfa_offset 8
 1102 02e6 C3       		ret
 1103              	.LVL135:
 1104 02e7 660F1F84 		.p2align 4,,10
 1104      00000000 
 1104      00
 1105              		.p2align 3
 1106              	.L100:
 1107              		.cfi_restore_state
 1108              	.LBB194:
 1109              	.LBB191:
 1110              	.LBB180:
 1111              	.LBB181:
 1112              		.loc 5 527 0
 1113 02f0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1113      000000
 1114              	.LBE181:
 1115              	.LBE180:
 357:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 1116              		.loc 4 357 0
 1117 02f7 C60200   		movb	$0, (%rdx)
 1118              	.LBB183:
 1119              	.LBB182:
 1120              		.loc 5 527 0
 1121 02fa 488B07   		movq	(%rdi), %rax
 1122 02fd FF90D001 		call	*464(%rax)
 1122      0000
 1123              	.LVL136:
 1124 0303 4189C0   		movl	%eax, %r8d
 1125              	.LBE182:
 1126              	.LBE183:
 360:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1127              		.loc 4 360 0
 1128 0306 8B44240C 		movl	12(%rsp), %eax
 1129 030a 8B4C2410 		movl	16(%rsp), %ecx
 1130 030e 6A00     		pushq	$0
 1131              		.cfi_def_cfa_offset 10360
 1132 0310 6A00     		pushq	$0
 1133              		.cfi_def_cfa_offset 10368
 1134 0312 41B94400 		movl	$68, %r9d
 1134      0000
 1135 0318 8B5C2418 		movl	24(%rsp), %ebx
 1136              	.LVL137:
 1137 031c 4C89EF   		movq	%r13, %rdi
 1138 031f 428D3438 		leal	(%rax,%r15), %esi
 1139 0323 4429F9   		subl	%r15d, %ecx
 1140 0326 89DA     		movl	%ebx, %edx
 1141 0328 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1141      00
 1142              	.LVL138:
 1143              	.LBB184:
 1144              	.LBB185:
 1145              		.loc 5 527 0
 1146 032d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1146      000000
 1147 0334 488B07   		movq	(%rdi), %rax
 1148 0337 FF90D001 		call	*464(%rax)
 1148      0000
 1149              	.LVL139:
 1150              	.LBE185:
 1151              	.LBE184:
 365:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1152              		.loc 4 365 0
 1153 033d 89DE     		movl	%ebx, %esi
 363:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1154              		.loc 4 363 0
 1155 033f 4C89EA   		movq	%r13, %rdx
 365:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1156              		.loc 4 365 0
 1157 0342 01C6     		addl	%eax, %esi
 1158 0344 89742418 		movl	%esi, 24(%rsp)
 1159              	.LVL140:
 1160 0348 5B       		popq	%rbx
 1161              		.cfi_def_cfa_offset 10360
 366:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 1162              		.loc 4 366 0
 1163 0349 31DB     		xorl	%ebx, %ebx
 1164 034b 415F     		popq	%r15
 1165              		.cfi_def_cfa_offset 10352
 364:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 1166              		.loc 4 364 0
 1167 034d 4531FF   		xorl	%r15d, %r15d
 1168 0350 E961FEFF 		jmp	.L70
 1168      FF
 1169              	.LVL141:
 1170              		.p2align 4,,10
 1171 0355 0F1F00   		.p2align 3
 1172              	.L85:
 1173              	.LBB186:
 1174              	.LBB175:
 371:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 1175              		.loc 4 371 0
 1176 0358 89D1     		movl	%edx, %ecx
 1177 035a 4C63DB   		movslq	%ebx, %r11
 1178 035d E9DAFEFF 		jmp	.L74
 1178      FF
 1179              	.LVL142:
 1180              		.p2align 4,,10
 1181 0362 660F1F44 		.p2align 3
 1181      0000
 1182              	.L65:
 1183              	.LBE175:
 1184              	.LBE186:
 1185              	.LBE191:
 1186              	.LBE194:
 352:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 1187              		.loc 4 352 0
 1188 0368 8B7C2414 		movl	20(%rsp), %edi
 1189 036c E8000000 		call	_Z11fl_inactivej
 1189      00
 1190              	.LVL143:
 1191              	.LBB195:
 1192              	.LBB196:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1193              		.loc 5 52 0
 1194 0371 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1194      000000
 1195 0378 89C6     		movl	%eax, %esi
 1196 037a 488B17   		movq	(%rdi), %rdx
 1197 037d FF928800 		call	*136(%rdx)
 1197      0000
 1198              	.LVL144:
 1199 0383 E906FEFF 		jmp	.L66
 1199      FF
 1200              	.LVL145:
 1201 0388 0F1F8400 		.p2align 4,,10
 1201      00000000 
 1202              		.p2align 3
 1203              	.L98:
 1204              	.LBE196:
 1205              	.LBE195:
 340:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1206              		.loc 4 340 0
 1207 0390 4429F0   		subl	%r14d, %eax
 1208 0393 D1F8     		sarl	%eax
 1209 0395 01442408 		addl	%eax, 8(%rsp)
 1210              	.LVL146:
 1211 0399 E9C4FDFF 		jmp	.L58
 1211      FF
 1212              	.LVL147:
 1213 039e 6690     		.p2align 4,,10
 1214              		.p2align 3
 1215              	.L101:
 1216              	.LBB197:
 1217              	.LBB198:
 1218              		.loc 5 527 0
 1219 03a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1219      000000
 1220              	.LBE198:
 1221              	.LBE197:
 399:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 1222              		.loc 4 399 0
 1223 03a7 C60200   		movb	$0, (%rdx)
 1224              	.LBB201:
 1225              	.LBB199:
 1226              		.loc 5 527 0
 1227 03aa 488B07   		movq	(%rdi), %rax
 1228 03ad FF90D001 		call	*464(%rax)
 1228      0000
 1229              	.LVL148:
 1230              	.LBE199:
 1231              	.LBE201:
 402:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 1232              		.loc 4 402 0
 1233 03b3 8B4C2410 		movl	16(%rsp), %ecx
 1234 03b7 8B74240C 		movl	12(%rsp), %esi
 1235              	.LBB202:
 1236              	.LBB200:
 1237              		.loc 5 527 0
 1238 03bb 4189C0   		movl	%eax, %r8d
 1239              	.LBE200:
 1240              	.LBE202:
 402:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 1241              		.loc 4 402 0
 1242 03be 6A00     		pushq	$0
 1243              		.cfi_def_cfa_offset 10360
 1244 03c0 6A00     		pushq	$0
 1245              		.cfi_def_cfa_offset 10368
 1246 03c2 41B94400 		movl	$68, %r9d
 1246      0000
 1247 03c8 8B542418 		movl	24(%rsp), %edx
 1248 03cc 4C89EF   		movq	%r13, %rdi
 1249 03cf 4429F9   		subl	%r15d, %ecx
 1250 03d2 4401FE   		addl	%r15d, %esi
 1251 03d5 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1251      00
 1252              	.LVL149:
 1253 03da 4158     		popq	%r8
 1254              		.cfi_def_cfa_offset 10360
 1255 03dc 4159     		popq	%r9
 1256              		.cfi_def_cfa_offset 10352
 1257              		.loc 4 404 0
 1258 03de E9DBFEFF 		jmp	.L52
 1258      FF
 1259              	.LVL150:
 1260              		.p2align 4,,10
 1261 03e3 0F1F4400 		.p2align 3
 1261      00
 1262              	.L72:
 1263              	.LBB203:
 1264              	.LBB192:
 1265              	.LBB187:
 1266              	.LBB176:
 1267              	.LBB170:
 1268              	.LBB167:
 1269              		.loc 5 527 0
 1270 03e8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1270      000000
 1271 03ef 89542414 		movl	%edx, 20(%rsp)
 1272              	.LBE167:
 1273              	.LBE170:
 385:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 1274              		.loc 4 385 0
 1275 03f3 83C301   		addl	$1, %ebx
 1276              	.LVL151:
 1277              	.LBB171:
 1278              	.LBB168:
 1279              		.loc 5 527 0
 1280 03f6 488B07   		movq	(%rdi), %rax
 1281 03f9 FF90D001 		call	*464(%rax)
 1281      0000
 1282              	.LVL152:
 1283 03ff 4189C0   		movl	%eax, %r8d
 1284              	.LBE168:
 1285              	.LBE171:
 382:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of 
 1286              		.loc 4 382 0
 1287 0402 8B44240C 		movl	12(%rsp), %eax
 1288 0406 6A00     		pushq	$0
 1289              		.cfi_def_cfa_offset 10360
 1290 0408 6A00     		pushq	$0
 1291              		.cfi_def_cfa_offset 10368
 1292 040a 8B542424 		movl	36(%rsp), %edx
 1293 040e 41B94400 		movl	$68, %r9d
 1293      0000
 1294 0414 4C89EF   		movq	%r13, %rdi
 1295 0417 428D3438 		leal	(%rax,%r15), %esi
 1296 041b 89D1     		movl	%edx, %ecx
 1297 041d 8B542418 		movl	24(%rsp), %edx
 1298 0421 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 1298      00
 1299              	.LVL153:
 1300              	.LBB172:
 1301              	.LBB173:
 1302              		.loc 5 527 0
 1303 0426 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1303      000000
 1304 042d 488B07   		movq	(%rdi), %rax
 1305 0430 FF90D001 		call	*464(%rax)
 1305      0000
 1306              	.LVL154:
 1307              	.LBE173:
 1308              	.LBE172:
 391:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 1309              		.loc 4 391 0
 1310 0436 660FEFC0 		pxor	%xmm0, %xmm0
 1311 043a F20F2AC0 		cvtsi2sd	%eax, %xmm0
 1312 043e 58       		popq	%rax
 1313              		.cfi_def_cfa_offset 10360
 1314 043f 5A       		popq	%rdx
 1315              		.cfi_def_cfa_offset 10352
 392:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 1316              		.loc 4 392 0
 1317 0440 4C89EA   		movq	%r13, %rdx
 391:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 1318              		.loc 4 391 0
 1319 0443 F20F5905 		mulsd	.LC7(%rip), %xmm0
 1319      00000000 
 1320 044b F20F5905 		mulsd	.LC8(%rip), %xmm0
 1320      00000000 
 1321 0453 F20F2CF0 		cvttsd2si	%xmm0, %esi
 1322 0457 0FAFF3   		imull	%ebx, %esi
 1323 045a 4189F7   		movl	%esi, %r15d
 1324              	.LVL155:
 1325 045d E954FDFF 		jmp	.L70
 1325      FF
 1326              	.LVL156:
 1327              		.p2align 4,,10
 1328 0462 660F1F44 		.p2align 3
 1328      0000
 1329              	.L96:
 1330              	.LBE176:
 1331              	.LBE187:
 1332              	.LBE192:
 1333              	.LBE203:
 309:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1334              		.loc 4 309 0
 1335 0468 418B7424 		movl	104(%r12), %esi
 1335      68
 1336 046d 418BBC24 		movl	196(%r12), %edi
 1336      C4000000 
 1337 0475 E8000000 		call	_Z11fl_contrastjj
 1337      00
 1338              	.LVL157:
 313:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 1339              		.loc 4 313 0
 1340 047a 48833D00 		cmpq	$0, _ZN12Fl_File_Icon6first_E(%rip)
 1340      00000000 
 309:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1341              		.loc 4 309 0
 1342 0482 89442414 		movl	%eax, 20(%rsp)
 1343              	.LVL158:
 313:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 1344              		.loc 4 313 0
 1345 0486 0F8503FC 		jne	.L57
 1345      FFFF
 1346              	.LVL159:
 1347              	.L97:
 316:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1348              		.loc 4 316 0
 1349 048c 418D4701 		leal	1(%r15), %eax
 1350              	.LVL160:
 1351 0490 8944240C 		movl	%eax, 12(%rsp)
 1352              	.LVL161:
 317:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 1353              		.loc 4 317 0
 1354 0494 418D45FE 		leal	-2(%r13), %eax
 1355              	.LVL162:
 1356 0498 89442410 		movl	%eax, 16(%rsp)
 1357              	.LVL163:
 1358 049c E9C1FCFF 		jmp	.L58
 1358      FF
 1359              	.LVL164:
 1360              		.p2align 4,,10
 1361 04a1 0F1F8000 		.p2align 3
 1361      000000
 1362              	.L95:
 1363              	.LBB204:
 1364              	.LBB145:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 1365              		.loc 5 509 0
 1366 04a8 488B07   		movq	(%rdi), %rax
 1367 04ab 83CE01   		orl	$1, %esi
 1368 04ae FF90B001 		call	*432(%rax)
 1368      0000
 1369              	.LVL165:
 1370 04b4 E9B2FBFF 		jmp	.L54
 1370      FF
 1371              	.LVL166:
 1372              	.L83:
 1373              	.LBE145:
 1374              	.LBE204:
 1375              	.LBB205:
 1376              	.LBB193:
 1377              	.LBB188:
 1378              	.LBB177:
 375:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 1379              		.loc 4 375 0
 1380 04b9 31C0     		xorl	%eax, %eax
 1381 04bb 4531DB   		xorl	%r11d, %r11d
 1382 04be E970FDFF 		jmp	.L73
 1382      FF
 1383              	.LVL167:
 1384              	.L102:
 1385              	.LBE177:
 1386              	.LBE188:
 1387              	.LBE193:
 1388              	.LBE205:
 1389              		.loc 4 404 0
 1390 04c3 E8000000 		call	__stack_chk_fail
 1390      00
 1391              	.LVL168:
 1392              		.cfi_endproc
 1393              	.LFE580:
 1395              		.section	.text.unlikely._ZNK15Fl_File_Browser9item_drawEPviiii
 1396              	.LCOLDE10:
 1397              		.section	.text._ZNK15Fl_File_Browser9item_drawEPviiii
 1398              	.LHOTE10:
 1399              		.section	.text.unlikely._ZN10Fl_Browser9item_swapEPvS0_,"axG",@progbits,_ZN10Fl_Browser9item_swapE
 1400              		.align 2
 1401              	.LCOLDB11:
 1402              		.section	.text._ZN10Fl_Browser9item_swapEPvS0_,"axG",@progbits,_ZN10Fl_Browser9item_swapEPvS0_,com
 1403              	.LHOTB11:
 1404              		.align 2
 1405              		.p2align 4,,15
 1406              		.weak	_ZN10Fl_Browser9item_swapEPvS0_
 1408              	_ZN10Fl_Browser9item_swapEPvS0_:
 1409              	.LFB319:
 112:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Return the item at specified \p line.
 1410              		.loc 6 112 0
 1411              		.cfi_startproc
 1412              	.LVL169:
 112:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Return the item at specified \p line.
 1413              		.loc 6 112 0
 1414 0000 E9000000 		jmp	_ZN10Fl_Browser4swapEP8FL_BLINES1_
 1414      00
 1415              	.LVL170:
 1416              		.cfi_endproc
 1417              	.LFE319:
 1419              		.section	.text.unlikely._ZN10Fl_Browser9item_swapEPvS0_,"axG",@progbits,_ZN10Fl_Browser9item_swapE
 1420              	.LCOLDE11:
 1421              		.section	.text._ZN10Fl_Browser9item_swapEPvS0_,"axG",@progbits,_ZN10Fl_Browser9item_swapEPvS0_,com
 1422              	.LHOTE11:
 1423              		.section	.text.unlikely._ZN10Fl_Browser4hideEv,"axG",@progbits,_ZN10Fl_Browser4hideEv,comdat
 1424              		.align 2
 1425              	.LCOLDB12:
 1426              		.section	.text._ZN10Fl_Browser4hideEv,"axG",@progbits,_ZN10Fl_Browser4hideEv,comdat
 1427              	.LHOTB12:
 1428              		.align 2
 1429              		.p2align 4,,15
 1430              		.weak	_ZN10Fl_Browser4hideEv
 1432              	_ZN10Fl_Browser4hideEv:
 1433              	.LFB328:
 119:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 120:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE* find_line(int line) const ;
 121:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE* _remove(int line) ;
 122:fltk-1.3.4-1/FL/Fl_Browser.H ****   void insert(int line, FL_BLINE* item);
 123:fltk-1.3.4-1/FL/Fl_Browser.H ****   int lineno(void *item) const ;
 124:fltk-1.3.4-1/FL/Fl_Browser.H ****   void swap(FL_BLINE *a, FL_BLINE *b);
 125:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 126:fltk-1.3.4-1/FL/Fl_Browser.H **** public:
 127:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 128:fltk-1.3.4-1/FL/Fl_Browser.H ****   void remove(int line);
 129:fltk-1.3.4-1/FL/Fl_Browser.H ****   void add(const char* newtext, void* d = 0);
 130:fltk-1.3.4-1/FL/Fl_Browser.H ****   void insert(int line, const char* newtext, void* d = 0);
 131:fltk-1.3.4-1/FL/Fl_Browser.H ****   void move(int to, int from);
 132:fltk-1.3.4-1/FL/Fl_Browser.H ****   int  load(const char* filename);
 133:fltk-1.3.4-1/FL/Fl_Browser.H ****   void swap(int a, int b);
 134:fltk-1.3.4-1/FL/Fl_Browser.H ****   void clear();
 135:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 136:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 137:fltk-1.3.4-1/FL/Fl_Browser.H ****     Returns how many lines are in the browser.
 138:fltk-1.3.4-1/FL/Fl_Browser.H ****     The last line number is equal to this.
 139:fltk-1.3.4-1/FL/Fl_Browser.H ****     Returns 0 if browser is empty.
 140:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 141:fltk-1.3.4-1/FL/Fl_Browser.H ****   int size() const { return lines; }
 142:fltk-1.3.4-1/FL/Fl_Browser.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 143:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 144:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 145:fltk-1.3.4-1/FL/Fl_Browser.H ****     Gets the default text size (in pixels) for the lines in the browser.
 146:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 147:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Fontsize textsize() const { return Fl_Browser_::textsize(); }
 148:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 149:fltk-1.3.4-1/FL/Fl_Browser.H ****   /*
 150:fltk-1.3.4-1/FL/Fl_Browser.H ****     Sets the default text size for the lines in the browser to newSize.
 151:fltk-1.3.4-1/FL/Fl_Browser.H ****     Defined and documented in Fl_Browser.cxx
 152:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 153:fltk-1.3.4-1/FL/Fl_Browser.H ****   void textsize(Fl_Fontsize newSize);
 154:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 155:fltk-1.3.4-1/FL/Fl_Browser.H ****   int topline() const ;
 156:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** For internal use only? */
 157:fltk-1.3.4-1/FL/Fl_Browser.H ****   enum Fl_Line_Position { TOP, BOTTOM, MIDDLE };
 158:fltk-1.3.4-1/FL/Fl_Browser.H ****   void lineposition(int line, Fl_Line_Position pos);
 159:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 160:fltk-1.3.4-1/FL/Fl_Browser.H ****     Scrolls the browser so the top item in the browser
 161:fltk-1.3.4-1/FL/Fl_Browser.H ****     is showing the specified \p line.
 162:fltk-1.3.4-1/FL/Fl_Browser.H ****     \param[in] line The line to be displayed at the top.
 163:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see topline(), middleline(), bottomline(), displayed(), lineposition()
 164:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 165:fltk-1.3.4-1/FL/Fl_Browser.H ****   void topline(int line) { lineposition(line, TOP); }
 166:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 167:fltk-1.3.4-1/FL/Fl_Browser.H ****     Scrolls the browser so the bottom item in the browser
 168:fltk-1.3.4-1/FL/Fl_Browser.H ****     is showing the specified \p line.
 169:fltk-1.3.4-1/FL/Fl_Browser.H ****     \param[in] line The line to be displayed at the bottom.
 170:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see topline(), middleline(), bottomline(), displayed(), lineposition()
 171:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 172:fltk-1.3.4-1/FL/Fl_Browser.H ****   void bottomline(int line) { lineposition(line, BOTTOM); }
 173:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 174:fltk-1.3.4-1/FL/Fl_Browser.H ****     Scrolls the browser so the middle item in the browser
 175:fltk-1.3.4-1/FL/Fl_Browser.H ****     is showing the specified \p line.
 176:fltk-1.3.4-1/FL/Fl_Browser.H ****     \param[in] line The line to be displayed in the middle.
 177:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see topline(), middleline(), bottomline(), displayed(), lineposition()
 178:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 179:fltk-1.3.4-1/FL/Fl_Browser.H ****   void middleline(int line) { lineposition(line, MIDDLE); }
 180:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 181:fltk-1.3.4-1/FL/Fl_Browser.H ****   int select(int line, int val=1);
 182:fltk-1.3.4-1/FL/Fl_Browser.H ****   int selected(int line) const ;
 183:fltk-1.3.4-1/FL/Fl_Browser.H ****   void show(int line);
 184:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Shows the entire Fl_Browser widget -- opposite of hide(). */
 185:fltk-1.3.4-1/FL/Fl_Browser.H ****   void show() { Fl_Widget::show(); }
 186:fltk-1.3.4-1/FL/Fl_Browser.H ****   void hide(int line);
 187:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Hides the entire Fl_Browser widget -- opposite of show(). */
 188:fltk-1.3.4-1/FL/Fl_Browser.H ****   void hide() { Fl_Widget::hide(); }
 1434              		.loc 6 188 0
 1435              		.cfi_startproc
 1436              	.LVL171:
 1437              		.loc 6 188 0
 1438 0000 E9000000 		jmp	_ZN9Fl_Widget4hideEv
 1438      00
 1439              	.LVL172:
 1440              		.cfi_endproc
 1441              	.LFE328:
 1443              		.section	.text.unlikely._ZN10Fl_Browser4hideEv,"axG",@progbits,_ZN10Fl_Browser4hideEv,comdat
 1444              	.LCOLDE12:
 1445              		.section	.text._ZN10Fl_Browser4hideEv,"axG",@progbits,_ZN10Fl_Browser4hideEv,comdat
 1446              	.LHOTE12:
 1447              		.section	.text.unlikely._ZN10Fl_Browser4showEv,"axG",@progbits,_ZN10Fl_Browser4showEv,comdat
 1448              		.align 2
 1449              	.LCOLDB13:
 1450              		.section	.text._ZN10Fl_Browser4showEv,"axG",@progbits,_ZN10Fl_Browser4showEv,comdat
 1451              	.LHOTB13:
 1452              		.align 2
 1453              		.p2align 4,,15
 1454              		.weak	_ZN10Fl_Browser4showEv
 1456              	_ZN10Fl_Browser4showEv:
 1457              	.LFB327:
 185:fltk-1.3.4-1/FL/Fl_Browser.H ****   void hide(int line);
 1458              		.loc 6 185 0
 1459              		.cfi_startproc
 1460              	.LVL173:
 185:fltk-1.3.4-1/FL/Fl_Browser.H ****   void hide(int line);
 1461              		.loc 6 185 0
 1462 0000 E9000000 		jmp	_ZN9Fl_Widget4showEv
 1462      00
 1463              	.LVL174:
 1464              		.cfi_endproc
 1465              	.LFE327:
 1467              		.section	.text.unlikely._ZN10Fl_Browser4showEv,"axG",@progbits,_ZN10Fl_Browser4showEv,comdat
 1468              	.LCOLDE13:
 1469              		.section	.text._ZN10Fl_Browser4showEv,"axG",@progbits,_ZN10Fl_Browser4showEv,comdat
 1470              	.LHOTE13:
 1471              		.section	.rodata.str1.1,"aMS",@progbits,1
 1472              	.LC14:
 1473 0000 2A00     		.string	"*"
 1474              	.LC15:
 1475 0002 00       		.string	""
 1476              		.section	.text.unlikely._ZN15Fl_File_BrowserC2EiiiiPKc,"ax",@progbits
 1477              		.align 2
 1478              	.LCOLDB16:
 1479              		.section	.text._ZN15Fl_File_BrowserC2EiiiiPKc,"ax",@progbits
 1480              	.LHOTB16:
 1481              		.align 2
 1482              		.p2align 4,,15
 1483              		.globl	_ZN15Fl_File_BrowserC2EiiiiPKc
 1485              	_ZN15Fl_File_BrowserC2EiiiiPKc:
 1486              	.LFB582:
 405:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_colo
 406:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 407:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 408:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 409:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 410:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 411:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Colo
 1487              		.loc 4 411 0
 1488              		.cfi_startproc
 1489              	.LVL175:
 1490 0000 53       		pushq	%rbx
 1491              		.cfi_def_cfa_offset 16
 1492              		.cfi_offset 3, -16
 1493              		.loc 4 411 0
 1494 0001 4889FB   		movq	%rdi, %rbx
 1495              	.LBB206:
 412:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 413:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 414:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 415:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 416:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility 
 1496              		.loc 4 416 0
 1497 0004 E8000000 		call	_ZN10Fl_BrowserC2EiiiiPKc
 1497      00
 1498              	.LVL176:
 417:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 418:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both col
 419:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 420:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 421:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 1499              		.loc 4 421 0
 1500 0009 8B83C000 		movl	192(%rbx), %eax
 1500      0000
 416:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although 
 1501              		.loc 4 416 0
 1502 000f 48C70300 		movq	$_ZTV15Fl_File_Browser+16, (%rbx)
 1502      000000
 419:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 1503              		.loc 4 419 0
 1504 0016 48C783B0 		movq	$.LC14, 688(%rbx)
 1504      02000000 
 1504      000000
 420:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 1505              		.loc 4 420 0
 1506 0021 48C783A0 		movq	$.LC15, 672(%rbx)
 1506      02000000 
 1506      000000
 1507              	.LVL177:
 422:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1508              		.loc 4 422 0
 1509 002c C7839C02 		movl	$0, 668(%rbx)
 1509      00000000 
 1509      0000
 421:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1510              		.loc 4 421 0
 1511 0036 8D0440   		leal	(%rax,%rax,2), %eax
 1512 0039 89C2     		movl	%eax, %edx
 1513 003b C1EA1F   		shrl	$31, %edx
 1514 003e 01D0     		addl	%edx, %eax
 1515 0040 D1F8     		sarl	%eax
 1516 0042 8883A802 		movb	%al, 680(%rbx)
 1516      0000
 1517              	.LBE206:
 423:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 1518              		.loc 4 423 0
 1519 0048 5B       		popq	%rbx
 1520              		.cfi_def_cfa_offset 8
 1521              	.LVL178:
 1522 0049 C3       		ret
 1523              		.cfi_endproc
 1524              	.LFE582:
 1526              		.section	.text.unlikely._ZN15Fl_File_BrowserC2EiiiiPKc
 1527              	.LCOLDE16:
 1528              		.section	.text._ZN15Fl_File_BrowserC2EiiiiPKc
 1529              	.LHOTE16:
 1530              		.globl	_ZN15Fl_File_BrowserC1EiiiiPKc
 1531              		.set	_ZN15Fl_File_BrowserC1EiiiiPKc,_ZN15Fl_File_BrowserC2EiiiiPKc
 1532              		.section	.rodata.str1.1
 1533              	.LC17:
 1534 0003 616E7900 		.string	"any"
 1535              	.LC18:
 1536 0007 7200     		.string	"r"
 1537              	.LC19:
 1538 0009 2F657463 		.string	"/etc/mnttab"
 1538      2F6D6E74 
 1538      74616200 
 1539              	.LC20:
 1540 0015 2F657463 		.string	"/etc/mtab"
 1540      2F6D7461 
 1540      6200
 1541              	.LC21:
 1542 001f 2F657463 		.string	"/etc/fstab"
 1542      2F667374 
 1542      616200
 1543              	.LC22:
 1544 002a 2F657463 		.string	"/etc/vfstab"
 1544      2F766673 
 1544      74616200 
 1545              	.LC23:
 1546 0036 2F00     		.string	"/"
 1547              	.LC24:
 1548 0038 252A7325 		.string	"%*s%4095s"
 1548      34303935 
 1548      7300
 1549              	.LC25:
 1550 0042 2E2F00   		.string	"./"
 1551              	.LC26:
 1552 0045 25732F25 		.string	"%s/%s"
 1552      7300
 1553              		.section	.text.unlikely._ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E,"ax",@progbits
 1554              		.align 2
 1555              	.LCOLDB27:
 1556              		.section	.text._ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E,"ax",@progbits
 1557              	.LHOTB27:
 1558              		.align 2
 1559              		.p2align 4,,15
 1560              		.globl	_ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E
 1562              	_ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E:
 1563              	.LFB584:
 424:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 426:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 427:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selecti
 428:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 429:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 430:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 431:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 432:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=s
 433:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1564              		.loc 4 433 0
 1565              		.cfi_startproc
 1566              	.LVL179:
 1567 0000 4157     		pushq	%r15
 1568              		.cfi_def_cfa_offset 16
 1569              		.cfi_offset 15, -16
 1570 0002 4156     		pushq	%r14
 1571              		.cfi_def_cfa_offset 24
 1572              		.cfi_offset 14, -24
 1573 0004 4155     		pushq	%r13
 1574              		.cfi_def_cfa_offset 32
 1575              		.cfi_offset 13, -32
 1576 0006 4154     		pushq	%r12
 1577              		.cfi_def_cfa_offset 40
 1578              		.cfi_offset 12, -40
 1579 0008 4989D4   		movq	%rdx, %r12
 1580 000b 55       		pushq	%rbp
 1581              		.cfi_def_cfa_offset 48
 1582              		.cfi_offset 6, -48
 1583 000c 53       		pushq	%rbx
 1584              		.cfi_def_cfa_offset 56
 1585              		.cfi_offset 3, -56
 1586 000d 4889F3   		movq	%rsi, %rbx
 1587 0010 4889FD   		movq	%rdi, %rbp
 1588 0013 4881EC38 		subq	$6200, %rsp
 1588      180000
 1589              		.cfi_def_cfa_offset 6256
 1590              		.loc 4 433 0
 1591 001a 64488B04 		movq	%fs:40, %rax
 1591      25280000 
 1591      00
 1592 0023 48898424 		movq	%rax, 6184(%rsp)
 1592      28180000 
 1593 002b 31C0     		xorl	%eax, %eax
 434:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 435:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 436:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 437:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 438:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 439:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 440:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 441:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. 
 443:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em no
 1594              		.loc 4 443 0
 1595 002d E8000000 		call	_ZN10Fl_Browser5clearEv
 1595      00
 1596              	.LVL180:
 444:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make su
 445:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method c
 446:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 447:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 1597              		.loc 4 447 0
 1598 0032 4885DB   		testq	%rbx, %rbx
 445:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 1599              		.loc 4 445 0
 1600 0035 48899DA0 		movq	%rbx, 672(%rbp)
 1600      020000
 1601              		.loc 4 447 0
 1602 003c 0F849E02 		je	.L131
 1602      0000
 1603              	.LBB207:
 448:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 449:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 1604              		.loc 4 450 0
 1605 0042 803B00   		cmpb	$0, (%rbx)
 1606 0045 0F85D500 		jne	.L110
 1606      0000
 1607              	.LVL181:
 1608              	.LBB208:
 451:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 453:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the lab
 454:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 455:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 456:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever 
 457:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 458:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1609              		.loc 4 458 0
 1610 004b BE030000 		movl	$3, %esi
 1610      00
 1611 0050 BF000000 		movl	$.LC17, %edi
 1611      00
 1612 0055 E8000000 		call	_ZN12Fl_File_Icon4findEPKci
 1612      00
 1613              	.LVL182:
 1614 005a 4885C0   		testq	%rax, %rax
 1615 005d 4989C5   		movq	%rax, %r13
 1616              	.LVL183:
 1617 0060 0F848102 		je	.L150
 1617      0000
 1618              	.L111:
 459:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 460:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 461:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 462:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 463:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 464:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 465:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 466:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 467:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a;
 468:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 469:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 470:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 471:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 472:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 473:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_
 474:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 475:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 476:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the l
 477:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embo
 478:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an 
 479:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 480:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 481:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 482:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 483:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 484:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 485:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 486:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 487:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 488:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 489:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 490:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 491:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 492:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 493:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 494:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 495:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 496:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 497:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 498:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 499:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 500:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 501:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 502:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 503:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 504:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 505:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 506:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 507:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The defau
 508:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Win
 509:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 510:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 511:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 512:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 513:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 514:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 515:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 516:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 517:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 518:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 519:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 520:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 521:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 522:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 523:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 524:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 525:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 526:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 527:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 528:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 529:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 530:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 531:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 532:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 533:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 534:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 535:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 536:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 537:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 538:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 539:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 540:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 541:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the activ
 542:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 543:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 544:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 545:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 546:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label
 547:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 548:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 549:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 550:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 551:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 552:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 553:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 554:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 555:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 556:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 557:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 558:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 559:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 560:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inact
 561:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 562:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 563:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 564:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 565:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 566:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 567:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 568:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 569:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 570:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 571:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 572:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 573:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 574:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 575:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 576:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 577:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 578:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 579:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 580:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 581:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 582:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 583:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 584:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 585:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user
 586:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 587:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 588:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 589:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 590:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 591:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 592:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 593:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 594:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 595:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 596:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 597:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;
 598:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 599:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 600:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 601:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 602:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 603:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 604:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Cal
 605:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 606:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 607:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is pa
 608:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 609:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 610:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 611:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 612:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 613:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed
 614:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 615:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 616:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 617:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is pass
 619:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 620:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 621:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 622:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_
 623:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 624:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is pass
 625:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em
 626:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 627:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1619              		.loc 4 627 0
 1620 0066 BE000000 		movl	$.LC18, %esi
 1620      00
 1621 006b BF000000 		movl	$.LC19, %edi
 1621      00
 1622 0070 E8000000 		call	fl_fopen
 1622      00
 1623              	.LVL184:
 628:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 1624              		.loc 4 628 0
 1625 0075 4885C0   		testq	%rax, %rax
 627:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 1626              		.loc 4 627 0
 1627 0078 4889C3   		movq	%rax, %rbx
 1628              	.LVL185:
 1629              		.loc 4 628 0
 1630 007b 0F847D02 		je	.L151
 1630      0000
 1631              	.L128:
 629:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 630:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 631:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 632:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 633:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 634:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 635:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 636:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 637:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 638:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 639:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 640:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 641:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 642:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following val
 643:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 644:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 1632              		.loc 4 644 0
 1633 0081 4C8DB424 		leaq	2080(%rsp), %r14
 1633      20080000 
 638:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1634              		.loc 4 638 0
 1635 0089 4C89EA   		movq	%r13, %rdx
 1636 008c BE000000 		movl	$.LC23, %esi
 1636      00
 1637 0091 4889EF   		movq	%rbp, %rdi
 639:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called
 1638              		.loc 4 639 0
 1639 0094 41BC0100 		movl	$1, %r12d
 1639      0000
 1640              	.LVL186:
 638:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1641              		.loc 4 638 0
 1642 009a E8000000 		call	_ZN10Fl_Browser3addEPKcPv
 1642      00
 1643              	.LVL187:
 1644 009f 90       		.p2align 4,,10
 1645              		.p2align 3
 1646              	.L139:
 1647              	.LBB209:
 1648              	.LBB210:
 1649              		.file 8 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
  35:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  36:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #elif !defined __cplusplus
  37:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # define sprintf(str, ...) \
  38:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___sprintf_chk (str, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  39:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   __VA_ARGS__)
  40:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  41:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  42:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  43:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsprintf (char *__restrict __s, const char *__restrict __fmt,
  44:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 _G_va_list __ap))
  45:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  46:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  47:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __ap);
  48:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  49:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  50:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if defined __USE_ISOC99 || defined __USE_UNIX98
  51:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  52:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
  53:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __slen, const char *__restrict __format,
  54:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   ...) __THROW;
  55:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
  56:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    size_t __slen, const char *__restrict __format,
  57:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    _G_va_list __ap) __THROW;
  58:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  59:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  60:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  61:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (snprintf (char *__restrict __s, size_t __n,
  62:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 const char *__restrict __fmt, ...))
  63:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  64:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __va_arg_pack ());
  66:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  67:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
  68:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define snprintf(str, len, ...) \
  69:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___snprintf_chk (str, len, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  70:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    __VA_ARGS__)
  71:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
  72:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  73:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  74:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsnprintf (char *__restrict __s, size_t __n,
  75:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  const char *__restrict __fmt, _G_va_list __ap))
  76:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  77:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsnprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  78:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				    __bos (__s), __fmt, __ap);
  79:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  80:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  81:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  82:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  83:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if __USE_FORTIFY_LEVEL > 1
  84:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  85:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
  86:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...);
  87:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __printf_chk (int __flag, const char *__restrict __format, ...);
  88:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
  89:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format, _G_va_list __ap);
  90:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vprintf_chk (int __flag, const char *__restrict __format,
  91:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  _G_va_list __ap);
  92:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  94:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  95:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
  96:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt,
  98:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
  99:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 100:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 101:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 102:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** printf (const char *__restrict __fmt, ...)
 103:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 104:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __printf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __va_arg_pack ());
 105:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 106:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
 107:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define printf(...) \
 108:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __printf_chk (__USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 109:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define fprintf(stream, ...) \
 110:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __fprintf_chk (stream, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 111:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 112:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 113:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 114:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vprintf (const char *__restrict __fmt, _G_va_list __ap)
 115:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 116:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifdef __USE_EXTERN_INLINES
 117:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vfprintf_chk (stdout, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 118:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #else
 119:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vprintf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 120:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 121:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 122:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 123:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 124:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vfprintf (FILE *__restrict __stream,
 125:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  const char *__restrict __fmt, _G_va_list __ap)
 126:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 127:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vfprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 128:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 129:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 130:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __USE_XOPEN2K8
 131:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
 132:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  ...) __attribute__ ((__format__ (__printf__, 3, 4)));
 133:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vdprintf_chk (int __fd, int __flag,
 134:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __fmt, _G_va_list __arg)
 135:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __attribute__ ((__format__ (__printf__, 3, 0)));
 136:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 137:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  ifdef __va_arg_pack
 138:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 139:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** dprintf (int __fd, const char *__restrict __fmt, ...)
 140:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 141:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __dprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt,
 142:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
 143:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 144:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  elif !defined __cplusplus
 145:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define dprintf(fd, ...) \
 146:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __dprintf_chk (fd, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 147:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  endif
 148:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 149:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 150:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vdprintf (int __fd, const char *__restrict __fmt, _G_va_list __ap)
 151:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 152:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vdprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 153:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 154:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 155:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 156:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __USE_GNU
 157:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 158:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __asprintf_chk (char **__restrict __ptr, int __flag,
 159:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __fmt, ...)
 160:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 4))) __wur;
 161:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
 162:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    const char *__restrict __fmt, _G_va_list __arg)
 163:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 0))) __wur;
 164:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
 165:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				 int __flag, const char *__restrict __format,
 166:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				 ...)
 167:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 4)));
 168:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
 169:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  int __flag,
 170:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  const char *__restrict __format,
 171:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  _G_va_list __args)
 172:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 0)));
 173:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 174:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  ifdef __va_arg_pack
 175:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 176:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...))
 177:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 178:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
 179:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 __va_arg_pack ());
 180:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 181:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 182:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 183:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (__asprintf (char **__restrict __ptr, const char *__restrict __fmt,
 184:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		   ...))
 185:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 186:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
 187:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 __va_arg_pack ());
 188:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 189:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 190:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 191:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (obstack_printf (struct obstack *__restrict __obstack,
 192:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       const char *__restrict __fmt, ...))
 193:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 194:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __obstack_printf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
 195:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			       __va_arg_pack ());
 196:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 197:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  elif !defined __cplusplus
 198:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define asprintf(ptr, ...) \
 199:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 200:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define __asprintf(ptr, ...) \
 201:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 202:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define obstack_printf(obstack, ...) \
 203:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __obstack_printf_chk (obstack, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 204:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  endif
 205:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 206:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 207:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vasprintf (char **__restrict __ptr, const char *__restrict __fmt,
 208:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  _G_va_list __ap))
 209:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 210:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vasprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 211:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 212:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 213:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 214:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (obstack_vprintf (struct obstack *__restrict __obstack,
 215:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			const char *__restrict __fmt, _G_va_list __ap))
 216:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 217:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __obstack_vprintf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
 218:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				__ap);
 219:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 220:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 221:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 222:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 223:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 224:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 225:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if !defined __USE_ISOC11 \
 226:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     || (defined __cplusplus && __cplusplus <= 201103L && !defined __USE_GNU)
 227:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__gets_chk (char *__str, size_t) __wur;
 228:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__gets_warn, (char *__str), gets)
 229:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("please use fgets or getline instead, gets can't "
 230:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "specify buffer size");
 231:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 232:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur char *
 233:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** gets (char *__str)
 234:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 235:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos (__str) != (size_t) -1)
 236:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     return __gets_chk (__str, __bos (__str));
 237:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __gets_warn (__str);
 238:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 239:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 240:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 241:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
 242:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream) __wur;
 243:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__fgets_alias,
 244:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 (char *__restrict __s, int __n,
 245:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream), fgets) __wur;
 246:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__fgets_chk_warn,
 247:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 (char *__restrict __s, size_t __size, int __n,
 248:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream), __fgets_chk)
 249:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("fgets called with bigger size than length "
 250:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "of destination buffer");
 251:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 252:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur char *
 253:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
 254:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 255:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos (__s) != (size_t) -1)
 256:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     {
 257:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (!__builtin_constant_p (__n) || __n <= 0)
 258:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fgets_chk (__s, __bos (__s), __n, __stream);
 259:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 260:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if ((size_t) __n > __bos (__s))
 261:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fgets_chk_warn (__s, __bos (__s), __n, __stream);
 262:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     }
 263:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fgets_alias (__s, __n, __stream);
 1650              		.loc 8 263 0
 1651 00a0 488D7C24 		leaq	32(%rsp), %rdi
 1651      20
 1652              	.LVL188:
 1653 00a5 4889DA   		movq	%rbx, %rdx
 1654 00a8 BE000800 		movl	$2048, %esi
 1654      00
 1655 00ad E8000000 		call	fgets
 1655      00
 1656              	.LVL189:
 1657              	.LBE210:
 1658              	.LBE209:
 640:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1659              		.loc 4 640 0
 1660 00b2 4885C0   		testq	%rax, %rax
 1661 00b5 0F848501 		je	.L116
 1661      0000
 642:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 1662              		.loc 4 642 0
 1663 00bb 0FB65424 		movzbl	32(%rsp), %edx
 1663      20
 1664 00c0 80FA23   		cmpb	$35, %dl
 1665 00c3 74DB     		je	.L139
 1666 00c5 80FA0A   		cmpb	$10, %dl
 1667 00c8 74D6     		je	.L139
 1668              		.loc 4 644 0
 1669 00ca 488D7C24 		leaq	32(%rsp), %rdi
 1669      20
 1670 00cf 31C0     		xorl	%eax, %eax
 1671 00d1 4C89F2   		movq	%r14, %rdx
 1672 00d4 BE000000 		movl	$.LC24, %esi
 1672      00
 1673 00d9 E8000000 		call	sscanf
 1673      00
 1674              	.LVL190:
 1675 00de 83F801   		cmpl	$1, %eax
 1676 00e1 75BD     		jne	.L139
 645:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned
 646:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the 
 647:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 1677              		.loc 4 647 0
 1678 00e3 BE000000 		movl	$.LC23, %esi
 1678      00
 1679 00e8 B9020000 		movl	$2, %ecx
 1679      00
 1680 00ed 4C89F7   		movq	%r14, %rdi
 1681 00f0 F3A6     		repz cmpsb
 1682 00f2 74AC     		je	.L139
 648:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this
 649:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. Th
 1683              		.loc 4 649 0
 1684 00f4 BA001000 		movl	$4096, %edx
 1684      00
 1685 00f9 BE000000 		movl	$.LC23, %esi
 1685      00
 1686 00fe 4C89F7   		movq	%r14, %rdi
 1687 0101 E8000000 		call	fl_strlcat
 1687      00
 1688              	.LVL191:
 650:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback o
 651:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen
 652:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not
 1689              		.loc 4 652 0
 1690 0106 4C89EA   		movq	%r13, %rdx
 1691 0109 4C89F6   		movq	%r14, %rsi
 1692 010c 4889EF   		movq	%rbp, %rdi
 1693 010f E8000000 		call	_ZN10Fl_Browser3addEPKcPv
 1693      00
 1694              	.LVL192:
 653:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 1695              		.loc 4 653 0
 1696 0114 4183C401 		addl	$1, %r12d
 1697              	.LVL193:
 1698 0118 EB86     		jmp	.L139
 1699              	.LVL194:
 1700 011a 660F1F44 		.p2align 4,,10
 1700      0000
 1701              		.p2align 3
 1702              	.L110:
 1703              	.LBE208:
 1704              	.LBB211:
 654:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all 
 655:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is presse
 656:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, 
 657:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 658:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or 
 659:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the beha
 660:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key
 661:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful fo
 662:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 663:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 664:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 665:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. O
 666:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is
 667:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on
 668:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK
 669:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 670:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 671:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 672:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 674:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisibl
 675:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 676:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 677:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 678:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 679:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visibl
 680:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invis
 681:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 682:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 683:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 684:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 686:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1705              		.loc 4 686 0
 1706 0120 488D7424 		leaq	24(%rsp), %rsi
 1706      18
 1707 0125 4C89E2   		movq	%r12, %rdx
 1708 0128 4889DF   		movq	%rbx, %rdi
 1709 012b E8000000 		call	_Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
 1709      00
 1710              	.LVL195:
 687:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 688:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events lik
 689:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1711              		.loc 4 689 0
 1712 0130 85C0     		testl	%eax, %eax
 686:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get
 1713              		.loc 4 686 0
 1714 0132 4189C4   		movl	%eax, %r12d
 1715              	.LVL196:
 1716              		.loc 4 689 0
 1717 0135 0F8EA501 		jle	.L131
 1717      0000
 1718 013b 8D40FF   		leal	-1(%rax), %eax
 1719              	.LVL197:
 1720 013e 31DB     		xorl	%ebx, %ebx
 1721              	.LVL198:
 1722 0140 4531FF   		xorl	%r15d, %r15d
 1723 0143 41BD0000 		movl	$.LC25, %r13d
 1723      0000
 1724 0149 4C8D34C5 		leaq	8(,%rax,8), %r14
 1724      08000000 
 1725 0151 EB1A     		jmp	.L127
 1726              	.LVL199:
 1727              		.p2align 4,,10
 1728 0153 0F1F4400 		.p2align 3
 1728      00
 1729              	.L121:
 690:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set 
 691:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the wid
 692:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visibl
 693:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 694:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 695:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the 
 696:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as th
 697:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget
 698:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 699:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 701:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 703:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 704:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 705:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 706:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 707:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 708:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1730              		.loc 4 708 0 discriminator 2
 1731 0158 4889C7   		movq	%rax, %rdi
 1732 015b 4883C308 		addq	$8, %rbx
 1733 015f E8000000 		call	free
 1733      00
 1734              	.LVL200:
 692:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 1735              		.loc 4 692 0 discriminator 2
 1736 0164 4939DE   		cmpq	%rbx, %r14
 1737 0167 0F840B01 		je	.L152
 1737      0000
 1738              	.LVL201:
 1739              	.L127:
 693:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1740              		.loc 4 693 0
 1741 016d 488B4424 		movq	24(%rsp), %rax
 1741      18
 1742 0172 B9030000 		movl	$3, %ecx
 1742      00
 1743 0177 4C89EF   		movq	%r13, %rdi
 1744 017a 488B0418 		movq	(%rax,%rbx), %rax
 1745 017e 488D5013 		leaq	19(%rax), %rdx
 1746 0182 4889D6   		movq	%rdx, %rsi
 1747 0185 F3A6     		repz cmpsb
 1748 0187 74CF     		je	.L121
 1749              	.LVL202:
 1750              	.LBB212:
 1751              	.LBB213:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 1752              		.loc 8 65 0
 1753 0189 4883EC08 		subq	$8, %rsp
 1754              		.cfi_def_cfa_offset 6264
 1755 018d B9001000 		movl	$4096, %ecx
 1755      00
 1756 0192 41B80000 		movl	$.LC26, %r8d
 1756      0000
 1757 0198 52       		pushq	%rdx
 1758              		.cfi_def_cfa_offset 6272
 1759 0199 4C8B8DA0 		movq	672(%rbp), %r9
 1759      020000
 1760 01a0 BA010000 		movl	$1, %edx
 1760      00
 1761 01a5 BE001000 		movl	$4096, %esi
 1761      00
 1762 01aa 31C0     		xorl	%eax, %eax
 1763 01ac 488DBC24 		leaq	2096(%rsp), %rdi
 1763      30080000 
 1764              	.LVL203:
 1765 01b4 E8000000 		call	__snprintf_chk
 1765      00
 1766              	.LVL204:
 1767              	.LBE213:
 1768              	.LBE212:
 697:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 1769              		.loc 4 697 0
 1770 01b9 488DBC24 		leaq	2096(%rsp), %rdi
 1770      30080000 
 1771 01c1 31F6     		xorl	%esi, %esi
 1772 01c3 E8000000 		call	_ZN12Fl_File_Icon4findEPKci
 1772      00
 1773              	.LVL205:
 698:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1774              		.loc 4 698 0
 1775 01c8 4885C0   		testq	%rax, %rax
 697:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 1776              		.loc 4 697 0
 1777 01cb 4889C1   		movq	%rax, %rcx
 1778              	.LVL206:
 698:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1779              		.loc 4 698 0
 1780 01ce 5A       		popq	%rdx
 1781              		.cfi_def_cfa_offset 6264
 1782 01cf 5E       		popq	%rsi
 1783              		.cfi_def_cfa_offset 6256
 1784 01d0 7406     		je	.L122
 1785              	.LVL207:
 698:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1786              		.loc 4 698 0 is_stmt 0 discriminator 1
 1787 01d2 83781005 		cmpl	$5, 16(%rax)
 1788 01d6 741B     		je	.L123
 1789              	.LVL208:
 1790              	.L122:
 699:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 1791              		.loc 4 699 0 is_stmt 1 discriminator 4
 1792 01d8 488DBC24 		leaq	2080(%rsp), %rdi
 1792      20080000 
 1793 01e0 48894C24 		movq	%rcx, 8(%rsp)
 1793      08
 1794 01e5 E8000000 		call	_Z24_fl_filename_isdir_quickPKc
 1794      00
 1795              	.LVL209:
 698:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1796              		.loc 4 698 0 discriminator 4
 1797 01ea 85C0     		testl	%eax, %eax
 1798 01ec 488B4C24 		movq	8(%rsp), %rcx
 1798      08
 1799 01f1 742D     		je	.L153
 1800              	.LVL210:
 1801              	.L123:
 701:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 1802              		.loc 4 701 0
 1803 01f3 488B4424 		movq	24(%rsp), %rax
 1803      18
 700:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1804              		.loc 4 700 0
 1805 01f8 4183C701 		addl	$1, %r15d
 1806              	.LVL211:
 701:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 1807              		.loc 4 701 0
 1808 01fc 4889EF   		movq	%rbp, %rdi
 1809 01ff 4489FE   		movl	%r15d, %esi
 1810 0202 488B1418 		movq	(%rax,%rbx), %rdx
 1811 0206 4883C213 		addq	$19, %rdx
 1812 020a E8000000 		call	_ZN10Fl_Browser6insertEiPKcPv
 1812      00
 1813              	.LVL212:
 1814 020f 488B4424 		movq	24(%rsp), %rax
 1814      18
 1815 0214 488B0418 		movq	(%rax,%rbx), %rax
 1816 0218 E93BFFFF 		jmp	.L121
 1816      FF
 1817              	.LVL213:
 1818 021d 0F1F00   		.p2align 4,,10
 1819              		.p2align 3
 1820              	.L153:
 702:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1821              		.loc 4 702 0
 1822 0220 8B859C02 		movl	668(%rbp), %eax
 1822      0000
 1823 0226 85C0     		testl	%eax, %eax
 1824 0228 745E     		je	.L154
 1825              	.LVL214:
 1826              	.L126:
 1827 022a 488B4424 		movq	24(%rsp), %rax
 1827      18
 1828 022f 488B0418 		movq	(%rax,%rbx), %rax
 1829 0233 E920FFFF 		jmp	.L121
 1829      FF
 1830              	.LVL215:
 1831 0238 0F1F8400 		.p2align 4,,10
 1831      00000000 
 1832              		.p2align 3
 1833              	.L116:
 1834              	.LBE211:
 1835              	.LBB214:
 656:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the te
 1836              		.loc 4 656 0
 1837 0240 4889DF   		movq	%rbx, %rdi
 1838 0243 E8000000 		call	fclose
 1838      00
 1839              	.LVL216:
 1840              	.L146:
 1841              	.LBE214:
 1842              	.LBB215:
 1843 0248 4489E0   		movl	%r12d, %eax
 1844              	.LVL217:
 1845              	.L109:
 1846              	.LBE215:
 1847              	.LBE207:
 709:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 710:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change
 711:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method inst
 712:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 713:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 714:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 715:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 1848              		.loc 4 715 0
 1849 024b 488B8C24 		movq	6184(%rsp), %rcx
 1849      28180000 
 1850 0253 6448330C 		xorq	%fs:40, %rcx
 1850      25280000 
 1850      00
 1851 025c 0F850501 		jne	.L155
 1851      0000
 1852 0262 4881C438 		addq	$6200, %rsp
 1852      180000
 1853              		.cfi_remember_state
 1854              		.cfi_def_cfa_offset 56
 1855 0269 5B       		popq	%rbx
 1856              		.cfi_def_cfa_offset 48
 1857 026a 5D       		popq	%rbp
 1858              		.cfi_def_cfa_offset 40
 1859              	.LVL218:
 1860 026b 415C     		popq	%r12
 1861              		.cfi_def_cfa_offset 32
 1862 026d 415D     		popq	%r13
 1863              		.cfi_def_cfa_offset 24
 1864 026f 415E     		popq	%r14
 1865              		.cfi_def_cfa_offset 16
 1866 0271 415F     		popq	%r15
 1867              		.cfi_def_cfa_offset 8
 1868 0273 C3       		ret
 1869              	.LVL219:
 1870              		.p2align 4,,10
 1871 0274 0F1F4000 		.p2align 3
 1872              	.L152:
 1873              		.cfi_restore_state
 1874              	.LBB218:
 1875              	.LBB216:
 711:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1876              		.loc 4 711 0
 1877 0278 488B7C24 		movq	24(%rsp), %rdi
 1877      18
 1878 027d E8000000 		call	free
 1878      00
 1879              	.LVL220:
 1880 0282 EBC4     		jmp	.L146
 1881              	.LVL221:
 1882              		.p2align 4,,10
 1883 0284 0F1F4000 		.p2align 3
 1884              	.L154:
 703:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 1885              		.loc 4 703 0 discriminator 1
 1886 0288 488B4424 		movq	24(%rsp), %rax
 1886      18
 1887 028d 488BB5B0 		movq	688(%rbp), %rsi
 1887      020000
 1888 0294 48894C24 		movq	%rcx, 8(%rsp)
 1888      08
 1889              	.LVL222:
 1890 0299 488B3C18 		movq	(%rax,%rbx), %rdi
 1891 029d 4883C713 		addq	$19, %rdi
 1892 02a1 E8000000 		call	_Z17fl_filename_matchPKcS0_
 1892      00
 1893              	.LVL223:
 702:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 1894              		.loc 4 702 0 discriminator 1
 1895 02a6 85C0     		testl	%eax, %eax
 1896 02a8 488B4C24 		movq	8(%rsp), %rcx
 1896      08
 1897 02ad 0F8477FF 		je	.L126
 1897      FFFF
 704:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 1898              		.loc 4 704 0
 1899 02b3 488B4424 		movq	24(%rsp), %rax
 1899      18
 1900 02b8 4889CA   		movq	%rcx, %rdx
 1901 02bb 4889EF   		movq	%rbp, %rdi
 1902 02be 488B3418 		movq	(%rax,%rbx), %rsi
 1903 02c2 4883C613 		addq	$19, %rsi
 1904 02c6 E8000000 		call	_ZN10Fl_Browser3addEPKcPv
 1904      00
 1905              	.LVL224:
 1906 02cb 488B4424 		movq	24(%rsp), %rax
 1906      18
 1907 02d0 488B0418 		movq	(%rax,%rbx), %rax
 1908 02d4 E97FFEFF 		jmp	.L121
 1908      FF
 1909              	.LVL225:
 1910 02d9 0F1F8000 		.p2align 4,,10
 1910      000000
 1911              		.p2align 3
 1912              	.L131:
 1913              	.LBE216:
 1914              	.LBE218:
 448:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 1915              		.loc 4 448 0
 1916 02e0 31C0     		xorl	%eax, %eax
 1917 02e2 E964FFFF 		jmp	.L109
 1917      FF
 1918              	.LVL226:
 1919              	.L150:
 1920              	.LBB219:
 1921              	.LBB217:
 459:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 1922              		.loc 4 459 0
 1923 02e7 BE050000 		movl	$5, %esi
 1923      00
 1924 02ec BF000000 		movl	$.LC17, %edi
 1924      00
 1925 02f1 E8000000 		call	_ZN12Fl_File_Icon4findEPKci
 1925      00
 1926              	.LVL227:
 1927 02f6 4989C5   		movq	%rax, %r13
 1928              	.LVL228:
 1929 02f9 E968FDFF 		jmp	.L111
 1929      FF
 1930              	.LVL229:
 1931              	.L151:
 629:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 1932              		.loc 4 629 0
 1933 02fe BE000000 		movl	$.LC18, %esi
 1933      00
 1934 0303 BF000000 		movl	$.LC20, %edi
 1934      00
 1935 0308 E8000000 		call	fl_fopen
 1935      00
 1936              	.LVL230:
 630:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1937              		.loc 4 630 0
 1938 030d 4885C0   		testq	%rax, %rax
 629:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is call
 1939              		.loc 4 629 0
 1940 0310 4889C3   		movq	%rax, %rbx
 1941              	.LVL231:
 630:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1942              		.loc 4 630 0
 1943 0313 0F8568FD 		jne	.L128
 1943      FFFF
 631:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 1944              		.loc 4 631 0
 1945 0319 BE000000 		movl	$.LC18, %esi
 1945      00
 1946 031e BF000000 		movl	$.LC21, %edi
 1946      00
 1947 0323 E8000000 		call	fl_fopen
 1947      00
 1948              	.LVL232:
 632:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 1949              		.loc 4 632 0
 1950 0328 4885C0   		testq	%rax, %rax
 631:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default val
 1951              		.loc 4 631 0
 1952 032b 4889C3   		movq	%rax, %rbx
 1953              	.LVL233:
 632:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 1954              		.loc 4 632 0
 1955 032e 0F854DFD 		jne	.L128
 1955      FFFF
 633:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1956              		.loc 4 633 0
 1957 0334 BE000000 		movl	$.LC18, %esi
 1957      00
 1958 0339 BF000000 		movl	$.LC22, %edi
 1958      00
 1959 033e E8000000 		call	fl_fopen
 1959      00
 1960              	.LVL234:
 635:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 1961              		.loc 4 635 0
 1962 0343 4885C0   		testq	%rax, %rax
 633:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1963              		.loc 4 633 0
 1964 0346 4889C3   		movq	%rax, %rbx
 1965              	.LVL235:
 635:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 1966              		.loc 4 635 0
 1967 0349 0F8532FD 		jne	.L128
 1967      FFFF
 661:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclass
 1968              		.loc 4 661 0
 1969 034f 4C89EA   		movq	%r13, %rdx
 1970 0352 BE000000 		movl	$.LC23, %esi
 1970      00
 1971 0357 4889EF   		movq	%rbp, %rdi
 1972 035a E8000000 		call	_ZN10Fl_Browser3addEPKcPv
 1972      00
 1973              	.LVL236:
 457:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1974              		.loc 4 457 0
 1975 035f 4531E4   		xorl	%r12d, %r12d
 1976              	.LVL237:
 1977 0362 E9E1FEFF 		jmp	.L146
 1977      FF
 1978              	.LVL238:
 1979              	.L155:
 1980              	.LBE217:
 1981              	.LBE219:
 1982              		.loc 4 715 0
 1983 0367 E8000000 		call	__stack_chk_fail
 1983      00
 1984              	.LVL239:
 1985              		.cfi_endproc
 1986              	.LFE584:
 1988              		.section	.text.unlikely._ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E
 1989              	.LCOLDE27:
 1990              		.section	.text._ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E
 1991              	.LHOTE27:
 1992              		.section	.text.unlikely._ZN15Fl_File_Browser6filterEPKc,"ax",@progbits
 1993              		.align 2
 1994              	.LCOLDB28:
 1995              		.section	.text._ZN15Fl_File_Browser6filterEPKc,"ax",@progbits
 1996              	.LHOTB28:
 1997              		.align 2
 1998              		.p2align 4,,15
 1999              		.globl	_ZN15Fl_File_Browser6filterEPKc
 2001              	_ZN15Fl_File_Browser6filterEPKc:
 2002              	.LFB585:
 716:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the
 717:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 718:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 719:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 720:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 722:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 723:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 724:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 2003              		.loc 4 724 0
 2004              		.cfi_startproc
 2005              	.LVL240:
 725:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 726:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 727:fltk-1.3.4-1/src/Fl_File_Browser.cxx ****  710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are a
 2006              		.loc 4 727 0
 2007 0000 4885F6   		testq	%rsi, %rsi
 2008 0003 B8000000 		movl	$.LC14, %eax
 2008      00
 2009 0008 480F44F0 		cmove	%rax, %rsi
 2010              	.LVL241:
 2011 000c 4889B7B0 		movq	%rsi, 688(%rdi)
 2011      020000
 2012 0013 C3       		ret
 2013              		.cfi_endproc
 2014              	.LFE585:
 2016              		.section	.text.unlikely._ZN15Fl_File_Browser6filterEPKc
 2017              	.LCOLDE28:
 2018              		.section	.text._ZN15Fl_File_Browser6filterEPKc
 2019              	.LHOTE28:
 2020              		.section	.text.unlikely._ZN15Fl_File_BrowserD2Ev,"axG",@progbits,_ZN15Fl_File_BrowserD5Ev,comdat
 2021              		.align 2
 2022              	.LCOLDB29:
 2023              		.section	.text._ZN15Fl_File_BrowserD2Ev,"axG",@progbits,_ZN15Fl_File_BrowserD5Ev,comdat
 2024              	.LHOTB29:
 2025              		.align 2
 2026              		.p2align 4,,15
 2027              		.weak	_ZN15Fl_File_BrowserD2Ev
 2029              	_ZN15Fl_File_BrowserD2Ev:
 2030              	.LFB587:
  39:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   
 2031              		.loc 3 39 0
 2032              		.cfi_startproc
 2033              	.LVL242:
 2034 0000 53       		pushq	%rbx
 2035              		.cfi_def_cfa_offset 16
 2036              		.cfi_offset 3, -16
  39:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   
 2037              		.loc 3 39 0
 2038 0001 4889FB   		movq	%rdi, %rbx
 2039              	.LBB226:
 2040              	.LBB227:
 2041              	.LBB228:
 189:fltk-1.3.4-1/FL/Fl_Browser.H ****   int visible(int line) const ;
 190:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 191:fltk-1.3.4-1/FL/Fl_Browser.H ****   int value() const ;
 192:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 193:fltk-1.3.4-1/FL/Fl_Browser.H ****     Sets the browser's value(), which selects the specified \p line.
 194:fltk-1.3.4-1/FL/Fl_Browser.H ****     This is the same as calling select(line).
 195:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see select(), selected(), value(), item_select(), item_selected()
 196:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 197:fltk-1.3.4-1/FL/Fl_Browser.H ****   void value(int line) { select(line); }
 198:fltk-1.3.4-1/FL/Fl_Browser.H ****   const char* text(int line) const ;
 199:fltk-1.3.4-1/FL/Fl_Browser.H ****   void text(int line, const char* newtext);
 200:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* data(int line) const ;
 201:fltk-1.3.4-1/FL/Fl_Browser.H ****   void data(int line, void* d);
 202:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 203:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Browser(int X, int Y, int W, int H, const char *L = 0);
 204:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 205:fltk-1.3.4-1/FL/Fl_Browser.H ****     The destructor deletes all list items and destroys the browser.
 206:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 207:fltk-1.3.4-1/FL/Fl_Browser.H ****   ~Fl_Browser() { clear(); }
 2042              		.loc 6 207 0
 2043 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 2043      000000
 2044 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 2044      00
 2045              	.LVL243:
 2046              	.LBB229:
 2047              	.LBB230:
 2048              		.file 9 "fltk-1.3.4-1/FL/Fl_Browser_.H"
   1:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
   2:fltk-1.3.4-1/FL/Fl_Browser_.H **** // "$Id: Fl_Browser_.H 11464 2016-03-29 11:34:10Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
   4:fltk-1.3.4-1/FL/Fl_Browser_.H **** // Common browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
   6:fltk-1.3.4-1/FL/Fl_Browser_.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
   8:fltk-1.3.4-1/FL/Fl_Browser_.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Browser_.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Browser_.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
  12:fltk-1.3.4-1/FL/Fl_Browser_.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
  14:fltk-1.3.4-1/FL/Fl_Browser_.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
  16:fltk-1.3.4-1/FL/Fl_Browser_.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
  18:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  19:fltk-1.3.4-1/FL/Fl_Browser_.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Browser_.H ****    Fl_Browser_ widget . */
  21:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  22:fltk-1.3.4-1/FL/Fl_Browser_.H **** // Yes, I know this should be a template...
  23:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  24:fltk-1.3.4-1/FL/Fl_Browser_.H **** #ifndef Fl_Browser__H
  25:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define Fl_Browser__H
  26:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  27:fltk-1.3.4-1/FL/Fl_Browser_.H **** #ifndef Fl_Group_H
  28:fltk-1.3.4-1/FL/Fl_Browser_.H **** #include "Fl_Group.H"
  29:fltk-1.3.4-1/FL/Fl_Browser_.H **** #endif
  30:fltk-1.3.4-1/FL/Fl_Browser_.H **** #include "Fl_Scrollbar.H"
  31:fltk-1.3.4-1/FL/Fl_Browser_.H **** #include <FL/Fl.H>		// Fl::scrollbar_size()
  32:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  33:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_NORMAL_BROWSER	0	/**< type() of Fl_Browser */
  34:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_SELECT_BROWSER	1	/**< type() of FL_Select_Browser */
  35:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_HOLD_BROWSER		2	/**< type() of Fl_Hold_Browser */
  36:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_MULTI_BROWSER	3	/**< type() of Fl_Multi_Browser */
  37:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  38:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_SORT_ASCENDING	0	/**< sort browser items in ascending alphabetic order. */
  39:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_SORT_DESCENDING	1	/**< sort in descending order */
  40:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  41:fltk-1.3.4-1/FL/Fl_Browser_.H **** /**
  42:fltk-1.3.4-1/FL/Fl_Browser_.H ****   This is the base class for browsers.  To be useful it must be
  43:fltk-1.3.4-1/FL/Fl_Browser_.H ****   subclassed and several virtual functions defined.  The Forms-compatible
  44:fltk-1.3.4-1/FL/Fl_Browser_.H ****   browser and the file chooser's browser are subclassed off of this.
  45:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  46:fltk-1.3.4-1/FL/Fl_Browser_.H ****   This has been designed so that the subclass has complete control
  47:fltk-1.3.4-1/FL/Fl_Browser_.H ****   over the storage of the data, although because next() and 
  48:fltk-1.3.4-1/FL/Fl_Browser_.H ****   prev() functions are used to index, it works best as a linked list
  49:fltk-1.3.4-1/FL/Fl_Browser_.H ****   or as a large block of characters in which the line breaks must be
  50:fltk-1.3.4-1/FL/Fl_Browser_.H ****   searched for.
  51:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  52:fltk-1.3.4-1/FL/Fl_Browser_.H ****   A great deal of work has been done so that the "height" of a data
  53:fltk-1.3.4-1/FL/Fl_Browser_.H ****   object does not need to be determined until it is drawn.  This is
  54:fltk-1.3.4-1/FL/Fl_Browser_.H ****   useful if actually figuring out the size of an object requires
  55:fltk-1.3.4-1/FL/Fl_Browser_.H ****   accessing image data or doing stat() on a file or doing some
  56:fltk-1.3.4-1/FL/Fl_Browser_.H ****   other slow operation.
  57:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  58:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Keyboard navigation of browser items
  59:fltk-1.3.4-1/FL/Fl_Browser_.H ****   ------------------------------------
  60:fltk-1.3.4-1/FL/Fl_Browser_.H ****   The keyboard navigation of browser items is only possible if
  61:fltk-1.3.4-1/FL/Fl_Browser_.H ****   visible_focus() is enabled. If disabled, the widget rejects keyboard focus;
  62:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Tab and Shift-Tab focus navigation will skip the widget.
  63:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  64:fltk-1.3.4-1/FL/Fl_Browser_.H ****   In 'Select' and 'Normal' mode, the widget rejects keyboard focus;
  65:fltk-1.3.4-1/FL/Fl_Browser_.H ****   no navigation keys are supported (other than scrollbar positioning).
  66:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  67:fltk-1.3.4-1/FL/Fl_Browser_.H ****   In 'Hold' mode, the widget accepts keyboard focus, and Up/Down arrow
  68:fltk-1.3.4-1/FL/Fl_Browser_.H ****   keys can navigate the selected item.
  69:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  70:fltk-1.3.4-1/FL/Fl_Browser_.H ****   In 'Multi' mode, the widget accepts keyboard focus, and Up/Down arrow
  71:fltk-1.3.4-1/FL/Fl_Browser_.H ****   keys navigate the focus box; Space toggles the current item's selection,
  72:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Enter selects only the current item (deselects all others).  If Shift
  73:fltk-1.3.4-1/FL/Fl_Browser_.H ****   (or Ctrl) is combined with Up/Down arrow keys, the current item's
  74:fltk-1.3.4-1/FL/Fl_Browser_.H ****   selection state is extended to the next item. In this way one can
  75:fltk-1.3.4-1/FL/Fl_Browser_.H ****   extend a selection or de-selection.
  76:fltk-1.3.4-1/FL/Fl_Browser_.H **** */
  77:fltk-1.3.4-1/FL/Fl_Browser_.H **** class FL_EXPORT Fl_Browser_ : public Fl_Group {
 2049              		.loc 9 77 0
 2050 0010 488DBBB0 		leaq	432(%rbx), %rdi
 2050      010000
 2051 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 2051      000000
 2052 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 2052      00
 2053              	.LVL244:
 2054 0023 488DBBF8 		leaq	248(%rbx), %rdi
 2054      000000
 2055 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 2055      00
 2056              	.LVL245:
 2057 002f 4889DF   		movq	%rbx, %rdi
 2058              	.LBE230:
 2059              	.LBE229:
 2060              	.LBE228:
 2061              	.LBE227:
 2062              	.LBE226:
  39:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   
 2063              		.loc 3 39 0
 2064 0032 5B       		popq	%rbx
 2065              		.cfi_def_cfa_offset 8
 2066              	.LVL246:
 2067              	.LBB235:
 2068              	.LBB234:
 2069              	.LBB233:
 2070              	.LBB232:
 2071              	.LBB231:
 2072              		.loc 9 77 0
 2073 0033 E9000000 		jmp	_ZN8Fl_GroupD2Ev
 2073      00
 2074              	.LVL247:
 2075              	.LBE231:
 2076              	.LBE232:
 2077              	.LBE233:
 2078              	.LBE234:
 2079              	.LBE235:
 2080              		.cfi_endproc
 2081              	.LFE587:
 2083              		.section	.text.unlikely._ZN15Fl_File_BrowserD2Ev,"axG",@progbits,_ZN15Fl_File_BrowserD5Ev,comdat
 2084              	.LCOLDE29:
 2085              		.section	.text._ZN15Fl_File_BrowserD2Ev,"axG",@progbits,_ZN15Fl_File_BrowserD5Ev,comdat
 2086              	.LHOTE29:
 2087              		.weak	_ZN15Fl_File_BrowserD1Ev
 2088              		.set	_ZN15Fl_File_BrowserD1Ev,_ZN15Fl_File_BrowserD2Ev
 2089              		.section	.text.unlikely._ZN15Fl_File_BrowserD0Ev,"axG",@progbits,_ZN15Fl_File_BrowserD5Ev,comdat
 2090              		.align 2
 2091              	.LCOLDB30:
 2092              		.section	.text._ZN15Fl_File_BrowserD0Ev,"axG",@progbits,_ZN15Fl_File_BrowserD5Ev,comdat
 2093              	.LHOTB30:
 2094              		.align 2
 2095              		.p2align 4,,15
 2096              		.weak	_ZN15Fl_File_BrowserD0Ev
 2098              	_ZN15Fl_File_BrowserD0Ev:
 2099              	.LFB589:
  39:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   
 2100              		.loc 3 39 0
 2101              		.cfi_startproc
 2102              	.LVL248:
 2103 0000 53       		pushq	%rbx
 2104              		.cfi_def_cfa_offset 16
 2105              		.cfi_offset 3, -16
  39:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   
 2106              		.loc 3 39 0
 2107 0001 4889FB   		movq	%rdi, %rbx
 2108              	.LBB243:
 2109              	.LBB244:
 2110              	.LBB245:
 2111              	.LBB246:
 2112              		.loc 6 207 0
 2113 0004 48C70700 		movq	$_ZTV10Fl_Browser+16, (%rdi)
 2113      000000
 2114 000b E8000000 		call	_ZN10Fl_Browser5clearEv
 2114      00
 2115              	.LVL249:
 2116              	.LBB247:
 2117              	.LBB248:
 2118              		.loc 9 77 0
 2119 0010 488DBBB0 		leaq	432(%rbx), %rdi
 2119      010000
 2120 0017 48C70300 		movq	$_ZTV11Fl_Browser_+16, (%rbx)
 2120      000000
 2121 001e E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 2121      00
 2122              	.LVL250:
 2123 0023 488DBBF8 		leaq	248(%rbx), %rdi
 2123      000000
 2124 002a E8000000 		call	_ZN12Fl_ScrollbarD1Ev
 2124      00
 2125              	.LVL251:
 2126 002f 4889DF   		movq	%rbx, %rdi
 2127 0032 E8000000 		call	_ZN8Fl_GroupD2Ev
 2127      00
 2128              	.LVL252:
 2129              	.LBE248:
 2130              	.LBE247:
 2131              	.LBE246:
 2132              	.LBE245:
 2133              	.LBE244:
 2134              	.LBE243:
  39:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   
 2135              		.loc 3 39 0
 2136 0037 4889DF   		movq	%rbx, %rdi
 2137 003a 5B       		popq	%rbx
 2138              		.cfi_def_cfa_offset 8
 2139              	.LVL253:
 2140 003b E9000000 		jmp	_ZdlPv
 2140      00
 2141              	.LVL254:
 2142              		.cfi_endproc
 2143              	.LFE589:
 2145              		.section	.text.unlikely._ZN15Fl_File_BrowserD0Ev,"axG",@progbits,_ZN15Fl_File_BrowserD5Ev,comdat
 2146              	.LCOLDE30:
 2147              		.section	.text._ZN15Fl_File_BrowserD0Ev,"axG",@progbits,_ZN15Fl_File_BrowserD5Ev,comdat
 2148              	.LHOTE30:
 2149              		.weak	_ZTS15Fl_File_Browser
 2150              		.section	.rodata._ZTS15Fl_File_Browser,"aG",@progbits,_ZTS15Fl_File_Browser,comdat
 2151              		.align 16
 2154              	_ZTS15Fl_File_Browser:
 2155 0000 3135466C 		.string	"15Fl_File_Browser"
 2155      5F46696C 
 2155      655F4272 
 2155      6F777365 
 2155      7200
 2156              		.weak	_ZTI15Fl_File_Browser
 2157              		.section	.rodata._ZTI15Fl_File_Browser,"aG",@progbits,_ZTI15Fl_File_Browser,comdat
 2158              		.align 8
 2161              	_ZTI15Fl_File_Browser:
 2162 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 2162      00000000 
 2163 0008 00000000 		.quad	_ZTS15Fl_File_Browser
 2163      00000000 
 2164 0010 00000000 		.quad	_ZTI10Fl_Browser
 2164      00000000 
 2165              		.weak	_ZTV15Fl_File_Browser
 2166              		.section	.rodata._ZTV15Fl_File_Browser,"aG",@progbits,_ZTV15Fl_File_Browser,comdat
 2167              		.align 8
 2170              	_ZTV15Fl_File_Browser:
 2171 0000 00000000 		.quad	0
 2171      00000000 
 2172 0008 00000000 		.quad	_ZTI15Fl_File_Browser
 2172      00000000 
 2173 0010 00000000 		.quad	_ZN15Fl_File_BrowserD1Ev
 2173      00000000 
 2174 0018 00000000 		.quad	_ZN15Fl_File_BrowserD0Ev
 2174      00000000 
 2175 0020 00000000 		.quad	_ZN11Fl_Browser_4drawEv
 2175      00000000 
 2176 0028 00000000 		.quad	_ZN11Fl_Browser_6handleEi
 2176      00000000 
 2177 0030 00000000 		.quad	_ZN11Fl_Browser_6resizeEiiii
 2177      00000000 
 2178 0038 00000000 		.quad	_ZN10Fl_Browser4showEv
 2178      00000000 
 2179 0040 00000000 		.quad	_ZN10Fl_Browser4hideEv
 2179      00000000 
 2180 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 2180      00000000 
 2181 0050 00000000 		.quad	_ZN9Fl_Widget9as_windowEv
 2181      00000000 
 2182 0058 00000000 		.quad	_ZN9Fl_Widget12as_gl_windowEv
 2182      00000000 
 2183 0060 00000000 		.quad	_ZNK10Fl_Browser10item_firstEv
 2183      00000000 
 2184 0068 00000000 		.quad	_ZNK10Fl_Browser9item_nextEPv
 2184      00000000 
 2185 0070 00000000 		.quad	_ZNK10Fl_Browser9item_prevEPv
 2185      00000000 
 2186 0078 00000000 		.quad	_ZNK10Fl_Browser9item_lastEv
 2186      00000000 
 2187 0080 00000000 		.quad	_ZNK15Fl_File_Browser11item_heightEPv
 2187      00000000 
 2188 0088 00000000 		.quad	_ZNK15Fl_File_Browser10item_widthEPv
 2188      00000000 
 2189 0090 00000000 		.quad	_ZNK11Fl_Browser_17item_quick_heightEPv
 2189      00000000 
 2190 0098 00000000 		.quad	_ZNK15Fl_File_Browser9item_drawEPviiii
 2190      00000000 
 2191 00a0 00000000 		.quad	_ZNK10Fl_Browser9item_textEPv
 2191      00000000 
 2192 00a8 00000000 		.quad	_ZN10Fl_Browser9item_swapEPvS0_
 2192      00000000 
 2193 00b0 00000000 		.quad	_ZNK10Fl_Browser7item_atEi
 2193      00000000 
 2194 00b8 00000000 		.quad	_ZNK11Fl_Browser_10full_widthEv
 2194      00000000 
 2195 00c0 00000000 		.quad	_ZNK15Fl_File_Browser11full_heightEv
 2195      00000000 
 2196 00c8 00000000 		.quad	_ZNK15Fl_File_Browser11incr_heightEv
 2196      00000000 
 2197 00d0 00000000 		.quad	_ZN10Fl_Browser11item_selectEPvi
 2197      00000000 
 2198 00d8 00000000 		.quad	_ZNK10Fl_Browser13item_selectedEPv
 2198      00000000 
 2199              		.section	.rodata.cst8,"aM",@progbits,8
 2200              		.align 8
 2201              	.LC7:
 2202 0000 33333333 		.long	858993459
 2203 0004 3333E33F 		.long	1071854387
 2204              		.align 8
 2205              	.LC8:
 2206 0008 00000000 		.long	0
 2207 000c 00002040 		.long	1075838976
 2208              		.text
 2209              	.Letext0:
 2210              		.section	.text.unlikely._ZN9Fl_Widget9as_windowEv,"axG",@progbits,_ZN9Fl_Widget9as_windowEv,comdat
 2211              	.Letext_cold0:
 2212              		.file 10 "fltk-1.3.4-1/FL/fl_types.h"
 2213              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 2214              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 2215              		.file 13 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2216              		.file 14 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2217              		.file 15 "/usr/include/stdio.h"
 2218              		.file 16 "/usr/include/libio.h"
 2219              		.file 17 "fltk-1.3.4-1/FL/Fl_File_Icon.H"
 2220              		.file 18 "/usr/include/x86_64-linux-gnu/bits/dirent.h"
 2221              		.file 19 "fltk-1.3.4-1/FL/filename.H"
 2222              		.file 20 "fltk-1.3.4-1/FL/Fl_Device.H"
 2223              		.file 21 "fltk-1.3.4-1/FL/fl_utf8.h"
 2224              		.file 22 "fltk-1.3.4-1/src/flstring.h"
 2225              		.file 23 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_File_Browser.cxx
     /tmp/ccnQzeAp.s:16     .text._ZN9Fl_Widget9as_windowEv:0000000000000000 _ZN9Fl_Widget9as_windowEv
     /tmp/ccnQzeAp.s:41     .text._ZN9Fl_Widget12as_gl_windowEv:0000000000000000 _ZN9Fl_Widget12as_gl_windowEv
     /tmp/ccnQzeAp.s:65     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/ccnQzeAp.s:90     .text._ZNK15Fl_File_Browser11incr_heightEv:0000000000000000 _ZNK15Fl_File_Browser11incr_heightEv
     /tmp/ccnQzeAp.s:118    .text._ZNK15Fl_File_Browser11item_heightEPv:0000000000000000 _ZNK15Fl_File_Browser11item_heightEPv
     /tmp/ccnQzeAp.s:234    .text._ZNK10Fl_Browser7item_atEi:0000000000000000 _ZNK10Fl_Browser7item_atEi
     /tmp/ccnQzeAp.s:259    .text._ZNK15Fl_File_Browser11full_heightEv:0000000000000000 _ZNK15Fl_File_Browser11full_heightEv
     /tmp/ccnQzeAp.s:347    .text._ZNK15Fl_File_Browser10item_widthEPv:0000000000000000 _ZNK15Fl_File_Browser10item_widthEPv
     /tmp/ccnQzeAp.s:679    .text._ZNK15Fl_File_Browser9item_drawEPviiii:0000000000000000 _ZNK15Fl_File_Browser9item_drawEPviiii
     /tmp/ccnQzeAp.s:1408   .text._ZN10Fl_Browser9item_swapEPvS0_:0000000000000000 _ZN10Fl_Browser9item_swapEPvS0_
     /tmp/ccnQzeAp.s:1432   .text._ZN10Fl_Browser4hideEv:0000000000000000 _ZN10Fl_Browser4hideEv
     /tmp/ccnQzeAp.s:1456   .text._ZN10Fl_Browser4showEv:0000000000000000 _ZN10Fl_Browser4showEv
     /tmp/ccnQzeAp.s:1485   .text._ZN15Fl_File_BrowserC2EiiiiPKc:0000000000000000 _ZN15Fl_File_BrowserC2EiiiiPKc
     /tmp/ccnQzeAp.s:2170   .rodata._ZTV15Fl_File_Browser:0000000000000000 _ZTV15Fl_File_Browser
     /tmp/ccnQzeAp.s:1485   .text._ZN15Fl_File_BrowserC2EiiiiPKc:0000000000000000 _ZN15Fl_File_BrowserC1EiiiiPKc
     /tmp/ccnQzeAp.s:1562   .text._ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E:0000000000000000 _ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E
     /tmp/ccnQzeAp.s:2001   .text._ZN15Fl_File_Browser6filterEPKc:0000000000000000 _ZN15Fl_File_Browser6filterEPKc
     /tmp/ccnQzeAp.s:2029   .text._ZN15Fl_File_BrowserD2Ev:0000000000000000 _ZN15Fl_File_BrowserD2Ev
     /tmp/ccnQzeAp.s:2029   .text._ZN15Fl_File_BrowserD2Ev:0000000000000000 _ZN15Fl_File_BrowserD1Ev
     /tmp/ccnQzeAp.s:2098   .text._ZN15Fl_File_BrowserD0Ev:0000000000000000 _ZN15Fl_File_BrowserD0Ev
     /tmp/ccnQzeAp.s:2154   .rodata._ZTS15Fl_File_Browser:0000000000000000 _ZTS15Fl_File_Browser
     /tmp/ccnQzeAp.s:2161   .rodata._ZTI15Fl_File_Browser:0000000000000000 _ZTI15Fl_File_Browser
     /tmp/ccnQzeAp.s:2201   .rodata.cst8:0000000000000000 .LC7
     /tmp/ccnQzeAp.s:2205   .rodata.cst8:0000000000000008 .LC8
                           .group:0000000000000000 _ZN15Fl_File_BrowserD5Ev
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
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
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
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
fl_graphics_driver
_ZN12Fl_File_Icon6first_E
_ZNK10Fl_Browser9find_lineEi
strlen
strchr
_Z8fl_widthPKc
__stack_chk_fail
_ZNK9Fl_Widget8active_rEv
_ZN12Fl_File_Icon4drawEiiiiji
_Z7fl_drawPKciiiijP8Fl_Imagei
_Z11fl_inactivej
_Z11fl_contrastjj
_ZN10Fl_Browser4swapEP8FL_BLINES1_
_ZN9Fl_Widget4hideEv
_ZN9Fl_Widget4showEv
_ZN10Fl_BrowserC2EiiiiPKc
_ZN10Fl_Browser5clearEv
_ZN12Fl_File_Icon4findEPKci
fl_fopen
_ZN10Fl_Browser3addEPKcPv
fgets
sscanf
fl_strlcat
_Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
free
__snprintf_chk
_Z24_fl_filename_isdir_quickPKc
_ZN10Fl_Browser6insertEiPKcPv
fclose
_Z17fl_filename_matchPKcS0_
_ZTV10Fl_Browser
_ZTV11Fl_Browser_
_ZN12Fl_ScrollbarD1Ev
_ZN8Fl_GroupD2Ev
_ZdlPv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI10Fl_Browser
_ZN11Fl_Browser_4drawEv
_ZN11Fl_Browser_6handleEi
_ZN11Fl_Browser_6resizeEiiii
_ZNK10Fl_Browser10item_firstEv
_ZNK10Fl_Browser9item_nextEPv
_ZNK10Fl_Browser9item_prevEPv
_ZNK10Fl_Browser9item_lastEv
_ZNK11Fl_Browser_17item_quick_heightEPv
_ZNK10Fl_Browser9item_textEPv
_ZNK11Fl_Browser_10full_widthEv
_ZN10Fl_Browser11item_selectEPvi
_ZNK10Fl_Browser13item_selectedEPv
