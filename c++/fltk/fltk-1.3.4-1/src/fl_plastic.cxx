   1              		.file	"fl_plastic.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL11shade_roundiiiiPKcj,"ax",@progbits
   5              	.LCOLDB11:
   6              		.section	.text._ZL11shade_roundiiiiPKcj,"ax",@progbits
   7              	.LHOTB11:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL11shade_roundiiiiPKcj
  10              	.Ltext_cold0:
  11              		.section	.text._ZL11shade_roundiiiiPKcj
  13              	_ZL11shade_roundiiiiPKcj:
  14              	.LFB486:
  15              		.file 1 "fltk-1.3.4-1/src/fl_plastic.cxx"
   1:fltk-1.3.4-1/src/fl_plastic.cxx **** ...
  16              		.loc 1 219 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4157     		pushq	%r15
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 15, -16
  22 0002 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 14, -24
  25 0004 4D89C7   		movq	%r8, %r15
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
  39 0010 89CB     		movl	%ecx, %ebx
  40 0012 4881EC98 		subq	$152, %rsp
  40      000000
  41              		.cfi_def_cfa_offset 208
  42              		.loc 1 219 0
  43 0019 89942488 		movl	%edx, 136(%rsp)
  43      000000
  44 0020 898C248C 		movl	%ecx, 140(%rsp)
  44      000000
  45 0027 897C241C 		movl	%edi, 28(%rsp)
  46 002b 89742420 		movl	%esi, 32(%rsp)
  47 002f 4C894424 		movq	%r8, 8(%rsp)
  47      08
  48 0034 44894C24 		movl	%r9d, 24(%rsp)
  48      18
  49              		.loc 1 220 0
  50 0039 E8000000 		call	_Z12fl_gray_rampv
  50      00
  51              	.LVL1:
  52              		.loc 1 222 0
  53 003e 4C89FF   		movq	%r15, %rdi
  54              		.loc 1 220 0
  55 0041 4989C4   		movq	%rax, %r12
  56              	.LVL2:
  57              		.loc 1 222 0
  58 0044 E8000000 		call	strlen
  58      00
  59              	.LVL3:
  60 0049 83E801   		subl	$1, %eax
  61              	.LVL4:
  62              		.loc 1 223 0
  63 004c 89C1     		movl	%eax, %ecx
  64 004e C1E91F   		shrl	$31, %ecx
  65 0051 89CA     		movl	%ecx, %edx
  66 0053 01C2     		addl	%eax, %edx
  67 0055 89D1     		movl	%edx, %ecx
  68 0057 D1F9     		sarl	%ecx
  69              	.LBB431:
  70              		.loc 1 225 0
  71 0059 4139DE   		cmpl	%ebx, %r14d
  72              	.LBE431:
  73              		.loc 1 223 0
  74 005c 894C2424 		movl	%ecx, 36(%rsp)
  75              	.LVL5:
  76              	.LBB577:
  77              		.loc 1 225 0
  78 0060 0F8E4204 		jle	.L2
  78      0000
  79              	.LBB432:
  80              		.loc 1 226 0
  81 0066 89DA     		movl	%ebx, %edx
  82 0068 89CE     		movl	%ecx, %esi
  83 006a C1EA1F   		shrl	$31, %edx
  84 006d 01DA     		addl	%ebx, %edx
  85 006f D1FA     		sarl	%edx
  86              		.loc 1 228 0
  87 0071 85F6     		testl	%esi, %esi
  88              		.loc 1 226 0
  89 0073 89D3     		movl	%edx, %ebx
  90              	.LVL6:
  91 0075 89942484 		movl	%edx, 132(%rsp)
  91      000000
  92              	.LVL7:
  93              		.loc 1 228 0
  94 007c 0F8EAB08 		jle	.L16
  94      0000
  95 0082 8B8C2488 		movl	136(%rsp), %ecx
  95      000000
  96              	.LVL8:
  97 0089 034C241C 		addl	28(%rsp), %ecx
  98 008d 4863E8   		movslq	%eax, %rbp
  99 0090 F20F1035 		movsd	.LC1(%rip), %xmm6
  99      00000000 
 100 0098 8B442420 		movl	32(%rsp), %eax
 101              	.LVL9:
 102 009c F20F103D 		movsd	.LC2(%rip), %xmm7
 102      00000000 
 103 00a4 48036C24 		addq	8(%rsp), %rbp
 103      08
 104              	.LVL10:
 105 00a9 F20F1174 		movsd	%xmm6, 56(%rsp)
 105      2438
 106 00af 4189CE   		movl	%ecx, %r14d
 107 00b2 F20F1035 		movsd	.LC3(%rip), %xmm6
 107      00000000 
 108 00ba 894C2460 		movl	%ecx, 96(%rsp)
 109 00be F20F117C 		movsd	%xmm7, 40(%rsp)
 109      2428
 110 00c4 8B8C248C 		movl	140(%rsp), %ecx
 110      000000
 111 00cb F20F103D 		movsd	.LC4(%rip), %xmm7
 111      00000000 
 112 00d3 F20F1174 		movsd	%xmm6, 64(%rsp)
 112      2440
 113 00d9 48896C24 		movq	%rbp, 16(%rsp)
 113      10
 114 00de 31ED     		xorl	%ebp, %ebp
 115 00e0 F20F117C 		movsd	%xmm7, 72(%rsp)
 115      2448
 116 00e6 F20F1035 		movsd	.LC6(%rip), %xmm6
 116      00000000 
 117 00ee 8D4408FF 		leal	-1(%rax,%rcx), %eax
 118 00f2 4129CE   		subl	%ecx, %r14d
 119 00f5 F20F103D 		movsd	.LC7(%rip), %xmm7
 119      00000000 
 120 00fd 89CB     		movl	%ecx, %ebx
 121 00ff F20F1174 		movsd	%xmm6, 48(%rsp)
 121      2430
 122 0105 89442458 		movl	%eax, 88(%rsp)
 123 0109 F20F117C 		movsd	%xmm7, 80(%rsp)
 123      2450
 124              	.LVL11:
 125 010f 90       		.p2align 4,,10
 126              		.p2align 3
 127              	.L4:
 128 0110 8B442420 		movl	32(%rsp), %eax
 129 0114 448B9424 		movl	132(%rsp), %r10d
 129      84000000 
 130              	.LBB433:
 131              	.LBB434:
 132              		.loc 1 42 0 discriminator 2
 133 011c 8B742418 		movl	24(%rsp), %esi
 134 0120 F30F1005 		movss	.LC0(%rip), %xmm0
 134      00000000 
 135 0128 448D2C28 		leal	(%rax,%rbp), %r13d
 136 012c 8B44241C 		movl	28(%rsp), %eax
 137 0130 4129EA   		subl	%ebp, %r10d
 138 0133 44895424 		movl	%r10d, 104(%rsp)
 138      68
 139 0138 448D3C28 		leal	(%rax,%rbp), %r15d
 140              	.LVL12:
 141              	.LBE434:
 142              	.LBE433:
 143              		.loc 1 230 0 discriminator 2
 144 013c 488B4424 		movq	8(%rsp), %rax
 144      08
 145              	.LVL13:
 146 0141 480FBE04 		movsbq	(%rax,%rbp), %rax
 146      28
 147              	.LBB436:
 148              	.LBB435:
 149              		.loc 1 42 0 discriminator 2
 150 0146 410FB63C 		movzbl	(%r12,%rax), %edi
 150      04
 151 014b E8000000 		call	_Z16fl_color_averagejjf
 151      00
 152              	.LVL14:
 153              	.LBE435:
 154              	.LBE436:
 155              	.LBB437:
 156              	.LBB438:
 157              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
 158              		.loc 2 52 0 discriminator 2
 159 0150 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 159      000000
 160 0157 89C6     		movl	%eax, %esi
 161 0159 488B17   		movq	(%rdi), %rdx
 162 015c FF928800 		call	*136(%rdx)
 162      0000
 163              	.LVL15:
 164              	.LBE438:
 165              	.LBE437:
 166              		.loc 1 231 0 discriminator 2
 167 0162 660FEFED 		pxor	%xmm5, %xmm5
 168 0166 8D04ED00 		leal	0(,%rbp,8), %eax
 168      000000
 169              	.LBB439:
 170              	.LBB440:
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
 171              		.loc 2 317 0 discriminator 2
 172 016d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 172      000000
 173              	.LBE440:
 174              	.LBE439:
 175              		.loc 1 231 0 discriminator 2
 176 0174 F20F105C 		movsd	56(%rsp), %xmm3
 176      2438
 177              	.LBB444:
 178              	.LBB441:
 179              		.loc 2 317 0 discriminator 2
 180 017a 4189D8   		movl	%ebx, %r8d
 181 017d F20F1044 		movsd	40(%rsp), %xmm0
 181      2428
 182              	.LBE441:
 183              	.LBE444:
 184              		.loc 1 231 0 discriminator 2
 185 0183 F20F2AE8 		cvtsi2sd	%eax, %xmm5
 186              	.LBB445:
 187              	.LBB442:
 188              		.loc 2 317 0 discriminator 2
 189 0187 89D9     		movl	%ebx, %ecx
 190 0189 488B07   		movq	(%rdi), %rax
 191 018c 4489EA   		movl	%r13d, %edx
 192 018f 4489FE   		movl	%r15d, %esi
 193              	.LBE442:
 194              	.LBE445:
 195              		.loc 1 231 0 discriminator 2
 196 0192 F20F58DD 		addsd	%xmm5, %xmm3
 197              	.LVL16:
 198 0196 F20F112C 		movsd	%xmm5, (%rsp)
 198      24
 199              	.LBB446:
 200              	.LBB443:
 201              		.loc 2 317 0 discriminator 2
 202 019b 660F28CB 		movapd	%xmm3, %xmm1
 203 019f F20F115C 		movsd	%xmm3, 120(%rsp)
 203      2478
 204 01a5 FF900801 		call	*264(%rax)
 204      0000
 205              	.LVL17:
 206              	.LBE443:
 207              	.LBE446:
 208              	.LBB447:
 209              	.LBB448:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 210              		.loc 2 255 0 discriminator 2
 211 01ab 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 211      000000
 212 01b2 4489EA   		movl	%r13d, %edx
 213              	.LBE448:
 214              	.LBE447:
 215              		.loc 1 232 0 discriminator 2
 216 01b5 448B5424 		movl	104(%rsp), %r10d
 216      68
 217 01ba 448B5C24 		movl	96(%rsp), %r11d
 217      60
 218              	.LBB451:
 219              	.LBB449:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 220              		.loc 2 255 0 discriminator 2
 221 01bf 488B07   		movq	(%rdi), %rax
 222              	.LBE449:
 223              	.LBE451:
 224              		.loc 1 232 0 discriminator 2
 225 01c2 4529D3   		subl	%r10d, %r11d
 226 01c5 4501FA   		addl	%r15d, %r10d
 227              	.LVL18:
 228              	.LBB452:
 229              	.LBB450:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 230              		.loc 2 255 0 discriminator 2
 231 01c8 4489D9   		movl	%r11d, %ecx
 232 01cb 4489D6   		movl	%r10d, %esi
 233 01ce 44895C24 		movl	%r11d, 112(%rsp)
 233      70
 234 01d3 44899424 		movl	%r10d, 128(%rsp)
 234      80000000 
 235 01db FF5030   		call	*48(%rax)
 236              	.LVL19:
 237              	.LBE450:
 238              	.LBE452:
 239              	.LBB453:
 240              	.LBB454:
 241              		.loc 2 317 0 discriminator 2
 242 01de 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 242      000000
 243 01e5 F20F1004 		movsd	(%rsp), %xmm0
 243      24
 244 01ea 4189D8   		movl	%ebx, %r8d
 245 01ed 89D9     		movl	%ebx, %ecx
 246 01ef 4489EA   		movl	%r13d, %edx
 247 01f2 F20F5844 		addsd	64(%rsp), %xmm0
 247      2440
 248 01f8 F20F104C 		movsd	40(%rsp), %xmm1
 248      2428
 249 01fe 488B07   		movq	(%rdi), %rax
 250 0201 4489F6   		movl	%r14d, %esi
 251 0204 FF900801 		call	*264(%rax)
 251      0000
 252              	.LVL20:
 253              	.LBE454:
 254              	.LBE453:
 255              		.loc 1 234 0 discriminator 2
 256 020a 488B4424 		movq	8(%rsp), %rax
 256      08
 257              	.LBB455:
 258              	.LBB456:
 259              		.loc 1 42 0 discriminator 2
 260 020f 8B742418 		movl	24(%rsp), %esi
 261 0213 F30F1005 		movss	.LC0(%rip), %xmm0
 261      00000000 
 262              	.LBE456:
 263              	.LBE455:
 264              		.loc 1 234 0 discriminator 2
 265 021b 480FBE04 		movsbq	(%rax,%rbp), %rax
 265      28
 266 0220 4883C501 		addq	$1, %rbp
 267              	.LVL21:
 268              	.LBB458:
 269              	.LBB457:
 270              		.loc 1 42 0 discriminator 2
 271 0224 410FB67C 		movzbl	-2(%r12,%rax), %edi
 271      04FE
 272 022a E8000000 		call	_Z16fl_color_averagejjf
 272      00
 273              	.LVL22:
 274              	.LBE457:
 275              	.LBE458:
 276              	.LBB459:
 277              	.LBB460:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 278              		.loc 2 52 0 discriminator 2
 279 022f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 279      000000
 280 0236 89C6     		movl	%eax, %esi
 281 0238 488B17   		movq	(%rdi), %rdx
 282 023b FF928800 		call	*136(%rdx)
 282      0000
 283              	.LVL23:
 284              	.LBE460:
 285              	.LBE459:
 286              		.loc 1 235 0 discriminator 2
 287 0241 F20F1004 		movsd	(%rsp), %xmm0
 287      24
 288              	.LBB461:
 289              	.LBB462:
 290              		.loc 2 317 0 discriminator 2
 291 0246 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 291      000000
 292              	.LBE462:
 293              	.LBE461:
 294              		.loc 1 235 0 discriminator 2
 295 024d F20F1054 		movsd	72(%rsp), %xmm2
 295      2448
 296              	.LBB465:
 297              	.LBB463:
 298              		.loc 2 317 0 discriminator 2
 299 0253 4189D8   		movl	%ebx, %r8d
 300 0256 F20F100D 		movsd	.LC5(%rip), %xmm1
 300      00000000 
 301 025e 89D9     		movl	%ebx, %ecx
 302              	.LBE463:
 303              	.LBE465:
 304              		.loc 1 235 0 discriminator 2
 305 0260 F20F58D0 		addsd	%xmm0, %xmm2
 306              	.LVL24:
 307              	.LBB466:
 308              	.LBB464:
 309              		.loc 2 317 0 discriminator 2
 310 0264 488B07   		movq	(%rdi), %rax
 311 0267 4489EA   		movl	%r13d, %edx
 312 026a F20F58C8 		addsd	%xmm0, %xmm1
 313              	.LVL25:
 314 026e 4489F6   		movl	%r14d, %esi
 315 0271 660F28C2 		movapd	%xmm2, %xmm0
 316 0275 F20F1154 		movsd	%xmm2, 104(%rsp)
 316      2468
 317              	.LVL26:
 318 027b FF900801 		call	*264(%rax)
 318      0000
 319              	.LVL27:
 320              	.LBE464:
 321              	.LBE466:
 322              		.loc 1 236 0 discriminator 2
 323 0281 488B4424 		movq	16(%rsp), %rax
 323      10
 324              	.LBB467:
 325              	.LBB468:
 326              		.loc 1 42 0 discriminator 2
 327 0286 8B742418 		movl	24(%rsp), %esi
 328 028a F30F1005 		movss	.LC0(%rip), %xmm0
 328      00000000 
 329              	.LBE468:
 330              	.LBE467:
 331              		.loc 1 236 0 discriminator 2
 332 0292 480FBE00 		movsbq	(%rax), %rax
 333              	.LBB470:
 334              	.LBB469:
 335              		.loc 1 42 0 discriminator 2
 336 0296 410FB63C 		movzbl	(%r12,%rax), %edi
 336      04
 337 029b E8000000 		call	_Z16fl_color_averagejjf
 337      00
 338              	.LVL28:
 339              	.LBE469:
 340              	.LBE470:
 341              	.LBB471:
 342              	.LBB472:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 343              		.loc 2 52 0 discriminator 2
 344 02a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 344      000000
 345 02a7 89C6     		movl	%eax, %esi
 346 02a9 488B17   		movq	(%rdi), %rdx
 347 02ac FF928800 		call	*136(%rdx)
 347      0000
 348              	.LVL29:
 349              	.LBE472:
 350              	.LBE471:
 351              	.LBB473:
 352              	.LBB474:
 353              		.loc 2 317 0 discriminator 2
 354 02b2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 354      000000
 355 02b9 F20F1054 		movsd	104(%rsp), %xmm2
 355      2468
 356 02bf 4189D8   		movl	%ebx, %r8d
 357 02c2 F20F1044 		movsd	48(%rsp), %xmm0
 357      2430
 358 02c8 660F28CA 		movapd	%xmm2, %xmm1
 359 02cc 89D9     		movl	%ebx, %ecx
 360 02ce 488B07   		movq	(%rdi), %rax
 361 02d1 4489F6   		movl	%r14d, %esi
 362 02d4 4489EA   		movl	%r13d, %edx
 363 02d7 4183C601 		addl	$1, %r14d
 364              	.LVL30:
 365 02db FF900801 		call	*264(%rax)
 365      0000
 366              	.LVL31:
 367              	.LBE474:
 368              	.LBE473:
 369              	.LBB475:
 370              	.LBB476:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 371              		.loc 2 255 0 discriminator 2
 372 02e1 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 372      000000
 373 02e8 448B5C24 		movl	112(%rsp), %r11d
 373      70
 374 02ed 448B9424 		movl	128(%rsp), %r10d
 374      80000000 
 375 02f5 8B542458 		movl	88(%rsp), %edx
 376 02f9 488B07   		movq	(%rdi), %rax
 377 02fc 4489D9   		movl	%r11d, %ecx
 378 02ff 4489D6   		movl	%r10d, %esi
 379 0302 FF5030   		call	*48(%rax)
 380              	.LVL32:
 381              	.LBE476:
 382              	.LBE475:
 383              		.loc 1 239 0 discriminator 2
 384 0305 F20F1014 		movsd	(%rsp), %xmm2
 384      24
 385              	.LBB477:
 386              	.LBB478:
 387              		.loc 2 317 0 discriminator 2
 388 030a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 388      000000
 389 0311 4189D8   		movl	%ebx, %r8d
 390 0314 89D9     		movl	%ebx, %ecx
 391 0316 4489EA   		movl	%r13d, %edx
 392              	.LBE478:
 393              	.LBE477:
 394              		.loc 1 239 0 discriminator 2
 395 0319 F20F5854 		addsd	80(%rsp), %xmm2
 395      2450
 396              	.LVL33:
 397              	.LBB480:
 398              	.LBB479:
 399              		.loc 2 317 0 discriminator 2
 400 031f F20F104C 		movsd	48(%rsp), %xmm1
 400      2430
 401 0325 488B07   		movq	(%rdi), %rax
 402 0328 4489FE   		movl	%r15d, %esi
 403 032b 660F28C2 		movapd	%xmm2, %xmm0
 404 032f F20F1114 		movsd	%xmm2, (%rsp)
 404      24
 405 0334 FF900801 		call	*264(%rax)
 405      0000
 406              	.LVL34:
 407              	.LBE479:
 408              	.LBE480:
 409              		.loc 1 240 0 discriminator 2
 410 033a 488B4424 		movq	16(%rsp), %rax
 410      10
 411              	.LBB481:
 412              	.LBB482:
 413              		.loc 1 42 0 discriminator 2
 414 033f 8B742418 		movl	24(%rsp), %esi
 415 0343 F30F1005 		movss	.LC0(%rip), %xmm0
 415      00000000 
 416              	.LBE482:
 417              	.LBE481:
 418              		.loc 1 240 0 discriminator 2
 419 034b 480FBE00 		movsbq	(%rax), %rax
 420              	.LBB484:
 421              	.LBB483:
 422              		.loc 1 42 0 discriminator 2
 423 034f 410FB67C 		movzbl	-2(%r12,%rax), %edi
 423      04FE
 424 0355 E8000000 		call	_Z16fl_color_averagejjf
 424      00
 425              	.LVL35:
 426              	.LBE483:
 427              	.LBE484:
 428              	.LBB485:
 429              	.LBB486:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 430              		.loc 2 52 0 discriminator 2
 431 035a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 431      000000
 432 0361 89C6     		movl	%eax, %esi
 433 0363 488B17   		movq	(%rdi), %rdx
 434 0366 FF928800 		call	*136(%rdx)
 434      0000
 435              	.LVL36:
 436              	.LBE486:
 437              	.LBE485:
 438              	.LBB487:
 439              	.LBB488:
 440              		.loc 2 317 0 discriminator 2
 441 036c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 441      000000
 442 0373 F20F1014 		movsd	(%rsp), %xmm2
 442      24
 443 0378 F20F105C 		movsd	120(%rsp), %xmm3
 443      2478
 444 037e 4189D8   		movl	%ebx, %r8d
 445 0381 89D9     		movl	%ebx, %ecx
 446 0383 660F28CA 		movapd	%xmm2, %xmm1
 447 0387 488B07   		movq	(%rdi), %rax
 448 038a 660F28C3 		movapd	%xmm3, %xmm0
 449 038e 4489EA   		movl	%r13d, %edx
 450 0391 4489FE   		movl	%r15d, %esi
 451              	.LBE488:
 452              	.LBE487:
 453              		.loc 1 228 0 discriminator 2
 454 0394 83EB02   		subl	$2, %ebx
 455              	.LVL37:
 456              	.LBB490:
 457              	.LBB489:
 458              		.loc 2 317 0 discriminator 2
 459 0397 FF900801 		call	*264(%rax)
 459      0000
 460              	.LVL38:
 461 039d 836C2460 		subl	$1, 96(%rsp)
 461      01
 462 03a2 48836C24 		subq	$1, 16(%rsp)
 462      1001
 463 03a8 836C2458 		subl	$1, 88(%rsp)
 463      01
 464              	.LBE489:
 465              	.LBE490:
 466              		.loc 1 228 0 discriminator 2
 467 03ad 396C2424 		cmpl	%ebp, 36(%rsp)
 468 03b1 0F8F59FD 		jg	.L4
 468      FFFF
 469 03b7 8B442424 		movl	36(%rsp), %eax
 470 03bb 8B9C2484 		movl	132(%rsp), %ebx
 470      000000
 471              	.LVL39:
 472 03c2 0144241C 		addl	%eax, 28(%rsp)
 473 03c6 01442420 		addl	%eax, 32(%rsp)
 474 03ca 29C3     		subl	%eax, %ebx
 475 03cc F7D8     		negl	%eax
 476 03ce 01C0     		addl	%eax, %eax
 477 03d0 01842488 		addl	%eax, 136(%rsp)
 477      000000
 478 03d7 0184248C 		addl	%eax, 140(%rsp)
 478      000000
 479              	.L3:
 480              	.LVL40:
 481              		.loc 1 243 0
 482 03de 48634424 		movslq	36(%rsp), %rax
 482      24
 483 03e3 488B4C24 		movq	8(%rsp), %rcx
 483      08
 484              	.LBB491:
 485              	.LBB492:
 486              		.loc 1 42 0
 487 03e8 8B742418 		movl	24(%rsp), %esi
 488 03ec F30F1005 		movss	.LC0(%rip), %xmm0
 488      00000000 
 489              	.LBE492:
 490              	.LBE491:
 491              		.loc 1 243 0
 492 03f4 480FBE04 		movsbq	(%rcx,%rax), %rax
 492      01
 493              	.LBB494:
 494              	.LBB493:
 495              		.loc 1 42 0
 496 03f9 410FB63C 		movzbl	(%r12,%rax), %edi
 496      04
 497 03fe E8000000 		call	_Z16fl_color_averagejjf
 497      00
 498              	.LVL41:
 499              	.LBE493:
 500              	.LBE494:
 501              	.LBB495:
 502              	.LBB496:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 503              		.loc 2 52 0
 504 0403 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 504      000000
 505 040a 89C6     		movl	%eax, %esi
 506 040c 488B17   		movq	(%rdi), %rdx
 507 040f FF928800 		call	*136(%rdx)
 507      0000
 508              	.LVL42:
 509              	.LBE496:
 510              	.LBE495:
 511              	.LBB497:
 512              	.LBB498:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 513              		.loc 2 206 0
 514 0415 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 514      000000
 515 041c 448BBC24 		movl	136(%rsp), %r15d
 515      88000000 
 516 0424 8B94248C 		movl	140(%rsp), %edx
 516      000000
 517 042b 448B7424 		movl	28(%rsp), %r14d
 517      1C
 518 0430 8B6C2420 		movl	32(%rsp), %ebp
 519 0434 488B07   		movq	(%rdi), %rax
 520 0437 4489F9   		movl	%r15d, %ecx
 521 043a 29D1     		subl	%edx, %ecx
 522 043c 418D341E 		leal	(%r14,%rbx), %esi
 523              	.LVL43:
 524 0440 448D4201 		leal	1(%rdx), %r8d
 525              	.LVL44:
 526 0444 89D3     		movl	%edx, %ebx
 527 0446 83C101   		addl	$1, %ecx
 528              	.LVL45:
 529 0449 89EA     		movl	%ebp, %edx
 530 044b FF5020   		call	*32(%rax)
 531              	.LVL46:
 532              	.LBE498:
 533              	.LBE497:
 534              	.LBB499:
 535              	.LBB500:
 536              		.loc 2 317 0
 537 044e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 537      000000
 538 0455 F20F104C 		movsd	48(%rsp), %xmm1
 538      2430
 539 045b F20F1044 		movsd	40(%rsp), %xmm0
 539      2428
 540 0461 4189D8   		movl	%ebx, %r8d
 541 0464 89D9     		movl	%ebx, %ecx
 542 0466 89EA     		movl	%ebp, %edx
 543 0468 4489F6   		movl	%r14d, %esi
 544 046b 488B07   		movq	(%rdi), %rax
 545 046e FF900801 		call	*264(%rax)
 545      0000
 546              	.LVL47:
 547              	.LBE500:
 548              	.LBE499:
 549              	.LBB501:
 550              	.LBB502:
 551 0474 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 551      000000
 552 047b 4489F6   		movl	%r14d, %esi
 553 047e 89D9     		movl	%ebx, %ecx
 554 0480 4401FE   		addl	%r15d, %esi
 555 0483 F20F104C 		movsd	40(%rsp), %xmm1
 555      2428
 556 0489 29DE     		subl	%ebx, %esi
 557              	.LVL48:
 558 048b F20F1044 		movsd	48(%rsp), %xmm0
 558      2430
 559 0491 488B07   		movq	(%rdi), %rax
 560 0494 4189D8   		movl	%ebx, %r8d
 561 0497 89EA     		movl	%ebp, %edx
 562 0499 488B8008 		movq	264(%rax), %rax
 562      010000
 563 04a0 E9540400 		jmp	.L14
 563      00
 564              	.LVL49:
 565              		.p2align 4,,10
 566 04a5 0F1F00   		.p2align 3
 567              	.L2:
 568              	.LBE502:
 569              	.LBE501:
 570              	.LBE432:
 571              	.LBB503:
 572              		.loc 1 248 0
 573 04a8 8B8C2488 		movl	136(%rsp), %ecx
 573      000000
 574              	.LVL50:
 575 04af 89CA     		movl	%ecx, %edx
 576 04b1 C1EA1F   		shrl	$31, %edx
 577 04b4 01CA     		addl	%ecx, %edx
 578 04b6 D1FA     		sarl	%edx
 579 04b8 89D3     		movl	%edx, %ebx
 580              	.LVL51:
 581 04ba 89942484 		movl	%edx, 132(%rsp)
 581      000000
 582              	.LVL52:
 583              		.loc 1 250 0
 584 04c1 8B542424 		movl	36(%rsp), %edx
 585              	.LVL53:
 586 04c5 85D2     		testl	%edx, %edx
 587 04c7 0F8E3F04 		jle	.L17
 587      0000
 588 04cd F20F1035 		movsd	.LC1(%rip), %xmm6
 588      00000000 
 589 04d5 8B9C2488 		movl	136(%rsp), %ebx
 589      000000
 590              	.LVL54:
 591 04dc 4863E8   		movslq	%eax, %rbp
 592 04df F20F103D 		movsd	.LC3(%rip), %xmm7
 592      00000000 
 593 04e7 8B8C248C 		movl	140(%rsp), %ecx
 593      000000
 594              	.LVL55:
 595 04ee 8B74241C 		movl	28(%rsp), %esi
 596 04f2 034C2420 		addl	32(%rsp), %ecx
 597 04f6 F20F1174 		movsd	%xmm6, 56(%rsp)
 597      2438
 598 04fc F20F117C 		movsd	%xmm7, 64(%rsp)
 598      2440
 599 0502 48036C24 		addq	8(%rsp), %rbp
 599      08
 600 0507 F20F1035 		movsd	.LC4(%rip), %xmm6
 600      00000000 
 601 050f F20F103D 		movsd	.LC7(%rip), %xmm7
 601      00000000 
 602 0517 8D741EFF 		leal	-1(%rsi,%rbx), %esi
 603 051b F20F1174 		movsd	%xmm6, 72(%rsp)
 603      2448
 604 0521 4189CE   		movl	%ecx, %r14d
 605 0524 894C2428 		movl	%ecx, 40(%rsp)
 606 0528 F20F117C 		movsd	%xmm7, 80(%rsp)
 606      2450
 607 052e 48892C24 		movq	%rbp, (%rsp)
 608 0532 89742430 		movl	%esi, 48(%rsp)
 609 0536 F20F1035 		movsd	.LC9(%rip), %xmm6
 609      00000000 
 610 053e 4129DE   		subl	%ebx, %r14d
 611 0541 F20F103D 		movsd	.LC10(%rip), %xmm7
 611      00000000 
 612 0549 31ED     		xorl	%ebp, %ebp
 613 054b F20F1174 		movsd	%xmm6, 120(%rsp)
 613      2478
 614 0551 F20F117C 		movsd	%xmm7, 16(%rsp)
 614      2410
 615              	.LVL56:
 616 0557 660F1F84 		.p2align 4,,10
 616      00000000 
 616      00
 617              		.p2align 3
 618              	.L6:
 619 0560 8B442420 		movl	32(%rsp), %eax
 620 0564 448B9424 		movl	132(%rsp), %r10d
 620      84000000 
 621              	.LBB504:
 622              	.LBB505:
 623              		.loc 1 42 0 discriminator 2
 624 056c 8B742418 		movl	24(%rsp), %esi
 625 0570 F30F1005 		movss	.LC0(%rip), %xmm0
 625      00000000 
 626 0578 448D3C28 		leal	(%rax,%rbp), %r15d
 627 057c 8B44241C 		movl	28(%rsp), %eax
 628 0580 4129EA   		subl	%ebp, %r10d
 629 0583 44895424 		movl	%r10d, 104(%rsp)
 629      68
 630 0588 448D2C28 		leal	(%rax,%rbp), %r13d
 631              	.LVL57:
 632              	.LBE505:
 633              	.LBE504:
 634              		.loc 1 252 0 discriminator 2
 635 058c 488B4424 		movq	8(%rsp), %rax
 635      08
 636 0591 480FBE04 		movsbq	(%rax,%rbp), %rax
 636      28
 637              	.LBB507:
 638              	.LBB506:
 639              		.loc 1 42 0 discriminator 2
 640 0596 410FB63C 		movzbl	(%r12,%rax), %edi
 640      04
 641 059b E8000000 		call	_Z16fl_color_averagejjf
 641      00
 642              	.LVL58:
 643              	.LBE506:
 644              	.LBE507:
 645              	.LBB508:
 646              	.LBB509:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 647              		.loc 2 52 0 discriminator 2
 648 05a0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 648      000000
 649 05a7 89C6     		movl	%eax, %esi
 650 05a9 488B17   		movq	(%rdi), %rdx
 651 05ac FF928800 		call	*136(%rdx)
 651      0000
 652              	.LVL59:
 653              	.LBE509:
 654              	.LBE508:
 655              		.loc 1 253 0 discriminator 2
 656 05b2 660FEFD2 		pxor	%xmm2, %xmm2
 657 05b6 8D04ED00 		leal	0(,%rbp,8), %eax
 657      000000
 658              	.LBB510:
 659              	.LBB511:
 660              		.loc 2 317 0 discriminator 2
 661 05bd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 661      000000
 662              	.LBE511:
 663              	.LBE510:
 664              		.loc 1 253 0 discriminator 2
 665 05c4 F20F105C 		movsd	56(%rsp), %xmm3
 665      2438
 666 05ca F20F1064 		movsd	64(%rsp), %xmm4
 666      2440
 667              	.LBB515:
 668              	.LBB512:
 669              		.loc 2 317 0 discriminator 2
 670 05d0 4189D8   		movl	%ebx, %r8d
 671              	.LBE512:
 672              	.LBE515:
 673              		.loc 1 253 0 discriminator 2
 674 05d3 F20F2AD0 		cvtsi2sd	%eax, %xmm2
 675              	.LBB516:
 676              	.LBB513:
 677              		.loc 2 317 0 discriminator 2
 678 05d7 89D9     		movl	%ebx, %ecx
 679 05d9 488B07   		movq	(%rdi), %rax
 680 05dc 4489FA   		movl	%r15d, %edx
 681 05df 4489EE   		movl	%r13d, %esi
 682              	.LBE513:
 683              	.LBE516:
 684              		.loc 1 253 0 discriminator 2
 685 05e2 F20F58DA 		addsd	%xmm2, %xmm3
 686 05e6 F20F1154 		movsd	%xmm2, 96(%rsp)
 686      2460
 687              	.LVL60:
 688 05ec F20F58E2 		addsd	%xmm2, %xmm4
 689              	.LVL61:
 690              	.LBB517:
 691              	.LBB514:
 692              		.loc 2 317 0 discriminator 2
 693 05f0 660F28CB 		movapd	%xmm3, %xmm1
 694 05f4 F20F115C 		movsd	%xmm3, 112(%rsp)
 694      2470
 695 05fa 660F28C4 		movapd	%xmm4, %xmm0
 696 05fe F20F1164 		movsd	%xmm4, 88(%rsp)
 696      2458
 697 0604 FF900801 		call	*264(%rax)
 697      0000
 698              	.LVL62:
 699              	.LBE514:
 700              	.LBE517:
 701              		.loc 1 254 0 discriminator 2
 702 060a 488B4424 		movq	8(%rsp), %rax
 702      08
 703              	.LBB518:
 704              	.LBB519:
 705              		.loc 1 42 0 discriminator 2
 706 060f 8B742418 		movl	24(%rsp), %esi
 707 0613 F30F1005 		movss	.LC0(%rip), %xmm0
 707      00000000 
 708              	.LBE519:
 709              	.LBE518:
 710              		.loc 1 254 0 discriminator 2
 711 061b 480FBE04 		movsbq	(%rax,%rbp), %rax
 711      28
 712 0620 4883C501 		addq	$1, %rbp
 713              	.LVL63:
 714              	.LBB521:
 715              	.LBB520:
 716              		.loc 1 42 0 discriminator 2
 717 0624 410FB67C 		movzbl	-2(%r12,%rax), %edi
 717      04FE
 718 062a E8000000 		call	_Z16fl_color_averagejjf
 718      00
 719              	.LVL64:
 720              	.LBE520:
 721              	.LBE521:
 722              	.LBB522:
 723              	.LBB523:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 724              		.loc 2 52 0 discriminator 2
 725 062f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 725      000000
 726 0636 89C6     		movl	%eax, %esi
 727 0638 488B17   		movq	(%rdi), %rdx
 728 063b FF928800 		call	*136(%rdx)
 728      0000
 729              	.LVL65:
 730              	.LBE523:
 731              	.LBE522:
 732              	.LBB524:
 733              	.LBB525:
 734              		.loc 2 317 0 discriminator 2
 735 0641 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 735      000000
 736 0648 F20F1064 		movsd	88(%rsp), %xmm4
 736      2458
 737 064e 4189D8   		movl	%ebx, %r8d
 738 0651 660FEFC0 		pxor	%xmm0, %xmm0
 739 0655 660F28CC 		movapd	%xmm4, %xmm1
 740 0659 89D9     		movl	%ebx, %ecx
 741 065b 488B07   		movq	(%rdi), %rax
 742 065e 4489FA   		movl	%r15d, %edx
 743 0661 4489EE   		movl	%r13d, %esi
 744 0664 FF900801 		call	*264(%rax)
 744      0000
 745              	.LVL66:
 746              	.LBE525:
 747              	.LBE524:
 748              	.LBB526:
 749              	.LBB527:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 750              		.loc 2 270 0 discriminator 2
 751 066a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 751      000000
 752              	.LBE527:
 753              	.LBE526:
 754              		.loc 1 256 0 discriminator 2
 755 0671 448B5424 		movl	104(%rsp), %r10d
 755      68
 756 0676 448B5C24 		movl	40(%rsp), %r11d
 756      28
 757              	.LBB530:
 758              	.LBB528:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 759              		.loc 2 270 0 discriminator 2
 760 067b 8B742430 		movl	48(%rsp), %esi
 761 067f 488B07   		movq	(%rdi), %rax
 762              	.LBE528:
 763              	.LBE530:
 764              		.loc 1 256 0 discriminator 2
 765 0682 4529D3   		subl	%r10d, %r11d
 766 0685 4501FA   		addl	%r15d, %r10d
 767              	.LVL67:
 768              	.LBB531:
 769              	.LBB529:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 770              		.loc 2 270 0 discriminator 2
 771 0688 4489D9   		movl	%r11d, %ecx
 772 068b 4489D2   		movl	%r10d, %edx
 773 068e 44899C24 		movl	%r11d, 128(%rsp)
 773      80000000 
 774 0696 44895424 		movl	%r10d, 104(%rsp)
 774      68
 775              	.LVL68:
 776 069b FF5048   		call	*72(%rax)
 777              	.LVL69:
 778              	.LBE529:
 779              	.LBE531:
 780              		.loc 1 257 0 discriminator 2
 781 069e F20F1054 		movsd	96(%rsp), %xmm2
 781      2460
 782              	.LBB532:
 783              	.LBB533:
 784              		.loc 2 317 0 discriminator 2
 785 06a4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 785      000000
 786              	.LBE533:
 787              	.LBE532:
 788              		.loc 1 257 0 discriminator 2
 789 06ab F20F1064 		movsd	72(%rsp), %xmm4
 789      2448
 790              	.LBB536:
 791              	.LBB534:
 792              		.loc 2 317 0 discriminator 2
 793 06b1 4189D8   		movl	%ebx, %r8d
 794 06b4 89D9     		movl	%ebx, %ecx
 795 06b6 F20F104C 		movsd	120(%rsp), %xmm1
 795      2478
 796              	.LBE534:
 797              	.LBE536:
 798              		.loc 1 257 0 discriminator 2
 799 06bc F20F58E2 		addsd	%xmm2, %xmm4
 800              	.LVL70:
 801              	.LBB537:
 802              	.LBB535:
 803              		.loc 2 317 0 discriminator 2
 804 06c0 488B07   		movq	(%rdi), %rax
 805 06c3 4489F2   		movl	%r14d, %edx
 806 06c6 4489EE   		movl	%r13d, %esi
 807 06c9 660F28C4 		movapd	%xmm4, %xmm0
 808 06cd F20F1164 		movsd	%xmm4, 88(%rsp)
 808      2458
 809 06d3 FF900801 		call	*264(%rax)
 809      0000
 810              	.LVL71:
 811              	.LBE535:
 812              	.LBE537:
 813              		.loc 1 258 0 discriminator 2
 814 06d9 488B0424 		movq	(%rsp), %rax
 815              	.LBB538:
 816              	.LBB539:
 817              		.loc 1 42 0 discriminator 2
 818 06dd 8B742418 		movl	24(%rsp), %esi
 819 06e1 F30F1005 		movss	.LC0(%rip), %xmm0
 819      00000000 
 820              	.LBE539:
 821              	.LBE538:
 822              		.loc 1 258 0 discriminator 2
 823 06e9 480FBE00 		movsbq	(%rax), %rax
 824              	.LBB541:
 825              	.LBB540:
 826              		.loc 1 42 0 discriminator 2
 827 06ed 410FB63C 		movzbl	(%r12,%rax), %edi
 827      04
 828 06f2 E8000000 		call	_Z16fl_color_averagejjf
 828      00
 829              	.LVL72:
 830              	.LBE540:
 831              	.LBE541:
 832              	.LBB542:
 833              	.LBB543:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 834              		.loc 2 52 0 discriminator 2
 835 06f7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 835      000000
 836 06fe 89C6     		movl	%eax, %esi
 837 0700 488B17   		movq	(%rdi), %rdx
 838 0703 FF928800 		call	*136(%rdx)
 838      0000
 839              	.LVL73:
 840              	.LBE543:
 841              	.LBE542:
 842              		.loc 1 259 0 discriminator 2
 843 0709 F20F1054 		movsd	96(%rsp), %xmm2
 843      2460
 844              	.LBB544:
 845              	.LBB545:
 846              		.loc 2 317 0 discriminator 2
 847 070f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 847      000000
 848 0716 F20F1064 		movsd	88(%rsp), %xmm4
 848      2458
 849 071c 4189D8   		movl	%ebx, %r8d
 850              	.LBE545:
 851              	.LBE544:
 852              		.loc 1 259 0 discriminator 2
 853 071f F20F5854 		addsd	80(%rsp), %xmm2
 853      2450
 854              	.LVL74:
 855              	.LBB547:
 856              	.LBB546:
 857              		.loc 2 317 0 discriminator 2
 858 0725 89D9     		movl	%ebx, %ecx
 859 0727 4489F2   		movl	%r14d, %edx
 860 072a 488B07   		movq	(%rdi), %rax
 861 072d 660F28CC 		movapd	%xmm4, %xmm1
 862 0731 4489EE   		movl	%r13d, %esi
 863 0734 660F28C2 		movapd	%xmm2, %xmm0
 864 0738 F20F1154 		movsd	%xmm2, 88(%rsp)
 864      2458
 865 073e FF900801 		call	*264(%rax)
 865      0000
 866              	.LVL75:
 867              	.LBE546:
 868              	.LBE547:
 869              		.loc 1 260 0 discriminator 2
 870 0744 488B0424 		movq	(%rsp), %rax
 871              	.LBB548:
 872              	.LBB549:
 873              		.loc 1 42 0 discriminator 2
 874 0748 8B742418 		movl	24(%rsp), %esi
 875 074c F30F1005 		movss	.LC0(%rip), %xmm0
 875      00000000 
 876              	.LBE549:
 877              	.LBE548:
 878              		.loc 1 260 0 discriminator 2
 879 0754 480FBE00 		movsbq	(%rax), %rax
 880              	.LBB551:
 881              	.LBB550:
 882              		.loc 1 42 0 discriminator 2
 883 0758 410FB67C 		movzbl	-2(%r12,%rax), %edi
 883      04FE
 884 075e E8000000 		call	_Z16fl_color_averagejjf
 884      00
 885              	.LVL76:
 886              	.LBE550:
 887              	.LBE551:
 888              	.LBB552:
 889              	.LBB553:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 890              		.loc 2 52 0 discriminator 2
 891 0763 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 891      000000
 892 076a 89C6     		movl	%eax, %esi
 893 076c 488B17   		movq	(%rdi), %rdx
 894 076f FF928800 		call	*136(%rdx)
 894      0000
 895              	.LVL77:
 896              	.LBE553:
 897              	.LBE552:
 898              	.LBB554:
 899              	.LBB555:
 900              		.loc 2 317 0 discriminator 2
 901 0775 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 901      000000
 902 077c F20F1054 		movsd	88(%rsp), %xmm2
 902      2458
 903 0782 4189D8   		movl	%ebx, %r8d
 904 0785 F20F1044 		movsd	16(%rsp), %xmm0
 904      2410
 905 078b 660F28CA 		movapd	%xmm2, %xmm1
 906 078f 89D9     		movl	%ebx, %ecx
 907 0791 488B07   		movq	(%rdi), %rax
 908 0794 4489F2   		movl	%r14d, %edx
 909 0797 4489EE   		movl	%r13d, %esi
 910 079a 4183C601 		addl	$1, %r14d
 911              	.LVL78:
 912 079e FF900801 		call	*264(%rax)
 912      0000
 913              	.LVL79:
 914              	.LBE555:
 915              	.LBE554:
 916              	.LBB556:
 917              	.LBB557:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 918              		.loc 2 270 0 discriminator 2
 919 07a4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 919      000000
 920 07ab 448B9C24 		movl	128(%rsp), %r11d
 920      80000000 
 921 07b3 4489EE   		movl	%r13d, %esi
 922 07b6 448B5424 		movl	104(%rsp), %r10d
 922      68
 923 07bb 488B07   		movq	(%rdi), %rax
 924 07be 4489D9   		movl	%r11d, %ecx
 925 07c1 4489D2   		movl	%r10d, %edx
 926 07c4 FF5048   		call	*72(%rax)
 927              	.LVL80:
 928              	.LBE557:
 929              	.LBE556:
 930              	.LBB558:
 931              	.LBB559:
 932              		.loc 2 317 0 discriminator 2
 933 07c7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 933      000000
 934 07ce F20F105C 		movsd	112(%rsp), %xmm3
 934      2470
 935 07d4 4189D8   		movl	%ebx, %r8d
 936 07d7 89D9     		movl	%ebx, %ecx
 937 07d9 4489FA   		movl	%r15d, %edx
 938 07dc F20F104C 		movsd	16(%rsp), %xmm1
 938      2410
 939 07e2 4489EE   		movl	%r13d, %esi
 940 07e5 488B07   		movq	(%rdi), %rax
 941 07e8 660F28C3 		movapd	%xmm3, %xmm0
 942              	.LBE559:
 943              	.LBE558:
 944              		.loc 1 250 0 discriminator 2
 945 07ec 83EB02   		subl	$2, %ebx
 946              	.LVL81:
 947              	.LBB561:
 948              	.LBB560:
 949              		.loc 2 317 0 discriminator 2
 950 07ef FF900801 		call	*264(%rax)
 950      0000
 951              	.LVL82:
 952 07f5 836C2428 		subl	$1, 40(%rsp)
 952      01
 953 07fa 836C2430 		subl	$1, 48(%rsp)
 953      01
 954 07ff 48832C24 		subq	$1, (%rsp)
 954      01
 955              	.LBE560:
 956              	.LBE561:
 957              		.loc 1 250 0 discriminator 2
 958 0804 396C2424 		cmpl	%ebp, 36(%rsp)
 959 0808 0F8F52FD 		jg	.L6
 959      FFFF
 960 080e 8B442424 		movl	36(%rsp), %eax
 961 0812 8B9C2484 		movl	132(%rsp), %ebx
 961      000000
 962              	.LVL83:
 963 0819 0144241C 		addl	%eax, 28(%rsp)
 964 081d 01442420 		addl	%eax, 32(%rsp)
 965 0821 29C3     		subl	%eax, %ebx
 966 0823 F7D8     		negl	%eax
 967 0825 01C0     		addl	%eax, %eax
 968 0827 01842488 		addl	%eax, 136(%rsp)
 968      000000
 969 082e 0184248C 		addl	%eax, 140(%rsp)
 969      000000
 970              	.L5:
 971              	.LVL84:
 972              		.loc 1 265 0
 973 0835 48634424 		movslq	36(%rsp), %rax
 973      24
 974 083a 488B4C24 		movq	8(%rsp), %rcx
 974      08
 975              	.LBB562:
 976              	.LBB563:
 977              		.loc 1 42 0
 978 083f 8B742418 		movl	24(%rsp), %esi
 979 0843 F30F1005 		movss	.LC0(%rip), %xmm0
 979      00000000 
 980              	.LBE563:
 981              	.LBE562:
 982              		.loc 1 265 0
 983 084b 480FBE04 		movsbq	(%rcx,%rax), %rax
 983      01
 984              	.LBB565:
 985              	.LBB564:
 986              		.loc 1 42 0
 987 0850 410FB63C 		movzbl	(%r12,%rax), %edi
 987      04
 988 0855 E8000000 		call	_Z16fl_color_averagejjf
 988      00
 989              	.LVL85:
 990              	.LBE564:
 991              	.LBE565:
 992              	.LBB566:
 993              	.LBB567:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 994              		.loc 2 52 0
 995 085a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 995      000000
 996 0861 89C6     		movl	%eax, %esi
 997 0863 488B17   		movq	(%rdi), %rdx
 998 0866 FF928800 		call	*136(%rdx)
 998      0000
 999              	.LVL86:
 1000              	.LBE567:
 1001              	.LBE566:
 1002              	.LBB568:
 1003              	.LBB569:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1004              		.loc 2 206 0
 1005 086c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1005      000000
 1006 0873 448BBC24 		movl	140(%rsp), %r15d
 1006      8C000000 
 1007 087b 448BB424 		movl	136(%rsp), %r14d
 1007      88000000 
 1008 0883 8B6C2420 		movl	32(%rsp), %ebp
 1009 0887 448B6424 		movl	28(%rsp), %r12d
 1009      1C
 1010              	.LVL87:
 1011 088c 488B07   		movq	(%rdi), %rax
 1012 088f 4489FE   		movl	%r15d, %esi
 1013 0892 4429F6   		subl	%r14d, %esi
 1014 0895 418D4E01 		leal	1(%r14), %ecx
 1015              	.LVL88:
 1016 0899 8D142B   		leal	(%rbx,%rbp), %edx
 1017              	.LVL89:
 1018 089c 448D4601 		leal	1(%rsi), %r8d
 1019              	.LVL90:
 1020 08a0 4489E6   		movl	%r12d, %esi
 1021 08a3 FF5020   		call	*32(%rax)
 1022              	.LVL91:
 1023              	.LBE569:
 1024              	.LBE568:
 1025              	.LBB570:
 1026              	.LBB571:
 1027              		.loc 2 317 0
 1028 08a6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1028      000000
 1029 08ad F20F104C 		movsd	16(%rsp), %xmm1
 1029      2410
 1030 08b3 660FEFC0 		pxor	%xmm0, %xmm0
 1031 08b7 4589F0   		movl	%r14d, %r8d
 1032 08ba 4489F1   		movl	%r14d, %ecx
 1033 08bd 89EA     		movl	%ebp, %edx
 1034 08bf 4489E6   		movl	%r12d, %esi
 1035 08c2 488B07   		movq	(%rdi), %rax
 1036 08c5 FF900801 		call	*264(%rax)
 1036      0000
 1037              	.LVL92:
 1038              	.LBE571:
 1039              	.LBE570:
 1040              	.LBB572:
 1041              	.LBB573:
 1042 08cb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1042      000000
 1043 08d2 4489FA   		movl	%r15d, %edx
 1044 08d5 4489F1   		movl	%r14d, %ecx
 1045 08d8 01EA     		addl	%ebp, %edx
 1046 08da F20F104C 		movsd	120(%rsp), %xmm1
 1046      2478
 1047 08e0 F20F1044 		movsd	16(%rsp), %xmm0
 1047      2410
 1048 08e6 4429F2   		subl	%r14d, %edx
 1049 08e9 488B07   		movq	(%rdi), %rax
 1050 08ec 4589F0   		movl	%r14d, %r8d
 1051 08ef 4489E6   		movl	%r12d, %esi
 1052 08f2 488B8008 		movq	264(%rax), %rax
 1052      010000
 1053              	.LVL93:
 1054              	.L14:
 1055              	.LBE573:
 1056              	.LBE572:
 1057              	.LBE503:
 1058              	.LBE577:
 1059              		.loc 1 270 0
 1060 08f9 4881C498 		addq	$152, %rsp
 1060      000000
 1061              		.cfi_remember_state
 1062              		.cfi_def_cfa_offset 56
 1063 0900 5B       		popq	%rbx
 1064              		.cfi_def_cfa_offset 48
 1065 0901 5D       		popq	%rbp
 1066              		.cfi_def_cfa_offset 40
 1067 0902 415C     		popq	%r12
 1068              		.cfi_def_cfa_offset 32
 1069 0904 415D     		popq	%r13
 1070              		.cfi_def_cfa_offset 24
 1071 0906 415E     		popq	%r14
 1072              		.cfi_def_cfa_offset 16
 1073 0908 415F     		popq	%r15
 1074              		.cfi_def_cfa_offset 8
 1075              	.LBB578:
 1076              	.LBB576:
 1077              	.LBB575:
 1078              	.LBB574:
 1079              		.loc 2 317 0
 1080 090a FFE0     		jmp	*%rax
 1081              	.LVL94:
 1082              	.L17:
 1083              		.cfi_restore_state
 1084 090c F20F1035 		movsd	.LC9(%rip), %xmm6
 1084      00000000 
 1085 0914 F20F103D 		movsd	.LC10(%rip), %xmm7
 1085      00000000 
 1086 091c F20F1174 		movsd	%xmm6, 120(%rsp)
 1086      2478
 1087 0922 F20F117C 		movsd	%xmm7, 16(%rsp)
 1087      2410
 1088 0928 E908FFFF 		jmp	.L5
 1088      FF
 1089              	.LVL95:
 1090              	.L16:
 1091 092d F20F1035 		movsd	.LC2(%rip), %xmm6
 1091      00000000 
 1092 0935 F20F103D 		movsd	.LC6(%rip), %xmm7
 1092      00000000 
 1093 093d F20F1174 		movsd	%xmm6, 40(%rsp)
 1093      2428
 1094 0943 F20F117C 		movsd	%xmm7, 48(%rsp)
 1094      2430
 1095 0949 E990FAFF 		jmp	.L3
 1095      FF
 1096              	.LBE574:
 1097              	.LBE575:
 1098              	.LBE576:
 1099              	.LBE578:
 1100              		.cfi_endproc
 1101              	.LFE486:
 1103              		.section	.text.unlikely._ZL11shade_roundiiiiPKcj
 1104              	.LCOLDE11:
 1105              		.section	.text._ZL11shade_roundiiiiPKcj
 1106              	.LHOTE11:
 1107              		.section	.text.unlikely._ZL10shade_rectiiiiPKcj,"ax",@progbits
 1108              	.LCOLDB12:
 1109              		.section	.text._ZL10shade_rectiiiiPKcj,"ax",@progbits
 1110              	.LHOTB12:
 1111              		.p2align 4,,15
 1113              	_ZL10shade_rectiiiiPKcj:
 1114              	.LFB485:
 1115              		.loc 1 147 0
 1116              		.cfi_startproc
 1117              	.LVL96:
 1118 0000 4157     		pushq	%r15
 1119              		.cfi_def_cfa_offset 16
 1120              		.cfi_offset 15, -16
 1121 0002 4156     		pushq	%r14
 1122              		.cfi_def_cfa_offset 24
 1123              		.cfi_offset 14, -24
 1124 0004 4189CF   		movl	%ecx, %r15d
 1125 0007 4155     		pushq	%r13
 1126              		.cfi_def_cfa_offset 32
 1127              		.cfi_offset 13, -32
 1128 0009 4154     		pushq	%r12
 1129              		.cfi_def_cfa_offset 40
 1130              		.cfi_offset 12, -40
 1131 000b 4189D6   		movl	%edx, %r14d
 1132 000e 55       		pushq	%rbp
 1133              		.cfi_def_cfa_offset 48
 1134              		.cfi_offset 6, -48
 1135 000f 53       		pushq	%rbx
 1136              		.cfi_def_cfa_offset 56
 1137              		.cfi_offset 3, -56
 1138 0010 4C89C3   		movq	%r8, %rbx
 1139 0013 4589CC   		movl	%r9d, %r12d
 1140 0016 4883EC48 		subq	$72, %rsp
 1141              		.cfi_def_cfa_offset 128
 1142              		.loc 1 147 0
 1143 001a 8954242C 		movl	%edx, 44(%rsp)
 1144 001e 897C240C 		movl	%edi, 12(%rsp)
 1145 0022 89742410 		movl	%esi, 16(%rsp)
 1146 0026 894C2438 		movl	%ecx, 56(%rsp)
 1147 002a 4C894424 		movq	%r8, 48(%rsp)
 1147      30
 1148              		.loc 1 148 0
 1149 002f E8000000 		call	_Z12fl_gray_rampv
 1149      00
 1150              	.LVL97:
 1151              		.loc 1 150 0
 1152 0034 4889DF   		movq	%rbx, %rdi
 1153              		.loc 1 148 0
 1154 0037 4889C5   		movq	%rax, %rbp
 1155              	.LVL98:
 1156              		.loc 1 150 0
 1157 003a E8000000 		call	strlen
 1157      00
 1158              	.LVL99:
 1159 003f 83E801   		subl	$1, %eax
 1160              	.LVL100:
 1161              		.loc 1 151 0
 1162 0042 89C3     		movl	%eax, %ebx
 1163              	.LVL101:
 1164 0044 C1EB1F   		shrl	$31, %ebx
 1165 0047 89DA     		movl	%ebx, %edx
 1166 0049 01C2     		addl	%eax, %edx
 1167 004b 89D3     		movl	%edx, %ebx
 1168              		.loc 1 154 0
 1169 004d 438D1436 		leal	(%r14,%r14), %edx
 1170              		.loc 1 151 0
 1171 0051 D1FB     		sarl	%ebx
 1172              		.loc 1 154 0
 1173 0053 4439FA   		cmpl	%r15d, %edx
 1174              		.loc 1 151 0
 1175 0056 895C2408 		movl	%ebx, 8(%rsp)
 1176              	.LVL102:
 1177              		.loc 1 154 0
 1178 005a 0F8EB802 		jle	.L19
 1178      0000
 1179              		.loc 1 152 0
 1180 0060 4439F8   		cmpl	%r15d, %eax
 1181 0063 0F9DC1   		setge	%cl
 1182 0066 0FB6C9   		movzbl	%cl, %ecx
 1183 0069 83C101   		addl	$1, %ecx
 1184              		.loc 1 158 0
 1185 006c 85DB     		testl	%ebx, %ebx
 1186              		.loc 1 152 0
 1187 006e 894C2428 		movl	%ecx, 40(%rsp)
 1188              	.LVL103:
 1189              		.loc 1 158 0
 1190 0072 0F8E7205 		jle	.L32
 1190      0000
 1191 0078 8B4C240C 		movl	12(%rsp), %ecx
 1192              	.LVL104:
 1193 007c 8B5C242C 		movl	44(%rsp), %ebx
 1194              	.LVL105:
 1195 0080 448B4424 		movl	40(%rsp), %r8d
 1195      28
 1196 0085 01CB     		addl	%ecx, %ebx
 1197 0087 83C101   		addl	$1, %ecx
 1198 008a 8D73FE   		leal	-2(%rbx), %esi
 1199 008d 895C243C 		movl	%ebx, 60(%rsp)
 1200 0091 83EB01   		subl	$1, %ebx
 1201 0094 895C2420 		movl	%ebx, 32(%rsp)
 1202 0098 4863D8   		movslq	%eax, %rbx
 1203 009b 8B442438 		movl	56(%rsp), %eax
 1204              	.LVL106:
 1205 009f 8974241C 		movl	%esi, 28(%rsp)
 1206 00a3 8B742410 		movl	16(%rsp), %esi
 1207 00a7 894C2418 		movl	%ecx, 24(%rsp)
 1208 00ab 488B4C24 		movq	48(%rsp), %rcx
 1208      30
 1209 00b0 01F0     		addl	%esi, %eax
 1210 00b2 4189F6   		movl	%esi, %r14d
 1211              	.LVL107:
 1212 00b5 4989CF   		movq	%rcx, %r15
 1213              	.LVL108:
 1214 00b8 4801CB   		addq	%rcx, %rbx
 1215              	.LVL109:
 1216 00bb 89442414 		movl	%eax, 20(%rsp)
 1217 00bf 4189C5   		movl	%eax, %r13d
 1218              	.LVL110:
 1219              		.p2align 4,,10
 1220 00c2 660F1F44 		.p2align 3
 1220      0000
 1221              	.L23:
 1222              		.loc 1 160 0 discriminator 2
 1223 00c8 490FBE07 		movsbq	(%r15), %rax
 1224              	.LBB579:
 1225              	.LBB580:
 1226              		.loc 1 42 0 discriminator 2
 1227 00cc F30F1005 		movss	.LC0(%rip), %xmm0
 1227      00000000 
 1228 00d4 4489E6   		movl	%r12d, %esi
 1229 00d7 44894424 		movl	%r8d, 36(%rsp)
 1229      24
 1230              	.LVL111:
 1231 00dc 4983C701 		addq	$1, %r15
 1232              	.LVL112:
 1233 00e0 4883EB01 		subq	$1, %rbx
 1234 00e4 0FB67C05 		movzbl	0(%rbp,%rax), %edi
 1234      00
 1235 00e9 E8000000 		call	_Z16fl_color_averagejjf
 1235      00
 1236              	.LVL113:
 1237              	.LBE580:
 1238              	.LBE579:
 1239              	.LBB581:
 1240              	.LBB582:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1241              		.loc 2 52 0 discriminator 2
 1242 00ee 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1242      000000
 1243 00f5 89C6     		movl	%eax, %esi
 1244 00f7 488B17   		movq	(%rdi), %rdx
 1245 00fa FF928800 		call	*136(%rdx)
 1245      0000
 1246              	.LVL114:
 1247              	.LBE582:
 1248              	.LBE581:
 1249              	.LBB583:
 1250              	.LBB584:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1251              		.loc 2 255 0 discriminator 2
 1252 0100 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1252      000000
 1253 0107 8B4C241C 		movl	28(%rsp), %ecx
 1254 010b 4489F2   		movl	%r14d, %edx
 1255 010e 8B742418 		movl	24(%rsp), %esi
 1256 0112 4183C601 		addl	$1, %r14d
 1257              	.LVL115:
 1258 0116 488B07   		movq	(%rdi), %rax
 1259 0119 FF5030   		call	*48(%rax)
 1260              	.LVL116:
 1261              	.LBE584:
 1262              	.LBE583:
 1263              		.loc 1 163 0 discriminator 2
 1264 011c 490FBE47 		movsbq	-1(%r15), %rax
 1264      FF
 1265              	.LBB585:
 1266              	.LBB586:
 1267              		.loc 1 42 0 discriminator 2
 1268 0121 F30F1005 		movss	.LC0(%rip), %xmm0
 1268      00000000 
 1269 0129 4489E6   		movl	%r12d, %esi
 1270 012c 0FB67C05 		movzbl	-2(%rbp,%rax), %edi
 1270      FE
 1271 0131 E8000000 		call	_Z16fl_color_averagejjf
 1271      00
 1272              	.LVL117:
 1273              	.LBE586:
 1274              	.LBE585:
 1275              	.LBB587:
 1276              	.LBB588:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1277              		.loc 2 52 0 discriminator 2
 1278 0136 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1278      000000
 1279 013d 89C6     		movl	%eax, %esi
 1280 013f 488B17   		movq	(%rdi), %rdx
 1281 0142 FF928800 		call	*136(%rdx)
 1281      0000
 1282              	.LVL118:
 1283              	.LBE588:
 1284              	.LBE587:
 1285              	.LBB589:
 1286              	.LBB590:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 1287              		.loc 2 147 0 discriminator 2
 1288 0148 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1288      000000
 1289 014f 4489F2   		movl	%r14d, %edx
 1290 0152 8B74240C 		movl	12(%rsp), %esi
 1291 0156 488B07   		movq	(%rdi), %rax
 1292 0159 FF909800 		call	*152(%rax)
 1292      0000
 1293              	.LVL119:
 1294              	.LBE590:
 1295              	.LBE589:
 1296              	.LBB591:
 1297              	.LBB592:
 1298 015f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1298      000000
 1299 0166 4489F2   		movl	%r14d, %edx
 1300 0169 8B742420 		movl	32(%rsp), %esi
 1301 016d 488B07   		movq	(%rdi), %rax
 1302 0170 FF909800 		call	*152(%rax)
 1302      0000
 1303              	.LVL120:
 1304              	.LBE592:
 1305              	.LBE591:
 1306              		.loc 1 168 0 discriminator 2
 1307 0176 480FBE43 		movsbq	1(%rbx), %rax
 1307      01
 1308              	.LBB593:
 1309              	.LBB594:
 1310              		.loc 1 42 0 discriminator 2
 1311 017b F30F1005 		movss	.LC0(%rip), %xmm0
 1311      00000000 
 1312 0183 4489E6   		movl	%r12d, %esi
 1313 0186 0FB67C05 		movzbl	0(%rbp,%rax), %edi
 1313      00
 1314 018b E8000000 		call	_Z16fl_color_averagejjf
 1314      00
 1315              	.LVL121:
 1316              	.LBE594:
 1317              	.LBE593:
 1318              	.LBB595:
 1319              	.LBB596:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1320              		.loc 2 52 0 discriminator 2
 1321 0190 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1321      000000
 1322 0197 89C6     		movl	%eax, %esi
 1323 0199 488B17   		movq	(%rdi), %rdx
 1324 019c FF928800 		call	*136(%rdx)
 1324      0000
 1325              	.LVL122:
 1326              	.LBE596:
 1327              	.LBE595:
 1328              	.LBB597:
 1329              	.LBB598:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1330              		.loc 2 255 0 discriminator 2
 1331 01a2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1331      000000
 1332 01a9 8B4C241C 		movl	28(%rsp), %ecx
 1333 01ad 4489EA   		movl	%r13d, %edx
 1334 01b0 8B742418 		movl	24(%rsp), %esi
 1335 01b4 488B07   		movq	(%rdi), %rax
 1336 01b7 FF5030   		call	*48(%rax)
 1337              	.LVL123:
 1338              	.LBE598:
 1339              	.LBE597:
 1340              		.loc 1 171 0 discriminator 2
 1341 01ba 480FBE43 		movsbq	1(%rbx), %rax
 1341      01
 1342              	.LBB599:
 1343              	.LBB600:
 1344              		.loc 1 42 0 discriminator 2
 1345 01bf F30F1005 		movss	.LC0(%rip), %xmm0
 1345      00000000 
 1346 01c7 4489E6   		movl	%r12d, %esi
 1347 01ca 0FB67C05 		movzbl	-2(%rbp,%rax), %edi
 1347      FE
 1348 01cf E8000000 		call	_Z16fl_color_averagejjf
 1348      00
 1349              	.LVL124:
 1350              	.LBE600:
 1351              	.LBE599:
 1352              	.LBB601:
 1353              	.LBB602:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1354              		.loc 2 52 0 discriminator 2
 1355 01d4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1355      000000
 1356 01db 89C6     		movl	%eax, %esi
 1357 01dd 488B17   		movq	(%rdi), %rdx
 1358 01e0 FF928800 		call	*136(%rdx)
 1358      0000
 1359              	.LVL125:
 1360              	.LBE602:
 1361              	.LBE601:
 1362              	.LBB603:
 1363              	.LBB604:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 1364              		.loc 2 147 0 discriminator 2
 1365 01e6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1365      000000
 1366 01ed 4489EA   		movl	%r13d, %edx
 1367 01f0 8B74240C 		movl	12(%rsp), %esi
 1368 01f4 488B07   		movq	(%rdi), %rax
 1369 01f7 FF909800 		call	*152(%rax)
 1369      0000
 1370              	.LVL126:
 1371              	.LBE604:
 1372              	.LBE603:
 1373              	.LBB605:
 1374              	.LBB606:
 1375 01fd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1375      000000
 1376 0204 4489EA   		movl	%r13d, %edx
 1377 0207 8B742420 		movl	32(%rsp), %esi
 1378 020b 4183ED01 		subl	$1, %r13d
 1379              	.LVL127:
 1380 020f 488B07   		movq	(%rdi), %rax
 1381 0212 FF909800 		call	*152(%rax)
 1381      0000
 1382              	.LVL128:
 1383 0218 448B4424 		movl	36(%rsp), %r8d
 1383      24
 1384 021d 8B4C2428 		movl	40(%rsp), %ecx
 1385 0221 4489C0   		movl	%r8d, %eax
 1386 0224 4101C8   		addl	%ecx, %r8d
 1387              	.LBE606:
 1388              	.LBE605:
 1389              		.loc 1 158 0 discriminator 2
 1390 0227 39442408 		cmpl	%eax, 8(%rsp)
 1391 022b 0F8F97FE 		jg	.L23
 1391      FFFF
 1392              	.LVL129:
 1393              	.L22:
 1394              		.loc 1 177 0
 1395 0231 8B442408 		movl	8(%rsp), %eax
 1396              		.loc 1 179 0
 1397 0235 4C637424 		movslq	8(%rsp), %r14
 1397      08
 1398              	.LBB607:
 1399              	.LBB608:
 1400              		.loc 1 42 0
 1401 023a 4489E6   		movl	%r12d, %esi
 1402              	.LBE608:
 1403              	.LBE607:
 1404              		.loc 1 179 0
 1405 023d 4C037424 		addq	48(%rsp), %r14
 1405      30
 1406              	.LBB611:
 1407              	.LBB609:
 1408              		.loc 1 42 0
 1409 0242 F30F1005 		movss	.LC0(%rip), %xmm0
 1409      00000000 
 1410              	.LBE609:
 1411              	.LBE611:
 1412              		.loc 1 177 0
 1413 024a 99       		cltd
 1414 024b F77C2428 		idivl	40(%rsp)
 1415 024f 89C3     		movl	%eax, %ebx
 1416              	.LVL130:
 1417              		.loc 1 179 0
 1418 0251 490FBE06 		movsbq	(%r14), %rax
 1419              	.LVL131:
 1420              	.LBB612:
 1421              	.LBB610:
 1422              		.loc 1 42 0
 1423 0255 0FB67C05 		movzbl	0(%rbp,%rax), %edi
 1423      00
 1424 025a E8000000 		call	_Z16fl_color_averagejjf
 1424      00
 1425              	.LVL132:
 1426              	.LBE610:
 1427              	.LBE612:
 1428              	.LBB613:
 1429              	.LBB614:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1430              		.loc 2 52 0
 1431 025f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1431      000000
 1432 0266 89C6     		movl	%eax, %esi
 1433 0268 488B17   		movq	(%rdi), %rdx
 1434 026b FF928800 		call	*136(%rdx)
 1434      0000
 1435              	.LVL133:
 1436              	.LBE614:
 1437              	.LBE613:
 1438              	.LBB615:
 1439              	.LBB616:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1440              		.loc 2 206 0
 1441 0271 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1441      000000
 1442 0278 8B542438 		movl	56(%rsp), %edx
 1443 027c 8D041B   		leal	(%rbx,%rbx), %eax
 1444              	.LBE616:
 1445              	.LBE615:
 1446              		.loc 1 180 0
 1447 027f 448B6C24 		movl	16(%rsp), %r13d
 1447      10
 1448              	.LBB619:
 1449              	.LBB617:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1450              		.loc 2 206 0
 1451 0284 8B4C242C 		movl	44(%rsp), %ecx
 1452 0288 8B742418 		movl	24(%rsp), %esi
 1453 028c 29C2     		subl	%eax, %edx
 1454 028e 488B07   		movq	(%rdi), %rax
 1455              	.LBE617:
 1456              	.LBE619:
 1457              		.loc 1 180 0
 1458 0291 4101DD   		addl	%ebx, %r13d
 1459              	.LVL134:
 1460              	.LBB620:
 1461              	.LBB618:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1462              		.loc 2 206 0
 1463 0294 448D4201 		leal	1(%rdx), %r8d
 1464 0298 83E902   		subl	$2, %ecx
 1465 029b 4489EA   		movl	%r13d, %edx
 1466 029e FF5020   		call	*32(%rax)
 1467              	.LVL135:
 1468              	.LBE618:
 1469              	.LBE620:
 1470              		.loc 1 182 0
 1471 02a1 490FBE06 		movsbq	(%r14), %rax
 1472              	.LBB621:
 1473              	.LBB622:
 1474              		.loc 1 42 0
 1475 02a5 F30F1005 		movss	.LC0(%rip), %xmm0
 1475      00000000 
 1476 02ad 4489E6   		movl	%r12d, %esi
 1477 02b0 0FB67C05 		movzbl	-2(%rbp,%rax), %edi
 1477      FE
 1478 02b5 E8000000 		call	_Z16fl_color_averagejjf
 1478      00
 1479              	.LVL136:
 1480              	.LBE622:
 1481              	.LBE621:
 1482              	.LBB623:
 1483              	.LBB624:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1484              		.loc 2 52 0
 1485 02ba 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1485      000000
 1486 02c1 89C6     		movl	%eax, %esi
 1487 02c3 488B17   		movq	(%rdi), %rdx
 1488 02c6 FF928800 		call	*136(%rdx)
 1488      0000
 1489              	.LVL137:
 1490              	.LBE624:
 1491              	.LBE623:
 1492              		.loc 1 183 0
 1493 02cc 8B442414 		movl	20(%rsp), %eax
 1494              	.LBB625:
 1495              	.LBB626:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1496              		.loc 2 270 0
 1497 02d0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1497      000000
 1498 02d7 4489EA   		movl	%r13d, %edx
 1499 02da 8B74240C 		movl	12(%rsp), %esi
 1500              	.LBE626:
 1501              	.LBE625:
 1502              		.loc 1 183 0
 1503 02de 29D8     		subl	%ebx, %eax
 1504 02e0 89C3     		movl	%eax, %ebx
 1505              	.LVL138:
 1506              	.LBB628:
 1507              	.LBB627:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1508              		.loc 2 270 0
 1509 02e2 488B07   		movq	(%rdi), %rax
 1510              	.LVL139:
 1511 02e5 89D9     		movl	%ebx, %ecx
 1512 02e7 FF5048   		call	*72(%rax)
 1513              	.LVL140:
 1514              	.LBE627:
 1515              	.LBE628:
 1516              	.LBB629:
 1517              	.LBB630:
 1518 02ea 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1518      000000
 1519 02f1 8B74243C 		movl	60(%rsp), %esi
 1520 02f5 89D9     		movl	%ebx, %ecx
 1521 02f7 4489EA   		movl	%r13d, %edx
 1522 02fa 488B07   		movq	(%rdi), %rax
 1523 02fd 83EE01   		subl	$1, %esi
 1524 0300 488B4048 		movq	72(%rax), %rax
 1525              	.LBE630:
 1526              	.LBE629:
 1527              		.loc 1 217 0
 1528 0304 4883C448 		addq	$72, %rsp
 1529              		.cfi_remember_state
 1530              		.cfi_def_cfa_offset 56
 1531 0308 5B       		popq	%rbx
 1532              		.cfi_def_cfa_offset 48
 1533              	.LVL141:
 1534 0309 5D       		popq	%rbp
 1535              		.cfi_def_cfa_offset 40
 1536              	.LVL142:
 1537 030a 415C     		popq	%r12
 1538              		.cfi_def_cfa_offset 32
 1539              	.LVL143:
 1540 030c 415D     		popq	%r13
 1541              		.cfi_def_cfa_offset 24
 1542              	.LVL144:
 1543 030e 415E     		popq	%r14
 1544              		.cfi_def_cfa_offset 16
 1545 0310 415F     		popq	%r15
 1546              		.cfi_def_cfa_offset 8
 1547              	.LBB631:
 1548              	.LBB632:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1549              		.loc 2 255 0
 1550 0312 FFE0     		jmp	*%rax
 1551              	.LVL145:
 1552              		.p2align 4,,10
 1553 0314 0F1F4000 		.p2align 3
 1554              	.L19:
 1555              		.cfi_restore_state
 1556              	.LBE632:
 1557              	.LBE631:
 1558              		.loc 1 152 0
 1559 0318 31DB     		xorl	%ebx, %ebx
 1560              	.LVL146:
 1561 031a 3B44242C 		cmpl	44(%rsp), %eax
 1562              		.loc 1 189 0
 1563 031e 8B542408 		movl	8(%rsp), %edx
 1564              		.loc 1 152 0
 1565 0322 0F9DC3   		setge	%bl
 1566 0325 83C301   		addl	$1, %ebx
 1567              		.loc 1 189 0
 1568 0328 85D2     		testl	%edx, %edx
 1569              		.loc 1 152 0
 1570 032a 895C2424 		movl	%ebx, 36(%rsp)
 1571              	.LVL147:
 1572 032e 8B5C2438 		movl	56(%rsp), %ebx
 1573              	.LVL148:
 1574              		.loc 1 189 0
 1575 0332 0F8E8E02 		jle	.L33
 1575      0000
 1576 0338 8B4C2410 		movl	16(%rsp), %ecx
 1577 033c 8B74240C 		movl	12(%rsp), %esi
 1578 0340 448B4424 		movl	36(%rsp), %r8d
 1578      24
 1579 0345 01CB     		addl	%ecx, %ebx
 1580 0347 4189F6   		movl	%esi, %r14d
 1581              	.LVL149:
 1582 034a 895C2414 		movl	%ebx, 20(%rsp)
 1583 034e 83EB01   		subl	$1, %ebx
 1584 0351 895C241C 		movl	%ebx, 28(%rsp)
 1585 0355 8D5901   		leal	1(%rcx), %ebx
 1586 0358 488B4C24 		movq	48(%rsp), %rcx
 1586      30
 1587 035d 895C2418 		movl	%ebx, 24(%rsp)
 1588 0361 4863D8   		movslq	%eax, %rbx
 1589 0364 8B44242C 		movl	44(%rsp), %eax
 1590              	.LVL150:
 1591 0368 4989CF   		movq	%rcx, %r15
 1592              	.LVL151:
 1593 036b 4801CB   		addq	%rcx, %rbx
 1594              	.LVL152:
 1595 036e 01F0     		addl	%esi, %eax
 1596 0370 448D68FF 		leal	-1(%rax), %r13d
 1597 0374 8944243C 		movl	%eax, 60(%rsp)
 1598              	.LVL153:
 1599 0378 0F1F8400 		.p2align 4,,10
 1599      00000000 
 1600              		.p2align 3
 1601              	.L27:
 1602              		.loc 1 191 0 discriminator 2
 1603 0380 490FBE07 		movsbq	(%r15), %rax
 1604              	.LBB635:
 1605              	.LBB636:
 1606              		.loc 1 42 0 discriminator 2
 1607 0384 F30F1005 		movss	.LC0(%rip), %xmm0
 1607      00000000 
 1608 038c 4489E6   		movl	%r12d, %esi
 1609 038f 44894424 		movl	%r8d, 32(%rsp)
 1609      20
 1610              	.LVL154:
 1611 0394 4983C701 		addq	$1, %r15
 1612              	.LVL155:
 1613 0398 4883EB01 		subq	$1, %rbx
 1614 039c 0FB67C05 		movzbl	0(%rbp,%rax), %edi
 1614      00
 1615 03a1 E8000000 		call	_Z16fl_color_averagejjf
 1615      00
 1616              	.LVL156:
 1617              	.LBE636:
 1618              	.LBE635:
 1619              	.LBB637:
 1620              	.LBB638:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1621              		.loc 2 52 0 discriminator 2
 1622 03a6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1622      000000
 1623 03ad 89C6     		movl	%eax, %esi
 1624 03af 488B17   		movq	(%rdi), %rdx
 1625 03b2 FF928800 		call	*136(%rdx)
 1625      0000
 1626              	.LVL157:
 1627              	.LBE638:
 1628              	.LBE637:
 1629              	.LBB639:
 1630              	.LBB640:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1631              		.loc 2 270 0 discriminator 2
 1632 03b8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1632      000000
 1633 03bf 8B4C241C 		movl	28(%rsp), %ecx
 1634 03c3 4489F6   		movl	%r14d, %esi
 1635 03c6 8B542418 		movl	24(%rsp), %edx
 1636 03ca 4183C601 		addl	$1, %r14d
 1637              	.LVL158:
 1638 03ce 488B07   		movq	(%rdi), %rax
 1639 03d1 FF5048   		call	*72(%rax)
 1640              	.LVL159:
 1641              	.LBE640:
 1642              	.LBE639:
 1643              		.loc 1 194 0 discriminator 2
 1644 03d4 490FBE47 		movsbq	-1(%r15), %rax
 1644      FF
 1645              	.LBB641:
 1646              	.LBB642:
 1647              		.loc 1 42 0 discriminator 2
 1648 03d9 F30F1005 		movss	.LC0(%rip), %xmm0
 1648      00000000 
 1649 03e1 4489E6   		movl	%r12d, %esi
 1650 03e4 0FB67C05 		movzbl	-2(%rbp,%rax), %edi
 1650      FE
 1651 03e9 E8000000 		call	_Z16fl_color_averagejjf
 1651      00
 1652              	.LVL160:
 1653              	.LBE642:
 1654              	.LBE641:
 1655              	.LBB643:
 1656              	.LBB644:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1657              		.loc 2 52 0 discriminator 2
 1658 03ee 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1658      000000
 1659 03f5 89C6     		movl	%eax, %esi
 1660 03f7 488B17   		movq	(%rdi), %rdx
 1661 03fa FF928800 		call	*136(%rdx)
 1661      0000
 1662              	.LVL161:
 1663              	.LBE644:
 1664              	.LBE643:
 1665              	.LBB645:
 1666              	.LBB646:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 1667              		.loc 2 147 0 discriminator 2
 1668 0400 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1668      000000
 1669 0407 8B542410 		movl	16(%rsp), %edx
 1670 040b 4489F6   		movl	%r14d, %esi
 1671 040e 488B07   		movq	(%rdi), %rax
 1672 0411 FF909800 		call	*152(%rax)
 1672      0000
 1673              	.LVL162:
 1674              	.LBE646:
 1675              	.LBE645:
 1676              	.LBB647:
 1677              	.LBB648:
 1678 0417 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1678      000000
 1679 041e 8B542414 		movl	20(%rsp), %edx
 1680 0422 4489F6   		movl	%r14d, %esi
 1681 0425 488B07   		movq	(%rdi), %rax
 1682 0428 FF909800 		call	*152(%rax)
 1682      0000
 1683              	.LVL163:
 1684              	.LBE648:
 1685              	.LBE647:
 1686              		.loc 1 199 0 discriminator 2
 1687 042e 480FBE43 		movsbq	1(%rbx), %rax
 1687      01
 1688              	.LBB649:
 1689              	.LBB650:
 1690              		.loc 1 42 0 discriminator 2
 1691 0433 F30F1005 		movss	.LC0(%rip), %xmm0
 1691      00000000 
 1692 043b 4489E6   		movl	%r12d, %esi
 1693 043e 0FB67C05 		movzbl	0(%rbp,%rax), %edi
 1693      00
 1694 0443 E8000000 		call	_Z16fl_color_averagejjf
 1694      00
 1695              	.LVL164:
 1696              	.LBE650:
 1697              	.LBE649:
 1698              	.LBB651:
 1699              	.LBB652:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1700              		.loc 2 52 0 discriminator 2
 1701 0448 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1701      000000
 1702 044f 89C6     		movl	%eax, %esi
 1703 0451 488B17   		movq	(%rdi), %rdx
 1704 0454 FF928800 		call	*136(%rdx)
 1704      0000
 1705              	.LVL165:
 1706              	.LBE652:
 1707              	.LBE651:
 1708              	.LBB653:
 1709              	.LBB654:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1710              		.loc 2 270 0 discriminator 2
 1711 045a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1711      000000
 1712 0461 8B4C241C 		movl	28(%rsp), %ecx
 1713 0465 4489EE   		movl	%r13d, %esi
 1714 0468 8B542418 		movl	24(%rsp), %edx
 1715 046c 4183ED01 		subl	$1, %r13d
 1716              	.LVL166:
 1717 0470 488B07   		movq	(%rdi), %rax
 1718 0473 FF5048   		call	*72(%rax)
 1719              	.LVL167:
 1720              	.LBE654:
 1721              	.LBE653:
 1722              		.loc 1 202 0 discriminator 2
 1723 0476 480FBE43 		movsbq	1(%rbx), %rax
 1723      01
 1724              	.LBB655:
 1725              	.LBB656:
 1726              		.loc 1 42 0 discriminator 2
 1727 047b F30F1005 		movss	.LC0(%rip), %xmm0
 1727      00000000 
 1728 0483 4489E6   		movl	%r12d, %esi
 1729 0486 0FB67C05 		movzbl	-2(%rbp,%rax), %edi
 1729      FE
 1730 048b E8000000 		call	_Z16fl_color_averagejjf
 1730      00
 1731              	.LVL168:
 1732              	.LBE656:
 1733              	.LBE655:
 1734              	.LBB657:
 1735              	.LBB658:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1736              		.loc 2 52 0 discriminator 2
 1737 0490 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1737      000000
 1738 0497 89C6     		movl	%eax, %esi
 1739 0499 488B17   		movq	(%rdi), %rdx
 1740 049c FF928800 		call	*136(%rdx)
 1740      0000
 1741              	.LVL169:
 1742              	.LBE658:
 1743              	.LBE657:
 1744              	.LBB659:
 1745              	.LBB660:
 147:fltk-1.3.4-1/FL/fl_draw.H **** 
 1746              		.loc 2 147 0 discriminator 2
 1747 04a2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1747      000000
 1748 04a9 8B542410 		movl	16(%rsp), %edx
 1749 04ad 4489EE   		movl	%r13d, %esi
 1750 04b0 488B07   		movq	(%rdi), %rax
 1751 04b3 FF909800 		call	*152(%rax)
 1751      0000
 1752              	.LVL170:
 1753              	.LBE660:
 1754              	.LBE659:
 1755              	.LBB661:
 1756              	.LBB662:
 1757 04b9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1757      000000
 1758 04c0 8B542414 		movl	20(%rsp), %edx
 1759 04c4 4489EE   		movl	%r13d, %esi
 1760 04c7 488B07   		movq	(%rdi), %rax
 1761 04ca FF909800 		call	*152(%rax)
 1761      0000
 1762              	.LVL171:
 1763 04d0 448B4424 		movl	32(%rsp), %r8d
 1763      20
 1764 04d5 8B4C2424 		movl	36(%rsp), %ecx
 1765 04d9 4489C0   		movl	%r8d, %eax
 1766 04dc 4101C8   		addl	%ecx, %r8d
 1767              	.LBE662:
 1768              	.LBE661:
 1769              		.loc 1 189 0 discriminator 2
 1770 04df 39442408 		cmpl	%eax, 8(%rsp)
 1771 04e3 0F8F97FE 		jg	.L27
 1771      FFFF
 1772              	.LVL172:
 1773              	.L26:
 1774              		.loc 1 208 0
 1775 04e9 8B442408 		movl	8(%rsp), %eax
 1776              		.loc 1 210 0
 1777 04ed 4C637424 		movslq	8(%rsp), %r14
 1777      08
 1778              	.LBB663:
 1779              	.LBB664:
 1780              		.loc 1 42 0
 1781 04f2 4489E6   		movl	%r12d, %esi
 1782              	.LBE664:
 1783              	.LBE663:
 1784              		.loc 1 210 0
 1785 04f5 4C037424 		addq	48(%rsp), %r14
 1785      30
 1786              	.LBB667:
 1787              	.LBB665:
 1788              		.loc 1 42 0
 1789 04fa F30F1005 		movss	.LC0(%rip), %xmm0
 1789      00000000 
 1790              	.LBE665:
 1791              	.LBE667:
 1792              		.loc 1 208 0
 1793 0502 99       		cltd
 1794 0503 F77C2424 		idivl	36(%rsp)
 1795 0507 89C3     		movl	%eax, %ebx
 1796              	.LVL173:
 1797              		.loc 1 210 0
 1798 0509 490FBE06 		movsbq	(%r14), %rax
 1799              	.LVL174:
 1800              	.LBB668:
 1801              	.LBB666:
 1802              		.loc 1 42 0
 1803 050d 0FB67C05 		movzbl	0(%rbp,%rax), %edi
 1803      00
 1804 0512 E8000000 		call	_Z16fl_color_averagejjf
 1804      00
 1805              	.LVL175:
 1806              	.LBE666:
 1807              	.LBE668:
 1808              	.LBB669:
 1809              	.LBB670:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1810              		.loc 2 52 0
 1811 0517 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1811      000000
 1812 051e 89C6     		movl	%eax, %esi
 1813 0520 488B17   		movq	(%rdi), %rdx
 1814 0523 FF928800 		call	*136(%rdx)
 1814      0000
 1815              	.LVL176:
 1816              	.LBE670:
 1817              	.LBE669:
 1818              	.LBB671:
 1819              	.LBB672:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1820              		.loc 2 206 0
 1821 0529 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1821      000000
 1822 0530 8B4C242C 		movl	44(%rsp), %ecx
 1823 0534 8D041B   		leal	(%rbx,%rbx), %eax
 1824              	.LBE672:
 1825              	.LBE671:
 1826              		.loc 1 211 0
 1827 0537 448B6C24 		movl	12(%rsp), %r13d
 1827      0C
 1828              	.LBB675:
 1829              	.LBB673:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1830              		.loc 2 206 0
 1831 053c 8B742438 		movl	56(%rsp), %esi
 1832 0540 8B542418 		movl	24(%rsp), %edx
 1833 0544 29C1     		subl	%eax, %ecx
 1834 0546 488B07   		movq	(%rdi), %rax
 1835              	.LBE673:
 1836              	.LBE675:
 1837              		.loc 1 211 0
 1838 0549 4101DD   		addl	%ebx, %r13d
 1839              	.LVL177:
 1840              	.LBB676:
 1841              	.LBB674:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 1842              		.loc 2 206 0
 1843 054c 448D46FF 		leal	-1(%rsi), %r8d
 1844 0550 4489EE   		movl	%r13d, %esi
 1845 0553 FF5020   		call	*32(%rax)
 1846              	.LVL178:
 1847              	.LBE674:
 1848              	.LBE676:
 1849              		.loc 1 213 0
 1850 0556 490FBE06 		movsbq	(%r14), %rax
 1851              	.LBB677:
 1852              	.LBB678:
 1853              		.loc 1 42 0
 1854 055a F30F1005 		movss	.LC0(%rip), %xmm0
 1854      00000000 
 1855 0562 4489E6   		movl	%r12d, %esi
 1856 0565 0FB67C05 		movzbl	-2(%rbp,%rax), %edi
 1856      FE
 1857 056a E8000000 		call	_Z16fl_color_averagejjf
 1857      00
 1858              	.LVL179:
 1859              	.LBE678:
 1860              	.LBE677:
 1861              	.LBB679:
 1862              	.LBB680:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 1863              		.loc 2 52 0
 1864 056f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1864      000000
 1865 0576 89C6     		movl	%eax, %esi
 1866 0578 488B17   		movq	(%rdi), %rdx
 1867 057b FF928800 		call	*136(%rdx)
 1867      0000
 1868              	.LVL180:
 1869              	.LBE680:
 1870              	.LBE679:
 1871              		.loc 1 214 0
 1872 0581 8B44243C 		movl	60(%rsp), %eax
 1873              	.LBB681:
 1874              	.LBB682:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1875              		.loc 2 255 0
 1876 0585 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1876      000000
 1877 058c 4489EE   		movl	%r13d, %esi
 1878 058f 8B542410 		movl	16(%rsp), %edx
 1879              	.LBE682:
 1880              	.LBE681:
 1881              		.loc 1 214 0
 1882 0593 29D8     		subl	%ebx, %eax
 1883 0595 89C3     		movl	%eax, %ebx
 1884              	.LVL181:
 1885              	.LBB684:
 1886              	.LBB683:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1887              		.loc 2 255 0
 1888 0597 488B07   		movq	(%rdi), %rax
 1889              	.LVL182:
 1890 059a 89D9     		movl	%ebx, %ecx
 1891 059c FF5030   		call	*48(%rax)
 1892              	.LVL183:
 1893              	.LBE683:
 1894              	.LBE684:
 1895              	.LBB685:
 1896              	.LBB633:
 1897 059f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1897      000000
 1898 05a6 8B542414 		movl	20(%rsp), %edx
 1899 05aa 89D9     		movl	%ebx, %ecx
 1900 05ac 4489EE   		movl	%r13d, %esi
 1901 05af 488B07   		movq	(%rdi), %rax
 1902 05b2 488B4030 		movq	48(%rax), %rax
 1903              	.LBE633:
 1904              	.LBE685:
 1905              		.loc 1 217 0
 1906 05b6 4883C448 		addq	$72, %rsp
 1907              		.cfi_remember_state
 1908              		.cfi_def_cfa_offset 56
 1909 05ba 5B       		popq	%rbx
 1910              		.cfi_def_cfa_offset 48
 1911              	.LVL184:
 1912 05bb 5D       		popq	%rbp
 1913              		.cfi_def_cfa_offset 40
 1914              	.LVL185:
 1915 05bc 415C     		popq	%r12
 1916              		.cfi_def_cfa_offset 32
 1917              	.LVL186:
 1918 05be 415D     		popq	%r13
 1919              		.cfi_def_cfa_offset 24
 1920              	.LVL187:
 1921 05c0 415E     		popq	%r14
 1922              		.cfi_def_cfa_offset 16
 1923 05c2 415F     		popq	%r15
 1924              		.cfi_def_cfa_offset 8
 1925              	.LBB686:
 1926              	.LBB634:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 1927              		.loc 2 255 0
 1928 05c4 FFE0     		jmp	*%rax
 1929              	.LVL188:
 1930              	.L33:
 1931              		.cfi_restore_state
 1932 05c6 8B442410 		movl	16(%rsp), %eax
 1933              	.LVL189:
 1934 05ca 8B4C240C 		movl	12(%rsp), %ecx
 1935 05ce 01C3     		addl	%eax, %ebx
 1936 05d0 83C001   		addl	$1, %eax
 1937 05d3 895C2414 		movl	%ebx, 20(%rsp)
 1938 05d7 8B5C242C 		movl	44(%rsp), %ebx
 1939 05db 89442418 		movl	%eax, 24(%rsp)
 1940 05df 01CB     		addl	%ecx, %ebx
 1941 05e1 895C243C 		movl	%ebx, 60(%rsp)
 1942 05e5 E9FFFEFF 		jmp	.L26
 1942      FF
 1943              	.LVL190:
 1944              	.L32:
 1945 05ea 8B5C2410 		movl	16(%rsp), %ebx
 1946              	.LVL191:
 1947 05ee 8B442438 		movl	56(%rsp), %eax
 1948              	.LVL192:
 1949 05f2 01D8     		addl	%ebx, %eax
 1950 05f4 89442414 		movl	%eax, 20(%rsp)
 1951 05f8 8B44240C 		movl	12(%rsp), %eax
 1952 05fc 8D5801   		leal	1(%rax), %ebx
 1953 05ff 895C2418 		movl	%ebx, 24(%rsp)
 1954 0603 8B5C242C 		movl	44(%rsp), %ebx
 1955 0607 01D8     		addl	%ebx, %eax
 1956 0609 8944243C 		movl	%eax, 60(%rsp)
 1957 060d E91FFCFF 		jmp	.L22
 1957      FF
 1958              	.LBE634:
 1959              	.LBE686:
 1960              		.cfi_endproc
 1961              	.LFE485:
 1963              		.section	.text.unlikely._ZL10shade_rectiiiiPKcj
 1964              	.LCOLDE12:
 1965              		.section	.text._ZL10shade_rectiiiiPKcj
 1966              	.LHOTE12:
 1967              		.section	.text.unlikely._ZL10frame_rectiiiiPKcj,"ax",@progbits
 1968              	.LCOLDB13:
 1969              		.section	.text._ZL10frame_rectiiiiPKcj,"ax",@progbits
 1970              	.LHOTB13:
 1971              		.p2align 4,,15
 1973              	_ZL10frame_rectiiiiPKcj:
 1974              	.LFB483:
 1975              		.loc 1 73 0
 1976              		.cfi_startproc
 1977              	.LVL193:
 1978 0000 4157     		pushq	%r15
 1979              		.cfi_def_cfa_offset 16
 1980              		.cfi_offset 15, -16
 1981 0002 4156     		pushq	%r14
 1982              		.cfi_def_cfa_offset 24
 1983              		.cfi_offset 14, -24
 1984 0004 4189FF   		movl	%edi, %r15d
 1985 0007 4155     		pushq	%r13
 1986              		.cfi_def_cfa_offset 32
 1987              		.cfi_offset 13, -32
 1988 0009 4154     		pushq	%r12
 1989              		.cfi_def_cfa_offset 40
 1990              		.cfi_offset 12, -40
 1991 000b 4D89C4   		movq	%r8, %r12
 1992 000e 55       		pushq	%rbp
 1993              		.cfi_def_cfa_offset 48
 1994              		.cfi_offset 6, -48
 1995 000f 53       		pushq	%rbx
 1996              		.cfi_def_cfa_offset 56
 1997              		.cfi_offset 3, -56
 1998 0010 89D5     		movl	%edx, %ebp
 1999 0012 89CB     		movl	%ecx, %ebx
 2000 0014 4589CE   		movl	%r9d, %r14d
 2001 0017 4883EC28 		subq	$40, %rsp
 2002              		.cfi_def_cfa_offset 96
 2003              		.loc 1 73 0
 2004 001b 89742404 		movl	%esi, 4(%rsp)
 2005              		.loc 1 74 0
 2006 001f E8000000 		call	_Z12fl_gray_rampv
 2006      00
 2007              	.LVL194:
 2008              		.loc 1 75 0
 2009 0024 4C89E7   		movq	%r12, %rdi
 2010              		.loc 1 74 0
 2011 0027 4989C5   		movq	%rax, %r13
 2012              	.LVL195:
 2013              		.loc 1 75 0
 2014 002a E8000000 		call	strlen
 2014      00
 2015              	.LVL196:
 2016 002f 8D5003   		leal	3(%rax), %edx
 2017 0032 85C0     		testl	%eax, %eax
 2018              		.loc 1 77 0
 2019 0034 8B742404 		movl	4(%rsp), %esi
 2020              		.loc 1 75 0
 2021 0038 0F48C2   		cmovs	%edx, %eax
 2022 003b C1F802   		sarl	$2, %eax
 2023 003e 8D5001   		leal	1(%rax), %edx
 2024              	.LVL197:
 2025              		.loc 1 77 0
 2026 0041 428D0C3A 		leal	(%rdx,%r15), %ecx
 2027 0045 448D3C32 		leal	(%rdx,%rsi), %r15d
 2028              	.LVL198:
 2029 0049 89CF     		movl	%ecx, %edi
 2030 004b 890C24   		movl	%ecx, (%rsp)
 2031              	.LVL199:
 2032 004e 8D0C12   		leal	(%rdx,%rdx), %ecx
 2033              	.LVL200:
 2034 0051 29CD     		subl	%ecx, %ebp
 2035              	.LVL201:
 2036 0053 29CB     		subl	%ecx, %ebx
 2037              	.LVL202:
 2038 0055 83FA01   		cmpl	$1, %edx
 2039 0058 0F8EB701 		jle	.L34
 2039      0000
 2040 005e 8D142F   		leal	(%rdi,%rbp), %edx
 2041              	.LVL203:
 2042 0061 4401FB   		addl	%r15d, %ebx
 2043              	.LVL204:
 2044 0064 89F9     		movl	%edi, %ecx
 2045              	.LVL205:
 2046 0066 89DF     		movl	%ebx, %edi
 2047              	.LVL206:
 2048 0068 895C2404 		movl	%ebx, 4(%rsp)
 2049 006c 4429F9   		subl	%r15d, %ecx
 2050              	.LVL207:
 2051 006f 8D2C10   		leal	(%rax,%rdx), %ebp
 2052              	.LVL208:
 2053 0072 418D47FF 		leal	-1(%r15), %eax
 2054              	.LVL209:
 2055 0076 8D5AFF   		leal	-1(%rdx), %ebx
 2056 0079 894C241C 		movl	%ecx, 28(%rsp)
 2057 007d 89442414 		movl	%eax, 20(%rsp)
 2058 0081 89F8     		movl	%edi, %eax
 2059 0083 895C2408 		movl	%ebx, 8(%rsp)
 2060 0087 83C001   		addl	$1, %eax
 2061 008a 89F3     		movl	%esi, %ebx
 2062 008c 29D0     		subl	%edx, %eax
 2063 008e 89442418 		movl	%eax, 24(%rsp)
 2064              		.p2align 4,,10
 2065 0092 660F1F44 		.p2align 3
 2065      0000
 2066              	.L37:
 2067              	.LVL210:
 2068              		.loc 1 81 0 discriminator 2
 2069 0098 490FBE04 		movsbq	(%r12), %rax
 2069      24
 2070              	.LBB687:
 2071              	.LBB688:
 2072              		.loc 1 42 0 discriminator 2
 2073 009d F30F1005 		movss	.LC0(%rip), %xmm0
 2073      00000000 
 2074 00a5 4489F6   		movl	%r14d, %esi
 2075 00a8 4983C404 		addq	$4, %r12
 2076              	.LVL211:
 2077 00ac 410FB67C 		movzbl	0(%r13,%rax), %edi
 2077      0500
 2078 00b2 E8000000 		call	_Z16fl_color_averagejjf
 2078      00
 2079              	.LVL212:
 2080              	.LBE688:
 2081              	.LBE687:
 2082              	.LBB689:
 2083              	.LBB690:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2084              		.loc 2 52 0 discriminator 2
 2085 00b7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2085      000000
 2086 00be 89C6     		movl	%eax, %esi
 2087 00c0 488B17   		movq	(%rdi), %rdx
 2088 00c3 FF928800 		call	*136(%rdx)
 2088      0000
 2089              	.LVL213:
 2090 00c9 8B442418 		movl	24(%rsp), %eax
 2091              	.LBE690:
 2092              	.LBE689:
 2093              	.LBB691:
 2094              	.LBB692:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 2095              		.loc 2 227 0 discriminator 2
 2096 00cd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2096      000000
 2097 00d4 4883EC08 		subq	$8, %rsp
 2098              		.cfi_def_cfa_offset 104
 2099              	.LVL214:
 2100 00d8 8B4C240C 		movl	12(%rsp), %ecx
 2101 00dc 4189E9   		movl	%ebp, %r9d
 2102 00df 448D1C28 		leal	(%rax,%rbp), %r11d
 2103              	.LVL215:
 2104 00e3 488B07   		movq	(%rdi), %rax
 2105 00e6 51       		pushq	%rcx
 2106              		.cfi_def_cfa_offset 112
 2107 00e7 8B4C2418 		movl	24(%rsp), %ecx
 2108 00eb 4589D8   		movl	%r11d, %r8d
 2109 00ee 4489DA   		movl	%r11d, %edx
 2110 00f1 8B742410 		movl	16(%rsp), %esi
 2111 00f5 44895C24 		movl	%r11d, 32(%rsp)
 2111      20
 2112 00fa FF5068   		call	*104(%rax)
 2113              	.LVL216:
 2114              	.LBE692:
 2115              	.LBE691:
 2116              		.loc 1 83 0 discriminator 2
 2117 00fd 490FBE44 		movsbq	-3(%r12), %rax
 2117      24FD
 2118              	.LBB693:
 2119              	.LBB694:
 2120              		.loc 1 42 0 discriminator 2
 2121 0103 F30F1005 		movss	.LC0(%rip), %xmm0
 2121      00000000 
 2122 010b 4489F6   		movl	%r14d, %esi
 2123 010e 410FB67C 		movzbl	0(%r13,%rax), %edi
 2123      0500
 2124 0114 E8000000 		call	_Z16fl_color_averagejjf
 2124      00
 2125              	.LVL217:
 2126              	.LBE694:
 2127              	.LBE693:
 2128              	.LBB695:
 2129              	.LBB696:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2130              		.loc 2 52 0 discriminator 2
 2131 0119 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2131      000000
 2132 0120 89C6     		movl	%eax, %esi
 2133 0122 488B17   		movq	(%rdi), %rdx
 2134 0125 FF928800 		call	*136(%rdx)
 2134      0000
 2135              	.LVL218:
 2136              	.LBE696:
 2137              	.LBE695:
 2138              	.LBB697:
 2139              	.LBB698:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 2140              		.loc 2 227 0 discriminator 2
 2141 012b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2141      000000
 2142 0132 448B4C24 		movl	24(%rsp), %r9d
 2142      18
 2143 0137 89E9     		movl	%ebp, %ecx
 2144 0139 8B542414 		movl	20(%rsp), %edx
 2145 013d 4589F8   		movl	%r15d, %r8d
 2146 0140 89EE     		movl	%ebp, %esi
 2147 0142 83ED01   		subl	$1, %ebp
 2148              	.LVL219:
 2149 0145 488B07   		movq	(%rdi), %rax
 2150 0148 891C24   		movl	%ebx, (%rsp)
 2151 014b FF5068   		call	*104(%rax)
 2152              	.LVL220:
 2153              	.LBE698:
 2154              	.LBE697:
 2155              		.loc 1 85 0 discriminator 2
 2156 014e 490FBE44 		movsbq	-2(%r12), %rax
 2156      24FE
 2157              	.LBB699:
 2158              	.LBB700:
 2159              		.loc 1 42 0 discriminator 2
 2160 0154 F30F1005 		movss	.LC0(%rip), %xmm0
 2160      00000000 
 2161 015c 4489F6   		movl	%r14d, %esi
 2162 015f 410FB67C 		movzbl	0(%r13,%rax), %edi
 2162      0500
 2163 0165 E8000000 		call	_Z16fl_color_averagejjf
 2163      00
 2164              	.LVL221:
 2165              	.LBE700:
 2166              	.LBE699:
 2167              	.LBB701:
 2168              	.LBB702:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2169              		.loc 2 52 0 discriminator 2
 2170 016a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2170      000000
 2171 0171 89C6     		movl	%eax, %esi
 2172 0173 488B17   		movq	(%rdi), %rdx
 2173 0176 FF928800 		call	*136(%rdx)
 2173      0000
 2174              	.LVL222:
 2175 017c 8B44242C 		movl	44(%rsp), %eax
 2176              	.LBE702:
 2177              	.LBE701:
 2178              	.LBB703:
 2179              	.LBB704:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 2180              		.loc 2 227 0 discriminator 2
 2181 0180 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2181      000000
 2182 0187 4189D8   		movl	%ebx, %r8d
 2183 018a 8B4C2410 		movl	16(%rsp), %ecx
 2184 018e 89DA     		movl	%ebx, %edx
 2185 0190 8B742418 		movl	24(%rsp), %esi
 2186 0194 448D1418 		leal	(%rax,%rbx), %r10d
 2187              	.LVL223:
 2188 0198 488B07   		movq	(%rdi), %rax
 2189 019b 44893C24 		movl	%r15d, (%rsp)
 2190 019f 83C301   		addl	$1, %ebx
 2191              	.LVL224:
 2192 01a2 44895424 		movl	%r10d, 28(%rsp)
 2192      1C
 2193 01a7 4589D1   		movl	%r10d, %r9d
 2194 01aa FF5068   		call	*104(%rax)
 2195              	.LVL225:
 2196              	.LBE704:
 2197              	.LBE703:
 2198              		.loc 1 87 0 discriminator 2
 2199 01ad 490FBE44 		movsbq	-1(%r12), %rax
 2199      24FF
 2200              	.LBB705:
 2201              	.LBB706:
 2202              		.loc 1 42 0 discriminator 2
 2203 01b3 F30F1005 		movss	.LC0(%rip), %xmm0
 2203      00000000 
 2204 01bb 4489F6   		movl	%r14d, %esi
 2205 01be 410FB67C 		movzbl	0(%r13,%rax), %edi
 2205      0500
 2206 01c4 E8000000 		call	_Z16fl_color_averagejjf
 2206      00
 2207              	.LVL226:
 2208              	.LBE706:
 2209              	.LBE705:
 2210              	.LBB707:
 2211              	.LBB708:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2212              		.loc 2 52 0 discriminator 2
 2213 01c9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2213      000000
 2214 01d0 89C6     		movl	%eax, %esi
 2215 01d2 488B17   		movq	(%rdi), %rdx
 2216 01d5 FF928800 		call	*136(%rdx)
 2216      0000
 2217              	.LVL227:
 2218              	.LBE708:
 2219              	.LBE707:
 2220              	.LBB709:
 2221              	.LBB710:
 227:fltk-1.3.4-1/FL/fl_draw.H **** 
 2222              		.loc 2 227 0 discriminator 2
 2223 01db 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2223      000000
 2224 01e2 448B5424 		movl	28(%rsp), %r10d
 2224      1C
 2225 01e7 4489FA   		movl	%r15d, %edx
 2226 01ea 448B5C24 		movl	32(%rsp), %r11d
 2226      20
 2227 01ef 448B4C24 		movl	16(%rsp), %r9d
 2227      10
 2228 01f4 448B4424 		movl	20(%rsp), %r8d
 2228      14
 2229 01f9 488B07   		movq	(%rdi), %rax
 2230 01fc 4489D1   		movl	%r10d, %ecx
 2231 01ff 4489D6   		movl	%r10d, %esi
 2232 0202 44891C24 		movl	%r11d, (%rsp)
 2233 0206 FF5068   		call	*104(%rax)
 2234              	.LVL228:
 2235              	.LBE710:
 2236              	.LBE709:
 2237              		.loc 1 77 0 discriminator 2
 2238 0209 58       		popq	%rax
 2239              		.cfi_def_cfa_offset 104
 2240 020a 5A       		popq	%rdx
 2241              		.cfi_def_cfa_offset 96
 2242              	.LVL229:
 2243 020b 3B5C2414 		cmpl	20(%rsp), %ebx
 2244 020f 0F8583FE 		jne	.L37
 2244      FFFF
 2245              	.L34:
 2246              		.loc 1 90 0
 2247 0215 4883C428 		addq	$40, %rsp
 2248              		.cfi_def_cfa_offset 56
 2249              	.LVL230:
 2250 0219 5B       		popq	%rbx
 2251              		.cfi_def_cfa_offset 48
 2252 021a 5D       		popq	%rbp
 2253              		.cfi_def_cfa_offset 40
 2254 021b 415C     		popq	%r12
 2255              		.cfi_def_cfa_offset 32
 2256              	.LVL231:
 2257 021d 415D     		popq	%r13
 2258              		.cfi_def_cfa_offset 24
 2259              	.LVL232:
 2260 021f 415E     		popq	%r14
 2261              		.cfi_def_cfa_offset 16
 2262              	.LVL233:
 2263 0221 415F     		popq	%r15
 2264              		.cfi_def_cfa_offset 8
 2265              	.LVL234:
 2266 0223 C3       		ret
 2267              		.cfi_endproc
 2268              	.LFE483:
 2270              		.section	.text.unlikely._ZL10frame_rectiiiiPKcj
 2271              	.LCOLDE13:
 2272              		.section	.text._ZL10frame_rectiiiiPKcj
 2273              	.LHOTE13:
 2274              		.section	.rodata.str1.1,"aMS",@progbits,1
 2275              	.LC14:
 2276 0000 4C4C4C4C 		.string	"LLLLTTRR"
 2276      54545252 
 2276      00
 2277              		.section	.text.unlikely._ZL10down_frameiiiij,"ax",@progbits
 2278              	.LCOLDB15:
 2279              		.section	.text._ZL10down_frameiiiij,"ax",@progbits
 2280              	.LHOTB15:
 2281              		.p2align 4,,15
 2283              	_ZL10down_frameiiiij:
 2284              	.LFB492:
 2285              		.loc 1 331 0
 2286              		.cfi_startproc
 2287              	.LVL235:
 2288              		.loc 1 332 0
 2289 0000 4589C1   		movl	%r8d, %r9d
 2290 0003 83E901   		subl	$1, %ecx
 2291              	.LVL236:
 2292 0006 41B80000 		movl	$.LC14, %r8d
 2292      0000
 2293              	.LVL237:
 2294 000c E9000000 		jmp	_ZL10frame_rectiiiiPKcj
 2294      00
 2295              	.LVL238:
 2296              		.cfi_endproc
 2297              	.LFE492:
 2299              		.section	.text.unlikely._ZL10down_frameiiiij
 2300              	.LCOLDE15:
 2301              		.section	.text._ZL10down_frameiiiij
 2302              	.LHOTE15:
 2303              		.section	.rodata.str1.1
 2304              	.LC16:
 2305 0009 4B4C4449 		.string	"KLDIIJLM"
 2305      494A4C4D 
 2305      00
 2306              		.section	.text.unlikely._ZL8up_frameiiiij,"ax",@progbits
 2307              	.LCOLDB17:
 2308              		.section	.text._ZL8up_frameiiiij,"ax",@progbits
 2309              	.LHOTB17:
 2310              		.p2align 4,,15
 2312              	_ZL8up_frameiiiij:
 2313              	.LFB487:
 2314              		.loc 1 273 0
 2315              		.cfi_startproc
 2316              	.LVL239:
 2317              		.loc 1 274 0
 2318 0000 4589C1   		movl	%r8d, %r9d
 2319 0003 83E901   		subl	$1, %ecx
 2320              	.LVL240:
 2321 0006 41B80000 		movl	$.LC16, %r8d
 2321      0000
 2322              	.LVL241:
 2323 000c E9000000 		jmp	_ZL10frame_rectiiiiPKcj
 2323      00
 2324              	.LVL242:
 2325              		.cfi_endproc
 2326              	.LFE487:
 2328              		.section	.text.unlikely._ZL8up_frameiiiij
 2329              	.LCOLDE17:
 2330              		.section	.text._ZL8up_frameiiiij
 2331              	.LHOTE17:
 2332              		.section	.text.unlikely._ZL15narrow_thin_boxiiiij.part.0,"ax",@progbits
 2333              	.LCOLDB18:
 2334              		.section	.text._ZL15narrow_thin_boxiiiij.part.0,"ax",@progbits
 2335              	.LHOTB18:
 2336              		.p2align 4,,15
 2338              	_ZL15narrow_thin_boxiiiij.part.0:
 2339              	.LFB496:
 2340              		.loc 1 278 0
 2341              		.cfi_startproc
 2342              	.LVL243:
 2343 0000 4157     		pushq	%r15
 2344              		.cfi_def_cfa_offset 16
 2345              		.cfi_offset 15, -16
 2346 0002 4156     		pushq	%r14
 2347              		.cfi_def_cfa_offset 24
 2348              		.cfi_offset 14, -24
 2349 0004 4589C7   		movl	%r8d, %r15d
 2350 0007 4155     		pushq	%r13
 2351              		.cfi_def_cfa_offset 32
 2352              		.cfi_offset 13, -32
 2353 0009 4154     		pushq	%r12
 2354              		.cfi_def_cfa_offset 40
 2355              		.cfi_offset 12, -40
 2356 000b 4189F5   		movl	%esi, %r13d
 2357 000e 55       		pushq	%rbp
 2358              		.cfi_def_cfa_offset 48
 2359              		.cfi_offset 6, -48
 2360 000f 53       		pushq	%rbx
 2361              		.cfi_def_cfa_offset 56
 2362              		.cfi_offset 3, -56
 2363 0010 89CD     		movl	%ecx, %ebp
 2364 0012 89D3     		movl	%edx, %ebx
 2365 0014 4189FC   		movl	%edi, %r12d
 2366              		.loc 1 282 0
 2367 0017 458D7501 		leal	1(%r13), %r14d
 2368              		.loc 1 278 0
 2369 001b 4883EC18 		subq	$24, %rsp
 2370              		.cfi_def_cfa_offset 80
 2371              		.loc 1 280 0
 2372 001f E8000000 		call	_Z12fl_gray_rampv
 2372      00
 2373              	.LVL244:
 2374              	.LBB711:
 2375              	.LBB712:
 2376              		.loc 1 42 0
 2377 0024 0FB67852 		movzbl	82(%rax), %edi
 2378 0028 F30F1005 		movss	.LC0(%rip), %xmm0
 2378      00000000 
 2379 0030 4489FE   		movl	%r15d, %esi
 2380 0033 48894424 		movq	%rax, 8(%rsp)
 2380      08
 2381 0038 E8000000 		call	_Z16fl_color_averagejjf
 2381      00
 2382              	.LVL245:
 2383              	.LBE712:
 2384              	.LBE711:
 2385              	.LBB713:
 2386              	.LBB714:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2387              		.loc 2 52 0
 2388 003d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2388      000000
 2389 0044 89C6     		movl	%eax, %esi
 2390 0046 488B17   		movq	(%rdi), %rdx
 2391 0049 FF928800 		call	*136(%rdx)
 2391      0000
 2392              	.LVL246:
 2393              	.LBE714:
 2394              	.LBE713:
 2395              	.LBB715:
 2396              	.LBB716:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2397              		.loc 2 206 0
 2398 004f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2398      000000
 2399              	.LBE716:
 2400              	.LBE715:
 2401              		.loc 1 282 0
 2402 0056 418D4424 		leal	1(%r12), %eax
 2402      01
 2403              	.LBB719:
 2404              	.LBB717:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2405              		.loc 2 206 0
 2406 005b 8D4BFE   		leal	-2(%rbx), %ecx
 2407 005e 448D45FE 		leal	-2(%rbp), %r8d
 2408 0062 4489F2   		movl	%r14d, %edx
 2409              	.LBE717:
 2410              	.LBE719:
 2411              		.loc 1 282 0
 2412 0065 89C6     		movl	%eax, %esi
 2413              	.LVL247:
 2414              	.LBB720:
 2415              	.LBB718:
 206:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 2416              		.loc 2 206 0
 2417 0067 488B07   		movq	(%rdi), %rax
 2418              	.LVL248:
 2419 006a 89742404 		movl	%esi, 4(%rsp)
 2420 006e FF5020   		call	*32(%rax)
 2421              	.LVL249:
 2422              	.LBE718:
 2423              	.LBE720:
 2424              	.LBB721:
 2425              	.LBB722:
 2426              		.loc 1 42 0
 2427 0071 4C8B4C24 		movq	8(%rsp), %r9
 2427      08
 2428 0076 F30F1005 		movss	.LC0(%rip), %xmm0
 2428      00000000 
 2429 007e 4489FE   		movl	%r15d, %esi
 2430 0081 410FB679 		movzbl	73(%r9), %edi
 2430      49
 2431 0086 E8000000 		call	_Z16fl_color_averagejjf
 2431      00
 2432              	.LVL250:
 2433              	.LBE722:
 2434              	.LBE721:
 2435              	.LBB723:
 2436              	.LBB724:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 2437              		.loc 2 52 0
 2438 008b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2438      000000
 2439 0092 89C6     		movl	%eax, %esi
 2440 0094 488B17   		movq	(%rdi), %rdx
 2441 0097 FF928800 		call	*136(%rdx)
 2441      0000
 2442              	.LVL251:
 2443              	.LBE724:
 2444              	.LBE723:
 2445              		.loc 1 284 0
 2446 009d 83FB01   		cmpl	$1, %ebx
 2447 00a0 7E35     		jle	.L42
 2448              	.LBB725:
 2449              	.LBB726:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2450              		.loc 2 255 0
 2451 00a2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2451      000000
 2452              	.LBE726:
 2453              	.LBE725:
 2454              		.loc 1 285 0
 2455 00a9 458D7C1C 		leal	-2(%r12,%rbx), %r15d
 2455      FE
 2456              	.LVL252:
 2457              	.LBB728:
 2458              	.LBB727:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2459              		.loc 2 255 0
 2460 00ae 4489EA   		movl	%r13d, %edx
 2461 00b1 8B742404 		movl	4(%rsp), %esi
 2462 00b5 4489F9   		movl	%r15d, %ecx
 2463 00b8 488B07   		movq	(%rdi), %rax
 2464 00bb FF5030   		call	*48(%rax)
 2465              	.LVL253:
 2466              	.LBE727:
 2467              	.LBE728:
 2468              	.LBB729:
 2469              	.LBB730:
 2470 00be 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2470      000000
 2471 00c5 418D542D 		leal	-1(%r13,%rbp), %edx
 2471      FF
 2472              	.LVL254:
 2473 00ca 4489F9   		movl	%r15d, %ecx
 2474 00cd 8B742404 		movl	4(%rsp), %esi
 2475 00d1 488B07   		movq	(%rdi), %rax
 2476 00d4 FF5030   		call	*48(%rax)
 2477              	.LVL255:
 2478              	.L42:
 2479              	.LBE730:
 2480              	.LBE729:
 2481              		.loc 1 288 0
 2482 00d7 83FD01   		cmpl	$1, %ebp
 2483 00da 7E44     		jle	.L41
 2484              	.LBB731:
 2485              	.LBB732:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2486              		.loc 2 270 0
 2487 00dc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2487      000000
 2488              	.LBE732:
 2489              	.LBE731:
 2490              		.loc 1 289 0
 2491 00e3 418D6C2D 		leal	-2(%r13,%rbp), %ebp
 2491      FE
 2492              	.LVL256:
 2493              	.LBB734:
 2494              	.LBB733:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2495              		.loc 2 270 0
 2496 00e8 4489F2   		movl	%r14d, %edx
 2497 00eb 4489E6   		movl	%r12d, %esi
 2498 00ee 89E9     		movl	%ebp, %ecx
 2499 00f0 488B07   		movq	(%rdi), %rax
 2500 00f3 FF5048   		call	*72(%rax)
 2501              	.LVL257:
 2502              	.LBE733:
 2503              	.LBE734:
 2504              	.LBB735:
 2505              	.LBB736:
 2506 00f6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2506      000000
 2507 00fd 418D741C 		leal	-1(%r12,%rbx), %esi
 2507      FF
 2508              	.LVL258:
 2509 0102 89E9     		movl	%ebp, %ecx
 2510 0104 4489F2   		movl	%r14d, %edx
 2511 0107 488B07   		movq	(%rdi), %rax
 2512 010a 488B4048 		movq	72(%rax), %rax
 2513              	.LBE736:
 2514              	.LBE735:
 2515              		.loc 1 292 0
 2516 010e 4883C418 		addq	$24, %rsp
 2517              		.cfi_remember_state
 2518              		.cfi_def_cfa_offset 56
 2519 0112 5B       		popq	%rbx
 2520              		.cfi_def_cfa_offset 48
 2521              	.LVL259:
 2522 0113 5D       		popq	%rbp
 2523              		.cfi_def_cfa_offset 40
 2524              	.LVL260:
 2525 0114 415C     		popq	%r12
 2526              		.cfi_def_cfa_offset 32
 2527              	.LVL261:
 2528 0116 415D     		popq	%r13
 2529              		.cfi_def_cfa_offset 24
 2530              	.LVL262:
 2531 0118 415E     		popq	%r14
 2532              		.cfi_def_cfa_offset 16
 2533              	.LVL263:
 2534 011a 415F     		popq	%r15
 2535              		.cfi_def_cfa_offset 8
 2536              	.LBB738:
 2537              	.LBB737:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 2538              		.loc 2 270 0
 2539 011c FFE0     		jmp	*%rax
 2540              	.LVL264:
 2541 011e 6690     		.p2align 4,,10
 2542              		.p2align 3
 2543              	.L41:
 2544              		.cfi_restore_state
 2545              	.LBE737:
 2546              	.LBE738:
 2547              		.loc 1 292 0
 2548 0120 4883C418 		addq	$24, %rsp
 2549              		.cfi_def_cfa_offset 56
 2550 0124 5B       		popq	%rbx
 2551              		.cfi_def_cfa_offset 48
 2552              	.LVL265:
 2553 0125 5D       		popq	%rbp
 2554              		.cfi_def_cfa_offset 40
 2555              	.LVL266:
 2556 0126 415C     		popq	%r12
 2557              		.cfi_def_cfa_offset 32
 2558              	.LVL267:
 2559 0128 415D     		popq	%r13
 2560              		.cfi_def_cfa_offset 24
 2561              	.LVL268:
 2562 012a 415E     		popq	%r14
 2563              		.cfi_def_cfa_offset 16
 2564              	.LVL269:
 2565 012c 415F     		popq	%r15
 2566              		.cfi_def_cfa_offset 8
 2567 012e C3       		ret
 2568              		.cfi_endproc
 2569              	.LFE496:
 2571              		.section	.text.unlikely._ZL15narrow_thin_boxiiiij.part.0
 2572              	.LCOLDE18:
 2573              		.section	.text._ZL15narrow_thin_boxiiiij.part.0
 2574              	.LHOTE18:
 2575              		.section	.rodata.str1.1
 2576              	.LC19:
 2577 0012 52514F51 		.string	"RQOQSUWQ"
 2577      53555751 
 2577      00
 2578              	.LC20:
 2579 001b 494A4C4D 		.string	"IJLM"
 2579      00
 2580              		.section	.text.unlikely._ZL11thin_up_boxiiiij,"ax",@progbits
 2581              	.LCOLDB21:
 2582              		.section	.text._ZL11thin_up_boxiiiij,"ax",@progbits
 2583              	.LHOTB21:
 2584              		.p2align 4,,15
 2586              	_ZL11thin_up_boxiiiij:
 2587              	.LFB489:
 2588              		.loc 1 295 0
 2589              		.cfi_startproc
 2590              	.LVL270:
 2591              		.loc 1 300 0
 2592 0000 83FA04   		cmpl	$4, %edx
 2593 0003 7E05     		jle	.L46
 2594 0005 83F904   		cmpl	$4, %ecx
 2595 0008 7F1E     		jg	.L56
 2596              	.L46:
 2597              	.LVL271:
 2598              	.LBB745:
 2599              	.LBB746:
 2600              		.loc 1 279 0
 2601 000a 85C9     		testl	%ecx, %ecx
 2602 000c 7E12     		jle	.L55
 2603 000e 85D2     		testl	%edx, %edx
 2604 0010 7E0E     		jle	.L55
 2605 0012 E9000000 		jmp	_ZL15narrow_thin_boxiiiij.part.0
 2605      00
 2606              	.LVL272:
 2607 0017 660F1F84 		.p2align 4,,10
 2607      00000000 
 2607      00
 2608              		.p2align 3
 2609              	.L55:
 2610 0020 F3C3     		rep ret
 2611              	.LVL273:
 2612              		.p2align 4,,10
 2613 0022 660F1F44 		.p2align 3
 2613      0000
 2614              	.L56:
 2615              	.LBE746:
 2616              	.LBE745:
 2617              		.loc 1 295 0
 2618 0028 4156     		pushq	%r14
 2619              		.cfi_def_cfa_offset 16
 2620              		.cfi_offset 14, -16
 2621 002a 4189F6   		movl	%esi, %r14d
 2622 002d 4155     		pushq	%r13
 2623              		.cfi_def_cfa_offset 24
 2624              		.cfi_offset 13, -24
 2625              	.LBB747:
 2626              	.LBB748:
 2627              		.loc 1 301 0
 2628 002f 8D7601   		leal	1(%rsi), %esi
 2629              	.LVL274:
 2630              	.LBE748:
 2631              	.LBE747:
 2632              		.loc 1 295 0
 2633 0032 4154     		pushq	%r12
 2634              		.cfi_def_cfa_offset 32
 2635              		.cfi_offset 12, -32
 2636 0034 4189FC   		movl	%edi, %r12d
 2637              	.LVL275:
 2638 0037 55       		pushq	%rbp
 2639              		.cfi_def_cfa_offset 40
 2640              		.cfi_offset 6, -40
 2641              	.LBB753:
 2642              	.LBB749:
 2643              		.loc 1 301 0
 2644 0038 8D7F01   		leal	1(%rdi), %edi
 2645              	.LVL276:
 2646              	.LBE749:
 2647              	.LBE753:
 2648              		.loc 1 295 0
 2649 003b 53       		pushq	%rbx
 2650              		.cfi_def_cfa_offset 48
 2651              		.cfi_offset 3, -48
 2652 003c 89D5     		movl	%edx, %ebp
 2653 003e 89CB     		movl	%ecx, %ebx
 2654              	.LBB754:
 2655              	.LBB750:
 2656              		.loc 1 301 0
 2657 0040 8D52FE   		leal	-2(%rdx), %edx
 2658              	.LVL277:
 2659 0043 8D49FD   		leal	-3(%rcx), %ecx
 2660              	.LVL278:
 2661 0046 4589C5   		movl	%r8d, %r13d
 2662 0049 4589C1   		movl	%r8d, %r9d
 2663 004c 41B80000 		movl	$.LC19, %r8d
 2663      0000
 2664              	.LVL279:
 2665 0052 E8000000 		call	_ZL10shade_rectiiiiPKcj
 2665      00
 2666              	.LVL280:
 2667              		.loc 1 302 0
 2668 0057 8D4BFF   		leal	-1(%rbx), %ecx
 2669 005a 4589E9   		movl	%r13d, %r9d
 2670 005d 89EA     		movl	%ebp, %edx
 2671              	.LBE750:
 2672              	.LBE754:
 2673              		.loc 1 307 0
 2674 005f 5B       		popq	%rbx
 2675              		.cfi_restore 3
 2676              		.cfi_def_cfa_offset 40
 2677              	.LVL281:
 2678              	.LBB755:
 2679              	.LBB751:
 2680              		.loc 1 302 0
 2681 0060 4489F6   		movl	%r14d, %esi
 2682 0063 4489E7   		movl	%r12d, %edi
 2683 0066 41B80000 		movl	$.LC20, %r8d
 2683      0000
 2684              	.LBE751:
 2685              	.LBE755:
 2686              		.loc 1 307 0
 2687 006c 5D       		popq	%rbp
 2688              		.cfi_restore 6
 2689              		.cfi_def_cfa_offset 32
 2690              	.LVL282:
 2691 006d 415C     		popq	%r12
 2692              		.cfi_restore 12
 2693              		.cfi_def_cfa_offset 24
 2694              	.LVL283:
 2695 006f 415D     		popq	%r13
 2696              		.cfi_restore 13
 2697              		.cfi_def_cfa_offset 16
 2698              	.LVL284:
 2699 0071 415E     		popq	%r14
 2700              		.cfi_restore 14
 2701              		.cfi_def_cfa_offset 8
 2702              	.LVL285:
 2703              	.LBB756:
 2704              	.LBB752:
 2705              		.loc 1 302 0
 2706 0073 E9000000 		jmp	_ZL10frame_rectiiiiPKcj
 2706      00
 2707              	.LVL286:
 2708              	.LBE752:
 2709              	.LBE756:
 2710              		.cfi_endproc
 2711              	.LFE489:
 2713              		.section	.text.unlikely._ZL11thin_up_boxiiiij
 2714              	.LCOLDE21:
 2715              		.section	.text._ZL11thin_up_boxiiiij
 2716              	.LHOTE21:
 2717              		.section	.rodata.str1.1
 2718              	.LC22:
 2719 0020 5256514E 		.string	"RVQNOPQRSTUVWVQ"
 2719      4F505152 
 2719      53545556 
 2719      57565100 
 2720              		.section	.text.unlikely._ZL6up_boxiiiij,"ax",@progbits
 2721              	.LCOLDB23:
 2722              		.section	.text._ZL6up_boxiiiij,"ax",@progbits
 2723              	.LHOTB23:
 2724              		.p2align 4,,15
 2726              	_ZL6up_boxiiiij:
 2727              	.LFB490:
 2728              		.loc 1 310 0
 2729              		.cfi_startproc
 2730              	.LVL287:
 2731              		.loc 1 315 0
 2732 0000 83FA08   		cmpl	$8, %edx
 2733 0003 7E5B     		jle	.L58
 2734 0005 83F908   		cmpl	$8, %ecx
 2735 0008 7E56     		jle	.L58
 2736              		.loc 1 310 0
 2737 000a 4156     		pushq	%r14
 2738              		.cfi_def_cfa_offset 16
 2739              		.cfi_offset 14, -16
 2740 000c 4189F6   		movl	%esi, %r14d
 2741 000f 4155     		pushq	%r13
 2742              		.cfi_def_cfa_offset 24
 2743              		.cfi_offset 13, -24
 2744              	.LBB759:
 2745              	.LBB760:
 2746              		.loc 1 316 0
 2747 0011 8D7601   		leal	1(%rsi), %esi
 2748              	.LVL288:
 2749              	.LBE760:
 2750              	.LBE759:
 2751              		.loc 1 310 0
 2752 0014 4154     		pushq	%r12
 2753              		.cfi_def_cfa_offset 32
 2754              		.cfi_offset 12, -32
 2755 0016 4189FC   		movl	%edi, %r12d
 2756              	.LVL289:
 2757 0019 55       		pushq	%rbp
 2758              		.cfi_def_cfa_offset 40
 2759              		.cfi_offset 6, -40
 2760              	.LBB765:
 2761              	.LBB761:
 2762              		.loc 1 316 0
 2763 001a 8D7F01   		leal	1(%rdi), %edi
 2764              	.LVL290:
 2765              	.LBE761:
 2766              	.LBE765:
 2767              		.loc 1 310 0
 2768 001d 53       		pushq	%rbx
 2769              		.cfi_def_cfa_offset 48
 2770              		.cfi_offset 3, -48
 2771 001e 89D5     		movl	%edx, %ebp
 2772 0020 89CB     		movl	%ecx, %ebx
 2773              	.LBB766:
 2774              	.LBB762:
 2775              		.loc 1 316 0
 2776 0022 8D52FE   		leal	-2(%rdx), %edx
 2777              	.LVL291:
 2778 0025 8D49FD   		leal	-3(%rcx), %ecx
 2779              	.LVL292:
 2780 0028 4589C5   		movl	%r8d, %r13d
 2781 002b 4589C1   		movl	%r8d, %r9d
 2782 002e 41B80000 		movl	$.LC22, %r8d
 2782      0000
 2783              	.LVL293:
 2784 0034 E8000000 		call	_ZL10shade_rectiiiiPKcj
 2784      00
 2785              	.LVL294:
 2786              		.loc 1 317 0
 2787 0039 8D4BFF   		leal	-1(%rbx), %ecx
 2788 003c 4589E9   		movl	%r13d, %r9d
 2789 003f 89EA     		movl	%ebp, %edx
 2790              	.LBE762:
 2791              	.LBE766:
 2792              		.loc 1 322 0
 2793 0041 5B       		popq	%rbx
 2794              		.cfi_restore 3
 2795              		.cfi_def_cfa_offset 40
 2796              	.LVL295:
 2797              	.LBB767:
 2798              	.LBB763:
 2799              		.loc 1 317 0
 2800 0042 4489F6   		movl	%r14d, %esi
 2801 0045 4489E7   		movl	%r12d, %edi
 2802 0048 41B80000 		movl	$.LC20, %r8d
 2802      0000
 2803              	.LBE763:
 2804              	.LBE767:
 2805              		.loc 1 322 0
 2806 004e 5D       		popq	%rbp
 2807              		.cfi_restore 6
 2808              		.cfi_def_cfa_offset 32
 2809              	.LVL296:
 2810 004f 415C     		popq	%r12
 2811              		.cfi_restore 12
 2812              		.cfi_def_cfa_offset 24
 2813              	.LVL297:
 2814 0051 415D     		popq	%r13
 2815              		.cfi_restore 13
 2816              		.cfi_def_cfa_offset 16
 2817              	.LVL298:
 2818 0053 415E     		popq	%r14
 2819              		.cfi_restore 14
 2820              		.cfi_def_cfa_offset 8
 2821              	.LVL299:
 2822              	.LBB768:
 2823              	.LBB764:
 2824              		.loc 1 317 0
 2825 0055 E9000000 		jmp	_ZL10frame_rectiiiiPKcj
 2825      00
 2826              	.LVL300:
 2827 005a 660F1F44 		.p2align 4,,10
 2827      0000
 2828              		.p2align 3
 2829              	.L58:
 2830              	.LBE764:
 2831              	.LBE768:
 2832              		.loc 1 319 0
 2833 0060 E9000000 		jmp	_ZL11thin_up_boxiiiij
 2833      00
 2834              	.LVL301:
 2835              		.cfi_endproc
 2836              	.LFE490:
 2838              		.section	.text.unlikely._ZL6up_boxiiiij
 2839              	.LCOLDE23:
 2840              		.section	.text._ZL6up_boxiiiij
 2841              	.LHOTE23:
 2842              		.section	.rodata.str1.1
 2843              	.LC24:
 2844 0030 53545556 		.string	"STUVWWWVT"
 2844      57575756 
 2844      5400
 2845              		.section	.text.unlikely._ZL8down_boxiiiij,"ax",@progbits
 2846              	.LCOLDB25:
 2847              		.section	.text._ZL8down_boxiiiij,"ax",@progbits
 2848              	.LHOTB25:
 2849              		.p2align 4,,15
 2851              	_ZL8down_boxiiiij:
 2852              	.LFB493:
 2853              		.loc 1 336 0
 2854              		.cfi_startproc
 2855              	.LVL302:
 2856              		.loc 1 337 0
 2857 0000 83FA06   		cmpl	$6, %edx
 2858 0003 7E05     		jle	.L67
 2859 0005 83F906   		cmpl	$6, %ecx
 2860 0008 7F1E     		jg	.L77
 2861              	.L67:
 2862              	.LVL303:
 2863              	.LBB777:
 2864              	.LBB778:
 2865              		.loc 1 279 0
 2866 000a 85C9     		testl	%ecx, %ecx
 2867 000c 7E12     		jle	.L76
 2868 000e 85D2     		testl	%edx, %edx
 2869 0010 7E0E     		jle	.L76
 2870 0012 E9000000 		jmp	_ZL15narrow_thin_boxiiiij.part.0
 2870      00
 2871              	.LVL304:
 2872 0017 660F1F84 		.p2align 4,,10
 2872      00000000 
 2872      00
 2873              		.p2align 3
 2874              	.L76:
 2875 0020 F3C3     		rep ret
 2876              	.LVL305:
 2877              		.p2align 4,,10
 2878 0022 660F1F44 		.p2align 3
 2878      0000
 2879              	.L77:
 2880              	.LBE778:
 2881              	.LBE777:
 2882              		.loc 1 336 0
 2883 0028 4156     		pushq	%r14
 2884              		.cfi_def_cfa_offset 16
 2885              		.cfi_offset 14, -16
 2886 002a 4189F6   		movl	%esi, %r14d
 2887 002d 4155     		pushq	%r13
 2888              		.cfi_def_cfa_offset 24
 2889              		.cfi_offset 13, -24
 2890              	.LBB779:
 2891              	.LBB780:
 2892              		.loc 1 338 0
 2893 002f 8D7602   		leal	2(%rsi), %esi
 2894              	.LVL306:
 2895              	.LBE780:
 2896              	.LBE779:
 2897              		.loc 1 336 0
 2898 0032 4154     		pushq	%r12
 2899              		.cfi_def_cfa_offset 32
 2900              		.cfi_offset 12, -32
 2901 0034 4189FC   		movl	%edi, %r12d
 2902              	.LVL307:
 2903 0037 55       		pushq	%rbp
 2904              		.cfi_def_cfa_offset 40
 2905              		.cfi_offset 6, -40
 2906              	.LBB791:
 2907              	.LBB787:
 2908              		.loc 1 338 0
 2909 0038 8D7F02   		leal	2(%rdi), %edi
 2910              	.LVL308:
 2911              	.LBE787:
 2912              	.LBE791:
 2913              		.loc 1 336 0
 2914 003b 53       		pushq	%rbx
 2915              		.cfi_def_cfa_offset 48
 2916              		.cfi_offset 3, -48
 2917 003c 89D5     		movl	%edx, %ebp
 2918 003e 89CB     		movl	%ecx, %ebx
 2919              	.LBB792:
 2920              	.LBB788:
 2921              		.loc 1 338 0
 2922 0040 8D52FC   		leal	-4(%rdx), %edx
 2923              	.LVL309:
 2924 0043 8D49FB   		leal	-5(%rcx), %ecx
 2925              	.LVL310:
 2926 0046 4589C5   		movl	%r8d, %r13d
 2927 0049 4589C1   		movl	%r8d, %r9d
 2928 004c 41B80000 		movl	$.LC24, %r8d
 2928      0000
 2929              	.LVL311:
 2930 0052 E8000000 		call	_ZL10shade_rectiiiiPKcj
 2930      00
 2931              	.LVL312:
 2932              	.LBB781:
 2933              	.LBB782:
 2934              		.loc 1 332 0
 2935 0057 8D4BFF   		leal	-1(%rbx), %ecx
 2936 005a 4589E9   		movl	%r13d, %r9d
 2937 005d 89EA     		movl	%ebp, %edx
 2938              	.LBE782:
 2939              	.LBE781:
 2940              	.LBE788:
 2941              	.LBE792:
 2942              		.loc 1 344 0
 2943 005f 5B       		popq	%rbx
 2944              		.cfi_restore 3
 2945              		.cfi_def_cfa_offset 40
 2946              	.LVL313:
 2947              	.LBB793:
 2948              	.LBB789:
 2949              	.LBB785:
 2950              	.LBB783:
 2951              		.loc 1 332 0
 2952 0060 4489F6   		movl	%r14d, %esi
 2953 0063 4489E7   		movl	%r12d, %edi
 2954 0066 41B80000 		movl	$.LC14, %r8d
 2954      0000
 2955              	.LBE783:
 2956              	.LBE785:
 2957              	.LBE789:
 2958              	.LBE793:
 2959              		.loc 1 344 0
 2960 006c 5D       		popq	%rbp
 2961              		.cfi_restore 6
 2962              		.cfi_def_cfa_offset 32
 2963              	.LVL314:
 2964 006d 415C     		popq	%r12
 2965              		.cfi_restore 12
 2966              		.cfi_def_cfa_offset 24
 2967              	.LVL315:
 2968 006f 415D     		popq	%r13
 2969              		.cfi_restore 13
 2970              		.cfi_def_cfa_offset 16
 2971              	.LVL316:
 2972 0071 415E     		popq	%r14
 2973              		.cfi_restore 14
 2974              		.cfi_def_cfa_offset 8
 2975              	.LVL317:
 2976              	.LBB794:
 2977              	.LBB790:
 2978              	.LBB786:
 2979              	.LBB784:
 2980              		.loc 1 332 0
 2981 0073 E9000000 		jmp	_ZL10frame_rectiiiiPKcj
 2981      00
 2982              	.LVL318:
 2983              	.LBE784:
 2984              	.LBE786:
 2985              	.LBE790:
 2986              	.LBE794:
 2987              		.cfi_endproc
 2988              	.LFE493:
 2990              		.section	.text.unlikely._ZL8down_boxiiiij
 2991              	.LCOLDE25:
 2992              		.section	.text._ZL8down_boxiiiij
 2993              	.LHOTE25:
 2994              		.section	.text.unlikely._ZL11frame_roundiiiiPKcj.constprop.4,"ax",@progbits
 2995              	.LCOLDB26:
 2996              		.section	.text._ZL11frame_roundiiiiPKcj.constprop.4,"ax",@progbits
 2997              	.LHOTB26:
 2998              		.p2align 4,,15
 3000              	_ZL11frame_roundiiiiPKcj.constprop.4:
 3001              	.LFB500:
 3002              		.loc 1 93 0
 3003              		.cfi_startproc
 3004              	.LVL319:
 3005 0000 4157     		pushq	%r15
 3006              		.cfi_def_cfa_offset 16
 3007              		.cfi_offset 15, -16
 3008 0002 4156     		pushq	%r14
 3009              		.cfi_def_cfa_offset 24
 3010              		.cfi_offset 14, -24
 3011 0004 4589C6   		movl	%r8d, %r14d
 3012 0007 4155     		pushq	%r13
 3013              		.cfi_def_cfa_offset 32
 3014              		.cfi_offset 13, -32
 3015 0009 4154     		pushq	%r12
 3016              		.cfi_def_cfa_offset 40
 3017              		.cfi_offset 12, -40
 3018 000b 4189FD   		movl	%edi, %r13d
 3019 000e 55       		pushq	%rbp
 3020              		.cfi_def_cfa_offset 48
 3021              		.cfi_offset 6, -48
 3022 000f 53       		pushq	%rbx
 3023              		.cfi_def_cfa_offset 56
 3024              		.cfi_offset 3, -56
 3025 0010 89D5     		movl	%edx, %ebp
 3026 0012 89CB     		movl	%ecx, %ebx
 3027 0014 4189F4   		movl	%esi, %r12d
 3028 0017 4883EC18 		subq	$24, %rsp
 3029              		.cfi_def_cfa_offset 80
 3030              		.loc 1 94 0
 3031 001b E8000000 		call	_Z12fl_gray_rampv
 3031      00
 3032              	.LVL320:
 3033              	.LBB795:
 3034              		.loc 1 97 0
 3035 0020 39DD     		cmpl	%ebx, %ebp
 3036              	.LBE795:
 3037              		.loc 1 94 0
 3038 0022 4989C7   		movq	%rax, %r15
 3039              	.LVL321:
 3040              	.LBB922:
 3041              		.loc 1 97 0
 3042 0025 0F842504 		je	.L85
 3042      0000
 3043              	.LBB796:
 3044              		.loc 1 109 0
 3045 002b 0F8F0702 		jg	.L86
 3045      0000
 3046              	.LBB797:
 3047              		.loc 1 126 0
 3048 0031 0F8D5305 		jge	.L78
 3048      0000
 3049              	.LBB798:
 3050              	.LBB799:
 3051              	.LBB800:
 3052              		.loc 1 42 0
 3053 0037 0FB67849 		movzbl	73(%rax), %edi
 3054              	.LBE800:
 3055              	.LBE799:
 3056              		.loc 1 127 0
 3057 003b 4189E9   		movl	%ebp, %r9d
 3058              	.LBB804:
 3059              	.LBB801:
 3060              		.loc 1 42 0
 3061 003e 4489F6   		movl	%r14d, %esi
 3062              	.LBE801:
 3063              	.LBE804:
 3064              		.loc 1 127 0
 3065 0041 41C1E91F 		shrl	$31, %r9d
 3066              	.LBB805:
 3067              	.LBB802:
 3068              		.loc 1 42 0
 3069 0045 F30F1005 		movss	.LC0(%rip), %xmm0
 3069      00000000 
 3070              	.LBE802:
 3071              	.LBE805:
 3072              		.loc 1 127 0
 3073 004d 4101E9   		addl	%ebp, %r9d
 3074              		.loc 1 134 0
 3075 0050 4401E3   		addl	%r12d, %ebx
 3076              	.LVL322:
 3077              		.loc 1 127 0
 3078 0053 41D1F9   		sarl	%r9d
 3079 0056 44894C24 		movl	%r9d, 8(%rsp)
 3079      08
 3080              	.LVL323:
 3081              	.LBB806:
 3082              	.LBB803:
 3083              		.loc 1 42 0
 3084 005b E8000000 		call	_Z16fl_color_averagejjf
 3084      00
 3085              	.LVL324:
 3086              	.LBE803:
 3087              	.LBE806:
 3088              	.LBB807:
 3089              	.LBB808:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3090              		.loc 2 52 0
 3091 0060 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3091      000000
 3092 0067 89C6     		movl	%eax, %esi
 3093 0069 488B17   		movq	(%rdi), %rdx
 3094 006c FF928800 		call	*136(%rdx)
 3094      0000
 3095              	.LVL325:
 3096              	.LBE808:
 3097              	.LBE807:
 3098              	.LBB809:
 3099              	.LBB810:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3100              		.loc 2 304 0
 3101 0072 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3101      000000
 3102 0079 F20F100D 		movsd	.LC1(%rip), %xmm1
 3102      00000000 
 3103 0081 4189E8   		movl	%ebp, %r8d
 3104 0084 89E9     		movl	%ebp, %ecx
 3105 0086 4489E2   		movl	%r12d, %edx
 3106 0089 F20F1005 		movsd	.LC3(%rip), %xmm0
 3106      00000000 
 3107 0091 4489EE   		movl	%r13d, %esi
 3108 0094 488B07   		movq	(%rdi), %rax
 3109 0097 FF900001 		call	*256(%rax)
 3109      0000
 3110              	.LVL326:
 3111              	.LBE810:
 3112              	.LBE809:
 3113              	.LBB811:
 3114              	.LBB812:
 3115              		.loc 1 42 0
 3116 009d 410FB67F 		movzbl	74(%r15), %edi
 3116      4A
 3117 00a2 F30F1005 		movss	.LC0(%rip), %xmm0
 3117      00000000 
 3118 00aa 4489F6   		movl	%r14d, %esi
 3119 00ad E8000000 		call	_Z16fl_color_averagejjf
 3119      00
 3120              	.LVL327:
 3121              	.LBE812:
 3122              	.LBE811:
 3123              	.LBB813:
 3124              	.LBB814:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3125              		.loc 2 52 0
 3126 00b2 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3126      000000
 3127 00b9 89C6     		movl	%eax, %esi
 3128 00bb 488B17   		movq	(%rdi), %rdx
 3129 00be FF928800 		call	*136(%rdx)
 3129      0000
 3130              	.LVL328:
 3131              	.LBE814:
 3132              	.LBE813:
 3133              	.LBB815:
 3134              	.LBB816:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3135              		.loc 2 304 0
 3136 00c4 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3136      000000
 3137 00cb F20F100D 		movsd	.LC3(%rip), %xmm1
 3137      00000000 
 3138 00d3 660FEFC0 		pxor	%xmm0, %xmm0
 3139 00d7 4189E8   		movl	%ebp, %r8d
 3140 00da 89E9     		movl	%ebp, %ecx
 3141 00dc 4489E2   		movl	%r12d, %edx
 3142 00df 4489EE   		movl	%r13d, %esi
 3143 00e2 488B07   		movq	(%rdi), %rax
 3144 00e5 FF900001 		call	*256(%rax)
 3144      0000
 3145              	.LVL329:
 3146              	.LBE816:
 3147              	.LBE815:
 3148              	.LBB817:
 3149              	.LBB818:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3150              		.loc 2 270 0
 3151 00eb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3151      000000
 3152              	.LBE818:
 3153              	.LBE817:
 3154              		.loc 1 134 0
 3155 00f2 448B4C24 		movl	8(%rsp), %r9d
 3155      08
 3156 00f7 4189DA   		movl	%ebx, %r10d
 3157              	.LBB822:
 3158              	.LBB819:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3159              		.loc 2 270 0
 3160 00fa 418D742D 		leal	-1(%r13,%rbp), %esi
 3160      FF
 3161              	.LBE819:
 3162              	.LBE822:
 3163              		.loc 1 135 0
 3164 00ff 29EB     		subl	%ebp, %ebx
 3165              	.LBB823:
 3166              	.LBB820:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3167              		.loc 2 270 0
 3168 0101 488B07   		movq	(%rdi), %rax
 3169              	.LBE820:
 3170              	.LBE823:
 3171              		.loc 1 134 0
 3172 0104 4529CA   		subl	%r9d, %r10d
 3173 0107 4501E1   		addl	%r12d, %r9d
 3174              	.LVL330:
 3175              	.LBB824:
 3176              	.LBB821:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3177              		.loc 2 270 0
 3178 010a 4489D1   		movl	%r10d, %ecx
 3179 010d 4489CA   		movl	%r9d, %edx
 3180 0110 44895424 		movl	%r10d, 12(%rsp)
 3180      0C
 3181 0115 44894C24 		movl	%r9d, 8(%rsp)
 3181      08
 3182              	.LVL331:
 3183 011a FF5048   		call	*72(%rax)
 3184              	.LVL332:
 3185              	.LBE821:
 3186              	.LBE824:
 3187              	.LBB825:
 3188              	.LBB826:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3189              		.loc 2 304 0
 3190 011d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3190      000000
 3191 0124 F20F100D 		movsd	.LC9(%rip), %xmm1
 3191      00000000 
 3192 012c 4189E8   		movl	%ebp, %r8d
 3193 012f 89E9     		movl	%ebp, %ecx
 3194 0131 89DA     		movl	%ebx, %edx
 3195 0133 F20F1005 		movsd	.LC4(%rip), %xmm0
 3195      00000000 
 3196 013b 4489EE   		movl	%r13d, %esi
 3197 013e 488B07   		movq	(%rdi), %rax
 3198 0141 FF900001 		call	*256(%rax)
 3198      0000
 3199              	.LVL333:
 3200              	.LBE826:
 3201              	.LBE825:
 3202              	.LBB827:
 3203              	.LBB828:
 3204              		.loc 1 42 0
 3205 0147 410FB67F 		movzbl	76(%r15), %edi
 3205      4C
 3206 014c F30F1005 		movss	.LC0(%rip), %xmm0
 3206      00000000 
 3207 0154 4489F6   		movl	%r14d, %esi
 3208 0157 E8000000 		call	_Z16fl_color_averagejjf
 3208      00
 3209              	.LVL334:
 3210              	.LBE828:
 3211              	.LBE827:
 3212              	.LBB829:
 3213              	.LBB830:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3214              		.loc 2 52 0
 3215 015c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3215      000000
 3216 0163 89C6     		movl	%eax, %esi
 3217 0165 488B17   		movq	(%rdi), %rdx
 3218 0168 FF928800 		call	*136(%rdx)
 3218      0000
 3219              	.LVL335:
 3220              	.LBE830:
 3221              	.LBE829:
 3222              	.LBB831:
 3223              	.LBB832:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3224              		.loc 2 304 0
 3225 016e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3225      000000
 3226 0175 F20F100D 		movsd	.LC4(%rip), %xmm1
 3226      00000000 
 3227 017d 4189E8   		movl	%ebp, %r8d
 3228 0180 89E9     		movl	%ebp, %ecx
 3229 0182 89DA     		movl	%ebx, %edx
 3230 0184 F20F1005 		movsd	.LC7(%rip), %xmm0
 3230      00000000 
 3231 018c 4489EE   		movl	%r13d, %esi
 3232 018f 488B07   		movq	(%rdi), %rax
 3233 0192 FF900001 		call	*256(%rax)
 3233      0000
 3234              	.LVL336:
 3235              	.LBE832:
 3236              	.LBE831:
 3237              	.LBB833:
 3238              	.LBB834:
 3239              		.loc 1 42 0
 3240 0198 410FB67F 		movzbl	77(%r15), %edi
 3240      4D
 3241 019d F30F1005 		movss	.LC0(%rip), %xmm0
 3241      00000000 
 3242 01a5 4489F6   		movl	%r14d, %esi
 3243 01a8 E8000000 		call	_Z16fl_color_averagejjf
 3243      00
 3244              	.LVL337:
 3245              	.LBE834:
 3246              	.LBE833:
 3247              	.LBB835:
 3248              	.LBB836:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3249              		.loc 2 52 0
 3250 01ad 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3250      000000
 3251 01b4 89C6     		movl	%eax, %esi
 3252 01b6 488B17   		movq	(%rdi), %rdx
 3253 01b9 FF928800 		call	*136(%rdx)
 3253      0000
 3254              	.LVL338:
 3255              	.LBE836:
 3256              	.LBE835:
 3257              	.LBB837:
 3258              	.LBB838:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3259              		.loc 2 304 0
 3260 01bf 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3260      000000
 3261 01c6 F20F100D 		movsd	.LC7(%rip), %xmm1
 3261      00000000 
 3262 01ce F20F1005 		movsd	.LC10(%rip), %xmm0
 3262      00000000 
 3263 01d6 4189E8   		movl	%ebp, %r8d
 3264 01d9 89E9     		movl	%ebp, %ecx
 3265 01db 89DA     		movl	%ebx, %edx
 3266 01dd 4489EE   		movl	%r13d, %esi
 3267 01e0 488B07   		movq	(%rdi), %rax
 3268 01e3 FF900001 		call	*256(%rax)
 3268      0000
 3269              	.LVL339:
 3270              	.LBE838:
 3271              	.LBE837:
 3272              	.LBB839:
 3273              	.LBB840:
 270:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3274              		.loc 2 270 0
 3275 01e9 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3275      000000
 3276 01f0 448B5424 		movl	12(%rsp), %r10d
 3276      0C
 3277 01f5 4489EE   		movl	%r13d, %esi
 3278 01f8 448B4C24 		movl	8(%rsp), %r9d
 3278      08
 3279 01fd 488B07   		movq	(%rdi), %rax
 3280 0200 4489D1   		movl	%r10d, %ecx
 3281 0203 4489CA   		movl	%r9d, %edx
 3282 0206 FF5048   		call	*72(%rax)
 3283              	.LVL340:
 3284              	.LBE840:
 3285              	.LBE839:
 3286              	.LBB841:
 3287              	.LBB842:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3288              		.loc 2 304 0
 3289 0209 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3289      000000
 3290 0210 F20F100D 		movsd	.LC10(%rip), %xmm1
 3290      00000000 
 3291 0218 488B07   		movq	(%rdi), %rax
 3292 021b 488B8000 		movq	256(%rax), %rax
 3292      010000
 3293              	.LVL341:
 3294              	.L83:
 3295 0222 F20F1005 		movsd	.LC1(%rip), %xmm0
 3295      00000000 
 3296 022a 4189E8   		movl	%ebp, %r8d
 3297 022d 89E9     		movl	%ebp, %ecx
 3298 022f E9000200 		jmp	.L84
 3298      00
 3299              	.LVL342:
 3300              		.p2align 4,,10
 3301 0234 0F1F4000 		.p2align 3
 3302              	.L86:
 3303              	.LBE842:
 3304              	.LBE841:
 3305              	.LBE798:
 3306              	.LBE797:
 3307              	.LBB849:
 3308              	.LBB850:
 3309              	.LBB851:
 3310              		.loc 1 42 0
 3311 0238 0FB67849 		movzbl	73(%rax), %edi
 3312              	.LBE851:
 3313              	.LBE850:
 3314              		.loc 1 110 0
 3315 023c 4189D9   		movl	%ebx, %r9d
 3316              	.LBB855:
 3317              	.LBB852:
 3318              		.loc 1 42 0
 3319 023f 4489F6   		movl	%r14d, %esi
 3320              	.LBE852:
 3321              	.LBE855:
 3322              		.loc 1 110 0
 3323 0242 41C1E91F 		shrl	$31, %r9d
 3324              	.LBB856:
 3325              	.LBB853:
 3326              		.loc 1 42 0
 3327 0246 F30F1005 		movss	.LC0(%rip), %xmm0
 3327      00000000 
 3328              	.LBE853:
 3329              	.LBE856:
 3330              		.loc 1 110 0
 3331 024e 4101D9   		addl	%ebx, %r9d
 3332              		.loc 1 115 0
 3333 0251 4401ED   		addl	%r13d, %ebp
 3334              	.LVL343:
 3335              		.loc 1 110 0
 3336 0254 41D1F9   		sarl	%r9d
 3337 0257 44894C24 		movl	%r9d, 8(%rsp)
 3337      08
 3338              	.LVL344:
 3339              	.LBB857:
 3340              	.LBB854:
 3341              		.loc 1 42 0
 3342 025c E8000000 		call	_Z16fl_color_averagejjf
 3342      00
 3343              	.LVL345:
 3344              	.LBE854:
 3345              	.LBE857:
 3346              	.LBB858:
 3347              	.LBB859:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3348              		.loc 2 52 0
 3349 0261 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3349      000000
 3350 0268 89C6     		movl	%eax, %esi
 3351 026a 488B17   		movq	(%rdi), %rdx
 3352 026d FF928800 		call	*136(%rdx)
 3352      0000
 3353              	.LVL346:
 3354              	.LBE859:
 3355              	.LBE858:
 3356              	.LBB860:
 3357              	.LBB861:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3358              		.loc 2 304 0
 3359 0273 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3359      000000
 3360 027a F20F100D 		movsd	.LC1(%rip), %xmm1
 3360      00000000 
 3361 0282 F20F1005 		movsd	.LC2(%rip), %xmm0
 3361      00000000 
 3362 028a 4189D8   		movl	%ebx, %r8d
 3363 028d 89D9     		movl	%ebx, %ecx
 3364 028f 4489E2   		movl	%r12d, %edx
 3365 0292 4489EE   		movl	%r13d, %esi
 3366 0295 488B07   		movq	(%rdi), %rax
 3367 0298 FF900001 		call	*256(%rax)
 3367      0000
 3368              	.LVL347:
 3369              	.LBE861:
 3370              	.LBE860:
 3371              	.LBB862:
 3372              	.LBB863:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3373              		.loc 2 255 0
 3374 029e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3374      000000
 3375              	.LBE863:
 3376              	.LBE862:
 3377              		.loc 1 115 0
 3378 02a5 448B4C24 		movl	8(%rsp), %r9d
 3378      08
 3379 02aa 4189EA   		movl	%ebp, %r10d
 3380              	.LBB867:
 3381              	.LBB864:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3382              		.loc 2 255 0
 3383 02ad 4489E2   		movl	%r12d, %edx
 3384              	.LBE864:
 3385              	.LBE867:
 3386              		.loc 1 116 0
 3387 02b0 29DD     		subl	%ebx, %ebp
 3388              	.LBB868:
 3389              	.LBB865:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3390              		.loc 2 255 0
 3391 02b2 488B07   		movq	(%rdi), %rax
 3392              	.LBE865:
 3393              	.LBE868:
 3394              		.loc 1 115 0
 3395 02b5 4529CA   		subl	%r9d, %r10d
 3396 02b8 4501E9   		addl	%r13d, %r9d
 3397              	.LVL348:
 3398              	.LBB869:
 3399              	.LBB866:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3400              		.loc 2 255 0
 3401 02bb 4489D1   		movl	%r10d, %ecx
 3402 02be 4489CE   		movl	%r9d, %esi
 3403 02c1 44895424 		movl	%r10d, 12(%rsp)
 3403      0C
 3404 02c6 44894C24 		movl	%r9d, 8(%rsp)
 3404      08
 3405              	.LVL349:
 3406 02cb FF5030   		call	*48(%rax)
 3407              	.LVL350:
 3408              	.LBE866:
 3409              	.LBE869:
 3410              	.LBB870:
 3411              	.LBB871:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3412              		.loc 2 304 0
 3413 02ce 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3413      000000
 3414 02d5 F20F100D 		movsd	.LC2(%rip), %xmm1
 3414      00000000 
 3415 02dd 4189D8   		movl	%ebx, %r8d
 3416 02e0 89D9     		movl	%ebx, %ecx
 3417 02e2 4489E2   		movl	%r12d, %edx
 3418 02e5 F20F1005 		movsd	.LC3(%rip), %xmm0
 3418      00000000 
 3419 02ed 89EE     		movl	%ebp, %esi
 3420 02ef 488B07   		movq	(%rdi), %rax
 3421 02f2 FF900001 		call	*256(%rax)
 3421      0000
 3422              	.LVL351:
 3423              	.LBE871:
 3424              	.LBE870:
 3425              	.LBB872:
 3426              	.LBB873:
 3427              		.loc 1 42 0
 3428 02f8 410FB67F 		movzbl	74(%r15), %edi
 3428      4A
 3429 02fd F30F1005 		movss	.LC0(%rip), %xmm0
 3429      00000000 
 3430 0305 4489F6   		movl	%r14d, %esi
 3431 0308 E8000000 		call	_Z16fl_color_averagejjf
 3431      00
 3432              	.LVL352:
 3433              	.LBE873:
 3434              	.LBE872:
 3435              	.LBB874:
 3436              	.LBB875:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3437              		.loc 2 52 0
 3438 030d 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3438      000000
 3439 0314 89C6     		movl	%eax, %esi
 3440 0316 488B17   		movq	(%rdi), %rdx
 3441 0319 FF928800 		call	*136(%rdx)
 3441      0000
 3442              	.LVL353:
 3443              	.LBE875:
 3444              	.LBE874:
 3445              	.LBB876:
 3446              	.LBB877:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3447              		.loc 2 304 0
 3448 031f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3448      000000
 3449 0326 F20F100D 		movsd	.LC5(%rip), %xmm1
 3449      00000000 
 3450 032e 4189D8   		movl	%ebx, %r8d
 3451 0331 89D9     		movl	%ebx, %ecx
 3452 0333 4489E2   		movl	%r12d, %edx
 3453 0336 F20F1005 		movsd	.LC4(%rip), %xmm0
 3453      00000000 
 3454 033e 89EE     		movl	%ebp, %esi
 3455 0340 488B07   		movq	(%rdi), %rax
 3456 0343 FF900001 		call	*256(%rax)
 3456      0000
 3457              	.LVL354:
 3458              	.LBE877:
 3459              	.LBE876:
 3460              	.LBB878:
 3461              	.LBB879:
 3462              		.loc 1 42 0
 3463 0349 410FB67F 		movzbl	76(%r15), %edi
 3463      4C
 3464 034e F30F1005 		movss	.LC0(%rip), %xmm0
 3464      00000000 
 3465 0356 4489F6   		movl	%r14d, %esi
 3466 0359 E8000000 		call	_Z16fl_color_averagejjf
 3466      00
 3467              	.LVL355:
 3468              	.LBE879:
 3469              	.LBE878:
 3470              	.LBB880:
 3471              	.LBB881:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3472              		.loc 2 52 0
 3473 035e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3473      000000
 3474 0365 89C6     		movl	%eax, %esi
 3475 0367 488B17   		movq	(%rdi), %rdx
 3476 036a FF928800 		call	*136(%rdx)
 3476      0000
 3477              	.LVL356:
 3478              	.LBE881:
 3479              	.LBE880:
 3480              	.LBB882:
 3481              	.LBB883:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3482              		.loc 2 304 0
 3483 0370 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3483      000000
 3484 0377 F20F100D 		movsd	.LC4(%rip), %xmm1
 3484      00000000 
 3485 037f F20F1005 		movsd	.LC6(%rip), %xmm0
 3485      00000000 
 3486 0387 4189D8   		movl	%ebx, %r8d
 3487 038a 89D9     		movl	%ebx, %ecx
 3488 038c 4489E2   		movl	%r12d, %edx
 3489 038f 89EE     		movl	%ebp, %esi
 3490 0391 488B07   		movq	(%rdi), %rax
 3491 0394 FF900001 		call	*256(%rax)
 3491      0000
 3492              	.LVL357:
 3493              	.LBE883:
 3494              	.LBE882:
 3495              	.LBB884:
 3496              	.LBB885:
 255:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3497              		.loc 2 255 0
 3498 039a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3498      000000
 3499 03a1 448B5424 		movl	12(%rsp), %r10d
 3499      0C
 3500 03a6 418D541C 		leal	-1(%r12,%rbx), %edx
 3500      FF
 3501              	.LVL358:
 3502 03ab 448B4C24 		movl	8(%rsp), %r9d
 3502      08
 3503 03b0 488B07   		movq	(%rdi), %rax
 3504 03b3 4489D1   		movl	%r10d, %ecx
 3505 03b6 4489CE   		movl	%r9d, %esi
 3506 03b9 FF5030   		call	*48(%rax)
 3507              	.LVL359:
 3508              	.LBE885:
 3509              	.LBE884:
 3510              	.LBB886:
 3511              	.LBB887:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3512              		.loc 2 304 0
 3513 03bc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3513      000000
 3514 03c3 F20F100D 		movsd	.LC6(%rip), %xmm1
 3514      00000000 
 3515 03cb 4189D8   		movl	%ebx, %r8d
 3516 03ce 89D9     		movl	%ebx, %ecx
 3517 03d0 4489E2   		movl	%r12d, %edx
 3518 03d3 F20F1005 		movsd	.LC7(%rip), %xmm0
 3518      00000000 
 3519 03db 4489EE   		movl	%r13d, %esi
 3520 03de 488B07   		movq	(%rdi), %rax
 3521 03e1 FF900001 		call	*256(%rax)
 3521      0000
 3522              	.LVL360:
 3523              	.LBE887:
 3524              	.LBE886:
 3525              	.LBB888:
 3526              	.LBB889:
 3527              		.loc 1 42 0
 3528 03e7 410FB67F 		movzbl	77(%r15), %edi
 3528      4D
 3529 03ec F30F1005 		movss	.LC0(%rip), %xmm0
 3529      00000000 
 3530 03f4 4489F6   		movl	%r14d, %esi
 3531 03f7 E8000000 		call	_Z16fl_color_averagejjf
 3531      00
 3532              	.LVL361:
 3533              	.LBE889:
 3534              	.LBE888:
 3535              	.LBB890:
 3536              	.LBB891:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3537              		.loc 2 52 0
 3538 03fc 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3538      000000
 3539 0403 89C6     		movl	%eax, %esi
 3540 0405 488B17   		movq	(%rdi), %rdx
 3541 0408 FF928800 		call	*136(%rdx)
 3541      0000
 3542              	.LVL362:
 3543              	.LBE891:
 3544              	.LBE890:
 3545              	.LBB892:
 3546              	.LBB893:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3547              		.loc 2 304 0
 3548 040e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3548      000000
 3549 0415 F20F100D 		movsd	.LC7(%rip), %xmm1
 3549      00000000 
 3550 041d F20F1005 		movsd	.LC1(%rip), %xmm0
 3550      00000000 
 3551 0425 4189D8   		movl	%ebx, %r8d
 3552 0428 89D9     		movl	%ebx, %ecx
 3553 042a 488B07   		movq	(%rdi), %rax
 3554 042d 488B8000 		movq	256(%rax), %rax
 3554      010000
 3555              	.LVL363:
 3556              	.L84:
 3557              	.LBE893:
 3558              	.LBE892:
 3559              	.LBE849:
 3560              	.LBE796:
 3561              	.LBE922:
 3562              		.loc 1 144 0
 3563 0434 4883C418 		addq	$24, %rsp
 3564              		.cfi_remember_state
 3565              		.cfi_def_cfa_offset 56
 3566              	.LBB923:
 3567              	.LBB896:
 3568              	.LBB894:
 3569              	.LBB847:
 3570              	.LBB845:
 3571              	.LBB843:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3572              		.loc 2 304 0
 3573 0438 4489E2   		movl	%r12d, %edx
 3574 043b 4489EE   		movl	%r13d, %esi
 3575              	.LBE843:
 3576              	.LBE845:
 3577              	.LBE847:
 3578              	.LBE894:
 3579              	.LBE896:
 3580              	.LBE923:
 3581              		.loc 1 144 0
 3582 043e 5B       		popq	%rbx
 3583              		.cfi_def_cfa_offset 48
 3584 043f 5D       		popq	%rbp
 3585              		.cfi_def_cfa_offset 40
 3586 0440 415C     		popq	%r12
 3587              		.cfi_def_cfa_offset 32
 3588              	.LVL364:
 3589 0442 415D     		popq	%r13
 3590              		.cfi_def_cfa_offset 24
 3591              	.LVL365:
 3592 0444 415E     		popq	%r14
 3593              		.cfi_def_cfa_offset 16
 3594              	.LVL366:
 3595 0446 415F     		popq	%r15
 3596              		.cfi_def_cfa_offset 8
 3597              	.LVL367:
 3598              	.LBB924:
 3599              	.LBB897:
 3600              	.LBB895:
 3601              	.LBB848:
 3602              	.LBB846:
 3603              	.LBB844:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3604              		.loc 2 304 0
 3605 0448 FFE0     		jmp	*%rax
 3606              	.LVL368:
 3607 044a 660F1F44 		.p2align 4,,10
 3607      0000
 3608              		.p2align 3
 3609              	.L85:
 3610              		.cfi_restore_state
 3611              	.LBE844:
 3612              	.LBE846:
 3613              	.LBE848:
 3614              	.LBE895:
 3615              	.LBE897:
 3616              	.LBB898:
 3617              	.LBB899:
 3618              		.loc 1 42 0
 3619 0450 0FB67849 		movzbl	73(%rax), %edi
 3620 0454 F30F1005 		movss	.LC0(%rip), %xmm0
 3620      00000000 
 3621 045c 4489F6   		movl	%r14d, %esi
 3622 045f E8000000 		call	_Z16fl_color_averagejjf
 3622      00
 3623              	.LVL369:
 3624              	.LBE899:
 3625              	.LBE898:
 3626              	.LBB900:
 3627              	.LBB901:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3628              		.loc 2 52 0
 3629 0464 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3629      000000
 3630 046b 89C6     		movl	%eax, %esi
 3631 046d 488B17   		movq	(%rdi), %rdx
 3632 0470 FF928800 		call	*136(%rdx)
 3632      0000
 3633              	.LVL370:
 3634              	.LBE901:
 3635              	.LBE900:
 3636              	.LBB902:
 3637              	.LBB903:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3638              		.loc 2 304 0
 3639 0476 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3639      000000
 3640 047d F20F100D 		movsd	.LC1(%rip), %xmm1
 3640      00000000 
 3641 0485 4189E8   		movl	%ebp, %r8d
 3642 0488 89E9     		movl	%ebp, %ecx
 3643 048a 4489E2   		movl	%r12d, %edx
 3644 048d F20F1005 		movsd	.LC3(%rip), %xmm0
 3644      00000000 
 3645 0495 4489EE   		movl	%r13d, %esi
 3646 0498 488B07   		movq	(%rdi), %rax
 3647 049b FF900001 		call	*256(%rax)
 3647      0000
 3648              	.LVL371:
 3649              	.LBE903:
 3650              	.LBE902:
 3651              	.LBB904:
 3652              	.LBB905:
 3653              		.loc 1 42 0
 3654 04a1 410FB67F 		movzbl	74(%r15), %edi
 3654      4A
 3655 04a6 F30F1005 		movss	.LC0(%rip), %xmm0
 3655      00000000 
 3656 04ae 4489F6   		movl	%r14d, %esi
 3657 04b1 E8000000 		call	_Z16fl_color_averagejjf
 3657      00
 3658              	.LVL372:
 3659              	.LBE905:
 3660              	.LBE904:
 3661              	.LBB906:
 3662              	.LBB907:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3663              		.loc 2 52 0
 3664 04b6 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3664      000000
 3665 04bd 89C6     		movl	%eax, %esi
 3666 04bf 488B17   		movq	(%rdi), %rdx
 3667 04c2 FF928800 		call	*136(%rdx)
 3667      0000
 3668              	.LVL373:
 3669              	.LBE907:
 3670              	.LBE906:
 3671              	.LBB908:
 3672              	.LBB909:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3673              		.loc 2 304 0
 3674 04c8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3674      000000
 3675 04cf F20F100D 		movsd	.LC5(%rip), %xmm1
 3675      00000000 
 3676 04d7 4189E8   		movl	%ebp, %r8d
 3677 04da 89E9     		movl	%ebp, %ecx
 3678 04dc 4489E2   		movl	%r12d, %edx
 3679 04df F20F1005 		movsd	.LC4(%rip), %xmm0
 3679      00000000 
 3680 04e7 4489EE   		movl	%r13d, %esi
 3681 04ea 488B07   		movq	(%rdi), %rax
 3682 04ed FF900001 		call	*256(%rax)
 3682      0000
 3683              	.LVL374:
 3684              	.LBE909:
 3685              	.LBE908:
 3686              	.LBB910:
 3687              	.LBB911:
 3688              		.loc 1 42 0
 3689 04f3 410FB67F 		movzbl	76(%r15), %edi
 3689      4C
 3690 04f8 F30F1005 		movss	.LC0(%rip), %xmm0
 3690      00000000 
 3691 0500 4489F6   		movl	%r14d, %esi
 3692 0503 E8000000 		call	_Z16fl_color_averagejjf
 3692      00
 3693              	.LVL375:
 3694              	.LBE911:
 3695              	.LBE910:
 3696              	.LBB912:
 3697              	.LBB913:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3698              		.loc 2 52 0
 3699 0508 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3699      000000
 3700 050f 89C6     		movl	%eax, %esi
 3701 0511 488B17   		movq	(%rdi), %rdx
 3702 0514 FF928800 		call	*136(%rdx)
 3702      0000
 3703              	.LVL376:
 3704              	.LBE913:
 3705              	.LBE912:
 3706              	.LBB914:
 3707              	.LBB915:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3708              		.loc 2 304 0
 3709 051a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3709      000000
 3710 0521 F20F100D 		movsd	.LC4(%rip), %xmm1
 3710      00000000 
 3711 0529 4189E8   		movl	%ebp, %r8d
 3712 052c 89E9     		movl	%ebp, %ecx
 3713 052e 4489E2   		movl	%r12d, %edx
 3714 0531 F20F1005 		movsd	.LC7(%rip), %xmm0
 3714      00000000 
 3715 0539 4489EE   		movl	%r13d, %esi
 3716 053c 488B07   		movq	(%rdi), %rax
 3717 053f FF900001 		call	*256(%rax)
 3717      0000
 3718              	.LVL377:
 3719              	.LBE915:
 3720              	.LBE914:
 3721              	.LBB916:
 3722              	.LBB917:
 3723              		.loc 1 42 0
 3724 0545 410FB67F 		movzbl	77(%r15), %edi
 3724      4D
 3725 054a F30F1005 		movss	.LC0(%rip), %xmm0
 3725      00000000 
 3726 0552 4489F6   		movl	%r14d, %esi
 3727 0555 E8000000 		call	_Z16fl_color_averagejjf
 3727      00
 3728              	.LVL378:
 3729              	.LBE917:
 3730              	.LBE916:
 3731              	.LBB918:
 3732              	.LBB919:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3733              		.loc 2 52 0
 3734 055a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3734      000000
 3735 0561 89C6     		movl	%eax, %esi
 3736 0563 488B17   		movq	(%rdi), %rdx
 3737 0566 FF928800 		call	*136(%rdx)
 3737      0000
 3738              	.LVL379:
 3739              	.LBE919:
 3740              	.LBE918:
 3741              	.LBB920:
 3742              	.LBB921:
 304:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3743              		.loc 2 304 0
 3744 056c 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3744      000000
 3745 0573 F20F100D 		movsd	.LC7(%rip), %xmm1
 3745      00000000 
 3746 057b 488B07   		movq	(%rdi), %rax
 3747 057e 488B8000 		movq	256(%rax), %rax
 3747      010000
 3748 0585 E998FCFF 		jmp	.L83
 3748      FF
 3749              	.LVL380:
 3750              	.L78:
 3751              	.LBE921:
 3752              	.LBE920:
 3753              	.LBE924:
 3754              		.loc 1 144 0
 3755 058a 4883C418 		addq	$24, %rsp
 3756              		.cfi_def_cfa_offset 56
 3757 058e 5B       		popq	%rbx
 3758              		.cfi_def_cfa_offset 48
 3759              	.LVL381:
 3760 058f 5D       		popq	%rbp
 3761              		.cfi_def_cfa_offset 40
 3762              	.LVL382:
 3763 0590 415C     		popq	%r12
 3764              		.cfi_def_cfa_offset 32
 3765              	.LVL383:
 3766 0592 415D     		popq	%r13
 3767              		.cfi_def_cfa_offset 24
 3768              	.LVL384:
 3769 0594 415E     		popq	%r14
 3770              		.cfi_def_cfa_offset 16
 3771              	.LVL385:
 3772 0596 415F     		popq	%r15
 3773              		.cfi_def_cfa_offset 8
 3774 0598 C3       		ret
 3775              		.cfi_endproc
 3776              	.LFE500:
 3778              		.section	.text.unlikely._ZL11frame_roundiiiiPKcj.constprop.4
 3779              	.LCOLDE26:
 3780              		.section	.text._ZL11frame_roundiiiiPKcj.constprop.4
 3781              	.LHOTE26:
 3782              		.section	.text.unlikely._ZL8up_roundiiiij,"ax",@progbits
 3783              	.LCOLDB27:
 3784              		.section	.text._ZL8up_roundiiiij,"ax",@progbits
 3785              	.LHOTB27:
 3786              		.p2align 4,,15
 3788              	_ZL8up_roundiiiij:
 3789              	.LFB491:
 3790              		.loc 1 325 0
 3791              		.cfi_startproc
 3792              	.LVL386:
 3793 0000 4156     		pushq	%r14
 3794              		.cfi_def_cfa_offset 16
 3795              		.cfi_offset 14, -16
 3796 0002 4155     		pushq	%r13
 3797              		.cfi_def_cfa_offset 24
 3798              		.cfi_offset 13, -24
 3799 0004 4589C6   		movl	%r8d, %r14d
 3800 0007 4154     		pushq	%r12
 3801              		.cfi_def_cfa_offset 32
 3802              		.cfi_offset 12, -32
 3803 0009 55       		pushq	%rbp
 3804              		.cfi_def_cfa_offset 40
 3805              		.cfi_offset 6, -40
 3806 000a 4189D4   		movl	%edx, %r12d
 3807 000d 53       		pushq	%rbx
 3808              		.cfi_def_cfa_offset 48
 3809              		.cfi_offset 3, -48
 3810              		.loc 1 325 0
 3811 000e 89F5     		movl	%esi, %ebp
 3812 0010 89FB     		movl	%edi, %ebx
 3813 0012 4189CD   		movl	%ecx, %r13d
 3814              		.loc 1 326 0
 3815 0015 4589C1   		movl	%r8d, %r9d
 3816 0018 41B80000 		movl	$.LC22, %r8d
 3816      0000
 3817              	.LVL387:
 3818 001e E8000000 		call	_ZL11shade_roundiiiiPKcj
 3818      00
 3819              	.LVL388:
 3820              		.loc 1 327 0
 3821 0023 4589F0   		movl	%r14d, %r8d
 3822 0026 4489E9   		movl	%r13d, %ecx
 3823 0029 4489E2   		movl	%r12d, %edx
 3824 002c 89EE     		movl	%ebp, %esi
 3825 002e 89DF     		movl	%ebx, %edi
 3826              		.loc 1 328 0
 3827 0030 5B       		popq	%rbx
 3828              		.cfi_def_cfa_offset 40
 3829              	.LVL389:
 3830 0031 5D       		popq	%rbp
 3831              		.cfi_def_cfa_offset 32
 3832              	.LVL390:
 3833 0032 415C     		popq	%r12
 3834              		.cfi_def_cfa_offset 24
 3835              	.LVL391:
 3836 0034 415D     		popq	%r13
 3837              		.cfi_def_cfa_offset 16
 3838              	.LVL392:
 3839 0036 415E     		popq	%r14
 3840              		.cfi_def_cfa_offset 8
 3841              	.LVL393:
 3842              		.loc 1 327 0
 3843 0038 E9000000 		jmp	_ZL11frame_roundiiiiPKcj.constprop.4
 3843      00
 3844              	.LVL394:
 3845              		.cfi_endproc
 3846              	.LFE491:
 3848              		.section	.text.unlikely._ZL8up_roundiiiij
 3849              	.LCOLDE27:
 3850              		.section	.text._ZL8up_roundiiiij
 3851              	.LHOTE27:
 3852              		.section	.text.unlikely._ZL10down_roundiiiij,"ax",@progbits
 3853              	.LCOLDB28:
 3854              		.section	.text._ZL10down_roundiiiij,"ax",@progbits
 3855              	.LHOTB28:
 3856              		.p2align 4,,15
 3858              	_ZL10down_roundiiiij:
 3859              	.LFB494:
 3860              		.loc 1 347 0
 3861              		.cfi_startproc
 3862              	.LVL395:
 3863 0000 4156     		pushq	%r14
 3864              		.cfi_def_cfa_offset 16
 3865              		.cfi_offset 14, -16
 3866 0002 4155     		pushq	%r13
 3867              		.cfi_def_cfa_offset 24
 3868              		.cfi_offset 13, -24
 3869 0004 4589C6   		movl	%r8d, %r14d
 3870 0007 4154     		pushq	%r12
 3871              		.cfi_def_cfa_offset 32
 3872              		.cfi_offset 12, -32
 3873 0009 55       		pushq	%rbp
 3874              		.cfi_def_cfa_offset 40
 3875              		.cfi_offset 6, -40
 3876 000a 4189D4   		movl	%edx, %r12d
 3877 000d 53       		pushq	%rbx
 3878              		.cfi_def_cfa_offset 48
 3879              		.cfi_offset 3, -48
 3880              		.loc 1 347 0
 3881 000e 89F5     		movl	%esi, %ebp
 3882 0010 89FB     		movl	%edi, %ebx
 3883 0012 4189CD   		movl	%ecx, %r13d
 3884              		.loc 1 348 0
 3885 0015 4589C1   		movl	%r8d, %r9d
 3886 0018 41B80000 		movl	$.LC24, %r8d
 3886      0000
 3887              	.LVL396:
 3888 001e E8000000 		call	_ZL11shade_roundiiiiPKcj
 3888      00
 3889              	.LVL397:
 3890              		.loc 1 349 0
 3891 0023 4589F0   		movl	%r14d, %r8d
 3892 0026 4489E9   		movl	%r13d, %ecx
 3893 0029 4489E2   		movl	%r12d, %edx
 3894 002c 89EE     		movl	%ebp, %esi
 3895 002e 89DF     		movl	%ebx, %edi
 3896              		.loc 1 350 0
 3897 0030 5B       		popq	%rbx
 3898              		.cfi_def_cfa_offset 40
 3899              	.LVL398:
 3900 0031 5D       		popq	%rbp
 3901              		.cfi_def_cfa_offset 32
 3902              	.LVL399:
 3903 0032 415C     		popq	%r12
 3904              		.cfi_def_cfa_offset 24
 3905              	.LVL400:
 3906 0034 415D     		popq	%r13
 3907              		.cfi_def_cfa_offset 16
 3908              	.LVL401:
 3909 0036 415E     		popq	%r14
 3910              		.cfi_def_cfa_offset 8
 3911              	.LVL402:
 3912              		.loc 1 349 0
 3913 0038 E9000000 		jmp	_ZL11frame_roundiiiiPKcj.constprop.4
 3913      00
 3914              	.LVL403:
 3915              		.cfi_endproc
 3916              	.LFE494:
 3918              		.section	.text.unlikely._ZL10down_roundiiiij
 3919              	.LCOLDE28:
 3920              		.section	.text._ZL10down_roundiiiij
 3921              	.LHOTE28:
 3922              		.section	.text.unlikely._Z27fl_define_FL_PLASTIC_UP_BOXv,"ax",@progbits
 3923              	.LCOLDB29:
 3924              		.section	.text._Z27fl_define_FL_PLASTIC_UP_BOXv,"ax",@progbits
 3925              	.LHOTB29:
 3926              		.p2align 4,,15
 3927              		.globl	_Z27fl_define_FL_PLASTIC_UP_BOXv
 3929              	_Z27fl_define_FL_PLASTIC_UP_BOXv:
 3930              	.LFB495:
 3931              		.loc 1 356 0
 3932              		.cfi_startproc
 3933 0000 4883EC08 		subq	$8, %rsp
 3934              		.cfi_def_cfa_offset 16
 3935              		.loc 1 357 0
 3936 0004 BE000000 		movl	$_ZL6up_boxiiiij, %esi
 3936      00
 3937 0009 BF1E0000 		movl	$30, %edi
 3937      00
 3938 000e E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3938      00
 3939              	.LVL404:
 3940              		.loc 1 358 0
 3941 0013 BE000000 		movl	$_ZL8down_boxiiiij, %esi
 3941      00
 3942 0018 BF1F0000 		movl	$31, %edi
 3942      00
 3943 001d E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3943      00
 3944              	.LVL405:
 3945              		.loc 1 359 0
 3946 0022 BE000000 		movl	$_ZL8up_frameiiiij, %esi
 3946      00
 3947 0027 BF200000 		movl	$32, %edi
 3947      00
 3948 002c E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3948      00
 3949              	.LVL406:
 3950              		.loc 1 360 0
 3951 0031 BE000000 		movl	$_ZL10down_frameiiiij, %esi
 3951      00
 3952 0036 BF210000 		movl	$33, %edi
 3952      00
 3953 003b E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3953      00
 3954              	.LVL407:
 3955              		.loc 1 361 0
 3956 0040 BE000000 		movl	$_ZL11thin_up_boxiiiij, %esi
 3956      00
 3957 0045 BF220000 		movl	$34, %edi
 3957      00
 3958 004a E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3958      00
 3959              	.LVL408:
 3960              		.loc 1 362 0
 3961 004f BE000000 		movl	$_ZL8down_boxiiiij, %esi
 3961      00
 3962 0054 BF230000 		movl	$35, %edi
 3962      00
 3963 0059 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3963      00
 3964              	.LVL409:
 3965              		.loc 1 363 0
 3966 005e BE000000 		movl	$_ZL8up_roundiiiij, %esi
 3966      00
 3967 0063 BF240000 		movl	$36, %edi
 3967      00
 3968 0068 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3968      00
 3969              	.LVL410:
 3970              		.loc 1 364 0
 3971 006d BE000000 		movl	$_ZL10down_roundiiiij, %esi
 3971      00
 3972 0072 BF250000 		movl	$37, %edi
 3972      00
 3973 0077 E8000000 		call	_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
 3973      00
 3974              	.LVL411:
 3975              		.loc 1 367 0
 3976 007c B81E0000 		movl	$30, %eax
 3976      00
 3977 0081 4883C408 		addq	$8, %rsp
 3978              		.cfi_def_cfa_offset 8
 3979 0085 C3       		ret
 3980              		.cfi_endproc
 3981              	.LFE495:
 3983              		.section	.text.unlikely._Z27fl_define_FL_PLASTIC_UP_BOXv
 3984              	.LCOLDE29:
 3985              		.section	.text._Z27fl_define_FL_PLASTIC_UP_BOXv
 3986              	.LHOTE29:
 3987              		.section	.rodata.cst4,"aM",@progbits,4
 3988              		.align 4
 3989              	.LC0:
 3990 0000 0000403F 		.long	1061158912
 3991              		.section	.rodata.cst8,"aM",@progbits,8
 3992              		.align 8
 3993              	.LC1:
 3994 0000 00000000 		.long	0
 3995 0004 00E06040 		.long	1080090624
 3996              		.align 8
 3997              	.LC2:
 3998 0008 00000000 		.long	0
 3999 000c 00805640 		.long	1079410688
 4000              		.align 8
 4001              	.LC3:
 4002 0010 00000000 		.long	0
 4003 0014 00804640 		.long	1078362112
 4004              		.align 8
 4005              	.LC4:
 4006 0018 00000000 		.long	0
 4007 001c 00B07340 		.long	1081323520
 4008              		.align 8
 4009              	.LC5:
 4010 0020 00000000 		.long	0
 4011 0024 00507940 		.long	1081692160
 4012              		.align 8
 4013              	.LC6:
 4014 0028 00000000 		.long	0
 4015 002c 00E07040 		.long	1081139200
 4016              		.align 8
 4017              	.LC7:
 4018 0030 00000000 		.long	0
 4019 0034 00206C40 		.long	1080827904
 4020              		.align 8
 4021              	.LC9:
 4022 0038 00000000 		.long	0
 4023 003c 00807640 		.long	1081507840
 4024              		.align 8
 4025              	.LC10:
 4026 0040 00000000 		.long	0
 4027 0044 00806640 		.long	1080459264
 4028              		.text
 4029              	.Letext0:
 4030              		.section	.text.unlikely._ZL11shade_roundiiiiPKcj
 4031              	.Letext_cold0:
 4032              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 4033              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 4034              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 4035              		.file 6 "/usr/include/libio.h"
 4036              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 4037              		.file 8 "fltk-1.3.4-1/FL/Fl_Device.H"
 4038              		.file 9 "/usr/include/stdio.h"
 4039              		.file 10 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_plastic.cxx
     /tmp/ccUlsL7H.s:13     .text._ZL11shade_roundiiiiPKcj:0000000000000000 _ZL11shade_roundiiiiPKcj
     /tmp/ccUlsL7H.s:1113   .text._ZL10shade_rectiiiiPKcj:0000000000000000 _ZL10shade_rectiiiiPKcj
     /tmp/ccUlsL7H.s:1973   .text._ZL10frame_rectiiiiPKcj:0000000000000000 _ZL10frame_rectiiiiPKcj
     /tmp/ccUlsL7H.s:2283   .text._ZL10down_frameiiiij:0000000000000000 _ZL10down_frameiiiij
     /tmp/ccUlsL7H.s:2312   .text._ZL8up_frameiiiij:0000000000000000 _ZL8up_frameiiiij
     /tmp/ccUlsL7H.s:2338   .text._ZL15narrow_thin_boxiiiij.part.0:0000000000000000 _ZL15narrow_thin_boxiiiij.part.0
     /tmp/ccUlsL7H.s:2586   .text._ZL11thin_up_boxiiiij:0000000000000000 _ZL11thin_up_boxiiiij
     /tmp/ccUlsL7H.s:2726   .text._ZL6up_boxiiiij:0000000000000000 _ZL6up_boxiiiij
     /tmp/ccUlsL7H.s:2851   .text._ZL8down_boxiiiij:0000000000000000 _ZL8down_boxiiiij
     /tmp/ccUlsL7H.s:3000   .text._ZL11frame_roundiiiiPKcj.constprop.4:0000000000000000 _ZL11frame_roundiiiiPKcj.constprop.4
     /tmp/ccUlsL7H.s:3788   .text._ZL8up_roundiiiij:0000000000000000 _ZL8up_roundiiiij
     /tmp/ccUlsL7H.s:3858   .text._ZL10down_roundiiiij:0000000000000000 _ZL10down_roundiiiij
     /tmp/ccUlsL7H.s:3929   .text._Z27fl_define_FL_PLASTIC_UP_BOXv:0000000000000000 _Z27fl_define_FL_PLASTIC_UP_BOXv
     /tmp/ccUlsL7H.s:3993   .rodata.cst8:0000000000000000 .LC1
     /tmp/ccUlsL7H.s:3997   .rodata.cst8:0000000000000008 .LC2
     /tmp/ccUlsL7H.s:4001   .rodata.cst8:0000000000000010 .LC3
     /tmp/ccUlsL7H.s:4005   .rodata.cst8:0000000000000018 .LC4
     /tmp/ccUlsL7H.s:4013   .rodata.cst8:0000000000000028 .LC6
     /tmp/ccUlsL7H.s:4017   .rodata.cst8:0000000000000030 .LC7
     /tmp/ccUlsL7H.s:3989   .rodata.cst4:0000000000000000 .LC0
     /tmp/ccUlsL7H.s:4009   .rodata.cst8:0000000000000020 .LC5
     /tmp/ccUlsL7H.s:4021   .rodata.cst8:0000000000000038 .LC9
     /tmp/ccUlsL7H.s:4025   .rodata.cst8:0000000000000040 .LC10
     /tmp/ccUlsL7H.s:2578   .rodata.str1.1:000000000000001b .LC20
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_Z12fl_gray_rampv
strlen
_Z16fl_color_averagejjf
fl_graphics_driver
_Z19fl_internal_boxtype10Fl_BoxtypePFviiiijE
