   1              		.file	"fl_boxtype.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z9fl_no_boxiiiij,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z9fl_no_boxiiiij,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z9fl_no_boxiiiij
  10              	.Ltext_cold0:
  11              		.section	.text._Z9fl_no_boxiiiij
  12              		.globl	_Z9fl_no_boxiiiij
  14              	_Z9fl_no_boxiiiij:
  15              	.LFB474:
  16              		.file 1 "fltk-1.3.4-1/src/fl_boxtype.cxx"
   1:fltk-1.3.4-1/src/fl_boxtype.cxx **** ...
  17              		.loc 1 164 0
  18              		.cfi_startproc
  19 0000 F3C3     		rep ret
  20              		.cfi_endproc
  21              	.LFE474:
  23              		.section	.text.unlikely._Z9fl_no_boxiiiij
  24              	.LCOLDE0:
  25              		.section	.text._Z9fl_no_boxiiiij
  26              	.LHOTE0:
  27              		.section	.text.unlikely._Z11fl_flat_boxiiiij,"ax",@progbits
  28              	.LCOLDB1:
  29              		.section	.text._Z11fl_flat_boxiiiij,"ax",@progbits
  30              	.LHOTB1:
  31              		.p2align 4,,15
  32              		.globl	_Z11fl_flat_boxiiiij
  34              	_Z11fl_flat_boxiiiij:
  35              	.LFB475:
  36              		.loc 1 167 0
  37              		.cfi_startproc
  38              	.LVL0:
  39              		.loc 1 167 0
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
  53 0009 89F5     		movl	%esi, %ebp
  54 000b 89FB     		movl	%edi, %ebx
  55 000d 4189D4   		movl	%edx, %r12d
  56 0010 4883EC08 		subq	$8, %rsp
  57              		.cfi_def_cfa_offset 48
  58              	.LBB161:
  59              	.LBB162:
  60              		.loc 1 70 0
  61 0014 8B050000 		movl	_ZL14draw_it_active(%rip), %eax
  61      0000
  62 001a 85C0     		testl	%eax, %eax
  63 001c 750B     		jne	.L3
  64 001e 4489C7   		movl	%r8d, %edi
  65              	.LVL1:
  66 0021 E8000000 		call	_Z11fl_inactivej
  66      00
  67              	.LVL2:
  68 0026 4189C0   		movl	%eax, %r8d
  69              	.L3:
  70              	.LVL3:
  71              	.LBE162:
  72              	.LBE161:
  73              	.LBB163:
  74              	.LBB164:
  75              	.LBB165:
  76              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
  77              		.loc 2 52 0
  78 0029 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  78      000000
  79 0030 4489C6   		movl	%r8d, %esi
  80 0033 488B07   		movq	(%rdi), %rax
  81 0036 FF908800 		call	*136(%rax)
  81      0000
  82              	.LVL4:
  83              	.LBE165:
  84              	.LBE164:
  85              	.LBB166:
  86              	.LBB167:
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
  87              		.loc 2 206 0
  88 003c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  88      000000
  89 0043 4589E8   		movl	%r13d, %r8d
  90 0046 4489E1   		movl	%r12d, %ecx
  91 0049 89EA     		movl	%ebp, %edx
  92 004b 89DE     		movl	%ebx, %esi
  93 004d 488B07   		movq	(%rdi), %rax
  94 0050 488B4020 		movq	32(%rax), %rax
  95              	.LBE167:
  96              	.LBE166:
  97              	.LBE163:
  98              		.loc 1 169 0
  99 0054 4883C408 		addq	$8, %rsp
 100              		.cfi_def_cfa_offset 40
 101 0058 5B       		popq	%rbx
 102              		.cfi_def_cfa_offset 32
 103              	.LVL5:
 104 0059 5D       		popq	%rbp
 105              		.cfi_def_cfa_offset 24
 106              	.LVL6:
 107 005a 415C     		popq	%r12
 108              		.cfi_def_cfa_offset 16
 109              	.LVL7:
 110 005c 415D     		popq	%r13
 111              		.cfi_def_cfa_offset 8
 112              	.LVL8:
 113              	.LBB170:
 114              	.LBB169:
 115              	.LBB168:
 116              		.loc 2 206 0
 117 005e FFE0     		jmp	*%rax
 118              	.LVL9:
 119              	.LBE168:
 120              	.LBE169:
 121              	.LBE170:
 122              		.cfi_endproc
 123              	.LFE475:
 125              		.section	.text.unlikely._Z11fl_flat_boxiiiij
 126              	.LCOLDE1:
 127              		.section	.text._Z11fl_flat_boxiiiij
 128              	.LHOTE1:
 129              		.section	.text.unlikely._ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6,"ax",@progbits
 130              		.align 2
 131              	.LCOLDB2:
 132              		.section	.text._ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6,"ax",@progbits
 133              	.LHOTB2:
 134              		.align 2
 135              		.p2align 4,,15
 137              	_ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6:
 138              	.LFB509:
 139              		.loc 1 447 0
 140              		.cfi_startproc
 141              	.LVL10:
 142 0000 55       		pushq	%rbp
 143              		.cfi_def_cfa_offset 16
 144              		.cfi_offset 6, -16
 145 0001 53       		pushq	%rbx
 146              		.cfi_def_cfa_offset 24
 147              		.cfi_offset 3, -24
 148 0002 4883EC08 		subq	$8, %rsp
 149              		.cfi_def_cfa_offset 32
 150 0006 488B6F38 		movq	56(%rdi), %rbp
 151              	.LVL11:
 152              	.LBB171:
 153              		.loc 1 451 0
 154 000a 4885ED   		testq	%rbp, %rbp
 155 000d 745A     		je	.L7
 156 000f 48837F40 		cmpq	$0, 64(%rdi)
 156      00
 157 0014 4889FB   		movq	%rdi, %rbx
 158              	.LVL12:
 159 0017 7409     		je	.L12
 160 0019 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 160      00
 161              	.LVL13:
 162 001e 85C0     		testl	%eax, %eax
 163 0020 744E     		je	.L11
 164              	.L12:
 165              	.LVL14:
 166 0022 448B450C 		movl	12(%rbp), %r8d
 167              	.LVL15:
 168              	.LBB172:
 169              	.LBB173:
 170              		.file 3 "fltk-1.3.4-1/FL/Fl_Image.H"
   1:fltk-1.3.4-1/FL/Fl_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_Image.H **** // "$Id: Fl_Image.H 12028 2016-10-14 16:35:44Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_Image.H **** // Image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_Image.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_Image.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Image.H ****    Fl_Image, Fl_RGB_Image classes. */
  21:fltk-1.3.4-1/FL/Fl_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_Image.H **** #ifndef Fl_Image_H
  23:fltk-1.3.4-1/FL/Fl_Image.H **** #  define Fl_Image_H
  24:fltk-1.3.4-1/FL/Fl_Image.H **** 
  25:fltk-1.3.4-1/FL/Fl_Image.H **** #  include "Enumerations.H"
  26:fltk-1.3.4-1/FL/Fl_Image.H **** #include <stdlib.h>
  27:fltk-1.3.4-1/FL/Fl_Image.H **** 
  28:fltk-1.3.4-1/FL/Fl_Image.H **** class Fl_Widget;
  29:fltk-1.3.4-1/FL/Fl_Image.H **** class Fl_Pixmap;
  30:fltk-1.3.4-1/FL/Fl_Image.H **** struct Fl_Menu_Item;
  31:fltk-1.3.4-1/FL/Fl_Image.H **** struct Fl_Label;
  32:fltk-1.3.4-1/FL/Fl_Image.H **** 
  33:fltk-1.3.4-1/FL/Fl_Image.H **** 
  34:fltk-1.3.4-1/FL/Fl_Image.H **** /** \enum Fl_RGB_Scaling
  35:fltk-1.3.4-1/FL/Fl_Image.H ****  The scaling algorithm to use for RGB images.
  36:fltk-1.3.4-1/FL/Fl_Image.H **** */
  37:fltk-1.3.4-1/FL/Fl_Image.H **** enum Fl_RGB_Scaling {
  38:fltk-1.3.4-1/FL/Fl_Image.H ****   FL_RGB_SCALING_NEAREST = 0, ///< default RGB image scaling algorithm
  39:fltk-1.3.4-1/FL/Fl_Image.H ****   FL_RGB_SCALING_BILINEAR     ///< more accurate, but slower RGB image scaling algorithm
  40:fltk-1.3.4-1/FL/Fl_Image.H **** };
  41:fltk-1.3.4-1/FL/Fl_Image.H **** 
  42:fltk-1.3.4-1/FL/Fl_Image.H **** 
  43:fltk-1.3.4-1/FL/Fl_Image.H **** /**
  44:fltk-1.3.4-1/FL/Fl_Image.H ****  \brief Base class for image caching and drawing.
  45:fltk-1.3.4-1/FL/Fl_Image.H ****  
  46:fltk-1.3.4-1/FL/Fl_Image.H ****  Fl_Image is the base class used for caching and drawing all kinds of images 
  47:fltk-1.3.4-1/FL/Fl_Image.H ****  in FLTK. This class keeps track of common image data such as the pixels, 
  48:fltk-1.3.4-1/FL/Fl_Image.H ****  colormap, width, height, and depth. Virtual methods are used to provide 
  49:fltk-1.3.4-1/FL/Fl_Image.H ****  type-specific image handling.
  50:fltk-1.3.4-1/FL/Fl_Image.H ****   
  51:fltk-1.3.4-1/FL/Fl_Image.H ****  Since the Fl_Image class does not support image
  52:fltk-1.3.4-1/FL/Fl_Image.H ****  drawing by itself, calling the draw() method results in
  53:fltk-1.3.4-1/FL/Fl_Image.H ****  a box with an X in it being drawn instead.
  54:fltk-1.3.4-1/FL/Fl_Image.H **** */
  55:fltk-1.3.4-1/FL/Fl_Image.H **** class FL_EXPORT Fl_Image {
  56:fltk-1.3.4-1/FL/Fl_Image.H ****     
  57:fltk-1.3.4-1/FL/Fl_Image.H **** public:
  58:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_NO_IMAGE    = -1;
  59:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_FILE_ACCESS = -2;
  60:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_FORMAT      = -3;
  61:fltk-1.3.4-1/FL/Fl_Image.H ****     
  62:fltk-1.3.4-1/FL/Fl_Image.H **** private:
  63:fltk-1.3.4-1/FL/Fl_Image.H ****   int w_, h_, d_, ld_, count_;
  64:fltk-1.3.4-1/FL/Fl_Image.H ****   const char * const *data_;
  65:fltk-1.3.4-1/FL/Fl_Image.H ****   static Fl_RGB_Scaling RGB_scaling_;
  66:fltk-1.3.4-1/FL/Fl_Image.H **** 
  67:fltk-1.3.4-1/FL/Fl_Image.H ****   // Forbid use of copy constructor and assign operator
  68:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image & operator=(const Fl_Image &);
  69:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image(const Fl_Image &);
  70:fltk-1.3.4-1/FL/Fl_Image.H **** 
  71:fltk-1.3.4-1/FL/Fl_Image.H **** protected:
  72:fltk-1.3.4-1/FL/Fl_Image.H **** 
  73:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  74:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image width in pixels.
  75:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   void w(int W) {w_ = W;}
  77:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  78:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image height in pixels.
  79:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   void h(int H) {h_ = H;}
  81:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image depth.
  83:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   void d(int D) {d_ = D;}
  85:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  86:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current line data size in bytes.
  87:fltk-1.3.4-1/FL/Fl_Image.H **** 
  88:fltk-1.3.4-1/FL/Fl_Image.H ****    Color images may contain extra data that is included after every
  89:fltk-1.3.4-1/FL/Fl_Image.H ****    line of color image data and is normally not present.
  90:fltk-1.3.4-1/FL/Fl_Image.H **** 
  91:fltk-1.3.4-1/FL/Fl_Image.H ****    If \p LD is zero, then line data size is assumed to be w() * d() bytes.
  92:fltk-1.3.4-1/FL/Fl_Image.H **** 
  93:fltk-1.3.4-1/FL/Fl_Image.H ****    If \p LD is non-zero, then it must be positive and larger than w() * d()
  94:fltk-1.3.4-1/FL/Fl_Image.H ****    to account for the extra data per line.
  95:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  96:fltk-1.3.4-1/FL/Fl_Image.H ****   void ld(int LD) {ld_ = LD;}
  97:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
  98:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current array pointer and count of pointers in the array.
  99:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 100:fltk-1.3.4-1/FL/Fl_Image.H ****   void data(const char * const *p, int c) {data_ = p; count_ = c;}
 101:fltk-1.3.4-1/FL/Fl_Image.H ****   void draw_empty(int X, int Y);
 102:fltk-1.3.4-1/FL/Fl_Image.H **** 
 103:fltk-1.3.4-1/FL/Fl_Image.H ****   static void labeltype(const Fl_Label *lo, int lx, int ly, int lw, int lh, Fl_Align la);
 104:fltk-1.3.4-1/FL/Fl_Image.H ****   static void measure(const Fl_Label *lo, int &lw, int &lh);
 105:fltk-1.3.4-1/FL/Fl_Image.H **** 
 106:fltk-1.3.4-1/FL/Fl_Image.H **** public:
 107:fltk-1.3.4-1/FL/Fl_Image.H **** 
 108:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
 109:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image width in pixels.
 110:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 111:fltk-1.3.4-1/FL/Fl_Image.H ****   int w() const {return w_;}
 112:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 113:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image height in pixels.
 114:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 115:fltk-1.3.4-1/FL/Fl_Image.H ****   int h() const {return h_;}
 116:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 117:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current image depth.
 118:fltk-1.3.4-1/FL/Fl_Image.H ****    The return value will be 0 for bitmaps, 1 for
 119:fltk-1.3.4-1/FL/Fl_Image.H ****    pixmaps, and 1 to 4 for color images.</P>
 120:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 121:fltk-1.3.4-1/FL/Fl_Image.H ****   int d() const {return d_;}
 122:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 123:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns the current line data size in bytes.
 124:fltk-1.3.4-1/FL/Fl_Image.H ****    \see ld(int)
 125:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 126:fltk-1.3.4-1/FL/Fl_Image.H ****   int ld() const {return ld_;}
 127:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 128:fltk-1.3.4-1/FL/Fl_Image.H ****    The count() method returns the number of data values
 129:fltk-1.3.4-1/FL/Fl_Image.H ****    associated with the image. The value will be 0 for images with
 130:fltk-1.3.4-1/FL/Fl_Image.H ****    no associated data, 1 for bitmap and color images, and greater
 131:fltk-1.3.4-1/FL/Fl_Image.H ****    than 2 for pixmap images.
 132:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 133:fltk-1.3.4-1/FL/Fl_Image.H ****   int count() const {return count_;}
 134:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 135:fltk-1.3.4-1/FL/Fl_Image.H ****    Returns a pointer to the current image data array.
 136:fltk-1.3.4-1/FL/Fl_Image.H ****    Use the count() method to find the size of the data array.
 137:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 138:fltk-1.3.4-1/FL/Fl_Image.H ****   const char * const *data() const {return data_;}
 139:fltk-1.3.4-1/FL/Fl_Image.H ****   int fail();
 140:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image(int W, int H, int D);
 141:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual ~Fl_Image();
 142:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual Fl_Image *copy(int W, int H);
 143:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 144:fltk-1.3.4-1/FL/Fl_Image.H ****    The copy() method creates a copy of the specified
 145:fltk-1.3.4-1/FL/Fl_Image.H ****    image. If the width and height are provided, the image is
 146:fltk-1.3.4-1/FL/Fl_Image.H ****    resized to the specified size. The image should be deleted (or in
 147:fltk-1.3.4-1/FL/Fl_Image.H ****    the case of Fl_Shared_Image, released) when you are done
 148:fltk-1.3.4-1/FL/Fl_Image.H ****    with it.
 149:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 150:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image *copy() { return copy(w(), h()); }
 151:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void color_average(Fl_Color c, float i);
 152:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 153:fltk-1.3.4-1/FL/Fl_Image.H ****    The inactive() method calls
 154:fltk-1.3.4-1/FL/Fl_Image.H ****    color_average(FL_BACKGROUND_COLOR, 0.33f) to produce
 155:fltk-1.3.4-1/FL/Fl_Image.H ****    an image that appears grayed out.
 156:fltk-1.3.4-1/FL/Fl_Image.H **** 
 157:fltk-1.3.4-1/FL/Fl_Image.H ****    An internal copy is made of the original image before
 158:fltk-1.3.4-1/FL/Fl_Image.H ****    changes are applied, to avoid modifying the original image.
 159:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 160:fltk-1.3.4-1/FL/Fl_Image.H ****   void inactive() { color_average(FL_GRAY, .33f); }
 161:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void desaturate();
 162:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void label(Fl_Widget*w);
 163:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void label(Fl_Menu_Item*m);
 164:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 165:fltk-1.3.4-1/FL/Fl_Image.H ****    Draws the image with a bounding box.
 166:fltk-1.3.4-1/FL/Fl_Image.H ****    Arguments <tt>X,Y,W,H</tt> specify
 167:fltk-1.3.4-1/FL/Fl_Image.H ****    a bounding box for the image, with the origin        
 168:fltk-1.3.4-1/FL/Fl_Image.H ****    (upper-left corner) of the image offset by the \c cx
 169:fltk-1.3.4-1/FL/Fl_Image.H ****    and \c cy arguments.
 170:fltk-1.3.4-1/FL/Fl_Image.H ****    
 171:fltk-1.3.4-1/FL/Fl_Image.H ****    In other words:  <tt>fl_push_clip(X,Y,W,H)</tt> is applied,
 172:fltk-1.3.4-1/FL/Fl_Image.H ****    the image is drawn with its upper-left corner at <tt>X-cx,Y-cy</tt> and its own width and height
 173:fltk-1.3.4-1/FL/Fl_Image.H ****    <tt>fl_pop_clip</tt><tt>()</tt> is applied.
 174:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 175:fltk-1.3.4-1/FL/Fl_Image.H ****   virtual void draw(int X, int Y, int W, int H, int cx=0, int cy=0); // platform dependent
 176:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 177:fltk-1.3.4-1/FL/Fl_Image.H ****    Draws the image.
 178:fltk-1.3.4-1/FL/Fl_Image.H ****    This form specifies the upper-lefthand corner of the image.
 179:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 180:fltk-1.3.4-1/FL/Fl_Image.H ****   void draw(int X, int Y) {draw(X, Y, w(), h(), 0, 0);} // platform dependent
 171              		.loc 3 180 0
 172 0026 8B432C   		movl	44(%rbx), %eax
 173 0029 4883EC08 		subq	$8, %rsp
 174              		.cfi_def_cfa_offset 40
 175 002d 8B4D08   		movl	8(%rbp), %ecx
 176              	.LVL16:
 177 0030 4531C9   		xorl	%r9d, %r9d
 178 0033 4889EF   		movq	%rbp, %rdi
 179 0036 4429C0   		subl	%r8d, %eax
 180 0039 89C2     		movl	%eax, %edx
 181 003b C1EA1F   		shrl	$31, %edx
 182 003e 01C2     		addl	%eax, %edx
 183 0040 89D0     		movl	%edx, %eax
 184 0042 D1F8     		sarl	%eax
 185 0044 034324   		addl	36(%rbx), %eax
 186 0047 89C2     		movl	%eax, %edx
 187 0049 8B4328   		movl	40(%rbx), %eax
 188 004c 29C8     		subl	%ecx, %eax
 189 004e 89C6     		movl	%eax, %esi
 190 0050 C1EE1F   		shrl	$31, %esi
 191 0053 01C6     		addl	%eax, %esi
 192 0055 89F0     		movl	%esi, %eax
 193 0057 D1F8     		sarl	%eax
 194 0059 034320   		addl	32(%rbx), %eax
 195 005c 89C6     		movl	%eax, %esi
 196 005e 488B4500 		movq	0(%rbp), %rax
 197 0062 6A00     		pushq	$0
 198              		.cfi_def_cfa_offset 48
 199              	.LVL17:
 200 0064 FF5038   		call	*56(%rax)
 201              	.LVL18:
 202 0067 58       		popq	%rax
 203              		.cfi_def_cfa_offset 40
 204 0068 5A       		popq	%rdx
 205              		.cfi_def_cfa_offset 32
 206              	.LVL19:
 207              	.L7:
 208              	.LBE173:
 209              	.LBE172:
 210              	.LBE171:
 211              		.loc 1 456 0
 212 0069 4883C408 		addq	$8, %rsp
 213              		.cfi_remember_state
 214              		.cfi_def_cfa_offset 24
 215 006d 5B       		popq	%rbx
 216              		.cfi_def_cfa_offset 16
 217 006e 5D       		popq	%rbp
 218              		.cfi_def_cfa_offset 8
 219 006f C3       		ret
 220              	.LVL20:
 221              		.p2align 4,,10
 222              		.p2align 3
 223              	.L11:
 224              		.cfi_restore_state
 225 0070 488B6B40 		movq	64(%rbx), %rbp
 226              	.LVL21:
 227              	.LBB174:
 228              		.loc 1 453 0
 229 0074 4885ED   		testq	%rbp, %rbp
 230 0077 75A9     		jne	.L12
 231              	.LBE174:
 232              		.loc 1 456 0
 233 0079 4883C408 		addq	$8, %rsp
 234              		.cfi_def_cfa_offset 24
 235 007d 5B       		popq	%rbx
 236              		.cfi_def_cfa_offset 16
 237              	.LVL22:
 238 007e 5D       		popq	%rbp
 239              		.cfi_def_cfa_offset 8
 240              	.LVL23:
 241 007f C3       		ret
 242              		.cfi_endproc
 243              	.LFE509:
 245              		.section	.text.unlikely._ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6
 246              	.LCOLDE2:
 247              		.section	.text._ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6
 248              	.LHOTE2:
 249              		.section	.text.unlikely._ZN2Fl15draw_box_activeEv,"ax",@progbits
 250              		.align 2
 251              	.LCOLDB3:
 252              		.section	.text._ZN2Fl15draw_box_activeEv,"ax",@progbits
 253              	.LHOTB3:
 254              		.align 2
 255              		.p2align 4,,15
 256              		.globl	_ZN2Fl15draw_box_activeEv
 258              	_ZN2Fl15draw_box_activeEv:
 259              	.LFB468:
 260              		.loc 1 58 0
 261              		.cfi_startproc
 262              		.loc 1 58 0
 263 0000 8B050000 		movl	_ZL14draw_it_active(%rip), %eax
 263      0000
 264 0006 C3       		ret
 265              		.cfi_endproc
 266              	.LFE468:
 268              		.section	.text.unlikely._ZN2Fl15draw_box_activeEv
 269              	.LCOLDE3:
 270              		.section	.text._ZN2Fl15draw_box_activeEv
 271              	.LHOTE3:
 272              		.section	.text.unlikely._Z12fl_gray_rampv,"ax",@progbits
 273              	.LCOLDB4:
 274              		.section	.text._Z12fl_gray_rampv,"ax",@progbits
 275              	.LHOTB4:
 276              		.p2align 4,,15
 277              		.globl	_Z12fl_gray_rampv
 279              	_Z12fl_gray_rampv:
 280              	.LFB469:
 281              		.loc 1 60 0
 282              		.cfi_startproc
 283              		.loc 1 60 0
 284 0000 8B050000 		movl	_ZL14draw_it_active(%rip), %eax
 284      0000
 285 0006 BA000000 		movl	$_ZL13inactive_ramp-65, %edx
 285      00
 286 000b 85C0     		testl	%eax, %eax
 287 000d B8000000 		movl	$_ZL11active_ramp-65, %eax
 287      00
 288 0012 480F44C2 		cmove	%rdx, %rax
 289 0016 C3       		ret
 290              		.cfi_endproc
 291              	.LFE469:
 293              		.section	.text.unlikely._Z12fl_gray_rampv
 294              	.LCOLDE4:
 295              		.section	.text._Z12fl_gray_rampv
 296              	.LHOTE4:
 297              		.section	.text.unlikely._ZN2Fl9box_colorEj,"ax",@progbits
 298              		.align 2
 299              	.LCOLDB5:
 300              		.section	.text._ZN2Fl9box_colorEj,"ax",@progbits
 301              	.LHOTB5:
 302              		.align 2
 303              		.p2align 4,,15
 304              		.globl	_ZN2Fl9box_colorEj
 306              	_ZN2Fl9box_colorEj:
 307              	.LFB470:
 308              		.loc 1 69 0
 309              		.cfi_startproc
 310              	.LVL24:
 311              		.loc 1 70 0
 312 0000 8B050000 		movl	_ZL14draw_it_active(%rip), %eax
 312      0000
 313 0006 85C0     		testl	%eax, %eax
 314 0008 7406     		je	.L21
 315              		.loc 1 71 0 discriminator 4
 316 000a 89F8     		movl	%edi, %eax
 317 000c C3       		ret
 318 000d 0F1F00   		.p2align 4,,10
 319              		.p2align 3
 320              	.L21:
 321              		.loc 1 70 0 discriminator 1
 322 0010 E9000000 		jmp	_Z11fl_inactivej
 322      00
 323              	.LVL25:
 324              		.cfi_endproc
 325              	.LFE470:
 327              		.section	.text.unlikely._ZN2Fl9box_colorEj
 328              	.LCOLDE5:
 329              		.section	.text._ZN2Fl9box_colorEj
 330              	.LHOTE5:
 331              		.section	.text.unlikely._ZN2Fl13set_box_colorEj,"ax",@progbits
 332              		.align 2
 333              	.LCOLDB6:
 334              		.section	.text._ZN2Fl13set_box_colorEj,"ax",@progbits
 335              	.LHOTB6:
 336              		.align 2
 337              		.p2align 4,,15
 338              		.globl	_ZN2Fl13set_box_colorEj
 340              	_ZN2Fl13set_box_colorEj:
 341              	.LFB471:
 342              		.loc 1 93 0
 343              		.cfi_startproc
 344              	.LVL26:
 345 0000 4883EC08 		subq	$8, %rsp
 346              		.cfi_def_cfa_offset 16
 347              	.LBB175:
 348              	.LBB176:
 349              		.loc 1 70 0
 350 0004 8B050000 		movl	_ZL14draw_it_active(%rip), %eax
 350      0000
 351 000a 85C0     		testl	%eax, %eax
 352 000c 7507     		jne	.L23
 353 000e E8000000 		call	_Z11fl_inactivej
 353      00
 354              	.LVL27:
 355 0013 89C7     		movl	%eax, %edi
 356              	.L23:
 357              	.LVL28:
 358              	.LBE176:
 359              	.LBE175:
 360              	.LBB177:
 361              	.LBB178:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 362              		.loc 2 52 0
 363 0015 488B1500 		movq	fl_graphics_driver(%rip), %rdx
 363      000000
 364 001c 89FE     		movl	%edi, %esi
 365 001e 488B02   		movq	(%rdx), %rax
 366 0021 4889D7   		movq	%rdx, %rdi
 367 0024 488B8088 		movq	136(%rax), %rax
 367      000000
 368              	.LBE178:
 369              	.LBE177:
 370              		.loc 1 93 0
 371 002b 4883C408 		addq	$8, %rsp
 372              		.cfi_def_cfa_offset 8
 373              	.LBB180:
 374              	.LBB179:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 375              		.loc 2 52 0
 376 002f FFE0     		jmp	*%rax
 377              	.LVL29:
 378              	.LBE179:
 379              	.LBE180:
 380              		.cfi_endproc
 381              	.LFE471:
 383              		.section	.text.unlikely._ZN2Fl13set_box_colorEj
 384              	.LCOLDE6:
 385              		.section	.text._ZN2Fl13set_box_colorEj
 386              	.LHOTE6:
 387              		.section	.text.unlikely._Z12fl_rectboundiiiij,"ax",@progbits
 388              	.LCOLDB7:
 389              		.section	.text._Z12fl_rectboundiiiij,"ax",@progbits
 390              	.LHOTB7:
 391              		.p2align 4,,15
 392              		.globl	_Z12fl_rectboundiiiij
 394              	_Z12fl_rectboundiiiij:
 395              	.LFB488:
 396              		.loc 1 266 0
 397              		.cfi_startproc
 398              	.LVL30:
 399 0000 4156     		pushq	%r14
 400              		.cfi_def_cfa_offset 16
 401              		.cfi_offset 14, -16
 402 0002 4155     		pushq	%r13
 403              		.cfi_def_cfa_offset 24
 404              		.cfi_offset 13, -24
 405 0004 4589C6   		movl	%r8d, %r14d
 406 0007 4154     		pushq	%r12
 407              		.cfi_def_cfa_offset 32
 408              		.cfi_offset 12, -32
 409 0009 55       		pushq	%rbp
 410              		.cfi_def_cfa_offset 40
 411              		.cfi_offset 6, -40
 412 000a 4189D4   		movl	%edx, %r12d
 413 000d 53       		pushq	%rbx
 414              		.cfi_def_cfa_offset 48
 415              		.cfi_offset 3, -48
 416              		.loc 1 266 0
 417 000e 89FB     		movl	%edi, %ebx
 418              		.loc 1 267 0
 419 0010 BF380000 		movl	$56, %edi
 419      00
 420              	.LVL31:
 421              		.loc 1 266 0
 422 0015 89F5     		movl	%esi, %ebp
 423 0017 4189CD   		movl	%ecx, %r13d
 424              		.loc 1 267 0
 425 001a E8000000 		call	_ZN2Fl13set_box_colorEj
 425      00
 426              	.LVL32:
 427              	.LBB181:
 428              	.LBB182:
 201:fltk-1.3.4-1/FL/fl_draw.H **** 
 429              		.loc 2 201 0
 430 001f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 430      000000
 431 0026 4589E8   		movl	%r13d, %r8d
 432 0029 4489E1   		movl	%r12d, %ecx
 433 002c 89EA     		movl	%ebp, %edx
 434 002e 89DE     		movl	%ebx, %esi
 435 0030 488B07   		movq	(%rdi), %rax
 436 0033 FF5018   		call	*24(%rax)
 437              	.LVL33:
 438              	.LBE182:
 439              	.LBE181:
 440              		.loc 1 269 0
 441 0036 4489F7   		movl	%r14d, %edi
 442 0039 E8000000 		call	_ZN2Fl13set_box_colorEj
 442      00
 443              	.LVL34:
 444              	.LBB183:
 445              	.LBB184:
 446              		.loc 2 206 0
 447 003e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 447      000000
 448 0045 418D4C24 		leal	-2(%r12), %ecx
 448      FE
 449              	.LVL35:
 450 004a 8D5501   		leal	1(%rbp), %edx
 451              	.LVL36:
 452 004d 8D7301   		leal	1(%rbx), %esi
 453              	.LVL37:
 454 0050 458D45FE 		leal	-2(%r13), %r8d
 455              	.LVL38:
 456              	.LBE184:
 457              	.LBE183:
 458              		.loc 1 271 0
 459 0054 5B       		popq	%rbx
 460              		.cfi_def_cfa_offset 40
 461              	.LVL39:
 462              	.LBB187:
 463              	.LBB185:
 464              		.loc 2 206 0
 465 0055 488B07   		movq	(%rdi), %rax
 466              	.LBE185:
 467              	.LBE187:
 468              		.loc 1 271 0
 469 0058 5D       		popq	%rbp
 470              		.cfi_def_cfa_offset 32
 471              	.LVL40:
 472 0059 415C     		popq	%r12
 473              		.cfi_def_cfa_offset 24
 474              	.LVL41:
 475 005b 415D     		popq	%r13
 476              		.cfi_def_cfa_offset 16
 477              	.LVL42:
 478 005d 415E     		popq	%r14
 479              		.cfi_def_cfa_offset 8
 480              	.LVL43:
 481              	.LBB188:
 482              	.LBB186:
 483              		.loc 2 206 0
 484 005f 488B4020 		movq	32(%rax), %rax
 485 0063 FFE0     		jmp	*%rax
 486              	.LVL44:
 487              	.LBE186:
 488              	.LBE188:
 489              		.cfi_endproc
 490              	.LFE488:
 492              		.section	.text.unlikely._Z12fl_rectboundiiiij
 493              	.LCOLDE7:
 494              		.section	.text._Z12fl_rectboundiiiij
 495              	.LHOTE7:
 496              		.section	.text.unlikely._Z15fl_border_frameiiiij,"ax",@progbits
 497              	.LCOLDB8:
 498              		.section	.text._Z15fl_border_frameiiiij,"ax",@progbits
 499              	.LHOTB8:
 500              		.p2align 4,,15
 501              		.globl	_Z15fl_border_frameiiiij
 503              	_Z15fl_border_frameiiiij:
 504              	.LFB489:
 505              		.loc 1 277 0
 506              		.cfi_startproc
 507              	.LVL45:
 508 0000 4155     		pushq	%r13
 509              		.cfi_def_cfa_offset 16
 510              		.cfi_offset 13, -16
 511 0002 4154     		pushq	%r12
 512              		.cfi_def_cfa_offset 24
 513              		.cfi_offset 12, -24
 514 0004 4189CD   		movl	%ecx, %r13d
 515 0007 55       		pushq	%rbp
 516              		.cfi_def_cfa_offset 32
 517              		.cfi_offset 6, -32
 518 0008 53       		pushq	%rbx
 519              		.cfi_def_cfa_offset 40
 520              		.cfi_offset 3, -40
 521 0009 89FB     		movl	%edi, %ebx
 522              		.loc 1 278 0
 523 000b 4489C7   		movl	%r8d, %edi
 524              	.LVL46:
 525              		.loc 1 277 0
 526 000e 89F5     		movl	%esi, %ebp
 527 0010 4189D4   		movl	%edx, %r12d
 528 0013 4883EC08 		subq	$8, %rsp
 529              		.cfi_def_cfa_offset 48
 530              		.loc 1 278 0
 531 0017 E8000000 		call	_ZN2Fl13set_box_colorEj
 531      00
 532              	.LVL47:
 533              	.LBB189:
 534              	.LBB190:
 201:fltk-1.3.4-1/FL/fl_draw.H **** 
 535              		.loc 2 201 0
 536 001c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 536      000000
 537 0023 4589E8   		movl	%r13d, %r8d
 538 0026 4489E1   		movl	%r12d, %ecx
 539 0029 89EA     		movl	%ebp, %edx
 540 002b 89DE     		movl	%ebx, %esi
 541 002d 488B07   		movq	(%rdi), %rax
 542 0030 488B4018 		movq	24(%rax), %rax
 543              	.LBE190:
 544              	.LBE189:
 545              		.loc 1 280 0
 546 0034 4883C408 		addq	$8, %rsp
 547              		.cfi_def_cfa_offset 40
 548 0038 5B       		popq	%rbx
 549              		.cfi_def_cfa_offset 32
 550              	.LVL48:
 551 0039 5D       		popq	%rbp
 552              		.cfi_def_cfa_offset 24
 553              	.LVL49:
 554 003a 415C     		popq	%r12
 555              		.cfi_def_cfa_offset 16
 556              	.LVL50:
 557 003c 415D     		popq	%r13
 558              		.cfi_def_cfa_offset 8
 559              	.LVL51:
 560              	.LBB192:
 561              	.LBB191:
 201:fltk-1.3.4-1/FL/fl_draw.H **** 
 562              		.loc 2 201 0
 563 003e FFE0     		jmp	*%rax
 564              	.LVL52:
 565              	.LBE191:
 566              	.LBE192:
 567              		.cfi_endproc
 568              	.LFE489:
 570              		.section	.text.unlikely._Z15fl_border_frameiiiij
 571              	.LCOLDE8:
 572              		.section	.text._Z15fl_border_frameiiiij
 573              	.LHOTE8:
 574              		.section	.text.unlikely._Z8fl_framePKciiii,"ax",@progbits
 575              	.LCOLDB9:
 576              		.section	.text._Z8fl_framePKciiii,"ax",@progbits
 577              	.LHOTB9:
 578              		.p2align 4,,15
 579              		.globl	_Z8fl_framePKciiii
 581              	_Z8fl_framePKciiii:
 582              	.LFB472:
 583              		.loc 1 107 0
 584              		.cfi_startproc
 585              	.LVL53:
 586 0000 4157     		pushq	%r15
 587              		.cfi_def_cfa_offset 16
 588              		.cfi_offset 15, -16
 589 0002 4156     		pushq	%r14
 590              		.cfi_def_cfa_offset 24
 591              		.cfi_offset 14, -24
 592 0004 4155     		pushq	%r13
 593              		.cfi_def_cfa_offset 32
 594              		.cfi_offset 13, -32
 595 0006 4154     		pushq	%r12
 596              		.cfi_def_cfa_offset 40
 597              		.cfi_offset 12, -40
 598              	.LBB193:
 599              	.LBB194:
 600              		.loc 1 60 0
 601 0008 41BD0000 		movl	$_ZL11active_ramp-65, %r13d
 601      0000
 602              	.LBE194:
 603              	.LBE193:
 604              		.loc 1 107 0
 605 000e 55       		pushq	%rbp
 606              		.cfi_def_cfa_offset 48
 607              		.cfi_offset 6, -48
 608 000f 53       		pushq	%rbx
 609              		.cfi_def_cfa_offset 56
 610              		.cfi_offset 3, -56
 611 0010 4883EC28 		subq	$40, %rsp
 612              		.cfi_def_cfa_offset 96
 613              	.LBB197:
 614              	.LBB195:
 615              		.loc 1 60 0
 616 0014 8B050000 		movl	_ZL14draw_it_active(%rip), %eax
 616      0000
 617              	.LBE195:
 618              	.LBE197:
 619              		.loc 1 107 0
 620 001a 89542410 		movl	%edx, 16(%rsp)
 621 001e 44894424 		movl	%r8d, 20(%rsp)
 621      14
 622              	.LBB198:
 623              	.LBB196:
 624              		.loc 1 60 0
 625 0023 85C0     		testl	%eax, %eax
 626 0025 B8000000 		movl	$_ZL13inactive_ramp-65, %eax
 626      00
 627 002a 4C0F44E8 		cmove	%rax, %r13
 628              	.LBE196:
 629              	.LBE198:
 630              		.loc 1 109 0
 631 002e 4585C0   		testl	%r8d, %r8d
 632 0031 0F8E5E01 		jle	.L30
 632      0000
 633 0037 85C9     		testl	%ecx, %ecx
 634 0039 0F8E5601 		jle	.L30
 634      0000
 635 003f 4189CF   		movl	%ecx, %r15d
 636 0042 89D1     		movl	%edx, %ecx
 637              	.LVL54:
 638 0044 4189D4   		movl	%edx, %r12d
 639 0047 428D4401 		leal	-1(%rcx,%r8), %eax
 639      FF
 640 004c 428D543E 		leal	-1(%rsi,%r15), %edx
 640      FF
 641              	.LVL55:
 642 0051 4889FB   		movq	%rdi, %rbx
 643 0054 44894424 		movl	%r8d, 4(%rsp)
 643      04
 644 0059 89F5     		movl	%esi, %ebp
 645 005b 4531F6   		xorl	%r14d, %r14d
 646 005e 89542418 		movl	%edx, 24(%rsp)
 647 0062 8944241C 		movl	%eax, 28(%rsp)
 648 0066 E91E0100 		jmp	.L35
 648      00
 649              	.LVL56:
 650 006b 0F1F4400 		.p2align 4,,10
 650      00
 651              		.p2align 3
 652              	.L50:
 653              	.LBB199:
 654              	.LBB200:
 655              	.LBB201:
 656              	.LBB202:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 657              		.loc 2 52 0
 658 0070 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 658      000000
 659 0077 410FB674 		movzbl	0(%r13,%rax), %esi
 659      0500
 660 007d 488B07   		movq	(%rdi), %rax
 661              	.LVL57:
 662 0080 FF908800 		call	*136(%rax)
 662      0000
 663              	.LVL58:
 664 0086 8B442418 		movl	24(%rsp), %eax
 665              	.LBE202:
 666              	.LBE201:
 667              	.LBE200:
 668              	.LBE199:
 669              	.LBB203:
 670              	.LBB204:
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
 671              		.loc 2 255 0
 672 008a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 672      000000
 673 0091 4489E2   		movl	%r12d, %edx
 674 0094 89EE     		movl	%ebp, %esi
 675              	.LBE204:
 676              	.LBE203:
 677              		.loc 1 113 0
 678 0096 4183C401 		addl	$1, %r12d
 679              	.LVL59:
 680 009a 4429F0   		subl	%r14d, %eax
 681 009d 89C1     		movl	%eax, %ecx
 682              	.LVL60:
 683              	.LBB206:
 684              	.LBB205:
 685              		.loc 2 255 0
 686 009f 488B07   		movq	(%rdi), %rax
 687              	.LVL61:
 688 00a2 894C2408 		movl	%ecx, 8(%rsp)
 689 00a6 FF5030   		call	*48(%rax)
 690              	.LVL62:
 691              	.LBE205:
 692              	.LBE206:
 693              		.loc 1 113 0
 694 00a9 837C2404 		cmpl	$1, 4(%rsp)
 694      01
 695 00ae 0F84E100 		je	.L30
 695      0000
 696              	.LVL63:
 697              		.loc 1 115 0
 698 00b4 480FBE43 		movsbq	1(%rbx), %rax
 698      01
 699              	.LBB207:
 700              	.LBB208:
 701              	.LBB209:
 702              	.LBB210:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 703              		.loc 2 52 0
 704 00b9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 704      000000
 705 00c0 410FB674 		movzbl	0(%r13,%rax), %esi
 705      0500
 706 00c6 488B07   		movq	(%rdi), %rax
 707 00c9 FF908800 		call	*136(%rax)
 707      0000
 708              	.LVL64:
 709              	.LBE210:
 710              	.LBE209:
 711              	.LBE208:
 712              	.LBE207:
 713              	.LBB211:
 714              	.LBB212:
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
 715              		.loc 2 270 0
 716 00cf 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 716      000000
 717 00d6 8B74241C 		movl	28(%rsp), %esi
 718 00da 4489E1   		movl	%r12d, %ecx
 719 00dd 488B07   		movq	(%rdi), %rax
 720 00e0 4429F6   		subl	%r14d, %esi
 721              	.LVL65:
 722 00e3 8974240C 		movl	%esi, 12(%rsp)
 723 00e7 89F2     		movl	%esi, %edx
 724 00e9 89EE     		movl	%ebp, %esi
 725              	.LVL66:
 726              	.LBE212:
 727              	.LBE211:
 728              		.loc 1 117 0
 729 00eb 83C501   		addl	$1, %ebp
 730              	.LVL67:
 731              	.LBB214:
 732              	.LBB213:
 733              		.loc 2 270 0
 734 00ee FF5048   		call	*72(%rax)
 735              	.LVL68:
 736              	.LBE213:
 737              	.LBE214:
 738              		.loc 1 117 0
 739 00f1 4183FF01 		cmpl	$1, %r15d
 740 00f5 0F849A00 		je	.L30
 740      0000
 741              	.LVL69:
 742              		.loc 1 119 0
 743 00fb 480FBE43 		movsbq	2(%rbx), %rax
 743      02
 744              	.LBB215:
 745              	.LBB216:
 746              	.LBB217:
 747              	.LBB218:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 748              		.loc 2 52 0
 749 0100 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 749      000000
 750 0107 410FB674 		movzbl	0(%r13,%rax), %esi
 750      0500
 751 010d 488B07   		movq	(%rdi), %rax
 752 0110 FF908800 		call	*136(%rax)
 752      0000
 753              	.LVL70:
 754              	.LBE218:
 755              	.LBE217:
 756              	.LBE216:
 757              	.LBE215:
 758              	.LBB219:
 759              	.LBB220:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 760              		.loc 2 255 0
 761 0116 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 761      000000
 762 011d 8B54240C 		movl	12(%rsp), %edx
 763 0121 89EE     		movl	%ebp, %esi
 764 0123 8B4C2408 		movl	8(%rsp), %ecx
 765 0127 488B07   		movq	(%rdi), %rax
 766 012a FF5030   		call	*48(%rax)
 767              	.LVL71:
 768              	.LBE220:
 769              	.LBE219:
 770              		.loc 1 121 0
 771 012d 836C2404 		subl	$2, 4(%rsp)
 771      02
 772 0132 8B542404 		movl	4(%rsp), %edx
 773              	.LVL72:
 774 0136 85D2     		testl	%edx, %edx
 775 0138 7E5B     		jle	.L30
 776 013a 4883C304 		addq	$4, %rbx
 777              	.LVL73:
 778              		.loc 1 123 0
 779 013e 480FBE43 		movsbq	-1(%rbx), %rax
 779      FF
 780              	.LBB221:
 781              	.LBB222:
 782              	.LBB223:
 783              	.LBB224:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 784              		.loc 2 52 0
 785 0143 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 785      000000
 786              	.LBE224:
 787              	.LBE223:
 788              	.LBE222:
 789              	.LBE221:
 790              		.loc 1 125 0
 791 014a 4183EF02 		subl	$2, %r15d
 792              	.LVL74:
 793              	.LBB228:
 794              	.LBB227:
 795              	.LBB226:
 796              	.LBB225:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 797              		.loc 2 52 0
 798 014e 410FB674 		movzbl	0(%r13,%rax), %esi
 798      0500
 799 0154 488B07   		movq	(%rdi), %rax
 800 0157 FF908800 		call	*136(%rax)
 800      0000
 801              	.LVL75:
 802              	.LBE225:
 803              	.LBE226:
 804              	.LBE227:
 805              	.LBE228:
 806              	.LBB229:
 807              	.LBB230:
 808              		.loc 2 270 0
 809 015d 8B442410 		movl	16(%rsp), %eax
 810 0161 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 810      000000
 811 0168 4489E1   		movl	%r12d, %ecx
 812 016b 8B542414 		movl	20(%rsp), %edx
 813 016f 8B742408 		movl	8(%rsp), %esi
 814 0173 8D5410FE 		leal	-2(%rax,%rdx), %edx
 815 0177 488B07   		movq	(%rdi), %rax
 816 017a 4429F2   		subl	%r14d, %edx
 817 017d 4183C601 		addl	$1, %r14d
 818              	.LVL76:
 819 0181 FF5048   		call	*72(%rax)
 820              	.LVL77:
 821              	.LBE230:
 822              	.LBE229:
 823              		.loc 1 125 0
 824 0184 4585FF   		testl	%r15d, %r15d
 825 0187 7E0C     		jle	.L30
 826              	.L35:
 827              		.loc 1 109 0 discriminator 1
 828 0189 480FBE03 		movsbq	(%rbx), %rax
 829 018d 84C0     		testb	%al, %al
 830 018f 0F85DBFE 		jne	.L50
 830      FFFF
 831              	.LVL78:
 832              	.L30:
 833              		.loc 1 127 0
 834 0195 4883C428 		addq	$40, %rsp
 835              		.cfi_def_cfa_offset 56
 836 0199 5B       		popq	%rbx
 837              		.cfi_def_cfa_offset 48
 838 019a 5D       		popq	%rbp
 839              		.cfi_def_cfa_offset 40
 840 019b 415C     		popq	%r12
 841              		.cfi_def_cfa_offset 32
 842 019d 415D     		popq	%r13
 843              		.cfi_def_cfa_offset 24
 844 019f 415E     		popq	%r14
 845              		.cfi_def_cfa_offset 16
 846 01a1 415F     		popq	%r15
 847              		.cfi_def_cfa_offset 8
 848 01a3 C3       		ret
 849              		.cfi_endproc
 850              	.LFE472:
 852              		.section	.text.unlikely._Z8fl_framePKciiii
 853              	.LCOLDE9:
 854              		.section	.text._Z8fl_framePKciiii
 855              	.LHOTE9:
 856              		.section	.rodata.str1.1,"aMS",@progbits,1
 857              	.LC10:
 858 0000 48485757 		.string	"HHWWWWHH"
 858      57574848 
 858      00
 859              		.section	.text.unlikely._Z17fl_engraved_frameiiiij,"ax",@progbits
 860              	.LCOLDB11:
 861              		.section	.text._Z17fl_engraved_frameiiiij,"ax",@progbits
 862              	.LHOTB11:
 863              		.p2align 4,,15
 864              		.globl	_Z17fl_engraved_frameiiiij
 866              	_Z17fl_engraved_frameiiiij:
 867              	.LFB484:
 868              		.loc 1 239 0
 869              		.cfi_startproc
 870              	.LVL79:
 871              		.loc 1 239 0
 872 0000 4189C8   		movl	%ecx, %r8d
 873              		.loc 1 240 0
 874 0003 89D1     		movl	%edx, %ecx
 875              	.LVL80:
 876 0005 89F2     		movl	%esi, %edx
 877              	.LVL81:
 878 0007 89FE     		movl	%edi, %esi
 879              	.LVL82:
 880 0009 BF000000 		movl	$.LC10, %edi
 880      00
 881              	.LVL83:
 882 000e E9000000 		jmp	_Z8fl_framePKciiii
 882      00
 883              	.LVL84:
 884              		.cfi_endproc
 885              	.LFE484:
 887              		.section	.text.unlikely._Z17fl_engraved_frameiiiij
 888              	.LCOLDE11:
 889              		.section	.text._Z17fl_engraved_frameiiiij
 890              	.LHOTE11:
 891              		.section	.text.unlikely._Z15fl_engraved_boxiiiij,"ax",@progbits
 892              	.LCOLDB12:
 893              		.section	.text._Z15fl_engraved_boxiiiij,"ax",@progbits
 894              	.LHOTB12:
 895              		.p2align 4,,15
 896              		.globl	_Z15fl_engraved_boxiiiij
 898              	_Z15fl_engraved_boxiiiij:
 899              	.LFB485:
 900              		.loc 1 244 0
 901              		.cfi_startproc
 902              	.LVL85:
 903 0000 4156     		pushq	%r14
 904              		.cfi_def_cfa_offset 16
 905              		.cfi_offset 14, -16
 906 0002 4155     		pushq	%r13
 907              		.cfi_def_cfa_offset 24
 908              		.cfi_offset 13, -24
 909 0004 4589C6   		movl	%r8d, %r14d
 910              	.LVL86:
 911 0007 4154     		pushq	%r12
 912              		.cfi_def_cfa_offset 32
 913              		.cfi_offset 12, -32
 914 0009 55       		pushq	%rbp
 915              		.cfi_def_cfa_offset 40
 916              		.cfi_offset 6, -40
 917              	.LBB231:
 918              	.LBB232:
 919              		.loc 1 240 0
 920 000a 4189C8   		movl	%ecx, %r8d
 921              	.LVL87:
 922              	.LBE232:
 923              	.LBE231:
 924              		.loc 1 244 0
 925 000d 53       		pushq	%rbx
 926              		.cfi_def_cfa_offset 48
 927              		.cfi_offset 3, -48
 928              		.loc 1 244 0
 929 000e 89F5     		movl	%esi, %ebp
 930 0010 89FB     		movl	%edi, %ebx
 931 0012 4189D4   		movl	%edx, %r12d
 932 0015 4189CD   		movl	%ecx, %r13d
 933              	.LBB234:
 934              	.LBB233:
 935              		.loc 1 240 0
 936 0018 89D1     		movl	%edx, %ecx
 937              	.LVL88:
 938 001a 89F2     		movl	%esi, %edx
 939              	.LVL89:
 940 001c 89FE     		movl	%edi, %esi
 941              	.LVL90:
 942 001e BF000000 		movl	$.LC10, %edi
 942      00
 943              	.LVL91:
 944 0023 E8000000 		call	_Z8fl_framePKciiii
 944      00
 945              	.LVL92:
 946              	.LBE233:
 947              	.LBE234:
 948              		.loc 1 246 0
 949 0028 4489F7   		movl	%r14d, %edi
 950 002b E8000000 		call	_ZN2Fl13set_box_colorEj
 950      00
 951              	.LVL93:
 952              	.LBB235:
 953              	.LBB236:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 954              		.loc 2 206 0
 955 0030 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 955      000000
 956 0037 418D4C24 		leal	-4(%r12), %ecx
 956      FC
 957              	.LVL94:
 958 003c 8D5502   		leal	2(%rbp), %edx
 959              	.LVL95:
 960 003f 8D7302   		leal	2(%rbx), %esi
 961              	.LVL96:
 962 0042 458D45FC 		leal	-4(%r13), %r8d
 963              	.LVL97:
 964              	.LBE236:
 965              	.LBE235:
 966              		.loc 1 248 0
 967 0046 5B       		popq	%rbx
 968              		.cfi_def_cfa_offset 40
 969              	.LVL98:
 970              	.LBB239:
 971              	.LBB237:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 972              		.loc 2 206 0
 973 0047 488B07   		movq	(%rdi), %rax
 974              	.LBE237:
 975              	.LBE239:
 976              		.loc 1 248 0
 977 004a 5D       		popq	%rbp
 978              		.cfi_def_cfa_offset 32
 979              	.LVL99:
 980 004b 415C     		popq	%r12
 981              		.cfi_def_cfa_offset 24
 982              	.LVL100:
 983 004d 415D     		popq	%r13
 984              		.cfi_def_cfa_offset 16
 985              	.LVL101:
 986 004f 415E     		popq	%r14
 987              		.cfi_def_cfa_offset 8
 988              	.LVL102:
 989              	.LBB240:
 990              	.LBB238:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 991              		.loc 2 206 0
 992 0051 488B4020 		movq	32(%rax), %rax
 993 0055 FFE0     		jmp	*%rax
 994              	.LVL103:
 995              	.LBE238:
 996              	.LBE240:
 997              		.cfi_endproc
 998              	.LFE485:
 1000              		.section	.text.unlikely._Z15fl_engraved_boxiiiij
 1001              	.LCOLDE12:
 1002              		.section	.text._Z15fl_engraved_boxiiiij
 1003              	.LHOTE12:
 1004              		.section	.rodata.str1.1
 1005              	.LC13:
 1006 0009 57574848 		.string	"WWHHHHWW"
 1006      48485757 
 1006      00
 1007              		.section	.text.unlikely._Z17fl_embossed_frameiiiij,"ax",@progbits
 1008              	.LCOLDB14:
 1009              		.section	.text._Z17fl_embossed_frameiiiij,"ax",@progbits
 1010              	.LHOTB14:
 1011              		.p2align 4,,15
 1012              		.globl	_Z17fl_embossed_frameiiiij
 1014              	_Z17fl_embossed_frameiiiij:
 1015              	.LFB486:
 1016              		.loc 1 251 0
 1017              		.cfi_startproc
 1018              	.LVL104:
 1019              		.loc 1 251 0
 1020 0000 4189C8   		movl	%ecx, %r8d
 1021              		.loc 1 252 0
 1022 0003 89D1     		movl	%edx, %ecx
 1023              	.LVL105:
 1024 0005 89F2     		movl	%esi, %edx
 1025              	.LVL106:
 1026 0007 89FE     		movl	%edi, %esi
 1027              	.LVL107:
 1028 0009 BF000000 		movl	$.LC13, %edi
 1028      00
 1029              	.LVL108:
 1030 000e E9000000 		jmp	_Z8fl_framePKciiii
 1030      00
 1031              	.LVL109:
 1032              		.cfi_endproc
 1033              	.LFE486:
 1035              		.section	.text.unlikely._Z17fl_embossed_frameiiiij
 1036              	.LCOLDE14:
 1037              		.section	.text._Z17fl_embossed_frameiiiij
 1038              	.LHOTE14:
 1039              		.section	.text.unlikely._Z15fl_embossed_boxiiiij,"ax",@progbits
 1040              	.LCOLDB15:
 1041              		.section	.text._Z15fl_embossed_boxiiiij,"ax",@progbits
 1042              	.LHOTB15:
 1043              		.p2align 4,,15
 1044              		.globl	_Z15fl_embossed_boxiiiij
 1046              	_Z15fl_embossed_boxiiiij:
 1047              	.LFB487:
 1048              		.loc 1 256 0
 1049              		.cfi_startproc
 1050              	.LVL110:
 1051 0000 4156     		pushq	%r14
 1052              		.cfi_def_cfa_offset 16
 1053              		.cfi_offset 14, -16
 1054 0002 4155     		pushq	%r13
 1055              		.cfi_def_cfa_offset 24
 1056              		.cfi_offset 13, -24
 1057 0004 4589C6   		movl	%r8d, %r14d
 1058              	.LVL111:
 1059 0007 4154     		pushq	%r12
 1060              		.cfi_def_cfa_offset 32
 1061              		.cfi_offset 12, -32
 1062 0009 55       		pushq	%rbp
 1063              		.cfi_def_cfa_offset 40
 1064              		.cfi_offset 6, -40
 1065              	.LBB241:
 1066              	.LBB242:
 1067              		.loc 1 252 0
 1068 000a 4189C8   		movl	%ecx, %r8d
 1069              	.LVL112:
 1070              	.LBE242:
 1071              	.LBE241:
 1072              		.loc 1 256 0
 1073 000d 53       		pushq	%rbx
 1074              		.cfi_def_cfa_offset 48
 1075              		.cfi_offset 3, -48
 1076              		.loc 1 256 0
 1077 000e 89F5     		movl	%esi, %ebp
 1078 0010 89FB     		movl	%edi, %ebx
 1079 0012 4189D4   		movl	%edx, %r12d
 1080 0015 4189CD   		movl	%ecx, %r13d
 1081              	.LBB244:
 1082              	.LBB243:
 1083              		.loc 1 252 0
 1084 0018 89D1     		movl	%edx, %ecx
 1085              	.LVL113:
 1086 001a 89F2     		movl	%esi, %edx
 1087              	.LVL114:
 1088 001c 89FE     		movl	%edi, %esi
 1089              	.LVL115:
 1090 001e BF000000 		movl	$.LC13, %edi
 1090      00
 1091              	.LVL116:
 1092 0023 E8000000 		call	_Z8fl_framePKciiii
 1092      00
 1093              	.LVL117:
 1094              	.LBE243:
 1095              	.LBE244:
 1096              		.loc 1 258 0
 1097 0028 4489F7   		movl	%r14d, %edi
 1098 002b E8000000 		call	_ZN2Fl13set_box_colorEj
 1098      00
 1099              	.LVL118:
 1100              	.LBB245:
 1101              	.LBB246:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1102              		.loc 2 206 0
 1103 0030 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1103      000000
 1104 0037 418D4C24 		leal	-4(%r12), %ecx
 1104      FC
 1105              	.LVL119:
 1106 003c 8D5502   		leal	2(%rbp), %edx
 1107              	.LVL120:
 1108 003f 8D7302   		leal	2(%rbx), %esi
 1109              	.LVL121:
 1110 0042 458D45FC 		leal	-4(%r13), %r8d
 1111              	.LVL122:
 1112              	.LBE246:
 1113              	.LBE245:
 1114              		.loc 1 260 0
 1115 0046 5B       		popq	%rbx
 1116              		.cfi_def_cfa_offset 40
 1117              	.LVL123:
 1118              	.LBB249:
 1119              	.LBB247:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1120              		.loc 2 206 0
 1121 0047 488B07   		movq	(%rdi), %rax
 1122              	.LBE247:
 1123              	.LBE249:
 1124              		.loc 1 260 0
 1125 004a 5D       		popq	%rbp
 1126              		.cfi_def_cfa_offset 32
 1127              	.LVL124:
 1128 004b 415C     		popq	%r12
 1129              		.cfi_def_cfa_offset 24
 1130              	.LVL125:
 1131 004d 415D     		popq	%r13
 1132              		.cfi_def_cfa_offset 16
 1133              	.LVL126:
 1134 004f 415E     		popq	%r14
 1135              		.cfi_def_cfa_offset 8
 1136              	.LVL127:
 1137              	.LBB250:
 1138              	.LBB248:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1139              		.loc 2 206 0
 1140 0051 488B4020 		movq	32(%rax), %rax
 1141 0055 FFE0     		jmp	*%rax
 1142              	.LVL128:
 1143              	.LBE248:
 1144              	.LBE250:
 1145              		.cfi_endproc
 1146              	.LFE487:
 1148              		.section	.text.unlikely._Z15fl_embossed_boxiiiij
 1149              	.LCOLDE15:
 1150              		.section	.text._Z15fl_embossed_boxiiiij
 1151              	.LHOTE15:
 1152              		.section	.text.unlikely._Z9fl_frame2PKciiii,"ax",@progbits
 1153              	.LCOLDB16:
 1154              		.section	.text._Z9fl_frame2PKciiii,"ax",@progbits
 1155              	.LHOTB16:
 1156              		.p2align 4,,15
 1157              		.globl	_Z9fl_frame2PKciiii
 1159              	_Z9fl_frame2PKciiii:
 1160              	.LFB473:
 1161              		.loc 1 141 0
 1162              		.cfi_startproc
 1163              	.LVL129:
 1164 0000 4157     		pushq	%r15
 1165              		.cfi_def_cfa_offset 16
 1166              		.cfi_offset 15, -16
 1167 0002 4156     		pushq	%r14
 1168              		.cfi_def_cfa_offset 24
 1169              		.cfi_offset 14, -24
 1170 0004 4189CF   		movl	%ecx, %r15d
 1171 0007 4155     		pushq	%r13
 1172              		.cfi_def_cfa_offset 32
 1173              		.cfi_offset 13, -32
 1174 0009 4154     		pushq	%r12
 1175              		.cfi_def_cfa_offset 40
 1176              		.cfi_offset 12, -40
 1177              	.LBB251:
 1178              	.LBB252:
 1179              		.loc 1 60 0
 1180 000b B9000000 		movl	$_ZL11active_ramp-65, %ecx
 1180      00
 1181              	.LVL130:
 1182              	.LBE252:
 1183              	.LBE251:
 1184              		.loc 1 141 0
 1185 0010 55       		pushq	%rbp
 1186              		.cfi_def_cfa_offset 48
 1187              		.cfi_offset 6, -48
 1188 0011 53       		pushq	%rbx
 1189              		.cfi_def_cfa_offset 56
 1190              		.cfi_offset 3, -56
 1191 0012 4883EC28 		subq	$40, %rsp
 1192              		.cfi_def_cfa_offset 96
 1193              	.LBB254:
 1194              	.LBB253:
 1195              		.loc 1 60 0
 1196 0016 8B050000 		movl	_ZL14draw_it_active(%rip), %eax
 1196      0000
 1197 001c 85C0     		testl	%eax, %eax
 1198 001e B8000000 		movl	$_ZL13inactive_ramp-65, %eax
 1198      00
 1199 0023 480F45C1 		cmovne	%rcx, %rax
 1200              	.LBE253:
 1201              	.LBE254:
 1202              		.loc 1 143 0
 1203 0027 4585C0   		testl	%r8d, %r8d
 1204 002a 0F8E5D01 		jle	.L57
 1204      0000
 1205 0030 4585FF   		testl	%r15d, %r15d
 1206 0033 0F8E5401 		jle	.L57
 1206      0000
 1207 0039 4989C5   		movq	%rax, %r13
 1208 003c 418D0437 		leal	(%r15,%rsi), %eax
 1209 0040 29D6     		subl	%edx, %esi
 1210              	.LVL131:
 1211 0042 4889FD   		movq	%rdi, %rbp
 1212 0045 4589C6   		movl	%r8d, %r14d
 1213 0048 458D2410 		leal	(%r8,%rdx), %r12d
 1214 004c 89442410 		movl	%eax, 16(%rsp)
 1215 0050 89D3     		movl	%edx, %ebx
 1216 0052 8974241C 		movl	%esi, 28(%rsp)
 1217 0056 44897C24 		movl	%r15d, 12(%rsp)
 1217      0C
 1218 005b E9180100 		jmp	.L62
 1218      00
 1219              	.LVL132:
 1220              		.p2align 4,,10
 1221              		.p2align 3
 1222              	.L77:
 1223              	.LBB255:
 1224              	.LBB256:
 1225              	.LBB257:
 1226              	.LBB258:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1227              		.loc 2 52 0
 1228 0060 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1228      000000
 1229 0067 410FB674 		movzbl	0(%r13,%rax), %esi
 1229      0500
 1230 006d 488B07   		movq	(%rdi), %rax
 1231              	.LVL133:
 1232 0070 FF908800 		call	*136(%rax)
 1232      0000
 1233              	.LVL134:
 1234 0076 8B442410 		movl	16(%rsp), %eax
 1235              	.LBE258:
 1236              	.LBE257:
 1237              	.LBE256:
 1238              	.LBE255:
 1239              	.LBB259:
 1240              	.LBB260:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1241              		.loc 2 255 0
 1242 007a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1242      000000
 1243 0081 418D7424 		leal	-1(%r12), %esi
 1243      FF
 1244              	.LVL135:
 1245 0086 89742418 		movl	%esi, 24(%rsp)
 1246 008a 83E801   		subl	$1, %eax
 1247 008d 89C2     		movl	%eax, %edx
 1248              	.LVL136:
 1249 008f 488B07   		movq	(%rdi), %rax
 1250              	.LVL137:
 1251 0092 89542414 		movl	%edx, 20(%rsp)
 1252 0096 89D1     		movl	%edx, %ecx
 1253 0098 89F2     		movl	%esi, %edx
 1254              	.LVL138:
 1255 009a 4489FE   		movl	%r15d, %esi
 1256              	.LVL139:
 1257 009d FF5030   		call	*48(%rax)
 1258              	.LVL140:
 1259              	.LBE260:
 1260              	.LBE259:
 1261              		.loc 1 147 0
 1262 00a0 4183FE01 		cmpl	$1, %r14d
 1263 00a4 0F84E300 		je	.L57
 1263      0000
 1264              	.LVL141:
 1265              		.loc 1 149 0
 1266 00aa 480FBE45 		movsbq	1(%rbp), %rax
 1266      01
 1267              	.LBB261:
 1268              	.LBB262:
 1269              	.LBB263:
 1270              	.LBB264:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1271              		.loc 2 52 0
 1272 00af 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1272      000000
 1273 00b6 4183EC02 		subl	$2, %r12d
 1274 00ba 410FB674 		movzbl	0(%r13,%rax), %esi
 1274      0500
 1275 00c0 488B07   		movq	(%rdi), %rax
 1276 00c3 FF908800 		call	*136(%rax)
 1276      0000
 1277              	.LVL142:
 1278              	.LBE264:
 1279              	.LBE263:
 1280              	.LBE262:
 1281              	.LBE261:
 1282              	.LBB265:
 1283              	.LBB266:
 1284              		.loc 2 270 0
 1285 00c9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1285      000000
 1286 00d0 89D9     		movl	%ebx, %ecx
 1287 00d2 4489E2   		movl	%r12d, %edx
 1288 00d5 8B742414 		movl	20(%rsp), %esi
 1289 00d9 488B07   		movq	(%rdi), %rax
 1290 00dc FF5048   		call	*72(%rax)
 1291              	.LVL143:
 1292              	.LBE266:
 1293              	.LBE265:
 1294              		.loc 1 151 0
 1295 00df 837C240C 		cmpl	$1, 12(%rsp)
 1295      01
 1296 00e4 0F84A300 		je	.L57
 1296      0000
 1297              	.LVL144:
 1298              		.loc 1 153 0
 1299 00ea 480FBE45 		movsbq	2(%rbp), %rax
 1299      02
 1300              	.LBB267:
 1301              	.LBB268:
 1302              	.LBB269:
 1303              	.LBB270:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1304              		.loc 2 52 0
 1305 00ef 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1305      000000
 1306              	.LBE270:
 1307              	.LBE269:
 1308              	.LBE268:
 1309              	.LBE267:
 1310              		.loc 1 155 0
 1311 00f6 4183EE02 		subl	$2, %r14d
 1312              	.LVL145:
 1313              	.LBB274:
 1314              	.LBB273:
 1315              	.LBB272:
 1316              	.LBB271:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1317              		.loc 2 52 0
 1318 00fa 410FB674 		movzbl	0(%r13,%rax), %esi
 1318      0500
 1319 0100 488B07   		movq	(%rdi), %rax
 1320 0103 FF908800 		call	*136(%rax)
 1320      0000
 1321              	.LVL146:
 1322              	.LBE271:
 1323              	.LBE272:
 1324              	.LBE273:
 1325              	.LBE274:
 1326              	.LBB275:
 1327              	.LBB276:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1328              		.loc 2 255 0
 1329 0109 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1329      000000
 1330 0110 8B4C2410 		movl	16(%rsp), %ecx
 1331 0114 89DA     		movl	%ebx, %edx
 1332 0116 4489FE   		movl	%r15d, %esi
 1333              	.LBE276:
 1334              	.LBE275:
 1335              		.loc 1 155 0
 1336 0119 83C301   		addl	$1, %ebx
 1337              	.LVL147:
 1338              	.LBB278:
 1339              	.LBB277:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1340              		.loc 2 255 0
 1341 011c 488B07   		movq	(%rdi), %rax
 1342 011f 83E902   		subl	$2, %ecx
 1343              	.LVL148:
 1344 0122 FF5030   		call	*48(%rax)
 1345              	.LVL149:
 1346              	.LBE277:
 1347              	.LBE278:
 1348              		.loc 1 155 0
 1349 0125 4585F6   		testl	%r14d, %r14d
 1350 0128 7E63     		jle	.L57
 1351 012a 4883C504 		addq	$4, %rbp
 1352              	.LVL150:
 1353              		.loc 1 157 0
 1354 012e 480FBE45 		movsbq	-1(%rbp), %rax
 1354      FF
 1355              	.LBB279:
 1356              	.LBB280:
 1357              	.LBB281:
 1358              	.LBB282:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1359              		.loc 2 52 0
 1360 0133 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1360      000000
 1361 013a 410FB674 		movzbl	0(%r13,%rax), %esi
 1361      0500
 1362 0140 488B07   		movq	(%rdi), %rax
 1363 0143 FF908800 		call	*136(%rax)
 1363      0000
 1364              	.LVL151:
 1365              	.LBE282:
 1366              	.LBE281:
 1367              	.LBE280:
 1368              	.LBE279:
 1369              	.LBB283:
 1370              	.LBB284:
 1371              		.loc 2 270 0
 1372 0149 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1372      000000
 1373 0150 4489E2   		movl	%r12d, %edx
 1374 0153 89D9     		movl	%ebx, %ecx
 1375 0155 4489FE   		movl	%r15d, %esi
 1376 0158 488B07   		movq	(%rdi), %rax
 1377 015b FF5048   		call	*72(%rax)
 1378              	.LVL152:
 1379              	.LBE284:
 1380              	.LBE283:
 1381              		.loc 1 159 0
 1382 015e 836C240C 		subl	$2, 12(%rsp)
 1382      02
 1383              	.LVL153:
 1384 0163 8B542414 		movl	20(%rsp), %edx
 1385 0167 8B44240C 		movl	12(%rsp), %eax
 1386              	.LVL154:
 1387 016b 448B6424 		movl	24(%rsp), %r12d
 1387      18
 1388 0170 89542410 		movl	%edx, 16(%rsp)
 1389 0174 85C0     		testl	%eax, %eax
 1390 0176 7E15     		jle	.L57
 1391              	.LVL155:
 1392              	.L62:
 1393 0178 8B44241C 		movl	28(%rsp), %eax
 1394 017c 448D3C18 		leal	(%rax,%rbx), %r15d
 1395              	.LVL156:
 1396              		.loc 1 143 0 discriminator 1
 1397 0180 480FBE45 		movsbq	0(%rbp), %rax
 1397      00
 1398 0185 84C0     		testb	%al, %al
 1399 0187 0F85D3FE 		jne	.L77
 1399      FFFF
 1400              	.LVL157:
 1401              	.L57:
 1402              		.loc 1 161 0
 1403 018d 4883C428 		addq	$40, %rsp
 1404              		.cfi_def_cfa_offset 56
 1405 0191 5B       		popq	%rbx
 1406              		.cfi_def_cfa_offset 48
 1407 0192 5D       		popq	%rbp
 1408              		.cfi_def_cfa_offset 40
 1409 0193 415C     		popq	%r12
 1410              		.cfi_def_cfa_offset 32
 1411 0195 415D     		popq	%r13
 1412              		.cfi_def_cfa_offset 24
 1413 0197 415E     		popq	%r14
 1414              		.cfi_def_cfa_offset 16
 1415 0199 415F     		popq	%r15
 1416              		.cfi_def_cfa_offset 8
 1417 019b C3       		ret
 1418              		.cfi_endproc
 1419              	.LFE473:
 1421              		.section	.text.unlikely._Z9fl_frame2PKciiii
 1422              	.LCOLDE16:
 1423              		.section	.text._Z9fl_frame2PKciiii
 1424              	.LHOTE16:
 1425              		.section	.rodata.str1.1
 1426              	.LC17:
 1427 0012 57574848 		.string	"WWHH"
 1427      00
 1428              		.section	.text.unlikely._Z18fl_thin_down_frameiiiij,"ax",@progbits
 1429              	.LCOLDB18:
 1430              		.section	.text._Z18fl_thin_down_frameiiiij,"ax",@progbits
 1431              	.LHOTB18:
 1432              		.p2align 4,,15
 1433              		.globl	_Z18fl_thin_down_frameiiiij
 1435              	_Z18fl_thin_down_frameiiiij:
 1436              	.LFB476:
 1437              		.loc 1 172 0
 1438              		.cfi_startproc
 1439              	.LVL158:
 1440              		.loc 1 172 0
 1441 0000 4189C8   		movl	%ecx, %r8d
 1442              		.loc 1 173 0
 1443 0003 89D1     		movl	%edx, %ecx
 1444              	.LVL159:
 1445 0005 89F2     		movl	%esi, %edx
 1446              	.LVL160:
 1447 0007 89FE     		movl	%edi, %esi
 1448              	.LVL161:
 1449 0009 BF000000 		movl	$.LC17, %edi
 1449      00
 1450              	.LVL162:
 1451 000e E9000000 		jmp	_Z9fl_frame2PKciiii
 1451      00
 1452              	.LVL163:
 1453              		.cfi_endproc
 1454              	.LFE476:
 1456              		.section	.text.unlikely._Z18fl_thin_down_frameiiiij
 1457              	.LCOLDE18:
 1458              		.section	.text._Z18fl_thin_down_frameiiiij
 1459              	.LHOTE18:
 1460              		.section	.text.unlikely._Z16fl_thin_down_boxiiiij,"ax",@progbits
 1461              	.LCOLDB19:
 1462              		.section	.text._Z16fl_thin_down_boxiiiij,"ax",@progbits
 1463              	.LHOTB19:
 1464              		.p2align 4,,15
 1465              		.globl	_Z16fl_thin_down_boxiiiij
 1467              	_Z16fl_thin_down_boxiiiij:
 1468              	.LFB477:
 1469              		.loc 1 177 0
 1470              		.cfi_startproc
 1471              	.LVL164:
 1472 0000 4156     		pushq	%r14
 1473              		.cfi_def_cfa_offset 16
 1474              		.cfi_offset 14, -16
 1475 0002 4155     		pushq	%r13
 1476              		.cfi_def_cfa_offset 24
 1477              		.cfi_offset 13, -24
 1478 0004 4589C6   		movl	%r8d, %r14d
 1479              	.LVL165:
 1480 0007 4154     		pushq	%r12
 1481              		.cfi_def_cfa_offset 32
 1482              		.cfi_offset 12, -32
 1483 0009 55       		pushq	%rbp
 1484              		.cfi_def_cfa_offset 40
 1485              		.cfi_offset 6, -40
 1486              	.LBB285:
 1487              	.LBB286:
 1488              		.loc 1 173 0
 1489 000a 4189C8   		movl	%ecx, %r8d
 1490              	.LVL166:
 1491              	.LBE286:
 1492              	.LBE285:
 1493              		.loc 1 177 0
 1494 000d 53       		pushq	%rbx
 1495              		.cfi_def_cfa_offset 48
 1496              		.cfi_offset 3, -48
 1497              		.loc 1 177 0
 1498 000e 89F5     		movl	%esi, %ebp
 1499 0010 89FB     		movl	%edi, %ebx
 1500 0012 4189D4   		movl	%edx, %r12d
 1501 0015 4189CD   		movl	%ecx, %r13d
 1502              	.LBB288:
 1503              	.LBB287:
 1504              		.loc 1 173 0
 1505 0018 89D1     		movl	%edx, %ecx
 1506              	.LVL167:
 1507 001a 89F2     		movl	%esi, %edx
 1508              	.LVL168:
 1509 001c 89FE     		movl	%edi, %esi
 1510              	.LVL169:
 1511 001e BF000000 		movl	$.LC17, %edi
 1511      00
 1512              	.LVL170:
 1513 0023 E8000000 		call	_Z9fl_frame2PKciiii
 1513      00
 1514              	.LVL171:
 1515              	.LBE287:
 1516              	.LBE288:
 1517              		.loc 1 179 0
 1518 0028 4489F7   		movl	%r14d, %edi
 1519 002b E8000000 		call	_ZN2Fl13set_box_colorEj
 1519      00
 1520              	.LVL172:
 1521              	.LBB289:
 1522              	.LBB290:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1523              		.loc 2 206 0
 1524 0030 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1524      000000
 1525 0037 418D4C24 		leal	-2(%r12), %ecx
 1525      FE
 1526              	.LVL173:
 1527 003c 8D5501   		leal	1(%rbp), %edx
 1528              	.LVL174:
 1529 003f 8D7301   		leal	1(%rbx), %esi
 1530              	.LVL175:
 1531 0042 458D45FE 		leal	-2(%r13), %r8d
 1532              	.LVL176:
 1533              	.LBE290:
 1534              	.LBE289:
 1535              		.loc 1 181 0
 1536 0046 5B       		popq	%rbx
 1537              		.cfi_def_cfa_offset 40
 1538              	.LVL177:
 1539              	.LBB293:
 1540              	.LBB291:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1541              		.loc 2 206 0
 1542 0047 488B07   		movq	(%rdi), %rax
 1543              	.LBE291:
 1544              	.LBE293:
 1545              		.loc 1 181 0
 1546 004a 5D       		popq	%rbp
 1547              		.cfi_def_cfa_offset 32
 1548              	.LVL178:
 1549 004b 415C     		popq	%r12
 1550              		.cfi_def_cfa_offset 24
 1551              	.LVL179:
 1552 004d 415D     		popq	%r13
 1553              		.cfi_def_cfa_offset 16
 1554              	.LVL180:
 1555 004f 415E     		popq	%r14
 1556              		.cfi_def_cfa_offset 8
 1557              	.LVL181:
 1558              	.LBB294:
 1559              	.LBB292:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1560              		.loc 2 206 0
 1561 0051 488B4020 		movq	32(%rax), %rax
 1562 0055 FFE0     		jmp	*%rax
 1563              	.LVL182:
 1564              	.LBE292:
 1565              	.LBE294:
 1566              		.cfi_endproc
 1567              	.LFE477:
 1569              		.section	.text.unlikely._Z16fl_thin_down_boxiiiij
 1570              	.LCOLDE19:
 1571              		.section	.text._Z16fl_thin_down_boxiiiij
 1572              	.LHOTE19:
 1573              		.section	.rodata.str1.1
 1574              	.LC20:
 1575 0017 48485757 		.string	"HHWW"
 1575      00
 1576              		.section	.text.unlikely._Z16fl_thin_up_frameiiiij,"ax",@progbits
 1577              	.LCOLDB21:
 1578              		.section	.text._Z16fl_thin_up_frameiiiij,"ax",@progbits
 1579              	.LHOTB21:
 1580              		.p2align 4,,15
 1581              		.globl	_Z16fl_thin_up_frameiiiij
 1583              	_Z16fl_thin_up_frameiiiij:
 1584              	.LFB478:
 1585              		.loc 1 184 0
 1586              		.cfi_startproc
 1587              	.LVL183:
 1588              		.loc 1 184 0
 1589 0000 4189C8   		movl	%ecx, %r8d
 1590              		.loc 1 185 0
 1591 0003 89D1     		movl	%edx, %ecx
 1592              	.LVL184:
 1593 0005 89F2     		movl	%esi, %edx
 1594              	.LVL185:
 1595 0007 89FE     		movl	%edi, %esi
 1596              	.LVL186:
 1597 0009 BF000000 		movl	$.LC20, %edi
 1597      00
 1598              	.LVL187:
 1599 000e E9000000 		jmp	_Z9fl_frame2PKciiii
 1599      00
 1600              	.LVL188:
 1601              		.cfi_endproc
 1602              	.LFE478:
 1604              		.section	.text.unlikely._Z16fl_thin_up_frameiiiij
 1605              	.LCOLDE21:
 1606              		.section	.text._Z16fl_thin_up_frameiiiij
 1607              	.LHOTE21:
 1608              		.section	.text.unlikely._Z14fl_thin_up_boxiiiij,"ax",@progbits
 1609              	.LCOLDB22:
 1610              		.section	.text._Z14fl_thin_up_boxiiiij,"ax",@progbits
 1611              	.LHOTB22:
 1612              		.p2align 4,,15
 1613              		.globl	_Z14fl_thin_up_boxiiiij
 1615              	_Z14fl_thin_up_boxiiiij:
 1616              	.LFB479:
 1617              		.loc 1 189 0
 1618              		.cfi_startproc
 1619              	.LVL189:
 1620 0000 4156     		pushq	%r14
 1621              		.cfi_def_cfa_offset 16
 1622              		.cfi_offset 14, -16
 1623 0002 4155     		pushq	%r13
 1624              		.cfi_def_cfa_offset 24
 1625              		.cfi_offset 13, -24
 1626 0004 4589C6   		movl	%r8d, %r14d
 1627              	.LVL190:
 1628 0007 4154     		pushq	%r12
 1629              		.cfi_def_cfa_offset 32
 1630              		.cfi_offset 12, -32
 1631 0009 55       		pushq	%rbp
 1632              		.cfi_def_cfa_offset 40
 1633              		.cfi_offset 6, -40
 1634              	.LBB295:
 1635              	.LBB296:
 1636              		.loc 1 185 0
 1637 000a 4189C8   		movl	%ecx, %r8d
 1638              	.LVL191:
 1639              	.LBE296:
 1640              	.LBE295:
 1641              		.loc 1 189 0
 1642 000d 53       		pushq	%rbx
 1643              		.cfi_def_cfa_offset 48
 1644              		.cfi_offset 3, -48
 1645              		.loc 1 189 0
 1646 000e 89F5     		movl	%esi, %ebp
 1647 0010 89FB     		movl	%edi, %ebx
 1648 0012 4189D4   		movl	%edx, %r12d
 1649 0015 4189CD   		movl	%ecx, %r13d
 1650              	.LBB298:
 1651              	.LBB297:
 1652              		.loc 1 185 0
 1653 0018 89D1     		movl	%edx, %ecx
 1654              	.LVL192:
 1655 001a 89F2     		movl	%esi, %edx
 1656              	.LVL193:
 1657 001c 89FE     		movl	%edi, %esi
 1658              	.LVL194:
 1659 001e BF000000 		movl	$.LC20, %edi
 1659      00
 1660              	.LVL195:
 1661 0023 E8000000 		call	_Z9fl_frame2PKciiii
 1661      00
 1662              	.LVL196:
 1663              	.LBE297:
 1664              	.LBE298:
 1665              		.loc 1 191 0
 1666 0028 4489F7   		movl	%r14d, %edi
 1667 002b E8000000 		call	_ZN2Fl13set_box_colorEj
 1667      00
 1668              	.LVL197:
 1669              	.LBB299:
 1670              	.LBB300:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1671              		.loc 2 206 0
 1672 0030 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1672      000000
 1673 0037 418D4C24 		leal	-2(%r12), %ecx
 1673      FE
 1674              	.LVL198:
 1675 003c 8D5501   		leal	1(%rbp), %edx
 1676              	.LVL199:
 1677 003f 8D7301   		leal	1(%rbx), %esi
 1678              	.LVL200:
 1679 0042 458D45FE 		leal	-2(%r13), %r8d
 1680              	.LVL201:
 1681              	.LBE300:
 1682              	.LBE299:
 1683              		.loc 1 193 0
 1684 0046 5B       		popq	%rbx
 1685              		.cfi_def_cfa_offset 40
 1686              	.LVL202:
 1687              	.LBB303:
 1688              	.LBB301:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1689              		.loc 2 206 0
 1690 0047 488B07   		movq	(%rdi), %rax
 1691              	.LBE301:
 1692              	.LBE303:
 1693              		.loc 1 193 0
 1694 004a 5D       		popq	%rbp
 1695              		.cfi_def_cfa_offset 32
 1696              	.LVL203:
 1697 004b 415C     		popq	%r12
 1698              		.cfi_def_cfa_offset 24
 1699              	.LVL204:
 1700 004d 415D     		popq	%r13
 1701              		.cfi_def_cfa_offset 16
 1702              	.LVL205:
 1703 004f 415E     		popq	%r14
 1704              		.cfi_def_cfa_offset 8
 1705              	.LVL206:
 1706              	.LBB304:
 1707              	.LBB302:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1708              		.loc 2 206 0
 1709 0051 488B4020 		movq	32(%rax), %rax
 1710 0055 FFE0     		jmp	*%rax
 1711              	.LVL207:
 1712              	.LBE302:
 1713              	.LBE304:
 1714              		.cfi_endproc
 1715              	.LFE479:
 1717              		.section	.text.unlikely._Z14fl_thin_up_boxiiiij
 1718              	.LCOLDE22:
 1719              		.section	.text._Z14fl_thin_up_boxiiiij
 1720              	.LHOTE22:
 1721              		.section	.rodata.str1.1
 1722              	.LC23:
 1723 001c 41415757 		.string	"AAWWMMTT"
 1723      4D4D5454 
 1723      00
 1724              		.section	.text.unlikely._Z11fl_up_frameiiiij,"ax",@progbits
 1725              	.LCOLDB24:
 1726              		.section	.text._Z11fl_up_frameiiiij,"ax",@progbits
 1727              	.LHOTB24:
 1728              		.p2align 4,,15
 1729              		.globl	_Z11fl_up_frameiiiij
 1731              	_Z11fl_up_frameiiiij:
 1732              	.LFB480:
 1733              		.loc 1 196 0
 1734              		.cfi_startproc
 1735              	.LVL208:
 1736              		.loc 1 196 0
 1737 0000 4189C8   		movl	%ecx, %r8d
 1738              		.loc 1 201 0
 1739 0003 89D1     		movl	%edx, %ecx
 1740              	.LVL209:
 1741 0005 89F2     		movl	%esi, %edx
 1742              	.LVL210:
 1743 0007 89FE     		movl	%edi, %esi
 1744              	.LVL211:
 1745 0009 BF000000 		movl	$.LC23, %edi
 1745      00
 1746              	.LVL212:
 1747 000e E9000000 		jmp	_Z9fl_frame2PKciiii
 1747      00
 1748              	.LVL213:
 1749              		.cfi_endproc
 1750              	.LFE480:
 1752              		.section	.text.unlikely._Z11fl_up_frameiiiij
 1753              	.LCOLDE24:
 1754              		.section	.text._Z11fl_up_frameiiiij
 1755              	.LHOTE24:
 1756              		.section	.text.unlikely._Z9fl_up_boxiiiij,"ax",@progbits
 1757              	.LCOLDB25:
 1758              		.section	.text._Z9fl_up_boxiiiij,"ax",@progbits
 1759              	.LHOTB25:
 1760              		.p2align 4,,15
 1761              		.globl	_Z9fl_up_boxiiiij
 1763              	_Z9fl_up_boxiiiij:
 1764              	.LFB481:
 1765              		.loc 1 212 0
 1766              		.cfi_startproc
 1767              	.LVL214:
 1768 0000 4156     		pushq	%r14
 1769              		.cfi_def_cfa_offset 16
 1770              		.cfi_offset 14, -16
 1771 0002 4155     		pushq	%r13
 1772              		.cfi_def_cfa_offset 24
 1773              		.cfi_offset 13, -24
 1774 0004 4589C6   		movl	%r8d, %r14d
 1775              	.LVL215:
 1776 0007 4154     		pushq	%r12
 1777              		.cfi_def_cfa_offset 32
 1778              		.cfi_offset 12, -32
 1779 0009 55       		pushq	%rbp
 1780              		.cfi_def_cfa_offset 40
 1781              		.cfi_offset 6, -40
 1782              	.LBB305:
 1783              	.LBB306:
 1784              		.loc 1 201 0
 1785 000a 4189C8   		movl	%ecx, %r8d
 1786              	.LVL216:
 1787              	.LBE306:
 1788              	.LBE305:
 1789              		.loc 1 212 0
 1790 000d 53       		pushq	%rbx
 1791              		.cfi_def_cfa_offset 48
 1792              		.cfi_offset 3, -48
 1793              		.loc 1 212 0
 1794 000e 89F5     		movl	%esi, %ebp
 1795 0010 89FB     		movl	%edi, %ebx
 1796 0012 4189D4   		movl	%edx, %r12d
 1797 0015 4189CD   		movl	%ecx, %r13d
 1798              	.LBB308:
 1799              	.LBB307:
 1800              		.loc 1 201 0
 1801 0018 89D1     		movl	%edx, %ecx
 1802              	.LVL217:
 1803 001a 89F2     		movl	%esi, %edx
 1804              	.LVL218:
 1805 001c 89FE     		movl	%edi, %esi
 1806              	.LVL219:
 1807 001e BF000000 		movl	$.LC23, %edi
 1807      00
 1808              	.LVL220:
 1809 0023 E8000000 		call	_Z9fl_frame2PKciiii
 1809      00
 1810              	.LVL221:
 1811              	.LBE307:
 1812              	.LBE308:
 1813              		.loc 1 214 0
 1814 0028 4489F7   		movl	%r14d, %edi
 1815 002b E8000000 		call	_ZN2Fl13set_box_colorEj
 1815      00
 1816              	.LVL222:
 1817              	.LBB309:
 1818              	.LBB310:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1819              		.loc 2 206 0
 1820 0030 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1820      000000
 1821 0037 418D4C24 		leal	-4(%r12), %ecx
 1821      FC
 1822              	.LVL223:
 1823 003c 8D5502   		leal	2(%rbp), %edx
 1824              	.LVL224:
 1825 003f 8D7302   		leal	2(%rbx), %esi
 1826              	.LVL225:
 1827 0042 458D45FC 		leal	-4(%r13), %r8d
 1828              	.LVL226:
 1829              	.LBE310:
 1830              	.LBE309:
 1831              		.loc 1 216 0
 1832 0046 5B       		popq	%rbx
 1833              		.cfi_def_cfa_offset 40
 1834              	.LVL227:
 1835              	.LBB313:
 1836              	.LBB311:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1837              		.loc 2 206 0
 1838 0047 488B07   		movq	(%rdi), %rax
 1839              	.LBE311:
 1840              	.LBE313:
 1841              		.loc 1 216 0
 1842 004a 5D       		popq	%rbp
 1843              		.cfi_def_cfa_offset 32
 1844              	.LVL228:
 1845 004b 415C     		popq	%r12
 1846              		.cfi_def_cfa_offset 24
 1847              	.LVL229:
 1848 004d 415D     		popq	%r13
 1849              		.cfi_def_cfa_offset 16
 1850              	.LVL230:
 1851 004f 415E     		popq	%r14
 1852              		.cfi_def_cfa_offset 8
 1853              	.LVL231:
 1854              	.LBB314:
 1855              	.LBB312:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1856              		.loc 2 206 0
 1857 0051 488B4020 		movq	32(%rax), %rax
 1858 0055 FFE0     		jmp	*%rax
 1859              	.LVL232:
 1860              	.LBE312:
 1861              	.LBE314:
 1862              		.cfi_endproc
 1863              	.LFE481:
 1865              		.section	.text.unlikely._Z9fl_up_boxiiiij
 1866              	.LCOLDE25:
 1867              		.section	.text._Z9fl_up_boxiiiij
 1868              	.LHOTE25:
 1869              		.section	.rodata.str1.1
 1870              	.LC26:
 1871 0025 57574D4D 		.string	"WWMMPPAA"
 1871      50504141 
 1871      00
 1872              		.section	.text.unlikely._Z13fl_down_frameiiiij,"ax",@progbits
 1873              	.LCOLDB27:
 1874              		.section	.text._Z13fl_down_frameiiiij,"ax",@progbits
 1875              	.LHOTB27:
 1876              		.p2align 4,,15
 1877              		.globl	_Z13fl_down_frameiiiij
 1879              	_Z13fl_down_frameiiiij:
 1880              	.LFB482:
 1881              		.loc 1 219 0
 1882              		.cfi_startproc
 1883              	.LVL233:
 1884              		.loc 1 219 0
 1885 0000 4189C8   		movl	%ecx, %r8d
 1886              		.loc 1 224 0
 1887 0003 89D1     		movl	%edx, %ecx
 1888              	.LVL234:
 1889 0005 89F2     		movl	%esi, %edx
 1890              	.LVL235:
 1891 0007 89FE     		movl	%edi, %esi
 1892              	.LVL236:
 1893 0009 BF000000 		movl	$.LC26, %edi
 1893      00
 1894              	.LVL237:
 1895 000e E9000000 		jmp	_Z9fl_frame2PKciiii
 1895      00
 1896              	.LVL238:
 1897              		.cfi_endproc
 1898              	.LFE482:
 1900              		.section	.text.unlikely._Z13fl_down_frameiiiij
 1901              	.LCOLDE27:
 1902              		.section	.text._Z13fl_down_frameiiiij
 1903              	.LHOTE27:
 1904              		.section	.text.unlikely._Z11fl_down_boxiiiij,"ax",@progbits
 1905              	.LCOLDB28:
 1906              		.section	.text._Z11fl_down_boxiiiij,"ax",@progbits
 1907              	.LHOTB28:
 1908              		.p2align 4,,15
 1909              		.globl	_Z11fl_down_boxiiiij
 1911              	_Z11fl_down_boxiiiij:
 1912              	.LFB483:
 1913              		.loc 1 232 0
 1914              		.cfi_startproc
 1915              	.LVL239:
 1916 0000 4156     		pushq	%r14
 1917              		.cfi_def_cfa_offset 16
 1918              		.cfi_offset 14, -16
 1919 0002 4155     		pushq	%r13
 1920              		.cfi_def_cfa_offset 24
 1921              		.cfi_offset 13, -24
 1922 0004 4589C6   		movl	%r8d, %r14d
 1923              	.LVL240:
 1924 0007 4154     		pushq	%r12
 1925              		.cfi_def_cfa_offset 32
 1926              		.cfi_offset 12, -32
 1927 0009 55       		pushq	%rbp
 1928              		.cfi_def_cfa_offset 40
 1929              		.cfi_offset 6, -40
 1930              	.LBB315:
 1931              	.LBB316:
 1932              		.loc 1 224 0
 1933 000a 4189C8   		movl	%ecx, %r8d
 1934              	.LVL241:
 1935              	.LBE316:
 1936              	.LBE315:
 1937              		.loc 1 232 0
 1938 000d 53       		pushq	%rbx
 1939              		.cfi_def_cfa_offset 48
 1940              		.cfi_offset 3, -48
 1941              		.loc 1 232 0
 1942 000e 89F5     		movl	%esi, %ebp
 1943 0010 89FB     		movl	%edi, %ebx
 1944 0012 4189D4   		movl	%edx, %r12d
 1945 0015 4189CD   		movl	%ecx, %r13d
 1946              	.LBB318:
 1947              	.LBB317:
 1948              		.loc 1 224 0
 1949 0018 89D1     		movl	%edx, %ecx
 1950              	.LVL242:
 1951 001a 89F2     		movl	%esi, %edx
 1952              	.LVL243:
 1953 001c 89FE     		movl	%edi, %esi
 1954              	.LVL244:
 1955 001e BF000000 		movl	$.LC26, %edi
 1955      00
 1956              	.LVL245:
 1957 0023 E8000000 		call	_Z9fl_frame2PKciiii
 1957      00
 1958              	.LVL246:
 1959              	.LBE317:
 1960              	.LBE318:
 1961              		.loc 1 234 0
 1962 0028 4489F7   		movl	%r14d, %edi
 1963 002b E8000000 		call	_ZN2Fl13set_box_colorEj
 1963      00
 1964              	.LVL247:
 1965              	.LBB319:
 1966              	.LBB320:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1967              		.loc 2 206 0
 1968 0030 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1968      000000
 1969 0037 418D4C24 		leal	-4(%r12), %ecx
 1969      FC
 1970              	.LVL248:
 1971 003c 8D5502   		leal	2(%rbp), %edx
 1972              	.LVL249:
 1973 003f 8D7302   		leal	2(%rbx), %esi
 1974              	.LVL250:
 1975 0042 458D45FC 		leal	-4(%r13), %r8d
 1976              	.LVL251:
 1977              	.LBE320:
 1978              	.LBE319:
 1979              		.loc 1 236 0
 1980 0046 5B       		popq	%rbx
 1981              		.cfi_def_cfa_offset 40
 1982              	.LVL252:
 1983              	.LBB323:
 1984              	.LBB321:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1985              		.loc 2 206 0
 1986 0047 488B07   		movq	(%rdi), %rax
 1987              	.LBE321:
 1988              	.LBE323:
 1989              		.loc 1 236 0
 1990 004a 5D       		popq	%rbp
 1991              		.cfi_def_cfa_offset 32
 1992              	.LVL253:
 1993 004b 415C     		popq	%r12
 1994              		.cfi_def_cfa_offset 24
 1995              	.LVL254:
 1996 004d 415D     		popq	%r13
 1997              		.cfi_def_cfa_offset 16
 1998              	.LVL255:
 1999 004f 415E     		popq	%r14
 2000              		.cfi_def_cfa_offset 8
 2001              	.LVL256:
 2002              	.LBB324:
 2003              	.LBB322:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2004              		.loc 2 206 0
 2005 0051 488B4020 		movq	32(%rax), %rax
 2006 0055 FFE0     		jmp	*%rax
 2007              	.LVL257:
 2008              	.LBE322:
 2009              	.LBE324:
 2010              		.cfi_endproc
 2011              	.LFE483:
 2013              		.section	.text.unlikely._Z11fl_down_boxiiiij
 2014              	.LCOLDE28:
 2015              		.section	.text._Z11fl_down_boxiiiij
 2016              	.LHOTE28:
 2017              		.section	.text.unlikely._ZN2Fl6box_dxE10Fl_Boxtype,"ax",@progbits
 2018              		.align 2
 2019              	.LCOLDB29:
 2020              		.section	.text._ZN2Fl6box_dxE10Fl_Boxtype,"ax",@progbits
 2021              	.LHOTB29:
 2022              		.align 2
 2023              		.p2align 4,,15
 2024              		.globl	_ZN2Fl6box_dxE10Fl_Boxtype
 2026              	_ZN2Fl6box_dxE10Fl_Boxtype:
 2027              	.LFB490:
 2028              		.loc 1 360 0
 2029              		.cfi_startproc
 2030              	.LVL258:
 2031              		.loc 1 360 0
 2032 0000 4863FF   		movslq	%edi, %rdi
 2033 0003 48C1E704 		salq	$4, %rdi
 2034              	.LVL259:
 2035 0007 0FB68700 		movzbl	_ZL12fl_box_table+8(%rdi), %eax
 2035      000000
 2036 000e C3       		ret
 2037              		.cfi_endproc
 2038              	.LFE490:
 2040              		.section	.text.unlikely._ZN2Fl6box_dxE10Fl_Boxtype
 2041              	.LCOLDE29:
 2042              		.section	.text._ZN2Fl6box_dxE10Fl_Boxtype
 2043              	.LHOTE29:
 2044              		.section	.text.unlikely._ZN2Fl6box_dyE10Fl_Boxtype,"ax",@progbits
 2045              		.align 2
 2046              	.LCOLDB30:
 2047              		.section	.text._ZN2Fl6box_dyE10Fl_Boxtype,"ax",@progbits
 2048              	.LHOTB30:
 2049              		.align 2
 2050              		.p2align 4,,15
 2051              		.globl	_ZN2Fl6box_dyE10Fl_Boxtype
 2053              	_ZN2Fl6box_dyE10Fl_Boxtype:
 2054              	.LFB491:
 2055              		.loc 1 385 0
 2056              		.cfi_startproc
 2057              	.LVL260:
 2058              		.loc 1 385 0
 2059 0000 4863FF   		movslq	%edi, %rdi
 2060 0003 48C1E704 		salq	$4, %rdi
 2061              	.LVL261:
 2062 0007 0FB68700 		movzbl	_ZL12fl_box_table+9(%rdi), %eax
 2062      000000
 2063 000e C3       		ret
 2064              		.cfi_endproc
 2065              	.LFE491:
 2067              		.section	.text.unlikely._ZN2Fl6box_dyE10Fl_Boxtype
 2068              	.LCOLDE30:
 2069              		.section	.text._ZN2Fl6box_dyE10Fl_Boxtype
 2070              	.LHOTE30:
 2071              		.section	.text.unlikely._ZN2Fl6box_dwE10Fl_Boxtype,"ax",@progbits
 2072              		.align 2
 2073              	.LCOLDB31:
 2074              		.section	.text._ZN2Fl6box_dwE10Fl_Boxtype,"ax",@progbits
 2075              	.LHOTB31:
 2076              		.align 2
 2077              		.p2align 4,,15
 2078              		.globl	_ZN2Fl6box_dwE10Fl_Boxtype
 2080              	_ZN2Fl6box_dwE10Fl_Boxtype:
 2081              	.LFB492:
 2082              		.loc 1 391 0
 2083              		.cfi_startproc
 2084              	.LVL262:
 2085              		.loc 1 391 0
 2086 0000 4863FF   		movslq	%edi, %rdi
 2087 0003 48C1E704 		salq	$4, %rdi
 2088              	.LVL263:
 2089 0007 0FB68700 		movzbl	_ZL12fl_box_table+10(%rdi), %eax
 2089      000000
 2090 000e C3       		ret
 2091              		.cfi_endproc
 2092              	.LFE492:
 2094              		.section	.text.unlikely._ZN2Fl6box_dwE10Fl_Boxtype
 2095              	.LCOLDE31:
 2096              		.section	.text._ZN2Fl6box_dwE10Fl_Boxtype
 2097              	.LHOTE31:
 2098              		.section	.text.unlikely._ZN2Fl6box_dhE10Fl_Boxtype,"ax",@progbits
 2099              		.align 2
 2100              	.LCOLDB32:
 2101              		.section	.text._ZN2Fl6box_dhE10Fl_Boxtype,"ax",@progbits
 2102              	.LHOTB32:
 2103              		.align 2
 2104              		.p2align 4,,15
 2105              		.globl	_ZN2Fl6box_dhE10Fl_Boxtype
 2107              	_ZN2Fl6box_dhE10Fl_Boxtype:
 2108              	.LFB493:
 2109              		.loc 1 397 0
 2110              		.cfi_startproc
 2111              	.LVL264:
 2112              		.loc 1 397 0
 2113 0000 4863FF   		movslq	%edi, %rdi
 2114 0003 48C1E704 		salq	$4, %rdi
 2115              	.LVL265:
 2116 0007 0FB68700 		movzbl	_ZL12fl_box_table+11(%rdi), %eax
 2116      000000
 2117 000e C3       		ret
 2118              		.cfi_endproc
 2119              	.LFE493:
 2121              		.section	.text.unlikely._ZN2Fl6box_dhE10Fl_Boxtype
 2122              	.LCOLDE32:
 2123              		.section	.text._ZN2Fl6box_dhE10Fl_Boxtype
 2124              	.LHOTE32:
 2125              		.section	.text.unlikely._Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE,"ax",@progbits
 2126              	.LCOLDB33:
 2127              		.section	.text._Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE,"ax",@progbits
 2128              	.LHOTB33:
 2129              		.p2align 4,,15
 2130              		.globl	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 2132              	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE:
 2133              	.LFB494:
 2134              		.loc 1 404 0
 2135              		.cfi_startproc
 2136              	.LVL266:
 2137              		.loc 1 405 0
 2138 0000 4863FF   		movslq	%edi, %rdi
 2139 0003 48C1E704 		salq	$4, %rdi
 2140              	.LVL267:
 2141 0007 8B870000 		movl	_ZL12fl_box_table+12(%rdi), %eax
 2141      0000
 2142 000d 85C0     		testl	%eax, %eax
 2143 000f 7511     		jne	.L94
 2144              		.loc 1 406 0
 2145 0011 4889B700 		movq	%rsi, _ZL12fl_box_table(%rdi)
 2145      000000
 2146              		.loc 1 407 0
 2147 0018 C7870000 		movl	$1, _ZL12fl_box_table+12(%rdi)
 2147      00000100 
 2147      0000
 2148              	.L94:
 2149 0022 F3C3     		rep ret
 2150              		.cfi_endproc
 2151              	.LFE494:
 2153              		.section	.text.unlikely._Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 2154              	.LCOLDE33:
 2155              		.section	.text._Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 2156              	.LHOTE33:
 2157              		.section	.text.unlikely._ZN2Fl11get_boxtypeE10Fl_Boxtype,"ax",@progbits
 2158              		.align 2
 2159              	.LCOLDB34:
 2160              		.section	.text._ZN2Fl11get_boxtypeE10Fl_Boxtype,"ax",@progbits
 2161              	.LHOTB34:
 2162              		.align 2
 2163              		.p2align 4,,15
 2164              		.globl	_ZN2Fl11get_boxtypeE10Fl_Boxtype
 2166              	_ZN2Fl11get_boxtypeE10Fl_Boxtype:
 2167              	.LFB495:
 2168              		.loc 1 412 0
 2169              		.cfi_startproc
 2170              	.LVL268:
 2171              		.loc 1 413 0
 2172 0000 4863FF   		movslq	%edi, %rdi
 2173 0003 48C1E704 		salq	$4, %rdi
 2174              	.LVL269:
 2175 0007 488B8700 		movq	_ZL12fl_box_table(%rdi), %rax
 2175      000000
 2176              		.loc 1 414 0
 2177 000e C3       		ret
 2178              		.cfi_endproc
 2179              	.LFE495:
 2181              		.section	.text.unlikely._ZN2Fl11get_boxtypeE10Fl_Boxtype
 2182              	.LCOLDE34:
 2183              		.section	.text._ZN2Fl11get_boxtypeE10Fl_Boxtype
 2184              	.LHOTE34:
 2185              		.section	.text.unlikely._ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh,"ax",@progbits
 2186              		.align 2
 2187              	.LCOLDB35:
 2188              		.section	.text._ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh,"ax",@progbits
 2189              	.LHOTB35:
 2190              		.align 2
 2191              		.p2align 4,,15
 2192              		.globl	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 2194              	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh:
 2195              	.LFB496:
 2196              		.loc 1 417 0
 2197              		.cfi_startproc
 2198              	.LVL270:
 2199              		.loc 1 418 0
 2200 0000 4863FF   		movslq	%edi, %rdi
 2201 0003 48C1E704 		salq	$4, %rdi
 2202              	.LVL271:
 2203 0007 4889B700 		movq	%rsi, _ZL12fl_box_table(%rdi)
 2203      000000
 2204              		.loc 1 419 0
 2205 000e C7870000 		movl	$1, _ZL12fl_box_table+12(%rdi)
 2205      00000100 
 2205      0000
 2206              		.loc 1 420 0
 2207 0018 88970000 		movb	%dl, _ZL12fl_box_table+8(%rdi)
 2207      0000
 2208              		.loc 1 421 0
 2209 001e 888F0000 		movb	%cl, _ZL12fl_box_table+9(%rdi)
 2209      0000
 2210              		.loc 1 422 0
 2211 0024 44888700 		movb	%r8b, _ZL12fl_box_table+10(%rdi)
 2211      000000
 2212              		.loc 1 423 0
 2213 002b 44888F00 		movb	%r9b, _ZL12fl_box_table+11(%rdi)
 2213      000000
 2214 0032 C3       		ret
 2215              		.cfi_endproc
 2216              	.LFE496:
 2218              		.section	.text.unlikely._ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 2219              	.LCOLDE35:
 2220              		.section	.text._ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 2221              	.LHOTE35:
 2222              		.section	.text.unlikely._ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_,"ax",@progbits
 2223              		.align 2
 2224              	.LCOLDB36:
 2225              		.section	.text._ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_,"ax",@progbits
 2226              	.LHOTB36:
 2227              		.align 2
 2228              		.p2align 4,,15
 2229              		.globl	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 2231              	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_:
 2232              	.LFB497:
 2233              		.loc 1 426 0
 2234              		.cfi_startproc
 2235              	.LVL272:
 2236              		.loc 1 427 0
 2237 0000 4863F6   		movslq	%esi, %rsi
 2238 0003 4863FF   		movslq	%edi, %rdi
 2239 0006 48C1E604 		salq	$4, %rsi
 2240              	.LVL273:
 2241 000a 48C1E704 		salq	$4, %rdi
 2242              	.LVL274:
 2243 000e 488B8600 		movq	_ZL12fl_box_table(%rsi), %rax
 2243      000000
 2244 0015 488B9600 		movq	_ZL12fl_box_table+8(%rsi), %rdx
 2244      000000
 2245 001c 48898700 		movq	%rax, _ZL12fl_box_table(%rdi)
 2245      000000
 2246 0023 48899700 		movq	%rdx, _ZL12fl_box_table+8(%rdi)
 2246      000000
 2247 002a C3       		ret
 2248              		.cfi_endproc
 2249              	.LFE497:
 2251              		.section	.text.unlikely._ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 2252              	.LCOLDE36:
 2253              		.section	.text._ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 2254              	.LHOTE36:
 2255              		.section	.text.unlikely._Z11fl_draw_box10Fl_Boxtypeiiiij,"ax",@progbits
 2256              	.LCOLDB37:
 2257              		.section	.text._Z11fl_draw_box10Fl_Boxtypeiiiij,"ax",@progbits
 2258              	.LHOTB37:
 2259              		.p2align 4,,15
 2260              		.globl	_Z11fl_draw_box10Fl_Boxtypeiiiij
 2262              	_Z11fl_draw_box10Fl_Boxtypeiiiij:
 2263              	.LFB498:
 2264              		.loc 1 436 0
 2265              		.cfi_startproc
 2266              	.LVL275:
 2267              		.loc 1 437 0
 2268 0000 85FF     		testl	%edi, %edi
 2269              		.loc 1 436 0
 2270 0002 4189F2   		movl	%esi, %r10d
 2271 0005 89D6     		movl	%edx, %esi
 2272              	.LVL276:
 2273 0007 89CA     		movl	%ecx, %edx
 2274              	.LVL277:
 2275 0009 4489C1   		movl	%r8d, %ecx
 2276              	.LVL278:
 2277              		.loc 1 437 0
 2278 000c 7422     		je	.L99
 2279              		.loc 1 437 0 is_stmt 0 discriminator 1
 2280 000e 4863C7   		movslq	%edi, %rax
 2281 0011 48C1E004 		salq	$4, %rax
 2282 0015 488B8000 		movq	_ZL12fl_box_table(%rax), %rax
 2282      000000
 2283 001c 4885C0   		testq	%rax, %rax
 2284 001f 740F     		je	.L99
 2285              		.loc 1 437 0 discriminator 2
 2286 0021 4589C8   		movl	%r9d, %r8d
 2287              	.LVL279:
 2288 0024 4489D7   		movl	%r10d, %edi
 2289              	.LVL280:
 2290 0027 FFE0     		jmp	*%rax
 2291              	.LVL281:
 2292 0029 0F1F8000 		.p2align 4,,10
 2292      000000
 2293              		.p2align 3
 2294              	.L99:
 2295 0030 F3C3     		rep ret
 2296              		.cfi_endproc
 2297              	.LFE498:
 2299              		.section	.text.unlikely._Z11fl_draw_box10Fl_Boxtypeiiiij
 2300              	.LCOLDE37:
 2301              		.section	.text._Z11fl_draw_box10Fl_Boxtypeiiiij
 2302              	.LHOTE37:
 2303              		.section	.text.unlikely._ZNK9Fl_Widget8draw_boxEv,"ax",@progbits
 2304              		.align 2
 2305              	.LCOLDB38:
 2306              		.section	.text._ZNK9Fl_Widget8draw_boxEv,"ax",@progbits
 2307              	.LHOTB38:
 2308              		.align 2
 2309              		.p2align 4,,15
 2310              		.globl	_ZNK9Fl_Widget8draw_boxEv
 2312              	_ZNK9Fl_Widget8draw_boxEv:
 2313              	.LFB499:
 2314              		.loc 1 442 0 is_stmt 1
 2315              		.cfi_startproc
 2316              	.LVL282:
 2317 0000 4157     		pushq	%r15
 2318              		.cfi_def_cfa_offset 16
 2319              		.cfi_offset 15, -16
 2320 0002 4156     		pushq	%r14
 2321              		.cfi_def_cfa_offset 24
 2322              		.cfi_offset 14, -24
 2323 0004 4155     		pushq	%r13
 2324              		.cfi_def_cfa_offset 32
 2325              		.cfi_offset 13, -32
 2326 0006 4154     		pushq	%r12
 2327              		.cfi_def_cfa_offset 40
 2328              		.cfi_offset 12, -40
 2329 0008 55       		pushq	%rbp
 2330              		.cfi_def_cfa_offset 48
 2331              		.cfi_offset 6, -48
 2332 0009 53       		pushq	%rbx
 2333              		.cfi_def_cfa_offset 56
 2334              		.cfi_offset 3, -56
 2335 000a 4889FB   		movq	%rdi, %rbx
 2336 000d 4883EC18 		subq	$24, %rsp
 2337              		.cfi_def_cfa_offset 80
 2338              		.loc 1 443 0
 2339 0011 0FB66F6E 		movzbl	110(%rdi), %ebp
 2340 0015 4084ED   		testb	%bpl, %bpl
 2341 0018 7536     		jne	.L114
 2342              	.LVL283:
 2343              	.L108:
 2344              	.LBB325:
 2345              	.LBB326:
 2346              	.LBB327:
 2347              		.loc 1 448 0
 2348 001a F6435502 		testb	$2, 85(%rbx)
 2349 001e 7510     		jne	.L115
 2350              	.LBE327:
 2351              	.LBE326:
 2352              	.LBE325:
 2353              		.loc 1 445 0
 2354 0020 4883C418 		addq	$24, %rsp
 2355              		.cfi_remember_state
 2356              		.cfi_def_cfa_offset 56
 2357 0024 5B       		popq	%rbx
 2358              		.cfi_def_cfa_offset 48
 2359              	.LVL284:
 2360 0025 5D       		popq	%rbp
 2361              		.cfi_def_cfa_offset 40
 2362 0026 415C     		popq	%r12
 2363              		.cfi_def_cfa_offset 32
 2364 0028 415D     		popq	%r13
 2365              		.cfi_def_cfa_offset 24
 2366 002a 415E     		popq	%r14
 2367              		.cfi_def_cfa_offset 16
 2368 002c 415F     		popq	%r15
 2369              		.cfi_def_cfa_offset 8
 2370 002e C3       		ret
 2371              	.LVL285:
 2372 002f 90       		.p2align 4,,10
 2373              		.p2align 3
 2374              	.L115:
 2375              		.cfi_restore_state
 2376 0030 4883C418 		addq	$24, %rsp
 2377              		.cfi_remember_state
 2378              		.cfi_def_cfa_offset 56
 2379              	.LBB330:
 2380              	.LBB328:
 2381 0034 4889DF   		movq	%rbx, %rdi
 2382              	.LBE328:
 2383              	.LBE330:
 2384 0037 5B       		popq	%rbx
 2385              		.cfi_def_cfa_offset 48
 2386              	.LVL286:
 2387 0038 5D       		popq	%rbp
 2388              		.cfi_def_cfa_offset 40
 2389 0039 415C     		popq	%r12
 2390              		.cfi_def_cfa_offset 32
 2391 003b 415D     		popq	%r13
 2392              		.cfi_def_cfa_offset 24
 2393 003d 415E     		popq	%r14
 2394              		.cfi_def_cfa_offset 16
 2395 003f 415F     		popq	%r15
 2396              		.cfi_def_cfa_offset 8
 2397              	.LBB331:
 2398              	.LBB329:
 2399 0041 E9000000 		jmp	_ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6
 2399      00
 2400              	.LVL287:
 2401 0046 662E0F1F 		.p2align 4,,10
 2401      84000000 
 2401      0000
 2402              		.p2align 3
 2403              	.L114:
 2404              		.cfi_restore_state
 2405              	.LBE329:
 2406              	.LBE331:
 2407              		.loc 1 443 0 discriminator 1
 2408 0050 448B4764 		movl	100(%rdi), %r8d
 2409 0054 448B7F2C 		movl	44(%rdi), %r15d
 2410              	.LBB332:
 2411              	.LBB333:
 2412              		.loc 1 464 0 discriminator 1
 2413 0058 48C1E504 		salq	$4, %rbp
 2414              	.LBE333:
 2415              	.LBE332:
 2416              		.loc 1 443 0 discriminator 1
 2417 005c 448B7728 		movl	40(%rdi), %r14d
 2418 0060 448B6F24 		movl	36(%rdi), %r13d
 2419 0064 448B6720 		movl	32(%rdi), %r12d
 2420              	.LVL288:
 2421 0068 44894424 		movl	%r8d, 12(%rsp)
 2421      0C
 2422              	.LVL289:
 2423              	.LBB335:
 2424              	.LBB334:
 2425              		.loc 1 463 0 discriminator 1
 2426 006d E8000000 		call	_ZNK9Fl_Widget8active_rEv
 2426      00
 2427              	.LVL290:
 2428              		.loc 1 464 0 discriminator 1
 2429 0072 448B4424 		movl	12(%rsp), %r8d
 2429      0C
 2430              		.loc 1 463 0 discriminator 1
 2431 0077 89050000 		movl	%eax, _ZL14draw_it_active(%rip)
 2431      0000
 2432              		.loc 1 464 0 discriminator 1
 2433 007d 4489F9   		movl	%r15d, %ecx
 2434 0080 4489F2   		movl	%r14d, %edx
 2435 0083 4489EE   		movl	%r13d, %esi
 2436 0086 4489E7   		movl	%r12d, %edi
 2437 0089 FF950000 		call	*_ZL12fl_box_table(%rbp)
 2437      0000
 2438              	.LVL291:
 2439              		.loc 1 465 0 discriminator 1
 2440 008f C7050000 		movl	$1, _ZL14draw_it_active(%rip)
 2440      00000100 
 2440      0000
 2441 0099 E97CFFFF 		jmp	.L108
 2441      FF
 2442              	.LBE334:
 2443              	.LBE335:
 2444              		.cfi_endproc
 2445              	.LFE499:
 2447              		.section	.text.unlikely._ZNK9Fl_Widget8draw_boxEv
 2448              	.LCOLDE38:
 2449              		.section	.text._ZNK9Fl_Widget8draw_boxEv
 2450              	.LHOTE38:
 2451              		.section	.text.unlikely._ZNK9Fl_Widget13draw_backdropEv,"ax",@progbits
 2452              		.align 2
 2453              	.LCOLDB39:
 2454              		.section	.text._ZNK9Fl_Widget13draw_backdropEv,"ax",@progbits
 2455              	.LHOTB39:
 2456              		.align 2
 2457              		.p2align 4,,15
 2458              		.globl	_ZNK9Fl_Widget13draw_backdropEv
 2460              	_ZNK9Fl_Widget13draw_backdropEv:
 2461              	.LFB500:
 2462              		.loc 1 447 0
 2463              		.cfi_startproc
 2464              	.LVL292:
 2465              	.LBB336:
 2466              		.loc 1 448 0
 2467 0000 F6475502 		testb	$2, 85(%rdi)
 2468 0004 740A     		je	.L116
 2469              	.LBE336:
 2470 0006 E9000000 		jmp	_ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6
 2470      00
 2471              	.LVL293:
 2472 000b 0F1F4400 		.p2align 4,,10
 2472      00
 2473              		.p2align 3
 2474              	.L116:
 2475 0010 F3C3     		rep ret
 2476              		.cfi_endproc
 2477              	.LFE500:
 2479              		.section	.text.unlikely._ZNK9Fl_Widget13draw_backdropEv
 2480              	.LCOLDE39:
 2481              		.section	.text._ZNK9Fl_Widget13draw_backdropEv
 2482              	.LHOTE39:
 2483              		.section	.text.unlikely._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej,"ax",@progbits
 2484              		.align 2
 2485              	.LCOLDB40:
 2486              		.section	.text._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej,"ax",@progbits
 2487              	.LHOTB40:
 2488              		.align 2
 2489              		.p2align 4,,15
 2490              		.globl	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
 2492              	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej:
 2493              	.LFB501:
 2494              		.loc 1 458 0
 2495              		.cfi_startproc
 2496              	.LVL294:
 2497 0000 4157     		pushq	%r15
 2498              		.cfi_def_cfa_offset 16
 2499              		.cfi_offset 15, -16
 2500 0002 4156     		pushq	%r14
 2501              		.cfi_def_cfa_offset 24
 2502              		.cfi_offset 14, -24
 2503 0004 4189D7   		movl	%edx, %r15d
 2504 0007 4155     		pushq	%r13
 2505              		.cfi_def_cfa_offset 32
 2506              		.cfi_offset 13, -32
 2507 0009 4154     		pushq	%r12
 2508              		.cfi_def_cfa_offset 40
 2509              		.cfi_offset 12, -40
 2510 000b 55       		pushq	%rbp
 2511              		.cfi_def_cfa_offset 48
 2512              		.cfi_offset 6, -48
 2513 000c 53       		pushq	%rbx
 2514              		.cfi_def_cfa_offset 56
 2515              		.cfi_offset 3, -56
 2516 000d 4863DE   		movslq	%esi, %rbx
 2517              	.LBB337:
 2518              	.LBB338:
 2519              		.loc 1 464 0
 2520 0010 48C1E304 		salq	$4, %rbx
 2521              	.LBE338:
 2522              	.LBE337:
 2523              		.loc 1 458 0
 2524 0014 4883EC08 		subq	$8, %rsp
 2525              		.cfi_def_cfa_offset 64
 2526              		.loc 1 459 0
 2527 0018 448B772C 		movl	44(%rdi), %r14d
 2528 001c 448B6F28 		movl	40(%rdi), %r13d
 2529 0020 448B6724 		movl	36(%rdi), %r12d
 2530 0024 8B6F20   		movl	32(%rdi), %ebp
 2531              	.LVL295:
 2532              	.LBB340:
 2533              	.LBB339:
 2534              		.loc 1 463 0
 2535 0027 E8000000 		call	_ZNK9Fl_Widget8active_rEv
 2535      00
 2536              	.LVL296:
 2537              		.loc 1 464 0
 2538 002c 4589F8   		movl	%r15d, %r8d
 2539 002f 4489F1   		movl	%r14d, %ecx
 2540 0032 4489EA   		movl	%r13d, %edx
 2541 0035 4489E6   		movl	%r12d, %esi
 2542 0038 89EF     		movl	%ebp, %edi
 2543              		.loc 1 463 0
 2544 003a 89050000 		movl	%eax, _ZL14draw_it_active(%rip)
 2544      0000
 2545              		.loc 1 464 0
 2546 0040 FF930000 		call	*_ZL12fl_box_table(%rbx)
 2546      0000
 2547              	.LVL297:
 2548              		.loc 1 465 0
 2549 0046 C7050000 		movl	$1, _ZL14draw_it_active(%rip)
 2549      00000100 
 2549      0000
 2550              	.LVL298:
 2551              	.LBE339:
 2552              	.LBE340:
 2553              		.loc 1 460 0
 2554 0050 4883C408 		addq	$8, %rsp
 2555              		.cfi_def_cfa_offset 56
 2556 0054 5B       		popq	%rbx
 2557              		.cfi_def_cfa_offset 48
 2558 0055 5D       		popq	%rbp
 2559              		.cfi_def_cfa_offset 40
 2560 0056 415C     		popq	%r12
 2561              		.cfi_def_cfa_offset 32
 2562 0058 415D     		popq	%r13
 2563              		.cfi_def_cfa_offset 24
 2564 005a 415E     		popq	%r14
 2565              		.cfi_def_cfa_offset 16
 2566 005c 415F     		popq	%r15
 2567              		.cfi_def_cfa_offset 8
 2568              	.LVL299:
 2569 005e C3       		ret
 2570              		.cfi_endproc
 2571              	.LFE501:
 2573              		.section	.text.unlikely._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
 2574              	.LCOLDE40:
 2575              		.section	.text._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
 2576              	.LHOTE40:
 2577              		.section	.text.unlikely._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij,"ax",@progbits
 2578              		.align 2
 2579              	.LCOLDB41:
 2580              		.section	.text._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij,"ax",@progbits
 2581              	.LHOTB41:
 2582              		.align 2
 2583              		.p2align 4,,15
 2584              		.globl	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2586              	_ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij:
 2587              	.LFB502:
 2588              		.loc 1 462 0
 2589              		.cfi_startproc
 2590              	.LVL300:
 2591 0000 4156     		pushq	%r14
 2592              		.cfi_def_cfa_offset 16
 2593              		.cfi_offset 14, -16
 2594 0002 4155     		pushq	%r13
 2595              		.cfi_def_cfa_offset 24
 2596              		.cfi_offset 13, -24
 2597 0004 4589CE   		movl	%r9d, %r14d
 2598 0007 4154     		pushq	%r12
 2599              		.cfi_def_cfa_offset 32
 2600              		.cfi_offset 12, -32
 2601 0009 55       		pushq	%rbp
 2602              		.cfi_def_cfa_offset 40
 2603              		.cfi_offset 6, -40
 2604 000a 4189CC   		movl	%ecx, %r12d
 2605 000d 53       		pushq	%rbx
 2606              		.cfi_def_cfa_offset 48
 2607              		.cfi_offset 3, -48
 2608              		.loc 1 462 0
 2609 000e 4863DE   		movslq	%esi, %rbx
 2610 0011 89D5     		movl	%edx, %ebp
 2611 0013 4589C5   		movl	%r8d, %r13d
 2612              		.loc 1 464 0
 2613 0016 48C1E304 		salq	$4, %rbx
 2614              		.loc 1 463 0
 2615 001a E8000000 		call	_ZNK9Fl_Widget8active_rEv
 2615      00
 2616              	.LVL301:
 2617              		.loc 1 464 0
 2618 001f 448B4424 		movl	48(%rsp), %r8d
 2618      30
 2619 0024 4489F1   		movl	%r14d, %ecx
 2620 0027 4489EA   		movl	%r13d, %edx
 2621 002a 4489E6   		movl	%r12d, %esi
 2622 002d 89EF     		movl	%ebp, %edi
 2623              		.loc 1 463 0
 2624 002f 89050000 		movl	%eax, _ZL14draw_it_active(%rip)
 2624      0000
 2625              		.loc 1 464 0
 2626 0035 FF930000 		call	*_ZL12fl_box_table(%rbx)
 2626      0000
 2627              	.LVL302:
 2628              		.loc 1 466 0
 2629 003b 5B       		popq	%rbx
 2630              		.cfi_def_cfa_offset 40
 2631              		.loc 1 465 0
 2632 003c C7050000 		movl	$1, _ZL14draw_it_active(%rip)
 2632      00000100 
 2632      0000
 2633              		.loc 1 466 0
 2634 0046 5D       		popq	%rbp
 2635              		.cfi_def_cfa_offset 32
 2636              	.LVL303:
 2637 0047 415C     		popq	%r12
 2638              		.cfi_def_cfa_offset 24
 2639              	.LVL304:
 2640 0049 415D     		popq	%r13
 2641              		.cfi_def_cfa_offset 16
 2642              	.LVL305:
 2643 004b 415E     		popq	%r14
 2644              		.cfi_def_cfa_offset 8
 2645              	.LVL306:
 2646 004d C3       		ret
 2647              		.cfi_endproc
 2648              	.LFE502:
 2650              		.section	.text.unlikely._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2651              	.LCOLDE41:
 2652              		.section	.text._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
 2653              	.LHOTE41:
 2654              		.section	.data._ZL12fl_box_table,"aw",@progbits
 2655              		.align 32
 2658              	_ZL12fl_box_table:
 2659 0000 00000000 		.quad	_Z9fl_no_boxiiiij
 2659      00000000 
 2660 0008 00       		.byte	0
 2661 0009 00       		.byte	0
 2662 000a 00       		.byte	0
 2663 000b 00       		.byte	0
 2664 000c 01000000 		.long	1
 2665 0010 00000000 		.quad	_Z11fl_flat_boxiiiij
 2665      00000000 
 2666 0018 00       		.byte	0
 2667 0019 00       		.byte	0
 2668 001a 00       		.byte	0
 2669 001b 00       		.byte	0
 2670 001c 01000000 		.long	1
 2671 0020 00000000 		.quad	_Z9fl_up_boxiiiij
 2671      00000000 
 2672 0028 02       		.byte	2
 2673 0029 02       		.byte	2
 2674 002a 04       		.byte	4
 2675 002b 04       		.byte	4
 2676 002c 01000000 		.long	1
 2677 0030 00000000 		.quad	_Z11fl_down_boxiiiij
 2677      00000000 
 2678 0038 02       		.byte	2
 2679 0039 02       		.byte	2
 2680 003a 04       		.byte	4
 2681 003b 04       		.byte	4
 2682 003c 01000000 		.long	1
 2683 0040 00000000 		.quad	_Z11fl_up_frameiiiij
 2683      00000000 
 2684 0048 02       		.byte	2
 2685 0049 02       		.byte	2
 2686 004a 04       		.byte	4
 2687 004b 04       		.byte	4
 2688 004c 01000000 		.long	1
 2689 0050 00000000 		.quad	_Z13fl_down_frameiiiij
 2689      00000000 
 2690 0058 02       		.byte	2
 2691 0059 02       		.byte	2
 2692 005a 04       		.byte	4
 2693 005b 04       		.byte	4
 2694 005c 01000000 		.long	1
 2695 0060 00000000 		.quad	_Z14fl_thin_up_boxiiiij
 2695      00000000 
 2696 0068 01       		.byte	1
 2697 0069 01       		.byte	1
 2698 006a 02       		.byte	2
 2699 006b 02       		.byte	2
 2700 006c 01000000 		.long	1
 2701 0070 00000000 		.quad	_Z16fl_thin_down_boxiiiij
 2701      00000000 
 2702 0078 01       		.byte	1
 2703 0079 01       		.byte	1
 2704 007a 02       		.byte	2
 2705 007b 02       		.byte	2
 2706 007c 01000000 		.long	1
 2707 0080 00000000 		.quad	_Z16fl_thin_up_frameiiiij
 2707      00000000 
 2708 0088 01       		.byte	1
 2709 0089 01       		.byte	1
 2710 008a 02       		.byte	2
 2711 008b 02       		.byte	2
 2712 008c 01000000 		.long	1
 2713 0090 00000000 		.quad	_Z18fl_thin_down_frameiiiij
 2713      00000000 
 2714 0098 01       		.byte	1
 2715 0099 01       		.byte	1
 2716 009a 02       		.byte	2
 2717 009b 02       		.byte	2
 2718 009c 01000000 		.long	1
 2719 00a0 00000000 		.quad	_Z15fl_engraved_boxiiiij
 2719      00000000 
 2720 00a8 02       		.byte	2
 2721 00a9 02       		.byte	2
 2722 00aa 04       		.byte	4
 2723 00ab 04       		.byte	4
 2724 00ac 01000000 		.long	1
 2725 00b0 00000000 		.quad	_Z15fl_embossed_boxiiiij
 2725      00000000 
 2726 00b8 02       		.byte	2
 2727 00b9 02       		.byte	2
 2728 00ba 04       		.byte	4
 2729 00bb 04       		.byte	4
 2730 00bc 01000000 		.long	1
 2731 00c0 00000000 		.quad	_Z17fl_engraved_frameiiiij
 2731      00000000 
 2732 00c8 02       		.byte	2
 2733 00c9 02       		.byte	2
 2734 00ca 04       		.byte	4
 2735 00cb 04       		.byte	4
 2736 00cc 01000000 		.long	1
 2737 00d0 00000000 		.quad	_Z17fl_embossed_frameiiiij
 2737      00000000 
 2738 00d8 02       		.byte	2
 2739 00d9 02       		.byte	2
 2740 00da 04       		.byte	4
 2741 00db 04       		.byte	4
 2742 00dc 01000000 		.long	1
 2743 00e0 00000000 		.quad	_Z12fl_rectboundiiiij
 2743      00000000 
 2744 00e8 01       		.byte	1
 2745 00e9 01       		.byte	1
 2746 00ea 02       		.byte	2
 2747 00eb 02       		.byte	2
 2748 00ec 01000000 		.long	1
 2749 00f0 00000000 		.quad	_Z12fl_rectboundiiiij
 2749      00000000 
 2750 00f8 01       		.byte	1
 2751 00f9 01       		.byte	1
 2752 00fa 05       		.byte	5
 2753 00fb 05       		.byte	5
 2754 00fc 00000000 		.long	0
 2755 0100 00000000 		.quad	_Z15fl_border_frameiiiij
 2755      00000000 
 2756 0108 01       		.byte	1
 2757 0109 01       		.byte	1
 2758 010a 02       		.byte	2
 2759 010b 02       		.byte	2
 2760 010c 01000000 		.long	1
 2761 0110 00000000 		.quad	_Z15fl_border_frameiiiij
 2761      00000000 
 2762 0118 01       		.byte	1
 2763 0119 01       		.byte	1
 2764 011a 05       		.byte	5
 2765 011b 05       		.byte	5
 2766 011c 00000000 		.long	0
 2767 0120 00000000 		.quad	_Z12fl_rectboundiiiij
 2767      00000000 
 2768 0128 01       		.byte	1
 2769 0129 01       		.byte	1
 2770 012a 02       		.byte	2
 2771 012b 02       		.byte	2
 2772 012c 00000000 		.long	0
 2773 0130 00000000 		.quad	_Z12fl_rectboundiiiij
 2773      00000000 
 2774 0138 01       		.byte	1
 2775 0139 01       		.byte	1
 2776 013a 02       		.byte	2
 2777 013b 02       		.byte	2
 2778 013c 00000000 		.long	0
 2779 0140 00000000 		.quad	_Z15fl_border_frameiiiij
 2779      00000000 
 2780 0148 01       		.byte	1
 2781 0149 01       		.byte	1
 2782 014a 02       		.byte	2
 2783 014b 02       		.byte	2
 2784 014c 00000000 		.long	0
 2785 0150 00000000 		.quad	_Z11fl_flat_boxiiiij
 2785      00000000 
 2786 0158 00       		.byte	0
 2787 0159 00       		.byte	0
 2788 015a 00       		.byte	0
 2789 015b 00       		.byte	0
 2790 015c 00000000 		.long	0
 2791 0160 00000000 		.quad	_Z9fl_up_boxiiiij
 2791      00000000 
 2792 0168 03       		.byte	3
 2793 0169 03       		.byte	3
 2794 016a 06       		.byte	6
 2795 016b 06       		.byte	6
 2796 016c 00000000 		.long	0
 2797 0170 00000000 		.quad	_Z11fl_down_boxiiiij
 2797      00000000 
 2798 0178 03       		.byte	3
 2799 0179 03       		.byte	3
 2800 017a 06       		.byte	6
 2801 017b 06       		.byte	6
 2802 017c 00000000 		.long	0
 2803 0180 00000000 		.quad	_Z9fl_up_boxiiiij
 2803      00000000 
 2804 0188 00       		.byte	0
 2805 0189 00       		.byte	0
 2806 018a 00       		.byte	0
 2807 018b 00       		.byte	0
 2808 018c 00000000 		.long	0
 2809 0190 00000000 		.quad	_Z11fl_down_boxiiiij
 2809      00000000 
 2810 0198 00       		.byte	0
 2811 0199 00       		.byte	0
 2812 019a 00       		.byte	0
 2813 019b 00       		.byte	0
 2814 019c 00000000 		.long	0
 2815 01a0 00000000 		.quad	_Z12fl_rectboundiiiij
 2815      00000000 
 2816 01a8 01       		.byte	1
 2817 01a9 01       		.byte	1
 2818 01aa 02       		.byte	2
 2819 01ab 02       		.byte	2
 2820 01ac 00000000 		.long	0
 2821 01b0 00000000 		.quad	_Z12fl_rectboundiiiij
 2821      00000000 
 2822 01b8 01       		.byte	1
 2823 01b9 01       		.byte	1
 2824 01ba 02       		.byte	2
 2825 01bb 02       		.byte	2
 2826 01bc 00000000 		.long	0
 2827 01c0 00000000 		.quad	_Z15fl_border_frameiiiij
 2827      00000000 
 2828 01c8 01       		.byte	1
 2829 01c9 01       		.byte	1
 2830 01ca 02       		.byte	2
 2831 01cb 02       		.byte	2
 2832 01cc 00000000 		.long	0
 2833 01d0 00000000 		.quad	_Z11fl_flat_boxiiiij
 2833      00000000 
 2834 01d8 00       		.byte	0
 2835 01d9 00       		.byte	0
 2836 01da 00       		.byte	0
 2837 01db 00       		.byte	0
 2838 01dc 00000000 		.long	0
 2839 01e0 00000000 		.quad	_Z9fl_up_boxiiiij
 2839      00000000 
 2840 01e8 04       		.byte	4
 2841 01e9 04       		.byte	4
 2842 01ea 08       		.byte	8
 2843 01eb 08       		.byte	8
 2844 01ec 00000000 		.long	0
 2845 01f0 00000000 		.quad	_Z11fl_down_boxiiiij
 2845      00000000 
 2846 01f8 02       		.byte	2
 2847 01f9 02       		.byte	2
 2848 01fa 04       		.byte	4
 2849 01fb 04       		.byte	4
 2850 01fc 00000000 		.long	0
 2851 0200 00000000 		.quad	_Z11fl_up_frameiiiij
 2851      00000000 
 2852 0208 02       		.byte	2
 2853 0209 02       		.byte	2
 2854 020a 04       		.byte	4
 2855 020b 04       		.byte	4
 2856 020c 00000000 		.long	0
 2857 0210 00000000 		.quad	_Z13fl_down_frameiiiij
 2857      00000000 
 2858 0218 02       		.byte	2
 2859 0219 02       		.byte	2
 2860 021a 04       		.byte	4
 2861 021b 04       		.byte	4
 2862 021c 00000000 		.long	0
 2863 0220 00000000 		.quad	_Z9fl_up_boxiiiij
 2863      00000000 
 2864 0228 02       		.byte	2
 2865 0229 02       		.byte	2
 2866 022a 04       		.byte	4
 2867 022b 04       		.byte	4
 2868 022c 00000000 		.long	0
 2869 0230 00000000 		.quad	_Z11fl_down_boxiiiij
 2869      00000000 
 2870 0238 02       		.byte	2
 2871 0239 02       		.byte	2
 2872 023a 04       		.byte	4
 2873 023b 04       		.byte	4
 2874 023c 00000000 		.long	0
 2875 0240 00000000 		.quad	_Z9fl_up_boxiiiij
 2875      00000000 
 2876 0248 02       		.byte	2
 2877 0249 02       		.byte	2
 2878 024a 04       		.byte	4
 2879 024b 04       		.byte	4
 2880 024c 00000000 		.long	0
 2881 0250 00000000 		.quad	_Z11fl_down_boxiiiij
 2881      00000000 
 2882 0258 02       		.byte	2
 2883 0259 02       		.byte	2
 2884 025a 04       		.byte	4
 2885 025b 04       		.byte	4
 2886 025c 00000000 		.long	0
 2887 0260 00000000 		.quad	_Z9fl_up_boxiiiij
 2887      00000000 
 2888 0268 02       		.byte	2
 2889 0269 02       		.byte	2
 2890 026a 04       		.byte	4
 2891 026b 04       		.byte	4
 2892 026c 00000000 		.long	0
 2893 0270 00000000 		.quad	_Z11fl_down_boxiiiij
 2893      00000000 
 2894 0278 02       		.byte	2
 2895 0279 02       		.byte	2
 2896 027a 04       		.byte	4
 2897 027b 04       		.byte	4
 2898 027c 00000000 		.long	0
 2899 0280 00000000 		.quad	_Z11fl_up_frameiiiij
 2899      00000000 
 2900 0288 02       		.byte	2
 2901 0289 02       		.byte	2
 2902 028a 04       		.byte	4
 2903 028b 04       		.byte	4
 2904 028c 00000000 		.long	0
 2905 0290 00000000 		.quad	_Z13fl_down_frameiiiij
 2905      00000000 
 2906 0298 02       		.byte	2
 2907 0299 02       		.byte	2
 2908 029a 04       		.byte	4
 2909 029b 04       		.byte	4
 2910 029c 00000000 		.long	0
 2911 02a0 00000000 		.quad	_Z11fl_up_frameiiiij
 2911      00000000 
 2912 02a8 01       		.byte	1
 2913 02a9 01       		.byte	1
 2914 02aa 02       		.byte	2
 2915 02ab 02       		.byte	2
 2916 02ac 00000000 		.long	0
 2917 02b0 00000000 		.quad	_Z13fl_down_frameiiiij
 2917      00000000 
 2918 02b8 01       		.byte	1
 2919 02b9 01       		.byte	1
 2920 02ba 02       		.byte	2
 2921 02bb 02       		.byte	2
 2922 02bc 00000000 		.long	0
 2923 02c0 00000000 		.quad	_Z9fl_up_boxiiiij
 2923      00000000 
 2924 02c8 01       		.byte	1
 2925 02c9 01       		.byte	1
 2926 02ca 02       		.byte	2
 2927 02cb 02       		.byte	2
 2928 02cc 00000000 		.long	0
 2929 02d0 00000000 		.quad	_Z11fl_down_boxiiiij
 2929      00000000 
 2930 02d8 01       		.byte	1
 2931 02d9 01       		.byte	1
 2932 02da 02       		.byte	2
 2933 02db 02       		.byte	2
 2934 02dc 00000000 		.long	0
 2935 02e0 00000000 		.quad	_Z9fl_up_boxiiiij
 2935      00000000 
 2936 02e8 02       		.byte	2
 2937 02e9 02       		.byte	2
 2938 02ea 04       		.byte	4
 2939 02eb 04       		.byte	4
 2940 02ec 00000000 		.long	0
 2941 02f0 00000000 		.quad	_Z11fl_down_boxiiiij
 2941      00000000 
 2942 02f8 02       		.byte	2
 2943 02f9 02       		.byte	2
 2944 02fa 04       		.byte	4
 2945 02fb 04       		.byte	4
 2946 02fc 00000000 		.long	0
 2947 0300 00000000 		.quad	_Z9fl_up_boxiiiij
 2947      00000000 
 2948 0308 02       		.byte	2
 2949 0309 02       		.byte	2
 2950 030a 04       		.byte	4
 2951 030b 04       		.byte	4
 2952 030c 00000000 		.long	0
 2953 0310 00000000 		.quad	_Z11fl_down_boxiiiij
 2953      00000000 
 2954 0318 02       		.byte	2
 2955 0319 02       		.byte	2
 2956 031a 04       		.byte	4
 2957 031b 04       		.byte	4
 2958 031c 00000000 		.long	0
 2959 0320 00000000 		.quad	_Z11fl_up_frameiiiij
 2959      00000000 
 2960 0328 02       		.byte	2
 2961 0329 02       		.byte	2
 2962 032a 04       		.byte	4
 2963 032b 04       		.byte	4
 2964 032c 00000000 		.long	0
 2965 0330 00000000 		.quad	_Z13fl_down_frameiiiij
 2965      00000000 
 2966 0338 02       		.byte	2
 2967 0339 02       		.byte	2
 2968 033a 04       		.byte	4
 2969 033b 04       		.byte	4
 2970 033c 00000000 		.long	0
 2971 0340 00000000 		.quad	_Z9fl_up_boxiiiij
 2971      00000000 
 2972 0348 02       		.byte	2
 2973 0349 02       		.byte	2
 2974 034a 04       		.byte	4
 2975 034b 04       		.byte	4
 2976 034c 00000000 		.long	0
 2977 0350 00000000 		.quad	_Z11fl_down_boxiiiij
 2977      00000000 
 2978 0358 02       		.byte	2
 2979 0359 02       		.byte	2
 2980 035a 04       		.byte	4
 2981 035b 04       		.byte	4
 2982 035c 00000000 		.long	0
 2983 0360 00000000 		.quad	_Z9fl_up_boxiiiij
 2983      00000000 
 2984 0368 02       		.byte	2
 2985 0369 02       		.byte	2
 2986 036a 04       		.byte	4
 2987 036b 04       		.byte	4
 2988 036c 00000000 		.long	0
 2989 0370 00000000 		.quad	_Z11fl_down_boxiiiij
 2989      00000000 
 2990 0378 02       		.byte	2
 2991 0379 02       		.byte	2
 2992 037a 04       		.byte	4
 2993 037b 04       		.byte	4
 2994 037c 00000000 		.long	0
 2995 0380 00000000 		.quad	_Z9fl_up_boxiiiij
 2995      00000000 
 2996 0388 03       		.byte	3
 2997 0389 03       		.byte	3
 2998 038a 06       		.byte	6
 2999 038b 06       		.byte	6
 3000 038c 00000000 		.long	0
 3001 0390 00000000 		.quad	_Z11fl_down_boxiiiij
 3001      00000000 
 3002 0398 03       		.byte	3
 3003 0399 03       		.byte	3
 3004 039a 06       		.byte	6
 3005 039b 06       		.byte	6
 3006 039c 00000000 		.long	0
 3007 03a0 00000000 		.quad	_Z9fl_up_boxiiiij
 3007      00000000 
 3008 03a8 03       		.byte	3
 3009 03a9 03       		.byte	3
 3010 03aa 06       		.byte	6
 3011 03ab 06       		.byte	6
 3012 03ac 00000000 		.long	0
 3013 03b0 00000000 		.quad	_Z11fl_down_boxiiiij
 3013      00000000 
 3014 03b8 03       		.byte	3
 3015 03b9 03       		.byte	3
 3016 03ba 06       		.byte	6
 3017 03bb 06       		.byte	6
 3018 03bc 00000000 		.long	0
 3019 03c0 00000000 		.quad	_Z9fl_up_boxiiiij
 3019      00000000 
 3020 03c8 03       		.byte	3
 3021 03c9 03       		.byte	3
 3022 03ca 06       		.byte	6
 3023 03cb 06       		.byte	6
 3024 03cc 00000000 		.long	0
 3025 03d0 00000000 		.quad	_Z11fl_down_boxiiiij
 3025      00000000 
 3026 03d8 03       		.byte	3
 3027 03d9 03       		.byte	3
 3028 03da 06       		.byte	6
 3029 03db 06       		.byte	6
 3030 03dc 00000000 		.long	0
 3031 03e0 00000000 		.quad	_Z9fl_up_boxiiiij
 3031      00000000 
 3032 03e8 03       		.byte	3
 3033 03e9 03       		.byte	3
 3034 03ea 06       		.byte	6
 3035 03eb 06       		.byte	6
 3036 03ec 00000000 		.long	0
 3037 03f0 00000000 		.quad	_Z11fl_down_boxiiiij
 3037      00000000 
 3038 03f8 03       		.byte	3
 3039 03f9 03       		.byte	3
 3040 03fa 06       		.byte	6
 3041 03fb 06       		.byte	6
 3042 03fc 00000000 		.long	0
 3043 0400 00000000 		.zero	3072
 3043      00000000 
 3043      00000000 
 3043      00000000 
 3043      00000000 
 3044              		.section	.data._ZL14draw_it_active,"aw",@progbits
 3045              		.align 4
 3048              	_ZL14draw_it_active:
 3049 0000 01000000 		.long	1
 3050              		.section	.rodata._ZL13inactive_ramp,"a",@progbits
 3051              		.align 16
 3054              	_ZL13inactive_ramp:
 3055 0000 2B       		.byte	43
 3056 0001 2B       		.byte	43
 3057 0002 2C       		.byte	44
 3058 0003 2C       		.byte	44
 3059 0004 2C       		.byte	44
 3060 0005 2D       		.byte	45
 3061 0006 2D       		.byte	45
 3062 0007 2E       		.byte	46
 3063 0008 2E       		.byte	46
 3064 0009 2E       		.byte	46
 3065 000a 2F       		.byte	47
 3066 000b 2F       		.byte	47
 3067 000c 30       		.byte	48
 3068 000d 30       		.byte	48
 3069 000e 30       		.byte	48
 3070 000f 31       		.byte	49
 3071 0010 31       		.byte	49
 3072 0011 31       		.byte	49
 3073 0012 32       		.byte	50
 3074 0013 32       		.byte	50
 3075 0014 33       		.byte	51
 3076 0015 33       		.byte	51
 3077 0016 34       		.byte	52
 3078 0017 34       		.byte	52
 3079              		.section	.rodata._ZL11active_ramp,"a",@progbits
 3080              		.align 16
 3083              	_ZL11active_ramp:
 3084 0000 20       		.byte	32
 3085 0001 21       		.byte	33
 3086 0002 22       		.byte	34
 3087 0003 23       		.byte	35
 3088 0004 24       		.byte	36
 3089 0005 25       		.byte	37
 3090 0006 26       		.byte	38
 3091 0007 27       		.byte	39
 3092 0008 28       		.byte	40
 3093 0009 29       		.byte	41
 3094 000a 2A       		.byte	42
 3095 000b 2B       		.byte	43
 3096 000c 2C       		.byte	44
 3097 000d 2D       		.byte	45
 3098 000e 2E       		.byte	46
 3099 000f 2F       		.byte	47
 3100 0010 30       		.byte	48
 3101 0011 31       		.byte	49
 3102 0012 32       		.byte	50
 3103 0013 33       		.byte	51
 3104 0014 34       		.byte	52
 3105 0015 35       		.byte	53
 3106 0016 36       		.byte	54
 3107 0017 37       		.byte	55
 3108              		.text
 3109              	.Letext0:
 3110              		.section	.text.unlikely._Z9fl_no_boxiiiij
 3111              	.Letext_cold0:
 3112              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 3113              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3114              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3115              		.file 7 "/usr/include/libio.h"
 3116              		.file 8 "fltk-1.3.4-1/FL/Enumerations.H"
 3117              		.file 9 "fltk-1.3.4-1/FL/Fl.H"
 3118              		.file 10 "fltk-1.3.4-1/FL/Fl_Widget.H"
 3119              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 3120              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_boxtype.cxx
     /tmp/ccq9IaUn.s:14     .text._Z9fl_no_boxiiiij:0000000000000000 _Z9fl_no_boxiiiij
     /tmp/ccq9IaUn.s:34     .text._Z11fl_flat_boxiiiij:0000000000000000 _Z11fl_flat_boxiiiij
     /tmp/ccq9IaUn.s:3048   .data._ZL14draw_it_active:0000000000000000 _ZL14draw_it_active
     /tmp/ccq9IaUn.s:137    .text._ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6:0000000000000000 _ZNK9Fl_Widget13draw_backdropEv.part.5.constprop.6
     /tmp/ccq9IaUn.s:258    .text._ZN2Fl15draw_box_activeEv:0000000000000000 _ZN2Fl15draw_box_activeEv
     /tmp/ccq9IaUn.s:279    .text._Z12fl_gray_rampv:0000000000000000 _Z12fl_gray_rampv
     /tmp/ccq9IaUn.s:3054   .rodata._ZL13inactive_ramp:0000000000000000 _ZL13inactive_ramp
     /tmp/ccq9IaUn.s:3083   .rodata._ZL11active_ramp:0000000000000000 _ZL11active_ramp
     /tmp/ccq9IaUn.s:306    .text._ZN2Fl9box_colorEj:0000000000000000 _ZN2Fl9box_colorEj
     /tmp/ccq9IaUn.s:340    .text._ZN2Fl13set_box_colorEj:0000000000000000 _ZN2Fl13set_box_colorEj
     /tmp/ccq9IaUn.s:394    .text._Z12fl_rectboundiiiij:0000000000000000 _Z12fl_rectboundiiiij
     /tmp/ccq9IaUn.s:503    .text._Z15fl_border_frameiiiij:0000000000000000 _Z15fl_border_frameiiiij
     /tmp/ccq9IaUn.s:581    .text._Z8fl_framePKciiii:0000000000000000 _Z8fl_framePKciiii
     /tmp/ccq9IaUn.s:866    .text._Z17fl_engraved_frameiiiij:0000000000000000 _Z17fl_engraved_frameiiiij
     /tmp/ccq9IaUn.s:898    .text._Z15fl_engraved_boxiiiij:0000000000000000 _Z15fl_engraved_boxiiiij
     /tmp/ccq9IaUn.s:1014   .text._Z17fl_embossed_frameiiiij:0000000000000000 _Z17fl_embossed_frameiiiij
     /tmp/ccq9IaUn.s:1046   .text._Z15fl_embossed_boxiiiij:0000000000000000 _Z15fl_embossed_boxiiiij
     /tmp/ccq9IaUn.s:1159   .text._Z9fl_frame2PKciiii:0000000000000000 _Z9fl_frame2PKciiii
     /tmp/ccq9IaUn.s:1435   .text._Z18fl_thin_down_frameiiiij:0000000000000000 _Z18fl_thin_down_frameiiiij
     /tmp/ccq9IaUn.s:1467   .text._Z16fl_thin_down_boxiiiij:0000000000000000 _Z16fl_thin_down_boxiiiij
     /tmp/ccq9IaUn.s:1583   .text._Z16fl_thin_up_frameiiiij:0000000000000000 _Z16fl_thin_up_frameiiiij
     /tmp/ccq9IaUn.s:1615   .text._Z14fl_thin_up_boxiiiij:0000000000000000 _Z14fl_thin_up_boxiiiij
     /tmp/ccq9IaUn.s:1731   .text._Z11fl_up_frameiiiij:0000000000000000 _Z11fl_up_frameiiiij
     /tmp/ccq9IaUn.s:1763   .text._Z9fl_up_boxiiiij:0000000000000000 _Z9fl_up_boxiiiij
     /tmp/ccq9IaUn.s:1879   .text._Z13fl_down_frameiiiij:0000000000000000 _Z13fl_down_frameiiiij
     /tmp/ccq9IaUn.s:1911   .text._Z11fl_down_boxiiiij:0000000000000000 _Z11fl_down_boxiiiij
     /tmp/ccq9IaUn.s:2026   .text._ZN2Fl6box_dxE10Fl_Boxtype:0000000000000000 _ZN2Fl6box_dxE10Fl_Boxtype
     /tmp/ccq9IaUn.s:2658   .data._ZL12fl_box_table:0000000000000000 _ZL12fl_box_table
     /tmp/ccq9IaUn.s:2053   .text._ZN2Fl6box_dyE10Fl_Boxtype:0000000000000000 _ZN2Fl6box_dyE10Fl_Boxtype
     /tmp/ccq9IaUn.s:2080   .text._ZN2Fl6box_dwE10Fl_Boxtype:0000000000000000 _ZN2Fl6box_dwE10Fl_Boxtype
     /tmp/ccq9IaUn.s:2107   .text._ZN2Fl6box_dhE10Fl_Boxtype:0000000000000000 _ZN2Fl6box_dhE10Fl_Boxtype
     /tmp/ccq9IaUn.s:2132   .text._Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE:0000000000000000 _Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
     /tmp/ccq9IaUn.s:2166   .text._ZN2Fl11get_boxtypeE10Fl_Boxtype:0000000000000000 _ZN2Fl11get_boxtypeE10Fl_Boxtype
     /tmp/ccq9IaUn.s:2194   .text._ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh:0000000000000000 _ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
     /tmp/ccq9IaUn.s:2231   .text._ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_:0000000000000000 _ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
     /tmp/ccq9IaUn.s:2262   .text._Z11fl_draw_box10Fl_Boxtypeiiiij:0000000000000000 _Z11fl_draw_box10Fl_Boxtypeiiiij
     /tmp/ccq9IaUn.s:2312   .text._ZNK9Fl_Widget8draw_boxEv:0000000000000000 _ZNK9Fl_Widget8draw_boxEv
     /tmp/ccq9IaUn.s:2460   .text._ZNK9Fl_Widget13draw_backdropEv:0000000000000000 _ZNK9Fl_Widget13draw_backdropEv
     /tmp/ccq9IaUn.s:2492   .text._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej:0000000000000000 _ZNK9Fl_Widget8draw_boxE10Fl_Boxtypej
     /tmp/ccq9IaUn.s:2586   .text._ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij:0000000000000000 _ZNK9Fl_Widget8draw_boxE10Fl_Boxtypeiiiij
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f

UNDEFINED SYMBOLS
_Z11fl_inactivej
fl_graphics_driver
_ZNK9Fl_Widget8active_rEv
