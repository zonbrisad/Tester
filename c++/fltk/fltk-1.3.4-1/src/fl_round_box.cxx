   1              		.file	"fl_round_box.cxx"
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
  49              	.LFB468:
  50              		.file 2 "fltk-1.3.4-1/src/fl_round_box.cxx"
   1:fltk-1.3.4-1/src/fl_round_box.cxx ****    1              		.file	"fl_round_box.cxx"
   2:fltk-1.3.4-1/src/fl_round_box.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/fl_round_box.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/fl_round_box.cxx ****    4              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
   5:fltk-1.3.4-1/src/fl_round_box.cxx ****    5              	.LCOLDB0:
   6:fltk-1.3.4-1/src/fl_round_box.cxx ****    6              		.section	.text._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
   7:fltk-1.3.4-1/src/fl_round_box.cxx ****    7              	.LHOTB0:
   8:fltk-1.3.4-1/src/fl_round_box.cxx ****    8              		.p2align 4,,15
   9:fltk-1.3.4-1/src/fl_round_box.cxx ****    9              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
  10:fltk-1.3.4-1/src/fl_round_box.cxx ****   10              	.Ltext_cold0:
  11:fltk-1.3.4-1/src/fl_round_box.cxx ****   11              		.section	.text._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
  12:fltk-1.3.4-1/src/fl_round_box.cxx ****   12              		.weak	_Z6fl_pieiiiidd
  13:fltk-1.3.4-1/src/fl_round_box.cxx ****   14              	_Z6fl_pieiiiidd:
  14:fltk-1.3.4-1/src/fl_round_box.cxx ****   15              	.LFB425:
  15:fltk-1.3.4-1/src/fl_round_box.cxx ****   16              		.file 1 "fltk-1.3.4-1/FL/fl_draw.H"
  16:fltk-1.3.4-1/src/fl_round_box.cxx ****    1:fltk-1.3.4-1/FL/fl_draw.H **** //
  17:fltk-1.3.4-1/src/fl_round_box.cxx ****    2:fltk-1.3.4-1/FL/fl_draw.H **** // "$Id: fl_draw.H 11977 2016-09-25 11:07:06Z AlbrechtS $"
  18:fltk-1.3.4-1/src/fl_round_box.cxx ****    3:fltk-1.3.4-1/FL/fl_draw.H **** //
  19:fltk-1.3.4-1/src/fl_round_box.cxx ****    4:fltk-1.3.4-1/FL/fl_draw.H **** // Portable drawing function header file for the Fast Light Too
  20:fltk-1.3.4-1/src/fl_round_box.cxx ****    5:fltk-1.3.4-1/FL/fl_draw.H **** //
  21:fltk-1.3.4-1/src/fl_round_box.cxx ****    6:fltk-1.3.4-1/FL/fl_draw.H **** // Copyright 1998-2016 by Bill Spitzak and others.
  22:fltk-1.3.4-1/src/fl_round_box.cxx ****    7:fltk-1.3.4-1/FL/fl_draw.H **** //
  23:fltk-1.3.4-1/src/fl_round_box.cxx ****    8:fltk-1.3.4-1/FL/fl_draw.H **** // This library is free software. Distribution and use rights a
  24:fltk-1.3.4-1/src/fl_round_box.cxx ****    9:fltk-1.3.4-1/FL/fl_draw.H **** // the file "COPYING" which should have been included with this
  25:fltk-1.3.4-1/src/fl_round_box.cxx ****   10:fltk-1.3.4-1/FL/fl_draw.H **** // file is missing or damaged, see the license at:
  26:fltk-1.3.4-1/src/fl_round_box.cxx ****   11:fltk-1.3.4-1/FL/fl_draw.H **** //
  27:fltk-1.3.4-1/src/fl_round_box.cxx ****   12:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/COPYING.php
  28:fltk-1.3.4-1/src/fl_round_box.cxx ****   13:fltk-1.3.4-1/FL/fl_draw.H **** //
  29:fltk-1.3.4-1/src/fl_round_box.cxx ****   14:fltk-1.3.4-1/FL/fl_draw.H **** // Please report all bugs and problems on the following page:
  51              		.loc 2 29 0
  52              		.cfi_startproc
  53              	.LVL6:
  54              		.loc 2 29 0
  55 0000 4189F9   		movl	%edi, %r9d
  56              	.LVL7:
  57              	.LBB18:
  58              	.LBB19:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
  59              		.loc 1 304 0
  60 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  60      000000
  61              	.LVL8:
  62              	.LBE19:
  63              	.LBE18:
  64              		.loc 2 29 0
  65 000a 4189C8   		movl	%ecx, %r8d
  66              	.LVL9:
  67              	.LBB21:
  68              	.LBB20:
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
  80              	.LBE20:
  81              	.LBE21:
  82              		.cfi_endproc
  83              	.LFE468:
  85              		.section	.text.unlikely._ZL8fl_arc_iiiiidd
  86              	.LCOLDE1:
  87              		.section	.text._ZL8fl_arc_iiiiidd
  88              	.LHOTE1:
  89              		.section	.text.unlikely._ZL4drawiiiiiij,"ax",@progbits
  90              	.LCOLDB11:
  91              		.section	.text._ZL4drawiiiiiij,"ax",@progbits
  92              	.LHOTB11:
  93              		.p2align 4,,15
  95              	_ZL4drawiiiiiij:
  96              	.LFB469:
  30:fltk-1.3.4-1/src/fl_round_box.cxx ****   15:fltk-1.3.4-1/FL/fl_draw.H **** //
  31:fltk-1.3.4-1/src/fl_round_box.cxx ****   16:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/str.php
  32:fltk-1.3.4-1/src/fl_round_box.cxx ****   17:fltk-1.3.4-1/FL/fl_draw.H **** //
  33:fltk-1.3.4-1/src/fl_round_box.cxx ****   18:fltk-1.3.4-1/FL/fl_draw.H **** 
  34:fltk-1.3.4-1/src/fl_round_box.cxx ****   19:fltk-1.3.4-1/FL/fl_draw.H **** /**
  35:fltk-1.3.4-1/src/fl_round_box.cxx ****   20:fltk-1.3.4-1/FL/fl_draw.H ****   \file fl_draw.H
  36:fltk-1.3.4-1/src/fl_round_box.cxx ****   21:fltk-1.3.4-1/FL/fl_draw.H ****   \brief utility header to pull drawing functions together
  97              		.loc 2 36 0
  98              		.cfi_startproc
  99              	.LVL14:
 100 0000 4157     		pushq	%r15
 101              		.cfi_def_cfa_offset 16
 102              		.cfi_offset 15, -16
  37:fltk-1.3.4-1/src/fl_round_box.cxx ****   22:fltk-1.3.4-1/FL/fl_draw.H **** */
 103              		.loc 2 37 0
 104 0002 438D0409 		leal	(%r9,%r9), %eax
  36:fltk-1.3.4-1/src/fl_round_box.cxx ****   22:fltk-1.3.4-1/FL/fl_draw.H **** */
 105              		.loc 2 36 0
 106 0006 4156     		pushq	%r14
 107              		.cfi_def_cfa_offset 24
 108              		.cfi_offset 14, -24
 109 0008 4155     		pushq	%r13
 110              		.cfi_def_cfa_offset 32
 111              		.cfi_offset 13, -32
 112 000a 4154     		pushq	%r12
 113              		.cfi_def_cfa_offset 40
 114              		.cfi_offset 12, -40
 115 000c 4189F5   		movl	%esi, %r13d
 116 000f 55       		pushq	%rbp
 117              		.cfi_def_cfa_offset 48
 118              		.cfi_offset 6, -48
 119 0010 53       		pushq	%rbx
 120              		.cfi_def_cfa_offset 56
 121              		.cfi_offset 3, -56
 122 0011 89FB     		movl	%edi, %ebx
 123 0013 4883EC18 		subq	$24, %rsp
 124              		.cfi_def_cfa_offset 80
 125              		.loc 2 37 0
 126 0017 39C8     		cmpl	%ecx, %eax
  36:fltk-1.3.4-1/src/fl_round_box.cxx ****   22:fltk-1.3.4-1/FL/fl_draw.H **** */
 127              		.loc 2 36 0
 128 0019 8B742450 		movl	80(%rsp), %esi
 129              	.LVL15:
 130              		.loc 2 37 0
 131 001d 7C14     		jl	.L4
 132              		.loc 2 37 0 is_stmt 0 discriminator 1
 133 001f 8D41FF   		leal	-1(%rcx), %eax
 134 0022 4189C1   		movl	%eax, %r9d
 135              	.LVL16:
 136 0025 41C1E91F 		shrl	$31, %r9d
 137 0029 4101C1   		addl	%eax, %r9d
 138 002c 41D1F9   		sarl	%r9d
 139              	.LVL17:
 140 002f 438D0409 		leal	(%r9,%r9), %eax
 141              	.L4:
  38:fltk-1.3.4-1/src/fl_round_box.cxx ****   23:fltk-1.3.4-1/FL/fl_draw.H **** 
 142              		.loc 2 38 0 is_stmt 1
 143 0033 4139C0   		cmpl	%eax, %r8d
 144 0036 7F15     		jg	.L5
 145              		.loc 2 38 0 is_stmt 0 discriminator 1
 146 0038 418D40FF 		leal	-1(%r8), %eax
 147 003c 4189C1   		movl	%eax, %r9d
 148              	.LVL18:
 149 003f 41C1E91F 		shrl	$31, %r9d
 150 0043 4101C1   		addl	%eax, %r9d
 151 0046 41D1F9   		sarl	%r9d
 152              	.LVL19:
 153 0049 438D0409 		leal	(%r9,%r9), %eax
 154              	.L5:
 155              	.LVL20:
  39:fltk-1.3.4-1/src/fl_round_box.cxx ****   24:fltk-1.3.4-1/FL/fl_draw.H **** #ifndef fl_draw_H
  40:fltk-1.3.4-1/src/fl_round_box.cxx ****   25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
  41:fltk-1.3.4-1/src/fl_round_box.cxx ****   26:fltk-1.3.4-1/FL/fl_draw.H **** 
 156              		.loc 2 41 0 is_stmt 1
 157 004d 29C1     		subl	%eax, %ecx
 158              	.LVL21:
  42:fltk-1.3.4-1/src/fl_round_box.cxx ****   27:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/x.H>	      // for Fl_Region
 159              		.loc 2 42 0
 160 004f 4129C0   		subl	%eax, %r8d
 161              	.LVL22:
 162 0052 4439C1   		cmpl	%r8d, %ecx
 163 0055 4589C7   		movl	%r8d, %r15d
  41:fltk-1.3.4-1/src/fl_round_box.cxx ****   27:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/x.H>	      // for Fl_Region
 164              		.loc 2 41 0
 165 0058 89CD     		movl	%ecx, %ebp
 166              	.LVL23:
 167 005a 440F4EF9 		cmovle	%ecx, %r15d
 168              		.loc 2 42 0
 169 005e 4589C6   		movl	%r8d, %r14d
 170              	.LVL24:
  43:fltk-1.3.4-1/src/fl_round_box.cxx ****   28:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Enumerations.H>  // for the color names
  44:fltk-1.3.4-1/src/fl_round_box.cxx ****   29:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Window.H>     // for fl_set_spot()
 171              		.loc 2 44 0
 172 0061 4183FF01 		cmpl	$1, %r15d
 173 0065 0F8E2801 		jle	.L3
 173      0000
 174              	.LBB22:
 175              	.LBB23:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 176              		.loc 1 52 0
 177 006b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 177      000000
 178              	.LVL25:
 179              	.LBE23:
 180              	.LBE22:
  40:fltk-1.3.4-1/src/fl_round_box.cxx ****   26:fltk-1.3.4-1/FL/fl_draw.H **** 
 181              		.loc 2 40 0
 182 0072 458D2411 		leal	(%r9,%rdx), %r12d
 183              	.LVL26:
  39:fltk-1.3.4-1/src/fl_round_box.cxx ****   25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
 184              		.loc 2 39 0
 185 0076 4501CD   		addl	%r9d, %r13d
 186              	.LVL27:
 187              	.LBB25:
 188              	.LBB24:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 189              		.loc 1 52 0
 190 0079 488B17   		movq	(%rdi), %rdx
 191 007c FF928800 		call	*136(%rdx)
 191      0000
 192              	.LVL28:
 193              	.LBE24:
 194              	.LBE25:
  45:fltk-1.3.4-1/src/fl_round_box.cxx ****   30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
  46:fltk-1.3.4-1/src/fl_round_box.cxx ****   31:fltk-1.3.4-1/FL/fl_draw.H **** 
  47:fltk-1.3.4-1/src/fl_round_box.cxx ****   32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
 195              		.loc 2 47 0
 196 0082 83FB03   		cmpl	$3, %ebx
 197 0085 0F841502 		je	.L30
 197      0000
 198              	.LVL29:
  48:fltk-1.3.4-1/src/fl_round_box.cxx ****   33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
 199              		.loc 2 48 0 discriminator 4
 200 008b 83FB01   		cmpl	$1, %ebx
  47:fltk-1.3.4-1/src/fl_round_box.cxx ****   33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
 201              		.loc 2 47 0 discriminator 4
 202 008e 41B90000 		movl	$_ZL8fl_arc_iiiiidd, %r9d
 202      0000
 203              		.loc 2 48 0 discriminator 4
 204 0094 0F8E6602 		jle	.L43
 204      0000
 205              	.LVL30:
 206              	.L8:
  49:fltk-1.3.4-1/src/fl_round_box.cxx ****   34:fltk-1.3.4-1/FL/fl_draw.H **** 
 207              		.loc 2 49 0
 208 009a 4439F5   		cmpl	%r14d, %ebp
 209 009d 0F8FB501 		jg	.L44
 209      0000
 210 00a3 418D442D 		leal	0(%r13,%rbp), %eax
 210      00
 211 00a8 F20F100D 		movsd	.LC3(%rip), %xmm1
 211      00000000 
 212 00b0 660FEFC0 		pxor	%xmm0, %xmm0
 213 00b4 4C890C24 		movq	%r9, (%rsp)
 214 00b8 89C7     		movl	%eax, %edi
 215 00ba 8944240C 		movl	%eax, 12(%rsp)
 216 00be 4489F9   		movl	%r15d, %ecx
 217 00c1 4429FF   		subl	%r15d, %edi
 218 00c4 4489FA   		movl	%r15d, %edx
 219 00c7 4489E6   		movl	%r12d, %esi
 220 00ca 41FFD1   		call	*%r9
 221              	.LVL31:
 222 00cd 4C8B0C24 		movq	(%rsp), %r9
  50:fltk-1.3.4-1/src/fl_round_box.cxx ****   35:fltk-1.3.4-1/FL/fl_draw.H **** // Label flags...
 223              		.loc 2 50 0
 224 00d1 F20F100D 		movsd	.LC2(%rip), %xmm1
 224      00000000 
 225 00d9 F20F1005 		movsd	.LC3(%rip), %xmm0
 225      00000000 
 226              	.L26:
 227              		.loc 2 50 0 is_stmt 0 discriminator 8
 228 00e1 438D0434 		leal	(%r12,%r14), %eax
 229 00e5 4489F9   		movl	%r15d, %ecx
 230 00e8 4489FA   		movl	%r15d, %edx
 231 00eb 4489EF   		movl	%r13d, %edi
 232 00ee 89C6     		movl	%eax, %esi
 233 00f0 890424   		movl	%eax, (%rsp)
 234              	.LVL32:
 235 00f3 4429FE   		subl	%r15d, %esi
 236 00f6 41FFD1   		call	*%r9
 237              	.LVL33:
  51:fltk-1.3.4-1/src/fl_round_box.cxx ****   36:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT extern char fl_draw_shortcut;
  52:fltk-1.3.4-1/src/fl_round_box.cxx ****   37:fltk-1.3.4-1/FL/fl_draw.H **** 
  53:fltk-1.3.4-1/src/fl_round_box.cxx ****   38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
  54:fltk-1.3.4-1/src/fl_round_box.cxx ****   39:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  55:fltk-1.3.4-1/src/fl_round_box.cxx ****   40:fltk-1.3.4-1/FL/fl_draw.H **** */
  56:fltk-1.3.4-1/src/fl_round_box.cxx ****   41:fltk-1.3.4-1/FL/fl_draw.H **** 
  57:fltk-1.3.4-1/src/fl_round_box.cxx ****   42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
  58:fltk-1.3.4-1/src/fl_round_box.cxx ****   43:fltk-1.3.4-1/FL/fl_draw.H **** /**
 238              		.loc 2 58 0 is_stmt 1 discriminator 8
 239 00f9 83FB03   		cmpl	$3, %ebx
 240 00fc 0F84AE01 		je	.L45
 240      0000
  59:fltk-1.3.4-1/src/fl_round_box.cxx ****   44:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  60:fltk-1.3.4-1/src/fl_round_box.cxx ****   45:fltk-1.3.4-1/FL/fl_draw.H ****  For colormapped displays, a color cell will be allocated out o
  61:fltk-1.3.4-1/src/fl_round_box.cxx ****   46:fltk-1.3.4-1/FL/fl_draw.H ****  \p fl_colormap the first time you use a color. If the colormap
  62:fltk-1.3.4-1/src/fl_round_box.cxx ****   47:fltk-1.3.4-1/FL/fl_draw.H ****  then a least-squares algorithm is used to find the closest col
  63:fltk-1.3.4-1/src/fl_round_box.cxx ****   48:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  64:fltk-1.3.4-1/src/fl_round_box.cxx ****   49:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 241              		.loc 2 64 0
 242 0102 4439F5   		cmpl	%r14d, %ebp
 243 0105 0F8D0501 		jge	.L18
 243      0000
  65:fltk-1.3.4-1/src/fl_round_box.cxx ****   50:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] c color 
 244              		.loc 2 65 0
 245 010b 85DB     		testl	%ebx, %ebx
 246 010d 0F856502 		jne	.L21
 246      0000
 247              	.L17:
 248              	.LVL34:
 249              	.LBB26:
 250              	.LBB27:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 251              		.loc 1 270 0
 252 0113 4489FA   		movl	%r15d, %edx
 253 0116 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 253      000000
 254 011d 448B3424 		movl	(%rsp), %r14d
 255 0121 C1EA1F   		shrl	$31, %edx
 256 0124 4489F8   		movl	%r15d, %eax
 257 0127 4489EE   		movl	%r13d, %esi
 258 012a 4401FA   		addl	%r15d, %edx
 259 012d D1F8     		sarl	%eax
 260 012f D1FA     		sarl	%edx
 261 0131 4129D6   		subl	%edx, %r14d
 262 0134 418D5404 		leal	-1(%r12,%rax), %edx
 262      FF
 263              	.LVL35:
 264 0139 488B07   		movq	(%rdi), %rax
 265 013c 418D4E01 		leal	1(%r14), %ecx
 266 0140 488B4048 		movq	72(%rax), %rax
 267              	.LVL36:
 268              	.L37:
 269              	.LBE27:
 270              	.LBE26:
  66:fltk-1.3.4-1/src/fl_round_box.cxx ****   51:fltk-1.3.4-1/FL/fl_draw.H ****  */
  67:fltk-1.3.4-1/src/fl_round_box.cxx ****   52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c);
  68:fltk-1.3.4-1/src/fl_round_box.cxx ****   53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead *
  69:fltk-1.3.4-1/src/fl_round_box.cxx ****   54:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_color(int c) {fl_color((Fl_Color)c);}
  70:fltk-1.3.4-1/src/fl_round_box.cxx ****   55:fltk-1.3.4-1/FL/fl_draw.H **** /**
  71:fltk-1.3.4-1/src/fl_round_box.cxx ****   56:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  72:fltk-1.3.4-1/src/fl_round_box.cxx ****   57:fltk-1.3.4-1/FL/fl_draw.H ****  The closest possible match to the RGB color is used.
 271              		.loc 2 72 0
 272 0144 4883C418 		addq	$24, %rsp
 273              		.cfi_remember_state
 274              		.cfi_def_cfa_offset 56
 275 0148 5B       		popq	%rbx
 276              		.cfi_def_cfa_offset 48
 277              	.LVL37:
 278 0149 5D       		popq	%rbp
 279              		.cfi_def_cfa_offset 40
 280              	.LVL38:
 281 014a 415C     		popq	%r12
 282              		.cfi_def_cfa_offset 32
 283              	.LVL39:
 284 014c 415D     		popq	%r13
 285              		.cfi_def_cfa_offset 24
 286              	.LVL40:
 287 014e 415E     		popq	%r14
 288              		.cfi_def_cfa_offset 16
 289 0150 415F     		popq	%r15
 290              		.cfi_def_cfa_offset 8
 291              	.LVL41:
 292              	.LBB28:
 293              	.LBB29:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 294              		.loc 1 255 0
 295 0152 FFE0     		jmp	*%rax
 296              	.LVL42:
 297              		.p2align 4,,10
 298 0154 0F1F4000 		.p2align 3
 299              	.L24:
 300              		.cfi_restore_state
 301              	.LBE29:
 302              	.LBE28:
 303              	.LBB31:
 304              	.LBB32:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 305              		.loc 1 255 0 is_stmt 0 discriminator 1
 306 0158 4489FA   		movl	%r15d, %edx
 307 015b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 307      000000
 308 0162 8B4C240C 		movl	12(%rsp), %ecx
 309 0166 C1EA1F   		shrl	$31, %edx
 310 0169 4489FE   		movl	%r15d, %esi
 311 016c 4401FA   		addl	%r15d, %edx
 312 016f D1FE     		sarl	%esi
 313 0171 D1FA     		sarl	%edx
 314 0173 4C8B07   		movq	(%rdi), %r8
 315 0176 418D7435 		leal	-1(%r13,%rsi), %esi
 315      FF
 316              	.LVL43:
 317 017b 29D1     		subl	%edx, %ecx
 318 017d 8B1424   		movl	(%rsp), %edx
 319 0180 83C101   		addl	$1, %ecx
 320 0183 83EA01   		subl	$1, %edx
 321 0186 41FF5030 		call	*48(%r8)
 322              	.LVL44:
 323              	.LBE32:
 324              	.LBE31:
  69:fltk-1.3.4-1/src/fl_round_box.cxx ****   55:fltk-1.3.4-1/FL/fl_draw.H **** /**
 325              		.loc 2 69 0 is_stmt 1 discriminator 1
 326 018a 83FB01   		cmpl	$1, %ebx
 327 018d 0F858E00 		jne	.L25
 327      0000
 328              	.LVL45:
 329              	.L3:
 330              		.loc 2 72 0
 331 0193 4883C418 		addq	$24, %rsp
 332              		.cfi_remember_state
 333              		.cfi_def_cfa_offset 56
 334 0197 5B       		popq	%rbx
 335              		.cfi_def_cfa_offset 48
 336              	.LVL46:
 337 0198 5D       		popq	%rbp
 338              		.cfi_def_cfa_offset 40
 339              	.LVL47:
 340 0199 415C     		popq	%r12
 341              		.cfi_def_cfa_offset 32
 342 019b 415D     		popq	%r13
 343              		.cfi_def_cfa_offset 24
 344 019d 415E     		popq	%r14
 345              		.cfi_def_cfa_offset 16
 346 019f 415F     		popq	%r15
 347              		.cfi_def_cfa_offset 8
 348              	.LVL48:
 349 01a1 C3       		ret
 350              	.LVL49:
 351              		.p2align 4,,10
 352 01a2 660F1F44 		.p2align 3
 352      0000
 353              	.L14:
 354              		.cfi_restore_state
  55:fltk-1.3.4-1/src/fl_round_box.cxx ****   41:fltk-1.3.4-1/FL/fl_draw.H **** 
 355              		.loc 2 55 0
 356 01a8 4439F5   		cmpl	%r14d, %ebp
 357 01ab 0F8F4F02 		jg	.L46
 357      0000
 358 01b1 438D0434 		leal	(%r12,%r14), %eax
 359 01b5 F20F1005 		movsd	.LC6(%rip), %xmm0
 359      00000000 
 360 01bd F20F100D 		movsd	.LC2(%rip), %xmm1
 360      00000000 
 361 01c5 4489F9   		movl	%r15d, %ecx
 362 01c8 89C6     		movl	%eax, %esi
 363 01ca 4489FA   		movl	%r15d, %edx
 364 01cd 4489EF   		movl	%r13d, %edi
 365 01d0 4429FE   		subl	%r15d, %esi
 366 01d3 890424   		movl	%eax, (%rsp)
 367 01d6 E8000000 		call	_ZL8fl_arc_iiiiidd
 367      00
 368              	.LVL50:
  56:fltk-1.3.4-1/src/fl_round_box.cxx ****   42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
 369              		.loc 2 56 0
 370 01db F20F1005 		movsd	.LC2(%rip), %xmm0
 370      00000000 
 371              	.L28:
  56:fltk-1.3.4-1/src/fl_round_box.cxx ****   42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
 372              		.loc 2 56 0 is_stmt 0 discriminator 4
 373 01e3 418D442D 		leal	0(%r13,%rbp), %eax
 373      00
 374 01e8 F20F100D 		movsd	.LC7(%rip), %xmm1
 374      00000000 
 375 01f0 4489F9   		movl	%r15d, %ecx
 376 01f3 4489FA   		movl	%r15d, %edx
 377 01f6 4489E6   		movl	%r12d, %esi
 378 01f9 89C7     		movl	%eax, %edi
 379 01fb 8944240C 		movl	%eax, 12(%rsp)
 380 01ff 4429FF   		subl	%r15d, %edi
 381 0202 E8000000 		call	_ZL8fl_arc_iiiiidd
 381      00
 382              	.LVL51:
  64:fltk-1.3.4-1/src/fl_round_box.cxx ****   50:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] c color 
 383              		.loc 2 64 0 is_stmt 1 discriminator 4
 384 0207 4439F5   		cmpl	%r14d, %ebp
 385 020a 0F8C6801 		jl	.L21
 385      0000
 386              	.LVL52:
 387              		.p2align 4,,10
 388              		.p2align 3
 389              	.L18:
  67:fltk-1.3.4-1/src/fl_round_box.cxx ****   53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead *
 390              		.loc 2 67 0
 391 0210 4439F5   		cmpl	%r14d, %ebp
 392 0213 0F8E7AFF 		jle	.L3
 392      FFFF
  68:fltk-1.3.4-1/src/fl_round_box.cxx ****   54:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_color(int c) {fl_color((Fl_Color)c);}
 393              		.loc 2 68 0
 394 0219 85DB     		testl	%ebx, %ebx
 395 021b 0F8537FF 		jne	.L24
 395      FFFF
 396              	.L25:
 397              	.LVL53:
 398              	.LBB33:
 399              	.LBB30:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 400              		.loc 1 255 0
 401 0221 4489FA   		movl	%r15d, %edx
 402 0224 8B44240C 		movl	12(%rsp), %eax
 403 0228 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 403      000000
 404 022f C1EA1F   		shrl	$31, %edx
 405 0232 4401FA   		addl	%r15d, %edx
 406 0235 D1FA     		sarl	%edx
 407 0237 29D0     		subl	%edx, %eax
 408 0239 4489E2   		movl	%r12d, %edx
 409 023c 8D4801   		leal	1(%rax), %ecx
 410 023f 4489F8   		movl	%r15d, %eax
 411 0242 D1F8     		sarl	%eax
 412 0244 418D7405 		leal	-1(%r13,%rax), %esi
 412      FF
 413              	.LVL54:
 414 0249 488B07   		movq	(%rdi), %rax
 415 024c 488B4030 		movq	48(%rax), %rax
 416 0250 E9EFFEFF 		jmp	.L37
 416      FF
 417              	.LVL55:
 418              		.p2align 4,,10
 419 0255 0F1F00   		.p2align 3
 420              	.L44:
 421              	.LBE30:
 422              	.LBE33:
  49:fltk-1.3.4-1/src/fl_round_box.cxx ****   35:fltk-1.3.4-1/FL/fl_draw.H **** // Label flags...
 423              		.loc 2 49 0
 424 0258 418D442D 		leal	0(%r13,%rbp), %eax
 424      00
 425 025d F20F100D 		movsd	.LC5(%rip), %xmm1
 425      00000000 
 426 0265 F20F1005 		movsd	.LC8(%rip), %xmm0
 426      00000000 
 427 026d 4C890C24 		movq	%r9, (%rsp)
 428 0271 89C7     		movl	%eax, %edi
 429 0273 8944240C 		movl	%eax, 12(%rsp)
 430 0277 4489F9   		movl	%r15d, %ecx
 431 027a 4429FF   		subl	%r15d, %edi
 432 027d 4489FA   		movl	%r15d, %edx
 433 0280 4489E6   		movl	%r12d, %esi
 434 0283 41FFD1   		call	*%r9
 435              	.LVL56:
  50:fltk-1.3.4-1/src/fl_round_box.cxx ****   36:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT extern char fl_draw_shortcut;
 436              		.loc 2 50 0
 437 0286 F20F100D 		movsd	.LC4(%rip), %xmm1
 437      00000000 
 438 028e 4C8B0C24 		movq	(%rsp), %r9
 439 0292 F20F1005 		movsd	.LC5(%rip), %xmm0
 439      00000000 
 440 029a E942FEFF 		jmp	.L26
 440      FF
 441              	.LVL57:
 442 029f 90       		.p2align 4,,10
 443              		.p2align 3
 444              	.L30:
  47:fltk-1.3.4-1/src/fl_round_box.cxx ****   33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
 445              		.loc 2 47 0
 446 02a0 41B90000 		movl	$_Z6fl_pieiiiidd, %r9d
 446      0000
 447 02a6 E9EFFDFF 		jmp	.L8
 447      FF
 448 02ab 0F1F4400 		.p2align 4,,10
 448      00
 449              		.p2align 3
 450              	.L45:
  59:fltk-1.3.4-1/src/fl_round_box.cxx ****   45:fltk-1.3.4-1/FL/fl_draw.H ****  For colormapped displays, a color cell will be allocated out o
 451              		.loc 2 59 0
 452 02b0 4439F5   		cmpl	%r14d, %ebp
 453 02b3 0F8C8701 		jl	.L47
 453      0000
  61:fltk-1.3.4-1/src/fl_round_box.cxx ****   47:fltk-1.3.4-1/FL/fl_draw.H ****  then a least-squares algorithm is used to find the closest col
 454              		.loc 2 61 0
 455 02b9 0F8ED4FE 		jle	.L3
 455      FFFF
 456              	.LVL58:
 457              	.LBB34:
 458              	.LBB35:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 459              		.loc 1 206 0
 460 02bf 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 460      000000
 461 02c6 4489F8   		movl	%r15d, %eax
 462 02c9 4489FA   		movl	%r15d, %edx
 463 02cc D1F8     		sarl	%eax
 464 02ce 83E2FE   		andl	$-2, %edx
 465 02d1 89E9     		movl	%ebp, %ecx
 466 02d3 428D3428 		leal	(%rax,%r13), %esi
 467              	.LVL59:
 468 02d7 29D1     		subl	%edx, %ecx
 469 02d9 4589F0   		movl	%r14d, %r8d
 470 02dc 488B07   		movq	(%rdi), %rax
 471 02df 4489E2   		movl	%r12d, %edx
 472 02e2 488B4020 		movq	32(%rax), %rax
 473              	.LVL60:
 474              	.L36:
 475              	.LBE35:
 476              	.LBE34:
 477              		.loc 2 72 0
 478 02e6 4883C418 		addq	$24, %rsp
 479              		.cfi_remember_state
 480              		.cfi_def_cfa_offset 56
 481 02ea 5B       		popq	%rbx
 482              		.cfi_def_cfa_offset 48
 483              	.LVL61:
 484 02eb 5D       		popq	%rbp
 485              		.cfi_def_cfa_offset 40
 486              	.LVL62:
 487 02ec 415C     		popq	%r12
 488              		.cfi_def_cfa_offset 32
 489              	.LVL63:
 490 02ee 415D     		popq	%r13
 491              		.cfi_def_cfa_offset 24
 492              	.LVL64:
 493 02f0 415E     		popq	%r14
 494              		.cfi_def_cfa_offset 16
 495 02f2 415F     		popq	%r15
 496              		.cfi_def_cfa_offset 8
 497              	.LVL65:
 498              	.LBB37:
 499              	.LBB36:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 500              		.loc 1 206 0
 501 02f4 FFE0     		jmp	*%rax
 502              	.LVL66:
 503 02f6 662E0F1F 		.p2align 4,,10
 503      84000000 
 503      0000
 504              		.p2align 3
 505              	.L43:
 506              		.cfi_restore_state
 507              	.LBE36:
 508              	.LBE37:
  51:fltk-1.3.4-1/src/fl_round_box.cxx ****   37:fltk-1.3.4-1/FL/fl_draw.H **** 
 509              		.loc 2 51 0
 510 0300 85DB     		testl	%ebx, %ebx
 511 0302 0F85A0FE 		jne	.L14
 511      FFFF
  52:fltk-1.3.4-1/src/fl_round_box.cxx ****   38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
 512              		.loc 2 52 0
 513 0308 4439F5   		cmpl	%r14d, %ebp
 514 030b 0F8FAF00 		jg	.L48
 514      0000
 515 0311 418D442D 		leal	0(%r13,%rbp), %eax
 515      00
 516 0316 F20F1005 		movsd	.LC10(%rip), %xmm0
 516      00000000 
 517 031e F20F100D 		movsd	.LC3(%rip), %xmm1
 517      00000000 
 518 0326 4489F9   		movl	%r15d, %ecx
 519 0329 89C7     		movl	%eax, %edi
 520 032b 4489FA   		movl	%r15d, %edx
 521 032e 4489E6   		movl	%r12d, %esi
 522 0331 4429FF   		subl	%r15d, %edi
 523 0334 8944240C 		movl	%eax, 12(%rsp)
 524 0338 E8000000 		call	_ZL8fl_arc_iiiiidd
 524      00
 525              	.LVL67:
  53:fltk-1.3.4-1/src/fl_round_box.cxx ****   39:fltk-1.3.4-1/FL/fl_draw.H ****     @{
 526              		.loc 2 53 0
 527 033d F20F1005 		movsd	.LC3(%rip), %xmm0
 527      00000000 
 528              	.L27:
  53:fltk-1.3.4-1/src/fl_round_box.cxx ****   39:fltk-1.3.4-1/FL/fl_draw.H ****     @{
 529              		.loc 2 53 0 is_stmt 0 discriminator 4
 530 0345 438D0434 		leal	(%r12,%r14), %eax
 531 0349 F20F100D 		movsd	.LC6(%rip), %xmm1
 531      00000000 
 532 0351 4489F9   		movl	%r15d, %ecx
 533 0354 4489FA   		movl	%r15d, %edx
 534 0357 4489EF   		movl	%r13d, %edi
 535 035a 89C6     		movl	%eax, %esi
 536 035c 890424   		movl	%eax, (%rsp)
 537 035f 4429FE   		subl	%r15d, %esi
 538 0362 E8000000 		call	_ZL8fl_arc_iiiiidd
 538      00
 539              	.LVL68:
  64:fltk-1.3.4-1/src/fl_round_box.cxx ****   50:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] c color 
 540              		.loc 2 64 0 is_stmt 1 discriminator 4
 541 0367 4439F5   		cmpl	%r14d, %ebp
 542 036a 0F8CA3FD 		jl	.L17
 542      FFFF
 543 0370 E99BFEFF 		jmp	.L18
 543      FF
 544              	.LVL69:
 545              		.p2align 4,,10
 546 0375 0F1F00   		.p2align 3
 547              	.L21:
 548              	.LBB38:
 549              	.LBB39:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 550              		.loc 1 270 0 discriminator 1
 551 0378 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 551      000000
 552 037f 4489FA   		movl	%r15d, %edx
 553 0382 8B0C24   		movl	(%rsp), %ecx
 554 0385 C1EA1F   		shrl	$31, %edx
 555 0388 8B74240C 		movl	12(%rsp), %esi
 556 038c 4401FA   		addl	%r15d, %edx
 557 038f D1FA     		sarl	%edx
 558 0391 4C8B07   		movq	(%rdi), %r8
 559 0394 29D1     		subl	%edx, %ecx
 560 0396 4489FA   		movl	%r15d, %edx
 561 0399 83EE01   		subl	$1, %esi
 562 039c D1FA     		sarl	%edx
 563 039e 83C101   		addl	$1, %ecx
 564 03a1 418D5414 		leal	-1(%r12,%rdx), %edx
 564      FF
 565              	.LVL70:
 566 03a6 41FF5048 		call	*72(%r8)
 567              	.LVL71:
 568              	.LBE39:
 569              	.LBE38:
  66:fltk-1.3.4-1/src/fl_round_box.cxx ****   52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c);
 570              		.loc 2 66 0 discriminator 1
 571 03aa 83FB01   		cmpl	$1, %ebx
 572 03ad 0F84E0FD 		je	.L3
 572      FFFF
 573 03b3 E95BFDFF 		jmp	.L17
 573      FF
 574              	.LVL72:
 575 03b8 0F1F8400 		.p2align 4,,10
 575      00000000 
 576              		.p2align 3
 577              	.L48:
  52:fltk-1.3.4-1/src/fl_round_box.cxx ****   38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
 578              		.loc 2 52 0
 579 03c0 418D442D 		leal	0(%r13,%rbp), %eax
 579      00
 580 03c5 F20F1005 		movsd	.LC10(%rip), %xmm0
 580      00000000 
 581 03cd F20F100D 		movsd	.LC5(%rip), %xmm1
 581      00000000 
 582 03d5 4489F9   		movl	%r15d, %ecx
 583 03d8 89C7     		movl	%eax, %edi
 584 03da 4489FA   		movl	%r15d, %edx
 585 03dd 4489E6   		movl	%r12d, %esi
 586 03e0 4429FF   		subl	%r15d, %edi
 587 03e3 8944240C 		movl	%eax, 12(%rsp)
 588 03e7 E8000000 		call	_ZL8fl_arc_iiiiidd
 588      00
 589              	.LVL73:
  53:fltk-1.3.4-1/src/fl_round_box.cxx ****   39:fltk-1.3.4-1/FL/fl_draw.H ****     @{
 590              		.loc 2 53 0
 591 03ec F20F1005 		movsd	.LC5(%rip), %xmm0
 591      00000000 
 592 03f4 E94CFFFF 		jmp	.L27
 592      FF
 593 03f9 0F1F8000 		.p2align 4,,10
 593      000000
 594              		.p2align 3
 595              	.L46:
  55:fltk-1.3.4-1/src/fl_round_box.cxx ****   41:fltk-1.3.4-1/FL/fl_draw.H **** 
 596              		.loc 2 55 0
 597 0400 438D0434 		leal	(%r12,%r14), %eax
 598 0404 F20F1005 		movsd	.LC6(%rip), %xmm0
 598      00000000 
 599 040c F20F100D 		movsd	.LC4(%rip), %xmm1
 599      00000000 
 600 0414 4489F9   		movl	%r15d, %ecx
 601 0417 89C6     		movl	%eax, %esi
 602 0419 4489FA   		movl	%r15d, %edx
 603 041c 4489EF   		movl	%r13d, %edi
 604 041f 4429FE   		subl	%r15d, %esi
 605 0422 890424   		movl	%eax, (%rsp)
 606 0425 E8000000 		call	_ZL8fl_arc_iiiiidd
 606      00
 607              	.LVL74:
  56:fltk-1.3.4-1/src/fl_round_box.cxx ****   42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
 608              		.loc 2 56 0
 609 042a F20F1005 		movsd	.LC4(%rip), %xmm0
 609      00000000 
 610 0432 E9ACFDFF 		jmp	.L28
 610      FF
 611              	.LVL75:
 612 0437 660F1F84 		.p2align 4,,10
 612      00000000 
 612      00
 613              		.p2align 3
 614              	.L47:
 615              	.LBB40:
 616              	.LBB41:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 617              		.loc 1 206 0
 618 0440 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 618      000000
 619 0447 4489F8   		movl	%r15d, %eax
 620 044a 4489F9   		movl	%r15d, %ecx
 621 044d D1F8     		sarl	%eax
 622 044f 83E1FE   		andl	$-2, %ecx
 623 0452 4489EE   		movl	%r13d, %esi
 624 0455 428D1420 		leal	(%rax,%r12), %edx
 625              	.LVL76:
 626 0459 4129CE   		subl	%ecx, %r14d
 627 045c 89E9     		movl	%ebp, %ecx
 628 045e 488B07   		movq	(%rdi), %rax
 629 0461 4589F0   		movl	%r14d, %r8d
 630 0464 488B4020 		movq	32(%rax), %rax
 631 0468 E979FEFF 		jmp	.L36
 631      FF
 632              	.LBE41:
 633              	.LBE40:
 634              		.cfi_endproc
 635              	.LFE469:
 637              		.section	.text.unlikely._ZL4drawiiiiiij
 638              	.LCOLDE11:
 639              		.section	.text._ZL4drawiiiiiij
 640              	.LHOTE11:
 641              		.section	.text.unlikely._Z17fl_round_down_boxiiiij,"ax",@progbits
 642              	.LCOLDB12:
 643              		.section	.text._Z17fl_round_down_boxiiiij,"ax",@progbits
 644              	.LHOTB12:
 645              		.p2align 4,,15
 646              		.globl	_Z17fl_round_down_boxiiiij
 648              	_Z17fl_round_down_boxiiiij:
 649              	.LFB470:
  73:fltk-1.3.4-1/src/fl_round_box.cxx ****   58:fltk-1.3.4-1/FL/fl_draw.H ****  The RGB color is used directly on TrueColor displays.
  74:fltk-1.3.4-1/src/fl_round_box.cxx ****   59:fltk-1.3.4-1/FL/fl_draw.H ****  For colormap visuals the nearest index in the gray
  75:fltk-1.3.4-1/src/fl_round_box.cxx ****   60:fltk-1.3.4-1/FL/fl_draw.H ****  ramp or color cube is used.
  76:fltk-1.3.4-1/src/fl_round_box.cxx ****   61:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
 650              		.loc 2 76 0
 651              		.cfi_startproc
 652              	.LVL77:
 653 0000 4157     		pushq	%r15
 654              		.cfi_def_cfa_offset 16
 655              		.cfi_offset 15, -16
 656 0002 4156     		pushq	%r14
 657              		.cfi_def_cfa_offset 24
 658              		.cfi_offset 14, -24
 659 0004 4589C7   		movl	%r8d, %r15d
 660 0007 4155     		pushq	%r13
 661              		.cfi_def_cfa_offset 32
 662              		.cfi_offset 13, -32
 663 0009 4154     		pushq	%r12
 664              		.cfi_def_cfa_offset 40
 665              		.cfi_offset 12, -40
 666 000b 4189D6   		movl	%edx, %r14d
 667 000e 55       		pushq	%rbp
 668              		.cfi_def_cfa_offset 48
 669              		.cfi_offset 6, -48
 670 000f 53       		pushq	%rbx
 671              		.cfi_def_cfa_offset 56
 672              		.cfi_offset 3, -56
 673 0010 89CD     		movl	%ecx, %ebp
 674 0012 89F3     		movl	%esi, %ebx
 675 0014 4189FD   		movl	%edi, %r13d
 676 0017 4883EC18 		subq	$24, %rsp
 677              		.cfi_def_cfa_offset 80
  77:fltk-1.3.4-1/src/fl_round_box.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 678              		.loc 2 77 0
 679 001b E8000000 		call	_Z12fl_gray_rampv
 679      00
 680              	.LVL78:
  78:fltk-1.3.4-1/src/fl_round_box.cxx ****   63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
 681              		.loc 2 78 0
 682 0020 4489FF   		movl	%r15d, %edi
  77:fltk-1.3.4-1/src/fl_round_box.cxx ****   62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
 683              		.loc 2 77 0
 684 0023 4989C4   		movq	%rax, %r12
 685              	.LVL79:
  79:fltk-1.3.4-1/src/fl_round_box.cxx ****   64:fltk-1.3.4-1/FL/fl_draw.H ****  */
 686              		.loc 2 79 0
 687 0026 458D7EFE 		leal	-2(%r14), %r15d
 688              	.LVL80:
  78:fltk-1.3.4-1/src/fl_round_box.cxx ****   63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
 689              		.loc 2 78 0
 690 002a E8000000 		call	_ZN2Fl9box_colorEj
 690      00
 691              	.LVL81:
 692 002f 4883EC08 		subq	$8, %rsp
 693              		.cfi_def_cfa_offset 88
 694 0033 4189E8   		movl	%ebp, %r8d
 695 0036 4489F1   		movl	%r14d, %ecx
 696 0039 50       		pushq	%rax
 697              		.cfi_def_cfa_offset 96
 698 003a 89DA     		movl	%ebx, %edx
 699 003c 4489EE   		movl	%r13d, %esi
 700 003f 41B90200 		movl	$2, %r9d
 700      0000
 701 0045 BF030000 		movl	$3, %edi
 701      00
 702 004a E8000000 		call	_ZL4drawiiiiiij
 702      00
 703              	.LVL82:
 704              		.loc 2 79 0
 705 004f 418D4501 		leal	1(%r13), %eax
 706 0053 4189E8   		movl	%ebp, %r8d
 707 0056 4489F9   		movl	%r15d, %ecx
 708 0059 89DA     		movl	%ebx, %edx
 709 005b 4531C9   		xorl	%r9d, %r9d
 710 005e 31FF     		xorl	%edi, %edi
 711 0060 89C6     		movl	%eax, %esi
 712 0062 410FB644 		movzbl	78(%r12), %eax
 712      244E
 713 0068 8974241C 		movl	%esi, 28(%rsp)
 714 006c 890424   		movl	%eax, (%rsp)
 715 006f E8000000 		call	_ZL4drawiiiiiij
 715      00
 716              	.LVL83:
  80:fltk-1.3.4-1/src/fl_round_box.cxx ****   65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_dr
 717              		.loc 2 80 0
 718 0074 410FB644 		movzbl	72(%r12), %eax
 718      2448
 719 007a 8B74241C 		movl	28(%rsp), %esi
 720 007e 4189E8   		movl	%ebp, %r8d
 721 0081 4489F9   		movl	%r15d, %ecx
 722 0084 89DA     		movl	%ebx, %edx
 723 0086 41B90100 		movl	$1, %r9d
 723      0000
 724 008c 31FF     		xorl	%edi, %edi
 725 008e 890424   		movl	%eax, (%rsp)
 726 0091 E8000000 		call	_ZL4drawiiiiiij
 726      00
 727              	.LVL84:
  81:fltk-1.3.4-1/src/fl_round_box.cxx ****   66:fltk-1.3.4-1/FL/fl_draw.H **** /**
 728              		.loc 2 81 0
 729 0096 410FB644 		movzbl	78(%r12), %eax
 729      244E
 730 009c 4189E8   		movl	%ebp, %r8d
 731 009f 4489F1   		movl	%r14d, %ecx
 732 00a2 89DA     		movl	%ebx, %edx
 733 00a4 4489EE   		movl	%r13d, %esi
 734 00a7 4531C9   		xorl	%r9d, %r9d
 735 00aa 31FF     		xorl	%edi, %edi
 736 00ac 890424   		movl	%eax, (%rsp)
 737 00af E8000000 		call	_ZL4drawiiiiiij
 737      00
 738              	.LVL85:
  82:fltk-1.3.4-1/src/fl_round_box.cxx ****   67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
 739              		.loc 2 82 0
 740 00b4 410FB644 		movzbl	72(%r12), %eax
 740      2448
 741 00ba 4189E8   		movl	%ebp, %r8d
 742 00bd 4489F1   		movl	%r14d, %ecx
 743 00c0 89DA     		movl	%ebx, %edx
 744 00c2 4489EE   		movl	%r13d, %esi
 745 00c5 41B90100 		movl	$1, %r9d
 745      0000
 746 00cb 31FF     		xorl	%edi, %edi
 747 00cd 890424   		movl	%eax, (%rsp)
 748 00d0 E8000000 		call	_ZL4drawiiiiiij
 748      00
 749              	.LVL86:
  83:fltk-1.3.4-1/src/fl_round_box.cxx ****   68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
 750              		.loc 2 83 0
 751 00d5 410FB644 		movzbl	83(%r12), %eax
 751      2453
 752 00db 4189E8   		movl	%ebp, %r8d
 753 00de 4489F1   		movl	%r14d, %ecx
 754 00e1 89DA     		movl	%ebx, %edx
 755 00e3 4489EE   		movl	%r13d, %esi
 756 00e6 4531C9   		xorl	%r9d, %r9d
 757 00e9 BF010000 		movl	$1, %edi
 757      00
 758 00ee 890424   		movl	%eax, (%rsp)
 759 00f1 E8000000 		call	_ZL4drawiiiiiij
 759      00
 760              	.LVL87:
  84:fltk-1.3.4-1/src/fl_round_box.cxx ****   69:fltk-1.3.4-1/FL/fl_draw.H **** */
 761              		.loc 2 84 0
 762 00f6 410FB644 		movzbl	85(%r12), %eax
 762      2455
 763 00fc 8B74241C 		movl	28(%rsp), %esi
 764 0100 4189E8   		movl	%ebp, %r8d
 765 0103 4489F9   		movl	%r15d, %ecx
 766 0106 89DA     		movl	%ebx, %edx
 767 0108 4531C9   		xorl	%r9d, %r9d
 768 010b BF010000 		movl	$1, %edi
 768      00
 769 0110 890424   		movl	%eax, (%rsp)
 770 0113 E8000000 		call	_ZL4drawiiiiiij
 770      00
 771              	.LVL88:
  85:fltk-1.3.4-1/src/fl_round_box.cxx ****   70:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Color fl_color() {return fl_graphics_driver->color();
 772              		.loc 2 85 0
 773 0118 410FB644 		movzbl	85(%r12), %eax
 773      2455
 774 011e 4189E8   		movl	%ebp, %r8d
 775 0121 4489F1   		movl	%r14d, %ecx
 776 0124 89DA     		movl	%ebx, %edx
 777 0126 4489EE   		movl	%r13d, %esi
 778 0129 41B90100 		movl	$1, %r9d
 778      0000
 779 012f BF010000 		movl	$1, %edi
 779      00
 780 0134 890424   		movl	%eax, (%rsp)
 781 0137 E8000000 		call	_ZL4drawiiiiiij
 781      00
 782              	.LVL89:
  86:fltk-1.3.4-1/src/fl_round_box.cxx ****   71:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 783              		.loc 2 86 0
 784 013c 410FB644 		movzbl	87(%r12), %eax
 784      2457
 785 0142 8B74241C 		movl	28(%rsp), %esi
 786 0146 4189E8   		movl	%ebp, %r8d
 787 0149 4489F9   		movl	%r15d, %ecx
 788 014c 89DA     		movl	%ebx, %edx
 789 014e 41B90100 		movl	$1, %r9d
 789      0000
 790 0154 BF010000 		movl	$1, %edi
 790      00
 791 0159 890424   		movl	%eax, (%rsp)
 792 015c E8000000 		call	_ZL4drawiiiiiij
 792      00
 793              	.LVL90:
  87:fltk-1.3.4-1/src/fl_round_box.cxx ****   72:fltk-1.3.4-1/FL/fl_draw.H **** 
 794              		.loc 2 87 0
 795 0161 410FB644 		movzbl	65(%r12), %eax
 795      2441
 796 0167 4189E8   		movl	%ebp, %r8d
 797 016a 4489F1   		movl	%r14d, %ecx
 798 016d 89DA     		movl	%ebx, %edx
 799 016f 4489EE   		movl	%r13d, %esi
 800 0172 41B90200 		movl	$2, %r9d
 800      0000
 801 0178 BF020000 		movl	$2, %edi
 801      00
 802 017d 890424   		movl	%eax, (%rsp)
 803 0180 E8000000 		call	_ZL4drawiiiiiij
 803      00
 804              	.LVL91:
  88:fltk-1.3.4-1/src/fl_round_box.cxx ****   73:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_drawings
 805              		.loc 2 88 0
 806 0185 4883C428 		addq	$40, %rsp
 807              		.cfi_def_cfa_offset 56
 808 0189 5B       		popq	%rbx
 809              		.cfi_def_cfa_offset 48
 810              	.LVL92:
 811 018a 5D       		popq	%rbp
 812              		.cfi_def_cfa_offset 40
 813              	.LVL93:
 814 018b 415C     		popq	%r12
 815              		.cfi_def_cfa_offset 32
 816              	.LVL94:
 817 018d 415D     		popq	%r13
 818              		.cfi_def_cfa_offset 24
 819              	.LVL95:
 820 018f 415E     		popq	%r14
 821              		.cfi_def_cfa_offset 16
 822              	.LVL96:
 823 0191 415F     		popq	%r15
 824              		.cfi_def_cfa_offset 8
 825              	.LVL97:
 826 0193 C3       		ret
 827              		.cfi_endproc
 828              	.LFE470:
 830              		.section	.text.unlikely._Z17fl_round_down_boxiiiij
 831              	.LCOLDE12:
 832              		.section	.text._Z17fl_round_down_boxiiiij
 833              	.LHOTE12:
 834              		.section	.text.unlikely._Z15fl_round_up_boxiiiij,"ax",@progbits
 835              	.LCOLDB13:
 836              		.section	.text._Z15fl_round_up_boxiiiij,"ax",@progbits
 837              	.LHOTB13:
 838              		.p2align 4,,15
 839              		.globl	_Z15fl_round_up_boxiiiij
 841              	_Z15fl_round_up_boxiiiij:
 842              	.LFB471:
  89:fltk-1.3.4-1/src/fl_round_box.cxx ****   74:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  90:fltk-1.3.4-1/src/fl_round_box.cxx ****   75:fltk-1.3.4-1/FL/fl_draw.H **** */
 843              		.loc 2 90 0
 844              		.cfi_startproc
 845              	.LVL98:
 846 0000 4157     		pushq	%r15
 847              		.cfi_def_cfa_offset 16
 848              		.cfi_offset 15, -16
 849 0002 4156     		pushq	%r14
 850              		.cfi_def_cfa_offset 24
 851              		.cfi_offset 14, -24
 852 0004 4589C7   		movl	%r8d, %r15d
 853 0007 4155     		pushq	%r13
 854              		.cfi_def_cfa_offset 32
 855              		.cfi_offset 13, -32
 856 0009 4154     		pushq	%r12
 857              		.cfi_def_cfa_offset 40
 858              		.cfi_offset 12, -40
 859 000b 4189D6   		movl	%edx, %r14d
 860 000e 55       		pushq	%rbp
 861              		.cfi_def_cfa_offset 48
 862              		.cfi_offset 6, -48
 863 000f 53       		pushq	%rbx
 864              		.cfi_def_cfa_offset 56
 865              		.cfi_offset 3, -56
 866 0010 89CD     		movl	%ecx, %ebp
 867 0012 89F3     		movl	%esi, %ebx
 868 0014 4189FD   		movl	%edi, %r13d
 869 0017 4883EC18 		subq	$24, %rsp
 870              		.cfi_def_cfa_offset 80
  91:fltk-1.3.4-1/src/fl_round_box.cxx ****   76:fltk-1.3.4-1/FL/fl_draw.H **** // clip:
 871              		.loc 2 91 0
 872 001b E8000000 		call	_Z12fl_gray_rampv
 872      00
 873              	.LVL99:
  92:fltk-1.3.4-1/src/fl_round_box.cxx ****   77:fltk-1.3.4-1/FL/fl_draw.H **** /**
 874              		.loc 2 92 0
 875 0020 4489FF   		movl	%r15d, %edi
  91:fltk-1.3.4-1/src/fl_round_box.cxx ****   76:fltk-1.3.4-1/FL/fl_draw.H **** // clip:
 876              		.loc 2 91 0
 877 0023 4989C4   		movq	%rax, %r12
 878              	.LVL100:
  93:fltk-1.3.4-1/src/fl_round_box.cxx ****   78:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 879              		.loc 2 93 0
 880 0026 458D7EFE 		leal	-2(%r14), %r15d
 881              	.LVL101:
  92:fltk-1.3.4-1/src/fl_round_box.cxx ****   77:fltk-1.3.4-1/FL/fl_draw.H **** /**
 882              		.loc 2 92 0
 883 002a E8000000 		call	_ZN2Fl9box_colorEj
 883      00
 884              	.LVL102:
 885 002f 4883EC08 		subq	$8, %rsp
 886              		.cfi_def_cfa_offset 88
 887 0033 4189E8   		movl	%ebp, %r8d
 888 0036 4489F1   		movl	%r14d, %ecx
 889 0039 50       		pushq	%rax
 890              		.cfi_def_cfa_offset 96
 891 003a 89DA     		movl	%ebx, %edx
 892 003c 4489EE   		movl	%r13d, %esi
 893 003f 41B90200 		movl	$2, %r9d
 893      0000
 894 0045 BF030000 		movl	$3, %edi
 894      00
 895 004a E8000000 		call	_ZL4drawiiiiiij
 895      00
 896              	.LVL103:
 897              		.loc 2 93 0
 898 004f 418D4501 		leal	1(%r13), %eax
 899 0053 4189E8   		movl	%ebp, %r8d
 900 0056 4489F9   		movl	%r15d, %ecx
 901 0059 89DA     		movl	%ebx, %edx
 902 005b 4531C9   		xorl	%r9d, %r9d
 903 005e BF010000 		movl	$1, %edi
 903      00
 904 0063 89C6     		movl	%eax, %esi
 905 0065 410FB644 		movzbl	72(%r12), %eax
 905      2448
 906 006b 8974241C 		movl	%esi, 28(%rsp)
 907 006f 890424   		movl	%eax, (%rsp)
 908 0072 E8000000 		call	_ZL4drawiiiiiij
 908      00
 909              	.LVL104:
  94:fltk-1.3.4-1/src/fl_round_box.cxx ****   79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
 910              		.loc 2 94 0
 911 0077 410FB644 		movzbl	78(%r12), %eax
 911      244E
 912 007d 8B74241C 		movl	28(%rsp), %esi
 913 0081 4189E8   		movl	%ebp, %r8d
 914 0084 4489F9   		movl	%r15d, %ecx
 915 0087 89DA     		movl	%ebx, %edx
 916 0089 41B90100 		movl	$1, %r9d
 916      0000
 917 008f BF010000 		movl	$1, %edi
 917      00
 918 0094 890424   		movl	%eax, (%rsp)
 919 0097 E8000000 		call	_ZL4drawiiiiiij
 919      00
 920              	.LVL105:
  95:fltk-1.3.4-1/src/fl_round_box.cxx ****   80:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
 921              		.loc 2 95 0
 922 009c 410FB644 		movzbl	72(%r12), %eax
 922      2448
 923 00a2 4189E8   		movl	%ebp, %r8d
 924 00a5 4489F1   		movl	%r14d, %ecx
 925 00a8 89DA     		movl	%ebx, %edx
 926 00aa 4489EE   		movl	%r13d, %esi
 927 00ad 41B90100 		movl	$1, %r9d
 927      0000
 928 00b3 BF010000 		movl	$1, %edi
 928      00
 929 00b8 890424   		movl	%eax, (%rsp)
 930 00bb E8000000 		call	_ZL4drawiiiiiij
 930      00
 931              	.LVL106:
  96:fltk-1.3.4-1/src/fl_round_box.cxx ****   81:fltk-1.3.4-1/FL/fl_draw.H ****  */
 932              		.loc 2 96 0
 933 00c0 410FB644 		movzbl	78(%r12), %eax
 933      244E
 934 00c6 4189E8   		movl	%ebp, %r8d
 935 00c9 4489F1   		movl	%r14d, %ecx
 936 00cc 89DA     		movl	%ebx, %edx
 937 00ce 4489EE   		movl	%r13d, %esi
 938 00d1 41B90200 		movl	$2, %r9d
 938      0000
 939 00d7 BF010000 		movl	$1, %edi
 939      00
 940 00dc 890424   		movl	%eax, (%rsp)
 941 00df E8000000 		call	_ZL4drawiiiiiij
 941      00
 942              	.LVL107:
  97:fltk-1.3.4-1/src/fl_round_box.cxx ****   82:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_clip(int x, int y, int w, int h) {fl_graphi
 943              		.loc 2 97 0
 944 00e4 410FB644 		movzbl	85(%r12), %eax
 944      2455
 945 00ea 4189E8   		movl	%ebp, %r8d
 946 00ed 4489F1   		movl	%r14d, %ecx
 947 00f0 89DA     		movl	%ebx, %edx
 948 00f2 4489EE   		movl	%r13d, %esi
 949 00f5 41B90200 		movl	$2, %r9d
 949      0000
 950 00fb 31FF     		xorl	%edi, %edi
 951 00fd 890424   		movl	%eax, (%rsp)
 952 0100 E8000000 		call	_ZL4drawiiiiiij
 952      00
 953              	.LVL108:
  98:fltk-1.3.4-1/src/fl_round_box.cxx ****   83:fltk-1.3.4-1/FL/fl_draw.H **** /**
 954              		.loc 2 98 0
 955 0105 410FB644 		movzbl	83(%r12), %eax
 955      2453
 956 010b 8B74241C 		movl	28(%rsp), %esi
 957 010f 4189E8   		movl	%ebp, %r8d
 958 0112 4489F9   		movl	%r15d, %ecx
 959 0115 89DA     		movl	%ebx, %edx
 960 0117 41B90100 		movl	$1, %r9d
 960      0000
 961 011d 31FF     		xorl	%edi, %edi
 962 011f 890424   		movl	%eax, (%rsp)
 963 0122 E8000000 		call	_ZL4drawiiiiiij
 963      00
 964              	.LVL109:
  99:fltk-1.3.4-1/src/fl_round_box.cxx ****   84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes
 965              		.loc 2 99 0
 966 0127 410FB644 		movzbl	87(%r12), %eax
 966      2457
 967 012d 4189E8   		movl	%ebp, %r8d
 968 0130 4489F1   		movl	%r14d, %ecx
 969 0133 89DA     		movl	%ebx, %edx
 970 0135 4489EE   		movl	%r13d, %esi
 971 0138 41B90100 		movl	$1, %r9d
 971      0000
 972 013e 31FF     		xorl	%edi, %edi
 973 0140 890424   		movl	%eax, (%rsp)
 974 0143 E8000000 		call	_ZL4drawiiiiiij
 974      00
 975              	.LVL110:
 100:fltk-1.3.4-1/src/fl_round_box.cxx ****   85:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack (deprecated).
 976              		.loc 2 100 0
 977 0148 410FB644 		movzbl	85(%r12), %eax
 977      2455
 978 014e 8B74241C 		movl	28(%rsp), %esi
 979 0152 4189E8   		movl	%ebp, %r8d
 980 0155 4489F9   		movl	%r15d, %ecx
 981 0158 89DA     		movl	%ebx, %edx
 982 015a 4531C9   		xorl	%r9d, %r9d
 983 015d 31FF     		xorl	%edi, %edi
 984 015f 890424   		movl	%eax, (%rsp)
 985 0162 E8000000 		call	_ZL4drawiiiiiij
 985      00
 986              	.LVL111:
 101:fltk-1.3.4-1/src/fl_round_box.cxx ****   86:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
 987              		.loc 2 101 0
 988 0167 410FB644 		movzbl	65(%r12), %eax
 988      2441
 989 016d 4189E8   		movl	%ebp, %r8d
 990 0170 4489F1   		movl	%r14d, %ecx
 991 0173 89DA     		movl	%ebx, %edx
 992 0175 4489EE   		movl	%r13d, %esi
 993 0178 4531C9   		xorl	%r9d, %r9d
 994 017b BF020000 		movl	$2, %edi
 994      00
 995 0180 890424   		movl	%eax, (%rsp)
 996 0183 E8000000 		call	_ZL4drawiiiiiij
 996      00
 997              	.LVL112:
 102:fltk-1.3.4-1/src/fl_round_box.cxx ****   87:fltk-1.3.4-1/FL/fl_draw.H ****  \deprecated
 998              		.loc 2 102 0
 999 0188 4883C428 		addq	$40, %rsp
 1000              		.cfi_def_cfa_offset 56
 1001 018c 5B       		popq	%rbx
 1002              		.cfi_def_cfa_offset 48
 1003              	.LVL113:
 1004 018d 5D       		popq	%rbp
 1005              		.cfi_def_cfa_offset 40
 1006              	.LVL114:
 1007 018e 415C     		popq	%r12
 1008              		.cfi_def_cfa_offset 32
 1009              	.LVL115:
 1010 0190 415D     		popq	%r13
 1011              		.cfi_def_cfa_offset 24
 1012              	.LVL116:
 1013 0192 415E     		popq	%r14
 1014              		.cfi_def_cfa_offset 16
 1015              	.LVL117:
 1016 0194 415F     		popq	%r15
 1017              		.cfi_def_cfa_offset 8
 1018              	.LVL118:
 1019 0196 C3       		ret
 1020              		.cfi_endproc
 1021              	.LFE471:
 1023              		.section	.text.unlikely._Z15fl_round_up_boxiiiij
 1024              	.LCOLDE13:
 1025              		.section	.text._Z15fl_round_up_boxiiiij
 1026              	.LHOTE13:
 1027              		.section	.text.unlikely._Z25fl_define_FL_ROUND_UP_BOXv,"ax",@progbits
 1028              	.LCOLDB14:
 1029              		.section	.text._Z25fl_define_FL_ROUND_UP_BOXv,"ax",@progbits
 1030              	.LHOTB14:
 1031              		.p2align 4,,15
 1032              		.globl	_Z25fl_define_FL_ROUND_UP_BOXv
 1034              	_Z25fl_define_FL_ROUND_UP_BOXv:
 1035              	.LFB472:
 103:fltk-1.3.4-1/src/fl_round_box.cxx ****   88:fltk-1.3.4-1/FL/fl_draw.H ****    fl_clip(int, int, int, int) is deprecated and will be remove
 104:fltk-1.3.4-1/src/fl_round_box.cxx ****   89:fltk-1.3.4-1/FL/fl_draw.H ****    Please use fl_push_clip(int x, int y, int w, int h) instead.
 105:fltk-1.3.4-1/src/fl_round_box.cxx ****   90:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1036              		.loc 2 105 0
 1037              		.cfi_startproc
 1038 0000 4883EC08 		subq	$8, %rsp
 1039              		.cfi_def_cfa_offset 16
 106:fltk-1.3.4-1/src/fl_round_box.cxx ****   91:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_clip fl_push_clip
 1040              		.loc 2 106 0
 1041 0004 BE000000 		movl	$_Z17fl_round_down_boxiiiij, %esi
 1041      00
 1042 0009 BF170000 		movl	$23, %edi
 1042      00
 1043 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1043      00
 1044              	.LVL119:
 107:fltk-1.3.4-1/src/fl_round_box.cxx ****   92:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1045              		.loc 2 107 0
 1046 0013 BE000000 		movl	$_Z15fl_round_up_boxiiiij, %esi
 1046      00
 1047 0018 BF160000 		movl	$22, %edi
 1047      00
 1048 001d E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1048      00
 1049              	.LVL120:
 108:fltk-1.3.4-1/src/fl_round_box.cxx ****   93:fltk-1.3.4-1/FL/fl_draw.H ****  Pushes an empty clip region onto the stack so nothing will be 
 109:fltk-1.3.4-1/src/fl_round_box.cxx ****   94:fltk-1.3.4-1/FL/fl_draw.H ****  */
 1050              		.loc 2 109 0
 1051 0022 B8160000 		movl	$22, %eax
 1051      00
 1052 0027 4883C408 		addq	$8, %rsp
 1053              		.cfi_def_cfa_offset 8
 1054 002b C3       		ret
 1055              		.cfi_endproc
 1056              	.LFE472:
 1058              		.section	.text.unlikely._Z25fl_define_FL_ROUND_UP_BOXv
 1059              	.LCOLDE14:
 1060              		.section	.text._Z25fl_define_FL_ROUND_UP_BOXv
 1061              	.LHOTE14:
 1062              		.section	.rodata.cst8,"aM",@progbits,8
 1063              		.align 8
 1064              	.LC2:
 1065 0000 00000000 		.long	0
 1066 0004 00807640 		.long	1081507840
 1067              		.align 8
 1068              	.LC3:
 1069 0008 00000000 		.long	0
 1070 000c 00806640 		.long	1080459264
 1071              		.align 8
 1072              	.LC4:
 1073 0010 00000000 		.long	0
 1074 0014 00E07040 		.long	1081139200
 1075              		.align 8
 1076              	.LC5:
 1077 0018 00000000 		.long	0
 1078 001c 00805640 		.long	1079410688
 1079              		.align 8
 1080              	.LC6:
 1081 0020 00000000 		.long	0
 1082 0024 00206C40 		.long	1080827904
 1083              		.align 8
 1084              	.LC7:
 1085 0028 00000000 		.long	0
 1086 002c 00507940 		.long	1081692160
 1087              		.align 8
 1088              	.LC8:
 1089 0030 00000000 		.long	0
 1090 0034 008056C0 		.long	-1068072960
 1091              		.align 8
 1092              	.LC10:
 1093 0038 00000000 		.long	0
 1094 003c 00804640 		.long	1078362112
 1095              		.text
 1096              	.Letext0:
 1097              		.section	.text.unlikely._Z6fl_pieiiiidd,"axG",@progbits,_Z6fl_pieiiiidd,comdat
 1098              	.Letext_cold0:
 1099              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 1100              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1101              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1102              		.file 6 "/usr/include/libio.h"
 1103              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 1104              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 1105              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 1106              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 1107              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 1108              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_round_box.cxx
     /tmp/ccqaBVmz.s:14     .text._Z6fl_pieiiiidd:0000000000000000 _Z6fl_pieiiiidd
     /tmp/ccqaBVmz.s:48     .text._ZL8fl_arc_iiiiidd:0000000000000000 _ZL8fl_arc_iiiiidd
     /tmp/ccqaBVmz.s:95     .text._ZL4drawiiiiiij:0000000000000000 _ZL4drawiiiiiij
     /tmp/ccqaBVmz.s:648    .text._Z17fl_round_down_boxiiiij:0000000000000000 _Z17fl_round_down_boxiiiij
     /tmp/ccqaBVmz.s:841    .text._Z15fl_round_up_boxiiiij:0000000000000000 _Z15fl_round_up_boxiiiij
     /tmp/ccqaBVmz.s:1034   .text._Z25fl_define_FL_ROUND_UP_BOXv:0000000000000000 _Z25fl_define_FL_ROUND_UP_BOXv
     /tmp/ccqaBVmz.s:1068   .rodata.cst8:0000000000000008 .LC3
     /tmp/ccqaBVmz.s:1064   .rodata.cst8:0000000000000000 .LC2
     /tmp/ccqaBVmz.s:1080   .rodata.cst8:0000000000000020 .LC6
     /tmp/ccqaBVmz.s:1084   .rodata.cst8:0000000000000028 .LC7
     /tmp/ccqaBVmz.s:1076   .rodata.cst8:0000000000000018 .LC5
     /tmp/ccqaBVmz.s:1088   .rodata.cst8:0000000000000030 .LC8
     /tmp/ccqaBVmz.s:1072   .rodata.cst8:0000000000000010 .LC4
     /tmp/ccqaBVmz.s:1092   .rodata.cst8:0000000000000038 .LC10
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
_Z12fl_gray_rampv
_ZN2Fl9box_colorEj
_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
