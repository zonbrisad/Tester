   1              		.file	"fl_shadow_box.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL15fl_shadow_frameiiiij,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL15fl_shadow_frameiiiij,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL15fl_shadow_frameiiiij
  10              	.Ltext_cold0:
  11              		.section	.text._ZL15fl_shadow_frameiiiij
  13              	_ZL15fl_shadow_frameiiiij:
  14              	.LFB468:
  15              		.file 1 "fltk-1.3.4-1/src/fl_shadow_box.cxx"
   1:fltk-1.3.4-1/src/fl_shadow_box.cxx **** ...
  16              		.loc 1 24 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4157     		pushq	%r15
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 15, -16
  22 0002 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 14, -24
  25 0004 4589C7   		movl	%r8d, %r15d
  26 0007 4155     		pushq	%r13
  27              		.cfi_def_cfa_offset 32
  28              		.cfi_offset 13, -32
  29 0009 4154     		pushq	%r12
  30              		.cfi_def_cfa_offset 40
  31              		.cfi_offset 12, -40
  32 000b 4189D6   		movl	%edx, %r14d
  33 000e 55       		pushq	%rbp
  34              		.cfi_def_cfa_offset 48
  35              		.cfi_offset 6, -48
  36 000f 53       		pushq	%rbx
  37              		.cfi_def_cfa_offset 56
  38              		.cfi_offset 3, -56
  39 0010 89FD     		movl	%edi, %ebp
  40 0012 4189F4   		movl	%esi, %r12d
  41 0015 89CB     		movl	%ecx, %ebx
  42              	.LBB12:
  43              	.LBB13:
  44              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  45              		.loc 2 52 0
  46 0017 BE270000 		movl	$39, %esi
  46      00
  47              	.LVL1:
  48              	.LBE13:
  49              	.LBE12:
  50              		.loc 1 24 0
  51 001c 4883EC08 		subq	$8, %rsp
  52              		.cfi_def_cfa_offset 64
  53              	.LBB16:
  54              	.LBB14:
  55              		.loc 2 52 0
  56 0020 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  56      000000
  57              	.LVL2:
  58              	.LBE14:
  59              	.LBE16:
  60              		.loc 1 26 0
  61 0027 458D6EFD 		leal	-3(%r14), %r13d
  62              	.LBB17:
  63              	.LBB15:
  64              		.loc 2 52 0
  65 002b 488B07   		movq	(%rdi), %rax
  66 002e FF908800 		call	*136(%rax)
  66      0000
  67              	.LVL3:
  68              	.LBE15:
  69              	.LBE17:
  70              	.LBB18:
  71              	.LBB19:
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
  72              		.loc 2 206 0
  73 0034 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  73      000000
  74 003b 418D541C 		leal	-3(%r12,%rbx), %edx
  74      FD
  75              	.LVL4:
  76 0040 8D7503   		leal	3(%rbp), %esi
  77              	.LVL5:
  78 0043 4489E9   		movl	%r13d, %ecx
  79 0046 41B80300 		movl	$3, %r8d
  79      0000
  80              	.LBE19:
  81              	.LBE18:
  82              		.loc 1 27 0
  83 004c 83EB03   		subl	$3, %ebx
  84              	.LVL6:
  85              	.LBB21:
  86              	.LBB20:
  87              		.loc 2 206 0
  88 004f 488B07   		movq	(%rdi), %rax
  89 0052 FF5020   		call	*32(%rax)
  90              	.LVL7:
  91              	.LBE20:
  92              	.LBE21:
  93              	.LBB22:
  94              	.LBB23:
  95 0055 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  95      000000
  96 005c 428D7435 		leal	-3(%rbp,%r14), %esi
  96      FD
  97              	.LVL8:
  98 0061 418D5424 		leal	3(%r12), %edx
  98      03
  99              	.LVL9:
 100 0066 4189D8   		movl	%ebx, %r8d
 101 0069 B9030000 		movl	$3, %ecx
 101      00
 102 006e 488B07   		movq	(%rdi), %rax
 103 0071 FF5020   		call	*32(%rax)
 104              	.LVL10:
 105              	.LBE23:
 106              	.LBE22:
 107              		.loc 1 28 0
 108 0074 4489FF   		movl	%r15d, %edi
 109 0077 E8000000 		call	_ZN2Fl13set_box_colorEj
 109      00
 110              	.LVL11:
 111              	.LBB24:
 112              	.LBB25:
 201:fltk-1.3.4-1/FL/fl_draw.H **** 
 113              		.loc 2 201 0
 114 007c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 114      000000
 115 0083 4189D8   		movl	%ebx, %r8d
 116 0086 4489E9   		movl	%r13d, %ecx
 117 0089 4489E2   		movl	%r12d, %edx
 118 008c 89EE     		movl	%ebp, %esi
 119 008e 488B07   		movq	(%rdi), %rax
 120 0091 488B4018 		movq	24(%rax), %rax
 121              	.LBE25:
 122              	.LBE24:
 123              		.loc 1 30 0
 124 0095 4883C408 		addq	$8, %rsp
 125              		.cfi_def_cfa_offset 56
 126 0099 5B       		popq	%rbx
 127              		.cfi_def_cfa_offset 48
 128              	.LVL12:
 129 009a 5D       		popq	%rbp
 130              		.cfi_def_cfa_offset 40
 131              	.LVL13:
 132 009b 415C     		popq	%r12
 133              		.cfi_def_cfa_offset 32
 134              	.LVL14:
 135 009d 415D     		popq	%r13
 136              		.cfi_def_cfa_offset 24
 137              	.LVL15:
 138 009f 415E     		popq	%r14
 139              		.cfi_def_cfa_offset 16
 140              	.LVL16:
 141 00a1 415F     		popq	%r15
 142              		.cfi_def_cfa_offset 8
 143              	.LVL17:
 144              	.LBB27:
 145              	.LBB26:
 201:fltk-1.3.4-1/FL/fl_draw.H **** 
 146              		.loc 2 201 0
 147 00a3 FFE0     		jmp	*%rax
 148              	.LVL18:
 149              	.LBE26:
 150              	.LBE27:
 151              		.cfi_endproc
 152              	.LFE468:
 154              		.section	.text.unlikely._ZL15fl_shadow_frameiiiij
 155              	.LCOLDE0:
 156              		.section	.text._ZL15fl_shadow_frameiiiij
 157              	.LHOTE0:
 158              		.section	.text.unlikely._ZL13fl_shadow_boxiiiij,"ax",@progbits
 159              	.LCOLDB1:
 160              		.section	.text._ZL13fl_shadow_boxiiiij,"ax",@progbits
 161              	.LHOTB1:
 162              		.p2align 4,,15
 164              	_ZL13fl_shadow_boxiiiij:
 165              	.LFB469:
 166              		.loc 1 32 0
 167              		.cfi_startproc
 168              	.LVL19:
 169 0000 4155     		pushq	%r13
 170              		.cfi_def_cfa_offset 16
 171              		.cfi_offset 13, -16
 172 0002 4154     		pushq	%r12
 173              		.cfi_def_cfa_offset 24
 174              		.cfi_offset 12, -24
 175 0004 4189CD   		movl	%ecx, %r13d
 176 0007 55       		pushq	%rbp
 177              		.cfi_def_cfa_offset 32
 178              		.cfi_offset 6, -32
 179 0008 53       		pushq	%rbx
 180              		.cfi_def_cfa_offset 40
 181              		.cfi_offset 3, -40
 182 0009 89FB     		movl	%edi, %ebx
 183              		.loc 1 33 0
 184 000b 4489C7   		movl	%r8d, %edi
 185              	.LVL20:
 186              		.loc 1 32 0
 187 000e 89F5     		movl	%esi, %ebp
 188 0010 4189D4   		movl	%edx, %r12d
 189 0013 4883EC08 		subq	$8, %rsp
 190              		.cfi_def_cfa_offset 48
 191              		.loc 1 33 0
 192 0017 E8000000 		call	_ZN2Fl13set_box_colorEj
 192      00
 193              	.LVL21:
 194              	.LBB28:
 195              	.LBB29:
 196              		.loc 2 206 0
 197 001c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 197      000000
 198 0023 418D4C24 		leal	-5(%r12), %ecx
 198      FB
 199              	.LVL22:
 200 0028 8D5501   		leal	1(%rbp), %edx
 201              	.LVL23:
 202 002b 8D7301   		leal	1(%rbx), %esi
 203              	.LVL24:
 204 002e 458D45FB 		leal	-5(%r13), %r8d
 205              	.LVL25:
 206 0032 488B07   		movq	(%rdi), %rax
 207 0035 FF5020   		call	*32(%rax)
 208              	.LVL26:
 209              	.LBE29:
 210              	.LBE28:
 211              		.loc 1 36 0
 212 0038 4883C408 		addq	$8, %rsp
 213              		.cfi_def_cfa_offset 40
 214              		.loc 1 35 0
 215 003c 4489E9   		movl	%r13d, %ecx
 216 003f 4489E2   		movl	%r12d, %edx
 217 0042 89EE     		movl	%ebp, %esi
 218 0044 89DF     		movl	%ebx, %edi
 219 0046 41B82000 		movl	$32, %r8d
 219      0000
 220              		.loc 1 36 0
 221 004c 5B       		popq	%rbx
 222              		.cfi_def_cfa_offset 32
 223              	.LVL27:
 224 004d 5D       		popq	%rbp
 225              		.cfi_def_cfa_offset 24
 226              	.LVL28:
 227 004e 415C     		popq	%r12
 228              		.cfi_def_cfa_offset 16
 229              	.LVL29:
 230 0050 415D     		popq	%r13
 231              		.cfi_def_cfa_offset 8
 232              	.LVL30:
 233              		.loc 1 35 0
 234 0052 E9000000 		jmp	_ZL15fl_shadow_frameiiiij
 234      00
 235              	.LVL31:
 236              		.cfi_endproc
 237              	.LFE469:
 239              		.section	.text.unlikely._ZL13fl_shadow_boxiiiij
 240              	.LCOLDE1:
 241              		.section	.text._ZL13fl_shadow_boxiiiij
 242              	.LHOTE1:
 243              		.section	.text.unlikely._Z23fl_define_FL_SHADOW_BOXv,"ax",@progbits
 244              	.LCOLDB2:
 245              		.section	.text._Z23fl_define_FL_SHADOW_BOXv,"ax",@progbits
 246              	.LHOTB2:
 247              		.p2align 4,,15
 248              		.globl	_Z23fl_define_FL_SHADOW_BOXv
 250              	_Z23fl_define_FL_SHADOW_BOXv:
 251              	.LFB470:
 252              		.loc 1 39 0
 253              		.cfi_startproc
 254 0000 4883EC08 		subq	$8, %rsp
 255              		.cfi_def_cfa_offset 16
 256              		.loc 1 40 0
 257 0004 BE000000 		movl	$_ZL15fl_shadow_frameiiiij, %esi
 257      00
 258 0009 BF110000 		movl	$17, %edi
 258      00
 259 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 259      00
 260              	.LVL32:
 261              		.loc 1 41 0
 262 0013 BE000000 		movl	$_ZL13fl_shadow_boxiiiij, %esi
 262      00
 263 0018 BF0F0000 		movl	$15, %edi
 263      00
 264 001d E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 264      00
 265              	.LVL33:
 266              		.loc 1 43 0
 267 0022 B80F0000 		movl	$15, %eax
 267      00
 268 0027 4883C408 		addq	$8, %rsp
 269              		.cfi_def_cfa_offset 8
 270 002b C3       		ret
 271              		.cfi_endproc
 272              	.LFE470:
 274              		.section	.text.unlikely._Z23fl_define_FL_SHADOW_BOXv
 275              	.LCOLDE2:
 276              		.section	.text._Z23fl_define_FL_SHADOW_BOXv
 277              	.LHOTE2:
 278              		.text
 279              	.Letext0:
 280              		.section	.text.unlikely._ZL15fl_shadow_frameiiiij
 281              	.Letext_cold0:
 282              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 283              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 284              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 285              		.file 6 "/usr/include/libio.h"
 286              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 287              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 288              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 289              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 290              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 291              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_shadow_box.cxx
     /tmp/cc5YsLVQ.s:13     .text._ZL15fl_shadow_frameiiiij:0000000000000000 _ZL15fl_shadow_frameiiiij
     /tmp/cc5YsLVQ.s:164    .text._ZL13fl_shadow_boxiiiij:0000000000000000 _ZL13fl_shadow_boxiiiij
     /tmp/cc5YsLVQ.s:250    .text._Z23fl_define_FL_SHADOW_BOXv:0000000000000000 _Z23fl_define_FL_SHADOW_BOXv
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
_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
