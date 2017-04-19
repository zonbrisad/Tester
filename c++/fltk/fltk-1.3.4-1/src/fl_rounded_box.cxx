   1              		.file	"fl_rounded_box.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL4rboxiiiii,"ax",@progbits
   5              	.LCOLDB3:
   6              		.section	.text._ZL4rboxiiiii,"ax",@progbits
   7              	.LHOTB3:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL4rboxiiiii
  10              	.Ltext_cold0:
  11              		.section	.text._ZL4rboxiiiii
  13              	_ZL4rboxiiiii:
  14              	.LFB469:
  15              		.file 1 "fltk-1.3.4-1/src/fl_rounded_box.cxx"
   1:fltk-1.3.4-1/src/fl_rounded_box.cxx **** ...
  16              		.loc 1 38 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4157     		pushq	%r15
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 15, -16
  22 0002 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 14, -24
  25 0004 4189D7   		movl	%edx, %r15d
  26 0007 4155     		pushq	%r13
  27              		.cfi_def_cfa_offset 32
  28              		.cfi_offset 13, -32
  29 0009 4154     		pushq	%r12
  30              		.cfi_def_cfa_offset 40
  31              		.cfi_offset 12, -40
  32 000b 4589C6   		movl	%r8d, %r14d
  33 000e 55       		pushq	%rbp
  34              		.cfi_def_cfa_offset 48
  35              		.cfi_offset 6, -48
  36 000f 53       		pushq	%rbx
  37              		.cfi_def_cfa_offset 56
  38              		.cfi_offset 3, -56
  39 0010 4883EC38 		subq	$56, %rsp
  40              		.cfi_def_cfa_offset 112
  41              		.loc 1 38 0
  42 0014 894C242C 		movl	%ecx, 44(%rsp)
  43              		.loc 1 41 0
  44 0018 01C9     		addl	%ecx, %ecx
  45              	.LVL1:
  46              		.loc 1 38 0
  47 001a 89742428 		movl	%esi, 40(%rsp)
  48              		.loc 1 41 0
  49 001e 89C8     		movl	%ecx, %eax
  50 0020 BE676666 		movl	$1717986919, %esi
  50      66
  51              	.LVL2:
  52              		.loc 1 38 0
  53 0025 897C2424 		movl	%edi, 36(%rsp)
  54              		.loc 1 41 0
  55 0029 F7EE     		imull	%esi
  56              	.LVL3:
  57 002b 438D3C00 		leal	(%r8,%r8), %edi
  58              	.LVL4:
  59 002f C1F91F   		sarl	$31, %ecx
  60 0032 89F8     		movl	%edi, %eax
  61 0034 C1FF1F   		sarl	$31, %edi
  62 0037 D1FA     		sarl	%edx
  63 0039 89D3     		movl	%edx, %ebx
  64 003b F7EE     		imull	%esi
  65 003d 29CB     		subl	%ecx, %ebx
  66              	.LVL5:
  67 003f D1FA     		sarl	%edx
  68 0041 29FA     		subl	%edi, %edx
  69              	.LVL6:
  70 0043 39D3     		cmpl	%edx, %ebx
  71 0045 0F4ED3   		cmovle	%ebx, %edx
  72              	.LVL7:
  73              		.loc 1 43 0
  74 0048 BB0F0000 		movl	$15, %ebx
  74      00
  75 004d 83FA0F   		cmpl	$15, %edx
  76 0050 7F10     		jg	.L3
  77              		.loc 1 44 0
  78 0052 83FA05   		cmpl	$5, %edx
  79 0055 89D3     		movl	%edx, %ebx
  80 0057 0F859B02 		jne	.L21
  80      0000
  81 005d BB040000 		movl	$4, %ebx
  81      00
  82              	.LVL8:
  83              	.L3:
  84              		.loc 1 47 0
  85 0062 8B4C2424 		movl	36(%rsp), %ecx
  86              	.LBB32:
  87              	.LBB33:
  88              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  89              		.loc 2 374 0
  90 0066 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  90      000000
  91              	.LVL9:
  92              	.LBE33:
  93              	.LBE32:
  94              		.loc 1 47 0
  95 006d 85C9     		testl	%ecx, %ecx
  96              	.LBB36:
  97              	.LBB34:
  98              		.loc 2 374 0
  99 006f 488B07   		movq	(%rdi), %rax
 100              	.LBE34:
 101              	.LBE36:
 102              		.loc 1 47 0
 103 0072 0F847002 		je	.L4
 103      0000
 104              	.LBB37:
 105              	.LBB35:
 106              		.loc 2 374 0
 107 0078 FF90D800 		call	*216(%rax)
 107      0000
 108              	.LVL10:
 109              	.L5:
 110 007e 660FEFE4 		pxor	%xmm4, %xmm4
 111 0082 BD000000 		movl	$_ZL6offset-40, %ebp
 111      00
 112 0087 660FEFF6 		pxor	%xmm6, %xmm6
 113              	.LBE35:
 114              	.LBE37:
 115              		.loc 1 45 0 discriminator 3
 116 008b 660FEFC9 		pxor	%xmm1, %xmm1
 117 008f F2410F2A 		cvtsi2sd	%r15d, %xmm4
 117      E7
 118 0094 F20F2AF3 		cvtsi2sd	%ebx, %xmm6
 119 0098 BB000000 		movl	$_ZL6offset, %ebx
 119      00
 120              	.LVL11:
 121 009d F20F1005 		movsd	.LC0(%rip), %xmm0
 121      00000000 
 122 00a5 4989DD   		movq	%rbx, %r13
 123 00a8 4989DC   		movq	%rbx, %r12
 124 00ab F20F1164 		movsd	%xmm4, 8(%rsp)
 124      2408
 125 00b1 660FEFE4 		pxor	%xmm4, %xmm4
 126 00b5 F20F1134 		movsd	%xmm6, (%rsp)
 126      24
 127 00ba F20F2A64 		cvtsi2sd	40(%rsp), %xmm4
 127      2428
 128 00c0 F20F1164 		movsd	%xmm4, 16(%rsp)
 128      2410
 129              	.LVL12:
 130              	.L7:
 131              	.LBB38:
 132              	.LBB39:
 133              	.LBB40:
 134              	.LBB41:
 375:fltk-1.3.4-1/FL/fl_draw.H **** /**
 376:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a single vertex to the current path.
 377:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->vertex(x,y); }
 135              		.loc 2 379 0 discriminator 2
 136 00c6 F20F101C 		movsd	(%rsp), %xmm3
 136      24
 137 00cb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 137      000000
 138 00d2 4983ED08 		subq	$8, %r13
 139 00d6 4983C408 		addq	$8, %r12
 140 00da F20F59CB 		mulsd	%xmm3, %xmm1
 141              	.LVL13:
 142 00de F20F59C3 		mulsd	%xmm3, %xmm0
 143              	.LVL14:
 144 00e2 488B0F   		movq	(%rdi), %rcx
 145 00e5 F20F584C 		addsd	8(%rsp), %xmm1
 145      2408
 146              	.LVL15:
 147 00eb F20F5844 		addsd	16(%rsp), %xmm0
 147      2410
 148              	.LVL16:
 149 00f1 F20F580D 		addsd	.LC2(%rip), %xmm1
 149      00000000 
 150              	.LVL17:
 151 00f9 F20F5805 		addsd	.LC2(%rip), %xmm0
 151      00000000 
 152              	.LVL18:
 153 0101 FF91E000 		call	*224(%rcx)
 153      0000
 154              	.LVL19:
 155              	.LBE41:
 156              	.LBE40:
 157              	.LBE39:
 158              	.LBE38:
 159              		.loc 1 48 0 discriminator 2
 160 0107 4C39ED   		cmpq	%r13, %rbp
 161 010a 7414     		je	.L6
 162 010c F2410F10 		movsd	(%r12), %xmm1
 162      0C24
 163 0112 F2410F10 		movsd	32(%r13), %xmm0
 163      4520
 164 0118 EBAC     		jmp	.L7
 165 011a 660F1F44 		.p2align 4,,10
 165      0000
 166              		.p2align 3
 167              	.L6:
 168 0120 660FEFF6 		pxor	%xmm6, %xmm6
 169 0124 438D4437 		leal	-1(%r15,%r14), %eax
 169      FF
 170              		.loc 1 48 0 is_stmt 0
 171 0129 660FEFC0 		pxor	%xmm0, %xmm0
 172 012d 41BF0000 		movl	$_ZL6offset, %r15d
 172      0000
 173              	.LVL20:
 174 0133 F20F100D 		movsd	.LC0(%rip), %xmm1
 174      00000000 
 175 013b 4D89FE   		movq	%r15, %r14
 176              	.LVL21:
 177 013e F20F2AF0 		cvtsi2sd	%eax, %xmm6
 178 0142 F20F1174 		movsd	%xmm6, 24(%rsp)
 178      2418
 179              	.L9:
 180              	.LVL22:
 181              	.LBB42:
 182              	.LBB43:
 183              	.LBB44:
 184              	.LBB45:
 185              		.loc 2 379 0 is_stmt 1 discriminator 2
 186 0148 F20F1024 		movsd	(%rsp), %xmm4
 186      24
 187 014d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 187      000000
 188 0154 4983EE08 		subq	$8, %r14
 189 0158 F20F106C 		movsd	24(%rsp), %xmm5
 189      2418
 190 015e 4983C708 		addq	$8, %r15
 191 0162 F20F59CC 		mulsd	%xmm4, %xmm1
 192              	.LVL23:
 193 0166 F20F59C4 		mulsd	%xmm4, %xmm0
 194              	.LVL24:
 195 016a 488B07   		movq	(%rdi), %rax
 196 016d F20F5CE9 		subsd	%xmm1, %xmm5
 197              	.LVL25:
 198 0171 F20F5844 		addsd	16(%rsp), %xmm0
 198      2410
 199              	.LVL26:
 200 0177 660F28CD 		movapd	%xmm5, %xmm1
 201 017b F20F580D 		addsd	.LC2(%rip), %xmm1
 201      00000000 
 202              	.LVL27:
 203 0183 F20F5805 		addsd	.LC2(%rip), %xmm0
 203      00000000 
 204              	.LVL28:
 205 018b FF90E000 		call	*224(%rax)
 205      0000
 206              	.LVL29:
 207              	.LBE45:
 208              	.LBE44:
 209              	.LBE43:
 210              	.LBE42:
 211              		.loc 1 50 0 discriminator 2
 212 0191 4981FE00 		cmpq	$_ZL6offset-40, %r14
 212      000000
 213 0198 7416     		je	.L8
 214 019a F2410F10 		movsd	32(%r14), %xmm1
 214      4E20
 215 01a0 F2410F10 		movsd	(%r15), %xmm0
 215      07
 216 01a5 EBA1     		jmp	.L9
 217 01a7 660F1F84 		.p2align 4,,10
 217      00000000 
 217      00
 218              		.p2align 3
 219              	.L8:
 220 01b0 8B442428 		movl	40(%rsp), %eax
 221 01b4 8B74242C 		movl	44(%rsp), %esi
 222              		.loc 1 50 0 is_stmt 0
 223 01b8 41BC0000 		movl	$_ZL6offset, %r12d
 223      0000
 224 01be 660FEFE4 		pxor	%xmm4, %xmm4
 225 01c2 4D89E5   		movq	%r12, %r13
 226 01c5 660FEFC0 		pxor	%xmm0, %xmm0
 227 01c9 8D4430FF 		leal	-1(%rax,%rsi), %eax
 228 01cd F20F1015 		movsd	.LC0(%rip), %xmm2
 228      00000000 
 229 01d5 F20F2AE0 		cvtsi2sd	%eax, %xmm4
 230 01d9 F20F1164 		movsd	%xmm4, 16(%rsp)
 230      2410
 231              	.L11:
 232              	.LVL30:
 233              	.LBB46:
 234              	.LBB47:
 235              	.LBB48:
 236              	.LBB49:
 237              		.loc 2 379 0 is_stmt 1 discriminator 2
 238 01df F20F1034 		movsd	(%rsp), %xmm6
 238      24
 239 01e4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 239      000000
 240 01eb 4983EC08 		subq	$8, %r12
 241 01ef F20F104C 		movsd	24(%rsp), %xmm1
 241      2418
 242 01f5 4983C508 		addq	$8, %r13
 243 01f9 F20F59C6 		mulsd	%xmm6, %xmm0
 244              	.LVL31:
 245 01fd F20F59D6 		mulsd	%xmm6, %xmm2
 246              	.LVL32:
 247 0201 488B07   		movq	(%rdi), %rax
 248 0204 F20F107C 		movsd	16(%rsp), %xmm7
 248      2410
 249 020a F20F5CC8 		subsd	%xmm0, %xmm1
 250              	.LVL33:
 251 020e F20F1005 		movsd	.LC2(%rip), %xmm0
 251      00000000 
 252 0216 F20F5CFA 		subsd	%xmm2, %xmm7
 253              	.LVL34:
 254 021a F20F580D 		addsd	.LC2(%rip), %xmm1
 254      00000000 
 255              	.LVL35:
 256 0222 F20F58C7 		addsd	%xmm7, %xmm0
 257              	.LVL36:
 258 0226 FF90E000 		call	*224(%rax)
 258      0000
 259              	.LVL37:
 260              	.LBE49:
 261              	.LBE48:
 262              	.LBE47:
 263              	.LBE46:
 264              		.loc 1 52 0 discriminator 2
 265 022c 4981FC00 		cmpq	$_ZL6offset-40, %r12
 265      000000
 266 0233 7413     		je	.L17
 267 0235 F2410F10 		movsd	0(%r13), %xmm0
 267      4500
 268 023b F2410F10 		movsd	32(%r12), %xmm2
 268      542420
 269 0242 EB9B     		jmp	.L11
 270              		.p2align 4,,10
 271 0244 0F1F4000 		.p2align 3
 272              	.L17:
 273 0248 660FEFC0 		pxor	%xmm0, %xmm0
 274 024c 41BC0000 		movl	$_ZL6offset, %r12d
 274      0000
 275 0252 F20F100D 		movsd	.LC0(%rip), %xmm1
 275      00000000 
 276              	.L10:
 277              	.LVL38:
 278              	.LBB50:
 279              	.LBB51:
 280              	.LBB52:
 281              	.LBB53:
 282              		.loc 2 379 0 discriminator 2
 283 025a F20F102C 		movsd	(%rsp), %xmm5
 283      24
 284 025f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 284      000000
 285 0266 4983EC08 		subq	$8, %r12
 286 026a F20F107C 		movsd	16(%rsp), %xmm7
 286      2410
 287 0270 4883C308 		addq	$8, %rbx
 288 0274 F20F59CD 		mulsd	%xmm5, %xmm1
 289              	.LVL39:
 290 0278 F20F59C5 		mulsd	%xmm5, %xmm0
 291              	.LVL40:
 292 027c 488B07   		movq	(%rdi), %rax
 293 027f F20F584C 		addsd	8(%rsp), %xmm1
 293      2408
 294              	.LVL41:
 295 0285 F20F5CF8 		subsd	%xmm0, %xmm7
 296              	.LVL42:
 297 0289 F20F1005 		movsd	.LC2(%rip), %xmm0
 297      00000000 
 298 0291 F20F58C7 		addsd	%xmm7, %xmm0
 299              	.LVL43:
 300 0295 F20F580D 		addsd	.LC2(%rip), %xmm1
 300      00000000 
 301              	.LVL44:
 302 029d FF90E000 		call	*224(%rax)
 302      0000
 303              	.LVL45:
 304              	.LBE53:
 305              	.LBE52:
 306              	.LBE51:
 307              	.LBE50:
 308              		.loc 1 54 0 discriminator 2
 309 02a3 4C39E5   		cmpq	%r12, %rbp
 310 02a6 7410     		je	.L12
 311 02a8 F2410F10 		movsd	32(%r12), %xmm1
 311      4C2420
 312 02af F20F1003 		movsd	(%rbx), %xmm0
 313 02b3 EBA5     		jmp	.L10
 314              		.p2align 4,,10
 315 02b5 0F1F00   		.p2align 3
 316              	.L12:
 317              		.loc 1 56 0
 318 02b8 8B542424 		movl	36(%rsp), %edx
 319              	.LBB54:
 320              	.LBB55:
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
 321              		.loc 2 440 0
 322 02bc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 322      000000
 323              	.LBE55:
 324              	.LBE54:
 325              		.loc 1 56 0
 326 02c3 85D2     		testl	%edx, %edx
 327              	.LBB58:
 328              	.LBB56:
 329              		.loc 2 440 0
 330 02c5 488B07   		movq	(%rdi), %rax
 331              	.LBE56:
 332              	.LBE58:
 333              		.loc 1 56 0
 334 02c8 7546     		jne	.L22
 335              	.LBB59:
 336              	.LBB60:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 337              		.loc 2 436 0
 338 02ca 488B8020 		movq	288(%rax), %rax
 338      010000
 339              	.LBE60:
 340              	.LBE59:
 341              		.loc 1 57 0
 342 02d1 4883C438 		addq	$56, %rsp
 343              		.cfi_remember_state
 344              		.cfi_def_cfa_offset 56
 345 02d5 5B       		popq	%rbx
 346              		.cfi_def_cfa_offset 48
 347 02d6 5D       		popq	%rbp
 348              		.cfi_def_cfa_offset 40
 349 02d7 415C     		popq	%r12
 350              		.cfi_def_cfa_offset 32
 351 02d9 415D     		popq	%r13
 352              		.cfi_def_cfa_offset 24
 353 02db 415E     		popq	%r14
 354              		.cfi_def_cfa_offset 16
 355 02dd 415F     		popq	%r15
 356              		.cfi_def_cfa_offset 8
 357              	.LBB63:
 358              	.LBB61:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 359              		.loc 2 436 0
 360 02df FFE0     		jmp	*%rax
 361              	.LVL46:
 362              		.p2align 4,,10
 363 02e1 0F1F8000 		.p2align 3
 363      000000
 364              	.L4:
 365              		.cfi_restore_state
 366              	.LBE61:
 367              	.LBE63:
 368              	.LBB64:
 369              	.LBB65:
 370:fltk-1.3.4-1/FL/fl_draw.H **** /**
 370              		.loc 2 370 0
 371 02e8 FF90D000 		call	*208(%rax)
 371      0000
 372              	.LVL47:
 373 02ee E98BFDFF 		jmp	.L5
 373      FF
 374              	.LVL48:
 375              		.p2align 4,,10
 376 02f3 0F1F4400 		.p2align 3
 376      00
 377              	.L21:
 378              	.LBE65:
 379              	.LBE64:
 380              		.loc 1 45 0
 381 02f8 83FA07   		cmpl	$7, %edx
 382 02fb B8080000 		movl	$8, %eax
 382      00
 383 0300 0F44D8   		cmove	%eax, %ebx
 384 0303 E95AFDFF 		jmp	.L3
 384      FF
 385              	.LVL49:
 386 0308 0F1F8400 		.p2align 4,,10
 386      00000000 
 387              		.p2align 3
 388              	.L22:
 389              	.LBB66:
 390              	.LBB57:
 391              		.loc 2 440 0
 392 0310 488B8028 		movq	296(%rax), %rax
 392      010000
 393              	.LBE57:
 394              	.LBE66:
 395              		.loc 1 57 0
 396 0317 4883C438 		addq	$56, %rsp
 397              		.cfi_def_cfa_offset 56
 398 031b 5B       		popq	%rbx
 399              		.cfi_def_cfa_offset 48
 400 031c 5D       		popq	%rbp
 401              		.cfi_def_cfa_offset 40
 402 031d 415C     		popq	%r12
 403              		.cfi_def_cfa_offset 32
 404 031f 415D     		popq	%r13
 405              		.cfi_def_cfa_offset 24
 406 0321 415E     		popq	%r14
 407              		.cfi_def_cfa_offset 16
 408 0323 415F     		popq	%r15
 409              		.cfi_def_cfa_offset 8
 410              	.LBB67:
 411              	.LBB62:
 436:fltk-1.3.4-1/FL/fl_draw.H **** /**
 412              		.loc 2 436 0
 413 0325 FFE0     		jmp	*%rax
 414              	.LVL50:
 415              	.LBE62:
 416              	.LBE67:
 417              		.cfi_endproc
 418              	.LFE469:
 420              		.section	.text.unlikely._ZL4rboxiiiii
 421              	.LCOLDE3:
 422              		.section	.text._ZL4rboxiiiii
 423              	.LHOTE3:
 424              		.section	.text.unlikely._ZL14fl_rounded_boxiiiij,"ax",@progbits
 425              	.LCOLDB4:
 426              		.section	.text._ZL14fl_rounded_boxiiiij,"ax",@progbits
 427              	.LHOTB4:
 428              		.p2align 4,,15
 430              	_ZL14fl_rounded_boxiiiij:
 431              	.LFB472:
 432              		.loc 1 69 0
 433              		.cfi_startproc
 434              	.LVL51:
 435 0000 4155     		pushq	%r13
 436              		.cfi_def_cfa_offset 16
 437              		.cfi_offset 13, -16
 438 0002 4154     		pushq	%r12
 439              		.cfi_def_cfa_offset 24
 440              		.cfi_offset 12, -24
 441 0004 4189CD   		movl	%ecx, %r13d
 442 0007 55       		pushq	%rbp
 443              		.cfi_def_cfa_offset 32
 444              		.cfi_offset 6, -32
 445 0008 53       		pushq	%rbx
 446              		.cfi_def_cfa_offset 40
 447              		.cfi_offset 3, -40
 448 0009 89F5     		movl	%esi, %ebp
 449 000b 4189D4   		movl	%edx, %r12d
 450 000e 89FB     		movl	%edi, %ebx
 451              		.loc 1 70 0
 452 0010 4489C7   		movl	%r8d, %edi
 453              	.LVL52:
 454              		.loc 1 69 0
 455 0013 4883EC08 		subq	$8, %rsp
 456              		.cfi_def_cfa_offset 48
 457              		.loc 1 70 0
 458 0017 E8000000 		call	_ZN2Fl13set_box_colorEj
 458      00
 459              	.LVL53:
 460              		.loc 1 71 0
 461 001c 4589E8   		movl	%r13d, %r8d
 462 001f 4489E1   		movl	%r12d, %ecx
 463 0022 89EA     		movl	%ebp, %edx
 464 0024 89DE     		movl	%ebx, %esi
 465 0026 BF010000 		movl	$1, %edi
 465      00
 466 002b E8000000 		call	_ZL4rboxiiiii
 466      00
 467              	.LVL54:
 468              	.LBB68:
 469              	.LBB69:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 470              		.loc 2 52 0
 471 0030 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 471      000000
 472 0037 BE380000 		movl	$56, %esi
 472      00
 473 003c 488B07   		movq	(%rdi), %rax
 474 003f FF908800 		call	*136(%rax)
 474      0000
 475              	.LVL55:
 476              	.LBE69:
 477              	.LBE68:
 478              		.loc 1 73 0
 479 0045 4883C408 		addq	$8, %rsp
 480              		.cfi_def_cfa_offset 40
 481              		.loc 1 72 0
 482 0049 4589E8   		movl	%r13d, %r8d
 483 004c 4489E1   		movl	%r12d, %ecx
 484 004f 89EA     		movl	%ebp, %edx
 485 0051 89DE     		movl	%ebx, %esi
 486 0053 31FF     		xorl	%edi, %edi
 487              		.loc 1 73 0
 488 0055 5B       		popq	%rbx
 489              		.cfi_def_cfa_offset 32
 490              	.LVL56:
 491 0056 5D       		popq	%rbp
 492              		.cfi_def_cfa_offset 24
 493              	.LVL57:
 494 0057 415C     		popq	%r12
 495              		.cfi_def_cfa_offset 16
 496              	.LVL58:
 497 0059 415D     		popq	%r13
 498              		.cfi_def_cfa_offset 8
 499              	.LVL59:
 500              		.loc 1 72 0
 501 005b E9000000 		jmp	_ZL4rboxiiiii
 501      00
 502              	.LVL60:
 503              		.cfi_endproc
 504              	.LFE472:
 506              		.section	.text.unlikely._ZL14fl_rounded_boxiiiij
 507              	.LCOLDE4:
 508              		.section	.text._ZL14fl_rounded_boxiiiij
 509              	.LHOTE4:
 510              		.section	.text.unlikely._ZL14fl_rshadow_boxiiiij,"ax",@progbits
 511              	.LCOLDB5:
 512              		.section	.text._ZL14fl_rshadow_boxiiiij,"ax",@progbits
 513              	.LHOTB5:
 514              		.p2align 4,,15
 516              	_ZL14fl_rshadow_boxiiiij:
 517              	.LFB473:
 518              		.loc 1 75 0
 519              		.cfi_startproc
 520              	.LVL61:
 521 0000 4157     		pushq	%r15
 522              		.cfi_def_cfa_offset 16
 523              		.cfi_offset 15, -16
 524 0002 4156     		pushq	%r14
 525              		.cfi_def_cfa_offset 24
 526              		.cfi_offset 14, -24
 527 0004 4155     		pushq	%r13
 528              		.cfi_def_cfa_offset 32
 529              		.cfi_offset 13, -32
 530 0006 4154     		pushq	%r12
 531              		.cfi_def_cfa_offset 40
 532              		.cfi_offset 12, -40
 533 0008 4189FC   		movl	%edi, %r12d
 534 000b 55       		pushq	%rbp
 535              		.cfi_def_cfa_offset 48
 536              		.cfi_offset 6, -48
 537 000c 53       		pushq	%rbx
 538              		.cfi_def_cfa_offset 56
 539              		.cfi_offset 3, -56
 540 000d 4189F5   		movl	%esi, %r13d
 541              		.loc 1 78 0
 542 0010 458D7D03 		leal	3(%r13), %r15d
 543 0014 458D7424 		leal	3(%r12), %r14d
 543      03
 544              		.loc 1 75 0
 545 0019 89D3     		movl	%edx, %ebx
 546 001b 4883EC18 		subq	$24, %rsp
 547              		.cfi_def_cfa_offset 80
 548              	.LBB70:
 549              	.LBB71:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 550              		.loc 2 52 0
 551 001f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 551      000000
 552              	.LVL62:
 553              	.LBE71:
 554              	.LBE70:
 555              		.loc 1 75 0
 556 0026 89CD     		movl	%ecx, %ebp
 557 0028 44894424 		movl	%r8d, 12(%rsp)
 557      0C
 558              	.LBB73:
 559              	.LBB72:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 560              		.loc 2 52 0
 561 002d BE270000 		movl	$39, %esi
 561      00
 562              	.LVL63:
 563 0032 488B07   		movq	(%rdi), %rax
 564 0035 FF908800 		call	*136(%rax)
 564      0000
 565              	.LVL64:
 566              	.LBE72:
 567              	.LBE73:
 568              		.loc 1 78 0
 569 003b 4189E8   		movl	%ebp, %r8d
 570 003e 89D9     		movl	%ebx, %ecx
 571 0040 4489FA   		movl	%r15d, %edx
 572 0043 4489F6   		movl	%r14d, %esi
 573 0046 BF010000 		movl	$1, %edi
 573      00
 574 004b E8000000 		call	_ZL4rboxiiiii
 574      00
 575              	.LVL65:
 576              		.loc 1 79 0
 577 0050 4189E8   		movl	%ebp, %r8d
 578 0053 89D9     		movl	%ebx, %ecx
 579 0055 4489FA   		movl	%r15d, %edx
 580 0058 4489F6   		movl	%r14d, %esi
 581 005b 31FF     		xorl	%edi, %edi
 582 005d E8000000 		call	_ZL4rboxiiiii
 582      00
 583              	.LVL66:
 584              		.loc 1 81 0
 585 0062 448B4424 		movl	12(%rsp), %r8d
 585      0C
 586              		.loc 1 82 0
 587 0067 4883C418 		addq	$24, %rsp
 588              		.cfi_def_cfa_offset 56
 589              		.loc 1 81 0
 590 006b 89E9     		movl	%ebp, %ecx
 591 006d 89DA     		movl	%ebx, %edx
 592 006f 4489EE   		movl	%r13d, %esi
 593 0072 4489E7   		movl	%r12d, %edi
 594              		.loc 1 82 0
 595 0075 5B       		popq	%rbx
 596              		.cfi_def_cfa_offset 48
 597              	.LVL67:
 598 0076 5D       		popq	%rbp
 599              		.cfi_def_cfa_offset 40
 600              	.LVL68:
 601 0077 415C     		popq	%r12
 602              		.cfi_def_cfa_offset 32
 603              	.LVL69:
 604 0079 415D     		popq	%r13
 605              		.cfi_def_cfa_offset 24
 606              	.LVL70:
 607 007b 415E     		popq	%r14
 608              		.cfi_def_cfa_offset 16
 609 007d 415F     		popq	%r15
 610              		.cfi_def_cfa_offset 8
 611              		.loc 1 81 0
 612 007f E9000000 		jmp	_ZL14fl_rounded_boxiiiij
 612      00
 613              	.LVL71:
 614              		.cfi_endproc
 615              	.LFE473:
 617              		.section	.text.unlikely._ZL14fl_rshadow_boxiiiij
 618              	.LCOLDE5:
 619              		.section	.text._ZL14fl_rshadow_boxiiiij
 620              	.LHOTE5:
 621              		.section	.text.unlikely._ZL16fl_rounded_frameiiiij,"ax",@progbits
 622              	.LCOLDB6:
 623              		.section	.text._ZL16fl_rounded_frameiiiij,"ax",@progbits
 624              	.LHOTB6:
 625              		.p2align 4,,15
 627              	_ZL16fl_rounded_frameiiiij:
 628              	.LFB471:
 629              		.loc 1 64 0
 630              		.cfi_startproc
 631              	.LVL72:
 632 0000 4155     		pushq	%r13
 633              		.cfi_def_cfa_offset 16
 634              		.cfi_offset 13, -16
 635 0002 4154     		pushq	%r12
 636              		.cfi_def_cfa_offset 24
 637              		.cfi_offset 12, -24
 638 0004 4189CD   		movl	%ecx, %r13d
 639 0007 55       		pushq	%rbp
 640              		.cfi_def_cfa_offset 32
 641              		.cfi_offset 6, -32
 642 0008 53       		pushq	%rbx
 643              		.cfi_def_cfa_offset 40
 644              		.cfi_offset 3, -40
 645 0009 89FB     		movl	%edi, %ebx
 646              		.loc 1 65 0
 647 000b 4489C7   		movl	%r8d, %edi
 648              	.LVL73:
 649              		.loc 1 64 0
 650 000e 89F5     		movl	%esi, %ebp
 651 0010 4189D4   		movl	%edx, %r12d
 652 0013 4883EC08 		subq	$8, %rsp
 653              		.cfi_def_cfa_offset 48
 654              		.loc 1 65 0
 655 0017 E8000000 		call	_ZN2Fl13set_box_colorEj
 655      00
 656              	.LVL74:
 657              		.loc 1 67 0
 658 001c 4883C408 		addq	$8, %rsp
 659              		.cfi_def_cfa_offset 40
 660              		.loc 1 66 0
 661 0020 4589E8   		movl	%r13d, %r8d
 662 0023 4489E1   		movl	%r12d, %ecx
 663 0026 89EA     		movl	%ebp, %edx
 664 0028 89DE     		movl	%ebx, %esi
 665 002a 31FF     		xorl	%edi, %edi
 666              		.loc 1 67 0
 667 002c 5B       		popq	%rbx
 668              		.cfi_def_cfa_offset 32
 669              	.LVL75:
 670 002d 5D       		popq	%rbp
 671              		.cfi_def_cfa_offset 24
 672              	.LVL76:
 673 002e 415C     		popq	%r12
 674              		.cfi_def_cfa_offset 16
 675              	.LVL77:
 676 0030 415D     		popq	%r13
 677              		.cfi_def_cfa_offset 8
 678              	.LVL78:
 679              		.loc 1 66 0
 680 0032 E9000000 		jmp	_ZL4rboxiiiii
 680      00
 681              	.LVL79:
 682              		.cfi_endproc
 683              	.LFE471:
 685              		.section	.text.unlikely._ZL16fl_rounded_frameiiiij
 686              	.LCOLDE6:
 687              		.section	.text._ZL16fl_rounded_frameiiiij
 688              	.LHOTE6:
 689              		.section	.text.unlikely._ZL12fl_rflat_boxiiiij,"ax",@progbits
 690              	.LCOLDB7:
 691              		.section	.text._ZL12fl_rflat_boxiiiij,"ax",@progbits
 692              	.LHOTB7:
 693              		.p2align 4,,15
 695              	_ZL12fl_rflat_boxiiiij:
 696              	.LFB470:
 697              		.loc 1 59 0
 698              		.cfi_startproc
 699              	.LVL80:
 700 0000 4155     		pushq	%r13
 701              		.cfi_def_cfa_offset 16
 702              		.cfi_offset 13, -16
 703 0002 4154     		pushq	%r12
 704              		.cfi_def_cfa_offset 24
 705              		.cfi_offset 12, -24
 706 0004 4189CD   		movl	%ecx, %r13d
 707 0007 55       		pushq	%rbp
 708              		.cfi_def_cfa_offset 32
 709              		.cfi_offset 6, -32
 710 0008 53       		pushq	%rbx
 711              		.cfi_def_cfa_offset 40
 712              		.cfi_offset 3, -40
 713 0009 89F5     		movl	%esi, %ebp
 714 000b 4189D4   		movl	%edx, %r12d
 715 000e 89FB     		movl	%edi, %ebx
 716              		.loc 1 60 0
 717 0010 4489C7   		movl	%r8d, %edi
 718              	.LVL81:
 719              		.loc 1 59 0
 720 0013 4883EC08 		subq	$8, %rsp
 721              		.cfi_def_cfa_offset 48
 722              		.loc 1 60 0
 723 0017 E8000000 		call	_ZN2Fl13set_box_colorEj
 723      00
 724              	.LVL82:
 725              		.loc 1 61 0
 726 001c 4589E8   		movl	%r13d, %r8d
 727 001f 4489E1   		movl	%r12d, %ecx
 728 0022 89EA     		movl	%ebp, %edx
 729 0024 89DE     		movl	%ebx, %esi
 730 0026 BF010000 		movl	$1, %edi
 730      00
 731 002b E8000000 		call	_ZL4rboxiiiii
 731      00
 732              	.LVL83:
 733              		.loc 1 62 0
 734 0030 4883C408 		addq	$8, %rsp
 735              		.cfi_def_cfa_offset 40
 736              		.loc 1 61 0
 737 0034 4589E8   		movl	%r13d, %r8d
 738 0037 4489E1   		movl	%r12d, %ecx
 739 003a 89EA     		movl	%ebp, %edx
 740 003c 89DE     		movl	%ebx, %esi
 741 003e 31FF     		xorl	%edi, %edi
 742              		.loc 1 62 0
 743 0040 5B       		popq	%rbx
 744              		.cfi_def_cfa_offset 32
 745              	.LVL84:
 746 0041 5D       		popq	%rbp
 747              		.cfi_def_cfa_offset 24
 748              	.LVL85:
 749 0042 415C     		popq	%r12
 750              		.cfi_def_cfa_offset 16
 751              	.LVL86:
 752 0044 415D     		popq	%r13
 753              		.cfi_def_cfa_offset 8
 754              	.LVL87:
 755              		.loc 1 61 0
 756 0046 E9000000 		jmp	_ZL4rboxiiiii
 756      00
 757              	.LVL88:
 758              		.cfi_endproc
 759              	.LFE470:
 761              		.section	.text.unlikely._ZL12fl_rflat_boxiiiij
 762              	.LCOLDE7:
 763              		.section	.text._ZL12fl_rflat_boxiiiij
 764              	.LHOTE7:
 765              		.section	.text.unlikely._Z24fl_define_FL_ROUNDED_BOXv,"ax",@progbits
 766              	.LCOLDB8:
 767              		.section	.text._Z24fl_define_FL_ROUNDED_BOXv,"ax",@progbits
 768              	.LHOTB8:
 769              		.p2align 4,,15
 770              		.globl	_Z24fl_define_FL_ROUNDED_BOXv
 772              	_Z24fl_define_FL_ROUNDED_BOXv:
 773              	.LFB474:
 774              		.loc 1 86 0
 775              		.cfi_startproc
 776 0000 4883EC08 		subq	$8, %rsp
 777              		.cfi_def_cfa_offset 16
 778              		.loc 1 87 0
 779 0004 BE000000 		movl	$_ZL16fl_rounded_frameiiiij, %esi
 779      00
 780 0009 BF140000 		movl	$20, %edi
 780      00
 781 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 781      00
 782              	.LVL89:
 783              		.loc 1 88 0
 784 0013 BE000000 		movl	$_ZL14fl_rounded_boxiiiij, %esi
 784      00
 785 0018 BF120000 		movl	$18, %edi
 785      00
 786 001d E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 786      00
 787              	.LVL90:
 788              		.loc 1 90 0
 789 0022 B8120000 		movl	$18, %eax
 789      00
 790 0027 4883C408 		addq	$8, %rsp
 791              		.cfi_def_cfa_offset 8
 792 002b C3       		ret
 793              		.cfi_endproc
 794              	.LFE474:
 796              		.section	.text.unlikely._Z24fl_define_FL_ROUNDED_BOXv
 797              	.LCOLDE8:
 798              		.section	.text._Z24fl_define_FL_ROUNDED_BOXv
 799              	.LHOTE8:
 800              		.section	.text.unlikely._Z22fl_define_FL_RFLAT_BOXv,"ax",@progbits
 801              	.LCOLDB9:
 802              		.section	.text._Z22fl_define_FL_RFLAT_BOXv,"ax",@progbits
 803              	.LHOTB9:
 804              		.p2align 4,,15
 805              		.globl	_Z22fl_define_FL_RFLAT_BOXv
 807              	_Z22fl_define_FL_RFLAT_BOXv:
 808              	.LFB475:
 809              		.loc 1 92 0
 810              		.cfi_startproc
 811 0000 4883EC08 		subq	$8, %rsp
 812              		.cfi_def_cfa_offset 16
 813              		.loc 1 93 0
 814 0004 BE000000 		movl	$_ZL12fl_rflat_boxiiiij, %esi
 814      00
 815 0009 BF150000 		movl	$21, %edi
 815      00
 816 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 816      00
 817              	.LVL91:
 818              		.loc 1 95 0
 819 0013 B8150000 		movl	$21, %eax
 819      00
 820 0018 4883C408 		addq	$8, %rsp
 821              		.cfi_def_cfa_offset 8
 822 001c C3       		ret
 823              		.cfi_endproc
 824              	.LFE475:
 826              		.section	.text.unlikely._Z22fl_define_FL_RFLAT_BOXv
 827              	.LCOLDE9:
 828              		.section	.text._Z22fl_define_FL_RFLAT_BOXv
 829              	.LHOTE9:
 830              		.section	.text.unlikely._Z24fl_define_FL_RSHADOW_BOXv,"ax",@progbits
 831              	.LCOLDB10:
 832              		.section	.text._Z24fl_define_FL_RSHADOW_BOXv,"ax",@progbits
 833              	.LHOTB10:
 834              		.p2align 4,,15
 835              		.globl	_Z24fl_define_FL_RSHADOW_BOXv
 837              	_Z24fl_define_FL_RSHADOW_BOXv:
 838              	.LFB476:
 839              		.loc 1 97 0
 840              		.cfi_startproc
 841 0000 4883EC08 		subq	$8, %rsp
 842              		.cfi_def_cfa_offset 16
 843              		.loc 1 98 0
 844 0004 BE000000 		movl	$_ZL14fl_rshadow_boxiiiij, %esi
 844      00
 845 0009 BF130000 		movl	$19, %edi
 845      00
 846 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 846      00
 847              	.LVL92:
 848              		.loc 1 100 0
 849 0013 B8130000 		movl	$19, %eax
 849      00
 850 0018 4883C408 		addq	$8, %rsp
 851              		.cfi_def_cfa_offset 8
 852 001c C3       		ret
 853              		.cfi_endproc
 854              	.LFE476:
 856              		.section	.text.unlikely._Z24fl_define_FL_RSHADOW_BOXv
 857              	.LCOLDE10:
 858              		.section	.text._Z24fl_define_FL_RSHADOW_BOXv
 859              	.LHOTE10:
 860              		.section	.rodata._ZL6offset,"a",@progbits
 861              		.align 32
 864              	_ZL6offset:
 865 0000 00000000 		.long	0
 866 0004 00000000 		.long	0
 867 0008 224F92AE 		.long	2928824098
 868 000c 997CB33F 		.long	1068727449
 869 0010 02D4D4B2 		.long	3000292354
 870 0014 B5BED23F 		.long	1070775989
 871 0018 C55565DF 		.long	3747960261
 872 001c 15C1E33F 		.long	1071890709
 873 0020 00000000 		.long	0
 874 0024 0000F03F 		.long	1072693248
 875              		.section	.rodata.cst8,"aM",@progbits,8
 876              		.align 8
 877              	.LC0:
 878 0000 00000000 		.long	0
 879 0004 0000F03F 		.long	1072693248
 880              		.align 8
 881              	.LC2:
 882 0008 00000000 		.long	0
 883 000c 0000E03F 		.long	1071644672
 884              		.text
 885              	.Letext0:
 886              		.section	.text.unlikely._ZL4rboxiiiii
 887              	.Letext_cold0:
 888              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 889              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 890              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 891              		.file 6 "/usr/include/libio.h"
 892              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 893              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 894              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 895              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 896              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 897              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_rounded_box.cxx
     /tmp/ccSkZn2P.s:13     .text._ZL4rboxiiiii:0000000000000000 _ZL4rboxiiiii
     /tmp/ccSkZn2P.s:864    .rodata._ZL6offset:0000000000000000 _ZL6offset
     /tmp/ccSkZn2P.s:430    .text._ZL14fl_rounded_boxiiiij:0000000000000000 _ZL14fl_rounded_boxiiiij
     /tmp/ccSkZn2P.s:516    .text._ZL14fl_rshadow_boxiiiij:0000000000000000 _ZL14fl_rshadow_boxiiiij
     /tmp/ccSkZn2P.s:627    .text._ZL16fl_rounded_frameiiiij:0000000000000000 _ZL16fl_rounded_frameiiiij
     /tmp/ccSkZn2P.s:695    .text._ZL12fl_rflat_boxiiiij:0000000000000000 _ZL12fl_rflat_boxiiiij
     /tmp/ccSkZn2P.s:772    .text._Z24fl_define_FL_ROUNDED_BOXv:0000000000000000 _Z24fl_define_FL_ROUNDED_BOXv
     /tmp/ccSkZn2P.s:807    .text._Z22fl_define_FL_RFLAT_BOXv:0000000000000000 _Z22fl_define_FL_RFLAT_BOXv
     /tmp/ccSkZn2P.s:837    .text._Z24fl_define_FL_RSHADOW_BOXv:0000000000000000 _Z24fl_define_FL_RSHADOW_BOXv
     /tmp/ccSkZn2P.s:877    .rodata.cst8:0000000000000000 .LC0
     /tmp/ccSkZn2P.s:881    .rodata.cst8:0000000000000008 .LC2
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
