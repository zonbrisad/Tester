   1              		.file	"fl_diamond_box.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL17fl_diamond_up_boxiiiij,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL17fl_diamond_up_boxiiiij,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL17fl_diamond_up_boxiiiij
  10              	.Ltext_cold0:
  11              		.section	.text._ZL17fl_diamond_up_boxiiiij
  13              	_ZL17fl_diamond_up_boxiiiij:
  14              	.LFB468:
  15              		.file 1 "fltk-1.3.4-1/src/fl_diamond_box.cxx"
   1:fltk-1.3.4-1/src/fl_diamond_box.cxx **** ...
  16              		.loc 1 30 0
  17              		.cfi_startproc
  18              	.LVL0:
  19              		.loc 1 31 0
  20 0000 83E2FE   		andl	$-2, %edx
  21              	.LVL1:
  22              		.loc 1 30 0
  23 0003 4157     		pushq	%r15
  24              		.cfi_def_cfa_offset 16
  25              		.cfi_offset 15, -16
  26              		.loc 1 32 0
  27 0005 83E1FE   		andl	$-2, %ecx
  28              	.LVL2:
  29              		.loc 1 30 0
  30 0008 4156     		pushq	%r14
  31              		.cfi_def_cfa_offset 24
  32              		.cfi_offset 14, -24
  33 000a 4155     		pushq	%r13
  34              		.cfi_def_cfa_offset 32
  35              		.cfi_offset 13, -32
  36 000c 4189F6   		movl	%esi, %r14d
  37 000f 4154     		pushq	%r12
  38              		.cfi_def_cfa_offset 40
  39              		.cfi_offset 12, -40
  40 0011 55       		pushq	%rbp
  41              		.cfi_def_cfa_offset 48
  42              		.cfi_offset 6, -48
  43              		.loc 1 33 0
  44 0012 89D5     		movl	%edx, %ebp
  45              		.loc 1 30 0
  46 0014 53       		pushq	%rbx
  47              		.cfi_def_cfa_offset 56
  48              		.cfi_offset 3, -56
  49              		.loc 1 32 0
  50 0015 4189CF   		movl	%ecx, %r15d
  51              		.loc 1 34 0
  52 0018 89CB     		movl	%ecx, %ebx
  53              		.loc 1 33 0
  54 001a D1FD     		sarl	%ebp
  55              		.loc 1 30 0
  56 001c 4189FD   		movl	%edi, %r13d
  57              		.loc 1 36 0
  58 001f 4501F7   		addl	%r14d, %r15d
  59              		.loc 1 33 0
  60 0022 01FD     		addl	%edi, %ebp
  61              		.loc 1 30 0
  62 0024 4883EC38 		subq	$56, %rsp
  63              		.cfi_def_cfa_offset 112
  64              		.loc 1 35 0
  65 0028 4489C7   		movl	%r8d, %edi
  66              	.LVL3:
  67              		.loc 1 34 0
  68 002b D1FB     		sarl	%ebx
  69              		.loc 1 31 0
  70 002d 4189D4   		movl	%edx, %r12d
  71              	.LVL4:
  72              		.loc 1 34 0
  73 0030 01F3     		addl	%esi, %ebx
  74              	.LVL5:
  75              		.loc 1 35 0
  76 0032 E8000000 		call	_ZN2Fl13set_box_colorEj
  76      00
  77              	.LVL6:
  78              		.loc 1 36 0
  79 0037 418D47FD 		leal	-3(%r15), %eax
  80              	.LBB92:
  81              	.LBB93:
  82              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  83              		.loc 2 249 0
  84 003b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  84      000000
  85 0042 4883EC08 		subq	$8, %rsp
  86              		.cfi_def_cfa_offset 120
  87              	.LBE93:
  88              	.LBE92:
  89              		.loc 1 36 0
  90 0046 418D5503 		leal	3(%r13), %edx
  91 004a 458D5603 		leal	3(%r14), %r10d
  92 004e 4189C3   		movl	%eax, %r11d
  93 0051 438D042C 		leal	(%r12,%r13), %eax
  94 0055 89D6     		movl	%edx, %esi
  95              	.LVL7:
  96              	.LBB96:
  97              	.LBB94:
  98              		.loc 2 249 0
  99 0057 4589D0   		movl	%r10d, %r8d
 100 005a 89DA     		movl	%ebx, %edx
 101              	.LVL8:
 102              	.LBE94:
 103              	.LBE96:
 104              		.loc 1 36 0
 105 005c 89442414 		movl	%eax, 20(%rsp)
 106 0060 8D48FD   		leal	-3(%rax), %ecx
 107              	.LVL9:
 108              	.LBB97:
 109              	.LBB95:
 110              		.loc 2 249 0
 111 0063 488B07   		movq	(%rdi), %rax
 112 0066 44895C24 		movl	%r11d, 32(%rsp)
 112      20
 113 006b 4153     		pushq	%r11
 114              		.cfi_def_cfa_offset 128
 115 006d 55       		pushq	%rbp
 116              		.cfi_def_cfa_offset 136
 117 006e 53       		pushq	%rbx
 118              		.cfi_def_cfa_offset 144
 119 006f 4189C9   		movl	%ecx, %r9d
 120 0072 44895424 		movl	%r10d, 76(%rsp)
 120      4C
 121 0077 89742434 		movl	%esi, 52(%rsp)
 122 007b 894C2430 		movl	%ecx, 48(%rsp)
 123 007f 89E9     		movl	%ebp, %ecx
 124              	.LVL10:
 125 0081 FF90B800 		call	*184(%rax)
 125      0000
 126              	.LVL11:
 127              	.LBE95:
 128              	.LBE97:
 129              		.loc 1 37 0
 130 0087 4883C420 		addq	$32, %rsp
 131              		.cfi_def_cfa_offset 112
 132 008b E8000000 		call	_Z12fl_gray_rampv
 132      00
 133              	.LVL12:
 134              	.LBB98:
 135              	.LBB99:
 136              	.LBB100:
 137              	.LBB101:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 138              		.loc 2 52 0
 139 0090 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 139      000000
 140              	.LBE101:
 141              	.LBE100:
 142              	.LBE99:
 143              	.LBE98:
 144              		.loc 1 37 0
 145 0097 4989C4   		movq	%rax, %r12
 146              	.LVL13:
 147              	.LBB105:
 148              	.LBB104:
 149              	.LBB103:
 150              	.LBB102:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 151              		.loc 2 52 0
 152 009a 0FB67057 		movzbl	87(%rax), %esi
 153              	.LVL14:
 154 009e 488B07   		movq	(%rdi), %rax
 155              	.LVL15:
 156 00a1 FF908800 		call	*136(%rax)
 156      0000
 157              	.LVL16:
 158              	.LBE102:
 159              	.LBE103:
 160              	.LBE104:
 161              	.LBE105:
 162              		.loc 1 38 0
 163 00a7 8B44240C 		movl	12(%rsp), %eax
 164              	.LBB106:
 165              	.LBB107:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 166              		.loc 2 227 0
 167 00ab 4883EC08 		subq	$8, %rsp
 168              		.cfi_def_cfa_offset 120
 169 00af 458D4601 		leal	1(%r14), %r8d
 170 00b3 89E9     		movl	%ebp, %ecx
 171 00b5 89DA     		movl	%ebx, %edx
 172              	.LBE107:
 173              	.LBE106:
 174              		.loc 1 38 0
 175 00b7 8D78FF   		leal	-1(%rax), %edi
 176 00ba 4189FB   		movl	%edi, %r11d
 177 00bd 418D7D01 		leal	1(%r13), %edi
 178              	.LBB110:
 179              	.LBB108:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 180              		.loc 2 227 0
 181 00c1 4589D9   		movl	%r11d, %r9d
 182              	.LBE108:
 183              	.LBE110:
 184              		.loc 1 38 0
 185 00c4 4189FA   		movl	%edi, %r10d
 186              	.LVL17:
 187              	.LBB111:
 188              	.LBB109:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 189              		.loc 2 227 0
 190 00c7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 190      000000
 191              	.LVL18:
 192 00ce 4489D6   		movl	%r10d, %esi
 193 00d1 488B07   		movq	(%rdi), %rax
 194 00d4 53       		pushq	%rbx
 195              		.cfi_def_cfa_offset 128
 196 00d5 44895C24 		movl	%r11d, 44(%rsp)
 196      2C
 197 00da 44895424 		movl	%r10d, 48(%rsp)
 197      30
 198 00df FF5068   		call	*104(%rax)
 199              	.LVL19:
 200              	.LBE109:
 201              	.LBE111:
 202              	.LBB112:
 203              	.LBB113:
 204              	.LBB114:
 205              	.LBB115:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 206              		.loc 2 52 0
 207 00e2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 207      000000
 208 00e9 410FB674 		movzbl	85(%r12), %esi
 208      2455
 209              	.LVL20:
 210 00ef 488B07   		movq	(%rdi), %rax
 211 00f2 FF908800 		call	*136(%rax)
 211      0000
 212              	.LVL21:
 213              	.LBE115:
 214              	.LBE114:
 215              	.LBE113:
 216              	.LBE112:
 217              		.loc 1 39 0
 218 00f8 418D7D02 		leal	2(%r13), %edi
 219 00fc 8B44241C 		movl	28(%rsp), %eax
 220              	.LBB116:
 221              	.LBB117:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 222              		.loc 2 227 0
 223 0100 458D4602 		leal	2(%r14), %r8d
 224 0104 89E9     		movl	%ebp, %ecx
 225 0106 89DA     		movl	%ebx, %edx
 226              	.LBE117:
 227              	.LBE116:
 228              		.loc 1 39 0
 229 0108 4189FA   		movl	%edi, %r10d
 230              	.LVL22:
 231              	.LBB120:
 232              	.LBB118:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 233              		.loc 2 227 0
 234 010b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 234      000000
 235              	.LVL23:
 236              	.LBE118:
 237              	.LBE120:
 238              		.loc 1 39 0
 239 0112 83E802   		subl	$2, %eax
 240              	.LVL24:
 241              	.LBB121:
 242              	.LBB119:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 243              		.loc 2 227 0
 244 0115 44895424 		movl	%r10d, 52(%rsp)
 244      34
 245 011a 4489D6   		movl	%r10d, %esi
 246 011d 4189C1   		movl	%eax, %r9d
 247 0120 89442438 		movl	%eax, 56(%rsp)
 248 0124 4C8B1F   		movq	(%rdi), %r11
 249 0127 891C24   		movl	%ebx, (%rsp)
 250 012a 41FF5368 		call	*104(%r11)
 251              	.LVL25:
 252              	.LBE119:
 253              	.LBE121:
 254              	.LBB122:
 255              	.LBB123:
 256              	.LBB124:
 257              	.LBB125:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 258              		.loc 2 52 0
 259 012e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 259      000000
 260 0135 410FB674 		movzbl	83(%r12), %esi
 260      2453
 261              	.LVL26:
 262 013b 488B17   		movq	(%rdi), %rdx
 263 013e FF928800 		call	*136(%rdx)
 263      0000
 264              	.LVL27:
 265              	.LBE125:
 266              	.LBE124:
 267              	.LBE123:
 268              	.LBE122:
 269              	.LBB126:
 270              	.LBB127:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 271              		.loc 2 227 0
 272 0144 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 272      000000
 273 014b 448B5424 		movl	60(%rsp), %r10d
 273      3C
 274 0150 89E9     		movl	%ebp, %ecx
 275 0152 448B4C24 		movl	32(%rsp), %r9d
 275      20
 276 0157 89DA     		movl	%ebx, %edx
 277 0159 8B742424 		movl	36(%rsp), %esi
 278 015d 4C8B1F   		movq	(%rdi), %r11
 279 0160 4589D0   		movl	%r10d, %r8d
 280 0163 891C24   		movl	%ebx, (%rsp)
 281 0166 41FF5368 		call	*104(%r11)
 282              	.LVL28:
 283              	.LBE127:
 284              	.LBE126:
 285              	.LBB128:
 286              	.LBB129:
 287              	.LBB130:
 288              	.LBB131:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 289              		.loc 2 52 0
 290 016a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 290      000000
 291 0171 410FB674 		movzbl	80(%r12), %esi
 291      2450
 292              	.LVL29:
 293 0177 488B17   		movq	(%rdi), %rdx
 294 017a FF928800 		call	*136(%rdx)
 294      0000
 295              	.LVL30:
 296              	.LBE131:
 297              	.LBE130:
 298              	.LBE129:
 299              	.LBE128:
 300              	.LBB132:
 301              	.LBB133:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 302              		.loc 2 227 0
 303 0180 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 303      000000
 304 0187 448B4C24 		movl	32(%rsp), %r9d
 304      20
 305 018c 89E9     		movl	%ebp, %ecx
 306 018e 448B4424 		movl	40(%rsp), %r8d
 306      28
 307 0193 89DA     		movl	%ebx, %edx
 308 0195 8B742424 		movl	36(%rsp), %esi
 309 0199 4C8B17   		movq	(%rdi), %r10
 310 019c 891C24   		movl	%ebx, (%rsp)
 311 019f 41FF5268 		call	*104(%r10)
 312              	.LVL31:
 313              	.LBE133:
 314              	.LBE132:
 315              	.LBB134:
 316              	.LBB135:
 317              	.LBB136:
 318              	.LBB137:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 319              		.loc 2 52 0
 320 01a3 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 320      000000
 321 01aa 410FB674 		movzbl	78(%r12), %esi
 321      244E
 322              	.LVL32:
 323 01b0 488B17   		movq	(%rdi), %rdx
 324 01b3 FF928800 		call	*136(%rdx)
 324      0000
 325              	.LVL33:
 326              	.LBE137:
 327              	.LBE136:
 328              	.LBE135:
 329              	.LBE134:
 330              	.LBB138:
 331              	.LBB139:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 332              		.loc 2 227 0
 333 01b9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 333      000000
 334 01c0 8B442438 		movl	56(%rsp), %eax
 335 01c4 458D47FE 		leal	-2(%r15), %r8d
 336              	.LVL34:
 337 01c8 89E9     		movl	%ebp, %ecx
 338 01ca 89DA     		movl	%ebx, %edx
 339 01cc 8B742434 		movl	52(%rsp), %esi
 340 01d0 4C8B17   		movq	(%rdi), %r10
 341 01d3 4189C1   		movl	%eax, %r9d
 342 01d6 891C24   		movl	%ebx, (%rsp)
 343 01d9 41FF5268 		call	*104(%r10)
 344              	.LVL35:
 345              	.LBE139:
 346              	.LBE138:
 347              	.LBB140:
 348              	.LBB141:
 349              	.LBB142:
 350              	.LBB143:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 351              		.loc 2 52 0
 352 01dd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 352      000000
 353 01e4 410FB674 		movzbl	72(%r12), %esi
 353      2448
 354              	.LVL36:
 355 01ea 488B07   		movq	(%rdi), %rax
 356 01ed FF908800 		call	*136(%rax)
 356      0000
 357              	.LVL37:
 358              	.LBE143:
 359              	.LBE142:
 360              	.LBE141:
 361              	.LBE140:
 362              	.LBB144:
 363              	.LBB145:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 364              		.loc 2 227 0
 365 01f3 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 365      000000
 366 01fa 448B4C24 		movl	44(%rsp), %r9d
 366      2C
 367 01ff 458D47FF 		leal	-1(%r15), %r8d
 368              	.LVL38:
 369 0203 89E9     		movl	%ebp, %ecx
 370 0205 89DA     		movl	%ebx, %edx
 371 0207 8B742430 		movl	48(%rsp), %esi
 372 020b 488B07   		movq	(%rdi), %rax
 373 020e 891C24   		movl	%ebx, (%rsp)
 374 0211 FF5068   		call	*104(%rax)
 375              	.LVL39:
 376              	.LBE145:
 377              	.LBE144:
 378              	.LBB146:
 379              	.LBB147:
 380              	.LBB148:
 381              	.LBB149:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 382              		.loc 2 52 0
 383 0214 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 383      000000
 384 021b 410FB674 		movzbl	65(%r12), %esi
 384      2441
 385              	.LVL40:
 386 0221 488B07   		movq	(%rdi), %rax
 387 0224 FF908800 		call	*136(%rax)
 387      0000
 388              	.LVL41:
 389              	.LBE149:
 390              	.LBE148:
 391              	.LBE147:
 392              	.LBE146:
 393              	.LBB150:
 394              	.LBB151:
 238:fltk-1.3.4-1/FL/fl_draw.H **** 
 395              		.loc 2 238 0
 396 022a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 396      000000
 397 0231 4589F0   		movl	%r14d, %r8d
 398 0234 89E9     		movl	%ebp, %ecx
 399 0236 89DA     		movl	%ebx, %edx
 400 0238 4489EE   		movl	%r13d, %esi
 401 023b 488B07   		movq	(%rdi), %rax
 402 023e 44893C24 		movl	%r15d, (%rsp)
 403 0242 55       		pushq	%rbp
 404              		.cfi_def_cfa_offset 136
 405 0243 53       		pushq	%rbx
 406              		.cfi_def_cfa_offset 144
 407 0244 448B4C24 		movl	44(%rsp), %r9d
 407      2C
 408 0249 FF90A800 		call	*168(%rax)
 408      0000
 409              	.LVL42:
 410              	.LBE151:
 411              	.LBE150:
 412              		.loc 1 45 0
 413 024f 4883C458 		addq	$88, %rsp
 414              		.cfi_def_cfa_offset 56
 415 0253 5B       		popq	%rbx
 416              		.cfi_def_cfa_offset 48
 417              	.LVL43:
 418 0254 5D       		popq	%rbp
 419              		.cfi_def_cfa_offset 40
 420              	.LVL44:
 421 0255 415C     		popq	%r12
 422              		.cfi_def_cfa_offset 32
 423              	.LVL45:
 424 0257 415D     		popq	%r13
 425              		.cfi_def_cfa_offset 24
 426              	.LVL46:
 427 0259 415E     		popq	%r14
 428              		.cfi_def_cfa_offset 16
 429              	.LVL47:
 430 025b 415F     		popq	%r15
 431              		.cfi_def_cfa_offset 8
 432 025d C3       		ret
 433              		.cfi_endproc
 434              	.LFE468:
 436              		.section	.text.unlikely._ZL17fl_diamond_up_boxiiiij
 437              	.LCOLDE0:
 438              		.section	.text._ZL17fl_diamond_up_boxiiiij
 439              	.LHOTE0:
 440              		.section	.text.unlikely._ZL19fl_diamond_down_boxiiiij,"ax",@progbits
 441              	.LCOLDB1:
 442              		.section	.text._ZL19fl_diamond_down_boxiiiij,"ax",@progbits
 443              	.LHOTB1:
 444              		.p2align 4,,15
 446              	_ZL19fl_diamond_down_boxiiiij:
 447              	.LFB469:
 448              		.loc 1 47 0
 449              		.cfi_startproc
 450              	.LVL48:
 451 0000 4157     		pushq	%r15
 452              		.cfi_def_cfa_offset 16
 453              		.cfi_offset 15, -16
 454              		.loc 1 48 0
 455 0002 83E2FE   		andl	$-2, %edx
 456              	.LVL49:
 457              		.loc 1 47 0
 458 0005 4156     		pushq	%r14
 459              		.cfi_def_cfa_offset 24
 460              		.cfi_offset 14, -24
 461              		.loc 1 49 0
 462 0007 83E1FE   		andl	$-2, %ecx
 463              	.LVL50:
 464              		.loc 1 47 0
 465 000a 4155     		pushq	%r13
 466              		.cfi_def_cfa_offset 32
 467              		.cfi_offset 13, -32
 468 000c 4154     		pushq	%r12
 469              		.cfi_def_cfa_offset 40
 470              		.cfi_offset 12, -40
 471 000e 55       		pushq	%rbp
 472              		.cfi_def_cfa_offset 48
 473              		.cfi_offset 6, -48
 474 000f 53       		pushq	%rbx
 475              		.cfi_def_cfa_offset 56
 476              		.cfi_offset 3, -56
 477              		.loc 1 50 0
 478 0010 89D5     		movl	%edx, %ebp
 479              		.loc 1 51 0
 480 0012 89CB     		movl	%ecx, %ebx
 481              		.loc 1 50 0
 482 0014 D1FD     		sarl	%ebp
 483              		.loc 1 47 0
 484 0016 4189FC   		movl	%edi, %r12d
 485 0019 4883EC28 		subq	$40, %rsp
 486              		.cfi_def_cfa_offset 96
 487              		.loc 1 51 0
 488 001d D1FB     		sarl	%ebx
 489              		.loc 1 50 0
 490 001f 01FD     		addl	%edi, %ebp
 491              		.loc 1 47 0
 492 0021 44894424 		movl	%r8d, 20(%rsp)
 492      14
 493              		.loc 1 50 0
 494 0026 89542408 		movl	%edx, 8(%rsp)
 495              		.loc 1 51 0
 496 002a 01F3     		addl	%esi, %ebx
 497              		.loc 1 47 0
 498 002c 4189F6   		movl	%esi, %r14d
 499              		.loc 1 49 0
 500 002f 4189CD   		movl	%ecx, %r13d
 501              	.LVL51:
 502              		.loc 1 52 0
 503 0032 E8000000 		call	_Z12fl_gray_rampv
 503      00
 504              	.LVL52:
 505              	.LBB152:
 506              	.LBB153:
 507              	.LBB154:
 508              	.LBB155:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 509              		.loc 2 52 0
 510 0037 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 510      000000
 511              	.LBE155:
 512              	.LBE154:
 513              	.LBE153:
 514              	.LBE152:
 515              		.loc 1 52 0
 516 003e 4989C7   		movq	%rax, %r15
 517              	.LVL53:
 518              	.LBB162:
 519              	.LBB160:
 520              	.LBB158:
 521              	.LBB156:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 522              		.loc 2 52 0
 523 0041 0FB67050 		movzbl	80(%rax), %esi
 524              	.LVL54:
 525              	.LBE156:
 526              	.LBE158:
 527              	.LBE160:
 528              	.LBE162:
 529              		.loc 1 56 0
 530 0045 4501F5   		addl	%r14d, %r13d
 531              	.LVL55:
 532              	.LBB163:
 533              	.LBB161:
 534              	.LBB159:
 535              	.LBB157:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 536              		.loc 2 52 0
 537 0048 488B07   		movq	(%rdi), %rax
 538              	.LVL56:
 539 004b FF908800 		call	*136(%rax)
 539      0000
 540              	.LVL57:
 541              	.LBE157:
 542              	.LBE159:
 543              	.LBE161:
 544              	.LBE163:
 545              		.loc 1 53 0
 546 0051 8B542408 		movl	8(%rsp), %edx
 547              	.LBB164:
 548              	.LBB165:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 549              		.loc 2 227 0
 550 0055 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 550      000000
 551 005c 4883EC08 		subq	$8, %rsp
 552              		.cfi_def_cfa_offset 104
 553 0060 4589F0   		movl	%r14d, %r8d
 554 0063 4489E6   		movl	%r12d, %esi
 555              	.LBE165:
 556              	.LBE164:
 557              		.loc 1 53 0
 558 0066 428D0422 		leal	(%rdx,%r12), %eax
 559              	.LBB168:
 560              	.LBB166:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 561              		.loc 2 227 0
 562 006a 89DA     		movl	%ebx, %edx
 563              	.LBE166:
 564              	.LBE168:
 565              		.loc 1 53 0
 566 006c 89C1     		movl	%eax, %ecx
 567              	.LVL58:
 568              	.LBB169:
 569              	.LBB167:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 570              		.loc 2 227 0
 571 006e 488B07   		movq	(%rdi), %rax
 572              	.LVL59:
 573 0071 53       		pushq	%rbx
 574              		.cfi_def_cfa_offset 112
 575 0072 4189C9   		movl	%ecx, %r9d
 576 0075 894C2418 		movl	%ecx, 24(%rsp)
 577              	.LVL60:
 578 0079 89E9     		movl	%ebp, %ecx
 579              	.LVL61:
 580 007b FF5068   		call	*104(%rax)
 581              	.LVL62:
 582              	.LBE167:
 583              	.LBE169:
 584              	.LBB170:
 585              	.LBB171:
 586              	.LBB172:
 587              	.LBB173:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 588              		.loc 2 52 0
 589 007e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 589      000000
 590 0085 410FB677 		movzbl	78(%r15), %esi
 590      4E
 591              	.LVL63:
 592 008a 488B07   		movq	(%rdi), %rax
 593 008d FF908800 		call	*136(%rax)
 593      0000
 594              	.LVL64:
 595              	.LBE173:
 596              	.LBE172:
 597              	.LBE171:
 598              	.LBE170:
 599              		.loc 1 54 0
 600 0093 8B442418 		movl	24(%rsp), %eax
 601              	.LBB174:
 602              	.LBB175:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 603              		.loc 2 227 0
 604 0097 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 604      000000
 605              	.LBE175:
 606              	.LBE174:
 607              		.loc 1 54 0
 608 009e 418D7424 		leal	1(%r12), %esi
 608      01
 609              	.LVL65:
 610              	.LBB178:
 611              	.LBB176:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 612              		.loc 2 227 0
 613 00a3 458D4601 		leal	1(%r14), %r8d
 614              	.LVL66:
 615 00a7 89E9     		movl	%ebp, %ecx
 616 00a9 89742420 		movl	%esi, 32(%rsp)
 617              	.LBE176:
 618              	.LBE178:
 619              		.loc 1 54 0
 620 00ad 8D50FF   		leal	-1(%rax), %edx
 621              	.LVL67:
 622              	.LBB179:
 623              	.LBB177:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 624              		.loc 2 227 0
 625 00b0 488B07   		movq	(%rdi), %rax
 626 00b3 891C24   		movl	%ebx, (%rsp)
 627 00b6 4189D1   		movl	%edx, %r9d
 628 00b9 8954241C 		movl	%edx, 28(%rsp)
 629 00bd 89DA     		movl	%ebx, %edx
 630              	.LVL68:
 631 00bf FF5068   		call	*104(%rax)
 632              	.LVL69:
 633              	.LBE177:
 634              	.LBE179:
 635              	.LBB180:
 636              	.LBB181:
 637              	.LBB182:
 638              	.LBB183:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 639              		.loc 2 52 0
 640 00c2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 640      000000
 641 00c9 410FB677 		movzbl	72(%r15), %esi
 641      48
 642              	.LVL70:
 643 00ce 488B07   		movq	(%rdi), %rax
 644 00d1 FF908800 		call	*136(%rax)
 644      0000
 645              	.LVL71:
 646              	.LBE183:
 647              	.LBE182:
 648              	.LBE181:
 649              	.LBE180:
 650              	.LBB184:
 651              	.LBB185:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 652              		.loc 2 227 0
 653 00d7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 653      000000
 654              	.LBE185:
 655              	.LBE184:
 656              		.loc 1 55 0
 657 00de 8B442418 		movl	24(%rsp), %eax
 658              	.LBB189:
 659              	.LBB186:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 660              		.loc 2 227 0
 661 00e2 458D4602 		leal	2(%r14), %r8d
 662 00e6 89E9     		movl	%ebp, %ecx
 663 00e8 89DA     		movl	%ebx, %edx
 664              	.LBE186:
 665              	.LBE189:
 666              		.loc 1 60 0
 667 00ea 4183C603 		addl	$3, %r14d
 668              	.LVL72:
 669              	.LBB190:
 670              	.LBB187:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 671              		.loc 2 227 0
 672 00ee 4C8B1F   		movq	(%rdi), %r11
 673              	.LBE187:
 674              	.LBE190:
 675              		.loc 1 55 0
 676 00f1 448D50FE 		leal	-2(%rax), %r10d
 677 00f5 418D4424 		leal	2(%r12), %eax
 677      02
 678              	.LVL73:
 679              	.LBB191:
 680              	.LBB188:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 681              		.loc 2 227 0
 682 00fa 891C24   		movl	%ebx, (%rsp)
 683 00fd 4589D1   		movl	%r10d, %r9d
 684 0100 44895424 		movl	%r10d, 44(%rsp)
 684      2C
 685 0105 89C6     		movl	%eax, %esi
 686 0107 89442428 		movl	%eax, 40(%rsp)
 687 010b 41FF5368 		call	*104(%r11)
 688              	.LVL74:
 689              	.LBE188:
 690              	.LBE191:
 691              	.LBB192:
 692              	.LBB193:
 693              	.LBB194:
 694              	.LBB195:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 695              		.loc 2 52 0
 696 010f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 696      000000
 697 0116 410FB677 		movzbl	87(%r15), %esi
 697      57
 698              	.LVL75:
 699 011b 488B17   		movq	(%rdi), %rdx
 700 011e FF928800 		call	*136(%rdx)
 700      0000
 701              	.LVL76:
 702              	.LBE195:
 703              	.LBE194:
 704              	.LBE193:
 705              	.LBE192:
 706              	.LBB196:
 707              	.LBB197:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 708              		.loc 2 227 0
 709 0124 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 709      000000
 710 012b 448B5424 		movl	44(%rsp), %r10d
 710      2C
 711 0130 458D45FE 		leal	-2(%r13), %r8d
 712              	.LVL77:
 713 0134 8B442428 		movl	40(%rsp), %eax
 714 0138 89E9     		movl	%ebp, %ecx
 715 013a 89DA     		movl	%ebx, %edx
 716 013c 4C8B1F   		movq	(%rdi), %r11
 717 013f 4589D1   		movl	%r10d, %r9d
 718 0142 891C24   		movl	%ebx, (%rsp)
 719 0145 89C6     		movl	%eax, %esi
 720 0147 41FF5368 		call	*104(%r11)
 721              	.LVL78:
 722              	.LBE197:
 723              	.LBE196:
 724              	.LBB198:
 725              	.LBB199:
 726              	.LBB200:
 727              	.LBB201:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 728              		.loc 2 52 0
 729 014b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 729      000000
 730 0152 410FB677 		movzbl	85(%r15), %esi
 730      55
 731              	.LVL79:
 732 0157 488B07   		movq	(%rdi), %rax
 733 015a FF908800 		call	*136(%rax)
 733      0000
 734              	.LVL80:
 735              	.LBE201:
 736              	.LBE200:
 737              	.LBE199:
 738              	.LBE198:
 739              	.LBB202:
 740              	.LBB203:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 741              		.loc 2 227 0
 742 0160 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 742      000000
 743 0167 448B4C24 		movl	28(%rsp), %r9d
 743      1C
 744 016c 458D45FF 		leal	-1(%r13), %r8d
 745              	.LVL81:
 746 0170 89E9     		movl	%ebp, %ecx
 747 0172 89DA     		movl	%ebx, %edx
 748 0174 8B742420 		movl	32(%rsp), %esi
 749 0178 488B07   		movq	(%rdi), %rax
 750 017b 891C24   		movl	%ebx, (%rsp)
 751 017e FF5068   		call	*104(%rax)
 752              	.LVL82:
 753              	.LBE203:
 754              	.LBE202:
 755              	.LBB204:
 756              	.LBB205:
 757              	.LBB206:
 758              	.LBB207:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 759              		.loc 2 52 0
 760 0181 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 760      000000
 761 0188 410FB677 		movzbl	83(%r15), %esi
 761      53
 762              	.LVL83:
 763 018d 488B07   		movq	(%rdi), %rax
 764 0190 FF908800 		call	*136(%rax)
 764      0000
 765              	.LVL84:
 766              	.LBE207:
 767              	.LBE206:
 768              	.LBE205:
 769              	.LBE204:
 770              	.LBB208:
 771              	.LBB209:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 772              		.loc 2 227 0
 773 0196 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 773      000000
 774 019d 448B4C24 		movl	24(%rsp), %r9d
 774      18
 775 01a2 4589E8   		movl	%r13d, %r8d
 776 01a5 89E9     		movl	%ebp, %ecx
 777 01a7 89DA     		movl	%ebx, %edx
 778 01a9 4489E6   		movl	%r12d, %esi
 779              	.LBE209:
 780              	.LBE208:
 781              		.loc 1 60 0
 782 01ac 4183ED03 		subl	$3, %r13d
 783              	.LVL85:
 784 01b0 4183C403 		addl	$3, %r12d
 785              	.LVL86:
 786              	.LBB211:
 787              	.LBB210:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 788              		.loc 2 227 0
 789 01b4 488B07   		movq	(%rdi), %rax
 790 01b7 891C24   		movl	%ebx, (%rsp)
 791 01ba FF5068   		call	*104(%rax)
 792              	.LVL87:
 793              	.LBE210:
 794              	.LBE211:
 795              		.loc 1 59 0
 796 01bd 8B7C2424 		movl	36(%rsp), %edi
 797 01c1 E8000000 		call	_ZN2Fl13set_box_colorEj
 797      00
 798              	.LVL88:
 799              	.LBB212:
 800              	.LBB213:
 801              		.loc 2 249 0
 802 01c6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 802      000000
 803              	.LBE213:
 804              	.LBE212:
 805              		.loc 1 60 0
 806 01cd 8B442418 		movl	24(%rsp), %eax
 807              	.LBB216:
 808              	.LBB214:
 809              		.loc 2 249 0
 810 01d1 4589F0   		movl	%r14d, %r8d
 811 01d4 89E9     		movl	%ebp, %ecx
 812 01d6 89DA     		movl	%ebx, %edx
 813 01d8 4489E6   		movl	%r12d, %esi
 814 01db 4C8B17   		movq	(%rdi), %r10
 815 01de 44892C24 		movl	%r13d, (%rsp)
 816              	.LBE214:
 817              	.LBE216:
 818              		.loc 1 60 0
 819 01e2 83E803   		subl	$3, %eax
 820              	.LVL89:
 821              	.LBB217:
 822              	.LBB215:
 823              		.loc 2 249 0
 824 01e5 55       		pushq	%rbp
 825              		.cfi_def_cfa_offset 120
 826 01e6 53       		pushq	%rbx
 827              		.cfi_def_cfa_offset 128
 828 01e7 4189C1   		movl	%eax, %r9d
 829 01ea 89442428 		movl	%eax, 40(%rsp)
 830 01ee 41FF92B8 		call	*184(%r10)
 830      000000
 831              	.LVL90:
 832              	.LBE215:
 833              	.LBE217:
 834              	.LBB218:
 835              	.LBB219:
 836              	.LBB220:
 837              	.LBB221:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 838              		.loc 2 52 0
 839 01f5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 839      000000
 840 01fc 410FB677 		movzbl	65(%r15), %esi
 840      41
 841              	.LVL91:
 842 0201 4883C420 		addq	$32, %rsp
 843              		.cfi_def_cfa_offset 96
 844 0205 488B17   		movq	(%rdi), %rdx
 845 0208 FF928800 		call	*136(%rdx)
 845      0000
 846              	.LVL92:
 847              	.LBE221:
 848              	.LBE220:
 849              	.LBE219:
 850              	.LBE218:
 851              	.LBB222:
 852              	.LBB223:
 238:fltk-1.3.4-1/FL/fl_draw.H **** 
 853              		.loc 2 238 0
 854 020e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 854      000000
 855 0215 4883EC08 		subq	$8, %rsp
 856              		.cfi_def_cfa_offset 104
 857 0219 4589F0   		movl	%r14d, %r8d
 858 021c 89E9     		movl	%ebp, %ecx
 859 021e 89DA     		movl	%ebx, %edx
 860 0220 4489E6   		movl	%r12d, %esi
 861 0223 4C8B17   		movq	(%rdi), %r10
 862 0226 4155     		pushq	%r13
 863              		.cfi_def_cfa_offset 112
 864 0228 55       		pushq	%rbp
 865              		.cfi_def_cfa_offset 120
 866 0229 53       		pushq	%rbx
 867              		.cfi_def_cfa_offset 128
 868 022a 8B442428 		movl	40(%rsp), %eax
 869 022e 4189C1   		movl	%eax, %r9d
 870 0231 41FF92A8 		call	*168(%r10)
 870      000000
 871              	.LVL93:
 872              	.LBE223:
 873              	.LBE222:
 874              		.loc 1 62 0
 875 0238 4883C448 		addq	$72, %rsp
 876              		.cfi_def_cfa_offset 56
 877 023c 5B       		popq	%rbx
 878              		.cfi_def_cfa_offset 48
 879              	.LVL94:
 880 023d 5D       		popq	%rbp
 881              		.cfi_def_cfa_offset 40
 882              	.LVL95:
 883 023e 415C     		popq	%r12
 884              		.cfi_def_cfa_offset 32
 885              	.LVL96:
 886 0240 415D     		popq	%r13
 887              		.cfi_def_cfa_offset 24
 888 0242 415E     		popq	%r14
 889              		.cfi_def_cfa_offset 16
 890              	.LVL97:
 891 0244 415F     		popq	%r15
 892              		.cfi_def_cfa_offset 8
 893              	.LVL98:
 894 0246 C3       		ret
 895              		.cfi_endproc
 896              	.LFE469:
 898              		.section	.text.unlikely._ZL19fl_diamond_down_boxiiiij
 899              	.LCOLDE1:
 900              		.section	.text._ZL19fl_diamond_down_boxiiiij
 901              	.LHOTE1:
 902              		.section	.text.unlikely._Z24fl_define_FL_DIAMOND_BOXv,"ax",@progbits
 903              	.LCOLDB2:
 904              		.section	.text._Z24fl_define_FL_DIAMOND_BOXv,"ax",@progbits
 905              	.LHOTB2:
 906              		.p2align 4,,15
 907              		.globl	_Z24fl_define_FL_DIAMOND_BOXv
 909              	_Z24fl_define_FL_DIAMOND_BOXv:
 910              	.LFB470:
 911              		.loc 1 65 0
 912              		.cfi_startproc
 913 0000 4883EC08 		subq	$8, %rsp
 914              		.cfi_def_cfa_offset 16
 915              		.loc 1 66 0
 916 0004 BE000000 		movl	$_ZL19fl_diamond_down_boxiiiij, %esi
 916      00
 917 0009 BF190000 		movl	$25, %edi
 917      00
 918 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 918      00
 919              	.LVL99:
 920              		.loc 1 67 0
 921 0013 BE000000 		movl	$_ZL17fl_diamond_up_boxiiiij, %esi
 921      00
 922 0018 BF180000 		movl	$24, %edi
 922      00
 923 001d E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 923      00
 924              	.LVL100:
 925              		.loc 1 69 0
 926 0022 B8180000 		movl	$24, %eax
 926      00
 927 0027 4883C408 		addq	$8, %rsp
 928              		.cfi_def_cfa_offset 8
 929 002b C3       		ret
 930              		.cfi_endproc
 931              	.LFE470:
 933              		.section	.text.unlikely._Z24fl_define_FL_DIAMOND_BOXv
 934              	.LCOLDE2:
 935              		.section	.text._Z24fl_define_FL_DIAMOND_BOXv
 936              	.LHOTE2:
 937              		.text
 938              	.Letext0:
 939              		.section	.text.unlikely._ZL17fl_diamond_up_boxiiiij
 940              	.Letext_cold0:
 941              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 942              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 943              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 944              		.file 6 "/usr/include/libio.h"
 945              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 946              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 947              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 948              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 949              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 950              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_diamond_box.cxx
     /tmp/ccaPiyT4.s:13     .text._ZL17fl_diamond_up_boxiiiij:0000000000000000 _ZL17fl_diamond_up_boxiiiij
     /tmp/ccaPiyT4.s:446    .text._ZL19fl_diamond_down_boxiiiij:0000000000000000 _ZL19fl_diamond_down_boxiiiij
     /tmp/ccaPiyT4.s:909    .text._Z24fl_define_FL_DIAMOND_BOXv:0000000000000000 _Z24fl_define_FL_DIAMOND_BOXv
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
_Z12fl_gray_rampv
_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
