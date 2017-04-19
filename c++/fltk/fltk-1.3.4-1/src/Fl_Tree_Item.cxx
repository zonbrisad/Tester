   1              		.file	"Fl_Tree_Item.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51,"ax",@progb
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51
  12              	.Ltext_cold0:
  13              		.section	.text._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51
  15              	_ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51:
  16              	.LFB709:
  17              		.file 1 "fltk-1.3.4-1/src/Fl_Tree_Item.cxx"
   1:fltk-1.3.4-1/src/Fl_Tree_Item.cxx **** ...
  18              		.loc 1 912 0
  19              		.cfi_startproc
  20              	.LVL0:
  21 0000 4154     		pushq	%r12
  22              		.cfi_def_cfa_offset 16
  23              		.cfi_offset 12, -16
  24 0002 31C0     		xorl	%eax, %eax
  25 0004 55       		pushq	%rbp
  26              		.cfi_def_cfa_offset 24
  27              		.cfi_offset 6, -24
  28 0005 53       		pushq	%rbx
  29              		.cfi_def_cfa_offset 32
  30              		.cfi_offset 3, -32
  31              		.loc 1 915 0
  32 0006 48833F00 		cmpq	$0, (%rdi)
  33              		.loc 1 912 0
  34 000a 4889FB   		movq	%rdi, %rbx
  35              	.LVL1:
  36 000d 4889F5   		movq	%rsi, %rbp
  37              		.loc 1 915 0
  38 0010 742F     		je	.L2
  39              	.LVL2:
  40              	.LBB972:
  41              	.LBB973:
  42              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  43              		.loc 2 509 0
  44 0012 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  44      000000
  45              	.LVL3:
  46 0019 8B530C   		movl	12(%rbx), %edx
  47 001c 8B7308   		movl	8(%rbx), %esi
  48              	.LVL4:
  49 001f 488B07   		movq	(%rdi), %rax
  50 0022 FF90B001 		call	*432(%rax)
  50      0000
  51              	.LVL5:
  52              	.LBE973:
  53              	.LBE972:
  54              	.LBB974:
  55              	.LBB975:
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
  56              		.loc 2 533 0
  57 0028 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  57      000000
  58              	.LBE975:
  59              	.LBE974:
  60              		.loc 1 917 0
  61 002f 448B630C 		movl	12(%rbx), %r12d
  62              	.LBB977:
  63              	.LBB976:
  64              		.loc 2 533 0
  65 0033 488B07   		movq	(%rdi), %rax
  66 0036 FF90D801 		call	*472(%rax)
  66      0000
  67              	.LVL6:
  68              	.LBE976:
  69              	.LBE977:
  70              		.loc 1 917 0
  71 003c 418D4404 		leal	1(%r12,%rax), %eax
  71      01
  72              	.LVL7:
  73              	.L2:
  74              		.loc 1 926 0
  75 0041 8B5368   		movl	104(%rbx), %edx
  76 0044 85D2     		testl	%edx, %edx
  77 0046 7411     		je	.L3
  78 0048 488B5538 		movq	56(%rbp), %rdx
  79              	.LVL8:
  80 004c 4885D2   		testq	%rdx, %rdx
  81 004f 7408     		je	.L3
  82              	.LVL9:
  83 0051 8B520C   		movl	12(%rdx), %edx
  84 0054 39D0     		cmpl	%edx, %eax
  85 0056 0F4CC2   		cmovl	%edx, %eax
  86              	.LVL10:
  87              	.L3:
  88 0059 488B5358 		movq	88(%rbx), %rdx
  89              	.LVL11:
  90              		.loc 1 928 0
  91 005d 4885D2   		testq	%rdx, %rdx
  92 0060 7407     		je	.L4
  93              	.LVL12:
  94 0062 39420C   		cmpl	%eax, 12(%rdx)
  95 0065 0F4D420C 		cmovge	12(%rdx), %eax
  96              	.LVL13:
  97              	.L4:
  98              		.loc 1 931 0
  99 0069 5B       		popq	%rbx
 100              		.cfi_def_cfa_offset 24
 101              	.LVL14:
 102 006a 5D       		popq	%rbp
 103              		.cfi_def_cfa_offset 16
 104              	.LVL15:
 105 006b 415C     		popq	%r12
 106              		.cfi_def_cfa_offset 8
 107 006d C3       		ret
 108              		.cfi_endproc
 109              	.LFE709:
 111              		.section	.text.unlikely._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51
 112              	.LCOLDE0:
 113              		.section	.text._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51
 114              	.LHOTE0:
 115              		.section	.text.unlikely._ZN12Fl_Tree_Item4nextEv.part.53,"ax",@progbits
 116              		.align 2
 117              	.LCOLDB1:
 118              		.section	.text._ZN12Fl_Tree_Item4nextEv.part.53,"ax",@progbits
 119              	.LHOTB1:
 120              		.align 2
 121              		.p2align 4,,15
 123              	_ZN12Fl_Tree_Item4nextEv.part.53:
 124              	.LFB711:
 125              		.loc 1 1601 0
 126              		.cfi_startproc
 127              	.LVL16:
 128 0000 4C8B4778 		movq	120(%rdi), %r8
 129              	.LVL17:
 130              		.loc 1 1615 0
 131 0004 4D85C0   		testq	%r8, %r8
 132 0007 745A     		je	.L22
 133              	.LVL18:
 134 0009 0F1F8000 		.p2align 4,,10
 134      000000
 135              		.p2align 3
 136              	.L30:
 137 0010 418B7068 		movl	104(%r8), %esi
 138              	.LVL19:
 139              	.LBB978:
 140              	.LBB979:
 141              	.LBB980:
 142              		.loc 1 316 0
 143 0014 85F6     		testl	%esi, %esi
 144 0016 7E3F     		jle	.L16
 145              	.LVL20:
 146 0018 4D8B4860 		movq	96(%r8), %r9
 147              	.LVL21:
 148              		.loc 1 317 0
 149 001c 31C9     		xorl	%ecx, %ecx
 150 001e 493B39   		cmpq	(%r9), %rdi
 151 0021 498D4108 		leaq	8(%r9), %rax
 152 0025 7515     		jne	.L19
 153 0027 EB3D     		jmp	.L27
 154              	.LVL22:
 155 0029 0F1F8000 		.p2align 4,,10
 155      000000
 156              		.p2align 3
 157              	.L20:
 158 0030 4883C008 		addq	$8, %rax
 159              	.LVL23:
 160 0034 483B78F8 		cmpq	-8(%rax), %rdi
 161 0038 7416     		je	.L28
 162 003a 89D1     		movl	%edx, %ecx
 163              	.LVL24:
 164              	.L19:
 165              		.loc 1 316 0
 166 003c 8D5101   		leal	1(%rcx), %edx
 167              	.LVL25:
 168 003f 39F2     		cmpl	%esi, %edx
 169 0041 75ED     		jne	.L20
 170 0043 31C0     		xorl	%eax, %eax
 171              	.LVL26:
 172              	.L21:
 173              	.LBE980:
 174              	.LBE979:
 175              	.LBB982:
 176              	.LBB983:
 177              	.LBB984:
 178              		.file 3 "fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H"
   1:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //
   2:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** // "$Id: Fl_Tree_Item_Array.H 11534 2016-04-05 20:35:29Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //
   4:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** 
   5:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** #ifndef _FL_TREE_ITEM_ARRAY_H
   6:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** #define _FL_TREE_ITEM_ARRAY_H
   7:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** 
   8:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** #include <FL/Fl.H>
   9:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** #include "Fl_Export.H"
  10:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** 
  11:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** class Fl_Tree_Item;		// forward decl must *precede* first doxygen comment block
  12:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** 				// or doxygen will not document our class..
  13:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** 
  14:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //////////////////////////
  15:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** // FL/Fl_Tree_Item_Array.H
  16:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //////////////////////////
  17:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //
  18:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** // Fl_Tree -- This file is part of the Fl_Tree widget for FLTK
  19:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** // Copyright (C) 2009-2010 by Greg Ercolano.
  20:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //
  21:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** // This library is free software. Distribution and use rights are outlined in
  22:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** // the file "COPYING" which should have been included with this file.  If this
  23:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** // file is missing or damaged, see the license at:
  24:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //
  25:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //     http://www.fltk.org/COPYING.php
  26:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //
  27:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** // Please report all bugs and problems on the following page:
  28:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //
  29:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //     http://www.fltk.org/str.php
  30:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** //
  31:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** 
  32:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** ///
  33:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** /// \file
  34:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** /// \brief This file defines a class that manages an array of Fl_Tree_Item pointers.
  35:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** ///
  36:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** 
  37:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** /// \brief Manages an array of Fl_Tree_Item pointers.
  38:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** ///
  39:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** /// Because FLTK 1.x.x. has mandated that templates and STL not be used,
  40:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** /// we use this class to dynamically manage the arrays.
  41:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** ///
  42:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** /// None of the methods do range checking on index values; the caller
  43:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** /// must be sure that index values are within the range 0<index<total()
  44:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** /// (unless otherwise noted).
  45:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** ///
  46:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** 
  47:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** class FL_EXPORT Fl_Tree_Item_Array {
  48:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   Fl_Tree_Item **_items;	// items array
  49:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   int _total;			// #items in array
  50:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   int _size;			// #items *allocated* for array
  51:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   int _chunksize;		// #items to enlarge mem allocation
  52:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** #if FLTK_ABI_VERSION >= 10303
  53:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   enum {			
  54:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     MANAGE_ITEM = 1,		///> manage the Fl_Tree_Item's internals (internal use only)
  55:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   };
  56:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   char _flags;			// flags to control behavior
  57:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** #endif
  58:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   void enlarge(int count);
  59:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** public:
  60:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   Fl_Tree_Item_Array(int new_chunksize = 10);		// CTOR
  61:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   ~Fl_Tree_Item_Array();				// DTOR
  62:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   Fl_Tree_Item_Array(const Fl_Tree_Item_Array *o);	// COPY CTOR
  63:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   /// Return the item and index \p i.
  64:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   Fl_Tree_Item *operator[](int i) {
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     return(_items[i]);
 179              		.loc 3 65 0
 180 0045 498B0401 		movq	(%r9,%rax), %rax
 181              	.LVL27:
 182 0049 C3       		ret
 183              	.LVL28:
 184 004a 660F1F44 		.p2align 4,,10
 184      0000
 185              		.p2align 3
 186              	.L28:
 187 0050 83C102   		addl	$2, %ecx
 188              	.LVL29:
 189              	.L17:
 190              	.LBE984:
 191              	.LBE983:
 192              	.LBE982:
 193              		.loc 1 1617 0
 194 0053 39CE     		cmpl	%ecx, %esi
 195 0055 7F16     		jg	.L29
 196              	.LVL30:
 197              	.L16:
 198              	.LBE978:
 199              		.loc 1 1601 0
 200 0057 4C89C7   		movq	%r8, %rdi
 201              	.LVL31:
 202 005a 4C8B4778 		movq	120(%rdi), %r8
 203              	.LVL32:
 204              		.loc 1 1615 0
 205 005e 4D85C0   		testq	%r8, %r8
 206 0061 75AD     		jne	.L30
 207              	.L22:
 208              		.loc 1 1622 0
 209 0063 31C0     		xorl	%eax, %eax
 210              		.loc 1 1623 0
 211 0065 C3       		ret
 212              	.LVL33:
 213              	.L27:
 214              	.LBB986:
 215              	.LBB985:
 216              	.LBB981:
 217              		.loc 1 317 0
 218 0066 B9010000 		movl	$1, %ecx
 218      00
 219 006b EBE6     		jmp	.L17
 220              	.LVL34:
 221              	.L29:
 222 006d 4863C9   		movslq	%ecx, %rcx
 223 0070 488D04CD 		leaq	0(,%rcx,8), %rax
 223      00000000 
 224 0078 EBCB     		jmp	.L21
 225              	.LBE981:
 226              	.LBE985:
 227              	.LBE986:
 228              		.cfi_endproc
 229              	.LFE711:
 231              		.section	.text.unlikely._ZN12Fl_Tree_Item4nextEv.part.53
 232              	.LCOLDE1:
 233              		.section	.text._ZN12Fl_Tree_Item4nextEv.part.53
 234              	.LHOTE1:
 235              		.section	.text.unlikely._ZNK12Fl_Tree_Item9visible_rEv.part.54,"ax",@progbits
 236              		.align 2
 237              	.LCOLDB2:
 238              		.section	.text._ZNK12Fl_Tree_Item9visible_rEv.part.54,"ax",@progbits
 239              	.LHOTB2:
 240              		.align 2
 241              		.p2align 4,,15
 243              	_ZNK12Fl_Tree_Item9visible_rEv.part.54:
 244              	.LFB712:
 245              		.loc 1 1823 0
 246              		.cfi_startproc
 247              	.LVL35:
 248 0000 488B4778 		movq	120(%rdi), %rax
 249              	.LVL36:
 250              	.LBB987:
 251              		.loc 1 1825 0
 252 0004 4885C0   		testq	%rax, %rax
 253 0007 7516     		jne	.L34
 254 0009 EB25     		jmp	.L36
 255              	.LVL37:
 256 000b 0F1F4400 		.p2align 4,,10
 256      00
 257              		.p2align 3
 258              	.L33:
 259              		.loc 1 1826 0
 260 0010 80781800 		cmpb	$0, 24(%rax)
 261 0014 740F     		je	.L37
 262 0016 488B4078 		movq	120(%rax), %rax
 263              	.LVL38:
 264              		.loc 1 1825 0
 265 001a 4885C0   		testq	%rax, %rax
 266 001d 7411     		je	.L36
 267              	.LVL39:
 268              	.L34:
 269              	.LBB988:
 270              	.LBB989:
 271              	.LBB990:
 272              	.LBB991:
 273              		.file 4 "fltk-1.3.4-1/FL/Fl_Tree_Item.H"
   1:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
   2:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // "$Id: Fl_Tree_Item.H 12034 2016-10-17 12:45:55Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
   4:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
   5:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #ifndef FL_TREE_ITEM_H
   6:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #define FL_TREE_ITEM_H
   7:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
   8:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl.H>
   9:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl_Widget.H>
  10:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl_Image.H>
  11:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/fl_draw.H>
  12:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
  13:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl_Tree_Item_Array.H>
  14:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl_Tree_Prefs.H>
  15:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
  16:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //////////////////////
  17:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // FL/Fl_Tree_Item.H
  18:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //////////////////////
  19:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  20:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // Fl_Tree -- This file is part of the Fl_Tree widget for FLTK
  21:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // Copyright (C) 2009-2010 by Greg Ercolano.
  22:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  23:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // This library is free software. Distribution and use rights are outlined in
  24:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // the file "COPYING" which should have been included with this file.  If this
  25:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // file is missing or damaged, see the license at:
  26:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  27:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //     http://www.fltk.org/COPYING.php
  28:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  29:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // Please report all bugs and problems on the following page:
  30:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  31:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //     http://www.fltk.org/str.php
  32:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  33:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
  34:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  35:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// \file
  36:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// \brief This file contains the definitions for Fl_Tree_Item
  37:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  38:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
  39:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// \class Fl_Tree_Item
  40:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// \brief Tree widget item.
  41:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  42:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// This class is a single tree item, and manages all of the item's attributes.
  43:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// Fl_Tree_Item is used by Fl_Tree, which is comprised of many instances of Fl_Tree_Item.
  44:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  45:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// Fl_Tree_Item is hierarchical; it dynamically manages an Fl_Tree_Item_Array of children
  46:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// that are themselves instances of Fl_Tree_Item. Each item can have zero or more children.
  47:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// When an item has children, close() and open() can be used to hide or show them.
  48:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  49:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// Items have their own attributes; font size, face, color.
  50:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// Items maintain their own hierarchy of children.
  51:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  52:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// When you make changes to items, you'll need to tell the tree to redraw()
  53:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// for the changes to show up.
  54:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  55:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// New 1.3.3 ABI feature:
  56:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// You can define custom items by either adding a custom widget to the item
  57:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// with Fl_Tree_Item::widget(), or override the draw_item_content() method
  58:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// if you want to just redefine how the label is drawn.
  59:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  60:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// The following shows the Fl_Tree_Item's dimensions, useful when overriding
  61:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// the draw_item_content() method:
  62:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  63:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///   \image html  Fl_Tree_Item-dimensions.png "Fl_Tree_Item's internal dimensions." width=6cm
  64:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///   \image latex Fl_Tree_Item-dimensions.png "Fl_Tree_Item's internal dimensions." width=6cm
  65:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  66:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** class Fl_Tree;
  67:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** class FL_EXPORT Fl_Tree_Item {
  68:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
  69:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree                *_tree;		// parent tree
  70:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
  71:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const char             *_label;		// label (memory managed)
  72:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Font                 _labelfont;		// label's font face
  73:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Fontsize             _labelsize;		// label's font size
  74:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color                _labelfgcolor;	// label's fg color
  75:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color                _labelbgcolor;	// label's bg color (0xffffffff is 'transparent')
  76:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
  77:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \enum Fl_Tree_Item_Flags
  78:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   enum Fl_Tree_Item_Flags {
  79:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else
  80:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \enum
  81:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   enum {
  82:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
  83:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     OPEN                = 1<<0,		///> item is open
  84:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     VISIBLE             = 1<<1,		///> item is visible
  85:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     ACTIVE              = 1<<2,		///> item is active
  86:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     SELECTED            = 1<<3		///> item is selected
  87:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   };
  88:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10301
  89:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // NEW
  90:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   unsigned short _flags;		// misc flags
  91:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else /*FLTK_ABI_VERSION*/
  92:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // OLD: this will go away after 1.3.x
  93:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char                    _open;		// item is open?
  94:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char                    _visible;		// item is visible?
  95:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char                    _active;		// item activated?
  96:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char                    _selected;		// item selected?
  97:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif /*FLTK_ABI_VERSION*/
  98:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int                     _xywh[4];		// xywh of this widget (if visible)
  99:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int                     _collapse_xywh[4];	// xywh of collapse icon (if visible)
 100:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int                     _label_xywh[4];	// xywh of label
 101:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Widget              *_widget;		// item's label widget (optional)
 102:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Image               *_usericon;		// item's user-specific icon (optional)
 103:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10304
 104:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Image               *_userdeicon;		// deactivated usericon
 105:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 106:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item_Array      _children;		// array of child items
 107:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item           *_parent;		// parent item (=0 if root)
 108:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void                   *_userdata;    	// user data that can be associated with an item
 109:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10301
 110:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item           *_prev_sibling;	// previous sibling (same level)
 111:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item           *_next_sibling;	// next sibling (same level)
 112:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif /*FLTK_ABI_VERSION*/
 113:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // Protected methods
 114:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** protected:
 115:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void _Init(const Fl_Tree_Prefs &prefs, Fl_Tree *tree);
 116:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void show_widgets();
 117:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void hide_widgets();
 118:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void draw_vertical_connector(int x, int y1, int y2, const Fl_Tree_Prefs &prefs);
 119:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void draw_horizontal_connector(int x1, int x2, int y, const Fl_Tree_Prefs &prefs);
 120:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void recalc_tree();
 121:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int calc_item_height(const Fl_Tree_Prefs &prefs) const;
 122:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 123:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color drawfgcolor() const;
 124:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color drawbgcolor() const;
 125:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 126:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
 127:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** public:
 128:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item(const Fl_Tree_Prefs &prefs);	// CTOR -- backwards compatible
 129:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 130:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item(Fl_Tree *tree);			// CTOR -- ABI 1.3.3+
 131:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   virtual ~Fl_Tree_Item();			// DTOR -- ABI 1.3.3+
 132:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else
 133:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ~Fl_Tree_Item();				// DTOR -- backwards compatible
 134:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 135:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item(const Fl_Tree_Item *o);		// COPY CTOR
 136:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's x position relative to the window
 137:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int x() const { return(_xywh[0]); }
 138:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's y position relative to the window
 139:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int y() const { return(_xywh[1]); }
 140:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The entire item's width to right edge of Fl_Tree's inner width
 141:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// within scrollbars.
 142:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int w() const { return(_xywh[2]); }
 143:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's height
 144:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int h() const { return(_xywh[3]); }
 145:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's label x position relative to the window
 146:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3
 147:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int label_x() const { return(_label_xywh[0]); }
 148:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's label y position relative to the window
 149:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3
 150:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int label_y() const { return(_label_xywh[1]); }
 151:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's maximum label width to right edge of Fl_Tree's inner width
 152:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// within scrollbars.
 153:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3
 154:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int label_w() const { return(_label_xywh[2]); }
 155:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's label height
 156:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3
 157:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int label_h() const { return(_label_xywh[3]); }
 158:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 159:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   virtual int draw_item_content(int render);
 160:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void draw(int X, int &Y, int W, Fl_Tree_Item *itemfocus, 
 161:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 	    int &tree_item_xmax, int lastchild=1, int render=1);
 162:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else
 163:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void draw(int X, int &Y, int W, Fl_Widget *tree, 
 164:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****             Fl_Tree_Item *itemfocus, const Fl_Tree_Prefs &prefs, int lastchild=1);
 165:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 166:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void show_self(const char *indent = "") const;
 167:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void label(const char *val);
 168:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const char *label() const;
 169:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
 170:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set a user-data value for the item.
 171:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   inline void user_data( void* data ) { _userdata = data; }
 172:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
 173:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Retrieve the user-data value that has been assigned to the item.
 174:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   inline void* user_data() const { return _userdata; }
 175:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   
 176:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label font face.
 177:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelfont(Fl_Font val) {
 178:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _labelfont = val; 
 179:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     recalc_tree();		// may change tree geometry
 180:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 181:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Get item's label font face.
 182:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Font labelfont() const {
 183:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_labelfont);
 184:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 185:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label font size.
 186:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelsize(Fl_Fontsize val) {
 187:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _labelsize = val; 
 188:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     recalc_tree();		// may change tree geometry
 189:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 190:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Get item's label font size.
 191:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Fontsize labelsize() const {
 192:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_labelsize);
 193:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 194:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label foreground text color.
 195:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelfgcolor(Fl_Color val) {
 196:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _labelfgcolor = val; 
 197:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 198:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return item's label foreground text color.
 199:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color labelfgcolor() const {
 200:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_labelfgcolor); 
 201:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 202:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label text color. Alias for labelfgcolor(Fl_Color)).
 203:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelcolor(Fl_Color val) {
 204:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****      labelfgcolor(val);
 205:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 206:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return item's label text color. Alias for labelfgcolor() const).
 207:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color labelcolor() const {
 208:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return labelfgcolor(); 
 209:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 210:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label background color.
 211:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// A special case is made for color 0xffffffff which uses the parent tree's bg color.
 212:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelbgcolor(Fl_Color val) {
 213:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _labelbgcolor = val; 
 214:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 215:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return item's label background text color.
 216:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// If the color is 0xffffffff, the default behavior is the parent tree's
 217:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// bg color will be used. (An overloaded draw_item_content() can override
 218:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// this behavior.)
 219:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color labelbgcolor() const {
 220:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_labelbgcolor); 
 221:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 222:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Assign an FLTK widget to this item.
 223:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void widget(Fl_Widget *val) {
 224:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _widget = val; 
 225:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     recalc_tree();		// may change tree geometry
 226:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 227:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return FLTK widget assigned to this item.
 228:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Widget *widget() const {
 229:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_widget); 
 230:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 231:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the number of children this item has.
 232:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int children() const {
 233:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_children.total()); 
 234:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 235:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the child item for the given 'index'.
 236:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *child(int index) {
 237:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_children[index]); 
 238:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 239:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the const child item for the given 'index'.
 240:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *child(int t) const;
 241:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if this item has children.
 242:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int has_children() const {
 243:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(children()); 
 244:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 245:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int find_child(const char *name);
 246:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int find_child(Fl_Tree_Item *item);
 247:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int remove_child(Fl_Tree_Item *item);
 248:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int remove_child(const char *new_label);
 249:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void clear_children();
 250:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void swap_children(int ax, int bx);
 251:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int swap_children(Fl_Tree_Item *a, Fl_Tree_Item *b);
 252:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *find_child_item(const char *name) const;
 253:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****         Fl_Tree_Item *find_child_item(const char *name);
 254:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *find_child_item(char **arr) const;
 255:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****         Fl_Tree_Item *find_child_item(char **arr);
 256:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *find_item(char **arr) const;
 257:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****         Fl_Tree_Item *find_item(char **arr);
 258:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   //////////////////
 259:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // Adding items
 260:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   //////////////////
 261:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *add(const Fl_Tree_Prefs &prefs,
 262:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    const char *new_label,
 263:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    Fl_Tree_Item *newitem);
 264:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *add(const Fl_Tree_Prefs &prefs,
 265:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    const char *new_label);
 266:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *add(const Fl_Tree_Prefs &prefs,
 267:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    char **arr,
 268:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 		    Fl_Tree_Item *newitem);
 269:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *add(const Fl_Tree_Prefs &prefs,
 270:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    char **arr);
 271:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 272:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *replace(Fl_Tree_Item *new_item);
 273:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *replace_child(Fl_Tree_Item *olditem, Fl_Tree_Item *newitem);
 274:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 275:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *insert(const Fl_Tree_Prefs &prefs, const char *new_label, int pos=0);
 276:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *insert_above(const Fl_Tree_Prefs &prefs, const char *new_label);
 277:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item* deparent(int index);
 278:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int reparent(Fl_Tree_Item *newchild, int index);
 279:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move(int to, int from);
 280:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move(Fl_Tree_Item *item, int op=0, int pos=0);
 281:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move_above(Fl_Tree_Item *item);
 282:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move_below(Fl_Tree_Item *item);
 283:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move_into(Fl_Tree_Item *item, int pos=0);
 284:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int depth() const;
 285:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *prev();
 286:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *next();
 287:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *next_sibling();
 288:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *prev_sibling();
 289:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void update_prev_next(int index);
 290:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *next_displayed(Fl_Tree_Prefs &prefs);	// deprecated
 291:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *prev_displayed(Fl_Tree_Prefs &prefs);	// deprecated
 292:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *next_visible(Fl_Tree_Prefs &prefs);
 293:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *prev_visible(Fl_Tree_Prefs &prefs);
 294:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   
 295:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the parent for this item. Returns NULL if we are the root.
 296:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *parent() {
 297:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_parent);
 298:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 299:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the const parent for this item. Returns NULL if we are the root.
 300:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *parent() const {
 301:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_parent);
 302:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 303:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set the parent for this item.
 304:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Should only be used by Fl_Tree's internals.
 305:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 306:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void parent(Fl_Tree_Item *val) {
 307:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _parent = val;
 308:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 309:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 310:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Prefs& prefs() const;
 311:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the tree for this item.
 312:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3 (ABI feature)
 313:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree *tree() const {
 314:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_tree);
 315:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 316:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 317:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10304
 318:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the tree for this item.
 319:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.4 (ABI feature)
 320:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree *tree() {
 321:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_tree);
 322:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 323:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 324:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   //////////////////
 325:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // State
 326:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   //////////////////
 327:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void open();
 328:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void close();
 329:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if the item is 'open'.
 330:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int is_open() const {
 331:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(is_flag(OPEN));
 332:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 333:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if the item is 'closed'.
 334:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int is_close() const {
 335:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(is_flag(OPEN)?0:1);
 336:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 337:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Toggle the item's open/closed state.
 338:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void open_toggle() {
 339:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     is_open()?close():open();	// handles calling recalc_tree()
 340:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 341:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Change the item's selection state to the optionally specified 'val'.
 342:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// If 'val' is not specified, the item will be selected.
 343:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 344:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void select(int val=1) {
 345:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     set_flag(SELECTED, val);
 346:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 347:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Toggle the item's selection state.
 348:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void select_toggle() {
 349:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     if ( is_selected() ) {
 350:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       deselect();	// deselect if selected
 351:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     } else {
 352:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       select();		// select if deselected
 353:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     }
 354:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 355:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Select item and all its children.
 356:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///     Returns count of how many items were in the 'deselected' state,
 357:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///     ie. how many items were "changed".
 358:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 359:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int select_all() {
 360:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     int count = 0;
 361:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     if ( ! is_selected() ) {
 362:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       select();
 363:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       ++count;
 364:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     }
 365:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     for ( int t=0; t<children(); t++ ) {
 366:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       count += child(t)->select_all();
 367:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     }
 368:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(count);
 369:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 370:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Disable the item's selection state.
 371:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void deselect() {
 372:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     set_flag(SELECTED, 0);
 373:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 374:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Deselect item and all its children.
 375:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///     Returns count of how many items were in the 'selected' state,
 376:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///     ie. how many items were "changed".
 377:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 378:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int deselect_all() {
 379:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     int count = 0;
 380:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     if ( is_selected() ) {
 381:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       deselect();
 382:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       ++count;
 383:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     }
 384:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     for ( int t=0; t<children(); t++ ) {
 385:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       count += child(t)->deselect_all();
 386:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     }
 387:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(count);
 388:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 389:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if the item is selected.
 390:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char is_selected() const {
 391:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(is_flag(SELECTED));
 392:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 393:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Change the item's activation state to the optionally specified 'val'.
 394:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 395:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// When deactivated, the item will be 'grayed out'; the callback() 
 396:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// won't be invoked if the user clicks on the label. If a widget()
 397:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// is associated with the item, its activation state will be changed as well.
 398:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 399:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// If 'val' is not specified, the item will be activated.
 400:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 401:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void activate(int val=1) {
 402:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     set_flag(ACTIVE,val);
 403:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     if ( _widget && val != (int)_widget->active() ) {
 404:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       if ( val ) {
 405:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 	_widget->activate();
 406:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       } else {
 407:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 	_widget->deactivate();
 408:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       }
 409:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       _widget->redraw();
 410:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     }
 411:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 412:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Deactivate the item; the callback() won't be invoked when clicked.
 413:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Same as activate(0)
 414:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 415:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void deactivate() {
 416:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     activate(0);
 417:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 418:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if the item is activated.
 419:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char is_activated() const {
 420:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(is_flag(ACTIVE));
 421:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 422:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if the item is activated. Alias for is_activated().
 423:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char is_active() const {
 424:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(is_activated());
 425:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 426:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if the item is visible. Alias for is_visible().
 427:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int visible() const {
 428:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(is_visible());
 429:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 430:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if the item is visible.
 431:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int is_visible() const {
 432:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(is_flag(VISIBLE));
 433:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 434:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int visible_r() const;
 435:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
 436:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set the item's user icon to an Fl_Image. Use '0' to disable.
 437:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// No internal copy is made, caller must manage icon's memory.
 438:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 439:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Note, if you expect your items to be deactivated(),
 440:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// use userdeicon(Fl_Image*) to set up a 'grayed out' version of your icon
 441:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// to be used for display.
 442:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 443:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \see userdeicon(Fl_Image*)
 444:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 445:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void usericon(Fl_Image *val) {
 446:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _usericon = val;
 447:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     recalc_tree();		// may change tree geometry
 448:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 449:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Get the item's user icon as an Fl_Image. Returns '0' if disabled.
 450:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Image *usericon() const {
 451:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_usericon);
 452:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 453:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set the usericon to draw when the item is deactivated. Use '0' to disable.
 454:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// No internal copy is made; caller must manage icon's memory.
 455:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 456:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// To create a typical 'grayed out' version of your usericon image,
 457:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// you can do the following:
 458:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 459:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \code
 460:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///      // Create tree + usericon for items
 461:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///      Fl_Tree *tree = new Fl_Tree(..);
 462:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///      Fl_Image *usr_icon = new Fl_Pixmap(..); // your usericon
 463:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///      Fl_Image *de_icon  = usr_icon->copy();  // make a copy, and..
 464:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///      de_icon->inactive();                    // make it 'grayed out'
 465:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///      ...
 466:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///      for ( .. ) {                 // item loop..
 467:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///        item = tree->add("...");   // create new item
 468:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///        item->usericon(usr_icon);  // assign usericon to items
 469:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///        item->userdeicon(de_icon); // assign userdeicon to items
 470:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///        ..
 471:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///      }
 472:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \endcode
 473:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 474:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// In the above example, the app should 'delete' the two icons
 475:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// when they're no longer needed (e.g. after the tree is destroyed)
 476:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 477:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.4
 478:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 479:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10304
 480:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void userdeicon(Fl_Image* val) {
 481:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _userdeicon = val;
 482:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 483:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the deactivated version of the user icon, if any.
 484:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Returns 0 if none.
 485:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Image* userdeicon() const {
 486:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return _userdeicon;
 487:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 488:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 489:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   //////////////////
 490:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // Events
 491:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   //////////////////
 492:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 493:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item* find_clicked(const Fl_Tree_Prefs &prefs, int yonly=0) const;
 494:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item* find_clicked(const Fl_Tree_Prefs &prefs, int yonly=0);
 495:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else
 496:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item* find_clicked(const Fl_Tree_Prefs &prefs) const;
 497:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item* find_clicked(const Fl_Tree_Prefs &prefs);
 498:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 499:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int event_on_collapse_icon(const Fl_Tree_Prefs &prefs) const;
 500:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int event_on_label(const Fl_Tree_Prefs &prefs) const;
 501:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Is this item the root of the tree?
 502:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int is_root() const {
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_parent==0?1:0);
 504:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 505:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
 506:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // Protected methods
 507:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // TODO: move these to top 'protected:' section
 508:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** protected:
 509:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10301
 510:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set a flag to an on or off value. val is 0 or 1.
 511:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   inline void set_flag(unsigned short flag,int val) {
 512:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     if ( flag==OPEN || flag==VISIBLE ) {
 513:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       recalc_tree();		// may change tree geometry
 514:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     }
 515:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     if ( val ) _flags |= flag; else _flags &= ~flag;
 516:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 517:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if flag set. Returns 0 or 1.
 518:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   inline int is_flag(unsigned short val) const {
 519:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_flags & val ? 1 : 0);
 520:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 521:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else /*FLTK_ABI_VERSION*/
 522:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set a flag to an on or off value. val is 0 or 1.
 523:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void set_flag(unsigned short flag,int val) {
 524:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     switch (flag) {
 525:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case     OPEN: _open     = val; break;
 526:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: _visible  = val; break;
 527:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case   ACTIVE: _active   = val; break;
 528:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case SELECTED: _selected = val; break;
 529:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     }
 530:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 531:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if flag set. Returns 0 or 1.
 532:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int is_flag(unsigned short flag) const {
 533:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     switch (flag) {
 534:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case     OPEN: return(_open ? 1 : 0);
 535:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: return(_visible ? 1 : 0);
 274              		.loc 4 535 0
 275 001f 80781900 		cmpb	$0, 25(%rax)
 276 0023 75EB     		jne	.L33
 277              	.LVL40:
 278              	.L37:
 279              	.LBE991:
 280              	.LBE990:
 281              	.LBE989:
 282              	.LBE988:
 283              		.loc 1 1826 0
 284 0025 31C0     		xorl	%eax, %eax
 285              	.LVL41:
 286 0027 C3       		ret
 287              	.LVL42:
 288 0028 0F1F8400 		.p2align 4,,10
 288      00000000 
 289              		.p2align 3
 290              	.L36:
 291              	.LBE987:
 292              		.loc 1 1827 0
 293 0030 B8010000 		movl	$1, %eax
 293      00
 294              	.LVL43:
 295 0035 C3       		ret
 296              		.cfi_endproc
 297              	.LFE712:
 299              		.section	.text.unlikely._ZNK12Fl_Tree_Item9visible_rEv.part.54
 300              	.LCOLDE2:
 301              		.section	.text._ZNK12Fl_Tree_Item9visible_rEv.part.54
 302              	.LHOTE2:
 303              		.section	.text.unlikely._ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs,"ax",@progbits
 304              		.align 2
 305              	.LCOLDB3:
 306              		.section	.text._ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs,"ax",@progbits
 307              	.LHOTB3:
 308              		.align 2
 309              		.p2align 4,,15
 310              		.globl	_ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs
 312              	_ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs:
 313              	.LFB594:
 314              		.loc 1 43 0
 315              		.cfi_startproc
 316              	.LVL44:
 317 0000 55       		pushq	%rbp
 318              		.cfi_def_cfa_offset 16
 319              		.cfi_offset 6, -16
 320 0001 53       		pushq	%rbx
 321              		.cfi_def_cfa_offset 24
 322              		.cfi_offset 3, -24
 323 0002 4889FB   		movq	%rdi, %rbx
 324              	.LBB992:
 325 0005 488D7F60 		leaq	96(%rdi), %rdi
 326              	.LVL45:
 327              	.LBE992:
 328 0009 4889F5   		movq	%rsi, %rbp
 329              	.LBB995:
 330 000c BE0A0000 		movl	$10, %esi
 330      00
 331              	.LVL46:
 332              	.LBE995:
 333 0011 4883EC08 		subq	$8, %rsp
 334              		.cfi_def_cfa_offset 32
 335              	.LBB996:
 336              		.loc 1 43 0
 337 0015 E8000000 		call	_ZN18Fl_Tree_Item_ArrayC1Ei
 337      00
 338              	.LVL47:
 339              	.LBB993:
 340              	.LBB994:
 341              		.loc 1 54 0
 342 001a 48C70300 		movq	$0, (%rbx)
 342      000000
 343 0021 8B4500   		movl	0(%rbp), %eax
 344              	.LVL48:
 345              		.loc 1 55 0
 346 0024 894308   		movl	%eax, 8(%rbx)
 347 0027 8B4504   		movl	4(%rbp), %eax
 348              	.LVL49:
 349              		.loc 1 56 0
 350 002a 89430C   		movl	%eax, 12(%rbx)
 351 002d 8B4524   		movl	36(%rbp), %eax
 352              	.LVL50:
 353              		.loc 1 57 0
 354 0030 894310   		movl	%eax, 16(%rbx)
 355              	.LVL51:
 356 0033 8B4528   		movl	40(%rbp), %eax
 357              	.LVL52:
 358              		.loc 1 59 0
 359 0036 48C74350 		movq	$0, 80(%rbx)
 359      00000000 
 360              		.loc 1 63 0
 361 003e C6431801 		movb	$1, 24(%rbx)
 362              		.loc 1 64 0
 363 0042 C6431901 		movb	$1, 25(%rbx)
 364              		.loc 1 65 0
 365 0046 C6431A01 		movb	$1, 26(%rbx)
 366              		.loc 1 58 0
 367 004a 894314   		movl	%eax, 20(%rbx)
 368              		.loc 1 66 0
 369 004d C6431B00 		movb	$0, 27(%rbx)
 370              		.loc 1 68 0
 371 0051 C7431C00 		movl	$0, 28(%rbx)
 371      000000
 372              		.loc 1 69 0
 373 0058 C7432000 		movl	$0, 32(%rbx)
 373      000000
 374              		.loc 1 70 0
 375 005f C7432400 		movl	$0, 36(%rbx)
 375      000000
 376              		.loc 1 71 0
 377 0066 C7432800 		movl	$0, 40(%rbx)
 377      000000
 378              		.loc 1 72 0
 379 006d C7432C00 		movl	$0, 44(%rbx)
 379      000000
 380              		.loc 1 73 0
 381 0074 C7433000 		movl	$0, 48(%rbx)
 381      000000
 382              		.loc 1 74 0
 383 007b C7433400 		movl	$0, 52(%rbx)
 383      000000
 384              		.loc 1 75 0
 385 0082 C7433800 		movl	$0, 56(%rbx)
 385      000000
 386              		.loc 1 76 0
 387 0089 C7433C00 		movl	$0, 60(%rbx)
 387      000000
 388              		.loc 1 77 0
 389 0090 C7434000 		movl	$0, 64(%rbx)
 389      000000
 390              		.loc 1 78 0
 391 0097 C7434400 		movl	$0, 68(%rbx)
 391      000000
 392              		.loc 1 79 0
 393 009e C7434800 		movl	$0, 72(%rbx)
 393      000000
 394              		.loc 1 80 0
 395 00a5 48C74358 		movq	$0, 88(%rbx)
 395      00000000 
 396              		.loc 1 84 0
 397 00ad 48C78380 		movq	$0, 128(%rbx)
 397      00000000 
 397      000000
 398              		.loc 1 85 0
 399 00b8 48C74378 		movq	$0, 120(%rbx)
 399      00000000 
 400              	.LVL53:
 401              	.LBE994:
 402              	.LBE993:
 403              	.LBE996:
 404              		.loc 1 45 0
 405 00c0 4883C408 		addq	$8, %rsp
 406              		.cfi_def_cfa_offset 24
 407 00c4 5B       		popq	%rbx
 408              		.cfi_def_cfa_offset 16
 409              	.LVL54:
 410 00c5 5D       		popq	%rbp
 411              		.cfi_def_cfa_offset 8
 412              	.LVL55:
 413 00c6 C3       		ret
 414              		.cfi_endproc
 415              	.LFE594:
 417              		.section	.text.unlikely._ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs
 418              	.LCOLDE3:
 419              		.section	.text._ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs
 420              	.LHOTE3:
 421              		.globl	_ZN12Fl_Tree_ItemC1ERK13Fl_Tree_Prefs
 422              		.set	_ZN12Fl_Tree_ItemC1ERK13Fl_Tree_Prefs,_ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs
 423              		.section	.text.unlikely._ZN12Fl_Tree_Item5_InitERK13Fl_Tree_PrefsP7Fl_Tree,"ax",@progbits
 424              		.align 2
 425              	.LCOLDB4:
 426              		.section	.text._ZN12Fl_Tree_Item5_InitERK13Fl_Tree_PrefsP7Fl_Tree,"ax",@progbits
 427              	.LHOTB4:
 428              		.align 2
 429              		.p2align 4,,15
 430              		.globl	_ZN12Fl_Tree_Item5_InitERK13Fl_Tree_PrefsP7Fl_Tree
 432              	_ZN12Fl_Tree_Item5_InitERK13Fl_Tree_PrefsP7Fl_Tree:
 433              	.LFB596:
 434              		.loc 1 50 0
 435              		.cfi_startproc
 436              	.LVL56:
 437              		.loc 1 54 0
 438 0000 48C70700 		movq	$0, (%rdi)
 438      000000
 439 0007 8B06     		movl	(%rsi), %eax
 440              	.LVL57:
 441              		.loc 1 55 0
 442 0009 894708   		movl	%eax, 8(%rdi)
 443 000c 8B4604   		movl	4(%rsi), %eax
 444              	.LVL58:
 445              		.loc 1 56 0
 446 000f 89470C   		movl	%eax, 12(%rdi)
 447 0012 8B4624   		movl	36(%rsi), %eax
 448              	.LVL59:
 449              		.loc 1 57 0
 450 0015 894710   		movl	%eax, 16(%rdi)
 451              	.LVL60:
 452 0018 8B4628   		movl	40(%rsi), %eax
 453              	.LVL61:
 454              		.loc 1 59 0
 455 001b 48C74750 		movq	$0, 80(%rdi)
 455      00000000 
 456              		.loc 1 63 0
 457 0023 C6471801 		movb	$1, 24(%rdi)
 458              		.loc 1 64 0
 459 0027 C6471901 		movb	$1, 25(%rdi)
 460              		.loc 1 65 0
 461 002b C6471A01 		movb	$1, 26(%rdi)
 462              		.loc 1 58 0
 463 002f 894714   		movl	%eax, 20(%rdi)
 464              		.loc 1 66 0
 465 0032 C6471B00 		movb	$0, 27(%rdi)
 466              		.loc 1 68 0
 467 0036 C7471C00 		movl	$0, 28(%rdi)
 467      000000
 468              		.loc 1 69 0
 469 003d C7472000 		movl	$0, 32(%rdi)
 469      000000
 470              		.loc 1 70 0
 471 0044 C7472400 		movl	$0, 36(%rdi)
 471      000000
 472              		.loc 1 71 0
 473 004b C7472800 		movl	$0, 40(%rdi)
 473      000000
 474              		.loc 1 72 0
 475 0052 C7472C00 		movl	$0, 44(%rdi)
 475      000000
 476              		.loc 1 73 0
 477 0059 C7473000 		movl	$0, 48(%rdi)
 477      000000
 478              		.loc 1 74 0
 479 0060 C7473400 		movl	$0, 52(%rdi)
 479      000000
 480              		.loc 1 75 0
 481 0067 C7473800 		movl	$0, 56(%rdi)
 481      000000
 482              		.loc 1 76 0
 483 006e C7473C00 		movl	$0, 60(%rdi)
 483      000000
 484              		.loc 1 77 0
 485 0075 C7474000 		movl	$0, 64(%rdi)
 485      000000
 486              		.loc 1 78 0
 487 007c C7474400 		movl	$0, 68(%rdi)
 487      000000
 488              		.loc 1 79 0
 489 0083 C7474800 		movl	$0, 72(%rdi)
 489      000000
 490              		.loc 1 80 0
 491 008a 48C74758 		movq	$0, 88(%rdi)
 491      00000000 
 492              		.loc 1 84 0
 493 0092 48C78780 		movq	$0, 128(%rdi)
 493      00000000 
 493      000000
 494              		.loc 1 85 0
 495 009d 48C74778 		movq	$0, 120(%rdi)
 495      00000000 
 496 00a5 C3       		ret
 497              		.cfi_endproc
 498              	.LFE596:
 500              		.section	.text.unlikely._ZN12Fl_Tree_Item5_InitERK13Fl_Tree_PrefsP7Fl_Tree
 501              	.LCOLDE4:
 502              		.section	.text._ZN12Fl_Tree_Item5_InitERK13Fl_Tree_PrefsP7Fl_Tree
 503              	.LHOTE4:
 504              		.section	.text.unlikely._ZN12Fl_Tree_ItemD2Ev,"ax",@progbits
 505              		.align 2
 506              	.LCOLDB5:
 507              		.section	.text._ZN12Fl_Tree_ItemD2Ev,"ax",@progbits
 508              	.LHOTB5:
 509              		.align 2
 510              		.p2align 4,,15
 511              		.globl	_ZN12Fl_Tree_ItemD2Ev
 513              	_ZN12Fl_Tree_ItemD2Ev:
 514              	.LFB598:
 515              		.loc 1 110 0
 516              		.cfi_startproc
 517              	.LVL62:
 518 0000 53       		pushq	%rbx
 519              		.cfi_def_cfa_offset 16
 520              		.cfi_offset 3, -16
 521              		.loc 1 110 0
 522 0001 4889FB   		movq	%rdi, %rbx
 523              	.LBB997:
 524              		.loc 1 111 0
 525 0004 488B3F   		movq	(%rdi), %rdi
 526              	.LVL63:
 527 0007 4885FF   		testq	%rdi, %rdi
 528 000a 740C     		je	.L45
 529              		.loc 1 112 0
 530 000c E8000000 		call	free
 530      00
 531              	.LVL64:
 532              		.loc 1 113 0
 533 0011 48C70300 		movq	$0, (%rbx)
 533      000000
 534              	.L45:
 535              		.loc 1 115 0
 536 0018 48C74350 		movq	$0, 80(%rbx)
 536      00000000 
 537              		.loc 1 116 0
 538 0020 48C74358 		movq	$0, 88(%rbx)
 538      00000000 
 539              		.loc 1 110 0
 540 0028 488D7B60 		leaq	96(%rbx), %rdi
 541              	.LBE997:
 542              		.loc 1 126 0
 543 002c 5B       		popq	%rbx
 544              		.cfi_def_cfa_offset 8
 545              	.LVL65:
 546              	.LBB998:
 547              		.loc 1 110 0
 548 002d E9000000 		jmp	_ZN18Fl_Tree_Item_ArrayD1Ev
 548      00
 549              	.LVL66:
 550              	.LBE998:
 551              		.cfi_endproc
 552              	.LFE598:
 554              		.section	.text.unlikely._ZN12Fl_Tree_ItemD2Ev
 555              	.LCOLDE5:
 556              		.section	.text._ZN12Fl_Tree_ItemD2Ev
 557              	.LHOTE5:
 558              		.globl	_ZN12Fl_Tree_ItemD1Ev
 559              		.set	_ZN12Fl_Tree_ItemD1Ev,_ZN12Fl_Tree_ItemD2Ev
 560              		.section	.text.unlikely._ZN12Fl_Tree_ItemC2EPKS_,"ax",@progbits
 561              		.align 2
 562              	.LCOLDB6:
 563              		.section	.text._ZN12Fl_Tree_ItemC2EPKS_,"ax",@progbits
 564              	.LHOTB6:
 565              		.align 2
 566              		.p2align 4,,15
 567              		.globl	_ZN12Fl_Tree_ItemC2EPKS_
 569              	_ZN12Fl_Tree_ItemC2EPKS_:
 570              	.LFB601:
 571              		.loc 1 129 0
 572              		.cfi_startproc
 573              	.LVL67:
 574 0000 55       		pushq	%rbp
 575              		.cfi_def_cfa_offset 16
 576              		.cfi_offset 6, -16
 577 0001 53       		pushq	%rbx
 578              		.cfi_def_cfa_offset 24
 579              		.cfi_offset 3, -24
 580 0002 4889F5   		movq	%rsi, %rbp
 581 0005 4889FB   		movq	%rdi, %rbx
 582              	.LBB999:
 583 0008 BE0A0000 		movl	$10, %esi
 583      00
 584              	.LVL68:
 585 000d 4883C760 		addq	$96, %rdi
 586              	.LVL69:
 587              	.LBE999:
 588 0011 4883EC08 		subq	$8, %rsp
 589              		.cfi_def_cfa_offset 32
 590              	.LBB1002:
 591              		.loc 1 129 0
 592 0015 E8000000 		call	_ZN18Fl_Tree_Item_ArrayC1Ei
 592      00
 593              	.LVL70:
 594              	.LBB1000:
 595              	.LBB1001:
 596              		.loc 1 204 0
 597 001a 488B4500 		movq	0(%rbp), %rax
 598              	.LVL71:
 599              	.LBE1001:
 600              	.LBE1000:
 601              		.loc 1 133 0
 602 001e 4885C0   		testq	%rax, %rax
 603 0021 7408     		je	.L51
 604 0023 4889C7   		movq	%rax, %rdi
 605 0026 E8000000 		call	strdup
 605      00
 606              	.LVL72:
 607              	.L51:
 608              		.loc 1 133 0 is_stmt 0 discriminator 4
 609 002b 488903   		movq	%rax, (%rbx)
 610 002e 8B4508   		movl	8(%rbp), %eax
 611              	.LVL73:
 612              		.loc 1 134 0 is_stmt 1 discriminator 4
 613 0031 894308   		movl	%eax, 8(%rbx)
 614 0034 8B450C   		movl	12(%rbp), %eax
 615              	.LVL74:
 616              		.loc 1 135 0 discriminator 4
 617 0037 89430C   		movl	%eax, 12(%rbx)
 618 003a 8B4510   		movl	16(%rbp), %eax
 619              	.LVL75:
 620              		.loc 1 136 0 discriminator 4
 621 003d 894310   		movl	%eax, 16(%rbx)
 622 0040 8B4514   		movl	20(%rbp), %eax
 623              	.LVL76:
 624              		.loc 1 137 0 discriminator 4
 625 0043 894314   		movl	%eax, 20(%rbx)
 626 0046 488B4550 		movq	80(%rbp), %rax
 627              	.LVL77:
 628              		.loc 1 138 0 discriminator 4
 629 004a 48894350 		movq	%rax, 80(%rbx)
 630              		.loc 1 142 0 discriminator 4
 631 004e 0FB64518 		movzbl	24(%rbp), %eax
 632 0052 884318   		movb	%al, 24(%rbx)
 633              		.loc 1 143 0 discriminator 4
 634 0055 0FB64519 		movzbl	25(%rbp), %eax
 635 0059 884319   		movb	%al, 25(%rbx)
 636              		.loc 1 144 0 discriminator 4
 637 005c 0FB6451A 		movzbl	26(%rbp), %eax
 638 0060 88431A   		movb	%al, 26(%rbx)
 639              		.loc 1 145 0 discriminator 4
 640 0063 0FB6451B 		movzbl	27(%rbp), %eax
 641 0067 88431B   		movb	%al, 27(%rbx)
 642              		.loc 1 147 0 discriminator 4
 643 006a 8B451C   		movl	28(%rbp), %eax
 644 006d 89431C   		movl	%eax, 28(%rbx)
 645              		.loc 1 148 0 discriminator 4
 646 0070 8B4520   		movl	32(%rbp), %eax
 647 0073 894320   		movl	%eax, 32(%rbx)
 648              		.loc 1 149 0 discriminator 4
 649 0076 8B4524   		movl	36(%rbp), %eax
 650 0079 894324   		movl	%eax, 36(%rbx)
 651              		.loc 1 150 0 discriminator 4
 652 007c 8B4528   		movl	40(%rbp), %eax
 653 007f 894328   		movl	%eax, 40(%rbx)
 654              		.loc 1 151 0 discriminator 4
 655 0082 8B452C   		movl	44(%rbp), %eax
 656 0085 89432C   		movl	%eax, 44(%rbx)
 657              		.loc 1 152 0 discriminator 4
 658 0088 8B4530   		movl	48(%rbp), %eax
 659 008b 894330   		movl	%eax, 48(%rbx)
 660              		.loc 1 153 0 discriminator 4
 661 008e 8B4534   		movl	52(%rbp), %eax
 662 0091 894334   		movl	%eax, 52(%rbx)
 663              		.loc 1 154 0 discriminator 4
 664 0094 8B4538   		movl	56(%rbp), %eax
 665 0097 894338   		movl	%eax, 56(%rbx)
 666              		.loc 1 155 0 discriminator 4
 667 009a 8B453C   		movl	60(%rbp), %eax
 668 009d 89433C   		movl	%eax, 60(%rbx)
 669              		.loc 1 156 0 discriminator 4
 670 00a0 8B4540   		movl	64(%rbp), %eax
 671 00a3 894340   		movl	%eax, 64(%rbx)
 672              		.loc 1 157 0 discriminator 4
 673 00a6 8B4544   		movl	68(%rbp), %eax
 674 00a9 894344   		movl	%eax, 68(%rbx)
 675              		.loc 1 158 0 discriminator 4
 676 00ac 8B4548   		movl	72(%rbp), %eax
 677 00af 894348   		movl	%eax, 72(%rbx)
 678 00b2 488B4558 		movq	88(%rbp), %rax
 679              	.LVL78:
 680              		.loc 1 159 0 discriminator 4
 681 00b6 48894358 		movq	%rax, 88(%rbx)
 682 00ba 488B8580 		movq	128(%rbp), %rax
 682      000000
 683              	.LVL79:
 684              		.loc 1 160 0 discriminator 4
 685 00c1 48898380 		movq	%rax, 128(%rbx)
 685      000000
 686              		.loc 1 161 0 discriminator 4
 687 00c8 488B4578 		movq	120(%rbp), %rax
 688 00cc 48894378 		movq	%rax, 120(%rbx)
 689              	.LBE1002:
 690              		.loc 1 166 0 discriminator 4
 691 00d0 4883C408 		addq	$8, %rsp
 692              		.cfi_def_cfa_offset 24
 693 00d4 5B       		popq	%rbx
 694              		.cfi_def_cfa_offset 16
 695              	.LVL80:
 696 00d5 5D       		popq	%rbp
 697              		.cfi_def_cfa_offset 8
 698              	.LVL81:
 699 00d6 C3       		ret
 700              		.cfi_endproc
 701              	.LFE601:
 703              		.section	.text.unlikely._ZN12Fl_Tree_ItemC2EPKS_
 704              	.LCOLDE6:
 705              		.section	.text._ZN12Fl_Tree_ItemC2EPKS_
 706              	.LHOTE6:
 707              		.globl	_ZN12Fl_Tree_ItemC1EPKS_
 708              		.set	_ZN12Fl_Tree_ItemC1EPKS_,_ZN12Fl_Tree_ItemC2EPKS_
 709              		.section	.rodata.str1.1,"aMS",@progbits,1
 710              	.LC7:
 711 0000 284E554C 		.string	"(NULL)"
 711      4C2900
 712              		.section	.rodata.str1.8,"aMS",@progbits,1
 713              		.align 8
 714              	.LC8:
 715 0000 25732D25 		.string	"%s-%s (%d children, this=%p, parent=%p depth=%d)\n"
 715      73202825 
 715      64206368 
 715      696C6472 
 715      656E2C20 
 716              		.section	.text.unlikely._ZNK12Fl_Tree_Item9show_selfEPKc,"ax",@progbits
 717              		.align 2
 718              	.LCOLDB9:
 719              		.section	.text._ZNK12Fl_Tree_Item9show_selfEPKc,"ax",@progbits
 720              	.LHOTB9:
 721              		.align 2
 722              		.p2align 4,,15
 723              		.globl	_ZNK12Fl_Tree_Item9show_selfEPKc
 725              	_ZNK12Fl_Tree_Item9show_selfEPKc:
 726              	.LFB603:
 727              		.loc 1 171 0
 728              		.cfi_startproc
 729              	.LVL82:
 730 0000 4155     		pushq	%r13
 731              		.cfi_def_cfa_offset 16
 732              		.cfi_offset 13, -16
 733 0002 4154     		pushq	%r12
 734              		.cfi_def_cfa_offset 24
 735              		.cfi_offset 12, -24
 736              		.loc 1 172 0
 737 0004 B8000000 		movl	$.LC7, %eax
 737      00
 738              		.loc 1 171 0
 739 0009 55       		pushq	%rbp
 740              		.cfi_def_cfa_offset 32
 741              		.cfi_offset 6, -32
 742 000a 53       		pushq	%rbx
 743              		.cfi_def_cfa_offset 40
 744              		.cfi_offset 3, -40
 745 000b 4889F5   		movq	%rsi, %rbp
 746 000e 4889FB   		movq	%rdi, %rbx
 747 0011 4883EC08 		subq	$8, %rsp
 748              		.cfi_def_cfa_offset 48
 749              	.LBB1003:
 750              	.LBB1004:
 751              		.loc 1 204 0
 752 0015 488B0F   		movq	(%rdi), %rcx
 753              	.LVL83:
 754 0018 488B7778 		movq	120(%rdi), %rsi
 755              	.LVL84:
 756              	.LBE1004:
 757              	.LBE1003:
 758              		.loc 1 172 0
 759 001c 4885C9   		testq	%rcx, %rcx
 760 001f 480F44C8 		cmove	%rax, %rcx
 761              	.LVL85:
 762              	.LBB1005:
 763              	.LBB1006:
 764              		.loc 1 1587 0
 765 0023 4885F6   		testq	%rsi, %rsi
 766 0026 0F84CD00 		je	.L65
 766      0000
 767 002c 4889F0   		movq	%rsi, %rax
 768 002f 31D2     		xorl	%edx, %edx
 769              	.LVL86:
 770              		.p2align 4,,10
 771 0031 0F1F8000 		.p2align 3
 771      000000
 772              	.L59:
 773 0038 488B4078 		movq	120(%rax), %rax
 774              	.LVL87:
 775              		.loc 1 1588 0
 776 003c 83C201   		addl	$1, %edx
 777              	.LVL88:
 778              		.loc 1 1587 0
 779 003f 4885C0   		testq	%rax, %rax
 780 0042 75F4     		jne	.L59
 781              	.LVL89:
 782              	.L58:
 783              	.LBE1006:
 784              	.LBE1005:
 785              	.LBB1008:
 786              	.LBB1009:
 787              		.file 5 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 788              		.loc 5 104 0
 789 0044 448B4368 		movl	104(%rbx), %r8d
 790 0048 52       		pushq	%rdx
 791              		.cfi_def_cfa_offset 56
 792 0049 BF010000 		movl	$1, %edi
 792      00
 793              	.LVL90:
 794 004e 56       		pushq	%rsi
 795              		.cfi_def_cfa_offset 64
 796 004f 31C0     		xorl	%eax, %eax
 797 0051 BE000000 		movl	$.LC8, %esi
 797      00
 798 0056 4989D9   		movq	%rbx, %r9
 799 0059 4889EA   		movq	%rbp, %rdx
 800 005c E8000000 		call	__printf_chk
 800      00
 801              	.LVL91:
 802              	.LBE1009:
 803              	.LBE1008:
 804              	.LBB1010:
 805              		.loc 1 181 0
 806 0061 448B4368 		movl	104(%rbx), %r8d
 807 0065 5E       		popq	%rsi
 808              		.cfi_def_cfa_offset 56
 809 0066 5F       		popq	%rdi
 810              		.cfi_def_cfa_offset 48
 811 0067 4585C0   		testl	%r8d, %r8d
 812 006a 751C     		jne	.L70
 813              	.LVL92:
 814              	.L60:
 815              	.LBE1010:
 816              		.loc 1 190 0
 817 006c 488B3D00 		movq	stdout(%rip), %rdi
 817      000000
 818              		.loc 1 191 0
 819 0073 4883C408 		addq	$8, %rsp
 820              		.cfi_remember_state
 821              		.cfi_def_cfa_offset 40
 822 0077 5B       		popq	%rbx
 823              		.cfi_def_cfa_offset 32
 824              	.LVL93:
 825 0078 5D       		popq	%rbp
 826              		.cfi_def_cfa_offset 24
 827 0079 415C     		popq	%r12
 828              		.cfi_def_cfa_offset 16
 829 007b 415D     		popq	%r13
 830              		.cfi_def_cfa_offset 8
 831              		.loc 1 190 0
 832 007d E9000000 		jmp	fflush
 832      00
 833              	.LVL94:
 834              		.p2align 4,,10
 835 0082 660F1F44 		.p2align 3
 835      0000
 836              	.L70:
 837              		.cfi_restore_state
 838              	.LBB1029:
 839              	.LBB1011:
 840              		.loc 1 182 0
 841 0088 4889EF   		movq	%rbp, %rdi
 842              	.LBB1012:
 843              		.loc 1 185 0
 844 008b 4531E4   		xorl	%r12d, %r12d
 845              	.LBE1012:
 846              		.loc 1 182 0
 847 008e E8000000 		call	strlen
 847      00
 848              	.LVL95:
 849 0093 488D7802 		leaq	2(%rax), %rdi
 850 0097 E8000000 		call	_Znam
 850      00
 851              	.LVL96:
 852              	.LBB1016:
 853              	.LBB1017:
 854              		.file 6 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 855              		.loc 6 110 0
 856 009c 4889EE   		movq	%rbp, %rsi
 857              	.LBE1017:
 858              	.LBE1016:
 859              		.loc 1 182 0
 860 009f 4989C5   		movq	%rax, %r13
 861              	.LVL97:
 862              	.LBB1019:
 863              	.LBB1018:
 864              		.loc 6 110 0
 865 00a2 4889C7   		movq	%rax, %rdi
 866 00a5 E8000000 		call	strcpy
 866      00
 867              	.LVL98:
 868              	.LBE1018:
 869              	.LBE1019:
 870              	.LBB1020:
 871              	.LBB1021:
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
 872              		.loc 6 148 0
 873 00aa 4C89EF   		movq	%r13, %rdi
 874              	.LBE1021:
 875              	.LBE1020:
 876              	.LBB1024:
 877              		.loc 1 185 0
 878 00ad 31ED     		xorl	%ebp, %ebp
 879              	.LVL99:
 880              	.LBE1024:
 881              	.LBB1025:
 882              	.LBB1022:
 883              		.loc 6 148 0
 884 00af E8000000 		call	strlen
 884      00
 885              	.LVL100:
 886              	.LBE1022:
 887              	.LBE1025:
 888              	.LBB1026:
 889              		.loc 1 185 0
 890 00b4 8B4B68   		movl	104(%rbx), %ecx
 891              	.LBE1026:
 892              	.LBB1027:
 893              	.LBB1023:
 894              		.loc 6 148 0
 895 00b7 4C01E8   		addq	%r13, %rax
 896 00ba BA207C00 		movl	$31776, %edx
 896      00
 897 00bf 668910   		movw	%dx, (%rax)
 898 00c2 C6400200 		movb	$0, 2(%rax)
 899              	.LVL101:
 900              	.LBE1023:
 901              	.LBE1027:
 902              	.LBB1028:
 903              		.loc 1 185 0
 904 00c6 85C9     		testl	%ecx, %ecx
 905 00c8 7E22     		jle	.L63
 906              	.LVL102:
 907 00ca 660F1F44 		.p2align 4,,10
 907      0000
 908              		.p2align 3
 909              	.L66:
 910              	.LBB1013:
 911              	.LBB1014:
 912              	.LBB1015:
  66:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
  67:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   /// Const version of operator[](int i)
  68:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   const Fl_Tree_Item *operator[](int i) const {
  69:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     return(_items[i]);
 913              		.loc 3 69 0
 914 00d0 488B4360 		movq	96(%rbx), %rax
 915              	.LBE1015:
 916              	.LBE1014:
 917              	.LBE1013:
 918              		.loc 1 186 0
 919 00d4 4C89EE   		movq	%r13, %rsi
 920              		.loc 1 185 0
 921 00d7 83C501   		addl	$1, %ebp
 922              	.LVL103:
 923              		.loc 1 186 0
 924 00da 4A8B3C20 		movq	(%rax,%r12), %rdi
 925 00de 4983C408 		addq	$8, %r12
 926 00e2 E8000000 		call	_ZNK12Fl_Tree_Item9show_selfEPKc
 926      00
 927              	.LVL104:
 928              		.loc 1 185 0
 929 00e7 3B6B68   		cmpl	104(%rbx), %ebp
 930 00ea 7CE4     		jl	.L66
 931              	.LVL105:
 932              	.L63:
 933              	.LBE1028:
 934              		.loc 1 188 0
 935 00ec 4C89EF   		movq	%r13, %rdi
 936 00ef E8000000 		call	_ZdaPv
 936      00
 937              	.LVL106:
 938 00f4 E973FFFF 		jmp	.L60
 938      FF
 939              	.LVL107:
 940              	.L65:
 941              	.LBE1011:
 942              	.LBE1029:
 943              	.LBB1030:
 944              	.LBB1007:
 945              		.loc 1 1585 0
 946 00f9 31D2     		xorl	%edx, %edx
 947 00fb E944FFFF 		jmp	.L58
 947      FF
 948              	.LBE1007:
 949              	.LBE1030:
 950              		.cfi_endproc
 951              	.LFE603:
 953              		.section	.text.unlikely._ZNK12Fl_Tree_Item9show_selfEPKc
 954              	.LCOLDE9:
 955              		.section	.text._ZNK12Fl_Tree_Item9show_selfEPKc
 956              	.LHOTE9:
 957              		.section	.text.unlikely._ZN12Fl_Tree_Item5labelEPKc,"ax",@progbits
 958              		.align 2
 959              	.LCOLDB10:
 960              		.section	.text._ZN12Fl_Tree_Item5labelEPKc,"ax",@progbits
 961              	.LHOTB10:
 962              		.align 2
 963              		.p2align 4,,15
 964              		.globl	_ZN12Fl_Tree_Item5labelEPKc
 966              	_ZN12Fl_Tree_Item5labelEPKc:
 967              	.LFB604:
 968              		.loc 1 196 0
 969              		.cfi_startproc
 970              	.LVL108:
 971 0000 55       		pushq	%rbp
 972              		.cfi_def_cfa_offset 16
 973              		.cfi_offset 6, -16
 974 0001 53       		pushq	%rbx
 975              		.cfi_def_cfa_offset 24
 976              		.cfi_offset 3, -24
 977 0002 4889FB   		movq	%rdi, %rbx
 978 0005 4889F5   		movq	%rsi, %rbp
 979 0008 4883EC08 		subq	$8, %rsp
 980              		.cfi_def_cfa_offset 32
 981              		.loc 1 197 0
 982 000c 488B3F   		movq	(%rdi), %rdi
 983              	.LVL109:
 984 000f 4885FF   		testq	%rdi, %rdi
 985 0012 740C     		je	.L72
 986              		.loc 1 197 0 is_stmt 0 discriminator 1
 987 0014 E8000000 		call	free
 987      00
 988              	.LVL110:
 989 0019 48C70300 		movq	$0, (%rbx)
 989      000000
 990              	.L72:
 991              		.loc 1 198 0 is_stmt 1
 992 0020 31C0     		xorl	%eax, %eax
 993 0022 4885ED   		testq	%rbp, %rbp
 994 0025 7408     		je	.L73
 995              		.loc 1 198 0 is_stmt 0 discriminator 1
 996 0027 4889EF   		movq	%rbp, %rdi
 997 002a E8000000 		call	strdup
 997      00
 998              	.LVL111:
 999              	.L73:
 1000              		.loc 1 198 0 discriminator 4
 1001 002f 488903   		movq	%rax, (%rbx)
 1002              		.loc 1 200 0 is_stmt 1 discriminator 4
 1003 0032 4883C408 		addq	$8, %rsp
 1004              		.cfi_def_cfa_offset 24
 1005 0036 5B       		popq	%rbx
 1006              		.cfi_def_cfa_offset 16
 1007              	.LVL112:
 1008 0037 5D       		popq	%rbp
 1009              		.cfi_def_cfa_offset 8
 1010              	.LVL113:
 1011 0038 C3       		ret
 1012              		.cfi_endproc
 1013              	.LFE604:
 1015              		.section	.text.unlikely._ZN12Fl_Tree_Item5labelEPKc
 1016              	.LCOLDE10:
 1017              		.section	.text._ZN12Fl_Tree_Item5labelEPKc
 1018              	.LHOTE10:
 1019              		.section	.text.unlikely._ZNK12Fl_Tree_Item5labelEv,"ax",@progbits
 1020              		.align 2
 1021              	.LCOLDB11:
 1022              		.section	.text._ZNK12Fl_Tree_Item5labelEv,"ax",@progbits
 1023              	.LHOTB11:
 1024              		.align 2
 1025              		.p2align 4,,15
 1026              		.globl	_ZNK12Fl_Tree_Item5labelEv
 1028              	_ZNK12Fl_Tree_Item5labelEv:
 1029              	.LFB605:
 1030              		.loc 1 203 0
 1031              		.cfi_startproc
 1032              	.LVL114:
 1033              		.loc 1 204 0
 1034 0000 488B07   		movq	(%rdi), %rax
 1035              		.loc 1 205 0
 1036 0003 C3       		ret
 1037              		.cfi_endproc
 1038              	.LFE605:
 1040              		.section	.text.unlikely._ZNK12Fl_Tree_Item5labelEv
 1041              	.LCOLDE11:
 1042              		.section	.text._ZNK12Fl_Tree_Item5labelEv
 1043              	.LHOTE11:
 1044              		.section	.text.unlikely._ZNK12Fl_Tree_Item5childEi,"ax",@progbits
 1045              		.align 2
 1046              	.LCOLDB12:
 1047              		.section	.text._ZNK12Fl_Tree_Item5childEi,"ax",@progbits
 1048              	.LHOTB12:
 1049              		.align 2
 1050              		.p2align 4,,15
 1051              		.globl	_ZNK12Fl_Tree_Item5childEi
 1053              	_ZNK12Fl_Tree_Item5childEi:
 1054              	.LFB606:
 1055              		.loc 1 208 0
 1056              		.cfi_startproc
 1057              	.LVL115:
 1058              	.LBB1031:
 1059              	.LBB1032:
 1060              		.loc 3 69 0
 1061 0000 488B4760 		movq	96(%rdi), %rax
 1062 0004 4863F6   		movslq	%esi, %rsi
 1063              	.LBE1032:
 1064              	.LBE1031:
 1065              		.loc 1 209 0
 1066 0007 488B04F0 		movq	(%rax,%rsi,8), %rax
 1067              		.loc 1 210 0
 1068 000b C3       		ret
 1069              		.cfi_endproc
 1070              	.LFE606:
 1072              		.section	.text.unlikely._ZNK12Fl_Tree_Item5childEi
 1073              	.LCOLDE12:
 1074              		.section	.text._ZNK12Fl_Tree_Item5childEi
 1075              	.LHOTE12:
 1076              		.section	.text.unlikely._ZN12Fl_Tree_Item14clear_childrenEv,"ax",@progbits
 1077              		.align 2
 1078              	.LCOLDB13:
 1079              		.section	.text._ZN12Fl_Tree_Item14clear_childrenEv,"ax",@progbits
 1080              	.LHOTB13:
 1081              		.align 2
 1082              		.p2align 4,,15
 1083              		.globl	_ZN12Fl_Tree_Item14clear_childrenEv
 1085              	_ZN12Fl_Tree_Item14clear_childrenEv:
 1086              	.LFB607:
 1087              		.loc 1 213 0
 1088              		.cfi_startproc
 1089              	.LVL116:
 1090              		.loc 1 214 0
 1091 0000 4883C760 		addq	$96, %rdi
 1092              	.LVL117:
 1093 0004 E9000000 		jmp	_ZN18Fl_Tree_Item_Array5clearEv
 1093      00
 1094              	.LVL118:
 1095              		.cfi_endproc
 1096              	.LFE607:
 1098              		.section	.text.unlikely._ZN12Fl_Tree_Item14clear_childrenEv
 1099              	.LCOLDE13:
 1100              		.section	.text._ZN12Fl_Tree_Item14clear_childrenEv
 1101              	.LHOTE13:
 1102              		.section	.text.unlikely._ZN12Fl_Tree_Item10find_childEPKc,"ax",@progbits
 1103              		.align 2
 1104              	.LCOLDB14:
 1105              		.section	.text._ZN12Fl_Tree_Item10find_childEPKc,"ax",@progbits
 1106              	.LHOTB14:
 1107              		.align 2
 1108              		.p2align 4,,15
 1109              		.globl	_ZN12Fl_Tree_Item10find_childEPKc
 1111              	_ZN12Fl_Tree_Item10find_childEPKc:
 1112              	.LFB608:
 1113              		.loc 1 224 0
 1114              		.cfi_startproc
 1115              	.LVL119:
 1116              	.LBB1033:
 1117              		.loc 1 225 0
 1118 0000 4885F6   		testq	%rsi, %rsi
 1119 0003 7468     		je	.L87
 1120              	.LVL120:
 1121              	.LBE1033:
 1122              		.loc 1 224 0 discriminator 1
 1123 0005 4155     		pushq	%r13
 1124              		.cfi_def_cfa_offset 16
 1125              		.cfi_offset 13, -16
 1126 0007 4154     		pushq	%r12
 1127              		.cfi_def_cfa_offset 24
 1128              		.cfi_offset 12, -24
 1129              		.loc 1 231 0 discriminator 1
 1130 0009 B8FFFFFF 		movl	$-1, %eax
 1130      FF
 1131              		.loc 1 224 0 discriminator 1
 1132 000e 55       		pushq	%rbp
 1133              		.cfi_def_cfa_offset 32
 1134              		.cfi_offset 6, -32
 1135 000f 53       		pushq	%rbx
 1136              		.cfi_def_cfa_offset 40
 1137              		.cfi_offset 3, -40
 1138 0010 4883EC08 		subq	$8, %rsp
 1139              		.cfi_def_cfa_offset 48
 1140 0014 8B6F68   		movl	104(%rdi), %ebp
 1141              	.LVL121:
 1142              	.LBB1038:
 1143              	.LBB1034:
 1144              		.loc 1 226 0 discriminator 1
 1145 0017 85ED     		testl	%ebp, %ebp
 1146 0019 7E33     		jle	.L84
 1147 001b 4C8B6F60 		movq	96(%rdi), %r13
 1148 001f 4989F4   		movq	%rsi, %r12
 1149              		.loc 1 226 0 is_stmt 0
 1150 0022 31DB     		xorl	%ebx, %ebx
 1151              	.LVL122:
 1152              		.p2align 4,,10
 1153 0024 0F1F4000 		.p2align 3
 1154              	.L86:
 1155              	.LBB1035:
 1156              	.LBB1036:
 1157              		.loc 1 204 0 is_stmt 1
 1158 0028 498B44DD 		movq	0(%r13,%rbx,8), %rax
 1158      00
 1159 002d 488B38   		movq	(%rax), %rdi
 1160              	.LBE1036:
 1161              	.LBE1035:
 1162              		.loc 1 227 0
 1163 0030 4885FF   		testq	%rdi, %rdi
 1164 0033 740C     		je	.L85
 1165              	.LVL123:
 1166              		.loc 1 228 0
 1167 0035 4C89E6   		movq	%r12, %rsi
 1168 0038 E8000000 		call	strcmp
 1168      00
 1169              	.LVL124:
 1170 003d 85C0     		testl	%eax, %eax
 1171 003f 741F     		je	.L89
 1172              	.LVL125:
 1173              	.L85:
 1174 0041 4883C301 		addq	$1, %rbx
 1175              	.LVL126:
 1176              		.loc 1 226 0 discriminator 2
 1177 0045 39DD     		cmpl	%ebx, %ebp
 1178 0047 7FDF     		jg	.L86
 1179              	.LBE1034:
 1180              	.LBE1038:
 1181              		.loc 1 231 0
 1182 0049 B8FFFFFF 		movl	$-1, %eax
 1182      FF
 1183              	.LVL127:
 1184              	.L84:
 1185              		.loc 1 232 0
 1186 004e 4883C408 		addq	$8, %rsp
 1187              		.cfi_remember_state
 1188              		.cfi_def_cfa_offset 40
 1189 0052 5B       		popq	%rbx
 1190              		.cfi_restore 3
 1191              		.cfi_def_cfa_offset 32
 1192 0053 5D       		popq	%rbp
 1193              		.cfi_restore 6
 1194              		.cfi_def_cfa_offset 24
 1195 0054 415C     		popq	%r12
 1196              		.cfi_restore 12
 1197              		.cfi_def_cfa_offset 16
 1198 0056 415D     		popq	%r13
 1199              		.cfi_restore 13
 1200              		.cfi_def_cfa_offset 8
 1201 0058 C3       		ret
 1202              	.LVL128:
 1203 0059 0F1F8000 		.p2align 4,,10
 1203      000000
 1204              		.p2align 3
 1205              	.L89:
 1206              		.cfi_restore_state
 1207 0060 4883C408 		addq	$8, %rsp
 1208              		.cfi_def_cfa_offset 40
 1209              	.LBB1039:
 1210              	.LBB1037:
 1211 0064 89D8     		movl	%ebx, %eax
 1212              	.LBE1037:
 1213              	.LBE1039:
 1214 0066 5B       		popq	%rbx
 1215              		.cfi_restore 3
 1216              		.cfi_def_cfa_offset 32
 1217              	.LVL129:
 1218 0067 5D       		popq	%rbp
 1219              		.cfi_restore 6
 1220              		.cfi_def_cfa_offset 24
 1221 0068 415C     		popq	%r12
 1222              		.cfi_restore 12
 1223              		.cfi_def_cfa_offset 16
 1224              	.LVL130:
 1225 006a 415D     		popq	%r13
 1226              		.cfi_restore 13
 1227              		.cfi_def_cfa_offset 8
 1228 006c C3       		ret
 1229              	.LVL131:
 1230              	.L87:
 1231              		.loc 1 231 0
 1232 006d B8FFFFFF 		movl	$-1, %eax
 1232      FF
 1233              		.loc 1 232 0
 1234 0072 C3       		ret
 1235              		.cfi_endproc
 1236              	.LFE608:
 1238              		.section	.text.unlikely._ZN12Fl_Tree_Item10find_childEPKc
 1239              	.LCOLDE14:
 1240              		.section	.text._ZN12Fl_Tree_Item10find_childEPKc
 1241              	.LHOTE14:
 1242              		.section	.text.unlikely._ZNK12Fl_Tree_Item15find_child_itemEPKc,"ax",@progbits
 1243              		.align 2
 1244              	.LCOLDB15:
 1245              		.section	.text._ZNK12Fl_Tree_Item15find_child_itemEPKc,"ax",@progbits
 1246              	.LHOTB15:
 1247              		.align 2
 1248              		.p2align 4,,15
 1249              		.globl	_ZNK12Fl_Tree_Item15find_child_itemEPKc
 1251              	_ZNK12Fl_Tree_Item15find_child_itemEPKc:
 1252              	.LFB609:
 1253              		.loc 1 240 0
 1254              		.cfi_startproc
 1255              	.LVL132:
 1256 0000 4155     		pushq	%r13
 1257              		.cfi_def_cfa_offset 16
 1258              		.cfi_offset 13, -16
 1259 0002 4154     		pushq	%r12
 1260              		.cfi_def_cfa_offset 24
 1261              		.cfi_offset 12, -24
 1262 0004 55       		pushq	%rbp
 1263              		.cfi_def_cfa_offset 32
 1264              		.cfi_offset 6, -32
 1265 0005 53       		pushq	%rbx
 1266              		.cfi_def_cfa_offset 40
 1267              		.cfi_offset 3, -40
 1268 0006 4883EC08 		subq	$8, %rsp
 1269              		.cfi_def_cfa_offset 48
 1270              	.LBB1040:
 1271              		.loc 1 241 0
 1272 000a 4885F6   		testq	%rsi, %rsi
 1273 000d 743A     		je	.L100
 1274              	.LVL133:
 1275 000f 8B4768   		movl	104(%rdi), %eax
 1276              	.LVL134:
 1277              	.LBB1041:
 1278              		.loc 1 242 0 discriminator 1
 1279 0012 85C0     		testl	%eax, %eax
 1280 0014 7E33     		jle	.L100
 1281 0016 488B5F60 		movq	96(%rdi), %rbx
 1282 001a 83E801   		subl	$1, %eax
 1283 001d 4989F4   		movq	%rsi, %r12
 1284 0020 4C8D6CC3 		leaq	8(%rbx,%rax,8), %r13
 1284      08
 1285              	.LVL135:
 1286              		.p2align 4,,10
 1287 0025 0F1F00   		.p2align 3
 1288              	.L98:
 1289              	.LBB1042:
 1290              	.LBB1043:
 1291              	.LBB1044:
 1292              		.loc 3 69 0
 1293 0028 488B2B   		movq	(%rbx), %rbp
 1294              	.LVL136:
 1295              	.LBE1044:
 1296              	.LBE1043:
 1297              	.LBE1042:
 1298              	.LBB1045:
 1299              	.LBB1046:
 1300              		.loc 1 204 0
 1301 002b 488B7D00 		movq	0(%rbp), %rdi
 1302              	.LBE1046:
 1303              	.LBE1045:
 1304              		.loc 1 243 0
 1305 002f 4885FF   		testq	%rdi, %rdi
 1306 0032 740C     		je	.L97
 1307              	.LVL137:
 1308              		.loc 1 244 0
 1309 0034 4C89E6   		movq	%r12, %rsi
 1310 0037 E8000000 		call	strcmp
 1310      00
 1311              	.LVL138:
 1312 003c 85C0     		testl	%eax, %eax
 1313 003e 740B     		je	.L96
 1314              	.LVL139:
 1315              	.L97:
 1316 0040 4883C308 		addq	$8, %rbx
 1317              		.loc 1 242 0 discriminator 2
 1318 0044 4939DD   		cmpq	%rbx, %r13
 1319 0047 75DF     		jne	.L98
 1320              	.LVL140:
 1321              	.L100:
 1322              	.LBE1041:
 1323              	.LBE1040:
 1324              		.loc 1 246 0
 1325 0049 31ED     		xorl	%ebp, %ebp
 1326              	.L96:
 1327              		.loc 1 247 0
 1328 004b 4883C408 		addq	$8, %rsp
 1329              		.cfi_def_cfa_offset 40
 1330 004f 4889E8   		movq	%rbp, %rax
 1331 0052 5B       		popq	%rbx
 1332              		.cfi_def_cfa_offset 32
 1333 0053 5D       		popq	%rbp
 1334              		.cfi_def_cfa_offset 24
 1335 0054 415C     		popq	%r12
 1336              		.cfi_def_cfa_offset 16
 1337 0056 415D     		popq	%r13
 1338              		.cfi_def_cfa_offset 8
 1339 0058 C3       		ret
 1340              		.cfi_endproc
 1341              	.LFE609:
 1343              		.section	.text.unlikely._ZNK12Fl_Tree_Item15find_child_itemEPKc
 1344              	.LCOLDE15:
 1345              		.section	.text._ZNK12Fl_Tree_Item15find_child_itemEPKc
 1346              	.LHOTE15:
 1347              		.section	.text.unlikely._ZN12Fl_Tree_Item15find_child_itemEPKc,"ax",@progbits
 1348              		.align 2
 1349              	.LCOLDB16:
 1350              		.section	.text._ZN12Fl_Tree_Item15find_child_itemEPKc,"ax",@progbits
 1351              	.LHOTB16:
 1352              		.align 2
 1353              		.p2align 4,,15
 1354              		.globl	_ZN12Fl_Tree_Item15find_child_itemEPKc
 1356              	_ZN12Fl_Tree_Item15find_child_itemEPKc:
 1357              	.LFB610:
 1358              		.loc 1 250 0
 1359              		.cfi_startproc
 1360              	.LVL141:
 1361              		.loc 1 253 0
 1362 0000 E9000000 		jmp	_ZNK12Fl_Tree_Item15find_child_itemEPKc
 1362      00
 1363              	.LVL142:
 1364              		.cfi_endproc
 1365              	.LFE610:
 1367              		.section	.text.unlikely._ZN12Fl_Tree_Item15find_child_itemEPKc
 1368              	.LCOLDE16:
 1369              		.section	.text._ZN12Fl_Tree_Item15find_child_itemEPKc
 1370              	.LHOTE16:
 1371              		.section	.text.unlikely._ZNK12Fl_Tree_Item15find_child_itemEPPc,"ax",@progbits
 1372              		.align 2
 1373              	.LCOLDB17:
 1374              		.section	.text._ZNK12Fl_Tree_Item15find_child_itemEPPc,"ax",@progbits
 1375              	.LHOTB17:
 1376              		.align 2
 1377              		.p2align 4,,15
 1378              		.globl	_ZNK12Fl_Tree_Item15find_child_itemEPPc
 1380              	_ZNK12Fl_Tree_Item15find_child_itemEPPc:
 1381              	.LFB611:
 1382              		.loc 1 263 0
 1383              		.cfi_startproc
 1384              	.LVL143:
 1385 0000 4155     		pushq	%r13
 1386              		.cfi_def_cfa_offset 16
 1387              		.cfi_offset 13, -16
 1388 0002 4154     		pushq	%r12
 1389              		.cfi_def_cfa_offset 24
 1390              		.cfi_offset 12, -24
 1391 0004 4989F4   		movq	%rsi, %r12
 1392 0007 55       		pushq	%rbp
 1393              		.cfi_def_cfa_offset 32
 1394              		.cfi_offset 6, -32
 1395 0008 53       		pushq	%rbx
 1396              		.cfi_def_cfa_offset 40
 1397              		.cfi_offset 3, -40
 1398 0009 4883EC08 		subq	$8, %rsp
 1399              		.cfi_def_cfa_offset 48
 1400              	.LVL144:
 1401              	.L113:
 1402 000d 8B4768   		movl	104(%rdi), %eax
 1403              	.LVL145:
 1404              	.LBB1047:
 1405              		.loc 1 264 0
 1406 0010 85C0     		testl	%eax, %eax
 1407 0012 7E2E     		jle	.L115
 1408 0014 488B5F60 		movq	96(%rdi), %rbx
 1409 0018 83E801   		subl	$1, %eax
 1410 001b 4C8D6CC3 		leaq	8(%rbx,%rax,8), %r13
 1410      08
 1411              	.LVL146:
 1412              		.p2align 4,,10
 1413              		.p2align 3
 1414              	.L114:
 1415              	.LBB1048:
 1416              	.LBB1049:
 1417              	.LBB1050:
 1418              		.loc 3 69 0
 1419 0020 488B2B   		movq	(%rbx), %rbp
 1420              	.LBE1050:
 1421              	.LBE1049:
 1422              	.LBE1048:
 1423              	.LBB1053:
 1424              	.LBB1054:
 1425              		.loc 1 204 0
 1426 0023 488B7D00 		movq	0(%rbp), %rdi
 1427              	.LBE1054:
 1428              	.LBE1053:
 1429              		.loc 1 265 0
 1430 0027 4885FF   		testq	%rdi, %rdi
 1431 002a 740D     		je	.L112
 1432              	.LVL147:
 1433              		.loc 1 266 0
 1434 002c 498B3424 		movq	(%r12), %rsi
 1435 0030 E8000000 		call	strcmp
 1435      00
 1436              	.LVL148:
 1437 0035 85C0     		testl	%eax, %eax
 1438 0037 741F     		je	.L121
 1439              	.L112:
 1440 0039 4883C308 		addq	$8, %rbx
 1441              		.loc 1 264 0 discriminator 2
 1442 003d 4C39EB   		cmpq	%r13, %rbx
 1443 0040 75DE     		jne	.L114
 1444              	.L115:
 1445              	.LBE1047:
 1446              		.loc 1 275 0
 1447 0042 31ED     		xorl	%ebp, %ebp
 1448              	.L111:
 1449              		.loc 1 276 0
 1450 0044 4883C408 		addq	$8, %rsp
 1451              		.cfi_remember_state
 1452              		.cfi_def_cfa_offset 40
 1453 0048 4889E8   		movq	%rbp, %rax
 1454 004b 5B       		popq	%rbx
 1455              		.cfi_def_cfa_offset 32
 1456 004c 5D       		popq	%rbp
 1457              		.cfi_def_cfa_offset 24
 1458 004d 415C     		popq	%r12
 1459              		.cfi_def_cfa_offset 16
 1460 004f 415D     		popq	%r13
 1461              		.cfi_def_cfa_offset 8
 1462 0051 C3       		ret
 1463              		.p2align 4,,10
 1464 0052 660F1F44 		.p2align 3
 1464      0000
 1465              	.L121:
 1466              		.cfi_restore_state
 1467              	.LBB1056:
 1468              		.loc 1 267 0
 1469 0058 49837C24 		cmpq	$0, 8(%r12)
 1469      0800
 1470 005e 74E4     		je	.L111
 1471              		.loc 1 268 0
 1472 0060 4983C408 		addq	$8, %r12
 1473              	.LVL149:
 1474              	.LBB1055:
 1475              	.LBB1052:
 1476              	.LBB1051:
 1477              		.loc 3 69 0
 1478 0064 4889EF   		movq	%rbp, %rdi
 1479              	.LBE1051:
 1480              	.LBE1052:
 1481              	.LBE1055:
 1482              		.loc 1 268 0
 1483 0067 EBA4     		jmp	.L113
 1484              	.LBE1056:
 1485              		.cfi_endproc
 1486              	.LFE611:
 1488              		.section	.text.unlikely._ZNK12Fl_Tree_Item15find_child_itemEPPc
 1489              	.LCOLDE17:
 1490              		.section	.text._ZNK12Fl_Tree_Item15find_child_itemEPPc
 1491              	.LHOTE17:
 1492              		.section	.text.unlikely._ZN12Fl_Tree_Item15find_child_itemEPPc,"ax",@progbits
 1493              		.align 2
 1494              	.LCOLDB18:
 1495              		.section	.text._ZN12Fl_Tree_Item15find_child_itemEPPc,"ax",@progbits
 1496              	.LHOTB18:
 1497              		.align 2
 1498              		.p2align 4,,15
 1499              		.globl	_ZN12Fl_Tree_Item15find_child_itemEPPc
 1501              	_ZN12Fl_Tree_Item15find_child_itemEPPc:
 1502              	.LFB612:
 1503              		.loc 1 279 0
 1504              		.cfi_startproc
 1505              	.LVL150:
 1506              		.loc 1 282 0
 1507 0000 E9000000 		jmp	_ZNK12Fl_Tree_Item15find_child_itemEPPc
 1507      00
 1508              	.LVL151:
 1509              		.cfi_endproc
 1510              	.LFE612:
 1512              		.section	.text.unlikely._ZN12Fl_Tree_Item15find_child_itemEPPc
 1513              	.LCOLDE18:
 1514              		.section	.text._ZN12Fl_Tree_Item15find_child_itemEPPc
 1515              	.LHOTE18:
 1516              		.section	.text.unlikely._ZNK12Fl_Tree_Item9find_itemEPPc,"ax",@progbits
 1517              		.align 2
 1518              	.LCOLDB19:
 1519              		.section	.text._ZNK12Fl_Tree_Item9find_itemEPPc,"ax",@progbits
 1520              	.LHOTB19:
 1521              		.align 2
 1522              		.p2align 4,,15
 1523              		.globl	_ZNK12Fl_Tree_Item9find_itemEPPc
 1525              	_ZNK12Fl_Tree_Item9find_itemEPPc:
 1526              	.LFB613:
 1527              		.loc 1 291 0
 1528              		.cfi_startproc
 1529              	.LVL152:
 1530 0000 55       		pushq	%rbp
 1531              		.cfi_def_cfa_offset 16
 1532              		.cfi_offset 6, -16
 1533 0001 53       		pushq	%rbx
 1534              		.cfi_def_cfa_offset 24
 1535              		.cfi_offset 3, -24
 1536 0002 4889F5   		movq	%rsi, %rbp
 1537 0005 4883EC08 		subq	$8, %rsp
 1538              		.cfi_def_cfa_offset 32
 1539              		.loc 1 292 0
 1540 0009 488B36   		movq	(%rsi), %rsi
 1541              	.LVL153:
 1542 000c 4885F6   		testq	%rsi, %rsi
 1543 000f 743F     		je	.L128
 1544 0011 4889FB   		movq	%rdi, %rbx
 1545              	.LVL154:
 1546              	.LBB1057:
 1547              	.LBB1058:
 1548              		.loc 1 204 0
 1549 0014 488B3F   		movq	(%rdi), %rdi
 1550              	.LVL155:
 1551              	.LBE1058:
 1552              	.LBE1057:
 1553              		.loc 1 293 0
 1554 0017 4885FF   		testq	%rdi, %rdi
 1555 001a 7417     		je	.L125
 1556              		.loc 1 293 0 is_stmt 0 discriminator 1
 1557 001c E8000000 		call	strcmp
 1557      00
 1558              	.LVL156:
 1559 0021 85C0     		testl	%eax, %eax
 1560 0023 750E     		jne	.L125
 1561              		.loc 1 295 0 is_stmt 1
 1562 0025 48837D08 		cmpq	$0, 8(%rbp)
 1562      00
 1563              		.loc 1 294 0
 1564 002a 488D4508 		leaq	8(%rbp), %rax
 1565              	.LVL157:
 1566              		.loc 1 295 0
 1567 002e 7430     		je	.L129
 1568              		.loc 1 294 0
 1569 0030 4889C5   		movq	%rax, %rbp
 1570              	.LVL158:
 1571              	.L125:
 1572              		.loc 1 297 0
 1573 0033 8B4368   		movl	104(%rbx), %eax
 1574 0036 85C0     		testl	%eax, %eax
 1575 0038 7416     		je	.L128
 1576              		.loc 1 301 0
 1577 003a 4883C408 		addq	$8, %rsp
 1578              		.cfi_remember_state
 1579              		.cfi_def_cfa_offset 24
 1580              		.loc 1 298 0
 1581 003e 4889EE   		movq	%rbp, %rsi
 1582 0041 4889DF   		movq	%rbx, %rdi
 1583              		.loc 1 301 0
 1584 0044 5B       		popq	%rbx
 1585              		.cfi_def_cfa_offset 16
 1586              	.LVL159:
 1587 0045 5D       		popq	%rbp
 1588              		.cfi_def_cfa_offset 8
 1589              	.LVL160:
 1590              		.loc 1 298 0
 1591 0046 E9000000 		jmp	_ZNK12Fl_Tree_Item15find_child_itemEPPc
 1591      00
 1592              	.LVL161:
 1593 004b 0F1F4400 		.p2align 4,,10
 1593      00
 1594              		.p2align 3
 1595              	.L128:
 1596              		.cfi_restore_state
 1597              		.loc 1 292 0
 1598 0050 31C0     		xorl	%eax, %eax
 1599              	.LVL162:
 1600              	.L133:
 1601              		.loc 1 301 0
 1602 0052 4883C408 		addq	$8, %rsp
 1603              		.cfi_remember_state
 1604              		.cfi_def_cfa_offset 24
 1605 0056 5B       		popq	%rbx
 1606              		.cfi_def_cfa_offset 16
 1607 0057 5D       		popq	%rbp
 1608              		.cfi_def_cfa_offset 8
 1609 0058 C3       		ret
 1610              	.LVL163:
 1611 0059 0F1F8000 		.p2align 4,,10
 1611      000000
 1612              		.p2align 3
 1613              	.L129:
 1614              		.cfi_restore_state
 1615 0060 4889D8   		movq	%rbx, %rax
 1616              	.LVL164:
 1617 0063 EBED     		jmp	.L133
 1618              		.cfi_endproc
 1619              	.LFE613:
 1621              		.section	.text.unlikely._ZNK12Fl_Tree_Item9find_itemEPPc
 1622              	.LCOLDE19:
 1623              		.section	.text._ZNK12Fl_Tree_Item9find_itemEPPc
 1624              	.LHOTE19:
 1625              		.section	.text.unlikely._ZN12Fl_Tree_Item9find_itemEPPc,"ax",@progbits
 1626              		.align 2
 1627              	.LCOLDB20:
 1628              		.section	.text._ZN12Fl_Tree_Item9find_itemEPPc,"ax",@progbits
 1629              	.LHOTB20:
 1630              		.align 2
 1631              		.p2align 4,,15
 1632              		.globl	_ZN12Fl_Tree_Item9find_itemEPPc
 1634              	_ZN12Fl_Tree_Item9find_itemEPPc:
 1635              	.LFB614:
 1636              		.loc 1 304 0
 1637              		.cfi_startproc
 1638              	.LVL165:
 1639              		.loc 1 307 0
 1640 0000 E9000000 		jmp	_ZNK12Fl_Tree_Item9find_itemEPPc
 1640      00
 1641              	.LVL166:
 1642              		.cfi_endproc
 1643              	.LFE614:
 1645              		.section	.text.unlikely._ZN12Fl_Tree_Item9find_itemEPPc
 1646              	.LCOLDE20:
 1647              		.section	.text._ZN12Fl_Tree_Item9find_itemEPPc
 1648              	.LHOTE20:
 1649              		.section	.text.unlikely._ZN12Fl_Tree_Item10find_childEPS_,"ax",@progbits
 1650              		.align 2
 1651              	.LCOLDB21:
 1652              		.section	.text._ZN12Fl_Tree_Item10find_childEPS_,"ax",@progbits
 1653              	.LHOTB21:
 1654              		.align 2
 1655              		.p2align 4,,15
 1656              		.globl	_ZN12Fl_Tree_Item10find_childEPS_
 1658              	_ZN12Fl_Tree_Item10find_childEPS_:
 1659              	.LFB615:
 1660              		.loc 1 315 0
 1661              		.cfi_startproc
 1662              	.LVL167:
 1663 0000 8B4F68   		movl	104(%rdi), %ecx
 1664              	.LVL168:
 1665              		.loc 1 319 0
 1666 0003 B8FFFFFF 		movl	$-1, %eax
 1666      FF
 1667              	.LBB1059:
 1668              		.loc 1 316 0
 1669 0008 85C9     		testl	%ecx, %ecx
 1670 000a 7E2D     		jle	.L137
 1671              	.LVL169:
 1672 000c 488B5760 		movq	96(%rdi), %rdx
 1673              	.LVL170:
 1674              		.loc 1 317 0
 1675 0010 483B32   		cmpq	(%rdx), %rsi
 1676 0013 7422     		je	.L141
 1677 0015 4883C208 		addq	$8, %rdx
 1678 0019 31C0     		xorl	%eax, %eax
 1679 001b EB0D     		jmp	.L138
 1680              	.LVL171:
 1681 001d 0F1F00   		.p2align 4,,10
 1682              		.p2align 3
 1683              	.L139:
 1684 0020 4883C208 		addq	$8, %rdx
 1685              	.LVL172:
 1686 0024 483B72F8 		cmpq	-8(%rdx), %rsi
 1687 0028 740F     		je	.L137
 1688              	.LVL173:
 1689              	.L138:
 1690              		.loc 1 316 0 discriminator 2
 1691 002a 83C001   		addl	$1, %eax
 1692              	.LVL174:
 1693 002d 39C8     		cmpl	%ecx, %eax
 1694 002f 75EF     		jne	.L139
 1695              	.LBE1059:
 1696              		.loc 1 319 0
 1697 0031 B8FFFFFF 		movl	$-1, %eax
 1697      FF
 1698              	.LVL175:
 1699              	.LBB1060:
 1700 0036 C3       		ret
 1701              	.LVL176:
 1702              	.L141:
 1703              		.loc 1 316 0
 1704 0037 31C0     		xorl	%eax, %eax
 1705              	.LVL177:
 1706              	.L137:
 1707              	.LBE1060:
 1708              		.loc 1 320 0
 1709 0039 F3C3     		rep ret
 1710              		.cfi_endproc
 1711              	.LFE615:
 1713              		.section	.text.unlikely._ZN12Fl_Tree_Item10find_childEPS_
 1714              	.LCOLDE21:
 1715              		.section	.text._ZN12Fl_Tree_Item10find_childEPS_
 1716              	.LHOTE21:
 1717              		.section	.text.unlikely._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_,"ax",@progbits
 1718              		.align 2
 1719              	.LCOLDB22:
 1720              		.section	.text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_,"ax",@progbits
 1721              	.LHOTB22:
 1722              		.align 2
 1723              		.p2align 4,,15
 1724              		.globl	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_
 1726              	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_:
 1727              	.LFB617:
 1728              		.loc 1 344 0
 1729              		.cfi_startproc
 1730              	.LVL178:
 1731 0000 4157     		pushq	%r15
 1732              		.cfi_def_cfa_offset 16
 1733              		.cfi_offset 15, -16
 1734 0002 4156     		pushq	%r14
 1735              		.cfi_def_cfa_offset 24
 1736              		.cfi_offset 14, -24
 1737 0004 4155     		pushq	%r13
 1738              		.cfi_def_cfa_offset 32
 1739              		.cfi_offset 13, -32
 1740 0006 4154     		pushq	%r12
 1741              		.cfi_def_cfa_offset 40
 1742              		.cfi_offset 12, -40
 1743 0008 4989CD   		movq	%rcx, %r13
 1744 000b 55       		pushq	%rbp
 1745              		.cfi_def_cfa_offset 48
 1746              		.cfi_offset 6, -48
 1747 000c 53       		pushq	%rbx
 1748              		.cfi_def_cfa_offset 56
 1749              		.cfi_offset 3, -56
 1750 000d 4889FD   		movq	%rdi, %rbp
 1751 0010 4889F3   		movq	%rsi, %rbx
 1752 0013 4989D4   		movq	%rdx, %r12
 1753 0016 4883EC08 		subq	$8, %rsp
 1754              		.cfi_def_cfa_offset 64
 1755              		.loc 1 349 0
 1756 001a 4885C9   		testq	%rcx, %rcx
 1757 001d 0F84DD00 		je	.L170
 1757      0000
 1758              	.LVL179:
 1759              	.L144:
 1760              		.loc 1 353 0
 1761 0023 49896D78 		movq	%rbp, 120(%r13)
 1762              	.LVL180:
 1763              	.LBB1061:
 1764              		.loc 1 354 0
 1765 0027 8B4354   		movl	84(%rbx), %eax
 1766 002a 83F801   		cmpl	$1, %eax
 1767 002d 0F847D00 		je	.L146
 1767      0000
 1768 0033 7263     		jb	.L150
 1769 0035 83F802   		cmpl	$2, %eax
 1770 0038 7545     		jne	.L167
 1771              	.LVL181:
 1772 003a 448B7568 		movl	104(%rbp), %r14d
 1773              	.LVL182:
 1774              	.LBB1062:
 1775              	.LBB1063:
 1776              	.LBB1064:
 1777              		.loc 1 371 0 discriminator 1
 1778 003e 4585F6   		testl	%r14d, %r14d
 1779 0041 7E55     		jle	.L150
 1780 0043 4C8B7D60 		movq	96(%rbp), %r15
 1781              		.loc 1 371 0 is_stmt 0
 1782 0047 31DB     		xorl	%ebx, %ebx
 1783              	.LVL183:
 1784 0049 EB0E     		jmp	.L158
 1785              	.LVL184:
 1786 004b 0F1F4400 		.p2align 4,,10
 1786      00
 1787              		.p2align 3
 1788              	.L155:
 1789 0050 4883C301 		addq	$1, %rbx
 1790              	.LVL185:
 1791 0054 4139DE   		cmpl	%ebx, %r14d
 1792 0057 7E3F     		jle	.L150
 1793              	.LVL186:
 1794              	.L158:
 1795              	.LBB1065:
 1796              	.LBB1066:
 1797              	.LBB1067:
 1798              		.loc 1 204 0 is_stmt 1
 1799 0059 498B04DF 		movq	(%r15,%rbx,8), %rax
 1800 005d 488B38   		movq	(%rax), %rdi
 1801              	.LBE1067:
 1802              	.LBE1066:
 1803              		.loc 1 373 0
 1804 0060 4885FF   		testq	%rdi, %rdi
 1805 0063 74EB     		je	.L155
 1806 0065 4C89E6   		movq	%r12, %rsi
 1807 0068 E8000000 		call	strcmp
 1807      00
 1808              	.LVL187:
 1809 006d 85C0     		testl	%eax, %eax
 1810 006f 79DF     		jns	.L155
 1811              		.loc 1 374 0
 1812 0071 488D7D60 		leaq	96(%rbp), %rdi
 1813              	.LVL188:
 1814 0075 4C89EA   		movq	%r13, %rdx
 1815 0078 89DE     		movl	%ebx, %esi
 1816 007a E8000000 		call	_ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
 1816      00
 1817              	.LVL189:
 1818              	.L167:
 1819              	.LBE1065:
 1820              	.LBE1064:
 1821              	.LBE1063:
 1822              	.LBE1062:
 1823              	.LBE1061:
 1824              		.loc 1 383 0
 1825 007f 4883C408 		addq	$8, %rsp
 1826              		.cfi_remember_state
 1827              		.cfi_def_cfa_offset 56
 1828 0083 4C89E8   		movq	%r13, %rax
 1829 0086 5B       		popq	%rbx
 1830              		.cfi_def_cfa_offset 48
 1831 0087 5D       		popq	%rbp
 1832              		.cfi_def_cfa_offset 40
 1833              	.LVL190:
 1834 0088 415C     		popq	%r12
 1835              		.cfi_def_cfa_offset 32
 1836              	.LVL191:
 1837 008a 415D     		popq	%r13
 1838              		.cfi_def_cfa_offset 24
 1839              	.LVL192:
 1840 008c 415E     		popq	%r14
 1841              		.cfi_def_cfa_offset 16
 1842 008e 415F     		popq	%r15
 1843              		.cfi_def_cfa_offset 8
 1844 0090 C3       		ret
 1845              	.LVL193:
 1846              		.p2align 4,,10
 1847 0091 0F1F8000 		.p2align 3
 1847      000000
 1848              	.L150:
 1849              		.cfi_restore_state
 1850              	.LBB1078:
 1851              	.LBB1077:
 1852              	.LBB1070:
 1853              		.loc 1 378 0
 1854 0098 488D7D60 		leaq	96(%rbp), %rdi
 1855 009c 4C89EE   		movq	%r13, %rsi
 1856 009f E8000000 		call	_ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item
 1856      00
 1857              	.LVL194:
 1858              		.loc 1 379 0
 1859 00a4 EBD9     		jmp	.L167
 1860              	.LVL195:
 1861 00a6 662E0F1F 		.p2align 4,,10
 1861      84000000 
 1861      0000
 1862              		.p2align 3
 1863              	.L146:
 1864 00b0 448B7568 		movl	104(%rbp), %r14d
 1865              	.LVL196:
 1866              	.LBE1070:
 1867              	.LBB1071:
 1868              	.LBB1072:
 1869              		.loc 1 360 0 discriminator 1
 1870 00b4 4585F6   		testl	%r14d, %r14d
 1871 00b7 7EDF     		jle	.L150
 1872 00b9 4C8B7D60 		movq	96(%rbp), %r15
 1873              		.loc 1 360 0 is_stmt 0
 1874 00bd 31DB     		xorl	%ebx, %ebx
 1875              	.LVL197:
 1876 00bf EB10     		jmp	.L157
 1877              	.LVL198:
 1878              		.p2align 4,,10
 1879 00c1 0F1F8000 		.p2align 3
 1879      000000
 1880              	.L153:
 1881 00c8 4883C301 		addq	$1, %rbx
 1882              	.LVL199:
 1883 00cc 4139DE   		cmpl	%ebx, %r14d
 1884 00cf 7EC7     		jle	.L150
 1885              	.LVL200:
 1886              	.L157:
 1887              	.LBB1073:
 1888              	.LBB1074:
 1889              	.LBB1075:
 1890              		.loc 1 204 0 is_stmt 1
 1891 00d1 498B04DF 		movq	(%r15,%rbx,8), %rax
 1892 00d5 488B38   		movq	(%rax), %rdi
 1893              	.LBE1075:
 1894              	.LBE1074:
 1895              		.loc 1 362 0
 1896 00d8 4885FF   		testq	%rdi, %rdi
 1897 00db 74EB     		je	.L153
 1898 00dd 4C89E6   		movq	%r12, %rsi
 1899 00e0 E8000000 		call	strcmp
 1899      00
 1900              	.LVL201:
 1901 00e5 85C0     		testl	%eax, %eax
 1902 00e7 7EDF     		jle	.L153
 1903              	.LBE1073:
 1904              	.LBE1072:
 1905              	.LBE1071:
 1906              	.LBB1076:
 1907              	.LBB1069:
 1908              	.LBB1068:
 1909              		.loc 1 374 0
 1910 00e9 488D7D60 		leaq	96(%rbp), %rdi
 1911              	.LVL202:
 1912 00ed 4C89EA   		movq	%r13, %rdx
 1913 00f0 89DE     		movl	%ebx, %esi
 1914 00f2 E8000000 		call	_ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
 1914      00
 1915              	.LVL203:
 1916 00f7 EB86     		jmp	.L167
 1917              	.LVL204:
 1918 00f9 0F1F8000 		.p2align 4,,10
 1918      000000
 1919              		.p2align 3
 1920              	.L170:
 1921              	.LBE1068:
 1922              	.LBE1069:
 1923              	.LBE1076:
 1924              	.LBE1077:
 1925              	.LBE1078:
 1926              		.loc 1 350 0
 1927 0100 BF880000 		movl	$136, %edi
 1927      00
 1928              	.LVL205:
 1929 0105 E8000000 		call	_Znwm
 1929      00
 1930              	.LVL206:
 1931 010a 4889DE   		movq	%rbx, %rsi
 1932 010d 4989C5   		movq	%rax, %r13
 1933              	.LVL207:
 1934 0110 4889C7   		movq	%rax, %rdi
 1935 0113 E8000000 		call	_ZN12Fl_Tree_ItemC1ERK13Fl_Tree_Prefs
 1935      00
 1936              	.LVL208:
 1937 0118 4C89E6   		movq	%r12, %rsi
 1938 011b 4C89EF   		movq	%r13, %rdi
 1939 011e E8000000 		call	_ZN12Fl_Tree_Item5labelEPKc
 1939      00
 1940              	.LVL209:
 1941 0123 E9FBFEFF 		jmp	.L144
 1941      FF
 1942              		.cfi_endproc
 1943              	.LFE617:
 1945              		.section	.text.unlikely._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_
 1946              	.LCOLDE22:
 1947              		.section	.text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_
 1948              	.LHOTE22:
 1949              		.section	.text.unlikely._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKc,"ax",@progbits
 1950              		.align 2
 1951              	.LCOLDB23:
 1952              		.section	.text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKc,"ax",@progbits
 1953              	.LHOTB23:
 1954              		.align 2
 1955              		.p2align 4,,15
 1956              		.globl	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKc
 1958              	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKc:
 1959              	.LFB616:
 1960              		.loc 1 330 0
 1961              		.cfi_startproc
 1962              	.LVL210:
 1963              		.loc 1 331 0
 1964 0000 31C9     		xorl	%ecx, %ecx
 1965 0002 E9000000 		jmp	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_
 1965      00
 1966              	.LVL211:
 1967              		.cfi_endproc
 1968              	.LFE616:
 1970              		.section	.text.unlikely._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKc
 1971              	.LCOLDE23:
 1972              		.section	.text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKc
 1973              	.LHOTE23:
 1974              		.section	.text.unlikely._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_,"ax",@progbits
 1975              		.align 2
 1976              	.LCOLDB24:
 1977              		.section	.text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_,"ax",@progbits
 1978              	.LHOTB24:
 1979              		.align 2
 1980              		.p2align 4,,15
 1981              		.globl	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_
 1983              	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_:
 1984              	.LFB619:
 1985              		.loc 1 404 0
 1986              		.cfi_startproc
 1987              	.LVL212:
 1988 0000 4156     		pushq	%r14
 1989              		.cfi_def_cfa_offset 16
 1990              		.cfi_offset 14, -16
 1991 0002 4989CE   		movq	%rcx, %r14
 1992 0005 4155     		pushq	%r13
 1993              		.cfi_def_cfa_offset 24
 1994              		.cfi_offset 13, -24
 1995 0007 4989F5   		movq	%rsi, %r13
 1996 000a 4154     		pushq	%r12
 1997              		.cfi_def_cfa_offset 32
 1998              		.cfi_offset 12, -32
 1999 000c 4989FC   		movq	%rdi, %r12
 2000 000f 55       		pushq	%rbp
 2001              		.cfi_def_cfa_offset 40
 2002              		.cfi_offset 6, -40
 2003 0010 53       		pushq	%rbx
 2004              		.cfi_def_cfa_offset 48
 2005              		.cfi_offset 3, -48
 2006 0011 488D5A08 		leaq	8(%rdx), %rbx
 2007 0015 EB16     		jmp	.L173
 2008              	.LVL213:
 2009 0017 660F1F84 		.p2align 4,,10
 2009      00000000 
 2009      00
 2010              		.p2align 3
 2011              	.L190:
 2012              		.loc 1 409 0
 2013 0020 48833B00 		cmpq	$0, (%rbx)
 2014 0024 744A     		je	.L189
 2015              	.L179:
 2016 0026 4989C4   		movq	%rax, %r12
 2017 0029 4883C308 		addq	$8, %rbx
 2018              	.L173:
 2019              		.loc 1 405 0
 2020 002d 488B6BF8 		movq	-8(%rbx), %rbp
 2021 0031 4885ED   		testq	%rbp, %rbp
 2022 0034 742B     		je	.L180
 2023              	.LVL214:
 2024              	.LBB1079:
 2025              	.LBB1080:
 2026              		.loc 1 253 0
 2027 0036 4889EE   		movq	%rbp, %rsi
 2028 0039 4C89E7   		movq	%r12, %rdi
 2029 003c E8000000 		call	_ZNK12Fl_Tree_Item15find_child_itemEPKc
 2029      00
 2030              	.LVL215:
 2031              	.LBE1080:
 2032              	.LBE1079:
 2033              		.loc 1 408 0
 2034 0041 4885C0   		testq	%rax, %rax
 2035 0044 75DA     		jne	.L190
 2036              		.loc 1 423 0
 2037 0046 48833B00 		cmpq	$0, (%rbx)
 2038 004a 7442     		je	.L191
 2039              	.LVL216:
 2040              	.LBB1081:
 2041              	.LBB1082:
 2042              		.loc 1 331 0
 2043 004c 31C9     		xorl	%ecx, %ecx
 2044 004e 4889EA   		movq	%rbp, %rdx
 2045 0051 4C89EE   		movq	%r13, %rsi
 2046 0054 4C89E7   		movq	%r12, %rdi
 2047 0057 E8000000 		call	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_
 2047      00
 2048              	.LVL217:
 2049              	.LBE1082:
 2050              	.LBE1081:
 2051              		.loc 1 431 0
 2052 005c 4885C0   		testq	%rax, %rax
 2053 005f 75C5     		jne	.L179
 2054              	.L180:
 2055              		.loc 1 432 0
 2056 0061 5B       		popq	%rbx
 2057              		.cfi_remember_state
 2058              		.cfi_def_cfa_offset 40
 2059 0062 31C0     		xorl	%eax, %eax
 2060 0064 5D       		popq	%rbp
 2061              		.cfi_def_cfa_offset 32
 2062 0065 415C     		popq	%r12
 2063              		.cfi_def_cfa_offset 24
 2064 0067 415D     		popq	%r13
 2065              		.cfi_def_cfa_offset 16
 2066              	.LVL218:
 2067 0069 415E     		popq	%r14
 2068              		.cfi_def_cfa_offset 8
 2069              	.LVL219:
 2070 006b C3       		ret
 2071              	.LVL220:
 2072 006c 0F1F4000 		.p2align 4,,10
 2073              		.p2align 3
 2074              	.L189:
 2075              		.cfi_restore_state
 2076              		.loc 1 410 0
 2077 0070 4D85F6   		testq	%r14, %r14
 2078 0073 74EC     		je	.L180
 2079              		.loc 1 414 0
 2080 0075 498B16   		movq	(%r14), %rdx
 2081 0078 4C89F1   		movq	%r14, %rcx
 2082 007b 4C89EE   		movq	%r13, %rsi
 2083 007e 4889C7   		movq	%rax, %rdi
 2084              	.LVL221:
 2085              	.L188:
 2086              		.loc 1 432 0
 2087 0081 5B       		popq	%rbx
 2088              		.cfi_remember_state
 2089              		.cfi_def_cfa_offset 40
 2090 0082 5D       		popq	%rbp
 2091              		.cfi_def_cfa_offset 32
 2092 0083 415C     		popq	%r12
 2093              		.cfi_def_cfa_offset 24
 2094 0085 415D     		popq	%r13
 2095              		.cfi_def_cfa_offset 16
 2096 0087 415E     		popq	%r14
 2097              		.cfi_def_cfa_offset 8
 2098              		.loc 1 424 0
 2099 0089 E9000000 		jmp	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_
 2099      00
 2100              	.LVL222:
 2101              	.L191:
 2102              		.cfi_restore_state
 2103 008e 4C89F1   		movq	%r14, %rcx
 2104 0091 4889EA   		movq	%rbp, %rdx
 2105 0094 4C89EE   		movq	%r13, %rsi
 2106 0097 4C89E7   		movq	%r12, %rdi
 2107 009a EBE5     		jmp	.L188
 2108              		.cfi_endproc
 2109              	.LFE619:
 2111              		.section	.text.unlikely._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_
 2112              	.LCOLDE24:
 2113              		.section	.text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_
 2114              	.LHOTE24:
 2115              		.section	.text.unlikely._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPc,"ax",@progbits
 2116              		.align 2
 2117              	.LCOLDB25:
 2118              		.section	.text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPc,"ax",@progbits
 2119              	.LHOTB25:
 2120              		.align 2
 2121              		.p2align 4,,15
 2122              		.globl	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPc
 2124              	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPc:
 2125              	.LFB618:
 2126              		.loc 1 391 0
 2127              		.cfi_startproc
 2128              	.LVL223:
 2129              		.loc 1 392 0
 2130 0000 31C9     		xorl	%ecx, %ecx
 2131 0002 E9000000 		jmp	_ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_
 2131      00
 2132              	.LVL224:
 2133              		.cfi_endproc
 2134              	.LFE618:
 2136              		.section	.text.unlikely._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPc
 2137              	.LCOLDE25:
 2138              		.section	.text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPc
 2139              	.LHOTE25:
 2140              		.section	.text.unlikely._ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci,"ax",@progbits
 2141              		.align 2
 2142              	.LCOLDB26:
 2143              		.section	.text._ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci,"ax",@progbits
 2144              	.LHOTB26:
 2145              		.align 2
 2146              		.p2align 4,,15
 2147              		.globl	_ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci
 2149              	_ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci:
 2150              	.LFB620:
 2151              		.loc 1 438 0
 2152              		.cfi_startproc
 2153              	.LVL225:
 2154 0000 4156     		pushq	%r14
 2155              		.cfi_def_cfa_offset 16
 2156              		.cfi_offset 14, -16
 2157 0002 4155     		pushq	%r13
 2158              		.cfi_def_cfa_offset 24
 2159              		.cfi_offset 13, -24
 2160 0004 4989F6   		movq	%rsi, %r14
 2161 0007 4154     		pushq	%r12
 2162              		.cfi_def_cfa_offset 32
 2163              		.cfi_offset 12, -32
 2164 0009 55       		pushq	%rbp
 2165              		.cfi_def_cfa_offset 40
 2166              		.cfi_offset 6, -40
 2167 000a 4889FD   		movq	%rdi, %rbp
 2168 000d 53       		pushq	%rbx
 2169              		.cfi_def_cfa_offset 48
 2170              		.cfi_offset 3, -48
 2171              		.loc 1 442 0
 2172 000e BF880000 		movl	$136, %edi
 2172      00
 2173              	.LVL226:
 2174              		.loc 1 438 0
 2175 0013 4989D5   		movq	%rdx, %r13
 2176 0016 4189CC   		movl	%ecx, %r12d
 2177              		.loc 1 442 0
 2178 0019 E8000000 		call	_Znwm
 2178      00
 2179              	.LVL227:
 2180 001e 4C89F6   		movq	%r14, %rsi
 2181 0021 4889C3   		movq	%rax, %rbx
 2182 0024 4889C7   		movq	%rax, %rdi
 2183 0027 E8000000 		call	_ZN12Fl_Tree_ItemC1ERK13Fl_Tree_Prefs
 2183      00
 2184              	.LVL228:
 2185              		.loc 1 444 0
 2186 002c 4C89EE   		movq	%r13, %rsi
 2187 002f 4889DF   		movq	%rbx, %rdi
 2188 0032 E8000000 		call	_ZN12Fl_Tree_Item5labelEPKc
 2188      00
 2189              	.LVL229:
 2190              		.loc 1 446 0
 2191 0037 488D7D60 		leaq	96(%rbp), %rdi
 2192 003b 4889DA   		movq	%rbx, %rdx
 2193 003e 4489E6   		movl	%r12d, %esi
 2194              		.loc 1 445 0
 2195 0041 48896B78 		movq	%rbp, 120(%rbx)
 2196              		.loc 1 446 0
 2197 0045 E8000000 		call	_ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
 2197      00
 2198              	.LVL230:
 2199              		.loc 1 449 0
 2200 004a 4889D8   		movq	%rbx, %rax
 2201 004d 5B       		popq	%rbx
 2202              		.cfi_def_cfa_offset 40
 2203              	.LVL231:
 2204 004e 5D       		popq	%rbp
 2205              		.cfi_def_cfa_offset 32
 2206              	.LVL232:
 2207 004f 415C     		popq	%r12
 2208              		.cfi_def_cfa_offset 24
 2209              	.LVL233:
 2210 0051 415D     		popq	%r13
 2211              		.cfi_def_cfa_offset 16
 2212              	.LVL234:
 2213 0053 415E     		popq	%r14
 2214              		.cfi_def_cfa_offset 8
 2215              	.LVL235:
 2216 0055 C3       		ret
 2217              		.cfi_endproc
 2218              	.LFE620:
 2220              		.section	.text.unlikely._ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci
 2221              	.LCOLDE26:
 2222              		.section	.text._ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci
 2223              	.LHOTE26:
 2224              		.section	.text.unlikely._ZN12Fl_Tree_Item12insert_aboveERK13Fl_Tree_PrefsPKc,"ax",@progbits
 2225              		.align 2
 2226              	.LCOLDB27:
 2227              		.section	.text._ZN12Fl_Tree_Item12insert_aboveERK13Fl_Tree_PrefsPKc,"ax",@progbits
 2228              	.LHOTB27:
 2229              		.align 2
 2230              		.p2align 4,,15
 2231              		.globl	_ZN12Fl_Tree_Item12insert_aboveERK13Fl_Tree_PrefsPKc
 2233              	_ZN12Fl_Tree_Item12insert_aboveERK13Fl_Tree_PrefsPKc:
 2234              	.LFB621:
 2235              		.loc 1 454 0
 2236              		.cfi_startproc
 2237              	.LVL236:
 2238              		.loc 1 455 0
 2239 0000 4C8B4F78 		movq	120(%rdi), %r9
 2240              	.LVL237:
 2241              		.loc 1 456 0
 2242 0004 4D85C9   		testq	%r9, %r9
 2243 0007 7431     		je	.L196
 2244              	.LVL238:
 2245 0009 458B4168 		movl	104(%r9), %r8d
 2246              	.LVL239:
 2247              	.LBB1083:
 2248              		.loc 1 458 0 discriminator 1
 2249 000d 4585C0   		testl	%r8d, %r8d
 2250 0010 7E28     		jle	.L196
 2251              	.LVL240:
 2252 0012 498B4160 		movq	96(%r9), %rax
 2253              	.LVL241:
 2254              	.LBB1084:
 2255              		.loc 1 460 0
 2256 0016 483B38   		cmpq	(%rax), %rdi
 2257 0019 7422     		je	.L208
 2258 001b 4883C008 		addq	$8, %rax
 2259 001f 31C9     		xorl	%ecx, %ecx
 2260 0021 EB0F     		jmp	.L199
 2261              	.LVL242:
 2262              		.p2align 4,,10
 2263 0023 0F1F4400 		.p2align 3
 2263      00
 2264              	.L200:
 2265 0028 4883C008 		addq	$8, %rax
 2266              	.LVL243:
 2267 002c 483B78F8 		cmpq	-8(%rax), %rdi
 2268 0030 740D     		je	.L197
 2269              	.LVL244:
 2270              	.L199:
 2271              	.LBE1084:
 2272              		.loc 1 458 0 discriminator 2
 2273 0032 83C101   		addl	$1, %ecx
 2274              	.LVL245:
 2275 0035 4439C1   		cmpl	%r8d, %ecx
 2276 0038 75EE     		jne	.L200
 2277              	.LVL246:
 2278              	.L196:
 2279              	.LBE1083:
 2280              		.loc 1 465 0
 2281 003a 31C0     		xorl	%eax, %eax
 2282 003c C3       		ret
 2283              	.LVL247:
 2284              	.L208:
 2285              	.LBB1086:
 2286              	.LBB1085:
 2287              		.loc 1 460 0
 2288 003d 31C9     		xorl	%ecx, %ecx
 2289              	.LVL248:
 2290              	.L197:
 2291              		.loc 1 461 0
 2292 003f 4C89CF   		movq	%r9, %rdi
 2293              	.LVL249:
 2294 0042 E9000000 		jmp	_ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci
 2294      00
 2295              	.LVL250:
 2296              	.LBE1085:
 2297              	.LBE1086:
 2298              		.cfi_endproc
 2299              	.LFE621:
 2301              		.section	.text.unlikely._ZN12Fl_Tree_Item12insert_aboveERK13Fl_Tree_PrefsPKc
 2302              	.LCOLDE27:
 2303              		.section	.text._ZN12Fl_Tree_Item12insert_aboveERK13Fl_Tree_PrefsPKc
 2304              	.LHOTE27:
 2305              		.section	.text.unlikely._ZN12Fl_Tree_Item8deparentEi,"ax",@progbits
 2306              		.align 2
 2307              	.LCOLDB28:
 2308              		.section	.text._ZN12Fl_Tree_Item8deparentEi,"ax",@progbits
 2309              	.LHOTB28:
 2310              		.align 2
 2311              		.p2align 4,,15
 2312              		.globl	_ZN12Fl_Tree_Item8deparentEi
 2314              	_ZN12Fl_Tree_Item8deparentEi:
 2315              	.LFB622:
 2316              		.loc 1 479 0
 2317              		.cfi_startproc
 2318              	.LVL251:
 2319 0000 53       		pushq	%rbx
 2320              		.cfi_def_cfa_offset 16
 2321              		.cfi_offset 3, -16
 2322              	.LBB1087:
 2323              	.LBB1088:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 2324              		.loc 3 65 0
 2325 0001 488B4760 		movq	96(%rdi), %rax
 2326 0005 4863D6   		movslq	%esi, %rdx
 2327              	.LBE1088:
 2328              	.LBE1087:
 2329              		.loc 1 481 0
 2330 0008 4883C760 		addq	$96, %rdi
 2331              	.LVL252:
 2332              	.LBB1090:
 2333              	.LBB1089:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 2334              		.loc 3 65 0
 2335 000c 488B1CD0 		movq	(%rax,%rdx,8), %rbx
 2336              	.LVL253:
 2337              	.LBE1089:
 2338              	.LBE1090:
 2339              		.loc 1 481 0
 2340 0010 E8000000 		call	_ZN18Fl_Tree_Item_Array8deparentEi
 2340      00
 2341              	.LVL254:
 2342 0015 85C0     		testl	%eax, %eax
 2343 0017 B8000000 		movl	$0, %eax
 2343      00
 2344 001c 480F48D8 		cmovs	%rax, %rbx
 2345              		.loc 1 483 0
 2346 0020 4889D8   		movq	%rbx, %rax
 2347 0023 5B       		popq	%rbx
 2348              		.cfi_def_cfa_offset 8
 2349 0024 C3       		ret
 2350              		.cfi_endproc
 2351              	.LFE622:
 2353              		.section	.text.unlikely._ZN12Fl_Tree_Item8deparentEi
 2354              	.LCOLDE28:
 2355              		.section	.text._ZN12Fl_Tree_Item8deparentEi
 2356              	.LHOTE28:
 2357              		.section	.text.unlikely._ZN12Fl_Tree_Item8reparentEPS_i,"ax",@progbits
 2358              		.align 2
 2359              	.LCOLDB29:
 2360              		.section	.text._ZN12Fl_Tree_Item8reparentEPS_i,"ax",@progbits
 2361              	.LHOTB29:
 2362              		.align 2
 2363              		.p2align 4,,15
 2364              		.globl	_ZN12Fl_Tree_Item8reparentEPS_i
 2366              	_ZN12Fl_Tree_Item8reparentEPS_i:
 2367              	.LFB623:
 2368              		.loc 1 492 0
 2369              		.cfi_startproc
 2370              	.LVL255:
 2371 0000 55       		pushq	%rbp
 2372              		.cfi_def_cfa_offset 16
 2373              		.cfi_offset 6, -16
 2374 0001 53       		pushq	%rbx
 2375              		.cfi_def_cfa_offset 24
 2376              		.cfi_offset 3, -24
 2377 0002 4889FB   		movq	%rdi, %rbx
 2378              		.loc 1 494 0
 2379 0005 89D1     		movl	%edx, %ecx
 2380 0007 4883C760 		addq	$96, %rdi
 2381              	.LVL256:
 2382 000b 4889DA   		movq	%rbx, %rdx
 2383              	.LVL257:
 2384              		.loc 1 492 0
 2385 000e 4883EC08 		subq	$8, %rsp
 2386              		.cfi_def_cfa_offset 32
 2387              		.loc 1 492 0
 2388 0012 4889F5   		movq	%rsi, %rbp
 2389              		.loc 1 494 0
 2390 0015 E8000000 		call	_ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i
 2390      00
 2391              	.LVL258:
 2392 001a 85C0     		testl	%eax, %eax
 2393 001c 7806     		js	.L214
 2394              	.LVL259:
 2395              	.LBB1091:
 2396              	.LBB1092:
 307:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 2397              		.loc 4 307 0
 2398 001e 48895D78 		movq	%rbx, 120(%rbp)
 2399              	.LVL260:
 2400              	.LBE1092:
 2401              	.LBE1091:
 2402              		.loc 1 496 0
 2403 0022 31C0     		xorl	%eax, %eax
 2404              	.LVL261:
 2405              	.L214:
 2406              		.loc 1 497 0
 2407 0024 4883C408 		addq	$8, %rsp
 2408              		.cfi_def_cfa_offset 24
 2409 0028 5B       		popq	%rbx
 2410              		.cfi_def_cfa_offset 16
 2411              	.LVL262:
 2412 0029 5D       		popq	%rbp
 2413              		.cfi_def_cfa_offset 8
 2414              	.LVL263:
 2415 002a C3       		ret
 2416              		.cfi_endproc
 2417              	.LFE623:
 2419              		.section	.text.unlikely._ZN12Fl_Tree_Item8reparentEPS_i
 2420              	.LCOLDE29:
 2421              		.section	.text._ZN12Fl_Tree_Item8reparentEPS_i
 2422              	.LHOTE29:
 2423              		.section	.text.unlikely._ZN12Fl_Tree_Item4moveEii,"ax",@progbits
 2424              		.align 2
 2425              	.LCOLDB30:
 2426              		.section	.text._ZN12Fl_Tree_Item4moveEii,"ax",@progbits
 2427              	.LHOTB30:
 2428              		.align 2
 2429              		.p2align 4,,15
 2430              		.globl	_ZN12Fl_Tree_Item4moveEii
 2432              	_ZN12Fl_Tree_Item4moveEii:
 2433              	.LFB624:
 2434              		.loc 1 506 0
 2435              		.cfi_startproc
 2436              	.LVL264:
 2437              		.loc 1 507 0
 2438 0000 4883C760 		addq	$96, %rdi
 2439              	.LVL265:
 2440 0004 E9000000 		jmp	_ZN18Fl_Tree_Item_Array4moveEii
 2440      00
 2441              	.LVL266:
 2442              		.cfi_endproc
 2443              	.LFE624:
 2445              		.section	.text.unlikely._ZN12Fl_Tree_Item4moveEii
 2446              	.LCOLDE30:
 2447              		.section	.text._ZN12Fl_Tree_Item4moveEii
 2448              	.LHOTE30:
 2449              		.section	.text.unlikely._ZN12Fl_Tree_Item4moveEPS_ii,"ax",@progbits
 2450              		.align 2
 2451              	.LCOLDB31:
 2452              		.section	.text._ZN12Fl_Tree_Item4moveEPS_ii,"ax",@progbits
 2453              	.LHOTB31:
 2454              		.align 2
 2455              		.p2align 4,,15
 2456              		.globl	_ZN12Fl_Tree_Item4moveEPS_ii
 2458              	_ZN12Fl_Tree_Item4moveEPS_ii:
 2459              	.LFB625:
 2460              		.loc 1 526 0
 2461              		.cfi_startproc
 2462              	.LVL267:
 2463 0000 4154     		pushq	%r12
 2464              		.cfi_def_cfa_offset 16
 2465              		.cfi_offset 12, -16
 2466 0002 55       		pushq	%rbp
 2467              		.cfi_def_cfa_offset 24
 2468              		.cfi_offset 6, -24
 2469 0003 4889F5   		movq	%rsi, %rbp
 2470 0006 53       		pushq	%rbx
 2471              		.cfi_def_cfa_offset 32
 2472              		.cfi_offset 3, -32
 2473 0007 4889FB   		movq	%rdi, %rbx
 2474 000a 4883EC10 		subq	$16, %rsp
 2475              		.cfi_def_cfa_offset 48
 2476              		.loc 1 529 0
 2477 000e 83FA01   		cmpl	$1, %edx
 2478 0011 0F849901 		je	.L220
 2478      0000
 2479 0017 83FA02   		cmpl	$2, %edx
 2480 001a 0F84B000 		je	.L221
 2480      0000
 2481 0020 85D2     		testl	%edx, %edx
 2482              		.loc 1 549 0
 2483 0022 B8FDFFFF 		movl	$-3, %eax
 2483      FF
 2484              		.loc 1 529 0
 2485 0027 740F     		je	.L289
 2486              	.LVL268:
 2487              	.L271:
 2488              		.loc 1 571 0
 2489 0029 4883C410 		addq	$16, %rsp
 2490              		.cfi_remember_state
 2491              		.cfi_def_cfa_offset 32
 2492 002d 5B       		popq	%rbx
 2493              		.cfi_def_cfa_offset 24
 2494              	.LVL269:
 2495 002e 5D       		popq	%rbp
 2496              		.cfi_def_cfa_offset 16
 2497 002f 415C     		popq	%r12
 2498              		.cfi_def_cfa_offset 8
 2499 0031 C3       		ret
 2500              	.LVL270:
 2501              		.p2align 4,,10
 2502 0032 660F1F44 		.p2align 3
 2502      0000
 2503              	.L289:
 2504              		.cfi_restore_state
 2505 0038 488B7F78 		movq	120(%rdi), %rdi
 2506              	.LVL271:
 2507 003c 4C8B4E78 		movq	120(%rsi), %r9
 2508              	.LVL272:
 2509              	.LBB1093:
 2510              	.LBB1094:
 2511              		.loc 1 319 0
 2512 0040 BEFFFFFF 		movl	$-1, %esi
 2512      FF
 2513              	.LVL273:
 2514 0045 8B4F68   		movl	104(%rdi), %ecx
 2515              	.LVL274:
 2516              	.LBB1095:
 2517              		.loc 1 316 0
 2518 0048 85C9     		testl	%ecx, %ecx
 2519 004a 7E32     		jle	.L223
 2520              	.LVL275:
 2521 004c 488B4760 		movq	96(%rdi), %rax
 2522              	.LVL276:
 2523              		.loc 1 317 0
 2524 0050 483B18   		cmpq	(%rax), %rbx
 2525 0053 0F849402 		je	.L290
 2525      0000
 2526 0059 4883C008 		addq	$8, %rax
 2527 005d 31F6     		xorl	%esi, %esi
 2528 005f EB11     		jmp	.L225
 2529              	.LVL277:
 2530              		.p2align 4,,10
 2531 0061 0F1F8000 		.p2align 3
 2531      000000
 2532              	.L226:
 2533 0068 4883C008 		addq	$8, %rax
 2534              	.LVL278:
 2535 006c 483B58F8 		cmpq	-8(%rax), %rbx
 2536 0070 740C     		je	.L223
 2537              	.LVL279:
 2538              	.L225:
 2539              		.loc 1 316 0
 2540 0072 83C601   		addl	$1, %esi
 2541              	.LVL280:
 2542 0075 39CE     		cmpl	%ecx, %esi
 2543 0077 75EF     		jne	.L226
 2544              	.LBE1095:
 2545              		.loc 1 319 0
 2546 0079 BEFFFFFF 		movl	$-1, %esi
 2546      FF
 2547              	.LVL281:
 2548              	.L223:
 2549 007e 458B4168 		movl	104(%r9), %r8d
 2550              	.LBE1094:
 2551              	.LBE1093:
 2552              		.loc 1 552 0
 2553 0082 B8FEFFFF 		movl	$-2, %eax
 2553      FF
 2554              	.LBB1098:
 2555              	.LBB1099:
 2556              		.loc 1 316 0
 2557 0087 4585C0   		testl	%r8d, %r8d
 2558 008a 7E9D     		jle	.L271
 2559              	.LVL282:
 2560 008c 498B4160 		movq	96(%r9), %rax
 2561              	.LVL283:
 2562              		.loc 1 317 0
 2563 0090 483B28   		cmpq	(%rax), %rbp
 2564 0093 0F844702 		je	.L259
 2564      0000
 2565 0099 4883C008 		addq	$8, %rax
 2566 009d 31C9     		xorl	%ecx, %ecx
 2567 009f EB15     		jmp	.L229
 2568              	.LVL284:
 2569              		.p2align 4,,10
 2570 00a1 0F1F8000 		.p2align 3
 2570      000000
 2571              	.L230:
 2572 00a8 4883C008 		addq	$8, %rax
 2573              	.LVL285:
 2574 00ac 483B68F8 		cmpq	-8(%rax), %rbp
 2575 00b0 0F848A01 		je	.L284
 2575      0000
 2576              	.LVL286:
 2577              	.L229:
 2578              		.loc 1 316 0
 2579 00b6 83C101   		addl	$1, %ecx
 2580              	.LVL287:
 2581 00b9 4439C1   		cmpl	%r8d, %ecx
 2582 00bc 75EA     		jne	.L230
 2583              	.LVL288:
 2584              	.L263:
 2585              	.LBE1099:
 2586              	.LBE1098:
 2587              		.loc 1 571 0
 2588 00be 4883C410 		addq	$16, %rsp
 2589              		.cfi_remember_state
 2590              		.cfi_def_cfa_offset 32
 2591              		.loc 1 552 0
 2592 00c2 B8FEFFFF 		movl	$-2, %eax
 2592      FF
 2593              		.loc 1 571 0
 2594 00c7 5B       		popq	%rbx
 2595              		.cfi_def_cfa_offset 24
 2596              	.LVL289:
 2597 00c8 5D       		popq	%rbp
 2598              		.cfi_def_cfa_offset 16
 2599 00c9 415C     		popq	%r12
 2600              		.cfi_def_cfa_offset 8
 2601 00cb C3       		ret
 2602              	.LVL290:
 2603 00cc 0F1F4000 		.p2align 4,,10
 2604              		.p2align 3
 2605              	.L221:
 2606              		.cfi_restore_state
 2607 00d0 488B7F78 		movq	120(%rdi), %rdi
 2608              	.LVL291:
 2609              	.LBB1100:
 2610              	.LBB1101:
 2611              		.loc 1 319 0
 2612 00d4 BEFFFFFF 		movl	$-1, %esi
 2612      FF
 2613              	.LVL292:
 2614 00d9 448B4768 		movl	104(%rdi), %r8d
 2615              	.LBB1102:
 2616              		.loc 1 316 0
 2617 00dd 4585C0   		testl	%r8d, %r8d
 2618 00e0 7E35     		jle	.L238
 2619              	.LVL293:
 2620 00e2 488B4760 		movq	96(%rdi), %rax
 2621              	.LVL294:
 2622              		.loc 1 317 0
 2623 00e6 483B18   		cmpq	(%rax), %rbx
 2624 00e9 0F840502 		je	.L291
 2624      0000
 2625 00ef 4883C008 		addq	$8, %rax
 2626 00f3 31F6     		xorl	%esi, %esi
 2627 00f5 EB13     		jmp	.L240
 2628              	.LVL295:
 2629 00f7 660F1F84 		.p2align 4,,10
 2629      00000000 
 2629      00
 2630              		.p2align 3
 2631              	.L241:
 2632 0100 4883C008 		addq	$8, %rax
 2633              	.LVL296:
 2634 0104 483B58F8 		cmpq	-8(%rax), %rbx
 2635 0108 740D     		je	.L238
 2636              	.LVL297:
 2637              	.L240:
 2638              		.loc 1 316 0
 2639 010a 83C601   		addl	$1, %esi
 2640              	.LVL298:
 2641 010d 4439C6   		cmpl	%r8d, %esi
 2642 0110 75EE     		jne	.L241
 2643              	.LBE1102:
 2644              		.loc 1 319 0
 2645 0112 BEFFFFFF 		movl	$-1, %esi
 2645      FF
 2646              	.LVL299:
 2647              	.L238:
 2648              	.LBE1101:
 2649              	.LBE1100:
 2650              		.loc 1 551 0
 2651 0117 4885ED   		testq	%rbp, %rbp
 2652 011a B8FFFFFF 		movl	$-1, %eax
 2652      FF
 2653 011f 0F8404FF 		je	.L271
 2653      FFFF
 2654 0125 89C8     		movl	%ecx, %eax
 2655 0127 C1E81F   		shrl	$31, %eax
 2656 012a 4189C0   		movl	%eax, %r8d
 2657              	.LVL300:
 2658              	.L249:
 2659              		.loc 1 552 0
 2660 012d 89F0     		movl	%esi, %eax
 2661 012f C1E81F   		shrl	$31, %eax
 2662 0132 84C0     		testb	%al, %al
 2663 0134 7588     		jne	.L263
 2664 0136 4584C0   		testb	%r8b, %r8b
 2665 0139 7583     		jne	.L263
 2666              		.loc 1 553 0
 2667 013b 4839FD   		cmpq	%rdi, %rbp
 2668 013e 0F843C01 		je	.L292
 2668      0000
 2669              	.LVL301:
 2670              		.loc 1 561 0
 2671 0144 394D68   		cmpl	%ecx, 104(%rbp)
 2672 0147 894C240C 		movl	%ecx, 12(%rsp)
 2673 014b 0F8C6F01 		jl	.L247
 2673      0000
 2674              	.LVL302:
 2675              	.LBB1105:
 2676              	.LBB1106:
 2677              	.LBB1107:
 2678              	.LBB1108:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 2679              		.loc 3 65 0
 2680 0151 488B4760 		movq	96(%rdi), %rax
 2681 0155 4863D6   		movslq	%esi, %rdx
 2682              	.LVL303:
 2683              	.LBE1108:
 2684              	.LBE1107:
 2685              		.loc 1 481 0
 2686 0158 4883C760 		addq	$96, %rdi
 2687              	.LVL304:
 2688              	.LBB1110:
 2689              	.LBB1109:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 2690              		.loc 3 65 0
 2691 015c 4C8B24D0 		movq	(%rax,%rdx,8), %r12
 2692              	.LVL305:
 2693              	.LBE1109:
 2694              	.LBE1110:
 2695              		.loc 1 481 0
 2696 0160 E8000000 		call	_ZN18Fl_Tree_Item_Array8deparentEi
 2696      00
 2697              	.LVL306:
 2698              	.LBE1106:
 2699              	.LBE1105:
 2700              		.loc 1 563 0
 2701 0165 4D85E4   		testq	%r12, %r12
 2702 0168 0F849401 		je	.L265
 2702      0000
 2703 016e C1E81F   		shrl	$31, %eax
 2704 0171 84C0     		testb	%al, %al
 2705 0173 0F858901 		jne	.L265
 2705      0000
 2706              	.LVL307:
 2707              	.LBB1111:
 2708              	.LBB1112:
 2709              		.loc 1 494 0
 2710 0179 4C8D6560 		leaq	96(%rbp), %r12
 2711              	.LVL308:
 2712 017d 8B4C240C 		movl	12(%rsp), %ecx
 2713 0181 4889EA   		movq	%rbp, %rdx
 2714 0184 4889DE   		movq	%rbx, %rsi
 2715 0187 4C89E7   		movq	%r12, %rdi
 2716 018a E8000000 		call	_ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i
 2716      00
 2717              	.LVL309:
 2718 018f 85C0     		testl	%eax, %eax
 2719 0191 0F88B900 		js	.L248
 2719      0000
 2720              	.LVL310:
 2721              	.LBB1113:
 2722              	.LBB1114:
 307:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 2723              		.loc 4 307 0
 2724 0197 48896B78 		movq	%rbp, 120(%rbx)
 2725              	.LVL311:
 2726              	.LBE1114:
 2727              	.LBE1113:
 2728              	.LBE1112:
 2729              	.LBE1111:
 2730              		.loc 1 571 0
 2731 019b 4883C410 		addq	$16, %rsp
 2732              		.cfi_remember_state
 2733              		.cfi_def_cfa_offset 32
 2734              		.loc 1 570 0
 2735 019f 31C0     		xorl	%eax, %eax
 2736              		.loc 1 571 0
 2737 01a1 5B       		popq	%rbx
 2738              		.cfi_def_cfa_offset 24
 2739              	.LVL312:
 2740 01a2 5D       		popq	%rbp
 2741              		.cfi_def_cfa_offset 16
 2742              	.LVL313:
 2743 01a3 415C     		popq	%r12
 2744              		.cfi_def_cfa_offset 8
 2745              	.LVL314:
 2746 01a5 C3       		ret
 2747              	.LVL315:
 2748 01a6 662E0F1F 		.p2align 4,,10
 2748      84000000 
 2748      0000
 2749              		.p2align 3
 2750              	.L220:
 2751              		.cfi_restore_state
 2752 01b0 488B7F78 		movq	120(%rdi), %rdi
 2753              	.LVL316:
 2754 01b4 4C8B4E78 		movq	120(%rsi), %r9
 2755              	.LVL317:
 2756              	.LBB1115:
 2757              	.LBB1116:
 2758              		.loc 1 319 0
 2759 01b8 BEFFFFFF 		movl	$-1, %esi
 2759      FF
 2760              	.LVL318:
 2761 01bd 8B4F68   		movl	104(%rdi), %ecx
 2762              	.LVL319:
 2763              	.LBB1117:
 2764              		.loc 1 316 0
 2765 01c0 85C9     		testl	%ecx, %ecx
 2766 01c2 7E32     		jle	.L231
 2767              	.LVL320:
 2768 01c4 488B4760 		movq	96(%rdi), %rax
 2769              	.LVL321:
 2770              		.loc 1 317 0
 2771 01c8 483B18   		cmpq	(%rax), %rbx
 2772 01cb 0F842A01 		je	.L293
 2772      0000
 2773 01d1 4883C008 		addq	$8, %rax
 2774 01d5 31F6     		xorl	%esi, %esi
 2775 01d7 EB11     		jmp	.L233
 2776              	.LVL322:
 2777 01d9 0F1F8000 		.p2align 4,,10
 2777      000000
 2778              		.p2align 3
 2779              	.L234:
 2780 01e0 4883C008 		addq	$8, %rax
 2781              	.LVL323:
 2782 01e4 483B58F8 		cmpq	-8(%rax), %rbx
 2783 01e8 740C     		je	.L231
 2784              	.LVL324:
 2785              	.L233:
 2786              		.loc 1 316 0
 2787 01ea 83C601   		addl	$1, %esi
 2788              	.LVL325:
 2789 01ed 39CE     		cmpl	%ecx, %esi
 2790 01ef 75EF     		jne	.L234
 2791              	.LBE1117:
 2792              		.loc 1 319 0
 2793 01f1 BEFFFFFF 		movl	$-1, %esi
 2793      FF
 2794              	.LVL326:
 2795              	.L231:
 2796 01f6 458B4168 		movl	104(%r9), %r8d
 2797              	.LBE1116:
 2798              	.LBE1115:
 2799              		.loc 1 552 0
 2800 01fa B8FEFFFF 		movl	$-2, %eax
 2800      FF
 2801              	.LBB1120:
 2802              	.LBB1121:
 2803              		.loc 1 316 0
 2804 01ff 4585C0   		testl	%r8d, %r8d
 2805 0202 0F8E21FE 		jle	.L271
 2805      FFFF
 2806              	.LVL327:
 2807 0208 498B4160 		movq	96(%r9), %rax
 2808              	.LVL328:
 2809              		.loc 1 317 0
 2810 020c 483B28   		cmpq	(%rax), %rbp
 2811 020f 0F84CB00 		je	.L259
 2811      0000
 2812 0215 4883C008 		addq	$8, %rax
 2813 0219 31C9     		xorl	%ecx, %ecx
 2814 021b EB0D     		jmp	.L236
 2815              	.LVL329:
 2816 021d 0F1F00   		.p2align 4,,10
 2817              		.p2align 3
 2818              	.L237:
 2819 0220 4883C008 		addq	$8, %rax
 2820              	.LVL330:
 2821 0224 483B68F8 		cmpq	-8(%rax), %rbp
 2822 0228 7416     		je	.L284
 2823              	.LVL331:
 2824              	.L236:
 2825              		.loc 1 316 0
 2826 022a 83C101   		addl	$1, %ecx
 2827              	.LVL332:
 2828 022d 4139C8   		cmpl	%ecx, %r8d
 2829 0230 75EE     		jne	.L237
 2830 0232 E987FEFF 		jmp	.L263
 2830      FF
 2831              	.LVL333:
 2832 0237 660F1F84 		.p2align 4,,10
 2832      00000000 
 2832      00
 2833              		.p2align 3
 2834              	.L284:
 2835 0240 89C8     		movl	%ecx, %eax
 2836              		.loc 1 317 0
 2837 0242 4C89CD   		movq	%r9, %rbp
 2838              	.LVL334:
 2839 0245 C1E81F   		shrl	$31, %eax
 2840 0248 4189C0   		movl	%eax, %r8d
 2841 024b E9DDFEFF 		jmp	.L249
 2841      FF
 2842              	.LVL335:
 2843              		.p2align 4,,10
 2844              		.p2align 3
 2845              	.L248:
 2846              	.LBE1121:
 2847              	.LBE1120:
 2848              	.LBB1123:
 2849              	.LBB1124:
 2850              		.loc 1 494 0
 2851 0250 31C9     		xorl	%ecx, %ecx
 2852 0252 4889EA   		movq	%rbp, %rdx
 2853 0255 4889DE   		movq	%rbx, %rsi
 2854 0258 4C89E7   		movq	%r12, %rdi
 2855 025b E8000000 		call	_ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i
 2855      00
 2856              	.LVL336:
 2857 0260 89C2     		movl	%eax, %edx
 2858              	.LVL337:
 2859              	.LBE1124:
 2860              	.LBE1123:
 2861              		.loc 1 567 0
 2862 0262 B8FAFFFF 		movl	$-6, %eax
 2862      FF
 2863              	.LVL338:
 2864              	.LBB1128:
 2865              	.LBB1127:
 2866              		.loc 1 494 0
 2867 0267 85D2     		testl	%edx, %edx
 2868 0269 0F88BAFD 		js	.L271
 2868      FFFF
 2869              	.LVL339:
 2870              	.LBB1125:
 2871              	.LBB1126:
 307:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 2872              		.loc 4 307 0
 2873 026f 48896B78 		movq	%rbp, 120(%rbx)
 2874              	.LVL340:
 2875 0273 E9B1FDFF 		jmp	.L271
 2875      FF
 2876              	.LVL341:
 2877 0278 0F1F8400 		.p2align 4,,10
 2877      00000000 
 2878              		.p2align 3
 2879              	.L292:
 2880              	.LBE1126:
 2881              	.LBE1125:
 2882              	.LBE1127:
 2883              	.LBE1128:
 2884              		.loc 1 554 0
 2885 0280 85D2     		testl	%edx, %edx
 2886 0282 744C     		je	.L244
 2887 0284 83FA01   		cmpl	$1, %edx
 2888 0287 7517     		jne	.L243
 2889              		.loc 1 556 0
 2890 0289 39CE     		cmpl	%ecx, %esi
 2891 028b 7E13     		jle	.L243
 2892              	.LVL342:
 2893 028d 31C0     		xorl	%eax, %eax
 2894 028f 394D68   		cmpl	%ecx, 104(%rbp)
 2895 0292 0F9FC0   		setg	%al
 2896 0295 01C1     		addl	%eax, %ecx
 2897              	.LVL343:
 2898 0297 660F1F84 		.p2align 4,,10
 2898      00000000 
 2898      00
 2899              		.p2align 3
 2900              	.L243:
 2901              	.LBB1129:
 2902              	.LBB1130:
 2903              		.loc 1 507 0
 2904 02a0 488D7D60 		leaq	96(%rbp), %rdi
 2905              	.LVL344:
 2906 02a4 89F2     		movl	%esi, %edx
 2907              	.LVL345:
 2908 02a6 89CE     		movl	%ecx, %esi
 2909              	.LVL346:
 2910 02a8 E8000000 		call	_ZN18Fl_Tree_Item_Array4moveEii
 2910      00
 2911              	.LVL347:
 2912              	.LBE1130:
 2913              	.LBE1129:
 2914              		.loc 1 558 0
 2915 02ad 85C0     		testl	%eax, %eax
 2916 02af 780F     		js	.L247
 2917              		.loc 1 571 0
 2918 02b1 4883C410 		addq	$16, %rsp
 2919              		.cfi_remember_state
 2920              		.cfi_def_cfa_offset 32
 2921              		.loc 1 570 0
 2922 02b5 31C0     		xorl	%eax, %eax
 2923              		.loc 1 571 0
 2924 02b7 5B       		popq	%rbx
 2925              		.cfi_def_cfa_offset 24
 2926              	.LVL348:
 2927 02b8 5D       		popq	%rbp
 2928              		.cfi_def_cfa_offset 16
 2929              	.LVL349:
 2930 02b9 415C     		popq	%r12
 2931              		.cfi_def_cfa_offset 8
 2932 02bb C3       		ret
 2933              	.LVL350:
 2934 02bc 0F1F4000 		.p2align 4,,10
 2935              		.p2align 3
 2936              	.L247:
 2937              		.cfi_restore_state
 2938              		.loc 1 559 0
 2939 02c0 B8FCFFFF 		movl	$-4, %eax
 2939      FF
 2940 02c5 E95FFDFF 		jmp	.L271
 2940      FF
 2941              	.LVL351:
 2942 02ca 660F1F44 		.p2align 4,,10
 2942      0000
 2943              		.p2align 3
 2944              	.L244:
 2945              		.loc 1 555 0
 2946 02d0 39CE     		cmpl	%ecx, %esi
 2947 02d2 7DCC     		jge	.L243
 2948 02d4 85C9     		testl	%ecx, %ecx
 2949 02d6 0F9FC0   		setg	%al
 2950 02d9 3C01     		cmpb	$1, %al
 2951 02db 83D1FF   		adcl	$-1, %ecx
 2952              	.LVL352:
 2953 02de EBC0     		jmp	.L243
 2954              	.LVL353:
 2955              	.L259:
 2956              	.LBB1131:
 2957              	.LBB1122:
 2958              		.loc 1 317 0
 2959 02e0 4C89CD   		movq	%r9, %rbp
 2960              	.LVL354:
 2961 02e3 4531C0   		xorl	%r8d, %r8d
 2962              		.loc 1 316 0
 2963 02e6 31C9     		xorl	%ecx, %ecx
 2964              	.LVL355:
 2965 02e8 E940FEFF 		jmp	.L249
 2965      FF
 2966              	.LVL356:
 2967              	.L290:
 2968              	.LBE1122:
 2969              	.LBE1131:
 2970              	.LBB1132:
 2971              	.LBB1097:
 2972              	.LBB1096:
 2973 02ed 31F6     		xorl	%esi, %esi
 2974 02ef E98AFDFF 		jmp	.L223
 2974      FF
 2975              	.LVL357:
 2976              	.L291:
 2977              	.LBE1096:
 2978              	.LBE1097:
 2979              	.LBE1132:
 2980              	.LBB1133:
 2981              	.LBB1104:
 2982              	.LBB1103:
 2983 02f4 31F6     		xorl	%esi, %esi
 2984 02f6 E91CFEFF 		jmp	.L238
 2984      FF
 2985              	.LVL358:
 2986              	.L293:
 2987              	.LBE1103:
 2988              	.LBE1104:
 2989              	.LBE1133:
 2990              	.LBB1134:
 2991              	.LBB1119:
 2992              	.LBB1118:
 2993 02fb 31F6     		xorl	%esi, %esi
 2994 02fd E9F4FEFF 		jmp	.L231
 2994      FF
 2995              	.LVL359:
 2996              	.L265:
 2997              	.LBE1118:
 2998              	.LBE1119:
 2999              	.LBE1134:
 3000              		.loc 1 564 0
 3001 0302 B8FBFFFF 		movl	$-5, %eax
 3001      FF
 3002 0307 E91DFDFF 		jmp	.L271
 3002      FF
 3003              		.cfi_endproc
 3004              	.LFE625:
 3006              		.section	.text.unlikely._ZN12Fl_Tree_Item4moveEPS_ii
 3007              	.LCOLDE31:
 3008              		.section	.text._ZN12Fl_Tree_Item4moveEPS_ii
 3009              	.LHOTE31:
 3010              		.section	.text.unlikely._ZN12Fl_Tree_Item10move_aboveEPS_,"ax",@progbits
 3011              		.align 2
 3012              	.LCOLDB32:
 3013              		.section	.text._ZN12Fl_Tree_Item10move_aboveEPS_,"ax",@progbits
 3014              	.LHOTB32:
 3015              		.align 2
 3016              		.p2align 4,,15
 3017              		.globl	_ZN12Fl_Tree_Item10move_aboveEPS_
 3019              	_ZN12Fl_Tree_Item10move_aboveEPS_:
 3020              	.LFB626:
 3021              		.loc 1 580 0
 3022              		.cfi_startproc
 3023              	.LVL360:
 3024              		.loc 1 581 0
 3025 0000 31C9     		xorl	%ecx, %ecx
 3026 0002 31D2     		xorl	%edx, %edx
 3027 0004 E9000000 		jmp	_ZN12Fl_Tree_Item4moveEPS_ii
 3027      00
 3028              	.LVL361:
 3029              		.cfi_endproc
 3030              	.LFE626:
 3032              		.section	.text.unlikely._ZN12Fl_Tree_Item10move_aboveEPS_
 3033              	.LCOLDE32:
 3034              		.section	.text._ZN12Fl_Tree_Item10move_aboveEPS_
 3035              	.LHOTE32:
 3036              		.section	.text.unlikely._ZN12Fl_Tree_Item10move_belowEPS_,"ax",@progbits
 3037              		.align 2
 3038              	.LCOLDB33:
 3039              		.section	.text._ZN12Fl_Tree_Item10move_belowEPS_,"ax",@progbits
 3040              	.LHOTB33:
 3041              		.align 2
 3042              		.p2align 4,,15
 3043              		.globl	_ZN12Fl_Tree_Item10move_belowEPS_
 3045              	_ZN12Fl_Tree_Item10move_belowEPS_:
 3046              	.LFB627:
 3047              		.loc 1 591 0
 3048              		.cfi_startproc
 3049              	.LVL362:
 3050              		.loc 1 592 0
 3051 0000 31C9     		xorl	%ecx, %ecx
 3052 0002 BA010000 		movl	$1, %edx
 3052      00
 3053 0007 E9000000 		jmp	_ZN12Fl_Tree_Item4moveEPS_ii
 3053      00
 3054              	.LVL363:
 3055              		.cfi_endproc
 3056              	.LFE627:
 3058              		.section	.text.unlikely._ZN12Fl_Tree_Item10move_belowEPS_
 3059              	.LCOLDE33:
 3060              		.section	.text._ZN12Fl_Tree_Item10move_belowEPS_
 3061              	.LHOTE33:
 3062              		.section	.text.unlikely._ZN12Fl_Tree_Item9move_intoEPS_i,"ax",@progbits
 3063              		.align 2
 3064              	.LCOLDB34:
 3065              		.section	.text._ZN12Fl_Tree_Item9move_intoEPS_i,"ax",@progbits
 3066              	.LHOTB34:
 3067              		.align 2
 3068              		.p2align 4,,15
 3069              		.globl	_ZN12Fl_Tree_Item9move_intoEPS_i
 3071              	_ZN12Fl_Tree_Item9move_intoEPS_i:
 3072              	.LFB628:
 3073              		.loc 1 602 0
 3074              		.cfi_startproc
 3075              	.LVL364:
 3076              		.loc 1 603 0
 3077 0000 89D1     		movl	%edx, %ecx
 3078 0002 BA020000 		movl	$2, %edx
 3078      00
 3079              	.LVL365:
 3080 0007 E9000000 		jmp	_ZN12Fl_Tree_Item4moveEPS_ii
 3080      00
 3081              	.LVL366:
 3082              		.cfi_endproc
 3083              	.LFE628:
 3085              		.section	.text.unlikely._ZN12Fl_Tree_Item9move_intoEPS_i
 3086              	.LCOLDE34:
 3087              		.section	.text._ZN12Fl_Tree_Item9move_intoEPS_i
 3088              	.LHOTE34:
 3089              		.section	.text.unlikely._ZN12Fl_Tree_Item12remove_childEPS_,"ax",@progbits
 3090              		.align 2
 3091              	.LCOLDB35:
 3092              		.section	.text._ZN12Fl_Tree_Item12remove_childEPS_,"ax",@progbits
 3093              	.LHOTB35:
 3094              		.align 2
 3095              		.p2align 4,,15
 3096              		.globl	_ZN12Fl_Tree_Item12remove_childEPS_
 3098              	_ZN12Fl_Tree_Item12remove_childEPS_:
 3099              	.LFB629:
 3100              		.loc 1 667 0
 3101              		.cfi_startproc
 3102              	.LVL367:
 3103 0000 8B5768   		movl	104(%rdi), %edx
 3104              	.LVL368:
 3105              		.loc 1 676 0
 3106 0003 B8FFFFFF 		movl	$-1, %eax
 3106      FF
 3107              	.LBB1135:
 3108              		.loc 1 668 0
 3109 0008 85D2     		testl	%edx, %edx
 3110 000a 7E38     		jle	.L309
 3111              	.LVL369:
 3112              	.LBE1135:
 3113              		.loc 1 667 0
 3114 000c 55       		pushq	%rbp
 3115              		.cfi_def_cfa_offset 16
 3116              		.cfi_offset 6, -16
 3117 000d 53       		pushq	%rbx
 3118              		.cfi_def_cfa_offset 24
 3119              		.cfi_offset 3, -24
 3120 000e 4883EC08 		subq	$8, %rsp
 3121              		.cfi_def_cfa_offset 32
 3122 0012 488B4760 		movq	96(%rdi), %rax
 3123              	.LVL370:
 3124              	.LBB1138:
 3125              		.loc 1 669 0
 3126 0016 483B30   		cmpq	(%rax), %rsi
 3127 0019 742B     		je	.L311
 3128 001b 4883C008 		addq	$8, %rax
 3129 001f 31DB     		xorl	%ebx, %ebx
 3130 0021 EB0F     		jmp	.L301
 3131              	.LVL371:
 3132              		.p2align 4,,10
 3133 0023 0F1F4400 		.p2align 3
 3133      00
 3134              	.L302:
 3135 0028 4883C008 		addq	$8, %rax
 3136              	.LVL372:
 3137 002c 483B70F8 		cmpq	-8(%rax), %rsi
 3138 0030 741E     		je	.L299
 3139              	.LVL373:
 3140              	.L301:
 3141              		.loc 1 668 0 discriminator 2
 3142 0032 83C301   		addl	$1, %ebx
 3143              	.LVL374:
 3144 0035 39D3     		cmpl	%edx, %ebx
 3145 0037 75EF     		jne	.L302
 3146              	.LBE1138:
 3147              		.loc 1 676 0
 3148 0039 B8FFFFFF 		movl	$-1, %eax
 3148      FF
 3149              	.LVL375:
 3150              	.L298:
 3151              		.loc 1 677 0
 3152 003e 4883C408 		addq	$8, %rsp
 3153              		.cfi_def_cfa_offset 24
 3154 0042 5B       		popq	%rbx
 3155              		.cfi_restore 3
 3156              		.cfi_def_cfa_offset 16
 3157 0043 5D       		popq	%rbp
 3158              		.cfi_restore 6
 3159              		.cfi_def_cfa_offset 8
 3160              	.L309:
 3161 0044 F3C3     		rep ret
 3162              	.LVL376:
 3163              	.L311:
 3164              		.cfi_def_cfa_offset 32
 3165              		.cfi_offset 3, -24
 3166              		.cfi_offset 6, -16
 3167              	.LBB1139:
 3168              		.loc 1 668 0
 3169 0046 31DB     		xorl	%ebx, %ebx
 3170              	.LVL377:
 3171 0048 0F1F8400 		.p2align 4,,10
 3171      00000000 
 3172              		.p2align 3
 3173              	.L299:
 3174 0050 4889FD   		movq	%rdi, %rbp
 3175              	.LVL378:
 3176              	.LBB1136:
 3177              	.LBB1137:
 3178              		.loc 1 214 0
 3179 0053 488D7E60 		leaq	96(%rsi), %rdi
 3180              	.LVL379:
 3181 0057 E8000000 		call	_ZN18Fl_Tree_Item_Array5clearEv
 3181      00
 3182              	.LVL380:
 3183              	.LBE1137:
 3184              	.LBE1136:
 3185              		.loc 1 671 0
 3186 005c 488D7D60 		leaq	96(%rbp), %rdi
 3187 0060 89DE     		movl	%ebx, %esi
 3188 0062 E8000000 		call	_ZN18Fl_Tree_Item_Array6removeEi
 3188      00
 3189              	.LVL381:
 3190              		.loc 1 673 0
 3191 0067 31C0     		xorl	%eax, %eax
 3192 0069 EBD3     		jmp	.L298
 3193              	.LBE1139:
 3194              		.cfi_endproc
 3195              	.LFE629:
 3197              		.section	.text.unlikely._ZN12Fl_Tree_Item12remove_childEPS_
 3198              	.LCOLDE35:
 3199              		.section	.text._ZN12Fl_Tree_Item12remove_childEPS_
 3200              	.LHOTE35:
 3201              		.section	.text.unlikely._ZN12Fl_Tree_Item12remove_childEPKc,"ax",@progbits
 3202              		.align 2
 3203              	.LCOLDB36:
 3204              		.section	.text._ZN12Fl_Tree_Item12remove_childEPKc,"ax",@progbits
 3205              	.LHOTB36:
 3206              		.align 2
 3207              		.p2align 4,,15
 3208              		.globl	_ZN12Fl_Tree_Item12remove_childEPKc
 3210              	_ZN12Fl_Tree_Item12remove_childEPKc:
 3211              	.LFB630:
 3212              		.loc 1 686 0
 3213              		.cfi_startproc
 3214              	.LVL382:
 3215 0000 4156     		pushq	%r14
 3216              		.cfi_def_cfa_offset 16
 3217              		.cfi_offset 14, -16
 3218 0002 4155     		pushq	%r13
 3219              		.cfi_def_cfa_offset 24
 3220              		.cfi_offset 13, -24
 3221              		.loc 1 696 0
 3222 0004 B8FFFFFF 		movl	$-1, %eax
 3222      FF
 3223              		.loc 1 686 0
 3224 0009 4154     		pushq	%r12
 3225              		.cfi_def_cfa_offset 32
 3226              		.cfi_offset 12, -32
 3227 000b 55       		pushq	%rbp
 3228              		.cfi_def_cfa_offset 40
 3229              		.cfi_offset 6, -40
 3230 000c 53       		pushq	%rbx
 3231              		.cfi_def_cfa_offset 48
 3232              		.cfi_offset 3, -48
 3233 000d 4883EC10 		subq	$16, %rsp
 3234              		.cfi_def_cfa_offset 64
 3235 0011 8B6F68   		movl	104(%rdi), %ebp
 3236              	.LVL383:
 3237              	.LBB1140:
 3238              		.loc 1 687 0
 3239 0014 85ED     		testl	%ebp, %ebp
 3240 0016 7E35     		jle	.L313
 3241 0018 4C8B7760 		movq	96(%rdi), %r14
 3242 001c 4989F4   		movq	%rsi, %r12
 3243 001f 4989FD   		movq	%rdi, %r13
 3244 0022 31DB     		xorl	%ebx, %ebx
 3245              	.LVL384:
 3246              		.p2align 4,,10
 3247 0024 0F1F4000 		.p2align 3
 3248              	.L315:
 3249              	.LBB1141:
 3250              	.LBB1142:
 3251              		.loc 1 204 0
 3252 0028 498B04DE 		movq	(%r14,%rbx,8), %rax
 3253 002c 488B38   		movq	(%rax), %rdi
 3254              	.LBE1142:
 3255              	.LBE1141:
 3256              		.loc 1 688 0
 3257 002f 4885FF   		testq	%rdi, %rdi
 3258 0032 740C     		je	.L314
 3259              	.LVL385:
 3260              		.loc 1 689 0
 3261 0034 4C89E6   		movq	%r12, %rsi
 3262 0037 E8000000 		call	strcmp
 3262      00
 3263              	.LVL386:
 3264 003c 85C0     		testl	%eax, %eax
 3265 003e 7420     		je	.L322
 3266              	.LVL387:
 3267              	.L314:
 3268 0040 4883C301 		addq	$1, %rbx
 3269              	.LVL388:
 3270              		.loc 1 687 0 discriminator 2
 3271 0044 39DD     		cmpl	%ebx, %ebp
 3272 0046 7FE0     		jg	.L315
 3273              	.LBE1140:
 3274              		.loc 1 696 0
 3275 0048 B8FFFFFF 		movl	$-1, %eax
 3275      FF
 3276              	.LVL389:
 3277              	.L313:
 3278              		.loc 1 697 0
 3279 004d 4883C410 		addq	$16, %rsp
 3280              		.cfi_remember_state
 3281              		.cfi_def_cfa_offset 48
 3282 0051 5B       		popq	%rbx
 3283              		.cfi_def_cfa_offset 40
 3284 0052 5D       		popq	%rbp
 3285              		.cfi_def_cfa_offset 32
 3286 0053 415C     		popq	%r12
 3287              		.cfi_def_cfa_offset 24
 3288 0055 415D     		popq	%r13
 3289              		.cfi_def_cfa_offset 16
 3290 0057 415E     		popq	%r14
 3291              		.cfi_def_cfa_offset 8
 3292 0059 C3       		ret
 3293              	.LVL390:
 3294 005a 660F1F44 		.p2align 4,,10
 3294      0000
 3295              		.p2align 3
 3296              	.L322:
 3297              		.cfi_restore_state
 3298              	.LBB1143:
 3299              		.loc 1 690 0
 3300 0060 498D7D60 		leaq	96(%r13), %rdi
 3301 0064 89DE     		movl	%ebx, %esi
 3302 0066 8944240C 		movl	%eax, 12(%rsp)
 3303 006a E8000000 		call	_ZN18Fl_Tree_Item_Array6removeEi
 3303      00
 3304              	.LVL391:
 3305              		.loc 1 692 0
 3306 006f 8B44240C 		movl	12(%rsp), %eax
 3307              	.LBE1143:
 3308              		.loc 1 697 0
 3309 0073 4883C410 		addq	$16, %rsp
 3310              		.cfi_def_cfa_offset 48
 3311 0077 5B       		popq	%rbx
 3312              		.cfi_def_cfa_offset 40
 3313              	.LVL392:
 3314 0078 5D       		popq	%rbp
 3315              		.cfi_def_cfa_offset 32
 3316 0079 415C     		popq	%r12
 3317              		.cfi_def_cfa_offset 24
 3318              	.LVL393:
 3319 007b 415D     		popq	%r13
 3320              		.cfi_def_cfa_offset 16
 3321              	.LVL394:
 3322 007d 415E     		popq	%r14
 3323              		.cfi_def_cfa_offset 8
 3324 007f C3       		ret
 3325              		.cfi_endproc
 3326              	.LFE630:
 3328              		.section	.text.unlikely._ZN12Fl_Tree_Item12remove_childEPKc
 3329              	.LCOLDE36:
 3330              		.section	.text._ZN12Fl_Tree_Item12remove_childEPKc
 3331              	.LHOTE36:
 3332              		.section	.text.unlikely._ZN12Fl_Tree_Item13swap_childrenEii,"ax",@progbits
 3333              		.align 2
 3334              	.LCOLDB37:
 3335              		.section	.text._ZN12Fl_Tree_Item13swap_childrenEii,"ax",@progbits
 3336              	.LHOTB37:
 3337              		.align 2
 3338              		.p2align 4,,15
 3339              		.globl	_ZN12Fl_Tree_Item13swap_childrenEii
 3341              	_ZN12Fl_Tree_Item13swap_childrenEii:
 3342              	.LFB631:
 3343              		.loc 1 705 0
 3344              		.cfi_startproc
 3345              	.LVL395:
 3346              	.LBB1144:
 3347              	.LBB1145:
  70:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
  71:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   /// Return the total items in the array, or 0 if empty.
  72:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   int total() const {
  73:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     return(_total);
  74:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
  75:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   /// Swap the two items at index positions \p ax and \p bx.
  76:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** #if FLTK_ABI_VERSION >= 10301
  77:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   // NEW -- code moved to .cxx
  78:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   void swap(int ax, int bx);
  79:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H **** #else /*FLTK_ABI_VERSION*/
  80:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   // OLD
  81:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   void swap(int ax, int bx) {
  82:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     Fl_Tree_Item *asave = _items[ax];
 3348              		.loc 3 82 0
 3349 0000 488B4F60 		movq	96(%rdi), %rcx
 3350 0004 4863F6   		movslq	%esi, %rsi
  83:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     _items[ax] = _items[bx];
 3351              		.loc 3 83 0
 3352 0007 4863D2   		movslq	%edx, %rdx
  82:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     _items[ax] = _items[bx];
 3353              		.loc 3 82 0
 3354 000a 488D04F1 		leaq	(%rcx,%rsi,8), %rax
 3355              		.loc 3 83 0
 3356 000e 488B0CD1 		movq	(%rcx,%rdx,8), %rcx
  82:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     _items[ax] = _items[bx];
 3357              		.loc 3 82 0
 3358 0012 488B30   		movq	(%rax), %rsi
 3359              	.LVL396:
 3360              		.loc 3 83 0
 3361 0015 488908   		movq	%rcx, (%rax)
  84:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     _items[bx] = asave;
 3362              		.loc 3 84 0
 3363 0018 488B4760 		movq	96(%rdi), %rax
 3364 001c 488934D0 		movq	%rsi, (%rax,%rdx,8)
 3365              	.LVL397:
 3366 0020 C3       		ret
 3367              	.LBE1145:
 3368              	.LBE1144:
 3369              		.cfi_endproc
 3370              	.LFE631:
 3372              		.section	.text.unlikely._ZN12Fl_Tree_Item13swap_childrenEii
 3373              	.LCOLDE37:
 3374              		.section	.text._ZN12Fl_Tree_Item13swap_childrenEii
 3375              	.LHOTE37:
 3376              		.section	.text.unlikely._ZN12Fl_Tree_Item13swap_childrenEPS_S0_,"ax",@progbits
 3377              		.align 2
 3378              	.LCOLDB38:
 3379              		.section	.text._ZN12Fl_Tree_Item13swap_childrenEPS_S0_,"ax",@progbits
 3380              	.LHOTB38:
 3381              		.align 2
 3382              		.p2align 4,,15
 3383              		.globl	_ZN12Fl_Tree_Item13swap_childrenEPS_S0_
 3385              	_ZN12Fl_Tree_Item13swap_childrenEPS_S0_:
 3386              	.LFB632:
 3387              		.loc 1 721 0
 3388              		.cfi_startproc
 3389              	.LVL398:
 3390 0000 448B4F68 		movl	104(%rdi), %r9d
 3391              	.LVL399:
 3392              	.LBB1146:
 3393              		.loc 1 723 0
 3394 0004 4585C9   		testl	%r9d, %r9d
 3395 0007 7E7F     		jle	.L331
 3396 0009 49C7C3FF 		movq	$-1, %r11
 3396      FFFFFF
 3397              	.LBE1146:
 3398              		.loc 1 721 0
 3399 0010 53       		pushq	%rbx
 3400              		.cfi_def_cfa_offset 16
 3401              		.cfi_offset 3, -16
 3402 0011 4C8B4760 		movq	96(%rdi), %r8
 3403              	.LBB1149:
 3404              		.loc 1 723 0
 3405 0015 31C0     		xorl	%eax, %eax
 3406 0017 4963DB   		movslq	%r11d, %rbx
 3407 001a EB12     		jmp	.L329
 3408              	.LVL400:
 3409 001c 0F1F4000 		.p2align 4,,10
 3410              		.p2align 3
 3411              	.L326:
 3412              		.loc 1 725 0
 3413 0020 4839CA   		cmpq	%rcx, %rdx
 3414 0023 7453     		je	.L337
 3415              	.LVL401:
 3416              	.L328:
 3417 0025 4883C001 		addq	$1, %rax
 3418              	.LVL402:
 3419              		.loc 1 723 0 discriminator 2
 3420 0029 4139C1   		cmpl	%eax, %r9d
 3421 002c 7E22     		jle	.L338
 3422              	.LVL403:
 3423              	.L329:
 3424              	.LBB1147:
 3425              	.LBB1148:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 3426              		.loc 3 65 0
 3427 002e 498B0CC0 		movq	(%r8,%rax,8), %rcx
 3428 0032 4189C2   		movl	%eax, %r10d
 3429              	.LVL404:
 3430              	.LBE1148:
 3431              	.LBE1147:
 3432              		.loc 1 724 0
 3433 0035 4839CE   		cmpq	%rcx, %rsi
 3434 0038 75E6     		jne	.L326
 3435              	.LVL405:
 3436              		.loc 1 724 0 is_stmt 0 discriminator 1
 3437 003a 4183FBFF 		cmpl	$-1, %r11d
 3438 003e 7543     		jne	.L327
 3439 0040 4863D8   		movslq	%eax, %rbx
 3440              	.LVL406:
 3441 0043 4883C001 		addq	$1, %rax
 3442              	.LVL407:
 3443              		.loc 1 723 0 is_stmt 1
 3444 0047 4139C1   		cmpl	%eax, %r9d
 3445 004a 7FE2     		jg	.L329
 3446              	.LVL408:
 3447 004c 0F1F4000 		.p2align 4,,10
 3448              		.p2align 3
 3449              	.L338:
 3450              	.LBE1149:
 3451              		.loc 1 727 0
 3452 0050 83FBFF   		cmpl	$-1, %ebx
 3453 0053 7439     		je	.L333
 3454 0055 4183FBFF 		cmpl	$-1, %r11d
 3455 0059 7433     		je	.L333
 3456              	.LVL409:
 3457              	.L330:
 3458              	.LBB1150:
 3459              	.LBB1151:
 3460              	.LBB1152:
  83:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     _items[bx] = asave;
 3461              		.loc 3 83 0
 3462 005b 4B8B0CD8 		movq	(%r8,%r11,8), %rcx
  82:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     _items[ax] = _items[bx];
 3463              		.loc 3 82 0
 3464 005f 498D04D8 		leaq	(%r8,%rbx,8), %rax
 3465 0063 488B10   		movq	(%rax), %rdx
 3466              	.LVL410:
  83:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****     _items[bx] = asave;
 3467              		.loc 3 83 0
 3468 0066 488908   		movq	%rcx, (%rax)
 3469              		.loc 3 84 0
 3470 0069 488B4760 		movq	96(%rdi), %rax
 3471 006d 4A8914D8 		movq	%rdx, (%rax,%r11,8)
 3472              	.LVL411:
 3473              	.LBE1152:
 3474              	.LBE1151:
 3475              	.LBE1150:
 3476              		.loc 1 729 0
 3477 0071 31C0     		xorl	%eax, %eax
 3478              		.loc 1 730 0
 3479 0073 5B       		popq	%rbx
 3480              		.cfi_remember_state
 3481              		.cfi_restore 3
 3482              		.cfi_def_cfa_offset 8
 3483              	.LVL412:
 3484 0074 C3       		ret
 3485              	.LVL413:
 3486              		.p2align 4,,10
 3487 0075 0F1F00   		.p2align 3
 3488              	.L337:
 3489              		.cfi_restore_state
 3490              	.LBB1153:
 3491              		.loc 1 725 0 discriminator 1
 3492 0078 83FBFF   		cmpl	$-1, %ebx
 3493 007b 4C63D8   		movslq	%eax, %r11
 3494 007e 74A5     		je	.L328
 3495 0080 4189DA   		movl	%ebx, %r10d
 3496              	.LVL414:
 3497              	.L327:
 3498 0083 4963DA   		movslq	%r10d, %rbx
 3499 0086 EBD3     		jmp	.L330
 3500              	.LVL415:
 3501              	.L331:
 3502              		.cfi_def_cfa_offset 8
 3503              		.cfi_restore 3
 3504              	.LBE1153:
 3505              		.loc 1 727 0
 3506 0088 B8FFFFFF 		movl	$-1, %eax
 3506      FF
 3507              		.loc 1 730 0
 3508 008d C3       		ret
 3509              	.LVL416:
 3510              	.L333:
 3511              		.cfi_def_cfa_offset 16
 3512              		.cfi_offset 3, -16
 3513              		.loc 1 727 0
 3514 008e B8FFFFFF 		movl	$-1, %eax
 3514      FF
 3515              		.loc 1 730 0
 3516 0093 5B       		popq	%rbx
 3517              		.cfi_restore 3
 3518              		.cfi_def_cfa_offset 8
 3519              	.LVL417:
 3520 0094 C3       		ret
 3521              		.cfi_endproc
 3522              	.LFE632:
 3524              		.section	.text.unlikely._ZN12Fl_Tree_Item13swap_childrenEPS_S0_
 3525              	.LCOLDE38:
 3526              		.section	.text._ZN12Fl_Tree_Item13swap_childrenEPS_S0_
 3527              	.LHOTE38:
 3528              		.section	.text.unlikely._ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs,"ax",@pr
 3529              		.align 2
 3530              	.LCOLDB39:
 3531              		.section	.text._ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs,"ax",@progbits
 3532              	.LHOTB39:
 3533              		.align 2
 3534              		.p2align 4,,15
 3535              		.globl	_ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs
 3537              	_ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs:
 3538              	.LFB633:
 3539              		.loc 1 738 0
 3540              		.cfi_startproc
 3541              	.LVL418:
 3542 0000 4155     		pushq	%r13
 3543              		.cfi_def_cfa_offset 16
 3544              		.cfi_offset 13, -16
 3545 0002 4154     		pushq	%r12
 3546              		.cfi_def_cfa_offset 24
 3547              		.cfi_offset 12, -24
 3548 0004 4D89C5   		movq	%r8, %r13
 3549 0007 55       		pushq	%rbp
 3550              		.cfi_def_cfa_offset 32
 3551              		.cfi_offset 6, -32
 3552 0008 53       		pushq	%rbx
 3553              		.cfi_def_cfa_offset 40
 3554              		.cfi_offset 3, -40
 3555 0009 4189D4   		movl	%edx, %r12d
 3556 000c 89F3     		movl	%esi, %ebx
 3557 000e 89CD     		movl	%ecx, %ebp
 3558              	.LVL419:
 3559 0010 4883EC08 		subq	$8, %rsp
 3560              		.cfi_def_cfa_offset 48
 3561              	.LBB1176:
 3562              	.LBB1177:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3563              		.loc 2 52 0
 3564 0014 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3564      000000
 3565              	.LVL420:
 3566 001b 418B702C 		movl	44(%r8), %esi
 3567              	.LVL421:
 3568 001f 488B07   		movq	(%rdi), %rax
 3569 0022 FF908800 		call	*136(%rax)
 3569      0000
 3570              	.LVL422:
 3571              	.LBE1177:
 3572              	.LBE1176:
 3573              	.LBB1178:
 3574              		.loc 1 740 0
 3575 0028 418B4530 		movl	48(%r13), %eax
 3576 002c 83F801   		cmpl	$1, %eax
 3577 002f 742F     		je	.L341
 3578 0031 83F802   		cmpl	$2, %eax
 3579 0034 7556     		jne	.L339
 3580              	.LBB1179:
 3581              	.LBB1180:
 3582              	.LBB1181:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3583              		.loc 2 223 0
 3584 0036 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3584      000000
 3585              	.LBE1181:
 3586              	.LBE1180:
 3587              		.loc 1 742 0
 3588 003d 89EA     		movl	%ebp, %edx
 3589              	.LBB1185:
 3590              	.LBB1182:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3591              		.loc 2 223 0
 3592 003f 4489E1   		movl	%r12d, %ecx
 3593              	.LBE1182:
 3594              	.LBE1185:
 3595              		.loc 1 742 0
 3596 0042 83CA01   		orl	$1, %edx
 3597              	.LVL423:
 3598              	.LBB1186:
 3599              	.LBB1183:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3600              		.loc 2 223 0
 3601 0045 89DE     		movl	%ebx, %esi
 3602 0047 4189D0   		movl	%edx, %r8d
 3603 004a 488B07   		movq	(%rdi), %rax
 3604 004d 488B4060 		movq	96(%rax), %rax
 3605              	.LBE1183:
 3606              	.LBE1186:
 3607              	.LBE1179:
 3608              	.LBE1178:
 3609              		.loc 1 757 0
 3610 0051 4883C408 		addq	$8, %rsp
 3611              		.cfi_remember_state
 3612              		.cfi_def_cfa_offset 40
 3613 0055 5B       		popq	%rbx
 3614              		.cfi_def_cfa_offset 32
 3615              	.LVL424:
 3616 0056 5D       		popq	%rbp
 3617              		.cfi_def_cfa_offset 24
 3618 0057 415C     		popq	%r12
 3619              		.cfi_def_cfa_offset 16
 3620              	.LVL425:
 3621 0059 415D     		popq	%r13
 3622              		.cfi_def_cfa_offset 8
 3623              	.LVL426:
 3624              	.LBB1189:
 3625              	.LBB1188:
 3626              	.LBB1187:
 3627              	.LBB1184:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3628              		.loc 2 223 0
 3629 005b FFE0     		jmp	*%rax
 3630              	.LVL427:
 3631 005d 0F1F00   		.p2align 4,,10
 3632              		.p2align 3
 3633              	.L341:
 3634              		.cfi_restore_state
 3635              	.LBE1184:
 3636              	.LBE1187:
 3637              	.LBE1188:
 3638              	.LBE1189:
 3639              	.LBB1190:
 3640              	.LBB1191:
 3641              	.LBB1192:
 3642              		.loc 1 748 0
 3643 0060 83CB01   		orl	$1, %ebx
 3644              	.LVL428:
 3645              		.loc 1 747 0
 3646 0063 83CD01   		orl	$1, %ebp
 3647              	.LVL429:
 3648              	.LBB1193:
 3649              		.loc 1 749 0
 3650 0066 4139DC   		cmpl	%ebx, %r12d
 3651 0069 7C21     		jl	.L339
 3652              	.LVL430:
 3653 006b 0F1F4400 		.p2align 4,,10
 3653      00
 3654              		.p2align 3
 3655              	.L346:
 3656              	.LBB1194:
 3657              	.LBB1195:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 3658              		.loc 2 147 0
 3659 0070 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3659      000000
 3660 0077 89DE     		movl	%ebx, %esi
 3661              	.LBE1195:
 3662              	.LBE1194:
 3663              		.loc 1 749 0
 3664 0079 83C302   		addl	$2, %ebx
 3665              	.LVL431:
 3666              	.LBB1197:
 3667              	.LBB1196:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 3668              		.loc 2 147 0
 3669 007c 89EA     		movl	%ebp, %edx
 3670 007e 488B07   		movq	(%rdi), %rax
 3671 0081 FF909800 		call	*152(%rax)
 3671      0000
 3672              	.LVL432:
 3673              	.LBE1196:
 3674              	.LBE1197:
 3675              		.loc 1 749 0
 3676 0087 4139DC   		cmpl	%ebx, %r12d
 3677 008a 7DE4     		jge	.L346
 3678              	.LVL433:
 3679              	.L339:
 3680              	.LBE1193:
 3681              	.LBE1192:
 3682              	.LBE1191:
 3683              	.LBE1190:
 3684              		.loc 1 757 0
 3685 008c 4883C408 		addq	$8, %rsp
 3686              		.cfi_def_cfa_offset 40
 3687 0090 5B       		popq	%rbx
 3688              		.cfi_def_cfa_offset 32
 3689 0091 5D       		popq	%rbp
 3690              		.cfi_def_cfa_offset 24
 3691 0092 415C     		popq	%r12
 3692              		.cfi_def_cfa_offset 16
 3693              	.LVL434:
 3694 0094 415D     		popq	%r13
 3695              		.cfi_def_cfa_offset 8
 3696              	.LVL435:
 3697 0096 C3       		ret
 3698              		.cfi_endproc
 3699              	.LFE633:
 3701              		.section	.text.unlikely._ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs
 3702              	.LCOLDE39:
 3703              		.section	.text._ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs
 3704              	.LHOTE39:
 3705              		.section	.text.unlikely._ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs,"ax",@prog
 3706              		.align 2
 3707              	.LCOLDB40:
 3708              		.section	.text._ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs,"ax",@progbits
 3709              	.LHOTB40:
 3710              		.align 2
 3711              		.p2align 4,,15
 3712              		.globl	_ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs
 3714              	_ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs:
 3715              	.LFB634:
 3716              		.loc 1 765 0
 3717              		.cfi_startproc
 3718              	.LVL436:
 3719 0000 4155     		pushq	%r13
 3720              		.cfi_def_cfa_offset 16
 3721              		.cfi_offset 13, -16
 3722 0002 4154     		pushq	%r12
 3723              		.cfi_def_cfa_offset 24
 3724              		.cfi_offset 12, -24
 3725 0004 4D89C5   		movq	%r8, %r13
 3726 0007 55       		pushq	%rbp
 3727              		.cfi_def_cfa_offset 32
 3728              		.cfi_offset 6, -32
 3729 0008 53       		pushq	%rbx
 3730              		.cfi_def_cfa_offset 40
 3731              		.cfi_offset 3, -40
 3732 0009 4189F4   		movl	%esi, %r12d
 3733 000c 89D3     		movl	%edx, %ebx
 3734 000e 89CD     		movl	%ecx, %ebp
 3735              	.LVL437:
 3736 0010 4883EC08 		subq	$8, %rsp
 3737              		.cfi_def_cfa_offset 48
 3738              	.LBB1220:
 3739              	.LBB1221:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3740              		.loc 2 52 0
 3741 0014 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3741      000000
 3742              	.LVL438:
 3743 001b 418B702C 		movl	44(%r8), %esi
 3744              	.LVL439:
 3745 001f 488B07   		movq	(%rdi), %rax
 3746 0022 FF908800 		call	*136(%rax)
 3746      0000
 3747              	.LVL440:
 3748              	.LBE1221:
 3749              	.LBE1220:
 3750              	.LBB1222:
 3751              		.loc 1 767 0
 3752 0028 418B4530 		movl	48(%r13), %eax
 3753 002c 83F801   		cmpl	$1, %eax
 3754 002f 7437     		je	.L350
 3755 0031 83F802   		cmpl	$2, %eax
 3756 0034 755E     		jne	.L348
 3757              	.LVL441:
 3758              	.LBB1223:
 3759              	.LBB1224:
 3760              	.LBB1225:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3761              		.loc 2 223 0
 3762 0036 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3762      000000
 3763 003d 89DA     		movl	%ebx, %edx
 3764 003f 4189E8   		movl	%ebp, %r8d
 3765 0042 4489E1   		movl	%r12d, %ecx
 3766 0045 4489E6   		movl	%r12d, %esi
 3767 0048 83CA01   		orl	$1, %edx
 3768              	.LVL442:
 3769 004b 4183C801 		orl	$1, %r8d
 3770              	.LVL443:
 3771 004f 488B07   		movq	(%rdi), %rax
 3772 0052 488B4060 		movq	96(%rax), %rax
 3773              	.LBE1225:
 3774              	.LBE1224:
 3775              	.LBE1223:
 3776              	.LBE1222:
 3777              		.loc 1 785 0
 3778 0056 4883C408 		addq	$8, %rsp
 3779              		.cfi_remember_state
 3780              		.cfi_def_cfa_offset 40
 3781 005a 5B       		popq	%rbx
 3782              		.cfi_def_cfa_offset 32
 3783 005b 5D       		popq	%rbp
 3784              		.cfi_def_cfa_offset 24
 3785 005c 415C     		popq	%r12
 3786              		.cfi_def_cfa_offset 16
 3787              	.LVL444:
 3788 005e 415D     		popq	%r13
 3789              		.cfi_def_cfa_offset 8
 3790              	.LVL445:
 3791              	.LBB1229:
 3792              	.LBB1228:
 3793              	.LBB1227:
 3794              	.LBB1226:
 223:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3795              		.loc 2 223 0
 3796 0060 FFE0     		jmp	*%rax
 3797              	.LVL446:
 3798              		.p2align 4,,10
 3799 0062 660F1F44 		.p2align 3
 3799      0000
 3800              	.L350:
 3801              		.cfi_restore_state
 3802              	.LBE1226:
 3803              	.LBE1227:
 3804              	.LBE1228:
 3805              	.LBE1229:
 3806              	.LBB1230:
 3807              	.LBB1231:
 3808              	.LBB1232:
 3809              		.loc 1 775 0
 3810 0068 83CB01   		orl	$1, %ebx
 3811              	.LVL447:
 3812              		.loc 1 776 0
 3813 006b 83CD01   		orl	$1, %ebp
 3814              	.LVL448:
 3815              	.LBB1233:
 3816              		.loc 1 777 0
 3817 006e 39EB     		cmpl	%ebp, %ebx
 3818 0070 7F22     		jg	.L348
 3819              	.LVL449:
 3820              		.p2align 4,,10
 3821 0072 660F1F44 		.p2align 3
 3821      0000
 3822              	.L355:
 3823              	.LBB1234:
 3824              	.LBB1235:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 3825              		.loc 2 147 0
 3826 0078 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3826      000000
 3827 007f 89DA     		movl	%ebx, %edx
 3828              	.LBE1235:
 3829              	.LBE1234:
 3830              		.loc 1 777 0
 3831 0081 83C302   		addl	$2, %ebx
 3832              	.LVL450:
 3833              	.LBB1237:
 3834              	.LBB1236:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 3835              		.loc 2 147 0
 3836 0084 4489E6   		movl	%r12d, %esi
 3837 0087 488B07   		movq	(%rdi), %rax
 3838 008a FF909800 		call	*152(%rax)
 3838      0000
 3839              	.LVL451:
 3840              	.LBE1236:
 3841              	.LBE1237:
 3842              		.loc 1 777 0
 3843 0090 39DD     		cmpl	%ebx, %ebp
 3844 0092 7DE4     		jge	.L355
 3845              	.LVL452:
 3846              	.L348:
 3847              	.LBE1233:
 3848              	.LBE1232:
 3849              	.LBE1231:
 3850              	.LBE1230:
 3851              		.loc 1 785 0
 3852 0094 4883C408 		addq	$8, %rsp
 3853              		.cfi_def_cfa_offset 40
 3854 0098 5B       		popq	%rbx
 3855              		.cfi_def_cfa_offset 32
 3856 0099 5D       		popq	%rbp
 3857              		.cfi_def_cfa_offset 24
 3858 009a 415C     		popq	%r12
 3859              		.cfi_def_cfa_offset 16
 3860              	.LVL453:
 3861 009c 415D     		popq	%r13
 3862              		.cfi_def_cfa_offset 8
 3863              	.LVL454:
 3864 009e C3       		ret
 3865              		.cfi_endproc
 3866              	.LFE634:
 3868              		.section	.text.unlikely._ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs
 3869              	.LCOLDE40:
 3870              		.section	.text._ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs
 3871              	.LHOTE40:
 3872              		.section	.text.unlikely._ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs,"ax",@progbits
 3873              		.align 2
 3874              	.LCOLDB41:
 3875              		.section	.text._ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs,"ax",@progbits
 3876              	.LHOTB41:
 3877              		.align 2
 3878              		.p2align 4,,15
 3879              		.globl	_ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
 3881              	_ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs:
 3882              	.LFB635:
 3883              		.loc 1 835 0
 3884              		.cfi_startproc
 3885              	.LVL455:
 3886              	.LBB1238:
 3887              	.LBB1239:
 3888              	.LBB1240:
 3889              		.loc 4 535 0
 3890 0000 807F1900 		cmpb	$0, 25(%rdi)
 3891 0004 750A     		jne	.L358
 3892              	.LBE1240:
 3893              	.LBE1239:
 3894              	.LBE1238:
 3895              		.loc 1 836 0
 3896 0006 31C0     		xorl	%eax, %eax
 3897              		.loc 1 853 0
 3898 0008 C3       		ret
 3899 0009 0F1F8000 		.p2align 4,,10
 3899      000000
 3900              		.p2align 3
 3901              	.L358:
 3902              		.loc 1 835 0
 3903 0010 4155     		pushq	%r13
 3904              		.cfi_def_cfa_offset 16
 3905              		.cfi_offset 13, -16
 3906 0012 4154     		pushq	%r12
 3907              		.cfi_def_cfa_offset 24
 3908              		.cfi_offset 12, -24
 3909 0014 4989F5   		movq	%rsi, %r13
 3910 0017 55       		pushq	%rbp
 3911              		.cfi_def_cfa_offset 32
 3912              		.cfi_offset 6, -32
 3913 0018 53       		pushq	%rbx
 3914              		.cfi_def_cfa_offset 40
 3915              		.cfi_offset 3, -40
 3916 0019 4989FC   		movq	%rdi, %r12
 3917              	.LVL456:
 3918 001c 4883EC08 		subq	$8, %rsp
 3919              		.cfi_def_cfa_offset 48
 3920              	.LBB1241:
 3921              	.LBB1242:
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 3922              		.loc 4 503 0
 3923 0020 48837F78 		cmpq	$0, 120(%rdi)
 3923      00
 3924 0025 7471     		je	.L372
 3925              	.LVL457:
 3926              	.L362:
 3927              	.LBE1242:
 3928              	.LBE1241:
 3929              	.LBB1243:
 3930              	.LBB1244:
 3931              		.loc 1 34 0
 3932 0027 418B5424 		movl	36(%r12), %edx
 3932      24
 3933 002c 418B4C24 		movl	40(%r12), %ecx
 3933      28
 3934 0031 418B7424 		movl	32(%r12), %esi
 3934      20
 3935              	.LVL458:
 3936 0036 418B7C24 		movl	28(%r12), %edi
 3936      1C
 3937              	.LVL459:
 3938 003b E8000000 		call	_ZN2Fl12event_insideEiiii
 3938      00
 3939              	.LVL460:
 3940 0040 89C2     		movl	%eax, %edx
 3941              	.LVL461:
 3942              	.LBE1244:
 3943              	.LBE1243:
 3944 0042 4C89E0   		movq	%r12, %rax
 3945              		.loc 1 841 0
 3946 0045 85D2     		testl	%edx, %edx
 3947 0047 753D     		jne	.L366
 3948              	.LVL462:
 3949              	.LBB1245:
 3950              	.LBB1246:
 3951              	.LBB1247:
 534:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: return(_visible ? 1 : 0);
 3952              		.loc 4 534 0
 3953 0049 41807C24 		cmpb	$0, 24(%r12)
 3953      1800
 3954 004f 7433     		je	.L360
 3955              	.LVL463:
 3956              	.L373:
 3957              	.LBE1247:
 3958              	.LBE1246:
 3959              	.LBE1245:
 3960              	.LBB1250:
 3961              		.loc 1 846 0 discriminator 1
 3962 0051 418B4424 		movl	104(%r12), %eax
 3962      68
 3963 0056 85C0     		testl	%eax, %eax
 3964 0058 7E2A     		jle	.L360
 3965              		.loc 1 846 0 is_stmt 0
 3966 005a 31DB     		xorl	%ebx, %ebx
 3967 005c 31ED     		xorl	%ebp, %ebp
 3968              	.LVL464:
 3969 005e 6690     		.p2align 4,,10
 3970              		.p2align 3
 3971              	.L361:
 3972              	.LBB1251:
 3973              	.LBB1252:
 3974              	.LBB1253:
  69:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 3975              		.loc 3 69 0 is_stmt 1
 3976 0060 498B4424 		movq	96(%r12), %rax
 3976      60
 3977              	.LBE1253:
 3978              	.LBE1252:
 3979              		.loc 1 848 0
 3980 0065 4C89EE   		movq	%r13, %rsi
 3981 0068 488B3C18 		movq	(%rax,%rbx), %rdi
 3982 006c E8000000 		call	_ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
 3982      00
 3983              	.LVL465:
 3984 0071 4885C0   		testq	%rax, %rax
 3985 0074 7510     		jne	.L366
 3986              	.LBE1251:
 3987              		.loc 1 846 0 discriminator 2
 3988 0076 83C501   		addl	$1, %ebp
 3989              	.LVL466:
 3990 0079 4883C308 		addq	$8, %rbx
 3991 007d 413B6C24 		cmpl	104(%r12), %ebp
 3991      68
 3992 0082 7CDC     		jl	.L361
 3993              	.LVL467:
 3994              	.L360:
 3995              	.LBE1250:
 3996              		.loc 1 836 0
 3997 0084 31C0     		xorl	%eax, %eax
 3998              	.LVL468:
 3999              	.L366:
 4000              		.loc 1 853 0
 4001 0086 4883C408 		addq	$8, %rsp
 4002              		.cfi_remember_state
 4003              		.cfi_def_cfa_offset 40
 4004 008a 5B       		popq	%rbx
 4005              		.cfi_restore 3
 4006              		.cfi_def_cfa_offset 32
 4007 008b 5D       		popq	%rbp
 4008              		.cfi_restore 6
 4009              		.cfi_def_cfa_offset 24
 4010 008c 415C     		popq	%r12
 4011              		.cfi_restore 12
 4012              		.cfi_def_cfa_offset 16
 4013              	.LVL469:
 4014 008e 415D     		popq	%r13
 4015              		.cfi_restore 13
 4016              		.cfi_def_cfa_offset 8
 4017              	.LVL470:
 4018 0090 C3       		ret
 4019              	.LVL471:
 4020              		.p2align 4,,10
 4021 0091 0F1F8000 		.p2align 3
 4021      000000
 4022              	.L372:
 4023              		.cfi_restore_state
 4024              		.loc 1 837 0
 4025 0098 807E5100 		cmpb	$0, 81(%rsi)
 4026 009c 7589     		jne	.L362
 4027              	.LVL472:
 4028              	.LBB1254:
 4029              	.LBB1249:
 4030              	.LBB1248:
 534:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: return(_visible ? 1 : 0);
 4031              		.loc 4 534 0
 4032 009e 41807C24 		cmpb	$0, 24(%r12)
 4032      1800
 4033 00a4 74DE     		je	.L360
 4034 00a6 EBA9     		jmp	.L373
 4035              	.LBE1248:
 4036              	.LBE1249:
 4037              	.LBE1254:
 4038              		.cfi_endproc
 4039              	.LFE635:
 4041              		.section	.text.unlikely._ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
 4042              	.LCOLDE41:
 4043              		.section	.text._ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
 4044              	.LHOTE41:
 4045              		.section	.text.unlikely._ZN12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs,"ax",@progbits
 4046              		.align 2
 4047              	.LCOLDB42:
 4048              		.section	.text._ZN12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs,"ax",@progbits
 4049              	.LHOTB42:
 4050              		.align 2
 4051              		.p2align 4,,15
 4052              		.globl	_ZN12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
 4054              	_ZN12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs:
 4055              	.LFB636:
 4056              		.loc 1 856 0
 4057              		.cfi_startproc
 4058              	.LVL473:
 4059              		.loc 1 859 0
 4060 0000 E9000000 		jmp	_ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
 4060      00
 4061              	.LVL474:
 4062              		.cfi_endproc
 4063              	.LFE636:
 4065              		.section	.text.unlikely._ZN12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
 4066              	.LCOLDE42:
 4067              		.section	.text._ZN12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
 4068              	.LHOTE42:
 4069              		.section	.text.unlikely._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs,"ax",@progbits
 4070              		.align 2
 4071              	.LCOLDB43:
 4072              		.section	.text._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs,"ax",@progbits
 4073              	.LHOTB43:
 4074              		.align 2
 4075              		.p2align 4,,15
 4076              		.globl	_ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs
 4078              	_ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs:
 4079              	.LFB638:
 4080              		.loc 1 912 0
 4081              		.cfi_startproc
 4082              	.LVL475:
 4083              	.LBB1255:
 4084              	.LBB1256:
 4085              	.LBB1257:
 4086              		.loc 4 535 0
 4087 0000 807F1900 		cmpb	$0, 25(%rdi)
 4088 0004 750A     		jne	.L378
 4089              	.LBE1257:
 4090              	.LBE1256:
 4091              	.LBE1255:
 4092              		.loc 1 931 0
 4093 0006 31C0     		xorl	%eax, %eax
 4094 0008 C3       		ret
 4095 0009 0F1F8000 		.p2align 4,,10
 4095      000000
 4096              		.p2align 3
 4097              	.L378:
 4098              	.LVL476:
 4099 0010 E9000000 		jmp	_ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51
 4099      00
 4100              	.LVL477:
 4101              		.cfi_endproc
 4102              	.LFE638:
 4104              		.section	.text.unlikely._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs
 4105              	.LCOLDE43:
 4106              		.section	.text._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs
 4107              	.LHOTE43:
 4108              		.section	.text.unlikely._ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi,"ax",@progbits
 4109              		.align 2
 4110              	.LCOLDB44:
 4111              		.section	.text._ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi,"ax",@progbits
 4112              	.LHOTB44:
 4113              		.align 2
 4114              		.p2align 4,,15
 4115              		.globl	_ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi
 4117              	_ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi:
 4118              	.LFB639:
 4119              		.loc 1 1292 0
 4120              		.cfi_startproc
 4121              	.LVL478:
 4122 0000 4157     		pushq	%r15
 4123              		.cfi_def_cfa_offset 16
 4124              		.cfi_offset 15, -16
 4125 0002 4156     		pushq	%r14
 4126              		.cfi_def_cfa_offset 24
 4127              		.cfi_offset 14, -24
 4128 0004 4155     		pushq	%r13
 4129              		.cfi_def_cfa_offset 32
 4130              		.cfi_offset 13, -32
 4131 0006 4154     		pushq	%r12
 4132              		.cfi_def_cfa_offset 40
 4133              		.cfi_offset 12, -40
 4134 0008 55       		pushq	%rbp
 4135              		.cfi_def_cfa_offset 48
 4136              		.cfi_offset 6, -48
 4137 0009 53       		pushq	%rbx
 4138              		.cfi_def_cfa_offset 56
 4139              		.cfi_offset 3, -56
 4140 000a 4883EC68 		subq	$104, %rsp
 4141              		.cfi_def_cfa_offset 160
 4142              	.LBB1369:
 4143              	.LBB1370:
 4144              	.LBB1371:
 4145              		.loc 4 535 0
 4146 000e 807F1900 		cmpb	$0, 25(%rdi)
 4147              	.LBE1371:
 4148              	.LBE1370:
 4149              	.LBE1369:
 4150              		.loc 1 1292 0
 4151 0012 8B8424A8 		movl	168(%rsp), %eax
 4151      000000
 4152 0019 894C2418 		movl	%ecx, 24(%rsp)
 4153 001d 4C894424 		movq	%r8, 8(%rsp)
 4153      08
 4154 0022 4C894C24 		movq	%r9, 16(%rsp)
 4154      10
 4155 0027 4C8BBC24 		movq	160(%rsp), %r15
 4155      A0000000 
 4156 002f 89442424 		movl	%eax, 36(%rsp)
 4157              	.LBB1374:
 4158              	.LBB1373:
 4159              	.LBB1372:
 4160              		.loc 4 535 0
 4161 0033 0F846502 		je	.L379
 4161      0000
 4162 0039 4189F4   		movl	%esi, %r12d
 4163 003c 488B7424 		movq	8(%rsp), %rsi
 4163      08
 4164              	.LVL479:
 4165 0041 4889FB   		movq	%rdi, %rbx
 4166 0044 4889D5   		movq	%rdx, %rbp
 4167              	.LVL480:
 4168 0047 8B4624   		movl	36(%rsi), %eax
 4169 004a 89442420 		movl	%eax, 32(%rsp)
 4170              	.LVL481:
 4171              	.LBE1372:
 4172              	.LBE1373:
 4173              	.LBE1374:
 4174              		.loc 1 1295 0
 4175 004e 03462C   		addl	44(%rsi), %eax
 4176              	.LBB1375:
 4177              	.LBB1376:
 4178 0051 4C89FE   		movq	%r15, %rsi
 4179              	.LBE1376:
 4180              	.LBE1375:
 4181 0054 89442428 		movl	%eax, 40(%rsp)
 4182              	.LVL482:
 4183              	.LBB1378:
 4184              	.LBB1377:
 4185 0058 E8000000 		call	_ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51
 4185      00
 4186              	.LVL483:
 4187              	.LBE1377:
 4188              	.LBE1378:
 4189              		.loc 1 1297 0
 4190 005d 418B7F20 		movl	32(%r15), %edi
 4191              		.loc 1 1300 0
 4192 0061 4489631C 		movl	%r12d, 28(%rbx)
 4193              		.loc 1 1301 0
 4194 0065 8B5500   		movl	0(%rbp), %edx
 4195              		.loc 1 1302 0
 4196 0068 448B5424 		movl	24(%rsp), %r10d
 4196      18
 4197              		.loc 1 1303 0
 4198 006d 894328   		movl	%eax, 40(%rbx)
 4199              		.loc 1 1297 0
 4200 0070 01C7     		addl	%eax, %edi
 4201              		.loc 1 1301 0
 4202 0072 895320   		movl	%edx, 32(%rbx)
 4203              		.loc 1 1309 0
 4204 0075 89C2     		movl	%eax, %edx
 4205              		.loc 1 1302 0
 4206 0077 44895324 		movl	%r10d, 36(%rbx)
 4207              		.loc 1 1309 0
 4208 007b C1EA1F   		shrl	$31, %edx
 4209              		.loc 1 1297 0
 4210 007e 897C2430 		movl	%edi, 48(%rsp)
 4211              	.LVL484:
 4212              		.loc 1 1309 0
 4213 0082 01C2     		addl	%eax, %edx
 4214 0084 D1FA     		sarl	%edx
 4215 0086 89542444 		movl	%edx, 68(%rsp)
 4216 008a 035500   		addl	0(%rbp), %edx
 4217 008d 89D7     		movl	%edx, %edi
 4218              	.LVL485:
 4219 008f 89542438 		movl	%edx, 56(%rsp)
 4220              	.LVL486:
 4221 0093 498B5738 		movq	56(%r15), %rdx
 4222              	.LVL487:
 4223 0097 8B5208   		movl	8(%rdx), %edx
 4224              	.LVL488:
 4225              		.loc 1 1310 0
 4226 009a 895334   		movl	%edx, 52(%rbx)
 4227              	.LVL489:
 4228              		.loc 1 1312 0
 4229 009d 418B4F1C 		movl	28(%r15), %ecx
 4230              		.loc 1 1324 0
 4231 00a1 458D0414 		leal	(%r12,%rdx), %r8d
 4232              		.loc 1 1312 0
 4233 00a5 01D1     		addl	%edx, %ecx
 4234 00a7 89CE     		movl	%ecx, %esi
 4235 00a9 C1EE1F   		shrl	$31, %esi
 4236 00ac 01F1     		addl	%esi, %ecx
 4237 00ae D1F9     		sarl	%ecx
 4238 00b0 418D4C0C 		leal	-3(%r12,%rcx), %ecx
 4238      FD
 4239 00b5 894B2C   		movl	%ecx, 44(%rbx)
 4240              	.LVL490:
 4241 00b8 498B4F38 		movq	56(%r15), %rcx
 4242              		.loc 1 1314 0
 4243 00bc 8B490C   		movl	12(%rcx), %ecx
 4244 00bf 89CE     		movl	%ecx, %esi
 4245 00c1 C1EE1F   		shrl	$31, %esi
 4246 00c4 01F1     		addl	%esi, %ecx
 4247 00c6 89FE     		movl	%edi, %esi
 4248 00c8 D1F9     		sarl	%ecx
 4249 00ca 29CE     		subl	%ecx, %esi
 4250 00cc 897330   		movl	%esi, 48(%rbx)
 4251              	.LVL491:
 4252 00cf 498B4F38 		movq	56(%r15), %rcx
 4253 00d3 8B490C   		movl	12(%rcx), %ecx
 4254              	.LVL492:
 4255              		.loc 1 1316 0
 4256 00d6 894B38   		movl	%ecx, 56(%rbx)
 4257              		.loc 1 1322 0
 4258 00d9 89D1     		movl	%edx, %ecx
 4259 00db C1E91F   		shrl	$31, %ecx
 4260 00de 01D1     		addl	%edx, %ecx
 4261 00e0 D1F9     		sarl	%ecx
 4262 00e2 418D7C0C 		leal	-1(%r12,%rcx), %edi
 4262      FF
 4263              	.LVL493:
 4264 00e7 89FE     		movl	%edi, %esi
 4265 00e9 897C2440 		movl	%edi, 64(%rsp)
 4266              	.LVL494:
 4267 00ed 418B7F1C 		movl	28(%r15), %edi
 4268              	.LVL495:
 4269              		.loc 1 1323 0
 4270 00f1 448D2C3E 		leal	(%rsi,%rdi), %r13d
 4271              	.LVL496:
 4272              		.loc 1 1324 0
 4273 00f5 4489EE   		movl	%r13d, %esi
 4274              	.LVL497:
 4275 00f8 4429C6   		subl	%r8d, %esi
 4276 00fb 4189F1   		movl	%esi, %r9d
 4277 00fe 41C1E91F 		shrl	$31, %r9d
 4278 0102 4401CE   		addl	%r9d, %esi
 4279 0105 D1FE     		sarl	%esi
 4280 0107 4401C6   		addl	%r8d, %esi
 4281 010a 89742434 		movl	%esi, 52(%rsp)
 4282              	.LVL498:
 4283              		.loc 1 1325 0
 4284 010e 89FE     		movl	%edi, %esi
 4285              	.LVL499:
 4286 0110 C1EE1F   		shrl	$31, %esi
 4287 0113 01FE     		addl	%edi, %esi
 4288 0115 D1FE     		sarl	%esi
 4289 0117 01F2     		addl	%esi, %edx
 4290              	.LVL500:
 4291              		.loc 1 1331 0
 4292 0119 4489D6   		movl	%r10d, %esi
 4293              		.loc 1 1329 0
 4294 011c 39FA     		cmpl	%edi, %edx
 4295 011e 0F4CD7   		cmovl	%edi, %edx
 4296              	.LVL501:
 4297 0121 8D4C11FF 		leal	-1(%rcx,%rdx), %ecx
 4298 0125 458D340C 		leal	(%r12,%rcx), %r14d
 4299              		.loc 1 1331 0
 4300 0129 29CE     		subl	%ecx, %esi
 4301 012b 488B4B58 		movq	88(%rbx), %rcx
 4302              		.loc 1 1329 0
 4303 012f 4489733C 		movl	%r14d, 60(%rbx)
 4304              	.LVL502:
 4305              		.loc 1 1330 0
 4306 0133 8B5500   		movl	0(%rbp), %edx
 4307              		.loc 1 1335 0
 4308 0136 4885C9   		testq	%rcx, %rcx
 4309              		.loc 1 1331 0
 4310 0139 897344   		movl	%esi, 68(%rbx)
 4311              		.loc 1 1332 0
 4312 013c 894348   		movl	%eax, 72(%rbx)
 4313              		.loc 1 1330 0
 4314 013f 895340   		movl	%edx, 64(%rbx)
 4315              	.LVL503:
 4316              		.loc 1 1335 0
 4317 0142 0F842006 		je	.L530
 4317      0000
 4318              	.L445:
 4319              	.LVL504:
 4320 0148 45037714 		addl	20(%r15), %r14d
 4321              	.LVL505:
 4322 014c 8B4908   		movl	8(%rcx), %ecx
 4323              	.LVL506:
 4324              	.L461:
 4325              		.loc 1 1339 0 discriminator 8
 4326 014f 4401F1   		addl	%r14d, %ecx
 4327              	.LVL507:
 4328 0152 48833B00 		cmpq	$0, (%rbx)
 4329 0156 0F842406 		je	.L465
 4329      0000
 4330 015c 418B7718 		movl	24(%r15), %esi
 4331              	.LVL508:
 4332              	.L383:
 4333              		.loc 1 1339 0 is_stmt 0 discriminator 4
 4334 0160 8D3C0E   		leal	(%rsi,%rcx), %edi
 4335              	.LVL509:
 4336 0163 89FE     		movl	%edi, %esi
 4337 0165 897C242C 		movl	%edi, 44(%rsp)
 4338              	.LVL510:
 4339 0169 488B7B50 		movq	80(%rbx), %rdi
 4340              	.LVL511:
 4341              	.LBB1379:
 4342              		.loc 1 1346 0 is_stmt 1 discriminator 4
 4343 016d 4885FF   		testq	%rdi, %rdi
 4344 0170 7422     		je	.L384
 4345              	.LVL512:
 4346              	.LBB1380:
 4347              		.loc 1 1371 0
 4348 0172 3B7720   		cmpl	32(%rdi), %esi
 4349 0175 8B4F28   		movl	40(%rdi), %ecx
 4350              	.LVL513:
 4351 0178 0F846205 		je	.L531
 4351      0000
 4352              	.L385:
 4353              	.LVL514:
 4354              		.loc 1 1372 0
 4355 017e 4C8B0F   		movq	(%rdi), %r9
 4356 0181 4189C0   		movl	%eax, %r8d
 4357 0184 8944241C 		movl	%eax, 28(%rsp)
 4358 0188 8B74242C 		movl	44(%rsp), %esi
 4359              	.LVL515:
 4360 018c 41FF5120 		call	*32(%r9)
 4361              	.LVL516:
 4362 0190 8B44241C 		movl	28(%rsp), %eax
 4363              	.LVL517:
 4364              	.L384:
 4365              	.LBE1380:
 4366              	.LBE1379:
 4367              		.loc 1 1375 0
 4368 0194 8B4D00   		movl	0(%rbp), %ecx
 4369 0197 01C8     		addl	%ecx, %eax
 4370 0199 3B442420 		cmpl	32(%rsp), %eax
 4371 019d 0F9CC2   		setl	%dl
 4372 01a0 394C2428 		cmpl	%ecx, 40(%rsp)
 4373 01a4 0F9CC0   		setl	%al
 4374 01a7 09C2     		orl	%eax, %edx
 4375              	.LVL518:
 4376              	.LBB1382:
 4377              	.LBB1383:
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 4378              		.loc 4 503 0
 4379 01a9 48837B78 		cmpq	$0, 120(%rbx)
 4379      00
 4380 01ae 0F847401 		je	.L386
 4380      0000
 4381              	.LBE1383:
 4382              	.LBE1382:
 4383              		.loc 1 1376 0
 4384 01b4 C644241C 		movb	$1, 28(%rsp)
 4384      01
 4385              	.L447:
 4386              	.LVL519:
 4387              	.LBB1384:
 4388              	.LBB1385:
 4389              	.LBB1386:
 4390              	.LBB1387:
 536:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case   ACTIVE: return(_active ? 1 : 0);
 4391              		.loc 4 536 0 discriminator 6
 4392 01b9 807B1A00 		cmpb	$0, 26(%rbx)
 4393 01bd 0F85ED00 		jne	.L387
 4393      0000
 4394              	.LBE1387:
 4395              	.LBE1386:
 4396              	.LBE1385:
 4397              	.LBE1384:
 4398              		.loc 1 1377 0
 4399 01c3 31C9     		xorl	%ecx, %ecx
 4400              	.LVL520:
 4401              	.LBB1388:
 4402              		.loc 1 1378 0
 4403 01c5 84D2     		testb	%dl, %dl
 4404 01c7 0F840301 		je	.L532
 4404      0000
 4405              	.LVL521:
 4406              	.L388:
 4407              	.LBE1388:
 4408              		.loc 1 1492 0
 4409 01cd 807C241C 		cmpb	$0, 28(%rsp)
 4409      00
 4410 01d2 0F854001 		jne	.L435
 4410      0000
 4411              	.LVL522:
 4412              	.L395:
 4413 01d8 8B5368   		movl	104(%rbx), %edx
 4414              	.LVL523:
 4415              	.LBB1487:
 4416              		.loc 1 1494 0
 4417 01db 85D2     		testl	%edx, %edx
 4418 01dd 0F84BB00 		je	.L379
 4418      0000
 4419              	.LVL524:
 4420              		.loc 1 1494 0 is_stmt 0 discriminator 1
 4421 01e3 807B1800 		cmpb	$0, 24(%rbx)
 4422 01e7 0F84B100 		je	.L379
 4422      0000
 4423              	.LBB1488:
 4424 01ed 31C0     		xorl	%eax, %eax
 4425              		.loc 1 1496 0 is_stmt 1
 4426 01ef 807C241C 		cmpb	$0, 28(%rsp)
 4426      00
 4427 01f4 0F859E04 		jne	.L533
 4427      0000
 4428              	.LVL525:
 4429              	.L438:
 4430              		.loc 1 1497 0 discriminator 4
 4431 01fa 8B7C2418 		movl	24(%rsp), %edi
 4432 01fe 29C7     		subl	%eax, %edi
 4433              		.loc 1 1498 0 discriminator 4
 4434 0200 8B4500   		movl	0(%rbp), %eax
 4435              	.LBB1489:
 4436              		.loc 1 1499 0 discriminator 4
 4437 0203 85D2     		testl	%edx, %edx
 4438              	.LBE1489:
 4439              		.loc 1 1497 0 discriminator 4
 4440 0205 897C2418 		movl	%edi, 24(%rsp)
 4441              	.LVL526:
 4442              		.loc 1 1498 0 discriminator 4
 4443 0209 8944241C 		movl	%eax, 28(%rsp)
 4444              	.LVL527:
 4445              	.LBB1493:
 4446              		.loc 1 1499 0 discriminator 4
 4447 020d 0F8EB804 		jle	.L439
 4447      0000
 4448              		.loc 1 1499 0 is_stmt 0
 4449 0213 4531F6   		xorl	%r14d, %r14d
 4450 0216 4989DD   		movq	%rbx, %r13
 4451 0219 4C89F3   		movq	%r14, %rbx
 4452              	.LVL528:
 4453 021c 0F1F4000 		.p2align 4,,10
 4454              		.p2align 3
 4455              	.L440:
 4456 0220 448D7301 		leal	1(%rbx), %r14d
 4457              	.LVL529:
 4458              	.LBB1490:
 4459              	.LBB1491:
 4460              	.LBB1492:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 4461              		.loc 3 65 0 is_stmt 1
 4462 0224 498B4D60 		movq	96(%r13), %rcx
 4463              	.LBE1492:
 4464              	.LBE1491:
 4465              		.loc 1 1501 0
 4466 0228 4489E6   		movl	%r12d, %esi
 4467 022b 4139D6   		cmpl	%edx, %r14d
 4468 022e 0F94C2   		sete	%dl
 4469              	.LVL530:
 4470 0231 488B3CD9 		movq	(%rcx,%rbx,8), %rdi
 4471 0235 4883C301 		addq	$1, %rbx
 4472              	.LVL531:
 4473 0239 0FB6D2   		movzbl	%dl, %edx
 4474 023c 52       		pushq	%rdx
 4475              		.cfi_def_cfa_offset 168
 4476 023d 4157     		pushq	%r15
 4477              		.cfi_def_cfa_offset 176
 4478 023f 4889EA   		movq	%rbp, %rdx
 4479 0242 4C8B4C24 		movq	32(%rsp), %r9
 4479      20
 4480 0247 4C8B4424 		movq	24(%rsp), %r8
 4480      18
 4481 024c 8B4C2428 		movl	40(%rsp), %ecx
 4482 0250 E8000000 		call	_ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi
 4482      00
 4483              	.LVL532:
 4484 0255 418B5568 		movl	104(%r13), %edx
 4485              	.LVL533:
 4486              	.LBE1490:
 4487              		.loc 1 1499 0
 4488 0259 4158     		popq	%r8
 4489              		.cfi_def_cfa_offset 168
 4490 025b 4159     		popq	%r9
 4491              		.cfi_def_cfa_offset 160
 4492 025d 4439F2   		cmpl	%r14d, %edx
 4493 0260 7FBE     		jg	.L440
 4494              	.LBE1493:
 4495              		.loc 1 1503 0
 4496 0262 85D2     		testl	%edx, %edx
 4497 0264 4C89EB   		movq	%r13, %rbx
 4498 0267 0F855304 		jne	.L534
 4498      0000
 4499              	.LVL534:
 4500              	.L441:
 4501              	.LBB1494:
 4502              		.loc 1 1506 0
 4503 026d 8B7C2424 		movl	36(%rsp), %edi
 4504 0271 85FF     		testl	%edi, %edi
 4505 0273 7529     		jne	.L379
 4506              	.LBB1495:
 4507              		.loc 1 1508 0
 4508 0275 8B7C2420 		movl	32(%rsp), %edi
 4509 0279 397C241C 		cmpl	%edi, 28(%rsp)
 4510 027d 8B4D00   		movl	0(%rbp), %ecx
 4511 0280 0F8C7A04 		jl	.L535
 4511      0000
 4512              	.L443:
 4513              		.loc 1 1508 0 is_stmt 0 discriminator 4
 4514 0286 8B442428 		movl	40(%rsp), %eax
 4515 028a 8B7C241C 		movl	28(%rsp), %edi
 4516 028e 39F8     		cmpl	%edi, %eax
 4517 0290 0F8DAA04 		jge	.L444
 4517      0000
 4518              		.loc 1 1509 0 is_stmt 1
 4519 0296 39C8     		cmpl	%ecx, %eax
 4520 0298 0F8DA204 		jge	.L444
 4520      0000
 4521              	.LVL535:
 4522              	.L379:
 4523              	.LBE1495:
 4524              	.LBE1494:
 4525              	.LBE1488:
 4526              	.LBE1487:
 4527              		.loc 1 1513 0
 4528 029e 4883C468 		addq	$104, %rsp
 4529              		.cfi_remember_state
 4530              		.cfi_def_cfa_offset 56
 4531 02a2 5B       		popq	%rbx
 4532              		.cfi_def_cfa_offset 48
 4533 02a3 5D       		popq	%rbp
 4534              		.cfi_def_cfa_offset 40
 4535 02a4 415C     		popq	%r12
 4536              		.cfi_def_cfa_offset 32
 4537 02a6 415D     		popq	%r13
 4538              		.cfi_def_cfa_offset 24
 4539 02a8 415E     		popq	%r14
 4540              		.cfi_def_cfa_offset 16
 4541 02aa 415F     		popq	%r15
 4542              		.cfi_def_cfa_offset 8
 4543 02ac C3       		ret
 4544              	.LVL536:
 4545 02ad 0F1F00   		.p2align 4,,10
 4546              		.p2align 3
 4547              	.L387:
 4548              		.cfi_restore_state
 4549              		.loc 1 1377 0
 4550 02b0 488B7C24 		movq	8(%rsp), %rdi
 4550      08
 4551 02b5 88542448 		movb	%dl, 72(%rsp)
 4552              	.LVL537:
 4553 02b9 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 4553      00
 4554              	.LVL538:
 4555 02be 0FB65424 		movzbl	72(%rsp), %edx
 4555      48
 4556 02c3 85C0     		testl	%eax, %eax
 4557 02c5 0F95C1   		setne	%cl
 4558              	.LVL539:
 4559              	.LBB1509:
 4560              		.loc 1 1378 0
 4561 02c8 84D2     		testb	%dl, %dl
 4562 02ca 0F85FDFE 		jne	.L388
 4562      FFFF
 4563              	.LVL540:
 4564              	.L532:
 4565              	.LBB1389:
 4566              	.LBB1390:
 4567              	.LBB1391:
 4568              	.LBB1392:
 537:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case SELECTED: return(_selected ? 1 : 0);
 4569              		.loc 4 537 0
 4570 02d0 807B1B00 		cmpb	$0, 27(%rbx)
 4571 02d4 746A     		je	.L536
 4572              	.LBE1392:
 4573              	.LBE1391:
 4574              	.LBE1390:
 4575              		.loc 1 1383 0
 4576 02d6 488B4424 		movq	8(%rsp), %rax
 4576      08
 4577 02db 8B7B10   		movl	16(%rbx), %edi
 4578 02de 884C2448 		movb	%cl, 72(%rsp)
 4579              	.LVL541:
 4580 02e2 8B7068   		movl	104(%rax), %esi
 4581 02e5 E8000000 		call	_Z11fl_contrastjj
 4581      00
 4582              	.LVL542:
 4583              	.LBB1393:
 4584              	.LBB1394:
 4585              	.LBB1395:
 4586              		.loc 4 537 0
 4587 02ea 807B1B00 		cmpb	$0, 27(%rbx)
 4588              	.LBE1395:
 4589              	.LBE1394:
 4590              	.LBE1393:
 4591              		.loc 1 1383 0
 4592 02ee 89442450 		movl	%eax, 80(%rsp)
 4593              	.LVL543:
 4594              	.LBB1402:
 4595              	.LBB1399:
 4596              	.LBB1396:
 4597              		.loc 4 537 0
 4598 02f2 0FB64C24 		movzbl	72(%rsp), %ecx
 4598      48
 4599 02f7 7456     		je	.L391
 4600              	.LVL544:
 4601              	.LBE1396:
 4602              	.LBE1399:
 4603              	.LBE1402:
 4604              		.loc 1 1387 0
 4605 02f9 84C9     		testb	%cl, %cl
 4606 02fb 0F842504 		je	.L392
 4606      0000
 4607 0301 488B4424 		movq	8(%rsp), %rax
 4607      08
 4608              	.LVL545:
 4609 0306 8B4068   		movl	104(%rax), %eax
 4610 0309 89442448 		movl	%eax, 72(%rsp)
 4611              	.LVL546:
 4612 030d EB50     		jmp	.L393
 4613              	.LVL547:
 4614              	.L547:
 4615 030f 488B5C24 		movq	56(%rsp), %rbx
 4615      38
 4616              	.LVL548:
 4617              		.p2align 4,,10
 4618 0314 0F1F4000 		.p2align 3
 4619              	.L435:
 4620              	.LBE1389:
 4621              	.LBE1509:
 4622              		.loc 1 1492 0
 4623 0318 8B442430 		movl	48(%rsp), %eax
 4624 031c 014500   		addl	%eax, 0(%rbp)
 4625 031f E9B4FEFF 		jmp	.L395
 4625      FF
 4626              	.LVL549:
 4627              		.p2align 4,,10
 4628 0324 0F1F4000 		.p2align 3
 4629              	.L386:
 4630              		.loc 1 1376 0
 4631 0328 41807F51 		cmpb	$0, 81(%r15)
 4631      00
 4632 032d 0F954424 		setne	28(%rsp)
 4632      1C
 4633 0332 E982FEFF 		jmp	.L447
 4633      FF
 4634              	.LVL550:
 4635 0337 660F1F84 		.p2align 4,,10
 4635      00000000 
 4635      00
 4636              		.p2align 3
 4637              	.L536:
 4638              	.LBB1510:
 4639              	.LBB1484:
 4640              		.loc 1 1383 0
 4641 0340 84C9     		testb	%cl, %cl
 4642 0342 0F84C803 		je	.L537
 4642      0000
 4643              		.loc 1 1383 0 is_stmt 0 discriminator 4
 4644 0348 8B4310   		movl	16(%rbx), %eax
 4645 034b 89442450 		movl	%eax, 80(%rsp)
 4646              	.LVL551:
 4647              	.L391:
 4648              		.loc 1 1386 0 is_stmt 1
 4649 034f 8B4314   		movl	20(%rbx), %eax
 4650              		.loc 1 1387 0
 4651 0352 83F8FF   		cmpl	$-1, %eax
 4652              		.loc 1 1386 0
 4653 0355 89442448 		movl	%eax, 72(%rsp)
 4654              		.loc 1 1387 0
 4655 0359 0F846104 		je	.L538
 4655      0000
 4656              	.L393:
 4657              	.LVL552:
 4658              	.LBB1403:
 4659              		.loc 1 1392 0 discriminator 12
 4660 035f 807C241C 		cmpb	$0, 28(%rsp)
 4660      00
 4661 0364 0F846EFE 		je	.L395
 4661      FFFF
 4662              	.LVL553:
 4663              	.LBB1404:
 4664              	.LBB1405:
 4665              		.loc 1 1393 0
 4666 036a 488B4424 		movq	8(%rsp), %rax
 4666      08
 4667 036f 0FB6406D 		movzbl	109(%rax), %eax
 4668 0373 A8FE     		testb	$-2, %al
 4669 0375 0F84BD01 		je	.L459
 4669      0000
 4670              	.LVL554:
 4671              	.LBB1406:
 4672              		.loc 1 1395 0
 4673 037b 418B4730 		movl	48(%r15), %eax
 4674 037f 85C0     		testl	%eax, %eax
 4675 0381 747D     		je	.L398
 4676              	.LVL555:
 4677              	.LBB1407:
 4678              	.LBB1408:
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 4679              		.loc 4 503 0
 4680 0383 48837B78 		cmpq	$0, 120(%rbx)
 4680      00
 4681 0388 0F84C305 		je	.L539
 4681      0000
 4682              	.LBE1408:
 4683              	.LBE1407:
 4684              		.loc 1 1399 0
 4685 038e 8B4C2438 		movl	56(%rsp), %ecx
 4686 0392 8B742440 		movl	64(%rsp), %esi
 4687 0396 4D89F8   		movq	%r15, %r8
 4688 0399 4489EA   		movl	%r13d, %edx
 4689 039c 4889DF   		movq	%rbx, %rdi
 4690 039f E8000000 		call	_ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs
 4690      00
 4691              	.LVL556:
 4692              	.L454:
 4693              		.loc 1 1401 0
 4694 03a4 8B4368   		movl	104(%rbx), %eax
 4695 03a7 85C0     		testl	%eax, %eax
 4696 03a9 0F849205 		je	.L401
 4696      0000
 4697              	.LVL557:
 4698              		.loc 1 1401 0 is_stmt 0 discriminator 1
 4699 03af 807B1800 		cmpb	$0, 24(%rbx)
 4700 03b3 0F84D105 		je	.L402
 4700      0000
 4701              		.loc 1 1402 0 is_stmt 1
 4702 03b9 8B4C2430 		movl	48(%rsp), %ecx
 4703 03bd 034D00   		addl	0(%rbp), %ecx
 4704 03c0 4D89F8   		movq	%r15, %r8
 4705 03c3 8B542438 		movl	56(%rsp), %edx
 4706 03c7 8B742434 		movl	52(%rsp), %esi
 4707 03cb 4889DF   		movq	%rbx, %rdi
 4708 03ce E8000000 		call	_ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs
 4708      00
 4709              	.LVL558:
 4710              	.LBB1409:
 4711              	.LBB1410:
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 4712              		.loc 4 503 0
 4713 03d3 48837B78 		cmpq	$0, 120(%rbx)
 4713      00
 4714 03d8 7426     		je	.L398
 4715              	.LVL559:
 4716              	.L404:
 4717              	.LBE1410:
 4718              	.LBE1409:
 4719              		.loc 1 1405 0
 4720 03da 8B742424 		movl	36(%rsp), %esi
 4721 03de 85F6     		testl	%esi, %esi
 4722 03e0 0F848605 		je	.L540
 4722      0000
 4723              		.loc 1 1405 0 is_stmt 0 discriminator 1
 4724 03e6 8B4C2438 		movl	56(%rsp), %ecx
 4725 03ea 8B5500   		movl	0(%rbp), %edx
 4726 03ed 4D89F8   		movq	%r15, %r8
 4727 03f0 8B742440 		movl	64(%rsp), %esi
 4728 03f4 4889DF   		movq	%rbx, %rdi
 4729 03f7 E8000000 		call	_ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs
 4729      00
 4730              	.LVL560:
 4731 03fc 0F1F4000 		.p2align 4,,10
 4732              		.p2align 3
 4733              	.L398:
 4734              		.loc 1 1410 0 is_stmt 1
 4735 0400 8B4368   		movl	104(%rbx), %eax
 4736 0403 85C0     		testl	%eax, %eax
 4737 0405 7433     		je	.L406
 4738              	.LVL561:
 4739 0407 41807F50 		cmpb	$0, 80(%r15)
 4739      00
 4740 040c 742C     		je	.L406
 4741              	.LVL562:
 4742              	.LBB1413:
 4743              	.LBB1414:
 4744              	.LBB1415:
 534:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: return(_visible ? 1 : 0);
 4745              		.loc 4 534 0
 4746 040e 807B1800 		cmpb	$0, 24(%rbx)
 4747 0412 0F852005 		jne	.L457
 4747      0000
 4748              	.LVL563:
 4749              	.L463:
 4750 0418 498B7F38 		movq	56(%r15), %rdi
 4751              	.LVL564:
 4752              	.L517:
 4753              	.LBE1415:
 4754              	.LBE1414:
 4755              	.LBE1413:
 4756              	.LBB1416:
 4757              	.LBB1417:
 4758              		.file 7 "fltk-1.3.4-1/FL/Fl_Image.H"
   1:fltk-1.3.4-1/FL/Fl_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_Image.H **** // "$Id: Fl_Image.H 12028 2016-10-14 16:35:44Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_Image.H **** // Image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_Image.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_Image.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Image.H ****    Fl_Image, Fl_RGB_Image classes. */
  21:fltk-1.3.4-1/FL/Fl_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_Image.H **** #ifndef Fl_Image_H
  23:fltk-1.3.4-1/FL/Fl_Image.H **** #  define Fl_Image_H
  24:fltk-1.3.4-1/FL/Fl_Image.H **** 
  25:fltk-1.3.4-1/FL/Fl_Image.H **** #  include "Enumerations.H"
  26:fltk-1.3.4-1/FL/Fl_Image.H **** #include <stdlib.h>
  27:fltk-1.3.4-1/FL/Fl_Image.H **** 
  28:fltk-1.3.4-1/FL/Fl_Image.H **** class Fl_Widget;
  29:fltk-1.3.4-1/FL/Fl_Image.H **** class Fl_Pixmap;
  30:fltk-1.3.4-1/FL/Fl_Image.H **** struct Fl_Menu_Item;
  31:fltk-1.3.4-1/FL/Fl_Image.H **** struct Fl_Label;
  32:fltk-1.3.4-1/FL/Fl_Image.H **** 
  33:fltk-1.3.4-1/FL/Fl_Image.H **** 
  34:fltk-1.3.4-1/FL/Fl_Image.H **** /** \enum Fl_RGB_Scaling
  35:fltk-1.3.4-1/FL/Fl_Image.H ****  The scaling algorithm to use for RGB images.
  36:fltk-1.3.4-1/FL/Fl_Image.H **** */
  37:fltk-1.3.4-1/FL/Fl_Image.H **** enum Fl_RGB_Scaling {
  38:fltk-1.3.4-1/FL/Fl_Image.H ****   FL_RGB_SCALING_NEAREST = 0, ///< default RGB image scaling algorithm
  39:fltk-1.3.4-1/FL/Fl_Image.H ****   FL_RGB_SCALING_BILINEAR     ///< more accurate, but slower RGB image scaling algorithm
  40:fltk-1.3.4-1/FL/Fl_Image.H **** };
  41:fltk-1.3.4-1/FL/Fl_Image.H **** 
  42:fltk-1.3.4-1/FL/Fl_Image.H **** 
  43:fltk-1.3.4-1/FL/Fl_Image.H **** /**
  44:fltk-1.3.4-1/FL/Fl_Image.H ****  \brief Base class for image caching and drawing.
  45:fltk-1.3.4-1/FL/Fl_Image.H ****  
  46:fltk-1.3.4-1/FL/Fl_Image.H ****  Fl_Image is the base class used for caching and drawing all kinds of images 
  47:fltk-1.3.4-1/FL/Fl_Image.H ****  in FLTK. This class keeps track of common image data such as the pixels, 
  48:fltk-1.3.4-1/FL/Fl_Image.H ****  colormap, width, height, and depth. Virtual methods are used to provide 
  49:fltk-1.3.4-1/FL/Fl_Image.H ****  type-specific image handling.
  50:fltk-1.3.4-1/FL/Fl_Image.H ****   
  51:fltk-1.3.4-1/FL/Fl_Image.H ****  Since the Fl_Image class does not support image
  52:fltk-1.3.4-1/FL/Fl_Image.H ****  drawing by itself, calling the draw() method results in
  53:fltk-1.3.4-1/FL/Fl_Image.H ****  a box with an X in it being drawn instead.
  54:fltk-1.3.4-1/FL/Fl_Image.H **** */
  55:fltk-1.3.4-1/FL/Fl_Image.H **** class FL_EXPORT Fl_Image {
  56:fltk-1.3.4-1/FL/Fl_Image.H ****     
  57:fltk-1.3.4-1/FL/Fl_Image.H **** public:
  58:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_NO_IMAGE    = -1;
  59:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_FILE_ACCESS = -2;
  60:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_FORMAT      = -3;
  61:fltk-1.3.4-1/FL/Fl_Image.H ****     
  62:fltk-1.3.4-1/FL/Fl_Image.H **** private:
  63:fltk-1.3.4-1/FL/Fl_Image.H ****   int w_, h_, d_, ld_, count_;
  64:fltk-1.3.4-1/FL/Fl_Image.H ****   const char * const *data_;
  65:fltk-1.3.4-1/FL/Fl_Image.H ****   static Fl_RGB_Scaling RGB_scaling_;
  66:fltk-1.3.4-1/FL/Fl_Image.H **** 
  67:fltk-1.3.4-1/FL/Fl_Image.H ****   // Forbid use of copy constructor and assign operator
  68:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image & operator=(const Fl_Image &);
  69:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image(const Fl_Image &);
  70:fltk-1.3.4-1/FL/Fl_Image.H **** 
  71:fltk-1.3.4-1/FL/Fl_Image.H **** protected:
  72:fltk-1.3.4-1/FL/Fl_Image.H **** 
  73:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  74:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image width in pixels.
  75:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   void w(int W) {w_ = W;}
  77:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  78:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image height in pixels.
  79:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   void h(int H) {h_ = H;}
  81:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image depth.
  83:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   void d(int D) {d_ = D;}
  85:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  86:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current line data size in bytes.
  87:fltk-1.3.4-1/FL/Fl_Image.H **** 
  88:fltk-1.3.4-1/FL/Fl_Image.H ****    Color images may contain extra data that is included after every
  89:fltk-1.3.4-1/FL/Fl_Image.H ****    line of color image data and is normally not present.
  90:fltk-1.3.4-1/FL/Fl_Image.H **** 
  91:fltk-1.3.4-1/FL/Fl_Image.H ****    If \p LD is zero, then line data size is assumed to be w() * d() bytes.
  92:fltk-1.3.4-1/FL/Fl_Image.H **** 
  93:fltk-1.3.4-1/FL/Fl_Image.H ****    If \p LD is non-zero, then it must be positive and larger than w() * d()
  94:fltk-1.3.4-1/FL/Fl_Image.H ****    to account for the extra data per line.
  95:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  96:fltk-1.3.4-1/FL/Fl_Image.H ****   void ld(int LD) {ld_ = LD;}
  97:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
  98:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current array pointer and count of pointers in the array.
  99:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 100:fltk-1.3.4-1/FL/Fl_Image.H ****   void data(const char * const *p, int c) {data_ = p; count_ = c;}
 101:fltk-1.3.4-1/FL/Fl_Image.H ****   void draw_empty(int X, int Y);
 102:fltk-1.3.4-1/FL/Fl_Image.H **** 
 103:fltk-1.3.4-1/FL/Fl_Image.H ****   static void labeltype(const Fl_Label *lo, int lx, int ly, int lw, int lh, Fl_Align la);
 104:fltk-1.3.4-1/FL/Fl_Image.H ****   static void measure(const Fl_Label *lo, int &lw, int &lh);
 105:fltk-1.3.4-1/FL/Fl_Image.H **** 
 106:fltk-1.3.4-1/FL/Fl_Image.H **** public:
 107:fltk-1.3.4-1/FL/Fl_Image.H **** 
 108:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
 109:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image width in pixels.
 110:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 111:fltk-1.3.4-1/FL/Fl_Image.H ****   int w() const {return w_;}
 112:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 113:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image height in pixels.
 114:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 115:fltk-1.3.4-1/FL/Fl_Image.H ****   int h() const {return h_;}
 116:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 117:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image depth.
 118:fltk-1.3.4-1/FL/Fl_Image.H ****    The return value will be 0 for bitmaps, 1 for
 119:fltk-1.3.4-1/FL/Fl_Image.H ****    pixmaps, and 1 to 4 for color images.</P>
 120:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 121:fltk-1.3.4-1/FL/Fl_Image.H ****   int d() const {return d_;}
 122:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 123:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current line data size in bytes.
 124:fltk-1.3.4-1/FL/Fl_Image.H ****    \see ld(int)
 125:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 126:fltk-1.3.4-1/FL/Fl_Image.H ****   int ld() const {return ld_;}
 127:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 128:fltk-1.3.4-1/FL/Fl_Image.H ****    The count() method returns the number of data values
 129:fltk-1.3.4-1/FL/Fl_Image.H ****    associated with the image. The value will be 0 for images with
 130:fltk-1.3.4-1/FL/Fl_Image.H ****    no associated data, 1 for bitmap and color images, and greater
 131:fltk-1.3.4-1/FL/Fl_Image.H ****    than 2 for pixmap images.
 132:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 133:fltk-1.3.4-1/FL/Fl_Image.H ****   int count() const {return count_;}
 134:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 135:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns a pointer to the current image data array.
 136:fltk-1.3.4-1/FL/Fl_Image.H ****    Use the count() method to find the size of the data array.
 137:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 138:fltk-1.3.4-1/FL/Fl_Image.H ****   const char * const *data() const {return data_;}
 139:fltk-1.3.4-1/FL/Fl_Image.H ****   int fail();
 140:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image(int W, int H, int D);
 141:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual ~Fl_Image();
 142:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual Fl_Image *copy(int W, int H);
 143:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 144:fltk-1.3.4-1/FL/Fl_Image.H ****    The copy() method creates a copy of the specified
 145:fltk-1.3.4-1/FL/Fl_Image.H ****    image. If the width and height are provided, the image is
 146:fltk-1.3.4-1/FL/Fl_Image.H ****    resized to the specified size. The image should be deleted (or in
 147:fltk-1.3.4-1/FL/Fl_Image.H ****    the case of Fl_Shared_Image, released) when you are done
 148:fltk-1.3.4-1/FL/Fl_Image.H ****    with it.
 149:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 150:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image *copy() { return copy(w(), h()); }
 151:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void color_average(Fl_Color c, float i);
 152:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 153:fltk-1.3.4-1/FL/Fl_Image.H ****    The inactive() method calls
 154:fltk-1.3.4-1/FL/Fl_Image.H ****    color_average(FL_BACKGROUND_COLOR, 0.33f) to produce
 155:fltk-1.3.4-1/FL/Fl_Image.H ****    an image that appears grayed out.
 156:fltk-1.3.4-1/FL/Fl_Image.H **** 
 157:fltk-1.3.4-1/FL/Fl_Image.H ****    An internal copy is made of the original image before
 158:fltk-1.3.4-1/FL/Fl_Image.H ****    changes are applied, to avoid modifying the original image.
 159:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 160:fltk-1.3.4-1/FL/Fl_Image.H ****   void inactive() { color_average(FL_GRAY, .33f); }
 161:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void desaturate();
 162:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void label(Fl_Widget*w);
 163:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void label(Fl_Menu_Item*m);
 164:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 165:fltk-1.3.4-1/FL/Fl_Image.H ****    Draws the image with a bounding box.
 166:fltk-1.3.4-1/FL/Fl_Image.H ****    Arguments <tt>X,Y,W,H</tt> specify
 167:fltk-1.3.4-1/FL/Fl_Image.H ****    a bounding box for the image, with the origin        
 168:fltk-1.3.4-1/FL/Fl_Image.H ****    (upper-left corner) of the image offset by the \c cx
 169:fltk-1.3.4-1/FL/Fl_Image.H ****    and \c cy arguments.
 170:fltk-1.3.4-1/FL/Fl_Image.H ****    
 171:fltk-1.3.4-1/FL/Fl_Image.H ****    In other words:  <tt>fl_push_clip(X,Y,W,H)</tt> is applied,
 172:fltk-1.3.4-1/FL/Fl_Image.H ****    the image is drawn with its upper-left corner at <tt>X-cx,Y-cy</tt> and its own width and height
 173:fltk-1.3.4-1/FL/Fl_Image.H ****    <tt>fl_pop_clip</tt><tt>()</tt> is applied.
 174:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 175:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void draw(int X, int Y, int W, int H, int cx=0, int cy=0); // platform dependent
 176:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 177:fltk-1.3.4-1/FL/Fl_Image.H ****    Draws the image.
 178:fltk-1.3.4-1/FL/Fl_Image.H ****    This form specifies the upper-lefthand corner of the image.
 179:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 180:fltk-1.3.4-1/FL/Fl_Image.H ****   void draw(int X, int Y) {draw(X, Y, w(), h(), 0, 0);} // platform dependent
 4759              		.loc 7 180 0
 4760 041c 488B07   		movq	(%rdi), %rax
 4761 041f 4883EC08 		subq	$8, %rsp
 4762              		.cfi_def_cfa_offset 168
 4763 0423 8B4F08   		movl	8(%rdi), %ecx
 4764 0426 8B5330   		movl	48(%rbx), %edx
 4765 0429 8B732C   		movl	44(%rbx), %esi
 4766 042c 4531C9   		xorl	%r9d, %r9d
 4767 042f 6A00     		pushq	$0
 4768              		.cfi_def_cfa_offset 176
 4769              	.LVL565:
 4770 0431 448B470C 		movl	12(%rdi), %r8d
 4771 0435 FF5038   		call	*56(%rax)
 4772              	.LVL566:
 4773 0438 5A       		popq	%rdx
 4774              		.cfi_def_cfa_offset 168
 4775 0439 59       		popq	%rcx
 4776              		.cfi_def_cfa_offset 160
 4777              	.LVL567:
 4778              	.L406:
 4779              	.LBE1417:
 4780              	.LBE1416:
 4781              		.loc 1 1429 0
 4782 043a 488B4424 		movq	8(%rsp), %rax
 4782      08
 4783 043f 8B7C2448 		movl	72(%rsp), %edi
 4784 0443 3B7864   		cmpl	100(%rax), %edi
 4785 0446 0F84D604 		je	.L541
 4785      0000
 4786              	.LVL568:
 4787              	.LBB1418:
 4788              	.LBB1419:
 4789              	.LBB1420:
 4790              		.loc 4 537 0
 4791 044c 807B1B00 		cmpb	$0, 27(%rbx)
 4792 0450 0F843103 		je	.L542
 4792      0000
 4793              	.LVL569:
 4794              	.L410:
 4795              	.LBE1420:
 4796              	.LBE1419:
 4797              	.LBE1418:
 4798              		.loc 1 1431 0
 4799 0456 8B4B44   		movl	68(%rbx), %ecx
 4800 0459 8B5340   		movl	64(%rbx), %edx
 4801 045c 8B733C   		movl	60(%rbx), %esi
 4802 045f 418B7F58 		movl	88(%r15), %edi
 4803 0463 448B4C24 		movl	72(%rsp), %r9d
 4803      48
 4804 0468 448B4348 		movl	72(%rbx), %r8d
 4805 046c E8000000 		call	_Z11fl_draw_box10Fl_Boxtypeiiiij
 4805      00
 4806              	.LVL570:
 4807              	.L458:
 4808 0471 488B7B50 		movq	80(%rbx), %rdi
 4809              	.LVL571:
 4810              		.loc 1 1436 0
 4811 0475 4885FF   		testq	%rdi, %rdi
 4812 0478 740A     		je	.L411
 4813              	.LVL572:
 4814              		.loc 1 1436 0 is_stmt 0 discriminator 1
 4815 047a BE800000 		movl	$128, %esi
 4815      00
 4816 047f E8000000 		call	_ZN9Fl_Widget6damageEh
 4816      00
 4817              	.LVL573:
 4818              	.L411:
 4819 0484 488B7B58 		movq	88(%rbx), %rdi
 4820              	.LVL574:
 4821              	.LBB1421:
 4822              		.loc 1 1452 0 is_stmt 1
 4823 0488 4885FF   		testq	%rdi, %rdi
 4824 048b 0F847F04 		je	.L543
 4824      0000
 4825              	.L518:
 4826              	.LVL575:
 4827 0491 448B470C 		movl	12(%rdi), %r8d
 4828              	.LVL576:
 4829              	.LBB1422:
 4830              	.LBB1423:
 4831              	.LBB1424:
 4832              	.LBB1425:
 4833              		.loc 7 180 0
 4834 0495 8B542438 		movl	56(%rsp), %edx
 4835 0499 4883EC08 		subq	$8, %rsp
 4836              		.cfi_def_cfa_offset 168
 4837 049d 8B4F08   		movl	8(%rdi), %ecx
 4838 04a0 4489F6   		movl	%r14d, %esi
 4839 04a3 4531C9   		xorl	%r9d, %r9d
 4840 04a6 4489C0   		movl	%r8d, %eax
 4841 04a9 D1F8     		sarl	%eax
 4842 04ab 29C2     		subl	%eax, %edx
 4843              	.LVL577:
 4844 04ad 488B07   		movq	(%rdi), %rax
 4845 04b0 6A00     		pushq	$0
 4846              		.cfi_def_cfa_offset 176
 4847 04b2 FF5038   		call	*56(%rax)
 4848              	.LVL578:
 4849 04b5 415E     		popq	%r14
 4850              		.cfi_def_cfa_offset 168
 4851              	.LVL579:
 4852 04b7 58       		popq	%rax
 4853              		.cfi_def_cfa_offset 160
 4854              	.LVL580:
 4855              	.L415:
 4856              	.LBE1425:
 4857              	.LBE1424:
 4858              	.LBE1423:
 4859              	.LBE1422:
 4860              	.LBE1421:
 4861              	.LBB1427:
 4862              		.loc 1 1468 0
 4863 04b8 48833B00 		cmpq	$0, (%rbx)
 4864 04bc 747A     		je	.L459
 4865 04be 488B7350 		movq	80(%rbx), %rsi
 4866              	.LVL581:
 4867              		.loc 1 1468 0 is_stmt 0 discriminator 1
 4868 04c2 4885F6   		testq	%rsi, %rsi
 4869 04c5 757A     		jne	.L417
 4870              	.LVL582:
 4871              	.LBB1428:
 4872              	.LBB1429:
 4873              	.LBB1430:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 4874              		.loc 2 52 0 is_stmt 1
 4875 04c7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4875      000000
 4876 04ce 8B742450 		movl	80(%rsp), %esi
 4877 04d2 488B07   		movq	(%rdi), %rax
 4878 04d5 FF908800 		call	*136(%rax)
 4878      0000
 4879              	.LVL583:
 4880              	.LBE1430:
 4881              	.LBE1429:
 4882              	.LBB1431:
 4883              	.LBB1432:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 4884              		.loc 2 509 0
 4885 04db 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4885      000000
 4886 04e2 8B7308   		movl	8(%rbx), %esi
 4887 04e5 8B530C   		movl	12(%rbx), %edx
 4888 04e8 488B07   		movq	(%rdi), %rax
 4889 04eb FF90B001 		call	*432(%rax)
 4889      0000
 4890              	.LVL584:
 4891              	.LBE1432:
 4892              	.LBE1431:
 4893              		.loc 1 1473 0
 4894 04f1 8B430C   		movl	12(%rbx), %eax
 4895 04f4 8B4C2444 		movl	68(%rsp), %ecx
 4896 04f8 034D00   		addl	0(%rbp), %ecx
 4897              	.LBB1433:
 4898              	.LBB1434:
 4899              		.loc 2 533 0
 4900 04fb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4900      000000
 4901              	.LBE1434:
 4902              	.LBE1433:
 4903              		.loc 1 1473 0
 4904 0502 89C2     		movl	%eax, %edx
 4905 0504 C1EA1F   		shrl	$31, %edx
 4906 0507 01D0     		addl	%edx, %eax
 4907 0509 D1F8     		sarl	%eax
 4908 050b 448D2C01 		leal	(%rcx,%rax), %r13d
 4909              	.LVL585:
 4910              	.LBB1436:
 4911              	.LBB1435:
 4912              		.loc 2 533 0
 4913 050f 488B07   		movq	(%rdi), %rax
 4914 0512 FF90D801 		call	*472(%rax)
 4914      0000
 4915              	.LVL586:
 4916              	.LBE1435:
 4917              	.LBE1436:
 4918              		.loc 1 1474 0
 4919 0518 89C2     		movl	%eax, %edx
 4920 051a 8B74242C 		movl	44(%rsp), %esi
 4921 051e 488B3B   		movq	(%rbx), %rdi
 4922 0521 C1EA1F   		shrl	$31, %edx
 4923 0524 01D0     		addl	%edx, %eax
 4924              	.LVL587:
 4925 0526 4489EA   		movl	%r13d, %edx
 4926 0529 D1F8     		sarl	%eax
 4927 052b 29C2     		subl	%eax, %edx
 4928 052d E8000000 		call	_Z7fl_drawPKcii
 4928      00
 4929              	.LVL588:
 4930              		.p2align 4,,10
 4931 0532 660F1F44 		.p2align 3
 4931      0000
 4932              	.L459:
 4933 0538 488B7350 		movq	80(%rbx), %rsi
 4934              	.LVL589:
 4935              	.LBE1428:
 4936              	.LBE1427:
 4937              	.LBE1406:
 4938              	.LBE1405:
 4939              		.loc 1 1478 0
 4940 053c 4885F6   		testq	%rsi, %rsi
 4941 053f 7420     		je	.L418
 4942              	.LVL590:
 4943              	.L417:
 4944              		.loc 1 1479 0
 4945 0541 4C8B7424 		movq	8(%rsp), %r14
 4945      08
 4946 0546 4C89F7   		movq	%r14, %rdi
 4947 0549 E8000000 		call	_ZNK8Fl_Group10draw_childER9Fl_Widget
 4947      00
 4948              	.LVL591:
 4949 054e 488B7350 		movq	80(%rbx), %rsi
 4950              	.LVL592:
 4951              		.loc 1 1480 0
 4952 0552 48837E30 		cmpq	$0, 48(%rsi)
 4952      00
 4953 0557 7408     		je	.L418
 4954              	.LVL593:
 4955              		.loc 1 1481 0
 4956 0559 4C89F7   		movq	%r14, %rdi
 4957 055c E8000000 		call	_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
 4957      00
 4958              	.LVL594:
 4959              	.L418:
 4960              		.loc 1 1486 0
 4961 0561 483B5C24 		cmpq	16(%rsp), %rbx
 4961      10
 4962 0566 0F85ACFD 		jne	.L435
 4962      FFFF
 4963              	.LBB1446:
 4964              	.LBB1447:
 4965              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
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
 4966              		.loc 8 1195 0
 4967 056c BF010000 		movl	$1, %edi
 4967      00
 4968 0571 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 4968      00
 4969              	.LVL595:
 4970              	.LBE1447:
 4971              	.LBE1446:
 4972              		.loc 1 1484 0
 4973 0576 84C0     		testb	%al, %al
 4974 0578 0F849AFD 		je	.L435
 4974      FFFF
 4975              		.loc 1 1485 0
 4976 057e 488B4424 		movq	8(%rsp), %rax
 4976      08
 4977 0583 483B0500 		cmpq	_ZN2Fl6focus_E(%rip), %rax
 4977      000000
 4978 058a 0F8588FD 		jne	.L435
 4978      FFFF
 4979              	.LVL596:
 4980              		.loc 1 1486 0 discriminator 3
 4981 0590 458B6F5C 		movl	92(%r15), %r13d
 4982 0594 4585ED   		testl	%r13d, %r13d
 4983 0597 0F847BFD 		je	.L435
 4983      FFFF
 4984              		.loc 1 1488 0
 4985 059d 8B4348   		movl	72(%rbx), %eax
 4986              	.LBB1448:
 4987              	.LBB1449:
 4988              	.LBB1450:
 4989              	.LBB1451:
 4990              		.loc 8 1195 0
 4991 05a0 BF010000 		movl	$1, %edi
 4991      00
 4992              	.LBE1451:
 4993              	.LBE1450:
 4994              	.LBE1449:
 4995              	.LBE1448:
 4996              		.loc 1 1488 0
 4997 05a5 448B7340 		movl	64(%rbx), %r14d
 4998 05a9 448B6B3C 		movl	60(%rbx), %r13d
 4999              	.LVL597:
 5000 05ad 89442444 		movl	%eax, 68(%rsp)
 5001              	.LVL598:
 5002 05b1 8B4344   		movl	68(%rbx), %eax
 5003 05b4 89442458 		movl	%eax, 88(%rsp)
 5004              	.LVL599:
 5005              	.LBB1473:
 5006              	.LBB1470:
 5007              	.LBB1453:
 5008              	.LBB1452:
 5009              		.loc 8 1195 0
 5010 05b8 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionE
 5010      00
 5011              	.LVL600:
 5012              	.LBE1452:
 5013              	.LBE1453:
 5014              		.loc 1 864 0
 5015 05bd 84C0     		testb	%al, %al
 5016 05bf 0F8453FD 		je	.L435
 5016      FFFF
 5017              		.loc 1 875 0
 5018 05c5 8B742448 		movl	72(%rsp), %esi
 5019 05c9 8B7C2450 		movl	80(%rsp), %edi
 5020 05cd E8000000 		call	_Z11fl_contrastjj
 5020      00
 5021              	.LVL601:
 5022              	.LBB1454:
 5023              	.LBB1455:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5024              		.loc 2 52 0
 5025 05d2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5025      000000
 5026 05d9 89C6     		movl	%eax, %esi
 5027 05db 488B17   		movq	(%rdi), %rdx
 5028 05de FF928800 		call	*136(%rdx)
 5028      0000
 5029              	.LVL602:
 5030              	.LBE1455:
 5031              	.LBE1454:
 5032              		.loc 1 891 0
 5033 05e4 31FF     		xorl	%edi, %edi
 5034 05e6 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 5034      00
 5035              	.LVL603:
 5036 05eb 418D4405 		leal	1(%r13,%rax), %eax
 5036      01
 5037              		.loc 1 892 0
 5038 05f0 31FF     		xorl	%edi, %edi
 5039              		.loc 1 891 0
 5040 05f2 4189C5   		movl	%eax, %r13d
 5041              	.LVL604:
 5042 05f5 8944242C 		movl	%eax, 44(%rsp)
 5043              	.LVL605:
 5044              		.loc 1 892 0
 5045 05f9 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 5045      00
 5046              	.LVL606:
 5047 05fe 418D4406 		leal	1(%r14,%rax), %eax
 5047      01
 5048              		.loc 1 893 0
 5049 0603 31FF     		xorl	%edi, %edi
 5050              		.loc 1 892 0
 5051 0605 89442438 		movl	%eax, 56(%rsp)
 5052              	.LVL607:
 5053              		.loc 1 893 0
 5054 0609 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 5054      00
 5055              	.LVL608:
 5056 060e 8B7C2458 		movl	88(%rsp), %edi
 5057 0612 29C7     		subl	%eax, %edi
 5058 0614 448D47FD 		leal	-3(%rdi), %r8d
 5059              		.loc 1 894 0
 5060 0618 31FF     		xorl	%edi, %edi
 5061              		.loc 1 893 0
 5062 061a 44894424 		movl	%r8d, 72(%rsp)
 5062      48
 5063              	.LVL609:
 5064              		.loc 1 894 0
 5065 061f E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 5065      00
 5066              	.LVL610:
 5067 0624 8B7C2444 		movl	68(%rsp), %edi
 5068              		.loc 1 896 0
 5069 0628 448B4424 		movl	72(%rsp), %r8d
 5069      48
 5070              		.loc 1 894 0
 5071 062d 29C7     		subl	%eax, %edi
 5072 062f 89F8     		movl	%edi, %eax
 5073 0631 83E803   		subl	$3, %eax
 5074              		.loc 1 896 0
 5075 0634 4585C0   		testl	%r8d, %r8d
 5076              		.loc 1 894 0
 5077 0637 89442444 		movl	%eax, 68(%rsp)
 5078              	.LVL611:
 5079              		.loc 1 896 0
 5080 063b 0F8E6703 		jle	.L422
 5080      0000
 5081 0641 418D4001 		leal	1(%r8), %eax
 5082              	.LVL612:
 5083 0645 41BE0100 		movl	$1, %r14d
 5083      0000
 5084              	.LBB1456:
 5085              	.LBB1457:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 5086              		.loc 2 147 0
 5087 064b 48895C24 		movq	%rbx, 80(%rsp)
 5087      50
 5088              	.LVL613:
 5089 0650 458D6DFF 		leal	-1(%r13), %r13d
 5090              	.LVL614:
 5091 0654 89C3     		movl	%eax, %ebx
 5092              	.LVL615:
 5093 0656 4889E8   		movq	%rbp, %rax
 5094 0659 4489F5   		movl	%r14d, %ebp
 5095              	.LVL616:
 5096 065c 4989C6   		movq	%rax, %r14
 5097 065f EB12     		jmp	.L424
 5098              	.LVL617:
 5099              		.p2align 4,,10
 5100 0661 0F1F8000 		.p2align 3
 5100      000000
 5101              	.L423:
 5102              	.LBE1457:
 5103              	.LBE1456:
 5104              		.loc 1 896 0
 5105 0668 83C501   		addl	$1, %ebp
 5106              	.LVL618:
 5107 066b 39DD     		cmpl	%ebx, %ebp
 5108 066d 0F845E01 		je	.L544
 5108      0000
 5109              	.LVL619:
 5110              	.L424:
 5111 0673 40F6C501 		testb	$1, %bpl
 5112 0677 74EF     		je	.L423
 5113              	.LVL620:
 5114              	.LBB1459:
 5115              	.LBB1458:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 5116              		.loc 2 147 0
 5117 0679 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5117      000000
 5118 0680 418D742D 		leal	0(%r13,%rbp), %esi
 5118      00
 5119 0685 8B542438 		movl	56(%rsp), %edx
 5120 0689 4C8B07   		movq	(%rdi), %r8
 5121 068c 41FF9098 		call	*152(%r8)
 5121      000000
 5122              	.LVL621:
 5123 0693 EBD3     		jmp	.L423
 5124              	.LVL622:
 5125              		.p2align 4,,10
 5126 0695 0F1F00   		.p2align 3
 5127              	.L533:
 5128              	.LBE1458:
 5129              	.LBE1459:
 5130              	.LBE1470:
 5131              	.LBE1473:
 5132              	.LBE1404:
 5133              	.LBE1403:
 5134              	.LBE1484:
 5135              	.LBE1510:
 5136              	.LBB1511:
 5137              	.LBB1504:
 5138              		.loc 1 1496 0 discriminator 1
 5139 0698 8B4334   		movl	52(%rbx), %eax
 5140 069b 89C1     		movl	%eax, %ecx
 5141 069d C1E91F   		shrl	$31, %ecx
 5142 06a0 01C8     		addl	%ecx, %eax
 5143 06a2 8B4C2434 		movl	52(%rsp), %ecx
 5144 06a6 D1F8     		sarl	%eax
 5145 06a8 29C1     		subl	%eax, %ecx
 5146 06aa 83C101   		addl	$1, %ecx
 5147 06ad 89C8     		movl	%ecx, %eax
 5148 06af 4429E0   		subl	%r12d, %eax
 5149 06b2 4189CC   		movl	%ecx, %r12d
 5150              	.LVL623:
 5151 06b5 E940FBFF 		jmp	.L438
 5151      FF
 5152              	.LVL624:
 5153 06ba 660F1F44 		.p2align 4,,10
 5153      0000
 5154              		.p2align 3
 5155              	.L534:
 5156              		.loc 1 1503 0
 5157 06c0 41807D18 		cmpb	$0, 24(%r13)
 5157      00
 5158 06c5 0F84A2FB 		je	.L441
 5158      FFFF
 5159              	.LVL625:
 5160              	.L439:
 5161              		.loc 1 1504 0
 5162 06cb 418B4710 		movl	16(%r15), %eax
 5163 06cf 014500   		addl	%eax, 0(%rbp)
 5164 06d2 E996FBFF 		jmp	.L441
 5164      FF
 5165              	.LVL626:
 5166 06d7 660F1F84 		.p2align 4,,10
 5166      00000000 
 5166      00
 5167              		.p2align 3
 5168              	.L531:
 5169              	.LBE1504:
 5170              	.LBE1511:
 5171              	.LBB1512:
 5172              	.LBB1381:
 5173              		.loc 1 1370 0
 5174 06e0 3B5724   		cmpl	36(%rdi), %edx
 5175 06e3 0F8595FA 		jne	.L385
 5175      FFFF
 5176              	.LVL627:
 5177              		.loc 1 1371 0 discriminator 1
 5178 06e9 3B472C   		cmpl	44(%rdi), %eax
 5179 06ec 0F858CFA 		jne	.L385
 5179      FFFF
 5180 06f2 E99DFAFF 		jmp	.L384
 5180      FF
 5181              	.LVL628:
 5182 06f7 660F1F84 		.p2align 4,,10
 5182      00000000 
 5182      00
 5183              		.p2align 3
 5184              	.L535:
 5185              	.LBE1381:
 5186              	.LBE1512:
 5187              	.LBB1513:
 5188              	.LBB1505:
 5189              	.LBB1500:
 5190              	.LBB1496:
 5191              		.loc 1 1508 0 discriminator 1
 5192 0700 3B4C2420 		cmpl	32(%rsp), %ecx
 5193 0704 0F8C94FB 		jl	.L379
 5193      FFFF
 5194 070a E977FBFF 		jmp	.L443
 5194      FF
 5195              	.LVL629:
 5196 070f 90       		.p2align 4,,10
 5197              		.p2align 3
 5198              	.L537:
 5199              	.LBE1496:
 5200              	.LBE1500:
 5201              	.LBE1505:
 5202              	.LBE1513:
 5203              	.LBB1514:
 5204              	.LBB1485:
 5205              		.loc 1 1383 0 discriminator 5
 5206 0710 8B7B10   		movl	16(%rbx), %edi
 5207 0713 E8000000 		call	_Z11fl_inactivej
 5207      00
 5208              	.LVL630:
 5209              	.LBB1480:
 5210              	.LBB1400:
 5211              	.LBB1397:
 5212              		.loc 4 537 0 discriminator 5
 5213 0718 807B1B00 		cmpb	$0, 27(%rbx)
 5214              	.LBE1397:
 5215              	.LBE1400:
 5216              	.LBE1480:
 5217              		.loc 1 1383 0 discriminator 5
 5218 071c 89442450 		movl	%eax, 80(%rsp)
 5219              	.LVL631:
 5220              	.LBB1481:
 5221              	.LBB1401:
 5222              	.LBB1398:
 5223              		.loc 4 537 0 discriminator 5
 5224 0720 0F8429FC 		je	.L391
 5224      FFFF
 5225              	.LVL632:
 5226              	.L392:
 5227              	.LBE1398:
 5228              	.LBE1401:
 5229              	.LBE1481:
 5230              		.loc 1 1387 0 discriminator 4
 5231 0726 488B4424 		movq	8(%rsp), %rax
 5231      08
 5232              	.LVL633:
 5233 072b 8B7868   		movl	104(%rax), %edi
 5234 072e E8000000 		call	_Z11fl_inactivej
 5234      00
 5235              	.LVL634:
 5236 0733 89442448 		movl	%eax, 72(%rsp)
 5237 0737 E923FCFF 		jmp	.L393
 5237      FF
 5238              	.LVL635:
 5239 073c 0F1F4000 		.p2align 4,,10
 5240              		.p2align 3
 5241              	.L444:
 5242              	.LBE1485:
 5243              	.LBE1514:
 5244              	.LBB1515:
 5245              	.LBB1506:
 5246              	.LBB1501:
 5247              	.LBB1497:
 5248              		.loc 1 1510 0
 5249 0740 8B54241C 		movl	28(%rsp), %edx
 5250 0744 8B742440 		movl	64(%rsp), %esi
 5251              	.LBE1497:
 5252              	.LBE1501:
 5253              	.LBE1506:
 5254              	.LBE1515:
 5255              		.loc 1 1513 0
 5256 0748 4883C468 		addq	$104, %rsp
 5257              		.cfi_remember_state
 5258              		.cfi_def_cfa_offset 56
 5259              	.LBB1516:
 5260              	.LBB1507:
 5261              	.LBB1502:
 5262              	.LBB1498:
 5263              		.loc 1 1510 0
 5264 074c 4D89F8   		movq	%r15, %r8
 5265 074f 4889DF   		movq	%rbx, %rdi
 5266              	.LBE1498:
 5267              	.LBE1502:
 5268              	.LBE1507:
 5269              	.LBE1516:
 5270              		.loc 1 1513 0
 5271 0752 5B       		popq	%rbx
 5272              		.cfi_def_cfa_offset 48
 5273              	.LVL636:
 5274 0753 5D       		popq	%rbp
 5275              		.cfi_def_cfa_offset 40
 5276              	.LVL637:
 5277 0754 415C     		popq	%r12
 5278              		.cfi_def_cfa_offset 32
 5279              	.LVL638:
 5280 0756 415D     		popq	%r13
 5281              		.cfi_def_cfa_offset 24
 5282 0758 415E     		popq	%r14
 5283              		.cfi_def_cfa_offset 16
 5284 075a 415F     		popq	%r15
 5285              		.cfi_def_cfa_offset 8
 5286              	.LVL639:
 5287              	.LBB1517:
 5288              	.LBB1508:
 5289              	.LBB1503:
 5290              	.LBB1499:
 5291              		.loc 1 1510 0
 5292 075c E9000000 		jmp	_ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs
 5292      00
 5293              	.LVL640:
 5294              		.p2align 4,,10
 5295 0761 0F1F8000 		.p2align 3
 5295      000000
 5296              	.L530:
 5297              		.cfi_restore_state
 5298 0768 498B4F48 		movq	72(%r15), %rcx
 5299              	.LVL641:
 5300              	.LBE1499:
 5301              	.LBE1503:
 5302              	.LBE1508:
 5303              	.LBE1517:
 5304              		.loc 1 1335 0 discriminator 2
 5305 076c 4885C9   		testq	%rcx, %rcx
 5306 076f 0F85D3F9 		jne	.L445
 5306      FFFF
 5307 0775 E9D5F9FF 		jmp	.L461
 5307      FF
 5308              	.LVL642:
 5309 077a 660F1F44 		.p2align 4,,10
 5309      0000
 5310              		.p2align 3
 5311              	.L465:
 5312              		.loc 1 1339 0
 5313 0780 31F6     		xorl	%esi, %esi
 5314 0782 E9D9F9FF 		jmp	.L383
 5314      FF
 5315              	.LVL643:
 5316              	.L542:
 5317              	.LBB1518:
 5318              	.LBB1486:
 5319              	.LBB1482:
 5320              	.LBB1478:
 5321              	.LBB1474:
 5322              	.LBB1444:
 5323              	.LBB1437:
 5324              	.LBB1438:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5325              		.loc 2 52 0
 5326 0787 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5326      000000
 5327 078e 8B742448 		movl	72(%rsp), %esi
 5328 0792 488B07   		movq	(%rdi), %rax
 5329              	.LVL644:
 5330 0795 FF908800 		call	*136(%rax)
 5330      0000
 5331              	.LVL645:
 5332              	.LBE1438:
 5333              	.LBE1437:
 5334              	.LBB1439:
 5335              	.LBB1440:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 5336              		.loc 2 206 0
 5337 079b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5337      000000
 5338 07a2 8B4B44   		movl	68(%rbx), %ecx
 5339 07a5 8B5340   		movl	64(%rbx), %edx
 5340 07a8 8B733C   		movl	60(%rbx), %esi
 5341 07ab 448B4348 		movl	72(%rbx), %r8d
 5342 07af 488B07   		movq	(%rdi), %rax
 5343 07b2 FF5020   		call	*32(%rax)
 5344              	.LVL646:
 5345 07b5 E9B7FCFF 		jmp	.L458
 5345      FF
 5346              	.LVL647:
 5347 07ba 660F1F44 		.p2align 4,,10
 5347      0000
 5348              		.p2align 3
 5349              	.L538:
 5350 07c0 488B4424 		movq	8(%rsp), %rax
 5350      08
 5351 07c5 8B4064   		movl	100(%rax), %eax
 5352 07c8 89442448 		movl	%eax, 72(%rsp)
 5353              	.LVL648:
 5354              	.LBE1440:
 5355              	.LBE1439:
 5356              	.LBE1444:
 5357              	.LBE1474:
 5358              	.LBE1478:
 5359              	.LBE1482:
 5360 07cc E98EFBFF 		jmp	.L393
 5360      FF
 5361              	.LVL649:
 5362              	.L544:
 5363              	.LBB1483:
 5364              	.LBB1479:
 5365              	.LBB1475:
 5366              	.LBB1471:
 5367              		.loc 1 897 0
 5368 07d1 448B5C24 		movl	68(%rsp), %r11d
 5368      44
 5369 07d6 4C89F7   		movq	%r14, %rdi
 5370 07d9 89D8     		movl	%ebx, %eax
 5371 07db 4189EE   		movl	%ebp, %r14d
 5372              	.LVL650:
 5373 07de 448B4424 		movl	72(%rsp), %r8d
 5373      48
 5374 07e3 488B5C24 		movq	80(%rsp), %rbx
 5374      50
 5375 07e8 4889FD   		movq	%rdi, %rbp
 5376              	.LVL651:
 5377 07eb 4585DB   		testl	%r11d, %r11d
 5378 07ee 7E59     		jle	.L425
 5379              	.LVL652:
 5380              	.L464:
 5381 07f0 8B7C2444 		movl	68(%rsp), %edi
 5382              	.LBB1460:
 5383              	.LBB1461:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 5384              		.loc 2 147 0
 5385 07f4 448B6C24 		movl	56(%rsp), %r13d
 5385      38
 5386 07f9 48895C24 		movq	%rbx, 88(%rsp)
 5386      58
 5387 07fe 44894424 		movl	%r8d, 80(%rsp)
 5387      50
 5388 0803 448D3407 		leal	(%rdi,%rax), %r14d
 5389 0807 8B7C242C 		movl	44(%rsp), %edi
 5390 080b 4129C5   		subl	%eax, %r13d
 5391 080e 4489F3   		movl	%r14d, %ebx
 5392 0811 4989EE   		movq	%rbp, %r14
 5393 0814 89C5     		movl	%eax, %ebp
 5394              	.LVL653:
 5395 0816 4401C7   		addl	%r8d, %edi
 5396 0819 897C2448 		movl	%edi, 72(%rsp)
 5397              	.LVL654:
 5398 081d EB08     		jmp	.L428
 5399              	.LVL655:
 5400 081f 90       		.p2align 4,,10
 5401              		.p2align 3
 5402              	.L426:
 5403              	.LBE1461:
 5404              	.LBE1460:
 5405              		.loc 1 897 0
 5406 0820 83C501   		addl	$1, %ebp
 5407              	.LVL656:
 5408 0823 39DD     		cmpl	%ebx, %ebp
 5409 0825 7474     		je	.L545
 5410              	.LVL657:
 5411              	.L428:
 5412 0827 40F6C501 		testb	$1, %bpl
 5413 082b 74F3     		je	.L426
 5414              	.LVL658:
 5415              	.LBB1463:
 5416              	.LBB1462:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 5417              		.loc 2 147 0
 5418 082d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5418      000000
 5419 0834 418D542D 		leal	0(%r13,%rbp), %edx
 5419      00
 5420 0839 8B742448 		movl	72(%rsp), %esi
 5421 083d 4C8B07   		movq	(%rdi), %r8
 5422 0840 41FF9098 		call	*152(%r8)
 5422      000000
 5423              	.LVL659:
 5424 0847 EBD7     		jmp	.L426
 5425              	.LVL660:
 5426              	.L425:
 5427              	.LBE1462:
 5428              	.LBE1463:
 5429              	.LBB1464:
 5430              	.LBB1465:
 5431 0849 448B6C24 		movl	56(%rsp), %r13d
 5431      38
 5432 084e 44036C24 		addl	68(%rsp), %r13d
 5432      44
 5433 0853 48895C24 		movq	%rbx, 72(%rsp)
 5433      48
 5434 0858 4489EB   		movl	%r13d, %ebx
 5435 085b 4589F5   		movl	%r14d, %r13d
 5436 085e 4989EE   		movq	%rbp, %r14
 5437              	.LVL661:
 5438 0861 4489C5   		movl	%r8d, %ebp
 5439              	.LVL662:
 5440 0864 EB13     		jmp	.L432
 5441              	.LVL663:
 5442 0866 662E0F1F 		.p2align 4,,10
 5442      84000000 
 5442      0000
 5443              		.p2align 3
 5444              	.L430:
 5445              	.LBE1465:
 5446              	.LBE1464:
 5447              		.loc 1 898 0
 5448 0870 4183C501 		addl	$1, %r13d
 5449              	.LVL664:
 5450 0874 83ED01   		subl	$1, %ebp
 5451              	.LVL665:
 5452 0877 747D     		je	.L546
 5453              	.L432:
 5454 0879 41F6C501 		testb	$1, %r13b
 5455 087d 74F1     		je	.L430
 5456              	.LVL666:
 5457              	.LBB1467:
 5458              	.LBB1466:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 5459              		.loc 2 147 0
 5460 087f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5460      000000
 5461 0886 8B44242C 		movl	44(%rsp), %eax
 5462 088a 89DA     		movl	%ebx, %edx
 5463 088c 488B0F   		movq	(%rdi), %rcx
 5464 088f 8D740500 		leal	0(%rbp,%rax), %esi
 5465              	.LVL667:
 5466 0893 FF919800 		call	*152(%rcx)
 5466      0000
 5467              	.LVL668:
 5468 0899 EBD5     		jmp	.L430
 5469              	.LVL669:
 5470              	.L545:
 5471 089b 448B4424 		movl	80(%rsp), %r8d
 5471      50
 5472 08a0 4C89F5   		movq	%r14, %rbp
 5473              	.LVL670:
 5474 08a3 4189DE   		movl	%ebx, %r14d
 5475              	.LVL671:
 5476 08a6 488B5C24 		movq	88(%rsp), %rbx
 5476      58
 5477              	.LVL672:
 5478              	.LBE1466:
 5479              	.LBE1467:
 5480              		.loc 1 898 0
 5481 08ab 4585C0   		testl	%r8d, %r8d
 5482 08ae 7F99     		jg	.L425
 5483              	.LVL673:
 5484              	.L513:
 5485 08b0 4589F5   		movl	%r14d, %r13d
 5486 08b3 448B7424 		movl	56(%rsp), %r14d
 5486      38
 5487              	.LVL674:
 5488 08b8 48895C24 		movq	%rbx, 56(%rsp)
 5488      38
 5489              	.LVL675:
 5490 08bd 8B5C2444 		movl	68(%rsp), %ebx
 5491 08c1 EB12     		jmp	.L434
 5492              	.LVL676:
 5493              		.p2align 4,,10
 5494 08c3 0F1F4400 		.p2align 3
 5494      00
 5495              	.L433:
 5496              		.loc 1 899 0
 5497 08c8 4183C501 		addl	$1, %r13d
 5498              	.LVL677:
 5499 08cc 83EB01   		subl	$1, %ebx
 5500              	.LVL678:
 5501 08cf 0F843AFA 		je	.L547
 5501      FFFF
 5502              	.LVL679:
 5503              	.L434:
 5504 08d5 41F6C501 		testb	$1, %r13b
 5505 08d9 74ED     		je	.L433
 5506              	.LVL680:
 5507              	.LBB1468:
 5508              	.LBB1469:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 5509              		.loc 2 147 0
 5510 08db 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5510      000000
 5511 08e2 428D1433 		leal	(%rbx,%r14), %edx
 5512              	.LVL681:
 5513 08e6 8B74242C 		movl	44(%rsp), %esi
 5514 08ea 4C8B07   		movq	(%rdi), %r8
 5515 08ed 41FF9098 		call	*152(%r8)
 5515      000000
 5516              	.LVL682:
 5517 08f4 EBD2     		jmp	.L433
 5518              	.LVL683:
 5519              	.L546:
 5520              	.LBE1469:
 5521              	.LBE1468:
 5522              		.loc 1 899 0
 5523 08f6 448B5424 		movl	68(%rsp), %r10d
 5523      44
 5524 08fb 4C89F5   		movq	%r14, %rbp
 5525              	.LVL684:
 5526 08fe 488B5C24 		movq	72(%rsp), %rbx
 5526      48
 5527 0903 4589EE   		movl	%r13d, %r14d
 5528              	.LVL685:
 5529 0906 4585D2   		testl	%r10d, %r10d
 5530 0909 7FA5     		jg	.L513
 5531              	.LVL686:
 5532 090b E908FAFF 		jmp	.L435
 5532      FF
 5533              	.LVL687:
 5534              	.L543:
 5535 0910 498B7F48 		movq	72(%r15), %rdi
 5536              	.LVL688:
 5537              	.LBE1471:
 5538              	.LBE1475:
 5539              	.LBB1476:
 5540              	.LBB1445:
 5541              	.LBB1441:
 5542              	.LBB1426:
 5543              		.loc 1 1456 0
 5544 0914 4885FF   		testq	%rdi, %rdi
 5545 0917 0F8574FB 		jne	.L518
 5545      FFFF
 5546 091d E996FBFF 		jmp	.L415
 5546      FF
 5547              	.LVL689:
 5548              	.L541:
 5549              	.LBE1426:
 5550              	.LBE1441:
 5551              		.loc 1 1429 0 discriminator 2
 5552 0922 807B1B00 		cmpb	$0, 27(%rbx)
 5553 0926 0F8458FB 		je	.L411
 5553      FFFF
 5554 092c E925FBFF 		jmp	.L410
 5554      FF
 5555              	.LVL690:
 5556              		.p2align 4,,10
 5557 0931 0F1F8000 		.p2align 3
 5557      000000
 5558              	.L457:
 5559 0938 498B7F40 		movq	64(%r15), %rdi
 5560 093c E9DBFAFF 		jmp	.L517
 5560      FF
 5561              	.LVL691:
 5562              	.L401:
 5563              	.LBB1442:
 5564              	.LBB1411:
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 5565              		.loc 4 503 0
 5566 0941 48837B78 		cmpq	$0, 120(%rbx)
 5566      00
 5567 0946 0F858EFA 		jne	.L404
 5567      FFFF
 5568 094c E9E9FAFF 		jmp	.L406
 5568      FF
 5569              	.LVL692:
 5570              	.L539:
 5571              	.LBE1411:
 5572              	.LBE1442:
 5573              		.loc 1 1398 0
 5574 0951 8B4C2438 		movl	56(%rsp), %ecx
 5575 0955 8B742434 		movl	52(%rsp), %esi
 5576 0959 4D89F8   		movq	%r15, %r8
 5577 095c 4489EA   		movl	%r13d, %edx
 5578 095f 4889DF   		movq	%rbx, %rdi
 5579 0962 E8000000 		call	_ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs
 5579      00
 5580              	.LVL693:
 5581 0967 E938FAFF 		jmp	.L454
 5581      FF
 5582              	.LVL694:
 5583              	.L540:
 5584              		.loc 1 1406 0
 5585 096c 8B5500   		movl	0(%rbp), %edx
 5586 096f 8B442430 		movl	48(%rsp), %eax
 5587 0973 4D89F8   		movq	%r15, %r8
 5588 0976 8B742440 		movl	64(%rsp), %esi
 5589 097a 4889DF   		movq	%rbx, %rdi
 5590 097d 8D0C10   		leal	(%rax,%rdx), %ecx
 5591 0980 E8000000 		call	_ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs
 5591      00
 5592              	.LVL695:
 5593 0985 E976FAFF 		jmp	.L398
 5593      FF
 5594              	.LVL696:
 5595              	.L402:
 5596              	.LBB1443:
 5597              	.LBB1412:
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 5598              		.loc 4 503 0
 5599 098a 48837B78 		cmpq	$0, 120(%rbx)
 5599      00
 5600 098f 0F8545FA 		jne	.L404
 5600      FFFF
 5601              	.LVL697:
 5602              	.LBE1412:
 5603              	.LBE1443:
 5604              		.loc 1 1410 0
 5605 0995 41807F50 		cmpb	$0, 80(%r15)
 5605      00
 5606 099a 0F8578FA 		jne	.L463
 5606      FFFF
 5607 09a0 E995FAFF 		jmp	.L406
 5607      FF
 5608              	.LVL698:
 5609              		.p2align 4,,10
 5610 09a5 0F1F00   		.p2align 3
 5611              	.L422:
 5612              	.LBE1445:
 5613              	.LBE1476:
 5614              	.LBB1477:
 5615              	.LBB1472:
 5616              		.loc 1 897 0
 5617 09a8 8B442444 		movl	68(%rsp), %eax
 5618              	.LVL699:
 5619 09ac 85C0     		testl	%eax, %eax
 5620 09ae 0F8E64F9 		jle	.L435
 5620      FFFF
 5621              		.loc 1 896 0
 5622 09b4 B8010000 		movl	$1, %eax
 5622      00
 5623 09b9 E932FEFF 		jmp	.L464
 5623      FF
 5624              	.LBE1472:
 5625              	.LBE1477:
 5626              	.LBE1479:
 5627              	.LBE1483:
 5628              	.LBE1486:
 5629              	.LBE1518:
 5630              		.cfi_endproc
 5631              	.LFE639:
 5633              		.section	.text.unlikely._ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi
 5634              	.LCOLDE44:
 5635              		.section	.text._ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi
 5636              	.LHOTE44:
 5637              		.section	.text.unlikely._ZNK12Fl_Tree_Item22event_on_collapse_iconERK13Fl_Tree_Prefs,"ax",@progbit
 5638              		.align 2
 5639              	.LCOLDB45:
 5640              		.section	.text._ZNK12Fl_Tree_Item22event_on_collapse_iconERK13Fl_Tree_Prefs,"ax",@progbits
 5641              	.LHOTB45:
 5642              		.align 2
 5643              		.p2align 4,,15
 5644              		.globl	_ZNK12Fl_Tree_Item22event_on_collapse_iconERK13Fl_Tree_Prefs
 5646              	_ZNK12Fl_Tree_Item22event_on_collapse_iconERK13Fl_Tree_Prefs:
 5647              	.LFB640:
 5648              		.loc 1 1518 0
 5649              		.cfi_startproc
 5650              	.LVL700:
 5651              		.loc 1 1522 0
 5652 0000 31C0     		xorl	%eax, %eax
 5653              	.LBB1519:
 5654              	.LBB1520:
 5655              	.LBB1521:
 535:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case   ACTIVE: return(_active ? 1 : 0);
 5656              		.loc 4 535 0
 5657 0002 807F1900 		cmpb	$0, 25(%rdi)
 5658 0006 7508     		jne	.L549
 5659              	.LBE1521:
 5660              	.LBE1520:
 5661              	.LBE1519:
 5662              		.loc 1 1524 0
 5663 0008 F3C3     		rep ret
 5664 000a 660F1F44 		.p2align 4,,10
 5664      0000
 5665              		.p2align 3
 5666              	.L549:
 5667              	.LVL701:
 5668              	.LBB1522:
 5669              	.LBB1523:
 5670              	.LBB1524:
 5671              	.LBB1525:
 536:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case SELECTED: return(_selected ? 1 : 0);
 5672              		.loc 4 536 0
 5673 0010 807F1A00 		cmpb	$0, 26(%rdi)
 5674 0014 7430     		je	.L557
 5675              	.LVL702:
 5676 0016 8B4768   		movl	104(%rdi), %eax
 5677              	.LVL703:
 5678              	.LBE1525:
 5679              	.LBE1524:
 5680              	.LBE1523:
 5681              	.LBE1522:
 5682              		.loc 1 1519 0
 5683 0019 85C0     		testl	%eax, %eax
 5684 001b 7433     		je	.L558
 5685              	.LVL704:
 5686              		.loc 1 1522 0 discriminator 5
 5687 001d 31C0     		xorl	%eax, %eax
 5688              		.loc 1 1519 0 discriminator 5
 5689 001f 807E5000 		cmpb	$0, 80(%rsi)
 5690 0023 7421     		je	.L557
 5691              	.LVL705:
 5692              		.loc 1 1518 0
 5693 0025 4883EC08 		subq	$8, %rsp
 5694              		.cfi_def_cfa_offset 16
 5695              	.LBB1526:
 5696              	.LBB1527:
 5697              		.loc 1 34 0
 5698 0029 8B4F38   		movl	56(%rdi), %ecx
 5699 002c 8B5734   		movl	52(%rdi), %edx
 5700 002f 8B7730   		movl	48(%rdi), %esi
 5701              	.LVL706:
 5702 0032 8B7F2C   		movl	44(%rdi), %edi
 5703              	.LVL707:
 5704 0035 E8000000 		call	_ZN2Fl12event_insideEiiii
 5704      00
 5705              	.LVL708:
 5706              	.LBE1527:
 5707              	.LBE1526:
 5708              		.loc 1 1520 0
 5709 003a 85C0     		testl	%eax, %eax
 5710 003c 0F95C0   		setne	%al
 5711              		.loc 1 1524 0
 5712 003f 4883C408 		addq	$8, %rsp
 5713              		.cfi_def_cfa_offset 8
 5714              		.loc 1 1520 0
 5715 0043 0FB6C0   		movzbl	%al, %eax
 5716              	.LVL709:
 5717              	.L557:
 5718              		.loc 1 1524 0
 5719 0046 F3C3     		rep ret
 5720              	.LVL710:
 5721 0048 0F1F8400 		.p2align 4,,10
 5721      00000000 
 5722              		.p2align 3
 5723              	.L558:
 5724 0050 F3C3     		rep ret
 5725              		.cfi_endproc
 5726              	.LFE640:
 5728              		.section	.text.unlikely._ZNK12Fl_Tree_Item22event_on_collapse_iconERK13Fl_Tree_Prefs
 5729              	.LCOLDE45:
 5730              		.section	.text._ZNK12Fl_Tree_Item22event_on_collapse_iconERK13Fl_Tree_Prefs
 5731              	.LHOTE45:
 5732              		.section	.text.unlikely._ZNK12Fl_Tree_Item14event_on_labelERK13Fl_Tree_Prefs,"ax",@progbits
 5733              		.align 2
 5734              	.LCOLDB46:
 5735              		.section	.text._ZNK12Fl_Tree_Item14event_on_labelERK13Fl_Tree_Prefs,"ax",@progbits
 5736              	.LHOTB46:
 5737              		.align 2
 5738              		.p2align 4,,15
 5739              		.globl	_ZNK12Fl_Tree_Item14event_on_labelERK13Fl_Tree_Prefs
 5741              	_ZNK12Fl_Tree_Item14event_on_labelERK13Fl_Tree_Prefs:
 5742              	.LFB641:
 5743              		.loc 1 1528 0
 5744              		.cfi_startproc
 5745              	.LVL711:
 5746              	.LBB1528:
 5747              	.LBB1529:
 5748              	.LBB1530:
 535:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case   ACTIVE: return(_active ? 1 : 0);
 5749              		.loc 4 535 0
 5750 0000 807F1900 		cmpb	$0, 25(%rdi)
 5751 0004 742A     		je	.L566
 5752              	.LVL712:
 5753              	.LBE1530:
 5754              	.LBE1529:
 5755              	.LBE1528:
 5756              		.loc 1 1529 0
 5757 0006 807F1A00 		cmpb	$0, 26(%rdi)
 5758 000a 7424     		je	.L566
 5759              	.LVL713:
 5760              		.loc 1 1528 0
 5761 000c 4883EC08 		subq	$8, %rsp
 5762              		.cfi_def_cfa_offset 16
 5763              	.LBB1531:
 5764              	.LBB1532:
 5765              		.loc 1 34 0
 5766 0010 8B4F48   		movl	72(%rdi), %ecx
 5767 0013 8B5744   		movl	68(%rdi), %edx
 5768 0016 8B7740   		movl	64(%rdi), %esi
 5769              	.LVL714:
 5770 0019 8B7F3C   		movl	60(%rdi), %edi
 5771              	.LVL715:
 5772 001c E8000000 		call	_ZN2Fl12event_insideEiiii
 5772      00
 5773              	.LVL716:
 5774              	.LBE1532:
 5775              	.LBE1531:
 5776              		.loc 1 1530 0
 5777 0021 85C0     		testl	%eax, %eax
 5778 0023 0F95C0   		setne	%al
 5779              		.loc 1 1534 0
 5780 0026 4883C408 		addq	$8, %rsp
 5781              		.cfi_def_cfa_offset 8
 5782              		.loc 1 1530 0
 5783 002a 0FB6C0   		movzbl	%al, %eax
 5784              		.loc 1 1534 0
 5785 002d C3       		ret
 5786              	.LVL717:
 5787 002e 6690     		.p2align 4,,10
 5788              		.p2align 3
 5789              	.L566:
 5790              		.loc 1 1532 0
 5791 0030 31C0     		xorl	%eax, %eax
 5792 0032 C3       		ret
 5793              		.cfi_endproc
 5794              	.LFE641:
 5796              		.section	.text.unlikely._ZNK12Fl_Tree_Item14event_on_labelERK13Fl_Tree_Prefs
 5797              	.LCOLDE46:
 5798              		.section	.text._ZNK12Fl_Tree_Item14event_on_labelERK13Fl_Tree_Prefs
 5799              	.LHOTE46:
 5800              		.section	.text.unlikely._ZN12Fl_Tree_Item12show_widgetsEv,"ax",@progbits
 5801              		.align 2
 5802              	.LCOLDB47:
 5803              		.section	.text._ZN12Fl_Tree_Item12show_widgetsEv,"ax",@progbits
 5804              	.LHOTB47:
 5805              		.align 2
 5806              		.p2align 4,,15
 5807              		.globl	_ZN12Fl_Tree_Item12show_widgetsEv
 5809              	_ZN12Fl_Tree_Item12show_widgetsEv:
 5810              	.LFB642:
 5811              		.loc 1 1539 0
 5812              		.cfi_startproc
 5813              	.LVL718:
 5814 0000 4154     		pushq	%r12
 5815              		.cfi_def_cfa_offset 16
 5816              		.cfi_offset 12, -16
 5817 0002 4989FC   		movq	%rdi, %r12
 5818 0005 55       		pushq	%rbp
 5819              		.cfi_def_cfa_offset 24
 5820              		.cfi_offset 6, -24
 5821 0006 53       		pushq	%rbx
 5822              		.cfi_def_cfa_offset 32
 5823              		.cfi_offset 3, -32
 5824              		.loc 1 1540 0
 5825 0007 488B7F50 		movq	80(%rdi), %rdi
 5826              	.LVL719:
 5827 000b 4885FF   		testq	%rdi, %rdi
 5828 000e 7406     		je	.L568
 5829              		.loc 1 1540 0 is_stmt 0 discriminator 1
 5830 0010 488B07   		movq	(%rdi), %rax
 5831 0013 FF5028   		call	*40(%rax)
 5832              	.LVL720:
 5833              	.L568:
 5834              	.LBB1549:
 5835              	.LBB1550:
 5836              	.LBB1551:
 534:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: return(_visible ? 1 : 0);
 5837              		.loc 4 534 0 is_stmt 1
 5838 0016 41807C24 		cmpb	$0, 24(%r12)
 5838      1800
 5839 001c 742E     		je	.L567
 5840              	.LVL721:
 5841              	.LBE1551:
 5842              	.LBE1550:
 5843              	.LBE1549:
 5844              	.LBB1552:
 5845              	.LBB1553:
 5846              		.loc 1 1542 0
 5847 001e 418B4424 		movl	104(%r12), %eax
 5847      68
 5848 0023 85C0     		testl	%eax, %eax
 5849 0025 7E25     		jle	.L567
 5850 0027 31ED     		xorl	%ebp, %ebp
 5851 0029 31DB     		xorl	%ebx, %ebx
 5852              	.LVL722:
 5853 002b 0F1F4400 		.p2align 4,,10
 5853      00
 5854              		.p2align 3
 5855              	.L571:
 5856              	.LBB1554:
 5857              	.LBB1555:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 5858              		.loc 3 65 0
 5859 0030 498B4424 		movq	96(%r12), %rax
 5859      60
 5860              	.LBE1555:
 5861              	.LBE1554:
 5862              		.loc 1 1542 0
 5863 0035 83C301   		addl	$1, %ebx
 5864              	.LVL723:
 5865              		.loc 1 1543 0
 5866 0038 488B3C28 		movq	(%rax,%rbp), %rdi
 5867 003c 4883C508 		addq	$8, %rbp
 5868 0040 E8000000 		call	_ZN12Fl_Tree_Item12show_widgetsEv
 5868      00
 5869              	.LVL724:
 5870              		.loc 1 1542 0
 5871 0045 41395C24 		cmpl	%ebx, 104(%r12)
 5871      68
 5872 004a 7FE4     		jg	.L571
 5873              	.LVL725:
 5874              	.L567:
 5875              	.LBE1553:
 5876              	.LBE1552:
 5877              		.loc 1 1546 0
 5878 004c 5B       		popq	%rbx
 5879              		.cfi_def_cfa_offset 24
 5880 004d 5D       		popq	%rbp
 5881              		.cfi_def_cfa_offset 16
 5882 004e 415C     		popq	%r12
 5883              		.cfi_def_cfa_offset 8
 5884              	.LVL726:
 5885 0050 C3       		ret
 5886              		.cfi_endproc
 5887              	.LFE642:
 5889              		.section	.text.unlikely._ZN12Fl_Tree_Item12show_widgetsEv
 5890              	.LCOLDE47:
 5891              		.section	.text._ZN12Fl_Tree_Item12show_widgetsEv
 5892              	.LHOTE47:
 5893              		.section	.text.unlikely._ZN12Fl_Tree_Item12hide_widgetsEv,"ax",@progbits
 5894              		.align 2
 5895              	.LCOLDB48:
 5896              		.section	.text._ZN12Fl_Tree_Item12hide_widgetsEv,"ax",@progbits
 5897              	.LHOTB48:
 5898              		.align 2
 5899              		.p2align 4,,15
 5900              		.globl	_ZN12Fl_Tree_Item12hide_widgetsEv
 5902              	_ZN12Fl_Tree_Item12hide_widgetsEv:
 5903              	.LFB643:
 5904              		.loc 1 1551 0
 5905              		.cfi_startproc
 5906              	.LVL727:
 5907 0000 4154     		pushq	%r12
 5908              		.cfi_def_cfa_offset 16
 5909              		.cfi_offset 12, -16
 5910 0002 4989FC   		movq	%rdi, %r12
 5911 0005 55       		pushq	%rbp
 5912              		.cfi_def_cfa_offset 24
 5913              		.cfi_offset 6, -24
 5914 0006 53       		pushq	%rbx
 5915              		.cfi_def_cfa_offset 32
 5916              		.cfi_offset 3, -32
 5917              		.loc 1 1552 0
 5918 0007 488B7F50 		movq	80(%rdi), %rdi
 5919              	.LVL728:
 5920 000b 4885FF   		testq	%rdi, %rdi
 5921 000e 7406     		je	.L578
 5922              		.loc 1 1552 0 is_stmt 0 discriminator 1
 5923 0010 488B07   		movq	(%rdi), %rax
 5924 0013 FF5030   		call	*48(%rax)
 5925              	.LVL729:
 5926              	.L578:
 5927              	.LBB1556:
 5928              		.loc 1 1553 0 is_stmt 1 discriminator 3
 5929 0016 418B4424 		movl	104(%r12), %eax
 5929      68
 5930 001b 31ED     		xorl	%ebp, %ebp
 5931 001d 31DB     		xorl	%ebx, %ebx
 5932 001f 85C0     		testl	%eax, %eax
 5933 0021 7E21     		jle	.L577
 5934              	.LVL730:
 5935              		.p2align 4,,10
 5936 0023 0F1F4400 		.p2align 3
 5936      00
 5937              	.L584:
 5938              	.LBB1557:
 5939              	.LBB1558:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 5940              		.loc 3 65 0 discriminator 2
 5941 0028 498B4424 		movq	96(%r12), %rax
 5941      60
 5942              	.LBE1558:
 5943              	.LBE1557:
 5944              		.loc 1 1553 0 discriminator 2
 5945 002d 83C301   		addl	$1, %ebx
 5946              	.LVL731:
 5947              		.loc 1 1554 0 discriminator 2
 5948 0030 488B3C28 		movq	(%rax,%rbp), %rdi
 5949 0034 4883C508 		addq	$8, %rbp
 5950 0038 E8000000 		call	_ZN12Fl_Tree_Item12hide_widgetsEv
 5950      00
 5951              	.LVL732:
 5952              		.loc 1 1553 0 discriminator 2
 5953 003d 413B5C24 		cmpl	104(%r12), %ebx
 5953      68
 5954 0042 7CE4     		jl	.L584
 5955              	.LVL733:
 5956              	.L577:
 5957              	.LBE1556:
 5958              		.loc 1 1556 0
 5959 0044 5B       		popq	%rbx
 5960              		.cfi_def_cfa_offset 24
 5961 0045 5D       		popq	%rbp
 5962              		.cfi_def_cfa_offset 16
 5963 0046 415C     		popq	%r12
 5964              		.cfi_def_cfa_offset 8
 5965              	.LVL734:
 5966 0048 C3       		ret
 5967              		.cfi_endproc
 5968              	.LFE643:
 5970              		.section	.text.unlikely._ZN12Fl_Tree_Item12hide_widgetsEv
 5971              	.LCOLDE48:
 5972              		.section	.text._ZN12Fl_Tree_Item12hide_widgetsEv
 5973              	.LHOTE48:
 5974              		.section	.text.unlikely._ZN12Fl_Tree_Item4openEv,"ax",@progbits
 5975              		.align 2
 5976              	.LCOLDB49:
 5977              		.section	.text._ZN12Fl_Tree_Item4openEv,"ax",@progbits
 5978              	.LHOTB49:
 5979              		.align 2
 5980              		.p2align 4,,15
 5981              		.globl	_ZN12Fl_Tree_Item4openEv
 5983              	_ZN12Fl_Tree_Item4openEv:
 5984              	.LFB644:
 5985              		.loc 1 1559 0
 5986              		.cfi_startproc
 5987              	.LVL735:
 5988              	.LBB1559:
 5989              		.loc 1 1562 0
 5990 0000 8B4768   		movl	104(%rdi), %eax
 5991              	.LBE1559:
 5992              	.LBB1562:
 5993              	.LBB1563:
 525:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: _visible  = val; break;
 5994              		.loc 4 525 0
 5995 0003 C6471801 		movb	$1, 24(%rdi)
 5996              	.LVL736:
 5997              	.LBE1563:
 5998              	.LBE1562:
 5999              	.LBB1564:
 6000              		.loc 1 1562 0
 6001 0007 85C0     		testl	%eax, %eax
 6002 0009 7E35     		jle	.L596
 6003              	.LBE1564:
 6004              		.loc 1 1559 0
 6005 000b 4154     		pushq	%r12
 6006              		.cfi_def_cfa_offset 16
 6007              		.cfi_offset 12, -16
 6008 000d 4989FC   		movq	%rdi, %r12
 6009 0010 55       		pushq	%rbp
 6010              		.cfi_def_cfa_offset 24
 6011              		.cfi_offset 6, -24
 6012 0011 31ED     		xorl	%ebp, %ebp
 6013 0013 53       		pushq	%rbx
 6014              		.cfi_def_cfa_offset 32
 6015              		.cfi_offset 3, -32
 6016 0014 31DB     		xorl	%ebx, %ebx
 6017              	.LVL737:
 6018 0016 662E0F1F 		.p2align 4,,10
 6018      84000000 
 6018      0000
 6019              		.p2align 3
 6020              	.L592:
 6021              	.LBB1565:
 6022              	.LBB1560:
 6023              	.LBB1561:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 6024              		.loc 3 65 0 discriminator 2
 6025 0020 498B4424 		movq	96(%r12), %rax
 6025      60
 6026              	.LBE1561:
 6027              	.LBE1560:
 6028              		.loc 1 1562 0 discriminator 2
 6029 0025 83C301   		addl	$1, %ebx
 6030              	.LVL738:
 6031              		.loc 1 1563 0 discriminator 2
 6032 0028 488B3C28 		movq	(%rax,%rbp), %rdi
 6033 002c 4883C508 		addq	$8, %rbp
 6034 0030 E8000000 		call	_ZN12Fl_Tree_Item12show_widgetsEv
 6034      00
 6035              	.LVL739:
 6036              		.loc 1 1562 0 discriminator 2
 6037 0035 413B5C24 		cmpl	104(%r12), %ebx
 6037      68
 6038 003a 7CE4     		jl	.L592
 6039              	.LBE1565:
 6040              		.loc 1 1566 0
 6041 003c 5B       		popq	%rbx
 6042              		.cfi_restore 3
 6043              		.cfi_def_cfa_offset 24
 6044              	.LVL740:
 6045 003d 5D       		popq	%rbp
 6046              		.cfi_restore 6
 6047              		.cfi_def_cfa_offset 16
 6048 003e 415C     		popq	%r12
 6049              		.cfi_restore 12
 6050              		.cfi_def_cfa_offset 8
 6051              	.LVL741:
 6052              	.L596:
 6053 0040 F3C3     		rep ret
 6054              		.cfi_endproc
 6055              	.LFE644:
 6057              		.section	.text.unlikely._ZN12Fl_Tree_Item4openEv
 6058              	.LCOLDE49:
 6059              		.section	.text._ZN12Fl_Tree_Item4openEv
 6060              	.LHOTE49:
 6061              		.section	.text.unlikely._ZN12Fl_Tree_Item5closeEv,"ax",@progbits
 6062              		.align 2
 6063              	.LCOLDB50:
 6064              		.section	.text._ZN12Fl_Tree_Item5closeEv,"ax",@progbits
 6065              	.LHOTB50:
 6066              		.align 2
 6067              		.p2align 4,,15
 6068              		.globl	_ZN12Fl_Tree_Item5closeEv
 6070              	_ZN12Fl_Tree_Item5closeEv:
 6071              	.LFB645:
 6072              		.loc 1 1569 0
 6073              		.cfi_startproc
 6074              	.LVL742:
 6075              	.LBB1566:
 6076              		.loc 1 1572 0
 6077 0000 8B4768   		movl	104(%rdi), %eax
 6078              	.LBE1566:
 6079              	.LBB1569:
 6080              	.LBB1570:
 525:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: _visible  = val; break;
 6081              		.loc 4 525 0
 6082 0003 C6471800 		movb	$0, 24(%rdi)
 6083              	.LVL743:
 6084              	.LBE1570:
 6085              	.LBE1569:
 6086              	.LBB1571:
 6087              		.loc 1 1572 0
 6088 0007 85C0     		testl	%eax, %eax
 6089 0009 7E35     		jle	.L605
 6090              	.LBE1571:
 6091              		.loc 1 1569 0
 6092 000b 4154     		pushq	%r12
 6093              		.cfi_def_cfa_offset 16
 6094              		.cfi_offset 12, -16
 6095 000d 4989FC   		movq	%rdi, %r12
 6096 0010 55       		pushq	%rbp
 6097              		.cfi_def_cfa_offset 24
 6098              		.cfi_offset 6, -24
 6099 0011 31ED     		xorl	%ebp, %ebp
 6100 0013 53       		pushq	%rbx
 6101              		.cfi_def_cfa_offset 32
 6102              		.cfi_offset 3, -32
 6103 0014 31DB     		xorl	%ebx, %ebx
 6104              	.LVL744:
 6105 0016 662E0F1F 		.p2align 4,,10
 6105      84000000 
 6105      0000
 6106              		.p2align 3
 6107              	.L601:
 6108              	.LBB1572:
 6109              	.LBB1567:
 6110              	.LBB1568:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 6111              		.loc 3 65 0 discriminator 2
 6112 0020 498B4424 		movq	96(%r12), %rax
 6112      60
 6113              	.LBE1568:
 6114              	.LBE1567:
 6115              		.loc 1 1572 0 discriminator 2
 6116 0025 83C301   		addl	$1, %ebx
 6117              	.LVL745:
 6118              		.loc 1 1573 0 discriminator 2
 6119 0028 488B3C28 		movq	(%rax,%rbp), %rdi
 6120 002c 4883C508 		addq	$8, %rbp
 6121 0030 E8000000 		call	_ZN12Fl_Tree_Item12hide_widgetsEv
 6121      00
 6122              	.LVL746:
 6123              		.loc 1 1572 0 discriminator 2
 6124 0035 413B5C24 		cmpl	104(%r12), %ebx
 6124      68
 6125 003a 7CE4     		jl	.L601
 6126              	.LBE1572:
 6127              		.loc 1 1576 0
 6128 003c 5B       		popq	%rbx
 6129              		.cfi_restore 3
 6130              		.cfi_def_cfa_offset 24
 6131              	.LVL747:
 6132 003d 5D       		popq	%rbp
 6133              		.cfi_restore 6
 6134              		.cfi_def_cfa_offset 16
 6135 003e 415C     		popq	%r12
 6136              		.cfi_restore 12
 6137              		.cfi_def_cfa_offset 8
 6138              	.LVL748:
 6139              	.L605:
 6140 0040 F3C3     		rep ret
 6141              		.cfi_endproc
 6142              	.LFE645:
 6144              		.section	.text.unlikely._ZN12Fl_Tree_Item5closeEv
 6145              	.LCOLDE50:
 6146              		.section	.text._ZN12Fl_Tree_Item5closeEv
 6147              	.LHOTE50:
 6148              		.section	.text.unlikely._ZNK12Fl_Tree_Item5depthEv,"ax",@progbits
 6149              		.align 2
 6150              	.LCOLDB51:
 6151              		.section	.text._ZNK12Fl_Tree_Item5depthEv,"ax",@progbits
 6152              	.LHOTB51:
 6153              		.align 2
 6154              		.p2align 4,,15
 6155              		.globl	_ZNK12Fl_Tree_Item5depthEv
 6157              	_ZNK12Fl_Tree_Item5depthEv:
 6158              	.LFB646:
 6159              		.loc 1 1584 0
 6160              		.cfi_startproc
 6161              	.LVL749:
 6162 0000 488B5778 		movq	120(%rdi), %rdx
 6163              	.LVL750:
 6164              		.loc 1 1585 0
 6165 0004 31C0     		xorl	%eax, %eax
 6166              		.loc 1 1587 0
 6167 0006 4885D2   		testq	%rdx, %rdx
 6168 0009 7413     		je	.L609
 6169              	.LVL751:
 6170 000b 0F1F4400 		.p2align 4,,10
 6170      00
 6171              		.p2align 3
 6172              	.L608:
 6173 0010 488B5278 		movq	120(%rdx), %rdx
 6174              	.LVL752:
 6175              		.loc 1 1588 0
 6176 0014 83C001   		addl	$1, %eax
 6177              	.LVL753:
 6178              		.loc 1 1587 0
 6179 0017 4885D2   		testq	%rdx, %rdx
 6180 001a 75F4     		jne	.L608
 6181 001c F3C3     		rep ret
 6182              	.LVL754:
 6183              	.L609:
 6184              		.loc 1 1592 0
 6185 001e F3C3     		rep ret
 6186              		.cfi_endproc
 6187              	.LFE646:
 6189              		.section	.text.unlikely._ZNK12Fl_Tree_Item5depthEv
 6190              	.LCOLDE51:
 6191              		.section	.text._ZNK12Fl_Tree_Item5depthEv
 6192              	.LHOTE51:
 6193              		.section	.text.unlikely._ZN12Fl_Tree_Item4nextEv,"ax",@progbits
 6194              		.align 2
 6195              	.LCOLDB52:
 6196              		.section	.text._ZN12Fl_Tree_Item4nextEv,"ax",@progbits
 6197              	.LHOTB52:
 6198              		.align 2
 6199              		.p2align 4,,15
 6200              		.globl	_ZN12Fl_Tree_Item4nextEv
 6202              	_ZN12Fl_Tree_Item4nextEv:
 6203              	.LFB647:
 6204              		.loc 1 1601 0
 6205              		.cfi_startproc
 6206              	.LVL755:
 6207              		.loc 1 1603 0
 6208 0000 8B4768   		movl	104(%rdi), %eax
 6209 0003 85C0     		testl	%eax, %eax
 6210 0005 7509     		jne	.L615
 6211 0007 E9000000 		jmp	_ZN12Fl_Tree_Item4nextEv.part.53
 6211      00
 6212              	.LVL756:
 6213 000c 0F1F4000 		.p2align 4,,10
 6214              		.p2align 3
 6215              	.L615:
 6216              	.LBB1573:
 6217              	.LBB1574:
 6218              	.LBB1575:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 6219              		.loc 3 65 0
 6220 0010 488B4760 		movq	96(%rdi), %rax
 6221 0014 488B00   		movq	(%rax), %rax
 6222              	.LVL757:
 6223              	.LBE1575:
 6224              	.LBE1574:
 6225              	.LBE1573:
 6226              		.loc 1 1623 0
 6227 0017 C3       		ret
 6228              		.cfi_endproc
 6229              	.LFE647:
 6231              		.section	.text.unlikely._ZN12Fl_Tree_Item4nextEv
 6232              	.LCOLDE52:
 6233              		.section	.text._ZN12Fl_Tree_Item4nextEv
 6234              	.LHOTE52:
 6235              		.section	.text.unlikely._ZN12Fl_Tree_Item4prevEv,"ax",@progbits
 6236              		.align 2
 6237              	.LCOLDB53:
 6238              		.section	.text._ZN12Fl_Tree_Item4prevEv,"ax",@progbits
 6239              	.LHOTB53:
 6240              		.align 2
 6241              		.p2align 4,,15
 6242              		.globl	_ZN12Fl_Tree_Item4prevEv
 6244              	_ZN12Fl_Tree_Item4prevEv:
 6245              	.LFB648:
 6246              		.loc 1 1633 0
 6247              		.cfi_startproc
 6248              	.LVL758:
 6249 0000 488B4778 		movq	120(%rdi), %rax
 6250              	.LVL759:
 6251              		.loc 1 1666 0
 6252 0004 4885C0   		testq	%rax, %rax
 6253 0007 745C     		je	.L617
 6254              	.LVL760:
 6255 0009 8B5068   		movl	104(%rax), %edx
 6256              	.LVL761:
 6257 000c 488B7060 		movq	96(%rax), %rsi
 6258              	.LBB1576:
 6259              	.LBB1577:
 6260              		.loc 1 316 0
 6261 0010 85D2     		testl	%edx, %edx
 6262 0012 7E26     		jle	.L634
 6263              	.LVL762:
 6264 0014 448D42FF 		leal	-1(%rdx), %r8d
 6265              		.loc 1 317 0
 6266 0018 31D2     		xorl	%edx, %edx
 6267 001a 483B3E   		cmpq	(%rsi), %rdi
 6268 001d 7513     		jne	.L622
 6269 001f EB5A     		jmp	.L636
 6270              	.LVL763:
 6271              		.p2align 4,,10
 6272 0021 0F1F8000 		.p2align 3
 6272      000000
 6273              	.L623:
 6274 0028 4883C201 		addq	$1, %rdx
 6275              	.LVL764:
 6276 002c 483B3CD6 		cmpq	(%rsi,%rdx,8), %rdi
 6277 0030 743E     		je	.L637
 6278              	.LVL765:
 6279              	.L622:
 6280              		.loc 1 316 0
 6281 0032 4C39C2   		cmpq	%r8, %rdx
 6282 0035 4863CA   		movslq	%edx, %rcx
 6283              	.LVL766:
 6284 0038 75EE     		jne	.L623
 6285              	.LVL767:
 6286              	.L634:
 6287 003a 48C7C1F0 		movq	$-16, %rcx
 6287      FFFFFF
 6288              	.L619:
 6289              	.LVL768:
 6290              	.LBE1577:
 6291              	.LBE1576:
 6292              	.LBB1578:
 6293              	.LBB1579:
 6294              	.LBB1580:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 6295              		.loc 3 65 0
 6296 0041 488B040E 		movq	(%rsi,%rcx), %rax
 6297              	.LVL769:
 6298 0045 8B5068   		movl	104(%rax), %edx
 6299              	.LVL770:
 6300              	.LBE1580:
 6301              	.LBE1579:
 6302              	.LBE1578:
 6303              		.loc 1 1672 0
 6304 0048 85D2     		testl	%edx, %edx
 6305 004a 7419     		je	.L617
 6306              	.LVL771:
 6307 004c 0F1F4000 		.p2align 4,,10
 6308              		.p2align 3
 6309              	.L624:
 6310              	.LBB1581:
 6311              	.LBB1582:
 6312              	.LBB1583:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 6313              		.loc 3 65 0
 6314 0050 488B4060 		movq	96(%rax), %rax
 6315              	.LVL772:
 6316 0054 83EA01   		subl	$1, %edx
 6317              	.LVL773:
 6318 0057 4863D2   		movslq	%edx, %rdx
 6319 005a 488B04D0 		movq	(%rax,%rdx,8), %rax
 6320              	.LVL774:
 6321 005e 8B5068   		movl	104(%rax), %edx
 6322              	.LVL775:
 6323              	.LBE1583:
 6324              	.LBE1582:
 6325              	.LBE1581:
 6326              		.loc 1 1672 0
 6327 0061 85D2     		testl	%edx, %edx
 6328 0063 75EB     		jne	.L624
 6329              	.LVL776:
 6330              	.L617:
 6331              		.loc 1 1677 0
 6332 0065 F3C3     		rep ret
 6333              	.LVL777:
 6334 0067 660F1F84 		.p2align 4,,10
 6334      00000000 
 6334      00
 6335              		.p2align 3
 6336              	.L637:
 6337              		.loc 1 1668 0
 6338 0070 83F9FF   		cmpl	$-1, %ecx
 6339 0073 74F0     		je	.L617
 6340 0075 48C1E103 		salq	$3, %rcx
 6341              	.LVL778:
 6342 0079 EBC6     		jmp	.L619
 6343              	.LVL779:
 6344              	.L636:
 6345 007b F3C3     		rep ret
 6346              		.cfi_endproc
 6347              	.LFE648:
 6349              		.section	.text.unlikely._ZN12Fl_Tree_Item4prevEv
 6350              	.LCOLDE53:
 6351              		.section	.text._ZN12Fl_Tree_Item4prevEv
 6352              	.LHOTE53:
 6353              		.section	.text.unlikely._ZN12Fl_Tree_Item12next_siblingEv,"ax",@progbits
 6354              		.align 2
 6355              	.LCOLDB54:
 6356              		.section	.text._ZN12Fl_Tree_Item12next_siblingEv,"ax",@progbits
 6357              	.LHOTB54:
 6358              		.align 2
 6359              		.p2align 4,,15
 6360              		.globl	_ZN12Fl_Tree_Item12next_siblingEv
 6362              	_ZN12Fl_Tree_Item12next_siblingEv:
 6363              	.LFB649:
 6364              		.loc 1 1687 0
 6365              		.cfi_startproc
 6366              	.LVL780:
 6367 0000 488B4778 		movq	120(%rdi), %rax
 6368              	.LVL781:
 6369              		.loc 1 1693 0
 6370 0004 4885C0   		testq	%rax, %rax
 6371 0007 7434     		je	.L639
 6372              	.LVL782:
 6373 0009 8B7068   		movl	104(%rax), %esi
 6374              	.LVL783:
 6375              	.LBB1584:
 6376              	.LBB1585:
 6377              		.loc 1 316 0
 6378 000c 85F6     		testl	%esi, %esi
 6379 000e 7E2B     		jle	.L648
 6380              	.LVL784:
 6381 0010 4C8B4060 		movq	96(%rax), %r8
 6382              	.LVL785:
 6383              		.loc 1 317 0
 6384 0014 31C9     		xorl	%ecx, %ecx
 6385 0016 493B38   		cmpq	(%r8), %rdi
 6386 0019 498D5008 		leaq	8(%r8), %rdx
 6387 001d 7515     		jne	.L643
 6388 001f EB33     		jmp	.L654
 6389              	.LVL786:
 6390              		.p2align 4,,10
 6391 0021 0F1F8000 		.p2align 3
 6391      000000
 6392              	.L644:
 6393 0028 4883C208 		addq	$8, %rdx
 6394              	.LVL787:
 6395 002c 483B7AF8 		cmpq	-8(%rdx), %rdi
 6396 0030 740E     		je	.L642
 6397 0032 89C1     		movl	%eax, %ecx
 6398              	.LVL788:
 6399              	.L643:
 6400              		.loc 1 316 0
 6401 0034 8D4101   		leal	1(%rcx), %eax
 6402              	.LVL789:
 6403 0037 39F0     		cmpl	%esi, %eax
 6404 0039 75ED     		jne	.L644
 6405              	.LVL790:
 6406              	.L648:
 6407              	.LBE1585:
 6408              	.LBE1584:
 6409              		.loc 1 1693 0
 6410 003b 31C0     		xorl	%eax, %eax
 6411              	.L639:
 6412              		.loc 1 1700 0
 6413 003d F3C3     		rep ret
 6414              	.LVL791:
 6415 003f 90       		.p2align 4,,10
 6416              		.p2align 3
 6417              	.L642:
 6418              		.loc 1 1695 0
 6419 0040 83F8FF   		cmpl	$-1, %eax
 6420 0043 74F6     		je	.L648
 6421 0045 83C102   		addl	$2, %ecx
 6422              	.L640:
 6423              	.LVL792:
 6424              		.loc 1 1696 0
 6425 0048 39CE     		cmpl	%ecx, %esi
 6426 004a 7EEF     		jle	.L648
 6427              	.LVL793:
 6428              	.LBB1587:
 6429              	.LBB1588:
 6430              	.LBB1589:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 6431              		.loc 3 65 0
 6432 004c 4863C9   		movslq	%ecx, %rcx
 6433 004f 498B04C8 		movq	(%r8,%rcx,8), %rax
 6434              	.LBE1589:
 6435              	.LBE1588:
 6436              	.LBE1587:
 6437              		.loc 1 1697 0
 6438 0053 C3       		ret
 6439              	.LVL794:
 6440              	.L654:
 6441              	.LBB1590:
 6442              	.LBB1586:
 6443              		.loc 1 317 0
 6444 0054 B9010000 		movl	$1, %ecx
 6444      00
 6445 0059 EBED     		jmp	.L640
 6446              	.LBE1586:
 6447              	.LBE1590:
 6448              		.cfi_endproc
 6449              	.LFE649:
 6451              		.section	.text.unlikely._ZN12Fl_Tree_Item12next_siblingEv
 6452              	.LCOLDE54:
 6453              		.section	.text._ZN12Fl_Tree_Item12next_siblingEv
 6454              	.LHOTE54:
 6455              		.section	.text.unlikely._ZN12Fl_Tree_Item12prev_siblingEv,"ax",@progbits
 6456              		.align 2
 6457              	.LCOLDB55:
 6458              		.section	.text._ZN12Fl_Tree_Item12prev_siblingEv,"ax",@progbits
 6459              	.LHOTB55:
 6460              		.align 2
 6461              		.p2align 4,,15
 6462              		.globl	_ZN12Fl_Tree_Item12prev_siblingEv
 6464              	_ZN12Fl_Tree_Item12prev_siblingEv:
 6465              	.LFB650:
 6466              		.loc 1 1709 0
 6467              		.cfi_startproc
 6468              	.LVL795:
 6469 0000 488B4778 		movq	120(%rdi), %rax
 6470              	.LVL796:
 6471              		.loc 1 1715 0
 6472 0004 4885C0   		testq	%rax, %rax
 6473 0007 7435     		je	.L656
 6474              	.LVL797:
 6475 0009 8B7068   		movl	104(%rax), %esi
 6476              	.LVL798:
 6477              	.LBB1591:
 6478              	.LBB1592:
 6479              		.loc 1 316 0
 6480 000c 85F6     		testl	%esi, %esi
 6481 000e 7E2C     		jle	.L662
 6482              	.LVL799:
 6483 0010 4C8B4060 		movq	96(%rax), %r8
 6484              	.LVL800:
 6485              		.loc 1 317 0
 6486 0014 493B38   		cmpq	(%r8), %rdi
 6487 0017 7423     		je	.L662
 6488 0019 498D5008 		leaq	8(%r8), %rdx
 6489 001d 31C9     		xorl	%ecx, %ecx
 6490 001f EB14     		jmp	.L657
 6491              	.LVL801:
 6492              		.p2align 4,,10
 6493 0021 0F1F8000 		.p2align 3
 6493      000000
 6494              	.L659:
 6495 0028 4883C208 		addq	$8, %rdx
 6496              	.LVL802:
 6497 002c 483B7AF8 		cmpq	-8(%rdx), %rdi
 6498 0030 740E     		je	.L658
 6499 0032 4863C8   		movslq	%eax, %rcx
 6500              	.LVL803:
 6501              	.L657:
 6502              		.loc 1 316 0
 6503 0035 8D4101   		leal	1(%rcx), %eax
 6504              	.LVL804:
 6505 0038 39C6     		cmpl	%eax, %esi
 6506 003a 75EC     		jne	.L659
 6507              	.LVL805:
 6508              	.L662:
 6509              	.LBE1592:
 6510              	.LBE1591:
 6511              		.loc 1 1715 0
 6512 003c 31C0     		xorl	%eax, %eax
 6513              	.L656:
 6514              		.loc 1 1721 0
 6515 003e F3C3     		rep ret
 6516              	.LVL806:
 6517              		.p2align 4,,10
 6518              		.p2align 3
 6519              	.L658:
 6520              		.loc 1 1718 0
 6521 0040 85C0     		testl	%eax, %eax
 6522 0042 7EF8     		jle	.L662
 6523              	.LVL807:
 6524              	.LBB1593:
 6525              	.LBB1594:
 6526              	.LBB1595:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 6527              		.loc 3 65 0 discriminator 1
 6528 0044 498B04C8 		movq	(%r8,%rcx,8), %rax
 6529              	.LVL808:
 6530              	.LBE1595:
 6531              	.LBE1594:
 6532              	.LBE1593:
 6533              		.loc 1 1718 0 discriminator 1
 6534 0048 C3       		ret
 6535              		.cfi_endproc
 6536              	.LFE650:
 6538              		.section	.text.unlikely._ZN12Fl_Tree_Item12prev_siblingEv
 6539              	.LCOLDE55:
 6540              		.section	.text._ZN12Fl_Tree_Item12prev_siblingEv
 6541              	.LHOTE55:
 6542              		.section	.text.unlikely._ZN12Fl_Tree_Item16update_prev_nextEi,"ax",@progbits
 6543              		.align 2
 6544              	.LCOLDB56:
 6545              		.section	.text._ZN12Fl_Tree_Item16update_prev_nextEi,"ax",@progbits
 6546              	.LHOTB56:
 6547              		.align 2
 6548              		.p2align 4,,15
 6549              		.globl	_ZN12Fl_Tree_Item16update_prev_nextEi
 6551              	_ZN12Fl_Tree_Item16update_prev_nextEi:
 6552              	.LFB651:
 6553              		.loc 1 1729 0
 6554              		.cfi_startproc
 6555              	.LVL809:
 6556 0000 F3C3     		rep ret
 6557              		.cfi_endproc
 6558              	.LFE651:
 6560              		.section	.text.unlikely._ZN12Fl_Tree_Item16update_prev_nextEi
 6561              	.LCOLDE56:
 6562              		.section	.text._ZN12Fl_Tree_Item16update_prev_nextEi
 6563              	.LHOTE56:
 6564              		.section	.text.unlikely._ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs,"ax",@progbits
 6565              		.align 2
 6566              	.LCOLDB57:
 6567              		.section	.text._ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs,"ax",@progbits
 6568              	.LHOTB57:
 6569              		.align 2
 6570              		.p2align 4,,15
 6571              		.globl	_ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs
 6573              	_ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs:
 6574              	.LFB652:
 6575              		.loc 1 1766 0
 6576              		.cfi_startproc
 6577              	.LVL810:
 6578              		.loc 1 1766 0
 6579 0000 4989F2   		movq	%rsi, %r10
 6580              		.loc 1 1767 0
 6581 0003 4889FA   		movq	%rdi, %rdx
 6582              	.LVL811:
 6583 0006 662E0F1F 		.p2align 4,,10
 6583      84000000 
 6583      0000
 6584              		.p2align 3
 6585              	.L668:
 6586              	.LBB1596:
 6587              	.LBB1597:
 6588              		.loc 1 1603 0
 6589 0010 8B4268   		movl	104(%rdx), %eax
 6590 0013 85C0     		testl	%eax, %eax
 6591 0015 7437     		je	.L669
 6592              	.LVL812:
 6593              	.L681:
 6594 0017 488B4260 		movq	96(%rdx), %rax
 6595              	.LVL813:
 6596              	.LBB1598:
 6597              	.LBB1599:
 6598              	.LBB1600:
  65:fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H ****   }
 6599              		.loc 3 65 0
 6600 001b 488B10   		movq	(%rax), %rdx
 6601              	.LVL814:
 6602              	.LBE1600:
 6603              	.LBE1599:
 6604              	.LBE1598:
 6605              	.LBE1597:
 6606              	.LBE1596:
 6607              		.loc 1 1770 0
 6608 001e 4885D2   		testq	%rdx, %rdx
 6609 0021 743B     		je	.L676
 6610              	.L682:
 6611              	.LVL815:
 6612              	.LBB1602:
 6613              	.LBB1603:
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 6614              		.loc 4 503 0
 6615 0023 48837A78 		cmpq	$0, 120(%rdx)
 6615      00
 6616 0028 7416     		je	.L672
 6617              	.L675:
 6618              	.LVL816:
 6619              	.LBE1603:
 6620              	.LBE1602:
 6621              	.LBB1604:
 6622              	.LBB1605:
 6623              	.LBB1606:
 6624              	.LBB1607:
 6625              	.LBB1608:
 6626              	.LBB1609:
 535:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case   ACTIVE: return(_active ? 1 : 0);
 6627              		.loc 4 535 0
 6628 002a 807A1900 		cmpb	$0, 25(%rdx)
 6629 002e 74E0     		je	.L668
 6630              	.LVL817:
 6631              	.LBE1609:
 6632              	.LBE1608:
 6633              	.LBE1607:
 6634              	.LBE1606:
 6635 0030 4889D7   		movq	%rdx, %rdi
 6636 0033 E8000000 		call	_ZNK12Fl_Tree_Item9visible_rEv.part.54
 6636      00
 6637              	.LVL818:
 6638              	.LBE1605:
 6639              	.LBE1604:
 6640              		.loc 1 1772 0
 6641 0038 85C0     		testl	%eax, %eax
 6642 003a 74D4     		je	.L668
 6643 003c 4889D0   		movq	%rdx, %rax
 6644 003f C3       		ret
 6645              		.p2align 4,,10
 6646              		.p2align 3
 6647              	.L672:
 6648              	.LVL819:
 6649              		.loc 1 1771 0
 6650 0040 41807A51 		cmpb	$0, 81(%r10)
 6650      00
 6651 0045 75E3     		jne	.L675
 6652              	.LVL820:
 6653              	.LBB1610:
 6654              	.LBB1601:
 6655              		.loc 1 1603 0
 6656 0047 8B4268   		movl	104(%rdx), %eax
 6657 004a 85C0     		testl	%eax, %eax
 6658 004c 75C9     		jne	.L681
 6659              	.LVL821:
 6660              	.L669:
 6661 004e 4889D7   		movq	%rdx, %rdi
 6662 0051 E8000000 		call	_ZN12Fl_Tree_Item4nextEv.part.53
 6662      00
 6663              	.LVL822:
 6664 0056 4889C2   		movq	%rax, %rdx
 6665              	.LBE1601:
 6666              	.LBE1610:
 6667              		.loc 1 1770 0
 6668 0059 4885D2   		testq	%rdx, %rdx
 6669 005c 75C5     		jne	.L682
 6670              	.L676:
 6671 005e 31C0     		xorl	%eax, %eax
 6672 0060 C3       		ret
 6673              		.cfi_endproc
 6674              	.LFE652:
 6676              		.section	.text.unlikely._ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs
 6677              	.LCOLDE57:
 6678              		.section	.text._ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs
 6679              	.LHOTE57:
 6680              		.section	.text.unlikely._ZN12Fl_Tree_Item14next_displayedER13Fl_Tree_Prefs,"ax",@progbits
 6681              		.align 2
 6682              	.LCOLDB58:
 6683              		.section	.text._ZN12Fl_Tree_Item14next_displayedER13Fl_Tree_Prefs,"ax",@progbits
 6684              	.LHOTB58:
 6685              		.align 2
 6686              		.p2align 4,,15
 6687              		.globl	_ZN12Fl_Tree_Item14next_displayedER13Fl_Tree_Prefs
 6689              	_ZN12Fl_Tree_Item14next_displayedER13Fl_Tree_Prefs:
 6690              	.LFB653:
 6691              		.loc 1 1778 0
 6692              		.cfi_startproc
 6693              	.LVL823:
 6694              		.loc 1 1779 0
 6695 0000 E9000000 		jmp	_ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs
 6695      00
 6696              	.LVL824:
 6697              		.cfi_endproc
 6698              	.LFE653:
 6700              		.section	.text.unlikely._ZN12Fl_Tree_Item14next_displayedER13Fl_Tree_Prefs
 6701              	.LCOLDE58:
 6702              		.section	.text._ZN12Fl_Tree_Item14next_displayedER13Fl_Tree_Prefs
 6703              	.LHOTE58:
 6704              		.section	.text.unlikely._ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs,"ax",@progbits
 6705              		.align 2
 6706              	.LCOLDB59:
 6707              		.section	.text._ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs,"ax",@progbits
 6708              	.LHOTB59:
 6709              		.align 2
 6710              		.p2align 4,,15
 6711              		.globl	_ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs
 6713              	_ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs:
 6714              	.LFB654:
 6715              		.loc 1 1791 0
 6716              		.cfi_startproc
 6717              	.LVL825:
 6718              		.loc 1 1793 0
 6719 0000 4885FF   		testq	%rdi, %rdi
 6720 0003 7463     		je	.L702
 6721 0005 4989F1   		movq	%rsi, %r9
 6722 0008 EB0C     		jmp	.L691
 6723              	.LVL826:
 6724 000a 660F1F44 		.p2align 4,,10
 6724      0000
 6725              		.p2align 3
 6726              	.L699:
 6727              	.LBB1611:
 6728              	.LBB1612:
 6729              	.LBB1613:
 6730              	.LBB1614:
 6731              	.LBB1615:
 535:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case   ACTIVE: return(_active ? 1 : 0);
 6732              		.loc 4 535 0
 6733 0010 807F1900 		cmpb	$0, 25(%rdi)
 6734 0014 752A     		jne	.L704
 6735              	.LVL827:
 6736              	.L691:
 6737              	.LBE1615:
 6738              	.LBE1614:
 6739              	.LBE1613:
 6740              	.LBE1612:
 6741              		.loc 1 1794 0
 6742 0016 E8000000 		call	_ZN12Fl_Tree_Item4prevEv
 6742      00
 6743              	.LVL828:
 6744              		.loc 1 1795 0
 6745 001b 4885C0   		testq	%rax, %rax
 6746              		.loc 1 1794 0
 6747 001e 4889C7   		movq	%rax, %rdi
 6748              	.LVL829:
 6749              		.loc 1 1795 0
 6750 0021 7445     		je	.L702
 6751 0023 488B4078 		movq	120(%rax), %rax
 6752              	.LVL830:
 6753              	.LBB1616:
 6754              	.LBB1617:
 503:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 6755              		.loc 4 503 0
 6756 0027 4885C0   		testq	%rax, %rax
 6757 002a 75E4     		jne	.L699
 6758              	.LVL831:
 6759              	.LBE1617:
 6760              	.LBE1616:
 6761              		.loc 1 1797 0
 6762 002c 41807951 		cmpb	$0, 81(%r9)
 6762      00
 6763 0031 7435     		je	.L702
 6764              	.LVL832:
 6765 0033 807F1900 		cmpb	$0, 25(%rdi)
 6766 0037 480F45C7 		cmovne	%rdi, %rax
 6767 003b C3       		ret
 6768              	.LVL833:
 6769 003c 0F1F4000 		.p2align 4,,10
 6770              		.p2align 3
 6771              	.L704:
 6772 0040 488B5078 		movq	120(%rax), %rdx
 6773              	.LVL834:
 6774              		.loc 1 1803 0
 6775 0044 4885D2   		testq	%rdx, %rdx
 6776 0047 7414     		je	.L696
 6777              	.LVL835:
 6778              	.L689:
 6779              	.LBB1618:
 6780              	.LBB1619:
 6781              	.LBB1620:
 534:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case  VISIBLE: return(_visible ? 1 : 0);
 6782              		.loc 4 534 0
 6783 0049 80781800 		cmpb	$0, 24(%rax)
 6784 004d 480F44F8 		cmove	%rax, %rdi
 6785              	.LVL836:
 6786 0051 4889D0   		movq	%rdx, %rax
 6787 0054 488B5278 		movq	120(%rdx), %rdx
 6788              	.LVL837:
 6789              	.LBE1620:
 6790              	.LBE1619:
 6791              	.LBE1618:
 6792              		.loc 1 1803 0
 6793 0058 4885D2   		testq	%rdx, %rdx
 6794 005b 75EC     		jne	.L689
 6795              	.LVL838:
 6796              	.L696:
 6797              		.loc 1 1794 0
 6798 005d 4889F8   		movq	%rdi, %rax
 6799 0060 C3       		ret
 6800              	.LVL839:
 6801              		.p2align 4,,10
 6802 0061 0F1F8000 		.p2align 3
 6802      000000
 6803              	.L702:
 6804              		.loc 1 1797 0
 6805 0068 31C0     		xorl	%eax, %eax
 6806 006a C3       		ret
 6807              	.LBE1611:
 6808              		.cfi_endproc
 6809              	.LFE654:
 6811              		.section	.text.unlikely._ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs
 6812              	.LCOLDE59:
 6813              		.section	.text._ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs
 6814              	.LHOTE59:
 6815              		.section	.text.unlikely._ZN12Fl_Tree_Item14prev_displayedER13Fl_Tree_Prefs,"ax",@progbits
 6816              		.align 2
 6817              	.LCOLDB60:
 6818              		.section	.text._ZN12Fl_Tree_Item14prev_displayedER13Fl_Tree_Prefs,"ax",@progbits
 6819              	.LHOTB60:
 6820              		.align 2
 6821              		.p2align 4,,15
 6822              		.globl	_ZN12Fl_Tree_Item14prev_displayedER13Fl_Tree_Prefs
 6824              	_ZN12Fl_Tree_Item14prev_displayedER13Fl_Tree_Prefs:
 6825              	.LFB655:
 6826              		.loc 1 1814 0
 6827              		.cfi_startproc
 6828              	.LVL840:
 6829              		.loc 1 1815 0
 6830 0000 E9000000 		jmp	_ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs
 6830      00
 6831              	.LVL841:
 6832              		.cfi_endproc
 6833              	.LFE655:
 6835              		.section	.text.unlikely._ZN12Fl_Tree_Item14prev_displayedER13Fl_Tree_Prefs
 6836              	.LCOLDE60:
 6837              		.section	.text._ZN12Fl_Tree_Item14prev_displayedER13Fl_Tree_Prefs
 6838              	.LHOTE60:
 6839              		.section	.text.unlikely._ZNK12Fl_Tree_Item9visible_rEv,"ax",@progbits
 6840              		.align 2
 6841              	.LCOLDB61:
 6842              		.section	.text._ZNK12Fl_Tree_Item9visible_rEv,"ax",@progbits
 6843              	.LHOTB61:
 6844              		.align 2
 6845              		.p2align 4,,15
 6846              		.globl	_ZNK12Fl_Tree_Item9visible_rEv
 6848              	_ZNK12Fl_Tree_Item9visible_rEv:
 6849              	.LFB656:
 6850              		.loc 1 1823 0
 6851              		.cfi_startproc
 6852              	.LVL842:
 6853              	.LBB1621:
 6854              	.LBB1622:
 6855              	.LBB1623:
 6856              	.LBB1624:
 535:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****       case   ACTIVE: return(_active ? 1 : 0);
 6857              		.loc 4 535 0
 6858 0000 807F1900 		cmpb	$0, 25(%rdi)
 6859 0004 750A     		jne	.L709
 6860              	.LBE1624:
 6861              	.LBE1623:
 6862              	.LBE1622:
 6863              	.LBE1621:
 6864              		.loc 1 1828 0
 6865 0006 31C0     		xorl	%eax, %eax
 6866 0008 C3       		ret
 6867 0009 0F1F8000 		.p2align 4,,10
 6867      000000
 6868              		.p2align 3
 6869              	.L709:
 6870              	.LVL843:
 6871 0010 E9000000 		jmp	_ZNK12Fl_Tree_Item9visible_rEv.part.54
 6871      00
 6872              	.LVL844:
 6873              		.cfi_endproc
 6874              	.LFE656:
 6876              		.section	.text.unlikely._ZNK12Fl_Tree_Item9visible_rEv
 6877              	.LCOLDE61:
 6878              		.section	.text._ZNK12Fl_Tree_Item9visible_rEv
 6879              	.LHOTE61:
 6880              		.section	.text.unlikely._ZN12Fl_Tree_Item11recalc_treeEv,"ax",@progbits
 6881              		.align 2
 6882              	.LCOLDB62:
 6883              		.section	.text._ZN12Fl_Tree_Item11recalc_treeEv,"ax",@progbits
 6884              	.LHOTB62:
 6885              		.align 2
 6886              		.p2align 4,,15
 6887              		.globl	_ZN12Fl_Tree_Item11recalc_treeEv
 6889              	_ZN12Fl_Tree_Item11recalc_treeEv:
 6890              	.LFB657:
 6891              		.loc 1 1835 0
 6892              		.cfi_startproc
 6893              	.LVL845:
 6894 0000 F3C3     		rep ret
 6895              		.cfi_endproc
 6896              	.LFE657:
 6898              		.section	.text.unlikely._ZN12Fl_Tree_Item11recalc_treeEv
 6899              	.LCOLDE62:
 6900              		.section	.text._ZN12Fl_Tree_Item11recalc_treeEv
 6901              	.LHOTE62:
 6902              		.text
 6903              	.Letext0:
 6904              		.section	.text.unlikely._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51
 6905              	.Letext_cold0:
 6906              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 6907              		.file 10 "/usr/include/x86_64-linux-gnu/bits/types.h"
 6908              		.file 11 "/usr/include/libio.h"
 6909              		.file 12 "fltk-1.3.4-1/FL/fl_types.h"
 6910              		.file 13 "fltk-1.3.4-1/FL/Enumerations.H"
 6911              		.file 14 "fltk-1.3.4-1/FL/Fl_Widget.H"
 6912              		.file 15 "fltk-1.3.4-1/FL/Fl_Device.H"
 6913              		.file 16 "fltk-1.3.4-1/FL/Fl_Tree_Prefs.H"
 6914              		.file 17 "/usr/include/stdio.h"
 6915              		.file 18 "/usr/include/stdlib.h"
 6916              		.file 19 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Tree_Item.cxx
     /tmp/cc0P876n.s:15     .text._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51:0000000000000000 _ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs.part.51
     /tmp/cc0P876n.s:123    .text._ZN12Fl_Tree_Item4nextEv.part.53:0000000000000000 _ZN12Fl_Tree_Item4nextEv.part.53
     /tmp/cc0P876n.s:243    .text._ZNK12Fl_Tree_Item9visible_rEv.part.54:0000000000000000 _ZNK12Fl_Tree_Item9visible_rEv.part.54
     /tmp/cc0P876n.s:312    .text._ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:312    .text._ZN12Fl_Tree_ItemC2ERK13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_ItemC1ERK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:432    .text._ZN12Fl_Tree_Item5_InitERK13Fl_Tree_PrefsP7Fl_Tree:0000000000000000 _ZN12Fl_Tree_Item5_InitERK13Fl_Tree_PrefsP7Fl_Tree
     /tmp/cc0P876n.s:513    .text._ZN12Fl_Tree_ItemD2Ev:0000000000000000 _ZN12Fl_Tree_ItemD2Ev
     /tmp/cc0P876n.s:513    .text._ZN12Fl_Tree_ItemD2Ev:0000000000000000 _ZN12Fl_Tree_ItemD1Ev
     /tmp/cc0P876n.s:569    .text._ZN12Fl_Tree_ItemC2EPKS_:0000000000000000 _ZN12Fl_Tree_ItemC2EPKS_
     /tmp/cc0P876n.s:569    .text._ZN12Fl_Tree_ItemC2EPKS_:0000000000000000 _ZN12Fl_Tree_ItemC1EPKS_
     /tmp/cc0P876n.s:725    .text._ZNK12Fl_Tree_Item9show_selfEPKc:0000000000000000 _ZNK12Fl_Tree_Item9show_selfEPKc
     /tmp/cc0P876n.s:966    .text._ZN12Fl_Tree_Item5labelEPKc:0000000000000000 _ZN12Fl_Tree_Item5labelEPKc
     /tmp/cc0P876n.s:1028   .text._ZNK12Fl_Tree_Item5labelEv:0000000000000000 _ZNK12Fl_Tree_Item5labelEv
     /tmp/cc0P876n.s:1053   .text._ZNK12Fl_Tree_Item5childEi:0000000000000000 _ZNK12Fl_Tree_Item5childEi
     /tmp/cc0P876n.s:1085   .text._ZN12Fl_Tree_Item14clear_childrenEv:0000000000000000 _ZN12Fl_Tree_Item14clear_childrenEv
     /tmp/cc0P876n.s:1111   .text._ZN12Fl_Tree_Item10find_childEPKc:0000000000000000 _ZN12Fl_Tree_Item10find_childEPKc
     /tmp/cc0P876n.s:1251   .text._ZNK12Fl_Tree_Item15find_child_itemEPKc:0000000000000000 _ZNK12Fl_Tree_Item15find_child_itemEPKc
     /tmp/cc0P876n.s:1356   .text._ZN12Fl_Tree_Item15find_child_itemEPKc:0000000000000000 _ZN12Fl_Tree_Item15find_child_itemEPKc
     /tmp/cc0P876n.s:1380   .text._ZNK12Fl_Tree_Item15find_child_itemEPPc:0000000000000000 _ZNK12Fl_Tree_Item15find_child_itemEPPc
     /tmp/cc0P876n.s:1501   .text._ZN12Fl_Tree_Item15find_child_itemEPPc:0000000000000000 _ZN12Fl_Tree_Item15find_child_itemEPPc
     /tmp/cc0P876n.s:1525   .text._ZNK12Fl_Tree_Item9find_itemEPPc:0000000000000000 _ZNK12Fl_Tree_Item9find_itemEPPc
     /tmp/cc0P876n.s:1634   .text._ZN12Fl_Tree_Item9find_itemEPPc:0000000000000000 _ZN12Fl_Tree_Item9find_itemEPPc
     /tmp/cc0P876n.s:1658   .text._ZN12Fl_Tree_Item10find_childEPS_:0000000000000000 _ZN12Fl_Tree_Item10find_childEPS_
     /tmp/cc0P876n.s:1726   .text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_:0000000000000000 _ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKcPS_
     /tmp/cc0P876n.s:1958   .text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKc:0000000000000000 _ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPKc
     /tmp/cc0P876n.s:1983   .text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_:0000000000000000 _ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPcPS_
     /tmp/cc0P876n.s:2124   .text._ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPc:0000000000000000 _ZN12Fl_Tree_Item3addERK13Fl_Tree_PrefsPPc
     /tmp/cc0P876n.s:2149   .text._ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci:0000000000000000 _ZN12Fl_Tree_Item6insertERK13Fl_Tree_PrefsPKci
     /tmp/cc0P876n.s:2233   .text._ZN12Fl_Tree_Item12insert_aboveERK13Fl_Tree_PrefsPKc:0000000000000000 _ZN12Fl_Tree_Item12insert_aboveERK13Fl_Tree_PrefsPKc
     /tmp/cc0P876n.s:2314   .text._ZN12Fl_Tree_Item8deparentEi:0000000000000000 _ZN12Fl_Tree_Item8deparentEi
     /tmp/cc0P876n.s:2366   .text._ZN12Fl_Tree_Item8reparentEPS_i:0000000000000000 _ZN12Fl_Tree_Item8reparentEPS_i
     /tmp/cc0P876n.s:2432   .text._ZN12Fl_Tree_Item4moveEii:0000000000000000 _ZN12Fl_Tree_Item4moveEii
     /tmp/cc0P876n.s:2458   .text._ZN12Fl_Tree_Item4moveEPS_ii:0000000000000000 _ZN12Fl_Tree_Item4moveEPS_ii
     /tmp/cc0P876n.s:3019   .text._ZN12Fl_Tree_Item10move_aboveEPS_:0000000000000000 _ZN12Fl_Tree_Item10move_aboveEPS_
     /tmp/cc0P876n.s:3045   .text._ZN12Fl_Tree_Item10move_belowEPS_:0000000000000000 _ZN12Fl_Tree_Item10move_belowEPS_
     /tmp/cc0P876n.s:3071   .text._ZN12Fl_Tree_Item9move_intoEPS_i:0000000000000000 _ZN12Fl_Tree_Item9move_intoEPS_i
     /tmp/cc0P876n.s:3098   .text._ZN12Fl_Tree_Item12remove_childEPS_:0000000000000000 _ZN12Fl_Tree_Item12remove_childEPS_
     /tmp/cc0P876n.s:3210   .text._ZN12Fl_Tree_Item12remove_childEPKc:0000000000000000 _ZN12Fl_Tree_Item12remove_childEPKc
     /tmp/cc0P876n.s:3341   .text._ZN12Fl_Tree_Item13swap_childrenEii:0000000000000000 _ZN12Fl_Tree_Item13swap_childrenEii
     /tmp/cc0P876n.s:3385   .text._ZN12Fl_Tree_Item13swap_childrenEPS_S0_:0000000000000000 _ZN12Fl_Tree_Item13swap_childrenEPS_S0_
     /tmp/cc0P876n.s:3537   .text._ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_Item25draw_horizontal_connectorEiiiRK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:3714   .text._ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_Item23draw_vertical_connectorEiiiRK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:3881   .text._ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs:0000000000000000 _ZNK12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:4054   .text._ZN12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_Item12find_clickedERK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:4078   .text._ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs:0000000000000000 _ZNK12Fl_Tree_Item16calc_item_heightERK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:4117   .text._ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi:0000000000000000 _ZN12Fl_Tree_Item4drawEiRiiP9Fl_WidgetPS_RK13Fl_Tree_Prefsi
     /tmp/cc0P876n.s:5646   .text._ZNK12Fl_Tree_Item22event_on_collapse_iconERK13Fl_Tree_Prefs:0000000000000000 _ZNK12Fl_Tree_Item22event_on_collapse_iconERK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:5741   .text._ZNK12Fl_Tree_Item14event_on_labelERK13Fl_Tree_Prefs:0000000000000000 _ZNK12Fl_Tree_Item14event_on_labelERK13Fl_Tree_Prefs
     /tmp/cc0P876n.s:5809   .text._ZN12Fl_Tree_Item12show_widgetsEv:0000000000000000 _ZN12Fl_Tree_Item12show_widgetsEv
     /tmp/cc0P876n.s:5902   .text._ZN12Fl_Tree_Item12hide_widgetsEv:0000000000000000 _ZN12Fl_Tree_Item12hide_widgetsEv
     /tmp/cc0P876n.s:5983   .text._ZN12Fl_Tree_Item4openEv:0000000000000000 _ZN12Fl_Tree_Item4openEv
     /tmp/cc0P876n.s:6070   .text._ZN12Fl_Tree_Item5closeEv:0000000000000000 _ZN12Fl_Tree_Item5closeEv
     /tmp/cc0P876n.s:6157   .text._ZNK12Fl_Tree_Item5depthEv:0000000000000000 _ZNK12Fl_Tree_Item5depthEv
     /tmp/cc0P876n.s:6202   .text._ZN12Fl_Tree_Item4nextEv:0000000000000000 _ZN12Fl_Tree_Item4nextEv
     /tmp/cc0P876n.s:6244   .text._ZN12Fl_Tree_Item4prevEv:0000000000000000 _ZN12Fl_Tree_Item4prevEv
     /tmp/cc0P876n.s:6362   .text._ZN12Fl_Tree_Item12next_siblingEv:0000000000000000 _ZN12Fl_Tree_Item12next_siblingEv
     /tmp/cc0P876n.s:6464   .text._ZN12Fl_Tree_Item12prev_siblingEv:0000000000000000 _ZN12Fl_Tree_Item12prev_siblingEv
     /tmp/cc0P876n.s:6551   .text._ZN12Fl_Tree_Item16update_prev_nextEi:0000000000000000 _ZN12Fl_Tree_Item16update_prev_nextEi
     /tmp/cc0P876n.s:6573   .text._ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_Item12next_visibleER13Fl_Tree_Prefs
     /tmp/cc0P876n.s:6689   .text._ZN12Fl_Tree_Item14next_displayedER13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_Item14next_displayedER13Fl_Tree_Prefs
     /tmp/cc0P876n.s:6713   .text._ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_Item12prev_visibleER13Fl_Tree_Prefs
     /tmp/cc0P876n.s:6824   .text._ZN12Fl_Tree_Item14prev_displayedER13Fl_Tree_Prefs:0000000000000000 _ZN12Fl_Tree_Item14prev_displayedER13Fl_Tree_Prefs
     /tmp/cc0P876n.s:6848   .text._ZNK12Fl_Tree_Item9visible_rEv:0000000000000000 _ZNK12Fl_Tree_Item9visible_rEv
     /tmp/cc0P876n.s:6889   .text._ZN12Fl_Tree_Item11recalc_treeEv:0000000000000000 _ZN12Fl_Tree_Item11recalc_treeEv
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
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.stddef.h.401.7dfff676fcc31e4ba811117c262087d2
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
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
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d

UNDEFINED SYMBOLS
fl_graphics_driver
_ZN18Fl_Tree_Item_ArrayC1Ei
free
_ZN18Fl_Tree_Item_ArrayD1Ev
strdup
__printf_chk
stdout
fflush
strlen
_Znam
strcpy
_ZdaPv
_ZN18Fl_Tree_Item_Array5clearEv
strcmp
_ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
_ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item
_Znwm
_ZN18Fl_Tree_Item_Array8deparentEi
_ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i
_ZN18Fl_Tree_Item_Array4moveEii
_ZN18Fl_Tree_Item_Array6removeEi
_ZN2Fl12event_insideEiiii
_ZNK9Fl_Widget8active_rEv
_Z11fl_contrastjj
_Z11fl_draw_box10Fl_Boxtypeiiiij
_ZN9Fl_Widget6damageEh
_Z7fl_drawPKcii
_ZNK8Fl_Group10draw_childER9Fl_Widget
_ZNK8Fl_Group18draw_outside_labelERK9Fl_Widget
_ZN2Fl6optionENS_9Fl_OptionE
_ZN2Fl6focus_E
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_Z11fl_inactivej
