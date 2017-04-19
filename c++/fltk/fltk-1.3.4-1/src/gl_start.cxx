   1              		.file	"gl_start.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z8gl_startv,"ax",@progbits
   5              	.LCOLDB3:
   6              		.section	.text._Z8gl_startv,"ax",@progbits
   7              	.LHOTB3:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z8gl_startv
  10              	.Ltext_cold0:
  11              		.section	.text._Z8gl_startv
  12              		.globl	_Z8gl_startv
  14              	_Z8gl_startv:
  15              	.LFB475:
  16              		.file 1 "fltk-1.3.4-1/src/gl_start.cxx"
   1:fltk-1.3.4-1/src/gl_start.cxx **** ...
  17              		.loc 1 56 0
  18              		.cfi_startproc
  19 0000 53       		pushq	%rbx
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 3, -16
  22 0001 4883EC20 		subq	$32, %rsp
  23              		.cfi_def_cfa_offset 48
  24              		.loc 1 57 0
  25 0005 488B1D00 		movq	_ZL7context(%rip), %rbx
  25      000000
  26              		.loc 1 56 0
  27 000c 64488B04 		movq	%fs:40, %rax
  27      25280000 
  27      00
  28 0015 48894424 		movq	%rax, 24(%rsp)
  28      18
  29 001a 31C0     		xorl	%eax, %eax
  30              		.loc 1 57 0
  31 001c 4885DB   		testq	%rbx, %rbx
  32 001f 0F84A301 		je	.L11
  32      0000
  33              	.L2:
  34              		.loc 1 69 0
  35 0025 E8000000 		call	_ZN9Fl_Window7currentEv
  35      00
  36              	.LVL0:
  37 002a 4889DE   		movq	%rbx, %rsi
  38 002d 4889C7   		movq	%rax, %rdi
  39 0030 E8000000 		call	_Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec
  39      00
  40              	.LVL1:
  41              		.loc 1 73 0
  42 0035 E8000000 		call	glXWaitX
  42      00
  43              	.LVL2:
  44              		.loc 1 75 0
  45 003a E8000000 		call	_ZN9Fl_Window7currentEv
  45      00
  46              	.LVL3:
  47 003f 8B4028   		movl	40(%rax), %eax
  48              	.LVL4:
  49 0042 39050000 		cmpl	%eax, _ZL2pw(%rip)
  49      0000
  50 0048 0F845A01 		je	.L12
  50      0000
  51              	.L3:
  52              		.loc 1 76 0
  53 004e E8000000 		call	_ZN9Fl_Window7currentEv
  53      00
  54              	.LVL5:
  55 0053 8B4028   		movl	40(%rax), %eax
  56              	.LVL6:
  57 0056 89050000 		movl	%eax, _ZL2pw(%rip)
  57      0000
  58              		.loc 1 77 0
  59 005c E8000000 		call	_ZN9Fl_Window7currentEv
  59      00
  60              	.LVL7:
  61 0061 8B402C   		movl	44(%rax), %eax
  62              	.LVL8:
  63 0064 89050000 		movl	%eax, _ZL2ph(%rip)
  63      0000
  64              		.loc 1 78 0
  65 006a E8000000 		call	glLoadIdentity
  65      00
  66              	.LVL9:
  67              		.loc 1 79 0
  68 006f 8B0D0000 		movl	_ZL2ph(%rip), %ecx
  68      0000
  69 0075 8B150000 		movl	_ZL2pw(%rip), %edx
  69      0000
  70 007b 31FF     		xorl	%edi, %edi
  71 007d 31F6     		xorl	%esi, %esi
  72 007f E8000000 		call	glViewport
  72      00
  73              	.LVL10:
  74              		.loc 1 80 0
  75 0084 660FEFD2 		pxor	%xmm2, %xmm2
  76 0088 660FEFDB 		pxor	%xmm3, %xmm3
  77 008c 660FEFC9 		pxor	%xmm1, %xmm1
  78 0090 F20F102D 		movsd	.LC0(%rip), %xmm5
  78      00000000 
  79 0098 660F28C2 		movapd	%xmm2, %xmm0
  80 009c F20F1025 		movsd	.LC1(%rip), %xmm4
  80      00000000 
  81 00a4 F20F2A1D 		cvtsi2sd	_ZL2ph(%rip), %xmm3
  81      00000000 
  82 00ac F20F2A0D 		cvtsi2sd	_ZL2pw(%rip), %xmm1
  82      00000000 
  83 00b4 E8000000 		call	glOrtho
  83      00
  84              	.LVL11:
  85              		.loc 1 81 0
  86 00b9 BF040400 		movl	$1028, %edi
  86      00
  87 00be E8000000 		call	glDrawBuffer
  87      00
  88              	.LVL12:
  89              	.L7:
  90              	.LBB22:
  91              		.loc 1 83 0
  92 00c3 488B0500 		movq	fl_graphics_driver(%rip), %rax
  92      000000
  93 00ca 8B806406 		movl	1636(%rax), %eax
  93      0000
  94 00d0 3B050000 		cmpl	_ZL17clip_state_number(%rip), %eax
  94      0000
  95 00d6 0F84A100 		je	.L1
  95      0000
  96              	.LBB23:
  97              		.loc 1 84 0
  98 00dc 89050000 		movl	%eax, _ZL17clip_state_number(%rip)
  98      0000
  99              		.loc 1 86 0
 100 00e2 E8000000 		call	_ZN9Fl_Window7currentEv
 100      00
 101              	.LVL13:
 102 00e7 8B582C   		movl	44(%rax), %ebx
 103              	.LVL14:
 104 00ea E8000000 		call	_ZN9Fl_Window7currentEv
 104      00
 105              	.LVL15:
 106              	.LBB24:
 107              	.LBB25:
 108              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
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
 109              		.loc 2 127 0
 110 00ef 4883EC08 		subq	$8, %rsp
 111              		.cfi_def_cfa_offset 56
 112 00f3 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 112      000000
 113 00fa 8B4828   		movl	40(%rax), %ecx
 114 00fd 488D5424 		leaq	28(%rsp), %rdx
 114      1C
 115              	.LVL16:
 116 0102 31F6     		xorl	%esi, %esi
 117 0104 4189D8   		movl	%ebx, %r8d
 118 0107 488B07   		movq	(%rdi), %rax
 119              	.LVL17:
 120 010a 52       		pushq	%rdx
 121              		.cfi_def_cfa_offset 64
 122 010b 488D5424 		leaq	32(%rsp), %rdx
 122      20
 123              	.LVL18:
 124 0110 52       		pushq	%rdx
 125              		.cfi_def_cfa_offset 72
 126              	.LVL19:
 127 0111 488D5424 		leaq	36(%rsp), %rdx
 127      24
 128              	.LVL20:
 129 0116 52       		pushq	%rdx
 130              		.cfi_def_cfa_offset 80
 131              	.LVL21:
 132 0117 31D2     		xorl	%edx, %edx
 133              	.LVL22:
 134 0119 4C8D4C24 		leaq	40(%rsp), %r9
 134      28
 135              	.LVL23:
 136 011e FF905801 		call	*344(%rax)
 136      0000
 137              	.LVL24:
 138              	.LBE25:
 139              	.LBE24:
 140              		.loc 1 86 0
 141 0124 4883C420 		addq	$32, %rsp
 142              		.cfi_def_cfa_offset 48
 143 0128 85C0     		testl	%eax, %eax
 144 012a 746C     		je	.L5
 145              		.loc 1 88 0
 146 012c 8B4C2414 		movl	20(%rsp), %ecx
 147 0130 8B542410 		movl	16(%rsp), %edx
 148 0134 8B74240C 		movl	12(%rsp), %esi
 149 0138 8B7C2408 		movl	8(%rsp), %edi
 150 013c E8000000 		call	_Z16XRectangleRegioniiii
 150      00
 151              	.LVL25:
 152              	.LBB26:
 153              	.LBB27:
 128:fltk-1.3.4-1/FL/fl_draw.H **** /** Undoes any clobbering of clip done by your program */
 129:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_restore_clip() { fl_graphics_driver->restore_clip(); }
 130:fltk-1.3.4-1/FL/fl_draw.H **** /**
 131:fltk-1.3.4-1/FL/fl_draw.H ****  Replaces the top of the clipping stack with a clipping region of any shape.
 132:fltk-1.3.4-1/FL/fl_draw.H ****  
 133:fltk-1.3.4-1/FL/fl_draw.H ****  Fl_Region is an operating system specific type.
 134:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r clipping region
 135:fltk-1.3.4-1/FL/fl_draw.H ****  */
 136:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_clip_region(Fl_Region r) { fl_graphics_driver->clip_region(r); }
 154              		.loc 2 136 0
 155 0141 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 155      000000
 156 0148 4889C6   		movq	%rax, %rsi
 157 014b E8000000 		call	_ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion
 157      00
 158              	.LVL26:
 159              	.LBE27:
 160              	.LBE26:
 161              		.loc 1 89 0
 162 0150 8B5C2410 		movl	16(%rsp), %ebx
 163 0154 E8000000 		call	_ZN9Fl_Window7currentEv
 163      00
 164              	.LVL27:
 165 0159 8B4C2414 		movl	20(%rsp), %ecx
 166 015d 8B54240C 		movl	12(%rsp), %edx
 167 0161 8B702C   		movl	44(%rax), %esi
 168 0164 8B7C2408 		movl	8(%rsp), %edi
 169 0168 01CA     		addl	%ecx, %edx
 170 016a 29D6     		subl	%edx, %esi
 171 016c 89DA     		movl	%ebx, %edx
 172 016e E8000000 		call	glScissor
 172      00
 173              	.LVL28:
 174              		.loc 1 90 0
 175 0173 BF110C00 		movl	$3089, %edi
 175      00
 176 0178 E8000000 		call	glEnable
 176      00
 177              	.LVL29:
 178              	.L1:
 179              	.LBE23:
 180              	.LBE22:
 181              		.loc 1 95 0
 182 017d 488B4424 		movq	24(%rsp), %rax
 182      18
 183 0182 64483304 		xorq	%fs:40, %rax
 183      25280000 
 183      00
 184 018b 7556     		jne	.L13
 185 018d 4883C420 		addq	$32, %rsp
 186              		.cfi_remember_state
 187              		.cfi_def_cfa_offset 16
 188 0191 5B       		popq	%rbx
 189              		.cfi_def_cfa_offset 8
 190 0192 C3       		ret
 191              		.p2align 4,,10
 192 0193 0F1F4400 		.p2align 3
 192      00
 193              	.L5:
 194              		.cfi_restore_state
 195              	.LBB29:
 196              	.LBB28:
 197              		.loc 1 92 0
 198 0198 BF110C00 		movl	$3089, %edi
 198      00
 199 019d E8000000 		call	glDisable
 199      00
 200              	.LVL30:
 201              	.LBE28:
 202              	.LBE29:
 203              		.loc 1 95 0
 204 01a2 EBD9     		jmp	.L1
 205              		.p2align 4,,10
 206 01a4 0F1F4000 		.p2align 3
 207              	.L12:
 208              		.loc 1 75 0 discriminator 2
 209 01a8 E8000000 		call	_ZN9Fl_Window7currentEv
 209      00
 210              	.LVL31:
 211 01ad 8B402C   		movl	44(%rax), %eax
 212              	.LVL32:
 213 01b0 39050000 		cmpl	%eax, _ZL2ph(%rip)
 213      0000
 214 01b6 0F8592FE 		jne	.L3
 214      FFFF
 215 01bc E902FFFF 		jmp	.L7
 215      FF
 216              		.p2align 4,,10
 217 01c1 0F1F8000 		.p2align 3
 217      000000
 218              	.L11:
 219              		.loc 1 59 0
 220 01c8 488B3D00 		movq	fl_visual(%rip), %rdi
 220      000000
 221 01cf E8000000 		call	_Z20fl_create_gl_contextP11XVisualInfo
 221      00
 222              	.LVL33:
 223 01d4 4889C3   		movq	%rax, %rbx
 224 01d7 48890500 		movq	%rax, _ZL7context(%rip)
 224      000000
 225 01de E942FEFF 		jmp	.L2
 225      FF
 226              	.L13:
 227              		.loc 1 95 0
 228 01e3 E8000000 		call	__stack_chk_fail
 228      00
 229              	.LVL34:
 230              		.cfi_endproc
 231              	.LFE475:
 233              		.section	.text.unlikely._Z8gl_startv
 234              	.LCOLDE3:
 235              		.section	.text._Z8gl_startv
 236              	.LHOTE3:
 237              		.section	.text.unlikely._Z9gl_finishv,"ax",@progbits
 238              	.LCOLDB4:
 239              		.section	.text._Z9gl_finishv,"ax",@progbits
 240              	.LHOTB4:
 241              		.p2align 4,,15
 242              		.globl	_Z9gl_finishv
 244              	_Z9gl_finishv:
 245              	.LFB476:
 246              		.loc 1 98 0
 247              		.cfi_startproc
 248 0000 4883EC08 		subq	$8, %rsp
 249              		.cfi_def_cfa_offset 16
 250              		.loc 1 99 0
 251 0004 E8000000 		call	glFlush
 251      00
 252              	.LVL35:
 253              		.loc 1 103 0
 254 0009 4883C408 		addq	$8, %rsp
 255              		.cfi_def_cfa_offset 8
 256              		.loc 1 101 0
 257 000d E9000000 		jmp	glXWaitGL
 257      00
 258              	.LVL36:
 259              		.cfi_endproc
 260              	.LFE476:
 262              		.section	.text.unlikely._Z9gl_finishv
 263              	.LCOLDE4:
 264              		.section	.text._Z9gl_finishv
 265              	.LHOTE4:
 266              		.section	.text.unlikely._ZN2Fl9gl_visualEiPi,"ax",@progbits
 267              		.align 2
 268              	.LCOLDB5:
 269              		.section	.text._ZN2Fl9gl_visualEiPi,"ax",@progbits
 270              	.LHOTB5:
 271              		.align 2
 272              		.p2align 4,,15
 273              		.globl	_ZN2Fl9gl_visualEiPi
 275              	_ZN2Fl9gl_visualEiPi:
 276              	.LFB477:
 277              		.loc 1 105 0
 278              		.cfi_startproc
 279              	.LVL37:
 280 0000 4883EC08 		subq	$8, %rsp
 281              		.cfi_def_cfa_offset 16
 282              		.loc 1 106 0
 283 0004 E8000000 		call	_ZN12Fl_Gl_Choice4findEiPKi
 283      00
 284              	.LVL38:
 285              		.loc 1 107 0
 286 0009 4885C0   		testq	%rax, %rax
 287 000c 7422     		je	.L18
 288              		.loc 1 109 0
 289 000e 488B5018 		movq	24(%rax), %rdx
 290              		.loc 1 110 0
 291 0012 488B4020 		movq	32(%rax), %rax
 292              	.LVL39:
 293              		.loc 1 109 0
 294 0016 48891500 		movq	%rdx, fl_visual(%rip)
 294      000000
 295              		.loc 1 110 0
 296 001d 48890500 		movq	%rax, fl_colormap(%rip)
 296      000000
 297              		.loc 1 118 0
 298 0024 B8010000 		movl	$1, %eax
 298      00
 299              		.loc 1 119 0
 300 0029 4883C408 		addq	$8, %rsp
 301              		.cfi_remember_state
 302              		.cfi_def_cfa_offset 8
 303 002d C3       		ret
 304              	.LVL40:
 305 002e 6690     		.p2align 4,,10
 306              		.p2align 3
 307              	.L18:
 308              		.cfi_restore_state
 309              		.loc 1 107 0
 310 0030 31C0     		xorl	%eax, %eax
 311              	.LVL41:
 312              		.loc 1 119 0
 313 0032 4883C408 		addq	$8, %rsp
 314              		.cfi_def_cfa_offset 8
 315 0036 C3       		ret
 316              		.cfi_endproc
 317              	.LFE477:
 319              		.section	.text.unlikely._ZN2Fl9gl_visualEiPi
 320              	.LCOLDE5:
 321              		.section	.text._ZN2Fl9gl_visualEiPi
 322              	.LHOTE5:
 323              		.section	.bss._ZL2ph,"aw",@nobits
 324              		.align 4
 327              	_ZL2ph:
 328 0000 00000000 		.zero	4
 329              		.section	.bss._ZL2pw,"aw",@nobits
 330              		.align 4
 333              	_ZL2pw:
 334 0000 00000000 		.zero	4
 335              		.section	.data._ZL17clip_state_number,"aw",@progbits
 336              		.align 4
 339              	_ZL17clip_state_number:
 340 0000 FFFFFFFF 		.long	-1
 341              		.section	.bss._ZL7context,"aw",@nobits
 342              		.align 8
 345              	_ZL7context:
 346 0000 00000000 		.zero	8
 346      00000000 
 347              		.section	.rodata.cst8,"aM",@progbits,8
 348              		.align 8
 349              	.LC0:
 350 0000 00000000 		.long	0
 351 0004 0000F03F 		.long	1072693248
 352              		.align 8
 353              	.LC1:
 354 0008 00000000 		.long	0
 355 000c 0000F0BF 		.long	-1074790400
 356              		.text
 357              	.Letext0:
 358              		.section	.text.unlikely._Z8gl_startv
 359              	.Letext_cold0:
 360              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 361              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 362              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 363              		.file 6 "/usr/include/libio.h"
 364              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 365              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 366              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 367              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 368              		.file 11 "/usr/include/X11/X.h"
 369              		.file 12 "/usr/include/X11/Xlib.h"
 370              		.file 13 "/usr/include/X11/Xutil.h"
 371              		.file 14 "fltk-1.3.4-1/FL/x.H"
 372              		.file 15 "fltk-1.3.4-1/FL/Fl_Device.H"
 373              		.file 16 "fltk-1.3.4-1/FL/Fl_Window.H"
 374              		.file 17 "/usr/include/GL/glx.h"
 375              		.file 18 "fltk-1.3.4-1/src/Fl_Gl_Choice.H"
 376              		.file 19 "/usr/include/stdio.h"
 377              		.file 20 "/usr/include/GL/gl.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 gl_start.cxx
     /tmp/cctfJrUv.s:14     .text._Z8gl_startv:0000000000000000 _Z8gl_startv
     /tmp/cctfJrUv.s:345    .bss._ZL7context:0000000000000000 _ZL7context
     /tmp/cctfJrUv.s:333    .bss._ZL2pw:0000000000000000 _ZL2pw
     /tmp/cctfJrUv.s:327    .bss._ZL2ph:0000000000000000 _ZL2ph
     /tmp/cctfJrUv.s:339    .data._ZL17clip_state_number:0000000000000000 _ZL17clip_state_number
     /tmp/cctfJrUv.s:244    .text._Z9gl_finishv:0000000000000000 _Z9gl_finishv
     /tmp/cctfJrUv.s:275    .text._ZN2Fl9gl_visualEiPi:0000000000000000 _ZN2Fl9gl_visualEiPi
     /tmp/cctfJrUv.s:349    .rodata.cst8:0000000000000000 .LC0
     /tmp/cctfJrUv.s:353    .rodata.cst8:0000000000000008 .LC1
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.gl.h.43.84f29899240cae392e798d586b4cdb86
                           .group:0000000000000000 wm4.gl.h.28.80167dfcc6aa1d0fdaa11461360ff2e9
                           .group:0000000000000000 wm4.glext.h.2.33ebf91cb2ac393e00fbf001cfd5adf6
                           .group:0000000000000000 wm4.glext.h.470.f1f9a32ea973d58e9e9d60b0d331a28b
                           .group:0000000000000000 wm4.wchar.h.20.510818a05484290d697a517509bf4b2d
                           .group:0000000000000000 wm4.stdint.h.52.8bda5d4f6e37fcdcd6c952c7de376f68
                           .group:0000000000000000 wm4.inttypes.h.32.c4dc77c414e5a88041490e6d2aa1116a
                           .group:0000000000000000 wm4.glext.h.1425.4660c46bd83bf818a1c8102c2fa59820
                           .group:0000000000000000 wm4.gl.h.2066.d218939585eb4fd8b54422df1c78229d
                           .group:0000000000000000 wm4.glx.h.27.6a49060015269f6bafe34881786b41ec
                           .group:0000000000000000 wm4.glxext.h.2.b4e8a31b7f042be05811d22657d85b23
                           .group:0000000000000000 wm4.glx.h.347.6b73155b2e226683d914b22e4387b260

UNDEFINED SYMBOLS
_ZN9Fl_Window7currentEv
_Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec
glXWaitX
glLoadIdentity
glViewport
glOrtho
glDrawBuffer
fl_graphics_driver
_Z16XRectangleRegioniiii
_ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion
glScissor
glEnable
glDisable
fl_visual
_Z20fl_create_gl_contextP11XVisualInfo
__stack_chk_fail
glFlush
glXWaitGL
_ZN12Fl_Gl_Choice4findEiPKi
fl_colormap
