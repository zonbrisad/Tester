   1              		.file	"fl_engraved_label.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL7innardsPK8Fl_LabeliiiijPA3_Kii,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL7innardsPK8Fl_LabeliiiijPA3_Kii,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL7innardsPK8Fl_LabeliiiijPA3_Kii
  10              	.Ltext_cold0:
  11              		.section	.text._ZL7innardsPK8Fl_LabeliiiijPA3_Kii
  13              	_ZL7innardsPK8Fl_LabeliiiijPA3_Kii:
  14              	.LFB468:
  15              		.file 1 "fltk-1.3.4-1/src/fl_engraved_label.cxx"
   1:fltk-1.3.4-1/src/fl_engraved_label.cxx **** ...
  16              		.loc 1 30 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4157     		pushq	%r15
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 15, -16
  22 0002 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 14, -24
  25 0004 4489C8   		movl	%r9d, %eax
  26              	.LVL1:
  27 0007 4155     		pushq	%r13
  28              		.cfi_def_cfa_offset 32
  29              		.cfi_offset 13, -32
  30 0009 4154     		pushq	%r12
  31              		.cfi_def_cfa_offset 40
  32              		.cfi_offset 12, -40
  33 000b 4189F5   		movl	%esi, %r13d
  34 000e 55       		pushq	%rbp
  35              		.cfi_def_cfa_offset 48
  36              		.cfi_offset 6, -48
  37 000f 53       		pushq	%rbx
  38              		.cfi_def_cfa_offset 56
  39              		.cfi_offset 3, -56
  40 0010 4889FD   		movq	%rdi, %rbp
  41 0013 4189D6   		movl	%edx, %r14d
  42 0016 4883EC28 		subq	$40, %rsp
  43              		.cfi_def_cfa_offset 96
  44              		.loc 1 32 0
  45 001a 83E040   		andl	$64, %eax
  46              	.LBB11:
  47              	.LBB12:
  48              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  49              		.loc 2 82 0
  50 001d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  50      000000
  51              	.LVL2:
  52              	.LBE12:
  53              	.LBE11:
  54              		.loc 1 30 0
  55 0024 894C240C 		movl	%ecx, 12(%rsp)
  56 0028 44894424 		movl	%r8d, 16(%rsp)
  56      10
  57 002d 44894C24 		movl	%r9d, 20(%rsp)
  57      14
  58 0032 488B5C24 		movq	96(%rsp), %rbx
  58      60
  59 0037 448B6424 		movl	104(%rsp), %r12d
  59      68
  60              		.loc 1 32 0
  61 003c 8944241C 		movl	%eax, 28(%rsp)
  62 0040 0F859A00 		jne	.L12
  62      0000
  63              	.LVL3:
  64              	.LBB14:
  65              	.LBB15:
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
  66              		.loc 2 509 0
  67 0046 488B07   		movq	(%rdi), %rax
  68 0049 8B551C   		movl	28(%rbp), %edx
  69              	.LVL4:
  70 004c 8B7518   		movl	24(%rbp), %esi
  71              	.LVL5:
  72 004f FF90B001 		call	*432(%rax)
  72      0000
  73              	.LVL6:
  74              	.LBE15:
  75              	.LBE14:
  76              	.LBB18:
  77              		.loc 1 35 0
  78 0055 4585E4   		testl	%r12d, %r12d
  79 0058 7E72     		jle	.L1
  80              	.LVL7:
  81              	.L3:
  82 005a 418D4424 		leal	-1(%r12), %eax
  82      FF
  83              	.LBE18:
  84              		.loc 1 30 0
  85 005f 4531FF   		xorl	%r15d, %r15d
  86 0062 89442418 		movl	%eax, 24(%rsp)
  87 0066 4489E0   		movl	%r12d, %eax
  88 0069 4589FC   		movl	%r15d, %r12d
  89 006c 4189C7   		movl	%eax, %r15d
  90              	.LVL8:
  91 006f 90       		.p2align 4,,10
  92              		.p2align 3
  93              	.L6:
  94              	.LBB23:
  95              		.loc 1 36 0
  96 0070 44396424 		cmpl	%r12d, 24(%rsp)
  96      18
  97 0075 0F8FB300 		jg	.L13
  97      0000
  98              		.loc 1 36 0 is_stmt 0 discriminator 2
  99 007b 8B7520   		movl	32(%rbp), %esi
 100              	.L5:
 101              	.LVL9:
 102              	.LBB19:
 103              	.LBB20:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 104              		.loc 2 52 0 is_stmt 1 discriminator 4
 105 007e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 105      000000
 106              	.LBE20:
 107              	.LBE19:
 108              		.loc 1 35 0 discriminator 4
 109 0085 4183C401 		addl	$1, %r12d
 110              	.LVL10:
 111 0089 4883C30C 		addq	$12, %rbx
 112              	.LBB22:
 113              	.LBB21:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 114              		.loc 2 52 0 discriminator 4
 115 008d 488B17   		movq	(%rdi), %rdx
 116 0090 FF928800 		call	*136(%rdx)
 116      0000
 117              	.LVL11:
 118              	.LBE21:
 119              	.LBE22:
 120              		.loc 1 37 0 discriminator 4
 121 0096 8B53F8   		movl	-8(%rbx), %edx
 122 0099 8B73F4   		movl	-12(%rbx), %esi
 123 009c 6A01     		pushq	$1
 124              		.cfi_def_cfa_offset 104
 125 009e 6A00     		pushq	$0
 126              		.cfi_def_cfa_offset 112
 127 00a0 448B4C24 		movl	36(%rsp), %r9d
 127      24
 128 00a5 448B4424 		movl	32(%rsp), %r8d
 128      20
 129 00aa 8B4C241C 		movl	28(%rsp), %ecx
 130 00ae 488B7D00 		movq	0(%rbp), %rdi
 131 00b2 4401F2   		addl	%r14d, %edx
 132 00b5 4401EE   		addl	%r13d, %esi
 133 00b8 E8000000 		call	_Z7fl_drawPKciiiijP8Fl_Imagei
 133      00
 134              	.LVL12:
 135              		.loc 1 35 0 discriminator 4
 136 00bd 4539E7   		cmpl	%r12d, %r15d
 137 00c0 5A       		popq	%rdx
 138              		.cfi_def_cfa_offset 104
 139 00c1 59       		popq	%rcx
 140              		.cfi_def_cfa_offset 96
 141 00c2 7FAC     		jg	.L6
 142              	.LBE23:
 143              		.loc 1 39 0
 144 00c4 8B44241C 		movl	28(%rsp), %eax
 145 00c8 85C0     		testl	%eax, %eax
 146 00ca 7541     		jne	.L7
 147              	.LVL13:
 148              	.L1:
 149              		.loc 1 40 0
 150 00cc 4883C428 		addq	$40, %rsp
 151              		.cfi_remember_state
 152              		.cfi_def_cfa_offset 56
 153 00d0 5B       		popq	%rbx
 154              		.cfi_def_cfa_offset 48
 155 00d1 5D       		popq	%rbp
 156              		.cfi_def_cfa_offset 40
 157              	.LVL14:
 158 00d2 415C     		popq	%r12
 159              		.cfi_def_cfa_offset 32
 160 00d4 415D     		popq	%r13
 161              		.cfi_def_cfa_offset 24
 162              	.LVL15:
 163 00d6 415E     		popq	%r14
 164              		.cfi_def_cfa_offset 16
 165              	.LVL16:
 166 00d8 415F     		popq	%r15
 167              		.cfi_def_cfa_offset 8
 168 00da C3       		ret
 169              	.LVL17:
 170 00db 0F1F4400 		.p2align 4,,10
 170      00
 171              		.p2align 3
 172              	.L12:
 173              		.cfi_restore_state
 174              	.LBB24:
 175              	.LBB13:
  82:fltk-1.3.4-1/FL/fl_draw.H **** /**
 176              		.loc 2 82 0
 177 00e0 488B07   		movq	(%rdi), %rax
 178 00e3 FF905001 		call	*336(%rax)
 178      0000
 179              	.LVL18:
 180              	.LBE13:
 181              	.LBE24:
 182              	.LBB25:
 183              	.LBB16:
 184              		.loc 2 509 0
 185 00e9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 185      000000
 186              	.LBE16:
 187              	.LBE25:
 188              		.loc 1 33 0
 189 00f0 83642414 		andl	$-65, 20(%rsp)
 189      BF
 190              	.LVL19:
 191              	.LBB26:
 192              	.LBB17:
 193              		.loc 2 509 0
 194 00f5 8B551C   		movl	28(%rbp), %edx
 195 00f8 8B7518   		movl	24(%rbp), %esi
 196 00fb 488B07   		movq	(%rdi), %rax
 197 00fe FF90B001 		call	*432(%rax)
 197      0000
 198              	.LVL20:
 199              	.LBE17:
 200              	.LBE26:
 201              	.LBB27:
 202              		.loc 1 35 0
 203 0104 4585E4   		testl	%r12d, %r12d
 204 0107 0F8F4DFF 		jg	.L3
 204      FFFF
 205              	.LVL21:
 206              	.L7:
 207              	.LBE27:
 208              	.LBB28:
 209              	.LBB29:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 210              		.loc 2 103 0
 211 010d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 211      000000
 212 0114 488B07   		movq	(%rdi), %rax
 213 0117 488B8070 		movq	368(%rax), %rax
 213      010000
 214              	.LBE29:
 215              	.LBE28:
 216              		.loc 1 40 0
 217 011e 4883C428 		addq	$40, %rsp
 218              		.cfi_remember_state
 219              		.cfi_def_cfa_offset 56
 220 0122 5B       		popq	%rbx
 221              		.cfi_def_cfa_offset 48
 222 0123 5D       		popq	%rbp
 223              		.cfi_def_cfa_offset 40
 224              	.LVL22:
 225 0124 415C     		popq	%r12
 226              		.cfi_def_cfa_offset 32
 227 0126 415D     		popq	%r13
 228              		.cfi_def_cfa_offset 24
 229              	.LVL23:
 230 0128 415E     		popq	%r14
 231              		.cfi_def_cfa_offset 16
 232              	.LVL24:
 233 012a 415F     		popq	%r15
 234              		.cfi_def_cfa_offset 8
 235              	.LBB31:
 236              	.LBB30:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 237              		.loc 2 103 0
 238 012c FFE0     		jmp	*%rax
 239              	.LVL25:
 240              	.L13:
 241              		.cfi_restore_state
 242              	.LBE30:
 243              	.LBE31:
 244              	.LBB32:
 245              		.loc 1 36 0 discriminator 1
 246 012e 8B7308   		movl	8(%rbx), %esi
 247 0131 E948FFFF 		jmp	.L5
 247      FF
 248              	.LBE32:
 249              		.cfi_endproc
 250              	.LFE468:
 252              		.section	.text.unlikely._ZL7innardsPK8Fl_LabeliiiijPA3_Kii
 253              	.LCOLDE0:
 254              		.section	.text._ZL7innardsPK8Fl_LabeliiiijPA3_Kii
 255              	.LHOTE0:
 256              		.section	.text.unlikely._ZL15fl_shadow_labelPK8Fl_Labeliiiij,"ax",@progbits
 257              	.LCOLDB1:
 258              		.section	.text._ZL15fl_shadow_labelPK8Fl_Labeliiiij,"ax",@progbits
 259              	.LHOTB1:
 260              		.p2align 4,,15
 262              	_ZL15fl_shadow_labelPK8Fl_Labeliiiij:
 263              	.LFB469:
 264              		.loc 1 44 0
 265              		.cfi_startproc
 266              	.LVL26:
 267 0000 4883EC08 		subq	$8, %rsp
 268              		.cfi_def_cfa_offset 16
 269              		.loc 1 46 0
 270 0004 6A02     		pushq	$2
 271              		.cfi_def_cfa_offset 24
 272 0006 68000000 		pushq	$_ZZL15fl_shadow_labelPK8Fl_LabeliiiijE4data
 272      00
 273              		.cfi_def_cfa_offset 32
 274 000b E8000000 		call	_ZL7innardsPK8Fl_LabeliiiijPA3_Kii
 274      00
 275              	.LVL27:
 276              		.loc 1 47 0
 277 0010 4883C418 		addq	$24, %rsp
 278              		.cfi_def_cfa_offset 8
 279 0014 C3       		ret
 280              		.cfi_endproc
 281              	.LFE469:
 283              		.section	.text.unlikely._ZL15fl_shadow_labelPK8Fl_Labeliiiij
 284              	.LCOLDE1:
 285              		.section	.text._ZL15fl_shadow_labelPK8Fl_Labeliiiij
 286              	.LHOTE1:
 287              		.section	.text.unlikely._ZL17fl_engraved_labelPK8Fl_Labeliiiij,"ax",@progbits
 288              	.LCOLDB2:
 289              		.section	.text._ZL17fl_engraved_labelPK8Fl_Labeliiiij,"ax",@progbits
 290              	.LHOTB2:
 291              		.p2align 4,,15
 293              	_ZL17fl_engraved_labelPK8Fl_Labeliiiij:
 294              	.LFB470:
 295              		.loc 1 51 0
 296              		.cfi_startproc
 297              	.LVL28:
 298 0000 4883EC08 		subq	$8, %rsp
 299              		.cfi_def_cfa_offset 16
 300              		.loc 1 56 0
 301 0004 6A07     		pushq	$7
 302              		.cfi_def_cfa_offset 24
 303 0006 68000000 		pushq	$_ZZL17fl_engraved_labelPK8Fl_LabeliiiijE4data
 303      00
 304              		.cfi_def_cfa_offset 32
 305 000b E8000000 		call	_ZL7innardsPK8Fl_LabeliiiijPA3_Kii
 305      00
 306              	.LVL29:
 307              		.loc 1 57 0
 308 0010 4883C418 		addq	$24, %rsp
 309              		.cfi_def_cfa_offset 8
 310 0014 C3       		ret
 311              		.cfi_endproc
 312              	.LFE470:
 314              		.section	.text.unlikely._ZL17fl_engraved_labelPK8Fl_Labeliiiij
 315              	.LCOLDE2:
 316              		.section	.text._ZL17fl_engraved_labelPK8Fl_Labeliiiij
 317              	.LHOTE2:
 318              		.section	.text.unlikely._ZL17fl_embossed_labelPK8Fl_Labeliiiij,"ax",@progbits
 319              	.LCOLDB3:
 320              		.section	.text._ZL17fl_embossed_labelPK8Fl_Labeliiiij,"ax",@progbits
 321              	.LHOTB3:
 322              		.p2align 4,,15
 324              	_ZL17fl_embossed_labelPK8Fl_Labeliiiij:
 325              	.LFB471:
 326              		.loc 1 61 0
 327              		.cfi_startproc
 328              	.LVL30:
 329 0000 4883EC08 		subq	$8, %rsp
 330              		.cfi_def_cfa_offset 16
 331              		.loc 1 66 0
 332 0004 6A07     		pushq	$7
 333              		.cfi_def_cfa_offset 24
 334 0006 68000000 		pushq	$_ZZL17fl_embossed_labelPK8Fl_LabeliiiijE4data
 334      00
 335              		.cfi_def_cfa_offset 32
 336 000b E8000000 		call	_ZL7innardsPK8Fl_LabeliiiijPA3_Kii
 336      00
 337              	.LVL31:
 338              		.loc 1 67 0
 339 0010 4883C418 		addq	$24, %rsp
 340              		.cfi_def_cfa_offset 8
 341 0014 C3       		ret
 342              		.cfi_endproc
 343              	.LFE471:
 345              		.section	.text.unlikely._ZL17fl_embossed_labelPK8Fl_Labeliiiij
 346              	.LCOLDE3:
 347              		.section	.text._ZL17fl_embossed_labelPK8Fl_Labeliiiij
 348              	.LHOTE3:
 349              		.section	.text.unlikely._Z25fl_define_FL_SHADOW_LABELv,"ax",@progbits
 350              	.LCOLDB4:
 351              		.section	.text._Z25fl_define_FL_SHADOW_LABELv,"ax",@progbits
 352              	.LHOTB4:
 353              		.p2align 4,,15
 354              		.globl	_Z25fl_define_FL_SHADOW_LABELv
 356              	_Z25fl_define_FL_SHADOW_LABELv:
 357              	.LFB472:
 358              		.loc 1 69 0
 359              		.cfi_startproc
 360 0000 4883EC08 		subq	$8, %rsp
 361              		.cfi_def_cfa_offset 16
 362              		.loc 1 70 0
 363 0004 31D2     		xorl	%edx, %edx
 364 0006 BE000000 		movl	$_ZL15fl_shadow_labelPK8Fl_Labeliiiij, %esi
 364      00
 365 000b BF020000 		movl	$2, %edi
 365      00
 366 0010 E8000000 		call	_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 366      00
 367              	.LVL32:
 368              		.loc 1 72 0
 369 0015 B8020000 		movl	$2, %eax
 369      00
 370 001a 4883C408 		addq	$8, %rsp
 371              		.cfi_def_cfa_offset 8
 372 001e C3       		ret
 373              		.cfi_endproc
 374              	.LFE472:
 376              		.section	.text.unlikely._Z25fl_define_FL_SHADOW_LABELv
 377              	.LCOLDE4:
 378              		.section	.text._Z25fl_define_FL_SHADOW_LABELv
 379              	.LHOTE4:
 380              		.section	.text.unlikely._Z27fl_define_FL_ENGRAVED_LABELv,"ax",@progbits
 381              	.LCOLDB5:
 382              		.section	.text._Z27fl_define_FL_ENGRAVED_LABELv,"ax",@progbits
 383              	.LHOTB5:
 384              		.p2align 4,,15
 385              		.globl	_Z27fl_define_FL_ENGRAVED_LABELv
 387              	_Z27fl_define_FL_ENGRAVED_LABELv:
 388              	.LFB473:
 389              		.loc 1 73 0
 390              		.cfi_startproc
 391 0000 4883EC08 		subq	$8, %rsp
 392              		.cfi_def_cfa_offset 16
 393              		.loc 1 74 0
 394 0004 31D2     		xorl	%edx, %edx
 395 0006 BE000000 		movl	$_ZL17fl_engraved_labelPK8Fl_Labeliiiij, %esi
 395      00
 396 000b BF030000 		movl	$3, %edi
 396      00
 397 0010 E8000000 		call	_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 397      00
 398              	.LVL33:
 399              		.loc 1 76 0
 400 0015 B8030000 		movl	$3, %eax
 400      00
 401 001a 4883C408 		addq	$8, %rsp
 402              		.cfi_def_cfa_offset 8
 403 001e C3       		ret
 404              		.cfi_endproc
 405              	.LFE473:
 407              		.section	.text.unlikely._Z27fl_define_FL_ENGRAVED_LABELv
 408              	.LCOLDE5:
 409              		.section	.text._Z27fl_define_FL_ENGRAVED_LABELv
 410              	.LHOTE5:
 411              		.section	.text.unlikely._Z27fl_define_FL_EMBOSSED_LABELv,"ax",@progbits
 412              	.LCOLDB6:
 413              		.section	.text._Z27fl_define_FL_EMBOSSED_LABELv,"ax",@progbits
 414              	.LHOTB6:
 415              		.p2align 4,,15
 416              		.globl	_Z27fl_define_FL_EMBOSSED_LABELv
 418              	_Z27fl_define_FL_EMBOSSED_LABELv:
 419              	.LFB474:
 420              		.loc 1 77 0
 421              		.cfi_startproc
 422 0000 4883EC08 		subq	$8, %rsp
 423              		.cfi_def_cfa_offset 16
 424              		.loc 1 78 0
 425 0004 31D2     		xorl	%edx, %edx
 426 0006 BE000000 		movl	$_ZL17fl_embossed_labelPK8Fl_Labeliiiij, %esi
 426      00
 427 000b BF040000 		movl	$4, %edi
 427      00
 428 0010 E8000000 		call	_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 428      00
 429              	.LVL34:
 430              		.loc 1 80 0
 431 0015 B8040000 		movl	$4, %eax
 431      00
 432 001a 4883C408 		addq	$8, %rsp
 433              		.cfi_def_cfa_offset 8
 434 001e C3       		ret
 435              		.cfi_endproc
 436              	.LFE474:
 438              		.section	.text.unlikely._Z27fl_define_FL_EMBOSSED_LABELv
 439              	.LCOLDE6:
 440              		.section	.text._Z27fl_define_FL_EMBOSSED_LABELv
 441              	.LHOTE6:
 442              		.section	.rodata._ZZL17fl_embossed_labelPK8Fl_LabeliiiijE4data,"a",@progbits
 443              		.align 32
 446              	_ZZL17fl_embossed_labelPK8Fl_LabeliiiijE4data:
 447 0000 FFFFFFFF 		.long	-1
 448 0004 00000000 		.long	0
 449 0008 36000000 		.long	54
 450 000c FFFFFFFF 		.long	-1
 451 0010 FFFFFFFF 		.long	-1
 452 0014 36000000 		.long	54
 453 0018 00000000 		.long	0
 454 001c FFFFFFFF 		.long	-1
 455 0020 36000000 		.long	54
 456 0024 01000000 		.long	1
 457 0028 00000000 		.long	0
 458 002c 27000000 		.long	39
 459 0030 01000000 		.long	1
 460 0034 01000000 		.long	1
 461 0038 27000000 		.long	39
 462 003c 00000000 		.long	0
 463 0040 01000000 		.long	1
 464 0044 27000000 		.long	39
 465 0048 00000000 		.long	0
 466 004c 00000000 		.long	0
 467 0050 00000000 		.long	0
 468              		.section	.rodata._ZZL17fl_engraved_labelPK8Fl_LabeliiiijE4data,"a",@progbits
 469              		.align 32
 472              	_ZZL17fl_engraved_labelPK8Fl_LabeliiiijE4data:
 473 0000 01000000 		.long	1
 474 0004 00000000 		.long	0
 475 0008 36000000 		.long	54
 476 000c 01000000 		.long	1
 477 0010 01000000 		.long	1
 478 0014 36000000 		.long	54
 479 0018 00000000 		.long	0
 480 001c 01000000 		.long	1
 481 0020 36000000 		.long	54
 482 0024 FFFFFFFF 		.long	-1
 483 0028 00000000 		.long	0
 484 002c 27000000 		.long	39
 485 0030 FFFFFFFF 		.long	-1
 486 0034 FFFFFFFF 		.long	-1
 487 0038 27000000 		.long	39
 488 003c 00000000 		.long	0
 489 0040 FFFFFFFF 		.long	-1
 490 0044 27000000 		.long	39
 491 0048 00000000 		.long	0
 492 004c 00000000 		.long	0
 493 0050 00000000 		.long	0
 494              		.section	.rodata._ZZL15fl_shadow_labelPK8Fl_LabeliiiijE4data,"a",@progbits
 495              		.align 16
 498              	_ZZL15fl_shadow_labelPK8Fl_LabeliiiijE4data:
 499 0000 02000000 		.long	2
 500 0004 02000000 		.long	2
 501 0008 27000000 		.long	39
 502 000c 00000000 		.long	0
 503 0010 00000000 		.long	0
 504 0014 00000000 		.long	0
 505              		.text
 506              	.Letext0:
 507              		.section	.text.unlikely._ZL7innardsPK8Fl_LabeliiiijPA3_Kii
 508              	.Letext_cold0:
 509              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 510              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 511              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 512              		.file 6 "/usr/include/libio.h"
 513              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 514              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 515              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 516              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 517              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 518              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_engraved_label.cxx
     /tmp/ccl3WuLj.s:13     .text._ZL7innardsPK8Fl_LabeliiiijPA3_Kii:0000000000000000 _ZL7innardsPK8Fl_LabeliiiijPA3_Kii
     /tmp/ccl3WuLj.s:262    .text._ZL15fl_shadow_labelPK8Fl_Labeliiiij:0000000000000000 _ZL15fl_shadow_labelPK8Fl_Labeliiiij
     /tmp/ccl3WuLj.s:498    .rodata._ZZL15fl_shadow_labelPK8Fl_LabeliiiijE4data:0000000000000000 _ZZL15fl_shadow_labelPK8Fl_LabeliiiijE4data
     /tmp/ccl3WuLj.s:293    .text._ZL17fl_engraved_labelPK8Fl_Labeliiiij:0000000000000000 _ZL17fl_engraved_labelPK8Fl_Labeliiiij
     /tmp/ccl3WuLj.s:472    .rodata._ZZL17fl_engraved_labelPK8Fl_LabeliiiijE4data:0000000000000000 _ZZL17fl_engraved_labelPK8Fl_LabeliiiijE4data
     /tmp/ccl3WuLj.s:324    .text._ZL17fl_embossed_labelPK8Fl_Labeliiiij:0000000000000000 _ZL17fl_embossed_labelPK8Fl_Labeliiiij
     /tmp/ccl3WuLj.s:446    .rodata._ZZL17fl_embossed_labelPK8Fl_LabeliiiijE4data:0000000000000000 _ZZL17fl_embossed_labelPK8Fl_LabeliiiijE4data
     /tmp/ccl3WuLj.s:356    .text._Z25fl_define_FL_SHADOW_LABELv:0000000000000000 _Z25fl_define_FL_SHADOW_LABELv
     /tmp/ccl3WuLj.s:387    .text._Z27fl_define_FL_ENGRAVED_LABELv:0000000000000000 _Z27fl_define_FL_ENGRAVED_LABELv
     /tmp/ccl3WuLj.s:418    .text._Z27fl_define_FL_EMBOSSED_LABELv:0000000000000000 _Z27fl_define_FL_EMBOSSED_LABELv
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

UNDEFINED SYMBOLS
fl_graphics_driver
_Z7fl_drawPKciiiijP8Fl_Imagei
_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
