   1              		.file	"Fl_File_Icon.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN12Fl_File_Icon4drawEiiiiji.part.1,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB5:
   7              		.section	.text._ZN12Fl_File_Icon4drawEiiiiji.part.1,"ax",@progbits
   8              	.LHOTB5:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN12Fl_File_Icon4drawEiiiiji.part.1
  12              	.Ltext_cold0:
  13              		.section	.text._ZN12Fl_File_Icon4drawEiiiiji.part.1
  15              	_ZN12Fl_File_Icon4drawEiiiiji.part.1:
  16              	.LFB521:
  17              		.file 1 "fltk-1.3.4-1/src/Fl_File_Icon.cxx"
   1:fltk-1.3.4-1/src/Fl_File_Icon.cxx **** ...
  18              		.loc 1 248 0
  19              		.cfi_startproc
  20              	.LVL0:
  21 0000 4157     		pushq	%r15
  22              		.cfi_def_cfa_offset 16
  23              		.cfi_offset 15, -16
  24 0002 4156     		pushq	%r14
  25              		.cfi_def_cfa_offset 24
  26              		.cfi_offset 14, -24
  27 0004 4189D7   		movl	%edx, %r15d
  28 0007 4155     		pushq	%r13
  29              		.cfi_def_cfa_offset 32
  30              		.cfi_offset 13, -32
  31 0009 4154     		pushq	%r12
  32              		.cfi_def_cfa_offset 40
  33              		.cfi_offset 12, -40
  34 000b 4989FD   		movq	%rdi, %r13
  35 000e 55       		pushq	%rbp
  36              		.cfi_def_cfa_offset 48
  37              		.cfi_offset 6, -48
  38 000f 53       		pushq	%rbx
  39              		.cfi_def_cfa_offset 56
  40              		.cfi_offset 3, -56
  41 0010 4189F4   		movl	%esi, %r12d
  42 0013 89CD     		movl	%ecx, %ebp
  43 0015 4489C3   		movl	%r8d, %ebx
  44 0018 4883EC18 		subq	$24, %rsp
  45              		.cfi_def_cfa_offset 80
  46              		.loc 1 268 0
  47 001c 4439C1   		cmpl	%r8d, %ecx
  48              		.loc 1 248 0
  49 001f 44894C24 		movl	%r9d, 4(%rsp)
  49      04
  50 0024 448B7424 		movl	80(%rsp), %r14d
  50      50
  51              		.loc 1 268 0
  52 0029 660FEFF6 		pxor	%xmm6, %xmm6
  53 002d 0F8D7D04 		jge	.L2
  53      0000
  54 0033 F20F2AF1 		cvtsi2sd	%ecx, %xmm6
  55              	.L3:
  56              	.LBB165:
  57              	.LBB166:
  58              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  59              		.loc 2 326 0
  60 0037 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  60      000000
  61              	.LVL1:
  62 003e F20F1174 		movsd	%xmm6, 8(%rsp)
  62      2408
  63              	.LVL2:
  64 0044 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
  64      00
  65              	.LVL3:
  66              	.LBE166:
  67              	.LBE165:
  68              	.LBB167:
  69              	.LBB168:
  70              	.LBB169:
  71              	.LBB170:
  72              		.file 3 "fltk-1.3.4-1/FL/Fl_Device.H"
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
  73              		.loc 3 331 0
  74 0049 660FEFD2 		pxor	%xmm2, %xmm2
  75 004d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  75      000000
  76 0054 660FEFC0 		pxor	%xmm0, %xmm0
  77 0058 660FEFC9 		pxor	%xmm1, %xmm1
  78 005c F30F2AD5 		cvtsi2ss	%ebp, %xmm2
  79 0060 F30F2AC3 		cvtsi2ss	%ebx, %xmm0
  80 0064 660FEFED 		pxor	%xmm5, %xmm5
  81 0068 F20F1074 		movsd	8(%rsp), %xmm6
  81      2408
  82 006e F20F1025 		movsd	.LC0(%rip), %xmm4
  82      00000000 
  83 0076 F3410F2A 		cvtsi2ss	%r15d, %xmm5
  83      EF
  84 007b F20F101D 		movsd	.LC1(%rip), %xmm3
  84      00000000 
  85 0083 F30F5ACA 		cvtss2sd	%xmm2, %xmm1
  86 0087 660FEFD2 		pxor	%xmm2, %xmm2
  87 008b F30F5AC0 		cvtss2sd	%xmm0, %xmm0
  88 008f F20F5CCE 		subsd	%xmm6, %xmm1
  89 0093 F3410F2A 		cvtsi2ss	%r12d, %xmm2
  89      D4
  90 0098 F20F58C6 		addsd	%xmm6, %xmm0
  91 009c F30F5AED 		cvtss2sd	%xmm5, %xmm5
  92 00a0 F20F59C4 		mulsd	%xmm4, %xmm0
  93 00a4 F20F59E1 		mulsd	%xmm1, %xmm4
  94 00a8 F20F58E8 		addsd	%xmm0, %xmm5
  95 00ac 660F28C3 		movapd	%xmm3, %xmm0
  96 00b0 F30F5AD2 		cvtss2sd	%xmm2, %xmm2
  97 00b4 F20F58E2 		addsd	%xmm2, %xmm4
  98 00b8 660FEFD2 		pxor	%xmm2, %xmm2
  99 00bc 660F28CA 		movapd	%xmm2, %xmm1
 100 00c0 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 100      00
 101              	.LVL4:
 102              	.LBE170:
 103              	.LBE169:
 104              	.LBE168:
 105              	.LBE167:
 106              	.LBB171:
 107              	.LBB172:
 108              	.LBB173:
 109              	.LBB174:
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 110              		.loc 3 327 0
 111 00c5 660FEFED 		pxor	%xmm5, %xmm5
 112 00c9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 112      000000
 113 00d0 F20F1074 		movsd	8(%rsp), %xmm6
 113      2408
 114 00d6 F20F101D 		movsd	.LC3(%rip), %xmm3
 114      00000000 
 115 00de 660F28E5 		movapd	%xmm5, %xmm4
 116 00e2 660F28D5 		movapd	%xmm5, %xmm2
 117 00e6 660F57DE 		xorpd	%xmm6, %xmm3
 118 00ea 660F28CD 		movapd	%xmm5, %xmm1
 119 00ee 660F28C6 		movapd	%xmm6, %xmm0
 120 00f2 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 120      00
 121              	.LVL5:
 122              	.LBE174:
 123              	.LBE173:
 124              	.LBE172:
 125              	.LBE171:
 126              		.loc 1 277 0
 127 00f7 49634514 		movslq	20(%r13), %rax
 128              		.loc 1 276 0
 129 00fb 498B5D20 		movq	32(%r13), %rbx
 130              	.LVL6:
 131              		.loc 1 281 0
 132 00ff 4585F6   		testl	%r14d, %r14d
 133              		.loc 1 277 0
 134 0102 488D2C43 		leaq	(%rbx,%rax,2), %rbp
 135              	.LVL7:
 136              		.loc 1 281 0
 137 0106 0F848403 		je	.L4
 137      0000
 138              	.LVL8:
 139              	.LBB175:
 140              	.LBB176:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 141              		.loc 2 52 0
 142 010c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 142      000000
 143 0113 8B742404 		movl	4(%rsp), %esi
 144 0117 488B07   		movq	(%rdi), %rax
 145 011a FF908800 		call	*136(%rax)
 145      0000
 146              	.LVL9:
 147              	.L7:
 148 0120 F20F101D 		movsd	.LC4(%rip), %xmm3
 148      00000000 
 149              	.LBE176:
 150              	.LBE175:
 151              		.loc 1 286 0
 152 0128 4531ED   		xorl	%r13d, %r13d
 153              	.LVL10:
 154 012b 4839EB   		cmpq	%rbp, %rbx
 155 012e 448B6424 		movl	4(%rsp), %r12d
 155      04
 156              	.LVL11:
 157 0133 F20F115C 		movsd	%xmm3, 8(%rsp)
 157      2408
 158              	.LVL12:
 159 0139 0F833601 		jnb	.L6
 159      0000
 160              	.LVL13:
 161 013f 90       		.p2align 4,,10
 162              		.p2align 3
 163              	.L60:
 164              		.loc 1 287 0
 165 0140 66833B06 		cmpw	$6, (%rbx)
 166 0144 0F873603 		ja	.L10
 166      0000
 167 014a 0FB703   		movzwl	(%rbx), %eax
 168 014d FF24C500 		jmp	*.L12(,%rax,8)
 168      000000
 169              		.section	.rodata._ZN12Fl_File_Icon4drawEiiiiji.part.1,"a",@progbits
 170              		.align 8
 171              		.align 4
 172              	.L12:
 173 0000 00000000 		.quad	.L11
 173      00000000 
 174 0008 00000000 		.quad	.L13
 174      00000000 
 175 0010 00000000 		.quad	.L14
 175      00000000 
 176 0018 00000000 		.quad	.L15
 176      00000000 
 177 0020 00000000 		.quad	.L16
 177      00000000 
 178 0028 00000000 		.quad	.L17
 178      00000000 
 179 0030 00000000 		.quad	.L18
 179      00000000 
 180              		.section	.text._ZN12Fl_File_Icon4drawEiiiiji.part.1
 181              		.p2align 4,,10
 182 0154 0F1F4000 		.p2align 3
 183              	.L17:
 184              	.LVL14:
 185              		.loc 1 377 0
 186 0158 4C8D7B06 		leaq	6(%rbx), %r15
 187              	.LVL15:
 188              	.L62:
 189              	.LBB177:
 190              	.LBB178:
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
 191              		.loc 2 455 0
 192 015c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 192      000000
 193 0163 4989DD   		movq	%rbx, %r13
 194              	.LBE178:
 195              	.LBE177:
 196              		.loc 1 377 0
 197 0166 4C89FB   		movq	%r15, %rbx
 198              	.LVL16:
 199              	.LBB180:
 200              	.LBB179:
 201              		.loc 2 455 0
 202 0169 488B07   		movq	(%rdi), %rax
 203 016c FF903001 		call	*304(%rax)
 203      0000
 204              	.LVL17:
 205              	.L32:
 206              	.LBE179:
 207              	.LBE180:
 208              		.loc 1 286 0
 209 0172 4839DD   		cmpq	%rbx, %rbp
 210 0175 77C9     		ja	.L60
 211              		.loc 1 392 0
 212 0177 4D85ED   		testq	%r13, %r13
 213 017a 0F84F500 		je	.L6
 213      0000
 214              		.loc 1 393 0
 215 0180 410FB745 		movzwl	0(%r13), %eax
 215      00
 216 0185 6683F803 		cmpw	$3, %ax
 217 0189 0F840904 		je	.L37
 217      0000
 218 018f 0F8E2B03 		jle	.L66
 218      0000
 219 0195 6683F804 		cmpw	$4, %ax
 220 0199 0F84E103 		je	.L40
 220      0000
 221 019f 6683F805 		cmpw	$5, %ax
 222 01a3 0F85CC00 		jne	.L6
 222      0000
 223              	.LBB181:
 224              	.LBB182:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 225              		.loc 2 440 0
 226 01a9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 226      000000
 227 01b0 488B07   		movq	(%rdi), %rax
 228 01b3 FF902801 		call	*296(%rax)
 228      0000
 229              	.LVL18:
 230              	.LBE182:
 231              	.LBE181:
 232              		.loc 1 411 0
 233 01b9 410FB775 		movzwl	2(%r13), %esi
 233      02
 234 01be 410FB745 		movzwl	4(%r13), %eax
 234      04
 235 01c3 C1E610   		sall	$16, %esi
 236 01c6 09C6     		orl	%eax, %esi
 237              	.LVL19:
 238              		.loc 1 412 0
 239 01c8 4585F6   		testl	%r14d, %r14d
 240 01cb 0F84DC03 		je	.L42
 240      0000
 241              	.LBB183:
 242              	.LBB184:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 243              		.loc 2 52 0
 244 01d1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 244      000000
 245              	.LBE184:
 246              	.LBE183:
 247              		.loc 1 414 0
 248 01d8 83FEFF   		cmpl	$-1, %esi
 249              	.LBB187:
 250              	.LBB185:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 251              		.loc 2 52 0
 252 01db 488B07   		movq	(%rdi), %rax
 253              	.LBE185:
 254              	.LBE187:
 255              		.loc 1 414 0
 256 01de 0F84FF03 		je	.L67
 256      0000
 257              	.LVL20:
 258              	.LBB188:
 259              	.LBB189:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 260              		.loc 2 52 0
 261 01e4 FF908800 		call	*136(%rax)
 261      0000
 262              	.LVL21:
 263              	.L44:
 264              	.LBE189:
 265              	.LBE188:
 266              	.LBB190:
 267              	.LBB191:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 268              		.loc 2 370 0
 269 01ea 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 269      000000
 270              	.LBE191:
 271              	.LBE190:
 272              		.loc 1 429 0
 273 01f1 498D5D06 		leaq	6(%r13), %rbx
 274              	.LVL22:
 275              	.LBB193:
 276              	.LBB192:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 277              		.loc 2 370 0
 278 01f5 488B07   		movq	(%rdi), %rax
 279 01f8 FF90D000 		call	*208(%rax)
 279      0000
 280              	.LVL23:
 281              	.LBE192:
 282              	.LBE193:
 283              		.loc 1 430 0
 284 01fe 6641837D 		cmpw	$6, 6(%r13)
 284      0606
 285 0204 754C     		jne	.L47
 286 0206 662E0F1F 		.p2align 4,,10
 286      84000000 
 286      0000
 287              		.p2align 3
 288              	.L56:
 289              	.LVL24:
 290              	.LBB194:
 291              	.LBB195:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 292              		.loc 2 379 0
 293 0210 0FBF4304 		movswl	4(%rbx), %eax
 294 0214 660FEFC9 		pxor	%xmm1, %xmm1
 295 0218 660FEFC0 		pxor	%xmm0, %xmm0
 296 021c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 296      000000
 297              	.LBE195:
 298              	.LBE194:
 299              		.loc 1 433 0
 300 0223 4883C306 		addq	$6, %rbx
 301              	.LVL25:
 302              	.LBB197:
 303              	.LBB196:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 304              		.loc 2 379 0
 305 0227 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 306 022b 0FBF43FC 		movswl	-4(%rbx), %eax
 307 022f F20F2AC0 		cvtsi2sd	%eax, %xmm0
 308 0233 488B07   		movq	(%rdi), %rax
 309 0236 F20F590D 		mulsd	.LC4(%rip), %xmm1
 309      00000000 
 310 023e F20F5905 		mulsd	.LC4(%rip), %xmm0
 310      00000000 
 311 0246 FF90E000 		call	*224(%rax)
 311      0000
 312              	.LVL26:
 313              	.LBE196:
 314              	.LBE197:
 315              		.loc 1 430 0
 316 024c 66833B06 		cmpw	$6, (%rbx)
 317 0250 74BE     		je	.L56
 318              	.L47:
 319              	.LBB198:
 320              	.LBB199:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 321              		.loc 2 436 0
 322 0252 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 322      000000
 323 0259 488B07   		movq	(%rdi), %rax
 324 025c FF902001 		call	*288(%rax)
 324      0000
 325              	.LVL27:
 326              	.LBE199:
 327              	.LBE198:
 328              	.LBB200:
 329              	.LBB201:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 330              		.loc 2 52 0
 331 0262 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 331      000000
 332 0269 4489E6   		movl	%r12d, %esi
 333 026c 488B07   		movq	(%rdi), %rax
 334 026f FF908800 		call	*136(%rax)
 334      0000
 335              	.LVL28:
 336              	.L6:
 337              	.LBE201:
 338              	.LBE200:
 339              	.LBB202:
 340              	.LBB203:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 341              		.loc 2 330 0
 342 0275 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 342      000000
 343              	.LBE203:
 344              	.LBE202:
 345              		.loc 1 443 0
 346 027c 4883C418 		addq	$24, %rsp
 347              		.cfi_remember_state
 348              		.cfi_def_cfa_offset 56
 349 0280 5B       		popq	%rbx
 350              		.cfi_def_cfa_offset 48
 351 0281 5D       		popq	%rbp
 352              		.cfi_def_cfa_offset 40
 353              	.LVL29:
 354 0282 415C     		popq	%r12
 355              		.cfi_def_cfa_offset 32
 356              	.LVL30:
 357 0284 415D     		popq	%r13
 358              		.cfi_def_cfa_offset 24
 359 0286 415E     		popq	%r14
 360              		.cfi_def_cfa_offset 16
 361 0288 415F     		popq	%r15
 362              		.cfi_def_cfa_offset 8
 363              	.LBB205:
 364              	.LBB204:
 330:fltk-1.3.4-1/FL/fl_draw.H **** /**
 365              		.loc 2 330 0
 366 028a E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 366      00
 367              	.LVL31:
 368 028f 90       		.p2align 4,,10
 369              		.p2align 3
 370              	.L16:
 371              		.cfi_restore_state
 372              	.LBE204:
 373              	.LBE205:
 374              		.loc 1 371 0
 375 0290 4C8D7B02 		leaq	2(%rbx), %r15
 376              	.LVL32:
 377 0294 E9C3FEFF 		jmp	.L62
 377      FF
 378              	.LVL33:
 379 0299 0F1F8000 		.p2align 4,,10
 379      000000
 380              		.p2align 3
 381              	.L15:
 382              	.LBB206:
 383              	.LBB207:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 384              		.loc 2 370 0
 385 02a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 385      000000
 386              	.LBE207:
 387              	.LBE206:
 388              		.loc 1 365 0
 389 02a7 4C8D7B02 		leaq	2(%rbx), %r15
 390              	.LVL34:
 391              	.LBB210:
 392              	.LBB208:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 393              		.loc 2 370 0
 394 02ab 4989DD   		movq	%rbx, %r13
 395              	.LBE208:
 396              	.LBE210:
 397              		.loc 1 365 0
 398 02ae 4C89FB   		movq	%r15, %rbx
 399              	.LVL35:
 400              	.LBB211:
 401              	.LBB209:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 402              		.loc 2 370 0
 403 02b1 488B07   		movq	(%rdi), %rax
 404 02b4 FF90D000 		call	*208(%rax)
 404      0000
 405              	.LVL36:
 406 02ba E9B3FEFF 		jmp	.L32
 406      FF
 407              	.LVL37:
 408 02bf 90       		.p2align 4,,10
 409              		.p2align 3
 410              	.L14:
 411              	.LBE209:
 412              	.LBE211:
 413              	.LBB212:
 414              	.LBB213:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 415              		.loc 2 366 0
 416 02c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 416      000000
 417              	.LBE213:
 418              	.LBE212:
 419              		.loc 1 359 0
 420 02c7 4C8D7B02 		leaq	2(%rbx), %r15
 421              	.LVL38:
 422              	.LBB216:
 423              	.LBB214:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 424              		.loc 2 366 0
 425 02cb 4989DD   		movq	%rbx, %r13
 426              	.LBE214:
 427              	.LBE216:
 428              		.loc 1 359 0
 429 02ce 4C89FB   		movq	%r15, %rbx
 430              	.LVL39:
 431              	.LBB217:
 432              	.LBB215:
 366:fltk-1.3.4-1/FL/fl_draw.H **** /**
 433              		.loc 2 366 0
 434 02d1 488B07   		movq	(%rdi), %rax
 435 02d4 FF90C800 		call	*200(%rax)
 435      0000
 436              	.LVL40:
 437 02da E993FEFF 		jmp	.L32
 437      FF
 438              	.LVL41:
 439 02df 90       		.p2align 4,,10
 440              		.p2align 3
 441              	.L13:
 442              	.LBE215:
 443              	.LBE217:
 444              		.loc 1 345 0
 445 02e0 440FB763 		movzwl	2(%rbx), %r12d
 445      02
 446              	.LVL42:
 447 02e5 0FB74304 		movzwl	4(%rbx), %eax
 448 02e9 41C1E410 		sall	$16, %r12d
 449 02ed 4109C4   		orl	%eax, %r12d
 450              	.LVL43:
 451              		.loc 1 348 0
 452 02f0 4183FCFF 		cmpl	$-1, %r12d
 453 02f4 440F4464 		cmove	4(%rsp), %r12d
 453      2404
 454              	.LVL44:
 455              		.loc 1 350 0
 456 02fa 4585F6   		testl	%r14d, %r14d
 457 02fd 0F84FD01 		je	.L68
 457      0000
 458              	.L34:
 459              	.LVL45:
 460              	.LBB218:
 461              	.LBB219:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 462              		.loc 2 52 0
 463 0303 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 463      000000
 464 030a 4489E6   		movl	%r12d, %esi
 465              	.LBE219:
 466              	.LBE218:
 467              		.loc 1 354 0
 468 030d 4883C306 		addq	$6, %rbx
 469              	.LVL46:
 470              	.LBB221:
 471              	.LBB220:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 472              		.loc 2 52 0
 473 0311 488B07   		movq	(%rdi), %rax
 474 0314 FF908800 		call	*136(%rax)
 474      0000
 475              	.LVL47:
 476 031a E953FEFF 		jmp	.L32
 476      FF
 477 031f 90       		.p2align 4,,10
 478              		.p2align 3
 479              	.L11:
 480              	.LBE220:
 481              	.LBE221:
 482              		.loc 1 290 0
 483 0320 4D85ED   		testq	%r13, %r13
 484 0323 0F84FD00 		je	.L19
 484      0000
 485              		.loc 1 291 0
 486 0329 410FB745 		movzwl	0(%r13), %eax
 486      00
 487 032e 6683F803 		cmpw	$3, %ax
 488 0332 0F840802 		je	.L20
 488      0000
 489 0338 0F8ED201 		jle	.L69
 489      0000
 490 033e 6683F804 		cmpw	$4, %ax
 491 0342 0F849801 		je	.L23
 491      0000
 492 0348 6683F805 		cmpw	$5, %ax
 493 034c 0F85D400 		jne	.L19
 493      0000
 494              	.LBB222:
 495              	.LBB223:
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
 496              		.loc 2 466 0
 497 0352 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 497      000000
 498 0359 488B07   		movq	(%rdi), %rax
 499 035c FF904001 		call	*320(%rax)
 499      0000
 500              	.LVL48:
 501              	.LBE223:
 502              	.LBE222:
 503              		.loc 1 309 0
 504 0362 410FB775 		movzwl	2(%r13), %esi
 504      02
 505 0367 410FB745 		movzwl	4(%r13), %eax
 505      04
 506 036c C1E610   		sall	$16, %esi
 507 036f 09C6     		orl	%eax, %esi
 508              	.LVL49:
 509              		.loc 1 310 0
 510 0371 4585F6   		testl	%r14d, %r14d
 511 0374 0F85E601 		jne	.L70
 511      0000
 512              		.loc 1 319 0
 513 037a 83FEFF   		cmpl	$-1, %esi
 514              		.loc 1 320 0
 515 037d 8B7C2404 		movl	4(%rsp), %edi
 516              		.loc 1 319 0
 517 0381 7402     		je	.L63
 518              		.loc 1 322 0
 519 0383 89F7     		movl	%esi, %edi
 520              	.L63:
 521 0385 E8000000 		call	_Z11fl_inactivej
 521      00
 522              	.LVL50:
 523              	.LBB224:
 524              	.LBB225:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 525              		.loc 2 52 0
 526 038a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 526      000000
 527 0391 89C6     		movl	%eax, %esi
 528 0393 488B0F   		movq	(%rdi), %rcx
 529 0396 FF918800 		call	*136(%rcx)
 529      0000
 530              	.LVL51:
 531              	.L27:
 532              	.LBE225:
 533              	.LBE224:
 534              	.LBB226:
 535              	.LBB227:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 536              		.loc 2 370 0
 537 039c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 537      000000
 538              	.LBE227:
 539              	.LBE226:
 540              		.loc 1 327 0
 541 03a3 4D8D7D06 		leaq	6(%r13), %r15
 542              	.LBB229:
 543              	.LBB228:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 544              		.loc 2 370 0
 545 03a7 488B07   		movq	(%rdi), %rax
 546 03aa FF90D000 		call	*208(%rax)
 546      0000
 547              	.LVL52:
 548              	.LBE228:
 549              	.LBE229:
 550              		.loc 1 328 0
 551 03b0 6641837D 		cmpw	$6, 6(%r13)
 551      0606
 552 03b6 754B     		jne	.L30
 553 03b8 0F1F8400 		.p2align 4,,10
 553      00000000 
 554              		.p2align 3
 555              	.L55:
 556              	.LVL53:
 557              	.LBB230:
 558              	.LBB231:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 559              		.loc 2 379 0
 560 03c0 410FBF47 		movswl	4(%r15), %eax
 560      04
 561 03c5 660FEFC9 		pxor	%xmm1, %xmm1
 562 03c9 660FEFC0 		pxor	%xmm0, %xmm0
 563 03cd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 563      000000
 564 03d4 F20F107C 		movsd	8(%rsp), %xmm7
 564      2408
 565              	.LBE231:
 566              	.LBE230:
 567              		.loc 1 331 0
 568 03da 4983C706 		addq	$6, %r15
 569              	.LVL54:
 570              	.LBB233:
 571              	.LBB232:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 572              		.loc 2 379 0
 573 03de F20F2AC8 		cvtsi2sd	%eax, %xmm1
 574 03e2 410FBF47 		movswl	-4(%r15), %eax
 574      FC
 575 03e7 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 576 03eb 488B07   		movq	(%rdi), %rax
 577 03ee F20F59CF 		mulsd	%xmm7, %xmm1
 578 03f2 F20F59C7 		mulsd	%xmm7, %xmm0
 579 03f6 FF90E000 		call	*224(%rax)
 579      0000
 580              	.LVL55:
 581              	.LBE232:
 582              	.LBE233:
 583              		.loc 1 328 0
 584 03fc 6641833F 		cmpw	$6, (%r15)
 584      06
 585 0401 74BD     		je	.L55
 586              	.L30:
 587              	.LBB234:
 588              	.LBB235:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 589              		.loc 2 436 0
 590 0403 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 590      000000
 591 040a 488B07   		movq	(%rdi), %rax
 592 040d FF902001 		call	*288(%rax)
 592      0000
 593              	.LVL56:
 594              	.LBE235:
 595              	.LBE234:
 596              	.LBB236:
 597              	.LBB237:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 598              		.loc 2 52 0
 599 0413 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 599      000000
 600 041a 4489E6   		movl	%r12d, %esi
 601 041d 488B07   		movq	(%rdi), %rax
 602 0420 FF908800 		call	*136(%rax)
 602      0000
 603              	.LVL57:
 604              	.L19:
 605              	.LBE237:
 606              	.LBE236:
 607              		.loc 1 340 0
 608 0426 4883C302 		addq	$2, %rbx
 609              	.LVL58:
 610              		.loc 1 339 0
 611 042a 4531ED   		xorl	%r13d, %r13d
 612 042d E940FDFF 		jmp	.L32
 612      FF
 613              	.LVL59:
 614              		.p2align 4,,10
 615 0432 660F1F44 		.p2align 3
 615      0000
 616              	.L18:
 617              		.loc 1 382 0
 618 0438 4D85ED   		testq	%r13, %r13
 619 043b 7438     		je	.L35
 620              	.LVL60:
 621              	.LBB238:
 622              	.LBB239:
 379:fltk-1.3.4-1/FL/fl_draw.H **** /**
 623              		.loc 2 379 0
 624 043d 0FBF4304 		movswl	4(%rbx), %eax
 625 0441 660FEFC9 		pxor	%xmm1, %xmm1
 626 0445 660FEFC0 		pxor	%xmm0, %xmm0
 627 0449 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 627      000000
 628 0450 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 629 0454 0FBF4302 		movswl	2(%rbx), %eax
 630 0458 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 631 045c 488B07   		movq	(%rdi), %rax
 632 045f F20F590D 		mulsd	.LC4(%rip), %xmm1
 632      00000000 
 633 0467 F20F5905 		mulsd	.LC4(%rip), %xmm0
 633      00000000 
 634 046f FF90E000 		call	*224(%rax)
 634      0000
 635              	.LVL61:
 636              	.L35:
 637              	.LBE239:
 638              	.LBE238:
 639              		.loc 1 384 0
 640 0475 4883C306 		addq	$6, %rbx
 641              	.LVL62:
 642 0479 E9F4FCFF 		jmp	.L32
 642      FF
 643 047e 6690     		.p2align 4,,10
 644              		.p2align 3
 645              	.L10:
 646              		.loc 1 388 0
 647 0480 4883C302 		addq	$2, %rbx
 648              	.LVL63:
 649 0484 E9E9FCFF 		jmp	.L32
 649      FF
 650              	.LVL64:
 651 0489 0F1F8000 		.p2align 4,,10
 651      000000
 652              		.p2align 3
 653              	.L4:
 654              		.loc 1 284 0
 655 0490 8B7C2404 		movl	4(%rsp), %edi
 656 0494 E8000000 		call	_Z11fl_inactivej
 656      00
 657              	.LVL65:
 658              	.LBB240:
 659              	.LBB241:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 660              		.loc 2 52 0
 661 0499 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 661      000000
 662 04a0 89C6     		movl	%eax, %esi
 663 04a2 488B17   		movq	(%rdi), %rdx
 664 04a5 FF928800 		call	*136(%rdx)
 664      0000
 665              	.LVL66:
 666 04ab E970FCFF 		jmp	.L7
 666      FF
 667              	.LVL67:
 668              		.p2align 4,,10
 669              		.p2align 3
 670              	.L2:
 671              	.LBE241:
 672              	.LBE240:
 673              		.loc 1 268 0
 674 04b0 F2410F2A 		cvtsi2sd	%r8d, %xmm6
 674      F0
 675 04b5 E97DFBFF 		jmp	.L3
 675      FF
 676              	.LVL68:
 677 04ba 660F1F44 		.p2align 4,,10
 677      0000
 678              		.p2align 3
 679              	.L66:
 680              		.loc 1 393 0
 681 04c0 6683F802 		cmpw	$2, %ax
 682 04c4 0F85ABFD 		jne	.L6
 682      FFFF
 683              	.LBB242:
 684              	.LBB243:
 432:fltk-1.3.4-1/FL/fl_draw.H **** /**
 685              		.loc 2 432 0
 686 04ca 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 686      000000
 687 04d1 488B07   		movq	(%rdi), %rax
 688 04d4 FF901801 		call	*280(%rax)
 688      0000
 689              	.LVL69:
 690 04da E996FDFF 		jmp	.L6
 690      FF
 691 04df 90       		.p2align 4,,10
 692              		.p2align 3
 693              	.L23:
 694              	.LBE243:
 695              	.LBE242:
 696              	.LBB244:
 697              	.LBB245:
 698              		.loc 2 466 0
 699 04e0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 699      000000
 700              	.LBE245:
 701              	.LBE244:
 702              		.loc 1 340 0
 703 04e7 4883C302 		addq	$2, %rbx
 704              	.LVL70:
 705              		.loc 1 339 0
 706 04eb 4531ED   		xorl	%r13d, %r13d
 707              	.LVL71:
 708              	.LBB247:
 709              	.LBB246:
 710              		.loc 2 466 0
 711 04ee 488B07   		movq	(%rdi), %rax
 712 04f1 FF904001 		call	*320(%rax)
 712      0000
 713              	.LVL72:
 714 04f7 E976FCFF 		jmp	.L32
 714      FF
 715              	.LVL73:
 716 04fc 0F1F4000 		.p2align 4,,10
 717              		.p2align 3
 718              	.L68:
 719              	.LBE246:
 720              	.LBE247:
 721              		.loc 1 351 0
 722 0500 4489E7   		movl	%r12d, %edi
 723 0503 E8000000 		call	_Z11fl_inactivej
 723      00
 724              	.LVL74:
 725 0508 4189C4   		movl	%eax, %r12d
 726              	.LVL75:
 727 050b E9F3FDFF 		jmp	.L34
 727      FF
 728              	.LVL76:
 729              		.p2align 4,,10
 730              		.p2align 3
 731              	.L69:
 732              		.loc 1 291 0
 733 0510 6683F802 		cmpw	$2, %ax
 734 0514 0F850CFF 		jne	.L19
 734      FFFF
 735              	.LBB248:
 736              	.LBB249:
 432:fltk-1.3.4-1/FL/fl_draw.H **** /**
 737              		.loc 2 432 0
 738 051a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 738      000000
 739              	.LBE249:
 740              	.LBE248:
 741              		.loc 1 340 0
 742 0521 4883C302 		addq	$2, %rbx
 743              	.LVL77:
 744              		.loc 1 339 0
 745 0525 4531ED   		xorl	%r13d, %r13d
 746              	.LVL78:
 747              	.LBB251:
 748              	.LBB250:
 432:fltk-1.3.4-1/FL/fl_draw.H **** /**
 749              		.loc 2 432 0
 750 0528 488B07   		movq	(%rdi), %rax
 751 052b FF901801 		call	*280(%rax)
 751      0000
 752              	.LVL79:
 753 0531 E93CFCFF 		jmp	.L32
 753      FF
 754              	.LVL80:
 755 0536 662E0F1F 		.p2align 4,,10
 755      84000000 
 755      0000
 756              		.p2align 3
 757              	.L20:
 758              	.LBE250:
 759              	.LBE251:
 760              	.LBB252:
 761              	.LBB253:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 762              		.loc 2 436 0
 763 0540 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 763      000000
 764              	.LBE253:
 765              	.LBE252:
 766              		.loc 1 340 0
 767 0547 4883C302 		addq	$2, %rbx
 768              	.LVL81:
 769              		.loc 1 339 0
 770 054b 4531ED   		xorl	%r13d, %r13d
 771              	.LVL82:
 772              	.LBB255:
 773              	.LBB254:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 774              		.loc 2 436 0
 775 054e 488B07   		movq	(%rdi), %rax
 776 0551 FF902001 		call	*288(%rax)
 776      0000
 777              	.LVL83:
 778 0557 E916FCFF 		jmp	.L32
 778      FF
 779              	.LVL84:
 780 055c 0F1F4000 		.p2align 4,,10
 781              		.p2align 3
 782              	.L70:
 783              	.LBE254:
 784              	.LBE255:
 785              	.LBB256:
 786              	.LBB257:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 787              		.loc 2 52 0
 788 0560 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 788      000000
 789              	.LBE257:
 790              	.LBE256:
 791              		.loc 1 312 0
 792 0567 83FEFF   		cmpl	$-1, %esi
 793              	.LBB260:
 794              	.LBB258:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 795              		.loc 2 52 0
 796 056a 488B07   		movq	(%rdi), %rax
 797              	.LBE258:
 798              	.LBE260:
 799              		.loc 1 312 0
 800 056d 7465     		je	.L71
 801              	.LVL85:
 802              	.LBB261:
 803              	.LBB262:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 804              		.loc 2 52 0
 805 056f FF908800 		call	*136(%rax)
 805      0000
 806              	.LVL86:
 807 0575 E922FEFF 		jmp	.L27
 807      FF
 808 057a 660F1F44 		.p2align 4,,10
 808      0000
 809              		.p2align 3
 810              	.L40:
 811              	.LBE262:
 812              	.LBE261:
 813              	.LBB263:
 814              	.LBB264:
 440:fltk-1.3.4-1/FL/fl_draw.H **** /**
 815              		.loc 2 440 0
 816 0580 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 816      000000
 817 0587 488B07   		movq	(%rdi), %rax
 818 058a FF902801 		call	*296(%rax)
 818      0000
 819              	.LVL87:
 820 0590 E9E0FCFF 		jmp	.L6
 820      FF
 821              		.p2align 4,,10
 822 0595 0F1F00   		.p2align 3
 823              	.L37:
 824              	.LBE264:
 825              	.LBE263:
 826              	.LBB265:
 827              	.LBB266:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 828              		.loc 2 436 0
 829 0598 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 829      000000
 830 059f 488B07   		movq	(%rdi), %rax
 831 05a2 FF902001 		call	*288(%rax)
 831      0000
 832              	.LVL88:
 833 05a8 E9C8FCFF 		jmp	.L6
 833      FF
 834              	.LVL89:
 835              	.L42:
 836              	.LBE266:
 837              	.LBE265:
 838              		.loc 1 421 0
 839 05ad 83FEFF   		cmpl	$-1, %esi
 840              		.loc 1 422 0
 841 05b0 8B7C2404 		movl	4(%rsp), %edi
 842              		.loc 1 421 0
 843 05b4 7402     		je	.L64
 844              		.loc 1 424 0
 845 05b6 89F7     		movl	%esi, %edi
 846              	.L64:
 847 05b8 E8000000 		call	_Z11fl_inactivej
 847      00
 848              	.LVL90:
 849              	.LBB267:
 850              	.LBB268:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 851              		.loc 2 52 0
 852 05bd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 852      000000
 853 05c4 89C6     		movl	%eax, %esi
 854 05c6 488B0F   		movq	(%rdi), %rcx
 855 05c9 FF918800 		call	*136(%rcx)
 855      0000
 856              	.LVL91:
 857 05cf E916FCFF 		jmp	.L44
 857      FF
 858              	.LVL92:
 859              	.L71:
 860              	.LBE268:
 861              	.LBE267:
 862              	.LBB269:
 863              	.LBB259:
 864 05d4 8B742404 		movl	4(%rsp), %esi
 865              	.LVL93:
 866 05d8 FF908800 		call	*136(%rax)
 866      0000
 867              	.LVL94:
 868 05de E9B9FDFF 		jmp	.L27
 868      FF
 869              	.LVL95:
 870              	.L67:
 871              	.LBE259:
 872              	.LBE269:
 873              	.LBB270:
 874              	.LBB186:
 875 05e3 8B742404 		movl	4(%rsp), %esi
 876              	.LVL96:
 877 05e7 FF908800 		call	*136(%rax)
 877      0000
 878              	.LVL97:
 879 05ed E9F8FBFF 		jmp	.L44
 879      FF
 880              	.LBE186:
 881              	.LBE270:
 882              		.cfi_endproc
 883              	.LFE521:
 885              		.section	.text.unlikely._ZN12Fl_File_Icon4drawEiiiiji.part.1
 886              	.LCOLDE5:
 887              		.section	.text._ZN12Fl_File_Icon4drawEiiiiji.part.1
 888              	.LHOTE5:
 889              		.section	.text.unlikely._ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij,"ax",@progbits
 890              		.align 2
 891              	.LCOLDB6:
 892              		.section	.text._ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij,"ax",@progbits
 893              	.LHOTB6:
 894              		.align 2
 895              		.p2align 4,,15
 896              		.globl	_ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij
 898              	_ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij:
 899              	.LFB519:
 900              		.loc 1 470 0
 901              		.cfi_startproc
 902              	.LVL98:
 903              		.loc 1 476 0
 904 0000 488B07   		movq	(%rdi), %rax
 905              	.LVL99:
 906              		.loc 1 477 0
 907 0003 4885C0   		testq	%rax, %rax
 908 0006 7409     		je	.L79
 909              	.LVL100:
 910              	.LBB271:
 911              	.LBB272:
 912              		.loc 1 264 0 discriminator 1
 913 0008 448B4814 		movl	20(%rax), %r9d
 914              	.LVL101:
 915 000c 4585C9   		testl	%r9d, %r9d
 916 000f 7507     		jne	.L80
 917              	.LVL102:
 918              	.L79:
 919              	.LBE272:
 920              	.LBE271:
 921              		.loc 1 478 0
 922 0011 C3       		ret
 923              	.LVL103:
 924              		.p2align 4,,10
 925 0012 660F1F44 		.p2align 3
 925      0000
 926              	.L80:
 927              		.loc 1 470 0
 928 0018 4883EC10 		subq	$16, %rsp
 929              		.cfi_def_cfa_offset 24
 930              	.LBB274:
 931              	.LBB273:
 932 001c 6A01     		pushq	$1
 933              		.cfi_def_cfa_offset 32
 934              	.LVL104:
 935 001e 448B4F20 		movl	32(%rdi), %r9d
 936 0022 4889C7   		movq	%rax, %rdi
 937              	.LVL105:
 938 0025 E8000000 		call	_ZN12Fl_File_Icon4drawEiiiiji.part.1
 938      00
 939              	.LVL106:
 940              	.LBE273:
 941              	.LBE274:
 942              		.loc 1 478 0
 943 002a 4883C418 		addq	$24, %rsp
 944              		.cfi_def_cfa_offset 8
 945 002e C3       		ret
 946              		.cfi_endproc
 947              	.LFE519:
 949              		.section	.text.unlikely._ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij
 950              	.LCOLDE6:
 951              		.section	.text._ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij
 952              	.LHOTE6:
 953              		.section	.text.unlikely._ZN12Fl_File_IconC2EPKciiPs,"ax",@progbits
 954              		.align 2
 955              	.LCOLDB7:
 956              		.section	.text._ZN12Fl_File_IconC2EPKciiPs,"ax",@progbits
 957              	.LHOTB7:
 958              		.align 2
 959              		.p2align 4,,15
 960              		.globl	_ZN12Fl_File_IconC2EPKciiPs
 962              	_ZN12Fl_File_IconC2EPKciiPs:
 963              	.LFB510:
 964              		.loc 1 82 0
 965              		.cfi_startproc
 966              	.LVL107:
 967 0000 53       		pushq	%rbx
 968              		.cfi_def_cfa_offset 16
 969              		.cfi_offset 3, -16
 970 0001 4889FB   		movq	%rdi, %rbx
 971 0004 4883EC10 		subq	$16, %rsp
 972              		.cfi_def_cfa_offset 32
 973              	.LBB275:
 974              		.loc 1 92 0
 975 0008 85C9     		testl	%ecx, %ecx
 976              		.loc 1 88 0
 977 000a 48897708 		movq	%rsi, 8(%rdi)
 978              		.loc 1 89 0
 979 000e 895710   		movl	%edx, 16(%rdi)
 980              		.loc 1 92 0
 981 0011 752D     		jne	.L85
 982              		.loc 1 101 0
 983 0013 C7471400 		movl	$0, 20(%rdi)
 983      000000
 984              		.loc 1 102 0
 985 001a C7471800 		movl	$0, 24(%rdi)
 985      000000
 986              	.LVL108:
 987              	.L83:
 988              		.loc 1 106 0
 989 0021 488B0500 		movq	_ZN12Fl_File_Icon6first_E(%rip), %rax
 989      000000
 990 0028 488903   		movq	%rax, (%rbx)
 991              		.loc 1 107 0
 992 002b 48891D00 		movq	%rbx, _ZN12Fl_File_Icon6first_E(%rip)
 992      000000
 993              	.LBE275:
 994              		.loc 1 108 0
 995 0032 4883C410 		addq	$16, %rsp
 996              		.cfi_remember_state
 997              		.cfi_def_cfa_offset 16
 998 0036 5B       		popq	%rbx
 999              		.cfi_def_cfa_offset 8
 1000              	.LVL109:
 1001 0037 C3       		ret
 1002              	.LVL110:
 1003 0038 0F1F8400 		.p2align 4,,10
 1003      00000000 
 1004              		.p2align 3
 1005              	.L85:
 1006              		.cfi_restore_state
 1007              	.LBB280:
 1008              		.loc 1 95 0
 1009 0040 8D7101   		leal	1(%rcx), %esi
 1010              	.LVL111:
 1011              		.loc 1 94 0
 1012 0043 894F14   		movl	%ecx, 20(%rdi)
 1013 0046 4C894424 		movq	%r8, 8(%rsp)
 1013      08
 1014              		.loc 1 95 0
 1015 004b 894C2404 		movl	%ecx, 4(%rsp)
 1016 004f 897718   		movl	%esi, 24(%rdi)
 1017              		.loc 1 96 0
 1018 0052 4863F6   		movslq	%esi, %rsi
 1019 0055 BF020000 		movl	$2, %edi
 1019      00
 1020 005a E8000000 		call	calloc
 1020      00
 1021              	.LVL112:
 1022              	.LBB276:
 1023              	.LBB277:
 1024              		.file 4 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 1025              		.loc 4 53 0
 1026 005f 48634C24 		movslq	4(%rsp), %rcx
 1026      04
 1027 0064 4C8B4424 		movq	8(%rsp), %r8
 1027      08
 1028 0069 4889C7   		movq	%rax, %rdi
 1029              	.LBE277:
 1030              	.LBE276:
 1031              		.loc 1 96 0
 1032 006c 48894320 		movq	%rax, 32(%rbx)
 1033              	.LVL113:
 1034              	.LBB279:
 1035              	.LBB278:
 1036              		.loc 4 53 0
 1037 0070 4C89C6   		movq	%r8, %rsi
 1038 0073 488D1409 		leaq	(%rcx,%rcx), %rdx
 1039 0077 E8000000 		call	memcpy
 1039      00
 1040              	.LVL114:
 1041 007c EBA3     		jmp	.L83
 1042              	.LBE278:
 1043              	.LBE279:
 1044              	.LBE280:
 1045              		.cfi_endproc
 1046              	.LFE510:
 1048              		.section	.text.unlikely._ZN12Fl_File_IconC2EPKciiPs
 1049              	.LCOLDE7:
 1050              		.section	.text._ZN12Fl_File_IconC2EPKciiPs
 1051              	.LHOTE7:
 1052              		.globl	_ZN12Fl_File_IconC1EPKciiPs
 1053              		.set	_ZN12Fl_File_IconC1EPKciiPs,_ZN12Fl_File_IconC2EPKciiPs
 1054              		.section	.text.unlikely._ZN12Fl_File_IconD2Ev,"ax",@progbits
 1055              		.align 2
 1056              	.LCOLDB8:
 1057              		.section	.text._ZN12Fl_File_IconD2Ev,"ax",@progbits
 1058              	.LHOTB8:
 1059              		.align 2
 1060              		.p2align 4,,15
 1061              		.globl	_ZN12Fl_File_IconD2Ev
 1063              	_ZN12Fl_File_IconD2Ev:
 1064              	.LFB513:
 1065              		.loc 1 115 0
 1066              		.cfi_startproc
 1067              	.LVL115:
 1068              	.LBB281:
 1069              		.loc 1 121 0
 1070 0000 488B1500 		movq	_ZN12Fl_File_Icon6first_E(%rip), %rdx
 1070      000000
 1071              	.LVL116:
 1072              		.loc 1 122 0
 1073 0007 4839FA   		cmpq	%rdi, %rdx
 1074 000a 7445     		je	.L87
 1075 000c 4885D2   		testq	%rdx, %rdx
 1076 000f 750A     		jne	.L88
 1077 0011 EB3E     		jmp	.L87
 1078              	.LVL117:
 1079              		.p2align 4,,10
 1080 0013 0F1F4400 		.p2align 3
 1080      00
 1081              	.L92:
 1082 0018 4889C2   		movq	%rax, %rdx
 1083              	.LVL118:
 1084              	.L88:
 1085              		.loc 1 121 0
 1086 001b 488B02   		movq	(%rdx), %rax
 1087              	.LVL119:
 1088              		.loc 1 122 0
 1089 001e 4839C7   		cmpq	%rax, %rdi
 1090 0021 400F94C6 		sete	%sil
 1091 0025 4885C0   		testq	%rax, %rax
 1092 0028 0F94C1   		sete	%cl
 1093 002b 4008CE   		orb	%cl, %sil
 1094 002e 74E8     		je	.L92
 1095              		.loc 1 126 0
 1096 0030 4885C0   		testq	%rax, %rax
 1097 0033 7406     		je	.L89
 1098              		.loc 1 129 0
 1099 0035 488B00   		movq	(%rax), %rax
 1100              	.LVL120:
 1101 0038 488902   		movq	%rax, (%rdx)
 1102              	.LVL121:
 1103              	.L89:
 1104              		.loc 1 135 0
 1105 003b 8B4718   		movl	24(%rdi), %eax
 1106 003e 85C0     		testl	%eax, %eax
 1107 0040 7506     		jne	.L96
 1108 0042 F3C3     		rep ret
 1109              		.p2align 4,,10
 1110 0044 0F1F4000 		.p2align 3
 1111              	.L96:
 1112              		.loc 1 136 0
 1113 0048 488B7F20 		movq	32(%rdi), %rdi
 1114              	.LVL122:
 1115 004c E9000000 		jmp	free
 1115      00
 1116              	.LVL123:
 1117              	.L87:
 1118              		.loc 1 126 0
 1119 0051 4885D2   		testq	%rdx, %rdx
 1120 0054 74E5     		je	.L89
 1121              		.loc 1 131 0
 1122 0056 488B02   		movq	(%rdx), %rax
 1123 0059 48890500 		movq	%rax, _ZN12Fl_File_Icon6first_E(%rip)
 1123      000000
 1124 0060 EBD9     		jmp	.L89
 1125              	.LBE281:
 1126              		.cfi_endproc
 1127              	.LFE513:
 1129              		.section	.text.unlikely._ZN12Fl_File_IconD2Ev
 1130              	.LCOLDE8:
 1131              		.section	.text._ZN12Fl_File_IconD2Ev
 1132              	.LHOTE8:
 1133              		.globl	_ZN12Fl_File_IconD1Ev
 1134              		.set	_ZN12Fl_File_IconD1Ev,_ZN12Fl_File_IconD2Ev
 1135              		.section	.text.unlikely._ZN12Fl_File_Icon3addEs,"ax",@progbits
 1136              		.align 2
 1137              	.LCOLDB9:
 1138              		.section	.text._ZN12Fl_File_Icon3addEs,"ax",@progbits
 1139              	.LHOTB9:
 1140              		.align 2
 1141              		.p2align 4,,15
 1142              		.globl	_ZN12Fl_File_Icon3addEs
 1144              	_ZN12Fl_File_Icon3addEs:
 1145              	.LFB515:
 1146              		.loc 1 146 0
 1147              		.cfi_startproc
 1148              	.LVL124:
 1149 0000 55       		pushq	%rbp
 1150              		.cfi_def_cfa_offset 16
 1151              		.cfi_offset 6, -16
 1152 0001 53       		pushq	%rbx
 1153              		.cfi_def_cfa_offset 24
 1154              		.cfi_offset 3, -24
 1155 0002 89F5     		movl	%esi, %ebp
 1156 0004 4889FB   		movq	%rdi, %rbx
 1157 0007 4883EC08 		subq	$8, %rsp
 1158              		.cfi_def_cfa_offset 32
 1159              		.loc 1 151 0
 1160 000b 48635714 		movslq	20(%rdi), %rdx
 1161 000f 8B7718   		movl	24(%rdi), %esi
 1162              	.LVL125:
 1163 0012 8D4A01   		leal	1(%rdx), %ecx
 1164 0015 39F1     		cmpl	%esi, %ecx
 1165 0017 7D37     		jge	.L98
 1166 0019 488B4720 		movq	32(%rdi), %rax
 1167              	.LVL126:
 1168              	.L99:
 1169              		.loc 1 167 0
 1170 001d 894B14   		movl	%ecx, 20(%rbx)
 1171 0020 66892C50 		movw	%bp, (%rax,%rdx,2)
 1172              		.loc 1 168 0
 1173 0024 31C9     		xorl	%ecx, %ecx
 1174 0026 48635314 		movslq	20(%rbx), %rdx
 1175 002a 488B4320 		movq	32(%rbx), %rax
 1176 002e 66890C50 		movw	%cx, (%rax,%rdx,2)
 1177              		.loc 1 170 0
 1178 0032 48635314 		movslq	20(%rbx), %rdx
 1179 0036 488B4320 		movq	32(%rbx), %rax
 1180 003a 488D4450 		leaq	-2(%rax,%rdx,2), %rax
 1180      FE
 1181              	.L102:
 1182              		.loc 1 171 0
 1183 003f 4883C408 		addq	$8, %rsp
 1184              		.cfi_remember_state
 1185              		.cfi_def_cfa_offset 24
 1186 0043 5B       		popq	%rbx
 1187              		.cfi_def_cfa_offset 16
 1188              	.LVL127:
 1189 0044 5D       		popq	%rbp
 1190              		.cfi_def_cfa_offset 8
 1191 0045 C3       		ret
 1192              	.LVL128:
 1193 0046 662E0F1F 		.p2align 4,,10
 1193      84000000 
 1193      0000
 1194              		.p2align 3
 1195              	.L98:
 1196              		.cfi_restore_state
 1197              		.loc 1 153 0
 1198 0050 83EE80   		subl	$-128, %esi
 1199              		.loc 1 155 0
 1200 0053 81FE8000 		cmpl	$128, %esi
 1200      0000
 1201              		.loc 1 153 0
 1202 0059 897718   		movl	%esi, 24(%rdi)
 1203              		.loc 1 155 0
 1204 005c 7422     		je	.L105
 1205              		.loc 1 158 0
 1206 005e 488B7F20 		movq	32(%rdi), %rdi
 1207 0062 4863F6   		movslq	%esi, %rsi
 1208 0065 4801F6   		addq	%rsi, %rsi
 1209 0068 E8000000 		call	realloc
 1209      00
 1210              	.LVL129:
 1211              	.L101:
 1212              		.loc 1 160 0
 1213 006d 4885C0   		testq	%rax, %rax
 1214 0070 741A     		je	.L103
 1215 0072 48635314 		movslq	20(%rbx), %rdx
 1216              		.loc 1 163 0
 1217 0076 48894320 		movq	%rax, 32(%rbx)
 1218 007a 8D4A01   		leal	1(%rdx), %ecx
 1219 007d EB9E     		jmp	.L99
 1220              	.LVL130:
 1221 007f 90       		.p2align 4,,10
 1222              		.p2align 3
 1223              	.L105:
 1224              		.loc 1 156 0
 1225 0080 BF000100 		movl	$256, %edi
 1225      00
 1226 0085 E8000000 		call	malloc
 1226      00
 1227              	.LVL131:
 1228 008a EBE1     		jmp	.L101
 1229              	.L103:
 1230              		.loc 1 161 0
 1231 008c 31C0     		xorl	%eax, %eax
 1232              	.LVL132:
 1233 008e EBAF     		jmp	.L102
 1234              		.cfi_endproc
 1235              	.LFE515:
 1237              		.section	.text.unlikely._ZN12Fl_File_Icon3addEs
 1238              	.LCOLDE9:
 1239              		.section	.text._ZN12Fl_File_Icon3addEs
 1240              	.LHOTE9:
 1241              		.section	.text.unlikely._ZN12Fl_File_Icon4findEPKci,"ax",@progbits
 1242              		.align 2
 1243              	.LCOLDB10:
 1244              		.section	.text._ZN12Fl_File_Icon4findEPKci,"ax",@progbits
 1245              	.LHOTB10:
 1246              		.align 2
 1247              		.p2align 4,,15
 1248              		.globl	_ZN12Fl_File_Icon4findEPKci
 1250              	_ZN12Fl_File_Icon4findEPKci:
 1251              	.LFB516:
 1252              		.loc 1 183 0
 1253              		.cfi_startproc
 1254              	.LVL133:
 1255 0000 4155     		pushq	%r13
 1256              		.cfi_def_cfa_offset 16
 1257              		.cfi_offset 13, -16
 1258 0002 4154     		pushq	%r12
 1259              		.cfi_def_cfa_offset 24
 1260              		.cfi_offset 12, -24
 1261 0004 4989FC   		movq	%rdi, %r12
 1262 0007 55       		pushq	%rbp
 1263              		.cfi_def_cfa_offset 32
 1264              		.cfi_offset 6, -32
 1265 0008 53       		pushq	%rbx
 1266              		.cfi_def_cfa_offset 40
 1267              		.cfi_offset 3, -40
 1268 0009 89F5     		movl	%esi, %ebp
 1269 000b 4881ECA8 		subq	$168, %rsp
 1269      000000
 1270              		.cfi_def_cfa_offset 208
 1271              		.loc 1 183 0
 1272 0012 64488B04 		movq	%fs:40, %rax
 1272      25280000 
 1272      00
 1273 001b 48898424 		movq	%rax, 152(%rsp)
 1273      98000000 
 1274 0023 31C0     		xorl	%eax, %eax
 1275              		.loc 1 192 0
 1276 0025 85F6     		testl	%esi, %esi
 1277 0027 0F849B00 		je	.L132
 1277      0000
 1278              	.LVL134:
 1279              	.L107:
 1280              		.loc 1 227 0
 1281 002d 4C89E7   		movq	%r12, %rdi
 1282 0030 E8000000 		call	_Z16fl_filename_namePKc
 1282      00
 1283              	.LVL135:
 1284              		.loc 1 231 0
 1285 0035 488B1D00 		movq	_ZN12Fl_File_Icon6first_E(%rip), %rbx
 1285      000000
 1286              		.loc 1 227 0
 1287 003c 4989C5   		movq	%rax, %r13
 1288              	.LVL136:
 1289              		.loc 1 231 0
 1290 003f 4885DB   		testq	%rbx, %rbx
 1291 0042 7518     		jne	.L112
 1292 0044 EB7A     		jmp	.L108
 1293              	.LVL137:
 1294 0046 662E0F1F 		.p2align 4,,10
 1294      84000000 
 1294      0000
 1295              		.p2align 3
 1296              	.L133:
 1297              		.loc 1 232 0
 1298 0050 39C5     		cmpl	%eax, %ebp
 1299 0052 740F     		je	.L118
 1300              		.loc 1 231 0
 1301 0054 488B1B   		movq	(%rbx), %rbx
 1302              	.LVL138:
 1303 0057 4885DB   		testq	%rbx, %rbx
 1304 005a 7464     		je	.L108
 1305              	.L112:
 1306              		.loc 1 232 0
 1307 005c 8B4310   		movl	16(%rbx), %eax
 1308 005f 85C0     		testl	%eax, %eax
 1309 0061 75ED     		jne	.L133
 1310              	.L118:
 1311              		.loc 1 233 0 discriminator 3
 1312 0063 488B7308 		movq	8(%rbx), %rsi
 1313 0067 4C89E7   		movq	%r12, %rdi
 1314 006a E8000000 		call	_Z17fl_filename_matchPKcS0_
 1314      00
 1315              	.LVL139:
 1316              		.loc 1 232 0 discriminator 3
 1317 006f 85C0     		testl	%eax, %eax
 1318 0071 742D     		je	.L134
 1319              	.LVL140:
 1320              	.L113:
 1321              		.loc 1 239 0
 1322 0073 488B9424 		movq	152(%rsp), %rdx
 1322      98000000 
 1323 007b 64483314 		xorq	%fs:40, %rdx
 1323      25280000 
 1323      00
 1324 0084 4889D8   		movq	%rbx, %rax
 1325 0087 0F857C00 		jne	.L135
 1325      0000
 1326 008d 4881C4A8 		addq	$168, %rsp
 1326      000000
 1327              		.cfi_remember_state
 1328              		.cfi_def_cfa_offset 40
 1329 0094 5B       		popq	%rbx
 1330              		.cfi_def_cfa_offset 32
 1331 0095 5D       		popq	%rbp
 1332              		.cfi_def_cfa_offset 24
 1333              	.LVL141:
 1334 0096 415C     		popq	%r12
 1335              		.cfi_def_cfa_offset 16
 1336              	.LVL142:
 1337 0098 415D     		popq	%r13
 1338              		.cfi_def_cfa_offset 8
 1339              	.LVL143:
 1340 009a C3       		ret
 1341              	.LVL144:
 1342 009b 0F1F4400 		.p2align 4,,10
 1342      00
 1343              		.p2align 3
 1344              	.L134:
 1345              		.cfi_restore_state
 1346              		.loc 1 234 0
 1347 00a0 488B7308 		movq	8(%rbx), %rsi
 1348 00a4 4C89EF   		movq	%r13, %rdi
 1349 00a7 E8000000 		call	_Z17fl_filename_matchPKcS0_
 1349      00
 1350              	.LVL145:
 1351              		.loc 1 233 0
 1352 00ac 85C0     		testl	%eax, %eax
 1353 00ae 75C3     		jne	.L113
 1354              		.loc 1 231 0
 1355 00b0 488B1B   		movq	(%rbx), %rbx
 1356              	.LVL146:
 1357 00b3 4885DB   		testq	%rbx, %rbx
 1358 00b6 75A4     		jne	.L112
 1359 00b8 0F1F8400 		.p2align 4,,10
 1359      00000000 
 1360              		.p2align 3
 1361              	.L108:
 1362              		.loc 1 219 0
 1363 00c0 31DB     		xorl	%ebx, %ebx
 1364              	.LVL147:
 1365 00c2 EBAF     		jmp	.L113
 1366              	.LVL148:
 1367              		.p2align 4,,10
 1368 00c4 0F1F4000 		.p2align 3
 1369              	.L132:
 1370              		.loc 1 202 0
 1371 00c8 4889E6   		movq	%rsp, %rsi
 1372              	.LVL149:
 1373              		.loc 1 219 0
 1374 00cb BD010000 		movl	$1, %ebp
 1374      00
 1375              	.LVL150:
 1376              		.loc 1 202 0
 1377 00d0 E8000000 		call	fl_stat
 1377      00
 1378              	.LVL151:
 1379 00d5 85C0     		testl	%eax, %eax
 1380 00d7 0F8550FF 		jne	.L107
 1380      FFFF
 1381              		.loc 1 204 0
 1382 00dd 8B442418 		movl	24(%rsp), %eax
 1383              		.loc 1 205 0
 1384 00e1 BD050000 		movl	$5, %ebp
 1384      00
 1385              		.loc 1 204 0
 1386 00e6 2500F000 		andl	$61440, %eax
 1386      00
 1387 00eb 3D004000 		cmpl	$16384, %eax
 1387      00
 1388 00f0 0F8437FF 		je	.L107
 1388      FFFF
 1389              		.loc 1 208 0
 1390 00f6 31ED     		xorl	%ebp, %ebp
 1391 00f8 3D001000 		cmpl	$4096, %eax
 1391      00
 1392 00fd 400F94C5 		sete	%bpl
 1393 0101 83C501   		addl	$1, %ebp
 1394 0104 E924FFFF 		jmp	.L107
 1394      FF
 1395              	.LVL152:
 1396              	.L135:
 1397              		.loc 1 239 0
 1398 0109 E8000000 		call	__stack_chk_fail
 1398      00
 1399              	.LVL153:
 1400              		.cfi_endproc
 1401              	.LFE516:
 1403              		.section	.text.unlikely._ZN12Fl_File_Icon4findEPKci
 1404              	.LCOLDE10:
 1405              		.section	.text._ZN12Fl_File_Icon4findEPKci
 1406              	.LHOTE10:
 1407              		.section	.text.unlikely._ZN12Fl_File_Icon4drawEiiiiji,"ax",@progbits
 1408              		.align 2
 1409              	.LCOLDB11:
 1410              		.section	.text._ZN12Fl_File_Icon4drawEiiiiji,"ax",@progbits
 1411              	.LHOTB11:
 1412              		.align 2
 1413              		.p2align 4,,15
 1414              		.globl	_ZN12Fl_File_Icon4drawEiiiiji
 1416              	_ZN12Fl_File_Icon4drawEiiiiji:
 1417              	.LFB517:
 1418              		.loc 1 254 0
 1419              		.cfi_startproc
 1420              	.LVL154:
 1421              		.loc 1 264 0
 1422 0000 8B4714   		movl	20(%rdi), %eax
 1423 0003 85C0     		testl	%eax, %eax
 1424 0005 7409     		je	.L136
 1425 0007 E9000000 		jmp	_ZN12Fl_File_Icon4drawEiiiiji.part.1
 1425      00
 1426              	.LVL155:
 1427 000c 0F1F4000 		.p2align 4,,10
 1428              		.p2align 3
 1429              	.L136:
 1430 0010 F3C3     		rep ret
 1431              		.cfi_endproc
 1432              	.LFE517:
 1434              		.section	.text.unlikely._ZN12Fl_File_Icon4drawEiiiiji
 1435              	.LCOLDE11:
 1436              		.section	.text._ZN12Fl_File_Icon4drawEiiiiji
 1437              	.LHOTE11:
 1438              		.section	.text.unlikely._ZN12Fl_File_Icon5labelEP9Fl_Widget,"ax",@progbits
 1439              		.align 2
 1440              	.LCOLDB12:
 1441              		.section	.text._ZN12Fl_File_Icon5labelEP9Fl_Widget,"ax",@progbits
 1442              	.LHOTB12:
 1443              		.align 2
 1444              		.p2align 4,,15
 1445              		.globl	_ZN12Fl_File_Icon5labelEP9Fl_Widget
 1447              	_ZN12Fl_File_Icon5labelEP9Fl_Widget:
 1448              	.LFB518:
 1449              		.loc 1 451 0
 1450              		.cfi_startproc
 1451              	.LVL156:
 1452 0000 55       		pushq	%rbp
 1453              		.cfi_def_cfa_offset 16
 1454              		.cfi_offset 6, -16
 1455 0001 53       		pushq	%rbx
 1456              		.cfi_def_cfa_offset 24
 1457              		.cfi_offset 3, -24
 1458 0002 4889FD   		movq	%rdi, %rbp
 1459 0005 4889F3   		movq	%rsi, %rbx
 1460              		.loc 1 452 0
 1461 0008 31D2     		xorl	%edx, %edx
 1462 000a BE000000 		movl	$_ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij, %esi
 1462      00
 1463              	.LVL157:
 1464              		.loc 1 451 0
 1465 000f 4883EC08 		subq	$8, %rsp
 1466              		.cfi_def_cfa_offset 32
 1467              		.loc 1 452 0
 1468 0013 BF060000 		movl	$6, %edi
 1468      00
 1469              	.LVL158:
 1470 0018 E8000000 		call	_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 1470      00
 1471              	.LVL159:
 1472              	.LBB282:
 1473              	.LBB283:
 1474              		.file 5 "fltk-1.3.4-1/FL/Fl_Widget.H"
   1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be documented.
  29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by far the most used) */
  49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk widgets */
  51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the widget */
  53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long data value */
  55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed graphics label.
  58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will become a widget by itself.
  60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplication by handling labels in
  61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We also provide an easy
  62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html or vector graphics.
  63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this release.
  64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
  84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
  85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
  86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
  87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
  90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
  91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is not public.
  92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
  93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent(), or argument() 
  95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are as fast and small 
  96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise noted, the property 
  97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also trivial inline 
  98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. It is up to the 
  99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all derived widgets have a 
 129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), y(), w(), h(), and 
 130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to the enclosing window
 133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L);
 137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_visible_focus()
 154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't receive focus, and is disabled but potentia
 157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not drawn, but can receive a few special event
 158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoration (Fl_Window)
 160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window manager position the window (Fl_Window)
 161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering toolbar window (Fl_Window)
 162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a shortcut we need to draw
 163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value changed
 164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top (Fl_Window)
 165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus navigation if the widget can have the
 166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is internally copied, its destruction is ha
 167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within this widget will be clipped (Fl_Group)
 168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup window, dismissed by clicking outside (Fl_
 169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, transparent to events, and dismissed easi
 170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking input to all other winows (Fl_Window)
 171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a hardware overlay plane (Fl_Menu_Window)
 172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget relative to the parent group, not to th
 173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is internally copied, its destruction is 
 174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (Fl_Window)
 175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS platform, pressing and holding a key on th
 176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party extensions
 178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party extensions
 179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party extensions
 180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Color c) const;
 184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) const;
 188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almost always want to 
 195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy all of the child widgets 
 196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the widget from its parent
 199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule redrawing whenever
 205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possible, call redraw()
 206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <I>from within your
 211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, you can do it
 212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_Scrollbar
 216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but instead let FLTK do 
 223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return 0 if the 
 226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle() method in 
 229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit events that you 
 230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the callee retval.
 231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with copy_label().
 240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widget's label
 242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL) ? 1 : 0);}
 248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this method, because it
 259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and removing methods,
 260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_Group.
 261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(Fl_Widget*) instead.
 263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, use Fl_Group::add()
 265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms compatibility
 268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to decide if a widget
 271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() really used in a way
 272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may implement its 
 304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e not
 305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the parent widget 
 306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to update the 
 307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more often 
 310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of a widget 
 311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculations.
 312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h()), 
 314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H).
 315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent window 
 317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h()).
 328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent window 
 330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or inside the widget. 
 352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the label inside 
 353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of the widget.
 367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default depends on the 
 368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is either an index into 
 382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value generated using 
 383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Use Fl::set_color()
 386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_color(Fl_Color)
 389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Color)
 395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility and is usually 
 400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although some widgets 
 401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both colors at once 
 402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selection colors. 
 411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=sel;}
 416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. The passed pointer 
 426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em not copied), so if 
 427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make sure the buffer is 
 428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method can be used 
 429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the label 
 437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever you assign
 440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a; label_.value = b;}
 1475              		.loc 5 450 0
 1476 001d 48896B30 		movq	%rbp, 48(%rbx)
 1477              	.LVL160:
 1478 0021 C6435806 		movb	$6, 88(%rbx)
 1479              	.LBE283:
 1480              	.LBE282:
 1481              		.loc 1 454 0
 1482 0025 4883C408 		addq	$8, %rsp
 1483              		.cfi_def_cfa_offset 24
 1484 0029 5B       		popq	%rbx
 1485              		.cfi_def_cfa_offset 16
 1486              	.LVL161:
 1487 002a 5D       		popq	%rbp
 1488              		.cfi_def_cfa_offset 8
 1489              	.LVL162:
 1490 002b C3       		ret
 1491              		.cfi_endproc
 1492              	.LFE518:
 1494              		.section	.text.unlikely._ZN12Fl_File_Icon5labelEP9Fl_Widget
 1495              	.LCOLDE12:
 1496              		.section	.text._ZN12Fl_File_Icon5labelEP9Fl_Widget
 1497              	.LHOTE12:
 1498              		.globl	_ZN12Fl_File_Icon6first_E
 1499              		.section	.bss._ZN12Fl_File_Icon6first_E,"aw",@nobits
 1500              		.align 8
 1503              	_ZN12Fl_File_Icon6first_E:
 1504 0000 00000000 		.zero	8
 1504      00000000 
 1505              		.section	.rodata.cst8,"aM",@progbits,8
 1506              		.align 8
 1507              	.LC0:
 1508 0000 00000000 		.long	0
 1509 0004 0000E03F 		.long	1071644672
 1510              		.align 8
 1511              	.LC1:
 1512 0008 00000000 		.long	0
 1513 000c 0000F03F 		.long	1072693248
 1514              		.section	.rodata.cst16,"aM",@progbits,16
 1515              		.align 16
 1516              	.LC3:
 1517 0000 00000000 		.long	0
 1518 0004 00000080 		.long	-2147483648
 1519 0008 00000000 		.long	0
 1520 000c 00000000 		.long	0
 1521              		.section	.rodata.cst8
 1522              		.align 8
 1523              	.LC4:
 1524 0010 2D431CEB 		.long	3944497965
 1525 0014 E2361A3F 		.long	1058682594
 1526              		.text
 1527              	.Letext0:
 1528              		.section	.text.unlikely._ZN12Fl_File_Icon4drawEiiiiji.part.1
 1529              	.Letext_cold0:
 1530              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1531              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1532              		.file 8 "/usr/include/libio.h"
 1533              		.file 9 "/usr/include/time.h"
 1534              		.file 10 "fltk-1.3.4-1/FL/fl_types.h"
 1535              		.file 11 "/usr/include/x86_64-linux-gnu/bits/stat.h"
 1536              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
 1537              		.file 13 "fltk-1.3.4-1/FL/Fl.H"
 1538              		.file 14 "fltk-1.3.4-1/FL/Fl_Image.H"
 1539              		.file 15 "fltk-1.3.4-1/FL/Fl_File_Icon.H"
 1540              		.file 16 "/usr/include/stdio.h"
 1541              		.file 17 "/usr/include/stdlib.h"
 1542              		.file 18 "fltk-1.3.4-1/FL/filename.H"
 1543              		.file 19 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_File_Icon.cxx
     /tmp/ccRDuiGG.s:15     .text._ZN12Fl_File_Icon4drawEiiiiji.part.1:0000000000000000 _ZN12Fl_File_Icon4drawEiiiiji.part.1
     /tmp/ccRDuiGG.s:898    .text._ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij:0000000000000000 _ZN12Fl_File_Icon9labeltypeEPK8Fl_Labeliiiij
     /tmp/ccRDuiGG.s:962    .text._ZN12Fl_File_IconC2EPKciiPs:0000000000000000 _ZN12Fl_File_IconC2EPKciiPs
     /tmp/ccRDuiGG.s:1503   .bss._ZN12Fl_File_Icon6first_E:0000000000000000 _ZN12Fl_File_Icon6first_E
     /tmp/ccRDuiGG.s:962    .text._ZN12Fl_File_IconC2EPKciiPs:0000000000000000 _ZN12Fl_File_IconC1EPKciiPs
     /tmp/ccRDuiGG.s:1063   .text._ZN12Fl_File_IconD2Ev:0000000000000000 _ZN12Fl_File_IconD2Ev
     /tmp/ccRDuiGG.s:1063   .text._ZN12Fl_File_IconD2Ev:0000000000000000 _ZN12Fl_File_IconD1Ev
     /tmp/ccRDuiGG.s:1144   .text._ZN12Fl_File_Icon3addEs:0000000000000000 _ZN12Fl_File_Icon3addEs
     /tmp/ccRDuiGG.s:1250   .text._ZN12Fl_File_Icon4findEPKci:0000000000000000 _ZN12Fl_File_Icon4findEPKci
     /tmp/ccRDuiGG.s:1416   .text._ZN12Fl_File_Icon4drawEiiiiji:0000000000000000 _ZN12Fl_File_Icon4drawEiiiiji
     /tmp/ccRDuiGG.s:1447   .text._ZN12Fl_File_Icon5labelEP9Fl_Widget:0000000000000000 _ZN12Fl_File_Icon5labelEP9Fl_Widget
     /tmp/ccRDuiGG.s:1507   .rodata.cst8:0000000000000000 .LC0
     /tmp/ccRDuiGG.s:1511   .rodata.cst8:0000000000000008 .LC1
     /tmp/ccRDuiGG.s:1516   .rodata.cst16:0000000000000000 .LC3
     /tmp/ccRDuiGG.s:1523   .rodata.cst8:0000000000000010 .LC4
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
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.stddef.h.401.7dfff676fcc31e4ba811117c262087d2
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.errno.h.21.234adedf0a908ba1512bb39778d0c13a
                           .group:0000000000000000 wm4.errnobase.h.2.3ec77d86fa6012e288bd2eb28191253f
                           .group:0000000000000000 wm4.errno.h.6.6707cf97e82b783d19d3d077217dd04e
                           .group:0000000000000000 wm4.errno.h.27.5f4b88dc9507696aecbaa61ffb4828e0
                           .group:0000000000000000 wm4.errno.h.36.afe6c2702b2ada9447adc06c6378ccc9
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.unistd.h.271.5bc8a6a5109e709e04c40b754b201552
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade
                           .group:0000000000000000 wm4.unistd.h.1078.c7eeb0fd3115c9566fb6865aa19af17f
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
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
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94

UNDEFINED SYMBOLS
fl_graphics_driver
_ZN18Fl_Graphics_Driver11push_matrixEv
_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
_ZN18Fl_Graphics_Driver10pop_matrixEv
_Z11fl_inactivej
calloc
memcpy
free
realloc
malloc
_Z16fl_filename_namePKc
_Z17fl_filename_matchPKcS0_
fl_stat
__stack_chk_fail
_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
