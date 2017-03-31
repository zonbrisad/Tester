   1              		.file	"fl_symbols.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL9draw_linej,"ax",@progbits
   5              	.LCOLDB3:
   6              		.section	.text._ZL9draw_linej,"ax",@progbits
   7              	.LHOTB3:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL9draw_linej
  10              	.Ltext_cold0:
  11              		.section	.text._ZL9draw_linej
  13              	_ZL9draw_linej:
  14              	.LFB510:
  15              		.file 1 "fltk-1.3.4-1/src/fl_symbols.cxx"
   1:fltk-1.3.4-1/src/fl_symbols.cxx **** ...
  16              		.loc 1 359 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4883EC08 		subq	$8, %rsp
  20              		.cfi_def_cfa_offset 16
  21              		.loc 1 359 0
  22 0004 89FE     		movl	%edi, %esi
  23              	.LVL1:
  24              	.LBB1166:
  25              	.LBB1167:
  26              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  27              		.loc 2 52 0
  28 0006 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  28      000000
  29              	.LVL2:
  30 000d 488B07   		movq	(%rdi), %rax
  31 0010 FF908800 		call	*136(%rax)
  31      0000
  32              	.LVL3:
  33              	.LBE1167:
  34              	.LBE1166:
  35              	.LBB1168:
  36              	.LBB1169:
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
  37              		.loc 2 366 0
  38 0016 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  38      000000
  39 001d 488B07   		movq	(%rdi), %rax
  40 0020 FF90C800 		call	*200(%rax)
  40      0000
  41              	.LVL4:
  42              	.LBE1169:
  43              	.LBE1168:
  44              	.LBB1170:
  45              	.LBB1171:
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
  46              		.loc 2 379 0
  47 0026 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  47      000000
  48 002d 660FEFC9 		pxor	%xmm1, %xmm1
  49 0031 F20F1005 		movsd	.LC1(%rip), %xmm0
  49      00000000 
  50 0039 488B07   		movq	(%rdi), %rax
  51 003c FF90E000 		call	*224(%rax)
  51      0000
  52              	.LVL5:
  53              	.LBE1171:
  54              	.LBE1170:
  55              	.LBB1172:
  56              	.LBB1173:
  57 0042 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  57      000000
  58 0049 660FEFC9 		pxor	%xmm1, %xmm1
  59 004d F20F1005 		movsd	.LC2(%rip), %xmm0
  59      00000000 
  60 0055 488B07   		movq	(%rdi), %rax
  61 0058 FF90E000 		call	*224(%rax)
  61      0000
  62              	.LVL6:
  63              	.LBE1173:
  64              	.LBE1172:
  65              	.LBB1174:
  66              	.LBB1175:
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
  67              		.loc 2 432 0
  68 005e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  68      000000
  69 0065 488B07   		movq	(%rdi), %rax
  70 0068 488B8018 		movq	280(%rax), %rax
  70      010000
  71              	.LBE1175:
  72              	.LBE1174:
  73              		.loc 1 359 0
  74 006f 4883C408 		addq	$8, %rsp
  75              		.cfi_def_cfa_offset 8
  76              	.LBB1177:
  77              	.LBB1176:
  78              		.loc 2 432 0
  79 0073 FFE0     		jmp	*%rax
  80              	.LVL7:
  81              	.LBE1176:
  82              	.LBE1177:
  83              		.cfi_endproc
  84              	.LFE510:
  86              		.section	.text.unlikely._ZL9draw_linej
  87              	.LCOLDE3:
  88              		.section	.text._ZL9draw_linej
  89              	.LHOTE3:
  90              		.section	.text.unlikely._ZL12draw_uparrowj,"ax",@progbits
  91              	.LCOLDB6:
  92              		.section	.text._ZL12draw_uparrowj,"ax",@progbits
  93              	.LHOTB6:
  94              		.p2align 4,,15
  96              	_ZL12draw_uparrowj:
  97              	.LFB512:
  98              		.loc 1 374 0
  99              		.cfi_startproc
 100              	.LVL8:
 101 0000 4883EC08 		subq	$8, %rsp
 102              		.cfi_def_cfa_offset 16
 103              	.LBB1178:
 104              	.LBB1179:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 105              		.loc 2 52 0
 106 0004 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 106      000000
 107 000b BE360000 		movl	$54, %esi
 107      00
 108 0010 488B07   		movq	(%rdi), %rax
 109 0013 FF908800 		call	*136(%rax)
 109      0000
 110              	.LVL9:
 111              	.LBE1179:
 112              	.LBE1178:
 113              	.LBB1180:
 114              	.LBB1181:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 115              		.loc 2 366 0
 116 0019 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 116      000000
 117 0020 488B07   		movq	(%rdi), %rax
 118 0023 FF90C800 		call	*200(%rax)
 118      0000
 119              	.LVL10:
 120              	.LBE1181:
 121              	.LBE1180:
 122              	.LBB1182:
 123              	.LBB1183:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 124              		.loc 2 379 0
 125 0029 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 125      000000
 126 0030 F20F100D 		movsd	.LC4(%rip), %xmm1
 126      00000000 
 127 0038 F20F1005 		movsd	.LC5(%rip), %xmm0
 127      00000000 
 128 0040 488B07   		movq	(%rdi), %rax
 129 0043 FF90E000 		call	*224(%rax)
 129      0000
 130              	.LVL11:
 131              	.LBE1183:
 132              	.LBE1182:
 133              	.LBB1184:
 134              	.LBB1185:
 135 0049 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 135      000000
 136 0050 F20F100D 		movsd	.LC5(%rip), %xmm1
 136      00000000 
 137 0058 660F28C1 		movapd	%xmm1, %xmm0
 138 005c 488B07   		movq	(%rdi), %rax
 139 005f FF90E000 		call	*224(%rax)
 139      0000
 140              	.LVL12:
 141              	.LBE1185:
 142              	.LBE1184:
 143              	.LBB1186:
 144              	.LBB1187:
 145 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 145      000000
 146 006c 660FEFC9 		pxor	%xmm1, %xmm1
 147 0070 F20F1005 		movsd	.LC4(%rip), %xmm0
 147      00000000 
 148 0078 488B07   		movq	(%rdi), %rax
 149 007b FF90E000 		call	*224(%rax)
 149      0000
 150              	.LVL13:
 151              	.LBE1187:
 152              	.LBE1186:
 153              	.LBB1188:
 154              	.LBB1189:
 155              		.loc 2 432 0
 156 0081 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 156      000000
 157 0088 488B07   		movq	(%rdi), %rax
 158 008b FF901801 		call	*280(%rax)
 158      0000
 159              	.LVL14:
 160              	.LBE1189:
 161              	.LBE1188:
 162              	.LBB1190:
 163              	.LBB1191:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 164              		.loc 2 52 0
 165 0091 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 165      000000
 166 0098 BE270000 		movl	$39, %esi
 166      00
 167 009d 488B07   		movq	(%rdi), %rax
 168 00a0 FF908800 		call	*136(%rax)
 168      0000
 169              	.LVL15:
 170              	.LBE1191:
 171              	.LBE1190:
 172              	.LBB1192:
 173              	.LBB1193:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 174              		.loc 2 366 0
 175 00a6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 175      000000
 176 00ad 488B07   		movq	(%rdi), %rax
 177 00b0 FF90C800 		call	*200(%rax)
 177      0000
 178              	.LVL16:
 179              	.LBE1193:
 180              	.LBE1192:
 181              	.LBB1194:
 182              	.LBB1195:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 183              		.loc 2 379 0
 184 00b6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 184      000000
 185 00bd F20F100D 		movsd	.LC4(%rip), %xmm1
 185      00000000 
 186 00c5 F20F1005 		movsd	.LC5(%rip), %xmm0
 186      00000000 
 187 00cd 488B07   		movq	(%rdi), %rax
 188 00d0 FF90E000 		call	*224(%rax)
 188      0000
 189              	.LVL17:
 190              	.LBE1195:
 191              	.LBE1194:
 192              	.LBB1196:
 193              	.LBB1197:
 194 00d6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 194      000000
 195 00dd 660FEFC9 		pxor	%xmm1, %xmm1
 196 00e1 F20F1005 		movsd	.LC4(%rip), %xmm0
 196      00000000 
 197 00e9 488B07   		movq	(%rdi), %rax
 198 00ec FF90E000 		call	*224(%rax)
 198      0000
 199              	.LVL18:
 200              	.LBE1197:
 201              	.LBE1196:
 202              	.LBB1198:
 203              	.LBB1199:
 204              		.loc 2 432 0
 205 00f2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 205      000000
 206 00f9 488B07   		movq	(%rdi), %rax
 207 00fc 488B8018 		movq	280(%rax), %rax
 207      010000
 208              	.LBE1199:
 209              	.LBE1198:
 210              		.loc 1 379 0
 211 0103 4883C408 		addq	$8, %rsp
 212              		.cfi_def_cfa_offset 8
 213              	.LBB1201:
 214              	.LBB1200:
 215              		.loc 2 432 0
 216 0107 FFE0     		jmp	*%rax
 217              	.LVL19:
 218              	.LBE1200:
 219              	.LBE1201:
 220              		.cfi_endproc
 221              	.LFE512:
 223              		.section	.text.unlikely._ZL12draw_uparrowj
 224              	.LCOLDE6:
 225              		.section	.text._ZL12draw_uparrowj
 226              	.LHOTE6:
 227              		.section	.text.unlikely._ZL14draw_downarrowj,"ax",@progbits
 228              	.LCOLDB7:
 229              		.section	.text._ZL14draw_downarrowj,"ax",@progbits
 230              	.LHOTB7:
 231              		.p2align 4,,15
 233              	_ZL14draw_downarrowj:
 234              	.LFB513:
 235              		.loc 1 381 0
 236              		.cfi_startproc
 237              	.LVL20:
 238 0000 4883EC08 		subq	$8, %rsp
 239              		.cfi_def_cfa_offset 16
 240              	.LBB1202:
 241              	.LBB1203:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 242              		.loc 2 52 0
 243 0004 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 243      000000
 244 000b BE270000 		movl	$39, %esi
 244      00
 245 0010 488B07   		movq	(%rdi), %rax
 246 0013 FF908800 		call	*136(%rax)
 246      0000
 247              	.LVL21:
 248              	.LBE1203:
 249              	.LBE1202:
 250              	.LBB1204:
 251              	.LBB1205:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 252              		.loc 2 366 0
 253 0019 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 253      000000
 254 0020 488B07   		movq	(%rdi), %rax
 255 0023 FF90C800 		call	*200(%rax)
 255      0000
 256              	.LVL22:
 257              	.LBE1205:
 258              	.LBE1204:
 259              	.LBB1206:
 260              	.LBB1207:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 261              		.loc 2 379 0
 262 0029 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 262      000000
 263 0030 F20F100D 		movsd	.LC4(%rip), %xmm1
 263      00000000 
 264 0038 F20F1005 		movsd	.LC5(%rip), %xmm0
 264      00000000 
 265 0040 488B07   		movq	(%rdi), %rax
 266 0043 FF90E000 		call	*224(%rax)
 266      0000
 267              	.LVL23:
 268              	.LBE1207:
 269              	.LBE1206:
 270              	.LBB1208:
 271              	.LBB1209:
 272 0049 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 272      000000
 273 0050 F20F100D 		movsd	.LC5(%rip), %xmm1
 273      00000000 
 274 0058 660F28C1 		movapd	%xmm1, %xmm0
 275 005c 488B07   		movq	(%rdi), %rax
 276 005f FF90E000 		call	*224(%rax)
 276      0000
 277              	.LVL24:
 278              	.LBE1209:
 279              	.LBE1208:
 280              	.LBB1210:
 281              	.LBB1211:
 282 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 282      000000
 283 006c 660FEFC9 		pxor	%xmm1, %xmm1
 284 0070 F20F1005 		movsd	.LC4(%rip), %xmm0
 284      00000000 
 285 0078 488B07   		movq	(%rdi), %rax
 286 007b FF90E000 		call	*224(%rax)
 286      0000
 287              	.LVL25:
 288              	.LBE1211:
 289              	.LBE1210:
 290              	.LBB1212:
 291              	.LBB1213:
 292              		.loc 2 432 0
 293 0081 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 293      000000
 294 0088 488B07   		movq	(%rdi), %rax
 295 008b FF901801 		call	*280(%rax)
 295      0000
 296              	.LVL26:
 297              	.LBE1213:
 298              	.LBE1212:
 299              	.LBB1214:
 300              	.LBB1215:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 301              		.loc 2 52 0
 302 0091 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 302      000000
 303 0098 BE360000 		movl	$54, %esi
 303      00
 304 009d 488B07   		movq	(%rdi), %rax
 305 00a0 FF908800 		call	*136(%rax)
 305      0000
 306              	.LVL27:
 307              	.LBE1215:
 308              	.LBE1214:
 309              	.LBB1216:
 310              	.LBB1217:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 311              		.loc 2 366 0
 312 00a6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 312      000000
 313 00ad 488B07   		movq	(%rdi), %rax
 314 00b0 FF90C800 		call	*200(%rax)
 314      0000
 315              	.LVL28:
 316              	.LBE1217:
 317              	.LBE1216:
 318              	.LBB1218:
 319              	.LBB1219:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 320              		.loc 2 379 0
 321 00b6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 321      000000
 322 00bd F20F100D 		movsd	.LC4(%rip), %xmm1
 322      00000000 
 323 00c5 F20F1005 		movsd	.LC5(%rip), %xmm0
 323      00000000 
 324 00cd 488B07   		movq	(%rdi), %rax
 325 00d0 FF90E000 		call	*224(%rax)
 325      0000
 326              	.LVL29:
 327              	.LBE1219:
 328              	.LBE1218:
 329              	.LBB1220:
 330              	.LBB1221:
 331 00d6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 331      000000
 332 00dd 660FEFC9 		pxor	%xmm1, %xmm1
 333 00e1 F20F1005 		movsd	.LC4(%rip), %xmm0
 333      00000000 
 334 00e9 488B07   		movq	(%rdi), %rax
 335 00ec FF90E000 		call	*224(%rax)
 335      0000
 336              	.LVL30:
 337              	.LBE1221:
 338              	.LBE1220:
 339              	.LBB1222:
 340              	.LBB1223:
 341              		.loc 2 432 0
 342 00f2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 342      000000
 343 00f9 488B07   		movq	(%rdi), %rax
 344 00fc 488B8018 		movq	280(%rax), %rax
 344      010000
 345              	.LBE1223:
 346              	.LBE1222:
 347              		.loc 1 386 0
 348 0103 4883C408 		addq	$8, %rsp
 349              		.cfi_def_cfa_offset 8
 350              	.LBB1225:
 351              	.LBB1224:
 352              		.loc 2 432 0
 353 0107 FFE0     		jmp	*%rax
 354              	.LVL31:
 355              	.LBE1224:
 356              	.LBE1225:
 357              		.cfi_endproc
 358              	.LFE513:
 360              		.section	.text.unlikely._ZL14draw_downarrowj
 361              	.LCOLDE7:
 362              		.section	.text._ZL14draw_downarrowj
 363              	.LHOTE7:
 364              		.section	.text.unlikely._ZL17set_outline_colorj,"ax",@progbits
 365              	.LCOLDB9:
 366              		.section	.text._ZL17set_outline_colorj,"ax",@progbits
 367              	.LHOTB9:
 368              		.p2align 4,,15
 370              	_ZL17set_outline_colorj:
 371              	.LFB488:
 372              		.loc 1 182 0
 373              		.cfi_startproc
 374              	.LVL32:
 375 0000 4883EC08 		subq	$8, %rsp
 376              		.cfi_def_cfa_offset 16
 377              	.LBB1226:
 378              	.LBB1227:
 379              		.file 3 "fltk-1.3.4-1/FL/Enumerations.H"
   1:fltk-1.3.4-1/FL/Enumerations.H **** //
   2:fltk-1.3.4-1/FL/Enumerations.H **** // "$Id: Enumerations.H 11803 2016-07-09 18:43:31Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Enumerations.H **** //
   4:fltk-1.3.4-1/FL/Enumerations.H **** // Enumerations for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Enumerations.H **** //
   6:fltk-1.3.4-1/FL/Enumerations.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Enumerations.H **** //
   8:fltk-1.3.4-1/FL/Enumerations.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Enumerations.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Enumerations.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Enumerations.H **** //
  12:fltk-1.3.4-1/FL/Enumerations.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Enumerations.H **** //
  14:fltk-1.3.4-1/FL/Enumerations.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Enumerations.H **** //
  16:fltk-1.3.4-1/FL/Enumerations.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Enumerations.H **** //
  18:fltk-1.3.4-1/FL/Enumerations.H **** 
  19:fltk-1.3.4-1/FL/Enumerations.H **** /** \file
  20:fltk-1.3.4-1/FL/Enumerations.H ****     This file contains type definitions and general enumerations.
  21:fltk-1.3.4-1/FL/Enumerations.H ****  */
  22:fltk-1.3.4-1/FL/Enumerations.H **** 
  23:fltk-1.3.4-1/FL/Enumerations.H **** #ifndef Fl_Enumerations_H
  24:fltk-1.3.4-1/FL/Enumerations.H **** #define Fl_Enumerations_H
  25:fltk-1.3.4-1/FL/Enumerations.H **** 
  26:fltk-1.3.4-1/FL/Enumerations.H **** /*
  27:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  28:fltk-1.3.4-1/FL/Enumerations.H ****  * Notes on FL_ABI_VERSION and deprecated (obsolete) FLTK_ABI_VERSION:
  29:fltk-1.3.4-1/FL/Enumerations.H ****  *
  30:fltk-1.3.4-1/FL/Enumerations.H ****  * (1)	FLTK_ABI_VERSION is deprecated, but still defined below.
  31:fltk-1.3.4-1/FL/Enumerations.H ****  *	Do NOT define FLTK_ABI_VERSION here - it would be overwritten later.
  32:fltk-1.3.4-1/FL/Enumerations.H ****  *
  33:fltk-1.3.4-1/FL/Enumerations.H ****  * (2)	FL_ABI_VERSION is now (as of FLTK 1.3.4) defined by configure
  34:fltk-1.3.4-1/FL/Enumerations.H ****  *	or CMake. Do NOT define it here. Its definition will be included
  35:fltk-1.3.4-1/FL/Enumerations.H ****  *	below by "#include <FL/abi-version.h>".
  36:fltk-1.3.4-1/FL/Enumerations.H ****  *
  37:fltk-1.3.4-1/FL/Enumerations.H ****  * (3)	If you use the provided IDE files (Windows VC++ or Xcode) you should
  38:fltk-1.3.4-1/FL/Enumerations.H ****  *	edit the definition in the provided file abi-version.ide. The correct
  39:fltk-1.3.4-1/FL/Enumerations.H ****  *	file is `/path/to/fltk/abi-version.ide' .
  40:fltk-1.3.4-1/FL/Enumerations.H ****  *
  41:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  42:fltk-1.3.4-1/FL/Enumerations.H ****  * For more informations on FL_ABI_VERSION see README.abi-version.txt.
  43:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  44:fltk-1.3.4-1/FL/Enumerations.H ****  */
  45:fltk-1.3.4-1/FL/Enumerations.H **** 
  46:fltk-1.3.4-1/FL/Enumerations.H **** #include <FL/abi-version.h>
  47:fltk-1.3.4-1/FL/Enumerations.H **** 
  48:fltk-1.3.4-1/FL/Enumerations.H **** #  include "Fl_Export.H"
  49:fltk-1.3.4-1/FL/Enumerations.H **** #  include "fl_types.h"
  50:fltk-1.3.4-1/FL/Enumerations.H **** 
  51:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Version Numbers
  52:fltk-1.3.4-1/FL/Enumerations.H **** 
  53:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK defines some constants to help the programmer to
  54:fltk-1.3.4-1/FL/Enumerations.H ****     find out, for which FLTK version a program is compiled.
  55:fltk-1.3.4-1/FL/Enumerations.H ****     
  56:fltk-1.3.4-1/FL/Enumerations.H ****     The following constants are defined:
  57:fltk-1.3.4-1/FL/Enumerations.H ****  */
  58:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
  59:fltk-1.3.4-1/FL/Enumerations.H **** 
  60:fltk-1.3.4-1/FL/Enumerations.H **** /**
  61:fltk-1.3.4-1/FL/Enumerations.H ****    The major release version of this FLTK library.
  62:fltk-1.3.4-1/FL/Enumerations.H ****    \sa FL_VERSION
  63:fltk-1.3.4-1/FL/Enumerations.H ****  */
  64:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MAJOR_VERSION	1
  65:fltk-1.3.4-1/FL/Enumerations.H **** 
  66:fltk-1.3.4-1/FL/Enumerations.H **** /**
  67:fltk-1.3.4-1/FL/Enumerations.H ****    The minor release version for this library.
  68:fltk-1.3.4-1/FL/Enumerations.H **** 
  69:fltk-1.3.4-1/FL/Enumerations.H ****    FLTK remains mostly source-code compatible between minor version changes.
  70:fltk-1.3.4-1/FL/Enumerations.H ****  */
  71:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MINOR_VERSION	3
  72:fltk-1.3.4-1/FL/Enumerations.H **** 
  73:fltk-1.3.4-1/FL/Enumerations.H **** /**
  74:fltk-1.3.4-1/FL/Enumerations.H ****    The patch version for this library.
  75:fltk-1.3.4-1/FL/Enumerations.H **** 
  76:fltk-1.3.4-1/FL/Enumerations.H ****    FLTK remains binary compatible between patches.
  77:fltk-1.3.4-1/FL/Enumerations.H ****  */
  78:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PATCH_VERSION	4
  79:fltk-1.3.4-1/FL/Enumerations.H **** 
  80:fltk-1.3.4-1/FL/Enumerations.H **** /**
  81:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK version number as a \em double.
  82:fltk-1.3.4-1/FL/Enumerations.H **** 
  83:fltk-1.3.4-1/FL/Enumerations.H ****     FL_VERSION is a \em double that describes the major, minor, and patch
  84:fltk-1.3.4-1/FL/Enumerations.H ****     version numbers.
  85:fltk-1.3.4-1/FL/Enumerations.H **** 
  86:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 1.0203 to allow for more than 9
  87:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
  88:fltk-1.3.4-1/FL/Enumerations.H **** 
  89:fltk-1.3.4-1/FL/Enumerations.H ****     \deprecated This \p double version number is retained for compatibility
  90:fltk-1.3.4-1/FL/Enumerations.H ****     with existing program code. New code should use \em int FL_API_VERSION
  91:fltk-1.3.4-1/FL/Enumerations.H ****     instead. FL_VERSION is deprecated because comparisons of floating point
  92:fltk-1.3.4-1/FL/Enumerations.H ****     values may fail due to rounding errors. However, there are currently no
  93:fltk-1.3.4-1/FL/Enumerations.H ****     plans to remove this deprecated constant.
  94:fltk-1.3.4-1/FL/Enumerations.H **** 
  95:fltk-1.3.4-1/FL/Enumerations.H ****     FL_VERSION is equivalent to <em>(double)FL_API_VERSION / 10000</em>.
  96:fltk-1.3.4-1/FL/Enumerations.H **** 
  97:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::version() (deprecated as well)
  98:fltk-1.3.4-1/FL/Enumerations.H ****     \see FL_API_VERSION
  99:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::api_version()
 100:fltk-1.3.4-1/FL/Enumerations.H ****  */
 101:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_VERSION	( (double)FL_MAJOR_VERSION + \
 102:fltk-1.3.4-1/FL/Enumerations.H **** 			  (double)FL_MINOR_VERSION * 0.01 + \
 103:fltk-1.3.4-1/FL/Enumerations.H **** 			  (double)FL_PATCH_VERSION * 0.0001 )
 104:fltk-1.3.4-1/FL/Enumerations.H **** 
 105:fltk-1.3.4-1/FL/Enumerations.H **** /**
 106:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK API version number as an \em int.
 107:fltk-1.3.4-1/FL/Enumerations.H **** 
 108:fltk-1.3.4-1/FL/Enumerations.H ****     FL_API_VERSION is an \em int that describes the major, minor, and patch
 109:fltk-1.3.4-1/FL/Enumerations.H ****     version numbers.
 110:fltk-1.3.4-1/FL/Enumerations.H **** 
 111:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 10203 to allow for more than 9
 112:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
 113:fltk-1.3.4-1/FL/Enumerations.H **** 
 114:fltk-1.3.4-1/FL/Enumerations.H ****     The FL_MAJOR_VERSION, FL_MINOR_VERSION, and FL_PATCH_VERSION constants
 115:fltk-1.3.4-1/FL/Enumerations.H ****     give the integral values for the major, minor, and patch releases
 116:fltk-1.3.4-1/FL/Enumerations.H ****     respectively.
 117:fltk-1.3.4-1/FL/Enumerations.H **** 
 118:fltk-1.3.4-1/FL/Enumerations.H ****     \note FL_API_VERSION is intended to replace the deprecated
 119:fltk-1.3.4-1/FL/Enumerations.H ****     \em double FL_VERSION.
 120:fltk-1.3.4-1/FL/Enumerations.H **** 
 121:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::api_version()
 122:fltk-1.3.4-1/FL/Enumerations.H ****  */
 123:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_API_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100 + FL_PATCH_VERSION)
 124:fltk-1.3.4-1/FL/Enumerations.H **** 
 125:fltk-1.3.4-1/FL/Enumerations.H **** /**
 126:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK ABI (Application Binary Interface) version number as an \em int.
 127:fltk-1.3.4-1/FL/Enumerations.H **** 
 128:fltk-1.3.4-1/FL/Enumerations.H ****     FL_ABI_VERSION is an \em int that describes the major, minor, and patch
 129:fltk-1.3.4-1/FL/Enumerations.H ****     ABI version numbers in the same format as FL_API_VERSION.
 130:fltk-1.3.4-1/FL/Enumerations.H **** 
 131:fltk-1.3.4-1/FL/Enumerations.H ****     The ABI version number \p FL_ABI_VERSION is usually the same as the
 132:fltk-1.3.4-1/FL/Enumerations.H ****     API version \p FL_API_VERSION with the last two digits set to '00'.
 133:fltk-1.3.4-1/FL/Enumerations.H **** 
 134:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK retains the ABI (Application Binary Interface) during patch
 135:fltk-1.3.4-1/FL/Enumerations.H ****     releases of the same major and minor versions. Examples:
 136:fltk-1.3.4-1/FL/Enumerations.H **** 
 137:fltk-1.3.4-1/FL/Enumerations.H ****     \verbatim
 138:fltk-1.3.4-1/FL/Enumerations.H ****       FLTK Version  FL_API_VERSION  FL_ABI_VERSION  FL_VERSION (deprecated)
 139:fltk-1.3.4-1/FL/Enumerations.H ****         1.3.0          10300           10300           1.0300
 140:fltk-1.3.4-1/FL/Enumerations.H **** 	1.3.4          10304           10300           1.0304
 141:fltk-1.3.4-1/FL/Enumerations.H ****     \endverbatim
 142:fltk-1.3.4-1/FL/Enumerations.H **** 
 143:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 10203 to allow for more than 9
 144:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
 145:fltk-1.3.4-1/FL/Enumerations.H **** 
 146:fltk-1.3.4-1/FL/Enumerations.H ****     The FL_MAJOR_VERSION, FL_MINOR_VERSION, and FL_PATCH_VERSION constants
 147:fltk-1.3.4-1/FL/Enumerations.H ****     give the integral values for the major, minor, and patch releases
 148:fltk-1.3.4-1/FL/Enumerations.H ****     respectively.
 149:fltk-1.3.4-1/FL/Enumerations.H **** 
 150:fltk-1.3.4-1/FL/Enumerations.H ****     To enable new ABI-breaking features in patch releases you can configure
 151:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK to use a higher FL_ABI_VERSION.
 152:fltk-1.3.4-1/FL/Enumerations.H **** 
 153:fltk-1.3.4-1/FL/Enumerations.H ****     \see README.abi-version.txt
 154:fltk-1.3.4-1/FL/Enumerations.H ****  */
 155:fltk-1.3.4-1/FL/Enumerations.H **** #ifndef FL_ABI_VERSION
 156:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ABI_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100)
 157:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 158:fltk-1.3.4-1/FL/Enumerations.H **** 
 159:fltk-1.3.4-1/FL/Enumerations.H **** /*
 160:fltk-1.3.4-1/FL/Enumerations.H ****   Check if FL_ABI_VERSION is out of allowed range; redefine if necessary.
 161:fltk-1.3.4-1/FL/Enumerations.H **** 
 162:fltk-1.3.4-1/FL/Enumerations.H ****   This is done to prevent users from defining an illegal ABI version.
 163:fltk-1.3.4-1/FL/Enumerations.H **** 
 164:fltk-1.3.4-1/FL/Enumerations.H ****   Rule: FL_MAJOR_VERSION * 10000 + FL_MINOR_VERSION * 100
 165:fltk-1.3.4-1/FL/Enumerations.H **** 	  <= FL_ABI_VERSION <= FL_API_VERSION.
 166:fltk-1.3.4-1/FL/Enumerations.H **** 
 167:fltk-1.3.4-1/FL/Enumerations.H ****   Example (FLTK 1.3.4):
 168:fltk-1.3.4-1/FL/Enumerations.H **** 
 169:fltk-1.3.4-1/FL/Enumerations.H ****     10300 <= FL_ABI_VERSION <= 10304
 170:fltk-1.3.4-1/FL/Enumerations.H **** 
 171:fltk-1.3.4-1/FL/Enumerations.H ****   Note: configure + CMake can be used to define FL_ABI_VERSION, but they
 172:fltk-1.3.4-1/FL/Enumerations.H ****   do not check validity. This is done here.
 173:fltk-1.3.4-1/FL/Enumerations.H **** */
 174:fltk-1.3.4-1/FL/Enumerations.H **** 
 175:fltk-1.3.4-1/FL/Enumerations.H **** #if FL_ABI_VERSION < FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100
 176:fltk-1.3.4-1/FL/Enumerations.H **** 
 177:fltk-1.3.4-1/FL/Enumerations.H **** # undef FL_ABI_VERSION
 178:fltk-1.3.4-1/FL/Enumerations.H **** # define FL_ABI_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100)
 179:fltk-1.3.4-1/FL/Enumerations.H **** 
 180:fltk-1.3.4-1/FL/Enumerations.H **** #elif FL_ABI_VERSION > FL_API_VERSION
 181:fltk-1.3.4-1/FL/Enumerations.H **** 
 182:fltk-1.3.4-1/FL/Enumerations.H **** # undef FL_ABI_VERSION
 183:fltk-1.3.4-1/FL/Enumerations.H **** # define FL_ABI_VERSION FL_API_VERSION
 184:fltk-1.3.4-1/FL/Enumerations.H **** 
 185:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 186:fltk-1.3.4-1/FL/Enumerations.H **** 
 187:fltk-1.3.4-1/FL/Enumerations.H **** /*
 188:fltk-1.3.4-1/FL/Enumerations.H ****   FLTK_ABI_VERSION is deprecated (replaced by FL_ABI_VERSION).
 189:fltk-1.3.4-1/FL/Enumerations.H **** 
 190:fltk-1.3.4-1/FL/Enumerations.H ****   This deprecated constant will be removed in FLTK 1.4.0 and later.
 191:fltk-1.3.4-1/FL/Enumerations.H ****   Please use FL_ABI_VERSION when FLTK 1.4.0 has been released.
 192:fltk-1.3.4-1/FL/Enumerations.H **** */
 193:fltk-1.3.4-1/FL/Enumerations.H **** 
 194:fltk-1.3.4-1/FL/Enumerations.H **** #ifdef FLTK_ABI_VERSION
 195:fltk-1.3.4-1/FL/Enumerations.H **** #undef FLTK_ABI_VERSION
 196:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 197:fltk-1.3.4-1/FL/Enumerations.H **** 
 198:fltk-1.3.4-1/FL/Enumerations.H **** #define FLTK_ABI_VERSION FL_ABI_VERSION
 199:fltk-1.3.4-1/FL/Enumerations.H **** 
 200:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Version Numbers
 201:fltk-1.3.4-1/FL/Enumerations.H **** 
 202:fltk-1.3.4-1/FL/Enumerations.H **** /**
 203:fltk-1.3.4-1/FL/Enumerations.H ****     Every time a user moves the mouse pointer, clicks a button,
 204:fltk-1.3.4-1/FL/Enumerations.H ****     or presses a key, an event is generated and sent to your
 205:fltk-1.3.4-1/FL/Enumerations.H ****     application. Events can also come from other programs like the
 206:fltk-1.3.4-1/FL/Enumerations.H ****     window manager.
 207:fltk-1.3.4-1/FL/Enumerations.H ****    
 208:fltk-1.3.4-1/FL/Enumerations.H ****     Events are identified by the integer argument passed to the 
 209:fltk-1.3.4-1/FL/Enumerations.H ****     Fl_Widget::handle() virtual method. Other information about the 
 210:fltk-1.3.4-1/FL/Enumerations.H ****     most recent event is stored in static locations and acquired  by 
 211:fltk-1.3.4-1/FL/Enumerations.H ****     calling the Fl::event_*() methods. This static information remains 
 212:fltk-1.3.4-1/FL/Enumerations.H ****     valid until the next event is read from the window system, so it 
 213:fltk-1.3.4-1/FL/Enumerations.H ****     is ok to look at it outside of the handle() method.
 214:fltk-1.3.4-1/FL/Enumerations.H **** 
 215:fltk-1.3.4-1/FL/Enumerations.H ****     Event numbers can be converted to their actual names using the
 216:fltk-1.3.4-1/FL/Enumerations.H ****     \ref fl_eventnames[] array defined in \#include &lt;FL/names.h&gt;
 217:fltk-1.3.4-1/FL/Enumerations.H **** 
 218:fltk-1.3.4-1/FL/Enumerations.H ****     \sa Fl::event_text(), Fl::event_key(), class Fl::
 219:fltk-1.3.4-1/FL/Enumerations.H ****  */
 220:fltk-1.3.4-1/FL/Enumerations.H **** // DEV NOTE: Keep this list in sync with FL/names.H
 221:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Event {	// events
 222:fltk-1.3.4-1/FL/Enumerations.H ****   /** No event. */
 223:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_EVENT		= 0,
 224:fltk-1.3.4-1/FL/Enumerations.H **** 
 225:fltk-1.3.4-1/FL/Enumerations.H ****   /** A mouse button has gone down with the mouse pointing at this
 226:fltk-1.3.4-1/FL/Enumerations.H ****       widget. You can find out what button by calling Fl::event_button(). 
 227:fltk-1.3.4-1/FL/Enumerations.H ****       You find out the mouse position by calling Fl::event_x() and
 228:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_y().
 229:fltk-1.3.4-1/FL/Enumerations.H **** 
 230:fltk-1.3.4-1/FL/Enumerations.H ****       A widget indicates that it "wants" the mouse click by returning non-zero 
 231:fltk-1.3.4-1/FL/Enumerations.H ****       from its Fl_Widget::handle() method. It will then become the 
 232:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::pushed() widget and will get FL_DRAG and the matching FL_RELEASE events.  
 233:fltk-1.3.4-1/FL/Enumerations.H ****       If Fl_Widget::handle() returns zero then FLTK will try sending the FL_PUSH 
 234:fltk-1.3.4-1/FL/Enumerations.H ****       to another widget. 
 235:fltk-1.3.4-1/FL/Enumerations.H ****    */
 236:fltk-1.3.4-1/FL/Enumerations.H ****   FL_PUSH		= 1,
 237:fltk-1.3.4-1/FL/Enumerations.H **** 
 238:fltk-1.3.4-1/FL/Enumerations.H ****   /** A mouse button has been released. You can find out what button by 
 239:fltk-1.3.4-1/FL/Enumerations.H ****       calling Fl::event_button().
 240:fltk-1.3.4-1/FL/Enumerations.H **** 
 241:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive the FL_RELEASE event, the widget must return 
 242:fltk-1.3.4-1/FL/Enumerations.H ****       non-zero when handling FL_PUSH.
 243:fltk-1.3.4-1/FL/Enumerations.H ****    */
 244:fltk-1.3.4-1/FL/Enumerations.H ****   FL_RELEASE		= 2,
 245:fltk-1.3.4-1/FL/Enumerations.H **** 
 246:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved to point at this widget.  This can
 247:fltk-1.3.4-1/FL/Enumerations.H ****       be used for highlighting feedback.  If a widget wants to
 248:fltk-1.3.4-1/FL/Enumerations.H ****       highlight or otherwise track the mouse, it indicates this by
 249:fltk-1.3.4-1/FL/Enumerations.H ****       returning non-zero from its handle() method. It then
 250:fltk-1.3.4-1/FL/Enumerations.H ****       becomes the Fl::belowmouse() widget and will receive 
 251:fltk-1.3.4-1/FL/Enumerations.H ****       FL_MOVE and FL_LEAVE events.
 252:fltk-1.3.4-1/FL/Enumerations.H ****    */
 253:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENTER		= 3,
 254:fltk-1.3.4-1/FL/Enumerations.H **** 
 255:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved out of the widget.
 256:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive the FL_LEAVE event, the widget must 
 257:fltk-1.3.4-1/FL/Enumerations.H ****       return non-zero when handling FL_ENTER.
 258:fltk-1.3.4-1/FL/Enumerations.H ****    */
 259:fltk-1.3.4-1/FL/Enumerations.H ****   FL_LEAVE		= 4,
 260:fltk-1.3.4-1/FL/Enumerations.H **** 
 261:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved with a button held down. The current button state 
 262:fltk-1.3.4-1/FL/Enumerations.H ****       is in Fl::event_state(). The mouse position is in Fl::event_x() and 
 263:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_y().
 264:fltk-1.3.4-1/FL/Enumerations.H **** 
 265:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive FL_DRAG events, the widget must return non-zero 
 266:fltk-1.3.4-1/FL/Enumerations.H ****       when handling FL_PUSH.
 267:fltk-1.3.4-1/FL/Enumerations.H ****    */
 268:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DRAG		= 5,
 269:fltk-1.3.4-1/FL/Enumerations.H **** 
 270:fltk-1.3.4-1/FL/Enumerations.H ****   /** This indicates an <I>attempt</I> to give a widget the keyboard focus.
 271:fltk-1.3.4-1/FL/Enumerations.H **** 
 272:fltk-1.3.4-1/FL/Enumerations.H ****       If a widget wants the focus, it should change itself to display the 
 273:fltk-1.3.4-1/FL/Enumerations.H ****       fact that it has the focus, and return non-zero from its handle() method.
 274:fltk-1.3.4-1/FL/Enumerations.H ****       It then becomes the Fl::focus() widget and gets FL_KEYDOWN, FL_KEYUP, 
 275:fltk-1.3.4-1/FL/Enumerations.H ****       and FL_UNFOCUS events.
 276:fltk-1.3.4-1/FL/Enumerations.H **** 
 277:fltk-1.3.4-1/FL/Enumerations.H ****       The focus will change either because the window manager changed which 
 278:fltk-1.3.4-1/FL/Enumerations.H ****       window gets the focus, or because the user tried to navigate using tab, 
 279:fltk-1.3.4-1/FL/Enumerations.H ****       arrows, or other keys. You can check Fl::event_key() to figure out why 
 280:fltk-1.3.4-1/FL/Enumerations.H ****       it moved. For navigation it will be the key pressed and for interaction 
 281:fltk-1.3.4-1/FL/Enumerations.H ****       with the window manager it will be zero.
 282:fltk-1.3.4-1/FL/Enumerations.H ****    */
 283:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FOCUS		= 6,
 284:fltk-1.3.4-1/FL/Enumerations.H ****   
 285:fltk-1.3.4-1/FL/Enumerations.H ****   /** This event is sent to the previous Fl::focus() widget when another 
 286:fltk-1.3.4-1/FL/Enumerations.H ****       widget gets the focus or the window loses focus.
 287:fltk-1.3.4-1/FL/Enumerations.H ****    */
 288:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UNFOCUS		= 7,
 289:fltk-1.3.4-1/FL/Enumerations.H **** 
 290:fltk-1.3.4-1/FL/Enumerations.H ****   /** A key was pressed (FL_KEYDOWN) or released (FL_KEYUP). 
 291:fltk-1.3.4-1/FL/Enumerations.H ****       Fl_KEYBOARD is a synonym for FL_KEYDOWN.
 292:fltk-1.3.4-1/FL/Enumerations.H ****       The key can be found in Fl::event_key().
 293:fltk-1.3.4-1/FL/Enumerations.H ****       The text that the key should insert can be found with Fl::event_text() 
 294:fltk-1.3.4-1/FL/Enumerations.H ****       and its length is in Fl::event_length(). If you use the key handle()
 295:fltk-1.3.4-1/FL/Enumerations.H ****       should return 1. If you return zero then FLTK assumes you ignored the 
 296:fltk-1.3.4-1/FL/Enumerations.H ****       key and will then attempt to send it to a parent widget. If none of 
 297:fltk-1.3.4-1/FL/Enumerations.H ****       them want it, it will change the event into a FL_SHORTCUT event.
 298:fltk-1.3.4-1/FL/Enumerations.H **** 
 299:fltk-1.3.4-1/FL/Enumerations.H ****       To receive FL_KEYBOARD events you must also respond to the FL_FOCUS
 300:fltk-1.3.4-1/FL/Enumerations.H ****       and FL_UNFOCUS events.
 301:fltk-1.3.4-1/FL/Enumerations.H **** 
 302:fltk-1.3.4-1/FL/Enumerations.H ****       If you are writing a text-editing widget you may also want to call 
 303:fltk-1.3.4-1/FL/Enumerations.H ****       the Fl::compose() function to translate individual keystrokes into 
 304:fltk-1.3.4-1/FL/Enumerations.H ****       non-ASCII characters.
 305:fltk-1.3.4-1/FL/Enumerations.H **** 
 306:fltk-1.3.4-1/FL/Enumerations.H ****       FL_KEYUP events are sent to the widget that currently has focus. This 
 307:fltk-1.3.4-1/FL/Enumerations.H ****       is not necessarily the same widget that received the corresponding 
 308:fltk-1.3.4-1/FL/Enumerations.H ****       FL_KEYDOWN event because focus may have changed between events.
 309:fltk-1.3.4-1/FL/Enumerations.H ****    */
 310:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYDOWN		= 8,
 311:fltk-1.3.4-1/FL/Enumerations.H **** 
 312:fltk-1.3.4-1/FL/Enumerations.H ****   /** Equivalent to FL_KEYDOWN.
 313:fltk-1.3.4-1/FL/Enumerations.H ****       \see FL_KEYDOWN
 314:fltk-1.3.4-1/FL/Enumerations.H ****    */
 315:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYBOARD		= 8,
 316:fltk-1.3.4-1/FL/Enumerations.H ****  
 317:fltk-1.3.4-1/FL/Enumerations.H ****   /** Key release event.
 318:fltk-1.3.4-1/FL/Enumerations.H ****       \see FL_KEYDOWN
 319:fltk-1.3.4-1/FL/Enumerations.H ****    */
 320:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYUP		= 9,
 321:fltk-1.3.4-1/FL/Enumerations.H **** 
 322:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user clicked the close button of a window.
 323:fltk-1.3.4-1/FL/Enumerations.H ****       This event is used internally only to trigger the callback of
 324:fltk-1.3.4-1/FL/Enumerations.H ****       Fl_Window derived classed. The default callback closes the 
 325:fltk-1.3.4-1/FL/Enumerations.H ****       window calling Fl_Window::hide().
 326:fltk-1.3.4-1/FL/Enumerations.H ****    */
 327:fltk-1.3.4-1/FL/Enumerations.H ****   FL_CLOSE		= 10,
 328:fltk-1.3.4-1/FL/Enumerations.H **** 
 329:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved without any mouse buttons held down. 
 330:fltk-1.3.4-1/FL/Enumerations.H ****       This event is sent to the Fl::belowmouse() widget.
 331:fltk-1.3.4-1/FL/Enumerations.H **** 
 332:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive FL_MOVE events, the widget must return 
 333:fltk-1.3.4-1/FL/Enumerations.H ****       non-zero when handling FL_ENTER.
 334:fltk-1.3.4-1/FL/Enumerations.H ****    */
 335:fltk-1.3.4-1/FL/Enumerations.H ****   FL_MOVE		= 11,
 336:fltk-1.3.4-1/FL/Enumerations.H **** 
 337:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the Fl::focus() widget is zero or ignores an FL_KEYBOARD
 338:fltk-1.3.4-1/FL/Enumerations.H ****       event then FLTK tries sending this event to every widget it 
 339:fltk-1.3.4-1/FL/Enumerations.H ****       can, until one of them returns non-zero. FL_SHORTCUT is first 
 340:fltk-1.3.4-1/FL/Enumerations.H ****       sent to the Fl::belowmouse() widget, then its parents and siblings, 
 341:fltk-1.3.4-1/FL/Enumerations.H ****       and eventually to every widget in the window, trying to find an 
 342:fltk-1.3.4-1/FL/Enumerations.H ****       object that returns non-zero. FLTK tries really hard to not to ignore 
 343:fltk-1.3.4-1/FL/Enumerations.H ****       any keystrokes!
 344:fltk-1.3.4-1/FL/Enumerations.H **** 
 345:fltk-1.3.4-1/FL/Enumerations.H ****       You can also make "global" shortcuts by using Fl::add_handler(). A 
 346:fltk-1.3.4-1/FL/Enumerations.H ****       global shortcut will work no matter what windows are displayed or 
 347:fltk-1.3.4-1/FL/Enumerations.H ****       which one has the focus.
 348:fltk-1.3.4-1/FL/Enumerations.H ****    */
 349:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SHORTCUT		= 12,
 350:fltk-1.3.4-1/FL/Enumerations.H **** 
 351:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is no longer active, due to Fl_Widget::deactivate() 
 352:fltk-1.3.4-1/FL/Enumerations.H ****       being called on it or one of its parents. Fl_Widget::active() may 
 353:fltk-1.3.4-1/FL/Enumerations.H ****       still be true after this, the widget is only active if Fl_Widget::active()
 354:fltk-1.3.4-1/FL/Enumerations.H ****       is true on it and all its parents (use Fl_Widget::active_r() to check this).
 355:fltk-1.3.4-1/FL/Enumerations.H ****    */
 356:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DEACTIVATE		= 13,
 357:fltk-1.3.4-1/FL/Enumerations.H **** 
 358:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is now active, due to Fl_Widget::activate() being 
 359:fltk-1.3.4-1/FL/Enumerations.H ****       called on it or one of its parents.
 360:fltk-1.3.4-1/FL/Enumerations.H ****    */
 361:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ACTIVATE		= 14,
 362:fltk-1.3.4-1/FL/Enumerations.H **** 
 363:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is no longer visible, due to Fl_Widget::hide() being 
 364:fltk-1.3.4-1/FL/Enumerations.H ****       called on it or one of its parents, or due to a parent window being 
 365:fltk-1.3.4-1/FL/Enumerations.H ****       minimized.  Fl_Widget::visible() may still be true after this, but the 
 366:fltk-1.3.4-1/FL/Enumerations.H ****       widget is visible only if visible() is true for it and all its 
 367:fltk-1.3.4-1/FL/Enumerations.H ****       parents (use Fl_Widget::visible_r() to check this).
 368:fltk-1.3.4-1/FL/Enumerations.H ****    */
 369:fltk-1.3.4-1/FL/Enumerations.H ****   FL_HIDE		= 15,
 370:fltk-1.3.4-1/FL/Enumerations.H **** 
 371:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is visible again, due to Fl_Widget::show() being called on 
 372:fltk-1.3.4-1/FL/Enumerations.H ****       it or one of its parents, or due to a parent window being restored. 
 373:fltk-1.3.4-1/FL/Enumerations.H ****       Child Fl_Windows respond to this by actually creating the window if not 
 374:fltk-1.3.4-1/FL/Enumerations.H ****       done already, so if you subclass a window, be sure to pass FL_SHOW 
 375:fltk-1.3.4-1/FL/Enumerations.H ****       to the base class Fl_Widget::handle() method!
 376:fltk-1.3.4-1/FL/Enumerations.H ****    */
 377:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SHOW		= 16,
 378:fltk-1.3.4-1/FL/Enumerations.H **** 
 379:fltk-1.3.4-1/FL/Enumerations.H ****   /** You should get this event some time after you call Fl::paste(). 
 380:fltk-1.3.4-1/FL/Enumerations.H ****       The contents of Fl::event_text() is the text to insert and the number 
 381:fltk-1.3.4-1/FL/Enumerations.H ****       of characters is in Fl::event_length().
 382:fltk-1.3.4-1/FL/Enumerations.H ****    */
 383:fltk-1.3.4-1/FL/Enumerations.H ****   FL_PASTE		= 17,
 384:fltk-1.3.4-1/FL/Enumerations.H **** 
 385:fltk-1.3.4-1/FL/Enumerations.H ****   /** The Fl::selection_owner() will get this event before the selection is 
 386:fltk-1.3.4-1/FL/Enumerations.H ****       moved to another widget. This indicates that some other widget or program 
 387:fltk-1.3.4-1/FL/Enumerations.H ****       has claimed the selection. Motif programs used this to clear the selection 
 388:fltk-1.3.4-1/FL/Enumerations.H ****       indication. Most modern programs ignore this.
 389:fltk-1.3.4-1/FL/Enumerations.H ****    */
 390:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SELECTIONCLEAR	= 18,
 391:fltk-1.3.4-1/FL/Enumerations.H **** 
 392:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has moved the mouse wheel. The Fl::event_dx() and Fl::event_dy()
 393:fltk-1.3.4-1/FL/Enumerations.H ****       methods can be used to find the amount to scroll horizontally and vertically.
 394:fltk-1.3.4-1/FL/Enumerations.H ****    */
 395:fltk-1.3.4-1/FL/Enumerations.H ****   FL_MOUSEWHEEL		= 19,
 396:fltk-1.3.4-1/FL/Enumerations.H **** 
 397:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved to point at this widget. A widget that is 
 398:fltk-1.3.4-1/FL/Enumerations.H ****       interested in receiving drag'n'drop data must return 1 to receive 
 399:fltk-1.3.4-1/FL/Enumerations.H ****       FL_DND_DRAG, FL_DND_LEAVE and FL_DND_RELEASE events.
 400:fltk-1.3.4-1/FL/Enumerations.H ****    */
 401:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_ENTER		= 20,
 402:fltk-1.3.4-1/FL/Enumerations.H **** 
 403:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved inside a widget while dragging data.  A 
 404:fltk-1.3.4-1/FL/Enumerations.H ****       widget that is interested in receiving drag'n'drop data should 
 405:fltk-1.3.4-1/FL/Enumerations.H ****       indicate the possible drop position.
 406:fltk-1.3.4-1/FL/Enumerations.H ****    */
 407:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_DRAG		= 21,
 408:fltk-1.3.4-1/FL/Enumerations.H **** 
 409:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved out of the widget.
 410:fltk-1.3.4-1/FL/Enumerations.H ****    */
 411:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_LEAVE		= 22,
 412:fltk-1.3.4-1/FL/Enumerations.H **** 
 413:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has released the mouse button dropping data into the widget. 
 414:fltk-1.3.4-1/FL/Enumerations.H ****       If the widget returns 1, it will receive the data in the immediately 
 415:fltk-1.3.4-1/FL/Enumerations.H ****       following FL_PASTE event.
 416:fltk-1.3.4-1/FL/Enumerations.H ****    */
 417:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_RELEASE	= 23,
 418:fltk-1.3.4-1/FL/Enumerations.H ****   /** The screen configuration (number, positions) was changed.
 419:fltk-1.3.4-1/FL/Enumerations.H ****    Use Fl::add_handler() to be notified of this event.
 420:fltk-1.3.4-1/FL/Enumerations.H ****    */
 421:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SCREEN_CONFIGURATION_CHANGED = 24,
 422:fltk-1.3.4-1/FL/Enumerations.H ****   /** The fullscreen state of the window has changed
 423:fltk-1.3.4-1/FL/Enumerations.H ****    */
 424:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FULLSCREEN         = 25,
 425:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has made a zoom/pinch/magnification gesture. 
 426:fltk-1.3.4-1/FL/Enumerations.H ****       The Fl::event_dy() method can be used to find magnification amount,
 427:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_x() and Fl::event_y() are set as well.
 428:fltk-1.3.4-1/FL/Enumerations.H ****      */
 429:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ZOOM_GESTURE	= 26
 430:fltk-1.3.4-1/FL/Enumerations.H **** };
 431:fltk-1.3.4-1/FL/Enumerations.H **** 
 432:fltk-1.3.4-1/FL/Enumerations.H **** /** \name When Conditions */
 433:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 434:fltk-1.3.4-1/FL/Enumerations.H **** /** These constants determine when a callback is performed.
 435:fltk-1.3.4-1/FL/Enumerations.H **** 
 436:fltk-1.3.4-1/FL/Enumerations.H ****     \sa Fl_Widget::when();
 437:fltk-1.3.4-1/FL/Enumerations.H ****     \todo doxygen comments for values are incomplete and maybe wrong or unclear
 438:fltk-1.3.4-1/FL/Enumerations.H ****  */
 439:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_When { // Fl_Widget::when():
 440:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_NEVER		= 0,	///< Never call the callback
 441:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_CHANGED	= 1,	///< Do the callback only when the widget value changes
 442:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_NOT_CHANGED	= 2,	///< Do the callback whenever the user interacts with the widget
 443:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_RELEASE	= 4,	///< Do the callback when the button or key is released and the value change
 444:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_RELEASE_ALWAYS= 6,	///< Do the callback when the button or key is released, even if the v
 445:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY	= 8,	///< Do the callback when the user presses the ENTER key and the value cha
 446:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY_ALWAYS=10,	///< Do the callback when the user presses the ENTER key, even if th
 447:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY_CHANGED=11	///< ?
 448:fltk-1.3.4-1/FL/Enumerations.H **** };
 449:fltk-1.3.4-1/FL/Enumerations.H **** 
 450:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: When Conditions
 451:fltk-1.3.4-1/FL/Enumerations.H **** 
 452:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Mouse and Keyboard Events
 453:fltk-1.3.4-1/FL/Enumerations.H **** 
 454:fltk-1.3.4-1/FL/Enumerations.H **** 	This and the following constants define the non-ASCII keys on the
 455:fltk-1.3.4-1/FL/Enumerations.H **** 	keyboard for FL_KEYBOARD and FL_SHORTCUT events.
 456:fltk-1.3.4-1/FL/Enumerations.H **** 
 457:fltk-1.3.4-1/FL/Enumerations.H **** 	\todo	FL_Button and FL_key... constants could be structured better
 458:fltk-1.3.4-1/FL/Enumerations.H **** 		(use an enum or some doxygen grouping ?)
 459:fltk-1.3.4-1/FL/Enumerations.H ****   
 460:fltk-1.3.4-1/FL/Enumerations.H **** 	\sa	Fl::event_key() and Fl::get_key(int) (use ascii letters for all other keys):
 461:fltk-1.3.4-1/FL/Enumerations.H ****  */
 462:fltk-1.3.4-1/FL/Enumerations.H **** 
 463:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 464:fltk-1.3.4-1/FL/Enumerations.H **** 
 465:fltk-1.3.4-1/FL/Enumerations.H **** // FIXME: These codes collide with valid Unicode keys
 466:fltk-1.3.4-1/FL/Enumerations.H **** 
 467:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Button	0xfee8	///< A mouse button; use Fl_Button + n for mouse button n.
 468:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BackSpace	0xff08	///< The backspace key.
 469:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Tab		0xff09	///< The tab key.
 470:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Iso_Key	0xff0c  ///< The additional key of ISO keyboards.
 471:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Enter	0xff0d	///< The enter key. 
 472:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Pause	0xff13	///< The pause key.
 473:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Scroll_Lock	0xff14	///< The scroll lock key.
 474:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Escape	0xff1b	///< The escape key.
 475:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Kana         0xff2e  ///< The Kana key of JIS keyboards.
 476:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Eisu         0xff2f  ///< The Eisu key of JIS keyboards.
 477:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Yen          0xff30  ///< The Yen key of JIS keyboards.
 478:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_JIS_Underscore 0xff31 ///< The underscore key of JIS keyboards.
 479:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Home		0xff50	///< The home key.
 480:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Left		0xff51	///< The left arrow key.
 481:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Up		0xff52	///< The up arrow key.
 482:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Right	0xff53	///< The right arrow key.
 483:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Down		0xff54	///< The down arrow key.
 484:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Page_Up	0xff55	///< The page-up key.
 485:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Page_Down	0xff56	///< The page-down key.
 486:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_End		0xff57	///< The end key.
 487:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Print	0xff61	///< The print (or print-screen) key.
 488:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Insert	0xff63	///< The insert key. 
 489:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Menu		0xff67	///< The menu key.
 490:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Help		0xff68	///< The 'help' key on Mac keyboards
 491:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Num_Lock	0xff7f	///< The num lock key.
 492:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP		0xff80	///< One of the keypad numbers; use FL_KP + 'n' for digit n.
 493:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP_Enter	0xff8d	///< The enter key on the keypad, same as Fl_KP+'\\r'.
 494:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP_Last	0xffbd	///< The last keypad key; use to range-check keypad.
 495:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_F		0xffbd	///< One of the function keys; use FL_F + n for function key n.
 496:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_F_Last	0xffe0	///< The last function key; use to range-check function keys.
 497:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Shift_L	0xffe1	///< The lefthand shift key.
 498:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Shift_R	0xffe2	///< The righthand shift key.
 499:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Control_L	0xffe3	///< The lefthand control key.
 500:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Control_R	0xffe4	///< The righthand control key.
 501:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Caps_Lock	0xffe5	///< The caps lock key.
 502:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Meta_L	0xffe7	///< The left meta/Windows key.
 503:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Meta_R	0xffe8	///< The right meta/Windows key.
 504:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Alt_L	0xffe9	///< The left alt key.
 505:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Alt_R	0xffea	///< The right alt key. 
 506:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Delete	0xffff	///< The delete key.
 507:fltk-1.3.4-1/FL/Enumerations.H **** 
 508:fltk-1.3.4-1/FL/Enumerations.H **** // These use the Private Use Area (PUA) of the Basic Multilingual Plane
 509:fltk-1.3.4-1/FL/Enumerations.H **** // of Unicode. Guaranteed not to conflict with a proper Unicode character.
 510:fltk-1.3.4-1/FL/Enumerations.H **** 
 511:fltk-1.3.4-1/FL/Enumerations.H **** // These primarily map to the XFree86 keysym range
 512:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Down  0xEF11   /* Volume control down        */
 513:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Mute  0xEF12   /* Mute sound from the system */
 514:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Up    0xEF13   /* Volume control up          */
 515:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Play   0xEF14   /* Start playing of audio     */
 516:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Stop   0xEF15   /* Stop playing audio         */
 517:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Prev   0xEF16   /* Previous track             */
 518:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Next   0xEF17   /* Next track                 */
 519:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Home_Page    0xEF18   /* Display user's home page   */
 520:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Mail         0xEF19   /* Invoke user's mail program */
 521:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Search       0xEF1B   /* Search                     */
 522:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Back         0xEF26   /* Like back on a browser     */
 523:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Forward      0xEF27   /* Like forward on a browser  */
 524:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Stop         0xEF28   /* Stop current operation     */
 525:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Refresh      0xEF29   /* Refresh the page           */
 526:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Sleep        0xEF2F   /* Put system to sleep        */
 527:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Favorites    0xEF30   /* Show favorite locations    */
 528:fltk-1.3.4-1/FL/Enumerations.H **** 
 529:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Mouse and Keyboard Events
 530:fltk-1.3.4-1/FL/Enumerations.H **** 
 531:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Mouse Buttons
 532:fltk-1.3.4-1/FL/Enumerations.H **** 
 533:fltk-1.3.4-1/FL/Enumerations.H **** 	These constants define the button numbers for FL_PUSH and FL_RELEASE events.
 534:fltk-1.3.4-1/FL/Enumerations.H **** 	
 535:fltk-1.3.4-1/FL/Enumerations.H **** 	\sa Fl::event_button()
 536:fltk-1.3.4-1/FL/Enumerations.H **** */
 537:fltk-1.3.4-1/FL/Enumerations.H **** 
 538:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 539:fltk-1.3.4-1/FL/Enumerations.H **** 
 540:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_LEFT_MOUSE	1	///< The left mouse button
 541:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MIDDLE_MOUSE	2	///< The middle mouse button
 542:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RIGHT_MOUSE	3	///< The right mouse button
 543:fltk-1.3.4-1/FL/Enumerations.H **** 
 544:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: Mouse Buttons
 545:fltk-1.3.4-1/FL/Enumerations.H **** 
 546:fltk-1.3.4-1/FL/Enumerations.H **** 
 547:fltk-1.3.4-1/FL/Enumerations.H **** /** \name	Event States
 548:fltk-1.3.4-1/FL/Enumerations.H **** 
 549:fltk-1.3.4-1/FL/Enumerations.H **** 	The following constants define bits in the Fl::event_state() value.
 550:fltk-1.3.4-1/FL/Enumerations.H **** */
 551:fltk-1.3.4-1/FL/Enumerations.H **** 
 552:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/		// group: Event States
 553:fltk-1.3.4-1/FL/Enumerations.H **** 
 554:fltk-1.3.4-1/FL/Enumerations.H **** // FIXME: it would be nice to have the modifiers in the upper 8 bit so that
 555:fltk-1.3.4-1/FL/Enumerations.H **** //        a unicode ke (24bit) can be sent as an unsigned with the modifiers.
 556:fltk-1.3.4-1/FL/Enumerations.H **** 
 557:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHIFT	0x00010000	///< One of the shift keys is down
 558:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CAPS_LOCK	0x00020000	///< The caps lock is on
 559:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CTRL		0x00040000	///< One of the ctrl keys is down
 560:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ALT		0x00080000	///< One of the alt keys is down
 561:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_LOCK	0x00100000	///< The num lock is on
 562:fltk-1.3.4-1/FL/Enumerations.H **** 					// most X servers do this?
 563:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_META		0x00400000	///< One of the meta/Windows keys is down
 564:fltk-1.3.4-1/FL/Enumerations.H **** 					// correct for XFree86
 565:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SCROLL_LOCK	0x00800000	///< The scroll lock is on
 566:fltk-1.3.4-1/FL/Enumerations.H **** 					// correct for XFree86
 567:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON1	0x01000000	///< Mouse button 1 is pushed
 568:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON2	0x02000000	///< Mouse button 2 is pushed
 569:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON3	0x04000000	///< Mouse button 3 is pushed
 570:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTONS	0x7f000000	///< Any mouse button is pushed
 571:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON(n)	(0x00800000<<(n)) ///< Mouse button n (n > 0) is pushed
 572:fltk-1.3.4-1/FL/Enumerations.H **** 
 573:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KEY_MASK 0x0000ffff		///< All keys are 16 bit for now 
 574:fltk-1.3.4-1/FL/Enumerations.H **** 					//   FIXME: Unicode needs 24 bits!
 575:fltk-1.3.4-1/FL/Enumerations.H **** 
 576:fltk-1.3.4-1/FL/Enumerations.H **** #ifdef __APPLE__
 577:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_COMMAND	FL_META		///< An alias for FL_CTRL on WIN32 and X11, or FL_META on MacOS X
 578:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_CONTROL 	FL_CTRL		///< An alias for FL_META on WIN32 and X11, or FL_CTRL on MacOS X
 579:fltk-1.3.4-1/FL/Enumerations.H **** #else
 580:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_COMMAND	FL_CTRL		///< An alias for FL_CTRL on WIN32 and X11, or FL_META on MacOS X
 581:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_CONTROL	FL_META		///< An alias for FL_META on WIN32 and X11, or FL_CTRL on MacOS X
 582:fltk-1.3.4-1/FL/Enumerations.H **** #endif // __APPLE__
 583:fltk-1.3.4-1/FL/Enumerations.H **** 
 584:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: Event States
 585:fltk-1.3.4-1/FL/Enumerations.H **** 
 586:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Box Types
 587:fltk-1.3.4-1/FL/Enumerations.H ****     \brief FLTK standard box types
 588:fltk-1.3.4-1/FL/Enumerations.H ****     
 589:fltk-1.3.4-1/FL/Enumerations.H ****     This enum defines the standard box types included with FLTK.
 590:fltk-1.3.4-1/FL/Enumerations.H ****     
 591:fltk-1.3.4-1/FL/Enumerations.H ****     FL_NO_BOX means nothing is drawn at all, so whatever is already 
 592:fltk-1.3.4-1/FL/Enumerations.H ****     on the screen remains. The FL_..._FRAME types only draw their edges, 
 593:fltk-1.3.4-1/FL/Enumerations.H ****     leaving the interior unchanged. The blue color in Figure 1 
 594:fltk-1.3.4-1/FL/Enumerations.H ****     is the area that is not drawn by the frame types.
 595:fltk-1.3.4-1/FL/Enumerations.H ****     
 596:fltk-1.3.4-1/FL/Enumerations.H ****     \image html boxtypes.png "Figure 1: FLTK standard box types"
 597:fltk-1.3.4-1/FL/Enumerations.H ****     \image latex boxtypes.png "FLTK standard box types" width=10cm
 598:fltk-1.3.4-1/FL/Enumerations.H ****     \todo	Description of boxtypes is incomplete.
 599:fltk-1.3.4-1/FL/Enumerations.H ****     		See below for the defined enum Fl_Boxtype.
 600:fltk-1.3.4-1/FL/Enumerations.H **** 		\see src/Fl_get_system_colors.cxx
 601:fltk-1.3.4-1/FL/Enumerations.H **** */
 602:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 603:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Boxtype { // boxtypes (if you change these you must fix fl_boxtype.cxx):
 604:fltk-1.3.4-1/FL/Enumerations.H **** 
 605:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_BOX = 0,		///< nothing is drawn at all, this box is invisible
 606:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FLAT_BOX,			///< a flat box
 607:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UP_BOX,			///< see figure 1
 608:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DOWN_BOX,			///< see figure 1
 609:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UP_FRAME,			///< see figure 1
 610:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DOWN_FRAME,		///< see figure 1
 611:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_UP_BOX,		///< see figure 1
 612:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_DOWN_BOX,		///< see figure 1
 613:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_UP_FRAME,		///< see figure 1
 614:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_DOWN_FRAME,		///< see figure 1
 615:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENGRAVED_BOX,		///< see figure 1
 616:fltk-1.3.4-1/FL/Enumerations.H ****   FL_EMBOSSED_BOX,		///< see figure 1
 617:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENGRAVED_FRAME,		///< see figure 1
 618:fltk-1.3.4-1/FL/Enumerations.H ****   FL_EMBOSSED_FRAME,		///< see figure 1
 619:fltk-1.3.4-1/FL/Enumerations.H ****   FL_BORDER_BOX,		///< see figure 1
 620:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_BOX,		///< see figure 1
 621:fltk-1.3.4-1/FL/Enumerations.H ****   FL_BORDER_FRAME,		///< see figure 1
 622:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_FRAME,		///< see figure 1
 623:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUNDED_BOX,		///< see figure 1
 624:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_RSHADOW_BOX,		///< see figure 1
 625:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUNDED_FRAME,		///< see figure 1
 626:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_RFLAT_BOX,		///< see figure 1
 627:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUND_UP_BOX,		///< see figure 1
 628:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUND_DOWN_BOX,		///< see figure 1
 629:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_DIAMOND_UP_BOX,		///< see figure 1
 630:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_DIAMOND_DOWN_BOX,		///< see figure 1
 631:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OVAL_BOX,			///< see figure 1
 632:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OSHADOW_BOX,		///< see figure 1
 633:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OVAL_FRAME,		///< see figure 1
 634:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OFLAT_BOX,		///< see figure 1
 635:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_UP_BOX,		///< plastic version of FL_UP_BOX
 636:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_DOWN_BOX,		///< plastic version of FL_DOWN_BOX
 637:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_UP_FRAME,		///< plastic version of FL_UP_FRAME
 638:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_DOWN_FRAME,	///< plastic version of FL_DOWN_FRAME
 639:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_THIN_UP_BOX,	///< plastic version of FL_THIN_UP_BOX
 640:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_THIN_DOWN_BOX,	///< plastic version of FL_THIN_DOWN_BOX
 641:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_ROUND_UP_BOX,	///< plastic version of FL_ROUND_UP_BOX
 642:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_ROUND_DOWN_BOX,	///< plastic version of FL_ROUND_DOWN_BOX
 643:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_UP_BOX,		///< gtk+ version of FL_UP_BOX
 644:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_DOWN_BOX,		///< gtk+ version of FL_DOWN_BOX
 645:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_UP_FRAME,		///< gtk+ version of FL_UP_FRAME
 646:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_DOWN_FRAME,		///< gtk+ version of FL_DOWN_FRAME
 647:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_UP_BOX,		///< gtk+ version of FL_THIN_UP_BOX
 648:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_DOWN_BOX,	///< gtk+ version of FL_THIN_DOWN_BOX
 649:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_UP_FRAME,	///< gtk+ version of FL_THIN_UP_FRAME
 650:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_DOWN_FRAME,	///< gtk+ version of FL_THIN_DOWN_FRAME
 651:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_ROUND_UP_BOX,		///< gtk+ version of FL_ROUND_UP_BOX
 652:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_ROUND_DOWN_BOX,	///< gtk+ version of FL_ROUND_DOWN_BOX
 653:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_UP_BOX,		///< gleam version of FL_UP_BOX
 654:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_DOWN_BOX,		///< gleam version of FL_DOWN_BOX
 655:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_UP_FRAME,		///< gleam version of FL_UP_FRAME
 656:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_DOWN_FRAME,		///< gleam version of FL_DOWN_FRAME
 657:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_THIN_UP_BOX,	///< gleam version of FL_THIN_UP_BOX
 658:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_THIN_DOWN_BOX,	///< gleam version of FL_THIN_DOWN_BOX
 659:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_ROUND_UP_BOX,	///< gleam version of FL_ROUND_UP_BOX
 660:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_ROUND_DOWN_BOX,	///< gleam version of FL_ROUND_DOWN_BOX
 661:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FREE_BOXTYPE		///< the first free box type for creation of new box types
 662:fltk-1.3.4-1/FL/Enumerations.H **** };
 663:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_ROUND_UP_BOX();
 664:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUND_UP_BOX fl_define_FL_ROUND_UP_BOX()
 665:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_ROUND_UP_BOX()+1)
 666:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_SHADOW_BOX();
 667:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_BOX fl_define_FL_SHADOW_BOX()
 668:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_FRAME (Fl_Boxtype)(fl_define_FL_SHADOW_BOX()+2)
 669:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_ROUNDED_BOX();
 670:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUNDED_BOX fl_define_FL_ROUNDED_BOX()
 671:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUNDED_FRAME (Fl_Boxtype)(fl_define_FL_ROUNDED_BOX()+2)
 672:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_RFLAT_BOX();
 673:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RFLAT_BOX fl_define_FL_RFLAT_BOX()
 674:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_RSHADOW_BOX();
 675:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RSHADOW_BOX fl_define_FL_RSHADOW_BOX()
 676:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_DIAMOND_BOX();
 677:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_UP_BOX fl_define_FL_DIAMOND_BOX()
 678:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_DIAMOND_BOX()+1)
 679:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_OVAL_BOX();
 680:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OVAL_BOX fl_define_FL_OVAL_BOX()
 681:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OSHADOW_BOX (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+1)
 682:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OVAL_FRAME (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+2)
 683:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OFLAT_BOX (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+3)
 684:fltk-1.3.4-1/FL/Enumerations.H **** 
 685:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_PLASTIC_UP_BOX();
 686:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_UP_BOX fl_define_FL_PLASTIC_UP_BOX()
 687:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+1)
 688:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_UP_FRAME (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+2)
 689:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+3)
 690:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+4)
 691:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+5)
 692:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+6)
 693:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+7)
 694:fltk-1.3.4-1/FL/Enumerations.H **** 
 695:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_GTK_UP_BOX();
 696:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_UP_BOX fl_define_FL_GTK_UP_BOX()
 697:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+1)
 698:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_UP_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+2)
 699:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+3)
 700:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+4)
 701:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+5)
 702:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_UP_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+6)
 703:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+7)
 704:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+8)
 705:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+9)
 706:fltk-1.3.4-1/FL/Enumerations.H **** 
 707:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_GLEAM_UP_BOX();
 708:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_UP_BOX fl_define_FL_GLEAM_UP_BOX()
 709:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+1)
 710:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_UP_FRAME (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+2)
 711:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+3)
 712:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+4)
 713:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+5)
 714:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+6)
 715:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+7)
 716:fltk-1.3.4-1/FL/Enumerations.H **** 
 717:fltk-1.3.4-1/FL/Enumerations.H **** // conversions of box types to other boxtypes:
 718:fltk-1.3.4-1/FL/Enumerations.H **** /**
 719:fltk-1.3.4-1/FL/Enumerations.H ****   Get the filled version of a frame.
 720:fltk-1.3.4-1/FL/Enumerations.H ****   If no filled version of a given frame exists, the behavior of this function
 721:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 722:fltk-1.3.4-1/FL/Enumerations.H ****  */
 723:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_box(Fl_Boxtype b) {
 724:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b<FL_UP_BOX||b%4>1)?b:(b-2));
 725:fltk-1.3.4-1/FL/Enumerations.H **** }
 726:fltk-1.3.4-1/FL/Enumerations.H **** /**
 727:fltk-1.3.4-1/FL/Enumerations.H ****   Get the "pressed" or "down" version of a box.
 728:fltk-1.3.4-1/FL/Enumerations.H ****   If no "down" version of a given box exists, the behavior of this function
 729:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 730:fltk-1.3.4-1/FL/Enumerations.H ****  */
 731:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_down(Fl_Boxtype b) {
 732:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b<FL_UP_BOX)?b:(b|1));
 733:fltk-1.3.4-1/FL/Enumerations.H **** }
 734:fltk-1.3.4-1/FL/Enumerations.H **** /**
 735:fltk-1.3.4-1/FL/Enumerations.H ****   Get the unfilled, frame only version of a box.
 736:fltk-1.3.4-1/FL/Enumerations.H ****   If no frame version of a given box exists, the behavior of this function
 737:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 738:fltk-1.3.4-1/FL/Enumerations.H ****  */
 739:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_frame(Fl_Boxtype b) {
 740:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b%4<2)?b:(b+2));
 741:fltk-1.3.4-1/FL/Enumerations.H **** }
 742:fltk-1.3.4-1/FL/Enumerations.H **** 
 743:fltk-1.3.4-1/FL/Enumerations.H **** // back-compatibility box types:
 744:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME FL_ENGRAVED_FRAME
 745:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME_BOX FL_ENGRAVED_BOX
 746:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CIRCLE_BOX FL_ROUND_DOWN_BOX
 747:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_BOX FL_DIAMOND_DOWN_BOX
 748:fltk-1.3.4-1/FL/Enumerations.H **** 
 749:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Box Types
 750:fltk-1.3.4-1/FL/Enumerations.H **** 
 751:fltk-1.3.4-1/FL/Enumerations.H **** /**
 752:fltk-1.3.4-1/FL/Enumerations.H ****    The labeltype() method sets the type of the label.
 753:fltk-1.3.4-1/FL/Enumerations.H **** 
 754:fltk-1.3.4-1/FL/Enumerations.H ****    The following standard label types are included:
 755:fltk-1.3.4-1/FL/Enumerations.H **** 
 756:fltk-1.3.4-1/FL/Enumerations.H ****    \todo	The doxygen comments are incomplete, and some labeltypes
 757:fltk-1.3.4-1/FL/Enumerations.H ****    	start with an underscore. Also, there are three
 758:fltk-1.3.4-1/FL/Enumerations.H **** 		external functions undocumented (yet):
 759:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_SHADOW_LABEL()
 760:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_ENGRAVED_LABEL()
 761:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_EMBOSSED_LABEL()
 762:fltk-1.3.4-1/FL/Enumerations.H **** */
 763:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Labeltype {	// labeltypes:
 764:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NORMAL_LABEL	= 0, ///< draws the text (0)
 765:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_LABEL,         ///< does nothing
 766:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_LABEL,    ///< draws a drop shadow under the text
 767:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ENGRAVED_LABEL,	 ///< draws edges as though the text is engraved
 768:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_EMBOSSED_LABEL,  ///< draws edges as though the text is raised
 769:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_MULTI_LABEL,     ///< draws a composite label \see Fl_Multi_Label
 770:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ICON_LABEL,      ///< draws the icon associated with the text
 771:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_IMAGE_LABEL,     ///< the label displays an "icon" based on a Fl_Image
 772:fltk-1.3.4-1/FL/Enumerations.H **** 
 773:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FREE_LABELTYPE    ///< first free labeltype to use for creating own labeltypes
 774:fltk-1.3.4-1/FL/Enumerations.H **** };
 775:fltk-1.3.4-1/FL/Enumerations.H **** 
 776:fltk-1.3.4-1/FL/Enumerations.H **** /** 
 777:fltk-1.3.4-1/FL/Enumerations.H ****   Sets the current label type and return its corresponding Fl_Labeltype value. 
 778:fltk-1.3.4-1/FL/Enumerations.H ****   @{
 779:fltk-1.3.4-1/FL/Enumerations.H **** */
 780:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SYMBOL_LABEL FL_NORMAL_LABEL
 781:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_SHADOW_LABEL();
 782:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_LABEL fl_define_FL_SHADOW_LABEL()
 783:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_ENGRAVED_LABEL();
 784:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ENGRAVED_LABEL fl_define_FL_ENGRAVED_LABEL()
 785:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_EMBOSSED_LABEL();
 786:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_EMBOSSED_LABEL fl_define_FL_EMBOSSED_LABEL()
 787:fltk-1.3.4-1/FL/Enumerations.H **** /** @} */
 788:fltk-1.3.4-1/FL/Enumerations.H **** 
 789:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Alignment Flags 
 790:fltk-1.3.4-1/FL/Enumerations.H ****     Flags to control the label alignment. 
 791:fltk-1.3.4-1/FL/Enumerations.H **** 
 792:fltk-1.3.4-1/FL/Enumerations.H ****     This controls how the label is displayed next to or inside the widget. 
 793:fltk-1.3.4-1/FL/Enumerations.H ****     The default value is FL_ALIGN_CENTER (0) for most widgets, which centers
 794:fltk-1.3.4-1/FL/Enumerations.H ****     the label inside the widget.
 795:fltk-1.3.4-1/FL/Enumerations.H **** 
 796:fltk-1.3.4-1/FL/Enumerations.H ****     Flags can be or'd to achieve a combination of alignments, but there
 797:fltk-1.3.4-1/FL/Enumerations.H ****     are some "magic values" (e.g. combinations of TOP and BOTTOM and of
 798:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT and RIGHT) that have special meanings (see below). For instance:<BR>
 799:fltk-1.3.4-1/FL/Enumerations.H ****     FL_ALIGN_TOP_LEFT == (FL_ALIGN_TOP|FL_ALIGN_LEFT) != FL_ALIGN_LEFT_TOP.
 800:fltk-1.3.4-1/FL/Enumerations.H **** 
 801:fltk-1.3.4-1/FL/Enumerations.H ****     \code
 802:fltk-1.3.4-1/FL/Enumerations.H ****     Outside alignments (FL_ALIGN_INSIDE is not set):
 803:fltk-1.3.4-1/FL/Enumerations.H **** 
 804:fltk-1.3.4-1/FL/Enumerations.H ****                TOP_LEFT        TOP       TOP_RIGHT
 805:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 806:fltk-1.3.4-1/FL/Enumerations.H ****        LEFT_TOP|                                 |RIGHT_TOP
 807:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 808:fltk-1.3.4-1/FL/Enumerations.H ****            LEFT|             CENTER              |RIGHT
 809:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 810:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT_BOTTOM|                                 |RIGHT_BOTTOM
 811:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 812:fltk-1.3.4-1/FL/Enumerations.H ****                BOTTOM_LEFT   BOTTOM   BOTTOM_RIGHT
 813:fltk-1.3.4-1/FL/Enumerations.H **** 
 814:fltk-1.3.4-1/FL/Enumerations.H ****     Inside alignments (FL_ALIGN_INSIDE is set):
 815:fltk-1.3.4-1/FL/Enumerations.H **** 
 816:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 817:fltk-1.3.4-1/FL/Enumerations.H ****                |TOP_LEFT       TOP      TOP_RIGHT|
 818:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 819:fltk-1.3.4-1/FL/Enumerations.H ****                |LEFT         CENTER         RIGHT|
 820:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 821:fltk-1.3.4-1/FL/Enumerations.H ****                |BOTTOM_LEFT  BOTTOM  BOTTOM_RIGHT|
 822:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 823:fltk-1.3.4-1/FL/Enumerations.H ****     \endcode
 824:fltk-1.3.4-1/FL/Enumerations.H ****     \see #FL_ALIGN_CENTER, etc.
 825:fltk-1.3.4-1/FL/Enumerations.H ****  */
 826:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 827:fltk-1.3.4-1/FL/Enumerations.H **** /** FLTK type for alignment control */
 828:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned Fl_Align;
 829:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label horizontally in the middle. */
 830:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CENTER		= (Fl_Align)0;
 831:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the top of the widget. Inside labels appear below the top,
 832:fltk-1.3.4-1/FL/Enumerations.H ****       outside labels are drawn on top of the widget. */
 833:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP		= (Fl_Align)1;
 834:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the bottom of the widget. */
 835:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM		= (Fl_Align)2;
 836:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the left of the widget. Inside labels appear left-justified
 837:fltk-1.3.4-1/FL/Enumerations.H ****       starting at the left side of the widget, outside labels are right-justified and
 838:fltk-1.3.4-1/FL/Enumerations.H ****       drawn to the left of the widget. */
 839:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT		= (Fl_Align)4;
 840:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label to the right of the widget. */
 841:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT		= (Fl_Align)8;
 842:fltk-1.3.4-1/FL/Enumerations.H ****   /** Draw the label inside of the widget. */
 843:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_INSIDE		= (Fl_Align)16;
 844:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text on top of the image. */
 845:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_OVER_IMAGE	= (Fl_Align)0x0020;
 846:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text below the image. */
 847:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_OVER_TEXT	= (Fl_Align)0x0000;
 848:fltk-1.3.4-1/FL/Enumerations.H ****   /** All parts of the label that are lager than the widget will not be drawn . */
 849:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CLIP		= (Fl_Align)64;
 850:fltk-1.3.4-1/FL/Enumerations.H ****   /** Wrap text that does not fit the width of the widget. */
 851:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_WRAP		= (Fl_Align)128;
 852:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the right of the image. */
 853:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_NEXT_TO_TEXT = (Fl_Align)0x0100;
 854:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the left of the image. */
 855:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_NEXT_TO_IMAGE = (Fl_Align)0x0120;
 856:fltk-1.3.4-1/FL/Enumerations.H **** /** If the label contains an image, draw the image or deimage in the background. */
 857:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_BACKDROP  = (Fl_Align)0x0200;
 858:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_LEFT	= FL_ALIGN_TOP | FL_ALIGN_LEFT;
 859:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_RIGHT	= FL_ALIGN_TOP | FL_ALIGN_RIGHT;
 860:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_LEFT	= FL_ALIGN_BOTTOM | FL_ALIGN_LEFT;
 861:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_RIGHT	= FL_ALIGN_BOTTOM | FL_ALIGN_RIGHT;
 862:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_TOP	= 0x0007; // magic value
 863:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_TOP	= 0x000b; // magic value
 864:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_BOTTOM	= 0x000d; // magic value
 865:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_BOTTOM	= 0x000e; // magic value
 866:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_NOWRAP		= (Fl_Align)0; // for back compatibility
 867:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_POSITION_MASK   = 0x000f; // left, right, top, bottom
 868:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_MASK      = 0x0320; // l/r, t/b, backdrop
 869:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 870:fltk-1.3.4-1/FL/Enumerations.H **** 
 871:fltk-1.3.4-1/FL/Enumerations.H **** 
 872:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Font Numbers
 873:fltk-1.3.4-1/FL/Enumerations.H ****     The following constants define the standard FLTK fonts:
 874:fltk-1.3.4-1/FL/Enumerations.H ****  */
 875:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 876:fltk-1.3.4-1/FL/Enumerations.H **** /** A font number is an index into the internal font table. */
 877:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Font;
 878:fltk-1.3.4-1/FL/Enumerations.H **** 
 879:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA              = 0;	///< Helvetica (or Arial) normal (0)
 880:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD         = 1;	///< Helvetica (or Arial) bold
 881:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_ITALIC       = 2;	///< Helvetica (or Arial) oblique
 882:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD_ITALIC  = 3;	///< Helvetica (or Arial) bold-oblique
 883:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER                = 4;	///< Courier normal
 884:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD           = 5;	///< Courier bold 
 885:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_ITALIC         = 6;	///< Courier italic
 886:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD_ITALIC    = 7;	///< Courier bold-italic
 887:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES                  = 8;	///< Times roman
 888:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD             = 9;	///< Times roman bold
 889:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_ITALIC           = 10;	///< Times roman italic
 890:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD_ITALIC      = 11;	///< Times roman bold-italic
 891:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SYMBOL                 = 12;	///< Standard symbol font
 892:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN                 = 13;	///< Default monospaced screen font
 893:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN_BOLD            = 14;	///< Default monospaced bold screen font
 894:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ZAPF_DINGBATS          = 15;	///< Zapf-dingbats font
 895:fltk-1.3.4-1/FL/Enumerations.H **** 
 896:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_FREE_FONT              = 16;	///< first one to allocate
 897:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD                   = 1;	///< add this to helvetica, courier, or times
 898:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ITALIC                 = 2;	///< add this to helvetica, courier, or times
 899:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD_ITALIC            = 3;	///< add this to helvetica, courier, or times
 900:fltk-1.3.4-1/FL/Enumerations.H **** 
 901:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 902:fltk-1.3.4-1/FL/Enumerations.H **** 
 903:fltk-1.3.4-1/FL/Enumerations.H **** /** Size of a font in pixels.
 904:fltk-1.3.4-1/FL/Enumerations.H ****     This is the approximate height of a font in pixels.
 905:fltk-1.3.4-1/FL/Enumerations.H ****  */
 906:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Fontsize;
 907:fltk-1.3.4-1/FL/Enumerations.H **** 
 908:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Fontsize FL_NORMAL_SIZE;	///< normal font size
 909:fltk-1.3.4-1/FL/Enumerations.H **** 
 910:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Colors 
 911:fltk-1.3.4-1/FL/Enumerations.H ****     The Fl_Color type holds an FLTK color value.
 912:fltk-1.3.4-1/FL/Enumerations.H **** 
 913:fltk-1.3.4-1/FL/Enumerations.H ****     Colors are either 8-bit indexes into a <a href="fltk-colormap.png">virtual colormap</a>
 914:fltk-1.3.4-1/FL/Enumerations.H ****     or 24-bit RGB color values. (See \ref drawing_colors for the default FLTK colormap)
 915:fltk-1.3.4-1/FL/Enumerations.H **** 
 916:fltk-1.3.4-1/FL/Enumerations.H ****     Color indices occupy the lower 8 bits of the value, while
 917:fltk-1.3.4-1/FL/Enumerations.H ****     RGB colors occupy the upper 24 bits, for a byte organization of RGBI.
 918:fltk-1.3.4-1/FL/Enumerations.H **** 
 919:fltk-1.3.4-1/FL/Enumerations.H **** <pre>
 920:fltk-1.3.4-1/FL/Enumerations.H ****  Fl_Color => 0xrrggbbii
 921:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | |
 922:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | +--- \ref drawing_colors "index" between 0 and 255
 923:fltk-1.3.4-1/FL/Enumerations.H ****                 | | +----- blue color component (8 bit)
 924:fltk-1.3.4-1/FL/Enumerations.H ****                 | +------- green component (8 bit)
 925:fltk-1.3.4-1/FL/Enumerations.H ****                 +--------- red component (8 bit)
 926:fltk-1.3.4-1/FL/Enumerations.H ****  </pre>
 927:fltk-1.3.4-1/FL/Enumerations.H **** 
 928:fltk-1.3.4-1/FL/Enumerations.H ****     A color can have either an index or an rgb value. Colors with rgb set 
 929:fltk-1.3.4-1/FL/Enumerations.H ****     and an index >0 are reserved for special use.
 930:fltk-1.3.4-1/FL/Enumerations.H **** 
 931:fltk-1.3.4-1/FL/Enumerations.H ****  */
 932:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 933:fltk-1.3.4-1/FL/Enumerations.H **** /** An FLTK color value; see also \ref drawing_colors  */
 934:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned int Fl_Color;
 935:fltk-1.3.4-1/FL/Enumerations.H **** 
 936:fltk-1.3.4-1/FL/Enumerations.H **** // Standard colors. These are used as default colors in widgets and altered as necessary
 937:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_FOREGROUND_COLOR  = 0;	///< the default foreground color (0) used for labels and 
 938:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND2_COLOR = 7;	///< the default background color for text, list, and valu
 939:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_INACTIVE_COLOR    = 8;	///< the inactive foreground color
 940:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_SELECTION_COLOR   = 15;	///< the default selection/highlight color
 941:fltk-1.3.4-1/FL/Enumerations.H **** 
 942:fltk-1.3.4-1/FL/Enumerations.H ****   // boxtypes generally limit themselves to these colors so
 943:fltk-1.3.4-1/FL/Enumerations.H ****   // the whole ramp is not allocated:
 944:fltk-1.3.4-1/FL/Enumerations.H **** 
 945:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GRAY0   = 32;			// 'A'
 946:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK3   = 39;			// 'H'
 947:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK2   = 45;			// 'N'
 948:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK1   = 47;			// 'P'
 949:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND_COLOR  = 49;	// 'R' default background color
 950:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT1  = 50;			// 'S'
 951:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT2  = 52;			// 'U'
 952:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT3  = 54;			// 'W'
 953:fltk-1.3.4-1/FL/Enumerations.H **** 
 954:fltk-1.3.4-1/FL/Enumerations.H ****   // FLTK provides a 5x8x5 color cube that is used with colormap visuals
 955:fltk-1.3.4-1/FL/Enumerations.H **** 
 956:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLACK   = 56;
 957:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_RED     = 88;
 958:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GREEN   = 63;
 959:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_YELLOW  = 95;
 960:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLUE    = 216;
 961:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_MAGENTA = 248;
 962:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_CYAN    = 223;
 963:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_RED = 72;
 964:fltk-1.3.4-1/FL/Enumerations.H **** 
 965:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_GREEN    = 60;
 966:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_YELLOW   = 76;
 967:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_BLUE     = 136;
 968:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_MAGENTA  = 152;
 969:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_CYAN     = 140;
 970:fltk-1.3.4-1/FL/Enumerations.H **** 
 971:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_WHITE         = 255;
 972:fltk-1.3.4-1/FL/Enumerations.H **** 
 973:fltk-1.3.4-1/FL/Enumerations.H **** 
 974:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FREE_COLOR     (Fl_Color)16
 975:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_FREE_COLOR 16
 976:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY_RAMP      (Fl_Color)32
 977:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GRAY       24
 978:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY           FL_BACKGROUND_COLOR
 979:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_COLOR_CUBE     (Fl_Color)56
 980:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_RED        5
 981:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GREEN      8
 982:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_BLUE       5
 983:fltk-1.3.4-1/FL/Enumerations.H **** 
 984:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_inactive(Fl_Color c);
 985:fltk-1.3.4-1/FL/Enumerations.H **** 
 986:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_contrast(Fl_Color fg, Fl_Color bg);
 987:fltk-1.3.4-1/FL/Enumerations.H **** 
 988:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_color_average(Fl_Color c1, Fl_Color c2, float weight);
 989:fltk-1.3.4-1/FL/Enumerations.H **** 
 990:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a lighter version of the specified color. */
 991:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_lighter(Fl_Color c) { return fl_color_average(c, FL_WHITE, .67f); }
 992:fltk-1.3.4-1/FL/Enumerations.H **** 
 993:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a darker version of the specified color. */
 994:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_darker(Fl_Color c) { return fl_color_average(c, FL_BLACK, .67f); }
 380              		.loc 3 994 0
 381 0004 BE380000 		movl	$56, %esi
 381      00
 382 0009 F30F1005 		movss	.LC8(%rip), %xmm0
 382      00000000 
 383 0011 E8000000 		call	_Z16fl_color_averagejjf
 383      00
 384              	.LVL33:
 385              	.LBE1227:
 386              	.LBE1226:
 387              	.LBB1228:
 388              	.LBB1229:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 389              		.loc 2 52 0
 390 0016 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 390      000000
 391 001d 89C6     		movl	%eax, %esi
 392 001f 488B17   		movq	(%rdi), %rdx
 393 0022 488B9288 		movq	136(%rdx), %rdx
 393      000000
 394              	.LBE1229:
 395              	.LBE1228:
 396              		.loc 1 184 0
 397 0029 4883C408 		addq	$8, %rsp
 398              		.cfi_def_cfa_offset 8
 399              	.LBB1231:
 400              	.LBB1230:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 401              		.loc 2 52 0
 402 002d FFE2     		jmp	*%rdx
 403              	.LVL34:
 404              	.LBE1230:
 405              	.LBE1231:
 406              		.cfi_endproc
 407              	.LFE488:
 409              		.section	.text.unlikely._ZL17set_outline_colorj
 410              	.LCOLDE9:
 411              		.section	.text._ZL17set_outline_colorj
 412              	.LHOTE9:
 413              		.section	.text.unlikely._ZL11draw_searchj,"ax",@progbits
 414              	.LCOLDB19:
 415              		.section	.text._ZL11draw_searchj,"ax",@progbits
 416              	.LHOTB19:
 417              		.p2align 4,,15
 419              	_ZL11draw_searchj:
 420              	.LFB491:
 421              		.loc 1 230 0
 422              		.cfi_startproc
 423              	.LVL35:
 424 0000 53       		pushq	%rbx
 425              		.cfi_def_cfa_offset 16
 426              		.cfi_offset 3, -16
 427              		.loc 1 230 0
 428 0001 89FB     		movl	%edi, %ebx
 429              	.LVL36:
 430              	.LBB1232:
 431              	.LBB1233:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 432              		.loc 2 52 0
 433 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 433      000000
 434              	.LVL37:
 435 000a 89DE     		movl	%ebx, %esi
 436 000c 488B07   		movq	(%rdi), %rax
 437 000f FF908800 		call	*136(%rax)
 437      0000
 438              	.LVL38:
 439              	.LBE1233:
 440              	.LBE1232:
 441              	.LBB1234:
 442              	.LBB1235:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 443              		.loc 2 374 0
 444 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 444      000000
 445 001c 488B07   		movq	(%rdi), %rax
 446 001f FF90D800 		call	*216(%rax)
 446      0000
 447              	.LVL39:
 448              	.LBE1235:
 449              	.LBE1234:
 450              	.LBB1236:
 451              	.LBB1237:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 452              		.loc 2 379 0
 453 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 453      000000
 454 002c F20F100D 		movsd	.LC10(%rip), %xmm1
 454      00000000 
 455 0034 F20F1005 		movsd	.LC11(%rip), %xmm0
 455      00000000 
 456 003c 488B07   		movq	(%rdi), %rax
 457 003f FF90E000 		call	*224(%rax)
 457      0000
 458              	.LVL40:
 459              	.LBE1237:
 460              	.LBE1236:
 461              	.LBB1238:
 462              	.LBB1239:
 463 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 463      000000
 464 004c F20F100D 		movsd	.LC12(%rip), %xmm1
 464      00000000 
 465 0054 F20F1005 		movsd	.LC1(%rip), %xmm0
 465      00000000 
 466 005c 488B07   		movq	(%rdi), %rax
 467 005f FF90E000 		call	*224(%rax)
 467      0000
 468              	.LVL41:
 469              	.LBE1239:
 470              	.LBE1238:
 471              	.LBB1240:
 472              	.LBB1241:
 473 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 473      000000
 474 006c F20F100D 		movsd	.LC2(%rip), %xmm1
 474      00000000 
 475 0074 F20F1005 		movsd	.LC13(%rip), %xmm0
 475      00000000 
 476 007c 488B07   		movq	(%rdi), %rax
 477 007f FF90E000 		call	*224(%rax)
 477      0000
 478              	.LVL42:
 479              	.LBE1241:
 480              	.LBE1240:
 481              	.LBB1242:
 482              	.LBB1243:
 483 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 483      000000
 484 008c F20F100D 		movsd	.LC14(%rip), %xmm1
 484      00000000 
 485 0094 F20F1005 		movsd	.LC15(%rip), %xmm0
 485      00000000 
 486 009c 488B07   		movq	(%rdi), %rax
 487 009f FF90E000 		call	*224(%rax)
 487      0000
 488              	.LVL43:
 489              	.LBE1243:
 490              	.LBE1242:
 491              	.LBB1244:
 492              	.LBB1245:
 433:fltk-1.3.4-1/FL/fl_draw.H **** /**
 434:fltk-1.3.4-1/FL/fl_draw.H ****  Ends closed sequence of lines, and draws.
 435:fltk-1.3.4-1/FL/fl_draw.H ****  */
 436:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_loop() {fl_graphics_driver->end_loop(); }
 437:fltk-1.3.4-1/FL/fl_draw.H **** /**
 438:fltk-1.3.4-1/FL/fl_draw.H ****  Ends convex filled polygon, and draws.
 439:fltk-1.3.4-1/FL/fl_draw.H ****  */
 440:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_polygon() {fl_graphics_driver->end_polygon(); }
 493              		.loc 2 440 0
 494 00a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 494      000000
 495 00ac 488B07   		movq	(%rdi), %rax
 496 00af FF902801 		call	*296(%rax)
 496      0000
 497              	.LVL44:
 498              	.LBE1245:
 499              	.LBE1244:
 500              		.loc 1 233 0
 501 00b5 89DF     		movl	%ebx, %edi
 502 00b7 E8000000 		call	_ZL17set_outline_colorj
 502      00
 503              	.LVL45:
 504              	.LBB1246:
 505              	.LBB1247:
 177:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 506              		.loc 2 177 0
 507 00bc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 507      000000
 508 00c3 31C9     		xorl	%ecx, %ecx
 509 00c5 BA030000 		movl	$3, %edx
 509      00
 510 00ca 31F6     		xorl	%esi, %esi
 511 00cc 488B07   		movq	(%rdi), %rax
 512 00cf FF5028   		call	*40(%rax)
 513              	.LVL46:
 514              	.LBE1247:
 515              	.LBE1246:
 516              	.LBB1248:
 517              	.LBB1249:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 518              		.loc 2 370 0
 519 00d2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 519      000000
 520 00d9 488B07   		movq	(%rdi), %rax
 521 00dc FF90D000 		call	*208(%rax)
 521      0000
 522              	.LVL47:
 523              	.LBE1249:
 524              	.LBE1248:
 525              	.LBB1250:
 526              	.LBB1251:
 424:fltk-1.3.4-1/FL/fl_draw.H **** /**
 527              		.loc 2 424 0
 528 00e2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 528      000000
 529 00e9 F20F1015 		movsd	.LC16(%rip), %xmm2
 529      00000000 
 530 00f1 F20F100D 		movsd	.LC17(%rip), %xmm1
 530      00000000 
 531 00f9 F20F1005 		movsd	.LC18(%rip), %xmm0
 531      00000000 
 532 0101 488B07   		movq	(%rdi), %rax
 533 0104 FF90F000 		call	*240(%rax)
 533      0000
 534              	.LVL48:
 535              	.LBE1251:
 536              	.LBE1250:
 537              	.LBB1252:
 538              	.LBB1253:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 539              		.loc 2 436 0
 540 010a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 540      000000
 541 0111 488B07   		movq	(%rdi), %rax
 542 0114 FF902001 		call	*288(%rax)
 542      0000
 543              	.LVL49:
 544              	.LBE1253:
 545              	.LBE1252:
 546              	.LBB1254:
 547              	.LBB1255:
 177:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 548              		.loc 2 177 0
 549 011a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 549      000000
 550 0121 31C9     		xorl	%ecx, %ecx
 551 0123 BA010000 		movl	$1, %edx
 551      00
 552 0128 31F6     		xorl	%esi, %esi
 553 012a 488B07   		movq	(%rdi), %rax
 554 012d FF5028   		call	*40(%rax)
 555              	.LVL50:
 556              	.LBE1255:
 557              	.LBE1254:
 558              	.LBB1256:
 559              	.LBB1257:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 560              		.loc 2 370 0
 561 0130 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 561      000000
 562 0137 488B07   		movq	(%rdi), %rax
 563 013a FF90D000 		call	*208(%rax)
 563      0000
 564              	.LVL51:
 565              	.LBE1257:
 566              	.LBE1256:
 567              	.LBB1258:
 568              	.LBB1259:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 569              		.loc 2 379 0
 570 0140 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 570      000000
 571 0147 F20F100D 		movsd	.LC10(%rip), %xmm1
 571      00000000 
 572 014f F20F1005 		movsd	.LC11(%rip), %xmm0
 572      00000000 
 573 0157 488B07   		movq	(%rdi), %rax
 574 015a FF90E000 		call	*224(%rax)
 574      0000
 575              	.LVL52:
 576              	.LBE1259:
 577              	.LBE1258:
 578              	.LBB1260:
 579              	.LBB1261:
 580 0160 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 580      000000
 581 0167 F20F100D 		movsd	.LC12(%rip), %xmm1
 581      00000000 
 582 016f F20F1005 		movsd	.LC1(%rip), %xmm0
 582      00000000 
 583 0177 488B07   		movq	(%rdi), %rax
 584 017a FF90E000 		call	*224(%rax)
 584      0000
 585              	.LVL53:
 586              	.LBE1261:
 587              	.LBE1260:
 588              	.LBB1262:
 589              	.LBB1263:
 590 0180 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 590      000000
 591 0187 F20F100D 		movsd	.LC2(%rip), %xmm1
 591      00000000 
 592 018f F20F1005 		movsd	.LC13(%rip), %xmm0
 592      00000000 
 593 0197 488B07   		movq	(%rdi), %rax
 594 019a FF90E000 		call	*224(%rax)
 594      0000
 595              	.LVL54:
 596              	.LBE1263:
 597              	.LBE1262:
 598              	.LBB1264:
 599              	.LBB1265:
 600 01a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 600      000000
 601 01a7 F20F100D 		movsd	.LC14(%rip), %xmm1
 601      00000000 
 602 01af F20F1005 		movsd	.LC15(%rip), %xmm0
 602      00000000 
 603 01b7 488B07   		movq	(%rdi), %rax
 604 01ba FF90E000 		call	*224(%rax)
 604      0000
 605              	.LVL55:
 606              	.LBE1265:
 607              	.LBE1264:
 608              	.LBB1266:
 609              	.LBB1267:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 610              		.loc 2 436 0
 611 01c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 611      000000
 612              	.LBE1267:
 613              	.LBE1266:
 614              		.loc 1 238 0
 615 01c7 5B       		popq	%rbx
 616              		.cfi_def_cfa_offset 8
 617              	.LVL56:
 618              	.LBB1269:
 619              	.LBB1268:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 620              		.loc 2 436 0
 621 01c8 488B07   		movq	(%rdi), %rax
 622 01cb 488B8020 		movq	288(%rax), %rax
 622      010000
 623 01d2 FFE0     		jmp	*%rax
 624              	.LVL57:
 625              	.LBE1268:
 626              	.LBE1269:
 627              		.cfi_endproc
 628              	.LFE491:
 630              		.section	.text.unlikely._ZL11draw_searchj
 631              	.LCOLDE19:
 632              		.section	.text._ZL11draw_searchj
 633              	.LHOTE19:
 634              		.section	.text.unlikely._ZL9rectangleddddj,"ax",@progbits
 635              	.LCOLDB20:
 636              		.section	.text._ZL9rectangleddddj,"ax",@progbits
 637              	.LHOTB20:
 638              		.p2align 4,,15
 640              	_ZL9rectangleddddj:
 641              	.LFB489:
 642              		.loc 1 186 0
 643              		.cfi_startproc
 644              	.LVL58:
 645 0000 53       		pushq	%rbx
 646              		.cfi_def_cfa_offset 16
 647              		.cfi_offset 3, -16
 648 0001 89FB     		movl	%edi, %ebx
 649              	.LVL59:
 650              	.LBB1270:
 651              	.LBB1271:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 652              		.loc 2 52 0
 653 0003 89DE     		movl	%ebx, %esi
 654              	.LBE1271:
 655              	.LBE1270:
 656              		.loc 1 186 0
 657 0005 4883EC20 		subq	$32, %rsp
 658              		.cfi_def_cfa_offset 48
 659              	.LBB1275:
 660              	.LBB1272:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 661              		.loc 2 52 0
 662 0009 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 662      000000
 663              	.LVL60:
 664              	.LBE1272:
 665              	.LBE1275:
 666              		.loc 1 186 0
 667 0010 F20F1154 		movsd	%xmm2, 16(%rsp)
 667      2410
 668 0016 F20F115C 		movsd	%xmm3, 24(%rsp)
 668      2418
 669              	.LBB1276:
 670              	.LBB1273:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 671              		.loc 2 52 0
 672 001c 488B07   		movq	(%rdi), %rax
 673              	.LBE1273:
 674              	.LBE1276:
 675              		.loc 1 186 0
 676 001f F20F1104 		movsd	%xmm0, (%rsp)
 676      24
 677 0024 F20F114C 		movsd	%xmm1, 8(%rsp)
 677      2408
 678              	.LBB1277:
 679              	.LBB1274:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 680              		.loc 2 52 0
 681 002a FF908800 		call	*136(%rax)
 681      0000
 682              	.LVL61:
 683              	.LBE1274:
 684              	.LBE1277:
 685              	.LBB1278:
 686              	.LBB1279:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 687              		.loc 2 374 0
 688 0030 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 688      000000
 689 0037 488B07   		movq	(%rdi), %rax
 690 003a FF90D800 		call	*216(%rax)
 690      0000
 691              	.LVL62:
 692              	.LBE1279:
 693              	.LBE1278:
 694              	.LBB1280:
 695              	.LBB1281:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 696              		.loc 2 379 0
 697 0040 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 697      000000
 698 0047 F20F104C 		movsd	8(%rsp), %xmm1
 698      2408
 699 004d F20F1004 		movsd	(%rsp), %xmm0
 699      24
 700 0052 488B07   		movq	(%rdi), %rax
 701 0055 FF90E000 		call	*224(%rax)
 701      0000
 702              	.LVL63:
 703              	.LBE1281:
 704              	.LBE1280:
 705              	.LBB1282:
 706              	.LBB1283:
 707 005b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 707      000000
 708 0062 F20F104C 		movsd	8(%rsp), %xmm1
 708      2408
 709 0068 F20F1044 		movsd	16(%rsp), %xmm0
 709      2410
 710 006e 488B07   		movq	(%rdi), %rax
 711 0071 FF90E000 		call	*224(%rax)
 711      0000
 712              	.LVL64:
 713              	.LBE1283:
 714              	.LBE1282:
 715              	.LBB1284:
 716              	.LBB1285:
 717 0077 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 717      000000
 718 007e F20F104C 		movsd	24(%rsp), %xmm1
 718      2418
 719 0084 F20F1044 		movsd	16(%rsp), %xmm0
 719      2410
 720 008a 488B07   		movq	(%rdi), %rax
 721 008d FF90E000 		call	*224(%rax)
 721      0000
 722              	.LVL65:
 723              	.LBE1285:
 724              	.LBE1284:
 725              	.LBB1286:
 726              	.LBB1287:
 727 0093 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 727      000000
 728 009a F20F104C 		movsd	24(%rsp), %xmm1
 728      2418
 729 00a0 F20F1004 		movsd	(%rsp), %xmm0
 729      24
 730 00a5 488B07   		movq	(%rdi), %rax
 731 00a8 FF90E000 		call	*224(%rax)
 731      0000
 732              	.LVL66:
 733              	.LBE1287:
 734              	.LBE1286:
 735              	.LBB1288:
 736              	.LBB1289:
 737              		.loc 2 440 0
 738 00ae 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 738      000000
 739 00b5 488B07   		movq	(%rdi), %rax
 740 00b8 FF902801 		call	*296(%rax)
 740      0000
 741              	.LVL67:
 742              	.LBE1289:
 743              	.LBE1288:
 744              		.loc 1 189 0
 745 00be 89DF     		movl	%ebx, %edi
 746 00c0 E8000000 		call	_ZL17set_outline_colorj
 746      00
 747              	.LVL68:
 748              	.LBB1290:
 749              	.LBB1291:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 750              		.loc 2 370 0
 751 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 751      000000
 752 00cc 488B07   		movq	(%rdi), %rax
 753 00cf FF90D000 		call	*208(%rax)
 753      0000
 754              	.LVL69:
 755              	.LBE1291:
 756              	.LBE1290:
 757              	.LBB1292:
 758              	.LBB1293:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 759              		.loc 2 379 0
 760 00d5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 760      000000
 761 00dc F20F104C 		movsd	8(%rsp), %xmm1
 761      2408
 762 00e2 F20F1004 		movsd	(%rsp), %xmm0
 762      24
 763 00e7 488B07   		movq	(%rdi), %rax
 764 00ea FF90E000 		call	*224(%rax)
 764      0000
 765              	.LVL70:
 766              	.LBE1293:
 767              	.LBE1292:
 768              	.LBB1294:
 769              	.LBB1295:
 770 00f0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 770      000000
 771 00f7 F20F104C 		movsd	8(%rsp), %xmm1
 771      2408
 772 00fd F20F1044 		movsd	16(%rsp), %xmm0
 772      2410
 773 0103 488B07   		movq	(%rdi), %rax
 774 0106 FF90E000 		call	*224(%rax)
 774      0000
 775              	.LVL71:
 776              	.LBE1295:
 777              	.LBE1294:
 778              	.LBB1296:
 779              	.LBB1297:
 780 010c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 780      000000
 781 0113 F20F104C 		movsd	24(%rsp), %xmm1
 781      2418
 782 0119 F20F1044 		movsd	16(%rsp), %xmm0
 782      2410
 783 011f 488B07   		movq	(%rdi), %rax
 784 0122 FF90E000 		call	*224(%rax)
 784      0000
 785              	.LVL72:
 786              	.LBE1297:
 787              	.LBE1296:
 788              	.LBB1298:
 789              	.LBB1299:
 790 0128 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 790      000000
 791 012f F20F104C 		movsd	24(%rsp), %xmm1
 791      2418
 792 0135 F20F1004 		movsd	(%rsp), %xmm0
 792      24
 793 013a 488B07   		movq	(%rdi), %rax
 794 013d FF90E000 		call	*224(%rax)
 794      0000
 795              	.LVL73:
 796              	.LBE1299:
 797              	.LBE1298:
 798              	.LBB1300:
 799              	.LBB1301:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 800              		.loc 2 436 0
 801 0143 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 801      000000
 802 014a 488B07   		movq	(%rdi), %rax
 803 014d 488B8020 		movq	288(%rax), %rax
 803      010000
 804              	.LBE1301:
 805              	.LBE1300:
 806              		.loc 1 191 0
 807 0154 4883C420 		addq	$32, %rsp
 808              		.cfi_def_cfa_offset 16
 809              	.LVL74:
 810 0158 5B       		popq	%rbx
 811              		.cfi_def_cfa_offset 8
 812              	.LVL75:
 813              	.LBB1303:
 814              	.LBB1302:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 815              		.loc 2 436 0
 816 0159 FFE0     		jmp	*%rax
 817              	.LVL76:
 818              	.LBE1302:
 819              	.LBE1303:
 820              		.cfi_endproc
 821              	.LFE489:
 823              		.section	.text.unlikely._ZL9rectangleddddj
 824              	.LCOLDE20:
 825              		.section	.text._ZL9rectangleddddj
 826              	.LHOTE20:
 827              		.section	.text.unlikely._ZL14draw_doublebarj,"ax",@progbits
 828              	.LCOLDB24:
 829              		.section	.text._ZL14draw_doublebarj,"ax",@progbits
 830              	.LHOTB24:
 831              		.p2align 4,,15
 833              	_ZL14draw_doublebarj:
 834              	.LFB499:
 835              		.loc 1 304 0
 836              		.cfi_startproc
 837              	.LVL77:
 838 0000 53       		pushq	%rbx
 839              		.cfi_def_cfa_offset 16
 840              		.cfi_offset 3, -16
 841              		.loc 1 305 0
 842 0001 F20F101D 		movsd	.LC4(%rip), %xmm3
 842      00000000 
 843 0009 F20F1015 		movsd	.LC21(%rip), %xmm2
 843      00000000 
 844              		.loc 1 304 0
 845 0011 89FB     		movl	%edi, %ebx
 846              		.loc 1 305 0
 847 0013 F20F100D 		movsd	.LC5(%rip), %xmm1
 847      00000000 
 848 001b F20F1005 		movsd	.LC22(%rip), %xmm0
 848      00000000 
 849 0023 E8000000 		call	_ZL9rectangleddddj
 849      00
 850              	.LVL78:
 851              		.loc 1 306 0
 852 0028 89DF     		movl	%ebx, %edi
 853 002a F20F101D 		movsd	.LC4(%rip), %xmm3
 853      00000000 
 854              		.loc 1 307 0
 855 0032 5B       		popq	%rbx
 856              		.cfi_def_cfa_offset 8
 857              	.LVL79:
 858              		.loc 1 306 0
 859 0033 F20F1015 		movsd	.LC16(%rip), %xmm2
 859      00000000 
 860 003b F20F100D 		movsd	.LC5(%rip), %xmm1
 860      00000000 
 861 0043 F20F1005 		movsd	.LC23(%rip), %xmm0
 861      00000000 
 862 004b E9000000 		jmp	_ZL9rectangleddddj
 862      00
 863              	.LVL80:
 864              		.cfi_endproc
 865              	.LFE499:
 867              		.section	.text.unlikely._ZL14draw_doublebarj
 868              	.LCOLDE24:
 869              		.section	.text._ZL14draw_doublebarj
 870              	.LHOTE24:
 871              		.section	.text.unlikely._ZL9draw_menuj,"ax",@progbits
 872              	.LCOLDB29:
 873              		.section	.text._ZL9draw_menuj,"ax",@progbits
 874              	.LHOTB29:
 875              		.p2align 4,,15
 877              	_ZL9draw_menuj:
 878              	.LFB514:
 879              		.loc 1 389 0
 880              		.cfi_startproc
 881              	.LVL81:
 882 0000 53       		pushq	%rbx
 883              		.cfi_def_cfa_offset 16
 884              		.cfi_offset 3, -16
 885              		.loc 1 390 0
 886 0001 F20F101D 		movsd	.LC25(%rip), %xmm3
 886      00000000 
 887 0009 F20F1015 		movsd	.LC26(%rip), %xmm2
 887      00000000 
 888              		.loc 1 389 0
 889 0011 89FB     		movl	%edi, %ebx
 890              		.loc 1 390 0
 891 0013 F20F100D 		movsd	.LC27(%rip), %xmm1
 891      00000000 
 892 001b F20F1005 		movsd	.LC28(%rip), %xmm0
 892      00000000 
 893 0023 E8000000 		call	_ZL9rectangleddddj
 893      00
 894              	.LVL82:
 895              		.loc 1 391 0
 896 0028 89DF     		movl	%ebx, %edi
 897 002a F20F101D 		movsd	.LC1(%rip), %xmm3
 897      00000000 
 898              		.loc 1 392 0
 899 0032 5B       		popq	%rbx
 900              		.cfi_def_cfa_offset 8
 901              	.LVL83:
 902              		.loc 1 391 0
 903 0033 F20F1015 		movsd	.LC26(%rip), %xmm2
 903      00000000 
 904 003b F20F100D 		movsd	.LC22(%rip), %xmm1
 904      00000000 
 905 0043 F20F1005 		movsd	.LC28(%rip), %xmm0
 905      00000000 
 906 004b E9000000 		jmp	_ZL9rectangleddddj
 906      00
 907              	.LVL84:
 908              		.cfi_endproc
 909              	.LFE514:
 911              		.section	.text.unlikely._ZL9draw_menuj
 912              	.LCOLDE29:
 913              		.section	.text._ZL9draw_menuj
 914              	.LHOTE29:
 915              		.section	.text.unlikely._ZL11draw_squarej,"ax",@progbits
 916              	.LCOLDB30:
 917              		.section	.text._ZL11draw_squarej,"ax",@progbits
 918              	.LHOTB30:
 919              		.p2align 4,,15
 921              	_ZL11draw_squarej:
 922              	.LFB508:
 923              		.loc 1 350 0
 924              		.cfi_startproc
 925              	.LVL85:
 926              		.loc 1 350 0
 927 0000 F20F101D 		movsd	.LC2(%rip), %xmm3
 927      00000000 
 928 0008 F20F100D 		movsd	.LC1(%rip), %xmm1
 928      00000000 
 929 0010 660F28D3 		movapd	%xmm3, %xmm2
 930 0014 660F28C1 		movapd	%xmm1, %xmm0
 931 0018 E9000000 		jmp	_ZL9rectangleddddj
 931      00
 932              	.LVL86:
 933              		.cfi_endproc
 934              	.LFE508:
 936              		.section	.text.unlikely._ZL11draw_squarej
 937              	.LCOLDE30:
 938              		.section	.text._ZL11draw_squarej
 939              	.LHOTE30:
 940              		.section	.text.unlikely._ZL11draw_circlej,"ax",@progbits
 941              	.LCOLDB31:
 942              		.section	.text._ZL11draw_circlej,"ax",@progbits
 943              	.LHOTB31:
 944              		.p2align 4,,15
 946              	_ZL11draw_circlej:
 947              	.LFB509:
 948              		.loc 1 352 0
 949              		.cfi_startproc
 950              	.LVL87:
 951 0000 53       		pushq	%rbx
 952              		.cfi_def_cfa_offset 16
 953              		.cfi_offset 3, -16
 954              		.loc 1 352 0
 955 0001 89FB     		movl	%edi, %ebx
 956              	.LVL88:
 957              	.LBB1304:
 958              	.LBB1305:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 959              		.loc 2 52 0
 960 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 960      000000
 961              	.LVL89:
 962 000a 89DE     		movl	%ebx, %esi
 963 000c 488B07   		movq	(%rdi), %rax
 964 000f FF908800 		call	*136(%rax)
 964      0000
 965              	.LVL90:
 966              	.LBE1305:
 967              	.LBE1304:
 968              	.LBB1306:
 969              	.LBB1307:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 970              		.loc 2 374 0
 971 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 971      000000
 972 001c 488B07   		movq	(%rdi), %rax
 973 001f FF90D800 		call	*216(%rax)
 973      0000
 974              	.LVL91:
 975              	.LBE1307:
 976              	.LBE1306:
 977              	.LBB1308:
 978              	.LBB1309:
 424:fltk-1.3.4-1/FL/fl_draw.H **** /**
 979              		.loc 2 424 0
 980 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 980      000000
 981 002c 660FEFC9 		pxor	%xmm1, %xmm1
 982 0030 F20F1015 		movsd	.LC2(%rip), %xmm2
 982      00000000 
 983 0038 488B07   		movq	(%rdi), %rax
 984 003b 660F28C1 		movapd	%xmm1, %xmm0
 985 003f FF90F000 		call	*240(%rax)
 985      0000
 986              	.LVL92:
 987              	.LBE1309:
 988              	.LBE1308:
 989              	.LBB1310:
 990              	.LBB1311:
 991              		.loc 2 440 0
 992 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 992      000000
 993 004c 488B07   		movq	(%rdi), %rax
 994 004f FF902801 		call	*296(%rax)
 994      0000
 995              	.LVL93:
 996              	.LBE1311:
 997              	.LBE1310:
 998              		.loc 1 354 0
 999 0055 89DF     		movl	%ebx, %edi
 1000 0057 E8000000 		call	_ZL17set_outline_colorj
 1000      00
 1001              	.LVL94:
 1002              	.LBB1312:
 1003              	.LBB1313:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1004              		.loc 2 370 0
 1005 005c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1005      000000
 1006 0063 488B07   		movq	(%rdi), %rax
 1007 0066 FF90D000 		call	*208(%rax)
 1007      0000
 1008              	.LVL95:
 1009              	.LBE1313:
 1010              	.LBE1312:
 1011              	.LBB1314:
 1012              	.LBB1315:
 424:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1013              		.loc 2 424 0
 1014 006c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1014      000000
 1015 0073 660FEFC9 		pxor	%xmm1, %xmm1
 1016 0077 F20F1015 		movsd	.LC2(%rip), %xmm2
 1016      00000000 
 1017 007f 488B07   		movq	(%rdi), %rax
 1018 0082 660F28C1 		movapd	%xmm1, %xmm0
 1019 0086 FF90F000 		call	*240(%rax)
 1019      0000
 1020              	.LVL96:
 1021              	.LBE1315:
 1022              	.LBE1314:
 1023              	.LBB1316:
 1024              	.LBB1317:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1025              		.loc 2 436 0
 1026 008c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1026      000000
 1027              	.LBE1317:
 1028              	.LBE1316:
 1029              		.loc 1 356 0
 1030 0093 5B       		popq	%rbx
 1031              		.cfi_def_cfa_offset 8
 1032              	.LVL97:
 1033              	.LBB1319:
 1034              	.LBB1318:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1035              		.loc 2 436 0
 1036 0094 488B07   		movq	(%rdi), %rax
 1037 0097 488B8020 		movq	288(%rax), %rax
 1037      010000
 1038 009e FFE0     		jmp	*%rax
 1039              	.LVL98:
 1040              	.LBE1318:
 1041              	.LBE1319:
 1042              		.cfi_endproc
 1043              	.LFE509:
 1045              		.section	.text.unlikely._ZL11draw_circlej
 1046              	.LCOLDE31:
 1047              		.section	.text._ZL11draw_circlej
 1048              	.LHOTE31:
 1049              		.section	.text.unlikely._ZL9draw_plusj,"ax",@progbits
 1050              	.LCOLDB36:
 1051              		.section	.text._ZL9draw_plusj,"ax",@progbits
 1052              	.LHOTB36:
 1053              		.p2align 4,,15
 1055              	_ZL9draw_plusj:
 1056              	.LFB511:
 1057              		.loc 1 362 0
 1058              		.cfi_startproc
 1059              	.LVL99:
 1060 0000 53       		pushq	%rbx
 1061              		.cfi_def_cfa_offset 16
 1062              		.cfi_offset 3, -16
 1063              		.loc 1 362 0
 1064 0001 89FB     		movl	%edi, %ebx
 1065              	.LVL100:
 1066              	.LBB1320:
 1067              	.LBB1321:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1068              		.loc 2 52 0
 1069 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1069      000000
 1070              	.LVL101:
 1071 000a 89DE     		movl	%ebx, %esi
 1072 000c 488B07   		movq	(%rdi), %rax
 1073 000f FF908800 		call	*136(%rax)
 1073      0000
 1074              	.LVL102:
 1075              	.LBE1321:
 1076              	.LBE1320:
 1077              	.LBB1322:
 1078              	.LBB1323:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1079              		.loc 2 374 0
 1080 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1080      000000
 1081 001c 488B07   		movq	(%rdi), %rax
 1082 001f FF90D800 		call	*216(%rax)
 1082      0000
 1083              	.LVL103:
 1084              	.LBE1323:
 1085              	.LBE1322:
 1086              	.LBB1324:
 1087              	.LBB1325:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1088              		.loc 2 379 0
 1089 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1089      000000
 1090 002c F20F100D 		movsd	.LC32(%rip), %xmm1
 1090      00000000 
 1091 0034 F20F1005 		movsd	.LC33(%rip), %xmm0
 1091      00000000 
 1092 003c 488B07   		movq	(%rdi), %rax
 1093 003f FF90E000 		call	*224(%rax)
 1093      0000
 1094              	.LVL104:
 1095              	.LBE1325:
 1096              	.LBE1324:
 1097              	.LBB1326:
 1098              	.LBB1327:
 1099 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1099      000000
 1100 004c F20F100D 		movsd	.LC34(%rip), %xmm1
 1100      00000000 
 1101 0054 F20F1005 		movsd	.LC33(%rip), %xmm0
 1101      00000000 
 1102 005c 488B07   		movq	(%rdi), %rax
 1103 005f FF90E000 		call	*224(%rax)
 1103      0000
 1104              	.LVL105:
 1105              	.LBE1327:
 1106              	.LBE1326:
 1107              	.LBB1328:
 1108              	.LBB1329:
 1109 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1109      000000
 1110 006c F20F100D 		movsd	.LC34(%rip), %xmm1
 1110      00000000 
 1111 0074 F20F1005 		movsd	.LC35(%rip), %xmm0
 1111      00000000 
 1112 007c 488B07   		movq	(%rdi), %rax
 1113 007f FF90E000 		call	*224(%rax)
 1113      0000
 1114              	.LVL106:
 1115              	.LBE1329:
 1116              	.LBE1328:
 1117              	.LBB1330:
 1118              	.LBB1331:
 1119 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1119      000000
 1120 008c F20F100D 		movsd	.LC32(%rip), %xmm1
 1120      00000000 
 1121 0094 F20F1005 		movsd	.LC35(%rip), %xmm0
 1121      00000000 
 1122 009c 488B07   		movq	(%rdi), %rax
 1123 009f FF90E000 		call	*224(%rax)
 1123      0000
 1124              	.LVL107:
 1125              	.LBE1331:
 1126              	.LBE1330:
 1127              	.LBB1332:
 1128              	.LBB1333:
 1129              		.loc 2 440 0
 1130 00a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1130      000000
 1131 00ac 488B07   		movq	(%rdi), %rax
 1132 00af FF902801 		call	*296(%rax)
 1132      0000
 1133              	.LVL108:
 1134              	.LBE1333:
 1135              	.LBE1332:
 1136              	.LBB1334:
 1137              	.LBB1335:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1138              		.loc 2 374 0
 1139 00b5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1139      000000
 1140 00bc 488B07   		movq	(%rdi), %rax
 1141 00bf FF90D800 		call	*216(%rax)
 1141      0000
 1142              	.LVL109:
 1143              	.LBE1335:
 1144              	.LBE1334:
 1145              	.LBB1336:
 1146              	.LBB1337:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1147              		.loc 2 379 0
 1148 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1148      000000
 1149 00cc F20F100D 		movsd	.LC33(%rip), %xmm1
 1149      00000000 
 1150 00d4 F20F1005 		movsd	.LC32(%rip), %xmm0
 1150      00000000 
 1151 00dc 488B07   		movq	(%rdi), %rax
 1152 00df FF90E000 		call	*224(%rax)
 1152      0000
 1153              	.LVL110:
 1154              	.LBE1337:
 1155              	.LBE1336:
 1156              	.LBB1338:
 1157              	.LBB1339:
 1158 00e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1158      000000
 1159 00ec F20F100D 		movsd	.LC35(%rip), %xmm1
 1159      00000000 
 1160 00f4 F20F1005 		movsd	.LC32(%rip), %xmm0
 1160      00000000 
 1161 00fc 488B07   		movq	(%rdi), %rax
 1162 00ff FF90E000 		call	*224(%rax)
 1162      0000
 1163              	.LVL111:
 1164              	.LBE1339:
 1165              	.LBE1338:
 1166              	.LBB1340:
 1167              	.LBB1341:
 1168 0105 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1168      000000
 1169 010c F20F100D 		movsd	.LC35(%rip), %xmm1
 1169      00000000 
 1170 0114 F20F1005 		movsd	.LC34(%rip), %xmm0
 1170      00000000 
 1171 011c 488B07   		movq	(%rdi), %rax
 1172 011f FF90E000 		call	*224(%rax)
 1172      0000
 1173              	.LVL112:
 1174              	.LBE1341:
 1175              	.LBE1340:
 1176              	.LBB1342:
 1177              	.LBB1343:
 1178 0125 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1178      000000
 1179 012c F20F100D 		movsd	.LC33(%rip), %xmm1
 1179      00000000 
 1180 0134 F20F1005 		movsd	.LC34(%rip), %xmm0
 1180      00000000 
 1181 013c 488B07   		movq	(%rdi), %rax
 1182 013f FF90E000 		call	*224(%rax)
 1182      0000
 1183              	.LVL113:
 1184              	.LBE1343:
 1185              	.LBE1342:
 1186              	.LBB1344:
 1187              	.LBB1345:
 1188              		.loc 2 440 0
 1189 0145 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1189      000000
 1190 014c 488B07   		movq	(%rdi), %rax
 1191 014f FF902801 		call	*296(%rax)
 1191      0000
 1192              	.LVL114:
 1193              	.LBE1345:
 1194              	.LBE1344:
 1195              		.loc 1 366 0
 1196 0155 89DF     		movl	%ebx, %edi
 1197 0157 E8000000 		call	_ZL17set_outline_colorj
 1197      00
 1198              	.LVL115:
 1199              	.LBB1346:
 1200              	.LBB1347:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1201              		.loc 2 370 0
 1202 015c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1202      000000
 1203 0163 488B07   		movq	(%rdi), %rax
 1204 0166 FF90D000 		call	*208(%rax)
 1204      0000
 1205              	.LVL116:
 1206              	.LBE1347:
 1207              	.LBE1346:
 1208              	.LBB1348:
 1209              	.LBB1349:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1210              		.loc 2 379 0
 1211 016c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1211      000000
 1212 0173 F20F100D 		movsd	.LC32(%rip), %xmm1
 1212      00000000 
 1213 017b F20F1005 		movsd	.LC33(%rip), %xmm0
 1213      00000000 
 1214 0183 488B07   		movq	(%rdi), %rax
 1215 0186 FF90E000 		call	*224(%rax)
 1215      0000
 1216              	.LVL117:
 1217              	.LBE1349:
 1218              	.LBE1348:
 1219              	.LBB1350:
 1220              	.LBB1351:
 1221 018c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1221      000000
 1222 0193 F20F100D 		movsd	.LC34(%rip), %xmm1
 1222      00000000 
 1223 019b F20F1005 		movsd	.LC33(%rip), %xmm0
 1223      00000000 
 1224 01a3 488B07   		movq	(%rdi), %rax
 1225 01a6 FF90E000 		call	*224(%rax)
 1225      0000
 1226              	.LVL118:
 1227              	.LBE1351:
 1228              	.LBE1350:
 1229              	.LBB1352:
 1230              	.LBB1353:
 1231 01ac 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1231      000000
 1232 01b3 F20F100D 		movsd	.LC34(%rip), %xmm1
 1232      00000000 
 1233 01bb F20F1005 		movsd	.LC32(%rip), %xmm0
 1233      00000000 
 1234 01c3 488B07   		movq	(%rdi), %rax
 1235 01c6 FF90E000 		call	*224(%rax)
 1235      0000
 1236              	.LVL119:
 1237              	.LBE1353:
 1238              	.LBE1352:
 1239              	.LBB1354:
 1240              	.LBB1355:
 1241 01cc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1241      000000
 1242 01d3 F20F100D 		movsd	.LC35(%rip), %xmm1
 1242      00000000 
 1243 01db F20F1005 		movsd	.LC32(%rip), %xmm0
 1243      00000000 
 1244 01e3 488B07   		movq	(%rdi), %rax
 1245 01e6 FF90E000 		call	*224(%rax)
 1245      0000
 1246              	.LVL120:
 1247              	.LBE1355:
 1248              	.LBE1354:
 1249              	.LBB1356:
 1250              	.LBB1357:
 1251 01ec 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1251      000000
 1252 01f3 F20F100D 		movsd	.LC35(%rip), %xmm1
 1252      00000000 
 1253 01fb F20F1005 		movsd	.LC34(%rip), %xmm0
 1253      00000000 
 1254 0203 488B07   		movq	(%rdi), %rax
 1255 0206 FF90E000 		call	*224(%rax)
 1255      0000
 1256              	.LVL121:
 1257              	.LBE1357:
 1258              	.LBE1356:
 1259              	.LBB1358:
 1260              	.LBB1359:
 1261 020c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1261      000000
 1262 0213 F20F100D 		movsd	.LC34(%rip), %xmm1
 1262      00000000 
 1263 021b 660F28C1 		movapd	%xmm1, %xmm0
 1264 021f 488B07   		movq	(%rdi), %rax
 1265 0222 FF90E000 		call	*224(%rax)
 1265      0000
 1266              	.LVL122:
 1267              	.LBE1359:
 1268              	.LBE1358:
 1269              	.LBB1360:
 1270              	.LBB1361:
 1271 0228 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1271      000000
 1272 022f F20F100D 		movsd	.LC34(%rip), %xmm1
 1272      00000000 
 1273 0237 F20F1005 		movsd	.LC35(%rip), %xmm0
 1273      00000000 
 1274 023f 488B07   		movq	(%rdi), %rax
 1275 0242 FF90E000 		call	*224(%rax)
 1275      0000
 1276              	.LVL123:
 1277              	.LBE1361:
 1278              	.LBE1360:
 1279              	.LBB1362:
 1280              	.LBB1363:
 1281 0248 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1281      000000
 1282 024f F20F100D 		movsd	.LC32(%rip), %xmm1
 1282      00000000 
 1283 0257 F20F1005 		movsd	.LC35(%rip), %xmm0
 1283      00000000 
 1284 025f 488B07   		movq	(%rdi), %rax
 1285 0262 FF90E000 		call	*224(%rax)
 1285      0000
 1286              	.LVL124:
 1287              	.LBE1363:
 1288              	.LBE1362:
 1289              	.LBB1364:
 1290              	.LBB1365:
 1291 0268 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1291      000000
 1292 026f F20F100D 		movsd	.LC32(%rip), %xmm1
 1292      00000000 
 1293 0277 F20F1005 		movsd	.LC34(%rip), %xmm0
 1293      00000000 
 1294 027f 488B07   		movq	(%rdi), %rax
 1295 0282 FF90E000 		call	*224(%rax)
 1295      0000
 1296              	.LVL125:
 1297              	.LBE1365:
 1298              	.LBE1364:
 1299              	.LBB1366:
 1300              	.LBB1367:
 1301 0288 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1301      000000
 1302 028f F20F100D 		movsd	.LC33(%rip), %xmm1
 1302      00000000 
 1303 0297 F20F1005 		movsd	.LC34(%rip), %xmm0
 1303      00000000 
 1304 029f 488B07   		movq	(%rdi), %rax
 1305 02a2 FF90E000 		call	*224(%rax)
 1305      0000
 1306              	.LVL126:
 1307              	.LBE1367:
 1308              	.LBE1366:
 1309              	.LBB1368:
 1310              	.LBB1369:
 1311 02a8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1311      000000
 1312 02af F20F100D 		movsd	.LC33(%rip), %xmm1
 1312      00000000 
 1313 02b7 F20F1005 		movsd	.LC32(%rip), %xmm0
 1313      00000000 
 1314 02bf 488B07   		movq	(%rdi), %rax
 1315 02c2 FF90E000 		call	*224(%rax)
 1315      0000
 1316              	.LVL127:
 1317              	.LBE1369:
 1318              	.LBE1368:
 1319              	.LBB1370:
 1320              	.LBB1371:
 1321 02c8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1321      000000
 1322 02cf F20F100D 		movsd	.LC32(%rip), %xmm1
 1322      00000000 
 1323 02d7 660F28C1 		movapd	%xmm1, %xmm0
 1324 02db 488B07   		movq	(%rdi), %rax
 1325 02de FF90E000 		call	*224(%rax)
 1325      0000
 1326              	.LVL128:
 1327              	.LBE1371:
 1328              	.LBE1370:
 1329              	.LBB1372:
 1330              	.LBB1373:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1331              		.loc 2 436 0
 1332 02e4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1332      000000
 1333              	.LBE1373:
 1334              	.LBE1372:
 1335              		.loc 1 372 0
 1336 02eb 5B       		popq	%rbx
 1337              		.cfi_def_cfa_offset 8
 1338              	.LVL129:
 1339              	.LBB1375:
 1340              	.LBB1374:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1341              		.loc 2 436 0
 1342 02ec 488B07   		movq	(%rdi), %rax
 1343 02ef 488B8020 		movq	288(%rax), %rax
 1343      010000
 1344 02f6 FFE0     		jmp	*%rax
 1345              	.LVL130:
 1346              	.LBE1374:
 1347              	.LBE1375:
 1348              		.cfi_endproc
 1349              	.LFE511:
 1351              		.section	.text.unlikely._ZL9draw_plusj
 1352              	.LCOLDE36:
 1353              		.section	.text._ZL9draw_plusj
 1354              	.LHOTE36:
 1355              		.section	.text.unlikely._ZL10draw_arrowj,"ax",@progbits
 1356              	.LCOLDB37:
 1357              		.section	.text._ZL10draw_arrowj,"ax",@progbits
 1358              	.LHOTB37:
 1359              		.p2align 4,,15
 1361              	_ZL10draw_arrowj:
 1362              	.LFB507:
 1363              		.loc 1 340 0
 1364              		.cfi_startproc
 1365              	.LVL131:
 1366 0000 53       		pushq	%rbx
 1367              		.cfi_def_cfa_offset 16
 1368              		.cfi_offset 3, -16
 1369              		.loc 1 340 0
 1370 0001 89FB     		movl	%edi, %ebx
 1371              	.LVL132:
 1372              	.LBB1376:
 1373              	.LBB1377:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1374              		.loc 2 52 0
 1375 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1375      000000
 1376              	.LVL133:
 1377 000a 89DE     		movl	%ebx, %esi
 1378 000c 488B07   		movq	(%rdi), %rax
 1379 000f FF908800 		call	*136(%rax)
 1379      0000
 1380              	.LVL134:
 1381              	.LBE1377:
 1382              	.LBE1376:
 1383              	.LBB1378:
 1384              	.LBB1379:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1385              		.loc 2 374 0
 1386 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1386      000000
 1387 001c 488B07   		movq	(%rdi), %rax
 1388 001f FF90D800 		call	*216(%rax)
 1388      0000
 1389              	.LVL135:
 1390              	.LBE1379:
 1391              	.LBE1378:
 1392              	.LBB1380:
 1393              	.LBB1381:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1394              		.loc 2 379 0
 1395 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1395      000000
 1396 002c F20F100D 		movsd	.LC23(%rip), %xmm1
 1396      00000000 
 1397 0034 F20F1005 		movsd	.LC26(%rip), %xmm0
 1397      00000000 
 1398 003c 488B07   		movq	(%rdi), %rax
 1399 003f FF90E000 		call	*224(%rax)
 1399      0000
 1400              	.LVL136:
 1401              	.LBE1381:
 1402              	.LBE1380:
 1403              	.LBB1382:
 1404              	.LBB1383:
 1405 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1405      000000
 1406 004c 660FEFC9 		pxor	%xmm1, %xmm1
 1407 0050 F20F1005 		movsd	.LC2(%rip), %xmm0
 1407      00000000 
 1408 0058 488B07   		movq	(%rdi), %rax
 1409 005b FF90E000 		call	*224(%rax)
 1409      0000
 1410              	.LVL137:
 1411              	.LBE1383:
 1412              	.LBE1382:
 1413              	.LBB1384:
 1414              	.LBB1385:
 1415 0061 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1415      000000
 1416 0068 F20F100D 		movsd	.LC21(%rip), %xmm1
 1416      00000000 
 1417 0070 F20F1005 		movsd	.LC26(%rip), %xmm0
 1417      00000000 
 1418 0078 488B07   		movq	(%rdi), %rax
 1419 007b FF90E000 		call	*224(%rax)
 1419      0000
 1420              	.LVL138:
 1421              	.LBE1385:
 1422              	.LBE1384:
 1423              	.LBB1386:
 1424              	.LBB1387:
 1425              		.loc 2 440 0
 1426 0081 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1426      000000
 1427 0088 488B07   		movq	(%rdi), %rax
 1428 008b FF902801 		call	*296(%rax)
 1428      0000
 1429              	.LVL139:
 1430              	.LBE1387:
 1431              	.LBE1386:
 1432              	.LBB1388:
 1433              	.LBB1389:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1434              		.loc 2 366 0
 1435 0091 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1435      000000
 1436 0098 488B07   		movq	(%rdi), %rax
 1437 009b FF90C800 		call	*200(%rax)
 1437      0000
 1438              	.LVL140:
 1439              	.LBE1389:
 1440              	.LBE1388:
 1441              	.LBB1390:
 1442              	.LBB1391:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1443              		.loc 2 379 0
 1444 00a1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1444      000000
 1445 00a8 660FEFC9 		pxor	%xmm1, %xmm1
 1446 00ac F20F1005 		movsd	.LC1(%rip), %xmm0
 1446      00000000 
 1447 00b4 488B07   		movq	(%rdi), %rax
 1448 00b7 FF90E000 		call	*224(%rax)
 1448      0000
 1449              	.LVL141:
 1450              	.LBE1391:
 1451              	.LBE1390:
 1452              	.LBB1392:
 1453              	.LBB1393:
 1454 00bd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1454      000000
 1455 00c4 660FEFC9 		pxor	%xmm1, %xmm1
 1456 00c8 F20F1005 		movsd	.LC26(%rip), %xmm0
 1456      00000000 
 1457 00d0 488B07   		movq	(%rdi), %rax
 1458 00d3 FF90E000 		call	*224(%rax)
 1458      0000
 1459              	.LVL142:
 1460              	.LBE1393:
 1461              	.LBE1392:
 1462              	.LBB1394:
 1463              	.LBB1395:
 432:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1464              		.loc 2 432 0
 1465 00d9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1465      000000
 1466 00e0 488B07   		movq	(%rdi), %rax
 1467 00e3 FF901801 		call	*280(%rax)
 1467      0000
 1468              	.LVL143:
 1469              	.LBE1395:
 1470              	.LBE1394:
 1471              		.loc 1 344 0
 1472 00e9 89DF     		movl	%ebx, %edi
 1473 00eb E8000000 		call	_ZL17set_outline_colorj
 1473      00
 1474              	.LVL144:
 1475              	.LBB1396:
 1476              	.LBB1397:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1477              		.loc 2 366 0
 1478 00f0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1478      000000
 1479 00f7 488B07   		movq	(%rdi), %rax
 1480 00fa FF90C800 		call	*200(%rax)
 1480      0000
 1481              	.LVL145:
 1482              	.LBE1397:
 1483              	.LBE1396:
 1484              	.LBB1398:
 1485              	.LBB1399:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1486              		.loc 2 379 0
 1487 0100 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1487      000000
 1488 0107 660FEFC9 		pxor	%xmm1, %xmm1
 1489 010b F20F1005 		movsd	.LC1(%rip), %xmm0
 1489      00000000 
 1490 0113 488B07   		movq	(%rdi), %rax
 1491 0116 FF90E000 		call	*224(%rax)
 1491      0000
 1492              	.LVL146:
 1493              	.LBE1399:
 1494              	.LBE1398:
 1495              	.LBB1400:
 1496              	.LBB1401:
 1497 011c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1497      000000
 1498 0123 660FEFC9 		pxor	%xmm1, %xmm1
 1499 0127 F20F1005 		movsd	.LC26(%rip), %xmm0
 1499      00000000 
 1500 012f 488B07   		movq	(%rdi), %rax
 1501 0132 FF90E000 		call	*224(%rax)
 1501      0000
 1502              	.LVL147:
 1503              	.LBE1401:
 1504              	.LBE1400:
 1505              	.LBB1402:
 1506              	.LBB1403:
 432:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1507              		.loc 2 432 0
 1508 0138 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1508      000000
 1509 013f 488B07   		movq	(%rdi), %rax
 1510 0142 FF901801 		call	*280(%rax)
 1510      0000
 1511              	.LVL148:
 1512              	.LBE1403:
 1513              	.LBE1402:
 1514              	.LBB1404:
 1515              	.LBB1405:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1516              		.loc 2 370 0
 1517 0148 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1517      000000
 1518 014f 488B07   		movq	(%rdi), %rax
 1519 0152 FF90D000 		call	*208(%rax)
 1519      0000
 1520              	.LVL149:
 1521              	.LBE1405:
 1522              	.LBE1404:
 1523              	.LBB1406:
 1524              	.LBB1407:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1525              		.loc 2 379 0
 1526 0158 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1526      000000
 1527 015f F20F100D 		movsd	.LC23(%rip), %xmm1
 1527      00000000 
 1528 0167 F20F1005 		movsd	.LC26(%rip), %xmm0
 1528      00000000 
 1529 016f 488B07   		movq	(%rdi), %rax
 1530 0172 FF90E000 		call	*224(%rax)
 1530      0000
 1531              	.LVL150:
 1532              	.LBE1407:
 1533              	.LBE1406:
 1534              	.LBB1408:
 1535              	.LBB1409:
 1536 0178 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1536      000000
 1537 017f 660FEFC9 		pxor	%xmm1, %xmm1
 1538 0183 F20F1005 		movsd	.LC2(%rip), %xmm0
 1538      00000000 
 1539 018b 488B07   		movq	(%rdi), %rax
 1540 018e FF90E000 		call	*224(%rax)
 1540      0000
 1541              	.LVL151:
 1542              	.LBE1409:
 1543              	.LBE1408:
 1544              	.LBB1410:
 1545              	.LBB1411:
 1546 0194 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1546      000000
 1547 019b F20F100D 		movsd	.LC21(%rip), %xmm1
 1547      00000000 
 1548 01a3 F20F1005 		movsd	.LC26(%rip), %xmm0
 1548      00000000 
 1549 01ab 488B07   		movq	(%rdi), %rax
 1550 01ae FF90E000 		call	*224(%rax)
 1550      0000
 1551              	.LVL152:
 1552              	.LBE1411:
 1553              	.LBE1410:
 1554              	.LBB1412:
 1555              	.LBB1413:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1556              		.loc 2 436 0
 1557 01b4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1557      000000
 1558              	.LBE1413:
 1559              	.LBE1412:
 1560              		.loc 1 347 0
 1561 01bb 5B       		popq	%rbx
 1562              		.cfi_def_cfa_offset 8
 1563              	.LVL153:
 1564              	.LBB1415:
 1565              	.LBB1414:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1566              		.loc 2 436 0
 1567 01bc 488B07   		movq	(%rdi), %rax
 1568 01bf 488B8020 		movq	288(%rax), %rax
 1568      010000
 1569 01c6 FFE0     		jmp	*%rax
 1570              	.LVL154:
 1571              	.LBE1414:
 1572              	.LBE1415:
 1573              		.cfi_endproc
 1574              	.LFE507:
 1576              		.section	.text.unlikely._ZL10draw_arrowj
 1577              	.LCOLDE37:
 1578              		.section	.text._ZL10draw_arrowj
 1579              	.LHOTE37:
 1580              		.section	.text.unlikely._ZL16draw_doublearrowj,"ax",@progbits
 1581              	.LCOLDB42:
 1582              		.section	.text._ZL16draw_doublearrowj,"ax",@progbits
 1583              	.LHOTB42:
 1584              		.p2align 4,,15
 1586              	_ZL16draw_doublearrowj:
 1587              	.LFB506:
 1588              		.loc 1 328 0
 1589              		.cfi_startproc
 1590              	.LVL155:
 1591 0000 53       		pushq	%rbx
 1592              		.cfi_def_cfa_offset 16
 1593              		.cfi_offset 3, -16
 1594              		.loc 1 328 0
 1595 0001 89FB     		movl	%edi, %ebx
 1596              	.LVL156:
 1597              	.LBB1416:
 1598              	.LBB1417:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1599              		.loc 2 52 0
 1600 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1600      000000
 1601              	.LVL157:
 1602 000a 89DE     		movl	%ebx, %esi
 1603 000c 488B07   		movq	(%rdi), %rax
 1604 000f FF908800 		call	*136(%rax)
 1604      0000
 1605              	.LVL158:
 1606              	.LBE1417:
 1607              	.LBE1416:
 1608              	.LBB1418:
 1609              	.LBB1419:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1610              		.loc 2 374 0
 1611 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1611      000000
 1612 001c 488B07   		movq	(%rdi), %rax
 1613 001f FF90D800 		call	*216(%rax)
 1613      0000
 1614              	.LVL159:
 1615              	.LBE1419:
 1616              	.LBE1418:
 1617              	.LBB1420:
 1618              	.LBB1421:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1619              		.loc 2 379 0
 1620 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1620      000000
 1621 002c F20F100D 		movsd	.LC11(%rip), %xmm1
 1621      00000000 
 1622 0034 F20F1005 		movsd	.LC38(%rip), %xmm0
 1622      00000000 
 1623 003c 488B07   		movq	(%rdi), %rax
 1624 003f FF90E000 		call	*224(%rax)
 1624      0000
 1625              	.LVL160:
 1626              	.LBE1421:
 1627              	.LBE1420:
 1628              	.LBB1422:
 1629              	.LBB1423:
 1630 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1630      000000
 1631 004c F20F100D 		movsd	.LC14(%rip), %xmm1
 1631      00000000 
 1632 0054 F20F1005 		movsd	.LC38(%rip), %xmm0
 1632      00000000 
 1633 005c 488B07   		movq	(%rdi), %rax
 1634 005f FF90E000 		call	*224(%rax)
 1634      0000
 1635              	.LVL161:
 1636              	.LBE1423:
 1637              	.LBE1422:
 1638              	.LBB1424:
 1639              	.LBB1425:
 1640 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1640      000000
 1641 006c F20F100D 		movsd	.LC14(%rip), %xmm1
 1641      00000000 
 1642 0074 F20F1005 		movsd	.LC39(%rip), %xmm0
 1642      00000000 
 1643 007c 488B07   		movq	(%rdi), %rax
 1644 007f FF90E000 		call	*224(%rax)
 1644      0000
 1645              	.LVL162:
 1646              	.LBE1425:
 1647              	.LBE1424:
 1648              	.LBB1426:
 1649              	.LBB1427:
 1650 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1650      000000
 1651 008c F20F100D 		movsd	.LC11(%rip), %xmm1
 1651      00000000 
 1652 0094 F20F1005 		movsd	.LC39(%rip), %xmm0
 1652      00000000 
 1653 009c 488B07   		movq	(%rdi), %rax
 1654 009f FF90E000 		call	*224(%rax)
 1654      0000
 1655              	.LVL163:
 1656              	.LBE1427:
 1657              	.LBE1426:
 1658              	.LBB1428:
 1659              	.LBB1429:
 1660              		.loc 2 440 0
 1661 00a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1661      000000
 1662 00ac 488B07   		movq	(%rdi), %rax
 1663 00af FF902801 		call	*296(%rax)
 1663      0000
 1664              	.LVL164:
 1665              	.LBE1429:
 1666              	.LBE1428:
 1667              	.LBB1430:
 1668              	.LBB1431:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1669              		.loc 2 374 0
 1670 00b5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1670      000000
 1671 00bc 488B07   		movq	(%rdi), %rax
 1672 00bf FF90D800 		call	*216(%rax)
 1672      0000
 1673              	.LVL165:
 1674              	.LBE1431:
 1675              	.LBE1430:
 1676              	.LBB1432:
 1677              	.LBB1433:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1678              		.loc 2 379 0
 1679 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1679      000000
 1680 00cc F20F100D 		movsd	.LC4(%rip), %xmm1
 1680      00000000 
 1681 00d4 F20F1005 		movsd	.LC34(%rip), %xmm0
 1681      00000000 
 1682 00dc 488B07   		movq	(%rdi), %rax
 1683 00df FF90E000 		call	*224(%rax)
 1683      0000
 1684              	.LVL166:
 1685              	.LBE1433:
 1686              	.LBE1432:
 1687              	.LBB1434:
 1688              	.LBB1435:
 1689 00e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1689      000000
 1690 00ec 660FEFC9 		pxor	%xmm1, %xmm1
 1691 00f0 F20F1005 		movsd	.LC40(%rip), %xmm0
 1691      00000000 
 1692 00f8 488B07   		movq	(%rdi), %rax
 1693 00fb FF90E000 		call	*224(%rax)
 1693      0000
 1694              	.LVL167:
 1695              	.LBE1435:
 1696              	.LBE1434:
 1697              	.LBB1436:
 1698              	.LBB1437:
 1699 0101 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1699      000000
 1700 0108 F20F100D 		movsd	.LC5(%rip), %xmm1
 1700      00000000 
 1701 0110 F20F1005 		movsd	.LC34(%rip), %xmm0
 1701      00000000 
 1702 0118 488B07   		movq	(%rdi), %rax
 1703 011b FF90E000 		call	*224(%rax)
 1703      0000
 1704              	.LVL168:
 1705              	.LBE1437:
 1706              	.LBE1436:
 1707              	.LBB1438:
 1708              	.LBB1439:
 1709              		.loc 2 440 0
 1710 0121 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1710      000000
 1711 0128 488B07   		movq	(%rdi), %rax
 1712 012b FF902801 		call	*296(%rax)
 1712      0000
 1713              	.LVL169:
 1714              	.LBE1439:
 1715              	.LBE1438:
 1716              	.LBB1440:
 1717              	.LBB1441:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1718              		.loc 2 374 0
 1719 0131 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1719      000000
 1720 0138 488B07   		movq	(%rdi), %rax
 1721 013b FF90D800 		call	*216(%rax)
 1721      0000
 1722              	.LVL170:
 1723              	.LBE1441:
 1724              	.LBE1440:
 1725              	.LBB1442:
 1726              	.LBB1443:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1727              		.loc 2 379 0
 1728 0141 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1728      000000
 1729 0148 F20F100D 		movsd	.LC4(%rip), %xmm1
 1729      00000000 
 1730 0150 F20F1005 		movsd	.LC32(%rip), %xmm0
 1730      00000000 
 1731 0158 488B07   		movq	(%rdi), %rax
 1732 015b FF90E000 		call	*224(%rax)
 1732      0000
 1733              	.LVL171:
 1734              	.LBE1443:
 1735              	.LBE1442:
 1736              	.LBB1444:
 1737              	.LBB1445:
 1738 0161 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1738      000000
 1739 0168 660FEFC9 		pxor	%xmm1, %xmm1
 1740 016c F20F1005 		movsd	.LC41(%rip), %xmm0
 1740      00000000 
 1741 0174 488B07   		movq	(%rdi), %rax
 1742 0177 FF90E000 		call	*224(%rax)
 1742      0000
 1743              	.LVL172:
 1744              	.LBE1445:
 1745              	.LBE1444:
 1746              	.LBB1446:
 1747              	.LBB1447:
 1748 017d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1748      000000
 1749 0184 F20F100D 		movsd	.LC5(%rip), %xmm1
 1749      00000000 
 1750 018c F20F1005 		movsd	.LC32(%rip), %xmm0
 1750      00000000 
 1751 0194 488B07   		movq	(%rdi), %rax
 1752 0197 FF90E000 		call	*224(%rax)
 1752      0000
 1753              	.LVL173:
 1754              	.LBE1447:
 1755              	.LBE1446:
 1756              	.LBB1448:
 1757              	.LBB1449:
 1758              		.loc 2 440 0
 1759 019d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1759      000000
 1760 01a4 488B07   		movq	(%rdi), %rax
 1761 01a7 FF902801 		call	*296(%rax)
 1761      0000
 1762              	.LVL174:
 1763              	.LBE1449:
 1764              	.LBE1448:
 1765              		.loc 1 333 0
 1766 01ad 89DF     		movl	%ebx, %edi
 1767 01af E8000000 		call	_ZL17set_outline_colorj
 1767      00
 1768              	.LVL175:
 1769              	.LBB1450:
 1770              	.LBB1451:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1771              		.loc 2 370 0
 1772 01b4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1772      000000
 1773 01bb 488B07   		movq	(%rdi), %rax
 1774 01be FF90D000 		call	*208(%rax)
 1774      0000
 1775              	.LVL176:
 1776              	.LBE1451:
 1777              	.LBE1450:
 1778              	.LBB1452:
 1779              	.LBB1453:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1780              		.loc 2 379 0
 1781 01c4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1781      000000
 1782 01cb F20F100D 		movsd	.LC14(%rip), %xmm1
 1782      00000000 
 1783 01d3 F20F1005 		movsd	.LC32(%rip), %xmm0
 1783      00000000 
 1784 01db 488B07   		movq	(%rdi), %rax
 1785 01de FF90E000 		call	*224(%rax)
 1785      0000
 1786              	.LVL177:
 1787              	.LBE1453:
 1788              	.LBE1452:
 1789              	.LBB1454:
 1790              	.LBB1455:
 1791 01e4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1791      000000
 1792 01eb F20F100D 		movsd	.LC14(%rip), %xmm1
 1792      00000000 
 1793 01f3 F20F1005 		movsd	.LC34(%rip), %xmm0
 1793      00000000 
 1794 01fb 488B07   		movq	(%rdi), %rax
 1795 01fe FF90E000 		call	*224(%rax)
 1795      0000
 1796              	.LVL178:
 1797              	.LBE1455:
 1798              	.LBE1454:
 1799              	.LBB1456:
 1800              	.LBB1457:
 1801 0204 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1801      000000
 1802 020b F20F100D 		movsd	.LC4(%rip), %xmm1
 1802      00000000 
 1803 0213 F20F1005 		movsd	.LC34(%rip), %xmm0
 1803      00000000 
 1804 021b 488B07   		movq	(%rdi), %rax
 1805 021e FF90E000 		call	*224(%rax)
 1805      0000
 1806              	.LVL179:
 1807              	.LBE1457:
 1808              	.LBE1456:
 1809              	.LBB1458:
 1810              	.LBB1459:
 1811 0224 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1811      000000
 1812 022b 660FEFC9 		pxor	%xmm1, %xmm1
 1813 022f F20F1005 		movsd	.LC40(%rip), %xmm0
 1813      00000000 
 1814 0237 488B07   		movq	(%rdi), %rax
 1815 023a FF90E000 		call	*224(%rax)
 1815      0000
 1816              	.LVL180:
 1817              	.LBE1459:
 1818              	.LBE1458:
 1819              	.LBB1460:
 1820              	.LBB1461:
 1821 0240 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1821      000000
 1822 0247 F20F100D 		movsd	.LC5(%rip), %xmm1
 1822      00000000 
 1823 024f F20F1005 		movsd	.LC34(%rip), %xmm0
 1823      00000000 
 1824 0257 488B07   		movq	(%rdi), %rax
 1825 025a FF90E000 		call	*224(%rax)
 1825      0000
 1826              	.LVL181:
 1827              	.LBE1461:
 1828              	.LBE1460:
 1829              	.LBB1462:
 1830              	.LBB1463:
 1831 0260 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1831      000000
 1832 0267 F20F100D 		movsd	.LC11(%rip), %xmm1
 1832      00000000 
 1833 026f F20F1005 		movsd	.LC34(%rip), %xmm0
 1833      00000000 
 1834 0277 488B07   		movq	(%rdi), %rax
 1835 027a FF90E000 		call	*224(%rax)
 1835      0000
 1836              	.LVL182:
 1837              	.LBE1463:
 1838              	.LBE1462:
 1839              	.LBB1464:
 1840              	.LBB1465:
 1841 0280 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1841      000000
 1842 0287 F20F100D 		movsd	.LC11(%rip), %xmm1
 1842      00000000 
 1843 028f F20F1005 		movsd	.LC32(%rip), %xmm0
 1843      00000000 
 1844 0297 488B07   		movq	(%rdi), %rax
 1845 029a FF90E000 		call	*224(%rax)
 1845      0000
 1846              	.LVL183:
 1847              	.LBE1465:
 1848              	.LBE1464:
 1849              	.LBB1466:
 1850              	.LBB1467:
 1851 02a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1851      000000
 1852 02a7 F20F100D 		movsd	.LC5(%rip), %xmm1
 1852      00000000 
 1853 02af F20F1005 		movsd	.LC32(%rip), %xmm0
 1853      00000000 
 1854 02b7 488B07   		movq	(%rdi), %rax
 1855 02ba FF90E000 		call	*224(%rax)
 1855      0000
 1856              	.LVL184:
 1857              	.LBE1467:
 1858              	.LBE1466:
 1859              	.LBB1468:
 1860              	.LBB1469:
 1861 02c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1861      000000
 1862 02c7 660FEFC9 		pxor	%xmm1, %xmm1
 1863 02cb F20F1005 		movsd	.LC41(%rip), %xmm0
 1863      00000000 
 1864 02d3 488B07   		movq	(%rdi), %rax
 1865 02d6 FF90E000 		call	*224(%rax)
 1865      0000
 1866              	.LVL185:
 1867              	.LBE1469:
 1868              	.LBE1468:
 1869              	.LBB1470:
 1870              	.LBB1471:
 1871 02dc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1871      000000
 1872 02e3 F20F100D 		movsd	.LC4(%rip), %xmm1
 1872      00000000 
 1873 02eb F20F1005 		movsd	.LC32(%rip), %xmm0
 1873      00000000 
 1874 02f3 488B07   		movq	(%rdi), %rax
 1875 02f6 FF90E000 		call	*224(%rax)
 1875      0000
 1876              	.LVL186:
 1877              	.LBE1471:
 1878              	.LBE1470:
 1879              	.LBB1472:
 1880              	.LBB1473:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1881              		.loc 2 436 0
 1882 02fc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1882      000000
 1883              	.LBE1473:
 1884              	.LBE1472:
 1885              		.loc 1 337 0
 1886 0303 5B       		popq	%rbx
 1887              		.cfi_def_cfa_offset 8
 1888              	.LVL187:
 1889              	.LBB1475:
 1890              	.LBB1474:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1891              		.loc 2 436 0
 1892 0304 488B07   		movq	(%rdi), %rax
 1893 0307 488B8020 		movq	288(%rax), %rax
 1893      010000
 1894 030e FFE0     		jmp	*%rax
 1895              	.LVL188:
 1896              	.LBE1474:
 1897              	.LBE1475:
 1898              		.cfi_endproc
 1899              	.LFE506:
 1901              		.section	.text.unlikely._ZL16draw_doublearrowj
 1902              	.LCOLDE42:
 1903              		.section	.text._ZL16draw_doublearrowj
 1904              	.LHOTE42:
 1905              		.section	.text.unlikely._ZL13draw_bararrowj,"ax",@progbits
 1906              	.LCOLDB44:
 1907              		.section	.text._ZL13draw_bararrowj,"ax",@progbits
 1908              	.LHOTB44:
 1909              		.p2align 4,,15
 1911              	_ZL13draw_bararrowj:
 1912              	.LFB498:
 1913              		.loc 1 295 0
 1914              		.cfi_startproc
 1915              	.LVL189:
 1916 0000 53       		pushq	%rbx
 1917              		.cfi_def_cfa_offset 16
 1918              		.cfi_offset 3, -16
 1919              		.loc 1 295 0
 1920 0001 89FB     		movl	%edi, %ebx
 1921              	.LVL190:
 1922              	.LBB1476:
 1923              	.LBB1477:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1924              		.loc 2 52 0
 1925 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1925      000000
 1926              	.LVL191:
 1927 000a 89DE     		movl	%ebx, %esi
 1928 000c 488B07   		movq	(%rdi), %rax
 1929 000f FF908800 		call	*136(%rax)
 1929      0000
 1930              	.LVL192:
 1931              	.LBE1477:
 1932              	.LBE1476:
 1933              	.LBB1478:
 1934              	.LBB1479:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1935              		.loc 2 374 0
 1936 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1936      000000
 1937 001c 488B07   		movq	(%rdi), %rax
 1938 001f FF90D800 		call	*216(%rax)
 1938      0000
 1939              	.LVL193:
 1940              	.LBE1479:
 1941              	.LBE1478:
 1942              	.LBB1480:
 1943              	.LBB1481:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1944              		.loc 2 379 0
 1945 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1945      000000
 1946 002c F20F100D 		movsd	.LC4(%rip), %xmm1
 1946      00000000 
 1947 0034 F20F1005 		movsd	.LC23(%rip), %xmm0
 1947      00000000 
 1948 003c 488B07   		movq	(%rdi), %rax
 1949 003f FF90E000 		call	*224(%rax)
 1949      0000
 1950              	.LVL194:
 1951              	.LBE1481:
 1952              	.LBE1480:
 1953              	.LBB1482:
 1954              	.LBB1483:
 1955 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1955      000000
 1956 004c 660FEFC9 		pxor	%xmm1, %xmm1
 1957 0050 F20F1005 		movsd	.LC35(%rip), %xmm0
 1957      00000000 
 1958 0058 488B07   		movq	(%rdi), %rax
 1959 005b FF90E000 		call	*224(%rax)
 1959      0000
 1960              	.LVL195:
 1961              	.LBE1483:
 1962              	.LBE1482:
 1963              	.LBB1484:
 1964              	.LBB1485:
 1965 0061 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1965      000000
 1966 0068 F20F100D 		movsd	.LC5(%rip), %xmm1
 1966      00000000 
 1967 0070 F20F1005 		movsd	.LC23(%rip), %xmm0
 1967      00000000 
 1968 0078 488B07   		movq	(%rdi), %rax
 1969 007b FF90E000 		call	*224(%rax)
 1969      0000
 1970              	.LVL196:
 1971              	.LBE1485:
 1972              	.LBE1484:
 1973              	.LBB1486:
 1974              	.LBB1487:
 1975              		.loc 2 440 0
 1976 0081 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1976      000000
 1977 0088 488B07   		movq	(%rdi), %rax
 1978 008b FF902801 		call	*296(%rax)
 1978      0000
 1979              	.LVL197:
 1980              	.LBE1487:
 1981              	.LBE1486:
 1982              	.LBB1488:
 1983              	.LBB1489:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1984              		.loc 2 374 0
 1985 0091 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1985      000000
 1986 0098 488B07   		movq	(%rdi), %rax
 1987 009b FF90D800 		call	*216(%rax)
 1987      0000
 1988              	.LVL198:
 1989              	.LBE1489:
 1990              	.LBE1488:
 1991              	.LBB1490:
 1992              	.LBB1491:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1993              		.loc 2 379 0
 1994 00a1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1994      000000
 1995 00a8 F20F100D 		movsd	.LC4(%rip), %xmm1
 1995      00000000 
 1996 00b0 F20F1005 		movsd	.LC43(%rip), %xmm0
 1996      00000000 
 1997 00b8 488B07   		movq	(%rdi), %rax
 1998 00bb FF90E000 		call	*224(%rax)
 1998      0000
 1999              	.LVL199:
 2000              	.LBE1491:
 2001              	.LBE1490:
 2002              	.LBB1492:
 2003              	.LBB1493:
 2004 00c1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2004      000000
 2005 00c8 F20F100D 		movsd	.LC4(%rip), %xmm1
 2005      00000000 
 2006 00d0 F20F1005 		movsd	.LC21(%rip), %xmm0
 2006      00000000 
 2007 00d8 488B07   		movq	(%rdi), %rax
 2008 00db FF90E000 		call	*224(%rax)
 2008      0000
 2009              	.LVL200:
 2010              	.LBE1493:
 2011              	.LBE1492:
 2012              	.LBB1494:
 2013              	.LBB1495:
 2014 00e1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2014      000000
 2015 00e8 F20F100D 		movsd	.LC5(%rip), %xmm1
 2015      00000000 
 2016 00f0 F20F1005 		movsd	.LC21(%rip), %xmm0
 2016      00000000 
 2017 00f8 488B07   		movq	(%rdi), %rax
 2018 00fb FF90E000 		call	*224(%rax)
 2018      0000
 2019              	.LVL201:
 2020              	.LBE1495:
 2021              	.LBE1494:
 2022              	.LBB1496:
 2023              	.LBB1497:
 2024 0101 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2024      000000
 2025 0108 F20F100D 		movsd	.LC5(%rip), %xmm1
 2025      00000000 
 2026 0110 F20F1005 		movsd	.LC43(%rip), %xmm0
 2026      00000000 
 2027 0118 488B07   		movq	(%rdi), %rax
 2028 011b FF90E000 		call	*224(%rax)
 2028      0000
 2029              	.LVL202:
 2030              	.LBE1497:
 2031              	.LBE1496:
 2032              	.LBB1498:
 2033              	.LBB1499:
 2034              		.loc 2 440 0
 2035 0121 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2035      000000
 2036 0128 488B07   		movq	(%rdi), %rax
 2037 012b FF902801 		call	*296(%rax)
 2037      0000
 2038              	.LVL203:
 2039              	.LBE1499:
 2040              	.LBE1498:
 2041              		.loc 1 299 0
 2042 0131 89DF     		movl	%ebx, %edi
 2043 0133 E8000000 		call	_ZL17set_outline_colorj
 2043      00
 2044              	.LVL204:
 2045              	.LBB1500:
 2046              	.LBB1501:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2047              		.loc 2 370 0
 2048 0138 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2048      000000
 2049 013f 488B07   		movq	(%rdi), %rax
 2050 0142 FF90D000 		call	*208(%rax)
 2050      0000
 2051              	.LVL205:
 2052              	.LBE1501:
 2053              	.LBE1500:
 2054              	.LBB1502:
 2055              	.LBB1503:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2056              		.loc 2 379 0
 2057 0148 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2057      000000
 2058 014f F20F100D 		movsd	.LC4(%rip), %xmm1
 2058      00000000 
 2059 0157 F20F1005 		movsd	.LC23(%rip), %xmm0
 2059      00000000 
 2060 015f 488B07   		movq	(%rdi), %rax
 2061 0162 FF90E000 		call	*224(%rax)
 2061      0000
 2062              	.LVL206:
 2063              	.LBE1503:
 2064              	.LBE1502:
 2065              	.LBB1504:
 2066              	.LBB1505:
 2067 0168 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2067      000000
 2068 016f 660FEFC9 		pxor	%xmm1, %xmm1
 2069 0173 F20F1005 		movsd	.LC35(%rip), %xmm0
 2069      00000000 
 2070 017b 488B07   		movq	(%rdi), %rax
 2071 017e FF90E000 		call	*224(%rax)
 2071      0000
 2072              	.LVL207:
 2073              	.LBE1505:
 2074              	.LBE1504:
 2075              	.LBB1506:
 2076              	.LBB1507:
 2077 0184 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2077      000000
 2078 018b F20F100D 		movsd	.LC5(%rip), %xmm1
 2078      00000000 
 2079 0193 F20F1005 		movsd	.LC23(%rip), %xmm0
 2079      00000000 
 2080 019b 488B07   		movq	(%rdi), %rax
 2081 019e FF90E000 		call	*224(%rax)
 2081      0000
 2082              	.LVL208:
 2083              	.LBE1507:
 2084              	.LBE1506:
 2085              	.LBB1508:
 2086              	.LBB1509:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2087              		.loc 2 436 0
 2088 01a4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2088      000000
 2089 01ab 488B07   		movq	(%rdi), %rax
 2090 01ae FF902001 		call	*288(%rax)
 2090      0000
 2091              	.LVL209:
 2092              	.LBE1509:
 2093              	.LBE1508:
 2094              	.LBB1510:
 2095              	.LBB1511:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2096              		.loc 2 370 0
 2097 01b4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2097      000000
 2098 01bb 488B07   		movq	(%rdi), %rax
 2099 01be FF90D000 		call	*208(%rax)
 2099      0000
 2100              	.LVL210:
 2101              	.LBE1511:
 2102              	.LBE1510:
 2103              	.LBB1512:
 2104              	.LBB1513:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2105              		.loc 2 379 0
 2106 01c4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2106      000000
 2107 01cb F20F100D 		movsd	.LC4(%rip), %xmm1
 2107      00000000 
 2108 01d3 F20F1005 		movsd	.LC43(%rip), %xmm0
 2108      00000000 
 2109 01db 488B07   		movq	(%rdi), %rax
 2110 01de FF90E000 		call	*224(%rax)
 2110      0000
 2111              	.LVL211:
 2112              	.LBE1513:
 2113              	.LBE1512:
 2114              	.LBB1514:
 2115              	.LBB1515:
 2116 01e4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2116      000000
 2117 01eb F20F100D 		movsd	.LC4(%rip), %xmm1
 2117      00000000 
 2118 01f3 F20F1005 		movsd	.LC21(%rip), %xmm0
 2118      00000000 
 2119 01fb 488B07   		movq	(%rdi), %rax
 2120 01fe FF90E000 		call	*224(%rax)
 2120      0000
 2121              	.LVL212:
 2122              	.LBE1515:
 2123              	.LBE1514:
 2124              	.LBB1516:
 2125              	.LBB1517:
 2126 0204 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2126      000000
 2127 020b F20F100D 		movsd	.LC5(%rip), %xmm1
 2127      00000000 
 2128 0213 F20F1005 		movsd	.LC21(%rip), %xmm0
 2128      00000000 
 2129 021b 488B07   		movq	(%rdi), %rax
 2130 021e FF90E000 		call	*224(%rax)
 2130      0000
 2131              	.LVL213:
 2132              	.LBE1517:
 2133              	.LBE1516:
 2134              	.LBB1518:
 2135              	.LBB1519:
 2136 0224 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2136      000000
 2137 022b F20F100D 		movsd	.LC5(%rip), %xmm1
 2137      00000000 
 2138 0233 F20F1005 		movsd	.LC43(%rip), %xmm0
 2138      00000000 
 2139 023b 488B07   		movq	(%rdi), %rax
 2140 023e FF90E000 		call	*224(%rax)
 2140      0000
 2141              	.LVL214:
 2142              	.LBE1519:
 2143              	.LBE1518:
 2144              	.LBB1520:
 2145              	.LBB1521:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2146              		.loc 2 436 0
 2147 0244 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2147      000000
 2148              	.LBE1521:
 2149              	.LBE1520:
 2150              		.loc 1 302 0
 2151 024b 5B       		popq	%rbx
 2152              		.cfi_def_cfa_offset 8
 2153              	.LVL215:
 2154              	.LBB1523:
 2155              	.LBB1522:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2156              		.loc 2 436 0
 2157 024c 488B07   		movq	(%rdi), %rax
 2158 024f 488B8020 		movq	288(%rax), %rax
 2158      010000
 2159 0256 FFE0     		jmp	*%rax
 2160              	.LVL216:
 2161              	.LBE1522:
 2162              	.LBE1523:
 2163              		.cfi_endproc
 2164              	.LFE498:
 2166              		.section	.text.unlikely._ZL13draw_bararrowj
 2167              	.LCOLDE44:
 2168              		.section	.text._ZL13draw_bararrowj
 2169              	.LHOTE44:
 2170              		.section	.text.unlikely._ZL13draw_arrowboxj,"ax",@progbits
 2171              	.LCOLDB45:
 2172              		.section	.text._ZL13draw_arrowboxj,"ax",@progbits
 2173              	.LHOTB45:
 2174              		.p2align 4,,15
 2176              	_ZL13draw_arrowboxj:
 2177              	.LFB497:
 2178              		.loc 1 285 0
 2179              		.cfi_startproc
 2180              	.LVL217:
 2181 0000 53       		pushq	%rbx
 2182              		.cfi_def_cfa_offset 16
 2183              		.cfi_offset 3, -16
 2184              		.loc 1 285 0
 2185 0001 89FB     		movl	%edi, %ebx
 2186              	.LVL218:
 2187              	.LBB1524:
 2188              	.LBB1525:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2189              		.loc 2 52 0
 2190 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2190      000000
 2191              	.LVL219:
 2192 000a 89DE     		movl	%ebx, %esi
 2193 000c 488B07   		movq	(%rdi), %rax
 2194 000f FF908800 		call	*136(%rax)
 2194      0000
 2195              	.LVL220:
 2196              	.LBE1525:
 2197              	.LBE1524:
 2198              	.LBB1526:
 2199              	.LBB1527:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2200              		.loc 2 374 0
 2201 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2201      000000
 2202 001c 488B07   		movq	(%rdi), %rax
 2203 001f FF90D800 		call	*216(%rax)
 2203      0000
 2204              	.LVL221:
 2205              	.LBE1527:
 2206              	.LBE1526:
 2207              	.LBB1528:
 2208              	.LBB1529:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2209              		.loc 2 379 0
 2210 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2210      000000
 2211 002c F20F100D 		movsd	.LC4(%rip), %xmm1
 2211      00000000 
 2212 0034 F20F1005 		movsd	.LC22(%rip), %xmm0
 2212      00000000 
 2213 003c 488B07   		movq	(%rdi), %rax
 2214 003f FF90E000 		call	*224(%rax)
 2214      0000
 2215              	.LVL222:
 2216              	.LBE1529:
 2217              	.LBE1528:
 2218              	.LBB1530:
 2219              	.LBB1531:
 2220 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2220      000000
 2221 004c 660FEFC9 		pxor	%xmm1, %xmm1
 2222 0050 F20F1005 		movsd	.LC18(%rip), %xmm0
 2222      00000000 
 2223 0058 488B07   		movq	(%rdi), %rax
 2224 005b FF90E000 		call	*224(%rax)
 2224      0000
 2225              	.LVL223:
 2226              	.LBE1531:
 2227              	.LBE1530:
 2228              	.LBB1532:
 2229              	.LBB1533:
 2230 0061 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2230      000000
 2231 0068 F20F100D 		movsd	.LC5(%rip), %xmm1
 2231      00000000 
 2232 0070 F20F1005 		movsd	.LC22(%rip), %xmm0
 2232      00000000 
 2233 0078 488B07   		movq	(%rdi), %rax
 2234 007b FF90E000 		call	*224(%rax)
 2234      0000
 2235              	.LVL224:
 2236              	.LBE1533:
 2237              	.LBE1532:
 2238              	.LBB1534:
 2239              	.LBB1535:
 2240              		.loc 2 440 0
 2241 0081 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2241      000000
 2242 0088 488B07   		movq	(%rdi), %rax
 2243 008b FF902801 		call	*296(%rax)
 2243      0000
 2244              	.LVL225:
 2245              	.LBE1535:
 2246              	.LBE1534:
 2247              	.LBB1536:
 2248              	.LBB1537:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2249              		.loc 2 370 0
 2250 0091 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2250      000000
 2251 0098 488B07   		movq	(%rdi), %rax
 2252 009b FF90D000 		call	*208(%rax)
 2252      0000
 2253              	.LVL226:
 2254              	.LBE1537:
 2255              	.LBE1536:
 2256              	.LBB1538:
 2257              	.LBB1539:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2258              		.loc 2 379 0
 2259 00a1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2259      000000
 2260 00a8 F20F100D 		movsd	.LC4(%rip), %xmm1
 2260      00000000 
 2261 00b0 F20F1005 		movsd	.LC18(%rip), %xmm0
 2261      00000000 
 2262 00b8 488B07   		movq	(%rdi), %rax
 2263 00bb FF90E000 		call	*224(%rax)
 2263      0000
 2264              	.LVL227:
 2265              	.LBE1539:
 2266              	.LBE1538:
 2267              	.LBB1540:
 2268              	.LBB1541:
 2269 00c1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2269      000000
 2270 00c8 F20F100D 		movsd	.LC4(%rip), %xmm1
 2270      00000000 
 2271 00d0 F20F1005 		movsd	.LC16(%rip), %xmm0
 2271      00000000 
 2272 00d8 488B07   		movq	(%rdi), %rax
 2273 00db FF90E000 		call	*224(%rax)
 2273      0000
 2274              	.LVL228:
 2275              	.LBE1541:
 2276              	.LBE1540:
 2277              	.LBB1542:
 2278              	.LBB1543:
 2279 00e1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2279      000000
 2280 00e8 F20F100D 		movsd	.LC5(%rip), %xmm1
 2280      00000000 
 2281 00f0 F20F1005 		movsd	.LC16(%rip), %xmm0
 2281      00000000 
 2282 00f8 488B07   		movq	(%rdi), %rax
 2283 00fb FF90E000 		call	*224(%rax)
 2283      0000
 2284              	.LVL229:
 2285              	.LBE1543:
 2286              	.LBE1542:
 2287              	.LBB1544:
 2288              	.LBB1545:
 2289 0101 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2289      000000
 2290 0108 F20F100D 		movsd	.LC5(%rip), %xmm1
 2290      00000000 
 2291 0110 F20F1005 		movsd	.LC18(%rip), %xmm0
 2291      00000000 
 2292 0118 488B07   		movq	(%rdi), %rax
 2293 011b FF90E000 		call	*224(%rax)
 2293      0000
 2294              	.LVL230:
 2295              	.LBE1545:
 2296              	.LBE1544:
 2297              	.LBB1546:
 2298              	.LBB1547:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2299              		.loc 2 436 0
 2300 0121 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2300      000000
 2301 0128 488B07   		movq	(%rdi), %rax
 2302 012b FF902001 		call	*288(%rax)
 2302      0000
 2303              	.LVL231:
 2304              	.LBE1547:
 2305              	.LBE1546:
 2306              		.loc 1 289 0
 2307 0131 89DF     		movl	%ebx, %edi
 2308 0133 E8000000 		call	_ZL17set_outline_colorj
 2308      00
 2309              	.LVL232:
 2310              	.LBB1548:
 2311              	.LBB1549:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2312              		.loc 2 370 0
 2313 0138 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2313      000000
 2314 013f 488B07   		movq	(%rdi), %rax
 2315 0142 FF90D000 		call	*208(%rax)
 2315      0000
 2316              	.LVL233:
 2317              	.LBE1549:
 2318              	.LBE1548:
 2319              	.LBB1550:
 2320              	.LBB1551:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2321              		.loc 2 379 0
 2322 0148 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2322      000000
 2323 014f F20F100D 		movsd	.LC4(%rip), %xmm1
 2323      00000000 
 2324 0157 F20F1005 		movsd	.LC18(%rip), %xmm0
 2324      00000000 
 2325 015f 488B07   		movq	(%rdi), %rax
 2326 0162 FF90E000 		call	*224(%rax)
 2326      0000
 2327              	.LVL234:
 2328              	.LBE1551:
 2329              	.LBE1550:
 2330              	.LBB1552:
 2331              	.LBB1553:
 2332 0168 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2332      000000
 2333 016f F20F100D 		movsd	.LC4(%rip), %xmm1
 2333      00000000 
 2334 0177 F20F1005 		movsd	.LC16(%rip), %xmm0
 2334      00000000 
 2335 017f 488B07   		movq	(%rdi), %rax
 2336 0182 FF90E000 		call	*224(%rax)
 2336      0000
 2337              	.LVL235:
 2338              	.LBE1553:
 2339              	.LBE1552:
 2340              	.LBB1554:
 2341              	.LBB1555:
 2342 0188 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2342      000000
 2343 018f F20F100D 		movsd	.LC5(%rip), %xmm1
 2343      00000000 
 2344 0197 F20F1005 		movsd	.LC16(%rip), %xmm0
 2344      00000000 
 2345 019f 488B07   		movq	(%rdi), %rax
 2346 01a2 FF90E000 		call	*224(%rax)
 2346      0000
 2347              	.LVL236:
 2348              	.LBE1555:
 2349              	.LBE1554:
 2350              	.LBB1556:
 2351              	.LBB1557:
 2352 01a8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2352      000000
 2353 01af F20F100D 		movsd	.LC5(%rip), %xmm1
 2353      00000000 
 2354 01b7 F20F1005 		movsd	.LC18(%rip), %xmm0
 2354      00000000 
 2355 01bf 488B07   		movq	(%rdi), %rax
 2356 01c2 FF90E000 		call	*224(%rax)
 2356      0000
 2357              	.LVL237:
 2358              	.LBE1557:
 2359              	.LBE1556:
 2360              	.LBB1558:
 2361              	.LBB1559:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2362              		.loc 2 436 0
 2363 01c8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2363      000000
 2364 01cf 488B07   		movq	(%rdi), %rax
 2365 01d2 FF902001 		call	*288(%rax)
 2365      0000
 2366              	.LVL238:
 2367              	.LBE1559:
 2368              	.LBE1558:
 2369              	.LBB1560:
 2370              	.LBB1561:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2371              		.loc 2 370 0
 2372 01d8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2372      000000
 2373 01df 488B07   		movq	(%rdi), %rax
 2374 01e2 FF90D000 		call	*208(%rax)
 2374      0000
 2375              	.LVL239:
 2376              	.LBE1561:
 2377              	.LBE1560:
 2378              	.LBB1562:
 2379              	.LBB1563:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2380              		.loc 2 379 0
 2381 01e8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2381      000000
 2382 01ef F20F100D 		movsd	.LC4(%rip), %xmm1
 2382      00000000 
 2383 01f7 F20F1005 		movsd	.LC22(%rip), %xmm0
 2383      00000000 
 2384 01ff 488B07   		movq	(%rdi), %rax
 2385 0202 FF90E000 		call	*224(%rax)
 2385      0000
 2386              	.LVL240:
 2387              	.LBE1563:
 2388              	.LBE1562:
 2389              	.LBB1564:
 2390              	.LBB1565:
 2391 0208 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2391      000000
 2392 020f 660FEFC9 		pxor	%xmm1, %xmm1
 2393 0213 F20F1005 		movsd	.LC18(%rip), %xmm0
 2393      00000000 
 2394 021b 488B07   		movq	(%rdi), %rax
 2395 021e FF90E000 		call	*224(%rax)
 2395      0000
 2396              	.LVL241:
 2397              	.LBE1565:
 2398              	.LBE1564:
 2399              	.LBB1566:
 2400              	.LBB1567:
 2401 0224 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2401      000000
 2402 022b F20F100D 		movsd	.LC5(%rip), %xmm1
 2402      00000000 
 2403 0233 F20F1005 		movsd	.LC22(%rip), %xmm0
 2403      00000000 
 2404 023b 488B07   		movq	(%rdi), %rax
 2405 023e FF90E000 		call	*224(%rax)
 2405      0000
 2406              	.LVL242:
 2407              	.LBE1567:
 2408              	.LBE1566:
 2409              	.LBB1568:
 2410              	.LBB1569:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2411              		.loc 2 436 0
 2412 0244 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2412      000000
 2413              	.LBE1569:
 2414              	.LBE1568:
 2415              		.loc 1 292 0
 2416 024b 5B       		popq	%rbx
 2417              		.cfi_def_cfa_offset 8
 2418              	.LVL243:
 2419              	.LBB1571:
 2420              	.LBB1570:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2421              		.loc 2 436 0
 2422 024c 488B07   		movq	(%rdi), %rax
 2423 024f 488B8020 		movq	288(%rax), %rax
 2423      010000
 2424 0256 FFE0     		jmp	*%rax
 2425              	.LVL244:
 2426              	.LBE1570:
 2427              	.LBE1571:
 2428              		.cfi_endproc
 2429              	.LFE497:
 2431              		.section	.text.unlikely._ZL13draw_arrowboxj
 2432              	.LCOLDE45:
 2433              		.section	.text._ZL13draw_arrowboxj
 2434              	.LHOTE45:
 2435              		.section	.text.unlikely._ZL13draw_arrowbarj,"ax",@progbits
 2436              	.LCOLDB46:
 2437              		.section	.text._ZL13draw_arrowbarj,"ax",@progbits
 2438              	.LHOTB46:
 2439              		.p2align 4,,15
 2441              	_ZL13draw_arrowbarj:
 2442              	.LFB496:
 2443              		.loc 1 275 0
 2444              		.cfi_startproc
 2445              	.LVL245:
 2446 0000 53       		pushq	%rbx
 2447              		.cfi_def_cfa_offset 16
 2448              		.cfi_offset 3, -16
 2449              		.loc 1 275 0
 2450 0001 89FB     		movl	%edi, %ebx
 2451              	.LVL246:
 2452              	.LBB1572:
 2453              	.LBB1573:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2454              		.loc 2 52 0
 2455 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2455      000000
 2456              	.LVL247:
 2457 000a 89DE     		movl	%ebx, %esi
 2458 000c 488B07   		movq	(%rdi), %rax
 2459 000f FF908800 		call	*136(%rax)
 2459      0000
 2460              	.LVL248:
 2461              	.LBE1573:
 2462              	.LBE1572:
 2463              	.LBB1574:
 2464              	.LBB1575:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2465              		.loc 2 374 0
 2466 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2466      000000
 2467 001c 488B07   		movq	(%rdi), %rax
 2468 001f FF90D800 		call	*216(%rax)
 2468      0000
 2469              	.LVL249:
 2470              	.LBE1575:
 2471              	.LBE1574:
 2472              	.LBB1576:
 2473              	.LBB1577:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2474              		.loc 2 379 0
 2475 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2475      000000
 2476 002c F20F100D 		movsd	.LC4(%rip), %xmm1
 2476      00000000 
 2477 0034 F20F1005 		movsd	.LC18(%rip), %xmm0
 2477      00000000 
 2478 003c 488B07   		movq	(%rdi), %rax
 2479 003f FF90E000 		call	*224(%rax)
 2479      0000
 2480              	.LVL250:
 2481              	.LBE1577:
 2482              	.LBE1576:
 2483              	.LBB1578:
 2484              	.LBB1579:
 2485 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2485      000000
 2486 004c F20F100D 		movsd	.LC4(%rip), %xmm1
 2486      00000000 
 2487 0054 F20F1005 		movsd	.LC16(%rip), %xmm0
 2487      00000000 
 2488 005c 488B07   		movq	(%rdi), %rax
 2489 005f FF90E000 		call	*224(%rax)
 2489      0000
 2490              	.LVL251:
 2491              	.LBE1579:
 2492              	.LBE1578:
 2493              	.LBB1580:
 2494              	.LBB1581:
 2495 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2495      000000
 2496 006c F20F100D 		movsd	.LC5(%rip), %xmm1
 2496      00000000 
 2497 0074 F20F1005 		movsd	.LC16(%rip), %xmm0
 2497      00000000 
 2498 007c 488B07   		movq	(%rdi), %rax
 2499 007f FF90E000 		call	*224(%rax)
 2499      0000
 2500              	.LVL252:
 2501              	.LBE1581:
 2502              	.LBE1580:
 2503              	.LBB1582:
 2504              	.LBB1583:
 2505 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2505      000000
 2506 008c F20F100D 		movsd	.LC5(%rip), %xmm1
 2506      00000000 
 2507 0094 F20F1005 		movsd	.LC18(%rip), %xmm0
 2507      00000000 
 2508 009c 488B07   		movq	(%rdi), %rax
 2509 009f FF90E000 		call	*224(%rax)
 2509      0000
 2510              	.LVL253:
 2511              	.LBE1583:
 2512              	.LBE1582:
 2513              	.LBB1584:
 2514              	.LBB1585:
 2515              		.loc 2 440 0
 2516 00a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2516      000000
 2517 00ac 488B07   		movq	(%rdi), %rax
 2518 00af FF902801 		call	*296(%rax)
 2518      0000
 2519              	.LVL254:
 2520              	.LBE1585:
 2521              	.LBE1584:
 2522              	.LBB1586:
 2523              	.LBB1587:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2524              		.loc 2 374 0
 2525 00b5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2525      000000
 2526 00bc 488B07   		movq	(%rdi), %rax
 2527 00bf FF90D800 		call	*216(%rax)
 2527      0000
 2528              	.LVL255:
 2529              	.LBE1587:
 2530              	.LBE1586:
 2531              	.LBB1588:
 2532              	.LBB1589:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2533              		.loc 2 379 0
 2534 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2534      000000
 2535 00cc F20F100D 		movsd	.LC4(%rip), %xmm1
 2535      00000000 
 2536 00d4 F20F1005 		movsd	.LC22(%rip), %xmm0
 2536      00000000 
 2537 00dc 488B07   		movq	(%rdi), %rax
 2538 00df FF90E000 		call	*224(%rax)
 2538      0000
 2539              	.LVL256:
 2540              	.LBE1589:
 2541              	.LBE1588:
 2542              	.LBB1590:
 2543              	.LBB1591:
 2544 00e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2544      000000
 2545 00ec 660FEFC9 		pxor	%xmm1, %xmm1
 2546 00f0 F20F1005 		movsd	.LC18(%rip), %xmm0
 2546      00000000 
 2547 00f8 488B07   		movq	(%rdi), %rax
 2548 00fb FF90E000 		call	*224(%rax)
 2548      0000
 2549              	.LVL257:
 2550              	.LBE1591:
 2551              	.LBE1590:
 2552              	.LBB1592:
 2553              	.LBB1593:
 2554 0101 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2554      000000
 2555 0108 F20F100D 		movsd	.LC5(%rip), %xmm1
 2555      00000000 
 2556 0110 F20F1005 		movsd	.LC22(%rip), %xmm0
 2556      00000000 
 2557 0118 488B07   		movq	(%rdi), %rax
 2558 011b FF90E000 		call	*224(%rax)
 2558      0000
 2559              	.LVL258:
 2560              	.LBE1593:
 2561              	.LBE1592:
 2562              	.LBB1594:
 2563              	.LBB1595:
 2564              		.loc 2 440 0
 2565 0121 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2565      000000
 2566 0128 488B07   		movq	(%rdi), %rax
 2567 012b FF902801 		call	*296(%rax)
 2567      0000
 2568              	.LVL259:
 2569              	.LBE1595:
 2570              	.LBE1594:
 2571              		.loc 1 279 0
 2572 0131 89DF     		movl	%ebx, %edi
 2573 0133 E8000000 		call	_ZL17set_outline_colorj
 2573      00
 2574              	.LVL260:
 2575              	.LBB1596:
 2576              	.LBB1597:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2577              		.loc 2 370 0
 2578 0138 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2578      000000
 2579 013f 488B07   		movq	(%rdi), %rax
 2580 0142 FF90D000 		call	*208(%rax)
 2580      0000
 2581              	.LVL261:
 2582              	.LBE1597:
 2583              	.LBE1596:
 2584              	.LBB1598:
 2585              	.LBB1599:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2586              		.loc 2 379 0
 2587 0148 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2587      000000
 2588 014f F20F100D 		movsd	.LC4(%rip), %xmm1
 2588      00000000 
 2589 0157 F20F1005 		movsd	.LC18(%rip), %xmm0
 2589      00000000 
 2590 015f 488B07   		movq	(%rdi), %rax
 2591 0162 FF90E000 		call	*224(%rax)
 2591      0000
 2592              	.LVL262:
 2593              	.LBE1599:
 2594              	.LBE1598:
 2595              	.LBB1600:
 2596              	.LBB1601:
 2597 0168 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2597      000000
 2598 016f F20F100D 		movsd	.LC4(%rip), %xmm1
 2598      00000000 
 2599 0177 F20F1005 		movsd	.LC16(%rip), %xmm0
 2599      00000000 
 2600 017f 488B07   		movq	(%rdi), %rax
 2601 0182 FF90E000 		call	*224(%rax)
 2601      0000
 2602              	.LVL263:
 2603              	.LBE1601:
 2604              	.LBE1600:
 2605              	.LBB1602:
 2606              	.LBB1603:
 2607 0188 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2607      000000
 2608 018f F20F100D 		movsd	.LC5(%rip), %xmm1
 2608      00000000 
 2609 0197 F20F1005 		movsd	.LC16(%rip), %xmm0
 2609      00000000 
 2610 019f 488B07   		movq	(%rdi), %rax
 2611 01a2 FF90E000 		call	*224(%rax)
 2611      0000
 2612              	.LVL264:
 2613              	.LBE1603:
 2614              	.LBE1602:
 2615              	.LBB1604:
 2616              	.LBB1605:
 2617 01a8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2617      000000
 2618 01af F20F100D 		movsd	.LC5(%rip), %xmm1
 2618      00000000 
 2619 01b7 F20F1005 		movsd	.LC18(%rip), %xmm0
 2619      00000000 
 2620 01bf 488B07   		movq	(%rdi), %rax
 2621 01c2 FF90E000 		call	*224(%rax)
 2621      0000
 2622              	.LVL265:
 2623              	.LBE1605:
 2624              	.LBE1604:
 2625              	.LBB1606:
 2626              	.LBB1607:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2627              		.loc 2 436 0
 2628 01c8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2628      000000
 2629 01cf 488B07   		movq	(%rdi), %rax
 2630 01d2 FF902001 		call	*288(%rax)
 2630      0000
 2631              	.LVL266:
 2632              	.LBE1607:
 2633              	.LBE1606:
 2634              	.LBB1608:
 2635              	.LBB1609:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2636              		.loc 2 370 0
 2637 01d8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2637      000000
 2638 01df 488B07   		movq	(%rdi), %rax
 2639 01e2 FF90D000 		call	*208(%rax)
 2639      0000
 2640              	.LVL267:
 2641              	.LBE1609:
 2642              	.LBE1608:
 2643              	.LBB1610:
 2644              	.LBB1611:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2645              		.loc 2 379 0
 2646 01e8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2646      000000
 2647 01ef F20F100D 		movsd	.LC4(%rip), %xmm1
 2647      00000000 
 2648 01f7 F20F1005 		movsd	.LC22(%rip), %xmm0
 2648      00000000 
 2649 01ff 488B07   		movq	(%rdi), %rax
 2650 0202 FF90E000 		call	*224(%rax)
 2650      0000
 2651              	.LVL268:
 2652              	.LBE1611:
 2653              	.LBE1610:
 2654              	.LBB1612:
 2655              	.LBB1613:
 2656 0208 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2656      000000
 2657 020f 660FEFC9 		pxor	%xmm1, %xmm1
 2658 0213 F20F1005 		movsd	.LC18(%rip), %xmm0
 2658      00000000 
 2659 021b 488B07   		movq	(%rdi), %rax
 2660 021e FF90E000 		call	*224(%rax)
 2660      0000
 2661              	.LVL269:
 2662              	.LBE1613:
 2663              	.LBE1612:
 2664              	.LBB1614:
 2665              	.LBB1615:
 2666 0224 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2666      000000
 2667 022b F20F100D 		movsd	.LC5(%rip), %xmm1
 2667      00000000 
 2668 0233 F20F1005 		movsd	.LC22(%rip), %xmm0
 2668      00000000 
 2669 023b 488B07   		movq	(%rdi), %rax
 2670 023e FF90E000 		call	*224(%rax)
 2670      0000
 2671              	.LVL270:
 2672              	.LBE1615:
 2673              	.LBE1614:
 2674              	.LBB1616:
 2675              	.LBB1617:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2676              		.loc 2 436 0
 2677 0244 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2677      000000
 2678              	.LBE1617:
 2679              	.LBE1616:
 2680              		.loc 1 282 0
 2681 024b 5B       		popq	%rbx
 2682              		.cfi_def_cfa_offset 8
 2683              	.LVL271:
 2684              	.LBB1619:
 2685              	.LBB1618:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2686              		.loc 2 436 0
 2687 024c 488B07   		movq	(%rdi), %rax
 2688 024f 488B8020 		movq	288(%rax), %rax
 2688      010000
 2689 0256 FFE0     		jmp	*%rax
 2690              	.LVL272:
 2691              	.LBE1618:
 2692              	.LBE1619:
 2693              		.cfi_endproc
 2694              	.LFE496:
 2696              		.section	.text.unlikely._ZL13draw_arrowbarj
 2697              	.LCOLDE46:
 2698              		.section	.text._ZL13draw_arrowbarj
 2699              	.LHOTE46:
 2700              		.section	.text.unlikely._ZL11draw_arrow3j,"ax",@progbits
 2701              	.LCOLDB48:
 2702              		.section	.text._ZL11draw_arrow3j,"ax",@progbits
 2703              	.LHOTB48:
 2704              		.p2align 4,,15
 2706              	_ZL11draw_arrow3j:
 2707              	.LFB495:
 2708              		.loc 1 265 0
 2709              		.cfi_startproc
 2710              	.LVL273:
 2711 0000 53       		pushq	%rbx
 2712              		.cfi_def_cfa_offset 16
 2713              		.cfi_offset 3, -16
 2714              		.loc 1 265 0
 2715 0001 89FB     		movl	%edi, %ebx
 2716              	.LVL274:
 2717              	.LBB1620:
 2718              	.LBB1621:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2719              		.loc 2 52 0
 2720 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2720      000000
 2721              	.LVL275:
 2722 000a 89DE     		movl	%ebx, %esi
 2723 000c 488B07   		movq	(%rdi), %rax
 2724 000f FF908800 		call	*136(%rax)
 2724      0000
 2725              	.LVL276:
 2726              	.LBE1621:
 2727              	.LBE1620:
 2728              	.LBB1622:
 2729              	.LBB1623:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2730              		.loc 2 374 0
 2731 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2731      000000
 2732 001c 488B07   		movq	(%rdi), %rax
 2733 001f FF90D800 		call	*216(%rax)
 2733      0000
 2734              	.LVL277:
 2735              	.LBE1623:
 2736              	.LBE1622:
 2737              	.LBB1624:
 2738              	.LBB1625:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2739              		.loc 2 379 0
 2740 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2740      000000
 2741 002c F20F100D 		movsd	.LC4(%rip), %xmm1
 2741      00000000 
 2742 0034 F20F1005 		movsd	.LC23(%rip), %xmm0
 2742      00000000 
 2743 003c 488B07   		movq	(%rdi), %rax
 2744 003f FF90E000 		call	*224(%rax)
 2744      0000
 2745              	.LVL278:
 2746              	.LBE1625:
 2747              	.LBE1624:
 2748              	.LBB1626:
 2749              	.LBB1627:
 2750 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2750      000000
 2751 004c 660FEFC9 		pxor	%xmm1, %xmm1
 2752 0050 F20F1005 		movsd	.LC35(%rip), %xmm0
 2752      00000000 
 2753 0058 488B07   		movq	(%rdi), %rax
 2754 005b FF90E000 		call	*224(%rax)
 2754      0000
 2755              	.LVL279:
 2756              	.LBE1627:
 2757              	.LBE1626:
 2758              	.LBB1628:
 2759              	.LBB1629:
 2760 0061 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2760      000000
 2761 0068 F20F100D 		movsd	.LC5(%rip), %xmm1
 2761      00000000 
 2762 0070 F20F1005 		movsd	.LC23(%rip), %xmm0
 2762      00000000 
 2763 0078 488B07   		movq	(%rdi), %rax
 2764 007b FF90E000 		call	*224(%rax)
 2764      0000
 2765              	.LVL280:
 2766              	.LBE1629:
 2767              	.LBE1628:
 2768              	.LBB1630:
 2769              	.LBB1631:
 2770              		.loc 2 440 0
 2771 0081 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2771      000000
 2772 0088 488B07   		movq	(%rdi), %rax
 2773 008b FF902801 		call	*296(%rax)
 2773      0000
 2774              	.LVL281:
 2775              	.LBE1631:
 2776              	.LBE1630:
 2777              	.LBB1632:
 2778              	.LBB1633:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2779              		.loc 2 374 0
 2780 0091 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2780      000000
 2781 0098 488B07   		movq	(%rdi), %rax
 2782 009b FF90D800 		call	*216(%rax)
 2782      0000
 2783              	.LVL282:
 2784              	.LBE1633:
 2785              	.LBE1632:
 2786              	.LBB1634:
 2787              	.LBB1635:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2788              		.loc 2 379 0
 2789 00a1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2789      000000
 2790 00a8 F20F100D 		movsd	.LC4(%rip), %xmm1
 2790      00000000 
 2791 00b0 F20F1005 		movsd	.LC47(%rip), %xmm0
 2791      00000000 
 2792 00b8 488B07   		movq	(%rdi), %rax
 2793 00bb FF90E000 		call	*224(%rax)
 2793      0000
 2794              	.LVL283:
 2795              	.LBE1635:
 2796              	.LBE1634:
 2797              	.LBB1636:
 2798              	.LBB1637:
 2799 00c1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2799      000000
 2800 00c8 660FEFC9 		pxor	%xmm1, %xmm1
 2801 00cc F20F1005 		movsd	.LC23(%rip), %xmm0
 2801      00000000 
 2802 00d4 488B07   		movq	(%rdi), %rax
 2803 00d7 FF90E000 		call	*224(%rax)
 2803      0000
 2804              	.LVL284:
 2805              	.LBE1637:
 2806              	.LBE1636:
 2807              	.LBB1638:
 2808              	.LBB1639:
 2809 00dd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2809      000000
 2810 00e4 F20F100D 		movsd	.LC5(%rip), %xmm1
 2810      00000000 
 2811 00ec F20F1005 		movsd	.LC47(%rip), %xmm0
 2811      00000000 
 2812 00f4 488B07   		movq	(%rdi), %rax
 2813 00f7 FF90E000 		call	*224(%rax)
 2813      0000
 2814              	.LVL285:
 2815              	.LBE1639:
 2816              	.LBE1638:
 2817              	.LBB1640:
 2818              	.LBB1641:
 2819              		.loc 2 440 0
 2820 00fd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2820      000000
 2821 0104 488B07   		movq	(%rdi), %rax
 2822 0107 FF902801 		call	*296(%rax)
 2822      0000
 2823              	.LVL286:
 2824              	.LBE1641:
 2825              	.LBE1640:
 2826              		.loc 1 269 0
 2827 010d 89DF     		movl	%ebx, %edi
 2828 010f E8000000 		call	_ZL17set_outline_colorj
 2828      00
 2829              	.LVL287:
 2830              	.LBB1642:
 2831              	.LBB1643:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2832              		.loc 2 370 0
 2833 0114 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2833      000000
 2834 011b 488B07   		movq	(%rdi), %rax
 2835 011e FF90D000 		call	*208(%rax)
 2835      0000
 2836              	.LVL288:
 2837              	.LBE1643:
 2838              	.LBE1642:
 2839              	.LBB1644:
 2840              	.LBB1645:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2841              		.loc 2 379 0
 2842 0124 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2842      000000
 2843 012b F20F100D 		movsd	.LC4(%rip), %xmm1
 2843      00000000 
 2844 0133 F20F1005 		movsd	.LC23(%rip), %xmm0
 2844      00000000 
 2845 013b 488B07   		movq	(%rdi), %rax
 2846 013e FF90E000 		call	*224(%rax)
 2846      0000
 2847              	.LVL289:
 2848              	.LBE1645:
 2849              	.LBE1644:
 2850              	.LBB1646:
 2851              	.LBB1647:
 2852 0144 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2852      000000
 2853 014b 660FEFC9 		pxor	%xmm1, %xmm1
 2854 014f F20F1005 		movsd	.LC35(%rip), %xmm0
 2854      00000000 
 2855 0157 488B07   		movq	(%rdi), %rax
 2856 015a FF90E000 		call	*224(%rax)
 2856      0000
 2857              	.LVL290:
 2858              	.LBE1647:
 2859              	.LBE1646:
 2860              	.LBB1648:
 2861              	.LBB1649:
 2862 0160 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2862      000000
 2863 0167 F20F100D 		movsd	.LC5(%rip), %xmm1
 2863      00000000 
 2864 016f F20F1005 		movsd	.LC23(%rip), %xmm0
 2864      00000000 
 2865 0177 488B07   		movq	(%rdi), %rax
 2866 017a FF90E000 		call	*224(%rax)
 2866      0000
 2867              	.LVL291:
 2868              	.LBE1649:
 2869              	.LBE1648:
 2870              	.LBB1650:
 2871              	.LBB1651:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2872              		.loc 2 436 0
 2873 0180 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2873      000000
 2874 0187 488B07   		movq	(%rdi), %rax
 2875 018a FF902001 		call	*288(%rax)
 2875      0000
 2876              	.LVL292:
 2877              	.LBE1651:
 2878              	.LBE1650:
 2879              	.LBB1652:
 2880              	.LBB1653:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2881              		.loc 2 370 0
 2882 0190 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2882      000000
 2883 0197 488B07   		movq	(%rdi), %rax
 2884 019a FF90D000 		call	*208(%rax)
 2884      0000
 2885              	.LVL293:
 2886              	.LBE1653:
 2887              	.LBE1652:
 2888              	.LBB1654:
 2889              	.LBB1655:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2890              		.loc 2 379 0
 2891 01a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2891      000000
 2892 01a7 F20F100D 		movsd	.LC4(%rip), %xmm1
 2892      00000000 
 2893 01af F20F1005 		movsd	.LC47(%rip), %xmm0
 2893      00000000 
 2894 01b7 488B07   		movq	(%rdi), %rax
 2895 01ba FF90E000 		call	*224(%rax)
 2895      0000
 2896              	.LVL294:
 2897              	.LBE1655:
 2898              	.LBE1654:
 2899              	.LBB1656:
 2900              	.LBB1657:
 2901 01c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2901      000000
 2902 01c7 660FEFC9 		pxor	%xmm1, %xmm1
 2903 01cb F20F1005 		movsd	.LC23(%rip), %xmm0
 2903      00000000 
 2904 01d3 488B07   		movq	(%rdi), %rax
 2905 01d6 FF90E000 		call	*224(%rax)
 2905      0000
 2906              	.LVL295:
 2907              	.LBE1657:
 2908              	.LBE1656:
 2909              	.LBB1658:
 2910              	.LBB1659:
 2911 01dc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2911      000000
 2912 01e3 F20F100D 		movsd	.LC5(%rip), %xmm1
 2912      00000000 
 2913 01eb F20F1005 		movsd	.LC47(%rip), %xmm0
 2913      00000000 
 2914 01f3 488B07   		movq	(%rdi), %rax
 2915 01f6 FF90E000 		call	*224(%rax)
 2915      0000
 2916              	.LVL296:
 2917              	.LBE1659:
 2918              	.LBE1658:
 2919              	.LBB1660:
 2920              	.LBB1661:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2921              		.loc 2 436 0
 2922 01fc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2922      000000
 2923              	.LBE1661:
 2924              	.LBE1660:
 2925              		.loc 1 272 0
 2926 0203 5B       		popq	%rbx
 2927              		.cfi_def_cfa_offset 8
 2928              	.LVL297:
 2929              	.LBB1663:
 2930              	.LBB1662:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2931              		.loc 2 436 0
 2932 0204 488B07   		movq	(%rdi), %rax
 2933 0207 488B8020 		movq	288(%rax), %rax
 2933      010000
 2934 020e FFE0     		jmp	*%rax
 2935              	.LVL298:
 2936              	.LBE1662:
 2937              	.LBE1663:
 2938              		.cfi_endproc
 2939              	.LFE495:
 2941              		.section	.text.unlikely._ZL11draw_arrow3j
 2942              	.LCOLDE48:
 2943              		.section	.text._ZL11draw_arrow3j
 2944              	.LHOTE48:
 2945              		.section	.text.unlikely._ZL11draw_arrow2j,"ax",@progbits
 2946              	.LCOLDB51:
 2947              		.section	.text._ZL11draw_arrow2j,"ax",@progbits
 2948              	.LHOTB51:
 2949              		.p2align 4,,15
 2951              	_ZL11draw_arrow2j:
 2952              	.LFB494:
 2953              		.loc 1 257 0
 2954              		.cfi_startproc
 2955              	.LVL299:
 2956 0000 53       		pushq	%rbx
 2957              		.cfi_def_cfa_offset 16
 2958              		.cfi_offset 3, -16
 2959              		.loc 1 257 0
 2960 0001 89FB     		movl	%edi, %ebx
 2961              	.LVL300:
 2962              	.LBB1664:
 2963              	.LBB1665:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2964              		.loc 2 52 0
 2965 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2965      000000
 2966              	.LVL301:
 2967 000a 89DE     		movl	%ebx, %esi
 2968 000c 488B07   		movq	(%rdi), %rax
 2969 000f FF908800 		call	*136(%rax)
 2969      0000
 2970              	.LVL302:
 2971              	.LBE1665:
 2972              	.LBE1664:
 2973              	.LBB1666:
 2974              	.LBB1667:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2975              		.loc 2 374 0
 2976 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2976      000000
 2977 001c 488B07   		movq	(%rdi), %rax
 2978 001f FF90D800 		call	*216(%rax)
 2978      0000
 2979              	.LVL303:
 2980              	.LBE1667:
 2981              	.LBE1666:
 2982              	.LBB1668:
 2983              	.LBB1669:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2984              		.loc 2 379 0
 2985 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2985      000000
 2986 002c F20F100D 		movsd	.LC4(%rip), %xmm1
 2986      00000000 
 2987 0034 F20F1005 		movsd	.LC49(%rip), %xmm0
 2987      00000000 
 2988 003c 488B07   		movq	(%rdi), %rax
 2989 003f FF90E000 		call	*224(%rax)
 2989      0000
 2990              	.LVL304:
 2991              	.LBE1669:
 2992              	.LBE1668:
 2993              	.LBB1670:
 2994              	.LBB1671:
 2995 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2995      000000
 2996 004c 660FEFC9 		pxor	%xmm1, %xmm1
 2997 0050 F20F1005 		movsd	.LC50(%rip), %xmm0
 2997      00000000 
 2998 0058 488B07   		movq	(%rdi), %rax
 2999 005b FF90E000 		call	*224(%rax)
 2999      0000
 3000              	.LVL305:
 3001              	.LBE1671:
 3002              	.LBE1670:
 3003              	.LBB1672:
 3004              	.LBB1673:
 3005 0061 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3005      000000
 3006 0068 F20F100D 		movsd	.LC5(%rip), %xmm1
 3006      00000000 
 3007 0070 F20F1005 		movsd	.LC49(%rip), %xmm0
 3007      00000000 
 3008 0078 488B07   		movq	(%rdi), %rax
 3009 007b FF90E000 		call	*224(%rax)
 3009      0000
 3010              	.LVL306:
 3011              	.LBE1673:
 3012              	.LBE1672:
 3013              	.LBB1674:
 3014              	.LBB1675:
 3015              		.loc 2 440 0
 3016 0081 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3016      000000
 3017 0088 488B07   		movq	(%rdi), %rax
 3018 008b FF902801 		call	*296(%rax)
 3018      0000
 3019              	.LVL307:
 3020              	.LBE1675:
 3021              	.LBE1674:
 3022              		.loc 1 260 0
 3023 0091 89DF     		movl	%ebx, %edi
 3024 0093 E8000000 		call	_ZL17set_outline_colorj
 3024      00
 3025              	.LVL308:
 3026              	.LBB1676:
 3027              	.LBB1677:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3028              		.loc 2 370 0
 3029 0098 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3029      000000
 3030 009f 488B07   		movq	(%rdi), %rax
 3031 00a2 FF90D000 		call	*208(%rax)
 3031      0000
 3032              	.LVL309:
 3033              	.LBE1677:
 3034              	.LBE1676:
 3035              	.LBB1678:
 3036              	.LBB1679:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3037              		.loc 2 379 0
 3038 00a8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3038      000000
 3039 00af F20F100D 		movsd	.LC4(%rip), %xmm1
 3039      00000000 
 3040 00b7 F20F1005 		movsd	.LC49(%rip), %xmm0
 3040      00000000 
 3041 00bf 488B07   		movq	(%rdi), %rax
 3042 00c2 FF90E000 		call	*224(%rax)
 3042      0000
 3043              	.LVL310:
 3044              	.LBE1679:
 3045              	.LBE1678:
 3046              	.LBB1680:
 3047              	.LBB1681:
 3048 00c8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3048      000000
 3049 00cf 660FEFC9 		pxor	%xmm1, %xmm1
 3050 00d3 F20F1005 		movsd	.LC50(%rip), %xmm0
 3050      00000000 
 3051 00db 488B07   		movq	(%rdi), %rax
 3052 00de FF90E000 		call	*224(%rax)
 3052      0000
 3053              	.LVL311:
 3054              	.LBE1681:
 3055              	.LBE1680:
 3056              	.LBB1682:
 3057              	.LBB1683:
 3058 00e4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3058      000000
 3059 00eb F20F100D 		movsd	.LC5(%rip), %xmm1
 3059      00000000 
 3060 00f3 F20F1005 		movsd	.LC49(%rip), %xmm0
 3060      00000000 
 3061 00fb 488B07   		movq	(%rdi), %rax
 3062 00fe FF90E000 		call	*224(%rax)
 3062      0000
 3063              	.LVL312:
 3064              	.LBE1683:
 3065              	.LBE1682:
 3066              	.LBB1684:
 3067              	.LBB1685:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3068              		.loc 2 436 0
 3069 0104 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3069      000000
 3070              	.LBE1685:
 3071              	.LBE1684:
 3072              		.loc 1 262 0
 3073 010b 5B       		popq	%rbx
 3074              		.cfi_def_cfa_offset 8
 3075              	.LVL313:
 3076              	.LBB1687:
 3077              	.LBB1686:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3078              		.loc 2 436 0
 3079 010c 488B07   		movq	(%rdi), %rax
 3080 010f 488B8020 		movq	288(%rax), %rax
 3080      010000
 3081 0116 FFE0     		jmp	*%rax
 3082              	.LVL314:
 3083              	.LBE1686:
 3084              	.LBE1687:
 3085              		.cfi_endproc
 3086              	.LFE494:
 3088              		.section	.text.unlikely._ZL11draw_arrow2j
 3089              	.LCOLDE51:
 3090              		.section	.text._ZL11draw_arrow2j
 3091              	.LHOTE51:
 3092              		.section	.text.unlikely._ZL11draw_arrow1j,"ax",@progbits
 3093              	.LCOLDB52:
 3094              		.section	.text._ZL11draw_arrow1j,"ax",@progbits
 3095              	.LHOTB52:
 3096              		.p2align 4,,15
 3098              	_ZL11draw_arrow1j:
 3099              	.LFB492:
 3100              		.loc 1 241 0
 3101              		.cfi_startproc
 3102              	.LVL315:
 3103 0000 53       		pushq	%rbx
 3104              		.cfi_def_cfa_offset 16
 3105              		.cfi_offset 3, -16
 3106              		.loc 1 241 0
 3107 0001 89FB     		movl	%edi, %ebx
 3108              	.LVL316:
 3109              	.LBB1688:
 3110              	.LBB1689:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3111              		.loc 2 52 0
 3112 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3112      000000
 3113              	.LVL317:
 3114 000a 89DE     		movl	%ebx, %esi
 3115 000c 488B07   		movq	(%rdi), %rax
 3116 000f FF908800 		call	*136(%rax)
 3116      0000
 3117              	.LVL318:
 3118              	.LBE1689:
 3119              	.LBE1688:
 3120              	.LBB1690:
 3121              	.LBB1691:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3122              		.loc 2 374 0
 3123 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3123      000000
 3124 001c 488B07   		movq	(%rdi), %rax
 3125 001f FF90D800 		call	*216(%rax)
 3125      0000
 3126              	.LVL319:
 3127              	.LBE1691:
 3128              	.LBE1690:
 3129              	.LBB1692:
 3130              	.LBB1693:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3131              		.loc 2 379 0
 3132 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3132      000000
 3133 002c F20F100D 		movsd	.LC11(%rip), %xmm1
 3133      00000000 
 3134 0034 F20F1005 		movsd	.LC5(%rip), %xmm0
 3134      00000000 
 3135 003c 488B07   		movq	(%rdi), %rax
 3136 003f FF90E000 		call	*224(%rax)
 3136      0000
 3137              	.LVL320:
 3138              	.LBE1693:
 3139              	.LBE1692:
 3140              	.LBB1694:
 3141              	.LBB1695:
 3142 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3142      000000
 3143 004c F20F100D 		movsd	.LC14(%rip), %xmm1
 3143      00000000 
 3144 0054 F20F1005 		movsd	.LC5(%rip), %xmm0
 3144      00000000 
 3145 005c 488B07   		movq	(%rdi), %rax
 3146 005f FF90E000 		call	*224(%rax)
 3146      0000
 3147              	.LVL321:
 3148              	.LBE1695:
 3149              	.LBE1694:
 3150              	.LBB1696:
 3151              	.LBB1697:
 3152 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3152      000000
 3153 006c F20F100D 		movsd	.LC14(%rip), %xmm1
 3153      00000000 
 3154 0074 660FEFC0 		pxor	%xmm0, %xmm0
 3155 0078 488B07   		movq	(%rdi), %rax
 3156 007b FF90E000 		call	*224(%rax)
 3156      0000
 3157              	.LVL322:
 3158              	.LBE1697:
 3159              	.LBE1696:
 3160              	.LBB1698:
 3161              	.LBB1699:
 3162 0081 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3162      000000
 3163 0088 F20F100D 		movsd	.LC11(%rip), %xmm1
 3163      00000000 
 3164 0090 660FEFC0 		pxor	%xmm0, %xmm0
 3165 0094 488B07   		movq	(%rdi), %rax
 3166 0097 FF90E000 		call	*224(%rax)
 3166      0000
 3167              	.LVL323:
 3168              	.LBE1699:
 3169              	.LBE1698:
 3170              	.LBB1700:
 3171              	.LBB1701:
 3172              		.loc 2 440 0
 3173 009d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3173      000000
 3174 00a4 488B07   		movq	(%rdi), %rax
 3175 00a7 FF902801 		call	*296(%rax)
 3175      0000
 3176              	.LVL324:
 3177              	.LBE1701:
 3178              	.LBE1700:
 3179              	.LBB1702:
 3180              	.LBB1703:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3181              		.loc 2 374 0
 3182 00ad 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3182      000000
 3183 00b4 488B07   		movq	(%rdi), %rax
 3184 00b7 FF90D800 		call	*216(%rax)
 3184      0000
 3185              	.LVL325:
 3186              	.LBE1703:
 3187              	.LBE1702:
 3188              	.LBB1704:
 3189              	.LBB1705:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3190              		.loc 2 379 0
 3191 00bd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3191      000000
 3192 00c4 F20F100D 		movsd	.LC4(%rip), %xmm1
 3192      00000000 
 3193 00cc 660FEFC0 		pxor	%xmm0, %xmm0
 3194 00d0 488B07   		movq	(%rdi), %rax
 3195 00d3 FF90E000 		call	*224(%rax)
 3195      0000
 3196              	.LVL326:
 3197              	.LBE1705:
 3198              	.LBE1704:
 3199              	.LBB1706:
 3200              	.LBB1707:
 3201 00d9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3201      000000
 3202 00e0 660FEFC9 		pxor	%xmm1, %xmm1
 3203 00e4 F20F1005 		movsd	.LC4(%rip), %xmm0
 3203      00000000 
 3204 00ec 488B07   		movq	(%rdi), %rax
 3205 00ef FF90E000 		call	*224(%rax)
 3205      0000
 3206              	.LVL327:
 3207              	.LBE1707:
 3208              	.LBE1706:
 3209              	.LBB1708:
 3210              	.LBB1709:
 3211 00f5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3211      000000
 3212 00fc F20F100D 		movsd	.LC5(%rip), %xmm1
 3212      00000000 
 3213 0104 660FEFC0 		pxor	%xmm0, %xmm0
 3214 0108 488B07   		movq	(%rdi), %rax
 3215 010b FF90E000 		call	*224(%rax)
 3215      0000
 3216              	.LVL328:
 3217              	.LBE1709:
 3218              	.LBE1708:
 3219              	.LBB1710:
 3220              	.LBB1711:
 3221 0111 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3221      000000
 3222 0118 F20F100D 		movsd	.LC11(%rip), %xmm1
 3222      00000000 
 3223 0120 660FEFC0 		pxor	%xmm0, %xmm0
 3224 0124 488B07   		movq	(%rdi), %rax
 3225 0127 FF90E000 		call	*224(%rax)
 3225      0000
 3226              	.LVL329:
 3227              	.LBE1711:
 3228              	.LBE1710:
 3229              	.LBB1712:
 3230              	.LBB1713:
 3231 012d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3231      000000
 3232 0134 F20F100D 		movsd	.LC14(%rip), %xmm1
 3232      00000000 
 3233 013c 660FEFC0 		pxor	%xmm0, %xmm0
 3234 0140 488B07   		movq	(%rdi), %rax
 3235 0143 FF90E000 		call	*224(%rax)
 3235      0000
 3236              	.LVL330:
 3237              	.LBE1713:
 3238              	.LBE1712:
 3239              	.LBB1714:
 3240              	.LBB1715:
 3241              		.loc 2 440 0
 3242 0149 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3242      000000
 3243 0150 488B07   		movq	(%rdi), %rax
 3244 0153 FF902801 		call	*296(%rax)
 3244      0000
 3245              	.LVL331:
 3246              	.LBE1715:
 3247              	.LBE1714:
 3248              		.loc 1 245 0
 3249 0159 89DF     		movl	%ebx, %edi
 3250 015b E8000000 		call	_ZL17set_outline_colorj
 3250      00
 3251              	.LVL332:
 3252              	.LBB1716:
 3253              	.LBB1717:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3254              		.loc 2 370 0
 3255 0160 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3255      000000
 3256 0167 488B07   		movq	(%rdi), %rax
 3257 016a FF90D000 		call	*208(%rax)
 3257      0000
 3258              	.LVL333:
 3259              	.LBE1717:
 3260              	.LBE1716:
 3261              	.LBB1718:
 3262              	.LBB1719:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3263              		.loc 2 379 0
 3264 0170 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3264      000000
 3265 0177 F20F100D 		movsd	.LC11(%rip), %xmm1
 3265      00000000 
 3266 017f F20F1005 		movsd	.LC5(%rip), %xmm0
 3266      00000000 
 3267 0187 488B07   		movq	(%rdi), %rax
 3268 018a FF90E000 		call	*224(%rax)
 3268      0000
 3269              	.LVL334:
 3270              	.LBE1719:
 3271              	.LBE1718:
 3272              	.LBB1720:
 3273              	.LBB1721:
 3274 0190 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3274      000000
 3275 0197 F20F100D 		movsd	.LC14(%rip), %xmm1
 3275      00000000 
 3276 019f F20F1005 		movsd	.LC5(%rip), %xmm0
 3276      00000000 
 3277 01a7 488B07   		movq	(%rdi), %rax
 3278 01aa FF90E000 		call	*224(%rax)
 3278      0000
 3279              	.LVL335:
 3280              	.LBE1721:
 3281              	.LBE1720:
 3282              	.LBB1722:
 3283              	.LBB1723:
 3284 01b0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3284      000000
 3285 01b7 F20F100D 		movsd	.LC14(%rip), %xmm1
 3285      00000000 
 3286 01bf 660FEFC0 		pxor	%xmm0, %xmm0
 3287 01c3 488B07   		movq	(%rdi), %rax
 3288 01c6 FF90E000 		call	*224(%rax)
 3288      0000
 3289              	.LVL336:
 3290              	.LBE1723:
 3291              	.LBE1722:
 3292              	.LBB1724:
 3293              	.LBB1725:
 3294 01cc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3294      000000
 3295 01d3 F20F100D 		movsd	.LC4(%rip), %xmm1
 3295      00000000 
 3296 01db 660FEFC0 		pxor	%xmm0, %xmm0
 3297 01df 488B07   		movq	(%rdi), %rax
 3298 01e2 FF90E000 		call	*224(%rax)
 3298      0000
 3299              	.LVL337:
 3300              	.LBE1725:
 3301              	.LBE1724:
 3302              	.LBB1726:
 3303              	.LBB1727:
 3304 01e8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3304      000000
 3305 01ef 660FEFC9 		pxor	%xmm1, %xmm1
 3306 01f3 F20F1005 		movsd	.LC4(%rip), %xmm0
 3306      00000000 
 3307 01fb 488B07   		movq	(%rdi), %rax
 3308 01fe FF90E000 		call	*224(%rax)
 3308      0000
 3309              	.LVL338:
 3310              	.LBE1727:
 3311              	.LBE1726:
 3312              	.LBB1728:
 3313              	.LBB1729:
 3314 0204 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3314      000000
 3315 020b F20F100D 		movsd	.LC5(%rip), %xmm1
 3315      00000000 
 3316 0213 660FEFC0 		pxor	%xmm0, %xmm0
 3317 0217 488B07   		movq	(%rdi), %rax
 3318 021a FF90E000 		call	*224(%rax)
 3318      0000
 3319              	.LVL339:
 3320              	.LBE1729:
 3321              	.LBE1728:
 3322              	.LBB1730:
 3323              	.LBB1731:
 3324 0220 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3324      000000
 3325 0227 F20F100D 		movsd	.LC11(%rip), %xmm1
 3325      00000000 
 3326 022f 660FEFC0 		pxor	%xmm0, %xmm0
 3327 0233 488B07   		movq	(%rdi), %rax
 3328 0236 FF90E000 		call	*224(%rax)
 3328      0000
 3329              	.LVL340:
 3330              	.LBE1731:
 3331              	.LBE1730:
 3332              	.LBB1732:
 3333              	.LBB1733:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3334              		.loc 2 436 0
 3335 023c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3335      000000
 3336              	.LBE1733:
 3337              	.LBE1732:
 3338              		.loc 1 248 0
 3339 0243 5B       		popq	%rbx
 3340              		.cfi_def_cfa_offset 8
 3341              	.LVL341:
 3342              	.LBB1735:
 3343              	.LBB1734:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3344              		.loc 2 436 0
 3345 0244 488B07   		movq	(%rdi), %rax
 3346 0247 488B8020 		movq	288(%rax), %rax
 3346      010000
 3347 024e FFE0     		jmp	*%rax
 3348              	.LVL342:
 3349              	.LBE1734:
 3350              	.LBE1735:
 3351              		.cfi_endproc
 3352              	.LFE492:
 3354              		.section	.text.unlikely._ZL11draw_arrow1j
 3355              	.LCOLDE52:
 3356              		.section	.text._ZL11draw_arrow1j
 3357              	.LHOTE52:
 3358              		.section	.text.unlikely._ZL14draw_arrow1barj,"ax",@progbits
 3359              	.LCOLDB53:
 3360              		.section	.text._ZL14draw_arrow1barj,"ax",@progbits
 3361              	.LHOTB53:
 3362              		.p2align 4,,15
 3364              	_ZL14draw_arrow1barj:
 3365              	.LFB493:
 3366              		.loc 1 251 0
 3367              		.cfi_startproc
 3368              	.LVL343:
 3369 0000 53       		pushq	%rbx
 3370              		.cfi_def_cfa_offset 16
 3371              		.cfi_offset 3, -16
 3372              		.loc 1 251 0
 3373 0001 89FB     		movl	%edi, %ebx
 3374              		.loc 1 252 0
 3375 0003 E8000000 		call	_ZL11draw_arrow1j
 3375      00
 3376              	.LVL344:
 3377              		.loc 1 253 0
 3378 0008 89DF     		movl	%ebx, %edi
 3379 000a F20F101D 		movsd	.LC4(%rip), %xmm3
 3379      00000000 
 3380              		.loc 1 254 0
 3381 0012 5B       		popq	%rbx
 3382              		.cfi_def_cfa_offset 8
 3383              	.LVL345:
 3384              		.loc 1 253 0
 3385 0013 F20F1015 		movsd	.LC35(%rip), %xmm2
 3385      00000000 
 3386 001b F20F100D 		movsd	.LC5(%rip), %xmm1
 3386      00000000 
 3387 0023 F20F1005 		movsd	.LC16(%rip), %xmm0
 3387      00000000 
 3388 002b E9000000 		jmp	_ZL9rectangleddddj
 3388      00
 3389              	.LVL346:
 3390              		.cfi_endproc
 3391              	.LFE493:
 3393              		.section	.text.unlikely._ZL14draw_arrow1barj
 3394              	.LCOLDE53:
 3395              		.section	.text._ZL14draw_arrow1barj
 3396              	.LHOTE53:
 3397              		.section	.text.unlikely._ZL16draw_round_arrowjf,"ax",@progbits
 3398              	.LCOLDB61:
 3399              		.section	.text._ZL16draw_round_arrowjf,"ax",@progbits
 3400              	.LHOTB61:
 3401              		.p2align 4,,15
 3403              	_ZL16draw_round_arrowjf:
 3404              	.LFB520:
 3405              		.loc 1 595 0
 3406              		.cfi_startproc
 3407              	.LVL347:
 3408 0000 660FEFFF 		pxor	%xmm7, %xmm7
 3409 0004 4155     		pushq	%r13
 3410              		.cfi_def_cfa_offset 16
 3411              		.cfi_offset 13, -16
 3412 0006 4154     		pushq	%r12
 3413              		.cfi_def_cfa_offset 24
 3414              		.cfi_offset 12, -24
 3415 0008 55       		pushq	%rbp
 3416              		.cfi_def_cfa_offset 32
 3417              		.cfi_offset 6, -32
 3418 0009 4189FD   		movl	%edi, %r13d
 3419 000c 53       		pushq	%rbx
 3420              		.cfi_def_cfa_offset 40
 3421              		.cfi_offset 3, -40
 3422 000d 41BC0100 		movl	$1, %r12d
 3422      0000
 3423 0013 31ED     		xorl	%ebp, %ebp
 3424 0015 F30F5AF8 		cvtss2sd	%xmm0, %xmm7
 3425 0019 4883EC38 		subq	$56, %rsp
 3426              		.cfi_def_cfa_offset 96
 3427 001d F20F117C 		movsd	%xmm7, 24(%rsp)
 3427      2418
 3428              	.LVL348:
 3429              	.L41:
 3430              	.LBB1736:
 3431              	.LBB1737:
 3432              	.LBB1738:
 3433              	.LBB1739:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3434              		.loc 2 52 0
 3435 0023 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3435      000000
 3436              	.LBE1739:
 3437              	.LBE1738:
 3438              		.loc 1 599 0
 3439 002a 85ED     		testl	%ebp, %ebp
 3440              	.LBB1742:
 3441              	.LBB1740:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3442              		.loc 2 52 0
 3443 002c 4489EE   		movl	%r13d, %esi
 3444 002f 488B07   		movq	(%rdi), %rax
 3445              	.LBE1740:
 3446              	.LBE1742:
 3447              		.loc 1 599 0
 3448 0032 0F84D801 		je	.L42
 3448      0000
 3449              	.LVL349:
 3450              	.LBB1743:
 3451              	.LBB1741:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3452              		.loc 2 52 0
 3453 0038 FF908800 		call	*136(%rax)
 3453      0000
 3454              	.LVL350:
 3455              	.LBE1741:
 3456              	.LBE1743:
 3457              		.loc 1 601 0
 3458 003e 4489EF   		movl	%r13d, %edi
 3459 0041 E8000000 		call	_ZL17set_outline_colorj
 3459      00
 3460              	.LVL351:
 3461              	.LBB1744:
 3462              	.LBB1745:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3463              		.loc 2 370 0
 3464 0046 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3464      000000
 3465 004d 488B07   		movq	(%rdi), %rax
 3466 0050 FF90D000 		call	*208(%rax)
 3466      0000
 3467              	.LVL352:
 3468              	.L43:
 3469              	.LBE1745:
 3470              	.LBE1744:
 3471              	.LBB1746:
 3472              	.LBB1747:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3473              		.loc 2 379 0
 3474 0056 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3474      000000
 3475 005d 660FEFC9 		pxor	%xmm1, %xmm1
 3476 0061 F20F1005 		movsd	.LC21(%rip), %xmm0
 3476      00000000 
 3477              	.LBE1747:
 3478              	.LBE1746:
 3479              	.LBB1749:
 3480              	.LBB1750:
 3481 0069 BB1B0000 		movl	$27, %ebx
 3481      00
 3482              	.LBE1750:
 3483              	.LBE1749:
 3484              	.LBB1753:
 3485              	.LBB1748:
 3486 006e 488B07   		movq	(%rdi), %rax
 3487 0071 FF90E000 		call	*224(%rax)
 3487      0000
 3488              	.LVL353:
 3489              	.LBE1748:
 3490              	.LBE1753:
 3491              	.LBB1754:
 3492              	.LBB1755:
 3493 0077 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3493      000000
 3494 007e 660FEFC9 		pxor	%xmm1, %xmm1
 3495 0082 F20F1005 		movsd	.LC1(%rip), %xmm0
 3495      00000000 
 3496 008a 488B07   		movq	(%rdi), %rax
 3497 008d FF90E000 		call	*224(%rax)
 3497      0000
 3498              	.LVL354:
 3499              	.LBE1755:
 3500              	.LBE1754:
 3501              	.LBB1756:
 3502              	.LBB1751:
 3503 0093 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3503      000000
 3504 009a F20F100D 		movsd	.LC35(%rip), %xmm1
 3504      00000000 
 3505 00a2 F20F1005 		movsd	.LC1(%rip), %xmm0
 3505      00000000 
 3506 00aa 488B07   		movq	(%rdi), %rax
 3507 00ad FF90E000 		call	*224(%rax)
 3507      0000
 3508              	.LVL355:
 3509              	.LBE1751:
 3510              	.LBE1756:
 3511              	.LBB1757:
 3512              		.loc 1 610 0
 3513 00b3 F20F1035 		movsd	.LC2(%rip), %xmm6
 3513      00000000 
 3514              	.LBE1757:
 3515              	.LBB1761:
 3516              	.LBB1752:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3517              		.loc 2 379 0
 3518 00bb F20F1005 		movsd	.LC54(%rip), %xmm0
 3518      00000000 
 3519 00c3 F20F100D 		movsd	.LC55(%rip), %xmm1
 3519      00000000 
 3520              	.LBE1752:
 3521              	.LBE1761:
 3522              	.LBB1762:
 3523              		.loc 1 610 0
 3524 00cb F20F1174 		movsd	%xmm6, 8(%rsp)
 3524      2408
 3525 00d1 F20F1015 		movsd	.LC56(%rip), %xmm2
 3525      00000000 
 3526 00d9 EB40     		jmp	.L45
 3527              	.LVL356:
 3528 00db 0F1F4400 		.p2align 4,,10
 3528      00
 3529              		.p2align 3
 3530              	.L53:
 3531 00e0 660F28C2 		movapd	%xmm2, %xmm0
 3532 00e4 488D7424 		leaq	32(%rsp), %rsi
 3532      20
 3533 00e9 488D7C24 		leaq	40(%rsp), %rdi
 3533      28
 3534 00ee F20F1154 		movsd	%xmm2, 16(%rsp)
 3534      2410
 3535              	.LVL357:
 3536 00f4 F20F5E05 		divsd	.LC58(%rip), %xmm0
 3536      00000000 
 3537 00fc F20F5905 		mulsd	.LC59(%rip), %xmm0
 3537      00000000 
 3538 0104 E8000000 		call	sincos
 3538      00
 3539              	.LVL358:
 3540 0109 F20F1044 		movsd	32(%rsp), %xmm0
 3540      2420
 3541 010f F20F104C 		movsd	40(%rsp), %xmm1
 3541      2428
 3542 0115 F20F1054 		movsd	16(%rsp), %xmm2
 3542      2410
 3543              	.LVL359:
 3544              	.L45:
 3545              	.LBB1758:
 3546              	.LBB1759:
 3547              	.LBB1760:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3548              		.loc 2 379 0 discriminator 2
 3549 011b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3549      000000
 3550 0122 F20F105C 		movsd	8(%rsp), %xmm3
 3550      2408
 3551 0128 F20F1154 		movsd	%xmm2, 16(%rsp)
 3551      2410
 3552              	.LVL360:
 3553 012e F20F59C3 		mulsd	%xmm3, %xmm0
 3554              	.LVL361:
 3555 0132 488B07   		movq	(%rdi), %rax
 3556 0135 F20F59CB 		mulsd	%xmm3, %xmm1
 3557              	.LVL362:
 3558 0139 FF90E000 		call	*224(%rax)
 3558      0000
 3559              	.LVL363:
 3560              	.LBE1760:
 3561              	.LBE1759:
 3562              	.LBE1758:
 3563              		.loc 1 610 0 discriminator 2
 3564 013f F20F105C 		movsd	8(%rsp), %xmm3
 3564      2408
 3565 0145 83EB01   		subl	$1, %ebx
 3566              	.LVL364:
 3567 0148 F20F1054 		movsd	16(%rsp), %xmm2
 3567      2410
 3568 014e F20F5C1D 		subsd	.LC57(%rip), %xmm3
 3568      00000000 
 3569 0156 F20F5C54 		subsd	24(%rsp), %xmm2
 3569      2418
 3570              	.LVL365:
 3571 015c F20F115C 		movsd	%xmm3, 8(%rsp)
 3571      2408
 3572              	.LVL366:
 3573 0162 0F8578FF 		jne	.L53
 3573      FFFF
 3574 0168 BB1C0000 		movl	$28, %ebx
 3574      00
 3575              	.LVL367:
 3576 016d 0F1F00   		.p2align 4,,10
 3577              		.p2align 3
 3578              	.L46:
 3579 0170 660F28C2 		movapd	%xmm2, %xmm0
 3580 0174 488D7424 		leaq	32(%rsp), %rsi
 3580      20
 3581 0179 488D7C24 		leaq	40(%rsp), %rdi
 3581      28
 3582 017e F20F1154 		movsd	%xmm2, 16(%rsp)
 3582      2410
 3583 0184 F20F5E05 		divsd	.LC58(%rip), %xmm0
 3583      00000000 
 3584 018c F20F5905 		mulsd	.LC59(%rip), %xmm0
 3584      00000000 
 3585 0194 E8000000 		call	sincos
 3585      00
 3586              	.LVL368:
 3587              	.LBE1762:
 3588              	.LBB1763:
 3589              	.LBB1764:
 3590              	.LBB1765:
 3591              	.LBB1766:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3592              		.loc 2 379 0 discriminator 2
 3593 0199 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3593      000000
 3594 01a0 F20F104C 		movsd	8(%rsp), %xmm1
 3594      2408
 3595 01a6 F20F1044 		movsd	32(%rsp), %xmm0
 3595      2420
 3596 01ac 488B07   		movq	(%rdi), %rax
 3597 01af F20F59C1 		mulsd	%xmm1, %xmm0
 3598              	.LVL369:
 3599 01b3 F20F594C 		mulsd	40(%rsp), %xmm1
 3599      2428
 3600              	.LVL370:
 3601 01b9 FF90E000 		call	*224(%rax)
 3601      0000
 3602              	.LVL371:
 3603              	.LBE1766:
 3604              	.LBE1765:
 3605              	.LBE1764:
 3606              		.loc 1 614 0 discriminator 2
 3607 01bf F20F104C 		movsd	8(%rsp), %xmm1
 3607      2408
 3608 01c5 83EB01   		subl	$1, %ebx
 3609              	.LVL372:
 3610 01c8 F20F1054 		movsd	16(%rsp), %xmm2
 3610      2410
 3611 01ce F20F5C0D 		subsd	.LC60(%rip), %xmm1
 3611      00000000 
 3612 01d6 F20F5854 		addsd	24(%rsp), %xmm2
 3612      2418
 3613              	.LVL373:
 3614 01dc F20F114C 		movsd	%xmm1, 8(%rsp)
 3614      2408
 3615              	.LVL374:
 3616 01e2 758C     		jne	.L46
 3617              	.LBE1763:
 3618              	.LBB1767:
 3619              	.LBB1768:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3620              		.loc 2 436 0
 3621 01e4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3621      000000
 3622              	.LBE1768:
 3623              	.LBE1767:
 3624              		.loc 1 618 0
 3625 01eb 85ED     		testl	%ebp, %ebp
 3626              	.LBB1771:
 3627              	.LBB1769:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3628              		.loc 2 436 0
 3629 01ed 488B07   		movq	(%rdi), %rax
 3630              	.LBE1769:
 3631              	.LBE1771:
 3632              		.loc 1 618 0
 3633 01f0 743E     		je	.L47
 3634              	.LBB1772:
 3635              	.LBB1770:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3636              		.loc 2 436 0
 3637 01f2 FF902001 		call	*288(%rax)
 3637      0000
 3638              	.LVL375:
 3639              	.LBE1770:
 3640              	.LBE1772:
 3641              	.LBE1737:
 3642              		.loc 1 598 0
 3643 01f8 4183FC02 		cmpl	$2, %r12d
 3644 01fc 7538     		jne	.L49
 3645              	.LBE1736:
 3646              		.loc 1 624 0
 3647 01fe 4883C438 		addq	$56, %rsp
 3648              		.cfi_remember_state
 3649              		.cfi_def_cfa_offset 40
 3650 0202 5B       		popq	%rbx
 3651              		.cfi_def_cfa_offset 32
 3652 0203 5D       		popq	%rbp
 3653              		.cfi_def_cfa_offset 24
 3654 0204 415C     		popq	%r12
 3655              		.cfi_def_cfa_offset 16
 3656              	.LVL376:
 3657 0206 415D     		popq	%r13
 3658              		.cfi_def_cfa_offset 8
 3659              	.LVL377:
 3660 0208 C3       		ret
 3661              	.LVL378:
 3662 0209 0F1F8000 		.p2align 4,,10
 3662      000000
 3663              		.p2align 3
 3664              	.L42:
 3665              		.cfi_restore_state
 3666              	.LBB1780:
 3667              	.LBB1779:
 3668              	.LBB1773:
 3669              	.LBB1774:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3670              		.loc 2 52 0
 3671 0210 FF908800 		call	*136(%rax)
 3671      0000
 3672              	.LVL379:
 3673              	.LBE1774:
 3674              	.LBE1773:
 3675              	.LBB1775:
 3676              	.LBB1776:
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
 3677              		.loc 2 455 0
 3678 0216 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3678      000000
 3679 021d 488B07   		movq	(%rdi), %rax
 3680 0220 FF903001 		call	*304(%rax)
 3680      0000
 3681              	.LVL380:
 3682 0226 E92BFEFF 		jmp	.L43
 3682      FF
 3683              	.LVL381:
 3684 022b 0F1F4400 		.p2align 4,,10
 3684      00
 3685              		.p2align 3
 3686              	.L47:
 3687              	.LBE1776:
 3688              	.LBE1775:
 3689              	.LBB1777:
 3690              	.LBB1778:
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
 3691              		.loc 2 466 0
 3692 0230 FF904001 		call	*320(%rax)
 3692      0000
 3693              	.LVL382:
 3694              	.L49:
 3695 0236 83C501   		addl	$1, %ebp
 3696 0239 4183C401 		addl	$1, %r12d
 3697 023d E9E1FDFF 		jmp	.L41
 3697      FF
 3698              	.LBE1778:
 3699              	.LBE1777:
 3700              	.LBE1779:
 3701              	.LBE1780:
 3702              		.cfi_endproc
 3703              	.LFE520:
 3705              		.section	.text.unlikely._ZL16draw_round_arrowjf
 3706              	.LCOLDE61:
 3707              		.section	.text._ZL16draw_round_arrowjf
 3708              	.LHOTE61:
 3709              		.section	.text.unlikely._ZL9draw_undoj,"ax",@progbits
 3710              	.LCOLDB63:
 3711              		.section	.text._ZL9draw_undoj,"ax",@progbits
 3712              	.LHOTB63:
 3713              		.p2align 4,,15
 3715              	_ZL9draw_undoj:
 3716              	.LFB523:
 3717              		.loc 1 639 0
 3718              		.cfi_startproc
 3719              	.LVL383:
 3720              	.LBB1781:
 3721              	.LBB1782:
 3722              	.LBB1783:
 3723              	.LBB1784:
 3724              		.file 4 "fltk-1.3.4-1/FL/Fl_Device.H"
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
  85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
  87:fltk-1.3.4-1/FL/Fl_Device.H ****    
  88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the destructors of
  89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
  90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
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
 3725              		.loc 4 331 0
 3726 0000 660FEFE4 		pxor	%xmm4, %xmm4
 3727              	.LBE1784:
 3728              	.LBE1783:
 3729              	.LBE1782:
 3730              	.LBE1781:
 3731              		.loc 1 639 0
 3732 0004 53       		pushq	%rbx
 3733              		.cfi_def_cfa_offset 16
 3734              		.cfi_offset 3, -16
 3735              	.LBB1791:
 3736              	.LBB1789:
 3737              	.LBB1787:
 3738              	.LBB1785:
 3739              		.loc 4 331 0
 3740 0005 F20F101D 		movsd	.LC2(%rip), %xmm3
 3740      00000000 
 3741              	.LBE1785:
 3742              	.LBE1787:
 3743              	.LBE1789:
 3744              	.LBE1791:
 3745              		.loc 1 639 0
 3746 000d 89FB     		movl	%edi, %ebx
 3747              	.LBB1792:
 3748              	.LBB1790:
 3749              	.LBB1788:
 3750              	.LBB1786:
 3751              		.loc 4 331 0
 3752 000f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3752      000000
 3753              	.LVL384:
 3754 0016 F20F102D 		movsd	.LC18(%rip), %xmm5
 3754      00000000 
 3755 001e 660F28D4 		movapd	%xmm4, %xmm2
 3756 0022 660F28CC 		movapd	%xmm4, %xmm1
 3757 0026 660F28C3 		movapd	%xmm3, %xmm0
 3758 002a E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 3758      00
 3759              	.LVL385:
 3760              	.LBE1786:
 3761              	.LBE1788:
 3762              	.LBE1790:
 3763              	.LBE1792:
 3764              	.LBB1793:
 3765              	.LBB1794:
 3766              	.LBB1795:
 3767              	.LBB1796:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 3768              		.loc 4 327 0
 3769 002f 660FEFED 		pxor	%xmm5, %xmm5
 3770 0033 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3770      000000
 3771 003a F20F101D 		movsd	.LC1(%rip), %xmm3
 3771      00000000 
 3772 0042 F20F1005 		movsd	.LC2(%rip), %xmm0
 3772      00000000 
 3773 004a 660F28E5 		movapd	%xmm5, %xmm4
 3774 004e 660F28D5 		movapd	%xmm5, %xmm2
 3775 0052 660F28CD 		movapd	%xmm5, %xmm1
 3776 0056 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 3776      00
 3777              	.LVL386:
 3778              	.LBE1796:
 3779              	.LBE1795:
 3780              	.LBE1794:
 3781              	.LBE1793:
 3782              		.loc 1 642 0
 3783 005b 89DF     		movl	%ebx, %edi
 3784 005d F30F1005 		movss	.LC62(%rip), %xmm0
 3784      00000000 
 3785 0065 E8000000 		call	_ZL16draw_round_arrowjf
 3785      00
 3786              	.LVL387:
 3787              	.LBB1797:
 3788              	.LBB1798:
 3789              	.LBB1799:
 3790              	.LBB1800:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 3791              		.loc 4 327 0
 3792 006a 660FEFED 		pxor	%xmm5, %xmm5
 3793 006e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3793      000000
 3794 0075 F20F101D 		movsd	.LC1(%rip), %xmm3
 3794      00000000 
 3795 007d F20F1005 		movsd	.LC2(%rip), %xmm0
 3795      00000000 
 3796 0085 660F28E5 		movapd	%xmm5, %xmm4
 3797 0089 660F28D5 		movapd	%xmm5, %xmm2
 3798 008d 660F28CD 		movapd	%xmm5, %xmm1
 3799 0091 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 3799      00
 3800              	.LVL388:
 3801              	.LBE1800:
 3802              	.LBE1799:
 3803              	.LBE1798:
 3804              	.LBE1797:
 3805              	.LBB1801:
 3806              	.LBB1802:
 3807              	.LBB1803:
 3808              	.LBB1804:
 3809              		.loc 4 331 0
 3810 0096 660FEFE4 		pxor	%xmm4, %xmm4
 3811 009a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3811      000000
 3812 00a1 F20F101D 		movsd	.LC2(%rip), %xmm3
 3812      00000000 
 3813              	.LBE1804:
 3814              	.LBE1803:
 3815              	.LBE1802:
 3816              	.LBE1801:
 3817              		.loc 1 645 0
 3818 00a9 5B       		popq	%rbx
 3819              		.cfi_def_cfa_offset 8
 3820              	.LVL389:
 3821              	.LBB1808:
 3822              	.LBB1807:
 3823              	.LBB1806:
 3824              	.LBB1805:
 3825              		.loc 4 331 0
 3826 00aa F20F102D 		movsd	.LC17(%rip), %xmm5
 3826      00000000 
 3827 00b2 660F28D4 		movapd	%xmm4, %xmm2
 3828 00b6 660F28CC 		movapd	%xmm4, %xmm1
 3829 00ba 660F28C3 		movapd	%xmm3, %xmm0
 3830 00be E9000000 		jmp	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 3830      00
 3831              	.LVL390:
 3832              	.LBE1805:
 3833              	.LBE1806:
 3834              	.LBE1807:
 3835              	.LBE1808:
 3836              		.cfi_endproc
 3837              	.LFE523:
 3839              		.section	.text.unlikely._ZL9draw_undoj
 3840              	.LCOLDE63:
 3841              		.section	.text._ZL9draw_undoj
 3842              	.LHOTE63:
 3843              		.section	.text.unlikely._ZL9draw_redoj,"ax",@progbits
 3844              	.LCOLDB64:
 3845              		.section	.text._ZL9draw_redoj,"ax",@progbits
 3846              	.LHOTB64:
 3847              		.p2align 4,,15
 3849              	_ZL9draw_redoj:
 3850              	.LFB524:
 3851              		.loc 1 647 0
 3852              		.cfi_startproc
 3853              	.LVL391:
 3854              	.LBB1809:
 3855              	.LBB1810:
 3856              	.LBB1811:
 3857              	.LBB1812:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 3858              		.loc 4 327 0
 3859 0000 660FEFED 		pxor	%xmm5, %xmm5
 3860              	.LBE1812:
 3861              	.LBE1811:
 3862              	.LBE1810:
 3863              	.LBE1809:
 3864              		.loc 1 647 0
 3865 0004 53       		pushq	%rbx
 3866              		.cfi_def_cfa_offset 16
 3867              		.cfi_offset 3, -16
 3868              		.loc 1 647 0
 3869 0005 89FB     		movl	%edi, %ebx
 3870              	.LBB1816:
 3871              	.LBB1815:
 3872              	.LBB1814:
 3873              	.LBB1813:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 3874              		.loc 4 327 0
 3875 0007 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3875      000000
 3876              	.LVL392:
 3877 000e F20F101D 		movsd	.LC2(%rip), %xmm3
 3877      00000000 
 3878 0016 660F28E5 		movapd	%xmm5, %xmm4
 3879 001a 660F28D5 		movapd	%xmm5, %xmm2
 3880 001e 660F28CD 		movapd	%xmm5, %xmm1
 3881 0022 F20F1005 		movsd	.LC1(%rip), %xmm0
 3881      00000000 
 3882 002a E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 3882      00
 3883              	.LVL393:
 3884              	.LBE1813:
 3885              	.LBE1814:
 3886              	.LBE1815:
 3887              	.LBE1816:
 3888              		.loc 1 649 0
 3889 002f 89DF     		movl	%ebx, %edi
 3890 0031 E8000000 		call	_ZL9draw_undoj
 3890      00
 3891              	.LVL394:
 3892              	.LBB1817:
 3893              	.LBB1818:
 3894              	.LBB1819:
 3895              	.LBB1820:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 3896              		.loc 4 327 0
 3897 0036 660FEFED 		pxor	%xmm5, %xmm5
 3898 003a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3898      000000
 3899              	.LBE1820:
 3900              	.LBE1819:
 3901              	.LBE1818:
 3902              	.LBE1817:
 3903              		.loc 1 651 0
 3904 0041 5B       		popq	%rbx
 3905              		.cfi_def_cfa_offset 8
 3906              	.LVL395:
 3907              	.LBB1824:
 3908              	.LBB1823:
 3909              	.LBB1822:
 3910              	.LBB1821:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 3911              		.loc 4 327 0
 3912 0042 F20F101D 		movsd	.LC2(%rip), %xmm3
 3912      00000000 
 3913 004a 660F28E5 		movapd	%xmm5, %xmm4
 3914 004e 660F28D5 		movapd	%xmm5, %xmm2
 3915 0052 660F28CD 		movapd	%xmm5, %xmm1
 3916 0056 F20F1005 		movsd	.LC1(%rip), %xmm0
 3916      00000000 
 3917 005e E9000000 		jmp	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 3917      00
 3918              	.LVL396:
 3919              	.LBE1821:
 3920              	.LBE1822:
 3921              	.LBE1823:
 3922              	.LBE1824:
 3923              		.cfi_endproc
 3924              	.LFE524:
 3926              		.section	.text.unlikely._ZL9draw_redoj
 3927              	.LCOLDE64:
 3928              		.section	.text._ZL9draw_redoj
 3929              	.LHOTE64:
 3930              		.section	.text.unlikely._ZL9draw_fltkj,"ax",@progbits
 3931              	.LCOLDB74:
 3932              		.section	.text._ZL9draw_fltkj,"ax",@progbits
 3933              	.LHOTB74:
 3934              		.p2align 4,,15
 3936              	_ZL9draw_fltkj:
 3937              	.LFB490:
 3938              		.loc 1 196 0
 3939              		.cfi_startproc
 3940              	.LVL397:
 3941 0000 53       		pushq	%rbx
 3942              		.cfi_def_cfa_offset 16
 3943              		.cfi_offset 3, -16
 3944              		.loc 1 196 0
 3945 0001 89FB     		movl	%edi, %ebx
 3946              	.LVL398:
 3947              	.LBB1825:
 3948              	.LBB1826:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3949              		.loc 2 52 0
 3950 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3950      000000
 3951              	.LVL399:
 3952 000a 89DE     		movl	%ebx, %esi
 3953 000c 488B07   		movq	(%rdi), %rax
 3954 000f FF908800 		call	*136(%rax)
 3954      0000
 3955              	.LVL400:
 3956              	.LBE1826:
 3957              	.LBE1825:
 3958              	.LBB1827:
 3959              	.LBB1828:
 455:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3960              		.loc 2 455 0
 3961 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3961      000000
 3962 001c 488B07   		movq	(%rdi), %rax
 3963 001f FF903001 		call	*304(%rax)
 3963      0000
 3964              	.LVL401:
 3965              	.LBE1828:
 3966              	.LBE1827:
 3967              	.LBB1829:
 3968              	.LBB1830:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3969              		.loc 2 379 0
 3970 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3970      000000
 3971 002c F20F100D 		movsd	.LC43(%rip), %xmm1
 3971      00000000 
 3972 0034 F20F1005 		movsd	.LC65(%rip), %xmm0
 3972      00000000 
 3973 003c 488B07   		movq	(%rdi), %rax
 3974 003f FF90E000 		call	*224(%rax)
 3974      0000
 3975              	.LVL402:
 3976              	.LBE1830:
 3977              	.LBE1829:
 3978              	.LBB1831:
 3979              	.LBB1832:
 3980 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3980      000000
 3981 004c F20F100D 		movsd	.LC43(%rip), %xmm1
 3981      00000000 
 3982 0054 F20F1005 		movsd	.LC1(%rip), %xmm0
 3982      00000000 
 3983 005c 488B07   		movq	(%rdi), %rax
 3984 005f FF90E000 		call	*224(%rax)
 3984      0000
 3985              	.LVL403:
 3986              	.LBE1832:
 3987              	.LBE1831:
 3988              	.LBB1833:
 3989              	.LBB1834:
 3990 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3990      000000
 3991 006c F20F100D 		movsd	.LC49(%rip), %xmm1
 3991      00000000 
 3992 0074 F20F1005 		movsd	.LC1(%rip), %xmm0
 3992      00000000 
 3993 007c 488B07   		movq	(%rdi), %rax
 3994 007f FF90E000 		call	*224(%rax)
 3994      0000
 3995              	.LVL404:
 3996              	.LBE1834:
 3997              	.LBE1833:
 3998              	.LBB1835:
 3999              	.LBB1836:
 4000 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4000      000000
 4001 008c F20F100D 		movsd	.LC49(%rip), %xmm1
 4001      00000000 
 4002 0094 F20F1005 		movsd	.LC66(%rip), %xmm0
 4002      00000000 
 4003 009c 488B07   		movq	(%rdi), %rax
 4004 009f FF90E000 		call	*224(%rax)
 4004      0000
 4005              	.LVL405:
 4006              	.LBE1836:
 4007              	.LBE1835:
 4008              	.LBB1837:
 4009              	.LBB1838:
 4010 00a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4010      000000
 4011 00ac F20F100D 		movsd	.LC21(%rip), %xmm1
 4011      00000000 
 4012 00b4 F20F1005 		movsd	.LC66(%rip), %xmm0
 4012      00000000 
 4013 00bc 488B07   		movq	(%rdi), %rax
 4014 00bf FF90E000 		call	*224(%rax)
 4014      0000
 4015              	.LVL406:
 4016              	.LBE1838:
 4017              	.LBE1837:
 4018              	.LBB1839:
 4019              	.LBB1840:
 4020 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4020      000000
 4021 00cc F20F100D 		movsd	.LC21(%rip), %xmm1
 4021      00000000 
 4022 00d4 F20F1005 		movsd	.LC67(%rip), %xmm0
 4022      00000000 
 4023 00dc 488B07   		movq	(%rdi), %rax
 4024 00df FF90E000 		call	*224(%rax)
 4024      0000
 4025              	.LVL407:
 4026              	.LBE1840:
 4027              	.LBE1839:
 4028              	.LBB1841:
 4029              	.LBB1842:
 4030 00e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4030      000000
 4031 00ec F20F100D 		movsd	.LC23(%rip), %xmm1
 4031      00000000 
 4032 00f4 F20F1005 		movsd	.LC67(%rip), %xmm0
 4032      00000000 
 4033 00fc 488B07   		movq	(%rdi), %rax
 4034 00ff FF90E000 		call	*224(%rax)
 4034      0000
 4035              	.LVL408:
 4036              	.LBE1842:
 4037              	.LBE1841:
 4038              	.LBB1843:
 4039              	.LBB1844:
 4040 0105 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4040      000000
 4041 010c F20F100D 		movsd	.LC23(%rip), %xmm1
 4041      00000000 
 4042 0114 F20F1005 		movsd	.LC66(%rip), %xmm0
 4042      00000000 
 4043 011c 488B07   		movq	(%rdi), %rax
 4044 011f FF90E000 		call	*224(%rax)
 4044      0000
 4045              	.LVL409:
 4046              	.LBE1844:
 4047              	.LBE1843:
 4048              	.LBB1845:
 4049              	.LBB1846:
 4050 0125 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4050      000000
 4051 012c F20F100D 		movsd	.LC50(%rip), %xmm1
 4051      00000000 
 4052 0134 F20F1005 		movsd	.LC66(%rip), %xmm0
 4052      00000000 
 4053 013c 488B07   		movq	(%rdi), %rax
 4054 013f FF90E000 		call	*224(%rax)
 4054      0000
 4055              	.LVL410:
 4056              	.LBE1846:
 4057              	.LBE1845:
 4058              	.LBB1847:
 4059              	.LBB1848:
 4060 0145 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4060      000000
 4061 014c F20F100D 		movsd	.LC50(%rip), %xmm1
 4061      00000000 
 4062 0154 F20F1005 		movsd	.LC65(%rip), %xmm0
 4062      00000000 
 4063 015c 488B07   		movq	(%rdi), %rax
 4064 015f FF90E000 		call	*224(%rax)
 4064      0000
 4065              	.LVL411:
 4066              	.LBE1848:
 4067              	.LBE1847:
 4068              	.LBB1849:
 4069              	.LBB1850:
 4070              		.loc 2 466 0
 4071 0165 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4071      000000
 4072 016c 488B07   		movq	(%rdi), %rax
 4073 016f FF904001 		call	*320(%rax)
 4073      0000
 4074              	.LVL412:
 4075              	.LBE1850:
 4076              	.LBE1849:
 4077              	.LBB1851:
 4078              	.LBB1852:
 455:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4079              		.loc 2 455 0
 4080 0175 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4080      000000
 4081 017c 488B07   		movq	(%rdi), %rax
 4082 017f FF903001 		call	*304(%rax)
 4082      0000
 4083              	.LVL413:
 4084              	.LBE1852:
 4085              	.LBE1851:
 4086              	.LBB1853:
 4087              	.LBB1854:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4088              		.loc 2 379 0
 4089 0185 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4089      000000
 4090 018c F20F100D 		movsd	.LC43(%rip), %xmm1
 4090      00000000 
 4091 0194 F20F1005 		movsd	.LC1(%rip), %xmm0
 4091      00000000 
 4092 019c 488B07   		movq	(%rdi), %rax
 4093 019f FF90E000 		call	*224(%rax)
 4093      0000
 4094              	.LVL414:
 4095              	.LBE1854:
 4096              	.LBE1853:
 4097              	.LBB1855:
 4098              	.LBB1856:
 4099 01a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4099      000000
 4100 01ac F20F100D 		movsd	.LC43(%rip), %xmm1
 4100      00000000 
 4101 01b4 F20F1005 		movsd	.LC5(%rip), %xmm0
 4101      00000000 
 4102 01bc 488B07   		movq	(%rdi), %rax
 4103 01bf FF90E000 		call	*224(%rax)
 4103      0000
 4104              	.LVL415:
 4105              	.LBE1856:
 4106              	.LBE1855:
 4107              	.LBB1857:
 4108              	.LBB1858:
 4109 01c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4109      000000
 4110 01cc F20F100D 		movsd	.LC68(%rip), %xmm1
 4110      00000000 
 4111 01d4 F20F1005 		movsd	.LC5(%rip), %xmm0
 4111      00000000 
 4112 01dc 488B07   		movq	(%rdi), %rax
 4113 01df FF90E000 		call	*224(%rax)
 4113      0000
 4114              	.LVL416:
 4115              	.LBE1858:
 4116              	.LBE1857:
 4117              	.LBB1859:
 4118              	.LBB1860:
 4119 01e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4119      000000
 4120 01ec F20F100D 		movsd	.LC68(%rip), %xmm1
 4120      00000000 
 4121 01f4 660FEFC0 		pxor	%xmm0, %xmm0
 4122 01f8 488B07   		movq	(%rdi), %rax
 4123 01fb FF90E000 		call	*224(%rax)
 4123      0000
 4124              	.LVL417:
 4125              	.LBE1860:
 4126              	.LBE1859:
 4127              	.LBB1861:
 4128              	.LBB1862:
 4129 0201 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4129      000000
 4130 0208 F20F100D 		movsd	.LC50(%rip), %xmm1
 4130      00000000 
 4131 0210 660FEFC0 		pxor	%xmm0, %xmm0
 4132 0214 488B07   		movq	(%rdi), %rax
 4133 0217 FF90E000 		call	*224(%rax)
 4133      0000
 4134              	.LVL418:
 4135              	.LBE1862:
 4136              	.LBE1861:
 4137              	.LBB1863:
 4138              	.LBB1864:
 4139 021d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4139      000000
 4140 0224 F20F100D 		movsd	.LC50(%rip), %xmm1
 4140      00000000 
 4141 022c F20F1005 		movsd	.LC1(%rip), %xmm0
 4141      00000000 
 4142 0234 488B07   		movq	(%rdi), %rax
 4143 0237 FF90E000 		call	*224(%rax)
 4143      0000
 4144              	.LVL419:
 4145              	.LBE1864:
 4146              	.LBE1863:
 4147              	.LBB1865:
 4148              	.LBB1866:
 4149              		.loc 2 466 0
 4150 023d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4150      000000
 4151 0244 488B07   		movq	(%rdi), %rax
 4152 0247 FF904001 		call	*320(%rax)
 4152      0000
 4153              	.LVL420:
 4154              	.LBE1866:
 4155              	.LBE1865:
 4156              	.LBB1867:
 4157              	.LBB1868:
 455:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4158              		.loc 2 455 0
 4159 024d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4159      000000
 4160 0254 488B07   		movq	(%rdi), %rax
 4161 0257 FF903001 		call	*304(%rax)
 4161      0000
 4162              	.LVL421:
 4163              	.LBE1868:
 4164              	.LBE1867:
 4165              	.LBB1869:
 4166              	.LBB1870:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4167              		.loc 2 379 0
 4168 025d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4168      000000
 4169 0264 F20F100D 		movsd	.LC43(%rip), %xmm1
 4169      00000000 
 4170 026c F20F1005 		movsd	.LC21(%rip), %xmm0
 4170      00000000 
 4171 0274 488B07   		movq	(%rdi), %rax
 4172 0277 FF90E000 		call	*224(%rax)
 4172      0000
 4173              	.LVL422:
 4174              	.LBE1870:
 4175              	.LBE1869:
 4176              	.LBB1871:
 4177              	.LBB1872:
 4178 027d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4178      000000
 4179 0284 F20F100D 		movsd	.LC43(%rip), %xmm1
 4179      00000000 
 4180 028c F20F1005 		movsd	.LC69(%rip), %xmm0
 4180      00000000 
 4181 0294 488B07   		movq	(%rdi), %rax
 4182 0297 FF90E000 		call	*224(%rax)
 4182      0000
 4183              	.LVL423:
 4184              	.LBE1872:
 4185              	.LBE1871:
 4186              	.LBB1873:
 4187              	.LBB1874:
 4188 029d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4188      000000
 4189 02a4 F20F100D 		movsd	.LC49(%rip), %xmm1
 4189      00000000 
 4190 02ac F20F1005 		movsd	.LC69(%rip), %xmm0
 4190      00000000 
 4191 02b4 488B07   		movq	(%rdi), %rax
 4192 02b7 FF90E000 		call	*224(%rax)
 4192      0000
 4193              	.LVL424:
 4194              	.LBE1874:
 4195              	.LBE1873:
 4196              	.LBB1875:
 4197              	.LBB1876:
 4198 02bd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4198      000000
 4199 02c4 F20F100D 		movsd	.LC49(%rip), %xmm1
 4199      00000000 
 4200 02cc F20F1005 		movsd	.LC16(%rip), %xmm0
 4200      00000000 
 4201 02d4 488B07   		movq	(%rdi), %rax
 4202 02d7 FF90E000 		call	*224(%rax)
 4202      0000
 4203              	.LVL425:
 4204              	.LBE1876:
 4205              	.LBE1875:
 4206              	.LBB1877:
 4207              	.LBB1878:
 4208 02dd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4208      000000
 4209 02e4 F20F100D 		movsd	.LC50(%rip), %xmm1
 4209      00000000 
 4210 02ec F20F1005 		movsd	.LC16(%rip), %xmm0
 4210      00000000 
 4211 02f4 488B07   		movq	(%rdi), %rax
 4212 02f7 FF90E000 		call	*224(%rax)
 4212      0000
 4213              	.LVL426:
 4214              	.LBE1878:
 4215              	.LBE1877:
 4216              	.LBB1879:
 4217              	.LBB1880:
 4218 02fd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4218      000000
 4219 0304 F20F100D 		movsd	.LC50(%rip), %xmm1
 4219      00000000 
 4220 030c F20F1005 		movsd	.LC14(%rip), %xmm0
 4220      00000000 
 4221 0314 488B07   		movq	(%rdi), %rax
 4222 0317 FF90E000 		call	*224(%rax)
 4222      0000
 4223              	.LVL427:
 4224              	.LBE1880:
 4225              	.LBE1879:
 4226              	.LBB1881:
 4227              	.LBB1882:
 4228 031d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4228      000000
 4229 0324 F20F100D 		movsd	.LC49(%rip), %xmm1
 4229      00000000 
 4230 032c F20F1005 		movsd	.LC14(%rip), %xmm0
 4230      00000000 
 4231 0334 488B07   		movq	(%rdi), %rax
 4232 0337 FF90E000 		call	*224(%rax)
 4232      0000
 4233              	.LVL428:
 4234              	.LBE1882:
 4235              	.LBE1881:
 4236              	.LBB1883:
 4237              	.LBB1884:
 4238 033d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4238      000000
 4239 0344 F20F100D 		movsd	.LC49(%rip), %xmm1
 4239      00000000 
 4240 034c F20F1005 		movsd	.LC21(%rip), %xmm0
 4240      00000000 
 4241 0354 488B07   		movq	(%rdi), %rax
 4242 0357 FF90E000 		call	*224(%rax)
 4242      0000
 4243              	.LVL429:
 4244              	.LBE1884:
 4245              	.LBE1883:
 4246              	.LBB1885:
 4247              	.LBB1886:
 4248              		.loc 2 466 0
 4249 035d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4249      000000
 4250 0364 488B07   		movq	(%rdi), %rax
 4251 0367 FF904001 		call	*320(%rax)
 4251      0000
 4252              	.LVL430:
 4253              	.LBE1886:
 4254              	.LBE1885:
 4255              	.LBB1887:
 4256              	.LBB1888:
 455:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4257              		.loc 2 455 0
 4258 036d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4258      000000
 4259 0374 488B07   		movq	(%rdi), %rax
 4260 0377 FF903001 		call	*304(%rax)
 4260      0000
 4261              	.LVL431:
 4262              	.LBE1888:
 4263              	.LBE1887:
 4264              	.LBB1889:
 4265              	.LBB1890:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4266              		.loc 2 379 0
 4267 037d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4267      000000
 4268 0384 F20F100D 		movsd	.LC43(%rip), %xmm1
 4268      00000000 
 4269 038c F20F1005 		movsd	.LC69(%rip), %xmm0
 4269      00000000 
 4270 0394 488B07   		movq	(%rdi), %rax
 4271 0397 FF90E000 		call	*224(%rax)
 4271      0000
 4272              	.LVL432:
 4273              	.LBE1890:
 4274              	.LBE1889:
 4275              	.LBB1891:
 4276              	.LBB1892:
 4277 039d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4277      000000
 4278 03a4 F20F100D 		movsd	.LC43(%rip), %xmm1
 4278      00000000 
 4279 03ac F20F1005 		movsd	.LC70(%rip), %xmm0
 4279      00000000 
 4280 03b4 488B07   		movq	(%rdi), %rax
 4281 03b7 FF90E000 		call	*224(%rax)
 4281      0000
 4282              	.LVL433:
 4283              	.LBE1892:
 4284              	.LBE1891:
 4285              	.LBB1893:
 4286              	.LBB1894:
 4287 03bd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4287      000000
 4288 03c4 F20F100D 		movsd	.LC32(%rip), %xmm1
 4288      00000000 
 4289 03cc F20F1005 		movsd	.LC70(%rip), %xmm0
 4289      00000000 
 4290 03d4 488B07   		movq	(%rdi), %rax
 4291 03d7 FF90E000 		call	*224(%rax)
 4291      0000
 4292              	.LVL434:
 4293              	.LBE1894:
 4294              	.LBE1893:
 4295              	.LBB1895:
 4296              	.LBB1896:
 4297 03dd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4297      000000
 4298 03e4 F20F100D 		movsd	.LC43(%rip), %xmm1
 4298      00000000 
 4299 03ec F20F1005 		movsd	.LC71(%rip), %xmm0
 4299      00000000 
 4300 03f4 488B07   		movq	(%rdi), %rax
 4301 03f7 FF90E000 		call	*224(%rax)
 4301      0000
 4302              	.LVL435:
 4303              	.LBE1896:
 4304              	.LBE1895:
 4305              	.LBB1897:
 4306              	.LBB1898:
 4307 03fd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4307      000000
 4308 0404 F20F100D 		movsd	.LC43(%rip), %xmm1
 4308      00000000 
 4309 040c F20F1005 		movsd	.LC72(%rip), %xmm0
 4309      00000000 
 4310 0414 488B07   		movq	(%rdi), %rax
 4311 0417 FF90E000 		call	*224(%rax)
 4311      0000
 4312              	.LVL436:
 4313              	.LBE1898:
 4314              	.LBE1897:
 4315              	.LBB1899:
 4316              	.LBB1900:
 4317 041d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4317      000000
 4318 0424 660FEFC9 		pxor	%xmm1, %xmm1
 4319 0428 F20F1005 		movsd	.LC73(%rip), %xmm0
 4319      00000000 
 4320 0430 488B07   		movq	(%rdi), %rax
 4321 0433 FF90E000 		call	*224(%rax)
 4321      0000
 4322              	.LVL437:
 4323              	.LBE1900:
 4324              	.LBE1899:
 4325              	.LBB1901:
 4326              	.LBB1902:
 4327 0439 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4327      000000
 4328 0440 F20F100D 		movsd	.LC50(%rip), %xmm1
 4328      00000000 
 4329 0448 F20F1005 		movsd	.LC72(%rip), %xmm0
 4329      00000000 
 4330 0450 488B07   		movq	(%rdi), %rax
 4331 0453 FF90E000 		call	*224(%rax)
 4331      0000
 4332              	.LVL438:
 4333              	.LBE1902:
 4334              	.LBE1901:
 4335              	.LBB1903:
 4336              	.LBB1904:
 4337 0459 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4337      000000
 4338 0460 F20F100D 		movsd	.LC50(%rip), %xmm1
 4338      00000000 
 4339 0468 F20F1005 		movsd	.LC71(%rip), %xmm0
 4339      00000000 
 4340 0470 488B07   		movq	(%rdi), %rax
 4341 0473 FF90E000 		call	*224(%rax)
 4341      0000
 4342              	.LVL439:
 4343              	.LBE1904:
 4344              	.LBE1903:
 4345              	.LBB1905:
 4346              	.LBB1906:
 4347 0479 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4347      000000
 4348 0480 F20F100D 		movsd	.LC34(%rip), %xmm1
 4348      00000000 
 4349 0488 F20F1005 		movsd	.LC70(%rip), %xmm0
 4349      00000000 
 4350 0490 488B07   		movq	(%rdi), %rax
 4351 0493 FF90E000 		call	*224(%rax)
 4351      0000
 4352              	.LVL440:
 4353              	.LBE1906:
 4354              	.LBE1905:
 4355              	.LBB1907:
 4356              	.LBB1908:
 4357 0499 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4357      000000
 4358 04a0 F20F100D 		movsd	.LC50(%rip), %xmm1
 4358      00000000 
 4359 04a8 F20F1005 		movsd	.LC70(%rip), %xmm0
 4359      00000000 
 4360 04b0 488B07   		movq	(%rdi), %rax
 4361 04b3 FF90E000 		call	*224(%rax)
 4361      0000
 4362              	.LVL441:
 4363              	.LBE1908:
 4364              	.LBE1907:
 4365              	.LBB1909:
 4366              	.LBB1910:
 4367 04b9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4367      000000
 4368 04c0 F20F100D 		movsd	.LC50(%rip), %xmm1
 4368      00000000 
 4369 04c8 F20F1005 		movsd	.LC69(%rip), %xmm0
 4369      00000000 
 4370 04d0 488B07   		movq	(%rdi), %rax
 4371 04d3 FF90E000 		call	*224(%rax)
 4371      0000
 4372              	.LVL442:
 4373              	.LBE1910:
 4374              	.LBE1909:
 4375              	.LBB1911:
 4376              	.LBB1912:
 4377              		.loc 2 466 0
 4378 04d9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4378      000000
 4379 04e0 488B07   		movq	(%rdi), %rax
 4380 04e3 FF904001 		call	*320(%rax)
 4380      0000
 4381              	.LVL443:
 4382              	.LBE1912:
 4383              	.LBE1911:
 4384              		.loc 1 212 0
 4385 04e9 89DF     		movl	%ebx, %edi
 4386 04eb E8000000 		call	_ZL17set_outline_colorj
 4386      00
 4387              	.LVL444:
 4388              	.LBB1913:
 4389              	.LBB1914:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4390              		.loc 2 370 0
 4391 04f0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4391      000000
 4392 04f7 488B07   		movq	(%rdi), %rax
 4393 04fa FF90D000 		call	*208(%rax)
 4393      0000
 4394              	.LVL445:
 4395              	.LBE1914:
 4396              	.LBE1913:
 4397              	.LBB1915:
 4398              	.LBB1916:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4399              		.loc 2 379 0
 4400 0500 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4400      000000
 4401 0507 F20F100D 		movsd	.LC43(%rip), %xmm1
 4401      00000000 
 4402 050f F20F1005 		movsd	.LC65(%rip), %xmm0
 4402      00000000 
 4403 0517 488B07   		movq	(%rdi), %rax
 4404 051a FF90E000 		call	*224(%rax)
 4404      0000
 4405              	.LVL446:
 4406              	.LBE1916:
 4407              	.LBE1915:
 4408              	.LBB1917:
 4409              	.LBB1918:
 4410 0520 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4410      000000
 4411 0527 F20F100D 		movsd	.LC43(%rip), %xmm1
 4411      00000000 
 4412 052f F20F1005 		movsd	.LC1(%rip), %xmm0
 4412      00000000 
 4413 0537 488B07   		movq	(%rdi), %rax
 4414 053a FF90E000 		call	*224(%rax)
 4414      0000
 4415              	.LVL447:
 4416              	.LBE1918:
 4417              	.LBE1917:
 4418              	.LBB1919:
 4419              	.LBB1920:
 4420 0540 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4420      000000
 4421 0547 F20F100D 		movsd	.LC49(%rip), %xmm1
 4421      00000000 
 4422 054f F20F1005 		movsd	.LC1(%rip), %xmm0
 4422      00000000 
 4423 0557 488B07   		movq	(%rdi), %rax
 4424 055a FF90E000 		call	*224(%rax)
 4424      0000
 4425              	.LVL448:
 4426              	.LBE1920:
 4427              	.LBE1919:
 4428              	.LBB1921:
 4429              	.LBB1922:
 4430 0560 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4430      000000
 4431 0567 F20F100D 		movsd	.LC49(%rip), %xmm1
 4431      00000000 
 4432 056f F20F1005 		movsd	.LC66(%rip), %xmm0
 4432      00000000 
 4433 0577 488B07   		movq	(%rdi), %rax
 4434 057a FF90E000 		call	*224(%rax)
 4434      0000
 4435              	.LVL449:
 4436              	.LBE1922:
 4437              	.LBE1921:
 4438              	.LBB1923:
 4439              	.LBB1924:
 4440 0580 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4440      000000
 4441 0587 F20F100D 		movsd	.LC21(%rip), %xmm1
 4441      00000000 
 4442 058f F20F1005 		movsd	.LC66(%rip), %xmm0
 4442      00000000 
 4443 0597 488B07   		movq	(%rdi), %rax
 4444 059a FF90E000 		call	*224(%rax)
 4444      0000
 4445              	.LVL450:
 4446              	.LBE1924:
 4447              	.LBE1923:
 4448              	.LBB1925:
 4449              	.LBB1926:
 4450 05a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4450      000000
 4451 05a7 F20F100D 		movsd	.LC21(%rip), %xmm1
 4451      00000000 
 4452 05af F20F1005 		movsd	.LC67(%rip), %xmm0
 4452      00000000 
 4453 05b7 488B07   		movq	(%rdi), %rax
 4454 05ba FF90E000 		call	*224(%rax)
 4454      0000
 4455              	.LVL451:
 4456              	.LBE1926:
 4457              	.LBE1925:
 4458              	.LBB1927:
 4459              	.LBB1928:
 4460 05c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4460      000000
 4461 05c7 F20F100D 		movsd	.LC23(%rip), %xmm1
 4461      00000000 
 4462 05cf F20F1005 		movsd	.LC67(%rip), %xmm0
 4462      00000000 
 4463 05d7 488B07   		movq	(%rdi), %rax
 4464 05da FF90E000 		call	*224(%rax)
 4464      0000
 4465              	.LVL452:
 4466              	.LBE1928:
 4467              	.LBE1927:
 4468              	.LBB1929:
 4469              	.LBB1930:
 4470 05e0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4470      000000
 4471 05e7 F20F100D 		movsd	.LC23(%rip), %xmm1
 4471      00000000 
 4472 05ef F20F1005 		movsd	.LC66(%rip), %xmm0
 4472      00000000 
 4473 05f7 488B07   		movq	(%rdi), %rax
 4474 05fa FF90E000 		call	*224(%rax)
 4474      0000
 4475              	.LVL453:
 4476              	.LBE1930:
 4477              	.LBE1929:
 4478              	.LBB1931:
 4479              	.LBB1932:
 4480 0600 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4480      000000
 4481 0607 F20F100D 		movsd	.LC50(%rip), %xmm1
 4481      00000000 
 4482 060f F20F1005 		movsd	.LC66(%rip), %xmm0
 4482      00000000 
 4483 0617 488B07   		movq	(%rdi), %rax
 4484 061a FF90E000 		call	*224(%rax)
 4484      0000
 4485              	.LVL454:
 4486              	.LBE1932:
 4487              	.LBE1931:
 4488              	.LBB1933:
 4489              	.LBB1934:
 4490 0620 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4490      000000
 4491 0627 F20F100D 		movsd	.LC50(%rip), %xmm1
 4491      00000000 
 4492 062f F20F1005 		movsd	.LC65(%rip), %xmm0
 4492      00000000 
 4493 0637 488B07   		movq	(%rdi), %rax
 4494 063a FF90E000 		call	*224(%rax)
 4494      0000
 4495              	.LVL455:
 4496              	.LBE1934:
 4497              	.LBE1933:
 4498              	.LBB1935:
 4499              	.LBB1936:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4500              		.loc 2 436 0
 4501 0640 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4501      000000
 4502 0647 488B07   		movq	(%rdi), %rax
 4503 064a FF902001 		call	*288(%rax)
 4503      0000
 4504              	.LVL456:
 4505              	.LBE1936:
 4506              	.LBE1935:
 4507              	.LBB1937:
 4508              	.LBB1938:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4509              		.loc 2 370 0
 4510 0650 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4510      000000
 4511 0657 488B07   		movq	(%rdi), %rax
 4512 065a FF90D000 		call	*208(%rax)
 4512      0000
 4513              	.LVL457:
 4514              	.LBE1938:
 4515              	.LBE1937:
 4516              	.LBB1939:
 4517              	.LBB1940:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4518              		.loc 2 379 0
 4519 0660 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4519      000000
 4520 0667 F20F100D 		movsd	.LC43(%rip), %xmm1
 4520      00000000 
 4521 066f F20F1005 		movsd	.LC1(%rip), %xmm0
 4521      00000000 
 4522 0677 488B07   		movq	(%rdi), %rax
 4523 067a FF90E000 		call	*224(%rax)
 4523      0000
 4524              	.LVL458:
 4525              	.LBE1940:
 4526              	.LBE1939:
 4527              	.LBB1941:
 4528              	.LBB1942:
 4529 0680 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4529      000000
 4530 0687 F20F100D 		movsd	.LC43(%rip), %xmm1
 4530      00000000 
 4531 068f F20F1005 		movsd	.LC5(%rip), %xmm0
 4531      00000000 
 4532 0697 488B07   		movq	(%rdi), %rax
 4533 069a FF90E000 		call	*224(%rax)
 4533      0000
 4534              	.LVL459:
 4535              	.LBE1942:
 4536              	.LBE1941:
 4537              	.LBB1943:
 4538              	.LBB1944:
 4539 06a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4539      000000
 4540 06a7 F20F100D 		movsd	.LC68(%rip), %xmm1
 4540      00000000 
 4541 06af F20F1005 		movsd	.LC5(%rip), %xmm0
 4541      00000000 
 4542 06b7 488B07   		movq	(%rdi), %rax
 4543 06ba FF90E000 		call	*224(%rax)
 4543      0000
 4544              	.LVL460:
 4545              	.LBE1944:
 4546              	.LBE1943:
 4547              	.LBB1945:
 4548              	.LBB1946:
 4549 06c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4549      000000
 4550 06c7 F20F100D 		movsd	.LC68(%rip), %xmm1
 4550      00000000 
 4551 06cf 660FEFC0 		pxor	%xmm0, %xmm0
 4552 06d3 488B07   		movq	(%rdi), %rax
 4553 06d6 FF90E000 		call	*224(%rax)
 4553      0000
 4554              	.LVL461:
 4555              	.LBE1946:
 4556              	.LBE1945:
 4557              	.LBB1947:
 4558              	.LBB1948:
 4559 06dc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4559      000000
 4560 06e3 F20F100D 		movsd	.LC50(%rip), %xmm1
 4560      00000000 
 4561 06eb 660FEFC0 		pxor	%xmm0, %xmm0
 4562 06ef 488B07   		movq	(%rdi), %rax
 4563 06f2 FF90E000 		call	*224(%rax)
 4563      0000
 4564              	.LVL462:
 4565              	.LBE1948:
 4566              	.LBE1947:
 4567              	.LBB1949:
 4568              	.LBB1950:
 4569 06f8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4569      000000
 4570 06ff F20F100D 		movsd	.LC50(%rip), %xmm1
 4570      00000000 
 4571 0707 F20F1005 		movsd	.LC1(%rip), %xmm0
 4571      00000000 
 4572 070f 488B07   		movq	(%rdi), %rax
 4573 0712 FF90E000 		call	*224(%rax)
 4573      0000
 4574              	.LVL463:
 4575              	.LBE1950:
 4576              	.LBE1949:
 4577              	.LBB1951:
 4578              	.LBB1952:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4579              		.loc 2 436 0
 4580 0718 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4580      000000
 4581 071f 488B07   		movq	(%rdi), %rax
 4582 0722 FF902001 		call	*288(%rax)
 4582      0000
 4583              	.LVL464:
 4584              	.LBE1952:
 4585              	.LBE1951:
 4586              	.LBB1953:
 4587              	.LBB1954:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4588              		.loc 2 370 0
 4589 0728 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4589      000000
 4590 072f 488B07   		movq	(%rdi), %rax
 4591 0732 FF90D000 		call	*208(%rax)
 4591      0000
 4592              	.LVL465:
 4593              	.LBE1954:
 4594              	.LBE1953:
 4595              	.LBB1955:
 4596              	.LBB1956:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4597              		.loc 2 379 0
 4598 0738 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4598      000000
 4599 073f F20F100D 		movsd	.LC43(%rip), %xmm1
 4599      00000000 
 4600 0747 F20F1005 		movsd	.LC21(%rip), %xmm0
 4600      00000000 
 4601 074f 488B07   		movq	(%rdi), %rax
 4602 0752 FF90E000 		call	*224(%rax)
 4602      0000
 4603              	.LVL466:
 4604              	.LBE1956:
 4605              	.LBE1955:
 4606              	.LBB1957:
 4607              	.LBB1958:
 4608 0758 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4608      000000
 4609 075f F20F100D 		movsd	.LC43(%rip), %xmm1
 4609      00000000 
 4610 0767 F20F1005 		movsd	.LC69(%rip), %xmm0
 4610      00000000 
 4611 076f 488B07   		movq	(%rdi), %rax
 4612 0772 FF90E000 		call	*224(%rax)
 4612      0000
 4613              	.LVL467:
 4614              	.LBE1958:
 4615              	.LBE1957:
 4616              	.LBB1959:
 4617              	.LBB1960:
 4618 0778 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4618      000000
 4619 077f F20F100D 		movsd	.LC49(%rip), %xmm1
 4619      00000000 
 4620 0787 F20F1005 		movsd	.LC69(%rip), %xmm0
 4620      00000000 
 4621 078f 488B07   		movq	(%rdi), %rax
 4622 0792 FF90E000 		call	*224(%rax)
 4622      0000
 4623              	.LVL468:
 4624              	.LBE1960:
 4625              	.LBE1959:
 4626              	.LBB1961:
 4627              	.LBB1962:
 4628 0798 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4628      000000
 4629 079f F20F100D 		movsd	.LC49(%rip), %xmm1
 4629      00000000 
 4630 07a7 F20F1005 		movsd	.LC16(%rip), %xmm0
 4630      00000000 
 4631 07af 488B07   		movq	(%rdi), %rax
 4632 07b2 FF90E000 		call	*224(%rax)
 4632      0000
 4633              	.LVL469:
 4634              	.LBE1962:
 4635              	.LBE1961:
 4636              	.LBB1963:
 4637              	.LBB1964:
 4638 07b8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4638      000000
 4639 07bf F20F100D 		movsd	.LC50(%rip), %xmm1
 4639      00000000 
 4640 07c7 F20F1005 		movsd	.LC16(%rip), %xmm0
 4640      00000000 
 4641 07cf 488B07   		movq	(%rdi), %rax
 4642 07d2 FF90E000 		call	*224(%rax)
 4642      0000
 4643              	.LVL470:
 4644              	.LBE1964:
 4645              	.LBE1963:
 4646              	.LBB1965:
 4647              	.LBB1966:
 4648 07d8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4648      000000
 4649 07df F20F100D 		movsd	.LC50(%rip), %xmm1
 4649      00000000 
 4650 07e7 F20F1005 		movsd	.LC14(%rip), %xmm0
 4650      00000000 
 4651 07ef 488B07   		movq	(%rdi), %rax
 4652 07f2 FF90E000 		call	*224(%rax)
 4652      0000
 4653              	.LVL471:
 4654              	.LBE1966:
 4655              	.LBE1965:
 4656              	.LBB1967:
 4657              	.LBB1968:
 4658 07f8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4658      000000
 4659 07ff F20F100D 		movsd	.LC49(%rip), %xmm1
 4659      00000000 
 4660 0807 F20F1005 		movsd	.LC14(%rip), %xmm0
 4660      00000000 
 4661 080f 488B07   		movq	(%rdi), %rax
 4662 0812 FF90E000 		call	*224(%rax)
 4662      0000
 4663              	.LVL472:
 4664              	.LBE1968:
 4665              	.LBE1967:
 4666              	.LBB1969:
 4667              	.LBB1970:
 4668 0818 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4668      000000
 4669 081f F20F100D 		movsd	.LC49(%rip), %xmm1
 4669      00000000 
 4670 0827 F20F1005 		movsd	.LC21(%rip), %xmm0
 4670      00000000 
 4671 082f 488B07   		movq	(%rdi), %rax
 4672 0832 FF90E000 		call	*224(%rax)
 4672      0000
 4673              	.LVL473:
 4674              	.LBE1970:
 4675              	.LBE1969:
 4676              	.LBB1971:
 4677              	.LBB1972:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4678              		.loc 2 436 0
 4679 0838 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4679      000000
 4680 083f 488B07   		movq	(%rdi), %rax
 4681 0842 FF902001 		call	*288(%rax)
 4681      0000
 4682              	.LVL474:
 4683              	.LBE1972:
 4684              	.LBE1971:
 4685              	.LBB1973:
 4686              	.LBB1974:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4687              		.loc 2 370 0
 4688 0848 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4688      000000
 4689 084f 488B07   		movq	(%rdi), %rax
 4690 0852 FF90D000 		call	*208(%rax)
 4690      0000
 4691              	.LVL475:
 4692              	.LBE1974:
 4693              	.LBE1973:
 4694              	.LBB1975:
 4695              	.LBB1976:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4696              		.loc 2 379 0
 4697 0858 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4697      000000
 4698 085f F20F100D 		movsd	.LC43(%rip), %xmm1
 4698      00000000 
 4699 0867 F20F1005 		movsd	.LC69(%rip), %xmm0
 4699      00000000 
 4700 086f 488B07   		movq	(%rdi), %rax
 4701 0872 FF90E000 		call	*224(%rax)
 4701      0000
 4702              	.LVL476:
 4703              	.LBE1976:
 4704              	.LBE1975:
 4705              	.LBB1977:
 4706              	.LBB1978:
 4707 0878 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4707      000000
 4708 087f F20F100D 		movsd	.LC43(%rip), %xmm1
 4708      00000000 
 4709 0887 F20F1005 		movsd	.LC70(%rip), %xmm0
 4709      00000000 
 4710 088f 488B07   		movq	(%rdi), %rax
 4711 0892 FF90E000 		call	*224(%rax)
 4711      0000
 4712              	.LVL477:
 4713              	.LBE1978:
 4714              	.LBE1977:
 4715              	.LBB1979:
 4716              	.LBB1980:
 4717 0898 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4717      000000
 4718 089f F20F100D 		movsd	.LC32(%rip), %xmm1
 4718      00000000 
 4719 08a7 F20F1005 		movsd	.LC70(%rip), %xmm0
 4719      00000000 
 4720 08af 488B07   		movq	(%rdi), %rax
 4721 08b2 FF90E000 		call	*224(%rax)
 4721      0000
 4722              	.LVL478:
 4723              	.LBE1980:
 4724              	.LBE1979:
 4725              	.LBB1981:
 4726              	.LBB1982:
 4727 08b8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4727      000000
 4728 08bf F20F100D 		movsd	.LC43(%rip), %xmm1
 4728      00000000 
 4729 08c7 F20F1005 		movsd	.LC71(%rip), %xmm0
 4729      00000000 
 4730 08cf 488B07   		movq	(%rdi), %rax
 4731 08d2 FF90E000 		call	*224(%rax)
 4731      0000
 4732              	.LVL479:
 4733              	.LBE1982:
 4734              	.LBE1981:
 4735              	.LBB1983:
 4736              	.LBB1984:
 4737 08d8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4737      000000
 4738 08df F20F100D 		movsd	.LC43(%rip), %xmm1
 4738      00000000 
 4739 08e7 F20F1005 		movsd	.LC72(%rip), %xmm0
 4739      00000000 
 4740 08ef 488B07   		movq	(%rdi), %rax
 4741 08f2 FF90E000 		call	*224(%rax)
 4741      0000
 4742              	.LVL480:
 4743              	.LBE1984:
 4744              	.LBE1983:
 4745              	.LBB1985:
 4746              	.LBB1986:
 4747 08f8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4747      000000
 4748 08ff 660FEFC9 		pxor	%xmm1, %xmm1
 4749 0903 F20F1005 		movsd	.LC73(%rip), %xmm0
 4749      00000000 
 4750 090b 488B07   		movq	(%rdi), %rax
 4751 090e FF90E000 		call	*224(%rax)
 4751      0000
 4752              	.LVL481:
 4753              	.LBE1986:
 4754              	.LBE1985:
 4755              	.LBB1987:
 4756              	.LBB1988:
 4757 0914 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4757      000000
 4758 091b F20F100D 		movsd	.LC50(%rip), %xmm1
 4758      00000000 
 4759 0923 F20F1005 		movsd	.LC72(%rip), %xmm0
 4759      00000000 
 4760 092b 488B07   		movq	(%rdi), %rax
 4761 092e FF90E000 		call	*224(%rax)
 4761      0000
 4762              	.LVL482:
 4763              	.LBE1988:
 4764              	.LBE1987:
 4765              	.LBB1989:
 4766              	.LBB1990:
 4767 0934 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4767      000000
 4768 093b F20F100D 		movsd	.LC50(%rip), %xmm1
 4768      00000000 
 4769 0943 F20F1005 		movsd	.LC71(%rip), %xmm0
 4769      00000000 
 4770 094b 488B07   		movq	(%rdi), %rax
 4771 094e FF90E000 		call	*224(%rax)
 4771      0000
 4772              	.LVL483:
 4773              	.LBE1990:
 4774              	.LBE1989:
 4775              	.LBB1991:
 4776              	.LBB1992:
 4777 0954 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4777      000000
 4778 095b F20F100D 		movsd	.LC34(%rip), %xmm1
 4778      00000000 
 4779 0963 F20F1005 		movsd	.LC70(%rip), %xmm0
 4779      00000000 
 4780 096b 488B07   		movq	(%rdi), %rax
 4781 096e FF90E000 		call	*224(%rax)
 4781      0000
 4782              	.LVL484:
 4783              	.LBE1992:
 4784              	.LBE1991:
 4785              	.LBB1993:
 4786              	.LBB1994:
 4787 0974 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4787      000000
 4788 097b F20F100D 		movsd	.LC50(%rip), %xmm1
 4788      00000000 
 4789 0983 F20F1005 		movsd	.LC70(%rip), %xmm0
 4789      00000000 
 4790 098b 488B07   		movq	(%rdi), %rax
 4791 098e FF90E000 		call	*224(%rax)
 4791      0000
 4792              	.LVL485:
 4793              	.LBE1994:
 4794              	.LBE1993:
 4795              	.LBB1995:
 4796              	.LBB1996:
 4797 0994 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4797      000000
 4798 099b F20F100D 		movsd	.LC50(%rip), %xmm1
 4798      00000000 
 4799 09a3 F20F1005 		movsd	.LC69(%rip), %xmm0
 4799      00000000 
 4800 09ab 488B07   		movq	(%rdi), %rax
 4801 09ae FF90E000 		call	*224(%rax)
 4801      0000
 4802              	.LVL486:
 4803              	.LBE1996:
 4804              	.LBE1995:
 4805              	.LBB1997:
 4806              	.LBB1998:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4807              		.loc 2 436 0
 4808 09b4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4808      000000
 4809              	.LBE1998:
 4810              	.LBE1997:
 4811              		.loc 1 227 0
 4812 09bb 5B       		popq	%rbx
 4813              		.cfi_def_cfa_offset 8
 4814              	.LVL487:
 4815              	.LBB2000:
 4816              	.LBB1999:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4817              		.loc 2 436 0
 4818 09bc 488B07   		movq	(%rdi), %rax
 4819 09bf 488B8020 		movq	288(%rax), %rax
 4819      010000
 4820 09c6 FFE0     		jmp	*%rax
 4821              	.LVL488:
 4822              	.LBE1999:
 4823              	.LBE2000:
 4824              		.cfi_endproc
 4825              	.LFE490:
 4827              		.section	.text.unlikely._ZL9draw_fltkj
 4828              	.LCOLDE74:
 4829              		.section	.text._ZL9draw_fltkj
 4830              	.LHOTE74:
 4831              		.section	.text.unlikely._ZL14draw_fileprintj,"ax",@progbits
 4832              	.LCOLDB76:
 4833              		.section	.text._ZL14draw_fileprintj,"ax",@progbits
 4834              	.LHOTB76:
 4835              		.p2align 4,,15
 4837              	_ZL14draw_fileprintj:
 4838              	.LFB519:
 4839              		.loc 1 546 0
 4840              		.cfi_startproc
 4841              	.LVL489:
 4842 0000 53       		pushq	%rbx
 4843              		.cfi_def_cfa_offset 16
 4844              		.cfi_offset 3, -16
 4845              		.loc 1 546 0
 4846 0001 89FB     		movl	%edi, %ebx
 4847              	.LVL490:
 4848              	.LBB2001:
 4849              	.LBB2002:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 4850              		.loc 2 52 0
 4851 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4851      000000
 4852              	.LVL491:
 4853 000a 89DE     		movl	%ebx, %esi
 4854 000c 488B07   		movq	(%rdi), %rax
 4855 000f FF908800 		call	*136(%rax)
 4855      0000
 4856              	.LVL492:
 4857              	.LBE2002:
 4858              	.LBE2001:
 4859              	.LBB2003:
 4860              	.LBB2004:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4861              		.loc 2 374 0
 4862 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4862      000000
 4863 001c 488B07   		movq	(%rdi), %rax
 4864 001f FF90D800 		call	*216(%rax)
 4864      0000
 4865              	.LVL493:
 4866              	.LBE2004:
 4867              	.LBE2003:
 4868              	.LBB2005:
 4869              	.LBB2006:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4870              		.loc 2 379 0
 4871 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4871      000000
 4872 002c 660FEFC9 		pxor	%xmm1, %xmm1
 4873 0030 F20F1005 		movsd	.LC5(%rip), %xmm0
 4873      00000000 
 4874 0038 488B07   		movq	(%rdi), %rax
 4875 003b FF90E000 		call	*224(%rax)
 4875      0000
 4876              	.LVL494:
 4877              	.LBE2006:
 4878              	.LBE2005:
 4879              	.LBB2007:
 4880              	.LBB2008:
 4881 0041 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4881      000000
 4882 0048 660FEFC9 		pxor	%xmm1, %xmm1
 4883 004c F20F1005 		movsd	.LC4(%rip), %xmm0
 4883      00000000 
 4884 0054 488B07   		movq	(%rdi), %rax
 4885 0057 FF90E000 		call	*224(%rax)
 4885      0000
 4886              	.LVL495:
 4887              	.LBE2008:
 4888              	.LBE2007:
 4889              	.LBB2009:
 4890              	.LBB2010:
 4891 005d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4891      000000
 4892 0064 F20F100D 		movsd	.LC18(%rip), %xmm1
 4892      00000000 
 4893 006c F20F1005 		movsd	.LC2(%rip), %xmm0
 4893      00000000 
 4894 0074 488B07   		movq	(%rdi), %rax
 4895 0077 FF90E000 		call	*224(%rax)
 4895      0000
 4896              	.LVL496:
 4897              	.LBE2010:
 4898              	.LBE2009:
 4899              	.LBB2011:
 4900              	.LBB2012:
 4901 007d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4901      000000
 4902 0084 F20F100D 		movsd	.LC2(%rip), %xmm1
 4902      00000000 
 4903 008c 660F28C1 		movapd	%xmm1, %xmm0
 4904 0090 488B07   		movq	(%rdi), %rax
 4905 0093 FF90E000 		call	*224(%rax)
 4905      0000
 4906              	.LVL497:
 4907              	.LBE2012:
 4908              	.LBE2011:
 4909              	.LBB2013:
 4910              	.LBB2014:
 4911 0099 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4911      000000
 4912 00a0 F20F100D 		movsd	.LC2(%rip), %xmm1
 4912      00000000 
 4913 00a8 F20F1005 		movsd	.LC1(%rip), %xmm0
 4913      00000000 
 4914 00b0 488B07   		movq	(%rdi), %rax
 4915 00b3 FF90E000 		call	*224(%rax)
 4915      0000
 4916              	.LVL498:
 4917              	.LBE2014:
 4918              	.LBE2013:
 4919              	.LBB2015:
 4920              	.LBB2016:
 4921 00b9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4921      000000
 4922 00c0 F20F100D 		movsd	.LC18(%rip), %xmm1
 4922      00000000 
 4923 00c8 F20F1005 		movsd	.LC1(%rip), %xmm0
 4923      00000000 
 4924 00d0 488B07   		movq	(%rdi), %rax
 4925 00d3 FF90E000 		call	*224(%rax)
 4925      0000
 4926              	.LVL499:
 4927              	.LBE2016:
 4928              	.LBE2015:
 4929              	.LBB2017:
 4930              	.LBB2018:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4931              		.loc 2 440 0
 4932 00d9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4932      000000
 4933 00e0 488B07   		movq	(%rdi), %rax
 4934 00e3 FF902801 		call	*296(%rax)
 4934      0000
 4935              	.LVL500:
 4936              	.LBE2018:
 4937              	.LBE2017:
 4938              		.loc 1 557 0
 4939 00e9 F30F1005 		movss	.LC75(%rip), %xmm0
 4939      00000000 
 4940 00f1 89DF     		movl	%ebx, %edi
 4941 00f3 BEFF0000 		movl	$255, %esi
 4941      00
 4942 00f8 E8000000 		call	_Z16fl_color_averagejjf
 4942      00
 4943              	.LVL501:
 4944              	.LBB2019:
 4945              	.LBB2020:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 4946              		.loc 2 52 0
 4947 00fd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4947      000000
 4948 0104 89C6     		movl	%eax, %esi
 4949 0106 488B17   		movq	(%rdi), %rdx
 4950 0109 FF928800 		call	*136(%rdx)
 4950      0000
 4951              	.LVL502:
 4952              	.LBE2020:
 4953              	.LBE2019:
 4954              	.LBB2021:
 4955              	.LBB2022:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4956              		.loc 2 374 0
 4957 010f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4957      000000
 4958 0116 488B07   		movq	(%rdi), %rax
 4959 0119 FF90D800 		call	*216(%rax)
 4959      0000
 4960              	.LVL503:
 4961              	.LBE2022:
 4962              	.LBE2021:
 4963              	.LBB2023:
 4964              	.LBB2024:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 4965              		.loc 2 379 0
 4966 011f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4966      000000
 4967 0126 660FEFC9 		pxor	%xmm1, %xmm1
 4968 012a F20F1005 		movsd	.LC22(%rip), %xmm0
 4968      00000000 
 4969 0132 488B07   		movq	(%rdi), %rax
 4970 0135 FF90E000 		call	*224(%rax)
 4970      0000
 4971              	.LVL504:
 4972              	.LBE2024:
 4973              	.LBE2023:
 4974              	.LBB2025:
 4975              	.LBB2026:
 4976 013b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4976      000000
 4977 0142 F20F100D 		movsd	.LC1(%rip), %xmm1
 4977      00000000 
 4978 014a F20F1005 		movsd	.LC22(%rip), %xmm0
 4978      00000000 
 4979 0152 488B07   		movq	(%rdi), %rax
 4980 0155 FF90E000 		call	*224(%rax)
 4980      0000
 4981              	.LVL505:
 4982              	.LBE2026:
 4983              	.LBE2025:
 4984              	.LBB2027:
 4985              	.LBB2028:
 4986 015b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4986      000000
 4987 0162 F20F100D 		movsd	.LC1(%rip), %xmm1
 4987      00000000 
 4988 016a F20F1005 		movsd	.LC16(%rip), %xmm0
 4988      00000000 
 4989 0172 488B07   		movq	(%rdi), %rax
 4990 0175 FF90E000 		call	*224(%rax)
 4990      0000
 4991              	.LVL506:
 4992              	.LBE2028:
 4993              	.LBE2027:
 4994              	.LBB2029:
 4995              	.LBB2030:
 4996 017b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 4996      000000
 4997 0182 660FEFC9 		pxor	%xmm1, %xmm1
 4998 0186 F20F1005 		movsd	.LC16(%rip), %xmm0
 4998      00000000 
 4999 018e 488B07   		movq	(%rdi), %rax
 5000 0191 FF90E000 		call	*224(%rax)
 5000      0000
 5001              	.LVL507:
 5002              	.LBE2030:
 5003              	.LBE2029:
 5004              	.LBB2031:
 5005              	.LBB2032:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5006              		.loc 2 440 0
 5007 0197 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5007      000000
 5008 019e 488B07   		movq	(%rdi), %rax
 5009 01a1 FF902801 		call	*296(%rax)
 5009      0000
 5010              	.LVL508:
 5011              	.LBE2032:
 5012              	.LBE2031:
 5013              	.LBB2033:
 5014              	.LBB2034:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 5015              		.loc 3 991 0
 5016 01a7 F30F1005 		movss	.LC8(%rip), %xmm0
 5016      00000000 
 5017 01af 89DF     		movl	%ebx, %edi
 5018 01b1 BEFF0000 		movl	$255, %esi
 5018      00
 5019 01b6 E8000000 		call	_Z16fl_color_averagejjf
 5019      00
 5020              	.LVL509:
 5021              	.LBE2034:
 5022              	.LBE2033:
 5023              	.LBB2035:
 5024              	.LBB2036:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5025              		.loc 2 52 0
 5026 01bb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5026      000000
 5027 01c2 89C6     		movl	%eax, %esi
 5028 01c4 488B17   		movq	(%rdi), %rdx
 5029 01c7 FF928800 		call	*136(%rdx)
 5029      0000
 5030              	.LVL510:
 5031              	.LBE2036:
 5032              	.LBE2035:
 5033              	.LBB2037:
 5034              	.LBB2038:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5035              		.loc 2 374 0
 5036 01cd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5036      000000
 5037 01d4 488B07   		movq	(%rdi), %rax
 5038 01d7 FF90D800 		call	*216(%rax)
 5038      0000
 5039              	.LVL511:
 5040              	.LBE2038:
 5041              	.LBE2037:
 5042              	.LBB2039:
 5043              	.LBB2040:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5044              		.loc 2 379 0
 5045 01dd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5045      000000
 5046 01e4 F20F100D 		movsd	.LC16(%rip), %xmm1
 5046      00000000 
 5047 01ec F20F1005 		movsd	.LC22(%rip), %xmm0
 5047      00000000 
 5048 01f4 488B07   		movq	(%rdi), %rax
 5049 01f7 FF90E000 		call	*224(%rax)
 5049      0000
 5050              	.LVL512:
 5051              	.LBE2040:
 5052              	.LBE2039:
 5053              	.LBB2041:
 5054              	.LBB2042:
 5055 01fd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5055      000000
 5056 0204 F20F100D 		movsd	.LC16(%rip), %xmm1
 5056      00000000 
 5057 020c 660F28C1 		movapd	%xmm1, %xmm0
 5058 0210 488B07   		movq	(%rdi), %rax
 5059 0213 FF90E000 		call	*224(%rax)
 5059      0000
 5060              	.LVL513:
 5061              	.LBE2042:
 5062              	.LBE2041:
 5063              	.LBB2043:
 5064              	.LBB2044:
 5065 0219 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5065      000000
 5066 0220 F20F100D 		movsd	.LC2(%rip), %xmm1
 5066      00000000 
 5067 0228 F20F1005 		movsd	.LC16(%rip), %xmm0
 5067      00000000 
 5068 0230 488B07   		movq	(%rdi), %rax
 5069 0233 FF90E000 		call	*224(%rax)
 5069      0000
 5070              	.LVL514:
 5071              	.LBE2044:
 5072              	.LBE2043:
 5073              	.LBB2045:
 5074              	.LBB2046:
 5075 0239 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5075      000000
 5076 0240 F20F100D 		movsd	.LC2(%rip), %xmm1
 5076      00000000 
 5077 0248 F20F1005 		movsd	.LC22(%rip), %xmm0
 5077      00000000 
 5078 0250 488B07   		movq	(%rdi), %rax
 5079 0253 FF90E000 		call	*224(%rax)
 5079      0000
 5080              	.LVL515:
 5081              	.LBE2046:
 5082              	.LBE2045:
 5083              	.LBB2047:
 5084              	.LBB2048:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5085              		.loc 2 440 0
 5086 0259 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5086      000000
 5087 0260 488B07   		movq	(%rdi), %rax
 5088 0263 FF902801 		call	*296(%rax)
 5088      0000
 5089              	.LVL516:
 5090              	.LBE2048:
 5091              	.LBE2047:
 5092              	.LBB2049:
 5093              	.LBB2050:
 5094              		.loc 3 994 0
 5095 0269 F30F1005 		movss	.LC8(%rip), %xmm0
 5095      00000000 
 5096 0271 89DF     		movl	%ebx, %edi
 5097 0273 BE380000 		movl	$56, %esi
 5097      00
 5098 0278 E8000000 		call	_Z16fl_color_averagejjf
 5098      00
 5099              	.LVL517:
 5100              	.LBE2050:
 5101              	.LBE2049:
 5102              	.LBB2051:
 5103              	.LBB2052:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5104              		.loc 2 52 0
 5105 027d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5105      000000
 5106 0284 89C6     		movl	%eax, %esi
 5107 0286 488B17   		movq	(%rdi), %rdx
 5108 0289 FF928800 		call	*136(%rdx)
 5108      0000
 5109              	.LVL518:
 5110              	.LBE2052:
 5111              	.LBE2051:
 5112              	.LBB2053:
 5113              	.LBB2054:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5114              		.loc 2 370 0
 5115 028f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5115      000000
 5116 0296 488B07   		movq	(%rdi), %rax
 5117 0299 FF90D000 		call	*208(%rax)
 5117      0000
 5118              	.LVL519:
 5119              	.LBE2054:
 5120              	.LBE2053:
 5121              	.LBB2055:
 5122              	.LBB2056:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5123              		.loc 2 379 0
 5124 029f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5124      000000
 5125 02a6 660FEFC9 		pxor	%xmm1, %xmm1
 5126 02aa F20F1005 		movsd	.LC5(%rip), %xmm0
 5126      00000000 
 5127 02b2 488B07   		movq	(%rdi), %rax
 5128 02b5 FF90E000 		call	*224(%rax)
 5128      0000
 5129              	.LVL520:
 5130              	.LBE2056:
 5131              	.LBE2055:
 5132              	.LBB2057:
 5133              	.LBB2058:
 5134 02bb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5134      000000
 5135 02c2 660FEFC9 		pxor	%xmm1, %xmm1
 5136 02c6 F20F1005 		movsd	.LC22(%rip), %xmm0
 5136      00000000 
 5137 02ce 488B07   		movq	(%rdi), %rax
 5138 02d1 FF90E000 		call	*224(%rax)
 5138      0000
 5139              	.LVL521:
 5140              	.LBE2058:
 5141              	.LBE2057:
 5142              	.LBB2059:
 5143              	.LBB2060:
 5144 02d7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5144      000000
 5145 02de F20F100D 		movsd	.LC1(%rip), %xmm1
 5145      00000000 
 5146 02e6 F20F1005 		movsd	.LC22(%rip), %xmm0
 5146      00000000 
 5147 02ee 488B07   		movq	(%rdi), %rax
 5148 02f1 FF90E000 		call	*224(%rax)
 5148      0000
 5149              	.LVL522:
 5150              	.LBE2060:
 5151              	.LBE2059:
 5152              	.LBB2061:
 5153              	.LBB2062:
 5154 02f7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5154      000000
 5155 02fe F20F100D 		movsd	.LC1(%rip), %xmm1
 5155      00000000 
 5156 0306 F20F1005 		movsd	.LC16(%rip), %xmm0
 5156      00000000 
 5157 030e 488B07   		movq	(%rdi), %rax
 5158 0311 FF90E000 		call	*224(%rax)
 5158      0000
 5159              	.LVL523:
 5160              	.LBE2062:
 5161              	.LBE2061:
 5162              	.LBB2063:
 5163              	.LBB2064:
 5164 0317 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5164      000000
 5165 031e 660FEFC9 		pxor	%xmm1, %xmm1
 5166 0322 F20F1005 		movsd	.LC16(%rip), %xmm0
 5166      00000000 
 5167 032a 488B07   		movq	(%rdi), %rax
 5168 032d FF90E000 		call	*224(%rax)
 5168      0000
 5169              	.LVL524:
 5170              	.LBE2064:
 5171              	.LBE2063:
 5172              	.LBB2065:
 5173              	.LBB2066:
 5174 0333 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5174      000000
 5175 033a 660FEFC9 		pxor	%xmm1, %xmm1
 5176 033e F20F1005 		movsd	.LC4(%rip), %xmm0
 5176      00000000 
 5177 0346 488B07   		movq	(%rdi), %rax
 5178 0349 FF90E000 		call	*224(%rax)
 5178      0000
 5179              	.LVL525:
 5180              	.LBE2066:
 5181              	.LBE2065:
 5182              	.LBB2067:
 5183              	.LBB2068:
 5184 034f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5184      000000
 5185 0356 F20F100D 		movsd	.LC18(%rip), %xmm1
 5185      00000000 
 5186 035e F20F1005 		movsd	.LC2(%rip), %xmm0
 5186      00000000 
 5187 0366 488B07   		movq	(%rdi), %rax
 5188 0369 FF90E000 		call	*224(%rax)
 5188      0000
 5189              	.LVL526:
 5190              	.LBE2068:
 5191              	.LBE2067:
 5192              	.LBB2069:
 5193              	.LBB2070:
 5194 036f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5194      000000
 5195 0376 F20F100D 		movsd	.LC2(%rip), %xmm1
 5195      00000000 
 5196 037e 660F28C1 		movapd	%xmm1, %xmm0
 5197 0382 488B07   		movq	(%rdi), %rax
 5198 0385 FF90E000 		call	*224(%rax)
 5198      0000
 5199              	.LVL527:
 5200              	.LBE2070:
 5201              	.LBE2069:
 5202              	.LBB2071:
 5203              	.LBB2072:
 5204 038b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5204      000000
 5205 0392 F20F100D 		movsd	.LC2(%rip), %xmm1
 5205      00000000 
 5206 039a F20F1005 		movsd	.LC1(%rip), %xmm0
 5206      00000000 
 5207 03a2 488B07   		movq	(%rdi), %rax
 5208 03a5 FF90E000 		call	*224(%rax)
 5208      0000
 5209              	.LVL528:
 5210              	.LBE2072:
 5211              	.LBE2071:
 5212              	.LBB2073:
 5213              	.LBB2074:
 5214 03ab 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5214      000000
 5215 03b2 F20F100D 		movsd	.LC18(%rip), %xmm1
 5215      00000000 
 5216 03ba F20F1005 		movsd	.LC1(%rip), %xmm0
 5216      00000000 
 5217 03c2 488B07   		movq	(%rdi), %rax
 5218 03c5 FF90E000 		call	*224(%rax)
 5218      0000
 5219              	.LVL529:
 5220              	.LBE2074:
 5221              	.LBE2073:
 5222              	.LBB2075:
 5223              	.LBB2076:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5224              		.loc 2 436 0
 5225 03cb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5225      000000
 5226 03d2 488B07   		movq	(%rdi), %rax
 5227 03d5 FF902001 		call	*288(%rax)
 5227      0000
 5228              	.LVL530:
 5229              	.LBE2076:
 5230              	.LBE2075:
 5231              	.LBB2077:
 5232              	.LBB2078:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5233              		.loc 2 370 0
 5234 03db 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5234      000000
 5235 03e2 488B07   		movq	(%rdi), %rax
 5236 03e5 FF90D000 		call	*208(%rax)
 5236      0000
 5237              	.LVL531:
 5238              	.LBE2078:
 5239              	.LBE2077:
 5240              	.LBB2079:
 5241              	.LBB2080:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5242              		.loc 2 379 0
 5243 03eb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5243      000000
 5244 03f2 F20F100D 		movsd	.LC16(%rip), %xmm1
 5244      00000000 
 5245 03fa F20F1005 		movsd	.LC22(%rip), %xmm0
 5245      00000000 
 5246 0402 488B07   		movq	(%rdi), %rax
 5247 0405 FF90E000 		call	*224(%rax)
 5247      0000
 5248              	.LVL532:
 5249              	.LBE2080:
 5250              	.LBE2079:
 5251              	.LBB2081:
 5252              	.LBB2082:
 5253 040b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5253      000000
 5254 0412 F20F100D 		movsd	.LC16(%rip), %xmm1
 5254      00000000 
 5255 041a 660F28C1 		movapd	%xmm1, %xmm0
 5256 041e 488B07   		movq	(%rdi), %rax
 5257 0421 FF90E000 		call	*224(%rax)
 5257      0000
 5258              	.LVL533:
 5259              	.LBE2082:
 5260              	.LBE2081:
 5261              	.LBB2083:
 5262              	.LBB2084:
 5263 0427 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5263      000000
 5264 042e F20F100D 		movsd	.LC2(%rip), %xmm1
 5264      00000000 
 5265 0436 F20F1005 		movsd	.LC16(%rip), %xmm0
 5265      00000000 
 5266 043e 488B07   		movq	(%rdi), %rax
 5267 0441 FF90E000 		call	*224(%rax)
 5267      0000
 5268              	.LVL534:
 5269              	.LBE2084:
 5270              	.LBE2083:
 5271              	.LBB2085:
 5272              	.LBB2086:
 5273 0447 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5273      000000
 5274 044e F20F100D 		movsd	.LC2(%rip), %xmm1
 5274      00000000 
 5275 0456 F20F1005 		movsd	.LC22(%rip), %xmm0
 5275      00000000 
 5276 045e 488B07   		movq	(%rdi), %rax
 5277 0461 FF90E000 		call	*224(%rax)
 5277      0000
 5278              	.LVL535:
 5279              	.LBE2086:
 5280              	.LBE2085:
 5281              	.LBB2087:
 5282              	.LBB2088:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5283              		.loc 2 436 0
 5284 0467 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5284      000000
 5285              	.LBE2088:
 5286              	.LBE2087:
 5287              		.loc 1 593 0
 5288 046e 5B       		popq	%rbx
 5289              		.cfi_def_cfa_offset 8
 5290              	.LVL536:
 5291              	.LBB2090:
 5292              	.LBB2089:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5293              		.loc 2 436 0
 5294 046f 488B07   		movq	(%rdi), %rax
 5295 0472 488B8020 		movq	288(%rax), %rax
 5295      010000
 5296 0479 FFE0     		jmp	*%rax
 5297              	.LVL537:
 5298              	.LBE2089:
 5299              	.LBE2090:
 5300              		.cfi_endproc
 5301              	.LFE519:
 5303              		.section	.text.unlikely._ZL14draw_fileprintj
 5304              	.LCOLDE76:
 5305              		.section	.text._ZL14draw_fileprintj
 5306              	.LHOTE76:
 5307              		.section	.text.unlikely._ZL13draw_filesavej,"ax",@progbits
 5308              	.LCOLDB78:
 5309              		.section	.text._ZL13draw_filesavej,"ax",@progbits
 5310              	.LHOTB78:
 5311              		.p2align 4,,15
 5313              	_ZL13draw_filesavej:
 5314              	.LFB517:
 5315              		.loc 1 469 0
 5316              		.cfi_startproc
 5317              	.LVL538:
 5318 0000 53       		pushq	%rbx
 5319              		.cfi_def_cfa_offset 16
 5320              		.cfi_offset 3, -16
 5321              		.loc 1 469 0
 5322 0001 89FB     		movl	%edi, %ebx
 5323              	.LVL539:
 5324              	.LBB2091:
 5325              	.LBB2092:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5326              		.loc 2 52 0
 5327 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5327      000000
 5328              	.LVL540:
 5329 000a 89DE     		movl	%ebx, %esi
 5330 000c 488B07   		movq	(%rdi), %rax
 5331 000f FF908800 		call	*136(%rax)
 5331      0000
 5332              	.LVL541:
 5333              	.LBE2092:
 5334              	.LBE2091:
 5335              	.LBB2093:
 5336              	.LBB2094:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5337              		.loc 2 374 0
 5338 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5338      000000
 5339 001c 488B07   		movq	(%rdi), %rax
 5340 001f FF90D800 		call	*216(%rax)
 5340      0000
 5341              	.LVL542:
 5342              	.LBE2094:
 5343              	.LBE2093:
 5344              	.LBB2095:
 5345              	.LBB2096:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5346              		.loc 2 379 0
 5347 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5347      000000
 5348 002c F20F100D 		movsd	.LC1(%rip), %xmm1
 5348      00000000 
 5349 0034 F20F1005 		movsd	.LC33(%rip), %xmm0
 5349      00000000 
 5350 003c 488B07   		movq	(%rdi), %rax
 5351 003f FF90E000 		call	*224(%rax)
 5351      0000
 5352              	.LVL543:
 5353              	.LBE2096:
 5354              	.LBE2095:
 5355              	.LBB2097:
 5356              	.LBB2098:
 5357 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5357      000000
 5358 004c F20F100D 		movsd	.LC1(%rip), %xmm1
 5358      00000000 
 5359 0054 F20F1005 		movsd	.LC35(%rip), %xmm0
 5359      00000000 
 5360 005c 488B07   		movq	(%rdi), %rax
 5361 005f FF90E000 		call	*224(%rax)
 5361      0000
 5362              	.LVL544:
 5363              	.LBE2098:
 5364              	.LBE2097:
 5365              	.LBB2099:
 5366              	.LBB2100:
 5367 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5367      000000
 5368 006c F20F100D 		movsd	.LC33(%rip), %xmm1
 5368      00000000 
 5369 0074 F20F1005 		movsd	.LC2(%rip), %xmm0
 5369      00000000 
 5370 007c 488B07   		movq	(%rdi), %rax
 5371 007f FF90E000 		call	*224(%rax)
 5371      0000
 5372              	.LVL545:
 5373              	.LBE2100:
 5374              	.LBE2099:
 5375              	.LBB2101:
 5376              	.LBB2102:
 5377 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5377      000000
 5378 008c F20F100D 		movsd	.LC35(%rip), %xmm1
 5378      00000000 
 5379 0094 F20F1005 		movsd	.LC2(%rip), %xmm0
 5379      00000000 
 5380 009c 488B07   		movq	(%rdi), %rax
 5381 009f FF90E000 		call	*224(%rax)
 5381      0000
 5382              	.LVL546:
 5383              	.LBE2102:
 5384              	.LBE2101:
 5385              	.LBB2103:
 5386              	.LBB2104:
 5387 00a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5387      000000
 5388 00ac F20F100D 		movsd	.LC2(%rip), %xmm1
 5388      00000000 
 5389 00b4 F20F1005 		movsd	.LC35(%rip), %xmm0
 5389      00000000 
 5390 00bc 488B07   		movq	(%rdi), %rax
 5391 00bf FF90E000 		call	*224(%rax)
 5391      0000
 5392              	.LVL547:
 5393              	.LBE2104:
 5394              	.LBE2103:
 5395              	.LBB2105:
 5396              	.LBB2106:
 5397 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5397      000000
 5398 00cc F20F100D 		movsd	.LC2(%rip), %xmm1
 5398      00000000 
 5399 00d4 F20F1005 		movsd	.LC33(%rip), %xmm0
 5399      00000000 
 5400 00dc 488B07   		movq	(%rdi), %rax
 5401 00df FF90E000 		call	*224(%rax)
 5401      0000
 5402              	.LVL548:
 5403              	.LBE2106:
 5404              	.LBE2105:
 5405              	.LBB2107:
 5406              	.LBB2108:
 5407 00e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5407      000000
 5408 00ec F20F100D 		movsd	.LC35(%rip), %xmm1
 5408      00000000 
 5409 00f4 F20F1005 		movsd	.LC1(%rip), %xmm0
 5409      00000000 
 5410 00fc 488B07   		movq	(%rdi), %rax
 5411 00ff FF90E000 		call	*224(%rax)
 5411      0000
 5412              	.LVL549:
 5413              	.LBE2108:
 5414              	.LBE2107:
 5415              	.LBB2109:
 5416              	.LBB2110:
 5417 0105 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5417      000000
 5418 010c F20F100D 		movsd	.LC33(%rip), %xmm1
 5418      00000000 
 5419 0114 F20F1005 		movsd	.LC1(%rip), %xmm0
 5419      00000000 
 5420 011c 488B07   		movq	(%rdi), %rax
 5421 011f FF90E000 		call	*224(%rax)
 5421      0000
 5422              	.LVL550:
 5423              	.LBE2110:
 5424              	.LBE2109:
 5425              	.LBB2111:
 5426              	.LBB2112:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5427              		.loc 2 440 0
 5428 0125 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5428      000000
 5429 012c 488B07   		movq	(%rdi), %rax
 5430 012f FF902801 		call	*296(%rax)
 5430      0000
 5431              	.LVL551:
 5432              	.LBE2112:
 5433              	.LBE2111:
 5434              	.LBB2113:
 5435              	.LBB2114:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 5436              		.loc 3 991 0
 5437 0135 F30F1005 		movss	.LC8(%rip), %xmm0
 5437      00000000 
 5438 013d 89DF     		movl	%ebx, %edi
 5439 013f BEFF0000 		movl	$255, %esi
 5439      00
 5440 0144 E8000000 		call	_Z16fl_color_averagejjf
 5440      00
 5441              	.LVL552:
 5442              	.LBE2114:
 5443              	.LBE2113:
 5444              	.LBB2115:
 5445              	.LBB2116:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5446              		.loc 2 52 0
 5447 0149 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5447      000000
 5448 0150 89C6     		movl	%eax, %esi
 5449 0152 488B17   		movq	(%rdi), %rdx
 5450 0155 FF928800 		call	*136(%rdx)
 5450      0000
 5451              	.LVL553:
 5452              	.LBE2116:
 5453              	.LBE2115:
 5454              	.LBB2117:
 5455              	.LBB2118:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5456              		.loc 2 374 0
 5457 015b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5457      000000
 5458 0162 488B07   		movq	(%rdi), %rax
 5459 0165 FF90D800 		call	*216(%rax)
 5459      0000
 5460              	.LVL554:
 5461              	.LBE2118:
 5462              	.LBE2117:
 5463              	.LBB2119:
 5464              	.LBB2120:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5465              		.loc 2 379 0
 5466 016b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5466      000000
 5467 0172 F20F100D 		movsd	.LC1(%rip), %xmm1
 5467      00000000 
 5468 017a F20F1005 		movsd	.LC47(%rip), %xmm0
 5468      00000000 
 5469 0182 488B07   		movq	(%rdi), %rax
 5470 0185 FF90E000 		call	*224(%rax)
 5470      0000
 5471              	.LVL555:
 5472              	.LBE2120:
 5473              	.LBE2119:
 5474              	.LBB2121:
 5475              	.LBB2122:
 5476 018b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5476      000000
 5477 0192 F20F100D 		movsd	.LC1(%rip), %xmm1
 5477      00000000 
 5478 019a F20F1005 		movsd	.LC77(%rip), %xmm0
 5478      00000000 
 5479 01a2 488B07   		movq	(%rdi), %rax
 5480 01a5 FF90E000 		call	*224(%rax)
 5480      0000
 5481              	.LVL556:
 5482              	.LBE2122:
 5483              	.LBE2121:
 5484              	.LBB2123:
 5485              	.LBB2124:
 5486 01ab 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5486      000000
 5487 01b2 F20F100D 		movsd	.LC11(%rip), %xmm1
 5487      00000000 
 5488 01ba F20F1005 		movsd	.LC77(%rip), %xmm0
 5488      00000000 
 5489 01c2 488B07   		movq	(%rdi), %rax
 5490 01c5 FF90E000 		call	*224(%rax)
 5490      0000
 5491              	.LVL557:
 5492              	.LBE2124:
 5493              	.LBE2123:
 5494              	.LBB2125:
 5495              	.LBB2126:
 5496 01cb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5496      000000
 5497 01d2 F20F100D 		movsd	.LC11(%rip), %xmm1
 5497      00000000 
 5498 01da F20F1005 		movsd	.LC47(%rip), %xmm0
 5498      00000000 
 5499 01e2 488B07   		movq	(%rdi), %rax
 5500 01e5 FF90E000 		call	*224(%rax)
 5500      0000
 5501              	.LVL558:
 5502              	.LBE2126:
 5503              	.LBE2125:
 5504              	.LBB2127:
 5505              	.LBB2128:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5506              		.loc 2 440 0
 5507 01eb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5507      000000
 5508 01f2 488B07   		movq	(%rdi), %rax
 5509 01f5 FF902801 		call	*296(%rax)
 5509      0000
 5510              	.LVL559:
 5511              	.LBE2128:
 5512              	.LBE2127:
 5513              	.LBB2129:
 5514              	.LBB2130:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5515              		.loc 2 374 0
 5516 01fb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5516      000000
 5517 0202 488B07   		movq	(%rdi), %rax
 5518 0205 FF90D800 		call	*216(%rax)
 5518      0000
 5519              	.LVL560:
 5520              	.LBE2130:
 5521              	.LBE2129:
 5522              	.LBB2131:
 5523              	.LBB2132:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5524              		.loc 2 379 0
 5525 020b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5525      000000
 5526 0212 660FEFC9 		pxor	%xmm1, %xmm1
 5527 0216 F20F1005 		movsd	.LC47(%rip), %xmm0
 5527      00000000 
 5528 021e 488B07   		movq	(%rdi), %rax
 5529 0221 FF90E000 		call	*224(%rax)
 5529      0000
 5530              	.LVL561:
 5531              	.LBE2132:
 5532              	.LBE2131:
 5533              	.LBB2133:
 5534              	.LBB2134:
 5535 0227 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5535      000000
 5536 022e 660FEFC9 		pxor	%xmm1, %xmm1
 5537 0232 F20F1005 		movsd	.LC77(%rip), %xmm0
 5537      00000000 
 5538 023a 488B07   		movq	(%rdi), %rax
 5539 023d FF90E000 		call	*224(%rax)
 5539      0000
 5540              	.LVL562:
 5541              	.LBE2134:
 5542              	.LBE2133:
 5543              	.LBB2135:
 5544              	.LBB2136:
 5545 0243 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5545      000000
 5546 024a F20F100D 		movsd	.LC2(%rip), %xmm1
 5546      00000000 
 5547 0252 F20F1005 		movsd	.LC77(%rip), %xmm0
 5547      00000000 
 5548 025a 488B07   		movq	(%rdi), %rax
 5549 025d FF90E000 		call	*224(%rax)
 5549      0000
 5550              	.LVL563:
 5551              	.LBE2136:
 5552              	.LBE2135:
 5553              	.LBB2137:
 5554              	.LBB2138:
 5555 0263 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5555      000000
 5556 026a F20F100D 		movsd	.LC2(%rip), %xmm1
 5556      00000000 
 5557 0272 F20F1005 		movsd	.LC47(%rip), %xmm0
 5557      00000000 
 5558 027a 488B07   		movq	(%rdi), %rax
 5559 027d FF90E000 		call	*224(%rax)
 5559      0000
 5560              	.LVL564:
 5561              	.LBE2138:
 5562              	.LBE2137:
 5563              	.LBB2139:
 5564              	.LBB2140:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5565              		.loc 2 440 0
 5566 0283 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5566      000000
 5567 028a 488B07   		movq	(%rdi), %rax
 5568 028d FF902801 		call	*296(%rax)
 5568      0000
 5569              	.LVL565:
 5570              	.LBE2140:
 5571              	.LBE2139:
 5572              	.LBB2141:
 5573              	.LBB2142:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5574              		.loc 2 52 0
 5575 0293 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5575      000000
 5576 029a 89DE     		movl	%ebx, %esi
 5577 029c 488B07   		movq	(%rdi), %rax
 5578 029f FF908800 		call	*136(%rax)
 5578      0000
 5579              	.LVL566:
 5580              	.LBE2142:
 5581              	.LBE2141:
 5582              	.LBB2143:
 5583              	.LBB2144:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5584              		.loc 2 374 0
 5585 02a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5585      000000
 5586 02ac 488B07   		movq	(%rdi), %rax
 5587 02af FF90D800 		call	*216(%rax)
 5587      0000
 5588              	.LVL567:
 5589              	.LBE2144:
 5590              	.LBE2143:
 5591              	.LBB2145:
 5592              	.LBB2146:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5593              		.loc 2 379 0
 5594 02b5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5594      000000
 5595 02bc F20F100D 		movsd	.LC33(%rip), %xmm1
 5595      00000000 
 5596 02c4 F20F1005 		movsd	.LC43(%rip), %xmm0
 5596      00000000 
 5597 02cc 488B07   		movq	(%rdi), %rax
 5598 02cf FF90E000 		call	*224(%rax)
 5598      0000
 5599              	.LVL568:
 5600              	.LBE2146:
 5601              	.LBE2145:
 5602              	.LBB2147:
 5603              	.LBB2148:
 5604 02d5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5604      000000
 5605 02dc F20F100D 		movsd	.LC33(%rip), %xmm1
 5605      00000000 
 5606 02e4 F20F1005 		movsd	.LC49(%rip), %xmm0
 5606      00000000 
 5607 02ec 488B07   		movq	(%rdi), %rax
 5608 02ef FF90E000 		call	*224(%rax)
 5608      0000
 5609              	.LVL569:
 5610              	.LBE2148:
 5611              	.LBE2147:
 5612              	.LBB2149:
 5613              	.LBB2150:
 5614 02f5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5614      000000
 5615 02fc F20F100D 		movsd	.LC43(%rip), %xmm1
 5615      00000000 
 5616 0304 F20F1005 		movsd	.LC49(%rip), %xmm0
 5616      00000000 
 5617 030c 488B07   		movq	(%rdi), %rax
 5618 030f FF90E000 		call	*224(%rax)
 5618      0000
 5619              	.LVL570:
 5620              	.LBE2150:
 5621              	.LBE2149:
 5622              	.LBB2151:
 5623              	.LBB2152:
 5624 0315 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5624      000000
 5625 031c F20F100D 		movsd	.LC43(%rip), %xmm1
 5625      00000000 
 5626 0324 660F28C1 		movapd	%xmm1, %xmm0
 5627 0328 488B07   		movq	(%rdi), %rax
 5628 032b FF90E000 		call	*224(%rax)
 5628      0000
 5629              	.LVL571:
 5630              	.LBE2152:
 5631              	.LBE2151:
 5632              	.LBB2153:
 5633              	.LBB2154:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5634              		.loc 2 440 0
 5635 0331 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5635      000000
 5636 0338 488B07   		movq	(%rdi), %rax
 5637 033b FF902801 		call	*296(%rax)
 5637      0000
 5638              	.LVL572:
 5639              	.LBE2154:
 5640              	.LBE2153:
 5641              	.LBB2155:
 5642              	.LBB2156:
 5643              		.loc 3 994 0
 5644 0341 F30F1005 		movss	.LC8(%rip), %xmm0
 5644      00000000 
 5645 0349 89DF     		movl	%ebx, %edi
 5646 034b BE380000 		movl	$56, %esi
 5646      00
 5647 0350 E8000000 		call	_Z16fl_color_averagejjf
 5647      00
 5648              	.LVL573:
 5649              	.LBE2156:
 5650              	.LBE2155:
 5651              	.LBB2157:
 5652              	.LBB2158:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5653              		.loc 2 52 0
 5654 0355 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5654      000000
 5655 035c 89C6     		movl	%eax, %esi
 5656 035e 488B17   		movq	(%rdi), %rdx
 5657 0361 FF928800 		call	*136(%rdx)
 5657      0000
 5658              	.LVL574:
 5659              	.LBE2158:
 5660              	.LBE2157:
 5661              	.LBB2159:
 5662              	.LBB2160:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5663              		.loc 2 370 0
 5664 0367 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5664      000000
 5665 036e 488B07   		movq	(%rdi), %rax
 5666 0371 FF90D000 		call	*208(%rax)
 5666      0000
 5667              	.LVL575:
 5668              	.LBE2160:
 5669              	.LBE2159:
 5670              	.LBB2161:
 5671              	.LBB2162:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5672              		.loc 2 379 0
 5673 0377 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5673      000000
 5674 037e F20F100D 		movsd	.LC1(%rip), %xmm1
 5674      00000000 
 5675 0386 F20F1005 		movsd	.LC33(%rip), %xmm0
 5675      00000000 
 5676 038e 488B07   		movq	(%rdi), %rax
 5677 0391 FF90E000 		call	*224(%rax)
 5677      0000
 5678              	.LVL576:
 5679              	.LBE2162:
 5680              	.LBE2161:
 5681              	.LBB2163:
 5682              	.LBB2164:
 5683 0397 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5683      000000
 5684 039e F20F100D 		movsd	.LC1(%rip), %xmm1
 5684      00000000 
 5685 03a6 F20F1005 		movsd	.LC35(%rip), %xmm0
 5685      00000000 
 5686 03ae 488B07   		movq	(%rdi), %rax
 5687 03b1 FF90E000 		call	*224(%rax)
 5687      0000
 5688              	.LVL577:
 5689              	.LBE2164:
 5690              	.LBE2163:
 5691              	.LBB2165:
 5692              	.LBB2166:
 5693 03b7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5693      000000
 5694 03be F20F100D 		movsd	.LC33(%rip), %xmm1
 5694      00000000 
 5695 03c6 F20F1005 		movsd	.LC2(%rip), %xmm0
 5695      00000000 
 5696 03ce 488B07   		movq	(%rdi), %rax
 5697 03d1 FF90E000 		call	*224(%rax)
 5697      0000
 5698              	.LVL578:
 5699              	.LBE2166:
 5700              	.LBE2165:
 5701              	.LBB2167:
 5702              	.LBB2168:
 5703 03d7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5703      000000
 5704 03de F20F100D 		movsd	.LC35(%rip), %xmm1
 5704      00000000 
 5705 03e6 F20F1005 		movsd	.LC2(%rip), %xmm0
 5705      00000000 
 5706 03ee 488B07   		movq	(%rdi), %rax
 5707 03f1 FF90E000 		call	*224(%rax)
 5707      0000
 5708              	.LVL579:
 5709              	.LBE2168:
 5710              	.LBE2167:
 5711              	.LBB2169:
 5712              	.LBB2170:
 5713 03f7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5713      000000
 5714 03fe F20F100D 		movsd	.LC2(%rip), %xmm1
 5714      00000000 
 5715 0406 F20F1005 		movsd	.LC35(%rip), %xmm0
 5715      00000000 
 5716 040e 488B07   		movq	(%rdi), %rax
 5717 0411 FF90E000 		call	*224(%rax)
 5717      0000
 5718              	.LVL580:
 5719              	.LBE2170:
 5720              	.LBE2169:
 5721              	.LBB2171:
 5722              	.LBB2172:
 5723 0417 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5723      000000
 5724 041e F20F100D 		movsd	.LC2(%rip), %xmm1
 5724      00000000 
 5725 0426 F20F1005 		movsd	.LC33(%rip), %xmm0
 5725      00000000 
 5726 042e 488B07   		movq	(%rdi), %rax
 5727 0431 FF90E000 		call	*224(%rax)
 5727      0000
 5728              	.LVL581:
 5729              	.LBE2172:
 5730              	.LBE2171:
 5731              	.LBB2173:
 5732              	.LBB2174:
 5733 0437 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5733      000000
 5734 043e F20F100D 		movsd	.LC35(%rip), %xmm1
 5734      00000000 
 5735 0446 F20F1005 		movsd	.LC1(%rip), %xmm0
 5735      00000000 
 5736 044e 488B07   		movq	(%rdi), %rax
 5737 0451 FF90E000 		call	*224(%rax)
 5737      0000
 5738              	.LVL582:
 5739              	.LBE2174:
 5740              	.LBE2173:
 5741              	.LBB2175:
 5742              	.LBB2176:
 5743 0457 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5743      000000
 5744 045e F20F100D 		movsd	.LC33(%rip), %xmm1
 5744      00000000 
 5745 0466 F20F1005 		movsd	.LC1(%rip), %xmm0
 5745      00000000 
 5746 046e 488B07   		movq	(%rdi), %rax
 5747 0471 FF90E000 		call	*224(%rax)
 5747      0000
 5748              	.LVL583:
 5749              	.LBE2176:
 5750              	.LBE2175:
 5751              	.LBB2177:
 5752              	.LBB2178:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5753              		.loc 2 436 0
 5754 0477 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5754      000000
 5755              	.LBE2178:
 5756              	.LBE2177:
 5757              		.loc 1 516 0
 5758 047e 5B       		popq	%rbx
 5759              		.cfi_def_cfa_offset 8
 5760              	.LVL584:
 5761              	.LBB2180:
 5762              	.LBB2179:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5763              		.loc 2 436 0
 5764 047f 488B07   		movq	(%rdi), %rax
 5765 0482 488B8020 		movq	288(%rax), %rax
 5765      010000
 5766 0489 FFE0     		jmp	*%rax
 5767              	.LVL585:
 5768              	.LBE2179:
 5769              	.LBE2180:
 5770              		.cfi_endproc
 5771              	.LFE517:
 5773              		.section	.text.unlikely._ZL13draw_filesavej
 5774              	.LCOLDE78:
 5775              		.section	.text._ZL13draw_filesavej
 5776              	.LHOTE78:
 5777              		.section	.text.unlikely._ZL15draw_filesaveasj,"ax",@progbits
 5778              	.LCOLDB79:
 5779              		.section	.text._ZL15draw_filesaveasj,"ax",@progbits
 5780              	.LHOTB79:
 5781              		.p2align 4,,15
 5783              	_ZL15draw_filesaveasj:
 5784              	.LFB518:
 5785              		.loc 1 518 0
 5786              		.cfi_startproc
 5787              	.LVL586:
 5788 0000 53       		pushq	%rbx
 5789              		.cfi_def_cfa_offset 16
 5790              		.cfi_offset 3, -16
 5791              		.loc 1 518 0
 5792 0001 89FB     		movl	%edi, %ebx
 5793              		.loc 1 519 0
 5794 0003 E8000000 		call	_ZL13draw_filesavej
 5794      00
 5795              	.LVL587:
 5796              		.loc 1 521 0
 5797 0008 F30F1005 		movss	.LC75(%rip), %xmm0
 5797      00000000 
 5798 0010 89DF     		movl	%ebx, %edi
 5799 0012 BEFF0000 		movl	$255, %esi
 5799      00
 5800 0017 E8000000 		call	_Z16fl_color_averagejjf
 5800      00
 5801              	.LVL588:
 5802              	.LBB2181:
 5803              	.LBB2182:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5804              		.loc 2 52 0
 5805 001c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5805      000000
 5806 0023 89C6     		movl	%eax, %esi
 5807 0025 488B17   		movq	(%rdi), %rdx
 5808 0028 FF928800 		call	*136(%rdx)
 5808      0000
 5809              	.LVL589:
 5810              	.LBE2182:
 5811              	.LBE2181:
 5812              	.LBB2183:
 5813              	.LBB2184:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5814              		.loc 2 374 0
 5815 002e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5815      000000
 5816 0035 488B07   		movq	(%rdi), %rax
 5817 0038 FF90D800 		call	*216(%rax)
 5817      0000
 5818              	.LVL590:
 5819              	.LBE2184:
 5820              	.LBE2183:
 5821              	.LBB2185:
 5822              	.LBB2186:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5823              		.loc 2 379 0
 5824 003e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5824      000000
 5825 0045 F20F100D 		movsd	.LC5(%rip), %xmm1
 5825      00000000 
 5826 004d F20F1005 		movsd	.LC16(%rip), %xmm0
 5826      00000000 
 5827 0055 488B07   		movq	(%rdi), %rax
 5828 0058 FF90E000 		call	*224(%rax)
 5828      0000
 5829              	.LVL591:
 5830              	.LBE2186:
 5831              	.LBE2185:
 5832              	.LBB2187:
 5833              	.LBB2188:
 5834 005e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5834      000000
 5835 0065 F20F100D 		movsd	.LC11(%rip), %xmm1
 5835      00000000 
 5836 006d F20F1005 		movsd	.LC2(%rip), %xmm0
 5836      00000000 
 5837 0075 488B07   		movq	(%rdi), %rax
 5838 0078 FF90E000 		call	*224(%rax)
 5838      0000
 5839              	.LVL592:
 5840              	.LBE2188:
 5841              	.LBE2187:
 5842              	.LBB2189:
 5843              	.LBB2190:
 5844 007e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5844      000000
 5845 0085 F20F100D 		movsd	.LC16(%rip), %xmm1
 5845      00000000 
 5846 008d 660FEFC0 		pxor	%xmm0, %xmm0
 5847 0091 488B07   		movq	(%rdi), %rax
 5848 0094 FF90E000 		call	*224(%rax)
 5848      0000
 5849              	.LVL593:
 5850              	.LBE2190:
 5851              	.LBE2189:
 5852              	.LBB2191:
 5853              	.LBB2192:
 5854 009a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5854      000000
 5855 00a1 F20F100D 		movsd	.LC16(%rip), %xmm1
 5855      00000000 
 5856 00a9 F20F1005 		movsd	.LC11(%rip), %xmm0
 5856      00000000 
 5857 00b1 488B07   		movq	(%rdi), %rax
 5858 00b4 FF90E000 		call	*224(%rax)
 5858      0000
 5859              	.LVL594:
 5860              	.LBE2192:
 5861              	.LBE2191:
 5862              	.LBB2193:
 5863              	.LBB2194:
 5864 00ba 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5864      000000
 5865 00c1 F20F100D 		movsd	.LC18(%rip), %xmm1
 5865      00000000 
 5866 00c9 F20F1005 		movsd	.LC11(%rip), %xmm0
 5866      00000000 
 5867 00d1 488B07   		movq	(%rdi), %rax
 5868 00d4 FF90E000 		call	*224(%rax)
 5868      0000
 5869              	.LVL595:
 5870              	.LBE2194:
 5871              	.LBE2193:
 5872              	.LBB2195:
 5873              	.LBB2196:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5874              		.loc 2 440 0
 5875 00da 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5875      000000
 5876 00e1 488B07   		movq	(%rdi), %rax
 5877 00e4 FF902801 		call	*296(%rax)
 5877      0000
 5878              	.LVL596:
 5879              	.LBE2196:
 5880              	.LBE2195:
 5881              	.LBB2197:
 5882              	.LBB2198:
 5883              		.loc 3 994 0
 5884 00ea F30F1005 		movss	.LC8(%rip), %xmm0
 5884      00000000 
 5885 00f2 89DF     		movl	%ebx, %edi
 5886 00f4 BE380000 		movl	$56, %esi
 5886      00
 5887 00f9 E8000000 		call	_Z16fl_color_averagejjf
 5887      00
 5888              	.LVL597:
 5889              	.LBE2198:
 5890              	.LBE2197:
 5891              	.LBB2199:
 5892              	.LBB2200:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 5893              		.loc 2 52 0
 5894 00fe 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5894      000000
 5895 0105 89C6     		movl	%eax, %esi
 5896 0107 488B17   		movq	(%rdi), %rdx
 5897 010a FF928800 		call	*136(%rdx)
 5897      0000
 5898              	.LVL598:
 5899              	.LBE2200:
 5900              	.LBE2199:
 5901              	.LBB2201:
 5902              	.LBB2202:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5903              		.loc 2 370 0
 5904 0110 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5904      000000
 5905 0117 488B07   		movq	(%rdi), %rax
 5906 011a FF90D000 		call	*208(%rax)
 5906      0000
 5907              	.LVL599:
 5908              	.LBE2202:
 5909              	.LBE2201:
 5910              	.LBB2203:
 5911              	.LBB2204:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5912              		.loc 2 379 0
 5913 0120 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5913      000000
 5914 0127 F20F100D 		movsd	.LC5(%rip), %xmm1
 5914      00000000 
 5915 012f F20F1005 		movsd	.LC16(%rip), %xmm0
 5915      00000000 
 5916 0137 488B07   		movq	(%rdi), %rax
 5917 013a FF90E000 		call	*224(%rax)
 5917      0000
 5918              	.LVL600:
 5919              	.LBE2204:
 5920              	.LBE2203:
 5921              	.LBB2205:
 5922              	.LBB2206:
 5923 0140 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5923      000000
 5924 0147 F20F100D 		movsd	.LC11(%rip), %xmm1
 5924      00000000 
 5925 014f F20F1005 		movsd	.LC2(%rip), %xmm0
 5925      00000000 
 5926 0157 488B07   		movq	(%rdi), %rax
 5927 015a FF90E000 		call	*224(%rax)
 5927      0000
 5928              	.LVL601:
 5929              	.LBE2206:
 5930              	.LBE2205:
 5931              	.LBB2207:
 5932              	.LBB2208:
 5933 0160 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5933      000000
 5934 0167 F20F100D 		movsd	.LC16(%rip), %xmm1
 5934      00000000 
 5935 016f 660FEFC0 		pxor	%xmm0, %xmm0
 5936 0173 488B07   		movq	(%rdi), %rax
 5937 0176 FF90E000 		call	*224(%rax)
 5937      0000
 5938              	.LVL602:
 5939              	.LBE2208:
 5940              	.LBE2207:
 5941              	.LBB2209:
 5942              	.LBB2210:
 5943 017c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5943      000000
 5944 0183 F20F100D 		movsd	.LC16(%rip), %xmm1
 5944      00000000 
 5945 018b F20F1005 		movsd	.LC11(%rip), %xmm0
 5945      00000000 
 5946 0193 488B07   		movq	(%rdi), %rax
 5947 0196 FF90E000 		call	*224(%rax)
 5947      0000
 5948              	.LVL603:
 5949              	.LBE2210:
 5950              	.LBE2209:
 5951              	.LBB2211:
 5952              	.LBB2212:
 5953 019c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5953      000000
 5954 01a3 F20F100D 		movsd	.LC18(%rip), %xmm1
 5954      00000000 
 5955 01ab F20F1005 		movsd	.LC11(%rip), %xmm0
 5955      00000000 
 5956 01b3 488B07   		movq	(%rdi), %rax
 5957 01b6 FF90E000 		call	*224(%rax)
 5957      0000
 5958              	.LVL604:
 5959              	.LBE2212:
 5960              	.LBE2211:
 5961              	.LBB2213:
 5962              	.LBB2214:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5963              		.loc 2 436 0
 5964 01bc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5964      000000
 5965 01c3 488B07   		movq	(%rdi), %rax
 5966 01c6 FF902001 		call	*288(%rax)
 5966      0000
 5967              	.LVL605:
 5968              	.LBE2214:
 5969              	.LBE2213:
 5970              	.LBB2215:
 5971              	.LBB2216:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5972              		.loc 2 374 0
 5973 01cc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5973      000000
 5974 01d3 488B07   		movq	(%rdi), %rax
 5975 01d6 FF90D800 		call	*216(%rax)
 5975      0000
 5976              	.LVL606:
 5977              	.LBE2216:
 5978              	.LBE2215:
 5979              	.LBB2217:
 5980              	.LBB2218:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 5981              		.loc 2 379 0
 5982 01dc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5982      000000
 5983 01e3 F20F100D 		movsd	.LC16(%rip), %xmm1
 5983      00000000 
 5984 01eb F20F1005 		movsd	.LC21(%rip), %xmm0
 5984      00000000 
 5985 01f3 488B07   		movq	(%rdi), %rax
 5986 01f6 FF90E000 		call	*224(%rax)
 5986      0000
 5987              	.LVL607:
 5988              	.LBE2218:
 5989              	.LBE2217:
 5990              	.LBB2219:
 5991              	.LBB2220:
 5992 01fc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 5992      000000
 5993 0203 F20F100D 		movsd	.LC16(%rip), %xmm1
 5993      00000000 
 5994 020b F20F1005 		movsd	.LC11(%rip), %xmm0
 5994      00000000 
 5995 0213 488B07   		movq	(%rdi), %rax
 5996 0216 FF90E000 		call	*224(%rax)
 5996      0000
 5997              	.LVL608:
 5998              	.LBE2220:
 5999              	.LBE2219:
 6000              	.LBB2221:
 6001              	.LBB2222:
 6002 021c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6002      000000
 6003 0223 F20F100D 		movsd	.LC68(%rip), %xmm1
 6003      00000000 
 6004 022b F20F1005 		movsd	.LC11(%rip), %xmm0
 6004      00000000 
 6005 0233 488B07   		movq	(%rdi), %rax
 6006 0236 FF90E000 		call	*224(%rax)
 6006      0000
 6007              	.LVL609:
 6008              	.LBE2222:
 6009              	.LBE2221:
 6010              	.LBB2223:
 6011              	.LBB2224:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6012              		.loc 2 440 0
 6013 023c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6013      000000
 6014              	.LBE2224:
 6015              	.LBE2223:
 6016              		.loc 1 544 0
 6017 0243 5B       		popq	%rbx
 6018              		.cfi_def_cfa_offset 8
 6019              	.LVL610:
 6020              	.LBB2226:
 6021              	.LBB2225:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6022              		.loc 2 440 0
 6023 0244 488B07   		movq	(%rdi), %rax
 6024 0247 488B8028 		movq	296(%rax), %rax
 6024      010000
 6025 024e FFE0     		jmp	*%rax
 6026              	.LVL611:
 6027              	.LBE2225:
 6028              	.LBE2226:
 6029              		.cfi_endproc
 6030              	.LFE518:
 6032              		.section	.text.unlikely._ZL15draw_filesaveasj
 6033              	.LCOLDE79:
 6034              		.section	.text._ZL15draw_filesaveasj
 6035              	.LHOTE79:
 6036              		.section	.text.unlikely._ZL13draw_fileopenj,"ax",@progbits
 6037              	.LCOLDB80:
 6038              		.section	.text._ZL13draw_fileopenj,"ax",@progbits
 6039              	.LHOTB80:
 6040              		.p2align 4,,15
 6042              	_ZL13draw_fileopenj:
 6043              	.LFB516:
 6044              		.loc 1 429 0
 6045              		.cfi_startproc
 6046              	.LVL612:
 6047 0000 53       		pushq	%rbx
 6048              		.cfi_def_cfa_offset 16
 6049              		.cfi_offset 3, -16
 6050              		.loc 1 429 0
 6051 0001 89FB     		movl	%edi, %ebx
 6052              	.LVL613:
 6053              	.LBB2227:
 6054              	.LBB2228:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 6055              		.loc 2 52 0
 6056 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6056      000000
 6057              	.LVL614:
 6058 000a 89DE     		movl	%ebx, %esi
 6059 000c 488B07   		movq	(%rdi), %rax
 6060 000f FF908800 		call	*136(%rax)
 6060      0000
 6061              	.LVL615:
 6062              	.LBE2228:
 6063              	.LBE2227:
 6064              	.LBB2229:
 6065              	.LBB2230:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6066              		.loc 2 374 0
 6067 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6067      000000
 6068 001c 488B07   		movq	(%rdi), %rax
 6069 001f FF90D800 		call	*216(%rax)
 6069      0000
 6070              	.LVL616:
 6071              	.LBE2230:
 6072              	.LBE2229:
 6073              	.LBB2231:
 6074              	.LBB2232:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6075              		.loc 2 379 0
 6076 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6076      000000
 6077 002c F20F100D 		movsd	.LC47(%rip), %xmm1
 6077      00000000 
 6078 0034 F20F1005 		movsd	.LC1(%rip), %xmm0
 6078      00000000 
 6079 003c 488B07   		movq	(%rdi), %rax
 6080 003f FF90E000 		call	*224(%rax)
 6080      0000
 6081              	.LVL617:
 6082              	.LBE2232:
 6083              	.LBE2231:
 6084              	.LBB2233:
 6085              	.LBB2234:
 6086 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6086      000000
 6087 004c F20F100D 		movsd	.LC5(%rip), %xmm1
 6087      00000000 
 6088 0054 F20F1005 		movsd	.LC33(%rip), %xmm0
 6088      00000000 
 6089 005c 488B07   		movq	(%rdi), %rax
 6090 005f FF90E000 		call	*224(%rax)
 6090      0000
 6091              	.LVL618:
 6092              	.LBE2234:
 6093              	.LBE2233:
 6094              	.LBB2235:
 6095              	.LBB2236:
 6096 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6096      000000
 6097 006c F20F100D 		movsd	.LC5(%rip), %xmm1
 6097      00000000 
 6098 0074 F20F1005 		movsd	.LC11(%rip), %xmm0
 6098      00000000 
 6099 007c 488B07   		movq	(%rdi), %rax
 6100 007f FF90E000 		call	*224(%rax)
 6100      0000
 6101              	.LVL619:
 6102              	.LBE2236:
 6103              	.LBE2235:
 6104              	.LBB2237:
 6105              	.LBB2238:
 6106 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6106      000000
 6107 008c F20F100D 		movsd	.LC47(%rip), %xmm1
 6107      00000000 
 6108 0094 F20F1005 		movsd	.LC49(%rip), %xmm0
 6108      00000000 
 6109 009c 488B07   		movq	(%rdi), %rax
 6110 009f FF90E000 		call	*224(%rax)
 6110      0000
 6111              	.LVL620:
 6112              	.LBE2238:
 6113              	.LBE2237:
 6114              	.LBB2239:
 6115              	.LBB2240:
 6116 00a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6116      000000
 6117 00ac F20F100D 		movsd	.LC47(%rip), %xmm1
 6117      00000000 
 6118 00b4 F20F1005 		movsd	.LC16(%rip), %xmm0
 6118      00000000 
 6119 00bc 488B07   		movq	(%rdi), %rax
 6120 00bf FF90E000 		call	*224(%rax)
 6120      0000
 6121              	.LVL621:
 6122              	.LBE2240:
 6123              	.LBE2239:
 6124              	.LBB2241:
 6125              	.LBB2242:
 6126 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6126      000000
 6127 00cc F20F100D 		movsd	.LC77(%rip), %xmm1
 6127      00000000 
 6128 00d4 F20F1005 		movsd	.LC16(%rip), %xmm0
 6128      00000000 
 6129 00dc 488B07   		movq	(%rdi), %rax
 6130 00df FF90E000 		call	*224(%rax)
 6130      0000
 6131              	.LVL622:
 6132              	.LBE2242:
 6133              	.LBE2241:
 6134              	.LBB2243:
 6135              	.LBB2244:
 6136 00e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6136      000000
 6137 00ec F20F100D 		movsd	.LC77(%rip), %xmm1
 6137      00000000 
 6138 00f4 F20F1005 		movsd	.LC1(%rip), %xmm0
 6138      00000000 
 6139 00fc 488B07   		movq	(%rdi), %rax
 6140 00ff FF90E000 		call	*224(%rax)
 6140      0000
 6141              	.LVL623:
 6142              	.LBE2244:
 6143              	.LBE2243:
 6144              	.LBB2245:
 6145              	.LBB2246:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6146              		.loc 2 440 0
 6147 0105 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6147      000000
 6148 010c 488B07   		movq	(%rdi), %rax
 6149 010f FF902801 		call	*296(%rax)
 6149      0000
 6150              	.LVL624:
 6151              	.LBE2246:
 6152              	.LBE2245:
 6153              	.LBB2247:
 6154              	.LBB2248:
 6155              		.loc 3 994 0
 6156 0115 F30F1005 		movss	.LC8(%rip), %xmm0
 6156      00000000 
 6157 011d 89DF     		movl	%ebx, %edi
 6158 011f BE380000 		movl	$56, %esi
 6158      00
 6159 0124 E8000000 		call	_Z16fl_color_averagejjf
 6159      00
 6160              	.LVL625:
 6161              	.LBE2248:
 6162              	.LBE2247:
 6163              	.LBB2249:
 6164              	.LBB2250:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 6165              		.loc 2 52 0
 6166 0129 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6166      000000
 6167 0130 89C6     		movl	%eax, %esi
 6168 0132 488B17   		movq	(%rdi), %rdx
 6169 0135 FF928800 		call	*136(%rdx)
 6169      0000
 6170              	.LVL626:
 6171              	.LBE2250:
 6172              	.LBE2249:
 6173              	.LBB2251:
 6174              	.LBB2252:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6175              		.loc 2 370 0
 6176 013b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6176      000000
 6177 0142 488B07   		movq	(%rdi), %rax
 6178 0145 FF90D000 		call	*208(%rax)
 6178      0000
 6179              	.LVL627:
 6180              	.LBE2252:
 6181              	.LBE2251:
 6182              	.LBB2253:
 6183              	.LBB2254:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6184              		.loc 2 379 0
 6185 014b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6185      000000
 6186 0152 F20F100D 		movsd	.LC47(%rip), %xmm1
 6186      00000000 
 6187 015a F20F1005 		movsd	.LC1(%rip), %xmm0
 6187      00000000 
 6188 0162 488B07   		movq	(%rdi), %rax
 6189 0165 FF90E000 		call	*224(%rax)
 6189      0000
 6190              	.LVL628:
 6191              	.LBE2254:
 6192              	.LBE2253:
 6193              	.LBB2255:
 6194              	.LBB2256:
 6195 016b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6195      000000
 6196 0172 F20F100D 		movsd	.LC5(%rip), %xmm1
 6196      00000000 
 6197 017a F20F1005 		movsd	.LC33(%rip), %xmm0
 6197      00000000 
 6198 0182 488B07   		movq	(%rdi), %rax
 6199 0185 FF90E000 		call	*224(%rax)
 6199      0000
 6200              	.LVL629:
 6201              	.LBE2256:
 6202              	.LBE2255:
 6203              	.LBB2257:
 6204              	.LBB2258:
 6205 018b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6205      000000
 6206 0192 F20F100D 		movsd	.LC5(%rip), %xmm1
 6206      00000000 
 6207 019a F20F1005 		movsd	.LC11(%rip), %xmm0
 6207      00000000 
 6208 01a2 488B07   		movq	(%rdi), %rax
 6209 01a5 FF90E000 		call	*224(%rax)
 6209      0000
 6210              	.LVL630:
 6211              	.LBE2258:
 6212              	.LBE2257:
 6213              	.LBB2259:
 6214              	.LBB2260:
 6215 01ab 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6215      000000
 6216 01b2 F20F100D 		movsd	.LC47(%rip), %xmm1
 6216      00000000 
 6217 01ba F20F1005 		movsd	.LC49(%rip), %xmm0
 6217      00000000 
 6218 01c2 488B07   		movq	(%rdi), %rax
 6219 01c5 FF90E000 		call	*224(%rax)
 6219      0000
 6220              	.LVL631:
 6221              	.LBE2260:
 6222              	.LBE2259:
 6223              	.LBB2261:
 6224              	.LBB2262:
 6225 01cb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6225      000000
 6226 01d2 F20F100D 		movsd	.LC47(%rip), %xmm1
 6226      00000000 
 6227 01da F20F1005 		movsd	.LC16(%rip), %xmm0
 6227      00000000 
 6228 01e2 488B07   		movq	(%rdi), %rax
 6229 01e5 FF90E000 		call	*224(%rax)
 6229      0000
 6230              	.LVL632:
 6231              	.LBE2262:
 6232              	.LBE2261:
 6233              	.LBB2263:
 6234              	.LBB2264:
 6235 01eb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6235      000000
 6236 01f2 F20F100D 		movsd	.LC77(%rip), %xmm1
 6236      00000000 
 6237 01fa F20F1005 		movsd	.LC16(%rip), %xmm0
 6237      00000000 
 6238 0202 488B07   		movq	(%rdi), %rax
 6239 0205 FF90E000 		call	*224(%rax)
 6239      0000
 6240              	.LVL633:
 6241              	.LBE2264:
 6242              	.LBE2263:
 6243              	.LBB2265:
 6244              	.LBB2266:
 6245 020b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6245      000000
 6246 0212 F20F100D 		movsd	.LC77(%rip), %xmm1
 6246      00000000 
 6247 021a F20F1005 		movsd	.LC1(%rip), %xmm0
 6247      00000000 
 6248 0222 488B07   		movq	(%rdi), %rax
 6249 0225 FF90E000 		call	*224(%rax)
 6249      0000
 6250              	.LVL634:
 6251              	.LBE2266:
 6252              	.LBE2265:
 6253              	.LBB2267:
 6254              	.LBB2268:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6255              		.loc 2 436 0
 6256 022b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6256      000000
 6257 0232 488B07   		movq	(%rdi), %rax
 6258 0235 FF902001 		call	*288(%rax)
 6258      0000
 6259              	.LVL635:
 6260              	.LBE2268:
 6261              	.LBE2267:
 6262              	.LBB2269:
 6263              	.LBB2270:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 6264              		.loc 3 991 0
 6265 023b F30F1005 		movss	.LC8(%rip), %xmm0
 6265      00000000 
 6266 0243 89DF     		movl	%ebx, %edi
 6267 0245 BEFF0000 		movl	$255, %esi
 6267      00
 6268 024a E8000000 		call	_Z16fl_color_averagejjf
 6268      00
 6269              	.LVL636:
 6270              	.LBE2270:
 6271              	.LBE2269:
 6272              	.LBB2271:
 6273              	.LBB2272:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 6274              		.loc 2 52 0
 6275 024f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6275      000000
 6276 0256 89C6     		movl	%eax, %esi
 6277 0258 488B17   		movq	(%rdi), %rdx
 6278 025b FF928800 		call	*136(%rdx)
 6278      0000
 6279              	.LVL637:
 6280              	.LBE2272:
 6281              	.LBE2271:
 6282              	.LBB2273:
 6283              	.LBB2274:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6284              		.loc 2 374 0
 6285 0261 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6285      000000
 6286 0268 488B07   		movq	(%rdi), %rax
 6287 026b FF90D800 		call	*216(%rax)
 6287      0000
 6288              	.LVL638:
 6289              	.LBE2274:
 6290              	.LBE2273:
 6291              	.LBB2275:
 6292              	.LBB2276:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6293              		.loc 2 379 0
 6294 0271 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6294      000000
 6295 0278 F20F100D 		movsd	.LC77(%rip), %xmm1
 6295      00000000 
 6296 0280 F20F1005 		movsd	.LC1(%rip), %xmm0
 6296      00000000 
 6297 0288 488B07   		movq	(%rdi), %rax
 6298 028b FF90E000 		call	*224(%rax)
 6298      0000
 6299              	.LVL639:
 6300              	.LBE2276:
 6301              	.LBE2275:
 6302              	.LBB2277:
 6303              	.LBB2278:
 6304 0291 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6304      000000
 6305 0298 F20F100D 		movsd	.LC49(%rip), %xmm1
 6305      00000000 
 6306 02a0 F20F1005 		movsd	.LC22(%rip), %xmm0
 6306      00000000 
 6307 02a8 488B07   		movq	(%rdi), %rax
 6308 02ab FF90E000 		call	*224(%rax)
 6308      0000
 6309              	.LVL640:
 6310              	.LBE2278:
 6311              	.LBE2277:
 6312              	.LBB2279:
 6313              	.LBB2280:
 6314 02b1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6314      000000
 6315 02b8 F20F100D 		movsd	.LC49(%rip), %xmm1
 6315      00000000 
 6316 02c0 F20F1005 		movsd	.LC2(%rip), %xmm0
 6316      00000000 
 6317 02c8 488B07   		movq	(%rdi), %rax
 6318 02cb FF90E000 		call	*224(%rax)
 6318      0000
 6319              	.LVL641:
 6320              	.LBE2280:
 6321              	.LBE2279:
 6322              	.LBB2281:
 6323              	.LBB2282:
 6324 02d1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6324      000000
 6325 02d8 F20F100D 		movsd	.LC77(%rip), %xmm1
 6325      00000000 
 6326 02e0 F20F1005 		movsd	.LC16(%rip), %xmm0
 6326      00000000 
 6327 02e8 488B07   		movq	(%rdi), %rax
 6328 02eb FF90E000 		call	*224(%rax)
 6328      0000
 6329              	.LVL642:
 6330              	.LBE2282:
 6331              	.LBE2281:
 6332              	.LBB2283:
 6333              	.LBB2284:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6334              		.loc 2 440 0
 6335 02f1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6335      000000
 6336 02f8 488B07   		movq	(%rdi), %rax
 6337 02fb FF902801 		call	*296(%rax)
 6337      0000
 6338              	.LVL643:
 6339              	.LBE2284:
 6340              	.LBE2283:
 6341              	.LBB2285:
 6342              	.LBB2286:
 6343              		.loc 3 994 0
 6344 0301 F30F1005 		movss	.LC8(%rip), %xmm0
 6344      00000000 
 6345 0309 89DF     		movl	%ebx, %edi
 6346 030b BE380000 		movl	$56, %esi
 6346      00
 6347 0310 E8000000 		call	_Z16fl_color_averagejjf
 6347      00
 6348              	.LVL644:
 6349              	.LBE2286:
 6350              	.LBE2285:
 6351              	.LBB2287:
 6352              	.LBB2288:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 6353              		.loc 2 52 0
 6354 0315 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6354      000000
 6355 031c 89C6     		movl	%eax, %esi
 6356 031e 488B17   		movq	(%rdi), %rdx
 6357 0321 FF928800 		call	*136(%rdx)
 6357      0000
 6358              	.LVL645:
 6359              	.LBE2288:
 6360              	.LBE2287:
 6361              	.LBB2289:
 6362              	.LBB2290:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6363              		.loc 2 370 0
 6364 0327 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6364      000000
 6365 032e 488B07   		movq	(%rdi), %rax
 6366 0331 FF90D000 		call	*208(%rax)
 6366      0000
 6367              	.LVL646:
 6368              	.LBE2290:
 6369              	.LBE2289:
 6370              	.LBB2291:
 6371              	.LBB2292:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6372              		.loc 2 379 0
 6373 0337 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6373      000000
 6374 033e F20F100D 		movsd	.LC77(%rip), %xmm1
 6374      00000000 
 6375 0346 F20F1005 		movsd	.LC1(%rip), %xmm0
 6375      00000000 
 6376 034e 488B07   		movq	(%rdi), %rax
 6377 0351 FF90E000 		call	*224(%rax)
 6377      0000
 6378              	.LVL647:
 6379              	.LBE2292:
 6380              	.LBE2291:
 6381              	.LBB2293:
 6382              	.LBB2294:
 6383 0357 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6383      000000
 6384 035e F20F100D 		movsd	.LC49(%rip), %xmm1
 6384      00000000 
 6385 0366 F20F1005 		movsd	.LC22(%rip), %xmm0
 6385      00000000 
 6386 036e 488B07   		movq	(%rdi), %rax
 6387 0371 FF90E000 		call	*224(%rax)
 6387      0000
 6388              	.LVL648:
 6389              	.LBE2294:
 6390              	.LBE2293:
 6391              	.LBB2295:
 6392              	.LBB2296:
 6393 0377 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6393      000000
 6394 037e F20F100D 		movsd	.LC49(%rip), %xmm1
 6394      00000000 
 6395 0386 F20F1005 		movsd	.LC2(%rip), %xmm0
 6395      00000000 
 6396 038e 488B07   		movq	(%rdi), %rax
 6397 0391 FF90E000 		call	*224(%rax)
 6397      0000
 6398              	.LVL649:
 6399              	.LBE2296:
 6400              	.LBE2295:
 6401              	.LBB2297:
 6402              	.LBB2298:
 6403 0397 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6403      000000
 6404 039e F20F100D 		movsd	.LC77(%rip), %xmm1
 6404      00000000 
 6405 03a6 F20F1005 		movsd	.LC16(%rip), %xmm0
 6405      00000000 
 6406 03ae 488B07   		movq	(%rdi), %rax
 6407 03b1 FF90E000 		call	*224(%rax)
 6407      0000
 6408              	.LVL650:
 6409              	.LBE2298:
 6410              	.LBE2297:
 6411              	.LBB2299:
 6412              	.LBB2300:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6413              		.loc 2 436 0
 6414 03b7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6414      000000
 6415              	.LBE2300:
 6416              	.LBE2299:
 6417              		.loc 1 467 0
 6418 03be 5B       		popq	%rbx
 6419              		.cfi_def_cfa_offset 8
 6420              	.LVL651:
 6421              	.LBB2302:
 6422              	.LBB2301:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6423              		.loc 2 436 0
 6424 03bf 488B07   		movq	(%rdi), %rax
 6425 03c2 488B8020 		movq	288(%rax), %rax
 6425      010000
 6426 03c9 FFE0     		jmp	*%rax
 6427              	.LVL652:
 6428              	.LBE2301:
 6429              	.LBE2302:
 6430              		.cfi_endproc
 6431              	.LFE516:
 6433              		.section	.text.unlikely._ZL13draw_fileopenj
 6434              	.LCOLDE80:
 6435              		.section	.text._ZL13draw_fileopenj
 6436              	.LHOTE80:
 6437              		.section	.text.unlikely._ZL12draw_filenewj,"ax",@progbits
 6438              	.LCOLDB81:
 6439              		.section	.text._ZL12draw_filenewj,"ax",@progbits
 6440              	.LHOTB81:
 6441              		.p2align 4,,15
 6443              	_ZL12draw_filenewj:
 6444              	.LFB515:
 6445              		.loc 1 395 0
 6446              		.cfi_startproc
 6447              	.LVL653:
 6448 0000 53       		pushq	%rbx
 6449              		.cfi_def_cfa_offset 16
 6450              		.cfi_offset 3, -16
 6451              		.loc 1 395 0
 6452 0001 89FB     		movl	%edi, %ebx
 6453              	.LVL654:
 6454              	.LBB2303:
 6455              	.LBB2304:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 6456              		.loc 2 52 0
 6457 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6457      000000
 6458              	.LVL655:
 6459 000a 89DE     		movl	%ebx, %esi
 6460 000c 488B07   		movq	(%rdi), %rax
 6461 000f FF908800 		call	*136(%rax)
 6461      0000
 6462              	.LVL656:
 6463              	.LBE2304:
 6464              	.LBE2303:
 6465              	.LBB2305:
 6466              	.LBB2306:
 455:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6467              		.loc 2 455 0
 6468 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6468      000000
 6469 001c 488B07   		movq	(%rdi), %rax
 6470 001f FF903001 		call	*304(%rax)
 6470      0000
 6471              	.LVL657:
 6472              	.LBE2306:
 6473              	.LBE2305:
 6474              	.LBB2307:
 6475              	.LBB2308:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6476              		.loc 2 379 0
 6477 0025 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6477      000000
 6478 002c F20F100D 		movsd	.LC1(%rip), %xmm1
 6478      00000000 
 6479 0034 F20F1005 		movsd	.LC47(%rip), %xmm0
 6479      00000000 
 6480 003c 488B07   		movq	(%rdi), %rax
 6481 003f FF90E000 		call	*224(%rax)
 6481      0000
 6482              	.LVL658:
 6483              	.LBE2308:
 6484              	.LBE2307:
 6485              	.LBB2309:
 6486              	.LBB2310:
 6487 0045 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6487      000000
 6488 004c F20F100D 		movsd	.LC1(%rip), %xmm1
 6488      00000000 
 6489 0054 F20F1005 		movsd	.LC23(%rip), %xmm0
 6489      00000000 
 6490 005c 488B07   		movq	(%rdi), %rax
 6491 005f FF90E000 		call	*224(%rax)
 6491      0000
 6492              	.LVL659:
 6493              	.LBE2310:
 6494              	.LBE2309:
 6495              	.LBB2311:
 6496              	.LBB2312:
 6497 0065 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6497      000000
 6498 006c F20F100D 		movsd	.LC11(%rip), %xmm1
 6498      00000000 
 6499 0074 F20F1005 		movsd	.LC23(%rip), %xmm0
 6499      00000000 
 6500 007c 488B07   		movq	(%rdi), %rax
 6501 007f FF90E000 		call	*224(%rax)
 6501      0000
 6502              	.LVL660:
 6503              	.LBE2312:
 6504              	.LBE2311:
 6505              	.LBB2313:
 6506              	.LBB2314:
 6507 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6507      000000
 6508 008c F20F100D 		movsd	.LC11(%rip), %xmm1
 6508      00000000 
 6509 0094 F20F1005 		movsd	.LC77(%rip), %xmm0
 6509      00000000 
 6510 009c 488B07   		movq	(%rdi), %rax
 6511 009f FF90E000 		call	*224(%rax)
 6511      0000
 6512              	.LVL661:
 6513              	.LBE2314:
 6514              	.LBE2313:
 6515              	.LBB2315:
 6516              	.LBB2316:
 6517 00a5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6517      000000
 6518 00ac F20F100D 		movsd	.LC2(%rip), %xmm1
 6518      00000000 
 6519 00b4 F20F1005 		movsd	.LC77(%rip), %xmm0
 6519      00000000 
 6520 00bc 488B07   		movq	(%rdi), %rax
 6521 00bf FF90E000 		call	*224(%rax)
 6521      0000
 6522              	.LVL662:
 6523              	.LBE2316:
 6524              	.LBE2315:
 6525              	.LBB2317:
 6526              	.LBB2318:
 6527 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6527      000000
 6528 00cc F20F100D 		movsd	.LC2(%rip), %xmm1
 6528      00000000 
 6529 00d4 F20F1005 		movsd	.LC47(%rip), %xmm0
 6529      00000000 
 6530 00dc 488B07   		movq	(%rdi), %rax
 6531 00df FF90E000 		call	*224(%rax)
 6531      0000
 6532              	.LVL663:
 6533              	.LBE2318:
 6534              	.LBE2317:
 6535              	.LBB2319:
 6536              	.LBB2320:
 6537              		.loc 2 466 0
 6538 00e5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6538      000000
 6539 00ec 488B07   		movq	(%rdi), %rax
 6540 00ef FF904001 		call	*320(%rax)
 6540      0000
 6541              	.LVL664:
 6542              	.LBE2320:
 6543              	.LBE2319:
 6544              	.LBB2321:
 6545              	.LBB2322:
 991:fltk-1.3.4-1/FL/Enumerations.H **** 
 6546              		.loc 3 991 0
 6547 00f5 F30F1005 		movss	.LC8(%rip), %xmm0
 6547      00000000 
 6548 00fd 89DF     		movl	%ebx, %edi
 6549 00ff BEFF0000 		movl	$255, %esi
 6549      00
 6550 0104 E8000000 		call	_Z16fl_color_averagejjf
 6550      00
 6551              	.LVL665:
 6552              	.LBE2322:
 6553              	.LBE2321:
 6554              	.LBB2323:
 6555              	.LBB2324:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 6556              		.loc 2 52 0
 6557 0109 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6557      000000
 6558 0110 89C6     		movl	%eax, %esi
 6559 0112 488B17   		movq	(%rdi), %rdx
 6560 0115 FF928800 		call	*136(%rdx)
 6560      0000
 6561              	.LVL666:
 6562              	.LBE2324:
 6563              	.LBE2323:
 6564              	.LBB2325:
 6565              	.LBB2326:
 374:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6566              		.loc 2 374 0
 6567 011b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6567      000000
 6568 0122 488B07   		movq	(%rdi), %rax
 6569 0125 FF90D800 		call	*216(%rax)
 6569      0000
 6570              	.LVL667:
 6571              	.LBE2326:
 6572              	.LBE2325:
 6573              	.LBB2327:
 6574              	.LBB2328:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6575              		.loc 2 379 0
 6576 012b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6576      000000
 6577 0132 F20F100D 		movsd	.LC1(%rip), %xmm1
 6577      00000000 
 6578 013a F20F1005 		movsd	.LC23(%rip), %xmm0
 6578      00000000 
 6579 0142 488B07   		movq	(%rdi), %rax
 6580 0145 FF90E000 		call	*224(%rax)
 6580      0000
 6581              	.LVL668:
 6582              	.LBE2328:
 6583              	.LBE2327:
 6584              	.LBB2329:
 6585              	.LBB2330:
 6586 014b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6586      000000
 6587 0152 F20F100D 		movsd	.LC11(%rip), %xmm1
 6587      00000000 
 6588 015a F20F1005 		movsd	.LC23(%rip), %xmm0
 6588      00000000 
 6589 0162 488B07   		movq	(%rdi), %rax
 6590 0165 FF90E000 		call	*224(%rax)
 6590      0000
 6591              	.LVL669:
 6592              	.LBE2330:
 6593              	.LBE2329:
 6594              	.LBB2331:
 6595              	.LBB2332:
 6596 016b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6596      000000
 6597 0172 F20F100D 		movsd	.LC11(%rip), %xmm1
 6597      00000000 
 6598 017a F20F1005 		movsd	.LC77(%rip), %xmm0
 6598      00000000 
 6599 0182 488B07   		movq	(%rdi), %rax
 6600 0185 FF90E000 		call	*224(%rax)
 6600      0000
 6601              	.LVL670:
 6602              	.LBE2332:
 6603              	.LBE2331:
 6604              	.LBB2333:
 6605              	.LBB2334:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6606              		.loc 2 440 0
 6607 018b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6607      000000
 6608 0192 488B07   		movq	(%rdi), %rax
 6609 0195 FF902801 		call	*296(%rax)
 6609      0000
 6610              	.LVL671:
 6611              	.LBE2334:
 6612              	.LBE2333:
 6613              	.LBB2335:
 6614              	.LBB2336:
 6615              		.loc 3 994 0
 6616 019b F30F1005 		movss	.LC8(%rip), %xmm0
 6616      00000000 
 6617 01a3 89DF     		movl	%ebx, %edi
 6618 01a5 BE380000 		movl	$56, %esi
 6618      00
 6619 01aa E8000000 		call	_Z16fl_color_averagejjf
 6619      00
 6620              	.LVL672:
 6621              	.LBE2336:
 6622              	.LBE2335:
 6623              	.LBB2337:
 6624              	.LBB2338:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 6625              		.loc 2 52 0
 6626 01af 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6626      000000
 6627 01b6 89C6     		movl	%eax, %esi
 6628 01b8 488B17   		movq	(%rdi), %rdx
 6629 01bb FF928800 		call	*136(%rdx)
 6629      0000
 6630              	.LVL673:
 6631              	.LBE2338:
 6632              	.LBE2337:
 6633              	.LBB2339:
 6634              	.LBB2340:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6635              		.loc 2 370 0
 6636 01c1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6636      000000
 6637 01c8 488B07   		movq	(%rdi), %rax
 6638 01cb FF90D000 		call	*208(%rax)
 6638      0000
 6639              	.LVL674:
 6640              	.LBE2340:
 6641              	.LBE2339:
 6642              	.LBB2341:
 6643              	.LBB2342:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6644              		.loc 2 379 0
 6645 01d1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6645      000000
 6646 01d8 F20F100D 		movsd	.LC1(%rip), %xmm1
 6646      00000000 
 6647 01e0 F20F1005 		movsd	.LC47(%rip), %xmm0
 6647      00000000 
 6648 01e8 488B07   		movq	(%rdi), %rax
 6649 01eb FF90E000 		call	*224(%rax)
 6649      0000
 6650              	.LVL675:
 6651              	.LBE2342:
 6652              	.LBE2341:
 6653              	.LBB2343:
 6654              	.LBB2344:
 6655 01f1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6655      000000
 6656 01f8 F20F100D 		movsd	.LC1(%rip), %xmm1
 6656      00000000 
 6657 0200 F20F1005 		movsd	.LC23(%rip), %xmm0
 6657      00000000 
 6658 0208 488B07   		movq	(%rdi), %rax
 6659 020b FF90E000 		call	*224(%rax)
 6659      0000
 6660              	.LVL676:
 6661              	.LBE2344:
 6662              	.LBE2343:
 6663              	.LBB2345:
 6664              	.LBB2346:
 6665 0211 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6665      000000
 6666 0218 F20F100D 		movsd	.LC11(%rip), %xmm1
 6666      00000000 
 6667 0220 F20F1005 		movsd	.LC23(%rip), %xmm0
 6667      00000000 
 6668 0228 488B07   		movq	(%rdi), %rax
 6669 022b FF90E000 		call	*224(%rax)
 6669      0000
 6670              	.LVL677:
 6671              	.LBE2346:
 6672              	.LBE2345:
 6673              	.LBB2347:
 6674              	.LBB2348:
 6675 0231 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6675      000000
 6676 0238 F20F100D 		movsd	.LC11(%rip), %xmm1
 6676      00000000 
 6677 0240 F20F1005 		movsd	.LC77(%rip), %xmm0
 6677      00000000 
 6678 0248 488B07   		movq	(%rdi), %rax
 6679 024b FF90E000 		call	*224(%rax)
 6679      0000
 6680              	.LVL678:
 6681              	.LBE2348:
 6682              	.LBE2347:
 6683              	.LBB2349:
 6684              	.LBB2350:
 6685 0251 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6685      000000
 6686 0258 F20F100D 		movsd	.LC2(%rip), %xmm1
 6686      00000000 
 6687 0260 F20F1005 		movsd	.LC77(%rip), %xmm0
 6687      00000000 
 6688 0268 488B07   		movq	(%rdi), %rax
 6689 026b FF90E000 		call	*224(%rax)
 6689      0000
 6690              	.LVL679:
 6691              	.LBE2350:
 6692              	.LBE2349:
 6693              	.LBB2351:
 6694              	.LBB2352:
 6695 0271 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6695      000000
 6696 0278 F20F100D 		movsd	.LC2(%rip), %xmm1
 6696      00000000 
 6697 0280 F20F1005 		movsd	.LC47(%rip), %xmm0
 6697      00000000 
 6698 0288 488B07   		movq	(%rdi), %rax
 6699 028b FF90E000 		call	*224(%rax)
 6699      0000
 6700              	.LVL680:
 6701              	.LBE2352:
 6702              	.LBE2351:
 6703              	.LBB2353:
 6704              	.LBB2354:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6705              		.loc 2 436 0
 6706 0291 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6706      000000
 6707 0298 488B07   		movq	(%rdi), %rax
 6708 029b FF902001 		call	*288(%rax)
 6708      0000
 6709              	.LVL681:
 6710              	.LBE2354:
 6711              	.LBE2353:
 6712              	.LBB2355:
 6713              	.LBB2356:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6714              		.loc 2 366 0
 6715 02a1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6715      000000
 6716 02a8 488B07   		movq	(%rdi), %rax
 6717 02ab FF90C800 		call	*200(%rax)
 6717      0000
 6718              	.LVL682:
 6719              	.LBE2356:
 6720              	.LBE2355:
 6721              	.LBB2357:
 6722              	.LBB2358:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6723              		.loc 2 379 0
 6724 02b1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6724      000000
 6725 02b8 F20F100D 		movsd	.LC1(%rip), %xmm1
 6725      00000000 
 6726 02c0 F20F1005 		movsd	.LC23(%rip), %xmm0
 6726      00000000 
 6727 02c8 488B07   		movq	(%rdi), %rax
 6728 02cb FF90E000 		call	*224(%rax)
 6728      0000
 6729              	.LVL683:
 6730              	.LBE2358:
 6731              	.LBE2357:
 6732              	.LBB2359:
 6733              	.LBB2360:
 6734 02d1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6734      000000
 6735 02d8 F20F100D 		movsd	.LC11(%rip), %xmm1
 6735      00000000 
 6736 02e0 F20F1005 		movsd	.LC77(%rip), %xmm0
 6736      00000000 
 6737 02e8 488B07   		movq	(%rdi), %rax
 6738 02eb FF90E000 		call	*224(%rax)
 6738      0000
 6739              	.LVL684:
 6740              	.LBE2360:
 6741              	.LBE2359:
 6742              	.LBB2361:
 6743              	.LBB2362:
 432:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6744              		.loc 2 432 0
 6745 02f1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6745      000000
 6746              	.LBE2362:
 6747              	.LBE2361:
 6748              		.loc 1 427 0
 6749 02f8 5B       		popq	%rbx
 6750              		.cfi_def_cfa_offset 8
 6751              	.LVL685:
 6752              	.LBB2364:
 6753              	.LBB2363:
 432:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6754              		.loc 2 432 0
 6755 02f9 488B07   		movq	(%rdi), %rax
 6756 02fc 488B8018 		movq	280(%rax), %rax
 6756      010000
 6757 0303 FFE0     		jmp	*%rax
 6758              	.LVL686:
 6759              	.LBE2363:
 6760              	.LBE2364:
 6761              		.cfi_endproc
 6762              	.LFE515:
 6764              		.section	.text.unlikely._ZL12draw_filenewj
 6765              	.LCOLDE81:
 6766              		.section	.text._ZL12draw_filenewj
 6767              	.LHOTE81:
 6768              		.section	.text.unlikely._ZL14draw_0bararrowj,"ax",@progbits
 6769              	.LCOLDB82:
 6770              		.section	.text._ZL14draw_0bararrowj,"ax",@progbits
 6771              	.LHOTB82:
 6772              		.p2align 4,,15
 6774              	_ZL14draw_0bararrowj:
 6775              	.LFB505:
 6776              		.loc 1 325 0
 6777              		.cfi_startproc
 6778              	.LVL687:
 6779 0000 53       		pushq	%rbx
 6780              		.cfi_def_cfa_offset 16
 6781              		.cfi_offset 3, -16
 6782              		.loc 1 325 0
 6783 0001 89FB     		movl	%edi, %ebx
 6784              	.LBB2365:
 6785              	.LBB2366:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6786              		.loc 2 350 0
 6787 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6787      000000
 6788              	.LVL688:
 6789 000a F20F1005 		movsd	.LC58(%rip), %xmm0
 6789      00000000 
 6790 0012 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 6790      00
 6791              	.LVL689:
 6792              	.LBE2366:
 6793              	.LBE2365:
 6794              		.loc 1 325 0
 6795 0017 89DF     		movl	%ebx, %edi
 6796 0019 5B       		popq	%rbx
 6797              		.cfi_def_cfa_offset 8
 6798              	.LVL690:
 6799 001a E9000000 		jmp	_ZL13draw_bararrowj
 6799      00
 6800              	.LVL691:
 6801              		.cfi_endproc
 6802              	.LFE505:
 6804              		.section	.text.unlikely._ZL14draw_0bararrowj
 6805              	.LCOLDE82:
 6806              		.section	.text._ZL14draw_0bararrowj
 6807              	.LHOTE82:
 6808              		.section	.text.unlikely._ZL14draw_0arrowboxj,"ax",@progbits
 6809              	.LCOLDB83:
 6810              		.section	.text._ZL14draw_0arrowboxj,"ax",@progbits
 6811              	.LHOTB83:
 6812              		.p2align 4,,15
 6814              	_ZL14draw_0arrowboxj:
 6815              	.LFB504:
 6816              		.loc 1 322 0
 6817              		.cfi_startproc
 6818              	.LVL692:
 6819 0000 53       		pushq	%rbx
 6820              		.cfi_def_cfa_offset 16
 6821              		.cfi_offset 3, -16
 6822              		.loc 1 322 0
 6823 0001 89FB     		movl	%edi, %ebx
 6824              	.LBB2367:
 6825              	.LBB2368:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6826              		.loc 2 350 0
 6827 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6827      000000
 6828              	.LVL693:
 6829 000a F20F1005 		movsd	.LC58(%rip), %xmm0
 6829      00000000 
 6830 0012 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 6830      00
 6831              	.LVL694:
 6832              	.LBE2368:
 6833              	.LBE2367:
 6834              		.loc 1 322 0
 6835 0017 89DF     		movl	%ebx, %edi
 6836 0019 5B       		popq	%rbx
 6837              		.cfi_def_cfa_offset 8
 6838              	.LVL695:
 6839 001a E9000000 		jmp	_ZL13draw_arrowboxj
 6839      00
 6840              	.LVL696:
 6841              		.cfi_endproc
 6842              	.LFE504:
 6844              		.section	.text.unlikely._ZL14draw_0arrowboxj
 6845              	.LCOLDE83:
 6846              		.section	.text._ZL14draw_0arrowboxj
 6847              	.LHOTE83:
 6848              		.section	.text.unlikely._ZL14draw_0arrowbarj,"ax",@progbits
 6849              	.LCOLDB84:
 6850              		.section	.text._ZL14draw_0arrowbarj,"ax",@progbits
 6851              	.LHOTB84:
 6852              		.p2align 4,,15
 6854              	_ZL14draw_0arrowbarj:
 6855              	.LFB503:
 6856              		.loc 1 319 0
 6857              		.cfi_startproc
 6858              	.LVL697:
 6859 0000 53       		pushq	%rbx
 6860              		.cfi_def_cfa_offset 16
 6861              		.cfi_offset 3, -16
 6862              		.loc 1 319 0
 6863 0001 89FB     		movl	%edi, %ebx
 6864              	.LBB2369:
 6865              	.LBB2370:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6866              		.loc 2 350 0
 6867 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6867      000000
 6868              	.LVL698:
 6869 000a F20F1005 		movsd	.LC58(%rip), %xmm0
 6869      00000000 
 6870 0012 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 6870      00
 6871              	.LVL699:
 6872              	.LBE2370:
 6873              	.LBE2369:
 6874              		.loc 1 319 0
 6875 0017 89DF     		movl	%ebx, %edi
 6876 0019 5B       		popq	%rbx
 6877              		.cfi_def_cfa_offset 8
 6878              	.LVL700:
 6879 001a E9000000 		jmp	_ZL13draw_arrowbarj
 6879      00
 6880              	.LVL701:
 6881              		.cfi_endproc
 6882              	.LFE503:
 6884              		.section	.text.unlikely._ZL14draw_0arrowbarj
 6885              	.LCOLDE84:
 6886              		.section	.text._ZL14draw_0arrowbarj
 6887              	.LHOTE84:
 6888              		.section	.text.unlikely._ZL12draw_arrow03j,"ax",@progbits
 6889              	.LCOLDB85:
 6890              		.section	.text._ZL12draw_arrow03j,"ax",@progbits
 6891              	.LHOTB85:
 6892              		.p2align 4,,15
 6894              	_ZL12draw_arrow03j:
 6895              	.LFB502:
 6896              		.loc 1 316 0
 6897              		.cfi_startproc
 6898              	.LVL702:
 6899 0000 53       		pushq	%rbx
 6900              		.cfi_def_cfa_offset 16
 6901              		.cfi_offset 3, -16
 6902              		.loc 1 316 0
 6903 0001 89FB     		movl	%edi, %ebx
 6904              	.LBB2371:
 6905              	.LBB2372:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6906              		.loc 2 350 0
 6907 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6907      000000
 6908              	.LVL703:
 6909 000a F20F1005 		movsd	.LC58(%rip), %xmm0
 6909      00000000 
 6910 0012 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 6910      00
 6911              	.LVL704:
 6912              	.LBE2372:
 6913              	.LBE2371:
 6914              		.loc 1 316 0
 6915 0017 89DF     		movl	%ebx, %edi
 6916 0019 5B       		popq	%rbx
 6917              		.cfi_def_cfa_offset 8
 6918              	.LVL705:
 6919 001a E9000000 		jmp	_ZL11draw_arrow3j
 6919      00
 6920              	.LVL706:
 6921              		.cfi_endproc
 6922              	.LFE502:
 6924              		.section	.text.unlikely._ZL12draw_arrow03j
 6925              	.LCOLDE85:
 6926              		.section	.text._ZL12draw_arrow03j
 6927              	.LHOTE85:
 6928              		.section	.text.unlikely._ZL12draw_arrow02j,"ax",@progbits
 6929              	.LCOLDB86:
 6930              		.section	.text._ZL12draw_arrow02j,"ax",@progbits
 6931              	.LHOTB86:
 6932              		.p2align 4,,15
 6934              	_ZL12draw_arrow02j:
 6935              	.LFB501:
 6936              		.loc 1 313 0
 6937              		.cfi_startproc
 6938              	.LVL707:
 6939 0000 53       		pushq	%rbx
 6940              		.cfi_def_cfa_offset 16
 6941              		.cfi_offset 3, -16
 6942              		.loc 1 313 0
 6943 0001 89FB     		movl	%edi, %ebx
 6944              	.LBB2373:
 6945              	.LBB2374:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6946              		.loc 2 350 0
 6947 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6947      000000
 6948              	.LVL708:
 6949 000a F20F1005 		movsd	.LC58(%rip), %xmm0
 6949      00000000 
 6950 0012 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 6950      00
 6951              	.LVL709:
 6952              	.LBE2374:
 6953              	.LBE2373:
 6954              		.loc 1 313 0
 6955 0017 89DF     		movl	%ebx, %edi
 6956 0019 5B       		popq	%rbx
 6957              		.cfi_def_cfa_offset 8
 6958              	.LVL710:
 6959 001a E9000000 		jmp	_ZL11draw_arrow2j
 6959      00
 6960              	.LVL711:
 6961              		.cfi_endproc
 6962              	.LFE501:
 6964              		.section	.text.unlikely._ZL12draw_arrow02j
 6965              	.LCOLDE86:
 6966              		.section	.text._ZL12draw_arrow02j
 6967              	.LHOTE86:
 6968              		.section	.text.unlikely._ZL12draw_arrow01j,"ax",@progbits
 6969              	.LCOLDB87:
 6970              		.section	.text._ZL12draw_arrow01j,"ax",@progbits
 6971              	.LHOTB87:
 6972              		.p2align 4,,15
 6974              	_ZL12draw_arrow01j:
 6975              	.LFB500:
 6976              		.loc 1 310 0
 6977              		.cfi_startproc
 6978              	.LVL712:
 6979 0000 53       		pushq	%rbx
 6980              		.cfi_def_cfa_offset 16
 6981              		.cfi_offset 3, -16
 6982              		.loc 1 310 0
 6983 0001 89FB     		movl	%edi, %ebx
 6984              	.LBB2375:
 6985              	.LBB2376:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 6986              		.loc 2 350 0
 6987 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 6987      000000
 6988              	.LVL713:
 6989 000a F20F1005 		movsd	.LC58(%rip), %xmm0
 6989      00000000 
 6990 0012 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 6990      00
 6991              	.LVL714:
 6992              	.LBE2376:
 6993              	.LBE2375:
 6994              		.loc 1 310 0
 6995 0017 89DF     		movl	%ebx, %edi
 6996 0019 5B       		popq	%rbx
 6997              		.cfi_def_cfa_offset 8
 6998              	.LVL715:
 6999 001a E9000000 		jmp	_ZL11draw_arrow1j
 6999      00
 7000              	.LVL716:
 7001              		.cfi_endproc
 7002              	.LFE500:
 7004              		.section	.text.unlikely._ZL12draw_arrow01j
 7005              	.LCOLDE87:
 7006              		.section	.text._ZL12draw_arrow01j
 7007              	.LHOTE87:
 7008              		.section	.text.unlikely._ZL11draw_reloadj,"ax",@progbits
 7009              	.LCOLDB91:
 7010              		.section	.text._ZL11draw_reloadj,"ax",@progbits
 7011              	.LHOTB91:
 7012              		.p2align 4,,15
 7014              	_ZL11draw_reloadj:
 7015              	.LFB522:
 7016              		.loc 1 633 0
 7017              		.cfi_startproc
 7018              	.LVL717:
 7019 0000 53       		pushq	%rbx
 7020              		.cfi_def_cfa_offset 16
 7021              		.cfi_offset 3, -16
 7022              		.loc 1 633 0
 7023 0001 89FB     		movl	%edi, %ebx
 7024              	.LBB2377:
 7025              	.LBB2378:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7026              		.loc 2 350 0
 7027 0003 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7027      000000
 7028              	.LVL718:
 7029 000a F20F1005 		movsd	.LC88(%rip), %xmm0
 7029      00000000 
 7030 0012 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 7030      00
 7031              	.LVL719:
 7032              	.LBE2378:
 7033              	.LBE2377:
 7034              		.loc 1 635 0
 7035 0017 89DF     		movl	%ebx, %edi
 7036 0019 F30F1005 		movss	.LC89(%rip), %xmm0
 7036      00000000 
 7037 0021 E8000000 		call	_ZL16draw_round_arrowjf
 7037      00
 7038              	.LVL720:
 7039              		.loc 1 637 0
 7040 0026 5B       		popq	%rbx
 7041              		.cfi_def_cfa_offset 8
 7042              	.LVL721:
 7043              	.LBB2379:
 7044              	.LBB2380:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7045              		.loc 2 350 0
 7046 0027 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7046      000000
 7047 002e F20F1005 		movsd	.LC90(%rip), %xmm0
 7047      00000000 
 7048 0036 E9000000 		jmp	_ZN18Fl_Graphics_Driver6rotateEd
 7048      00
 7049              	.LVL722:
 7050              	.LBE2380:
 7051              	.LBE2379:
 7052              		.cfi_endproc
 7053              	.LFE522:
 7055              		.section	.text.unlikely._ZL11draw_reloadj
 7056              	.LCOLDE91:
 7057              		.section	.text._ZL11draw_reloadj
 7058              	.LHOTE91:
 7059              		.section	.text.unlikely._ZL12draw_refreshj,"ax",@progbits
 7060              	.LCOLDB94:
 7061              		.section	.text._ZL12draw_refreshj,"ax",@progbits
 7062              	.LHOTB94:
 7063              		.p2align 4,,15
 7065              	_ZL12draw_refreshj:
 7066              	.LFB521:
 7067              		.loc 1 626 0
 7068              		.cfi_startproc
 7069              	.LVL723:
 7070 0000 53       		pushq	%rbx
 7071              		.cfi_def_cfa_offset 16
 7072              		.cfi_offset 3, -16
 7073              		.loc 1 627 0
 7074 0001 F30F1005 		movss	.LC92(%rip), %xmm0
 7074      00000000 
 7075              		.loc 1 626 0
 7076 0009 89FB     		movl	%edi, %ebx
 7077              		.loc 1 627 0
 7078 000b E8000000 		call	_ZL16draw_round_arrowjf
 7078      00
 7079              	.LVL724:
 7080              	.LBB2381:
 7081              	.LBB2382:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7082              		.loc 2 350 0
 7083 0010 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7083      000000
 7084 0017 F20F1005 		movsd	.LC58(%rip), %xmm0
 7084      00000000 
 7085 001f E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 7085      00
 7086              	.LVL725:
 7087              	.LBE2382:
 7088              	.LBE2381:
 7089              		.loc 1 629 0
 7090 0024 89DF     		movl	%ebx, %edi
 7091 0026 F30F1005 		movss	.LC92(%rip), %xmm0
 7091      00000000 
 7092 002e E8000000 		call	_ZL16draw_round_arrowjf
 7092      00
 7093              	.LVL726:
 7094              		.loc 1 631 0
 7095 0033 5B       		popq	%rbx
 7096              		.cfi_def_cfa_offset 8
 7097              	.LVL727:
 7098              	.LBB2383:
 7099              	.LBB2384:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7100              		.loc 2 350 0
 7101 0034 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7101      000000
 7102 003b F20F1005 		movsd	.LC93(%rip), %xmm0
 7102      00000000 
 7103 0043 E9000000 		jmp	_ZN18Fl_Graphics_Driver6rotateEd
 7103      00
 7104              	.LVL728:
 7105              	.LBE2384:
 7106              	.LBE2383:
 7107              		.cfi_endproc
 7108              	.LFE521:
 7110              		.section	.text.unlikely._ZL12draw_refreshj
 7111              	.LCOLDE94:
 7112              		.section	.text._ZL12draw_refreshj
 7113              	.LHOTE94:
 7114              		.section	.text.unlikely._ZL4findPKc,"ax",@progbits
 7115              	.LCOLDB95:
 7116              		.section	.text._ZL4findPKc,"ax",@progbits
 7117              	.LHOTB95:
 7118              		.p2align 4,,15
 7120              	_ZL4findPKc:
 7121              	.LFB485:
 7122              		.loc 1 47 0
 7123              		.cfi_startproc
 7124              	.LVL729:
 7125 0000 4155     		pushq	%r13
 7126              		.cfi_def_cfa_offset 16
 7127              		.cfi_offset 13, -16
 7128 0002 4154     		pushq	%r12
 7129              		.cfi_def_cfa_offset 24
 7130              		.cfi_offset 12, -24
 7131 0004 55       		pushq	%rbp
 7132              		.cfi_def_cfa_offset 32
 7133              		.cfi_offset 6, -32
 7134 0005 53       		pushq	%rbx
 7135              		.cfi_def_cfa_offset 40
 7136              		.cfi_offset 3, -40
 7137 0006 4883EC08 		subq	$8, %rsp
 7138              		.cfi_def_cfa_offset 48
 7139              		.loc 1 54 0
 7140 000a 0FBE1F   		movsbl	(%rdi), %ebx
 7141 000d 84DB     		testb	%bl, %bl
 7142 000f 0F84AB00 		je	.L94
 7142      0000
 7143              		.loc 1 54 0 is_stmt 0 discriminator 1
 7144 0015 0FB65701 		movzbl	1(%rdi), %edx
 7145              		.loc 1 58 0 is_stmt 1 discriminator 1
 7146 0019 8D0C5B   		leal	(%rbx,%rbx,2), %ecx
 7147              		.loc 1 54 0 discriminator 1
 7148 001c 84D2     		testb	%dl, %dl
 7149 001e 0F85AC00 		jne	.L102
 7149      0000
 7150              	.L93:
 7151              	.LVL730:
 7152              		.loc 1 59 0 discriminator 8
 7153 0024 89C8     		movl	%ecx, %eax
 7154 0026 BA7D63DA 		movl	$81421181, %edx
 7154      04
 7155 002b F7EA     		imull	%edx
 7156 002d 89C8     		movl	%ecx, %eax
 7157 002f C1F81F   		sarl	$31, %eax
 7158 0032 C1FA02   		sarl	$2, %edx
 7159 0035 29C2     		subl	%eax, %edx
 7160 0037 B8010000 		movl	$1, %eax
 7160      00
 7161 003c 69EAD300 		imull	$211, %edx, %ebp
 7161      0000
 7162              	.LVL731:
 7163 0042 29E9     		subl	%ebp, %ecx
 7164              	.LVL732:
 7165 0044 89CD     		movl	%ecx, %ebp
 7166 0046 0F44E8   		cmove	%eax, %ebp
 7167              	.LVL733:
 7168              	.L87:
 7169              		.loc 1 61 0
 7170 0049 4863C3   		movslq	%ebx, %rax
 7171 004c 488D1440 		leaq	(%rax,%rax,2), %rdx
 7172 0050 803CD500 		cmpb	$0, _ZL7symbols+17(,%rdx,8)
 7172      00000000 
 7173 0058 7455     		je	.L97
 7174 005a 4989FC   		movq	%rdi, %r12
 7175              		.loc 1 63 0
 7176 005d 41BD7D63 		movl	$81421181, %r13d
 7176      DA04
 7177 0063 EB32     		jmp	.L92
 7178              	.LVL734:
 7179              		.p2align 4,,10
 7180 0065 0F1F00   		.p2align 3
 7181              	.L103:
 7182 0068 8D4C1D00 		leal	0(%rbp,%rbx), %ecx
 7183 006c 89C8     		movl	%ecx, %eax
 7184 006e 41F7ED   		imull	%r13d
 7185 0071 89C8     		movl	%ecx, %eax
 7186 0073 C1F81F   		sarl	$31, %eax
 7187 0076 C1FA02   		sarl	$2, %edx
 7188 0079 29C2     		subl	%eax, %edx
 7189 007b 69DAD300 		imull	$211, %edx, %ebx
 7189      0000
 7190              	.LVL735:
 7191 0081 29D9     		subl	%ebx, %ecx
 7192 0083 4863C1   		movslq	%ecx, %rax
 7193              		.loc 1 61 0
 7194 0086 488D1440 		leaq	(%rax,%rax,2), %rdx
 7195              		.loc 1 63 0
 7196 008a 4889C3   		movq	%rax, %rbx
 7197              	.LVL736:
 7198              		.loc 1 61 0
 7199 008d 803CD500 		cmpb	$0, _ZL7symbols+17(,%rdx,8)
 7199      00000000 
 7200 0095 7418     		je	.L97
 7201              	.LVL737:
 7202              	.L92:
 7203              		.loc 1 62 0
 7204 0097 488D0440 		leaq	(%rax,%rax,2), %rax
 7205 009b 4C89E6   		movq	%r12, %rsi
 7206 009e 488B3CC5 		movq	_ZL7symbols(,%rax,8), %rdi
 7206      00000000 
 7207 00a6 E8000000 		call	strcmp
 7207      00
 7208              	.LVL738:
 7209 00ab 85C0     		testl	%eax, %eax
 7210 00ad 75B9     		jne	.L103
 7211              	.LVL739:
 7212              	.L97:
 7213              		.loc 1 65 0
 7214 00af 4883C408 		addq	$8, %rsp
 7215              		.cfi_remember_state
 7216              		.cfi_def_cfa_offset 40
 7217 00b3 89D8     		movl	%ebx, %eax
 7218 00b5 5B       		popq	%rbx
 7219              		.cfi_def_cfa_offset 32
 7220 00b6 5D       		popq	%rbp
 7221              		.cfi_def_cfa_offset 24
 7222              	.LVL740:
 7223 00b7 415C     		popq	%r12
 7224              		.cfi_def_cfa_offset 16
 7225 00b9 415D     		popq	%r13
 7226              		.cfi_def_cfa_offset 8
 7227 00bb C3       		ret
 7228              	.LVL741:
 7229 00bc 0F1F4000 		.p2align 4,,10
 7230              		.p2align 3
 7231              	.L94:
 7232              		.cfi_restore_state
 7233              		.loc 1 55 0
 7234 00c0 31DB     		xorl	%ebx, %ebx
 7235              		.loc 1 59 0
 7236 00c2 BD010000 		movl	$1, %ebp
 7236      00
 7237 00c7 EB80     		jmp	.L87
 7238 00c9 0F1F8000 		.p2align 4,,10
 7238      000000
 7239              		.p2align 3
 7240              	.L102:
 7241              		.loc 1 54 0 discriminator 3
 7242 00d0 0FBE4702 		movsbl	2(%rdi), %eax
 7243              		.loc 1 51 0 discriminator 3
 7244 00d4 0FBECB   		movsbl	%bl, %ecx
 7245 00d7 440FBEC2 		movsbl	%dl, %r8d
 7246              		.loc 1 54 0 discriminator 3
 7247 00db 84C0     		testb	%al, %al
 7248 00dd 7541     		jne	.L104
 7249              		.loc 1 54 0 is_stmt 0 discriminator 6
 7250 00df 89CE     		movl	%ecx, %esi
 7251 00e1 C1E605   		sall	$5, %esi
 7252 00e4 29CE     		subl	%ecx, %esi
 7253 00e6 4401C6   		addl	%r8d, %esi
 7254              	.L90:
 7255              	.LVL742:
 7256              		.loc 1 55 0 is_stmt 1
 7257 00e9 89F0     		movl	%esi, %eax
 7258 00eb BA7D63DA 		movl	$81421181, %edx
 7258      04
 7259 00f0 F7EA     		imull	%edx
 7260 00f2 89F0     		movl	%esi, %eax
 7261 00f4 C1F81F   		sarl	$31, %eax
 7262 00f7 C1FA02   		sarl	$2, %edx
 7263 00fa 89D3     		movl	%edx, %ebx
 7264 00fc 29C3     		subl	%eax, %ebx
 7265              		.loc 1 58 0
 7266 00fe 438D0440 		leal	(%r8,%r8,2), %eax
 7267              		.loc 1 55 0
 7268 0102 69DBD300 		imull	$211, %ebx, %ebx
 7268      0000
 7269              		.loc 1 58 0
 7270 0108 6BC933   		imull	$51, %ecx, %ecx
 7271              		.loc 1 55 0
 7272 010b 29DE     		subl	%ebx, %esi
 7273              	.LVL743:
 7274 010d 89F3     		movl	%esi, %ebx
 7275              	.LVL744:
 7276              		.loc 1 58 0
 7277 010f 01C1     		addl	%eax, %ecx
 7278 0111 E90EFFFF 		jmp	.L93
 7278      FF
 7279              	.LVL745:
 7280 0116 662E0F1F 		.p2align 4,,10
 7280      84000000 
 7280      0000
 7281              		.p2align 3
 7282              	.L104:
 7283              		.loc 1 54 0 discriminator 5
 7284 0120 6BD147   		imull	$71, %ecx, %edx
 7285 0123 4489C6   		movl	%r8d, %esi
 7286 0126 C1E605   		sall	$5, %esi
 7287 0129 4429C6   		subl	%r8d, %esi
 7288 012c 01D6     		addl	%edx, %esi
 7289 012e 01C6     		addl	%eax, %esi
 7290 0130 EBB7     		jmp	.L90
 7291              		.cfi_endproc
 7292              	.LFE485:
 7294              		.section	.text.unlikely._ZL4findPKc
 7295              	.LCOLDE95:
 7296              		.section	.text._ZL4findPKc
 7297              	.LHOTE95:
 7298              		.section	.text.unlikely._Z13fl_add_symbolPKcPFvjEi,"ax",@progbits
 7299              	.LCOLDB96:
 7300              		.section	.text._Z13fl_add_symbolPKcPFvjEi,"ax",@progbits
 7301              	.LHOTB96:
 7302              		.p2align 4,,15
 7303              		.globl	_Z13fl_add_symbolPKcPFvjEi
 7305              	_Z13fl_add_symbolPKcPFvjEi:
 7306              	.LFB486:
 7307              		.loc 1 79 0
 7308              		.cfi_startproc
 7309              	.LVL746:
 7310 0000 4155     		pushq	%r13
 7311              		.cfi_def_cfa_offset 16
 7312              		.cfi_offset 13, -16
 7313 0002 4154     		pushq	%r12
 7314              		.cfi_def_cfa_offset 24
 7315              		.cfi_offset 12, -24
 7316 0004 4989FD   		movq	%rdi, %r13
 7317 0007 55       		pushq	%rbp
 7318              		.cfi_def_cfa_offset 32
 7319              		.cfi_offset 6, -32
 7320 0008 53       		pushq	%rbx
 7321              		.cfi_def_cfa_offset 40
 7322              		.cfi_offset 3, -40
 7323 0009 4989F4   		movq	%rsi, %r12
 7324 000c 89D5     		movl	%edx, %ebp
 7325 000e 4883EC08 		subq	$8, %rsp
 7326              		.cfi_def_cfa_offset 48
 7327              	.LBB2387:
 7328              	.LBB2388:
 7329              		.loc 1 655 0
 7330 0012 803D0000 		cmpb	$0, _ZZL15fl_init_symbolsvE8beenhere(%rip)
 7330      000000
 7331 0019 7505     		jne	.L106
 7332 001b E8000000 		call	_ZL15fl_init_symbolsv.part.0
 7332      00
 7333              	.LVL747:
 7334              	.L106:
 7335              	.LBE2388:
 7336              	.LBE2387:
 7337              		.loc 1 82 0
 7338 0020 8B1D0000 		movl	_ZL8symbnumb(%rip), %ebx
 7338      0000
 7339 0026 31C0     		xorl	%eax, %eax
 7340 0028 83FB69   		cmpl	$105, %ebx
 7341 002b 7F3C     		jg	.L107
 7342              		.loc 1 83 0
 7343 002d 4C89EF   		movq	%r13, %rdi
 7344              		.loc 1 88 0
 7345 0030 83C301   		addl	$1, %ebx
 7346              		.loc 1 83 0
 7347 0033 E8000000 		call	_ZL4findPKc
 7347      00
 7348              	.LVL748:
 7349              		.loc 1 84 0
 7350 0038 4898     		cltq
 7351              		.loc 1 88 0
 7352 003a 891D0000 		movl	%ebx, _ZL8symbnumb(%rip)
 7352      0000
 7353              		.loc 1 84 0
 7354 0040 488D0440 		leaq	(%rax,%rax,2), %rax
 7355              	.LVL749:
 7356 0044 48C1E003 		salq	$3, %rax
 7357 0048 4C89A800 		movq	%r13, _ZL7symbols(%rax)
 7357      000000
 7358              		.loc 1 85 0
 7359 004f 4C89A000 		movq	%r12, _ZL7symbols+8(%rax)
 7359      000000
 7360              		.loc 1 86 0
 7361 0056 C6800000 		movb	$1, _ZL7symbols+17(%rax)
 7361      000001
 7362              		.loc 1 87 0
 7363 005d 4088A800 		movb	%bpl, _ZL7symbols+16(%rax)
 7363      000000
 7364              		.loc 1 89 0
 7365 0064 B8010000 		movl	$1, %eax
 7365      00
 7366              	.L107:
 7367              		.loc 1 90 0
 7368 0069 4883C408 		addq	$8, %rsp
 7369              		.cfi_def_cfa_offset 40
 7370 006d 5B       		popq	%rbx
 7371              		.cfi_def_cfa_offset 32
 7372 006e 5D       		popq	%rbp
 7373              		.cfi_def_cfa_offset 24
 7374              	.LVL750:
 7375 006f 415C     		popq	%r12
 7376              		.cfi_def_cfa_offset 16
 7377              	.LVL751:
 7378 0071 415D     		popq	%r13
 7379              		.cfi_def_cfa_offset 8
 7380              	.LVL752:
 7381 0073 C3       		ret
 7382              		.cfi_endproc
 7383              	.LFE486:
 7385              		.section	.text.unlikely._Z13fl_add_symbolPKcPFvjEi
 7386              	.LCOLDE96:
 7387              		.section	.text._Z13fl_add_symbolPKcPFvjEi
 7388              	.LHOTE96:
 7389              		.section	.rodata.str1.1,"aMS",@progbits,1
 7390              	.LC97:
 7391 0000 00       		.string	""
 7392              	.LC98:
 7393 0001 2D3E00   		.string	"->"
 7394              	.LC99:
 7395 0004 3E00     		.string	">"
 7396              	.LC100:
 7397 0006 3E3E00   		.string	">>"
 7398              	.LC101:
 7399 0009 3E7C00   		.string	">|"
 7400              	.LC102:
 7401 000c 3E5B5D00 		.string	">[]"
 7402              	.LC103:
 7403 0010 7C3E00   		.string	"|>"
 7404              	.LC104:
 7405 0013 3C2D00   		.string	"<-"
 7406              	.LC105:
 7407 0016 3C00     		.string	"<"
 7408              	.LC106:
 7409 0018 3C3C00   		.string	"<<"
 7410              	.LC107:
 7411 001b 7C3C00   		.string	"|<"
 7412              	.LC108:
 7413 001e 5B5D3C00 		.string	"[]<"
 7414              	.LC109:
 7415 0022 3C7C00   		.string	"<|"
 7416              	.LC110:
 7417 0025 3C2D3E00 		.string	"<->"
 7418              	.LC111:
 7419 0029 2D2D3E00 		.string	"-->"
 7420              	.LC112:
 7421 002d 2B00     		.string	"+"
 7422              	.LC113:
 7423 002f 2D3E7C00 		.string	"->|"
 7424              	.LC114:
 7425 0033 6172726F 		.string	"arrow"
 7425      7700
 7426              	.LC115:
 7427 0039 72657475 		.string	"returnarrow"
 7427      726E6172 
 7427      726F7700 
 7428              	.LC116:
 7429 0045 73717561 		.string	"square"
 7429      726500
 7430              	.LC117:
 7431 004c 63697263 		.string	"circle"
 7431      6C6500
 7432              	.LC118:
 7433 0053 6C696E65 		.string	"line"
 7433      00
 7434              	.LC119:
 7435 0058 706C7573 		.string	"plus"
 7435      00
 7436              	.LC120:
 7437 005d 6D656E75 		.string	"menu"
 7437      00
 7438              	.LC121:
 7439 0062 55704172 		.string	"UpArrow"
 7439      726F7700 
 7440              	.LC122:
 7441 006a 446E4172 		.string	"DnArrow"
 7441      726F7700 
 7442              	.LC123:
 7443 0072 7C7C00   		.string	"||"
 7444              	.LC124:
 7445 0075 73656172 		.string	"search"
 7445      636800
 7446              	.LC125:
 7447 007c 464C544B 		.string	"FLTK"
 7447      00
 7448              	.LC126:
 7449 0081 66696C65 		.string	"filenew"
 7449      6E657700 
 7450              	.LC127:
 7451 0089 66696C65 		.string	"fileopen"
 7451      6F70656E 
 7451      00
 7452              	.LC128:
 7453 0092 66696C65 		.string	"filesave"
 7453      73617665 
 7453      00
 7454              	.LC129:
 7455 009b 66696C65 		.string	"filesaveas"
 7455      73617665 
 7455      617300
 7456              	.LC130:
 7457 00a6 66696C65 		.string	"fileprint"
 7457      7072696E 
 7457      7400
 7458              	.LC131:
 7459 00b0 72656672 		.string	"refresh"
 7459      65736800 
 7460              	.LC132:
 7461 00b8 72656C6F 		.string	"reload"
 7461      616400
 7462              	.LC133:
 7463 00bf 756E646F 		.string	"undo"
 7463      00
 7464              	.LC134:
 7465 00c4 7265646F 		.string	"redo"
 7465      00
 7466              		.section	.text.unlikely._ZL15fl_init_symbolsv.part.0,"ax",@progbits
 7467              	.LCOLDB135:
 7468              		.section	.text._ZL15fl_init_symbolsv.part.0,"ax",@progbits
 7469              	.LHOTB135:
 7470              		.p2align 4,,15
 7472              	_ZL15fl_init_symbolsv.part.0:
 7473              	.LFB526:
 7474              		.loc 1 653 0
 7475              		.cfi_startproc
 7476 0000 4883EC08 		subq	$8, %rsp
 7477              		.cfi_def_cfa_offset 16
 7478              		.loc 1 659 0
 7479 0004 BA010000 		movl	$1, %edx
 7479      00
 7480 0009 BE000000 		movl	$_ZL11draw_arrow1j, %esi
 7480      00
 7481 000e BF000000 		movl	$.LC97, %edi
 7481      00
 7482              		.loc 1 656 0
 7483 0013 C6050000 		movb	$1, _ZZL15fl_init_symbolsvE8beenhere(%rip)
 7483      000001
 7484              		.loc 1 657 0
 7485 001a C7050000 		movl	$0, _ZL8symbnumb(%rip)
 7485      00000000 
 7485      0000
 7486              		.loc 1 659 0
 7487 0024 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7487      00
 7488              	.LVL753:
 7489              		.loc 1 660 0
 7490 0029 BA010000 		movl	$1, %edx
 7490      00
 7491 002e BE000000 		movl	$_ZL11draw_arrow1j, %esi
 7491      00
 7492 0033 BF000000 		movl	$.LC98, %edi
 7492      00
 7493 0038 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7493      00
 7494              	.LVL754:
 7495              		.loc 1 661 0
 7496 003d BA010000 		movl	$1, %edx
 7496      00
 7497 0042 BE000000 		movl	$_ZL11draw_arrow2j, %esi
 7497      00
 7498 0047 BF000000 		movl	$.LC99, %edi
 7498      00
 7499 004c E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7499      00
 7500              	.LVL755:
 7501              		.loc 1 662 0
 7502 0051 BA010000 		movl	$1, %edx
 7502      00
 7503 0056 BE000000 		movl	$_ZL11draw_arrow3j, %esi
 7503      00
 7504 005b BF000000 		movl	$.LC100, %edi
 7504      00
 7505 0060 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7505      00
 7506              	.LVL756:
 7507              		.loc 1 663 0
 7508 0065 BA010000 		movl	$1, %edx
 7508      00
 7509 006a BE000000 		movl	$_ZL13draw_arrowbarj, %esi
 7509      00
 7510 006f BF000000 		movl	$.LC101, %edi
 7510      00
 7511 0074 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7511      00
 7512              	.LVL757:
 7513              		.loc 1 664 0
 7514 0079 BA010000 		movl	$1, %edx
 7514      00
 7515 007e BE000000 		movl	$_ZL13draw_arrowboxj, %esi
 7515      00
 7516 0083 BF000000 		movl	$.LC102, %edi
 7516      00
 7517 0088 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7517      00
 7518              	.LVL758:
 7519              		.loc 1 665 0
 7520 008d BA010000 		movl	$1, %edx
 7520      00
 7521 0092 BE000000 		movl	$_ZL13draw_bararrowj, %esi
 7521      00
 7522 0097 BF000000 		movl	$.LC103, %edi
 7522      00
 7523 009c E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7523      00
 7524              	.LVL759:
 7525              		.loc 1 666 0
 7526 00a1 BA010000 		movl	$1, %edx
 7526      00
 7527 00a6 BE000000 		movl	$_ZL12draw_arrow01j, %esi
 7527      00
 7528 00ab BF000000 		movl	$.LC104, %edi
 7528      00
 7529 00b0 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7529      00
 7530              	.LVL760:
 7531              		.loc 1 667 0
 7532 00b5 BA010000 		movl	$1, %edx
 7532      00
 7533 00ba BE000000 		movl	$_ZL12draw_arrow02j, %esi
 7533      00
 7534 00bf BF000000 		movl	$.LC105, %edi
 7534      00
 7535 00c4 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7535      00
 7536              	.LVL761:
 7537              		.loc 1 668 0
 7538 00c9 BA010000 		movl	$1, %edx
 7538      00
 7539 00ce BE000000 		movl	$_ZL12draw_arrow03j, %esi
 7539      00
 7540 00d3 BF000000 		movl	$.LC106, %edi
 7540      00
 7541 00d8 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7541      00
 7542              	.LVL762:
 7543              		.loc 1 669 0
 7544 00dd BA010000 		movl	$1, %edx
 7544      00
 7545 00e2 BE000000 		movl	$_ZL14draw_0arrowbarj, %esi
 7545      00
 7546 00e7 BF000000 		movl	$.LC107, %edi
 7546      00
 7547 00ec E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7547      00
 7548              	.LVL763:
 7549              		.loc 1 670 0
 7550 00f1 BA010000 		movl	$1, %edx
 7550      00
 7551 00f6 BE000000 		movl	$_ZL14draw_0arrowboxj, %esi
 7551      00
 7552 00fb BF000000 		movl	$.LC108, %edi
 7552      00
 7553 0100 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7553      00
 7554              	.LVL764:
 7555              		.loc 1 671 0
 7556 0105 BA010000 		movl	$1, %edx
 7556      00
 7557 010a BE000000 		movl	$_ZL14draw_0bararrowj, %esi
 7557      00
 7558 010f BF000000 		movl	$.LC109, %edi
 7558      00
 7559 0114 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7559      00
 7560              	.LVL765:
 7561              		.loc 1 672 0
 7562 0119 BA010000 		movl	$1, %edx
 7562      00
 7563 011e BE000000 		movl	$_ZL16draw_doublearrowj, %esi
 7563      00
 7564 0123 BF000000 		movl	$.LC110, %edi
 7564      00
 7565 0128 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7565      00
 7566              	.LVL766:
 7567              		.loc 1 673 0
 7568 012d BA010000 		movl	$1, %edx
 7568      00
 7569 0132 BE000000 		movl	$_ZL10draw_arrowj, %esi
 7569      00
 7570 0137 BF000000 		movl	$.LC111, %edi
 7570      00
 7571 013c E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7571      00
 7572              	.LVL767:
 7573              		.loc 1 674 0
 7574 0141 BA010000 		movl	$1, %edx
 7574      00
 7575 0146 BE000000 		movl	$_ZL9draw_plusj, %esi
 7575      00
 7576 014b BF000000 		movl	$.LC112, %edi
 7576      00
 7577 0150 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7577      00
 7578              	.LVL768:
 7579              		.loc 1 675 0
 7580 0155 BA010000 		movl	$1, %edx
 7580      00
 7581 015a BE000000 		movl	$_ZL14draw_arrow1barj, %esi
 7581      00
 7582 015f BF000000 		movl	$.LC113, %edi
 7582      00
 7583 0164 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7583      00
 7584              	.LVL769:
 7585              		.loc 1 676 0
 7586 0169 BA010000 		movl	$1, %edx
 7586      00
 7587 016e BE000000 		movl	$_ZL10draw_arrowj, %esi
 7587      00
 7588 0173 BF000000 		movl	$.LC114, %edi
 7588      00
 7589 0178 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7589      00
 7590              	.LVL770:
 7591              		.loc 1 677 0
 7592 017d 31F6     		xorl	%esi, %esi
 7593 017f BA030000 		movl	$3, %edx
 7593      00
 7594 0184 BF000000 		movl	$.LC115, %edi
 7594      00
 7595 0189 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7595      00
 7596              	.LVL771:
 7597              		.loc 1 678 0
 7598 018e BA010000 		movl	$1, %edx
 7598      00
 7599 0193 BE000000 		movl	$_ZL11draw_squarej, %esi
 7599      00
 7600 0198 BF000000 		movl	$.LC116, %edi
 7600      00
 7601 019d E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7601      00
 7602              	.LVL772:
 7603              		.loc 1 679 0
 7604 01a2 BA010000 		movl	$1, %edx
 7604      00
 7605 01a7 BE000000 		movl	$_ZL11draw_circlej, %esi
 7605      00
 7606 01ac BF000000 		movl	$.LC117, %edi
 7606      00
 7607 01b1 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7607      00
 7608              	.LVL773:
 7609              		.loc 1 680 0
 7610 01b6 BA010000 		movl	$1, %edx
 7610      00
 7611 01bb BE000000 		movl	$_ZL9draw_linej, %esi
 7611      00
 7612 01c0 BF000000 		movl	$.LC118, %edi
 7612      00
 7613 01c5 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7613      00
 7614              	.LVL774:
 7615              		.loc 1 681 0
 7616 01ca BA010000 		movl	$1, %edx
 7616      00
 7617 01cf BE000000 		movl	$_ZL9draw_plusj, %esi
 7617      00
 7618 01d4 BF000000 		movl	$.LC119, %edi
 7618      00
 7619 01d9 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7619      00
 7620              	.LVL775:
 7621              		.loc 1 682 0
 7622 01de BA010000 		movl	$1, %edx
 7622      00
 7623 01e3 BE000000 		movl	$_ZL9draw_menuj, %esi
 7623      00
 7624 01e8 BF000000 		movl	$.LC120, %edi
 7624      00
 7625 01ed E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7625      00
 7626              	.LVL776:
 7627              		.loc 1 683 0
 7628 01f2 BA010000 		movl	$1, %edx
 7628      00
 7629 01f7 BE000000 		movl	$_ZL12draw_uparrowj, %esi
 7629      00
 7630 01fc BF000000 		movl	$.LC121, %edi
 7630      00
 7631 0201 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7631      00
 7632              	.LVL777:
 7633              		.loc 1 684 0
 7634 0206 BA010000 		movl	$1, %edx
 7634      00
 7635 020b BE000000 		movl	$_ZL14draw_downarrowj, %esi
 7635      00
 7636 0210 BF000000 		movl	$.LC122, %edi
 7636      00
 7637 0215 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7637      00
 7638              	.LVL778:
 7639              		.loc 1 685 0
 7640 021a BA010000 		movl	$1, %edx
 7640      00
 7641 021f BE000000 		movl	$_ZL14draw_doublebarj, %esi
 7641      00
 7642 0224 BF000000 		movl	$.LC123, %edi
 7642      00
 7643 0229 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7643      00
 7644              	.LVL779:
 7645              		.loc 1 686 0
 7646 022e BA010000 		movl	$1, %edx
 7646      00
 7647 0233 BE000000 		movl	$_ZL11draw_searchj, %esi
 7647      00
 7648 0238 BF000000 		movl	$.LC124, %edi
 7648      00
 7649 023d E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7649      00
 7650              	.LVL780:
 7651              		.loc 1 687 0
 7652 0242 BA010000 		movl	$1, %edx
 7652      00
 7653 0247 BE000000 		movl	$_ZL9draw_fltkj, %esi
 7653      00
 7654 024c BF000000 		movl	$.LC125, %edi
 7654      00
 7655 0251 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7655      00
 7656              	.LVL781:
 7657              		.loc 1 689 0
 7658 0256 BA010000 		movl	$1, %edx
 7658      00
 7659 025b BE000000 		movl	$_ZL12draw_filenewj, %esi
 7659      00
 7660 0260 BF000000 		movl	$.LC126, %edi
 7660      00
 7661 0265 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7661      00
 7662              	.LVL782:
 7663              		.loc 1 690 0
 7664 026a BA010000 		movl	$1, %edx
 7664      00
 7665 026f BE000000 		movl	$_ZL13draw_fileopenj, %esi
 7665      00
 7666 0274 BF000000 		movl	$.LC127, %edi
 7666      00
 7667 0279 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7667      00
 7668              	.LVL783:
 7669              		.loc 1 691 0
 7670 027e BA010000 		movl	$1, %edx
 7670      00
 7671 0283 BE000000 		movl	$_ZL13draw_filesavej, %esi
 7671      00
 7672 0288 BF000000 		movl	$.LC128, %edi
 7672      00
 7673 028d E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7673      00
 7674              	.LVL784:
 7675              		.loc 1 692 0
 7676 0292 BA010000 		movl	$1, %edx
 7676      00
 7677 0297 BE000000 		movl	$_ZL15draw_filesaveasj, %esi
 7677      00
 7678 029c BF000000 		movl	$.LC129, %edi
 7678      00
 7679 02a1 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7679      00
 7680              	.LVL785:
 7681              		.loc 1 693 0
 7682 02a6 BA010000 		movl	$1, %edx
 7682      00
 7683 02ab BE000000 		movl	$_ZL14draw_fileprintj, %esi
 7683      00
 7684 02b0 BF000000 		movl	$.LC130, %edi
 7684      00
 7685 02b5 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7685      00
 7686              	.LVL786:
 7687              		.loc 1 695 0
 7688 02ba BA010000 		movl	$1, %edx
 7688      00
 7689 02bf BE000000 		movl	$_ZL12draw_refreshj, %esi
 7689      00
 7690 02c4 BF000000 		movl	$.LC131, %edi
 7690      00
 7691 02c9 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7691      00
 7692              	.LVL787:
 7693              		.loc 1 696 0
 7694 02ce BA010000 		movl	$1, %edx
 7694      00
 7695 02d3 BE000000 		movl	$_ZL11draw_reloadj, %esi
 7695      00
 7696 02d8 BF000000 		movl	$.LC132, %edi
 7696      00
 7697 02dd E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7697      00
 7698              	.LVL788:
 7699              		.loc 1 697 0
 7700 02e2 BA010000 		movl	$1, %edx
 7700      00
 7701 02e7 BE000000 		movl	$_ZL9draw_undoj, %esi
 7701      00
 7702 02ec BF000000 		movl	$.LC133, %edi
 7702      00
 7703 02f1 E8000000 		call	_Z13fl_add_symbolPKcPFvjEi
 7703      00
 7704              	.LVL789:
 7705              		.loc 1 698 0
 7706 02f6 BA010000 		movl	$1, %edx
 7706      00
 7707 02fb BE000000 		movl	$_ZL9draw_redoj, %esi
 7707      00
 7708 0300 BF000000 		movl	$.LC134, %edi
 7708      00
 7709              		.loc 1 701 0
 7710 0305 4883C408 		addq	$8, %rsp
 7711              		.cfi_def_cfa_offset 8
 7712              		.loc 1 698 0
 7713 0309 E9000000 		jmp	_Z13fl_add_symbolPKcPFvjEi
 7713      00
 7714              	.LVL790:
 7715              		.cfi_endproc
 7716              	.LFE526:
 7718              		.section	.text.unlikely._ZL15fl_init_symbolsv.part.0
 7719              	.LCOLDE135:
 7720              		.section	.text._ZL15fl_init_symbolsv.part.0
 7721              	.LHOTE135:
 7722              		.section	.text.unlikely._Z14fl_draw_symbolPKciiiij,"ax",@progbits
 7723              	.LCOLDB137:
 7724              		.section	.text._Z14fl_draw_symbolPKciiiij,"ax",@progbits
 7725              	.LHOTB137:
 7726              		.p2align 4,,15
 7727              		.globl	_Z14fl_draw_symbolPKciiiij
 7729              	_Z14fl_draw_symbolPKciiiij:
 7730              	.LFB487:
 7731              		.loc 1 103 0
 7732              		.cfi_startproc
 7733              	.LVL791:
 7734              		.loc 1 105 0
 7735 0000 803F40   		cmpb	$64, (%rdi)
 7736 0003 740B     		je	.L161
 7737 0005 31C0     		xorl	%eax, %eax
 7738              		.loc 1 165 0
 7739 0007 C3       		ret
 7740 0008 0F1F8400 		.p2align 4,,10
 7740      00000000 
 7741              		.p2align 3
 7742              	.L161:
 7743              		.loc 1 103 0
 7744 0010 4157     		pushq	%r15
 7745              		.cfi_def_cfa_offset 16
 7746              		.cfi_offset 15, -16
 7747 0012 4156     		pushq	%r14
 7748              		.cfi_def_cfa_offset 24
 7749              		.cfi_offset 14, -24
 7750 0014 4189D6   		movl	%edx, %r14d
 7751 0017 4155     		pushq	%r13
 7752              		.cfi_def_cfa_offset 32
 7753              		.cfi_offset 13, -32
 7754 0019 4154     		pushq	%r12
 7755              		.cfi_def_cfa_offset 40
 7756              		.cfi_offset 12, -40
 7757 001b 4189F5   		movl	%esi, %r13d
 7758 001e 55       		pushq	%rbp
 7759              		.cfi_def_cfa_offset 48
 7760              		.cfi_offset 6, -48
 7761 001f 53       		pushq	%rbx
 7762              		.cfi_def_cfa_offset 56
 7763              		.cfi_offset 3, -56
 7764 0020 4589CC   		movl	%r9d, %r12d
 7765 0023 4883EC28 		subq	$40, %rsp
 7766              		.cfi_def_cfa_offset 96
 7767              	.LBB2389:
 7768              	.LBB2390:
 7769              		.loc 1 655 0
 7770 0027 803D0000 		cmpb	$0, _ZZL15fl_init_symbolsvE8beenhere(%rip)
 7770      000000
 7771 002e 0F844C02 		je	.L162
 7771      0000
 7772              	.LVL792:
 7773              	.LBE2390:
 7774              	.LBE2389:
 7775              		.loc 1 108 0
 7776 0034 0FB64701 		movzbl	1(%rdi), %eax
 7777 0038 3C23     		cmpb	$35, %al
 7778 003a 0F846B02 		je	.L116
 7778      0000
 7779              	.LVL793:
 7780              	.L172:
 7781              	.LBB2392:
 7782              		.loc 1 109 0
 7783 0040 3C2D     		cmpb	$45, %al
 7784              	.LBE2392:
 7785              		.loc 1 105 0
 7786 0042 488D5701 		leaq	1(%rdi), %rdx
 7787              		.loc 1 107 0
 7788 0046 C7442410 		movl	$0, 16(%rsp)
 7788      00000000 
 7789              	.LVL794:
 7790              	.LBB2397:
 7791              		.loc 1 109 0
 7792 004e 0F846F02 		je	.L163
 7792      0000
 7793              	.L118:
 7794              	.LBB2393:
 7795              		.loc 1 113 0
 7796 0054 3C2B     		cmpb	$43, %al
 7797 0056 0F84AC00 		je	.L164
 7797      0000
 7798              	.LVL795:
 7799              	.L119:
 7800              	.LBE2393:
 7801              	.LBE2397:
 7802              		.loc 1 118 0
 7803 005c 83F909   		cmpl	$9, %ecx
 7804 005f 7E3F     		jle	.L120
 7805 0061 8D59FF   		leal	-1(%rcx), %ebx
 7806 0064 83CB01   		orl	$1, %ebx
 7807              	.LVL796:
 7808              		.loc 1 119 0
 7809 0067 4183F809 		cmpl	$9, %r8d
 7810 006b 7E51     		jle	.L122
 7811              	.L167:
 7812 006d 418D68FF 		leal	-1(%r8), %ebp
 7813              		.loc 1 121 0
 7814 0071 C6042400 		movb	$0, (%rsp)
 7815              		.loc 1 119 0
 7816 0075 83CD01   		orl	$1, %ebp
 7817              	.LVL797:
 7818              		.loc 1 122 0
 7819 0078 3C24     		cmpb	$36, %al
 7820 007a 7463     		je	.L165
 7821              	.L124:
 7822              	.LVL798:
 7823              		.loc 1 126 0
 7824 007c 3C25     		cmpb	$37, %al
 7825              		.loc 1 121 0
 7826 007e C644240C 		movb	$0, 12(%rsp)
 7826      00
 7827              		.loc 1 126 0
 7828 0083 746F     		je	.L166
 7829              	.LVL799:
 7830              	.L125:
 7831              		.loc 1 131 0
 7832 0085 83E830   		subl	$48, %eax
 7833 0088 488D7A01 		leaq	1(%rdx), %rdi
 7834              	.LVL800:
 7835 008c 3C09     		cmpb	$9, %al
 7836 008e 0F87AC00 		ja	.L126
 7836      0000
 7837 0094 0FB6C0   		movzbl	%al, %eax
 7838 0097 FF24C500 		jmp	*.L128(,%rax,8)
 7838      000000
 7839              		.section	.rodata._Z14fl_draw_symbolPKciiiij,"a",@progbits
 7840              		.align 8
 7841              		.align 4
 7842              	.L128:
 7843 0000 00000000 		.quad	.L127
 7843      00000000 
 7844 0008 00000000 		.quad	.L129
 7844      00000000 
 7845 0010 00000000 		.quad	.L146
 7845      00000000 
 7846 0018 00000000 		.quad	.L131
 7846      00000000 
 7847 0020 00000000 		.quad	.L132
 7847      00000000 
 7848 0028 00000000 		.quad	.L158
 7848      00000000 
 7849 0030 00000000 		.quad	.L158
 7849      00000000 
 7850 0038 00000000 		.quad	.L134
 7850      00000000 
 7851 0040 00000000 		.quad	.L135
 7851      00000000 
 7852 0048 00000000 		.quad	.L136
 7852      00000000 
 7853              		.section	.text._Z14fl_draw_symbolPKciiiij
 7854              	.LVL801:
 7855 009e 6690     		.p2align 4,,10
 7856              		.p2align 3
 7857              	.L120:
 7858              		.loc 1 118 0 discriminator 1
 7859 00a0 BF0A0000 		movl	$10, %edi
 7859      00
 7860 00a5 BB090000 		movl	$9, %ebx
 7860      00
 7861 00aa 29CF     		subl	%ecx, %edi
 7862 00ac 89F9     		movl	%edi, %ecx
 7863              	.LVL802:
 7864 00ae C1EF1F   		shrl	$31, %edi
 7865 00b1 01F9     		addl	%edi, %ecx
 7866 00b3 D1F9     		sarl	%ecx
 7867 00b5 4129CD   		subl	%ecx, %r13d
 7868              	.LVL803:
 7869              		.loc 1 119 0 discriminator 1
 7870 00b8 4183F809 		cmpl	$9, %r8d
 7871 00bc 7FAF     		jg	.L167
 7872              	.L122:
 7873 00be B90A0000 		movl	$10, %ecx
 7873      00
 7874 00c3 BD090000 		movl	$9, %ebp
 7874      00
 7875              		.loc 1 121 0 discriminator 1
 7876 00c8 C6042400 		movb	$0, (%rsp)
 7877              		.loc 1 119 0 discriminator 1
 7878 00cc 4429C1   		subl	%r8d, %ecx
 7879 00cf 89CF     		movl	%ecx, %edi
 7880 00d1 C1EF1F   		shrl	$31, %edi
 7881 00d4 01F9     		addl	%edi, %ecx
 7882 00d6 D1F9     		sarl	%ecx
 7883 00d8 4129CE   		subl	%ecx, %r14d
 7884              	.LVL804:
 7885              		.loc 1 122 0 discriminator 1
 7886 00db 3C24     		cmpb	$36, %al
 7887 00dd 759D     		jne	.L124
 7888              	.L165:
 7889              	.LVL805:
 7890 00df 0FB64201 		movzbl	1(%rdx), %eax
 7891              		.loc 1 124 0
 7892 00e3 4883C201 		addq	$1, %rdx
 7893              	.LVL806:
 7894              		.loc 1 123 0
 7895 00e7 C6042401 		movb	$1, (%rsp)
 7896              	.LVL807:
 7897              		.loc 1 121 0
 7898 00eb C644240C 		movb	$0, 12(%rsp)
 7898      00
 7899              		.loc 1 126 0
 7900 00f0 3C25     		cmpb	$37, %al
 7901 00f2 7591     		jne	.L125
 7902              	.L166:
 7903              	.LVL808:
 7904 00f4 0FB64201 		movzbl	1(%rdx), %eax
 7905              		.loc 1 127 0
 7906 00f8 C644240C 		movb	$1, 12(%rsp)
 7906      01
 7907              		.loc 1 128 0
 7908 00fd 4883C201 		addq	$1, %rdx
 7909              	.LVL809:
 7910 0101 EB82     		jmp	.L125
 7911              	.LVL810:
 7912              		.p2align 4,,10
 7913 0103 0F1F4400 		.p2align 3
 7913      00
 7914              	.L164:
 7915              	.LBB2398:
 7916              	.LBB2395:
 7917              		.loc 1 113 0 discriminator 1
 7918 0108 0FBE7A01 		movsbl	1(%rdx), %edi
 7919 010c 448D5FCF 		leal	-49(%rdi), %r11d
 7920 0110 4180FB08 		cmpb	$8, %r11b
 7921 0114 0F8742FF 		ja	.L119
 7921      FFFF
 7922              	.LBB2394:
 7923              		.loc 1 114 0
 7924 011a 83EF30   		subl	$48, %edi
 7925              	.LVL811:
 7926 011d 0FB64202 		movzbl	2(%rdx), %eax
 7927              		.loc 1 116 0
 7928 0121 4883C202 		addq	$2, %rdx
 7929              	.LVL812:
 7930              		.loc 1 115 0
 7931 0125 4129FD   		subl	%edi, %r13d
 7932              	.LVL813:
 7933 0128 4129FE   		subl	%edi, %r14d
 7934              	.LVL814:
 7935 012b 01FF     		addl	%edi, %edi
 7936              	.LVL815:
 7937 012d 01F9     		addl	%edi, %ecx
 7938              	.LVL816:
 7939 012f 4101F8   		addl	%edi, %r8d
 7940              	.LVL817:
 7941              	.LBE2394:
 7942 0132 E925FFFF 		jmp	.L119
 7942      FF
 7943              	.LVL818:
 7944 0137 660F1F84 		.p2align 4,,10
 7944      00000000 
 7944      00
 7945              		.p2align 3
 7946              	.L126:
 7947              	.LBE2395:
 7948              	.LBE2398:
 7949              		.loc 1 145 0
 7950 0140 4889D7   		movq	%rdx, %rdi
 7951              	.LVL819:
 7952              	.L158:
 7953 0143 C7442414 		movl	$0, 20(%rsp)
 7953      00000000 
 7954 014b 0F1F4400 		.p2align 4,,10
 7954      00
 7955              		.p2align 3
 7956              	.L130:
 7957              	.LVL820:
 7958              		.loc 1 147 0
 7959 0150 E8000000 		call	_ZL4findPKc
 7959      00
 7960              	.LVL821:
 7961              		.loc 1 148 0
 7962 0155 4C63F8   		movslq	%eax, %r15
 7963              		.loc 1 105 0
 7964 0158 31C0     		xorl	%eax, %eax
 7965              	.LVL822:
 7966              		.loc 1 148 0
 7967 015a 4B8D147F 		leaq	(%r15,%r15,2), %rdx
 7968 015e 488D14D5 		leaq	_ZL7symbols(,%rdx,8), %rdx
 7968      00000000 
 7969 0166 807A1100 		cmpb	$0, 17(%rdx)
 7970 016a 0F840101 		je	.L114
 7970      0000
 7971              		.loc 1 149 0
 7972 0170 807A1003 		cmpb	$3, 16(%rdx)
 7973 0174 0F843602 		je	.L168
 7973      0000
 7974              	.LBB2399:
 7975              	.LBB2400:
 326:fltk-1.3.4-1/FL/fl_draw.H **** /**
 7976              		.loc 2 326 0
 7977 017a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7977      000000
 7978 0181 48895424 		movq	%rdx, 24(%rsp)
 7978      18
 7979 0186 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 7979      00
 7980              	.LVL823:
 7981              	.LBE2400:
 7982              	.LBE2399:
 7983              	.LBB2401:
 7984              	.LBB2402:
 7985              	.LBB2403:
 7986              	.LBB2404:
 7987              		.loc 4 331 0
 7988 018b 89E9     		movl	%ebp, %ecx
 7989 018d 660FEFED 		pxor	%xmm5, %xmm5
 7990 0191 D1F9     		sarl	%ecx
 7991 0193 660FEFE4 		pxor	%xmm4, %xmm4
 7992 0197 428D3431 		leal	(%rcx,%r14), %esi
 7993 019b 89D9     		movl	%ebx, %ecx
 7994 019d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 7994      000000
 7995 01a4 D1F9     		sarl	%ecx
 7996 01a6 660FEFD2 		pxor	%xmm2, %xmm2
 7997 01aa 468D1429 		leal	(%rcx,%r13), %r10d
 7998 01ae F20F2AEE 		cvtsi2sd	%esi, %xmm5
 7999 01b2 F20F101D 		movsd	.LC2(%rip), %xmm3
 7999      00000000 
 8000 01ba F2410F2A 		cvtsi2sd	%r10d, %xmm4
 8000      E2
 8001 01bf 660F28CA 		movapd	%xmm2, %xmm1
 8002 01c3 660F28C3 		movapd	%xmm3, %xmm0
 8003 01c7 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 8003      00
 8004              	.LVL824:
 8005              	.LBE2404:
 8006              	.LBE2403:
 8007              	.LBE2402:
 8008              	.LBE2401:
 8009              		.loc 1 155 0
 8010 01cc 488B5424 		movq	24(%rsp), %rdx
 8010      18
 8011 01d1 807A1000 		cmpb	$0, 16(%rdx)
 8012 01d5 747B     		je	.L140
 8013              		.loc 1 156 0
 8014 01d7 8B442410 		movl	16(%rsp), %eax
 8015 01db 85C0     		testl	%eax, %eax
 8016 01dd 0F851501 		jne	.L169
 8016      0000
 8017              	.L141:
 8018              	.LVL825:
 8019              	.LBB2405:
 8020              	.LBB2406:
 8021              	.LBB2407:
 8022              	.LBB2408:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 8023              		.loc 4 327 0
 8024 01e3 660FEFC9 		pxor	%xmm1, %xmm1
 8025 01e7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8025      000000
 8026 01ee 660FEFC0 		pxor	%xmm0, %xmm0
 8027 01f2 F20F101D 		movsd	.LC50(%rip), %xmm3
 8027      00000000 
 8028 01fa F20F2ACD 		cvtsi2sd	%ebp, %xmm1
 8029 01fe 660FEFED 		pxor	%xmm5, %xmm5
 8030 0202 F20F2AC3 		cvtsi2sd	%ebx, %xmm0
 8031 0206 660F28E5 		movapd	%xmm5, %xmm4
 8032 020a 660F28D5 		movapd	%xmm5, %xmm2
 8033 020e F20F59C3 		mulsd	%xmm3, %xmm0
 8034 0212 F20F59D9 		mulsd	%xmm1, %xmm3
 8035 0216 660F28CD 		movapd	%xmm5, %xmm1
 8036 021a E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 8036      00
 8037              	.LVL826:
 8038              	.LBE2408:
 8039              	.LBE2407:
 8040              	.LBE2406:
 8041              	.LBE2405:
 8042              	.LBB2409:
 8043              	.LBB2410:
 350:fltk-1.3.4-1/FL/fl_draw.H **** /**
 8044              		.loc 2 350 0
 8045 021f 660FEFC0 		pxor	%xmm0, %xmm0
 8046 0223 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8046      000000
 8047 022a F20F2A44 		cvtsi2sd	20(%rsp), %xmm0
 8047      2414
 8048 0230 F20F5E05 		divsd	.LC136(%rip), %xmm0
 8048      00000000 
 8049 0238 E8000000 		call	_ZN18Fl_Graphics_Driver6rotateEd
 8049      00
 8050              	.LVL827:
 8051              	.LBE2410:
 8052              	.LBE2409:
 8053              		.loc 1 159 0
 8054 023d 803C2400 		cmpb	$0, (%rsp)
 8055 0241 0F85C101 		jne	.L170
 8055      0000
 8056              	.L142:
 8057              		.loc 1 160 0
 8058 0247 807C240C 		cmpb	$0, 12(%rsp)
 8058      00
 8059 024c 0F857E01 		jne	.L171
 8059      0000
 8060              	.LVL828:
 8061              	.L140:
 8062              		.loc 1 162 0
 8063 0252 4B8D047F 		leaq	(%r15,%r15,2), %rax
 8064 0256 4489E7   		movl	%r12d, %edi
 8065 0259 FF14C500 		call	*_ZL7symbols+8(,%rax,8)
 8065      000000
 8066              	.LVL829:
 8067              	.LBB2411:
 8068              	.LBB2412:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 8069              		.loc 2 330 0
 8070 0260 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8070      000000
 8071 0267 E8000000 		call	_ZN18Fl_Graphics_Driver10pop_matrixEv
 8071      00
 8072              	.LVL830:
 8073              	.LBE2412:
 8074              	.LBE2411:
 8075              		.loc 1 164 0
 8076 026c B8010000 		movl	$1, %eax
 8076      00
 8077              	.L114:
 8078              		.loc 1 165 0
 8079 0271 4883C428 		addq	$40, %rsp
 8080              		.cfi_remember_state
 8081              		.cfi_def_cfa_offset 56
 8082              	.LVL831:
 8083 0275 5B       		popq	%rbx
 8084              		.cfi_restore 3
 8085              		.cfi_def_cfa_offset 48
 8086 0276 5D       		popq	%rbp
 8087              		.cfi_restore 6
 8088              		.cfi_def_cfa_offset 40
 8089 0277 415C     		popq	%r12
 8090              		.cfi_restore 12
 8091              		.cfi_def_cfa_offset 32
 8092              	.LVL832:
 8093 0279 415D     		popq	%r13
 8094              		.cfi_restore 13
 8095              		.cfi_def_cfa_offset 24
 8096              	.LVL833:
 8097 027b 415E     		popq	%r14
 8098              		.cfi_restore 14
 8099              		.cfi_def_cfa_offset 16
 8100              	.LVL834:
 8101 027d 415F     		popq	%r15
 8102              		.cfi_restore 15
 8103              		.cfi_def_cfa_offset 8
 8104              	.LVL835:
 8105 027f C3       		ret
 8106              	.LVL836:
 8107              		.p2align 4,,10
 8108              		.p2align 3
 8109              	.L162:
 8110              		.cfi_restore_state
 8111 0280 44894424 		movl	%r8d, 16(%rsp)
 8111      10
 8112 0285 894C240C 		movl	%ecx, 12(%rsp)
 8113 0289 48893C24 		movq	%rdi, (%rsp)
 8114              	.LBB2413:
 8115              	.LBB2391:
 8116 028d E8000000 		call	_ZL15fl_init_symbolsv.part.0
 8116      00
 8117              	.LVL837:
 8118 0292 488B3C24 		movq	(%rsp), %rdi
 8119              	.LVL838:
 8120 0296 448B4424 		movl	16(%rsp), %r8d
 8120      10
 8121 029b 8B4C240C 		movl	12(%rsp), %ecx
 8122              	.LBE2391:
 8123              	.LBE2413:
 8124              		.loc 1 108 0
 8125 029f 0FB64701 		movzbl	1(%rdi), %eax
 8126 02a3 3C23     		cmpb	$35, %al
 8127 02a5 0F8595FD 		jne	.L172
 8127      FFFF
 8128              	.LVL839:
 8129              	.L116:
 8130 02ab 0FB64702 		movzbl	2(%rdi), %eax
 8131              		.loc 1 108 0 is_stmt 0 discriminator 1
 8132 02af 488D5702 		leaq	2(%rdi), %rdx
 8133              	.LVL840:
 8134 02b3 C7442410 		movl	$1, 16(%rsp)
 8134      01000000 
 8135              	.LVL841:
 8136              	.LBB2414:
 8137              		.loc 1 109 0 is_stmt 1 discriminator 1
 8138 02bb 3C2D     		cmpb	$45, %al
 8139 02bd 0F8591FD 		jne	.L118
 8139      FFFF
 8140              	.L163:
 8141 02c3 0FBE7A01 		movsbl	1(%rdx), %edi
 8142 02c7 448D5FCF 		leal	-49(%rdi), %r11d
 8143 02cb 4180FB08 		cmpb	$8, %r11b
 8144 02cf 0F8787FD 		ja	.L119
 8144      FFFF
 8145              	.LBB2396:
 8146              		.loc 1 110 0
 8147 02d5 83EF30   		subl	$48, %edi
 8148              	.LVL842:
 8149 02d8 0FB64202 		movzbl	2(%rdx), %eax
 8150              		.loc 1 112 0
 8151 02dc 4883C202 		addq	$2, %rdx
 8152              	.LVL843:
 8153              		.loc 1 111 0
 8154 02e0 4101FD   		addl	%edi, %r13d
 8155              	.LVL844:
 8156 02e3 4101FE   		addl	%edi, %r14d
 8157              	.LVL845:
 8158 02e6 01FF     		addl	%edi, %edi
 8159              	.LVL846:
 8160 02e8 29F9     		subl	%edi, %ecx
 8161              	.LVL847:
 8162 02ea 4129F8   		subl	%edi, %r8d
 8163              	.LVL848:
 8164              	.LBE2396:
 8165              		.loc 1 112 0
 8166 02ed E96AFDFF 		jmp	.L119
 8166      FF
 8167              	.LVL849:
 8168              		.p2align 4,,10
 8169 02f2 660F1F44 		.p2align 3
 8169      0000
 8170              	.L169:
 8171              	.LBE2414:
 8172              		.loc 1 156 0 discriminator 1
 8173 02f8 39EB     		cmpl	%ebp, %ebx
 8174 02fa 7C02     		jl	.L159
 8175 02fc 89EB     		movl	%ebp, %ebx
 8176              	.L159:
 8177 02fe 89DD     		movl	%ebx, %ebp
 8178 0300 E9DEFEFF 		jmp	.L141
 8178      FF
 8179              	.LVL850:
 8180              		.p2align 4,,10
 8181 0305 0F1F00   		.p2align 3
 8182              	.L146:
 8183              		.loc 1 137 0
 8184 0308 C7442414 		movl	$2700, 20(%rsp)
 8184      8C0A0000 
 8185 0310 E93BFEFF 		jmp	.L130
 8185      FF
 8186              		.p2align 4,,10
 8187 0315 0F1F00   		.p2align 3
 8188              	.L134:
 8189              	.LVL851:
 8190              		.loc 1 142 0
 8191 0318 C7442414 		movl	$1350, 20(%rsp)
 8191      46050000 
 8192 0320 E92BFEFF 		jmp	.L130
 8192      FF
 8193              	.LVL852:
 8194              		.p2align 4,,10
 8195 0325 0F1F00   		.p2align 3
 8196              	.L132:
 8197              		.loc 1 139 0
 8198 0328 C7442414 		movl	$1800, 20(%rsp)
 8198      08070000 
 8199 0330 E91BFEFF 		jmp	.L130
 8199      FF
 8200              	.LVL853:
 8201              		.p2align 4,,10
 8202 0335 0F1F00   		.p2align 3
 8203              	.L131:
 8204              		.loc 1 138 0
 8205 0338 C7442414 		movl	$3150, 20(%rsp)
 8205      4E0C0000 
 8206 0340 E90BFEFF 		jmp	.L130
 8206      FF
 8207              	.LVL854:
 8208              		.p2align 4,,10
 8209 0345 0F1F00   		.p2align 3
 8210              	.L135:
 8211              		.loc 1 143 0
 8212 0348 C7442414 		movl	$900, 20(%rsp)
 8212      84030000 
 8213 0350 E9FBFDFF 		jmp	.L130
 8213      FF
 8214              	.LVL855:
 8215              		.p2align 4,,10
 8216 0355 0F1F00   		.p2align 3
 8217              	.L129:
 8218              		.loc 1 136 0
 8219 0358 C7442414 		movl	$2250, 20(%rsp)
 8219      CA080000 
 8220 0360 E9EBFDFF 		jmp	.L130
 8220      FF
 8221              		.p2align 4,,10
 8222 0365 0F1F00   		.p2align 3
 8223              	.L127:
 8224              		.loc 1 133 0
 8225 0368 0FBE4202 		movsbl	2(%rdx), %eax
 8226              		.loc 1 134 0
 8227 036c 488D7A05 		leaq	5(%rdx), %rdi
 8228              	.LVL856:
 8229              		.loc 1 133 0
 8230 0370 83E830   		subl	$48, %eax
 8231 0373 69C8E803 		imull	$1000, %eax, %ecx
 8231      0000
 8232 0379 0FBE4203 		movsbl	3(%rdx), %eax
 8233 037d 83E830   		subl	$48, %eax
 8234 0380 6BC064   		imull	$100, %eax, %eax
 8235 0383 01C8     		addl	%ecx, %eax
 8236 0385 0FBE4A04 		movsbl	4(%rdx), %ecx
 8237 0389 8D8C8910 		leal	-240(%rcx,%rcx,4), %ecx
 8237      FFFFFF
 8238 0390 8D0448   		leal	(%rax,%rcx,2), %eax
 8239 0393 89442414 		movl	%eax, 20(%rsp)
 8240              	.LVL857:
 8241              		.loc 1 135 0
 8242 0397 E9B4FDFF 		jmp	.L130
 8242      FF
 8243              	.LVL858:
 8244 039c 0F1F4000 		.p2align 4,,10
 8245              		.p2align 3
 8246              	.L136:
 8247              		.loc 1 144 0
 8248 03a0 C7442414 		movl	$450, 20(%rsp)
 8248      C2010000 
 8249 03a8 E9A3FDFF 		jmp	.L130
 8249      FF
 8250              	.LVL859:
 8251 03ad 0F1F00   		.p2align 4,,10
 8252              		.p2align 3
 8253              	.L168:
 8254              		.loc 1 150 0
 8255 03b0 89E9     		movl	%ebp, %ecx
 8256 03b2 89DA     		movl	%ebx, %edx
 8257 03b4 4489F6   		movl	%r14d, %esi
 8258 03b7 4489EF   		movl	%r13d, %edi
 8259 03ba E8000000 		call	_Z15fl_return_arrowiiii
 8259      00
 8260              	.LVL860:
 8261              		.loc 1 151 0
 8262 03bf B8010000 		movl	$1, %eax
 8262      00
 8263 03c4 E9A8FEFF 		jmp	.L114
 8263      FF
 8264              	.LVL861:
 8265 03c9 0F1F8000 		.p2align 4,,10
 8265      000000
 8266              		.p2align 3
 8267              	.L171:
 8268              	.LBB2415:
 8269              	.LBB2416:
 8270              	.LBB2417:
 8271              	.LBB2418:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 8272              		.loc 4 327 0
 8273 03d0 660FEFED 		pxor	%xmm5, %xmm5
 8274 03d4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8274      000000
 8275 03db F20F101D 		movsd	.LC1(%rip), %xmm3
 8275      00000000 
 8276 03e3 F20F1005 		movsd	.LC2(%rip), %xmm0
 8276      00000000 
 8277 03eb 660F28E5 		movapd	%xmm5, %xmm4
 8278 03ef 660F28D5 		movapd	%xmm5, %xmm2
 8279 03f3 660F28CD 		movapd	%xmm5, %xmm1
 8280 03f7 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 8280      00
 8281              	.LVL862:
 8282 03fc E951FEFF 		jmp	.L140
 8282      FF
 8283              	.LVL863:
 8284              		.p2align 4,,10
 8285 0401 0F1F8000 		.p2align 3
 8285      000000
 8286              	.L170:
 8287              	.LBE2418:
 8288              	.LBE2417:
 8289              	.LBE2416:
 8290              	.LBE2415:
 8291              	.LBB2419:
 8292              	.LBB2420:
 8293              	.LBB2421:
 8294              	.LBB2422:
 8295 0408 660FEFED 		pxor	%xmm5, %xmm5
 8296 040c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 8296      000000
 8297 0413 F20F101D 		movsd	.LC2(%rip), %xmm3
 8297      00000000 
 8298 041b F20F1005 		movsd	.LC1(%rip), %xmm0
 8298      00000000 
 8299 0423 660F28E5 		movapd	%xmm5, %xmm4
 8300 0427 660F28D5 		movapd	%xmm5, %xmm2
 8301 042b 660F28CD 		movapd	%xmm5, %xmm1
 8302 042f E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 8302      00
 8303              	.LVL864:
 8304 0434 E90EFEFF 		jmp	.L142
 8304      FF
 8305              	.LBE2422:
 8306              	.LBE2421:
 8307              	.LBE2420:
 8308              	.LBE2419:
 8309              		.cfi_endproc
 8310              	.LFE487:
 8312              		.section	.text.unlikely._Z14fl_draw_symbolPKciiiij
 8313              	.LCOLDE137:
 8314              		.section	.text._Z14fl_draw_symbolPKciiiij
 8315              	.LHOTE137:
 8316              		.section	.bss._ZZL15fl_init_symbolsvE8beenhere,"aw",@nobits
 8319              	_ZZL15fl_init_symbolsvE8beenhere:
 8320 0000 00       		.zero	1
 8321              		.section	.data._ZL8symbnumb,"aw",@progbits
 8322              		.align 4
 8325              	_ZL8symbnumb:
 8326 0000 FFFFFFFF 		.long	-1
 8327              		.section	.bss._ZL7symbols,"aw",@nobits
 8328              		.align 32
 8331              	_ZL7symbols:
 8332 0000 00000000 		.zero	5064
 8332      00000000 
 8332      00000000 
 8332      00000000 
 8332      00000000 
 8333              		.section	.rodata.cst8,"aM",@progbits,8
 8334              		.align 8
 8335              	.LC1:
 8336 0000 00000000 		.long	0
 8337 0004 0000F0BF 		.long	-1074790400
 8338              		.align 8
 8339              	.LC2:
 8340 0008 00000000 		.long	0
 8341 000c 0000F03F 		.long	1072693248
 8342              		.align 8
 8343              	.LC4:
 8344 0010 9A999999 		.long	2576980378
 8345 0014 9999E93F 		.long	1072273817
 8346              		.align 8
 8347              	.LC5:
 8348 0018 9A999999 		.long	2576980378
 8349 001c 9999E9BF 		.long	-1075209831
 8350              		.section	.rodata.cst4,"aM",@progbits,4
 8351              		.align 4
 8352              	.LC8:
 8353 0000 1F852B3F 		.long	1059816735
 8354              		.section	.rodata.cst8
 8355              		.align 8
 8356              	.LC10:
 8357 0020 A4703D0A 		.long	171798692
 8358 0024 D7A3C03F 		.long	1069589463
 8359              		.align 8
 8360              	.LC11:
 8361 0028 9A999999 		.long	2576980378
 8362 002c 9999D9BF 		.long	-1076258407
 8363              		.align 8
 8364              	.LC12:
 8365 0030 5C8FC2F5 		.long	4123168604
 8366 0034 285CE73F 		.long	1072127016
 8367              		.align 8
 8368              	.LC13:
 8369 0038 5C8FC2F5 		.long	4123168604
 8370 003c 285CE7BF 		.long	-1075356632
 8371              		.align 8
 8372              	.LC14:
 8373 0040 9A999999 		.long	2576980378
 8374 0044 9999D93F 		.long	1071225241
 8375              		.align 8
 8376              	.LC15:
 8377 0048 A4703D0A 		.long	171798692
 8378 004c D7A3C0BF 		.long	-1077894185
 8379              		.align 8
 8380              	.LC16:
 8381 0050 33333333 		.long	858993459
 8382 0054 3333E33F 		.long	1071854387
 8383              		.align 8
 8384              	.LC17:
 8385 0058 9A999999 		.long	2576980378
 8386 005c 9999C9BF 		.long	-1077306983
 8387              		.align 8
 8388              	.LC18:
 8389 0060 9A999999 		.long	2576980378
 8390 0064 9999C93F 		.long	1070176665
 8391              		.align 8
 8392              	.LC21:
 8393 0068 9A999999 		.long	2576980378
 8394 006c 9999B9BF 		.long	-1078355559
 8395              		.align 8
 8396              	.LC22:
 8397 0070 33333333 		.long	858993459
 8398 0074 3333E3BF 		.long	-1075629261
 8399              		.align 8
 8400              	.LC23:
 8401 0078 9A999999 		.long	2576980378
 8402 007c 9999B93F 		.long	1069128089
 8403              		.align 8
 8404              	.LC25:
 8405 0080 00000000 		.long	0
 8406 0084 0000D0BF 		.long	-1076887552
 8407              		.align 8
 8408              	.LC26:
 8409 0088 CDCCCCCC 		.long	3435973837
 8410 008c CCCCE43F 		.long	1071959244
 8411              		.align 8
 8412              	.LC27:
 8413 0090 33333333 		.long	858993459
 8414 0094 3333EB3F 		.long	1072378675
 8415              		.align 8
 8416              	.LC28:
 8417 0098 CDCCCCCC 		.long	3435973837
 8418 009c CCCCE4BF 		.long	-1075524404
 8419              		.align 8
 8420              	.LC32:
 8421 00a0 33333333 		.long	858993459
 8422 00a4 3333C3BF 		.long	-1077726413
 8423              		.align 8
 8424              	.LC33:
 8425 00a8 CDCCCCCC 		.long	3435973837
 8426 00ac CCCCECBF 		.long	-1075000116
 8427              		.align 8
 8428              	.LC34:
 8429 00b0 33333333 		.long	858993459
 8430 00b4 3333C33F 		.long	1069757235
 8431              		.align 8
 8432              	.LC35:
 8433 00b8 CDCCCCCC 		.long	3435973837
 8434 00bc CCCCEC3F 		.long	1072483532
 8435              		.align 8
 8436              	.LC38:
 8437 00c0 66666666 		.long	1717986918
 8438 00c4 6666D6BF 		.long	-1076468122
 8439              		.align 8
 8440              	.LC39:
 8441 00c8 66666666 		.long	1717986918
 8442 00cc 6666D63F 		.long	1071015526
 8443              		.align 8
 8444              	.LC40:
 8445 00d0 66666666 		.long	1717986918
 8446 00d4 6666EE3F 		.long	1072588390
 8447              		.align 8
 8448              	.LC41:
 8449 00d8 66666666 		.long	1717986918
 8450 00dc 6666EEBF 		.long	-1074895258
 8451              		.align 8
 8452              	.LC43:
 8453 00e0 00000000 		.long	0
 8454 00e4 0000E0BF 		.long	-1075838976
 8455              		.align 8
 8456              	.LC47:
 8457 00e8 66666666 		.long	1717986918
 8458 00ec 6666E6BF 		.long	-1075419546
 8459              		.align 8
 8460              	.LC49:
 8461 00f0 33333333 		.long	858993459
 8462 00f4 3333D3BF 		.long	-1076677837
 8463              		.align 8
 8464              	.LC50:
 8465 00f8 00000000 		.long	0
 8466 00fc 0000E03F 		.long	1071644672
 8467              		.align 8
 8468              	.LC54:
 8469 0100 3850CFA2 		.long	2731495480
 8470 0104 6F83E8BF 		.long	-1075281041
 8471              		.align 8
 8472              	.LC55:
 8473 0108 1E163C52 		.long	1379669534
 8474 010c B791E43F 		.long	1071944119
 8475              		.align 8
 8476              	.LC56:
 8477 0110 00000000 		.long	0
 8478 0114 00806140 		.long	1080131584
 8479              		.align 8
 8480              	.LC57:
 8481 0118 7B14AE47 		.long	1202590843
 8482 011c E17A743F 		.long	1064598241
 8483              		.align 8
 8484              	.LC58:
 8485 0120 00000000 		.long	0
 8486 0124 00806640 		.long	1080459264
 8487              		.align 8
 8488              	.LC59:
 8489 0128 182D4454 		.long	1413754136
 8490 012c FB210940 		.long	1074340347
 8491              		.align 8
 8492              	.LC60:
 8493 0130 B81E85EB 		.long	3951369912
 8494 0134 51B88E3F 		.long	1066317905
 8495              		.section	.rodata.cst4
 8496              		.align 4
 8497              	.LC62:
 8498 0004 0000C040 		.long	1086324736
 8499              		.section	.rodata.cst8
 8500              		.align 8
 8501              	.LC65:
 8502 0138 00000000 		.long	0
 8503 013c 000000C0 		.long	-1073741824
 8504              		.align 8
 8505              	.LC66:
 8506 0140 CDCCCCCC 		.long	3435973837
 8507 0144 CCCCFCBF 		.long	-1073951540
 8508              		.align 8
 8509              	.LC67:
 8510 0148 33333333 		.long	858993459
 8511 014c 3333F3BF 		.long	-1074580685
 8512              		.align 8
 8513              	.LC68:
 8514 0150 33333333 		.long	858993459
 8515 0154 3333D33F 		.long	1070805811
 8516              		.align 8
 8517              	.LC69:
 8518 0158 9A999999 		.long	2576980378
 8519 015c 9999F13F 		.long	1072798105
 8520              		.align 8
 8521              	.LC70:
 8522 0160 CDCCCCCC 		.long	3435973837
 8523 0164 CCCCF43F 		.long	1073007820
 8524              		.align 8
 8525              	.LC71:
 8526 0168 33333333 		.long	858993459
 8527 016c 3333FB3F 		.long	1073427251
 8528              		.align 8
 8529              	.LC72:
 8530 0170 00000000 		.long	0
 8531 0174 00000040 		.long	1073741824
 8532              		.align 8
 8533              	.LC73:
 8534 0178 E17A14AE 		.long	2920577761
 8535 017c 47E1F63F 		.long	1073144135
 8536              		.section	.rodata.cst4
 8537              		.align 4
 8538              	.LC75:
 8539 0008 0000803E 		.long	1048576000
 8540              		.section	.rodata.cst8
 8541              		.align 8
 8542              	.LC77:
 8543 0180 66666666 		.long	1717986918
 8544 0184 6666E63F 		.long	1072064102
 8545              		.align 8
 8546              	.LC88:
 8547 0188 00000000 		.long	0
 8548 018c 00E060C0 		.long	-1067393024
 8549              		.section	.rodata.cst4
 8550              		.align 4
 8551              	.LC89:
 8552 000c 00002041 		.long	1092616192
 8553              		.section	.rodata.cst8
 8554              		.align 8
 8555              	.LC90:
 8556 0190 00000000 		.long	0
 8557 0194 00E06040 		.long	1080090624
 8558              		.section	.rodata.cst4
 8559              		.align 4
 8560              	.LC92:
 8561 0010 0000A040 		.long	1084227584
 8562              		.section	.rodata.cst8
 8563              		.align 8
 8564              	.LC93:
 8565 0198 00000000 		.long	0
 8566 019c 008066C0 		.long	-1067024384
 8567              		.align 8
 8568              	.LC136:
 8569 01a0 00000000 		.long	0
 8570 01a4 00002440 		.long	1076101120
 8571              		.text
 8572              	.Letext0:
 8573              		.section	.text.unlikely._ZL9draw_linej
 8574              	.Letext_cold0:
 8575              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 8576              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 8577              		.file 7 "/usr/include/libio.h"
 8578              		.file 8 "/usr/include/stdio.h"
 8579              		.file 9 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_symbols.cxx
     /tmp/ccph48MK.s:13     .text._ZL9draw_linej:0000000000000000 _ZL9draw_linej
     /tmp/ccph48MK.s:96     .text._ZL12draw_uparrowj:0000000000000000 _ZL12draw_uparrowj
     /tmp/ccph48MK.s:233    .text._ZL14draw_downarrowj:0000000000000000 _ZL14draw_downarrowj
     /tmp/ccph48MK.s:370    .text._ZL17set_outline_colorj:0000000000000000 _ZL17set_outline_colorj
     /tmp/ccph48MK.s:419    .text._ZL11draw_searchj:0000000000000000 _ZL11draw_searchj
     /tmp/ccph48MK.s:640    .text._ZL9rectangleddddj:0000000000000000 _ZL9rectangleddddj
     /tmp/ccph48MK.s:833    .text._ZL14draw_doublebarj:0000000000000000 _ZL14draw_doublebarj
     /tmp/ccph48MK.s:877    .text._ZL9draw_menuj:0000000000000000 _ZL9draw_menuj
     /tmp/ccph48MK.s:921    .text._ZL11draw_squarej:0000000000000000 _ZL11draw_squarej
     /tmp/ccph48MK.s:946    .text._ZL11draw_circlej:0000000000000000 _ZL11draw_circlej
     /tmp/ccph48MK.s:1055   .text._ZL9draw_plusj:0000000000000000 _ZL9draw_plusj
     /tmp/ccph48MK.s:1361   .text._ZL10draw_arrowj:0000000000000000 _ZL10draw_arrowj
     /tmp/ccph48MK.s:1586   .text._ZL16draw_doublearrowj:0000000000000000 _ZL16draw_doublearrowj
     /tmp/ccph48MK.s:1911   .text._ZL13draw_bararrowj:0000000000000000 _ZL13draw_bararrowj
     /tmp/ccph48MK.s:2176   .text._ZL13draw_arrowboxj:0000000000000000 _ZL13draw_arrowboxj
     /tmp/ccph48MK.s:2441   .text._ZL13draw_arrowbarj:0000000000000000 _ZL13draw_arrowbarj
     /tmp/ccph48MK.s:2706   .text._ZL11draw_arrow3j:0000000000000000 _ZL11draw_arrow3j
     /tmp/ccph48MK.s:2951   .text._ZL11draw_arrow2j:0000000000000000 _ZL11draw_arrow2j
     /tmp/ccph48MK.s:3098   .text._ZL11draw_arrow1j:0000000000000000 _ZL11draw_arrow1j
     /tmp/ccph48MK.s:3364   .text._ZL14draw_arrow1barj:0000000000000000 _ZL14draw_arrow1barj
     /tmp/ccph48MK.s:3403   .text._ZL16draw_round_arrowjf:0000000000000000 _ZL16draw_round_arrowjf
     /tmp/ccph48MK.s:3715   .text._ZL9draw_undoj:0000000000000000 _ZL9draw_undoj
     /tmp/ccph48MK.s:3849   .text._ZL9draw_redoj:0000000000000000 _ZL9draw_redoj
     /tmp/ccph48MK.s:3936   .text._ZL9draw_fltkj:0000000000000000 _ZL9draw_fltkj
     /tmp/ccph48MK.s:4837   .text._ZL14draw_fileprintj:0000000000000000 _ZL14draw_fileprintj
     /tmp/ccph48MK.s:5313   .text._ZL13draw_filesavej:0000000000000000 _ZL13draw_filesavej
     /tmp/ccph48MK.s:5783   .text._ZL15draw_filesaveasj:0000000000000000 _ZL15draw_filesaveasj
     /tmp/ccph48MK.s:6042   .text._ZL13draw_fileopenj:0000000000000000 _ZL13draw_fileopenj
     /tmp/ccph48MK.s:6443   .text._ZL12draw_filenewj:0000000000000000 _ZL12draw_filenewj
     /tmp/ccph48MK.s:6774   .text._ZL14draw_0bararrowj:0000000000000000 _ZL14draw_0bararrowj
     /tmp/ccph48MK.s:6814   .text._ZL14draw_0arrowboxj:0000000000000000 _ZL14draw_0arrowboxj
     /tmp/ccph48MK.s:6854   .text._ZL14draw_0arrowbarj:0000000000000000 _ZL14draw_0arrowbarj
     /tmp/ccph48MK.s:6894   .text._ZL12draw_arrow03j:0000000000000000 _ZL12draw_arrow03j
     /tmp/ccph48MK.s:6934   .text._ZL12draw_arrow02j:0000000000000000 _ZL12draw_arrow02j
     /tmp/ccph48MK.s:6974   .text._ZL12draw_arrow01j:0000000000000000 _ZL12draw_arrow01j
     /tmp/ccph48MK.s:7014   .text._ZL11draw_reloadj:0000000000000000 _ZL11draw_reloadj
     /tmp/ccph48MK.s:7065   .text._ZL12draw_refreshj:0000000000000000 _ZL12draw_refreshj
     /tmp/ccph48MK.s:7120   .text._ZL4findPKc:0000000000000000 _ZL4findPKc
     /tmp/ccph48MK.s:8331   .bss._ZL7symbols:0000000000000000 _ZL7symbols
     /tmp/ccph48MK.s:7305   .text._Z13fl_add_symbolPKcPFvjEi:0000000000000000 _Z13fl_add_symbolPKcPFvjEi
     /tmp/ccph48MK.s:8319   .bss._ZZL15fl_init_symbolsvE8beenhere:0000000000000000 _ZZL15fl_init_symbolsvE8beenhere
     /tmp/ccph48MK.s:7472   .text._ZL15fl_init_symbolsv.part.0:0000000000000000 _ZL15fl_init_symbolsv.part.0
     /tmp/ccph48MK.s:8325   .data._ZL8symbnumb:0000000000000000 _ZL8symbnumb
     /tmp/ccph48MK.s:7729   .text._Z14fl_draw_symbolPKciiiij:0000000000000000 _Z14fl_draw_symbolPKciiiij
     /tmp/ccph48MK.s:8335   .rodata.cst8:0000000000000000 .LC1
     /tmp/ccph48MK.s:8339   .rodata.cst8:0000000000000008 .LC2
     /tmp/ccph48MK.s:8343   .rodata.cst8:0000000000000010 .LC4
     /tmp/ccph48MK.s:8347   .rodata.cst8:0000000000000018 .LC5
     /tmp/ccph48MK.s:8352   .rodata.cst4:0000000000000000 .LC8
     /tmp/ccph48MK.s:8356   .rodata.cst8:0000000000000020 .LC10
     /tmp/ccph48MK.s:8360   .rodata.cst8:0000000000000028 .LC11
     /tmp/ccph48MK.s:8364   .rodata.cst8:0000000000000030 .LC12
     /tmp/ccph48MK.s:8368   .rodata.cst8:0000000000000038 .LC13
     /tmp/ccph48MK.s:8372   .rodata.cst8:0000000000000040 .LC14
     /tmp/ccph48MK.s:8376   .rodata.cst8:0000000000000048 .LC15
     /tmp/ccph48MK.s:8380   .rodata.cst8:0000000000000050 .LC16
     /tmp/ccph48MK.s:8384   .rodata.cst8:0000000000000058 .LC17
     /tmp/ccph48MK.s:8388   .rodata.cst8:0000000000000060 .LC18
     /tmp/ccph48MK.s:8392   .rodata.cst8:0000000000000068 .LC21
     /tmp/ccph48MK.s:8396   .rodata.cst8:0000000000000070 .LC22
     /tmp/ccph48MK.s:8400   .rodata.cst8:0000000000000078 .LC23
     /tmp/ccph48MK.s:8404   .rodata.cst8:0000000000000080 .LC25
     /tmp/ccph48MK.s:8408   .rodata.cst8:0000000000000088 .LC26
     /tmp/ccph48MK.s:8412   .rodata.cst8:0000000000000090 .LC27
     /tmp/ccph48MK.s:8416   .rodata.cst8:0000000000000098 .LC28
     /tmp/ccph48MK.s:8420   .rodata.cst8:00000000000000a0 .LC32
     /tmp/ccph48MK.s:8424   .rodata.cst8:00000000000000a8 .LC33
     /tmp/ccph48MK.s:8428   .rodata.cst8:00000000000000b0 .LC34
     /tmp/ccph48MK.s:8432   .rodata.cst8:00000000000000b8 .LC35
     /tmp/ccph48MK.s:8436   .rodata.cst8:00000000000000c0 .LC38
     /tmp/ccph48MK.s:8440   .rodata.cst8:00000000000000c8 .LC39
     /tmp/ccph48MK.s:8444   .rodata.cst8:00000000000000d0 .LC40
     /tmp/ccph48MK.s:8448   .rodata.cst8:00000000000000d8 .LC41
     /tmp/ccph48MK.s:8452   .rodata.cst8:00000000000000e0 .LC43
     /tmp/ccph48MK.s:8456   .rodata.cst8:00000000000000e8 .LC47
     /tmp/ccph48MK.s:8460   .rodata.cst8:00000000000000f0 .LC49
     /tmp/ccph48MK.s:8464   .rodata.cst8:00000000000000f8 .LC50
     /tmp/ccph48MK.s:8468   .rodata.cst8:0000000000000100 .LC54
     /tmp/ccph48MK.s:8472   .rodata.cst8:0000000000000108 .LC55
     /tmp/ccph48MK.s:8476   .rodata.cst8:0000000000000110 .LC56
     /tmp/ccph48MK.s:8484   .rodata.cst8:0000000000000120 .LC58
     /tmp/ccph48MK.s:8488   .rodata.cst8:0000000000000128 .LC59
     /tmp/ccph48MK.s:8480   .rodata.cst8:0000000000000118 .LC57
     /tmp/ccph48MK.s:8492   .rodata.cst8:0000000000000130 .LC60
     /tmp/ccph48MK.s:8497   .rodata.cst4:0000000000000004 .LC62
     /tmp/ccph48MK.s:8501   .rodata.cst8:0000000000000138 .LC65
     /tmp/ccph48MK.s:8505   .rodata.cst8:0000000000000140 .LC66
     /tmp/ccph48MK.s:8509   .rodata.cst8:0000000000000148 .LC67
     /tmp/ccph48MK.s:8513   .rodata.cst8:0000000000000150 .LC68
     /tmp/ccph48MK.s:8517   .rodata.cst8:0000000000000158 .LC69
     /tmp/ccph48MK.s:8521   .rodata.cst8:0000000000000160 .LC70
     /tmp/ccph48MK.s:8525   .rodata.cst8:0000000000000168 .LC71
     /tmp/ccph48MK.s:8529   .rodata.cst8:0000000000000170 .LC72
     /tmp/ccph48MK.s:8533   .rodata.cst8:0000000000000178 .LC73
     /tmp/ccph48MK.s:8538   .rodata.cst4:0000000000000008 .LC75
     /tmp/ccph48MK.s:8542   .rodata.cst8:0000000000000180 .LC77
     /tmp/ccph48MK.s:8546   .rodata.cst8:0000000000000188 .LC88
     /tmp/ccph48MK.s:8551   .rodata.cst4:000000000000000c .LC89
     /tmp/ccph48MK.s:8555   .rodata.cst8:0000000000000190 .LC90
     /tmp/ccph48MK.s:8560   .rodata.cst4:0000000000000010 .LC92
     /tmp/ccph48MK.s:8564   .rodata.cst8:0000000000000198 .LC93
     /tmp/ccph48MK.s:8568   .rodata.cst8:00000000000001a0 .LC136
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
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
fl_graphics_driver
_Z16fl_color_averagejjf
sincos
_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
_ZN18Fl_Graphics_Driver6rotateEd
strcmp
_ZN18Fl_Graphics_Driver11push_matrixEv
_ZN18Fl_Graphics_Driver10pop_matrixEv
_Z15fl_return_arrowiiii
