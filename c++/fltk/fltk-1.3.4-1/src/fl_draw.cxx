   1              		.file	"fl_draw.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
   5              	.LCOLDB0:
   6              		.section	.text._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
  10              	.Ltext_cold0:
  11              		.section	.text._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
  12              		.weak	_Z7fl_drawPKciii
  14              	_Z7fl_drawPKciii:
  15              	.LFB461:
  16              		.file 1 "fltk-1.3.4-1/FL/fl_draw.H"
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
  17              		.loc 1 618 0
  18              		.cfi_startproc
  19              	.LVL0:
  20              		.loc 1 618 0
  21 0000 4989F9   		movq	%rdi, %r9
  22 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  22      000000
  23              	.LVL1:
  24 000a 4189C8   		movl	%ecx, %r8d
  25 000d 89D1     		movl	%edx, %ecx
  26              	.LVL2:
  27 000f 89F2     		movl	%esi, %edx
  28              	.LVL3:
  29 0011 4C89CE   		movq	%r9, %rsi
  30              	.LVL4:
  31 0014 488B07   		movq	(%rdi), %rax
  32 0017 488B4070 		movq	112(%rax), %rax
  33 001b FFE0     		jmp	*%rax
  34              	.LVL5:
  35              		.cfi_endproc
  36              	.LFE461:
  38              		.section	.text.unlikely._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
  39              	.LCOLDE0:
  40              		.section	.text._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
  41              	.LHOTE0:
  42              		.section	.text.unlikely._ZL12expand_text_PKcRPcidRiRdii,"ax",@progbits
  43              	.LCOLDB2:
  44              		.section	.text._ZL12expand_text_PKcRPcidRiRdii,"ax",@progbits
  45              	.LHOTB2:
  46              		.p2align 4,,15
  48              	_ZL12expand_text_PKcRPcidRiRdii:
  49              	.LFB485:
  50              		.file 2 "fltk-1.3.4-1/src/fl_draw.cxx"
   1:fltk-1.3.4-1/src/fl_draw.cxx ****    1              		.file	"fl_draw.cxx"
   2:fltk-1.3.4-1/src/fl_draw.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/fl_draw.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/fl_draw.cxx ****    4              		.section	.text.unlikely._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comda
   5:fltk-1.3.4-1/src/fl_draw.cxx ****    5              	.LCOLDB0:
   6:fltk-1.3.4-1/src/fl_draw.cxx ****    6              		.section	.text._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
   7:fltk-1.3.4-1/src/fl_draw.cxx ****    7              	.LHOTB0:
   8:fltk-1.3.4-1/src/fl_draw.cxx ****    8              		.p2align 4,,15
   9:fltk-1.3.4-1/src/fl_draw.cxx ****    9              		.section	.text.unlikely._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comda
  10:fltk-1.3.4-1/src/fl_draw.cxx ****   10              	.Ltext_cold0:
  11:fltk-1.3.4-1/src/fl_draw.cxx ****   11              		.section	.text._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
  12:fltk-1.3.4-1/src/fl_draw.cxx ****   12              		.weak	_Z7fl_drawPKciii
  13:fltk-1.3.4-1/src/fl_draw.cxx ****   14              	_Z7fl_drawPKciii:
  14:fltk-1.3.4-1/src/fl_draw.cxx ****   15              	.LFB461:
  15:fltk-1.3.4-1/src/fl_draw.cxx ****   16              		.file 1 "fltk-1.3.4-1/FL/fl_draw.H"
  16:fltk-1.3.4-1/src/fl_draw.cxx ****    1:fltk-1.3.4-1/FL/fl_draw.H **** //
  17:fltk-1.3.4-1/src/fl_draw.cxx ****    2:fltk-1.3.4-1/FL/fl_draw.H **** // "$Id: fl_draw.H 11977 2016-09-25 11:07:06Z AlbrechtS $"
  18:fltk-1.3.4-1/src/fl_draw.cxx ****    3:fltk-1.3.4-1/FL/fl_draw.H **** //
  19:fltk-1.3.4-1/src/fl_draw.cxx ****    4:fltk-1.3.4-1/FL/fl_draw.H **** // Portable drawing function header file for the Fast Light Too
  20:fltk-1.3.4-1/src/fl_draw.cxx ****    5:fltk-1.3.4-1/FL/fl_draw.H **** //
  21:fltk-1.3.4-1/src/fl_draw.cxx ****    6:fltk-1.3.4-1/FL/fl_draw.H **** // Copyright 1998-2016 by Bill Spitzak and others.
  22:fltk-1.3.4-1/src/fl_draw.cxx ****    7:fltk-1.3.4-1/FL/fl_draw.H **** //
  23:fltk-1.3.4-1/src/fl_draw.cxx ****    8:fltk-1.3.4-1/FL/fl_draw.H **** // This library is free software. Distribution and use rights a
  24:fltk-1.3.4-1/src/fl_draw.cxx ****    9:fltk-1.3.4-1/FL/fl_draw.H **** // the file "COPYING" which should have been included with this
  25:fltk-1.3.4-1/src/fl_draw.cxx ****   10:fltk-1.3.4-1/FL/fl_draw.H **** // file is missing or damaged, see the license at:
  26:fltk-1.3.4-1/src/fl_draw.cxx ****   11:fltk-1.3.4-1/FL/fl_draw.H **** //
  27:fltk-1.3.4-1/src/fl_draw.cxx ****   12:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/COPYING.php
  28:fltk-1.3.4-1/src/fl_draw.cxx ****   13:fltk-1.3.4-1/FL/fl_draw.H **** //
  29:fltk-1.3.4-1/src/fl_draw.cxx ****   14:fltk-1.3.4-1/FL/fl_draw.H **** // Please report all bugs and problems on the following page:
  30:fltk-1.3.4-1/src/fl_draw.cxx ****   15:fltk-1.3.4-1/FL/fl_draw.H **** //
  31:fltk-1.3.4-1/src/fl_draw.cxx ****   16:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/str.php
  32:fltk-1.3.4-1/src/fl_draw.cxx ****   17:fltk-1.3.4-1/FL/fl_draw.H **** //
  33:fltk-1.3.4-1/src/fl_draw.cxx ****   18:fltk-1.3.4-1/FL/fl_draw.H **** 
  34:fltk-1.3.4-1/src/fl_draw.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
  35:fltk-1.3.4-1/src/fl_draw.cxx ****   20:fltk-1.3.4-1/FL/fl_draw.H ****   \file fl_draw.H
  36:fltk-1.3.4-1/src/fl_draw.cxx ****   21:fltk-1.3.4-1/FL/fl_draw.H ****   \brief utility header to pull drawing functions together
  37:fltk-1.3.4-1/src/fl_draw.cxx ****   22:fltk-1.3.4-1/FL/fl_draw.H **** */
  38:fltk-1.3.4-1/src/fl_draw.cxx ****   23:fltk-1.3.4-1/FL/fl_draw.H **** 
  39:fltk-1.3.4-1/src/fl_draw.cxx ****   24:fltk-1.3.4-1/FL/fl_draw.H **** #ifndef fl_draw_H
  40:fltk-1.3.4-1/src/fl_draw.cxx ****   25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
  41:fltk-1.3.4-1/src/fl_draw.cxx ****   26:fltk-1.3.4-1/FL/fl_draw.H **** 
  42:fltk-1.3.4-1/src/fl_draw.cxx ****   27:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/x.H>	      // for Fl_Region
  43:fltk-1.3.4-1/src/fl_draw.cxx ****   28:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Enumerations.H>  // for the color names
  44:fltk-1.3.4-1/src/fl_draw.cxx ****   29:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Window.H>     // for fl_set_spot()
  51              		.loc 2 44 0
  52              		.cfi_startproc
  53              	.LVL6:
  54 0000 4157     		pushq	%r15
  55              		.cfi_def_cfa_offset 16
  56              		.cfi_offset 15, -16
  57 0002 4156     		pushq	%r14
  58              		.cfi_def_cfa_offset 24
  59              		.cfi_offset 14, -24
  60 0004 4155     		pushq	%r13
  61              		.cfi_def_cfa_offset 32
  62              		.cfi_offset 13, -32
  63 0006 4154     		pushq	%r12
  64              		.cfi_def_cfa_offset 40
  65              		.cfi_offset 12, -40
  66 0008 55       		pushq	%rbp
  67              		.cfi_def_cfa_offset 48
  68              		.cfi_offset 6, -48
  69 0009 53       		pushq	%rbx
  70              		.cfi_def_cfa_offset 56
  71              		.cfi_offset 3, -56
  72 000a 4883EC58 		subq	$88, %rsp
  73              		.cfi_def_cfa_offset 144
  45:fltk-1.3.4-1/src/fl_draw.cxx ****   30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
  46:fltk-1.3.4-1/src/fl_draw.cxx ****   31:fltk-1.3.4-1/FL/fl_draw.H **** 
  47:fltk-1.3.4-1/src/fl_draw.cxx ****   32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
  48:fltk-1.3.4-1/src/fl_draw.cxx ****   33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
  49:fltk-1.3.4-1/src/fl_draw.cxx ****   34:fltk-1.3.4-1/FL/fl_draw.H **** 
  74              		.loc 2 49 0
  75 000e 803D0000 		cmpb	$0, _ZGVZL12expand_text_PKcRPcidRiRdiiE9local_buf(%rip)
  75      000000
  45:fltk-1.3.4-1/src/fl_draw.cxx ****   30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
  76              		.loc 2 45 0
  77 0015 488B1E   		movq	(%rsi), %rbx
  78              	.LVL7:
  44:fltk-1.3.4-1/src/fl_draw.cxx ****   30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
  79              		.loc 2 44 0
  80 0018 48897C24 		movq	%rdi, 8(%rsp)
  80      08
  81 001d 48897424 		movq	%rsi, 24(%rsp)
  81      18
  82 0022 F20F1144 		movsd	%xmm0, 56(%rsp)
  82      2438
  83 0028 89542420 		movl	%edx, 32(%rsp)
  84              	.LVL8:
  85 002c 48894C24 		movq	%rcx, 64(%rsp)
  85      40
  86 0031 4C894424 		movq	%r8, 72(%rsp)
  86      48
  87 0036 44894C24 		movl	%r9d, 36(%rsp)
  87      24
  46:fltk-1.3.4-1/src/fl_draw.cxx ****   32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
  88              		.loc 2 46 0
  89 003b 48C70500 		movq	$0, _ZL12underline_at(%rip)
  89      00000000 
  89      000000
  90              	.LVL9:
  91              		.loc 2 49 0
  92 0046 0F843303 		je	.L64
  92      0000
  93              	.LVL10:
  94              	.L4:
  50:fltk-1.3.4-1/src/fl_draw.cxx ****   35:fltk-1.3.4-1/FL/fl_draw.H **** // Label flags...
  95              		.loc 2 50 0
  96 004c 48634424 		movslq	32(%rsp), %rax
  96      20
  97 0051 85C0     		testl	%eax, %eax
  98 0053 0F84D702 		je	.L6
  98      0000
  45:fltk-1.3.4-1/src/fl_draw.cxx ****   31:fltk-1.3.4-1/FL/fl_draw.H **** 
  99              		.loc 2 45 0
 100 0059 4C8D5403 		leaq	-4(%rbx,%rax), %r10
 100      FC
 101 005e 488B4424 		movq	24(%rsp), %rax
 101      18
 102 0063 488B18   		movq	(%rax), %rbx
 103              	.L7:
 104              	.LVL11:
 105 0066 488B4424 		movq	8(%rsp), %rax
 105      08
  47:fltk-1.3.4-1/src/fl_draw.cxx ****   33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
 106              		.loc 2 47 0
 107 006b 660FEFDB 		pxor	%xmm3, %xmm3
 108 006f 4989DF   		movq	%rbx, %r15
 109 0072 4D89D6   		movq	%r10, %r14
 110 0075 440FB620 		movzbl	(%rax), %r12d
 111 0079 F20F115C 		movsd	%xmm3, 40(%rsp)
 111      2428
 112 007f 4589E5   		movl	%r12d, %r13d
 113 0082 4989C4   		movq	%rax, %r12
 114 0085 EB65     		jmp	.L29
 115              	.LVL12:
 116 0087 660F1F84 		.p2align 4,,10
 116      00000000 
 116      00
 117              		.p2align 3
 118              	.L23:
 119              	.LBB140:
 120              	.LBB141:
  51:fltk-1.3.4-1/src/fl_draw.cxx ****   36:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT extern char fl_draw_shortcut;
  52:fltk-1.3.4-1/src/fl_draw.cxx ****   37:fltk-1.3.4-1/FL/fl_draw.H **** 
  53:fltk-1.3.4-1/src/fl_draw.cxx ****   38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
  54:fltk-1.3.4-1/src/fl_draw.cxx ****   39:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  55:fltk-1.3.4-1/src/fl_draw.cxx ****   40:fltk-1.3.4-1/FL/fl_draw.H **** */
  56:fltk-1.3.4-1/src/fl_draw.cxx ****   41:fltk-1.3.4-1/FL/fl_draw.H **** 
  57:fltk-1.3.4-1/src/fl_draw.cxx ****   42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
  58:fltk-1.3.4-1/src/fl_draw.cxx ****   43:fltk-1.3.4-1/FL/fl_draw.H **** /**
  59:fltk-1.3.4-1/src/fl_draw.cxx ****   44:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  60:fltk-1.3.4-1/src/fl_draw.cxx ****   45:fltk-1.3.4-1/FL/fl_draw.H ****  For colormapped displays, a color cell will be allocated out o
  61:fltk-1.3.4-1/src/fl_draw.cxx ****   46:fltk-1.3.4-1/FL/fl_draw.H ****  \p fl_colormap the first time you use a color. If the colormap
  62:fltk-1.3.4-1/src/fl_draw.cxx ****   47:fltk-1.3.4-1/FL/fl_draw.H ****  then a least-squares algorithm is used to find the closest col
  63:fltk-1.3.4-1/src/fl_draw.cxx ****   48:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  64:fltk-1.3.4-1/src/fl_draw.cxx ****   49:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
  65:fltk-1.3.4-1/src/fl_draw.cxx ****   50:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] c color 
  66:fltk-1.3.4-1/src/fl_draw.cxx ****   51:fltk-1.3.4-1/FL/fl_draw.H ****  */
  67:fltk-1.3.4-1/src/fl_draw.cxx ****   52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c);
  68:fltk-1.3.4-1/src/fl_draw.cxx ****   53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead *
  69:fltk-1.3.4-1/src/fl_draw.cxx ****   54:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_color(int c) {fl_color((Fl_Color)c);}
  70:fltk-1.3.4-1/src/fl_draw.cxx ****   55:fltk-1.3.4-1/FL/fl_draw.H **** /**
  71:fltk-1.3.4-1/src/fl_draw.cxx ****   56:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  72:fltk-1.3.4-1/src/fl_draw.cxx ****   57:fltk-1.3.4-1/FL/fl_draw.H ****  The closest possible match to the RGB color is used.
  73:fltk-1.3.4-1/src/fl_draw.cxx ****   58:fltk-1.3.4-1/FL/fl_draw.H ****  The RGB color is used directly on TrueColor displays.
  74:fltk-1.3.4-1/src/fl_draw.cxx ****   59:fltk-1.3.4-1/FL/fl_draw.H ****  For colormap visuals the nearest index in the gray
  75:fltk-1.3.4-1/src/fl_draw.cxx ****   60:fltk-1.3.4-1/FL/fl_draw.H ****  ramp or color cube is used.
  76:fltk-1.3.4-1/src/fl_draw.cxx ****   61:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  77:fltk-1.3.4-1/src/fl_draw.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
  78:fltk-1.3.4-1/src/fl_draw.cxx ****   63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
  79:fltk-1.3.4-1/src/fl_draw.cxx ****   64:fltk-1.3.4-1/FL/fl_draw.H ****  */
  80:fltk-1.3.4-1/src/fl_draw.cxx ****   65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_dr
  81:fltk-1.3.4-1/src/fl_draw.cxx ****   66:fltk-1.3.4-1/FL/fl_draw.H **** /**
  82:fltk-1.3.4-1/src/fl_draw.cxx ****   67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
  83:fltk-1.3.4-1/src/fl_draw.cxx ****   68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
  84:fltk-1.3.4-1/src/fl_draw.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
  85:fltk-1.3.4-1/src/fl_draw.cxx ****   70:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Color fl_color() {return fl_graphics_driver->color();
  86:fltk-1.3.4-1/src/fl_draw.cxx ****   71:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
  87:fltk-1.3.4-1/src/fl_draw.cxx ****   72:fltk-1.3.4-1/FL/fl_draw.H **** 
  88:fltk-1.3.4-1/src/fl_draw.cxx ****   73:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_drawings
  89:fltk-1.3.4-1/src/fl_draw.cxx ****   74:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  90:fltk-1.3.4-1/src/fl_draw.cxx ****   75:fltk-1.3.4-1/FL/fl_draw.H **** */
  91:fltk-1.3.4-1/src/fl_draw.cxx ****   76:fltk-1.3.4-1/FL/fl_draw.H **** // clip:
  92:fltk-1.3.4-1/src/fl_draw.cxx ****   77:fltk-1.3.4-1/FL/fl_draw.H **** /**
  93:fltk-1.3.4-1/src/fl_draw.cxx ****   78:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
  94:fltk-1.3.4-1/src/fl_draw.cxx ****   79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
  95:fltk-1.3.4-1/src/fl_draw.cxx ****   80:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
  96:fltk-1.3.4-1/src/fl_draw.cxx ****   81:fltk-1.3.4-1/FL/fl_draw.H ****  */
 121              		.loc 2 96 0
 122 0090 83FD1F   		cmpl	$31, %ebp
 123 0093 0F8E5F01 		jle	.L36
 123      0000
 124 0099 83FD7F   		cmpl	$127, %ebp
 125 009c 0F845601 		je	.L36
 125      0000
  97:fltk-1.3.4-1/src/fl_draw.cxx ****   82:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_clip(int x, int y, int w, int h) {fl_graphi
  98:fltk-1.3.4-1/src/fl_draw.cxx ****   83:fltk-1.3.4-1/FL/fl_draw.H **** /**
  99:fltk-1.3.4-1/src/fl_draw.cxx ****   84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 100:fltk-1.3.4-1/src/fl_draw.cxx ****   85:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack (deprecated).
 101:fltk-1.3.4-1/src/fl_draw.cxx ****   86:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
 102:fltk-1.3.4-1/src/fl_draw.cxx ****   87:fltk-1.3.4-1/FL/fl_draw.H ****  \deprecated
 103:fltk-1.3.4-1/src/fl_draw.cxx ****   88:fltk-1.3.4-1/FL/fl_draw.H ****    fl_clip(int, int, int, int) is deprecated and will be remove
 104:fltk-1.3.4-1/src/fl_draw.cxx ****   89:fltk-1.3.4-1/FL/fl_draw.H ****    Please use fl_push_clip(int x, int y, int w, int h) instead.
 105:fltk-1.3.4-1/src/fl_draw.cxx ****   90:fltk-1.3.4-1/FL/fl_draw.H ****  */
 106:fltk-1.3.4-1/src/fl_draw.cxx ****   91:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_clip fl_push_clip
 107:fltk-1.3.4-1/src/fl_draw.cxx ****   92:fltk-1.3.4-1/FL/fl_draw.H **** /**
 108:fltk-1.3.4-1/src/fl_draw.cxx ****   93:fltk-1.3.4-1/FL/fl_draw.H ****  Pushes an empty clip region onto the stack so nothing will be 
 109:fltk-1.3.4-1/src/fl_draw.cxx ****   94:fltk-1.3.4-1/FL/fl_draw.H ****  */
 110:fltk-1.3.4-1/src/fl_draw.cxx ****   95:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_no_clip() {fl_graphics_driver->push_no_clip
 126              		.loc 2 110 0
 127 00a2 83FD40   		cmpl	$64, %ebp
 128 00a5 0F856D01 		jne	.L24
 128      0000
 129 00ab 8B842490 		movl	144(%rsp), %eax
 129      000000
 130 00b2 85C0     		testl	%eax, %eax
 131 00b4 0F845E01 		je	.L24
 131      0000
 111:fltk-1.3.4-1/src/fl_draw.cxx ****   96:fltk-1.3.4-1/FL/fl_draw.H **** /**
 132              		.loc 2 111 0
 133 00ba 41F64424 		testb	$-65, 1(%r12)
 133      01BF
 134 00c0 0F85C201 		jne	.L62
 134      0000
 135              	.LVL13:
 112:fltk-1.3.4-1/src/fl_draw.cxx ****   97:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the previous clip region.
 136              		.loc 2 112 0
 137 00c6 44882B   		movb	%r13b, (%rbx)
 113:fltk-1.3.4-1/src/fl_draw.cxx ****   98:fltk-1.3.4-1/FL/fl_draw.H ****  
 138              		.loc 2 113 0
 139 00c9 450FB66C 		movzbl	1(%r12), %r13d
 139      2401
 112:fltk-1.3.4-1/src/fl_draw.cxx ****   97:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the previous clip region.
 140              		.loc 2 112 0
 141 00cf 4883C301 		addq	$1, %rbx
 142              	.LVL14:
 143              		.loc 2 113 0
 144 00d3 4584ED   		testb	%r13b, %r13b
 145 00d6 7410     		je	.L20
 146              	.LVL15:
 147 00d8 450FB66C 		movzbl	2(%r12), %r13d
 147      2402
 148              		.loc 2 113 0 is_stmt 0 discriminator 1
 149 00de 4983C401 		addq	$1, %r12
 150              	.LVL16:
 151              		.p2align 4,,10
 152 00e2 660F1F44 		.p2align 3
 152      0000
 153              	.L20:
 154              	.LBE141:
  59:fltk-1.3.4-1/src/fl_draw.cxx ****   45:fltk-1.3.4-1/FL/fl_draw.H ****  For colormapped displays, a color cell will be allocated out o
 155              		.loc 2 59 0 is_stmt 1
 156 00e8 4983C401 		addq	$1, %r12
 157              	.LVL17:
 158              	.L29:
 159              	.LBB165:
 160              	.LBB142:
  63:fltk-1.3.4-1/src/fl_draw.cxx ****   49:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 161              		.loc 2 63 0
 162 00ec 41F6C5DF 		testb	$-33, %r13b
 163              	.LBE142:
  61:fltk-1.3.4-1/src/fl_draw.cxx ****   47:fltk-1.3.4-1/FL/fl_draw.H ****  then a least-squares algorithm is used to find the closest col
 164              		.loc 2 61 0
 165 00f0 410FB6ED 		movzbl	%r13b, %ebp
 166              	.LVL18:
 167              	.LBB160:
  63:fltk-1.3.4-1/src/fl_draw.cxx ****   49:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 168              		.loc 2 63 0
 169 00f4 0F84C600 		je	.L8
 169      0000
 170 00fa 83FD0A   		cmpl	$10, %ebp
 171 00fd 0F84BD00 		je	.L8
 171      0000
 172 0103 4D89FB   		movq	%r15, %r11
 173              	.L9:
 174              	.LBE160:
  80:fltk-1.3.4-1/src/fl_draw.cxx ****   66:fltk-1.3.4-1/FL/fl_draw.H **** /**
 175              		.loc 2 80 0
 176 0106 4939DE   		cmpq	%rbx, %r14
 177 0109 736A     		jnb	.L16
  81:fltk-1.3.4-1/src/fl_draw.cxx ****   67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
 178              		.loc 2 81 0
 179 010b 8B542420 		movl	32(%rsp), %edx
 180 010f 85D2     		testl	%edx, %edx
 181 0111 0F857101 		jne	.L62
 181      0000
  82:fltk-1.3.4-1/src/fl_draw.cxx ****   68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
 182              		.loc 2 82 0
 183 0117 8B150000 		movl	_ZZL12expand_text_PKcRPcidRiRdiiE12l_local_buff(%rip), %edx
 183      0000
 184 011d 4889D8   		movq	%rbx, %rax
  83:fltk-1.3.4-1/src/fl_draw.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 185              		.loc 2 83 0
 186 0120 4C8B3D00 		movq	_ZZL12expand_text_PKcRPcidRiRdiiE9local_buf(%rip), %r15
 186      000000
 187              	.LVL19:
  82:fltk-1.3.4-1/src/fl_draw.cxx ****   68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
 188              		.loc 2 82 0
 189 0127 4C29F0   		subq	%r14, %rax
 190 012a 4C895C24 		movq	%r11, 16(%rsp)
 190      10
 191 012f 448D8C02 		leal	200(%rdx,%rax), %r9d
 191      C8000000 
  83:fltk-1.3.4-1/src/fl_draw.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 192              		.loc 2 83 0
 193 0137 4C89FF   		movq	%r15, %rdi
  85:fltk-1.3.4-1/src/fl_draw.cxx ****   71:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 194              		.loc 2 85 0
 195 013a 4C29FB   		subq	%r15, %rbx
 196              	.LVL20:
  83:fltk-1.3.4-1/src/fl_draw.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 197              		.loc 2 83 0
 198 013d 4D63F1   		movslq	%r9d, %r14
 199              	.LVL21:
  82:fltk-1.3.4-1/src/fl_draw.cxx ****   68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
 200              		.loc 2 82 0
 201 0140 44890D00 		movl	%r9d, _ZZL12expand_text_PKcRPcidRiRdiiE12l_local_buff(%rip)
 201      000000
  83:fltk-1.3.4-1/src/fl_draw.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 202              		.loc 2 83 0
 203 0147 4C89F6   		movq	%r14, %rsi
 204 014a E8000000 		call	realloc
 204      00
 205              	.LVL22:
  86:fltk-1.3.4-1/src/fl_draw.cxx ****   72:fltk-1.3.4-1/FL/fl_draw.H **** 
 206              		.loc 2 86 0
 207 014f 4C8B5C24 		movq	16(%rsp), %r11
 207      10
  83:fltk-1.3.4-1/src/fl_draw.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 208              		.loc 2 83 0
 209 0154 488B7424 		movq	24(%rsp), %rsi
 209      18
  84:fltk-1.3.4-1/src/fl_draw.cxx ****   70:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Color fl_color() {return fl_graphics_driver->color();
 210              		.loc 2 84 0
 211 0159 4E8D7430 		leaq	-4(%rax,%r14), %r14
 211      FC
 212              	.LVL23:
  85:fltk-1.3.4-1/src/fl_draw.cxx ****   71:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 213              		.loc 2 85 0
 214 015e 4801C3   		addq	%rax, %rbx
 215              	.LVL24:
  87:fltk-1.3.4-1/src/fl_draw.cxx ****   73:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_drawings
 216              		.loc 2 87 0
 217 0161 48890500 		movq	%rax, _ZZL12expand_text_PKcRPcidRiRdiiE9local_buf(%rip)
 217      000000
  86:fltk-1.3.4-1/src/fl_draw.cxx ****   72:fltk-1.3.4-1/FL/fl_draw.H **** 
 218              		.loc 2 86 0
 219 0168 4D29FB   		subq	%r15, %r11
  83:fltk-1.3.4-1/src/fl_draw.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 220              		.loc 2 83 0
 221 016b 488906   		movq	%rax, (%rsi)
  86:fltk-1.3.4-1/src/fl_draw.cxx ****   72:fltk-1.3.4-1/FL/fl_draw.H **** 
 222              		.loc 2 86 0
 223 016e 4E8D3C18 		leaq	(%rax,%r11), %r15
 224              	.LVL25:
 225 0172 4D89FB   		movq	%r15, %r11
 226              	.L16:
  90:fltk-1.3.4-1/src/fl_draw.cxx ****   76:fltk-1.3.4-1/FL/fl_draw.H **** // clip:
 227              		.loc 2 90 0
 228 0175 83FD09   		cmpl	$9, %ebp
 229 0178 0F846A01 		je	.L65
 229      0000
  93:fltk-1.3.4-1/src/fl_draw.cxx ****   79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
 230              		.loc 2 93 0
 231 017e 83FD26   		cmpl	$38, %ebp
 232 0181 0F8509FF 		jne	.L23
 232      FFFF
  93:fltk-1.3.4-1/src/fl_draw.cxx ****   79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
 233              		.loc 2 93 0 is_stmt 0 discriminator 1
 234 0187 0FB60500 		movzbl	fl_draw_shortcut(%rip), %eax
 234      000000
 235 018e 84C0     		testb	%al, %al
 236 0190 0F848200 		je	.L24
 236      0000
  93:fltk-1.3.4-1/src/fl_draw.cxx ****   79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
 237              		.loc 2 93 0 discriminator 2
 238 0196 410FB654 		movzbl	1(%r12), %edx
 238      2401
 239 019c 84D2     		testb	%dl, %dl
 240 019e 7478     		je	.L24
  94:fltk-1.3.4-1/src/fl_draw.cxx ****   80:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
 241              		.loc 2 94 0 is_stmt 1
 242 01a0 80FA26   		cmpb	$38, %dl
 243 01a3 0F84A701 		je	.L66
 243      0000
  95:fltk-1.3.4-1/src/fl_draw.cxx ****   81:fltk-1.3.4-1/FL/fl_draw.H ****  */
 244              		.loc 2 95 0
 245 01a9 3C02     		cmpb	$2, %al
 246 01ab 4189D5   		movl	%edx, %r13d
 247 01ae 0F8434FF 		je	.L20
 247      FFFF
  95:fltk-1.3.4-1/src/fl_draw.cxx ****   81:fltk-1.3.4-1/FL/fl_draw.H ****  */
 248              		.loc 2 95 0 is_stmt 0 discriminator 1
 249 01b4 48891D00 		movq	%rbx, _ZL12underline_at(%rip)
 249      000000
 250 01bb E928FFFF 		jmp	.L20
 250      FF
 251              		.p2align 4,,10
 252              		.p2align 3
 253              	.L8:
 254              	.LBB161:
 255              	.LBB143:
 256              	.LBB144:
  65:fltk-1.3.4-1/src/fl_draw.cxx ****   51:fltk-1.3.4-1/FL/fl_draw.H ****  */
 257              		.loc 2 65 0 is_stmt 1
 258 01c0 4C396424 		cmpq	%r12, 8(%rsp)
 258      08
 259 01c5 7308     		jnb	.L34
 260 01c7 8B4C2424 		movl	36(%rsp), %ecx
 261 01cb 85C9     		testl	%ecx, %ecx
 262 01cd 7561     		jne	.L10
 263              	.L34:
 264              	.LBE144:
  75:fltk-1.3.4-1/src/fl_draw.cxx ****   61:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
 265              		.loc 2 75 0
 266 01cf 85ED     		testl	%ebp, %ebp
 267 01d1 4D89FB   		movq	%r15, %r11
 268              	.LVL26:
 269 01d4 0F84AE00 		je	.L62
 269      0000
 270              	.LVL27:
 271              	.L68:
  76:fltk-1.3.4-1/src/fl_draw.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 272              		.loc 2 76 0
 273 01da 83FD0A   		cmpl	$10, %ebp
 274 01dd 0F848301 		je	.L67
 274      0000
  77:fltk-1.3.4-1/src/fl_draw.cxx ****   63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
 275              		.loc 2 77 0
 276 01e3 498D4424 		leaq	1(%r12), %rax
 276      01
 277 01e8 48894424 		movq	%rax, 8(%rsp)
 277      08
 278              	.LVL28:
 279 01ed E914FFFF 		jmp	.L9
 279      FF
 280              	.LVL29:
 281              		.p2align 4,,10
 282 01f2 660F1F44 		.p2align 3
 282      0000
 283              	.L36:
 284              	.LBE143:
 285              	.LBE161:
  98:fltk-1.3.4-1/src/fl_draw.cxx ****   84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 286              		.loc 2 98 0
 287 01f8 4489E9   		movl	%r13d, %ecx
  97:fltk-1.3.4-1/src/fl_draw.cxx ****   83:fltk-1.3.4-1/FL/fl_draw.H **** /**
 288              		.loc 2 97 0
 289 01fb C6035E   		movb	$94, (%rbx)
  98:fltk-1.3.4-1/src/fl_draw.cxx ****   84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 290              		.loc 2 98 0
 291 01fe 4883C302 		addq	$2, %rbx
 292              	.LVL30:
 293 0202 83F140   		xorl	$64, %ecx
 294 0205 884BFF   		movb	%cl, -1(%rbx)
 295 0208 450FB66C 		movzbl	1(%r12), %r13d
 295      2401
 296 020e E9D5FEFF 		jmp	.L20
 296      FF
 297              		.p2align 4,,10
 298 0213 0F1F4400 		.p2align 3
 298      00
 299              	.L24:
 300              	.LVL31:
 114:fltk-1.3.4-1/src/fl_draw.cxx ****   99:fltk-1.3.4-1/FL/fl_draw.H ****  You must call fl_pop_clip() once for every time you call fl_pu
 115:fltk-1.3.4-1/src/fl_draw.cxx ****  100:fltk-1.3.4-1/FL/fl_draw.H ****  Unpredictable results may occur if the clip stack is not empty
 301              		.loc 2 115 0
 302 0218 44882B   		movb	%r13b, (%rbx)
 303 021b 4883C301 		addq	$1, %rbx
 304              	.LVL32:
 305 021f 450FB66C 		movzbl	1(%r12), %r13d
 305      2401
 306 0225 E9BEFEFF 		jmp	.L20
 306      FF
 307 022a 660F1F44 		.p2align 4,,10
 307      0000
 308              		.p2align 3
 309              	.L10:
 310              	.LBB162:
 311              	.LBB157:
 312              	.LBB154:
 313              	.LBB145:
 314              	.LBB146:
 315              	.LBB147:
 539:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 316              		.loc 1 539 0
 317 0230 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 317      000000
 318 0237 4889DA   		movq	%rbx, %rdx
 319              	.LBE147:
 320              	.LBE146:
  66:fltk-1.3.4-1/src/fl_draw.cxx ****   52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c);
 321              		.loc 2 66 0
 322 023a 48895C24 		movq	%rbx, 16(%rsp)
 322      10
 323              	.LBB150:
 324              	.LBB148:
 539:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 325              		.loc 1 539 0
 326 023f 4C29FA   		subq	%r15, %rdx
 327              	.LBE148:
 328              	.LBE150:
  66:fltk-1.3.4-1/src/fl_draw.cxx ****   52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c);
 329              		.loc 2 66 0
 330 0242 4C897C24 		movq	%r15, 48(%rsp)
 330      30
 331              	.LVL33:
 332              	.LBB151:
 333              	.LBB149:
 539:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 334              		.loc 1 539 0
 335 0247 4C89FE   		movq	%r15, %rsi
 336 024a 488B07   		movq	(%rdi), %rax
 337 024d FF90B801 		call	*440(%rax)
 337      0000
 338              	.LVL34:
 339              	.LBE149:
 340              	.LBE151:
  67:fltk-1.3.4-1/src/fl_draw.cxx ****   53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead *
 341              		.loc 2 67 0
 342 0253 488B4424 		movq	24(%rsp), %rax
 342      18
  66:fltk-1.3.4-1/src/fl_draw.cxx ****   52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c);
 343              		.loc 2 66 0
 344 0258 F20F5844 		addsd	40(%rsp), %xmm0
 344      2428
 345              	.LVL35:
  67:fltk-1.3.4-1/src/fl_draw.cxx ****   53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead *
 346              		.loc 2 67 0
 347 025e 4C8B5C24 		movq	16(%rsp), %r11
 347      10
 348 0263 4C3B38   		cmpq	(%rax), %r15
 349 0266 760C     		jbe	.L30
  67:fltk-1.3.4-1/src/fl_draw.cxx ****   53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead *
 350              		.loc 2 67 0 is_stmt 0 discriminator 1
 351 0268 660F2E44 		ucomisd	56(%rsp), %xmm0
 351      2438
 352 026e 0F873F01 		ja	.L31
 352      0000
 353              	.L30:
 354              	.LBE145:
 355              	.LBE154:
  75:fltk-1.3.4-1/src/fl_draw.cxx ****   61:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
 356              		.loc 2 75 0 is_stmt 1
 357 0274 85ED     		testl	%ebp, %ebp
 358              	.LBB155:
 359              	.LBB152:
 360 0276 4989DF   		movq	%rbx, %r15
 361              	.LVL36:
  73:fltk-1.3.4-1/src/fl_draw.cxx ****   59:fltk-1.3.4-1/FL/fl_draw.H ****  For colormap visuals the nearest index in the gray
 362              		.loc 2 73 0
 363 0279 F20F1144 		movsd	%xmm0, 40(%rsp)
 363      2428
 364              	.LVL37:
 365              	.LBE152:
 366              	.LBE155:
  75:fltk-1.3.4-1/src/fl_draw.cxx ****   61:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
 367              		.loc 2 75 0
 368 027f 0F8555FF 		jne	.L68
 368      FFFF
 369              	.LVL38:
 370              		.p2align 4,,10
 371 0285 0F1F00   		.p2align 3
 372              	.L62:
 373 0288 89DA     		movl	%ebx, %edx
 374 028a 4D89FE   		movq	%r15, %r14
 375              	.LVL39:
 376 028d 48895C24 		movq	%rbx, 48(%rsp)
 376      30
 377 0292 4D89E7   		movq	%r12, %r15
 378              	.LVL40:
 379 0295 4429DA   		subl	%r11d, %edx
 380              	.LVL41:
 381              	.L13:
 382              	.LBE157:
 383              	.LBE162:
 384              	.LBE165:
 385              	.LBE140:
 386              	.LBB169:
 387              	.LBB170:
 539:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 388              		.loc 1 539 0
 389 0298 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 389      000000
 390 029f 4C89F6   		movq	%r14, %rsi
 391 02a2 488B07   		movq	(%rdi), %rax
 392 02a5 FF90B801 		call	*440(%rax)
 392      0000
 393              	.LVL42:
 394              	.LBE170:
 395              	.LBE169:
 116:fltk-1.3.4-1/src/fl_draw.cxx ****  101:fltk-1.3.4-1/FL/fl_draw.H ****  you return to FLTK.
 117:fltk-1.3.4-1/src/fl_draw.cxx ****  102:fltk-1.3.4-1/FL/fl_draw.H ****  */
 118:fltk-1.3.4-1/src/fl_draw.cxx ****  103:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_clip() {fl_graphics_driver->pop_clip(); }
 119:fltk-1.3.4-1/src/fl_draw.cxx ****  104:fltk-1.3.4-1/FL/fl_draw.H **** /**
 396              		.loc 2 119 0
 397 02ab F20F5844 		addsd	40(%rsp), %xmm0
 397      2428
 398 02b1 488B4424 		movq	72(%rsp), %rax
 398      48
 120:fltk-1.3.4-1/src/fl_draw.cxx ****  105:fltk-1.3.4-1/FL/fl_draw.H ****  Does the rectangle intersect the current clip region?
 121:fltk-1.3.4-1/src/fl_draw.cxx ****  106:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 399              		.loc 2 121 0
 400 02b6 488B7C24 		movq	24(%rsp), %rdi
 400      18
 401 02bb 488B4C24 		movq	64(%rsp), %rcx
 401      40
 119:fltk-1.3.4-1/src/fl_draw.cxx ****  105:fltk-1.3.4-1/FL/fl_draw.H ****  Does the rectangle intersect the current clip region?
 402              		.loc 2 119 0
 403 02c0 F20F1100 		movsd	%xmm0, (%rax)
 120:fltk-1.3.4-1/src/fl_draw.cxx ****  105:fltk-1.3.4-1/FL/fl_draw.H ****  Does the rectangle intersect the current clip region?
 404              		.loc 2 120 0
 405 02c4 C60300   		movb	$0, (%rbx)
 406              		.loc 2 121 0
 407 02c7 488B4424 		movq	48(%rsp), %rax
 407      30
 408 02cc 482B07   		subq	(%rdi), %rax
 409 02cf 8901     		movl	%eax, (%rcx)
 122:fltk-1.3.4-1/src/fl_draw.cxx ****  107:fltk-1.3.4-1/FL/fl_draw.H ****  \returns non-zero if any of the rectangle intersects the curre
 123:fltk-1.3.4-1/src/fl_draw.cxx ****  108:fltk-1.3.4-1/FL/fl_draw.H ****  region. If this returns 0 you don't have to draw the object.
 410              		.loc 2 123 0
 411 02d1 4883C458 		addq	$88, %rsp
 412              		.cfi_remember_state
 413              		.cfi_def_cfa_offset 56
 414 02d5 4C89F8   		movq	%r15, %rax
 415 02d8 5B       		popq	%rbx
 416              		.cfi_def_cfa_offset 48
 417              	.LVL43:
 418 02d9 5D       		popq	%rbp
 419              		.cfi_def_cfa_offset 40
 420              	.LVL44:
 421 02da 415C     		popq	%r12
 422              		.cfi_def_cfa_offset 32
 423 02dc 415D     		popq	%r13
 424              		.cfi_def_cfa_offset 24
 425              	.LVL45:
 426 02de 415E     		popq	%r14
 427              		.cfi_def_cfa_offset 16
 428              	.LVL46:
 429 02e0 415F     		popq	%r15
 430              		.cfi_def_cfa_offset 8
 431              	.LVL47:
 432 02e2 C3       		ret
 433              	.LVL48:
 434              		.p2align 4,,10
 435 02e3 0F1F4400 		.p2align 3
 435      00
 436              	.L65:
 437              		.cfi_restore_state
 438              	.LBB171:
 439              	.LBB166:
  91:fltk-1.3.4-1/src/fl_draw.cxx ****   77:fltk-1.3.4-1/FL/fl_draw.H **** /**
 440              		.loc 2 91 0
 441 02e8 488B4424 		movq	24(%rsp), %rax
 441      18
 442 02ed 4889DE   		movq	%rbx, %rsi
 443 02f0 488B38   		movq	(%rax), %rdi
 444 02f3 4829FE   		subq	%rdi, %rsi
 445 02f6 E8000000 		call	fl_utf_nb_char
 445      00
 446              	.LVL49:
 447 02fb 99       		cltd
 448 02fc C1EA1D   		shrl	$29, %edx
 449 02ff 01D0     		addl	%edx, %eax
 450 0301 83E007   		andl	$7, %eax
 451 0304 29D0     		subl	%edx, %eax
 452              	.LVL50:
 453 0306 4939DE   		cmpq	%rbx, %r14
 454 0309 770A     		ja	.L50
 455 030b EB18     		jmp	.L35
 456 030d 0F1F00   		.p2align 4,,10
 457              		.p2align 3
 458              	.L69:
  91:fltk-1.3.4-1/src/fl_draw.cxx ****   77:fltk-1.3.4-1/FL/fl_draw.H **** /**
 459              		.loc 2 91 0 is_stmt 0 discriminator 2
 460 0310 4939DE   		cmpq	%rbx, %r14
 461 0313 7610     		jbe	.L35
 462              	.LVL51:
 463              	.L50:
 464 0315 83C001   		addl	$1, %eax
 465              	.LVL52:
  92:fltk-1.3.4-1/src/fl_draw.cxx ****   78:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 466              		.loc 2 92 0 is_stmt 1 discriminator 2
 467 0318 4883C301 		addq	$1, %rbx
 468              	.LVL53:
 469 031c C643FF20 		movb	$32, -1(%rbx)
  91:fltk-1.3.4-1/src/fl_draw.cxx ****   77:fltk-1.3.4-1/FL/fl_draw.H **** /**
 470              		.loc 2 91 0 discriminator 2
 471 0320 83F807   		cmpl	$7, %eax
 472 0323 7EEB     		jle	.L69
 473              	.LVL54:
 474              	.L35:
 475 0325 450FB66C 		movzbl	1(%r12), %r13d
 475      2401
 476 032b E9B8FDFF 		jmp	.L20
 476      FF
 477              	.LVL55:
 478              		.p2align 4,,10
 479              		.p2align 3
 480              	.L6:
 481              	.LBE166:
 482              	.LBE171:
  51:fltk-1.3.4-1/src/fl_draw.cxx ****   37:fltk-1.3.4-1/FL/fl_draw.H **** 
 483              		.loc 2 51 0
 484 0330 488B1D00 		movq	_ZZL12expand_text_PKcRPcidRiRdiiE9local_buf(%rip), %rbx
 484      000000
 485 0337 488B4424 		movq	24(%rsp), %rax
 485      18
 486 033c 488918   		movq	%rbx, (%rax)
  52:fltk-1.3.4-1/src/fl_draw.cxx ****   38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
 487              		.loc 2 52 0
 488 033f 48630500 		movslq	_ZZL12expand_text_PKcRPcidRiRdiiE12l_local_buff(%rip), %rax
 488      000000
 489 0346 4C8D5403 		leaq	-4(%rbx,%rax), %r10
 489      FC
 490              	.LVL56:
 491 034b E916FDFF 		jmp	.L7
 491      FF
 492              	.LVL57:
 493              		.p2align 4,,10
 494              		.p2align 3
 495              	.L66:
 496              	.LBB172:
 497              	.LBB167:
  94:fltk-1.3.4-1/src/fl_draw.cxx ****   80:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
 498              		.loc 2 94 0 discriminator 1
 499 0350 C60326   		movb	$38, (%rbx)
 500 0353 4983C401 		addq	$1, %r12
 501              	.LVL58:
 502 0357 450FB66C 		movzbl	1(%r12), %r13d
 502      2401
 503 035d 4883C301 		addq	$1, %rbx
 504              	.LVL59:
 505 0361 E982FDFF 		jmp	.L20
 505      FF
 506              	.L67:
 507 0366 4D89FE   		movq	%r15, %r14
 508              	.LVL60:
 509 0369 89DA     		movl	%ebx, %edx
 510 036b 4D89E7   		movq	%r12, %r15
 511              	.LVL61:
 512              	.LBB163:
 513              	.LBB158:
  76:fltk-1.3.4-1/src/fl_draw.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 514              		.loc 2 76 0 discriminator 1
 515 036e 4983C701 		addq	$1, %r15
 516              	.LVL62:
 517 0372 48895C24 		movq	%rbx, 48(%rsp)
 517      30
 518 0377 4429DA   		subl	%r11d, %edx
 519 037a E919FFFF 		jmp	.L13
 519      FF
 520              	.LVL63:
 521              	.L64:
 522              	.LBE158:
 523              	.LBE163:
 524              	.LBE167:
 525              	.LBE172:
  49:fltk-1.3.4-1/src/fl_draw.cxx ****   35:fltk-1.3.4-1/FL/fl_draw.H **** // Label flags...
 526              		.loc 2 49 0 discriminator 1
 527 037f BF000000 		movl	$_ZGVZL12expand_text_PKcRPcidRiRdiiE9local_buf, %edi
 527      00
 528              	.LVL64:
 529 0384 E8000000 		call	__cxa_guard_acquire
 529      00
 530              	.LVL65:
 531 0389 85C0     		testl	%eax, %eax
 532 038b 0F84BBFC 		je	.L4
 532      FFFF
  49:fltk-1.3.4-1/src/fl_draw.cxx ****   35:fltk-1.3.4-1/FL/fl_draw.H **** // Label flags...
 533              		.loc 2 49 0 is_stmt 0 discriminator 2
 534 0391 48633D00 		movslq	_ZZL12expand_text_PKcRPcidRiRdiiE12l_local_buff(%rip), %rdi
 534      000000
 535 0398 E8000000 		call	malloc
 535      00
 536              	.LVL66:
 537 039d BF000000 		movl	$_ZGVZL12expand_text_PKcRPcidRiRdiiE9local_buf, %edi
 537      00
 538 03a2 48890500 		movq	%rax, _ZZL12expand_text_PKcRPcidRiRdiiE9local_buf(%rip)
 538      000000
 539 03a9 E8000000 		call	__cxa_guard_release
 539      00
 540              	.LVL67:
 541 03ae E999FCFF 		jmp	.L4
 541      FF
 542              	.LVL68:
 543              	.L31:
 544 03b3 4D89FE   		movq	%r15, %r14
 545              	.LVL69:
 546              	.LBB173:
 547              	.LBB168:
 548              	.LBB164:
 549              	.LBB159:
 550              	.LBB156:
 551              	.LBB153:
 552 03b6 31D2     		xorl	%edx, %edx
 553 03b8 4C8B7C24 		movq	8(%rsp), %r15
 553      08
 554              	.LVL70:
 555 03bd 4C89F3   		movq	%r14, %rbx
 556              	.LVL71:
 557 03c0 E9D3FEFF 		jmp	.L13
 557      FF
 558              	.LBE153:
 559              	.LBE156:
 560              	.LBE159:
 561              	.LBE164:
 562              	.LBE168:
 563              	.LBE173:
 564              		.cfi_endproc
 565              	.LFE485:
 567              		.section	.text.unlikely._ZL12expand_text_PKcRPcidRiRdii
 568              	.LCOLDE2:
 569              		.section	.text._ZL12expand_text_PKcRPcidRiRdii
 570              	.LHOTE2:
 571              		.section	.text.unlikely._Z14fl_expand_textPKcPcidRiRdii,"ax",@progbits
 572              	.LCOLDB3:
 573              		.section	.text._Z14fl_expand_textPKcPcidRiRdii,"ax",@progbits
 574              	.LHOTB3:
 575              		.p2align 4,,15
 576              		.globl	_Z14fl_expand_textPKcPcidRiRdii
 578              	_Z14fl_expand_textPKcPcidRiRdii:
 579              	.LFB486:
 124:fltk-1.3.4-1/src/fl_draw.cxx ****  109:fltk-1.3.4-1/FL/fl_draw.H ****  
 125:fltk-1.3.4-1/src/fl_draw.cxx ****  110:fltk-1.3.4-1/FL/fl_draw.H ****  \note
 126:fltk-1.3.4-1/src/fl_draw.cxx ****  111:fltk-1.3.4-1/FL/fl_draw.H ****  Under X this returns 2 if the rectangle is partially clipped, 
 127:fltk-1.3.4-1/src/fl_draw.cxx ****  112:fltk-1.3.4-1/FL/fl_draw.H ****  and 1 if it is entirely inside the clip region.
 128:fltk-1.3.4-1/src/fl_draw.cxx ****  113:fltk-1.3.4-1/FL/fl_draw.H ****  */
 129:fltk-1.3.4-1/src/fl_draw.cxx ****  114:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_not_clipped(int x, int y, int w, int h) {return f
 130:fltk-1.3.4-1/src/fl_draw.cxx ****  115:fltk-1.3.4-1/FL/fl_draw.H **** /**
 131:fltk-1.3.4-1/src/fl_draw.cxx ****  116:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the rectangle with the current clip region and retu
 132:fltk-1.3.4-1/src/fl_draw.cxx ****  117:fltk-1.3.4-1/FL/fl_draw.H ****  bounding box of the result.
 133:fltk-1.3.4-1/src/fl_draw.cxx ****  118:fltk-1.3.4-1/FL/fl_draw.H ****  
 134:fltk-1.3.4-1/src/fl_draw.cxx ****  119:fltk-1.3.4-1/FL/fl_draw.H ****  Returns non-zero if the resulting rectangle is different to th
 135:fltk-1.3.4-1/src/fl_draw.cxx ****  120:fltk-1.3.4-1/FL/fl_draw.H ****  This can be used to limit the necessary drawing to a rectangle
 136:fltk-1.3.4-1/src/fl_draw.cxx ****  121:fltk-1.3.4-1/FL/fl_draw.H ****  \p W and \p H are set to zero if the rectangle is completely o
 580              		.loc 2 136 0 is_stmt 1
 581              		.cfi_startproc
 582              	.LVL72:
 583 0000 4883EC20 		subq	$32, %rsp
 584              		.cfi_def_cfa_offset 40
 137:fltk-1.3.4-1/src/fl_draw.cxx ****  122:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 585              		.loc 2 137 0
 586 0004 8B442428 		movl	40(%rsp), %eax
 136:fltk-1.3.4-1/src/fl_draw.cxx ****  122:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 587              		.loc 2 136 0
 588 0008 48897424 		movq	%rsi, 16(%rsp)
 588      10
 589              		.loc 2 137 0
 590 000d 50       		pushq	%rax
 591              		.cfi_def_cfa_offset 48
 592 000e 488D7424 		leaq	24(%rsp), %rsi
 592      18
 593              	.LVL73:
 594 0013 E8000000 		call	_ZL12expand_text_PKcRPcidRiRdii
 594      00
 595              	.LVL74:
 138:fltk-1.3.4-1/src/fl_draw.cxx ****  123:fltk-1.3.4-1/FL/fl_draw.H ****  \param[out] X,Y,W,H position and size of resulting bounding bo
 596              		.loc 2 138 0
 597 0018 4883C428 		addq	$40, %rsp
 598              		.cfi_def_cfa_offset 8
 599 001c C3       		ret
 600              		.cfi_endproc
 601              	.LFE486:
 603              		.section	.text.unlikely._Z14fl_expand_textPKcPcidRiRdii
 604              	.LCOLDE3:
 605              		.section	.text._Z14fl_expand_textPKcPcidRiRdii
 606              	.LHOTE3:
 607              		.section	.rodata.str1.1,"aMS",@progbits,1
 608              	.LC4:
 609 0000 00       		.string	""
 610              	.LC6:
 611 0001 5F00     		.string	"_"
 612              		.section	.text.unlikely._Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei,"ax",@progbits
 613              	.LCOLDB7:
 614              		.section	.text._Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei,"ax",@progbits
 615              	.LHOTB7:
 616              		.p2align 4,,15
 617              		.globl	_Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei
 619              	_Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei:
 620              	.LFB487:
 139:fltk-1.3.4-1/src/fl_draw.cxx ****  124:fltk-1.3.4-1/FL/fl_draw.H ****  \returns Non-zero if the resulting rectangle is different to t
 140:fltk-1.3.4-1/src/fl_draw.cxx ****  125:fltk-1.3.4-1/FL/fl_draw.H ****  */
 141:fltk-1.3.4-1/src/fl_draw.cxx ****  126:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_clip_box(int x , int y, int w, int h, int& X, int
 142:fltk-1.3.4-1/src/fl_draw.cxx ****  127:fltk-1.3.4-1/FL/fl_draw.H ****   {return fl_graphics_driver->clip_box(x,y,w,h,X,Y,W,H); }
 143:fltk-1.3.4-1/src/fl_draw.cxx ****  128:fltk-1.3.4-1/FL/fl_draw.H **** /** Undoes any clobbering of clip done by your program */
 144:fltk-1.3.4-1/src/fl_draw.cxx ****  129:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_restore_clip() { fl_graphics_driver->restore_cli
 145:fltk-1.3.4-1/src/fl_draw.cxx ****  130:fltk-1.3.4-1/FL/fl_draw.H **** /**
 146:fltk-1.3.4-1/src/fl_draw.cxx ****  131:fltk-1.3.4-1/FL/fl_draw.H ****  Replaces the top of the clipping stack with a clipping region 
 147:fltk-1.3.4-1/src/fl_draw.cxx ****  132:fltk-1.3.4-1/FL/fl_draw.H ****  
 148:fltk-1.3.4-1/src/fl_draw.cxx ****  133:fltk-1.3.4-1/FL/fl_draw.H ****  Fl_Region is an operating system specific type.
 149:fltk-1.3.4-1/src/fl_draw.cxx ****  134:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r clipping region
 150:fltk-1.3.4-1/src/fl_draw.cxx ****  135:fltk-1.3.4-1/FL/fl_draw.H ****  */
 151:fltk-1.3.4-1/src/fl_draw.cxx ****  136:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_clip_region(Fl_Region r) { fl_graphics_driver->c
 621              		.loc 2 151 0
 622              		.cfi_startproc
 623              	.LVL75:
 624 0000 4157     		pushq	%r15
 625              		.cfi_def_cfa_offset 16
 626              		.cfi_offset 15, -16
 627 0002 4156     		pushq	%r14
 628              		.cfi_def_cfa_offset 24
 629              		.cfi_offset 14, -24
 630 0004 4155     		pushq	%r13
 631              		.cfi_def_cfa_offset 32
 632              		.cfi_offset 13, -32
 633 0006 4154     		pushq	%r12
 634              		.cfi_def_cfa_offset 40
 635              		.cfi_offset 12, -40
 636 0008 4989FD   		movq	%rdi, %r13
 637 000b 55       		pushq	%rbp
 638              		.cfi_def_cfa_offset 48
 639              		.cfi_offset 6, -48
 640 000c 53       		pushq	%rbx
 641              		.cfi_def_cfa_offset 56
 642              		.cfi_offset 3, -56
 643 000d 4881EC98 		subq	$664, %rsp
 643      020000
 644              		.cfi_def_cfa_offset 720
 645              		.loc 2 151 0
 646 0014 488B8424 		movq	720(%rsp), %rax
 646      D0020000 
 647 001c 8974241C 		movl	%esi, 28(%rsp)
 648 0020 64488B3C 		movq	%fs:40, %rdi
 648      25280000 
 648      00
 649 0029 4889BC24 		movq	%rdi, 648(%rsp)
 649      88020000 
 650 0031 31FF     		xorl	%edi, %edi
 651              	.LVL76:
 652 0033 8954244C 		movl	%edx, 76(%rsp)
 653 0037 894C2420 		movl	%ecx, 32(%rsp)
 654 003b 48894424 		movq	%rax, 88(%rsp)
 654      58
 655 0040 488B8424 		movq	728(%rsp), %rax
 655      D8020000 
 656 0048 44894424 		movl	%r8d, 80(%rsp)
 656      50
 657 004d 44894C24 		movl	%r9d, 4(%rsp)
 657      04
 658 0052 448BBC24 		movl	736(%rsp), %r15d
 658      E0020000 
 152:fltk-1.3.4-1/src/fl_draw.cxx ****  137:fltk-1.3.4-1/FL/fl_draw.H **** /**
 659              		.loc 2 152 0
 660 005a 48C74424 		movq	$0, 112(%rsp)
 660      70000000 
 660      00
 153:fltk-1.3.4-1/src/fl_draw.cxx ****  138:fltk-1.3.4-1/FL/fl_draw.H ****  Returns the current clipping region.
 154:fltk-1.3.4-1/src/fl_draw.cxx ****  139:fltk-1.3.4-1/FL/fl_draw.H ****  */
 155:fltk-1.3.4-1/src/fl_draw.cxx ****  140:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Region fl_clip_region() { return fl_graphics_driver->
 156:fltk-1.3.4-1/src/fl_draw.cxx ****  141:fltk-1.3.4-1/FL/fl_draw.H **** 
 157:fltk-1.3.4-1/src/fl_draw.cxx ****  142:fltk-1.3.4-1/FL/fl_draw.H **** 
 158:fltk-1.3.4-1/src/fl_draw.cxx ****  143:fltk-1.3.4-1/FL/fl_draw.H **** // points:
 159:fltk-1.3.4-1/src/fl_draw.cxx ****  144:fltk-1.3.4-1/FL/fl_draw.H **** /**
 160:fltk-1.3.4-1/src/fl_draw.cxx ****  145:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a single pixel at the given coordinates
 161:fltk-1.3.4-1/src/fl_draw.cxx ****  146:fltk-1.3.4-1/FL/fl_draw.H ****  */
 162:fltk-1.3.4-1/src/fl_draw.cxx ****  147:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_point(int x, int y) { fl_graphics_driver->point(
 163:fltk-1.3.4-1/src/fl_draw.cxx ****  148:fltk-1.3.4-1/FL/fl_draw.H **** 
 164:fltk-1.3.4-1/src/fl_draw.cxx ****  149:fltk-1.3.4-1/FL/fl_draw.H **** // line type:
 661              		.loc 2 164 0
 662 0063 4885C0   		testq	%rax, %rax
 151:fltk-1.3.4-1/src/fl_draw.cxx ****  137:fltk-1.3.4-1/FL/fl_draw.H **** /**
 663              		.loc 2 151 0
 664 0066 48894424 		movq	%rax, 56(%rsp)
 664      38
 665              		.loc 2 164 0
 666 006b 0F847F03 		je	.L73
 666      0000
 667              		.loc 2 164 0 is_stmt 0 discriminator 1
 668 0071 4489C8   		movl	%r9d, %eax
 669 0074 F6C402   		testb	$2, %ah
 670 0077 0F857303 		jne	.L73
 670      0000
 671 007d 8B6C2404 		movl	4(%rsp), %ebp
 165:fltk-1.3.4-1/src/fl_draw.cxx ****  150:fltk-1.3.4-1/FL/fl_draw.H **** /**
 166:fltk-1.3.4-1/src/fl_draw.cxx ****  151:fltk-1.3.4-1/FL/fl_draw.H ****  Sets how to draw lines (the "pen").
 672              		.loc 2 166 0 is_stmt 1
 673 0081 C6842480 		movb	$0, 128(%rsp)
 673      00000000 
 674              	.LVL77:
 167:fltk-1.3.4-1/src/fl_draw.cxx ****  152:fltk-1.3.4-1/FL/fl_draw.H ****  If you change this it is your responsibility to set it back to
 168:fltk-1.3.4-1/src/fl_draw.cxx ****  153:fltk-1.3.4-1/FL/fl_draw.H ****  using \c fl_line_style(0).
 169:fltk-1.3.4-1/src/fl_draw.cxx ****  154:fltk-1.3.4-1/FL/fl_draw.H ****  
 675              		.loc 2 169 0
 676 0089 C684247F 		movb	$0, 383(%rsp)
 676      01000000 
 677              	.LVL78:
 678 0091 81E50001 		andl	$256, %ebp
 678      0000
 679 0097 0F944424 		sete	75(%rsp)
 679      4B
 680 009c 0F954424 		setne	16(%rsp)
 680      10
 170:fltk-1.3.4-1/src/fl_draw.cxx ****  155:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] style A bitmask which is a bitwise-OR of a line sty
 171:fltk-1.3.4-1/src/fl_draw.cxx ****  156:fltk-1.3.4-1/FL/fl_draw.H ****  style, and a join style. If you don't specify a dash type you
 172:fltk-1.3.4-1/src/fl_draw.cxx ****  157:fltk-1.3.4-1/FL/fl_draw.H ****  will get a solid line. If you don't specify a cap or join type
 681              		.loc 2 172 0
 682 00a1 4585FF   		testl	%r15d, %r15d
 683 00a4 0F857C03 		jne	.L141
 683      0000
 684 00aa C7442434 		movl	$0, 52(%rsp)
 684      00000000 
 167:fltk-1.3.4-1/src/fl_draw.cxx ****  152:fltk-1.3.4-1/FL/fl_draw.H ****  If you change this it is your responsibility to set it back to
 685              		.loc 2 167 0
 686 00b2 C7442424 		movl	$0, 36(%rsp)
 686      00000000 
 173:fltk-1.3.4-1/src/fl_draw.cxx ****  158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 174:fltk-1.3.4-1/src/fl_draw.cxx ****  159:fltk-1.3.4-1/FL/fl_draw.H ****  fastest.
 175:fltk-1.3.4-1/src/fl_draw.cxx ****  160:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] width The thickness of the lines in pixels. Zero re
 176:fltk-1.3.4-1/src/fl_draw.cxx ****  161:fltk-1.3.4-1/FL/fl_draw.H ****  system defined default, which on both X and Windows is somewha
 177:fltk-1.3.4-1/src/fl_draw.cxx ****  162:fltk-1.3.4-1/FL/fl_draw.H ****  different and nicer than 1.
 178:fltk-1.3.4-1/src/fl_draw.cxx ****  163:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] dashes A pointer to an array of dash lengths, measu
 179:fltk-1.3.4-1/src/fl_draw.cxx ****  164:fltk-1.3.4-1/FL/fl_draw.H ****  The first location is how long to draw a solid portion, the ne
 180:fltk-1.3.4-1/src/fl_draw.cxx ****  165:fltk-1.3.4-1/FL/fl_draw.H ****  is how long to draw the gap, then the solid, etc. It is termin
 181:fltk-1.3.4-1/src/fl_draw.cxx ****  166:fltk-1.3.4-1/FL/fl_draw.H ****  with a zero-length entry. A \c NULL pointer or a zero-length
 182:fltk-1.3.4-1/src/fl_draw.cxx ****  167:fltk-1.3.4-1/FL/fl_draw.H ****  array results in a solid line. Odd array sizes are not support
 183:fltk-1.3.4-1/src/fl_draw.cxx ****  168:fltk-1.3.4-1/FL/fl_draw.H ****  and result in undefined behavior.
 184:fltk-1.3.4-1/src/fl_draw.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 185:fltk-1.3.4-1/src/fl_draw.cxx ****  170:fltk-1.3.4-1/FL/fl_draw.H ****  \note      Because of how line styles are implemented on Win32
 186:fltk-1.3.4-1/src/fl_draw.cxx ****  171:fltk-1.3.4-1/FL/fl_draw.H ****  you \e must set the line style \e after setting the drawing
 187:fltk-1.3.4-1/src/fl_draw.cxx ****  172:fltk-1.3.4-1/FL/fl_draw.H ****  color. If you set the color after the line style you will lose
 188:fltk-1.3.4-1/src/fl_draw.cxx ****  173:fltk-1.3.4-1/FL/fl_draw.H ****  the line style settings.
 189:fltk-1.3.4-1/src/fl_draw.cxx ****  174:fltk-1.3.4-1/FL/fl_draw.H ****  \note      The \p dashes array does not work under Windows 95,
 687              		.loc 2 189 0
 688 00ba 31C0     		xorl	%eax, %eax
 170:fltk-1.3.4-1/src/fl_draw.cxx ****  155:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] style A bitmask which is a bitwise-OR of a line sty
 689              		.loc 2 170 0
 690 00bc C7442428 		movl	$0, 40(%rsp)
 690      00000000 
 691              	.LVL79:
 692              	.L140:
 190:fltk-1.3.4-1/src/fl_draw.cxx ****  175:fltk-1.3.4-1/FL/fl_draw.H ****  since those operating systems do not support complex line styl
 693              		.loc 2 190 0 discriminator 1
 694 00c4 85ED     		testl	%ebp, %ebp
 695 00c6 C7442418 		movl	$0, 24(%rsp)
 695      00000000 
 696 00ce 740C     		je	.L81
 697 00d0 488B7C24 		movq	56(%rsp), %rdi
 697      38
 698 00d5 8B7F08   		movl	8(%rdi), %edi
 699 00d8 897C2418 		movl	%edi, 24(%rsp)
 700              	.LVL80:
 701              	.L81:
 191:fltk-1.3.4-1/src/fl_draw.cxx ****  176:fltk-1.3.4-1/FL/fl_draw.H ****  */
 192:fltk-1.3.4-1/src/fl_draw.cxx ****  177:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line_style(int style, int width=0, char* dashes=
 193:fltk-1.3.4-1/src/fl_draw.cxx ****  178:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 194:fltk-1.3.4-1/src/fl_draw.cxx ****  179:fltk-1.3.4-1/FL/fl_draw.H ****   FL_SOLID	= 0,		///< line style: <tt>___________</tt>
 195:fltk-1.3.4-1/src/fl_draw.cxx ****  180:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASH	= 1,		///< line style: <tt>_ _ _ _ _ _</tt>
 702              		.loc 2 195 0 discriminator 6
 703 00dc 4D85ED   		testq	%r13, %r13
 704 00df 0F841309 		je	.L82
 704      0000
 705 00e5 8B7C2420 		movl	32(%rsp), %edi
 706 00e9 660FEFD2 		pxor	%xmm2, %xmm2
 707 00ed 8B6C2404 		movl	4(%rsp), %ebp
 708              		.loc 2 195 0 is_stmt 0
 709 00f1 31DB     		xorl	%ebx, %ebx
 710 00f3 4531F6   		xorl	%r14d, %r14d
 711 00f6 29C7     		subl	%eax, %edi
 712 00f8 89F8     		movl	%edi, %eax
 713 00fa 2B442418 		subl	24(%rsp), %eax
 714 00fe 81E58000 		andl	$128, %ebp
 714      0000
 715 0104 F20F2AD0 		cvtsi2sd	%eax, %xmm2
 716 0108 4C89E8   		movq	%r13, %rax
 717 010b F20F1154 		movsd	%xmm2, 8(%rsp)
 717      2408
 718              	.LVL81:
 719              		.p2align 4,,10
 720 0111 0F1F8000 		.p2align 3
 720      000000
 721              	.L83:
 196:fltk-1.3.4-1/src/fl_draw.cxx ****  181:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DOT	= 2,		///< line style: <tt>. . . . . .</tt>
 197:fltk-1.3.4-1/src/fl_draw.cxx ****  182:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOT	= 3,		///< line style: <tt>_ . _ . _ .</tt>
 198:fltk-1.3.4-1/src/fl_draw.cxx ****  183:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOTDOT	= 4,		///< line style: <tt>_ . . _ . .</tt>
 722              		.loc 2 198 0 is_stmt 1 discriminator 1
 723 0118 4883EC08 		subq	$8, %rsp
 724              		.cfi_def_cfa_offset 728
 725 011c 31D2     		xorl	%edx, %edx
 726 011e 4189E9   		movl	%ebp, %r9d
 727 0121 4157     		pushq	%r15
 728              		.cfi_def_cfa_offset 736
 729 0123 4889C7   		movq	%rax, %rdi
 730 0126 F20F1044 		movsd	24(%rsp), %xmm0
 730      2418
 731 012c 4C8D8424 		leaq	136(%rsp), %r8
 731      88000000 
 732 0134 488D4C24 		leaq	124(%rsp), %rcx
 732      7C
 733 0139 488DB424 		leaq	128(%rsp), %rsi
 733      80000000 
 734 0141 E8000000 		call	_ZL12expand_text_PKcRPcidRiRdii
 734      00
 735              	.LVL82:
 199:fltk-1.3.4-1/src/fl_draw.cxx ****  184:fltk-1.3.4-1/FL/fl_draw.H **** 
 736              		.loc 2 199 0 discriminator 1
 737 0146 660FEFC0 		pxor	%xmm0, %xmm0
 738 014a F20F108C 		movsd	136(%rsp), %xmm1
 738      24880000 
 738      00
 739 0153 415C     		popq	%r12
 740              		.cfi_def_cfa_offset 728
 741 0155 F20F2AC3 		cvtsi2sd	%ebx, %xmm0
 742 0159 5A       		popq	%rdx
 743              		.cfi_def_cfa_offset 720
 744 015a 660F2EC8 		ucomisd	%xmm0, %xmm1
 745 015e 7604     		jbe	.L84
 746 0160 F20F2CD9 		cvttsd2si	%xmm1, %ebx
 747              	.LVL83:
 748              	.L84:
 200:fltk-1.3.4-1/src/fl_draw.cxx ****  185:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_FLAT	= 0x100,	///< cap style: end is flat
 201:fltk-1.3.4-1/src/fl_draw.cxx ****  186:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_ROUND	= 0x200,	///< cap style: end is round
 749              		.loc 2 201 0
 750 0164 0FB610   		movzbl	(%rax), %edx
 200:fltk-1.3.4-1/src/fl_draw.cxx ****  185:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_FLAT	= 0x100,	///< cap style: end is flat
 751              		.loc 2 200 0
 752 0167 4183C601 		addl	$1, %r14d
 753              	.LVL84:
 754              		.loc 2 201 0
 755 016b 84D2     		testb	%dl, %dl
 756 016d 7410     		je	.L86
 757              		.loc 2 201 0 is_stmt 0 discriminator 1
 758 016f 80FA40   		cmpb	$64, %dl
 759 0172 75A4     		jne	.L83
 760              		.loc 2 201 0 discriminator 2
 761 0174 80780140 		cmpb	$64, 1(%rax)
 762 0178 749E     		je	.L83
 763 017a 4585FF   		testl	%r15d, %r15d
 764 017d 7499     		je	.L83
 765              	.L86:
 202:fltk-1.3.4-1/src/fl_draw.cxx ****  187:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_SQUARE	= 0x300,	///< cap style: end wraps end point
 203:fltk-1.3.4-1/src/fl_draw.cxx ****  188:fltk-1.3.4-1/FL/fl_draw.H **** 
 204:fltk-1.3.4-1/src/fl_draw.cxx ****  189:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_MITER	= 0x1000,	///< join style: line join extends to
 205:fltk-1.3.4-1/src/fl_draw.cxx ****  190:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_ROUND	= 0x2000,	///< join style: line join is rounded
 206:fltk-1.3.4-1/src/fl_draw.cxx ****  191:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_BEVEL	= 0x3000	///< join style: line join is tidied
 766              		.loc 2 206 0 is_stmt 1
 767 017f 8B442434 		movl	52(%rsp), %eax
 768              	.LVL85:
 769 0183 85C0     		testl	%eax, %eax
 770 0185 0F851D04 		jne	.L147
 770      0000
 771 018b C7442428 		movl	$0, 40(%rsp)
 771      00000000 
 772 0193 C7442424 		movl	$0, 36(%rsp)
 772      00000000 
 773              	.LVL86:
 774              	.L89:
 775              	.LBB174:
 776              	.LBB175:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 777              		.loc 1 527 0
 778 019b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 778      000000
 779 01a2 488B07   		movq	(%rdi), %rax
 780 01a5 FF90D001 		call	*464(%rax)
 780      0000
 781              	.LVL87:
 782              	.LBE175:
 783              	.LBE174:
 784              	.LBB177:
 785              	.LBB178:
 786 01ab 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 786      000000
 787              	.LBE178:
 788              	.LBE177:
 789              	.LBB181:
 790              	.LBB176:
 791 01b2 89442414 		movl	%eax, 20(%rsp)
 792              	.LVL88:
 793              	.LBE176:
 794              	.LBE181:
 795              	.LBB182:
 796              	.LBB179:
 797 01b6 488B07   		movq	(%rdi), %rax
 798              	.LVL89:
 799 01b9 FF90D001 		call	*464(%rax)
 799      0000
 800              	.LVL90:
 801              	.LBE179:
 802              	.LBE182:
 207:fltk-1.3.4-1/src/fl_draw.cxx ****  192:fltk-1.3.4-1/FL/fl_draw.H **** };
 208:fltk-1.3.4-1/src/fl_draw.cxx ****  193:fltk-1.3.4-1/FL/fl_draw.H **** 
 209:fltk-1.3.4-1/src/fl_draw.cxx ****  194:fltk-1.3.4-1/FL/fl_draw.H **** // rectangles tweaked to exactly fill the pixel rectangle:
 210:fltk-1.3.4-1/src/fl_draw.cxx ****  195:fltk-1.3.4-1/FL/fl_draw.H **** 
 211:fltk-1.3.4-1/src/fl_draw.cxx ****  196:fltk-1.3.4-1/FL/fl_draw.H **** /** 
 212:fltk-1.3.4-1/src/fl_draw.cxx ****  197:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a 1-pixel border \e inside the given bounding box.
 213:fltk-1.3.4-1/src/fl_draw.cxx ****  198:fltk-1.3.4-1/FL/fl_draw.H ****  This function is meant for quick drawing of simple boxes. The 
 214:fltk-1.3.4-1/src/fl_draw.cxx ****  199:fltk-1.3.4-1/FL/fl_draw.H ****  undefined for line widths that are not 1.
 215:fltk-1.3.4-1/src/fl_draw.cxx ****  200:fltk-1.3.4-1/FL/fl_draw.H ****  */
 216:fltk-1.3.4-1/src/fl_draw.cxx ****  201:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h) { fl_graphics_d
 217:fltk-1.3.4-1/src/fl_draw.cxx ****  202:fltk-1.3.4-1/FL/fl_draw.H **** 
 218:fltk-1.3.4-1/src/fl_draw.cxx ****  203:fltk-1.3.4-1/FL/fl_draw.H **** /** Draws with passed color a 1-pixel border \e inside the give
 219:fltk-1.3.4-1/src/fl_draw.cxx ****  204:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h, Fl_Color c) {fl
 803              		.loc 2 219 0
 804 01bf 31D2     		xorl	%edx, %edx
 805 01c1 807C244B 		cmpb	$0, 75(%rsp)
 805      00
 806              	.LBB183:
 807              	.LBB180:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 808              		.loc 1 527 0
 809 01c6 89442408 		movl	%eax, 8(%rsp)
 810              	.LVL91:
 811              	.LBE180:
 812              	.LBE183:
 813              		.loc 2 219 0
 814 01ca 7408     		je	.L91
 815 01cc 488B4424 		movq	56(%rsp), %rax
 815      38
 816 01d1 8B500C   		movl	12(%rax), %edx
 817              	.LVL92:
 818              	.L91:
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  205:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with current color a rectangle that exactly fills th
 221:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 222:fltk-1.3.4-1/src/fl_draw.cxx ****  207:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the
 223:fltk-1.3.4-1/src/fl_draw.cxx ****  208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {f
 224:fltk-1.3.4-1/src/fl_draw.cxx ****  209:fltk-1.3.4-1/FL/fl_draw.H **** 
 819              		.loc 2 224 0 discriminator 4
 820 01d4 8B442404 		movl	4(%rsp), %eax
 821 01d8 83E002   		andl	$2, %eax
 822 01db 89442454 		movl	%eax, 84(%rsp)
 823 01df 0F84EB02 		je	.L92
 823      0000
 824              		.loc 2 224 0 is_stmt 0 discriminator 1
 825 01e5 418D46FF 		leal	-1(%r14), %eax
 826 01e9 8B6C2450 		movl	80(%rsp), %ebp
 827 01ed 036C244C 		addl	76(%rsp), %ebp
 828 01f1 0FAF4424 		imull	8(%rsp), %eax
 828      08
 829 01f6 29C5     		subl	%eax, %ebp
 830 01f8 29D5     		subl	%edx, %ebp
 831              	.LVL93:
 832              	.L93:
 225:fltk-1.3.4-1/src/fl_draw.cxx ****  210:fltk-1.3.4-1/FL/fl_draw.H **** /**
 226:fltk-1.3.4-1/src/fl_draw.cxx ****  211:fltk-1.3.4-1/FL/fl_draw.H ****   Colors a rectangle with "exactly" the passed <tt>r,g,b</tt> c
 227:fltk-1.3.4-1/src/fl_draw.cxx ****  212:fltk-1.3.4-1/FL/fl_draw.H ****   On screens with less than 24 bits of color this is done by dr
 228:fltk-1.3.4-1/src/fl_draw.cxx ****  213:fltk-1.3.4-1/FL/fl_draw.H ****   solid-colored block using fl_draw_image() so that the correct
 229:fltk-1.3.4-1/src/fl_draw.cxx ****  214:fltk-1.3.4-1/FL/fl_draw.H ****   shade is produced.
 833              		.loc 2 229 0 is_stmt 1
 834 01fa 807C244B 		cmpb	$0, 75(%rsp)
 834      00
 835 01ff 0F84E902 		je	.L95
 835      0000
 836              	.L222:
 837              		.loc 2 229 0 is_stmt 0 discriminator 1
 838 0205 8B442404 		movl	4(%rsp), %eax
 839 0209 4189C4   		movl	%eax, %r12d
 840 020c 4183E420 		andl	$32, %r12d
 841 0210 0F850A04 		jne	.L96
 841      0000
 842 0216 488B7C24 		movq	56(%rsp), %rdi
 842      38
 843 021b 8B4F08   		movl	8(%rdi), %ecx
 844              	.LVL94:
 845 021e 85C9     		testl	%ecx, %ecx
 846 0220 440F49E1 		cmovns	%ecx, %r12d
 847              	.LVL95:
 230:fltk-1.3.4-1/src/fl_draw.cxx ****  215:fltk-1.3.4-1/FL/fl_draw.H ****   */
 231:fltk-1.3.4-1/src/fl_draw.cxx ****  216:fltk-1.3.4-1/FL/fl_draw.H **** /* note: doxygen comment here to avoid triplication in os-speci
 232:fltk-1.3.4-1/src/fl_draw.cxx ****  217:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_rectf(int x, int y, int w, int h, uchar r, uc
 848              		.loc 2 232 0 is_stmt 1
 849 0224 A804     		testb	$4, %al
 850 0226 0F851907 		jne	.L217
 850      0000
 233:fltk-1.3.4-1/src/fl_draw.cxx ****  218:fltk-1.3.4-1/FL/fl_draw.H **** 
 851              		.loc 2 233 0
 852 022c F6442404 		testb	$8, 4(%rsp)
 852      08
 853 0231 0F842009 		je	.L100
 853      0000
 854              	.LVL96:
 855              		.loc 2 233 0 is_stmt 0 discriminator 1
 856 0237 8B742420 		movl	32(%rsp), %esi
 857 023b 0374241C 		addl	28(%rsp), %esi
 858 023f 29CE     		subl	%ecx, %esi
 859 0241 2B742428 		subl	40(%rsp), %esi
 860              	.LVL97:
 861              	.L101:
 862              	.LBB184:
 863              	.LBB185:
 864              		.file 3 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 865              		.loc 3 180 0 is_stmt 1
 866 0245 4883EC08 		subq	$8, %rsp
 867              		.cfi_def_cfa_offset 728
 868 0249 89EA     		movl	%ebp, %edx
 869              	.LVL98:
 870 024b 2B542410 		subl	16(%rsp), %edx
 871              	.LVL99:
 872 024f 488B7C24 		movq	64(%rsp), %rdi
 872      40
 873 0254 4531C9   		xorl	%r9d, %r9d
 874 0257 488B07   		movq	(%rdi), %rax
 875 025a 6A00     		pushq	$0
 876              		.cfi_def_cfa_offset 736
 877 025c 448B470C 		movl	12(%rdi), %r8d
 878 0260 48897C24 		movq	%rdi, 72(%rsp)
 878      48
 879              	.LVL100:
 880 0265 FF5038   		call	*56(%rax)
 881              	.LVL101:
 882 0268 488B7C24 		movq	72(%rsp), %rdi
 882      48
 883              	.LBE185:
 884              	.LBE184:
 885              	.LBB187:
 234:fltk-1.3.4-1/src/fl_draw.cxx ****  219:fltk-1.3.4-1/FL/fl_draw.H **** // line segments:
 235:fltk-1.3.4-1/src/fl_draw.cxx ****  220:fltk-1.3.4-1/FL/fl_draw.H **** /**
 236:fltk-1.3.4-1/src/fl_draw.cxx ****  221:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1)
 237:fltk-1.3.4-1/src/fl_draw.cxx ****  222:fltk-1.3.4-1/FL/fl_draw.H ****  */
 238:fltk-1.3.4-1/src/fl_draw.cxx ****  223:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1) {fl_graphics_
 239:fltk-1.3.4-1/src/fl_draw.cxx ****  224:fltk-1.3.4-1/FL/fl_draw.H **** /**
 240:fltk-1.3.4-1/src/fl_draw.cxx ****  225:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1) and another from (x1,y1) to
 241:fltk-1.3.4-1/src/fl_draw.cxx ****  226:fltk-1.3.4-1/FL/fl_draw.H ****  */
 886              		.loc 2 241 0
 887 026d 5A       		popq	%rdx
 888              		.cfi_def_cfa_offset 728
 889 026e 59       		popq	%rcx
 890              		.cfi_def_cfa_offset 720
 891 026f 448B470C 		movl	12(%rdi), %r8d
 892              	.LVL102:
 893              	.LBE187:
 237:fltk-1.3.4-1/src/fl_draw.cxx ****  223:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1) {fl_graphics_
 894              		.loc 2 237 0
 895 0273 4401C5   		addl	%r8d, %ebp
 896              	.LVL103:
 897              	.LBB208:
 898              		.loc 2 241 0
 899 0276 807C2410 		cmpb	$0, 16(%rsp)
 899      00
 900 027b 0F857C09 		jne	.L144
 900      0000
 901              	.L214:
 902              	.LBE208:
 903              	.LBB209:
 242:fltk-1.3.4-1/src/fl_draw.cxx ****  227:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1, int x2, int y
 243:fltk-1.3.4-1/src/fl_draw.cxx ****  228:fltk-1.3.4-1/FL/fl_draw.H **** 
 244:fltk-1.3.4-1/src/fl_draw.cxx ****  229:fltk-1.3.4-1/FL/fl_draw.H **** // closed line segments:
 245:fltk-1.3.4-1/src/fl_draw.cxx ****  230:fltk-1.3.4-1/FL/fl_draw.H **** /**
 246:fltk-1.3.4-1/src/fl_draw.cxx ****  231:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 3-sided polygon with lines
 247:fltk-1.3.4-1/src/fl_draw.cxx ****  232:fltk-1.3.4-1/FL/fl_draw.H ****  */
 248:fltk-1.3.4-1/src/fl_draw.cxx ****  233:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y
 249:fltk-1.3.4-1/src/fl_draw.cxx ****  234:fltk-1.3.4-1/FL/fl_draw.H **** /**
 250:fltk-1.3.4-1/src/fl_draw.cxx ****  235:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 4-sided polygon with lines
 251:fltk-1.3.4-1/src/fl_draw.cxx ****  236:fltk-1.3.4-1/FL/fl_draw.H ****  */
 252:fltk-1.3.4-1/src/fl_draw.cxx ****  237:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y
 253:fltk-1.3.4-1/src/fl_draw.cxx ****  238:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->loop(x,y,x1,y1,x2,y2,x3,y3); }
 254:fltk-1.3.4-1/src/fl_draw.cxx ****  239:fltk-1.3.4-1/FL/fl_draw.H **** 
 255:fltk-1.3.4-1/src/fl_draw.cxx ****  240:fltk-1.3.4-1/FL/fl_draw.H **** // filled polygons
 256:fltk-1.3.4-1/src/fl_draw.cxx ****  241:fltk-1.3.4-1/FL/fl_draw.H **** /**
 257:fltk-1.3.4-1/src/fl_draw.cxx ****  242:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 3-sided polygon. The polygon must be convex.
 258:fltk-1.3.4-1/src/fl_draw.cxx ****  243:fltk-1.3.4-1/FL/fl_draw.H ****  */
 259:fltk-1.3.4-1/src/fl_draw.cxx ****  244:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_polygon(int x, int y, int x1, int y1, int x2, in
 260:fltk-1.3.4-1/src/fl_draw.cxx ****  245:fltk-1.3.4-1/FL/fl_draw.H **** /**
 261:fltk-1.3.4-1/src/fl_draw.cxx ****  246:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 4-sided polygon. The polygon must be convex.
 904              		.loc 2 261 0
 905 0281 4D85ED   		testq	%r13, %r13
 906              	.LBE209:
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 907              		.loc 2 220 0
 908 0284 C7442430 		movl	$0, 48(%rsp)
 908      00000000 
 909 028c C7442444 		movl	$0, 68(%rsp)
 909      00000000 
 910              	.LVL104:
 911              	.LBB218:
 912              		.loc 2 261 0
 913 0294 0F85B003 		jne	.L145
 913      0000
 914              	.LVL105:
 915 029a 660F1F44 		.p2align 4,,10
 915      0000
 916              		.p2align 3
 917              	.L112:
 918              	.LBE218:
 262:fltk-1.3.4-1/src/fl_draw.cxx ****  247:fltk-1.3.4-1/FL/fl_draw.H ****  */
 263:fltk-1.3.4-1/src/fl_draw.cxx ****  248:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_polygon(int x, int y, int x1, int y1, int x2, in
 264:fltk-1.3.4-1/src/fl_draw.cxx ****  249:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->polygon(x,y,x1,y1,x2,y2,x3,y3); }
 265:fltk-1.3.4-1/src/fl_draw.cxx ****  250:fltk-1.3.4-1/FL/fl_draw.H **** 
 266:fltk-1.3.4-1/src/fl_draw.cxx ****  251:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, horizontal segment first:
 267:fltk-1.3.4-1/src/fl_draw.cxx ****  252:fltk-1.3.4-1/FL/fl_draw.H **** /**
 268:fltk-1.3.4-1/src/fl_draw.cxx ****  253:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y)
 269:fltk-1.3.4-1/src/fl_draw.cxx ****  254:fltk-1.3.4-1/FL/fl_draw.H ****  */
 270:fltk-1.3.4-1/src/fl_draw.cxx ****  255:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1) {fl_graphics_driver
 271:fltk-1.3.4-1/src/fl_draw.cxx ****  256:fltk-1.3.4-1/FL/fl_draw.H **** /**
 272:fltk-1.3.4-1/src/fl_draw.cxx ****  257:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then vertical fr
 273:fltk-1.3.4-1/src/fl_draw.cxx ****  258:fltk-1.3.4-1/FL/fl_draw.H ****  */
 274:fltk-1.3.4-1/src/fl_draw.cxx ****  259:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1, int y2) {fl_graphic
 275:fltk-1.3.4-1/src/fl_draw.cxx ****  260:fltk-1.3.4-1/FL/fl_draw.H **** /**
 276:fltk-1.3.4-1/src/fl_draw.cxx ****  261:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then a vertical 
 277:fltk-1.3.4-1/src/fl_draw.cxx ****  262:fltk-1.3.4-1/FL/fl_draw.H ****  and then another horizontal from (x1,y2) to (x3,y2)
 278:fltk-1.3.4-1/src/fl_draw.cxx ****  263:fltk-1.3.4-1/FL/fl_draw.H ****  */
 279:fltk-1.3.4-1/src/fl_draw.cxx ****  264:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1, int y2, int x3) {fl
 280:fltk-1.3.4-1/src/fl_draw.cxx ****  265:fltk-1.3.4-1/FL/fl_draw.H **** 
 281:fltk-1.3.4-1/src/fl_draw.cxx ****  266:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, vertical segment first:
 282:fltk-1.3.4-1/src/fl_draw.cxx ****  267:fltk-1.3.4-1/FL/fl_draw.H **** /**
 283:fltk-1.3.4-1/src/fl_draw.cxx ****  268:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1)
 284:fltk-1.3.4-1/src/fl_draw.cxx ****  269:fltk-1.3.4-1/FL/fl_draw.H ****  */
 285:fltk-1.3.4-1/src/fl_draw.cxx ****  270:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1) {fl_graphics_driver
 919              		.loc 2 285 0
 920 02a0 807C244B 		cmpb	$0, 75(%rsp)
 920      00
 921 02a5 7455     		je	.L122
 922              	.LVL106:
 923              	.L146:
 924              		.loc 2 285 0 is_stmt 0 discriminator 1
 925 02a7 8B442404 		movl	4(%rsp), %eax
 926 02ab A820     		testb	$32, %al
 927 02ad 744D     		je	.L122
 928 02af 488B7C24 		movq	56(%rsp), %rdi
 928      38
 929 02b4 8B4F08   		movl	8(%rdi), %ecx
 930              	.LVL107:
 931 02b7 4139CC   		cmpl	%ecx, %r12d
 932 02ba 440F4CE1 		cmovl	%ecx, %r12d
 933              	.LVL108:
 286:fltk-1.3.4-1/src/fl_draw.cxx ****  271:fltk-1.3.4-1/FL/fl_draw.H **** /**
 287:fltk-1.3.4-1/src/fl_draw.cxx ****  272:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1), then a horizontal 
 288:fltk-1.3.4-1/src/fl_draw.cxx ****  273:fltk-1.3.4-1/FL/fl_draw.H ****  */
 934              		.loc 2 288 0 is_stmt 1
 935 02be A804     		testb	$4, %al
 936 02c0 0F853206 		jne	.L218
 936      0000
 289:fltk-1.3.4-1/src/fl_draw.cxx ****  274:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1, int x2) {fl_graphic
 937              		.loc 2 289 0
 938 02c6 F6442404 		testb	$8, 4(%rsp)
 938      08
 939 02cb 0F84E608 		je	.L125
 939      0000
 940              	.LVL109:
 941              		.loc 2 289 0 is_stmt 0 discriminator 1
 942 02d1 8B742420 		movl	32(%rsp), %esi
 943 02d5 0374241C 		addl	28(%rsp), %esi
 944 02d9 29CE     		subl	%ecx, %esi
 945 02db 2B742428 		subl	40(%rsp), %esi
 946              	.LVL110:
 947              	.L124:
 948              	.LBB219:
 949              	.LBB220:
 950              		.loc 3 180 0 is_stmt 1
 951 02df 4883EC08 		subq	$8, %rsp
 952              		.cfi_def_cfa_offset 728
 953 02e3 4531C9   		xorl	%r9d, %r9d
 954 02e6 89EA     		movl	%ebp, %edx
 955 02e8 488B7C24 		movq	64(%rsp), %rdi
 955      40
 956 02ed 488B07   		movq	(%rdi), %rax
 957 02f0 6A00     		pushq	$0
 958              		.cfi_def_cfa_offset 736
 959 02f2 448B470C 		movl	12(%rdi), %r8d
 960 02f6 FF5038   		call	*56(%rax)
 961              	.LVL111:
 962 02f9 415B     		popq	%r11
 963              		.cfi_def_cfa_offset 728
 964 02fb 5B       		popq	%rbx
 965              		.cfi_def_cfa_offset 720
 966              	.LVL112:
 967              	.L122:
 968              	.LBE220:
 969              	.LBE219:
 290:fltk-1.3.4-1/src/fl_draw.cxx ****  275:fltk-1.3.4-1/FL/fl_draw.H **** /**
 291:fltk-1.3.4-1/src/fl_draw.cxx ****  276:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1) then a horizontal f
 292:fltk-1.3.4-1/src/fl_draw.cxx ****  277:fltk-1.3.4-1/FL/fl_draw.H ****  to (x2,y1), then another vertical from (x2,y1) to (x2,y3)
 293:fltk-1.3.4-1/src/fl_draw.cxx ****  278:fltk-1.3.4-1/FL/fl_draw.H ****  */
 294:fltk-1.3.4-1/src/fl_draw.cxx ****  279:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1, int x2, int y3) {fl
 295:fltk-1.3.4-1/src/fl_draw.cxx ****  280:fltk-1.3.4-1/FL/fl_draw.H **** 
 296:fltk-1.3.4-1/src/fl_draw.cxx ****  281:fltk-1.3.4-1/FL/fl_draw.H **** // circular lines and pie slices (code in fl_arci.C):
 970              		.loc 2 296 0
 971 02fc 448B5424 		movl	36(%rsp), %r10d
 971      24
 972 0301 4585D2   		testl	%r10d, %r10d
 973 0304 745C     		je	.L126
 297:fltk-1.3.4-1/src/fl_draw.cxx ****  282:fltk-1.3.4-1/FL/fl_draw.H **** /**
 298:fltk-1.3.4-1/src/fl_draw.cxx ****  283:fltk-1.3.4-1/FL/fl_draw.H ****  Draw ellipse sections using integer coordinates.
 974              		.loc 2 298 0
 975 0306 8B442404 		movl	4(%rsp), %eax
 976 030a 8B7C241C 		movl	28(%rsp), %edi
 977 030e A804     		testb	$4, %al
 978 0310 89FE     		movl	%edi, %esi
 979 0312 7515     		jne	.L127
 299:fltk-1.3.4-1/src/fl_draw.cxx ****  284:fltk-1.3.4-1/FL/fl_draw.H ****  
 980              		.loc 2 299 0
 981 0314 A808     		testb	$8, %al
 982 0316 0F84E905 		je	.L128
 982      0000
 983              		.loc 2 299 0 is_stmt 0 discriminator 1
 984 031c 8B742420 		movl	32(%rsp), %esi
 985 0320 01FE     		addl	%edi, %esi
 986 0322 2B742434 		subl	52(%rsp), %esi
 987 0326 4429E6   		subl	%r12d, %esi
 988              	.LVL113:
 989              	.L127:
 300:fltk-1.3.4-1/src/fl_draw.cxx ****  285:fltk-1.3.4-1/FL/fl_draw.H ****  These functions match the rather limited circle drawing code p
 301:fltk-1.3.4-1/src/fl_draw.cxx ****  286:fltk-1.3.4-1/FL/fl_draw.H ****  and WIN32. The advantage over using fl_arc with floating point
 302:fltk-1.3.4-1/src/fl_draw.cxx ****  287:fltk-1.3.4-1/FL/fl_draw.H ****  is that they are faster because they often use the hardware, a
 990              		.loc 2 302 0 is_stmt 1
 991 0329 448B4C24 		movl	84(%rsp), %r9d
 991      54
 992 032e 4585C9   		testl	%r9d, %r9d
 993 0331 0F846905 		je	.L129
 993      0000
 994              		.loc 2 302 0 is_stmt 0 discriminator 1
 995 0337 8B542450 		movl	80(%rsp), %edx
 996 033b 0354244C 		addl	76(%rsp), %edx
 997 033f 2B542424 		subl	36(%rsp), %edx
 998              	.LVL114:
 999              	.L130:
 303:fltk-1.3.4-1/src/fl_draw.cxx ****  288:fltk-1.3.4-1/FL/fl_draw.H ****  much nicer small circles, since the small sizes are often hard
 304:fltk-1.3.4-1/src/fl_draw.cxx ****  289:fltk-1.3.4-1/FL/fl_draw.H ****  
 305:fltk-1.3.4-1/src/fl_draw.cxx ****  290:fltk-1.3.4-1/FL/fl_draw.H ****  If a complete circle is drawn it will fit inside the passed bo
 306:fltk-1.3.4-1/src/fl_draw.cxx ****  291:fltk-1.3.4-1/FL/fl_draw.H ****  The two angles are measured in degrees counter-clockwise from 
 1000              		.loc 2 306 0 is_stmt 1
 1001 0343 488B0500 		movq	fl_graphics_driver(%rip), %rax
 1001      000000
 1002 034a 8B4C2424 		movl	36(%rsp), %ecx
 1003 034e 488DBC24 		leaq	128(%rsp), %rdi
 1003      80000000 
 1004 0356 448B4810 		movl	16(%rax), %r9d
 1005 035a 4189C8   		movl	%ecx, %r8d
 1006 035d E8000000 		call	_Z14fl_draw_symbolPKciiiij
 1006      00
 1007              	.LVL115:
 1008              	.L126:
 307:fltk-1.3.4-1/src/fl_draw.cxx ****  292:fltk-1.3.4-1/FL/fl_draw.H ****  are the starting and ending angle of the arc, \p a2 must be gr
 308:fltk-1.3.4-1/src/fl_draw.cxx ****  293:fltk-1.3.4-1/FL/fl_draw.H ****  to \p a1.
 309:fltk-1.3.4-1/src/fl_draw.cxx ****  294:fltk-1.3.4-1/FL/fl_draw.H ****  
 1009              		.loc 2 309 0
 1010 0362 448B4424 		movl	40(%rsp), %r8d
 1010      28
 1011 0367 4585C0   		testl	%r8d, %r8d
 1012 036a 7456     		je	.L72
 310:fltk-1.3.4-1/src/fl_draw.cxx ****  295:fltk-1.3.4-1/FL/fl_draw.H ****  fl_arc() draws a series of lines to approximate the arc. Notic
 311:fltk-1.3.4-1/src/fl_draw.cxx ****  296:fltk-1.3.4-1/FL/fl_draw.H ****  integer version of fl_arc() has a different number of argument
 1013              		.loc 2 311 0
 1014 036c F6442404 		testb	$4, 4(%rsp)
 1014      04
 1015 0371 0F841105 		je	.L132
 1015      0000
 1016              		.loc 2 311 0 is_stmt 0 discriminator 1
 1017 0377 44036424 		addl	28(%rsp), %r12d
 1017      1C
 1018              	.LVL116:
 1019 037c 8B742424 		movl	36(%rsp), %esi
 1020 0380 4401E6   		addl	%r12d, %esi
 1021              	.LVL117:
 1022              	.L133:
 312:fltk-1.3.4-1/src/fl_draw.cxx ****  297:fltk-1.3.4-1/FL/fl_draw.H ****  double version fl_arc(double x, double y, double r, double sta
 313:fltk-1.3.4-1/src/fl_draw.cxx ****  298:fltk-1.3.4-1/FL/fl_draw.H ****  
 314:fltk-1.3.4-1/src/fl_draw.cxx ****  299:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h bounding box of complete circle
 315:fltk-1.3.4-1/src/fl_draw.cxx ****  300:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a1,a2 start and end angles of arc measured in degre
 1023              		.loc 2 315 0 is_stmt 1
 1024 0383 8B7C2454 		movl	84(%rsp), %edi
 1025 0387 85FF     		testl	%edi, %edi
 1026 0389 0F84D104 		je	.L135
 1026      0000
 1027              		.loc 2 315 0 is_stmt 0 discriminator 1
 1028 038f 8B442450 		movl	80(%rsp), %eax
 1029 0393 0344244C 		addl	76(%rsp), %eax
 1030 0397 2B442428 		subl	40(%rsp), %eax
 1031 039b 8944244C 		movl	%eax, 76(%rsp)
 1032              	.LVL118:
 1033              	.L136:
 316:fltk-1.3.4-1/src/fl_draw.cxx ****  301:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. \p a2 must be greater
 317:fltk-1.3.4-1/src/fl_draw.cxx ****  302:fltk-1.3.4-1/FL/fl_draw.H ****  than or equal to \p a1.
 318:fltk-1.3.4-1/src/fl_draw.cxx ****  303:fltk-1.3.4-1/FL/fl_draw.H ****  */
 319:fltk-1.3.4-1/src/fl_draw.cxx ****  304:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(int x, int y, int w, int h, double a1, doubl
 1034              		.loc 2 319 0 is_stmt 1
 1035 039f 488B0500 		movq	fl_graphics_driver(%rip), %rax
 1035      000000
 1036 03a6 8B4C2428 		movl	40(%rsp), %ecx
 1037 03aa 488DBC24 		leaq	383(%rsp), %rdi
 1037      7F010000 
 1038 03b2 8B54244C 		movl	76(%rsp), %edx
 1039 03b6 448B4810 		movl	16(%rax), %r9d
 1040 03ba 4189C8   		movl	%ecx, %r8d
 1041 03bd E8000000 		call	_Z14fl_draw_symbolPKciiiij
 1041      00
 1042              	.LVL119:
 1043              	.L72:
 320:fltk-1.3.4-1/src/fl_draw.cxx ****  305:fltk-1.3.4-1/FL/fl_draw.H **** /**
 321:fltk-1.3.4-1/src/fl_draw.cxx ****  306:fltk-1.3.4-1/FL/fl_draw.H ****  Draw filled ellipse sections using integer coordinates.
 1044              		.loc 2 321 0
 1045 03c2 488B8424 		movq	648(%rsp), %rax
 1045      88020000 
 1046 03ca 64483304 		xorq	%fs:40, %rax
 1046      25280000 
 1046      00
 1047 03d3 0F853508 		jne	.L219
 1047      0000
 1048 03d9 4881C498 		addq	$664, %rsp
 1048      020000
 1049              		.cfi_remember_state
 1050              		.cfi_def_cfa_offset 56
 1051 03e0 5B       		popq	%rbx
 1052              		.cfi_def_cfa_offset 48
 1053 03e1 5D       		popq	%rbp
 1054              		.cfi_def_cfa_offset 40
 1055 03e2 415C     		popq	%r12
 1056              		.cfi_def_cfa_offset 32
 1057 03e4 415D     		popq	%r13
 1058              		.cfi_def_cfa_offset 24
 1059 03e6 415E     		popq	%r14
 1060              		.cfi_def_cfa_offset 16
 1061 03e8 415F     		popq	%r15
 1062              		.cfi_def_cfa_offset 8
 1063 03ea C3       		ret
 1064              	.LVL120:
 1065 03eb 0F1F4400 		.p2align 4,,10
 1065      00
 1066              		.p2align 3
 1067              	.L73:
 1068              		.cfi_restore_state
 172:fltk-1.3.4-1/src/fl_draw.cxx ****  158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 1069              		.loc 2 172 0
 1070 03f0 4585FF   		testl	%r15d, %r15d
 166:fltk-1.3.4-1/src/fl_draw.cxx ****  152:fltk-1.3.4-1/FL/fl_draw.H ****  If you change this it is your responsibility to set it back to
 1071              		.loc 2 166 0
 1072 03f3 C6842480 		movb	$0, 128(%rsp)
 1072      00000000 
 1073              	.LVL121:
 169:fltk-1.3.4-1/src/fl_draw.cxx ****  155:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] style A bitmask which is a bitwise-OR of a line sty
 1074              		.loc 2 169 0
 1075 03fb C684247F 		movb	$0, 383(%rsp)
 1075      01000000 
 1076              	.LVL122:
 172:fltk-1.3.4-1/src/fl_draw.cxx ****  158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 1077              		.loc 2 172 0
 1078 0403 0F84E406 		je	.L220
 1078      0000
 1079 0409 8B6C2404 		movl	4(%rsp), %ebp
 1080 040d C6442410 		movb	$0, 16(%rsp)
 1080      00
 1081 0412 C644244B 		movb	$0, 75(%rsp)
 1081      00
 1082 0417 48C74424 		movq	$0, 56(%rsp)
 1082      38000000 
 1082      00
 1083 0420 81E50001 		andl	$256, %ebp
 1083      0000
 1084              	.LVL123:
 1085              	.L141:
 173:fltk-1.3.4-1/src/fl_draw.cxx ****  159:fltk-1.3.4-1/FL/fl_draw.H ****  fastest.
 1086              		.loc 2 173 0
 1087 0426 4D85ED   		testq	%r13, %r13
 1088 0429 746E     		je	.L149
 173:fltk-1.3.4-1/src/fl_draw.cxx ****  159:fltk-1.3.4-1/FL/fl_draw.H ****  fastest.
 1089              		.loc 2 173 0 is_stmt 0 discriminator 1
 1090 042b 410FB65D 		movzbl	0(%r13), %ebx
 1090      00
 1091 0430 C7442424 		movl	$0, 36(%rsp)
 1091      00000000 
 1092 0438 80FB40   		cmpb	$64, %bl
 1093 043b 0F840206 		je	.L221
 1093      0000
 1094              	.LVL124:
 1095              	.L76:
 1096              	.LBB221:
 1097              	.LBB222:
 1098              		.file 4 "/usr/include/string.h"
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
 1099              		.loc 4 253 0 is_stmt 1
 1100 0441 BE400000 		movl	$64, %esi
 1100      00
 1101 0446 4C89EF   		movq	%r13, %rdi
 1102 0449 E8000000 		call	strrchr
 1102      00
 1103              	.LVL125:
 1104              	.LBE222:
 1105              	.LBE221:
 183:fltk-1.3.4-1/src/fl_draw.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 1106              		.loc 2 183 0
 1107 044e 4885C0   		testq	%rax, %rax
 1108 0451 744E     		je	.L75
 183:fltk-1.3.4-1/src/fl_draw.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 1109              		.loc 2 183 0 is_stmt 0 discriminator 3
 1110 0453 498D5501 		leaq	1(%r13), %rdx
 1111 0457 4839D0   		cmpq	%rdx, %rax
 1112 045a 7645     		jbe	.L75
 183:fltk-1.3.4-1/src/fl_draw.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 1113              		.loc 2 183 0 discriminator 5
 1114 045c 8078FF40 		cmpb	$64, -1(%rax)
 1115 0460 743F     		je	.L75
 1116              	.LVL126:
 184:fltk-1.3.4-1/src/fl_draw.cxx ****  170:fltk-1.3.4-1/FL/fl_draw.H ****  \note      Because of how line styles are implemented on Win32
 1117              		.loc 2 184 0 is_stmt 1
 1118 0462 488DBC24 		leaq	383(%rsp), %rdi
 1118      7F010000 
 1119 046a BAFF0000 		movl	$255, %edx
 1119      00
 1120 046f 4889C6   		movq	%rax, %rsi
 1121 0472 E8000000 		call	fl_strlcpy
 1121      00
 1122              	.LVL127:
 1123 0477 8B7C2420 		movl	32(%rsp), %edi
 1124 047b 8B442450 		movl	80(%rsp), %eax
 1125 047f 8B4C2424 		movl	36(%rsp), %ecx
 1126 0483 39C7     		cmpl	%eax, %edi
 1127 0485 0F4EC7   		cmovle	%edi, %eax
 1128 0488 89C7     		movl	%eax, %edi
 1129 048a 89442428 		movl	%eax, 40(%rsp)
 1130 048e 8D0408   		leal	(%rax,%rcx), %eax
 1131 0491 09CF     		orl	%ecx, %edi
 1132 0493 897C2434 		movl	%edi, 52(%rsp)
 1133 0497 EB18     		jmp	.L137
 1134              	.LVL128:
 1135              	.L149:
 167:fltk-1.3.4-1/src/fl_draw.cxx ****  153:fltk-1.3.4-1/FL/fl_draw.H ****  using \c fl_line_style(0).
 1136              		.loc 2 167 0
 1137 0499 C7442424 		movl	$0, 36(%rsp)
 1137      00000000 
 1138              	.LVL129:
 1139              	.L75:
 1140 04a1 8B442424 		movl	36(%rsp), %eax
 170:fltk-1.3.4-1/src/fl_draw.cxx ****  156:fltk-1.3.4-1/FL/fl_draw.H ****  style, and a join style. If you don't specify a dash type you
 1141              		.loc 2 170 0
 1142 04a5 C7442428 		movl	$0, 40(%rsp)
 1142      00000000 
 1143 04ad 89442434 		movl	%eax, 52(%rsp)
 1144              	.L137:
 1145              	.LVL130:
 190:fltk-1.3.4-1/src/fl_draw.cxx ****  176:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1146              		.loc 2 190 0
 1147 04b1 48837C24 		cmpq	$0, 56(%rsp)
 1147      3800
 1148 04b7 0F8507FC 		jne	.L140
 1148      FFFF
 1149 04bd C7442418 		movl	$0, 24(%rsp)
 1149      00000000 
 1150 04c5 E912FCFF 		jmp	.L81
 1150      FF
 1151              	.LVL131:
 1152 04ca 660F1F44 		.p2align 4,,10
 1152      0000
 1153              		.p2align 3
 1154              	.L92:
 225:fltk-1.3.4-1/src/fl_draw.cxx ****  211:fltk-1.3.4-1/FL/fl_draw.H ****   Colors a rectangle with "exactly" the passed <tt>r,g,b</tt> c
 1155              		.loc 2 225 0
 1156 04d0 F6442404 		testb	$1, 4(%rsp)
 1156      01
 1157 04d5 0F841501 		je	.L94
 1157      0000
 225:fltk-1.3.4-1/src/fl_draw.cxx ****  211:fltk-1.3.4-1/FL/fl_draw.H ****   Colors a rectangle with "exactly" the passed <tt>r,g,b</tt> c
 1158              		.loc 2 225 0 is_stmt 0 discriminator 1
 1159 04db 8B6C244C 		movl	76(%rsp), %ebp
 1160 04df 036C2408 		addl	8(%rsp), %ebp
 1161              	.LVL132:
 229:fltk-1.3.4-1/src/fl_draw.cxx ****  215:fltk-1.3.4-1/FL/fl_draw.H ****   */
 1162              		.loc 2 229 0 is_stmt 1 discriminator 1
 1163 04e3 807C244B 		cmpb	$0, 75(%rsp)
 1163      00
 1164 04e8 0F8517FD 		jne	.L222
 1164      FFFF
 1165              	.L95:
 1166              	.LBB223:
 241:fltk-1.3.4-1/src/fl_draw.cxx ****  227:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1, int x2, int y
 1167              		.loc 2 241 0
 1168 04ee 807C2410 		cmpb	$0, 16(%rsp)
 1168      00
 1169 04f3 0F84B702 		je	.L102
 1169      0000
 1170              	.LBB188:
 242:fltk-1.3.4-1/src/fl_draw.cxx ****  228:fltk-1.3.4-1/FL/fl_draw.H **** 
 1171              		.loc 2 242 0
 1172 04f9 8B442404 		movl	4(%rsp), %eax
 1173 04fd A820     		testb	$32, %al
 1174 04ff 0F84A304 		je	.L223
 1174      0000
 1175              	.L103:
 1176 0505 488B7C24 		movq	56(%rsp), %rdi
 1176      38
 244:fltk-1.3.4-1/src/fl_draw.cxx ****  230:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1177              		.loc 2 244 0
 1178 050a F6442404 		testb	$4, 4(%rsp)
 1178      04
 1179 050f 8B4708   		movl	8(%rdi), %eax
 1180 0512 89C1     		movl	%eax, %ecx
 1181 0514 89442430 		movl	%eax, 48(%rsp)
 1182              	.LVL133:
 1183 0518 0F850704 		jne	.L224
 1183      0000
 245:fltk-1.3.4-1/src/fl_draw.cxx ****  231:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 3-sided polygon with lines
 1184              		.loc 2 245 0
 1185 051e F6442404 		testb	$8, 4(%rsp)
 1185      08
 1186 0523 0F844E06 		je	.L108
 1186      0000
 245:fltk-1.3.4-1/src/fl_draw.cxx ****  231:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 3-sided polygon with lines
 1187              		.loc 2 245 0 is_stmt 0 discriminator 1
 1188 0529 8B742420 		movl	32(%rsp), %esi
 1189 052d 0374241C 		addl	28(%rsp), %esi
 1190 0531 4531E4   		xorl	%r12d, %r12d
 1191 0534 2B742428 		subl	40(%rsp), %esi
 1192 0538 488B7C24 		movq	56(%rsp), %rdi
 1192      38
 1193 053d 8B442430 		movl	48(%rsp), %eax
 1194              	.LBE188:
 1195              	.LBE223:
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 1196              		.loc 2 220 0 is_stmt 1 discriminator 1
 1197 0541 C7442444 		movl	$0, 68(%rsp)
 1197      00000000 
 1198 0549 448B470C 		movl	12(%rdi), %r8d
 1199              	.LBB224:
 1200              	.LBB193:
 245:fltk-1.3.4-1/src/fl_draw.cxx ****  231:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 3-sided polygon with lines
 1201              		.loc 2 245 0 discriminator 1
 1202 054d 29C6     		subl	%eax, %esi
 1203 054f 89C1     		movl	%eax, %ecx
 1204 0551 83C601   		addl	$1, %esi
 1205              	.LVL134:
 1206              		.p2align 4,,10
 1207 0554 0F1F4000 		.p2align 3
 1208              	.L107:
 253:fltk-1.3.4-1/src/fl_draw.cxx ****  239:fltk-1.3.4-1/FL/fl_draw.H **** 
 1209              		.loc 2 253 0
 1210 0558 89EA     		movl	%ebp, %edx
 1211 055a 2B542408 		subl	8(%rsp), %edx
 1212              	.LVL135:
 254:fltk-1.3.4-1/src/fl_draw.cxx ****  240:fltk-1.3.4-1/FL/fl_draw.H **** // filled polygons
 1213              		.loc 2 254 0
 1214 055e F6442404 		testb	$1, 4(%rsp)
 1214      01
 1215 0563 751B     		jne	.L110
 1216              	.LBE193:
 1217              	.LBE224:
 212:fltk-1.3.4-1/src/fl_draw.cxx ****  198:fltk-1.3.4-1/FL/fl_draw.H ****  This function is meant for quick drawing of simple boxes. The 
 1218              		.loc 2 212 0
 1219 0565 8B442414 		movl	20(%rsp), %eax
 1220              	.LBB225:
 1221              	.LBB194:
 255:fltk-1.3.4-1/src/fl_draw.cxx ****  241:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1222              		.loc 2 255 0
 1223 0569 8B7C2454 		movl	84(%rsp), %edi
 1224              	.LBE194:
 1225              	.LBE225:
 212:fltk-1.3.4-1/src/fl_draw.cxx ****  198:fltk-1.3.4-1/FL/fl_draw.H ****  This function is meant for quick drawing of simple boxes. The 
 1226              		.loc 2 212 0
 1227 056d 410FAFC6 		imull	%r14d, %eax
 1228              	.LBB226:
 1229              	.LBB195:
 255:fltk-1.3.4-1/src/fl_draw.cxx ****  241:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1230              		.loc 2 255 0
 1231 0571 4429C0   		subl	%r8d, %eax
 1232 0574 85FF     		testl	%edi, %edi
 1233 0576 0F84B404 		je	.L111
 1233      0000
 1234              	.LVL136:
 255:fltk-1.3.4-1/src/fl_draw.cxx ****  241:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1235              		.loc 2 255 0 is_stmt 0 discriminator 1
 1236 057c 8D5402FF 		leal	-1(%rdx,%rax), %edx
 1237              	.LVL137:
 1238              	.L110:
 1239              	.LBB189:
 1240              	.LBB190:
 1241              		.loc 3 180 0 is_stmt 1
 1242 0580 4883EC08 		subq	$8, %rsp
 1243              		.cfi_def_cfa_offset 728
 1244 0584 4531C9   		xorl	%r9d, %r9d
 1245 0587 488B7C24 		movq	64(%rsp), %rdi
 1245      40
 1246 058c 488B07   		movq	(%rdi), %rax
 1247 058f 6A00     		pushq	$0
 1248              		.cfi_def_cfa_offset 736
 1249 0591 FF5038   		call	*56(%rax)
 1250              	.LVL138:
 1251              	.LBE190:
 1252              	.LBE189:
 1253              	.LBE195:
 1254              	.LBE226:
 1255              	.LBB227:
 261:fltk-1.3.4-1/src/fl_draw.cxx ****  247:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1256              		.loc 2 261 0
 1257 0594 4D85ED   		testq	%r13, %r13
 1258              	.LBE227:
 1259              	.LBB228:
 1260              	.LBB196:
 1261              	.LBB192:
 1262              	.LBB191:
 1263              		.loc 3 180 0
 1264 0597 59       		popq	%rcx
 1265              		.cfi_def_cfa_offset 728
 1266 0598 5E       		popq	%rsi
 1267              		.cfi_def_cfa_offset 720
 1268              	.LBE191:
 1269              	.LBE192:
 1270              	.LBE196:
 1271              	.LBE228:
 1272              	.LBB229:
 261:fltk-1.3.4-1/src/fl_draw.cxx ****  247:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1273              		.loc 2 261 0
 1274 0599 0F85AB00 		jne	.L145
 1274      0000
 1275 059f E9FCFCFF 		jmp	.L112
 1275      FF
 1276              	.LVL139:
 1277              		.p2align 4,,10
 1278 05a4 0F1F4000 		.p2align 3
 1279              	.L147:
 1280              	.LBE229:
 207:fltk-1.3.4-1/src/fl_draw.cxx ****  193:fltk-1.3.4-1/FL/fl_draw.H **** 
 1281              		.loc 2 207 0
 1282 05a8 8B6C2424 		movl	36(%rsp), %ebp
 1283 05ac 85ED     		testl	%ebp, %ebp
 1284 05ae 0F851C05 		jne	.L225
 1284      0000
 1285              	.L90:
 1286              	.LVL140:
 208:fltk-1.3.4-1/src/fl_draw.cxx ****  194:fltk-1.3.4-1/FL/fl_draw.H **** // rectangles tweaked to exactly fill the pixel rectangle:
 1287              		.loc 2 208 0
 1288 05b4 448B5C24 		movl	40(%rsp), %r11d
 1288      28
 1289 05b9 8B442424 		movl	36(%rsp), %eax
 1290 05bd 4585DB   		testl	%r11d, %r11d
 1291 05c0 89442434 		movl	%eax, 52(%rsp)
 1292 05c4 0F84D1FB 		je	.L89
 1292      FFFF
 1293              	.LBB230:
 1294              	.LBB231:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 1295              		.loc 1 527 0
 1296 05ca 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1296      000000
 1297 05d1 488B07   		movq	(%rdi), %rax
 1298 05d4 FF90D001 		call	*464(%rax)
 1298      0000
 1299              	.LVL141:
 1300              	.LBE231:
 1301              	.LBE230:
 208:fltk-1.3.4-1/src/fl_draw.cxx ****  194:fltk-1.3.4-1/FL/fl_draw.H **** // rectangles tweaked to exactly fill the pixel rectangle:
 1302              		.loc 2 208 0
 1303 05da 410FAFC6 		imull	%r14d, %eax
 1304 05de 89442428 		movl	%eax, 40(%rsp)
 1305              	.LVL142:
 1306 05e2 03442424 		addl	36(%rsp), %eax
 1307              	.LVL143:
 1308 05e6 89442434 		movl	%eax, 52(%rsp)
 1309 05ea E9ACFBFF 		jmp	.L89
 1309      FF
 1310              	.LVL144:
 1311 05ef 90       		.p2align 4,,10
 1312              		.p2align 3
 1313              	.L94:
 226:fltk-1.3.4-1/src/fl_draw.cxx ****  212:fltk-1.3.4-1/FL/fl_draw.H ****   On screens with less than 24 bits of color this is done by dr
 1314              		.loc 2 226 0
 1315 05f0 8B7C2408 		movl	8(%rsp), %edi
 1316 05f4 8B4C2450 		movl	80(%rsp), %ecx
 1317 05f8 89F8     		movl	%edi, %eax
 1318 05fa 410FAFC6 		imull	%r14d, %eax
 1319 05fe 29C1     		subl	%eax, %ecx
 1320 0600 89C8     		movl	%ecx, %eax
 1321 0602 29D0     		subl	%edx, %eax
 1322 0604 89C5     		movl	%eax, %ebp
 1323 0606 C1ED1F   		shrl	$31, %ebp
 1324 0609 01C5     		addl	%eax, %ebp
 1325 060b D1FD     		sarl	%ebp
 1326 060d 036C244C 		addl	76(%rsp), %ebp
 1327 0611 01FD     		addl	%edi, %ebp
 1328              	.LVL145:
 1329 0613 E9E2FBFF 		jmp	.L93
 1329      FF
 1330 0618 0F1F8400 		.p2align 4,,10
 1330      00000000 
 1331              		.p2align 3
 1332              	.L96:
 1333              	.LBB232:
 241:fltk-1.3.4-1/src/fl_draw.cxx ****  227:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1, int x2, int y
 1334              		.loc 2 241 0
 1335 0620 807C2410 		cmpb	$0, 16(%rsp)
 1335      00
 1336 0625 0F85DAFE 		jne	.L103
 1336      FFFF
 1337              	.LBE232:
 222:fltk-1.3.4-1/src/fl_draw.cxx ****  208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {f
 1338              		.loc 2 222 0
 1339 062b 4531E4   		xorl	%r12d, %r12d
 1340              	.LBB233:
 261:fltk-1.3.4-1/src/fl_draw.cxx ****  247:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1341              		.loc 2 261 0
 1342 062e 4D85ED   		testq	%r13, %r13
 1343 0631 0F8470FC 		je	.L146
 1343      FFFF
 1344              	.L162:
 1345              	.LBE233:
 222:fltk-1.3.4-1/src/fl_draw.cxx ****  208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {f
 1346              		.loc 2 222 0
 1347 0637 4531E4   		xorl	%r12d, %r12d
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 1348              		.loc 2 220 0
 1349 063a C7442444 		movl	$0, 68(%rsp)
 1349      00000000 
 1350 0642 C7442430 		movl	$0, 48(%rsp)
 1350      00000000 
 1351              	.LVL146:
 1352              	.L145:
 1353              	.LBB234:
 1354              	.LBB210:
 1355              	.LBB211:
 1356              	.LBB212:
 533:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 1357              		.loc 1 533 0
 1358 064a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1358      000000
 1359 0651 488B07   		movq	(%rdi), %rax
 1360 0654 FF90D801 		call	*472(%rax)
 1360      0000
 1361              	.LVL147:
 1362              	.LBE212:
 1363              	.LBE211:
 265:fltk-1.3.4-1/src/fl_draw.cxx ****  251:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, horizontal segment first:
 1364              		.loc 2 265 0
 1365 065a 8B542420 		movl	32(%rsp), %edx
 1366 065e 2B542434 		subl	52(%rsp), %edx
 1367 0662 2B542418 		subl	24(%rsp), %edx
 1368              	.LBB214:
 1369              	.LBB213:
 533:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 1370              		.loc 1 533 0
 1371 0666 89442410 		movl	%eax, 16(%rsp)
 1372              	.LVL148:
 1373 066a 8B442404 		movl	4(%rsp), %eax
 1374              	.LBE213:
 1375              	.LBE214:
 270:fltk-1.3.4-1/src/fl_draw.cxx ****  256:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1376              		.loc 2 270 0
 1377 066e 4489BC24 		movl	%r15d, 736(%rsp)
 1377      E0020000 
 1378 0676 44897424 		movl	%r14d, 24(%rsp)
 1378      18
 1379              	.LVL149:
 1380 067b 4C8B7C24 		movq	88(%rsp), %r15
 1380      58
 265:fltk-1.3.4-1/src/fl_draw.cxx ****  251:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, horizontal segment first:
 1381              		.loc 2 265 0
 1382 0680 8954242C 		movl	%edx, 44(%rsp)
 270:fltk-1.3.4-1/src/fl_draw.cxx ****  256:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1383              		.loc 2 270 0
 1384 0684 8B542424 		movl	36(%rsp), %edx
 1385 0688 83E004   		andl	$4, %eax
 1386 068b 0354241C 		addl	28(%rsp), %edx
 1387 068f 89442414 		movl	%eax, 20(%rsp)
 1388              	.LVL150:
 1389 0693 03542444 		addl	68(%rsp), %edx
 1390 0697 89542440 		movl	%edx, 64(%rsp)
 1391 069b EB61     		jmp	.L121
 1392              	.LVL151:
 1393 069d 0F1F00   		.p2align 4,,10
 1394              		.p2align 3
 1395              	.L228:
 270:fltk-1.3.4-1/src/fl_draw.cxx ****  256:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1396              		.loc 2 270 0 is_stmt 0 discriminator 1
 1397 06a0 8B5C2440 		movl	64(%rsp), %ebx
 1398              	.LVL152:
 1399              	.L117:
 1400 06a4 4189EE   		movl	%ebp, %r14d
 1401 06a7 442B7424 		subl	16(%rsp), %r14d
 1401      10
 274:fltk-1.3.4-1/src/fl_draw.cxx ****  260:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1402              		.loc 2 274 0 is_stmt 1
 1403 06ac 89DA     		movl	%ebx, %edx
 1404 06ae 8B74246C 		movl	108(%rsp), %esi
 1405 06b2 488B7C24 		movq	112(%rsp), %rdi
 1405      70
 1406 06b7 4489F1   		movl	%r14d, %ecx
 1407 06ba 41FFD7   		call	*%r15
 1408              	.LVL153:
 276:fltk-1.3.4-1/src/fl_draw.cxx ****  262:fltk-1.3.4-1/FL/fl_draw.H ****  and then another horizontal from (x1,y2) to (x3,y2)
 1409              		.loc 2 276 0
 1410 06bd 488B1500 		movq	_ZL12underline_at(%rip), %rdx
 1410      000000
 1411 06c4 4885D2   		testq	%rdx, %rdx
 1412 06c7 741B     		je	.L119
 276:fltk-1.3.4-1/src/fl_draw.cxx ****  262:fltk-1.3.4-1/FL/fl_draw.H ****  and then another horizontal from (x1,y2) to (x3,y2)
 1413              		.loc 2 276 0 is_stmt 0 discriminator 1
 1414 06c9 488B7424 		movq	112(%rsp), %rsi
 1414      70
 1415 06ce 4839F2   		cmpq	%rsi, %rdx
 1416 06d1 7211     		jb	.L119
 276:fltk-1.3.4-1/src/fl_draw.cxx ****  262:fltk-1.3.4-1/FL/fl_draw.H ****  and then another horizontal from (x1,y2) to (x3,y2)
 1417              		.loc 2 276 0 discriminator 2
 1418 06d3 48634C24 		movslq	108(%rsp), %rcx
 1418      6C
 1419 06d8 4801F1   		addq	%rsi, %rcx
 1420 06db 4839CA   		cmpq	%rcx, %rdx
 1421 06de 0F824C01 		jb	.L226
 1421      0000
 1422              	.L119:
 279:fltk-1.3.4-1/src/fl_draw.cxx ****  265:fltk-1.3.4-1/FL/fl_draw.H **** 
 1423              		.loc 2 279 0 is_stmt 1
 1424 06e4 410FB655 		movzbl	0(%r13), %edx
 1424      00
 1425 06e9 84D2     		testb	%dl, %dl
 1426 06eb 0F84AFFB 		je	.L112
 1426      FFFF
 279:fltk-1.3.4-1/src/fl_draw.cxx ****  265:fltk-1.3.4-1/FL/fl_draw.H **** 
 1427              		.loc 2 279 0 is_stmt 0 discriminator 1
 1428 06f1 80FA40   		cmpb	$64, %dl
 1429 06f4 0F84DE00 		je	.L227
 1429      0000
 1430              	.L120:
 1431              	.LVL154:
 263:fltk-1.3.4-1/src/fl_draw.cxx ****  249:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->polygon(x,y,x1,y1,x2,y2,x3,y3); }
 1432              		.loc 2 263 0 is_stmt 1
 1433 06fa 036C2408 		addl	8(%rsp), %ebp
 1434              	.LVL155:
 1435              	.L121:
 264:fltk-1.3.4-1/src/fl_draw.cxx ****  250:fltk-1.3.4-1/FL/fl_draw.H **** 
 1436              		.loc 2 264 0
 1437 06fe 837C2418 		cmpl	$1, 24(%rsp)
 1437      01
 1438 0703 0F8EBF00 		jle	.L158
 1438      0000
 265:fltk-1.3.4-1/src/fl_draw.cxx ****  251:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, horizontal segment first:
 1439              		.loc 2 265 0 discriminator 1
 1440 0709 660FEFC0 		pxor	%xmm0, %xmm0
 1441 070d 4883EC08 		subq	$8, %rsp
 1442              		.cfi_def_cfa_offset 728
 1443 0711 31D2     		xorl	%edx, %edx
 1444 0713 4C89EF   		movq	%r13, %rdi
 1445 0716 F20F2A44 		cvtsi2sd	52(%rsp), %xmm0
 1445      2434
 1446 071c 8B8424E8 		movl	744(%rsp), %eax
 1446      020000
 1447 0723 50       		pushq	%rax
 1448              		.cfi_def_cfa_offset 736
 1449 0724 448B4C24 		movl	20(%rsp), %r9d
 1449      14
 1450 0729 4C8D8424 		leaq	136(%rsp), %r8
 1450      88000000 
 1451 0731 488D4C24 		leaq	124(%rsp), %rcx
 1451      7C
 1452 0736 488DB424 		leaq	128(%rsp), %rsi
 1452      80000000 
 1453 073e 4181E180 		andl	$128, %r9d
 1453      000000
 1454 0745 E8000000 		call	_ZL12expand_text_PKcRPcidRiRdii
 1454      00
 1455              	.LVL156:
 1456 074a 4989C5   		movq	%rax, %r13
 1457              	.LVL157:
 1458 074d 58       		popq	%rax
 1459              		.cfi_def_cfa_offset 728
 1460              	.LVL158:
 1461 074e 5A       		popq	%rdx
 1462              		.cfi_def_cfa_offset 720
 1463              	.LVL159:
 1464              	.L113:
 268:fltk-1.3.4-1/src/fl_draw.cxx ****  254:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1465              		.loc 2 268 0
 1466 074f 660FEFC9 		pxor	%xmm1, %xmm1
 1467 0753 F20F1044 		movsd	120(%rsp), %xmm0
 1467      2478
 1468 0759 F2410F2A 		cvtsi2sd	%r12d, %xmm1
 1468      CC
 1469 075e 660F2EC1 		ucomisd	%xmm1, %xmm0
 1470 0762 7611     		jbe	.L114
 268:fltk-1.3.4-1/src/fl_draw.cxx ****  254:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1471              		.loc 2 268 0 is_stmt 0 discriminator 1
 1472 0764 F20F100D 		movsd	.LC5(%rip), %xmm1
 1472      00000000 
 1473 076c F20F58C8 		addsd	%xmm0, %xmm1
 1474 0770 F2440F2C 		cvttsd2si	%xmm1, %r12d
 1474      E1
 1475              	.LVL160:
 1476              	.L114:
 270:fltk-1.3.4-1/src/fl_draw.cxx ****  256:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1477              		.loc 2 270 0 is_stmt 1
 1478 0775 448B7424 		movl	20(%rsp), %r14d
 1478      14
 1479 077a 4585F6   		testl	%r14d, %r14d
 1480 077d 0F851DFF 		jne	.L228
 1480      FFFF
 271:fltk-1.3.4-1/src/fl_draw.cxx ****  257:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then vertical fr
 1481              		.loc 2 271 0
 1482 0783 F6442404 		testb	$8, 4(%rsp)
 1482      08
 1483 0788 7466     		je	.L118
 271:fltk-1.3.4-1/src/fl_draw.cxx ****  257:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then vertical fr
 1484              		.loc 2 271 0 is_stmt 0 discriminator 1
 1485 078a F20F5805 		addsd	.LC5(%rip), %xmm0
 1485      00000000 
 1486 0792 8B5C2420 		movl	32(%rsp), %ebx
 1487 0796 035C241C 		addl	28(%rsp), %ebx
 1488 079a F20F2CD0 		cvttsd2si	%xmm0, %edx
 1489 079e 29D3     		subl	%edx, %ebx
 1490 07a0 2B5C2428 		subl	40(%rsp), %ebx
 1491 07a4 2B5C2430 		subl	48(%rsp), %ebx
 1492              	.LVL161:
 1493 07a8 E9F7FEFF 		jmp	.L117
 1493      FF
 1494              	.LVL162:
 1495 07ad 0F1F00   		.p2align 4,,10
 1496              		.p2align 3
 1497              	.L102:
 1498              	.LBE210:
 1499              	.LBE234:
 222:fltk-1.3.4-1/src/fl_draw.cxx ****  208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {f
 1500              		.loc 2 222 0 is_stmt 1
 1501 07b0 4531E4   		xorl	%r12d, %r12d
 1502              	.LBB235:
 261:fltk-1.3.4-1/src/fl_draw.cxx ****  247:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1503              		.loc 2 261 0
 1504 07b3 4D85ED   		testq	%r13, %r13
 1505 07b6 0F857BFE 		jne	.L162
 1505      FFFF
 1506 07bc E93BFBFF 		jmp	.L122
 1506      FF
 1507              	.LVL163:
 1508              		.p2align 4,,10
 1509 07c1 0F1F8000 		.p2align 3
 1509      000000
 1510              	.L158:
 1511              	.LBB217:
 266:fltk-1.3.4-1/src/fl_draw.cxx ****  252:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1512              		.loc 2 266 0
 1513 07c8 41BD0000 		movl	$.LC4, %r13d
 1513      0000
 1514              	.LVL164:
 1515 07ce E97CFFFF 		jmp	.L113
 1515      FF
 1516              	.LVL165:
 1517              		.p2align 4,,10
 1518 07d3 0F1F4400 		.p2align 3
 1518      00
 1519              	.L227:
 279:fltk-1.3.4-1/src/fl_draw.cxx ****  265:fltk-1.3.4-1/FL/fl_draw.H **** 
 1520              		.loc 2 279 0 discriminator 2
 1521 07d8 41807D01 		cmpb	$64, 1(%r13)
 1521      40
 1522 07dd 0F8417FF 		je	.L120
 1522      FFFF
 1523 07e3 E9B8FAFF 		jmp	.L112
 1523      FF
 1524              	.LVL166:
 1525 07e8 0F1F8400 		.p2align 4,,10
 1525      00000000 
 1526              		.p2align 3
 1527              	.L118:
 272:fltk-1.3.4-1/src/fl_draw.cxx ****  258:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1528              		.loc 2 272 0
 1529 07f0 F20F5805 		addsd	.LC5(%rip), %xmm0
 1529      00000000 
 1530 07f8 8B442420 		movl	32(%rsp), %eax
 1531 07fc F20F2CD0 		cvttsd2si	%xmm0, %edx
 1532 0800 29D0     		subl	%edx, %eax
 1533 0802 89C2     		movl	%eax, %edx
 1534 0804 2B542434 		subl	52(%rsp), %edx
 1535 0808 8B442444 		movl	68(%rsp), %eax
 1536 080c 29C2     		subl	%eax, %edx
 1537 080e 2B542430 		subl	48(%rsp), %edx
 1538 0812 89D3     		movl	%edx, %ebx
 1539 0814 C1EB1F   		shrl	$31, %ebx
 1540 0817 01D3     		addl	%edx, %ebx
 1541 0819 D1FB     		sarl	%ebx
 1542 081b 035C241C 		addl	28(%rsp), %ebx
 1543 081f 035C2424 		addl	36(%rsp), %ebx
 1544 0823 01C3     		addl	%eax, %ebx
 1545              	.LVL167:
 1546 0825 E97AFEFF 		jmp	.L117
 1546      FF
 1547 082a 660F1F44 		.p2align 4,,10
 1547      0000
 1548              		.p2align 3
 1549              	.L226:
 1550              	.LVL168:
 1551              	.LBB215:
 1552              	.LBB216:
 539:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 1553              		.loc 1 539 0
 1554 0830 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1554      000000
 1555 0837 4829F2   		subq	%rsi, %rdx
 1556              	.LVL169:
 1557 083a 488B0F   		movq	(%rdi), %rcx
 1558 083d FF91B801 		call	*440(%rcx)
 1558      0000
 1559              	.LVL170:
 1560              	.LBE216:
 1561              	.LBE215:
 277:fltk-1.3.4-1/src/fl_draw.cxx ****  263:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1562              		.loc 2 277 0
 1563 0843 F20F2CD0 		cvttsd2si	%xmm0, %edx
 1564 0847 4489F1   		movl	%r14d, %ecx
 1565 084a BE010000 		movl	$1, %esi
 1565      00
 1566 084f BF000000 		movl	$.LC6, %edi
 1566      00
 1567 0854 01DA     		addl	%ebx, %edx
 1568 0856 41FFD7   		call	*%r15
 1569              	.LVL171:
 1570 0859 E986FEFF 		jmp	.L119
 1570      FF
 1571              	.LVL172:
 1572 085e 6690     		.p2align 4,,10
 1573              		.p2align 3
 1574              	.L135:
 1575              	.LBE217:
 1576              	.LBE235:
 316:fltk-1.3.4-1/src/fl_draw.cxx ****  302:fltk-1.3.4-1/FL/fl_draw.H ****  than or equal to \p a1.
 1577              		.loc 2 316 0
 1578 0860 F6442404 		testb	$1, 4(%rsp)
 1578      01
 1579 0865 0F8534FB 		jne	.L136
 1579      FFFF
 1580              	.LVL173:
 317:fltk-1.3.4-1/src/fl_draw.cxx ****  303:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1581              		.loc 2 317 0
 1582 086b 8B442450 		movl	80(%rsp), %eax
 1583 086f 2B442428 		subl	40(%rsp), %eax
 1584 0873 89C2     		movl	%eax, %edx
 1585 0875 C1EA1F   		shrl	$31, %edx
 1586 0878 01D0     		addl	%edx, %eax
 1587 087a D1F8     		sarl	%eax
 1588 087c 0144244C 		addl	%eax, 76(%rsp)
 1589              	.LVL174:
 1590 0880 E91AFBFF 		jmp	.L136
 1590      FF
 1591              	.LVL175:
 1592              		.p2align 4,,10
 1593 0885 0F1F00   		.p2align 3
 1594              	.L132:
 312:fltk-1.3.4-1/src/fl_draw.cxx ****  298:fltk-1.3.4-1/FL/fl_draw.H ****  
 1595              		.loc 2 312 0
 1596 0888 F6442404 		testb	$8, 4(%rsp)
 1596      08
 1597 088d 7441     		je	.L134
 312:fltk-1.3.4-1/src/fl_draw.cxx ****  298:fltk-1.3.4-1/FL/fl_draw.H ****  
 1598              		.loc 2 312 0 is_stmt 0 discriminator 1
 1599 088f 8B742420 		movl	32(%rsp), %esi
 1600 0893 0374241C 		addl	28(%rsp), %esi
 1601 0897 2B742428 		subl	40(%rsp), %esi
 1602              	.LVL176:
 1603 089b E9E3FAFF 		jmp	.L133
 1603      FF
 1604              	.LVL177:
 1605              		.p2align 4,,10
 1606              		.p2align 3
 1607              	.L129:
 303:fltk-1.3.4-1/src/fl_draw.cxx ****  289:fltk-1.3.4-1/FL/fl_draw.H ****  
 1608              		.loc 2 303 0 is_stmt 1
 1609 08a0 F6442404 		testb	$1, 4(%rsp)
 1609      01
 1610 08a5 8B7C244C 		movl	76(%rsp), %edi
 1611 08a9 89FA     		movl	%edi, %edx
 1612 08ab 0F8592FA 		jne	.L130
 1612      FFFF
 304:fltk-1.3.4-1/src/fl_draw.cxx ****  290:fltk-1.3.4-1/FL/fl_draw.H ****  If a complete circle is drawn it will fit inside the passed bo
 1613              		.loc 2 304 0
 1614 08b1 8B442450 		movl	80(%rsp), %eax
 1615 08b5 2B442424 		subl	36(%rsp), %eax
 1616 08b9 89C2     		movl	%eax, %edx
 1617 08bb C1EA1F   		shrl	$31, %edx
 1618 08be 01D0     		addl	%edx, %eax
 1619 08c0 D1F8     		sarl	%eax
 1620 08c2 8D1438   		leal	(%rax,%rdi), %edx
 1621              	.LVL178:
 1622 08c5 E979FAFF 		jmp	.L130
 1622      FF
 1623              	.LVL179:
 1624 08ca 660F1F44 		.p2align 4,,10
 1624      0000
 1625              		.p2align 3
 1626              	.L134:
 313:fltk-1.3.4-1/src/fl_draw.cxx ****  299:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h bounding box of complete circle
 1627              		.loc 2 313 0
 1628 08d0 8B442420 		movl	32(%rsp), %eax
 1629 08d4 4429E0   		subl	%r12d, %eax
 1630 08d7 2B442434 		subl	52(%rsp), %eax
 1631 08db 89C6     		movl	%eax, %esi
 1632 08dd C1EE1F   		shrl	$31, %esi
 1633 08e0 01C6     		addl	%eax, %esi
 1634 08e2 89F0     		movl	%esi, %eax
 1635 08e4 8B74241C 		movl	28(%rsp), %esi
 1636 08e8 D1F8     		sarl	%eax
 1637 08ea 01C6     		addl	%eax, %esi
 1638 08ec 4401E6   		addl	%r12d, %esi
 1639 08ef 03742424 		addl	36(%rsp), %esi
 1640              	.LVL180:
 1641 08f3 E98BFAFF 		jmp	.L133
 1641      FF
 1642              	.LVL181:
 1643              	.L218:
 288:fltk-1.3.4-1/src/fl_draw.cxx ****  274:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1, int x2) {fl_graphic
 1644              		.loc 2 288 0 discriminator 1
 1645 08f8 8B742424 		movl	36(%rsp), %esi
 1646 08fc 0374241C 		addl	28(%rsp), %esi
 1647              	.LVL182:
 1648 0900 E9DAF9FF 		jmp	.L124
 1648      FF
 1649              	.LVL183:
 1650              	.L128:
 300:fltk-1.3.4-1/src/fl_draw.cxx ****  286:fltk-1.3.4-1/FL/fl_draw.H ****  and WIN32. The advantage over using fl_arc with floating point
 1651              		.loc 2 300 0
 1652 0905 8B442420 		movl	32(%rsp), %eax
 1653 0909 8B7C241C 		movl	28(%rsp), %edi
 1654 090d 4429E0   		subl	%r12d, %eax
 1655 0910 2B442434 		subl	52(%rsp), %eax
 1656 0914 89C2     		movl	%eax, %edx
 1657 0916 C1EA1F   		shrl	$31, %edx
 1658 0919 01D0     		addl	%edx, %eax
 1659 091b D1F8     		sarl	%eax
 1660 091d 8D3438   		leal	(%rax,%rdi), %esi
 1661              	.LVL184:
 1662 0920 E904FAFF 		jmp	.L127
 1662      FF
 1663              	.LVL185:
 1664              	.L224:
 1665              	.LBB236:
 1666              	.LBB197:
 244:fltk-1.3.4-1/src/fl_draw.cxx ****  230:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1667              		.loc 2 244 0 discriminator 1
 1668 0925 8B442424 		movl	36(%rsp), %eax
 1669              	.LVL186:
 1670 0929 0344241C 		addl	28(%rsp), %eax
 1671 092d 4531E4   		xorl	%r12d, %r12d
 1672 0930 448B470C 		movl	12(%rdi), %r8d
 1673              	.LBE197:
 1674              	.LBE236:
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 1675              		.loc 2 220 0 discriminator 1
 1676 0934 C7442444 		movl	$0, 68(%rsp)
 1676      00000000 
 1677              	.LBB237:
 1678              	.LBB198:
 244:fltk-1.3.4-1/src/fl_draw.cxx ****  230:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1679              		.loc 2 244 0 discriminator 1
 1680 093c 8D740301 		leal	1(%rbx,%rax), %esi
 1681              	.LVL187:
 1682 0940 E913FCFF 		jmp	.L107
 1682      FF
 1683              	.LVL188:
 1684              	.L217:
 1685              	.LBE198:
 1686              	.LBE237:
 1687              	.LBB238:
 1688              	.LBB186:
 1689              		.loc 3 180 0 discriminator 1
 1690 0945 8B5C2424 		movl	36(%rsp), %ebx
 1691 0949 035C241C 		addl	28(%rsp), %ebx
 1692              	.LVL189:
 1693 094d 89EA     		movl	%ebp, %edx
 1694              	.LVL190:
 1695 094f 4883EC08 		subq	$8, %rsp
 1696              		.cfi_def_cfa_offset 728
 1697 0953 2B542410 		subl	16(%rsp), %edx
 1698              	.LVL191:
 1699 0957 488B07   		movq	(%rdi), %rax
 1700 095a 6A00     		pushq	$0
 1701              		.cfi_def_cfa_offset 736
 1702 095c 4531C9   		xorl	%r9d, %r9d
 1703 095f 448B470C 		movl	12(%rdi), %r8d
 1704 0963 48897C24 		movq	%rdi, 72(%rsp)
 1704      48
 1705 0968 89DE     		movl	%ebx, %esi
 1706 096a FF5038   		call	*56(%rax)
 1707              	.LVL192:
 1708 096d 488B7C24 		movq	72(%rsp), %rdi
 1708      48
 1709              	.LBE186:
 1710              	.LBE238:
 1711              	.LBB239:
 241:fltk-1.3.4-1/src/fl_draw.cxx ****  227:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1, int x2, int y
 1712              		.loc 2 241 0 discriminator 1
 1713 0972 4159     		popq	%r9
 1714              		.cfi_def_cfa_offset 728
 1715 0974 415A     		popq	%r10
 1716              		.cfi_def_cfa_offset 720
 1717 0976 448B470C 		movl	12(%rdi), %r8d
 1718              	.LVL193:
 1719              	.LBE239:
 237:fltk-1.3.4-1/src/fl_draw.cxx ****  223:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1) {fl_graphics_
 1720              		.loc 2 237 0 discriminator 1
 1721 097a 4401C5   		addl	%r8d, %ebp
 1722              	.LVL194:
 1723              	.LBB240:
 241:fltk-1.3.4-1/src/fl_draw.cxx ****  227:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1, int x2, int y
 1724              		.loc 2 241 0 discriminator 1
 1725 097d 807C2410 		cmpb	$0, 16(%rsp)
 1725      00
 1726 0982 0F84F9F8 		je	.L214
 1726      FFFF
 1727 0988 488B4424 		movq	56(%rsp), %rax
 1727      38
 1728 098d 8B4008   		movl	8(%rax), %eax
 1729 0990 89442444 		movl	%eax, 68(%rsp)
 1730              	.LVL195:
 1731              	.L104:
 1732              	.LBB199:
 249:fltk-1.3.4-1/src/fl_draw.cxx ****  235:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 4-sided polygon with lines
 1733              		.loc 2 249 0 discriminator 1
 1734 0994 8D73FF   		leal	-1(%rbx), %esi
 1735              	.LVL196:
 1736 0997 8B4C2444 		movl	68(%rsp), %ecx
 1737              	.LBE199:
 1738              	.LBE240:
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 1739              		.loc 2 220 0 discriminator 1
 1740 099b C7442430 		movl	$0, 48(%rsp)
 1740      00000000 
 1741              	.LBB241:
 1742              	.LBB200:
 1743 09a3 E9B0FBFF 		jmp	.L107
 1743      FF
 1744              	.LVL197:
 1745              	.L223:
 1746 09a8 488B7C24 		movq	56(%rsp), %rdi
 1746      38
 1747              	.LBE200:
 1748              	.LBE241:
 222:fltk-1.3.4-1/src/fl_draw.cxx ****  208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {f
 1749              		.loc 2 222 0
 1750 09ad 4531E4   		xorl	%r12d, %r12d
 1751              	.LBB242:
 1752              	.LBB201:
 249:fltk-1.3.4-1/src/fl_draw.cxx ****  235:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 4-sided polygon with lines
 1753              		.loc 2 249 0
 1754 09b0 A804     		testb	$4, %al
 1755 09b2 448B470C 		movl	12(%rdi), %r8d
 1756 09b6 8B7F08   		movl	8(%rdi), %edi
 1757 09b9 897C2444 		movl	%edi, 68(%rsp)
 1758              	.LVL198:
 1759 09bd 0F852A02 		jne	.L229
 1759      0000
 1760              	.LVL199:
 1761              	.L105:
 250:fltk-1.3.4-1/src/fl_draw.cxx ****  236:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1762              		.loc 2 250 0
 1763 09c3 F6442404 		testb	$8, 4(%rsp)
 1763      08
 1764 09c8 0F845901 		je	.L109
 1764      0000
 250:fltk-1.3.4-1/src/fl_draw.cxx ****  236:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1765              		.loc 2 250 0 is_stmt 0 discriminator 1
 1766 09ce 8B742420 		movl	32(%rsp), %esi
 1767 09d2 0374241C 		addl	28(%rsp), %esi
 1768 09d6 2B742428 		subl	40(%rsp), %esi
 1769 09da 8B442444 		movl	68(%rsp), %eax
 1770              	.LBE201:
 1771              	.LBE242:
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 1772              		.loc 2 220 0 is_stmt 1 discriminator 1
 1773 09de C7442430 		movl	$0, 48(%rsp)
 1773      00000000 
 1774              	.LBB243:
 1775              	.LBB202:
 1776 09e6 89C1     		movl	%eax, %ecx
 250:fltk-1.3.4-1/src/fl_draw.cxx ****  236:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1777              		.loc 2 250 0 discriminator 1
 1778 09e8 29DE     		subl	%ebx, %esi
 1779 09ea 29C6     		subl	%eax, %esi
 1780 09ec 83EE01   		subl	$1, %esi
 1781              	.LVL200:
 1782 09ef E964FBFF 		jmp	.L107
 1782      FF
 1783              	.LVL201:
 1784              		.p2align 4,,10
 1785 09f4 0F1F4000 		.p2align 3
 1786              	.L82:
 1787              	.LBE202:
 1788              	.LBE243:
 206:fltk-1.3.4-1/src/fl_draw.cxx ****  192:fltk-1.3.4-1/FL/fl_draw.H **** };
 1789              		.loc 2 206 0
 1790 09f8 8B742434 		movl	52(%rsp), %esi
 1791 09fc 85F6     		testl	%esi, %esi
 1792 09fe 751A     		jne	.L143
 192:fltk-1.3.4-1/src/fl_draw.cxx ****  178:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 1793              		.loc 2 192 0
 1794 0a00 31DB     		xorl	%ebx, %ebx
 204:fltk-1.3.4-1/src/fl_draw.cxx ****  190:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_ROUND	= 0x2000,	///< join style: line join is rounded
 1795              		.loc 2 204 0
 1796 0a02 4531F6   		xorl	%r14d, %r14d
 206:fltk-1.3.4-1/src/fl_draw.cxx ****  192:fltk-1.3.4-1/FL/fl_draw.H **** };
 1797              		.loc 2 206 0
 1798 0a05 C7442428 		movl	$0, 40(%rsp)
 1798      00000000 
 1799 0a0d C7442424 		movl	$0, 36(%rsp)
 1799      00000000 
 1800 0a15 E981F7FF 		jmp	.L89
 1800      FF
 1801              	.L143:
 1802 0a1a 8B442424 		movl	36(%rsp), %eax
 1803 0a1e 03442428 		addl	40(%rsp), %eax
 1804 0a22 31DB     		xorl	%ebx, %ebx
 1805 0a24 4531F6   		xorl	%r14d, %r14d
 1806 0a27 89442434 		movl	%eax, 52(%rsp)
 1807 0a2b E96BF7FF 		jmp	.L89
 1807      FF
 1808              	.LVL202:
 1809              	.L111:
 1810              	.LBB244:
 1811              	.LBB203:
 256:fltk-1.3.4-1/src/fl_draw.cxx ****  242:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 3-sided polygon. The polygon must be convex.
 1812              		.loc 2 256 0
 1813 0a30 83E801   		subl	$1, %eax
 1814 0a33 89C7     		movl	%eax, %edi
 1815 0a35 C1EF1F   		shrl	$31, %edi
 1816 0a38 01F8     		addl	%edi, %eax
 1817 0a3a D1F8     		sarl	%eax
 1818 0a3c 01C2     		addl	%eax, %edx
 1819              	.LVL203:
 1820 0a3e E93DFBFF 		jmp	.L110
 1820      FF
 1821              	.LVL204:
 1822              	.L221:
 1823              	.LBE203:
 1824              	.LBE244:
 173:fltk-1.3.4-1/src/fl_draw.cxx ****  159:fltk-1.3.4-1/FL/fl_draw.H ****  fastest.
 1825              		.loc 2 173 0 discriminator 2
 1826 0a43 41F64501 		testb	$-65, 1(%r13)
 1826      BF
 1827 0a48 0F84F3F9 		je	.L76
 1827      FFFF
 1828 0a4e E8000000 		call	__ctype_b_loc
 1828      00
 1829              	.LVL205:
 1830 0a53 488B08   		movq	(%rax), %rcx
 173:fltk-1.3.4-1/src/fl_draw.cxx ****  159:fltk-1.3.4-1/FL/fl_draw.H ****  fastest.
 1831              		.loc 2 173 0 is_stmt 0
 1832 0a56 488D8424 		leaq	128(%rsp), %rax
 1832      80000000 
 176:fltk-1.3.4-1/src/fl_draw.cxx ****  162:fltk-1.3.4-1/FL/fl_draw.H ****  different and nicer than 1.
 1833              		.loc 2 176 0 is_stmt 1
 1834 0a5e 488DB0FE 		leaq	254(%rax), %rsi
 1834      000000
 1835              		.p2align 4,,10
 1836 0a65 0F1F00   		.p2align 3
 1837              	.L78:
 1838              	.LVL206:
 1839              	.LBB245:
 1840              	.LBB246:
 1841              		.file 5 "/usr/include/ctype.h"
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
 189:/usr/include/ctype.h **** __isctype_f (punct)
 190:/usr/include/ctype.h **** __isctype_f (space)
 1842              		.loc 5 190 0 discriminator 1
 1843 0a68 480FBED3 		movsbq	%bl, %rdx
 1844 0a6c 488D1451 		leaq	(%rcx,%rdx,2), %rdx
 1845              	.LVL207:
 1846              	.LBE246:
 1847              	.LBE245:
 176:fltk-1.3.4-1/src/fl_draw.cxx ****  162:fltk-1.3.4-1/FL/fl_draw.H ****  different and nicer than 1.
 1848              		.loc 2 176 0 discriminator 1
 1849 0a70 66F70200 		testw	$8192, (%rdx)
 1849      20
 1850 0a75 0F856A01 		jne	.L152
 1850      0000
 1851 0a7b 4839F0   		cmpq	%rsi, %rax
 1852 0a7e 0F836101 		jnb	.L152
 1852      0000
 175:fltk-1.3.4-1/src/fl_draw.cxx ****  161:fltk-1.3.4-1/FL/fl_draw.H ****  system defined default, which on both X and Windows is somewha
 1853              		.loc 2 175 0
 1854 0a84 4883C001 		addq	$1, %rax
 1855              	.LVL208:
 1856 0a88 4983C501 		addq	$1, %r13
 1857              	.LVL209:
 1858 0a8c 8858FF   		movb	%bl, -1(%rax)
 176:fltk-1.3.4-1/src/fl_draw.cxx ****  162:fltk-1.3.4-1/FL/fl_draw.H ****  different and nicer than 1.
 1859              		.loc 2 176 0
 1860 0a8f 410FB65D 		movzbl	0(%r13), %ebx
 1860      00
 1861 0a94 84DB     		testb	%bl, %bl
 1862 0a96 75D0     		jne	.L78
 1863              	.L77:
 178:fltk-1.3.4-1/src/fl_draw.cxx ****  164:fltk-1.3.4-1/FL/fl_draw.H ****  The first location is how long to draw a solid portion, the ne
 1864              		.loc 2 178 0
 1865 0a98 C60000   		movb	$0, (%rax)
 179:fltk-1.3.4-1/src/fl_draw.cxx ****  165:fltk-1.3.4-1/FL/fl_draw.H ****  is how long to draw the gap, then the solid, etc. It is termin
 1866              		.loc 2 179 0
 1867 0a9b 0FB701   		movzwl	(%rcx), %eax
 1868              	.LVL210:
 1869 0a9e 8B7C2420 		movl	32(%rsp), %edi
 1870 0aa2 F6C420   		testb	$32, %ah
 1871 0aa5 8B442450 		movl	80(%rsp), %eax
 1872 0aa9 0F842801 		je	.L79
 1872      0000
 1873              	.LVL211:
 1874 0aaf 39C7     		cmpl	%eax, %edi
 1875 0ab1 0F4EC7   		cmovle	%edi, %eax
 183:fltk-1.3.4-1/src/fl_draw.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 1876              		.loc 2 183 0 discriminator 1
 1877 0ab4 4983C501 		addq	$1, %r13
 1878              	.LVL212:
 1879 0ab8 89442424 		movl	%eax, 36(%rsp)
 1880              	.LVL213:
 1881 0abc 0F857FF9 		jne	.L76
 1881      FFFF
 1882 0ac2 E9DAF9FF 		jmp	.L75
 1882      FF
 1883              	.LVL214:
 1884 0ac7 660F1F84 		.p2align 4,,10
 1884      00000000 
 1884      00
 1885              		.p2align 3
 1886              	.L225:
 1887              	.LBB248:
 1888              	.LBB249:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 1889              		.loc 1 527 0
 1890 0ad0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1890      000000
 1891 0ad7 488B07   		movq	(%rdi), %rax
 1892 0ada FF90D001 		call	*464(%rax)
 1892      0000
 1893              	.LVL215:
 1894              	.LBE249:
 1895              	.LBE248:
 207:fltk-1.3.4-1/src/fl_draw.cxx ****  193:fltk-1.3.4-1/FL/fl_draw.H **** 
 1896              		.loc 2 207 0
 1897 0ae0 410FAFC6 		imull	%r14d, %eax
 1898 0ae4 89442424 		movl	%eax, 36(%rsp)
 1899              	.LVL216:
 1900 0ae8 E9C7FAFF 		jmp	.L90
 1900      FF
 1901              	.LVL217:
 1902              	.L220:
 172:fltk-1.3.4-1/src/fl_draw.cxx ****  158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 1903              		.loc 2 172 0
 1904 0aed C7442434 		movl	$0, 52(%rsp)
 1904      00000000 
 1905 0af5 C6442410 		movb	$0, 16(%rsp)
 1905      00
 189:fltk-1.3.4-1/src/fl_draw.cxx ****  175:fltk-1.3.4-1/FL/fl_draw.H ****  since those operating systems do not support complex line styl
 1906              		.loc 2 189 0
 1907 0afa 31C0     		xorl	%eax, %eax
 172:fltk-1.3.4-1/src/fl_draw.cxx ****  158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 1908              		.loc 2 172 0
 1909 0afc C644244B 		movb	$0, 75(%rsp)
 1909      00
 167:fltk-1.3.4-1/src/fl_draw.cxx ****  153:fltk-1.3.4-1/FL/fl_draw.H ****  using \c fl_line_style(0).
 1910              		.loc 2 167 0
 1911 0b01 C7442424 		movl	$0, 36(%rsp)
 1911      00000000 
 170:fltk-1.3.4-1/src/fl_draw.cxx ****  156:fltk-1.3.4-1/FL/fl_draw.H ****  style, and a join style. If you don't specify a dash type you
 1912              		.loc 2 170 0
 1913 0b09 C7442428 		movl	$0, 40(%rsp)
 1913      00000000 
 172:fltk-1.3.4-1/src/fl_draw.cxx ****  158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 1914              		.loc 2 172 0
 1915 0b11 48C74424 		movq	$0, 56(%rsp)
 1915      38000000 
 1915      00
 190:fltk-1.3.4-1/src/fl_draw.cxx ****  176:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1916              		.loc 2 190 0
 1917 0b1a C7442418 		movl	$0, 24(%rsp)
 1917      00000000 
 1918 0b22 E9B5F5FF 		jmp	.L81
 1918      FF
 1919              	.LVL218:
 1920              	.L109:
 1921              	.LBB250:
 1922              	.LBB204:
 251:fltk-1.3.4-1/src/fl_draw.cxx ****  237:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y
 1923              		.loc 2 251 0
 1924 0b27 8B442420 		movl	32(%rsp), %eax
 1925 0b2b 8B7C2444 		movl	68(%rsp), %edi
 1926 0b2f 8B4C241C 		movl	28(%rsp), %ecx
 1927              	.LBE204:
 1928              	.LBE250:
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 1929              		.loc 2 220 0
 1930 0b33 C7442430 		movl	$0, 48(%rsp)
 1930      00000000 
 1931              	.LBB251:
 1932              	.LBB205:
 251:fltk-1.3.4-1/src/fl_draw.cxx ****  237:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y
 1933              		.loc 2 251 0
 1934 0b3b 29D8     		subl	%ebx, %eax
 1935 0b3d 2B442434 		subl	52(%rsp), %eax
 1936 0b41 29F8     		subl	%edi, %eax
 1937 0b43 89C2     		movl	%eax, %edx
 1938 0b45 C1EA1F   		shrl	$31, %edx
 1939 0b48 01D0     		addl	%edx, %eax
 1940 0b4a D1F8     		sarl	%eax
 1941 0b4c 8D7401FF 		leal	-1(%rcx,%rax), %esi
 1942              	.LVL219:
 1943 0b50 89F9     		movl	%edi, %ecx
 1944 0b52 E901FAFF 		jmp	.L107
 1944      FF
 1945              	.LVL220:
 1946              	.L100:
 1947              	.LBE205:
 1948              	.LBE251:
 234:fltk-1.3.4-1/src/fl_draw.cxx ****  220:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1949              		.loc 2 234 0
 1950 0b57 8B442420 		movl	32(%rsp), %eax
 1951 0b5b 29C8     		subl	%ecx, %eax
 1952 0b5d 2B442434 		subl	52(%rsp), %eax
 1953 0b61 89C6     		movl	%eax, %esi
 1954 0b63 C1EE1F   		shrl	$31, %esi
 1955 0b66 01C6     		addl	%eax, %esi
 1956 0b68 D1FE     		sarl	%esi
 1957 0b6a 0374241C 		addl	28(%rsp), %esi
 1958 0b6e 03742424 		addl	36(%rsp), %esi
 1959              	.LVL221:
 1960 0b72 E9CEF6FF 		jmp	.L101
 1960      FF
 1961              	.LVL222:
 1962              	.L108:
 1963              	.LBB252:
 1964              	.LBB206:
 246:fltk-1.3.4-1/src/fl_draw.cxx ****  232:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1965              		.loc 2 246 0
 1966 0b77 8B442420 		movl	32(%rsp), %eax
 1967              	.LVL223:
 1968 0b7b 8B7C2430 		movl	48(%rsp), %edi
 1969              	.LVL224:
 1970 0b7f 4531E4   		xorl	%r12d, %r12d
 1971              	.LBE206:
 1972              	.LBE252:
 220:fltk-1.3.4-1/src/fl_draw.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 1973              		.loc 2 220 0
 1974 0b82 C7442444 		movl	$0, 68(%rsp)
 1974      00000000 
 1975              	.LBB253:
 1976              	.LBB207:
 246:fltk-1.3.4-1/src/fl_draw.cxx ****  232:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1977              		.loc 2 246 0
 1978 0b8a 29D8     		subl	%ebx, %eax
 1979 0b8c 2B442434 		subl	52(%rsp), %eax
 1980 0b90 89F9     		movl	%edi, %ecx
 1981              	.LVL225:
 1982 0b92 29F8     		subl	%edi, %eax
 1983 0b94 89C2     		movl	%eax, %edx
 1984              	.LVL226:
 1985 0b96 C1EA1F   		shrl	$31, %edx
 1986 0b99 01D0     		addl	%edx, %eax
 1987 0b9b D1F8     		sarl	%eax
 1988 0b9d 0344241C 		addl	28(%rsp), %eax
 1989 0ba1 03442424 		addl	36(%rsp), %eax
 1990 0ba5 8D740301 		leal	1(%rbx,%rax), %esi
 1991              	.LVL227:
 1992 0ba9 488B4424 		movq	56(%rsp), %rax
 1992      38
 1993 0bae 448B400C 		movl	12(%rax), %r8d
 1994 0bb2 E9A1F9FF 		jmp	.L107
 1994      FF
 1995              	.LVL228:
 1996              	.L125:
 1997              	.LBE207:
 1998              	.LBE253:
 290:fltk-1.3.4-1/src/fl_draw.cxx ****  276:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1) then a horizontal f
 1999              		.loc 2 290 0
 2000 0bb7 8B442420 		movl	32(%rsp), %eax
 2001 0bbb 29C8     		subl	%ecx, %eax
 2002 0bbd 2B442434 		subl	52(%rsp), %eax
 2003 0bc1 89C6     		movl	%eax, %esi
 2004 0bc3 C1EE1F   		shrl	$31, %esi
 2005 0bc6 01C6     		addl	%eax, %esi
 2006 0bc8 D1FE     		sarl	%esi
 2007 0bca 0374241C 		addl	28(%rsp), %esi
 2008 0bce 03742424 		addl	36(%rsp), %esi
 2009              	.LVL229:
 2010 0bd2 E908F7FF 		jmp	.L124
 2010      FF
 2011              	.LVL230:
 2012              	.L79:
 2013 0bd7 39C7     		cmpl	%eax, %edi
 2014 0bd9 0F4EC7   		cmovle	%edi, %eax
 2015 0bdc 89442424 		movl	%eax, 36(%rsp)
 2016              	.LVL231:
 2017 0be0 E95CF8FF 		jmp	.L76
 2017      FF
 2018              	.LVL232:
 2019              	.L152:
 2020              	.LBB254:
 2021              	.LBB247:
 2022              		.loc 5 190 0
 2023 0be5 4889D1   		movq	%rdx, %rcx
 2024 0be8 E9ABFEFF 		jmp	.L77
 2024      FF
 2025              	.LVL233:
 2026              	.L229:
 2027 0bed 8B442424 		movl	36(%rsp), %eax
 2028 0bf1 8B7C241C 		movl	28(%rsp), %edi
 2029              	.LVL234:
 2030 0bf5 8D1C38   		leal	(%rax,%rdi), %ebx
 2031 0bf8 E997FDFF 		jmp	.L104
 2031      FF
 2032              	.LVL235:
 2033              	.L144:
 2034 0bfd 488B4424 		movq	56(%rsp), %rax
 2034      38
 2035 0c02 8B4008   		movl	8(%rax), %eax
 2036 0c05 89442444 		movl	%eax, 68(%rsp)
 2037              	.LVL236:
 2038 0c09 E9B5FDFF 		jmp	.L105
 2038      FF
 2039              	.LVL237:
 2040              	.L219:
 2041              	.LBE247:
 2042              	.LBE254:
 2043              		.loc 2 321 0
 2044 0c0e E8000000 		call	__stack_chk_fail
 2044      00
 2045              	.LVL238:
 2046              		.cfi_endproc
 2047              	.LFE487:
 2049              		.section	.text.unlikely._Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei
 2050              	.LCOLDE7:
 2051              		.section	.text._Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei
 2052              	.LHOTE7:
 2053              		.section	.text.unlikely._Z7fl_drawPKciiiijP8Fl_Imagei,"ax",@progbits
 2054              	.LCOLDB8:
 2055              		.section	.text._Z7fl_drawPKciiiijP8Fl_Imagei,"ax",@progbits
 2056              	.LHOTB8:
 2057              		.p2align 4,,15
 2058              		.globl	_Z7fl_drawPKciiiijP8Fl_Imagei
 2060              	_Z7fl_drawPKciiiijP8Fl_Imagei:
 2061              	.LFB488:
 322:fltk-1.3.4-1/src/fl_draw.cxx ****  307:fltk-1.3.4-1/FL/fl_draw.H ****  
 323:fltk-1.3.4-1/src/fl_draw.cxx ****  308:fltk-1.3.4-1/FL/fl_draw.H ****  Like fl_arc(), but fl_pie() draws a filled-in pie slice.
 324:fltk-1.3.4-1/src/fl_draw.cxx ****  309:fltk-1.3.4-1/FL/fl_draw.H ****  This slice may extend outside the line drawn by fl_arc();
 325:fltk-1.3.4-1/src/fl_draw.cxx ****  310:fltk-1.3.4-1/FL/fl_draw.H ****  to avoid this use w - 1 and h - 1.
 326:fltk-1.3.4-1/src/fl_draw.cxx ****  311:fltk-1.3.4-1/FL/fl_draw.H ****  
 327:fltk-1.3.4-1/src/fl_draw.cxx ****  312:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h bounding box of complete circle
 328:fltk-1.3.4-1/src/fl_draw.cxx ****  313:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a1,a2 start and end angles of arc measured in degre
 329:fltk-1.3.4-1/src/fl_draw.cxx ****  314:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. \p a2 must be greater
 330:fltk-1.3.4-1/src/fl_draw.cxx ****  315:fltk-1.3.4-1/FL/fl_draw.H ****  than or equal to \p a1.
 331:fltk-1.3.4-1/src/fl_draw.cxx ****  316:fltk-1.3.4-1/FL/fl_draw.H ****  */
 332:fltk-1.3.4-1/src/fl_draw.cxx ****  317:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pie(int x, int y, int w, int h, double a1, doubl
 333:fltk-1.3.4-1/src/fl_draw.cxx ****  318:fltk-1.3.4-1/FL/fl_draw.H **** /** fl_chord declaration is a place holder - the function does 
 334:fltk-1.3.4-1/src/fl_draw.cxx ****  319:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_chord(int x, int y, int w, int h, double a1, 
 335:fltk-1.3.4-1/src/fl_draw.cxx ****  320:fltk-1.3.4-1/FL/fl_draw.H **** 
 336:fltk-1.3.4-1/src/fl_draw.cxx ****  321:fltk-1.3.4-1/FL/fl_draw.H **** // scalable drawing code (code in fl_vertex.C and fl_arc.C):
 337:fltk-1.3.4-1/src/fl_draw.cxx ****  322:fltk-1.3.4-1/FL/fl_draw.H **** /**
 338:fltk-1.3.4-1/src/fl_draw.cxx ****  323:fltk-1.3.4-1/FL/fl_draw.H ****  Saves the current transformation matrix on the stack. 
 339:fltk-1.3.4-1/src/fl_draw.cxx ****  324:fltk-1.3.4-1/FL/fl_draw.H ****  The maximum depth of the stack is 32.
 340:fltk-1.3.4-1/src/fl_draw.cxx ****  325:fltk-1.3.4-1/FL/fl_draw.H ****  */
 341:fltk-1.3.4-1/src/fl_draw.cxx ****  326:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_matrix() { fl_graphics_driver->push_matrix(
 342:fltk-1.3.4-1/src/fl_draw.cxx ****  327:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2062              		.loc 2 342 0
 2063              		.cfi_startproc
 2064              	.LVL239:
 2065 0000 4157     		pushq	%r15
 2066              		.cfi_def_cfa_offset 16
 2067              		.cfi_offset 15, -16
 2068 0002 4156     		pushq	%r14
 2069              		.cfi_def_cfa_offset 24
 2070              		.cfi_offset 14, -24
 2071 0004 4155     		pushq	%r13
 2072              		.cfi_def_cfa_offset 32
 2073              		.cfi_offset 13, -32
 2074 0006 4154     		pushq	%r12
 2075              		.cfi_def_cfa_offset 40
 2076              		.cfi_offset 12, -40
 2077 0008 55       		pushq	%rbp
 2078              		.cfi_def_cfa_offset 48
 2079              		.cfi_offset 6, -48
 2080 0009 53       		pushq	%rbx
 2081              		.cfi_def_cfa_offset 56
 2082              		.cfi_offset 3, -56
 2083 000a 4883EC18 		subq	$24, %rsp
 2084              		.cfi_def_cfa_offset 80
 343:fltk-1.3.4-1/src/fl_draw.cxx ****  328:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the current transformation matrix from the stack.
 2085              		.loc 2 343 0
 2086 000e 4885FF   		testq	%rdi, %rdi
 342:fltk-1.3.4-1/src/fl_draw.cxx ****  328:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the current transformation matrix from the stack.
 2087              		.loc 2 342 0
 2088 0011 4C8B7C24 		movq	80(%rsp), %r15
 2088      50
 2089 0016 448B5424 		movl	88(%rsp), %r10d
 2089      58
 2090              		.loc 2 343 0
 2091 001b 7463     		je	.L231
 2092              		.loc 2 343 0 is_stmt 0 discriminator 2
 2093 001d 803F00   		cmpb	$0, (%rdi)
 2094 0020 745E     		je	.L231
 2095              	.L232:
 344:fltk-1.3.4-1/src/fl_draw.cxx ****  329:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2096              		.loc 2 344 0 is_stmt 1
 2097 0022 85C9     		testl	%ecx, %ecx
 2098 0024 4589CC   		movl	%r9d, %r12d
 2099 0027 4489C5   		movl	%r8d, %ebp
 2100 002a 89CB     		movl	%ecx, %ebx
 2101 002c 4189D6   		movl	%edx, %r14d
 2102 002f 4189F5   		movl	%esi, %r13d
 2103 0032 4989FB   		movq	%rdi, %r11
 2104 0035 7405     		je	.L234
 2105              	.LVL240:
 2106 0037 4585C0   		testl	%r8d, %r8d
 2107 003a 7554     		jne	.L247
 2108              	.LVL241:
 2109              	.L234:
 345:fltk-1.3.4-1/src/fl_draw.cxx ****  330:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_matrix() { fl_graphics_driver->pop_matrix();
 2110              		.loc 2 345 0
 2111 003c 41F6C440 		testb	$64, %r12b
 2112 0040 0F858200 		jne	.L236
 2112      0000
 346:fltk-1.3.4-1/src/fl_draw.cxx ****  331:fltk-1.3.4-1/FL/fl_draw.H **** /**
 347:fltk-1.3.4-1/src/fl_draw.cxx ****  332:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates scaling transformation onto the current one.
 2113              		.loc 2 347 0
 2114 0046 4883EC08 		subq	$8, %rsp
 2115              		.cfi_def_cfa_offset 88
 2116 004a 4589E1   		movl	%r12d, %r9d
 2117 004d 4189E8   		movl	%ebp, %r8d
 2118 0050 4152     		pushq	%r10
 2119              		.cfi_def_cfa_offset 96
 2120 0052 4157     		pushq	%r15
 2121              		.cfi_def_cfa_offset 104
 2122 0054 89D9     		movl	%ebx, %ecx
 2123 0056 68000000 		pushq	$_Z7fl_drawPKciii
 2123      00
 2124              		.cfi_def_cfa_offset 112
 2125 005b 4489F2   		movl	%r14d, %edx
 2126 005e 4489EE   		movl	%r13d, %esi
 2127 0061 4C89DF   		movq	%r11, %rdi
 2128 0064 E8000000 		call	_Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei
 2128      00
 2129              	.LVL242:
 2130 0069 4883C420 		addq	$32, %rsp
 2131              		.cfi_def_cfa_offset 80
 2132              	.LVL243:
 2133              	.L230:
 348:fltk-1.3.4-1/src/fl_draw.cxx ****  333:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y scale factors in x-direction and y-direction
 349:fltk-1.3.4-1/src/fl_draw.cxx ****  334:fltk-1.3.4-1/FL/fl_draw.H ****  */
 350:fltk-1.3.4-1/src/fl_draw.cxx ****  335:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_scale(double x, double y) { fl_graphics_driver->
 2134              		.loc 2 350 0
 2135 006d 4883C418 		addq	$24, %rsp
 2136              		.cfi_remember_state
 2137              		.cfi_def_cfa_offset 56
 2138 0071 5B       		popq	%rbx
 2139              		.cfi_def_cfa_offset 48
 2140 0072 5D       		popq	%rbp
 2141              		.cfi_def_cfa_offset 40
 2142 0073 415C     		popq	%r12
 2143              		.cfi_def_cfa_offset 32
 2144 0075 415D     		popq	%r13
 2145              		.cfi_def_cfa_offset 24
 2146 0077 415E     		popq	%r14
 2147              		.cfi_def_cfa_offset 16
 2148 0079 415F     		popq	%r15
 2149              		.cfi_def_cfa_offset 8
 2150 007b C3       		ret
 2151              	.LVL244:
 2152 007c 0F1F4000 		.p2align 4,,10
 2153              		.p2align 3
 2154              	.L231:
 2155              		.cfi_restore_state
 343:fltk-1.3.4-1/src/fl_draw.cxx ****  329:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2156              		.loc 2 343 0 discriminator 3
 2157 0080 4D85FF   		testq	%r15, %r15
 2158 0083 759D     		jne	.L232
 2159 0085 EBE6     		jmp	.L230
 2160              	.LVL245:
 2161 0087 660F1F84 		.p2align 4,,10
 2161      00000000 
 2161      00
 2162              		.p2align 3
 2163              	.L247:
 2164 0090 48897C24 		movq	%rdi, 8(%rsp)
 2164      08
 2165              	.LBB255:
 2166              	.LBB256:
 114:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2167              		.loc 1 114 0
 2168 0095 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2168      000000
 2169              	.LVL246:
 2170 009c 44895424 		movl	%r10d, 4(%rsp)
 2170      04
 2171              	.LVL247:
 2172 00a1 488B07   		movq	(%rdi), %rax
 2173 00a4 FF906001 		call	*352(%rax)
 2173      0000
 2174              	.LVL248:
 2175              	.LBE256:
 2176              	.LBE255:
 344:fltk-1.3.4-1/src/fl_draw.cxx ****  330:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_matrix() { fl_graphics_driver->pop_matrix();
 2177              		.loc 2 344 0
 2178 00aa 85C0     		testl	%eax, %eax
 2179 00ac 448B5424 		movl	4(%rsp), %r10d
 2179      04
 2180 00b1 4C8B5C24 		movq	8(%rsp), %r11
 2180      08
 2181 00b6 7584     		jne	.L234
 344:fltk-1.3.4-1/src/fl_draw.cxx ****  330:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_matrix() { fl_graphics_driver->pop_matrix();
 2182              		.loc 2 344 0 is_stmt 0 discriminator 3
 2183 00b8 41F6C410 		testb	$16, %r12b
 2184 00bc 75AF     		jne	.L230
 2185 00be E979FFFF 		jmp	.L234
 2185      FF
 2186              	.LVL249:
 2187              		.p2align 4,,10
 2188 00c3 0F1F4400 		.p2align 3
 2188      00
 2189              	.L236:
 2190              	.LBB257:
 2191              	.LBB258:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2192              		.loc 1 82 0 is_stmt 1
 2193 00c8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2193      000000
 2194 00cf 4C895C24 		movq	%r11, 8(%rsp)
 2194      08
 2195 00d4 4189E8   		movl	%ebp, %r8d
 2196 00d7 44895424 		movl	%r10d, 4(%rsp)
 2196      04
 2197              	.LVL250:
 2198 00dc 89D9     		movl	%ebx, %ecx
 2199 00de 4489F2   		movl	%r14d, %edx
 2200 00e1 4489EE   		movl	%r13d, %esi
 2201 00e4 488B07   		movq	(%rdi), %rax
 2202 00e7 FF905001 		call	*336(%rax)
 2202      0000
 2203              	.LVL251:
 2204              	.LBE258:
 2205              	.LBE257:
 347:fltk-1.3.4-1/src/fl_draw.cxx ****  333:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y scale factors in x-direction and y-direction
 2206              		.loc 2 347 0
 2207 00ed 4883EC08 		subq	$8, %rsp
 2208              		.cfi_def_cfa_offset 88
 2209 00f1 4589E1   		movl	%r12d, %r9d
 2210 00f4 4189E8   		movl	%ebp, %r8d
 2211 00f7 448B5424 		movl	12(%rsp), %r10d
 2211      0C
 2212 00fc 89D9     		movl	%ebx, %ecx
 2213 00fe 4489F2   		movl	%r14d, %edx
 2214 0101 4489EE   		movl	%r13d, %esi
 2215 0104 4152     		pushq	%r10
 2216              		.cfi_def_cfa_offset 96
 2217 0106 4157     		pushq	%r15
 2218              		.cfi_def_cfa_offset 104
 2219 0108 68000000 		pushq	$_Z7fl_drawPKciii
 2219      00
 2220              		.cfi_def_cfa_offset 112
 2221 010d 4C8B5C24 		movq	40(%rsp), %r11
 2221      28
 2222 0112 4C89DF   		movq	%r11, %rdi
 2223 0115 E8000000 		call	_Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei
 2223      00
 2224              	.LVL252:
 2225              	.LBB259:
 2226              	.LBB260:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2227              		.loc 1 103 0
 2228 011a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2228      000000
 2229 0121 488B07   		movq	(%rdi), %rax
 2230 0124 488B8070 		movq	368(%rax), %rax
 2230      010000
 2231              	.LBE260:
 2232              	.LBE259:
 2233              		.loc 2 350 0
 2234 012b 4883C438 		addq	$56, %rsp
 2235              		.cfi_def_cfa_offset 56
 2236 012f 5B       		popq	%rbx
 2237              		.cfi_def_cfa_offset 48
 2238              	.LVL253:
 2239 0130 5D       		popq	%rbp
 2240              		.cfi_def_cfa_offset 40
 2241              	.LVL254:
 2242 0131 415C     		popq	%r12
 2243              		.cfi_def_cfa_offset 32
 2244              	.LVL255:
 2245 0133 415D     		popq	%r13
 2246              		.cfi_def_cfa_offset 24
 2247              	.LVL256:
 2248 0135 415E     		popq	%r14
 2249              		.cfi_def_cfa_offset 16
 2250              	.LVL257:
 2251 0137 415F     		popq	%r15
 2252              		.cfi_def_cfa_offset 8
 2253              	.LBB262:
 2254              	.LBB261:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2255              		.loc 1 103 0
 2256 0139 FFE0     		jmp	*%rax
 2257              	.LVL258:
 2258              	.LBE261:
 2259              	.LBE262:
 2260              		.cfi_endproc
 2261              	.LFE488:
 2263              		.section	.text.unlikely._Z7fl_drawPKciiiijP8Fl_Imagei
 2264              	.LCOLDE8:
 2265              		.section	.text._Z7fl_drawPKciiiijP8Fl_Imagei
 2266              	.LHOTE8:
 2267              		.section	.text.unlikely._Z10fl_measurePKcRiS1_i,"ax",@progbits
 2268              	.LCOLDB9:
 2269              		.section	.text._Z10fl_measurePKcRiS1_i,"ax",@progbits
 2270              	.LHOTB9:
 2271              		.p2align 4,,15
 2272              		.globl	_Z10fl_measurePKcRiS1_i
 2274              	_Z10fl_measurePKcRiS1_i:
 2275              	.LFB489:
 351:fltk-1.3.4-1/src/fl_draw.cxx ****  336:fltk-1.3.4-1/FL/fl_draw.H **** /**
 352:fltk-1.3.4-1/src/fl_draw.cxx ****  337:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates scaling transformation onto the current one.
 353:fltk-1.3.4-1/src/fl_draw.cxx ****  338:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x scale factor in both x-direction and y-direction
 354:fltk-1.3.4-1/src/fl_draw.cxx ****  339:fltk-1.3.4-1/FL/fl_draw.H ****  */
 355:fltk-1.3.4-1/src/fl_draw.cxx ****  340:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_scale(double x) { fl_graphics_driver->scale(x, x
 356:fltk-1.3.4-1/src/fl_draw.cxx ****  341:fltk-1.3.4-1/FL/fl_draw.H **** /**
 357:fltk-1.3.4-1/src/fl_draw.cxx ****  342:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates translation transformation onto the current one.
 358:fltk-1.3.4-1/src/fl_draw.cxx ****  343:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y translation factor in x-direction and y-directi
 359:fltk-1.3.4-1/src/fl_draw.cxx ****  344:fltk-1.3.4-1/FL/fl_draw.H ****  */
 360:fltk-1.3.4-1/src/fl_draw.cxx ****  345:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_translate(double x, double y) { fl_graphics_driv
 361:fltk-1.3.4-1/src/fl_draw.cxx ****  346:fltk-1.3.4-1/FL/fl_draw.H **** /**
 362:fltk-1.3.4-1/src/fl_draw.cxx ****  347:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates rotation transformation onto the current one.
 363:fltk-1.3.4-1/src/fl_draw.cxx ****  348:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] d - rotation angle, counter-clockwise in degrees (n
 364:fltk-1.3.4-1/src/fl_draw.cxx ****  349:fltk-1.3.4-1/FL/fl_draw.H ****  */
 365:fltk-1.3.4-1/src/fl_draw.cxx ****  350:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rotate(double d) { fl_graphics_driver->rotate(d)
 366:fltk-1.3.4-1/src/fl_draw.cxx ****  351:fltk-1.3.4-1/FL/fl_draw.H **** /**
 367:fltk-1.3.4-1/src/fl_draw.cxx ****  352:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates another transformation onto the current one.
 368:fltk-1.3.4-1/src/fl_draw.cxx ****  353:fltk-1.3.4-1/FL/fl_draw.H ****  
 369:fltk-1.3.4-1/src/fl_draw.cxx ****  354:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a,b,c,d,x,y transformation matrix elements such tha
 370:fltk-1.3.4-1/src/fl_draw.cxx ****  355:fltk-1.3.4-1/FL/fl_draw.H ****  <tt> X' = aX + cY + x </tt> and <tt> Y' = bX +dY + y </tt>
 371:fltk-1.3.4-1/src/fl_draw.cxx ****  356:fltk-1.3.4-1/FL/fl_draw.H ****  */
 372:fltk-1.3.4-1/src/fl_draw.cxx ****  357:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_mult_matrix(double a, double b, double c, double
 373:fltk-1.3.4-1/src/fl_draw.cxx ****  358:fltk-1.3.4-1/FL/fl_draw.H **** 	{ fl_graphics_driver->mult_matrix(a, b, c, d, x, y); }
 374:fltk-1.3.4-1/src/fl_draw.cxx ****  359:fltk-1.3.4-1/FL/fl_draw.H **** /**
 375:fltk-1.3.4-1/src/fl_draw.cxx ****  360:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a list of points. Points are added to the list 
 376:fltk-1.3.4-1/src/fl_draw.cxx ****  361:fltk-1.3.4-1/FL/fl_draw.H ****  */
 377:fltk-1.3.4-1/src/fl_draw.cxx ****  362:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_points() {fl_graphics_driver->begin_points
 378:fltk-1.3.4-1/src/fl_draw.cxx ****  363:fltk-1.3.4-1/FL/fl_draw.H **** /**
 379:fltk-1.3.4-1/src/fl_draw.cxx ****  364:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a list of lines.
 380:fltk-1.3.4-1/src/fl_draw.cxx ****  365:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2276              		.loc 2 380 0
 2277              		.cfi_startproc
 2278              	.LVL259:
 2279 0000 4157     		pushq	%r15
 2280              		.cfi_def_cfa_offset 16
 2281              		.cfi_offset 15, -16
 2282 0002 4156     		pushq	%r14
 2283              		.cfi_def_cfa_offset 24
 2284              		.cfi_offset 14, -24
 2285 0004 4989F7   		movq	%rsi, %r15
 2286 0007 4155     		pushq	%r13
 2287              		.cfi_def_cfa_offset 32
 2288              		.cfi_offset 13, -32
 2289 0009 4154     		pushq	%r12
 2290              		.cfi_def_cfa_offset 40
 2291              		.cfi_offset 12, -40
 2292 000b 55       		pushq	%rbp
 2293              		.cfi_def_cfa_offset 48
 2294              		.cfi_offset 6, -48
 2295 000c 53       		pushq	%rbx
 2296              		.cfi_def_cfa_offset 56
 2297              		.cfi_offset 3, -56
 2298 000d 4883EC48 		subq	$72, %rsp
 2299              		.cfi_def_cfa_offset 128
 2300              		.loc 2 380 0
 2301 0011 64488B04 		movq	%fs:40, %rax
 2301      25280000 
 2301      00
 2302 001a 48894424 		movq	%rax, 56(%rsp)
 2302      38
 2303 001f 31C0     		xorl	%eax, %eax
 381:fltk-1.3.4-1/src/fl_draw.cxx ****  366:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_line() {fl_graphics_driver->begin_line(); 
 2304              		.loc 2 381 0
 2305 0021 4885FF   		testq	%rdi, %rdi
 380:fltk-1.3.4-1/src/fl_draw.cxx ****  366:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_line() {fl_graphics_driver->begin_line(); 
 2306              		.loc 2 380 0
 2307 0024 48895424 		movq	%rdx, 8(%rsp)
 2307      08
 2308              		.loc 2 381 0
 2309 0029 7408     		je	.L249
 2310              		.loc 2 381 0 is_stmt 0 discriminator 2
 2311 002b 803F00   		cmpb	$0, (%rdi)
 2312 002e 4889FB   		movq	%rdi, %rbx
 2313 0031 753D     		jne	.L250
 2314              	.L249:
 2315              		.loc 2 381 0 discriminator 3
 2316 0033 488B4424 		movq	8(%rsp), %rax
 2316      08
 2317 0038 41C70700 		movl	$0, (%r15)
 2317      000000
 2318 003f C7000000 		movl	$0, (%rax)
 2318      0000
 2319              	.LVL260:
 2320              	.L248:
 382:fltk-1.3.4-1/src/fl_draw.cxx ****  367:fltk-1.3.4-1/FL/fl_draw.H **** /**
 383:fltk-1.3.4-1/src/fl_draw.cxx ****  368:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a closed sequence of lines.
 384:fltk-1.3.4-1/src/fl_draw.cxx ****  369:fltk-1.3.4-1/FL/fl_draw.H ****  */
 385:fltk-1.3.4-1/src/fl_draw.cxx ****  370:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_loop() {fl_graphics_driver->begin_loop(); 
 386:fltk-1.3.4-1/src/fl_draw.cxx ****  371:fltk-1.3.4-1/FL/fl_draw.H **** /**
 387:fltk-1.3.4-1/src/fl_draw.cxx ****  372:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a convex filled polygon.
 388:fltk-1.3.4-1/src/fl_draw.cxx ****  373:fltk-1.3.4-1/FL/fl_draw.H ****  */
 389:fltk-1.3.4-1/src/fl_draw.cxx ****  374:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_polygon() {fl_graphics_driver->begin_polyg
 390:fltk-1.3.4-1/src/fl_draw.cxx ****  375:fltk-1.3.4-1/FL/fl_draw.H **** /**
 391:fltk-1.3.4-1/src/fl_draw.cxx ****  376:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a single vertex to the current path.
 392:fltk-1.3.4-1/src/fl_draw.cxx ****  377:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 393:fltk-1.3.4-1/src/fl_draw.cxx ****  378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 394:fltk-1.3.4-1/src/fl_draw.cxx ****  379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->
 395:fltk-1.3.4-1/src/fl_draw.cxx ****  380:fltk-1.3.4-1/FL/fl_draw.H **** /**
 396:fltk-1.3.4-1/src/fl_draw.cxx ****  381:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points on a Bezier curve to the path.
 397:fltk-1.3.4-1/src/fl_draw.cxx ****  382:fltk-1.3.4-1/FL/fl_draw.H ****  The curve ends (and two of the points) are at X0,Y0 and X3,Y3.
 398:fltk-1.3.4-1/src/fl_draw.cxx ****  383:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X0,Y0 curve start point
 399:fltk-1.3.4-1/src/fl_draw.cxx ****  384:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X1,Y1 curve control point
 400:fltk-1.3.4-1/src/fl_draw.cxx ****  385:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X2,Y2 curve control point
 401:fltk-1.3.4-1/src/fl_draw.cxx ****  386:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X3,Y3 curve end point
 402:fltk-1.3.4-1/src/fl_draw.cxx ****  387:fltk-1.3.4-1/FL/fl_draw.H ****  */
 403:fltk-1.3.4-1/src/fl_draw.cxx ****  388:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_curve(double X0, double Y0, double X1, double Y1
 404:fltk-1.3.4-1/src/fl_draw.cxx ****  389:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->curve(X0,Y0,X1,Y1,X2,Y2,X3,Y3); }
 405:fltk-1.3.4-1/src/fl_draw.cxx ****  390:fltk-1.3.4-1/FL/fl_draw.H **** /**
 406:fltk-1.3.4-1/src/fl_draw.cxx ****  391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a ci
 407:fltk-1.3.4-1/src/fl_draw.cxx ****  392:fltk-1.3.4-1/FL/fl_draw.H ****  You can get elliptical paths by using scale and rotate before 
 408:fltk-1.3.4-1/src/fl_draw.cxx ****  393:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,r center and radius of circular arc
 409:fltk-1.3.4-1/src/fl_draw.cxx ****  394:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] start,end angles of start and end of arc measured i
 410:fltk-1.3.4-1/src/fl_draw.cxx ****  395:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. If \p end is less than \p st
 411:fltk-1.3.4-1/src/fl_draw.cxx ****  396:fltk-1.3.4-1/FL/fl_draw.H ****  then it draws the arc in a clockwise direction.
 412:fltk-1.3.4-1/src/fl_draw.cxx ****  397:fltk-1.3.4-1/FL/fl_draw.H **** 
 413:fltk-1.3.4-1/src/fl_draw.cxx ****  398:fltk-1.3.4-1/FL/fl_draw.H ****  Examples:
 414:fltk-1.3.4-1/src/fl_draw.cxx ****  399:fltk-1.3.4-1/FL/fl_draw.H ****  \code
 415:fltk-1.3.4-1/src/fl_draw.cxx ****  400:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw an arc of points
 416:fltk-1.3.4-1/src/fl_draw.cxx ****  401:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_points();
 417:fltk-1.3.4-1/src/fl_draw.cxx ****  402:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(100.0, 100.0, 50.0, 0.0, 180.0);
 418:fltk-1.3.4-1/src/fl_draw.cxx ****  403:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_points();
 419:fltk-1.3.4-1/src/fl_draw.cxx ****  404:fltk-1.3.4-1/FL/fl_draw.H **** 
 420:fltk-1.3.4-1/src/fl_draw.cxx ****  405:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw arc with a line
 421:fltk-1.3.4-1/src/fl_draw.cxx ****  406:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_line();
 422:fltk-1.3.4-1/src/fl_draw.cxx ****  407:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(200.0, 100.0, 50.0, 0.0, 180.0);
 423:fltk-1.3.4-1/src/fl_draw.cxx ****  408:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_line();
 424:fltk-1.3.4-1/src/fl_draw.cxx ****  409:fltk-1.3.4-1/FL/fl_draw.H **** 
 425:fltk-1.3.4-1/src/fl_draw.cxx ****  410:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw filled arc
 426:fltk-1.3.4-1/src/fl_draw.cxx ****  411:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_polygon();
 427:fltk-1.3.4-1/src/fl_draw.cxx ****  412:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(300.0, 100.0, 50.0, 0.0, 180.0);
 428:fltk-1.3.4-1/src/fl_draw.cxx ****  413:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_polygon();
 429:fltk-1.3.4-1/src/fl_draw.cxx ****  414:fltk-1.3.4-1/FL/fl_draw.H ****  \endcode
 430:fltk-1.3.4-1/src/fl_draw.cxx ****  415:fltk-1.3.4-1/FL/fl_draw.H ****  */
 431:fltk-1.3.4-1/src/fl_draw.cxx ****  416:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(double x, double y, double r, double start, 
 2321              		.loc 2 431 0 is_stmt 1
 2322 0045 488B4424 		movq	56(%rsp), %rax
 2322      38
 2323 004a 64483304 		xorq	%fs:40, %rax
 2323      25280000 
 2323      00
 2324 0053 0F851E02 		jne	.L294
 2324      0000
 2325 0059 4883C448 		addq	$72, %rsp
 2326              		.cfi_remember_state
 2327              		.cfi_def_cfa_offset 56
 2328 005d 5B       		popq	%rbx
 2329              		.cfi_def_cfa_offset 48
 2330 005e 5D       		popq	%rbp
 2331              		.cfi_def_cfa_offset 40
 2332 005f 415C     		popq	%r12
 2333              		.cfi_def_cfa_offset 32
 2334 0061 415D     		popq	%r13
 2335              		.cfi_def_cfa_offset 24
 2336 0063 415E     		popq	%r14
 2337              		.cfi_def_cfa_offset 16
 2338 0065 415F     		popq	%r15
 2339              		.cfi_def_cfa_offset 8
 2340              	.LVL261:
 2341 0067 C3       		ret
 2342              	.LVL262:
 2343 0068 0F1F8400 		.p2align 4,,10
 2343      00000000 
 2344              		.p2align 3
 2345              	.L250:
 2346              		.cfi_restore_state
 2347              	.LBB263:
 2348              	.LBB264:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 2349              		.loc 1 527 0
 2350 0070 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2350      000000
 2351 0077 4189CC   		movl	%ecx, %r12d
 2352 007a 488B07   		movq	(%rdi), %rax
 2353 007d FF90D001 		call	*464(%rax)
 2353      0000
 2354              	.LVL263:
 2355              	.LBE264:
 2356              	.LBE263:
 382:fltk-1.3.4-1/src/fl_draw.cxx ****  367:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2357              		.loc 2 382 0
 2358 0083 488B5424 		movq	8(%rsp), %rdx
 2358      08
 2359              	.LBB266:
 395:fltk-1.3.4-1/src/fl_draw.cxx ****  381:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points on a Bezier curve to the path.
 2360              		.loc 2 395 0
 2361 0088 4585E4   		testl	%r12d, %r12d
 2362              	.LBE266:
 2363              	.LBB276:
 2364              	.LBB265:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 2365              		.loc 1 527 0
 2366 008b 89442418 		movl	%eax, 24(%rsp)
 2367              	.LBE265:
 2368              	.LBE276:
 383:fltk-1.3.4-1/src/fl_draw.cxx ****  369:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2369              		.loc 2 383 0
 2370 008f 48C74424 		movq	$0, 40(%rsp)
 2370      28000000 
 2370      00
 388:fltk-1.3.4-1/src/fl_draw.cxx ****  374:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_polygon() {fl_graphics_driver->begin_polyg
 2371              		.loc 2 388 0
 2372 0098 48C74424 		movq	$0, 48(%rsp)
 2372      30000000 
 2372      00
 2373              	.LVL264:
 382:fltk-1.3.4-1/src/fl_draw.cxx ****  368:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a closed sequence of lines.
 2374              		.loc 2 382 0
 2375 00a1 8902     		movl	%eax, (%rdx)
 2376              	.LBB277:
 395:fltk-1.3.4-1/src/fl_draw.cxx ****  381:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points on a Bezier curve to the path.
 2377              		.loc 2 395 0
 2378 00a3 744B     		je	.L273
 2379              	.LBB267:
 397:fltk-1.3.4-1/src/fl_draw.cxx ****  383:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X0,Y0 curve start point
 2380              		.loc 2 397 0
 2381 00a5 480FBE2B 		movsbq	(%rbx), %rbp
 2382 00a9 4889DF   		movq	%rbx, %rdi
 2383 00ac 4080FD40 		cmpb	$64, %bpl
 2384 00b0 0F841F01 		je	.L295
 2384      0000
 2385              	.L253:
 2386              	.LVL265:
 2387              	.LBB268:
 2388              	.LBB269:
 226:/usr/include/string.h **** }
 2389              		.loc 4 226 0
 2390 00b6 BE400000 		movl	$64, %esi
 2390      00
 2391 00bb E8000000 		call	strchr
 2391      00
 2392              	.LVL266:
 2393              	.LBE269:
 2394              	.LBE268:
 405:fltk-1.3.4-1/src/fl_draw.cxx ****  391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a ci
 2395              		.loc 2 405 0
 2396 00c0 4885C0   		testq	%rax, %rax
 2397 00c3 742B     		je	.L273
 2398 00c5 80780140 		cmpb	$64, 1(%rax)
 2399              	.LBE267:
 2400              	.LBE277:
 410:fltk-1.3.4-1/src/fl_draw.cxx ****  396:fltk-1.3.4-1/FL/fl_draw.H ****  then it draws the arc in a clockwise direction.
 2401              		.loc 2 410 0
 2402 00c9 448B6C24 		movl	24(%rsp), %r13d
 2402      18
 2403              	.LBB278:
 2404              	.LBB272:
 405:fltk-1.3.4-1/src/fl_draw.cxx ****  391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a ci
 2405              		.loc 2 405 0
 2406 00ce C744241C 		movl	$0, 28(%rsp)
 2406      00000000 
 2407 00d6 0F847101 		je	.L296
 2407      0000
 2408              	.LVL267:
 2409              	.L265:
 2410 00dc 8B442418 		movl	24(%rsp), %eax
 2411 00e0 0B44241C 		orl	28(%rsp), %eax
 2412 00e4 89442414 		movl	%eax, 20(%rsp)
 2413 00e8 EB21     		jmp	.L252
 2414              	.LVL268:
 2415 00ea 660F1F44 		.p2align 4,,10
 2415      0000
 2416              		.p2align 3
 2417              	.L273:
 2418 00f0 C7442414 		movl	$0, 20(%rsp)
 2418      00000000 
 2419              	.LBE272:
 2420              	.LBE278:
 392:fltk-1.3.4-1/src/fl_draw.cxx ****  378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2421              		.loc 2 392 0
 2422 00f8 C744241C 		movl	$0, 28(%rsp)
 2422      00000000 
 410:fltk-1.3.4-1/src/fl_draw.cxx ****  396:fltk-1.3.4-1/FL/fl_draw.H ****  then it draws the arc in a clockwise direction.
 2423              		.loc 2 410 0
 2424 0100 4531ED   		xorl	%r13d, %r13d
 393:fltk-1.3.4-1/src/fl_draw.cxx ****  379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->
 2425              		.loc 2 393 0
 2426 0103 C7442418 		movl	$0, 24(%rsp)
 2426      00000000 
 2427              	.LVL269:
 2428              	.L252:
 2429 010b 4531F6   		xorl	%r14d, %r14d
 2430 010e 31ED     		xorl	%ebp, %ebp
 2431              	.LVL270:
 2432              		.p2align 4,,10
 2433              		.p2align 3
 2434              	.L259:
 414:fltk-1.3.4-1/src/fl_draw.cxx ****  400:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw an arc of points
 2435              		.loc 2 414 0
 2436 0110 418B07   		movl	(%r15), %eax
 415:fltk-1.3.4-1/src/fl_draw.cxx ****  401:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_points();
 2437              		.loc 2 415 0
 2438 0113 660FEFC0 		pxor	%xmm0, %xmm0
 2439 0117 4531C9   		xorl	%r9d, %r9d
 2440 011a 4889DF   		movq	%rbx, %rdi
 2441 011d 85C0     		testl	%eax, %eax
 2442 011f 410F95C1 		setne	%r9b
 2443 0123 4429E8   		subl	%r13d, %eax
 2444 0126 4883EC08 		subq	$8, %rsp
 2445              		.cfi_def_cfa_offset 136
 2446 012a F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2447 012e 4154     		pushq	%r12
 2448              		.cfi_def_cfa_offset 144
 2449 0130 31D2     		xorl	%edx, %edx
 2450 0132 4C8D4424 		leaq	64(%rsp), %r8
 2450      40
 2451 0137 488D4C24 		leaq	52(%rsp), %rcx
 2451      34
 2452 013c 488D7424 		leaq	56(%rsp), %rsi
 2452      38
 2453 0141 E8000000 		call	_ZL12expand_text_PKcRPcidRiRdii
 2453      00
 2454              	.LVL271:
 416:fltk-1.3.4-1/src/fl_draw.cxx ****  402:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(100.0, 100.0, 50.0, 0.0, 180.0);
 2455              		.loc 2 416 0
 2456 0146 F20F1044 		movsd	64(%rsp), %xmm0
 2456      2440
 415:fltk-1.3.4-1/src/fl_draw.cxx ****  401:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_points();
 2457              		.loc 2 415 0
 2458 014c 4889C3   		movq	%rax, %rbx
 2459              	.LVL272:
 416:fltk-1.3.4-1/src/fl_draw.cxx ****  402:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(100.0, 100.0, 50.0, 0.0, 180.0);
 2460              		.loc 2 416 0
 2461 014f E8000000 		call	ceil
 2461      00
 2462              	.LVL273:
 2463 0154 F20F2CC0 		cvttsd2si	%xmm0, %eax
 2464 0158 5E       		popq	%rsi
 2465              		.cfi_def_cfa_offset 136
 2466 0159 5F       		popq	%rdi
 2467              		.cfi_def_cfa_offset 128
 2468 015a 4139C6   		cmpl	%eax, %r14d
 2469 015d 440F4CF0 		cmovl	%eax, %r14d
 2470              	.LVL274:
 418:fltk-1.3.4-1/src/fl_draw.cxx ****  404:fltk-1.3.4-1/FL/fl_draw.H **** 
 2471              		.loc 2 418 0
 2472 0161 0FB603   		movzbl	(%rbx), %eax
 417:fltk-1.3.4-1/src/fl_draw.cxx ****  403:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_points();
 2473              		.loc 2 417 0
 2474 0164 83C501   		addl	$1, %ebp
 2475              	.LVL275:
 418:fltk-1.3.4-1/src/fl_draw.cxx ****  404:fltk-1.3.4-1/FL/fl_draw.H **** 
 2476              		.loc 2 418 0
 2477 0167 84C0     		testb	%al, %al
 2478 0169 740F     		je	.L260
 418:fltk-1.3.4-1/src/fl_draw.cxx ****  404:fltk-1.3.4-1/FL/fl_draw.H **** 
 2479              		.loc 2 418 0 is_stmt 0 discriminator 1
 2480 016b 3C40     		cmpb	$64, %al
 2481 016d 75A1     		jne	.L259
 418:fltk-1.3.4-1/src/fl_draw.cxx ****  404:fltk-1.3.4-1/FL/fl_draw.H **** 
 2482              		.loc 2 418 0 discriminator 2
 2483 016f 807B0140 		cmpb	$64, 1(%rbx)
 2484 0173 749B     		je	.L259
 2485 0175 4585E4   		testl	%r12d, %r12d
 2486 0178 7496     		je	.L259
 2487              	.L260:
 422:fltk-1.3.4-1/src/fl_draw.cxx ****  408:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_line();
 2488              		.loc 2 422 0 is_stmt 1
 2489 017a 8B442414 		movl	20(%rsp), %eax
 2490 017e 85C0     		testl	%eax, %eax
 2491 0180 751E     		jne	.L297
 2492              	.LVL276:
 2493              	.L264:
 429:fltk-1.3.4-1/src/fl_draw.cxx ****  415:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2494              		.loc 2 429 0 discriminator 1
 2495 0182 448B5424 		movl	20(%rsp), %r10d
 2495      14
 430:fltk-1.3.4-1/src/fl_draw.cxx ****  416:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(double x, double y, double r, double start, 
 2496              		.loc 2 430 0 discriminator 1
 2497 0187 488B4424 		movq	8(%rsp), %rax
 2497      08
 429:fltk-1.3.4-1/src/fl_draw.cxx ****  415:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2498              		.loc 2 429 0 discriminator 1
 2499 018c 4501F2   		addl	%r14d, %r10d
 2500 018f 458917   		movl	%r10d, (%r15)
 430:fltk-1.3.4-1/src/fl_draw.cxx ****  416:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(double x, double y, double r, double start, 
 2501              		.loc 2 430 0 discriminator 1
 2502 0192 0FAF28   		imull	(%rax), %ebp
 2503              	.LVL277:
 2504 0195 8928     		movl	%ebp, (%rax)
 2505 0197 E9A9FEFF 		jmp	.L248
 2505      FF
 2506              	.LVL278:
 2507 019c 0F1F4000 		.p2align 4,,10
 2508              		.p2align 3
 2509              	.L297:
 423:fltk-1.3.4-1/src/fl_draw.cxx ****  409:fltk-1.3.4-1/FL/fl_draw.H **** 
 2510              		.loc 2 423 0
 2511 01a0 8B4C241C 		movl	28(%rsp), %ecx
 2512 01a4 85C9     		testl	%ecx, %ecx
 2513 01a6 0F858500 		jne	.L298
 2513      0000
 2514              	.L263:
 424:fltk-1.3.4-1/src/fl_draw.cxx ****  410:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw filled arc
 2515              		.loc 2 424 0
 2516 01ac 8B542418 		movl	24(%rsp), %edx
 2517 01b0 8B44241C 		movl	28(%rsp), %eax
 2518 01b4 85D2     		testl	%edx, %edx
 2519 01b6 89442414 		movl	%eax, 20(%rsp)
 2520 01ba 74C6     		je	.L264
 2521              	.LBB279:
 2522              	.LBB280:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 2523              		.loc 1 527 0
 2524 01bc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2524      000000
 2525 01c3 488B07   		movq	(%rdi), %rax
 2526 01c6 FF90D001 		call	*464(%rax)
 2526      0000
 2527              	.LVL279:
 2528 01cc 0FAFC5   		imull	%ebp, %eax
 2529              	.LVL280:
 2530 01cf 01442414 		addl	%eax, 20(%rsp)
 2531              	.LBE280:
 2532              	.LBE279:
 2533 01d3 EBAD     		jmp	.L264
 2534              	.LVL281:
 2535              	.L295:
 2536              	.LBB281:
 2537              	.LBB273:
 397:fltk-1.3.4-1/src/fl_draw.cxx ****  383:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X0,Y0 curve start point
 2538              		.loc 2 397 0 discriminator 1
 2539 01d5 807B0140 		cmpb	$64, 1(%rbx)
 2540 01d9 488D7B02 		leaq	2(%rbx), %rdi
 2541 01dd 0F84D3FE 		je	.L253
 2541      FFFF
 2542 01e3 E8000000 		call	__ctype_b_loc
 2542      00
 2543              	.LVL282:
 2544 01e8 488B00   		movq	(%rax), %rax
 2545 01eb EB10     		jmp	.L256
 2546 01ed 0F1F00   		.p2align 4,,10
 2547              		.p2align 3
 2548              	.L300:
 399:fltk-1.3.4-1/src/fl_draw.cxx ****  385:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X2,Y2 curve control point
 2549              		.loc 2 399 0 discriminator 2
 2550 01f0 4883C301 		addq	$1, %rbx
 2551              	.LVL283:
 2552 01f4 480FBE2B 		movsbq	(%rbx), %rbp
 2553 01f8 4084ED   		testb	%bpl, %bpl
 2554 01fb 7465     		je	.L299
 2555              	.L256:
 399:fltk-1.3.4-1/src/fl_draw.cxx ****  385:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X2,Y2 curve control point
 2556              		.loc 2 399 0 is_stmt 0 discriminator 1
 2557 01fd F6446801 		testb	$32, 1(%rax,%rbp,2)
 2557      20
 2558 0202 74EC     		je	.L300
 2559              	.L255:
 400:fltk-1.3.4-1/src/fl_draw.cxx ****  386:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X3,Y3 curve end point
 2560              		.loc 2 400 0 is_stmt 1 discriminator 1
 2561 0204 4883C301 		addq	$1, %rbx
 2562              	.LVL284:
 2563              	.L257:
 2564              	.LBB271:
 2565              	.LBB270:
 226:/usr/include/string.h **** }
 2566              		.loc 4 226 0
 2567 0208 BE400000 		movl	$64, %esi
 2567      00
 2568 020d 4889DF   		movq	%rbx, %rdi
 2569 0210 E8000000 		call	strchr
 2569      00
 2570              	.LVL285:
 2571              	.LBE270:
 2572              	.LBE271:
 405:fltk-1.3.4-1/src/fl_draw.cxx ****  391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a ci
 2573              		.loc 2 405 0
 2574 0215 4885C0   		testq	%rax, %rax
 2575 0218 7456     		je	.L271
 405:fltk-1.3.4-1/src/fl_draw.cxx ****  391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a ci
 2576              		.loc 2 405 0 is_stmt 0 discriminator 1
 2577 021a 80780140 		cmpb	$64, 1(%rax)
 2578 021e 7450     		je	.L271
 2579              	.LVL286:
 2580              	.LBE273:
 2581              	.LBE281:
 410:fltk-1.3.4-1/src/fl_draw.cxx ****  396:fltk-1.3.4-1/FL/fl_draw.H ****  then it draws the arc in a clockwise direction.
 2582              		.loc 2 410 0 is_stmt 1
 2583 0220 8B442418 		movl	24(%rsp), %eax
 2584 0224 448D2C00 		leal	(%rax,%rax), %r13d
 2585              	.LVL287:
 2586 0228 8944241C 		movl	%eax, 28(%rsp)
 2587 022c E9ABFEFF 		jmp	.L265
 2587      FF
 2588              	.LVL288:
 2589              	.L298:
 2590              	.LBB282:
 2591              	.LBB283:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 2592              		.loc 1 527 0
 2593 0231 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2593      000000
 2594 0238 488B07   		movq	(%rdi), %rax
 2595 023b FF90D001 		call	*464(%rax)
 2595      0000
 2596              	.LVL289:
 2597              	.LBE283:
 2598              	.LBE282:
 423:fltk-1.3.4-1/src/fl_draw.cxx ****  409:fltk-1.3.4-1/FL/fl_draw.H **** 
 2599              		.loc 2 423 0
 2600 0241 0FAFC5   		imull	%ebp, %eax
 2601 0244 8944241C 		movl	%eax, 28(%rsp)
 2602              	.LVL290:
 2603 0248 E95FFFFF 		jmp	.L263
 2603      FF
 2604              	.LVL291:
 2605              	.L296:
 2606              	.LBB284:
 2607              	.LBB274:
 405:fltk-1.3.4-1/src/fl_draw.cxx ****  391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a ci
 2608              		.loc 2 405 0
 2609 024d 4531ED   		xorl	%r13d, %r13d
 2610              	.LVL292:
 2611              	.L258:
 2612              	.LBE274:
 2613              	.LBE284:
 380:fltk-1.3.4-1/src/fl_draw.cxx ****  366:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_line() {fl_graphics_driver->begin_line(); 
 2614              		.loc 2 380 0
 2615 0250 44896C24 		movl	%r13d, 28(%rsp)
 2615      1C
 393:fltk-1.3.4-1/src/fl_draw.cxx ****  379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->
 2616              		.loc 2 393 0
 2617 0255 C7442418 		movl	$0, 24(%rsp)
 2617      00000000 
 2618 025d E97AFEFF 		jmp	.L265
 2618      FF
 2619              	.LVL293:
 2620              	.L299:
 2621              	.LBB285:
 2622              	.LBB275:
 400:fltk-1.3.4-1/src/fl_draw.cxx ****  386:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X3,Y3 curve end point
 2623              		.loc 2 400 0
 2624 0262 0FB700   		movzwl	(%rax), %eax
 2625 0265 F6C420   		testb	$32, %ah
 2626 0268 749E     		je	.L257
 2627 026a EB98     		jmp	.L255
 2628              	.LVL294:
 2629 026c 0F1F4000 		.p2align 4,,10
 2630              		.p2align 3
 2631              	.L271:
 2632 0270 448B6C24 		movl	24(%rsp), %r13d
 2632      18
 2633 0275 EBD9     		jmp	.L258
 2634              	.LVL295:
 2635              	.L294:
 2636              	.LBE275:
 2637              	.LBE285:
 2638              		.loc 2 431 0
 2639 0277 E8000000 		call	__stack_chk_fail
 2639      00
 2640              	.LVL296:
 2641              		.cfi_endproc
 2642              	.LFE489:
 2644              		.section	.text.unlikely._Z10fl_measurePKcRiS1_i
 2645              	.LCOLDE9:
 2646              		.section	.text._Z10fl_measurePKcRiS1_i
 2647              	.LHOTE9:
 2648              		.section	.text.unlikely._Z9fl_heightii,"ax",@progbits
 2649              	.LCOLDB10:
 2650              		.section	.text._Z9fl_heightii,"ax",@progbits
 2651              	.LHOTB10:
 2652              		.p2align 4,,15
 2653              		.globl	_Z9fl_heightii
 2655              	_Z9fl_heightii:
 2656              	.LFB490:
 432:fltk-1.3.4-1/src/fl_draw.cxx ****  417:fltk-1.3.4-1/FL/fl_draw.H **** /**
 433:fltk-1.3.4-1/src/fl_draw.cxx ****  418:fltk-1.3.4-1/FL/fl_draw.H ****  fl_circle() is equivalent to fl_arc(x,y,r,0,360), but may be f
 434:fltk-1.3.4-1/src/fl_draw.cxx ****  419:fltk-1.3.4-1/FL/fl_draw.H ****  
 435:fltk-1.3.4-1/src/fl_draw.cxx ****  420:fltk-1.3.4-1/FL/fl_draw.H ****  It must be the \e only thing in the path: if you want a circle
 436:fltk-1.3.4-1/src/fl_draw.cxx ****  421:fltk-1.3.4-1/FL/fl_draw.H ****  a complex polygon you must use fl_arc()
 437:fltk-1.3.4-1/src/fl_draw.cxx ****  422:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,r center and radius of circle
 438:fltk-1.3.4-1/src/fl_draw.cxx ****  423:fltk-1.3.4-1/FL/fl_draw.H ****  */
 439:fltk-1.3.4-1/src/fl_draw.cxx ****  424:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_circle(double x, double y, double r) {fl_graphic
 440:fltk-1.3.4-1/src/fl_draw.cxx ****  425:fltk-1.3.4-1/FL/fl_draw.H **** /**
 441:fltk-1.3.4-1/src/fl_draw.cxx ****  426:fltk-1.3.4-1/FL/fl_draw.H ****  Ends list of points, and draws.
 442:fltk-1.3.4-1/src/fl_draw.cxx ****  427:fltk-1.3.4-1/FL/fl_draw.H ****  */
 443:fltk-1.3.4-1/src/fl_draw.cxx ****  428:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_points() {fl_graphics_driver->end_points(); 
 444:fltk-1.3.4-1/src/fl_draw.cxx ****  429:fltk-1.3.4-1/FL/fl_draw.H **** /**
 445:fltk-1.3.4-1/src/fl_draw.cxx ****  430:fltk-1.3.4-1/FL/fl_draw.H ****  Ends list of lines, and draws.
 446:fltk-1.3.4-1/src/fl_draw.cxx ****  431:fltk-1.3.4-1/FL/fl_draw.H ****  */
 447:fltk-1.3.4-1/src/fl_draw.cxx ****  432:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_line() {fl_graphics_driver->end_line(); }
 448:fltk-1.3.4-1/src/fl_draw.cxx ****  433:fltk-1.3.4-1/FL/fl_draw.H **** /**
 449:fltk-1.3.4-1/src/fl_draw.cxx ****  434:fltk-1.3.4-1/FL/fl_draw.H ****  Ends closed sequence of lines, and draws.
 2657              		.loc 2 449 0
 2658              		.cfi_startproc
 2659              	.LVL297:
 2660              	.LBB286:
 2661              	.LBB287:
 515:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2662              		.loc 1 515 0
 2663 0000 488B0500 		movq	fl_graphics_driver(%rip), %rax
 2663      000000
 2664              	.LBE287:
 2665              	.LBE286:
 2666              		.loc 2 449 0
 2667 0007 4154     		pushq	%r12
 2668              		.cfi_def_cfa_offset 16
 2669              		.cfi_offset 12, -16
 2670 0009 55       		pushq	%rbp
 2671              		.cfi_def_cfa_offset 24
 2672              		.cfi_offset 6, -24
 2673 000a 53       		pushq	%rbx
 2674              		.cfi_def_cfa_offset 32
 2675              		.cfi_offset 3, -32
 2676 000b 8B5808   		movl	8(%rax), %ebx
 2677              	.LVL298:
 2678 000e 8B680C   		movl	12(%rax), %ebp
 450:fltk-1.3.4-1/src/fl_draw.cxx ****  435:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2679              		.loc 2 450 0
 2680 0011 39DF     		cmpl	%ebx, %edi
 2681 0013 7443     		je	.L308
 2682              	.L304:
 2683              	.LBB288:
 2684              	.LBB289:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 2685              		.loc 1 509 0
 2686 0015 488B08   		movq	(%rax), %rcx
 2687 0018 89F2     		movl	%esi, %edx
 2688 001a 89FE     		movl	%edi, %esi
 2689              	.LVL299:
 2690 001c 4889C7   		movq	%rax, %rdi
 2691              	.LVL300:
 2692 001f FF91B001 		call	*432(%rcx)
 2692      0000
 2693              	.LVL301:
 2694              	.LBE289:
 2695              	.LBE288:
 2696              	.LBB290:
 2697              	.LBB291:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 2698              		.loc 1 527 0
 2699 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2699      000000
 2700 002c 488B07   		movq	(%rdi), %rax
 2701 002f FF90D001 		call	*464(%rax)
 2701      0000
 2702              	.LVL302:
 2703              	.LBE291:
 2704              	.LBE290:
 2705              	.LBB293:
 2706              	.LBB294:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 2707              		.loc 1 509 0
 2708 0035 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2708      000000
 2709              	.LBE294:
 2710              	.LBE293:
 2711              	.LBB296:
 2712              	.LBB292:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 2713              		.loc 1 527 0
 2714 003c 4189C4   		movl	%eax, %r12d
 2715              	.LBE292:
 2716              	.LBE296:
 2717              	.LBB297:
 2718              	.LBB295:
 509:fltk-1.3.4-1/FL/fl_draw.H **** 
 2719              		.loc 1 509 0
 2720 003f 89EA     		movl	%ebp, %edx
 2721 0041 89DE     		movl	%ebx, %esi
 2722 0043 488B0F   		movq	(%rdi), %rcx
 2723 0046 FF91B001 		call	*432(%rcx)
 2723      0000
 2724              	.LVL303:
 2725              	.LBE295:
 2726              	.LBE297:
 451:fltk-1.3.4-1/src/fl_draw.cxx ****  436:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_loop() {fl_graphics_driver->end_loop(); }
 452:fltk-1.3.4-1/src/fl_draw.cxx ****  437:fltk-1.3.4-1/FL/fl_draw.H **** /**
 453:fltk-1.3.4-1/src/fl_draw.cxx ****  438:fltk-1.3.4-1/FL/fl_draw.H ****  Ends convex filled polygon, and draws.
 454:fltk-1.3.4-1/src/fl_draw.cxx ****  439:fltk-1.3.4-1/FL/fl_draw.H ****  */
 455:fltk-1.3.4-1/src/fl_draw.cxx ****  440:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_polygon() {fl_graphics_driver->end_polygon()
 456:fltk-1.3.4-1/src/fl_draw.cxx ****  441:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2727              		.loc 2 456 0
 2728 004c 4489E0   		movl	%r12d, %eax
 2729 004f 5B       		popq	%rbx
 2730              		.cfi_remember_state
 2731              		.cfi_def_cfa_offset 24
 2732 0050 5D       		popq	%rbp
 2733              		.cfi_def_cfa_offset 16
 2734 0051 415C     		popq	%r12
 2735              		.cfi_def_cfa_offset 8
 2736 0053 C3       		ret
 2737              	.LVL304:
 2738              		.p2align 4,,10
 2739 0054 0F1F4000 		.p2align 3
 2740              	.L308:
 2741              		.cfi_restore_state
 450:fltk-1.3.4-1/src/fl_draw.cxx ****  436:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_loop() {fl_graphics_driver->end_loop(); }
 2742              		.loc 2 450 0
 2743 0058 39F5     		cmpl	%esi, %ebp
 2744 005a 75B9     		jne	.L304
 2745              	.LBB298:
 2746              	.LBB299:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 2747              		.loc 1 527 0
 2748 005c 488B10   		movq	(%rax), %rdx
 2749 005f 4889C7   		movq	%rax, %rdi
 2750              	.LVL305:
 2751              	.LBE299:
 2752              	.LBE298:
 2753              		.loc 2 456 0
 2754 0062 5B       		popq	%rbx
 2755              		.cfi_def_cfa_offset 24
 2756 0063 5D       		popq	%rbp
 2757              		.cfi_def_cfa_offset 16
 2758 0064 415C     		popq	%r12
 2759              		.cfi_def_cfa_offset 8
 2760              	.LBB301:
 2761              	.LBB300:
 527:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 2762              		.loc 1 527 0
 2763 0066 488B92D0 		movq	464(%rdx), %rdx
 2763      010000
 2764 006d FFE2     		jmp	*%rdx
 2765              	.LVL306:
 2766              	.LBE300:
 2767              	.LBE301:
 2768              		.cfi_endproc
 2769              	.LFE490:
 2771              		.section	.text.unlikely._Z9fl_heightii
 2772              	.LCOLDE10:
 2773              		.section	.text._Z9fl_heightii
 2774              	.LHOTE10:
 2775              		.section	.bss._ZZL12expand_text_PKcRPcidRiRdiiE9local_buf,"aw",@nobits
 2776              		.align 8
 2779              	_ZZL12expand_text_PKcRPcidRiRdiiE9local_buf:
 2780 0000 00000000 		.zero	8
 2780      00000000 
 2781              		.section	.data._ZZL12expand_text_PKcRPcidRiRdiiE12l_local_buff,"aw",@progbits
 2782              		.align 4
 2785              	_ZZL12expand_text_PKcRPcidRiRdiiE12l_local_buff:
 2786 0000 F4010000 		.long	500
 2787              		.section	.bss._ZGVZL12expand_text_PKcRPcidRiRdiiE9local_buf,"aw",@nobits
 2788              		.align 8
 2791              	_ZGVZL12expand_text_PKcRPcidRiRdiiE9local_buf:
 2792 0000 00000000 		.zero	8
 2792      00000000 
 2793              		.section	.bss._ZL12underline_at,"aw",@nobits
 2794              		.align 8
 2797              	_ZL12underline_at:
 2798 0000 00000000 		.zero	8
 2798      00000000 
 2799              		.globl	fl_draw_shortcut
 2800              		.section	.bss.fl_draw_shortcut,"aw",@nobits
 2803              	fl_draw_shortcut:
 2804 0000 00       		.zero	1
 2805              		.section	.rodata.cst8,"aM",@progbits,8
 2806              		.align 8
 2807              	.LC5:
 2808 0000 00000000 		.long	0
 2809 0004 0000E03F 		.long	1071644672
 2810              		.text
 2811              	.Letext0:
 2812              		.section	.text.unlikely._Z7fl_drawPKciii,"axG",@progbits,_Z7fl_drawPKciii,comdat
 2813              	.Letext_cold0:
 2814              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 2815              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2816              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2817              		.file 9 "/usr/include/libio.h"
 2818              		.file 10 "fltk-1.3.4-1/FL/Enumerations.H"
 2819              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 2820              		.file 12 "/usr/include/stdio.h"
 2821              		.file 13 "/usr/include/stdlib.h"
 2822              		.file 14 "fltk-1.3.4-1/FL/fl_utf8.h"
 2823              		.file 15 "fltk-1.3.4-1/src/flstring.h"
 2824              		.file 16 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_draw.cxx
     /tmp/ccbnqIzj.s:14     .text._Z7fl_drawPKciii:0000000000000000 _Z7fl_drawPKciii
     /tmp/ccbnqIzj.s:48     .text._ZL12expand_text_PKcRPcidRiRdii:0000000000000000 _ZL12expand_text_PKcRPcidRiRdii
     /tmp/ccbnqIzj.s:2791   .bss._ZGVZL12expand_text_PKcRPcidRiRdiiE9local_buf:0000000000000000 _ZGVZL12expand_text_PKcRPcidRiRdiiE9local_buf
     /tmp/ccbnqIzj.s:2797   .bss._ZL12underline_at:0000000000000000 _ZL12underline_at
     /tmp/ccbnqIzj.s:2785   .data._ZZL12expand_text_PKcRPcidRiRdiiE12l_local_buff:0000000000000000 _ZZL12expand_text_PKcRPcidRiRdiiE12l_local_buff
     /tmp/ccbnqIzj.s:2779   .bss._ZZL12expand_text_PKcRPcidRiRdiiE9local_buf:0000000000000000 _ZZL12expand_text_PKcRPcidRiRdiiE9local_buf
     /tmp/ccbnqIzj.s:2803   .bss.fl_draw_shortcut:0000000000000000 fl_draw_shortcut
     /tmp/ccbnqIzj.s:578    .text._Z14fl_expand_textPKcPcidRiRdii:0000000000000000 _Z14fl_expand_textPKcPcidRiRdii
     /tmp/ccbnqIzj.s:619    .text._Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei:0000000000000000 _Z7fl_drawPKciiiijPFvS0_iiiEP8Fl_Imagei
     /tmp/ccbnqIzj.s:2060   .text._Z7fl_drawPKciiiijP8Fl_Imagei:0000000000000000 _Z7fl_drawPKciiiijP8Fl_Imagei
     /tmp/ccbnqIzj.s:2274   .text._Z10fl_measurePKcRiS1_i:0000000000000000 _Z10fl_measurePKcRiS1_i
     /tmp/ccbnqIzj.s:2655   .text._Z9fl_heightii:0000000000000000 _Z9fl_heightii
     /tmp/ccbnqIzj.s:2807   .rodata.cst8:0000000000000000 .LC5
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
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844

UNDEFINED SYMBOLS
fl_graphics_driver
realloc
fl_utf_nb_char
__cxa_guard_acquire
malloc
__cxa_guard_release
_Z14fl_draw_symbolPKciiiij
strrchr
fl_strlcpy
__ctype_b_loc
__stack_chk_fail
strchr
ceil
