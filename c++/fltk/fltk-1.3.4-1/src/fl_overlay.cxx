   1              		.file	"fl_overlay.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL18erase_current_rectv,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL18erase_current_rectv,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL18erase_current_rectv
  10              	.Ltext_cold0:
  11              		.section	.text._ZL18erase_current_rectv
  13              	_ZL18erase_current_rectv:
  14              	.LFB374:
  15              		.file 1 "fltk-1.3.4-1/src/fl_overlay.cxx"
   1:fltk-1.3.4-1/src/fl_overlay.cxx **** ...
  16              		.loc 1 82 0
  17              		.cfi_startproc
  18 0000 4883EC08 		subq	$8, %rsp
  19              		.cfi_def_cfa_offset 16
  20              		.loc 1 90 0
  21 0004 488B3500 		movq	_ZL3bgN(%rip), %rsi
  21      000000
  22 000b 4885F6   		testq	%rsi, %rsi
  23 000e 7431     		je	.L2
  24              	.LVL0:
  25              	.LBB24:
  26              	.LBB25:
  27              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  28              		.loc 2 686 0 discriminator 1
  29 0010 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  29      000000
  30 0017 41B90100 		movl	$1, %r9d
  30      0000
  31 001d 448B0500 		movl	_ZL3bgw(%rip), %r8d
  31      000000
  32 0024 8B0D0000 		movl	_ZL3bgy(%rip), %ecx
  32      0000
  33 002a 8B150000 		movl	_ZL3bgx(%rip), %edx
  33      0000
  34 0030 488B07   		movq	(%rdi), %rax
  35 0033 6A00     		pushq	$0
  36              		.cfi_def_cfa_offset 24
  37 0035 6A03     		pushq	$3
  38              		.cfi_def_cfa_offset 32
  39 0037 FF907801 		call	*376(%rax)
  39      0000
  40              	.LVL1:
  41 003d 4159     		popq	%r9
  42              		.cfi_def_cfa_offset 24
  43 003f 415A     		popq	%r10
  44              		.cfi_def_cfa_offset 16
  45              	.LVL2:
  46              	.L2:
  47              	.LBE25:
  48              	.LBE24:
  49              		.loc 1 91 0
  50 0041 488B3500 		movq	_ZL3bgS(%rip), %rsi
  50      000000
  51 0048 4885F6   		testq	%rsi, %rsi
  52 004b 7439     		je	.L3
  53              	.LVL3:
  54              	.LBB26:
  55              	.LBB27:
  56              		.loc 2 686 0 discriminator 1
  57 004d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  57      000000
  58 0054 8B0D0000 		movl	_ZL3bgh(%rip), %ecx
  58      0000
  59 005a 41B90100 		movl	$1, %r9d
  59      0000
  60 0060 030D0000 		addl	_ZL3bgy(%rip), %ecx
  60      0000
  61 0066 448B0500 		movl	_ZL3bgw(%rip), %r8d
  61      000000
  62 006d 8B150000 		movl	_ZL3bgx(%rip), %edx
  62      0000
  63 0073 488B07   		movq	(%rdi), %rax
  64 0076 6A00     		pushq	$0
  65              		.cfi_def_cfa_offset 24
  66 0078 6A03     		pushq	$3
  67              		.cfi_def_cfa_offset 32
  68 007a 83E901   		subl	$1, %ecx
  69              	.LVL4:
  70 007d FF907801 		call	*376(%rax)
  70      0000
  71              	.LVL5:
  72 0083 5F       		popq	%rdi
  73              		.cfi_def_cfa_offset 24
  74 0084 4158     		popq	%r8
  75              		.cfi_def_cfa_offset 16
  76              	.LVL6:
  77              	.L3:
  78              	.LBE27:
  79              	.LBE26:
  80              		.loc 1 92 0
  81 0086 488B3500 		movq	_ZL3bgW(%rip), %rsi
  81      000000
  82 008d 4885F6   		testq	%rsi, %rsi
  83 0090 742F     		je	.L4
  84              	.LVL7:
  85              	.LBB28:
  86              	.LBB29:
  87              		.loc 2 686 0 discriminator 1
  88 0092 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  88      000000
  89 0099 8B0D0000 		movl	_ZL3bgy(%rip), %ecx
  89      0000
  90 009f 41B80100 		movl	$1, %r8d
  90      0000
  91 00a5 448B0D00 		movl	_ZL3bgh(%rip), %r9d
  91      000000
  92 00ac 8B150000 		movl	_ZL3bgx(%rip), %edx
  92      0000
  93 00b2 488B07   		movq	(%rdi), %rax
  94 00b5 6A00     		pushq	$0
  95              		.cfi_def_cfa_offset 24
  96 00b7 6A03     		pushq	$3
  97              		.cfi_def_cfa_offset 32
  98 00b9 FF907801 		call	*376(%rax)
  98      0000
  99              	.LVL8:
 100 00bf 59       		popq	%rcx
 101              		.cfi_def_cfa_offset 24
 102 00c0 5E       		popq	%rsi
 103              		.cfi_def_cfa_offset 16
 104              	.LVL9:
 105              	.L4:
 106              	.LBE29:
 107              	.LBE28:
 108              		.loc 1 93 0
 109 00c1 488B3500 		movq	_ZL3bgE(%rip), %rsi
 109      000000
 110 00c8 4885F6   		testq	%rsi, %rsi
 111 00cb 7438     		je	.L1
 112              	.LVL10:
 113              	.LBB30:
 114              	.LBB31:
 115              		.loc 2 686 0 discriminator 1
 116 00cd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 116      000000
 117 00d4 8B150000 		movl	_ZL3bgw(%rip), %edx
 117      0000
 118 00da 41B80100 		movl	$1, %r8d
 118      0000
 119 00e0 03150000 		addl	_ZL3bgx(%rip), %edx
 119      0000
 120 00e6 448B0D00 		movl	_ZL3bgh(%rip), %r9d
 120      000000
 121 00ed 8B0D0000 		movl	_ZL3bgy(%rip), %ecx
 121      0000
 122 00f3 488B07   		movq	(%rdi), %rax
 123 00f6 6A00     		pushq	$0
 124              		.cfi_def_cfa_offset 24
 125 00f8 6A03     		pushq	$3
 126              		.cfi_def_cfa_offset 32
 127 00fa 83EA01   		subl	$1, %edx
 128              	.LVL11:
 129 00fd FF907801 		call	*376(%rax)
 129      0000
 130              	.LVL12:
 131 0103 58       		popq	%rax
 132              		.cfi_def_cfa_offset 24
 133 0104 5A       		popq	%rdx
 134              		.cfi_def_cfa_offset 16
 135              	.LVL13:
 136              	.L1:
 137              	.LBE31:
 138              	.LBE30:
 139              		.loc 1 95 0
 140 0105 4883C408 		addq	$8, %rsp
 141              		.cfi_def_cfa_offset 8
 142 0109 C3       		ret
 143              		.cfi_endproc
 144              	.LFE374:
 146              		.section	.text.unlikely._ZL18erase_current_rectv
 147              	.LCOLDE0:
 148              		.section	.text._ZL18erase_current_rectv
 149              	.LHOTE0:
 150              		.section	.text.unlikely._Z16fl_overlay_clearv,"ax",@progbits
 151              	.LCOLDB1:
 152              		.section	.text._Z16fl_overlay_clearv,"ax",@progbits
 153              	.LHOTB1:
 154              		.p2align 4,,15
 155              		.globl	_Z16fl_overlay_clearv
 157              	_Z16fl_overlay_clearv:
 158              	.LFB375:
 159              		.loc 1 100 0
 160              		.cfi_startproc
 161              		.loc 1 101 0
 162 0000 8B050000 		movl	_ZL2pw(%rip), %eax
 162      0000
 163 0006 85C0     		testl	%eax, %eax
 164 0008 7E17     		jle	.L24
 165              		.loc 1 100 0 discriminator 1
 166 000a 4883EC08 		subq	$8, %rsp
 167              		.cfi_def_cfa_offset 16
 168              		.loc 1 101 0 discriminator 1
 169 000e E8000000 		call	_ZL18erase_current_rectv
 169      00
 170              	.LVL14:
 171 0013 C7050000 		movl	$0, _ZL2pw(%rip)
 171      00000000 
 171      0000
 172              		.loc 1 102 0 discriminator 1
 173 001d 4883C408 		addq	$8, %rsp
 174              		.cfi_def_cfa_offset 8
 175              	.L24:
 176              		.loc 1 102 0 is_stmt 0
 177 0021 F3C3     		rep ret
 178              		.cfi_endproc
 179              	.LFE375:
 181              		.section	.text.unlikely._Z16fl_overlay_clearv
 182              	.LCOLDE1:
 183              		.section	.text._Z16fl_overlay_clearv
 184              	.LHOTE1:
 185              		.section	.text.unlikely._Z15fl_overlay_rectiiii,"ax",@progbits
 186              	.LCOLDB2:
 187              		.section	.text._Z15fl_overlay_rectiiii,"ax",@progbits
 188              	.LHOTB2:
 189              		.p2align 4,,15
 190              		.globl	_Z15fl_overlay_rectiiii
 192              	_Z15fl_overlay_rectiiii:
 193              	.LFB376:
 194              		.loc 1 107 0 is_stmt 1
 195              		.cfi_startproc
 196              	.LVL15:
 197 0000 4155     		pushq	%r13
 198              		.cfi_def_cfa_offset 16
 199              		.cfi_offset 13, -16
 200 0002 4154     		pushq	%r12
 201              		.cfi_def_cfa_offset 24
 202              		.cfi_offset 12, -24
 203 0004 4189F5   		movl	%esi, %r13d
 204 0007 55       		pushq	%rbp
 205              		.cfi_def_cfa_offset 32
 206              		.cfi_offset 6, -32
 207 0008 53       		pushq	%rbx
 208              		.cfi_def_cfa_offset 40
 209              		.cfi_offset 3, -40
 210 0009 4189FC   		movl	%edi, %r12d
 211 000c 89D3     		movl	%edx, %ebx
 212 000e 89CD     		movl	%ecx, %ebp
 213 0010 4883EC08 		subq	$8, %rsp
 214              		.cfi_def_cfa_offset 48
 215              		.loc 1 108 0
 216 0014 85D2     		testl	%edx, %edx
 217 0016 0F889402 		js	.L54
 217      0000
 218              		.loc 1 108 0 is_stmt 0 discriminator 2
 219 001c B8010000 		movl	$1, %eax
 219      00
 220 0021 0F44D8   		cmove	%eax, %ebx
 221              	.LVL16:
 222              	.L27:
 223              		.loc 1 109 0 is_stmt 1
 224 0024 85ED     		testl	%ebp, %ebp
 225 0026 0F887402 		js	.L55
 225      0000
 226              		.loc 1 109 0 is_stmt 0 discriminator 2
 227 002c B8010000 		movl	$1, %eax
 227      00
 228 0031 0F44E8   		cmove	%eax, %ebp
 229              	.LVL17:
 230              	.L29:
 231              		.loc 1 110 0 is_stmt 1
 232 0034 8B050000 		movl	_ZL2pw(%rip), %eax
 232      0000
 233 003a 85C0     		testl	%eax, %eax
 234 003c 7E12     		jle	.L30
 235              		.loc 1 111 0
 236 003e 443B2500 		cmpl	_ZL2px(%rip), %r12d
 236      000000
 237 0045 0F842502 		je	.L56
 237      0000
 238              	.L31:
 239              		.loc 1 112 0
 240 004b E8000000 		call	_ZL18erase_current_rectv
 240      00
 241              	.LVL18:
 242              	.L30:
 243              	.LBB48:
 244              	.LBB49:
 245              		.loc 1 60 0
 246 0050 488B3D00 		movq	_ZL3bgN(%rip), %rdi
 246      000000
 247              	.LBE49:
 248              	.LBE48:
 249              		.loc 1 114 0
 250 0057 44892500 		movl	%r12d, _ZL2px(%rip)
 250      000000
 251 005e 44892D00 		movl	%r13d, _ZL2py(%rip)
 251      000000
 252 0065 891D0000 		movl	%ebx, _ZL2pw(%rip)
 252      0000
 253 006b 892D0000 		movl	%ebp, _ZL2ph(%rip)
 253      0000
 254              	.LBB70:
 255              	.LBB68:
 256              		.loc 1 60 0
 257 0071 4885FF   		testq	%rdi, %rdi
 258 0074 7410     		je	.L33
 259 0076 E8000000 		call	free
 259      00
 260              	.LVL19:
 261 007b 48C70500 		movq	$0, _ZL3bgN(%rip)
 261      00000000 
 261      000000
 262              	.L33:
 263              		.loc 1 61 0
 264 0086 488B3D00 		movq	_ZL3bgS(%rip), %rdi
 264      000000
 265 008d 4885FF   		testq	%rdi, %rdi
 266 0090 7410     		je	.L34
 267 0092 E8000000 		call	free
 267      00
 268              	.LVL20:
 269 0097 48C70500 		movq	$0, _ZL3bgS(%rip)
 269      00000000 
 269      000000
 270              	.L34:
 271              		.loc 1 62 0
 272 00a2 488B3D00 		movq	_ZL3bgE(%rip), %rdi
 272      000000
 273 00a9 4885FF   		testq	%rdi, %rdi
 274 00ac 7410     		je	.L35
 275 00ae E8000000 		call	free
 275      00
 276              	.LVL21:
 277 00b3 48C70500 		movq	$0, _ZL3bgE(%rip)
 277      00000000 
 277      000000
 278              	.L35:
 279              		.loc 1 63 0
 280 00be 488B3D00 		movq	_ZL3bgW(%rip), %rdi
 280      000000
 281 00c5 4885FF   		testq	%rdi, %rdi
 282 00c8 7410     		je	.L37
 283 00ca E8000000 		call	free
 283      00
 284              	.LVL22:
 285 00cf 48C70500 		movq	$0, _ZL3bgW(%rip)
 285      00000000 
 285      000000
 286              	.L37:
 287              		.loc 1 65 0
 288 00da 418D741C 		leal	-1(%r12,%rbx), %esi
 288      FF
 289 00df 4189E8   		movl	%ebp, %r8d
 290 00e2 4489EA   		movl	%r13d, %edx
 291 00e5 4531C9   		xorl	%r9d, %r9d
 292 00e8 B9010000 		movl	$1, %ecx
 292      00
 293 00ed 31FF     		xorl	%edi, %edi
 294 00ef E8000000 		call	_Z13fl_read_imagePhiiiii
 294      00
 295              	.LVL23:
 296              		.loc 1 66 0
 297 00f4 448B0500 		movl	_ZL2ph(%rip), %r8d
 297      000000
 298 00fb 8B150000 		movl	_ZL2py(%rip), %edx
 298      0000
 299 0101 4531C9   		xorl	%r9d, %r9d
 300 0104 8B350000 		movl	_ZL2px(%rip), %esi
 300      0000
 301 010a B9010000 		movl	$1, %ecx
 301      00
 302 010f 31FF     		xorl	%edi, %edi
 303              		.loc 1 65 0
 304 0111 48890500 		movq	%rax, _ZL3bgE(%rip)
 304      000000
 305              		.loc 1 66 0
 306 0118 E8000000 		call	_Z13fl_read_imagePhiiiii
 306      00
 307              	.LVL24:
 308              		.loc 1 67 0
 309 011d 8B150000 		movl	_ZL2ph(%rip), %edx
 309      0000
 310 0123 03150000 		addl	_ZL2py(%rip), %edx
 310      0000
 311 0129 4531C9   		xorl	%r9d, %r9d
 312 012c 8B0D0000 		movl	_ZL2pw(%rip), %ecx
 312      0000
 313 0132 8B350000 		movl	_ZL2px(%rip), %esi
 313      0000
 314 0138 41B80100 		movl	$1, %r8d
 314      0000
 315 013e 31FF     		xorl	%edi, %edi
 316              		.loc 1 66 0
 317 0140 48890500 		movq	%rax, _ZL3bgW(%rip)
 317      000000
 318              		.loc 1 67 0
 319 0147 83EA01   		subl	$1, %edx
 320 014a E8000000 		call	_Z13fl_read_imagePhiiiii
 320      00
 321              	.LVL25:
 322              		.loc 1 68 0
 323 014f 8B0D0000 		movl	_ZL2pw(%rip), %ecx
 323      0000
 324 0155 8B150000 		movl	_ZL2py(%rip), %edx
 324      0000
 325 015b 4531C9   		xorl	%r9d, %r9d
 326 015e 8B350000 		movl	_ZL2px(%rip), %esi
 326      0000
 327 0164 41B80100 		movl	$1, %r8d
 327      0000
 328 016a 31FF     		xorl	%edi, %edi
 329              		.loc 1 67 0
 330 016c 48890500 		movq	%rax, _ZL3bgS(%rip)
 330      000000
 331              		.loc 1 68 0
 332 0173 E8000000 		call	_Z13fl_read_imagePhiiiii
 332      00
 333              	.LVL26:
 334 0178 48890500 		movq	%rax, _ZL3bgN(%rip)
 334      000000
 335              		.loc 1 69 0
 336 017f 8B050000 		movl	_ZL2px(%rip), %eax
 336      0000
 337              	.LBB50:
 338              	.LBB51:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 339              		.loc 2 52 0
 340 0185 BEFF0000 		movl	$255, %esi
 340      00
 341 018a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 341      000000
 342              	.LBE51:
 343              	.LBE50:
 344              		.loc 1 69 0
 345 0191 89050000 		movl	%eax, _ZL3bgx(%rip)
 345      0000
 346 0197 8B050000 		movl	_ZL2py(%rip), %eax
 346      0000
 347 019d 89050000 		movl	%eax, _ZL3bgy(%rip)
 347      0000
 348              		.loc 1 70 0
 349 01a3 8B050000 		movl	_ZL2pw(%rip), %eax
 349      0000
 350 01a9 89050000 		movl	%eax, _ZL3bgw(%rip)
 350      0000
 351 01af 8B050000 		movl	_ZL2ph(%rip), %eax
 351      0000
 352 01b5 89050000 		movl	%eax, _ZL3bgh(%rip)
 352      0000
 353              	.LVL27:
 354              	.LBB53:
 355              	.LBB52:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 356              		.loc 2 52 0
 357 01bb 488B07   		movq	(%rdi), %rax
 358 01be FF908800 		call	*136(%rax)
 358      0000
 359              	.LVL28:
 360              	.LBE52:
 361              	.LBE53:
 362              	.LBB54:
 363              	.LBB55:
 177:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 364              		.loc 2 177 0
 365 01c4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 365      000000
 366 01cb 31C9     		xorl	%ecx, %ecx
 367 01cd 31D2     		xorl	%edx, %edx
 368 01cf 31F6     		xorl	%esi, %esi
 369 01d1 488B07   		movq	(%rdi), %rax
 370 01d4 FF5028   		call	*40(%rax)
 371              	.LVL29:
 372              	.LBE55:
 373              	.LBE54:
 374              	.LBB56:
 375              	.LBB57:
 201:fltk-1.3.4-1/FL/fl_draw.H **** 
 376              		.loc 2 201 0
 377 01d7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 377      000000
 378 01de 448B0500 		movl	_ZL2ph(%rip), %r8d
 378      000000
 379 01e5 8B0D0000 		movl	_ZL2pw(%rip), %ecx
 379      0000
 380 01eb 8B150000 		movl	_ZL2py(%rip), %edx
 380      0000
 381 01f1 8B350000 		movl	_ZL2px(%rip), %esi
 381      0000
 382 01f7 488B07   		movq	(%rdi), %rax
 383 01fa FF5018   		call	*24(%rax)
 384              	.LVL30:
 385              	.LBE57:
 386              	.LBE56:
 387              	.LBB58:
 388              	.LBB59:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 389              		.loc 2 52 0
 390 01fd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 390      000000
 391 0204 BE380000 		movl	$56, %esi
 391      00
 392 0209 488B07   		movq	(%rdi), %rax
 393 020c FF908800 		call	*136(%rax)
 393      0000
 394              	.LVL31:
 395              	.LBE59:
 396              	.LBE58:
 397              	.LBB60:
 398              	.LBB61:
 177:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 399              		.loc 2 177 0
 400 0212 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 400      000000
 401 0219 31C9     		xorl	%ecx, %ecx
 402 021b 31D2     		xorl	%edx, %edx
 403 021d BE020000 		movl	$2, %esi
 403      00
 404 0222 488B07   		movq	(%rdi), %rax
 405 0225 FF5028   		call	*40(%rax)
 406              	.LVL32:
 407              	.LBE61:
 408              	.LBE60:
 409              	.LBB62:
 410              	.LBB63:
 201:fltk-1.3.4-1/FL/fl_draw.H **** 
 411              		.loc 2 201 0
 412 0228 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 412      000000
 413 022f 8B0D0000 		movl	_ZL2pw(%rip), %ecx
 413      0000
 414 0235 8B150000 		movl	_ZL2py(%rip), %edx
 414      0000
 415 023b 8B350000 		movl	_ZL2px(%rip), %esi
 415      0000
 416 0241 448B0500 		movl	_ZL2ph(%rip), %r8d
 416      000000
 417 0248 488B07   		movq	(%rdi), %rax
 418 024b FF5018   		call	*24(%rax)
 419              	.LVL33:
 420              	.LBE63:
 421              	.LBE62:
 422              	.LBB64:
 423              	.LBB65:
 177:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 424              		.loc 2 177 0
 425 024e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 425      000000
 426 0255 31C9     		xorl	%ecx, %ecx
 427 0257 31D2     		xorl	%edx, %edx
 428 0259 31F6     		xorl	%esi, %esi
 429 025b 488B07   		movq	(%rdi), %rax
 430 025e 488B4028 		movq	40(%rax), %rax
 431              	.LBE65:
 432              	.LBE64:
 433              	.LBE68:
 434              	.LBE70:
 435              		.loc 1 116 0
 436 0262 4883C408 		addq	$8, %rsp
 437              		.cfi_remember_state
 438              		.cfi_def_cfa_offset 40
 439 0266 5B       		popq	%rbx
 440              		.cfi_def_cfa_offset 32
 441              	.LVL34:
 442 0267 5D       		popq	%rbp
 443              		.cfi_def_cfa_offset 24
 444              	.LVL35:
 445 0268 415C     		popq	%r12
 446              		.cfi_def_cfa_offset 16
 447              	.LVL36:
 448 026a 415D     		popq	%r13
 449              		.cfi_def_cfa_offset 8
 450              	.LVL37:
 451              	.LBB71:
 452              	.LBB69:
 453              	.LBB67:
 454              	.LBB66:
 177:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 455              		.loc 2 177 0
 456 026c FFE0     		jmp	*%rax
 457              	.LVL38:
 458 026e 6690     		.p2align 4,,10
 459              		.p2align 3
 460              	.L56:
 461              		.cfi_restore_state
 462              	.LBE66:
 463              	.LBE67:
 464              	.LBE69:
 465              	.LBE71:
 466              		.loc 1 111 0 discriminator 1
 467 0270 44392D00 		cmpl	%r13d, _ZL2py(%rip)
 467      000000
 468 0277 0F85CEFD 		jne	.L31
 468      FFFF
 469 027d 39C3     		cmpl	%eax, %ebx
 470 027f 0F85C6FD 		jne	.L31
 470      FFFF
 471              		.loc 1 111 0 is_stmt 0 discriminator 3
 472 0285 3B2D0000 		cmpl	_ZL2ph(%rip), %ebp
 472      0000
 473 028b 0F85BAFD 		jne	.L31
 473      FFFF
 474              		.loc 1 116 0 is_stmt 1
 475 0291 4883C408 		addq	$8, %rsp
 476              		.cfi_remember_state
 477              		.cfi_def_cfa_offset 40
 478 0295 5B       		popq	%rbx
 479              		.cfi_def_cfa_offset 32
 480              	.LVL39:
 481 0296 5D       		popq	%rbp
 482              		.cfi_def_cfa_offset 24
 483              	.LVL40:
 484 0297 415C     		popq	%r12
 485              		.cfi_def_cfa_offset 16
 486              	.LVL41:
 487 0299 415D     		popq	%r13
 488              		.cfi_def_cfa_offset 8
 489              	.LVL42:
 490 029b C3       		ret
 491              	.LVL43:
 492 029c 0F1F4000 		.p2align 4,,10
 493              		.p2align 3
 494              	.L55:
 495              		.cfi_restore_state
 496              		.loc 1 109 0 discriminator 1
 497 02a0 4101ED   		addl	%ebp, %r13d
 498              	.LVL44:
 499 02a3 F7DD     		negl	%ebp
 500              	.LVL45:
 501 02a5 E98AFDFF 		jmp	.L29
 501      FF
 502              	.LVL46:
 503 02aa 660F1F44 		.p2align 4,,10
 503      0000
 504              		.p2align 3
 505              	.L54:
 506              		.loc 1 108 0 discriminator 1
 507 02b0 4101D4   		addl	%edx, %r12d
 508              	.LVL47:
 509 02b3 F7DB     		negl	%ebx
 510              	.LVL48:
 511 02b5 E96AFDFF 		jmp	.L27
 511      FF
 512              		.cfi_endproc
 513              	.LFE376:
 515              		.section	.text.unlikely._Z15fl_overlay_rectiiii
 516              	.LCOLDE2:
 517              		.section	.text._Z15fl_overlay_rectiiii
 518              	.LHOTE2:
 519              		.section	.bss._ZL3bgh,"aw",@nobits
 520              		.align 4
 523              	_ZL3bgh:
 524 0000 00000000 		.zero	4
 525              		.section	.bss._ZL3bgw,"aw",@nobits
 526              		.align 4
 529              	_ZL3bgw:
 530 0000 00000000 		.zero	4
 531              		.section	.bss._ZL3bgy,"aw",@nobits
 532              		.align 4
 535              	_ZL3bgy:
 536 0000 00000000 		.zero	4
 537              		.section	.bss._ZL3bgx,"aw",@nobits
 538              		.align 4
 541              	_ZL3bgx:
 542 0000 00000000 		.zero	4
 543              		.section	.bss._ZL3bgW,"aw",@nobits
 544              		.align 8
 547              	_ZL3bgW:
 548 0000 00000000 		.zero	8
 548      00000000 
 549              		.section	.bss._ZL3bgE,"aw",@nobits
 550              		.align 8
 553              	_ZL3bgE:
 554 0000 00000000 		.zero	8
 554      00000000 
 555              		.section	.bss._ZL3bgS,"aw",@nobits
 556              		.align 8
 559              	_ZL3bgS:
 560 0000 00000000 		.zero	8
 560      00000000 
 561              		.section	.bss._ZL3bgN,"aw",@nobits
 562              		.align 8
 565              	_ZL3bgN:
 566 0000 00000000 		.zero	8
 566      00000000 
 567              		.section	.bss._ZL2ph,"aw",@nobits
 568              		.align 4
 571              	_ZL2ph:
 572 0000 00000000 		.zero	4
 573              		.section	.bss._ZL2pw,"aw",@nobits
 574              		.align 4
 577              	_ZL2pw:
 578 0000 00000000 		.zero	4
 579              		.section	.bss._ZL2py,"aw",@nobits
 580              		.align 4
 583              	_ZL2py:
 584 0000 00000000 		.zero	4
 585              		.section	.bss._ZL2px,"aw",@nobits
 586              		.align 4
 589              	_ZL2px:
 590 0000 00000000 		.zero	4
 591              		.text
 592              	.Letext0:
 593              		.section	.text.unlikely._ZL18erase_current_rectv
 594              	.Letext_cold0:
 595              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 596              		.file 4 "fltk-1.3.4-1/FL/Enumerations.H"
 597              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 598              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 599              		.file 7 "/usr/include/libio.h"
 600              		.file 8 "fltk-1.3.4-1/FL/Fl_Device.H"
 601              		.file 9 "/usr/include/stdio.h"
 602              		.file 10 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_overlay.cxx
     /tmp/ccBka9WU.s:13     .text._ZL18erase_current_rectv:0000000000000000 _ZL18erase_current_rectv
     /tmp/ccBka9WU.s:565    .bss._ZL3bgN:0000000000000000 _ZL3bgN
     /tmp/ccBka9WU.s:529    .bss._ZL3bgw:0000000000000000 _ZL3bgw
     /tmp/ccBka9WU.s:535    .bss._ZL3bgy:0000000000000000 _ZL3bgy
     /tmp/ccBka9WU.s:541    .bss._ZL3bgx:0000000000000000 _ZL3bgx
     /tmp/ccBka9WU.s:559    .bss._ZL3bgS:0000000000000000 _ZL3bgS
     /tmp/ccBka9WU.s:523    .bss._ZL3bgh:0000000000000000 _ZL3bgh
     /tmp/ccBka9WU.s:547    .bss._ZL3bgW:0000000000000000 _ZL3bgW
     /tmp/ccBka9WU.s:553    .bss._ZL3bgE:0000000000000000 _ZL3bgE
     /tmp/ccBka9WU.s:157    .text._Z16fl_overlay_clearv:0000000000000000 _Z16fl_overlay_clearv
     /tmp/ccBka9WU.s:577    .bss._ZL2pw:0000000000000000 _ZL2pw
     /tmp/ccBka9WU.s:192    .text._Z15fl_overlay_rectiiii:0000000000000000 _Z15fl_overlay_rectiiii
     /tmp/ccBka9WU.s:589    .bss._ZL2px:0000000000000000 _ZL2px
     /tmp/ccBka9WU.s:583    .bss._ZL2py:0000000000000000 _ZL2py
     /tmp/ccBka9WU.s:571    .bss._ZL2ph:0000000000000000 _ZL2ph
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

UNDEFINED SYMBOLS
fl_graphics_driver
free
_Z13fl_read_imagePhiiiii
