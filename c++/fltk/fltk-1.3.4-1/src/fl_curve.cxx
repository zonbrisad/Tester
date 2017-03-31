   1              		.file	"fl_curve.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5curveEdddddddd,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB5:
   7              		.section	.text._ZN18Fl_Graphics_Driver5curveEdddddddd,"ax",@progbits
   8              	.LHOTB5:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5curveEdddddddd
  12              	.Ltext_cold0:
  13              		.section	.text._ZN18Fl_Graphics_Driver5curveEdddddddd
  14              		.globl	_ZN18Fl_Graphics_Driver5curveEdddddddd
  16              	_ZN18Fl_Graphics_Driver5curveEdddddddd:
  17              	.LFB376:
  18              		.file 1 "fltk-1.3.4-1/src/fl_curve.cxx"
   1:fltk-1.3.4-1/src/fl_curve.cxx **** ...
  19              		.loc 1 35 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 55       		pushq	%rbp
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 6, -16
  25 0001 53       		pushq	%rbx
  26              		.cfi_def_cfa_offset 24
  27              		.cfi_offset 3, -24
  28 0002 4883EC68 		subq	$104, %rsp
  29              		.cfi_def_cfa_offset 128
  30              	.LBB29:
  31              	.LBB30:
  32              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  33              		.loc 2 472 0
  34 0006 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  34      000000
  35              	.LVL1:
  36              	.LBE30:
  37              	.LBE29:
  38              		.loc 1 35 0
  39 000d F20F1114 		movsd	%xmm2, (%rsp)
  39      24
  40 0012 F20F115C 		movsd	%xmm3, 8(%rsp)
  40      2408
  41 0018 F20F1164 		movsd	%xmm4, 16(%rsp)
  41      2410
  42 001e F20F116C 		movsd	%xmm5, 24(%rsp)
  42      2418
  43 0024 F20F1174 		movsd	%xmm6, 32(%rsp)
  43      2420
  44 002a F20F117C 		movsd	%xmm7, 40(%rsp)
  44      2428
  45              	.LBB33:
  46              	.LBB31:
  47              		.loc 2 472 0
  48 0030 F20F114C 		movsd	%xmm1, 64(%rsp)
  48      2440
  49 0036 F20F1144 		movsd	%xmm0, 56(%rsp)
  49      2438
  50 003c E8000000 		call	_ZN18Fl_Graphics_Driver11transform_xEdd
  50      00
  51              	.LVL2:
  52              	.LBE31:
  53              	.LBE33:
  54              	.LBB34:
  55              	.LBB35:
 473:fltk-1.3.4-1/FL/fl_draw.H **** /**
 474:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms coordinate using the current transformation matrix.
 475:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 476:fltk-1.3.4-1/FL/fl_draw.H ****  */
 477:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_y(double x, double y) {return fl_graphics_driver->transform_y(x, y); }
  56              		.loc 2 477 0
  57 0041 F2440F10 		movsd	64(%rsp), %xmm9
  57      4C2440
  58 0048 F2440F10 		movsd	56(%rsp), %xmm8
  58      442438
  59 004f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  59      000000
  60 0056 66410F28 		movapd	%xmm9, %xmm1
  60      C9
  61              	.LBE35:
  62              	.LBE34:
  63              	.LBB37:
  64              	.LBB32:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
  65              		.loc 2 472 0
  66 005b F20F1144 		movsd	%xmm0, 48(%rsp)
  66      2430
  67              	.LVL3:
  68              	.LBE32:
  69              	.LBE37:
  70              	.LBB38:
  71              	.LBB36:
  72              		.loc 2 477 0
  73 0061 66410F28 		movapd	%xmm8, %xmm0
  73      C0
  74 0066 E8000000 		call	_ZN18Fl_Graphics_Driver11transform_yEdd
  74      00
  75              	.LVL4:
  76              	.LBE36:
  77              	.LBE38:
  78              	.LBB39:
  79              	.LBB40:
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
  80              		.loc 2 492 0
  81 006b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  81      000000
  82 0072 F20F107C 		movsd	48(%rsp), %xmm7
  82      2430
  83 0078 660F28C8 		movapd	%xmm0, %xmm1
  84 007c F20F1144 		movsd	%xmm0, 88(%rsp)
  84      2458
  85 0082 F20F117C 		movsd	%xmm7, 80(%rsp)
  85      2450
  86 0088 660F28C7 		movapd	%xmm7, %xmm0
  87 008c 488B07   		movq	(%rdi), %rax
  88 008f FF904801 		call	*328(%rax)
  88      0000
  89              	.LVL5:
  90              	.LBE40:
  91              	.LBE39:
  92              	.LBB41:
  93              	.LBB42:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
  94              		.loc 2 472 0
  95 0095 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  95      000000
  96 009c F20F104C 		movsd	8(%rsp), %xmm1
  96      2408
  97 00a2 F20F1004 		movsd	(%rsp), %xmm0
  97      24
  98 00a7 E8000000 		call	_ZN18Fl_Graphics_Driver11transform_xEdd
  98      00
  99              	.LVL6:
 100              	.LBE42:
 101              	.LBE41:
 102              	.LBB44:
 103              	.LBB45:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 104              		.loc 2 477 0
 105 00ac 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 105      000000
 106              	.LBE45:
 107              	.LBE44:
 108              	.LBB48:
 109              	.LBB43:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
 110              		.loc 2 472 0
 111 00b3 F20F1144 		movsd	%xmm0, 56(%rsp)
 111      2438
 112              	.LVL7:
 113              	.LBE43:
 114              	.LBE48:
 115              	.LBB49:
 116              	.LBB46:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 117              		.loc 2 477 0
 118 00b9 F20F104C 		movsd	8(%rsp), %xmm1
 118      2408
 119 00bf F20F1004 		movsd	(%rsp), %xmm0
 119      24
 120 00c4 E8000000 		call	_ZN18Fl_Graphics_Driver11transform_yEdd
 120      00
 121              	.LVL8:
 122              	.LBE46:
 123              	.LBE49:
 124              	.LBB50:
 125              	.LBB51:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
 126              		.loc 2 472 0
 127 00c9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 127      000000
 128              	.LBE51:
 129              	.LBE50:
 130              	.LBB54:
 131              	.LBB47:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 132              		.loc 2 477 0
 133 00d0 F20F1144 		movsd	%xmm0, 48(%rsp)
 133      2430
 134              	.LVL9:
 135              	.LBE47:
 136              	.LBE54:
 137              	.LBB55:
 138              	.LBB52:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
 139              		.loc 2 472 0
 140 00d6 F20F104C 		movsd	24(%rsp), %xmm1
 140      2418
 141 00dc F20F1044 		movsd	16(%rsp), %xmm0
 141      2410
 142 00e2 E8000000 		call	_ZN18Fl_Graphics_Driver11transform_xEdd
 142      00
 143              	.LVL10:
 144              	.LBE52:
 145              	.LBE55:
 146              	.LBB56:
 147              	.LBB57:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 148              		.loc 2 477 0
 149 00e7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 149      000000
 150              	.LBE57:
 151              	.LBE56:
 152              	.LBB60:
 153              	.LBB53:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
 154              		.loc 2 472 0
 155 00ee F20F1144 		movsd	%xmm0, 8(%rsp)
 155      2408
 156              	.LVL11:
 157              	.LBE53:
 158              	.LBE60:
 159              	.LBB61:
 160              	.LBB58:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 161              		.loc 2 477 0
 162 00f4 F20F104C 		movsd	24(%rsp), %xmm1
 162      2418
 163 00fa F20F1044 		movsd	16(%rsp), %xmm0
 163      2410
 164 0100 E8000000 		call	_ZN18Fl_Graphics_Driver11transform_yEdd
 164      00
 165              	.LVL12:
 166              	.LBE58:
 167              	.LBE61:
 168              	.LBB62:
 169              	.LBB63:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
 170              		.loc 2 472 0
 171 0105 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 171      000000
 172              	.LBE63:
 173              	.LBE62:
 174              	.LBB66:
 175              	.LBB59:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 176              		.loc 2 477 0
 177 010c F20F1104 		movsd	%xmm0, (%rsp)
 177      24
 178              	.LVL13:
 179              	.LBE59:
 180              	.LBE66:
 181              	.LBB67:
 182              	.LBB64:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
 183              		.loc 2 472 0
 184 0111 F20F104C 		movsd	40(%rsp), %xmm1
 184      2428
 185 0117 F20F1044 		movsd	32(%rsp), %xmm0
 185      2420
 186 011d E8000000 		call	_ZN18Fl_Graphics_Driver11transform_xEdd
 186      00
 187              	.LVL14:
 188              	.LBE64:
 189              	.LBE67:
 190              	.LBB68:
 191              	.LBB69:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 192              		.loc 2 477 0
 193 0122 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 193      000000
 194              	.LBE69:
 195              	.LBE68:
 196              	.LBB73:
 197              	.LBB65:
 472:fltk-1.3.4-1/FL/fl_draw.H **** /**
 198              		.loc 2 472 0
 199 0129 F20F1144 		movsd	%xmm0, 64(%rsp)
 199      2440
 200              	.LVL15:
 201              	.LBE65:
 202              	.LBE73:
 203              	.LBB74:
 204              	.LBB70:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 205              		.loc 2 477 0
 206 012f F20F104C 		movsd	40(%rsp), %xmm1
 206      2428
 207 0135 F20F1044 		movsd	32(%rsp), %xmm0
 207      2420
 208 013b E8000000 		call	_ZN18Fl_Graphics_Driver11transform_yEdd
 208      00
 209              	.LVL16:
 210              	.LBE70:
 211              	.LBE74:
 212              		.loc 1 51 0
 213 0140 F20F107C 		movsd	80(%rsp), %xmm7
 213      2450
 214 0146 F20F1054 		movsd	8(%rsp), %xmm2
 214      2408
 215 014c 660F28F0 		movapd	%xmm0, %xmm6
 216 0150 F2440F10 		movsd	48(%rsp), %xmm9
 216      4C2430
 217 0157 660F28CF 		movapd	%xmm7, %xmm1
 218 015b F2440F10 		movsd	64(%rsp), %xmm13
 218      6C2440
 219 0162 F2410F5C 		subsd	%xmm9, %xmm6
 219      F1
 220              	.LBB75:
 221              	.LBB71:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 222              		.loc 2 477 0
 223 0167 66440F28 		movapd	%xmm0, %xmm12
 223      E0
 224              	.LBE71:
 225              	.LBE75:
 226              		.loc 1 51 0
 227 016c F20F5CCA 		subsd	%xmm2, %xmm1
 228 0170 F2440F10 		movsd	(%rsp), %xmm8
 228      0424
 229 0176 F20F106C 		movsd	56(%rsp), %xmm5
 229      2438
 230              	.LBB76:
 231              	.LBB72:
 477:fltk-1.3.4-1/FL/fl_draw.H **** /**
 232              		.loc 2 477 0
 233 017c F20F1144 		movsd	%xmm0, 72(%rsp)
 233      2448
 234              	.LVL17:
 235              	.LBE72:
 236              	.LBE76:
 237              		.loc 1 51 0
 238 0182 66410F28 		movapd	%xmm13, %xmm0
 238      C5
 239 0187 F20F1025 		movsd	.LC0(%rip), %xmm4
 239      00000000 
 240 018f F20F59CE 		mulsd	%xmm6, %xmm1
 241 0193 F20F5CC5 		subsd	%xmm5, %xmm0
 242 0197 F20F1074 		movsd	88(%rsp), %xmm6
 242      2458
 243 019d 660F28DE 		movapd	%xmm6, %xmm3
 244              		.loc 1 52 0
 245 01a1 66440F28 		movapd	%xmm6, %xmm10
 245      D6
 246              		.loc 1 51 0
 247 01a6 F2410F5C 		subsd	%xmm8, %xmm3
 247      D8
 248              		.loc 1 52 0
 249 01ab F2450F5C 		subsd	%xmm12, %xmm10
 249      D4
 250              		.loc 1 51 0
 251 01b0 F20F59C3 		mulsd	%xmm3, %xmm0
 252              		.loc 1 52 0
 253 01b4 66410F28 		movapd	%xmm8, %xmm3
 253      D8
 254 01b9 F2410F5C 		subsd	%xmm9, %xmm3
 254      D9
 255              		.loc 1 51 0
 256 01be F20F5CC8 		subsd	%xmm0, %xmm1
 257              		.loc 1 52 0
 258 01c2 660F28C7 		movapd	%xmm7, %xmm0
 259 01c6 F2410F5C 		subsd	%xmm13, %xmm0
 259      C5
 260              		.loc 1 51 0
 261 01cb 660F54CC 		andpd	%xmm4, %xmm1
 262              	.LVL18:
 263              		.loc 1 52 0
 264 01cf F20F59C3 		mulsd	%xmm3, %xmm0
 265 01d3 660F28DA 		movapd	%xmm2, %xmm3
 266 01d7 F20F5CDD 		subsd	%xmm5, %xmm3
 267 01db F2410F59 		mulsd	%xmm10, %xmm3
 267      DA
 268 01e0 F20F5CC3 		subsd	%xmm3, %xmm0
 269 01e4 660F54C4 		andpd	%xmm4, %xmm0
 270              	.LVL19:
 271              		.loc 1 53 0
 272 01e8 F20F5FC1 		maxsd	%xmm1, %xmm0
 273              	.LVL20:
 274 01ec 660F28C8 		movapd	%xmm0, %xmm1
 275              	.LVL21:
 276              		.loc 1 56 0
 277 01f0 F20F51C0 		sqrtsd	%xmm0, %xmm0
 278              	.LVL22:
 279 01f4 660F2EC0 		ucomisd	%xmm0, %xmm0
 280 01f8 0F8A4902 		jp	.L16
 280      0000
 281              	.LVL23:
 282              	.L4:
 283 01fe F20F5905 		mulsd	.LC1(%rip), %xmm0
 283      00000000 
 284 0206 F20F2CC0 		cvttsd2si	%xmm0, %eax
 285              	.LVL24:
 286              	.LBB77:
 287              		.loc 1 57 0
 288 020a 83F801   		cmpl	$1, %eax
 289 020d 0F8E0F02 		jle	.L6
 289      0000
 290              	.LBB78:
 291              		.loc 1 60 0
 292 0213 660FEFC0 		pxor	%xmm0, %xmm0
 293 0217 83F864   		cmpl	$100, %eax
 294 021a BD640000 		movl	$100, %ebp
 294      00
 295 021f 0F4EE8   		cmovle	%eax, %ebp
 296              	.LVL25:
 297 0222 F20F1025 		movsd	.LC2(%rip), %xmm4
 297      00000000 
 298              		.loc 1 63 0
 299 022a F20F100D 		movsd	.LC3(%rip), %xmm1
 299      00000000 
 300              	.LBB79:
 301              		.loc 1 81 0
 302 0232 83FD02   		cmpl	$2, %ebp
 303              	.LBE79:
 304              		.loc 1 60 0
 305 0235 F20F2AC5 		cvtsi2sd	%ebp, %xmm0
 306              		.loc 1 63 0
 307 0239 F20F105C 		movsd	64(%rsp), %xmm3
 307      2440
 308              		.loc 1 72 0
 309 023f F2440F10 		movsd	72(%rsp), %xmm11
 309      5C2448
 310              		.loc 1 60 0
 311 0246 F20F5EE0 		divsd	%xmm0, %xmm4
 312              	.LVL26:
 313              		.loc 1 63 0
 314 024a 660F28C2 		movapd	%xmm2, %xmm0
 315 024e F20F59C1 		mulsd	%xmm1, %xmm0
 316 0252 F20F5CD8 		subsd	%xmm0, %xmm3
 317 0256 660F28C5 		movapd	%xmm5, %xmm0
 318 025a F20F59C1 		mulsd	%xmm1, %xmm0
 319 025e F20F58D8 		addsd	%xmm0, %xmm3
 320              		.loc 1 64 0
 321 0262 660F28C5 		movapd	%xmm5, %xmm0
 322 0266 F20F58C5 		addsd	%xmm5, %xmm0
 323              		.loc 1 67 0
 324 026a F20F5CEF 		subsd	%xmm7, %xmm5
 325              		.loc 1 63 0
 326 026e F20F5CDF 		subsd	%xmm7, %xmm3
 327              	.LVL27:
 328              		.loc 1 64 0
 329 0272 F20F5CD0 		subsd	%xmm0, %xmm2
 330              		.loc 1 67 0
 331 0276 660F28C4 		movapd	%xmm4, %xmm0
 332 027a F20F59C3 		mulsd	%xmm3, %xmm0
 333              		.loc 1 64 0
 334 027e F20F58D7 		addsd	%xmm7, %xmm2
 335 0282 F20F59D1 		mulsd	%xmm1, %xmm2
 336              	.LVL28:
 337              		.loc 1 67 0
 338 0286 F20F58C2 		addsd	%xmm2, %xmm0
 339              		.loc 1 69 0
 340 028a F20F58D2 		addsd	%xmm2, %xmm2
 341              	.LVL29:
 342              		.loc 1 67 0
 343 028e F20F59C4 		mulsd	%xmm4, %xmm0
 344              		.loc 1 69 0
 345 0292 F20F59D4 		mulsd	%xmm4, %xmm2
 346              		.loc 1 67 0
 347 0296 66440F28 		movapd	%xmm0, %xmm10
 347      D0
 348 029b 660F28C5 		movapd	%xmm5, %xmm0
 349              		.loc 1 69 0
 350 029f F20F59D4 		mulsd	%xmm4, %xmm2
 351              		.loc 1 76 0
 352 02a3 660F28EC 		movapd	%xmm4, %xmm5
 353              		.loc 1 67 0
 354 02a7 F20F59C1 		mulsd	%xmm1, %xmm0
 355 02ab F2410F58 		addsd	%xmm10, %xmm0
 355      C2
 356 02b0 F20F59C4 		mulsd	%xmm4, %xmm0
 357 02b4 66440F28 		movapd	%xmm0, %xmm10
 357      D0
 358              	.LVL30:
 359              		.loc 1 68 0
 360 02b9 F20F1005 		movsd	.LC4(%rip), %xmm0
 360      00000000 
 361              	.LVL31:
 362 02c1 F20F59D8 		mulsd	%xmm0, %xmm3
 363              	.LVL32:
 364 02c5 F20F59DC 		mulsd	%xmm4, %xmm3
 365 02c9 F20F59DC 		mulsd	%xmm4, %xmm3
 366 02cd F20F59DC 		mulsd	%xmm4, %xmm3
 367 02d1 F20F115C 		movsd	%xmm3, 48(%rsp)
 367      2430
 368              	.LVL33:
 369              		.loc 1 69 0
 370 02d7 F20F58D3 		addsd	%xmm3, %xmm2
 371              	.LVL34:
 372              		.loc 1 72 0
 373 02db 66410F28 		movapd	%xmm8, %xmm3
 373      D8
 374              	.LVL35:
 375 02e0 F20F59D9 		mulsd	%xmm1, %xmm3
 376 02e4 F2440F5C 		subsd	%xmm3, %xmm11
 376      DB
 377 02e9 66410F28 		movapd	%xmm9, %xmm3
 377      D9
 378 02ee F20F59D9 		mulsd	%xmm1, %xmm3
 379 02f2 F2440F58 		addsd	%xmm3, %xmm11
 379      DB
 380              		.loc 1 73 0
 381 02f7 66410F28 		movapd	%xmm9, %xmm3
 381      D9
 382 02fc F2410F58 		addsd	%xmm9, %xmm3
 382      D9
 383              		.loc 1 76 0
 384 0301 F2440F5C 		subsd	%xmm6, %xmm9
 384      CE
 385              		.loc 1 72 0
 386 0306 F2440F5C 		subsd	%xmm6, %xmm11
 386      DE
 387              	.LVL36:
 388              		.loc 1 73 0
 389 030b F2440F5C 		subsd	%xmm3, %xmm8
 389      C3
 390              		.loc 1 76 0
 391 0310 F2410F59 		mulsd	%xmm11, %xmm5
 391      EB
 392              		.loc 1 77 0
 393 0315 F2410F59 		mulsd	%xmm11, %xmm0
 393      C3
 394              		.loc 1 73 0
 395 031a F2440F58 		addsd	%xmm6, %xmm8
 395      C6
 396              		.loc 1 77 0
 397 031f F20F59C4 		mulsd	%xmm4, %xmm0
 398              		.loc 1 73 0
 399 0323 F2440F59 		mulsd	%xmm1, %xmm8
 399      C1
 400              	.LVL37:
 401              		.loc 1 77 0
 402 0328 F20F59C4 		mulsd	%xmm4, %xmm0
 403              		.loc 1 76 0
 404 032c F2410F58 		addsd	%xmm8, %xmm5
 404      E8
 405              		.loc 1 78 0
 406 0331 F2450F58 		addsd	%xmm8, %xmm8
 406      C0
 407              	.LVL38:
 408              		.loc 1 77 0
 409 0336 F20F59C4 		mulsd	%xmm4, %xmm0
 410              		.loc 1 76 0
 411 033a F20F59EC 		mulsd	%xmm4, %xmm5
 412              		.loc 1 77 0
 413 033e F20F1144 		movsd	%xmm0, 56(%rsp)
 413      2438
 414              		.loc 1 76 0
 415 0344 660F28DD 		movapd	%xmm5, %xmm3
 416 0348 66410F28 		movapd	%xmm9, %xmm5
 416      E9
 417 034d F20F59E9 		mulsd	%xmm1, %xmm5
 418 0351 F20F58EB 		addsd	%xmm3, %xmm5
 419              		.loc 1 78 0
 420 0355 66410F28 		movapd	%xmm8, %xmm3
 420      D8
 421 035a F20F59DC 		mulsd	%xmm4, %xmm3
 422              		.loc 1 76 0
 423 035e F20F59EC 		mulsd	%xmm4, %xmm5
 424              	.LVL39:
 425              		.loc 1 78 0
 426 0362 F20F59DC 		mulsd	%xmm4, %xmm3
 427 0366 F20F58D8 		addsd	%xmm0, %xmm3
 428              	.LVL40:
 429              	.LBB92:
 430              		.loc 1 81 0
 431 036a 0F849100 		je	.L7
 431      0000
 432              		.loc 1 81 0 is_stmt 0 discriminator 2
 433 0370 BB020000 		movl	$2, %ebx
 433      00
 434              	.LVL41:
 435              		.p2align 4,,10
 436 0375 0F1F00   		.p2align 3
 437              	.L8:
 438              		.loc 1 82 0 is_stmt 1 discriminator 2
 439 0378 F2410F58 		addsd	%xmm10, %xmm7
 439      FA
 440              	.LVL42:
 441              	.LBB80:
 442              	.LBB81:
 443              		.loc 2 492 0 discriminator 2
 444 037d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 444      000000
 445              	.LBE81:
 446              	.LBE80:
 447              		.loc 1 81 0 discriminator 2
 448 0384 83C301   		addl	$1, %ebx
 449              	.LVL43:
 450              		.loc 1 85 0 discriminator 2
 451 0387 F20F58F5 		addsd	%xmm5, %xmm6
 452              	.LVL44:
 453              		.loc 1 83 0 discriminator 2
 454 038b F2440F58 		addsd	%xmm2, %xmm10
 454      D2
 455              	.LVL45:
 456              		.loc 1 86 0 discriminator 2
 457 0390 F20F58EB 		addsd	%xmm3, %xmm5
 458              	.LVL46:
 459              	.LBB87:
 460              	.LBB82:
 461              		.loc 2 492 0 discriminator 2
 462 0394 488B07   		movq	(%rdi), %rax
 463              	.LBE82:
 464              	.LBE87:
 465              		.loc 1 84 0 discriminator 2
 466 0397 F20F5854 		addsd	48(%rsp), %xmm2
 466      2430
 467              	.LVL47:
 468              	.LBB88:
 469              	.LBB83:
 470              		.loc 2 492 0 discriminator 2
 471 039d 660F28C7 		movapd	%xmm7, %xmm0
 472              	.LBE83:
 473              	.LBE88:
 474              		.loc 1 87 0 discriminator 2
 475 03a1 F20F585C 		addsd	56(%rsp), %xmm3
 475      2438
 476              	.LVL48:
 477              	.LBB89:
 478              	.LBB84:
 479              		.loc 2 492 0 discriminator 2
 480 03a7 660F28CE 		movapd	%xmm6, %xmm1
 481              	.LBE84:
 482              	.LBE89:
 483              		.loc 1 83 0 discriminator 2
 484 03ab F2440F11 		movsd	%xmm10, 40(%rsp)
 484      542428
 485              		.loc 1 86 0 discriminator 2
 486 03b2 F20F116C 		movsd	%xmm5, 24(%rsp)
 486      2418
 487              	.LBB90:
 488              	.LBB85:
 489              		.loc 2 492 0 discriminator 2
 490 03b8 F20F1174 		movsd	%xmm6, 8(%rsp)
 490      2408
 491 03be F20F113C 		movsd	%xmm7, (%rsp)
 491      24
 492              	.LBE85:
 493              	.LBE90:
 494              		.loc 1 84 0 discriminator 2
 495 03c3 F20F1154 		movsd	%xmm2, 32(%rsp)
 495      2420
 496              		.loc 1 87 0 discriminator 2
 497 03c9 F20F115C 		movsd	%xmm3, 16(%rsp)
 497      2410
 498              	.LBB91:
 499              	.LBB86:
 500              		.loc 2 492 0 discriminator 2
 501 03cf FF904801 		call	*328(%rax)
 501      0000
 502              	.LVL49:
 503              	.LBE86:
 504              	.LBE91:
 505              		.loc 1 81 0 discriminator 2
 506 03d5 39EB     		cmpl	%ebp, %ebx
 507 03d7 F20F103C 		movsd	(%rsp), %xmm7
 507      24
 508 03dc F20F1074 		movsd	8(%rsp), %xmm6
 508      2408
 509 03e2 F20F105C 		movsd	16(%rsp), %xmm3
 509      2410
 510 03e8 F20F106C 		movsd	24(%rsp), %xmm5
 510      2418
 511 03ee F20F1054 		movsd	32(%rsp), %xmm2
 511      2420
 512 03f4 F2440F10 		movsd	40(%rsp), %xmm10
 512      542428
 513 03fb 0F8577FF 		jne	.L8
 513      FFFF
 514              	.LVL50:
 515              	.L7:
 516              	.LBE92:
 517              	.LBB93:
 518              	.LBB94:
 519              		.loc 2 492 0
 520 0401 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 520      000000
 521 0408 F2410F58 		addsd	%xmm10, %xmm7
 521      FA
 522              	.LVL51:
 523 040d 660F28CE 		movapd	%xmm6, %xmm1
 524 0411 488B07   		movq	(%rdi), %rax
 525 0414 F20F58CD 		addsd	%xmm5, %xmm1
 526              	.LVL52:
 527 0418 660F28C7 		movapd	%xmm7, %xmm0
 528 041c FF904801 		call	*328(%rax)
 528      0000
 529              	.LVL53:
 530              	.L6:
 531              	.LBE94:
 532              	.LBE93:
 533              	.LBE78:
 534              	.LBE77:
 535              	.LBB95:
 536              	.LBB96:
 537 0422 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 537      000000
 538 0429 F20F104C 		movsd	72(%rsp), %xmm1
 538      2448
 539 042f F20F1044 		movsd	64(%rsp), %xmm0
 539      2440
 540 0435 488B07   		movq	(%rdi), %rax
 541 0438 488B8048 		movq	328(%rax), %rax
 541      010000
 542              	.LBE96:
 543              	.LBE95:
 544              		.loc 1 97 0
 545 043f 4883C468 		addq	$104, %rsp
 546              		.cfi_remember_state
 547              		.cfi_def_cfa_offset 24
 548 0443 5B       		popq	%rbx
 549              		.cfi_def_cfa_offset 16
 550 0444 5D       		popq	%rbp
 551              		.cfi_def_cfa_offset 8
 552              	.LBB98:
 553              	.LBB97:
 554              		.loc 2 492 0
 555 0445 FFE0     		jmp	*%rax
 556              	.LVL54:
 557              	.L16:
 558              		.cfi_restore_state
 559              	.LBE97:
 560              	.LBE98:
 561              		.loc 1 56 0
 562 0447 660F28C1 		movapd	%xmm1, %xmm0
 563 044b F20F116C 		movsd	%xmm5, 40(%rsp)
 563      2428
 564              	.LVL55:
 565 0451 F2440F11 		movsd	%xmm9, 32(%rsp)
 565      4C2420
 566              	.LVL56:
 567 0458 F20F1154 		movsd	%xmm2, 24(%rsp)
 567      2418
 568              	.LVL57:
 569 045e F2440F11 		movsd	%xmm8, 16(%rsp)
 569      442410
 570              	.LVL58:
 571 0465 F20F1174 		movsd	%xmm6, 8(%rsp)
 571      2408
 572 046b F20F113C 		movsd	%xmm7, (%rsp)
 572      24
 573 0470 E8000000 		call	sqrt
 573      00
 574              	.LVL59:
 575 0475 F20F106C 		movsd	40(%rsp), %xmm5
 575      2428
 576 047b F2440F10 		movsd	32(%rsp), %xmm9
 576      4C2420
 577 0482 F20F1054 		movsd	24(%rsp), %xmm2
 577      2418
 578 0488 F2440F10 		movsd	16(%rsp), %xmm8
 578      442410
 579 048f F20F1074 		movsd	8(%rsp), %xmm6
 579      2408
 580 0495 F20F103C 		movsd	(%rsp), %xmm7
 580      24
 581 049a E95FFDFF 		jmp	.L4
 581      FF
 582              		.cfi_endproc
 583              	.LFE376:
 585              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5curveEdddddddd
 586              	.LCOLDE5:
 587              		.section	.text._ZN18Fl_Graphics_Driver5curveEdddddddd
 588              	.LHOTE5:
 589              		.section	.rodata.cst16,"aM",@progbits,16
 590              		.align 16
 591              	.LC0:
 592 0000 FFFFFFFF 		.long	4294967295
 593 0004 FFFFFF7F 		.long	2147483647
 594 0008 00000000 		.long	0
 595 000c 00000000 		.long	0
 596              		.section	.rodata.cst8,"aM",@progbits,8
 597              		.align 8
 598              	.LC1:
 599 0000 00000000 		.long	0
 600 0004 0000D03F 		.long	1070596096
 601              		.align 8
 602              	.LC2:
 603 0008 00000000 		.long	0
 604 000c 0000F03F 		.long	1072693248
 605              		.align 8
 606              	.LC3:
 607 0010 00000000 		.long	0
 608 0014 00000840 		.long	1074266112
 609              		.align 8
 610              	.LC4:
 611 0018 00000000 		.long	0
 612 001c 00001840 		.long	1075314688
 613              		.text
 614              	.Letext0:
 615              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5curveEdddddddd
 616              	.Letext_cold0:
 617              		.file 3 "fltk-1.3.4-1/FL/Enumerations.H"
 618              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 619              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 620              		.file 6 "/usr/include/libio.h"
 621              		.file 7 "fltk-1.3.4-1/FL/Fl_Device.H"
 622              		.file 8 "/usr/include/stdio.h"
 623              		.file 9 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_curve.cxx
     /tmp/ccxgnp9A.s:16     .text._ZN18Fl_Graphics_Driver5curveEdddddddd:0000000000000000 _ZN18Fl_Graphics_Driver5curveEdddddddd
     /tmp/ccxgnp9A.s:591    .rodata.cst16:0000000000000000 .LC0
     /tmp/ccxgnp9A.s:598    .rodata.cst8:0000000000000000 .LC1
     /tmp/ccxgnp9A.s:602    .rodata.cst8:0000000000000008 .LC2
     /tmp/ccxgnp9A.s:606    .rodata.cst8:0000000000000010 .LC3
     /tmp/ccxgnp9A.s:610    .rodata.cst8:0000000000000018 .LC4
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
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844

UNDEFINED SYMBOLS
fl_graphics_driver
_ZN18Fl_Graphics_Driver11transform_xEdd
_ZN18Fl_Graphics_Driver11transform_yEdd
sqrt
