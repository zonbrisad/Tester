   1              		.file	"fl_gleam.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL21shade_rect_top_bottomiiiijjf,"ax",@progbits
   5              	.LCOLDB4:
   6              		.section	.text._ZL21shade_rect_top_bottomiiiijjf,"ax",@progbits
   7              	.LHOTB4:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL21shade_rect_top_bottomiiiijjf
  10              	.Ltext_cold0:
  11              		.section	.text._ZL21shade_rect_top_bottomiiiijjf
  13              	_ZL21shade_rect_top_bottomiiiijjf:
  14              	.LFB469:
  15              		.file 1 "fltk-1.3.4-1/src/fl_gleam.cxx"
   1:fltk-1.3.4-1/src/fl_gleam.cxx **** ...
  16              		.loc 1 36 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4157     		pushq	%r15
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 15, -16
  22 0002 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 14, -24
  25 0004 4189F7   		movl	%esi, %r15d
  26 0007 4155     		pushq	%r13
  27              		.cfi_def_cfa_offset 32
  28              		.cfi_offset 13, -32
  29 0009 4154     		pushq	%r12
  30              		.cfi_def_cfa_offset 40
  31              		.cfi_offset 12, -40
  32 000b 4589CD   		movl	%r9d, %r13d
  33 000e 55       		pushq	%rbp
  34              		.cfi_def_cfa_offset 48
  35              		.cfi_offset 6, -48
  36 000f 53       		pushq	%rbx
  37              		.cfi_def_cfa_offset 56
  38              		.cfi_offset 3, -56
  39 0010 4189FC   		movl	%edi, %r12d
  40 0013 4489C3   		movl	%r8d, %ebx
  41 0016 4883EC28 		subq	$40, %rsp
  42              		.cfi_def_cfa_offset 96
  43              		.loc 1 38 0
  44 001a 83F927   		cmpl	$39, %ecx
  45              		.loc 1 36 0
  46 001d 89542414 		movl	%edx, 20(%rsp)
  47 0021 F30F1104 		movss	%xmm0, (%rsp)
  47      24
  48              		.loc 1 38 0
  49 0026 7F60     		jg	.L2
  50              		.loc 1 38 0 is_stmt 0 discriminator 1
  51 0028 89CA     		movl	%ecx, %edx
  52              	.LVL1:
  53              		.loc 1 39 0 is_stmt 1 discriminator 1
  54 002a 89C8     		movl	%ecx, %eax
  55              		.loc 1 38 0 discriminator 1
  56 002c C1EA1F   		shrl	$31, %edx
  57 002f 01CA     		addl	%ecx, %edx
  58 0031 D1FA     		sarl	%edx
  59 0033 89D6     		movl	%edx, %esi
  60              	.LVL2:
  61 0035 89542418 		movl	%edx, 24(%rsp)
  62              	.LVL3:
  63              		.loc 1 39 0 discriminator 1
  64 0039 BAABAAAA 		movl	$715827883, %edx
  64      2A
  65              	.LVL4:
  66 003e F7EA     		imull	%edx
  67 0040 89C8     		movl	%ecx, %eax
  68 0042 C1F81F   		sarl	$31, %eax
  69 0045 29C2     		subl	%eax, %edx
  70              	.LVL5:
  71              		.loc 1 40 0 discriminator 1
  72 0047 89F0     		movl	%esi, %eax
  73 0049 01D0     		addl	%edx, %eax
  74 004b 29C1     		subl	%eax, %ecx
  75              	.LVL6:
  76              		.loc 1 42 0 discriminator 1
  77 004d 83FE01   		cmpl	$1, %esi
  78              		.loc 1 40 0 discriminator 1
  79 0050 894C241C 		movl	%ecx, 28(%rsp)
  80              	.LVL7:
  81              		.loc 1 42 0 discriminator 1
  82 0054 0F8FCE01 		jg	.L3
  82      0000
  83              		.loc 1 42 0 is_stmt 0
  84 005a F30F103D 		movss	.LC0(%rip), %xmm7
  84      00000000 
  85 0062 F30F117C 		movss	%xmm7, 16(%rsp)
  85      2410
  86 0068 F30F117C 		movss	%xmm7, 12(%rsp)
  86      240C
  87              	.LVL8:
  88              	.L4:
  89              		.loc 1 43 0 is_stmt 1 discriminator 4
  90 006e F30F1074 		movss	16(%rsp), %xmm6
  90      2410
  91 0074 83FA01   		cmpl	$1, %edx
  92 0077 F30F1174 		movss	%xmm6, 8(%rsp)
  92      2408
  93 007d 7E5C     		jle	.L7
  94 007f EB40     		jmp	.L10
  95              	.LVL9:
  96              		.p2align 4,,10
  97 0081 0F1F8000 		.p2align 3
  97      000000
  98              	.L2:
  99              		.loc 1 39 0 discriminator 4
 100 0088 83F959   		cmpl	$89, %ecx
 101 008b 0F8E7101 		jle	.L20
 101      0000
 102              	.LVL10:
 103              		.loc 1 40 0
 104 0091 8D41DD   		leal	-35(%rcx), %eax
 105 0094 F30F103D 		movss	.LC1(%rip), %xmm7
 105      00000000 
 106 009c F30F1035 		movss	.LC0(%rip), %xmm6
 106      00000000 
 107              		.loc 1 38 0
 108 00a4 C7442418 		movl	$20, 24(%rsp)
 108      14000000 
 109              		.loc 1 40 0
 110 00ac F30F117C 		movss	%xmm7, 12(%rsp)
 110      240C
 111 00b2 8944241C 		movl	%eax, 28(%rsp)
 112              	.LVL11:
 113              		.loc 1 39 0
 114 00b6 BA0F0000 		movl	$15, %edx
 114      00
 115              	.LVL12:
 116 00bb F30F1174 		movss	%xmm6, 16(%rsp)
 116      2410
 117              	.LVL13:
 118              	.L10:
 119              		.loc 1 43 0 discriminator 1
 120 00c1 660FEFC0 		pxor	%xmm0, %xmm0
 121 00c5 F30F100D 		movss	.LC2(%rip), %xmm1
 121      00000000 
 122 00cd F30F2AC2 		cvtsi2ss	%edx, %xmm0
 123 00d1 F30F5EC8 		divss	%xmm0, %xmm1
 124 00d5 F30F114C 		movss	%xmm1, 8(%rsp)
 124      2408
 125              	.L7:
 126              	.LVL14:
 127 00db 8B442414 		movl	20(%rsp), %eax
 128              		.loc 1 43 0 is_stmt 0 discriminator 4
 129 00df 31ED     		xorl	%ebp, %ebp
 130              	.LBB52:
 131              		.loc 1 45 0 is_stmt 1 discriminator 4
 132 00e1 F30F104C 		movss	16(%rsp), %xmm1
 132      2410
 133 00e7 458D3404 		leal	(%r12,%rax), %r14d
 134              	.LVL15:
 135 00eb 0F1F4400 		.p2align 4,,10
 135      00
 136              		.p2align 3
 137              	.L8:
 138              		.loc 1 46 0 discriminator 2
 139 00f0 F30F1004 		movss	(%rsp), %xmm0
 139      24
 140 00f5 4489EE   		movl	%r13d, %esi
 141 00f8 89DF     		movl	%ebx, %edi
 142 00fa F30F114C 		movss	%xmm1, 4(%rsp)
 142      2404
 143              	.LVL16:
 144 0100 E8000000 		call	_Z16fl_color_averagejjf
 144      00
 145              	.LVL17:
 146 0105 F30F104C 		movss	4(%rsp), %xmm1
 146      2404
 147 010b 89DE     		movl	%ebx, %esi
 148 010d 0F28C1   		movaps	%xmm1, %xmm0
 149 0110 89C7     		movl	%eax, %edi
 150 0112 E8000000 		call	_Z16fl_color_averagejjf
 150      00
 151              	.LVL18:
 152              	.LBB53:
 153              	.LBB54:
 154              		.loc 1 33 0 discriminator 2
 155 0117 89C7     		movl	%eax, %edi
 156 0119 E8000000 		call	_ZN2Fl13set_box_colorEj
 156      00
 157              	.LVL19:
 158              	.LBE54:
 159              	.LBE53:
 160              	.LBB55:
 161              	.LBB56:
 162              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
 163              		.loc 2 255 0 discriminator 2
 164 011e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 164      000000
 165 0125 418D142F 		leal	(%r15,%rbp), %edx
 166 0129 4489F1   		movl	%r14d, %ecx
 167 012c 4489E6   		movl	%r12d, %esi
 168 012f 488B07   		movq	(%rdi), %rax
 169 0132 FF5030   		call	*48(%rax)
 170              	.LVL20:
 171              	.LBE56:
 172              	.LBE55:
 173              		.loc 1 45 0 discriminator 2
 174 0135 F30F104C 		movss	4(%rsp), %xmm1
 174      2404
 175 013b 8D4501   		leal	1(%rbp), %eax
 176              	.LVL21:
 177 013e F30F5C4C 		subss	12(%rsp), %xmm1
 177      240C
 178              	.LVL22:
 179 0144 660FEFDB 		pxor	%xmm3, %xmm3
 180 0148 4883C501 		addq	$1, %rbp
 181 014c 0F2ECB   		ucomiss	%xmm3, %xmm1
 182 014f 739F     		jnb	.L8
 183              	.LBE52:
 184              	.LBB57:
 185              	.LBB58:
 186              		.loc 1 33 0
 187 0151 89DF     		movl	%ebx, %edi
 188 0153 89442404 		movl	%eax, 4(%rsp)
 189              	.LVL23:
 190 0157 E8000000 		call	_ZN2Fl13set_box_colorEj
 190      00
 191              	.LVL24:
 192              	.LBE58:
 193              	.LBE57:
 194              	.LBB59:
 195              	.LBB60:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 196              		.loc 2 206 0
 197 015c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 197      000000
 198 0163 8B6C241C 		movl	28(%rsp), %ebp
 199 0167 4489E6   		movl	%r12d, %esi
 200 016a 8B4C2414 		movl	20(%rsp), %ecx
 201 016e 8B542418 		movl	24(%rsp), %edx
 202 0172 4C8B0F   		movq	(%rdi), %r9
 203 0175 4189E8   		movl	%ebp, %r8d
 204 0178 4401FA   		addl	%r15d, %edx
 205 017b 83C101   		addl	$1, %ecx
 206              	.LVL25:
 207 017e 41FF5120 		call	*32(%r9)
 208              	.LVL26:
 209 0182 8B442404 		movl	4(%rsp), %eax
 210              	.LBE60:
 211              	.LBE59:
 212              	.LBB61:
 213              		.loc 1 53 0
 214 0186 F30F104C 		movss	16(%rsp), %xmm1
 214      2410
 215 018c 4101C7   		addl	%eax, %r15d
 216              	.LVL27:
 217 018f 428D6C3D 		leal	-1(%rbp,%r15), %ebp
 217      FF
 218              	.LVL28:
 219              		.p2align 4,,10
 220 0194 0F1F4000 		.p2align 3
 221              	.L9:
 222              		.loc 1 54 0 discriminator 2
 223 0198 F30F1004 		movss	(%rsp), %xmm0
 223      24
 224 019d 4489EE   		movl	%r13d, %esi
 225 01a0 89DF     		movl	%ebx, %edi
 226 01a2 F30F114C 		movss	%xmm1, 4(%rsp)
 226      2404
 227              	.LVL29:
 228 01a8 E8000000 		call	_Z16fl_color_averagejjf
 228      00
 229              	.LVL30:
 230 01ad F30F104C 		movss	4(%rsp), %xmm1
 230      2404
 231 01b3 89C6     		movl	%eax, %esi
 232 01b5 0F28C1   		movaps	%xmm1, %xmm0
 233 01b8 89DF     		movl	%ebx, %edi
 234 01ba E8000000 		call	_Z16fl_color_averagejjf
 234      00
 235              	.LVL31:
 236              	.LBB62:
 237              	.LBB63:
 238              		.loc 1 33 0 discriminator 2
 239 01bf 89C7     		movl	%eax, %edi
 240 01c1 E8000000 		call	_ZN2Fl13set_box_colorEj
 240      00
 241              	.LVL32:
 242              	.LBE63:
 243              	.LBE62:
 244              	.LBB64:
 245              	.LBB65:
 246              		.loc 2 255 0 discriminator 2
 247 01c6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 247      000000
 248 01cd 89EA     		movl	%ebp, %edx
 249 01cf 4489F1   		movl	%r14d, %ecx
 250 01d2 4489E6   		movl	%r12d, %esi
 251 01d5 83C501   		addl	$1, %ebp
 252              	.LVL33:
 253 01d8 488B07   		movq	(%rdi), %rax
 254 01db FF5030   		call	*48(%rax)
 255              	.LVL34:
 256              	.LBE65:
 257              	.LBE64:
 258              		.loc 1 53 0 discriminator 2
 259 01de F30F104C 		movss	4(%rsp), %xmm1
 259      2404
 260 01e4 F30F5C4C 		subss	8(%rsp), %xmm1
 260      2408
 261              	.LVL35:
 262 01ea 660FEFED 		pxor	%xmm5, %xmm5
 263 01ee 0F2ECD   		ucomiss	%xmm5, %xmm1
 264 01f1 73A5     		jnb	.L9
 265              	.LBE61:
 266              		.loc 1 58 0
 267 01f3 4883C428 		addq	$40, %rsp
 268              		.cfi_remember_state
 269              		.cfi_def_cfa_offset 56
 270              	.LVL36:
 271 01f7 5B       		popq	%rbx
 272              		.cfi_def_cfa_offset 48
 273              	.LVL37:
 274 01f8 5D       		popq	%rbp
 275              		.cfi_def_cfa_offset 40
 276 01f9 415C     		popq	%r12
 277              		.cfi_def_cfa_offset 32
 278              	.LVL38:
 279 01fb 415D     		popq	%r13
 280              		.cfi_def_cfa_offset 24
 281              	.LVL39:
 282 01fd 415E     		popq	%r14
 283              		.cfi_def_cfa_offset 16
 284 01ff 415F     		popq	%r15
 285              		.cfi_def_cfa_offset 8
 286 0201 C3       		ret
 287              	.LVL40:
 288              	.L20:
 289              		.cfi_restore_state
 290              		.loc 1 39 0
 291 0202 89C8     		movl	%ecx, %eax
 292 0204 BAABAAAA 		movl	$715827883, %edx
 292      2A
 293              	.LVL41:
 294              		.loc 1 38 0
 295 0209 C7442418 		movl	$20, 24(%rsp)
 295      14000000 
 296              		.loc 1 39 0
 297 0211 F7EA     		imull	%edx
 298 0213 89C8     		movl	%ecx, %eax
 299 0215 C1F81F   		sarl	$31, %eax
 300 0218 29C2     		subl	%eax, %edx
 301              	.LVL42:
 302              		.loc 1 40 0
 303 021a 8D4214   		leal	20(%rdx), %eax
 304 021d 29C1     		subl	%eax, %ecx
 305              	.LVL43:
 306 021f 894C241C 		movl	%ecx, 28(%rsp)
 307              	.LVL44:
 308              		.p2align 4,,10
 309 0223 0F1F4400 		.p2align 3
 309      00
 310              	.L3:
 311 0228 660FEFC0 		pxor	%xmm0, %xmm0
 312              	.LVL45:
 313 022c F30F100D 		movss	.LC2(%rip), %xmm1
 313      00000000 
 314 0234 F30F1035 		movss	.LC0(%rip), %xmm6
 314      00000000 
 315 023c F30F1174 		movss	%xmm6, 16(%rsp)
 315      2410
 316 0242 F30F2A44 		cvtsi2ss	24(%rsp), %xmm0
 316      2418
 317 0248 F30F5EC8 		divss	%xmm0, %xmm1
 318 024c F30F114C 		movss	%xmm1, 12(%rsp)
 318      240C
 319 0252 E917FEFF 		jmp	.L4
 319      FF
 320              		.cfi_endproc
 321              	.LFE469:
 323              		.section	.text.unlikely._ZL21shade_rect_top_bottomiiiijjf
 324              	.LCOLDE4:
 325              		.section	.text._ZL21shade_rect_top_bottomiiiijjf
 326              	.LHOTE4:
 327              		.section	.text.unlikely._ZL10frame_rectiiiijjj,"ax",@progbits
 328              	.LCOLDB5:
 329              		.section	.text._ZL10frame_rectiiiijjj,"ax",@progbits
 330              	.LHOTB5:
 331              		.p2align 4,,15
 333              	_ZL10frame_rectiiiijjj:
 334              	.LFB472:
 335              		.loc 1 68 0
 336              		.cfi_startproc
 337              	.LVL46:
 338 0000 4157     		pushq	%r15
 339              		.cfi_def_cfa_offset 16
 340              		.cfi_offset 15, -16
 341 0002 4156     		pushq	%r14
 342              		.cfi_def_cfa_offset 24
 343              		.cfi_offset 14, -24
 344 0004 4155     		pushq	%r13
 345              		.cfi_def_cfa_offset 32
 346              		.cfi_offset 13, -32
 347 0006 4154     		pushq	%r12
 348              		.cfi_def_cfa_offset 40
 349              		.cfi_offset 12, -40
 350 0008 4189F5   		movl	%esi, %r13d
 351 000b 55       		pushq	%rbp
 352              		.cfi_def_cfa_offset 48
 353              		.cfi_offset 6, -48
 354 000c 53       		pushq	%rbx
 355              		.cfi_def_cfa_offset 56
 356              		.cfi_offset 3, -56
 357 000d 4189FC   		movl	%edi, %r12d
 358              	.LBB66:
 359              	.LBB67:
 360              		.loc 1 33 0
 361 0010 4489C7   		movl	%r8d, %edi
 362              	.LVL47:
 363              	.LBE67:
 364              	.LBE66:
 365              		.loc 1 68 0
 366 0013 89D3     		movl	%edx, %ebx
 367 0015 89CD     		movl	%ecx, %ebp
 368 0017 4883EC18 		subq	$24, %rsp
 369              		.cfi_def_cfa_offset 80
 370              		.loc 1 70 0
 371 001b 4401ED   		addl	%r13d, %ebp
 372              		.loc 1 71 0
 373 001e 4401E3   		addl	%r12d, %ebx
 374              		.loc 1 68 0
 375 0021 8B442450 		movl	80(%rsp), %eax
 376 0025 44894C24 		movl	%r9d, 12(%rsp)
 376      0C
 377 002a 89442408 		movl	%eax, 8(%rsp)
 378              	.LBB69:
 379              	.LBB68:
 380              		.loc 1 33 0
 381 002e E8000000 		call	_ZN2Fl13set_box_colorEj
 381      00
 382              	.LVL48:
 383              	.LBE68:
 384              	.LBE69:
 385              		.loc 1 70 0
 386 0033 418D4501 		leal	1(%r13), %eax
 387              	.LBB70:
 388              	.LBB71:
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
 389              		.loc 2 270 0
 390 0037 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 390      000000
 391 003e 4489E6   		movl	%r12d, %esi
 392              	.LBE71:
 393              	.LBE70:
 394              		.loc 1 70 0
 395 0041 4189C6   		movl	%eax, %r14d
 396 0044 8D45FF   		leal	-1(%rbp), %eax
 397              	.LBB74:
 398              	.LBB72:
 399              		.loc 2 270 0
 400 0047 4489F1   		movl	%r14d, %ecx
 401              	.LBE72:
 402              	.LBE74:
 403              		.loc 1 70 0
 404 004a 4189C7   		movl	%eax, %r15d
 405              	.LVL49:
 406              	.LBB75:
 407              	.LBB73:
 408              		.loc 2 270 0
 409 004d 488B07   		movq	(%rdi), %rax
 410              	.LVL50:
 411 0050 4489FA   		movl	%r15d, %edx
 412 0053 FF5048   		call	*72(%rax)
 413              	.LVL51:
 414              	.LBE73:
 415              	.LBE75:
 416              	.LBB76:
 417              	.LBB77:
 418 0056 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 418      000000
 419 005d 44893424 		movl	%r14d, (%rsp)
 420 0061 4489F1   		movl	%r14d, %ecx
 421 0064 44897C24 		movl	%r15d, 4(%rsp)
 421      04
 422 0069 4489FA   		movl	%r15d, %edx
 423 006c 89DE     		movl	%ebx, %esi
 424              	.LBE77:
 425              	.LBE76:
 426              		.loc 1 72 0
 427 006e 448D73FF 		leal	-1(%rbx), %r14d
 428              	.LVL52:
 429 0072 458D7C24 		leal	1(%r12), %r15d
 429      01
 430              	.LVL53:
 431              		.loc 1 78 0
 432 0077 83EB03   		subl	$3, %ebx
 433              	.LVL54:
 434              	.LBB80:
 435              	.LBB78:
 436              		.loc 2 270 0
 437 007a 488B07   		movq	(%rdi), %rax
 438              	.LBE78:
 439              	.LBE80:
 440              		.loc 1 78 0
 441 007d 4183C402 		addl	$2, %r12d
 442              	.LVL55:
 443              	.LBB81:
 444              	.LBB79:
 445              		.loc 2 270 0
 446 0081 FF5048   		call	*72(%rax)
 447              	.LVL56:
 448              	.LBE79:
 449              	.LBE81:
 450              	.LBB82:
 451              	.LBB83:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 452              		.loc 2 255 0
 453 0084 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 453      000000
 454 008b 4489F1   		movl	%r14d, %ecx
 455 008e 4489EA   		movl	%r13d, %edx
 456 0091 4489FE   		movl	%r15d, %esi
 457              	.LBE83:
 458              	.LBE82:
 459              		.loc 1 75 0
 460 0094 4183C502 		addl	$2, %r13d
 461              	.LVL57:
 462              	.LBB85:
 463              	.LBB84:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 464              		.loc 2 255 0
 465 0098 488B07   		movq	(%rdi), %rax
 466 009b FF5030   		call	*48(%rax)
 467              	.LVL58:
 468              	.LBE84:
 469              	.LBE85:
 470              	.LBB86:
 471              	.LBB87:
 472 009e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 472      000000
 473 00a5 4489F1   		movl	%r14d, %ecx
 474 00a8 89EA     		movl	%ebp, %edx
 475 00aa 4489FE   		movl	%r15d, %esi
 476              	.LBE87:
 477              	.LBE86:
 478              		.loc 1 75 0
 479 00ad 83ED02   		subl	$2, %ebp
 480              	.LVL59:
 481              	.LBB89:
 482              	.LBB88:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 483              		.loc 2 255 0
 484 00b0 488B07   		movq	(%rdi), %rax
 485 00b3 FF5030   		call	*48(%rax)
 486              	.LVL60:
 487              	.LBE88:
 488              	.LBE89:
 489              	.LBB90:
 490              	.LBB91:
 491              		.loc 1 33 0
 492 00b6 448B4C24 		movl	12(%rsp), %r9d
 492      0C
 493 00bb 4489CF   		movl	%r9d, %edi
 494 00be E8000000 		call	_ZN2Fl13set_box_colorEj
 494      00
 495              	.LVL61:
 496              	.LBE91:
 497              	.LBE90:
 498              	.LBB92:
 499              	.LBB93:
 500              		.loc 2 270 0
 501 00c3 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 501      000000
 502 00ca 4489E9   		movl	%r13d, %ecx
 503 00cd 89EA     		movl	%ebp, %edx
 504 00cf 4489FE   		movl	%r15d, %esi
 505 00d2 488B07   		movq	(%rdi), %rax
 506 00d5 FF5048   		call	*72(%rax)
 507              	.LVL62:
 508              	.LBE93:
 509              	.LBE92:
 510              	.LBB94:
 511              	.LBB95:
 512 00d8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 512      000000
 513 00df 4489E9   		movl	%r13d, %ecx
 514 00e2 89EA     		movl	%ebp, %edx
 515 00e4 4489F6   		movl	%r14d, %esi
 516 00e7 488B07   		movq	(%rdi), %rax
 517 00ea FF5048   		call	*72(%rax)
 518              	.LVL63:
 519              	.LBE95:
 520              	.LBE94:
 521              	.LBB96:
 522              	.LBB97:
 523              		.loc 1 33 0
 524 00ed 8B7C2408 		movl	8(%rsp), %edi
 525 00f1 E8000000 		call	_ZN2Fl13set_box_colorEj
 525      00
 526              	.LVL64:
 527              	.LBE97:
 528              	.LBE96:
 529              	.LBB98:
 530              	.LBB99:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 531              		.loc 2 255 0
 532 00f6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 532      000000
 533 00fd 89D9     		movl	%ebx, %ecx
 534 00ff 8B1424   		movl	(%rsp), %edx
 535 0102 4489E6   		movl	%r12d, %esi
 536 0105 488B07   		movq	(%rdi), %rax
 537 0108 FF5030   		call	*48(%rax)
 538              	.LVL65:
 539              	.LBE99:
 540              	.LBE98:
 541              	.LBB100:
 542              	.LBB101:
 543 010b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 543      000000
 544 0112 8B542404 		movl	4(%rsp), %edx
 545 0116 89D9     		movl	%ebx, %ecx
 546 0118 4489E6   		movl	%r12d, %esi
 547 011b 488B07   		movq	(%rdi), %rax
 548 011e 488B4030 		movq	48(%rax), %rax
 549              	.LBE101:
 550              	.LBE100:
 551              		.loc 1 80 0
 552 0122 4883C418 		addq	$24, %rsp
 553              		.cfi_def_cfa_offset 56
 554 0126 5B       		popq	%rbx
 555              		.cfi_def_cfa_offset 48
 556              	.LVL66:
 557 0127 5D       		popq	%rbp
 558              		.cfi_def_cfa_offset 40
 559 0128 415C     		popq	%r12
 560              		.cfi_def_cfa_offset 32
 561              	.LVL67:
 562 012a 415D     		popq	%r13
 563              		.cfi_def_cfa_offset 24
 564              	.LVL68:
 565 012c 415E     		popq	%r14
 566              		.cfi_def_cfa_offset 16
 567 012e 415F     		popq	%r15
 568              		.cfi_def_cfa_offset 8
 569              	.LBB103:
 570              	.LBB102:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 571              		.loc 2 255 0
 572 0130 FFE0     		jmp	*%rax
 573              	.LVL69:
 574              	.LBE102:
 575              	.LBE103:
 576              		.cfi_endproc
 577              	.LFE472:
 579              		.section	.text.unlikely._ZL10frame_rectiiiijjj
 580              	.LCOLDE5:
 581              		.section	.text._ZL10frame_rectiiiijjj
 582              	.LHOTE5:
 583              		.section	.text.unlikely._ZL15frame_rect_downiiiijjff,"ax",@progbits
 584              	.LCOLDB6:
 585              		.section	.text._ZL15frame_rect_downiiiijjff,"ax",@progbits
 586              	.LHOTB6:
 587              		.p2align 4,,15
 589              	_ZL15frame_rect_downiiiijjff:
 590              	.LFB474:
 591              		.loc 1 86 0
 592              		.cfi_startproc
 593              	.LVL70:
 594 0000 4157     		pushq	%r15
 595              		.cfi_def_cfa_offset 16
 596              		.cfi_offset 15, -16
 597 0002 4156     		pushq	%r14
 598              		.cfi_def_cfa_offset 24
 599              		.cfi_offset 14, -24
 600 0004 4189CE   		movl	%ecx, %r14d
 601 0007 4155     		pushq	%r13
 602              		.cfi_def_cfa_offset 32
 603              		.cfi_offset 13, -32
 604 0009 4154     		pushq	%r12
 605              		.cfi_def_cfa_offset 40
 606              		.cfi_offset 12, -40
 607 000b 4189F4   		movl	%esi, %r12d
 608 000e 55       		pushq	%rbp
 609              		.cfi_def_cfa_offset 48
 610              		.cfi_offset 6, -48
 611 000f 53       		pushq	%rbx
 612              		.cfi_def_cfa_offset 56
 613              		.cfi_offset 3, -56
 614              		.loc 1 87 0
 615 0010 4489C6   		movl	%r8d, %esi
 616              	.LVL71:
 617              		.loc 1 86 0
 618 0013 89FD     		movl	%edi, %ebp
 619              		.loc 1 87 0
 620 0015 BF380000 		movl	$56, %edi
 620      00
 621              	.LVL72:
 622              		.loc 1 86 0
 623 001a 4489C3   		movl	%r8d, %ebx
 624 001d 4883EC18 		subq	$24, %rsp
 625              		.cfi_def_cfa_offset 80
 626              		.loc 1 86 0
 627 0021 4189D5   		movl	%edx, %r13d
 628 0024 F30F1144 		movss	%xmm0, 8(%rsp)
 628      2408
 629              		.loc 1 87 0
 630 002a 0F28C1   		movaps	%xmm1, %xmm0
 631              	.LVL73:
 632              		.loc 1 86 0
 633 002d 44894C24 		movl	%r9d, 12(%rsp)
 633      0C
 634              		.loc 1 87 0
 635 0032 E8000000 		call	_Z16fl_color_averagejjf
 635      00
 636              	.LVL74:
 637 0037 F30F1054 		movss	8(%rsp), %xmm2
 637      2408
 638 003d 89DF     		movl	%ebx, %edi
 639 003f 0F28C2   		movaps	%xmm2, %xmm0
 640 0042 BEFF0000 		movl	$255, %esi
 640      00
 641 0047 4189C7   		movl	%eax, %r15d
 642 004a E8000000 		call	_Z16fl_color_averagejjf
 642      00
 643              	.LVL75:
 644 004f 4883EC08 		subq	$8, %rsp
 645              		.cfi_def_cfa_offset 88
 646 0053 4489F1   		movl	%r14d, %ecx
 647 0056 4489EA   		movl	%r13d, %edx
 648 0059 448B4C24 		movl	20(%rsp), %r9d
 648      14
 649 005e 4489E6   		movl	%r12d, %esi
 650 0061 89EF     		movl	%ebp, %edi
 651 0063 4189C0   		movl	%eax, %r8d
 652 0066 4151     		pushq	%r9
 653              		.cfi_def_cfa_offset 96
 654 0068 4589F9   		movl	%r15d, %r9d
 655 006b E8000000 		call	_ZL10frame_rectiiiijjj
 655      00
 656              	.LVL76:
 657              		.loc 1 88 0
 658 0070 4883C428 		addq	$40, %rsp
 659              		.cfi_def_cfa_offset 56
 660 0074 5B       		popq	%rbx
 661              		.cfi_def_cfa_offset 48
 662              	.LVL77:
 663 0075 5D       		popq	%rbp
 664              		.cfi_def_cfa_offset 40
 665              	.LVL78:
 666 0076 415C     		popq	%r12
 667              		.cfi_def_cfa_offset 32
 668              	.LVL79:
 669 0078 415D     		popq	%r13
 670              		.cfi_def_cfa_offset 24
 671              	.LVL80:
 672 007a 415E     		popq	%r14
 673              		.cfi_def_cfa_offset 16
 674              	.LVL81:
 675 007c 415F     		popq	%r15
 676              		.cfi_def_cfa_offset 8
 677 007e C3       		ret
 678              		.cfi_endproc
 679              	.LFE474:
 681              		.section	.text.unlikely._ZL15frame_rect_downiiiijjff
 682              	.LCOLDE6:
 683              		.section	.text._ZL15frame_rect_downiiiijjff
 684              	.LHOTE6:
 685              		.section	.text.unlikely._ZL13thin_down_boxiiiij,"ax",@progbits
 686              	.LCOLDB10:
 687              		.section	.text._ZL13thin_down_boxiiiij,"ax",@progbits
 688              	.LHOTB10:
 689              		.p2align 4,,15
 691              	_ZL13thin_down_boxiiiij:
 692              	.LFB480:
 693              		.loc 1 113 0
 694              		.cfi_startproc
 695              	.LVL82:
 696 0000 4156     		pushq	%r14
 697              		.cfi_def_cfa_offset 16
 698              		.cfi_offset 14, -16
 699 0002 4189F6   		movl	%esi, %r14d
 700 0005 4155     		pushq	%r13
 701              		.cfi_def_cfa_offset 24
 702              		.cfi_offset 13, -24
 703              	.LBB104:
 704              	.LBB105:
 705              		.loc 1 65 0
 706 0007 8D7601   		leal	1(%rsi), %esi
 707              	.LVL83:
 708              	.LBE105:
 709              	.LBE104:
 710              		.loc 1 113 0
 711 000a 4154     		pushq	%r12
 712              		.cfi_def_cfa_offset 32
 713              		.cfi_offset 12, -32
 714 000c 4189FD   		movl	%edi, %r13d
 715 000f 55       		pushq	%rbp
 716              		.cfi_def_cfa_offset 40
 717              		.cfi_offset 6, -40
 718              	.LBB109:
 719              	.LBB106:
 720              		.loc 1 65 0
 721 0010 8D7F01   		leal	1(%rdi), %edi
 722              	.LVL84:
 723              	.LBE106:
 724              	.LBE109:
 725              		.loc 1 113 0
 726 0013 53       		pushq	%rbx
 727              		.cfi_def_cfa_offset 48
 728              		.cfi_offset 3, -48
 729              		.loc 1 113 0
 730 0014 89CD     		movl	%ecx, %ebp
 731 0016 89D3     		movl	%edx, %ebx
 732              	.LBB110:
 733              	.LBB107:
 734              		.loc 1 65 0
 735 0018 8D49FD   		leal	-3(%rcx), %ecx
 736              	.LVL85:
 737 001b 8D52FD   		leal	-3(%rdx), %edx
 738              	.LVL86:
 739              	.LBE107:
 740              	.LBE110:
 741              		.loc 1 113 0
 742 001e 4589C4   		movl	%r8d, %r12d
 743              	.LBB111:
 744              	.LBB108:
 745              		.loc 1 65 0
 746 0021 41B93800 		movl	$56, %r9d
 746      0000
 747 0027 F30F1005 		movss	.LC7(%rip), %xmm0
 747      00000000 
 748 002f E8000000 		call	_ZL21shade_rect_top_bottomiiiijjf
 748      00
 749              	.LVL87:
 750              	.LBE108:
 751              	.LBE111:
 752              		.loc 1 115 0
 753 0034 4489E7   		movl	%r12d, %edi
 754 0037 F30F1005 		movss	.LC8(%rip), %xmm0
 754      00000000 
 755 003f BE380000 		movl	$56, %esi
 755      00
 756 0044 E8000000 		call	_Z16fl_color_averagejjf
 756      00
 757              	.LVL88:
 758 0049 8D4DFF   		leal	-1(%rbp), %ecx
 759 004c 8D53FF   		leal	-1(%rbx), %edx
 760 004f 4589E0   		movl	%r12d, %r8d
 761              		.loc 1 116 0
 762 0052 5B       		popq	%rbx
 763              		.cfi_def_cfa_offset 40
 764              	.LVL89:
 765              		.loc 1 115 0
 766 0053 4489F6   		movl	%r14d, %esi
 767 0056 4489EF   		movl	%r13d, %edi
 768 0059 4189C1   		movl	%eax, %r9d
 769              		.loc 1 116 0
 770 005c 5D       		popq	%rbp
 771              		.cfi_def_cfa_offset 32
 772              	.LVL90:
 773 005d 415C     		popq	%r12
 774              		.cfi_def_cfa_offset 24
 775              	.LVL91:
 776 005f 415D     		popq	%r13
 777              		.cfi_def_cfa_offset 16
 778              	.LVL92:
 779 0061 415E     		popq	%r14
 780              		.cfi_def_cfa_offset 8
 781              	.LVL93:
 782              		.loc 1 115 0
 783 0063 F30F100D 		movss	.LC7(%rip), %xmm1
 783      00000000 
 784 006b F30F1005 		movss	.LC9(%rip), %xmm0
 784      00000000 
 785 0073 E9000000 		jmp	_ZL15frame_rect_downiiiijjff
 785      00
 786              	.LVL94:
 787              		.cfi_endproc
 788              	.LFE480:
 790              		.section	.text.unlikely._ZL13thin_down_boxiiiij
 791              	.LCOLDE10:
 792              		.section	.text._ZL13thin_down_boxiiiij
 793              	.LHOTE10:
 794              		.section	.text.unlikely._ZL10down_frameiiiij,"ax",@progbits
 795              	.LCOLDB14:
 796              		.section	.text._ZL10down_frameiiiij,"ax",@progbits
 797              	.LHOTB14:
 798              		.p2align 4,,15
 800              	_ZL10down_frameiiiij:
 801              	.LFB478:
 802              		.loc 1 104 0
 803              		.cfi_startproc
 804              	.LVL95:
 805 0000 4157     		pushq	%r15
 806              		.cfi_def_cfa_offset 16
 807              		.cfi_offset 15, -16
 808 0002 4156     		pushq	%r14
 809              		.cfi_def_cfa_offset 24
 810              		.cfi_offset 14, -24
 811 0004 4589C7   		movl	%r8d, %r15d
 812 0007 4155     		pushq	%r13
 813              		.cfi_def_cfa_offset 32
 814              		.cfi_offset 13, -32
 815 0009 4154     		pushq	%r12
 816              		.cfi_def_cfa_offset 40
 817              		.cfi_offset 12, -40
 818 000b 4189F5   		movl	%esi, %r13d
 819 000e 55       		pushq	%rbp
 820              		.cfi_def_cfa_offset 48
 821              		.cfi_offset 6, -48
 822 000f 53       		pushq	%rbx
 823              		.cfi_def_cfa_offset 56
 824              		.cfi_offset 3, -56
 825 0010 4189FC   		movl	%edi, %r12d
 826              	.LBB112:
 827              	.LBB113:
 828              		.file 3 "fltk-1.3.4-1/FL/Enumerations.H"
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
 829              		.loc 3 994 0
 830 0013 BE380000 		movl	$56, %esi
 830      00
 831              	.LVL96:
 832 0018 4489C7   		movl	%r8d, %edi
 833              	.LVL97:
 834              	.LBE113:
 835              	.LBE112:
 836              		.loc 1 104 0
 837 001b 89D3     		movl	%edx, %ebx
 838 001d 4883EC08 		subq	$8, %rsp
 839              		.cfi_def_cfa_offset 64
 840              		.loc 1 104 0
 841 0021 89CD     		movl	%ecx, %ebp
 842              	.LBB116:
 843              	.LBB114:
 844              		.loc 3 994 0
 845 0023 F30F1005 		movss	.LC11(%rip), %xmm0
 845      00000000 
 846 002b E8000000 		call	_Z16fl_color_averagejjf
 846      00
 847              	.LVL98:
 848              	.LBE114:
 849              	.LBE116:
 850              	.LBB117:
 851              	.LBB118:
 852 0030 4489FF   		movl	%r15d, %edi
 853 0033 F30F1005 		movss	.LC11(%rip), %xmm0
 853      00000000 
 854 003b BE380000 		movl	$56, %esi
 854      00
 855              	.LBE118:
 856              	.LBE117:
 857              	.LBB121:
 858              	.LBB115:
 859 0040 4189C6   		movl	%eax, %r14d
 860              	.LVL99:
 861              	.LBE115:
 862              	.LBE121:
 863              	.LBB122:
 864              	.LBB119:
 865 0043 E8000000 		call	_Z16fl_color_averagejjf
 865      00
 866              	.LVL100:
 867              	.LBE119:
 868              	.LBE122:
 869              		.loc 1 105 0
 870 0048 F30F100D 		movss	.LC12(%rip), %xmm1
 870      00000000 
 871 0050 8D4DFF   		leal	-1(%rbp), %ecx
 872 0053 F30F1005 		movss	.LC13(%rip), %xmm0
 872      00000000 
 873              		.loc 1 106 0
 874 005b 4883C408 		addq	$8, %rsp
 875              		.cfi_def_cfa_offset 56
 876              		.loc 1 105 0
 877 005f 8D53FF   		leal	-1(%rbx), %edx
 878 0062 4589F1   		movl	%r14d, %r9d
 879 0065 4489EE   		movl	%r13d, %esi
 880              		.loc 1 106 0
 881 0068 5B       		popq	%rbx
 882              		.cfi_def_cfa_offset 48
 883              	.LVL101:
 884              		.loc 1 105 0
 885 0069 4489E7   		movl	%r12d, %edi
 886              	.LBB123:
 887              	.LBB120:
 888              		.loc 3 994 0
 889 006c 4189C0   		movl	%eax, %r8d
 890              	.LVL102:
 891              	.LBE120:
 892              	.LBE123:
 893              		.loc 1 106 0
 894 006f 5D       		popq	%rbp
 895              		.cfi_def_cfa_offset 40
 896              	.LVL103:
 897 0070 415C     		popq	%r12
 898              		.cfi_def_cfa_offset 32
 899              	.LVL104:
 900 0072 415D     		popq	%r13
 901              		.cfi_def_cfa_offset 24
 902              	.LVL105:
 903 0074 415E     		popq	%r14
 904              		.cfi_def_cfa_offset 16
 905 0076 415F     		popq	%r15
 906              		.cfi_def_cfa_offset 8
 907              	.LVL106:
 908              		.loc 1 105 0
 909 0078 E9000000 		jmp	_ZL15frame_rect_downiiiijjff
 909      00
 910              	.LVL107:
 911              		.cfi_endproc
 912              	.LFE478:
 914              		.section	.text.unlikely._ZL10down_frameiiiij
 915              	.LCOLDE14:
 916              		.section	.text._ZL10down_frameiiiij
 917              	.LHOTE14:
 918              		.section	.text.unlikely._ZL8down_boxiiiij,"ax",@progbits
 919              	.LCOLDB17:
 920              		.section	.text._ZL8down_boxiiiij,"ax",@progbits
 921              	.LHOTB17:
 922              		.p2align 4,,15
 924              	_ZL8down_boxiiiij:
 925              	.LFB479:
 926              		.loc 1 108 0
 927              		.cfi_startproc
 928              	.LVL108:
 929 0000 4156     		pushq	%r14
 930              		.cfi_def_cfa_offset 16
 931              		.cfi_offset 14, -16
 932 0002 4189F6   		movl	%esi, %r14d
 933 0005 4155     		pushq	%r13
 934              		.cfi_def_cfa_offset 24
 935              		.cfi_offset 13, -24
 936              	.LBB124:
 937              	.LBB125:
 938              		.loc 1 65 0
 939 0007 8D7601   		leal	1(%rsi), %esi
 940              	.LVL109:
 941              	.LBE125:
 942              	.LBE124:
 943              		.loc 1 108 0
 944 000a 4154     		pushq	%r12
 945              		.cfi_def_cfa_offset 32
 946              		.cfi_offset 12, -32
 947 000c 4189FD   		movl	%edi, %r13d
 948 000f 55       		pushq	%rbp
 949              		.cfi_def_cfa_offset 40
 950              		.cfi_offset 6, -40
 951              	.LBB129:
 952              	.LBB126:
 953              		.loc 1 65 0
 954 0010 8D7F01   		leal	1(%rdi), %edi
 955              	.LVL110:
 956              	.LBE126:
 957              	.LBE129:
 958              		.loc 1 108 0
 959 0013 53       		pushq	%rbx
 960              		.cfi_def_cfa_offset 48
 961              		.cfi_offset 3, -48
 962              		.loc 1 108 0
 963 0014 89CD     		movl	%ecx, %ebp
 964 0016 89D3     		movl	%edx, %ebx
 965              	.LBB130:
 966              	.LBB127:
 967              		.loc 1 65 0
 968 0018 8D49FD   		leal	-3(%rcx), %ecx
 969              	.LVL111:
 970 001b 8D52FD   		leal	-3(%rdx), %edx
 971              	.LVL112:
 972              	.LBE127:
 973              	.LBE130:
 974              		.loc 1 108 0
 975 001e 4589C4   		movl	%r8d, %r12d
 976              	.LBB131:
 977              	.LBB128:
 978              		.loc 1 65 0
 979 0021 41B93800 		movl	$56, %r9d
 979      0000
 980 0027 F30F1005 		movss	.LC15(%rip), %xmm0
 980      00000000 
 981 002f E8000000 		call	_ZL21shade_rect_top_bottomiiiijjf
 981      00
 982              	.LVL113:
 983              	.LBE128:
 984              	.LBE131:
 985              		.loc 1 110 0
 986 0034 4489E7   		movl	%r12d, %edi
 987 0037 F30F1005 		movss	.LC16(%rip), %xmm0
 987      00000000 
 988 003f BE380000 		movl	$56, %esi
 988      00
 989 0044 E8000000 		call	_Z16fl_color_averagejjf
 989      00
 990              	.LVL114:
 991 0049 8D4DFF   		leal	-1(%rbp), %ecx
 992 004c 8D53FF   		leal	-1(%rbx), %edx
 993 004f 4589E0   		movl	%r12d, %r8d
 994              		.loc 1 111 0
 995 0052 5B       		popq	%rbx
 996              		.cfi_def_cfa_offset 40
 997              	.LVL115:
 998              		.loc 1 110 0
 999 0053 4489F6   		movl	%r14d, %esi
 1000 0056 4489EF   		movl	%r13d, %edi
 1001 0059 4189C1   		movl	%eax, %r9d
 1002              		.loc 1 111 0
 1003 005c 5D       		popq	%rbp
 1004              		.cfi_def_cfa_offset 32
 1005              	.LVL116:
 1006 005d 415C     		popq	%r12
 1007              		.cfi_def_cfa_offset 24
 1008              	.LVL117:
 1009 005f 415D     		popq	%r13
 1010              		.cfi_def_cfa_offset 16
 1011              	.LVL118:
 1012 0061 415E     		popq	%r14
 1013              		.cfi_def_cfa_offset 8
 1014              	.LVL119:
 1015              		.loc 1 110 0
 1016 0063 F30F100D 		movss	.LC12(%rip), %xmm1
 1016      00000000 
 1017 006b F30F1005 		movss	.LC16(%rip), %xmm0
 1017      00000000 
 1018 0073 E9000000 		jmp	_ZL15frame_rect_downiiiijjff
 1018      00
 1019              	.LVL120:
 1020              		.cfi_endproc
 1021              	.LFE479:
 1023              		.section	.text.unlikely._ZL8down_boxiiiij
 1024              	.LCOLDE17:
 1025              		.section	.text._ZL8down_boxiiiij
 1026              	.LHOTE17:
 1027              		.section	.text.unlikely._ZL13frame_rect_upiiiijjff,"ax",@progbits
 1028              	.LCOLDB18:
 1029              		.section	.text._ZL13frame_rect_upiiiijjff,"ax",@progbits
 1030              	.LHOTB18:
 1031              		.p2align 4,,15
 1033              	_ZL13frame_rect_upiiiijjff:
 1034              	.LFB473:
 1035              		.loc 1 82 0
 1036              		.cfi_startproc
 1037              	.LVL121:
 1038 0000 4157     		pushq	%r15
 1039              		.cfi_def_cfa_offset 16
 1040              		.cfi_offset 15, -16
 1041 0002 4156     		pushq	%r14
 1042              		.cfi_def_cfa_offset 24
 1043              		.cfi_offset 14, -24
 1044 0004 4189CE   		movl	%ecx, %r14d
 1045 0007 4155     		pushq	%r13
 1046              		.cfi_def_cfa_offset 32
 1047              		.cfi_offset 13, -32
 1048 0009 4154     		pushq	%r12
 1049              		.cfi_def_cfa_offset 40
 1050              		.cfi_offset 12, -40
 1051 000b 4189F4   		movl	%esi, %r12d
 1052 000e 55       		pushq	%rbp
 1053              		.cfi_def_cfa_offset 48
 1054              		.cfi_offset 6, -48
 1055 000f 53       		pushq	%rbx
 1056              		.cfi_def_cfa_offset 56
 1057              		.cfi_offset 3, -56
 1058 0010 89FD     		movl	%edi, %ebp
 1059 0012 4489C3   		movl	%r8d, %ebx
 1060              		.loc 1 83 0
 1061 0015 4489C7   		movl	%r8d, %edi
 1062              	.LVL122:
 1063 0018 BEFF0000 		movl	$255, %esi
 1063      00
 1064              	.LVL123:
 1065              		.loc 1 82 0
 1066 001d 4883EC18 		subq	$24, %rsp
 1067              		.cfi_def_cfa_offset 80
 1068              		.loc 1 82 0
 1069 0021 4189D5   		movl	%edx, %r13d
 1070 0024 F30F1144 		movss	%xmm0, 8(%rsp)
 1070      2408
 1071              		.loc 1 83 0
 1072 002a 0F28C1   		movaps	%xmm1, %xmm0
 1073              	.LVL124:
 1074              		.loc 1 82 0
 1075 002d 44894C24 		movl	%r9d, 12(%rsp)
 1075      0C
 1076              		.loc 1 83 0
 1077 0032 E8000000 		call	_Z16fl_color_averagejjf
 1077      00
 1078              	.LVL125:
 1079              	.LBB132:
 1080              	.LBB133:
 1081              		.loc 3 994 0
 1082 0037 89DF     		movl	%ebx, %edi
 1083 0039 F30F1005 		movss	.LC11(%rip), %xmm0
 1083      00000000 
 1084 0041 BE380000 		movl	$56, %esi
 1084      00
 1085              	.LBE133:
 1086              	.LBE132:
 1087              		.loc 1 83 0
 1088 0046 4189C7   		movl	%eax, %r15d
 1089              	.LVL126:
 1090              	.LBB135:
 1091              	.LBB134:
 1092              		.loc 3 994 0
 1093 0049 E8000000 		call	_Z16fl_color_averagejjf
 1093      00
 1094              	.LVL127:
 1095              	.LBE134:
 1096              	.LBE135:
 1097              		.loc 1 83 0
 1098 004e F30F1054 		movss	8(%rsp), %xmm2
 1098      2408
 1099 0054 BE380000 		movl	$56, %esi
 1099      00
 1100 0059 0F28C2   		movaps	%xmm2, %xmm0
 1101 005c 89C7     		movl	%eax, %edi
 1102 005e E8000000 		call	_Z16fl_color_averagejjf
 1102      00
 1103              	.LVL128:
 1104 0063 4883EC08 		subq	$8, %rsp
 1105              		.cfi_def_cfa_offset 88
 1106 0067 4489F1   		movl	%r14d, %ecx
 1107 006a 4489EA   		movl	%r13d, %edx
 1108 006d 448B4C24 		movl	20(%rsp), %r9d
 1108      14
 1109 0072 4489E6   		movl	%r12d, %esi
 1110 0075 89EF     		movl	%ebp, %edi
 1111 0077 4189C0   		movl	%eax, %r8d
 1112 007a 4151     		pushq	%r9
 1113              		.cfi_def_cfa_offset 96
 1114 007c 4589F9   		movl	%r15d, %r9d
 1115 007f E8000000 		call	_ZL10frame_rectiiiijjj
 1115      00
 1116              	.LVL129:
 1117              		.loc 1 84 0
 1118 0084 4883C428 		addq	$40, %rsp
 1119              		.cfi_def_cfa_offset 56
 1120 0088 5B       		popq	%rbx
 1121              		.cfi_def_cfa_offset 48
 1122              	.LVL130:
 1123 0089 5D       		popq	%rbp
 1124              		.cfi_def_cfa_offset 40
 1125              	.LVL131:
 1126 008a 415C     		popq	%r12
 1127              		.cfi_def_cfa_offset 32
 1128              	.LVL132:
 1129 008c 415D     		popq	%r13
 1130              		.cfi_def_cfa_offset 24
 1131              	.LVL133:
 1132 008e 415E     		popq	%r14
 1133              		.cfi_def_cfa_offset 16
 1134              	.LVL134:
 1135 0090 415F     		popq	%r15
 1136              		.cfi_def_cfa_offset 8
 1137 0092 C3       		ret
 1138              		.cfi_endproc
 1139              	.LFE473:
 1141              		.section	.text.unlikely._ZL13frame_rect_upiiiijjff
 1142              	.LCOLDE18:
 1143              		.section	.text._ZL13frame_rect_upiiiijjff
 1144              	.LHOTE18:
 1145              		.section	.text.unlikely._ZL11thin_up_boxiiiij,"ax",@progbits
 1146              	.LCOLDB20:
 1147              		.section	.text._ZL11thin_up_boxiiiij,"ax",@progbits
 1148              	.LHOTB20:
 1149              		.p2align 4,,15
 1151              	_ZL11thin_up_boxiiiij:
 1152              	.LFB477:
 1153              		.loc 1 99 0
 1154              		.cfi_startproc
 1155              	.LVL135:
 1156 0000 4156     		pushq	%r14
 1157              		.cfi_def_cfa_offset 16
 1158              		.cfi_offset 14, -16
 1159 0002 4189F6   		movl	%esi, %r14d
 1160 0005 4155     		pushq	%r13
 1161              		.cfi_def_cfa_offset 24
 1162              		.cfi_offset 13, -24
 1163              	.LBB136:
 1164              	.LBB137:
 1165              		.loc 1 61 0
 1166 0007 8D7601   		leal	1(%rsi), %esi
 1167              	.LVL136:
 1168              	.LBE137:
 1169              	.LBE136:
 1170              		.loc 1 99 0
 1171 000a 4154     		pushq	%r12
 1172              		.cfi_def_cfa_offset 32
 1173              		.cfi_offset 12, -32
 1174 000c 4189FD   		movl	%edi, %r13d
 1175 000f 55       		pushq	%rbp
 1176              		.cfi_def_cfa_offset 40
 1177              		.cfi_offset 6, -40
 1178              	.LBB141:
 1179              	.LBB138:
 1180              		.loc 1 61 0
 1181 0010 8D7F02   		leal	2(%rdi), %edi
 1182              	.LVL137:
 1183              	.LBE138:
 1184              	.LBE141:
 1185              		.loc 1 99 0
 1186 0013 53       		pushq	%rbx
 1187              		.cfi_def_cfa_offset 48
 1188              		.cfi_offset 3, -48
 1189              		.loc 1 99 0
 1190 0014 89CD     		movl	%ecx, %ebp
 1191 0016 89D3     		movl	%edx, %ebx
 1192              	.LBB142:
 1193              	.LBB139:
 1194              		.loc 1 61 0
 1195 0018 8D49FD   		leal	-3(%rcx), %ecx
 1196              	.LVL138:
 1197 001b 8D52FB   		leal	-5(%rdx), %edx
 1198              	.LVL139:
 1199              	.LBE139:
 1200              	.LBE142:
 1201              		.loc 1 99 0
 1202 001e 4589C4   		movl	%r8d, %r12d
 1203              	.LBB143:
 1204              	.LBB140:
 1205              		.loc 1 61 0
 1206 0021 41B9FF00 		movl	$255, %r9d
 1206      0000
 1207 0027 F30F1005 		movss	.LC13(%rip), %xmm0
 1207      00000000 
 1208 002f E8000000 		call	_ZL21shade_rect_top_bottomiiiijjf
 1208      00
 1209              	.LVL140:
 1210              	.LBE140:
 1211              	.LBE143:
 1212              		.loc 1 101 0
 1213 0034 4489E7   		movl	%r12d, %edi
 1214 0037 F30F1005 		movss	.LC8(%rip), %xmm0
 1214      00000000 
 1215 003f BEFF0000 		movl	$255, %esi
 1215      00
 1216 0044 E8000000 		call	_Z16fl_color_averagejjf
 1216      00
 1217              	.LVL141:
 1218 0049 8D4DFF   		leal	-1(%rbp), %ecx
 1219 004c 8D53FF   		leal	-1(%rbx), %edx
 1220 004f 4589E0   		movl	%r12d, %r8d
 1221              		.loc 1 102 0
 1222 0052 5B       		popq	%rbx
 1223              		.cfi_def_cfa_offset 40
 1224              	.LVL142:
 1225              		.loc 1 101 0
 1226 0053 4489F6   		movl	%r14d, %esi
 1227 0056 4489EF   		movl	%r13d, %edi
 1228 0059 4189C1   		movl	%eax, %r9d
 1229              		.loc 1 102 0
 1230 005c 5D       		popq	%rbp
 1231              		.cfi_def_cfa_offset 32
 1232              	.LVL143:
 1233 005d 415C     		popq	%r12
 1234              		.cfi_def_cfa_offset 24
 1235              	.LVL144:
 1236 005f 415D     		popq	%r13
 1237              		.cfi_def_cfa_offset 16
 1238              	.LVL145:
 1239 0061 415E     		popq	%r14
 1240              		.cfi_def_cfa_offset 8
 1241              	.LVL146:
 1242              		.loc 1 101 0
 1243 0063 F30F100D 		movss	.LC19(%rip), %xmm1
 1243      00000000 
 1244 006b F30F1005 		movss	.LC13(%rip), %xmm0
 1244      00000000 
 1245 0073 E9000000 		jmp	_ZL13frame_rect_upiiiijjff
 1245      00
 1246              	.LVL147:
 1247              		.cfi_endproc
 1248              	.LFE477:
 1250              		.section	.text.unlikely._ZL11thin_up_boxiiiij
 1251              	.LCOLDE20:
 1252              		.section	.text._ZL11thin_up_boxiiiij
 1253              	.LHOTE20:
 1254              		.section	.text.unlikely._ZL8up_frameiiiij,"ax",@progbits
 1255              	.LCOLDB22:
 1256              		.section	.text._ZL8up_frameiiiij,"ax",@progbits
 1257              	.LHOTB22:
 1258              		.p2align 4,,15
 1260              	_ZL8up_frameiiiij:
 1261              	.LFB475:
 1262              		.loc 1 90 0
 1263              		.cfi_startproc
 1264              	.LVL148:
 1265 0000 4155     		pushq	%r13
 1266              		.cfi_def_cfa_offset 16
 1267              		.cfi_offset 13, -16
 1268 0002 4154     		pushq	%r12
 1269              		.cfi_def_cfa_offset 24
 1270              		.cfi_offset 12, -24
 1271 0004 4189F5   		movl	%esi, %r13d
 1272 0007 55       		pushq	%rbp
 1273              		.cfi_def_cfa_offset 32
 1274              		.cfi_offset 6, -32
 1275 0008 53       		pushq	%rbx
 1276              		.cfi_def_cfa_offset 40
 1277              		.cfi_offset 3, -40
 1278 0009 4189FC   		movl	%edi, %r12d
 1279              		.loc 1 91 0
 1280 000c BEFF0000 		movl	$255, %esi
 1280      00
 1281              	.LVL149:
 1282 0011 4489C7   		movl	%r8d, %edi
 1283              	.LVL150:
 1284              		.loc 1 90 0
 1285 0014 89D3     		movl	%edx, %ebx
 1286 0016 4883EC18 		subq	$24, %rsp
 1287              		.cfi_def_cfa_offset 64
 1288              		.loc 1 90 0
 1289 001a 89CD     		movl	%ecx, %ebp
 1290              		.loc 1 91 0
 1291 001c F30F1005 		movss	.LC13(%rip), %xmm0
 1291      00000000 
 1292 0024 44894424 		movl	%r8d, 12(%rsp)
 1292      0C
 1293 0029 E8000000 		call	_Z16fl_color_averagejjf
 1293      00
 1294              	.LVL151:
 1295 002e F30F100D 		movss	.LC16(%rip), %xmm1
 1295      00000000 
 1296 0036 448B4424 		movl	12(%rsp), %r8d
 1296      0C
 1297 003b F30F1005 		movss	.LC21(%rip), %xmm0
 1297      00000000 
 1298              		.loc 1 92 0
 1299 0043 4883C418 		addq	$24, %rsp
 1300              		.cfi_def_cfa_offset 40
 1301              		.loc 1 91 0
 1302 0047 8D4DFF   		leal	-1(%rbp), %ecx
 1303 004a 8D53FF   		leal	-1(%rbx), %edx
 1304 004d 4489EE   		movl	%r13d, %esi
 1305              		.loc 1 92 0
 1306 0050 5B       		popq	%rbx
 1307              		.cfi_def_cfa_offset 32
 1308              	.LVL152:
 1309              		.loc 1 91 0
 1310 0051 4489E7   		movl	%r12d, %edi
 1311 0054 4189C1   		movl	%eax, %r9d
 1312              		.loc 1 92 0
 1313 0057 5D       		popq	%rbp
 1314              		.cfi_def_cfa_offset 24
 1315              	.LVL153:
 1316 0058 415C     		popq	%r12
 1317              		.cfi_def_cfa_offset 16
 1318              	.LVL154:
 1319 005a 415D     		popq	%r13
 1320              		.cfi_def_cfa_offset 8
 1321              	.LVL155:
 1322              		.loc 1 91 0
 1323 005c E9000000 		jmp	_ZL13frame_rect_upiiiijjff
 1323      00
 1324              	.LVL156:
 1325              		.cfi_endproc
 1326              	.LFE475:
 1328              		.section	.text.unlikely._ZL8up_frameiiiij
 1329              	.LCOLDE22:
 1330              		.section	.text._ZL8up_frameiiiij
 1331              	.LHOTE22:
 1332              		.section	.text.unlikely._ZL6up_boxiiiij,"ax",@progbits
 1333              	.LCOLDB23:
 1334              		.section	.text._ZL6up_boxiiiij,"ax",@progbits
 1335              	.LHOTB23:
 1336              		.p2align 4,,15
 1338              	_ZL6up_boxiiiij:
 1339              	.LFB476:
 1340              		.loc 1 94 0
 1341              		.cfi_startproc
 1342              	.LVL157:
 1343 0000 4156     		pushq	%r14
 1344              		.cfi_def_cfa_offset 16
 1345              		.cfi_offset 14, -16
 1346 0002 4189F6   		movl	%esi, %r14d
 1347 0005 4155     		pushq	%r13
 1348              		.cfi_def_cfa_offset 24
 1349              		.cfi_offset 13, -24
 1350              	.LBB144:
 1351              	.LBB145:
 1352              		.loc 1 61 0
 1353 0007 8D7601   		leal	1(%rsi), %esi
 1354              	.LVL158:
 1355              	.LBE145:
 1356              	.LBE144:
 1357              		.loc 1 94 0
 1358 000a 4154     		pushq	%r12
 1359              		.cfi_def_cfa_offset 32
 1360              		.cfi_offset 12, -32
 1361 000c 4189FD   		movl	%edi, %r13d
 1362 000f 55       		pushq	%rbp
 1363              		.cfi_def_cfa_offset 40
 1364              		.cfi_offset 6, -40
 1365              	.LBB149:
 1366              	.LBB146:
 1367              		.loc 1 61 0
 1368 0010 8D7F02   		leal	2(%rdi), %edi
 1369              	.LVL159:
 1370              	.LBE146:
 1371              	.LBE149:
 1372              		.loc 1 94 0
 1373 0013 53       		pushq	%rbx
 1374              		.cfi_def_cfa_offset 48
 1375              		.cfi_offset 3, -48
 1376              		.loc 1 94 0
 1377 0014 89CD     		movl	%ecx, %ebp
 1378 0016 89D3     		movl	%edx, %ebx
 1379              	.LBB150:
 1380              	.LBB147:
 1381              		.loc 1 61 0
 1382 0018 8D49FD   		leal	-3(%rcx), %ecx
 1383              	.LVL160:
 1384 001b 8D52FB   		leal	-5(%rdx), %edx
 1385              	.LVL161:
 1386              	.LBE147:
 1387              	.LBE150:
 1388              		.loc 1 94 0
 1389 001e 4589C4   		movl	%r8d, %r12d
 1390              	.LBB151:
 1391              	.LBB148:
 1392              		.loc 1 61 0
 1393 0021 41B9FF00 		movl	$255, %r9d
 1393      0000
 1394 0027 F30F1005 		movss	.LC19(%rip), %xmm0
 1394      00000000 
 1395 002f E8000000 		call	_ZL21shade_rect_top_bottomiiiijjf
 1395      00
 1396              	.LVL162:
 1397              	.LBE148:
 1398              	.LBE151:
 1399              		.loc 1 96 0
 1400 0034 4489E7   		movl	%r12d, %edi
 1401 0037 F30F1005 		movss	.LC16(%rip), %xmm0
 1401      00000000 
 1402 003f BEFF0000 		movl	$255, %esi
 1402      00
 1403 0044 E8000000 		call	_Z16fl_color_averagejjf
 1403      00
 1404              	.LVL163:
 1405 0049 8D4DFF   		leal	-1(%rbp), %ecx
 1406 004c 8D53FF   		leal	-1(%rbx), %edx
 1407 004f 4589E0   		movl	%r12d, %r8d
 1408              		.loc 1 97 0
 1409 0052 5B       		popq	%rbx
 1410              		.cfi_def_cfa_offset 40
 1411              	.LVL164:
 1412              		.loc 1 96 0
 1413 0053 4489F6   		movl	%r14d, %esi
 1414 0056 4489EF   		movl	%r13d, %edi
 1415 0059 4189C1   		movl	%eax, %r9d
 1416              		.loc 1 97 0
 1417 005c 5D       		popq	%rbp
 1418              		.cfi_def_cfa_offset 32
 1419              	.LVL165:
 1420 005d 415C     		popq	%r12
 1421              		.cfi_def_cfa_offset 24
 1422              	.LVL166:
 1423 005f 415D     		popq	%r13
 1424              		.cfi_def_cfa_offset 16
 1425              	.LVL167:
 1426 0061 415E     		popq	%r14
 1427              		.cfi_def_cfa_offset 8
 1428              	.LVL168:
 1429              		.loc 1 96 0
 1430 0063 F30F100D 		movss	.LC16(%rip), %xmm1
 1430      00000000 
 1431 006b F30F1005 		movss	.LC19(%rip), %xmm0
 1431      00000000 
 1432 0073 E9000000 		jmp	_ZL13frame_rect_upiiiijjff
 1432      00
 1433              	.LVL169:
 1434              		.cfi_endproc
 1435              	.LFE476:
 1437              		.section	.text.unlikely._ZL6up_boxiiiij
 1438              	.LCOLDE23:
 1439              		.section	.text._ZL6up_boxiiiij
 1440              	.LHOTE23:
 1441              		.section	.text.unlikely._Z25fl_define_FL_GLEAM_UP_BOXv,"ax",@progbits
 1442              	.LCOLDB24:
 1443              		.section	.text._Z25fl_define_FL_GLEAM_UP_BOXv,"ax",@progbits
 1444              	.LHOTB24:
 1445              		.p2align 4,,15
 1446              		.globl	_Z25fl_define_FL_GLEAM_UP_BOXv
 1448              	_Z25fl_define_FL_GLEAM_UP_BOXv:
 1449              	.LFB481:
 1450              		.loc 1 120 0
 1451              		.cfi_startproc
 1452 0000 4883EC08 		subq	$8, %rsp
 1453              		.cfi_def_cfa_offset 16
 1454              		.loc 1 121 0
 1455 0004 BE000000 		movl	$_ZL6up_boxiiiij, %esi
 1455      00
 1456 0009 BF300000 		movl	$48, %edi
 1456      00
 1457 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1457      00
 1458              	.LVL170:
 1459              		.loc 1 122 0
 1460 0013 BE000000 		movl	$_ZL8down_boxiiiij, %esi
 1460      00
 1461 0018 BF310000 		movl	$49, %edi
 1461      00
 1462 001d E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1462      00
 1463              	.LVL171:
 1464              		.loc 1 123 0
 1465 0022 BE000000 		movl	$_ZL8up_frameiiiij, %esi
 1465      00
 1466 0027 BF320000 		movl	$50, %edi
 1466      00
 1467 002c E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1467      00
 1468              	.LVL172:
 1469              		.loc 1 124 0
 1470 0031 BE000000 		movl	$_ZL10down_frameiiiij, %esi
 1470      00
 1471 0036 BF330000 		movl	$51, %edi
 1471      00
 1472 003b E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1472      00
 1473              	.LVL173:
 1474              		.loc 1 125 0
 1475 0040 BE000000 		movl	$_ZL11thin_up_boxiiiij, %esi
 1475      00
 1476 0045 BF340000 		movl	$52, %edi
 1476      00
 1477 004a E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1477      00
 1478              	.LVL174:
 1479              		.loc 1 126 0
 1480 004f BE000000 		movl	$_ZL13thin_down_boxiiiij, %esi
 1480      00
 1481 0054 BF350000 		movl	$53, %edi
 1481      00
 1482 0059 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1482      00
 1483              	.LVL175:
 1484              		.loc 1 127 0
 1485 005e BE000000 		movl	$_ZL6up_boxiiiij, %esi
 1485      00
 1486 0063 BF360000 		movl	$54, %edi
 1486      00
 1487 0068 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1487      00
 1488              	.LVL176:
 1489              		.loc 1 128 0
 1490 006d BE000000 		movl	$_ZL8down_boxiiiij, %esi
 1490      00
 1491 0072 BF370000 		movl	$55, %edi
 1491      00
 1492 0077 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 1492      00
 1493              	.LVL177:
 1494              		.loc 1 130 0
 1495 007c B8300000 		movl	$48, %eax
 1495      00
 1496 0081 4883C408 		addq	$8, %rsp
 1497              		.cfi_def_cfa_offset 8
 1498 0085 C3       		ret
 1499              		.cfi_endproc
 1500              	.LFE481:
 1502              		.section	.text.unlikely._Z25fl_define_FL_GLEAM_UP_BOXv
 1503              	.LCOLDE24:
 1504              		.section	.text._Z25fl_define_FL_GLEAM_UP_BOXv
 1505              	.LHOTE24:
 1506              		.section	.rodata.cst4,"aM",@progbits,4
 1507              		.align 4
 1508              	.LC0:
 1509 0000 0000803F 		.long	1065353216
 1510              		.align 4
 1511              	.LC1:
 1512 0004 5F984C3D 		.long	1028429919
 1513              		.align 4
 1514              	.LC2:
 1515 0008 77BE7F3F 		.long	1065336439
 1516              		.align 4
 1517              	.LC7:
 1518 000c 9A99593F 		.long	1062836634
 1519              		.align 4
 1520              	.LC8:
 1521 0010 6666E63E 		.long	1055286886
 1522              		.align 4
 1523              	.LC9:
 1524 0014 3333B33E 		.long	1051931443
 1525              		.align 4
 1526              	.LC11:
 1527 0018 1F852B3F 		.long	1059816735
 1528              		.align 4
 1529              	.LC12:
 1530 001c 3333733F 		.long	1064514355
 1531              		.align 4
 1532              	.LC13:
 1533 0020 0000803E 		.long	1048576000
 1534              		.align 4
 1535              	.LC15:
 1536 0024 6666263F 		.long	1059481190
 1537              		.align 4
 1538              	.LC16:
 1539 0028 CDCC4C3D 		.long	1028443341
 1540              		.align 4
 1541              	.LC19:
 1542 002c 9A99193E 		.long	1041865114
 1543              		.align 4
 1544              	.LC21:
 1545 0030 CDCC0C3F 		.long	1057803469
 1546              		.text
 1547              	.Letext0:
 1548              		.section	.text.unlikely._ZL21shade_rect_top_bottomiiiijjf
 1549              	.Letext_cold0:
 1550              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 1551              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1552              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1553              		.file 7 "/usr/include/libio.h"
 1554              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 1555              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 1556              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 1557              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 1558              		.file 12 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_gleam.cxx
     /tmp/ccdBEFkb.s:13     .text._ZL21shade_rect_top_bottomiiiijjf:0000000000000000 _ZL21shade_rect_top_bottomiiiijjf
     /tmp/ccdBEFkb.s:333    .text._ZL10frame_rectiiiijjj:0000000000000000 _ZL10frame_rectiiiijjj
     /tmp/ccdBEFkb.s:589    .text._ZL15frame_rect_downiiiijjff:0000000000000000 _ZL15frame_rect_downiiiijjff
     /tmp/ccdBEFkb.s:691    .text._ZL13thin_down_boxiiiij:0000000000000000 _ZL13thin_down_boxiiiij
     /tmp/ccdBEFkb.s:800    .text._ZL10down_frameiiiij:0000000000000000 _ZL10down_frameiiiij
     /tmp/ccdBEFkb.s:924    .text._ZL8down_boxiiiij:0000000000000000 _ZL8down_boxiiiij
     /tmp/ccdBEFkb.s:1033   .text._ZL13frame_rect_upiiiijjff:0000000000000000 _ZL13frame_rect_upiiiijjff
     /tmp/ccdBEFkb.s:1151   .text._ZL11thin_up_boxiiiij:0000000000000000 _ZL11thin_up_boxiiiij
     /tmp/ccdBEFkb.s:1260   .text._ZL8up_frameiiiij:0000000000000000 _ZL8up_frameiiiij
     /tmp/ccdBEFkb.s:1338   .text._ZL6up_boxiiiij:0000000000000000 _ZL6up_boxiiiij
     /tmp/ccdBEFkb.s:1448   .text._Z25fl_define_FL_GLEAM_UP_BOXv:0000000000000000 _Z25fl_define_FL_GLEAM_UP_BOXv
     /tmp/ccdBEFkb.s:1508   .rodata.cst4:0000000000000000 .LC0
     /tmp/ccdBEFkb.s:1511   .rodata.cst4:0000000000000004 .LC1
     /tmp/ccdBEFkb.s:1514   .rodata.cst4:0000000000000008 .LC2
     /tmp/ccdBEFkb.s:1517   .rodata.cst4:000000000000000c .LC7
     /tmp/ccdBEFkb.s:1520   .rodata.cst4:0000000000000010 .LC8
     /tmp/ccdBEFkb.s:1523   .rodata.cst4:0000000000000014 .LC9
     /tmp/ccdBEFkb.s:1526   .rodata.cst4:0000000000000018 .LC11
     /tmp/ccdBEFkb.s:1529   .rodata.cst4:000000000000001c .LC12
     /tmp/ccdBEFkb.s:1532   .rodata.cst4:0000000000000020 .LC13
     /tmp/ccdBEFkb.s:1535   .rodata.cst4:0000000000000024 .LC15
     /tmp/ccdBEFkb.s:1538   .rodata.cst4:0000000000000028 .LC16
     /tmp/ccdBEFkb.s:1541   .rodata.cst4:000000000000002c .LC19
     /tmp/ccdBEFkb.s:1544   .rodata.cst4:0000000000000030 .LC21
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
_Z16fl_color_averagejjf
_ZN2Fl13set_box_colorEj
fl_graphics_driver
_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
