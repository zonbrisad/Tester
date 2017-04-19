   1              		.file	"gl_draw.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z9gl_heightv,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z9gl_heightv,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z9gl_heightv
  10              	.Ltext_cold0:
  11              		.section	.text._Z9gl_heightv
  12              		.globl	_Z9gl_heightv
  14              	_Z9gl_heightv:
  15              	.LFB489:
  16              		.file 1 "fltk-1.3.4-1/src/gl_draw.cxx"
   1:fltk-1.3.4-1/src/gl_draw.cxx **** ...
  17              		.loc 1 54 0
  18              		.cfi_startproc
  19              	.LBB20:
  20              	.LBB21:
  21              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  22              		.loc 2 527 0
  23 0000 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  23      000000
  24 0007 488B07   		movq	(%rdi), %rax
  25 000a 488B80D0 		movq	464(%rax), %rax
  25      010000
  26 0011 FFE0     		jmp	*%rax
  27              	.LVL0:
  28              	.LBE21:
  29              	.LBE20:
  30              		.cfi_endproc
  31              	.LFE489:
  33              		.section	.text.unlikely._Z9gl_heightv
  34              	.LCOLDE0:
  35              		.section	.text._Z9gl_heightv
  36              	.LHOTE0:
  37              		.section	.text.unlikely._Z10gl_descentv,"ax",@progbits
  38              	.LCOLDB1:
  39              		.section	.text._Z10gl_descentv,"ax",@progbits
  40              	.LHOTB1:
  41              		.p2align 4,,15
  42              		.globl	_Z10gl_descentv
  44              	_Z10gl_descentv:
  45              	.LFB490:
  46              		.loc 1 56 0
  47              		.cfi_startproc
  48              	.LBB22:
  49              	.LBB23:
 528:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 529:fltk-1.3.4-1/FL/fl_draw.H **** /**
 530:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the recommended distance above the bottom of a fl_height() tall box to
 531:fltk-1.3.4-1/FL/fl_draw.H ****   draw the text at so it looks centered vertically in that box.
 532:fltk-1.3.4-1/FL/fl_draw.H **** */
 533:fltk-1.3.4-1/FL/fl_draw.H **** inline int  fl_descent() {return fl_graphics_driver->descent();}
  50              		.loc 2 533 0
  51 0000 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  51      000000
  52 0007 488B07   		movq	(%rdi), %rax
  53 000a 488B80D8 		movq	472(%rax), %rax
  53      010000
  54 0011 FFE0     		jmp	*%rax
  55              	.LVL1:
  56              	.LBE23:
  57              	.LBE22:
  58              		.cfi_endproc
  59              	.LFE490:
  61              		.section	.text.unlikely._Z10gl_descentv
  62              	.LCOLDE1:
  63              		.section	.text._Z10gl_descentv
  64              	.LHOTE1:
  65              		.section	.text.unlikely._Z8gl_widthPKc,"ax",@progbits
  66              	.LCOLDB2:
  67              		.section	.text._Z8gl_widthPKc,"ax",@progbits
  68              	.LHOTB2:
  69              		.p2align 4,,15
  70              		.globl	_Z8gl_widthPKc
  72              	_Z8gl_widthPKc:
  73              	.LFB491:
  74              		.loc 1 58 0
  75              		.cfi_startproc
  76              	.LVL2:
  77              		.loc 1 58 0
  78 0000 E9000000 		jmp	_Z8fl_widthPKc
  78      00
  79              	.LVL3:
  80              		.cfi_endproc
  81              	.LFE491:
  83              		.section	.text.unlikely._Z8gl_widthPKc
  84              	.LCOLDE2:
  85              		.section	.text._Z8gl_widthPKc
  86              	.LHOTE2:
  87              		.section	.text.unlikely._Z8gl_widthPKci,"ax",@progbits
  88              	.LCOLDB3:
  89              		.section	.text._Z8gl_widthPKci,"ax",@progbits
  90              	.LHOTB3:
  91              		.p2align 4,,15
  92              		.globl	_Z8gl_widthPKci
  94              	_Z8gl_widthPKci:
  95              	.LFB492:
  96              		.loc 1 60 0
  97              		.cfi_startproc
  98              	.LVL4:
  99              		.loc 1 60 0
 100 0000 4889F9   		movq	%rdi, %rcx
 101              	.LVL5:
 102              	.LBB24:
 103              	.LBB25:
 534:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 535:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 536:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT double fl_width(const char* txt);
 537:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a sequence of \p n characters
 538:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 539:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(const char* txt, int n) {return fl_graphics_driver->width(txt, n);}
 104              		.loc 2 539 0
 105 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 105      000000
 106              	.LVL6:
 107              	.LBE25:
 108              	.LBE24:
 109              		.loc 1 60 0
 110 000a 89F2     		movl	%esi, %edx
 111              	.LVL7:
 112              	.LBB27:
 113              	.LBB26:
 114              		.loc 2 539 0
 115 000c 4889CE   		movq	%rcx, %rsi
 116              	.LVL8:
 117 000f 488B07   		movq	(%rdi), %rax
 118 0012 488B80B8 		movq	440(%rax), %rax
 118      010000
 119 0019 FFE0     		jmp	*%rax
 120              	.LVL9:
 121              	.LBE26:
 122              	.LBE27:
 123              		.cfi_endproc
 124              	.LFE492:
 126              		.section	.text.unlikely._Z8gl_widthPKci
 127              	.LCOLDE3:
 128              		.section	.text._Z8gl_widthPKci
 129              	.LHOTE3:
 130              		.section	.text.unlikely._Z8gl_widthh,"ax",@progbits
 131              	.LCOLDB4:
 132              		.section	.text._Z8gl_widthh,"ax",@progbits
 133              	.LHOTB4:
 134              		.p2align 4,,15
 135              		.globl	_Z8gl_widthh
 137              	_Z8gl_widthh:
 138              	.LFB493:
 139              		.loc 1 62 0
 140              		.cfi_startproc
 141              	.LVL10:
 142              		.loc 1 62 0
 143 0000 89FE     		movl	%edi, %esi
 144              	.LVL11:
 145              	.LBB28:
 146              	.LBB29:
 540:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 541:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size.
 542:fltk-1.3.4-1/FL/fl_draw.H ****     \note if a valid fl_gc is NOT found then it uses the first window gc,
 543:fltk-1.3.4-1/FL/fl_draw.H ****     or the screen gc if no fltk window is available when called. */
 544:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(unsigned int c)  {return fl_graphics_driver->width(c);}
 147              		.loc 2 544 0
 148 0002 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 148      000000
 149              	.LVL12:
 150 0009 400FB6F6 		movzbl	%sil, %esi
 151              	.LVL13:
 152 000d 488B07   		movq	(%rdi), %rax
 153 0010 FFA0C001 		jmp	*448(%rax)
 153      0000
 154              	.LVL14:
 155              	.LBE29:
 156              	.LBE28:
 157              		.cfi_endproc
 158              	.LFE493:
 160              		.section	.text.unlikely._Z8gl_widthh
 161              	.LCOLDE4:
 162              		.section	.text._Z8gl_widthh
 163              	.LHOTE4:
 164              		.section	.text.unlikely._Z7gl_fontii,"ax",@progbits
 165              	.LCOLDB5:
 166              		.section	.text._Z7gl_fontii,"ax",@progbits
 167              	.LHOTB5:
 168              		.p2align 4,,15
 169              		.globl	_Z7gl_fontii
 171              	_Z7gl_fontii:
 172              	.LFB494:
 173              		.loc 1 78 0
 174              		.cfi_startproc
 175              	.LVL15:
 176 0000 89F9     		movl	%edi, %ecx
 177              	.LVL16:
 178              	.LBB30:
 179              	.LBB31:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 180              		.loc 2 509 0
 181 0002 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 181      000000
 182              	.LVL17:
 183              	.LBE31:
 184              	.LBE30:
 185              		.loc 1 78 0
 186 0009 53       		pushq	%rbx
 187              		.cfi_def_cfa_offset 16
 188              		.cfi_offset 3, -16
 189              		.loc 1 78 0
 190 000a 89F2     		movl	%esi, %edx
 191              	.LVL18:
 192              	.LBB33:
 193              	.LBB32:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 194              		.loc 2 509 0
 195 000c 89CE     		movl	%ecx, %esi
 196              	.LVL19:
 197 000e 488B07   		movq	(%rdi), %rax
 198 0011 FF90B001 		call	*432(%rax)
 198      0000
 199              	.LVL20:
 200 0017 488B0500 		movq	fl_graphics_driver(%rip), %rax
 200      000000
 201 001e 488B98C0 		movq	1728(%rax), %rbx
 201      060000
 202              	.LVL21:
 203              	.LBE32:
 204              	.LBE33:
 205              		.loc 1 82 0
 206 0025 8B7B18   		movl	24(%rbx), %edi
 207 0028 85FF     		testl	%edi, %edi
 208 002a 750F     		jne	.L7
 209              		.loc 1 87 0
 210 002c BF000001 		movl	$65536, %edi
 210      00
 211 0031 E8000000 		call	glGenLists
 211      00
 212              	.LVL22:
 213 0036 89C7     		movl	%eax, %edi
 214 0038 894318   		movl	%eax, 24(%rbx)
 215              	.L7:
 216              		.loc 1 114 0
 217 003b E8000000 		call	glListBase
 217      00
 218              	.LVL23:
 219              		.loc 1 116 0
 220 0040 48891D00 		movq	%rbx, _ZL11gl_fontsize(%rip)
 220      000000
 221              		.loc 1 117 0
 222 0047 5B       		popq	%rbx
 223              		.cfi_def_cfa_offset 8
 224 0048 C3       		ret
 225              		.cfi_endproc
 226              	.LFE494:
 228              		.section	.text.unlikely._Z7gl_fontii
 229              	.LCOLDE5:
 230              		.section	.text._Z7gl_fontii
 231              	.LHOTE5:
 232              		.section	.text.unlikely._Z27gl_remove_displaylist_fontsv,"ax",@progbits
 233              	.LCOLDB6:
 234              		.section	.text._Z27gl_remove_displaylist_fontsv,"ax",@progbits
 235              	.LHOTB6:
 236              		.p2align 4,,15
 237              		.globl	_Z27gl_remove_displaylist_fontsv
 239              	_Z27gl_remove_displaylist_fontsv:
 240              	.LFB496:
 241              		.loc 1 147 0
 242              		.cfi_startproc
 243              		.loc 1 151 0
 244 0000 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 244      000000
 245              		.loc 1 147 0
 246 0007 4156     		pushq	%r14
 247              		.cfi_def_cfa_offset 16
 248              		.cfi_offset 14, -16
 249              		.loc 1 151 0
 250 0009 4531F6   		xorl	%r14d, %r14d
 251              		.loc 1 147 0
 252 000c 4155     		pushq	%r13
 253              		.cfi_def_cfa_offset 24
 254              		.cfi_offset 13, -24
 255 000e 4154     		pushq	%r12
 256              		.cfi_def_cfa_offset 32
 257              		.cfi_offset 12, -32
 258              		.loc 1 151 0
 259 0010 31D2     		xorl	%edx, %edx
 260              		.loc 1 147 0
 261 0012 55       		pushq	%rbp
 262              		.cfi_def_cfa_offset 40
 263              		.cfi_offset 6, -40
 264 0013 53       		pushq	%rbx
 265              		.cfi_def_cfa_offset 48
 266              		.cfi_offset 3, -48
 267              		.loc 1 151 0
 268 0014 31F6     		xorl	%esi, %esi
 269 0016 488B07   		movq	(%rdi), %rax
 270 0019 FF90B001 		call	*432(%rax)
 270      0000
 271              	.LVL24:
 272 001f 90       		.p2align 4,,10
 273              		.p2align 3
 274              	.L18:
 275              	.LBB34:
 276              	.LBB35:
 277              		.loc 1 156 0
 278 0020 4D89F5   		movq	%r14, %r13
 279 0023 4C032D00 		addq	fl_fonts(%rip), %r13
 279      000000
 280              	.LVL25:
 281              		.loc 1 157 0
 282 002a 498B9D88 		movq	136(%r13), %rbx
 282      000000
 283              	.LVL26:
 284              		.loc 1 158 0
 285 0031 4885DB   		testq	%rbx, %rbx
 286 0034 7454     		je	.L11
 287 0036 31ED     		xorl	%ebp, %ebp
 288 0038 EB3E     		jmp	.L13
 289              	.LVL27:
 290 003a 660F1F44 		.p2align 4,,10
 290      0000
 291              		.p2align 3
 292              	.L28:
 293              	.LBB36:
 294              	.LBB37:
 295              		.loc 1 160 0
 296 0040 49399D88 		cmpq	%rbx, 136(%r13)
 296      000000
 297              		.loc 1 161 0
 298 0047 488B03   		movq	(%rbx), %rax
 299              		.loc 1 160 0
 300 004a 745C     		je	.L27
 301              		.loc 1 164 0
 302 004c 48894500 		movq	%rax, 0(%rbp)
 303              	.L16:
 304              		.loc 1 168 0
 305 0050 8B7B18   		movl	24(%rbx), %edi
 306 0053 BE000001 		movl	$65536, %esi
 306      00
 307 0058 E8000000 		call	glDeleteLists
 307      00
 308              	.LVL28:
 309              		.loc 1 171 0
 310 005d 4C8B23   		movq	(%rbx), %r12
 311              	.LVL29:
 312              		.loc 1 172 0
 313 0060 4889DF   		movq	%rbx, %rdi
 314 0063 E8000000 		call	_ZN18Fl_Font_DescriptorD1Ev
 314      00
 315              	.LVL30:
 316 0068 4889DF   		movq	%rbx, %rdi
 317              		.loc 1 171 0
 318 006b 4C89E3   		movq	%r12, %rbx
 319              	.LVL31:
 320              		.loc 1 172 0
 321 006e E8000000 		call	_ZdlPv
 321      00
 322              	.LVL32:
 323              	.LBE37:
 324              	.LBE36:
 325              		.loc 1 158 0
 326 0073 4885DB   		testq	%rbx, %rbx
 327 0076 7412     		je	.L11
 328              	.LVL33:
 329              	.L13:
 330              	.LBB39:
 331              		.loc 1 159 0
 332 0078 8B4318   		movl	24(%rbx), %eax
 333 007b 85C0     		testl	%eax, %eax
 334 007d 75C1     		jne	.L28
 335              	.LVL34:
 336              		.loc 1 176 0
 337 007f 4889DD   		movq	%rbx, %rbp
 338 0082 488B1B   		movq	(%rbx), %rbx
 339              	.LVL35:
 340              	.LBE39:
 341              		.loc 1 158 0
 342 0085 4885DB   		testq	%rbx, %rbx
 343 0088 75EE     		jne	.L13
 344              	.LVL36:
 345              	.L11:
 346 008a 4981C6A0 		addq	$160, %r14
 346      000000
 347              	.LBE35:
 348              		.loc 1 153 0
 349 0091 4981FE00 		cmpq	$2560, %r14
 349      0A0000
 350 0098 7586     		jne	.L18
 351              	.LBE34:
 352              		.loc 1 182 0
 353 009a 5B       		popq	%rbx
 354              		.cfi_remember_state
 355              		.cfi_def_cfa_offset 40
 356              	.LVL37:
 357 009b 5D       		popq	%rbp
 358              		.cfi_def_cfa_offset 32
 359 009c 415C     		popq	%r12
 360              		.cfi_def_cfa_offset 24
 361 009e 415D     		popq	%r13
 362              		.cfi_def_cfa_offset 16
 363              	.LVL38:
 364 00a0 415E     		popq	%r14
 365              		.cfi_def_cfa_offset 8
 366 00a2 C3       		ret
 367              	.LVL39:
 368              		.p2align 4,,10
 369 00a3 0F1F4400 		.p2align 3
 369      00
 370              	.L27:
 371              		.cfi_restore_state
 372              	.LBB42:
 373              	.LBB41:
 374              	.LBB40:
 375              	.LBB38:
 376              		.loc 1 161 0
 377 00a8 49898588 		movq	%rax, 136(%r13)
 377      000000
 378 00af EB9F     		jmp	.L16
 379              	.LBE38:
 380              	.LBE40:
 381              	.LBE41:
 382              	.LBE42:
 383              		.cfi_endproc
 384              	.LFE496:
 386              		.section	.text.unlikely._Z27gl_remove_displaylist_fontsv
 387              	.LCOLDE6:
 388              		.section	.text._Z27gl_remove_displaylist_fontsv
 389              	.LHOTE6:
 390              		.section	.text.unlikely._Z7gl_drawPKci,"ax",@progbits
 391              	.LCOLDB7:
 392              		.section	.text._Z7gl_drawPKci,"ax",@progbits
 393              	.LHOTB7:
 394              		.p2align 4,,15
 395              		.globl	_Z7gl_drawPKci
 397              	_Z7gl_drawPKci:
 398              	.LFB497:
 399              		.loc 1 193 0
 400              		.cfi_startproc
 401              	.LVL40:
 402 0000 4156     		pushq	%r14
 403              		.cfi_def_cfa_offset 16
 404              		.cfi_offset 14, -16
 405 0002 4155     		pushq	%r13
 406              		.cfi_def_cfa_offset 24
 407              		.cfi_offset 13, -24
 408 0004 4154     		pushq	%r12
 409              		.cfi_def_cfa_offset 32
 410              		.cfi_offset 12, -32
 411 0006 55       		pushq	%rbp
 412              		.cfi_def_cfa_offset 40
 413              		.cfi_offset 6, -40
 414 0007 4989FC   		movq	%rdi, %r12
 415 000a 53       		pushq	%rbx
 416              		.cfi_def_cfa_offset 48
 417              		.cfi_offset 3, -48
 418 000b 89F3     		movl	%esi, %ebx
 419 000d 4883EC20 		subq	$32, %rsp
 420              		.cfi_def_cfa_offset 80
 421              		.loc 1 199 0
 422 0011 8B0D0000 		movl	_ZZ7gl_drawPKciE1l(%rip), %ecx
 422      0000
 423 0017 488B1500 		movq	_ZZ7gl_drawPKciE3buf(%rip), %rdx
 423      000000
 424              		.loc 1 193 0
 425 001e 64488B04 		movq	%fs:40, %rax
 425      25280000 
 425      00
 426 0027 48894424 		movq	%rax, 24(%rsp)
 426      18
 427 002c 31C0     		xorl	%eax, %eax
 428              		.loc 1 199 0
 429 002e E8000000 		call	fl_utf8toUtf16
 429      00
 430              	.LVL41:
 431              		.loc 1 200 0
 432 0033 3B050000 		cmpl	_ZZ7gl_drawPKciE1l(%rip), %eax
 432      0000
 433              		.loc 1 199 0
 434 0039 4189C6   		movl	%eax, %r14d
 435              	.LVL42:
 436              		.loc 1 200 0
 437 003c 0F8DE100 		jge	.L46
 437      0000
 438              	.L30:
 439              	.LVL43:
 440 0042 418D46FF 		leal	-1(%r14), %eax
 441              	.LVL44:
 442              	.LBB49:
 443              		.loc 1 208 0
 444 0046 4585F6   		testl	%r14d, %r14d
 445 0049 4D8D6C04 		leaq	1(%r12,%rax), %r13
 445      01
 446 004e 7F15     		jg	.L34
 447 0050 E99D0000 		jmp	.L33
 447      00
 448              	.LVL45:
 449              		.p2align 4,,10
 450 0055 0F1F00   		.p2align 3
 451              	.L47:
 452 0058 4983C401 		addq	$1, %r12
 453              	.LVL46:
 454 005c 4D39E5   		cmpq	%r12, %r13
 455 005f 0F848D00 		je	.L33
 455      0000
 456              	.LVL47:
 457              	.L34:
 458              	.LBB50:
 459              		.loc 1 210 0
 460 0065 410FBE1C 		movsbl	(%r12), %ebx
 460      24
 461              		.loc 1 211 0
 462 006a 488B0500 		movq	_ZL11gl_fontsize(%rip), %rax
 462      000000
 463              		.loc 1 210 0
 464 0071 C1EB1A   		shrl	$26, %ebx
 465              	.LVL48:
 466              		.loc 1 211 0
 467 0074 89DA     		movl	%ebx, %edx
 468 0076 807C101C 		cmpb	$0, 28(%rax,%rdx)
 468      00
 469 007b 75DB     		jne	.L47
 470              	.LVL49:
 471              	.LBB51:
 472              	.LBB52:
 473              		.loc 1 121 0
 474 007d 4863D3   		movslq	%ebx, %rdx
 475              		.loc 1 126 0
 476 0080 C1E30A   		sall	$10, %ebx
 477              	.LVL50:
 478              		.loc 1 121 0
 479 0083 C644101C 		movb	$1, 28(%rax,%rdx)
 479      01
 480              	.LVL51:
 481 0088 8DAB0004 		leal	1024(%rbx), %ebp
 481      0000
 482 008e EB07     		jmp	.L37
 483              	.LVL52:
 484              		.p2align 4,,10
 485              		.p2align 3
 486              	.L48:
 487 0090 488B0500 		movq	_ZL11gl_fontsize(%rip), %rax
 487      000000
 488              	.L37:
 489              	.LBB53:
 490              	.LBB54:
 491              		.loc 1 130 0
 492 0097 488B7810 		movq	16(%rax), %rdi
 493 009b 488D4C24 		leaq	14(%rsp), %rcx
 493      0E
 494 00a0 488D5424 		leaq	16(%rsp), %rdx
 494      10
 495 00a5 89DE     		movl	%ebx, %esi
 496              		.loc 1 128 0
 497 00a7 48C74424 		movq	$0, 16(%rsp)
 497      10000000 
 497      00
 498              		.loc 1 130 0
 499 00b0 E8000000 		call	fl_XGetUtf8FontAndGlyph
 499      00
 500              	.LVL53:
 501              		.loc 1 131 0
 502 00b5 488B4424 		movq	16(%rsp), %rax
 502      10
 503 00ba 4885C0   		testq	%rax, %rax
 504 00bd 741F     		je	.L35
 505 00bf 488B1500 		movq	_ZL11gl_fontsize(%rip), %rdx
 505      000000
 506 00c6 0FB77424 		movzwl	14(%rsp), %esi
 506      0E
 507 00cb 488B7808 		movq	8(%rax), %rdi
 508 00cf 8B4A18   		movl	24(%rdx), %ecx
 509 00d2 BA010000 		movl	$1, %edx
 509      00
 510 00d7 01D9     		addl	%ebx, %ecx
 511 00d9 E8000000 		call	glXUseXFont
 511      00
 512              	.LVL54:
 513              	.L35:
 514              		.loc 1 132 0
 515 00de 83C301   		addl	$1, %ebx
 516              	.LVL55:
 517              	.LBE54:
 518              		.loc 1 127 0
 519 00e1 39EB     		cmpl	%ebp, %ebx
 520 00e3 75AB     		jne	.L48
 521              	.LVL56:
 522 00e5 4983C401 		addq	$1, %r12
 523              	.LVL57:
 524              	.LBE53:
 525              	.LBE52:
 526              	.LBE51:
 527              	.LBE50:
 528              		.loc 1 208 0
 529 00e9 4D39E5   		cmpq	%r12, %r13
 530 00ec 0F8573FF 		jne	.L34
 530      FFFF
 531              	.LVL58:
 532              	.L33:
 533              	.LBE49:
 534              		.loc 1 213 0
 535 00f2 488B1500 		movq	_ZZ7gl_drawPKciE3buf(%rip), %rdx
 535      000000
 536 00f9 BE031400 		movl	$5123, %esi
 536      00
 537 00fe 4489F7   		movl	%r14d, %edi
 538 0101 E8000000 		call	glCallLists
 538      00
 539              	.LVL59:
 540              		.loc 1 215 0
 541 0106 488B4424 		movq	24(%rsp), %rax
 541      18
 542 010b 64483304 		xorq	%fs:40, %rax
 542      25280000 
 542      00
 543 0114 7549     		jne	.L49
 544 0116 4883C420 		addq	$32, %rsp
 545              		.cfi_remember_state
 546              		.cfi_def_cfa_offset 48
 547 011a 5B       		popq	%rbx
 548              		.cfi_def_cfa_offset 40
 549 011b 5D       		popq	%rbp
 550              		.cfi_def_cfa_offset 32
 551 011c 415C     		popq	%r12
 552              		.cfi_def_cfa_offset 24
 553 011e 415D     		popq	%r13
 554              		.cfi_def_cfa_offset 16
 555 0120 415E     		popq	%r14
 556              		.cfi_def_cfa_offset 8
 557              	.LVL60:
 558 0122 C3       		ret
 559              	.LVL61:
 560              	.L46:
 561              		.cfi_restore_state
 562              		.loc 1 201 0
 563 0123 4183C601 		addl	$1, %r14d
 564 0127 488B3D00 		movq	_ZZ7gl_drawPKciE3buf(%rip), %rdi
 564      000000
 565 012e 4963F6   		movslq	%r14d, %rsi
 566 0131 4801F6   		addq	%rsi, %rsi
 567 0134 E8000000 		call	realloc
 567      00
 568              	.LVL62:
 569              		.loc 1 203 0
 570 0139 4489F1   		movl	%r14d, %ecx
 571 013c 4889C2   		movq	%rax, %rdx
 572 013f 89DE     		movl	%ebx, %esi
 573 0141 4C89E7   		movq	%r12, %rdi
 574              		.loc 1 202 0
 575 0144 44893500 		movl	%r14d, _ZZ7gl_drawPKciE1l(%rip)
 575      000000
 576              		.loc 1 201 0
 577 014b 48890500 		movq	%rax, _ZZ7gl_drawPKciE3buf(%rip)
 577      000000
 578              		.loc 1 203 0
 579 0152 E8000000 		call	fl_utf8toUtf16
 579      00
 580              	.LVL63:
 581 0157 4189C6   		movl	%eax, %r14d
 582              	.LVL64:
 583 015a E9E3FEFF 		jmp	.L30
 583      FF
 584              	.LVL65:
 585              	.L49:
 586              		.loc 1 215 0
 587 015f E8000000 		call	__stack_chk_fail
 587      00
 588              	.LVL66:
 589              		.cfi_endproc
 590              	.LFE497:
 592              		.section	.text.unlikely._Z7gl_drawPKci
 593              	.LCOLDE7:
 594              		.section	.text._Z7gl_drawPKci
 595              	.LHOTE7:
 596              		.section	.text.unlikely._ZL14gl_draw_invertPKciii,"ax",@progbits
 597              	.LCOLDB8:
 598              		.section	.text._ZL14gl_draw_invertPKciii,"ax",@progbits
 599              	.LHOTB8:
 600              		.p2align 4,,15
 602              	_ZL14gl_draw_invertPKciii:
 603              	.LFB503:
 604              		.loc 1 259 0
 605              		.cfi_startproc
 606              	.LVL67:
 607 0000 55       		pushq	%rbp
 608              		.cfi_def_cfa_offset 16
 609              		.cfi_offset 6, -16
 610 0001 53       		pushq	%rbx
 611              		.cfi_def_cfa_offset 24
 612              		.cfi_offset 3, -24
 613              		.loc 1 260 0
 614 0002 F7D9     		negl	%ecx
 615              	.LVL68:
 616              		.loc 1 259 0
 617 0004 4889FB   		movq	%rdi, %rbx
 618 0007 89F5     		movl	%esi, %ebp
 619              		.loc 1 260 0
 620 0009 89D7     		movl	%edx, %edi
 621              	.LVL69:
 622              		.loc 1 259 0
 623 000b 4883EC08 		subq	$8, %rsp
 624              		.cfi_def_cfa_offset 32
 625              		.loc 1 260 0
 626 000f 89CE     		movl	%ecx, %esi
 627              	.LVL70:
 628 0011 E8000000 		call	glRasterPos2i
 628      00
 629              	.LVL71:
 630              		.loc 1 262 0
 631 0016 4883C408 		addq	$8, %rsp
 632              		.cfi_def_cfa_offset 24
 633              		.loc 1 261 0
 634 001a 89EE     		movl	%ebp, %esi
 635 001c 4889DF   		movq	%rbx, %rdi
 636              		.loc 1 262 0
 637 001f 5B       		popq	%rbx
 638              		.cfi_def_cfa_offset 16
 639              	.LVL72:
 640 0020 5D       		popq	%rbp
 641              		.cfi_def_cfa_offset 8
 642              	.LVL73:
 643              		.loc 1 261 0
 644 0021 E9000000 		jmp	_Z7gl_drawPKci
 644      00
 645              	.LVL74:
 646              		.cfi_endproc
 647              	.LFE503:
 649              		.section	.text.unlikely._ZL14gl_draw_invertPKciii
 650              	.LCOLDE8:
 651              		.section	.text._ZL14gl_draw_invertPKciii
 652              	.LHOTE8:
 653              		.section	.text.unlikely._Z7gl_drawPKciii,"ax",@progbits
 654              	.LCOLDB9:
 655              		.section	.text._Z7gl_drawPKciii,"ax",@progbits
 656              	.LHOTB9:
 657              		.p2align 4,,15
 658              		.globl	_Z7gl_drawPKciii
 660              	_Z7gl_drawPKciii:
 661              	.LFB498:
 662              		.loc 1 221 0
 663              		.cfi_startproc
 664              	.LVL75:
 665 0000 55       		pushq	%rbp
 666              		.cfi_def_cfa_offset 16
 667              		.cfi_offset 6, -16
 668 0001 53       		pushq	%rbx
 669              		.cfi_def_cfa_offset 24
 670              		.cfi_offset 3, -24
 671 0002 89F5     		movl	%esi, %ebp
 672 0004 4889FB   		movq	%rdi, %rbx
 673              		.loc 1 222 0
 674 0007 89CE     		movl	%ecx, %esi
 675              	.LVL76:
 676 0009 89D7     		movl	%edx, %edi
 677              	.LVL77:
 678              		.loc 1 221 0
 679 000b 4883EC08 		subq	$8, %rsp
 680              		.cfi_def_cfa_offset 32
 681              		.loc 1 222 0
 682 000f E8000000 		call	glRasterPos2i
 682      00
 683              	.LVL78:
 684              		.loc 1 224 0
 685 0014 4883C408 		addq	$8, %rsp
 686              		.cfi_def_cfa_offset 24
 687              		.loc 1 223 0
 688 0018 89EE     		movl	%ebp, %esi
 689 001a 4889DF   		movq	%rbx, %rdi
 690              		.loc 1 224 0
 691 001d 5B       		popq	%rbx
 692              		.cfi_def_cfa_offset 16
 693              	.LVL79:
 694 001e 5D       		popq	%rbp
 695              		.cfi_def_cfa_offset 8
 696              	.LVL80:
 697              		.loc 1 223 0
 698 001f E9000000 		jmp	_Z7gl_drawPKci
 698      00
 699              	.LVL81:
 700              		.cfi_endproc
 701              	.LFE498:
 703              		.section	.text.unlikely._Z7gl_drawPKciii
 704              	.LCOLDE9:
 705              		.section	.text._Z7gl_drawPKciii
 706              	.LHOTE9:
 707              		.section	.text.unlikely._Z7gl_drawPKciff,"ax",@progbits
 708              	.LCOLDB10:
 709              		.section	.text._Z7gl_drawPKciff,"ax",@progbits
 710              	.LHOTB10:
 711              		.p2align 4,,15
 712              		.globl	_Z7gl_drawPKciff
 714              	_Z7gl_drawPKciff:
 715              	.LFB499:
 716              		.loc 1 230 0
 717              		.cfi_startproc
 718              	.LVL82:
 719 0000 55       		pushq	%rbp
 720              		.cfi_def_cfa_offset 16
 721              		.cfi_offset 6, -16
 722 0001 53       		pushq	%rbx
 723              		.cfi_def_cfa_offset 24
 724              		.cfi_offset 3, -24
 725 0002 89F5     		movl	%esi, %ebp
 726 0004 4889FB   		movq	%rdi, %rbx
 727 0007 4883EC08 		subq	$8, %rsp
 728              		.cfi_def_cfa_offset 32
 729              		.loc 1 231 0
 730 000b E8000000 		call	glRasterPos2f
 730      00
 731              	.LVL83:
 732              		.loc 1 233 0
 733 0010 4883C408 		addq	$8, %rsp
 734              		.cfi_def_cfa_offset 24
 735              		.loc 1 232 0
 736 0014 89EE     		movl	%ebp, %esi
 737 0016 4889DF   		movq	%rbx, %rdi
 738              		.loc 1 233 0
 739 0019 5B       		popq	%rbx
 740              		.cfi_def_cfa_offset 16
 741              	.LVL84:
 742 001a 5D       		popq	%rbp
 743              		.cfi_def_cfa_offset 8
 744              	.LVL85:
 745              		.loc 1 232 0
 746 001b E9000000 		jmp	_Z7gl_drawPKci
 746      00
 747              	.LVL86:
 748              		.cfi_endproc
 749              	.LFE499:
 751              		.section	.text.unlikely._Z7gl_drawPKciff
 752              	.LCOLDE10:
 753              		.section	.text._Z7gl_drawPKciff
 754              	.LHOTE10:
 755              		.section	.text.unlikely._Z7gl_drawPKc,"ax",@progbits
 756              	.LCOLDB11:
 757              		.section	.text._Z7gl_drawPKc,"ax",@progbits
 758              	.LHOTB11:
 759              		.p2align 4,,15
 760              		.globl	_Z7gl_drawPKc
 762              	_Z7gl_drawPKc:
 763              	.LFB500:
 764              		.loc 1 239 0
 765              		.cfi_startproc
 766              	.LVL87:
 767 0000 53       		pushq	%rbx
 768              		.cfi_def_cfa_offset 16
 769              		.cfi_offset 3, -16
 770              		.loc 1 239 0
 771 0001 4889FB   		movq	%rdi, %rbx
 772              		.loc 1 240 0
 773 0004 E8000000 		call	strlen
 773      00
 774              	.LVL88:
 775 0009 4889DF   		movq	%rbx, %rdi
 776 000c 89C6     		movl	%eax, %esi
 777              		.loc 1 241 0
 778 000e 5B       		popq	%rbx
 779              		.cfi_def_cfa_offset 8
 780              	.LVL89:
 781              		.loc 1 240 0
 782 000f E9000000 		jmp	_Z7gl_drawPKci
 782      00
 783              	.LVL90:
 784              		.cfi_endproc
 785              	.LFE500:
 787              		.section	.text.unlikely._Z7gl_drawPKc
 788              	.LCOLDE11:
 789              		.section	.text._Z7gl_drawPKc
 790              	.LHOTE11:
 791              		.section	.text.unlikely._Z7gl_drawPKcii,"ax",@progbits
 792              	.LCOLDB12:
 793              		.section	.text._Z7gl_drawPKcii,"ax",@progbits
 794              	.LHOTB12:
 795              		.p2align 4,,15
 796              		.globl	_Z7gl_drawPKcii
 798              	_Z7gl_drawPKcii:
 799              	.LFB501:
 800              		.loc 1 247 0
 801              		.cfi_startproc
 802              	.LVL91:
 803 0000 4155     		pushq	%r13
 804              		.cfi_def_cfa_offset 16
 805              		.cfi_offset 13, -16
 806 0002 4154     		pushq	%r12
 807              		.cfi_def_cfa_offset 24
 808              		.cfi_offset 12, -24
 809 0004 4189D5   		movl	%edx, %r13d
 810 0007 55       		pushq	%rbp
 811              		.cfi_def_cfa_offset 32
 812              		.cfi_offset 6, -32
 813 0008 53       		pushq	%rbx
 814              		.cfi_def_cfa_offset 40
 815              		.cfi_offset 3, -40
 816 0009 4189F4   		movl	%esi, %r12d
 817 000c 4889FB   		movq	%rdi, %rbx
 818 000f 4883EC08 		subq	$8, %rsp
 819              		.cfi_def_cfa_offset 48
 820              		.loc 1 248 0
 821 0013 E8000000 		call	strlen
 821      00
 822              	.LVL92:
 823              	.LBB55:
 824              	.LBB56:
 825              		.loc 1 222 0
 826 0018 4489EE   		movl	%r13d, %esi
 827 001b 4489E7   		movl	%r12d, %edi
 828              	.LBE56:
 829              	.LBE55:
 830              		.loc 1 248 0
 831 001e 4889C5   		movq	%rax, %rbp
 832              	.LVL93:
 833              	.LBB60:
 834              	.LBB57:
 835              		.loc 1 222 0
 836 0021 E8000000 		call	glRasterPos2i
 836      00
 837              	.LVL94:
 838              	.LBE57:
 839              	.LBE60:
 840              		.loc 1 249 0
 841 0026 4883C408 		addq	$8, %rsp
 842              		.cfi_def_cfa_offset 40
 843              	.LBB61:
 844              	.LBB58:
 845              		.loc 1 223 0
 846 002a 89EE     		movl	%ebp, %esi
 847 002c 4889DF   		movq	%rbx, %rdi
 848              	.LBE58:
 849              	.LBE61:
 850              		.loc 1 249 0
 851 002f 5B       		popq	%rbx
 852              		.cfi_def_cfa_offset 32
 853              	.LVL95:
 854 0030 5D       		popq	%rbp
 855              		.cfi_def_cfa_offset 24
 856              	.LVL96:
 857 0031 415C     		popq	%r12
 858              		.cfi_def_cfa_offset 16
 859              	.LVL97:
 860 0033 415D     		popq	%r13
 861              		.cfi_def_cfa_offset 8
 862              	.LVL98:
 863              	.LBB62:
 864              	.LBB59:
 865              		.loc 1 223 0
 866 0035 E9000000 		jmp	_Z7gl_drawPKci
 866      00
 867              	.LVL99:
 868              	.LBE59:
 869              	.LBE62:
 870              		.cfi_endproc
 871              	.LFE501:
 873              		.section	.text.unlikely._Z7gl_drawPKcii
 874              	.LCOLDE12:
 875              		.section	.text._Z7gl_drawPKcii
 876              	.LHOTE12:
 877              		.section	.text.unlikely._Z7gl_drawPKcff,"ax",@progbits
 878              	.LCOLDB13:
 879              		.section	.text._Z7gl_drawPKcff,"ax",@progbits
 880              	.LHOTB13:
 881              		.p2align 4,,15
 882              		.globl	_Z7gl_drawPKcff
 884              	_Z7gl_drawPKcff:
 885              	.LFB502:
 886              		.loc 1 255 0
 887              		.cfi_startproc
 888              	.LVL100:
 889 0000 55       		pushq	%rbp
 890              		.cfi_def_cfa_offset 16
 891              		.cfi_offset 6, -16
 892 0001 53       		pushq	%rbx
 893              		.cfi_def_cfa_offset 24
 894              		.cfi_offset 3, -24
 895 0002 4889FB   		movq	%rdi, %rbx
 896 0005 4883EC18 		subq	$24, %rsp
 897              		.cfi_def_cfa_offset 48
 898              		.loc 1 255 0
 899 0009 F30F1144 		movss	%xmm0, 12(%rsp)
 899      240C
 900 000f F30F114C 		movss	%xmm1, 8(%rsp)
 900      2408
 901              		.loc 1 256 0
 902 0015 E8000000 		call	strlen
 902      00
 903              	.LVL101:
 904              	.LBB63:
 905              	.LBB64:
 906              		.loc 1 231 0
 907 001a F30F104C 		movss	8(%rsp), %xmm1
 907      2408
 908              	.LBE64:
 909              	.LBE63:
 910              		.loc 1 256 0
 911 0020 4889C5   		movq	%rax, %rbp
 912              	.LVL102:
 913              	.LBB68:
 914              	.LBB65:
 915              		.loc 1 231 0
 916 0023 F30F1044 		movss	12(%rsp), %xmm0
 916      240C
 917 0029 E8000000 		call	glRasterPos2f
 917      00
 918              	.LVL103:
 919              	.LBE65:
 920              	.LBE68:
 921              		.loc 1 257 0
 922 002e 4883C418 		addq	$24, %rsp
 923              		.cfi_def_cfa_offset 24
 924              	.LBB69:
 925              	.LBB66:
 926              		.loc 1 232 0
 927 0032 89EE     		movl	%ebp, %esi
 928 0034 4889DF   		movq	%rbx, %rdi
 929              	.LBE66:
 930              	.LBE69:
 931              		.loc 1 257 0
 932 0037 5B       		popq	%rbx
 933              		.cfi_def_cfa_offset 16
 934              	.LVL104:
 935 0038 5D       		popq	%rbp
 936              		.cfi_def_cfa_offset 8
 937              	.LVL105:
 938              	.LBB70:
 939              	.LBB67:
 940              		.loc 1 232 0
 941 0039 E9000000 		jmp	_Z7gl_drawPKci
 941      00
 942              	.LVL106:
 943              	.LBE67:
 944              	.LBE70:
 945              		.cfi_endproc
 946              	.LFE502:
 948              		.section	.text.unlikely._Z7gl_drawPKcff
 949              	.LCOLDE13:
 950              		.section	.text._Z7gl_drawPKcff
 951              	.LHOTE13:
 952              		.section	.text.unlikely._Z7gl_drawPKciiiij,"ax",@progbits
 953              	.LCOLDB14:
 954              		.section	.text._Z7gl_drawPKciiiij,"ax",@progbits
 955              	.LHOTB14:
 956              		.p2align 4,,15
 957              		.globl	_Z7gl_drawPKciiiij
 959              	_Z7gl_drawPKciiiij:
 960              	.LFB504:
 961              		.loc 1 272 0
 962              		.cfi_startproc
 963              	.LVL107:
 964 0000 4883EC10 		subq	$16, %rsp
 965              		.cfi_def_cfa_offset 24
 966              		.loc 1 273 0
 967 0004 F7DA     		negl	%edx
 968              	.LVL108:
 969 0006 6A00     		pushq	$0
 970              		.cfi_def_cfa_offset 32
 971 0008 6A00     		pushq	$0
 972              		.cfi_def_cfa_offset 40
 973 000a 4429C2   		subl	%r8d, %edx
 974              	.LVL109:
 975 000d 68000000 		pushq	$_ZL14gl_draw_invertPKciii
 975      00
 976              		.cfi_def_cfa_offset 48
 977 0012 E8000000 		call	_Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei
 977      00
 978              	.LVL110:
 979              		.loc 1 274 0
 980 0017 4883C428 		addq	$40, %rsp
 981              		.cfi_def_cfa_offset 8
 982 001b C3       		ret
 983              		.cfi_endproc
 984              	.LFE504:
 986              		.section	.text.unlikely._Z7gl_drawPKciiiij
 987              	.LCOLDE14:
 988              		.section	.text._Z7gl_drawPKciiiij
 989              	.LHOTE14:
 990              		.section	.text.unlikely._Z10gl_measurePKcRiS1_,"ax",@progbits
 991              	.LCOLDB15:
 992              		.section	.text._Z10gl_measurePKcRiS1_,"ax",@progbits
 993              	.LHOTB15:
 994              		.p2align 4,,15
 995              		.globl	_Z10gl_measurePKcRiS1_
 997              	_Z10gl_measurePKcRiS1_:
 998              	.LFB505:
 999              		.loc 1 277 0
 1000              		.cfi_startproc
 1001              	.LVL111:
 1002              		.loc 1 278 0
 1003 0000 31C9     		xorl	%ecx, %ecx
 1004 0002 E9000000 		jmp	_Z10fl_measurePKcRiS1_i
 1004      00
 1005              	.LVL112:
 1006              		.cfi_endproc
 1007              	.LFE505:
 1009              		.section	.text.unlikely._Z10gl_measurePKcRiS1_
 1010              	.LCOLDE15:
 1011              		.section	.text._Z10gl_measurePKcRiS1_
 1012              	.LHOTE15:
 1013              		.section	.text.unlikely._Z7gl_rectiiii,"ax",@progbits
 1014              	.LCOLDB16:
 1015              		.section	.text._Z7gl_rectiiii,"ax",@progbits
 1016              	.LHOTB16:
 1017              		.p2align 4,,15
 1018              		.globl	_Z7gl_rectiiii
 1020              	_Z7gl_rectiiii:
 1021              	.LFB506:
 1022              		.loc 1 286 0
 1023              		.cfi_startproc
 1024              	.LVL113:
 1025              		.loc 1 287 0
 1026 0000 85D2     		testl	%edx, %edx
 1027              		.loc 1 286 0
 1028 0002 4156     		pushq	%r14
 1029              		.cfi_def_cfa_offset 16
 1030              		.cfi_offset 14, -16
 1031 0004 4155     		pushq	%r13
 1032              		.cfi_def_cfa_offset 24
 1033              		.cfi_offset 13, -24
 1034 0006 4189CD   		movl	%ecx, %r13d
 1035 0009 4154     		pushq	%r12
 1036              		.cfi_def_cfa_offset 32
 1037              		.cfi_offset 12, -32
 1038 000b 4189FC   		movl	%edi, %r12d
 1039 000e 55       		pushq	%rbp
 1040              		.cfi_def_cfa_offset 40
 1041              		.cfi_offset 6, -40
 1042 000f 89F5     		movl	%esi, %ebp
 1043 0011 53       		pushq	%rbx
 1044              		.cfi_def_cfa_offset 48
 1045              		.cfi_offset 3, -48
 1046              		.loc 1 286 0
 1047 0012 89D3     		movl	%edx, %ebx
 1048              		.loc 1 287 0
 1049 0014 786A     		js	.L69
 1050              	.LVL114:
 1051              	.L66:
 1052              		.loc 1 288 0
 1053 0016 4585ED   		testl	%r13d, %r13d
 1054 0019 7906     		jns	.L67
 1055              	.LVL115:
 1056              		.loc 1 288 0 is_stmt 0 discriminator 1
 1057 001b 4401ED   		addl	%r13d, %ebp
 1058              	.LVL116:
 1059 001e 41F7DD   		negl	%r13d
 1060              	.LVL117:
 1061              	.L67:
 1062              		.loc 1 290 0 is_stmt 1
 1063 0021 4401E3   		addl	%r12d, %ebx
 1064              	.LVL118:
 1065 0024 468D6C2D 		leal	-1(%rbp,%r13), %r13d
 1065      FF
 1066              	.LVL119:
 1067              		.loc 1 289 0
 1068 0029 BF030000 		movl	$3, %edi
 1068      00
 1069              		.loc 1 290 0
 1070 002e 448D73FF 		leal	-1(%rbx), %r14d
 1071              		.loc 1 289 0
 1072 0032 E8000000 		call	glBegin
 1072      00
 1073              	.LVL120:
 1074              		.loc 1 290 0
 1075 0037 4489EE   		movl	%r13d, %esi
 1076 003a 4489F7   		movl	%r14d, %edi
 1077 003d E8000000 		call	glVertex2i
 1077      00
 1078              	.LVL121:
 1079              		.loc 1 291 0
 1080 0042 89EE     		movl	%ebp, %esi
 1081 0044 4489F7   		movl	%r14d, %edi
 1082 0047 E8000000 		call	glVertex2i
 1082      00
 1083              	.LVL122:
 1084              		.loc 1 292 0
 1085 004c 89EE     		movl	%ebp, %esi
 1086 004e 4489E7   		movl	%r12d, %edi
 1087 0051 E8000000 		call	glVertex2i
 1087      00
 1088              	.LVL123:
 1089              		.loc 1 293 0
 1090 0056 4489EE   		movl	%r13d, %esi
 1091 0059 4489E7   		movl	%r12d, %edi
 1092 005c E8000000 		call	glVertex2i
 1092      00
 1093              	.LVL124:
 1094              		.loc 1 294 0
 1095 0061 4489EE   		movl	%r13d, %esi
 1096 0064 89DF     		movl	%ebx, %edi
 1097 0066 E8000000 		call	glVertex2i
 1097      00
 1098              	.LVL125:
 1099              		.loc 1 296 0
 1100 006b 5B       		popq	%rbx
 1101              		.cfi_remember_state
 1102              		.cfi_def_cfa_offset 40
 1103 006c 5D       		popq	%rbp
 1104              		.cfi_def_cfa_offset 32
 1105              	.LVL126:
 1106 006d 415C     		popq	%r12
 1107              		.cfi_def_cfa_offset 24
 1108              	.LVL127:
 1109 006f 415D     		popq	%r13
 1110              		.cfi_def_cfa_offset 16
 1111 0071 415E     		popq	%r14
 1112              		.cfi_def_cfa_offset 8
 1113              		.loc 1 295 0
 1114 0073 E9000000 		jmp	glEnd
 1114      00
 1115              	.LVL128:
 1116 0078 0F1F8400 		.p2align 4,,10
 1116      00000000 
 1117              		.p2align 3
 1118              	.L69:
 1119              		.cfi_restore_state
 1120              		.loc 1 287 0 discriminator 1
 1121 0080 4101D4   		addl	%edx, %r12d
 1122              	.LVL129:
 1123 0083 F7DB     		negl	%ebx
 1124 0085 EB8F     		jmp	.L66
 1125              		.cfi_endproc
 1126              	.LFE506:
 1128              		.section	.text.unlikely._Z7gl_rectiiii
 1129              	.LCOLDE16:
 1130              		.section	.text._Z7gl_rectiiii
 1131              	.LHOTE16:
 1132              		.section	.text.unlikely._Z8gl_colorj,"ax",@progbits
 1133              	.LCOLDB17:
 1134              		.section	.text._Z8gl_colorj,"ax",@progbits
 1135              	.LHOTB17:
 1136              		.p2align 4,,15
 1137              		.globl	_Z8gl_colorj
 1139              	_Z8gl_colorj:
 1140              	.LFB507:
 1141              		.loc 1 309 0
 1142              		.cfi_startproc
 1143              	.LVL130:
 1144 0000 4883EC18 		subq	$24, %rsp
 1145              		.cfi_def_cfa_offset 32
 1146              		.loc 1 330 0
 1147 0004 488D4C24 		leaq	7(%rsp), %rcx
 1147      07
 1148 0009 488D5424 		leaq	6(%rsp), %rdx
 1148      06
 1149 000e 488D7424 		leaq	5(%rsp), %rsi
 1149      05
 1150              		.loc 1 309 0
 1151 0013 64488B04 		movq	%fs:40, %rax
 1151      25280000 
 1151      00
 1152 001c 48894424 		movq	%rax, 8(%rsp)
 1152      08
 1153 0021 31C0     		xorl	%eax, %eax
 1154              		.loc 1 330 0
 1155 0023 E8000000 		call	_ZN2Fl9get_colorEjRhS0_S0_
 1155      00
 1156              	.LVL131:
 1157              		.loc 1 331 0
 1158 0028 0FB65424 		movzbl	7(%rsp), %edx
 1158      07
 1159 002d 0FB67424 		movzbl	6(%rsp), %esi
 1159      06
 1160 0032 0FB67C24 		movzbl	5(%rsp), %edi
 1160      05
 1161 0037 E8000000 		call	glColor3ub
 1161      00
 1162              	.LVL132:
 1163              		.loc 1 332 0
 1164 003c 488B4424 		movq	8(%rsp), %rax
 1164      08
 1165 0041 64483304 		xorq	%fs:40, %rax
 1165      25280000 
 1165      00
 1166 004a 7505     		jne	.L73
 1167 004c 4883C418 		addq	$24, %rsp
 1168              		.cfi_remember_state
 1169              		.cfi_def_cfa_offset 8
 1170 0050 C3       		ret
 1171              	.L73:
 1172              		.cfi_restore_state
 1173 0051 E8000000 		call	__stack_chk_fail
 1173      00
 1174              	.LVL133:
 1175              		.cfi_endproc
 1176              	.LFE507:
 1178              		.section	.text.unlikely._Z8gl_colorj
 1179              	.LCOLDE17:
 1180              		.section	.text._Z8gl_colorj
 1181              	.LHOTE17:
 1182              		.section	.text.unlikely._Z13gl_draw_imagePKhiiiiii,"ax",@progbits
 1183              	.LCOLDB18:
 1184              		.section	.text._Z13gl_draw_imagePKhiiiiii,"ax",@progbits
 1185              	.LHOTB18:
 1186              		.p2align 4,,15
 1187              		.globl	_Z13gl_draw_imagePKhiiiiii
 1189              	_Z13gl_draw_imagePKhiiiiii:
 1190              	.LFB508:
 1191              		.loc 1 334 0
 1192              		.cfi_startproc
 1193              	.LVL134:
 1194 0000 4157     		pushq	%r15
 1195              		.cfi_def_cfa_offset 16
 1196              		.cfi_offset 15, -16
 1197 0002 4156     		pushq	%r14
 1198              		.cfi_def_cfa_offset 24
 1199              		.cfi_offset 14, -24
 1200 0004 4189CF   		movl	%ecx, %r15d
 1201 0007 4155     		pushq	%r13
 1202              		.cfi_def_cfa_offset 32
 1203              		.cfi_offset 13, -32
 1204 0009 4154     		pushq	%r12
 1205              		.cfi_def_cfa_offset 40
 1206              		.cfi_offset 12, -40
 1207 000b 4189D5   		movl	%edx, %r13d
 1208 000e 55       		pushq	%rbp
 1209              		.cfi_def_cfa_offset 48
 1210              		.cfi_offset 6, -48
 1211 000f 53       		pushq	%rbx
 1212              		.cfi_def_cfa_offset 56
 1213              		.cfi_offset 3, -56
 1214              		.loc 1 335 0
 1215 0010 89CA     		movl	%ecx, %edx
 1216              	.LVL135:
 1217 0012 410FAFD1 		imull	%r9d, %edx
 1218              		.loc 1 334 0
 1219 0016 4889FD   		movq	%rdi, %rbp
 1220 0019 4189F4   		movl	%esi, %r12d
 1221 001c 4883EC08 		subq	$8, %rsp
 1222              		.cfi_def_cfa_offset 64
 1223              		.loc 1 336 0
 1224 0020 BFF20C00 		movl	$3314, %edi
 1224      00
 1225              	.LVL136:
 1226              		.loc 1 334 0
 1227 0025 4489C3   		movl	%r8d, %ebx
 1228 0028 8B442440 		movl	64(%rsp), %eax
 1229 002c 4589CE   		movl	%r9d, %r14d
 1230              		.loc 1 335 0
 1231 002f 85C0     		testl	%eax, %eax
 1232 0031 0F44C2   		cmove	%edx, %eax
 1233              	.LVL137:
 1234              		.loc 1 336 0
 1235 0034 99       		cltd
 1236 0035 41F7F9   		idivl	%r9d
 1237              	.LVL138:
 1238 0038 89C6     		movl	%eax, %esi
 1239              	.LVL139:
 1240 003a E8000000 		call	glPixelStorei
 1240      00
 1241              	.LVL140:
 1242              		.loc 1 337 0
 1243 003f 4489EE   		movl	%r13d, %esi
 1244 0042 4489E7   		movl	%r12d, %edi
 1245 0045 E8000000 		call	glRasterPos2i
 1245      00
 1246              	.LVL141:
 1247              		.loc 1 338 0
 1248 004a 31D2     		xorl	%edx, %edx
 1249 004c 4183FE04 		cmpl	$4, %r14d
 1250 0050 4989E8   		movq	%rbp, %r8
 1251 0053 0F9DC2   		setge	%dl
 1252              		.loc 1 339 0
 1253 0056 4883C408 		addq	$8, %rsp
 1254              		.cfi_def_cfa_offset 56
 1255              		.loc 1 338 0
 1256 005a 89DE     		movl	%ebx, %esi
 1257 005c 4489FF   		movl	%r15d, %edi
 1258 005f 81C20719 		addl	$6407, %edx
 1258      0000
 1259 0065 B9011400 		movl	$5121, %ecx
 1259      00
 1260              		.loc 1 339 0
 1261 006a 5B       		popq	%rbx
 1262              		.cfi_def_cfa_offset 48
 1263              	.LVL142:
 1264 006b 5D       		popq	%rbp
 1265              		.cfi_def_cfa_offset 40
 1266              	.LVL143:
 1267 006c 415C     		popq	%r12
 1268              		.cfi_def_cfa_offset 32
 1269              	.LVL144:
 1270 006e 415D     		popq	%r13
 1271              		.cfi_def_cfa_offset 24
 1272              	.LVL145:
 1273 0070 415E     		popq	%r14
 1274              		.cfi_def_cfa_offset 16
 1275              	.LVL146:
 1276 0072 415F     		popq	%r15
 1277              		.cfi_def_cfa_offset 8
 1278              	.LVL147:
 1279              		.loc 1 338 0
 1280 0074 E9000000 		jmp	glDrawPixels
 1280      00
 1281              	.LVL148:
 1282              		.cfi_endproc
 1283              	.LFE508:
 1285              		.section	.text.unlikely._Z13gl_draw_imagePKhiiiiii
 1286              	.LCOLDE18:
 1287              		.section	.text._Z13gl_draw_imagePKhiiiiii
 1288              	.LHOTE18:
 1289              		.section	.bss._ZZ7gl_drawPKciE3buf,"aw",@nobits
 1290              		.align 8
 1293              	_ZZ7gl_drawPKciE3buf:
 1294 0000 00000000 		.zero	8
 1294      00000000 
 1295              		.section	.bss._ZZ7gl_drawPKciE1l,"aw",@nobits
 1296              		.align 4
 1299              	_ZZ7gl_drawPKciE1l:
 1300 0000 00000000 		.zero	4
 1301              		.section	.bss._ZL11gl_fontsize,"aw",@nobits
 1302              		.align 8
 1305              	_ZL11gl_fontsize:
 1306 0000 00000000 		.zero	8
 1306      00000000 
 1307              		.text
 1308              	.Letext0:
 1309              		.section	.text.unlikely._Z9gl_heightv
 1310              	.Letext_cold0:
 1311              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1312              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1313              		.file 5 "/usr/include/libio.h"
 1314              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 1315              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 1316              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 1317              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 1318              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 1319              		.file 11 "/usr/include/X11/X.h"
 1320              		.file 12 "/usr/include/X11/Xlib.h"
 1321              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 1322              		.file 14 "fltk-1.3.4-1/src/Xutf8.h"
 1323              		.file 15 "fltk-1.3.4-1/src/Fl_Font.H"
 1324              		.file 16 "/usr/include/stdio.h"
 1325              		.file 17 "/usr/include/GL/gl.h"
 1326              		.file 18 "/usr/include/GL/glx.h"
 1327              		.file 19 "fltk-1.3.4-1/FL/fl_utf8.h"
 1328              		.file 20 "/usr/include/stdlib.h"
 1329              		.file 21 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 gl_draw.cxx
     /tmp/ccDiNEOc.s:14     .text._Z9gl_heightv:0000000000000000 _Z9gl_heightv
     /tmp/ccDiNEOc.s:44     .text._Z10gl_descentv:0000000000000000 _Z10gl_descentv
     /tmp/ccDiNEOc.s:72     .text._Z8gl_widthPKc:0000000000000000 _Z8gl_widthPKc
     /tmp/ccDiNEOc.s:94     .text._Z8gl_widthPKci:0000000000000000 _Z8gl_widthPKci
     /tmp/ccDiNEOc.s:137    .text._Z8gl_widthh:0000000000000000 _Z8gl_widthh
     /tmp/ccDiNEOc.s:171    .text._Z7gl_fontii:0000000000000000 _Z7gl_fontii
     /tmp/ccDiNEOc.s:1305   .bss._ZL11gl_fontsize:0000000000000000 _ZL11gl_fontsize
     /tmp/ccDiNEOc.s:239    .text._Z27gl_remove_displaylist_fontsv:0000000000000000 _Z27gl_remove_displaylist_fontsv
     /tmp/ccDiNEOc.s:397    .text._Z7gl_drawPKci:0000000000000000 _Z7gl_drawPKci
     /tmp/ccDiNEOc.s:1299   .bss._ZZ7gl_drawPKciE1l:0000000000000000 _ZZ7gl_drawPKciE1l
     /tmp/ccDiNEOc.s:1293   .bss._ZZ7gl_drawPKciE3buf:0000000000000000 _ZZ7gl_drawPKciE3buf
     /tmp/ccDiNEOc.s:602    .text._ZL14gl_draw_invertPKciii:0000000000000000 _ZL14gl_draw_invertPKciii
     /tmp/ccDiNEOc.s:660    .text._Z7gl_drawPKciii:0000000000000000 _Z7gl_drawPKciii
     /tmp/ccDiNEOc.s:714    .text._Z7gl_drawPKciff:0000000000000000 _Z7gl_drawPKciff
     /tmp/ccDiNEOc.s:762    .text._Z7gl_drawPKc:0000000000000000 _Z7gl_drawPKc
     /tmp/ccDiNEOc.s:798    .text._Z7gl_drawPKcii:0000000000000000 _Z7gl_drawPKcii
     /tmp/ccDiNEOc.s:884    .text._Z7gl_drawPKcff:0000000000000000 _Z7gl_drawPKcff
     /tmp/ccDiNEOc.s:959    .text._Z7gl_drawPKciiiij:0000000000000000 _Z7gl_drawPKciiiij
     /tmp/ccDiNEOc.s:997    .text._Z10gl_measurePKcRiS1_:0000000000000000 _Z10gl_measurePKcRiS1_
     /tmp/ccDiNEOc.s:1020   .text._Z7gl_rectiiii:0000000000000000 _Z7gl_rectiiii
     /tmp/ccDiNEOc.s:1139   .text._Z8gl_colorj:0000000000000000 _Z8gl_colorj
     /tmp/ccDiNEOc.s:1189   .text._Z13gl_draw_imagePKhiiiiii:0000000000000000 _Z13gl_draw_imagePKhiiiiii
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
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.238.95ea4ce844d9fee903b0cacc7c1e4931
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
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
                           .group:0000000000000000 wm4.gl.h.43.84f29899240cae392e798d586b4cdb86
                           .group:0000000000000000 wm4.gl.h.28.80167dfcc6aa1d0fdaa11461360ff2e9
                           .group:0000000000000000 wm4.glext.h.2.33ebf91cb2ac393e00fbf001cfd5adf6
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.glext.h.470.f1f9a32ea973d58e9e9d60b0d331a28b
                           .group:0000000000000000 wm4.wchar.h.20.510818a05484290d697a517509bf4b2d
                           .group:0000000000000000 wm4.stdint.h.52.8bda5d4f6e37fcdcd6c952c7de376f68
                           .group:0000000000000000 wm4.inttypes.h.32.c4dc77c414e5a88041490e6d2aa1116a
                           .group:0000000000000000 wm4.glext.h.1425.4660c46bd83bf818a1c8102c2fa59820
                           .group:0000000000000000 wm4.gl.h.2066.d218939585eb4fd8b54422df1c78229d
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.glx.h.27.6a49060015269f6bafe34881786b41ec
                           .group:0000000000000000 wm4.glxext.h.2.b4e8a31b7f042be05811d22657d85b23
                           .group:0000000000000000 wm4.glx.h.347.6b73155b2e226683d914b22e4387b260

UNDEFINED SYMBOLS
fl_graphics_driver
_Z8fl_widthPKc
glGenLists
glListBase
fl_fonts
glDeleteLists
_ZN18Fl_Font_DescriptorD1Ev
_ZdlPv
fl_utf8toUtf16
fl_XGetUtf8FontAndGlyph
glXUseXFont
glCallLists
realloc
__stack_chk_fail
glRasterPos2i
glRasterPos2f
strlen
_Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei
_Z10fl_measurePKcRiS1_i
glBegin
glVertex2i
glEnd
_ZN2Fl9get_colorEjRhS0_S0_
glColor3ub
glPixelStorei
glDrawPixels
