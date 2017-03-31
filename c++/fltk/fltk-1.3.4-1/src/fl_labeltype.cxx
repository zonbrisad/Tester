   1              		.file	"fl_labeltype.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z11fl_no_labelPK8Fl_Labeliiiij,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z11fl_no_labelPK8Fl_Labeliiiij,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z11fl_no_labelPK8Fl_Labeliiiij
  10              	.Ltext_cold0:
  11              		.section	.text._Z11fl_no_labelPK8Fl_Labeliiiij
  12              		.globl	_Z11fl_no_labelPK8Fl_Labeliiiij
  14              	_Z11fl_no_labelPK8Fl_Labeliiiij:
  15              	.LFB468:
  16              		.file 1 "fltk-1.3.4-1/src/fl_labeltype.cxx"
   1:fltk-1.3.4-1/src/fl_labeltype.cxx **** ...
  17              		.loc 1 30 0
  18              		.cfi_startproc
  19 0000 F3C3     		rep ret
  20              		.cfi_endproc
  21              	.LFE468:
  23              		.section	.text.unlikely._Z11fl_no_labelPK8Fl_Labeliiiij
  24              	.LCOLDE0:
  25              		.section	.text._Z11fl_no_labelPK8Fl_Labeliiiij
  26              	.LHOTE0:
  27              		.section	.text.unlikely._Z15fl_normal_labelPK8Fl_Labeliiiij,"ax",@progbits
  28              	.LCOLDB1:
  29              		.section	.text._Z15fl_normal_labelPK8Fl_Labeliiiij,"ax",@progbits
  30              	.LHOTB1:
  31              		.p2align 4,,15
  32              		.globl	_Z15fl_normal_labelPK8Fl_Labeliiiij
  34              	_Z15fl_normal_labelPK8Fl_Labeliiiij:
  35              	.LFB469:
  36              		.loc 1 34 0
  37              		.cfi_startproc
  38              	.LVL0:
  39              		.loc 1 34 0
  40 0000 4155     		pushq	%r13
  41              		.cfi_def_cfa_offset 16
  42              		.cfi_offset 13, -16
  43 0002 4154     		pushq	%r12
  44              		.cfi_def_cfa_offset 24
  45              		.cfi_offset 12, -24
  46 0004 4189CD   		movl	%ecx, %r13d
  47 0007 55       		pushq	%rbp
  48              		.cfi_def_cfa_offset 32
  49              		.cfi_offset 6, -32
  50 0008 53       		pushq	%rbx
  51              		.cfi_def_cfa_offset 40
  52              		.cfi_offset 3, -40
  53 0009 4889FB   		movq	%rdi, %rbx
  54              	.LVL1:
  55 000c 89F5     		movl	%esi, %ebp
  56 000e 4189D4   		movl	%edx, %r12d
  57 0011 4883EC18 		subq	$24, %rsp
  58              		.cfi_def_cfa_offset 64
  59              	.LBB34:
  60              	.LBB35:
  61              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  62              		.loc 2 509 0
  63 0015 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  63      000000
  64              	.LVL2:
  65 001c 8B531C   		movl	28(%rbx), %edx
  66              	.LVL3:
  67              	.LBE35:
  68              	.LBE34:
  69              		.loc 1 34 0
  70 001f 44894424 		movl	%r8d, 12(%rsp)
  70      0C
  71 0024 44894C24 		movl	%r9d, 8(%rsp)
  71      08
  72              	.LBB37:
  73              	.LBB36:
  74              		.loc 2 509 0
  75 0029 8B7318   		movl	24(%rbx), %esi
  76              	.LVL4:
  77 002c 488B07   		movq	(%rdi), %rax
  78 002f FF90B001 		call	*432(%rax)
  78      0000
  79              	.LVL5:
  80              	.LBE36:
  81              	.LBE37:
  82              	.LBB38:
  83              	.LBB39:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
  84              		.loc 2 52 0
  85 0035 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  85      000000
  86 003c 8B7320   		movl	32(%rbx), %esi
  87 003f 488B07   		movq	(%rdi), %rax
  88 0042 FF908800 		call	*136(%rax)
  88      0000
  89              	.LVL6:
  90              	.LBE39:
  91              	.LBE38:
  92              		.loc 1 37 0
  93 0048 6A01     		pushq	$1
  94              		.cfi_def_cfa_offset 72
  95 004a 488B3B   		movq	(%rbx), %rdi
  96 004d 4489E9   		movl	%r13d, %ecx
  97 0050 FF7308   		pushq	8(%rbx)
  98              		.cfi_def_cfa_offset 80
  99 0053 448B4C24 		movl	24(%rsp), %r9d
  99      18
 100 0058 4489E2   		movl	%r12d, %edx
 101 005b 448B4424 		movl	28(%rsp), %r8d
 101      1C
 102 0060 89EE     		movl	%ebp, %esi
 103 0062 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 103      00
 104              	.LVL7:
 105              		.loc 1 38 0
 106 0067 4883C428 		addq	$40, %rsp
 107              		.cfi_def_cfa_offset 40
 108 006b 5B       		popq	%rbx
 109              		.cfi_def_cfa_offset 32
 110              	.LVL8:
 111 006c 5D       		popq	%rbp
 112              		.cfi_def_cfa_offset 24
 113              	.LVL9:
 114 006d 415C     		popq	%r12
 115              		.cfi_def_cfa_offset 16
 116              	.LVL10:
 117 006f 415D     		popq	%r13
 118              		.cfi_def_cfa_offset 8
 119              	.LVL11:
 120 0071 C3       		ret
 121              		.cfi_endproc
 122              	.LFE469:
 124              		.section	.text.unlikely._Z15fl_normal_labelPK8Fl_Labeliiiij
 125              	.LCOLDE1:
 126              		.section	.text._Z15fl_normal_labelPK8Fl_Labeliiiij
 127              	.LHOTE1:
 128              		.section	.text.unlikely._Z17fl_normal_measurePK8Fl_LabelRiS2_,"ax",@progbits
 129              	.LCOLDB2:
 130              		.section	.text._Z17fl_normal_measurePK8Fl_LabelRiS2_,"ax",@progbits
 131              	.LHOTB2:
 132              		.p2align 4,,15
 133              		.globl	_Z17fl_normal_measurePK8Fl_LabelRiS2_
 135              	_Z17fl_normal_measurePK8Fl_LabelRiS2_:
 136              	.LFB470:
 137              		.loc 1 41 0
 138              		.cfi_startproc
 139              	.LVL12:
 140 0000 4154     		pushq	%r12
 141              		.cfi_def_cfa_offset 16
 142              		.cfi_offset 12, -16
 143              	.LVL13:
 144 0002 55       		pushq	%rbp
 145              		.cfi_def_cfa_offset 24
 146              		.cfi_offset 6, -24
 147 0003 4989F4   		movq	%rsi, %r12
 148 0006 53       		pushq	%rbx
 149              		.cfi_def_cfa_offset 32
 150              		.cfi_offset 3, -32
 151              		.loc 1 41 0
 152 0007 4889FB   		movq	%rdi, %rbx
 153              	.LBB40:
 154              	.LBB41:
 155              		.loc 2 509 0
 156 000a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 156      000000
 157              	.LVL14:
 158              	.LBE41:
 159              	.LBE40:
 160              		.loc 1 41 0
 161 0011 4889D5   		movq	%rdx, %rbp
 162              	.LBB43:
 163              	.LBB42:
 164              		.loc 2 509 0
 165 0014 8B7318   		movl	24(%rbx), %esi
 166              	.LVL15:
 167 0017 8B531C   		movl	28(%rbx), %edx
 168              	.LVL16:
 169 001a 488B07   		movq	(%rdi), %rax
 170 001d FF90B001 		call	*432(%rax)
 170      0000
 171              	.LVL17:
 172              	.LBE42:
 173              	.LBE43:
 174              		.loc 1 43 0
 175 0023 488B3B   		movq	(%rbx), %rdi
 176 0026 B9010000 		movl	$1, %ecx
 176      00
 177 002b 4889EA   		movq	%rbp, %rdx
 178 002e 4C89E6   		movq	%r12, %rsi
 179 0031 E8000000 		call	_Z10fl_measurePKcRiS1_i
 179      00
 180              	.LVL18:
 181              		.loc 1 44 0
 182 0036 488B4308 		movq	8(%rbx), %rax
 183 003a 4885C0   		testq	%rax, %rax
 184 003d 740F     		je	.L4
 185 003f 8B5008   		movl	8(%rax), %edx
 186              	.LVL19:
 187              		.loc 1 45 0
 188 0042 41391424 		cmpl	%edx, (%r12)
 189 0046 7C10     		jl	.L12
 190              	.L6:
 191              	.LVL20:
 192              		.loc 1 46 0
 193 0048 8B400C   		movl	12(%rax), %eax
 194              	.LVL21:
 195 004b 014500   		addl	%eax, 0(%rbp)
 196              	.LVL22:
 197              	.L4:
 198              		.loc 1 48 0
 199 004e 5B       		popq	%rbx
 200              		.cfi_remember_state
 201              		.cfi_def_cfa_offset 24
 202              	.LVL23:
 203 004f 5D       		popq	%rbp
 204              		.cfi_def_cfa_offset 16
 205              	.LVL24:
 206 0050 415C     		popq	%r12
 207              		.cfi_def_cfa_offset 8
 208              	.LVL25:
 209 0052 C3       		ret
 210              	.LVL26:
 211              		.p2align 4,,10
 212 0053 0F1F4400 		.p2align 3
 212      00
 213              	.L12:
 214              		.cfi_restore_state
 215              		.loc 1 45 0 discriminator 1
 216 0058 41891424 		movl	%edx, (%r12)
 217              	.LVL27:
 218 005c 488B4308 		movq	8(%rbx), %rax
 219 0060 EBE6     		jmp	.L6
 220              		.cfi_endproc
 221              	.LFE470:
 223              		.section	.text.unlikely._Z17fl_normal_measurePK8Fl_LabelRiS2_
 224              	.LCOLDE2:
 225              		.section	.text._Z17fl_normal_measurePK8Fl_LabelRiS2_
 226              	.LHOTE2:
 227              		.section	.text.unlikely._ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E,"ax",
 228              		.align 2
 229              	.LCOLDB3:
 230              		.section	.text._ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E,"ax",@progbits
 231              	.LHOTB3:
 232              		.align 2
 233              		.p2align 4,,15
 234              		.globl	_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 236              	_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E:
 237              	.LFB471:
 238              		.loc 1 70 0
 239              		.cfi_startproc
 240              	.LVL28:
 241              		.loc 1 71 0
 242 0000 4863FF   		movslq	%edi, %rdi
 243 0003 488934FD 		movq	%rsi, _ZL5table(,%rdi,8)
 243      00000000 
 244 000b 488914FD 		movq	%rdx, _ZL7measure(,%rdi,8)
 244      00000000 
 245 0013 C3       		ret
 246              		.cfi_endproc
 247              	.LFE471:
 249              		.section	.text.unlikely._ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 250              	.LCOLDE3:
 251              		.section	.text._ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 252              	.LHOTE3:
 253              		.section	.text.unlikely._ZNK8Fl_Label4drawEiiiij,"ax",@progbits
 254              		.align 2
 255              	.LCOLDB4:
 256              		.section	.text._ZNK8Fl_Label4drawEiiiij,"ax",@progbits
 257              	.LHOTB4:
 258              		.align 2
 259              		.p2align 4,,15
 260              		.globl	_ZNK8Fl_Label4drawEiiiij
 262              	_ZNK8Fl_Label4drawEiiiij:
 263              	.LFB472:
 264              		.loc 1 77 0
 265              		.cfi_startproc
 266              	.LVL29:
 267              		.loc 1 78 0
 268 0000 48833F00 		cmpq	$0, (%rdi)
 269 0004 7412     		je	.L17
 270              	.L15:
 271              		.loc 1 79 0
 272 0006 0FB64728 		movzbl	40(%rdi), %eax
 273 000a FF24C500 		jmp	*_ZL5table(,%rax,8)
 273      000000
 274              	.LVL30:
 275              		.p2align 4,,10
 276 0011 0F1F8000 		.p2align 3
 276      000000
 277              	.L17:
 278              		.loc 1 78 0 discriminator 1
 279 0018 48837F08 		cmpq	$0, 8(%rdi)
 279      00
 280 001d 75E7     		jne	.L15
 281 001f F3C3     		rep ret
 282              		.cfi_endproc
 283              	.LFE472:
 285              		.section	.text.unlikely._ZNK8Fl_Label4drawEiiiij
 286              	.LCOLDE4:
 287              		.section	.text._ZNK8Fl_Label4drawEiiiij
 288              	.LHOTE4:
 289              		.section	.text.unlikely._ZNK8Fl_Label7measureERiS0_,"ax",@progbits
 290              		.align 2
 291              	.LCOLDB5:
 292              		.section	.text._ZNK8Fl_Label7measureERiS0_,"ax",@progbits
 293              	.LHOTB5:
 294              		.align 2
 295              		.p2align 4,,15
 296              		.globl	_ZNK8Fl_Label7measureERiS0_
 298              	_ZNK8Fl_Label7measureERiS0_:
 299              	.LFB473:
 300              		.loc 1 86 0
 301              		.cfi_startproc
 302              	.LVL31:
 303              		.loc 1 87 0
 304 0000 48833F00 		cmpq	$0, (%rdi)
 305 0004 741A     		je	.L23
 306              	.L19:
 307              		.loc 1 92 0
 308 0006 0FB64728 		movzbl	40(%rdi), %eax
 309 000a B9000000 		movl	$_Z17fl_normal_measurePK8Fl_LabelRiS2_, %ecx
 309      00
 310 000f 488B04C5 		movq	_ZL7measure(,%rax,8), %rax
 310      00000000 
 311              	.LVL32:
 312 0017 4885C0   		testq	%rax, %rax
 313 001a 480F44C1 		cmove	%rcx, %rax
 314              	.LVL33:
 315              		.loc 1 93 0
 316 001e FFE0     		jmp	*%rax
 317              	.LVL34:
 318              		.p2align 4,,10
 319              		.p2align 3
 320              	.L23:
 321              		.loc 1 87 0 discriminator 1
 322 0020 48837F08 		cmpq	$0, 8(%rdi)
 322      00
 323 0025 75DF     		jne	.L19
 324              		.loc 1 88 0
 325 0027 C7020000 		movl	$0, (%rdx)
 325      0000
 326 002d C7060000 		movl	$0, (%rsi)
 326      0000
 327              		.loc 1 89 0
 328 0033 C3       		ret
 329              		.cfi_endproc
 330              	.LFE473:
 332              		.section	.text.unlikely._ZNK8Fl_Label7measureERiS0_
 333              	.LCOLDE5:
 334              		.section	.text._ZNK8Fl_Label7measureERiS0_
 335              	.LHOTE5:
 336              		.section	.text.unlikely._ZNK9Fl_Widget10draw_labelEiiiij,"ax",@progbits
 337              		.align 2
 338              	.LCOLDB6:
 339              		.section	.text._ZNK9Fl_Widget10draw_labelEiiiij,"ax",@progbits
 340              	.LHOTB6:
 341              		.align 2
 342              		.p2align 4,,15
 343              		.globl	_ZNK9Fl_Widget10draw_labelEiiiij
 345              	_ZNK9Fl_Widget10draw_labelEiiiij:
 346              	.LFB476:
 347              		.loc 1 118 0
 348              		.cfi_startproc
 349              	.LVL35:
 350 0000 4156     		pushq	%r14
 351              		.cfi_def_cfa_offset 16
 352              		.cfi_offset 14, -16
 353 0002 4155     		pushq	%r13
 354              		.cfi_def_cfa_offset 24
 355              		.cfi_offset 13, -24
 356 0004 4589CE   		movl	%r9d, %r14d
 357 0007 4154     		pushq	%r12
 358              		.cfi_def_cfa_offset 32
 359              		.cfi_offset 12, -32
 360 0009 55       		pushq	%rbp
 361              		.cfi_def_cfa_offset 40
 362              		.cfi_offset 6, -40
 363 000a 4189CC   		movl	%ecx, %r12d
 364 000d 53       		pushq	%rbx
 365              		.cfi_def_cfa_offset 48
 366              		.cfi_offset 3, -48
 367 000e 89D5     		movl	%edx, %ebp
 368 0010 89F3     		movl	%esi, %ebx
 369 0012 4589C5   		movl	%r8d, %r13d
 370 0015 4883EC40 		subq	$64, %rsp
 371              		.cfi_def_cfa_offset 112
 372              		.loc 1 118 0
 373 0019 64488B04 		movq	%fs:40, %rax
 373      25280000 
 373      00
 374 0022 48894424 		movq	%rax, 56(%rsp)
 374      38
 375 0027 31C0     		xorl	%eax, %eax
 376              	.LVL36:
 377              		.loc 1 119 0
 378 0029 F6476040 		testb	$64, 96(%rdi)
 379 002d 7407     		je	.L25
 380              		.loc 1 119 0 is_stmt 0 discriminator 1
 381 002f C6050000 		movb	$1, fl_draw_shortcut(%rip)
 381      000001
 382              	.L25:
 383              		.loc 1 120 0 is_stmt 1
 384 0036 488B4730 		movq	48(%rdi), %rax
 385 003a 48890424 		movq	%rax, (%rsp)
 386 003e 488B4738 		movq	56(%rdi), %rax
 387 0042 48894424 		movq	%rax, 8(%rsp)
 387      08
 388 0047 488B4740 		movq	64(%rdi), %rax
 389 004b 48894424 		movq	%rax, 16(%rsp)
 389      10
 390 0050 488B4748 		movq	72(%rdi), %rax
 391 0054 48894424 		movq	%rax, 24(%rsp)
 391      18
 392 0059 488B4750 		movq	80(%rdi), %rax
 393 005d 48894424 		movq	%rax, 32(%rsp)
 393      20
 394 0062 488B4758 		movq	88(%rdi), %rax
 395 0066 48894424 		movq	%rax, 40(%rsp)
 395      28
 396              		.loc 1 121 0
 397 006b E8000000 		call	_ZNK9Fl_Widget8active_rEv
 397      00
 398              	.LVL37:
 399 0070 85C0     		testl	%eax, %eax
 400 0072 744C     		je	.L37
 401              	.L26:
 402              	.LVL38:
 403              	.LBB44:
 404              	.LBB45:
 405              		.loc 1 78 0
 406 0074 48833C24 		cmpq	$0, (%rsp)
 406      00
 407 0079 7465     		je	.L38
 408              	.L27:
 409              		.loc 1 79 0
 410 007b 0FB64424 		movzbl	40(%rsp), %eax
 410      28
 411 0080 4589F1   		movl	%r14d, %r9d
 412 0083 4589E8   		movl	%r13d, %r8d
 413 0086 4489E1   		movl	%r12d, %ecx
 414 0089 89EA     		movl	%ebp, %edx
 415 008b 89DE     		movl	%ebx, %esi
 416 008d 4889E7   		movq	%rsp, %rdi
 417 0090 FF14C500 		call	*_ZL5table(,%rax,8)
 417      000000
 418              	.LVL39:
 419              	.L28:
 420              	.LBE45:
 421              	.LBE44:
 422              		.loc 1 127 0
 423 0097 488B4424 		movq	56(%rsp), %rax
 423      38
 424 009c 64483304 		xorq	%fs:40, %rax
 424      25280000 
 424      00
 425              		.loc 1 126 0
 426 00a5 C6050000 		movb	$0, fl_draw_shortcut(%rip)
 426      000000
 427              		.loc 1 127 0
 428 00ac 753C     		jne	.L39
 429 00ae 4883C440 		addq	$64, %rsp
 430              		.cfi_remember_state
 431              		.cfi_def_cfa_offset 48
 432 00b2 5B       		popq	%rbx
 433              		.cfi_def_cfa_offset 40
 434              	.LVL40:
 435 00b3 5D       		popq	%rbp
 436              		.cfi_def_cfa_offset 32
 437              	.LVL41:
 438 00b4 415C     		popq	%r12
 439              		.cfi_def_cfa_offset 24
 440              	.LVL42:
 441 00b6 415D     		popq	%r13
 442              		.cfi_def_cfa_offset 16
 443              	.LVL43:
 444 00b8 415E     		popq	%r14
 445              		.cfi_def_cfa_offset 8
 446              	.LVL44:
 447 00ba C3       		ret
 448              	.LVL45:
 449 00bb 0F1F4400 		.p2align 4,,10
 449      00
 450              		.p2align 3
 451              	.L37:
 452              		.cfi_restore_state
 453              		.loc 1 122 0
 454 00c0 8B7C2420 		movl	32(%rsp), %edi
 455 00c4 E8000000 		call	_Z11fl_inactivej
 455      00
 456              	.LVL46:
 457 00c9 89442420 		movl	%eax, 32(%rsp)
 458              		.loc 1 123 0
 459 00cd 488B4424 		movq	16(%rsp), %rax
 459      10
 460 00d2 4885C0   		testq	%rax, %rax
 461 00d5 749D     		je	.L26
 462              		.loc 1 123 0 is_stmt 0 discriminator 1
 463 00d7 48894424 		movq	%rax, 8(%rsp)
 463      08
 464              	.LVL47:
 465 00dc EB9D     		jmp	.L27
 466 00de 6690     		.p2align 4,,10
 467              		.p2align 3
 468              	.L38:
 469              	.LBB47:
 470              	.LBB46:
 471              		.loc 1 78 0 is_stmt 1
 472 00e0 48837C24 		cmpq	$0, 8(%rsp)
 472      0800
 473 00e6 7593     		jne	.L27
 474 00e8 EBAD     		jmp	.L28
 475              	.LVL48:
 476              	.L39:
 477              	.LBE46:
 478              	.LBE47:
 479              		.loc 1 127 0
 480 00ea E8000000 		call	__stack_chk_fail
 480      00
 481              	.LVL49:
 482              		.cfi_endproc
 483              	.LFE476:
 485              		.section	.text.unlikely._ZNK9Fl_Widget10draw_labelEiiiij
 486              	.LCOLDE6:
 487              		.section	.text._ZNK9Fl_Widget10draw_labelEiiiij
 488              	.LHOTE6:
 489              		.section	.text.unlikely._ZNK9Fl_Widget10draw_labelEiiii,"ax",@progbits
 490              		.align 2
 491              	.LCOLDB7:
 492              		.section	.text._ZNK9Fl_Widget10draw_labelEiiii,"ax",@progbits
 493              	.LHOTB7:
 494              		.align 2
 495              		.p2align 4,,15
 496              		.globl	_ZNK9Fl_Widget10draw_labelEiiii
 498              	_ZNK9Fl_Widget10draw_labelEiiii:
 499              	.LFB475:
 500              		.loc 1 109 0
 501              		.cfi_startproc
 502              	.LVL50:
 503 0000 448B4F54 		movl	84(%rdi), %r9d
 504              	.LVL51:
 505              		.loc 1 111 0
 506 0004 41F6C10F 		testb	$15, %r9b
 507 0008 740E     		je	.L41
 508              	.LVL52:
 509              		.loc 1 111 0 is_stmt 0 discriminator 1
 510 000a 41F6C110 		testb	$16, %r9b
 511 000e 7508     		jne	.L41
 512 0010 F3C3     		rep ret
 513              	.LVL53:
 514              		.p2align 4,,10
 515 0012 660F1F44 		.p2align 3
 515      0000
 516              	.L41:
 517              		.loc 1 112 0 is_stmt 1
 518 0018 E9000000 		jmp	_ZNK9Fl_Widget10draw_labelEiiiij
 518      00
 519              	.LVL54:
 520              		.cfi_endproc
 521              	.LFE475:
 523              		.section	.text.unlikely._ZNK9Fl_Widget10draw_labelEiiii
 524              	.LCOLDE7:
 525              		.section	.text._ZNK9Fl_Widget10draw_labelEiiii
 526              	.LHOTE7:
 527              		.section	.text.unlikely._ZNK9Fl_Widget10draw_labelEv,"ax",@progbits
 528              		.align 2
 529              	.LCOLDB8:
 530              		.section	.text._ZNK9Fl_Widget10draw_labelEv,"ax",@progbits
 531              	.LHOTB8:
 532              		.align 2
 533              		.p2align 4,,15
 534              		.globl	_ZNK9Fl_Widget10draw_labelEv
 536              	_ZNK9Fl_Widget10draw_labelEv:
 537              	.LFB474:
 538              		.loc 1 99 0
 539              		.cfi_startproc
 540              	.LVL55:
 541 0000 4156     		pushq	%r14
 542              		.cfi_def_cfa_offset 16
 543              		.cfi_offset 14, -16
 544 0002 4155     		pushq	%r13
 545              		.cfi_def_cfa_offset 24
 546              		.cfi_offset 13, -24
 547 0004 4154     		pushq	%r12
 548              		.cfi_def_cfa_offset 32
 549              		.cfi_offset 12, -32
 550 0006 55       		pushq	%rbp
 551              		.cfi_def_cfa_offset 40
 552              		.cfi_offset 6, -40
 553 0007 53       		pushq	%rbx
 554              		.cfi_def_cfa_offset 48
 555              		.cfi_offset 3, -48
 556              		.loc 1 99 0
 557 0008 4889FB   		movq	%rdi, %rbx
 558              		.loc 1 100 0
 559 000b 448B6720 		movl	32(%rdi), %r12d
 560              	.LVL56:
 561 000f 0FB67F6E 		movzbl	110(%rdi), %edi
 562              	.LVL57:
 563 0013 E8000000 		call	_ZN2Fl6box_dxE10Fl_Boxtype
 563      00
 564              	.LVL58:
 565              		.loc 1 101 0
 566 0018 0FB67B6E 		movzbl	110(%rbx), %edi
 567 001c 8B6B28   		movl	40(%rbx), %ebp
 568              		.loc 1 100 0
 569 001f 4101C4   		addl	%eax, %r12d
 570              	.LVL59:
 571              		.loc 1 101 0
 572 0022 E8000000 		call	_ZN2Fl6box_dwE10Fl_Boxtype
 572      00
 573              	.LVL60:
 574 0027 29C5     		subl	%eax, %ebp
 575              	.LVL61:
 576              		.loc 1 102 0
 577 0029 83FD0B   		cmpl	$11, %ebp
 578 002c 7E0D     		jle	.L47
 579              	.LVL62:
 580              		.loc 1 102 0 is_stmt 0 discriminator 1
 581 002e F643540C 		testb	$12, 84(%rbx)
 582 0032 7407     		je	.L47
 583              		.loc 1 102 0
 584 0034 4183C403 		addl	$3, %r12d
 585              	.LVL63:
 586 0038 83ED06   		subl	$6, %ebp
 587              	.LVL64:
 588              	.L47:
 589              		.loc 1 103 0 is_stmt 1
 590 003b 0FB67B6E 		movzbl	110(%rbx), %edi
 591 003f 448B6B2C 		movl	44(%rbx), %r13d
 592              	.LVL65:
 593 0043 E8000000 		call	_ZN2Fl6box_dhE10Fl_Boxtype
 593      00
 594              	.LVL66:
 595 0048 0FB67B6E 		movzbl	110(%rbx), %edi
 596 004c 448B7324 		movl	36(%rbx), %r14d
 597              	.LVL67:
 598 0050 4129C5   		subl	%eax, %r13d
 599 0053 E8000000 		call	_ZN2Fl6box_dyE10Fl_Boxtype
 599      00
 600              	.LVL68:
 601 0058 4589E8   		movl	%r13d, %r8d
 602 005b 418D1406 		leal	(%r14,%rax), %edx
 603 005f 89E9     		movl	%ebp, %ecx
 604 0061 4489E6   		movl	%r12d, %esi
 605 0064 4889DF   		movq	%rbx, %rdi
 606              		.loc 1 104 0
 607 0067 5B       		popq	%rbx
 608              		.cfi_def_cfa_offset 40
 609              	.LVL69:
 610 0068 5D       		popq	%rbp
 611              		.cfi_def_cfa_offset 32
 612              	.LVL70:
 613 0069 415C     		popq	%r12
 614              		.cfi_def_cfa_offset 24
 615              	.LVL71:
 616 006b 415D     		popq	%r13
 617              		.cfi_def_cfa_offset 16
 618 006d 415E     		popq	%r14
 619              		.cfi_def_cfa_offset 8
 620              		.loc 1 103 0
 621 006f E9000000 		jmp	_ZNK9Fl_Widget10draw_labelEiiii
 621      00
 622              	.LVL72:
 623              		.cfi_endproc
 624              	.LFE474:
 626              		.section	.text.unlikely._ZNK9Fl_Widget10draw_labelEv
 627              	.LCOLDE8:
 628              		.section	.text._ZNK9Fl_Widget10draw_labelEv
 629              	.LHOTE8:
 630              		.section	.bss._ZL7measure,"aw",@nobits
 631              		.align 32
 634              	_ZL7measure:
 635 0000 00000000 		.zero	128
 635      00000000 
 635      00000000 
 635      00000000 
 635      00000000 
 636              		.section	.data._ZL5table,"aw",@progbits
 637              		.align 32
 640              	_ZL5table:
 641 0000 00000000 		.quad	_Z15fl_normal_labelPK8Fl_Labeliiiij
 641      00000000 
 642 0008 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 642      00000000 
 643 0010 00000000 		.quad	_Z15fl_normal_labelPK8Fl_Labeliiiij
 643      00000000 
 644 0018 00000000 		.quad	_Z15fl_normal_labelPK8Fl_Labeliiiij
 644      00000000 
 645 0020 00000000 		.quad	_Z15fl_normal_labelPK8Fl_Labeliiiij
 645      00000000 
 646 0028 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 646      00000000 
 647 0030 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 647      00000000 
 648 0038 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 648      00000000 
 649 0040 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 649      00000000 
 650 0048 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 650      00000000 
 651 0050 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 651      00000000 
 652 0058 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 652      00000000 
 653 0060 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 653      00000000 
 654 0068 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 654      00000000 
 655 0070 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 655      00000000 
 656 0078 00000000 		.quad	_Z11fl_no_labelPK8Fl_Labeliiiij
 656      00000000 
 657              		.text
 658              	.Letext0:
 659              		.section	.text.unlikely._Z11fl_no_labelPK8Fl_Labeliiiij
 660              	.Letext_cold0:
 661              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 662              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 663              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 664              		.file 6 "/usr/include/libio.h"
 665              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 666              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 667              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 668              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 669              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 670              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_labeltype.cxx
     /tmp/cczDWt7D.s:14     .text._Z11fl_no_labelPK8Fl_Labeliiiij:0000000000000000 _Z11fl_no_labelPK8Fl_Labeliiiij
     /tmp/cczDWt7D.s:34     .text._Z15fl_normal_labelPK8Fl_Labeliiiij:0000000000000000 _Z15fl_normal_labelPK8Fl_Labeliiiij
     /tmp/cczDWt7D.s:135    .text._Z17fl_normal_measurePK8Fl_LabelRiS2_:0000000000000000 _Z17fl_normal_measurePK8Fl_LabelRiS2_
     /tmp/cczDWt7D.s:236    .text._ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E:0000000000000000 _ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
     /tmp/cczDWt7D.s:640    .data._ZL5table:0000000000000000 _ZL5table
     /tmp/cczDWt7D.s:634    .bss._ZL7measure:0000000000000000 _ZL7measure
     /tmp/cczDWt7D.s:262    .text._ZNK8Fl_Label4drawEiiiij:0000000000000000 _ZNK8Fl_Label4drawEiiiij
     /tmp/cczDWt7D.s:298    .text._ZNK8Fl_Label7measureERiS0_:0000000000000000 _ZNK8Fl_Label7measureERiS0_
     /tmp/cczDWt7D.s:345    .text._ZNK9Fl_Widget10draw_labelEiiiij:0000000000000000 _ZNK9Fl_Widget10draw_labelEiiiij
     /tmp/cczDWt7D.s:498    .text._ZNK9Fl_Widget10draw_labelEiiii:0000000000000000 _ZNK9Fl_Widget10draw_labelEiiii
     /tmp/cczDWt7D.s:536    .text._ZNK9Fl_Widget10draw_labelEv:0000000000000000 _ZNK9Fl_Widget10draw_labelEv
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
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea

UNDEFINED SYMBOLS
fl_graphics_driver
_Z7fl_drawPKciiiijP8Fl_Imagei
_Z10fl_measurePKcRiS1_i
fl_draw_shortcut
_ZNK9Fl_Widget8active_rEv
_Z11fl_inactivej
__stack_chk_fail
_ZN2Fl6box_dxE10Fl_Boxtype
_ZN2Fl6box_dwE10Fl_Boxtype
_ZN2Fl6box_dhE10Fl_Boxtype
_ZN2Fl6box_dyE10Fl_Boxtype
