   1              		.file	"fl_gtk.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
   5              	.LCOLDB0:
   6              		.section	.text._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
  10              	.Ltext_cold0:
  11              		.section	.text._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
  12              		.weak	_Z6fl_pieiiiidd
  14              	_Z6fl_pieiiiidd:
  15              	.LFB425:
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
  17              		.loc 1 317 0
  18              		.cfi_startproc
  19              	.LVL0:
  20              		.loc 1 317 0
  21 0000 4189F9   		movl	%edi, %r9d
  22 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  22      000000
  23              	.LVL1:
  24 000a 4189C8   		movl	%ecx, %r8d
  25 000d 89D1     		movl	%edx, %ecx
  26              	.LVL2:
  27 000f 89F2     		movl	%esi, %edx
  28              	.LVL3:
  29 0011 4489CE   		movl	%r9d, %esi
  30              	.LVL4:
  31 0014 488B07   		movq	(%rdi), %rax
  32 0017 488B8008 		movq	264(%rax), %rax
  32      010000
  33 001e FFE0     		jmp	*%rax
  34              	.LVL5:
  35              		.cfi_endproc
  36              	.LFE425:
  38              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
  39              	.LCOLDE0:
  40              		.section	.text._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
  41              	.LHOTE0:
  42              		.section	.text.unlikely._ZL8fl_arc_iiiiidd,"ax",@progbits
  43              	.LCOLDB1:
  44              		.section	.text._ZL8fl_arc_iiiiidd,"ax",@progbits
  45              	.LHOTB1:
  46              		.p2align 4,,15
  48              	_ZL8fl_arc_iiiiidd:
  49              	.LFB477:
  50              		.file 2 "fltk-1.3.4-1/src/fl_gtk.cxx"
   1:fltk-1.3.4-1/src/fl_gtk.cxx ****    1              		.file	"fl_gtk.cxx"
   2:fltk-1.3.4-1/src/fl_gtk.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/fl_gtk.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/fl_gtk.cxx ****    4              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
   5:fltk-1.3.4-1/src/fl_gtk.cxx ****    5              	.LCOLDB0:
   6:fltk-1.3.4-1/src/fl_gtk.cxx ****    6              		.section	.text._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
   7:fltk-1.3.4-1/src/fl_gtk.cxx ****    7              	.LHOTB0:
   8:fltk-1.3.4-1/src/fl_gtk.cxx ****    8              		.p2align 4,,15
   9:fltk-1.3.4-1/src/fl_gtk.cxx ****    9              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
  10:fltk-1.3.4-1/src/fl_gtk.cxx ****   10              	.Ltext_cold0:
  11:fltk-1.3.4-1/src/fl_gtk.cxx ****   11              		.section	.text._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
  12:fltk-1.3.4-1/src/fl_gtk.cxx ****   12              		.weak	_Z6fl_pieiiiidd
  13:fltk-1.3.4-1/src/fl_gtk.cxx ****   14              	_Z6fl_pieiiiidd:
  14:fltk-1.3.4-1/src/fl_gtk.cxx ****   15              	.LFB425:
  15:fltk-1.3.4-1/src/fl_gtk.cxx ****   16              		.file 1 "fltk-1.3.4-1/FL/fl_draw.H"
  16:fltk-1.3.4-1/src/fl_gtk.cxx ****    1:fltk-1.3.4-1/FL/fl_draw.H **** //
  17:fltk-1.3.4-1/src/fl_gtk.cxx ****    2:fltk-1.3.4-1/FL/fl_draw.H **** // "$Id: fl_draw.H 11977 2016-09-25 11:07:06Z AlbrechtS $"
  18:fltk-1.3.4-1/src/fl_gtk.cxx ****    3:fltk-1.3.4-1/FL/fl_draw.H **** //
  19:fltk-1.3.4-1/src/fl_gtk.cxx ****    4:fltk-1.3.4-1/FL/fl_draw.H **** // Portable drawing function header file for the Fast Light Too
  20:fltk-1.3.4-1/src/fl_gtk.cxx ****    5:fltk-1.3.4-1/FL/fl_draw.H **** //
  21:fltk-1.3.4-1/src/fl_gtk.cxx ****    6:fltk-1.3.4-1/FL/fl_draw.H **** // Copyright 1998-2016 by Bill Spitzak and others.
  22:fltk-1.3.4-1/src/fl_gtk.cxx ****    7:fltk-1.3.4-1/FL/fl_draw.H **** //
  23:fltk-1.3.4-1/src/fl_gtk.cxx ****    8:fltk-1.3.4-1/FL/fl_draw.H **** // This library is free software. Distribution and use rights a
  24:fltk-1.3.4-1/src/fl_gtk.cxx ****    9:fltk-1.3.4-1/FL/fl_draw.H **** // the file "COPYING" which should have been included with this
  25:fltk-1.3.4-1/src/fl_gtk.cxx ****   10:fltk-1.3.4-1/FL/fl_draw.H **** // file is missing or damaged, see the license at:
  26:fltk-1.3.4-1/src/fl_gtk.cxx ****   11:fltk-1.3.4-1/FL/fl_draw.H **** //
  27:fltk-1.3.4-1/src/fl_gtk.cxx ****   12:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/COPYING.php
  28:fltk-1.3.4-1/src/fl_gtk.cxx ****   13:fltk-1.3.4-1/FL/fl_draw.H **** //
  29:fltk-1.3.4-1/src/fl_gtk.cxx ****   14:fltk-1.3.4-1/FL/fl_draw.H **** // Please report all bugs and problems on the following page:
  30:fltk-1.3.4-1/src/fl_gtk.cxx ****   15:fltk-1.3.4-1/FL/fl_draw.H **** //
  31:fltk-1.3.4-1/src/fl_gtk.cxx ****   16:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/str.php
  32:fltk-1.3.4-1/src/fl_gtk.cxx ****   17:fltk-1.3.4-1/FL/fl_draw.H **** //
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   18:fltk-1.3.4-1/FL/fl_draw.H **** 
  34:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
  35:fltk-1.3.4-1/src/fl_gtk.cxx ****   20:fltk-1.3.4-1/FL/fl_draw.H ****   \file fl_draw.H
  36:fltk-1.3.4-1/src/fl_gtk.cxx ****   21:fltk-1.3.4-1/FL/fl_draw.H ****   \brief utility header to pull drawing functions together
  37:fltk-1.3.4-1/src/fl_gtk.cxx ****   22:fltk-1.3.4-1/FL/fl_draw.H **** */
  38:fltk-1.3.4-1/src/fl_gtk.cxx ****   23:fltk-1.3.4-1/FL/fl_draw.H **** 
  39:fltk-1.3.4-1/src/fl_gtk.cxx ****   24:fltk-1.3.4-1/FL/fl_draw.H **** #ifndef fl_draw_H
  40:fltk-1.3.4-1/src/fl_gtk.cxx ****   25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
  41:fltk-1.3.4-1/src/fl_gtk.cxx ****   26:fltk-1.3.4-1/FL/fl_draw.H **** 
  42:fltk-1.3.4-1/src/fl_gtk.cxx ****   27:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/x.H>	      // for Fl_Region
  43:fltk-1.3.4-1/src/fl_gtk.cxx ****   28:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Enumerations.H>  // for the color names
  44:fltk-1.3.4-1/src/fl_gtk.cxx ****   29:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Window.H>     // for fl_set_spot()
  45:fltk-1.3.4-1/src/fl_gtk.cxx ****   30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
  46:fltk-1.3.4-1/src/fl_gtk.cxx ****   31:fltk-1.3.4-1/FL/fl_draw.H **** 
  47:fltk-1.3.4-1/src/fl_gtk.cxx ****   32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
  48:fltk-1.3.4-1/src/fl_gtk.cxx ****   33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
  49:fltk-1.3.4-1/src/fl_gtk.cxx ****   34:fltk-1.3.4-1/FL/fl_draw.H **** 
  50:fltk-1.3.4-1/src/fl_gtk.cxx ****   35:fltk-1.3.4-1/FL/fl_draw.H **** // Label flags...
  51:fltk-1.3.4-1/src/fl_gtk.cxx ****   36:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT extern char fl_draw_shortcut;
  52:fltk-1.3.4-1/src/fl_gtk.cxx ****   37:fltk-1.3.4-1/FL/fl_draw.H **** 
  53:fltk-1.3.4-1/src/fl_gtk.cxx ****   38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
  54:fltk-1.3.4-1/src/fl_gtk.cxx ****   39:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  55:fltk-1.3.4-1/src/fl_gtk.cxx ****   40:fltk-1.3.4-1/FL/fl_draw.H **** */
  56:fltk-1.3.4-1/src/fl_gtk.cxx ****   41:fltk-1.3.4-1/FL/fl_draw.H **** 
  57:fltk-1.3.4-1/src/fl_gtk.cxx ****   42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
  58:fltk-1.3.4-1/src/fl_gtk.cxx ****   43:fltk-1.3.4-1/FL/fl_draw.H **** /**
  59:fltk-1.3.4-1/src/fl_gtk.cxx ****   44:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  60:fltk-1.3.4-1/src/fl_gtk.cxx ****   45:fltk-1.3.4-1/FL/fl_draw.H ****  For colormapped displays, a color cell will be allocated out o
  61:fltk-1.3.4-1/src/fl_gtk.cxx ****   46:fltk-1.3.4-1/FL/fl_draw.H ****  \p fl_colormap the first time you use a color. If the colormap
  62:fltk-1.3.4-1/src/fl_gtk.cxx ****   47:fltk-1.3.4-1/FL/fl_draw.H ****  then a least-squares algorithm is used to find the closest col
  63:fltk-1.3.4-1/src/fl_gtk.cxx ****   48:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  64:fltk-1.3.4-1/src/fl_gtk.cxx ****   49:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
  65:fltk-1.3.4-1/src/fl_gtk.cxx ****   50:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] c color 
  66:fltk-1.3.4-1/src/fl_gtk.cxx ****   51:fltk-1.3.4-1/FL/fl_draw.H ****  */
  67:fltk-1.3.4-1/src/fl_gtk.cxx ****   52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c);
  68:fltk-1.3.4-1/src/fl_gtk.cxx ****   53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead *
  69:fltk-1.3.4-1/src/fl_gtk.cxx ****   54:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_color(int c) {fl_color((Fl_Color)c);}
  70:fltk-1.3.4-1/src/fl_gtk.cxx ****   55:fltk-1.3.4-1/FL/fl_draw.H **** /**
  71:fltk-1.3.4-1/src/fl_gtk.cxx ****   56:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  72:fltk-1.3.4-1/src/fl_gtk.cxx ****   57:fltk-1.3.4-1/FL/fl_draw.H ****  The closest possible match to the RGB color is used.
  73:fltk-1.3.4-1/src/fl_gtk.cxx ****   58:fltk-1.3.4-1/FL/fl_draw.H ****  The RGB color is used directly on TrueColor displays.
  74:fltk-1.3.4-1/src/fl_gtk.cxx ****   59:fltk-1.3.4-1/FL/fl_draw.H ****  For colormap visuals the nearest index in the gray
  75:fltk-1.3.4-1/src/fl_gtk.cxx ****   60:fltk-1.3.4-1/FL/fl_draw.H ****  ramp or color cube is used.
  76:fltk-1.3.4-1/src/fl_gtk.cxx ****   61:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  77:fltk-1.3.4-1/src/fl_gtk.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
  78:fltk-1.3.4-1/src/fl_gtk.cxx ****   63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
  79:fltk-1.3.4-1/src/fl_gtk.cxx ****   64:fltk-1.3.4-1/FL/fl_draw.H ****  */
  80:fltk-1.3.4-1/src/fl_gtk.cxx ****   65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_dr
  81:fltk-1.3.4-1/src/fl_gtk.cxx ****   66:fltk-1.3.4-1/FL/fl_draw.H **** /**
  82:fltk-1.3.4-1/src/fl_gtk.cxx ****   67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
  83:fltk-1.3.4-1/src/fl_gtk.cxx ****   68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
  84:fltk-1.3.4-1/src/fl_gtk.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
  85:fltk-1.3.4-1/src/fl_gtk.cxx ****   70:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Color fl_color() {return fl_graphics_driver->color();
  86:fltk-1.3.4-1/src/fl_gtk.cxx ****   71:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
  87:fltk-1.3.4-1/src/fl_gtk.cxx ****   72:fltk-1.3.4-1/FL/fl_draw.H **** 
  88:fltk-1.3.4-1/src/fl_gtk.cxx ****   73:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_drawings
  89:fltk-1.3.4-1/src/fl_gtk.cxx ****   74:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  90:fltk-1.3.4-1/src/fl_gtk.cxx ****   75:fltk-1.3.4-1/FL/fl_draw.H **** */
  91:fltk-1.3.4-1/src/fl_gtk.cxx ****   76:fltk-1.3.4-1/FL/fl_draw.H **** // clip:
  92:fltk-1.3.4-1/src/fl_gtk.cxx ****   77:fltk-1.3.4-1/FL/fl_draw.H **** /**
  93:fltk-1.3.4-1/src/fl_gtk.cxx ****   78:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
  94:fltk-1.3.4-1/src/fl_gtk.cxx ****   79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
  95:fltk-1.3.4-1/src/fl_gtk.cxx ****   80:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
  96:fltk-1.3.4-1/src/fl_gtk.cxx ****   81:fltk-1.3.4-1/FL/fl_draw.H ****  */
  97:fltk-1.3.4-1/src/fl_gtk.cxx ****   82:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_clip(int x, int y, int w, int h) {fl_graphi
  98:fltk-1.3.4-1/src/fl_gtk.cxx ****   83:fltk-1.3.4-1/FL/fl_draw.H **** /**
  99:fltk-1.3.4-1/src/fl_gtk.cxx ****   84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 100:fltk-1.3.4-1/src/fl_gtk.cxx ****   85:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack (deprecated).
 101:fltk-1.3.4-1/src/fl_gtk.cxx ****   86:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
 102:fltk-1.3.4-1/src/fl_gtk.cxx ****   87:fltk-1.3.4-1/FL/fl_draw.H ****  \deprecated
 103:fltk-1.3.4-1/src/fl_gtk.cxx ****   88:fltk-1.3.4-1/FL/fl_draw.H ****    fl_clip(int, int, int, int) is deprecated and will be remove
 104:fltk-1.3.4-1/src/fl_gtk.cxx ****   89:fltk-1.3.4-1/FL/fl_draw.H ****    Please use fl_push_clip(int x, int y, int w, int h) instead.
 105:fltk-1.3.4-1/src/fl_gtk.cxx ****   90:fltk-1.3.4-1/FL/fl_draw.H ****  */
 106:fltk-1.3.4-1/src/fl_gtk.cxx ****   91:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_clip fl_push_clip
 107:fltk-1.3.4-1/src/fl_gtk.cxx ****   92:fltk-1.3.4-1/FL/fl_draw.H **** /**
 108:fltk-1.3.4-1/src/fl_gtk.cxx ****   93:fltk-1.3.4-1/FL/fl_draw.H ****  Pushes an empty clip region onto the stack so nothing will be 
 109:fltk-1.3.4-1/src/fl_gtk.cxx ****   94:fltk-1.3.4-1/FL/fl_draw.H ****  */
 110:fltk-1.3.4-1/src/fl_gtk.cxx ****   95:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_no_clip() {fl_graphics_driver->push_no_clip
 111:fltk-1.3.4-1/src/fl_gtk.cxx ****   96:fltk-1.3.4-1/FL/fl_draw.H **** /**
 112:fltk-1.3.4-1/src/fl_gtk.cxx ****   97:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the previous clip region.
 113:fltk-1.3.4-1/src/fl_gtk.cxx ****   98:fltk-1.3.4-1/FL/fl_draw.H ****  
 114:fltk-1.3.4-1/src/fl_gtk.cxx ****   99:fltk-1.3.4-1/FL/fl_draw.H ****  You must call fl_pop_clip() once for every time you call fl_pu
 115:fltk-1.3.4-1/src/fl_gtk.cxx ****  100:fltk-1.3.4-1/FL/fl_draw.H ****  Unpredictable results may occur if the clip stack is not empty
 116:fltk-1.3.4-1/src/fl_gtk.cxx ****  101:fltk-1.3.4-1/FL/fl_draw.H ****  you return to FLTK.
 117:fltk-1.3.4-1/src/fl_gtk.cxx ****  102:fltk-1.3.4-1/FL/fl_draw.H ****  */
 118:fltk-1.3.4-1/src/fl_gtk.cxx ****  103:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_clip() {fl_graphics_driver->pop_clip(); }
 119:fltk-1.3.4-1/src/fl_gtk.cxx ****  104:fltk-1.3.4-1/FL/fl_draw.H **** /**
 120:fltk-1.3.4-1/src/fl_gtk.cxx ****  105:fltk-1.3.4-1/FL/fl_draw.H ****  Does the rectangle intersect the current clip region?
 121:fltk-1.3.4-1/src/fl_gtk.cxx ****  106:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 122:fltk-1.3.4-1/src/fl_gtk.cxx ****  107:fltk-1.3.4-1/FL/fl_draw.H ****  \returns non-zero if any of the rectangle intersects the curre
 123:fltk-1.3.4-1/src/fl_gtk.cxx ****  108:fltk-1.3.4-1/FL/fl_draw.H ****  region. If this returns 0 you don't have to draw the object.
 124:fltk-1.3.4-1/src/fl_gtk.cxx ****  109:fltk-1.3.4-1/FL/fl_draw.H ****  
 125:fltk-1.3.4-1/src/fl_gtk.cxx ****  110:fltk-1.3.4-1/FL/fl_draw.H ****  \note
 126:fltk-1.3.4-1/src/fl_gtk.cxx ****  111:fltk-1.3.4-1/FL/fl_draw.H ****  Under X this returns 2 if the rectangle is partially clipped, 
 127:fltk-1.3.4-1/src/fl_gtk.cxx ****  112:fltk-1.3.4-1/FL/fl_draw.H ****  and 1 if it is entirely inside the clip region.
 128:fltk-1.3.4-1/src/fl_gtk.cxx ****  113:fltk-1.3.4-1/FL/fl_draw.H ****  */
 129:fltk-1.3.4-1/src/fl_gtk.cxx ****  114:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_not_clipped(int x, int y, int w, int h) {return f
 130:fltk-1.3.4-1/src/fl_gtk.cxx ****  115:fltk-1.3.4-1/FL/fl_draw.H **** /**
 131:fltk-1.3.4-1/src/fl_gtk.cxx ****  116:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the rectangle with the current clip region and retu
 132:fltk-1.3.4-1/src/fl_gtk.cxx ****  117:fltk-1.3.4-1/FL/fl_draw.H ****  bounding box of the result.
 133:fltk-1.3.4-1/src/fl_gtk.cxx ****  118:fltk-1.3.4-1/FL/fl_draw.H ****  
 134:fltk-1.3.4-1/src/fl_gtk.cxx ****  119:fltk-1.3.4-1/FL/fl_draw.H ****  Returns non-zero if the resulting rectangle is different to th
 135:fltk-1.3.4-1/src/fl_gtk.cxx ****  120:fltk-1.3.4-1/FL/fl_draw.H ****  This can be used to limit the necessary drawing to a rectangle
 136:fltk-1.3.4-1/src/fl_gtk.cxx ****  121:fltk-1.3.4-1/FL/fl_draw.H ****  \p W and \p H are set to zero if the rectangle is completely o
 137:fltk-1.3.4-1/src/fl_gtk.cxx ****  122:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 138:fltk-1.3.4-1/src/fl_gtk.cxx ****  123:fltk-1.3.4-1/FL/fl_draw.H ****  \param[out] X,Y,W,H position and size of resulting bounding bo
 139:fltk-1.3.4-1/src/fl_gtk.cxx ****  124:fltk-1.3.4-1/FL/fl_draw.H ****  \returns Non-zero if the resulting rectangle is different to t
 140:fltk-1.3.4-1/src/fl_gtk.cxx ****  125:fltk-1.3.4-1/FL/fl_draw.H ****  */
 141:fltk-1.3.4-1/src/fl_gtk.cxx ****  126:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_clip_box(int x , int y, int w, int h, int& X, int
 142:fltk-1.3.4-1/src/fl_gtk.cxx ****  127:fltk-1.3.4-1/FL/fl_draw.H ****   {return fl_graphics_driver->clip_box(x,y,w,h,X,Y,W,H); }
 143:fltk-1.3.4-1/src/fl_gtk.cxx ****  128:fltk-1.3.4-1/FL/fl_draw.H **** /** Undoes any clobbering of clip done by your program */
 144:fltk-1.3.4-1/src/fl_gtk.cxx ****  129:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_restore_clip() { fl_graphics_driver->restore_cli
 145:fltk-1.3.4-1/src/fl_gtk.cxx ****  130:fltk-1.3.4-1/FL/fl_draw.H **** /**
 146:fltk-1.3.4-1/src/fl_gtk.cxx ****  131:fltk-1.3.4-1/FL/fl_draw.H ****  Replaces the top of the clipping stack with a clipping region 
 147:fltk-1.3.4-1/src/fl_gtk.cxx ****  132:fltk-1.3.4-1/FL/fl_draw.H ****  
 148:fltk-1.3.4-1/src/fl_gtk.cxx ****  133:fltk-1.3.4-1/FL/fl_draw.H ****  Fl_Region is an operating system specific type.
 149:fltk-1.3.4-1/src/fl_gtk.cxx ****  134:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r clipping region
 150:fltk-1.3.4-1/src/fl_gtk.cxx ****  135:fltk-1.3.4-1/FL/fl_draw.H ****  */
 151:fltk-1.3.4-1/src/fl_gtk.cxx ****  136:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_clip_region(Fl_Region r) { fl_graphics_driver->c
 152:fltk-1.3.4-1/src/fl_gtk.cxx ****  137:fltk-1.3.4-1/FL/fl_draw.H **** /**
 153:fltk-1.3.4-1/src/fl_gtk.cxx ****  138:fltk-1.3.4-1/FL/fl_draw.H ****  Returns the current clipping region.
 154:fltk-1.3.4-1/src/fl_gtk.cxx ****  139:fltk-1.3.4-1/FL/fl_draw.H ****  */
 155:fltk-1.3.4-1/src/fl_gtk.cxx ****  140:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Region fl_clip_region() { return fl_graphics_driver->
 156:fltk-1.3.4-1/src/fl_gtk.cxx ****  141:fltk-1.3.4-1/FL/fl_draw.H **** 
 157:fltk-1.3.4-1/src/fl_gtk.cxx ****  142:fltk-1.3.4-1/FL/fl_draw.H **** 
 158:fltk-1.3.4-1/src/fl_gtk.cxx ****  143:fltk-1.3.4-1/FL/fl_draw.H **** // points:
 159:fltk-1.3.4-1/src/fl_gtk.cxx ****  144:fltk-1.3.4-1/FL/fl_draw.H **** /**
 160:fltk-1.3.4-1/src/fl_gtk.cxx ****  145:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a single pixel at the given coordinates
  51              		.loc 2 160 0
  52              		.cfi_startproc
  53              	.LVL6:
  54              		.loc 2 160 0
  55 0000 4189F9   		movl	%edi, %r9d
  56              	.LVL7:
  57              	.LBB194:
  58              	.LBB195:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
  59              		.loc 1 304 0
  60 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  60      000000
  61              	.LVL8:
  62              	.LBE195:
  63              	.LBE194:
  64              		.loc 2 160 0
  65 000a 4189C8   		movl	%ecx, %r8d
  66              	.LVL9:
  67              	.LBB197:
  68              	.LBB196:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
  69              		.loc 1 304 0
  70 000d 89D1     		movl	%edx, %ecx
  71              	.LVL10:
  72 000f 89F2     		movl	%esi, %edx
  73              	.LVL11:
  74 0011 4489CE   		movl	%r9d, %esi
  75              	.LVL12:
  76 0014 488B07   		movq	(%rdi), %rax
  77 0017 488B8000 		movq	256(%rax), %rax
  77      010000
  78 001e FFE0     		jmp	*%rax
  79              	.LVL13:
  80              	.LBE196:
  81              	.LBE197:
  82              		.cfi_endproc
  83              	.LFE477:
  85              		.section	.text.unlikely._ZL8fl_arc_iiiiidd
  86              	.LCOLDE1:
  87              		.section	.text._ZL8fl_arc_iiiiidd
  88              	.LHOTE1:
  89              		.section	.text.unlikely._ZL4drawiiiiii,"ax",@progbits
  90              	.LCOLDB11:
  91              		.section	.text._ZL4drawiiiiii,"ax",@progbits
  92              	.LHOTB11:
  93              		.p2align 4,,15
  95              	_ZL4drawiiiiii:
  96              	.LFB478:
 161:fltk-1.3.4-1/src/fl_gtk.cxx ****  146:fltk-1.3.4-1/FL/fl_draw.H ****  */
 162:fltk-1.3.4-1/src/fl_gtk.cxx ****  147:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_point(int x, int y) { fl_graphics_driver->point(
 163:fltk-1.3.4-1/src/fl_gtk.cxx ****  148:fltk-1.3.4-1/FL/fl_draw.H **** 
 164:fltk-1.3.4-1/src/fl_gtk.cxx ****  149:fltk-1.3.4-1/FL/fl_draw.H **** // line type:
 165:fltk-1.3.4-1/src/fl_gtk.cxx ****  150:fltk-1.3.4-1/FL/fl_draw.H **** /**
 166:fltk-1.3.4-1/src/fl_gtk.cxx ****  151:fltk-1.3.4-1/FL/fl_draw.H ****  Sets how to draw lines (the "pen").
 167:fltk-1.3.4-1/src/fl_gtk.cxx ****  152:fltk-1.3.4-1/FL/fl_draw.H ****  If you change this it is your responsibility to set it back to
  97              		.loc 2 167 0
  98              		.cfi_startproc
  99              	.LVL14:
 100 0000 4157     		pushq	%r15
 101              		.cfi_def_cfa_offset 16
 102              		.cfi_offset 15, -16
 103 0002 4156     		pushq	%r14
 104              		.cfi_def_cfa_offset 24
 105              		.cfi_offset 14, -24
 106 0004 4155     		pushq	%r13
 107              		.cfi_def_cfa_offset 32
 108              		.cfi_offset 13, -32
 109 0006 4154     		pushq	%r12
 110              		.cfi_def_cfa_offset 40
 111              		.cfi_offset 12, -40
 112 0008 55       		pushq	%rbp
 113              		.cfi_def_cfa_offset 48
 114              		.cfi_offset 6, -48
 115 0009 53       		pushq	%rbx
 116              		.cfi_def_cfa_offset 56
 117              		.cfi_offset 3, -56
 118 000a 89FB     		movl	%edi, %ebx
 168:fltk-1.3.4-1/src/fl_gtk.cxx ****  153:fltk-1.3.4-1/FL/fl_draw.H ****  using \c fl_line_style(0).
 119              		.loc 2 168 0
 120 000c 438D3C09 		leal	(%r9,%r9), %edi
 121              	.LVL15:
 167:fltk-1.3.4-1/src/fl_gtk.cxx ****  153:fltk-1.3.4-1/FL/fl_draw.H ****  using \c fl_line_style(0).
 122              		.loc 2 167 0
 123 0010 4883EC18 		subq	$24, %rsp
 124              		.cfi_def_cfa_offset 80
 125              		.loc 2 168 0
 126 0014 39CF     		cmpl	%ecx, %edi
 127 0016 7C14     		jl	.L4
 128              		.loc 2 168 0 is_stmt 0 discriminator 1
 129 0018 8D41FF   		leal	-1(%rcx), %eax
 130 001b 4189C1   		movl	%eax, %r9d
 131              	.LVL16:
 132 001e 41C1E91F 		shrl	$31, %r9d
 133 0022 4101C1   		addl	%eax, %r9d
 134 0025 41D1F9   		sarl	%r9d
 135              	.LVL17:
 136 0028 438D3C09 		leal	(%r9,%r9), %edi
 137              	.L4:
 169:fltk-1.3.4-1/src/fl_gtk.cxx ****  154:fltk-1.3.4-1/FL/fl_draw.H ****  
 138              		.loc 2 169 0 is_stmt 1
 139 002c 4139F8   		cmpl	%edi, %r8d
 140 002f 7F15     		jg	.L5
 141              		.loc 2 169 0 is_stmt 0 discriminator 1
 142 0031 418D40FF 		leal	-1(%r8), %eax
 143 0035 4189C1   		movl	%eax, %r9d
 144              	.LVL18:
 145 0038 41C1E91F 		shrl	$31, %r9d
 146 003c 4101C1   		addl	%eax, %r9d
 147 003f 41D1F9   		sarl	%r9d
 148              	.LVL19:
 149 0042 438D3C09 		leal	(%r9,%r9), %edi
 150              	.L5:
 170:fltk-1.3.4-1/src/fl_gtk.cxx ****  155:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] style A bitmask which is a bitwise-OR of a line sty
 171:fltk-1.3.4-1/src/fl_gtk.cxx ****  156:fltk-1.3.4-1/FL/fl_draw.H ****  style, and a join style. If you don't specify a dash type you
 172:fltk-1.3.4-1/src/fl_gtk.cxx ****  157:fltk-1.3.4-1/FL/fl_draw.H ****  will get a solid line. If you don't specify a cap or join type
 151              		.loc 2 172 0 is_stmt 1
 152 0046 29F9     		subl	%edi, %ecx
 153              	.LVL20:
 173:fltk-1.3.4-1/src/fl_gtk.cxx ****  158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 154              		.loc 2 173 0
 155 0048 4129F8   		subl	%edi, %r8d
 156              	.LVL21:
 170:fltk-1.3.4-1/src/fl_gtk.cxx ****  155:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] style A bitmask which is a bitwise-OR of a line sty
 157              		.loc 2 170 0
 158 004b 458D2C31 		leal	(%r9,%rsi), %r13d
 159              	.LVL22:
 160 004f 4439C1   		cmpl	%r8d, %ecx
 161 0052 4489C5   		movl	%r8d, %ebp
 171:fltk-1.3.4-1/src/fl_gtk.cxx ****  157:fltk-1.3.4-1/FL/fl_draw.H ****  will get a solid line. If you don't specify a cap or join type
 162              		.loc 2 171 0
 163 0055 458D2411 		leal	(%r9,%rdx), %r12d
 164              	.LVL23:
 165 0059 0F4EE9   		cmovle	%ecx, %ebp
 172:fltk-1.3.4-1/src/fl_gtk.cxx ****  158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 166              		.loc 2 172 0
 167 005c 4189CF   		movl	%ecx, %r15d
 168              	.LVL24:
 169              		.loc 2 173 0
 170 005f 4589C6   		movl	%r8d, %r14d
 171              	.LVL25:
 174:fltk-1.3.4-1/src/fl_gtk.cxx ****  159:fltk-1.3.4-1/FL/fl_draw.H ****  fastest.
 175:fltk-1.3.4-1/src/fl_gtk.cxx ****  160:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] width The thickness of the lines in pixels. Zero re
 172              		.loc 2 175 0
 173 0062 83FD01   		cmpl	$1, %ebp
 174 0065 0F8E7601 		jle	.L3
 174      0000
 176:fltk-1.3.4-1/src/fl_gtk.cxx ****  161:fltk-1.3.4-1/FL/fl_draw.H ****  system defined default, which on both X and Windows is somewha
 177:fltk-1.3.4-1/src/fl_gtk.cxx ****  162:fltk-1.3.4-1/FL/fl_draw.H ****  different and nicer than 1.
 175              		.loc 2 177 0
 176 006b 83FB03   		cmpl	$3, %ebx
 177 006e 0F847C02 		je	.L30
 177      0000
 178              	.LVL26:
 178:fltk-1.3.4-1/src/fl_gtk.cxx ****  163:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] dashes A pointer to an array of dash lengths, measu
 179              		.loc 2 178 0 discriminator 4
 180 0074 83FB01   		cmpl	$1, %ebx
 177:fltk-1.3.4-1/src/fl_gtk.cxx ****  163:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] dashes A pointer to an array of dash lengths, measu
 181              		.loc 2 177 0 discriminator 4
 182 0077 41B90000 		movl	$_ZL8fl_arc_iiiiidd, %r9d
 182      0000
 183              	.LVL27:
 184              		.loc 2 178 0 discriminator 4
 185 007d 0F8EBD00 		jle	.L43
 185      0000
 186              	.LVL28:
 179:fltk-1.3.4-1/src/fl_gtk.cxx ****  164:fltk-1.3.4-1/FL/fl_draw.H ****  The first location is how long to draw a solid portion, the ne
 187              		.loc 2 179 0
 188 0083 4539F7   		cmpl	%r14d, %r15d
 189 0086 0F8E6401 		jle	.L10
 189      0000
 190              	.L48:
 191 008c 438D443D 		leal	0(%r13,%r15), %eax
 191      00
 192 0091 F20F100D 		movsd	.LC5(%rip), %xmm1
 192      00000000 
 193 0099 F20F1005 		movsd	.LC8(%rip), %xmm0
 193      00000000 
 194 00a1 4C890C24 		movq	%r9, (%rsp)
 195 00a5 89C7     		movl	%eax, %edi
 196 00a7 8944240C 		movl	%eax, 12(%rsp)
 197 00ab 89E9     		movl	%ebp, %ecx
 198 00ad 29EF     		subl	%ebp, %edi
 199 00af 89EA     		movl	%ebp, %edx
 200 00b1 4489E6   		movl	%r12d, %esi
 201 00b4 41FFD1   		call	*%r9
 202              	.LVL29:
 203 00b7 4C8B0C24 		movq	(%rsp), %r9
 180:fltk-1.3.4-1/src/fl_gtk.cxx ****  165:fltk-1.3.4-1/FL/fl_draw.H ****  is how long to draw the gap, then the solid, etc. It is termin
 204              		.loc 2 180 0
 205 00bb F20F100D 		movsd	.LC4(%rip), %xmm1
 205      00000000 
 206 00c3 F20F1005 		movsd	.LC5(%rip), %xmm0
 206      00000000 
 207              	.L26:
 208              		.loc 2 180 0 is_stmt 0 discriminator 8
 209 00cb 438D0434 		leal	(%r12,%r14), %eax
 210 00cf 89E9     		movl	%ebp, %ecx
 211 00d1 89EA     		movl	%ebp, %edx
 212 00d3 4489EF   		movl	%r13d, %edi
 213 00d6 89C6     		movl	%eax, %esi
 214 00d8 890424   		movl	%eax, (%rsp)
 215 00db 29EE     		subl	%ebp, %esi
 216 00dd 41FFD1   		call	*%r9
 217              	.LVL30:
 181:fltk-1.3.4-1/src/fl_gtk.cxx ****  166:fltk-1.3.4-1/FL/fl_draw.H ****  with a zero-length entry. A \c NULL pointer or a zero-length
 182:fltk-1.3.4-1/src/fl_gtk.cxx ****  167:fltk-1.3.4-1/FL/fl_draw.H ****  array results in a solid line. Odd array sizes are not support
 183:fltk-1.3.4-1/src/fl_gtk.cxx ****  168:fltk-1.3.4-1/FL/fl_draw.H ****  and result in undefined behavior.
 184:fltk-1.3.4-1/src/fl_gtk.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 185:fltk-1.3.4-1/src/fl_gtk.cxx ****  170:fltk-1.3.4-1/FL/fl_draw.H ****  \note      Because of how line styles are implemented on Win32
 186:fltk-1.3.4-1/src/fl_gtk.cxx ****  171:fltk-1.3.4-1/FL/fl_draw.H ****  you \e must set the line style \e after setting the drawing
 187:fltk-1.3.4-1/src/fl_gtk.cxx ****  172:fltk-1.3.4-1/FL/fl_draw.H ****  color. If you set the color after the line style you will lose
 188:fltk-1.3.4-1/src/fl_gtk.cxx ****  173:fltk-1.3.4-1/FL/fl_draw.H ****  the line style settings.
 218              		.loc 2 188 0 is_stmt 1 discriminator 8
 219 00e0 83FB03   		cmpl	$3, %ebx
 220 00e3 0F841F02 		je	.L44
 220      0000
 189:fltk-1.3.4-1/src/fl_gtk.cxx ****  174:fltk-1.3.4-1/FL/fl_draw.H ****  \note      The \p dashes array does not work under Windows 95,
 190:fltk-1.3.4-1/src/fl_gtk.cxx ****  175:fltk-1.3.4-1/FL/fl_draw.H ****  since those operating systems do not support complex line styl
 191:fltk-1.3.4-1/src/fl_gtk.cxx ****  176:fltk-1.3.4-1/FL/fl_draw.H ****  */
 192:fltk-1.3.4-1/src/fl_gtk.cxx ****  177:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line_style(int style, int width=0, char* dashes=
 193:fltk-1.3.4-1/src/fl_gtk.cxx ****  178:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 194:fltk-1.3.4-1/src/fl_gtk.cxx ****  179:fltk-1.3.4-1/FL/fl_draw.H ****   FL_SOLID	= 0,		///< line style: <tt>___________</tt>
 221              		.loc 2 194 0
 222 00e9 4539F7   		cmpl	%r14d, %r15d
 223 00ec 0F8DA601 		jge	.L18
 223      0000
 195:fltk-1.3.4-1/src/fl_gtk.cxx ****  180:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASH	= 1,		///< line style: <tt>_ _ _ _ _ _</tt>
 224              		.loc 2 195 0
 225 00f2 85DB     		testl	%ebx, %ebx
 226 00f4 0F85B000 		jne	.L21
 226      0000
 227              	.LVL31:
 228              	.L17:
 229              	.LBB198:
 230              	.LBB199:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 231              		.loc 1 270 0
 232 00fa 89E8     		movl	%ebp, %eax
 233 00fc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 233      000000
 234 0103 448B3424 		movl	(%rsp), %r14d
 235 0107 C1E81F   		shrl	$31, %eax
 236 010a 4489EE   		movl	%r13d, %esi
 237 010d 01E8     		addl	%ebp, %eax
 238 010f D1FD     		sarl	%ebp
 239              	.LVL32:
 240 0111 D1F8     		sarl	%eax
 241 0113 418D542C 		leal	-1(%r12,%rbp), %edx
 241      FF
 242              	.LVL33:
 243 0118 4129C6   		subl	%eax, %r14d
 244 011b 488B07   		movq	(%rdi), %rax
 245 011e 418D4E01 		leal	1(%r14), %ecx
 246 0122 488B4048 		movq	72(%rax), %rax
 247              	.LBE199:
 248              	.LBE198:
 196:fltk-1.3.4-1/src/fl_gtk.cxx ****  181:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DOT	= 2,		///< line style: <tt>. . . . . .</tt>
 197:fltk-1.3.4-1/src/fl_gtk.cxx ****  182:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOT	= 3,		///< line style: <tt>_ . _ . _ .</tt>
 198:fltk-1.3.4-1/src/fl_gtk.cxx ****  183:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOTDOT	= 4,		///< line style: <tt>_ . . _ . .</tt>
 199:fltk-1.3.4-1/src/fl_gtk.cxx ****  184:fltk-1.3.4-1/FL/fl_draw.H **** 
 200:fltk-1.3.4-1/src/fl_gtk.cxx ****  185:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_FLAT	= 0x100,	///< cap style: end is flat
 201:fltk-1.3.4-1/src/fl_gtk.cxx ****  186:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_ROUND	= 0x200,	///< cap style: end is round
 202:fltk-1.3.4-1/src/fl_gtk.cxx ****  187:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_SQUARE	= 0x300,	///< cap style: end wraps end point
 249              		.loc 2 202 0
 250 0126 4883C418 		addq	$24, %rsp
 251              		.cfi_remember_state
 252              		.cfi_def_cfa_offset 56
 253 012a 5B       		popq	%rbx
 254              		.cfi_def_cfa_offset 48
 255              	.LVL34:
 256 012b 5D       		popq	%rbp
 257              		.cfi_def_cfa_offset 40
 258 012c 415C     		popq	%r12
 259              		.cfi_def_cfa_offset 32
 260              	.LVL35:
 261 012e 415D     		popq	%r13
 262              		.cfi_def_cfa_offset 24
 263              	.LVL36:
 264 0130 415E     		popq	%r14
 265              		.cfi_def_cfa_offset 16
 266 0132 415F     		popq	%r15
 267              		.cfi_def_cfa_offset 8
 268              	.LBB200:
 269              	.LBB201:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 270              		.loc 1 255 0
 271 0134 FFE0     		jmp	*%rax
 272              	.LVL37:
 273 0136 662E0F1F 		.p2align 4,,10
 273      84000000 
 273      0000
 274              		.p2align 3
 275              	.L43:
 276              		.cfi_restore_state
 277              	.LBE201:
 278              	.LBE200:
 181:fltk-1.3.4-1/src/fl_gtk.cxx ****  167:fltk-1.3.4-1/FL/fl_draw.H ****  array results in a solid line. Odd array sizes are not support
 279              		.loc 2 181 0
 280 0140 85DB     		testl	%ebx, %ebx
 281 0142 0F84E800 		je	.L45
 281      0000
 185:fltk-1.3.4-1/src/fl_gtk.cxx ****  171:fltk-1.3.4-1/FL/fl_draw.H ****  you \e must set the line style \e after setting the drawing
 282              		.loc 2 185 0
 283 0148 4439C1   		cmpl	%r8d, %ecx
 284 014b 0F8FFF01 		jg	.L46
 284      0000
 285 0151 438D0404 		leal	(%r12,%r8), %eax
 286 0155 F20F1005 		movsd	.LC6(%rip), %xmm0
 286      00000000 
 287 015d F20F100D 		movsd	.LC2(%rip), %xmm1
 287      00000000 
 288 0165 89E9     		movl	%ebp, %ecx
 289 0167 89C6     		movl	%eax, %esi
 290 0169 89EA     		movl	%ebp, %edx
 291 016b 4489EF   		movl	%r13d, %edi
 292 016e 29EE     		subl	%ebp, %esi
 293 0170 890424   		movl	%eax, (%rsp)
 294 0173 E8000000 		call	_ZL8fl_arc_iiiiidd
 294      00
 295              	.LVL38:
 186:fltk-1.3.4-1/src/fl_gtk.cxx ****  172:fltk-1.3.4-1/FL/fl_draw.H ****  color. If you set the color after the line style you will lose
 296              		.loc 2 186 0
 297 0178 F20F1005 		movsd	.LC2(%rip), %xmm0
 297      00000000 
 298              	.L28:
 186:fltk-1.3.4-1/src/fl_gtk.cxx ****  172:fltk-1.3.4-1/FL/fl_draw.H ****  color. If you set the color after the line style you will lose
 299              		.loc 2 186 0 is_stmt 0 discriminator 4
 300 0180 438D443D 		leal	0(%r13,%r15), %eax
 300      00
 301 0185 F20F100D 		movsd	.LC7(%rip), %xmm1
 301      00000000 
 302 018d 89E9     		movl	%ebp, %ecx
 303 018f 89EA     		movl	%ebp, %edx
 304 0191 4489E6   		movl	%r12d, %esi
 305 0194 89C7     		movl	%eax, %edi
 306 0196 8944240C 		movl	%eax, 12(%rsp)
 307 019a 29EF     		subl	%ebp, %edi
 308 019c E8000000 		call	_ZL8fl_arc_iiiiidd
 308      00
 309              	.LVL39:
 194:fltk-1.3.4-1/src/fl_gtk.cxx ****  180:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASH	= 1,		///< line style: <tt>_ _ _ _ _ _</tt>
 310              		.loc 2 194 0 is_stmt 1 discriminator 4
 311 01a1 4539F7   		cmpl	%r14d, %r15d
 312 01a4 0F8DEE00 		jge	.L18
 312      0000
 313              	.LVL40:
 314              	.L21:
 315              	.LBB204:
 316              	.LBB205:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 317              		.loc 1 270 0 discriminator 1
 318 01aa 89E8     		movl	%ebp, %eax
 319 01ac 8B0C24   		movl	(%rsp), %ecx
 320 01af 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 320      000000
 321 01b6 C1E81F   		shrl	$31, %eax
 322 01b9 8B74240C 		movl	12(%rsp), %esi
 323 01bd 01E8     		addl	%ebp, %eax
 324 01bf D1F8     		sarl	%eax
 325 01c1 29C1     		subl	%eax, %ecx
 326 01c3 89E8     		movl	%ebp, %eax
 327 01c5 83EE01   		subl	$1, %esi
 328 01c8 D1F8     		sarl	%eax
 329 01ca 83C101   		addl	$1, %ecx
 330 01cd 418D5404 		leal	-1(%r12,%rax), %edx
 330      FF
 331              	.LVL41:
 332 01d2 488B07   		movq	(%rdi), %rax
 333 01d5 FF5048   		call	*72(%rax)
 334              	.LVL42:
 335              	.LBE205:
 336              	.LBE204:
 196:fltk-1.3.4-1/src/fl_gtk.cxx ****  182:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOT	= 3,		///< line style: <tt>_ . _ . _ .</tt>
 337              		.loc 2 196 0 discriminator 1
 338 01d8 83FB01   		cmpl	$1, %ebx
 339 01db 0F8519FF 		jne	.L17
 339      FFFF
 340              	.LVL43:
 341              	.L3:
 342              		.loc 2 202 0
 343 01e1 4883C418 		addq	$24, %rsp
 344              		.cfi_remember_state
 345              		.cfi_def_cfa_offset 56
 346 01e5 5B       		popq	%rbx
 347              		.cfi_def_cfa_offset 48
 348              	.LVL44:
 349 01e6 5D       		popq	%rbp
 350              		.cfi_def_cfa_offset 40
 351              	.LVL45:
 352 01e7 415C     		popq	%r12
 353              		.cfi_def_cfa_offset 32
 354              	.LVL46:
 355 01e9 415D     		popq	%r13
 356              		.cfi_def_cfa_offset 24
 357              	.LVL47:
 358 01eb 415E     		popq	%r14
 359              		.cfi_def_cfa_offset 16
 360              	.LVL48:
 361 01ed 415F     		popq	%r15
 362              		.cfi_def_cfa_offset 8
 363 01ef C3       		ret
 364              	.LVL49:
 365              		.p2align 4,,10
 366              		.p2align 3
 367              	.L10:
 368              		.cfi_restore_state
 179:fltk-1.3.4-1/src/fl_gtk.cxx ****  165:fltk-1.3.4-1/FL/fl_draw.H ****  is how long to draw the gap, then the solid, etc. It is termin
 369              		.loc 2 179 0
 370 01f0 438D443D 		leal	0(%r13,%r15), %eax
 370      00
 371 01f5 F20F100D 		movsd	.LC3(%rip), %xmm1
 371      00000000 
 372 01fd 660FEFC0 		pxor	%xmm0, %xmm0
 373 0201 4C890C24 		movq	%r9, (%rsp)
 374 0205 89C7     		movl	%eax, %edi
 375 0207 8944240C 		movl	%eax, 12(%rsp)
 376 020b 89E9     		movl	%ebp, %ecx
 377 020d 29EF     		subl	%ebp, %edi
 378 020f 89EA     		movl	%ebp, %edx
 379 0211 4489E6   		movl	%r12d, %esi
 380 0214 41FFD1   		call	*%r9
 381              	.LVL50:
 180:fltk-1.3.4-1/src/fl_gtk.cxx ****  166:fltk-1.3.4-1/FL/fl_draw.H ****  with a zero-length entry. A \c NULL pointer or a zero-length
 382              		.loc 2 180 0
 383 0217 F20F100D 		movsd	.LC2(%rip), %xmm1
 383      00000000 
 384 021f 4C8B0C24 		movq	(%rsp), %r9
 385 0223 F20F1005 		movsd	.LC3(%rip), %xmm0
 385      00000000 
 386 022b E99BFEFF 		jmp	.L26
 386      FF
 387              	.LVL51:
 388              		.p2align 4,,10
 389              		.p2align 3
 390              	.L45:
 182:fltk-1.3.4-1/src/fl_gtk.cxx ****  168:fltk-1.3.4-1/FL/fl_draw.H ****  and result in undefined behavior.
 391              		.loc 2 182 0
 392 0230 4439C1   		cmpl	%r8d, %ecx
 393 0233 0F8F4F01 		jg	.L47
 393      0000
 394 0239 418D440D 		leal	0(%r13,%rcx), %eax
 394      00
 395 023e F20F1005 		movsd	.LC10(%rip), %xmm0
 395      00000000 
 396 0246 F20F100D 		movsd	.LC3(%rip), %xmm1
 396      00000000 
 397 024e 89E9     		movl	%ebp, %ecx
 398 0250 89C7     		movl	%eax, %edi
 399 0252 89EA     		movl	%ebp, %edx
 400 0254 4489E6   		movl	%r12d, %esi
 401 0257 29EF     		subl	%ebp, %edi
 402 0259 8944240C 		movl	%eax, 12(%rsp)
 403 025d E8000000 		call	_ZL8fl_arc_iiiiidd
 403      00
 404              	.LVL52:
 183:fltk-1.3.4-1/src/fl_gtk.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 405              		.loc 2 183 0
 406 0262 F20F1005 		movsd	.LC3(%rip), %xmm0
 406      00000000 
 407              	.L27:
 183:fltk-1.3.4-1/src/fl_gtk.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 408              		.loc 2 183 0 is_stmt 0 discriminator 4
 409 026a 438D0434 		leal	(%r12,%r14), %eax
 410 026e F20F100D 		movsd	.LC6(%rip), %xmm1
 410      00000000 
 411 0276 89E9     		movl	%ebp, %ecx
 412 0278 89EA     		movl	%ebp, %edx
 413 027a 4489EF   		movl	%r13d, %edi
 414 027d 89C6     		movl	%eax, %esi
 415 027f 890424   		movl	%eax, (%rsp)
 416 0282 29EE     		subl	%ebp, %esi
 417 0284 E8000000 		call	_ZL8fl_arc_iiiiidd
 417      00
 418              	.LVL53:
 194:fltk-1.3.4-1/src/fl_gtk.cxx ****  180:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASH	= 1,		///< line style: <tt>_ _ _ _ _ _</tt>
 419              		.loc 2 194 0 is_stmt 1 discriminator 4
 420 0289 4539F7   		cmpl	%r14d, %r15d
 421 028c 0F8C68FE 		jl	.L17
 421      FFFF
 422              	.LVL54:
 423              		.p2align 4,,10
 424 0292 660F1F44 		.p2align 3
 424      0000
 425              	.L18:
 197:fltk-1.3.4-1/src/fl_gtk.cxx ****  183:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOTDOT	= 4,		///< line style: <tt>_ . . _ . .</tt>
 426              		.loc 2 197 0
 427 0298 4539F7   		cmpl	%r14d, %r15d
 428 029b 0F8E40FF 		jle	.L3
 428      FFFF
 198:fltk-1.3.4-1/src/fl_gtk.cxx ****  184:fltk-1.3.4-1/FL/fl_draw.H **** 
 429              		.loc 2 198 0
 430 02a1 85DB     		testl	%ebx, %ebx
 431 02a3 0F851701 		jne	.L24
 431      0000
 432              	.L25:
 433              	.LVL55:
 434              	.LBB206:
 435              	.LBB202:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 436              		.loc 1 255 0
 437 02a9 89E8     		movl	%ebp, %eax
 438 02ab 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 438      000000
 439 02b2 448B7C24 		movl	12(%rsp), %r15d
 439      0C
 440 02b7 C1E81F   		shrl	$31, %eax
 441 02ba 4489E2   		movl	%r12d, %edx
 442 02bd 01E8     		addl	%ebp, %eax
 443 02bf D1FD     		sarl	%ebp
 444              	.LVL56:
 445 02c1 D1F8     		sarl	%eax
 446 02c3 418D742D 		leal	-1(%r13,%rbp), %esi
 446      FF
 447              	.LVL57:
 448 02c8 4129C7   		subl	%eax, %r15d
 449 02cb 488B07   		movq	(%rdi), %rax
 450 02ce 418D4F01 		leal	1(%r15), %ecx
 451 02d2 488B4030 		movq	48(%rax), %rax
 452              	.LBE202:
 453              	.LBE206:
 454              		.loc 2 202 0
 455 02d6 4883C418 		addq	$24, %rsp
 456              		.cfi_remember_state
 457              		.cfi_def_cfa_offset 56
 458 02da 5B       		popq	%rbx
 459              		.cfi_def_cfa_offset 48
 460              	.LVL58:
 461 02db 5D       		popq	%rbp
 462              		.cfi_def_cfa_offset 40
 463 02dc 415C     		popq	%r12
 464              		.cfi_def_cfa_offset 32
 465              	.LVL59:
 466 02de 415D     		popq	%r13
 467              		.cfi_def_cfa_offset 24
 468              	.LVL60:
 469 02e0 415E     		popq	%r14
 470              		.cfi_def_cfa_offset 16
 471 02e2 415F     		popq	%r15
 472              		.cfi_def_cfa_offset 8
 473              	.LBB207:
 474              	.LBB203:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 475              		.loc 1 255 0
 476 02e4 FFE0     		jmp	*%rax
 477              	.LVL61:
 478 02e6 662E0F1F 		.p2align 4,,10
 478      84000000 
 478      0000
 479              		.p2align 3
 480              	.L30:
 481              		.cfi_restore_state
 482              	.LBE203:
 483              	.LBE207:
 179:fltk-1.3.4-1/src/fl_gtk.cxx ****  165:fltk-1.3.4-1/FL/fl_draw.H ****  is how long to draw the gap, then the solid, etc. It is termin
 484              		.loc 2 179 0
 485 02f0 4539F7   		cmpl	%r14d, %r15d
 177:fltk-1.3.4-1/src/fl_gtk.cxx ****  163:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] dashes A pointer to an array of dash lengths, measu
 486              		.loc 2 177 0
 487 02f3 41B90000 		movl	$_Z6fl_pieiiiidd, %r9d
 487      0000
 488              	.LVL62:
 179:fltk-1.3.4-1/src/fl_gtk.cxx ****  165:fltk-1.3.4-1/FL/fl_draw.H ****  is how long to draw the gap, then the solid, etc. It is termin
 489              		.loc 2 179 0
 490 02f9 0F8EF1FE 		jle	.L10
 490      FFFF
 491 02ff E988FDFF 		jmp	.L48
 491      FF
 492              	.LVL63:
 493              		.p2align 4,,10
 494 0304 0F1F4000 		.p2align 3
 495              	.L44:
 189:fltk-1.3.4-1/src/fl_gtk.cxx ****  175:fltk-1.3.4-1/FL/fl_draw.H ****  since those operating systems do not support complex line styl
 496              		.loc 2 189 0
 497 0308 4539F7   		cmpl	%r14d, %r15d
 498 030b 0F8CEF00 		jl	.L49
 498      0000
 191:fltk-1.3.4-1/src/fl_gtk.cxx ****  177:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line_style(int style, int width=0, char* dashes=
 499              		.loc 2 191 0
 500 0311 0F8ECAFE 		jle	.L3
 500      FFFF
 501              	.LVL64:
 502              	.LBB208:
 503              	.LBB209:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 504              		.loc 1 206 0
 505 0317 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 505      000000
 506 031e 89EA     		movl	%ebp, %edx
 507 0320 D1FD     		sarl	%ebp
 508              	.LVL65:
 509 0322 83E2FE   		andl	$-2, %edx
 510              	.LVL66:
 511 0325 4489F9   		movl	%r15d, %ecx
 512 0328 428D742D 		leal	0(%rbp,%r13), %esi
 512      00
 513              	.LVL67:
 514 032d 29D1     		subl	%edx, %ecx
 515 032f 4589F0   		movl	%r14d, %r8d
 516 0332 4489E2   		movl	%r12d, %edx
 517 0335 488B07   		movq	(%rdi), %rax
 518 0338 488B4020 		movq	32(%rax), %rax
 519              	.LVL68:
 520              	.L36:
 521              	.LBE209:
 522              	.LBE208:
 523              		.loc 2 202 0
 524 033c 4883C418 		addq	$24, %rsp
 525              		.cfi_remember_state
 526              		.cfi_def_cfa_offset 56
 527              	.LVL69:
 528 0340 5B       		popq	%rbx
 529              		.cfi_def_cfa_offset 48
 530              	.LVL70:
 531 0341 5D       		popq	%rbp
 532              		.cfi_def_cfa_offset 40
 533 0342 415C     		popq	%r12
 534              		.cfi_def_cfa_offset 32
 535              	.LVL71:
 536 0344 415D     		popq	%r13
 537              		.cfi_def_cfa_offset 24
 538              	.LVL72:
 539 0346 415E     		popq	%r14
 540              		.cfi_def_cfa_offset 16
 541 0348 415F     		popq	%r15
 542              		.cfi_def_cfa_offset 8
 543              	.LBB211:
 544              	.LBB210:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 545              		.loc 1 206 0
 546 034a FFE0     		jmp	*%rax
 547              	.LVL73:
 548 034c 0F1F4000 		.p2align 4,,10
 549              		.p2align 3
 550              	.L46:
 551              		.cfi_restore_state
 552              	.LBE210:
 553              	.LBE211:
 185:fltk-1.3.4-1/src/fl_gtk.cxx ****  171:fltk-1.3.4-1/FL/fl_draw.H ****  you \e must set the line style \e after setting the drawing
 554              		.loc 2 185 0
 555 0350 438D0404 		leal	(%r12,%r8), %eax
 556 0354 F20F1005 		movsd	.LC6(%rip), %xmm0
 556      00000000 
 557 035c F20F100D 		movsd	.LC4(%rip), %xmm1
 557      00000000 
 558 0364 89E9     		movl	%ebp, %ecx
 559 0366 89C6     		movl	%eax, %esi
 560 0368 89EA     		movl	%ebp, %edx
 561 036a 4489EF   		movl	%r13d, %edi
 562 036d 29EE     		subl	%ebp, %esi
 563 036f 890424   		movl	%eax, (%rsp)
 564 0372 E8000000 		call	_ZL8fl_arc_iiiiidd
 564      00
 565              	.LVL74:
 186:fltk-1.3.4-1/src/fl_gtk.cxx ****  172:fltk-1.3.4-1/FL/fl_draw.H ****  color. If you set the color after the line style you will lose
 566              		.loc 2 186 0
 567 0377 F20F1005 		movsd	.LC4(%rip), %xmm0
 567      00000000 
 568 037f E9FCFDFF 		jmp	.L28
 568      FF
 569              		.p2align 4,,10
 570 0384 0F1F4000 		.p2align 3
 571              	.L47:
 182:fltk-1.3.4-1/src/fl_gtk.cxx ****  168:fltk-1.3.4-1/FL/fl_draw.H ****  and result in undefined behavior.
 572              		.loc 2 182 0
 573 0388 418D440D 		leal	0(%r13,%rcx), %eax
 573      00
 574 038d F20F1005 		movsd	.LC10(%rip), %xmm0
 574      00000000 
 575 0395 F20F100D 		movsd	.LC5(%rip), %xmm1
 575      00000000 
 576 039d 89E9     		movl	%ebp, %ecx
 577 039f 89C7     		movl	%eax, %edi
 578 03a1 89EA     		movl	%ebp, %edx
 579 03a3 4489E6   		movl	%r12d, %esi
 580 03a6 29EF     		subl	%ebp, %edi
 581 03a8 8944240C 		movl	%eax, 12(%rsp)
 582 03ac E8000000 		call	_ZL8fl_arc_iiiiidd
 582      00
 583              	.LVL75:
 183:fltk-1.3.4-1/src/fl_gtk.cxx ****  169:fltk-1.3.4-1/FL/fl_draw.H ****  
 584              		.loc 2 183 0
 585 03b1 F20F1005 		movsd	.LC5(%rip), %xmm0
 585      00000000 
 586 03b9 E9ACFEFF 		jmp	.L27
 586      FF
 587              	.LVL76:
 588 03be 6690     		.p2align 4,,10
 589              		.p2align 3
 590              	.L24:
 591              	.LBB212:
 592              	.LBB213:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 593              		.loc 1 255 0 discriminator 1
 594 03c0 89E8     		movl	%ebp, %eax
 595 03c2 8B4C240C 		movl	12(%rsp), %ecx
 596 03c6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 596      000000
 597 03cd C1E81F   		shrl	$31, %eax
 598 03d0 8B1424   		movl	(%rsp), %edx
 599 03d3 01E8     		addl	%ebp, %eax
 600 03d5 D1F8     		sarl	%eax
 601 03d7 29C1     		subl	%eax, %ecx
 602 03d9 89E8     		movl	%ebp, %eax
 603 03db 83EA01   		subl	$1, %edx
 604 03de D1F8     		sarl	%eax
 605 03e0 83C101   		addl	$1, %ecx
 606 03e3 418D7405 		leal	-1(%r13,%rax), %esi
 606      FF
 607              	.LVL77:
 608 03e8 488B07   		movq	(%rdi), %rax
 609 03eb FF5030   		call	*48(%rax)
 610              	.LVL78:
 611              	.LBE213:
 612              	.LBE212:
 199:fltk-1.3.4-1/src/fl_gtk.cxx ****  185:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_FLAT	= 0x100,	///< cap style: end is flat
 613              		.loc 2 199 0 discriminator 1
 614 03ee 83FB01   		cmpl	$1, %ebx
 615 03f1 0F84EAFD 		je	.L3
 615      FFFF
 616 03f7 E9ADFEFF 		jmp	.L25
 616      FF
 617              	.LVL79:
 618 03fc 0F1F4000 		.p2align 4,,10
 619              		.p2align 3
 620              	.L49:
 621              	.LBB214:
 622              	.LBB215:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 623              		.loc 1 206 0
 624 0400 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 624      000000
 625 0407 89E9     		movl	%ebp, %ecx
 626 0409 D1FD     		sarl	%ebp
 627              	.LVL80:
 628 040b 83E1FE   		andl	$-2, %ecx
 629              	.LVL81:
 630 040e 428D5425 		leal	0(%rbp,%r12), %edx
 630      00
 631              	.LVL82:
 632 0413 4129CE   		subl	%ecx, %r14d
 633              	.LVL83:
 634 0416 4489F9   		movl	%r15d, %ecx
 635 0419 488B37   		movq	(%rdi), %rsi
 636 041c 4589F0   		movl	%r14d, %r8d
 637 041f 488B4620 		movq	32(%rsi), %rax
 638 0423 4489EE   		movl	%r13d, %esi
 639 0426 E911FFFF 		jmp	.L36
 639      FF
 640              	.LBE215:
 641              	.LBE214:
 642              		.cfi_endproc
 643              	.LFE478:
 645              		.section	.text.unlikely._ZL4drawiiiiii
 646              	.LCOLDE11:
 647              		.section	.text._ZL4drawiiiiii
 648              	.LHOTE11:
 649              		.section	.text.unlikely._ZL18gtk_round_down_boxiiiij,"ax",@progbits
 650              	.LCOLDB15:
 651              		.section	.text._ZL18gtk_round_down_boxiiiij,"ax",@progbits
 652              	.LHOTB15:
 653              		.p2align 4,,15
 655              	_ZL18gtk_round_down_boxiiiij:
 656              	.LFB480:
 203:fltk-1.3.4-1/src/fl_gtk.cxx ****  188:fltk-1.3.4-1/FL/fl_draw.H **** 
 204:fltk-1.3.4-1/src/fl_gtk.cxx ****  189:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_MITER	= 0x1000,	///< join style: line join extends to
 205:fltk-1.3.4-1/src/fl_gtk.cxx ****  190:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_ROUND	= 0x2000,	///< join style: line join is rounded
 206:fltk-1.3.4-1/src/fl_gtk.cxx ****  191:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_BEVEL	= 0x3000	///< join style: line join is tidied
 207:fltk-1.3.4-1/src/fl_gtk.cxx ****  192:fltk-1.3.4-1/FL/fl_draw.H **** };
 208:fltk-1.3.4-1/src/fl_gtk.cxx ****  193:fltk-1.3.4-1/FL/fl_draw.H **** 
 209:fltk-1.3.4-1/src/fl_gtk.cxx ****  194:fltk-1.3.4-1/FL/fl_draw.H **** // rectangles tweaked to exactly fill the pixel rectangle:
 210:fltk-1.3.4-1/src/fl_gtk.cxx ****  195:fltk-1.3.4-1/FL/fl_draw.H **** 
 211:fltk-1.3.4-1/src/fl_gtk.cxx ****  196:fltk-1.3.4-1/FL/fl_draw.H **** /** 
 212:fltk-1.3.4-1/src/fl_gtk.cxx ****  197:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a 1-pixel border \e inside the given bounding box.
 213:fltk-1.3.4-1/src/fl_gtk.cxx ****  198:fltk-1.3.4-1/FL/fl_draw.H ****  This function is meant for quick drawing of simple boxes. The 
 214:fltk-1.3.4-1/src/fl_gtk.cxx ****  199:fltk-1.3.4-1/FL/fl_draw.H ****  undefined for line widths that are not 1.
 215:fltk-1.3.4-1/src/fl_gtk.cxx ****  200:fltk-1.3.4-1/FL/fl_draw.H ****  */
 216:fltk-1.3.4-1/src/fl_gtk.cxx ****  201:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h) { fl_graphics_d
 217:fltk-1.3.4-1/src/fl_gtk.cxx ****  202:fltk-1.3.4-1/FL/fl_draw.H **** 
 218:fltk-1.3.4-1/src/fl_gtk.cxx ****  203:fltk-1.3.4-1/FL/fl_draw.H **** /** Draws with passed color a 1-pixel border \e inside the give
 219:fltk-1.3.4-1/src/fl_gtk.cxx ****  204:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h, Fl_Color c) {fl
 220:fltk-1.3.4-1/src/fl_gtk.cxx ****  205:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with current color a rectangle that exactly fills th
 221:fltk-1.3.4-1/src/fl_gtk.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 222:fltk-1.3.4-1/src/fl_gtk.cxx ****  207:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the
 223:fltk-1.3.4-1/src/fl_gtk.cxx ****  208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {f
 224:fltk-1.3.4-1/src/fl_gtk.cxx ****  209:fltk-1.3.4-1/FL/fl_draw.H **** 
 225:fltk-1.3.4-1/src/fl_gtk.cxx ****  210:fltk-1.3.4-1/FL/fl_draw.H **** /**
 226:fltk-1.3.4-1/src/fl_gtk.cxx ****  211:fltk-1.3.4-1/FL/fl_draw.H ****   Colors a rectangle with "exactly" the passed <tt>r,g,b</tt> c
 227:fltk-1.3.4-1/src/fl_gtk.cxx ****  212:fltk-1.3.4-1/FL/fl_draw.H ****   On screens with less than 24 bits of color this is done by dr
 228:fltk-1.3.4-1/src/fl_gtk.cxx ****  213:fltk-1.3.4-1/FL/fl_draw.H ****   solid-colored block using fl_draw_image() so that the correct
 229:fltk-1.3.4-1/src/fl_gtk.cxx ****  214:fltk-1.3.4-1/FL/fl_draw.H ****   shade is produced.
 230:fltk-1.3.4-1/src/fl_gtk.cxx ****  215:fltk-1.3.4-1/FL/fl_draw.H ****   */
 231:fltk-1.3.4-1/src/fl_gtk.cxx ****  216:fltk-1.3.4-1/FL/fl_draw.H **** /* note: doxygen comment here to avoid triplication in os-speci
 232:fltk-1.3.4-1/src/fl_gtk.cxx ****  217:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_rectf(int x, int y, int w, int h, uchar r, uc
 233:fltk-1.3.4-1/src/fl_gtk.cxx ****  218:fltk-1.3.4-1/FL/fl_draw.H **** 
 234:fltk-1.3.4-1/src/fl_gtk.cxx ****  219:fltk-1.3.4-1/FL/fl_draw.H **** // line segments:
 235:fltk-1.3.4-1/src/fl_gtk.cxx ****  220:fltk-1.3.4-1/FL/fl_draw.H **** /**
 657              		.loc 2 235 0
 658              		.cfi_startproc
 659              	.LVL84:
 660 0000 4157     		pushq	%r15
 661              		.cfi_def_cfa_offset 16
 662              		.cfi_offset 15, -16
 663 0002 4156     		pushq	%r14
 664              		.cfi_def_cfa_offset 24
 665              		.cfi_offset 14, -24
 666 0004 4589C6   		movl	%r8d, %r14d
 667 0007 4155     		pushq	%r13
 668              		.cfi_def_cfa_offset 32
 669              		.cfi_offset 13, -32
 670 0009 4154     		pushq	%r12
 671              		.cfi_def_cfa_offset 40
 672              		.cfi_offset 12, -40
 673 000b 4189D5   		movl	%edx, %r13d
 674 000e 55       		pushq	%rbp
 675              		.cfi_def_cfa_offset 48
 676              		.cfi_offset 6, -48
 677 000f 53       		pushq	%rbx
 678              		.cfi_def_cfa_offset 56
 679              		.cfi_offset 3, -56
 680 0010 89CD     		movl	%ecx, %ebp
 681 0012 89F3     		movl	%esi, %ebx
 682 0014 4189FC   		movl	%edi, %r12d
 683              	.LBB216:
 684              	.LBB217:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 685              		.loc 2 33 0
 686 0017 4489C7   		movl	%r8d, %edi
 687              	.LVL85:
 688              	.LBE217:
 689              	.LBE216:
 690              		.loc 2 235 0
 691 001a 4883EC18 		subq	$24, %rsp
 692              		.cfi_def_cfa_offset 80
 236:fltk-1.3.4-1/src/fl_gtk.cxx ****  221:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1)
 237:fltk-1.3.4-1/src/fl_gtk.cxx ****  222:fltk-1.3.4-1/FL/fl_draw.H ****  */
 238:fltk-1.3.4-1/src/fl_gtk.cxx ****  223:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1) {fl_graphics_
 239:fltk-1.3.4-1/src/fl_gtk.cxx ****  224:fltk-1.3.4-1/FL/fl_draw.H **** /**
 240:fltk-1.3.4-1/src/fl_gtk.cxx ****  225:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1) and another from (x1,y1) to
 241:fltk-1.3.4-1/src/fl_gtk.cxx ****  226:fltk-1.3.4-1/FL/fl_draw.H ****  */
 693              		.loc 2 241 0
 694 001e 458D7C24 		leal	1(%r12), %r15d
 694      01
 695              	.LBB219:
 696              	.LBB218:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 697              		.loc 2 33 0
 698 0023 E8000000 		call	_ZN2Fl13set_box_colorEj
 698      00
 699              	.LVL86:
 700              	.LBE218:
 701              	.LBE219:
 237:fltk-1.3.4-1/src/fl_gtk.cxx ****  223:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1) {fl_graphics_
 702              		.loc 2 237 0
 703 0028 4189E8   		movl	%ebp, %r8d
 704 002b 4489E9   		movl	%r13d, %ecx
 705 002e 89DA     		movl	%ebx, %edx
 706 0030 41B90200 		movl	$2, %r9d
 706      0000
 707 0036 4489E6   		movl	%r12d, %esi
 708 0039 BF030000 		movl	$3, %edi
 708      00
 709 003e E8000000 		call	_ZL4drawiiiiii
 709      00
 710              	.LVL87:
 239:fltk-1.3.4-1/src/fl_gtk.cxx ****  225:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1) and another from (x1,y1) to
 711              		.loc 2 239 0
 712 0043 F30F1005 		movss	.LC12(%rip), %xmm0
 712      00000000 
 713 004b 4489F6   		movl	%r14d, %esi
 714 004e BF380000 		movl	$56, %edi
 714      00
 715 0053 E8000000 		call	_Z16fl_color_averagejjf
 715      00
 716              	.LVL88:
 717              	.LBB220:
 718              	.LBB221:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 719              		.loc 2 33 0
 720 0058 89C7     		movl	%eax, %edi
 721 005a E8000000 		call	_ZN2Fl13set_box_colorEj
 721      00
 722              	.LVL89:
 723              	.LBE221:
 724              	.LBE220:
 240:fltk-1.3.4-1/src/fl_gtk.cxx ****  226:fltk-1.3.4-1/FL/fl_draw.H ****  */
 725              		.loc 2 240 0
 726 005f 4189E8   		movl	%ebp, %r8d
 727 0062 4489E9   		movl	%r13d, %ecx
 728 0065 89DA     		movl	%ebx, %edx
 729 0067 4489E6   		movl	%r12d, %esi
 730 006a 41B90200 		movl	$2, %r9d
 730      0000
 731 0070 31FF     		xorl	%edi, %edi
 732 0072 E8000000 		call	_ZL4drawiiiiii
 732      00
 733              	.LVL90:
 734              		.loc 2 241 0
 735 0077 458D55FE 		leal	-2(%r13), %r10d
 736 007b 4189E8   		movl	%ebp, %r8d
 737 007e 89DA     		movl	%ebx, %edx
 738 0080 41B90100 		movl	$1, %r9d
 738      0000
 739 0086 4489FE   		movl	%r15d, %esi
 740 0089 31FF     		xorl	%edi, %edi
 741 008b 4489D1   		movl	%r10d, %ecx
 742 008e 44895424 		movl	%r10d, 12(%rsp)
 742      0C
 743 0093 E8000000 		call	_ZL4drawiiiiii
 743      00
 744              	.LVL91:
 242:fltk-1.3.4-1/src/fl_gtk.cxx ****  227:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1, int x2, int y
 745              		.loc 2 242 0
 746 0098 F30F1005 		movss	.LC13(%rip), %xmm0
 746      00000000 
 747 00a0 4489F6   		movl	%r14d, %esi
 748 00a3 BF380000 		movl	$56, %edi
 748      00
 749 00a8 E8000000 		call	_Z16fl_color_averagejjf
 749      00
 750              	.LVL92:
 751              	.LBB222:
 752              	.LBB223:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 753              		.loc 2 33 0
 754 00ad 89C7     		movl	%eax, %edi
 755 00af E8000000 		call	_ZN2Fl13set_box_colorEj
 755      00
 756              	.LVL93:
 757              	.LBE223:
 758              	.LBE222:
 243:fltk-1.3.4-1/src/fl_gtk.cxx ****  228:fltk-1.3.4-1/FL/fl_draw.H **** 
 759              		.loc 2 243 0
 760 00b4 4189E8   		movl	%ebp, %r8d
 761 00b7 4489E9   		movl	%r13d, %ecx
 762 00ba 89DA     		movl	%ebx, %edx
 763 00bc 4489E6   		movl	%r12d, %esi
 764 00bf 41B90100 		movl	$1, %r9d
 764      0000
 765 00c5 31FF     		xorl	%edi, %edi
 766 00c7 E8000000 		call	_ZL4drawiiiiii
 766      00
 767              	.LVL94:
 244:fltk-1.3.4-1/src/fl_gtk.cxx ****  229:fltk-1.3.4-1/FL/fl_draw.H **** // closed line segments:
 768              		.loc 2 244 0
 769 00cc 448B5424 		movl	12(%rsp), %r10d
 769      0C
 770 00d1 4189E8   		movl	%ebp, %r8d
 771 00d4 89DA     		movl	%ebx, %edx
 772 00d6 4531C9   		xorl	%r9d, %r9d
 773 00d9 4489FE   		movl	%r15d, %esi
 774 00dc 31FF     		xorl	%edi, %edi
 775 00de 4489D1   		movl	%r10d, %ecx
 776 00e1 E8000000 		call	_ZL4drawiiiiii
 776      00
 777              	.LVL95:
 245:fltk-1.3.4-1/src/fl_gtk.cxx ****  230:fltk-1.3.4-1/FL/fl_draw.H **** /**
 246:fltk-1.3.4-1/src/fl_gtk.cxx ****  231:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 3-sided polygon with lines
 778              		.loc 2 246 0
 779 00e6 4489F6   		movl	%r14d, %esi
 780 00e9 F30F1005 		movss	.LC14(%rip), %xmm0
 780      00000000 
 781 00f1 BF380000 		movl	$56, %edi
 781      00
 782 00f6 E8000000 		call	_Z16fl_color_averagejjf
 782      00
 783              	.LVL96:
 784              	.LBB224:
 785              	.LBB225:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 786              		.loc 2 33 0
 787 00fb 89C7     		movl	%eax, %edi
 788 00fd E8000000 		call	_ZN2Fl13set_box_colorEj
 788      00
 789              	.LVL97:
 790              	.LBE225:
 791              	.LBE224:
 247:fltk-1.3.4-1/src/fl_gtk.cxx ****  232:fltk-1.3.4-1/FL/fl_draw.H ****  */
 248:fltk-1.3.4-1/src/fl_gtk.cxx ****  233:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y
 792              		.loc 2 248 0
 793 0102 4883C418 		addq	$24, %rsp
 794              		.cfi_def_cfa_offset 56
 247:fltk-1.3.4-1/src/fl_gtk.cxx ****  232:fltk-1.3.4-1/FL/fl_draw.H ****  */
 795              		.loc 2 247 0
 796 0106 4189E8   		movl	%ebp, %r8d
 797 0109 4489E9   		movl	%r13d, %ecx
 798 010c 89DA     		movl	%ebx, %edx
 799 010e 4489E6   		movl	%r12d, %esi
 800 0111 4531C9   		xorl	%r9d, %r9d
 801              		.loc 2 248 0
 802 0114 5B       		popq	%rbx
 803              		.cfi_def_cfa_offset 48
 804              	.LVL98:
 805 0115 5D       		popq	%rbp
 806              		.cfi_def_cfa_offset 40
 807              	.LVL99:
 808 0116 415C     		popq	%r12
 809              		.cfi_def_cfa_offset 32
 810              	.LVL100:
 811 0118 415D     		popq	%r13
 812              		.cfi_def_cfa_offset 24
 813              	.LVL101:
 814 011a 415E     		popq	%r14
 815              		.cfi_def_cfa_offset 16
 816              	.LVL102:
 817 011c 415F     		popq	%r15
 818              		.cfi_def_cfa_offset 8
 247:fltk-1.3.4-1/src/fl_gtk.cxx ****  232:fltk-1.3.4-1/FL/fl_draw.H ****  */
 819              		.loc 2 247 0
 820 011e BF020000 		movl	$2, %edi
 820      00
 821 0123 E9000000 		jmp	_ZL4drawiiiiii
 821      00
 822              	.LVL103:
 823              		.cfi_endproc
 824              	.LFE480:
 826              		.section	.text.unlikely._ZL18gtk_round_down_boxiiiij
 827              	.LCOLDE15:
 828              		.section	.text._ZL18gtk_round_down_boxiiiij
 829              	.LHOTE15:
 830              		.section	.text.unlikely._ZL16gtk_round_up_boxiiiij,"ax",@progbits
 831              	.LCOLDB19:
 832              		.section	.text._ZL16gtk_round_up_boxiiiij,"ax",@progbits
 833              	.LHOTB19:
 834              		.p2align 4,,15
 836              	_ZL16gtk_round_up_boxiiiij:
 837              	.LFB479:
 204:fltk-1.3.4-1/src/fl_gtk.cxx ****  190:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_ROUND	= 0x2000,	///< join style: line join is rounded
 838              		.loc 2 204 0
 839              		.cfi_startproc
 840              	.LVL104:
 841 0000 4157     		pushq	%r15
 842              		.cfi_def_cfa_offset 16
 843              		.cfi_offset 15, -16
 844 0002 4156     		pushq	%r14
 845              		.cfi_def_cfa_offset 24
 846              		.cfi_offset 14, -24
 847 0004 4589C6   		movl	%r8d, %r14d
 848 0007 4155     		pushq	%r13
 849              		.cfi_def_cfa_offset 32
 850              		.cfi_offset 13, -32
 851 0009 4154     		pushq	%r12
 852              		.cfi_def_cfa_offset 40
 853              		.cfi_offset 12, -40
 854 000b 4189D5   		movl	%edx, %r13d
 855 000e 55       		pushq	%rbp
 856              		.cfi_def_cfa_offset 48
 857              		.cfi_offset 6, -48
 858 000f 53       		pushq	%rbx
 859              		.cfi_def_cfa_offset 56
 860              		.cfi_offset 3, -56
 861 0010 89CD     		movl	%ecx, %ebp
 862 0012 89F3     		movl	%esi, %ebx
 863 0014 4189FC   		movl	%edi, %r12d
 864              	.LBB226:
 865              	.LBB227:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 866              		.loc 2 33 0
 867 0017 4489C7   		movl	%r8d, %edi
 868              	.LVL105:
 869              	.LBE227:
 870              	.LBE226:
 204:fltk-1.3.4-1/src/fl_gtk.cxx ****  190:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_ROUND	= 0x2000,	///< join style: line join is rounded
 871              		.loc 2 204 0
 872 001a 4883EC18 		subq	$24, %rsp
 873              		.cfi_def_cfa_offset 80
 209:fltk-1.3.4-1/src/fl_gtk.cxx ****  195:fltk-1.3.4-1/FL/fl_draw.H **** 
 874              		.loc 2 209 0
 875 001e 458D7DFE 		leal	-2(%r13), %r15d
 876              	.LBB229:
 877              	.LBB228:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 878              		.loc 2 33 0
 879 0022 E8000000 		call	_ZN2Fl13set_box_colorEj
 879      00
 880              	.LVL106:
 881              	.LBE228:
 882              	.LBE229:
 206:fltk-1.3.4-1/src/fl_gtk.cxx ****  192:fltk-1.3.4-1/FL/fl_draw.H **** };
 883              		.loc 2 206 0
 884 0027 4189E8   		movl	%ebp, %r8d
 885 002a 4489E9   		movl	%r13d, %ecx
 886 002d 89DA     		movl	%ebx, %edx
 887 002f 41B90200 		movl	$2, %r9d
 887      0000
 888 0035 4489E6   		movl	%r12d, %esi
 889 0038 BF030000 		movl	$3, %edi
 889      00
 890 003d E8000000 		call	_ZL4drawiiiiii
 890      00
 891              	.LVL107:
 208:fltk-1.3.4-1/src/fl_gtk.cxx ****  194:fltk-1.3.4-1/FL/fl_draw.H **** // rectangles tweaked to exactly fill the pixel rectangle:
 892              		.loc 2 208 0
 893 0042 F30F1005 		movss	.LC16(%rip), %xmm0
 893      00000000 
 894 004a 4489F6   		movl	%r14d, %esi
 895 004d BF380000 		movl	$56, %edi
 895      00
 896 0052 E8000000 		call	_Z16fl_color_averagejjf
 896      00
 897              	.LVL108:
 898              	.LBB230:
 899              	.LBB231:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 900              		.loc 2 33 0
 901 0057 89C7     		movl	%eax, %edi
 902 0059 E8000000 		call	_ZN2Fl13set_box_colorEj
 902      00
 903              	.LVL109:
 904              	.LBE231:
 905              	.LBE230:
 209:fltk-1.3.4-1/src/fl_gtk.cxx ****  195:fltk-1.3.4-1/FL/fl_draw.H **** 
 906              		.loc 2 209 0
 907 005e 418D4424 		leal	1(%r12), %eax
 907      01
 908 0063 4189E8   		movl	%ebp, %r8d
 909 0066 4489F9   		movl	%r15d, %ecx
 910 0069 89DA     		movl	%ebx, %edx
 911 006b 41B90200 		movl	$2, %r9d
 911      0000
 912 0071 BF010000 		movl	$1, %edi
 912      00
 913 0076 89C6     		movl	%eax, %esi
 914 0078 8944240C 		movl	%eax, 12(%rsp)
 915 007c E8000000 		call	_ZL4drawiiiiii
 915      00
 916              	.LVL110:
 210:fltk-1.3.4-1/src/fl_gtk.cxx ****  196:fltk-1.3.4-1/FL/fl_draw.H **** /** 
 917              		.loc 2 210 0
 918 0081 4189E8   		movl	%ebp, %r8d
 919 0084 4489E9   		movl	%r13d, %ecx
 920 0087 89DA     		movl	%ebx, %edx
 921 0089 41B90300 		movl	$3, %r9d
 921      0000
 922 008f 4489E6   		movl	%r12d, %esi
 923 0092 BF010000 		movl	$1, %edi
 923      00
 924 0097 E8000000 		call	_ZL4drawiiiiii
 924      00
 925              	.LVL111:
 211:fltk-1.3.4-1/src/fl_gtk.cxx ****  197:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a 1-pixel border \e inside the given bounding box.
 926              		.loc 2 211 0
 927 009c F30F1005 		movss	.LC12(%rip), %xmm0
 927      00000000 
 928 00a4 4489F6   		movl	%r14d, %esi
 929 00a7 BF380000 		movl	$56, %edi
 929      00
 930 00ac E8000000 		call	_Z16fl_color_averagejjf
 930      00
 931              	.LVL112:
 932              	.LBB232:
 933              	.LBB233:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 934              		.loc 2 33 0
 935 00b1 89C7     		movl	%eax, %edi
 936 00b3 E8000000 		call	_ZN2Fl13set_box_colorEj
 936      00
 937              	.LVL113:
 938              	.LBE233:
 939              	.LBE232:
 212:fltk-1.3.4-1/src/fl_gtk.cxx ****  198:fltk-1.3.4-1/FL/fl_draw.H ****  This function is meant for quick drawing of simple boxes. The 
 940              		.loc 2 212 0
 941 00b8 8B74240C 		movl	12(%rsp), %esi
 942 00bc 4189E8   		movl	%ebp, %r8d
 943 00bf 4489F9   		movl	%r15d, %ecx
 944 00c2 89DA     		movl	%ebx, %edx
 945 00c4 41B90100 		movl	$1, %r9d
 945      0000
 946 00ca BF010000 		movl	$1, %edi
 946      00
 947 00cf E8000000 		call	_ZL4drawiiiiii
 947      00
 948              	.LVL114:
 213:fltk-1.3.4-1/src/fl_gtk.cxx ****  199:fltk-1.3.4-1/FL/fl_draw.H ****  undefined for line widths that are not 1.
 949              		.loc 2 213 0
 950 00d4 4189E8   		movl	%ebp, %r8d
 951 00d7 4489E9   		movl	%r13d, %ecx
 952 00da 89DA     		movl	%ebx, %edx
 953 00dc 41B90200 		movl	$2, %r9d
 953      0000
 954 00e2 4489E6   		movl	%r12d, %esi
 955 00e5 BF010000 		movl	$1, %edi
 955      00
 956 00ea E8000000 		call	_ZL4drawiiiiii
 956      00
 957              	.LVL115:
 214:fltk-1.3.4-1/src/fl_gtk.cxx ****  200:fltk-1.3.4-1/FL/fl_draw.H ****  */
 958              		.loc 2 214 0
 959 00ef F30F1005 		movss	.LC13(%rip), %xmm0
 959      00000000 
 960 00f7 4489F6   		movl	%r14d, %esi
 961 00fa BF380000 		movl	$56, %edi
 961      00
 962 00ff E8000000 		call	_Z16fl_color_averagejjf
 962      00
 963              	.LVL116:
 964              	.LBB234:
 965              	.LBB235:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 966              		.loc 2 33 0
 967 0104 89C7     		movl	%eax, %edi
 968 0106 E8000000 		call	_ZN2Fl13set_box_colorEj
 968      00
 969              	.LVL117:
 970              	.LBE235:
 971              	.LBE234:
 215:fltk-1.3.4-1/src/fl_gtk.cxx ****  201:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h) { fl_graphics_d
 972              		.loc 2 215 0
 973 010b 8B74240C 		movl	12(%rsp), %esi
 974 010f 4531C9   		xorl	%r9d, %r9d
 975 0112 4189E8   		movl	%ebp, %r8d
 976 0115 4489F9   		movl	%r15d, %ecx
 977 0118 89DA     		movl	%ebx, %edx
 978 011a BF010000 		movl	$1, %edi
 978      00
 979 011f E8000000 		call	_ZL4drawiiiiii
 979      00
 980              	.LVL118:
 216:fltk-1.3.4-1/src/fl_gtk.cxx ****  202:fltk-1.3.4-1/FL/fl_draw.H **** 
 981              		.loc 2 216 0
 982 0124 4189E8   		movl	%ebp, %r8d
 983 0127 4489E9   		movl	%r13d, %ecx
 984 012a 89DA     		movl	%ebx, %edx
 985 012c 41B90100 		movl	$1, %r9d
 985      0000
 986 0132 4489E6   		movl	%r12d, %esi
 987 0135 BF010000 		movl	$1, %edi
 987      00
 988 013a E8000000 		call	_ZL4drawiiiiii
 988      00
 989              	.LVL119:
 218:fltk-1.3.4-1/src/fl_gtk.cxx ****  204:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h, Fl_Color c) {fl
 990              		.loc 2 218 0
 991 013f F30F1005 		movss	.LC13(%rip), %xmm0
 991      00000000 
 992 0147 4489F6   		movl	%r14d, %esi
 993 014a BFFF0000 		movl	$255, %edi
 993      00
 994 014f E8000000 		call	_Z16fl_color_averagejjf
 994      00
 995              	.LVL120:
 996              	.LBB236:
 997              	.LBB237:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 998              		.loc 2 33 0
 999 0154 89C7     		movl	%eax, %edi
 1000 0156 E8000000 		call	_ZN2Fl13set_box_colorEj
 1000      00
 1001              	.LVL121:
 1002              	.LBE237:
 1003              	.LBE236:
 219:fltk-1.3.4-1/src/fl_gtk.cxx ****  205:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with current color a rectangle that exactly fills th
 1004              		.loc 2 219 0
 1005 015b 4189E8   		movl	%ebp, %r8d
 1006 015e 4489E9   		movl	%r13d, %ecx
 1007 0161 89DA     		movl	%ebx, %edx
 1008 0163 4489E6   		movl	%r12d, %esi
 1009 0166 31FF     		xorl	%edi, %edi
 1010 0168 41B90400 		movl	$4, %r9d
 1010      0000
 1011 016e E8000000 		call	_ZL4drawiiiiii
 1011      00
 1012              	.LVL122:
 220:fltk-1.3.4-1/src/fl_gtk.cxx ****  206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_
 1013              		.loc 2 220 0
 1014 0173 8B74240C 		movl	12(%rsp), %esi
 1015 0177 4189E8   		movl	%ebp, %r8d
 1016 017a 4489F9   		movl	%r15d, %ecx
 1017 017d 89DA     		movl	%ebx, %edx
 1018 017f 41B90300 		movl	$3, %r9d
 1018      0000
 1019 0185 31FF     		xorl	%edi, %edi
 1020 0187 E8000000 		call	_ZL4drawiiiiii
 1020      00
 1021              	.LVL123:
 221:fltk-1.3.4-1/src/fl_gtk.cxx ****  207:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the
 1022              		.loc 2 221 0
 1023 018c F30F1005 		movss	.LC17(%rip), %xmm0
 1023      00000000 
 1024 0194 4489F6   		movl	%r14d, %esi
 1025 0197 BFFF0000 		movl	$255, %edi
 1025      00
 1026 019c E8000000 		call	_Z16fl_color_averagejjf
 1026      00
 1027              	.LVL124:
 1028              	.LBB238:
 1029              	.LBB239:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1030              		.loc 2 33 0
 1031 01a1 89C7     		movl	%eax, %edi
 1032 01a3 E8000000 		call	_ZN2Fl13set_box_colorEj
 1032      00
 1033              	.LVL125:
 1034              	.LBE239:
 1035              	.LBE238:
 222:fltk-1.3.4-1/src/fl_gtk.cxx ****  208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {f
 1036              		.loc 2 222 0
 1037 01a8 4189E8   		movl	%ebp, %r8d
 1038 01ab 4489E9   		movl	%r13d, %ecx
 1039 01ae 89DA     		movl	%ebx, %edx
 1040 01b0 4489E6   		movl	%r12d, %esi
 1041 01b3 31FF     		xorl	%edi, %edi
 1042 01b5 41B90300 		movl	$3, %r9d
 1042      0000
 1043 01bb E8000000 		call	_ZL4drawiiiiii
 1043      00
 1044              	.LVL126:
 223:fltk-1.3.4-1/src/fl_gtk.cxx ****  209:fltk-1.3.4-1/FL/fl_draw.H **** 
 1045              		.loc 2 223 0
 1046 01c0 8B74240C 		movl	12(%rsp), %esi
 1047 01c4 4189E8   		movl	%ebp, %r8d
 1048 01c7 4489F9   		movl	%r15d, %ecx
 1049 01ca 89DA     		movl	%ebx, %edx
 1050 01cc 41B90200 		movl	$2, %r9d
 1050      0000
 1051 01d2 31FF     		xorl	%edi, %edi
 1052 01d4 E8000000 		call	_ZL4drawiiiiii
 1052      00
 1053              	.LVL127:
 224:fltk-1.3.4-1/src/fl_gtk.cxx ****  210:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1054              		.loc 2 224 0
 1055 01d9 F30F1005 		movss	.LC18(%rip), %xmm0
 1055      00000000 
 1056 01e1 4489F6   		movl	%r14d, %esi
 1057 01e4 BFFF0000 		movl	$255, %edi
 1057      00
 1058 01e9 E8000000 		call	_Z16fl_color_averagejjf
 1058      00
 1059              	.LVL128:
 1060              	.LBB240:
 1061              	.LBB241:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1062              		.loc 2 33 0
 1063 01ee 89C7     		movl	%eax, %edi
 1064 01f0 E8000000 		call	_ZN2Fl13set_box_colorEj
 1064      00
 1065              	.LVL129:
 1066              	.LBE241:
 1067              	.LBE240:
 225:fltk-1.3.4-1/src/fl_gtk.cxx ****  211:fltk-1.3.4-1/FL/fl_draw.H ****   Colors a rectangle with "exactly" the passed <tt>r,g,b</tt> c
 1068              		.loc 2 225 0
 1069 01f5 4189E8   		movl	%ebp, %r8d
 1070 01f8 4489E9   		movl	%r13d, %ecx
 1071 01fb 89DA     		movl	%ebx, %edx
 1072 01fd 4489E6   		movl	%r12d, %esi
 1073 0200 41B90200 		movl	$2, %r9d
 1073      0000
 1074 0206 31FF     		xorl	%edi, %edi
 1075 0208 E8000000 		call	_ZL4drawiiiiii
 1075      00
 1076              	.LVL130:
 226:fltk-1.3.4-1/src/fl_gtk.cxx ****  212:fltk-1.3.4-1/FL/fl_draw.H ****   On screens with less than 24 bits of color this is done by dr
 1077              		.loc 2 226 0
 1078 020d 8B74240C 		movl	12(%rsp), %esi
 1079 0211 31FF     		xorl	%edi, %edi
 1080 0213 4189E8   		movl	%ebp, %r8d
 1081 0216 4489F9   		movl	%r15d, %ecx
 1082 0219 89DA     		movl	%ebx, %edx
 1083 021b 41B90100 		movl	$1, %r9d
 1083      0000
 1084 0221 E8000000 		call	_ZL4drawiiiiii
 1084      00
 1085              	.LVL131:
 227:fltk-1.3.4-1/src/fl_gtk.cxx ****  213:fltk-1.3.4-1/FL/fl_draw.H ****   solid-colored block using fl_draw_image() so that the correct
 1086              		.loc 2 227 0
 1087 0226 F30F1005 		movss	.LC14(%rip), %xmm0
 1087      00000000 
 1088 022e 4489F6   		movl	%r14d, %esi
 1089 0231 BFFF0000 		movl	$255, %edi
 1089      00
 1090 0236 E8000000 		call	_Z16fl_color_averagejjf
 1090      00
 1091              	.LVL132:
 1092              	.LBB242:
 1093              	.LBB243:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1094              		.loc 2 33 0
 1095 023b 89C7     		movl	%eax, %edi
 1096 023d E8000000 		call	_ZN2Fl13set_box_colorEj
 1096      00
 1097              	.LVL133:
 1098              	.LBE243:
 1099              	.LBE242:
 228:fltk-1.3.4-1/src/fl_gtk.cxx ****  214:fltk-1.3.4-1/FL/fl_draw.H ****   shade is produced.
 1100              		.loc 2 228 0
 1101 0242 4189E8   		movl	%ebp, %r8d
 1102 0245 4489E9   		movl	%r13d, %ecx
 1103 0248 89DA     		movl	%ebx, %edx
 1104 024a 4489E6   		movl	%r12d, %esi
 1105 024d 41B90100 		movl	$1, %r9d
 1105      0000
 1106 0253 31FF     		xorl	%edi, %edi
 1107 0255 E8000000 		call	_ZL4drawiiiiii
 1107      00
 1108              	.LVL134:
 229:fltk-1.3.4-1/src/fl_gtk.cxx ****  215:fltk-1.3.4-1/FL/fl_draw.H ****   */
 1109              		.loc 2 229 0
 1110 025a 8B74240C 		movl	12(%rsp), %esi
 1111 025e 4189E8   		movl	%ebp, %r8d
 1112 0261 4489F9   		movl	%r15d, %ecx
 1113 0264 89DA     		movl	%ebx, %edx
 1114 0266 4531C9   		xorl	%r9d, %r9d
 1115 0269 31FF     		xorl	%edi, %edi
 1116 026b E8000000 		call	_ZL4drawiiiiii
 1116      00
 1117              	.LVL135:
 231:fltk-1.3.4-1/src/fl_gtk.cxx ****  217:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_rectf(int x, int y, int w, int h, uchar r, uc
 1118              		.loc 2 231 0
 1119 0270 4489F6   		movl	%r14d, %esi
 1120 0273 F30F1005 		movss	.LC14(%rip), %xmm0
 1120      00000000 
 1121 027b BF380000 		movl	$56, %edi
 1121      00
 1122 0280 E8000000 		call	_Z16fl_color_averagejjf
 1122      00
 1123              	.LVL136:
 1124              	.LBB244:
 1125              	.LBB245:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1126              		.loc 2 33 0
 1127 0285 89C7     		movl	%eax, %edi
 1128 0287 E8000000 		call	_ZN2Fl13set_box_colorEj
 1128      00
 1129              	.LVL137:
 1130              	.LBE245:
 1131              	.LBE244:
 233:fltk-1.3.4-1/src/fl_gtk.cxx ****  219:fltk-1.3.4-1/FL/fl_draw.H **** // line segments:
 1132              		.loc 2 233 0
 1133 028c 4883C418 		addq	$24, %rsp
 1134              		.cfi_def_cfa_offset 56
 232:fltk-1.3.4-1/src/fl_gtk.cxx ****  218:fltk-1.3.4-1/FL/fl_draw.H **** 
 1135              		.loc 2 232 0
 1136 0290 4189E8   		movl	%ebp, %r8d
 1137 0293 4489E9   		movl	%r13d, %ecx
 1138 0296 89DA     		movl	%ebx, %edx
 1139 0298 4489E6   		movl	%r12d, %esi
 1140 029b 4531C9   		xorl	%r9d, %r9d
 233:fltk-1.3.4-1/src/fl_gtk.cxx ****  219:fltk-1.3.4-1/FL/fl_draw.H **** // line segments:
 1141              		.loc 2 233 0
 1142 029e 5B       		popq	%rbx
 1143              		.cfi_def_cfa_offset 48
 1144              	.LVL138:
 1145 029f 5D       		popq	%rbp
 1146              		.cfi_def_cfa_offset 40
 1147              	.LVL139:
 1148 02a0 415C     		popq	%r12
 1149              		.cfi_def_cfa_offset 32
 1150              	.LVL140:
 1151 02a2 415D     		popq	%r13
 1152              		.cfi_def_cfa_offset 24
 1153              	.LVL141:
 1154 02a4 415E     		popq	%r14
 1155              		.cfi_def_cfa_offset 16
 1156              	.LVL142:
 1157 02a6 415F     		popq	%r15
 1158              		.cfi_def_cfa_offset 8
 232:fltk-1.3.4-1/src/fl_gtk.cxx ****  218:fltk-1.3.4-1/FL/fl_draw.H **** 
 1159              		.loc 2 232 0
 1160 02a8 BF020000 		movl	$2, %edi
 1160      00
 1161 02ad E9000000 		jmp	_ZL4drawiiiiii
 1161      00
 1162              	.LVL143:
 1163              		.cfi_endproc
 1164              	.LFE479:
 1166              		.section	.text.unlikely._ZL16gtk_round_up_boxiiiij
 1167              	.LCOLDE19:
 1168              		.section	.text._ZL16gtk_round_up_boxiiiij
 1169              	.LHOTE19:
 1170              		.section	.text.unlikely._ZL19gtk_thin_down_frameiiiij,"ax",@progbits
 1171              	.LCOLDB21:
 1172              		.section	.text._ZL19gtk_thin_down_frameiiiij,"ax",@progbits
 1173              	.LHOTB21:
 1174              		.p2align 4,,15
 1176              	_ZL19gtk_thin_down_frameiiiij:
 1177              	.LFB475:
 138:fltk-1.3.4-1/src/fl_gtk.cxx ****  124:fltk-1.3.4-1/FL/fl_draw.H ****  \returns Non-zero if the resulting rectangle is different to t
 1178              		.loc 2 138 0
 1179              		.cfi_startproc
 1180              	.LVL144:
 1181 0000 4157     		pushq	%r15
 1182              		.cfi_def_cfa_offset 16
 1183              		.cfi_offset 15, -16
 1184 0002 4156     		pushq	%r14
 1185              		.cfi_def_cfa_offset 24
 1186              		.cfi_offset 14, -24
 1187 0004 4155     		pushq	%r13
 1188              		.cfi_def_cfa_offset 32
 1189              		.cfi_offset 13, -32
 1190 0006 4154     		pushq	%r12
 1191              		.cfi_def_cfa_offset 40
 1192              		.cfi_offset 12, -40
 1193 0008 4189FD   		movl	%edi, %r13d
 1194 000b 55       		pushq	%rbp
 1195              		.cfi_def_cfa_offset 48
 1196              		.cfi_offset 6, -48
 1197 000c 53       		pushq	%rbx
 1198              		.cfi_def_cfa_offset 56
 1199              		.cfi_offset 3, -56
 1200 000d 89F5     		movl	%esi, %ebp
 139:fltk-1.3.4-1/src/fl_gtk.cxx ****  125:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1201              		.loc 2 139 0
 1202 000f BF380000 		movl	$56, %edi
 1202      00
 1203              	.LVL145:
 1204 0014 4489C6   		movl	%r8d, %esi
 1205              	.LVL146:
 138:fltk-1.3.4-1/src/fl_gtk.cxx ****  124:fltk-1.3.4-1/FL/fl_draw.H ****  \returns Non-zero if the resulting rectangle is different to t
 1206              		.loc 2 138 0
 1207 0017 89D3     		movl	%edx, %ebx
 1208 0019 4883EC18 		subq	$24, %rsp
 1209              		.cfi_def_cfa_offset 80
 138:fltk-1.3.4-1/src/fl_gtk.cxx ****  124:fltk-1.3.4-1/FL/fl_draw.H ****  \returns Non-zero if the resulting rectangle is different to t
 1210              		.loc 2 138 0
 1211 001d 4189CC   		movl	%ecx, %r12d
 140:fltk-1.3.4-1/src/fl_gtk.cxx ****  126:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_clip_box(int x , int y, int w, int h, int& X, int
 1212              		.loc 2 140 0
 1213 0020 4401EB   		addl	%r13d, %ebx
 139:fltk-1.3.4-1/src/fl_gtk.cxx ****  125:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1214              		.loc 2 139 0
 1215 0023 F30F1005 		movss	.LC18(%rip), %xmm0
 1215      00000000 
 1216 002b 44894424 		movl	%r8d, 12(%rsp)
 1216      0C
 1217 0030 E8000000 		call	_Z16fl_color_averagejjf
 1217      00
 1218              	.LVL147:
 1219              	.LBB246:
 1220              	.LBB247:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1221              		.loc 2 33 0
 1222 0035 89C7     		movl	%eax, %edi
 1223              	.LBE247:
 1224              	.LBE246:
 140:fltk-1.3.4-1/src/fl_gtk.cxx ****  126:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_clip_box(int x , int y, int w, int h, int& X, int
 1225              		.loc 2 140 0
 1226 0037 458D7D01 		leal	1(%r13), %r15d
 141:fltk-1.3.4-1/src/fl_gtk.cxx ****  127:fltk-1.3.4-1/FL/fl_draw.H ****   {return fl_graphics_driver->clip_box(x,y,w,h,X,Y,W,H); }
 1227              		.loc 2 141 0
 1228 003b 4101EC   		addl	%ebp, %r12d
 1229              	.LVL148:
 1230              	.LBB249:
 1231              	.LBB248:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1232              		.loc 2 33 0
 1233 003e E8000000 		call	_ZN2Fl13set_box_colorEj
 1233      00
 1234              	.LVL149:
 1235              	.LBE248:
 1236              	.LBE249:
 1237              	.LBB250:
 1238              	.LBB251:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1239              		.loc 1 255 0
 1240 0043 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1240      000000
 1241              	.LBE251:
 1242              	.LBE250:
 140:fltk-1.3.4-1/src/fl_gtk.cxx ****  126:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_clip_box(int x , int y, int w, int h, int& X, int
 1243              		.loc 2 140 0
 1244 004a 448D4BFE 		leal	-2(%rbx), %r9d
 1245              	.LVL150:
 1246              	.LBB254:
 1247              	.LBB252:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1248              		.loc 1 255 0
 1249 004e 89EA     		movl	%ebp, %edx
 1250 0050 4489FE   		movl	%r15d, %esi
 1251              	.LBE252:
 1252              	.LBE254:
 141:fltk-1.3.4-1/src/fl_gtk.cxx ****  127:fltk-1.3.4-1/FL/fl_draw.H ****   {return fl_graphics_driver->clip_box(x,y,w,h,X,Y,W,H); }
 1253              		.loc 2 141 0
 1254 0053 458D7424 		leal	-2(%r12), %r14d
 1254      FE
 1255 0058 83C501   		addl	$1, %ebp
 1256              	.LVL151:
 1257              	.LBB255:
 1258              	.LBB253:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1259              		.loc 1 255 0
 1260 005b 4489C9   		movl	%r9d, %ecx
 1261 005e 44894C24 		movl	%r9d, 8(%rsp)
 1261      08
 1262 0063 488B07   		movq	(%rdi), %rax
 1263 0066 FF5030   		call	*48(%rax)
 1264              	.LVL152:
 1265              	.LBE253:
 1266              	.LBE255:
 1267              	.LBB256:
 1268              	.LBB257:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1269              		.loc 1 270 0
 1270 0069 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1270      000000
 1271 0070 4489F1   		movl	%r14d, %ecx
 1272 0073 89EA     		movl	%ebp, %edx
 1273 0075 4489EE   		movl	%r13d, %esi
 1274 0078 488B07   		movq	(%rdi), %rax
 1275 007b FF5048   		call	*72(%rax)
 1276              	.LVL153:
 1277              	.LBE257:
 1278              	.LBE256:
 143:fltk-1.3.4-1/src/fl_gtk.cxx ****  129:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_restore_clip() { fl_graphics_driver->restore_cli
 1279              		.loc 2 143 0
 1280 007e 448B4424 		movl	12(%rsp), %r8d
 1280      0C
 1281 0083 F30F1005 		movss	.LC20(%rip), %xmm0
 1281      00000000 
 1282 008b BFFF0000 		movl	$255, %edi
 1282      00
 1283 0090 4489C6   		movl	%r8d, %esi
 1284 0093 E8000000 		call	_Z16fl_color_averagejjf
 1284      00
 1285              	.LVL154:
 1286              	.LBB258:
 1287              	.LBB259:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1288              		.loc 2 33 0
 1289 0098 89C7     		movl	%eax, %edi
 1290 009a E8000000 		call	_ZN2Fl13set_box_colorEj
 1290      00
 1291              	.LVL155:
 1292              	.LBE259:
 1293              	.LBE258:
 1294              	.LBB260:
 1295              	.LBB261:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1296              		.loc 1 255 0
 1297 009f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1297      000000
 1298 00a6 448B4C24 		movl	8(%rsp), %r9d
 1298      08
 1299 00ab 418D5424 		leal	-1(%r12), %edx
 1299      FF
 1300              	.LVL156:
 1301 00b0 4489FE   		movl	%r15d, %esi
 1302 00b3 488B07   		movq	(%rdi), %rax
 1303 00b6 4489C9   		movl	%r9d, %ecx
 1304 00b9 FF5030   		call	*48(%rax)
 1305              	.LVL157:
 1306              	.LBE261:
 1307              	.LBE260:
 1308              	.LBB262:
 1309              	.LBB263:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1310              		.loc 1 270 0
 1311 00bc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1311      000000
 1312 00c3 8D73FF   		leal	-1(%rbx), %esi
 1313              	.LVL158:
 1314 00c6 4489F1   		movl	%r14d, %ecx
 1315 00c9 89EA     		movl	%ebp, %edx
 1316 00cb 488B07   		movq	(%rdi), %rax
 1317 00ce 488B4048 		movq	72(%rax), %rax
 1318              	.LBE263:
 1319              	.LBE262:
 146:fltk-1.3.4-1/src/fl_gtk.cxx ****  132:fltk-1.3.4-1/FL/fl_draw.H ****  
 1320              		.loc 2 146 0
 1321 00d2 4883C418 		addq	$24, %rsp
 1322              		.cfi_def_cfa_offset 56
 1323 00d6 5B       		popq	%rbx
 1324              		.cfi_def_cfa_offset 48
 1325 00d7 5D       		popq	%rbp
 1326              		.cfi_def_cfa_offset 40
 1327              	.LVL159:
 1328 00d8 415C     		popq	%r12
 1329              		.cfi_def_cfa_offset 32
 1330 00da 415D     		popq	%r13
 1331              		.cfi_def_cfa_offset 24
 1332              	.LVL160:
 1333 00dc 415E     		popq	%r14
 1334              		.cfi_def_cfa_offset 16
 1335              	.LVL161:
 1336 00de 415F     		popq	%r15
 1337              		.cfi_def_cfa_offset 8
 1338              	.LVL162:
 1339              	.LBB265:
 1340              	.LBB264:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1341              		.loc 1 270 0
 1342 00e0 FFE0     		jmp	*%rax
 1343              	.LVL163:
 1344              	.LBE264:
 1345              	.LBE265:
 1346              		.cfi_endproc
 1347              	.LFE475:
 1349              		.section	.text.unlikely._ZL19gtk_thin_down_frameiiiij
 1350              	.LCOLDE21:
 1351              		.section	.text._ZL19gtk_thin_down_frameiiiij
 1352              	.LHOTE21:
 1353              		.section	.text.unlikely._ZL17gtk_thin_down_boxiiiij,"ax",@progbits
 1354              	.LCOLDB22:
 1355              		.section	.text._ZL17gtk_thin_down_boxiiiij,"ax",@progbits
 1356              	.LHOTB22:
 1357              		.p2align 4,,15
 1359              	_ZL17gtk_thin_down_boxiiiij:
 1360              	.LFB476:
 149:fltk-1.3.4-1/src/fl_gtk.cxx ****  135:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1361              		.loc 2 149 0
 1362              		.cfi_startproc
 1363              	.LVL164:
 1364 0000 4156     		pushq	%r14
 1365              		.cfi_def_cfa_offset 16
 1366              		.cfi_offset 14, -16
 1367 0002 4155     		pushq	%r13
 1368              		.cfi_def_cfa_offset 24
 1369              		.cfi_offset 13, -24
 1370 0004 4589C6   		movl	%r8d, %r14d
 1371 0007 4154     		pushq	%r12
 1372              		.cfi_def_cfa_offset 32
 1373              		.cfi_offset 12, -32
 1374 0009 55       		pushq	%rbp
 1375              		.cfi_def_cfa_offset 40
 1376              		.cfi_offset 6, -40
 1377 000a 4189D4   		movl	%edx, %r12d
 1378 000d 53       		pushq	%rbx
 1379              		.cfi_def_cfa_offset 48
 1380              		.cfi_offset 3, -48
 149:fltk-1.3.4-1/src/fl_gtk.cxx ****  135:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1381              		.loc 2 149 0
 1382 000e 89F5     		movl	%esi, %ebp
 1383 0010 4189CD   		movl	%ecx, %r13d
 1384 0013 89FB     		movl	%edi, %ebx
 150:fltk-1.3.4-1/src/fl_gtk.cxx ****  136:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_clip_region(Fl_Region r) { fl_graphics_driver->c
 1385              		.loc 2 150 0
 1386 0015 E8000000 		call	_ZL19gtk_thin_down_frameiiiij
 1386      00
 1387              	.LVL165:
 1388              	.LBB266:
 1389              	.LBB267:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1390              		.loc 2 33 0
 1391 001a 4489F7   		movl	%r14d, %edi
 1392 001d E8000000 		call	_ZN2Fl13set_box_colorEj
 1392      00
 1393              	.LVL166:
 1394              	.LBE267:
 1395              	.LBE266:
 1396              	.LBB268:
 1397              	.LBB269:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1398              		.loc 1 206 0
 1399 0022 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1399      000000
 1400 0029 418D4C24 		leal	-2(%r12), %ecx
 1400      FE
 1401              	.LVL167:
 1402 002e 8D5501   		leal	1(%rbp), %edx
 1403              	.LVL168:
 1404 0031 8D7301   		leal	1(%rbx), %esi
 1405              	.LVL169:
 1406 0034 458D45FE 		leal	-2(%r13), %r8d
 1407              	.LVL170:
 1408              	.LBE269:
 1409              	.LBE268:
 154:fltk-1.3.4-1/src/fl_gtk.cxx ****  140:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Region fl_clip_region() { return fl_graphics_driver->
 1410              		.loc 2 154 0
 1411 0038 5B       		popq	%rbx
 1412              		.cfi_def_cfa_offset 40
 1413              	.LVL171:
 1414              	.LBB272:
 1415              	.LBB270:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1416              		.loc 1 206 0
 1417 0039 488B07   		movq	(%rdi), %rax
 1418              	.LBE270:
 1419              	.LBE272:
 154:fltk-1.3.4-1/src/fl_gtk.cxx ****  140:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Region fl_clip_region() { return fl_graphics_driver->
 1420              		.loc 2 154 0
 1421 003c 5D       		popq	%rbp
 1422              		.cfi_def_cfa_offset 32
 1423              	.LVL172:
 1424 003d 415C     		popq	%r12
 1425              		.cfi_def_cfa_offset 24
 1426              	.LVL173:
 1427 003f 415D     		popq	%r13
 1428              		.cfi_def_cfa_offset 16
 1429              	.LVL174:
 1430 0041 415E     		popq	%r14
 1431              		.cfi_def_cfa_offset 8
 1432              	.LVL175:
 1433              	.LBB273:
 1434              	.LBB271:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1435              		.loc 1 206 0
 1436 0043 488B4020 		movq	32(%rax), %rax
 1437 0047 FFE0     		jmp	*%rax
 1438              	.LVL176:
 1439              	.LBE271:
 1440              	.LBE273:
 1441              		.cfi_endproc
 1442              	.LFE476:
 1444              		.section	.text.unlikely._ZL17gtk_thin_down_boxiiiij
 1445              	.LCOLDE22:
 1446              		.section	.text._ZL17gtk_thin_down_boxiiiij
 1447              	.LHOTE22:
 1448              		.section	.text.unlikely._ZL17gtk_thin_up_frameiiiij,"ax",@progbits
 1449              	.LCOLDB23:
 1450              		.section	.text._ZL17gtk_thin_up_frameiiiij,"ax",@progbits
 1451              	.LHOTB23:
 1452              		.p2align 4,,15
 1454              	_ZL17gtk_thin_up_frameiiiij:
 1455              	.LFB473:
 107:fltk-1.3.4-1/src/fl_gtk.cxx ****   93:fltk-1.3.4-1/FL/fl_draw.H ****  Pushes an empty clip region onto the stack so nothing will be 
 1456              		.loc 2 107 0
 1457              		.cfi_startproc
 1458              	.LVL177:
 1459 0000 4157     		pushq	%r15
 1460              		.cfi_def_cfa_offset 16
 1461              		.cfi_offset 15, -16
 1462 0002 4156     		pushq	%r14
 1463              		.cfi_def_cfa_offset 24
 1464              		.cfi_offset 14, -24
 1465 0004 4155     		pushq	%r13
 1466              		.cfi_def_cfa_offset 32
 1467              		.cfi_offset 13, -32
 1468 0006 4154     		pushq	%r12
 1469              		.cfi_def_cfa_offset 40
 1470              		.cfi_offset 12, -40
 1471 0008 4189FD   		movl	%edi, %r13d
 1472 000b 55       		pushq	%rbp
 1473              		.cfi_def_cfa_offset 48
 1474              		.cfi_offset 6, -48
 1475 000c 53       		pushq	%rbx
 1476              		.cfi_def_cfa_offset 56
 1477              		.cfi_offset 3, -56
 1478 000d 89F5     		movl	%esi, %ebp
 108:fltk-1.3.4-1/src/fl_gtk.cxx ****   94:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1479              		.loc 2 108 0
 1480 000f BFFF0000 		movl	$255, %edi
 1480      00
 1481              	.LVL178:
 1482 0014 4489C6   		movl	%r8d, %esi
 1483              	.LVL179:
 107:fltk-1.3.4-1/src/fl_gtk.cxx ****   93:fltk-1.3.4-1/FL/fl_draw.H ****  Pushes an empty clip region onto the stack so nothing will be 
 1484              		.loc 2 107 0
 1485 0017 89D3     		movl	%edx, %ebx
 1486 0019 4883EC18 		subq	$24, %rsp
 1487              		.cfi_def_cfa_offset 80
 107:fltk-1.3.4-1/src/fl_gtk.cxx ****   93:fltk-1.3.4-1/FL/fl_draw.H ****  Pushes an empty clip region onto the stack so nothing will be 
 1488              		.loc 2 107 0
 1489 001d 4189CC   		movl	%ecx, %r12d
 109:fltk-1.3.4-1/src/fl_gtk.cxx ****   95:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_no_clip() {fl_graphics_driver->push_no_clip
 1490              		.loc 2 109 0
 1491 0020 4401EB   		addl	%r13d, %ebx
 108:fltk-1.3.4-1/src/fl_gtk.cxx ****   94:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1492              		.loc 2 108 0
 1493 0023 F30F1005 		movss	.LC20(%rip), %xmm0
 1493      00000000 
 1494 002b 44894424 		movl	%r8d, 12(%rsp)
 1494      0C
 1495 0030 E8000000 		call	_Z16fl_color_averagejjf
 1495      00
 1496              	.LVL180:
 1497              	.LBB274:
 1498              	.LBB275:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1499              		.loc 2 33 0
 1500 0035 89C7     		movl	%eax, %edi
 1501              	.LBE275:
 1502              	.LBE274:
 109:fltk-1.3.4-1/src/fl_gtk.cxx ****   95:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_no_clip() {fl_graphics_driver->push_no_clip
 1503              		.loc 2 109 0
 1504 0037 458D7D01 		leal	1(%r13), %r15d
 110:fltk-1.3.4-1/src/fl_gtk.cxx ****   96:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1505              		.loc 2 110 0
 1506 003b 4101EC   		addl	%ebp, %r12d
 1507              	.LVL181:
 1508              	.LBB277:
 1509              	.LBB276:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1510              		.loc 2 33 0
 1511 003e E8000000 		call	_ZN2Fl13set_box_colorEj
 1511      00
 1512              	.LVL182:
 1513              	.LBE276:
 1514              	.LBE277:
 1515              	.LBB278:
 1516              	.LBB279:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1517              		.loc 1 255 0
 1518 0043 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1518      000000
 1519              	.LBE279:
 1520              	.LBE278:
 109:fltk-1.3.4-1/src/fl_gtk.cxx ****   95:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_no_clip() {fl_graphics_driver->push_no_clip
 1521              		.loc 2 109 0
 1522 004a 448D4BFE 		leal	-2(%rbx), %r9d
 1523              	.LVL183:
 1524              	.LBB282:
 1525              	.LBB280:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1526              		.loc 1 255 0
 1527 004e 89EA     		movl	%ebp, %edx
 1528 0050 4489FE   		movl	%r15d, %esi
 1529              	.LBE280:
 1530              	.LBE282:
 110:fltk-1.3.4-1/src/fl_gtk.cxx ****   96:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1531              		.loc 2 110 0
 1532 0053 458D7424 		leal	-2(%r12), %r14d
 1532      FE
 1533 0058 83C501   		addl	$1, %ebp
 1534              	.LVL184:
 1535              	.LBB283:
 1536              	.LBB281:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1537              		.loc 1 255 0
 1538 005b 4489C9   		movl	%r9d, %ecx
 1539 005e 44894C24 		movl	%r9d, 8(%rsp)
 1539      08
 1540 0063 488B07   		movq	(%rdi), %rax
 1541 0066 FF5030   		call	*48(%rax)
 1542              	.LVL185:
 1543              	.LBE281:
 1544              	.LBE283:
 1545              	.LBB284:
 1546              	.LBB285:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1547              		.loc 1 270 0
 1548 0069 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1548      000000
 1549 0070 4489F1   		movl	%r14d, %ecx
 1550 0073 89EA     		movl	%ebp, %edx
 1551 0075 4489EE   		movl	%r13d, %esi
 1552 0078 488B07   		movq	(%rdi), %rax
 1553 007b FF5048   		call	*72(%rax)
 1554              	.LVL186:
 1555              	.LBE285:
 1556              	.LBE284:
 112:fltk-1.3.4-1/src/fl_gtk.cxx ****   98:fltk-1.3.4-1/FL/fl_draw.H ****  
 1557              		.loc 2 112 0
 1558 007e 448B4424 		movl	12(%rsp), %r8d
 1558      0C
 1559 0083 F30F1005 		movss	.LC18(%rip), %xmm0
 1559      00000000 
 1560 008b BF380000 		movl	$56, %edi
 1560      00
 1561 0090 4489C6   		movl	%r8d, %esi
 1562 0093 E8000000 		call	_Z16fl_color_averagejjf
 1562      00
 1563              	.LVL187:
 1564              	.LBB286:
 1565              	.LBB287:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1566              		.loc 2 33 0
 1567 0098 89C7     		movl	%eax, %edi
 1568 009a E8000000 		call	_ZN2Fl13set_box_colorEj
 1568      00
 1569              	.LVL188:
 1570              	.LBE287:
 1571              	.LBE286:
 1572              	.LBB288:
 1573              	.LBB289:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1574              		.loc 1 255 0
 1575 009f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1575      000000
 1576 00a6 448B4C24 		movl	8(%rsp), %r9d
 1576      08
 1577 00ab 418D5424 		leal	-1(%r12), %edx
 1577      FF
 1578              	.LVL189:
 1579 00b0 4489FE   		movl	%r15d, %esi
 1580 00b3 488B07   		movq	(%rdi), %rax
 1581 00b6 4489C9   		movl	%r9d, %ecx
 1582 00b9 FF5030   		call	*48(%rax)
 1583              	.LVL190:
 1584              	.LBE289:
 1585              	.LBE288:
 1586              	.LBB290:
 1587              	.LBB291:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1588              		.loc 1 270 0
 1589 00bc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1589      000000
 1590 00c3 8D73FF   		leal	-1(%rbx), %esi
 1591              	.LVL191:
 1592 00c6 4489F1   		movl	%r14d, %ecx
 1593 00c9 89EA     		movl	%ebp, %edx
 1594 00cb 488B07   		movq	(%rdi), %rax
 1595 00ce 488B4048 		movq	72(%rax), %rax
 1596              	.LBE291:
 1597              	.LBE290:
 115:fltk-1.3.4-1/src/fl_gtk.cxx ****  101:fltk-1.3.4-1/FL/fl_draw.H ****  you return to FLTK.
 1598              		.loc 2 115 0
 1599 00d2 4883C418 		addq	$24, %rsp
 1600              		.cfi_def_cfa_offset 56
 1601 00d6 5B       		popq	%rbx
 1602              		.cfi_def_cfa_offset 48
 1603 00d7 5D       		popq	%rbp
 1604              		.cfi_def_cfa_offset 40
 1605              	.LVL192:
 1606 00d8 415C     		popq	%r12
 1607              		.cfi_def_cfa_offset 32
 1608 00da 415D     		popq	%r13
 1609              		.cfi_def_cfa_offset 24
 1610              	.LVL193:
 1611 00dc 415E     		popq	%r14
 1612              		.cfi_def_cfa_offset 16
 1613              	.LVL194:
 1614 00de 415F     		popq	%r15
 1615              		.cfi_def_cfa_offset 8
 1616              	.LVL195:
 1617              	.LBB293:
 1618              	.LBB292:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1619              		.loc 1 270 0
 1620 00e0 FFE0     		jmp	*%rax
 1621              	.LVL196:
 1622              	.LBE292:
 1623              	.LBE293:
 1624              		.cfi_endproc
 1625              	.LFE473:
 1627              		.section	.text.unlikely._ZL17gtk_thin_up_frameiiiij
 1628              	.LCOLDE23:
 1629              		.section	.text._ZL17gtk_thin_up_frameiiiij
 1630              	.LHOTE23:
 1631              		.section	.text.unlikely._ZL15gtk_thin_up_boxiiiij,"ax",@progbits
 1632              	.LCOLDB24:
 1633              		.section	.text._ZL15gtk_thin_up_boxiiiij,"ax",@progbits
 1634              	.LHOTB24:
 1635              		.p2align 4,,15
 1637              	_ZL15gtk_thin_up_boxiiiij:
 1638              	.LFB474:
 118:fltk-1.3.4-1/src/fl_gtk.cxx ****  104:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1639              		.loc 2 118 0
 1640              		.cfi_startproc
 1641              	.LVL197:
 1642 0000 4157     		pushq	%r15
 1643              		.cfi_def_cfa_offset 16
 1644              		.cfi_offset 15, -16
 1645 0002 4156     		pushq	%r14
 1646              		.cfi_def_cfa_offset 24
 1647              		.cfi_offset 14, -24
 1648 0004 4189D7   		movl	%edx, %r15d
 1649 0007 4155     		pushq	%r13
 1650              		.cfi_def_cfa_offset 32
 1651              		.cfi_offset 13, -32
 1652 0009 4154     		pushq	%r12
 1653              		.cfi_def_cfa_offset 40
 1654              		.cfi_offset 12, -40
 1655 000b 4589C4   		movl	%r8d, %r12d
 1656 000e 55       		pushq	%rbp
 1657              		.cfi_def_cfa_offset 48
 1658              		.cfi_offset 6, -48
 1659 000f 53       		pushq	%rbx
 1660              		.cfi_def_cfa_offset 56
 1661              		.cfi_offset 3, -56
 1662 0010 4189F6   		movl	%esi, %r14d
 1663 0013 89CD     		movl	%ecx, %ebp
 1664 0015 89FB     		movl	%edi, %ebx
 1665 0017 4883EC08 		subq	$8, %rsp
 1666              		.cfi_def_cfa_offset 64
 122:fltk-1.3.4-1/src/fl_gtk.cxx ****  108:fltk-1.3.4-1/FL/fl_draw.H ****  region. If this returns 0 you don't have to draw the object.
 1667              		.loc 2 122 0
 1668 001b 468D6C3B 		leal	-2(%rbx,%r15), %r13d
 1668      FE
 1669 0020 83C301   		addl	$1, %ebx
 119:fltk-1.3.4-1/src/fl_gtk.cxx ****  105:fltk-1.3.4-1/FL/fl_draw.H ****  Does the rectangle intersect the current clip region?
 1670              		.loc 2 119 0
 1671 0023 E8000000 		call	_ZL17gtk_thin_up_frameiiiij
 1671      00
 1672              	.LVL198:
 121:fltk-1.3.4-1/src/fl_gtk.cxx ****  107:fltk-1.3.4-1/FL/fl_draw.H ****  \returns non-zero if any of the rectangle intersects the curre
 1673              		.loc 2 121 0
 1674 0028 F30F1005 		movss	.LC18(%rip), %xmm0
 1674      00000000 
 1675 0030 4489E6   		movl	%r12d, %esi
 1676 0033 BFFF0000 		movl	$255, %edi
 1676      00
 1677 0038 E8000000 		call	_Z16fl_color_averagejjf
 1677      00
 1678              	.LVL199:
 1679              	.LBB294:
 1680              	.LBB295:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1681              		.loc 2 33 0
 1682 003d 89C7     		movl	%eax, %edi
 1683 003f E8000000 		call	_ZN2Fl13set_box_colorEj
 1683      00
 1684              	.LVL200:
 1685              	.LBE295:
 1686              	.LBE294:
 1687              	.LBB296:
 1688              	.LBB297:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1689              		.loc 1 255 0
 1690 0044 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1690      000000
 1691 004b 418D5601 		leal	1(%r14), %edx
 1692              	.LVL201:
 1693 004f 4489E9   		movl	%r13d, %ecx
 1694 0052 89DE     		movl	%ebx, %esi
 1695 0054 488B07   		movq	(%rdi), %rax
 1696 0057 FF5030   		call	*48(%rax)
 1697              	.LVL202:
 1698              	.LBE297:
 1699              	.LBE296:
 123:fltk-1.3.4-1/src/fl_gtk.cxx ****  109:fltk-1.3.4-1/FL/fl_draw.H ****  
 1700              		.loc 2 123 0
 1701 005a F30F1005 		movss	.LC17(%rip), %xmm0
 1701      00000000 
 1702 0062 4489E6   		movl	%r12d, %esi
 1703 0065 BFFF0000 		movl	$255, %edi
 1703      00
 1704 006a E8000000 		call	_Z16fl_color_averagejjf
 1704      00
 1705              	.LVL203:
 1706              	.LBB298:
 1707              	.LBB299:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1708              		.loc 2 33 0
 1709 006f 89C7     		movl	%eax, %edi
 1710 0071 E8000000 		call	_ZN2Fl13set_box_colorEj
 1710      00
 1711              	.LVL204:
 1712              	.LBE299:
 1713              	.LBE298:
 1714              	.LBB300:
 1715              	.LBB301:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1716              		.loc 1 255 0
 1717 0076 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1717      000000
 1718 007d 418D5602 		leal	2(%r14), %edx
 1719              	.LVL205:
 1720 0081 4489E9   		movl	%r13d, %ecx
 1721 0084 89DE     		movl	%ebx, %esi
 1722 0086 488B07   		movq	(%rdi), %rax
 1723 0089 FF5030   		call	*48(%rax)
 1724              	.LVL206:
 1725              	.LBE301:
 1726              	.LBE300:
 125:fltk-1.3.4-1/src/fl_gtk.cxx ****  111:fltk-1.3.4-1/FL/fl_draw.H ****  Under X this returns 2 if the rectangle is partially clipped, 
 1727              		.loc 2 125 0
 1728 008c F30F1005 		movss	.LC13(%rip), %xmm0
 1728      00000000 
 1729 0094 4489E6   		movl	%r12d, %esi
 1730 0097 BFFF0000 		movl	$255, %edi
 1730      00
 1731 009c E8000000 		call	_Z16fl_color_averagejjf
 1731      00
 1732              	.LVL207:
 1733              	.LBB302:
 1734              	.LBB303:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1735              		.loc 2 33 0
 1736 00a1 89C7     		movl	%eax, %edi
 1737 00a3 E8000000 		call	_ZN2Fl13set_box_colorEj
 1737      00
 1738              	.LVL208:
 1739              	.LBE303:
 1740              	.LBE302:
 1741              	.LBB304:
 1742              	.LBB305:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1743              		.loc 1 255 0
 1744 00a8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1744      000000
 1745 00af 418D5603 		leal	3(%r14), %edx
 1746              	.LVL209:
 1747 00b3 4489E9   		movl	%r13d, %ecx
 1748 00b6 89DE     		movl	%ebx, %esi
 1749 00b8 488B07   		movq	(%rdi), %rax
 1750 00bb FF5030   		call	*48(%rax)
 1751              	.LVL210:
 1752              	.LBE305:
 1753              	.LBE304:
 1754              	.LBB306:
 1755              	.LBB307:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1756              		.loc 2 33 0
 1757 00be 4489E7   		movl	%r12d, %edi
 1758 00c1 E8000000 		call	_ZN2Fl13set_box_colorEj
 1758      00
 1759              	.LVL211:
 1760              	.LBE307:
 1761              	.LBE306:
 1762              	.LBB308:
 1763              	.LBB309:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1764              		.loc 1 206 0
 1765 00c6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1765      000000
 1766 00cd 448D45F8 		leal	-8(%rbp), %r8d
 1767              	.LVL212:
 1768 00d1 418D4FFE 		leal	-2(%r15), %ecx
 1769              	.LVL213:
 1770 00d5 418D5604 		leal	4(%r14), %edx
 1771              	.LVL214:
 1772 00d9 89DE     		movl	%ebx, %esi
 1773              	.LBE309:
 1774              	.LBE308:
 130:fltk-1.3.4-1/src/fl_gtk.cxx ****  116:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the rectangle with the current clip region and retu
 1775              		.loc 2 130 0
 1776 00db 4401F5   		addl	%r14d, %ebp
 1777              	.LVL215:
 1778              	.LBB311:
 1779              	.LBB310:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1780              		.loc 1 206 0
 1781 00de 488B07   		movq	(%rdi), %rax
 1782 00e1 FF5020   		call	*32(%rax)
 1783              	.LVL216:
 1784              	.LBE310:
 1785              	.LBE311:
 129:fltk-1.3.4-1/src/fl_gtk.cxx ****  115:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1786              		.loc 2 129 0
 1787 00e4 F30F1005 		movss	.LC16(%rip), %xmm0
 1787      00000000 
 1788 00ec 4489E6   		movl	%r12d, %esi
 1789 00ef BF380000 		movl	$56, %edi
 1789      00
 1790 00f4 E8000000 		call	_Z16fl_color_averagejjf
 1790      00
 1791              	.LVL217:
 1792              	.LBB312:
 1793              	.LBB313:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1794              		.loc 2 33 0
 1795 00f9 89C7     		movl	%eax, %edi
 1796 00fb E8000000 		call	_ZN2Fl13set_box_colorEj
 1796      00
 1797              	.LVL218:
 1798              	.LBE313:
 1799              	.LBE312:
 1800              	.LBB314:
 1801              	.LBB315:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1802              		.loc 1 255 0
 1803 0100 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1803      000000
 1804 0107 8D55FC   		leal	-4(%rbp), %edx
 1805              	.LVL219:
 1806 010a 4489E9   		movl	%r13d, %ecx
 1807 010d 89DE     		movl	%ebx, %esi
 1808 010f 488B07   		movq	(%rdi), %rax
 1809 0112 FF5030   		call	*48(%rax)
 1810              	.LVL220:
 1811              	.LBE315:
 1812              	.LBE314:
 131:fltk-1.3.4-1/src/fl_gtk.cxx ****  117:fltk-1.3.4-1/FL/fl_draw.H ****  bounding box of the result.
 1813              		.loc 2 131 0
 1814 0115 F30F1005 		movss	.LC12(%rip), %xmm0
 1814      00000000 
 1815 011d 4489E6   		movl	%r12d, %esi
 1816 0120 BF380000 		movl	$56, %edi
 1816      00
 1817 0125 E8000000 		call	_Z16fl_color_averagejjf
 1817      00
 1818              	.LVL221:
 1819              	.LBB316:
 1820              	.LBB317:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1821              		.loc 2 33 0
 1822 012a 89C7     		movl	%eax, %edi
 1823 012c E8000000 		call	_ZN2Fl13set_box_colorEj
 1823      00
 1824              	.LVL222:
 1825              	.LBE317:
 1826              	.LBE316:
 1827              	.LBB318:
 1828              	.LBB319:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1829              		.loc 1 255 0
 1830 0131 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1830      000000
 1831 0138 8D55FD   		leal	-3(%rbp), %edx
 1832              	.LVL223:
 1833 013b 4489E9   		movl	%r13d, %ecx
 1834 013e 89DE     		movl	%ebx, %esi
 1835 0140 488B07   		movq	(%rdi), %rax
 1836 0143 FF5030   		call	*48(%rax)
 1837              	.LVL224:
 1838              	.LBE319:
 1839              	.LBE318:
 133:fltk-1.3.4-1/src/fl_gtk.cxx ****  119:fltk-1.3.4-1/FL/fl_draw.H ****  Returns non-zero if the resulting rectangle is different to th
 1840              		.loc 2 133 0
 1841 0146 4489E6   		movl	%r12d, %esi
 1842 0149 F30F1005 		movss	.LC13(%rip), %xmm0
 1842      00000000 
 1843 0151 BF380000 		movl	$56, %edi
 1843      00
 1844 0156 E8000000 		call	_Z16fl_color_averagejjf
 1844      00
 1845              	.LVL225:
 1846              	.LBB320:
 1847              	.LBB321:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1848              		.loc 2 33 0
 1849 015b 89C7     		movl	%eax, %edi
 1850 015d E8000000 		call	_ZN2Fl13set_box_colorEj
 1850      00
 1851              	.LVL226:
 1852              	.LBE321:
 1853              	.LBE320:
 1854              	.LBB322:
 1855              	.LBB323:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1856              		.loc 1 255 0
 1857 0162 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1857      000000
 1858 0169 8D55FE   		leal	-2(%rbp), %edx
 1859              	.LVL227:
 1860 016c 4489E9   		movl	%r13d, %ecx
 1861 016f 89DE     		movl	%ebx, %esi
 1862 0171 488B07   		movq	(%rdi), %rax
 1863 0174 488B4030 		movq	48(%rax), %rax
 1864              	.LBE323:
 1865              	.LBE322:
 135:fltk-1.3.4-1/src/fl_gtk.cxx ****  121:fltk-1.3.4-1/FL/fl_draw.H ****  \p W and \p H are set to zero if the rectangle is completely o
 1866              		.loc 2 135 0
 1867 0178 4883C408 		addq	$8, %rsp
 1868              		.cfi_def_cfa_offset 56
 1869 017c 5B       		popq	%rbx
 1870              		.cfi_def_cfa_offset 48
 1871              	.LVL228:
 1872 017d 5D       		popq	%rbp
 1873              		.cfi_def_cfa_offset 40
 1874 017e 415C     		popq	%r12
 1875              		.cfi_def_cfa_offset 32
 1876              	.LVL229:
 1877 0180 415D     		popq	%r13
 1878              		.cfi_def_cfa_offset 24
 1879              	.LVL230:
 1880 0182 415E     		popq	%r14
 1881              		.cfi_def_cfa_offset 16
 1882              	.LVL231:
 1883 0184 415F     		popq	%r15
 1884              		.cfi_def_cfa_offset 8
 1885              	.LVL232:
 1886              	.LBB325:
 1887              	.LBB324:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1888              		.loc 1 255 0
 1889 0186 FFE0     		jmp	*%rax
 1890              	.LVL233:
 1891              	.LBE324:
 1892              	.LBE325:
 1893              		.cfi_endproc
 1894              	.LFE474:
 1896              		.section	.text.unlikely._ZL15gtk_thin_up_boxiiiij
 1897              	.LCOLDE24:
 1898              		.section	.text._ZL15gtk_thin_up_boxiiiij
 1899              	.LHOTE24:
 1900              		.section	.text.unlikely._ZL14gtk_down_frameiiiij,"ax",@progbits
 1901              	.LCOLDB25:
 1902              		.section	.text._ZL14gtk_down_frameiiiij,"ax",@progbits
 1903              	.LHOTB25:
 1904              		.p2align 4,,15
 1906              	_ZL14gtk_down_frameiiiij:
 1907              	.LFB471:
  76:fltk-1.3.4-1/src/fl_gtk.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 1908              		.loc 2 76 0
 1909              		.cfi_startproc
 1910              	.LVL234:
 1911 0000 4157     		pushq	%r15
 1912              		.cfi_def_cfa_offset 16
 1913              		.cfi_offset 15, -16
 1914 0002 4156     		pushq	%r14
 1915              		.cfi_def_cfa_offset 24
 1916              		.cfi_offset 14, -24
 1917 0004 4155     		pushq	%r13
 1918              		.cfi_def_cfa_offset 32
 1919              		.cfi_offset 13, -32
 1920 0006 4154     		pushq	%r12
 1921              		.cfi_def_cfa_offset 40
 1922              		.cfi_offset 12, -40
 1923 0008 4189F4   		movl	%esi, %r12d
 1924 000b 55       		pushq	%rbp
 1925              		.cfi_def_cfa_offset 48
 1926              		.cfi_offset 6, -48
 1927 000c 53       		pushq	%rbx
 1928              		.cfi_def_cfa_offset 56
 1929              		.cfi_offset 3, -56
  77:fltk-1.3.4-1/src/fl_gtk.cxx ****   63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
 1930              		.loc 2 77 0
 1931 000d 4489C6   		movl	%r8d, %esi
 1932              	.LVL235:
  76:fltk-1.3.4-1/src/fl_gtk.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 1933              		.loc 2 76 0
 1934 0010 89FD     		movl	%edi, %ebp
  77:fltk-1.3.4-1/src/fl_gtk.cxx ****   63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
 1935              		.loc 2 77 0
 1936 0012 BF380000 		movl	$56, %edi
 1936      00
 1937              	.LVL236:
  76:fltk-1.3.4-1/src/fl_gtk.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 1938              		.loc 2 76 0
 1939 0017 4189D5   		movl	%edx, %r13d
 1940 001a 4883EC48 		subq	$72, %rsp
 1941              		.cfi_def_cfa_offset 128
  76:fltk-1.3.4-1/src/fl_gtk.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 1942              		.loc 2 76 0
 1943 001e 89CB     		movl	%ecx, %ebx
  79:fltk-1.3.4-1/src/fl_gtk.cxx ****   65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_dr
 1944              		.loc 2 79 0
 1945 0020 458D7C24 		leal	2(%r12), %r15d
 1945      02
  77:fltk-1.3.4-1/src/fl_gtk.cxx ****   63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
 1946              		.loc 2 77 0
 1947 0025 F30F1005 		movss	.LC14(%rip), %xmm0
 1947      00000000 
 1948 002d 44894424 		movl	%r8d, 60(%rsp)
 1948      3C
 1949 0032 E8000000 		call	_Z16fl_color_averagejjf
 1949      00
 1950              	.LVL237:
 1951              	.LBB326:
 1952              	.LBB327:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1953              		.loc 2 33 0
 1954 0037 89C7     		movl	%eax, %edi
 1955              	.LBE327:
 1956              	.LBE326:
  80:fltk-1.3.4-1/src/fl_gtk.cxx ****   66:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1957              		.loc 2 80 0
 1958 0039 448D7502 		leal	2(%rbp), %r14d
  81:fltk-1.3.4-1/src/fl_gtk.cxx ****   67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
 1959              		.loc 2 81 0
 1960 003d 4101ED   		addl	%ebp, %r13d
 1961              	.LVL238:
 1962              	.LBB329:
 1963              	.LBB328:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1964              		.loc 2 33 0
 1965 0040 E8000000 		call	_ZN2Fl13set_box_colorEj
 1965      00
 1966              	.LVL239:
 1967              	.LBE328:
 1968              	.LBE329:
 1969              	.LBB330:
 1970              	.LBB331:
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
 1971              		.loc 1 370 0
 1972 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1972      000000
 1973              	.LBE331:
 1974              	.LBE330:
  83:fltk-1.3.4-1/src/fl_gtk.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 1975              		.loc 2 83 0
 1976 004c 4401E3   		addl	%r12d, %ebx
 1977              	.LVL240:
 1978              	.LBB333:
 1979              	.LBB332:
 1980              		.loc 1 370 0
 1981 004f 488B07   		movq	(%rdi), %rax
 1982 0052 FF90D000 		call	*208(%rax)
 1982      0000
 1983              	.LVL241:
 1984              	.LBE332:
 1985              	.LBE333:
  79:fltk-1.3.4-1/src/fl_gtk.cxx ****   65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_dr
 1986              		.loc 2 79 0
 1987 0058 660FEFE4 		pxor	%xmm4, %xmm4
 1988              	.LBB334:
 1989              	.LBB335:
 371:fltk-1.3.4-1/FL/fl_draw.H **** /**
 372:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a convex filled polygon.
 373:fltk-1.3.4-1/FL/fl_draw.H ****  */
 374:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_polygon() {fl_graphics_driver->begin_polygon(); }
 375:fltk-1.3.4-1/FL/fl_draw.H **** /**
 376:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a single vertex to the current path.
 377:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->vertex(x,y); }
 1990              		.loc 1 379 0
 1991 005c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1991      000000
 1992              	.LBE335:
 1993              	.LBE334:
  79:fltk-1.3.4-1/src/fl_gtk.cxx ****   65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_dr
 1994              		.loc 2 79 0
 1995 0063 660FEFDB 		pxor	%xmm3, %xmm3
 1996 0067 F2410F2A 		cvtsi2sd	%r15d, %xmm4
 1996      E7
 1997              	.LBB338:
 1998              	.LBB336:
 1999              		.loc 1 379 0
 2000 006c 488B07   		movq	(%rdi), %rax
 2001              	.LBE336:
 2002              	.LBE338:
  79:fltk-1.3.4-1/src/fl_gtk.cxx ****   65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_dr
 2003              		.loc 2 79 0
 2004 006f F20F2ADD 		cvtsi2sd	%ebp, %xmm3
 2005              	.LVL242:
 2006              	.LBB339:
 2007              	.LBB337:
 2008              		.loc 1 379 0
 2009 0073 660F28CC 		movapd	%xmm4, %xmm1
 2010 0077 F20F1164 		movsd	%xmm4, 16(%rsp)
 2010      2410
 2011 007d 660F28C3 		movapd	%xmm3, %xmm0
 2012 0081 F20F115C 		movsd	%xmm3, 48(%rsp)
 2012      2430
 2013 0087 FF90E000 		call	*224(%rax)
 2013      0000
 2014              	.LVL243:
 2015              	.LBE337:
 2016              	.LBE339:
  80:fltk-1.3.4-1/src/fl_gtk.cxx ****   66:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2017              		.loc 2 80 0
 2018 008d 660FEFD2 		pxor	%xmm2, %xmm2
 2019              	.LBB340:
 2020              	.LBB341:
 2021              		.loc 1 379 0
 2022 0091 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2022      000000
 2023              	.LBE341:
 2024              	.LBE340:
  80:fltk-1.3.4-1/src/fl_gtk.cxx ****   66:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2025              		.loc 2 80 0
 2026 0098 660FEFED 		pxor	%xmm5, %xmm5
 2027 009c F2410F2A 		cvtsi2sd	%r12d, %xmm2
 2027      D4
 2028              	.LBB344:
 2029              	.LBB342:
 2030              		.loc 1 379 0
 2031 00a1 488B07   		movq	(%rdi), %rax
 2032              	.LBE342:
 2033              	.LBE344:
  80:fltk-1.3.4-1/src/fl_gtk.cxx ****   66:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2034              		.loc 2 80 0
 2035 00a4 F2410F2A 		cvtsi2sd	%r14d, %xmm5
 2035      EE
 2036              	.LVL244:
 2037              	.LBB345:
 2038              	.LBB343:
 2039              		.loc 1 379 0
 2040 00a9 660F28CA 		movapd	%xmm2, %xmm1
 2041 00ad F20F1154 		movsd	%xmm2, 8(%rsp)
 2041      2408
 2042 00b3 660F28C5 		movapd	%xmm5, %xmm0
 2043 00b7 F20F116C 		movsd	%xmm5, 40(%rsp)
 2043      2428
 2044 00bd FF90E000 		call	*224(%rax)
 2044      0000
 2045              	.LVL245:
 2046              	.LBE343:
 2047              	.LBE345:
  81:fltk-1.3.4-1/src/fl_gtk.cxx ****   67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
 2048              		.loc 2 81 0
 2049 00c3 660FEFF6 		pxor	%xmm6, %xmm6
 2050 00c7 418D4DFD 		leal	-3(%r13), %ecx
 2051              	.LBB346:
 2052              	.LBB347:
 2053              		.loc 1 379 0
 2054 00cb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2054      000000
 2055 00d2 F20F1054 		movsd	8(%rsp), %xmm2
 2055      2408
 2056              	.LBE347:
 2057              	.LBE346:
  81:fltk-1.3.4-1/src/fl_gtk.cxx ****   67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
 2058              		.loc 2 81 0
 2059 00d8 894C2438 		movl	%ecx, 56(%rsp)
 2060 00dc F20F2AF1 		cvtsi2sd	%ecx, %xmm6
 2061              	.LVL246:
 2062              	.LBB349:
 2063              	.LBB348:
 2064              		.loc 1 379 0
 2065 00e0 660F28CA 		movapd	%xmm2, %xmm1
 2066 00e4 488B07   		movq	(%rdi), %rax
 2067 00e7 660F28C6 		movapd	%xmm6, %xmm0
 2068 00eb F20F1174 		movsd	%xmm6, 32(%rsp)
 2068      2420
 2069 00f1 FF90E000 		call	*224(%rax)
 2069      0000
 2070              	.LVL247:
 2071              	.LBE348:
 2072              	.LBE349:
  82:fltk-1.3.4-1/src/fl_gtk.cxx ****   68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
 2073              		.loc 2 82 0
 2074 00f7 660FEFD2 		pxor	%xmm2, %xmm2
 2075 00fb 418D45FF 		leal	-1(%r13), %eax
 2076              	.LBB350:
 2077              	.LBB351:
 2078              		.loc 1 379 0
 2079 00ff 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2079      000000
 2080 0106 F20F1064 		movsd	16(%rsp), %xmm4
 2080      2410
 2081              	.LBE351:
 2082              	.LBE350:
  82:fltk-1.3.4-1/src/fl_gtk.cxx ****   68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
 2083              		.loc 2 82 0
 2084 010c F20F2AD0 		cvtsi2sd	%eax, %xmm2
 2085              	.LVL248:
 2086              	.LBB353:
 2087              	.LBB352:
 2088              		.loc 1 379 0
 2089 0110 488B07   		movq	(%rdi), %rax
 2090 0113 660F28CC 		movapd	%xmm4, %xmm1
 2091 0117 660F28C2 		movapd	%xmm2, %xmm0
 2092 011b F20F1154 		movsd	%xmm2, 8(%rsp)
 2092      2408
 2093 0121 FF90E000 		call	*224(%rax)
 2093      0000
 2094              	.LVL249:
 2095              	.LBE352:
 2096              	.LBE353:
  83:fltk-1.3.4-1/src/fl_gtk.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 2097              		.loc 2 83 0
 2098 0127 660FEFE4 		pxor	%xmm4, %xmm4
 2099 012b 448D4BFD 		leal	-3(%rbx), %r9d
 2100              	.LBB354:
 2101              	.LBB355:
 2102              		.loc 1 379 0
 2103 012f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2103      000000
 2104 0136 F20F1054 		movsd	8(%rsp), %xmm2
 2104      2408
 2105              	.LBE355:
 2106              	.LBE354:
  83:fltk-1.3.4-1/src/fl_gtk.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 2107              		.loc 2 83 0
 2108 013c 44894C24 		movl	%r9d, 28(%rsp)
 2108      1C
 2109              	.LVL250:
 2110 0141 F2410F2A 		cvtsi2sd	%r9d, %xmm4
 2110      E1
 2111              	.LVL251:
 2112              	.LBB357:
 2113              	.LBB356:
 2114              		.loc 1 379 0
 2115 0146 660F28C2 		movapd	%xmm2, %xmm0
 2116 014a 488B07   		movq	(%rdi), %rax
 2117 014d 660F28CC 		movapd	%xmm4, %xmm1
 2118 0151 F20F1164 		movsd	%xmm4, 16(%rsp)
 2118      2410
 2119 0157 FF90E000 		call	*224(%rax)
 2119      0000
 2120              	.LVL252:
 2121              	.LBE356:
 2122              	.LBE357:
  84:fltk-1.3.4-1/src/fl_gtk.cxx ****   70:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Color fl_color() {return fl_graphics_driver->color();
 2123              		.loc 2 84 0
 2124 015d 660FEFD2 		pxor	%xmm2, %xmm2
 2125 0161 8D43FF   		leal	-1(%rbx), %eax
 2126              	.LBB358:
 2127              	.LBB359:
 2128              		.loc 1 379 0
 2129 0164 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2129      000000
 2130 016b F20F1074 		movsd	32(%rsp), %xmm6
 2130      2420
 2131              	.LBE359:
 2132              	.LBE358:
  84:fltk-1.3.4-1/src/fl_gtk.cxx ****   70:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Color fl_color() {return fl_graphics_driver->color();
 2133              		.loc 2 84 0
 2134 0171 F20F2AD0 		cvtsi2sd	%eax, %xmm2
 2135              	.LVL253:
 2136              	.LBB361:
 2137              	.LBB360:
 2138              		.loc 1 379 0
 2139 0175 488B07   		movq	(%rdi), %rax
 2140 0178 660F28C6 		movapd	%xmm6, %xmm0
 2141 017c 660F28CA 		movapd	%xmm2, %xmm1
 2142 0180 F20F1154 		movsd	%xmm2, 8(%rsp)
 2142      2408
 2143 0186 FF90E000 		call	*224(%rax)
 2143      0000
 2144              	.LVL254:
 2145              	.LBE360:
 2146              	.LBE361:
 2147              	.LBB362:
 2148              	.LBB363:
 2149 018c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2149      000000
 2150 0193 F20F1054 		movsd	8(%rsp), %xmm2
 2150      2408
 2151 0199 F20F106C 		movsd	40(%rsp), %xmm5
 2151      2428
 2152 019f 488B07   		movq	(%rdi), %rax
 2153 01a2 660F28CA 		movapd	%xmm2, %xmm1
 2154 01a6 660F28C5 		movapd	%xmm5, %xmm0
 2155 01aa FF90E000 		call	*224(%rax)
 2155      0000
 2156              	.LVL255:
 2157              	.LBE363:
 2158              	.LBE362:
 2159              	.LBB364:
 2160              	.LBB365:
 2161 01b0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2161      000000
 2162 01b7 F20F1064 		movsd	16(%rsp), %xmm4
 2162      2410
 2163 01bd F20F105C 		movsd	48(%rsp), %xmm3
 2163      2430
 2164 01c3 660F28CC 		movapd	%xmm4, %xmm1
 2165 01c7 488B07   		movq	(%rdi), %rax
 2166 01ca 660F28C3 		movapd	%xmm3, %xmm0
 2167 01ce FF90E000 		call	*224(%rax)
 2167      0000
 2168              	.LVL256:
 2169              	.LBE365:
 2170              	.LBE364:
 2171              	.LBB366:
 2172              	.LBB367:
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
 2173              		.loc 1 436 0
 2174 01d4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2174      000000
 2175 01db 488B07   		movq	(%rdi), %rax
 2176 01de FF902001 		call	*288(%rax)
 2176      0000
 2177              	.LVL257:
 2178              	.LBE367:
 2179              	.LBE366:
  89:fltk-1.3.4-1/src/fl_gtk.cxx ****   75:fltk-1.3.4-1/FL/fl_draw.H **** */
 2180              		.loc 2 89 0
 2181 01e4 448B4424 		movl	60(%rsp), %r8d
 2181      3C
 2182 01e9 F30F1005 		movss	.LC13(%rip), %xmm0
 2182      00000000 
 2183 01f1 BF380000 		movl	$56, %edi
 2183      00
 2184 01f6 4489C6   		movl	%r8d, %esi
 2185 01f9 44894424 		movl	%r8d, 8(%rsp)
 2185      08
 2186 01fe E8000000 		call	_Z16fl_color_averagejjf
 2186      00
 2187              	.LVL258:
 2188              	.LBB368:
 2189              	.LBB369:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2190              		.loc 2 33 0
 2191 0203 89C7     		movl	%eax, %edi
 2192 0205 E8000000 		call	_ZN2Fl13set_box_colorEj
 2192      00
 2193              	.LVL259:
 2194              	.LBE369:
 2195              	.LBE368:
 2196              	.LBB370:
 2197              	.LBB371:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2198              		.loc 1 255 0
 2199 020a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2199      000000
 2200 0211 418D5424 		leal	1(%r12), %edx
 2200      01
 2201              	.LVL260:
 2202 0216 8B4C2438 		movl	56(%rsp), %ecx
 2203 021a 4489F6   		movl	%r14d, %esi
 2204 021d 488B07   		movq	(%rdi), %rax
 2205 0220 FF5030   		call	*48(%rax)
 2206              	.LVL261:
 2207              	.LBE371:
 2208              	.LBE370:
 2209              	.LBB372:
 2210              	.LBB373:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2211              		.loc 1 270 0
 2212 0223 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2212      000000
 2213 022a 448B4C24 		movl	28(%rsp), %r9d
 2213      1C
 2214 022f 4489FA   		movl	%r15d, %edx
 2215 0232 8D7501   		leal	1(%rbp), %esi
 2216              	.LVL262:
 2217 0235 488B07   		movq	(%rdi), %rax
 2218 0238 4489C9   		movl	%r9d, %ecx
 2219 023b FF5048   		call	*72(%rax)
 2220              	.LVL263:
 2221              	.LBE373:
 2222              	.LBE372:
  93:fltk-1.3.4-1/src/fl_gtk.cxx ****   79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
 2223              		.loc 2 93 0
 2224 023e 448B4424 		movl	8(%rsp), %r8d
 2224      08
 2225 0243 F30F1005 		movss	.LC12(%rip), %xmm0
 2225      00000000 
 2226 024b BF380000 		movl	$56, %edi
 2226      00
 2227 0250 4489C6   		movl	%r8d, %esi
 2228 0253 E8000000 		call	_Z16fl_color_averagejjf
 2228      00
 2229              	.LVL264:
 2230              	.LBB374:
 2231              	.LBB375:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2232              		.loc 2 33 0
 2233 0258 89C7     		movl	%eax, %edi
 2234 025a E8000000 		call	_ZN2Fl13set_box_colorEj
 2234      00
 2235              	.LVL265:
 2236              	.LBE375:
 2237              	.LBE374:
 2238              	.LBB376:
 2239              	.LBB377:
 274:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2240              		.loc 1 274 0
 2241 025f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2241      000000
 2242 0266 8D53FE   		leal	-2(%rbx), %edx
 2243              	.LVL266:
 2244 0269 458D45FE 		leal	-2(%r13), %r8d
 2245              	.LVL267:
 2246 026d 4489F9   		movl	%r15d, %ecx
 2247 0270 4489F6   		movl	%r14d, %esi
 2248 0273 488B07   		movq	(%rdi), %rax
 2249 0276 488B4050 		movq	80(%rax), %rax
 2250              	.LBE377:
 2251              	.LBE376:
  95:fltk-1.3.4-1/src/fl_gtk.cxx ****   81:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2252              		.loc 2 95 0
 2253 027a 4883C448 		addq	$72, %rsp
 2254              		.cfi_def_cfa_offset 56
 2255 027e 5B       		popq	%rbx
 2256              		.cfi_def_cfa_offset 48
 2257 027f 5D       		popq	%rbp
 2258              		.cfi_def_cfa_offset 40
 2259              	.LVL268:
 2260 0280 415C     		popq	%r12
 2261              		.cfi_def_cfa_offset 32
 2262              	.LVL269:
 2263 0282 415D     		popq	%r13
 2264              		.cfi_def_cfa_offset 24
 2265 0284 415E     		popq	%r14
 2266              		.cfi_def_cfa_offset 16
 2267              	.LVL270:
 2268 0286 415F     		popq	%r15
 2269              		.cfi_def_cfa_offset 8
 2270              	.LVL271:
 2271              	.LBB379:
 2272              	.LBB378:
 274:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2273              		.loc 1 274 0
 2274 0288 FFE0     		jmp	*%rax
 2275              	.LVL272:
 2276              	.LBE378:
 2277              	.LBE379:
 2278              		.cfi_endproc
 2279              	.LFE471:
 2281              		.section	.text.unlikely._ZL14gtk_down_frameiiiij
 2282              	.LCOLDE25:
 2283              		.section	.text._ZL14gtk_down_frameiiiij
 2284              	.LHOTE25:
 2285              		.section	.text.unlikely._ZL12gtk_down_boxiiiij,"ax",@progbits
 2286              	.LCOLDB26:
 2287              		.section	.text._ZL12gtk_down_boxiiiij,"ax",@progbits
 2288              	.LHOTB26:
 2289              		.p2align 4,,15
 2291              	_ZL12gtk_down_boxiiiij:
 2292              	.LFB472:
  98:fltk-1.3.4-1/src/fl_gtk.cxx ****   84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 2293              		.loc 2 98 0
 2294              		.cfi_startproc
 2295              	.LVL273:
 2296 0000 4156     		pushq	%r14
 2297              		.cfi_def_cfa_offset 16
 2298              		.cfi_offset 14, -16
 2299 0002 4155     		pushq	%r13
 2300              		.cfi_def_cfa_offset 24
 2301              		.cfi_offset 13, -24
 2302 0004 4589C6   		movl	%r8d, %r14d
 2303 0007 4154     		pushq	%r12
 2304              		.cfi_def_cfa_offset 32
 2305              		.cfi_offset 12, -32
 2306 0009 55       		pushq	%rbp
 2307              		.cfi_def_cfa_offset 40
 2308              		.cfi_offset 6, -40
 2309 000a 4189F5   		movl	%esi, %r13d
 2310 000d 53       		pushq	%rbx
 2311              		.cfi_def_cfa_offset 48
 2312              		.cfi_offset 3, -48
  98:fltk-1.3.4-1/src/fl_gtk.cxx ****   84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 2313              		.loc 2 98 0
 2314 000e 4189CC   		movl	%ecx, %r12d
 2315 0011 89D3     		movl	%edx, %ebx
 2316 0013 89FD     		movl	%edi, %ebp
  99:fltk-1.3.4-1/src/fl_gtk.cxx ****   85:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack (deprecated).
 2317              		.loc 2 99 0
 2318 0015 E8000000 		call	_ZL14gtk_down_frameiiiij
 2318      00
 2319              	.LVL274:
 2320              	.LBB380:
 2321              	.LBB381:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2322              		.loc 2 33 0
 2323 001a 4489F7   		movl	%r14d, %edi
 2324              	.LBE381:
 2325              	.LBE380:
 102:fltk-1.3.4-1/src/fl_gtk.cxx ****   88:fltk-1.3.4-1/FL/fl_draw.H ****    fl_clip(int, int, int, int) is deprecated and will be remove
 2326              		.loc 2 102 0
 2327 001d 458D7503 		leal	3(%r13), %r14d
 2328              	.LVL275:
 2329              	.LBB383:
 2330              	.LBB382:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2331              		.loc 2 33 0
 2332 0021 E8000000 		call	_ZN2Fl13set_box_colorEj
 2332      00
 2333              	.LVL276:
 2334              	.LBE382:
 2335              	.LBE383:
 2336              	.LBB384:
 2337              	.LBB385:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2338              		.loc 1 206 0
 2339 0026 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2339      000000
 2340 002d 8D4BFB   		leal	-5(%rbx), %ecx
 2341              	.LVL277:
 2342 0030 8D7503   		leal	3(%rbp), %esi
 2343              	.LVL278:
 2344 0033 4489F2   		movl	%r14d, %edx
 2345 0036 458D4424 		leal	-4(%r12), %r8d
 2345      FC
 2346              	.LVL279:
 2347 003b 488B07   		movq	(%rdi), %rax
 2348 003e FF5020   		call	*32(%rax)
 2349              	.LVL280:
 2350              	.LBE385:
 2351              	.LBE384:
 2352              	.LBB386:
 2353              	.LBB387:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2354              		.loc 1 270 0
 2355 0041 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2355      000000
 2356 0048 438D4C25 		leal	-3(%r13,%r12), %ecx
 2356      FD
 2357              	.LVL281:
 2358 004d 8D741DFE 		leal	-2(%rbp,%rbx), %esi
 2359              	.LVL282:
 2360 0051 4489F2   		movl	%r14d, %edx
 2361              	.LBE387:
 2362              	.LBE386:
 104:fltk-1.3.4-1/src/fl_gtk.cxx ****   90:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2363              		.loc 2 104 0
 2364 0054 5B       		popq	%rbx
 2365              		.cfi_def_cfa_offset 40
 2366              	.LVL283:
 2367              	.LBB390:
 2368              	.LBB388:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2369              		.loc 1 270 0
 2370 0055 488B07   		movq	(%rdi), %rax
 2371              	.LBE388:
 2372              	.LBE390:
 104:fltk-1.3.4-1/src/fl_gtk.cxx ****   90:fltk-1.3.4-1/FL/fl_draw.H ****  */
 2373              		.loc 2 104 0
 2374 0058 5D       		popq	%rbp
 2375              		.cfi_def_cfa_offset 32
 2376              	.LVL284:
 2377 0059 415C     		popq	%r12
 2378              		.cfi_def_cfa_offset 24
 2379              	.LVL285:
 2380 005b 415D     		popq	%r13
 2381              		.cfi_def_cfa_offset 16
 2382              	.LVL286:
 2383 005d 415E     		popq	%r14
 2384              		.cfi_def_cfa_offset 8
 2385              	.LVL287:
 2386              	.LBB391:
 2387              	.LBB389:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2388              		.loc 1 270 0
 2389 005f 488B4048 		movq	72(%rax), %rax
 2390 0063 FFE0     		jmp	*%rax
 2391              	.LVL288:
 2392              	.LBE389:
 2393              	.LBE391:
 2394              		.cfi_endproc
 2395              	.LFE472:
 2397              		.section	.text.unlikely._ZL12gtk_down_boxiiiij
 2398              	.LCOLDE26:
 2399              		.section	.text._ZL12gtk_down_boxiiiij
 2400              	.LHOTE26:
 2401              		.section	.text.unlikely._ZL12gtk_up_frameiiiij,"ax",@progbits
 2402              	.LCOLDB27:
 2403              		.section	.text._ZL12gtk_up_frameiiiij,"ax",@progbits
 2404              	.LHOTB27:
 2405              		.p2align 4,,15
 2407              	_ZL12gtk_up_frameiiiij:
 2408              	.LFB469:
  36:fltk-1.3.4-1/src/fl_gtk.cxx ****   22:fltk-1.3.4-1/FL/fl_draw.H **** */
 2409              		.loc 2 36 0
 2410              		.cfi_startproc
 2411              	.LVL289:
 2412 0000 4157     		pushq	%r15
 2413              		.cfi_def_cfa_offset 16
 2414              		.cfi_offset 15, -16
 2415 0002 4156     		pushq	%r14
 2416              		.cfi_def_cfa_offset 24
 2417              		.cfi_offset 14, -24
 2418 0004 4155     		pushq	%r13
 2419              		.cfi_def_cfa_offset 32
 2420              		.cfi_offset 13, -32
 2421 0006 4154     		pushq	%r12
 2422              		.cfi_def_cfa_offset 40
 2423              		.cfi_offset 12, -40
 2424 0008 4189F5   		movl	%esi, %r13d
 2425 000b 55       		pushq	%rbp
 2426              		.cfi_def_cfa_offset 48
 2427              		.cfi_offset 6, -48
 2428 000c 53       		pushq	%rbx
 2429              		.cfi_def_cfa_offset 56
 2430              		.cfi_offset 3, -56
 2431 000d 4189FC   		movl	%edi, %r12d
  37:fltk-1.3.4-1/src/fl_gtk.cxx ****   23:fltk-1.3.4-1/FL/fl_draw.H **** 
 2432              		.loc 2 37 0
 2433 0010 4489C6   		movl	%r8d, %esi
 2434              	.LVL290:
 2435 0013 BFFF0000 		movl	$255, %edi
 2435      00
 2436              	.LVL291:
  36:fltk-1.3.4-1/src/fl_gtk.cxx ****   22:fltk-1.3.4-1/FL/fl_draw.H **** */
 2437              		.loc 2 36 0
 2438 0018 89D5     		movl	%edx, %ebp
 2439 001a 4883EC38 		subq	$56, %rsp
 2440              		.cfi_def_cfa_offset 112
  36:fltk-1.3.4-1/src/fl_gtk.cxx ****   22:fltk-1.3.4-1/FL/fl_draw.H **** */
 2441              		.loc 2 36 0
 2442 001e 89CB     		movl	%ecx, %ebx
  38:fltk-1.3.4-1/src/fl_gtk.cxx ****   24:fltk-1.3.4-1/FL/fl_draw.H **** #ifndef fl_draw_H
 2443              		.loc 2 38 0
 2444 0020 4401E5   		addl	%r12d, %ebp
  37:fltk-1.3.4-1/src/fl_gtk.cxx ****   23:fltk-1.3.4-1/FL/fl_draw.H **** 
 2445              		.loc 2 37 0
 2446 0023 F30F1005 		movss	.LC14(%rip), %xmm0
 2446      00000000 
 2447 002b 44894424 		movl	%r8d, 16(%rsp)
 2447      10
 2448 0030 E8000000 		call	_Z16fl_color_averagejjf
 2448      00
 2449              	.LVL292:
 2450              	.LBB392:
 2451              	.LBB393:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2452              		.loc 2 33 0
 2453 0035 89C7     		movl	%eax, %edi
 2454              	.LBE393:
 2455              	.LBE392:
  38:fltk-1.3.4-1/src/fl_gtk.cxx ****   24:fltk-1.3.4-1/FL/fl_draw.H **** #ifndef fl_draw_H
 2456              		.loc 2 38 0
 2457 0037 458D7C24 		leal	2(%r12), %r15d
 2457      02
  39:fltk-1.3.4-1/src/fl_gtk.cxx ****   25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
 2458              		.loc 2 39 0
 2459 003c 4401EB   		addl	%r13d, %ebx
 2460              	.LVL293:
 2461              	.LBB395:
 2462              	.LBB394:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2463              		.loc 2 33 0
 2464 003f E8000000 		call	_ZN2Fl13set_box_colorEj
 2464      00
 2465              	.LVL294:
 2466              	.LBE394:
 2467              	.LBE395:
 2468              	.LBB396:
 2469              	.LBB397:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2470              		.loc 1 255 0
 2471 0044 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2471      000000
 2472              	.LBE397:
 2473              	.LBE396:
  38:fltk-1.3.4-1/src/fl_gtk.cxx ****   24:fltk-1.3.4-1/FL/fl_draw.H **** #ifndef fl_draw_H
 2474              		.loc 2 38 0
 2475 004b 448D4DFD 		leal	-3(%rbp), %r9d
 2476              	.LVL295:
 2477              	.LBB401:
 2478              	.LBB398:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2479              		.loc 1 255 0
 2480 004f 418D5501 		leal	1(%r13), %edx
 2481              	.LVL296:
 2482 0053 4489FE   		movl	%r15d, %esi
 2483              	.LBE398:
 2484              	.LBE401:
  39:fltk-1.3.4-1/src/fl_gtk.cxx ****   25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
 2485              		.loc 2 39 0
 2486 0056 448D73FD 		leal	-3(%rbx), %r14d
  46:fltk-1.3.4-1/src/fl_gtk.cxx ****   32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
 2487              		.loc 2 46 0
 2488 005a 83ED01   		subl	$1, %ebp
 2489              	.LBB402:
 2490              	.LBB399:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2491              		.loc 1 255 0
 2492 005d 4489C9   		movl	%r9d, %ecx
 2493 0060 44894C24 		movl	%r9d, 24(%rsp)
 2493      18
 2494              	.LBE399:
 2495              	.LBE402:
  48:fltk-1.3.4-1/src/fl_gtk.cxx ****   34:fltk-1.3.4-1/FL/fl_draw.H **** 
 2496              		.loc 2 48 0
 2497 0065 83EB01   		subl	$1, %ebx
 2498              	.LBB403:
 2499              	.LBB400:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2500              		.loc 1 255 0
 2501 0068 488B07   		movq	(%rdi), %rax
 2502 006b FF5030   		call	*48(%rax)
 2503              	.LVL297:
 2504              	.LBE400:
 2505              	.LBE403:
 2506              	.LBB404:
 2507              	.LBB405:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2508              		.loc 1 270 0
 2509 006e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2509      000000
 2510              	.LBE405:
 2511              	.LBE404:
  39:fltk-1.3.4-1/src/fl_gtk.cxx ****   25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
 2512              		.loc 2 39 0
 2513 0075 458D5502 		leal	2(%r13), %r10d
 2514              	.LVL298:
 2515              	.LBB407:
 2516              	.LBB406:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2517              		.loc 1 270 0
 2518 0079 4489F1   		movl	%r14d, %ecx
 2519 007c 418D7424 		leal	1(%r12), %esi
 2519      01
 2520              	.LVL299:
 2521 0081 4489D2   		movl	%r10d, %edx
 2522 0084 44895424 		movl	%r10d, 8(%rsp)
 2522      08
 2523 0089 488B07   		movq	(%rdi), %rax
 2524 008c FF5048   		call	*72(%rax)
 2525              	.LVL300:
 2526              	.LBE406:
 2527              	.LBE407:
  41:fltk-1.3.4-1/src/fl_gtk.cxx ****   27:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/x.H>	      // for Fl_Region
 2528              		.loc 2 41 0
 2529 008f 448B4424 		movl	16(%rsp), %r8d
 2529      10
 2530 0094 F30F1005 		movss	.LC14(%rip), %xmm0
 2530      00000000 
 2531 009c BF380000 		movl	$56, %edi
 2531      00
 2532 00a1 4489C6   		movl	%r8d, %esi
 2533 00a4 E8000000 		call	_Z16fl_color_averagejjf
 2533      00
 2534              	.LVL301:
 2535              	.LBB408:
 2536              	.LBB409:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2537              		.loc 2 33 0
 2538 00a9 89C7     		movl	%eax, %edi
 2539 00ab E8000000 		call	_ZN2Fl13set_box_colorEj
 2539      00
 2540              	.LVL302:
 2541              	.LBE409:
 2542              	.LBE408:
 2543              	.LBB410:
 2544              	.LBB411:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2545              		.loc 1 370 0
 2546 00b0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2546      000000
 2547 00b7 488B07   		movq	(%rdi), %rax
 2548 00ba FF90D000 		call	*208(%rax)
 2548      0000
 2549              	.LVL303:
 2550              	.LBE411:
 2551              	.LBE410:
  43:fltk-1.3.4-1/src/fl_gtk.cxx ****   29:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Window.H>     // for fl_set_spot()
 2552              		.loc 2 43 0
 2553 00c0 448B5424 		movl	8(%rsp), %r10d
 2553      08
 2554 00c5 660FEFE4 		pxor	%xmm4, %xmm4
 2555 00c9 660FEFD2 		pxor	%xmm2, %xmm2
 2556              	.LBB412:
 2557              	.LBB413:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2558              		.loc 1 379 0
 2559 00cd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2559      000000
 2560              	.LBE413:
 2561              	.LBE412:
  43:fltk-1.3.4-1/src/fl_gtk.cxx ****   29:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Window.H>     // for fl_set_spot()
 2562              		.loc 2 43 0
 2563 00d4 F2410F2A 		cvtsi2sd	%r10d, %xmm4
 2563      E2
 2564 00d9 F2410F2A 		cvtsi2sd	%r12d, %xmm2
 2564      D4
 2565              	.LVL304:
 2566              	.LBB415:
 2567              	.LBB414:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2568              		.loc 1 379 0
 2569 00de 488B07   		movq	(%rdi), %rax
 2570 00e1 660F28CC 		movapd	%xmm4, %xmm1
 2571 00e5 F20F1164 		movsd	%xmm4, 16(%rsp)
 2571      2410
 2572              	.LVL305:
 2573 00eb 660F28C2 		movapd	%xmm2, %xmm0
 2574 00ef F20F1154 		movsd	%xmm2, 40(%rsp)
 2574      2428
 2575 00f5 FF90E000 		call	*224(%rax)
 2575      0000
 2576              	.LVL306:
 2577              	.LBE414:
 2578              	.LBE415:
  44:fltk-1.3.4-1/src/fl_gtk.cxx ****   30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
 2579              		.loc 2 44 0
 2580 00fb 660FEFDB 		pxor	%xmm3, %xmm3
 2581              	.LBB416:
 2582              	.LBB417:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2583              		.loc 1 379 0
 2584 00ff 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2584      000000
 2585              	.LBE417:
 2586              	.LBE416:
  44:fltk-1.3.4-1/src/fl_gtk.cxx ****   30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
 2587              		.loc 2 44 0
 2588 0106 660FEFED 		pxor	%xmm5, %xmm5
 2589 010a F2410F2A 		cvtsi2sd	%r13d, %xmm3
 2589      DD
 2590              	.LBB420:
 2591              	.LBB418:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2592              		.loc 1 379 0
 2593 010f 488B07   		movq	(%rdi), %rax
 2594              	.LBE418:
 2595              	.LBE420:
  44:fltk-1.3.4-1/src/fl_gtk.cxx ****   30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
 2596              		.loc 2 44 0
 2597 0112 F2410F2A 		cvtsi2sd	%r15d, %xmm5
 2597      EF
 2598              	.LVL307:
 2599              	.LBB421:
 2600              	.LBB419:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2601              		.loc 1 379 0
 2602 0117 660F28CB 		movapd	%xmm3, %xmm1
 2603 011b F20F115C 		movsd	%xmm3, 8(%rsp)
 2603      2408
 2604 0121 660F28C5 		movapd	%xmm5, %xmm0
 2605 0125 F20F116C 		movsd	%xmm5, 32(%rsp)
 2605      2420
 2606 012b FF90E000 		call	*224(%rax)
 2606      0000
 2607              	.LVL308:
 2608              	.LBE419:
 2609              	.LBE421:
  45:fltk-1.3.4-1/src/fl_gtk.cxx ****   31:fltk-1.3.4-1/FL/fl_draw.H **** 
 2610              		.loc 2 45 0
 2611 0131 448B4C24 		movl	24(%rsp), %r9d
 2611      18
 2612 0136 660FEFF6 		pxor	%xmm6, %xmm6
 2613              	.LBB422:
 2614              	.LBB423:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2615              		.loc 1 379 0
 2616 013a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2616      000000
 2617 0141 F20F105C 		movsd	8(%rsp), %xmm3
 2617      2408
 2618              	.LBE423:
 2619              	.LBE422:
  45:fltk-1.3.4-1/src/fl_gtk.cxx ****   31:fltk-1.3.4-1/FL/fl_draw.H **** 
 2620              		.loc 2 45 0
 2621 0147 F2410F2A 		cvtsi2sd	%r9d, %xmm6
 2621      F1
 2622              	.LVL309:
 2623              	.LBB425:
 2624              	.LBB424:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2625              		.loc 1 379 0
 2626 014c 488B07   		movq	(%rdi), %rax
 2627 014f 660F28CB 		movapd	%xmm3, %xmm1
 2628 0153 660F28C6 		movapd	%xmm6, %xmm0
 2629 0157 F20F1174 		movsd	%xmm6, 24(%rsp)
 2629      2418
 2630 015d FF90E000 		call	*224(%rax)
 2630      0000
 2631              	.LVL310:
 2632              	.LBE424:
 2633              	.LBE425:
  46:fltk-1.3.4-1/src/fl_gtk.cxx ****   32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
 2634              		.loc 2 46 0
 2635 0163 660FEFDB 		pxor	%xmm3, %xmm3
 2636              	.LBB426:
 2637              	.LBB427:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2638              		.loc 1 379 0
 2639 0167 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2639      000000
 2640 016e F20F1064 		movsd	16(%rsp), %xmm4
 2640      2410
 2641              	.LBE427:
 2642              	.LBE426:
  46:fltk-1.3.4-1/src/fl_gtk.cxx ****   32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
 2643              		.loc 2 46 0
 2644 0174 F20F2ADD 		cvtsi2sd	%ebp, %xmm3
 2645              	.LVL311:
 2646              	.LBB429:
 2647              	.LBB428:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2648              		.loc 1 379 0
 2649 0178 488B07   		movq	(%rdi), %rax
 2650 017b 660F28CC 		movapd	%xmm4, %xmm1
 2651 017f 660F28C3 		movapd	%xmm3, %xmm0
 2652 0183 F20F115C 		movsd	%xmm3, 8(%rsp)
 2652      2408
 2653 0189 FF90E000 		call	*224(%rax)
 2653      0000
 2654              	.LVL312:
 2655              	.LBE428:
 2656              	.LBE429:
  47:fltk-1.3.4-1/src/fl_gtk.cxx ****   33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
 2657              		.loc 2 47 0
 2658 018f 660FEFE4 		pxor	%xmm4, %xmm4
 2659              	.LBB430:
 2660              	.LBB431:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2661              		.loc 1 379 0
 2662 0193 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2662      000000
 2663 019a F20F105C 		movsd	8(%rsp), %xmm3
 2663      2408
 2664              	.LBE431:
 2665              	.LBE430:
  47:fltk-1.3.4-1/src/fl_gtk.cxx ****   33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
 2666              		.loc 2 47 0
 2667 01a0 F2410F2A 		cvtsi2sd	%r14d, %xmm4
 2667      E6
 2668              	.LVL313:
 2669              	.LBB433:
 2670              	.LBB432:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2671              		.loc 1 379 0
 2672 01a5 488B07   		movq	(%rdi), %rax
 2673 01a8 660F28C3 		movapd	%xmm3, %xmm0
 2674 01ac 660F28CC 		movapd	%xmm4, %xmm1
 2675 01b0 F20F1164 		movsd	%xmm4, 16(%rsp)
 2675      2410
 2676 01b6 FF90E000 		call	*224(%rax)
 2676      0000
 2677              	.LVL314:
 2678              	.LBE432:
 2679              	.LBE433:
  48:fltk-1.3.4-1/src/fl_gtk.cxx ****   34:fltk-1.3.4-1/FL/fl_draw.H **** 
 2680              		.loc 2 48 0
 2681 01bc 660FEFDB 		pxor	%xmm3, %xmm3
 2682              	.LBB434:
 2683              	.LBB435:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2684              		.loc 1 379 0
 2685 01c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2685      000000
 2686 01c7 F20F1074 		movsd	24(%rsp), %xmm6
 2686      2418
 2687              	.LBE435:
 2688              	.LBE434:
  48:fltk-1.3.4-1/src/fl_gtk.cxx ****   34:fltk-1.3.4-1/FL/fl_draw.H **** 
 2689              		.loc 2 48 0
 2690 01cd F20F2ADB 		cvtsi2sd	%ebx, %xmm3
 2691              	.LVL315:
 2692              	.LBB437:
 2693              	.LBB436:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2694              		.loc 1 379 0
 2695 01d1 488B07   		movq	(%rdi), %rax
 2696 01d4 660F28C6 		movapd	%xmm6, %xmm0
 2697 01d8 660F28CB 		movapd	%xmm3, %xmm1
 2698 01dc F20F115C 		movsd	%xmm3, 8(%rsp)
 2698      2408
 2699 01e2 FF90E000 		call	*224(%rax)
 2699      0000
 2700              	.LVL316:
 2701              	.LBE436:
 2702              	.LBE437:
 2703              	.LBB438:
 2704              	.LBB439:
 2705 01e8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2705      000000
 2706 01ef F20F105C 		movsd	8(%rsp), %xmm3
 2706      2408
 2707 01f5 F20F106C 		movsd	32(%rsp), %xmm5
 2707      2420
 2708 01fb 488B07   		movq	(%rdi), %rax
 2709 01fe 660F28CB 		movapd	%xmm3, %xmm1
 2710 0202 660F28C5 		movapd	%xmm5, %xmm0
 2711 0206 FF90E000 		call	*224(%rax)
 2711      0000
 2712              	.LVL317:
 2713              	.LBE439:
 2714              	.LBE438:
 2715              	.LBB440:
 2716              	.LBB441:
 2717 020c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2717      000000
 2718 0213 F20F1064 		movsd	16(%rsp), %xmm4
 2718      2410
 2719 0219 F20F1054 		movsd	40(%rsp), %xmm2
 2719      2428
 2720 021f 660F28CC 		movapd	%xmm4, %xmm1
 2721 0223 488B07   		movq	(%rdi), %rax
 2722 0226 660F28C2 		movapd	%xmm2, %xmm0
 2723 022a FF90E000 		call	*224(%rax)
 2723      0000
 2724              	.LVL318:
 2725              	.LBE441:
 2726              	.LBE440:
 2727              	.LBB442:
 2728              	.LBB443:
 2729              		.loc 1 436 0
 2730 0230 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2730      000000
 2731 0237 488B07   		movq	(%rdi), %rax
 2732 023a 488B8020 		movq	288(%rax), %rax
 2732      010000
 2733              	.LBE443:
 2734              	.LBE442:
  52:fltk-1.3.4-1/src/fl_gtk.cxx ****   38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
 2735              		.loc 2 52 0
 2736 0241 4883C438 		addq	$56, %rsp
 2737              		.cfi_def_cfa_offset 56
 2738 0245 5B       		popq	%rbx
 2739              		.cfi_def_cfa_offset 48
 2740 0246 5D       		popq	%rbp
 2741              		.cfi_def_cfa_offset 40
 2742 0247 415C     		popq	%r12
 2743              		.cfi_def_cfa_offset 32
 2744              	.LVL319:
 2745 0249 415D     		popq	%r13
 2746              		.cfi_def_cfa_offset 24
 2747              	.LVL320:
 2748 024b 415E     		popq	%r14
 2749              		.cfi_def_cfa_offset 16
 2750 024d 415F     		popq	%r15
 2751              		.cfi_def_cfa_offset 8
 2752              	.LVL321:
 2753              	.LBB445:
 2754              	.LBB444:
 2755              		.loc 1 436 0
 2756 024f FFE0     		jmp	*%rax
 2757              	.LVL322:
 2758              	.LBE444:
 2759              	.LBE445:
 2760              		.cfi_endproc
 2761              	.LFE469:
 2763              		.section	.text.unlikely._ZL12gtk_up_frameiiiij
 2764              	.LCOLDE27:
 2765              		.section	.text._ZL12gtk_up_frameiiiij
 2766              	.LHOTE27:
 2767              		.section	.text.unlikely._ZL10gtk_up_boxiiiij,"ax",@progbits
 2768              	.LCOLDB28:
 2769              		.section	.text._ZL10gtk_up_boxiiiij,"ax",@progbits
 2770              	.LHOTB28:
 2771              		.p2align 4,,15
 2773              	_ZL10gtk_up_boxiiiij:
 2774              	.LFB470:
  55:fltk-1.3.4-1/src/fl_gtk.cxx ****   41:fltk-1.3.4-1/FL/fl_draw.H **** 
 2775              		.loc 2 55 0
 2776              		.cfi_startproc
 2777              	.LVL323:
 2778 0000 4157     		pushq	%r15
 2779              		.cfi_def_cfa_offset 16
 2780              		.cfi_offset 15, -16
 2781 0002 4156     		pushq	%r14
 2782              		.cfi_def_cfa_offset 24
 2783              		.cfi_offset 14, -24
 2784 0004 4189D7   		movl	%edx, %r15d
 2785 0007 4155     		pushq	%r13
 2786              		.cfi_def_cfa_offset 32
 2787              		.cfi_offset 13, -32
 2788 0009 4154     		pushq	%r12
 2789              		.cfi_def_cfa_offset 40
 2790              		.cfi_offset 12, -40
 2791 000b 4589C4   		movl	%r8d, %r12d
 2792 000e 55       		pushq	%rbp
 2793              		.cfi_def_cfa_offset 48
 2794              		.cfi_offset 6, -48
 2795 000f 53       		pushq	%rbx
 2796              		.cfi_def_cfa_offset 56
 2797              		.cfi_offset 3, -56
 2798 0010 4189F6   		movl	%esi, %r14d
 2799 0013 89CD     		movl	%ecx, %ebp
 2800 0015 89FB     		movl	%edi, %ebx
 2801 0017 4883EC18 		subq	$24, %rsp
 2802              		.cfi_def_cfa_offset 80
  56:fltk-1.3.4-1/src/fl_gtk.cxx ****   42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
 2803              		.loc 2 56 0
 2804 001b E8000000 		call	_ZL12gtk_up_frameiiiij
 2804      00
 2805              	.LVL324:
  58:fltk-1.3.4-1/src/fl_gtk.cxx ****   44:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
 2806              		.loc 2 58 0
 2807 0020 F30F1005 		movss	.LC18(%rip), %xmm0
 2807      00000000 
 2808 0028 4489E6   		movl	%r12d, %esi
 2809 002b BFFF0000 		movl	$255, %edi
 2809      00
 2810 0030 E8000000 		call	_Z16fl_color_averagejjf
 2810      00
 2811              	.LVL325:
 2812              	.LBB446:
 2813              	.LBB447:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2814              		.loc 2 33 0
 2815 0035 89C7     		movl	%eax, %edi
 2816 0037 E8000000 		call	_ZN2Fl13set_box_colorEj
 2816      00
 2817              	.LVL326:
 2818              	.LBE447:
 2819              	.LBE446:
 2820              	.LBB448:
 2821              	.LBB449:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2822              		.loc 1 255 0
 2823 003c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2823      000000
 2824              	.LBE449:
 2825              	.LBE448:
  59:fltk-1.3.4-1/src/fl_gtk.cxx ****   45:fltk-1.3.4-1/FL/fl_draw.H ****  For colormapped displays, a color cell will be allocated out o
 2826              		.loc 2 59 0
 2827 0043 468D0C3B 		leal	(%rbx,%r15), %r9d
 2828 0047 458D5602 		leal	2(%r14), %r10d
 2829 004b 83C302   		addl	$2, %ebx
 2830              	.LVL327:
 2831 004e 458D69FD 		leal	-3(%r9), %r13d
 2832              	.LVL328:
 2833 0052 44894C24 		movl	%r9d, 12(%rsp)
 2833      0C
 2834              	.LBB451:
 2835              	.LBB450:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2836              		.loc 1 255 0
 2837 0057 4489D2   		movl	%r10d, %edx
 2838 005a 488B07   		movq	(%rdi), %rax
 2839 005d 44895424 		movl	%r10d, 8(%rsp)
 2839      08
 2840 0062 89DE     		movl	%ebx, %esi
 2841 0064 4489E9   		movl	%r13d, %ecx
 2842 0067 FF5030   		call	*48(%rax)
 2843              	.LVL329:
 2844              	.LBE450:
 2845              	.LBE451:
  60:fltk-1.3.4-1/src/fl_gtk.cxx ****   46:fltk-1.3.4-1/FL/fl_draw.H ****  \p fl_colormap the first time you use a color. If the colormap
 2846              		.loc 2 60 0
 2847 006a F30F1005 		movss	.LC17(%rip), %xmm0
 2847      00000000 
 2848 0072 4489E6   		movl	%r12d, %esi
 2849 0075 BFFF0000 		movl	$255, %edi
 2849      00
 2850 007a E8000000 		call	_Z16fl_color_averagejjf
 2850      00
 2851              	.LVL330:
 2852              	.LBB452:
 2853              	.LBB453:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2854              		.loc 2 33 0
 2855 007f 89C7     		movl	%eax, %edi
 2856 0081 E8000000 		call	_ZN2Fl13set_box_colorEj
 2856      00
 2857              	.LVL331:
 2858              	.LBE453:
 2859              	.LBE452:
 2860              	.LBB454:
 2861              	.LBB455:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2862              		.loc 1 255 0
 2863 0086 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2863      000000
 2864 008d 418D5603 		leal	3(%r14), %edx
 2865              	.LVL332:
 2866 0091 4489E9   		movl	%r13d, %ecx
 2867 0094 89DE     		movl	%ebx, %esi
 2868 0096 488B07   		movq	(%rdi), %rax
 2869 0099 FF5030   		call	*48(%rax)
 2870              	.LVL333:
 2871              	.LBE455:
 2872              	.LBE454:
  62:fltk-1.3.4-1/src/fl_gtk.cxx ****   48:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
 2873              		.loc 2 62 0
 2874 009c F30F1005 		movss	.LC13(%rip), %xmm0
 2874      00000000 
 2875 00a4 4489E6   		movl	%r12d, %esi
 2876 00a7 BFFF0000 		movl	$255, %edi
 2876      00
 2877 00ac E8000000 		call	_Z16fl_color_averagejjf
 2877      00
 2878              	.LVL334:
 2879              	.LBB456:
 2880              	.LBB457:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2881              		.loc 2 33 0
 2882 00b1 89C7     		movl	%eax, %edi
 2883 00b3 E8000000 		call	_ZN2Fl13set_box_colorEj
 2883      00
 2884              	.LVL335:
 2885              	.LBE457:
 2886              	.LBE456:
 2887              	.LBB458:
 2888              	.LBB459:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2889              		.loc 1 255 0
 2890 00b8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2890      000000
 2891 00bf 418D5604 		leal	4(%r14), %edx
 2892              	.LVL336:
 2893 00c3 4489E9   		movl	%r13d, %ecx
 2894 00c6 89DE     		movl	%ebx, %esi
 2895 00c8 488B07   		movq	(%rdi), %rax
 2896 00cb FF5030   		call	*48(%rax)
 2897              	.LVL337:
 2898              	.LBE459:
 2899              	.LBE458:
 2900              	.LBB460:
 2901              	.LBB461:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2902              		.loc 2 33 0
 2903 00ce 4489E7   		movl	%r12d, %edi
 2904 00d1 E8000000 		call	_ZN2Fl13set_box_colorEj
 2904      00
 2905              	.LVL338:
 2906              	.LBE461:
 2907              	.LBE460:
 2908              	.LBB462:
 2909              	.LBB463:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2910              		.loc 1 206 0
 2911 00d6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2911      000000
 2912 00dd 448D45F9 		leal	-7(%rbp), %r8d
 2913              	.LVL339:
 2914 00e1 418D4FFC 		leal	-4(%r15), %ecx
 2915              	.LVL340:
 2916 00e5 418D5605 		leal	5(%r14), %edx
 2917              	.LVL341:
 2918 00e9 89DE     		movl	%ebx, %esi
 2919              	.LBE463:
 2920              	.LBE462:
  67:fltk-1.3.4-1/src/fl_gtk.cxx ****   53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead *
 2921              		.loc 2 67 0
 2922 00eb 4401F5   		addl	%r14d, %ebp
 2923              	.LVL342:
  69:fltk-1.3.4-1/src/fl_gtk.cxx ****   55:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2924              		.loc 2 69 0
 2925 00ee 448D75FD 		leal	-3(%rbp), %r14d
 2926              	.LVL343:
 2927              	.LBB465:
 2928              	.LBB464:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2929              		.loc 1 206 0
 2930 00f2 488B07   		movq	(%rdi), %rax
 2931 00f5 FF5020   		call	*32(%rax)
 2932              	.LVL344:
 2933              	.LBE464:
 2934              	.LBE465:
  66:fltk-1.3.4-1/src/fl_gtk.cxx ****   52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c);
 2935              		.loc 2 66 0
 2936 00f8 F30F1005 		movss	.LC16(%rip), %xmm0
 2936      00000000 
 2937 0100 4489E6   		movl	%r12d, %esi
 2938 0103 BF380000 		movl	$56, %edi
 2938      00
 2939 0108 E8000000 		call	_Z16fl_color_averagejjf
 2939      00
 2940              	.LVL345:
 2941              	.LBB466:
 2942              	.LBB467:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2943              		.loc 2 33 0
 2944 010d 89C7     		movl	%eax, %edi
 2945 010f E8000000 		call	_ZN2Fl13set_box_colorEj
 2945      00
 2946              	.LVL346:
 2947              	.LBE467:
 2948              	.LBE466:
 2949              	.LBB468:
 2950              	.LBB469:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2951              		.loc 1 255 0
 2952 0114 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2952      000000
 2953 011b 8D55FC   		leal	-4(%rbp), %edx
 2954              	.LVL347:
 2955 011e 4489E9   		movl	%r13d, %ecx
 2956 0121 89DE     		movl	%ebx, %esi
 2957 0123 488B07   		movq	(%rdi), %rax
 2958 0126 FF5030   		call	*48(%rax)
 2959              	.LVL348:
 2960              	.LBE469:
 2961              	.LBE468:
  68:fltk-1.3.4-1/src/fl_gtk.cxx ****   54:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_color(int c) {fl_color((Fl_Color)c);}
 2962              		.loc 2 68 0
 2963 0129 F30F1005 		movss	.LC12(%rip), %xmm0
 2963      00000000 
 2964 0131 4489E6   		movl	%r12d, %esi
 2965 0134 BF380000 		movl	$56, %edi
 2965      00
 2966 0139 E8000000 		call	_Z16fl_color_averagejjf
 2966      00
 2967              	.LVL349:
 2968              	.LBB470:
 2969              	.LBB471:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2970              		.loc 2 33 0
 2971 013e 89C7     		movl	%eax, %edi
 2972 0140 E8000000 		call	_ZN2Fl13set_box_colorEj
 2972      00
 2973              	.LVL350:
 2974              	.LBE471:
 2975              	.LBE470:
 2976              	.LBB472:
 2977              	.LBB473:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2978              		.loc 1 255 0
 2979 0145 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2979      000000
 2980 014c 4489E9   		movl	%r13d, %ecx
 2981 014f 4489F2   		movl	%r14d, %edx
 2982 0152 89DE     		movl	%ebx, %esi
 2983 0154 488B07   		movq	(%rdi), %rax
 2984 0157 FF5030   		call	*48(%rax)
 2985              	.LVL351:
 2986              	.LBE473:
 2987              	.LBE472:
  70:fltk-1.3.4-1/src/fl_gtk.cxx ****   56:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
 2988              		.loc 2 70 0
 2989 015a 4489E6   		movl	%r12d, %esi
 2990 015d F30F1005 		movss	.LC13(%rip), %xmm0
 2990      00000000 
 2991 0165 BF380000 		movl	$56, %edi
 2991      00
 2992 016a E8000000 		call	_Z16fl_color_averagejjf
 2992      00
 2993              	.LVL352:
 2994              	.LBB474:
 2995              	.LBB475:
  33:fltk-1.3.4-1/src/fl_gtk.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2996              		.loc 2 33 0
 2997 016f 89C7     		movl	%eax, %edi
 2998 0171 E8000000 		call	_ZN2Fl13set_box_colorEj
 2998      00
 2999              	.LVL353:
 3000              	.LBE475:
 3001              	.LBE474:
 3002              	.LBB476:
 3003              	.LBB477:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3004              		.loc 1 255 0
 3005 0176 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3005      000000
 3006 017d 8D55FE   		leal	-2(%rbp), %edx
 3007              	.LVL354:
 3008 0180 4489E9   		movl	%r13d, %ecx
 3009 0183 89DE     		movl	%ebx, %esi
 3010 0185 488B07   		movq	(%rdi), %rax
 3011 0188 FF5030   		call	*48(%rax)
 3012              	.LVL355:
 3013              	.LBE477:
 3014              	.LBE476:
 3015              	.LBB478:
 3016              	.LBB479:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3017              		.loc 1 270 0
 3018 018b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3018      000000
 3019 0192 448B4C24 		movl	12(%rsp), %r9d
 3019      0C
 3020 0197 4489F1   		movl	%r14d, %ecx
 3021 019a 448B5424 		movl	8(%rsp), %r10d
 3021      08
 3022 019f 488B07   		movq	(%rdi), %rax
 3023 01a2 418D71FE 		leal	-2(%r9), %esi
 3024              	.LVL356:
 3025 01a6 4489D2   		movl	%r10d, %edx
 3026 01a9 488B4048 		movq	72(%rax), %rax
 3027              	.LBE479:
 3028              	.LBE478:
  73:fltk-1.3.4-1/src/fl_gtk.cxx ****   59:fltk-1.3.4-1/FL/fl_draw.H ****  For colormap visuals the nearest index in the gray
 3029              		.loc 2 73 0
 3030 01ad 4883C418 		addq	$24, %rsp
 3031              		.cfi_def_cfa_offset 56
 3032 01b1 5B       		popq	%rbx
 3033              		.cfi_def_cfa_offset 48
 3034              	.LVL357:
 3035 01b2 5D       		popq	%rbp
 3036              		.cfi_def_cfa_offset 40
 3037 01b3 415C     		popq	%r12
 3038              		.cfi_def_cfa_offset 32
 3039              	.LVL358:
 3040 01b5 415D     		popq	%r13
 3041              		.cfi_def_cfa_offset 24
 3042 01b7 415E     		popq	%r14
 3043              		.cfi_def_cfa_offset 16
 3044              	.LVL359:
 3045 01b9 415F     		popq	%r15
 3046              		.cfi_def_cfa_offset 8
 3047              	.LVL360:
 3048              	.LBB481:
 3049              	.LBB480:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3050              		.loc 1 270 0
 3051 01bb FFE0     		jmp	*%rax
 3052              	.LVL361:
 3053              	.LBE480:
 3054              	.LBE481:
 3055              		.cfi_endproc
 3056              	.LFE470:
 3058              		.section	.text.unlikely._ZL10gtk_up_boxiiiij
 3059              	.LCOLDE28:
 3060              		.section	.text._ZL10gtk_up_boxiiiij
 3061              	.LHOTE28:
 3062              		.section	.text.unlikely._Z23fl_define_FL_GTK_UP_BOXv,"ax",@progbits
 3063              	.LCOLDB29:
 3064              		.section	.text._Z23fl_define_FL_GTK_UP_BOXv,"ax",@progbits
 3065              	.LHOTB29:
 3066              		.p2align 4,,15
 3067              		.globl	_Z23fl_define_FL_GTK_UP_BOXv
 3069              	_Z23fl_define_FL_GTK_UP_BOXv:
 3070              	.LFB481:
 249:fltk-1.3.4-1/src/fl_gtk.cxx ****  234:fltk-1.3.4-1/FL/fl_draw.H **** /**
 250:fltk-1.3.4-1/src/fl_gtk.cxx ****  235:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 4-sided polygon with lines
 251:fltk-1.3.4-1/src/fl_gtk.cxx ****  236:fltk-1.3.4-1/FL/fl_draw.H ****  */
 252:fltk-1.3.4-1/src/fl_gtk.cxx ****  237:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y
 253:fltk-1.3.4-1/src/fl_gtk.cxx ****  238:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->loop(x,y,x1,y1,x2,y2,x3,y3); }
 254:fltk-1.3.4-1/src/fl_gtk.cxx ****  239:fltk-1.3.4-1/FL/fl_draw.H **** 
 255:fltk-1.3.4-1/src/fl_gtk.cxx ****  240:fltk-1.3.4-1/FL/fl_draw.H **** // filled polygons
 256:fltk-1.3.4-1/src/fl_gtk.cxx ****  241:fltk-1.3.4-1/FL/fl_draw.H **** /**
 257:fltk-1.3.4-1/src/fl_gtk.cxx ****  242:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 3-sided polygon. The polygon must be convex.
 258:fltk-1.3.4-1/src/fl_gtk.cxx ****  243:fltk-1.3.4-1/FL/fl_draw.H ****  */
 259:fltk-1.3.4-1/src/fl_gtk.cxx ****  244:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_polygon(int x, int y, int x1, int y1, int x2, in
 260:fltk-1.3.4-1/src/fl_gtk.cxx ****  245:fltk-1.3.4-1/FL/fl_draw.H **** /**
 261:fltk-1.3.4-1/src/fl_gtk.cxx ****  246:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 4-sided polygon. The polygon must be convex.
 262:fltk-1.3.4-1/src/fl_gtk.cxx ****  247:fltk-1.3.4-1/FL/fl_draw.H ****  */
 263:fltk-1.3.4-1/src/fl_gtk.cxx ****  248:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_polygon(int x, int y, int x1, int y1, int x2, in
 264:fltk-1.3.4-1/src/fl_gtk.cxx ****  249:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->polygon(x,y,x1,y1,x2,y2,x3,y3); }
 265:fltk-1.3.4-1/src/fl_gtk.cxx ****  250:fltk-1.3.4-1/FL/fl_draw.H **** 
 266:fltk-1.3.4-1/src/fl_gtk.cxx ****  251:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, horizontal segment first:
 267:fltk-1.3.4-1/src/fl_gtk.cxx ****  252:fltk-1.3.4-1/FL/fl_draw.H **** /**
 268:fltk-1.3.4-1/src/fl_gtk.cxx ****  253:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y)
 269:fltk-1.3.4-1/src/fl_gtk.cxx ****  254:fltk-1.3.4-1/FL/fl_draw.H ****  */
 270:fltk-1.3.4-1/src/fl_gtk.cxx ****  255:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1) {fl_graphics_driver
 271:fltk-1.3.4-1/src/fl_gtk.cxx ****  256:fltk-1.3.4-1/FL/fl_draw.H **** /**
 272:fltk-1.3.4-1/src/fl_gtk.cxx ****  257:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then vertical fr
 273:fltk-1.3.4-1/src/fl_gtk.cxx ****  258:fltk-1.3.4-1/FL/fl_draw.H ****  */
 274:fltk-1.3.4-1/src/fl_gtk.cxx ****  259:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1, int y2) {fl_graphic
 275:fltk-1.3.4-1/src/fl_gtk.cxx ****  260:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3071              		.loc 2 275 0
 3072              		.cfi_startproc
 3073 0000 4883EC08 		subq	$8, %rsp
 3074              		.cfi_def_cfa_offset 16
 276:fltk-1.3.4-1/src/fl_gtk.cxx ****  261:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then a vertical 
 3075              		.loc 2 276 0
 3076 0004 BE000000 		movl	$_ZL10gtk_up_boxiiiij, %esi
 3076      00
 3077 0009 BF260000 		movl	$38, %edi
 3077      00
 3078 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3078      00
 3079              	.LVL362:
 277:fltk-1.3.4-1/src/fl_gtk.cxx ****  262:fltk-1.3.4-1/FL/fl_draw.H ****  and then another horizontal from (x1,y2) to (x3,y2)
 3080              		.loc 2 277 0
 3081 0013 BE000000 		movl	$_ZL12gtk_down_boxiiiij, %esi
 3081      00
 3082 0018 BF270000 		movl	$39, %edi
 3082      00
 3083 001d E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3083      00
 3084              	.LVL363:
 278:fltk-1.3.4-1/src/fl_gtk.cxx ****  263:fltk-1.3.4-1/FL/fl_draw.H ****  */
 3085              		.loc 2 278 0
 3086 0022 BE000000 		movl	$_ZL12gtk_up_frameiiiij, %esi
 3086      00
 3087 0027 BF280000 		movl	$40, %edi
 3087      00
 3088 002c E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3088      00
 3089              	.LVL364:
 279:fltk-1.3.4-1/src/fl_gtk.cxx ****  264:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1, int y2, int x3) {fl
 3090              		.loc 2 279 0
 3091 0031 BE000000 		movl	$_ZL14gtk_down_frameiiiij, %esi
 3091      00
 3092 0036 BF290000 		movl	$41, %edi
 3092      00
 3093 003b E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3093      00
 3094              	.LVL365:
 280:fltk-1.3.4-1/src/fl_gtk.cxx ****  265:fltk-1.3.4-1/FL/fl_draw.H **** 
 3095              		.loc 2 280 0
 3096 0040 BE000000 		movl	$_ZL15gtk_thin_up_boxiiiij, %esi
 3096      00
 3097 0045 BF2A0000 		movl	$42, %edi
 3097      00
 3098 004a E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3098      00
 3099              	.LVL366:
 281:fltk-1.3.4-1/src/fl_gtk.cxx ****  266:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, vertical segment first:
 3100              		.loc 2 281 0
 3101 004f BE000000 		movl	$_ZL17gtk_thin_down_boxiiiij, %esi
 3101      00
 3102 0054 BF2B0000 		movl	$43, %edi
 3102      00
 3103 0059 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3103      00
 3104              	.LVL367:
 282:fltk-1.3.4-1/src/fl_gtk.cxx ****  267:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3105              		.loc 2 282 0
 3106 005e BE000000 		movl	$_ZL17gtk_thin_up_frameiiiij, %esi
 3106      00
 3107 0063 BF2C0000 		movl	$44, %edi
 3107      00
 3108 0068 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3108      00
 3109              	.LVL368:
 283:fltk-1.3.4-1/src/fl_gtk.cxx ****  268:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1)
 3110              		.loc 2 283 0
 3111 006d BE000000 		movl	$_ZL19gtk_thin_down_frameiiiij, %esi
 3111      00
 3112 0072 BF2D0000 		movl	$45, %edi
 3112      00
 3113 0077 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3113      00
 3114              	.LVL369:
 284:fltk-1.3.4-1/src/fl_gtk.cxx ****  269:fltk-1.3.4-1/FL/fl_draw.H ****  */
 3115              		.loc 2 284 0
 3116 007c BE000000 		movl	$_ZL16gtk_round_up_boxiiiij, %esi
 3116      00
 3117 0081 BF2E0000 		movl	$46, %edi
 3117      00
 3118 0086 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3118      00
 3119              	.LVL370:
 285:fltk-1.3.4-1/src/fl_gtk.cxx ****  270:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1) {fl_graphics_driver
 3120              		.loc 2 285 0
 3121 008b BE000000 		movl	$_ZL18gtk_round_down_boxiiiij, %esi
 3121      00
 3122 0090 BF2F0000 		movl	$47, %edi
 3122      00
 3123 0095 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3123      00
 3124              	.LVL371:
 286:fltk-1.3.4-1/src/fl_gtk.cxx ****  271:fltk-1.3.4-1/FL/fl_draw.H **** /**
 287:fltk-1.3.4-1/src/fl_gtk.cxx ****  272:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1), then a horizontal 
 288:fltk-1.3.4-1/src/fl_gtk.cxx ****  273:fltk-1.3.4-1/FL/fl_draw.H ****  */
 3125              		.loc 2 288 0
 3126 009a B8260000 		movl	$38, %eax
 3126      00
 3127 009f 4883C408 		addq	$8, %rsp
 3128              		.cfi_def_cfa_offset 8
 3129 00a3 C3       		ret
 3130              		.cfi_endproc
 3131              	.LFE481:
 3133              		.section	.text.unlikely._Z23fl_define_FL_GTK_UP_BOXv
 3134              	.LCOLDE29:
 3135              		.section	.text._Z23fl_define_FL_GTK_UP_BOXv
 3136              	.LHOTE29:
 3137              		.section	.rodata.cst8,"aM",@progbits,8
 3138              		.align 8
 3139              	.LC2:
 3140 0000 00000000 		.long	0
 3141 0004 00807640 		.long	1081507840
 3142              		.align 8
 3143              	.LC3:
 3144 0008 00000000 		.long	0
 3145 000c 00806640 		.long	1080459264
 3146              		.align 8
 3147              	.LC4:
 3148 0010 00000000 		.long	0
 3149 0014 00E07040 		.long	1081139200
 3150              		.align 8
 3151              	.LC5:
 3152 0018 00000000 		.long	0
 3153 001c 00805640 		.long	1079410688
 3154              		.align 8
 3155              	.LC6:
 3156 0020 00000000 		.long	0
 3157 0024 00206C40 		.long	1080827904
 3158              		.align 8
 3159              	.LC7:
 3160 0028 00000000 		.long	0
 3161 002c 00507940 		.long	1081692160
 3162              		.align 8
 3163              	.LC8:
 3164 0030 00000000 		.long	0
 3165 0034 008056C0 		.long	-1068072960
 3166              		.align 8
 3167              	.LC10:
 3168 0038 00000000 		.long	0
 3169 003c 00804640 		.long	1078362112
 3170              		.section	.rodata.cst4,"aM",@progbits,4
 3171              		.align 4
 3172              	.LC12:
 3173 0000 CDCC4C3D 		.long	1028443341
 3174              		.align 4
 3175              	.LC13:
 3176 0004 CDCCCC3D 		.long	1036831949
 3177              		.align 4
 3178              	.LC14:
 3179 0008 0000003F 		.long	1056964608
 3180              		.align 4
 3181              	.LC16:
 3182 000c CDCCCC3C 		.long	1020054733
 3183              		.align 4
 3184              	.LC17:
 3185 0010 CDCC4C3E 		.long	1045220557
 3186              		.align 4
 3187              	.LC18:
 3188 0014 CDCCCC3E 		.long	1053609165
 3189              		.align 4
 3190              	.LC20:
 3191 0018 9A99193F 		.long	1058642330
 3192              		.text
 3193              	.Letext0:
 3194              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
 3195              	.Letext_cold0:
 3196              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 3197              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3198              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3199              		.file 6 "/usr/include/libio.h"
 3200              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 3201              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 3202              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 3203              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 3204              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 3205              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_gtk.cxx
     /tmp/cc4iARdX.s:14     .text._Z6fl_pieiiiidd:0000000000000000 _Z6fl_pieiiiidd
     /tmp/cc4iARdX.s:48     .text._ZL8fl_arc_iiiiidd:0000000000000000 _ZL8fl_arc_iiiiidd
     /tmp/cc4iARdX.s:95     .text._ZL4drawiiiiii:0000000000000000 _ZL4drawiiiiii
     /tmp/cc4iARdX.s:655    .text._ZL18gtk_round_down_boxiiiij:0000000000000000 _ZL18gtk_round_down_boxiiiij
     /tmp/cc4iARdX.s:836    .text._ZL16gtk_round_up_boxiiiij:0000000000000000 _ZL16gtk_round_up_boxiiiij
     /tmp/cc4iARdX.s:1176   .text._ZL19gtk_thin_down_frameiiiij:0000000000000000 _ZL19gtk_thin_down_frameiiiij
     /tmp/cc4iARdX.s:1359   .text._ZL17gtk_thin_down_boxiiiij:0000000000000000 _ZL17gtk_thin_down_boxiiiij
     /tmp/cc4iARdX.s:1454   .text._ZL17gtk_thin_up_frameiiiij:0000000000000000 _ZL17gtk_thin_up_frameiiiij
     /tmp/cc4iARdX.s:1637   .text._ZL15gtk_thin_up_boxiiiij:0000000000000000 _ZL15gtk_thin_up_boxiiiij
     /tmp/cc4iARdX.s:1906   .text._ZL14gtk_down_frameiiiij:0000000000000000 _ZL14gtk_down_frameiiiij
     /tmp/cc4iARdX.s:2291   .text._ZL12gtk_down_boxiiiij:0000000000000000 _ZL12gtk_down_boxiiiij
     /tmp/cc4iARdX.s:2407   .text._ZL12gtk_up_frameiiiij:0000000000000000 _ZL12gtk_up_frameiiiij
     /tmp/cc4iARdX.s:2773   .text._ZL10gtk_up_boxiiiij:0000000000000000 _ZL10gtk_up_boxiiiij
     /tmp/cc4iARdX.s:3069   .text._Z23fl_define_FL_GTK_UP_BOXv:0000000000000000 _Z23fl_define_FL_GTK_UP_BOXv
     /tmp/cc4iARdX.s:3151   .rodata.cst8:0000000000000018 .LC5
     /tmp/cc4iARdX.s:3163   .rodata.cst8:0000000000000030 .LC8
     /tmp/cc4iARdX.s:3147   .rodata.cst8:0000000000000010 .LC4
     /tmp/cc4iARdX.s:3155   .rodata.cst8:0000000000000020 .LC6
     /tmp/cc4iARdX.s:3139   .rodata.cst8:0000000000000000 .LC2
     /tmp/cc4iARdX.s:3159   .rodata.cst8:0000000000000028 .LC7
     /tmp/cc4iARdX.s:3143   .rodata.cst8:0000000000000008 .LC3
     /tmp/cc4iARdX.s:3167   .rodata.cst8:0000000000000038 .LC10
     /tmp/cc4iARdX.s:3172   .rodata.cst4:0000000000000000 .LC12
     /tmp/cc4iARdX.s:3175   .rodata.cst4:0000000000000004 .LC13
     /tmp/cc4iARdX.s:3178   .rodata.cst4:0000000000000008 .LC14
     /tmp/cc4iARdX.s:3181   .rodata.cst4:000000000000000c .LC16
     /tmp/cc4iARdX.s:3184   .rodata.cst4:0000000000000010 .LC17
     /tmp/cc4iARdX.s:3187   .rodata.cst4:0000000000000014 .LC18
     /tmp/cc4iARdX.s:3190   .rodata.cst4:0000000000000018 .LC20
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

UNDEFINED SYMBOLS
fl_graphics_driver
_ZN2Fl13set_box_colorEj
_Z16fl_color_averagejjf
_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
