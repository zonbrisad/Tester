   1              		.file	"Fl_Tiled_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN14Fl_Tiled_Image13color_averageEjf,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN14Fl_Tiled_Image13color_averageEjf,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN14Fl_Tiled_Image13color_averageEjf
  12              	.Ltext_cold0:
  13              		.section	.text._ZN14Fl_Tiled_Image13color_averageEjf
  14              		.globl	_ZN14Fl_Tiled_Image13color_averageEjf
  16              	_ZN14Fl_Tiled_Image13color_averageEjf:
  17              	.LFB479:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_Tiled_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_Tiled_Image.cxx **** ...
  19              		.loc 1 96 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 55       		pushq	%rbp
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 6, -16
  25 0001 53       		pushq	%rbx
  26              		.cfi_def_cfa_offset 24
  27              		.cfi_offset 3, -24
  28 0002 89F5     		movl	%esi, %ebp
  29 0004 4889FB   		movq	%rdi, %rbx
  30 0007 4883EC18 		subq	$24, %rsp
  31              		.cfi_def_cfa_offset 48
  32              		.loc 1 97 0
  33 000b 8B4730   		movl	48(%rdi), %eax
  34 000e 85C0     		testl	%eax, %eax
  35 0010 741E     		je	.L2
  36 0012 488B7F28 		movq	40(%rdi), %rdi
  37              	.LVL1:
  38              	.L3:
  39              		.loc 1 102 0
  40 0016 488B07   		movq	(%rdi), %rax
  41 0019 89EE     		movl	%ebp, %esi
  42 001b 488B4018 		movq	24(%rax), %rax
  43              		.loc 1 103 0
  44 001f 4883C418 		addq	$24, %rsp
  45              		.cfi_remember_state
  46              		.cfi_def_cfa_offset 24
  47 0023 5B       		popq	%rbx
  48              		.cfi_def_cfa_offset 16
  49              	.LVL2:
  50 0024 5D       		popq	%rbp
  51              		.cfi_def_cfa_offset 8
  52              	.LVL3:
  53              		.loc 1 102 0
  54 0025 FFE0     		jmp	*%rax
  55              	.LVL4:
  56 0027 660F1F84 		.p2align 4,,10
  56      00000000 
  56      00
  57              		.p2align 3
  58              	.L2:
  59              		.cfi_restore_state
  60              		.loc 1 98 0
  61 0030 488B7F28 		movq	40(%rdi), %rdi
  62              	.LVL5:
  63 0034 F30F1144 		movss	%xmm0, 12(%rsp)
  63      240C
  64              	.LBB48:
  65              	.LBB49:
  66              		.file 2 "fltk-1.3.4-1/FL/Fl_Image.H"
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
  67              		.loc 2 150 0
  68 003a 488B07   		movq	(%rdi), %rax
  69 003d 8B570C   		movl	12(%rdi), %edx
  70 0040 8B7708   		movl	8(%rdi), %esi
  71              	.LVL6:
  72 0043 FF5010   		call	*16(%rax)
  73              	.LVL7:
  74              	.LBE49:
  75              	.LBE48:
  76              		.loc 1 99 0
  77 0046 C7433001 		movl	$1, 48(%rbx)
  77      000000
  78              	.LBB51:
  79              	.LBB50:
  80              		.loc 2 150 0
  81 004d 4889C7   		movq	%rax, %rdi
  82              	.LBE50:
  83              	.LBE51:
  84              		.loc 1 98 0
  85 0050 48894328 		movq	%rax, 40(%rbx)
  86              		.loc 1 99 0
  87 0054 F30F1044 		movss	12(%rsp), %xmm0
  87      240C
  88 005a EBBA     		jmp	.L3
  89              		.cfi_endproc
  90              	.LFE479:
  92              		.section	.text.unlikely._ZN14Fl_Tiled_Image13color_averageEjf
  93              	.LCOLDE0:
  94              		.section	.text._ZN14Fl_Tiled_Image13color_averageEjf
  95              	.LHOTE0:
  96              		.section	.text.unlikely._ZN14Fl_Tiled_Image10desaturateEv,"ax",@progbits
  97              		.align 2
  98              	.LCOLDB1:
  99              		.section	.text._ZN14Fl_Tiled_Image10desaturateEv,"ax",@progbits
 100              	.LHOTB1:
 101              		.align 2
 102              		.p2align 4,,15
 103              		.globl	_ZN14Fl_Tiled_Image10desaturateEv
 105              	_ZN14Fl_Tiled_Image10desaturateEv:
 106              	.LFB480:
 107              		.loc 1 111 0
 108              		.cfi_startproc
 109              	.LVL8:
 110              		.loc 1 112 0
 111 0000 8B4730   		movl	48(%rdi), %eax
 112 0003 85C0     		testl	%eax, %eax
 113 0005 7411     		je	.L7
 114 0007 488B7F28 		movq	40(%rdi), %rdi
 115              	.LVL9:
 116              		.loc 1 117 0
 117 000b 488B07   		movq	(%rdi), %rax
 118 000e FF6020   		jmp	*32(%rax)
 119              	.LVL10:
 120              		.p2align 4,,10
 121 0011 0F1F8000 		.p2align 3
 121      000000
 122              	.L7:
 123              		.loc 1 111 0
 124 0018 53       		pushq	%rbx
 125              		.cfi_def_cfa_offset 16
 126              		.cfi_offset 3, -16
 127 0019 4889FB   		movq	%rdi, %rbx
 128              		.loc 1 113 0
 129 001c 488B7F28 		movq	40(%rdi), %rdi
 130              	.LVL11:
 131              	.LBB52:
 132              	.LBB53:
 133              		.loc 2 150 0
 134 0020 488B07   		movq	(%rdi), %rax
 135 0023 8B570C   		movl	12(%rdi), %edx
 136 0026 8B7708   		movl	8(%rdi), %esi
 137 0029 FF5010   		call	*16(%rax)
 138              	.LVL12:
 139              	.LBE53:
 140              	.LBE52:
 141              		.loc 1 114 0
 142 002c C7433001 		movl	$1, 48(%rbx)
 142      000000
 143              		.loc 1 113 0
 144 0033 48894328 		movq	%rax, 40(%rbx)
 145              	.LBB55:
 146              	.LBB54:
 147              		.loc 2 150 0
 148 0037 4889C7   		movq	%rax, %rdi
 149              	.LBE54:
 150              	.LBE55:
 151              		.loc 1 117 0
 152 003a 488B00   		movq	(%rax), %rax
 153              		.loc 1 118 0
 154 003d 5B       		popq	%rbx
 155              		.cfi_restore 3
 156              		.cfi_def_cfa_offset 8
 157              	.LVL13:
 158              		.loc 1 117 0
 159 003e 488B4020 		movq	32(%rax), %rax
 160 0042 FFE0     		jmp	*%rax
 161              	.LVL14:
 162              		.cfi_endproc
 163              	.LFE480:
 165              		.section	.text.unlikely._ZN14Fl_Tiled_Image10desaturateEv
 166              	.LCOLDE1:
 167              		.section	.text._ZN14Fl_Tiled_Image10desaturateEv
 168              	.LHOTE1:
 169              		.section	.text.unlikely._ZN14Fl_Tiled_ImageD2Ev,"ax",@progbits
 170              		.align 2
 171              	.LCOLDB2:
 172              		.section	.text._ZN14Fl_Tiled_ImageD2Ev,"ax",@progbits
 173              	.LHOTB2:
 174              		.align 2
 175              		.p2align 4,,15
 176              		.globl	_ZN14Fl_Tiled_ImageD2Ev
 178              	_ZN14Fl_Tiled_ImageD2Ev:
 179              	.LFB475:
 180              		.loc 1 73 0
 181              		.cfi_startproc
 182              	.LVL15:
 183 0000 53       		pushq	%rbx
 184              		.cfi_def_cfa_offset 16
 185              		.cfi_offset 3, -16
 186              	.LBB56:
 187              		.loc 1 74 0
 188 0001 8B4730   		movl	48(%rdi), %eax
 189              	.LBE56:
 190              		.loc 1 73 0
 191 0004 4889FB   		movq	%rdi, %rbx
 192              	.LBB57:
 193 0007 48C70700 		movq	$_ZTV14Fl_Tiled_Image+16, (%rdi)
 193      000000
 194              		.loc 1 74 0
 195 000e 85C0     		testl	%eax, %eax
 196 0010 740F     		je	.L11
 197              		.loc 1 74 0 is_stmt 0 discriminator 1
 198 0012 488B7F28 		movq	40(%rdi), %rdi
 199              	.LVL16:
 200 0016 4885FF   		testq	%rdi, %rdi
 201 0019 7406     		je	.L11
 202              		.loc 1 74 0 discriminator 2
 203 001b 488B07   		movq	(%rdi), %rax
 204 001e FF5008   		call	*8(%rax)
 205              	.LVL17:
 206              	.L11:
 207              		.loc 1 73 0 is_stmt 1
 208 0021 4889DF   		movq	%rbx, %rdi
 209              	.LBE57:
 210              		.loc 1 75 0
 211 0024 5B       		popq	%rbx
 212              		.cfi_def_cfa_offset 8
 213              	.LVL18:
 214              	.LBB58:
 215              		.loc 1 73 0
 216 0025 E9000000 		jmp	_ZN8Fl_ImageD2Ev
 216      00
 217              	.LVL19:
 218              	.LBE58:
 219              		.cfi_endproc
 220              	.LFE475:
 222              		.section	.text.unlikely._ZN14Fl_Tiled_ImageD2Ev
 223              	.LCOLDE2:
 224              		.section	.text._ZN14Fl_Tiled_ImageD2Ev
 225              	.LHOTE2:
 226              		.globl	_ZN14Fl_Tiled_ImageD1Ev
 227              		.set	_ZN14Fl_Tiled_ImageD1Ev,_ZN14Fl_Tiled_ImageD2Ev
 228              		.section	.text.unlikely._ZN14Fl_Tiled_ImageD0Ev,"ax",@progbits
 229              		.align 2
 230              	.LCOLDB3:
 231              		.section	.text._ZN14Fl_Tiled_ImageD0Ev,"ax",@progbits
 232              	.LHOTB3:
 233              		.align 2
 234              		.p2align 4,,15
 235              		.globl	_ZN14Fl_Tiled_ImageD0Ev
 237              	_ZN14Fl_Tiled_ImageD0Ev:
 238              	.LFB477:
 239              		.loc 1 73 0
 240              		.cfi_startproc
 241              	.LVL20:
 242 0000 53       		pushq	%rbx
 243              		.cfi_def_cfa_offset 16
 244              		.cfi_offset 3, -16
 245              		.loc 1 73 0
 246 0001 4889FB   		movq	%rdi, %rbx
 247              		.loc 1 75 0
 248 0004 E8000000 		call	_ZN14Fl_Tiled_ImageD1Ev
 248      00
 249              	.LVL21:
 250 0009 4889DF   		movq	%rbx, %rdi
 251 000c 5B       		popq	%rbx
 252              		.cfi_def_cfa_offset 8
 253              	.LVL22:
 254 000d E9000000 		jmp	_ZdlPv
 254      00
 255              	.LVL23:
 256              		.cfi_endproc
 257              	.LFE477:
 259              		.section	.text.unlikely._ZN14Fl_Tiled_ImageD0Ev
 260              	.LCOLDE3:
 261              		.section	.text._ZN14Fl_Tiled_ImageD0Ev
 262              	.LHOTE3:
 263              		.section	.text.unlikely._ZN14Fl_Tiled_Image4drawEiiiiii,"ax",@progbits
 264              		.align 2
 265              	.LCOLDB4:
 266              		.section	.text._ZN14Fl_Tiled_Image4drawEiiiiii,"ax",@progbits
 267              	.LHOTB4:
 268              		.align 2
 269              		.p2align 4,,15
 270              		.globl	_ZN14Fl_Tiled_Image4drawEiiiiii
 272              	_ZN14Fl_Tiled_Image4drawEiiiiii:
 273              	.LFB481:
 274              		.loc 1 158 0
 275              		.cfi_startproc
 276              	.LVL24:
 277 0000 4157     		pushq	%r15
 278              		.cfi_def_cfa_offset 16
 279              		.cfi_offset 15, -16
 280 0002 4156     		pushq	%r14
 281              		.cfi_def_cfa_offset 24
 282              		.cfi_offset 14, -24
 283 0004 4155     		pushq	%r13
 284              		.cfi_def_cfa_offset 32
 285              		.cfi_offset 13, -32
 286 0006 4154     		pushq	%r12
 287              		.cfi_def_cfa_offset 40
 288              		.cfi_offset 12, -40
 289 0008 55       		pushq	%rbp
 290              		.cfi_def_cfa_offset 48
 291              		.cfi_offset 6, -48
 292 0009 53       		pushq	%rbx
 293              		.cfi_def_cfa_offset 56
 294              		.cfi_offset 3, -56
 295 000a 89D5     		movl	%edx, %ebp
 296 000c 4883EC18 		subq	$24, %rsp
 297              		.cfi_def_cfa_offset 80
 298              		.loc 1 160 0
 299 0010 488B4728 		movq	40(%rdi), %rax
 300              		.loc 1 158 0
 301 0014 893424   		movl	%esi, (%rsp)
 302 0017 44894424 		movl	%r8d, 4(%rsp)
 302      04
 303 001c 8B542450 		movl	80(%rsp), %edx
 304              	.LVL25:
 305 0020 8B5808   		movl	8(%rax), %ebx
 306              	.LVL26:
 307 0023 448B600C 		movl	12(%rax), %r12d
 308              	.LVL27:
 309              		.loc 1 163 0
 310 0027 85DB     		testl	%ebx, %ebx
 311 0029 0F845101 		je	.L18
 311      0000
 312 002f 4585E4   		testl	%r12d, %r12d
 313 0032 0F844801 		je	.L18
 313      0000
 314              		.loc 1 164 0
 315 0038 4139D9   		cmpl	%ebx, %r9d
 316 003b 0F8D3F01 		jge	.L18
 316      0000
 317 0041 4439E2   		cmpl	%r12d, %edx
 318 0044 0F8D3601 		jge	.L18
 318      0000
 319              		.loc 1 174 0
 320 004a 4489C0   		movl	%r8d, %eax
 321              	.LVL28:
 322 004d 4989FE   		movq	%rdi, %r14
 323 0050 4189CD   		movl	%ecx, %r13d
 324              	.LVL29:
 325 0053 09C8     		orl	%ecx, %eax
 326 0055 0F843501 		je	.L39
 326      0000
 327              	.LVL30:
 328              	.L32:
 329              		.loc 1 180 0
 330 005b 4585ED   		testl	%r13d, %r13d
 331 005e 0F841C01 		je	.L18
 331      0000
 332 0064 448B7C24 		movl	4(%rsp), %r15d
 332      04
 333 0069 4585FF   		testl	%r15d, %r15d
 334 006c 0F840E01 		je	.L18
 334      0000
 335              	.LVL31:
 336 0072 31C0     		xorl	%eax, %eax
 337              	.LBB59:
 338              	.LBB60:
 339              		.file 3 "fltk-1.3.4-1/FL/fl_draw.H"
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
 340              		.loc 3 82 0
 341 0074 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 341      000000
 342 007b 4585C9   		testl	%r9d, %r9d
 343 007e 440F48C8 		cmovs	%eax, %r9d
 344 0082 85D2     		testl	%edx, %edx
 345 0084 4589F8   		movl	%r15d, %r8d
 346 0087 0F49C2   		cmovns	%edx, %eax
 347 008a 44894C24 		movl	%r9d, 12(%rsp)
 347      0C
 348 008f 4489E9   		movl	%r13d, %ecx
 349 0092 89442408 		movl	%eax, 8(%rsp)
 350 0096 488B07   		movq	(%rdi), %rax
 351 0099 89EA     		movl	%ebp, %edx
 352 009b 8B3424   		movl	(%rsp), %esi
 353 009e FF905001 		call	*336(%rax)
 353      0000
 354              	.LVL32:
 355              	.LBE60:
 356              	.LBE59:
 357              		.loc 1 184 0
 358 00a4 2B5C240C 		subl	12(%rsp), %ebx
 359              	.LVL33:
 360              		.loc 1 185 0
 361 00a8 442B6424 		subl	8(%rsp), %r12d
 361      08
 362              	.LVL34:
 363              	.LBB61:
 364              		.loc 1 187 0
 365 00ad 4439FD   		cmpl	%r15d, %ebp
 366 00b0 0F8D9F00 		jge	.L27
 366      0000
 367              	.LVL35:
 368 00b6 662E0F1F 		.p2align 4,,10
 368      84000000 
 368      0000
 369              		.p2align 3
 370              	.L35:
 371              	.LBB62:
 372              	.LBB63:
 373              	.LBB64:
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
 374              		.loc 3 114 0
 375 00c0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 375      000000
 376 00c7 4589E0   		movl	%r12d, %r8d
 377 00ca 4489E9   		movl	%r13d, %ecx
 378 00cd 89EA     		movl	%ebp, %edx
 379 00cf 8B3424   		movl	(%rsp), %esi
 380 00d2 488B07   		movq	(%rdi), %rax
 381 00d5 FF906001 		call	*352(%rax)
 381      0000
 382              	.LVL36:
 383              	.LBE64:
 384              	.LBE63:
 385              		.loc 1 188 0
 386 00db 85C0     		testl	%eax, %eax
 387 00dd 7469     		je	.L29
 388              	.LVL37:
 389              	.LBB65:
 390              		.loc 1 189 0 discriminator 1
 391 00df 8B0424   		movl	(%rsp), %eax
 392 00e2 4439E8   		cmpl	%r13d, %eax
 393 00e5 7D61     		jge	.L29
 394              		.loc 1 189 0 is_stmt 0
 395 00e7 4189C7   		movl	%eax, %r15d
 396 00ea EB0C     		jmp	.L31
 397              	.LVL38:
 398 00ec 0F1F4000 		.p2align 4,,10
 399              		.p2align 3
 400              	.L30:
 401              		.loc 1 189 0 discriminator 2
 402 00f0 4101DF   		addl	%ebx, %r15d
 403              	.LVL39:
 404 00f3 4539FD   		cmpl	%r15d, %r13d
 405 00f6 7E50     		jle	.L29
 406              	.L31:
 407              	.LVL40:
 408              	.LBB66:
 409              	.LBB67:
 410              		.loc 3 114 0 is_stmt 1
 411 00f8 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 411      000000
 412 00ff 4589E0   		movl	%r12d, %r8d
 413 0102 89D9     		movl	%ebx, %ecx
 414 0104 89EA     		movl	%ebp, %edx
 415 0106 4489FE   		movl	%r15d, %esi
 416 0109 488B07   		movq	(%rdi), %rax
 417 010c FF906001 		call	*352(%rax)
 417      0000
 418              	.LVL41:
 419              	.LBE67:
 420              	.LBE66:
 421              		.loc 1 190 0
 422 0112 85C0     		testl	%eax, %eax
 423 0114 74DA     		je	.L30
 424              		.loc 1 191 0
 425 0116 498B7E28 		movq	40(%r14), %rdi
 426 011a 4883EC08 		subq	$8, %rsp
 427              		.cfi_def_cfa_offset 88
 428              	.LVL42:
 429 011e 4489FE   		movl	%r15d, %esi
 430 0121 8B4C2410 		movl	16(%rsp), %ecx
 431              		.loc 1 189 0
 432 0125 4101DF   		addl	%ebx, %r15d
 433              	.LVL43:
 434              		.loc 1 191 0
 435 0128 89EA     		movl	%ebp, %edx
 436 012a 4589E0   		movl	%r12d, %r8d
 437 012d 488B07   		movq	(%rdi), %rax
 438 0130 51       		pushq	%rcx
 439              		.cfi_def_cfa_offset 96
 440 0131 89D9     		movl	%ebx, %ecx
 441 0133 448B4C24 		movl	28(%rsp), %r9d
 441      1C
 442 0138 FF5038   		call	*56(%rax)
 443              	.LVL44:
 444              		.loc 1 189 0
 445 013b 4539FD   		cmpl	%r15d, %r13d
 446 013e 58       		popq	%rax
 447              		.cfi_def_cfa_offset 88
 448 013f 5A       		popq	%rdx
 449              		.cfi_def_cfa_offset 80
 450              	.LVL45:
 451 0140 7FB6     		jg	.L31
 452              	.LVL46:
 453              		.p2align 4,,10
 454 0142 660F1F44 		.p2align 3
 454      0000
 455              	.L29:
 456              	.LBE65:
 457              	.LBE62:
 458              		.loc 1 187 0
 459 0148 4401E5   		addl	%r12d, %ebp
 460              	.LVL47:
 461 014b 396C2404 		cmpl	%ebp, 4(%rsp)
 462 014f 0F8F6BFF 		jg	.L35
 462      FFFF
 463              	.L27:
 464              	.LBE61:
 465              	.LBB68:
 466              	.LBB69:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 467              		.loc 3 103 0
 468 0155 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 468      000000
 469 015c 488B07   		movq	(%rdi), %rax
 470 015f 488B8070 		movq	368(%rax), %rax
 470      010000
 471              	.LBE69:
 472              	.LBE68:
 473              		.loc 1 197 0
 474 0166 4883C418 		addq	$24, %rsp
 475              		.cfi_remember_state
 476              		.cfi_def_cfa_offset 56
 477              	.LVL48:
 478 016a 5B       		popq	%rbx
 479              		.cfi_def_cfa_offset 48
 480              	.LVL49:
 481 016b 5D       		popq	%rbp
 482              		.cfi_def_cfa_offset 40
 483              	.LVL50:
 484 016c 415C     		popq	%r12
 485              		.cfi_def_cfa_offset 32
 486              	.LVL51:
 487 016e 415D     		popq	%r13
 488              		.cfi_def_cfa_offset 24
 489              	.LVL52:
 490 0170 415E     		popq	%r14
 491              		.cfi_def_cfa_offset 16
 492              	.LVL53:
 493 0172 415F     		popq	%r15
 494              		.cfi_def_cfa_offset 8
 495              	.LBB71:
 496              	.LBB70:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 497              		.loc 3 103 0
 498 0174 FFE0     		jmp	*%rax
 499              	.LVL54:
 500 0176 662E0F1F 		.p2align 4,,10
 500      84000000 
 500      0000
 501              		.p2align 3
 502              	.L18:
 503              		.cfi_restore_state
 504              	.LBE70:
 505              	.LBE71:
 506              		.loc 1 197 0
 507 0180 4883C418 		addq	$24, %rsp
 508              		.cfi_remember_state
 509              		.cfi_def_cfa_offset 56
 510              	.LVL55:
 511 0184 5B       		popq	%rbx
 512              		.cfi_def_cfa_offset 48
 513 0185 5D       		popq	%rbp
 514              		.cfi_def_cfa_offset 40
 515              	.LVL56:
 516 0186 415C     		popq	%r12
 517              		.cfi_def_cfa_offset 32
 518 0188 415D     		popq	%r13
 519              		.cfi_def_cfa_offset 24
 520 018a 415E     		popq	%r14
 521              		.cfi_def_cfa_offset 16
 522 018c 415F     		popq	%r15
 523              		.cfi_def_cfa_offset 8
 524 018e C3       		ret
 525              	.LVL57:
 526 018f 90       		.p2align 4,,10
 527              		.p2align 3
 528              	.L39:
 529              		.cfi_restore_state
 530 0190 8954240C 		movl	%edx, 12(%rsp)
 531 0194 44894C24 		movl	%r9d, 8(%rsp)
 531      08
 532              		.loc 1 174 0 discriminator 1
 533 0199 E8000000 		call	_ZN9Fl_Window7currentEv
 533      00
 534              	.LVL58:
 535 019e 4885C0   		testq	%rax, %rax
 536 01a1 448B4C24 		movl	8(%rsp), %r9d
 536      08
 537 01a6 8B54240C 		movl	12(%rsp), %edx
 538 01aa 0F84ABFE 		je	.L32
 538      FFFF
 539 01b0 8954240C 		movl	%edx, 12(%rsp)
 540 01b4 44894C24 		movl	%r9d, 8(%rsp)
 540      08
 541              	.LVL59:
 542              		.loc 1 177 0
 543 01b9 31ED     		xorl	%ebp, %ebp
 544              	.LVL60:
 545              		.loc 1 175 0
 546 01bb E8000000 		call	_ZN9Fl_Window7currentEv
 546      00
 547              	.LVL61:
 548 01c0 448B6828 		movl	40(%rax), %r13d
 549              	.LVL62:
 550              		.loc 1 176 0
 551 01c4 E8000000 		call	_ZN9Fl_Window7currentEv
 551      00
 552              	.LVL63:
 553 01c9 8B402C   		movl	44(%rax), %eax
 554              		.loc 1 177 0
 555 01cc C7042400 		movl	$0, (%rsp)
 555      000000
 556              	.LVL64:
 557 01d3 448B4C24 		movl	8(%rsp), %r9d
 557      08
 558 01d8 8B54240C 		movl	12(%rsp), %edx
 559 01dc 89442404 		movl	%eax, 4(%rsp)
 560              	.LVL65:
 561 01e0 E976FEFF 		jmp	.L32
 561      FF
 562              		.cfi_endproc
 563              	.LFE481:
 565              		.section	.text.unlikely._ZN14Fl_Tiled_Image4drawEiiiiii
 566              	.LCOLDE4:
 567              		.section	.text._ZN14Fl_Tiled_Image4drawEiiiiii
 568              	.LHOTE4:
 569              		.section	.text.unlikely._ZN14Fl_Tiled_Image4copyEii,"ax",@progbits
 570              		.align 2
 571              	.LCOLDB5:
 572              		.section	.text._ZN14Fl_Tiled_Image4copyEii,"ax",@progbits
 573              	.LHOTB5:
 574              		.align 2
 575              		.p2align 4,,15
 576              		.globl	_ZN14Fl_Tiled_Image4copyEii
 578              	_ZN14Fl_Tiled_Image4copyEii:
 579              	.LFB478:
 580              		.loc 1 84 0
 581              		.cfi_startproc
 582              	.LVL66:
 583 0000 4155     		pushq	%r13
 584              		.cfi_def_cfa_offset 16
 585              		.cfi_offset 13, -16
 586 0002 4154     		pushq	%r12
 587              		.cfi_def_cfa_offset 24
 588              		.cfi_offset 12, -24
 589 0004 55       		pushq	%rbp
 590              		.cfi_def_cfa_offset 32
 591              		.cfi_offset 6, -32
 592 0005 53       		pushq	%rbx
 593              		.cfi_def_cfa_offset 40
 594              		.cfi_offset 3, -40
 595 0006 4883EC08 		subq	$8, %rsp
 596              		.cfi_def_cfa_offset 48
 597              		.loc 1 85 0
 598 000a 3B7708   		cmpl	8(%rdi), %esi
 599 000d 7451     		je	.L46
 600              	.L41:
 601 000f 4889FD   		movq	%rdi, %rbp
 602              	.LVL67:
 603              	.LBB81:
 604              	.LBB82:
 605              		.loc 1 86 0
 606 0012 BF380000 		movl	$56, %edi
 606      00
 607              	.LVL68:
 608 0017 4189D5   		movl	%edx, %r13d
 609 001a 4189F4   		movl	%esi, %r12d
 610              	.LVL69:
 611 001d E8000000 		call	_Znwm
 611      00
 612              	.LVL70:
 613 0022 488B6D28 		movq	40(%rbp), %rbp
 614              	.LVL71:
 615 0026 4889C3   		movq	%rax, %rbx
 616              	.LBB83:
 617              	.LBB84:
 618              		.loc 1 60 0
 619 0029 4889C7   		movq	%rax, %rdi
 620 002c 31C9     		xorl	%ecx, %ecx
 621 002e 4489EA   		movl	%r13d, %edx
 622 0031 4489E6   		movl	%r12d, %esi
 623 0034 E8000000 		call	_ZN8Fl_ImageC2Eiii
 623      00
 624              	.LVL72:
 625 0039 48C70300 		movq	$_ZTV14Fl_Tiled_Image+16, (%rbx)
 625      000000
 626              		.loc 1 61 0
 627 0040 48896B28 		movq	%rbp, 40(%rbx)
 628              		.loc 1 62 0
 629 0044 4889D8   		movq	%rbx, %rax
 630 0047 C7433000 		movl	$0, 48(%rbx)
 630      000000
 631              	.LVL73:
 632              	.L44:
 633              	.LBE84:
 634              	.LBE83:
 635              	.LBE82:
 636              	.LBE81:
 637              		.loc 1 87 0
 638 004e 4883C408 		addq	$8, %rsp
 639              		.cfi_remember_state
 640              		.cfi_def_cfa_offset 40
 641 0052 5B       		popq	%rbx
 642              		.cfi_def_cfa_offset 32
 643 0053 5D       		popq	%rbp
 644              		.cfi_def_cfa_offset 24
 645 0054 415C     		popq	%r12
 646              		.cfi_def_cfa_offset 16
 647 0056 415D     		popq	%r13
 648              		.cfi_def_cfa_offset 8
 649 0058 C3       		ret
 650              	.LVL74:
 651 0059 0F1F8000 		.p2align 4,,10
 651      000000
 652              		.p2align 3
 653              	.L46:
 654              		.cfi_restore_state
 655              		.loc 1 85 0 discriminator 1
 656 0060 3B570C   		cmpl	12(%rdi), %edx
 657 0063 4889F8   		movq	%rdi, %rax
 658 0066 75A7     		jne	.L41
 659              	.LVL75:
 660 0068 EBE4     		jmp	.L44
 661              		.cfi_endproc
 662              	.LFE478:
 664              		.section	.text.unlikely._ZN14Fl_Tiled_Image4copyEii
 665              	.LCOLDE5:
 666              		.section	.text._ZN14Fl_Tiled_Image4copyEii
 667              	.LHOTE5:
 668              		.section	.text.unlikely._ZN14Fl_Tiled_ImageC2EP8Fl_Imageii,"ax",@progbits
 669              		.align 2
 670              	.LCOLDB6:
 671              		.section	.text._ZN14Fl_Tiled_ImageC2EP8Fl_Imageii,"ax",@progbits
 672              	.LHOTB6:
 673              		.align 2
 674              		.p2align 4,,15
 675              		.globl	_ZN14Fl_Tiled_ImageC2EP8Fl_Imageii
 677              	_ZN14Fl_Tiled_ImageC2EP8Fl_Imageii:
 678              	.LFB472:
 679              		.loc 1 57 0
 680              		.cfi_startproc
 681              	.LVL76:
 682 0000 55       		pushq	%rbp
 683              		.cfi_def_cfa_offset 16
 684              		.cfi_offset 6, -16
 685 0001 53       		pushq	%rbx
 686              		.cfi_def_cfa_offset 24
 687              		.cfi_offset 3, -24
 688 0002 4889F5   		movq	%rsi, %rbp
 689 0005 4889FB   		movq	%rdi, %rbx
 690 0008 89D6     		movl	%edx, %esi
 691              	.LVL77:
 692 000a 89CA     		movl	%ecx, %edx
 693              	.LVL78:
 694 000c 4883EC08 		subq	$8, %rsp
 695              		.cfi_def_cfa_offset 32
 696              	.LBB85:
 697              		.loc 1 60 0
 698 0010 31C9     		xorl	%ecx, %ecx
 699              	.LVL79:
 700 0012 E8000000 		call	_ZN8Fl_ImageC2Eiii
 700      00
 701              	.LVL80:
 702              		.loc 1 61 0
 703 0017 48896B28 		movq	%rbp, 40(%rbx)
 704              		.loc 1 60 0
 705 001b 48C70300 		movq	$_ZTV14Fl_Tiled_Image+16, (%rbx)
 705      000000
 706              		.loc 1 62 0
 707 0022 C7433000 		movl	$0, 48(%rbx)
 707      000000
 708              	.LBE85:
 709              		.loc 1 68 0
 710 0029 4883C408 		addq	$8, %rsp
 711              		.cfi_def_cfa_offset 24
 712 002d 5B       		popq	%rbx
 713              		.cfi_def_cfa_offset 16
 714              	.LVL81:
 715 002e 5D       		popq	%rbp
 716              		.cfi_def_cfa_offset 8
 717              	.LVL82:
 718 002f C3       		ret
 719              		.cfi_endproc
 720              	.LFE472:
 722              		.section	.text.unlikely._ZN14Fl_Tiled_ImageC2EP8Fl_Imageii
 723              	.LCOLDE6:
 724              		.section	.text._ZN14Fl_Tiled_ImageC2EP8Fl_Imageii
 725              	.LHOTE6:
 726              		.globl	_ZN14Fl_Tiled_ImageC1EP8Fl_Imageii
 727              		.set	_ZN14Fl_Tiled_ImageC1EP8Fl_Imageii,_ZN14Fl_Tiled_ImageC2EP8Fl_Imageii
 728              		.weak	_ZTS14Fl_Tiled_Image
 729              		.section	.rodata._ZTS14Fl_Tiled_Image,"aG",@progbits,_ZTS14Fl_Tiled_Image,comdat
 730              		.align 16
 733              	_ZTS14Fl_Tiled_Image:
 734 0000 3134466C 		.string	"14Fl_Tiled_Image"
 734      5F54696C 
 734      65645F49 
 734      6D616765 
 734      00
 735              		.weak	_ZTI14Fl_Tiled_Image
 736              		.section	.rodata._ZTI14Fl_Tiled_Image,"aG",@progbits,_ZTI14Fl_Tiled_Image,comdat
 737              		.align 8
 740              	_ZTI14Fl_Tiled_Image:
 741 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 741      00000000 
 742 0008 00000000 		.quad	_ZTS14Fl_Tiled_Image
 742      00000000 
 743 0010 00000000 		.quad	_ZTI8Fl_Image
 743      00000000 
 744              		.weak	_ZTV14Fl_Tiled_Image
 745              		.section	.rodata._ZTV14Fl_Tiled_Image,"aG",@progbits,_ZTV14Fl_Tiled_Image,comdat
 746              		.align 8
 749              	_ZTV14Fl_Tiled_Image:
 750 0000 00000000 		.quad	0
 750      00000000 
 751 0008 00000000 		.quad	_ZTI14Fl_Tiled_Image
 751      00000000 
 752 0010 00000000 		.quad	_ZN14Fl_Tiled_ImageD1Ev
 752      00000000 
 753 0018 00000000 		.quad	_ZN14Fl_Tiled_ImageD0Ev
 753      00000000 
 754 0020 00000000 		.quad	_ZN14Fl_Tiled_Image4copyEii
 754      00000000 
 755 0028 00000000 		.quad	_ZN14Fl_Tiled_Image13color_averageEjf
 755      00000000 
 756 0030 00000000 		.quad	_ZN14Fl_Tiled_Image10desaturateEv
 756      00000000 
 757 0038 00000000 		.quad	_ZN8Fl_Image5labelEP9Fl_Widget
 757      00000000 
 758 0040 00000000 		.quad	_ZN8Fl_Image5labelEP12Fl_Menu_Item
 758      00000000 
 759 0048 00000000 		.quad	_ZN14Fl_Tiled_Image4drawEiiiiii
 759      00000000 
 760 0050 00000000 		.quad	_ZN8Fl_Image7uncacheEv
 760      00000000 
 761              		.text
 762              	.Letext0:
 763              		.section	.text.unlikely._ZN14Fl_Tiled_Image13color_averageEjf
 764              	.Letext_cold0:
 765              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 766              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 767              		.file 6 "/usr/include/libio.h"
 768              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 769              		.file 8 "fltk-1.3.4-1/FL/Fl_Widget.H"
 770              		.file 9 "fltk-1.3.4-1/FL/Fl_Device.H"
 771              		.file 10 "fltk-1.3.4-1/FL/Fl_Tiled_Image.H"
 772              		.file 11 "/usr/include/stdio.h"
 773              		.file 12 "fltk-1.3.4-1/FL/Fl_Window.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Tiled_Image.cxx
     /tmp/cchYcxFe.s:16     .text._ZN14Fl_Tiled_Image13color_averageEjf:0000000000000000 _ZN14Fl_Tiled_Image13color_averageEjf
     /tmp/cchYcxFe.s:105    .text._ZN14Fl_Tiled_Image10desaturateEv:0000000000000000 _ZN14Fl_Tiled_Image10desaturateEv
     /tmp/cchYcxFe.s:178    .text._ZN14Fl_Tiled_ImageD2Ev:0000000000000000 _ZN14Fl_Tiled_ImageD2Ev
     /tmp/cchYcxFe.s:749    .rodata._ZTV14Fl_Tiled_Image:0000000000000000 _ZTV14Fl_Tiled_Image
     /tmp/cchYcxFe.s:178    .text._ZN14Fl_Tiled_ImageD2Ev:0000000000000000 _ZN14Fl_Tiled_ImageD1Ev
     /tmp/cchYcxFe.s:237    .text._ZN14Fl_Tiled_ImageD0Ev:0000000000000000 _ZN14Fl_Tiled_ImageD0Ev
     /tmp/cchYcxFe.s:272    .text._ZN14Fl_Tiled_Image4drawEiiiiii:0000000000000000 _ZN14Fl_Tiled_Image4drawEiiiiii
     /tmp/cchYcxFe.s:578    .text._ZN14Fl_Tiled_Image4copyEii:0000000000000000 _ZN14Fl_Tiled_Image4copyEii
     /tmp/cchYcxFe.s:677    .text._ZN14Fl_Tiled_ImageC2EP8Fl_Imageii:0000000000000000 _ZN14Fl_Tiled_ImageC2EP8Fl_Imageii
     /tmp/cchYcxFe.s:677    .text._ZN14Fl_Tiled_ImageC2EP8Fl_Imageii:0000000000000000 _ZN14Fl_Tiled_ImageC1EP8Fl_Imageii
     /tmp/cchYcxFe.s:733    .rodata._ZTS14Fl_Tiled_Image:0000000000000000 _ZTS14Fl_Tiled_Image
     /tmp/cchYcxFe.s:740    .rodata._ZTI14Fl_Tiled_Image:0000000000000000 _ZTI14Fl_Tiled_Image
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

UNDEFINED SYMBOLS
_ZN8Fl_ImageD2Ev
_ZdlPv
fl_graphics_driver
_ZN9Fl_Window7currentEv
_Znwm
_ZN8Fl_ImageC2Eiii
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Image
_ZN8Fl_Image5labelEP9Fl_Widget
_ZN8Fl_Image5labelEP12Fl_Menu_Item
_ZN8Fl_Image7uncacheEv
