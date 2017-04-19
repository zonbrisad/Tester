   1              		.file	"fl_oval_box.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL13fl_oval_frameiiiij,"ax",@progbits
   5              	.LCOLDB2:
   6              		.section	.text._ZL13fl_oval_frameiiiij,"ax",@progbits
   7              	.LHOTB2:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL13fl_oval_frameiiiij
  10              	.Ltext_cold0:
  11              		.section	.text._ZL13fl_oval_frameiiiij
  13              	_ZL13fl_oval_frameiiiij:
  14              	.LFB469:
  15              		.file 1 "fltk-1.3.4-1/src/fl_oval_box.cxx"
   1:fltk-1.3.4-1/src/fl_oval_box.cxx **** ...
  16              		.loc 1 31 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4155     		pushq	%r13
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 13, -16
  22 0002 4154     		pushq	%r12
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 12, -24
  25 0004 4189CD   		movl	%ecx, %r13d
  26 0007 55       		pushq	%rbp
  27              		.cfi_def_cfa_offset 32
  28              		.cfi_offset 6, -32
  29 0008 53       		pushq	%rbx
  30              		.cfi_def_cfa_offset 40
  31              		.cfi_offset 3, -40
  32 0009 89FB     		movl	%edi, %ebx
  33              		.loc 1 32 0
  34 000b 4489C7   		movl	%r8d, %edi
  35              	.LVL1:
  36              		.loc 1 31 0
  37 000e 89F5     		movl	%esi, %ebp
  38 0010 4189D4   		movl	%edx, %r12d
  39 0013 4883EC08 		subq	$8, %rsp
  40              		.cfi_def_cfa_offset 48
  41              		.loc 1 32 0
  42 0017 E8000000 		call	_ZN2Fl13set_box_colorEj
  42      00
  43              	.LVL2:
  44              	.LBB6:
  45              	.LBB7:
  46              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  47              		.loc 2 304 0
  48 001c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  48      000000
  49 0023 F20F100D 		movsd	.LC0(%rip), %xmm1
  49      00000000 
  50 002b 4589E8   		movl	%r13d, %r8d
  51 002e 4489E1   		movl	%r12d, %ecx
  52 0031 89EA     		movl	%ebp, %edx
  53 0033 89DE     		movl	%ebx, %esi
  54 0035 660FEFC0 		pxor	%xmm0, %xmm0
  55 0039 488B07   		movq	(%rdi), %rax
  56 003c 488B8000 		movq	256(%rax), %rax
  56      010000
  57              	.LBE7:
  58              	.LBE6:
  59              		.loc 1 34 0
  60 0043 4883C408 		addq	$8, %rsp
  61              		.cfi_def_cfa_offset 40
  62 0047 5B       		popq	%rbx
  63              		.cfi_def_cfa_offset 32
  64              	.LVL3:
  65 0048 5D       		popq	%rbp
  66              		.cfi_def_cfa_offset 24
  67              	.LVL4:
  68 0049 415C     		popq	%r12
  69              		.cfi_def_cfa_offset 16
  70              	.LVL5:
  71 004b 415D     		popq	%r13
  72              		.cfi_def_cfa_offset 8
  73              	.LVL6:
  74              	.LBB9:
  75              	.LBB8:
  76              		.loc 2 304 0
  77 004d FFE0     		jmp	*%rax
  78              	.LVL7:
  79              	.LBE8:
  80              	.LBE9:
  81              		.cfi_endproc
  82              	.LFE469:
  84              		.section	.text.unlikely._ZL13fl_oval_frameiiiij
  85              	.LCOLDE2:
  86              		.section	.text._ZL13fl_oval_frameiiiij
  87              	.LHOTE2:
  88              		.section	.text.unlikely._ZL16fl_oval_flat_boxiiiij,"ax",@progbits
  89              	.LCOLDB3:
  90              		.section	.text._ZL16fl_oval_flat_boxiiiij,"ax",@progbits
  91              	.LHOTB3:
  92              		.p2align 4,,15
  94              	_ZL16fl_oval_flat_boxiiiij:
  95              	.LFB468:
  96              		.loc 1 26 0
  97              		.cfi_startproc
  98              	.LVL8:
  99 0000 4155     		pushq	%r13
 100              		.cfi_def_cfa_offset 16
 101              		.cfi_offset 13, -16
 102 0002 4154     		pushq	%r12
 103              		.cfi_def_cfa_offset 24
 104              		.cfi_offset 12, -24
 105 0004 4189CD   		movl	%ecx, %r13d
 106 0007 55       		pushq	%rbp
 107              		.cfi_def_cfa_offset 32
 108              		.cfi_offset 6, -32
 109 0008 53       		pushq	%rbx
 110              		.cfi_def_cfa_offset 40
 111              		.cfi_offset 3, -40
 112 0009 89FB     		movl	%edi, %ebx
 113              		.loc 1 27 0
 114 000b 4489C7   		movl	%r8d, %edi
 115              	.LVL9:
 116              		.loc 1 26 0
 117 000e 89F5     		movl	%esi, %ebp
 118 0010 4189D4   		movl	%edx, %r12d
 119 0013 4883EC08 		subq	$8, %rsp
 120              		.cfi_def_cfa_offset 48
 121              		.loc 1 27 0
 122 0017 E8000000 		call	_ZN2Fl13set_box_colorEj
 122      00
 123              	.LVL10:
 124              	.LBB10:
 125              	.LBB11:
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
 126              		.loc 2 317 0
 127 001c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 127      000000
 128 0023 F20F100D 		movsd	.LC0(%rip), %xmm1
 128      00000000 
 129 002b 4589E8   		movl	%r13d, %r8d
 130 002e 4489E1   		movl	%r12d, %ecx
 131 0031 89EA     		movl	%ebp, %edx
 132 0033 89DE     		movl	%ebx, %esi
 133 0035 660FEFC0 		pxor	%xmm0, %xmm0
 134 0039 488B07   		movq	(%rdi), %rax
 135 003c 488B8008 		movq	264(%rax), %rax
 135      010000
 136              	.LBE11:
 137              	.LBE10:
 138              		.loc 1 29 0
 139 0043 4883C408 		addq	$8, %rsp
 140              		.cfi_def_cfa_offset 40
 141 0047 5B       		popq	%rbx
 142              		.cfi_def_cfa_offset 32
 143              	.LVL11:
 144 0048 5D       		popq	%rbp
 145              		.cfi_def_cfa_offset 24
 146              	.LVL12:
 147 0049 415C     		popq	%r12
 148              		.cfi_def_cfa_offset 16
 149              	.LVL13:
 150 004b 415D     		popq	%r13
 151              		.cfi_def_cfa_offset 8
 152              	.LVL14:
 153              	.LBB13:
 154              	.LBB12:
 155              		.loc 2 317 0
 156 004d FFE0     		jmp	*%rax
 157              	.LVL15:
 158              	.LBE12:
 159              	.LBE13:
 160              		.cfi_endproc
 161              	.LFE468:
 163              		.section	.text.unlikely._ZL16fl_oval_flat_boxiiiij
 164              	.LCOLDE3:
 165              		.section	.text._ZL16fl_oval_flat_boxiiiij
 166              	.LHOTE3:
 167              		.section	.text.unlikely._ZL11fl_oval_boxiiiij,"ax",@progbits
 168              	.LCOLDB4:
 169              		.section	.text._ZL11fl_oval_boxiiiij,"ax",@progbits
 170              	.LHOTB4:
 171              		.p2align 4,,15
 173              	_ZL11fl_oval_boxiiiij:
 174              	.LFB470:
 175              		.loc 1 36 0
 176              		.cfi_startproc
 177              	.LVL16:
 178 0000 4155     		pushq	%r13
 179              		.cfi_def_cfa_offset 16
 180              		.cfi_offset 13, -16
 181 0002 4154     		pushq	%r12
 182              		.cfi_def_cfa_offset 24
 183              		.cfi_offset 12, -24
 184 0004 4189CD   		movl	%ecx, %r13d
 185 0007 55       		pushq	%rbp
 186              		.cfi_def_cfa_offset 32
 187              		.cfi_offset 6, -32
 188 0008 53       		pushq	%rbx
 189              		.cfi_def_cfa_offset 40
 190              		.cfi_offset 3, -40
 191 0009 89F5     		movl	%esi, %ebp
 192 000b 89FB     		movl	%edi, %ebx
 193 000d 4189D4   		movl	%edx, %r12d
 194 0010 4883EC08 		subq	$8, %rsp
 195              		.cfi_def_cfa_offset 48
 196              		.loc 1 37 0
 197 0014 E8000000 		call	_ZL16fl_oval_flat_boxiiiij
 197      00
 198              	.LVL17:
 199              		.loc 1 39 0
 200 0019 4883C408 		addq	$8, %rsp
 201              		.cfi_def_cfa_offset 40
 202              		.loc 1 38 0
 203 001d 4489E9   		movl	%r13d, %ecx
 204 0020 4489E2   		movl	%r12d, %edx
 205 0023 89EE     		movl	%ebp, %esi
 206 0025 89DF     		movl	%ebx, %edi
 207 0027 41B83800 		movl	$56, %r8d
 207      0000
 208              		.loc 1 39 0
 209 002d 5B       		popq	%rbx
 210              		.cfi_def_cfa_offset 32
 211              	.LVL18:
 212 002e 5D       		popq	%rbp
 213              		.cfi_def_cfa_offset 24
 214              	.LVL19:
 215 002f 415C     		popq	%r12
 216              		.cfi_def_cfa_offset 16
 217              	.LVL20:
 218 0031 415D     		popq	%r13
 219              		.cfi_def_cfa_offset 8
 220              	.LVL21:
 221              		.loc 1 38 0
 222 0033 E9000000 		jmp	_ZL13fl_oval_frameiiiij
 222      00
 223              	.LVL22:
 224              		.cfi_endproc
 225              	.LFE470:
 227              		.section	.text.unlikely._ZL11fl_oval_boxiiiij
 228              	.LCOLDE4:
 229              		.section	.text._ZL11fl_oval_boxiiiij
 230              	.LHOTE4:
 231              		.section	.text.unlikely._ZL18fl_oval_shadow_boxiiiij,"ax",@progbits
 232              	.LCOLDB5:
 233              		.section	.text._ZL18fl_oval_shadow_boxiiiij,"ax",@progbits
 234              	.LHOTB5:
 235              		.p2align 4,,15
 237              	_ZL18fl_oval_shadow_boxiiiij:
 238              	.LFB471:
 239              		.loc 1 41 0
 240              		.cfi_startproc
 241              	.LVL23:
 242 0000 4156     		pushq	%r14
 243              		.cfi_def_cfa_offset 16
 244              		.cfi_offset 14, -16
 245 0002 4155     		pushq	%r13
 246              		.cfi_def_cfa_offset 24
 247              		.cfi_offset 13, -24
 248 0004 4589C6   		movl	%r8d, %r14d
 249 0007 4154     		pushq	%r12
 250              		.cfi_def_cfa_offset 32
 251              		.cfi_offset 12, -32
 252 0009 55       		pushq	%rbp
 253              		.cfi_def_cfa_offset 40
 254              		.cfi_offset 6, -40
 255 000a 89F5     		movl	%esi, %ebp
 256 000c 53       		pushq	%rbx
 257              		.cfi_def_cfa_offset 48
 258              		.cfi_offset 3, -48
 259              		.loc 1 42 0
 260 000d 8D7603   		leal	3(%rsi), %esi
 261              	.LVL24:
 262              		.loc 1 41 0
 263 0010 89FB     		movl	%edi, %ebx
 264              		.loc 1 42 0
 265 0012 8D7F03   		leal	3(%rdi), %edi
 266              	.LVL25:
 267              		.loc 1 41 0
 268 0015 4189D4   		movl	%edx, %r12d
 269 0018 4189CD   		movl	%ecx, %r13d
 270              		.loc 1 42 0
 271 001b 41B82700 		movl	$39, %r8d
 271      0000
 272              	.LVL26:
 273 0021 E8000000 		call	_ZL16fl_oval_flat_boxiiiij
 273      00
 274              	.LVL27:
 275              		.loc 1 43 0
 276 0026 4589F0   		movl	%r14d, %r8d
 277 0029 4489E9   		movl	%r13d, %ecx
 278 002c 4489E2   		movl	%r12d, %edx
 279 002f 89EE     		movl	%ebp, %esi
 280 0031 89DF     		movl	%ebx, %edi
 281              		.loc 1 44 0
 282 0033 5B       		popq	%rbx
 283              		.cfi_def_cfa_offset 40
 284              	.LVL28:
 285 0034 5D       		popq	%rbp
 286              		.cfi_def_cfa_offset 32
 287              	.LVL29:
 288 0035 415C     		popq	%r12
 289              		.cfi_def_cfa_offset 24
 290              	.LVL30:
 291 0037 415D     		popq	%r13
 292              		.cfi_def_cfa_offset 16
 293              	.LVL31:
 294 0039 415E     		popq	%r14
 295              		.cfi_def_cfa_offset 8
 296              	.LVL32:
 297              		.loc 1 43 0
 298 003b E9000000 		jmp	_ZL11fl_oval_boxiiiij
 298      00
 299              	.LVL33:
 300              		.cfi_endproc
 301              	.LFE471:
 303              		.section	.text.unlikely._ZL18fl_oval_shadow_boxiiiij
 304              	.LCOLDE5:
 305              		.section	.text._ZL18fl_oval_shadow_boxiiiij
 306              	.LHOTE5:
 307              		.section	.text.unlikely._Z21fl_define_FL_OVAL_BOXv,"ax",@progbits
 308              	.LCOLDB6:
 309              		.section	.text._Z21fl_define_FL_OVAL_BOXv,"ax",@progbits
 310              	.LHOTB6:
 311              		.p2align 4,,15
 312              		.globl	_Z21fl_define_FL_OVAL_BOXv
 314              	_Z21fl_define_FL_OVAL_BOXv:
 315              	.LFB472:
 316              		.loc 1 47 0
 317              		.cfi_startproc
 318 0000 4883EC08 		subq	$8, %rsp
 319              		.cfi_def_cfa_offset 16
 320              		.loc 1 48 0
 321 0004 BE000000 		movl	$_ZL18fl_oval_shadow_boxiiiij, %esi
 321      00
 322 0009 BF1B0000 		movl	$27, %edi
 322      00
 323 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 323      00
 324              	.LVL34:
 325              		.loc 1 49 0
 326 0013 BE000000 		movl	$_ZL13fl_oval_frameiiiij, %esi
 326      00
 327 0018 BF1C0000 		movl	$28, %edi
 327      00
 328 001d E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 328      00
 329              	.LVL35:
 330              		.loc 1 50 0
 331 0022 BE000000 		movl	$_ZL16fl_oval_flat_boxiiiij, %esi
 331      00
 332 0027 BF1D0000 		movl	$29, %edi
 332      00
 333 002c E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 333      00
 334              	.LVL36:
 335              		.loc 1 51 0
 336 0031 BE000000 		movl	$_ZL11fl_oval_boxiiiij, %esi
 336      00
 337 0036 BF1A0000 		movl	$26, %edi
 337      00
 338 003b E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 338      00
 339              	.LVL37:
 340              		.loc 1 53 0
 341 0040 B81A0000 		movl	$26, %eax
 341      00
 342 0045 4883C408 		addq	$8, %rsp
 343              		.cfi_def_cfa_offset 8
 344 0049 C3       		ret
 345              		.cfi_endproc
 346              	.LFE472:
 348              		.section	.text.unlikely._Z21fl_define_FL_OVAL_BOXv
 349              	.LCOLDE6:
 350              		.section	.text._Z21fl_define_FL_OVAL_BOXv
 351              	.LHOTE6:
 352              		.section	.rodata.cst8,"aM",@progbits,8
 353              		.align 8
 354              	.LC0:
 355 0000 00000000 		.long	0
 356 0004 00807640 		.long	1081507840
 357              		.text
 358              	.Letext0:
 359              		.section	.text.unlikely._ZL13fl_oval_frameiiiij
 360              	.Letext_cold0:
 361              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 362              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 363              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 364              		.file 6 "/usr/include/libio.h"
 365              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 366              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 367              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 368              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 369              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 370              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_oval_box.cxx
     /tmp/cct7sAtN.s:13     .text._ZL13fl_oval_frameiiiij:0000000000000000 _ZL13fl_oval_frameiiiij
     /tmp/cct7sAtN.s:94     .text._ZL16fl_oval_flat_boxiiiij:0000000000000000 _ZL16fl_oval_flat_boxiiiij
     /tmp/cct7sAtN.s:173    .text._ZL11fl_oval_boxiiiij:0000000000000000 _ZL11fl_oval_boxiiiij
     /tmp/cct7sAtN.s:237    .text._ZL18fl_oval_shadow_boxiiiij:0000000000000000 _ZL18fl_oval_shadow_boxiiiij
     /tmp/cct7sAtN.s:314    .text._Z21fl_define_FL_OVAL_BOXv:0000000000000000 _Z21fl_define_FL_OVAL_BOXv
     /tmp/cct7sAtN.s:354    .rodata.cst8:0000000000000000 .LC0
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
_ZN2Fl13set_box_colorEj
fl_graphics_driver
_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
