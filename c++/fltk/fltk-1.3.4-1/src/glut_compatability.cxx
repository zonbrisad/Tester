   1              		.file	"glut_compatability.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  14              		.weak	_ZN8Fl_Group8as_groupEv
  16              	_ZN8Fl_Group8as_groupEv:
  17              	.LFB270:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_Group.H"
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
  19              		.loc 1 179 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 179 0
  23 0000 4889F8   		movq	%rdi, %rax
  24 0003 C3       		ret
  25              		.cfi_endproc
  26              	.LFE270:
  28              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
  29              	.LCOLDE0:
  30              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
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
  42              	.LFB325:
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
  51              	.LFE325:
  53              		.section	.text.unlikely._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  54              	.LCOLDE1:
  55              		.section	.text._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windowEv,comdat
  56              	.LHOTE1:
  57              		.section	.text.unlikely._ZN12Fl_Gl_Window12as_gl_windowEv,"axG",@progbits,_ZN12Fl_Gl_Window12as_gl
  58              		.align 2
  59              	.LCOLDB2:
  60              		.section	.text._ZN12Fl_Gl_Window12as_gl_windowEv,"axG",@progbits,_ZN12Fl_Gl_Window12as_gl_windowEv
  61              	.LHOTB2:
  62              		.align 2
  63              		.p2align 4,,15
  64              		.weak	_ZN12Fl_Gl_Window12as_gl_windowEv
  66              	_ZN12Fl_Gl_Window12as_gl_windowEv:
  67              	.LFB338:
  68              		.file 3 "fltk-1.3.4-1/FL/Fl_Gl_Window.H"
   1:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //
   2:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** // "$Id: Fl_Gl_Window.H 11787 2016-06-22 05:44:14Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //
   4:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** // OpenGL header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //
   6:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** // Copyright 1998-2015 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //
   8:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //
  12:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //
  14:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //
  16:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** //
  18:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  19:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    Fl_Gl_Window widget . */
  21:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  22:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** #ifndef Fl_Gl_Window_H
  23:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** #define Fl_Gl_Window_H
  24:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  25:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** #include "Fl_Window.H"
  26:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  27:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** #ifndef GLContext
  28:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** /**
  29:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   Opaque pointer type to hide system specific implementation.
  30:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** */
  31:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** typedef void* GLContext; // actually a GLXContext or HGLDC
  32:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** #endif
  33:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  34:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** class Fl_Gl_Choice; // structure to hold result of glXChooseVisual
  35:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  36:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** /**
  37:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   The Fl_Gl_Window widget sets things up so OpenGL works.
  38:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   
  39:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   It also keeps an OpenGL "context" for that window, so that changes to the
  40:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   lighting and projection may be reused between redraws. Fl_Gl_Window
  41:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   also flushes the OpenGL streams and swaps buffers after draw() returns.
  42:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  43:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   OpenGL hardware typically provides some overlay bit planes, which
  44:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   are very useful for drawing UI controls atop your 3D graphics.  If the
  45:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   overlay hardware is not provided, FLTK tries to simulate the overlay.
  46:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   This works pretty well if your graphics are double buffered, but not
  47:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   very well for single-buffered.
  48:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  49:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   Please note that the FLTK drawing and clipping functions
  50:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   will not work inside an Fl_Gl_Window. All drawing
  51:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   should be done using OpenGL calls exclusively.
  52:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   Even though Fl_Gl_Window is derived from Fl_Group, 
  53:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   it is not useful to add other FLTK Widgets as children,
  54:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   unless those widgets are modified to draw using OpenGL calls.
  55:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** */
  56:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** class FL_EXPORT Fl_Gl_Window : public Fl_Window {
  57:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  58:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int mode_;
  59:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   const int *alist;
  60:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   Fl_Gl_Choice *g;
  61:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   GLContext context_;
  62:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   char valid_f_;
  63:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   char damage1_; // damage() of back buffer
  64:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   virtual void draw_overlay();
  65:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void init();
  66:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  67:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void *overlay;
  68:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void make_overlay();
  69:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   friend class _Fl_Gl_Overlay;
  70:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  71:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   static int can_do(int, const int *);
  72:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int mode(int, const int *);
  73:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   static int gl_plugin_linkage();
  74:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  75:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** public:
  76:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
  77:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void show();
  78:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void show(int a, char **b) {Fl_Window::show(a,b);}
  79:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void flush();
  80:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void hide();
  81:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void resize(int,int,int,int);
  82:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int handle(int);
  83:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   
  84:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
  85:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     Is turned off when FLTK creates a new context for this window or 
  86:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     when the window resizes, and is turned on \e after draw() is called.
  87:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     You can use this inside your draw() method to avoid unnecessarily
  88:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     initializing the OpenGL context. Just do this:
  89:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     \code
  90:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     void mywindow::draw() {
  91:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****      if (!valid()) {
  92:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****        glViewport(0,0,pixel_w(),pixel_h());
  93:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****        glFrustum(...);
  94:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****        ...other initialization...
  95:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****      }
  96:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****      if (!context_valid()) {
  97:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****        ...load textures, etc. ...
  98:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****      }
  99:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****      ... draw your geometry here ...
 100:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     }
 101:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     \endcode
 102:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     
 103:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     You can turn valid() on by calling valid(1).  You
 104:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     should only do this after fixing the transformation inside a draw()
 105:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     or after make_current().  This is done automatically after 
 106:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     draw() returns.
 107:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 108:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   char valid() const {return valid_f_ & 1;}
 109:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 110:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     See char Fl_Gl_Window::valid() const 
 111:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 112:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void valid(char v) {if (v) valid_f_ |= 1; else valid_f_ &= 0xfe;}
 113:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void invalidate();
 114:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
 115:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 116:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     Will only be set if the 
 117:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     OpenGL context is created or recreated. It differs from
 118:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     Fl_Gl_Window::valid() which is also set whenever the context
 119:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     changes size.
 120:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 121:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   char context_valid() const {return valid_f_ & 2;}
 122:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 123:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     See char Fl_Gl_Window::context_valid() const 
 124:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 125:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void context_valid(char v) {if (v) valid_f_ |= 2; else valid_f_ &= 0xfd;}
 126:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
 127:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**  Returns non-zero if the hardware supports the given OpenGL mode. */
 128:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   static int can_do(int m) {return can_do(m,0);}
 129:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**  Returns non-zero if the hardware supports the given OpenGL mode.
 130:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \see Fl_Gl_Window::mode(const int *a) */
 131:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   static int can_do(const int *m) {return can_do(0, m);}
 132:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**  Returns non-zero if the hardware supports the current OpenGL mode. */
 133:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int can_do() {return can_do(mode_,alist);}
 134:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Returns the current OpenGL capabilites of the window.
 135:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    Don't use this if capabilities were set through Fl_Gl_Window::mode(const int *a).
 136:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    */
 137:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   Fl_Mode mode() const {return (Fl_Mode)mode_;}
 138:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 139:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    Set or change the OpenGL capabilites of the window.  The value can be
 140:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    any of the following OR'd together:
 141:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    
 142:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_RGB - RGB color (not indexed)
 143:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_RGB8 - RGB color with at least 8 bits of each color
 144:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_INDEX - Indexed mode
 145:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_SINGLE - not double buffered
 146:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_DOUBLE - double buffered
 147:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_ACCUM - accumulation buffer
 148:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_ALPHA - alpha channel in color
 149:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_DEPTH - depth buffer
 150:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_STENCIL - stencil buffer
 151:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_MULTISAMPLE - multisample antialiasing
 152:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    - \c FL_OPENGL3 - use OpenGL version 3.0 or more when running Mac OS.
 153:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    
 154:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    FL_RGB and FL_SINGLE have a value of zero, so they
 155:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    are "on" unless you give FL_INDEX or FL_DOUBLE.
 156:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    
 157:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    If the desired combination cannot be done, FLTK will try turning off
 158:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    FL_MULTISAMPLE.  If this also fails the show() will call
 159:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    Fl::error() and not show the window.
 160:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    
 161:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    You can change the mode while the window is displayed.  This is most
 162:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    useful for turning double-buffering on and off.  Under X this will
 163:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    cause the old X window to be destroyed and a new one to be created.  If
 164:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    this is a top-level window this will unfortunately also cause the
 165:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    window to blink, raise to the top, and be de-iconized, and the xid()
 166:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    will change, possibly breaking other code.  It is best to make the GL
 167:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    window a child of another window if you wish to do this!
 168:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    
 169:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    mode() must not be called within draw() since it
 170:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    changes the current context.
 171:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    
 172:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \note On the <b>MSWindows and Unix/Linux platforms</b>, FLTK produces
 173:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    contexts for the highest OpenGL version supported by the hardware. Such contexts
 174:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    are also compatible with lower OpenGL versions. On the <b>Apple OS X
 175:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    platform</b>, it is necessary to decide whether the source code targets
 176:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    OpenGL versions higher or lower than 3.0. By default, FLTK
 177:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    creates contexts adequate for OpenGL versions 1 and 2. To get contexts
 178:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    for OpenGL 3.0 or higher, the <tt>FL_OPENGL3</tt> flag and Mac OS
 179:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    version 10.7 or higher are required (in that case the context is NOT 
 180:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    compatible with OpenGL versions 1 or 2). The <tt>FL_OPENGL3</tt> flag has no
 181:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    effect on non-Apple platforms.
 182:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    
 183:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \version the <tt>FL_OPENGL3</tt> flag appeared in version 1.3.4
 184:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    */
 185:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int mode(int a) {return mode(a,0);}
 186:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Set the OpenGL capabilites of the window using platform-specific data.
 187:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \param a zero-ending array of platform-specific attributes and attribute values
 188:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    <p><b>Unix/Linux platform</b>: attributes are GLX attributes adequate for the 3rd argument of
 189:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    the <tt>glXChooseVisual()</tt> function (e.g., <tt>GLX_DOUBLEBUFFER</tt>, defined by including <
 190:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \note What attributes are adequate here is subject to change.
 191:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    The preferred, stable public API is Fl_Gl_Window::mode(int a).
 192:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    <p><b>MSWindows platform</b>: this member function is of no use.
 193:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    <p><b>Mac OS X platform</b>: attributes belong to the <tt>CGLPixelFormatAttribute</tt> enumerati
 194:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    (defined by including <tt><OpenGL/OpenGL.h></tt>, e.g., <tt>kCGLPFADoubleBuffer</tt>)
 195:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    and may be followed by adequate attribute values.
 196:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    */
 197:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int mode(const int *a) {return mode(0, a);}
 198:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Returns a pointer to the GLContext that this window is using.
 199:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \see void context(void* v, int destroy_flag) */
 200:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void* context() const {return context_;}
 201:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void context(void*, int destroy_flag = 0);
 202:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void make_current();
 203:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void swap_buffers();
 204:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void ortho();
 205:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
 206:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 207:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     Returns true if the hardware overlay is possible.  If this is false,
 208:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     FLTK will try to simulate the overlay, with significant loss of update
 209:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     speed.  Calling this will cause FLTK to open the display.
 210:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 211:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int can_do_overlay();
 212:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 213:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     This method causes draw_overlay() to be called at a later time.
 214:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     Initially the overlay is clear. If you want the window to display
 215:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     something in the overlay when it first appears, you must call this
 216:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     immediately after you show() your window.
 217:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 218:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void redraw_overlay();
 219:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void hide_overlay();
 220:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 221:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     The make_overlay_current() method selects the OpenGL context
 222:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     for the widget's overlay.  It is called automatically prior to the 
 223:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     draw_overlay() method being called and can also be used to
 224:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     implement feedback and/or selection within the handle()
 225:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     method.
 226:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 227:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void make_overlay_current();
 228:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
 229:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   // Note: Doxygen docs in Fl_Widget.H to avoid redundancy.
 230:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   virtual Fl_Gl_Window* as_gl_window() {return this;}
  69              		.loc 3 230 0
  70              		.cfi_startproc
  71              	.LVL2:
  72              		.loc 3 230 0
  73 0000 4889F8   		movq	%rdi, %rax
  74 0003 C3       		ret
  75              		.cfi_endproc
  76              	.LFE338:
  78              		.section	.text.unlikely._ZN12Fl_Gl_Window12as_gl_windowEv,"axG",@progbits,_ZN12Fl_Gl_Window12as_gl
  79              	.LCOLDE2:
  80              		.section	.text._ZN12Fl_Gl_Window12as_gl_windowEv,"axG",@progbits,_ZN12Fl_Gl_Window12as_gl_windowEv
  81              	.LHOTE2:
  82              		.section	.text.unlikely._ZL15default_displayv,"ax",@progbits
  83              	.LCOLDB3:
  84              		.section	.text._ZL15default_displayv,"ax",@progbits
  85              	.LHOTB3:
  86              		.p2align 4,,15
  88              	_ZL15default_displayv:
  89              	.LFB387:
  90              		.file 4 "fltk-1.3.4-1/src/glut_compatability.cxx"
   1:fltk-1.3.4-1/src/glut_compatability.cxx ****    1              		.file	"glut_compatability.cxx"
   2:fltk-1.3.4-1/src/glut_compatability.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/glut_compatability.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/glut_compatability.cxx ****    4              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
   5:fltk-1.3.4-1/src/glut_compatability.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/glut_compatability.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/glut_compatability.cxx ****    7              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,
   8:fltk-1.3.4-1/src/glut_compatability.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/glut_compatability.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/glut_compatability.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/glut_compatability.cxx ****   11              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
  12:fltk-1.3.4-1/src/glut_compatability.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/glut_compatability.cxx ****   13              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,
  14:fltk-1.3.4-1/src/glut_compatability.cxx ****   14              		.weak	_ZN8Fl_Group8as_groupEv
  15:fltk-1.3.4-1/src/glut_compatability.cxx ****   16              	_ZN8Fl_Group8as_groupEv:
  16:fltk-1.3.4-1/src/glut_compatability.cxx ****   17              	.LFB270:
  17:fltk-1.3.4-1/src/glut_compatability.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Group.H"
  18:fltk-1.3.4-1/src/glut_compatability.cxx ****    1:fltk-1.3.4-1/FL/Fl_Group.H **** //
  19:fltk-1.3.4-1/src/glut_compatability.cxx ****    2:fltk-1.3.4-1/FL/Fl_Group.H **** // "$Id: Fl_Group.H 10446 2014-11-10 22:09:11Z AlbrechtS $"
  20:fltk-1.3.4-1/src/glut_compatability.cxx ****    3:fltk-1.3.4-1/FL/Fl_Group.H **** //
  21:fltk-1.3.4-1/src/glut_compatability.cxx ****    4:fltk-1.3.4-1/FL/Fl_Group.H **** // Group header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/glut_compatability.cxx ****    5:fltk-1.3.4-1/FL/Fl_Group.H **** //
  23:fltk-1.3.4-1/src/glut_compatability.cxx ****    6:fltk-1.3.4-1/FL/Fl_Group.H **** // Copyright 1998-2010 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/glut_compatability.cxx ****    7:fltk-1.3.4-1/FL/Fl_Group.H **** //
  25:fltk-1.3.4-1/src/glut_compatability.cxx ****    8:fltk-1.3.4-1/FL/Fl_Group.H **** // This library is free software. Distribution and use rights 
  26:fltk-1.3.4-1/src/glut_compatability.cxx ****    9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with thi
  27:fltk-1.3.4-1/src/glut_compatability.cxx ****   10:fltk-1.3.4-1/FL/Fl_Group.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/glut_compatability.cxx ****   11:fltk-1.3.4-1/FL/Fl_Group.H **** //
  29:fltk-1.3.4-1/src/glut_compatability.cxx ****   12:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/glut_compatability.cxx ****   13:fltk-1.3.4-1/FL/Fl_Group.H **** //
  31:fltk-1.3.4-1/src/glut_compatability.cxx ****   14:fltk-1.3.4-1/FL/Fl_Group.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/glut_compatability.cxx ****   15:fltk-1.3.4-1/FL/Fl_Group.H **** //
  33:fltk-1.3.4-1/src/glut_compatability.cxx ****   16:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/glut_compatability.cxx ****   17:fltk-1.3.4-1/FL/Fl_Group.H **** //
  35:fltk-1.3.4-1/src/glut_compatability.cxx ****   18:fltk-1.3.4-1/FL/Fl_Group.H **** 
  36:fltk-1.3.4-1/src/glut_compatability.cxx ****   19:fltk-1.3.4-1/FL/Fl_Group.H **** /* \file
  37:fltk-1.3.4-1/src/glut_compatability.cxx ****   20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
  38:fltk-1.3.4-1/src/glut_compatability.cxx ****   21:fltk-1.3.4-1/FL/Fl_Group.H **** 
  39:fltk-1.3.4-1/src/glut_compatability.cxx ****   22:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Group_H
  40:fltk-1.3.4-1/src/glut_compatability.cxx ****   23:fltk-1.3.4-1/FL/Fl_Group.H **** #define Fl_Group_H
  41:fltk-1.3.4-1/src/glut_compatability.cxx ****   24:fltk-1.3.4-1/FL/Fl_Group.H **** 
  42:fltk-1.3.4-1/src/glut_compatability.cxx ****   25:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Widget_H
  43:fltk-1.3.4-1/src/glut_compatability.cxx ****   26:fltk-1.3.4-1/FL/Fl_Group.H **** #include "Fl_Widget.H"
  44:fltk-1.3.4-1/src/glut_compatability.cxx ****   27:fltk-1.3.4-1/FL/Fl_Group.H **** #endif
  45:fltk-1.3.4-1/src/glut_compatability.cxx ****   28:fltk-1.3.4-1/FL/Fl_Group.H **** 
  46:fltk-1.3.4-1/src/glut_compatability.cxx ****   29:fltk-1.3.4-1/FL/Fl_Group.H **** /**
  47:fltk-1.3.4-1/src/glut_compatability.cxx ****   30:fltk-1.3.4-1/FL/Fl_Group.H ****   The Fl_Group class is the FLTK container widget. It maintain
  48:fltk-1.3.4-1/src/glut_compatability.cxx ****   31:fltk-1.3.4-1/FL/Fl_Group.H ****   an array of child widgets. These children can themselves be 
  49:fltk-1.3.4-1/src/glut_compatability.cxx ****   32:fltk-1.3.4-1/FL/Fl_Group.H ****   including Fl_Group. The most important subclass of Fl_Group
  50:fltk-1.3.4-1/src/glut_compatability.cxx ****   33:fltk-1.3.4-1/FL/Fl_Group.H ****   is Fl_Window, however groups can also be used to control rad
  51:fltk-1.3.4-1/src/glut_compatability.cxx ****   34:fltk-1.3.4-1/FL/Fl_Group.H ****   or to enforce resize behavior.
  52:fltk-1.3.4-1/src/glut_compatability.cxx ****   35:fltk-1.3.4-1/FL/Fl_Group.H **** 
  53:fltk-1.3.4-1/src/glut_compatability.cxx ****   36:fltk-1.3.4-1/FL/Fl_Group.H ****   The tab and arrow keys are used to move the focus between wi
  54:fltk-1.3.4-1/src/glut_compatability.cxx ****   37:fltk-1.3.4-1/FL/Fl_Group.H ****   this group, and to other groups. The only modifier grabbed i
  91              		.loc 4 54 0
  92              		.cfi_startproc
  93 0000 F3C3     		rep ret
  94              		.cfi_endproc
  95              	.LFE387:
  97              		.section	.text.unlikely._ZL15default_displayv
  98              	.LCOLDE3:
  99              		.section	.text._ZL15default_displayv
 100              	.LHOTE3:
 101              		.section	.text.unlikely._ZN14Fl_Glut_Window4drawEv,"ax",@progbits
 102              		.align 2
 103              	.LCOLDB5:
 104              		.section	.text._ZN14Fl_Glut_Window4drawEv,"ax",@progbits
 105              	.LHOTB5:
 106              		.align 2
 107              		.p2align 4,,15
 108              		.globl	_ZN14Fl_Glut_Window4drawEv
 110              	_ZN14Fl_Glut_Window4drawEv:
 111              	.LFB389:
  55:fltk-1.3.4-1/src/glut_compatability.cxx ****   38:fltk-1.3.4-1/FL/Fl_Group.H ****   (for shift-tab), so that ctrl-tab, alt-up, and such are free
  56:fltk-1.3.4-1/src/glut_compatability.cxx ****   39:fltk-1.3.4-1/FL/Fl_Group.H ****   for the app to use as shortcuts.
  57:fltk-1.3.4-1/src/glut_compatability.cxx ****   40:fltk-1.3.4-1/FL/Fl_Group.H **** */
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
  59:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
  60:fltk-1.3.4-1/src/glut_compatability.cxx ****   43:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget** array_;
  61:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* savedfocus_;
  62:fltk-1.3.4-1/src/glut_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* resizable_;
 112              		.loc 4 62 0
 113              		.cfi_startproc
 114              	.LVL3:
 115              		.loc 4 62 0
 116 0000 53       		pushq	%rbx
 117              		.cfi_def_cfa_offset 16
 118              		.cfi_offset 3, -16
  63:fltk-1.3.4-1/src/glut_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Group.H ****   int children_;
  64:fltk-1.3.4-1/src/glut_compatability.cxx ****   47:fltk-1.3.4-1/FL/Fl_Group.H ****   int *sizes_; // remembered initial sizes of children
  65:fltk-1.3.4-1/src/glut_compatability.cxx ****   48:fltk-1.3.4-1/FL/Fl_Group.H **** 
 119              		.loc 4 65 0
 120 0001 F6870801 		testb	$1, 264(%rdi)
 120      000001
  62:fltk-1.3.4-1/src/glut_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Group.H ****   int children_;
 121              		.loc 4 62 0
 122 0008 4889FB   		movq	%rdi, %rbx
  63:fltk-1.3.4-1/src/glut_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Group.H ****   int children_;
 123              		.loc 4 63 0
 124 000b 48893D00 		movq	%rdi, glut_window(%rip)
 124      000000
  64:fltk-1.3.4-1/src/glut_compatability.cxx ****   48:fltk-1.3.4-1/FL/Fl_Group.H **** 
 125              		.loc 4 64 0
 126 0012 C7050000 		movl	$1, _ZL6indraw(%rip)
 126      00000100 
 126      0000
 127              	.LVL4:
 128              		.loc 4 65 0
 129 001c 753F     		jne	.L6
 130              	.LVL5:
 131              		.loc 4 65 0 is_stmt 0 discriminator 1
 132 001e 660FEFC0 		pxor	%xmm0, %xmm0
 133 0022 F20F100D 		movsd	.LC4(%rip), %xmm1
 133      00000000 
 134 002a F30F2A47 		cvtsi2ss	44(%rdi), %xmm0
 134      2C
 135 002f F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 136 0033 F20F58C1 		addsd	%xmm1, %xmm0
 137 0037 F20F2CF0 		cvttsd2si	%xmm0, %esi
 138 003b 660FEFC0 		pxor	%xmm0, %xmm0
 139 003f F30F2A47 		cvtsi2ss	40(%rdi), %xmm0
 139      28
 140 0044 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 141 0048 F20F58C8 		addsd	%xmm0, %xmm1
 142 004c F20F2CF9 		cvttsd2si	%xmm1, %edi
 143              	.LVL6:
 144 0050 FF934001 		call	*320(%rbx)
 144      0000
 145              	.LVL7:
 146              	.LBB119:
 147              	.LBB120:
 112:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void invalidate();
 148              		.loc 3 112 0 is_stmt 1 discriminator 1
 149 0056 808B0801 		orb	$1, 264(%rbx)
 149      000001
 150              	.LVL8:
 151              	.L6:
 152              	.LBE120:
 153              	.LBE119:
  66:fltk-1.3.4-1/src/glut_compatability.cxx ****   49:fltk-1.3.4-1/FL/Fl_Group.H ****   int navigation(int);
 154              		.loc 4 66 0
 155 005d FF933001 		call	*304(%rbx)
 155      0000
 156              	.LVL9:
  67:fltk-1.3.4-1/src/glut_compatability.cxx ****   50:fltk-1.3.4-1/FL/Fl_Group.H ****   static Fl_Group *current_;
 157              		.loc 4 67 0
 158 0063 C7050000 		movl	$0, _ZL6indraw(%rip)
 158      00000000 
 158      0000
  68:fltk-1.3.4-1/src/glut_compatability.cxx ****   51:fltk-1.3.4-1/FL/Fl_Group.H ****  
 159              		.loc 4 68 0
 160 006d 5B       		popq	%rbx
 161              		.cfi_def_cfa_offset 8
 162              	.LVL10:
 163 006e C3       		ret
 164              		.cfi_endproc
 165              	.LFE389:
 167              		.section	.text.unlikely._ZN14Fl_Glut_Window4drawEv
 168              	.LCOLDE5:
 169              		.section	.text._ZN14Fl_Glut_Window4drawEv
 170              	.LHOTE5:
 171              		.section	.text.unlikely._ZN14Fl_Glut_Window12draw_overlayEv,"ax",@progbits
 172              		.align 2
 173              	.LCOLDB6:
 174              		.section	.text._ZN14Fl_Glut_Window12draw_overlayEv,"ax",@progbits
 175              	.LHOTB6:
 176              		.align 2
 177              		.p2align 4,,15
 178              		.globl	_ZN14Fl_Glut_Window12draw_overlayEv
 180              	_ZN14Fl_Glut_Window12draw_overlayEv:
 181              	.LFB391:
  69:fltk-1.3.4-1/src/glut_compatability.cxx ****   52:fltk-1.3.4-1/FL/Fl_Group.H ****   // unimplemented copy ctor and assignment operator
  70:fltk-1.3.4-1/src/glut_compatability.cxx ****   53:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group(const Fl_Group&);
  71:fltk-1.3.4-1/src/glut_compatability.cxx ****   54:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group& operator=(const Fl_Group&);
  72:fltk-1.3.4-1/src/glut_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Group.H **** 
  73:fltk-1.3.4-1/src/glut_compatability.cxx ****   56:fltk-1.3.4-1/FL/Fl_Group.H **** protected:
  74:fltk-1.3.4-1/src/glut_compatability.cxx ****   57:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw();
 182              		.loc 4 74 0
 183              		.cfi_startproc
 184              	.LVL11:
 185 0000 53       		pushq	%rbx
 186              		.cfi_def_cfa_offset 16
 187              		.cfi_offset 3, -16
  75:fltk-1.3.4-1/src/glut_compatability.cxx ****   58:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_child(Fl_Widget& widget) const;
  76:fltk-1.3.4-1/src/glut_compatability.cxx ****   59:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_children();
 188              		.loc 4 76 0
 189 0001 F6870801 		testb	$1, 264(%rdi)
 189      000001
  74:fltk-1.3.4-1/src/glut_compatability.cxx ****   58:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_child(Fl_Widget& widget) const;
 190              		.loc 4 74 0
 191 0008 4889FB   		movq	%rdi, %rbx
  75:fltk-1.3.4-1/src/glut_compatability.cxx ****   58:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_child(Fl_Widget& widget) const;
 192              		.loc 4 75 0
 193 000b 48893D00 		movq	%rdi, glut_window(%rip)
 193      000000
 194              	.LVL12:
 195              		.loc 4 76 0
 196 0012 753F     		jne	.L10
 197              	.LVL13:
 198              		.loc 4 76 0 is_stmt 0 discriminator 1
 199 0014 660FEFC0 		pxor	%xmm0, %xmm0
 200 0018 F20F100D 		movsd	.LC4(%rip), %xmm1
 200      00000000 
 201 0020 F30F2A47 		cvtsi2ss	44(%rdi), %xmm0
 201      2C
 202 0025 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 203 0029 F20F58C1 		addsd	%xmm1, %xmm0
 204 002d F20F2CF0 		cvttsd2si	%xmm0, %esi
 205 0031 660FEFC0 		pxor	%xmm0, %xmm0
 206 0035 F30F2A47 		cvtsi2ss	40(%rdi), %xmm0
 206      28
 207 003a F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 208 003e F20F58C8 		addsd	%xmm0, %xmm1
 209 0042 F20F2CF9 		cvttsd2si	%xmm1, %edi
 210              	.LVL14:
 211 0046 FF934001 		call	*320(%rbx)
 211      0000
 212              	.LVL15:
 213              	.LBB121:
 214              	.LBB122:
 112:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void invalidate();
 215              		.loc 3 112 0 is_stmt 1 discriminator 1
 216 004c 808B0801 		orb	$1, 264(%rbx)
 216      000001
 217              	.LVL16:
 218              	.L10:
 219              	.LBE122:
 220              	.LBE121:
  77:fltk-1.3.4-1/src/glut_compatability.cxx ****   60:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_outside_label(const Fl_Widget& widget) const ;
 221              		.loc 4 77 0
 222 0053 488B8338 		movq	312(%rbx), %rax
 222      010000
  78:fltk-1.3.4-1/src/glut_compatability.cxx ****   61:fltk-1.3.4-1/FL/Fl_Group.H ****   void update_child(Fl_Widget& widget) const;
 223              		.loc 4 78 0
 224 005a 5B       		popq	%rbx
 225              		.cfi_def_cfa_offset 8
 226              	.LVL17:
  77:fltk-1.3.4-1/src/glut_compatability.cxx ****   60:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_outside_label(const Fl_Widget& widget) const ;
 227              		.loc 4 77 0
 228 005b FFE0     		jmp	*%rax
 229              	.LVL18:
 230              		.cfi_endproc
 231              	.LFE391:
 233              		.section	.text.unlikely._ZN14Fl_Glut_Window12draw_overlayEv
 234              	.LCOLDE6:
 235              		.section	.text._ZN14Fl_Glut_Window12draw_overlayEv
 236              	.LHOTE6:
 237              		.section	.text.unlikely._ZN14Fl_Glut_Window6handleEi,"ax",@progbits
 238              		.align 2
 239              	.LCOLDB7:
 240              		.section	.text._ZN14Fl_Glut_Window6handleEi,"ax",@progbits
 241              	.LHOTB7:
 242              		.align 2
 243              		.p2align 4,,15
 244              		.globl	_ZN14Fl_Glut_Window6handleEi
 246              	_ZN14Fl_Glut_Window6handleEi:
 247              	.LFB392:
  79:fltk-1.3.4-1/src/glut_compatability.cxx ****   62:fltk-1.3.4-1/FL/Fl_Group.H ****   int  *sizes();
  80:fltk-1.3.4-1/src/glut_compatability.cxx ****   63:fltk-1.3.4-1/FL/Fl_Group.H **** 
  81:fltk-1.3.4-1/src/glut_compatability.cxx ****   64:fltk-1.3.4-1/FL/Fl_Group.H **** public:
  82:fltk-1.3.4-1/src/glut_compatability.cxx ****   65:fltk-1.3.4-1/FL/Fl_Group.H **** 
 248              		.loc 4 82 0
 249              		.cfi_startproc
 250              	.LVL19:
 251 0000 4156     		pushq	%r14
 252              		.cfi_def_cfa_offset 16
 253              		.cfi_offset 14, -16
 254 0002 4155     		pushq	%r13
 255              		.cfi_def_cfa_offset 24
 256              		.cfi_offset 13, -24
 257 0004 4189F5   		movl	%esi, %r13d
 258 0007 4154     		pushq	%r12
 259              		.cfi_def_cfa_offset 32
 260              		.cfi_offset 12, -32
 261 0009 55       		pushq	%rbp
 262              		.cfi_def_cfa_offset 40
 263              		.cfi_offset 6, -40
 264 000a 4889FD   		movq	%rdi, %rbp
 265 000d 53       		pushq	%rbx
 266              		.cfi_def_cfa_offset 48
 267              		.cfi_offset 3, -48
 268              	.LBB150:
 269              	.LBB151:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 270              		.loc 4 58 0
 271 000e 4883BFA0 		cmpq	$0, 160(%rdi)
 271      00000000 
  57:fltk-1.3.4-1/src/glut_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
 272              		.loc 4 57 0
 273 0016 48893D00 		movq	%rdi, glut_window(%rip)
 273      000000
 274              	.LVL20:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 275              		.loc 4 58 0
 276 001d 7405     		je	.L13
 277 001f E8000000 		call	_ZN12Fl_Gl_Window12make_currentEv
 277      00
 278              	.LVL21:
 279              	.L13:
 280              	.LBE151:
 281              	.LBE150:
  83:fltk-1.3.4-1/src/glut_compatability.cxx ****   66:fltk-1.3.4-1/FL/Fl_Group.H ****   int handle(int);
  84:fltk-1.3.4-1/src/glut_compatability.cxx ****   67:fltk-1.3.4-1/FL/Fl_Group.H ****   void begin();
  85:fltk-1.3.4-1/src/glut_compatability.cxx ****   68:fltk-1.3.4-1/FL/Fl_Group.H ****   void end();
  86:fltk-1.3.4-1/src/glut_compatability.cxx ****   69:fltk-1.3.4-1/FL/Fl_Group.H ****   static Fl_Group *current();
  87:fltk-1.3.4-1/src/glut_compatability.cxx ****   70:fltk-1.3.4-1/FL/Fl_Group.H ****   static void current(Fl_Group *g);
 282              		.loc 4 87 0
 283 0024 660FEFC0 		pxor	%xmm0, %xmm0
 284              	.LBB152:
  88:fltk-1.3.4-1/src/glut_compatability.cxx ****   71:fltk-1.3.4-1/FL/Fl_Group.H **** 
  89:fltk-1.3.4-1/src/glut_compatability.cxx ****   72:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  90:fltk-1.3.4-1/src/glut_compatability.cxx ****   73:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns how many child widgets the group has.
 285              		.loc 4 90 0
 286 0028 4183FD13 		cmpl	$19, %r13d
 287              	.LBE152:
  87:fltk-1.3.4-1/src/glut_compatability.cxx ****   71:fltk-1.3.4-1/FL/Fl_Group.H **** 
 288              		.loc 4 87 0
 289 002c F20F100D 		movsd	.LC4(%rip), %xmm1
 289      00000000 
 290 0034 F30F2A05 		cvtsi2ss	_ZN2Fl3e_xE(%rip), %xmm0
 290      00000000 
 291 003c F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 292 0040 F20F58C1 		addsd	%xmm1, %xmm0
 293 0044 F20F2CD8 		cvttsd2si	%xmm0, %ebx
 294              	.LVL22:
  88:fltk-1.3.4-1/src/glut_compatability.cxx ****   71:fltk-1.3.4-1/FL/Fl_Group.H **** 
 295              		.loc 4 88 0
 296 0048 660FEFC0 		pxor	%xmm0, %xmm0
 297 004c F30F2A05 		cvtsi2ss	_ZN2Fl3e_yE(%rip), %xmm0
 297      00000000 
 298 0054 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 299 0058 F20F58C8 		addsd	%xmm0, %xmm1
 300 005c F2440F2C 		cvttsd2si	%xmm1, %r12d
 300      E1
 301              	.LVL23:
 302              	.LBB169:
 303              		.loc 4 90 0
 304 0061 7720     		ja	.L14
 305 0063 4489E8   		movl	%r13d, %eax
 306 0066 FF24C500 		jmp	*.L16(,%rax,8)
 306      000000
 307              		.section	.rodata._ZN14Fl_Glut_Window6handleEi,"a",@progbits
 308              		.align 8
 309              		.align 4
 310              	.L16:
 311 0000 00000000 		.quad	.L14
 311      00000000 
 312 0008 00000000 		.quad	.L15
 312      00000000 
 313 0010 00000000 		.quad	.L17
 313      00000000 
 314 0018 00000000 		.quad	.L18
 314      00000000 
 315 0020 00000000 		.quad	.L19
 315      00000000 
 316 0028 00000000 		.quad	.L20
 316      00000000 
 317 0030 00000000 		.quad	.L21
 317      00000000 
 318 0038 00000000 		.quad	.L14
 318      00000000 
 319 0040 00000000 		.quad	.L22
 319      00000000 
 320 0048 00000000 		.quad	.L14
 320      00000000 
 321 0050 00000000 		.quad	.L14
 321      00000000 
 322 0058 00000000 		.quad	.L23
 322      00000000 
 323 0060 00000000 		.quad	.L24
 323      00000000 
 324 0068 00000000 		.quad	.L14
 324      00000000 
 325 0070 00000000 		.quad	.L14
 325      00000000 
 326 0078 00000000 		.quad	.L25
 326      00000000 
 327 0080 00000000 		.quad	.L26
 327      00000000 
 328 0088 00000000 		.quad	.L14
 328      00000000 
 329 0090 00000000 		.quad	.L14
 329      00000000 
 330 0098 00000000 		.quad	.L27
 330      00000000 
 331              		.section	.text._ZN14Fl_Glut_Window6handleEi
 332 006d 0F1F00   		.p2align 4,,10
 333              		.p2align 3
 334              	.L26:
 335              	.LBB153:
  91:fltk-1.3.4-1/src/glut_compatability.cxx ****   74:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  92:fltk-1.3.4-1/src/glut_compatability.cxx ****   75:fltk-1.3.4-1/FL/Fl_Group.H ****   int children() const {return children_;}
  93:fltk-1.3.4-1/src/glut_compatability.cxx ****   76:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  94:fltk-1.3.4-1/src/glut_compatability.cxx ****   77:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns array()[n].  <i>No range checking is done!</i>
  95:fltk-1.3.4-1/src/glut_compatability.cxx ****   78:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  96:fltk-1.3.4-1/src/glut_compatability.cxx ****   79:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* child(int n) const {return array()[n];}
  97:fltk-1.3.4-1/src/glut_compatability.cxx ****   80:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
  98:fltk-1.3.4-1/src/glut_compatability.cxx ****   81:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  99:fltk-1.3.4-1/src/glut_compatability.cxx ****   82:fltk-1.3.4-1/FL/Fl_Group.H ****     See int Fl_Group::find(const Fl_Widget *w) const 
 100:fltk-1.3.4-1/src/glut_compatability.cxx ****   83:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 101:fltk-1.3.4-1/src/glut_compatability.cxx ****   84:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget& o) const {return find(&o);}
 102:fltk-1.3.4-1/src/glut_compatability.cxx ****   85:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* const* array() const;
 103:fltk-1.3.4-1/src/glut_compatability.cxx ****   86:fltk-1.3.4-1/FL/Fl_Group.H **** 
 104:fltk-1.3.4-1/src/glut_compatability.cxx ****   87:fltk-1.3.4-1/FL/Fl_Group.H ****   void resize(int,int,int,int);
 105:fltk-1.3.4-1/src/glut_compatability.cxx ****   88:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 106:fltk-1.3.4-1/src/glut_compatability.cxx ****   89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, si
 107:fltk-1.3.4-1/src/glut_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Group.H ****     and label string. The default boxtype is FL_NO_BOX.
 108:fltk-1.3.4-1/src/glut_compatability.cxx ****   91:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 109:fltk-1.3.4-1/src/glut_compatability.cxx ****   92:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group(int,int,int,int, const char * = 0);
 110:fltk-1.3.4-1/src/glut_compatability.cxx ****   93:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual ~Fl_Group();
 111:fltk-1.3.4-1/src/glut_compatability.cxx ****   94:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget&);
 112:fltk-1.3.4-1/src/glut_compatability.cxx ****   95:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 113:fltk-1.3.4-1/src/glut_compatability.cxx ****   96:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::add(Fl_Widget &w) 
 114:fltk-1.3.4-1/src/glut_compatability.cxx ****   97:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 115:fltk-1.3.4-1/src/glut_compatability.cxx ****   98:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget* o) {add(*o);}
 116:fltk-1.3.4-1/src/glut_compatability.cxx ****   99:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget&, int i);
 117:fltk-1.3.4-1/src/glut_compatability.cxx ****  100:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 118:fltk-1.3.4-1/src/glut_compatability.cxx ****  101:fltk-1.3.4-1/FL/Fl_Group.H ****     This does insert(w, find(before)).  This will append the
 119:fltk-1.3.4-1/src/glut_compatability.cxx ****  102:fltk-1.3.4-1/FL/Fl_Group.H ****     widget if \p before is not in the group.
 120:fltk-1.3.4-1/src/glut_compatability.cxx ****  103:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 121:fltk-1.3.4-1/src/glut_compatability.cxx ****  104:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget& o, Fl_Widget* before) {insert(o,find(
 122:fltk-1.3.4-1/src/glut_compatability.cxx ****  105:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(int index);
 123:fltk-1.3.4-1/src/glut_compatability.cxx ****  106:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget&);
 124:fltk-1.3.4-1/src/glut_compatability.cxx ****  107:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 125:fltk-1.3.4-1/src/glut_compatability.cxx ****  108:fltk-1.3.4-1/FL/Fl_Group.H ****     Removes the widget \p o from the group.
 126:fltk-1.3.4-1/src/glut_compatability.cxx ****  109:fltk-1.3.4-1/FL/Fl_Group.H ****     \sa void remove(Fl_Widget&)
 127:fltk-1.3.4-1/src/glut_compatability.cxx ****  110:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 128:fltk-1.3.4-1/src/glut_compatability.cxx ****  111:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget* o) {remove(*o);}
 129:fltk-1.3.4-1/src/glut_compatability.cxx ****  112:fltk-1.3.4-1/FL/Fl_Group.H ****   void clear();
 130:fltk-1.3.4-1/src/glut_compatability.cxx ****  113:fltk-1.3.4-1/FL/Fl_Group.H **** 
 131:fltk-1.3.4-1/src/glut_compatability.cxx ****  114:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 132:fltk-1.3.4-1/src/glut_compatability.cxx ****  115:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
 133:fltk-1.3.4-1/src/glut_compatability.cxx ****  116:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 134:fltk-1.3.4-1/src/glut_compatability.cxx ****  117:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget& o) {resizable_ = &o;}
 135:fltk-1.3.4-1/src/glut_compatability.cxx ****  118:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 136:fltk-1.3.4-1/src/glut_compatability.cxx ****  119:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable widget defines the resizing box for the grou
 137:fltk-1.3.4-1/src/glut_compatability.cxx ****  120:fltk-1.3.4-1/FL/Fl_Group.H ****     group is resized it calculates a new size and position for
 138:fltk-1.3.4-1/src/glut_compatability.cxx ****  121:fltk-1.3.4-1/FL/Fl_Group.H ****     children. Widgets that are horizontally or vertically insi
 139:fltk-1.3.4-1/src/glut_compatability.cxx ****  122:fltk-1.3.4-1/FL/Fl_Group.H ****     dimensions of the box are scaled to the new size. Widgets 
 140:fltk-1.3.4-1/src/glut_compatability.cxx ****  123:fltk-1.3.4-1/FL/Fl_Group.H ****     box are moved.
 141:fltk-1.3.4-1/src/glut_compatability.cxx ****  124:fltk-1.3.4-1/FL/Fl_Group.H **** 
 142:fltk-1.3.4-1/src/glut_compatability.cxx ****  125:fltk-1.3.4-1/FL/Fl_Group.H ****     In these examples the gray area is the resizable:
 143:fltk-1.3.4-1/src/glut_compatability.cxx ****  126:fltk-1.3.4-1/FL/Fl_Group.H **** 
 144:fltk-1.3.4-1/src/glut_compatability.cxx ****  127:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox1.png
 145:fltk-1.3.4-1/src/glut_compatability.cxx ****  128:fltk-1.3.4-1/FL/Fl_Group.H **** 
 146:fltk-1.3.4-1/src/glut_compatability.cxx ****  129:fltk-1.3.4-1/FL/Fl_Group.H ****     <br>
 147:fltk-1.3.4-1/src/glut_compatability.cxx ****  130:fltk-1.3.4-1/FL/Fl_Group.H ****     
 148:fltk-1.3.4-1/src/glut_compatability.cxx ****  131:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox2.png
 149:fltk-1.3.4-1/src/glut_compatability.cxx ****  132:fltk-1.3.4-1/FL/Fl_Group.H ****     
 150:fltk-1.3.4-1/src/glut_compatability.cxx ****  133:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox1.png "before resize"  width=4cm
 151:fltk-1.3.4-1/src/glut_compatability.cxx ****  134:fltk-1.3.4-1/FL/Fl_Group.H ****     
 152:fltk-1.3.4-1/src/glut_compatability.cxx ****  135:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox2.png "after resize"   width=4.85cm
 153:fltk-1.3.4-1/src/glut_compatability.cxx ****  136:fltk-1.3.4-1/FL/Fl_Group.H **** 
 154:fltk-1.3.4-1/src/glut_compatability.cxx ****  137:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable may be set to the group itself, in which cas
 155:fltk-1.3.4-1/src/glut_compatability.cxx ****  138:fltk-1.3.4-1/FL/Fl_Group.H ****     contents are resized. This is the default value for Fl_Gro
 156:fltk-1.3.4-1/src/glut_compatability.cxx ****  139:fltk-1.3.4-1/FL/Fl_Group.H ****     although NULL is the default for Fl_Window and Fl_Pack.
 157:fltk-1.3.4-1/src/glut_compatability.cxx ****  140:fltk-1.3.4-1/FL/Fl_Group.H **** 
 158:fltk-1.3.4-1/src/glut_compatability.cxx ****  141:fltk-1.3.4-1/FL/Fl_Group.H ****     If the resizable is NULL then all widgets remain a fixed s
 159:fltk-1.3.4-1/src/glut_compatability.cxx ****  142:fltk-1.3.4-1/FL/Fl_Group.H ****     and distance from the top-left corner.
 160:fltk-1.3.4-1/src/glut_compatability.cxx ****  143:fltk-1.3.4-1/FL/Fl_Group.H **** 
 336              		.loc 4 160 0
 337 0070 488B8570 		movq	368(%rbp), %rax
 337      010000
 338 0077 4885C0   		testq	%rax, %rax
 339 007a 7407     		je	.L14
 340              		.loc 4 160 0 is_stmt 0 discriminator 1
 341 007c BF010000 		movl	$1, %edi
 341      00
 342 0081 FFD0     		call	*%rax
 343              	.LVL24:
 344              	.L14:
 345              	.LBE153:
 346              	.LBE169:
 161:fltk-1.3.4-1/src/glut_compatability.cxx ****  144:fltk-1.3.4-1/FL/Fl_Group.H ****     It is possible to achieve any type of resize behavior by u
 162:fltk-1.3.4-1/src/glut_compatability.cxx ****  145:fltk-1.3.4-1/FL/Fl_Group.H ****     invisible Fl_Box as the resizable and/or by using a hierar
 163:fltk-1.3.4-1/src/glut_compatability.cxx ****  146:fltk-1.3.4-1/FL/Fl_Group.H ****     of child Fl_Group's.
 164:fltk-1.3.4-1/src/glut_compatability.cxx ****  147:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 165:fltk-1.3.4-1/src/glut_compatability.cxx ****  148:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget* o) {resizable_ = o;}
 347              		.loc 4 165 0 is_stmt 1
 348 0083 5B       		popq	%rbx
 349              		.cfi_remember_state
 350              		.cfi_def_cfa_offset 40
 351              	.LVL25:
 164:fltk-1.3.4-1/src/glut_compatability.cxx ****  148:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget* o) {resizable_ = o;}
 352              		.loc 4 164 0
 353 0084 4489EE   		movl	%r13d, %esi
 354 0087 4889EF   		movq	%rbp, %rdi
 355              		.loc 4 165 0
 356 008a 5D       		popq	%rbp
 357              		.cfi_def_cfa_offset 32
 358              	.LVL26:
 359 008b 415C     		popq	%r12
 360              		.cfi_def_cfa_offset 24
 361              	.LVL27:
 362 008d 415D     		popq	%r13
 363              		.cfi_def_cfa_offset 16
 364              	.LVL28:
 365 008f 415E     		popq	%r14
 366              		.cfi_def_cfa_offset 8
 164:fltk-1.3.4-1/src/glut_compatability.cxx ****  148:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget* o) {resizable_ = o;}
 367              		.loc 4 164 0
 368 0091 E9000000 		jmp	_ZN12Fl_Gl_Window6handleEi
 368      00
 369              	.LVL29:
 370 0096 662E0F1F 		.p2align 4,,10
 370      84000000 
 370      0000
 371              		.p2align 3
 372              	.L27:
 373              		.cfi_restore_state
 374              	.LBB170:
 375              	.LBB165:
 376              	.LBB154:
 377              	.LBB155:
 378              		.file 5 "fltk-1.3.4-1/FL/Fl.H"
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
 379              		.loc 5 627 0
 380 00a0 448B2D00 		movl	_ZN2Fl4e_dyE(%rip), %r13d
 380      000000
 381              	.LVL30:
 382              	.LBE155:
 383              	.LBE154:
 105:fltk-1.3.4-1/src/glut_compatability.cxx ****   89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, si
 384              		.loc 4 105 0
 385 00a7 4585ED   		testl	%r13d, %r13d
 386 00aa 0F893D03 		jns	.L133
 386      0000
 387              	.LVL31:
 388              		.p2align 4,,10
 389              		.p2align 3
 390              	.L105:
 105:fltk-1.3.4-1/src/glut_compatability.cxx ****   89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, si
 391              		.loc 4 105 0 is_stmt 0 discriminator 1
 392 00b0 488B8550 		movq	336(%rbp), %rax
 392      010000
 393 00b7 4885C0   		testq	%rax, %rax
 394 00ba 740E     		je	.L43
 105:fltk-1.3.4-1/src/glut_compatability.cxx ****   89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, si
 395              		.loc 4 105 0 discriminator 2
 396 00bc 4489E1   		movl	%r12d, %ecx
 397 00bf 89DA     		movl	%ebx, %edx
 398 00c1 31F6     		xorl	%esi, %esi
 399 00c3 BF030000 		movl	$3, %edi
 399      00
 400 00c8 FFD0     		call	*%rax
 401              	.LVL32:
 402              	.L43:
 105:fltk-1.3.4-1/src/glut_compatability.cxx ****   89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, si
 403              		.loc 4 105 0 discriminator 4
 404 00ca 4183C501 		addl	$1, %r13d
 405              	.LVL33:
 406 00ce 75E0     		jne	.L105
 407 00d0 E9B90000 		jmp	.L103
 407      00
 408              	.LVL34:
 409              		.p2align 4,,10
 410 00d5 0F1F00   		.p2align 3
 411              	.L15:
  93:fltk-1.3.4-1/src/glut_compatability.cxx ****   77:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns array()[n].  <i>No range checking is done!</i>
 412              		.loc 4 93 0 is_stmt 1
 413 00d8 4883BD48 		cmpq	$0, 328(%rbp)
 413      01000000 
 414 00e0 0F842A02 		je	.L134
 414      0000
 415              	.L28:
  93:fltk-1.3.4-1/src/glut_compatability.cxx ****   77:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns array()[n].  <i>No range checking is done!</i>
 416              		.loc 4 93 0 is_stmt 0 discriminator 3
 417 00e6 4889EF   		movq	%rbp, %rdi
 418 00e9 E8000000 		call	_ZN2Fl5focusEP9Fl_Widget
 418      00
 419              	.LVL35:
 420              	.L29:
  95:fltk-1.3.4-1/src/glut_compatability.cxx ****   79:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* child(int n) const {return array()[n];}
 421              		.loc 4 95 0 is_stmt 1
 422 00ee 8B3D0000 		movl	_ZN2Fl8e_keysymE(%rip), %edi
 422      0000
 423 00f4 81EFE9FE 		subl	$65257, %edi
 423      0000
 424              	.LVL36:
 425 00fa 0F882802 		js	.L57
 425      0000
  96:fltk-1.3.4-1/src/glut_compatability.cxx ****   80:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
 426              		.loc 4 96 0
 427 0100 83FF03   		cmpl	$3, %edi
 428 0103 B8020000 		movl	$2, %eax
 428      00
 429 0108 0F4DF8   		cmovge	%eax, %edi
 430              	.LVL37:
 431              	.L31:
  97:fltk-1.3.4-1/src/glut_compatability.cxx ****   81:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 432              		.loc 4 97 0
 433 010b 4863C7   		movslq	%edi, %rax
 434 010e 4C63B485 		movslq	288(%rbp,%rax,4), %r14
 434      20010000 
 435 0116 4585F6   		testl	%r14d, %r14d
 436 0119 0F851102 		jne	.L135
 436      0000
  98:fltk-1.3.4-1/src/glut_compatability.cxx ****   82:fltk-1.3.4-1/FL/Fl_Group.H ****     See int Fl_Group::find(const Fl_Widget *w) const 
 437              		.loc 4 98 0
 438 011f B8010000 		movl	$1, %eax
 438      00
 439 0124 89F9     		movl	%edi, %ecx
 440 0126 D3E0     		sall	%cl, %eax
 441 0128 09851801 		orl	%eax, 280(%rbp)
 441      0000
  99:fltk-1.3.4-1/src/glut_compatability.cxx ****   83:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 442              		.loc 4 99 0
 443 012e 488B8550 		movq	336(%rbp), %rax
 443      010000
 444 0135 4885C0   		testq	%rax, %rax
 445 0138 0F84BA01 		je	.L39
 445      0000
  99:fltk-1.3.4-1/src/glut_compatability.cxx ****   83:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 446              		.loc 4 99 0 is_stmt 0 discriminator 1
 447 013e 4489E1   		movl	%r12d, %ecx
 448 0141 89DA     		movl	%ebx, %edx
 449 0143 31F6     		xorl	%esi, %esi
 450 0145 FFD0     		call	*%rax
 451              	.LVL38:
 452 0147 EB45     		jmp	.L103
 453 0149 0F1F8000 		.p2align 4,,10
 453      000000
 454              		.p2align 3
 455              	.L17:
 456              	.LBE165:
  90:fltk-1.3.4-1/src/glut_compatability.cxx ****   74:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 457              		.loc 4 90 0 is_stmt 1 discriminator 2
 458 0150 4531ED   		xorl	%r13d, %r13d
 459              	.LVL39:
 460              	.L48:
 461              	.LBB166:
 110:fltk-1.3.4-1/src/glut_compatability.cxx ****   94:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget&);
 462              		.loc 4 110 0 discriminator 2
 463 0153 8B851801 		movl	280(%rbp), %eax
 463      0000
 464 0159 440FA3E8 		btl	%r13d, %eax
 465 015d 731B     		jnc	.L47
 111:fltk-1.3.4-1/src/glut_compatability.cxx ****   95:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 466              		.loc 4 111 0
 467 015f 488B8550 		movq	336(%rbp), %rax
 467      010000
 468 0166 4885C0   		testq	%rax, %rax
 469 0169 740F     		je	.L47
 111:fltk-1.3.4-1/src/glut_compatability.cxx ****   95:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 470              		.loc 4 111 0 is_stmt 0 discriminator 1
 471 016b 4489E1   		movl	%r12d, %ecx
 472 016e 89DA     		movl	%ebx, %edx
 473 0170 BE010000 		movl	$1, %esi
 473      00
 474 0175 4489EF   		movl	%r13d, %edi
 475 0178 FFD0     		call	*%rax
 476              	.LVL40:
 477              	.L47:
 110:fltk-1.3.4-1/src/glut_compatability.cxx ****   94:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget&);
 478              		.loc 4 110 0 is_stmt 1 discriminator 3
 479 017a 4183C501 		addl	$1, %r13d
 480              	.LVL41:
 481 017e 4183FD03 		cmpl	$3, %r13d
 482 0182 75CF     		jne	.L48
 113:fltk-1.3.4-1/src/glut_compatability.cxx ****   97:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 483              		.loc 4 113 0
 484 0184 C7851801 		movl	$0, 280(%rbp)
 484      00000000 
 484      0000
 485              	.LVL42:
 486              	.L103:
 487              	.LBE166:
 488              	.LBE170:
 489              		.loc 4 165 0
 490 018e 5B       		popq	%rbx
 491              		.cfi_remember_state
 492              		.cfi_def_cfa_offset 40
 493              	.LVL43:
 494 018f B8010000 		movl	$1, %eax
 494      00
 495 0194 5D       		popq	%rbp
 496              		.cfi_def_cfa_offset 32
 497              	.LVL44:
 498 0195 415C     		popq	%r12
 499              		.cfi_def_cfa_offset 24
 500              	.LVL45:
 501 0197 415D     		popq	%r13
 502              		.cfi_def_cfa_offset 16
 503 0199 415E     		popq	%r14
 504              		.cfi_def_cfa_offset 8
 505 019b C3       		ret
 506              	.LVL46:
 507 019c 0F1F4000 		.p2align 4,,10
 508              		.p2align 3
 509              	.L18:
 510              		.cfi_restore_state
 511              	.LBB171:
 512              	.LBB167:
 117:fltk-1.3.4-1/src/glut_compatability.cxx ****  101:fltk-1.3.4-1/FL/Fl_Group.H ****     This does insert(w, find(before)).  This will append the
 513              		.loc 4 117 0
 514 01a0 488B8568 		movq	360(%rbp), %rax
 514      010000
 515 01a7 4885C0   		testq	%rax, %rax
 516 01aa 0F843001 		je	.L49
 516      0000
 117:fltk-1.3.4-1/src/glut_compatability.cxx ****  101:fltk-1.3.4-1/FL/Fl_Group.H ****     This does insert(w, find(before)).  This will append the
 517              		.loc 4 117 0 is_stmt 0 discriminator 1
 518 01b0 BF010000 		movl	$1, %edi
 518      00
 519 01b5 FFD0     		call	*%rax
 520              	.LVL47:
 521 01b7 EBD5     		jmp	.L103
 522 01b9 0F1F8000 		.p2align 4,,10
 522      000000
 523              		.p2align 3
 524              	.L19:
 122:fltk-1.3.4-1/src/glut_compatability.cxx ****  106:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget&);
 525              		.loc 4 122 0 is_stmt 1
 526 01c0 488B8568 		movq	360(%rbp), %rax
 526      010000
 527 01c7 4885C0   		testq	%rax, %rax
 528 01ca 0F841001 		je	.L49
 528      0000
 529              	.L131:
 122:fltk-1.3.4-1/src/glut_compatability.cxx ****  106:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget&);
 530              		.loc 4 122 0 is_stmt 0 discriminator 1
 531 01d0 31FF     		xorl	%edi, %edi
 532 01d2 FFD0     		call	*%rax
 533              	.LVL48:
 534 01d4 EBB8     		jmp	.L103
 535 01d6 662E0F1F 		.p2align 4,,10
 535      84000000 
 535      0000
 536              		.p2align 3
 537              	.L23:
 131:fltk-1.3.4-1/src/glut_compatability.cxx ****  115:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
 538              		.loc 4 131 0 is_stmt 1
 539 01e0 488B8560 		movq	352(%rbp), %rax
 539      010000
 540 01e7 4885C0   		testq	%rax, %rax
 541 01ea 0F8493FE 		je	.L14
 541      FFFF
 542              	.L132:
 131:fltk-1.3.4-1/src/glut_compatability.cxx ****  115:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
 543              		.loc 4 131 0 is_stmt 0 discriminator 1
 544 01f0 4489E6   		movl	%r12d, %esi
 545 01f3 89DF     		movl	%ebx, %edi
 546 01f5 FFD0     		call	*%rax
 547              	.LVL49:
 548 01f7 EB95     		jmp	.L103
 549 01f9 0F1F8000 		.p2align 4,,10
 549      000000
 550              		.p2align 3
 551              	.L21:
 135:fltk-1.3.4-1/src/glut_compatability.cxx ****  119:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable widget defines the resizing box for the grou
 552              		.loc 4 135 0 is_stmt 1
 553 0200 4883BD48 		cmpq	$0, 328(%rbp)
 553      01000000 
 554 0208 7584     		jne	.L103
 135:fltk-1.3.4-1/src/glut_compatability.cxx ****  119:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable widget defines the resizing box for the grou
 555              		.loc 4 135 0 is_stmt 0 discriminator 2
 556 020a 4883BD78 		cmpq	$0, 376(%rbp)
 556      01000000 
 557 0212 0F8576FF 		jne	.L103
 557      FFFF
 558 0218 E966FEFF 		jmp	.L14
 558      FF
 559 021d 0F1F00   		.p2align 4,,10
 560              		.p2align 3
 561              	.L25:
 156:fltk-1.3.4-1/src/glut_compatability.cxx ****  140:fltk-1.3.4-1/FL/Fl_Group.H **** 
 562              		.loc 4 156 0 is_stmt 1
 563 0220 488B8570 		movq	368(%rbp), %rax
 563      010000
 564 0227 4885C0   		testq	%rax, %rax
 565 022a 0F8453FE 		je	.L14
 565      FFFF
 156:fltk-1.3.4-1/src/glut_compatability.cxx ****  140:fltk-1.3.4-1/FL/Fl_Group.H **** 
 566              		.loc 4 156 0 is_stmt 0 discriminator 1
 567 0230 31FF     		xorl	%edi, %edi
 568 0232 FFD0     		call	*%rax
 569              	.LVL50:
 570 0234 E94AFEFF 		jmp	.L14
 570      FF
 571 0239 0F1F8000 		.p2align 4,,10
 571      000000
 572              		.p2align 3
 573              	.L24:
 139:fltk-1.3.4-1/src/glut_compatability.cxx ****  123:fltk-1.3.4-1/FL/Fl_Group.H ****     box are moved.
 574              		.loc 4 139 0 is_stmt 1
 575 0240 488B8548 		movq	328(%rbp), %rax
 575      010000
 576 0247 4885C0   		testq	%rax, %rax
 577 024a 0F847801 		je	.L136
 577      0000
 578              	.LBB156:
 142:fltk-1.3.4-1/src/glut_compatability.cxx ****  126:fltk-1.3.4-1/FL/Fl_Group.H **** 
 579              		.loc 4 142 0
 580 0250 488B1500 		movq	_ZN2Fl6e_textE(%rip), %rdx
 580      000000
 581 0257 0FB63A   		movzbl	(%rdx), %edi
 582 025a 4084FF   		testb	%dil, %dil
 583 025d 7528     		jne	.L130
 584              	.L53:
 585 025f 488B8578 		movq	376(%rbp), %rax
 585      010000
 586              	.LBB157:
 146:fltk-1.3.4-1/src/glut_compatability.cxx ****  130:fltk-1.3.4-1/FL/Fl_Group.H ****     
 587              		.loc 4 146 0
 588 0266 4885C0   		testq	%rax, %rax
 589 0269 0F8414FE 		je	.L14
 589      FFFF
 590              	.L56:
 591              	.LBB158:
 592              	.LBB159:
 593              	.LBB160:
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
 594              		.loc 5 721 0
 595 026f 8B3D0000 		movl	_ZN2Fl8e_keysymE(%rip), %edi
 595      0000
 596              	.LBE160:
 597              	.LBE159:
 148:fltk-1.3.4-1/src/glut_compatability.cxx ****  132:fltk-1.3.4-1/FL/Fl_Group.H ****     
 598              		.loc 4 148 0
 599 0275 8D8F4200 		leal	-65470(%rdi), %ecx
 599      FFFF
 600 027b 8D974300 		leal	-65469(%rdi), %edx
 600      FFFF
 601 0281 83F922   		cmpl	$34, %ecx
 602 0284 0F46FA   		cmovbe	%edx, %edi
 603              	.L130:
 604              	.LVL51:
 149:fltk-1.3.4-1/src/glut_compatability.cxx ****  133:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox1.png "before resize"  width=4cm
 605              		.loc 4 149 0
 606 0287 4489E2   		movl	%r12d, %edx
 607 028a 89DE     		movl	%ebx, %esi
 608 028c FFD0     		call	*%rax
 609              	.LVL52:
 610              	.LBE158:
 611              	.LBE157:
 612              	.LBE156:
 613              	.LBE167:
 614              	.LBE171:
 615              		.loc 4 165 0
 616 028e 5B       		popq	%rbx
 617              		.cfi_remember_state
 618              		.cfi_def_cfa_offset 40
 619              	.LVL53:
 620 028f B8010000 		movl	$1, %eax
 620      00
 621 0294 5D       		popq	%rbp
 622              		.cfi_def_cfa_offset 32
 623              	.LVL54:
 624 0295 415C     		popq	%r12
 625              		.cfi_def_cfa_offset 24
 626              	.LVL55:
 627 0297 415D     		popq	%r13
 628              		.cfi_def_cfa_offset 16
 629              	.LVL56:
 630 0299 415E     		popq	%r14
 631              		.cfi_def_cfa_offset 8
 632 029b C3       		ret
 633              	.LVL57:
 634 029c 0F1F4000 		.p2align 4,,10
 635              		.p2align 3
 636              	.L20:
 637              		.cfi_restore_state
 638              	.LBB172:
 639              	.LBB168:
 127:fltk-1.3.4-1/src/glut_compatability.cxx ****  111:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget* o) {remove(*o);}
 640              		.loc 4 127 0
 641 02a0 488B8558 		movq	344(%rbp), %rax
 641      010000
 642 02a7 4885C0   		testq	%rax, %rax
 643 02aa 0F8540FF 		jne	.L132
 643      FFFF
 644 02b0 E9CEFDFF 		jmp	.L14
 644      FF
 645              		.p2align 4,,10
 646 02b5 0F1F00   		.p2align 3
 647              	.L22:
 648              	.LBB161:
 142:fltk-1.3.4-1/src/glut_compatability.cxx ****  126:fltk-1.3.4-1/FL/Fl_Group.H **** 
 649              		.loc 4 142 0
 650 02b8 488B0500 		movq	_ZN2Fl6e_textE(%rip), %rax
 650      000000
 651 02bf 0FB638   		movzbl	(%rax), %edi
 652 02c2 4084FF   		testb	%dil, %dil
 653 02c5 7498     		je	.L53
 143:fltk-1.3.4-1/src/glut_compatability.cxx ****  127:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox1.png
 654              		.loc 4 143 0
 655 02c7 488B8548 		movq	328(%rbp), %rax
 655      010000
 656 02ce 4885C0   		testq	%rax, %rax
 657 02d1 0F84ACFD 		je	.L14
 657      FFFF
 658 02d7 EBAE     		jmp	.L130
 659 02d9 0F1F8000 		.p2align 4,,10
 659      000000
 660              		.p2align 3
 661              	.L49:
 662              	.LBE161:
 118:fltk-1.3.4-1/src/glut_compatability.cxx ****  102:fltk-1.3.4-1/FL/Fl_Group.H ****     widget if \p before is not in the group.
 663              		.loc 4 118 0
 664 02e0 4883BD60 		cmpq	$0, 352(%rbp)
 664      01000000 
 665 02e8 0F85A0FE 		jne	.L103
 665      FFFF
 666 02ee E990FDFF 		jmp	.L14
 666      FF
 667              	.LVL58:
 668              		.p2align 4,,10
 669 02f3 0F1F4400 		.p2align 3
 669      00
 670              	.L39:
 100:fltk-1.3.4-1/src/glut_compatability.cxx ****   84:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget& o) const {return find(&o);}
 671              		.loc 4 100 0
 672 02f8 4883BD58 		cmpq	$0, 344(%rbp)
 672      01000000 
 673 0300 0F8588FE 		jne	.L103
 673      FFFF
 674 0306 E978FDFF 		jmp	.L14
 674      FF
 675              	.LVL59:
 676 030b 0F1F4400 		.p2align 4,,10
 676      00
 677              		.p2align 3
 678              	.L134:
  93:fltk-1.3.4-1/src/glut_compatability.cxx ****   77:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns array()[n].  <i>No range checking is done!</i>
 679              		.loc 4 93 0 discriminator 2
 680 0310 4883BD78 		cmpq	$0, 376(%rbp)
 680      01000000 
 681 0318 0F85C8FD 		jne	.L28
 681      FFFF
 682 031e E9CBFDFF 		jmp	.L29
 682      FF
 683              	.LVL60:
 684              		.p2align 4,,10
 685 0323 0F1F4400 		.p2align 3
 685      00
 686              	.L57:
  95:fltk-1.3.4-1/src/glut_compatability.cxx ****   79:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* child(int n) const {return array()[n];}
 687              		.loc 4 95 0
 688 0328 31FF     		xorl	%edi, %edi
 689              	.LVL61:
 690 032a E9DCFDFF 		jmp	.L31
 690      FF
 691              	.LVL62:
 692 032f 90       		.p2align 4,,10
 693              		.p2align 3
 694              	.L135:
 695              	.LBB162:
 696              	.LBB163:
 166:fltk-1.3.4-1/src/glut_compatability.cxx ****  149:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 167:fltk-1.3.4-1/src/glut_compatability.cxx ****  150:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
 168:fltk-1.3.4-1/src/glut_compatability.cxx ****  151:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 169:fltk-1.3.4-1/src/glut_compatability.cxx ****  152:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* resizable() const {return resizable_;}
 170:fltk-1.3.4-1/src/glut_compatability.cxx ****  153:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 171:fltk-1.3.4-1/src/glut_compatability.cxx ****  154:fltk-1.3.4-1/FL/Fl_Group.H ****     Adds a widget to the group and makes it the resizable widg
 172:fltk-1.3.4-1/src/glut_compatability.cxx ****  155:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 173:fltk-1.3.4-1/src/glut_compatability.cxx ****  156:fltk-1.3.4-1/FL/Fl_Group.H ****   void add_resizable(Fl_Widget& o) {resizable_ = &o; add(o);}
 174:fltk-1.3.4-1/src/glut_compatability.cxx ****  157:fltk-1.3.4-1/FL/Fl_Group.H ****   void init_sizes();
 175:fltk-1.3.4-1/src/glut_compatability.cxx ****  158:fltk-1.3.4-1/FL/Fl_Group.H **** 
 176:fltk-1.3.4-1/src/glut_compatability.cxx ****  159:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 177:fltk-1.3.4-1/src/glut_compatability.cxx ****  160:fltk-1.3.4-1/FL/Fl_Group.H ****     Controls whether the group widget clips the drawing of
 178:fltk-1.3.4-1/src/glut_compatability.cxx ****  161:fltk-1.3.4-1/FL/Fl_Group.H ****     child widgets to its bounding box.
 179:fltk-1.3.4-1/src/glut_compatability.cxx ****  162:fltk-1.3.4-1/FL/Fl_Group.H ****     
 180:fltk-1.3.4-1/src/glut_compatability.cxx ****  163:fltk-1.3.4-1/FL/Fl_Group.H ****     Set \p c to 1 if you want to clip the child widgets to the
 181:fltk-1.3.4-1/src/glut_compatability.cxx ****  164:fltk-1.3.4-1/FL/Fl_Group.H ****     bounding box.
 182:fltk-1.3.4-1/src/glut_compatability.cxx ****  165:fltk-1.3.4-1/FL/Fl_Group.H **** 
 183:fltk-1.3.4-1/src/glut_compatability.cxx ****  166:fltk-1.3.4-1/FL/Fl_Group.H ****     The default is to not clip (0) the drawing of child widget
 184:fltk-1.3.4-1/src/glut_compatability.cxx ****  167:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 185:fltk-1.3.4-1/src/glut_compatability.cxx ****  168:fltk-1.3.4-1/FL/Fl_Group.H ****   void clip_children(int c) { if (c) set_flag(CLIP_CHILDREN); 
 186:fltk-1.3.4-1/src/glut_compatability.cxx ****  169:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 187:fltk-1.3.4-1/src/glut_compatability.cxx ****  170:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns the current clipping mode.
 188:fltk-1.3.4-1/src/glut_compatability.cxx ****  171:fltk-1.3.4-1/FL/Fl_Group.H **** 
 189:fltk-1.3.4-1/src/glut_compatability.cxx ****  172:fltk-1.3.4-1/FL/Fl_Group.H ****     \return true, if clipping is enabled, false otherwise.
 190:fltk-1.3.4-1/src/glut_compatability.cxx ****  173:fltk-1.3.4-1/FL/Fl_Group.H **** 
 191:fltk-1.3.4-1/src/glut_compatability.cxx ****  174:fltk-1.3.4-1/FL/Fl_Group.H ****     \see void Fl_Group::clip_children(int c)
 192:fltk-1.3.4-1/src/glut_compatability.cxx ****  175:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 193:fltk-1.3.4-1/src/glut_compatability.cxx ****  176:fltk-1.3.4-1/FL/Fl_Group.H ****   unsigned int clip_children() { return (flags() & CLIP_CHILDR
 194:fltk-1.3.4-1/src/glut_compatability.cxx ****  177:fltk-1.3.4-1/FL/Fl_Group.H **** 
 195:fltk-1.3.4-1/src/glut_compatability.cxx ****  178:fltk-1.3.4-1/FL/Fl_Group.H ****   // Note: Doxygen docs in Fl_Widget.H to avoid redundancy.
 196:fltk-1.3.4-1/src/glut_compatability.cxx ****  179:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual Fl_Group* as_group() { return this; }
 197:fltk-1.3.4-1/src/glut_compatability.cxx ****   19              		.loc 1 179 0
 198:fltk-1.3.4-1/src/glut_compatability.cxx ****   20              		.cfi_startproc
 199:fltk-1.3.4-1/src/glut_compatability.cxx ****   21              	.LVL0:
 200:fltk-1.3.4-1/src/glut_compatability.cxx ****   22              		.loc 1 179 0
 201:fltk-1.3.4-1/src/glut_compatability.cxx ****   23 0000 4889F8   		movq	%rdi, %rax
 202:fltk-1.3.4-1/src/glut_compatability.cxx ****   24 0003 C3       		ret
 203:fltk-1.3.4-1/src/glut_compatability.cxx ****   25              		.cfi_endproc
 204:fltk-1.3.4-1/src/glut_compatability.cxx ****   26              	.LFE270:
 205:fltk-1.3.4-1/src/glut_compatability.cxx ****   28              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
 206:fltk-1.3.4-1/src/glut_compatability.cxx ****   29              	.LCOLDE0:
 207:fltk-1.3.4-1/src/glut_compatability.cxx ****   30              		.section	.text._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,
 208:fltk-1.3.4-1/src/glut_compatability.cxx ****   31              	.LHOTE0:
 209:fltk-1.3.4-1/src/glut_compatability.cxx ****   32              		.section	.text.unlikely._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window
 210:fltk-1.3.4-1/src/glut_compatability.cxx ****   33              		.align 2
 211:fltk-1.3.4-1/src/glut_compatability.cxx ****   34              	.LCOLDB1:
 212:fltk-1.3.4-1/src/glut_compatability.cxx ****   35              		.section	.text._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windo
 213:fltk-1.3.4-1/src/glut_compatability.cxx ****   36              	.LHOTB1:
 214:fltk-1.3.4-1/src/glut_compatability.cxx ****   37              		.align 2
 215:fltk-1.3.4-1/src/glut_compatability.cxx ****   38              		.p2align 4,,15
 216:fltk-1.3.4-1/src/glut_compatability.cxx ****   39              		.weak	_ZN9Fl_Window9as_windowEv
 217:fltk-1.3.4-1/src/glut_compatability.cxx ****   41              	_ZN9Fl_Window9as_windowEv:
 218:fltk-1.3.4-1/src/glut_compatability.cxx ****   42              	.LFB325:
 219:fltk-1.3.4-1/src/glut_compatability.cxx ****   43              		.file 2 "fltk-1.3.4-1/FL/Fl_Window.H"
 220:fltk-1.3.4-1/src/glut_compatability.cxx ****    1:fltk-1.3.4-1/FL/Fl_Window.H **** //
 221:fltk-1.3.4-1/src/glut_compatability.cxx ****    2:fltk-1.3.4-1/FL/Fl_Window.H **** // "$Id: Fl_Window.H 10820 2015-07-27 18:13:46Z AlbrechtS $"
 222:fltk-1.3.4-1/src/glut_compatability.cxx ****    3:fltk-1.3.4-1/FL/Fl_Window.H **** //
 223:fltk-1.3.4-1/src/glut_compatability.cxx ****    4:fltk-1.3.4-1/FL/Fl_Window.H **** // Window header file for the Fast Light Tool Kit (FLTK).
 224:fltk-1.3.4-1/src/glut_compatability.cxx ****    5:fltk-1.3.4-1/FL/Fl_Window.H **** //
 225:fltk-1.3.4-1/src/glut_compatability.cxx ****    6:fltk-1.3.4-1/FL/Fl_Window.H **** // Copyright 1998-2012 by Bill Spitzak and others.
 226:fltk-1.3.4-1/src/glut_compatability.cxx ****    7:fltk-1.3.4-1/FL/Fl_Window.H **** //
 227:fltk-1.3.4-1/src/glut_compatability.cxx ****    8:fltk-1.3.4-1/FL/Fl_Window.H **** // This library is free software. Distribution and use rights
 228:fltk-1.3.4-1/src/glut_compatability.cxx ****    9:fltk-1.3.4-1/FL/Fl_Window.H **** // the file "COPYING" which should have been included with th
 229:fltk-1.3.4-1/src/glut_compatability.cxx ****   10:fltk-1.3.4-1/FL/Fl_Window.H **** // file is missing or damaged, see the license at:
 230:fltk-1.3.4-1/src/glut_compatability.cxx ****   11:fltk-1.3.4-1/FL/Fl_Window.H **** //
 231:fltk-1.3.4-1/src/glut_compatability.cxx ****   12:fltk-1.3.4-1/FL/Fl_Window.H **** //     http://www.fltk.org/COPYING.php
 232:fltk-1.3.4-1/src/glut_compatability.cxx ****   13:fltk-1.3.4-1/FL/Fl_Window.H **** //
 233:fltk-1.3.4-1/src/glut_compatability.cxx ****   14:fltk-1.3.4-1/FL/Fl_Window.H **** // Please report all bugs and problems on the following page:
 234:fltk-1.3.4-1/src/glut_compatability.cxx ****   15:fltk-1.3.4-1/FL/Fl_Window.H **** //
 235:fltk-1.3.4-1/src/glut_compatability.cxx ****   16:fltk-1.3.4-1/FL/Fl_Window.H **** //     http://www.fltk.org/str.php
 236:fltk-1.3.4-1/src/glut_compatability.cxx ****   17:fltk-1.3.4-1/FL/Fl_Window.H **** //
 237:fltk-1.3.4-1/src/glut_compatability.cxx ****   18:fltk-1.3.4-1/FL/Fl_Window.H **** 
 238:fltk-1.3.4-1/src/glut_compatability.cxx ****   19:fltk-1.3.4-1/FL/Fl_Window.H **** /** \file
 239:fltk-1.3.4-1/src/glut_compatability.cxx ****   20:fltk-1.3.4-1/FL/Fl_Window.H ****    Fl_Window widget . */
 240:fltk-1.3.4-1/src/glut_compatability.cxx ****   21:fltk-1.3.4-1/FL/Fl_Window.H **** 
 241:fltk-1.3.4-1/src/glut_compatability.cxx ****   22:fltk-1.3.4-1/FL/Fl_Window.H **** #ifndef Fl_Window_H
 242:fltk-1.3.4-1/src/glut_compatability.cxx ****   23:fltk-1.3.4-1/FL/Fl_Window.H **** #define Fl_Window_H
 243:fltk-1.3.4-1/src/glut_compatability.cxx ****   24:fltk-1.3.4-1/FL/Fl_Window.H **** 
 244:fltk-1.3.4-1/src/glut_compatability.cxx ****   25:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
 245:fltk-1.3.4-1/src/glut_compatability.cxx ****   26:fltk-1.3.4-1/FL/Fl_Window.H **** #include <windows.h>
 246:fltk-1.3.4-1/src/glut_compatability.cxx ****   27:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 247:fltk-1.3.4-1/src/glut_compatability.cxx ****   28:fltk-1.3.4-1/FL/Fl_Window.H **** 
 248:fltk-1.3.4-1/src/glut_compatability.cxx ****   29:fltk-1.3.4-1/FL/Fl_Window.H **** #include "Fl_Group.H"
 249:fltk-1.3.4-1/src/glut_compatability.cxx ****   30:fltk-1.3.4-1/FL/Fl_Window.H **** #include "Fl_Bitmap.H"
 250:fltk-1.3.4-1/src/glut_compatability.cxx ****   31:fltk-1.3.4-1/FL/Fl_Window.H **** #include <stdlib.h>
 251:fltk-1.3.4-1/src/glut_compatability.cxx ****   32:fltk-1.3.4-1/FL/Fl_Window.H **** 
 252:fltk-1.3.4-1/src/glut_compatability.cxx ****   33:fltk-1.3.4-1/FL/Fl_Window.H **** #define FL_WINDOW 0xF0		///< window type id all subclasses ha
 253:fltk-1.3.4-1/src/glut_compatability.cxx ****   34:fltk-1.3.4-1/FL/Fl_Window.H **** #define FL_DOUBLE_WINDOW 0xF1   ///< double window type id
 254:fltk-1.3.4-1/src/glut_compatability.cxx ****   35:fltk-1.3.4-1/FL/Fl_Window.H **** 
 255:fltk-1.3.4-1/src/glut_compatability.cxx ****   36:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_X;
 256:fltk-1.3.4-1/src/glut_compatability.cxx ****   37:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_RGB_Image;
 257:fltk-1.3.4-1/src/glut_compatability.cxx ****   38:fltk-1.3.4-1/FL/Fl_Window.H **** 
 258:fltk-1.3.4-1/src/glut_compatability.cxx ****   39:fltk-1.3.4-1/FL/Fl_Window.H **** 
 259:fltk-1.3.4-1/src/glut_compatability.cxx ****   40:fltk-1.3.4-1/FL/Fl_Window.H **** /**
 260:fltk-1.3.4-1/src/glut_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Window.H ****   This widget produces an actual window.  This can either be 
 261:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Window.H ****   window, with a border and title and all the window manageme
 262:fltk-1.3.4-1/src/glut_compatability.cxx ****   43:fltk-1.3.4-1/FL/Fl_Window.H ****   or a "subwindow" inside a window.  This is controlled by wh
 263:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
 264:fltk-1.3.4-1/src/glut_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Window.H **** 
 265:fltk-1.3.4-1/src/glut_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Window.H ****   Once you create a window, you usually add children Fl_Widge
 266:fltk-1.3.4-1/src/glut_compatability.cxx ****   47:fltk-1.3.4-1/FL/Fl_Window.H ****   's to it by using window->add(child) for each new widget.
 267:fltk-1.3.4-1/src/glut_compatability.cxx ****   48:fltk-1.3.4-1/FL/Fl_Window.H ****   See Fl_Group for more information on how to add and remove 
 268:fltk-1.3.4-1/src/glut_compatability.cxx ****   49:fltk-1.3.4-1/FL/Fl_Window.H **** 
 269:fltk-1.3.4-1/src/glut_compatability.cxx ****   50:fltk-1.3.4-1/FL/Fl_Window.H ****   There are several subclasses of Fl_Window that provide
 270:fltk-1.3.4-1/src/glut_compatability.cxx ****   51:fltk-1.3.4-1/FL/Fl_Window.H ****   double-buffering, overlay, menu, and OpenGL support.
 271:fltk-1.3.4-1/src/glut_compatability.cxx ****   52:fltk-1.3.4-1/FL/Fl_Window.H **** 
 272:fltk-1.3.4-1/src/glut_compatability.cxx ****   53:fltk-1.3.4-1/FL/Fl_Window.H ****   The window's callback is done if the user tries to close a 
 273:fltk-1.3.4-1/src/glut_compatability.cxx ****   54:fltk-1.3.4-1/FL/Fl_Window.H ****   using the window manager and Fl::modal() is zero or equal t
 274:fltk-1.3.4-1/src/glut_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Window.H ****   window. Fl_Window has a default callback that calls Fl_Wind
 275:fltk-1.3.4-1/src/glut_compatability.cxx ****   56:fltk-1.3.4-1/FL/Fl_Window.H **** */
 276:fltk-1.3.4-1/src/glut_compatability.cxx ****   57:fltk-1.3.4-1/FL/Fl_Window.H **** class FL_EXPORT Fl_Window : public Fl_Group {
 277:fltk-1.3.4-1/src/glut_compatability.cxx ****   58:fltk-1.3.4-1/FL/Fl_Window.H **** 
 278:fltk-1.3.4-1/src/glut_compatability.cxx ****   59:fltk-1.3.4-1/FL/Fl_Window.H ****   static char *default_xclass_;
 279:fltk-1.3.4-1/src/glut_compatability.cxx ****   60:fltk-1.3.4-1/FL/Fl_Window.H ****   // Note: we must use separate statements for each of the fo
 280:fltk-1.3.4-1/src/glut_compatability.cxx ****   61:fltk-1.3.4-1/FL/Fl_Window.H ****   // with the static attribute, otherwise MS VC++ 2008/2010 c
 281:fltk-1.3.4-1/src/glut_compatability.cxx ****   62:fltk-1.3.4-1/FL/Fl_Window.H ****   // AlbrechtS 04/2012
 282:fltk-1.3.4-1/src/glut_compatability.cxx ****   63:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
 283:fltk-1.3.4-1/src/glut_compatability.cxx ****   64:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 284:fltk-1.3.4-1/src/glut_compatability.cxx ****   65:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 285:fltk-1.3.4-1/src/glut_compatability.cxx ****   66:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_x;
 286:fltk-1.3.4-1/src/glut_compatability.cxx ****   67:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
 287:fltk-1.3.4-1/src/glut_compatability.cxx ****   68:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 288:fltk-1.3.4-1/src/glut_compatability.cxx ****   69:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 289:fltk-1.3.4-1/src/glut_compatability.cxx ****   70:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_y;
 290:fltk-1.3.4-1/src/glut_compatability.cxx ****   71:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
 291:fltk-1.3.4-1/src/glut_compatability.cxx ****   72:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 292:fltk-1.3.4-1/src/glut_compatability.cxx ****   73:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 293:fltk-1.3.4-1/src/glut_compatability.cxx ****   74:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_w;
 294:fltk-1.3.4-1/src/glut_compatability.cxx ****   75:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
 295:fltk-1.3.4-1/src/glut_compatability.cxx ****   76:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 296:fltk-1.3.4-1/src/glut_compatability.cxx ****   77:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 697              		.loc 4 296 0
 698 0330 488B0500 		movq	glut_menustate_function(%rip), %rax
 698      000000
 294:fltk-1.3.4-1/src/glut_compatability.cxx ****   76:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 699              		.loc 4 294 0
 700 0337 44893500 		movl	%r14d, glut_menu(%rip)
 700      000000
 701              	.LVL63:
 702              		.loc 4 296 0
 703 033e 4885C0   		testq	%rax, %rax
 704 0341 7407     		je	.L33
 705 0343 BF010000 		movl	$1, %edi
 705      00
 706              	.LVL64:
 707 0348 FFD0     		call	*%rax
 708              	.LVL65:
 709              	.L33:
 297:fltk-1.3.4-1/src/glut_compatability.cxx ****   78:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_h;
 710              		.loc 4 297 0
 711 034a 488B0500 		movq	glut_menustatus_function(%rip), %rax
 711      000000
 712 0351 4885C0   		testq	%rax, %rax
 713 0354 740C     		je	.L34
 714 0356 4489E2   		movl	%r12d, %edx
 715 0359 89DE     		movl	%ebx, %esi
 716 035b BF010000 		movl	$1, %edi
 716      00
 717 0360 FFD0     		call	*%rax
 718              	.LVL66:
 719              	.L34:
 298:fltk-1.3.4-1/src/glut_compatability.cxx ****   79:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
 720              		.loc 4 298 0
 721 0362 4B8D0476 		leaq	(%r14,%r14,2), %rax
 722 0366 8B150000 		movl	_ZN2Fl3e_yE(%rip), %edx
 722      0000
 723 036c 8B350000 		movl	_ZN2Fl3e_xE(%rip), %esi
 723      0000
 724 0372 4531C9   		xorl	%r9d, %r9d
 725 0375 4531C0   		xorl	%r8d, %r8d
 726 0378 31C9     		xorl	%ecx, %ecx
 727 037a 488B3CC5 		movq	_ZL5menus+8(,%rax,8), %rdi
 727      00000000 
 728 0382 E8000000 		call	_ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_
 728      00
 729              	.LVL67:
 299:fltk-1.3.4-1/src/glut_compatability.cxx ****   80:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 730              		.loc 4 299 0
 731 0387 4885C0   		testq	%rax, %rax
 732 038a 740F     		je	.L35
 733 038c 488B5010 		movq	16(%rax), %rdx
 734 0390 4885D2   		testq	%rdx, %rdx
 735 0393 7406     		je	.L35
 736              	.LVL68:
 737 0395 488B7818 		movq	24(%rax), %rdi
 738 0399 FFD2     		call	*%rdx
 739              	.LVL69:
 740              	.L35:
 300:fltk-1.3.4-1/src/glut_compatability.cxx ****   81:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 741              		.loc 4 300 0
 742 039b 488B0500 		movq	glut_menustatus_function(%rip), %rax
 742      000000
 743 03a2 4885C0   		testq	%rax, %rax
 744 03a5 7409     		je	.L36
 745 03a7 4489E2   		movl	%r12d, %edx
 746 03aa 89DE     		movl	%ebx, %esi
 747 03ac 31FF     		xorl	%edi, %edi
 748 03ae FFD0     		call	*%rax
 749              	.LVL70:
 750              	.L36:
 301:fltk-1.3.4-1/src/glut_compatability.cxx ****   82:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_top;
 751              		.loc 4 301 0
 752 03b0 488B0500 		movq	glut_menustate_function(%rip), %rax
 752      000000
 753 03b7 4885C0   		testq	%rax, %rax
 754 03ba 0F8510FE 		jne	.L131
 754      FFFF
 755 03c0 E9C9FDFF 		jmp	.L103
 755      FF
 756              	.LVL71:
 757              		.p2align 4,,10
 758 03c5 0F1F00   		.p2align 3
 759              	.L136:
 760              	.LBE163:
 761              	.LBE162:
 139:fltk-1.3.4-1/src/glut_compatability.cxx ****  123:fltk-1.3.4-1/FL/Fl_Group.H ****     box are moved.
 762              		.loc 4 139 0 discriminator 1
 763 03c8 488B8578 		movq	376(%rbp), %rax
 763      010000
 764 03cf 4885C0   		testq	%rax, %rax
 765 03d2 0F84ABFC 		je	.L14
 765      FFFF
 766              	.LBB164:
 142:fltk-1.3.4-1/src/glut_compatability.cxx ****  126:fltk-1.3.4-1/FL/Fl_Group.H **** 
 767              		.loc 4 142 0
 768 03d8 488B1500 		movq	_ZN2Fl6e_textE(%rip), %rdx
 768      000000
 769 03df 803A00   		cmpb	$0, (%rdx)
 770 03e2 0F859BFC 		jne	.L14
 770      FFFF
 771 03e8 E982FEFF 		jmp	.L56
 771      FF
 772              	.LVL72:
 773              	.L133:
 774              	.LBE164:
 106:fltk-1.3.4-1/src/glut_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Group.H ****     and label string. The default boxtype is FL_NO_BOX.
 775              		.loc 4 106 0 discriminator 5
 776 03ed 0F849BFD 		je	.L103
 776      FFFF
 777              	.LVL73:
 778              		.p2align 4,,10
 779 03f3 0F1F4400 		.p2align 3
 779      00
 780              	.L46:
 106:fltk-1.3.4-1/src/glut_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Group.H ****     and label string. The default boxtype is FL_NO_BOX.
 781              		.loc 4 106 0 is_stmt 0 discriminator 1
 782 03f8 488B8550 		movq	336(%rbp), %rax
 782      010000
 783 03ff 4885C0   		testq	%rax, %rax
 784 0402 740E     		je	.L45
 106:fltk-1.3.4-1/src/glut_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Group.H ****     and label string. The default boxtype is FL_NO_BOX.
 785              		.loc 4 106 0 discriminator 2
 786 0404 4489E1   		movl	%r12d, %ecx
 787 0407 89DA     		movl	%ebx, %edx
 788 0409 31F6     		xorl	%esi, %esi
 789 040b BF040000 		movl	$4, %edi
 789      00
 790 0410 FFD0     		call	*%rax
 791              	.LVL74:
 792              	.L45:
 106:fltk-1.3.4-1/src/glut_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Group.H ****     and label string. The default boxtype is FL_NO_BOX.
 793              		.loc 4 106 0 discriminator 4
 794 0412 4183ED01 		subl	$1, %r13d
 795              	.LVL75:
 796 0416 75E0     		jne	.L46
 797 0418 E971FDFF 		jmp	.L103
 797      FF
 798              	.LBE168:
 799              	.LBE172:
 800              		.cfi_endproc
 801              	.LFE392:
 803              		.section	.text.unlikely._ZN14Fl_Glut_Window6handleEi
 804              	.LCOLDE7:
 805              		.section	.text._ZN14Fl_Glut_Window6handleEi
 806              	.LHOTE7:
 807              		.section	.text.unlikely._ZL15default_reshapeii,"ax",@progbits
 808              	.LCOLDB8:
 809              		.section	.text._ZL15default_reshapeii,"ax",@progbits
 810              	.LHOTB8:
 811              		.p2align 4,,15
 813              	_ZL15default_reshapeii:
 814              	.LFB386:
  53:fltk-1.3.4-1/src/glut_compatability.cxx ****   37:fltk-1.3.4-1/FL/Fl_Group.H ****   this group, and to other groups. The only modifier grabbed i
 815              		.loc 4 53 0 is_stmt 1
 816              		.cfi_startproc
 817              	.LVL76:
  53:fltk-1.3.4-1/src/glut_compatability.cxx ****   37:fltk-1.3.4-1/FL/Fl_Group.H ****   this group, and to other groups. The only modifier grabbed i
 818              		.loc 4 53 0
 819 0000 89FA     		movl	%edi, %edx
 820 0002 89F1     		movl	%esi, %ecx
 821 0004 31FF     		xorl	%edi, %edi
 822              	.LVL77:
 823 0006 31F6     		xorl	%esi, %esi
 824              	.LVL78:
 825 0008 E9000000 		jmp	glViewport
 825      00
 826              	.LVL79:
 827              		.cfi_endproc
 828              	.LFE386:
 830              		.section	.text.unlikely._ZL15default_reshapeii
 831              	.LCOLDE8:
 832              		.section	.text._ZL15default_reshapeii
 833              	.LHOTE8:
 834              		.section	.text.unlikely._ZN14Fl_Glut_WindowD2Ev,"ax",@progbits
 835              		.align 2
 836              	.LCOLDB9:
 837              		.section	.text._ZN14Fl_Glut_WindowD2Ev,"ax",@progbits
 838              	.LHOTB9:
 839              		.align 2
 840              		.p2align 4,,15
 841              		.globl	_ZN14Fl_Glut_WindowD2Ev
 843              	_ZN14Fl_Glut_WindowD2Ev:
 844              	.LFB409:
 262:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
 845              		.loc 4 262 0
 846              		.cfi_startproc
 847              	.LVL80:
 848              	.LBB173:
 262:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
 849              		.loc 4 262 0
 850 0000 48C70700 		movq	$_ZTV14Fl_Glut_Window+16, (%rdi)
 850      000000
 263:fltk-1.3.4-1/src/glut_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Window.H **** 
 851              		.loc 4 263 0
 852 0007 483B3D00 		cmpq	glut_window(%rip), %rdi
 852      000000
 853 000e 7420     		je	.L140
 854              	.L139:
 264:fltk-1.3.4-1/src/glut_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Window.H ****   Once you create a window, you usually add children Fl_Widge
 855              		.loc 4 264 0
 856 0010 4863871C 		movslq	284(%rdi), %rax
 856      010000
 857 0017 48C704C5 		movq	$0, _ZL7windows(,%rax,8)
 857      00000000 
 857      00000000 
 262:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
 858              		.loc 4 262 0
 859 0023 E9000000 		jmp	_ZN12Fl_Gl_WindowD2Ev
 859      00
 860              	.LVL81:
 861 0028 0F1F8400 		.p2align 4,,10
 861      00000000 
 862              		.p2align 3
 863              	.L140:
 263:fltk-1.3.4-1/src/glut_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Window.H **** 
 864              		.loc 4 263 0 discriminator 1
 865 0030 48C70500 		movq	$0, glut_window(%rip)
 865      00000000 
 865      000000
 866 003b EBD3     		jmp	.L139
 867              	.LBE173:
 868              		.cfi_endproc
 869              	.LFE409:
 871              		.section	.text.unlikely._ZN14Fl_Glut_WindowD2Ev
 872              	.LCOLDE9:
 873              		.section	.text._ZN14Fl_Glut_WindowD2Ev
 874              	.LHOTE9:
 875              		.globl	_ZN14Fl_Glut_WindowD1Ev
 876              		.set	_ZN14Fl_Glut_WindowD1Ev,_ZN14Fl_Glut_WindowD2Ev
 877              		.section	.text.unlikely._ZN14Fl_Glut_WindowD0Ev,"ax",@progbits
 878              		.align 2
 879              	.LCOLDB10:
 880              		.section	.text._ZN14Fl_Glut_WindowD0Ev,"ax",@progbits
 881              	.LHOTB10:
 882              		.align 2
 883              		.p2align 4,,15
 884              		.globl	_ZN14Fl_Glut_WindowD0Ev
 886              	_ZN14Fl_Glut_WindowD0Ev:
 887              	.LFB411:
 262:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
 888              		.loc 4 262 0
 889              		.cfi_startproc
 890              	.LVL82:
 891 0000 53       		pushq	%rbx
 892              		.cfi_def_cfa_offset 16
 893              		.cfi_offset 3, -16
 894              	.LBB174:
 895              	.LBB175:
 262:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
 896              		.loc 4 262 0
 897 0001 48C70700 		movq	$_ZTV14Fl_Glut_Window+16, (%rdi)
 897      000000
 898              	.LBE175:
 899              	.LBE174:
 900 0008 4889FB   		movq	%rdi, %rbx
 901              	.LBB178:
 902              	.LBB176:
 263:fltk-1.3.4-1/src/glut_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Window.H **** 
 903              		.loc 4 263 0
 904 000b 483B3D00 		cmpq	glut_window(%rip), %rdi
 904      000000
 905 0012 742C     		je	.L144
 906              	.L142:
 264:fltk-1.3.4-1/src/glut_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Window.H ****   Once you create a window, you usually add children Fl_Widge
 907              		.loc 4 264 0
 908 0014 4863831C 		movslq	284(%rbx), %rax
 908      010000
 262:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
 909              		.loc 4 262 0
 910 001b 4889DF   		movq	%rbx, %rdi
 911              	.LVL83:
 264:fltk-1.3.4-1/src/glut_compatability.cxx ****   46:fltk-1.3.4-1/FL/Fl_Window.H ****   Once you create a window, you usually add children Fl_Widge
 912              		.loc 4 264 0
 913 001e 48C704C5 		movq	$0, _ZL7windows(,%rax,8)
 913      00000000 
 913      00000000 
 262:fltk-1.3.4-1/src/glut_compatability.cxx ****   44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
 914              		.loc 4 262 0
 915 002a E8000000 		call	_ZN12Fl_Gl_WindowD2Ev
 915      00
 916              	.LVL84:
 917              	.LBE176:
 918              	.LBE178:
 265:fltk-1.3.4-1/src/glut_compatability.cxx ****   47:fltk-1.3.4-1/FL/Fl_Window.H ****   's to it by using window->add(child) for each new widget.
 919              		.loc 4 265 0
 920 002f 4889DF   		movq	%rbx, %rdi
 921 0032 5B       		popq	%rbx
 922              		.cfi_remember_state
 923              		.cfi_def_cfa_offset 8
 924              	.LVL85:
 925 0033 E9000000 		jmp	_ZdlPv
 925      00
 926              	.LVL86:
 927 0038 0F1F8400 		.p2align 4,,10
 927      00000000 
 928              		.p2align 3
 929              	.L144:
 930              		.cfi_restore_state
 931              	.LBB179:
 932              	.LBB177:
 263:fltk-1.3.4-1/src/glut_compatability.cxx ****   45:fltk-1.3.4-1/FL/Fl_Window.H **** 
 933              		.loc 4 263 0
 934 0040 48C70500 		movq	$0, glut_window(%rip)
 934      00000000 
 934      000000
 935 004b EBC7     		jmp	.L142
 936              	.LBE177:
 937              	.LBE179:
 938              		.cfi_endproc
 939              	.LFE411:
 941              		.section	.text.unlikely._ZN14Fl_Glut_WindowD0Ev
 942              	.LCOLDE10:
 943              		.section	.text._ZN14Fl_Glut_WindowD0Ev
 944              	.LHOTE10:
 945              		.section	.text.unlikely._ZL7additemP4menu,"ax",@progbits
 946              	.LCOLDB11:
 947              		.section	.text._ZL7additemP4menu,"ax",@progbits
 948              	.LHOTB11:
 949              		.p2align 4,,15
 951              	_ZL7additemP4menu:
 952              	.LFB465:
 302:fltk-1.3.4-1/src/glut_compatability.cxx ****   83:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
 303:fltk-1.3.4-1/src/glut_compatability.cxx ****   84:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 304:fltk-1.3.4-1/src/glut_compatability.cxx ****   85:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 305:fltk-1.3.4-1/src/glut_compatability.cxx ****   86:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_bottom;
 306:fltk-1.3.4-1/src/glut_compatability.cxx ****   87:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
 307:fltk-1.3.4-1/src/glut_compatability.cxx ****   88:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 308:fltk-1.3.4-1/src/glut_compatability.cxx ****   89:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 309:fltk-1.3.4-1/src/glut_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_left;
 310:fltk-1.3.4-1/src/glut_compatability.cxx ****   91:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
 311:fltk-1.3.4-1/src/glut_compatability.cxx ****   92:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 312:fltk-1.3.4-1/src/glut_compatability.cxx ****   93:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 313:fltk-1.3.4-1/src/glut_compatability.cxx ****   94:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_right;
 314:fltk-1.3.4-1/src/glut_compatability.cxx ****   95:fltk-1.3.4-1/FL/Fl_Window.H **** 
 315:fltk-1.3.4-1/src/glut_compatability.cxx ****   96:fltk-1.3.4-1/FL/Fl_Window.H ****   friend class Fl_X;
 316:fltk-1.3.4-1/src/glut_compatability.cxx ****   97:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_X *i; // points at the system-specific stuff
 317:fltk-1.3.4-1/src/glut_compatability.cxx ****   98:fltk-1.3.4-1/FL/Fl_Window.H **** 
 318:fltk-1.3.4-1/src/glut_compatability.cxx ****   99:fltk-1.3.4-1/FL/Fl_Window.H ****   struct icon_data {
 319:fltk-1.3.4-1/src/glut_compatability.cxx ****  100:fltk-1.3.4-1/FL/Fl_Window.H ****     const void *legacy_icon;
 320:fltk-1.3.4-1/src/glut_compatability.cxx ****  101:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_RGB_Image **icons;
 953              		.loc 4 320 0
 954              		.cfi_startproc
 955              	.LVL87:
 956 0000 55       		pushq	%rbp
 957              		.cfi_def_cfa_offset 16
 958              		.cfi_offset 6, -16
 959 0001 53       		pushq	%rbx
 960              		.cfi_def_cfa_offset 24
 961              		.cfi_offset 3, -24
 962 0002 4889FD   		movq	%rdi, %rbp
 963 0005 4883EC08 		subq	$8, %rsp
 964              		.cfi_def_cfa_offset 32
 965              	.LBB180:
 321:fltk-1.3.4-1/src/glut_compatability.cxx ****  102:fltk-1.3.4-1/FL/Fl_Window.H ****     int count;
 966              		.loc 4 321 0
 967 0009 48634710 		movslq	16(%rdi), %rax
 968 000d 8D5001   		leal	1(%rax), %edx
 969 0010 3B5714   		cmpl	20(%rdi), %edx
 970 0013 0F8C2701 		jl	.L156
 970      0000
 971              	.LBB181:
 322:fltk-1.3.4-1/src/glut_compatability.cxx ****  103:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
 972              		.loc 4 322 0
 973 0019 8D44000A 		leal	10(%rax,%rax), %eax
 323:fltk-1.3.4-1/src/glut_compatability.cxx ****  104:fltk-1.3.4-1/FL/Fl_Window.H ****     HICON big_icon;
 974              		.loc 4 323 0
 975 001d 48BA0000 		movabsq	$164381386399023104, %rdx
 975      00000000 
 975      4802
 322:fltk-1.3.4-1/src/glut_compatability.cxx ****  103:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
 976              		.loc 4 322 0
 977 0027 894714   		movl	%eax, 20(%rdi)
 978              		.loc 4 323 0
 979 002a 4898     		cltq
 980 002c 48C7C7FF 		movq	$-1, %rdi
 980      FFFFFF
 981              	.LVL88:
 982 0033 4839D0   		cmpq	%rdx, %rax
 983 0036 0F86EC00 		jbe	.L157
 983      0000
 984              	.L148:
 985              		.loc 4 323 0 is_stmt 0 discriminator 4
 986 003c E8000000 		call	_Znam
 986      00
 987              	.LVL89:
 988 0041 4889C3   		movq	%rax, %rbx
 989              	.LVL90:
 990              	.LBB182:
 324:fltk-1.3.4-1/src/glut_compatability.cxx ****  105:fltk-1.3.4-1/FL/Fl_Window.H ****     HICON small_icon;
 991              		.loc 4 324 0 is_stmt 1 discriminator 4
 992 0044 48634510 		movslq	16(%rbp), %rax
 993              	.LVL91:
 994 0048 488B7D08 		movq	8(%rbp), %rdi
 995 004c 85C0     		testl	%eax, %eax
 996 004e 0F8EF200 		jle	.L158
 996      0000
 997 0054 8D48FF   		leal	-1(%rax), %ecx
 998              		.loc 4 324 0 is_stmt 0
 999 0057 31D2     		xorl	%edx, %edx
 1000 0059 4883C101 		addq	$1, %rcx
 1001 005d 488D04CD 		leaq	0(,%rcx,8), %rax
 1001      00000000 
 1002 0065 48C1E106 		salq	$6, %rcx
 1003 0069 4829C1   		subq	%rax, %rcx
 1004              	.LVL92:
 1005 006c 0F1F4000 		.p2align 4,,10
 1006              		.p2align 3
 1007              	.L152:
 1008              		.loc 4 324 0 discriminator 2
 1009 0070 488B0417 		movq	(%rdi,%rdx), %rax
 1010 0074 48890413 		movq	%rax, (%rbx,%rdx)
 1011 0078 488B4417 		movq	8(%rdi,%rdx), %rax
 1011      08
 1012 007d 48894413 		movq	%rax, 8(%rbx,%rdx)
 1012      08
 1013 0082 488B4417 		movq	16(%rdi,%rdx), %rax
 1013      10
 1014 0087 48894413 		movq	%rax, 16(%rbx,%rdx)
 1014      10
 1015 008c 488B4417 		movq	24(%rdi,%rdx), %rax
 1015      18
 1016 0091 48894413 		movq	%rax, 24(%rbx,%rdx)
 1016      18
 1017 0096 488B4417 		movq	32(%rdi,%rdx), %rax
 1017      20
 1018 009b 48894413 		movq	%rax, 32(%rbx,%rdx)
 1018      20
 1019 00a0 488B4417 		movq	40(%rdi,%rdx), %rax
 1019      28
 1020 00a5 48894413 		movq	%rax, 40(%rbx,%rdx)
 1020      28
 1021 00aa 488B4417 		movq	48(%rdi,%rdx), %rax
 1021      30
 1022 00af 48894413 		movq	%rax, 48(%rbx,%rdx)
 1022      30
 1023 00b4 4883C238 		addq	$56, %rdx
 1024 00b8 4839D1   		cmpq	%rdx, %rcx
 1025 00bb 75B3     		jne	.L152
 1026              	.L150:
 1027              	.LBE182:
 325:fltk-1.3.4-1/src/glut_compatability.cxx ****  106:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 1028              		.loc 4 325 0 is_stmt 1 discriminator 1
 1029 00bd E8000000 		call	_ZdaPv
 1029      00
 1030              	.LVL93:
 1031 00c2 48634510 		movslq	16(%rbp), %rax
 1032              	.L151:
 1033 00c6 8D5001   		leal	1(%rax), %edx
 326:fltk-1.3.4-1/src/glut_compatability.cxx ****  107:fltk-1.3.4-1/FL/Fl_Window.H ****   };
 1034              		.loc 4 326 0
 1035 00c9 48895D08 		movq	%rbx, 8(%rbp)
 1036              	.LVL94:
 1037              	.L147:
 1038              	.LBE181:
 1039              	.LBE180:
 327:fltk-1.3.4-1/src/glut_compatability.cxx ****  108:fltk-1.3.4-1/FL/Fl_Window.H **** 
 328:fltk-1.3.4-1/src/glut_compatability.cxx ****  109:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* iconlabel_;
 329:fltk-1.3.4-1/src/glut_compatability.cxx ****  110:fltk-1.3.4-1/FL/Fl_Window.H ****   char* xclass_;
 1040              		.loc 4 329 0
 1041 00cd 4883C001 		addq	$1, %rax
 328:fltk-1.3.4-1/src/glut_compatability.cxx ****  110:fltk-1.3.4-1/FL/Fl_Window.H ****   char* xclass_;
 1042              		.loc 4 328 0
 1043 00d1 895510   		movl	%edx, 16(%rbp)
 1044              	.LVL95:
 1045              		.loc 4 329 0
 1046 00d4 488D14C5 		leaq	0(,%rax,8), %rdx
 1046      00000000 
 1047 00dc 48C1E006 		salq	$6, %rax
 1048 00e0 4829D0   		subq	%rdx, %rax
 1049 00e3 48C70403 		movq	$0, (%rbx,%rax)
 1049      00000000 
 330:fltk-1.3.4-1/src/glut_compatability.cxx ****  111:fltk-1.3.4-1/FL/Fl_Window.H ****   struct icon_data *icon_;
 1050              		.loc 4 330 0
 1051 00eb 488B5508 		movq	8(%rbp), %rdx
 1052 00ef 488D4402 		leaq	-56(%rdx,%rax), %rax
 1052      C8
 1053              	.LVL96:
 331:fltk-1.3.4-1/src/glut_compatability.cxx ****  112:fltk-1.3.4-1/FL/Fl_Window.H ****   // size_range stuff:
 1054              		.loc 4 331 0
 1055 00f4 C7400800 		movl	$0, 8(%rax)
 1055      000000
 332:fltk-1.3.4-1/src/glut_compatability.cxx ****  113:fltk-1.3.4-1/FL/Fl_Window.H ****   int minw, minh, maxw, maxh;
 1056              		.loc 4 332 0
 1057 00fb C7402000 		movl	$0, 32(%rax)
 1057      000000
 333:fltk-1.3.4-1/src/glut_compatability.cxx ****  114:fltk-1.3.4-1/FL/Fl_Window.H ****   int dw, dh, aspect;
 1058              		.loc 4 333 0
 1059 0102 C7403000 		movl	$0, 48(%rax)
 1059      000000
 1060 0109 C7402C00 		movl	$0, 44(%rax)
 1060      000000
 1061 0110 C7402800 		movl	$0, 40(%rax)
 1061      000000
 1062 0117 C6402400 		movb	$0, 36(%rax)
 334:fltk-1.3.4-1/src/glut_compatability.cxx ****  115:fltk-1.3.4-1/FL/Fl_Window.H ****   uchar size_range_set;
 335:fltk-1.3.4-1/src/glut_compatability.cxx ****  116:fltk-1.3.4-1/FL/Fl_Window.H ****   // cursor stuff
 1063              		.loc 4 335 0
 1064 011b 4883C408 		addq	$8, %rsp
 1065              		.cfi_remember_state
 1066              		.cfi_def_cfa_offset 24
 1067 011f 5B       		popq	%rbx
 1068              		.cfi_def_cfa_offset 16
 1069 0120 5D       		popq	%rbp
 1070              		.cfi_def_cfa_offset 8
 1071              	.LVL97:
 1072 0121 C3       		ret
 1073              	.LVL98:
 1074              		.p2align 4,,10
 1075 0122 660F1F44 		.p2align 3
 1075      0000
 1076              	.L157:
 1077              		.cfi_restore_state
 1078              	.LBB184:
 1079              	.LBB183:
 323:fltk-1.3.4-1/src/glut_compatability.cxx ****  105:fltk-1.3.4-1/FL/Fl_Window.H ****     HICON small_icon;
 1080              		.loc 4 323 0 discriminator 1
 1081 0128 488D14C5 		leaq	0(,%rax,8), %rdx
 1081      00000000 
 1082 0130 48C1E006 		salq	$6, %rax
 1083 0134 4829D0   		subq	%rdx, %rax
 1084 0137 4889C7   		movq	%rax, %rdi
 1085 013a E9FDFEFF 		jmp	.L148
 1085      FF
 1086              	.LVL99:
 1087 013f 90       		.p2align 4,,10
 1088              		.p2align 3
 1089              	.L156:
 1090 0140 488B5F08 		movq	8(%rdi), %rbx
 1091 0144 EB87     		jmp	.L147
 1092              	.LVL100:
 1093              	.L158:
 325:fltk-1.3.4-1/src/glut_compatability.cxx ****  107:fltk-1.3.4-1/FL/Fl_Window.H ****   };
 1094              		.loc 4 325 0
 1095 0146 4885FF   		testq	%rdi, %rdi
 1096 0149 0F8477FF 		je	.L151
 1096      FFFF
 1097 014f E969FFFF 		jmp	.L150
 1097      FF
 1098              	.LBE183:
 1099              	.LBE184:
 1100              		.cfi_endproc
 1101              	.LFE465:
 1103              		.section	.text.unlikely._ZL7additemP4menu
 1104              	.LCOLDE11:
 1105              		.section	.text._ZL7additemP4menu
 1106              	.LHOTE11:
 1107              		.section	.text.unlikely._ZN14Fl_Glut_Window12make_currentEv,"ax",@progbits
 1108              		.align 2
 1109              	.LCOLDB12:
 1110              		.section	.text._ZN14Fl_Glut_Window12make_currentEv,"ax",@progbits
 1111              	.LHOTB12:
 1112              		.align 2
 1113              		.p2align 4,,15
 1114              		.globl	_ZN14Fl_Glut_Window12make_currentEv
 1116              	_ZN14Fl_Glut_Window12make_currentEv:
 1117              	.LFB388:
  56:fltk-1.3.4-1/src/glut_compatability.cxx ****   40:fltk-1.3.4-1/FL/Fl_Group.H **** */
 1118              		.loc 4 56 0
 1119              		.cfi_startproc
 1120              	.LVL101:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1121              		.loc 4 58 0
 1122 0000 4883BFA0 		cmpq	$0, 160(%rdi)
 1122      00000000 
  57:fltk-1.3.4-1/src/glut_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
 1123              		.loc 4 57 0
 1124 0008 48893D00 		movq	%rdi, glut_window(%rip)
 1124      000000
 1125              	.LVL102:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1126              		.loc 4 58 0
 1127 000f 740F     		je	.L159
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1128              		.loc 4 58 0 is_stmt 0 discriminator 1
 1129 0011 E9000000 		jmp	_ZN12Fl_Gl_Window12make_currentEv
 1129      00
 1130              	.LVL103:
 1131 0016 662E0F1F 		.p2align 4,,10
 1131      84000000 
 1131      0000
 1132              		.p2align 3
 1133              	.L159:
 1134 0020 F3C3     		rep ret
 1135              		.cfi_endproc
 1136              	.LFE388:
 1138              		.section	.text.unlikely._ZN14Fl_Glut_Window12make_currentEv
 1139              	.LCOLDE12:
 1140              		.section	.text._ZN14Fl_Glut_Window12make_currentEv
 1141              	.LHOTE12:
 1142              		.section	.text.unlikely._Z15glutSwapBuffersv,"ax",@progbits
 1143              	.LCOLDB13:
 1144              		.section	.text._Z15glutSwapBuffersv,"ax",@progbits
 1145              	.LHOTB13:
 1146              		.p2align 4,,15
 1147              		.globl	_Z15glutSwapBuffersv
 1149              	_Z15glutSwapBuffersv:
 1150              	.LFB390:
  70:fltk-1.3.4-1/src/glut_compatability.cxx ****   54:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group& operator=(const Fl_Group&);
 1151              		.loc 4 70 0 is_stmt 1
 1152              		.cfi_startproc
  71:fltk-1.3.4-1/src/glut_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1153              		.loc 4 71 0
 1154 0000 8B050000 		movl	_ZL6indraw(%rip), %eax
 1154      0000
 1155 0006 85C0     		testl	%eax, %eax
 1156 0008 7406     		je	.L163
 1157 000a F3C3     		rep ret
 1158 000c 0F1F4000 		.p2align 4,,10
 1159              		.p2align 3
 1160              	.L163:
  71:fltk-1.3.4-1/src/glut_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1161              		.loc 4 71 0 is_stmt 0 discriminator 1
 1162 0010 488B3D00 		movq	glut_window(%rip), %rdi
 1162      000000
 1163 0017 E9000000 		jmp	_ZN12Fl_Gl_Window12swap_buffersEv
 1163      00
 1164              	.LVL104:
 1165              		.cfi_endproc
 1166              	.LFE390:
 1168              		.section	.text.unlikely._Z15glutSwapBuffersv
 1169              	.LCOLDE13:
 1170              		.section	.text._Z15glutSwapBuffersv
 1171              	.LHOTE13:
 1172              		.section	.text.unlikely._ZN14Fl_Glut_Window5_initEv,"ax",@progbits
 1173              		.align 2
 1174              	.LCOLDB14:
 1175              		.section	.text._ZN14Fl_Glut_Window5_initEv,"ax",@progbits
 1176              	.LHOTB14:
 1177              		.align 2
 1178              		.p2align 4,,15
 1179              		.globl	_ZN14Fl_Glut_Window5_initEv
 1181              	_ZN14Fl_Glut_Window5_initEv:
 1182              	.LFB393:
 169:fltk-1.3.4-1/src/glut_compatability.cxx ****  153:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 1183              		.loc 4 169 0 is_stmt 1
 1184              		.cfi_startproc
 1185              	.LVL105:
 170:fltk-1.3.4-1/src/glut_compatability.cxx ****  154:fltk-1.3.4-1/FL/Fl_Group.H ****     Adds a widget to the group and makes it the resizable widg
 1186              		.loc 4 170 0
 1187 0000 48833D00 		cmpq	$0, _ZL7windows+8(%rip)
 1187      00000000 
 1188 0008 C7871C01 		movl	$1, 284(%rdi)
 1188      00000100 
 1188      0000
 1189 0012 0F84DD00 		je	.L172
 1189      0000
 1190 0018 C7871C01 		movl	$2, 284(%rdi)
 1190      00000200 
 1190      0000
 1191 0022 BA000000 		movl	$_ZL7windows+16, %edx
 1191      00
 1192 0027 B8020000 		movl	$2, %eax
 1192      00
 1193 002c 0F1F4000 		.p2align 4,,10
 1194              		.p2align 3
 1195              	.L167:
 170:fltk-1.3.4-1/src/glut_compatability.cxx ****  154:fltk-1.3.4-1/FL/Fl_Group.H ****     Adds a widget to the group and makes it the resizable widg
 1196              		.loc 4 170 0 is_stmt 0 discriminator 2
 1197 0030 48833A00 		cmpq	$0, (%rdx)
 1198 0034 7412     		je	.L165
 170:fltk-1.3.4-1/src/glut_compatability.cxx ****  154:fltk-1.3.4-1/FL/Fl_Group.H ****     Adds a widget to the group and makes it the resizable widg
 1199              		.loc 4 170 0 discriminator 3
 1200 0036 83C001   		addl	$1, %eax
 1201 0039 4883C208 		addq	$8, %rdx
 1202 003d 83F820   		cmpl	$32, %eax
 1203 0040 89871C01 		movl	%eax, 284(%rdi)
 1203      0000
 1204 0046 75E8     		jne	.L167
 1205              	.L165:
 1206              	.LBB185:
 1207              	.LBB186:
 185:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Set the OpenGL capabilites of the window using platform-specific data.
 1208              		.loc 3 185 0 is_stmt 1
 1209 0048 8B350000 		movl	_ZL9glut_mode(%rip), %esi
 1209      0000
 1210              	.LBE186:
 1211              	.LBE185:
 171:fltk-1.3.4-1/src/glut_compatability.cxx ****  155:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 1212              		.loc 4 171 0
 1213 004e 4898     		cltq
 172:fltk-1.3.4-1/src/glut_compatability.cxx ****  156:fltk-1.3.4-1/FL/Fl_Group.H ****   void add_resizable(Fl_Widget& o) {resizable_ = &o; add(o);}
 1214              		.loc 4 172 0
 1215 0050 C7872801 		movl	$0, 296(%rdi)
 1215      00000000 
 1215      0000
 1216 005a C7872401 		movl	$0, 292(%rdi)
 1216      00000000 
 1216      0000
 1217 0064 C7872001 		movl	$0, 288(%rdi)
 1217      00000000 
 1217      0000
 1218              	.LBB189:
 1219              	.LBB187:
 185:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Set the OpenGL capabilites of the window using platform-specific data.
 1220              		.loc 3 185 0
 1221 006e 31D2     		xorl	%edx, %edx
 1222              	.LBE187:
 1223              	.LBE189:
 173:fltk-1.3.4-1/src/glut_compatability.cxx ****  157:fltk-1.3.4-1/FL/Fl_Group.H ****   void init_sizes();
 1224              		.loc 4 173 0
 1225 0070 48C78740 		movq	$_ZL15default_reshapeii, 320(%rdi)
 1225      01000000 
 1225      000000
 174:fltk-1.3.4-1/src/glut_compatability.cxx ****  158:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1226              		.loc 4 174 0
 1227 007b 48C78730 		movq	$_ZL15default_displayv, 304(%rdi)
 1227      01000000 
 1227      000000
 175:fltk-1.3.4-1/src/glut_compatability.cxx ****  159:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 1228              		.loc 4 175 0
 1229 0086 48C78738 		movq	$_ZL15default_displayv, 312(%rdi)
 1229      01000000 
 1229      000000
 176:fltk-1.3.4-1/src/glut_compatability.cxx ****  160:fltk-1.3.4-1/FL/Fl_Group.H ****     Controls whether the group widget clips the drawing of
 1230              		.loc 4 176 0
 1231 0091 48C78748 		movq	$0, 328(%rdi)
 1231      01000000 
 1231      000000
 177:fltk-1.3.4-1/src/glut_compatability.cxx ****  161:fltk-1.3.4-1/FL/Fl_Group.H ****     child widgets to its bounding box.
 1232              		.loc 4 177 0
 1233 009c 48C78750 		movq	$0, 336(%rdi)
 1233      01000000 
 1233      000000
 178:fltk-1.3.4-1/src/glut_compatability.cxx ****  162:fltk-1.3.4-1/FL/Fl_Group.H ****     
 1234              		.loc 4 178 0
 1235 00a7 48C78758 		movq	$0, 344(%rdi)
 1235      01000000 
 1235      000000
 179:fltk-1.3.4-1/src/glut_compatability.cxx ****  163:fltk-1.3.4-1/FL/Fl_Group.H ****     Set \p c to 1 if you want to clip the child widgets to the
 1236              		.loc 4 179 0
 1237 00b2 48C78760 		movq	$0, 352(%rdi)
 1237      01000000 
 1237      000000
 180:fltk-1.3.4-1/src/glut_compatability.cxx ****  164:fltk-1.3.4-1/FL/Fl_Group.H ****     bounding box.
 1238              		.loc 4 180 0
 1239 00bd 48C78768 		movq	$0, 360(%rdi)
 1239      01000000 
 1239      000000
 181:fltk-1.3.4-1/src/glut_compatability.cxx ****  165:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1240              		.loc 4 181 0
 1241 00c8 48C78770 		movq	$0, 368(%rdi)
 1241      01000000 
 1241      000000
 182:fltk-1.3.4-1/src/glut_compatability.cxx ****  166:fltk-1.3.4-1/FL/Fl_Group.H ****     The default is to not clip (0) the drawing of child widget
 1242              		.loc 4 182 0
 1243 00d3 48C78778 		movq	$0, 376(%rdi)
 1243      01000000 
 1243      000000
 183:fltk-1.3.4-1/src/glut_compatability.cxx ****  167:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 1244              		.loc 4 183 0
 1245 00de C7871801 		movl	$0, 280(%rdi)
 1245      00000000 
 1245      0000
 1246              	.LVL106:
 171:fltk-1.3.4-1/src/glut_compatability.cxx ****  155:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 1247              		.loc 4 171 0
 1248 00e8 48893CC5 		movq	%rdi, _ZL7windows(,%rax,8)
 1248      00000000 
 1249              	.LBB190:
 1250              	.LBB188:
 185:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Set the OpenGL capabilites of the window using platform-specific data.
 1251              		.loc 3 185 0
 1252 00f0 E9000000 		jmp	_ZN12Fl_Gl_Window4modeEiPKi
 1252      00
 1253              	.LVL107:
 1254              	.L172:
 1255              	.LBE188:
 1256              	.LBE190:
 170:fltk-1.3.4-1/src/glut_compatability.cxx ****  154:fltk-1.3.4-1/FL/Fl_Group.H ****     Adds a widget to the group and makes it the resizable widg
 1257              		.loc 4 170 0
 1258 00f5 B8010000 		movl	$1, %eax
 1258      00
 1259 00fa E949FFFF 		jmp	.L165
 1259      FF
 1260              		.cfi_endproc
 1261              	.LFE393:
 1263              		.section	.text.unlikely._ZN14Fl_Glut_Window5_initEv
 1264              	.LCOLDE14:
 1265              		.section	.text._ZN14Fl_Glut_Window5_initEv
 1266              	.LHOTE14:
 1267              		.section	.text.unlikely._ZN14Fl_Glut_WindowC2EiiPKc,"ax",@progbits
 1268              		.align 2
 1269              	.LCOLDB15:
 1270              		.section	.text._ZN14Fl_Glut_WindowC2EiiPKc,"ax",@progbits
 1271              	.LHOTB15:
 1272              		.align 2
 1273              		.p2align 4,,15
 1274              		.globl	_ZN14Fl_Glut_WindowC2EiiPKc
 1276              	_ZN14Fl_Glut_WindowC2EiiPKc:
 1277              	.LFB395:
 188:fltk-1.3.4-1/src/glut_compatability.cxx ****  172:fltk-1.3.4-1/FL/Fl_Group.H ****     \return true, if clipping is enabled, false otherwise.
 1278              		.loc 4 188 0
 1279              		.cfi_startproc
 1280              	.LVL108:
 1281 0000 53       		pushq	%rbx
 1282              		.cfi_def_cfa_offset 16
 1283              		.cfi_offset 3, -16
 188:fltk-1.3.4-1/src/glut_compatability.cxx ****  172:fltk-1.3.4-1/FL/Fl_Group.H ****     \return true, if clipping is enabled, false otherwise.
 1284              		.loc 4 188 0
 1285 0001 4889FB   		movq	%rdi, %rbx
 1286              	.LBB191:
 1287              	.LBB192:
 1288              	.LBB193:
 231:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   
 232:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** The number of pixels per FLTK unit of length for the window.
 233:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    Returns 1, except for a window mapped to
 234:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    an Apple 'retina' display, and if Fl::use_high_res_GL(bool) is set to true,
 235:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    when it returns 2. This method dynamically adjusts its value when the window
 236:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    is moved to/from a retina display. This method is useful, e.g., to convert,
 237:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    in a window's handle() method, the FLTK units returned by Fl::event_x() and
 238:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    Fl::event_y() to the pixel units used by the OpenGL source code.
 239:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \version 1.3.4
 240:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    */
 241:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** #ifdef __APPLE__
 242:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   float pixels_per_unit();
 243:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** #else
 244:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   float pixels_per_unit() { return 1; }
 245:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** #endif
 246:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Gives the window width in OpenGL pixels.
 247:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    Generally identical with the result of the w() function, but for a window mapped to
 248:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    an Apple 'retina' display, and if Fl::use_high_res_GL(bool) is set to true,
 249:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    pixel_w() returns 2 * w(). This method detects when the window has been moved
 250:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    between low and high resolution displays and automatically adjusts the returned value.
 251:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \version 1.3.4
 252:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    */
 253:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int pixel_w() { return int(pixels_per_unit() * w() + 0.5); }
 254:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Gives the window height in OpenGL pixels.
 255:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    Generally identical with the result of the h() function, but for a window mapped to
 256:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    an Apple 'retina' display, and if Fl::use_high_res_GL(bool) is set to true,
 257:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    pixel_h() returns 2 * h(). This method detects when the window has been moved
 258:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    between low and high resolution displays and automatically adjusts the returned value.
 259:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    \version 1.3.4
 260:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****    */
 261:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   int pixel_h() { return int(pixels_per_unit() * h() + 0.5); }
 262:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   
 263:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   ~Fl_Gl_Window();
 264:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 265:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     Creates a new Fl_Gl_Window widget using the given size, and label string. 
 266:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     The default boxtype is FL_NO_BOX. The default mode is FL_RGB|FL_DOUBLE|FL_DEPTH.
 267:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 268:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   Fl_Gl_Window(int W, int H, const char *l=0) : Fl_Window(W,H,l) {init();}
 1289              		.loc 3 268 0
 1290 0004 E8000000 		call	_ZN9Fl_WindowC2EiiPKc
 1290      00
 1291              	.LVL109:
 1292 0009 4889DF   		movq	%rbx, %rdi
 1293 000c 48C70300 		movq	$_ZTV12Fl_Gl_Window+16, (%rbx)
 1293      000000
 1294 0013 E8000000 		call	_ZN12Fl_Gl_Window4initEv
 1294      00
 1295              	.LVL110:
 1296              	.LBE193:
 1297              	.LBE192:
 189:fltk-1.3.4-1/src/glut_compatability.cxx ****  173:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1298              		.loc 4 189 0
 1299 0018 48C70300 		movq	$_ZTV14Fl_Glut_Window+16, (%rbx)
 1299      000000
 1300 001f 4889DF   		movq	%rbx, %rdi
 1301              	.LBE191:
 1302 0022 5B       		popq	%rbx
 1303              		.cfi_def_cfa_offset 8
 1304              	.LVL111:
 1305              	.LBB194:
 1306 0023 E9000000 		jmp	_ZN14Fl_Glut_Window5_initEv
 1306      00
 1307              	.LVL112:
 1308              	.LBE194:
 1309              		.cfi_endproc
 1310              	.LFE395:
 1312              		.section	.text.unlikely._ZN14Fl_Glut_WindowC2EiiPKc
 1313              	.LCOLDE15:
 1314              		.section	.text._ZN14Fl_Glut_WindowC2EiiPKc
 1315              	.LHOTE15:
 1316              		.globl	_ZN14Fl_Glut_WindowC1EiiPKc
 1317              		.set	_ZN14Fl_Glut_WindowC1EiiPKc,_ZN14Fl_Glut_WindowC2EiiPKc
 1318              		.section	.text.unlikely._ZN14Fl_Glut_WindowC2EiiiiPKc,"ax",@progbits
 1319              		.align 2
 1320              	.LCOLDB16:
 1321              		.section	.text._ZN14Fl_Glut_WindowC2EiiiiPKc,"ax",@progbits
 1322              	.LHOTB16:
 1323              		.align 2
 1324              		.p2align 4,,15
 1325              		.globl	_ZN14Fl_Glut_WindowC2EiiiiPKc
 1327              	_ZN14Fl_Glut_WindowC2EiiiiPKc:
 1328              	.LFB398:
 192:fltk-1.3.4-1/src/glut_compatability.cxx ****  176:fltk-1.3.4-1/FL/Fl_Group.H ****   unsigned int clip_children() { return (flags() & CLIP_CHILDR
 1329              		.loc 4 192 0
 1330              		.cfi_startproc
 1331              	.LVL113:
 1332 0000 53       		pushq	%rbx
 1333              		.cfi_def_cfa_offset 16
 1334              		.cfi_offset 3, -16
 192:fltk-1.3.4-1/src/glut_compatability.cxx ****  176:fltk-1.3.4-1/FL/Fl_Group.H ****   unsigned int clip_children() { return (flags() & CLIP_CHILDR
 1335              		.loc 4 192 0
 1336 0001 4889FB   		movq	%rdi, %rbx
 1337              	.LBB195:
 1338              	.LBB196:
 1339              	.LBB197:
 269:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**
 270:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     Creates a new Fl_Gl_Window widget using the given position,
 271:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     size, and label string. The default boxtype is FL_NO_BOX. The
 272:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     default mode is FL_RGB|FL_DOUBLE|FL_DEPTH.
 273:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   */
 274:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
 275:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   Fl_Gl_Window(int X, int Y, int W, int H, const char *l=0)
 276:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****     : Fl_Window(X,Y,W,H,l) {init();}
 1340              		.loc 3 276 0
 1341 0004 E8000000 		call	_ZN9Fl_WindowC2EiiiiPKc
 1341      00
 1342              	.LVL114:
 1343 0009 4889DF   		movq	%rbx, %rdi
 1344 000c 48C70300 		movq	$_ZTV12Fl_Gl_Window+16, (%rbx)
 1344      000000
 1345 0013 E8000000 		call	_ZN12Fl_Gl_Window4initEv
 1345      00
 1346              	.LVL115:
 1347              	.LBE197:
 1348              	.LBE196:
 193:fltk-1.3.4-1/src/glut_compatability.cxx ****  177:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1349              		.loc 4 193 0
 1350 0018 48C70300 		movq	$_ZTV14Fl_Glut_Window+16, (%rbx)
 1350      000000
 1351 001f 4889DF   		movq	%rbx, %rdi
 1352              	.LBE195:
 1353 0022 5B       		popq	%rbx
 1354              		.cfi_def_cfa_offset 8
 1355              	.LVL116:
 1356              	.LBB198:
 1357 0023 E9000000 		jmp	_ZN14Fl_Glut_Window5_initEv
 1357      00
 1358              	.LVL117:
 1359              	.LBE198:
 1360              		.cfi_endproc
 1361              	.LFE398:
 1363              		.section	.text.unlikely._ZN14Fl_Glut_WindowC2EiiiiPKc
 1364              	.LCOLDE16:
 1365              		.section	.text._ZN14Fl_Glut_WindowC2EiiiiPKc
 1366              	.LHOTE16:
 1367              		.globl	_ZN14Fl_Glut_WindowC1EiiiiPKc
 1368              		.set	_ZN14Fl_Glut_WindowC1EiiiiPKc,_ZN14Fl_Glut_WindowC2EiiiiPKc
 1369              		.section	.text.unlikely._Z8glutInitPiPPc,"ax",@progbits
 1370              	.LCOLDB17:
 1371              		.section	.text._Z8glutInitPiPPc,"ax",@progbits
 1372              	.LHOTB17:
 1373              		.p2align 4,,15
 1374              		.globl	_Z8glutInitPiPPc
 1376              	_Z8glutInitPiPPc:
 1377              	.LFB400:
 198:fltk-1.3.4-1/src/glut_compatability.cxx ****   21              	.LVL0:
 1378              		.loc 4 198 0
 1379              		.cfi_startproc
 1380              	.LVL118:
 1381 0000 4155     		pushq	%r13
 1382              		.cfi_def_cfa_offset 16
 1383              		.cfi_offset 13, -16
 1384 0002 4154     		pushq	%r12
 1385              		.cfi_def_cfa_offset 24
 1386              		.cfi_offset 12, -24
 200:fltk-1.3.4-1/src/glut_compatability.cxx ****   23 0000 4889F8   		movq	%rdi, %rax
 1387              		.loc 4 200 0
 1388 0004 48B90000 		movabsq	$1143914305352105984, %rcx
 1388      00000000 
 1388      E00F
 198:fltk-1.3.4-1/src/glut_compatability.cxx ****   21              	.LVL0:
 1389              		.loc 4 198 0
 1390 000e 55       		pushq	%rbp
 1391              		.cfi_def_cfa_offset 32
 1392              		.cfi_offset 6, -32
 1393 000f 53       		pushq	%rbx
 1394              		.cfi_def_cfa_offset 40
 1395              		.cfi_offset 3, -40
 1396 0010 4889FD   		movq	%rdi, %rbp
 1397 0013 4889F3   		movq	%rsi, %rbx
 1398 0016 4883EC18 		subq	$24, %rsp
 1399              		.cfi_def_cfa_offset 64
 198:fltk-1.3.4-1/src/glut_compatability.cxx ****   21              	.LVL0:
 1400              		.loc 4 198 0
 1401 001a 64488B04 		movq	%fs:40, %rax
 1401      25280000 
 1401      00
 1402 0023 48894424 		movq	%rax, 8(%rsp)
 1402      08
 1403 0028 31C0     		xorl	%eax, %eax
 199:fltk-1.3.4-1/src/glut_compatability.cxx ****   22              		.loc 1 179 0
 1404              		.loc 4 199 0
 1405 002a 8B07     		movl	(%rdi), %eax
 200:fltk-1.3.4-1/src/glut_compatability.cxx ****   23 0000 4889F8   		movq	%rdi, %rax
 1406              		.loc 4 200 0
 1407 002c 48C7C7FF 		movq	$-1, %rdi
 1407      FFFFFF
 1408              	.LVL119:
 199:fltk-1.3.4-1/src/glut_compatability.cxx ****   22              		.loc 1 179 0
 1409              		.loc 4 199 0
 1410 0033 89050000 		movl	%eax, _ZL8initargc(%rip)
 1410      0000
 200:fltk-1.3.4-1/src/glut_compatability.cxx ****   23 0000 4889F8   		movq	%rdi, %rax
 1411              		.loc 4 200 0
 1412 0039 83C001   		addl	$1, %eax
 1413 003c 4898     		cltq
 1414 003e 488D14C5 		leaq	0(,%rax,8), %rdx
 1414      00000000 
 1415 0046 4839C8   		cmpq	%rcx, %rax
 1416 0049 480F46FA 		cmovbe	%rdx, %rdi
 1417 004d E8000000 		call	_Znam
 1417      00
 1418              	.LVL120:
 202:fltk-1.3.4-1/src/glut_compatability.cxx ****   25              		.cfi_endproc
 1419              		.loc 4 202 0
 1420 0052 8B7D00   		movl	0(%rbp), %edi
 1421 0055 31D2     		xorl	%edx, %edx
 200:fltk-1.3.4-1/src/glut_compatability.cxx ****   23 0000 4889F8   		movq	%rdi, %rax
 1422              		.loc 4 200 0
 1423 0057 48890500 		movq	%rax, _ZL8initargv(%rip)
 1423      000000
 202:fltk-1.3.4-1/src/glut_compatability.cxx ****   25              		.cfi_endproc
 1424              		.loc 4 202 0
 1425 005e 85FF     		testl	%edi, %edi
 1426 0060 7816     		js	.L182
 1427              		.p2align 4,,10
 1428 0062 660F1F44 		.p2align 3
 1428      0000
 1429              	.L188:
 202:fltk-1.3.4-1/src/glut_compatability.cxx ****   25              		.cfi_endproc
 1430              		.loc 4 202 0 is_stmt 0 discriminator 2
 1431 0068 488B0CD3 		movq	(%rbx,%rdx,8), %rcx
 1432 006c 48890CD0 		movq	%rcx, (%rax,%rdx,8)
 1433 0070 4883C201 		addq	$1, %rdx
 1434 0074 39D7     		cmpl	%edx, %edi
 1435 0076 7DF0     		jge	.L188
 1436              	.L182:
 1437              	.LVL121:
 203:fltk-1.3.4-1/src/glut_compatability.cxx ****   26              	.LFE270:
 1438              		.loc 4 203 0 is_stmt 1
 1439 0078 C7442404 		movl	$1, 4(%rsp)
 1439      01000000 
 1440 0080 4531E4   		xorl	%r12d, %r12d
 1441 0083 B8010000 		movl	$1, %eax
 1441      00
 1442              	.LVL122:
 1443              	.L180:
 1444 0088 458D6C24 		leal	1(%r12), %r13d
 1444      01
 1445 008d EB19     		jmp	.L185
 1446              	.LVL123:
 1447 008f 90       		.p2align 4,,10
 1448              		.p2align 3
 1449              	.L192:
 204:fltk-1.3.4-1/src/glut_compatability.cxx ****   28              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as
 1450              		.loc 4 204 0
 1451 0090 488D5424 		leaq	4(%rsp), %rdx
 1451      04
 1452 0095 4889DE   		movq	%rbx, %rsi
 1453 0098 E8000000 		call	_ZN2Fl3argEiPPcRi
 1453      00
 1454              	.LVL124:
 1455 009d 85C0     		testl	%eax, %eax
 1456 009f 743F     		je	.L184
 1457 00a1 8B7D00   		movl	0(%rbp), %edi
 1458 00a4 8B442404 		movl	4(%rsp), %eax
 1459              	.LVL125:
 1460              	.L185:
 203:fltk-1.3.4-1/src/glut_compatability.cxx ****   26              	.LFE270:
 1461              		.loc 4 203 0 discriminator 1
 1462 00a8 39C7     		cmpl	%eax, %edi
 1463 00aa 7FE4     		jg	.L192
 207:fltk-1.3.4-1/src/glut_compatability.cxx ****   31              	.LHOTE0:
 1464              		.loc 4 207 0
 1465 00ac 4963C5   		movslq	%r13d, %rax
 1466 00af 48C704C3 		movq	$0, (%rbx,%rax,8)
 1466      00000000 
 208:fltk-1.3.4-1/src/glut_compatability.cxx ****   32              		.section	.text.unlikely._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window
 1467              		.loc 4 208 0
 1468 00b7 44896D00 		movl	%r13d, 0(%rbp)
 209:fltk-1.3.4-1/src/glut_compatability.cxx ****   33              		.align 2
 1469              		.loc 4 209 0
 1470 00bb 488B4424 		movq	8(%rsp), %rax
 1470      08
 1471 00c0 64483304 		xorq	%fs:40, %rax
 1471      25280000 
 1471      00
 1472 00c9 7533     		jne	.L193
 1473 00cb 4883C418 		addq	$24, %rsp
 1474              		.cfi_remember_state
 1475              		.cfi_def_cfa_offset 40
 1476 00cf 5B       		popq	%rbx
 1477              		.cfi_def_cfa_offset 32
 1478              	.LVL126:
 1479 00d0 5D       		popq	%rbp
 1480              		.cfi_def_cfa_offset 24
 1481              	.LVL127:
 1482 00d1 415C     		popq	%r12
 1483              		.cfi_def_cfa_offset 16
 1484 00d3 415D     		popq	%r13
 1485              		.cfi_def_cfa_offset 8
 1486              	.LVL128:
 1487 00d5 C3       		ret
 1488              	.LVL129:
 1489 00d6 662E0F1F 		.p2align 4,,10
 1489      84000000 
 1489      0000
 1490              		.p2align 3
 1491              	.L184:
 1492              		.cfi_restore_state
 205:fltk-1.3.4-1/src/glut_compatability.cxx ****   29              	.LCOLDE0:
 1493              		.loc 4 205 0
 1494 00e0 48635424 		movslq	4(%rsp), %rdx
 1494      04
 1495 00e5 8D4201   		leal	1(%rdx), %eax
 1496 00e8 488B14D3 		movq	(%rbx,%rdx,8), %rdx
 1497 00ec 89442404 		movl	%eax, 4(%rsp)
 1498 00f0 4A8954E3 		movq	%rdx, 8(%rbx,%r12,8)
 1498      08
 1499 00f5 4983C401 		addq	$1, %r12
 1500              	.LVL130:
 1501 00f9 8B7D00   		movl	0(%rbp), %edi
 1502 00fc EB8A     		jmp	.L180
 1503              	.LVL131:
 1504              	.L193:
 209:fltk-1.3.4-1/src/glut_compatability.cxx ****   33              		.align 2
 1505              		.loc 4 209 0
 1506 00fe E8000000 		call	__stack_chk_fail
 1506      00
 1507              	.LVL132:
 1508              		.cfi_endproc
 1509              	.LFE400:
 1511              		.section	.text.unlikely._Z8glutInitPiPPc
 1512              	.LCOLDE17:
 1513              		.section	.text._Z8glutInitPiPPc
 1514              	.LHOTE17:
 1515              		.section	.text.unlikely._Z19glutInitDisplayModej,"ax",@progbits
 1516              	.LCOLDB18:
 1517              		.section	.text._Z19glutInitDisplayModej,"ax",@progbits
 1518              	.LHOTB18:
 1519              		.p2align 4,,15
 1520              		.globl	_Z19glutInitDisplayModej
 1522              	_Z19glutInitDisplayModej:
 1523              	.LFB401:
 211:fltk-1.3.4-1/src/glut_compatability.cxx ****   35              		.section	.text._ZN9Fl_Window9as_windowEv,"axG",@progbits,_ZN9Fl_Window9as_windo
 1524              		.loc 4 211 0
 1525              		.cfi_startproc
 1526              	.LVL133:
 212:fltk-1.3.4-1/src/glut_compatability.cxx ****   36              	.LHOTB1:
 1527              		.loc 4 212 0
 1528 0000 893D0000 		movl	%edi, _ZL9glut_mode(%rip)
 1528      0000
 1529 0006 C3       		ret
 1530              		.cfi_endproc
 1531              	.LFE401:
 1533              		.section	.text.unlikely._Z19glutInitDisplayModej
 1534              	.LCOLDE18:
 1535              		.section	.text._Z19glutInitDisplayModej
 1536              	.LHOTE18:
 1537              		.section	.text.unlikely._Z12glutMainLoopv,"ax",@progbits
 1538              	.LCOLDB19:
 1539              		.section	.text._Z12glutMainLoopv,"ax",@progbits
 1540              	.LHOTB19:
 1541              		.p2align 4,,15
 1542              		.globl	_Z12glutMainLoopv
 1544              	_Z12glutMainLoopv:
 1545              	.LFB402:
 215:fltk-1.3.4-1/src/glut_compatability.cxx ****   39              		.weak	_ZN9Fl_Window9as_windowEv
 1546              		.loc 4 215 0
 1547              		.cfi_startproc
 215:fltk-1.3.4-1/src/glut_compatability.cxx ****   39              		.weak	_ZN9Fl_Window9as_windowEv
 1548              		.loc 4 215 0
 1549 0000 E9000000 		jmp	_ZN2Fl3runEv
 1549      00
 1550              	.LVL134:
 1551              		.cfi_endproc
 1552              	.LFE402:
 1554              		.section	.text.unlikely._Z12glutMainLoopv
 1555              	.LCOLDE19:
 1556              		.section	.text._Z12glutMainLoopv
 1557              	.LHOTE19:
 1558              		.section	.text.unlikely._Z22glutInitWindowPositionii,"ax",@progbits
 1559              	.LCOLDB20:
 1560              		.section	.text._Z22glutInitWindowPositionii,"ax",@progbits
 1561              	.LHOTB20:
 1562              		.p2align 4,,15
 1563              		.globl	_Z22glutInitWindowPositionii
 1565              	_Z22glutInitWindowPositionii:
 1566              	.LFB403:
 221:fltk-1.3.4-1/src/glut_compatability.cxx ****    3:fltk-1.3.4-1/FL/Fl_Window.H **** //
 1567              		.loc 4 221 0
 1568              		.cfi_startproc
 1569              	.LVL135:
 222:fltk-1.3.4-1/src/glut_compatability.cxx ****    4:fltk-1.3.4-1/FL/Fl_Window.H **** // Window header file for the Fast Light Tool Kit (FLTK).
 1570              		.loc 4 222 0
 1571 0000 893D0000 		movl	%edi, _ZL5initx(%rip)
 1571      0000
 1572 0006 89350000 		movl	%esi, _ZL5inity(%rip)
 1572      0000
 1573 000c C7050000 		movl	$1, _ZL7initpos(%rip)
 1573      00000100 
 1573      0000
 1574 0016 C3       		ret
 1575              		.cfi_endproc
 1576              	.LFE403:
 1578              		.section	.text.unlikely._Z22glutInitWindowPositionii
 1579              	.LCOLDE20:
 1580              		.section	.text._Z22glutInitWindowPositionii
 1581              	.LHOTE20:
 1582              		.section	.text.unlikely._Z18glutInitWindowSizeii,"ax",@progbits
 1583              	.LCOLDB21:
 1584              		.section	.text._Z18glutInitWindowSizeii,"ax",@progbits
 1585              	.LHOTB21:
 1586              		.p2align 4,,15
 1587              		.globl	_Z18glutInitWindowSizeii
 1589              	_Z18glutInitWindowSizeii:
 1590              	.LFB404:
 225:fltk-1.3.4-1/src/glut_compatability.cxx ****    7:fltk-1.3.4-1/FL/Fl_Window.H **** //
 1591              		.loc 4 225 0
 1592              		.cfi_startproc
 1593              	.LVL136:
 226:fltk-1.3.4-1/src/glut_compatability.cxx ****    8:fltk-1.3.4-1/FL/Fl_Window.H **** // This library is free software. Distribution and use rights
 1594              		.loc 4 226 0
 1595 0000 893D0000 		movl	%edi, _ZL5initw(%rip)
 1595      0000
 1596 0006 89350000 		movl	%esi, _ZL5inith(%rip)
 1596      0000
 1597 000c C3       		ret
 1598              		.cfi_endproc
 1599              	.LFE404:
 1601              		.section	.text.unlikely._Z18glutInitWindowSizeii
 1602              	.LCOLDE21:
 1603              		.section	.text._Z18glutInitWindowSizeii
 1604              	.LHOTE21:
 1605              		.section	.text.unlikely._Z16glutCreateWindowPKc,"ax",@progbits
 1606              	.LCOLDB22:
 1607              		.section	.text._Z16glutCreateWindowPKc,"ax",@progbits
 1608              	.LHOTB22:
 1609              		.p2align 4,,15
 1610              		.globl	_Z16glutCreateWindowPKc
 1612              	_Z16glutCreateWindowPKc:
 1613              	.LFB406:
 233:fltk-1.3.4-1/src/glut_compatability.cxx ****   15:fltk-1.3.4-1/FL/Fl_Window.H **** //
 1614              		.loc 4 233 0
 1615              		.cfi_startproc
 1616              	.LVL137:
 1617 0000 55       		pushq	%rbp
 1618              		.cfi_def_cfa_offset 16
 1619              		.cfi_offset 6, -16
 1620 0001 53       		pushq	%rbx
 1621              		.cfi_def_cfa_offset 24
 1622              		.cfi_offset 3, -24
 1623 0002 4889FD   		movq	%rdi, %rbp
 236:fltk-1.3.4-1/src/glut_compatability.cxx ****   18:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1624              		.loc 4 236 0
 1625 0005 BF800100 		movl	$384, %edi
 1625      00
 1626              	.LVL138:
 233:fltk-1.3.4-1/src/glut_compatability.cxx ****   15:fltk-1.3.4-1/FL/Fl_Window.H **** //
 1627              		.loc 4 233 0
 1628 000a 4883EC08 		subq	$8, %rsp
 1629              		.cfi_def_cfa_offset 32
 235:fltk-1.3.4-1/src/glut_compatability.cxx ****   17:fltk-1.3.4-1/FL/Fl_Window.H **** //
 1630              		.loc 4 235 0
 1631 000e 8B050000 		movl	_ZL7initpos(%rip), %eax
 1631      0000
 1632 0014 85C0     		testl	%eax, %eax
 1633 0016 0F84A400 		je	.L199
 1633      0000
 236:fltk-1.3.4-1/src/glut_compatability.cxx ****   18:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1634              		.loc 4 236 0
 1635 001c E8000000 		call	_Znwm
 1635      00
 1636              	.LVL139:
 1637 0021 448B0500 		movl	_ZL5inith(%rip), %r8d
 1637      000000
 1638 0028 8B0D0000 		movl	_ZL5initw(%rip), %ecx
 1638      0000
 1639 002e 4989E9   		movq	%rbp, %r9
 1640 0031 8B150000 		movl	_ZL5inity(%rip), %edx
 1640      0000
 1641 0037 8B350000 		movl	_ZL5initx(%rip), %esi
 1641      0000
 1642 003d 4889C7   		movq	%rax, %rdi
 1643 0040 4889C3   		movq	%rax, %rbx
 1644 0043 E8000000 		call	_ZN14Fl_Glut_WindowC1EiiiiPKc
 1644      00
 1645              	.LVL140:
 237:fltk-1.3.4-1/src/glut_compatability.cxx ****   19:fltk-1.3.4-1/FL/Fl_Window.H **** /** \file
 1646              		.loc 4 237 0
 1647 0048 C7050000 		movl	$0, _ZL7initpos(%rip)
 1647      00000000 
 1647      0000
 1648              	.L200:
 1649              	.LVL141:
 242:fltk-1.3.4-1/src/glut_compatability.cxx ****   24:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1650              		.loc 4 242 0
 1651 0052 8B350000 		movl	_ZL8initargc(%rip), %esi
 1651      0000
 1652              	.LBB199:
 1653              	.LBB200:
 148:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 1654              		.loc 1 148 0
 1655 0058 48899B88 		movq	%rbx, 136(%rbx)
 1655      000000
 1656              	.LVL142:
 1657              	.LBE200:
 1658              	.LBE199:
 242:fltk-1.3.4-1/src/glut_compatability.cxx ****   24:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1659              		.loc 4 242 0
 1660 005f 85F6     		testl	%esi, %esi
 1661 0061 744D     		je	.L201
 1662              	.LVL143:
 1663              	.LBB201:
 1664              	.LBB202:
  78:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   void flush();
 1665              		.loc 3 78 0
 1666 0063 488B1500 		movq	_ZL8initargv(%rip), %rdx
 1666      000000
 1667 006a 4889DF   		movq	%rbx, %rdi
 1668 006d E8000000 		call	_ZN9Fl_Window4showEiPPc
 1668      00
 1669              	.LVL144:
 1670              	.LBE202:
 1671              	.LBE201:
 244:fltk-1.3.4-1/src/glut_compatability.cxx ****   26:fltk-1.3.4-1/FL/Fl_Window.H **** #include <windows.h>
 1672              		.loc 4 244 0
 1673 0072 C7050000 		movl	$0, _ZL8initargc(%rip)
 1673      00000000 
 1673      0000
 1674              	.L202:
 1675              	.LVL145:
 1676              	.LBB203:
 1677              	.LBB204:
 125:fltk-1.3.4-1/FL/Fl_Gl_Window.H **** 
 1678              		.loc 3 125 0
 1679 007c 80A30801 		andb	$-4, 264(%rbx)
 1679      0000FC
 1680              	.LVL146:
 1681              	.LBE204:
 1682              	.LBE203:
 1683              	.LBB205:
 1684              	.LBB206:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1685              		.loc 4 58 0
 1686 0083 4883BBA0 		cmpq	$0, 160(%rbx)
 1686      00000000 
  57:fltk-1.3.4-1/src/glut_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
 1687              		.loc 4 57 0
 1688 008b 48891D00 		movq	%rbx, glut_window(%rip)
 1688      000000
 1689              	.LVL147:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1690              		.loc 4 58 0
 1691 0092 7408     		je	.L203
 1692 0094 4889DF   		movq	%rbx, %rdi
 1693 0097 E8000000 		call	_ZN12Fl_Gl_Window12make_currentEv
 1693      00
 1694              	.LVL148:
 1695              	.L203:
 1696              	.LBE206:
 1697              	.LBE205:
 251:fltk-1.3.4-1/src/glut_compatability.cxx ****   33:fltk-1.3.4-1/FL/Fl_Window.H **** #define FL_WINDOW 0xF0		///< window type id all subclasses ha
 1698              		.loc 4 251 0
 1699 009c 8B831C01 		movl	284(%rbx), %eax
 1699      0000
 252:fltk-1.3.4-1/src/glut_compatability.cxx ****   34:fltk-1.3.4-1/FL/Fl_Window.H **** #define FL_DOUBLE_WINDOW 0xF1   ///< double window type id
 1700              		.loc 4 252 0
 1701 00a2 4883C408 		addq	$8, %rsp
 1702              		.cfi_remember_state
 1703              		.cfi_def_cfa_offset 24
 1704 00a6 5B       		popq	%rbx
 1705              		.cfi_def_cfa_offset 16
 1706              	.LVL149:
 1707 00a7 5D       		popq	%rbp
 1708              		.cfi_def_cfa_offset 8
 1709              	.LVL150:
 1710 00a8 C3       		ret
 1711              	.LVL151:
 1712 00a9 0F1F8000 		.p2align 4,,10
 1712      000000
 1713              		.p2align 3
 1714              	.L201:
 1715              		.cfi_restore_state
 246:fltk-1.3.4-1/src/glut_compatability.cxx ****   28:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1716              		.loc 4 246 0
 1717 00b0 488B03   		movq	(%rbx), %rax
 1718 00b3 4889DF   		movq	%rbx, %rdi
 1719 00b6 FF5028   		call	*40(%rax)
 1720              	.LVL152:
 1721 00b9 EBC1     		jmp	.L202
 1722              	.LVL153:
 1723 00bb 0F1F4400 		.p2align 4,,10
 1723      00
 1724              		.p2align 3
 1725              	.L199:
 239:fltk-1.3.4-1/src/glut_compatability.cxx ****   21:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1726              		.loc 4 239 0
 1727 00c0 E8000000 		call	_Znwm
 1727      00
 1728              	.LVL154:
 1729 00c5 8B150000 		movl	_ZL5inith(%rip), %edx
 1729      0000
 1730 00cb 8B350000 		movl	_ZL5initw(%rip), %esi
 1730      0000
 1731 00d1 4889E9   		movq	%rbp, %rcx
 1732 00d4 4889C7   		movq	%rax, %rdi
 1733 00d7 4889C3   		movq	%rax, %rbx
 1734 00da E8000000 		call	_ZN14Fl_Glut_WindowC1EiiPKc
 1734      00
 1735              	.LVL155:
 1736 00df E96EFFFF 		jmp	.L200
 1736      FF
 1737              		.cfi_endproc
 1738              	.LFE406:
 1740              		.section	.text.unlikely._Z16glutCreateWindowPKc
 1741              	.LCOLDE22:
 1742              		.section	.text._Z16glutCreateWindowPKc
 1743              	.LHOTE22:
 1744              		.section	.text.unlikely._Z16glutCreateWindowPc,"ax",@progbits
 1745              	.LCOLDB23:
 1746              		.section	.text._Z16glutCreateWindowPc,"ax",@progbits
 1747              	.LHOTB23:
 1748              		.p2align 4,,15
 1749              		.globl	_Z16glutCreateWindowPc
 1751              	_Z16glutCreateWindowPc:
 1752              	.LFB405:
 229:fltk-1.3.4-1/src/glut_compatability.cxx ****   11:fltk-1.3.4-1/FL/Fl_Window.H **** //
 1753              		.loc 4 229 0
 1754              		.cfi_startproc
 1755              	.LVL156:
 230:fltk-1.3.4-1/src/glut_compatability.cxx ****   12:fltk-1.3.4-1/FL/Fl_Window.H **** //     http://www.fltk.org/COPYING.php
 1756              		.loc 4 230 0
 1757 0000 E9000000 		jmp	_Z16glutCreateWindowPKc
 1757      00
 1758              	.LVL157:
 1759              		.cfi_endproc
 1760              	.LFE405:
 1762              		.section	.text.unlikely._Z16glutCreateWindowPc
 1763              	.LCOLDE23:
 1764              		.section	.text._Z16glutCreateWindowPc
 1765              	.LHOTE23:
 1766              		.section	.text.unlikely._Z19glutCreateSubWindowiiiii,"ax",@progbits
 1767              	.LCOLDB24:
 1768              		.section	.text._Z19glutCreateSubWindowiiiii,"ax",@progbits
 1769              	.LHOTB24:
 1770              		.p2align 4,,15
 1771              		.globl	_Z19glutCreateSubWindowiiiii
 1773              	_Z19glutCreateSubWindowiiiii:
 1774              	.LFB407:
 254:fltk-1.3.4-1/src/glut_compatability.cxx ****   36:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_X;
 1775              		.loc 4 254 0
 1776              		.cfi_startproc
 1777              	.LVL158:
 1778 0000 4156     		pushq	%r14
 1779              		.cfi_def_cfa_offset 16
 1780              		.cfi_offset 14, -16
 1781 0002 4155     		pushq	%r13
 1782              		.cfi_def_cfa_offset 24
 1783              		.cfi_offset 13, -24
 1784 0004 4189CE   		movl	%ecx, %r14d
 1785 0007 4154     		pushq	%r12
 1786              		.cfi_def_cfa_offset 32
 1787              		.cfi_offset 12, -32
 1788 0009 55       		pushq	%rbp
 1789              		.cfi_def_cfa_offset 40
 1790              		.cfi_offset 6, -40
 1791 000a 4863EF   		movslq	%edi, %rbp
 1792 000d 53       		pushq	%rbx
 1793              		.cfi_def_cfa_offset 48
 1794              		.cfi_offset 3, -48
 255:fltk-1.3.4-1/src/glut_compatability.cxx ****   37:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_RGB_Image;
 1795              		.loc 4 255 0
 1796 000e BF800100 		movl	$384, %edi
 1796      00
 1797              	.LVL159:
 254:fltk-1.3.4-1/src/glut_compatability.cxx ****   36:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_X;
 1798              		.loc 4 254 0
 1799 0013 4189F4   		movl	%esi, %r12d
 1800 0016 4189D5   		movl	%edx, %r13d
 1801 0019 4883EC10 		subq	$16, %rsp
 1802              		.cfi_def_cfa_offset 64
 254:fltk-1.3.4-1/src/glut_compatability.cxx ****   36:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_X;
 1803              		.loc 4 254 0
 1804 001d 44894424 		movl	%r8d, 12(%rsp)
 1804      0C
 255:fltk-1.3.4-1/src/glut_compatability.cxx ****   37:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_RGB_Image;
 1805              		.loc 4 255 0
 1806 0022 E8000000 		call	_Znwm
 1806      00
 1807              	.LVL160:
 1808 0027 448B4424 		movl	12(%rsp), %r8d
 1808      0C
 1809 002c 4889C7   		movq	%rax, %rdi
 1810 002f 4531C9   		xorl	%r9d, %r9d
 1811 0032 4489F1   		movl	%r14d, %ecx
 1812 0035 4489EA   		movl	%r13d, %edx
 1813 0038 4489E6   		movl	%r12d, %esi
 1814 003b 4889C3   		movq	%rax, %rbx
 1815 003e E8000000 		call	_ZN14Fl_Glut_WindowC1EiiiiPKc
 1815      00
 1816              	.LVL161:
 1817              	.LBB207:
 1818              	.LBB208:
  98:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget&, int i);
 1819              		.loc 1 98 0
 1820 0043 488B3CED 		movq	_ZL7windows(,%rbp,8), %rdi
 1820      00000000 
 1821 004b 4889DE   		movq	%rbx, %rsi
 1822 004e E8000000 		call	_ZN8Fl_Group3addER9Fl_Widget
 1822      00
 1823              	.LVL162:
 1824 0053 488B04ED 		movq	_ZL7windows(,%rbp,8), %rax
 1824      00000000 
 1825              	.LBE208:
 1826              	.LBE207:
 257:fltk-1.3.4-1/src/glut_compatability.cxx ****   39:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1827              		.loc 4 257 0
 1828 005b 4883B8A0 		cmpq	$0, 160(%rax)
 1828      00000000 
 1829 0063 7409     		je	.L207
 257:fltk-1.3.4-1/src/glut_compatability.cxx ****   39:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1830              		.loc 4 257 0 is_stmt 0 discriminator 1
 1831 0065 488B03   		movq	(%rbx), %rax
 1832 0068 4889DF   		movq	%rbx, %rdi
 1833 006b FF5028   		call	*40(%rax)
 1834              	.LVL163:
 1835              	.L207:
 1836              	.LBB209:
 1837              	.LBB210:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1838              		.loc 4 58 0 is_stmt 1
 1839 006e 4883BBA0 		cmpq	$0, 160(%rbx)
 1839      00000000 
  57:fltk-1.3.4-1/src/glut_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
 1840              		.loc 4 57 0
 1841 0076 48891D00 		movq	%rbx, glut_window(%rip)
 1841      000000
 1842              	.LVL164:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1843              		.loc 4 58 0
 1844 007d 7408     		je	.L208
 1845 007f 4889DF   		movq	%rbx, %rdi
 1846 0082 E8000000 		call	_ZN12Fl_Gl_Window12make_currentEv
 1846      00
 1847              	.LVL165:
 1848              	.L208:
 1849              	.LBE210:
 1850              	.LBE209:
 259:fltk-1.3.4-1/src/glut_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Window.H ****   This widget produces an actual window.  This can either be 
 1851              		.loc 4 259 0
 1852 0087 8B831C01 		movl	284(%rbx), %eax
 1852      0000
 260:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Window.H ****   window, with a border and title and all the window manageme
 1853              		.loc 4 260 0
 1854 008d 4883C410 		addq	$16, %rsp
 1855              		.cfi_def_cfa_offset 48
 1856 0091 5B       		popq	%rbx
 1857              		.cfi_def_cfa_offset 40
 1858              	.LVL166:
 1859 0092 5D       		popq	%rbp
 1860              		.cfi_def_cfa_offset 32
 1861              	.LVL167:
 1862 0093 415C     		popq	%r12
 1863              		.cfi_def_cfa_offset 24
 1864              	.LVL168:
 1865 0095 415D     		popq	%r13
 1866              		.cfi_def_cfa_offset 16
 1867              	.LVL169:
 1868 0097 415E     		popq	%r14
 1869              		.cfi_def_cfa_offset 8
 1870              	.LVL170:
 1871 0099 C3       		ret
 1872              		.cfi_endproc
 1873              	.LFE407:
 1875              		.section	.text.unlikely._Z19glutCreateSubWindowiiiii
 1876              	.LCOLDE24:
 1877              		.section	.text._Z19glutCreateSubWindowiiiii
 1878              	.LHOTE24:
 1879              		.section	.text.unlikely._Z17glutDestroyWindowi,"ax",@progbits
 1880              	.LCOLDB25:
 1881              		.section	.text._Z17glutDestroyWindowi,"ax",@progbits
 1882              	.LHOTB25:
 1883              		.p2align 4,,15
 1884              		.globl	_Z17glutDestroyWindowi
 1886              	_Z17glutDestroyWindowi:
 1887              	.LFB412:
 267:fltk-1.3.4-1/src/glut_compatability.cxx ****   49:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1888              		.loc 4 267 0
 1889              		.cfi_startproc
 1890              	.LVL171:
 269:fltk-1.3.4-1/src/glut_compatability.cxx ****   51:fltk-1.3.4-1/FL/Fl_Window.H ****   double-buffering, overlay, menu, and OpenGL support.
 1891              		.loc 4 269 0
 1892 0000 4863FF   		movslq	%edi, %rdi
 1893 0003 488B3CFD 		movq	_ZL7windows(,%rdi,8), %rdi
 1893      00000000 
 1894              	.LVL172:
 1895 000b 4885FF   		testq	%rdi, %rdi
 1896 000e 7410     		je	.L210
 269:fltk-1.3.4-1/src/glut_compatability.cxx ****   51:fltk-1.3.4-1/FL/Fl_Window.H ****   double-buffering, overlay, menu, and OpenGL support.
 1897              		.loc 4 269 0 is_stmt 0 discriminator 1
 1898 0010 488B07   		movq	(%rdi), %rax
 1899 0013 FF6008   		jmp	*8(%rax)
 1900              	.LVL173:
 1901 0016 662E0F1F 		.p2align 4,,10
 1901      84000000 
 1901      0000
 1902              		.p2align 3
 1903              	.L210:
 1904 0020 F3C3     		rep ret
 1905              		.cfi_endproc
 1906              	.LFE412:
 1908              		.section	.text.unlikely._Z17glutDestroyWindowi
 1909              	.LCOLDE25:
 1910              		.section	.text._Z17glutDestroyWindowi
 1911              	.LHOTE25:
 1912              		.section	.text.unlikely._Z23glutPostWindowRedisplayi,"ax",@progbits
 1913              	.LCOLDB26:
 1914              		.section	.text._Z23glutPostWindowRedisplayi,"ax",@progbits
 1915              	.LHOTB26:
 1916              		.p2align 4,,15
 1917              		.globl	_Z23glutPostWindowRedisplayi
 1919              	_Z23glutPostWindowRedisplayi:
 1920              	.LFB413:
 272:fltk-1.3.4-1/src/glut_compatability.cxx ****   54:fltk-1.3.4-1/FL/Fl_Window.H ****   using the window manager and Fl::modal() is zero or equal t
 1921              		.loc 4 272 0 is_stmt 1
 1922              		.cfi_startproc
 1923              	.LVL174:
 273:fltk-1.3.4-1/src/glut_compatability.cxx ****   55:fltk-1.3.4-1/FL/Fl_Window.H ****   window. Fl_Window has a default callback that calls Fl_Wind
 1924              		.loc 4 273 0
 1925 0000 4863FF   		movslq	%edi, %rdi
 1926 0003 488B3CFD 		movq	_ZL7windows(,%rdi,8), %rdi
 1926      00000000 
 1927              	.LVL175:
 1928 000b E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 1928      00
 1929              	.LVL176:
 1930              		.cfi_endproc
 1931              	.LFE413:
 1933              		.section	.text.unlikely._Z23glutPostWindowRedisplayi
 1934              	.LCOLDE26:
 1935              		.section	.text._Z23glutPostWindowRedisplayi
 1936              	.LHOTE26:
 1937              		.section	.text.unlikely._Z13glutSetWindowi,"ax",@progbits
 1938              	.LCOLDB27:
 1939              		.section	.text._Z13glutSetWindowi,"ax",@progbits
 1940              	.LHOTB27:
 1941              		.p2align 4,,15
 1942              		.globl	_Z13glutSetWindowi
 1944              	_Z13glutSetWindowi:
 1945              	.LFB414:
 276:fltk-1.3.4-1/src/glut_compatability.cxx ****   58:fltk-1.3.4-1/FL/Fl_Window.H **** 
 1946              		.loc 4 276 0
 1947              		.cfi_startproc
 1948              	.LVL177:
 277:fltk-1.3.4-1/src/glut_compatability.cxx ****   59:fltk-1.3.4-1/FL/Fl_Window.H ****   static char *default_xclass_;
 1949              		.loc 4 277 0
 1950 0000 4863FF   		movslq	%edi, %rdi
 1951 0003 488B3CFD 		movq	_ZL7windows(,%rdi,8), %rdi
 1951      00000000 
 1952              	.LVL178:
 1953              	.LBB211:
 1954              	.LBB212:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1955              		.loc 4 58 0
 1956 000b 4883BFA0 		cmpq	$0, 160(%rdi)
 1956      00000000 
  57:fltk-1.3.4-1/src/glut_compatability.cxx ****   41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
 1957              		.loc 4 57 0
 1958 0013 48893D00 		movq	%rdi, glut_window(%rip)
 1958      000000
 1959              	.LVL179:
  58:fltk-1.3.4-1/src/glut_compatability.cxx ****   42:fltk-1.3.4-1/FL/Fl_Group.H **** 
 1960              		.loc 4 58 0
 1961 001a 740C     		je	.L213
 1962 001c E9000000 		jmp	_ZN12Fl_Gl_Window12make_currentEv
 1962      00
 1963              	.LVL180:
 1964              		.p2align 4,,10
 1965 0021 0F1F8000 		.p2align 3
 1965      000000
 1966              	.L213:
 1967 0028 F3C3     		rep ret
 1968              	.LBE212:
 1969              	.LBE211:
 1970              		.cfi_endproc
 1971              	.LFE414:
 1973              		.section	.text.unlikely._Z13glutSetWindowi
 1974              	.LCOLDE27:
 1975              		.section	.text._Z13glutSetWindowi
 1976              	.LHOTE27:
 1977              		.section	.text.unlikely._Z14glutCreateMenuPFviE,"ax",@progbits
 1978              	.LCOLDB28:
 1979              		.section	.text._Z14glutCreateMenuPFviE,"ax",@progbits
 1980              	.LHOTB28:
 1981              		.p2align 4,,15
 1982              		.globl	_Z14glutCreateMenuPFviE
 1984              	_Z14glutCreateMenuPFviE:
 1985              	.LFB463:
 304:fltk-1.3.4-1/src/glut_compatability.cxx ****   86:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_bottom;
 1986              		.loc 4 304 0
 1987              		.cfi_startproc
 1988              	.LVL181:
 1989 0000 BA000000 		movl	$_ZL5menus+24, %edx
 1989      00
 306:fltk-1.3.4-1/src/glut_compatability.cxx ****   88:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 1990              		.loc 4 306 0
 1991 0005 B8010000 		movl	$1, %eax
 1991      00
 1992 000a EB10     		jmp	.L217
 1993              	.LVL182:
 1994 000c 0F1F4000 		.p2align 4,,10
 1995              		.p2align 3
 1996              	.L219:
 306:fltk-1.3.4-1/src/glut_compatability.cxx ****   88:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 1997              		.loc 4 306 0 is_stmt 0 discriminator 3
 1998 0010 83C001   		addl	$1, %eax
 1999              	.LVL183:
 2000 0013 4883C218 		addq	$24, %rdx
 2001 0017 83F820   		cmpl	$32, %eax
 2002 001a 7406     		je	.L216
 2003              	.LVL184:
 2004              	.L217:
 306:fltk-1.3.4-1/src/glut_compatability.cxx ****   88:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 2005              		.loc 4 306 0 discriminator 2
 2006 001c 48833A00 		cmpq	$0, (%rdx)
 2007 0020 75EE     		jne	.L219
 2008              	.L216:
 2009              	.LVL185:
 308:fltk-1.3.4-1/src/glut_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_left;
 2010              		.loc 4 308 0 is_stmt 1
 2011 0022 4863D0   		movslq	%eax, %rdx
 309:fltk-1.3.4-1/src/glut_compatability.cxx ****   91:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
 2012              		.loc 4 309 0
 2013 0025 89050000 		movl	%eax, glut_menu(%rip)
 2013      0000
 308:fltk-1.3.4-1/src/glut_compatability.cxx ****   90:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_left;
 2014              		.loc 4 308 0
 2015 002b 488D1452 		leaq	(%rdx,%rdx,2), %rdx
 2016 002f 48893CD5 		movq	%rdi, _ZL5menus(,%rdx,8)
 2016      00000000 
 310:fltk-1.3.4-1/src/glut_compatability.cxx ****   92:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility 
 2017              		.loc 4 310 0
 2018 0037 C3       		ret
 2019              		.cfi_endproc
 2020              	.LFE463:
 2022              		.section	.text.unlikely._Z14glutCreateMenuPFviE
 2023              	.LCOLDE28:
 2024              		.section	.text._Z14glutCreateMenuPFviE
 2025              	.LHOTE28:
 2026              		.section	.text.unlikely._Z15glutDestroyMenui,"ax",@progbits
 2027              	.LCOLDB29:
 2028              		.section	.text._Z15glutDestroyMenui,"ax",@progbits
 2029              	.LHOTB29:
 2030              		.p2align 4,,15
 2031              		.globl	_Z15glutDestroyMenui
 2033              	_Z15glutDestroyMenui:
 2034              	.LFB464:
 312:fltk-1.3.4-1/src/glut_compatability.cxx ****   94:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_right;
 2035              		.loc 4 312 0
 2036              		.cfi_startproc
 2037              	.LVL186:
 2038 0000 53       		pushq	%rbx
 2039              		.cfi_def_cfa_offset 16
 2040              		.cfi_offset 3, -16
 314:fltk-1.3.4-1/src/glut_compatability.cxx ****   96:fltk-1.3.4-1/FL/Fl_Window.H ****   friend class Fl_X;
 2041              		.loc 4 314 0
 2042 0001 4863DF   		movslq	%edi, %rbx
 2043 0004 488D045B 		leaq	(%rbx,%rbx,2), %rax
 2044 0008 488B3CC5 		movq	_ZL5menus+8(,%rax,8), %rdi
 2044      00000000 
 2045              	.LVL187:
 2046 0010 4885FF   		testq	%rdi, %rdi
 2047 0013 7405     		je	.L221
 314:fltk-1.3.4-1/src/glut_compatability.cxx ****   96:fltk-1.3.4-1/FL/Fl_Window.H ****   friend class Fl_X;
 2048              		.loc 4 314 0 is_stmt 0 discriminator 1
 2049 0015 E8000000 		call	_ZdaPv
 2049      00
 2050              	.LVL188:
 2051              	.L221:
 315:fltk-1.3.4-1/src/glut_compatability.cxx ****   97:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_X *i; // points at the system-specific stuff
 2052              		.loc 4 315 0 is_stmt 1
 2053 001a 488D045B 		leaq	(%rbx,%rbx,2), %rax
 318:fltk-1.3.4-1/src/glut_compatability.cxx ****  100:fltk-1.3.4-1/FL/Fl_Window.H ****     const void *legacy_icon;
 2054              		.loc 4 318 0
 2055 001e 5B       		popq	%rbx
 2056              		.cfi_def_cfa_offset 8
 2057              	.LVL189:
 315:fltk-1.3.4-1/src/glut_compatability.cxx ****   97:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_X *i; // points at the system-specific stuff
 2058              		.loc 4 315 0
 2059 001f 48C1E003 		salq	$3, %rax
 2060 0023 48C78000 		movq	$0, _ZL5menus+8(%rax)
 2060      00000000 
 2060      000000
 316:fltk-1.3.4-1/src/glut_compatability.cxx ****   98:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2061              		.loc 4 316 0
 2062 002e 48C78000 		movq	$0, _ZL5menus(%rax)
 2062      00000000 
 2062      000000
 317:fltk-1.3.4-1/src/glut_compatability.cxx ****   99:fltk-1.3.4-1/FL/Fl_Window.H ****   struct icon_data {
 2063              		.loc 4 317 0
 2064 0039 C7800000 		movl	$0, _ZL5menus+20(%rax)
 2064      00000000 
 2064      0000
 2065 0043 C7800000 		movl	$0, _ZL5menus+16(%rax)
 2065      00000000 
 2065      0000
 318:fltk-1.3.4-1/src/glut_compatability.cxx ****  100:fltk-1.3.4-1/FL/Fl_Window.H ****     const void *legacy_icon;
 2066              		.loc 4 318 0
 2067 004d C3       		ret
 2068              		.cfi_endproc
 2069              	.LFE464:
 2071              		.section	.text.unlikely._Z15glutDestroyMenui
 2072              	.LCOLDE29:
 2073              		.section	.text._Z15glutDestroyMenui
 2074              	.LHOTE29:
 2075              		.section	.text.unlikely._Z16glutAddMenuEntryPci,"ax",@progbits
 2076              	.LCOLDB30:
 2077              		.section	.text._Z16glutAddMenuEntryPci,"ax",@progbits
 2078              	.LHOTB30:
 2079              		.p2align 4,,15
 2080              		.globl	_Z16glutAddMenuEntryPci
 2082              	_Z16glutAddMenuEntryPci:
 2083              	.LFB466:
 336:fltk-1.3.4-1/src/glut_compatability.cxx ****  117:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Cursor cursor_default;
 337:fltk-1.3.4-1/src/glut_compatability.cxx ****  118:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
 2084              		.loc 4 337 0
 2085              		.cfi_startproc
 2086              	.LVL190:
 338:fltk-1.3.4-1/src/glut_compatability.cxx ****  119:fltk-1.3.4-1/FL/Fl_Window.H ****   // legacy, not used
 2087              		.loc 4 338 0
 2088 0000 48630500 		movslq	glut_menu(%rip), %rax
 2088      000000
 337:fltk-1.3.4-1/src/glut_compatability.cxx ****  119:fltk-1.3.4-1/FL/Fl_Window.H ****   // legacy, not used
 2089              		.loc 4 337 0
 2090 0007 4154     		pushq	%r12
 2091              		.cfi_def_cfa_offset 16
 2092              		.cfi_offset 12, -16
 2093 0009 4989FC   		movq	%rdi, %r12
 2094 000c 55       		pushq	%rbp
 2095              		.cfi_def_cfa_offset 24
 2096              		.cfi_offset 6, -24
 2097 000d 53       		pushq	%rbx
 2098              		.cfi_def_cfa_offset 32
 2099              		.cfi_offset 3, -32
 337:fltk-1.3.4-1/src/glut_compatability.cxx ****  119:fltk-1.3.4-1/FL/Fl_Window.H ****   // legacy, not used
 2100              		.loc 4 337 0
 2101 000e 4863EE   		movslq	%esi, %rbp
 2102              		.loc 4 338 0
 2103 0011 488D1C40 		leaq	(%rax,%rax,2), %rbx
 2104 0015 48C1E303 		salq	$3, %rbx
 2105 0019 488DBB00 		leaq	_ZL5menus(%rbx), %rdi
 2105      000000
 2106              	.LVL191:
 339:fltk-1.3.4-1/src/glut_compatability.cxx ****  120:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Color cursor_fg, cursor_bg;
 2107              		.loc 4 339 0
 2108 0020 E8000000 		call	_ZL7additemP4menu
 2108      00
 2109              	.LVL192:
 340:fltk-1.3.4-1/src/glut_compatability.cxx ****  121:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 2110              		.loc 4 340 0
 2111 0025 4C8920   		movq	%r12, (%rax)
 341:fltk-1.3.4-1/src/glut_compatability.cxx ****  122:fltk-1.3.4-1/FL/Fl_Window.H ****   
 2112              		.loc 4 341 0
 2113 0028 488B9300 		movq	_ZL5menus(%rbx), %rdx
 2113      000000
 2114              	.LBB213:
 2115              	.LBB214:
 2116              		.file 6 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
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
 2117              		.loc 6 270 0
 2118 002f 48896818 		movq	%rbp, 24(%rax)
 2119              	.LBE214:
 2120              	.LBE213:
 2121              		.loc 4 341 0
 2122 0033 48895010 		movq	%rdx, 16(%rax)
 2123              	.LVL193:
 342:fltk-1.3.4-1/src/glut_compatability.cxx ****  123:fltk-1.3.4-1/FL/Fl_Window.H **** protected:
 343:fltk-1.3.4-1/src/glut_compatability.cxx ****  124:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Data supporting a non-rectangular window shape */
 2124              		.loc 4 343 0
 2125 0037 5B       		popq	%rbx
 2126              		.cfi_def_cfa_offset 24
 2127 0038 5D       		popq	%rbp
 2128              		.cfi_def_cfa_offset 16
 2129              	.LVL194:
 2130 0039 415C     		popq	%r12
 2131              		.cfi_def_cfa_offset 8
 2132              	.LVL195:
 2133 003b C3       		ret
 2134              		.cfi_endproc
 2135              	.LFE466:
 2137              		.section	.text.unlikely._Z16glutAddMenuEntryPci
 2138              	.LCOLDE30:
 2139              		.section	.text._Z16glutAddMenuEntryPci
 2140              	.LHOTE30:
 2141              		.section	.text.unlikely._Z14glutAddSubMenuPci,"ax",@progbits
 2142              	.LCOLDB31:
 2143              		.section	.text._Z14glutAddSubMenuPci,"ax",@progbits
 2144              	.LHOTB31:
 2145              		.p2align 4,,15
 2146              		.globl	_Z14glutAddSubMenuPci
 2148              	_Z14glutAddSubMenuPci:
 2149              	.LFB467:
 344:fltk-1.3.4-1/src/glut_compatability.cxx ****  125:fltk-1.3.4-1/FL/Fl_Window.H ****   struct shape_data_type {
 345:fltk-1.3.4-1/src/glut_compatability.cxx ****  126:fltk-1.3.4-1/FL/Fl_Window.H ****     int lw_; ///<  width of shape image
 2150              		.loc 4 345 0
 2151              		.cfi_startproc
 2152              	.LVL196:
 2153 0000 55       		pushq	%rbp
 2154              		.cfi_def_cfa_offset 16
 2155              		.cfi_offset 6, -16
 2156 0001 53       		pushq	%rbx
 2157              		.cfi_def_cfa_offset 24
 2158              		.cfi_offset 3, -24
 2159 0002 4889FD   		movq	%rdi, %rbp
 2160 0005 89F3     		movl	%esi, %ebx
 2161 0007 4883EC08 		subq	$8, %rsp
 2162              		.cfi_def_cfa_offset 32
 346:fltk-1.3.4-1/src/glut_compatability.cxx ****  127:fltk-1.3.4-1/FL/Fl_Window.H ****     int lh_; ///<  height of shape image
 2163              		.loc 4 346 0
 2164 000b 48630500 		movslq	glut_menu(%rip), %rax
 2164      000000
 2165 0012 488D0440 		leaq	(%rax,%rax,2), %rax
 2166 0016 488D3CC5 		leaq	_ZL5menus(,%rax,8), %rdi
 2166      00000000 
 2167              	.LVL197:
 347:fltk-1.3.4-1/src/glut_compatability.cxx ****  128:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Image* shape_; ///<  shape image
 2168              		.loc 4 347 0
 2169 001e E8000000 		call	_ZL7additemP4menu
 2169      00
 2170              	.LVL198:
 348:fltk-1.3.4-1/src/glut_compatability.cxx ****  129:fltk-1.3.4-1/FL/Fl_Window.H **** #if defined(__APPLE__)
 349:fltk-1.3.4-1/src/glut_compatability.cxx ****  130:fltk-1.3.4-1/FL/Fl_Window.H ****     typedef struct CGImage* CGImageRef;
 350:fltk-1.3.4-1/src/glut_compatability.cxx ****  131:fltk-1.3.4-1/FL/Fl_Window.H ****     CGImageRef mask;
 2171              		.loc 4 350 0
 2172 0023 4863F3   		movslq	%ebx, %rsi
 348:fltk-1.3.4-1/src/glut_compatability.cxx ****  129:fltk-1.3.4-1/FL/Fl_Window.H **** #if defined(__APPLE__)
 2173              		.loc 4 348 0
 2174 0026 488928   		movq	%rbp, (%rax)
 349:fltk-1.3.4-1/src/glut_compatability.cxx ****  131:fltk-1.3.4-1/FL/Fl_Window.H ****     CGImageRef mask;
 2175              		.loc 4 349 0
 2176 0029 48C74010 		movq	$0, 16(%rax)
 2176      00000000 
 2177              		.loc 4 350 0
 2178 0031 488D1476 		leaq	(%rsi,%rsi,2), %rdx
 2179 0035 488B14D5 		movq	_ZL5menus+8(,%rdx,8), %rdx
 2179      00000000 
 351:fltk-1.3.4-1/src/glut_compatability.cxx ****  132:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 2180              		.loc 4 351 0
 2181 003d C7402020 		movl	$32, 32(%rax)
 2181      000000
 350:fltk-1.3.4-1/src/glut_compatability.cxx ****  132:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 2182              		.loc 4 350 0
 2183 0044 48895018 		movq	%rdx, 24(%rax)
 352:fltk-1.3.4-1/src/glut_compatability.cxx ****  133:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Bitmap *todelete_; ///<  auxiliary bitmap image
 2184              		.loc 4 352 0
 2185 0048 4883C408 		addq	$8, %rsp
 2186              		.cfi_def_cfa_offset 24
 2187 004c 5B       		popq	%rbx
 2188              		.cfi_def_cfa_offset 16
 2189              	.LVL199:
 2190 004d 5D       		popq	%rbp
 2191              		.cfi_def_cfa_offset 8
 2192              	.LVL200:
 2193 004e C3       		ret
 2194              		.cfi_endproc
 2195              	.LFE467:
 2197              		.section	.text.unlikely._Z14glutAddSubMenuPci
 2198              	.LCOLDE31:
 2199              		.section	.text._Z14glutAddSubMenuPci
 2200              	.LHOTE31:
 2201              		.section	.text.unlikely._Z21glutChangeToMenuEntryiPci,"ax",@progbits
 2202              	.LCOLDB32:
 2203              		.section	.text._Z21glutChangeToMenuEntryiPci,"ax",@progbits
 2204              	.LHOTB32:
 2205              		.p2align 4,,15
 2206              		.globl	_Z21glutChangeToMenuEntryiPci
 2208              	_Z21glutChangeToMenuEntryiPci:
 2209              	.LFB468:
 353:fltk-1.3.4-1/src/glut_compatability.cxx ****  134:fltk-1.3.4-1/FL/Fl_Window.H ****   };
 354:fltk-1.3.4-1/src/glut_compatability.cxx ****  135:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2210              		.loc 4 354 0
 2211              		.cfi_startproc
 2212              	.LVL201:
 355:fltk-1.3.4-1/src/glut_compatability.cxx ****  136:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303 && !defined(FL_DOXYGEN)
 356:fltk-1.3.4-1/src/glut_compatability.cxx ****  137:fltk-1.3.4-1/FL/Fl_Window.H ****   static
 2213              		.loc 4 356 0
 2214 0000 48630500 		movslq	glut_menu(%rip), %rax
 2214      000000
 2215 0007 4863FF   		movslq	%edi, %rdi
 2216              	.LBB215:
 2217              	.LBB216:
 2218              		.loc 6 270 0
 2219 000a 4863D2   		movslq	%edx, %rdx
 2220              	.LBE216:
 2221              	.LBE215:
 2222              		.loc 4 356 0
 2223 000d 488D0C40 		leaq	(%rax,%rax,2), %rcx
 2224 0011 488D04FD 		leaq	0(,%rdi,8), %rax
 2224      00000000 
 2225 0019 48C1E706 		salq	$6, %rdi
 2226              	.LVL202:
 2227 001d 48C1E103 		salq	$3, %rcx
 2228 0021 4829C7   		subq	%rax, %rdi
 2229 0024 488B8100 		movq	_ZL5menus+8(%rcx), %rax
 2229      000000
 2230 002b 488D4438 		leaq	-56(%rax,%rdi), %rax
 2230      C8
 2231              	.LVL203:
 357:fltk-1.3.4-1/src/glut_compatability.cxx ****  138:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 2232              		.loc 4 357 0
 2233 0030 488930   		movq	%rsi, (%rax)
 2234              	.LVL204:
 358:fltk-1.3.4-1/src/glut_compatability.cxx ****  139:fltk-1.3.4-1/FL/Fl_Window.H ****   shape_data_type *shape_data_; ///< non-null means the windo
 2235              		.loc 4 358 0
 2236 0033 488B8900 		movq	_ZL5menus(%rcx), %rcx
 2236      000000
 2237              	.LBB218:
 2238              	.LBB217:
 2239              		.loc 6 270 0
 2240 003a 48895018 		movq	%rdx, 24(%rax)
 2241              	.LBE217:
 2242              	.LBE218:
 359:fltk-1.3.4-1/src/glut_compatability.cxx ****  140:fltk-1.3.4-1/FL/Fl_Window.H **** private:
 360:fltk-1.3.4-1/src/glut_compatability.cxx ****  141:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_bitmap_(Fl_Image* b);
 2243              		.loc 4 360 0
 2244 003e C7402000 		movl	$0, 32(%rax)
 2244      000000
 358:fltk-1.3.4-1/src/glut_compatability.cxx ****  139:fltk-1.3.4-1/FL/Fl_Window.H ****   shape_data_type *shape_data_; ///< non-null means the windo
 2245              		.loc 4 358 0
 2246 0045 48894810 		movq	%rcx, 16(%rax)
 2247              	.LVL205:
 2248              		.loc 4 360 0
 2249 0049 C3       		ret
 2250              		.cfi_endproc
 2251              	.LFE468:
 2253              		.section	.text.unlikely._Z21glutChangeToMenuEntryiPci
 2254              	.LCOLDE32:
 2255              		.section	.text._Z21glutChangeToMenuEntryiPci
 2256              	.LHOTE32:
 2257              		.section	.text.unlikely._Z19glutChangeToSubMenuiPci,"ax",@progbits
 2258              	.LCOLDB33:
 2259              		.section	.text._Z19glutChangeToSubMenuiPci,"ax",@progbits
 2260              	.LHOTB33:
 2261              		.p2align 4,,15
 2262              		.globl	_Z19glutChangeToSubMenuiPci
 2264              	_Z19glutChangeToSubMenuiPci:
 2265              	.LFB469:
 361:fltk-1.3.4-1/src/glut_compatability.cxx ****  142:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_alpha_(Fl_Image* img, int offset);
 362:fltk-1.3.4-1/src/glut_compatability.cxx ****  143:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_pixmap_(Fl_Image* pixmap);
 363:fltk-1.3.4-1/src/glut_compatability.cxx ****  144:fltk-1.3.4-1/FL/Fl_Window.H **** public:
 2266              		.loc 4 363 0
 2267              		.cfi_startproc
 2268              	.LVL206:
 364:fltk-1.3.4-1/src/glut_compatability.cxx ****  145:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape(const Fl_Image* img);
 365:fltk-1.3.4-1/src/glut_compatability.cxx ****  146:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Set the window's shape with an Fl_Image.
 2269              		.loc 4 365 0
 2270 0000 48630500 		movslq	glut_menu(%rip), %rax
 2270      000000
 2271 0007 4863FF   		movslq	%edi, %rdi
 366:fltk-1.3.4-1/src/glut_compatability.cxx ****  147:fltk-1.3.4-1/FL/Fl_Window.H ****    \see void shape(const Fl_Image* img)
 367:fltk-1.3.4-1/src/glut_compatability.cxx ****  148:fltk-1.3.4-1/FL/Fl_Window.H ****    */
 368:fltk-1.3.4-1/src/glut_compatability.cxx ****  149:fltk-1.3.4-1/FL/Fl_Window.H ****   inline void shape(const Fl_Image& b) { shape(&b); }
 2272              		.loc 4 368 0
 2273 000a 4863D2   		movslq	%edx, %rdx
 365:fltk-1.3.4-1/src/glut_compatability.cxx ****  147:fltk-1.3.4-1/FL/Fl_Window.H ****    \see void shape(const Fl_Image* img)
 2274              		.loc 4 365 0
 2275 000d 488D0CFD 		leaq	0(,%rdi,8), %rcx
 2275      00000000 
 2276 0015 48C1E706 		salq	$6, %rdi
 2277              	.LVL207:
 2278              		.loc 4 368 0
 2279 0019 488D1452 		leaq	(%rdx,%rdx,2), %rdx
 2280              	.LVL208:
 365:fltk-1.3.4-1/src/glut_compatability.cxx ****  147:fltk-1.3.4-1/FL/Fl_Window.H ****    \see void shape(const Fl_Image* img)
 2281              		.loc 4 365 0
 2282 001d 4829CF   		subq	%rcx, %rdi
 2283 0020 488D0440 		leaq	(%rax,%rax,2), %rax
 2284 0024 488B04C5 		movq	_ZL5menus+8(,%rax,8), %rax
 2284      00000000 
 2285 002c 488D4438 		leaq	-56(%rax,%rdi), %rax
 2285      C8
 2286              	.LVL209:
 366:fltk-1.3.4-1/src/glut_compatability.cxx ****  147:fltk-1.3.4-1/FL/Fl_Window.H ****    \see void shape(const Fl_Image* img)
 2287              		.loc 4 366 0
 2288 0031 488930   		movq	%rsi, (%rax)
 2289              	.LVL210:
 367:fltk-1.3.4-1/src/glut_compatability.cxx ****  149:fltk-1.3.4-1/FL/Fl_Window.H ****   inline void shape(const Fl_Image& b) { shape(&b); }
 2290              		.loc 4 367 0
 2291 0034 48C74010 		movq	$0, 16(%rax)
 2291      00000000 
 2292              		.loc 4 368 0
 2293 003c 488B14D5 		movq	_ZL5menus+8(,%rdx,8), %rdx
 2293      00000000 
 369:fltk-1.3.4-1/src/glut_compatability.cxx ****  150:fltk-1.3.4-1/FL/Fl_Window.H **** #if ! (defined(WIN32) || defined(__APPLE__) || defined(FL_DOX
 2294              		.loc 4 369 0
 2295 0044 C7402020 		movl	$32, 32(%rax)
 2295      000000
 368:fltk-1.3.4-1/src/glut_compatability.cxx ****  150:fltk-1.3.4-1/FL/Fl_Window.H **** #if ! (defined(WIN32) || defined(__APPLE__) || defined(FL_DOX
 2296              		.loc 4 368 0
 2297 004b 48895018 		movq	%rdx, 24(%rax)
 2298              		.loc 4 369 0
 2299 004f C3       		ret
 2300              		.cfi_endproc
 2301              	.LFE469:
 2303              		.section	.text.unlikely._Z19glutChangeToSubMenuiPci
 2304              	.LCOLDE33:
 2305              		.section	.text._Z19glutChangeToSubMenuiPci
 2306              	.LHOTE33:
 2307              		.section	.text.unlikely._Z18glutRemoveMenuItemi,"ax",@progbits
 2308              	.LCOLDB34:
 2309              		.section	.text._Z18glutRemoveMenuItemi,"ax",@progbits
 2310              	.LHOTB34:
 2311              		.p2align 4,,15
 2312              		.globl	_Z18glutRemoveMenuItemi
 2314              	_Z18glutRemoveMenuItemi:
 2315              	.LFB470:
 370:fltk-1.3.4-1/src/glut_compatability.cxx ****  151:fltk-1.3.4-1/FL/Fl_Window.H ****   void combine_mask(void);
 371:fltk-1.3.4-1/src/glut_compatability.cxx ****  152:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 372:fltk-1.3.4-1/src/glut_compatability.cxx ****  153:fltk-1.3.4-1/FL/Fl_Window.H **** private:
 2316              		.loc 4 372 0
 2317              		.cfi_startproc
 2318              	.LVL211:
 373:fltk-1.3.4-1/src/glut_compatability.cxx ****  154:fltk-1.3.4-1/FL/Fl_Window.H **** 
 374:fltk-1.3.4-1/src/glut_compatability.cxx ****  155:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2319              		.loc 4 374 0
 2320 0000 4C630D00 		movslq	glut_menu(%rip), %r9
 2320      000000
 2321 0007 85FF     		testl	%edi, %edi
 2322 0009 4B8D0449 		leaq	(%r9,%r9,2), %rax
 2323 000d 488D34C5 		leaq	_ZL5menus(,%rax,8), %rsi
 2323      00000000 
 2324 0015 8B4610   		movl	16(%rsi), %eax
 2325 0018 0F8E8A00 		jle	.L232
 2325      0000
 2326 001e 39F8     		cmpl	%edi, %eax
 2327 0020 0F8C8200 		jl	.L232
 2327      0000
 2328              	.LBB219:
 375:fltk-1.3.4-1/src/glut_compatability.cxx ****  156:fltk-1.3.4-1/FL/Fl_Window.H ****   void size_range_();
 2329              		.loc 4 375 0
 2330 0026 83EF01   		subl	$1, %edi
 2331              	.LVL212:
 2332 0029 39F8     		cmpl	%edi, %eax
 2333 002b 7C6D     		jl	.L234
 2334 002d 4863D7   		movslq	%edi, %rdx
 2335 0030 488D04D5 		leaq	0(,%rdx,8), %rax
 2335      00000000 
 2336 0038 48C1E206 		salq	$6, %rdx
 2337 003c 4829C2   		subq	%rax, %rdx
 2338              	.LVL213:
 2339 003f 90       		.p2align 4,,10
 2340              		.p2align 3
 2341              	.L235:
 2342              		.loc 4 375 0 is_stmt 0 discriminator 2
 2343 0040 488B4608 		movq	8(%rsi), %rax
 2344 0044 488D4A38 		leaq	56(%rdx), %rcx
 2345 0048 83C701   		addl	$1, %edi
 2346              	.LVL214:
 2347 004b 4C8B4410 		movq	56(%rax,%rdx), %r8
 2347      38
 2348 0050 4C890410 		movq	%r8, (%rax,%rdx)
 2349 0054 4C8B4410 		movq	64(%rax,%rdx), %r8
 2349      40
 2350 0059 4C894410 		movq	%r8, 8(%rax,%rdx)
 2350      08
 2351 005e 4C8B4410 		movq	72(%rax,%rdx), %r8
 2351      48
 2352 0063 4C894410 		movq	%r8, 16(%rax,%rdx)
 2352      10
 2353 0068 4C8B4410 		movq	80(%rax,%rdx), %r8
 2353      50
 2354 006d 4C894410 		movq	%r8, 24(%rax,%rdx)
 2354      18
 2355 0072 4C8B4410 		movq	88(%rax,%rdx), %r8
 2355      58
 2356 0077 4C894410 		movq	%r8, 32(%rax,%rdx)
 2356      20
 2357 007c 4C8B4410 		movq	96(%rax,%rdx), %r8
 2357      60
 2358 0081 4C894410 		movq	%r8, 40(%rax,%rdx)
 2358      28
 2359 0086 4C8B4410 		movq	104(%rax,%rdx), %r8
 2359      68
 2360 008b 4C894410 		movq	%r8, 48(%rax,%rdx)
 2360      30
 2361 0090 8B4610   		movl	16(%rsi), %eax
 2362 0093 4889CA   		movq	%rcx, %rdx
 2363 0096 39F8     		cmpl	%edi, %eax
 2364 0098 7DA6     		jge	.L235
 2365              	.L234:
 2366              	.LBE219:
 376:fltk-1.3.4-1/src/glut_compatability.cxx ****  157:fltk-1.3.4-1/FL/Fl_Window.H ****   void _Fl_Window(); // constructor innards
 2367              		.loc 4 376 0 is_stmt 1
 2368 009a 4B8D1449 		leaq	(%r9,%r9,2), %rdx
 2369 009e 83E801   		subl	$1, %eax
 2370 00a1 8904D500 		movl	%eax, _ZL5menus+16(,%rdx,8)
 2370      000000
 2371              	.LVL215:
 2372              	.L232:
 2373 00a8 F3C3     		rep ret
 2374              		.cfi_endproc
 2375              	.LFE470:
 2377              		.section	.text.unlikely._Z18glutRemoveMenuItemi
 2378              	.LCOLDE34:
 2379              		.section	.text._Z18glutRemoveMenuItemi
 2380              	.LHOTE34:
 2381              		.section	.text.unlikely._Z7glutGetj,"ax",@progbits
 2382              	.LCOLDB35:
 2383              		.section	.text._Z7glutGetj,"ax",@progbits
 2384              	.LHOTB35:
 2385              		.p2align 4,,15
 2386              		.globl	_Z7glutGetj
 2388              	_Z7glutGetj:
 2389              	.LFB471:
 377:fltk-1.3.4-1/src/glut_compatability.cxx ****  158:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_x(); // platform-specific part of sending a
 378:fltk-1.3.4-1/src/glut_compatability.cxx ****  159:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_off_x(int X, int Y, int W, int H);// platfo
 379:fltk-1.3.4-1/src/glut_compatability.cxx ****  160:fltk-1.3.4-1/FL/Fl_Window.H **** 
 380:fltk-1.3.4-1/src/glut_compatability.cxx ****  161:fltk-1.3.4-1/FL/Fl_Window.H ****   // unimplemented copy ctor and assignment operator
 381:fltk-1.3.4-1/src/glut_compatability.cxx ****  162:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Window(const Fl_Window&);
 2390              		.loc 4 381 0
 2391              		.cfi_startproc
 2392              	.LVL216:
 2393 0000 53       		pushq	%rbx
 2394              		.cfi_def_cfa_offset 16
 2395              		.cfi_offset 3, -16
 2396 0001 4883EC10 		subq	$16, %rsp
 2397              		.cfi_def_cfa_offset 32
 2398              		.loc 4 381 0
 2399 0005 64488B04 		movq	%fs:40, %rax
 2399      25280000 
 2399      00
 2400 000e 48894424 		movq	%rax, 8(%rsp)
 2400      08
 2401 0013 31C0     		xorl	%eax, %eax
 2402              	.LBB220:
 382:fltk-1.3.4-1/src/glut_compatability.cxx ****  163:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Window& operator=(const Fl_Window&);
 2403              		.loc 4 382 0
 2404 0015 83FF10   		cmpl	$16, %edi
 2405 0018 0F87C201 		ja	.L238
 2405      0000
 2406 001e 89FF     		movl	%edi, %edi
 2407 0020 FF24FD00 		jmp	*.L240(,%rdi,8)
 2407      000000
 2408              		.section	.rodata._Z7glutGetj,"a",@progbits
 2409              		.align 8
 2410              		.align 4
 2411              	.L240:
 2412 0000 00000000 		.quad	.L260
 2412      00000000 
 2413 0008 00000000 		.quad	.L241
 2413      00000000 
 2414 0010 00000000 		.quad	.L242
 2414      00000000 
 2415 0018 00000000 		.quad	.L243
 2415      00000000 
 2416 0020 00000000 		.quad	.L244
 2416      00000000 
 2417 0028 00000000 		.quad	.L245
 2417      00000000 
 2418 0030 00000000 		.quad	.L246
 2418      00000000 
 2419 0038 00000000 		.quad	.L247
 2419      00000000 
 2420 0040 00000000 		.quad	.L248
 2420      00000000 
 2421 0048 00000000 		.quad	.L249
 2421      00000000 
 2422 0050 00000000 		.quad	.L250
 2422      00000000 
 2423 0058 00000000 		.quad	.L251
 2423      00000000 
 2424 0060 00000000 		.quad	.L252
 2424      00000000 
 2425 0068 00000000 		.quad	.L253
 2425      00000000 
 2426 0070 00000000 		.quad	.L254
 2426      00000000 
 2427 0078 00000000 		.quad	.L255
 2427      00000000 
 2428 0080 00000000 		.quad	.L256
 2428      00000000 
 2429              		.section	.text._Z7glutGetj
 2430 0027 660F1F84 		.p2align 4,,10
 2430      00000000 
 2430      00
 2431              		.p2align 3
 2432              	.L245:
 2433 0030 488B0500 		movq	glut_window(%rip), %rax
 2433      000000
 2434 0037 488B4008 		movq	8(%rax), %rax
 2435              	.LVL217:
 2436              	.LBB221:
 383:fltk-1.3.4-1/src/glut_compatability.cxx ****  164:fltk-1.3.4-1/FL/Fl_Window.H **** 
 384:fltk-1.3.4-1/src/glut_compatability.cxx ****  165:fltk-1.3.4-1/FL/Fl_Window.H **** protected:
 385:fltk-1.3.4-1/src/glut_compatability.cxx ****  166:fltk-1.3.4-1/FL/Fl_Window.H **** 
 386:fltk-1.3.4-1/src/glut_compatability.cxx ****  167:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Stores the last window that was made current. See curre
 387:fltk-1.3.4-1/src/glut_compatability.cxx ****  168:fltk-1.3.4-1/FL/Fl_Window.H ****   static Fl_Window *current_;
 388:fltk-1.3.4-1/src/glut_compatability.cxx ****  169:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void draw();
 389:fltk-1.3.4-1/src/glut_compatability.cxx ****  170:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Forces the window to be drawn, this window is also made
 2437              		.loc 4 389 0
 2438 003b 4885C0   		testq	%rax, %rax
 2439 003e 0F85B401 		jne	.L262
 2439      0000
 2440              	.LVL218:
 2441              		.p2align 4,,10
 2442 0044 0F1F4000 		.p2align 3
 2443              	.L260:
 390:fltk-1.3.4-1/src/glut_compatability.cxx ****  171:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void flush();
 391:fltk-1.3.4-1/src/glut_compatability.cxx ****  172:fltk-1.3.4-1/FL/Fl_Window.H **** 
 392:fltk-1.3.4-1/src/glut_compatability.cxx ****  173:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2444              		.loc 4 392 0
 2445 0048 31C0     		xorl	%eax, %eax
 2446              	.LVL219:
 2447 004a 660F1F44 		.p2align 4,,10
 2447      0000
 2448              		.p2align 3
 2449              	.L239:
 2450              	.LBE221:
 2451              	.LBE220:
 393:fltk-1.3.4-1/src/glut_compatability.cxx ****  174:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets an internal flag that tells FLTK and the window mana
 394:fltk-1.3.4-1/src/glut_compatability.cxx ****  175:fltk-1.3.4-1/FL/Fl_Window.H ****     honor position requests.
 395:fltk-1.3.4-1/src/glut_compatability.cxx ****  176:fltk-1.3.4-1/FL/Fl_Window.H **** 
 396:fltk-1.3.4-1/src/glut_compatability.cxx ****  177:fltk-1.3.4-1/FL/Fl_Window.H ****     This is used internally and should not be needed by user 
 397:fltk-1.3.4-1/src/glut_compatability.cxx ****  178:fltk-1.3.4-1/FL/Fl_Window.H **** 
 398:fltk-1.3.4-1/src/glut_compatability.cxx ****  179:fltk-1.3.4-1/FL/Fl_Window.H ****     \param[in] force 1 to set the FORCE_POSITION flag, 0 to c
 399:fltk-1.3.4-1/src/glut_compatability.cxx ****  180:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 400:fltk-1.3.4-1/src/glut_compatability.cxx ****  181:fltk-1.3.4-1/FL/Fl_Window.H ****   void force_position(int force) {
 401:fltk-1.3.4-1/src/glut_compatability.cxx ****  182:fltk-1.3.4-1/FL/Fl_Window.H ****     if (force) set_flag(FORCE_POSITION);
 402:fltk-1.3.4-1/src/glut_compatability.cxx ****  183:fltk-1.3.4-1/FL/Fl_Window.H ****     else clear_flag(FORCE_POSITION);
 403:fltk-1.3.4-1/src/glut_compatability.cxx ****  184:fltk-1.3.4-1/FL/Fl_Window.H ****   }
 404:fltk-1.3.4-1/src/glut_compatability.cxx ****  185:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 405:fltk-1.3.4-1/src/glut_compatability.cxx ****  186:fltk-1.3.4-1/FL/Fl_Window.H ****     Returns the internal state of the window's FORCE_POSITION
 406:fltk-1.3.4-1/src/glut_compatability.cxx ****  187:fltk-1.3.4-1/FL/Fl_Window.H **** 
 407:fltk-1.3.4-1/src/glut_compatability.cxx ****  188:fltk-1.3.4-1/FL/Fl_Window.H ****     \retval 1 if flag is set
 408:fltk-1.3.4-1/src/glut_compatability.cxx ****  189:fltk-1.3.4-1/FL/Fl_Window.H ****     \retval 0 otherwise
 409:fltk-1.3.4-1/src/glut_compatability.cxx ****  190:fltk-1.3.4-1/FL/Fl_Window.H **** 
 410:fltk-1.3.4-1/src/glut_compatability.cxx ****  191:fltk-1.3.4-1/FL/Fl_Window.H ****     \see force_position(int)
 411:fltk-1.3.4-1/src/glut_compatability.cxx ****  192:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 412:fltk-1.3.4-1/src/glut_compatability.cxx ****  193:fltk-1.3.4-1/FL/Fl_Window.H ****   int force_position() const { return ((flags() & FORCE_POSIT
 413:fltk-1.3.4-1/src/glut_compatability.cxx ****  194:fltk-1.3.4-1/FL/Fl_Window.H **** 
 414:fltk-1.3.4-1/src/glut_compatability.cxx ****  195:fltk-1.3.4-1/FL/Fl_Window.H ****   void free_icons();
 415:fltk-1.3.4-1/src/glut_compatability.cxx ****  196:fltk-1.3.4-1/FL/Fl_Window.H **** 
 416:fltk-1.3.4-1/src/glut_compatability.cxx ****  197:fltk-1.3.4-1/FL/Fl_Window.H **** public:
 417:fltk-1.3.4-1/src/glut_compatability.cxx ****  198:fltk-1.3.4-1/FL/Fl_Window.H **** 
 418:fltk-1.3.4-1/src/glut_compatability.cxx ****  199:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2452              		.loc 4 418 0 discriminator 1
 2453 0050 488B5424 		movq	8(%rsp), %rdx
 2453      08
 2454 0055 64483314 		xorq	%fs:40, %rdx
 2454      25280000 
 2454      00
 2455 005e 0F85B301 		jne	.L263
 2455      0000
 2456              		.loc 4 418 0 is_stmt 0
 2457 0064 4883C410 		addq	$16, %rsp
 2458              		.cfi_remember_state
 2459              		.cfi_def_cfa_offset 16
 2460 0068 5B       		popq	%rbx
 2461              		.cfi_def_cfa_offset 8
 2462 0069 C3       		ret
 2463 006a 660F1F44 		.p2align 4,,10
 2463      0000
 2464              		.p2align 3
 2465              	.L241:
 2466              		.cfi_restore_state
 2467 0070 488B0500 		movq	glut_window(%rip), %rax
 2467      000000
 2468 0077 8B4020   		movl	32(%rax), %eax
 2469              	.LVL220:
 2470              	.LBB230:
 2471              	.LBB229:
 384:fltk-1.3.4-1/src/glut_compatability.cxx ****  166:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2472              		.loc 4 384 0 is_stmt 1
 2473 007a EBD4     		jmp	.L239
 2474              	.LVL221:
 2475 007c 0F1F4000 		.p2align 4,,10
 2476              		.p2align 3
 2477              	.L242:
 2478 0080 488B0500 		movq	glut_window(%rip), %rax
 2478      000000
 2479 0087 8B4024   		movl	36(%rax), %eax
 2480              	.LVL222:
 385:fltk-1.3.4-1/src/glut_compatability.cxx ****  167:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Stores the last window that was made current. See curre
 2481              		.loc 4 385 0
 2482 008a EBC4     		jmp	.L239
 2483              	.LVL223:
 2484 008c 0F1F4000 		.p2align 4,,10
 2485              		.p2align 3
 2486              	.L243:
 2487 0090 488B0500 		movq	glut_window(%rip), %rax
 2487      000000
 2488              	.LBB222:
 2489              	.LBB223:
 253:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /** Gives the window height in OpenGL pixels.
 2490              		.loc 3 253 0
 2491 0097 660FEFC0 		pxor	%xmm0, %xmm0
 2492 009b F30F2A40 		cvtsi2ss	40(%rax), %xmm0
 2492      28
 2493 00a0 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 2494 00a4 F20F5805 		addsd	.LC4(%rip), %xmm0
 2494      00000000 
 2495 00ac F20F2CC0 		cvttsd2si	%xmm0, %eax
 2496              	.LVL224:
 2497              	.LBE223:
 2498              	.LBE222:
 386:fltk-1.3.4-1/src/glut_compatability.cxx ****  168:fltk-1.3.4-1/FL/Fl_Window.H ****   static Fl_Window *current_;
 2499              		.loc 4 386 0
 2500 00b0 EB9E     		jmp	.L239
 2501              	.LVL225:
 2502              		.p2align 4,,10
 2503 00b2 660F1F44 		.p2align 3
 2503      0000
 2504              	.L244:
 2505 00b8 488B0500 		movq	glut_window(%rip), %rax
 2505      000000
 2506              	.LBB224:
 2507              	.LBB225:
 261:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   
 2508              		.loc 3 261 0
 2509 00bf 660FEFC0 		pxor	%xmm0, %xmm0
 2510 00c3 F30F2A40 		cvtsi2ss	44(%rax), %xmm0
 2510      2C
 2511 00c8 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 2512 00cc F20F5805 		addsd	.LC4(%rip), %xmm0
 2512      00000000 
 2513 00d4 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2514              	.LVL226:
 2515              	.LBE225:
 2516              	.LBE224:
 387:fltk-1.3.4-1/src/glut_compatability.cxx ****  169:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void draw();
 2517              		.loc 4 387 0
 2518 00d8 E973FFFF 		jmp	.L239
 2518      FF
 2519              	.LVL227:
 2520 00dd 0F1F00   		.p2align 4,,10
 2521              		.p2align 3
 2522              	.L246:
 395:fltk-1.3.4-1/src/glut_compatability.cxx ****  177:fltk-1.3.4-1/FL/Fl_Window.H ****     This is used internally and should not be needed by user 
 2523              		.loc 4 395 0
 2524 00e0 E8000000 		call	_ZN2Fl1wEv
 2524      00
 2525              	.LVL228:
 2526 00e5 E966FFFF 		jmp	.L239
 2526      FF
 2527 00ea 660F1F44 		.p2align 4,,10
 2527      0000
 2528              		.p2align 3
 2529              	.L247:
 396:fltk-1.3.4-1/src/glut_compatability.cxx ****  178:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2530              		.loc 4 396 0
 2531 00f0 E8000000 		call	_ZN2Fl1hEv
 2531      00
 2532              	.LVL229:
 2533 00f5 E956FFFF 		jmp	.L239
 2533      FF
 2534 00fa 660F1F44 		.p2align 4,,10
 2534      0000
 2535              		.p2align 3
 2536              	.L248:
 399:fltk-1.3.4-1/src/glut_compatability.cxx ****  181:fltk-1.3.4-1/FL/Fl_Window.H ****   void force_position(int force) {
 2537              		.loc 4 399 0
 2538 0100 48630500 		movslq	glut_menu(%rip), %rax
 2538      000000
 2539 0107 488D0440 		leaq	(%rax,%rax,2), %rax
 2540 010b 8B04C500 		movl	_ZL5menus+16(,%rax,8), %eax
 2540      000000
 2541 0112 E939FFFF 		jmp	.L239
 2541      FF
 2542 0117 660F1F84 		.p2align 4,,10
 2542      00000000 
 2542      00
 2543              		.p2align 3
 2544              	.L249:
 2545              	.LVL230:
 2546              	.LBB226:
 2547              	.LBB227:
 128:fltk-1.3.4-1/FL/Fl_Gl_Window.H ****   /**  Returns non-zero if the hardware supports the given OpenGL mode.
 2548              		.loc 3 128 0
 2549 0120 8B3D0000 		movl	_ZL9glut_mode(%rip), %edi
 2549      0000
 2550 0126 31F6     		xorl	%esi, %esi
 2551 0128 E8000000 		call	_ZN12Fl_Gl_Window6can_doEiPKi
 2551      00
 2552              	.LVL231:
 2553              	.LBE227:
 2554              	.LBE226:
 400:fltk-1.3.4-1/src/glut_compatability.cxx ****  182:fltk-1.3.4-1/FL/Fl_Window.H ****     if (force) set_flag(FORCE_POSITION);
 2555              		.loc 4 400 0
 2556 012d E91EFFFF 		jmp	.L239
 2556      FF
 2557              		.p2align 4,,10
 2558 0132 660F1F44 		.p2align 3
 2558      0000
 2559              	.L250:
 401:fltk-1.3.4-1/src/glut_compatability.cxx ****  183:fltk-1.3.4-1/FL/Fl_Window.H ****     else clear_flag(FORCE_POSITION);
 2560              		.loc 4 401 0
 2561 0138 8B050000 		movl	_ZL5initx(%rip), %eax
 2561      0000
 2562 013e E90DFFFF 		jmp	.L239
 2562      FF
 2563              		.p2align 4,,10
 2564 0143 0F1F4400 		.p2align 3
 2564      00
 2565              	.L251:
 402:fltk-1.3.4-1/src/glut_compatability.cxx ****  184:fltk-1.3.4-1/FL/Fl_Window.H ****   }
 2566              		.loc 4 402 0
 2567 0148 8B050000 		movl	_ZL5inity(%rip), %eax
 2567      0000
 2568 014e E9FDFEFF 		jmp	.L239
 2568      FF
 2569              		.p2align 4,,10
 2570 0153 0F1F4400 		.p2align 3
 2570      00
 2571              	.L252:
 403:fltk-1.3.4-1/src/glut_compatability.cxx ****  185:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2572              		.loc 4 403 0
 2573 0158 8B050000 		movl	_ZL5initw(%rip), %eax
 2573      0000
 2574 015e E9EDFEFF 		jmp	.L239
 2574      FF
 2575              		.p2align 4,,10
 2576 0163 0F1F4400 		.p2align 3
 2576      00
 2577              	.L253:
 404:fltk-1.3.4-1/src/glut_compatability.cxx ****  186:fltk-1.3.4-1/FL/Fl_Window.H ****     Returns the internal state of the window's FORCE_POSITION
 2578              		.loc 4 404 0
 2579 0168 8B050000 		movl	_ZL5inith(%rip), %eax
 2579      0000
 2580 016e E9DDFEFF 		jmp	.L239
 2580      FF
 2581              		.p2align 4,,10
 2582 0173 0F1F4400 		.p2align 3
 2582      00
 2583              	.L254:
 405:fltk-1.3.4-1/src/glut_compatability.cxx ****  187:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2584              		.loc 4 405 0
 2585 0178 8B050000 		movl	_ZL9glut_mode(%rip), %eax
 2585      0000
 2586 017e E9CDFEFF 		jmp	.L239
 2586      FF
 2587              		.p2align 4,,10
 2588 0183 0F1F4400 		.p2align 3
 2588      00
 2589              	.L255:
 408:fltk-1.3.4-1/src/glut_compatability.cxx ****  190:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2590              		.loc 4 408 0
 2591 0188 BF081900 		movl	$6408, %edi
 2591      00
 2592 018d E8000000 		call	_Z7glutGetj
 2592      00
 2593              	.LVL232:
 2594 0192 85C0     		testl	%eax, %eax
 2595 0194 7472     		je	.L257
 409:fltk-1.3.4-1/src/glut_compatability.cxx ****  191:fltk-1.3.4-1/FL/Fl_Window.H ****     \see force_position(int)
 2596              		.loc 4 409 0
 2597 0196 BF520D00 		movl	$3410, %edi
 2597      00
 2598 019b E8000000 		call	_Z7glutGetj
 2598      00
 2599              	.LVL233:
 410:fltk-1.3.4-1/src/glut_compatability.cxx ****  192:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 2600              		.loc 4 410 0
 2601 01a0 BF530D00 		movl	$3411, %edi
 2601      00
 409:fltk-1.3.4-1/src/glut_compatability.cxx ****  191:fltk-1.3.4-1/FL/Fl_Window.H ****     \see force_position(int)
 2602              		.loc 4 409 0
 2603 01a5 89C3     		movl	%eax, %ebx
 410:fltk-1.3.4-1/src/glut_compatability.cxx ****  192:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 2604              		.loc 4 410 0
 2605 01a7 E8000000 		call	_Z7glutGetj
 2605      00
 2606              	.LVL234:
 411:fltk-1.3.4-1/src/glut_compatability.cxx ****  193:fltk-1.3.4-1/FL/Fl_Window.H ****   int force_position() const { return ((flags() & FORCE_POSIT
 2607              		.loc 4 411 0
 2608 01ac BF540D00 		movl	$3412, %edi
 2608      00
 409:fltk-1.3.4-1/src/glut_compatability.cxx ****  191:fltk-1.3.4-1/FL/Fl_Window.H ****     \see force_position(int)
 2609              		.loc 4 409 0
 2610 01b1 01C3     		addl	%eax, %ebx
 411:fltk-1.3.4-1/src/glut_compatability.cxx ****  193:fltk-1.3.4-1/FL/Fl_Window.H ****   int force_position() const { return ((flags() & FORCE_POSIT
 2611              		.loc 4 411 0
 2612 01b3 E8000000 		call	_Z7glutGetj
 2612      00
 2613              	.LVL235:
 412:fltk-1.3.4-1/src/glut_compatability.cxx ****  194:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2614              		.loc 4 412 0
 2615 01b8 BF550D00 		movl	$3413, %edi
 2615      00
 410:fltk-1.3.4-1/src/glut_compatability.cxx ****  192:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 2616              		.loc 4 410 0
 2617 01bd 01C3     		addl	%eax, %ebx
 412:fltk-1.3.4-1/src/glut_compatability.cxx ****  194:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2618              		.loc 4 412 0
 2619 01bf E8000000 		call	_Z7glutGetj
 2619      00
 2620              	.LVL236:
 2621 01c4 01D8     		addl	%ebx, %eax
 2622 01c6 E985FEFF 		jmp	.L239
 2622      FF
 2623 01cb 0F1F4400 		.p2align 4,,10
 2623      00
 2624              		.p2align 3
 2625              	.L256:
 415:fltk-1.3.4-1/src/glut_compatability.cxx ****  197:fltk-1.3.4-1/FL/Fl_Window.H **** public:
 2626              		.loc 4 415 0
 2627 01d0 B8B04F00 		movl	$20400, %eax
 2627      00
 2628 01d5 E976FEFF 		jmp	.L239
 2628      FF
 2629              	.LVL237:
 2630 01da 660F1F44 		.p2align 4,,10
 2630      0000
 2631              		.p2align 3
 2632              	.L238:
 2633              	.LBB228:
 416:fltk-1.3.4-1/src/glut_compatability.cxx ****  198:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2634              		.loc 4 416 0
 2635 01e0 488D7424 		leaq	4(%rsp), %rsi
 2635      04
 2636 01e5 E8000000 		call	glGetIntegerv
 2636      00
 2637              	.LVL238:
 2638 01ea 8B442404 		movl	4(%rsp), %eax
 2639 01ee E95DFEFF 		jmp	.L239
 2639      FF
 2640              	.LVL239:
 2641              		.p2align 4,,10
 2642 01f3 0F1F4400 		.p2align 3
 2642      00
 2643              	.L262:
 2644              	.LBE228:
 390:fltk-1.3.4-1/src/glut_compatability.cxx ****  172:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2645              		.loc 4 390 0
 2646 01f8 8B801C01 		movl	284(%rax), %eax
 2646      0000
 2647 01fe E94DFEFF 		jmp	.L239
 2647      FF
 2648              	.LVL240:
 2649              		.p2align 4,,10
 2650 0203 0F1F4400 		.p2align 3
 2650      00
 2651              	.L257:
 414:fltk-1.3.4-1/src/glut_compatability.cxx ****  196:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2652              		.loc 4 414 0
 2653 0208 BF510D00 		movl	$3409, %edi
 2653      00
 2654 020d E8000000 		call	_Z7glutGetj
 2654      00
 2655              	.LVL241:
 2656 0212 E939FEFF 		jmp	.L239
 2656      FF
 2657              	.L263:
 2658              	.LBE229:
 2659              	.LBE230:
 2660              		.loc 4 418 0
 2661 0217 E8000000 		call	__stack_chk_fail
 2661      00
 2662              	.LVL242:
 2663              		.cfi_endproc
 2664              	.LFE471:
 2666              		.section	.text.unlikely._Z7glutGetj
 2667              	.LCOLDE35:
 2668              		.section	.text._Z7glutGetj
 2669              	.LHOTE35:
 2670              		.section	.text.unlikely._Z12glutLayerGetj,"ax",@progbits
 2671              	.LCOLDB36:
 2672              		.section	.text._Z12glutLayerGetj,"ax",@progbits
 2673              	.LHOTB36:
 2674              		.p2align 4,,15
 2675              		.globl	_Z12glutLayerGetj
 2677              	_Z12glutLayerGetj:
 2678              	.LFB472:
 419:fltk-1.3.4-1/src/glut_compatability.cxx ****  200:fltk-1.3.4-1/FL/Fl_Window.H ****     Creates a window from the given size and title. 
 420:fltk-1.3.4-1/src/glut_compatability.cxx ****  201:fltk-1.3.4-1/FL/Fl_Window.H ****     If Fl_Group::current() is not NULL, the window is created
 2679              		.loc 4 420 0
 2680              		.cfi_startproc
 2681              	.LVL243:
 421:fltk-1.3.4-1/src/glut_compatability.cxx ****  202:fltk-1.3.4-1/FL/Fl_Window.H ****     subwindow of the parent window.
 2682              		.loc 4 421 0
 2683 0000 81FF2403 		cmpl	$804, %edi
 2683      0000
 2684 0006 7438     		je	.L266
 2685 0008 81FF2503 		cmpl	$805, %edi
 2685      0000
 2686 000e 7420     		je	.L267
 2687 0010 81FF2003 		cmpl	$800, %edi
 2687      0000
 2688 0016 7408     		je	.L272
 422:fltk-1.3.4-1/src/glut_compatability.cxx ****  203:fltk-1.3.4-1/FL/Fl_Window.H ****     
 423:fltk-1.3.4-1/src/glut_compatability.cxx ****  204:fltk-1.3.4-1/FL/Fl_Window.H ****     The (w,h) form of the constructor creates a top-level win
 424:fltk-1.3.4-1/src/glut_compatability.cxx ****  205:fltk-1.3.4-1/FL/Fl_Window.H ****     and asks the window manager to position the window. The (
 425:fltk-1.3.4-1/src/glut_compatability.cxx ****  206:fltk-1.3.4-1/FL/Fl_Window.H ****     form of the constructor either creates a subwindow or a
 2689              		.loc 4 425 0
 2690 0018 31C0     		xorl	%eax, %eax
 426:fltk-1.3.4-1/src/glut_compatability.cxx ****  207:fltk-1.3.4-1/FL/Fl_Window.H ****     top-level window at the specified location (x,y) , subjec
 427:fltk-1.3.4-1/src/glut_compatability.cxx ****  208:fltk-1.3.4-1/FL/Fl_Window.H ****     manager configuration. If you do not specify the position
 428:fltk-1.3.4-1/src/glut_compatability.cxx ****  209:fltk-1.3.4-1/FL/Fl_Window.H ****     window, the window manager will pick a place to show the 
 429:fltk-1.3.4-1/src/glut_compatability.cxx ****  210:fltk-1.3.4-1/FL/Fl_Window.H ****     or allow the user to pick a location. Use position(x,y)
 430:fltk-1.3.4-1/src/glut_compatability.cxx ****  211:fltk-1.3.4-1/FL/Fl_Window.H ****     or hotspot() before calling show() to request a
 2691              		.loc 4 430 0
 2692 001a C3       		ret
 2693 001b 0F1F4400 		.p2align 4,,10
 2693      00
 2694              		.p2align 3
 2695              	.L272:
 422:fltk-1.3.4-1/src/glut_compatability.cxx ****  203:fltk-1.3.4-1/FL/Fl_Window.H ****     
 2696              		.loc 4 422 0
 2697 0020 488B3D00 		movq	glut_window(%rip), %rdi
 2697      000000
 2698              	.LVL244:
 2699 0027 E9000000 		jmp	_ZN12Fl_Gl_Window14can_do_overlayEv
 2699      00
 2700              	.LVL245:
 2701 002c 0F1F4000 		.p2align 4,,10
 2702              		.p2align 3
 2703              	.L267:
 427:fltk-1.3.4-1/src/glut_compatability.cxx ****  209:fltk-1.3.4-1/FL/Fl_Window.H ****     window, the window manager will pick a place to show the 
 2704              		.loc 4 427 0
 2705 0030 B8010000 		movl	$1, %eax
 2705      00
 2706 0035 C3       		ret
 2707 0036 662E0F1F 		.p2align 4,,10
 2707      84000000 
 2707      0000
 2708              		.p2align 3
 2709              	.L266:
 2710              	.LVL246:
 2711 0040 488B0500 		movq	glut_window(%rip), %rax
 2711      000000
 426:fltk-1.3.4-1/src/glut_compatability.cxx ****  207:fltk-1.3.4-1/FL/Fl_Window.H ****     top-level window at the specified location (x,y) , subjec
 2712              		.loc 4 426 0
 2713 0047 0FB6406D 		movzbl	109(%rax), %eax
 2714 004b C3       		ret
 2715              		.cfi_endproc
 2716              	.LFE472:
 2718              		.section	.text.unlikely._Z12glutLayerGetj
 2719              	.LCOLDE36:
 2720              		.section	.text._Z12glutLayerGetj
 2721              	.LHOTE36:
 2722              		.section	.text.unlikely._Z13glutDeviceGetj,"ax",@progbits
 2723              	.LCOLDB37:
 2724              		.section	.text._Z13glutDeviceGetj,"ax",@progbits
 2725              	.LHOTB37:
 2726              		.p2align 4,,15
 2727              		.globl	_Z13glutDeviceGetj
 2729              	_Z13glutDeviceGetj:
 2730              	.LFB473:
 431:fltk-1.3.4-1/src/glut_compatability.cxx ****  212:fltk-1.3.4-1/FL/Fl_Window.H ****     position on the screen. See Fl_Window::resize() 
 432:fltk-1.3.4-1/src/glut_compatability.cxx ****  213:fltk-1.3.4-1/FL/Fl_Window.H ****     for some more details on positioning windows.
 2731              		.loc 4 432 0
 2732              		.cfi_startproc
 2733              	.LVL247:
 433:fltk-1.3.4-1/src/glut_compatability.cxx ****  214:fltk-1.3.4-1/FL/Fl_Window.H ****     
 2734              		.loc 4 433 0
 2735 0000 81FF5802 		cmpl	$600, %edi
 2735      0000
 2736 0006 7220     		jb	.L274
 2737 0008 81FF5902 		cmpl	$601, %edi
 2737      0000
 434:fltk-1.3.4-1/src/glut_compatability.cxx ****  215:fltk-1.3.4-1/FL/Fl_Window.H ****     Top-level windows initially have visible() set to 0
 2738              		.loc 4 434 0
 2739 000e B8010000 		movl	$1, %eax
 2739      00
 433:fltk-1.3.4-1/src/glut_compatability.cxx ****  214:fltk-1.3.4-1/FL/Fl_Window.H ****     
 2740              		.loc 4 433 0
 2741 0013 760D     		jbe	.L275
 2742 0015 81FF5D02 		cmpl	$605, %edi
 2742      0000
 435:fltk-1.3.4-1/src/glut_compatability.cxx ****  216:fltk-1.3.4-1/FL/Fl_Window.H ****     and parent() set to NULL. Subwindows initially
 436:fltk-1.3.4-1/src/glut_compatability.cxx ****  217:fltk-1.3.4-1/FL/Fl_Window.H ****     have visible() set to 1 and parent() set to
 2743              		.loc 4 436 0
 2744 001b B8030000 		movl	$3, %eax
 2744      00
 433:fltk-1.3.4-1/src/glut_compatability.cxx ****  215:fltk-1.3.4-1/FL/Fl_Window.H ****     Top-level windows initially have visible() set to 0
 2745              		.loc 4 433 0
 2746 0020 7506     		jne	.L274
 2747              	.L275:
 437:fltk-1.3.4-1/src/glut_compatability.cxx ****  218:fltk-1.3.4-1/FL/Fl_Window.H ****     the parent window pointer.
 438:fltk-1.3.4-1/src/glut_compatability.cxx ****  219:fltk-1.3.4-1/FL/Fl_Window.H ****     
 439:fltk-1.3.4-1/src/glut_compatability.cxx ****  220:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Widget::box() defaults to FL_FLAT_BOX. If you plan to
 2748              		.loc 4 439 0
 2749 0022 F3C3     		rep ret
 2750              		.p2align 4,,10
 2751 0024 0F1F4000 		.p2align 3
 2752              	.L274:
 437:fltk-1.3.4-1/src/glut_compatability.cxx ****  218:fltk-1.3.4-1/FL/Fl_Window.H ****     the parent window pointer.
 2753              		.loc 4 437 0
 2754 0028 31C0     		xorl	%eax, %eax
 2755              		.loc 4 439 0
 2756 002a C3       		ret
 2757              		.cfi_endproc
 2758              	.LFE473:
 2760              		.section	.text.unlikely._Z13glutDeviceGetj
 2761              	.LCOLDE37:
 2762              		.section	.text._Z13glutDeviceGetj
 2763              	.LHOTE37:
 2764              		.section	.rodata.str1.1,"aMS",@progbits,1
 2765              	.LC38:
 2766 0000 5F257300 		.string	"_%s"
 2767              		.section	.text.unlikely._Z18glutGetProcAddressPKc,"ax",@progbits
 2768              	.LCOLDB39:
 2769              		.section	.text._Z18glutGetProcAddressPKc,"ax",@progbits
 2770              	.LHOTB39:
 2771              		.p2align 4,,15
 2772              		.globl	_Z18glutGetProcAddressPKc
 2774              	_Z18glutGetProcAddressPKc:
 2775              	.LFB474:
 440:fltk-1.3.4-1/src/glut_compatability.cxx ****  221:fltk-1.3.4-1/FL/Fl_Window.H ****     completely fill the window with children widgets you shou
 441:fltk-1.3.4-1/src/glut_compatability.cxx ****  222:fltk-1.3.4-1/FL/Fl_Window.H ****     change this to FL_NO_BOX. If you turn the window border o
 442:fltk-1.3.4-1/src/glut_compatability.cxx ****  223:fltk-1.3.4-1/FL/Fl_Window.H ****     you may want to change this to FL_UP_BOX.
 2776              		.loc 4 442 0
 2777              		.cfi_startproc
 2778              	.LVL248:
 2779 0000 4881EC18 		subq	$1048, %rsp
 2779      040000
 2780              		.cfi_def_cfa_offset 1056
 2781              		.loc 4 442 0
 2782 0007 4989F9   		movq	%rdi, %r9
 2783              	.LBB231:
 2784              	.LBB232:
 2785              		.file 7 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 2786              		.loc 7 65 0
 2787 000a BA010000 		movl	$1, %edx
 2787      00
 2788              	.LBE232:
 2789              	.LBE231:
 2790              		.loc 4 442 0
 2791 000f 64488B04 		movq	%fs:40, %rax
 2791      25280000 
 2791      00
 2792 0018 48898424 		movq	%rax, 1032(%rsp)
 2792      08040000 
 2793 0020 31C0     		xorl	%eax, %eax
 2794              	.LVL249:
 2795              	.LBB234:
 2796              	.LBB233:
 2797              		.loc 7 65 0
 2798 0022 41B80000 		movl	$.LC38, %r8d
 2798      0000
 2799 0028 B9000400 		movl	$1024, %ecx
 2799      00
 2800 002d BE000400 		movl	$1024, %esi
 2800      00
 2801 0032 4889E7   		movq	%rsp, %rdi
 2802              	.LVL250:
 2803 0035 E8000000 		call	__snprintf_chk
 2803      00
 2804              	.LVL251:
 2805              	.LBE233:
 2806              	.LBE234:
 443:fltk-1.3.4-1/src/glut_compatability.cxx ****  224:fltk-1.3.4-1/FL/Fl_Window.H **** 
 444:fltk-1.3.4-1/src/glut_compatability.cxx ****  225:fltk-1.3.4-1/FL/Fl_Window.H ****     \see Fl_Window(int x, int y, int w, int h, const char* ti
 445:fltk-1.3.4-1/src/glut_compatability.cxx ****  226:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 446:fltk-1.3.4-1/src/glut_compatability.cxx ****  227:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window(int w, int h, const char* title= 0);
 447:fltk-1.3.4-1/src/glut_compatability.cxx ****  228:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Creates a window from the given position, size and titl
 448:fltk-1.3.4-1/src/glut_compatability.cxx ****  229:fltk-1.3.4-1/FL/Fl_Window.H **** 
 449:fltk-1.3.4-1/src/glut_compatability.cxx ****  230:fltk-1.3.4-1/FL/Fl_Window.H ****     \see Fl_Window(int w, int h, const char *title)
 450:fltk-1.3.4-1/src/glut_compatability.cxx ****  231:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 451:fltk-1.3.4-1/src/glut_compatability.cxx ****  232:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window(int x, int y, int w, int h, const char* title =
 452:fltk-1.3.4-1/src/glut_compatability.cxx ****  233:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2807              		.loc 4 452 0
 2808 003a 31FF     		xorl	%edi, %edi
 2809 003c 4889E6   		movq	%rsp, %rsi
 2810 003f E8000000 		call	dlsym
 2810      00
 2811              	.LVL252:
 453:fltk-1.3.4-1/src/glut_compatability.cxx ****  234:fltk-1.3.4-1/FL/Fl_Window.H ****     The destructor <I>also deletes all the children</I>. This
 454:fltk-1.3.4-1/src/glut_compatability.cxx ****  235:fltk-1.3.4-1/FL/Fl_Window.H ****     whole tree to be deleted at once, without having to keep 
 455:fltk-1.3.4-1/src/glut_compatability.cxx ****  236:fltk-1.3.4-1/FL/Fl_Window.H ****     all the children in the user code. A kludge has been done
 456:fltk-1.3.4-1/src/glut_compatability.cxx ****  237:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window and all of its children can be automatic (local
 457:fltk-1.3.4-1/src/glut_compatability.cxx ****  238:fltk-1.3.4-1/FL/Fl_Window.H ****     variables, but you must declare the Fl_Window <I>first</I
 458:fltk-1.3.4-1/src/glut_compatability.cxx ****  239:fltk-1.3.4-1/FL/Fl_Window.H ****     that it is destroyed last.
 459:fltk-1.3.4-1/src/glut_compatability.cxx ****  240:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 460:fltk-1.3.4-1/src/glut_compatability.cxx ****  241:fltk-1.3.4-1/FL/Fl_Window.H ****     virtual ~Fl_Window();
 461:fltk-1.3.4-1/src/glut_compatability.cxx ****  242:fltk-1.3.4-1/FL/Fl_Window.H **** 
 462:fltk-1.3.4-1/src/glut_compatability.cxx ****  243:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual int handle(int);
 463:fltk-1.3.4-1/src/glut_compatability.cxx ****  244:fltk-1.3.4-1/FL/Fl_Window.H **** 
 464:fltk-1.3.4-1/src/glut_compatability.cxx ****  245:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 465:fltk-1.3.4-1/src/glut_compatability.cxx ****  246:fltk-1.3.4-1/FL/Fl_Window.H ****     Changes the size and position of the window.  If shown() 
 466:fltk-1.3.4-1/src/glut_compatability.cxx ****  247:fltk-1.3.4-1/FL/Fl_Window.H ****     these changes are communicated to the window server (whic
 467:fltk-1.3.4-1/src/glut_compatability.cxx ****  248:fltk-1.3.4-1/FL/Fl_Window.H ****     refuse that size and cause a further resize).  If shown()
 468:fltk-1.3.4-1/src/glut_compatability.cxx ****  249:fltk-1.3.4-1/FL/Fl_Window.H ****     false, the size and position are used when show() is call
 469:fltk-1.3.4-1/src/glut_compatability.cxx ****  250:fltk-1.3.4-1/FL/Fl_Window.H ****     See Fl_Group for the effect of resizing on the child widg
 470:fltk-1.3.4-1/src/glut_compatability.cxx ****  251:fltk-1.3.4-1/FL/Fl_Window.H **** 
 2812              		.loc 4 470 0
 2813 0044 488B9424 		movq	1032(%rsp), %rdx
 2813      08040000 
 2814 004c 64483314 		xorq	%fs:40, %rdx
 2814      25280000 
 2814      00
 2815 0055 7508     		jne	.L282
 2816 0057 4881C418 		addq	$1048, %rsp
 2816      040000
 2817              		.cfi_remember_state
 2818              		.cfi_def_cfa_offset 8
 2819 005e C3       		ret
 2820              	.L282:
 2821              		.cfi_restore_state
 2822 005f E8000000 		call	__stack_chk_fail
 2822      00
 2823              	.LVL253:
 2824              		.cfi_endproc
 2825              	.LFE474:
 2827              		.section	.text.unlikely._Z18glutGetProcAddressPKc
 2828              	.LCOLDE39:
 2829              		.section	.text._Z18glutGetProcAddressPKc
 2830              	.LHOTE39:
 2831              		.section	.text.unlikely._Z22glutExtensionSupportedPKc,"ax",@progbits
 2832              	.LCOLDB40:
 2833              		.section	.text._Z22glutExtensionSupportedPKc,"ax",@progbits
 2834              	.LHOTB40:
 2835              		.p2align 4,,15
 2836              		.globl	_Z22glutExtensionSupportedPKc
 2838              	_Z22glutExtensionSupportedPKc:
 2839              	.LFB475:
 471:fltk-1.3.4-1/src/glut_compatability.cxx ****  252:fltk-1.3.4-1/FL/Fl_Window.H ****     You can also call the Fl_Widget methods size(x,y) and pos
 472:fltk-1.3.4-1/src/glut_compatability.cxx ****  253:fltk-1.3.4-1/FL/Fl_Window.H ****     which are inline wrappers for this virtual function.
 473:fltk-1.3.4-1/src/glut_compatability.cxx ****  254:fltk-1.3.4-1/FL/Fl_Window.H **** 
 474:fltk-1.3.4-1/src/glut_compatability.cxx ****  255:fltk-1.3.4-1/FL/Fl_Window.H ****     A top-level window can not force, but merely suggest a po
 475:fltk-1.3.4-1/src/glut_compatability.cxx ****  256:fltk-1.3.4-1/FL/Fl_Window.H ****     size to the operating system. The window manager may not 
 476:fltk-1.3.4-1/src/glut_compatability.cxx ****  257:fltk-1.3.4-1/FL/Fl_Window.H ****     able to display a window at the desired position or with 
 477:fltk-1.3.4-1/src/glut_compatability.cxx ****  258:fltk-1.3.4-1/FL/Fl_Window.H ****     dimensions. It is up to the application developer to veri
 478:fltk-1.3.4-1/src/glut_compatability.cxx ****  259:fltk-1.3.4-1/FL/Fl_Window.H ****     parameters after the resize request.
 479:fltk-1.3.4-1/src/glut_compatability.cxx ****  260:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 480:fltk-1.3.4-1/src/glut_compatability.cxx ****  261:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void resize(int X,int Y,int W,int H);
 2840              		.loc 4 480 0
 2841              		.cfi_startproc
 2842              	.LVL254:
 481:fltk-1.3.4-1/src/glut_compatability.cxx ****  262:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2843              		.loc 4 481 0
 2844 0000 4885FF   		testq	%rdi, %rdi
 2845 0003 747B     		je	.L300
 480:fltk-1.3.4-1/src/glut_compatability.cxx ****  262:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2846              		.loc 4 480 0
 2847 0005 4154     		pushq	%r12
 2848              		.cfi_def_cfa_offset 16
 2849              		.cfi_offset 12, -16
 2850 0007 55       		pushq	%rbp
 2851              		.cfi_def_cfa_offset 24
 2852              		.cfi_offset 6, -24
 2853              	.LBB235:
 2854              	.LBB236:
 2855              		.file 8 "/usr/include/string.h"
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
 2856              		.loc 8 226 0
 2857 0008 BE200000 		movl	$32, %esi
 2857      00
 2858              	.LBE236:
 2859              	.LBE235:
 480:fltk-1.3.4-1/src/glut_compatability.cxx ****  262:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2860              		.loc 4 480 0
 2861 000d 53       		pushq	%rbx
 2862              		.cfi_def_cfa_offset 32
 2863              		.cfi_offset 3, -32
 2864 000e 4889FB   		movq	%rdi, %rbx
 2865              	.LVL255:
 2866              	.LBB238:
 2867              	.LBB237:
 2868              		.loc 8 226 0
 2869 0011 E8000000 		call	strchr
 2869      00
 2870              	.LVL256:
 2871              	.LBE237:
 2872              	.LBE238:
 2873              		.loc 4 481 0
 2874 0016 4885C0   		testq	%rax, %rax
 2875 0019 740D     		je	.L301
 2876              	.L284:
 2877 001b 31C0     		xorl	%eax, %eax
 2878              	.L287:
 482:fltk-1.3.4-1/src/glut_compatability.cxx ****  263:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets whether or not the window manager border is around t
 483:fltk-1.3.4-1/src/glut_compatability.cxx ****  264:fltk-1.3.4-1/FL/Fl_Window.H ****     window.  The default value is true. void border(int) can 
 484:fltk-1.3.4-1/src/glut_compatability.cxx ****  265:fltk-1.3.4-1/FL/Fl_Window.H ****     used to turn the border on and off. <I>Under most X windo
 485:fltk-1.3.4-1/src/glut_compatability.cxx ****  266:fltk-1.3.4-1/FL/Fl_Window.H ****     managers this does not work after show() has been called,
 486:fltk-1.3.4-1/src/glut_compatability.cxx ****  267:fltk-1.3.4-1/FL/Fl_Window.H ****     although SGI's 4DWM does work.</I>
 487:fltk-1.3.4-1/src/glut_compatability.cxx ****  268:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 488:fltk-1.3.4-1/src/glut_compatability.cxx ****  269:fltk-1.3.4-1/FL/Fl_Window.H ****   void border(int b);
 489:fltk-1.3.4-1/src/glut_compatability.cxx ****  270:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 490:fltk-1.3.4-1/src/glut_compatability.cxx ****  271:fltk-1.3.4-1/FL/Fl_Window.H ****     Fast inline function to turn the window manager border
 491:fltk-1.3.4-1/src/glut_compatability.cxx ****  272:fltk-1.3.4-1/FL/Fl_Window.H ****     off. It only works before show() is called.
 492:fltk-1.3.4-1/src/glut_compatability.cxx ****  273:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 493:fltk-1.3.4-1/src/glut_compatability.cxx ****  274:fltk-1.3.4-1/FL/Fl_Window.H ****   void clear_border()	{set_flag(NOBORDER);}
 494:fltk-1.3.4-1/src/glut_compatability.cxx ****  275:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::border(int) */
 495:fltk-1.3.4-1/src/glut_compatability.cxx ****  276:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int border() const	{return !(flags() & NOBORDER);}
 496:fltk-1.3.4-1/src/glut_compatability.cxx ****  277:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Activates the flags NOBORDER|FL_OVERRIDE */
 497:fltk-1.3.4-1/src/glut_compatability.cxx ****  278:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_override()	{set_flag(NOBORDER|OVERRIDE);}
 498:fltk-1.3.4-1/src/glut_compatability.cxx ****  279:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Returns non zero if FL_OVERRIDE flag is set, 0 otherwis
 499:fltk-1.3.4-1/src/glut_compatability.cxx ****  280:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int override() const  { return flags()&OVERRIDE; }
 2879              		.loc 4 499 0
 2880 001d 5B       		popq	%rbx
 2881              		.cfi_remember_state
 2882              		.cfi_restore 3
 2883              		.cfi_def_cfa_offset 24
 2884              	.LVL257:
 2885 001e 5D       		popq	%rbp
 2886              		.cfi_restore 6
 2887              		.cfi_def_cfa_offset 16
 2888 001f 415C     		popq	%r12
 2889              		.cfi_restore 12
 2890              		.cfi_def_cfa_offset 8
 2891 0021 C3       		ret
 2892              	.LVL258:
 2893              		.p2align 4,,10
 2894 0022 660F1F44 		.p2align 3
 2894      0000
 2895              	.L301:
 2896              		.cfi_restore_state
 484:fltk-1.3.4-1/src/glut_compatability.cxx ****  266:fltk-1.3.4-1/FL/Fl_Window.H ****     managers this does not work after show() has been called,
 2897              		.loc 4 484 0
 2898 0028 4889DF   		movq	%rbx, %rdi
 2899 002b E8000000 		call	strlen
 2899      00
 2900              	.LVL259:
 486:fltk-1.3.4-1/src/glut_compatability.cxx ****  268:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 2901              		.loc 4 486 0
 2902 0030 BF031F00 		movl	$7939, %edi
 2902      00
 484:fltk-1.3.4-1/src/glut_compatability.cxx ****  266:fltk-1.3.4-1/FL/Fl_Window.H ****     managers this does not work after show() has been called,
 2903              		.loc 4 484 0
 2904 0035 4863E8   		movslq	%eax, %rbp
 2905              	.LVL260:
 486:fltk-1.3.4-1/src/glut_compatability.cxx ****  268:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 2906              		.loc 4 486 0
 2907 0038 E8000000 		call	glGetString
 2907      00
 2908              	.LVL261:
 488:fltk-1.3.4-1/src/glut_compatability.cxx ****  270:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2909              		.loc 4 488 0
 2910 003d 4885C0   		testq	%rax, %rax
 486:fltk-1.3.4-1/src/glut_compatability.cxx ****  268:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 2911              		.loc 4 486 0
 2912 0040 4989C4   		movq	%rax, %r12
 2913              	.LVL262:
 488:fltk-1.3.4-1/src/glut_compatability.cxx ****  270:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 2914              		.loc 4 488 0
 2915 0043 74D6     		je	.L284
 2916 0045 4889C7   		movq	%rax, %rdi
 2917              	.LVL263:
 2918 0048 0F1F8400 		.p2align 4,,10
 2918      00000000 
 2919              		.p2align 3
 2920              	.L288:
 2921              	.LBB239:
 2922              	.LBB240:
 2923              	.LBB241:
 2924              	.LBB242:
 227:/usr/include/string.h **** }
 228:/usr/include/string.h **** # endif
 229:/usr/include/string.h **** }
 230:/usr/include/string.h **** #else
 231:/usr/include/string.h **** extern char *strchr (const char *__s, int __c)
 232:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 233:/usr/include/string.h **** #endif
 234:/usr/include/string.h **** /* Find the last occurrence of C in S.  */
 235:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 236:/usr/include/string.h **** extern "C++"
 237:/usr/include/string.h **** {
 238:/usr/include/string.h **** extern char *strrchr (char *__s, int __c)
 239:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 240:/usr/include/string.h **** extern const char *strrchr (const char *__s, int __c)
 241:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 242:/usr/include/string.h **** 
 243:/usr/include/string.h **** # ifdef __OPTIMIZE__
 244:/usr/include/string.h **** __extern_always_inline char *
 245:/usr/include/string.h **** strrchr (char *__s, int __c) __THROW
 246:/usr/include/string.h **** {
 247:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 248:/usr/include/string.h **** }
 249:/usr/include/string.h **** 
 250:/usr/include/string.h **** __extern_always_inline const char *
 251:/usr/include/string.h **** strrchr (const char *__s, int __c) __THROW
 252:/usr/include/string.h **** {
 253:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 254:/usr/include/string.h **** }
 255:/usr/include/string.h **** # endif
 256:/usr/include/string.h **** }
 257:/usr/include/string.h **** #else
 258:/usr/include/string.h **** extern char *strrchr (const char *__s, int __c)
 259:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 260:/usr/include/string.h **** #endif
 261:/usr/include/string.h **** __END_NAMESPACE_STD
 262:/usr/include/string.h **** 
 263:/usr/include/string.h **** #ifdef __USE_GNU
 264:/usr/include/string.h **** /* This function is similar to `strchr'.  But it returns a pointer to
 265:/usr/include/string.h ****    the closing NUL byte in case C is not found in S.  */
 266:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 267:/usr/include/string.h **** extern "C++" char *strchrnul (char *__s, int __c)
 268:/usr/include/string.h ****      __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
 269:/usr/include/string.h **** extern "C++" const char *strchrnul (const char *__s, int __c)
 270:/usr/include/string.h ****      __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
 271:/usr/include/string.h **** # else
 272:/usr/include/string.h **** extern char *strchrnul (const char *__s, int __c)
 273:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 274:/usr/include/string.h **** # endif
 275:/usr/include/string.h **** #endif
 276:/usr/include/string.h **** 
 277:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 278:/usr/include/string.h **** /* Return the length of the initial segment of S which
 279:/usr/include/string.h ****    consists entirely of characters not in REJECT.  */
 280:/usr/include/string.h **** extern size_t strcspn (const char *__s, const char *__reject)
 281:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 282:/usr/include/string.h **** /* Return the length of the initial segment of S which
 283:/usr/include/string.h ****    consists entirely of characters in ACCEPT.  */
 284:/usr/include/string.h **** extern size_t strspn (const char *__s, const char *__accept)
 285:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 286:/usr/include/string.h **** /* Find the first occurrence in S of any character in ACCEPT.  */
 287:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 288:/usr/include/string.h **** extern "C++"
 289:/usr/include/string.h **** {
 290:/usr/include/string.h **** extern char *strpbrk (char *__s, const char *__accept)
 291:/usr/include/string.h ****      __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
 292:/usr/include/string.h **** extern const char *strpbrk (const char *__s, const char *__accept)
 293:/usr/include/string.h ****      __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
 294:/usr/include/string.h **** 
 295:/usr/include/string.h **** # ifdef __OPTIMIZE__
 296:/usr/include/string.h **** __extern_always_inline char *
 297:/usr/include/string.h **** strpbrk (char *__s, const char *__accept) __THROW
 298:/usr/include/string.h **** {
 299:/usr/include/string.h ****   return __builtin_strpbrk (__s, __accept);
 300:/usr/include/string.h **** }
 301:/usr/include/string.h **** 
 302:/usr/include/string.h **** __extern_always_inline const char *
 303:/usr/include/string.h **** strpbrk (const char *__s, const char *__accept) __THROW
 304:/usr/include/string.h **** {
 305:/usr/include/string.h ****   return __builtin_strpbrk (__s, __accept);
 306:/usr/include/string.h **** }
 307:/usr/include/string.h **** # endif
 308:/usr/include/string.h **** }
 309:/usr/include/string.h **** #else
 310:/usr/include/string.h **** extern char *strpbrk (const char *__s, const char *__accept)
 311:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 312:/usr/include/string.h **** #endif
 313:/usr/include/string.h **** /* Find the first occurrence of NEEDLE in HAYSTACK.  */
 314:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 315:/usr/include/string.h **** extern "C++"
 316:/usr/include/string.h **** {
 317:/usr/include/string.h **** extern char *strstr (char *__haystack, const char *__needle)
 318:/usr/include/string.h ****      __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
 319:/usr/include/string.h **** extern const char *strstr (const char *__haystack, const char *__needle)
 320:/usr/include/string.h ****      __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
 321:/usr/include/string.h **** 
 322:/usr/include/string.h **** # ifdef __OPTIMIZE__
 323:/usr/include/string.h **** __extern_always_inline char *
 324:/usr/include/string.h **** strstr (char *__haystack, const char *__needle) __THROW
 325:/usr/include/string.h **** {
 326:/usr/include/string.h ****   return __builtin_strstr (__haystack, __needle);
 327:/usr/include/string.h **** }
 328:/usr/include/string.h **** 
 329:/usr/include/string.h **** __extern_always_inline const char *
 330:/usr/include/string.h **** strstr (const char *__haystack, const char *__needle) __THROW
 331:/usr/include/string.h **** {
 332:/usr/include/string.h ****   return __builtin_strstr (__haystack, __needle);
 2925              		.loc 8 332 0
 2926 0050 4889DE   		movq	%rbx, %rsi
 2927 0053 E8000000 		call	strstr
 2927      00
 2928              	.LVL264:
 2929              	.LBE242:
 2930              	.LBE241:
 492:fltk-1.3.4-1/src/glut_compatability.cxx ****  274:fltk-1.3.4-1/FL/Fl_Window.H ****   void clear_border()	{set_flag(NOBORDER);}
 2931              		.loc 4 492 0
 2932 0058 4885C0   		testq	%rax, %rax
 2933 005b 74BE     		je	.L284
 494:fltk-1.3.4-1/src/glut_compatability.cxx ****  276:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int border() const	{return !(flags() & NOBORDER);}
 2934              		.loc 4 494 0
 2935 005d 4939C4   		cmpq	%rax, %r12
 2936 0060 740A     		je	.L285
 494:fltk-1.3.4-1/src/glut_compatability.cxx ****  276:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int border() const	{return !(flags() & NOBORDER);}
 2937              		.loc 4 494 0 is_stmt 0 discriminator 2
 2938 0062 8078FF20 		cmpb	$32, -1(%rax)
 2939 0066 488D3C28 		leaq	(%rax,%rbp), %rdi
 2940 006a 75E4     		jne	.L288
 2941              	.L285:
 495:fltk-1.3.4-1/src/glut_compatability.cxx ****  277:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Activates the flags NOBORDER|FL_OVERRIDE */
 2942              		.loc 4 495 0 is_stmt 1 discriminator 3
 2943 006c 4801E8   		addq	%rbp, %rax
 494:fltk-1.3.4-1/src/glut_compatability.cxx ****  276:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int border() const	{return !(flags() & NOBORDER);}
 2944              		.loc 4 494 0 discriminator 3
 2945 006f F600DF   		testb	$-33, (%rax)
 2946 0072 7414     		je	.L289
 2947 0074 4889C7   		movq	%rax, %rdi
 2948              	.LBE240:
 490:fltk-1.3.4-1/src/glut_compatability.cxx ****  272:fltk-1.3.4-1/FL/Fl_Window.H ****     off. It only works before show() is called.
 2949              		.loc 4 490 0
 2950 0077 EBD7     		jmp	.L288
 2951              	.LVL265:
 2952 0079 0F1F8000 		.p2align 4,,10
 2952      000000
 2953              		.p2align 3
 2954              	.L300:
 2955              		.cfi_def_cfa_offset 8
 2956              		.cfi_restore 3
 2957              		.cfi_restore 6
 2958              		.cfi_restore 12
 2959              	.LBE239:
 481:fltk-1.3.4-1/src/glut_compatability.cxx ****  263:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets whether or not the window manager border is around t
 2960              		.loc 4 481 0
 2961 0080 31C0     		xorl	%eax, %eax
 2962              		.loc 4 499 0
 2963 0082 C3       		ret
 2964              	.LVL266:
 2965              		.p2align 4,,10
 2966 0083 0F1F4400 		.p2align 3
 2966      00
 2967              	.L289:
 2968              		.cfi_def_cfa_offset 32
 2969              		.cfi_offset 3, -32
 2970              		.cfi_offset 6, -24
 2971              		.cfi_offset 12, -16
 2972              	.LBB244:
 2973              	.LBB243:
 495:fltk-1.3.4-1/src/glut_compatability.cxx ****  277:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Activates the flags NOBORDER|FL_OVERRIDE */
 2974              		.loc 4 495 0
 2975 0088 B8010000 		movl	$1, %eax
 2975      00
 2976 008d EB8E     		jmp	.L287
 2977              	.LBE243:
 2978              	.LBE244:
 2979              		.cfi_endproc
 2980              	.LFE475:
 2982              		.section	.text.unlikely._Z22glutExtensionSupportedPKc
 2983              	.LCOLDE40:
 2984              		.section	.text._Z22glutExtensionSupportedPKc
 2985              	.LHOTE40:
 2986              		.section	.text.unlikely._Z12glutIdleFuncPFvvE,"ax",@progbits
 2987              	.LCOLDB41:
 2988              		.section	.text._Z12glutIdleFuncPFvvE,"ax",@progbits
 2989              	.LHOTB41:
 2990              		.p2align 4,,15
 2991              		.globl	_Z12glutIdleFuncPFvvE
 2993              	_Z12glutIdleFuncPFvvE:
 2994              	.LFB476:
 500:fltk-1.3.4-1/src/glut_compatability.cxx ****  281:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 501:fltk-1.3.4-1/src/glut_compatability.cxx ****  282:fltk-1.3.4-1/FL/Fl_Window.H ****     A "modal" window, when shown(), will prevent any events f
 502:fltk-1.3.4-1/src/glut_compatability.cxx ****  283:fltk-1.3.4-1/FL/Fl_Window.H ****     being delivered to other windows in the same program, and
 503:fltk-1.3.4-1/src/glut_compatability.cxx ****  284:fltk-1.3.4-1/FL/Fl_Window.H ****     remain on top of the other windows (if the X window manag
 504:fltk-1.3.4-1/src/glut_compatability.cxx ****  285:fltk-1.3.4-1/FL/Fl_Window.H ****     the "transient for" property).  Several modal windows may
 2995              		.loc 4 504 0
 2996              		.cfi_startproc
 2997              	.LVL267:
 2998 0000 53       		pushq	%rbx
 2999              		.cfi_def_cfa_offset 16
 3000              		.cfi_offset 3, -16
 3001              		.loc 4 504 0
 3002 0001 4889FB   		movq	%rdi, %rbx
 505:fltk-1.3.4-1/src/glut_compatability.cxx ****  286:fltk-1.3.4-1/FL/Fl_Window.H ****     once, in which case only the last one shown gets events. 
 506:fltk-1.3.4-1/src/glut_compatability.cxx ****  287:fltk-1.3.4-1/FL/Fl_Window.H ****     which window (if any) is modal by calling Fl::modal().
 3003              		.loc 4 506 0
 3004 0004 488B3D00 		movq	_ZL14glut_idle_func(%rip), %rdi
 3004      000000
 3005              	.LVL268:
 3006 000b 4839DF   		cmpq	%rbx, %rdi
 3007 000e 7422     		je	.L302
 507:fltk-1.3.4-1/src/glut_compatability.cxx ****  288:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 508:fltk-1.3.4-1/src/glut_compatability.cxx ****  289:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_modal()	{set_flag(MODAL);}
 3008              		.loc 4 508 0
 3009 0010 4885FF   		testq	%rdi, %rdi
 3010 0013 7407     		je	.L304
 3011              		.loc 4 508 0 is_stmt 0 discriminator 1
 3012 0015 31F6     		xorl	%esi, %esi
 3013 0017 E8000000 		call	_ZN2Fl11remove_idleEPFvPvES0_
 3013      00
 3014              	.LVL269:
 3015              	.L304:
 509:fltk-1.3.4-1/src/glut_compatability.cxx ****  290:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is modal.  */
 510:fltk-1.3.4-1/src/glut_compatability.cxx ****  291:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int modal() const	{return flags() & MODAL;}
 3016              		.loc 4 510 0 is_stmt 1
 3017 001c 4885DB   		testq	%rbx, %rbx
 3018 001f 740A     		je	.L305
 3019              		.loc 4 510 0 is_stmt 0 discriminator 1
 3020 0021 31F6     		xorl	%esi, %esi
 3021 0023 4889DF   		movq	%rbx, %rdi
 3022 0026 E8000000 		call	_ZN2Fl8add_idleEPFvPvES0_
 3022      00
 3023              	.LVL270:
 3024              	.L305:
 511:fltk-1.3.4-1/src/glut_compatability.cxx ****  292:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 512:fltk-1.3.4-1/src/glut_compatability.cxx ****  293:fltk-1.3.4-1/FL/Fl_Window.H ****     A "non-modal" window (terminology borrowed from Microsoft
 3025              		.loc 4 512 0 is_stmt 1
 3026 002b 48891D00 		movq	%rbx, _ZL14glut_idle_func(%rip)
 3026      000000
 3027              	.L302:
 513:fltk-1.3.4-1/src/glut_compatability.cxx ****  294:fltk-1.3.4-1/FL/Fl_Window.H ****     acts like a modal() one in that it remains on top, but it
 3028              		.loc 4 513 0
 3029 0032 5B       		popq	%rbx
 3030              		.cfi_def_cfa_offset 8
 3031              	.LVL271:
 3032 0033 C3       		ret
 3033              		.cfi_endproc
 3034              	.LFE476:
 3036              		.section	.text.unlikely._Z12glutIdleFuncPFvvE
 3037              	.LCOLDE41:
 3038              		.section	.text._Z12glutIdleFuncPFvvE
 3039              	.LHOTE41:
 3040              		.weak	_ZTS14Fl_Glut_Window
 3041              		.section	.rodata._ZTS14Fl_Glut_Window,"aG",@progbits,_ZTS14Fl_Glut_Window,comdat
 3042              		.align 16
 3045              	_ZTS14Fl_Glut_Window:
 3046 0000 3134466C 		.string	"14Fl_Glut_Window"
 3046      5F476C75 
 3046      745F5769 
 3046      6E646F77 
 3046      00
 3047              		.weak	_ZTI14Fl_Glut_Window
 3048              		.section	.rodata._ZTI14Fl_Glut_Window,"aG",@progbits,_ZTI14Fl_Glut_Window,comdat
 3049              		.align 8
 3052              	_ZTI14Fl_Glut_Window:
 3053 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3053      00000000 
 3054 0008 00000000 		.quad	_ZTS14Fl_Glut_Window
 3054      00000000 
 3055 0010 00000000 		.quad	_ZTI12Fl_Gl_Window
 3055      00000000 
 3056              		.weak	_ZTV14Fl_Glut_Window
 3057              		.section	.rodata._ZTV14Fl_Glut_Window,"aG",@progbits,_ZTV14Fl_Glut_Window,comdat
 3058              		.align 8
 3061              	_ZTV14Fl_Glut_Window:
 3062 0000 00000000 		.quad	0
 3062      00000000 
 3063 0008 00000000 		.quad	_ZTI14Fl_Glut_Window
 3063      00000000 
 3064 0010 00000000 		.quad	_ZN14Fl_Glut_WindowD1Ev
 3064      00000000 
 3065 0018 00000000 		.quad	_ZN14Fl_Glut_WindowD0Ev
 3065      00000000 
 3066 0020 00000000 		.quad	_ZN14Fl_Glut_Window4drawEv
 3066      00000000 
 3067 0028 00000000 		.quad	_ZN14Fl_Glut_Window6handleEi
 3067      00000000 
 3068 0030 00000000 		.quad	_ZN12Fl_Gl_Window6resizeEiiii
 3068      00000000 
 3069 0038 00000000 		.quad	_ZN12Fl_Gl_Window4showEv
 3069      00000000 
 3070 0040 00000000 		.quad	_ZN12Fl_Gl_Window4hideEv
 3070      00000000 
 3071 0048 00000000 		.quad	_ZN8Fl_Group8as_groupEv
 3071      00000000 
 3072 0050 00000000 		.quad	_ZN9Fl_Window9as_windowEv
 3072      00000000 
 3073 0058 00000000 		.quad	_ZN12Fl_Gl_Window12as_gl_windowEv
 3073      00000000 
 3074 0060 00000000 		.quad	_ZN12Fl_Gl_Window5flushEv
 3074      00000000 
 3075 0068 00000000 		.quad	_ZN14Fl_Glut_Window12draw_overlayEv
 3075      00000000 
 3076              		.section	.bss._ZL5menus,"aw",@nobits
 3077              		.align 32
 3080              	_ZL5menus:
 3081 0000 00000000 		.zero	792
 3081      00000000 
 3081      00000000 
 3081      00000000 
 3081      00000000 
 3082              		.section	.bss._ZL7initpos,"aw",@nobits
 3083              		.align 4
 3086              	_ZL7initpos:
 3087 0000 00000000 		.zero	4
 3088              		.section	.data._ZL5inith,"aw",@progbits
 3089              		.align 4
 3092              	_ZL5inith:
 3093 0000 2C010000 		.long	300
 3094              		.section	.data._ZL5initw,"aw",@progbits
 3095              		.align 4
 3098              	_ZL5initw:
 3099 0000 2C010000 		.long	300
 3100              		.section	.bss._ZL5inity,"aw",@nobits
 3101              		.align 4
 3104              	_ZL5inity:
 3105 0000 00000000 		.zero	4
 3106              		.section	.bss._ZL5initx,"aw",@nobits
 3107              		.align 4
 3110              	_ZL5initx:
 3111 0000 00000000 		.zero	4
 3112              		.section	.bss._ZL8initargv,"aw",@nobits
 3113              		.align 8
 3116              	_ZL8initargv:
 3117 0000 00000000 		.zero	8
 3117      00000000 
 3118              		.section	.bss._ZL8initargc,"aw",@nobits
 3119              		.align 4
 3122              	_ZL8initargc:
 3123 0000 00000000 		.zero	4
 3124              		.section	.data._ZL9glut_mode,"aw",@progbits
 3125              		.align 4
 3128              	_ZL9glut_mode:
 3129 0000 10000000 		.long	16
 3130              		.section	.bss._ZL6indraw,"aw",@nobits
 3131              		.align 4
 3134              	_ZL6indraw:
 3135 0000 00000000 		.zero	4
 3136              		.globl	glut_menustatus_function
 3137              		.section	.bss.glut_menustatus_function,"aw",@nobits
 3138              		.align 8
 3141              	glut_menustatus_function:
 3142 0000 00000000 		.zero	8
 3142      00000000 
 3143              		.globl	glut_menustate_function
 3144              		.section	.bss.glut_menustate_function,"aw",@nobits
 3145              		.align 8
 3148              	glut_menustate_function:
 3149 0000 00000000 		.zero	8
 3149      00000000 
 3150              		.globl	glut_menu
 3151              		.section	.bss.glut_menu,"aw",@nobits
 3152              		.align 4
 3155              	glut_menu:
 3156 0000 00000000 		.zero	4
 3157              		.globl	glut_window
 3158              		.section	.bss.glut_window,"aw",@nobits
 3159              		.align 8
 3162              	glut_window:
 3163 0000 00000000 		.zero	8
 3163      00000000 
 3164              		.section	.bss._ZL14glut_idle_func,"aw",@nobits
 3165              		.align 8
 3168              	_ZL14glut_idle_func:
 3169 0000 00000000 		.zero	8
 3169      00000000 
 3170              		.section	.bss._ZL7windows,"aw",@nobits
 3171              		.align 32
 3174              	_ZL7windows:
 3175 0000 00000000 		.zero	264
 3175      00000000 
 3175      00000000 
 3175      00000000 
 3175      00000000 
 3176              		.section	.rodata.cst8,"aM",@progbits,8
 3177              		.align 8
 3178              	.LC4:
 3179 0000 00000000 		.long	0
 3180 0004 0000E03F 		.long	1071644672
 3181              		.text
 3182              	.Letext0:
 3183              		.section	.text.unlikely._ZN8Fl_Group8as_groupEv,"axG",@progbits,_ZN8Fl_Group8as_groupEv,comdat
 3184              	.Letext_cold0:
 3185              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3186              		.file 10 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3187              		.file 11 "/usr/include/libio.h"
 3188              		.file 12 "fltk-1.3.4-1/FL/fl_types.h"
 3189              		.file 13 "fltk-1.3.4-1/FL/Enumerations.H"
 3190              		.file 14 "/usr/include/GL/gl.h"
 3191              		.file 15 "fltk-1.3.4-1/FL/Fl_Widget.H"
 3192              		.file 16 "fltk-1.3.4-1/FL/Fl_Image.H"
 3193              		.file 17 "fltk-1.3.4-1/FL/glut.H"
 3194              		.file 18 "/usr/include/stdio.h"
 3195              		.file 19 "/usr/include/dlfcn.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 glut_compatability.cxx
     /tmp/cc4J4ZdK.s:16     .text._ZN8Fl_Group8as_groupEv:0000000000000000 _ZN8Fl_Group8as_groupEv
     /tmp/cc4J4ZdK.s:41     .text._ZN9Fl_Window9as_windowEv:0000000000000000 _ZN9Fl_Window9as_windowEv
     /tmp/cc4J4ZdK.s:66     .text._ZN12Fl_Gl_Window12as_gl_windowEv:0000000000000000 _ZN12Fl_Gl_Window12as_gl_windowEv
     /tmp/cc4J4ZdK.s:88     .text._ZL15default_displayv:0000000000000000 _ZL15default_displayv
     /tmp/cc4J4ZdK.s:110    .text._ZN14Fl_Glut_Window4drawEv:0000000000000000 _ZN14Fl_Glut_Window4drawEv
     /tmp/cc4J4ZdK.s:3162   .bss.glut_window:0000000000000000 glut_window
     /tmp/cc4J4ZdK.s:3134   .bss._ZL6indraw:0000000000000000 _ZL6indraw
     /tmp/cc4J4ZdK.s:180    .text._ZN14Fl_Glut_Window12draw_overlayEv:0000000000000000 _ZN14Fl_Glut_Window12draw_overlayEv
     /tmp/cc4J4ZdK.s:246    .text._ZN14Fl_Glut_Window6handleEi:0000000000000000 _ZN14Fl_Glut_Window6handleEi
     /tmp/cc4J4ZdK.s:3148   .bss.glut_menustate_function:0000000000000000 glut_menustate_function
     /tmp/cc4J4ZdK.s:3155   .bss.glut_menu:0000000000000000 glut_menu
     /tmp/cc4J4ZdK.s:3141   .bss.glut_menustatus_function:0000000000000000 glut_menustatus_function
     /tmp/cc4J4ZdK.s:3080   .bss._ZL5menus:0000000000000000 _ZL5menus
     /tmp/cc4J4ZdK.s:813    .text._ZL15default_reshapeii:0000000000000000 _ZL15default_reshapeii
     /tmp/cc4J4ZdK.s:843    .text._ZN14Fl_Glut_WindowD2Ev:0000000000000000 _ZN14Fl_Glut_WindowD2Ev
     /tmp/cc4J4ZdK.s:3061   .rodata._ZTV14Fl_Glut_Window:0000000000000000 _ZTV14Fl_Glut_Window
     /tmp/cc4J4ZdK.s:3174   .bss._ZL7windows:0000000000000000 _ZL7windows
     /tmp/cc4J4ZdK.s:843    .text._ZN14Fl_Glut_WindowD2Ev:0000000000000000 _ZN14Fl_Glut_WindowD1Ev
     /tmp/cc4J4ZdK.s:886    .text._ZN14Fl_Glut_WindowD0Ev:0000000000000000 _ZN14Fl_Glut_WindowD0Ev
     /tmp/cc4J4ZdK.s:951    .text._ZL7additemP4menu:0000000000000000 _ZL7additemP4menu
     /tmp/cc4J4ZdK.s:1116   .text._ZN14Fl_Glut_Window12make_currentEv:0000000000000000 _ZN14Fl_Glut_Window12make_currentEv
     /tmp/cc4J4ZdK.s:1149   .text._Z15glutSwapBuffersv:0000000000000000 _Z15glutSwapBuffersv
     /tmp/cc4J4ZdK.s:1181   .text._ZN14Fl_Glut_Window5_initEv:0000000000000000 _ZN14Fl_Glut_Window5_initEv
     /tmp/cc4J4ZdK.s:3128   .data._ZL9glut_mode:0000000000000000 _ZL9glut_mode
     /tmp/cc4J4ZdK.s:1276   .text._ZN14Fl_Glut_WindowC2EiiPKc:0000000000000000 _ZN14Fl_Glut_WindowC2EiiPKc
     /tmp/cc4J4ZdK.s:1276   .text._ZN14Fl_Glut_WindowC2EiiPKc:0000000000000000 _ZN14Fl_Glut_WindowC1EiiPKc
     /tmp/cc4J4ZdK.s:1327   .text._ZN14Fl_Glut_WindowC2EiiiiPKc:0000000000000000 _ZN14Fl_Glut_WindowC2EiiiiPKc
     /tmp/cc4J4ZdK.s:1327   .text._ZN14Fl_Glut_WindowC2EiiiiPKc:0000000000000000 _ZN14Fl_Glut_WindowC1EiiiiPKc
     /tmp/cc4J4ZdK.s:1376   .text._Z8glutInitPiPPc:0000000000000000 _Z8glutInitPiPPc
     /tmp/cc4J4ZdK.s:3122   .bss._ZL8initargc:0000000000000000 _ZL8initargc
     /tmp/cc4J4ZdK.s:3116   .bss._ZL8initargv:0000000000000000 _ZL8initargv
     /tmp/cc4J4ZdK.s:1522   .text._Z19glutInitDisplayModej:0000000000000000 _Z19glutInitDisplayModej
     /tmp/cc4J4ZdK.s:1544   .text._Z12glutMainLoopv:0000000000000000 _Z12glutMainLoopv
     /tmp/cc4J4ZdK.s:1565   .text._Z22glutInitWindowPositionii:0000000000000000 _Z22glutInitWindowPositionii
     /tmp/cc4J4ZdK.s:3110   .bss._ZL5initx:0000000000000000 _ZL5initx
     /tmp/cc4J4ZdK.s:3104   .bss._ZL5inity:0000000000000000 _ZL5inity
     /tmp/cc4J4ZdK.s:3086   .bss._ZL7initpos:0000000000000000 _ZL7initpos
     /tmp/cc4J4ZdK.s:1589   .text._Z18glutInitWindowSizeii:0000000000000000 _Z18glutInitWindowSizeii
     /tmp/cc4J4ZdK.s:3098   .data._ZL5initw:0000000000000000 _ZL5initw
     /tmp/cc4J4ZdK.s:3092   .data._ZL5inith:0000000000000000 _ZL5inith
     /tmp/cc4J4ZdK.s:1612   .text._Z16glutCreateWindowPKc:0000000000000000 _Z16glutCreateWindowPKc
     /tmp/cc4J4ZdK.s:1751   .text._Z16glutCreateWindowPc:0000000000000000 _Z16glutCreateWindowPc
     /tmp/cc4J4ZdK.s:1773   .text._Z19glutCreateSubWindowiiiii:0000000000000000 _Z19glutCreateSubWindowiiiii
     /tmp/cc4J4ZdK.s:1886   .text._Z17glutDestroyWindowi:0000000000000000 _Z17glutDestroyWindowi
     /tmp/cc4J4ZdK.s:1919   .text._Z23glutPostWindowRedisplayi:0000000000000000 _Z23glutPostWindowRedisplayi
     /tmp/cc4J4ZdK.s:1944   .text._Z13glutSetWindowi:0000000000000000 _Z13glutSetWindowi
     /tmp/cc4J4ZdK.s:1984   .text._Z14glutCreateMenuPFviE:0000000000000000 _Z14glutCreateMenuPFviE
     /tmp/cc4J4ZdK.s:2033   .text._Z15glutDestroyMenui:0000000000000000 _Z15glutDestroyMenui
     /tmp/cc4J4ZdK.s:2082   .text._Z16glutAddMenuEntryPci:0000000000000000 _Z16glutAddMenuEntryPci
     /tmp/cc4J4ZdK.s:2148   .text._Z14glutAddSubMenuPci:0000000000000000 _Z14glutAddSubMenuPci
     /tmp/cc4J4ZdK.s:2208   .text._Z21glutChangeToMenuEntryiPci:0000000000000000 _Z21glutChangeToMenuEntryiPci
     /tmp/cc4J4ZdK.s:2264   .text._Z19glutChangeToSubMenuiPci:0000000000000000 _Z19glutChangeToSubMenuiPci
     /tmp/cc4J4ZdK.s:2314   .text._Z18glutRemoveMenuItemi:0000000000000000 _Z18glutRemoveMenuItemi
     /tmp/cc4J4ZdK.s:2388   .text._Z7glutGetj:0000000000000000 _Z7glutGetj
     /tmp/cc4J4ZdK.s:2677   .text._Z12glutLayerGetj:0000000000000000 _Z12glutLayerGetj
     /tmp/cc4J4ZdK.s:2729   .text._Z13glutDeviceGetj:0000000000000000 _Z13glutDeviceGetj
     /tmp/cc4J4ZdK.s:2774   .text._Z18glutGetProcAddressPKc:0000000000000000 _Z18glutGetProcAddressPKc
     /tmp/cc4J4ZdK.s:2838   .text._Z22glutExtensionSupportedPKc:0000000000000000 _Z22glutExtensionSupportedPKc
     /tmp/cc4J4ZdK.s:2993   .text._Z12glutIdleFuncPFvvE:0000000000000000 _Z12glutIdleFuncPFvvE
     /tmp/cc4J4ZdK.s:3168   .bss._ZL14glut_idle_func:0000000000000000 _ZL14glut_idle_func
     /tmp/cc4J4ZdK.s:3045   .rodata._ZTS14Fl_Glut_Window:0000000000000000 _ZTS14Fl_Glut_Window
     /tmp/cc4J4ZdK.s:3052   .rodata._ZTI14Fl_Glut_Window:0000000000000000 _ZTI14Fl_Glut_Window
     /tmp/cc4J4ZdK.s:3178   .rodata.cst8:0000000000000000 .LC4
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.185.629aca749f254f2bc1fdc00bb73e17c4
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
                           .group:0000000000000000 wm4.ctype.h.43.d895d3ca09b51f800847b104b2ad2e41
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.gl.h.28.80167dfcc6aa1d0fdaa11461360ff2e9
                           .group:0000000000000000 wm4.glext.h.2.33ebf91cb2ac393e00fbf001cfd5adf6
                           .group:0000000000000000 wm4.stddef.h.39.a2ca0b29d01f5da7ea7f879d801b43ca
                           .group:0000000000000000 wm4.glext.h.470.f1f9a32ea973d58e9e9d60b0d331a28b
                           .group:0000000000000000 wm4.wchar.h.20.510818a05484290d697a517509bf4b2d
                           .group:0000000000000000 wm4.stdint.h.35.e53b4d001f0b958bab74645e9a3f6a60
                           .group:0000000000000000 wm4.inttypes.h.32.c4dc77c414e5a88041490e6d2aa1116a
                           .group:0000000000000000 wm4.glext.h.1425.4660c46bd83bf818a1c8102c2fa59820
                           .group:0000000000000000 wm4.gl.h.2066.d218939585eb4fd8b54422df1c78229d
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.types.h.23.6b551a14160ee6e670a07567790a4689
                           .group:0000000000000000 wm4.time.h.53.beb46e650cd406cb917b6b96b45e640a
                           .group:0000000000000000 wm4.types.h.137.b47ba4422427ad6e74c43b7db72dcd74
                           .group:0000000000000000 wm4.types.h.187.fd8c81c4bff8969f5d23c3a34aa715af
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
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.glut.H.86.59b595ea1180d8875deff6fd79838763
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.glx.h.45.1e9a521e041dd3225e989ebf955eca06
                           .group:0000000000000000 wm4.dlfcn.h.20.70e9223255b7b53a5ba856b40ed79b32
                           .group:0000000000000000 wm4.dlfcn.h.24.984956b0eb0dd4fdbcd569f884773ee1
                           .group:0000000000000000 wm4.dlfcn.h.35.17a2f29a976970d03ce2b8cd0ee5815b

UNDEFINED SYMBOLS
_ZN12Fl_Gl_Window12make_currentEv
_ZN2Fl3e_xE
_ZN2Fl3e_yE
_ZN12Fl_Gl_Window6handleEi
_ZN2Fl4e_dyE
_ZN2Fl5focusEP9Fl_Widget
_ZN2Fl8e_keysymE
_ZN2Fl6e_textE
_ZNK12Fl_Menu_Item5popupEiiPKcPKS_PK8Fl_Menu_
glViewport
_ZN12Fl_Gl_WindowD2Ev
_ZdlPv
_Znam
_ZdaPv
_ZN12Fl_Gl_Window12swap_buffersEv
_ZN12Fl_Gl_Window4modeEiPKi
_ZN9Fl_WindowC2EiiPKc
_ZTV12Fl_Gl_Window
_ZN12Fl_Gl_Window4initEv
_ZN9Fl_WindowC2EiiiiPKc
_ZN2Fl3argEiPPcRi
__stack_chk_fail
_ZN2Fl3runEv
_Znwm
_ZN9Fl_Window4showEiPPc
_ZN8Fl_Group3addER9Fl_Widget
_ZN9Fl_Widget6redrawEv
_ZN2Fl1wEv
_ZN2Fl1hEv
_ZN12Fl_Gl_Window6can_doEiPKi
glGetIntegerv
_ZN12Fl_Gl_Window14can_do_overlayEv
__snprintf_chk
dlsym
strchr
strlen
glGetString
strstr
_ZN2Fl11remove_idleEPFvPvES0_
_ZN2Fl8add_idleEPFvPvES0_
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI12Fl_Gl_Window
_ZN12Fl_Gl_Window6resizeEiiii
_ZN12Fl_Gl_Window4showEv
_ZN12Fl_Gl_Window4hideEv
_ZN12Fl_Gl_Window5flushEv
